/* Test 14d: the write gate and the cost of file writes (see wgate.h). The busy test uses
 * band 0 (thread 2): the USB thread shares a core with band 1's thread, never with band 0's,
 * so band 0 shows the game's blitter load with or without a write going on. */
#include <stdio.h>
#include <string.h>

#include <ppc/timebase.h>

#include "card.h"
#include "prof.h"
#include "wgate.h"

uint64_t tb_read(void);
unsigned tb_us(uint64_t a, uint64_t b);
/* source/tdelay.c (the PC harness defines it, all 0) */
extern volatile unsigned tdelay_calls[6];
/* main.c, test 19: the pads are read in the waits of this thread's write */
void pad_io_mark(int on);

#define BAND_TICKS ((uint64_t)PPC_TIMEBASE_FREQ * WGATE_BAND_US / 1000000)
#define RATIO_TICKS ((uint64_t)PPC_TIMEBASE_FREQ * 2 / 1000) /* frames with band 0 from 2 ms */
#define USB_THREAD_ID 5

/* game thread -> USB thread */
static volatile uint32_t g_frame; /* emulated vblanks seen + 1 */
static volatile uint32_t g_busy;  /* the last busy one + 1 (0: none yet) */

/* USB thread -> game thread */
static volatile unsigned io_on, io_seq, hold_seq;

/* USB thread */
static uint64_t io_t0;
static volatile unsigned n_io, n_open, n_held, n_forced;
static volatile unsigned held_max_us, io_max_us;
static volatile uint64_t io_sum_us;

/* game thread */
static unsigned seq_seen, hold_seen;
static volatile unsigned f_write, f_late_write;
static uint64_t s_w0, s_w1, s_o0, s_o1;
static volatile unsigned ratio_w, ratio_o; /* band 1 / band 0 x 1000 */

static int busy(void)
{
	uint32_t b = g_busy, f = g_frame;

	return b && f - b < WGATE_FRAMES;
}

int wgate_open(struct wgate *g)
{
	uint64_t now = tb_read();
	unsigned us;
	int b = busy();

	if (!g->due) {
		g->due = now;
		g->held = 0;
	}
	us = tb_us(g->due, now);
	if (b && us < WGATE_MAX_US) {
		if (!g->held) {
			g->held = 1;
			n_held++;
		}
		hold_seq++;
		return 0;
	}
	if (b)
		n_forced++;
	if (g->held && us > held_max_us)
		held_max_us = us;
	n_open++;
	g->due = 0;
	return 1;
}

void wgate_io(int on)
{
	pad_io_mark(on);
	if (on) {
		io_t0 = tb_read();
		__sync_synchronize();
		io_on = 1;
	} else {
		unsigned us = tb_us(io_t0, tb_read());
		if (us > io_max_us)
			io_max_us = us;
		io_sum_us += us;
		n_io++;
		io_seq++;
		__sync_synchronize();
		io_on = 0;
	}
}

unsigned wgate_frame(uint32_t frame, uint64_t band0, uint64_t band1, int late)
{
	unsigned bits = 0, seq = io_seq, hs = hold_seq;
	int w = io_on || seq != seq_seen;

	seq_seen = seq;
	if (hs != hold_seen) {
		hold_seen = hs;
		bits |= PF_HELD;
	}
	if (band0 >= BAND_TICKS)
		g_busy = frame + 1;
	g_frame = frame + 1;
	if (w) {
		bits |= PF_WRITE;
		f_write++;
		if (late)
			f_late_write++;
	}
	if (band0 >= RATIO_TICKS) {
		if (w) {
			s_w0 += band0;
			s_w1 += band1;
			ratio_w = (unsigned)(s_w1 * 1000 / s_w0);
		} else {
			s_o0 += band0;
			s_o1 += band1;
			ratio_o = (unsigned)(s_o1 * 1000 / s_o0);
		}
	}
	return bits;
}

void wgate_rows(char t[WGATE_ROWS][100], uint32_t color[WGATE_ROWS])
{
	unsigned mean = n_io ? (unsigned)(io_sum_us / n_io) : 0, rw = ratio_w, ro = ratio_o;
	unsigned calls = tdelay_calls[USB_THREAD_ID];

	snprintf(t[0], 100, "GATE: OPEN %u HELD %u (MAX %u.%u S) FORCED %u T5 DELAYS %u", n_open, n_held,
	         held_max_us / 1000000, held_max_us / 100000 % 10, n_forced, calls);
	color[0] = n_forced ? C_YELLOW : C_WHITE;
	snprintf(t[1], 100, "IO %u MS %u.%u MAX %u.%u IN IO %u FR T4/T2 %u.%02u (%u.%02u) LATE %u", n_io,
	         mean / 1000, mean / 100 % 10, io_max_us / 1000, io_max_us / 100 % 10, f_write, rw / 1000,
	         rw / 10 % 100, ro / 1000, ro / 10 % 100, f_late_write);
	color[1] = f_late_write ? C_YELLOW : n_io ? C_GREEN : C_DIM;
}

/* Test 10 sound: the YMZ770 (runtime/ymz770.c, bit-exact with MAME 0.289 on the PC)
 * and the 48 kHz converter (runtime/sndout.c) on hardware thread SOUND_THREAD,
 * feeding libxenon's sound driver as tests 4 and 5 did.
 *
 * Every POLL_US the thread replays the register writes the game queued (stamped with
 * the SH-3 cycle) up to the last vblank mark, which makes 800.8 frames at 48 kHz per
 * emulated frame, moves them into a FIFO (little-endian, the order test 4 settled),
 * and keeps the driver's ring at SOUND_TARGET_BYTES in whole 2048-byte chunks. Playing
 * starts once SOUND_PRIME_FRAMES are waiting, and starts over the same way after an
 * underrun. The display and the audio share one clock (test 5: +0.2 ppm), so the
 * FIFO stays level while the game makes one frame per vblank; SOUND_TRIM_ABOVE is only
 * a guard.
 *
 * Check: each chip sample goes into a running FNV-1a hash; at the sample counts the
 * PC run reached at every 60th vblank (snd_expect.h, from work/snd/att/ymz.txt) the
 * hash must match. The game is the PC run only until the first input and only with
 * the PC's RTC (console clock unset), so the check stops at the first input.
 *
 * As in tests 4-5, nothing here calls printf, malloc or the rest of newlib that keeps
 * state (memcpy and memmove only); the main thread owns the log.
 *
 * Test 21: tests 17b and 20 each had one 5.6-7.4 ms dropout with no late frame, and the music
 * went on right after it, so the FIFO already held a whole prime when this thread saw the
 * driver empty: the thread had not fed the driver for ~16-50 ms. Every pass now measures
 * its gap from the last one, how late its wait ended, and its sections (ymz_run, the driver
 * read, the submits); see sound.h. WAIT_MED_DB (the game thread alternates it with
 * WAIT_DELAY) stays at medium priority, against the lead that a low-priority wait on core 1
 * gets no issue slots while blitter band T2 runs at medium.
 *
 * Test 22: test 21 rejected WAIT_MED_DB (band T2 x1.9, no gain here) and found no stall in
 * 16800 frames of WAIT_DELAY, so the game thread no longer switches the wait (WAIT_DELAY
 * only). The last T3H_N passes are kept; a pass that finds the driver empty snapshots them
 * (sound.h), to tell a stalled thread from one that ran but did not submit or had nothing.
 *
 * Test 23: test 22's snapshot showed no stall: the driver read 2624 B, then 0 one pass (2.7 ms)
 * later with ~2100 B still queued, at the switch to the last valid descriptor, and the ring
 * played on while this thread waited for a new prime (the 3.77 ms heard). The thread now reads
 * the driver's register itself (as xenon_sound_get_unplayed), reads a 0 again before calling it
 * an underrun, and checks every read against the bytes expected (sound.h, struct drv_stats). */
#include <stdint.h>
#include <string.h>

#include <pci/io.h>
#include <ppc/timebase.h>
#include <xenon_soc/xenon_power.h>
#include <xenon_sound/sound.h>

#include "cv1k.h"
#include "romload.h"
#include "sound.h"
#include "snd_expect.h"
#include "snd_expect_blk.h"

#define CHUNK_BYTES 2048                  /* one sound.c descriptor: 512 stereo frames */
#define CHUNK_FRAMES (CHUNK_BYTES / 4)
#define SOUND_TARGET_BYTES (4 * CHUNK_BYTES) /* 32-43 ms in the driver */
#define SOUND_PRIME_FRAMES 2048
#define SOUND_TRIM_ABOVE 4800             /* 100 ms waiting in the FIFO */
#define SOUND_TRIM_TO 1600
#define FIFO_FRAMES 8192                  /* power of two */
#define POLL_US 1000
#define SND_REG ((long)0xea001604)        /* libxenon drivers/xenon_sound/sound.c: snd_base + 4 */
#define DRV_DESCR_BYTES 2048              /* libxenon's 64 KB ring in 0x20 descriptors */
#define DRV_BYTES_PER_S 192000            /* 48 kHz stereo 16-bit */

struct sound_stats sound_stats;
volatile int sound_wait_mode = WAIT_DELAY; /* test 10c: fixed (10b rotated N/L/D) */
volatile struct sound_check sound_check;
unsigned sound_check_total = SND_EXPECT_N;
static const struct snd_point *snd_tab = snd_expect; /* test 38: the chosen game's (sound_start) */
static unsigned snd_n = SND_EXPECT_N;
volatile unsigned sound_first_input_frame = ~0u;

static int16_t fifo[FIFO_FRAMES * 2];
static unsigned f_in, f_out;              /* frames, free running */
static int16_t chunk[CHUNK_FRAMES * 2] __attribute__((aligned(128)));
static int16_t take[1024 * 2];
static uint8_t stack[64 * 1024] __attribute__((aligned(128)));

static uint32_t hash = 2166136261u;
static unsigned ck;                       /* next checkpoint */

static uint64_t tb_now(void)
{
	uint32_t u, l, u2;

	do {
		asm volatile ("mftbu %0" : "=r" (u));
		asm volatile ("mftbl %0" : "=r" (l));
		asm volatile ("mftbu %0" : "=r" (u2));
	} while (u != u2);
	return ((uint64_t)u << 32) | l;
}

static unsigned ticks_us(uint64_t t)
{
	return (unsigned)(t * 1000000 / PPC_TIMEBASE_FREQ);
}

/* ymz_run sink: hash and check the chip sample, then on to the 48 kHz converter */
static void sink(s32 v, u32 rate, u64 time, void *u)
{
	hash = (hash ^ (uint32_t)v) * 16777619u;
	if (sound_check.state == SCHK_RUNNING && ymz_samples == snd_tab[ck].samples) {
		if (snd_tab[ck].frame >= sound_first_input_frame) {
			sound_check.frame = snd_tab[ck].frame;
			sound_check.state = SCHK_STOPPED;
		} else if (hash != snd_tab[ck].hash) {
			sound_check.frame = snd_tab[ck].frame;
			sound_check.got = hash;
			sound_check.want = snd_tab[ck].hash;
			sound_check.state = SCHK_MISMATCH;
		} else {
			sound_check.ok++;
			if (++ck == snd_n)
				sound_check.state = SCHK_PASSED;
		}
	}
	snd_out_sink(v, rate, time, u);
}

/* test 21: the longest gap and lateness touching each frame (t3log_*), per wait mode */
volatile struct t3_event t3_events[T3_EVENTS];
volatile unsigned t3_event_n;
volatile struct t3_mode_stats t3_mode[2];
uint32_t t3log_gap[T3LOG_N], t3log_late[T3LOG_N];
uint8_t t3log_flags[T3LOG_N];
volatile uint32_t t3_frame;

static void t3_slot(uint32_t f, uint32_t gap_us, uint32_t late_us, uint8_t flags)
{
	if (f >= T3LOG_N)
		return;
	if (gap_us > t3log_gap[f])
		t3log_gap[f] = gap_us;
	if (late_us > t3log_late[f])
		t3log_late[f] = late_us;
	t3log_flags[f] |= flags;
}

/* test 22: the pass history and its snapshots */
volatile struct t3_snap t3_snaps[T3H_SNAPS];
volatile unsigned t3_snap_n;
static struct t3_pass t3h[T3H_N];
static unsigned t3h_n;

/* test 23: driver bytes from its register, as xenon_sound_get_unplayed() computes them */
volatile struct drv_stats drv_stats;
static unsigned drv_off_logged;

static unsigned drv_bytes(uint32_t reg)
{
	const unsigned rptr = reg & 0x1f, last = (reg >> 8) & 0x1f, cur = reg >> 16;
	return ((last - rptr) & 0x1f) * DRV_DESCR_BYTES + cur;
}

static void thread_main(void)
{
	const uint64_t poll = PPC_TIMEBASE_FREQ * POLL_US / 1000000;
	const uint64_t reread = PPC_TIMEBASE_FREQ * DRV_REREAD_US / 1000000;
	uint64_t next, sec_start, run_ticks = 0, run_max = 0;
	uint64_t prev_top = 0, late_ticks = 0;
	unsigned low = ~0u;
	unsigned p_ymz = 0, p_drv = 0, p_sub = 0; /* the previous pass's sections, us */
	int started = 0, wait_med = 0;
	/* test 23: what the last pass left queued (after its submits; 0 = no comparison) and when it
	 * read the driver; an underrun whose ring has not read non-zero again yet */
	uint32_t prev_after = 0;
	uint64_t prev_read = 0;
	int live_watch = 0;
	uint32_t cur_f;

	{
		unsigned msr;
		asm volatile ("mfmsr %0" : "=r" (msr));
		sound_stats.msr = msr;
	}
	sound_stats.alive = 1;
	cur_f = (uint32_t)frame_count;
	if (cur_f < T3LOG_N)
		t3log_gap[cur_f] = t3log_late[cur_f] = t3log_flags[cur_f] = 0;
	t3_frame = cur_f;
	next = sec_start = tb_now();
	for (;;) {
		uint64_t t0 = tb_now(), t1, tq0, tq1, ts1;
		uint32_t f = (uint32_t)frame_count, gap_us = 0, late_us = 0;
		uint32_t reg0, reg, rereads = 0, kind = T3K_GAP;
		int32_t dev = 0;
		int off = 0;
		unsigned queued, level, q_seen, f_seen, chunks = 0;
		int n, under = 0;

		/* test 21: the gap that ended here; frames it reached into get it too */
		if (prev_top) {
			gap_us = ticks_us(t0 - prev_top);
			late_us = ticks_us(late_ticks);
		}
		if (f != cur_f) {
			uint32_t k;
			t3_slot(cur_f, gap_us, late_us, wait_med ? T3F_MED : 0);
			for (k = cur_f + 1; k < f && k - cur_f < 64; k++) {
				if (k < T3LOG_N)
					t3log_gap[k] = t3log_late[k] = t3log_flags[k] = 0;
				t3_slot(k, gap_us, late_us, wait_med ? T3F_MED : 0);
			}
			if (f < T3LOG_N)
				t3log_gap[f] = t3log_late[f] = t3log_flags[f] = 0;
			__sync_synchronize(); /* the slots before the count that makes them final */
			t3_frame = f;
			cur_f = f;
		}

		n = ymz_run(sink, NULL);
		t1 = tb_now();
		if (n > 0) {
			run_ticks += t1 - t0;
			if (t1 - t0 > run_max)
				run_max = t1 - t0;
		}
		while ((n = snd_out_take(take, 1024)) > 0) {
			int i;
			for (i = 0; i < n; i++) {
				if (f_in - f_out >= FIFO_FRAMES) {
					sound_stats.overflow++;
					continue;
				}
				fifo[(f_in & (FIFO_FRAMES - 1)) * 2] = (int16_t)__builtin_bswap16((uint16_t)take[2 * i]);
				fifo[(f_in & (FIFO_FRAMES - 1)) * 2 + 1] = (int16_t)__builtin_bswap16((uint16_t)take[2 * i + 1]);
				f_in++;
			}
		}

		tq0 = tb_now();
		reg0 = reg = read32(SND_REG);
		queued = drv_bytes(reg);
		/* test 23: a 0 once playing is read again before it counts (a read in the switch to the
		 * last valid descriptor can see it with its byte count not loaded yet) */
		while (started && queued == 0 && rereads < DRV_REREADS) {
			const uint64_t until = tb_now() + reread;
			while (tb_now() < until)
				;
			reg = read32(SND_REG);
			queued = drv_bytes(reg);
			rereads++;
		}
		tq1 = tb_now();
		if (started && queued == 0) {
			sound_stats.underruns++;
			started = 0;
			under = 1;
			kind = T3K_UNDER;
			live_watch = 1;
		} else if (rereads) {
			kind = T3K_FALSE0;
			drv_stats.f0_frame = f;
			drv_stats.f0_reg0 = reg0;
			drv_stats.f0_reg1 = reg;
			drv_stats.f0_rereads = rereads;
			if (rereads > drv_stats.rereads_max)
				drv_stats.rereads_max = rereads;
			__sync_synchronize(); /* the details before the count */
			drv_stats.false0 = drv_stats.false0 + 1;
		}
		if (live_watch && queued) {  /* the ring had not stopped after all */
			drv_stats.under_live = drv_stats.under_live + 1;
			live_watch = 0;
		}
		/* test 23: this read against the last pass's bytes after its submits, minus what played
		 * since; only while playing and when that cannot have run the ring dry */
		if (prev_after && started && !under) {
			const uint32_t played = (uint32_t)((tq1 - prev_read) * DRV_BYTES_PER_S / PPC_TIMEBASE_FREQ);
			const int32_t expect = (int32_t)prev_after - (int32_t)played;
			if (expect >= 512) {
				const int32_t ad = queued > (unsigned)expect ? (int32_t)queued - expect : expect - (int32_t)queued;
				dev = (int32_t)queued - expect;
				drv_stats.pairs = drv_stats.pairs + 1;
				if (dev >= -2560 && dev <= -1536) {
					drv_stats.low1 = drv_stats.low1 + 1;
					off = T3K_LOW1;
				} else if (dev >= 1536 && dev <= 2560) {
					drv_stats.high1 = drv_stats.high1 + 1;
					off = T3K_HIGH1;
				} else if (ad > 512) {
					drv_stats.odd = drv_stats.odd + 1;
					off = T3K_ODD;
				} else if ((unsigned)ad > drv_stats.ok_max) {
					drv_stats.ok_max = (unsigned)ad;
				}
				if (off && kind == T3K_GAP)
					kind = (uint32_t)off;
			}
		}
		if (queued < low)
			low = queued;
		level = f_in - f_out;
		q_seen = queued;  /* test 21: what this pass found, before its submits */
		f_seen = level;
		if (!started && level >= SOUND_PRIME_FRAMES)
			started = 1;
		while (started && queued + CHUNK_BYTES <= SOUND_TARGET_BYTES && level >= CHUNK_FRAMES) {
			unsigned at = f_out & (FIFO_FRAMES - 1);
			if (at + CHUNK_FRAMES <= FIFO_FRAMES)
				memcpy(chunk, fifo + at * 2, CHUNK_BYTES);
			else {
				unsigned first = FIFO_FRAMES - at;
				memcpy(chunk, fifo + at * 2, first * 4);
				memcpy(chunk + first * 2, fifo, (CHUNK_FRAMES - first) * 4);
			}
			xenon_sound_submit(chunk, CHUNK_BYTES);
			f_out += CHUNK_FRAMES;
			level -= CHUNK_FRAMES;
			queued += CHUNK_BYTES;
			sound_stats.chunks++;
			chunks++;
		}
		ts1 = tb_now();
		/* test 23: what the next pass compares its read with; not after a read of 0 (a ring
		 * restarted from a stop read one descriptor low once in test 22, frame 3), nor after a
		 * read that was off (the next one would count the same glitch again, the other way) */
		prev_after = started && q_seen && !off ? queued : 0;
		prev_read = tq1;
		if (chunks)
			live_watch = 0;
		if (level > SOUND_TRIM_ABOVE) {
			sound_stats.trims++;
			sound_stats.trimmed += level - SOUND_TRIM_TO;
			f_out += level - SOUND_TRIM_TO;
			level = SOUND_TRIM_TO;
		}
		sound_stats.fifo = level;
		sound_stats.queued = queued;

		if (t0 - sec_start >= PPC_TIMEBASE_FREQ) {
			sound_stats.run_us = ticks_us(run_ticks);
			sound_stats.run_max_us = ticks_us(run_max);
			sound_stats.low = low;
			run_ticks = run_max = 0;
			low = ~0u;
			sec_start = t0;
		}
		sound_stats.loops++;

		/* test 21: this pass's share of the frame log, the mode table and the event ring */
		{
			const uint8_t fl = (wait_med ? T3F_MED : 0) | (under ? T3F_UNDER : 0);
			volatile struct t3_mode_stats *m = &t3_mode[wait_med];
			t3_slot(f, gap_us, late_us, fl);
			if (prev_top) {
				m->loops++;
				m->ticks += t0 - prev_top;
				if (gap_us > 2000)
					m->gap2++;
				if (gap_us > 4000)
					m->gap4++;
				if (gap_us > m->gap_max_us)
					m->gap_max_us = gap_us;
				if (late_us > m->late_max_us)
					m->late_max_us = late_us;
			}
			if (kind >= T3K_LOW1) {  /* test 23: the first DRV_OFF_EVENTS off reads only */
				if (drv_off_logged < DRV_OFF_EVENTS)
					drv_off_logged++;
				else
					kind = T3K_GAP;
			}
			if (gap_us > T3_EVENT_US || kind != T3K_GAP) {
				volatile struct t3_event *e = &t3_events[t3_event_n & (T3_EVENTS - 1)];
				e->frame = f;
				e->gap_us = gap_us;
				e->late_us = late_us;
				e->ymz_us = p_ymz;
				e->drv_us = p_drv;
				e->sub_us = p_sub;
				e->queued = q_seen;
				e->fifo = f_seen;
				e->mode = wait_med ? WAIT_MED_DB : WAIT_DELAY;
				e->under = under;
				e->kind = kind;
				e->reg0 = reg0;
				e->reg1 = reg;
				e->rereads = rereads;
				e->dev = dev;
				__sync_synchronize(); /* the entry before the count */
				t3_event_n = t3_event_n + 1;
			}
			p_ymz = ticks_us(t1 - t0);
			p_drv = ticks_us(tq1 - tq0);
			p_sub = ticks_us(ts1 - tq1);
			prev_top = t0;
		}

		/* test 22: this pass into the history; an empty driver snapshots it */
		{
			struct t3_pass *h = &t3h[t3h_n & (T3H_N - 1)];
			h->frame = f;
			h->gap_us = gap_us;
			h->late_us = late_us;
			h->ymz_us = p_ymz;
			h->drv_us = p_drv;
			h->sub_us = p_sub;
			h->queued = q_seen;
			h->fifo = f_seen;
			h->chunks = chunks;
			t3h_n++;
			if (under || kind == T3K_FALSE0) {
				volatile struct t3_snap *s = &t3_snaps[t3_snap_n & (T3H_SNAPS - 1)];
				const unsigned np = t3h_n < T3H_N ? t3h_n : T3H_N;
				unsigned k;
				s->frame = f;
				s->n = np;
				s->kind = under ? T3K_UNDER : T3K_FALSE0;
				for (k = 0; k < np; k++)
					memcpy((void *)&s->p[k], &t3h[(t3h_n - np + k) & (T3H_N - 1)], sizeof(struct t3_pass));
				__sync_synchronize(); /* the snapshot before the count */
				t3_snap_n = t3_snap_n + 1;
			}
		}

		next += poll;
		{
			const int mode = sound_wait_mode;
			uint64_t ws = tb_now(), we;
			wait_med = mode == WAIT_MED_DB;
			switch (mode) {
			case WAIT_NORMAL:            /* test 10: spin at normal priority */
				while (tb_now() < next)
					;
				break;
			case WAIT_LOW:               /* as the USB thread and the band workers */
				asm volatile ("or 1,1,1");
				while (tb_now() < next)
					;
				asm volatile ("or 2,2,2");
				break;
			case WAIT_MED_DB:            /* test 21: stay at medium, give the sibling 8 x 16 cycles per read */
				while (tb_now() < next) {
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
					asm volatile ("or 31,31,31");
				}
				break;
			default:                     /* WAIT_DELAY: as libxenon's udelay (db16cyc) */
				asm volatile ("or 1,1,1");
				while (tb_now() < next)
					asm volatile ("or 31,31,31");
				asm volatile ("or 2,2,2");
				break;
			}
			we = tb_now();
			/* past the deadline, or past the start when the pass overran it */
			late_ticks = we - (next > ws ? next : ws);
			if (we - next > poll)        /* fell behind: no catch-up burst */
				next = we;
		}
	}
}

int sound_start(const uint8_t *rom, uint32_t bytes, int check, int set)
{
	if (set == SET_IBARABLK) {
		snd_tab = snd_expect_blk;
		snd_n = SND_EXPECT_BLK_N;
	}
	sound_check_total = snd_n;
	ymz_init(rom, bytes);
	snd_out_init();
	memset((void *)&sound_check, 0, sizeof(sound_check));
	sound_check.state = check ? SCHK_RUNNING : SCHK_OFF;
	return xenon_run_thread_task(SOUND_THREAD, stack + sizeof(stack) - 256, thread_main);
}

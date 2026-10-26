/* Save states (test 69, ibara360's pause menu: RESTART STAGE, FULL RESTART, QUIT TO ATTRACT): the whole machine kept
 * in a slot and put back later, without costing the game's frames.
 *
 * A slot holds the work RAM (copied when it is taken), every device's registers and timers (each module lists its
 * own variables: <module>_state below), the YMZ770's chip (copied by the sound thread when it reaches the slot's time:
 * a SNAP event in its queue) and the VRAM copy-on-write: nothing of VRAM is copied when the slot is taken; before the
 * blitter first writes a 64x64 block after that, the block's old pixels go to a pool (the timing pass knows every
 * draw's and upload's destination on the game thread, before the workers draw). Slots taken at different times share
 * one copy of a block both still lack. A load puts the RAM, the devices and the slot's blocks back (the blocks it never
 * saved were not written since), drops the slots taken after it, and the guest goes on from the slot's moment.
 *
 * The moment: a host asks in host_vblank (rt_state_request); the runtime takes the slot at its next event that starts
 * at a block (CHK or the interpreter: every guest register is in the context there; an update point keeps them in the
 * compiled function's locals). A load (from host_vblank) never returns: the host's stack and the compiled functions'
 * frames are left by longjmp, and rt_run goes on at the slot's pc in the interpreter, which calls the compiled
 * functions as usual; the functions that were running at the slot's moment finish interpreted.
 *
 * Time: the CPU's cycle count goes back with a load; frame_count (the host's) does not, nor does the sound side's
 * clock (rt_epoch is added to every time handed to the YMZ770's queue). */
#ifndef STATE_H
#define STATE_H

#include <stddef.h>
#include "recomp.h"

#define RT_SLOTS 3                 /* the host's: attract, credit, stage */
#define RT_VB_SHIFT 6              /* VRAM blocks of 64 x 64 pixels */

/* a module's variables in or out of a slot: ST(b, v) for each */
typedef struct {
	u8 *p;
	size_t n, cap;
	int load;
} rt_sbuf;

static inline void rt_sfield(rt_sbuf *b, void *v, size_t n)
{
	if (b->n + n <= b->cap) {
		u8 *q = b->p + b->n, *w = (u8 *)v;
		for (size_t i = 0; i < n; i++) {
			if (b->load)
				w[i] = q[i];
			else
				q[i] = w[i];
		}
	}
	b->n += n;
}
#define ST(b, v) rt_sfield((b), &(v), sizeof(v))

void rt_core_state(rt_sbuf *b);    /* sh3_rt.c: the CPU, the scheduler, the interrupt controller */
void onchip_state(rt_sbuf *b);
void nand_state(rt_sbuf *b);
void rtc9701_state(rt_sbuf *b);    /* the serial interface only: the clock and the EEPROM go on */
void blitter_state(rt_sbuf *b);
void pcb_state(rt_sbuf *b);        /* its counters go on */
void ymz770_state(rt_sbuf *b);     /* the CPU side's register latch */
void ymz770_snap(u64 time, int slot);  /* sound side: the chip into / out of a slot at that time (rt_epoch's) */
void ymz770_unsnap(u64 time, int slot);

/* ---- the host's side ---- */

/* once, before rt_run: pool_blocks VRAM blocks (8 KB each) for the copies. 0 = ready */
int rt_state_init(unsigned pool_blocks);

/* host_vblank: take slot s at the runtime's next safe point (the one asked last wins) */
void rt_state_request(int s);

/* the slot can be loaded (taken, not dropped, its blocks all kept) */
int rt_state_ready(int s);

/* forget slot s (its blocks go back to the pool) */
void rt_state_drop(int s);

/* from host_vblank: the machine back to slot s, the slots taken after it dropped; frame_count goes on (+1 for the
 * vblank being handled). Never returns */
void rt_state_load(int s) __attribute__((noreturn));

/* host callbacks: a parallel copy (default memcpy), told when a slot has been taken (frame_count, the time it took
 * on the host's clock if blitter_clock is set) */
extern void (*rt_copy)(void *dst, const void *src, size_t n);
extern void (*rt_state_taken)(int s);

struct rt_state_stats {
	unsigned pool_blocks, pool_used, pool_peak;  /* VRAM blocks */
	unsigned saved_blocks[RT_SLOTS];             /* blocks each slot holds */
	unsigned cow_copies;                         /* blocks copied in all */
	unsigned overflows;                          /* slots that lost a block for want of room */
	u64 take_ticks[RT_SLOTS], load_ticks;        /* the last take / load, blitter_clock ticks (0: no clock) */
	u64 taken_frame[RT_SLOTS];                   /* frame_count when each was taken */
	unsigned takes, loads;
};
extern struct rt_state_stats rt_state_stats;

/* ---- the runtime's side ---- */
extern int rt_state_want;          /* a slot is asked for (sh3_rt.c takes it at its next safe point) */
extern int rt_vsnap_on;            /* a slot needs VRAM blocks (blitter.c tells it what it writes) */
extern u64 rt_epoch;               /* added to the CPU's time on its way to the YMZ770 */
void rt_state_take(void);          /* sh3_rt.c, at the safe point */
void rt_vram_cow(int x0, int y0, int x1, int y1);  /* blitter.c: the box (inclusive, inside VRAM) is about to be written */

#endif

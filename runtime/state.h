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
 * clock (rt_epoch is added to every time handed to the YMZ770's queue).
 *
 * Test 84 (save states on the hard disk): a fourth slot (the host's SLOT_STATE); a load keeps the slots taken after
 * it (the blocks it puts back are copied for them first, as a blitter write would be), so the host drops the ones it
 * no longer wants before loading; the CPU's time may also jump forward (a state from a longer session: rt_epoch
 * follows it the other way); a slot's parts can be read out for a file and a machine put back in from one
 * (rt_vram_put, rt_slot_open / rt_slot_add / rt_slot_close, then rt_state_load). */
#ifndef STATE_H
#define STATE_H

#include <stddef.h>
#include "recomp.h"

#define RT_SLOTS 4                 /* the host's: attract, credit, stage; test 84: the save state's moment */
#define RT_VB_SHIFT 6              /* VRAM blocks of 64 x 64 pixels */
#define RT_VB_N ((0x2000 >> RT_VB_SHIFT) * (0x1000 >> RT_VB_SHIFT))  /* test 84: 8192 blocks */
#define RT_VB_BYTES ((1 << RT_VB_SHIFT) * (1 << RT_VB_SHIFT) * 2)    /* 8 KB each */

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
/* test 84: a slot's chip for a file: its bytes, the snaps made into it so far (the sound thread's count), its ROM
 * pointer set to this session's after a file filled it; ymz770_idle = no queued event left to play */
void *ymz770_chip(int slot, size_t *bytes);
unsigned ymz770_snaps(int slot);
void ymz770_chip_fix(int slot);
int ymz770_idle(void);

/* ---- the host's side ---- */

/* once, before rt_run: pool_blocks VRAM blocks (8 KB each) for the copies. 0 = ready */
int rt_state_init(unsigned pool_blocks);

/* host_vblank: take slot s at the runtime's next safe point (the one asked last wins) */
void rt_state_request(int s);

/* the slot can be loaded (taken, not dropped, its blocks all kept) */
int rt_state_ready(int s);

/* forget slot s (its blocks go back to the pool) */
void rt_state_drop(int s);

/* from host_vblank: the machine back to slot s, the other slots kept (test 69 dropped the ones taken after it);
 * frame_count goes on (+1 for the vblank being handled). Never returns */
void rt_state_load(int s) __attribute__((noreturn));

/* test 84: a slot's parts for a file (the host paused: no blitter job, the slot taken) */
size_t rt_state_dev_bytes(void);
u8 *rt_slot_ram(int s);            /* the slot's work RAM (RAM_SIZE) */
u8 *rt_slot_dev(int s);            /* its modules' variables (rt_state_dev_bytes) */
int rt_slot_has(int s, int b);     /* it keeps its own copy of VRAM block b (the block was written since it was taken) */
void rt_slot_block(int s, int b, u8 *dst);   /* block b as at slot s's moment: RT_VB_BYTES, rows of 64 pixels */
void rt_live_block(int b, u8 *dst);          /* block b of VRAM now */

/* test 84: a machine from a file, from host_vblank (the blitter idle), then rt_state_load of the slot filled last */
int rt_vram_put(int b, const u8 *src);       /* VRAM block b = src; the live slots lacking it get its pixels first
                                              * (cow); 1 = it changed */
void rt_slot_open(int s);          /* slot s dropped and opened: rt_slot_ram / rt_slot_dev filled, then rt_slot_add */
int rt_slot_add(int s, int b, const u8 *src); /* its own copy of block b (its moment's pixels); -1 = the pool is full */
void rt_slot_close(int s);         /* slot s live, taken after every other one: VRAM now plus its blocks = its moment */

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

/* Test 14b: where the game thread's time goes (debug build for test 14's late frames).
 *
 *  - a PC sampler on hardware thread 0: the decrementer fires every PROF_TICKS timebase
 *    ticks while MSR[EE] = 1 and excfix/except.S stores SRR0 in a ring; the game thread
 *    drains the ring once per emulated vblank into two per-instruction histograms of
 *    .text: all frames, and the frames whose game-thread CPU time was PROF_HEAVY_MS or more;
 *  - a frame log: per emulated vblank the game thread's times and the runtime's counters
 *    (SH-3 cycles, pcb penalty cycles, slow accesses, misses, slow fetches, idle steps,
 *    events, I/O accesses), written as text to <dev>:/ibara360/perfNNNN.txt by the USB
 *    thread, at most a few seconds behind;
 *  - at prof_dump_request(): the histograms to <dev>:/ibara360/profNNNN.txt (functions
 *    first, from the symbol table the second link pass embeds: source/profsyms.c).
 * The card's rows show the sampler's state and the functions with the most samples in
 * the heavy frames. */
#ifndef PROF_H
#define PROF_H

#include <stdint.h>

#define PROF_ROWS 7           /* card rows prof_rows() fills (test 14d: top 3 functions, was 5) */
#define PROF_TICKS 997        /* ~20 us at 49.875 MHz (prime: no beat with the game's loops) */
#define PROF_HEAVY_MS 13      /* heavy frame: game-thread CPU time from this many ms */

struct prof_frame {
	uint32_t frame;
	uint32_t cpu, wait, conv, pres, vwait, band0, band1, period; /* timebase ticks */
	uint32_t cyc, pen, acc, miss, ifs, idle, events, io, spin;  /* runtime counter deltas */
	uint32_t samples, flags;                                     /* flags: PF_* */
};
#define PF_HEAVY 1u
#define PF_ARMED 2u
#define PF_REPLAY_SAME 4u
#define PF_REPLAY_DIFF 8u
#define PF_WRITE 16u /* test 14d: a file write ran during the frame (source/wgate.c) */
#define PF_HELD 32u  /* test 14d: the gate held a due write during the frame */

/* game thread */
int prof_init(void);              /* histograms + logs; 0 = ok */
void prof_begin(const char *dev); /* the device the logs go to (NULL: none) */
void prof_off(const char *why);   /* test 33: no frame log, the card row says why */
void prof_arm(void);              /* sampler on (MSR[EE] = 1 on this thread) */
void prof_disarm(void);
int prof_armed(void);
void prof_frame(struct prof_frame *f); /* drains the ring (f->samples) and logs the frame */
void prof_dump_request(void);     /* write the histograms (once) */

/* USB thread, every loop: file work. 1 when it touched a file. */
int prof_service(void);

void prof_rows(char text[PROF_ROWS][100], uint32_t color[PROF_ROWS]);

#endif

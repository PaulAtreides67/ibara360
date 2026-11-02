/* Test 14b frame log, xsdk port (test 39 .xex): framelog.c. The PC sampler of tests 14b-39 ran
 * on libxenon's exception vectors (the decrementer on thread 0); under the retail kernel the
 * title has no vectors of its own, so only the frame log is left (same file, same columns; the
 * samples column is 0). */
#ifndef PROF_H
#define PROF_H

#include <stdint.h>

#define PROF_ROWS 1           /* card rows prof_rows() fills */
#define PROF_HEAVY_MS 13      /* heavy frame: game-thread CPU time from this many ms */

struct prof_frame {
	uint32_t frame;
	uint32_t cpu, wait, conv, pres, vwait, band0, band1, period; /* timebase ticks */
	uint32_t cyc, pen, acc, miss, ifs, idle, events, io, spin;  /* runtime counter deltas */
	uint32_t samples, flags;                                     /* flags: PF_* */
};
#define PF_HEAVY 1u
#define PF_WRITE 16u /* test 14d: a file write ran during the frame (source/wgate.c) */
#define PF_HELD 32u  /* test 14d: the gate held a due write during the frame */
#define PF_NET 128u  /* test 40: the network log sent datagrams during the frame (source/netlog.c) */
#define PF_SHOWN_LATE 256u /* test 42: queued after the frame before had shown (a vblank late) */
#define PF_NOT_SHOWN 512u  /* test 42: not shown (catching up, or the display getting back in step) */
#define PF_PAUSED 1024u    /* test 55: the game was paused just before this frame */
#define PF_EARLY 2048u     /* test 63: shown from its job's early conversion while the job still drew */

int prof_init(void);              /* the frame log's memory; 0 = ok */
void prof_begin(const char *dev); /* the data root the log goes to (NULL: none) */
void prof_off(const char *why);   /* test 33: no frame log, the card row says why */
void prof_frame(struct prof_frame *f); /* game thread, once per emulated vblank */

/* IO thread: the log's file work; 1 when it did some */
int prof_service(void);
extern volatile int prof_final; /* test 72: set before a hand-off to another title: every prof_service writes what waits */

void prof_rows(char text[PROF_ROWS][100], uint32_t color[PROF_ROWS]);

#endif

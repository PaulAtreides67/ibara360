/* excfix/except.S (test 11c's copy of libxenon's exception vectors): TLB reload
 * counters, one 64-byte record per hardware thread (PIR 0-5), written in real mode at
 * the end of the ISI/DSI reload paths, read here through the cached view. */
#ifndef TLBSTAT_H
#define TLBSTAT_H

#include <stdint.h>

enum {
	TLB_DSI,      /* data TLB reloads */
	TLB_ISI,      /* instruction TLB reloads */
	TLB_DAR,      /* last data address reloaded */
	TLB_REPEAT,   /* data reloads in a row within one 64 KB page (0 = new page) */
	TLB_REPEAT_MAX,
	TLB_ISI_ADDR, /* last instruction address reloaded */
	TLB_DSI_PC,   /* SRR0 of the last data reload */
	TLB_FIELDS = 8
};
extern volatile uint64_t tlbstat[6][TLB_FIELDS];

#endif

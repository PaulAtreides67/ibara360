/* Test 10 sound thread: see sound.c. */
#ifndef SOUND_H
#define SOUND_H

#include <stdint.h>

#define SOUND_THREAD 3 /* core 1's second thread (blitter band T2 is the first) */

/* written by the sound thread only; the card reads them */
struct sound_stats {
	unsigned loops;
	unsigned run_us;        /* time in ymz_run over the last second */
	unsigned run_max_us;    /* longest single ymz_run call in the last second */
	unsigned fifo;          /* 48 kHz frames made but not yet handed to the driver */
	unsigned queued;        /* bytes in the driver's ring */
	unsigned low;           /* lowest queued over the last second (bytes) */
	unsigned underruns;     /* the driver ran dry after playing had started */
	unsigned trims;         /* frames dropped because the FIFO grew past SOUND_TRIM_ABOVE */
	unsigned trimmed;
	unsigned overflow;      /* frames lost because the FIFO was full */
	unsigned chunks;        /* 2048-byte chunks submitted */
	unsigned msr;           /* the thread's MSR (FP = 0x2000) */
	int alive;
};

/* test 10b: how the thread waits between polls (the game thread rotates it); test 21:
 * WAIT_MED_DB = medium priority, eight db16cyc between timebase reads */
enum { WAIT_NORMAL, WAIT_LOW, WAIT_DELAY, WAIT_MED_DB, WAIT_MODES };
extern volatile int sound_wait_mode;
extern struct sound_stats sound_stats;

/* test 21: the sound thread's own timing. A gap = loop top to loop top (1 ms when on time);
 * late = how long the wait ran past its deadline (or past its start when the pass itself
 * overran). Gaps over T3_EVENT_US, and every pass that found the driver empty, go to an
 * event ring; per frame the longest gap and lateness that touched it go to t3log_*. */
#define T3_EVENT_US 4000
#define T3_EVENTS 256              /* power of two */
#define T3LOG_N 216000             /* frames, as prof.c's FLOG_MAX */
#define T3F_MED 1                  /* t3log_flags: a pass in the frame came from a WAIT_MED_DB wait */
#define T3F_UNDER 2                /* a pass in the frame found the driver empty */
struct t3_event {
	uint32_t frame;                /* emulated frame when the gap ended */
	uint32_t gap_us, late_us;
	uint32_t ymz_us, drv_us, sub_us; /* the pass before the gap: ymz_run, driver read, submits */
	uint32_t queued, fifo;         /* driver bytes and FIFO frames the pass after the gap found
	                                  (before its submits) */
	uint32_t mode, under;          /* wait mode of the wait in the gap; 1 = driver found empty */
	/* test 23: what made the event (T3K_*), the pass's driver register reads (the first and
	 * the one it went on with), re-reads after a 0, and the read minus the expected bytes */
	uint32_t kind, reg0, reg1, rereads;
	int32_t dev;
};
enum { T3K_GAP, T3K_UNDER, T3K_FALSE0, T3K_LOW1, T3K_HIGH1, T3K_ODD };
struct t3_mode_stats {
	unsigned loops, gap2, gap4;    /* passes; gaps over 2 and 4 ms */
	unsigned gap_max_us, late_max_us;
	uint64_t ticks;                /* time covered by those passes */
};
extern volatile struct t3_event t3_events[T3_EVENTS];
extern volatile unsigned t3_event_n;           /* events so far (the ring keeps the last 256) */
extern volatile struct t3_mode_stats t3_mode[2]; /* [0] WAIT_DELAY, [1] WAIT_MED_DB */
extern uint32_t t3log_gap[T3LOG_N], t3log_late[T3LOG_N]; /* us */
extern uint8_t t3log_flags[T3LOG_N];
extern volatile uint32_t t3_frame;   /* frames below this one have their final t3log_* entry */

/* test 22: the sound thread keeps its last T3H_N passes; a pass that finds the driver empty
 * copies them (oldest first, itself last) into a snapshot, so the frame log ("# t3h" lines)
 * and the card show what the thread did in the ~64 ms before the driver ran dry */
#define T3H_N 64                   /* passes per snapshot (power of two) */
#define T3H_SNAPS 16               /* snapshots kept (power of two) */
struct t3_pass {
	uint32_t frame;
	uint32_t gap_us, late_us;      /* the gap that ended at this pass, its wait's lateness */
	uint32_t ymz_us, drv_us, sub_us; /* this pass: ymz_run, driver read, submits */
	uint32_t queued, fifo;         /* driver bytes and FIFO frames found before the submits */
	uint32_t chunks;               /* 2048-byte chunks this pass submitted */
};
struct t3_snap {
	uint32_t frame;                /* frame of the pass that found the driver empty */
	uint32_t n;                    /* passes kept (fewer than T3H_N right after the start) */
	uint32_t kind;                 /* test 23: T3K_UNDER, or T3K_FALSE0 (a re-read was not 0) */
	struct t3_pass p[T3H_N];
};
extern volatile struct t3_snap t3_snaps[T3H_SNAPS];
extern volatile unsigned t3_snap_n; /* snapshots so far (the ring keeps the last 16) */

/* test 23: the sound thread reads the driver's queue from its register itself, as libxenon's
 * xenon_sound_get_unplayed() does (snd_base + 4: bits 0-4 the descriptor playing, 8-12 the
 * last valid one, 16-31 bytes left in the one playing; descriptor = 2048 B). Test 22's dropout
 * was a read of 0 while ~2100 B were still queued, right at the switch to the last valid
 * descriptor; a 0 is now read again (DRV_REREADS times, DRV_REREAD_US apart) before it counts
 * as an underrun. Each pass also compares its read with what the last pass left queued (after
 * its submits) minus 192 B per ms since: a read caught in a descriptor switch elsewhere in the
 * ring would come out one descriptor (2048 B) low or high. */
#define DRV_REREADS 10
#define DRV_REREAD_US 5
#define DRV_OFF_EVENTS 2000        /* off-by-a-descriptor reads that also go to the event ring */
struct drv_stats {
	unsigned false0;               /* reads of 0 that a re-read showed were not empty */
	unsigned rereads_max;          /* most re-reads one of them needed */
	unsigned under_live;           /* underruns (every re-read 0) after which the ring read non-zero
	                                  again before the next submit: it had not stopped */
	unsigned pairs;                /* pass-to-pass comparisons */
	unsigned low1, high1, odd;     /* read 2048 +- 512 B below / above the expected bytes; off by
	                                  more than 512 B otherwise */
	unsigned ok_max;               /* the largest |read - expected| of the other pairs (bytes) */
	uint32_t f0_frame, f0_reg0, f0_reg1, f0_rereads; /* the last false 0: frame, the 0, the re-read
	                                  that was not 0 and how many re-reads it took */
};
extern volatile struct drv_stats drv_stats;

/* chip-sample check against the PC attract run (snd_expect.h; test 38: snd_expect_blk.h for
 * ibarablk): the PC run's chip sample count and running hash at every 60th vblank */
struct snd_point {
	uint32_t frame, samples, hash;
};
enum { SCHK_OFF, SCHK_RUNNING, SCHK_PASSED, SCHK_MISMATCH, SCHK_STOPPED };
struct sound_check {
	int state;
	unsigned ok;            /* checkpoints that matched */
	unsigned frame;         /* emulated frame of the mismatch or of the stop */
	uint32_t got, want;     /* hashes at the mismatch */
};
extern volatile struct sound_check sound_check;
extern unsigned sound_check_total;

/* the game thread sets this to frame_count at the first input that is not idle */
extern volatile unsigned sound_first_input_frame;

/* the ROM is the chip's view (U23+U24 word-swapped) with 16 readable bytes past
 * its end; check = compare against the PC run (the RTC must be the PC default);
 * test 38: set = SET_IBARA / SET_IBARABLK picks the PC run's table */
int sound_start(const uint8_t *rom, uint32_t bytes, int check, int set);

#endif

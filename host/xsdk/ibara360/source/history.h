/* test 137 C1: BATTLE HISTORY (the attract MENU row). Per game, cumulative counters kept in one file per game:
 * <dev>/ibara360/history/<game>.dat (ibara, ibarablk, ibaraarr). Counted from game RAM (history.c), read-only, once
 * per emulated vblank; the file is written on the file thread (hist_save_now) by temp + rename, as ini_save does. */
#ifndef HISTORY_H
#define HISTORY_H

#include <stdint.h>

enum { HIST_IBARA = 0, HIST_BLK = 1, HIST_ARRANGE = 2 }; /* the game id the file keeps (C2's ibara / Kuro BL / ARRANGE) */

/* the file's record: little-endian native (one console), 248 bytes, no padding (the 64-bit fields sit at 16..39) */
struct hist {
	uint32_t magic;          /* HIST_MAGIC 'IBHS' */
	uint32_t version;        /* HIST_VERSION 1 */
	uint32_t game;           /* HIST_IBARA / HIST_BLK / HIST_ARRANGE */
	uint32_t reserved;       /* 0 */
	uint64_t runtime_vbl;    /* every vblank the xex runs (menus too) */
	uint64_t playtime_vbl;   /* every vblank inside a run (TRAINING and loaded states included) */
	uint64_t total_score;    /* the final score of each side that played in an eligible run */
	uint32_t runs;           /* eligible runs ended */
	uint32_t score_extends;  /* next-extend field advances */
	uint32_t shots;          /* main shot slots going live */
	uint32_t bombs;          /* bomb (BLAST) starts, per side */
	uint32_t deaths;         /* ship hits (state DC -> E0 / A0) */
	uint32_t bosses;         /* boss main parts defeated (not by timeout) */
	uint32_t medals;         /* medal pickups (kind 3) */
	uint32_t medals10k;      /* medal pickups while the next medal was 10000 */
	uint32_t medals10k_missed; /* the next medal 10000 dropped to 0 by a lost medal */
	uint32_t frags;          /* bomb fragments (kind 2) */
	uint32_t fullbombs;      /* full bombs picked up (kind 5) */
	uint32_t shot_small;     /* small shot P picked up (kind 0) */
	uint32_t shot_large;     /* large shot P picked up (kind 4) */
	uint32_t options;        /* option items (kind 1) */
	uint32_t oneups;         /* 1UP items (kind 6) */
	uint32_t special_power;  /* ibara / ARRANGE: shot level became 6 (Kuro BL: not counted) */
	uint32_t special_form;   /* ibara: a special formation's codes (Kuro BL / ARRANGE: not counted) */
	uint32_t chosen[4][4];   /* ship chosen [row][type A-D], rows: ibara / ARRANGE 0 BOND 1 DYNE; Kuro BL 0 BOND STR,
	                          * 1 BOND SPR, 2 DYNE STR, 3 DYNE SPR */
	uint32_t clears[4][4];   /* clears (ending reached) by the side's ship, same rows / columns */
	uint32_t clears_mode[3]; /* ibara only: ARCADE / HARDER / EXTENDED */
};

#define HIST_MAGIC 0x49424853u /* 'IBHS' */
#define HIST_VERSION 2u /* test 138 A5: relatch on load (v1 held bad totals) */

/* compile-time check: the layout above is 248 bytes (a mismatch makes the typedef's array size negative) */
typedef char hist_size_check[sizeof(struct hist) == 248 ? 1 : -1];

/* once at boot / game select: read <path> (or zeros when missing or bad), log. path = <dev>/ibara360/history/<name>.dat
 * (its folder is made by hist_save_now as needed) */
void hist_init(int game, const char *path);
/* test 145: INITIALIZE HISTORY: zero every counter of h (magic / version / game kept), reset the per-run trackers,
 * dirty = 1 (the file is written on the next hist_save_req) */
void hist_clear(void);

/* once per vblank of the xex (game thread, between frames): in_run = a credit's run is on (incl. TRAINING, not the
 * attract's demos, not replay playback); eligible = the run may count (achievements' run gate, but independent of the
 * ACHIEVEMENTS setting and XAM). runtime always, playtime while in_run, the detectors while in_run && eligible */
void hist_vblank(int in_run, int eligible);

/* a credit started (the run's first vblank): latch each side's ship byte and reset the per-run edge state */
void hist_run_start(void);

/* test 138 A1: a save state was loaded: relatch the trackers before the next vblank counts */
void hist_state_loaded(void);

/* the run is over (game over / ending / quit): add the final score of each side that played, the ship chosen, runs++
 * (eligible runs only). Once per run; ending clears can still come after it (until the next hist_run_start) */
void hist_run_end(int eligible);

/* 1 when a counter changed since the last save */
int hist_dirty(void);

/* file thread: write the record to <path>.tmp, remove <path>, rename (as ini_save), mkdir the folder as needed. Logs */
void hist_save_now(void);

/* the page count (3) */
int hist_pages(void);

/* page 1 or 2: the rows' labels and values (formatted: commas, h:mm:ss; "-" where the game has none). Returns the row
 * count (at most max); 0 for any other page */
int hist_page_rows(int page, char lab[][24], char val[][20], int max);

/* page 3 grid: which 0 = chosen, 1 = clears. out[row][0..3] = columns A-D, out[row][4] = the TOTAL. *nrows = 2 (ibara,
 * ARRANGE) or 4 (Kuro BL); rowname[] = the row labels */
void hist_grid(int which, unsigned out[4][5], int *nrows, const char *rowname[4]);

/* ibara's clears by mode (ARCADE, HARDER, EXTENDED); zeros for Kuro BL and ARRANGE */
void hist_modes(unsigned out[3]);

#endif

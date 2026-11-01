/* Test 84 (user 2026-10-27: save states on the hard disk, 10 slots per game, a picture of the game per slot, LOAD
 * STATE in the attract menu too): the files <dev>/ibara360/states/<set>/slot01.sta .. slot10.sta (the SLOTS page's
 * numbers).
 *
 * A file: a header (the slot's summary and picture for the SLOTS page; the program's CRCs and the sizes this .xex must
 * share), main.c's host record, the list of the stage start's blocks and the chunk table, then the chunks, each 128 KB
 * of one section deflated on its own (zlib level 1, raw): the moment (runtime slot SLOT_STATE: its devices, the YMZ770
 * chip, the work RAM, all of VRAM, VRAM last) and, when the run has one, the stage's start (its devices, chip, RAM and
 * the VRAM blocks that differ from the moment's). The blitter's workers deflate / inflate the chunks (hdd_work) while
 * the game thread writes / reads them and keeps presenting (hdd_step with a time budget); the host is paused all the
 * while (no blitter job, no emulated vblank). A save goes to slotNN.tmp, renamed over slotNN.sta once complete.
 *
 * A load changes nothing before the header is checked (hdd_load_check); then the slots it fills are opened, the VRAM
 * blocks that differ are put in through the runtime's cow (the attract's slot, kept, gets their old pixels), and the
 * host loads SLOT_STATE (rt_state_load).
 *
 * Test 86 (user 2026-10-27: REPLAYS, "SAVE REPLAY?" at a run's end, every replay kept, DELETE on the page): a run's
 * replay in <dev>/ibara360/replays/<set>/repNNNN.rpl (the next number after the highest), the same kind of file with
 * its own magic: the credit's slot (main.c's SLOT_CREDIT, the run's start) as the moment, no stage start, and one more
 * section before the VRAM, the run's inputs (main.c's buffer). A state file has that section empty (test 84's and 85's
 * files load as they did). */
#ifndef HDDSTATE_H
#define HDDSTATE_H

#include <stddef.h>
#include <stdint.h>

#define HDD_SLOTS 10
#define HDD_THUMB_W 80     /* the picture: the portrait game (240 x 320) by three, rows 0-317 */
#define HDD_THUMB_H 106

enum { HDD_EMPTY, HDD_OK, HDD_REFUSED };

/* a slot's summary (the SLOTS page); stage 0-5, 6-11 the extended mode's second loop */
struct hdd_info {
	int state;             /* HDD_EMPTY, HDD_OK or HDD_REFUSED */
	const char *why;       /* HDD_REFUSED: why, for the page */
	int stage, side, ship, type, mode, players;
	uint32_t score;
	int y, mo, d, h, mi;   /* the console clock at the save (central european time) */
	uint32_t crc;          /* the header's CRC: the recording's "# hddload" line */
	uint32_t score2, frames, flags; /* test 86, a replay's: the other side's score, the run's vblanks, HDD_RP_* */
	uint16_t thumb[HDD_THUMB_W * HDD_THUMB_H]; /* xRGB 1555 as VRAM has it, portrait rows */
};

/* test 86: a replay's summary (the REPLAYS page); stage = the last one played */
#define HDD_RP_MAX 999
#define HDD_RP_RED 1u          /* flags: the GADGETS SCORE went red in the run (the page's asterisk) */
struct hdd_rpinfo {
	int num;               /* repNNNN */
	int state;             /* HDD_OK or HDD_REFUSED */
	const char *why;       /* HDD_REFUSED: why */
	int stage, side, ship, type, mode, players;
	uint32_t score, score2, frames, flags; /* score = the run's side's, score2 = the other side's (co-op) */
	int y, mo, d, h, mi;   /* the console clock at the save */
	uint32_t crc;          /* the header's CRC: the recording's "# rpplay" line */
};

/* this .xex's game: what its files must match */
struct hdd_game {
	char dir[128];         /* <dev>/ibara360/states/<set> */
	uint32_t set;          /* 0 ibara, 1 Kuro BL, 2 ARRANGE */
	uint32_t image_crc, patch_crc, special;
	size_t host_bytes;     /* main.c's host record */
	size_t host_bytes_min; /* test 89: a state file's may be this short (an older one), its rest then 0 */
	int moment_slot;       /* the runtime slot of the moment (main.c's SLOT_STATE) */
	void (*workers_start)(void); /* main.c: the blitter's workers into hdd_work */
	void (*workers_stop)(void);  /* and out (waits for them) */
	void (*sleep_ms)(unsigned ms);
	char rp_dir[128];      /* test 86: <dev>/ibara360/replays/<set> */
	int rp_slot;           /* the runtime slot a replay starts from (main.c's SLOT_CREDIT) */
	size_t rp_host_bytes;  /* main.c's replay record */
	uint8_t *rp_input;     /* main.c's input buffer: a save's from it, a load's into it */
	size_t rp_input_cap;
};

/* game thread, once, before the save states' pool takes the free memory: the buffers and zlib's streams; 0 = ready */
int hdd_init(const struct hdd_game *g);
/* the ten files' headers into the slots' summaries (game thread, ~17 KB read a file); the ms it took */
unsigned hdd_scan(void);
/* the special version switched (main.c's special_switch): files of the other mode refused, the slots read again */
void hdd_special(uint32_t on);
const struct hdd_info *hdd_slot(int k);

/* the blitter's workers while main.c has them in the job: deflate / inflate chunks until it ends */
void hdd_work(int worker);

/* a save of the moment slot (and of the stage's start, slot stage_slot, or -1) into file slot k, with the summary
 * (info: all but state, why and crc) and main.c's record; 0 = started (hdd_step goes on with it) */
int hdd_save_begin(int k, const struct hdd_info *info, const void *host, int stage_slot);
/* a load from file slot k: the header read and checked, main.c's record into host, *stage_slot = the runtime slot of
 * the stage's start in the file (-1 none); 0 = it can be loaded (nothing changed yet), else hdd_why says why not */
int hdd_load_check(int k, void *host, int *stage_slot);
/* then, the host's own slots dropped as it wants: the slots the file fills opened, the workers started */
int hdd_load_begin(void);
/* or not: the file closed (nothing changed) */
void hdd_load_cancel(void);
/* the save's or the load's work for at most budget_us of the game thread; 1 = done, 0 = going on, -1 = failed */
int hdd_step(unsigned budget_us);
int hdd_progress(void);      /* 0-100 */
const char *hdd_why(void);   /* the last failure */

/* test 86: the replays. The folder's files into the list (newest first; game thread, ~1 KB read a file); the ms */
unsigned hdd_rp_scan(void);
int hdd_rp_count(void);
const struct hdd_rpinfo *hdd_rp(int i); /* the list's entry i, 0 = the newest */
/* a save of slot rp_slot and input_bytes of rp_input as number num (0: the next after the highest; the PC harness
 * gives the recording's), with the summary (info: stage, side, ship, type, mode, players, score, score2, frames, flags,
 * the date, the picture) and main.c's record; the number = started (hdd_step goes on; once done, the list's entry), -1
 * = not (hdd_why) */
int hdd_rp_save_begin(int num, const struct hdd_info *info, const void *host, uint32_t input_bytes);
int hdd_rp_last(void);
/* a load of the list's entry i: as hdd_load_check (main.c's record into host), then hdd_load_begin and hdd_step fill
 * slot rp_slot and rp_input with hdd_rp_input_bytes() bytes */
int hdd_rp_load_check(int i, void *host);
uint32_t hdd_rp_input_bytes(void);
/* the file of the list's entry i removed, and the entry; 0 = done */
int hdd_rp_delete(int i);

struct hdd_stats {
	unsigned ms, chunks, raw_kb, file_kb, io_ms, idle_ms;
	unsigned vram_changed;   /* a load: the VRAM blocks that differed */
	unsigned sblocks;        /* the stage start's blocks */
	int vram_touched;        /* a failed load: VRAM was partly put in (the machine is not whole) */
	int stage_lost;          /* a load: no pool room for the stage start's blocks (not loaded) */
};
extern struct hdd_stats hdd_stats;

#endif

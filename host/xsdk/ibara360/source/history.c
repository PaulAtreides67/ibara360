/* test 137 C1: BATTLE HISTORY (history.h). Cumulative per-game counters read from game RAM once per emulated vblank,
 * kept in <dev>/ibara360/history/<game>.dat. Read-only on game RAM (the counters only; nothing the game sees changes).
 *
 * The rules of achieve.c (test 105) are static there, so the ones needed are copied here with their achieve.c line
 * numbers (achieve.c is not edited). Gates: runtime every vblank; playtime every vblank of a live run (in_run and
 * hist_run_start seen, hist_run_end not yet); detectors only while live and eligible (the run's counting gate).
 * Per-vblank state is tracked on every vblank of a run, so a count never spans a gap.
 *
 * Fixed in this file (C1): the counters use the RAM addresses of RESEARCH.md rows 1-22 and gadgets.c's map (gd_map).
 * Known limits are listed in work/g137/REPORT_C1.md. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include "card.h"
#include "cv1k.h"
#include "gadgets.h"
#include "xplat.h"
#include "history.h"

#define PARTS 192u       /* enemy parts (achieve.c:90-91 PARTS / PART_SIZE) */
#define PART_SIZE 0xB4u
#define ITEMS 0x140u     /* item slots (achieve.c:96 ITEMS) */
#define SHOT_LIVE 0x08000000u /* a main shot slot live (hitbox.c: +0 & 0x08000000) */
#define SHOT_REC 0x34u   /* main shot record size (hitbox.c) */
#define SHIP_OFF 7u      /* the ship byte in the player record: 0C28379B = 0C283794 + 7, 0C29D1DF = 0C29D1D8 + 7 */
#define MEDAL_10000 18   /* the next-medal step of the 10000 medal (achieve.c MEDAL_10000) */
#define KIND_SMALL 0     /* item kinds (gadgets.c's streak kinds; achieve.c KIND_*) */
#define KIND_OPTION 1
#define KIND_FRAG 2
#define KIND_MEDAL 3
#define KIND_LARGE 4
#define KIND_BOMB 5      /* the full bomb (achieve.c:KIND_BOMB) */
#define KIND_1UP 6
#define KINDS 7
#define DEATH_DC 0xDCu   /* the ship's alive state (+0 top byte, gadgets.c:1096-1109) */

/* ---- each game's RAM (ibara's from gadgets.c gd_map / achieve.c map_ib; Kuro BL's from achieve.c map_blk) ------------ */
struct hmap {
	uint32_t player, p2;          /* the player's record, + side * p2 (achieve.c:41) */
	uint32_t score;               /* u32, + side * p2 */
	uint32_t lives, shot, form;   /* record offsets: shot u8 (6 = shot level 6), form u8[3] (achieve.c:69-79) */
	uint32_t extend;              /* record offset: u32 the next extend's score (gadgets.c header map: "+274") */
	uint32_t medal;               /* u8 the next medal's step, 18 = 10000 */
	uint32_t pickups, consec;     /* the pickup counters u8[8] + 8 * (u8 consec & 7) (achieve.c pickup()) */
	uint32_t shots, shot_stride;  /* the main shot table: + side * stride, shot_n records of 0x34 (hitbox.c) */
	unsigned shot_n;
	uint32_t enemy;               /* 192 parts of 0xB4 (achieve.c:50) */
	uint32_t items, item_size;    /* 0x140 item slots (achieve.c:66, map_blk) */
	uint32_t ending, stage_id, mode, escaped; /* achieve.c:60-61 (ending FF03, stage id, ibara's mode, boss escape) */
};

/* ibara (and ARRANGE: the ibara program, achieve.c:69-77 map_ib and ach_init's map_arr) */
static const struct hmap map_ib = {
	.player = 0x0C283794u, .p2 = 0x280u, .score = 0x0C283A04u,
	.lives = 0x253u, .shot = 0x254u, .form = 0x262u, .extend = 0x274u,
	.medal = 0x0C392D78u, .pickups = 0x0C21CC8Cu, .consec = 0x0C21CA15u,
	.shots = 0x0C285318u, .shot_stride = 0x340u, .shot_n = 16,
	.enemy = 0x0C26CD40u, .items = 0x0C38C064u, .item_size = 0x54u,
	.ending = 0x0C21F7F0u, .stage_id = 0x0C22486Eu, .mode = 0x0C286752u, .escaped = 0x0C392AFDu,
};

/* Kuro BL (achieve.c map_blk; the shot table: hitbox.c, Kuro BL's 32 records of 0x34 per side) */
static const struct hmap map_blk = {
	.player = 0x0C29D1D8u, .p2 = 0x2A0u, .score = 0x0C29D468u,
	.lives = 0x25Au, .shot = 0x25Bu, .form = 0x269u, .extend = 0x294u,
	.medal = 0x0C3C53E0u, .pickups = 0x0C22E2ACu, .consec = 0x0C22E015u,
	.shots = 0x0C2A6D9Cu, .shot_stride = 0x680u, .shot_n = 32,
	.enemy = 0x0C286578u, .items = 0x0C3BC7CCu, .item_size = 0x60u,
	.ending = 0x0C238020u, .stage_id = 0x0C23E0A6u, .mode = 0, .escaped = 0x0C3C4164u,
};

/* ---- the bosses (achieve.c:387-393 bosses[]: the main part's type, subtype and score value) ------------------------ */
enum { BK_MEIDI, BK_MIDI, BK_KASUMI, BK_SHASTA, BK_LACE, BK_S6, BK_LAST, BK_N };
static const struct { uint32_t type, sub, value; } bosses[BK_N] = {
	{0x05, 0x00, 100000u}, {0x2D, 0x00, 100000u}, {0x33, 0x00, 100000u}, {0x2A, 0x00, 100000u},
	{0x41, 0x06, 100000u}, {0x4A, 0x00, 100000u}, {0x4A, 0x02, 300000u},
};

/* ---- state -------------------------------------------------------------------------------------------------------- */
struct hist h;                     /* the record (the file's layout) */
static const struct hmap *M = &map_ib;
static int game = HIST_IBARA;
static char hist_path[160], hist_tmp[168];
static volatile int dirty;         /* a counter changed since the last save (game thread sets, file thread clears) */
static int relatch;                /* test 138 A1: relatch trackers after a state load */

static int run_seen;               /* hist_run_start since the last one (the ending's look and the trackers) */
static int run_ended;              /* hist_run_end for this run */
static int end_done;               /* the ending counted (or passed) for this run */

/* per side, this run (achieve.c struct side, 114-125) */
static struct {
	int in;                        /* in play this run (achieve.c:700-701) */
	unsigned ship;                 /* the ship byte latched at the run start (SHIP_OFF) */
	uint32_t score_last;           /* the score at the last in-run vblank */
	unsigned shot_last;            /* the shot level byte at the last vblank */
	unsigned state_last;           /* +0's top byte at the last vblank (0xDC = alive) */
	uint8_t form_last[3];          /* the formation codes at the last vblank (achieve.c:655) */
	uint32_t extend_last;          /* the next extend at the last vblank */
	int bomb_last;                 /* gadgets_bomb_on at the last vblank */
} sd[2];
static uint8_t live_last[2][32];   /* the main shot slots live at the last vblank */
static uint8_t med_last[ITEMS];    /* the medal slots (live, kind 3) at the last vblank (cheatfx.c:300-301) */
static unsigned med_idx_last;      /* the next medal step at the last vblank (achieve.c:733) */
static uint8_t pick_last[KINDS];   /* the pickup counters of the current demo row at the last vblank */
static unsigned pick_row;
static int pick_have;
static int pick_reset_logs;        /* test 139 G: RESET log lines this run (at most 4, counted runs only) */
/* the boss being fought (achieve.c:129-133 boss_i / boss_k / boss_done / boss_hp / boss_ph) */
static int boss_i = -1, boss_k, boss_done;
static int32_t boss_hp;
static unsigned boss_ph;

/* ---- RAM reads (zones.c / achieve.c style) -------------------------------------------------------------------------- */
static uint32_t rd32(uint32_t a)
{
	return BE32(RAMP(a));
}

static uint32_t rd16(uint32_t a)
{
	return BE16(RAMP(a));
}

static unsigned rd8(uint32_t a)
{
	return *RAMP(a);
}

static void add(uint32_t *f, unsigned n)
{
	*f += n;
	dirty = 1;
}

/* ---- formatting (no 64-bit printf: the console's log path) --------------------------------------------------------- */
static void fmt_num(uint64_t v, char *out, size_t n)
{
	char d[32], t[40];
	int nd = 0, k = 0;

	do {
		d[nd++] = (char)('0' + v % 10);
		v /= 10;
	} while (v && nd < 31);
	for (int i = nd - 1; i >= 0; i--) {
		t[k++] = d[i];
		if (i > 0 && i % 3 == 0)
			t[k++] = ',';
	}
	t[k] = 0;
	snprintf(out, n, "%s", t);
}

/* vblanks at 60 a second as h:mm:ss (hours grow) */
static void fmt_hms(uint64_t vbl, char *out, size_t n)
{
	const uint64_t s = vbl / 60;

	snprintf(out, n, "%u:%02u:%02u", (unsigned)(s / 3600), (unsigned)((s / 60) % 60), (unsigned)(s % 60));
}

/* ---- ship cell: the chosen / clears grid's row and column from a ship byte -------------------------------------------- */
/* ibara / ARRANGE: side * 4 + type (gadgets.c's map): row = side (0 BOND = 1P, 1 DYNE = 2P), column = type A-D.
 * Kuro BL: side * 8 + ship * 4 + type: row = side * 2 + ship (0 BOND STR, 1 BOND SPR, 2 DYNE STR, 3 DYNE SPR) */
static void ship_cell(unsigned v, unsigned *row, unsigned *col)
{
	if (game == HIST_BLK)
		*row = ((v >> 3) & 1u) * 2u + ((v >> 2) & 1u);
	else
		*row = (v >> 2) & 1u;
	*col = v & 3u;
}

/* ---- pickups: the u8 counters' deltas (rows 3, 6-11; achieve.c pickup()) --------------------------------------------- */
static uint32_t pick_addr(unsigned kind, unsigned row)
{
	return M->pickups + kind + 8u * row;
}

/* test 137 C1: a kind's pickups counted (c = the run counts). The medal's 10000 test reads the step at the last vblank
 * (achieve.c:722-727 GOLD MEDALIST: medal_step_last == 18 and the medal counter changed) */
static void count_kind(unsigned kind, unsigned n, int c)
{
	if (!c)
		return;
	switch (kind) {
	case KIND_SMALL:
		add(&h.shot_small, n);
		break;
	case KIND_OPTION:
		add(&h.options, n);
		break;
	case KIND_FRAG:
		add(&h.frags, n);
		break;
	case KIND_MEDAL:
		add(&h.medals, n);
		if (med_idx_last == MEDAL_10000)
			add(&h.medals10k, n);
		break;
	case KIND_LARGE:
		add(&h.shot_large, n);
		break;
	case KIND_BOMB:
		add(&h.fullbombs, n);
		break;
	case KIND_1UP:
		add(&h.oneups, n);
		break;
	default:
		break;
	}
}

static void pickups_vblank(int c)
{
	const unsigned row = rd8(M->consec) & 7u;

	if (!pick_have || row != pick_row) { /* a demo row change or the run's start: latch, count nothing */
		for (unsigned k = 0; k < KINDS; k++)
			pick_last[k] = (uint8_t)rd8(pick_addr(k, row));
		pick_row = row;
		pick_have = 1;
		return;
	}
	for (unsigned k = 0; k < KINDS; k++) {
		const uint8_t now = (uint8_t)rd8(pick_addr(k, row));
		const uint8_t last = pick_last[k];
		const uint8_t d = (uint8_t)(now - last); /* u8, may wrap (test 137 C1: the counters are per row) */
		pick_last[k] = now;
		if (d >= 128) { /* test 138 A3: a load/reset, not pickups; test 139 G: counted runs only, 4/run */
			if (c && pick_reset_logs < 4) {
				log_printf(C_YELLOW, "HISTORY: PICKUP COUNTER %u RESET (%u -> %u), NOT COUNTED",
				           (unsigned)k, (unsigned)last, (unsigned)now);
				pick_reset_logs++;
			}
			continue;
		}
		if (d)
			count_kind(k, d, c);
	}
}

/* the medal slots that went (cheatfx.c:299-301: a tracked medal slot that is no longer one, any reason). Returns the
 * count; the slot's state is kept for the next vblank */
static unsigned medals_gone_scan(void)
{
	unsigned gone = 0;

	for (uint32_t k = 0; k < ITEMS; k++) {
		const uint32_t a = M->items + k * M->item_size;
		const uint32_t fl = rd32(a), ty = rd32(a + 4);
		const uint8_t now = fl != 0 && !(fl & 0x4000u) && ty == KIND_MEDAL;

		if (med_last[k] && !now)
			gone++;
		med_last[k] = now;
	}
	return gone;
}

/* ---- the bosses (achieve.c:394-466 boss_kind / boss_rule, its defeat rules only; withdrawals are not counted) ------- */
static int boss_kind(uint32_t a)
{
	const uint32_t t = rd32(a + 4), sb = rd32(a + 8), v = rd32(a + 0x40);

	for (int k = 0; k < BK_N; k++)
		if (bosses[k].type == t && bosses[k].sub == sb && bosses[k].value == v)
			return k;
	return -1;
}

static void boss_track(int c)
{
	if (boss_i >= 0) {
		const uint32_t a = M->enemy + (uint32_t)boss_i * PART_SIZE;
		const int alive = (rd32(a) & 0x80000000u) && boss_kind(a) == boss_k;
		const int32_t hp = alive ? (int16_t)rd16(a + 0x3C) : boss_hp;
		const unsigned ph = alive ? rd8(a + 0x9F) : boss_ph;
		const unsigned esc = rd8(M->escaped);

		/* achieve.c:425-431: the last boss: HP 0 before its phase 3 = defeated */
		if (boss_k == BK_LAST && !boss_done) {
			if (hp <= 0 && ph < 3) {
				if (c)
					add(&h.bosses, 1);
				boss_done = 1;
			} else if (ph >= 3 && hp > 0) {
				boss_done = 1; /* leaving: not a defeat */
			}
		}
		if (!alive) {
			if (!boss_done) {
				if (boss_k == BK_S6) { /* achieve.c:436-438: stage 6's first boss gone with HP 0 = defeated */
					if ((int16_t)rd16(a + 0x3C) <= 0 && c)
						add(&h.bosses, 1);
				} else if (boss_k != BK_LAST && esc == 0) { /* achieve.c:439-441: gone, not by timeout */
					if (c)
						add(&h.bosses, 1);
				}
			}
			boss_i = -1;
		} else {
			boss_hp = hp;
			boss_ph = ph;
		}
	}
	if (boss_i < 0)
		for (unsigned i = 0; i < PARTS; i++) {
			const uint32_t a = M->enemy + i * PART_SIZE;
			int k;

			if (!(rd32(a) & 0x80000000u) || (k = boss_kind(a)) < 0)
				continue;
			boss_i = (int)i;
			boss_k = k;
			boss_hp = (int16_t)rd16(a + 0x3C);
			boss_ph = rd8(a + 0x9F);
			boss_done = 0;
			break;
		}
}

/* ---- the detectors: every vblank of a run seen (trackers), counted when c (live and eligible) ---------------------- */
static void detect(int live, int c)
{
	const unsigned idx = rd8(M->medal);
	const unsigned gone = medals_gone_scan();

	pickups_vblank(c);
	/* test 137 C1: 10000 MEDALS MISSED = the step 18 -> 0 with a medal slot gone (cheatfx.c:455-482 MEDAL LOST: the drop
	 * to 0 with medals gone and not the init case; the init case has no medal gone) */
	if (c && med_idx_last == MEDAL_10000 && idx == 0 && gone)
		add(&h.medals10k_missed, 1);
	med_idx_last = idx;

	for (int p = 0; p < 2; p++) {
		const uint32_t r = M->player + (uint32_t)p * M->p2;
		const uint32_t rec = rd32(r);
		const unsigned st = rec >> 24;
		const int cs = c && sd[p].in;

		/* in play (achieve.c:700-701: the record's state bits 0xCC000000) */
		if (live && (rec & 0xCC000000u) == 0xCC000000u)
			sd[p].in = 1;
		if (live)
			sd[p].score_last = rd32(M->score + (uint32_t)p * M->p2);

		/* SCORE EXTENDS (row 12): the next extend's score field moves on */
		{
			const uint32_t ex = rd32(r + M->extend);

			if (ex != sd[p].extend_last && cs)
				add(&h.score_extends, 1);
			sd[p].extend_last = ex;
		}
		/* MAIN SHOTS FIRED (row 13): main shot slots going live (hitbox.c's table, not the shot / bomb table) */
		for (unsigned k = 0; k < M->shot_n; k++) {
			const uint32_t a = M->shots + (uint32_t)p * M->shot_stride + k * SHOT_REC;
			const uint8_t lv = (rd32(a) & SHOT_LIVE) != 0;

			if (lv && !live_last[p][k] && cs)
				add(&h.shots, 1);
			live_last[p][k] = lv;
		}
		/* BOMBS USED (row 14): gadgets' BLAST start edge (gadgets.c bomb_read's bm_on, gadgets_bomb_on) */
		{
			const int on = gadgets_bomb_on(p) != 0;

			if (on && !sd[p].bomb_last && cs)
				add(&h.bombs, 1);
			sd[p].bomb_last = on;
		}
		/* DEATHS (row 22): the hit edge, as gadgets.c:1096-1109: DC -> E0 (hit) or A0 (waiting), once per death */
		if (sd[p].state_last == DEATH_DC && (st == 0xE0u || st == 0xA0u) && cs)
			add(&h.deaths, 1);
		sd[p].state_last = st;

		/* SHOT POWER: the shot level byte becomes 6 (row 15: ibara / ARRANGE; Kuro BL is not counted) */
		{
			const unsigned sh = rd8(r + M->shot);

			if (game != HIST_BLK && sh == 6 && sd[p].shot_last != 6 && cs)
				add(&h.special_power, 1);
			sd[p].shot_last = sh;
		}
		/* SPECIAL FORMATIONS (row 16): ibara only; the codes of a formation, achieve.c:650-661 */
		if (game == HIST_IBARA) {
			uint8_t f[3];

			for (int k = 0; k < 3; k++)
				f[k] = (uint8_t)rd8(r + M->form + (uint32_t)k);
			if (memcmp(f, sd[p].form_last, 3) != 0 &&
			    ((f[0] == 1 && f[1] == 1 && f[2] == 1) || (f[0] == 2 && f[1] == 2 && f[2] == 0) ||
			     (f[0] == 3 && f[1] == 4 && f[2] == 0) || (f[0] == 5 && f[1] == 5 && f[2] == 5)) && cs)
				add(&h.special_form, 1);
			memcpy(sd[p].form_last, f, 3);
		}
	}
	if (live)
		boss_track(c);
}

/* ---- the ending and the clears (achieve.c:506-535 ending_rule; by side and ship, and ibara's mode) ------------------ */
static void ending_check(int eligible)
{
	unsigned sid, mode;
	int any = 0;

	if (end_done || rd8(M->ending) != 1)
		return;
	sid = rd8(M->stage_id);
	if (sid < 13 || sid > 15) /* 13 Bond alone, 14 Dyne alone, 15 both (achieve.c:513-514) */
		return;
	end_done = 1;
	if (!eligible)
		return;
	mode = game == HIST_IBARA ? rd8(M->mode) : 0;
	for (int p = 0; p < 2; p++) {
		const int want = sid == 15 || (sid == 13 && p == 0) || (sid == 14 && p == 1);

		if (want && sd[p].in) {
			unsigned row, col;

			ship_cell(sd[p].ship, &row, &col);
			add(&h.clears[row][col], 1);
			any = 1;
		}
	}
	if (any && game == HIST_IBARA && mode < 3)
		add(&h.clears_mode[mode], 1);
	if (any)
		log_printf(C_GREEN, "HISTORY: CLEAR COUNTED (ENDING %u, MODE %u)", sid, mode);
}

/* ---- the public API ------------------------------------------------------------------------------------------------- */
static int make_dir(const char *d)
{
	struct stat st;

	if (stat(d, &st) != 0) /* as settings.c make_dir: only when not there */
		mkdir(d, 0777);
	return stat(d, &st) == 0 && S_ISDIR(st.st_mode) ? 0 : -1;
}

/* the file's folder (and its parent, when that is missing too) */
static int make_folders(const char *file)
{
	char d[160], p[160];
	const char *last = strrchr(file, '/'), *prev;
	size_t len;

	if (!last)
		return 0;
	len = (size_t)(last - file);
	if (len >= sizeof(d))
		return -1;
	memcpy(d, file, len);
	d[len] = 0;
	prev = strrchr(d, '/');
	if (prev && prev > d) {
		len = (size_t)(prev - d);
		memcpy(p, d, len);
		p[len] = 0;
		make_dir(p);
	}
	return make_dir(d);
}

void hist_init(int g, const char *path)
{
	FILE *f;
	struct hist t;
	size_t n;

	memset(&h, 0, sizeof(h));
	game = g;
	M = g == HIST_BLK ? &map_blk : &map_ib;
	snprintf(hist_path, sizeof(hist_path), "%s", path);
	snprintf(hist_tmp, sizeof(hist_tmp), "%s.tmp", path);
	h.magic = HIST_MAGIC;
	h.version = HIST_VERSION;
	h.game = (uint32_t)g;
	f = fopen(hist_path, "rb");
	if (!f && (f = fopen(hist_tmp, "rb")) != NULL) /* test 137 C1: a save cut off (as settings.c's ini) */
		log_printf(C_YELLOW, "HISTORY: ONLY %s THERE (A SAVE CUT OFF): READ", hist_tmp);
	if (!f) {
		log_printf(C_YELLOW, "HISTORY: %s NOT THERE, ZEROS", hist_path);
	} else {
		n = fread(&t, 1, sizeof(t), f);
		fclose(f);
		if (n == sizeof(t) && t.magic == HIST_MAGIC && t.version == HIST_VERSION && t.game == (uint32_t)g) {
			char rt[24];

			h = t;
			fmt_hms(h.runtime_vbl, rt, sizeof(rt));
			log_printf(C_GREEN, "HISTORY: %s READ, RUNTIME %s, %u RUNS", hist_path, rt, (unsigned)h.runs);
		} else {
			/* test 138 A5: old file holds test 137's bad totals: start from zeros */
			if (n >= 8 && t.magic == HIST_MAGIC && t.version != HIST_VERSION)
				log_printf(C_YELLOW, "HISTORY: %s IS VERSION %u, NOT %u: ZEROS", hist_path,
				           (unsigned)t.version, (unsigned)HIST_VERSION);
			else
				log_printf(C_YELLOW, "HISTORY: %s BAD (MAGIC, VERSION OR GAME), ZEROS", hist_path);
			memset(&h, 0, sizeof(h));
			h.magic = HIST_MAGIC;
			h.version = HIST_VERSION;
			h.game = (uint32_t)g;
		}
	}
	dirty = 0;
	relatch = 0;
	run_seen = 0;
	run_ended = 0;
	end_done = 0;
	pick_have = 0;
	pick_reset_logs = 0; /* test 139 G */
	boss_i = -1;
	boss_done = 0;
	memset(sd, 0, sizeof(sd));
}

void hist_clear(void)
{
	memset(&h, 0, sizeof(h));
	h.magic = HIST_MAGIC;
	h.version = HIST_VERSION;
	h.game = (uint32_t)game;
	dirty = 1;
	relatch = 0;
	run_seen = 0;
	run_ended = 0;
	end_done = 0;
	pick_have = 0;
	pick_reset_logs = 0; /* test 139 G */
	boss_i = -1;
	boss_done = 0;
	memset(sd, 0, sizeof(sd));
	log_printf(C_GREEN, "HISTORY: INITIALIZED (ALL COUNTERS ZERO)");
}

/* test 138 A2: latch every tracker (as hist_run_start); ship_also = 1 sets the ship byte too */
static void hist_latch(int ship_also)
{
	for (int p = 0; p < 2; p++) {
		const uint32_t r = M->player + (uint32_t)p * M->p2;

		if (ship_also)
			sd[p].ship = rd8(r + SHIP_OFF);
		sd[p].score_last = rd32(M->score + (uint32_t)p * M->p2);
		sd[p].shot_last = rd8(r + M->shot);
		sd[p].state_last = rd32(r) >> 24;
		sd[p].extend_last = rd32(r + M->extend);
		for (int k = 0; k < 3; k++)
			sd[p].form_last[k] = (uint8_t)rd8(r + M->form + (uint32_t)k);
		sd[p].bomb_last = gadgets_bomb_on(p) != 0;
	}
	for (int p = 0; p < 2; p++)
		for (unsigned k = 0; k < M->shot_n; k++)
			live_last[p][k] = (rd32(M->shots + (uint32_t)p * M->shot_stride + k * SHOT_REC) & SHOT_LIVE) != 0;
	(void)medals_gone_scan(); /* the medal slots as they are: none gone yet */
	med_idx_last = rd8(M->medal);
	pick_have = 0;
	boss_i = -1;
	boss_done = 0;
}

void hist_vblank(int in_run, int eligible)
{
	const int live = in_run && run_seen && !run_ended;
	const int c = live && eligible;

	h.runtime_vbl++;
	dirty = 1; /* test 145: runtime/playtime changed, so the next requested save writes it */
	if (live)
		h.playtime_vbl++;
	if (relatch) { /* test 138 A2: a state load: relatch, count nothing this vblank */
		hist_latch(0);
		relatch = 0;
	} else if (run_seen) {
		detect(live, c);
		ending_check(eligible);
	}
}

void hist_run_start(void)
{
	memset(sd, 0, sizeof(sd));
	hist_latch(1);
	run_seen = 1;
	run_ended = 0;
	end_done = 0;
	pick_reset_logs = 0; /* test 139 G */
	log_printf(C_CYAN, "HISTORY: RUN START (SHIP BYTES %u %u)", sd[0].ship, sd[1].ship);
}

void hist_state_loaded(void)
{
	relatch = 1; /* test 138 A1 */
}

void hist_run_end(int eligible)
{
	if (!run_seen || run_ended)
		return;
	run_ended = 1;
	if (!eligible) {
		log_printf(C_YELLOW, "HISTORY: RUN END NOT COUNTED (NOT ELIGIBLE)");
		return;
	}
	add(&h.runs, 1);
	for (int p = 0; p < 2; p++)
		if (sd[p].in) {
			unsigned row, col;

			h.total_score += sd[p].score_last;
			ship_cell(sd[p].ship, &row, &col);
			add(&h.chosen[row][col], 1);
		}
	dirty = 1;
	log_printf(C_GREEN, "HISTORY: RUN END COUNTED, %u RUNS", (unsigned)h.runs);
}

int hist_dirty(void)
{
	return dirty;
}

void hist_save_now(void)
{
	struct hist snap;
	FILE *f;
	uint64_t t0 = tb_read();
	int ok;

	if (!hist_path[0])
		return;
	dirty = 0; /* a change made while the file is written sets it again */
	memcpy(&snap, &h, sizeof(snap));
	ok = make_folders(hist_path) == 0;
	if (ok) {
		f = fopen(hist_tmp, "wb");
		ok = f != NULL;
		if (f) {
			ok = fwrite(&snap, 1, sizeof(snap), f) == sizeof(snap);
			if (fclose(f) != 0)
				ok = 0;
		}
	}
	if (ok) {
		unlink(hist_path); /* fails when there is none */
		ok = rename(hist_tmp, hist_path) == 0;
	}
	if (!ok)
		dirty = 1;
	if (ok)
		log_printf(C_GREEN, "HISTORY: SAVED IN %u MS", tb_us(t0, tb_read()) / 1000);
	else
		log_printf(C_RED, "HISTORY: NOT SAVED (FOLDER, WRITE OR RENAME FAILED)");
}

int hist_pages(void)
{
	return 3;
}

int hist_page_rows(int page, char lab[][24], char val[][20], int max)
{
	int n = 0;
	const char *labels[11];
	uint64_t nums[11];
	char times[2][20];
	int is_time[11] = {0};
	const char *dash[11] = {0};
	int total;

	if (page == 1) {
		static const char *l1[8] = {"GAME RUNTIME", "PLAY TIME", "TOTAL SCORE", "SCORE EXTENDS", "MAIN SHOTS FIRED",
		                            "BOMBS USED", "DEATHS", "BOSSES DESTROYED"};
		for (int i = 0; i < 8; i++)
			labels[i] = l1[i];
		is_time[0] = is_time[1] = 1;
		nums[0] = h.runtime_vbl;
		nums[1] = h.playtime_vbl;
		nums[2] = h.total_score;
		nums[3] = h.score_extends;
		nums[4] = h.shots;
		nums[5] = h.bombs;
		nums[6] = h.deaths;
		nums[7] = h.bosses;
		total = 8;
	} else if (page == 2) {
		static const char *l2[11] = {"MEDALS", "10000 MEDALS", "10000 MEDALS MISSED", "BOMB FRAGMENTS",
		                             "FULL BOMBS", "SHOT POWER SMALL", "SHOT POWER LARGE", "OPTIONS", "1UP ITEMS",
		                             "SPECIAL POWER-UPS", "SPECIAL FORMATIONS"};
		for (int i = 0; i < 11; i++)
			labels[i] = l2[i];
		nums[0] = h.medals;
		nums[1] = h.medals10k;
		nums[2] = h.medals10k_missed;
		nums[3] = h.frags;
		nums[4] = h.fullbombs;
		nums[5] = h.shot_small;
		nums[6] = h.shot_large;
		nums[7] = h.options;
		nums[8] = h.oneups;
		nums[9] = h.special_power;
		nums[10] = h.special_form;
		dash[9] = game == HIST_BLK ? "-" : NULL;          /* Kuro BL: no special power-up */
		dash[10] = game == HIST_IBARA ? NULL : "-";       /* Kuro BL and ARRANGE: no special formations */
		total = 11;
	} else {
		return 0;
	}
	for (int i = 0; i < total && n < max; i++, n++) {
		snprintf(lab[n], 24, "%s", labels[i]);
		if (dash[i])
			snprintf(val[n], 20, "%s", dash[i]);
		else if (is_time[i]) {
			fmt_hms(nums[i], times[i & 1], sizeof(times[0]));
			snprintf(val[n], 20, "%s", times[i & 1]);
		} else
			fmt_num(nums[i], val[n], 20);
	}
	return n;
}

void hist_grid(int which, unsigned out[4][5], int *nrows, const char *rowname[4])
{
	const uint32_t (*src)[4] = which ? h.clears : h.chosen;
	const int rows = game == HIST_BLK ? 4 : 2;

	memset(out, 0, sizeof(unsigned) * 4 * 5);
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < 4; c++) {
			out[r][c] = src[r][c];
			out[r][4] += src[r][c];
		}
	}
	if (nrows)
		*nrows = rows;
	if (rowname) {
		static const char *blk[4] = {"BOND STR", "BOND SPR", "DYNE STR", "DYNE SPR"};
		static const char *two[2] = {"BOND", "DYNE"};

		for (int r = 0; r < rows; r++)
			rowname[r] = rows == 4 ? blk[r] : two[r];
	}
}

void hist_modes(unsigned out[3])
{
	for (int i = 0; i < 3; i++)
		out[i] = h.clears_mode[i];
}

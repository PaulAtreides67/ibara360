/* achieve.c: test 105, the dashboard achievements (achieve.h; PLAN.md "Test 105"; the RAM facts from the research
 * folders named at each rule). Called on the game thread between its frames, so the records hold still. Every rule
 * also needs the run eligible (main.c's ach_input.eligible) and a run seen in play since ach_run_start: never in
 * TRAINING, after a LOAD STATE / RESTART STAGE, in a replay's playback, in the attract's demos, nor with DIP SWITCHES
 * off their defaults (the user's rules). Two players: either side earns for the signed-in profile; "one credit" is
 * the side's own (its score never fell: a continue starts it again from the continue count, gadgets.c test 83). */
#include <stdint.h>
#include <string.h>

#include "achieve.h"
#include "cv1k.h"

#ifdef IB_ARRANGE
#include "arrange_patch.h" /* ARRANGE's own RAM (its addresses move with the patch) */
#endif
#ifndef ARRANGE_OWNED /* the PC build has no ARRANGE: test 105's values, never read there */
#define ARRANGE_OWNED 0x0C7C492Eu   /* u8[2][7]: the stored sub weapons */
#define ARRANGE_NOWNED 0x0C7C492Cu  /* u8[2]: how many (cleared at every respawn) */
#define ARRANGE_ROSE_VAL 0x0C7C441Cu /* u32[0x140]: a rose item slot's value, written at its spawn */
#endif

static uint32_t rd32(uint32_t a)
{
	const uint8_t *p = RAMP(a);
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static unsigned rd16(uint32_t a)
{
	const uint8_t *p = RAMP(a);
	return (unsigned)p[0] << 8 | p[1];
}

static unsigned rd8(uint32_t a)
{
	return *RAMP(a);
}

/* ---- each game's RAM (gadgets.c gd_map, its research) ----------------------------------------------------------- */
struct ach_map {
	uint32_t player, p2;      /* the player's record, + side * p2 (+0 u32 state: 0xCC000000 bits = in play) */
	uint32_t score;           /* u32, + side * p2 */
	uint32_t lives, shot, form; /* offsets in the record (u8; form u8[3]) */
	uint32_t medal;           /* u8: the next medal's step, 18 = 10000 */
	uint32_t pickups, consec; /* the pickup counters u8[8] + 8 * the demo flag (work/g61/re: kind 1 option .. 6 1UP) */
	uint32_t game_on, stage;  /* the run: game_on 1..2, (run_stage) the stage byte not 0 */
	int run_stage;
	uint32_t mode;            /* ibara's normal / harder / extended (0 = none) */
	uint32_t shots;           /* the shot table (+ side * 0x2800 + slot * 0x50, 128; work/g64/hadou) */
	uint32_t enemy;           /* 192 parts of 0xB4 (work/g105/kamikaze: every loop scans 0xC0; bossclock.c's 100 are enough
	                           * for bosses) */
	uint32_t logic;           /* u32, + 1 a game frame (work/g64/hadou, work/g105/kamikaze) */
	uint32_t stage_id;        /* u8: the stage's id, 5 = CASTLE (work/g105/kamikaze) */
	uint32_t stock;           /* Kuro BL's weapon stock, u32[7] (0 = none) */
	int xtc;                  /* Kuro BL's XTC (s32 at +0x280, quarters) */
	uint32_t extend_at;       /* the first extend's score with the default EXTEND (DIP 1: every 1M / 10M) */
	/* work/g105/state/REPORT.txt */
	uint32_t credits;         /* u8 in the record: credits used, 1 at the credit, + 1 a continue or a join (6.) */
	uint32_t bombs, frags;    /* u8 in the record: at most 4 and 40 (2.) */
	uint32_t ending, escaped; /* u8: the ending started (FF03); the boss left by timeout (7.) */
	uint32_t entry;           /* the name entry's tables (TBL; 1.) */
	uint32_t entry_t;         /* u8: ibara's table (its game type); 0 = a fixed one (entry_tf) */
	unsigned entry_tf;
	uint32_t stock_n;         /* Kuro BL: u32, the stock's count (4.) */
	uint32_t popups;          /* Kuro BL: the score popups, 256 x 0x1C (+0 live, +0x14 value; 3.) */
	uint32_t items, item_size; /* the items, 0x140 (+0 live, +4 type: 5 = the full bomb, 7 = rose; 3.; work/g106/bomba) */
};

static const struct ach_map map_ib = {
	.player = 0x0C283794u, .p2 = 0x280u, .score = 0x0C283A04u, .lives = 0x253u, .shot = 0x254u, .form = 0x262u,
	.medal = 0x0C392D78u, .pickups = 0x0C21CC8Cu, .consec = 0x0C21CA15u, .game_on = 0x0C28530Cu,
	.stage = 0x0C392B08u, .run_stage = 0, .mode = 0x0C286752u, .shots = 0x0C217A04u, .enemy = 0x0C26CD40u,
	.logic = 0x0C21F880u, .stage_id = 0x0C22486Eu, .extend_at = 1000000u,
	.credits = 0x26Bu, .bombs = 0x256u, .frags = 0x257u, .ending = 0x0C21F7F0u, .escaped = 0x0C392AFDu,
	.entry = 0x0C2859A8u, .entry_t = 0x0C27DC50u, .items = 0x0C38C064u, .item_size = 0x54u,
};
static struct ach_map map_arr; /* ibara's, with ARRANGE's extend (10,000,000) and its name-entry table 3 */

static const struct ach_map map_blk = {
	.player = 0x0C29D1D8u, .p2 = 0x2A0u, .score = 0x0C29D468u, .lives = 0x25Au, .shot = 0x25Bu, .form = 0x269u,
	.medal = 0x0C3C53E0u, .pickups = 0x0C22E2ACu, .consec = 0x0C22E015u, .game_on = 0x0C2A6D90u,
	.stage = 0x0C3C4170u, .run_stage = 1, .shots = 0x0C229004u, .enemy = 0x0C286578u, .stock = 0x0C22E028u,
	.logic = 0x0C2380B0u, .stage_id = 0x0C23E0A6u, .xtc = 1, .extend_at = 10000000u,
	.credits = 0x28Au, .bombs = 0x25Du, .frags = 0x25Eu, .ending = 0x0C238020u, .escaped = 0x0C3C4164u,
	.entry = 0x0C2ABAACu, .entry_tf = 0, .stock_n = 0x0C297498u, .popups = 0x0C3CA708u,
	.items = 0x0C3BC7CCu, .item_size = 0x60u,
};

#define RUN_GAP 60     /* vblanks out of a run that end it (gadgets.c GD_RUN_GAP: a stage start has one) */
#define PARTS 192u
#define PART_SIZE 0xB4u
#define MEDAL_10000 18
#define KIND_MEDAL 3
#define KIND_BOMB 5 /* the full bomb */
#define KIND_1UP 6
#define ITEMS 0x140u
#define BOMB_GAP 60    /* vblanks after a side was last hit / waiting / (re)entering whose new full bombs count as its
                        * death's (work/g106/bomba) */

static const struct ach_map *M = &map_ib;
static uint32_t pickup(unsigned kind);
static int game = ACH_IBARA;

static uint64_t earned;   /* bit id - 1: told (or the profile's); test 108: 64 bits, 33 achievements */
static int auto_runs;     /* the PC harness: every run from its start counts (no main.c to call ach_run_start) */
static const char *note;
static int found[ACH_COUNT + 1];
static int ok;            /* this vblank may earn (eligible, the run on): every tracker still runs without it */

/* the run */
static int run_ok;        /* ach_run_start seen and the run not over */
static int run_seen;      /* the run has been in play since */
static int out_n;         /* vblanks out of play */
static struct side {
	int in;               /* in play this run */
	int continued;        /* its score fell: a continue */
	uint32_t score_last;
	unsigned medal_count; /* the medal pickup counter at the last vblank */
	unsigned up_count;    /* the 1UP's */
	unsigned bomb_count;  /* the full bomb's */
	unsigned state;       /* +0's top byte at the last vblank (0xDC = alive) */
	int clean;            /* Kuro BL: the shared stock was empty at this side's last respawn (4.) */
	unsigned cursor[4];   /* the name entry's cursor (per table) and its letters at the last vblank */
	uint8_t letters[4][3];
} sd[2];
static int run_any;       /* a run seen since ach_run_start (the ending and the name entry come after its frames) */
static int end_done;
/* the boss being fought (7.): its part, kind (BK_*), HP and phase at the last vblank */
static int boss_i = -1, boss_k, boss_done;
static int32_t boss_hp;
static unsigned boss_ph;
static unsigned escaped_last;
/* LOVES ME...LOVES ME NOT (work/g109/loves): the stage 6 boss's part, all its parts gone at the last vblank, told */
static int loves_i = -1, loves_all, loves_done;
/* x300 (3.) */
static uint8_t live_last[256];
static uint8_t rose_last[0x140];
static unsigned x300_hist[32], x300_n;
static unsigned medal_step_last = 0xFF;
/* BOMBA (work/g106/bomba): per item slot 1 = a full bomb at the last vblank, 2 = one born in a death's window */
static uint8_t bomb_slot[ITEMS];
static unsigned bomb_gap = BOMB_GAP;
static uint8_t bomb_st[2];
static uint8_t form_last[2][3];
/* the part table and the logic counter at the last vblank (KAMIKAZE BOMB's and CRAWLER TRACK's "before") */
static uint8_t parts_prev[192 * 0xB4];
static uint32_t logic_prev;
static int prev_ok;

static const char *const names[ACH_COUNT + 1] = {
	"?", "KAMIKAZE BOMB", "ORANGE MEILLANDINA", "MILLIONAIRE WEAPONS", "CRAWLER TRACK", "GLOIRE DE MIDI",
	"STRATEGIC WITHDRAWAL", "SPECIAL POWER UP", "GOLD MEDALIST", "EXTEND", "RESOURCE HOARDER", "HANA KASUMI", "1UP",
	"MOUNT SHASTA", "FRENCH LACE", "DR. TERESA", "ARCADE COMPLETE", "BLACK LABEL COMPLETE", "ARRANGE COMPLETE",
	"LETTER SCORE", "FULL ARSENAL", "HADOU-GUN", "SILISTER SIMILIS", "DIO SPIROSSI", "MARCH TO DEATH ROW", "x300",
	"XTREME TERROR COUNTER", "SPECIAL FORMATION", "*!@&#$", "EDELWEISS", "BOMBA", "ARCADE 1CC",
	"BLACK LABEL 1CC", "ARRANGE 1CC", "LOVES ME...LOVES ME NOT",
};

const char *ach_name(int id)
{
	return id >= 1 && id <= ACH_COUNT ? names[id] : names[0];
}

void ach_auto(int on)
{
	auto_runs = on;
}

int ach_seen(int *out, int max)
{
	int n = 0;
	for (int id = 1; id <= ACH_COUNT && n < max; id++)
		if (found[id])
			out[n++] = id;
	return n;
}

const char *ach_note(void)
{
	return note;
}

void ach_init(int g)
{
	game = g;
	map_arr = map_ib;
	map_arr.extend_at = 10000000u;
	map_arr.entry_t = 0;
	map_arr.entry_tf = 3;
	M = g == ACH_BLK ? &map_blk : g == ACH_ARRANGE ? &map_arr : &map_ib;
	ach_run_start();
	run_ok = 0;
}

void ach_have(int id)
{
	if (id >= 1 && id <= ACH_COUNT)
		earned |= 1ull << (id - 1);
}

void ach_run_start(void)
{
	run_ok = 1;
	prev_ok = 0;
	run_seen = 0;
	run_any = 0;
	end_done = 0;
	boss_i = -1;
	boss_done = 0;
	loves_i = -1;
	escaped_last = 0xFF;
	x300_n = 0;
	memset(x300_hist, 0, sizeof(x300_hist));
	out_n = 0;
	memset(sd, 0, sizeof(sd));
	medal_step_last = 0xFF;
	memset(form_last, 0, sizeof(form_last));
	for (int p = 0; p < 2; p++) {
		sd[p].clean = 1;
		for (int t = 0; t < 4; t++)
			sd[p].cursor[t] = 3; /* nothing typed yet: only a 0..2 -> 3 step counts */
		sd[p].score_last = rd32(M->score + (uint32_t)p * M->p2);
		/* the counters as they are (work/g61/re A3: row 0 carries over a game over): only a change after this counts */
		sd[p].medal_count = *RAMP(pickup(KIND_MEDAL));
		sd[p].up_count = *RAMP(pickup(KIND_1UP));
		sd[p].bomb_count = *RAMP(pickup(KIND_BOMB));
	}
	/* the full bombs already out: their birth unseen, so never counted */
	for (uint32_t k = 0; k < ITEMS; k++) {
		const uint32_t a = M->items + k * M->item_size;
		bomb_slot[k] = rd32(a) != 0 && rd32(a + 4) == KIND_BOMB ? 2 : 0;
	}
	bomb_gap = 0;
	memset(bomb_st, 0, sizeof(bomb_st));
}

/* ---- the rules ------------------------------------------------------------------------------------------------- */


static void hit(int id, const char *why)
{
	if (ok && id >= 1 && id <= ACH_COUNT && !found[id]) {
		found[id] = 1;
		note = why;
	}
}

/* the side has used one credit (work/g105/state 6.: the record's credits byte, 1 at the credit, 2+ after a continue) */
static int one_credit(int p)
{
	return sd[p].in && rd8(M->player + (uint32_t)p * M->p2 + M->credits) == 1;
}

/* the pickup counters' row (work/g61/re: row 1 = the demo's) */
static uint32_t pickup(unsigned kind)
{
	return M->pickups + kind + 8u * (rd8(M->consec) & 7u);
}

/* work/g64/hadou: the Hadou (type side + 1) exploding (phase 3) stuck (0x4000) to a part: it explodes only on boss-class
 * parts (+0 & 0x8000); the main part is one that is no child (+0 & 0x4000 clear) */
static int hadou_on_boss(int p)
{
	for (uint32_t k = 0; k < 128; k++) {
		const uint32_t r = M->shots + (uint32_t)p * 0x2800u + k * 0x50u;
		const uint32_t fl = rd32(r);
		if (!fl || rd32(r + 4) != (uint32_t)p + 1 || rd32(r + 8) != 3 || !(fl & 0x4000u))
			continue;
		const unsigned i = rd16(r + 0x4C);
		if (i >= PARTS)
			continue;
		const uint32_t pf = rd32(M->enemy + i * PART_SIZE);
		if ((pf & 0x80000000u) && (pf & 0x8000u) && !(pf & 0x4000u))
			return 1;
	}
	return 0;
}

/* work/g105/kamikaze 1: the part's previous record (P) and its current one (C) */
static const uint8_t *P_(unsigned i)
{
	return parts_prev + i * PART_SIZE;
}

static uint32_t pb32(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static int32_t s16at(const uint8_t *p)
{
	return (int16_t)((unsigned)p[0] << 8 | p[1]);
}

/* part j (or the part it links to, by its +7C chain within one spawn's +82) is part v */
static int links_to(unsigned j, unsigned v)
{
	for (int depth = 0; depth < 8 && j < PARTS; depth++) {
		const uint8_t *pj = P_(j);
		if (j == v)
			return 1;
		if (!(pb32(pj) & 0x4000u))
			return 0;
		{
			const unsigned up = (unsigned)pj[0x7C] << 8 | pj[0x7D];
			if (up >= PARTS || memcmp(P_(up) + 0x82, pj + 0x82, 2) != 0)
				return 0;
			j = up;
		}
	}
	return 0;
}

/* a shrapnel record of side s over part j's hitboxes (P's flags and hitbox list, C's positions) */
static int shrapnel_on(unsigned j, int s)
{
	const uint8_t *pj = P_(j);
	const uint32_t fl = pb32(pj), list = pb32(pj + 0x1C);
	const uint32_t cj = M->enemy + j * PART_SIZE;
	const int32_t jx = (int32_t)rd32(cj + 0x24), jy = (int32_t)rd32(cj + 0x28);

	if ((fl & 0x03000000u) != 0x03000000u || (fl & 0x20000000u) || pj[0xAB] > pj[0xA9] || (list >> 24) != 0x0C)
		return 0;
	for (uint32_t e = list; e < list + 16u * 16u; e += 16u) {
		const uint32_t w = rd32(e), h = rd32(e + 4);
		const int32_t ex = jx + (int32_t)rd32(e + 8), ey = jy + (int32_t)rd32(e + 12);
		if (!w)
			break;
		if ((w | fl) & 0x20000000u)
			continue;
		for (uint32_t k = 0; k < 128; k++) {
			const uint32_t r = M->shots + (uint32_t)s * 0x2800u + k * 0x50u;
			int64_t dx, dy;
			if (rd32(r) != 0xCC808000u || rd32(r + 4) != 0 || rd32(r + 8) >= 0x40)
				continue;
			dx = (int64_t)(int32_t)rd32(r + 0x24) - ex;
			dy = (int64_t)(int32_t)rd32(r + 0x28) - ey;
			if ((dx < 0 ? -dx : dx) < 0x80000 + (int64_t)(w & 0x0FFFFFFFu) && (dy < 0 ? -dy : dy) < 0x80000 + (int64_t)h)
				return 1;
		}
	}
	return 0;
}

/* work/g105/kamikaze 1: a part at HP 1 went to 0 this game frame under side s's shrapnel (no shrapnel: nothing) */
static void kamikaze_rule(void)
{
	const int s = (int)(logic_prev & 1u);
	int any = 0;

	for (uint32_t k = 0; k < 128 && !any; k++) {
		const uint32_t r = M->shots + (uint32_t)s * 0x2800u + k * 0x50u;
		any = rd32(r) == 0xCC808000u && rd32(r + 4) == 0 && rd32(r + 8) < 0x40;
	}
	if (!any)
		return;
	for (unsigned v = 0; v < PARTS; v++) {
		const uint8_t *pv = P_(v);
		const uint32_t cv = M->enemy + v * PART_SIZE;
		if (!(pb32(pv) & 0x80000000u) || (pb32(pv) & 0x4000u) || s16at(pv + 0x3C) != 1 || (int16_t)rd16(cv + 0x3C) != 0)
			continue;
		for (unsigned j = 0; j < PARTS; j++)
			if ((pb32(P_(j)) & 0x80000000u) && links_to(j, v) && shrapnel_on(j, s)) {
				hit(ACH_KAMIKAZE, "A PART AT HP 1 KILLED UNDER THE DEATH'S SHRAPNEL");
				return;
			}
	}
}

/* work/g105/kamikaze 2: on CASTLE, a stopped convoy tank (two tracks gone, not diagonal) removed with its HP kept (a
 * crush; a shot kill sets HP 0 first) */
static void crawler_rule(void)
{
	if (rd8(M->stage_id) != 5)
		return;
	for (unsigned i = 0; i < PARTS; i++) {
		const uint8_t *pi = P_(i);
		const uint32_t fl = pb32(pi), type = pb32(pi + 4), ci = M->enemy + i * PART_SIZE;
		if (!(fl & 0x80000000u) || (fl & 0x40000000u) || (type != 0x21 && type != 0x22) || pb32(pi + 8) != 0 ||
		    !(pi[0xA5] & 9) || !(pi[0xA5] & 6) || s16at(pi + 0x3C) <= 0)
			continue;
		if (rd32(ci) == 0 && (int32_t)(int16_t)rd16(ci + 0x3C) == s16at(pi + 0x3C))
			hit(ACH_CRAWLER, "A STOPPED TANK CRUSHED");
	}
}

/* ---- work/g105/state 7.: the bosses (the main part: type, subtype, score value) ----------------------------------- */
enum { BK_MEIDI, BK_MIDI, BK_KASUMI, BK_SHASTA, BK_LACE, BK_S6, BK_LAST, BK_N };
static const struct { uint32_t type, sub, value; int ach; } bosses[BK_N] = {
	{0x05, 0x00, 100000u, ACH_MEIDI}, {0x2D, 0x00, 100000u, ACH_MIDI}, {0x33, 0x00, 100000u, ACH_KASUMI},
	{0x2A, 0x00, 100000u, ACH_SHASTA}, {0x41, 0x06, 100000u, ACH_LACE}, {0x4A, 0x00, 100000u, 0},
	{0x4A, 0x02, 300000u, ACH_TERESA},
};

static int boss_kind(uint32_t a)
{
	const uint32_t t = rd32(a + 4), sb = rd32(a + 8), v = rd32(a + 0x40);
	for (int k = 0; k < BK_N; k++)
		if (bosses[k].type == t && bosses[k].sub == sb && bosses[k].value == v)
			return k;
	return -1;
}

static void withdrawal(void)
{
	if (one_credit(0) || one_credit(1))
		hit(ACH_WITHDRAWAL, "A BOSS LEFT BY TIMEOUT ON ONE CREDIT");
}

/* stages 1-5: the escape flag (cleared at each boss's spawn) set = left by timeout, the main part gone with it 0 =
 * defeated (HP is no use: killed parts vanish with 1-2 left); stage 6's first boss: gone with HP 0 = defeated, HP left =
 * left; the last boss: HP 0 before phase 3 = defeated, phase 3 with HP = leaving */
static void boss_rule(void)
{
	const unsigned esc = rd8(M->escaped);

	if (escaped_last == 0 && esc == 1)
		withdrawal();
	escaped_last = esc;
	if (boss_i >= 0) {
		const uint32_t a = M->enemy + (uint32_t)boss_i * PART_SIZE;
		const int alive = (rd32(a) & 0x80000000u) && boss_kind(a) == boss_k;
		const int32_t hp = alive ? (int16_t)rd16(a + 0x3C) : boss_hp;
		const unsigned ph = alive ? rd8(a + 0x9F) : boss_ph;
		if (boss_k == BK_LAST && !boss_done) {
			if (hp <= 0 && ph < 3) {
				hit(ACH_TERESA, "THE LAST BOSS'S HP 0 BEFORE ITS PHASE 3");
				boss_done = 1;
			} else if (ph >= 3 && hp > 0) {
				withdrawal();
				boss_done = 1;
			}
		}
		if (!alive) {
			if (!boss_done) {
				if (boss_k == BK_S6) {
					if ((int16_t)rd16(a + 0x3C) > 0)
						withdrawal();
				} else if (boss_k != BK_LAST && esc == 0) {
					hit(bosses[boss_k].ach, "THE BOSS'S MAIN PART GONE, NOT BY TIMEOUT");
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

/* ---- work/g109/loves: Teresa's first phase = the stage 6 boss (BK_S6). Its record counts its destroyed parts (each
 * part's death code adds 1, ib 0C099C2A..0C099D96): +A5 the 5 arms (sub 25, their chains die with them), +A6 the 6 sub
 * 11-18, +A7 the 6 sub 19-20; the 24 sub 21/22 can't be hit. All 5/6/6 at the last vblank its HP was above 0, then HP
 * 0 before its phase 2 (a timeout: phase 2, HP left). The same record in Kuro BL; ARRANGE runs ibara's code */
static void loves_rule(void)
{
	uint32_t a;
	int32_t hp;

	if (loves_i < 0) {
		for (unsigned i = 0; i < PARTS && loves_i < 0; i++) {
			a = M->enemy + i * PART_SIZE;
			if ((rd32(a) & 0x80000000u) && boss_kind(a) == BK_S6) {
				loves_i = (int)i;
				loves_all = 0;
				loves_done = 0;
			}
		}
		if (loves_i < 0)
			return;
	}
	a = M->enemy + (uint32_t)loves_i * PART_SIZE;
	if (!(rd32(a) & 0x80000000u) || boss_kind(a) != BK_S6) {
		loves_i = -1;
		return;
	}
	if (loves_done)
		return;
	hp = (int16_t)rd16(a + 0x3C);
	if (hp <= 0) {
		if (loves_all)
			hit(ACH_LOVES, "THE FIRST PHASE KILLED WITH ALL ITS PARTS GONE");
		loves_done = 1;
	} else if (rd8(a + 0x9F) >= 2) {
		loves_done = 1;
	} else {
		loves_all = rd8(a + 0xA5) >= 5 && rd8(a + 0xA6) >= 6 && rd8(a + 0xA7) >= 6;
	}
}

/* ---- work/g105/state 5.: the ending (FF03's flag, then the script id 13 1P alone = Bond, 14 2P alone = Dyne, 15 both)
 * and the clears; HARDER / EXTENDED = ibara's mode 1 / 2 (the same ending) */
static void ending_rule(void)
{
	unsigned sid;

	if (end_done || rd8(M->ending) != 1)
		return;
	sid = rd8(M->stage_id);
	if (sid < 13 || sid > 15)
		return;
	end_done = 1;
	/* test 110 (user: a Harder 1CC "unlocked arcade complete (not supposed to happen)"): ARCADE COMPLETE is the normal
	 * mode's, as ARCADE 1CC; Harder / Extended have MARCH TO DEATH ROW */
	if (game != ACH_IBARA || rd8(M->mode) == 0)
		hit(game == ACH_BLK ? ACH_BLK_CLEAR : game == ACH_ARRANGE ? ACH_ARR_CLEAR : ACH_ARCADE_CLEAR, "THE ENDING");
	if (sid == 13)
		hit(ACH_BOND_END, "BOND'S ENDING (1P ALONE)");
	else if (sid == 14)
		hit(ACH_DYNE_END, "DYNE'S ENDING (2P ALONE)");
	else
		hit(ACH_EDELWEISS, "THE CO-OP ENDING");
	if (game == ACH_IBARA && (rd8(M->mode) == 1 || rd8(M->mode) == 2) &&
	    (sid == 15 ? one_credit(0) && one_credit(1) : one_credit(sid == 14)))
		hit(ACH_DEATH_ROW, "HARDER / EXTENDED CLEARED ON ONE CREDIT");
	/* test 107 (user): 1CC, any game and mode; co-op as MARCH TO DEATH ROW: both sides on one credit. Test 108
	 * (user): renamed ARCADE 1CC (ibara only), BLACK LABEL 1CC and ARRANGE 1CC added, one per game. Test 109 (user:
	 * a Harder 1CC gave ARCADE 1CC, "which isn't supposed to"): ARCADE 1CC is the normal mode's, Harder / Extended
	 * have MARCH TO DEATH ROW */
	if ((game != ACH_IBARA || rd8(M->mode) == 0) && (sid == 15 ? one_credit(0) && one_credit(1) : one_credit(sid == 14)))
		hit(game == ACH_BLK ? ACH_BLK_1CC : game == ACH_ARRANGE ? ACH_ARR_1CC : ACH_ARCADE_1CC,
		    "CLEARED ON ONE CREDIT");
}

/* ---- work/g105/state 1.: the name entry. On the vblank a side's cursor reaches 3 (its entry has a rank, s8 +1A >= 0)
 * the game has rewritten an NG word to lowercase "cav" (the default is uppercase CAV). The last vblank's letters are
 * what the player typed. User 2026-11-01: vulgar words like SEX, ASS, KKK; the table's "AAA" (mashing A) and "A  "
 * (the untouched entry) are left out, so it takes a real word */
static void entry_rule(void)
{
	const unsigned t = M->entry_t ? rd8(M->entry_t) : M->entry_tf;

	if (t > 3)
		return;
	for (int p = 0; p < 2; p++) {
		struct side *q = &sd[p];
		const uint32_t e = M->entry + t * 0x16Cu + (uint32_t)(10 + p) * 0x1Cu;
		const unsigned cur = rd8(e + 0x1B);
		const uint8_t now[3] = {(uint8_t)rd8(e + 0x0B), (uint8_t)rd8(e + 0x0F), (uint8_t)rd8(e + 0x13)};
		if (q->cursor[t] < 3 && cur == 3 && (int8_t)rd8(e + 0x1A) >= 0 && !memcmp(now, "cav", 3) &&
		    memcmp(q->letters[t], "cav", 3) != 0) {
			uint8_t up[3];
			for (int k = 0; k < 3; k++)
				up[k] = q->letters[t][k] >= 'a' && q->letters[t][k] <= 'z' ? (uint8_t)(q->letters[t][k] - 32) :
				                                                             q->letters[t][k];
			if (memcmp(up, "AAA", 3) != 0 && memcmp(up, "A  ", 3) != 0)
				hit(ACH_CENSORED, "INITIALS CENSORED TO cav");
		}
		q->cursor[t] = cur;
		memcpy(q->letters[t], now, 3);
	}
}

/* ---- work/g105/state 3.: x300 = roses worth 300 (rank exactly 0): a "bed" = 5 of them within 32 vblanks. Kuro BL: a
 * score popup newly live with 300; ARRANGE: an item slot newly a rose with ARRANGE_ROSE_VAL 300. ibara has none */
static void x300_rule(void)
{
	unsigned fresh = 0, sum = 0;

	if (game == ACH_BLK) {
		for (uint32_t k = 0; k < 256; k++) {
			const uint32_t a = M->popups + k * 0x1Cu;
			const uint8_t live = rd32(a) != 0 && rd32(a + 0x14) == 300;
			fresh += live && !live_last[k];
			live_last[k] = live;
		}
	} else if (game == ACH_ARRANGE) {
		for (uint32_t k = 0; k < 0x140; k++) {
			const uint32_t a = M->items + k * 0x54u;
			const uint8_t rose = rd32(a) != 0 && rd32(a + 4) == 7;
			fresh += rose && !rose_last[k] && rd32(ARRANGE_ROSE_VAL + k * 4u) == 300;
			rose_last[k] = rose;
		}
	} else {
		return;
	}
	x300_hist[x300_n++ % 32] = fresh;
	for (int k = 0; k < 32; k++)
		sum += x300_hist[k];
	if (sum >= 5)
		hit(ACH_X300, "5 ROSES WORTH 300 WITHIN 32 VBLANKS");
}

/* ---- work/g106/bomba: BOMBA = a full bomb (kind 5) the game dropped. The death drops (ibara f_0C0649F0 = 0C06CC20
 * free items, kind 5 only on the last life, its count from the credits byte: the "continue's" bombs; Kuro BL the
 * same; ARRANGE arr_death_drops) are born the vblank the side turns A0, so a full bomb born while a side is not
 * alive or within BOMB_GAP of its respawn / continue is the death's. A pickup (the counter changed; the record turns
 * kind 8 / 11+ in place) counts when no death bomb went this vblank and a clean one did, or none was out at all (a
 * carrier's bomb, slots 0x100+, can be born and taken between two vblanks) outside a death's window */
static void bomb_rule(int counted)
{
	int gone_clean = 0, gone_death = 0;

	for (int p = 0; p < 2; p++) {
		const unsigned st = rd32(M->player + (uint32_t)p * M->p2) >> 24;
		if ((st != 0xDC && st != 0) || (st == 0xDC && bomb_st[p] != 0xDC)) /* hit, waiting; a respawn, continue, join */
			bomb_gap = 0;
		bomb_st[p] = (uint8_t)st;
	}
	for (uint32_t k = 0; k < ITEMS; k++) {
		const uint32_t a = M->items + k * M->item_size;
		const int bomb = rd32(a) != 0 && rd32(a + 4) == KIND_BOMB;
		if (bomb && !bomb_slot[k])
			bomb_slot[k] = bomb_gap < BOMB_GAP ? 2 : 1;
		else if (!bomb && bomb_slot[k]) {
			gone_death |= bomb_slot[k] == 2;
			gone_clean |= bomb_slot[k] == 1;
			bomb_slot[k] = 0;
		}
	}
	if (counted && !gone_death && (gone_clean || bomb_gap >= BOMB_GAP))
		hit(ACH_BOMBA, "A FULL BOMB PICKED UP");
	if (bomb_gap < BOMB_GAP)
		bomb_gap++;
}

static void side_rules(int p)
{
	const uint32_t r = M->player + (uint32_t)p * M->p2;
	const uint32_t score = rd32(M->score + (uint32_t)p * M->p2);
	const struct side *q = &sd[p];

	if (!q->in)
		return;
	if (score >= M->extend_at)
		hit(ACH_EXTEND, "EXTEND: THE FIRST EXTEND'S SCORE");
	if (rd8(r + M->lives) >= 5) /* work/card/blk: ships in reserve, at most 5 */
		hit(ACH_HOARDER, "LIVES 5");
	if (rd8(r + M->bombs) == 4 && rd8(r + M->frags) == 40) /* work/g105/state 2.: the handlers' caps, all three */
		hit(ACH_MILLIONAIRE, "4 BOMBS AND 40 FRAGMENTS");
	if (game != ACH_BLK && rd8(r + M->shot) == 6) /* work/g61/re A3: the 6th small P in a row sets +254 to 6 (ARRANGE
	                                             * runs the same handler; Kuro BL's normal top is 6) */
		hit(ACH_SPECIAL_POWER, "SHOT LEVEL 6");
	if (game == ACH_IBARA) {
		if (score >= 10000000u && one_credit(p))
			hit(ACH_LETTER_SCORE, "10,000,000 ON ONE CREDIT");
		/* work/g61/re A2: a formation writes all three codes: SEARCH 1 1 1, WIDE 2 2 0, ROLLING 3 4 0, BACK 5 5 5 */
		{
			uint8_t f[3];
			for (int k = 0; k < 3; k++)
				f[k] = (uint8_t)rd8(r + M->form + (uint32_t)k);
			if (memcmp(f, form_last[p], 3) != 0 &&
			    ((f[0] == 1 && f[1] == 1 && f[2] == 1) || (f[0] == 2 && f[1] == 2 && f[2] == 0) ||
			     (f[0] == 3 && f[1] == 4 && f[2] == 0) || (f[0] == 5 && f[1] == 5 && f[2] == 5)))
				hit(ACH_FORMATION, "A SPECIAL FORMATION'S CODES");
			memcpy(form_last[p], f, 3);
		}
	}
	if (M->xtc && (int32_t)rd32(r + 0x280u) >> 2 >= 9999 && one_credit(p)) /* gadgets.c XTC_RAW */
		hit(ACH_XTC, "XTC 9999 ON ONE CREDIT");
	if (game == ACH_ARRANGE && rd8(ARRANGE_NOWNED + (uint32_t)p) == 7) /* cleared at every respawn (4.) */
		hit(ACH_FULL_ARSENAL, "ALL SEVEN WEAPONS STORED IN ONE LIFE");
	if (hadou_on_boss(p))
		hit(ACH_HADOU, "THE HADOU ON A BOSS'S MAIN PART");
}

int ach_frame(const struct ach_input *in, int *out, int max)
{
	int run, n = 0;

	note = NULL;
	memset(found, 0, sizeof(found));
	/* the ending and the name entry come at a run's end, out of its frames: the run's eligibility, a run seen */
	ok = in->eligible && run_any;
	ending_rule();
	entry_rule();
	{
		const unsigned g = rd8(M->game_on);
		const int demo = rd8(M->consec) == 1;
		run = g != 0 && g < 3 && (!M->run_stage || rd8(M->stage) != 0) && !demo;
	}
	if (!run) {
		prev_ok = 0;
		if (run_seen && ++out_n >= RUN_GAP)
			run_ok = 0; /* the run is over: nothing until the next credit's ach_run_start */
		goto tell;
	}
	if (auto_runs && !run_ok)
		ach_run_start();
	out_n = 0;
	run_seen = 1;
	run_any = 1;
	for (int p = 0; p < 2; p++) {
		struct side *q = &sd[p];
		const uint32_t r = M->player + (uint32_t)p * M->p2;
		const uint32_t score = rd32(M->score + (uint32_t)p * M->p2);
		if ((rd32(r) & 0xCC000000u) == 0xCC000000u)
			q->in = 1;
		if (q->in && score < q->score_last)
			q->continued = 1;
		q->score_last = score;
	}
	ok = in->eligible && run_ok;
	for (int p = 0; p < 2; p++)
		side_rules(p);
	boss_rule();
	loves_rule();
	x300_rule();
	{
		const uint32_t lg = rd32(M->logic);
		if (prev_ok && lg == logic_prev + 1u) { /* one game frame ran since the copy */
			kamikaze_rule();
			crawler_rule();
		}
		memcpy(parts_prev, RAMP(M->enemy), sizeof(parts_prev));
		logic_prev = lg;
		prev_ok = 1;
	}
	/* the medal: a medal pickup counted while the next medal's step was 10000's (the counter row is both sides') */
	{
		const unsigned c = rd8(pickup(KIND_MEDAL)), u = rd8(pickup(KIND_1UP)), b = rd8(pickup(KIND_BOMB));
		if (c != sd[0].medal_count && c != 0 && medal_step_last == MEDAL_10000)
			hit(ACH_GOLD_MEDAL, "A MEDAL PICKED UP AT 10000");
		if (u != sd[0].up_count && u != 0)
			hit(ACH_1UP, "THE 1UP PICKED UP");
		bomb_rule(b != sd[0].bomb_count && b != 0); /* work/g61/re A2: kinds 0-5 set their own counter to old + 1 */
		sd[0].bomb_count = b;
		sd[0].medal_count = c;
		sd[0].up_count = u;
		medal_step_last = rd8(M->medal);
	}
	if (M->stock_n) { /* Kuro BL (4.): one stock for both sides, emptied at a respawn unless the other side plays on; a
	                   * side alive since a respawn with it empty has collected all seven in that life */
		const uint32_t cnt = rd32(M->stock_n);
		for (int p = 0; p < 2; p++) {
			const unsigned st = rd32(M->player + (uint32_t)p * M->p2) >> 24;
			if (st == 0xDC && sd[p].state != 0xDC)
				sd[p].clean = cnt == 0;
			sd[p].state = st;
			if (cnt == 7 && st == 0xDC && sd[p].clean)
				hit(ACH_FULL_ARSENAL, "ALL SEVEN WEAPONS COLLECTED IN ONE LIFE");
		}
	}

tell:
	for (int id = 1; id <= ACH_COUNT && n < max; id++)
		if (found[id] && !(earned >> (id - 1) & 1u)) {
			earned |= 1ull << (id - 1);
			out[n++] = id;
		}
	return n;
}

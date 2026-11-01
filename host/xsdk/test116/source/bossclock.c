/* bossclock.c: test 62 (user 2026-10-24: "some boss timers count upwards, instead of backwards"), the time until a
 * boss withdraws by timeout, for the GADGETS card's BOSS box, from the game's own rules (work/g62/<boss>/REPORT.md:
 * each boss's code read and its countdown checked frame by frame on the PC against a run where the player never
 * shoots, so every boss leaves by timeout, and against the user's test 61 run).
 *
 * The count is in game frames (logic frames: slowdown stretches it as it does the game). Where the game's end is
 * fixed it reaches 0 on the frame the boss starts to leave; where it depends on random patterns (the game checks its
 * limit only when an attack ends) it counts to the earliest frame the boss can leave and stays at 0 until it does
 * (never upward). Damage that ends a phase early drops it. Bosses are told apart by their part's type (+04, the
 * index into the game's table of enemy functions), subtype (+08) and score value (+40), not by the stage byte (the
 * second loop runs the same bosses with stage bytes 8-13).
 *
 * Part record (0xB4 bytes): +00 flags (bit 31 alive, 0x4000 a child part), +24 / +28 x / y (16.16), +3C u16 hit
 * points, +50 / +8C counters, +99 a small counter, +9F phase, +A0 state within the phase. Called on the game thread
 * between its frames (gadgets_frame), so the records hold still.
 *
 * Kuro BL runs ibara's boss code with ibara's constants (work/g62/blk: its decompiles compared constant by constant,
 * every rule checked again on its own runs), at its own addresses (struct bc_map). */
#include <stdint.h>

#include "bossclock.h"
#include "cv1k.h"

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

static int64_t ceil_div(int64_t n, int64_t d) /* d > 0 */
{
	return n >= 0 ? (n + d - 1) / d : -((-n) / d);
}

static int64_t floor_div(int64_t n, int64_t d) /* d > 0 */
{
	return n >= 0 ? n / d : -((-n + d - 1) / d);
}

static int64_t at_least0(int64_t v)
{
	return v < 0 ? 0 : v;
}

/* ---- each game's addresses -------------------------------------------------------------------------------------- */
struct bc_map {
	uint32_t enemy;              /* 100 parts of 0xB4 bytes */
	uint32_t sin;                /* 512 s32, 0x1000 = 1.0 (ibara 0C058030 / 0C058060) */
	uint32_t tk_script0, tk_script1; /* stage 2's tank's movement script (its end: op 0) */
	uint32_t s3_moves, s4m_moves; /* the stage 3 boss's / stage 4 midboss's move count in a pattern (u8) */
	uint32_t s4_34, s4_12;       /* the stage 4 boss's HP thresholds, 3/4 and 1/2 (s16) */
	uint32_t s5_g, s5_k;         /* the stage 5 boss's counters, form 1 and form 2 (s32) */
	uint32_t layer;              /* layer 0's position (s32, 16.16); layer k at + k * 0x4C */
	uint32_t rank;               /* u32, the high half used */
};

static const struct bc_map bc_ib = {
	.enemy = 0x0C26CD40u, .sin = 0x0C0B1F40u, .tk_script0 = 0x0C1F0306u, .tk_script1 = 0x0C1F037Au,
	.s3_moves = 0x0C1F6158u, .s4m_moves = 0x0C1F6134u, .s4_34 = 0x0C1F6146u, .s4_12 = 0x0C1F6148u,
	.s5_g = 0x0C1F616Cu, .s5_k = 0x0C1F6170u, .layer = 0x0C26CAE8u, .rank = 0x0C27DFF8u,
};

static const struct bc_map bc_blk = {
	.enemy = 0x0C286578u, .sin = 0x0C0C4468u, .tk_script0 = 0x0C201652u, .tk_script1 = 0x0C2016C6u,
	.s3_moves = 0x0C207554u, .s4m_moves = 0x0C207530u, .s4_34 = 0x0C207542u, .s4_12 = 0x0C207544u,
	.s5_g = 0x0C207568u, .s5_k = 0x0C20756Cu, .layer = 0x0C286320u, .rank = 0x0C297A3Cu,
};

static const struct bc_map *B = &bc_ib;

#define IB_PARTS 192u /* test 110: the whole table (work/g110/gadgets: was 100) */
#define IB_SIZE 0xB4u

/* stage 1 boss, type 05 sub 00 (0C088C40): phases 0-3 = the entry (0C088F00: wait for the scroll to bring x to 64;
 * 0C088F30: speed +2C += 0x400 to 0x10000; 0C088F50: until x > 224; 0C088F70: +2C -= 0x400 to 0 while +A9 counts
 * to 20 on every 8th frame of +99; each frame moves x += +2C first), phase 4 counts +8C and leaves on the frame it
 * reaches 9000 (0C089018), phase 5 = the withdrawal. Phase 0 waits at a rate the record does not hold: a pause */
static int64_t s1_entry(int ph, int64_t x, int64_t vx, unsigned a9, unsigned c99)
{
	int64_t n;
	for (n = 1; n < 5000; n++) {
		x += vx;
		if (ph == 1) {
			vx += 0x400;
			if (vx == 0x10000)
				ph = 2;
		} else if (ph == 2) {
			if (x > 0xE00000)
				ph = 3;
		} else {
			const unsigned b = c99;
			if (vx != 0)
				vx -= 0x400;
			c99 = (c99 + 1) & 0xFF;
			if ((b & 7) == 0 && a9 < 20)
				a9++;
			if (vx == 0 && a9 == 20)
				return n;
		}
	}
	return -1;
}

static int64_t ib_stage1(uint32_t a)
{
	const unsigned ph = rd8(a + 0x9F);
	int64_t e;
	if (ph >= 5)
		return 0;
	if (ph == 4)
		return at_least0(9000 - (int64_t)rd32(a + 0x8C));
	if (ph == 0) {
		e = s1_entry(1, 0x400000, 0, rd8(a + 0xA9), rd8(a + 0x99));
		return e < 0 ? -1 : 1 + e + 9000;
	}
	e = s1_entry((int)ph, (int32_t)rd32(a + 0x24), (int32_t)rd32(a + 0x2C), rd8(a + 0xA9), rd8(a + 0x99));
	return e < 0 ? -1 : e + 9000;
}

/* stage 2 boss, type 2D: the whole boss leaves when its tank (sub 00, worth 100000) is removed, x < -0x800000 at the
 * start of its frame (0C08EF38): its movement script (0C1F0306, run by 0C0A1700 + 0C0A1590, one op a frame) patrols
 * a loop 8 times, drives up to x 256 and stops; the ground scroll (0x8000 a frame) carries it off. Its wheels
 * destroyed ((+A7 & 0x26) and (+A7 & 0x62), 0C08EF74) stop it at once. Simulated exactly (0 error on every frame of
 * both runs); no other part's counter decides it */

struct tank {
	int32_t x, y, vx, vy, v, acc, vt;
	int32_t ang, rate, angt; /* s16 in the record */
	uint32_t ptr, ret[4];
	unsigned wait, loop, lidx, a7;
};

static int32_t w32(int64_t v)
{
	return (int32_t)(uint32_t)(uint64_t)v;
}

static int32_t w16(int64_t v)
{
	return (int16_t)(uint16_t)(uint64_t)v;
}

static void tank_read(struct tank *t, const uint8_t *r)
{
#define G32(o) ((int32_t)((uint32_t)r[o] << 24 | (uint32_t)r[(o) + 1] << 16 | (uint32_t)r[(o) + 2] << 8 | r[(o) + 3]))
#define G16(o) ((int16_t)((unsigned)r[o] << 8 | r[(o) + 1]))
	int i;
	t->x = G32(0x24);
	t->y = G32(0x28);
	t->vx = G32(0x2C);
	t->vy = G32(0x30);
	t->v = G32(0x8C);
	t->acc = G32(0x90);
	t->vt = G32(0x94);
	t->ang = G16(0x86);
	t->rate = G16(0x88);
	t->angt = G16(0x8A);
	t->ptr = (uint32_t)G32(0x4C);
	t->wait = (uint16_t)G16(0x54);
	t->loop = (uint16_t)G16(0x56);
	t->lidx = r[0x58];
	for (i = 0; i < 4; i++)
		t->ret[i] = (uint32_t)G32(0x5C + 4 * i);
	t->a7 = r[0xA7];
#undef G32
#undef G16
}

static int tank_same(const struct tank *a, const struct tank *b)
{
	return a->x == b->x && a->y == b->y && a->vx == b->vx && a->vy == b->vy && a->v == b->v && a->acc == b->acc &&
	       a->vt == b->vt && a->ang == b->ang && a->rate == b->rate && a->angt == b->angt && a->ptr == b->ptr &&
	       a->wait == b->wait && a->loop == b->loop && a->lidx == b->lidx && a->a7 == b->a7;
}

static int32_t tank_trig(int idx, int32_t m) /* SIN[idx & 0x1FF] * (m >> 4) >> 8, the product wrapped to 32 bits */
{
	const int32_t s = (int32_t)rd32(B->sin + 4u * (uint32_t)(idx & 0x1FF));
	return w32((int64_t)s * (int64_t)(m >> 4)) >> 8;
}

/* one script op (0C0A1700, op table 0C0B2BC0); 0 = an op it does not know */
static int tank_script(struct tank *t)
{
	uint32_t p;
	int op, ok;
	if (t->wait) {
		t->wait--;
		return 1;
	}
	op = (int16_t)rd16(t->ptr);
	if (op == 0)
		return 1;
	p = t->ptr + 2;
	switch (op) {
	case 3: { /* 0C0A6F50: until |arg - int(x)| <= 2 * |int(vx + 0x8000)| */
		const int64_t arg = (int16_t)rd16(p), d = arg - (t->x >> 16);
		const int64_t s = w16(w32((int64_t)t->vx + 0x8000) >> 16);
		p += 2;
		ok = (d < 0 ? -d : d) <= 2 * (s < 0 ? -s : s);
		break;
	}
	case 4: { /* 0C0A70C0: until |y - arg| < 2.0 + |vy| */
		const int64_t arg = (int16_t)rd16(p), d = (int64_t)t->y - arg * 0x10000;
		p += 2;
		ok = (d < 0 ? -d : d) < 0x20000 + ((int64_t)t->vy < 0 ? -(int64_t)t->vy : t->vy);
		break;
	}
	case 5: /* 0C0A7220: speed target and step */
		t->vt = (int16_t)rd16(p) * 256;
		t->acc = (int16_t)rd16(p + 2) * 256;
		p += 4;
		ok = 1;
		break;
	case 6: /* 0C0A72C0: heading target and step */
		t->angt = (int16_t)rd16(p);
		t->rate = (int16_t)rd16(p + 2);
		p += 4;
		ok = 1;
		break;
	case 0xE: /* 0C0A7760: loop start */
		if (t->lidx > 3)
			return 0;
		t->loop = rd16(p);
		p += 2;
		t->ret[t->lidx++] = p;
		ok = 1;
		break;
	case 0xF: /* 0C0A77B0: loop end */
		t->loop = (t->loop - 1) & 0xFFFF;
		if (t->loop) {
			if (!t->lidx)
				return 0;
			t->ptr = t->ret[t->lidx - 1];
			return 1;
		}
		if (!t->lidx)
			return 0;
		t->lidx--;
		ok = 1;
		break;
	default:
		return 0;
	}
	if (ok)
		t->ptr = p;
	return 1;
}

static void tank_physics(struct tank *t) /* 0C0A1590 */
{
	int a;
	if (t->v != t->vt) {
		const int32_t d = w32((int64_t)t->v - t->vt);
		if ((d < 0 ? -(int64_t)d : d) < t->acc)
			t->v = t->vt;
		else
			t->v = w32((int64_t)t->v + ((uint32_t)d < 0x80000001u ? -(int64_t)t->acc : t->acc));
	}
	if (t->ang != t->angt) {
		const int d = (t->ang - t->angt) & 0x7FC0;
		if (d < t->rate)
			t->ang = t->angt;
		else
			t->ang = w16(t->ang + (d < 0x4001 ? -t->rate : t->rate));
	}
	a = t->ang >> 6;
	t->vx = tank_trig(w16(a) + 0x80, t->v);
	t->vy = tank_trig(a, t->v);
	t->x = w32((int64_t)t->x + t->vx);
	t->y = w32((int64_t)t->y + t->vy);
}

/* one logic frame: 1 = the tank is removed in it, 0 = not, -1 = a script the model does not know */
static int tank_step(struct tank *t)
{
	t->x = w32((int64_t)t->x - 0x8000); /* the ground scroll, before the type functions run */
	if (t->x < -0x800000)
		return 1;
	if ((t->a7 & 0x26) && (t->a7 & 0x62)) {
		t->v = 0; /* 0C08EF8C */
		return 0;
	}
	if (!tank_script(t))
		return -1;
	tank_physics(t);
	return 0;
}

/* the count comes from simulating the tank to its removal: 16285 frames from its spawn, ~0.1 ms on a PC, so it is
 * spread over the game's frames, TK_BUDGET steps each (-1 until it is done, 4 frames at the spawn), the tank's frames
 * meanwhile checked one by one against the model; after that each frame is checked the same way and the count drops by
 * one, and a frame the model did not predict (a wheel destroyed) starts the simulation again from there, the old count
 * going on meanwhile */
#define TK_BUDGET 4096

static struct {
	struct tank last;         /* the tank as last seen */
	int seen;
	int64_t left;             /* its count then (-1 = not known) */
	struct tank run;          /* the simulation in progress */
	int running;
	int64_t run_n, run_lag;   /* its frames so far; the tank's frames since it started */
	int64_t hold;             /* the count shown while it runs (the one before, going on; -1 = none) */
} tk;

void bossclock_reset(void)
{
	tk.seen = tk.running = 0;
	tk.left = tk.hold = -1;
}

static int64_t ib_tank(uint32_t a)
{
	const uint8_t *r = RAMP(a);
	struct tank t;
	int64_t i;
	tank_read(&t, r);
	if (!((unsigned)r[0x3C] << 8 | r[0x3D]) || t.ptr < B->tk_script0 || t.ptr > B->tk_script1) {
		tk.seen = tk.running = 0; /* HP 0: its death script runs */
		return tk.left = tk.hold = -1;
	}
	if (!tk.seen || !tank_same(&t, &tk.last)) { /* a logic frame ran (or another tank) */
		struct tank s = tk.last;
		if (tk.seen && tank_step(&s) == 0 && tank_same(&s, &t)) {
			if (tk.left > 0)
				tk.left--;
			else if (tk.running) {
				tk.run_lag++;
				if (tk.hold > 0)
					tk.hold--;
			}
		} else {
			/* a wheel destroyed (+A7 gains bits): the old count goes on; else (a new tank: the one before may have
			 * died unseen, the card not asking while no tank part was shown) none until the simulation is done */
			if (!tk.running)
				tk.hold = tk.seen && t.a7 != tk.last.a7 && (t.a7 & tk.last.a7) == tk.last.a7 && tk.left > 0 ?
				          tk.left - 1 : -1;
			tk.run = t;
			tk.running = 1;
			tk.run_n = tk.run_lag = 0;
			tk.left = -1;
		}
		tk.last = t;
		tk.seen = 1;
	}
	for (i = 0; tk.running && i < TK_BUDGET; i++) {
		const int st = tank_step(&tk.run);
		if (st || tk.run_n >= 60000) {
			tk.running = 0;
			tk.left = st > 0 && tk.run_n >= tk.run_lag ? tk.run_n - tk.run_lag : -1;
		} else {
			tk.run_n++;
		}
	}
	return tk.running ? tk.hold : tk.left;
}

/* stages 3 and 4 (work/g62/s34): the bosses run a pattern of moves to random targets and test their counter only
 * when it ends, then dash (states 10-15: to x 0x30, then back) before the withdrawal phase. The counter is counted
 * exactly; once past its limit the count stops while the pattern finishes (random) and goes on through the parts that
 * are fixed; the parts still ahead count at their shortest. 1-D moves: accelerate, test arrival (within 8 px) on the
 * position before this frame's move, x += +-speed */
static int arrived(int64_t x, int64_t tx)
{
	return (uint32_t)(x - tx + 0x7FFFF) <= 0xFFFFEu;
}

static int in_area(int64_t x)
{
	const int64_t d = x - 0xA00000;
	return (d < 0 ? -d : d) <= 0x1E00000;
}

static int dir_of(int angle) /* the x step's sign for the heading +86 */
{
	const int a = (angle + 0x80) & 0x1FF;
	return a == 0 || a == 0x100 ? 0 : a < 0x100 ? 1 : -1;
}

/* frames from the next frame to the frame that ends a two-leg dash (+9F the next phase); state = +A0 now (10-15):
 * 10 / 13 aim at the leg's target, 11 / 14 move (speed += acc while <= cap; out of the area or arrived: next state),
 * 12 / 15 brake (speed -= dec; at 0 the next leg, after 15 the phase change); have_angle: the record's +86 aims now */
static int64_t sim_dash(int64_t x, int64_t v, int state, int64_t leg0, int64_t leg1, int64_t acc, int64_t cap,
                        int64_t dec, int have_angle, int angle)
{
	int64_t n, tgt = state < 13 ? leg0 : leg1;
	int dirn = have_angle ? dir_of(angle) : tgt > x ? 1 : -1;
	for (n = 1; n <= 5000; n++) {
		tgt = state < 13 ? leg0 : leg1;
		if (state == 10 || state == 13) {
			dirn = tgt > x ? 1 : -1;
			state++;
			x += dirn * v;
		} else if (state == 11 || state == 14) {
			if (v <= cap)
				v += acc;
			if (!in_area(x)) {
				state++;
			} else {
				if (arrived(x, tgt))
					state++;
				dirn = tgt > x ? 1 : -1;
			}
			x += dirn * v;
		} else {
			v -= dec;
			x += dirn * v;
			if (v != 0)
				continue;
			if (state == 15)
				return n;
			state = 13;
		}
	}
	return -1;
}

/* frames to a pattern-end check that leaves once the counter c > limit: the counter part plus the shortest closing
 * stretch tmin, which pauses until the closing stretch is known (exact: frames to this pattern's check, -1 = not yet) */
static int64_t limit_part(int64_t c, int64_t limit, int64_t tmin, int64_t exact)
{
	const int64_t lim = at_least0(limit + 1 - c);
	if (exact >= 0 && c + exact > limit)
		return exact < lim + tmin ? exact : lim + tmin;
	return lim + tmin;
}

static int64_t min_known(int64_t a, int64_t b) /* b = -1: not known */
{
	return b >= 0 && b < a ? b : a;
}

/* the shortest closing stretch of a pattern (stage 3 boss, stage 4 midboss): a one-frame brake, the +98 wait (only
 * while +98 < 30: it is never reset), the frame that sees speed 0, the check frame */
static int64_t tail_min(uint32_t a)
{
	const int64_t w = 29 - (int64_t)rd8(a + 0x98);
	return 3 + (rd8(a + 0xA0) >= 4 && w > 0 ? w : 0);
}

/* frames to the check when the pattern is in its closing stretch (state 7 of the fifth move, the move count global
 * = 4), else -1 */
static int64_t pattern_tail(uint32_t a, uint32_t moves)
{
	const unsigned a0 = rd8(a + 0xA0);
	int64_t w;
	if (a0 == 8)
		return 1;
	if (a0 != 7 || rd8(moves) != 4)
		return -1;
	w = 29 - (int64_t)rd8(a + 0x98);
	return ceil_div((int32_t)rd32(a + 0x8C), 0x800) + 1 + (w > 0 ? w : 0) + 1;
}

/* the dash from the record (states 10-15) */
static int64_t dash_left(uint32_t a, int64_t leg1, int64_t acc, int64_t cap, int64_t dec)
{
	return sim_dash((int32_t)rd32(a + 0x24), (int32_t)rd32(a + 0x8C), (int)rd8(a + 0xA0), 0x300000, leg1, acc, cap, dec,
	                1, (int16_t)rd16(a + 0x86));
}

/* the shortest dash: from the boss parked after its pattern (x at least the pattern's lowest target - 8 px - the brake
 * drift) */
static int64_t dash_min(int64_t x, int64_t leg1)
{
	return sim_dash(x, 0, 10, 0x300000, leg1, 0x800, 0xFFFF, 0x800, 0, 0);
}

/* stage 3 boss, type 33 sub 00 (0C0930B0, +50 every frame): phase 0 the entry; phase 1 patterns, at the end of each
 * (state 8) +50 > 5400 -> the dash (to x 0x30, then 0x100), phase 2 with +50 = 0 (+A8 = its sub-2 part destroyed jumps
 * to phase 3 instead, +50 not reset); phase 2 240 - +98 frames; phase 3 waits for +A8 to clear; phase 4 patterns
 * checking +50 > 7200 after state 9 (+99 to 240), then the dash (0x30, 0xE0); phase 5 the withdrawal */
static int64_t ib_stage3(uint32_t a)
{
	static int64_t d1 = -1, d4 = -1;
	const unsigned ph = rd8(a + 0x9F), a0 = rd8(a + 0xA0);
	const int64_t c = (int32_t)rd32(a + 0x50);
	int64_t p4;
	if (d1 < 0) {
		d1 = dash_min(0xE00000 - 0x80000 - 0xF8000, 0x1000000); /* 455 */
		d4 = dash_min(0xE00000 - 0x80000 - 0xF8000, 0xE00000);  /* 423 */
	}
	p4 = 7201 + 240 + d4; /* from phase 2's start (+50 0): the limit, state 9, the dash */
	if (ph == 5)
		return 0;
	if (ph == 0) {
		const int64_t p1 = 5401 + 3 + d1 + p4;
		if (a0 == 0)
			return at_least0(ceil_div((int32_t)rd32(a + 0x24) - 0x11FFFFF, 0x20000)) + 32 + 1 + p1;
		if (a0 == 1)
			return floor_div((int32_t)rd32(a + 0x8C), 0x1000) + p1;
		return p1;
	}
	if (ph == 1 && !rd8(a + 0xA8)) {
		if (a0 >= 10)
			return min_known(d1, dash_left(a, 0x1000000, 0x800, 0xFFFF, 0x800)) + p4;
		return limit_part(c, 5400, tail_min(a), pattern_tail(a, B->s3_moves)) + d1 + p4;
	}
	if (ph <= 3)
		return at_least0(7201 - c) + 240 + d4;
	if (ph == 4) {
		if (a0 >= 10)
			return min_known(d4, dash_left(a, 0xE00000, 0x800, 0xFFFF, 0x800));
		return limit_part(c, 7200, 240, a0 == 9 ? 240 - (int64_t)rd8(a + 0x99) : -1) + d4;
	}
	return -1;
}

/* stage 4 midboss, type 29 sub 00 (0C0808B0): phase 0 the entry (rises to x 0xE0, brakes), phase 1 the stage 3 boss's
 * patterns (move count 0C1F6134) checking +50 > 3600 at their end, the dash (0x30, 0xE0), phase 2 the withdrawal; no
 * damage rule */
static int64_t ib_midboss4(uint32_t a)
{
	static int64_t d = -1;
	const unsigned ph = rd8(a + 0x9F), a0 = rd8(a + 0xA0);
	const int64_t c = (int32_t)rd32(a + 0x50);
	if (d < 0)
		d = dash_min(0xC00000 - 0x80000 - 0xF8000, 0xE00000); /* 391 */
	if (ph >= 2)
		return 0;
	if (ph == 0) {
		const int64_t p1 = 3601 + 3 + d;
		if (a0 == 0)
			return at_least0(ceil_div(0xE00001 - (int64_t)(int32_t)rd32(a + 0x24), 0x8000)) + 64 + 1 + p1;
		return floor_div((int32_t)rd32(a + 0x8C), 0x200) + p1;
	}
	if (a0 >= 10)
		return min_known(d, dash_left(a, 0xE00000, 0x800, 0xFFFF, 0x800));
	return limit_part(c, 3600, tail_min(a), pattern_tail(a, B->s4m_moves)) + d;
}

/* stage 4 boss, type 2A sub 00 (0C08B290, +50 every frame, 0 at each phase change): phase 0 brakes, then sets the
 * HP thresholds 3/4 (0C1F6146) and 1/2 (0C1F6148); phase 1 ends after an attack (its length is in another part: a
 * pause) on +50 > 3600 or HP below 3/4, then a dash (0x30, 0xE0); phase 2 likewise on +50 > 3600, HP below 1/2 or +A7
 * bit 3 (a pair of its parts destroyed), its dash aiming at the player (a pause); phase 3 checks +50 > 7200 after its
 * closing moves (states 10-18: x 0x40, the player's y, x 0xE0; only the x moves are counted); phase 4 the withdrawal */
static int64_t s4_step_x(int angle, int64_t v)
{
	return ((int64_t)(int32_t)rd32(B->sin + 4u * (uint32_t)((angle + 0x80) & 0x1FF)) * (v >> 4)) >> 8;
}

static int64_t s4_close_sim(int64_t x, int64_t v, int state, int dirn, int have_angle, int angle)
{
	int64_t n = 0, tx = state <= 12 ? 0x400000 : 0xE00000;
	int past13 = 0;
	while (n < 5000) {
		if (state == 13 && !past13) {
			past13 = 1;
			state = 16; /* 13-15 (the y move to the player) not simulated: 0 frames here */
			v = 0;
			have_angle = 0;
		}
		n++;
		if (state == 10 || state == 16) {
			tx = state == 10 ? 0x400000 : 0xE00000;
			dirn = tx > x ? 1 : -1;
			state++;
			x += dirn * v;
		} else if (state == 11 || state == 17) {
			if (v <= 0x1FFFF)
				v += 0x1000;
			if (!in_area(x)) {
				state++;
			} else {
				if (arrived(x, tx))
					state++;
				dirn = tx > x ? 1 : -1;
			}
			x += dirn * v;
		} else {
			v -= 0x1000;
			if (v > 0) {
				x += have_angle ? s4_step_x(angle, v) : dirn * v;
				continue;
			}
			v = 0;
			if (state == 18)
				return n;
			state = 13;
		}
	}
	return -1;
}

static int64_t s4_close(int64_t x, int64_t v, int state, int have_angle, int angle)
{
	const int dirn = have_angle ? dir_of(angle) : -1;
	if (state >= 13 && state <= 15)
		return s4_close_sim(x, 0, 16, 1, 0, 0);
	return s4_close_sim(x, v, state, dirn, have_angle && (state == 12 || state == 18), angle);
}

static int64_t ib_stage4(uint32_t a)
{
	static int64_t d1 = -1, close = -1;
	const unsigned ph = rd8(a + 0x9F), a0 = rd8(a + 0xA0);
	const int64_t hp = (int16_t)rd16(a + 0x3C);
	int64_t c = (int32_t)rd32(a + 0x50), p3, n0 = 0;
	if (d1 < 0) {
		d1 = dash_min(0xD00000 - 0x80000 - 0xF8000, 0xE00000);  /* 407 */
		close = s4_close(0xD00000 - 0x80000 - 0x1F0000, 0, 10, 0, 0); /* 239 */
	}
	if (ph >= 4)
		return 0;
	p3 = 7201 + close; /* from phase 3's start: the limit, then the closing moves */
	if (ph == 3)
		return limit_part(c, 7200, close, a0 >= 10 ? s4_close((int32_t)rd32(a + 0x24), (int32_t)rd32(a + 0x8C), (int)a0,
		                                                     1, (int16_t)rd16(a + 0x86)) : -1);
	if (ph == 2) {
		if (a0 >= 10 || hp < (int16_t)rd16(B->s4_12) || (rd8(a + 0xA7) & 8))
			return p3;
		return (c <= 3600 ? at_least0(3601 - c) : 0) + p3;
	}
	if (ph == 0) { /* the brake, then phase 1 from +50 0 */
		n0 = floor_div((int32_t)rd32(a + 0x8C), 0x800);
		c = 0;
	} else if (ph != 1) {
		return -1;
	}
	if (a0 >= 10)
		return n0 + min_known(d1, dash_left(a, 0xE00000, 0x800, 0xFFFF, 0x800)) + 3601 + p3;
	if (hp < (int16_t)rd16(B->s4_34))
		return n0 + d1 + 3601 + p3;
	return n0 + (c <= 3600 ? at_least0(3601 - c) : 0) + d1 + 3601 + p3;
}

/* stage 3 midboss, type 30 sub 00 (its body: flags bit 30 clear; 0C082C40): it leaves when, at a phase-0 check, its
 * world position x + the stage scroll (layer +B0: 0C26CAE0 + +B0 * 0x4C + 8) reaches 11712 px. Each move (phase 2,
 * 128 frames) aims at the scroll + 224..255 px, clamped to 11712; while it lives the scroll follows a fixed script, so
 * the picks to come are walked on it (each random pick at its latest). Cycle: phase 1 = its child part's animation
 * (+0C 1-4 four frames each, a rank timer, 6-9), phase 2 128, phase 3 23, phase 0 until x <= 0x7FFFFF or its timer */
#define M3_STEPS 5247
#define M3_LEAVE 0x2DC00000
static int64_t m3_pos[M3_STEPS];

static void m3_script(void)
{
	int64_t p = (int64_t)8833 << 16, v;
	int i, k = 0;
	m3_pos[k++] = p;
#define M3_ADD(sp)                                                                                                  \
	do {                                                                                                         \
		p += (sp);                                                                                           \
		m3_pos[k++] = p;                                                                                     \
	} while (0)
	M3_ADD(0x30000);
	for (i = 0; i < 191; i++)
		M3_ADD(0x2FC00 - 0x400 * i);
	for (i = 0; i < 123; i++)
		M3_ADD(0);
	for (i = 0; i < 128; i++)
		M3_ADD(0x200 * (i + 1));
	for (i = 0; i < 1675; i++)
		M3_ADD(0x10000);
	for (i = 0; i < 128; i++)
		M3_ADD(0x10000 + 0x400 * (i + 1));
	for (v = 0; k < M3_STEPS; v++)
		M3_ADD(0x30000);
#undef M3_ADD
}

static int m3_index(int64_t s) /* the first script frame with scroll s, or -1 */
{
	int lo = 0, hi = M3_STEPS;
	while (lo < hi) {
		const int mid = (lo + hi) / 2;
		if (m3_pos[mid] < s)
			lo = mid + 1;
		else
			hi = mid;
	}
	return lo < M3_STEPS && m3_pos[lo] == s ? lo : -1;
}

static int64_t m3_left3(uint32_t ch) /* phase 3 frames to phase 0 (the child: +0C 9..5 one a frame, 4..1 four) */
{
	int64_t c0;
	if (!ch)
		return 23;
	c0 = (int32_t)rd32(ch + 0x0C);
	if (c0 >= 5)
		return c0 + 14;
	if (c0 >= 1)
		return 4 * c0 + 2 - rd8(ch + 0x99);
	return rd8(ch + 0x9F) == 1 ? 2 : 1;
}

static int64_t m3_left1(uint32_t ch, int64_t rk, int64_t p1_len) /* phase 1 frames to the pick */
{
	const int64_t iv = 10 + ((10 * rk) >> 8);
	int64_t c0, w;
	if (!ch)
		return p1_len;
	c0 = (int32_t)rd32(ch + 0x0C);
	w = iv - rd8(ch + 0x9B);
	if (w < 1)
		w = 1;
	if (c0 == 0)
		return 16 + w + 5;
	if (c0 <= 4)
		return (4 - c0) * 4 + (4 - rd8(ch + 0x99)) + w + 5;
	if (c0 == 5)
		return w + 5;
	return 10 - c0 + 1;
}

static int64_t ib_midboss3(uint32_t a, uint32_t ch)
{
	const unsigned ph = rd8(a + 0x9F);
	const int64_t rk = rd32(B->rank) >> 16, p1_len = 21 + 10 + ((10 * rk) >> 8), iv0 = 10 + ((0x50 * rk) >> 8);
	int64_t s, w, tp, b9;
	int t0;
	if (ph >= 4)
		return 0;
	if (!m3_pos[0])
		m3_script();
	s = (int32_t)rd32(B->layer + rd8(a + 0xB0) * 0x4Cu);
	t0 = m3_index(s);
	if (t0 < 0)
		return -1;
	if (t0 == 192) { /* the scroll stopped: the midboss's own cycle says where in the stop it is */
		const int64_t pick2 = 50 + 152 + p1_len;
		int64_t est = -1;
		if (ph == 2)
			est = pick2 + rd8(a + 0x99);
		else if (ph == 1)
			est = pick2 - m3_left1(ch, rk, p1_len);
		else if (ph == 0)
			est = pick2 - p1_len - 1;
		else if (ph == 3)
			est = pick2 - p1_len - 1 - m3_left3(ch);
		if (est >= 0)
			t0 = (int)(est < 192 ? 192 : est > 315 ? 315 : est);
	}
	w = (int32_t)rd32(a + 0x24) + s; /* its world position */
	b9 = rd8(a + 0x9B);
#define M3_AFTER0(t, wpos)                                                                                          \
	do { /* phase 0 from frame t: until x <= 0x7FFFFF or the timer (+9B to iv0), then phase 1 */                 \
		int64_t d_ = 1;                                                                                      \
		while (d_ < 400) {                                                                                   \
			if (++b9 >= iv0) {                                                                           \
				b9 = 0;                                                                              \
				break;                                                                               \
			}                                                                                            \
			if (t0 + (t) + d_ >= M3_STEPS)                                                               \
				return -1;                                                                           \
			if (m3_pos[t0 + (t) + d_] >= (wpos) - 0x7FFFFF)                                              \
				break;                                                                               \
			d_++;                                                                                        \
		}                                                                                                    \
		tp = (t) + d_ + p1_len;                                                                              \
	} while (0)
	if (ph == 2) {
		const int64_t k = rd8(a + 0x99), wend = w + (128 - k) * (int64_t)(int32_t)rd32(a + 0x2C);
		if (wend >= M3_LEAVE)
			return (128 - k) + 24;
		M3_AFTER0((128 - k) + 23, wend);
	} else if (ph == 3) {
		const int64_t l3 = m3_left3(ch);
		if (w >= M3_LEAVE)
			return l3 + 1;
		M3_AFTER0(l3, w);
	} else if (ph == 0) {
		if (w >= M3_LEAVE)
			return 1;
		M3_AFTER0(0, w);
		if (ch && rd32(ch + 0x0C) == 0) /* the next phase 1 runs the child's timer from its +9B now */
			tp += m3_left1(ch, rk, p1_len) - p1_len;
	} else {
		tp = m3_left1(ch, rk, p1_len);
	}
	while (tp < 6000) {
		int64_t sp;
		if (t0 + tp >= M3_STEPS)
			return -1;
		sp = m3_pos[t0 + tp];
		if (sp + (224 << 16) >= M3_LEAVE)
			return tp + 152;
		M3_AFTER0(tp + 128 + 23, sp + (255 << 16));
	}
#undef M3_AFTER0
	return -1;
}

static uint32_t m3_child(uint32_t body) /* the body's child (type 30 with flags bit 30): the next part, else any */
{
	uint32_t k;
	const uint32_t nx = body + IB_SIZE;
	if (nx < B->enemy + IB_PARTS * IB_SIZE && (rd32(nx) & 0xC0000000u) == 0xC0000000u && rd32(nx + 4) == 0x30)
		return nx;
	for (k = 0; k < IB_PARTS; k++) {
		const uint32_t c = B->enemy + k * IB_SIZE;
		if ((rd32(c) & 0xC0000000u) == 0xC0000000u && rd32(c + 4) == 0x30)
			return c;
	}
	return 0;
}

/* stage 5 boss, type 41: form 1 = sub 00 with the global counter 0C1F616C (s32; half HP 0C1F6168), form 2 = sub 06
 * with 0C1F6170. Form 1 (0C096790): phase 1 ends when the counter reaches 3600 or HP <= half (every frame); phase 2 =
 * a fixed 506-frame move, then phase 3 with the counter at 0: an 11-state cycle (even states 30 frames, odd 240 =
 * 1380), the counter checked > 7200 at the end of state 10 -> phase 4 releases form 2. Form 2 (0C096C90): phase 1 120
 * frames, phase 2 one frame (counter 0), phase 3 random patterns, the counter checked > 10800 only when one ends ->
 * phase 4 = the withdrawal. From the hull's phase 4: at least 10923 frames (work/g62/s5) */

static int64_t ib_stage5(uint32_t a, uint32_t sub)
{
	const int ph = (int)rd8(a + 0x9F), st = (int)rd8(a + 0xA0), c = (int)rd8(a + 0x99);
	const int64_t g = (int32_t)rd32(B->s5_g), k = (int32_t)rd32(B->s5_k);
	if (sub == 0) {
		if (ph == 0)
			return 23310;
		if (ph == 1)
			return 23309 - (g < 0 ? 0 : g > 3599 ? 3599 : g);
		if (ph == 2) {
			const int64_t e = k - g;
			return 19709 - (e < 0 ? 0 : e > 505 ? 505 : e);
		}
		if (ph == 3) {
			int64_t rem, end;
			int j;
			if (!rd16(a + 0x3C))
				return 10924;
			if (st > 10)
				return -1;
			rem = ((st & 1) ? 240 : 30) - c;
			for (j = st + 1; j <= 10; j++)
				rem += (j & 1) ? 240 : 30;
			for (end = g + rem; end <= 7200; end += 1380)
				;
			return end - g + 10923;
		}
		return ph == 4 && st == 0 ? 10923 : -1;
	}
	if (!rd16(a + 0x3C))
		return -1;
	if (ph == 1)
		return at_least0(10922 - c);
	if (ph == 2)
		return 10802;
	if (ph == 3)
		return at_least0(10801 - k);
	return ph >= 4 ? 0 : -1;
}

/* stage 6 midboss, type 45 sub 00 (0C0865A0): +50 counts every frame; it moves in legs to random targets and checks
 * +50 > 2100 only when a leg ends (0C0868B0) -> phase 2 = the withdrawal: counts to the earliest (+50 = 2101) */
static int64_t ib_midboss6(uint32_t a)
{
	return rd8(a + 0x9F) >= 2 ? 0 : at_least0(2101 - (int64_t)rd32(a + 0x50));
}

/* stage 6 boss, type 4A sub 00 (0C09A6D0): +50 counts every frame from its spawn; phase 0 walks in (x += 1.0 a frame
 * to 240), phase 1 a 766-frame cycle on +A0 (state 0 one frame, 1-3 255 frames each on +99) whose state 0 checks
 * +50 > 12600 -> phase 2 = the timeout (then the last boss comes out of it): 12626 from the spawn */
static int64_t ib_stage6(uint32_t a)
{
	const unsigned ph = rd8(a + 0x9F), a0 = rd8(a + 0xA0), c = rd8(a + 0x99);
	const int64_t v = rd32(a + 0x50);
	int64_t n, t;
	if (ph >= 2)
		return 0;
	if (ph == 1) {
		if (a0 == 0)
			n = 1;
		else if (a0 == 1)
			n = (255 - c) + 255 + 255 + 1;
		else if (a0 == 2)
			n = (255 - c) + 255 + 1;
		else if (a0 == 3)
			n = (255 - c) + 1;
		else
			return -1;
	} else {
		const int64_t x = (int32_t)rd32(a + 0x24);
		n = floor_div(0xF00000 - x, 0x10000) + (a0 == 0 ? 1 : 0) + 1;
	}
	t = v + n;
	return t > 12600 ? n : n + ceil_div(12601 - t, 766) * 766;
}

/* the last boss, type 4A sub 02 worth 300000 (0C099E80): phase 0 waits 120 frames on +99; phase 1 counts +50 in a
 * 303-frame cycle on +A0 (states 1 and 3 120 frames, 2 and 4 one, 5 60) whose state 0 checks +50 > 10800 -> phase 2
 * with +50 = 0: a 31-frame cycle checking +50 > 7200 (ends at 7224) -> phase 3 = the withdrawal. Damage does not
 * change its phases */
static int64_t first_over(int64_t t, int64_t limit, int64_t cycle)
{
	return t > limit ? 0 : ceil_div(limit + 1 - t, cycle) * cycle;
}

static int64_t ib_last(uint32_t a)
{
	const unsigned ph = rd8(a + 0x9F), a0 = rd8(a + 0xA0), c = rd8(a + 0x99);
	const int64_t v = rd32(a + 0x50), p2 = 1 + first_over(1, 7200, 31); /* 7224 */
	int64_t n;
	if (ph >= 3)
		return 0;
	if (ph == 2) {
		if (a0 == 0)
			n = 1;
		else if (a0 == 1)
			n = (30 - (int64_t)c) + 1;
		else
			return -1;
		return n + first_over(v + n, 7200, 31);
	}
	if (ph == 1) {
		switch (a0) {
		case 0: n = 1; break;
		case 1: n = (120 - (int64_t)c) + 1 + 120 + 1 + 60 + 1; break;
		case 2: n = 1 + 120 + 1 + 60 + 1; break;
		case 3: n = (120 - (int64_t)c) + 1 + 60 + 1; break;
		case 4: n = 1 + 60 + 1; break;
		case 5: n = (60 - (int64_t)c) + 1; break;
		default: return -1;
		}
	} else {
		n = (120 - (int64_t)c) + 1;
	}
	return n + first_over(v + n, 10800, 303) + p2;
}

/* the part's own clock, or -1 when it is not a clock part */
static int64_t clock_ib(uint32_t a)
{
	const uint32_t fl = rd32(a), ty = rd32(a + 4), sub = rd32(a + 8), val = rd32(a + 0x40);
	if (!(fl & 0x80000000u))
		return -1;
	switch (ty) {
	case 0x05:
		return sub == 0 && val == 100000 && rd16(a + 0x3C) ? ib_stage1(a) : -1;
	case 0x29:
		return sub == 0 && val == 50000 && rd16(a + 0x3C) ? ib_midboss4(a) : -1;
	case 0x2A:
		return sub == 0 && val == 100000 && rd16(a + 0x3C) ? ib_stage4(a) : -1;
	case 0x2D:
		return sub == 0 && val == 100000 ? ib_tank(a) : -1;
	case 0x30:
		return sub == 0 && val == 50000 && !(fl & 0x40000000u) && rd16(a + 0x3C) ? ib_midboss3(a, m3_child(a)) : -1;
	case 0x33:
		return sub == 0 && val == 100000 && rd16(a + 0x3C) ? ib_stage3(a) : -1;
	case 0x41:
		return (sub == 0 || sub == 6) && val == 100000 ? ib_stage5(a, sub) : -1;
	case 0x45:
		return sub == 0 && val == 50000 && rd16(a + 0x3C) ? ib_midboss6(a) : -1;
	case 0x4A:
		if (!rd16(a + 0x3C))
			return -1;
		if (sub == 0 && val == 100000)
			return ib_stage6(a);
		if (sub == 2 && val == 300000)
			return ib_last(a);
		return -1;
	default:
		return -1;
	}
}

int64_t bossclock(int game, uint32_t part)
{
	int64_t v;
	uint32_t ty, k;
	if (game != BC_IBARA && game != BC_BLK)
		return -1;
	B = game == BC_BLK ? &bc_blk : &bc_ib;
	v = clock_ib(part);
	if (v >= 0)
		return v;
	/* a part of a boss whose clock is another part (stage 2's helicopter and turret: the tank) */
	ty = rd32(part + 4);
	for (k = 0; k < IB_PARTS; k++) {
		const uint32_t a = B->enemy + k * IB_SIZE;
		if (a != part && rd32(a + 4) == ty && (v = clock_ib(a)) >= 0)
			return v;
	}
	return -1;
}

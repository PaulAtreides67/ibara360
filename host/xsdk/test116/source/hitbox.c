/* Test 98 (user idea 2026-10-28, approved for test 98): TRAINING's HITBOX ALL. Every collision box the game's own
 * collision code tests, outlined into the game texture the way main.c's tr_hitbox draws the ship's (row y, column x =
 * the game's pixel; the picture's layout, size, position, 4:3, TATE and scanlines then apply as to the game itself).
 * Read-only on game RAM: replays and save states stay in step (the screen hash is taken before any overlay).
 *
 * The game's rules (work/g98/hitbox/REPORT.md; ibara / ARRANGE = the arcade ibara program, Kuro BL its own; both
 * programs have the same structure, every address below read from the SH-3 code):
 *  - a box list = 16-byte entries {W, H, DX, DY}, ended by W = 0; W & 0x0FFFFFFF = half width, H = half height,
 *    DX / DY added to the object's position (16.16); W & 0x20000000 on a player's box = the graze box.
 *  - a contact = |X1 - X2| < half1 + half2 and |Y1 - Y2| < half1' + half2' (strict, 16.16).
 *  - screen: column = X >> 16, row = (Y - camera) >> 16 (the camera word ibara 0C3929E0, Kuro BL 0C3C4048; main.c's
 *    tr_hitbox).
 *  - enemy parts (ibara 0C26CD40, Kuro BL 0C286578; 192 x 0xB4): the box list at +0x1C, position +0x24 / +0x28; tested
 *    only while u8 +0xA9 >= u8 +0xAB; +0 & 0x10000000 = it kills a ship it touches (player vs parts ibara 0C05F1E0,
 *    Kuro BL 0C06ECD0), +0 & 0x02000000 = the player's shots hit it (ibara 0C05E6E0 / 0C05ED70, Kuro BL 0C06E1D0 /
 *    0C06E830): red = it kills on contact, orange = it can only be shot (ground targets).
 *  - enemy bullets (ibara 0C27E0FC, Kuro BL 0C297B40; 256 x 0x54): +0 & 0x10000000, box list at +0x20, position +0x28 /
 *    +0x2C. ibara (0C05F460): each box at its own size. Kuro BL (0C06EF50): each box tested as half 1 x 1 at its own
 *    offset (the list's sizes are skipped). ARRANGE (arrange/enemies.c arr_hit_player, outside the attract's demos):
 *    half 1 x 1 at the bullet's position, Y - 0x100, whatever the list (one box). Yellow.
 *  - the player's main shots (ibara 0C285318 + side x 0x340, 16 x 0x34; Kuro BL 0C2A6D9C + side x 0x680, 32 x 0x34):
 *    +0 & 0x08000000, the box list through the ship-style table (ibara 0C16BEAC, Kuro BL 0C17E1B0) by +4 / +8 / +0xC,
 *    position +0x10 / +0x14; the shot / bomb / Hadou table (ibara 0C217A04, Kuro BL 0C229004 + side x 0x2800, 128 x
 *    0x50): +0 & 0x08000000 (hits enemies) or 0x04000000 (removes bullets: the bombs), box list +0x1C, position +0x24 /
 *    +0x28. Cyan.
 *  - the ships (ibara 0C283794 + side x 0x280, Kuro BL 0C29D1D8 + side x 0x2A0; drawn while +0 = DC000000, as
 *    tr_hitbox): the box list through 0C16BE68 / 0C17E12C by +4 / +8 / +0xC (the collision code's own lists: ibara and
 *    ARRANGE half 2 x 1 at +-2, Kuro BL half 1 x 1 at +-2; graze half 14 x 19), position +0x10 / +0x14. The kill box
 *    white with a black edge, ibara's / ARRANGE's graze box green: tr_hitbox's picture.
 * Each box is outlined one pixel outside the pixels it covers, as tr_hitbox outlines the ship's: the covered columns
 * are (X - half) >> 16 .. (X + half - 1) >> 16. Draw order: shots, parts, bullets, ships.
 *
 * One game frame late: the picture a vblank shows has the game's objects where its RAM had them a game frame before
 * (PC harness, test 92's i92 recording, the stage 1 and 2 bosses: boxes from the same vblank's RAM sat one frame of
 * motion ahead of every moving sprite, bullets, missiles and shots alike; from the previous call's RAM they sit on
 * them). So each call reads the RAM into one set and draws the set the last call read (main.c calls only on a fresh
 * picture, so in slowdown that is the last game frame too); a set older than 100 ms (ALL just switched on, the pause
 * menu) is not drawn (a save state's load or a restart shows the boxes from before it for one picture). All boxes of
 * a picture come from the same RAM, so what touches on the screen is what the game's collision code saw.
 *
 * Cost: one pass over the tables (192 + 256 + 32 / 64 + 256 records' flag words, then the live ones' lists) into a box
 * array, then the outlines: a horizontal edge is a run of stores along a row, a vertical edge one store a row. The
 * texture is write-combined GPU memory (main.c: volatile 32-bit stores only). The log's HITBOX line gives the peak
 * boxes, pixels and time per 60 vblanks while ALL is on. */
#include <stdint.h>

#include "card.h"
#include "cv1k.h"
#include "hitbox.h"
#include "xplat.h"

#define HB_W 320 /* main.c's GAME_W / GAME_H: the CV1000 raster */
#define HB_H 240

#define COL_PART 0xFFFF3030u   /* enemy part that kills on contact */
#define COL_GROUND 0xFFFFA000u /* enemy part the shots hit, harmless to touch */
#define COL_BULLET 0xFFFFFF00u /* enemy bullet */
#define COL_SHOT 0xFF00E0FFu   /* the player's shots, bombs, the Hadou */
#define COL_KILL 0xFFFFFFFFu   /* the ship's kill box: white inside (tr_hitbox) */
#define COL_EDGE 0xFF000000u   /* its edge black */
#define COL_GRAZE 0xFF00FF00u  /* ibara's / ARRANGE's graze box (tr_hitbox's C_GREEN) */

#define MAX_BOXES 2048 /* 192 parts + 256 bullets + 320 shots at a few boxes each; full = the rest skipped */
#define MAX_LIST 16    /* entries read from one box list at most (the game's longest are a few) */

struct hb_game {
	uint32_t parts, bullets, mshot, mshot_side, mshot_tbl, sshot, cam, demo, player, player_side, player_tbl;
	int mshot_n;
};

static const struct hb_game games[2] = {
	{0x0C26CD40u, 0x0C27E0FCu, 0x0C285318u, 0x340u, 0x0C16BEACu, 0x0C217A04u, 0x0C3929E0u, 0x0C21CA15u, 0x0C283794u,
	 0x280u, 0x0C16BE68u, 16}, /* ibara, ARRANGE */
	{0x0C286578u, 0x0C297B40u, 0x0C2A6D9Cu, 0x680u, 0x0C17E1B0u, 0x0C229004u, 0x0C3C4048u, 0x0C22E015u, 0x0C29D1D8u,
	 0x2A0u, 0x0C17E12Cu, 32}, /* Kuro BL */
};

struct hb_box {
	int16_t x0, y0, x1, y1; /* the outline's corners (inclusive), not clipped */
	uint32_t col, fill;     /* fill: the inside's colour (the ship's kill box, as tr_hitbox), 0 = none */
};

/* Two sets: this vblank's RAM goes into one, the picture gets the other (the last call's), as the game's picture
 * shows its objects one game frame behind its RAM (see hitbox_draw) */
static struct hb_box sets[2][MAX_BOXES];
static int set_n[2], set_cur;
static uint64_t set_t[2]; /* when each was read */
static struct hb_box *boxes = sets[0];
static int nbox;

static inline uint32_t rd32(uint32_t a)
{
	return BE32(RAMP(a));
}

static inline int is_ram(uint32_t a)
{
	return (a & 0xFF800000u) == 0x0C000000u;
}

/* a box centred at (x, y) (16.16, y already less the camera), half sizes hw / hh (16.16) */
static void add_box(int32_t x, int32_t y, int32_t hw, int32_t hh, uint32_t col, uint32_t fill)
{
	struct hb_box *b;
	int32_t l, r, t, d;

	if (nbox >= MAX_BOXES || hw <= 0 || hh <= 0 || hw > 0x01000000 || hh > 0x01000000)
		return;
	l = (x - hw) >> 16;
	r = (x + hw - 1) >> 16;
	t = (y - hh) >> 16;
	d = (y + hh - 1) >> 16;
	if (r < -1 || l > HB_W || d < -1 || t > HB_H) /* the outline (one pixel out) misses the picture */
		return;
	b = &boxes[nbox++];
	b->x0 = (int16_t)(l - 1);
	b->x1 = (int16_t)(r + 1);
	b->y0 = (int16_t)(t - 1);
	b->y1 = (int16_t)(d + 1);
	b->col = col;
	b->fill = fill;
}

/* each box of a list at ls for an object at (x, y): mode 0 = its own sizes, 1 = half 1 x 1 at its own offsets */
static void add_list(uint32_t ls, int32_t x, int32_t y, uint32_t col, int mode)
{
	int k;

	if (!is_ram(ls))
		return;
	for (k = 0; k < MAX_LIST; k++, ls += 16) {
		const uint32_t w = rd32(ls);
		if (!w)
			break;
		if (mode)
			add_box(x + (int32_t)rd32(ls + 8), y + (int32_t)rd32(ls + 12), 0x10000, 0x10000, col, 0);
		else
			add_box(x + (int32_t)rd32(ls + 8), y + (int32_t)rd32(ls + 12), (int32_t)(w & 0x0FFFFFFFu),
			        (int32_t)rd32(ls + 4), col, 0);
	}
}

static void collect(const struct hb_game *g, int kuro, int all)
{
	const int32_t cam = (int32_t)rd32(g->cam);
	uint32_t a;
	int i, s;
#ifdef IB_ARRANGE
	const int arr_bullets = !kuro && *RAMP(g->demo) == 0; /* arr_hit_player's rule, outside the demos */
#else
	const int arr_bullets = 0;
#endif

	nbox = 0;
	if (!all) /* PLAYER: the ships' boxes only */
		goto ships;
	/* the player's shots: main shots (the ship-style table), then the shot / bomb / Hadou table */
	for (s = 0; s < 2; s++) {
		for (i = 0, a = g->mshot + (uint32_t)s * g->mshot_side; i < g->mshot_n; i++, a += 0x34) {
			uint32_t p;
			if (!(rd32(a) & 0x08000000u))
				continue;
			p = rd32(g->mshot_tbl + (rd32(a + 4) << 3));
			if (!is_ram(p))
				continue;
			p = rd32(p + (rd32(a + 8) << 4));
			if (!is_ram(p))
				continue;
			add_list(rd32(p + (rd32(a + 12) << 3) + 4), (int32_t)rd32(a + 0x10), (int32_t)rd32(a + 0x14) - cam,
			         COL_SHOT, 0);
		}
		for (i = 0, a = g->sshot + (uint32_t)s * 0x2800u; i < 128; i++, a += 0x50)
			if (rd32(a) & 0x0C000000u)
				add_list(rd32(a + 0x1C), (int32_t)rd32(a + 0x24), (int32_t)rd32(a + 0x28) - cam, COL_SHOT, 0);
	}
	/* enemy parts */
	for (i = 0, a = g->parts; i < 192; i++, a += 0xB4) {
		const uint32_t f = rd32(a);
		const uint8_t *q = RAMP(a + 0xA8);
		if (!(f & 0x12000000u) || q[1] < q[3])
			continue;
		add_list(rd32(a + 0x1C), (int32_t)rd32(a + 0x24), (int32_t)rd32(a + 0x28) - cam,
		         f & 0x10000000u ? COL_PART : COL_GROUND, 0);
	}
	/* enemy bullets */
	for (i = 0, a = g->bullets; i < 256; i++, a += 0x54) {
		const uint32_t ls = rd32(a + 0x20);
		if (!(rd32(a) & 0x10000000u))
			continue;
		if (arr_bullets) {
			if (is_ram(ls) && rd32(ls))
				add_box((int32_t)rd32(a + 0x28), (int32_t)rd32(a + 0x2C) - 0x100 - cam, 0x10000, 0x10000, COL_BULLET, 0);
		} else
			add_list(ls, (int32_t)rd32(a + 0x28), (int32_t)rd32(a + 0x2C) - cam, COL_BULLET, kuro);
	}
ships:
	/* the ships (last: on top), from the same RAM as the rest: each box of the ship's own list (the collision code's,
	 * by +4 / +8 / +0xC), the kill box white with a black edge as tr_hitbox, ibara's / ARRANGE's graze box green
	 * (Kuro BL's only counts with A held and options, growing with the hold: not drawn, as in PLAYER) */
	for (s = 0, a = g->player; s < 2; s++, a += g->player_side) {
		uint32_t p, ls;
		int k;
		if (rd32(a) != 0xDC000000u) /* alive (tr_hitbox's test) */
			continue;
		p = rd32(g->player_tbl + (rd32(a + 4) << 3));
		if (!is_ram(p))
			continue;
		p = rd32(p + (rd32(a + 8) << 4));
		if (!is_ram(p))
			continue;
		ls = rd32(p + (rd32(a + 12) << 3) + 4);
		if (!is_ram(ls))
			continue;
		for (k = 0; k < MAX_LIST; k++, ls += 16) {
			const uint32_t w = rd32(ls);
			const int32_t x = (int32_t)rd32(a + 0x10) + (int32_t)rd32(ls + 8);
			const int32_t y = (int32_t)rd32(a + 0x14) + (int32_t)rd32(ls + 12) - cam;
			if (!w)
				break;
			if (!(w & 0x20000000u))
				add_box(x, y, (int32_t)(w & 0x0FFFFFFFu), (int32_t)rd32(ls + 4), COL_EDGE, COL_KILL);
			else if (!kuro)
				add_box(x, y, (int32_t)(w & 0x0FFFFFFFu), (int32_t)rd32(ls + 4), COL_GRAZE, 0);
		}
	}
}

static inline void hline(volatile uint32_t *row, int x0, int x1, uint32_t c)
{
	int x;

	if (x0 < 0)
		x0 = 0;
	if (x1 > HB_W - 1)
		x1 = HB_W - 1;
	for (x = x0; x <= x1; x++)
		row[x] = c;
}

static inline void vline(volatile uint32_t *tex, unsigned pitch, int x, int y0, int y1, uint32_t c)
{
	volatile uint32_t *p;
	int y;

	if (x < 0 || x >= HB_W)
		return;
	if (y0 < 0)
		y0 = 0;
	if (y1 > HB_H - 1)
		y1 = HB_H - 1;
	for (y = y0, p = tex + (size_t)y0 * pitch + (size_t)x; y <= y1; y++, p += pitch)
		*p = c;
}

/* the outlines; returns the pixels written */
static unsigned draw(volatile uint32_t *tex, unsigned pitch)
{
	unsigned px = 0;
	int i;

	for (i = 0; i < nbox; i++) {
		const struct hb_box *b = &boxes[i];
		const int x0 = b->x0, x1 = b->x1, y0 = b->y0, y1 = b->y1;
		const int cx0 = x0 < 0 ? 0 : x0, cx1 = x1 > HB_W - 1 ? HB_W - 1 : x1;
		if (y0 >= 0 && y0 < HB_H)
			hline(tex + (size_t)y0 * pitch, x0, x1, b->col);
		if (y1 >= 0 && y1 < HB_H && y1 != y0)
			hline(tex + (size_t)y1 * pitch, x0, x1, b->col);
		if (y1 - y0 > 1) {
			vline(tex, pitch, x0, y0 + 1, y1 - 1, b->col);
			vline(tex, pitch, x1, y0 + 1, y1 - 1, b->col);
		}
		if (b->fill) {
			int y;
			for (y = y0 + 1 < 0 ? 0 : y0 + 1; y <= y1 - 1 && y < HB_H; y++)
				hline(tex + (size_t)y * pitch, x0 + 1, x1 - 1, b->fill);
		}
		px += (unsigned)(2 * (cx1 - cx0 + 1) + 2 * (y1 - y0 - 1)); /* about (clipped rows not taken off) */
	}
	return px;
}

/* the log's line: per 60 vblanks of ALL, the peak; one line every 30 s, or at once over 1 ms (as main.c's HUD line) */
static uint64_t win_max, win_sum, most;
static unsigned win_n, win_boxes, win_px, lines_n, most_boxes, most_px;

static void stats(uint64_t dt, int n, unsigned px)
{
	if (dt > win_max) {
		win_max = dt;
		win_boxes = (unsigned)n;
		win_px = px;
	}
	if (dt > most) {
		most = dt;
		most_boxes = (unsigned)n;
		most_px = px;
	}
	win_sum += dt;
	if (++win_n < 60)
		return;
	if (++lines_n >= 30 || win_max >= (uint64_t)PPC_TIMEBASE_FREQ / 1000) {
		log_printf(C_WHITE, "HITBOX: ALL: %u US AT MOST IN 60 VBLANKS (%u BOXES, ~%u PIXELS), %u US ON AVERAGE; "
		           "%u US THE MOST SO FAR (%u BOXES, ~%u PIXELS)", (unsigned)(win_max * 1000000 / PPC_TIMEBASE_FREQ),
		           win_boxes, win_px, (unsigned)(win_sum * 1000000 / PPC_TIMEBASE_FREQ / win_n),
		           (unsigned)(most * 1000000 / PPC_TIMEBASE_FREQ), most_boxes, most_px);
		lines_n = 0;
	}
	win_max = win_sum = 0;
	win_n = 0;
}

int hitbox_draw(volatile uint32_t *tex, unsigned pitch, int kuro, int mode)
{
	const uint64_t t0 = tb_read();
	unsigned px;
	int n;

	boxes = sets[set_cur];
	collect(&games[kuro ? 1 : 0], kuro, mode == HITBOX_ALL);
	set_n[set_cur] = nbox;
	set_t[set_cur] = t0;
#ifndef HB_NOLAG
	set_cur ^= 1; /* draw the last call's set: none when it is older than 100 ms (ALL just on, the pause menu) */
#endif
	boxes = sets[set_cur];
	nbox = n = t0 - set_t[set_cur] <= (uint64_t)PPC_TIMEBASE_FREQ / 10 ? set_n[set_cur] : 0;
	px = draw(tex, pitch);
	if (mode == HITBOX_ALL)
		stats(tb_read() - t0, n, px);
	return n;
}

/* Test 79 (user 2026-10-26: the ARRANGE HUD planned since test 78; its art "Kuro BL's (Recommended)", drawn as a "360
 * overlay (Recommended)"). ARRANGE's RANK gauge, the boss's HP bar, the seven sub-weapon plates and the rose value
 * popups with Kuro BL's art, places and rules (work/blkarr/hud_spec.md: its draw routines 0C0703C0, 0C0709B0,
 * 0C070DC0, 0C06C1E0, the arcade's 0C062A70 being the same routine), and the PS2's formation label (Kuro BL has none:
 * the PS2's box, PDM 96, the game's 8 x 8 font, spec section 8). Art: gen/arrhud from tools/arrange/mkhud.py.
 *
 * Drawn by the 360, not the game: no SH-3 or blitter time (ARRANGE's slowdown stays the arcade ROM's), not in the
 * recorded screen hash (taken during the conversion, before this). The shown 320 x 240 is copied from VRAM at the
 * picture's scroll, the HUD drawn over the copy in Kuro BL's order with the blitter's own arithmetic (runtime/blitter.c:
 * the tint, then s_mode 0 / d_mode 4 for the fades, transparent pens skipped), then the rows it touched converted into
 * the game texture as the conversion does. The popups go over everything (Kuro BL draws them under the ship and the
 * bullets, at layer 0x14). ARRANGE's state from work RAM: arrange_patch.h's ARRANGE_* (the boss gauge machine runs in
 * the game, arrange/enemies.c gauge_step), the arcade's player records, rank, camera and items; the HUD's own state
 * (popups, the RANK gauge's and the label's slides) steps once per game frame (0C286298).
 *
 * Test 80 (test 79: "sound stutter is present during heavy slowdown in arrange (when the screen is filled with x300)"):
 * test 79 drew every popup glyph through blit()'s pixel loop, all of its rectangle, and converted every touched row from
 * its first to its last pixel: with ~250 "x300" popups up, 9 ms a frame while they were solid and 13.5 ms while they
 * faded (rec0032's late frames: CONV 10.1-14.7 ms against 1.0 before), on top of a slowdown frame's 12.7 ms of game,
 * so the frames came late and the sound ran dry. Now the same pixels, faster:
 *  - each popup glyph (4 sizes x 8 frames x the ten digits and the "x") is a list of its opaque runs, made once from the
 *    art (arrhud_init, at boot); a solid popup copies its runs, a fading one blends them through two tables per alpha
 *    (the blitter's s * a / 31 + d * (31 - a) / 31 for red + green and for blue: no channel can pass 31, so no clamp),
 *    its own part made once a frame per glyph and alpha (faded_glyph: a cancel's popups share them);
 *  - only the 16-pixel blocks the HUD drew are converted into the texture, with those it drew there last time and not
 *    now put back from VRAM (test 79 left old popup pixels outside a row's ends on a picture shown again without a new
 *    conversion: 6 frames of rec0032);
 *  - the work is split in ARRHUD_BANDS bands of rows, each its own fb rows, blocks and texture rows, so main.c runs them
 *    at once on the game thread and the blitter's two workers (idle by then: the frame's jobs are drawn); the bands'
 *    edges from the popups' load (arrhud_begin), each band draws everything clipped to its rows.
 * The bar, the RANK gauge, the label and the plates (a few thousand pixels) stay on blit(). PC harness (rec0032, every
 * frame against the HUD drawn fresh on a fresh conversion): equal on all frames. */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "arrhud.h"

#ifndef IB_ARRANGE

void arrhud_frame(void)
{
}

int arrhud_begin(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh)
{
	(void)tex;
	(void)pitch;
	(void)sx;
	(void)sy;
	(void)fresh;
	return 0;
}

void arrhud_band(int b)
{
	(void)b;
}

int arrhud_draw(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh)
{
	(void)tex;
	(void)pitch;
	(void)sx;
	(void)sy;
	(void)fresh;
	return 0;
}

void arrhud_reset(void)
{
}

int arrhud_popups(void)
{
	return 0;
}

int arrhud_init(void)
{
	return 0;
}

#else

#include "arrange_patch.h"
#include "arrhud_art.h"
#include "cv1k.h"

#define FB_W 320
#define FB_H 240

/* the arcade's work RAM (arrange/arrange.h, items.c) */
#define A_RANK 0x0C27DFF8u       /* u32: 0xFFFFFF the least (ARRANGE's start), 0 the most */
#define A_PL0 0x0C283794u        /* player records, 0x280 each: +0 in play (u32), +0x10 x = fb x, +0x14 y (world), 16.16 */
#define PL_SIZE 0x280u
#define P_NOPT 0x26Au            /* u8: options (the PS2's +0x26B) */
#define A_CAM 0x0C3929E0u        /* the camera: world y - fb y (16.16) */
#define A_FRAME 0x0C286298u      /* u32: the game's frame counter */
#define A_PAUSE 0x0C21CA24u      /* u8: the game's pause */
#define A_DEMO 0x0C21CA15u       /* u8: 0 = ARRANGE's rules (arrange.h arr()), else a demo */
#define A_GAME_ON 0x0C28530Cu    /* u8: 1-2 in a run */
#define A_TEST 0x0C21CA28u       /* u32: A_TEST_ON while the service menu runs (main.c IB_TEST) */
#define A_TEST_ON 0x12345678u
#define A_ITEM0 0x0C38C064u      /* items, 0x54 each: +0 flags (0 free), +4 type (7 a rose), +0x28 x, +0x2C y */
#define N_ITEMS 0x140

static uint32_t be32(uint32_t a)
{
	const uint8_t *p = RAMP(a);
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static uint16_t fb[FB_H][FB_W];          /* the picture, then the HUD over it */

/* Test 80: the 16-pixel blocks (bit b = columns 16b..16b+15) the HUD drew on each row this frame, and those each game
 * texture holds from its last HUD (tex_mask; a whole conversion of it clears them) */
#define BLOCK 16
static uint32_t cur_mask[FB_H];
static uint32_t tex_mask[2][FB_H];
static volatile uint32_t *tex_ptr[2];    /* the two game textures, in the order they first came */

static void mark(int y, int x0, int x1)  /* columns x0..x1 (x0 <= x1) of row y drawn */
{
	cur_mask[y] |= (2u << (x1 / BLOCK)) - (1u << (x0 / BLOCK));
}

/* ---- the blitter's arithmetic (runtime/blitter.c do_draw, blit_pixel.inc) ---------------------------------------- */

#define OPAQUE (-1)

static uint8_t m31[32][64]; /* min(31, a * b / 31): the blitter's colrtable (no divide per pixel on the 360) */
/* test 80: the popups' fades, per alpha a (0-31): red << 10 | green << 5 by the pixel's bits 5-14, blue by bits 0-4 */
static uint16_t fade_rg[32][1024], fade_b[32][32];

static void m31_init(void)
{
	int a, b;

	for (a = 0; a < 32; a++)
		for (b = 0; b < 64; b++)
			m31[a][b] = (uint8_t)(a * b / 31 < 31 ? a * b / 31 : 31);
	for (a = 0; a < 32; a++) {
		for (b = 0; b < 1024; b++)
			fade_rg[a][b] = (uint16_t)(m31[a][b >> 5] << 10 | m31[a][b & 31] << 5);
		for (b = 0; b < 32; b++)
			fade_b[a][b] = m31[a][b];
	}
}

/* w x h pixels of src (pitch pixels a row) from (u, v) at fb (x, y), only fb rows lo..hi - 1 (test 80: a band's): pens
 * without bit 15 skipped; tint 0x808080 = none (each channel's byte >> 2 multiplies, 0x20 = 1); alpha OPAQUE = a copy,
 * else the fade a (0-255): s_alpha = d_alpha = a >> 3, s * s_alpha / 31 + d * (31 - d_alpha) / 31 (31 both: a copy) */
static void blit(const uint16_t *src, int pitch, int u, int v, int w, int h, int x, int y, int alpha, uint32_t tint,
                 int lo, int hi)
{
	const int tr = (int)(tint >> 16 & 0xFF) >> 2, tg = (int)(tint >> 8 & 0xFF) >> 2, tb = (int)(tint & 0xFF) >> 2;
	const int tinted = tr != 0x20 || tg != 0x20 || tb != 0x20;
	const int a5 = alpha < 0 ? 31 : (alpha & 0xFF) >> 3, blend = a5 != 31;
	int i, j;

	for (j = 0; j < h; j++) {
		const int fy = y + j;
		int x0 = FB_W, x1 = -1;
		if (fy < lo || fy >= hi)
			continue;
		for (i = 0; i < w; i++) {
			const int fx = x + i;
			const uint16_t p = src[(v + j) * pitch + u + i];
			int r, g, b;
			if (fx < 0 || fx >= FB_W || !(p & 0x8000))
				continue;
			r = p >> 10 & 31;
			g = p >> 5 & 31;
			b = p & 31;
			if (tinted) {
				r = m31[r][tr];
				g = m31[g][tg];
				b = m31[b][tb];
			}
			if (blend) {
				const uint16_t d = fb[fy][fx];
				r = m31[a5][r] + m31[31 - a5][d >> 10 & 31];
				g = m31[a5][g] + m31[31 - a5][d >> 5 & 31];
				b = m31[a5][b] + m31[31 - a5][d & 31];
				r = r < 31 ? r : 31;
				g = g < 31 ? g : 31;
				b = b < 31 ? b : 31;
			}
			fb[fy][fx] = (uint16_t)(0x8000 | r << 10 | g << 5 | b);
			if (fx < x0)
				x0 = fx;
			x1 = fx;
		}
		if (x0 <= x1)
			mark(fy, x0, x1);
	}
}

/* a sprite from one of Kuro BL's pages (873, 880, 881: AH_P*), fb rows lo..hi - 1 */
static void spr(int page, int u, int v, int w, int h, int x, int y, int alpha, uint32_t tint, int lo, int hi)
{
	blit(arrhud_page[page], 256, u, v, w, h, x, y, alpha, tint, lo, hi);
}

/* ---- test 80: the popups' glyphs as runs of opaque pixels -------------------------------------------------------- */

/* tier 0-3 = values 1-99, 100-199, 200-255, 300 (0C06C1E0's four sets of art); f = the art's frame (age >> 1) & 7;
 * sym 0-9 the digits, 10 the "x" after them */
#define TIERS 4
#define FRAMES 8
#define SYMS 11
#define GRUNS 12288              /* the art has 7680 */
#define GPIX 65536               /* and 53239 opaque pixels */
struct grun {
	const uint16_t *src;     /* the run's first pixel, in gpix (each glyph's pixels side by side: a few cache lines) */
	uint16_t pix;            /* its first pixel's index among the glyph's opaque pixels (a faded copy's) */
	uint8_t row, x, len;     /* in the glyph's rectangle */
};
struct glyph {
	uint16_t first, n;       /* its runs in gruns, by row */
	uint16_t px;             /* its opaque pixels (the bands' load) */
	uint8_t w, h;
	int8_t dx, dy;           /* the rectangle's corner from the popup glyph's place */
};
static struct glyph glyphs[TIERS][FRAMES][SYMS];
static struct grun gruns[GRUNS];
static uint16_t gpix[GPIX];
static unsigned gruns_n;
static int glyphs_ok = -1;               /* -1 not made yet, 0 past GRUNS or GPIX (blit() draws them), 1 made */

/* test 79's draw_popups' rectangles, one glyph */
static void glyph_rect(int tier, int f, int sym, int *page, int *u, int *v, int *w, int *h, int *dx, int *dy)
{
	const int last = sym == 10, dg = last ? 0 : sym;

	switch (tier) {
	case 3:
		*page = last ? AH_P881 : AH_P880;
		*u = last ? 232 : 32 * f;
		*v = last ? 24 * f : 24 * dg;
		*w = last ? 24 : 32;
		*h = 24;
		*dx = -16;
		*dy = -12;
		break;
	case 2:
		*page = AH_P881;
		*u = 208 - 24 * f;
		*v = last ? 0 : 16 + 16 * dg;
		*w = 24;
		*h = 16;
		*dx = -12;
		*dy = -8;
		break;
	case 1:
		*page = AH_P881;
		*u = last ? 240 : 216 - 16 * f;
		*v = last ? 192 + 8 * f : 176 + 8 * dg;
		*w = 16;
		*h = 8;
		*dx = -8;
		*dy = -4;
		break;
	default:
		*page = AH_P881;
		*u = 32 - 8 * (f % 5);
		*v = last ? 88 * (f / 5) : 88 * (f / 5) + 8 + 8 * dg;
		*w = 8;
		*h = 8;
		*dx = -4;
		*dy = -4;
		break;
	}
}

static void glyphs_make(void)
{
	int t, f, s, j, i;
	unsigned n = 0, np = 0;

	for (t = 0; t < TIERS; t++)
		for (f = 0; f < FRAMES; f++)
			for (s = 0; s < SYMS; s++) {
				struct glyph *g = &glyphs[t][f][s];
				int page, u, v, w, h, dx, dy, px = 0;
				glyph_rect(t, f, s, &page, &u, &v, &w, &h, &dx, &dy);
				g->first = (uint16_t)n;
				g->w = (uint8_t)w;
				g->h = (uint8_t)h;
				g->dx = (int8_t)dx;
				g->dy = (int8_t)dy;
				for (j = 0; j < h; j++) {
					const uint16_t *row = arrhud_page[page] + (v + j) * 256 + u;
					for (i = 0; i < w;) {
						int k = i;
						if (!(row[i] & 0x8000)) {
							i++;
							continue;
						}
						while (k < w && (row[k] & 0x8000))
							k++;
						if (n == GRUNS || np + (unsigned)(k - i) > GPIX) {
							glyphs_ok = 0;
							return;
						}
						memcpy(gpix + np, row + i, (size_t)(k - i) * sizeof(gpix[0]));
						gruns[n].src = gpix + np;
						np += (unsigned)(k - i);
						gruns[n].pix = (uint16_t)px;
						gruns[n].row = (uint8_t)j;
						gruns[n].x = (uint8_t)i;
						gruns[n].len = (uint8_t)(k - i);
						n++;
						px += k - i;
						i = k;
					}
				}
				g->n = (uint16_t)(n - g->first);
				g->px = (uint16_t)px;
			}
	gruns_n = n;
	glyphs_ok = 1;
}

/* a run copied (bit 15 set: blit()'s 0x8000 | r << 10 | g << 5 | b is the pixel itself) */
static void run_copy(uint16_t *restrict d, const uint16_t *restrict s, int n)
{
	int k;

	for (k = 0; k < n; k++)
		d[k] = s[k];
}

/* a run faded in: s * a / 31 + d * (31 - a) / 31 a channel, two pixels a turn (the in-order core waits on each load) */
static void run_fade(uint16_t *restrict d, const uint16_t *restrict s, int n, const uint16_t *restrict hs,
                     const uint16_t *restrict ls, const uint16_t *restrict hd, const uint16_t *restrict ld)
{
	int k;

	for (k = 0; k + 1 < n; k += 2) {
		const unsigned s0 = s[k], s1 = s[k + 1], d0 = d[k], d1 = d[k + 1];
		const unsigned c0 = 0x8000u + hs[s0 >> 5 & 0x3FF] + ls[s0 & 31] + hd[d0 >> 5 & 0x3FF] + ld[d0 & 31];
		const unsigned c1 = 0x8000u + hs[s1 >> 5 & 0x3FF] + ls[s1 & 31] + hd[d1 >> 5 & 0x3FF] + ld[d1 & 31];
		d[k] = (uint16_t)c0;
		d[k + 1] = (uint16_t)c1;
	}
	if (k < n) {
		const unsigned s0 = s[k], d0 = d[k];
		d[k] = (uint16_t)(0x8000u + hs[s0 >> 5 & 0x3FF] + ls[s0 & 31] + hd[d0 >> 5 & 0x3FF] + ld[d0 & 31]);
	}
}

/* a run faded in with its pixels' own part already made (pre: 0x8000 + s * a / 31 a channel, faded_glyph) */
static void run_fade_pre(uint16_t *restrict d, const uint16_t *restrict pre, int n, const uint16_t *restrict hd,
                         const uint16_t *restrict ld)
{
	int k;

	for (k = 0; k + 1 < n; k += 2) {
		const unsigned d0 = d[k], d1 = d[k + 1];
		const unsigned c0 = pre[k] + hd[d0 >> 5 & 0x3FF] + ld[d0 & 31];
		const unsigned c1 = pre[k + 1] + hd[d1 >> 5 & 0x3FF] + ld[d1 & 31];
		d[k] = (uint16_t)c0;
		d[k + 1] = (uint16_t)c1;
	}
	if (k < n) {
		const unsigned d0 = d[k];
		d[k] = (uint16_t)(pre[k] + hd[d0 >> 5 & 0x3FF] + ld[d0 & 31]);
	}
}

/* one glyph at fb (x0, y0), its rows in lo..hi - 1: a5 31 = a copy, else the fade a5 (1-30), with pre (NULL: none)
 * its pixels' faded part */
static void glyph_draw(const struct glyph *g, int x0, int y0, int a5, const uint16_t *pre, int lo, int hi)
{
	const struct grun *r = gruns + g->first, *const e = r + g->n;
	const uint16_t *hs = fade_rg[a5], *ls = fade_b[a5], *hd = fade_rg[31 - a5], *ld = fade_b[31 - a5];
	const int clip = x0 < 0 || x0 + g->w > FB_W;
	int row = -1;
	uint32_t m = 0;

	if (x0 >= FB_W || x0 + g->w <= 0 || y0 >= hi || y0 + g->h <= lo)
		return;
	for (; r < e && y0 + r->row < lo; r++)
		;
	for (; r < e; r++) {
		const int fy = y0 + r->row;
		int fx = x0 + r->x, n = r->len, skip = 0;
		const uint16_t *s = r->src;
		if (fy >= hi)
			break;
		if (clip) {
			if (fx < 0) {
				skip = -fx;
				s += skip;
				n -= skip;
				fx = 0;
			}
			if (fx + n > FB_W)
				n = FB_W - fx;
			if (n <= 0)
				continue;
		}
		if (fy != row) { /* the row's blocks kept in a register until the row ends (no store-load on cur_mask) */
			if (row >= 0)
				cur_mask[row] |= m;
			row = fy;
			m = 0;
		}
		if (a5 >= 31)
			run_copy(&fb[fy][fx], s, n);
		else if (pre)
			run_fade_pre(&fb[fy][fx], pre + r->pix + skip, n, hd, ld);
		else
			run_fade(&fb[fy][fx], s, n, hs, ls, hd, ld);
		m |= (2u << ((fx + n - 1) / BLOCK)) - (1u << (fx / BLOCK));
	}
	if (row >= 0)
		cur_mask[row] |= m;
}

/* ---- the HUD's own state ---------------------------------------------------------------------------------------- */

#define POPUPS 256
static struct popup {
	int state;               /* 0 free, 1 solid (life 47), 2 fading (life 31) */
	int32_t x, y;            /* 16.16: fb x, world y */
	int life, w, value, age; /* w: the wobble's size, 79 down to 0; age: the art's frame (age >> 1) & 7 */
} pop[POPUPS];
static uint8_t rose_seen[N_ITEMS];       /* the item slot holds a rose already given its popup */
static int gx = 0x124;                   /* the RANK gauge's x (0x114 while the bar is up) */
static int b74;                          /* the formation label's slide, 0-12 (PS2 0x338B74) */
static int was_on, have_frame;
static uint32_t last_frame;

static int side(void)                    /* the side ARRANGE plays, -1 none in play */
{
	const uint32_t p = be32(ARRANGE_ACT) & 1;
	return be32(A_PL0 + p * PL_SIZE) ? (int)p : -1;
}

/* test 81 (user's todo list: "entering service mode in arrange doesn't immediately flush out the new screen hud
 * elements (rank, option/formation, boss health)"): a service menu entered in a run leaves the game's byte 1 through the
 * menu, the warning and the logos until the title (main.c sm_frame's sm_svc), so the HUD is off from the menu's first
 * vblank until that byte is 0 again */
static int svc;

static int hud_on(void)
{
	const uint8_t on = *RAMP(A_GAME_ON);

	if (be32(A_TEST) == A_TEST_ON)
		svc = 1;
	else if (!on)
		svc = 0;
	return on && on < 3 && !*RAMP(A_DEMO) && !svc;
}

void arrhud_reset(void)
{
	memset(pop, 0, sizeof(pop));
	memset(rose_seen, 0, sizeof(rose_seen));
	gx = be32(ARRANGE_GAUGE_ON) ? 0x114 : 0x124;
	b74 = 0;
	have_frame = 0;
}

int arrhud_popups(void)
{
	int k, n = 0;

	for (k = 0; k < POPUPS; k++)
		n += pop[k].state != 0;
	return n;
}

static void popup_new(int32_t x, int32_t y, int value)
{
	int k;

	for (k = 0; k < POPUPS; k++)
		if (!pop[k].state) {
			pop[k] = (struct popup){1, x, y, 0x2F, 0x4F, value, 0};
			return;
		}
}

/* one game frame: Kuro BL's order, the rose update (spawns) before the popups' pass; the PS2's popup at a rose's spawn,
 * with no delay (items.c: the popup is made at the rose's first update) */
static void step(void)
{
	const int paused = *RAMP(A_PAUSE) != 0, target = be32(ARRANGE_GAUGE_ON) ? 0x114 : 0x124, p = side();
	int k;

	if (!paused && gx != target) /* 0C0703E2: 1 px a frame */
		gx += gx < target ? 1 : -1;
	for (k = 0; k < N_ITEMS; k++) {
		const uint32_t it = A_ITEM0 + 0x54u * (uint32_t)k;
		if (be32(it) && be32(it + 4) == 7) {
			if (!rose_seen[k]) {
				const int v = (int)be32(ARRANGE_ROSE_VAL + 4u * (uint32_t)k);
				rose_seen[k] = 1;
				if (v > 0)
					popup_new((int32_t)be32(it + 0x28), (int32_t)be32(it + 0x2C), v);
			}
		} else {
			rose_seen[k] = 0;
		}
	}
	for (k = 0; k < POPUPS && !paused; k++) { /* 0C06C1E0's update */
		struct popup *q = &pop[k];
		if (!q->state)
			continue;
		if (q->state == 1 && --q->life < 1) {
			q->state = 2;
			q->life = 0x1F;
		} else if (q->state == 2 && --q->life < 1) {
			q->state = 0;
			continue;
		}
		q->x += 0x2000;
		q->y += 0x4000;
		if (q->w)
			q->w--;
		q->age++;
	}
	/* the PS2's label (0x1285C0): while the ship has options, 1 px a frame to 12; at once gone without them */
	if (p >= 0 && *RAMP(A_PL0 + (uint32_t)p * PL_SIZE + P_NOPT))
		b74 += b74 < 12;
	else
		b74 = 0;
}

void arrhud_frame(void)
{
	const uint32_t f = be32(A_FRAME);
	unsigned n = have_frame ? f - last_frame : 0;

	last_frame = f;
	have_frame = 1;
	if (!hud_on()) {
		was_on = 0;
		return;
	}
	if (!was_on) { /* a run starts (Kuro BL's game start: gx 0x124, no slide in) */
		was_on = 1;
		arrhud_reset();
		have_frame = 1;
		n = 0;
	}
	if (n > 8) /* a jump (a load): one step */
		n = 1;
	while (n--)
		step();
}

/* ---- drawing ---------------------------------------------------------------------------------------------------- */

/* 0C0C4468's sine (amplitude 4096) at the 64 places the popups read */
static const int16_t sine64[64] = {
	0, 401, 799, 1189, 1567, 1930, 2275, 2598, 2896, 3166, 3405, 3612, 3784, 3919, 4017, 4076,
	4096, 4076, 4017, 3919, 3784, 3612, 3405, 3166, 2896, 2598, 2275, 1930, 1567, 1189, 799, 401,
	0, -401, -799, -1189, -1567, -1930, -2275, -2598, -2896, -3166, -3405, -3612, -3784, -3919, -4017, -4076,
	-4096, -4076, -4017, -3919, -3784, -3612, -3405, -3166, -2896, -2598, -2275, -1930, -1567, -1189, -799, -401,
};

/* the ship's place on the fb (x, y) */
static void ship(int p, int *x, int *y)
{
	const uint32_t r = A_PL0 + (uint32_t)p * PL_SIZE;
	*x = (int16_t)(be32(r + 0x10) >> 16);
	*y = (int16_t)(uint16_t)((be32(r + 0x14) - (be32(A_CAM) & 0xFFFF0000u)) >> 16);
}

/* test 80: the fading glyphs' own part of the fade (0x8000 + s * a / 31 a channel, in the order of their runs' pixels),
 * made once a frame per glyph and alpha: a cancel's popups come together (the same frame, the same alpha), so one copy
 * serves them all and each of their pixels reads two tables instead of four. Past the arena (or 8 slots probed), the
 * glyph fades the four-table way. */
#define PRE_ARENA 32768
#define PRE_SLOTS 1024
static uint16_t pre_arena[PRE_ARENA];
static struct pre_slot {
	uint32_t key, stamp;
	const uint16_t *p;
} pre_map[PRE_SLOTS];
static uint32_t pre_stamp;               /* this frame's (0: no slot ever used) */
static unsigned pre_used;

static const uint16_t *faded_glyph(const struct glyph *g, int a5)
{
	const uint32_t key = (uint32_t)(g - &glyphs[0][0][0]) << 5 | (uint32_t)a5;
	unsigned h = (key * 2654435761u) >> 22 & (PRE_SLOTS - 1), probe;

	for (probe = 0; probe < 8; probe++, h = (h + 1) & (PRE_SLOTS - 1)) {
		struct pre_slot *sl = &pre_map[h];
		if (sl->stamp == pre_stamp && sl->key == key)
			return sl->p;
		if (sl->stamp != pre_stamp) { /* free this frame: make it */
			const uint16_t *hs = fade_rg[a5], *ls = fade_b[a5];
			const struct grun *r = gruns + g->first, *const e = r + g->n;
			uint16_t *p;
			if (pre_used + g->px > PRE_ARENA)
				return NULL;
			p = pre_arena + pre_used;
			pre_used += g->px;
			for (; r < e; r++)
				for (int k = 0; k < r->len; k++) {
					const unsigned s = r->src[k];
					p[r->pix + k] = (uint16_t)(0x8000u + hs[s >> 5 & 0x3FF] + ls[s & 31]);
				}
			sl->key = key;
			sl->stamp = pre_stamp;
			sl->p = p;
			return p;
		}
	}
	return NULL;
}

/* test 80: this frame's popup glyphs (arrhud_begin; each band draws them in this order, clipped to its rows) */
static struct gdraw {
	const struct glyph *g;
	const uint16_t *pre;     /* its faded part (faded_glyph), NULL: none */
	int16_t x, y;            /* the glyph rectangle's corner on the fb */
	uint8_t a5, tier, f, sym;
	int alpha;               /* blit()'s, for glyphs_ok 0 */
} gdl[POPUPS * 4];
static int gdl_n;

/* 0C06C1E0's draw: each digit (0 = the units) and then the extra glyph, Kuro BL's art by the value; into gdl */
static void list_popups(void)
{
	const uint32_t cam = be32(A_CAM) & 0xFFFF0000u;
	int k;

	gdl_n = 0;
	pre_stamp++;
	pre_used = 0;
	for (k = 0; k < POPUPS; k++) {
		const struct popup *q = &pop[k];
		const int f = (q->age >> 1) & 7, alpha = q->state == 1 ? OPAQUE : q->life * 8;
		const int a5 = alpha < 0 ? 31 : (alpha & 0xFF) >> 3; /* blit()'s */
		const int tier = q->value == 300 ? 3 : q->value >= 200 ? 2 : q->value >= 100 ? 1 : 0;
		int n = 0, i, d, step;
		if (!q->state)
			continue;
		for (d = q->value; d; d /= 10)
			n++;
		step = q->value == 300 ? 21 : q->value >= 200 ? 16 : 8;
		for (i = 0, d = q->value; i <= n && gdl_n < POPUPS * 4; i++, d /= 10) {
			const int32_t X = q->x + sine64[(2 * i + q->w) & 63] * 4 * q->w, Y = q->y - i * step * 0x10000;
			const int fx = (X + 0x88) >> 16, fy = (int16_t)(uint16_t)((uint32_t)(Y - (int32_t)cam) >> 16);
			const int x = fx + ((X & 0xFFFF) != 0), sym = i == n ? 10 : d % 10;
			const struct glyph *g = &glyphs[tier][f][sym];
			struct gdraw *e = &gdl[gdl_n++];
			e->g = g;
			e->pre = a5 < 31 && glyphs_ok > 0 ? faded_glyph(g, a5) : NULL;
			e->x = (int16_t)(x + g->dx);
			e->y = (int16_t)(fy + g->dy);
			e->a5 = (uint8_t)a5;
			e->tier = (uint8_t)tier;
			e->f = (uint8_t)f;
			e->sym = (uint8_t)sym;
			e->alpha = alpha;
		}
	}
}

/* a fading glyph's fb lines asked of the cache ahead (dcbt: the in-order core would wait on each row's first read) */
static void prefetch_rows(const struct gdraw *e, int lo, int hi)
{
	int x0 = e->x, x1 = e->x + e->g->w - 1, y0 = e->y, y1 = e->y + e->g->h, y;

	if (x0 < 0)
		x0 = 0;
	if (x1 >= FB_W)
		x1 = FB_W - 1;
	if (y0 < lo)
		y0 = lo;
	if (y1 > hi)
		y1 = hi;
	for (y = y0; y < y1 && x0 <= x1; y++) {
		__builtin_prefetch(&fb[y][x0]);
		if ((uintptr_t)&fb[y][x0] >> 7 != (uintptr_t)&fb[y][x1] >> 7)
			__builtin_prefetch(&fb[y][x1]);
	}
}

static void draw_popups(int lo, int hi)
{
	int k;

	if (gdl_n && gdl[0].a5 < 31)
		prefetch_rows(&gdl[0], lo, hi);
	for (k = 0; k < gdl_n; k++) {
		const struct gdraw *e = &gdl[k];
		if (k + 1 < gdl_n && gdl[k + 1].a5 < 31)
			prefetch_rows(&gdl[k + 1], lo, hi);
		if (glyphs_ok > 0) {
			glyph_draw(e->g, e->x, e->y, e->a5, e->pre, lo, hi);
		} else { /* more runs than GRUNS: test 79's way */
			int page, u, v, w, h, dx, dy;
			glyph_rect(e->tier, e->f, e->sym, &page, &u, &v, &w, &h, &dx, &dy);
			spr(page, u, v, w, h, e->x, e->y, e->alpha, 0x808080, lo, hi);
		}
	}
}

/* 0C0709B0's bar (the machine is the game's: enemies.c gauge_step) */
static void draw_bar(int lo, int hi)
{
	const int32_t len = (int32_t)be32(ARRANGE_GAUGE_OPEN), disp = (int32_t)be32(ARRANGE_GAUGE_DISP),
	              max = (int32_t)be32(ARRANGE_GAUGE_MAX), h2 = len >> 1;
	int32_t i, s;

	if (!be32(ARRANGE_GAUGE_ON) || !be32(ARRANGE_GAUGE_STATE))
		return;
	spr(AH_P873, 240, 0, 16, 10, 284, 111 - h2, OPAQUE, 0x808080, lo, hi);
	spr(AH_P873, 240, 54, 16, 10, 284, 120 + len - h2, OPAQUE, 0x808080, lo, hi);
	for (i = 0; i < len; i += 44) {
		s = len - i < 44 ? len - i : 44;
		spr(AH_P873, 240, 10, 16, s, 284, 120 - h2 + i, OPAQUE, 0x808080, lo, hi);
		spr(AH_P873, 248, 67, 6, s, 289, 120 - h2 + i, 0x80, 0x808080, lo, hi); /* 0x12048080: half */
	}
	if (disp > 0 && max > 0) {
		const int32_t c = disp * 255 / max;
		int32_t n = disp * len / max;
		const uint32_t r = c * 2 < 255 ? (uint32_t)(255 - 2 * c) : 0, g = c * 2 < 255 ? (uint32_t)(2 * c) : 255,
		               b = c * 2 > 255 ? (uint32_t)(2 * c - 255) : 0;
		if (!n)
			n = 1;
		for (i = 0; i < n; i += 44) {
			s = n - i < 44 ? n - i : 44;
			spr(AH_P873, 248, 115, 6, s, 289, 120 - h2 + i, OPAQUE, r << 16 | g << 8 | b, lo, hi);
		}
	}
}

/* 0C0703C0's RANK gauge, faded by the ships near it */
static void draw_rank(uint32_t frame, int lo, int hi)
{
	const uint32_t rank = be32(A_RANK);
	const uint32_t d = rank < 0xFFFFFFu ? (0xFFFFFFu - rank) >> 8 : 0;
	const int len = (int)((d * 70) >> 16), c = (int)(d >> 8);
	int a = 0, p;

	for (p = 0; p < 2; p++) {
		int x, y, dx, dy;
		if (!be32(A_PL0 + (uint32_t)p * PL_SIZE))
			continue;
		ship(p, &x, &y);
		dy = abs(0x78 - y);
		dx = abs(gx + 8 - x);
		if (dy <= 63 && dx <= 15) {
			const int t = ((dy > 48 ? dy - 48 : 0) + dx) * 8;
			if (t > a)
				a = t;
		}
	}
	a = a ? (a < 255 ? a : 255) : OPAQUE;
	spr(AH_P873, 200, 0, 16, 80, gx - 8, 80, a, rank == 0 && (frame & 2) ? 0xFFFFFF : 0x808080, lo, hi);
	if (len) {
		const uint32_t r = c * 2 > 255 ? (uint32_t)(2 * c - 255) : 0, g = c * 2 <= 255 ? (uint32_t)(2 * c) : (uint32_t)(510 - 2 * c),
		               b = c * 2 < 255 ? (uint32_t)(255 - 2 * c) : 0;
		spr(AH_P873, 240, 65, 8, len, gx, 85, a, r << 16 | g << 8 | b, lo, hi);
	}
}

/* the plates' fade: Kuro BL's, the ships' fb x near the strip (x 12), never under 0x60 */
static int plate_alpha(void)
{
	int a = 255, p;

	for (p = 0; p < 2; p++) {
		int x, y, t;
		if (!be32(A_PL0 + (uint32_t)p * PL_SIZE))
			continue;
		ship(p, &x, &y);
		t = abs(12 - x);
		if (t <= 31 && t * 8 < a)
			a = t * 8;
	}
	return a < 0x60 ? 0x60 : a;
}

/* the PS2's formation label under the strip's edge: its box, the formation's name (light blue; pink with the aim lock) */
static void draw_label(int p, int alpha, int lo, int hi)
{
	static const char *const names[5] = {"NORMAL", "BACK", "WIDE", "ROLLING", "SEARCH"};
	static const uint8_t off[5] = {4, 12, 12, 0, 4};
	const unsigned f = *RAMP(ARRANGE_FORM + (uint32_t)p) % 5;
	const int y0 = p ? 0 : 162;
	const uint32_t tint = be32(ARRANGE_AIMLOCK) ? 0xE040A0 : 0x40A0E0;
	const char *s;
	int i;

	if (!b74)
		return;
	blit(&arrhud_fbox[0][0], 12, 0, 0, 12, 77, b74, y0, alpha, 0x808080, lo, hi);
	for (s = names[f], i = 0; *s; s++, i++)
		blit(arrhud_font[(unsigned char)*s - 0x20], 8, 0, 0, 8, 8, b74 + 2, y0 + 18 + off[f] + 8 * i, alpha, tint, lo,
		     hi);
}

/* 0C070DC0's plates for the side playing: owned / not, the current one popped out, blinking, with its side's mark */
static void draw_plates(int p, int alpha, uint32_t frame, int lo, int hi)
{
	static const uint8_t rows[7] = {5, 6, 2, 0, 1, 4, 3};
	static const uint8_t name_v[7] = {0, 28, 58, 90, 122, 154, 187}, name_h[7] = {24, 26, 29, 28, 29, 29, 27},
	                     name_dy[7] = {5, 4, 2, 3, 2, 2, 3};
	int k = abs((int)((frame >> 1) & 15) - 8), i;

	if (k > 7)
		k = 7;
	spr(AH_P873, 228, 0, 12, 240, 0, 0, alpha, 0x808080, lo, hi);
	for (i = 0; i < 7; i++) {
		const unsigned w = rows[i];
		const int y0 = 34 * i, cur = *RAMP(ARRANGE_SUB + (uint32_t)p) == w ? 2 : 0;
		uint32_t tint = 0x606060;
		if (!*RAMP(ARRANGE_OWNED + (uint32_t)p * 7 + w)) {
			spr(AH_P873, 240, 208, 8, 32, 2, y0 + 2, alpha, 0x808080, lo, hi);
			continue;
		}
		if (cur) {
			tint += p ? (uint32_t)(k << 4 | k << 9) : (uint32_t)(k << 20 | k << 9);
			spr(AH_P873, 240, 176, 8, 32, 2, y0 + 2, alpha, 0x808080, lo, hi);
		}
		spr(AH_P873, 248, 208, 8, 32, 2 + cur, y0 + 2, alpha, tint, lo, hi);
		spr(AH_P873, 217, name_v[i], 6, name_h[i], 2 + cur, y0 + 1 + name_dy[i], alpha, 0x808080, lo, hi);
		if (cur)
			spr(AH_P873, 248, p ? 187 : 163, 6, 19, 10, y0 + 17 * p, alpha, 0x808080, lo, hi);
	}
}

/* test 80: which of the two game textures (-1: a third, never seen before; its blocks are not kept) */
static int tex_index(volatile uint32_t *tex)
{
	int t;

	for (t = 0; t < 2; t++)
		if (tex_ptr[t] == tex)
			return t;
	for (t = 0; t < 2; t++)
		if (!tex_ptr[t]) {
			tex_ptr[t] = tex;
			return t;
		}
	return -1;
}

/* ---- test 80: a frame's HUD in bands -------------------------------------------------------------------------- */

static struct {
	volatile uint32_t *tex;
	unsigned pitch;
	uint32_t sx, sy, frame;
	uint32_t *old;           /* the texture's blocks from its last HUD (NULL: not kept) */
	int draw;                /* 1 the HUD, 0 only the old blocks put back */
	int p, a;                /* the side playing, the plates' fade */
	int lo[ARRHUD_BANDS + 1]; /* band b = fb rows lo[b]..lo[b + 1] - 1 */
} job;

static void load_fb(int lo, int hi)
{
	const uint32_t sx = job.sx, sy = job.sy;
	int x, y;

	for (y = lo; y < hi; y++) {
		const uint16_t *row = cv1k_vram + (size_t)((y + sy) & 0xFFF) * CV1K_VRAM_STRIDE;
		if (sx + FB_W <= 0x2000)
			memcpy(fb[y], row + sx, sizeof(fb[y]));
		else
			for (x = 0; x < FB_W; x++)
				fb[y][x] = row[(x + sx) & 0x1FFF];
	}
}

/* the blocks of each row's mask from fb into the texture, as the conversion converts (screen_frame's conv_row) */
static void put_blocks(const uint32_t *mask, int lo, int hi)
{
	int y, x;

	for (y = lo; y < hi; y++) {
		volatile uint32_t *const dst = job.tex + (size_t)y * job.pitch;
		uint32_t m = mask[y];
		while (m) {
			const int b = __builtin_ctz(m);
			const uint16_t *s = &fb[y][b * BLOCK];
			volatile uint32_t *d = dst + b * BLOCK;
			m &= m - 1;
			for (x = 0; x < BLOCK; x++) {
				const uint32_t c = s[x];
				d[x] = 0xFF000000u | (c & 0x7C00) << 9 | (c & 0x3E0) << 6 | (c & 0x1F) << 3;
			}
		}
	}
}

/* the bands' edges: the rows' load (every row's copy and blocks, each popup glyph's pixels on its middle row, a
 * fading one's three times) cut in ARRHUD_BANDS even parts */
static void band_edges(void)
{
	static uint32_t load[FB_H];
	uint32_t total = 0, acc = 0;
	int y, k, b = 1;

	for (y = 0; y < FB_H; y++)
		load[y] = 64;
	for (k = 0; k < gdl_n; k++) {
		const struct gdraw *e = &gdl[k];
		const int mid = e->y + e->g->h / 2;
		if (mid >= 0 && mid < FB_H)
			load[mid] += (uint32_t)e->g->px * (e->a5 < 31 ? 3u : 1u);
	}
	for (y = 0; y < FB_H; y++)
		total += load[y];
	job.lo[0] = 0;
	for (y = 0; y < FB_H && b < ARRHUD_BANDS; y++) {
		acc += load[y];
		while (b < ARRHUD_BANDS && (uint64_t)acc * ARRHUD_BANDS >= (uint64_t)total * (uint32_t)b)
			job.lo[b++] = y + 1;
	}
	while (b < ARRHUD_BANDS)
		job.lo[b++] = FB_H;
	job.lo[ARRHUD_BANDS] = FB_H;
}

int arrhud_init(void)
{
	if (!m31[31][31])
		m31_init();
	if (glyphs_ok < 0)
		glyphs_make();
	return glyphs_ok > 0 ? (int)gruns_n : -1;
}

int arrhud_begin(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh)
{
	const int t = tex_index(tex), p = side();
	int y, b, any = 0;

	job.tex = tex;
	job.pitch = pitch;
	job.sx = sx;
	job.sy = sy;
	job.old = t >= 0 ? tex_mask[t] : NULL;
	if (job.old && fresh)
		memset(job.old, 0, sizeof(tex_mask[0]));
	if (!hud_on() || p < 0) { /* no HUD: what it left in this texture back from VRAM */
		for (y = 0; job.old && y < FB_H && !any; y++)
			any = job.old[y] != 0;
		if (!any)
			return 0;
		job.draw = 0;
		for (b = 0; b <= ARRHUD_BANDS; b++)
			job.lo[b] = FB_H * b / ARRHUD_BANDS;
		return 1;
	}
	arrhud_init();
	job.draw = 1;
	job.frame = be32(A_FRAME);
	job.p = p;
	job.a = plate_alpha();
	list_popups();
	band_edges();
	return 1;
}

void arrhud_band(int b)
{
	const int lo = job.lo[b], hi = job.lo[b + 1];
	int y;

	if (lo >= hi)
		return;
	load_fb(lo, hi);
	if (!job.draw) {
		put_blocks(job.old, lo, hi);
		memset(job.old + lo, 0, (size_t)(hi - lo) * sizeof(job.old[0]));
		return;
	}
	draw_popups(lo, hi);
	draw_bar(lo, hi);
	draw_rank(job.frame, lo, hi);
	draw_label(job.p, job.a, lo, hi);
	draw_plates(job.p, job.a, job.frame, lo, hi);
	if (job.old) { /* the blocks drawn now and those drawn there last time; the texture then holds the HUD on cur_mask */
		for (y = lo; y < hi; y++) {
			const uint32_t now = cur_mask[y];
			cur_mask[y] |= job.old[y];
			job.old[y] = now;
		}
	}
	put_blocks(cur_mask, lo, hi);
	memset(cur_mask + lo, 0, (size_t)(hi - lo) * sizeof(cur_mask[0]));
}

int arrhud_draw(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh)
{
	int b;

	if (!arrhud_begin(tex, pitch, sx, sy, fresh))
		return 0;
	for (b = 0; b < ARRHUD_BANDS; b++)
		arrhud_band(b);
	return 1;
}

#endif

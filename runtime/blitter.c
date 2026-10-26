/* CV1000 blitter (EP1C12 FPGA): register interface, operation list, draw/upload,
 * and MAME's busy-time model. C port of MAME 0.289 cv1k_v.cpp (BSD-3-Clause,
 * David Haywood, Luca Elia, MetalliC).
 *
 * As MAME does, the list is snapshotted at kick time (here: copied out of RAM as
 * 16-bit words by the timing pass) and drawn later, here by the host's worker
 * threads when it provides them. VRAM belongs to the draw job until blitter_sync(),
 * which everything that reads VRAM calls first. The busy flag (0x18000010) follows
 * MAME's delay model in emulated time, so the game sees the same thing either way.
 *
 * Bands: a job can be drawn by n workers at once, worker b drawing only the
 * destination rows with row % n == b. Every pixel then sees the same operations in
 * the same order as a single pass, so the result is identical, unless one operation
 * reads (as its source) VRAM that another operation of the same list writes; the
 * timing pass looks for that and such a list is drawn as one band.
 */
#include <stdlib.h>
#include <string.h>

#include "cv1k.h"
#include "state.h"

#define VRAM_W 0x2000
#define VRAM_H 0x1000
#define VRAM_GUARD (CV1K_VRAM_STRIDE * 2)

u16 *cv1k_vram;
int blitter_firmware = -1;
u64 blitter_busy_cycles;
u64 (*blitter_clock)(void);
u64 blitter_draw_ticks;
u64 blitter_band_ticks[BLIT_MAX_BANDS];
int blitter_bands = 1;
void (*blitter_start)(int bands);
void (*blitter_wait)(void);
u64 blitter_jobs, blitter_jobs_one_band;
u64 blitter_pixels;              /* destination pixels of all draws (after the clip), timing pass */
int blitter_job_win;             /* test 63: the last kicked job writes (or may write) the shown window */
u64 blitter_jobs_win;            /* jobs that do */

static u16 *vram_alloc;
static int pending;               /* a job was handed to blitter_start and not yet waited for */

/* the list being drawn: its words, as the timing pass read them at kick time */
static u16 *job_w;
static u32 job_n, job_cap;
static u32 job_clip_x, job_clip_y;
static int job_bands;
static u32 gfx_addr, scroll_x, scroll_y, clip_x, clip_y, clip_x_sh, clip_y_sh;
static int busy;
static s64 delay_ns;
static int idle_op_bytes;
static u8 *firmware;
static u32 firmware_pos;
static u8 firmware_port;

typedef struct {
	int min_x, max_x, min_y, max_y;
} rect_t;

typedef struct {
	u8 r, g, b;
} clr_t;

static u8 colrtable[0x20][0x40];
static u8 colrtable_rev[0x20][0x40];
static u8 colrtable_add[0x20][0x20];

#define PEN_TO_CLR(p, c) ((c).r = (u8)(((p) >> 10) & 31), (c).g = (u8)(((p) >> 5) & 31), (c).b = (u8)((p) & 31))
#define CLR_TO_PEN(c) (((u32)(c).r << 10) | ((u32)(c).g << 5) | (u32)(c).b)
#define CLR_MUL(s, c1) ((s).r = colrtable[(s).r][(c1).r], (s).g = colrtable[(s).g][(c1).g], (s).b = colrtable[(s).b][(c1).b])
#define CLR_MUL_FIXED(d, v, c0) ((d).r = colrtable[v][(c0).r], (d).g = colrtable[v][(c0).g], (d).b = colrtable[v][(c0).b])
#define CLR_MUL_FIXED_REV(d, v, c0) ((d).r = colrtable_rev[v][(c0).r], (d).g = colrtable_rev[v][(c0).g], (d).b = colrtable_rev[v][(c0).b])
#define CLR_SQUARE(d, c1) ((d).r = colrtable[(c1).r][(c1).r], (d).g = colrtable[(c1).g][(c1).g], (d).b = colrtable[(c1).b][(c1).b])
#define CLR_MUL_3PARAM(d, c1, c2) ((d).r = colrtable[(c2).r][(c1).r], (d).g = colrtable[(c2).g][(c1).g], (d).b = colrtable[(c2).b][(c1).b])
#define CLR_MUL_REV_SQUARE(d, c1) ((d).r = colrtable_rev[(c1).r][(c1).r], (d).g = colrtable_rev[(c1).g][(c1).g], (d).b = colrtable_rev[(c1).b][(c1).b])
#define CLR_MUL_REV_3PARAM(d, c1, c2) ((d).r = colrtable_rev[(c2).r][(c1).r], (d).g = colrtable_rev[(c2).g][(c1).g], (d).b = colrtable_rev[(c2).b][(c1).b])
#define CLR_ADD(d, c0, c1) ((d).r = colrtable_add[(c0).r][(c1).r], (d).g = colrtable_add[(c0).g][(c1).g], (d).b = colrtable_add[(c0).b][(c1).b])
#define CLR_ADD_WITH_MUL_FIXED(d, c0, v, c1) ((d).r = colrtable_add[(c0).r][colrtable[(c1).r][v]], \
	(d).g = colrtable_add[(c0).g][colrtable[(c1).g][v]], (d).b = colrtable_add[(c0).b][colrtable[(c1).b][v]])
#define CLR_ADD_WITH_MUL_3PARAM(d, c0, c1, c2) ((d).r = colrtable_add[(c0).r][colrtable[(c2).r][(c1).r]], \
	(d).g = colrtable_add[(c0).g][colrtable[(c2).g][(c1).g]], (d).b = colrtable_add[(c0).b][colrtable[(c2).b][(c1).b]])
/* MAME add_with_clr_square uses clr0.r for all three channels; kept for identical output */
#define CLR_ADD_WITH_SQUARE(d, c0, c1) ((d).r = colrtable_add[(c0).r][colrtable[(c1).r][(c1).r]], \
	(d).g = colrtable_add[(c0).r][colrtable[(c1).g][(c1).g]], (d).b = colrtable_add[(c0).r][colrtable[(c1).b][(c1).b]])
#define CLR_ADD_WITH_MUL_FIXED_REV(d, c0, v, c1) ((d).r = colrtable_add[(c0).r][colrtable_rev[v][(c1).r]], \
	(d).g = colrtable_add[(c0).g][colrtable_rev[v][(c1).g]], (d).b = colrtable_add[(c0).b][colrtable_rev[v][(c1).b]])
#define CLR_ADD_WITH_MUL_REV_3PARAM(d, c0, c1, c2) ((d).r = colrtable_add[(c0).r][colrtable_rev[(c2).r][(c1).r]], \
	(d).g = colrtable_add[(c0).g][colrtable_rev[(c2).g][(c1).g]], (d).b = colrtable_add[(c0).b][colrtable_rev[(c2).b][(c1).b]])
#define CLR_ADD_WITH_MUL_REV_SQUARE(d, c0, c1) ((d).r = colrtable_add[(c0).r][colrtable_rev[(c1).r][(c1).r]], \
	(d).g = colrtable_add[(c0).g][colrtable_rev[(c1).g][(c1).g]], (d).b = colrtable_add[(c0).b][colrtable_rev[(c1).b][(c1).b]])

#define BLIT_PARAMS const rect_t *clip, u16 *gfx, int src_x, int src_y, const int dst_x_start, \
	const int dst_y_start, int dimx, int dimy, const int flipy, const u8 s_alpha, const u8 d_alpha, const clr_t tint_clr, \
	const int band, const int nbands
typedef void (*blitfn)(BLIT_PARAMS);

#if defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif
#include "blit_funcs.inc"

/* ---- fast draw routines (blitter_fast >= 1; the same pixels as the ones above) --------- */
int blitter_fast;
static int job_fast;              /* blitter_fast when the job was kicked */

typedef struct {
	u32 f[3][32];                 /* source term per channel (tint and the source mode folded in) */
	u32 g[3][32];                 /* destination term per channel */
} fast_t;

#define FAST_PARAMS const rect_t *clip, u16 *gfx, int src_x, int src_y, const int dst_x_start, \
	const int dst_y_start, int dimx, int dimy, const int flipy, const fast_t *t, const int band, const int nbands
typedef void (*fastfn)(FAST_PARAMS);
#if defined(__GNUC__)
#define BRANCHLESS_MASK(m) __asm__("" : "+r"(m))
#else
#define BRANCHLESS_MASK(m) ((void)0)
#endif

#include "blit_fast_list.inc"

/* [variant - 1][kind][flipx][transparent] */
static fastfn const fast_table[3][3][2][2] = {
#define FAST_ROW(v, k) { { fast_f0_tr0_k##k##_v##v, fast_f0_tr1_k##k##_v##v }, \
	{ fast_f1_tr0_k##k##_v##v, fast_f1_tr1_k##k##_v##v } }
	{ FAST_ROW(1, 0), FAST_ROW(1, 1), FAST_ROW(1, 2) },
	{ FAST_ROW(2, 0), FAST_ROW(2, 1), FAST_ROW(2, 2) },
	{ FAST_ROW(3, 0), FAST_ROW(3, 1), FAST_ROW(3, 2) },
#undef FAST_ROW
};

/* the source term F(x) of a separable mode, from the tinted source channel x */
static u32 fast_src_term(int s_mode, int s_alpha, u32 x)
{
	switch (s_mode) {
	case 0: return colrtable[s_alpha][x];
	case 1: return colrtable[x][x];
	case 4: return colrtable_rev[s_alpha][x];
	case 5: return colrtable_rev[x][x];
	default: return x;            /* 3, 7 */
	}
}

static u32 fast_dst_term(int d_mode, int d_alpha, u32 x)
{
	switch (d_mode) {
	case 0: return colrtable[d_alpha][x];
	case 4: return colrtable_rev[d_alpha][x];
	case 6: return colrtable_rev[x][x];
	default: return x;            /* 3, 7 */
	}
}

/* modes whose result is min(F(src) + G(dst), 31) per channel, F and G as above */
static int fast_separable(int s_mode, int d_mode)
{
	return s_mode != 2 && s_mode != 6 && (d_mode == 0 || d_mode == 3 || d_mode == 4 || d_mode == 6 || d_mode == 7);
}

/* per band: the tables of the last op, kept while the next op has the same parameters */
static struct {
	fast_t t;
	u32 key_f, key_g;             /* 0: none */
} fast_cache[BLIT_MAX_BANDS];

static const fast_t *fast_tables(int band, int kind, int s_mode, int d_mode, int s_alpha, int d_alpha, clr_t tint, int tinted)
{
	static const int lane[2][3] = { { 10, 5, 0 }, { 12, 6, 0 } };   /* kind 1: pen position; 2: lanes */
	const u8 tc[3] = { tint.r, tint.g, tint.b };
	const u32 key_f = 1u << 31 | (u32)kind << 29 | (u32)(tinted ? 1 : 0) << 28 | (u32)s_mode << 25 |
		(u32)s_alpha << 18 | (u32)tint.r << 12 | (u32)tint.g << 6 | tint.b;
	const u32 key_g = 1u << 31 | (u32)d_mode << 5 | (u32)d_alpha;
	fast_t *t = &fast_cache[band].t;

	if (fast_cache[band].key_f != key_f) {
		for (int c = 0; c < 3; c++)
			for (u32 x = 0; x < 32; x++) {
				u32 v = tinted ? colrtable[x][tc[c]] : x;
				if (kind == 2)
					v = fast_src_term(s_mode, s_alpha, v);
				t->f[c][x] = v << lane[kind == 2][c];
			}
		fast_cache[band].key_f = key_f;
	}
	if (kind == 2 && fast_cache[band].key_g != key_g) {
		for (int c = 0; c < 3; c++)
			for (u32 x = 0; x < 32; x++)
				t->g[c][x] = fast_dst_term(d_mode, d_alpha, x) << lane[1][c];
		fast_cache[band].key_g = key_g;
	}
	return t;
}

/* ---- timing model (MAME cv1k_v.cpp) --------------------------------------------------- */
/* Goal 16 experiments (set by the PC host; defaults = MAME 0.289): blitx_scale multiplies the
 * busy time; blitx_noclip 1 = a partly clipped draw costs its full size, 2 = also a draw
 * entirely outside the clip; blitx_bus_cyc = CPU cycles lost per 64-byte chunk of the list
 * the blitter fetches (BREQ/BACK, buffi), owed by the CPU's next bus accesses (pcb.c). */
double blitx_scale = 1.0;
int blitx_noclip;
u32 blitx_bus_cyc;
u32 blitx_bus_upl_cyc = ~0u;   /* per 64 bytes of upload ops (~0u: same as blitx_bus_cyc) */
u32 blitx_upl_gap_ns;          /* blitter busy time per 64 upload bytes on top of MAME's */
static u32 upload_bytes;       /* upload op bytes in the list being timed */
#define VRAM_CLK_NS 13
#define SRAM_CLK_NS 20
#define H_LINE_PERIOD_NS 63600
#define H_LINE_DURATION_NS 2160
#define DRAW_OP_BYTES 20
#define CLIP_OP_BYTES 2
#define CLIP_MARGIN 32
#define CHUNK_BYTES 64
#define CHUNK_INTERVAL_NS 700

/* Timing pass: reads the list from RAM and appends every word to the job. */
static inline u16 list_word(u32 *addr)
{
	u16 v = BE16(cv1k_ram + ((*addr & (RAM_SIZE - 1)) & ~1u));
	*addr += 2;
	if (UNLIKELY(job_n == job_cap)) {
		job_cap = job_cap ? job_cap * 2 : 65536;
		job_w = realloc(job_w, job_cap * sizeof(u16));
		if (!job_w)
			rt_fatal("blitter: out of memory for the list copy");
	}
	job_w[job_n++] = v;
	return v;
}

/* ---- band hazards: VRAM rectangles (inclusive) the list writes and reads ---------------- */
typedef struct {
	int x0, y0, x1, y1;
} box_t;

/* Phases: a list is drawn in bands phase by phase, the bands meeting at a barrier
 * between phases. A phase ends before an op that reads a tile (32x32) written
 * earlier in the phase, or writes a tile read earlier in it, so no band can read a
 * pixel before or after another band writes it out of list order. In the attract
 * run 7025 of 17450 lists need more than one phase (at most 4): the game draws an
 * effect into VRAM at x 987-1400 and copies it into the frame row by row. */
#define HZ_TILE 5
#define HZ_TX (VRAM_W >> HZ_TILE)
#define HZ_TY (VRAM_H >> HZ_TILE)
#define HZ_MAX_PHASES 64
static u32 hz_w[HZ_TY][HZ_TX / 32], hz_r[HZ_TY][HZ_TX / 32]; /* this phase's tiles */
static int hz_bad;                /* the list is drawn as one band, one phase */
static u32 ph_start[HZ_MAX_PHASES];
static rect_t ph_clip[HZ_MAX_PHASES];
static int ph_n;
u64 blitter_phases;               /* phases beyond the first, all lists */
u64 blitter_one_band_why[2];      /* 0 = an upload spills into the next row, 1 = an op
                                   * reads a tile it writes or more than HZ_MAX_PHASES */

static void set_clip(rect_t *r, int window);

static void hz_reset(void)
{
	memset(hz_w, 0, sizeof(hz_w));
	memset(hz_r, 0, sizeof(hz_r));
	hz_bad = 0;
	ph_n = 1;
	ph_start[0] = 0;
	set_clip(&ph_clip[0], 1);
}

/* clamps to VRAM; the caller makes sure x0 <= x1 and y0 <= y1 */
static void hz_clamp(box_t *b)
{
	if (b->x0 < 0) b->x0 = 0;
	if (b->y0 < 0) b->y0 = 0;
	if (b->x1 > VRAM_W - 1) b->x1 = VRAM_W - 1;
	if (b->y1 > VRAM_H - 1) b->y1 = VRAM_H - 1;
}

static void hz_mark(u32 map[HZ_TY][HZ_TX / 32], box_t b)
{
	hz_clamp(&b);
	for (int ty = b.y0 >> HZ_TILE; ty <= b.y1 >> HZ_TILE; ty++)
		for (int tx = b.x0 >> HZ_TILE; tx <= b.x1 >> HZ_TILE; tx++)
			map[ty][tx >> 5] |= 1u << (tx & 31);
}

static int hz_marked(u32 map[HZ_TY][HZ_TX / 32], box_t b)
{
	hz_clamp(&b);
	for (int ty = b.y0 >> HZ_TILE; ty <= b.y1 >> HZ_TILE; ty++)
		for (int tx = b.x0 >> HZ_TILE; tx <= b.x1 >> HZ_TILE; tx++)
			if (map[ty][tx >> 5] & (1u << (tx & 31)))
				return 1;
	return 0;
}

static int hz_tiles_meet(box_t a, box_t b)
{
	hz_clamp(&a);
	hz_clamp(&b);
	return (a.x0 >> HZ_TILE) <= (b.x1 >> HZ_TILE) && (b.x0 >> HZ_TILE) <= (a.x1 >> HZ_TILE) &&
	       (a.y0 >> HZ_TILE) <= (b.y1 >> HZ_TILE) && (b.y0 >> HZ_TILE) <= (a.y1 >> HZ_TILE);
}

/* test 63: the shown window (320x240 at the scroll the job was kicked with, wrapping as the
 * screen's columns and rows do) and whether box b (inside VRAM) meets it */
static u32 win_x, win_y;

static int span_meets(int a0, int a1, int w0, int len, int size)
{
	const int w1 = w0 + len - 1;
	if (w1 < size)
		return a0 <= w1 && w0 <= a1;
	return a1 >= w0 || a0 <= w1 - size;   /* [w0, size - 1] and [0, w1 - size] */
}

static void win_check(const box_t *b)
{
	if (!blitter_job_win && span_meets(b->x0, b->x1, (int)win_x, 320, VRAM_W) &&
	    span_meets(b->y0, b->y1, (int)win_y, 240, VRAM_H))
		blitter_job_win = 1;
}

/* the op at job word `at` (clip in effect: clip) reads rs (NULL: nothing) and writes ws */
static void hz_op(u32 at, const rect_t *clip, const box_t *rs, const box_t *ws)
{
	if (hz_bad)
		return;
	if (rs && hz_tiles_meet(*rs, *ws)) {
		if (blitter_one_band_why[1]++ < 3)
			rt_log("blitter: one band (frame %llu), an op reads %d,%d-%d,%d and writes %d,%d-%d,%d\n",
				(unsigned long long)frame_count, rs->x0, rs->y0, rs->x1, rs->y1, ws->x0, ws->y0, ws->x1, ws->y1);
		hz_bad = 1;
		return;
	}
	if ((rs && hz_marked(hz_w, *rs)) || hz_marked(hz_r, *ws)) {
		if (ph_n == HZ_MAX_PHASES) {
			if (blitter_one_band_why[1]++ < 3)
				rt_log("blitter: one band (frame %llu), more than %d phases\n",
					(unsigned long long)frame_count, HZ_MAX_PHASES);
			hz_bad = 1;
			return;
		}
		ph_start[ph_n] = at;
		ph_clip[ph_n] = *clip;
		ph_n++;
		memset(hz_w, 0, sizeof(hz_w));
		memset(hz_r, 0, sizeof(hz_r));
	}
	hz_mark(hz_w, *ws);
	if (rs)
		hz_mark(hz_r, *rs);
}

/* one draw, with draw_pass's clip (set_clip, then clamped to VRAM as do_draw does) */
static void hz_draw(u32 at, const rect_t *clip, u16 src_x, u16 src_y, u16 dst_x, u16 dst_y, u16 w, u16 h)
{
	const int x = (s16)dst_x, y = (s16)dst_y;
	const int dimx = (w & 0x1fff) + 1, dimy = (h & 0x0fff) + 1;
	int cx0 = clip->min_x < 0 ? 0 : clip->min_x, cy0 = clip->min_y < 0 ? 0 : clip->min_y;
	int cx1 = clip->max_x > VRAM_W - 1 ? VRAM_W - 1 : clip->max_x;
	int cy1 = clip->max_y > VRAM_H - 1 ? VRAM_H - 1 : clip->max_y;
	box_t d, s;

	d.x0 = x > cx0 ? x : cx0;
	d.y0 = y > cy0 ? y : cy0;
	d.x1 = x + dimx - 1 < cx1 ? x + dimx - 1 : cx1;
	d.y1 = y + dimy - 1 < cy1 ? y + dimy - 1 : cy1;
	if (d.x0 > d.x1 || d.y0 > d.y1)
		return;                   /* fully clipped: reads and writes nothing */
	if (rt_vsnap_on)              /* test 69: the blocks' pixels to the save states that lack them */
		rt_vram_cow(d.x0, d.y0, d.x1, d.y1);
	win_check(&d);

	s.x0 = src_x & 0x1fff;
	s.x1 = s.x0 + dimx - 1;       /* past 0x1fff the draw functions draw nothing */
	s.y0 = src_y & 0x0fff;
	s.y1 = s.y0 + dimy - 1;
	if (s.y1 > VRAM_H - 1) {      /* source rows wrap: all of them */
		s.y0 = 0;
		s.y1 = VRAM_H - 1;
	}
	hz_op(at, clip, &s, &d);
}

static void hz_upload(u32 at, const rect_t *clip, u32 dx, u32 dy, u32 dimx, u32 dimy)
{
	box_t u;
	if (rt_vsnap_on) {            /* test 69: as hz_draw; a spill writes whole rows (the guard rows are never read) */
		const u32 last = dy + dimy - 1 + (dx + dimx - 1) / VRAM_W;
		const int y1 = last > VRAM_H - 1 ? VRAM_H - 1 : (int)last;
		if (dy <= VRAM_H - 1) {
			if (dx + dimx > VRAM_W)
				rt_vram_cow(0, (int)dy, VRAM_W - 1, y1);
			else
				rt_vram_cow((int)dx, (int)dy, (int)(dx + dimx - 1), y1);
		}
	}
	if (dx + dimx > VRAM_W) {
		if (!hz_bad)
			blitter_one_band_why[0]++;
		hz_bad = 1;               /* rows spill into the next row: not split by row */
		blitter_job_win = 1;      /* (and taken as writing the window) */
		return;
	}
	u.x0 = (int)dx;
	u.x1 = (int)(dx + dimx - 1);
	u.y0 = (int)dy;
	u.y1 = (int)(dy + dimy - 1);
	{
		box_t w = u;              /* rows past VRAM's end go to the guard rows, never shown */
		if (w.y1 > VRAM_H - 1)
			w.y1 = VRAM_H - 1;
		win_check(&w);
	}
	hz_op(at, clip, NULL, &u);
}

static void idle_blitter(int bytes)
{
	idle_op_bytes += bytes;
	if (idle_op_bytes >= CHUNK_BYTES) {
		idle_op_bytes -= CHUNK_BYTES;
		delay_ns += CHUNK_INTERVAL_NS;
	}
}

static int vram_accesses(u16 start_x, u16 start_y, u16 dimx, u16 dimy)
{
	int x_rows = 0, rows = 0;
	for (int x = dimx; x > 0; x -= 32) {
		x_rows++;
		if (((start_x & 31) + (x < 32 ? x : 32)) > 32)
			x_rows++;
	}
	for (int y = dimy; y > 0; y -= 32) {
		rows += x_rows;
		if (((start_y & 31) + (y < 32 ? y : 32)) > 32)
			rows += x_rows;
	}
	return rows;
}

static void set_clip(rect_t *r, int window)
{
	if (window) {
		r->min_x = (int)clip_x_sh - CLIP_MARGIN;
		r->max_x = (int)clip_x_sh + 320 - 1 + CLIP_MARGIN;
		r->min_y = (int)clip_y_sh - CLIP_MARGIN;
		r->max_y = (int)clip_y_sh + 240 - 1 + CLIP_MARGIN;
	} else {
		r->min_x = 0;
		r->max_x = VRAM_W - 1;
		r->min_y = 0;
		r->max_y = VRAM_H - 1;
	}
}

static void timing_draw(u32 *addr, const rect_t *clip)
{
	const u32 at = job_n;
	list_word(addr);
	list_word(addr);
	u16 src_x = list_word(addr);
	u16 src_y = list_word(addr);
	u16 dst_x_start = list_word(addr);
	u16 dst_y_start = list_word(addr);
	u16 w = list_word(addr), h = list_word(addr);
	u16 src_dimx = (u16)((w & 0x1fff) + 1);
	u16 src_dimy = (u16)((h & 0x0fff) + 1);
	list_word(addr);
	list_word(addr);
	hz_draw(at, clip, src_x, src_y, dst_x_start, dst_y_start, w, h);

	u16 dst_x_end = (u16)(dst_x_start + src_dimx - 1);
	u16 dst_y_end = (u16)(dst_y_start + src_dimy - 1);
	if (UNLIKELY(blitx_noclip)) {     /* goal 16 experiment: a draw costs its unclipped size */
		int outside = dst_x_start > clip->max_x || dst_x_end < clip->min_x ||
			dst_y_start > clip->max_y || dst_y_end < clip->min_y;
		if (!outside || blitx_noclip >= 2) {
			idle_op_bytes = 0;
			int sr = vram_accesses(src_x, src_y, src_dimx, src_dimy);
			int dr = vram_accesses(dst_x_start, dst_y_start, src_dimx, src_dimy);
			u16 x0 = (u16)(dst_x_start - (dst_x_start & 3));
			u16 x1 = (u16)(dst_x_end + ((4 - ((dst_x_end + 1) & 3)) & 3));
			u32 clk = (u32)src_dimx * src_dimy / 4 + (u32)(x1 - x0 + 1) * src_dimy / 2 + sr * 6 + dr * (20 + 11) + 12;
			delay_ns += (s64)clk * VRAM_CLK_NS;
			blitter_pixels += (u64)src_dimx * src_dimy;
			return;
		}
	}
	if (dst_x_start > clip->max_x || dst_x_end < clip->min_x || dst_y_start > clip->max_y || dst_y_end < clip->min_y) {
		idle_blitter(DRAW_OP_BYTES);
		return;
	}
	if (dst_x_start < (u16)clip->min_x) dst_x_start = (u16)clip->min_x;
	if (dst_y_start < (u16)clip->min_y) dst_y_start = (u16)clip->min_y;
	if (dst_x_end > (u16)clip->max_x) dst_x_end = (u16)clip->max_x;
	if (dst_y_end > (u16)clip->max_y) dst_y_end = (u16)clip->max_y;
	src_dimx = (u16)(dst_x_end - dst_x_start + 1);
	src_dimy = (u16)(dst_y_end - dst_y_start + 1);

	idle_op_bytes = 0;
	blitter_pixels += (u64)src_dimx * src_dimy;
	int src_rows = vram_accesses(src_x, src_y, src_dimx, src_dimy);
	int dst_rows = vram_accesses(dst_x_start, dst_y_start, src_dimx, src_dimy);

	dst_x_start = (u16)(dst_x_start - (dst_x_start & 3));
	dst_x_end = (u16)(dst_x_end + ((4 - ((dst_x_end + 1) & 3)) & 3));
	u16 dst_dimx = (u16)(dst_x_end - dst_x_start + 1);
	u16 dst_dimy = (u16)(dst_y_end - dst_y_start + 1);

	u32 clk = (u32)src_dimx * src_dimy / 4 + (u32)dst_dimx * dst_dimy / 2 + src_rows * 6 + dst_rows * (20 + 11) + 12;
	delay_ns += (s64)clk * VRAM_CLK_NS;
}

static void timing_upload(u32 *addr, const rect_t *clip)
{
	const u32 at = job_n;
	for (int i = 0; i < 4; i++)
		list_word(addr);
	u32 dx = list_word(addr) & 0x1fff;
	u32 dy = list_word(addr) & 0x0fff;
	u32 dimx = (list_word(addr) & 0x1fff) + 1;
	u32 dimy = (list_word(addr) & 0x0fff) + 1;
	for (u32 i = dimx * dimy; i > 0; i--)   /* the pixels, into the job's copy */
		list_word(addr);
	hz_upload(at, clip, dx, dy, dimx, dimy);
	delay_ns += (s64)((16 + dimx * dimy * 2) / 4) * SRAM_CLK_NS;
	if (UNLIKELY(blitx_upl_gap_ns))   /* goal 16 experiment: buffi's BREQ/BACK gap per 64 bytes */
		delay_ns += (s64)((16 + dimx * dimy * 2) / 64) * blitx_upl_gap_ns;
	upload_bytes += 16 + dimx * dimy * 2;
	idle_op_bytes = 0;
}

static void timing_pass(u32 addr)
{
	rect_t clip;
	set_clip(&clip, 1);
	for (;;) {
		u16 op = list_word(&addr);
		switch (op & 0xf000) {
		case 0x0000:
		case 0xf000:
			return;
		case 0xc000:
			set_clip(&clip, list_word(&addr) != 0);
			idle_blitter(CLIP_OP_BYTES);
			break;
		case 0x2000:
			addr -= 2;
			job_n--;      /* the op word is read again below */
			timing_upload(&addr, &clip);
			break;
		case 0x1000:
			addr -= 2;
			job_n--;      /* the op word is read again below */
			timing_draw(&addr, &clip);
			break;
		default:
			rt_log("blitter: op %04X\n", op);
			return;
		}
	}
}

/* ---- drawing (from the job's copy of the list; may run on host worker threads) -------- */
static inline u16 job_word(u32 *i)
{
	return job_w[(*i)++];
}

static void do_upload(u32 *i, int band, int nbands)
{
	*i += 4;
	u32 dx = job_word(i) & 0x1fff;
	u32 dy = job_word(i) & 0x0fff;
	u32 dimx = (job_word(i) & 0x1fff) + 1;
	u32 dimy = (job_word(i) & 0x0fff) + 1;
	const u16 *src = job_w + *i;
	*i += dimx * dimy;
	for (u32 y = 0; y < dimy; y++, src += dimx) {
		if (nbands > 1 && (dy + y) % (u32)nbands != (u32)band)
			continue;             /* (uploads that spill into the next row are one band) */
		/* pos = MAME's linear index (rows 0x2000 wide, a spill continues on the next row,
		 * the 2 rows past the end are the guard); stored at its row and column */
		u32 pos = (dy + y) * VRAM_W + dx;
		for (u32 x = 0; x < dimx; x++, pos++)
			if (pos < VRAM_W * (VRAM_H + 2))
				cv1k_vram[(pos / VRAM_W) * CV1K_VRAM_STRIDE + pos % VRAM_W] = src[x];
	}
}

#ifdef BLIT_PROFILE
/* Development profile (single-threaded hosts only): per draw variant, ops, pixels and
 * time, in two buckets: emulated frames BLIT_PROF_A..BLIT_PROF_B (env) and the rest.
 * Printed to stderr at exit. */
#include <stdio.h>
#include <time.h>
typedef struct {
	u64 ops, px, ns, alpha_px[32];
} prof_t;
static prof_t prof[2][1024];
static u64 prof_frame_ns[2], prof_frames[2], prof_last_frame = ~0ull;
static u64 prof_a = ~0ull, prof_b;
static u64 prof_now(void)
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}
static u64 prof_px_frame[2][64];  /* frames by blitter_pixels this frame, 25k steps */
static u64 prof_px_seen, prof_px_last = ~0ull;
static int prof_px_k;
static void prof_px_tick(int k)
{
	if (frame_count != prof_px_last) {
		if (prof_px_last != ~0ull) {
			u64 b = (blitter_pixels - prof_px_seen) / 25000;
			prof_px_frame[prof_px_k][b > 63 ? 63 : b]++;
		}
		prof_px_seen = blitter_pixels;
		prof_px_last = frame_count;
		prof_px_k = k;
	}
}
static void prof_print(void)
{
	static const char *const bn[2] = { "rest", "window" };
	for (int k = 1; k >= 0; k--) {
		fprintf(stderr, "blitprof px/frame %s:", bn[k]);
		for (int b = 0; b < 64; b++)
			if (prof_px_frame[k][b])
				fprintf(stderr, " %dk:%llu", b * 25, (unsigned long long)prof_px_frame[k][b]);
		fprintf(stderr, "\n");
	}
	for (int k = 1; k >= 0; k--) {
		fprintf(stderr, "blitprof %s: %llu frames, draw %.3f ms/frame\n", bn[k], (unsigned long long)prof_frames[k],
			prof_frames[k] ? prof_frame_ns[k] / 1e6 / (double)prof_frames[k] : 0.0);
		for (int v = 0; v < 1024; v++) {
			const prof_t *p = &prof[k][v];
			if (!p->ops)
				continue;
			int best = 0;
			for (int a = 1; a < 32; a++)
				if (p->alpha_px[a] > p->alpha_px[best])
					best = a;
			fprintf(stderr, "blitprof %s f%d ti%d tr%d %s s%d d%d: ops %.1f/frame px %.0f/frame ns %.2f/px "
				"ms %.3f/frame (salpha %d most)\n", bn[k], v >> 9 & 1, v >> 8 & 1, v >> 7 & 1,
				(v >> 6 & 1) ? "blend" : "noblend", v & 7, v >> 3 & 7,
				p->ops / (double)prof_frames[k], p->px / (double)prof_frames[k],
				p->px ? p->ns / (double)p->px : 0.0, p->ns / 1e6 / (double)prof_frames[k], best);
		}
	}
}
static void prof_op(int flipx, int tinted, int trans, int blend, int s_mode, int d_mode, int s_alpha, int d_alpha,
	const rect_t *clip, int x, int y, int dimx, int dimy, u64 ns)
{
	(void)d_alpha;
	if (prof_a == ~0ull) {
		const char *a = getenv("BLIT_PROF_A"), *b = getenv("BLIT_PROF_B");
		prof_a = a ? strtoull(a, NULL, 0) : 0;
		prof_b = b ? strtoull(b, NULL, 0) : 0;
		atexit(prof_print);
	}
	const int k = frame_count >= prof_a && frame_count <= prof_b;
	prof_px_tick(k);
	if (frame_count != prof_last_frame) {
		prof_last_frame = frame_count;
		prof_frames[k]++;
	}
	int x0 = x > clip->min_x ? x : clip->min_x, x1 = x + dimx - 1 < clip->max_x ? x + dimx - 1 : clip->max_x;
	int y0 = y > clip->min_y ? y : clip->min_y, y1 = y + dimy - 1 < clip->max_y ? y + dimy - 1 : clip->max_y;
	u64 px = x1 >= x0 && y1 >= y0 ? (u64)(x1 - x0 + 1) * (u64)(y1 - y0 + 1) : 0;
	const int v = flipx << 9 | tinted << 8 | trans << 7 | blend << 6 | (blend ? d_mode << 3 | s_mode : 0);
	prof_t *p = &prof[k][v];
	p->ops++;
	p->px += px;
	p->ns += ns;
	p->alpha_px[s_alpha & 31] += px;
	prof_frame_ns[k] += ns;
}
#endif

#ifdef BLIT_CENSUS
#include "blit_census.inc"
#endif

static void do_draw(u32 *i, const rect_t *clip_in, int band, int nbands)
{
	const u16 attr = job_word(i);
	const u16 alpha = job_word(i);
	u16 src_x = job_word(i);
	u16 src_y = job_word(i);
	const u16 dst_x = job_word(i);
	const u16 dst_y = job_word(i);
	const u16 w = job_word(i);
	const u16 h = job_word(i);
	const u16 tint_r = job_word(i);
	const u16 tint_gb = job_word(i);

	const int d_mode = attr & 7, s_mode = (attr >> 4) & 7;
	const int trans = (attr >> 8) & 1;
	int blend = (attr >> 9) & 1;
	const int flipy = (attr >> 10) & 1, flipx = (attr >> 11) & 1;
	const u8 d_alpha = (u8)((alpha & 0xff) >> 3), s_alpha = (u8)(((alpha >> 8) & 0xff) >> 3);
	clr_t tint;
	int tinted;
	rect_t clip = *clip_in;

	src_x &= 0x1fff;
	src_y &= 0x0fff;
	const int x = (s16)dst_x, y = (s16)dst_y;
	const int dimx = (w & 0x1fff) + 1, dimy = (h & 0x0fff) + 1;

	tint.r = (u8)((tint_r & 0xff) >> 2);
	tint.g = (u8)(((tint_gb >> 8) & 0xff) >> 2);
	tint.b = (u8)((tint_gb & 0xff) >> 2);
	tinted = tint.r != 0x20 || tint.g != 0x20 || tint.b != 0x20;
	if (s_mode == 0 && s_alpha == 0x1f && d_mode == 4 && d_alpha == 0x1f)
		blend = 0;

	/* keep writes inside VRAM (MAME's bitmap is linear; games never clip outside it) */
	if (clip.min_x < 0) clip.min_x = 0;
	if (clip.min_y < 0) clip.min_y = 0;
	if (clip.max_x > VRAM_W - 1) clip.max_x = VRAM_W - 1;
	if (clip.max_y > VRAM_H - 1) clip.max_y = VRAM_H - 1;

#ifdef BLIT_PROFILE
	const u64 prof_t0 = prof_now();
#endif
	const int kind = !blend ? (tinted ? 1 : 0) : fast_separable(s_mode, d_mode) ? 2 : -1;
	if (job_fast && kind >= 0) {
		const fast_t *t = kind ? fast_tables(band, kind, s_mode, d_mode, s_alpha, d_alpha, tint, tinted) : NULL;
		fast_table[job_fast - 1][kind][flipx][trans](&clip, cv1k_vram, src_x, src_y, x, y, dimx, dimy, flipy, t,
			band, nbands);
	} else if (!tinted && !blend) {
		blit_simple[flipx][trans](&clip, cv1k_vram, src_x, src_y, x, y, dimx, dimy, flipy, s_alpha, d_alpha, tint,
			band, nbands);
	} else if (!blend)
		blit_plain[flipx][tinted][trans](&clip, cv1k_vram, src_x, src_y, x, y, dimx, dimy, flipy, s_alpha, d_alpha, tint,
			band, nbands);
	else
		blit_table[flipx][tinted][trans][s_mode | (d_mode << 3)](&clip, cv1k_vram, src_x, src_y, x, y, dimx, dimy,
			flipy, s_alpha, d_alpha, tint, band, nbands);
#ifdef BLIT_PROFILE
	prof_op(flipx, tinted, trans, blend, s_mode, d_mode, s_alpha, d_alpha, &clip, x, y, dimx, dimy, prof_now() - prof_t0);
#endif
#ifdef BLIT_CENSUS
	census_op(&clip, src_x, src_y, x, y, dimx, dimy, flipx, flipy, blend);
#endif
}

/* Phase p of the job, band `band` of nbands */
static void draw_phase(int p, int band, int nbands)
{
	rect_t clip = ph_clip[p];
	u32 i = ph_start[p], end = p + 1 < ph_n ? ph_start[p + 1] : job_n;
	while (i < end) {
		u16 op = job_word(&i);
		switch (op & 0xf000) {
		case 0x0000:
		case 0xf000:
			return;
		case 0xc000:
			set_clip(&clip, job_word(&i) != 0);
			break;
		case 0x2000:
			i--;
			do_upload(&i, band, nbands);
			break;
		case 0x1000:
			i--;
			do_draw(&i, &clip, band, nbands);
			break;
		default:
			return;
		}
	}
}

/* the bands meet here between phases (sense by generation; GCC atomics) */
static volatile u32 bar_arrived, bar_gen;

static void band_barrier(int nbands)
{
	u32 g = bar_gen;
	__sync_synchronize();
	if (__sync_add_and_fetch(&bar_arrived, 1) == (u32)nbands) {
		bar_arrived = 0;
		__sync_synchronize();
		bar_gen = g + 1;
	} else {
		while (bar_gen == g)
			;
	}
	__sync_synchronize();
}

/* Band `band` of the current job, all phases: called by blitter_start's workers,
 * which all run at once (bands > 1 wait for each other between phases). */
void blitter_draw_band(int band)
{
	u64 t0 = blitter_clock ? blitter_clock() : 0;
	for (int p = 0; p < ph_n; p++) {
		draw_phase(p, band, job_bands);
		if (p + 1 < ph_n && job_bands > 1)
			band_barrier(job_bands);
	}
	if (blitter_clock)
		blitter_band_ticks[band] += blitter_clock() - t0;
}

void blitter_sync(void)
{
	if (pending) {
		blitter_wait();
		pending = 0;
	}
}

/* ---- registers ------------------------------------------------------------------------- */
static void exec(sh3_t *c)
{
	u64 cycles;
	blitter_sync();               /* the previous list is drawn: VRAM, the copy and the clip are free */
	clip_x_sh = clip_x;
	clip_y_sh = clip_y;
	delay_ns = 0;
	job_n = 0;
	upload_bytes = 0;
	hz_reset();
	win_x = scroll_x & (VRAM_W - 1);
	win_y = scroll_y & (VRAM_H - 1);
	blitter_job_win = 0;
	timing_pass(gfx_addr & 0x1fffffff);
	if (blitter_job_win && blitter_jobs_win++ < 3)
		rt_log("blitter: list %llu (frame %llu) writes the shown window at %u,%u\n",
			(unsigned long long)blitter_jobs, (unsigned long long)frame_count, (unsigned)win_x, (unsigned)win_y);
	delay_ns += (delay_ns / H_LINE_PERIOD_NS) * H_LINE_DURATION_NS;
	busy = 1;
	cycles = ((u64)delay_ns * CPU_HZ + 999999999ull) / 1000000000ull;
	if (UNLIKELY(blitx_scale != 1.0 || rt_clock_scale != 1.0))
		cycles = (u64)((double)cycles * blitx_scale * rt_clock_scale + 0.5);
#if defined(CV1K_PCB) && defined(PCB_PROBE)
	pcb_probe_kick(rt_now(c), cycles, job_n * 2u, upload_bytes);
#endif
#ifdef CV1K_PCB
	if (UNLIKELY(blitx_bus_cyc || blitx_bus_upl_cyc != ~0u)) {
		u32 upl = blitx_bus_upl_cyc == ~0u ? blitx_bus_cyc : blitx_bus_upl_cyc;
		u32 total = job_n * 2u, draw = total - upload_bytes;
		pcbx_stall_left += (u32)((draw + 63u) / 64u) * blitx_bus_cyc + (u32)(upload_bytes / 64u) * upl;
	}
#endif
	blitter_busy_cycles += cycles;
	rt_schedule(c, EV_BLIT, rt_now(c) + cycles);

	job_bands = blitter_bands;
	job_fast = blitter_fast >= 0 && blitter_fast <= 3 ? blitter_fast : 0;
	if (hz_bad) {
		ph_n = 1;                 /* one band, one phase */
		ph_start[0] = 0;
		set_clip(&ph_clip[0], 1);
		if (job_bands > 1)
			blitter_jobs_one_band++;
		job_bands = 1;
	}
	blitter_phases += (u64)(ph_n - 1);
	blitter_jobs++;
	if (blitter_start) {
		pending = 1;
		blitter_start(job_bands);
	} else {
		u64 t0 = blitter_clock ? blitter_clock() : 0;
		for (int p = 0; p < ph_n; p++)    /* phase by phase, as the bands would meet */
			for (int b = 0; b < job_bands; b++)
				draw_phase(p, b, job_bands);
		if (blitter_clock)
			blitter_draw_ticks += blitter_clock() - t0;
	}
}

/* test 69: the registers in a save state (state.h; it is taken and loaded with no job drawing) */
void blitter_state(rt_sbuf *b)
{
	ST(b, gfx_addr);
	ST(b, scroll_x);
	ST(b, scroll_y);
	ST(b, clip_x);
	ST(b, clip_y);
	ST(b, clip_x_sh);
	ST(b, clip_y_sh);
	ST(b, busy);
	ST(b, delay_ns);
	ST(b, idle_op_bytes);
}

void blitter_done(sh3_t *c)
{
	(void)c;
	busy = 0;
}

u32 blitter_read(sh3_t *c, u32 off)
{
	(void)c;
	switch (off) {
	case 0x10: return busy ? 0 : 0x10;
	case 0x24: return 0xffffffffu;
	case 0x28: return 0xffffffffu;
	case 0x50: return in_dsw;
	}
	return 0;
}

#define COMBINE(reg) ((reg) = ((reg) & ~mask) | (v & mask))

void blitter_write(sh3_t *c, u32 off, u32 v, u32 mask)
{
#if defined(CV1K_PCB) && defined(PCB_PROBE)
	if (off < 0x20)
		pcb_probe_tmu(rt_now(c), 0x18000000u + off, v);
#endif
	switch (off) {
	case 0x04:
		if ((mask & 0xff) && (v & 1))
			exec(c);
		break;
	case 0x08: COMBINE(gfx_addr); break;
	case 0x14: COMBINE(scroll_x); break;
	case 0x18: COMBINE(scroll_y); break;
	case 0x40: COMBINE(clip_x); break;
	case 0x44: COMBINE(clip_y); break;
	}
}

void blitter_get_scroll(u32 *sx, u32 *sy)
{
	*sx = scroll_x & (VRAM_W - 1);
	*sy = scroll_y & (VRAM_H - 1);
}

void blitter_screen(u32 *out, int pitch)
{
	blitter_sync();
	for (int y = 0; y < 240; y++) {
		const u16 *row = cv1k_vram + (size_t)((y + scroll_y) & (VRAM_H - 1)) * CV1K_VRAM_STRIDE;
		for (int x = 0; x < 320; x++) {
			u32 p = row[(x + scroll_x) & (VRAM_W - 1)];
			out[y * pitch + x] = ((p >> 10) & 31) << 19 | ((p >> 5) & 31) << 11 | (p & 31) << 3;
		}
	}
}

void blitter_fpga_w(u8 data)
{
	/* 0x08 CE, 0x10 CLK, 0x20 DATA; MAME tells the firmware version by byte checksum */
	if ((data & 0x08) && !(firmware_port & 0x10) && (data & 0x10)) {
		if (firmware_pos < 2323240 && (data & 0x20))
			firmware[firmware_pos >> 3] |= (u8)(1 << (firmware_pos & 7));
		firmware_pos++;
	}
	firmware_port = data;
	if (firmware_pos == 2323240) {
		u8 sum = 0;
		for (u32 i = 0; i < 290405; i++)
			sum += firmware[i];
		blitter_firmware = sum == 0x03 ? 0 : sum == 0x3e ? 1 : sum == 0xf9 ? 2 : sum == 0xe1 ? 3 : -1;
		rt_log("blitter: FPGA configured, firmware %c\n", blitter_firmware < 0 ? '?' : 'A' + blitter_firmware);
		firmware_pos++;
	}
}

void blitter_reset(void)
{
	blitter_sync();
	if (!vram_alloc) {
		vram_alloc = calloc((size_t)CV1K_VRAM_STRIDE * VRAM_H + 2 * VRAM_GUARD + 64, sizeof(u16));
		firmware = calloc(290405, 1);
		if (!vram_alloc || !firmware)
			rt_fatal("blitter: out of memory");
		/* rows start on a 128-byte cache line */
		cv1k_vram = (u16 *)(((uintptr_t)(vram_alloc + VRAM_GUARD) + 127) & ~(uintptr_t)127);
	}
	for (int y = 0; y < 0x40; y++)
		for (int x = 0; x < 0x20; x++) {
			int v = (x * y) / 0x1f;
			colrtable[x][y] = (u8)(v < 0x1f ? v : 0x1f);
			colrtable_rev[x ^ 0x1f][y] = (u8)(v < 0x1f ? v : 0x1f);
		}
	for (int y = 0; y < 0x20; y++)
		for (int x = 0; x < 0x20; x++)
			colrtable_add[x][y] = (u8)(x + y < 0x1f ? x + y : 0x1f);
	busy = 0;
	gfx_addr = scroll_x = scroll_y = clip_x = clip_y = 0;
	firmware_pos = 0;
	firmware_port = 0;
	blitter_firmware = -1;
}

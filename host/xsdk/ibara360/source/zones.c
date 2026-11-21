/* test 137: NO ITEM ZONES (M3 GADGETS). Fill the game's no-item drop zones into the 320 x 240 game texture, like
 * hitbox.c: after the screen hash, read-only on game RAM (replays/states stay in step; the picture's
 * layout/4:3/TATE/scanlines then apply). The drop gate (work/g137/RESEARCH2.md 1a): an enemy killed at (X = +0x24,
 * Y = +0x28, 16.16) drops nothing when |Y - 0x02000000| > 0x00680000 (SIDES) or X <= 0x003FFFFF (BOTTOM).
 * Game-texture column c = X>>16 (0..319), row r = (Y - cam)>>16 (0..239), cam ibara/ARRANGE 0C3929E0, Kuro BL
 * 0C3C4048. SIDES: centre Yc = cam + (r<<16) + 0x8000 outside [0x01980000, 0x02680000]. BOTTOM: c <= 63.
 * Zone pixels are blended at cfg.zones_alpha over the game's own pixel from VRAM (the frame's conversion: the 15-bit
 * ARGB1555 -> 0xAARRGGBB, tex_sx / tex_sy the frame's scroll), with a 1 px solid (opaque) line on each zone's inner
 * edge; overlap blended once. The source is the game's own VRAM pixel: the game texture (gtex[].texels) is write-combined
 * GPU memory and is never read back. (test 137 PART A fix round 1) */
#include <stdint.h>

#include "card.h"
#include "cv1k.h"
#include "settings.h"
#include "zones.h"

#define ZW 320
#define ZH 240
#define CAM_IB 0x0C3929E0u
#define CAM_BLK 0x0C3C4048u

static int zones_ran; /* a run is on (for the once-per-run-start log) */

static inline uint32_t rd32(uint32_t a)
{
	return BE32(RAMP(a));
}

/* test 137 fix round 1: the zone pixel's source is the game's own pixel from VRAM, converted exactly as the frame
 * conversion does it (conv_row in main.c: the 15-bit ARGB1555 -> 0xAARRGGBB, alpha 255); VRAM row = cv1k_vram +
 * ((r + tex_sy) & 0xFFF) * CV1K_VRAM_STRIDE, pixel = row[(c + tex_sx) & 0x1FFF]. */
static inline uint32_t zone_tex(int r, int c, unsigned tex_sx, unsigned tex_sy)
{
	const uint16_t *row = cv1k_vram + (size_t)((r + tex_sy) & 0xFFF) * CV1K_VRAM_STRIDE;
	const uint32_t p = row[(c + tex_sx) & 0x1FFF];
	return 0xFF000000u | ((p & 0x7C00) << 9 | (p & 0x3E0) << 6 | (p & 0x1F) << 3);
}

void zones_run_end(void)
{
	zones_ran = 0;
}

void zones_run_start(uint32_t camera)
{
	if (!cfg.zones_show)
		return;
	if (!zones_ran) {
		zones_ran = 1;
		log_printf(C_YELLOW, "GADGETS: NO ITEM ZONES ON (CAMERA %u PX)", (unsigned)(camera >> 16));
	}
}

/* Blend zone colour over a 0xAARRGGBB texel at alpha a (0..255). */
static inline uint32_t blend(uint32_t src, unsigned zr, unsigned zg, unsigned zb, unsigned a)
{
	unsigned sr = (src >> 16) & 0xFF, sg = (src >> 8) & 0xFF, sb = src & 0xFF;
	unsigned ia = 255 - a;
	return 0xFF000000u | (((zr * a + sr * ia + 127) / 255) << 16) |
	       (((zg * a + sg * ia + 127) / 255) << 8) | ((zb * a + sb * ia + 127) / 255);
}

/* Blend zone colour over the zone pixel's source (the game's own VRAM pixel, converted as the frame does) at alpha a
 * (0..255) into the texture row's slot. The source comes from VRAM (zone_tex), never from the texture read back. */
static void fill_span(volatile uint32_t *row, int x0, int x1, unsigned zr, unsigned zg, unsigned zb,
                      unsigned a, uint32_t solid, int r, unsigned tex_sx, unsigned tex_sy)
{
	int x;
	if (x0 < 0)
		x0 = 0;
	if (x1 >= ZW)
		x1 = ZW - 1;
	for (x = x0; x <= x1; x++) {
		uint32_t c = solid ? solid : blend(zone_tex(r, x, tex_sx, tex_sy), zr, zg, zb, a);
		row[x] = c;
	}
}

int zones_draw(volatile uint32_t *tex, unsigned pitch, int kuro, int draw, unsigned tex_sx, unsigned tex_sy)
{
	const int show = cfg.zones_show;
	const uint32_t cam = rd32(kuro ? CAM_BLK : CAM_IB);
	unsigned zr, zg, zb, a8;
	uint32_t solid;
	int r, r0, r1, have_top, have_bot, have_sides, have_bottom;
	int top_edge = -1, bot_edge = -1; /* inner edge rows of the top/bottom side zones */

	if (!show || !draw)
		return 0;

	zr = (unsigned)(cfg.zones_r & 255);
	zg = (unsigned)(cfg.zones_g & 255);
	zb = (unsigned)(cfg.zones_b & 255);
	a8 = (unsigned)((cfg.zones_alpha < 0 ? 0 : cfg.zones_alpha > 100 ? 100 : cfg.zones_alpha) * 255 / 100);
	solid = 0xFF000000u | (zr << 16) | (zg << 8) | zb;

	have_sides = (show == 1 || show == 3);
	have_bottom = (show == 2 || show == 3);

	/* SIDES: row r in zone when Yc = cam + (r<<16) + 0x8000 outside [0x01980000, 0x02680000] */
	r0 = ZH;
	r1 = -1;
	have_top = have_bot = 0;
	if (have_sides) {
		for (r = 0; r < ZH; r++) {
			int32_t yc = (int32_t)cam + (r << 16) + 0x8000;
			if (yc < 0x01980000 || yc > 0x02680000) {
				if (r < r0)
					r0 = r;
				if (r > r1)
					r1 = r;
			}
		}
		if (r0 <= r1) {
			/* top side zone = rows r0..k-1, bottom side zone = rows m+1..r1 (a gap in the middle is the open band) */
			int gap_start = -1, gap_end = -1;
			for (r = r0; r <= r1; r++) {
				int32_t yc = (int32_t)cam + (r << 16) + 0x8000;
				int in = (yc < 0x01980000 || yc > 0x02680000);
				if (!in) {
					if (gap_start < 0)
						gap_start = r;
					gap_end = r;
				}
			}
			if (gap_start < 0) {
				/* all r0..r1 in zone (open band not on screen): one block */
				/* test 137 fix round 1: the whole screen is one side zone - the inner edge is the row nearest the open
				 * band: if that zone is the low side (centre Y < 0x01980000) the open band is at larger r -> edge = r1; if
				 * the high side (> 0x02680000) -> edge = r0. (Today it was always r1.) */
				const int mid = (r0 + r1) >> 1;
				if ((int32_t)cam + (mid << 16) + 0x8000 < 0x01980000) {
					have_top = 1;
					top_edge = r1; /* the low side: the open band is at larger r */
				} else {
					have_bot = 1;
					bot_edge = r0; /* the high side: the open band is at smaller r */
				}
			} else {
				if (r0 < gap_start) {
					have_top = 1;
					top_edge = gap_start - 1; /* last zone row above the open band */
				}
				if (gap_end < r1) {
					have_bot = 1;
					bot_edge = gap_end + 1; /* first zone row below the open band */
				}
			}
		}
	}

	/* Draw row by row (fills rows: good for write-combined texture). A pixel is in the zone if in a side-zone row or
	 * (have_bottom and column <= 63). Blend once where they overlap. Inner edge rows/column drawn solid. */
	for (r = 0; r < ZH; r++) {
		int32_t yc = (int32_t)cam + (r << 16) + 0x8000;
		int in_side = have_sides && (yc < 0x01980000 || yc > 0x02680000);
		volatile uint32_t *row = tex + (size_t)r * pitch;

		if (!in_side && !have_bottom)
			continue;

		if (in_side && !have_bottom) {
			/* whole row is side zone */
			int edge = (have_top && r == top_edge) || (have_bot && r == bot_edge);
			fill_span(row, 0, ZW - 1, zr, zg, zb, a8, edge ? solid : 0, r, tex_sx, tex_sy);
		} else if (!in_side && have_bottom) {
			/* bottom strip only: columns 0..63 */
			fill_span(row, 0, 62, zr, zg, zb, a8, 0, r, tex_sx, tex_sy);
			row[63] = solid; /* inner edge: last zone column next to open area */
		} else {
			/* overlap: side zone row and bottom strip. Blend once over whole row region: 0..63 is overlap (inner edge
			 * column 63 solid when not a side-edge row; but side-edge row is solid everywhere in side zone - spec states
			 * "a 1 px solid (opaque) line on each zone's INNER edge"; bottom inner edge is column 63; side inner edge is
			 * the edge row - column 63 on a side-edge row is on that edge row, draw solid). 64..319 side only. */
			int edge_row = (have_top && r == top_edge) || (have_bot && r == bot_edge);
			if (edge_row) {
				fill_span(row, 0, ZW - 1, zr, zg, zb, a8, solid, r, tex_sx, tex_sy);
			} else {
				/* 0..62 blended (overlap of side+bottom), 63 bottom inner edge solid, 64..319 side blended */
				fill_span(row, 0, 62, zr, zg, zb, a8, 0, r, tex_sx, tex_sy);
				row[63] = solid;
				fill_span(row, 64, ZW - 1, zr, zg, zb, a8, 0, r, tex_sx, tex_sy);
			}
		}
	}
	return 1;
}

/* test 137: BULLET COLOURS — new module for recolouring U2 bullet pages */
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include "card.h"
#include "xplat.h" /* test 137 B2: tb_read / tb_us (apply's timing) */

#include "cv1k.h"
#include "settings.h"
#include "bulletcol.h"

/* ---- constants from SPEC_B.md ---- */
#define BULLET_PAGES_TOTAL 18
#define BULLET_PAGE_W 256
#define BULLET_PAGE_H 256
#define BULLET_PAGE_PIXELS (BULLET_PAGE_W * BULLET_PAGE_H)
#define BULLET_PAGE_BYTES (BULLET_PAGE_PIXELS * 2) /* u16 ARGB1555 */
#define BULLET_BLOCK_SIZE 0x21000
#define BULLET_PAGE_DATA 2048
#define BULLET_PAGE_TOTAL 2112
#define BULLET_FILE_HEADER 16

/* ibara/ARRANGE page numbers (purple 106-111, red 115-120, blue 121-126)
 * Kuro BL: purple 108-113, red 117-122, blue 123-128 */
static const int ibara_pages[BULLET_PAGES_TOTAL] = {
    106, 107, 108, 109, 110, 111,  /* purple */
    115, 116, 117, 118, 119, 120,  /* red */
    121, 122, 123, 124, 125, 126   /* blue */
};
static const int kuro_pages[BULLET_PAGES_TOTAL] = {
    108, 109, 110, 111, 112, 113,  /* purple */
    117, 118, 119, 120, 121, 122,  /* red */
    123, 124, 125, 126, 127, 128   /* blue */
};

/* PAGE_CACHE addresses (PER GAME, SPEC_B.md verified facts) */
#define IBARA_PAGE_CACHE 0x0C283EB8u
#define KURO_PAGE_CACHE  0x0C29D93Cu

/* VRAM constants from cv1k.h: CV1K_VRAM_STRIDE (may be padded to 0x2040 at build) */
/* VRAM is 8192 x 4096 u16 (x < 0x2000, y < 0x1000) */

/* ---- internal state ---- */
static uint16_t *orig_pages[BULLET_PAGES_TOTAL] = {0};
static int game_pages[BULLET_PAGES_TOTAL];
static int is_kuro = 0;
static int bulletcol_initialized = 0;
static uint16_t *opaque_masks[BULLET_PAGES_TOTAL] = {0};
/* pixel offset in cv1k_nand for each of the 18 pages (file_base + 16) */
static uint32_t page_pixel_offsets[BULLET_PAGES_TOTAL] = {0};
/* test 138 C2/C3: current mode and the purple last applied (0 = ARCADE, 1 = HARDER/ARRANGE) */
static int cur_harder = 0;
static int last_applied_custom = -1;
static uint32_t last_applied_purple = 0xFFFFFFFFu;

static uint32_t effective_purple(int harder)
{
	return harder ? (cfg.bullet_purple_h & 0xFFFFFFu) : (cfg.bullet_purple & 0xFFFFFFu);
}

/* ---- helpers ---- */

/* read BE16 from cv1k_nand */
static inline uint16_t be16_read(const u8 *buf, uint32_t off)
{
    return (uint16_t)((buf[off] << 8) | buf[off + 1]);
}

/* read BE32 from cv1k_nand */
static inline uint32_t be32_read(const u8 *buf, uint32_t off)
{
    return (uint32_t)buf[off] << 24 | (uint32_t)buf[off + 1] << 16 |
           (uint32_t)buf[off + 2] << 8 | (uint32_t)buf[off + 3];
}

/* extract ARGB1555 components */
static inline void argb1555_split(uint16_t p, int *a, int *r, int *g, int *b)
{
    *a = (p >> 15) & 1;
    *r = (p >> 10) & 31;
    *g = (p >> 5) & 31;
    *b = p & 31;
}

/* pack ARGB1555 */
static inline uint16_t argb1555_pack(int a, int r, int g, int b)
{
    return (uint16_t)((a << 15) | (r << 10) | (g << 5) | b);
}

/* scale 5-bit to 8-bit */
static inline int scale5to8(int v5)
{
    return (v5 * 255 + 15) / 31;
}

/* scale 8-bit to 5-bit with rounding */
static inline int scale8to5(int v8)
{
    return (v8 * 31 + 127) / 255;
}

/* recolour rule from SPEC.md PART B 3 / mkpreview.py:
 * per opaque ARGB1555 pixel (channels scaled to 0..255; transparent stays transparent):
 * v = max(r,g,b), s = (v - min) / v (0 if v == 0); s < 0.25: keep; else
 * out = T * v/255 * s + (v,v,v) * (1-s), back to 5-bit with rounding. */
uint16_t bulletcol_recolour_pixel(uint16_t orig, uint8_t target_r, uint8_t target_g, uint8_t target_b)
{
    int a, r5, g5, b5;
    argb1555_split(orig, &a, &r5, &g5, &b5);
    if (!a) {
        return orig; /* transparent stays transparent */
    }
    int r8 = scale5to8(r5);
    int g8 = scale5to8(g5);
    int b8 = scale5to8(b5);
    int v = r8;
    if (g8 > v) v = g8;
    if (b8 > v) v = b8;
    int mn = r8;
    if (g8 < mn) mn = g8;
    if (b8 < mn) mn = b8;
    float s = v > 0 ? (float)(v - mn) / v : 0.0f;
    if (s < 0.25f) {
        return orig; /* keep white cores / outlines */
    }
    float vr = v / 255.0f;
    float sr = s;
    float tr = target_r * vr * sr + v * (1.0f - sr);
    float tg = target_g * vr * sr + v * (1.0f - sr);
    float tb = target_b * vr * sr + v * (1.0f - sr);
    int nr5 = scale8to5((int)(tr + 0.5f));
    int ng5 = scale8to5((int)(tg + 0.5f));
    int nb5 = scale8to5((int)(tb + 0.5f));
    return argb1555_pack(1, nr5, ng5, nb5);
}

/* parse U2 directory to find the 18 bullet pages */
static int parse_u2_directory(int kuro)
{
    extern u8 *cv1k_nand;
    extern u32 cv1k_nand_size;

    if (!cv1k_nand || cv1k_nand_size < 0x840) {
        log_printf(C_RED, "BULLET COLORS: U2 NOT LOADED OR TOO SMALL");
        return 0;
    }

    /* raw byte 4 = u32 BE file count */
    uint32_t file_count = be32_read(cv1k_nand, 4);
    const int *pages = kuro ? kuro_pages : ibara_pages;

    log_printf(C_WHITE, "BULLET COLORS: PARSING U2 (FILE COUNT %u, %s)", file_count, kuro ? "KURO" : "IBARA/ARRANGE");

    /* from raw 0x840: count x {u32 BE block, u32 BE byte offset from that block's start, u32 size, 0} */
    uint32_t dir_off = 0x840;
    int found = 0;
    for (uint32_t f = 0; f < file_count && dir_off + 16 <= cv1k_nand_size; f++, dir_off += 16) {
        uint32_t block = be32_read(cv1k_nand, dir_off);
        uint32_t offset = be32_read(cv1k_nand, dir_off + 4);
        uint32_t size = be32_read(cv1k_nand, dir_off + 8);
        /* uint32_t zero = be32_read(cv1k_nand, dir_off + 12); */

        /* check if this file matches one of our 18 pages */
        int match_idx = -1;
        for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
            if ((int)f == pages[i]) {
                match_idx = i;
                break;
            }
        }
        if (match_idx < 0) {
            continue;
        }

        /* page data starts at block*0x21000 + offset + 16 (16-byte header) */
        uint32_t file_base = block * BULLET_BLOCK_SIZE + offset;
        uint32_t pixel_base = file_base + BULLET_FILE_HEADER;

        /* read header: +0x0C u16 BE w-1, u16 BE h-1 (from file_base) */
        uint16_t w_minus1 = be16_read(cv1k_nand, file_base + 0x0C);
        uint16_t h_minus1 = be16_read(cv1k_nand, file_base + 0x0E);
        int w = w_minus1 + 1;
        int h = h_minus1 + 1;
        if (w != BULLET_PAGE_W || h != BULLET_PAGE_H) {
            log_printf(C_RED, "BULLET COLORS: PAGE %d SIZE %dx%d != 256x256",
                       pages[match_idx], w, h);
            return 0;
        }

        if (pixel_base + BULLET_PAGE_BYTES > cv1k_nand_size) {
            log_printf(C_RED, "BULLET COLORS: PAGE %d OUT OF BOUNDS (BASE %u + %u > %u)",
                       pages[match_idx], pixel_base, BULLET_PAGE_BYTES, cv1k_nand_size);
            return 0;
        }

        /* allocate and copy original pixels (after the 16-byte header) */
        uint16_t *orig = malloc(BULLET_PAGE_BYTES);
        uint16_t *mask = malloc(BULLET_PAGE_BYTES);
        if (!orig || !mask) {
            log_printf(C_RED, "BULLET COLORS: OUT OF MEMORY FOR PAGE %d", pages[match_idx]);
            free(orig);
            free(mask);
            return 0;
        }

        const u8 *src = cv1k_nand + pixel_base;
        for (int p = 0; p < BULLET_PAGE_PIXELS; p++) {
            uint16_t pixel = be16_read(src, p * 2);
            orig[p] = pixel;
            /* store opaque mask (bit 15) */
            mask[p] = pixel & 0x8000;
        }

        orig_pages[match_idx] = orig;
        opaque_masks[match_idx] = mask;
        game_pages[match_idx] = pages[match_idx];
        page_pixel_offsets[match_idx] = pixel_base;
        found++;
    }

    if (found != BULLET_PAGES_TOTAL) {
        log_printf(C_RED, "BULLET COLORS: FOUND %d OF 18 PAGES (FILE COUNT %u)", found, file_count);
        /* free what we allocated */
        for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
            free(orig_pages[i]);
            orig_pages[i] = NULL;
            free(opaque_masks[i]);
            opaque_masks[i] = NULL;
            page_pixel_offsets[i] = 0;
        }
        return 0;
    }

    log_printf(C_GREEN, "BULLET COLORS: 18 PAGES FOUND (FILE COUNT %u)", file_count);
    return 1;
}

/* rewrite the 18 pages in cv1k_nand for the current mode. Returns pixels changed vs originals. */
static unsigned rewrite_nand_pages(int custom)
{
	extern u8 *cv1k_nand;

	uint8_t target_r[3], target_g[3], target_b[3];
	unsigned changed = 0;
	if (custom) {
		bulletcol_get_target(0, cur_harder, &target_r[0], &target_g[0], &target_b[0]); /* purple */
		bulletcol_get_target(1, cur_harder, &target_r[1], &target_g[1], &target_b[1]); /* blue */
		bulletcol_get_target(2, cur_harder, &target_r[2], &target_g[2], &target_b[2]); /* red */
	}

	for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
		const uint16_t *orig = orig_pages[i];
		uint16_t *mask = opaque_masks[i];
		if (!orig || !mask) continue;

		int set = i < 6 ? 0 : i < 12 ? 2 : 1; /* 0=purple, 2=red, 1=blue */

		uint32_t page_base = page_pixel_offsets[i];
		if (!page_base) continue;

		u8 *dst = cv1k_nand + page_base;
		for (int p = 0; p < BULLET_PAGE_PIXELS; p++) {
			uint16_t pixel;
			if (custom && mask[p])
				pixel = bulletcol_recolour_pixel(orig[p], target_r[set], target_g[set], target_b[set]);
			else
				pixel = orig[p];
			if (pixel != orig[p])
				changed++;
			dst[p * 2] = (uint8_t)(pixel >> 8);
			dst[p * 2 + 1] = (uint8_t)(pixel & 0xFF);
		}
	}
	return changed;
}

/* VRAM pass: for each of the 18 pages, read PAGE_CACHE, check VRAM bounds and opaque mask match, write current pixels */
static int vram_pass(void)
{
    extern u16 *cv1k_vram;
    extern u8 *cv1k_ram;

    int updated = 0;
    uint32_t cache_words[BULLET_PAGES_TOTAL];
    int valid_count = 0;

    /* First pass: collect all cache words for the 18 pages */
    uint32_t page_cache_addr = is_kuro ? KURO_PAGE_CACHE : IBARA_PAGE_CACHE;
    for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
        int page_num = game_pages[i];
        if (page_num < 0) {
            cache_words[i] = 0;
            continue;
        }

        /* read PAGE_CACHE word (BE in RAM) using RAMP macro */
        uint32_t cache_addr = page_cache_addr + 4 * page_num;
        uint32_t cache_word = BE32(RAMP(cache_addr));
        cache_words[i] = cache_word;
        if (cache_word) valid_count++;
    }

    /* Check for duplicates: a page whose cache word equals ANY other of the 18 pages' words is skipped (both of them) */
    int skip[BULLET_PAGES_TOTAL] = {0};
    for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
        if (!cache_words[i]) continue;
        for (int j = i + 1; j < BULLET_PAGES_TOTAL; j++) {
            if (cache_words[i] == cache_words[j]) {
                skip[i] = 1;
                skip[j] = 1;
            }
        }
    }

    /* Log duplicate count */
    int dup_count = 0;
    for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
        if (skip[i]) dup_count++;
    }
    if (dup_count) {
        log_printf(C_WHITE, "BULLET COLORS: VRAM %d PAGES SKIPPED (DUPLICATE POSITIONS)", dup_count);
    }

    for (int i = 0; i < BULLET_PAGES_TOTAL; i++) {
        int page_num = game_pages[i];
        if (page_num < 0) continue;

        uint32_t cache_word = cache_words[i];
        if (!cache_word) continue;
        if (skip[i]) continue;

        uint16_t vrams_x = (uint16_t)(cache_word >> 16);
        uint16_t vrams_y = (uint16_t)(cache_word & 0xFFFF);

        /* check VRAM bounds: x + 256 <= 0x2000 and y + 256 <= 0x1000 */
        if (vrams_x + BULLET_PAGE_W > 0x2000u || vrams_y + BULLET_PAGE_H > 0x1000u) {
            continue; /* out of VRAM */
        }

        /* guard: opaque bits must match original mask */
        int mask_ok = 1;
        const uint16_t *mask = opaque_masks[i];
        if (mask) {
            for (int y = 0; y < BULLET_PAGE_H && mask_ok; y++) {
                size_t vram_off = (size_t)(vrams_y + y) * CV1K_VRAM_STRIDE + vrams_x;
                for (int x = 0; x < BULLET_PAGE_W; x++) {
                    uint16_t vram_pixel = cv1k_vram[vram_off + x];
                    if ((vram_pixel & 0x8000) != mask[y * BULLET_PAGE_W + x]) {
                        mask_ok = 0;
                        break;
                    }
                }
            }
        }
        if (!mask_ok) {
            log_printf(C_WHITE, "BULLET COLORS: VRAM PAGE %d OPAQUE MISMATCH SKIPPED", page_num);
            continue;
        }

        /* get current pixels from cv1k_nand (they were already rewritten by rewrite_nand_pages) */
        uint32_t page_base = page_pixel_offsets[i];
        if (!page_base) continue;

        u8 *src = cv1k_nand + page_base;

        /* write to VRAM matching do_upload's format: cv1k_vram[(pos / VRAM_W) * CV1K_VRAM_STRIDE + pos % VRAM_W] */
        for (int y = 0; y < BULLET_PAGE_H; y++) {
            size_t vram_off = (size_t)(vrams_y + y) * CV1K_VRAM_STRIDE + vrams_x;
            for (int x = 0; x < BULLET_PAGE_W; x++) {
                uint16_t pixel = be16_read(src, (y * BULLET_PAGE_W + x) * 2);
                cv1k_vram[vram_off + x] = pixel;
            }
        }
        updated++;
    }

    return updated;
}

/* ---- public API ---- */

int bulletcol_init(int kuro)
{
    is_kuro = kuro;
    const int *pages = kuro ? kuro_pages : ibara_pages;
    memcpy(game_pages, pages, sizeof(game_pages));

    uint64_t t0 = tb_read();

    int ok = parse_u2_directory(kuro);
    bulletcol_initialized = ok;

    uint64_t t1 = tb_read();
    if (ok) {
        log_printf(C_GREEN, "BULLET COLORS: INIT IN %u US", (unsigned)tb_us(t0, t1));
    }

    return ok;
}

/* test 138 C5: apply nand + VRAM for the current mode and log with the pixel-change count */
static void apply_do(void)
{
	int custom = cfg.bullet_colours ? 1 : 0;
	uint64_t t0 = tb_read();
	unsigned changed = rewrite_nand_pages(custom);
	int vram_copies = vram_pass();
	unsigned ms = (unsigned)tb_us(t0, tb_read()) / 1000;

	last_applied_custom = custom;
	last_applied_purple = custom ? effective_purple(cur_harder) : 0xFFFFFFFFu;
	if (custom) {
		log_printf(C_GREEN, "BULLET COLORS: CUSTOM (%s PURPLE) PURPLE %06X BLUE %06X RED %06X, 18 PAGES IN %u MS, %u PIXELS CHANGED, %d VRAM COPIES",
			cur_harder ? "HARDER" : "ARCADE",
			effective_purple(cur_harder), cfg.bullet_blue & 0xFFFFFFu, cfg.bullet_red & 0xFFFFFFu,
			ms, changed, vram_copies);
	} else {
		log_printf(C_GREEN, "BULLET COLORS: DEFAULT, 18 PAGES IN %u MS, %d VRAM COPIES", ms, vram_copies);
	}
}

void bulletcol_apply(void)
{
	if (!bulletcol_initialized) return;
	apply_do();
}

void bulletcol_apply_ms(unsigned ms)
{
	(void)ms;
	if (!bulletcol_initialized) return;
	apply_do();
}

/* test 138 C3: re-apply on a mode change only if CUSTOM and the purple differs from the one last applied */
void bulletcol_set_mode(int harder)
{
	harder = harder ? 1 : 0;
	cur_harder = harder;
	if (!bulletcol_initialized)
		return;
	if (cfg.bullet_colours && effective_purple(harder) != last_applied_purple)
		bulletcol_apply();
}

int bulletcol_vram(void)
{
	if (!bulletcol_initialized) return 0;
	/* test 138 C3: after loads the nand/VRAM must reflect the current mode */
	if (cfg.bullet_colours && effective_purple(cur_harder) != last_applied_purple)
		bulletcol_apply();
	return vram_pass();
}

int bulletcol_ok(void)
{
    return bulletcol_initialized;
}

const uint16_t *bulletcol_original_page(int idx)
{
    if (idx < 0 || idx >= BULLET_PAGES_TOTAL) return NULL;
    return orig_pages[idx];
}

/* test 137 B2: preview needle page (256 x 256 originals) for set (0 purple, 1 blue, 2 red) and needle (0 A, 1 B) */
const uint16_t *bulletcol_needle_page(int set, int needle)
{
	static const int set_base[3] = {0, 12, 6};
	int idx;

	if (!bulletcol_initialized || set < 0 || set > 2 || needle < 0 || needle > 1)
		return NULL;
	idx = set_base[set] + (needle == 0 ? 1 : 0); /* needle A = the page after the set base in both games (test 143) */
	return orig_pages[idx];
}

void bulletcol_get_target(int set, int harder, uint8_t *r, uint8_t *g, uint8_t *b)
{
	uint32_t val = 0;
	switch (set) {
	case 0: val = harder ? cfg.bullet_purple_h : cfg.bullet_purple; break; /* purple, per mode */
	case 1: val = cfg.bullet_blue; break;   /* blue */
	case 2: val = cfg.bullet_red; break;    /* red */
	}
	*r = (val >> 16) & 0xFF;
	*g = (val >> 8) & 0xFF;
	*b = val & 0xFF;
}

/* test 141 D1: single-colour presets, per bullet type (slot 0 purple, 1 blue, 2 red). */
static const struct {
	const char *name;
	uint32_t rgb; /* 0 = slot default (ORIGINAL) */
} bcol_color_presets[] = {
	{"ORIGINAL",      0x000000u},
	{"RED",           0xFF2020u},
	{"ORANGE",        0xFF8000u},
	{"YELLOW",        0xFFFF00u},
	{"GREEN",         0x20FF20u},
	{"CYAN",          0x00FFFFu},
	{"BLUE",          0x2040FFu},
	{"PURPLE",        0xA020FFu},
	{"PINK",          0xFF40C0u},
	{"WHITE",         0xFFFFFFu},
	{"LIGHT RED",     0xFF9090u},
	{"LIGHT ORANGE",  0xFFC080u},
	{"LIGHT YELLOW",  0xFFFFA0u},
	{"LIGHT GREEN",   0xA0FFA0u},
	{"LIGHT CYAN",    0xA0FFFFu},
	{"LIGHT BLUE",    0x90A0FFu},
	{"LIGHT PURPLE",  0xD0A0FFu},
	{"LIGHT PINK",    0xFFA0E0u},
	{"GRAY",          0xA0A0A0u},
};

static uint32_t bcol_slot_default(int slot)
{
	switch (slot) {
	case 1: return 0x4080FFu;
	case 2: return 0xFF4080u;
	default: return 0xA040FFu;
	}
}

int bulletcol_color_preset_n(void)
{
	return (int)(sizeof(bcol_color_presets) / sizeof(bcol_color_presets[0]));
}

const char *bulletcol_color_preset_name(int i)
{
	if (i < 0 || i >= bulletcol_color_preset_n())
		return "CUSTOM";
	return bcol_color_presets[i].name;
}

uint32_t bulletcol_color_preset_rgb(int i, int slot)
{
	if (i < 0 || i >= bulletcol_color_preset_n())
		return bcol_slot_default(slot);
	if (i == 0)
		return bcol_slot_default(slot);
	return bcol_color_presets[i].rgb & 0xFFFFFFu;
}

int bulletcol_color_preset_current(uint32_t val, int slot)
{
	int i;
	val &= 0xFFFFFFu;
	for (i = 0; i < bulletcol_color_preset_n(); i++)
		if ((bulletcol_color_preset_rgb(i, slot) & 0xFFFFFFu) == val)
			return i;
	return -1;
}

void bulletcol_color_preset_apply(int i, int slot, int harder)
{
	uint32_t c = bulletcol_color_preset_rgb(i, slot) & 0xFFFFFFu;

	switch (slot) {
	case 1:
		cfg.bullet_blue = c;
		break;
	case 2:
		cfg.bullet_red = c;
		break;
	default:
		if (harder)
			cfg.bullet_purple_h = c;
		else
			cfg.bullet_purple = c;
		break;
	}
}

/* test 140: preview strip. */
int bulletcol_preview_first_page(void)
{
	if (!bulletcol_initialized)
		return -1;
	/* set 0, needle 0 index, as in bulletcol_needle_page */
	{
		static const int set_base[3] = {0, 12, 6};
		int idx = set_base[0] + 1; /* needle A, both games (test 143) */
		if (idx < 0 || idx >= BULLET_PAGES_TOTAL || !orig_pages[idx])
			return -1;
		return game_pages[idx];
	}
}

int bulletcol_preview_fill(uint32_t *buf, int w, int h, int harder, int on)
{
	int colours[2];
	int ci;

	if (!bulletcol_initialized || !buf || w <= 0 || h <= 0)
		return 0;

	for (ci = 0; ci < w * h; ci++)
		buf[ci] = 0;

	colours[0] = 0;
	colours[1] = harder ? 2 : 1;

	for (ci = 0; ci < 2; ci++) {
		int set = colours[ci];
		int gx = ci == 0 ? 0 : 51;
		int ni;
		for (ni = 0; ni < 2; ni++) {
			int needle = ni;
			int n = ni == 0 ? 24 : 16;
			int u = ni == 0 ? 136 : 240;
			int v = ni == 0 ? 24 : 16;
			int bx = gx + (ni == 0 ? 0 : 27);
			int by = ni == 0 ? 0 : 8;
			const uint16_t *pg = bulletcol_needle_page(set, needle);
			uint8_t tr = 0, tg = 0, tb = 0;
			int py, px;

			if (!pg)
				return 0;
			if (on)
				bulletcol_get_target(set, harder, &tr, &tg, &tb);

			for (py = 0; py < n; py++) {
				for (px = 0; px < n; px++) {
					uint16_t p = pg[(v + py) * 256 + (u + px)];
					uint32_t c = 0;
					if (p & 0x8000) {
						uint16_t rp = p;
						if (on)
							rp = bulletcol_recolour_pixel(p, tr, tg, tb);
						{
							int r5 = (rp >> 10) & 31;
							int g5 = (rp >> 5) & 31;
							int b5 = rp & 31;
							int r8 = (r5 * 255 + 15) / 31;
							int g8 = (g5 * 255 + 15) / 31;
							int b8 = (b5 * 255 + 15) / 31;
							c = 0xFF000000u | ((uint32_t)r8 << 16) | ((uint32_t)g8 << 8) | (uint32_t)b8;
						}
					}
					{
						int sx = bx + py;
						int sy = by + (n - 1 - px);
						if (sx >= 0 && sx < w && sy >= 0 && sy < h)
							buf[sy * w + sx] = c;
					}
				}
			}
		}
	}

	return 4;
}
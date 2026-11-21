/* test 137: BULLET COLOURS — recolouring U2 bullet pages.
 * test 138 C2/C3: per mode (ARCADE purple+blue, HARDER/ARRANGE purple_h+red). */
#ifndef BULLETCOL_H
#define BULLETCOL_H

#include <stdint.h>

/* initialize after ROM load: parse U2 directory, find 18 pages, copy originals.
 * kuro = 1 for Kuro BL, 0 for ibara/ARRANGE. Returns 1 on success, 0 on failure. */
int bulletcol_init(int kuro);

/* test 138 C2: the current bullet-colour mode (0 = ARCADE purple, 1 = HARDER/ARRANGE purple).
 * Re-applies only if CUSTOM and the purple value differs from the one last applied. */
void bulletcol_set_mode(int harder);

/* apply current settings to cv1k_nand (current mode) then update VRAM copies. */
void bulletcol_apply(void);

/* apply current settings to cv1k_nand then update VRAM copies.
 * Caller provides the elapsed ms for the log line (measured with tb_read/tb_us). */
void bulletcol_apply_ms(unsigned ms);

/* ensure VRAM-resident pages match cv1k_nand for the current mode (re-applies nand when the
 * mode's purple differs from the one last applied) and update VRAM copies. Returns VRAM copies. */
int bulletcol_vram(void);

/* whether the feature is available for this game (bulletcol_init succeeded) */
int bulletcol_ok(void);

/* test 140: preview strip dimensions (source pixels; drawn scaled x2) */
#define BULLET_PREVIEW_W 94
#define BULLET_PREVIEW_H 24

/* test 140: fill a w x h A8R8G8B8 buffer with the preview strip for the edited mode.
 * harder: 0 ARCADE, 1 HARDER/ARRANGE. on: recolour when CUSTOM. Returns sprite count (4) or 0. */
int bulletcol_preview_fill(uint32_t *buf, int w, int h, int harder, int on);

/* test 140: game page number of the first preview sprite, or -1 if unavailable. */
int bulletcol_preview_first_page(void);

/* recolour a single pixel from original ARGB1555 to target RGB (0..255 each).
 * Transparent pixels (bit 15 = 0) stay transparent. */
uint16_t bulletcol_recolour_pixel(uint16_t orig, uint8_t target_r, uint8_t target_g, uint8_t target_b);

/* original pixels for a page index (0..17), 256*256 u16 ARGB1555, or NULL. */
const uint16_t *bulletcol_original_page(int idx);

/* the preview's needle page (original 256 x 256 pixels) for a set (0 purple, 1 blue, 2 red) and
 * needle (0 = A 24 x 24 at u 136 v 24, 1 = B 16 x 16 at u 240 v 16). NULL when off. */
const uint16_t *bulletcol_needle_page(int set, int needle);

/* target RGB for a set (0=purple, 1=blue, 2=red) for the given mode (0 ARCADE, 1 HARDER/ARRANGE). */
void bulletcol_get_target(int set, int harder, uint8_t *r, uint8_t *g, uint8_t *b);

/* test 141 D1: single-colour presets, per bullet type. slot: 0 = purple, 1 = blue, 2 = red. */
int bulletcol_color_preset_n(void);
const char *bulletcol_color_preset_name(int i);
uint32_t bulletcol_color_preset_rgb(int i, int slot); /* ORIGINAL = slot's default */
/* index of the preset matching val for slot (0 purple, 1 blue, 2 red), or -1 for CUSTOM */
int bulletcol_color_preset_current(uint32_t val, int slot);
/* write preset i's colour into cfg for slot; purple (slot 0) uses harder for bullet_purple vs bullet_purple_h */
void bulletcol_color_preset_apply(int i, int slot, int harder);

#endif
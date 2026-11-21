/* test 137: NO ITEM ZONES (M3 GADGETS). The game's no-item drop zones drawn into the game texture, like hitbox.c
 * (after the screen hash, read-only on game RAM). */
#ifndef ZONES_H
#define ZONES_H

#include <stdint.h>

/* Draw the zones into the 320 x 240 game texture (tex, pitch texels a row) when cfg.zones_show is on and draw is
 * non-zero (a run is on, incl. TRAINING, and not an attract demo; or the pause menu is open over a run). kuro = Kuro
 * BL's camera, tex_sx / tex_sy the frame's VRAM scroll (main.c's conv_sx / conv_sy: the screen conversion's mapping,
 * as sm_box / conv_row use). The zone pixel's source is the game's own pixel from VRAM (converted as the frame does:
 * the 15-bit ARGB1555 -> 0xAARRGGBB), never the write-combined game texture read back. Returns 1 if anything drawn. */
int zones_draw(volatile uint32_t *tex, unsigned pitch, int kuro, int draw, unsigned tex_sx, unsigned tex_sy);

/* A run started (credit started): log once while the zones are on. camera = the camera word (16.16) read this frame. */
void zones_run_start(uint32_t camera);

/* A run ended / not in a run any more: the next run may log again. */
void zones_run_end(void);

#endif

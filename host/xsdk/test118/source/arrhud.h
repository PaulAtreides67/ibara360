/* Test 79 (user 2026-10-26: the ARRANGE HUD, "Kuro BL's (Recommended)" art, "360 overlay (Recommended)"): the RANK
 * gauge, the boss's HP bar, the sub-weapon plates, the rose value popups and the PS2's formation label, drawn by the 360
 * into the game picture (arrhud.c). ibaraarr.xex only; the other titles get empty functions. */
#ifndef ARRHUD_H
#define ARRHUD_H

#include <stdint.h>

/* Game thread, each emulated vblank after the game's frame: the HUD's own state (the popups, RANK's slide, the label's
 * slide) one step per game frame the frame counter moved */
void arrhud_frame(void);

/* Game thread, once the shown picture is converted (after its hash): the HUD over it, from VRAM at the picture's scroll
 * (sx, sy) into the game texture (texels, pitch); the same input gives the same texels (it may run again on a picture
 * already drawn). Test 80: fresh = the texture was converted whole since its last HUD (else the texels the HUD wrote
 * there last time are put back from VRAM where it draws nothing now). 1 = texels written */
int arrhud_draw(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh);

/* Test 80: arrhud_draw in parts. arrhud_begin (game thread, the same arguments): 0 = nothing to write, else the frame's
 * HUD is set up in ARRHUD_BANDS bands of rows; arrhud_band(b), each b once, on any threads at the same time (each band
 * its own rows), all of them done before the texture is shown or arrhud_begin runs again */
#define ARRHUD_BANDS 3
int arrhud_begin(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh);
void arrhud_band(int b);

/* Test 80: the blend tables and the popup glyphs' runs, made at boot (else at the first frame drawn): the runs made,
 * -1 when they do not fit (the popups are then drawn pixel by pixel, as test 79) */
int arrhud_init(void);

/* A save state loaded: the popups and slides start again */
void arrhud_reset(void);

/* Test 80: the rose value popups alive (the log's HUD line) */
int arrhud_popups(void);

#endif

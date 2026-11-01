/* Test 98 (user idea 2026-10-28): TRAINING's HITBOX row OFF / PLAYER / ALL. ALL = the ships' boxes (the kill box,
 * ibara's / ARRANGE's green graze box) plus every collision box the game tests: the enemy parts', the enemy bullets'
 * and the player's shots' and bombs', outlined into the game texture (hitbox.c). */
#ifndef HITBOX_H
#define HITBOX_H

#include <stdint.h>

/* TR_HITBOX's values */
#define HITBOX_OFF 0
#define HITBOX_PLAYER 1
#define HITBOX_ALL 2

/* Game thread, once a vblank with a fresh picture (main.c's tr_hitbox): one read-only pass over the game's tables
 * (kuro = Kuro BL's addresses, else ibara's / ARRANGE's) into a box set, then the previous call's set outlined into
 * the 320 x 240 game texture (tex, pitch texels a row; row y, column x = the game's own pixel): the picture shows the
 * game's objects one game frame behind its RAM. mode HITBOX_ALL = everything, HITBOX_PLAYER = the ships' boxes only
 * (main.c's PLAYER draws its own today: the same boxes one frame ahead). Never writes game RAM. Returns the boxes
 * drawn */
int hitbox_draw(volatile uint32_t *tex, unsigned pitch, int kuro, int mode);

#endif

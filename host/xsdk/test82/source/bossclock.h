/* bossclock.h: test 62, game frames until a boss withdraws by timeout (source/bossclock.c) */
#ifndef BOSSCLOCK_H
#define BOSSCLOCK_H

#include <stdint.h>

enum { BC_IBARA, BC_BLK };

/* the enemy part the card shows (its RAM address) -> game frames until the boss it belongs to starts to withdraw if
 * it takes no more damage (0 = time is up: it leaves at the end of its attack, or it is leaving), or -1 = no clock
 * for it; reads the game's RAM (cv1k_ram), keeps a cache between calls (one caller thread) */
int64_t bossclock(int game, uint32_t part);

/* test 69: forget the cache (a save state was loaded: the RAM jumped) */
void bossclock_reset(void);

#endif

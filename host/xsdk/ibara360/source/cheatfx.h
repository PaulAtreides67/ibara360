#ifndef CHEATFX_H
#define CHEATFX_H
/* test 135: CHEATS batch 2, host-side corrections of each game frame (work/g135/SPEC_B.md) */
/* test 136: MAGNET RANGE, per-slot pull latch, revised magnet/fewer/medal penalty (work/g136/SPEC.md) */
struct cfx_cfg {
	int kuro, arr;          /* the program: Kuro BL; ARRANGE (on the ibara program) */
	unsigned bspeed;        /* BULLET SPEED %, 100 = off */
	int fewer;              /* FEWER BULLETS */
	unsigned ifall;         /* ITEM FALL SPEED %, 100 = off */
	int suction;            /* MEDAL SUCTION */
	int magnet;             /* 0 DEFAULT, 1 OFF, 2 RELEASE, 3 ALWAYS */
	int medalpen;           /* test 147: 0 DEFAULT, 2 5 DOWN, 3 3 DOWN (1 LOWEST removed; 1 -> 0) */
	int magrange;           /* test 136: 0 CLOSE, 1 FULL SCREEN */
	int xtcdecay;           /* test 147: 0 DEFAULT, 1 SLOW, 2 FAST (Kuro BL only) */
	int shot_recent[2];     /* the side's shot button pressed in the last 8 vblanks (main.c) */
};
void cfx_vblank(const struct cfx_cfg *c); /* once a vblank in a run (not playback / demo), after the game frame */
void cfx_reset(void);                     /* forget every slot's history (run start, state load, cheats off) */
#endif

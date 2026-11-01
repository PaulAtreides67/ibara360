/* achieve.h: test 105, the dashboard achievements (user 2026-11-01, cheevos.txt; PLAN.md "Test 105"). achieve.c watches
 * game RAM once per emulated vblank and says which achievements were earned; main.c hands them to XAM. It reads only
 * RAM (cv1k.h's RAMP), so the PC build (host/pc) runs the same file over the user's recordings.
 *
 * The ids are the SPA's (tools/achieve/mkspa.py), in cheevos.txt's order, the user's later secret one last. */
#ifndef ACHIEVE_H
#define ACHIEVE_H

#include <stdint.h>

enum {
	ACH_KAMIKAZE = 1,      /* KAMIKAZE BOMB: an enemy killed by the shrapnel of the player's exploding ship */
	ACH_MEIDI,             /* ORANGE MEILLANDINA: stage 1's boss defeated */
	ACH_MILLIONAIRE,       /* MILLIONAIRE WEAPONS: the bomb stock at its maximum */
	ACH_CRAWLER,           /* CRAWLER TRACK (secret): stage 5, a tank stopped by its tracks run over by another */
	ACH_MIDI,              /* GLOIRE DE MIDI: stage 2's boss */
	ACH_WITHDRAWAL,        /* STRATEGIC WITHDRAWAL (secret): a boss leaves by timeout, the side on one credit */
	ACH_SPECIAL_POWER,     /* SPECIAL POWER UP (secret): ibara's shot level 6 */
	ACH_GOLD_MEDAL,        /* GOLD MEDALIST: a 10000 medal picked up */
	ACH_EXTEND,            /* EXTEND: 1,000,000 (ibara) / 10,000,000 (Kuro BL, ARRANGE) */
	ACH_HOARDER,           /* RESOURCE HOARDER: 5 ships in stock */
	ACH_KASUMI,            /* HANA KASUMI: stage 3's boss */
	ACH_1UP,               /* 1UP (secret): the 1UP item picked up */
	ACH_SHASTA,            /* MOUNT SHASTA: stage 4's boss */
	ACH_LACE,              /* FRENCH LACE: stage 5's boss */
	ACH_TERESA,            /* DR. TERESA: stage 6's boss */
	ACH_ARCADE_CLEAR,      /* ARCADE COMPLETE: ibara cleared */
	ACH_BLK_CLEAR,         /* BLACK LABEL COMPLETE */
	ACH_ARR_CLEAR,         /* ARRANGE COMPLETE */
	ACH_LETTER_SCORE,      /* LETTER SCORE: 10,000,000 in ibara, the side on one credit */
	ACH_FULL_ARSENAL,      /* FULL ARSENAL: all seven weapons in stock (Kuro BL, ARRANGE) */
	ACH_HADOU,             /* HADOU-GUN: the Hadou exploding on a boss's main part */
	ACH_BOND_END,          /* SILISTER SIMILIS: Bond's ending */
	ACH_DYNE_END,          /* DIO SPIROSSI: Dyne's ending */
	ACH_DEATH_ROW,         /* MARCH TO DEATH ROW: ibara's HARDER or EXTENDED cleared on one credit */
	ACH_X300,              /* x300: the rose bed's x300 (Kuro BL, ARRANGE) */
	ACH_XTC,               /* XTREME TERROR COUNTER: XTC +9999 on one credit (Kuro BL) */
	ACH_FORMATION,         /* SPECIAL FORMATION: one of ibara's four (not ARRANGE) */
	ACH_CENSORED,          /* *!@&#$ (test 105: *!@&%$; secret): initials the name entry censors */
	ACH_EDELWEISS,         /* EDELWEISS: a game cleared in two player co-op (continues allowed) */
	ACH_BOMBA,             /* BOMBA: a full bomb item picked up */
	ACH_ARCADE_1CC,        /* ARCADE 1CC (test 107's 1CC, any game; test 108: ibara) cleared on one credit */
	ACH_BLK_1CC,           /* BLACK LABEL 1CC (test 108, user) */
	ACH_ARR_1CC,           /* ARRANGE 1CC (test 108, user) */
	ACH_LOVES,             /* LOVES ME...LOVES ME NOT (test 109; secret): Teresa's first phase (the stage 6 boss)
	                        * killed after all its parts were destroyed */
	ACH_COUNT = ACH_LOVES
};

enum { ACH_IBARA, ACH_BLK, ACH_ARRANGE };

struct ach_input {
	int eligible;          /* main.c: this run may earn achievements (a credit's run from its start: not TRAINING, no
	                        * LOAD STATE / RESTART STAGE past stage 1, not a replay's playback, DIP SWITCHES default) */
};

/* once, after the game is chosen (ACH_IBARA, ACH_BLK, ACH_ARRANGE) */
void ach_init(int game);

/* every emulated vblank, the game's frame over: the achievements earned at this one (ids into out, at most max), each
 * once (ach_have's and those already told are left out) */
int ach_frame(const struct ach_input *in, int *out, int max);

/* the profile already has achievement id (main.c's enumeration): never told again */
void ach_have(int id);

/* a new run starts (the credit's state taken, FULL RESTART): every per-run record cleared */
void ach_run_start(void);

/* the PC harness: runs start themselves (on = 1), and the ids found at the last ach_frame, told or not */
void ach_auto(int on);
int ach_seen(int *out, int max);

/* the name for logs */
const char *ach_name(int id);

/* why the last frame's check said what it did, for the log (NULL: nothing to say) */
const char *ach_note(void);

#endif

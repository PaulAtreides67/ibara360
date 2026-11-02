/* GADGETS (test 58's info card, renamed in test 59; user 2026-10-22: "a new card that looks exactly like" Baffo's
 * MAME artwork for ibara, "displaying controls in real time and information such as boss health, boss timer, item
 * drop table, rank increase/decrease in real time (in percentage), current weapon setup, score, current music track
 * and composer").
 *
 * The artwork (gen/card from tools/card/mkcard.py) around the game picture, its plates filled from game RAM every
 * emulated vblank, the debug card hidden. Test 60 (user 2026-10-24): Kuro BL too (its own logo, no L/R/B weapon
 * rows), the 4:3 display with tate off (the game at the left, a panel at the right without the controls and the
 * music), tate on a 16:9 display (score, rank, boss and next medal in the black bars), EXT counting down.
 * Test 64 (user 2026-10-25): each gadget on or off by itself (the options' M3 GADGETS page; its plate goes with it).
 * Test 65 (user 2026-10-25): STATUS above WEAPON, tate on 16:9 with 2 x 2 plates per band, 4:3 at 75% width.
 * Test 67 (user 2026-10-25): ITEMS COLLECTED gone (SECRET FORMATION shows the streak), BULLETS (the enemy bullets on
 * screen) new; HADOU and RAPID no longer on their own switches (always WEAPON's rows); CONTROLS as the stick or as text
 * (gd_input.ctl_text).
 * Test 71 (user 2026-10-25): co-op (M3 GADGETS' CO-OP: while both sides have played in a run, RANK and each player's
 * SCORE, STATUS, WEAPON and CONTROLS, SPECIAL FORMATIONS on the 1P side: one streak for both; no NEXT DROP, SCORE
 * BREAKDOWN, MUSIC, MEDALS, BULLETS or BOSS); 4:3 as two columns of every gadget (CONTROLS as text) over the run's
 * pilot's artwork; the BOSS's 0% kept a few vblanks (no 100% from a part that is the boss for a vblank as it dies);
 * SPECIAL FORMATIONS empty outside a run and in the demos; CONTROLS' style and CO-OP from the settings at every draw
 * (the pause's changes show at once).
 * Test 76 (user 2026-10-26: "add a gadget to black label regarding the XTC (Xtreme Terror Counter) ... the value that
 * increases when you shoot while grazing bullets, as well as the size of the increasing graze window, in both a graph
 * representing the ship, and the pixel number"): XTC, Kuro BL's, each player's. */
#ifndef GADGETS_H
#define GADGETS_H

#include <stddef.h>
#include <stdint.h>

/* test 60: where the gadgets go (gadgets_draw), from the display's shape and tate */
enum { GV_NONE = -1, GV_WIDE, GV_43, GV_TATE_L, GV_TATE_R };

/* test 64: the gadgets, in the M3 GADGETS page's order. FORMATION is ibara's; FORMATION, CONTROLS, STAGES and MUSIC
 * are on 16:9 only. Test 65: STATUS (the ship, bombs, lives, EXT, invincibility; out of WEAPON); FORMATION is called
 * SECRET FORMATION (its ini key stays gadget_formation). Test 67 (user: "hadou, rapid and items collected gadgets on/off
 * options are redundant"): HADOU and RAPID are always WEAPON's rows (16:9; RAPID ibara's), ITEMS COLLECTED is gone,
 * BULLETS is new, NEXT MEDAL is called MEDALS (MEDALS | BULLETS side by side); tate on 16:9 shows SCORE, RANK, STATUS,
 * STAGES, BOSS, BULLETS, NEXT DROP and MEDALS. Test 76: XTC, Kuro BL's (its Xtreme Terror Counter and graze window, in
 * SPECIAL FORMATIONS' place; 16:9 and 4:3), last so the ini's and the page's others keep their places. */
enum { GD_SCORE, GD_STATUS, GD_WEAPON, GD_FORMATION, GD_CONTROLS, GD_RANK, GD_DROP, GD_MEDAL, GD_BULLETS, GD_BOSS,
       GD_STAGES, GD_MUSIC, GD_XTC, GD_N };
#define GD_ALL ((1u << GD_N) - 1)
extern const char *const gadgets_names[GD_N]; /* "SCORE", "NEXT DROP": the page's rows and the log */
extern const char *const gadgets_keys[GD_N];  /* "score", "next_drop": the ini's gadget_<key> */
const char *gadgets_name(int g);              /* test 83: gadgets_names[g], ARRANGE's FORMATIONS */
int gadgets_ibara_only(int g);
/* test 76: gadget g is one of this game's (blk = Kuro BL): FORMATION ibara's, XTC Kuro BL's, the others both */
int gadgets_in_game(int g, int blk);

/* test 79: gd_input.keys' buttons */
enum { GD_KEY_SHOT, GD_KEY_BOMB, GD_KEY_AUTO, GD_KEY_SUB, GD_KEY_FORM, GD_KEY_LOCK, GD_KEYS };

/* what main.c gives it each emulated vblank, besides game RAM */
struct gd_input {
	uint8_t port_d, port_l;  /* the board's player inputs as the game read them this frame (active low) */
	uint8_t port_c;          /* test 79: the board's port C as the game read it (ARRANGE's aim lock: bit 6 P1, 7 P2) */
	uint32_t pad[2];         /* the pads playing the 1P / 2P sides (main.c's A_* bits), for the autofire lamp */
	uint32_t af_bit;         /* the A_* bit of AUTO SHOT */
	int af_hz[2];            /* its rate; test 71: each side's pad's (P1 / P2 CONTROLS) */
	const char *keys[2][GD_KEYS]; /* the pad buttons set to SHOT, BOMB and AUTO SHOT ("A", "B LT", ""), for the
	                               * labels; test 71: each side's pad's; test 79: then ARRANGE's SUB WEAPON CHANGE,
	                               * FORMATION CHANGE and AIM LOCK (GD_KEY_*) */
	unsigned logic;          /* the game's logic-frame counter (upper half of LOGIC_WORD) */
	int pilot;               /* test 71: the run's pilot, 0 Bond / 1 Dyne (the credit's side, else the start menu's):
	                          * the 4:3 artwork */
	int dip_changed;         /* test 81: a DIP SWITCHES setting (the service menu's game options) is not its default:
	                          * the SCORE red */
	int booted;              /* test 89: the game's boot is over (its scene byte has left 0): before it its RAM is the
	                          * boot's (user's todo list: "during the initial rom loading, medals are at 4000 and boss
	                          * health is 100%"), no values shown */
	int training;            /* test 89: a training run (main.c's TRAINING page): the SCORE red */
};

/* Game thread, once at the game's start (after video_init): the textures and the shaders; blk = Kuro BL (its RAM,
 * its background). 0 = ready. */
int gadgets_init(int blk);

/* Test 113: gadgets_init in two: the shaders and textures on the game thread, their pictures unpacked on a thread of
 * their own while the ROMs load; finish (game thread, at the game's start) waits for them: 0 = ready, the unpacking's
 * time and the wait for it in ms */
int gadgets_init_start(int blk);
int gadgets_init_finish(unsigned *unpack_ms, unsigned *wait_ms);

/* Game thread, every emulated vblank before present(): the card's values from game RAM. */
void gadgets_frame(const struct gd_input *in);

/* Test 64: the gadgets shown (bit 1 << GD_*), from the settings; game thread. */
void gadgets_mask(unsigned mask);

/* Test 71, game thread, before each draw: CONTROLS as text (1) or the stick (0; 4:3 always text) and the co-op layout
 * allowed (1); test 88: Kuro BL's XTC at the game's scale (1, 16:9's one player) and that scale (canvas pixels a game
 * pixel: the game picture's) */
void gadgets_style(int ctl_text, int coop, int xtc_full, float game_k);

/* Game thread, in present() with the target set: layer 0 = the background (before the game picture), layer 1 =
 * the plates and their values over it (after the picture and its scanlines), both in view (GV_*). queued = this
 * frame's number among the frames handed to xsdk (frames_queued before it), flips = xsdk's flip count: a vertex block
 * is written again only once the frame that drew with it has been shown. Leaves the blend state as none; the caller
 * sets its shaders again. */
void gadgets_draw(int layer, int view, uint32_t queued, uint32_t flips);

/* the front buffer's size (the canvases are 1280x720, 960x720 and 720x1280; a 640x480 one gets them scaled) */
void gadgets_target(int w, int h);

/* Test 69, game thread: the save states (main.c's pause menu; runtime/state.h's slots): what the gadgets track over time
 * (the stage scores) kept with a slot when it is asked for, and put back with it; restart = a restart in the run (the
 * score red until a new run, the stage played again red) */
#define GD_STATE_SLOTS 4 /* test 84: + the save state's moment (main.c's SLOT_STATE) */
void gadgets_state_save(int slot);
void gadgets_state_load(int slot, int restart);
/* test 118: on = a save state was loaded: SCORE BREAKDOWN empty until a new run (off: the credit's or attract's load) */
void gadgets_breakdown_void(int on);
/* test 84: a slot's record (the stage scores) for a save state's file, read out or written in (bytes = its size) */
void *gadgets_state_blob(int slot, size_t *bytes);
/* test 84: side s's score as the gadgets last saw it, and whether it plays in this run */
uint32_t gadgets_score(int side);
int gadgets_in(int side);
/* test 89: the BOSS gadget's boss_find has a boss part (shown, or waiting BOSS_SETTLE vblanks to be): main.c's START AT
 * BOSS runs the game unpaced until it has (user: "use the boss HP gadget hook to determine when a boss starts") */
int gadgets_boss_part(void);
/* test 91: the boss fights (the BOSS gadget's own rule for its bar: active, or its music playing) */
int gadgets_boss_fight(void);
/* test 86: side s's SCORE is red now (a restart, a DIP SWITCHES setting, a continue): a replay's asterisk */
int gadgets_red(int side);

/* for the log and the debug card */
struct gd_stats {
	int ready;
	unsigned quads_max, busy_skips, frames;
	uint64_t build_ticks_max;
};
extern struct gd_stats gd_stats;

#endif

/* Test 33 (goal 18, release build): the user's settings file and the game's EEPROM on the
 * stick the set was loaded from.
 *
 *  - <dev>:/ibara360/ibara360.ini: "key = value" lines, '#' starts a comment. Written with the
 *    defaults when missing; unknown keys and bad values are logged and left at the default;
 *  - <dev>:/ibara360/nvram/ibara/eeprom: the RTC9701's 256 words as MAME 0.289 saves them
 *    (nvram/ibara/eeprom: 512 bytes, little-endian words), so the file goes either way between
 *    the 360 and MAME. Read at power-on (eeprom.tmp when only that one is there: a save cut
 *    off between its two steps). Saved by the USB thread once the game has changed it and left
 *    it alone for EEP_SETTLE_FRAMES: written as eeprom.tmp, then renamed over eeprom, through
 *    the write gate (source/wgate.c) as the recorder's writes.
 *
 * Test 37: tate, scanlines and scanline_strength (the game alone; the card's layout keeps
 * test 32's picture).
 *
 * Test 38: game = ask / ibara / ibarablk; each game's EEPROM in nvram/<set>/eeprom, as MAME.
 *
 * Test 40: netlog = 1 / 0 and netlog_port (source/netlog.c).
 *
 * Test 48: aspect = auto / 4:3 / 16:9 (the display's shape; auto = the console's setting).
 *
 * Test 52: special = 1 / 0 (ibara's special version: the DIP switch and A+B at boot, main.c).
 * Test 53: the start menu's options page asks for the ini again from cfg (settings_save_request),
 * written by the file thread.
 *
 * Test 55: <set>_<button> = <function> for each game (the controls page), autofire = 30 / 20 / 15
 * / 12 / 10 (ibara's RT rate), back_in_run = pause / coin.
 *
 * Test 58: infocard = 1 / 0 (ibara's info card, source/gadgets.c).
 * Test 59: the same as gadgets = 1 / 0 (the name from now on); infocard is still read.
 * Test 64: gadget_<name> = 1 / 0 for each gadget (gadgets.h GD_*; the options' M3 GADGETS page).
 * Test 67: gadget_controls_style = stick / text; gadget_hadou, gadget_rapid and gadget_items are read and dropped
 * (HADOU and RAPID are WEAPON's rows, ITEMS COLLECTED is gone); gadget_bullets is new.
 * Test 68: volume_music, volume_sfx, volume_voice, volume_attract = 0-100 (percent) and mute = 1 / 0 (the options'
 * SOUND page).
 * Test 69: back_in_run and gadgets are read and dropped (BACK in a run opens the pause menu; the gadgets are always
 * there, M3 GADGETS' ALL row turns them all off); the pause menu's pages ask for the ini as the options do.
 * Test 71: each of the first two pads its own controls and AUTO SHOT rate (P1 CONTROLS = pad 0, P2 CONTROLS = pad 1 and
 * the others): <set>_<button> and autofire as before for pad 0, <set>_p2_<button> and autofire_p2 for pad 1;
 * gadget_coop = 1 / 0 (GADGETS' co-op layout while both players play).
 * Test 81: arrange_bullet_design = normal / color / colorless (ARRANGE's BULLET DESIGN, its DIP SWITCHES page). */
#ifndef SETTINGS_H
#define SETTINGS_H

#include <stdint.h>

#include "gadgets.h"
#include "romload.h"

#define SETTINGS_ROWS 2      /* card rows settings_rows() fills */
#define EEP_SETTLE_FRAMES 60 /* emulated frames without an EEPROM change before a save */

enum { PIC_INTEGER, PIC_FULL };
enum { TATE_OFF, TATE_LEFT, TATE_RIGHT };
enum { ASPECT_AUTO = -1, ASPECT_4_3 = 0, ASPECT_16_9 = 1 }; /* test 48: 0 / 1 = main.c's aspect_wide */

/* test 55: the pad buttons the controls page maps (the D-pad and stick, START, BACK and R3 stay
 * fixed) and what each can do: the board's buttons 1-4 (ibara: shot, bomb, rapid shot and an
 * unused 4th; Kuro BL: the 4th = weapon change), button 1 at the autofire rate, the status card */
enum { CTL_A, CTL_B, CTL_X, CTL_Y, CTL_LB, CTL_RB, CTL_LT, CTL_RT, CTL_N };
/* test 78: FN_LOCK = ARRANGE's aim lock (PCDR bit 6 / 7, which the arcade game never reads); ARRANGE's buttons 3
 * and 4 are SUB WEAPON CHANGE and FORMATION CHANGE */
enum { FN_OFF, FN_B1, FN_B2, FN_B3, FN_B4, FN_AUTO, FN_CARD, FN_LOCK, FN_N };
#define CTL_PADS 2           /* test 71: P1 CONTROLS (pad 0), P2 CONTROLS (pad 1, and pads 2-3) */
/* test 78: the controls' sets: one per game (SET_*), and ARRANGE's (ibaraarr.xex plays ibara's set with its own
 * buttons): ibara_..., ibarablk_..., ibaraarr_... in the ini */
#define CTL_SET_ARR NSETS
#define CTL_SETS (NSETS + 1)
#define AUTOFIRE_RATES 5     /* 30, 20, 15, 12, 10 Hz = every 2nd .. 6th game logic frame */

struct settings {
	int card;     /* the card shown once the game runs (RB on any pad shows / hides it) */
	int picture;  /* PIC_INTEGER: the largest whole-number scale; PIC_FULL: the full height (test 69: not smoothed) */
	int save;     /* the EEPROM read at power-on and saved on changes */
	int record;   /* input recording recNNNN.txt (source/recorder.c) */
	int framelog; /* frame log perfNNNN.txt (source/prof.c) */
	int tate;     /* TATE_OFF: the picture upright on a TV standing normally; TATE_LEFT / TATE_RIGHT:
	               * the raster filling a TV turned on its side, its top edge on the left / right */
	int scanlines;         /* dark gaps between the game's raster lines (along the arcade monitor's) */
	int scanline_strength; /* how dark the gaps are, percent: 0 = not at all, 100 = black */
	int game;     /* test 38: GAME_ASK (the pad menu at power-on) or SET_IBARA / SET_IBARABLK */
	int netlog;   /* test 40: the log, recording and frame log over UDP (source/netlog.c) */
	unsigned netlog_port; /* test 40: the UDP port the console answers on */
	int aspect;   /* test 48: ASPECT_AUTO (the console's widescreen setting), ASPECT_4_3 or ASPECT_16_9 */
	int special;  /* test 52: ibara's special version (DIP S2 switch 2 + A+B held at boot) */
	int ctl[CTL_PADS][CTL_SETS][CTL_N]; /* test 55: FN_* per pad button, per game; test 71: per pad (P1, P2);
	                                     * test 78: [CTL_SET_ARR] = ARRANGE's */
	int autofire_hz[CTL_PADS];       /* test 55: ibara's AUTO SHOT rate (30, 20, 15, 12, 10); Kuro BL's stays 30;
	                                  * test 71: per pad */
	int back_pause;        /* test 55: BACK pauses during a run (1) or is COIN there too (0); test 69: always 1 */
	int gadgets;           /* test 58: ibara's GADGETS around the game (16:9, tate off, the debug card hidden); test
	                        * 69: always 1 (M3 GADGETS' ALL row turns them off) */
	int gadget[GD_N];      /* test 64: each gadget on (1) or off (0) */
	int ctl_text;          /* test 67: CONTROLS as text on a slim plate (1) or as the stick and buttons (0) */
	int vol_music, vol_sfx, vol_voice; /* test 68: the sound page's volumes, percent in tens (0-100) */
	int vol_attract;       /* test 68: the share they get while the game is idle (the attract), percent */
	int mute;              /* test 68: no sound at all */
	int coop;              /* test 71: GADGETS' co-op layout while both players play (M3 GADGETS' CO-OP row) */
	int arr_bullets;       /* test 81: ARRANGE's BULLET DESIGN (test 82: GENERAL SCREEN's): 0 NORMAL, 1 COLOR, 2 COLORLESS */
};
extern struct settings cfg;
extern const int autofire_rates[AUTOFIRE_RATES];

#define GAME_ASK -1

/* test 55: the controls' names: a button's for the page and the log ("A", "LB"), a function's for
 * the page and the log ("SHOT", "WEAPON CHANGE"; set = SET_*), the defaults, and one log line of a
 * game's mapping ("A = SHOT, B = BOMB, ..."); test 71: of pad (0 = P1, 1 = P2) */
const char *settings_ctl_name(int button);
const char *settings_ctl_set_name(int set); /* test 78: ibara, ibarablk, ibaraarr (CTL_SET_ARR) */
const char *settings_fn_name(int set, int fn);
void settings_ctl_defaults(int pad, int set);
int settings_fn_offered(int set, int fn); /* test 82: the controls page offers fn for set's buttons */
void settings_ctl_text(int pad, int set, char *s, unsigned size);

/* Thread 0, once the loader has looked for the zips: the ini (created when missing) from dev
 * ("uda"...; NULL: the defaults, nothing saved). */
void settings_load(const char *dev);

/* Test 53: game thread: the ini to be written again from cfg (the options page's changes);
 * settings_service does it on the file thread (as ini.tmp, then renamed over the ini) */
void settings_save_request(void);

/* Test 53: file thread, every pass: a requested ini save, through the write gate. 1 when it
 * touched a file. */
int settings_service(void);

/* Test 52: the settings in one log line after head ("INI:", "OPTIONS:") */
void settings_log(const char *head);

/* Test 38: thread 0, after loading, before the USB thread runs: the EEPROM file of the set
 * ("ibara", "ibarablk": <dev>:/ibara360/nvram/<set>/eeprom) from dev (NULL: blank, no saves). */
void eeprom_load(const char *dev, const char *set);
void eeprom_seed(const char *from_set); /* test 77: ARRANGE's first start from ibara's file */
void eeprom_arrange_table(void);        /* test 81: ARRANGE's table 3 = the PS2's defaults (+ its scores), once */

/* Thread 0, at game start: the EEPROM the game starts with into words[256] (all 0xFFFF when
 * there is no file or save is off). 1 when it is not blank (the attract checks then stay off:
 * the PC run starts blank). */
int eeprom_boot(uint16_t words[256]);

/* The "# eeprom" line for the recording's header: 256 words as 4 hex digits each (empty string
 * when blank), with "\n". */
void eeprom_header_line(char *out, unsigned size);

/* Game thread, every emulated vblank: words = the game's EEPROM now. */
void eeprom_frame(uint32_t frame, const uint16_t words[256]);

/* USB thread, every loop: the save. 1 when it touched a file. */
int eeprom_service(void);

void settings_rows(char text[SETTINGS_ROWS][100], uint32_t color[SETTINGS_ROWS]);

/* Test 64: the gadgets on (cfg.gadget) as gadgets_mask's bits */
unsigned settings_gadget_mask(void);

#endif

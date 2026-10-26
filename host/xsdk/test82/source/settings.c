/* Test 33: the settings file and the EEPROM saves (see settings.h). Threads: settings_load,
 * eeprom_load and eeprom_boot on thread 0 before the USB thread starts (libfat is then used by
 * no other thread: the loader waits for the choice or has finished; test 38); eeprom_frame on
 * the game thread; eeprom_service on the USB
 * thread, which does every file operation from then on. The game thread hands a snapshot over
 * only when the USB thread has taken the last one (taken == seq), so one buffer is enough.
 * Test 53: settings_save_request on the game thread, settings_service on the file thread. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <unistd.h>

#include "card.h"
#include "netlog.h"
#include "romload.h"
#include "settings.h"
#include "wgate.h"

#define INI_MAX 12288 /* test 55: 4096 before the controls; test 64: 8192 before the gadget lines */
#define EEP_BYTES 512

/* test 55: test 54's fixed pads (A B X Y = buttons 1-4, RB = the card, RT = autofire) */
#define CTL_DEFAULTS {FN_B1, FN_B2, FN_B3, FN_B4, FN_OFF, FN_CARD, FN_OFF, FN_AUTO}
/* test 78: ARRANGE's (user 2026-10-26): X = SUB WEAPON CHANGE, Y = FORMATION CHANGE, RB = AIM LOCK */
#define CTL_DEFAULTS_ARR {FN_B1, FN_B2, FN_B3, FN_B4, FN_OFF, FN_LOCK, FN_OFF, FN_AUTO}
/* test 82 (user: "delete rapid shot and button 4 in the toggles, since they're unused"): ibara's X and Y off */
#define CTL_DEFAULTS_IB {FN_B1, FN_B2, FN_OFF, FN_OFF, FN_OFF, FN_CARD, FN_OFF, FN_AUTO}
struct settings cfg = {.card = 0, .picture = PIC_INTEGER, .save = 1, .record = 0, .framelog = 0,
                       .tate = TATE_OFF, .scanlines = 0, .scanline_strength = 50, .game = GAME_ASK,
                       .netlog = 1, .netlog_port = NETLOG_PORT, .aspect = ASPECT_AUTO, .special = 0,
                       .ctl = {[0 ... CTL_PADS - 1] = {[SET_IBARA] = CTL_DEFAULTS_IB, [SET_IBARABLK] = CTL_DEFAULTS,
                                                       [CTL_SET_ARR] = CTL_DEFAULTS_ARR}},
                       .autofire_hz = {[0 ... CTL_PADS - 1] = 30}, .back_pause = 1, .gadgets = 1,
                       .gadget = {[0 ... GD_N - 1] = 1}, .vol_music = 100, .vol_sfx = 100, .vol_voice = 100,
                       .vol_attract = 100, .mute = 0, .coop = 1, .arr_bullets = 0};
const int autofire_rates[AUTOFIRE_RATES] = {30, 20, 15, 12, 10};

/* ---- test 55: the controls' names ------------------------------------------------------ */

static const char *const ctl_ini[CTL_N] = {"a", "b", "x", "y", "lb", "rb", "lt", "rt"};
static const char *const ctl_names[CTL_N] = {"A", "B", "X", "Y", "LB", "RB", "LT", "RT"};
/* the ini's words; FN_B4 is written "button4" for ibara, "weapon" for Kuro BL (both read for either); test 78:
 * ARRANGE's "subweapon" (FN_B3), "formation" (FN_B4), "lock" (read for any set) */
static const char *const fn_ini[FN_N] = {"off", "shot", "bomb", "rapid", "button4", "autoshot", "card", "lock"};
/* test 70: DEBUG CARD was STATUS CARD (user) */
static const char *const fn_names[FN_N] = {"OFF", "SHOT", "BOMB", "RAPID SHOT", "BUTTON 4", "AUTO SHOT", "DEBUG CARD",
                                           "AIM LOCK"};

/* test 78: the controls' set names in the ini (ibara, ibarablk, ibaraarr) */
const char *settings_ctl_set_name(int set)
{
	return set == CTL_SET_ARR ? "ibaraarr" : romload_set_name(set);
}

const char *settings_ctl_name(int button)
{
	return button >= 0 && button < CTL_N ? ctl_names[button] : "?";
}

const char *settings_fn_name(int set, int fn)
{
	if (fn == FN_B4 && set == SET_IBARABLK)
		return "WEAPON CHANGE";
	if (set == CTL_SET_ARR && fn == FN_B3)
		return "SUB WEAPON CHANGE";
	if (set == CTL_SET_ARR && fn == FN_B4)
		return "FORMATION CHANGE";
	return fn >= 0 && fn < FN_N ? fn_names[fn] : "?";
}

/* test 82: what a set's buttons can be given: AIM LOCK is ARRANGE's (test 78); ibara reads neither button 3 nor 4
 * (test 68's work/g68/btn4), so no RAPID SHOT or BUTTON 4 there */
int settings_fn_offered(int set, int fn)
{
	if (fn == FN_LOCK)
		return set == CTL_SET_ARR;
	if (fn == FN_B3 || fn == FN_B4)
		return set != SET_IBARA;
	return fn >= 0 && fn < FN_N;
}

void settings_ctl_defaults(int pad, int set)
{
	static const int d[CTL_N] = CTL_DEFAULTS, da[CTL_N] = CTL_DEFAULTS_ARR, di[CTL_N] = CTL_DEFAULTS_IB;

	memcpy(cfg.ctl[pad][set], set == CTL_SET_ARR ? da : set == SET_IBARA ? di : d, sizeof(d));
}

void settings_ctl_text(int pad, int set, char *s, unsigned size)
{
	unsigned i, k = 0;

	if (size)
		s[0] = 0;
	for (i = 0; i < CTL_N && k < size; i++)
		k += (unsigned)snprintf(s + k, size - k, "%s%s = %s", i ? ", " : "", ctl_names[i],
		                        settings_fn_name(set, cfg.ctl[pad][set][i]));
}

static const char *fn_ini_word(int set, int fn)
{
	if (set == CTL_SET_ARR && (fn == FN_B3 || fn == FN_B4))
		return fn == FN_B3 ? "subweapon" : "formation";
	return fn == FN_B4 && set == SET_IBARABLK ? "weapon" : fn_ini[fn];
}

/* test 64: the gadget_<name> = 1 / 0 lines */
static const char *gadget_lines(void)
{
	static char t[GD_N * 32];
	unsigned n = 0;
	int g;

	t[0] = 0;
	for (g = 0; g < GD_N && n < sizeof(t); g++)
		n += (unsigned)snprintf(t + n, sizeof(t) - n, "gadget_%s = %d\n", gadgets_keys[g], cfg.gadget[g]);
	if (n < sizeof(t)) /* test 67 */
		n += (unsigned)snprintf(t + n, sizeof(t) - n, "gadget_controls_style = %s\n", cfg.ctl_text ? "text" : "stick");
	if (n < sizeof(t)) /* test 71 */
		snprintf(t + n, sizeof(t) - n, "gadget_coop = %d\n", cfg.coop);
	return t;
}

static const char *const arr_bullet_words[3] = {"normal", "color", "colorless"}; /* test 81 */

/* test 55: the controls, the autofire rate and BACK in a run after test 54's text; test 69: no back_in_run (BACK in a
 * run always pauses: the pause menu) and no gadgets (always on; M3 GADGETS' ALL row turns them all off) */
static unsigned ini_text_more(char *b, unsigned size)
{
	int n = snprintf(b, size,
		"\n"
		"# autofire: how fast AUTO SHOT (RT) presses Ibara's shot: 30, 20, 15, 12 or 10 = a press\n"
		"#           every 2nd, 3rd, 4th, 5th or 6th game frame (Kuro BL's stays at 30); autofire_p2 = the\n"
		"#           second pad's (P2 CONTROLS)\n"
		"autofire = %d\n"
		"autofire_p2 = %d\n"
		"\n"
		"# gadget_...: each gadget around the game on its own (the options' M3 GADGETS page): 1 = shown,\n"
		"#             0 = hidden (the artwork stays);\n"
		"#             formation (the special formations) is Ibara's; gadget_controls_style: stick (the\n"
		"#             stick and buttons) or text (a slim plate, each input lit while pressed);\n"
		"#             gadget_coop: 1 = both players' gadgets while two play\n"
		"%s"
		"\n"
		"# volume_...: the sound page's volumes in percent, 0 to 100: music, sfx (the effects), voice;\n"
		"#             volume_attract = how much of them the attract (the demos, the title) gets\n"
		"# mute: 1 = no sound at all\n"
		"volume_music = %d\n"
		"volume_sfx = %d\n"
		"volume_voice = %d\n"
		"volume_attract = %d\n"
		"mute = %d\n"
		"\n"
		"# arrange_bullet_design: ARRANGE's (ibaraarr.xex, its DIP SWITCHES) enemy bullets: normal, color or\n"
		"#                        colorless (the PS2 port's BULLET DESIGN)\n"
		"arrange_bullet_design = %s\n"
		"\n"
		"# controls, for each game (ibara_..., ibarablk_..., ibaraarr_... = ARRANGE) and pad button\n"
		"#   (a b x y lb rb lt rt): shot, bomb, rapid (rapid shot), button4 (Ibara: unused) or weapon\n"
		"#   (Kuro BL: weapon change), autoshot (shot at the autofire rate), card (the debug card) or off;\n"
		"#   ARRANGE: subweapon (sub weapon change), formation (formation change), lock (aim lock);\n"
		"#   the D-pad and left stick, START, BACK and R3 (the service menu) stay as they are;\n"
		"#   ibara_p2_..., ibarablk_p2_..., ibaraarr_p2_... = the second pad's (P2 CONTROLS)\n",
		cfg.autofire_hz[0], cfg.autofire_hz[1], gadget_lines(), cfg.vol_music, cfg.vol_sfx,
		cfg.vol_voice, cfg.vol_attract, cfg.mute, arr_bullet_words[cfg.arr_bullets >= 0 && cfg.arr_bullets < 3 ? cfg.arr_bullets : 0]);
	int s, i, p;

	for (p = 0; p < CTL_PADS; p++)
		for (s = 0; s < CTL_SETS && n >= 0 && (unsigned)n < size; s++)
			for (i = 0; i < CTL_N && n >= 0 && (unsigned)n < size; i++)
				n += snprintf(b + n, size - (unsigned)n, "%s_%s%s = %s\n", settings_ctl_set_name(s), p ? "p2_" : "",
				              ctl_ini[i], fn_ini_word(s, cfg.ctl[p][s][i]));
	return n < 0 ? 0 : (unsigned)n < size ? (unsigned)n : size - 1;
}

/* the ini with cfg's values (the defaults when it is created); test 52: also the options page's
 * save, so the comments are always these */
static unsigned ini_text(char *b, unsigned size)
{
	const int n = snprintf(b, size,
		"# ibara360 settings, read at power-on: 1 = on, 0 = off.\n"
		"# Delete this file to get the defaults back. The options page (Start in the attract opens the\n"
		"# start menu, BACK there the options) and the pause menu (BACK in a run) write this file\n"
		"# again with these comments only.\n"
		"\n"
		"# game: the game that starts: ask = choose with the pad at power-on,\n"
		"#       ibara = Ibara, ibarablk = Ibara Kuro Black Label\n"
		"#       (BACK held at power-on brings the game menu up all the same)\n"
		"game = %s\n"
		"\n"
		"# special: Ibara's special version, as the PCB's DIP switch S2-2 with A and B held at\n"
		"#          power-on: \"Special ver.\" and the game's settings on the title, the rank at\n"
		"#          each stage start (Ibara Kuro Black Label has no special version); changed\n"
		"#          on the options page, it restarts the game\n"
		"special = %d\n"
		"\n"
		"# card: the debug card once the game runs (a button set to card, RB at first, shows or hides it)\n"
		"card = %d\n"
		"\n"
		"# picture: integer = the largest whole-number scale (every pixel the same size),\n"
		"#          full = the full screen height (test 69: not smoothed)\n"
		"picture = %s\n"
		"\n"
		"# tate: the TV turned on its side, the game filling the screen:\n"
		"#       0 = off (the TV stands normally, the game upright between black bars)\n"
		"#       left = the TV's top edge on the left (turned counterclockwise; 1 = left)\n"
		"#       right = the TV's top edge on the right (turned clockwise)\n"
		"tate = %s\n"
		"\n"
		"# aspect: the TV's shape: auto = the console's display setting (widescreen = 16:9,\n"
		"#         normal = 4:3), 4:3 or 16:9 when the picture looks squeezed or stretched\n"
		"aspect = %s\n"
		"\n"
		"# scanlines: dark gaps between the game's lines, as on the arcade monitor (it lies on its\n"
		"#            side in the cabinet, so the lines run from the top of the picture to the bottom)\n"
		"scanlines = %d\n"
		"\n"
		"# scanline_strength: how dark the gaps are, 0 (not at all) to 100 (black), in percent\n"
		"scanline_strength = %d\n"
		"\n"
		"# save: keep the game's settings and high scores in ibara360/nvram/<game>/eeprom\n"
		"#       (MAME 0.289's nvram/ibara/eeprom or nvram/ibarablk/eeprom: the file can be\n"
		"#       copied either way)\n"
		"save = %d\n"
		"\n"
		"# record: input recording ibara360/recNNNN.txt (replays on the PC and in MAME)\n"
		"record = %d\n"
		"\n"
		"# framelog: frame timing log ibara360/perfNNNN.txt\n"
		"framelog = %d\n"
		"\n"
		"# netlog: the log, the recording and the frame log also over the network, to a PC\n"
		"#         running tools/netlog/ibaranet.py (the console answers on UDP port netlog_port)\n"
		"netlog = %d\n"
		"netlog_port = %u\n",
		cfg.game == GAME_ASK ? "ask" : romload_set_name(cfg.game), cfg.special, cfg.card,
		cfg.picture == PIC_FULL ? "full" : "integer",
		cfg.tate == TATE_LEFT ? "left" : cfg.tate == TATE_RIGHT ? "right" : "0",
		cfg.aspect == ASPECT_AUTO ? "auto" : cfg.aspect == ASPECT_4_3 ? "4:3" : "16:9", cfg.scanlines,
		cfg.scanline_strength, cfg.save, cfg.record, cfg.framelog, cfg.netlog, cfg.netlog_port);
	const unsigned k = n < 0 ? 0 : (unsigned)n < size ? (unsigned)n : size - 1;

	return k + ini_text_more(b + k, size - k);
}

/* thread 0, then read-only */
static char dev_name[64]; /* xsdk port: a data root such as /Device/Mass0 */
static char ini_path[128], ini_tmp[136], eep_dir[128], eep_path[160], eep_tmp[160];
static char ini_state[48];      /* READ / CREATED / ... for the card */
static unsigned ini_bad;        /* lines that were not a known key with a good value */
static int p2_seen[CTL_SETS], af2_seen; /* test 71: the ini had a <set>_p2_ line / autofire_p2 */
static int set_seen[CTL_SETS];          /* test 78: the ini had a <set>_ line (P1 or P2) */
static uint16_t boot_words[256];
static int boot_blank = 1;      /* the game starts with all 0xFFFF */
static const char *boot_from = "";
static int save_on;             /* cfg.save with a device */

/* game thread */
static uint16_t seen[256], saved[256];
static volatile int pending;
static uint32_t changed_at;
static volatile unsigned changes;   /* frames whose EEPROM differed from the frame before */
static volatile uint32_t snap_frame; /* the frame of the snapshot in out[] */

/* game thread -> USB thread */
static uint8_t out[EEP_BYTES];
static volatile unsigned seq, taken;

/* USB thread */
static unsigned done_seq;
static struct wgate gate;
static int dirs_made;
static volatile unsigned saves, fails, save_us, save_us_max;
static volatile uint32_t saved_frame; /* the emulated frame of the snapshot last saved */
static char fail_why[48];

/* test 53: ini saves asked for by the game thread (ini_seq), done by the file thread (ini_done),
 * which takes cfg as it is then (a change after that asks again) */
static volatile unsigned ini_seq;
static unsigned ini_done;
static struct wgate ini_gate;

/* ---- the ini ------------------------------------------------------------------------- */

static char *trim(char *s)
{
	char *e;

	while (*s == ' ' || *s == '\t')
		s++;
	e = s + strlen(s);
	while (e > s && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r'))
		*--e = 0;
	return s;
}

/* 1 / 0 for on / off words, -1 for anything else */
static int boolean(const char *v)
{
	if (!strcmp(v, "1") || !strcasecmp(v, "on") || !strcasecmp(v, "yes") || !strcasecmp(v, "true"))
		return 1;
	if (!strcmp(v, "0") || !strcasecmp(v, "off") || !strcasecmp(v, "no") || !strcasecmp(v, "false"))
		return 0;
	return -1;
}

static const char *tate_name(void)
{
	return cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF";
}

static void ini_line(char *line, unsigned n)
{
	static const struct { const char *key; int *val; } keys[] = {
		{"card", &cfg.card}, {"save", &cfg.save}, {"record", &cfg.record}, {"framelog", &cfg.framelog},
		{"scanlines", &cfg.scanlines}, {"netlog", &cfg.netlog}, {"special", &cfg.special}, /* test 52 */
		{"mute", &cfg.mute}, /* test 68 */
	};
	static const struct { const char *key; int *val; } vols[] = { /* test 68 */
		{"volume_music", &cfg.vol_music}, {"volume_sfx", &cfg.vol_sfx}, {"volume_voice", &cfg.vol_voice},
		{"volume_attract", &cfg.vol_attract},
	};
	char *hash = strchr(line, '#'), *eq, *k, *v, *end;
	unsigned i;
	long l;
	int b;

	if (hash)
		*hash = 0;
	line = trim(line);
	if (!*line)
		return;
	eq = strchr(line, '=');
	if (!eq) {
		ini_bad++;
		log_printf(C_YELLOW, "INI LINE %u: NO '=' (IGNORED)", n);
		return;
	}
	*eq = 0;
	k = trim(line);
	v = trim(eq + 1);
	if (!strcasecmp(k, "picture")) {
		if (!strcasecmp(v, "integer"))
			cfg.picture = PIC_INTEGER;
		else if (!strcasecmp(v, "full"))
			cfg.picture = PIC_FULL;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: PICTURE = %.20s? (INTEGER OR FULL)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "game")) { /* test 38 */
		if (!strcasecmp(v, "ask"))
			cfg.game = GAME_ASK;
		else if (!strcasecmp(v, romload_set_name(SET_IBARA)))
			cfg.game = SET_IBARA;
		else if (!strcasecmp(v, romload_set_name(SET_IBARABLK)))
			cfg.game = SET_IBARABLK;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: GAME = %.20s? (ASK, IBARA OR IBARABLK)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "tate")) {
		b = boolean(v);
		if (b == 0)
			cfg.tate = TATE_OFF;
		else if (b == 1 || !strcasecmp(v, "left"))
			cfg.tate = TATE_LEFT;
		else if (!strcasecmp(v, "right"))
			cfg.tate = TATE_RIGHT;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: TATE = %.20s? (0, LEFT OR RIGHT)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "aspect")) { /* test 48 */
		if (!strcasecmp(v, "auto"))
			cfg.aspect = ASPECT_AUTO;
		else if (!strcmp(v, "4:3"))
			cfg.aspect = ASPECT_4_3;
		else if (!strcmp(v, "16:9"))
			cfg.aspect = ASPECT_16_9;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: ASPECT = %.20s? (AUTO, 4:3 OR 16:9)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "scanline_strength")) {
		l = strtol(v, &end, 10);
		if (end != v && *trim(end) == 0 && l >= 0 && l <= 100) {
			cfg.scanline_strength = (int)l;
		} else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: SCANLINE_STRENGTH = %.20s? (0 TO 100)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "autofire") || !strcasecmp(k, "autofire_p2")) { /* test 55; test 71: _p2 */
		l = strtol(v, &end, 10);
		for (i = 0; i < AUTOFIRE_RATES; i++)
			if (end != v && *trim(end) == 0 && l == autofire_rates[i])
				break;
		if (i < AUTOFIRE_RATES) {
			cfg.autofire_hz[k[8] != 0] = (int)l;
			af2_seen |= k[8] != 0;
		} else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: AUTOFIRE = %.20s? (30, 20, 15, 12 OR 10)", n, v);
		}
		return;
	}
	for (i = 0; i < sizeof(vols) / sizeof(vols[0]); i++) /* test 68 */
		if (!strcasecmp(k, vols[i].key)) {
			l = strtol(v, &end, 10);
			if (end != v && *trim(end) == 0 && l >= 0 && l <= 100) {
				*vols[i].val = (int)l;
			} else {
				ini_bad++;
				log_printf(C_YELLOW, "INI LINE %u: %.16s = %.20s? (0 TO 100)", n, k, v);
			}
			return;
		}
	if (!strcasecmp(k, "back_in_run") || !strcasecmp(k, "gadgets") || !strcasecmp(k, "infocard")) {
		/* test 69 (user: "obsolete"): BACK in a run opens the pause menu; the gadgets are always there (M3 GADGETS' ALL
		 * row turns them off) */
		log_printf(C_WHITE, "INI LINE %u: %.12s DROPPED (TEST 69: %s)", n, k,
		           !strcasecmp(k, "back_in_run") ? "BACK IN A RUN = THE PAUSE MENU" : "GADGETS ALWAYS ON, M3 GADGETS' ALL ROW");
		return;
	}
	{
		/* test 55: <set>_<button> = <function>; test 71: <set>_p2_<button> = the second pad's */
		const char *us = strrchr(k, '_');
		size_t sl = us ? (size_t)(us - k) : 0;
		int s, c, f, pad = 0;
		if (us && sl > 3 && !strncasecmp(us - 3, "_p2", 3)) {
			pad = 1;
			sl -= 3;
		}
		for (s = 0; us && s < CTL_SETS; s++)
			if (sl == strlen(settings_ctl_set_name(s)) && !strncasecmp(k, settings_ctl_set_name(s), sl))
				break;
		if (us && s < CTL_SETS) {
			for (c = 0; c < CTL_N && strcasecmp(us + 1, ctl_ini[c]); c++)
				;
			for (f = 0; f < FN_N && strcasecmp(v, fn_ini[f]); f++)
				;
			if (f == FN_N && !strcasecmp(v, "weapon"))
				f = FN_B4;
			if (f == FN_N && !strcasecmp(v, "subweapon"))
				f = FN_B3;
			if (f == FN_N && !strcasecmp(v, "formation"))
				f = FN_B4;
			if (c < CTL_N && f < FN_N && !settings_fn_offered(s, f)) { /* test 82: an ibara RAPID SHOT / BUTTON 4 */
				log_printf(C_YELLOW, "INI LINE %u: %.16s = %.20s: NOT IN %s'S CONTROLS, OFF", n, k, v,
				           settings_ctl_set_name(s));
				f = FN_OFF;
			}
			if (c < CTL_N && f < FN_N) {
				cfg.ctl[pad][s][c] = f;
				p2_seen[s] |= pad;
				set_seen[s] = 1;
			} else {
				ini_bad++;
				log_printf(C_YELLOW, "INI LINE %u: %.16s = %.20s? (%s)", n, k, v,
				           c < CTL_N ? "SHOT, BOMB, RAPID, BUTTON4, WEAPON, AUTOSHOT, CARD OR OFF" : "NO SUCH BUTTON");
			}
			return;
		}
	}
	if (!strcasecmp(k, "netlog_port")) { /* test 40 */
		l = strtol(v, &end, 10);
		if (end != v && *trim(end) == 0 && l >= 1024 && l <= 65535) {
			cfg.netlog_port = (unsigned)l;
		} else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: NETLOG_PORT = %.20s? (1024 TO 65535)", n, v);
		}
		return;
	}
	for (i = 0; i < sizeof(keys) / sizeof(keys[0]); i++)
		if (!strcasecmp(k, keys[i].key)) {
			b = boolean(v);
			if (b < 0) {
				ini_bad++;
				log_printf(C_YELLOW, "INI LINE %u: %.12s = %.20s? (1 OR 0)", n, k, v);
			} else {
				*keys[i].val = b;
			}
			return;
		}
	if (!strcasecmp(k, "gadget_controls_style")) { /* test 67 */
		if (!strcasecmp(v, "stick"))
			cfg.ctl_text = 0;
		else if (!strcasecmp(v, "text"))
			cfg.ctl_text = 1;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: GADGET_CONTROLS_STYLE = %.20s? (STICK OR TEXT)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "gadget_coop")) { /* test 71 */
		b = boolean(v);
		if (b < 0) {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: GADGET_COOP = %.20s? (1 OR 0)", n, v);
		} else {
			cfg.coop = b;
		}
		return;
	}
	if (!strcasecmp(k, "arrange_bullet_design")) { /* test 81 */
		for (i = 0; i < 3 && strcasecmp(v, arr_bullet_words[i]); i++)
			;
		if (i < 3)
			cfg.arr_bullets = (int)i;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: ARRANGE_BULLET_DESIGN = %.20s? (NORMAL, COLOR OR COLORLESS)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "gadget_hadou") || !strcasecmp(k, "gadget_rapid") || !strcasecmp(k, "gadget_items")) {
		log_printf(C_WHITE, "INI LINE %u: %.20s DROPPED (TEST 67: HADOU AND RAPID ARE WEAPON'S ROWS, ITEMS IS GONE)", n,
		           k);
		return;
	}
	if (!strncasecmp(k, "gadget_", 7)) /* test 64 */
		for (i = 0; i < GD_N; i++)
			if (!strcasecmp(k + 7, gadgets_keys[i])) {
				b = boolean(v);
				if (b < 0) {
					ini_bad++;
					log_printf(C_YELLOW, "INI LINE %u: %.20s = %.20s? (1 OR 0)", n, k, v);
				} else {
					cfg.gadget[i] = b;
				}
				return;
			}
	ini_bad++;
	log_printf(C_YELLOW, "INI LINE %u: UNKNOWN KEY %.20s (IGNORED)", n, k);
}

static void ini_read(FILE *f)
{
	static char buf[INI_MAX + 1];
	size_t len = fread(buf, 1, INI_MAX, f);
	char *p = buf, *nl;
	unsigned n = 1;

	buf[len] = 0;
	for (; p && *p; n++) {
		nl = strchr(p, '\n');
		if (nl)
			*nl = 0;
		ini_line(p, n);
		p = nl ? nl + 1 : NULL;
	}
}

/* ---- files --------------------------------------------------------------------------- */

static int make_dir(const char *d)
{
	struct stat st;

	mkdir(d, 0777); /* fails when it exists; the stat tells */
	return stat(d, &st) == 0 && S_ISDIR(st.st_mode) ? 0 : -1;
}

/* <dev>:/ibara360, its nvram and nvram/<set>; 0 when all are there */
static int make_dirs(void)
{
	char d[128];

	snprintf(d, sizeof(d), "%s/ibara360", dev_name);
	if (make_dir(d))
		return -1;
	snprintf(d, sizeof(d), "%s/ibara360/nvram", dev_name);
	if (make_dir(d))
		return -1;
	return make_dir(eep_dir);
}

/* a file's 512 bytes (little-endian words) into boot_words; 1 when read */
static int eep_read(const char *path)
{
	uint8_t b[EEP_BYTES + 1];
	FILE *f = fopen(path, "rb");
	size_t n;
	int i;

	if (!f)
		return 0;
	n = fread(b, 1, sizeof(b), f);
	fclose(f);
	if (n != EEP_BYTES) {
		log_printf(C_RED, "SAVE: %s HAS %u BYTES, NOT 512: IGNORED", path, (unsigned)n);
		return 0;
	}
	for (i = 0; i < 256; i++)
		boot_words[i] = (uint16_t)(b[i * 2] | b[i * 2 + 1] << 8);
	return 1;
}

/* the ini's text with cfg's values into path; 0 when written */
static int ini_write(const char *path)
{
	static char b[INI_MAX];
	const unsigned n = ini_text(b, sizeof(b));
	FILE *f = fopen(path, "wb");
	int ok = f && fwrite(b, 1, n, f) == n;

	if (f && fclose(f) != 0)
		ok = 0;
	return ok ? 0 : -1;
}

static void ini_create(void)
{
	char d[128];
	int ok;

	snprintf(d, sizeof(d), "%s/ibara360", dev_name);
	if (make_dir(d)) {
		snprintf(ini_state, sizeof(ini_state), "NO FOLDER, DEFAULTS");
		return;
	}
	ok = ini_write(ini_path) == 0;
	snprintf(ini_state, sizeof(ini_state), ok ? "CREATED" : "NOT WRITTEN, DEFAULTS");
	log_printf(ok ? C_GREEN : C_RED, "INI: %s %s", ini_path, ini_state);
}

/* test 52: ini.tmp, then the ini removed and ini.tmp renamed to it (as the EEPROM's saves); a save
 * cut off between the two leaves ini.tmp, which settings_load reads. Test 53: on the file thread */
static int ini_save(void)
{
	char d[128];
	uint64_t t0 = tb_read();
	int ok;

	snprintf(d, sizeof(d), "%s/ibara360", dev_name);
	ok = make_dir(d) == 0 && ini_write(ini_tmp) == 0;
	if (ok) {
		unlink(ini_path); /* fails when there is none */
		ok = rename(ini_tmp, ini_path) == 0;
	}
	snprintf(ini_state, sizeof(ini_state), ok ? "SAVED" : "NOT SAVED");
	log_printf(ok ? C_GREEN : C_RED, "INI: %s %s IN %u MS", ini_path,
	           ok ? "SAVED" : "NOT SAVED (FOLDER, WRITE OR RENAME FAILED)", tb_us(t0, tb_read()) / 1000);
	return ok ? 0 : -1;
}

void settings_save_request(void)
{
	if (!dev_name[0]) {
		log_printf(C_RED, "INI: NOT SAVED, NO STORAGE DEVICE");
		return;
	}
	ini_seq = ini_seq + 1;
}

int settings_service(void)
{
	const unsigned s = ini_seq;

	if (s == ini_done || !wgate_open(&ini_gate))
		return 0;
	ini_done = s; /* before reading cfg: a change from now on asks again */
	__sync_synchronize();
	wgate_io(1);
	ini_save();
	wgate_io(0);
	return 1;
}

void settings_load(const char *dev)
{
	struct stat st;
	FILE *f;

	if (!dev) {
		snprintf(ini_state, sizeof(ini_state), "NO DEVICE, DEFAULTS");
		cfg.save = 0;
		return;
	}
	snprintf(dev_name, sizeof(dev_name), "%s", dev); /* ini_create's folder; eeprom_load sets it again */
	snprintf(ini_path, sizeof(ini_path), "%s/ibara360/ibara360.ini", dev);
	snprintf(ini_tmp, sizeof(ini_tmp), "%s.tmp", ini_path);

	f = fopen(ini_path, "rb");
	if (!f && stat(ini_path, &st) != 0 && (f = fopen(ini_tmp, "rb")) != NULL) /* test 52: a save cut off */
		log_printf(C_YELLOW, "INI: ONLY %s THERE (A SAVE CUT OFF): READ", ini_tmp);
	if (f) {
		int s;
		ini_read(f);
		fclose(f);
		/* test 71: an ini from before P2 CONTROLS: the second pad as the first (its buttons, its AUTO SHOT rate) */
		/* test 78: an ini from before ARRANGE's controls: ibara's buttons (both pads), with ARRANGE's three on X, Y and
		 * RB (user 2026-10-26) */
		if (!set_seen[CTL_SET_ARR]) {
			int p;
			for (p = 0; p < CTL_PADS; p++) {
				memcpy(cfg.ctl[p][CTL_SET_ARR], cfg.ctl[p][SET_IBARA], sizeof(cfg.ctl[p][SET_IBARA]));
				cfg.ctl[p][CTL_SET_ARR][CTL_X] = FN_B3;
				cfg.ctl[p][CTL_SET_ARR][CTL_Y] = FN_B4;
				cfg.ctl[p][CTL_SET_ARR][CTL_RB] = FN_LOCK;
			}
			p2_seen[CTL_SET_ARR] = 1;
			log_printf(C_WHITE, "INI: NO ARRANGE CONTROLS: IBARA'S, X = SUB WEAPON CHANGE, Y = FORMATION CHANGE, "
			           "RB = AIM LOCK");
		}
		for (s = 0; s < CTL_SETS; s++)
			if (!p2_seen[s]) {
				memcpy(cfg.ctl[1][s], cfg.ctl[0][s], sizeof(cfg.ctl[1][s]));
				log_printf(C_WHITE, "INI: NO P2 CONTROLS FOR %s: P2'S BUTTONS AS P1'S", settings_ctl_set_name(s));
			}
		if (!af2_seen) {
			cfg.autofire_hz[1] = cfg.autofire_hz[0];
			log_printf(C_WHITE, "INI: NO AUTOFIRE_P2: P2'S AUTO SHOT RATE AS P1'S");
		}
		if (ini_bad)
			snprintf(ini_state, sizeof(ini_state), "READ, %u BAD LINE%s", ini_bad, ini_bad == 1 ? "" : "S");
		else
			snprintf(ini_state, sizeof(ini_state), "READ");
		log_printf(ini_bad ? C_YELLOW : C_GREEN, "INI: %s %s", ini_path, ini_state);
	} else if (stat(ini_path, &st) == 0) {
		snprintf(ini_state, sizeof(ini_state), "UNREADABLE, DEFAULTS");
		log_printf(C_RED, "INI: %s %s", ini_path, ini_state);
	} else {
		ini_create();
	}
	settings_log("INI:");
}

/* test 52: the settings as one log line (the ini's at power-on, the options page's) */
void settings_log(const char *head)
{
	log_printf(C_GREEN, "%s GAME %s SPECIAL %d CARD %d PICTURE %s TATE %s SCANLINES %d STRENGTH %d SAVE %d RECORD %d"
	           " FRAMELOG %d NETLOG %d PORT %u ASPECT %s AUTOFIRE %d P2 %d", head,
	           cfg.game == GAME_ASK ? "ASK" : romload_set_name(cfg.game), cfg.special, cfg.card,
	           cfg.picture == PIC_FULL ? "FULL" : "INTEGER", tate_name(), cfg.scanlines,
	           cfg.scanline_strength, cfg.save, cfg.record, cfg.framelog, cfg.netlog, cfg.netlog_port,
	           cfg.aspect == ASPECT_AUTO ? "AUTO" : cfg.aspect == ASPECT_4_3 ? "4:3" : "16:9", cfg.autofire_hz[0],
	           cfg.autofire_hz[1]);
	{ /* test 64: the gadgets turned off */
		char t[160];
		unsigned n = 0;
		int g;
		t[0] = 0;
		for (g = 0; g < GD_N; g++)
			if (!cfg.gadget[g] && n + 16 < sizeof(t))
				n += (unsigned)snprintf(t + n, sizeof(t) - n, "%s%s", n ? ", " : "", gadgets_names[g]);
		log_printf(C_GREEN, "%s M3 GADGETS OFF: %s; CONTROLS AS %s; CO-OP %s", head, n ? t : "NONE",
		           cfg.ctl_text ? "TEXT" : "THE STICK", cfg.coop ? "ON" : "OFF");
	}
	log_printf(C_GREEN, "%s SOUND: MUSIC %d%% SFX %d%% VOICE %d%% ATTRACT %d%%%s", head, cfg.vol_music, cfg.vol_sfx,
	           cfg.vol_voice, cfg.vol_attract, cfg.mute ? ", MUTED" : ""); /* test 68 */
	log_printf(C_GREEN, "%s ARRANGE: BULLET DESIGN %s", head, cfg.arr_bullets == 1 ? "COLOR" : cfg.arr_bullets == 2 ?
	           "COLORLESS" : "NORMAL"); /* test 81 */
}

/* test 64: the gadgets on as gadgets_mask's bits */
unsigned settings_gadget_mask(void)
{
	unsigned m = 0;
	int g;

	for (g = 0; g < GD_N; g++)
		if (cfg.gadget[g])
			m |= 1u << g;
	return m;
}

void eeprom_load(const char *dev, const char *set)
{
	struct stat st;
	int i;

	for (i = 0; i < 256; i++)
		boot_words[i] = 0xFFFF;
	if (!dev) {
		cfg.save = 0;
		return;
	}
	snprintf(dev_name, sizeof(dev_name), "%s", dev);
	snprintf(eep_dir, sizeof(eep_dir), "%s/ibara360/nvram/%s", dev, set);
	snprintf(eep_path, sizeof(eep_path), "%s/eeprom", eep_dir);
	snprintf(eep_tmp, sizeof(eep_tmp), "%s/eeprom.tmp", eep_dir);

	save_on = cfg.save;
	if (!save_on)
		return;
	if (eep_read(eep_path))
		boot_from = "FILE";
	else if (stat(eep_path, &st) != 0 && eep_read(eep_tmp)) /* a save cut off after its unlink */
		boot_from = "TMP FILE";
	if (*boot_from) {
		for (i = 0; i < 256; i++)
			if (boot_words[i] != 0xFFFF)
				boot_blank = 0;
		log_printf(C_GREEN, "SAVE: %s READ%s", *boot_from == 'T' ? eep_tmp : eep_path, boot_blank ? " (BLANK)" : "");
	} else if (stat(eep_path, &st) == 0) {
		log_printf(C_YELLOW, "SAVE: THE GAME STARTS BLANK, THE NEXT SAVE REPLACES THE FILE");
	} else {
		log_printf(C_YELLOW, "SAVE: NO %s, THE GAME STARTS BLANK", eep_path);
	}
}

/* test 77: ARRANGE's first start (no nvram/ibaraarr/eeprom yet): the game starts from from_set's file (ibara's: its
 * settings, as FREE PLAY, and its scores); ARRANGE's own file from its first save on */
void eeprom_seed(const char *from_set)
{
	char p[160];
	struct stat st;
	int i;

	if (!save_on || *boot_from || stat(eep_path, &st) == 0)
		return;
	snprintf(p, sizeof(p), "%s/ibara360/nvram/%s/eeprom", dev_name, from_set);
	if (!eep_read(p))
		return;
	boot_from = "SEED";
	for (i = 0; i < 256; i++)
		if (boot_words[i] != 0xFFFF)
			boot_blank = 0;
	log_printf(C_GREEN, "SAVE: THE FIRST START FROM %s (ITS OWN FILE FROM THE FIRST SAVE ON)", p);
}

/* Test 81: ARRANGE's own score table (work/arrgfx/ending_table/REPORT.md B): table 3 of its EEPROM (words 0xB6-0xE7,
 * the arcade's game-type-3 table, which arrange.c's arr_table makes the ranking's, the name entry's and the top row's).
 * Once, while it still holds the arcade's factory defaults ((10 - e) x 400,000, "CAV", side 2, ship 8, not cleared):
 * the PS2's ARRANGE defaults (SLPM 0x13D4A0: 40,000,000 .. 4,000,000, the same fields) with the ARRANGE scores the title
 * has put in table 0 until now (not an arcade default and not in ibara's own table 0, the first start's seed), the best
 * ten. An entry is 10 bytes: the score (u32 big-endian), 3 initials, the side, the ship, cleared; byte k of the EEPROM
 * = word k / 2's high byte when k is even. The game saves the file with its next change (the recording's "# eeprom"
 * line has the result). Table 0 is left as it is. */
#define EEP_TABLE(t) (0x40 + 100 * (t))
static void eep_bytes(const uint16_t *w, uint8_t *b)
{
	int i;

	for (i = 0; i < 256; i++) {
		b[2 * i] = (uint8_t)(w[i] >> 8);
		b[2 * i + 1] = (uint8_t)w[i];
	}
}

static void entry_make(uint8_t *e, uint32_t score)
{
	e[0] = (uint8_t)(score >> 24);
	e[1] = (uint8_t)(score >> 16);
	e[2] = (uint8_t)(score >> 8);
	e[3] = (uint8_t)score;
	memcpy(e + 4, "CAV", 3);
	e[7] = 2;
	e[8] = 8;
	e[9] = 0;
}

static uint32_t entry_score(const uint8_t *e)
{
	return (uint32_t)e[0] << 24 | (uint32_t)e[1] << 16 | (uint32_t)e[2] << 8 | e[3];
}

void eeprom_arrange_table(void)
{
	uint8_t b[EEP_BYTES], ib[EEP_BYTES], def[10], cand[20][10];
	uint16_t keep[256];
	char p[160];
	int e, k, n = 0, own = 0, have_ib;

	if (boot_blank)
		return; /* the game writes its factory defaults: the next start fills table 3 */
	eep_bytes(boot_words, b);
	for (e = 0; e < 10; e++) { /* table 3 still the arcade's factory defaults? */
		entry_make(def, (uint32_t)(10 - e) * 400000u);
		if (memcmp(b + EEP_TABLE(3) + 10 * e, def, 10))
			return;
	}
	memcpy(keep, boot_words, sizeof(keep)); /* eep_read reads into boot_words: ibara's file through it, then back */
	snprintf(p, sizeof(p), "%s/ibara360/nvram/ibara/eeprom", dev_name);
	have_ib = eep_read(p);
	if (have_ib)
		eep_bytes(boot_words, ib);
	memcpy(boot_words, keep, sizeof(keep));
	for (e = 0; e < 10; e++) /* the PS2's defaults */
		entry_make(cand[n++], (uint32_t)(10 - e) * 4000000u);
	for (e = 0; e < 10; e++) { /* ARRANGE's own scores in table 0 */
		const uint8_t *x = b + EEP_TABLE(0) + 10 * e;
		int mine = 1;
		for (k = 0; k < 10 && mine; k++) {
			entry_make(def, (uint32_t)(10 - k) * 100000u);
			if (!memcmp(x, def, 10) || (have_ib && !memcmp(x, ib + EEP_TABLE(0) + 10 * k, 10)))
				mine = 0;
		}
		if (mine) {
			memcpy(cand[n++], x, 10);
			own++;
		}
	}
	for (e = 0; e < 10; e++) { /* the best ten (a stable selection: on a tie the earlier, the PS2's default) */
		int best = e;
		uint8_t t[10];
		for (k = e + 1; k < n; k++)
			if (entry_score(cand[k]) > entry_score(cand[best]))
				best = k;
		memcpy(t, cand[e], 10);
		memcpy(cand[e], cand[best], 10);
		memcpy(cand[best], t, 10);
		memcpy(b + EEP_TABLE(3) + 10 * e, cand[e], 10);
	}
	for (k = EEP_TABLE(3) / 2; k < (EEP_TABLE(3) + 100) / 2; k++)
		boot_words[k] = (uint16_t)(b[2 * k] << 8 | b[2 * k + 1]);
	log_printf(C_GREEN, "SAVE: ARRANGE'S OWN TABLE (TABLE 3) = THE PS2'S DEFAULTS 40,000,000 .. 4,000,000 + %d ARRANGE "
	           "SCORE%s FROM TABLE 0%s", own, own == 1 ? "" : "S", have_ib ? "" : " (NO IBARA FILE TO TELL ITS SEED)");
}

int eeprom_boot(uint16_t words[256])
{
	memcpy(words, boot_words, sizeof(boot_words));
	memcpy(seen, boot_words, sizeof(boot_words));
	memcpy(saved, boot_words, sizeof(boot_words));
	return !boot_blank;
}

void eeprom_header_line(char *s, unsigned size)
{
	unsigned i, k;

	if (boot_blank || size < 10 + 256 * 4) {
		if (size)
			s[0] = 0;
		return;
	}
	k = (unsigned)snprintf(s, size, "# eeprom ");
	for (i = 0; i < 256; i++)
		k += (unsigned)snprintf(s + k, size - k, "%04X", (unsigned)boot_words[i]);
	snprintf(s + k, size - k, "\n");
}

/* ---- saving ---------------------------------------------------------------------------- */

void eeprom_frame(uint32_t frame, const uint16_t w[256])
{
	int i;

	if (!save_on)
		return;
	if (memcmp(w, seen, sizeof(seen))) {
		memcpy(seen, w, sizeof(seen));
		pending = 1;
		changed_at = frame;
		changes++;
	}
	if (!pending || frame - changed_at < EEP_SETTLE_FRAMES || taken != seq)
		return;
	pending = 0;
	if (!memcmp(seen, saved, sizeof(saved))) /* changed and changed back */
		return;
	memcpy(saved, seen, sizeof(saved));
	for (i = 0; i < 256; i++) {
		out[i * 2] = (uint8_t)saved[i];
		out[i * 2 + 1] = (uint8_t)(saved[i] >> 8);
	}
	snap_frame = frame;
	__sync_synchronize(); /* the snapshot before its number */
	seq = seq + 1;
}

/* eeprom.tmp, then eeprom removed and eeprom.tmp renamed to it (libfat's rename does not
 * replace a file); a save cut off between the two leaves eeprom.tmp, which the next power-on
 * reads */
static int eep_write(const uint8_t *b)
{
	FILE *f;
	int ok;

	if (!dirs_made) {
		if (make_dirs()) {
			snprintf(fail_why, sizeof(fail_why), "CANNOT CREATE THE FOLDER");
			return -1;
		}
		dirs_made = 1;
	}
	wgate_io(1);
	f = fopen(eep_tmp, "wb");
	ok = f && fwrite(b, 1, EEP_BYTES, f) == EEP_BYTES;
	if (f && fclose(f) != 0)
		ok = 0;
	if (!ok) {
		wgate_io(0);
		snprintf(fail_why, sizeof(fail_why), "CANNOT WRITE EEPROM.TMP");
		return -1;
	}
	unlink(eep_path); /* fails when there is none yet */
	ok = rename(eep_tmp, eep_path) == 0;
	wgate_io(0);
	if (!ok) {
		snprintf(fail_why, sizeof(fail_why), "RENAME FAILED (EEPROM.TMP KEPT)");
		return -1;
	}
	return 0;
}

int eeprom_service(void)
{
	static uint8_t b[EEP_BYTES];
	unsigned s = seq;
	uint32_t f;
	uint64_t t0;
	unsigned us;

	if (s == done_seq)
		return 0;
	if (!wgate_open(&gate))
		return 0;
	__sync_synchronize(); /* the number before the snapshot it covers */
	memcpy(b, out, sizeof(b));
	f = snap_frame;
	__sync_synchronize(); /* copied before the game thread may write out[] again */
	taken = s;
	done_seq = s;
	t0 = tb_read();
	if (eep_write(b)) {
		fails++;
		log_printf(C_RED, "SAVE: %s, TRIED AGAIN AT THE NEXT CHANGE", fail_why);
		return 1;
	}
	us = tb_us(t0, tb_read());
	save_us = us;
	if (us > save_us_max)
		save_us_max = us;
	saves++;
	saved_frame = f;
	log_printf(C_GREEN, "SAVE: EEPROM SAVED (%u), SNAPSHOT OF FRAME %u, %u.%u MS", saves, (unsigned)f, us / 1000,
	           us / 100 % 10);
	return 1;
}

/* ---- card ------------------------------------------------------------------------------ */

/* two rows of at most 65 characters (the card's width); test 37: TATE and SCAN in place of
 * REC and LOG (the recorder's and the frame log's rows say when they are off) */
void settings_rows(char t[SETTINGS_ROWS][100], uint32_t color[SETTINGS_ROWS])
{
	char scan[8] = "OFF";

	if (cfg.scanlines)
		snprintf(scan, sizeof(scan), "%d%%", cfg.scanline_strength);
	snprintf(t[0], 100, "INI %s: CARD %d PIC %s TATE %c SCAN %s SAVE %d SPEC %d", ini_state, cfg.card,
	         cfg.picture == PIC_FULL ? "FULL" : "INT", "-LR"[cfg.tate], scan, cfg.save, cfg.special);
	color[0] = ini_bad || strstr(ini_state, "DEFAULTS") ? C_YELLOW : C_GREEN;
	if (!save_on) {
		snprintf(t[1], 100, "SAVE OFF%s", dev_name[0] ? " (SAVE = 0 IN THE INI)" : " (NO STORAGE DEVICE)");
		color[1] = C_DIM;
		return;
	}
	if (fails)
		snprintf(t[1], 100, "SAVE: SAVED %u FAILED %u: %s", saves, fails, fail_why);
	else
		snprintf(t[1], 100, "SAVE: BOOT %s%s  CHG %u  SAVED %u @%u  %u.%u MS%s", *boot_from ? boot_from : "BLANK",
		         *boot_from && boot_blank ? " (BLANK)" : "", changes, saves, (unsigned)saved_frame, save_us / 1000,
		         save_us / 100 % 10, seq != done_seq || pending ? "  DUE" : "");
	color[1] = fails ? C_RED : saves ? C_GREEN : C_WHITE;
}

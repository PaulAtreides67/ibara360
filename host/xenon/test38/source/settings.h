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
 * Test 38: game = ask / ibara / ibarablk; each game's EEPROM in nvram/<set>/eeprom, as MAME. */
#ifndef SETTINGS_H
#define SETTINGS_H

#include <stdint.h>

#define SETTINGS_ROWS 2      /* card rows settings_rows() fills */
#define EEP_SETTLE_FRAMES 60 /* emulated frames without an EEPROM change before a save */

enum { PIC_INTEGER, PIC_FULL };
enum { TATE_OFF, TATE_LEFT, TATE_RIGHT };

struct settings {
	int card;     /* the card shown once the game runs (RB on any pad shows / hides it) */
	int picture;  /* PIC_INTEGER: the largest whole-number scale; PIC_FULL: the full height, smoothed */
	int save;     /* the EEPROM read at power-on and saved on changes */
	int record;   /* input recording recNNNN.txt (source/recorder.c) */
	int framelog; /* frame log perfNNNN.txt (source/prof.c) */
	int tate;     /* TATE_OFF: the picture upright on a TV standing normally; TATE_LEFT / TATE_RIGHT:
	               * the raster filling a TV turned on its side, its top edge on the left / right */
	int scanlines;         /* dark gaps between the game's raster lines (along the arcade monitor's) */
	int scanline_strength; /* how dark the gaps are, percent: 0 = not at all, 100 = black */
	int game;     /* test 38: GAME_ASK (the pad menu at power-on) or SET_IBARA / SET_IBARABLK */
};
extern struct settings cfg;

#define GAME_ASK -1

/* Thread 0, once the loader has looked for the zips: the ini (created when missing) from dev
 * ("uda"...; NULL: the defaults, nothing saved). */
void settings_load(const char *dev);

/* Test 38: thread 0, after loading, before the USB thread runs: the EEPROM file of the set
 * ("ibara", "ibarablk": <dev>:/ibara360/nvram/<set>/eeprom) from dev (NULL: blank, no saves). */
void eeprom_load(const char *dev, const char *set);

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

#endif

/* Test 98 (user 2026-10-28 ideas, approved for test 98: "MENU STYLE: ARCADE / PS2", "LANGUAGE: ENGLISH / JAPANESE"):
 * the PS2 port's option-menu look for every in-game menu page (work/g97/ps2menu/REPORT.md, work/g98/ps2menu/REPORT.md).
 *
 * main.c's pages draw as they always have (sm_box, sm_text, sm_help); with MENU STYLE PS2 sm_draw runs them once with
 * ps2m_rec set, so those calls only record what they would draw (a box, a text at a place in a colour, a help), and
 * ps2m_render lays the record out again in the PS2's look: each box a leaf window (the PS2's 240 x 88 window 9-sliced,
 * its fill translucent over the game) as wide as the picture allows, its texts in the PS2's 8x8 italic font (columns
 * scaled from the 5x7 font's 6 px to 8), the title in the 8x16 font in cyan, a rose for the ">" cursor, the PS2's
 * grey / yellow rows; the help (the cyan line) in the PS2's description box at the picture's foot, the lines under it
 * moved up into its place; JAPANESE: the help, and the lines under it when they fit, in the PS2's 16x16 font
 * (ja_help.h, from the research's ja_help.tsv). ARCADE never comes here: its pictures are test 97's.
 *
 * The pieces come from ps2data.bin (tools/ps2extract: font.small, font.title, menu.window, menu.rose16; font.jp8 or
 * font.jp for JAPANESE). Without them ps2menu_ok() / ps2menu_jp_ok() are 0 and main.c keeps ARCADE / ENGLISH. */
#ifndef PS2MENU_H
#define PS2MENU_H

#include <stdint.h>

/* the pieces from ps2data.bin (ps2data_open before); 0 = the menu style can be used. Once. */
int ps2menu_init(void);
int ps2menu_ok(void);    /* the fonts and frames are there */
int ps2menu_jp_ok(void); /* and the Japanese glyphs */
const char *ps2menu_why(void); /* what is missing ("" none) */

/* the menu sounds' PCM (ps2data.bin's la.snd.CURSOR, DECIDE, CANCEL; native int16 at 16 kHz, NULL = not there) */
enum { PM_SE_CURSOR, PM_SE_DECIDE, PM_SE_CANCEL, PM_SE_N };
const int16_t *ps2menu_se(int id, unsigned *n);

/* recording: while ps2m_rec is set main.c's drawing calls these instead of drawing (portrait pixels, 240 x 320) */
extern int ps2m_rec;
/* test 102: the page being recorded keeps its green lines English in JAPANESE (the PLAY / TRAINING page: the user saw
 * ARRANGE's short TRAINING panel half Japanese, the other games' taller ones English); ps2m_begin clears it */
extern int ps2m_lines_en;
/* test 102: set while main.c records a value that must start at its column (the music test's names: a long one closes
 * up its letters there instead of moving left, so every name starts where the others do) */
extern int ps2m_keep_x;
/* test 112: set while main.c records a help that stays English in JAPANESE (EX-DEBUG's, user: "all these settings
 * do not need a japanese help description anymore, just english") */
extern int ps2m_help_en;
/* test 118 (user: the JOIN / CONTINUE windows smaller): set while main.c records a box whose panel is exactly the box
 * (its place and width, no 4/3 widening, no full-width panel from 120 px on) and whose texts are at their PS2 places
 * already (x from the box's left edge 1:1, no closing up behind the text before); ps2m_begin clears it */
extern int ps2m_exact;
extern int ps2m_bottom;
void ps2m_begin(void);
void ps2m_box(int x, int y, int w, int h);
void ps2m_text(int x, int y, uint32_t c, const char *s);
void ps2m_help(int x, int y, uint32_t c, const char *s);
/* a picture of its own (SAVE / LOAD STATE's slot picture): draw(t, x, y, arg) at its new place, w x h kept inside */
typedef void (*ps2m_draw_fn)(volatile uint32_t *t, int x, int y, const void *arg);
void ps2m_custom(int x, int y, int w, int h, ps2m_draw_fn draw, const void *arg);

/* the record drawn into t (the game texture: portrait pixel (x, y) at t[x * pitch + 319 - y]); the panels' game
 * picture read from vram (CV1K_VRAM_STRIDE rows) at scroll sx, sy as sm_box reads it; frame = the rose's clock;
 * japanese = LANGUAGE JAPANESE (and ps2menu_jp_ok) */
struct ps2m_target {
	volatile uint32_t *t;
	unsigned pitch;
	const uint16_t *vram;
	unsigned stride;
	uint32_t sx, sy;
};
void ps2m_render(const struct ps2m_target *T, unsigned frame, int japanese);

/* the Japanese of an English line (an exact key or a printf key's pattern), for the log's census; 1 = there */
int ps2m_ja_has(const char *en);
/* census (the log): lines asked for in Japanese since the last call, and those without a translation */
void ps2m_ja_census(unsigned *asked, unsigned *missing, char *last_missing, unsigned n);

#endif

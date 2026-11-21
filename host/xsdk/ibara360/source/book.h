/* ibara360 test 139 F: BOOK, the Insanity DVD book's pages (ibarabook.dat beside the .xex files, webdat.h's IBWB format:
 * entries P001..P094 (1280 x 1914 JPEG) and H001..H094 (640 x 957 JPEG, the spread's half pages)) read in-game. book.c keeps
 * its own table reader (webdat's table is the stage map's) and its textures. The decoder (book_file_job) reads and decodes
 * the pages the book needs into the textures while the game shows LOADING; the game thread (book_input, book_draw) only
 * reads the state. Nothing else is kept in memory.
 *
 * Calls (main.c; see work/g139/REPORT_F.md): book_init once at boot, book_avail for the OPTIONS row, book_open / book_close
 * when the row is chosen and left, book_input once per game-thread frame while book_is_open(), book_set_spread(TATE off)
 * then book_draw in the frame (the caller clears the front buffer to black first), book_file_job on a hardware thread
 * (the blitter band; NOT the files thread) while book_is_open(), and book_wants_hold() to freeze the emulation. */
#ifndef BOOK_H
#define BOOK_H

#include <stdint.h>

#include "xsdk/texture.h"

/* the buttons book_input takes (main.c maps its INPUT_GAMEPAD_* bits to these) */
#define BOOK_BTN_A     0x0001u /* zoom FIT -> WIDTH -> 2x WIDTH -> FIT */
#define BOOK_BTN_B     0x0002u /* back (B or BACK) */
#define BOOK_BTN_LB    0x0004u /* previous spread (one page in TATE; wraps) */
#define BOOK_BTN_RB    0x0008u /* next spread (one page in TATE; wraps) */
#define BOOK_BTN_UP    0x0010u /* pan while zoomed (held) */
#define BOOK_BTN_DOWN  0x0020u
#define BOOK_BTN_LEFT  0x0040u /* pan while zoomed; past the edge of a page, the other page of the spread */
#define BOOK_BTN_RIGHT 0x0080u

/* main.c's glyph(): the 5 x 7 font, row by row, bit 0x10 = the left column (the same table sm_text uses) */
typedef const unsigned char *(*book_glyph_fn)(char c);

/* book_draw's quad: texture t drawn at x0, y0 .. x1, y1 (front buffer pixels, y down) with its uv u0, v0 .. u1, v1
 * (0 .. 1). main.c draws it with its own quad path (the card's: the quad shader, make_quad, set_texture, set_vertices,
 * draw); no alpha, no tint. */
typedef void (*book_quad_fn)(const XsdkTexture *t, float x0, float y0, float x1, float y1, float u0, float v0, float u1,
                             float v1);

/* the table of ibarabook.dat beside the .xex (launch_path, the same as ibaraweb.dat); logs "BOOK: ibarabook.dat READ, n
 * PAGES" (green), "BOOK: NO IBARABOOK.DAT BESIDE THE XEX FILES" (yellow) or a red reason. 0 = read. Once: later calls
 * return the first answer. glyph is kept for the texts (NULL = no texts). */
int book_init(book_glyph_fn glyph);

/* 1 when the book can be opened (the OPTIONS row ON), else 0 and book_why() says why */
int book_avail(void);
const char *book_why(void);

/* the page count read (94), 0 without the file */
int book_pages(void);

/* opens the book on its current page (kept from the last time this power-on; the first page at first). Creates the
 * textures once (kept until the power-off: there is no texture free in xsdk as used here), logs "BOOK: OPEN (PAGE n)".
 * Nothing when book_avail() is 0. */
void book_open(void);

/* closes the book (B / BACK): waits for a texture the decoder is writing, so the caller can draw the game again at once.
 * The page number is kept. */
void book_close(void);

/* 1 while the book is open */
int book_is_open(void);

/* 1 while the emulation must be held (the book is open: the frozen game sits behind the black screen, sound muted as in
 * the pause). Same as book_is_open(); named for the caller's hold. */
int book_wants_hold(void);

/* 1 = the two-page spread (YOKO: left page = even page, cover alone on the right), 0 = one page (TATE). The caller passes
 * cfg.tate == TATE_OFF before each book_draw. Ignored (stays 0) when the file has no H entries for every page. */
void book_set_spread(int on);

/* the book's buttons and the left stick (raw XInput-style values, -32768 .. 32767, up positive), once per game-thread
 * frame while the book is open. press = the buttons that went down this frame, held = the buttons down now. Returns 1
 * when B or BACK was pressed: the caller then calls book_close() (the log says "BOOK: BACK (PAGE n)"). */
int book_input(unsigned press, unsigned held, int stick_x, int stick_y);

/* the decoder's part: one unit of work (one JPEG read + decode + texture write for one page, or nothing when the book has
 * all the pages it needs). Returns 1 when it did work, 0 when there was none (the caller sleeps a little then). Only one
 * thread may call it. Logs "BOOK: PAGE n DECODED IN n MS" / "BOOK: HALF PAGE n DECODED IN n MS" (green) or a red reason. */
int book_file_job(void);

/* the frame's book: in TATE (or zoomed) one page at FIT (the whole page height above the line at the bottom, centred, the
 * display's pixel aspect par as the menus use it) or zoomed (WIDTH = one page's width = the display width, top first, then
 * 2x) and panned; in the spread two half pages side by side at FIT. "LOADING" while the page is not there, the failure in
 * red when it did not decode, and the line "PAGE n / 94   LB/RB PAGE   A ZOOM   B BACK" (or "PAGES n-m / 94") at the
 * bottom. fb_w x fb_h is the front buffer; quad draws each textured rectangle. Nothing when the book is not open. */
void book_draw(unsigned fb_w, unsigned fb_h, float par, book_quad_fn quad);

#endif

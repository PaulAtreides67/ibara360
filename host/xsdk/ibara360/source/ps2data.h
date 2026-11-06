/* Test 97 (user 2026-10-31: the PS2 port's data comes from the user's own disc through an offline tool, not inside the
 * .xex files): ps2data.bin beside the .xex files, written by tools/ps2extract (ps2extract.exe, from an Ibara PS2 disc
 * image, SLPM-66301), holds every picture and sound the launcher and the games took from IBARAR.PDM / ALLIMAGE.DAT;
 * ps2music.bin (optional) the soundtrack's 16 streams. The format (work/g97/ps2data/REPORT.md), all big-endian:
 *
 *   0x00 "IB360PS2"   0x08 u32 version (1)   0x0C u32 count   0x10 u32 table offset (0x40)   0x14 u32 data offset
 *   0x18 u32 the tool's version   0x1C u32 IBARAR.TBL's CRC32   0x20 char[32] what it was made from
 *   at the table: count entries of 64 bytes: char name[32] (NUL padded), u32 offset, u32 stored bytes, u32 bytes,
 *   u32 CRC32 of the bytes, u16 flags (PS2F_ZLIB: stored = a zlib stream of them), u16 kind (PS2K_*), u16 w, u16 h,
 *   u32 extra (a sound's rate), u32 0
 *
 * Every blob is read when asked (the file opened, read and closed each time: any thread may), so the gallery's 10 MB
 * waits for the gallery. Without the file (or a wrong one) the loaders return NULL and say why (ps2data_why) for the
 * screen; the data pointers below stay at their blank defaults (all transparent), so nothing reads past them. */
#ifndef PS2DATA_H
#define PS2DATA_H

#include <stdint.h>

#define PS2DATA_FILE "ps2data.bin"
#define PS2MUSIC_FILE "ps2music.bin"
#define PS2DATA_MAGIC "IB360PS2"
#define PS2DATA_VERSION 1
#define PS2DATA_HEAD 0x40
#define PS2DATA_ENTRY 64

enum { PS2F_ZLIB = 1 };
enum {
	PS2K_RAW,      /* bytes */
	PS2K_ARGB32,   /* w x h big-endian u32 A R G B (bytes A, R, G, B) */
	PS2K_S16,      /* big-endian int16 mono at extra Hz */
	PS2K_ARGB1555, /* w x h big-endian u16, bit 15 = opaque */
	PS2K_TABLE     /* records (bgm.table: PS2BGM_REC bytes each) */
};

struct ps2_entry {
	char name[32];
	uint32_t off, stored, size, crc;
	uint16_t flags, kind, w, h;
	uint32_t extra;
};

/* the blobs' names (tools/ps2extract/ps2extract.c writes them) */
#define PS2N_TITLE "la.title"        /* ARGB32 640 x 448, the launcher's title screen */
#define PS2N_TITLE_V "la.title_v"    /* test 97: ARGB32 640 x 896, the TATE title (the gallery's picture 15, ps2extract 2) */
#define PS2N_MODE "la.mode"          /* ARGB32 640 x 448, MODE SELECT's painting */
#define PS2N_ATLAS "la.atlas"        /* ARGB32 512 x LA_ATLAS_H, la_sprites' pictures (LOGO_BLK and WHITE left clear) */
#define PS2N_SND "la.snd."           /* + CURSOR, DECIDE, CANCEL, COIN, V_IBARA, V_KAKATTE: S16 at 16000 Hz */
#define PS2N_GALLERY "gallery"       /* RAW: the gallery's IBGL file (tools/launcher/mkgallery.py's format) */
#define PS2N_TICK_BAND "ticker.band" /* ARGB32 240 x 32 */
#define PS2N_TICK_TEXT "ticker.text" /* ARGB32 240 x 30 */
#define PS2N_LOADING "loading"       /* ARGB32 240 x 25, the launcher's NOW LOADING sprite */
#define PS2N_ARRGFX "arr.gfx"        /* RAW (zlib): ARRANGE's ending | banner | 12 BULLET DESIGN pages (arrgfx_data.h) */
#define PS2N_ARRFBOX "arr.fbox"      /* ARGB1555 12 x 77: ARRANGE's formation label box, [77][12] */
#define PS2N_BGM_TABLE "bgm.table"   /* TABLE: the 16 soundtrack streams (IBARAR.TBL files 1113-1128) */
#define PS2N_BGM "bgm."              /* + 00 .. 15 in ps2music.bin: the streams as on the disc (BG00 headers) */
/* the PS2 menus' pieces (ps2extract 1 on; test 98's MENU STYLE PS2 and LANGUAGE JAPANESE read them: ps2menu.c) */
#define PS2N_FONT_SMALL "font.small" /* ARGB32 256 x 32: the 8x8 italic font, char c at (8 (c & 31), 8 (c >> 5)) */
#define PS2N_FONT_TITLE "font.title" /* ARGB32 256 x 64: the 8x16 font, char c at (8 (c & 31), 16 (c >> 5)) */
#define PS2N_FONT_JP "font.jp"       /* ARGB32 256 x 3328: the 16x16 SJIS glyphs, slot s at (16 (s & 15), 16 (s >> 4)) */
#define PS2N_FONT_JP8 "font.jp8"     /* test 98, ps2extract 3: RAW 256 x 3328 bytes, font.jp's grey (0 = clear) */
#define PS2N_MENU_WINDOW "menu.window" /* ARGB32 240 x 88: the leaf window (8 px vine border, fill (48, 24, 32)) */
#define PS2N_MENU_ROSE16 "menu.rose16" /* ARGB32 64 x 32: the small rose cursor, 8 frames of 16 x 16 */

/* bgm.table's records: u32 IBARAR.TBL file, u32 its offset in IBARAR.PDM, u32 bytes, u32 offset in ps2music.bin (0 =
 * not there), then the stream's first 64 bytes (its BG00 header) */
#define PS2BGM_STREAMS 16
#define PS2BGM_FIRST 1113
#define PS2BGM_REC 80

/* ps2data.bin's header and table read (once; later calls return the first one's answer): 0 = there and good */
int ps2data_open(void);
/* why it is not there, for the screen and the log ("" when it is) */
const char *ps2data_why(void);
int ps2data_ok(void);
const struct ps2_entry *ps2data_find(const char *name);
/* a blob's bytes in a new malloc'd buffer (inflated, its CRC checked), *size its bytes; NULL = not there or bad */
void *ps2data_load(const char *name, uint32_t *size);
/* a blob as stored (a zlib stream when it has PS2F_ZLIB), *size the stored bytes, e its entry */
void *ps2data_load_stored(const char *name, uint32_t *size, const struct ps2_entry **e);
/* a blob into dst, exactly n bytes; 0 = done */
int ps2data_load_into(const char *name, void *dst, uint32_t n);
/* test 123: n bytes of the blob's stored bytes at off into dst (not for a zlib blob; a part of a big one); 0 = done */
int ps2data_read_part(const char *name, uint32_t off, void *dst, uint32_t n);

/* The games (main.c, once, before the ROM load's NOW LOADING): the ticker, the NOW LOADING sprite and (ARRANGE) the
 * formation box and arrgfx's stream put behind the pointers card_ticker.h, card_loading.h, arrhud_art.h and
 * arrgfx_data.h declare. Returns 0 when all were there; the ones missing stay blank (arrgfx: NULL, 0 bytes). */
int ps2data_games_init(void);

#endif

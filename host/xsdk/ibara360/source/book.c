/* ibara360 test 139 F: BOOK (book.h). The page JPEGs go through webdat_jpeg_argb (webdat.c's stb_image build); the table
 * is read here with the same IBWB layout (webdat.h). Entries T001..T094 and B001..B094 are the top and bottom halves of a
 * page (1280 x 957, the two halves of the 1280 x 1914 zoom page) and H001..H094 are the spread's half pages (640 x 957).
 * Textures: one full page (1280 x 1914, zoom: T copied into rows 0..956, B into 957..1913), two half pages (640 x 957,
 * the spread) and the two text lines. The read-ahead of the next spread is decoded into malloc'd ARGB buffers and copied
 * into the half-page textures on the turn (the textures are never freed: xsdk has no texture free as used here).
 *
 * Threads: the game thread (book_input, book_draw, book_open, book_close) owns bk_px / bk_py / bk_top / bk_stick_latch
 * and the bake of the texts. The decoder (book_file_job, one thread) owns the read-ahead buffers and writes a texture
 * only between bk_busy = 1 and 0, after BK_IDLE_FRAMES game frames without a draw of any texture (frames already queued
 * have flipped). The game draws a texture only when bk_busy is 0 and the texture holds the page on screen. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xsdk/gpu.h"
#include "xsdk/kernel.h"
#include "xsdk/texture.h"
#include "xsdk/thread.h"

#include "card.h"    /* C_* colours, log_printf */
#include "launch.h"  /* launch_path: beside the .xex */
#include "webdat.h"  /* the IBWB layout, webdat_jpeg_argb */
#include "xplat.h"   /* tb_read, tb_us */
#include "book.h"

#define BK_FILE "ibarabook.dat"
#define BK_W 1280            /* a full page's pixels (the zoom texture) */
#define BK_H 1914
#define BK_HW 640            /* a half page's pixels (the H entries, test 139 F3) */
#define BK_HH 957            /* half a page's height (H entries, and T/B entries) */
#define BK_MAXP 1000         /* page numbers 1 .. 999 */
#define BK_TXT_W 576         /* the bottom line's texture: 47 characters at 2 x 6 pixels = 564 wide, 14 high */
#define BK_TXT_H 32          /* test 139: 32 px high like other readable text textures (16 garbled the bottom line) */
#define BK_MSG_W 512         /* LOADING and the failure: 3 x 6 pixels a character, 21 high */
#define BK_MSG_H 32
#define BK_TXT_SC 2          /* test 139 F1: 3 would need 846 texels a line; kept at 2 */
#define BK_MSG_SC 3
#define BK_STICK_DEAD 8192   /* the stick's dead zone (book only; main.c's STICK_DEAD is much wider) */
#define BK_PAN_KEY 0.006f    /* the pan per frame in page heights (the D-pad) */
#define BK_PAN_STICK 0.012f  /* the same at the stick's full travel */
#define BK_MAX_ZOOM 2        /* bk_zoom 0 = FIT, 1 = WIDTH (one page's width = the display's), 2 = 2x WIDTH (test 139 F4) */
#define BK_IDLE_FRAMES 3     /* game frames without a texture draw before the decoder writes one (test 139 F3) */

struct bk_page {
	uint32_t offset, bytes;
	int have;
};

/* the table, read once (book_init) and only read after it */
static int bk_st;                /* 0 not read, 1 good, -1 not there, -2 not the book's / damaged */
static char bk_why_s[96];
static char bk_path[260];        /* the file, as fopen takes it */
static struct bk_page bk_ttab[BK_MAXP];   /* T entries: bk_ttab[n - 1] = page n, top half (1280 x 957) */
static struct bk_page bk_btab[BK_MAXP];   /* B entries: bk_btab[n - 1] = page n, bottom half (1280 x 957) */
static struct bk_page bk_htab[BK_MAXP];   /* H entries: bk_htab[n - 1] = page n, half size (640 x 957) */
static int bk_n;                 /* pages (1 .. bk_n all there as spread pages) */
static int bk_hn;                /* half pages (1 .. bk_hn all there) */
static int bk_spread_ok;         /* the spread can be used: a half page for every page */
static int bk_zoom_unavail[BK_MAXP]; /* zoom on that page is unavailable (T/B missing), logged once */
static int bk_zoom_heap_logged;  /* the first successful zoom decode's heap line is logged */
static book_glyph_fn bk_glyph;

/* shared by the game thread and the decoder */
static volatile int bk_open;             /* the book is open (game thread) */
static volatile int bk_busy;             /* a texture is being written: the game shows LOADING */
static volatile int bk_idle;             /* game frames since a texture was last drawn (saturates) */
static volatile int bk_spread;           /* 1 = two pages side by side (YOKO), 0 = one page (TATE) */
static volatile int bk_rot;              /* 0 upright, 1 LEFT (CCW), 2 RIGHT (CW) - test 147 */
static volatile int bk_cur = 1;          /* the page the book is on (a spread: its anchor page, kept across opens) */
static volatile int bk_zoom;             /* 0 FIT, 1 WIDTH, 2 2x WIDTH */
static volatile int bk_side;             /* zoomed in a spread: 0 = the left page, 1 = the right page */
static volatile int bk_full_pg;          /* the full texture holds this page (0 none) */
static volatile int bk_full_fail;        /* this page did not decode (0 none) */
static volatile int bk_half_pg[2];       /* bk_half[k] holds this page (0 none); k 0 = left, 1 = right */
static volatile int bk_half_fail[2];     /* this page did not decode (0 none) */

/* game thread only */
static int bk_made;             /* the textures exist */
static float bk_px, bk_py;      /* the view's centre, from the page's centre, in page widths / heights (uv) */
static int bk_top;              /* the zoomed view starts at the page's top */
static int bk_stick_latch;      /* the stick is still past the edge it switched pages at */
static XsdkTexture bk_tex, bk_half[2], bk_txt, bk_msg, bk_fail;
static char bk_txt_s[64];       /* the line the bottom texture was baked for */
static int bk_txt_w;            /* the bottom line's width in texture pixels (for uv) */
static int bk_fail_key;         /* the page the failure text was baked for (-1 none) */
static int bk_fail_w;           /* the failure text's width in texture pixels (for uv) */

/* decoder only: the read-ahead of the next spread (ARGB, one per half page) and its bookkeeping */
static uint32_t *ra_argb[2];
static int ra_pg[2], ra_fail[2];
static int ra_spread = -1;      /* the spread the read-ahead holds (-1 none) */
static int ra_logged = -1;      /* the spread whose "READ AHEAD IN" line is logged */
static int hit_spread = -1;     /* the spread a read-ahead page was copied for (its "FROM THE READ-AHEAD" line) */
static int fr_logged = -1;
static uint64_t ra_t0;

static uint32_t be32(const unsigned char *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static void bk_set(int st, const char *text)
{
	bk_st = st;
	snprintf(bk_why_s, sizeof(bk_why_s), "%s", text);
}

static unsigned bk_heap_free_kb(void)
{
	MM_QUERY_STATISTICS_RESULT ms;
	memset(&ms, 0, sizeof(ms));
	ms.size = sizeof(ms);
	MmQueryStatistics(&ms);
	return (unsigned)(ms.title.available_pages * 4);
}

/* "T"/"B"/"H" + three digits + NUL, as the table's name field holds it: its page number (1 .. 999), 0 = not a page;
 * *kind = 'T', 'B' or 'H' */
static int bk_name_page(const char *name, char *kind)
{
	int n;

	if ((name[0] != 'T' && name[0] != 'B' && name[0] != 'H') || name[4] != 0)
		return 0;
	for (n = 1; n < 4; n++)
		if (name[n] < '0' || name[n] > '9')
			return 0;
	*kind = name[0];
	return (name[1] - '0') * 100 + (name[2] - '0') * 10 + (name[3] - '0');
}

int book_init(book_glyph_fn glyph)
{
	unsigned char h[12], *t = NULL;
	char p[260], *c;
	FILE *f = NULL;
	long len = 0;
	uint32_t i, count;
	int k;

	if (bk_st)
		return bk_st > 0 ? 0 : -1;
	bk_glyph = glyph;
	if (launch_path(p, sizeof(p), BK_FILE)) {
		bk_set(-1, "NO IBARABOOK.DAT BESIDE THE XEX FILES");
		log_printf(C_YELLOW, "BOOK: %s", bk_why_s);
		return -1;
	}
	for (c = p; *c; c++) /* newlib's fopen: '/' (as webdat.c) */
		if (*c == '\\')
			*c = '/';
	snprintf(bk_path, sizeof(bk_path), "%s", p);
	f = fopen(bk_path, "rb");
	if (!f) {
		bk_set(-1, "NO IBARABOOK.DAT BESIDE THE XEX FILES");
		log_printf(C_YELLOW, "BOOK: %s", bk_why_s);
		return -1;
	}
	if (fseek(f, 0, SEEK_END) || (len = ftell(f)) < 12 || fseek(f, 0, SEEK_SET) || fread(h, 1, 12, f) != 12 ||
	    memcmp(h, WEBDAT_MAGIC, 4) || be32(h + 4) != WEBDAT_VERSION) {
		fclose(f);
		bk_set(-2, "IBARABOOK.DAT IS NOT THE BOOK'S");
		log_printf(C_RED, "BOOK: %s", bk_why_s);
		return -1;
	}
	count = be32(h + 8);
	if (!count || count > 4096 || 12 + (uint64_t)count * WEBDAT_ENTRY > (uint64_t)len ||
	    !(t = malloc((size_t)count * WEBDAT_ENTRY))) {
		fclose(f);
		free(t);
		bk_set(-2, "IBARABOOK.DAT IS DAMAGED (ITS TABLE)");
		log_printf(C_RED, "BOOK: %s", bk_why_s);
		return -1;
	}
	if (fread(t, WEBDAT_ENTRY, count, f) != count) {
		fclose(f);
		free(t);
		bk_set(-2, "IBARABOOK.DAT IS DAMAGED (SHORT)");
		log_printf(C_RED, "BOOK: %s", bk_why_s);
		return -1;
	}
	fclose(f);
	for (i = 0; i < count; i++) {
		const unsigned char *e = t + (size_t)i * WEBDAT_ENTRY;
		char name[29], kind = 0;
		uint32_t off, bytes, knd;
		unsigned w, hh;
		int n;

		memcpy(name, e, 28);
		name[28] = 0;
		n = bk_name_page(name, &kind);
		if (!n)
			continue; /* not a page: ignored */
		off = be32(e + 28);
		bytes = be32(e + 32);
		w = (unsigned)(e[36] << 8 | e[37]);
		hh = (unsigned)(e[38] << 8 | e[39]);
		knd = be32(e + 40);
		if (knd != WEBDAT_KIND_JPEG ||
		    (kind == 'H' ? (w != BK_HW || hh != BK_HH) : (w != BK_W || hh != BK_HH)) ||
		    (uint64_t)off > (uint64_t)len || (uint64_t)bytes > (uint64_t)len - off) {
			free(t);
			bk_set(-2, "IBARABOOK.DAT IS DAMAGED (A PAGE)");
			log_printf(C_RED, "BOOK: %s (%s)", bk_why_s, name);
			return -1;
		}
		if (kind == 'H') {
			bk_htab[n - 1].offset = off;
			bk_htab[n - 1].bytes = bytes;
			bk_htab[n - 1].have = 1;
		} else if (kind == 'T') {
			bk_ttab[n - 1].offset = off;
			bk_ttab[n - 1].bytes = bytes;
			bk_ttab[n - 1].have = 1;
		} else if (kind == 'B') {
			bk_btab[n - 1].offset = off;
			bk_btab[n - 1].bytes = bytes;
			bk_btab[n - 1].have = 1;
		}
	}
	free(t);
	for (k = 0; k < BK_MAXP && bk_htab[k].have; k++)
		;
	bk_hn = k;
	bk_n = bk_hn;
	if (!bk_n) {
		bk_set(-2, "IBARABOOK.DAT HAS NO PAGES");
		log_printf(C_RED, "BOOK: %s", bk_why_s);
		return -1;
	}
	bk_spread_ok = bk_hn == bk_n; /* test 139 F3: the spread needs a half page for every page */
	bk_set(1, "");
	log_printf(C_GREEN, "BOOK: ibarabook.dat READ, %d PAGES", bk_n);
	if (!bk_spread_ok)
		log_printf(C_YELLOW, "BOOK: NO HALF PAGES FOR ALL %d PAGES (%d FOUND): ONE PAGE AT A TIME", bk_n, bk_hn);
	return 0;
}

int book_avail(void)
{
	return bk_st > 0;
}

const char *book_why(void)
{
	return bk_why_s;
}

int book_pages(void)
{
	return bk_st > 0 ? bk_n : 0;
}

int book_is_open(void)
{
	return bk_open;
}

int book_wants_hold(void)
{
	return bk_open;
}

/* the spread of a page: spread 0 = the cover (page 1 on the right, left half empty); spread s = pages 2s (left) and 2s+1
 * (right; no right page after the last one) */
static int bk_spread_of(int p)
{
	return p / 2;
}

/* the spread's pages: *l = 0 when there is no left page, *r = 0 when there is no right page */
static void bk_pages_of(int s, int *l, int *r)
{
	if (s == 0) {
		*l = 0;
		*r = 1;
		return;
	}
	*l = 2 * s;
	*r = 2 * s + 1 <= bk_n ? 2 * s + 1 : 0;
}

/* the page the zoom shows: the spread's left or right page (the side it is on, the other when that one is missing) */
static int bk_zoom_page(void)
{
	int l, r;

	if (!bk_spread)
		return bk_cur;
	bk_pages_of(bk_spread_of(bk_cur), &l, &r);
	if (bk_side && r)
		return r;
	return l ? l : r;
}

/* 1 when the spread on screen has a page on that side (0 left, 1 right) */
static int bk_has_side(int side)
{
	int l, r;

	bk_pages_of(bk_spread_of(bk_cur), &l, &r);
	return side ? r != 0 : l != 0;
}

/* the spread's name for the logs: "1" (cover), "2-3", "94" (the last, alone) */
static void bk_spread_name(int s, char *b, unsigned n)
{
	int l, r;

	bk_pages_of(s, &l, &r);
	if (!l)
		snprintf(b, n, "%d", r);
	else if (r)
		snprintf(b, n, "%d-%d", l, r);
	else
		snprintf(b, n, "%d", l);
}

/* w x h texels of t cleared to 0 and the text s drawn into them in colour col, sc x sc texels a font pixel; returns the
 * text's width in texels. The glyphs are main.c's: 7 rows, bit 0x10 = the left column */
static int bk_bake(XsdkTexture *t, unsigned w, unsigned h, const char *s, uint32_t col, unsigned sc)
{
	unsigned x, y, i, row, c, sx, sy, x0 = 0;
	const size_t n = strlen(s);

	if (!bk_glyph || !t->texels)
		return 0;
	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++)
			t->texels[(size_t)y * t->pitch + x] = 0;
	for (i = 0; i < n; i++, x0 += 6 * sc) {
		const unsigned char *g = bk_glyph(s[i]);

		for (row = 0; row < 7; row++)
			for (c = 0; c < 5; c++)
				if (g[row] & (0x10 >> c))
					for (sy = 0; sy < sc; sy++)
						for (sx = 0; sx < sc; sx++) {
							const unsigned px = x0 + c * sc + sx, py = row * sc + sy;

							if (px < w && py < h)
								t->texels[(size_t)py * t->pitch + px] = col;
						}
	}
	xsdk_gpu_invalidate(t->address, t->size_bytes);
	return (int)(n * 6 * sc);
}

/* the textures, once (game thread): the full page, two half pages and the three text textures; kept until the power-off
 * (book_close does not free them) */
static int bk_make(void)
{
	if (bk_made)
		return 0;
	if (!NT_SUCCESS(xsdk_texture_create(&bk_tex, XSDK_FORMAT_A8R8G8B8, BK_W, BK_H, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&bk_half[0], XSDK_FORMAT_A8R8G8B8, BK_HW, BK_HH, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&bk_half[1], XSDK_FORMAT_A8R8G8B8, BK_HW, BK_HH, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&bk_txt, XSDK_FORMAT_A8R8G8B8, BK_TXT_W, BK_TXT_H, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&bk_msg, XSDK_FORMAT_A8R8G8B8, BK_MSG_W, BK_MSG_H, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&bk_fail, XSDK_FORMAT_A8R8G8B8, BK_MSG_W, BK_MSG_H, 1, false))) {
		log_printf(C_RED, "BOOK: OPEN FAILED (NO GPU MEMORY FOR ITS TEXTURES)");
		return -1;
	}
	bk_bake(&bk_msg, BK_MSG_W, BK_MSG_H, "LOADING", C_WHITE, BK_MSG_SC);
	bk_fail_key = -1;
	bk_made = 1;
	return 0;
}

void book_open(void)
{
	if (bk_st <= 0 || bk_open)
		return;
	if (bk_make())
		return;
	bk_zoom = 0;
	bk_side = 0;
	bk_px = bk_py = 0;
	bk_top = 1;
	bk_stick_latch = 0;
	bk_open = 1;
	__sync_synchronize();
	log_printf(C_WHITE, "BOOK: OPEN (PAGE %d)", bk_cur);
}

void book_close(void)
{
	bk_open = 0;
	__sync_synchronize();
	while (bk_busy) /* a texture being written ends first (the decoder sees bk_open = 0 and stops waiting) */
		xsdk_thread_sleep(1);
}

/* book_set_spread (test 139 F2): the layout; a change resets the view (zoom, pan, page side) */
void book_set_spread(int on)
{
	on = on && bk_spread_ok && !bk_rot; /* test 147: no spreads when the book is rotated */
	if (on == bk_spread)
		return;
	bk_spread = on;
	bk_zoom = 0;
	bk_side = 0;
	bk_px = bk_py = 0;
	bk_top = 1;
	bk_stick_latch = 0;
}

/* test 147: rotation follows the game picture (LEFT = CCW, RIGHT = CW); rotated book shows one page at a time. */
void book_set_rotation(int rot)
{
	if (rot < 0 || rot > 2)
		rot = 0;
	if (rot == bk_rot)
		return;
	bk_rot = rot;
	if (bk_rot)
		bk_spread = 0;
	bk_zoom = 0;
	bk_side = 0;
	bk_px = bk_py = 0;
	bk_top = 1;
	bk_stick_latch = 0;
}

/* the page turn: a spread (LB -1, RB +1; wraps: cover after the last spread, the last after the cover) or a page */
static void bk_turn(int d)
{
	if (bk_spread) {
		const int S = bk_n / 2 + 1;
		const int s = (bk_spread_of(bk_cur) + d + S) % S;

		bk_cur = s ? 2 * s : 1;
	} else
		bk_cur = (bk_cur - 1 + d + bk_n) % bk_n + 1;
	bk_zoom = 0;
	bk_side = 0;
	bk_px = bk_py = 0;
	bk_top = 1;
	bk_stick_latch = 0;
}

static int bk_axis(int v)
{
	if (v > BK_STICK_DEAD)
		return v - BK_STICK_DEAD;
	if (v < -BK_STICK_DEAD)
		return v + BK_STICK_DEAD;
	return 0;
}

static float bk_clampf(float v, float lim)
{
	return v > lim ? lim : v < -lim ? -lim : v;
}

/* the decoder: waits until the game has drawn no texture for BK_IDLE_FRAMES frames, with bk_busy already 1 (so the game
 * shows LOADING); 0 when the book closed meanwhile (nothing is written then) */
static int bk_begin_write(void)
{
	bk_busy = 1;
	__sync_synchronize();
	while (bk_open && bk_idle < BK_IDLE_FRAMES)
		xsdk_thread_sleep(1);
	return bk_open;
}

static void bk_end_write(void)
{
	__sync_synchronize();
	bk_busy = 0;
}

/* the decoder: copies w x h ARGB pixels into t (its pitch) and has the GPU see them */
static void bk_store(XsdkTexture *t, unsigned w, unsigned h, const uint32_t *argb)
{
	unsigned x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++)
			t->texels[(size_t)y * t->pitch + x] = argb[(size_t)y * w + x];
	xsdk_gpu_invalidate(t->address, t->size_bytes);
}

/* the decoder: copies w x h ARGB pixels into rows dst_y .. dst_y + h - 1 of t (its pitch) and has the GPU see them */
static void bk_store_rows(XsdkTexture *t, unsigned w, unsigned dst_y, unsigned h, const uint32_t *argb)
{
	unsigned x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++)
			t->texels[(size_t)(dst_y + y) * t->pitch + x] = argb[(size_t)y * w + x];
	xsdk_gpu_invalidate(t->address, t->size_bytes);
}

/* the decoder: reads one page entry's JPEG and decodes it (malloc'd ARGB, freed by the caller; NULL = failed, *fail set:
 * 1 read, 2 decode, 3 size). what names it in logs ("HALF PAGE" for H); when log_fail it logs the failure. */
static uint32_t *bk_read_decode(const struct bk_page *e, int n, unsigned ew, unsigned eh, const char *what, int log_fail, int *fail)
{
	FILE *f;
	unsigned char *jpg;
	uint32_t *argb;
	int w = 0, h = 0, nomem;

	*fail = 0;
	jpg = malloc(e->bytes);
	f = jpg ? fopen(bk_path, "rb") : NULL;
	if (!f || fseek(f, (long)e->offset, SEEK_SET) || fread(jpg, 1, e->bytes, f) != e->bytes) {
		nomem = !jpg; /* before free: the reason */
		if (f)
			fclose(f);
		free(jpg);
		*fail = 1;
		if (log_fail)
			log_printf(C_RED, "BOOK: %s %d NOT READ (%s)", what, n,
			           nomem ? "NO MEMORY FOR THE JPEG" : "THE FILE");
		return NULL;
	}
	fclose(f);
	argb = webdat_jpeg_argb(jpg, e->bytes, &w, &h);
	free(jpg);
	if (!argb) {
		*fail = 2;
		if (log_fail)
			log_printf(C_RED, "BOOK: %s %d DOES NOT DECODE", what, n);
		return NULL;
	}
	if ((unsigned)w != ew || (unsigned)h != eh) {
		*fail = 3;
		if (log_fail)
			log_printf(C_RED, "BOOK: %s %d IS %dx%d", what, n, w, h);
		free(argb);
		return NULL;
	}
	return argb;
}

/* the decoder: frees the read-ahead buffers with their bookkeeping reset so the read-ahead is redone later */
static void bk_ra_clear(void)
{
	int j;

	for (j = 0; j < 2; j++) {
		free(ra_argb[j]);
		ra_argb[j] = NULL;
		ra_pg[j] = 0;
		ra_fail[j] = 0;
	}
	ra_spread = -1;
	ra_logged = -1;
	hit_spread = -1;
	fr_logged = -1;
	ra_t0 = 0;
}

/* the decoder: the full page (zoom, or one page in TATE), from its T and B halves */
static int bk_load_full(int p)
{
	const uint64_t t0 = tb_read();
	uint32_t *argb;
	int fail = 0;

	bk_ra_clear();
	if (!bk_ttab[p - 1].have || !bk_btab[p - 1].have) {
		if (!bk_zoom_unavail[p - 1]) {
			log_printf(C_YELLOW, "BOOK: PAGE %d ZOOM UNAVAILABLE (NO T/B)", p);
			bk_zoom_unavail[p - 1] = 1;
		}
		bk_full_fail = p;
		return 1;
	}

	argb = bk_read_decode(&bk_ttab[p - 1], p, BK_W, BK_HH, "PAGE HALF T", 0, &fail);
	if (!argb) {
		if (fail == 2 || fail == 3)
			log_printf(C_RED, "BOOK: PAGE %d HALF T DOES NOT DECODE (HEAP FREE %u KB)", p, bk_heap_free_kb());
		else
			log_printf(C_RED, "BOOK: PAGE %d HALF T NOT READ (HEAP FREE %u KB)", p, bk_heap_free_kb());
		bk_full_fail = p;
		return 1;
	}
	if (!bk_begin_write()) {
		free(argb);
		bk_end_write();
		return 1;
	}
	bk_full_pg = 0; /* test 140: the texture no longer holds the old page once its top half is overwritten */
	bk_store_rows(&bk_tex, BK_W, 0, BK_HH, argb);
	free(argb);

	argb = bk_read_decode(&bk_btab[p - 1], p, BK_W, BK_HH, "PAGE HALF B", 0, &fail);
	if (!argb) {
		if (fail == 2 || fail == 3)
			log_printf(C_RED, "BOOK: PAGE %d HALF B DOES NOT DECODE (HEAP FREE %u KB)", p, bk_heap_free_kb());
		else
			log_printf(C_RED, "BOOK: PAGE %d HALF B NOT READ (HEAP FREE %u KB)", p, bk_heap_free_kb());
		bk_end_write();
		bk_full_fail = p;
		return 1;
	}
	bk_store_rows(&bk_tex, BK_W, BK_HH, BK_HH, argb);
	bk_full_pg = p;
	free(argb);
	bk_end_write();

	if (!bk_zoom_heap_logged) {
		log_printf(C_GREEN, "BOOK: ZOOM PAGE %d DECODED IN %u MS, HEAP FREE %u KB", p, tb_us(t0, tb_read()) / 1000,
		           bk_heap_free_kb());
		bk_zoom_heap_logged = 1;
	} else
		log_printf(C_GREEN, "BOOK: ZOOM PAGE %d DECODED IN %u MS", p, tb_us(t0, tb_read()) / 1000);
	return 1;
}

/* the decoder: one half page of the spread, decoded straight into bk_half[k] */
static int bk_load_half(int k, int p)
{
	const uint64_t t0 = tb_read();
	int fail = 0;
	uint32_t *argb = bk_read_decode(&bk_htab[p - 1], p, BK_HW, BK_HH, "HALF PAGE", 1, &fail);

	if (!argb) {
		bk_half_fail[k] = p;
		return 1;
	}
	log_printf(C_GREEN, "BOOK: HALF PAGE %d DECODED IN %u MS", p, tb_us(t0, tb_read()) / 1000);
	if (bk_begin_write()) {
		bk_store(&bk_half[k], BK_HW, BK_HH, argb);
		bk_half_pg[k] = p;
	}
	free(argb);
	bk_end_write();
	return 1;
}

/* the decoder: the read-ahead's page k (of spread s) copied into bk_half[k] on the turn */
static int bk_take_ra(int k, int p, int s)
{
	uint32_t *argb = ra_argb[k];

	if (bk_begin_write()) {
		bk_store(&bk_half[k], BK_HW, BK_HH, argb);
		bk_half_pg[k] = p;
	}
	free(argb);
	ra_argb[k] = NULL;
	ra_pg[k] = 0;
	bk_end_write();
	hit_spread = s;
	return 1;
}

/* the decoder: a page of the next spread (ns) read ahead into ARGB; the read-ahead of an older spread is dropped */
static int bk_load_ra(int k, int p, int ns)
{
	uint32_t *argb;
	int l, r, fail = 0;

	if (ns != ra_spread) {
		int j;

		for (j = 0; j < 2; j++) {
			free(ra_argb[j]);
			ra_argb[j] = NULL;
			ra_pg[j] = 0;
			ra_fail[j] = 0;
		}
		ra_spread = ns;
		ra_t0 = tb_read();
	}
	argb = bk_read_decode(&bk_htab[p - 1], p, BK_HW, BK_HH, "HALF PAGE", 1, &fail);
	if (!argb) {
		ra_fail[k] = p;
		return 1;
	}
	ra_argb[k] = argb;
	ra_pg[k] = p;
	bk_pages_of(ns, &l, &r);
	if (ra_logged != ns && (!l || ra_pg[0] == l) && (!r || ra_pg[1] == r)) {
		char nm[16];

		bk_spread_name(ns, nm, sizeof(nm));
		log_printf(C_GREEN, "BOOK: SPREAD %s READ AHEAD IN %u MS", nm, tb_us(ra_t0, tb_read()) / 1000);
		ra_logged = ns;
	}
	return 1;
}

/* the decoder's one unit of work (book.h): the page the view needs first, then the read-ahead of the next spread */
int book_file_job(void)
{
	int s, l, r, l2, r2, pg[2], pg2[2], k, p;

	if (!bk_open || !bk_made)
		return 0;
	if (bk_zoom || !bk_spread) { /* zoomed, or one page: the full texture */
		p = bk_zoom ? bk_zoom_page() : bk_cur;
		if (p == bk_full_pg || p == bk_full_fail)
			return 0;
		return bk_load_full(p);
	}
	s = bk_spread_of(bk_cur);
	bk_pages_of(s, &l, &r);
	pg[0] = l;
	pg[1] = r;
	for (k = 0; k < 2; k++) {
		p = pg[k];
		if (!p || bk_half_pg[k] == p || bk_half_fail[k] == p)
			continue;
		if (ra_pg[k] == p)
			return bk_take_ra(k, p, s);
		return bk_load_half(k, p);
	}
	if (hit_spread == s && fr_logged != s) { /* both pages of the spread on screen, one of them from the read-ahead */
		char nm[16];

		bk_spread_name(s, nm, sizeof(nm));
		log_printf(C_GREEN, "BOOK: SPREAD %s FROM THE READ-AHEAD", nm);
		fr_logged = s;
	}
	bk_pages_of((s + 1) % (bk_n / 2 + 1), &l2, &r2);
	pg2[0] = l2;
	pg2[1] = r2;
	for (k = 0; k < 2; k++) {
		p = pg2[k];
		if (!p || ra_pg[k] == p || ra_fail[k] == p)
			continue;
		return bk_load_ra(k, p, (s + 1) % (bk_n / 2 + 1));
	}
	return 0;
}

/* the view may not leave the page: the edge is past the page's near side by the view's half width */
static void bk_pan_edges(float limx, float limy)
{
	bk_px = bk_clampf(bk_px, limx);
	bk_py = bk_clampf(bk_py, limy);
}

int book_input(unsigned press, unsigned held, int stick_x, int stick_y)
{
	float dx = 0, dy = 0;
	int sx, sy;
	float hw, limx;
	const int rot = bk_rot; /* test 147 */

	if (!bk_open)
		return 0;
	/* test 147 FIX_2: no d-pad/stick remap. ROTATION is a physically turned monitor; the player holds the pad normally,
	 * so physical LEFT is already left as seen (same as the games). */
	sx = bk_axis(stick_x); sy = bk_axis(stick_y);
	if (press & BOOK_BTN_B) {
		log_printf(C_WHITE, "BOOK: BACK (PAGE %d)", bk_cur);
		return 1;
	}
	if (press & BOOK_BTN_LB)
		bk_turn(-1);
	if (press & BOOK_BTN_RB)
		bk_turn(1);
	/* test 147: rotated single page - LEFT/RIGHT (as seen) = previous/next page */
	if (rot && !bk_spread && !bk_zoom) {
		if (press & BOOK_BTN_LEFT)
			bk_turn(-1);
		if (press & BOOK_BTN_RIGHT)
			bk_turn(1);
	}
	if (press & BOOK_BTN_A) {
		if (bk_zoom == BK_MAX_ZOOM)
			bk_zoom = 0;
		else {
			if (!bk_zoom) /* a spread's zoom starts on the left page when there is one */
				bk_side = bk_spread && !bk_has_side(0) ? 1 : 0;
			bk_zoom++;
		}
		bk_px = bk_py = 0; /* the zoom goes to the view's centre (the top, see book_draw) */
		bk_top = 1;
		bk_stick_latch = 0;
	}
	hw = bk_zoom ? 0.5f / (float)bk_zoom : 0.5f; /* the view's half width in page widths */
	limx = 0.5f - hw;
	if (bk_zoom && bk_spread) { /* past the edge of one page (pressed, or the stick held there): the other page of the spread */
		const float eps = 1e-4f;
		int go = 0;

		if (bk_side == 1 && bk_has_side(0) && ((press & BOOK_BTN_LEFT) || (sx < 0 && !bk_stick_latch)) &&
		    bk_px <= -limx + eps) {
			bk_side = 0;
			bk_px = limx;
			go = 1;
		} else if (bk_side == 0 && bk_has_side(1) && ((press & BOOK_BTN_RIGHT) || (sx > 0 && !bk_stick_latch)) &&
		           bk_px >= limx - eps) {
			bk_side = 1;
			bk_px = -limx;
			go = 1;
		}
		if (go && sx != 0) /* the stick must come back to centre before it switches again */
			bk_stick_latch = 1;
	} else if (bk_zoom && rot && !bk_spread) { /* test 147: rotated single page - LEFT/RIGHT (as seen) = prev/next */
		const float eps = 1e-4f;
		int go = 0;

		if (((press & BOOK_BTN_LEFT) || (sx < 0 && !bk_stick_latch)) && bk_px <= -limx + eps) {
			const int z = bk_zoom;
			bk_turn(-1);
			bk_zoom = z; /* keep zoom across page turn */
			bk_px = limx;
			go = 1;
		} else if (((press & BOOK_BTN_RIGHT) || (sx > 0 && !bk_stick_latch)) && bk_px >= limx - eps) {
			const int z = bk_zoom;
			bk_turn(1);
			bk_zoom = z; /* keep zoom across page turn */
			bk_px = -limx;
			go = 1;
		}
		if (go) {
			bk_top = 0;
			if (sx != 0)
				bk_stick_latch = 1;
		}
	}
	if (sx == 0)
		bk_stick_latch = 0;
	if (bk_zoom) {
		if (held & BOOK_BTN_LEFT)
			dx -= BK_PAN_KEY;
		if (held & BOOK_BTN_RIGHT)
			dx += BK_PAN_KEY;
		if (held & BOOK_BTN_UP)
			dy -= BK_PAN_KEY;
		if (held & BOOK_BTN_DOWN)
			dy += BK_PAN_KEY;
		dx += (float)sx * BK_PAN_STICK / (32767.0f - BK_STICK_DEAD);
		dy -= (float)sy * BK_PAN_STICK / (32767.0f - BK_STICK_DEAD); /* stick up = the view up */
		bk_px += dx;
		bk_py += dy;
	}
	return 0;
}

/* test 147: rotated book quad wrapper. Logical coords (lw=fb_h, lh=fb_w) -> physical screen. */
/* test 147 FIX_2: per-corner UVs [TL,TR,BL,BR] of the screen rect so 90-degree rotation is real, not a mirror. */
static book_quad_fn bk_real_quad;
static unsigned bk_phys_w, bk_phys_h;
static int bk_draw_rot;

static void bk_rot_quad(const XsdkTexture *t, float x0, float y0, float x1, float y1, const float uv[4][2])
{
	float px0, py0, px1, py1;
	float puv[4][2];

	if (bk_draw_rot == 1) { /* LEFT = CCW: phys_x = ly, phys_y = phys_h - lx */
		px0 = y0; py0 = (float)bk_phys_h - x1;
		px1 = y1; py1 = (float)bk_phys_h - x0;
		/* phys TL<-logical TR, phys TR<-logical BR, phys BL<-logical TL, phys BR<-logical BL */
		puv[0][0] = uv[1][0]; puv[0][1] = uv[1][1];
		puv[1][0] = uv[3][0]; puv[1][1] = uv[3][1];
		puv[2][0] = uv[0][0]; puv[2][1] = uv[0][1];
		puv[3][0] = uv[2][0]; puv[3][1] = uv[2][1];
	} else { /* RIGHT = CW: phys_x = phys_w - ly, phys_y = lx */
		px0 = (float)bk_phys_w - y1; py0 = x0;
		px1 = (float)bk_phys_w - y0; py1 = x1;
		/* phys TL<-logical BL, phys TR<-logical TL, phys BL<-logical BR, phys BR<-logical TR */
		puv[0][0] = uv[2][0]; puv[0][1] = uv[2][1];
		puv[1][0] = uv[0][0]; puv[1][1] = uv[0][1];
		puv[2][0] = uv[3][0]; puv[2][1] = uv[3][1];
		puv[3][0] = uv[1][0]; puv[3][1] = uv[1][1];
	}
	bk_real_quad(t, px0, py0, px1, py1, puv);
}

/* LOADING, or the failure for page fail (red) when fail != 0, centred at cx over the page height ph (21 texels high at
 * BK_MSG_SC) */
static void bk_message(book_quad_fn quad, float cx, float ph, float kt, float par, int fail)
{
	const XsdkTexture *m = &bk_msg;
	int tw = 7 * 6 * BK_MSG_SC; /* "LOADING" */

	if (fail) {
		if (bk_fail_key != fail) {
			char s[40];

			snprintf(s, sizeof(s), "PAGE %d DOES NOT DECODE", fail);
			bk_fail_w = bk_bake(&bk_fail, BK_MSG_W, BK_MSG_H, s, C_RED, BK_MSG_SC);
			bk_fail_key = fail;
		}
		m = &bk_fail;
		tw = bk_fail_w;
	}
	{
		/* test 147 FIX_2: per-corner UVs TL,TR,BL,BR */
		const float uv[4][2] = {{0, 0}, {(float)tw / BK_MSG_W, 0}, {0, 21.0f / BK_MSG_H}, {(float)tw / BK_MSG_W, 21.0f / BK_MSG_H}};
		quad(m, cx - (float)tw * kt / par / 2, ph / 2 - 21.0f * kt / 2, cx + (float)tw * kt / par / 2, ph / 2 + 21.0f * kt / 2, uv);
	}
}

void book_draw(unsigned fb_w, unsigned fb_h, float par, book_quad_fn quad)
{
	const int rot = bk_rot; /* test 147 */
	const unsigned phys_w = fb_w, phys_h = fb_h;
	book_quad_fn dq = quad;
	float fw, kt, strip, ph, cx, aspect;
	int l = 0, r = 0, ready, page = 0;
	char s[64];

	if (!bk_open || !quad || !bk_made)
		return;
	if (rot) { /* test 147: draw in logical portrait space, rotate quads onto the physical screen */
		bk_real_quad = quad;
		bk_phys_w = phys_w;
		bk_phys_h = phys_h;
		bk_draw_rot = rot;
		dq = bk_rot_quad;
		fb_w = phys_h;
		fb_h = phys_w;
		par = par > 0.001f ? 1.0f / par : 1.0f;
	}
	fw = (float)fb_w;
	kt = fb_h >= 720 ? (float)fb_h / 720.0f : 1.0f; /* the text scale: fb_h / 720, never below 1 texel a pixel */
	strip = 28.0f * kt;          /* the band at the bottom for the line */
	ph = (float)fb_h - strip;   /* the page area's height on screen */
	cx = fw / 2;                /* the centre line of the page / the spread */
	aspect = (float)BK_W / (float)BK_H;
	if (bk_zoom || !bk_spread || rot) { /* one page (FIT, or the zoom's page); test 147: always one page when rotated */
		page = bk_zoom ? bk_zoom_page() : bk_cur;
		ready = bk_full_pg == page && !bk_busy;
		if (ready) {
			bk_idle = 0;
			if (!bk_zoom) { /* FIT: the whole page height above the line, centred, the game's pixel aspect rule */
				const float pw = ph * aspect / par;
				const float x0 = (fw - pw) / 2;

				{
					const float uv[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}}; /* test 147 FIX_2 */
					dq(&bk_tex, x0, 0, x0 + pw, ph, uv);
				}
			} else { /* test 139 F4: WIDTH = one page's width is the display width; 2x = twice that */
				const float z = (float)bk_zoom;
				const float hw = 0.5f / z;                      /* the view's half width, page widths */
				const float hv = 0.5f * ph / (fw * z * par / aspect); /* the view's half height, page heights */
				const float limx = 0.5f - hw;
				const float limy = hv < 0.5f ? 0.5f - hv : 0.0f;

				if (bk_top) { /* the top of the page first */
					bk_py = -limy;
					bk_top = 0;
				}
				bk_pan_edges(limx, limy);
				{
					/* test 147 FIX_2: per-corner UVs TL,TR,BL,BR of the zoomed sub-rect */
					const float u0 = 0.5f + bk_px - hw, v0 = 0.5f + bk_py - hv;
					const float u1 = 0.5f + bk_px + hw, v1 = 0.5f + bk_py + hv;
					const float uv[4][2] = {{u0, v0}, {u1, v0}, {u0, v1}, {u1, v1}};
					dq(&bk_tex, 0, 0, fw, ph, uv);
				}
			}
		} else {
			if (bk_idle < 1000)
				bk_idle++;
			bk_message(dq, cx, ph, kt, par, bk_full_fail == page ? page : 0);
		}
	} else { /* test 139 F2: the spread, two half pages at FIT, each the page's aspect; the cover's left half is empty */
		const float hwf = ph * ((float)BK_HW / (float)BK_HH) / par; /* one half page's width on screen */
		int f = 0;

		bk_pages_of(bk_spread_of(bk_cur), &l, &r);
		ready = !bk_busy && (!l || bk_half_pg[0] == l) && (!r || bk_half_pg[1] == r);
		if (ready) {
			bk_idle = 0;
			{
				const float uv[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}}; /* test 147 FIX_2 */
				if (l)
					dq(&bk_half[0], cx - hwf, 0, cx, ph, uv);
				if (r)
					dq(&bk_half[1], cx, 0, cx + hwf, ph, uv);
			}
		} else {
			if (bk_idle < 1000)
				bk_idle++;
			if (l && bk_half_fail[0] == l && bk_half_pg[0] != l)
				f = l;
			else if (r && bk_half_fail[1] == r && bk_half_pg[1] != r)
				f = r;
			bk_message(dq, cx, ph, kt, par, f);
		}
		page = l ? l : r;
	}
	/* the line: the page (zoomed: the page on the view), the spread's pages, the keys */
	if (bk_zoom && bk_spread && !rot) { /* test 145: the zoom of a spread: the other page is one LEFT/RIGHT away */
		int ol, orp;

		bk_pages_of(bk_spread_of(bk_cur), &ol, &orp);
		if (page == ol && orp != 0) /* test 145: the zoomed page is the spread's left page: the other page is the right one */
			snprintf(s, sizeof(s), "PAGE %d / %d  RIGHT = PAGE %d  A ZOOM  B BACK", page, bk_n, orp);
		else if (page == orp && ol != 0) /* test 145: the zoomed page is the spread's right page: the other page is the left one */
			snprintf(s, sizeof(s), "PAGE %d / %d  LEFT = PAGE %d  A ZOOM  B BACK", page, bk_n, ol);
		else /* test 145: the spread has only one page: the line is unchanged */
			snprintf(s, sizeof(s), "PAGE %d / %d   LB/RB PAGE   A ZOOM   B BACK", page, bk_n);
	} else if (bk_zoom || !bk_spread || rot)
		snprintf(s, sizeof(s), "PAGE %d / %d   LB/RB PAGE   A ZOOM   B BACK", page, bk_n);
	else if (!l)
		snprintf(s, sizeof(s), "PAGE 1 / %d   LB/RB PAGE   A ZOOM   B BACK", bk_n);
	else if (!r)
		snprintf(s, sizeof(s), "PAGE %d / %d   LB/RB PAGE   A ZOOM   B BACK", l, bk_n);
	else
		snprintf(s, sizeof(s), "PAGES %d-%d / %d   LB/RB PAGE   A ZOOM   B BACK", l, r, bk_n);
	if (strcmp(s, bk_txt_s) != 0) { /* baked when the line changes */
		bk_txt_w = bk_bake(&bk_txt, BK_TXT_W, BK_TXT_H, s, C_YELLOW, BK_TXT_SC);
		snprintf(bk_txt_s, sizeof(bk_txt_s), "%s", s);
	}
	{
		/* test 147 FIX_2: per-corner UVs TL,TR,BL,BR */
		const float u1 = (float)bk_txt_w / BK_TXT_W, v1 = (float)(7 * BK_TXT_SC) / BK_TXT_H;
		const float uv[4][2] = {{0, 0}, {u1, 0}, {0, v1}, {u1, v1}};
		dq(&bk_txt, fw / 2 - (float)bk_txt_w * kt / par / 2, (float)fb_h - strip / 2 - 7.0f * BK_TXT_SC * kt / 2,
		     fw / 2 + (float)bk_txt_w * kt / par / 2, (float)fb_h - strip / 2 + 7.0f * BK_TXT_SC * kt / 2, uv);
	}
}

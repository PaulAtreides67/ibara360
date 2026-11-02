/* Test 98: MENU STYLE PS2 and LANGUAGE JAPANESE (ps2menu.h has the plan). The research and the PS2 port's numbers:
 * work/g97/ps2menu/REPORT.md (sections 1-4), tools/ps2menu/mockup.py (the proposal this draws), work/g98/ps2menu/REPORT.md
 * (what test 98 made of it).
 *
 * Layout of one recorded box (main.c's pages: a box, its title at (bx + 8, by + 6), rows 10 px apart, a help, lines
 * under it):
 *  - the panel: as wide as the 240 px picture allows (the 5x7 font's 6 px columns become the 8x8 font's 8: a 35-column
 *    box needs 296, so the PS2 look keeps 28 columns, the research's limit), centred where the box was;
 *  - x: x0 + 4/3 of the place from the box's text column (a value centred between "<" and ">" stays centred); a text
 *    passing the panel's right edge moves left (not over the text before it), else its letters close up (7 or 6 px:
 *    REPLAY DATA's 31-letter rows), else it is cut;
 *  - y: the title 8 px taller (8x16), so everything under it 8 lower; the help leaves the box for the description box
 *    (0, 267) 240 x 48 at the picture's foot (the PS2's FUN_00129780(0, 0x2C, 0xF0, 0x30)); the lines under the help
 *    move up into its place; a line of more than 28 letters is said shorter (rewords) or split at ", " (the lines
 *    under the help) or closes up (the others);
 *  - the panel's height from what is in it; its middle where the box's was, and above the description box (y 262);
 *  - JAPANESE: the help in the PS2's 16x16 font (2 lines at (8, 275), (8, 291)); the lines under it too, 16 px apart,
 *    when the panel still ends above the description box (else they stay English); rows, values and titles stay
 *    English (as on the PS2). A line without a translation stays English.
 * Colours (the PS2's vertex colours, 0x80 = 1.0, multiplied with the glyph): rows grey 0x505050, the cursor's row
 * yellow 0xB0B050, title cyan 0x40C0C0, the description white 0x808080; values in their row's colour (green ones grey,
 * dim ones darker); the 360's green button lines kept (0x40B040), red 0xC04040. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "card.h"
#include "ps2data.h"
#include "ps2menu.h"

#include "ja_help.h"

void log_printf(uint32_t color, const char *fmt, ...);

#define PW 240            /* the portrait picture */
#define PH 320
#define DESC_Y 267        /* the description box */
#define DESC_H 48
#define PANEL_MAX_Y 262   /* panels end above it */
#define WIN_W 240         /* menu.window */
#define WIN_H 88
#define FILL_A 200        /* the window's fill over the game (the PS2's is opaque over its own backdrop) */
#define COLS 28           /* 8x8 letters across a full-width panel's text area (8 .. 232) */

/* ---- the pieces ---------------------------------------------------------------------------------------------------- */

static uint32_t *font8;   /* font.small 256 x 32, A R G B words */
static uint32_t *font16;  /* font.title 256 x 64 */
static uint32_t *win;     /* menu.window 240 x 88 */
static uint32_t *rose;    /* menu.rose16 64 x 32 */
static uint8_t *jp8;      /* 256 x 3328: the 16x16 glyphs' grey (0 = clear) */
static int16_t *se[PM_SE_N];
static unsigned se_n[PM_SE_N];
static int ok, jp_ok, inited;
static char why[96];

static uint32_t *argb_load(const char *name, int w, int h)
{
	uint32_t n = 0, i;
	uint8_t *b = ps2data_load(name, &n);
	uint32_t *o;

	if (!b || n != (uint32_t)w * h * 4) {
		free(b);
		return NULL;
	}
	o = malloc(n);
	if (o)
		for (i = 0; i < n / 4; i++) /* bytes A R G B (big-endian words; the PC harness is little-endian) */
			o[i] = (uint32_t)b[4 * i] << 24 | (uint32_t)b[4 * i + 1] << 16 | (uint32_t)b[4 * i + 2] << 8 | b[4 * i + 3];
	free(b);
	return o;
}

int ps2menu_init(void)
{
	static const char *const se_names[PM_SE_N] = {"CURSOR", "DECIDE", "CANCEL"};
	uint32_t n = 0, i;
	int k;

	if (inited)
		return ok ? 0 : -1;
	inited = 1;
	if (!ps2data_ok()) {
		snprintf(why, sizeof(why), "NO PS2DATA.BIN (%s)", ps2data_why());
		return -1;
	}
	font8 = argb_load(PS2N_FONT_SMALL, 256, 32);
	font16 = argb_load(PS2N_FONT_TITLE, 256, 64);
	win = argb_load(PS2N_MENU_WINDOW, WIN_W, WIN_H);
	rose = argb_load(PS2N_MENU_ROSE16, 64, 32);
	ok = font8 && font16 && win && rose;
	if (!ok)
		snprintf(why, sizeof(why), "PS2DATA.BIN WITHOUT THE MENU FONTS / FRAMES (%s%s%s%s)", font8 ? "" : "FONT.SMALL ",
		         font16 ? "" : "FONT.TITLE ", win ? "" : "MENU.WINDOW ", rose ? "" : "MENU.ROSE16");
	/* the Japanese glyphs: ps2extract 3's 8-bit font.jp8, else ps2extract 1-2's ARGB font.jp turned into it */
	jp8 = ps2data_load(PS2N_FONT_JP8, &n);
	if (jp8 && n != 256u * 3328u) {
		free(jp8);
		jp8 = NULL;
	}
	if (!jp8) {
		uint8_t *b = ps2data_load(PS2N_FONT_JP, &n);
		if (b && n == 256u * 3328u * 4u && (jp8 = malloc(256u * 3328u)) != NULL)
			for (i = 0; i < 256u * 3328u; i++)
				jp8[i] = b[4 * i] >= 0x80 ? (b[4 * i + 1] ? b[4 * i + 1] : 1) : 0;
		free(b);
	}
	jp_ok = ok && jp8;
	if (ok && !jp8)
		snprintf(why, sizeof(why), "PS2DATA.BIN WITHOUT THE JAPANESE GLYPHS (FONT.JP)");
	for (k = 0; k < PM_SE_N; k++) { /* the launcher's menu sounds (la.snd.*: big-endian int16, 16 kHz) */
		char name[32];
		uint8_t *b;
		snprintf(name, sizeof(name), PS2N_SND "%s", se_names[k]);
		b = ps2data_load(name, &n);
		if (b && n >= 2 && (se[k] = malloc(n)) != NULL) {
			for (i = 0; i < n / 2; i++)
				se[k][i] = (int16_t)((uint16_t)b[2 * i] << 8 | b[2 * i + 1]);
			se_n[k] = n / 2;
		}
		free(b);
	}
	return ok ? 0 : -1;
}

int ps2menu_ok(void)
{
	return ok;
}

int ps2menu_jp_ok(void)
{
	return jp_ok;
}

const char *ps2menu_why(void)
{
	return why;
}

const int16_t *ps2menu_se(int id, unsigned *n)
{
	*n = id >= 0 && id < PM_SE_N ? se_n[id] : 0;
	return id >= 0 && id < PM_SE_N ? se[id] : NULL;
}

/* ---- the Japanese lines (ja_help.h) --------------------------------------------------------------------------------- */

#define JA_HASH 512
static short ja_hash[JA_HASH]; /* entry + 1, 0 = empty */
static int ja_hashed;
static unsigned ja_asked, ja_missing;
static char ja_last[48];

static unsigned str_hash(const char *s)
{
	unsigned h = 2166136261u;
	while (*s)
		h = (h ^ (unsigned char)*s++) * 16777619u;
	return h;
}

static void ja_init(void)
{
	int i;

	ja_hashed = 1;
	for (i = 0; i < JA_N; i++) {
		unsigned h = str_hash(ja_en[i]) & (JA_HASH - 1);
		if (strchr(ja_en[i], '%'))
			continue; /* the printf keys: ja_match */
		while (ja_hash[h])
			h = (h + 1) & (JA_HASH - 1);
		ja_hash[h] = (short)(i + 1);
	}
}

/* s against printf key k (only %u / %d): its numbers into v (at most 4); 1 = it matches */
static int ja_match(const char *k, const char *s, unsigned *v, int *nv)
{
	*nv = 0;
	while (*k) {
		if (k[0] == '%' && (k[1] == 'u' || k[1] == 'd')) {
			unsigned x = 0;
			if (*s < '0' || *s > '9')
				return 0;
			while (*s >= '0' && *s <= '9')
				x = x * 10 + (unsigned)(*s++ - '0');
			if (*nv < 4)
				v[(*nv)++] = x;
			k += 2;
		} else if (*k++ != *s++) {
			return 0;
		}
	}
	return *s == 0;
}

/* the entry for English line s (-1 none), its printf numbers in v */
static int ja_find(const char *s, unsigned *v, int *nv)
{
	unsigned h;
	int i;

	if (!ja_hashed)
		ja_init();
	*nv = 0;
	if (!s[0])
		return -1;
	h = str_hash(s) & (JA_HASH - 1);
	while (ja_hash[h]) {
		if (!strcmp(ja_en[ja_hash[h] - 1], s))
			return ja_hash[h] - 1;
		h = (h + 1) & (JA_HASH - 1);
	}
	for (i = 0; i < JA_N; i++)
		if (strchr(ja_en[i], '%') && ja_match(ja_en[i], s, v, nv))
			return i;
	return -1;
}

int ps2m_ja_has(const char *en)
{
	unsigned v[4];
	int nv;
	return ja_find(en, v, &nv) >= 0;
}

void ps2m_ja_census(unsigned *asked, unsigned *missing, char *last_missing, unsigned n)
{
	*asked = ja_asked;
	*missing = ja_missing;
	snprintf(last_missing, n, "%s", ja_last);
	ja_asked = ja_missing = 0;
}

/* entry e's lines: how many, each one's width in half-width cells */
static int ja_lines(int e, int w[2])
{
	const unsigned short *g = ja_gl + ja_at[e];
	int l = 0;

	w[0] = w[1] = 0;
	for (; *g != JA_END; g++) {
		if (*g == JA_BREAK) {
			if (l < 1)
				l++;
			continue;
		}
		w[l] += (*g & 0xF000) == JA_ASCII ? 1 : 2;
	}
	return l + 1;
}

/* ---- drawing into the game texture ----------------------------------------------------------------------------- */

static const struct ps2m_target *tg;

static inline void put(int x, int y, uint32_t c)
{
	if ((unsigned)x < PW && (unsigned)y < PH)
		tg->t[(size_t)x * tg->pitch + (PH - 1 - y)] = c;
}

static inline uint32_t modulate(uint32_t t, uint32_t m)
{
	uint32_t r = ((t >> 16) & 255) * ((m >> 16) & 255) >> 7, g = ((t >> 8) & 255) * ((m >> 8) & 255) >> 7,
	         b = (t & 255) * (m & 255) >> 7;
	return 0xFF000000u | (r > 255 ? 255 : r) << 16 | (g > 255 ? 255 : g) << 8 | (b > 255 ? 255 : b);
}

/* test 99: the fill over the game's 5-bit channels, made once (test 98 worked it out per pixel: a modulo and six
 * divisions by constants = long multiply chains on the 360's in-order core, ~2 ms a panel); the same values */
static uint32_t fill_r[32], fill_g[32], fill_b[32];
static int fill_made;

static void fill_make(void)
{
	int v;

	for (v = 0; v < 32; v++) {
		const int c = v << 3;
		fill_r[v] = (uint32_t)((48 * FILL_A + c / 3 * (255 - FILL_A)) / 255) << 16;
		fill_g[v] = (uint32_t)((24 * FILL_A + c / 3 * (255 - FILL_A)) / 255) << 8;
		fill_b[v] = (uint32_t)((32 * FILL_A + c / 3 * (255 - FILL_A)) / 255);
	}
	fill_made = 1;
}

static void panel(int x, int y, int w, int h)
{
	static short wrow[PH]; /* test 99: each texture row's window row (j = py - y), made once a panel */
	int px, py;

	if (w < 16 || h < 16)
		return;
	if (!fill_made)
		fill_make();
	for (py = y < 0 ? 0 : y; py < y + h && py < PH; py++) {
		const int j = py - y;
		wrow[py] = (short)(j < 8 ? j : j >= h - 8 ? WIN_H - (h - j) : 8 + (j - 8) % 72);
	}
	for (px = x; px < x + w; px++) {
		const int k = px - x, sx = k < 8 ? k : k >= w - 8 ? WIN_W - (w - k) : 8 + (k - 8) % 224;
		const uint16_t *row = tg->vram + (size_t)((px + tg->sy) & 0xFFF) * tg->stride;
		volatile uint32_t *dst = tg->t + (size_t)px * tg->pitch;
		const uint32_t *wc = win + sx;
		if ((unsigned)px >= PW)
			continue;
		for (py = y + h - 1; py >= y; py--) { /* each texture row upward in memory (sm_box's order) */
			uint32_t c, o;
			if ((unsigned)py >= PH)
				continue;
			c = wc[wrow[py] * WIN_W];
			if ((c >> 24) >= 0x80 && (c & 0xFFFFFF) != 0x301820) {
				o = c | 0xFF000000u;
			} else {
				const uint32_t p = row[(PH - 1 - py + tg->sx) & 0x1FFF];
				if ((c >> 24) < 0x80) /* outside the vines: the game */
					o = 0xFF000000u | (p & 0x7C00) << 9 | (p & 0x3E0) << 6 | (p & 0x1F) << 3;
				else /* the fill (48, 24, 32) over the game at a third (ARCADE's box shows it at a quarter) */
					o = 0xFF000000u | fill_r[(p >> 10) & 31] | fill_g[(p >> 5) & 31] | fill_b[p & 31];
			}
			dst[PH - 1 - py] = o;
		}
	}
}

/* Test 99: the letters, the rose and the Japanese glyphs a column at a time, each from its bottom up = upward in the
 * texture's memory (panel's and sm_box's order), so the write-combined stores gather. Test 98 went row by row: every
 * store a texture row (pitch) from the last, and its frame log had the game thread's conv at 3.4-7.6 ms with a PS2 page
 * open against ARCADE's 1.3 (TRAINING's FORMATION box: frames late, a sound underrun). The same pixels either way */

/* an 8x8 letter (font.small) / an 8x16 one (font.title) at x, y in colour m, columns from xmax on cut */
static void letter(const uint32_t *font, int fh, int ch, int x, int y, uint32_t m, int xmax)
{
	const int c = (unsigned char)ch;
	const uint32_t *s0;
	int i, j;

	if (c <= 0x20 || c > 0x7F)
		return;
	s0 = font + (size_t)(fh * (c >> 5)) * 256 + 8 * (c & 31);
	for (i = 0; i < 8 && x + i < xmax; i++)
		for (j = fh - 1; j >= 0; j--) {
			const uint32_t p = s0[(size_t)j * 256 + i];
			if ((p >> 24) >= 0x80)
				put(x + i, y + j, modulate(p, m));
		}
}

static int text8(const char *s, int n, int x, int y, uint32_t m, int adv, int xmax)
{
	int i;
	for (i = 0; i < n && s[i]; i++)
		letter(font8, 8, s[i], x + adv * i, y, m, xmax);
	return x + adv * i;
}

static void text16(const char *s, int x, int y, uint32_t m, int xmax)
{
	for (; *s; s++, x += 8)
		letter(font16, 16, *s, x, y, m, xmax);
}

static void rose_at(int x, int y, unsigned frame)
{
	const int k = (frame >> 1) & 3, jj = (frame >> 3) & 1;
	int i, j;

	for (i = 0; i < 16; i++)
		for (j = 15; j >= 0; j--) { /* test 99: a column at a time (letter) */
			const uint32_t c = rose[(16 * jj + j) * 64 + 16 * k + i];
			if ((c >> 24) >= 0x80)
				put(x + i, y + j, c | 0xFF000000u);
		}
}

/* a 16x16 glyph (slot), its grey times m */
static void jglyph(int slot, int x, int y, uint32_t m)
{
	int i, j;

	const uint8_t *s0 = jp8 + (size_t)(16 * (slot >> 4)) * 256 + 16 * (slot & 15);

	for (i = 0; i < 16; i++) /* test 99: a column at a time (letter) */
		for (j = 15; j >= 0; j--) {
			const uint32_t g = s0[(size_t)j * 256 + i];
			if (g)
				put(x + i, y + j, modulate(0xFF000000u | g << 16 | g << 8 | g, m));
		}
}

/* entry e's lines at x, y (pitch apart) in m; its printf numbers v in full-width digits */
static void ja_draw(int e, int x, int y, int pitch, uint32_t m, const unsigned *v, int nv)
{
	const unsigned short *g = ja_gl + ja_at[e];
	int cx = x, f = 0;

	for (; *g != JA_END; g++) {
		if (*g == JA_BREAK) {
			cx = x;
			y += pitch;
		} else if ((*g & 0xF000) == JA_ASCII) {
			letter(font8, 8, *g & 0x7F, cx, y + 6, m, PW);
			cx += 8;
		} else if (*g == JA_FIELD) {
			char d[12];
			int k;
			snprintf(d, sizeof(d), "%u", f < nv ? v[f] : 0);
			f++;
			for (k = 0; d[k]; k++, cx += 16)
				jglyph(0xBE6 + d[k] - '0', cx, y, m);
		} else {
			if (*g != 0xBD6) /* the full-width space: nothing */
				jglyph(*g, cx, y, m);
			cx += 16;
		}
	}
}

/* ---- the record ------------------------------------------------------------------------------------------------ */

enum { PI_TEXT, PI_CUR, PI_HELP, PI_CUSTOM };
#define PM_ITEMS 192
#define PM_BOXES 8
#define PM_S 80
struct pitem {
	short x, y, box, kind;
	uint32_t c;
	char s[PM_S];
	short w, h;           /* PI_CUSTOM */
	ps2m_draw_fn draw;
	const void *arg;
	/* the layout's */
	short nx, ny, adv, n; /* new place, letter advance, letters */
	short ja;             /* the Japanese entry drawn instead (-1 none) */
	short fy;             /* 0 body, 1 footer (under the help), 2 the title's line */
	short title;          /* the box's title */
	short keep;           /* test 102: ps2m_keep_x was set: no move left, letters closed up */
	short en;             /* test 112: ps2m_help_en was set: a help kept English */
	unsigned v[4];
	int nv;
};
struct pbox {
	short x, y, w, h;
	short nx, ny, nw, nh;
	short exact; /* test 118: ps2m_exact's */
};
int ps2m_rec;
static struct pitem it[PM_ITEMS];
static struct pbox bx[PM_BOXES];
static int nit, nbx;

int ps2m_lines_en, ps2m_keep_x, ps2m_help_en, ps2m_exact;

void ps2m_begin(void)
{
	ps2m_lines_en = 0;
	ps2m_exact = 0;
	nit = nbx = 0;
}

void ps2m_box(int x, int y, int w, int h)
{
	if (nbx == PM_BOXES)
		return;
	bx[nbx].x = (short)x;
	bx[nbx].y = (short)y;
	bx[nbx].w = (short)w;
	bx[nbx].h = (short)h;
	bx[nbx].exact = (short)(ps2m_exact != 0);
	nbx++;
}

static struct pitem *add(int kind, int x, int y, uint32_t c, const char *s)
{
	struct pitem *p;

	if (nit == PM_ITEMS || !nbx)
		return NULL;
	p = &it[nit++];
	memset(p, 0, sizeof(*p));
	p->kind = (short)kind;
	p->x = (short)x;
	p->y = (short)y;
	p->c = c;
	p->box = (short)(nbx - 1);
	p->ja = -1;
	p->keep = (short)(ps2m_keep_x != 0);
	p->en = (short)(ps2m_help_en != 0); /* test 112: a help kept English; test 113: EX-DEBUG's grey line too */
	snprintf(p->s, sizeof(p->s), "%s", s ? s : "");
	return p;
}

void ps2m_text(int x, int y, uint32_t c, const char *s)
{
	const int cur = !strcmp(s, ">") && nbx && x == bx[nbx - 1].x + 8;
	add(cur ? PI_CUR : PI_TEXT, x, y, c, s);
}

void ps2m_help(int x, int y, uint32_t c, const char *s)
{
	add(PI_HELP, x, y, c, s);
}

void ps2m_custom(int x, int y, int w, int h, ps2m_draw_fn draw, const void *arg)
{
	struct pitem *p = add(PI_CUSTOM, x, y, 0, "");
	if (p) {
		p->w = (short)w;
		p->h = (short)h;
		p->draw = draw;
		p->arg = arg;
	}
}

/* ---- the layout ------------------------------------------------------------------------------------------------ */

/* test 98: the lines of more than 28 letters said shorter in the PS2 look (research section 4); the others split at
 * ", " (under the help) or close up */
static const char *const reword[][2] = {
	{"INTRO, THEN LOOPS UNTIL STOPPED", "PLAYS INTRO, THEN LOOPS"},
	{"SHIP IS CHOSEN ON SELECT SCREEN", "SHIP CHOSEN ON SELECT SCREEN"},
	{"HIGH SCORES CHANGED: THE RUN'S ONLY", "SCORES CHANGED: RUN'S ONLY"},
	{"NO TITLE STATE: THE RUN'S ONLY", "NO TITLE STATE: RUN'S ONLY"},
	{"REPLAY DATA FULL: A = REPLACE ONE", "DATA FULL: A = REPLACE ONE"},
};

static uint32_t col_body(uint32_t c)
{
	switch (c) {
	case C_YELLOW: return 0xB0B050;
	case C_WHITE: return 0x505050;
	case C_GREEN: return 0x505050; /* a value: its row's grey */
	case C_DIM: return 0x343434;
	case C_RED: return 0xC04040;
	case C_CYAN: return 0x40C0C0;
	default: return 0x808080;
	}
}

static uint32_t col_foot(uint32_t c)
{
	switch (c) {
	case C_YELLOW: return 0xB0B050;
	case C_WHITE: return 0x808080;
	case C_GREEN: return 0x40B040; /* the 360's green button lines */
	case C_DIM: return 0x505050;
	case C_RED: return 0xC04040;
	case C_CYAN: return 0x808080;
	default: return 0x808080;
	}
}

static int cmp_items(const void *a, const void *b)
{
	const struct pitem *p = a, *q = b;
	if (p->box != q->box)
		return p->box - q->box;
	if (p->y != q->y)
		return p->y - q->y;
	return p->x - q->x;
}

/* the title shorter until w letters fit: "IBARA KURO BL" -> "KURO BL", then the part before its "  " left out */
static void title_fit(char *s, int w)
{
	char *p;

	if ((int)strlen(s) > w && (p = strstr(s, "IBARA KURO BL")) != NULL)
		memmove(p, p + 6, strlen(p + 6) + 1);
	if ((int)strlen(s) > w && (p = strstr(s, "  ")) != NULL)
		memmove(s, p + 2, strlen(p + 2) + 1);
	if ((int)strlen(s) > w && w >= 0)
		s[w] = 0;
}

/* one footer line's split for w letters: the place of ", " (dropped) or of the last space; 0 = none */
static int split_at(const char *s, int w)
{
	int i, best = 0;

	for (i = 1; s[i] && i <= w; i++)
		if (s[i - 1] == ',' && s[i] == ' ' && i - 1 <= w)
			best = i - 1;
	if (best)
		return best;
	for (i = w; i > 0; i--)
		if (s[i] == ' ')
			return i;
	return 0;
}

static struct pitem *helpd;      /* the help the description box shows */

/* box b's items it[a .. z): placed (nx, ny from the panel's corner), the panel's size and place; 1 = it ends above
 * the description box */
static int lay_box(int b, int a, int z, int jp)
{
	struct pbox *B = &bx[b];
	const int x0 = B->x + 8, ty = B->y + 6;
	int i, title = -1, help = -1, ts, hy, bottom = 0, R, k;
	int prev_y = -9999, prev_end = 0, line_top = 0, line_h = 8, last_fy = -1, cx = 0, cy0 = 0, cy1 = -1;

	B->nw = (short)(B->exact ? B->w : B->w >= 120 ? PW : 16 + ((B->w - 16) * 4 + 2) / 3);
	B->nx = (short)(B->exact ? B->x : B->x + B->w / 2 - B->nw / 2);
	B->nx = B->nx < 0 ? 0 : B->nx > PW - B->nw ? (short)(PW - B->nw) : B->nx;
	R = B->nw - 8;
	for (i = a; i < z; i++) {
		if (title < 0 && it[i].kind == PI_TEXT && it[i].y == ty && it[i].x == x0)
			title = i;
		if (help < 0 && it[i].kind == PI_HELP)
			help = i;
	}
	ts = title >= 0 ? 8 : 0;
	hy = help >= 0 ? it[help].y : 0x7FFF;
	line_top = (help >= 0 ? hy - B->y : 0) + ts;
	if (help < 0) { /* no help: the box's last lines that are one text at the text column (the green button lines,
	                 * a note) are its lines under the help all the same (their colours, JAPANESE) */
		int last = -1;
		for (i = z - 1; i >= a; i--) {
			const struct pitem *p = &it[i];
			int one = 1, j;
			if (p->kind == PI_HELP)
				continue;
			if (p->kind != PI_TEXT || p->x != x0 || p->y == ty || p->y == last)
				break;
			for (j = a; j < z; j++)
				if (j != i && it[j].kind != PI_HELP && it[j].y == p->y)
					one = 0;
			if (!one)
				break;
			last = p->y;
		}
		if (last >= 0) {
			hy = last - 1;
			line_top = last - B->y + ts;
		}
	}
	for (i = a; i < z; i++) /* the pictures first: the texts beside them keep out of them */
		if (it[i].kind == PI_CUSTOM) {
			struct pitem *p = &it[i];
			p->nx = (short)(8 + ((p->x - x0) * 4 + 1) / 3);
			if (p->nx + p->w > R)
				p->nx = (short)(R - p->w);
			p->ny = (short)(p->y - B->y + (title >= 0 && p->y > ty ? ts : 0));
			cx = p->nx;
			cy0 = p->ny;
			cy1 = p->ny + p->h;
		}
	for (i = a; i < z; i++) {
		struct pitem *p = &it[i];
		int len, room;
		p->ja = -1;
		p->title = (short)(i == title);
		if (p->kind == PI_HELP)
			continue;
		p->fy = (short)(p->y > hy ? 1 : title >= 0 && p->y == ty ? 2 : 0);
		if (p->fy == 1) { /* under the help: moved up into its place, line by line (each its own height) */
			if (p->y != last_fy) {
				if (last_fy >= 0)
					line_top += p->y - last_fy + line_h - 8;
				line_h = 8;
				last_fy = p->y;
			}
			p->ny = (short)line_top;
		} else if (p->fy == 2) {
			p->ny = (short)(p->title ? 6 : 12); /* the title's line: the others at its foot */
		} else {
			p->ny = (short)(p->y - B->y + (title >= 0 && p->y > ty ? ts : 0));
		}
		if (p->kind == PI_CUSTOM) {
			p->ny = (short)cy0;
			if (cy1 > bottom)
				bottom = cy1;
			continue;
		}
		if (p->kind == PI_CUR) {
			p->nx = 0;
			p->ny = (short)(p->ny - 4);
			continue;
		}
		/* test 99: JAPANESE looks the whole line up before it is said shorter (the user saw "PLAYS INTRO, THEN
		 * LOOPS" in English: the shorter line has no entry); the lines with none join the census */
		k = 0;
		if (p->fy == 1 && jp && !p->en) { /* test 113: not EX-DEBUG's grey line (user: English there) */
			ja_asked++;
			if (ja_find(p->s, p->v, &p->nv) >= 0) {
				k = (int)(sizeof(reword) / sizeof(reword[0])); /* kept whole */
			} else {
				ja_missing++;
				snprintf(ja_last, sizeof(ja_last), "%.47s", p->s);
			}
		}
		for (; k < (int)(sizeof(reword) / sizeof(reword[0])); k++)
			if (!strcmp(p->s, reword[k][0])) {
				snprintf(p->s, sizeof(p->s), "%s", reword[k][1]);
				break;
			}
		len = (int)strlen(p->s);
		p->n = (short)len;
		p->adv = 8;
		if (p->title) {
			p->nx = 8;
			if (p->ny + 16 > bottom)
				bottom = p->ny + 16;
			continue;
		}
		if (p->y != prev_y) {
			prev_y = p->y;
			prev_end = 0;
		}
		p->nx = (short)(B->exact ? p->x - B->x : 8 + ((p->x - x0) * 4 + 1) / 3); /* test 118: exact 1:1 */
		if (p->nx < prev_end && !B->exact)
			p->nx = (short)prev_end;
		if (p->fy == 1 && jp && !p->en) { /* the Japanese line */
			int w[2];
			p->ja = (short)ja_find(p->s, p->v, &p->nv);
			if (p->ja >= 0) {
				const int nl = ja_lines(p->ja, w);
				if (p->nx + 8 * (w[0] > w[1] ? w[0] : w[1]) > R)
					p->nx = 8;
				if (16 * nl > line_h)
					line_h = 16 * nl;
				if (p->ny + line_h > bottom)
					bottom = p->ny + line_h;
				prev_end = p->nx + 8 * w[0] + 8;
				continue;
			}
		}
		{ /* beside the picture: up to it */
			const int r = p->ny + 8 > cy0 && p->ny < cy1 && p->nx < cx ? cx - 2 : R;
			room = r - p->nx;
		}
		if (8 * len > room) {
			int at;
			if (p->fy == 1 && p->x == x0 && len > COLS && (at = split_at(p->s, COLS)) > 0 && nit < PM_ITEMS) {
				struct pitem *q = &it[nit++]; /* the second half a line lower (drawn after the box's run) */
				*q = *p;
				snprintf(q->s, sizeof(q->s), "%s", p->s + at + (p->s[at] == ',' ? 2 : 1));
				p->s[at] = 0;
				len = at;
				p->n = (short)len;
				q->n = (short)strlen(q->s);
				q->ny = (short)(p->ny + 10);
				q->box = -2;
				if (line_h < 18)
					line_h = 18;
			} else {
				/* left as far as the text before it, a row's name (beside the cursor) not at all */
				const int r = p->nx + room, lo = (p->keep || p->x <= x0 + 6) && p->nx > prev_end ? p->nx : prev_end;
				p->nx = (short)(r - 8 * len >= lo ? r - 8 * len : lo);
				room = r - p->nx;
				if (8 * len > room && len > 0)
					p->adv = (short)(room / len < 6 ? 6 : room / len);
			}
		}
		prev_end = p->nx + p->adv * len + 4;
		if (p->ny + (p->fy == 1 ? line_h : 8) > bottom)
			bottom = p->ny + (p->fy == 1 ? line_h : 8);
	}
	if (help >= 0)
		helpd = &it[help];
	B->nh = (short)(bottom + 10 < 24 ? 24 : bottom + 10);
	B->ny = (short)(B->y + (B->h - B->nh) / 2);
	if (B->ny + B->nh > PANEL_MAX_Y)
		B->ny = (short)(PANEL_MAX_Y - B->nh);
	if (B->ny < 0)
		B->ny = 0;
	return B->ny + B->nh <= PANEL_MAX_Y;
}

static void draw_item(const struct pbox *B, struct pitem *p, unsigned frame)
{
	const int x = B->nx + p->nx, y = B->ny + p->ny, xmax = B->nx + B->nw - 4;

	switch (p->kind) {
	case PI_CUR:
		rose_at(x, y, frame);
		break;
	case PI_CUSTOM:
		p->draw(tg->t, x, y, p->arg);
		break;
	case PI_TEXT:
		if (p->title)
			text16(p->s, x, y, 0x40C0C0, xmax);
		else if (p->ja >= 0)
			ja_draw(p->ja, x, y, 16, col_foot(p->c), p->v, p->nv);
		else
			text8(p->s, p->n, x, y, p->fy == 1 ? col_foot(p->c) : col_body(p->c), p->adv, xmax);
		break;
	}
}

void ps2m_render(const struct ps2m_target *T, unsigned frame, int japanese)
{
	int b, i, a, n0;

	tg = T;
	helpd = NULL;
	if (!ok || !nbx)
		return;
	jp_ok = jp_ok && jp8;
	japanese = japanese && jp_ok;
	n0 = nit;
	qsort(it, (size_t)nit, sizeof(it[0]), cmp_items);
	for (b = 0, a = 0; b < nbx; b++) {
		int z = a, t;
		while (z < n0 && it[z].box == b)
			z++;
		/* the title's line first (its letters fit what else is on it) */
		for (t = a; t < z; t++)
			if (it[t].kind == PI_TEXT && it[t].y == bx[b].y + 6 && it[t].x == bx[b].x + 8) {
				int others = 0;
				for (i = a; i < z; i++)
					if (i != t && it[i].kind == PI_TEXT && it[i].y == it[t].y)
						others += 8 * (int)strlen(it[i].s) + 8;
				title_fit(it[t].s, (PW - 16 - others) / 8);
				break;
			}
		{
			const int keep = nit;
			if (!lay_box(b, a, z, japanese && !ps2m_lines_en) && japanese && !ps2m_lines_en) { /* the Japanese
				                                                         * lines do not fit: English */
				nit = keep;
				for (i = a; i < z; i++)
					it[i].ja = -1;
				lay_box(b, a, z, 0);
			}
		}
		panel(bx[b].nx, bx[b].ny, bx[b].nw, bx[b].nh);
		for (i = a; i < z; i++)
			if (it[i].kind == PI_CUR)
				draw_item(&bx[b], &it[i], frame);
		for (i = a; i < z; i++)
			if (it[i].kind != PI_CUR && it[i].kind != PI_HELP)
				draw_item(&bx[b], &it[i], frame);
		for (i = n0; i < nit; i++) /* the split lines' second halves */
			if (it[i].box == -2) {
				draw_item(&bx[b], &it[i], frame);
				it[i].box = -3;
			}
		a = z;
	}
	if (helpd && helpd->s[0]) { /* the description box */
		const uint32_t m = helpd->c == C_CYAN ? 0x808080 : col_foot(helpd->c);
		int e = -1, w[2];
		unsigned v[4];
		int nv = 0;
		panel(0, DESC_Y, PW, DESC_H);
		if (japanese && !helpd->en) { /* test 112: EX-DEBUG's helps English */
			ja_asked++;
			e = ja_find(helpd->s, v, &nv);
			if (e < 0) {
				ja_missing++;
				snprintf(ja_last, sizeof(ja_last), "%.47s", helpd->s);
			}
		}
		if (e >= 0 && ja_lines(e, w) <= 2) {
			ja_draw(e, 8, DESC_Y + 8, 16, m, v, nv);
		} else { /* English: 28 letters a line, 3 lines 12 px apart (4 lines 9 apart: two 30-letter lines) */
			const char *s = helpd->s, *at[4];
			int l, nl, len[4];
			for (nl = 0; nl < 4 && *s; nl++) {
				int n = 0, cut = -1;
				while (s[n] && s[n] != '\n' && n < COLS) {
					if (s[n] == ' ')
						cut = n;
					n++;
				}
				if (s[n] && s[n] != '\n' && s[n] != ' ' && cut > 0)
					n = cut;
				if (s[n] && s[n] != '\n') { /* broken: after a "? " (SERVICE MENU? A = YES, B = NO), else after a
					                          * ", " past the middle */
					int k, q = 0;
					for (k = n - 1; k >= 6; k--)
						if (s[k] == '?' && s[k + 1] == ' ') {
							n = k + 1;
							q = 1;
							break;
						}
					for (k = n - 1; !q && k >= COLS / 2; k--)
						if (s[k] == ',' && s[k + 1] == ' ') {
							n = k + 1;
							break;
						}
				}
				at[nl] = s;
				len[nl] = n;
				s += n;
				while (*s == ' ' || *s == '\n')
					s++;
			}
			for (l = 0; l < nl; l++)
				text8(at[l], len[l], 8, nl > 3 ? DESC_Y + 5 + 9 * l : DESC_Y + 9 + 12 * l, m, 8, PW - 8);
		}
	}
}

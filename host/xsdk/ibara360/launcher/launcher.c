/* ibara360 test 72 launcher, ibara360.xex (user 2026-10-25: "split the two games into individual xex files and develop
 * a new launcher, using assets and sounds from the playstation 2 port"). The two games are titles of their own beside
 * it, ibara.xex and ibarablk.xex (CMakeLists.txt); this one chooses, then hands the console over with XAM's loader
 * (source/launch.c), and each game's QUIT TO GAME SELECT hands it back.
 *
 * As the PS2 port's front end (its pictures and sounds from IBARAR.PDM, gen/launcher by tools/launcher/mklaunch.py):
 * - the title screen (a cold start only): the PS2 port's title picture, PRESS START BUTTON, its two title voices
 *   ("IBARA" at the first frame, "KAKATTE" 60 frames later, as SLPM_663.01 plays them); START or A = its coin sound;
 * - MODE SELECT: the PS2 mode select's painting and header plate; IBARA and IBARA KURO BLACK LABEL (each logo on the
 *   PS2's blank sign; Kuro BL's logo from its own graphics) and the PS2's EXIT plate; a rose at the chosen one; the
 *   leaf frame with what it is; UP / DOWN = the cursor sound, A / START = decide (EXIT: cancel, as the PS2's), B = cancel
 *   and the title; no music (the PS2 port plays none in its menus);
 * - a game chosen: NOW LOADING, the decide sound to its end, black, then the game; EXIT: back to the dashboard.
 * Started by a game (its launch data): MODE SELECT at once, that game chosen. 16:9 = the painting at the right of a
 * column of the PS2's rose lattice; 4:3 (the console's) = the painting full, the column over it.
 * The log: xsdk's file (ibara360.log) and the games' network log (NET: the PC's tools/netlog/ibaranet.py).
 * Test 74: the hand-off is XamLoaderLaunchTitle("game:\name", 0) (launch.h), test 73's A, the form that worked.
 *
 * Test 75 (user 2026-10-26):
 * - the leaf frame says each game's name with its Japanese one and its ROM's date ("Ibara (鋳薔薇)" / "2005/03/22 MASTER
 *   VER..", "Ibara Kuro: Black Label (鋳薔薇黒 ブラックレーベル)" / "2006/02/06. MASTER VER."; no CAVE 2005 / 2006, no A =
 *   PLAY) in the PS2 disc's 26 x 26 font (ALLIMAGE.DAT; the game's own 16 x 16 one has no 薔 or 薇);
 * - GALLERY ("add the PS2 port's gallery mode, without the sound test. accessible from the launcher"): the PS2 port's
 *   (FUN_001cef60, this session's subagent's report in PLAN.md "Test 75"), its 78 pictures (gallery.dat beside this
 *   .xex, tools/launcher/mkgallery.py) in 13 pages of 6 thumbnails, its box, numbers, page counter, help and picture
 *   window, its controls (the 360 pad's buttons for the PlayStation's: A = ○, B = ×, Y = △, LB / RB = L1 / R1), its
 *   repeat (on the press, 17 frames on, then every 5), fades (32 frames), zoom (x2 / x2.25) and pan; the pictures shown
 *   square-pixelled (the PS2 drew them 7% narrow on a 4:3 set); "when browsing the gallery mode, have it play this music
 *   track" (gallery.mp3 beside this .xex = 05.Endress_Train.mp3, lsound.c), "label it with a small box ticker that
 *   lists the track's name, artist and album" (in the PS2's window; the album's line goes round as a ticker).
 *
 * Test 76 (user's todo list 2026-10-26): no "A = EXIT" under EXIT; "©2005-2006-2026 CAVE Interactive CO.,LTD." on the
 * title screen (the user: lower left, then, as 1.5x met the logo there, "move it to the upper left corner"), in the PS2
 * font whose '@' cell is its ©; the sound effects ("IBARA", "KAKATTE" and the others) at half (lsound.c LS_GAIN).
 *
 * Test 79 (user 2026-10-26): ARRANGE MODE's frame has its release date, "2006/02/23", under the PS2's description.
 *
 * Test 91 (user's todo list 2026-10-28, the gallery with a video): LB / RB between pictures keep the one on screen until
 * the next is in (the page and its help no longer flash between them); the log's lines are written by a thread of their
 * own (the hard disk's ~2.5 s wake-up after ~20 s idle froze the gallery whenever a picture's line was written).
 *
 * Test 97 (user 2026-10-31: "integrate gallery.mp3 into ibara360.xex (compress it without sacrificing audio quality)
 * so that it's not separately required by the user (the user will still need a ps2 ibara iso to extract the ost,
 * gallery, and other necessary files for the launcher and menus, develop an easy-to-use offline tool for that)"):
 * - the gallery's music is inside this .xex: gallery.mp3's MPEG frames as they were (its ID3 tags off), zlib'd
 *   (gen/launcher/gallery_mp3.z by tools/launcher/mkmp3.py, launcher/gallery_mp3.S), inflated on the load thread;
 * - every PS2 picture and sound (the title, MODE SELECT, the atlas, the six sounds, NOW LOADING's ticker, the gallery)
 *   comes from ps2data.bin beside the .xex files (source/ps2data.c), which tools/ps2extract (ps2extract.exe) makes
 *   from the user's own Ibara PS2 disc image; gen/launcher keeps only the layout, Kuro BL's logo (the arcade's) and
 *   ibara's 8 x 8 font (the arcade's), which the launcher puts into the atlas itself;
 * - without ps2data.bin (or with a wrong one): a plain MODE SELECT in that font (the games, EXIT; no GALLERY, no
 *   sounds) and what to do about it on the screen.
 *
 * Backlog 2d / 2e (user, approved 2026-10-31):
 * - 4:3: MODE SELECT's painting full screen with the menu over it (no rose-lattice column over its left: the user's
 *   43_launcher_left_border.png); the title, the GALLERY and NOW LOADING were full screen already;
 * - TATE, an easter egg: LB / RB on the title or MODE SELECT turn the launcher for a monitor stood on its side, as the
 *   games' ROTATION LEFT / RIGHT (LB = LEFT: the player's right is the screen's down; RB = RIGHT: the screen's up; the
 *   same button again = upright). The picture is drawn on a 720-wide portrait canvas (as tall as the landscape one is
 *   wide), every quad turned as it is put down (quad). Its own art, official only: the title = the PS2 GALLERY's
 *   picture 15 whole (the arcade flyer the landscape title is the top of; ps2data.bin's la.title_v, ps2extract 2;
 *   without it, an older ps2data.bin: the landscape title across the lattice); MODE SELECT = the Insanity DVD booklet's
 *   page 5, the whole painting the landscape MODE SELECT is a faded crop of (gen/launcher/tate_art.h, mktate.py). The
 *   menu as the landscape one (header, plates, rose, leaf frame), the frame at the foot; 16:9 = the art across the
 *   width, the lattice above and below. The GALLERY stays upright, as the PS2 port's (its NOW LOADING gate too). */
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xsdk/gpu.h"
#include "xsdk/kernel.h"
#include "xsdk/log.h"
#include "xsdk/present.h"
#include "xsdk/shader.h"
#include "xsdk/texture.h"
#include "xsdk/thread.h"

#include "ibara360_shaders.h"
#include "zlib.h"

#include "card.h"
#include "card_ticker.h" /* test 93: gen/card's, the PS2 port's NOW LOADING ticker (test 97: ps2data.bin's) */
#include "gallery_mp3.h" /* test 97: the gallery's music in this .xex */
#include "launch.h"
#include "launch_layout.h"
#include "lsound.h"
#include "netlog.h"
#include "ps2data.h"
#include "tate_art.h" /* backlog 2e: the TATE MODE SELECT's painting (gen/launcher, tools/launcher/mktate.py) */
#include "xplat.h"

/* backlog 2e: ps2data.bin's TATE title (ps2extract 2; ps2data.h has no name for it yet) */
#ifndef PS2N_TITLE_V
#define PS2N_TITLE_V "la.title_v" /* ARGB32 640 x 896: the GALLERY's picture 15, columns 128-767 */
#endif
#define LA_TV_W 640
#define LA_TV_H 896

/* test 97: the music in the .xex, the PS2 data from ps2data.bin (the plain screen without it) */
#define XEX_VERSION "1.02" /* test 120: release version */
#define XEX_TEST "120" /* test 120: release version */
#define NPADS 4
#define STICK_DEAD 16000

/* ---- the log (tb_read, tb_us: ltime.c) ------------------------------------------------------------------------------ */

static volatile unsigned frame; /* frames shown */

/* Test 91 (user's todo list: the gallery "can "fall asleep" and be late on image switching if you idle on one for a
 * while", the video's 150 frames with nothing moving): a line written to the file waits ~2.5 s once the hard disk has
 * been idle ~20 s (the games' "FILES: A PASS TOOK 2689 MS, 22 S AFTER THE LAST WRITE"), and the launcher wrote its lines
 * on the main thread (the gallery's "PICTURE n UNPACKED" line froze the screen). Now log_printf puts a line in a ring and
 * the log thread (log_task) writes it; log_out writes what is left before the title ends. */
#define LQ_LINES 128
#define LQ_CHARS 400
#define LOG_THREAD 3
static char lq_text[LQ_LINES][LQ_CHARS];
static unsigned lq_frame[LQ_LINES];
static volatile unsigned lq_put, lq_got, lq_lost;
static volatile int lq_thread; /* the log thread runs */
static RTL_CRITICAL_SECTION lq_cs, lq_wr; /* the ring; the file's writer (the thread or log_out) */

static void lq_init(void)
{
	RtlInitializeCriticalSection(&lq_cs);
	RtlInitializeCriticalSection(&lq_wr);
}

/* the ring's lines into the file, oldest first */
static void lq_drain(void)
{
	char line[LQ_CHARS];
	unsigned f, lost;

	RtlEnterCriticalSection(&lq_wr);
	for (;;) {
		RtlEnterCriticalSection(&lq_cs);
		if (lq_got == lq_put) {
			lost = lq_lost;
			lq_lost = 0;
			RtlLeaveCriticalSection(&lq_cs);
			break;
		}
		memcpy(line, lq_text[lq_got % LQ_LINES], sizeof(line));
		f = lq_frame[lq_got % LQ_LINES];
		lq_got = lq_got + 1;
		RtlLeaveCriticalSection(&lq_cs);
		xsdk_log_write("%6u %s", f, line);
	}
	if (lost)
		xsdk_log_write("%6u LOG: %u LINES LOST (THE RING WAS FULL)", frame, lost);
	RtlLeaveCriticalSection(&lq_wr);
}

static uint32_t log_task(void *u)
{
	(void)u;
	for (;;) {
		lq_drain();
		xsdk_thread_sleep(5);
	}
	return 0;
}

/* a line into the log (the frame number in front, as the games' lines); color is the games' (unused here) */
void log_printf(uint32_t color, const char *fmt, ...)
{
	char buf[LQ_CHARS];
	va_list ap;

	(void)color;
	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);
	va_end(ap);
	RtlEnterCriticalSection(&lq_cs);
	if (lq_put - lq_got >= LQ_LINES) {
		lq_lost = lq_lost + 1;
	} else {
		memcpy(lq_text[lq_put % LQ_LINES], buf, sizeof(buf));
		lq_frame[lq_put % LQ_LINES] = frame;
		lq_put = lq_put + 1;
	}
	RtlLeaveCriticalSection(&lq_cs);
	if (!lq_thread) /* none yet (or it did not start): written here */
		lq_drain();
}

/* as the games' main.c (test 40): every line of xsdk's log file also to the network log (CMakeLists.txt, --wrap) */
void __real_xsdk_log_write(const char *format, ...) __attribute__((format(printf, 1, 2)));
void __real_xsdk_log_write_bytes(const char *bytes, size_t length_bytes);
static RTL_CRITICAL_SECTION log_cs;
static volatile int log_cs_ready, log_named;

static int log_enter(void)
{
	if (!log_cs_ready) {
		RtlInitializeCriticalSection(&log_cs);
		log_cs_ready = 1;
	}
	RtlEnterCriticalSection(&log_cs);
	if (!log_named) {
		netlog_name(NL_LOG, "ibara360.log");
		log_named = 1;
	}
	return 1;
}

void __wrap_xsdk_log_write(const char *fmt, ...)
{
	char buf[512];
	va_list ap;
	size_t n;

	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf) - 1, fmt, ap);
	va_end(ap);
	n = strlen(buf);
	log_enter();
	buf[n] = '\n';
	netlog_put(NL_LOG, buf, (unsigned)n + 1);
	buf[n] = 0;
	__real_xsdk_log_write("%s", buf);
	RtlLeaveCriticalSection(&log_cs);
}

void __wrap_xsdk_log_write_bytes(const char *bytes, size_t length_bytes)
{
	log_enter();
	netlog_put(NL_LOG, bytes, (unsigned)length_bytes);
	__real_xsdk_log_write_bytes(bytes, length_bytes);
	RtlLeaveCriticalSection(&log_cs);
}

/* the console's address for the network log's line (XAM's XNetGetTitleXnAddr, as main.c's) */
enum { ORDINAL_TITLE_ADDRESS = 0x49 };
struct title_xnaddr {
	uint32_t address, online_address;
	uint16_t online_port;
	uint8_t ethernet[6], online[20];
};

int console_address(uint8_t ip[4])
{
	static uint32_t (*title_address)(uint32_t caller, struct title_xnaddr *a);
	static int looked;
	struct title_xnaddr a;

	if (!looked) {
		HANDLE xam = 0;
		looked = 1;
		if (XexGetModuleHandle("xam.xex", &xam) != 0 ||
		    XexGetProcedureAddress(xam, ORDINAL_TITLE_ADDRESS, (void **)&title_address) < 0)
			title_address = NULL;
	}
	if (!title_address)
		return 0;
	memset(&a, 0, sizeof(a));
	if (title_address(XNCALLER_TITLE, &a) == 0 || !a.address)
		return 0;
	memcpy(ip, &a.address, 4);
	return 1;
}

/* the log's last lines to the PC before the title ends (the file is written as each line comes); handoff: a game
 * next (launch_go's 1), else the dashboard (test 74: the PC is told, no longer "a CPU fault") */
static void log_out(int handoff)
{
	lq_drain(); /* test 91: the ring's last lines */
	if (netlog_ending(handoff ? NETLOG_END_HANDOFF : NETLOG_END_EXIT))
		xsdk_thread_sleep(200);
}

/* ---- the picture: textured quads on the GADGETS shaders (card.vert / card.frag) ---------------------------------- */

#define LQ_MAX 1024    /* quads a frame */
#define LV_F 8         /* a vertex: x y, r g b a, u v */
#define SLOTS 4        /* vertex blocks: a block is written again 4 frames later, when its frame has been shown */
#define BATCHES 24

typedef struct {
	float r, g, b, a;
} col_t;

static const XsdkVertexElement layout[] = {
	{.usage = XSDK_USAGE_POSITION, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 0},
	{.usage = XSDK_USAGE_COLOR, .format = XSDK_VERTEX_FLOAT4, .offset_bytes = 8},
	{.usage = XSDK_USAGE_TEXCOORD, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 24},
};
static XsdkShader vs, ps;
static XsdkTexture t_title, t_mode, t_atlas;
static int ps2;              /* test 97: ps2data.bin's pictures in (else the plain screen) */
static char plain_why[96];   /* why not, for the plain screen */
static XsdkTexture t_tick; /* test 93: the ticker's band (rows 0-31) and text (32-61) */
static int tick_ok;
static XsdkSamplerState s_point, s_linear;
static XsdkBlendState b_alpha;
static volatile uint32_t *vmem;
static float qv[LQ_MAX][6][LV_F];
static int nq;
static struct {
	const XsdkTexture *t;
	int lin, first, n;
} bt[BATCHES];
static int nb;
static float canvas_w = 1280; /* the design's width: 1280 (16:9) or 960 (4:3), its height 720 */
static int wide = 1;
static float clip_x0, clip_x1 = 1e9f; /* test 75: quads cut to these columns (the gallery's picture, the ticker) */
/* backlog 2e: TATE. tate = the user's (LB / RB), rot = how this quad is turned (tate, but the gallery stays upright):
 * rot's canvas is portrait, 720 wide and canvas_w tall (dw x dh); quad turns its corners onto the landscape one */
enum { TT_OFF, TT_LEFT, TT_RIGHT };
static int tate, rot;
static XsdkTexture t_title_v, t_mode_v;
static int title_v_ok, mode_v_ok; /* their pictures in (title: ps2data.bin's la.title_v; MODE SELECT: tate_art.h) */
static unsigned turn_t = 99;      /* frames since the last turn (a short fade in) */

static float dw(void)
{
	return rot ? 720.0f : canvas_w;
}

static float dh(void)
{
	return rot ? canvas_w : 720.0f;
}

static const col_t WHITE = {1, 1, 1, 1}, YELLOW = {1, 0.85f, 0.3f, 1}, RED = {1, 0.35f, 0.3f, 1},
                   GREY = {0.62f, 0.6f, 0.62f, 1};

static col_t rgba(float r, float g, float b, float a)
{
	const col_t c = {r, g, b, a};
	return c;
}

static void use(const XsdkTexture *t, int lin)
{
	if (nb && bt[nb - 1].t == t && bt[nb - 1].lin == lin)
		return;
	if (nb && !bt[nb - 1].n)
		nb--;
	if (nb >= BATCHES)
		return;
	bt[nb].t = t;
	bt[nb].lin = lin;
	bt[nb].first = nq;
	bt[nb].n = 0;
	nb++;
}

/* design pixels x0, y0 .. x1, y1 -> clip space; uv in the texture's 0..1 */
static void quad(float x0, float y0, float x1, float y1, float u0, float v0, float u1, float v1, col_t c)
{
	static const int order[6] = {0, 1, 2, 2, 1, 3};
	float k[4][4];
	int i;

	if (nq >= LQ_MAX || !nb || c.a <= 0)
		return;
	if (x0 < clip_x0 || x1 > clip_x1) {
		const float a = x0 < clip_x0 ? clip_x0 : x0, b = x1 > clip_x1 ? clip_x1 : x1, du = (u1 - u0) / (x1 - x0);
		if (b <= a)
			return;
		u1 = u0 + (b - x0) * du;
		u0 = u0 + (a - x0) * du;
		x0 = a;
		x1 = b;
	}
	k[0][0] = x0, k[0][1] = y0, k[0][2] = u0, k[0][3] = v0;
	k[1][0] = x1, k[1][1] = y0, k[1][2] = u1, k[1][3] = v0;
	k[2][0] = x0, k[2][1] = y1, k[2][2] = u0, k[2][3] = v1;
	k[3][0] = x1, k[3][1] = y1, k[3][2] = u1, k[3][3] = v1;
	if (rot) /* backlog 2e: the portrait canvas turned onto the screen, as main.c's ROTATION: LEFT = the player's right
	          * the screen's down, the player's down its left; RIGHT = right up, down right */
		for (i = 0; i < 4; i++) {
			const float px = k[i][0], py = k[i][1];
			k[i][0] = rot == TT_LEFT ? canvas_w - py : py;
			k[i][1] = rot == TT_LEFT ? px : 720 - px;
		}
	for (i = 0; i < 6; i++) {
		float *v = qv[nq][i];
		const float *p = k[order[i]];
		v[0] = p[0] / (canvas_w / 2) - 1;
		v[1] = 1 - p[1] / 360;
		v[2] = c.r;
		v[3] = c.g;
		v[4] = c.b;
		v[5] = c.a;
		v[6] = p[2];
		v[7] = p[3];
	}
	nq++;
	bt[nb - 1].n++;
}

/* sprite id at x, y scaled by k (its uv a quarter texel in, so linear sampling stays inside it) */
static void spr(int id, float x, float y, float k, col_t c)
{
	const struct la_rect *r = &la_sprites[id];
	const float e = 0.25f;

	use(&t_atlas, 1);
	quad(x, y, x + r->w * k, y + r->h * k, (r->x + e) / LA_ATLAS_W, (r->y + e) / LA_ATLAS_H,
	     (r->x + r->w - e) / LA_ATLAS_W, (r->y + r->h - e) / LA_ATLAS_H, c);
}

/* test 75: the part sx, sy, sw, sh of sprite id onto x, y, w, h of the canvas (linear, a quarter texel in) */
static void sub(int id, float sx, float sy, float sw, float sh, float x, float y, float w, float h, col_t c)
{
	const struct la_rect *r = &la_sprites[id];
	const float e = 0.25f;

	use(&t_atlas, 1);
	quad(x, y, x + w, y + h, (r->x + sx + e) / LA_ATLAS_W, (r->y + sy + e) / LA_ATLAS_H, (r->x + sx + sw - e) / LA_ATLAS_W,
	     (r->y + sy + sh - e) / LA_ATLAS_H, c);
}

/* a box of colour c (the white sprite's middle) */
static void box(float x, float y, float w, float h, col_t c)
{
	const struct la_rect *r = &la_sprites[LS_WHITE];
	const float u = (r->x + r->w / 2.0f) / LA_ATLAS_W, v = (r->y + r->h / 2.0f) / LA_ATLAS_H;

	use(&t_atlas, 0);
	quad(x, y, x + w, y + h, u, v, u, v, c);
}

/* the PS2 font (8 x 16 cells, its own shadow), k times, point sampled; returns the width */
static float text(float x, float y, const char *s, float k, col_t c)
{
	const struct la_rect *f = &la_sprites[LS_FONT];
	const float x0 = x;

	use(&t_atlas, 0);
	for (; *s; s++, x += LA_FONT_CW * k) {
		const unsigned ch = (unsigned char)*s;
		float u, v;
		if (ch <= 0x20 || ch >= 0x80)
			continue;
		u = f->x + (float)((ch - 0x20) % 32) * LA_FONT_CW;
		v = f->y + (float)((ch - 0x20) / 32) * LA_FONT_CH;
		quad(x, y, x + LA_FONT_CW * k, y + LA_FONT_CH * k, u / LA_ATLAS_W, v / LA_ATLAS_H, (u + LA_FONT_CW) / LA_ATLAS_W,
		     (v + LA_FONT_CH) / LA_ATLAS_H, c);
	}
	return x - x0;
}

static float text_w(const char *s, float k)
{
	return (float)strlen(s) * LA_FONT_CW * k;
}

/* test 75: the next code point of UTF-8 s (0 at its end) */
static unsigned utf8_next(const char **s)
{
	const unsigned char *p = (const unsigned char *)*s;
	unsigned c = *p, n = c >= 0xF0 ? 3 : c >= 0xE0 ? 2 : c >= 0xC0 ? 1 : 0;

	if (!c)
		return 0;
	p++;
	if (n)
		c &= 0x3F >> n;
	for (; n && (*p & 0xC0) == 0x80; n--)
		c = c << 6 | (*p++ & 0x3F);
	*s = (const char *)p;
	return c;
}

static const struct la_glyph *glyph(unsigned cp)
{
	int lo = 0, hi = LA_GLYPHS - 1;

	while (lo <= hi) {
		const int m = (lo + hi) / 2;
		if (la_glyphs[m].cp == cp)
			return &la_glyphs[m];
		if (la_glyphs[m].cp < cp)
			lo = m + 1;
		else
			hi = m - 1;
	}
	return NULL;
}

/* test 75: UTF-8 text in the PS2 disc's 26 x 26 font (ALLIMAGE.DAT: half-width ASCII, the kanji and kana of the games'
 * names), k times (point sampled at 1, else linear); returns the width */
static float jtext(float x, float y, const char *s, float k, col_t c)
{
	const float x0 = x;
	unsigned cp;

	use(&t_atlas, k != 1.0f);
	while ((cp = utf8_next(&s)) != 0) {
		const struct la_glyph *g = glyph(cp);
		if (!g) {
			x += LA_G_SPACE * k;
			continue;
		}
		quad(x, y, x + g->w * k, y + LA_G_H * k, (float)g->x / LA_ATLAS_W, (float)g->y / LA_ATLAS_H,
		     (float)(g->x + g->w) / LA_ATLAS_W, (float)(g->y + LA_G_H) / LA_ATLAS_H, c);
		x += g->adv * k;
	}
	return x - x0;
}

static float jtext_w(const char *s, float k)
{
	float w = 0;
	unsigned cp;

	while ((cp = utf8_next(&s)) != 0) {
		const struct la_glyph *g = glyph(cp);
		w += (g ? g->adv : LA_G_SPACE) * k;
	}
	return w;
}

/* a 640 x 448 background (the PS2's screen, shown 4:3) at x, its height the canvas's */
static void background(const XsdkTexture *t, float x, col_t c)
{
	use(t, 1);
	quad(x, 0, x + 960, 720, 0, 0, 1, 1, c);
}

/* the rose lattice over x0..x1, y0..y1, k times its cell */
static void lattice(float x0, float y0, float x1, float y1, float k, col_t c)
{
	const struct la_rect *r = &la_sprites[LS_LATTICE];
	const float w = r->w * k, h = r->h * k;
	float x, y;

	use(&t_atlas, 0);
	for (y = y0; y < y1; y += h)
		for (x = x0; x < x1; x += w) {
			const float cw = x + w > x1 ? x1 - x : w, ch = y + h > y1 ? y1 - y : h;
			quad(x, y, x + cw, y + ch, (float)r->x / LA_ATLAS_W, (float)r->y / LA_ATLAS_H,
			     (r->x + cw / k) / LA_ATLAS_W, (r->y + ch / k) / LA_ATLAS_H, c);
		}
}

/* test 75: the PS2's window (FUN_001ce830): the leaf frame cut in nine, its 8-pixel corners, its edges and middle in
 * pieces of at most 224 x 72 of it, the middle at 0x50 of 0x80; x, y, w, h on the canvas, kx, ky its pixels' size */
static void nine(float x, float y, float w, float h, float kx, float ky, col_t c)
{
	const float cw = 8 * kx, ch = 8 * ky, iw = w - 2 * cw, ih = h - 2 * ch;
	const col_t m = rgba(c.r, c.g, c.b, c.a * (80.0f / 128));
	float u, v;

	sub(LS_FRAME, 0, 0, 8, 8, x, y, cw, ch, c);
	sub(LS_FRAME, 232, 0, 8, 8, x + w - cw, y, cw, ch, c);
	sub(LS_FRAME, 0, 80, 8, 8, x, y + h - ch, cw, ch, c);
	sub(LS_FRAME, 232, 80, 8, 8, x + w - cw, y + h - ch, cw, ch, c);
	for (u = 0; u < iw; u += 224 * kx) {
		const float sw = iw - u < 224 * kx ? iw - u : 224 * kx;
		sub(LS_FRAME, 8, 0, sw / kx, 8, x + cw + u, y, sw, ch, c);
		sub(LS_FRAME, 8, 80, sw / kx, 8, x + cw + u, y + h - ch, sw, ch, c);
		for (v = 0; v < ih; v += 72 * ky) {
			const float sh = ih - v < 72 * ky ? ih - v : 72 * ky;
			sub(LS_FRAME, 8, 8, sw / kx, sh / ky, x + cw + u, y + ch + v, sw, sh, m);
		}
	}
	for (v = 0; v < ih; v += 72 * ky) {
		const float sh = ih - v < 72 * ky ? ih - v : 72 * ky;
		sub(LS_FRAME, 0, 8, 8, sh / ky, x, y + ch + v, cw, sh, c);
		sub(LS_FRAME, 232, 8, 8, sh / ky, x + w - cw, y + ch + v, cw, sh, c);
	}
}

/* w x h pixels as bytes A R G B into texture t at x0, y0 (raw NULL: clear ones) */
static void put_px(XsdkTexture *t, const unsigned char *raw, unsigned x0, unsigned y0, unsigned w, unsigned h)
{
	unsigned x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++) {
			uint32_t v = 0;
			if (raw) {
				const unsigned char *p = raw + ((size_t)y * w + x) * 4;
				v = (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
			}
			t->texels[(size_t)(y0 + y) * t->pitch + x0 + x] = v;
		}
}

/* test 97: a new w x h texture with raw's pixels (NULL: clear) */
static int make_tex(XsdkTexture *t, const unsigned char *raw, unsigned w, unsigned h)
{
	if (!NT_SUCCESS(xsdk_texture_create(t, XSDK_FORMAT_A8R8G8B8, w, h, 1, false)))
		return -1;
	put_px(t, raw, 0, 0, w, h);
	return 0;
}

/* test 97: ps2data.bin's picture name (w x h, A R G B) into a new texture; -1 = not there (no texture made) */
static int ps2_tex(XsdkTexture *t, const char *name, unsigned w, unsigned h)
{
	uint32_t n;
	unsigned char *raw = ps2data_load(name, &n);
	int r;

	if (!raw || n != w * h * 4) {
		if (raw)
			log_printf(C_RED, "PS2DATA: %s IS %u BYTES, NOT %ux%u", name, (unsigned)n, w, h);
		free(raw);
		return -1;
	}
	r = make_tex(t, raw, w, h);
	free(raw);
	return r;
}

/* zlib data of w x h pixels as bytes A R G B into texture t at x0, y0 (test 97: Kuro BL's logo into the atlas) */
static int unpack_into(XsdkTexture *t, const unsigned char *z, unsigned zn, unsigned x0, unsigned y0, unsigned w,
                       unsigned h)
{
	z_stream st;
	unsigned char *raw;
	int r;

	raw = malloc((size_t)w * h * 4);
	if (!raw)
		return -1;
	memset(&st, 0, sizeof(st));
	st.next_in = (unsigned char *)z;
	st.avail_in = zn;
	st.next_out = raw;
	st.avail_out = w * h * 4;
	if (inflateInit(&st) != Z_OK) {
		free(raw);
		return -1;
	}
	r = inflate(&st, Z_FINISH);
	inflateEnd(&st);
	if (r != Z_STREAM_END || st.avail_out) {
		free(raw);
		return -1;
	}
	put_px(t, raw, x0, y0, w, h);
	free(raw);
	return 0;
}

/* backlog 2e: the TATE MODE SELECT's painting (tate_art.h: R G B rows, each the difference from the one above, zlib'd)
 * into a new texture t; 0 = done */
static int tate_art_unpack(XsdkTexture *t)
{
	const size_t row = (size_t)LA_TATE_W * 3, n = row * LA_TATE_H;
	unsigned char *raw = malloc(n);
	z_stream st;
	size_t i;
	unsigned x, y;
	int r;

	if (!raw)
		return -1;
	memset(&st, 0, sizeof(st));
	st.next_in = (unsigned char *)la_tate_z;
	st.avail_in = LA_TATE_Z_BYTES;
	st.next_out = raw;
	st.avail_out = (unsigned)n;
	r = inflateInit(&st) == Z_OK ? inflate(&st, Z_FINISH) : Z_DATA_ERROR;
	inflateEnd(&st);
	if (r != Z_STREAM_END || st.avail_out) {
		free(raw);
		return -1;
	}
	for (i = row; i < n; i++) /* the rows' differences undone */
		raw[i] = (unsigned char)(raw[i] + raw[i - row]);
	if ((uint32_t)crc32(0, raw, (unsigned)n) != LA_TATE_CRC ||
	    !NT_SUCCESS(xsdk_texture_create(t, XSDK_FORMAT_A8R8G8B8, LA_TATE_W, LA_TATE_H, 1, false))) {
		free(raw);
		return -1;
	}
	for (y = 0; y < LA_TATE_H; y++)
		for (x = 0; x < LA_TATE_W; x++) {
			const unsigned char *p = raw + y * row + x * 3;
			t->texels[(size_t)y * t->pitch + x] = 0xFF000000u | (uint32_t)p[0] << 16 | (uint32_t)p[1] << 8 | p[2];
		}
	free(raw);
	return 0;
}

/* ---- test 75: the gallery's data (gallery.dat, tools/launcher/mkgallery.py) and the thread that reads and unpacks --- */

#define GAL_FILE "PS2DATA.BIN'S GALLERY" /* test 97: ps2data.bin's blob (was gallery.dat beside this .xex) */
#define MUSIC_FILE "THE MUSIC IN THE XEX" /* test 97: gen/launcher/gallery_mp3.z (was gallery.mp3 beside it; user
                                           * 2026-10-26: 05.Endress_Train.mp3) */
#define GAL_SHEETS 5             /* thumbnail sheets, 18 pictures each */
#define GAL_PICS 78
#define GAL_PAGES 13
#define GAL_SHEET_W 420
#define GAL_SHEET_H 432
#define GAL_PIC_W 896            /* the picture textures: the largest whole picture */
#define LOAD_THREAD 2

struct gal_entry {
	unsigned off, zlen, w, h, fmt, ncol, whole_w, whole_h, x, y;
};
static struct gal_entry gal_e[GAL_SHEETS + GAL_PICS];
static unsigned char *gal_dat;
static unsigned gal_bytes;
static XsdkTexture t_sheet[GAL_SHEETS], t_pic[2];
static int gal_textures;               /* the textures made (video_init) */
static volatile int gal_ready;         /* 1 = the sheets unpacked, -1 = no gallery */
static volatile int music_ready;       /* 1 = the MP3 set in lsound, -1 = none */
static volatile unsigned pic_req, pic_done, pic_ms;
static volatile int pic_req_n, pic_req_slot;
static volatile unsigned slot_used[2]; /* the frame each picture texture was last drawn in */

static unsigned be32(const unsigned char *p)
{
	return (unsigned)p[0] << 24 | (unsigned)p[1] << 16 | (unsigned)p[2] << 8 | p[3];
}

static unsigned be16(const unsigned char *p)
{
	return (unsigned)p[0] << 8 | p[1];
}

/* test 97: the gallery's file, ps2data.bin's blob (was gallery.dat beside this .xex) into a new buffer (*n its
 * bytes); NULL = not there or damaged */
static unsigned char *gal_read(unsigned *n)
{
	uint32_t got;
	unsigned char *b = ps2data_load(PS2N_GALLERY, &got);

	*n = b ? (unsigned)got : 0;
	return b;
}

/* test 97: the gallery's music, inside this .xex (launcher/gallery_mp3.S: gen/launcher/gallery_mp3.z, the MP3's
 * frames zlib'd by tools/launcher/mkmp3.py) inflated into a new buffer (*n its bytes), its CRC checked; NULL = it did
 * not unpack */
static unsigned char *music_unpack(unsigned *n)
{
	unsigned char *b = malloc(GALLERY_MP3_BYTES);
	z_stream st;
	int r;

	*n = 0;
	if (!b)
		return NULL;
	memset(&st, 0, sizeof(st));
	st.next_in = (unsigned char *)gallery_mp3_z;
	st.avail_in = GALLERY_MP3_Z_BYTES;
	st.next_out = b;
	st.avail_out = GALLERY_MP3_BYTES;
	r = inflateInit(&st) == Z_OK ? inflate(&st, Z_FINISH) : Z_DATA_ERROR;
	inflateEnd(&st);
	if (r != Z_STREAM_END || st.avail_out || (uint32_t)crc32(0, b, GALLERY_MP3_BYTES) != GALLERY_MP3_CRC) {
		free(b);
		return NULL;
	}
	*n = GALLERY_MP3_BYTES;
	return b;
}

/* gallery.dat's table checked into gal_e; 0 = good */
static int gal_parse(void)
{
	unsigned i;

	if (gal_bytes < 16 + 24 * (GAL_SHEETS + GAL_PICS) || memcmp(gal_dat, "IBGL", 4) || be32(gal_dat + 4) != 1 ||
	    be32(gal_dat + 8) != GAL_SHEETS || be32(gal_dat + 12) != GAL_PICS)
		return -1;
	for (i = 0; i < GAL_SHEETS + GAL_PICS; i++) {
		const unsigned char *p = gal_dat + 16 + 24 * i;
		struct gal_entry *e = &gal_e[i];
		e->off = be32(p);
		e->zlen = be32(p + 4);
		e->w = be16(p + 8);
		e->h = be16(p + 10);
		e->fmt = be16(p + 12);
		e->ncol = be16(p + 14);
		e->whole_w = be16(p + 16);
		e->whole_h = be16(p + 18);
		e->x = be16(p + 20);
		e->y = be16(p + 22);
		if (e->off > gal_bytes || e->zlen > gal_bytes - e->off || e->w > GAL_PIC_W || e->h > GAL_PIC_W ||
		    (e->fmt != 1 && e->fmt != 2) || e->ncol > 256 || e->x + e->w > e->whole_w || e->y + e->h > e->whole_h)
			return -1;
		if (i < GAL_SHEETS && (e->w != GAL_SHEET_W || e->h != GAL_SHEET_H || e->fmt != 1))
			return -1;
	}
	return 0;
}

/* entry e's pixels into texture t (its top-left w x h), A R G B; 0 = done. Format 1: u16 r << 10 | g << 5 | b, each
 * channel << 3 as the PS2's GS takes 5 bits; format 2: its colours, then a byte a pixel. On the load thread: the
 * texture is not drawn meanwhile, the render thread flushes the GPU's caches before it is (xsdk_gpu_invalidate). */
static int gal_unpack(const struct gal_entry *e, XsdkTexture *t)
{
	const size_t n = e->fmt == 1 ? (size_t)e->w * e->h * 2 : (size_t)e->ncol * 4 + (size_t)e->w * e->h;
	unsigned char *raw = malloc(n);
	z_stream st;
	unsigned x, y;
	int r;

	if (!raw)
		return -1;
	memset(&st, 0, sizeof(st));
	st.next_in = gal_dat + e->off;
	st.avail_in = e->zlen;
	st.next_out = raw;
	st.avail_out = (unsigned)n;
	if (inflateInit(&st) != Z_OK) {
		free(raw);
		return -1;
	}
	r = inflate(&st, Z_FINISH);
	inflateEnd(&st);
	if (r != Z_STREAM_END || st.avail_out) {
		free(raw);
		return -1;
	}
	for (y = 0; y < e->h; y++) {
		volatile uint32_t *row = t->texels + (size_t)y * t->pitch;
		if (e->fmt == 1) {
			const unsigned char *p = raw + (size_t)y * e->w * 2;
			for (x = 0; x < e->w; x++, p += 2) {
				const unsigned v = (unsigned)p[0] << 8 | p[1];
				row[x] = 0xFF000000u | ((v >> 10) & 31) << 19 | ((v >> 5) & 31) << 11 | (v & 31) << 3;
			}
		} else {
			const unsigned char *p = raw + (size_t)e->ncol * 4 + (size_t)y * e->w;
			for (x = 0; x < e->w; x++) {
				const unsigned char *c = raw + (size_t)p[x] * 4;
				row[x] = (uint32_t)c[0] << 24 | (uint32_t)c[1] << 16 | (uint32_t)c[2] << 8 | c[3];
			}
		}
	}
	free(raw);
	__sync_synchronize();
	return 0;
}

/* the gallery's file (its sheets unpacked), then the music's; then the pictures asked for, one at a time, each into the
 * picture texture not on screen once its last frame has been shown (SLOTS frames of vertices, two of presenting) */
static uint32_t load_task(void *u)
{
	uint64_t t0 = tb_read();
	unsigned n, hz = 0, s;
	unsigned char *m;

	(void)u;
	while (!gal_textures)
		xsdk_thread_sleep(5);
	gal_dat = gal_read(&gal_bytes);
	if (!gal_dat || gal_parse()) {
		log_printf(C_RED, "GALLERY: %s %s (NO GALLERY)", GAL_FILE, gal_dat ? "IS NOT THE GALLERY'S" : "IS NOT THERE");
		gal_ready = -1;
	} else {
		for (s = 0; s < GAL_SHEETS && !gal_unpack(&gal_e[s], &t_sheet[s]); s++)
			;
		if (s < GAL_SHEETS) {
			log_printf(C_RED, "GALLERY: %s'S SHEET %u DID NOT UNPACK (NO GALLERY)", GAL_FILE, s);
			gal_ready = -1;
		} else {
			log_printf(C_WHITE, "GALLERY: %s READ, %u BYTES, %u SHEETS + %u PICTURES, IN %u MS", GAL_FILE, gal_bytes,
			           GAL_SHEETS, GAL_PICS, tb_us(t0, tb_read()) / 1000);
			gal_ready = 1;
		}
	}
	t0 = tb_read();
	m = gal_ready > 0 ? music_unpack(&n) : NULL; /* test 97: no gallery, no need of its music */
	if (m)
		hz = (unsigned)lsound_music_set(m, n);
	if (gal_ready <= 0) {
		log_printf(C_WHITE, "GALLERY: %s LEFT PACKED (NO GALLERY)", MUSIC_FILE);
	} else if (!m) {
		log_printf(C_RED, "GALLERY: %s DID NOT UNPACK (THE GALLERY WITHOUT MUSIC)", MUSIC_FILE);
	} else if (!hz) {
		log_printf(C_RED, "GALLERY: %s HAS NO MP3 FRAME (THE GALLERY WITHOUT MUSIC)", MUSIC_FILE);
		free(m);
	} else { /* test 97: the log line kept, the file's read now the .xex's unpack */
		log_printf(C_WHITE, "GALLERY: %s UNPACKED, %u BYTES (%u ZLIB'D, %u KBPS), %u HZ, IN %u MS", MUSIC_FILE, n,
		           (unsigned)GALLERY_MP3_Z_BYTES, (unsigned)GALLERY_MP3_KBPS, hz, tb_us(t0, tb_read()) / 1000);
	}
	music_ready = hz ? 1 : -1;
	while (gal_ready > 0) {
		const unsigned req = pic_req;
		if (req != pic_done) {
			const int k = pic_req_slot, pn = pic_req_n;
			__sync_synchronize();
			while ((int)(frame - slot_used[k]) < SLOTS)
				xsdk_thread_sleep(1);
			t0 = tb_read();
			if (gal_unpack(&gal_e[GAL_SHEETS + pn], &t_pic[k]))
				log_printf(C_RED, "GALLERY: PICTURE %d DID NOT UNPACK", pn + 1);
			pic_ms = tb_us(t0, tb_read()) / 1000;
			__sync_synchronize();
			pic_done = req;
		}
		xsdk_thread_sleep(1);
	}
	return 0;
}

static uint32_t fb_w, fb_h;

static int video_init(void)
{
	static const XsdkSampler point = {.mag_filter = XSDK_FILTER_POINT, .min_filter = XSDK_FILTER_POINT,
	                                  .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                  .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkSampler linear = {.mag_filter = XSDK_FILTER_LINEAR, .min_filter = XSDK_FILTER_LINEAR,
	                                   .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                   .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkBlend alpha = {.color_source = XSDK_BLEND_SRC_ALPHA, .color_dest = XSDK_BLEND_ONE_MINUS_SRC_ALPHA,
	                                .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ONE,
	                                .alpha_dest = XSDK_BLEND_ONE_MINUS_SRC_ALPHA, .alpha_op = XSDK_BLEND_OP_ADD,
	                                .write_mask = XSDK_WRITE_ALL};
	VIDEO_MODE vmode;
	NTSTATUS st;
	int i;
	unsigned x, y; /* test 93: the ticker's texels */

	st = xsdk_gpu_open();
	if (!NT_SUCCESS(st)) {
		log_printf(C_RED, "VIDEO: XSDK_GPU_OPEN FAILED %08X", (unsigned)st);
		return -1;
	}
	st = xsdk_shader_load(&vs, card_vert.container, card_vert.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_load(&ps, card_frag.container, card_frag.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_set_vertex_layout(&vs, layout, sizeof(layout) / sizeof(layout[0]),
		                                   (const uint32_t[]){LV_F * 4});
	if (!NT_SUCCESS(st)) {
		log_printf(C_RED, "VIDEO: THE SHADERS DID NOT LOAD: %08X", (unsigned)st);
		return -1;
	}
	xsdk_texture_sampler_state(&s_point, &point);
	xsdk_texture_sampler_state(&s_linear, &linear);
	xsdk_gpu_blend_state(&b_alpha, &alpha);
	/* test 97: the PS2 port's pictures from ps2data.bin; without it (or any of them) the plain screen, the atlas with
	 * only Kuro BL's logo, the white and ibara's 8 x 8 font in the PS2 font's cells */
	ps2 = 0;
	if (!ps2data_open()) {
		if (ps2_tex(&t_title, PS2N_TITLE, LA_BG_W, LA_BG_H) || ps2_tex(&t_mode, PS2N_MODE, LA_BG_W, LA_BG_H) ||
		    ps2_tex(&t_atlas, PS2N_ATLAS, LA_ATLAS_W, LA_ATLAS_H))
			snprintf(plain_why, sizeof(plain_why), "PS2DATA.BIN IS DAMAGED (ITS PICTURES)");
		else
			ps2 = 1;
	} else {
		snprintf(plain_why, sizeof(plain_why), "%s", ps2data_why());
	}
	if (!ps2) {
		if ((!t_title.texels && make_tex(&t_title, NULL, 8, 8)) || (!t_mode.texels && make_tex(&t_mode, NULL, 8, 8)) ||
		    (!t_atlas.texels && make_tex(&t_atlas, NULL, LA_ATLAS_W, LA_ATLAS_H))) {
			log_printf(C_RED, "VIDEO: NO MEMORY FOR THE PICTURES");
			return -1;
		}
		put_px(&t_atlas, NULL, 0, 0, LA_ATLAS_W, LA_ATLAS_H);
		for (i = 0; i < 96; i++) /* ibara's 8 x 8 glyphs, 4 rows down in the 8 x 16 cells */
			put_px(&t_atlas, la_font8[i], la_sprites[LS_FONT].x + (i % 32) * LA_FONT_CW,
			       la_sprites[LS_FONT].y + (i / 32) * LA_FONT_CH + 4, 8, 8);
		log_printf(C_RED, "LAUNCHER: THE PLAIN SCREEN (%s)", plain_why);
	}
	{
		const struct la_rect *lb = &la_sprites[LS_LOGO_BLK], *wh = &la_sprites[LS_WHITE];
		if (unpack_into(&t_atlas, la_logo_blk_z, la_logo_blk_z_size, lb->x, lb->y, lb->w, lb->h))
			log_printf(C_RED, "VIDEO: KURO BL'S LOGO DID NOT UNPACK");
		for (y = 0; y < (unsigned)wh->h; y++)
			for (x = 0; x < (unsigned)wh->w; x++)
				t_atlas.texels[(size_t)(wh->y + y) * t_atlas.pitch + wh->x + x] = 0xFFFFFFFFu;
	}
	xsdk_gpu_invalidate(t_title.address, t_title.size_bytes);
	xsdk_gpu_invalidate(t_mode.address, t_mode.size_bytes);
	xsdk_gpu_invalidate(t_atlas.address, t_atlas.size_bytes);
	if (ps2) { /* backlog 2e: TATE's pictures (none on the plain screen: no TATE there) */
		const uint64_t t0 = tb_read();
		title_v_ok = !ps2_tex(&t_title_v, PS2N_TITLE_V, LA_TV_W, LA_TV_H);
		mode_v_ok = !tate_art_unpack(&t_mode_v);
		if (title_v_ok)
			xsdk_gpu_invalidate(t_title_v.address, t_title_v.size_bytes);
		if (mode_v_ok)
			xsdk_gpu_invalidate(t_mode_v.address, t_mode_v.size_bytes);
		log_printf(mode_v_ok ? C_WHITE : C_RED, "LAUNCHER: TATE (LB / RB): %s, %s, IN %u MS",
		           title_v_ok ? "ITS TITLE FROM PS2DATA.BIN" : "NO TATE TITLE IN PS2DATA.BIN (AN OLDER PS2EXTRACT: THE "
		                                                       "WIDE ONE)",
		           mode_v_ok ? "ITS MODE SELECT PAINTING UNPACKED" : "ITS MODE SELECT PAINTING DID NOT UNPACK (NO TATE)",
		           tb_us(t0, tb_read()) / 1000);
	}
	for (i = 0; i < LSND_COUNT; i++) { /* test 97: the sounds (ps2data.bin's); none: silent */
		char name[32];
		uint32_t n = 0;
		snprintf(name, sizeof(name), PS2N_SND "%s", la_sound_names[i]);
		la_sounds[i].pcm = ps2 ? ps2data_load(name, &n) : NULL;
		la_sounds[i].n = la_sounds[i].pcm ? n / 2 : 0;
	}
	if (ps2 && !ps2data_games_init() && NT_SUCCESS(xsdk_texture_create(&t_tick, XSDK_FORMAT_A8R8G8B8, TICKER_W,
	                                                                     TICKER_BAND_H + TICKER_TEXT_H, 1, false))) {
		for (y = 0; y < TICKER_BAND_H + TICKER_TEXT_H; y++) /* test 93 */
			for (x = 0; x < TICKER_W; x++)
				t_tick.texels[(size_t)y * t_tick.pitch + x] = y < TICKER_BAND_H ? ticker_band[y * TICKER_W + x] :
				                                               ticker_text[(y - TICKER_BAND_H) * TICKER_W + x];
		xsdk_gpu_invalidate(t_tick.address, t_tick.size_bytes);
		tick_ok = 1;
	}
	for (i = 0; i < GAL_SHEETS; i++)
		if (!NT_SUCCESS(xsdk_texture_create(&t_sheet[i], XSDK_FORMAT_A8R8G8B8, GAL_SHEET_W, GAL_SHEET_H, 1, false)))
			break;
	if (i < GAL_SHEETS || !NT_SUCCESS(xsdk_texture_create(&t_pic[0], XSDK_FORMAT_A8R8G8B8, GAL_PIC_W, GAL_PIC_W, 1, false)) ||
	    !NT_SUCCESS(xsdk_texture_create(&t_pic[1], XSDK_FORMAT_A8R8G8B8, GAL_PIC_W, GAL_PIC_W, 1, false))) {
		log_printf(C_RED, "VIDEO: NO MEMORY FOR THE GALLERY'S TEXTURES");
		return -1;
	}
	__sync_synchronize();
	gal_textures = 1;
	vmem = xsdk_gpu_alloc(SLOTS * LQ_MAX * 6 * LV_F * 4);
	if (!vmem) {
		log_printf(C_RED, "VIDEO: NO MEMORY FOR THE QUADS");
		return -1;
	}
	st = xsdk_present_open(XSDK_DISPLAY_720P, 2, 1, &fb_w, &fb_h);
	if (!NT_SUCCESS(st)) {
		log_printf(C_RED, "VIDEO: XSDK_PRESENT_OPEN FAILED %08X", (unsigned)st);
		return -1;
	}
	memset(&vmode, 0, sizeof(vmode));
	VdQueryVideoMode(&vmode);
	wide = vmode.is_widescreen != 0;
	canvas_w = wide ? 1280 : 960;
	log_printf(C_GREEN, "DISPLAY: OUTPUT %uX%u%s, %s (CONSOLE), FRONT BUFFER %uX%u", (unsigned)vmode.display_width,
	           (unsigned)vmode.display_height, vmode.is_interlaced ? "I" : "P", wide ? "16:9" : "4:3", (unsigned)fb_w,
	           (unsigned)fb_h);
	return 0;
}

/* the frame's quads to the GPU, batch by batch, then shown */
static void present(void)
{
	volatile uint32_t *dst = vmem + (size_t)(frame % SLOTS) * LQ_MAX * 6 * LV_F;
	const uint32_t *src = (const uint32_t *)qv;
	const unsigned words = (unsigned)nq * 6 * LV_F;
	uint32_t address, base;
	unsigned i;
	int k;

	for (i = 0; i < words; i++)
		dst[i] = src[i];
	base = xsdk_gpu_address(dst);
	xsdk_gpu_invalidate(base, words * 4);
	if (NT_SUCCESS(xsdk_present_begin(&address, 200))) {
		xsdk_gpu_set_target(fb_w, fb_h);
		xsdk_gpu_set_shaders(&vs, &ps);
		xsdk_built_shader_set_literals(&card_vert);
		xsdk_built_shader_set_literals(&card_frag);
		xsdk_gpu_set_blend(&b_alpha);
		for (k = 0; k < nb; k++) {
			if (!bt[k].n)
				continue;
			if (bt[k].t == &t_pic[0] || bt[k].t == &t_pic[1])
				slot_used[bt[k].t == &t_pic[1]] = frame;
			xsdk_gpu_set_texture(CARD_FRAG_SAMPLER_0_0, bt[k].t, bt[k].lin ? &s_linear : &s_point);
			xsdk_gpu_set_vertices(0, base + (uint32_t)bt[k].first * 6 * LV_F * 4, (uint32_t)bt[k].n * 6 * LV_F * 4);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, (uint32_t)bt[k].n * 6);
		}
		xsdk_gpu_resolve(address, fb_w, fb_h, 0xFF000000u);
		xsdk_present_end();
	}
	frame = frame + 1;
	nq = nb = 0;
}

/* ---- the pads ------------------------------------------------------------------------------------------------------- */

enum {
	K_UP = 1, K_DOWN = 2, K_A = 4, K_B = 8, K_START = 16, K_BACK = 32,
	K_LEFT = 64, K_RIGHT = 128, K_LB = 256, K_RB = 512, K_Y = 1024 /* test 75: the gallery's */
};
static unsigned pad_prev[NPADS];
static int pad_on[NPADS];
static unsigned pad_held; /* test 75: any pad's buttons now */

/* the presses on any pad since the last frame */
static unsigned pads_press(void)
{
	unsigned press = 0, held = 0;
	int p;

	for (p = 0; p < NPADS; p++) {
		INPUT_STATE s;
		unsigned w = 0;
		memset(&s, 0, sizeof(s));
		if (XamInputGetState((uint32_t)p, 0, &s) == ERROR_SUCCESS) {
			const unsigned b = s.gamepad.buttons;
			if (!pad_on[p])
				log_printf(C_YELLOW, "PAD %d CONNECTED", p);
			pad_on[p] = 1;
			if ((b & INPUT_GAMEPAD_DPAD_UP) || s.gamepad.thumb_ly > STICK_DEAD)
				w |= K_UP;
			if ((b & INPUT_GAMEPAD_DPAD_DOWN) || s.gamepad.thumb_ly < -STICK_DEAD)
				w |= K_DOWN;
			if ((b & INPUT_GAMEPAD_DPAD_LEFT) || s.gamepad.thumb_lx < -STICK_DEAD)
				w |= K_LEFT;
			if ((b & INPUT_GAMEPAD_DPAD_RIGHT) || s.gamepad.thumb_lx > STICK_DEAD)
				w |= K_RIGHT;
			if (b & INPUT_GAMEPAD_A)
				w |= K_A;
			if (b & INPUT_GAMEPAD_B)
				w |= K_B;
			if (b & INPUT_GAMEPAD_Y)
				w |= K_Y;
			if (b & INPUT_GAMEPAD_LEFT_SHOULDER)
				w |= K_LB;
			if (b & INPUT_GAMEPAD_RIGHT_SHOULDER)
				w |= K_RB;
			if (b & INPUT_GAMEPAD_START)
				w |= K_START;
			if (b & INPUT_GAMEPAD_BACK)
				w |= K_BACK;
		} else if (pad_on[p]) {
			pad_on[p] = 0;
			log_printf(C_YELLOW, "PAD %d DISCONNECTED", p);
		}
		press |= w & ~pad_prev[p];
		held |= w;
		pad_prev[p] = w;
	}
	pad_held = held;
	return press;
}

/* test 75: the PS2 port's repeat on the directions (FUN_0010ddf0, its delays FUN_0010e140): on the press, 17 frames
 * later, then every 5 */
static unsigned pads_repeat(unsigned press)
{
	static const unsigned keys[4] = {K_UP, K_DOWN, K_LEFT, K_RIGHT};
	static unsigned held_t[4];
	unsigned out = 0;
	int i;

	for (i = 0; i < 4; i++) {
		if (press & keys[i]) {
			held_t[i] = 0;
			out |= keys[i];
		} else if (pad_held & keys[i]) {
			held_t[i]++;
			if (held_t[i] >= 17 && (held_t[i] - 17) % 5 == 0)
				out |= keys[i];
		}
	}
	return out;
}

/* ---- the screens ------------------------------------------------------------------------------------------------- */

enum {
	ST_TITLE, ST_MODE, ST_GO, ST_EXIT, ST_FAIL,
	/* test 75, the gallery: the loading gate, its fade in, the thumbnails, a picture loading, a picture, the 2 frames
	 * between (FUN_001cef60's states 1, 3, 4, 5, 6), its fade out (2) */
	ST_GAL_ENTER, ST_GAL_IN, ST_GAL_GRID, ST_GAL_LOAD, ST_GAL_VIEW, ST_GAL_HAND, ST_GAL_OUT
};
/* test 77: ARRANGE MODE (ibaraarr.xex, LAUNCH_ARRANGE) after the two games, the PS2 mode select's plate */
enum { IT_IBARA, IT_BLK, IT_ARR, IT_GALLERY, IT_EXIT, IT_N };
static const char *const it_names[IT_N] = {"IBARA", "IBARA KURO BLACK LABEL", "ARRANGE MODE", "GALLERY", "EXIT"};
static int state, state_t, sel;
static int have[LAUNCH_GAMES];        /* each game's .xex beside this one */
static struct launch_data launch_in;  /* how this title was started */

#define FADE_IN 20     /* frames from black */
#define GO_FRAMES 54   /* NOW LOADING and black: DECIDE's 0.85 s */
#define EXIT_FRAMES 24
#define K_PLATE 2.0f   /* the PS2's plates and signs, x2 (its 640 x 448 at 960 x 720 is x1.5 / x1.6: a little larger) */

static void go(int s)
{
	state = s;
	state_t = 0;
}

/* an item there to be chosen (a game's .xex beside this one; the gallery's file) */
static int item_ok(int i)
{
	return (unsigned)i < LAUNCH_GAMES ? have[i] : i == IT_GALLERY ? gal_ready >= 0 : 1;
}

/* the left column: x of the plates' left edge, the items' tops (test 77: five, 106 apart from 150, the last ending
 * at 674 above the button line) */
#define COL_W 320.0f
static float item_y(int i)
{
	return rot ? 152.0f + 81.0f * (float)i : 150.0f + 106.0f * (float)i; /* backlog 2e: TATE's, 75-high plates */
}

/* backlog 2e: the plates' size: x 1.5 in TATE (273 wide of the 720: D. Teresa's face, in the painting's middle, left
 * clear), else K_PLATE */
static float kp(void)
{
	return rot ? 1.5f : K_PLATE;
}

/* backlog 2e: the TATE title: the flyer art (640 x 896) across the 720 width (x 1.125, 1008 tall); 16:9 (1280 tall):
 * in the middle, the lattice above and below (136 each, the © line and PRESS START BUTTON in the upper band); 4:3 (960
 * tall): its foot on the bottom, 48 of its sky's top off. An older ps2data.bin (no la.title_v): the landscape title
 * across the width (720 x 540) in the middle of the lattice. */
static void draw_title_tate(void)
{
	const char *press = "PRESS START BUTTON", *ver = "IBARA360 " XEX_VERSION;
	const float h = dh();

	if (title_v_ok) {
		const float ph = LA_TV_H * (720.0f / LA_TV_W), y = wide ? (h - ph) / 2 : h - ph;
		if (y > 0) {
			lattice(0, 0, 720, y, 2, rgba(0.55f, 0.55f, 0.55f, 1));
			lattice(0, y + ph, 720, h, 2, rgba(0.55f, 0.55f, 0.55f, 1));
		}
		use(&t_title_v, 1);
		quad(0, y, 720, y + ph, 0, 0, 1, 1, WHITE);
		if (y > 0) { /* the picture's edges, as MODE SELECT's in 16:9 */
			box(0, y, 720, 6, rgba(0, 0, 0, 0.45f));
			box(0, y + ph - 6, 720, 6, rgba(0, 0, 0, 0.45f));
		}
	} else {
		lattice(0, 0, 720, h, 2, rgba(0.55f, 0.55f, 0.55f, 1));
		use(&t_title, 1);
		quad(0, (h - 540) / 2, 720, (h + 540) / 2, 0, 0, 1, 1, WHITE);
	}
	/* PRESS START BUTTON: in the upper band (16:9, or over the lattice without la.title_v); 4:3 has no band and the
	 * rose's white under row 64: under the logo band, over the giant's dark body */
	if (state_t % 60 < 40)
		text(360 - text_w(press, 2) / 2, wide || !title_v_ok ? 64 : 520, press, 2, WHITE);
	text(12, 12, "@2005-2006-2026 CAVE Interactive CO.,LTD.", 1.5f, WHITE);
	text(720 - text_w(ver, 1) - 12, h - 20, ver, 1, GREY);
}

static void draw_title(void)
{
	const float x = wide ? 160 : 0;
	const char *press = "PRESS START BUTTON";

	if (rot) {
		draw_title_tate();
		return;
	}
	if (wide) {
		lattice(0, 0, 160, 720, 2, rgba(0.55f, 0.55f, 0.55f, 1));
		lattice(1120, 0, 1280, 720, 2, rgba(0.55f, 0.55f, 0.55f, 1));
	}
	background(&t_title, x, WHITE);
	if (state_t % 60 < 40) /* on 40 frames, off 20 */
		text(x + 480 - text_w(press, 2) / 2, 64, press, 2, WHITE);
	/* test 76 (user: "add an appropriately sized ©2005-2006-2026 CAVE Interactive CO.,LTD. in the lower left corner";
	 * there 1.5x ran into the logo's 鋳, so "move it to the upper left corner"): the PS2 font has its © in '@''s cell
	 * (file 887); 1.5x, above PRESS START BUTTON */
	text(12, 12, "@2005-2006-2026 CAVE Interactive CO.,LTD.", 1.5f, WHITE);
	text(canvas_w - text_w("IBARA360 " XEX_VERSION, 1) - 12, 700, "IBARA360 " XEX_VERSION, 1, GREY);
}

/* an item's plate: the PS2's blank sign with the game's logo on its face (a soft shadow under it, the metal being
 * light), or its EXIT / GALLERY plate; the chosen one bright and further right, with the rose before it */
static void draw_item(int i, int chosen)
{
	const struct la_rect *sg = &la_sprites[LS_SIGN];
	const float K = kp(), dx = chosen ? 9 * K : 0, x = 40 + dx, y = item_y(i);
	const col_t c = chosen ? WHITE : rgba(0.5f, 0.48f, 0.5f, 1);
	const float dim = item_ok(i) ? 1.0f : 0.5f;

	if (i == IT_EXIT || i == IT_GALLERY || i == IT_ARR) {
		const int id = i == IT_EXIT ? LS_EXIT : i == IT_GALLERY ? LS_G_PLATE : LS_A_PLATE;
		spr(id, x + (sg->w - la_sprites[id].w) * K / 2, y + 2, K, rgba(c.r * dim, c.g * dim, c.b * dim, 1));
	} else {
		/* the sign's face (right of its bent strip): 26 .. 178 x 4 .. 46 of its 182 x 50 */
		const int id = i == IT_IBARA ? LS_LOGO_IB : LS_LOGO_BLK;
		const struct la_rect *lg = &la_sprites[id];
		const float fw = 148 * K, fh = 40 * K;
		const float k = fw / lg->w < fh / lg->h ? fw / lg->w : fh / lg->h;
		const float lx = x + 27 * K + (fw - lg->w * k) / 2, ly = y + 5 * K + (fh - lg->h * k) / 2;
		spr(LS_SIGN, x, y, K, c);
		spr(id, lx + 3, ly + 3, k, rgba(0, 0, 0, 0.6f));
		spr(id, lx, ly, k, rgba(c.r * dim, c.g * dim, c.b * dim, 1));
	}
	if (chosen)
		spr(LS_ROSE, 4, y + (sg->h * K - la_sprites[LS_ROSE].h * K) / 2, K, WHITE);
}

/* the leaf frame at the bottom right, what the chosen item is. Test 75 (user 2026-10-26): a game by its name with the
 * Japanese one, then its ROM's date (the PS2 disc's 26 x 26 font; Kuro BL's name over two lines, the frame being 428
 * pixels inside); the gallery by the PS2 mode select's own words for it (file 945's picture) */
static void draw_about(void)
{
	static const char *const game_lines[2][3] = {
		{"Ibara (鋳薔薇)", "2005/03/22 MASTER VER..", NULL},
		{"Ibara Kuro: Black Label", "(鋳薔薇黒 ブラックレーベル)", "2006/02/06. MASTER VER."},
	};
	static const int name_lines[2] = {1, 2};
	/* test 101: file 945's words ("a mode with various arrangements for the PlayStation 2", "the illustrations and
	 * pictures used in Ibara can be browsed"), 24 letters a line at most (384 of the frame's 428 pixels) */
	static const char *const arr_lines[3] = {"A mode with a variety of", "arrangements, made for", "the PlayStation 2."};
	static const char *const gal_lines[3] = {"Browse the illustrations", "and pictures used in", "Ibara."};
	const struct la_rect *fr = &la_sprites[LS_FRAME];
	const float k = 2, fx = dw() - fr->w * k - 24, fy = dh() - fr->h * k - 22, tx = fx + 26, ty = fy + 20; /* 2e: TATE's */
	char t[48];
	int i;

	spr(LS_FRAME, fx, fy, k, WHITE);
	if (sel == IT_IBARA || sel == IT_BLK) {
		for (i = 0; i < 3 && game_lines[sel][i]; i++)
			jtext(tx, ty + 34 * (float)i, game_lines[sel][i], 1, i < name_lines[sel] ? YELLOW : WHITE);
	} else if (sel == IT_GALLERY) { /* test 101 (user: the PS2's Japanese words in English, the user's approved text) */
		for (i = 0; i < 3; i++)
			jtext(tx, ty + 34 * (float)i, gal_lines[i], 1, WHITE);
	} else if (sel == IT_ARR) { /* test 77: the PS2 mode select's words for ARRANGE MODE (file 945); test 101: English */
		for (i = 0; i < 3; i++)
			jtext(tx, ty + 34 * (float)i, arr_lines[i], 1, WHITE);
		/* test 79 (user: "add a release date ... at the bottom of the japanese description"): as the games' dates, on
		 * the row the lines below take when it cannot start */
		if (item_ok(sel) && state != ST_FAIL)
			jtext(tx, ty + 102, "2006/02/23", 1, WHITE);
	} else {
		text(tx, ty, "EXIT", 2, YELLOW);
		text(tx, ty + 68, "BACK TO THE DASHBOARD", 2, WHITE);
	}
	if (!item_ok(sel)) {
		snprintf(t, sizeof(t), "NO %s HERE", sel == IT_IBARA ? "IBARA.XEX" : sel == IT_BLK ? "IBARABLK.XEX" : sel == IT_ARR ? "IBARAARR.XEX" :
		         "GALLERY"); /* test 97: ps2data.bin's (was gallery.dat) */
		text(tx, ty + 102, t, 2, RED);
	} else if (state == ST_FAIL) {
		text(tx, ty + 102, "IT DID NOT START", 2, RED);
	} /* test 76: no "A = EXIT" under EXIT (user) */
}

/* backlog 2e: TATE's MODE SELECT painting (720 x 994) across the width: 16:9 (1280 tall) in the middle, the lattice
 * above and below (143 each: the header in the upper band, the leaf frame over the lower one); 4:3 (960 tall) 17 off
 * its top and its foot */
static void draw_mode_art_tate(void)
{
	const float h = dh(), y = (h - LA_TATE_H) / 2;

	if (y > 0) {
		lattice(0, 0, 720, y, 2, rgba(0.5f, 0.5f, 0.5f, 1));
		lattice(0, y + LA_TATE_H, 720, h, 2, rgba(0.5f, 0.5f, 0.5f, 1));
	}
	use(&t_mode_v, 1);
	quad(0, y, 720, y + LA_TATE_H, 0, 0, 1, 1, WHITE);
	if (y > 0) { /* the painting's edges */
		box(0, y, 720, 6, rgba(0, 0, 0, 0.45f));
		box(0, y + LA_TATE_H - 6, 720, 6, rgba(0, 0, 0, 0.45f));
	}
}

static void draw_mode(void)
{
	int i;

	if (rot) {
		draw_mode_art_tate();
	} else if (wide) {
		lattice(0, 0, COL_W, 720, 2, rgba(0.5f, 0.5f, 0.5f, 1));
		background(&t_mode, COL_W, WHITE);
		box(COL_W - 6, 0, 6, 720, rgba(0, 0, 0, 0.45f)); /* the painting's edge */
	} else { /* backlog 2d (user): 4:3 = the painting alone, full screen, the menu over it (the lattice column gone) */
		background(&t_mode, 0, WHITE);
	}
	spr(LS_HEADER, 0, 14, 2, WHITE);
	for (i = 0; i < IT_N; i++)
		draw_item(i, i == sel);
	draw_about();
	text(16, dh() - 30, "A SELECT  B BACK", 1.5f, GREY);
}

/* Test 97: the plain screen, without ps2data.bin (or with a damaged one): MODE SELECT's items in ibara's 8 x 8 font
 * (in the PS2 font's cells: text() as ever), the chosen one after a '>', and what to do about the file */
static void draw_plain(void)
{
	static const char *const help[] = {
		"THE PS2 PORT'S PICTURES, SOUNDS AND GALLERY COME FROM",
		"YOUR OWN IBARA PS2 DISC (SLPM-66301). ON A PC, DRAG",
		"ITS ISO ONTO PS2EXTRACT.EXE, THEN COPY PS2DATA.BIN",
		"(AND PS2MUSIC.BIN) BESIDE THESE XEX FILES.",
		"THE GAMES PLAY WITHOUT IT.",
	};
	const float x0 = wide ? 160 : 40;
	char t[64];
	int i;

	text(x0, 40, "IBARA360", 4, YELLOW);
	for (i = 0; i < IT_N; i++) {
		const int on = item_ok(i), chosen = i == sel;
		const col_t c = !on ? rgba(0.45f, 0.45f, 0.45f, 1) : chosen ? WHITE : GREY;
		snprintf(t, sizeof(t), "%s%s", it_names[i], on ? "" : i == IT_GALLERY ? "  (NEEDS PS2DATA.BIN)" : "  (NOT HERE)");
		if (chosen)
			text(x0, 150 + 52.0f * i, ">", 3, YELLOW);
		text(x0 + 40, 150 + 52.0f * i, t, 3, c);
	}
	if (state == ST_FAIL)
		text(x0 + 40, 150 + 52.0f * IT_N, "IT DID NOT START", 2, RED);
	text(x0, 470, plain_why, 2, RED);
	for (i = 0; i < (int)(sizeof(help) / sizeof(help[0])); i++)
		text(x0, 510 + 34.0f * i, help[i], 2, WHITE);
	text(16, 690, "A SELECT", 1.5f, GREY);
	text(canvas_w - text_w("IBARA360 " XEX_VERSION, 1) - 12, 700, "IBARA360 " XEX_VERSION, 1, GREY);
}

static void fade(float a)
{
	if (a > 0)
		box(0, 0, dw(), dh(), rgba(0, 0, 0, a > 1 ? 1 : a));
}

/* ---- test 75: the gallery ------------------------------------------------------------------------------------------- */

#define GAL_FADE 32           /* frames: its fade by 4 of 0x80 a frame, in and out */
#define GAL_PAN 3.0f          /* canvas pixels a frame (the PS2's 2 of its 640 x 448) */
#define TK_TITLE "Endress Train"
#define TK_ARTIST "A' & Namihei"
#define TK_ALBUM "THE LUNATIC: IBARA REMIX TRACKS (Aug 03, 2006)"

/* FUN_001cef60's: cursor 0-5 (column % 3, row / 3), page 0-12, the pulse's phase, the L1 / R1 nudges, zoom, pan, the
 * picture window; the picture on screen (its number, its texture), the one to load after the 2 frames between */
static int g_cur, g_page, g_phase, g_nudge_l, g_nudge_r, g_zoom, g_overlay, g_pic = -1, g_slot, g_next;
static float g_panx, g_pany, tk_a;
static unsigned g_tk_t, g_req_t, g_sheets_flushed;
/* test 91 (user's todo list: "when scrolling images with lb/rb, for a brief moment, the window helper from the previous
 * window flashes before the next image is displayed", the video: the page and its help 3 to 5 frames between two
 * pictures): LB / RB ask for the next picture at once (no ST_GAL_HAND) and the one on screen stays, its window too,
 * until the next is unpacked */
static int g_switch;

static int gal_viewing(void)
{
	return state == ST_GAL_VIEW || (state == ST_GAL_LOAD && g_switch);
}

/* the PS2's half sine (0x210430, 0..4096) >> 6 at its 64 phases: the chosen thumbnail's pulse */
static const unsigned char g_pulse[64] = {
	0,  3,  6,  9,  12, 15, 18, 21, 24, 27, 30, 32, 35, 38, 40, 42, 45, 47, 49, 51, 53, 54,
	56, 57, 59, 60, 61, 62, 62, 63, 63, 63, 64, 63, 63, 63, 62, 62, 61, 60, 59, 57, 56, 54,
	53, 51, 49, 47, 45, 42, 40, 38, 35, 32, 30, 27, 24, 21, 18, 15, 12, 9,  6,  3};

/* the PS2's 640 x 448 on the canvas: at the right of the column (16:9), the whole canvas (4:3) */
static float gx0(void)
{
	return wide ? COL_W : 0;
}

#define GSX 1.5f
#define GSY (720.0f / 448.0f)

/* a part of sprite id at the PS2's x, y, k times its size */
static void gsub(int id, float sx, float sy, float sw, float sh, float x, float y, float k, col_t c)
{
	sub(id, sx, sy, sw, sh, gx0() + x * GSX, y * GSY, sw * k * GSX, sh * k * GSY, c);
}

static void gspr(int id, float x, float y, float k, col_t c)
{
	gsub(id, 0, 0, la_sprites[id].w, la_sprites[id].h, x, y, k, c);
}

/* text in the numbers' italic 16 x 16 font (0x20-0x5F) at the PS2's x, y */
static void gnum(float x, float y, const char *s, col_t c)
{
	for (; *s; s++, x += 16) {
		const unsigned ch = (unsigned char)*s;
		if (ch > 0x20 && ch < 0x60)
			gsub(LS_G_NUM, (float)(ch & 15) * 16, (float)((ch >> 4) - 2) * 16, 16, 16, x, y, 1, c);
	}
}

/* test 101: text in the 8 x 16 font (LS_FONT, 0x21-0x7F) at the PS2's x, y: the gallery's guides in English */
static void gtext(float x, float y, const char *s, col_t c)
{
	for (; *s; s++, x += LA_FONT_CW) {
		const unsigned ch = (unsigned char)*s;
		if (ch > 0x20 && ch < 0x80)
			gsub(LS_FONT, (float)((ch - 0x20) % 32) * LA_FONT_CW, (float)((ch - 0x20) / 32) * LA_FONT_CH, LA_FONT_CW,
			     LA_FONT_CH, x, y, 1, c);
	}
}

/* the box (the table at 0x2A9560): file 949's corners and edges, its fill at 0x50 of 0x80 (G_BOX = its rows 64-255) */
static void gal_box(col_t c)
{
	static const short pieces[14][6] = {
		{0, 0, 16, 16, 32, 88},      {240, 0, 16, 16, 592, 88},    {0, 176, 16, 16, 32, 328},
		{240, 176, 16, 16, 592, 328}, {16, 0, 224, 16, 48, 88},     {16, 0, 224, 16, 272, 88},
		{16, 0, 96, 16, 496, 88},     {16, 176, 224, 16, 48, 328},  {16, 176, 224, 16, 272, 328},
		{16, 176, 96, 16, 496, 328},  {0, 16, 16, 160, 32, 104},    {0, 16, 16, 64, 32, 264},
		{240, 16, 16, 160, 592, 104}, {240, 16, 16, 64, 592, 264},
	};
	static const short fill[6][6] = {
		{16, 16, 224, 160, 48, 104}, {16, 16, 224, 160, 272, 104}, {16, 16, 96, 160, 496, 104},
		{16, 16, 224, 64, 48, 264},  {16, 16, 224, 64, 272, 264},  {16, 16, 96, 64, 496, 264},
	};
	const col_t m = rgba(c.r, c.g, c.b, c.a * (80.0f / 128));
	int i;

	for (i = 0; i < 14; i++)
		gsub(LS_G_BOX, pieces[i][0], pieces[i][1], pieces[i][2], pieces[i][3], pieces[i][4], pieces[i][5], 1, c);
	for (i = 0; i < 6; i++)
		gsub(LS_G_BOX, fill[i][0], fill[i][1], fill[i][2], fill[i][3], fill[i][4], fill[i][5], 1, m);
}

/* the picture on screen: the whole picture (896 or 512 square) round the screen's middle, as big as the PS2 shows it
 * (448 of its 448 lines, or 409.6) with square pixels, x2 or x2.25 zoomed (its 1.0 / 1.8), moved by the pan; its
 * opaque rectangle drawn, cut to the PS2's screen */
static float gal_scale(const struct gal_entry *e)
{
	const float fit = e->whole_w > 512 ? 720.0f / 896 : 720.0f * 409.6f / 448 / 512;
	return g_zoom ? fit * (e->whole_w > 512 ? 2.0f : 2.25f) : fit;
}

static void gal_pan_limits(const struct gal_entry *e, float *lx, float *ly)
{
	const float k = gal_scale(e);
	*lx = e->whole_w * k > 960 ? (e->whole_w * k - 960) / 2 : 0;
	*ly = e->whole_h * k > 720 ? (e->whole_h * k - 720) / 2 : 0;
}

static void gal_picture(void)
{
	const struct gal_entry *e = &gal_e[GAL_SHEETS + g_pic];
	const float k = gal_scale(e), cx = gx0() + 480 + (g_zoom ? g_panx : 0), cy = 360 + (g_zoom ? g_pany : 0);
	const float x = cx + ((float)e->x - e->whole_w / 2.0f) * k, y = cy + ((float)e->y - e->whole_h / 2.0f) * k;

	clip_x0 = gx0();
	clip_x1 = gx0() + 960;
	use(&t_pic[g_slot], 1);
	quad(x, y, x + e->w * k, y + e->h * k, 0, 0, (float)e->w / GAL_PIC_W, (float)e->h / GAL_PIC_W, WHITE);
	clip_x0 = 0;
	clip_x1 = 1e9f;
}

/* the track's box (user: "a small box ticker that lists the track's name, artist and album"): the PS2's window, the
 * name, the artist, then the album going round (the box being narrower: held 2 s at its start, then 1 pixel a
 * frame), in the 26 x 26 font of the games' names; in the column at the bottom (16:9), at the top right over the
 * painting (4:3), sliding in by tk_a (0..1) */
static void gal_ticker(float f)
{
	const float w = wide ? 296 : 400, h = 100, ix = 16, iw = w - 2 * ix, ks = 0.75f;
	const float x = wide ? 12 - (1 - tk_a) * (w + 24) : canvas_w - w - 12;
	const float y = wide ? 720 - h - 16 : 12 - (1 - tk_a) * (h + 24);
	const float aw = jtext_w(TK_ALBUM, ks), gap = 72, hold = 120;
	const col_t fc = rgba(f, f, f, 1), gc = rgba(GREY.r * f, GREY.g * f, GREY.b * f, 1);
	float off = 0;

	if (tk_a <= 0)
		return;
	if (aw > iw) {
		const unsigned cyc = (unsigned)(aw + gap) + (unsigned)hold, t = g_tk_t % cyc;
		off = t < hold ? 0 : (float)(t - hold);
	}
	nine(x, y, w, h, 1.5f, 1.5f, fc);
	jtext(x + ix, y + 12, TK_TITLE, 1, rgba(YELLOW.r * f, YELLOW.g * f, YELLOW.b * f, 1));
	jtext(x + ix, y + 44, TK_ARTIST, ks, fc);
	clip_x0 = x + ix;
	clip_x1 = x + ix + iw;
	jtext(x + ix - off, y + 68, TK_ALBUM, ks, gc);
	if (aw > iw)
		jtext(x + ix - off + aw + gap, y + 68, TK_ALBUM, ks, gc);
	clip_x0 = 0;
	clip_x1 = 1e9f;
}

/* the gallery's screen at fade f (0..1, the PS2's colour 0x00..0x80): the painting, the header, the box, the six
 * thumbnails with their numbers, the page counter and LB / RB; the help under the box, or the picture and its window */
static void draw_gallery(float f)
{
	const col_t fc = rgba(f, f, f, 1);
	const int view = gal_viewing(), sheet = g_page / 3; /* test 91: the picture stays while the next unpacks */
	char t[16];
	int i;

	if (wide)
		lattice(0, 0, COL_W, 720, 2, rgba(0.5f * f, 0.5f * f, 0.5f * f, 1));
	background(&t_mode, gx0(), fc);
	if (wide)
		box(COL_W - 6, 0, 6, 720, rgba(0, 0, 0, 0.45f * f));
	gspr(LS_G_HEAD, 16, 16, 1, fc);
	gal_box(fc);
	use(&t_sheet[sheet], 1);
	for (i = 0; i < 6; i++) {
		const int c = (g_page * 6 + i) % 18, chosen = i == g_cur && state >= ST_GAL_GRID && state <= ST_GAL_HAND;
		const float m = (chosen ? (0x60 + g_pulse[g_phase & 63]) : 0x30) / 128.0f * f;
		const float x = gx0() + (86 + 162 * (i % 3)) * GSX, y = (120 + 88 * (i / 3)) * GSY;
		quad(x, y, x + 140 * GSX, y + 72 * GSY, (float)(140 * (c % 3)) / GAL_SHEET_W, (float)(72 * (c / 3)) / GAL_SHEET_H,
		     (float)(140 * (c % 3) + 140) / GAL_SHEET_W, (float)(72 * (c / 3) + 72) / GAL_SHEET_H, rgba(m, m, m, 1));
	}
	for (i = 0; i < 6; i++) {
		const int chosen = i == g_cur;
		snprintf(t, sizeof(t), "%3d", g_page * 6 + i + 1);
		gnum(174 + 162 * (i % 3), 172 + 88 * (i / 3), t,
		     chosen ? rgba(0x20 / 128.0f * f, 0x80 / 128.0f * f, 0xB0 / 128.0f * f, 1)
		            : rgba(0, 0x38 / 128.0f * f, 0x40 / 128.0f * f, 1));
	}
	snprintf(t, sizeof(t), "%2d/13", g_page + 1);
	gnum(280, 296, t, fc);
	gnum(86 - (float)g_nudge_l, 296, "LB", fc);
	gnum(518 + (float)g_nudge_r, 296, "RB", fc);
	if (!view) {
		nine(gx0() + 80 * GSX, 360 * GSY, 480 * GSX, 72 * GSY, GSX, GSY, fc);
		/* test 101 (user: the button guide in English, "make it fit elegantly"): the PS2's two lines ("select with
		 * the d-pad, L1 and R1, view with O, end with X") each centred in the box (80 .. 560) */
		static const char *const help[2] = {"SELECT WITH THE D-PAD, LB AND RB,", "VIEW WITH A, EXIT WITH B."};
		for (i = 0; i < 2; i++)
			gtext(320 - 4 * (float)strlen(help[i]), 376 + 24 * (float)i, help[i], fc);
	} else {
		gal_picture();
		if (g_overlay) {
			/* the PS2's window; its button column (16-pixel icons at 248, L1 R1 at 240 / 256, the words at 288) to
			 * the right for ＬＢ ＲＢ's 70 pixels: the buttons end at 296, the words from 304 */
			nine(gx0() + 208 * GSX, 264 * GSY, 224 * GSX, 120 * GSY, GSX, GSY, WHITE);
			gspr(LS_G_KA, 280, 280, 1, WHITE);
			gtext(304, 280, "ZOOM IN / OUT", WHITE); /* test 101: English (the PS2's words, 15 letters at most) */
			gspr(LS_G_KB, 280, 304, 1, WHITE);
			gtext(304, 304, "CLOSE", WHITE);
			gspr(LS_G_KY, 280, 328, 1, WHITE);
			gtext(304, 328, "WINDOW ON/OFF", WHITE);
			gspr(LS_G_KLR, 296 - la_sprites[LS_G_KLR].w, 352, 1, WHITE);
			gtext(304, 352, "PREV / NEXT", WHITE);
		}
	}
	gal_ticker(f);
}

/* FUN_001cef60's state 0: page 1, picture 1, the pulse and nudges at 0; the sheets' GPU caches flushed once; the music */
static void gal_open(void)
{
	int s;

	g_cur = g_page = g_phase = g_nudge_l = g_nudge_r = g_zoom = 0;
	g_pic = -1;
	g_tk_t = 0;
	tk_a = 0;
	if (!g_sheets_flushed) {
		for (s = 0; s < GAL_SHEETS; s++)
			xsdk_gpu_invalidate(t_sheet[s].address, t_sheet[s].size_bytes);
		g_sheets_flushed = 1;
	}
	if (music_ready > 0)
		lsound_music_play();
	log_printf(C_WHITE, "GALLERY: OPEN, %s", music_ready > 0 ? "THE MUSIC FROM ITS START" : "NO MUSIC");
}

/* picture n asked of the load thread, into the texture not on screen */
static void gal_request(int n)
{
	const int s = g_pic < 0 ? 0 : g_slot ^ 1;

	pic_req_n = n;
	pic_req_slot = s;
	__sync_synchronize();
	pic_req = pic_req + 1;
	g_req_t = frame;
	go(ST_GAL_LOAD);
}

static void gal_step(unsigned press, unsigned rep)
{
	const int n = g_page * 6 + g_cur;

	switch (state) {
	case ST_GAL_ENTER: /* the PS2's loading gate: black over MODE SELECT, NOW LOADING until the sheets (and the music,
	                    * read after them) are in */
		if (gal_ready < 0) {
			go(ST_MODE);
		} else if (state_t >= GAL_FADE && gal_ready > 0 && music_ready) {
			gal_open();
			go(ST_GAL_IN);
		}
		break;
	case ST_GAL_IN:
		if (state_t >= GAL_FADE)
			go(ST_GAL_GRID);
		break;
	case ST_GAL_GRID:
		if (rep & K_LEFT) {
			if (g_cur % 3) {
				g_cur--;
			} else {
				g_cur += 2;
				g_page = (g_page + GAL_PAGES - 1) % GAL_PAGES;
				g_nudge_l = 8;
			}
			lsound_play(LSND_CURSOR);
		} else if (rep & K_RIGHT) {
			if (g_cur % 3 != 2) {
				g_cur++;
			} else {
				g_cur -= 2;
				g_page = (g_page + 1) % GAL_PAGES;
				g_nudge_r = 8;
			}
			lsound_play(LSND_CURSOR);
		} else if (rep & (K_UP | K_DOWN)) {
			g_cur = (g_cur + 3) % 6;
			lsound_play(LSND_CURSOR);
		} else if (press & (K_LB | K_RB)) {
			g_page = (g_page + (press & K_LB ? GAL_PAGES - 1 : 1)) % GAL_PAGES;
			if (press & K_LB)
				g_nudge_l = 8;
			else
				g_nudge_r = 8;
			lsound_play(LSND_CURSOR);
		} else if (press & (K_A | K_START)) {
			lsound_play(LSND_DECIDE);
			g_overlay = 1;
			g_phase = 0;
			gal_request(n);
		} else if (press & (K_B | K_BACK)) {
			lsound_play(LSND_CANCEL);
			lsound_music_stop();
			log_printf(C_WHITE, "GALLERY: CLOSED, THE MUSIC WENT ROUND %u TIMES", lsound_music_loops());
			go(ST_GAL_OUT);
		}
		break;
	case ST_GAL_LOAD:
		if (pic_done == pic_req) {
			xsdk_gpu_invalidate(t_pic[pic_req_slot].address, t_pic[pic_req_slot].size_bytes);
			g_slot = pic_req_slot;
			g_pic = pic_req_n;
			g_zoom = 0;
			g_panx = g_pany = 0;
			g_switch = 0;
			log_printf(C_WHITE, "GALLERY: PICTURE %d (PAGE %d) UNPACKED IN %u MS, SHOWN %u FRAMES AFTER", g_pic + 1,
			           g_pic / 6 + 1, pic_ms, frame - g_req_t);
			go(ST_GAL_VIEW);
		}
		break;
	case ST_GAL_VIEW: {
		const struct gal_entry *e = &gal_e[GAL_SHEETS + g_pic];
		float lx, ly;
		if (press & K_A) {
			g_zoom ^= 1;
			if (g_zoom)
				g_panx = g_pany = 0;
			lsound_play(LSND_DECIDE);
		} else if (press & (K_B | K_BACK)) {
			lsound_play(LSND_CANCEL);
			g_next = -1;
			go(ST_GAL_HAND);
		} else if (press & (K_LB | K_RB)) {
			const int m = (g_pic + (press & K_LB ? GAL_PICS - 1 : 1)) % GAL_PICS;
			g_page = m / 6;
			g_cur = m % 6;
			lsound_play(LSND_CURSOR);
			g_switch = 1; /* test 91: straight to the load, this picture on screen meanwhile */
			gal_request(m);
		} else if (press & K_Y) {
			g_overlay ^= 1;
		}
		if (g_zoom && state == ST_GAL_VIEW) { /* the d-pad moves the picture itself, held (no repeat) */
			gal_pan_limits(e, &lx, &ly);
			g_panx += (pad_held & K_RIGHT ? GAL_PAN : 0) - (pad_held & K_LEFT ? GAL_PAN : 0);
			g_pany += (pad_held & K_DOWN ? GAL_PAN : 0) - (pad_held & K_UP ? GAL_PAN : 0);
			g_panx = g_panx > lx ? lx : g_panx < -lx ? -lx : g_panx;
			g_pany = g_pany > ly ? ly : g_pany < -ly ? -ly : g_pany;
		}
		break;
	}
	case ST_GAL_HAND:
		if (state_t >= 2) {
			if (g_next >= 0)
				gal_request(g_next);
			else
				go(ST_GAL_GRID);
		}
		break;
	case ST_GAL_OUT:
		if (state_t >= GAL_FADE) {
			sel = IT_GALLERY;
			go(ST_MODE);
		}
		break;
	}
	if (state >= ST_GAL_IN) {
		g_phase++;
		g_tk_t++;
		if (g_nudge_l)
			g_nudge_l--;
		if (g_nudge_r)
			g_nudge_r--;
	}
	/* the track's box: in once the gallery is up, out over a picture in 4:3 (where it would cover it) */
	{
		const float target = state < ST_GAL_IN || (!wide && gal_viewing()) ? 0.0f : 1.0f;
		tk_a += tk_a < target ? 1.0f / 16 : tk_a > target ? -1.0f / 16 : 0;
		tk_a = tk_a < 0 ? 0 : tk_a > 1 ? 1 : tk_a;
	}
}

/* ---- the launch, the steps ----------------------------------------------------------------------------------------- */

static void launch(int g)
{
	struct launch_data d;

	memset(&d, 0, sizeof(d));
	d.magic = LAUNCH_MAGIC;
	d.version = LAUNCH_VERSION;
	d.by = LAUNCH_BY_LAUNCHER;
	d.game = (uint32_t)g;
	d.count = launch_in.count + 1;
	log_printf(C_YELLOW, "LAUNCHER: %s CHOSEN, THE SOUND OFF, THEN %s", it_names[g], launch_xex[g]);
	lsound_stop();
	launch_go(launch_xex[g], &d, log_out);
	/* the display is closed: back to the dashboard */
	log_printf(C_RED, "LAUNCHER: XAM DID NOT START %s, BACK TO THE DASHBOARD", launch_xex[g]);
	log_out(0);
	XamLoaderTerminateTitle();
}

/* backlog 2e: LB = TATE LEFT, RB = TATE RIGHT (the games' ROTATION names), the same one again = upright; on the title
 * and MODE SELECT with the PS2 pictures (the plain screen stays upright), LB first if both */
static void tate_turn(unsigned press)
{
	const int want = press & K_LB ? TT_LEFT : TT_RIGHT;

	if (!ps2 || !mode_v_ok)
		return;
	tate = tate == want ? TT_OFF : want;
	turn_t = 0;
	lsound_play(LSND_CURSOR);
	log_printf(C_WHITE, "LAUNCHER: %s (%s)", tate == TT_LEFT ? "TATE LEFT" : tate == TT_RIGHT ? "TATE RIGHT" : "UPRIGHT",
	           press & K_LB ? "LB" : "RB");
}

static void step(unsigned press)
{
	const unsigned rep = pads_repeat(press);

	state_t++;
	turn_t++;
	if ((press & (K_LB | K_RB)) && state <= ST_FAIL && state != ST_GO && state != ST_EXIT)
		tate_turn(press);
	switch (state) {
	case ST_TITLE:
		if (state_t == 1)
			lsound_play(LSND_V_IBARA); /* SLPM_663.01: the title's first frame, then 60 frames later */
		if (state_t == 61)
			lsound_play(LSND_V_KAKATTE);
		if (press & (K_START | K_A)) {
			lsound_play(LSND_COIN);
			log_printf(C_WHITE, "LAUNCHER: START ON THE TITLE");
			go(ST_MODE);
		}
		break;
	case ST_MODE:
	case ST_FAIL:
		if (press & (K_UP | K_DOWN)) {
			sel = (sel + IT_N + (press & K_UP ? -1 : 1)) % IT_N;
			lsound_play(LSND_CURSOR);
			if (state == ST_FAIL)
				go(ST_MODE);
		} else if (press & (K_A | K_START)) {
			if (sel == IT_EXIT) {
				lsound_play(LSND_CANCEL);
				log_printf(C_WHITE, "LAUNCHER: EXIT");
				go(ST_EXIT);
			} else if (!item_ok(sel)) {
				lsound_play(LSND_CANCEL);
				log_printf(C_RED, "LAUNCHER: %s IS NOT THERE", sel == IT_GALLERY ? GAL_FILE : launch_xex[sel]);
			} else if (sel == IT_GALLERY) {
				lsound_play(LSND_DECIDE);
				log_printf(C_WHITE, "LAUNCHER: GALLERY%s", gal_ready ? "" : " (ITS FILE STILL LOADING)");
				go(ST_GAL_ENTER);
			} else {
				lsound_play(LSND_DECIDE);
				log_printf(C_WHITE, "LAUNCHER: %s (%s)", it_names[sel], launch_xex[sel]);
				go(ST_GO);
			}
		} else if ((press & (K_B | K_BACK)) && ps2) { /* test 97: the plain screen stays */
			lsound_play(LSND_CANCEL);
			go(ST_TITLE);
		}
		break;
	case ST_GO:
		if (state_t >= GO_FRAMES && !lsound_busy())
			launch(sel);
		break;
	case ST_EXIT:
		if (state_t >= EXIT_FRAMES) {
			log_printf(C_WHITE, "LAUNCHER: BACK TO THE DASHBOARD");
			log_out(0);
			lsound_stop();
			exit(0); /* xsdk's _exit: the display and the GPU back to XAM, XamLoaderTerminateTitle */
		}
		break;
	default:
		gal_step(press, rep);
		break;
	}
}

/* Test 93 (user's todo list: "restore the now loading animation from the PS2 version" and "smooth it out between the
 * launcher and the rom loading"; work/g93/loading/REPORT.md): the PS2 port's ticker (FUN_0013be30) in its portrait
 * 240 x 320 game frame, here at the games' FULL picture (720 / 320, centred: where the game's own ticker goes on, at
 * full opacity after a launch): the rose band (rows 135-166) at X = 2c and 2c - 240, the text over it (rows 137-166)
 * at X = 240 - 2c and -2c, wrapping in the 240 columns; tick_c = the PS2's counter, (c + 1) % 120 each frame */
static unsigned tick_c;

static void tick_part(float sx, float sy, float sw, float sh, float dx, float dy, float k, float x0, float y0, col_t c)
{
	const float e = 0.25f, th = TICKER_BAND_H + TICKER_TEXT_H;

	if (sw <= 0)
		return;
	use(&t_tick, 0);
	quad(x0 + dx * k, y0 + dy * k, x0 + (dx + sw) * k, y0 + (dy + sh) * k, (sx + e) / TICKER_W, (sy + e) / th,
	     (sx + sw - e) / TICKER_W, (sy + sh - e) / th, c);
}

/* backlog 2e: in TATE the PS2's 240 x 320 frame stands upright, as the PS2 port's own TATE: x 3 across the 720 width,
 * in the middle of the height */
static void ticker(float a)
{
	const float k = rot ? 720.0f / 240 : 720.0f / 320, x0 = (dw() - TICKER_W * k) / 2, y0 = (dh() - 320 * k) / 2;
	const float c2 = (float)(2 * tick_c);
	const col_t c = rgba(1, 1, 1, a > 1 ? 1 : a);

	tick_c = (tick_c + 1) % 120;
	if (!tick_ok || a <= 0)
		return;
	tick_part(0, 0, TICKER_W - c2, TICKER_BAND_H, c2, TICKER_BAND_Y, k, x0, y0, c);          /* the band from 2c */
	tick_part(TICKER_W - c2, 0, c2, TICKER_BAND_H, 0, TICKER_BAND_Y, k, x0, y0, c);          /* its copy from 2c - 240 */
	tick_part(c2, TICKER_BAND_H, TICKER_W - c2, TICKER_TEXT_H, 0, TICKER_TEXT_Y, k, x0, y0, c); /* the text from -2c */
	tick_part(0, TICKER_BAND_H, c2, TICKER_TEXT_H, TICKER_W - c2, TICKER_TEXT_Y, k, x0, y0, c); /* from 240 - 2c */
}

static void draw_states(void);

static void draw(void)
{
	/* backlog 2e: TATE for the title and MODE SELECT (and their NOW LOADING, EXIT), never the gallery */
	rot = ps2 && state <= ST_FAIL ? tate : 0;
	draw_states();
	if (turn_t < FADE_IN / 2 && ps2 && state <= ST_FAIL) /* a turn: from black, as MODE SELECT comes in */
		fade(1.0f - (float)turn_t / (FADE_IN / 2));
	rot = 0;
}

static void draw_states(void)
{
	if (!ps2 && state <= ST_FAIL) { /* test 97: no PS2 pictures */
		draw_plain();
		fade(state == ST_GO ? (float)state_t / (GO_FRAMES - 14) : state == ST_EXIT ? (float)state_t / EXIT_FRAMES :
		     1.0f - (float)state_t / (FADE_IN / 2));
		return;
	}
	switch (state) {
	case ST_TITLE:
		draw_title();
		fade(1.0f - (float)state_t / FADE_IN);
		break;
	case ST_MODE:
	case ST_FAIL:
		draw_mode();
		fade(1.0f - (float)state_t / (FADE_IN / 2));
		break;
	case ST_GO: /* test 93: the ticker coming as the PS2's gate (+8 of 255 a frame), black under it */
		if (state_t == 0)
			tick_c = 0;
		draw_mode();
		fade((float)state_t / (GO_FRAMES - 14));
		ticker((state_t + 1) * 8 / 255.0f);
		break;
	case ST_EXIT:
		draw_mode();
		fade((float)state_t / EXIT_FRAMES);
		break;
	case ST_GAL_ENTER: { /* the PS2's gate: its black +8 of 255 a frame, NOW LOADING on it */
		const float a = (float)state_t / GAL_FADE;
		if (state_t == 0)
			tick_c = 0;
		rot = ps2 ? tate : 0; /* backlog 2e: MODE SELECT as it was, the gate's NOW LOADING upright as the gallery */
		draw_mode();
		fade(a);
		rot = 0;
		ticker((state_t + 1) * 8 / 255.0f); /* test 93 */
		break;
	}
	case ST_GAL_IN: { /* the gallery from black (+4 of 0x80 a frame), the gate's NOW LOADING going (-16 of 255) */
		draw_gallery((float)state_t / GAL_FADE);
		ticker(1.0f - (state_t + 1) * 8 / 255.0f); /* test 93: the PS2's net -8 a frame */
		break;
	}
	case ST_GAL_OUT:
		draw_gallery(1.0f - (float)state_t / GAL_FADE);
		break;
	default:
		draw_gallery(1);
		break;
	}
}

static uint32_t main_task(void *u)
{
	HANDLE h;
	int g;

	(void)u;
	if (NT_SUCCESS(xsdk_thread_create_on(&h, 64 * 1024, log_task, NULL, LOG_THREAD))) { /* test 91 */
		lq_thread = 1;
		NtClose(h);
	}
	log_printf(C_WHITE, "IBARA360 " XEX_VERSION " LAUNCHER XEX (THE PS2 PORT'S FRONT END: TITLE, MODE SELECT, GALLERY; "
	                    "IBARA.XEX, IBARABLK.XEX BY GAME:\\)");
	if (!lq_thread)
		log_printf(C_RED, "LOG: NO LOG THREAD (THE LINES WRITTEN ON THE MAIN THREAD)");
	log_printf(C_WHITE, "BUILT " __DATE__ " " __TIME__ " WITH XSDK, %s", ExLoadedImageName ? ExLoadedImageName : "");
	netlog_start(1, NETLOG_PORT, "IBARA360 " XEX_VERSION " LAUNCHER XEX");
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, load_task, NULL, LOAD_THREAD))) {
		log_printf(C_RED, "GALLERY: NO LOAD THREAD (NO GALLERY)");
		gal_ready = music_ready = -1;
	} else {
		NtClose(h);
	}
	if (video_init()) {
		log_out(0);
		return 1;
	}
	if (lsound_start())
		log_printf(C_RED, "SOUND: THE AUDIO DRIVER DID NOT START (NO SOUND)");
	for (g = 0; g < LAUNCH_GAMES; g++) {
		have[g] = launch_exists(launch_xex[g]);
		log_printf(have[g] ? C_WHITE : C_RED, "LAUNCHER: %s %s", launch_xex[g], have[g] ? "BESIDE THIS XEX" : "NOT FOUND");
	}
	if (launch_get(&launch_in) == 0 && launch_in.by == LAUNCH_BY_GAME && launch_in.game < LAUNCH_GAMES) {
		sel = (int)launch_in.game; /* back from that game: MODE SELECT at once, on it */
		go(ST_MODE);
	} else {
		go(ps2 ? ST_TITLE : ST_MODE); /* test 97: the plain screen has no title screen */
	}
	for (;;) {
		netlog_service();
		step(pads_press());
		draw();
		present();
	}
	return 0;
}

int main(void)
{
	HANDLE h;

	xsdk_log_write("ibara360: " XEX_VERSION " (test " XEX_TEST ") launcher xex, built " __DATE__ " " __TIME__);
	lq_init(); /* test 91: before any log_printf */
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 1024 * 1024, main_task, NULL, 0)))
		return 1;
	NtWaitForSingleObjectEx(h, USER_MODE, 0, NULL);
	return 0;
}

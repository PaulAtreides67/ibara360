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
/* Test 121 (1.03, user's list, item 4): STORY, a MODE SELECT row above EXIT (only with ibaraweb.dat beside the .xex):
 * the site's slides in English / Japanese (X on the row swaps; the label says which), the gallery's controls
 * (LB / RB, A zoom x2, the d-pad pans zoomed, Y the label window, B back), UP / DOWN scroll the tall slides, the
 * PS2's UNLISTED track (ps2music.bin's bgm.05) in the viewer. The viewer's and the decoder's code is after the gallery's
 * (the load thread serves the slides and UNLISTED's decode). */
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
#include "webdat.h"   /* test 121: ibaraweb.dat, the site's slides (STORY) */
#include "xplat.h"

/* backlog 2e: ps2data.bin's TATE title (ps2extract 2; ps2data.h has no name for it yet) */
#ifndef PS2N_TITLE_V
#define PS2N_TITLE_V "la.title_v" /* ARGB32 640 x 896: the GALLERY's picture 15, columns 128-767 */
#endif
#define LA_TV_W 640
#define LA_TV_H 896

/* test 97: the music in the .xex, the PS2 data from ps2data.bin (the plain screen without it) */
#define XEX_VERSION "1.03" /* test 120: release version; test 121: 1.03 */
#define XEX_TEST "123" /* test 123: STORY plate as GALLERY / EXIT, no EN/JP tag; test 120: release version; test 122: STORY sign, label window, UNLISTED level, 鋳薔薇 */
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

/* test 122 (user: "see if you can change the "story" label on the launcher to fit in with the other options (gallery
 * etc)"; "there's some stray pixels between the S and the T"): STORY's word in the PS2 plates' own letters, on the PS2's
 * blank sign as IBARA's and Kuro BL's logos are (the plates' metal cannot be cleared of their letters with real
 * pixels: 886 letter pixels are covered on all four plates). Made at load from sprites already in ps2data.bin's atlas
 * (no data of its own): S (52..59), T (89..98), O (25..33) of the MODE SELECT header (the only S of the disc's
 * pictures), R (21..29) of ARRANGE MODE, Y (82..96, with its left swirl) of GALLERY; rows 13..34; each letter = its blue outline and white
 * body (rows 14..33) grown by one pixel (4 neighbours), cut to its columns, blobs under 8 pixels (8 neighbours) dropped
 * (the metal's highlights); 1 pixel of overlap (the outlines on one column, as on the plates). work/g122/plate/mk.py is the reference (its preview
 * story_prev.png). */
#define SPL_W 47
#define SPL_H 22
static XsdkTexture t_splate;
static int splate_ok;      /* test 122: STORY's word is in (else the STORY text) */
static uint32_t spl[SPL_W * SPL_H];

/* the atlas's pixel x, y of sprite id (0xAARRGGBB) */
static uint32_t at_px(int id, int x, int y)
{
	const struct la_rect *r = &la_sprites[id];

	return t_atlas.texels[(size_t)(r->y + y) * t_atlas.pitch + r->x + x];
}

/* a letter's core pixel: the blue outline or the white body, rows 14..33 */
static int spl_core(int id, int x, int y)
{
	const struct la_rect *r = &la_sprites[id];
	uint32_t p;
	int cr, cg, cb;

	if (x < 0 || y < 14 || x >= r->w || y >= 34 || y >= r->h)
		return 0;
	p = at_px(id, x, y);
	cr = (p >> 16) & 255;
	cg = (p >> 8) & 255;
	cb = p & 255;
	return (cb - cr > 45 && cb > 120) || (cr > 190 && cg > 190 && cb > 190);
}

/* test 122: the word into spl and t_splate (the atlas must be in); 0 = made */
static int spl_make(void)
{
	static const struct spl_piece {
		int from, x0, x1, ex0, ey0, ex1; /* ex0..ex1 x ey0..34: a part of another letter cut out (ex1 < ex0: none) */
	} pieces[5] = {
		{LS_HEADER, 52, 59, 0, 0, -1},  /* S */
		{LS_HEADER, 89, 98, 89, 19, 91},  /* T (89: 88 is the C's outline; user: "between S and T ... look like they're
		                                   * attached"; under its bar, 89..91 x 19.., the C's tail swirl: "the little
		                                   * swirl connecting the S and the T should not be there") */
		{LS_HEADER, 25, 33, 0, 0, -1},  /* O */
		{LS_A_PLATE, 21, 29, 0, 0, -1}, /* R */
		{LS_G_PLATE, 82, 96, 0, 0, -1}, /* Y (82: its left swirl; user: "check the Y in gallery, it's got the swirl on the left") */
	};
	static unsigned char m[SPL_H][16], seen[SPL_H][16];
	static short st[SPL_H * 16][2], comp[SPL_H * 16][2];
	int k, x, y, dx = 0, dropped = 0;

	memset(spl, 0, sizeof(spl));
	for (k = 0; k < 5; k++) {
		const struct spl_piece *p = &pieces[k];
		const int w = p->x1 - p->x0 + 1;

		for (y = 0; y < SPL_H; y++) /* grown core, cut to the columns (rows 13..34 = y 0..21) */
			for (x = 0; x < w; x++) {
				const int sx = p->x0 + x, sy = 13 + y;
				m[y][x] = spl_core(p->from, sx, sy) || spl_core(p->from, sx - 1, sy) ||
				          spl_core(p->from, sx + 1, sy) || spl_core(p->from, sx, sy - 1) ||
				          spl_core(p->from, sx, sy + 1);
				if (sx >= p->ex0 && sx <= p->ex1 && sy >= p->ey0)
					m[y][x] = 0;
			}
		memset(seen, 0, sizeof(seen));
		for (y = 0; y < SPL_H; y++) /* blobs under 8 pixels out */
			for (x = 0; x < w; x++) {
				int ns = 0, nc = 0, i;

				if (!m[y][x] || seen[y][x])
					continue;
				seen[y][x] = 1;
				st[ns][0] = (short)y;
				st[ns++][1] = (short)x;
				while (ns) {
					const int cy = st[--ns][0], cx = st[ns][1];
					int ay, ax;

					comp[nc][0] = (short)cy;
					comp[nc++][1] = (short)cx;
					for (ay = cy - 1; ay <= cy + 1; ay++)
						for (ax = cx - 1; ax <= cx + 1; ax++)
							if (ay >= 0 && ay < SPL_H && ax >= 0 && ax < w && m[ay][ax] && !seen[ay][ax]) {
								seen[ay][ax] = 1;
								st[ns][0] = (short)ay;
								st[ns++][1] = (short)ax;
							}
				}
				if (nc < 8) {
					for (i = 0; i < nc; i++)
						m[comp[i][0]][comp[i][1]] = 0;
					dropped += nc;
				}
			}
		for (y = 0; y < SPL_H; y++)
			for (x = 0; x < w; x++)
				if (m[y][x] && dx + x < SPL_W)
					spl[y * SPL_W + dx + x] = at_px(p->from, p->x0 + x, 13 + y) | 0xFF000000u;
		dx += w - 1; /* the outlines on one column, as the plates' letters */
	}
	if (make_tex(&t_splate, NULL, SPL_W, SPL_H))
		return -1;
	for (y = 0; y < SPL_H; y++)
		for (x = 0; x < SPL_W; x++)
			t_splate.texels[(size_t)y * t_splate.pitch + x] = spl[y * SPL_W + x];
	xsdk_gpu_invalidate(t_splate.address, t_splate.size_bytes);
	log_printf(C_WHITE, "STORY: ITS WORD MADE FROM THE PS2 ATLAS'S LETTERS (%d HIGHLIGHT PIXELS LEFT OUT)", dropped);
	return 0;
}

/* test 122: STORY's word on the sign's face at x, y (the sign's left top), the sign K times: the word 1.4 times the
 * sign's pixels (the plates' letter height), centred on the face 26 .. 178 x 4 .. 46 */
static void spl_draw(float x, float y, float K, col_t c)
{
	const float k = 1.4f * K, w = SPL_W * k, h = SPL_H * k;
	const float wx = x + 26 * K + (152 * K - w) / 2, wy = y + 4 * K + (42 * K - h) / 2;

	use(&t_splate, 1);
	quad(wx + 3, wy + 3, wx + 3 + w, wy + 3 + h, 0, 0, 1, 1, rgba(0, 0, 0, 0.6f));
	quad(wx, wy, wx + w, wy + h, 0, 0, 1, 1, c);
}

/* test 123 (user: "story box is too big, have it match gallery, exit, and take out the small en/jp toggle"): STORY's
 * plate as LS_G_PLATE, LS_EXIT and LS_A_PLATE are, 112 x 48 (t_splate2), made at load from those three sprites (the
 * reference is work/g123/art/blank2.py + blank3_atlas.py): each plate's letters (spl_core's colour rule on rows 12..36,
 * columns 10..99) grown by one pixel (4 neighbours), blobs under 8 pixels dropped, grown twice more = the area the
 * letters take; where no plate has letters the three plates' pixels are averaged, the holes (all three have letters)
 * filled along their row; then spl's word (54 x 25 at 29, 13) over its shadow (2 pixels down and right, 150 of 255) */
#define SPL2_W 112
#define SPL2_H 48
#define SPL2_N 3
#define SPL2_WW 54 /* the word on the plate */
#define SPL2_WH 25
static XsdkTexture t_splate2;
static int splate2_ok;     /* test 123: STORY's plate is in (else the sign with spl's word) */
static const int spl2_from[SPL2_N] = {LS_A_PLATE, LS_G_PLATE, LS_EXIT};
static unsigned char spl2_m[SPL2_N][SPL2_H][SPL2_W]; /* each plate's letter area, 1 = in it */
static float spl2_base[SPL2_H][SPL2_W][4];          /* R G B A: the average of the plates, then the holes filled */
static unsigned char spl2_hole[SPL2_H][SPL2_W];     /* 1 = in all three letter areas */
static uint32_t spl2_img[SPL2_H * SPL2_W];          /* the plate, 0xAARRGGBB */
static uint32_t spl2_wd[SPL2_WH][SPL2_WW];          /* the word, scaled, 0xAARRGGBB */

/* test 123: out = in grown once (the 4-neighbour cross); in and out are different arrays */
static void spl2_grow(unsigned char in[SPL2_H][SPL2_W], unsigned char out[SPL2_H][SPL2_W])
{
	int x, y;

	for (y = 0; y < SPL2_H; y++)
		for (x = 0; x < SPL2_W; x++)
			out[y][x] = in[y][x] || (x > 0 && in[y][x - 1]) || (x < SPL2_W - 1 && in[y][x + 1]) ||
			            (y > 0 && in[y - 1][x]) || (y < SPL2_H - 1 && in[y + 1][x]);
}

/* test 123: the letter area of plate id into m (0 or 1 per pixel); the blobs are found with an iterative flood fill */
static void spl2_letters(int id, unsigned char m[SPL2_H][SPL2_W])
{
	static unsigned char g[SPL2_H][SPL2_W], t[SPL2_H][SPL2_W], seen[SPL2_H][SPL2_W];
	static unsigned short q[SPL2_H * SPL2_W];
	static const int ox[4] = {-1, 1, 0, 0}, oy[4] = {0, 0, -1, 1};
	int x, y, i;

	for (y = 0; y < SPL2_H; y++)
		for (x = 0; x < SPL2_W; x++) {
			const uint32_t p = at_px(id, x, y);
			const int cr = (p >> 16) & 255, cg = (p >> 8) & 255, cb = p & 255;

			m[y][x] = y >= 12 && y <= 36 && x >= 10 && x <= 99 &&
			          ((cb - cr > 45 && cb > 120) || (cr > 190 && cg > 190 && cb > 190));
		}
	spl2_grow(m, g);
	memset(seen, 0, sizeof(seen));
	for (y = 0; y < SPL2_H; y++)
		for (x = 0; x < SPL2_W; x++) {
			int h = 0, n = 0;

			if (!g[y][x] || seen[y][x])
				continue;
			seen[y][x] = 1;
			q[n++] = (unsigned short)(y * SPL2_W + x);
			while (h < n) {
				const int cy = q[h] / SPL2_W, cx = q[h] % SPL2_W;

				h++;
				for (i = 0; i < 4; i++) {
					const int nx = cx + ox[i], ny = cy + oy[i];

					if (nx >= 0 && nx < SPL2_W && ny >= 0 && ny < SPL2_H && g[ny][nx] && !seen[ny][nx]) {
						seen[ny][nx] = 1;
						q[n++] = (unsigned short)(ny * SPL2_W + nx);
					}
				}
			}
			if (n < 8) /* the metal's highlights */
				for (i = 0; i < n; i++)
					g[q[i] / SPL2_W][q[i] % SPL2_W] = 0;
		}
	spl2_grow(g, t);
	spl2_grow(t, m);
}

/* test 123: a float channel to a byte (rounded, clamped) */
static int spl2_c(float v)
{
	const int i = (int)(v + 0.5f);

	return i < 0 ? 0 : i > 255 ? 255 : i;
}

/* test 123: the colour s (r, g, b) at alpha sa composited over the pixel d (its alpha kept) */
static void spl2_over(uint32_t *d, int r, int g, int b, float sa)
{
	const uint32_t p = *d;
	const float da = (p >> 24) / 255.0f, oa = sa + da * (1 - sa);
	float dr, dg, db;

	if (oa <= 0)
		return;
	dr = ((p >> 16) & 255) * da * (1 - sa);
	dg = ((p >> 8) & 255) * da * (1 - sa);
	db = (p & 255) * da * (1 - sa);
	*d = (p & 0xFF000000u) | (uint32_t)spl2_c((r * sa + dr) / oa) << 16 | (uint32_t)spl2_c((g * sa + dg) / oa) << 8 |
	     (uint32_t)spl2_c((b * sa + db) / oa);
}

/* test 123: STORY's plate into t_splate2 (after spl_make: spl is the word); 0 = made, else the sign with the word */
static int splate2_make(void)
{
	int k, x, y, j, i;

	for (k = 0; k < SPL2_N; k++) {
		const struct la_rect *r = &la_sprites[spl2_from[k]];

		if (r->w != SPL2_W || r->h != SPL2_H)
			return -1;
		spl2_letters(spl2_from[k], spl2_m[k]);
	}
	for (y = 0; y < SPL2_H; y++) /* the average where no plate has letters */
		for (x = 0; x < SPL2_W; x++) {
			float s[4] = {0, 0, 0, 0};
			int n = 0;

			for (k = 0; k < SPL2_N; k++) {
				const uint32_t p = at_px(spl2_from[k], x, y);

				if (spl2_m[k][y][x])
					continue;
				n++;
				s[0] += (p >> 16) & 255;
				s[1] += (p >> 8) & 255;
				s[2] += p & 255;
				s[3] += p >> 24;
			}
			spl2_hole[y][x] = !n;
			for (j = 0; j < 4 && n; j++)
				spl2_base[y][x][j] = s[j] / n;
		}
	for (y = 0; y < SPL2_H; y++) { /* each hole along its row, between the nearest pixels that are not */
		x = 0;
		while (x < SPL2_W) {
			int a, b, l, rr, xx;

			if (!spl2_hole[y][x]) {
				x++;
				continue;
			}
			a = x;
			while (x < SPL2_W && spl2_hole[y][x])
				x++;
			b = x - 1;
			l = a - 1;
			rr = b + 1;
			for (xx = a; xx <= b; xx++)
				for (j = 0; j < 4; j++) {
					float v = 0;

					if (l >= 0 && rr < SPL2_W)
						v = spl2_base[y][l][j] + (spl2_base[y][rr][j] - spl2_base[y][l][j]) * (float)(xx - l) / (float)(rr - l);
					else if (l >= 0)
						v = spl2_base[y][l][j];
					else if (rr < SPL2_W)
						v = spl2_base[y][rr][j];
					spl2_base[y][xx][j] = v;
				}
		}
	}
	for (y = 0; y < SPL2_H; y++)
		for (x = 0; x < SPL2_W; x++) {
			const float *f = spl2_base[y][x];

			spl2_img[y * SPL2_W + x] = (uint32_t)spl2_c(f[3]) << 24 | (uint32_t)spl2_c(f[0]) << 16 |
			                           (uint32_t)spl2_c(f[1]) << 8 | (uint32_t)spl2_c(f[2]);
		}
	/* the word: spl (47 x 22, premultiplied bilinear) to 54 x 25 */
	for (y = 0; y < SPL2_WH; y++)
		for (x = 0; x < SPL2_WW; x++) {
			const float sx = (x + 0.5f) * SPL_W / SPL2_WW - 0.5f, sy = (y + 0.5f) * SPL_H / SPL2_WH - 0.5f;
			const int x0 = sx < 0 ? -1 : (int)sx, y0 = sy < 0 ? -1 : (int)sy;
			const float fx = sx - x0, fy = sy - y0;
			float wa = 0, wr = 0, wg = 0, wb = 0;

			for (j = 0; j < 2; j++)
				for (i = 0; i < 2; i++) {
					const int cx = x0 + i < 0 ? 0 : x0 + i >= SPL_W ? SPL_W - 1 : x0 + i;
					const int cy = y0 + j < 0 ? 0 : y0 + j >= SPL_H ? SPL_H - 1 : y0 + j;
					const float wt = (i ? fx : 1 - fx) * (j ? fy : 1 - fy);
					const uint32_t p = spl[cy * SPL_W + cx];
					const float a = wt * (p >> 24);

					wa += a;
					wr += a * ((p >> 16) & 255);
					wg += a * ((p >> 8) & 255);
					wb += a * (p & 255);
				}
			spl2_wd[y][x] = wa > 0 ? (uint32_t)spl2_c(wa) << 24 | (uint32_t)spl2_c(wr / wa) << 16 |
			                         (uint32_t)spl2_c(wg / wa) << 8 | (uint32_t)spl2_c(wb / wa) : 0;
		}
	for (y = 0; y < SPL2_WH; y++) /* the shadow: black at 150 of 255 where the word is, 2 pixels down and right */
		for (x = 0; x < SPL2_WW; x++) {
			const uint32_t p = spl2_wd[y][x];

			if (p >> 24)
				spl2_over(&spl2_img[(15 + y) * SPL2_W + 31 + x], 0, 0, 0, (p >> 24) / 255.0f * 150 / 255);
		}
	for (y = 0; y < SPL2_WH; y++) /* the word */
		for (x = 0; x < SPL2_WW; x++) {
			const uint32_t p = spl2_wd[y][x];

			if (p >> 24)
				spl2_over(&spl2_img[(13 + y) * SPL2_W + 29 + x], (p >> 16) & 255, (p >> 8) & 255, p & 255,
				          (p >> 24) / 255.0f);
		}
	if (make_tex(&t_splate2, NULL, SPL2_W, SPL2_H))
		return -1;
	for (y = 0; y < SPL2_H; y++)
		for (x = 0; x < SPL2_W; x++)
			t_splate2.texels[(size_t)y * t_splate2.pitch + x] = spl2_img[y * SPL2_W + x];
	xsdk_gpu_invalidate(t_splate2.address, t_splate2.size_bytes);
	log_printf(C_WHITE, "STORY: ITS PLATE MADE FROM THE PS2 PLATES (GALLERY, EXIT, ARRANGE)");
	return 0;
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

/* ---- test 121 (user: "an image slide inside the main menu itself labeled "story", above the quit options ... same
 * commands as the gallery mode; except this one will be both in english and japanese (press X to swap language when
 * highlighting story on the launcher menu, play the unused PS2 track 17 Unlisted)"): STORY. The site's slides from
 * ibaraweb.dat beside this .xex (webdat.c, tools/web/mkweb.py): 1280 x 720 each, a tall one as 720-high chunks; the
 * music is UNLISTED (SEQ 11-12) from ps2music.bin's bgm.05, decoded here as ps2music.c's reader plays it.
 * Textures: four 1280 x 720 (a tall slide's two chunks in view, and the next slide's two while it loads); the load
 * thread decodes one request at a time into a texture the main thread has tagged free (sl_tag). */
#define STORY_FILE "ibaraweb.dat"
#define PS2N_MUSIC "ps2music.bin"
#define SL_W 1280
#define SL_H 720
#define SL_SLOTS 4
#define SL_LOOK 256            /* chunks read this far (source pixels) before the view reaches them */
#define SL_STEP 12             /* UP / DOWN unzoomed, a frame (source pixels, held) */
#define SL_PAN 4               /* the d-pad zoomed, a frame */
#define SM_STREAM 5            /* ps2music.bin's bgm.05: UNLISTED (SEQ 11-12), ps2music.c's st_tab[5] */
#define SM_N 7516824u          /* its samples to the end flag */
#define SM_P 5580648u          /* its loop: at n back to n - P */
#define SM_VOL 0x55            /* its list volume of 128 (SLPM_663.01 0x210F28); test 122: not applied (sm_decode) */
#define SM_XFADE 220           /* the loop's crossfade (ps2music.c's XFADE) */
#define SM_BLK 17920u          /* samples per channel in a 0x2800-byte block */
#define SM_BLK_BYTES 0x2800u
#define SM_DATA_AT 0x800u      /* a stream's first block, after its BG00 and VAGp headers */
#define SM_PAIRS 3             /* block pairs a read takes */

struct sl_item {
	unsigned char group, chunks; /* group: 0 STORY, 1 SYSTEM, 2 STAGE, 3 CHARACTER */
	char label[31];
};
static struct sl_item *sl_idx;   /* story.idx: the slides (the same list in both languages) */
static unsigned sl_n;
static volatile int story_ready; /* 1 = the index in (MODE SELECT's STORY row), -1 = no ibaraweb.dat */
static volatile int sm_ready;    /* 1 = UNLISTED in lsound, -1 = none (a silent viewer), 0 = not yet */
static int story_lang;           /* 0 = English, 1 = Japanese (X on STORY; the session's) */
static XsdkTexture t_story[SL_SLOTS];
static volatile unsigned sl_used[SL_SLOTS]; /* the frame each texture was last drawn in */
struct sl_tag {
	int slide, chunk, lang;      /* what the texture holds; slide -1 = none (or being decoded) */
};
static struct sl_tag sl_tab[SL_SLOTS]; /* the main thread's */
static volatile unsigned sl_req, sl_done; /* one request at a time: asked, done */
static volatile int sl_rq_slot, sl_rq_slide, sl_rq_chunk, sl_rq_lang, sl_rq_bad;
static volatile unsigned sl_ms;  /* the last decode's time (the log) */
static int sl_pend, sl_pend_slot, sl_pend_slide, sl_pend_chunk, sl_pend_lang; /* the main thread's copy */
static int sl_cur, sl_target, sl_zoom, sl_overlay; /* on screen, wanted (LB / RB), zoomed, the label window */
static float sl_vx, sl_vy;       /* the viewport's top left, in the slide's pixels */

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

/* ---- test 121: STORY's loader (the load thread: its table, its slides on request, UNLISTED) ------------------------ */

/* the file beside this .xex for fopen (ps2data.c's form: '\' as '/') */
static FILE *story_file(const char *name)
{
	char p[260];
	char *c;

	if (launch_path(p, sizeof(p), name))
		return NULL;
	for (c = p; *c; c++)
		if (*c == '\\')
			*c = '/';
	return fopen(p, "rb");
}

/* ibaraweb.dat's table (webdat.c) and story.idx's slides into sl_idx; story_ready 1, or -1 with the log's reason */
static void story_table(void)
{
	char p[260];
	const struct webdat_entry *e;
	unsigned char *b;
	uint64_t t0 = tb_read();
	unsigned n, i;

	if (launch_path(p, sizeof(p), STORY_FILE) || webdat_open(p)) {
		log_printf(C_RED, "STORY: %s", webdat_why()[0] ? webdat_why() : "NO IBARAWEB.DAT");
		story_ready = -1;
		return;
	}
	e = webdat_find("story.idx");
	b = e ? webdat_read(e) : NULL;
	if (!b || e->kind != WEBDAT_KIND_RAW || e->bytes < 2 || (n = be16(b)) == 0 || n > 4096 || e->bytes < 2 + 32u * n) {
		log_printf(C_RED, "STORY: STORY.IDX IS NOT THERE OR DAMAGED (NO STORY)");
		free(b);
		story_ready = -1;
		return;
	}
	sl_idx = calloc(n, sizeof(*sl_idx));
	if (!sl_idx) {
		log_printf(C_RED, "STORY: NO MEMORY FOR ITS INDEX (NO STORY)");
		free(b);
		story_ready = -1;
		return;
	}
	for (i = 0; i < n; i++) {
		const unsigned char *r = b + 2 + 32 * i;
		sl_idx[i].group = r[0];
		sl_idx[i].chunks = r[1] ? r[1] : 1;
		memcpy(sl_idx[i].label, r + 2, 30);
		sl_idx[i].label[30] = 0;
	}
	free(b);
	sl_n = n;
	for (i = 0; i < SL_SLOTS; i++) /* review: no texture holds a slide yet (zero would read as slide 1, chunk 1, EN) */
		sl_tab[i].slide = -1;
	__sync_synchronize();
	story_ready = 1;
	log_printf(C_WHITE, "STORY: IBARAWEB.DAT READ, %u SLIDES, IN %u MS", n, tb_us(t0, tb_read()) / 1000);
}

/* a slide's chunk c in language lang (0 EN, 1 JA) decoded (stb_image, webdat.c) into texture slot: 1280 x 720 ARGB32.
 * A chunk that is not there or does not decode is black (the texture cleared). 0 = done. */
static int sl_decode(int s, int c, int lang, int slot)
{
	char name[32];
	const struct webdat_entry *e;
	unsigned char *jpg;
	uint32_t *px;
	int w = 0, h = 0, x, y;
	XsdkTexture *t = &t_story[slot];

	snprintf(name, sizeof(name), "st.%s.%02d.%02d", lang ? "ja" : "en", s, c);
	e = webdat_find(name);
	jpg = e && e->kind == WEBDAT_KIND_JPEG ? webdat_read(e) : NULL;
	px = jpg ? webdat_jpeg_argb(jpg, e->bytes, &w, &h) : NULL;
	free(jpg);
	if (!px || w != SL_W || h != SL_H) {
		log_printf(C_RED, "STORY: %s %s (BLACK)", name, e ? "DID NOT DECODE" : "IS NOT IN IBARAWEB.DAT");
		free(px);
		for (y = 0; y < SL_H; y++)
			for (x = 0; x < SL_W; x++)
				t->texels[(size_t)y * t->pitch + x] = 0;
		__sync_synchronize();
		return -1;
	}
	for (y = 0; y < SL_H; y++)
		for (x = 0; x < SL_W; x++)
			t->texels[(size_t)y * t->pitch + x] = px[(size_t)y * SL_W + x];
	free(px);
	__sync_synchronize();
	return 0;
}

/* the main thread's one request, if any: waits until the texture's last frame is shown, decodes, logs, answers */
static void sl_serve(void)
{
	const unsigned req = sl_req;
	const int s = sl_rq_slide, c = sl_rq_chunk, k = sl_rq_slot;
	uint64_t t0;
	int r;

	if (req == sl_done)
		return;
	while ((int)(frame - sl_used[k]) < SLOTS)
		xsdk_thread_sleep(1);
	t0 = tb_read();
	r = sl_decode(s, c, sl_rq_lang, k);
	sl_rq_bad = r;
	sl_ms = tb_us(t0, tb_read()) / 1000;
	if (!r && c == 0)
		log_printf(C_WHITE, "STORY: SLIDE %d / %u %s (%u CHUNKS) DECODED IN %u MS", s + 1, sl_n, sl_idx[s].label,
		           (unsigned)sl_idx[s].chunks, sl_ms);
	else if (!r)
		log_printf(C_WHITE, "STORY: SLIDE %d / %u CHUNK %d / %u DECODED IN %u MS", s + 1, sl_n, c + 1,
		           (unsigned)sl_idx[s].chunks, sl_ms);
	__sync_synchronize();
	sl_done = req;
}

/* the sqrt for the RMS (Newton; libm is not linked) */
static double ld_sqrt(double x)
{
	double r = x > 1 ? x : 1;
	int i;

	if (x <= 0)
		return 0;
	for (i = 0; i < 60; i++)
		r = 0.5 * (r + x / r);
	return r;
}

/* the ADPCM frame (28 samples, SPU) of ps2music.c's adpcm_frame: the channel's last two samples in h */
static void sm_frame(const unsigned char *f, int *h, int16_t *out)
{
	static const int coef[5][2] = {{0, 0}, {60, 0}, {115, -52}, {98, -55}, {122, -60}};
	const int shift = f[0] & 15, sh = shift <= 12 ? 12 - shift : 0;
	int filt = f[0] >> 4, h1 = h[0], h2 = h[1], i;

	if (filt > 4)
		filt = 0;
	for (i = 0; i < 28; i++) {
		int nib = i & 1 ? f[2 + i / 2] >> 4 : f[2 + i / 2] & 15, s;
		if (nib >= 8)
			nib -= 16;
		s = nib * (1 << sh) + ((h1 * coef[filt][0] + h2 * coef[filt][1] + 32) >> 6);
		s = s > 32767 ? 32767 : s < -32768 ? -32768 : s;
		out[i] = (int16_t)s;
		h2 = h1;
		h1 = s;
	}
	h[0] = h1;
	h[1] = h2;
}

/* test 121: UNLISTED (SEQ 11-12) from ps2music.bin's bgm.05 (ps2music.c's reader: 2 channels' blocks of 0x2800 bytes,
 * L then R, from 0x800 of the entry; SPU ADPCM 44.1 kHz). The whole stream decoded in order (SM_N samples); its loop
 * as the reader plays it: the last SM_XFADE samples blended with the ones SM_P before them, so lsound loops from
 * SM_N - SM_P. The volume: the stream's own (test 122: SM_VOL no longer applied). Returns frames of L R s16 (*frames, *loop_at), NULL with *why. */
static int16_t *sm_decode(unsigned *frames, unsigned *loop_at, const char **why)
{
	unsigned char hd[64], ent[64], sh[0x80], *buf = NULL;
	int16_t *out = NULL;
	FILE *f;
	uint32_t off, size, done = 0, b0, blocks, i;
	int hist[2][2];

	*frames = *loop_at = 0;
	f = story_file(PS2N_MUSIC);
	if (!f) {
		*why = "NO PS2MUSIC.BIN BESIDE THE XEX FILES";
		return NULL;
	}
	if (fread(hd, 1, 64, f) != 64 || memcmp(hd, PS2DATA_MAGIC, 8) || be32(hd + 8) != PS2DATA_VERSION ||
	    be32(hd + 12) <= SM_STREAM || be32(hd + 16) != 64) {
		*why = "PS2MUSIC.BIN IS NOT IBARA360'S";
		goto end;
	}
	if (fseek(f, 64L + 64L * SM_STREAM, SEEK_SET) || fread(ent, 1, 64, f) != 64 ||
	    strncmp((const char *)ent, "bgm.05", 32)) {
		*why = "PS2MUSIC.BIN HAS NO BGM.05";
		goto end;
	}
	off = be32(ent + 32);
	size = be32(ent + 40);
	if (be32(ent + 36) != size || size < SM_DATA_AT + 2 * SM_BLK_BYTES) {
		*why = "PS2MUSIC.BIN'S BGM.05 IS DAMAGED";
		goto end;
	}
	if (fseek(f, (long)off, SEEK_SET) || fread(sh, 1, sizeof(sh), f) != sizeof(sh) || memcmp(sh, "BG00", 4) ||
	    memcmp(sh + 0x40, "VAGp", 4) || (be32(sh + 0x4C) / 16) * 28 - 28 != SM_N) { /* ps2music.c's checks */
		*why = "PS2MUSIC.BIN'S BGM.05 IS NOT AS EXPECTED";
		goto end;
	}
	blocks = (size - SM_DATA_AT) / (2 * SM_BLK_BYTES);
	if ((uint64_t)blocks * SM_BLK < SM_N) {
		*why = "PS2MUSIC.BIN'S BGM.05 IS CUT SHORT";
		goto end;
	}
	out = malloc((size_t)SM_N * 2 * sizeof(int16_t));
	buf = malloc(SM_PAIRS * 2 * SM_BLK_BYTES);
	if (!out || !buf) {
		*why = "NO MEMORY FOR UNLISTED";
		free(out);
		out = NULL;
		goto end;
	}
	memset(hist, 0, sizeof(hist));
	for (b0 = 0; b0 < blocks && done < SM_N; b0 += SM_PAIRS) {
		const uint32_t nb = blocks - b0 < SM_PAIRS ? blocks - b0 : SM_PAIRS;
		uint32_t j;

		if (fseek(f, (long)(off + SM_DATA_AT + b0 * 2 * SM_BLK_BYTES), SEEK_SET) ||
		    fread(buf, 1, nb * 2 * SM_BLK_BYTES, f) != nb * 2 * SM_BLK_BYTES) {
			*why = "PS2MUSIC.BIN'S BGM.05 DID NOT READ";
			free(out);
			out = NULL;
			goto end;
		}
		for (j = 0; j < nb && done < SM_N; j++) {
			const unsigned char *lb = buf + j * 2 * SM_BLK_BYTES, *rb = lb + SM_BLK_BYTES;
			uint32_t fr;

			for (fr = 0; fr < SM_BLK / 28 && done < SM_N; fr++) {
				int16_t pl[28], pr[28];
				int k;

				sm_frame(lb + fr * 16, hist[0], pl);
				sm_frame(rb + fr * 16, hist[1], pr);
				for (k = 0; k < 28 && done < SM_N; k++, done++) {
					out[2 * done] = pl[k];
					out[2 * done + 1] = pr[k];
				}
			}
		}
	}
	if (done != SM_N) {
		*why = "PS2MUSIC.BIN'S BGM.05 IS CUT SHORT";
		free(out);
		out = NULL;
		goto end;
	}
	for (i = SM_N - SM_XFADE; i < SM_N; i++) { /* the loop's crossfade (ps2music.c's reader, sample for sample) */
		const int j = (int)(i - (SM_N - SM_XFADE)), q = (int)(i - SM_P);
		int ch;

		for (ch = 0; ch < 2; ch++) {
			const int a = out[2 * i + ch], b = out[2 * q + ch];
			out[2 * i + ch] = (int16_t)((a * (SM_XFADE - 1 - j) + b * j) / (SM_XFADE - 1));
		}
	}
	/* test 122 (user: "the music in the story gallery is too quiet, have it match the volume of the other sounds"):
	 * the list volume (SM_VOL / 128) is no longer applied; the decoder's own s16 output is the level (the loop's
	 * crossfade is a blend of two in-range samples, so nothing clips and no gain is added) */
	*frames = SM_N;
	*loop_at = SM_N - SM_P;
end:
	free(buf);
	fclose(f);
	return out;
}

/* test 121: the gallery's MP3 (gal_rms_mp3, bytes lsound keeps) measured for the log: a sibling of the load thread on
 * its hardware thread, so the load thread's pictures and slides do not wait for the decode of a whole track */
static const unsigned char *gal_rms_mp3;
static unsigned gal_rms_n;

static uint32_t gal_rms_task(void *u)
{
	unsigned gf = 0;
	const double g = lsound_mp3_rms(gal_rms_mp3, gal_rms_n, &gf);

	(void)u;
	log_printf(C_WHITE, "GALLERY: MUSIC RMS %u PPM (THE MP3 MEASURED FOR COMPARISON, %u FRAMES)", (unsigned)(g * 1000000.0),
	           gf);
	return 0;
}

/* test 121: UNLISTED into lsound (sm_ready), with its RMS and the time in the log; then the gallery's MP3 (gal_rms_mp3,
 * the bytes lsound keeps) measured for comparison, after the viewer's music is ready (so the gate does not wait for it).
 * On a thread of its own (LOAD_THREAD's hardware thread): the load thread serves pictures and slides meanwhile. */
static uint32_t story_music_task(void *u)
{
	const unsigned char *gal = gal_rms_mp3;
	const char *why = "";
	uint64_t t0 = tb_read();
	unsigned frames = 0, loop = 0, i;
	int16_t *pcm;
	double sum = 0;

	pcm = sm_decode(&frames, &loop, &why);
	if (!pcm) {
		sm_ready = -1;
		log_printf(C_YELLOW, "STORY: MUSIC UNLISTED NOT HERE (%s): SILENT VIEWER", why);
	} else {
		const unsigned ms = tb_us(t0, tb_read()) / 1000;
		double rms;
		for (i = 0; i < 2 * frames; i++)
			sum += (double)pcm[i] * (double)pcm[i];
		rms = ld_sqrt(sum / (2.0 * frames)) / 32768.0;
		lsound_music_set_pcm(pcm, frames, loop); /* kept for good */
		__sync_synchronize();
		sm_ready = 1;
		log_printf(C_WHITE, "STORY: MUSIC UNLISTED (SEQ 11-12) DECODED, %u FRAMES, IN %u MS, RMS %u PPM", frames, ms,
		           (unsigned)(rms * 1000000.0));
	}
	(void)u;
	if (gal)
		gal_rms_task(NULL);
	return 0;
}

/* test 121: story_music_task started (gal: the gallery's MP3 or NULL), sm_ready -1 if it cannot start */
static void story_music_start(const unsigned char *gal, unsigned gal_n)
{
	HANDLE h;

	gal_rms_mp3 = gal;
	gal_rms_n = gal_n;
	if (NT_SUCCESS(xsdk_thread_create_on(&h, 128 * 1024, story_music_task, NULL, LOAD_THREAD))) {
		NtClose(h);
	} else {
		sm_ready = -1;
		log_printf(C_RED, "STORY: NO THREAD FOR UNLISTED (SILENT VIEWER)");
	}
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
	story_table(); /* test 121: ibaraweb.dat's index (the STORY row) */
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
	story_music_start(hz ? m : NULL, n); /* test 121: UNLISTED for the STORY viewer (and the gallery's MP3 measured for the log) */
	for (;;) { /* test 121: the STORY's slides too, the gallery's pictures only with the gallery */
		const unsigned req = pic_req;
		if (gal_ready > 0 && req != pic_done) {
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
		sl_serve(); /* test 121: one STORY slide (or chunk) when asked */
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
	if (ps2) { /* test 122: STORY's word from the atlas (none: the STORY text) */
		splate_ok = !spl_make();
		/* test 123: STORY's plate from the PS2 plates (none: the sign with the word) */
		splate2_ok = splate_ok && !splate2_make();
	}
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
	for (i = 0; i < SL_SLOTS; i++) /* test 121: the STORY's four 1280 x 720 textures */
		if (!NT_SUCCESS(xsdk_texture_create(&t_story[i], XSDK_FORMAT_A8R8G8B8, SL_W, SL_H, 1, false)))
			break;
	if (i < SL_SLOTS) {
		log_printf(C_RED, "VIDEO: NO MEMORY FOR THE STORY'S TEXTURES");
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
	int k, q;

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
			for (q = 0; q < SL_SLOTS; q++) /* test 121: the STORY textures' last frame */
				if (bt[k].t == &t_story[q])
					sl_used[q] = frame;
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
	K_LEFT = 64, K_RIGHT = 128, K_LB = 256, K_RB = 512, K_Y = 1024 /* test 75: the gallery's */,
	K_X = 2048 /* test 121: STORY's language */
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
			if (b & INPUT_GAMEPAD_X) /* test 121 */
				w |= K_X;
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
	ST_GAL_ENTER, ST_GAL_IN, ST_GAL_GRID, ST_GAL_LOAD, ST_GAL_VIEW, ST_GAL_HAND, ST_GAL_OUT,
	/* test 121, STORY: the loading gate, its fade in, the viewer, its fade out (to MODE SELECT's STORY row) */
	ST_STORY_ENTER, ST_STORY_IN, ST_STORY_VIEW, ST_STORY_OUT
};
/* test 77: ARRANGE MODE (ibaraarr.xex, LAUNCH_ARRANGE) after the two games, the PS2 mode select's plate. Test 121:
 * STORY above EXIT (only with ibaraweb.dat: it_on) */
enum { IT_IBARA, IT_BLK, IT_ARR, IT_GALLERY, IT_STORY, IT_EXIT, IT_N };
static const char *const it_names[IT_N] = {"IBARA", "IBARA KURO BLACK LABEL", "ARRANGE MODE", "GALLERY", "STORY", "EXIT"};

/* test 121: the STORY row is in MODE SELECT once ibaraweb.dat is in; the rows are the items there (it_row), the moves
 * (it_move) skip the others */
static int it_on(int i)
{
	return i != IT_STORY || story_ready > 0;
}

static int it_row(int i)
{
	int r = 0, j;

	for (j = 0; j < i; j++)
		r += it_on(j);
	return r;
}

static int it_rows(void)
{
	return it_row(IT_N);
}

static int it_move(int i, int d)
{
	do
		i = (i + IT_N + d) % IT_N;
	while (!it_on(i));
	return i;
}
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
	/* test 121: six rows (STORY in) step 88 (the plates 96 high at x2: the last ends at 686, above the button line) */
	return rot ? 152.0f + 81.0f * (float)it_row(i) /* backlog 2e: TATE's, 75-high plates */
	           : 150.0f + (it_rows() > 5 ? 88.0f : 106.0f) * (float)it_row(i);
}

/* backlog 2e: the plates' size: x 1.5 in TATE (273 wide of the 720: D. Teresa's face, in the painting's middle, left
 * clear), else K_PLATE */
static float kp(void)
{
	/* test 121: six rows (STORY in) at x1.8: the sign 90 high, 88 apart (x2 would overlap by 12) */
	return rot ? 1.5f : it_rows() > 5 ? 1.8f : K_PLATE;
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

	if (i == IT_STORY && splate2_ok) { /* test 123 (user: "story box is too big, have it match gallery, exit"): the plate as
		                                * GALLERY's and EXIT's (splate2_make); the language is X's, no tag */
		const float px = x + (sg->w - SPL2_W) * K / 2, py = y + 2;

		use(&t_splate2, 1);
		quad(px, py, px + SPL2_W * K, py + SPL2_H * K, 0, 0, 1, 1, rgba(c.r * dim, c.g * dim, c.b * dim, 1));
	} else if (i == IT_STORY && splate_ok) { /* test 122 (user: "fit in with the other options (gallery etc)"): the blank sign
	                                    * with STORY's word on its face (spl_make), as the games' logos; the language (X) a
	                                    * tag at the sign's right */
		const col_t lc = rgba(c.r * dim, c.g * dim, c.b * dim, 1);

		spr(LS_SIGN, x, y, K, c);
		spl_draw(x, y, K, lc);
	} else if (i == IT_STORY) { /* test 121: no plate art for it: its word in the PS2 font at x2 (test 123: no language tag) */
		const float yt = y + 32;

		text(x + 3, yt + 3, "STORY", K, rgba(0, 0, 0, 0.6f));
		text(x, yt, "STORY", K, rgba(c.r * dim, c.g * dim, c.b * dim, 1));
	} else if (i == IT_EXIT || i == IT_GALLERY || i == IT_ARR) {
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
	} else if (sel == IT_STORY) { /* test 121: what STORY is, and X */
		static const char *const st_lines[3] = {"The official site's story,", "system, stages, characters",
		                                        "X: English / Japanese"};
		for (i = 0; i < 3; i++)
			jtext(tx, ty + 34 * (float)i, st_lines[i], 1, WHITE);
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
		if (it_on(i)) /* test 121: STORY only with ibaraweb.dat */
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
		const int on = item_ok(i), chosen = i == sel, row = it_row(i);
		const col_t c = !on ? rgba(0.45f, 0.45f, 0.45f, 1) : chosen ? WHITE : GREY;
		if (!it_on(i)) /* test 121: STORY only with ibaraweb.dat */
			continue;
		snprintf(t, sizeof(t), "%s%s", i == IT_STORY ? (story_lang ? "STORY (JA)" : "STORY (EN)") : it_names[i],
		         on ? "" : i == IT_GALLERY ? "  (NEEDS PS2DATA.BIN)" : "  (NOT HERE)");
		if (chosen)
			text(x0, 150 + 52.0f * row, ">", 3, YELLOW);
		text(x0 + 40, 150 + 52.0f * row, t, 3, c);
	}
	if (state == ST_FAIL)
		text(x0 + 40, 150 + 52.0f * it_rows(), "IT DID NOT START", 2, RED);
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
	lsound_music_choose(0); /* test 121: the MP3 (STORY's UNLISTED is the other source) */
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

/* ---- test 121: STORY, the viewer --------------------------------------------------------------------------------------- */

/* the slide's scale on the canvas: x1 at 16:9 (1280 wide), x0.75 at 4:3 (960 wide, letterboxed), x2 zoomed */
static float sl_k(void)
{
	return canvas_w / SL_W * (sl_zoom ? 2 : 1);
}

/* the viewport in the slide's pixels: 1280 x 720 (the whole width, unzoomed), half of each zoomed */
static float sl_vw(void)
{
	return canvas_w / sl_k();
}

static float sl_vh(void)
{
	return SL_H * (canvas_w / SL_W) / sl_k();
}

/* the viewport kept on the slide (its chunks stacked: n x 720 high) */
static void sl_clamp(void)
{
	const float vw = sl_vw(), vh = sl_vh(), H = (float)sl_idx[sl_cur].chunks * SL_H;

	sl_vx = sl_vx > SL_W - vw ? SL_W - vw : sl_vx;
	sl_vx = sl_vx < 0 ? 0 : sl_vx;
	sl_vy = sl_vy > H - vh ? H - vh : sl_vy;
	sl_vy = sl_vy < 0 ? 0 : sl_vy;
}

/* the texture holding chunk c of slide s in the language, or -1 */
static int sl_find(int s, int c)
{
	int k;

	for (k = 0; k < SL_SLOTS; k++)
		if (sl_tab[k].slide == s && sl_tab[k].chunk == c && sl_tab[k].lang == story_lang)
			return k;
	return -1;
}

/* the chunks the view reads, SL_LOOK either side of it: c0 .. c1 of the slide on show */
static void sl_range(int *c0, int *c1)
{
	const int n = sl_idx[sl_cur].chunks;
	const float H = (float)n * SL_H;
	float top = sl_vy - SL_LOOK, bot = sl_vy + sl_vh() + SL_LOOK;
	int a, b;

	top = top < 0 ? 0 : top;
	bot = bot > H ? H : bot;
	a = (int)(top / SL_H);
	b = (int)((bot - 1) / SL_H);
	b = b > n - 1 ? n - 1 : b;
	a = a > b ? b : a;
	*c0 = a;
	*c1 = b;
}

/* a texture for a new decode: none that the view on show reads (sl_range) */
static int sl_pick(void)
{
	int k, c0, c1;

	sl_range(&c0, &c1);
	for (k = 0; k < SL_SLOTS; k++) {
		const struct sl_tag *t = &sl_tab[k];
		if (t->slide == sl_cur && t->lang == story_lang && t->chunk >= c0 && t->chunk <= c1)
			continue;
		return k;
	}
	return -1;
}

/* asks the load thread for chunk c of slide s into a free texture (one request at a time) */
static void sl_ask(int s, int c)
{
	const int k = sl_pick();

	if (k < 0)
		return;
	sl_tab[k].slide = -1; /* not to be drawn while it is written */
	sl_rq_slot = k;
	sl_rq_slide = s;
	sl_rq_chunk = c;
	sl_rq_lang = story_lang;
	sl_pend = 1;
	sl_pend_slot = k;
	sl_pend_slide = s;
	sl_pend_chunk = c;
	sl_pend_lang = story_lang;
	__sync_synchronize();
	sl_req = sl_req + 1;
}

/* every frame of STORY (and its gate): the request out (its texture tagged, uploaded, when it is done), then what is
 * wanted next: LB / RB's slide (its first chunk, then the view moves to it), else the view's chunks read ahead */
static void sl_pump(void)
{
	int c0, c1, c;

	if (sl_pend && sl_done == sl_req) {
		sl_tab[sl_pend_slot].slide = sl_pend_slide;
		sl_tab[sl_pend_slot].chunk = sl_pend_chunk;
		sl_tab[sl_pend_slot].lang = sl_pend_lang;
		xsdk_gpu_invalidate(t_story[sl_pend_slot].address, t_story[sl_pend_slot].size_bytes);
		sl_pend = 0;
	}
	if (sl_pend || story_ready <= 0)
		return;
	if (sl_target != sl_cur) {
		if (sl_find(sl_target, 0) >= 0) {
			sl_cur = sl_target;
			sl_vx = sl_vy = 0;
			sl_zoom = 0;
		} else {
			sl_ask(sl_target, 0);
		}
		return;
	}
	sl_range(&c0, &c1);
	for (c = c0; c <= c1; c++)
		if (sl_find(sl_cur, c) < 0) {
			sl_ask(sl_cur, c);
			return;
		}
}

/* STORY chosen in MODE SELECT (A): slide 1 of the language, the window on, unzoomed at the top */
static void sl_enter(void)
{
	sl_cur = sl_target = 0;
	sl_zoom = 0;
	sl_overlay = 1;
	sl_vx = sl_vy = 0;
}

static void story_step(unsigned press, unsigned rep)
{
	const int n = (int)sl_n;

	(void)rep;
	sl_pump();
	switch (state) {
	case ST_STORY_ENTER: /* the PS2's loading gate: NOW LOADING until slide 1 and UNLISTED are in (or UNLISTED is not) */
		if (state_t >= GAL_FADE && sm_ready && sl_find(sl_cur, 0) >= 0) {
			log_printf(C_WHITE, "STORY: OPEN (%s)", story_lang ? "JA" : "EN");
			if (sm_ready > 0) {
				lsound_music_choose(1);
				lsound_music_play();
			} else {
				log_printf(C_YELLOW, "STORY: NO MUSIC");
			}
			go(ST_STORY_IN);
		}
		break;
	case ST_STORY_IN:
		if (state_t >= GAL_FADE)
			go(ST_STORY_VIEW);
		break;
	case ST_STORY_VIEW:
		if (press & K_A) { /* zoom x2 on / off, about the middle of what is on show */
			const float cx = sl_vx + sl_vw() / 2, cy = sl_vy + sl_vh() / 2;
			sl_zoom ^= 1;
			sl_vx = cx - sl_vw() / 2;
			sl_vy = cy - sl_vh() / 2;
			sl_clamp();
			lsound_play(LSND_DECIDE);
		} else if (press & (K_B | K_BACK)) {
			lsound_play(LSND_CANCEL);
			lsound_music_stop();
			log_printf(C_WHITE, "STORY: CLOSED, THE MUSIC WENT ROUND %u TIMES", lsound_music_loops());
			go(ST_STORY_OUT);
		} else if (press & (K_LB | K_RB)) { /* the previous / next slide, wrapping */
			sl_target = (sl_target + n + (press & K_LB ? -1 : 1)) % n;
			lsound_play(LSND_CURSOR);
		} else if (press & K_Y) {
			sl_overlay ^= 1;
		}
		if (state == ST_STORY_VIEW) {
			if (sl_zoom) { /* zoomed: the d-pad moves the picture (held) */
				sl_vx += (pad_held & K_RIGHT ? SL_PAN : 0) - (pad_held & K_LEFT ? SL_PAN : 0);
				sl_vy += (pad_held & K_DOWN ? SL_PAN : 0) - (pad_held & K_UP ? SL_PAN : 0);
			} else { /* a tall slide: UP / DOWN scroll it (held) */
				sl_vy += (pad_held & K_DOWN ? SL_STEP : 0) - (pad_held & K_UP ? SL_STEP : 0);
			}
			sl_clamp();
		}
		break;
	case ST_STORY_OUT:
		if (state_t >= GAL_FADE) {
			sel = IT_STORY;
			go(ST_MODE);
		}
		break;
	}
}

/* the slide on show at fade f (0..1): each chunk the view reads, where the view shows it; black where it is not
 * decoded yet */
static void sl_draw(float f)
{
	const float k = sl_k(), vw = sl_vw(), vh = sl_vh(), oy = (720 - 720 * (canvas_w / SL_W)) / 2;
	const int n = sl_idx[sl_cur].chunks;
	int c;

	for (c = 0; c < n; c++) {
		const float top = (float)c * SL_H, bot = top + SL_H;
		const float y0 = top > sl_vy ? top : sl_vy, y1 = bot < sl_vy + vh ? bot : sl_vy + vh;
		const int t = sl_find(sl_cur, c);
		if (y1 <= y0 || t < 0)
			continue;
		use(&t_story[t], 1);
		quad(0, oy + (y0 - sl_vy) * k, canvas_w, oy + (y1 - sl_vy) * k, sl_vx / SL_W, (y0 - top) / SL_H,
		     (sl_vx + vw) / SL_W, (y1 - top) / SL_H, rgba(f, f, f, 1));
	}
}

/* the label window (Y): the slide's label and its number, in the PS2's window at the bottom left */
static void sl_window(float f)
{
	/* test 122 (user: "the story guide on the lower left is too large, covering the images partially"): about half the
	 * size, text at x1 (the label in yellow, "n / N" in grey below it), 12 px from the left and bottom edges */
	const float x = 12, y = 720 - 12 - 56;
	char t[24];
	float w;

	snprintf(t, sizeof(t), "%u / %u", (unsigned)sl_cur + 1, sl_n);
	w = text_w(sl_idx[sl_cur].label, 1) > text_w(t, 1) ? text_w(sl_idx[sl_cur].label, 1) : text_w(t, 1);
	w += 28; /* test 122: as wide as its longer line (a label is up to 29 letters) */
	nine(x, y, w, 56, 1, 1, rgba(f, f, f, 1));
	text(x + 14, y + 10, sl_idx[sl_cur].label, 1, rgba(YELLOW.r * f, YELLOW.g * f, YELLOW.b * f, 1));
	text(x + 14, y + 30, t, 1, rgba(GREY.r * f, GREY.g * f, GREY.b * f, 1));
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
		if ((press & K_X) && sel == IT_STORY) { /* test 121: STORY's language (the session's) */
			story_lang ^= 1;
			lsound_play(LSND_CURSOR);
			log_printf(C_WHITE, "STORY: %s", story_lang ? "JAPANESE" : "ENGLISH");
		} else if (press & (K_UP | K_DOWN)) {
			sel = it_move(sel, press & K_UP ? -1 : 1);
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
			} else if (sel == IT_STORY) { /* test 121 */
				lsound_play(LSND_DECIDE);
				log_printf(C_WHITE, "LAUNCHER: STORY (%s)", story_lang ? "JA" : "EN");
				sl_enter();
				go(ST_STORY_ENTER);
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
	case ST_STORY_ENTER: /* test 121 */
	case ST_STORY_IN:
	case ST_STORY_VIEW:
	case ST_STORY_OUT:
		story_step(press, rep);
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
	case ST_STORY_ENTER: { /* test 121: STORY's gate, as the gallery's: black over MODE SELECT, NOW LOADING on it */
		const float a = (float)state_t / GAL_FADE;
		if (state_t == 0)
			tick_c = 0;
		if (ps2) {
			rot = tate;
			draw_mode();
			rot = 0;
		} else {
			draw_plain();
		}
		fade(a);
		ticker((state_t + 1) * 8 / 255.0f);
		break;
	}
	case ST_STORY_IN: /* the slide from black, the gate's NOW LOADING going */
		sl_draw((float)state_t / GAL_FADE);
		if (sl_overlay)
			sl_window((float)state_t / GAL_FADE);
		ticker(1.0f - (state_t + 1) * 8 / 255.0f);
		break;
	case ST_STORY_VIEW:
		sl_draw(1);
		if (sl_overlay)
			sl_window(1);
		break;
	case ST_STORY_OUT: {
		const float f = 1.0f - (float)state_t / GAL_FADE;
		sl_draw(f);
		if (sl_overlay)
			sl_window(f);
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
		gal_ready = music_ready = story_ready = -1; /* test 121: no STORY either */
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

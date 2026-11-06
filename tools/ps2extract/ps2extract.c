/* ps2extract: ibara360's PS2 data from the user's own Ibara PS2 disc (SLPM-66301), test 97 (user 2026-10-31: "the user
 * will still need a ps2 ibara iso to extract the ost, gallery, and other necessary files for the launcher and menus,
 * develop an easy-to-use offline tool for that").
 *
 * Drag the disc's ISO onto ps2extract.exe (or run it and pick the file). It reads the ISO's file system itself, finds
 * IBARAR.PDM, IBARAR.TBL, ALLIMAGE.DAT and SLPM_663.01, checks them by size and CRC32 against the disc ibara360 was made
 * with, and writes, into a folder beside the ISO:
 *   ps2data.bin    the launcher's and the games' PS2 pictures and sounds, the gallery, the soundtrack's table
 *                  (source/ps2data.h has the format; work/g97/ps2data/REPORT.md)
 *   ps2music.bin   the soundtrack's 16 streams as the disc has them (IBARAR.TBL files 1113-1128), for a later test
 * Copy both beside ibara360.xex, ibara.xex, ibarablk.xex and ibaraarr.xex.
 *
 * Everything here is the C of the Python generators (tools/launcher/mklaunch.py, mkgallery.py, tools/card/mkticker.py,
 * mkloading.py, tools/arrange/mkhud.py, mkgfx.py with work/arrgfx's conv944.py / conv876.py / bullets/gen.py), their
 * cuts as tools/ps2extract/recipe.h (mkrecipe.py). Nothing of the disc is inside this program.
 *
 * Build: tools/ps2extract/build.sh (mingw-w64 in Docker; zlib 1.2.11 from host/xsdk/ibara360/zlib). */
#include <ctype.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#ifdef _WIN32
#include <direct.h>
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
#define MKDIR(p) _mkdir(p)
#define FSEEK _fseeki64
#define STAT _stat64
#define STAT_T struct _stat64
#define PATHSEP '\\'
#else
#include <dirent.h>
#define MKDIR(p) mkdir(p, 0777)
#define FSEEK fseeko
#define STAT stat
#define STAT_T struct stat
#define PATHSEP '/'
#endif

#include "zlib.h"

#include "recipe.h"

#define TOOL_VERSION 4 /* 2 (backlog 2e, 2026-10-31): la.title_v, the launcher's TATE title; 3 (test 98): font.jp8;
                        * 4 (test 99): p43.*, the 4:3 GADGETS panels' PS2 layers (make_p43) */
#define DATA_MAGIC "IB360PS2"
#define DATA_VERSION 1

/* ---- messages ------------------------------------------------------------------------------------------------------ */

static int pause_at_end = 1;

static void say(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vprintf(fmt, ap);
	va_end(ap);
	fflush(stdout);
}

static void wait_key(void)
{
	if (pause_at_end) {
		say("\nPress Enter to close this window.");
		getchar();
	}
}

static void die(const char *fmt, ...)
{
	va_list ap;

	printf("\nERROR: ");
	va_start(ap, fmt);
	vprintf(fmt, ap);
	va_end(ap);
	printf("\n");
	wait_key();
	exit(1);
}

static void *xmalloc(size_t n)
{
	void *p = calloc(1, n ? n : 1);
	if (!p)
		die("out of memory (%lu bytes).", (unsigned long)n);
	return p;
}

/* zlib's compress2 at level 9 (compress.c is not in host/xsdk/ibara360/zlib): a new buffer, *zn its bytes */
static uint8_t *zcomp(const void *raw, uint32_t n, uint32_t *zn)
{
	z_stream z;
	uint8_t *o;
	uLong cap;

	memset(&z, 0, sizeof(z));
	if (deflateInit(&z, 9) != Z_OK)
		die("zlib did not start.");
	cap = deflateBound(&z, n);
	o = xmalloc(cap);
	z.next_in = (Bytef *)raw;
	z.avail_in = n;
	z.next_out = o;
	z.avail_out = (uInt)cap;
	if (deflate(&z, Z_FINISH) != Z_STREAM_END)
		die("zlib failed.");
	*zn = (uint32_t)z.total_out;
	deflateEnd(&z);
	return o;
}

static uint32_t rd32le(const uint8_t *p)
{
	return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}

static uint32_t rd32be(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static uint16_t rd16le(const uint8_t *p)
{
	return (uint16_t)(p[0] | p[1] << 8);
}

static void wr32be(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static void wr16be(uint8_t *p, unsigned v)
{
	p[0] = (uint8_t)(v >> 8);
	p[1] = (uint8_t)v;
}

/* ---- the disc: an ISO 9660 image (2048-byte sectors, or 2352-byte raw ones) or a folder of its files -------------- */

struct dfile {
	const char *name;
	uint32_t size, crc;   /* the user's copy ibara360 was made from */
	int found;
	uint64_t lba, bytes;  /* ISO: its extent; a folder: bytes only */
	char path[1024];      /* a folder: its path */
};
enum { F_PDM, F_TBL, F_ALL, F_ELF, F_CNF, F_N };
static struct dfile dfiles[F_N] = {
	{"IBARAR.PDM", 241377288u, 0xF0A452FEu},
	{"IBARAR.TBL", 18100u, 0xA286422Cu},
	{"ALLIMAGE.DAT", 1555136u, 0xC09F7BEDu},
	{"SLPM_663.01", 2329648u, 0xF9085060u},
	{"SYSTEM.CNF", 107u, 0xAF0137FAu},
};

static FILE *iso;
static int is_dir;
static unsigned sec_size = 2048, sec_off; /* the image's sector size and where its 2048 user bytes start */

static int read_sector(uint64_t lba, uint8_t *b)
{
	if (FSEEK(iso, (int64_t)(lba * sec_size + sec_off), SEEK_SET))
		return -1;
	return fread(b, 1, 2048, iso) == 2048 ? 0 : -1;
}

/* n bytes of disc file f from its byte off */
static void dread(int f, uint64_t off, void *dst, size_t n)
{
	struct dfile *d = &dfiles[f];
	uint8_t *o = dst;

	if (off + n > d->bytes)
		die("%s: a read past its end (offset %llu, %lu bytes).", d->name, (unsigned long long)off, (unsigned long)n);
	if (is_dir) {
		FILE *fp = fopen(d->path, "rb");
		if (!fp || FSEEK(fp, (int64_t)off, SEEK_SET) || fread(o, 1, n, fp) != n)
			die("could not read %s.", d->path);
		fclose(fp);
		return;
	}
	if (sec_size == 2048) {
		if (FSEEK(iso, (int64_t)(d->lba * 2048 + off), SEEK_SET) || fread(o, 1, n, iso) != n)
			die("could not read %s from the disc image (is the ISO complete?).", d->name);
		return;
	}
	while (n) {
		uint8_t s[2048];
		const uint64_t lba = d->lba + off / 2048;
		const size_t k = (size_t)(off % 2048), m = n < 2048 - k ? n : 2048 - k;
		if (read_sector(lba, s))
			die("could not read %s from the disc image (is the image complete?).", d->name);
		memcpy(o, s + k, m);
		o += m;
		off += m;
		n -= m;
	}
}

static uint8_t *dread_all(int f)
{
	uint8_t *b = xmalloc((size_t)dfiles[f].bytes);
	dread(f, 0, b, (size_t)dfiles[f].bytes);
	return b;
}

static int name_is(const uint8_t *id, int n, const char *want)
{
	int i, w = (int)strlen(want);

	for (i = 0; i < n && id[i] != ';'; i++)
		;
	if (i > 0 && id[i - 1] == '.') /* "NAME." with no extension */
		i--;
	if (i != w)
		return 0;
	for (i = 0; i < w; i++)
		if (toupper(id[i]) != toupper((unsigned char)want[i]))
			return 0;
	return 1;
}

static void open_iso(const char *path)
{
	static const unsigned sizes[3][2] = {{2048, 0}, {2352, 16}, {2352, 24}};
	uint8_t s[2048];
	uint32_t root_lba, root_len, pos;
	int k;

	iso = fopen(path, "rb");
	if (!iso)
		die("could not open \"%s\".", path);
	for (k = 0; k < 3; k++) {
		sec_size = sizes[k][0];
		sec_off = sizes[k][1];
		if (!read_sector(16, s) && s[0] == 1 && !memcmp(s + 1, "CD001", 5))
			break;
	}
	if (k == 3)
		die("\"%s\" is not a disc image (no ISO 9660 file system in it).\n"
		    "Use an ISO made from the Ibara PS2 disc (SLPM-66301), e.g. with ImgBurn's \"Create image file from disc\".",
		    path);
	say("  %s image, %u-byte sectors, volume \"%.32s\"\n", k ? "Raw" : "ISO 9660", sec_size, (const char *)s + 40);
	root_lba = rd32le(s + 156 + 2);
	root_len = rd32le(s + 156 + 10);
	for (pos = 0; pos < root_len; pos += 2048) {
		uint8_t d[2048];
		unsigned i = 0;
		if (read_sector(root_lba + pos / 2048, d))
			die("could not read the disc image's root folder.");
		while (i < 2048 && d[i]) {
			const unsigned len = d[i], nl = d[i + 32];
			int f;
			if (len < 34 || i + len > 2048)
				break;
			for (f = 0; f < F_N; f++)
				if (!dfiles[f].found && !(d[i + 25] & 2) && name_is(d + i + 33, (int)nl, dfiles[f].name)) {
					dfiles[f].found = 1;
					dfiles[f].lba = rd32le(d + i + 2);
					dfiles[f].bytes = rd32le(d + i + 10);
				}
			i += len;
		}
	}
}

static void open_dir(const char *path)
{
	int f;

	is_dir = 1;
	for (f = 0; f < F_N; f++) {
		STAT_T st;
		snprintf(dfiles[f].path, sizeof(dfiles[f].path), "%s%c%s", path, PATHSEP, dfiles[f].name);
		if (!STAT(dfiles[f].path, &st)) {
			dfiles[f].found = 1;
			dfiles[f].bytes = (uint64_t)st.st_size;
		}
	}
}

static uint32_t file_crc(int f)
{
	const size_t chunk = 1u << 22;
	uint8_t *b = xmalloc(chunk);
	uint64_t at = 0;
	uint32_t crc = 0;
	unsigned last = 101;

	while (at < dfiles[f].bytes) {
		const size_t n = dfiles[f].bytes - at < chunk ? (size_t)(dfiles[f].bytes - at) : chunk;
		const unsigned pc = (unsigned)(at * 100 / dfiles[f].bytes);
		dread(f, at, b, n);
		crc = (uint32_t)crc32(crc, b, (uInt)n);
		at += n;
		if (f == F_PDM && pc / 10 != last / 10) {
			say("\r  checking %s ... %u%%", dfiles[f].name, pc);
			last = pc;
		}
	}
	free(b);
	return crc;
}

static void check_disc(void)
{
	int f, bad = 0;

	for (f = 0; f < F_N; f++)
		if (!dfiles[f].found)
			die("%s is not on this disc. This tool needs the Japanese Ibara PS2 disc (SLPM-66301).", dfiles[f].name);
	for (f = 0; f < F_N; f++) {
		const uint32_t crc = file_crc(f);
		const int ok = dfiles[f].bytes == dfiles[f].size && crc == dfiles[f].crc;
		say("\r  %-13s %10llu bytes  CRC32 %08X  %s\n", dfiles[f].name, (unsigned long long)dfiles[f].bytes,
		    (unsigned)crc, ok ? "matches" : "DIFFERS");
		bad += !ok;
	}
	if (bad)
		die("this disc's files are not the ones ibara360 knows (Ibara, SLPM-66301, VER 1.02: SYSTEM.CNF, the\n"
		    "files above). The pictures are cut at fixed places, so a different version would give wrong ones.\n"
		    "If the image may be damaged, make it again from the disc.");
}

/* ---- the data file being made -------------------------------------------------------------------------------------- */

enum { K_RAW, K_ARGB32, K_S16, K_ARGB1555, K_TABLE };
struct blob {
	char name[32];
	uint8_t *data; /* stored bytes */
	uint32_t stored, size, crc, extra;
	uint16_t flags, kind, w, h;
	uint64_t music_at; /* ps2music.bin: the stream's PDM offset (copied when written) */
};
static struct blob blobs[256], mblobs[32];
static int nblobs, nmblobs;
static uint64_t raw_total;

static struct blob *add(const char *name, const void *raw, uint32_t n, int kind, int w, int h, uint32_t extra, int z)
{
	struct blob *b = &blobs[nblobs++];

	snprintf(b->name, sizeof(b->name), "%s", name);
	b->size = n;
	b->crc = (uint32_t)crc32(0, raw, n);
	b->kind = (uint16_t)kind;
	b->w = (uint16_t)w;
	b->h = (uint16_t)h;
	b->extra = extra;
	raw_total += n;
	if (z) {
		b->data = zcomp(raw, n, &b->stored);
		b->flags = 1;
	} else {
		b->data = xmalloc(n);
		memcpy(b->data, raw, n);
		b->stored = n;
	}
	return b;
}

static void write_container(const char *path, struct blob *bl, int n, unsigned align, int from_pdm, const char *label)
{
	uint8_t head[64], e[64];
	uint64_t at;
	uint32_t data_at;
	int i;
	FILE *f = fopen(path, "wb");

	if (!f)
		die("could not write \"%s\" (is the folder writable? is the file open in another program?).", path);
	data_at = (uint32_t)((64 + 64 * n + align - 1) / align * align);
	memset(head, 0, sizeof(head));
	memcpy(head, DATA_MAGIC, 8);
	wr32be(head + 8, DATA_VERSION);
	wr32be(head + 12, (uint32_t)n);
	wr32be(head + 16, 64);
	wr32be(head + 20, data_at);
	wr32be(head + 24, TOOL_VERSION);
	wr32be(head + 28, dfiles[F_TBL].crc);
	snprintf((char *)head + 32, 32, "%s", label);
	fwrite(head, 1, 64, f);
	at = data_at;
	for (i = 0; i < n; i++) {
		memset(e, 0, sizeof(e));
		memcpy(e, bl[i].name, strlen(bl[i].name));
		wr32be(e + 32, (uint32_t)at);
		wr32be(e + 36, bl[i].stored);
		wr32be(e + 40, bl[i].size);
		wr32be(e + 44, bl[i].crc);
		wr16be(e + 48, bl[i].flags);
		wr16be(e + 50, bl[i].kind);
		wr16be(e + 52, bl[i].w);
		wr16be(e + 54, bl[i].h);
		wr32be(e + 56, bl[i].extra);
		fwrite(e, 1, 64, f);
		at = (at + bl[i].stored + align - 1) / align * align;
	}
	at = data_at;
	for (i = 0; i < n; i++) {
		uint8_t pad[2048] = {0};
		const long here = ftell(f);
		if ((uint64_t)here < at)
			fwrite(pad, 1, (size_t)(at - (uint64_t)here), f);
		if (from_pdm) { /* a stream: copied from IBARAR.PDM a piece at a time */
			const size_t chunk = 1u << 22;
			uint8_t *b = xmalloc(chunk);
			uint32_t done = 0, crc = 0;
			while (done < bl[i].stored) {
				const size_t m = bl[i].stored - done < chunk ? bl[i].stored - done : chunk;
				dread(F_PDM, bl[i].music_at + done, b, m);
				crc = (uint32_t)crc32(crc, b, (uInt)m);
				if (fwrite(b, 1, m, f) != m)
					die("could not write \"%s\" (is the disc full?).", path);
				done += (uint32_t)m;
			}
			free(b);
			if (crc != bl[i].crc)
				die("%s read differently twice (a bad disc image or drive?).", bl[i].name);
			say("\r  ps2music.bin: stream %d of %d ", i + 1, n);
		} else if (fwrite(bl[i].data, 1, bl[i].stored, f) != bl[i].stored) {
			die("could not write \"%s\" (is the disc full?).", path);
		}
		at = (at + bl[i].stored + align - 1) / align * align;
	}
	if (fclose(f))
		die("could not finish \"%s\" (is the disc full?).", path);
	if (from_pdm)
		say("\n");
}

/* ---- TIM2 pictures (tools/card/ps2art.py's tim2_at) ----------------------------------------------------------------- */

struct pic {
	int w, h;
	uint8_t *px; /* R G B A */
};

static uint8_t *pdm;      /* IBARAR.PDM's pictures are read from it as asked */
static uint32_t pdm_off[1130], pdm_size[1130];

static void colors(const uint8_t *raw, uint32_t bytes, int ctype, uint8_t *out, uint32_t *count)
{
	uint32_t i, n;

	if (ctype == 3) {
		n = bytes / 4;
		for (i = 0; i < n; i++) {
			const int a = raw[4 * i + 3] * 255 / 128;
			out[4 * i] = raw[4 * i];
			out[4 * i + 1] = raw[4 * i + 1];
			out[4 * i + 2] = raw[4 * i + 2];
			out[4 * i + 3] = (uint8_t)(a > 255 ? 255 : a);
		}
	} else if (ctype == 2) {
		n = bytes / 3;
		for (i = 0; i < n; i++) {
			out[4 * i] = raw[3 * i];
			out[4 * i + 1] = raw[3 * i + 1];
			out[4 * i + 2] = raw[3 * i + 2];
			out[4 * i + 3] = 255;
		}
	} else {
		n = bytes / 2;
		for (i = 0; i < n; i++) {
			const unsigned v = rd16le(raw + 2 * i);
			out[4 * i] = (uint8_t)((v & 31) << 3);
			out[4 * i + 1] = (uint8_t)(((v >> 5) & 31) << 3);
			out[4 * i + 2] = (uint8_t)(((v >> 10) & 31) << 3);
			out[4 * i + 3] = (v & 0x8000) ? 255 : 0;
		}
	}
	*count = n;
}

static struct pic tim2(uint32_t off)
{
	uint8_t h[128], hd[48];
	struct pic p;
	uint32_t clutsz, imgsz, hsz, base, ncl = 0, npx, i;
	int ctype, itype;
	uint8_t *img, *clut, *cl = NULL;

	dread(F_PDM, off, h, 16);
	if (memcmp(h, "TIM2", 4))
		die("no TIM2 picture at 0x%X of IBARAR.PDM (not the disc this tool knows).", (unsigned)off);
	base = off + (h[5] ? 128 : 16);
	dread(F_PDM, base, hd, 24);
	clutsz = rd32le(hd + 4);
	imgsz = rd32le(hd + 8);
	hsz = rd16le(hd + 12);
	ctype = hd[18];
	itype = hd[19];
	p.w = rd16le(hd + 20);
	p.h = rd16le(hd + 22);
	img = xmalloc(imgsz);
	clut = xmalloc(clutsz);
	dread(F_PDM, base + hsz, img, imgsz);
	dread(F_PDM, base + hsz + imgsz, clut, clutsz);
	npx = (uint32_t)p.w * p.h;
	p.px = xmalloc((size_t)npx * 4);
	if (itype >= 1 && itype <= 3) {
		uint8_t *all = xmalloc((size_t)imgsz * 2 + 16);
		colors(img, imgsz, itype, all, &ncl);
		if (ncl < npx)
			die("TIM2 at 0x%X: short picture.", (unsigned)off);
		memcpy(p.px, all, (size_t)npx * 4);
		free(all);
	} else {
		cl = xmalloc((size_t)clutsz * 2 + 16);
		colors(clut, clutsz, ctype & 0x1F, cl, &ncl);
		if (!ncl)
			die("TIM2 at 0x%X: no colours.", (unsigned)off);
		if (itype == 5 && !(ctype & 0x80) && ncl >= 256) { /* CSM1: entries 8-15 and 16-23 of every 32 swapped */
			uint8_t t[32];
			ncl = 256;
			for (i = 0; i < 256; i += 32) {
				memcpy(t, cl + (i + 8) * 4, 32);
				memcpy(cl + (i + 8) * 4, cl + (i + 16) * 4, 32);
				memcpy(cl + (i + 16) * 4, t, 32);
			}
		}
		for (i = 0; i < npx; i++) {
			uint32_t idx;
			if (itype == 5)
				idx = i < imgsz ? img[i] : 0;
			else
				idx = i / 2 < imgsz ? (i & 1 ? img[i / 2] >> 4 : img[i / 2] & 15) : 0;
			if (idx > ncl - 1)
				idx = ncl - 1;
			memcpy(p.px + 4 * i, cl + 4 * idx, 4);
		}
		free(cl);
	}
	free(img);
	free(clut);
	return p;
}

/* the TIM2 pictures the recipe cuts, decoded once */
static struct {
	uint32_t off;
	struct pic p;
} tcache[64];
static int ntcache;

static const struct pic *tim_c(uint32_t off)
{
	int i;

	for (i = 0; i < ntcache; i++)
		if (tcache[i].off == off)
			return &tcache[i].p;
	if (ntcache == 64)
		die("too many pictures.");
	tcache[ntcache].off = off;
	tcache[ntcache].p = tim2(off);
	return &tcache[ntcache++].p;
}

static struct pic pic_new(int w, int h)
{
	struct pic p;

	p.w = w;
	p.h = h;
	p.px = xmalloc((size_t)w * h * 4);
	return p;
}

/* src's pixel at x, y (clear outside it, as PIL's crop) */
static const uint8_t *px_at(const struct pic *s, int x, int y)
{
	static const uint8_t clear[4];
	return x < 0 || y < 0 || x >= s->w || y >= s->h ? clear : s->px + ((size_t)y * s->w + x) * 4;
}

/* PIL's alpha_composite (libImaging/AlphaComposite.c) of src over dst, one pixel */
static void over(uint8_t *d, const uint8_t *s)
{
	if (s[3] == 0) {
		return;
	} else if (d[3] == 0 || s[3] == 255) {
		/* dst clear: PIL's blend gives src exactly (its coef1 = 255 << 7, shift-divided back) */
		memcpy(d, s, 4);
	} else {
		const unsigned blend = d[3] * (255 - s[3]), outa255 = s[3] * 255 + blend;
		const unsigned coef1 = s[3] * 255 * 255 * (1u << 7) / outa255, coef2 = 255 * (1u << 7) - coef1;
		int c;
		for (c = 0; c < 3; c++) {
			const unsigned t = s[c] * coef1 + d[c] * coef2 + (0x80u << 7);
			d[c] = (uint8_t)((((t >> 8) + t) >> 8) >> 7);
		}
		d[3] = (uint8_t)((outa255 + 0x80 + ((outa255 + 0x80) >> 8)) >> 8);
	}
}

static void run_ops(struct pic *dst, const struct rop *ops, int n)
{
	int i, x, y;

	for (i = 0; i < n; i++) {
		const struct rop *o = &ops[i];
		const struct pic *s = o->mode == 2 ? NULL : tim_c(o->tim);
		for (y = 0; y < o->h; y++)
			for (x = 0; x < o->w; x++) {
				uint8_t *d;
				if (o->dx + x >= dst->w || o->dy + y >= dst->h)
					continue;
				d = dst->px + ((size_t)(o->dy + y) * dst->w + o->dx + x) * 4;
				if (o->mode == 2)
					memset(d, 0, 4);
				else if (o->mode == 1)
					over(d, px_at(s, o->sx + x, o->sy + y));
				else
					memcpy(d, px_at(s, o->sx + x, o->sy + y), 4);
			}
	}
}

/* R G B A -> A R G B bytes (the launcher's textures, the games' words) */
static uint8_t *argb(const struct pic *p, int x0, int y0, int w, int h)
{
	uint8_t *o = xmalloc((size_t)w * h * 4);
	int x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++) {
			const uint8_t *s = px_at(p, x0 + x, y0 + y);
			uint8_t *d = o + ((size_t)y * w + x) * 4;
			d[0] = s[3];
			d[1] = s[0];
			d[2] = s[1];
			d[3] = s[2];
		}
	return o;
}

/* ---- the launcher (mklaunch.py) ------------------------------------------------------------------------------------ */

#define ATLAS_W 512
#define ATLAS_H 1024
static struct pic atlas;

static void make_launcher(void)
{
	static const uint8_t lut[4][4] = {{0, 0, 0, 0}, {42, 42, 42, 255}, {152, 152, 152, 255}, {253, 253, 253, 255}};
	struct pic title = pic_new(640, 448), mode = pic_new(640, 448), title_v = pic_new(640, 896);
	uint8_t *all, *b;
	size_t i;
	int x, y;

	say("  the launcher's pictures ...\n");
	atlas = pic_new(ATLAS_W, ATLAS_H);
	run_ops(&title, rop_title, (int)(sizeof(rop_title) / sizeof(rop_title[0])));
	run_ops(&mode, rop_mode, (int)(sizeof(rop_mode) / sizeof(rop_mode[0])));
	run_ops(&atlas, rop_atlas, (int)(sizeof(rop_atlas) / sizeof(rop_atlas[0])));
	run_ops(&title_v, rop_title_v, (int)(sizeof(rop_title_v) / sizeof(rop_title_v[0])));
	for (i = 0; i < 640 * 448; i++)
		if (title.px[i * 4 + 3] != 255 || mode.px[i * 4 + 3] != 255)
			die("the backgrounds have holes (not the disc this tool knows).");
	for (i = 0; i < 640 * 896; i++)
		if (title_v.px[i * 4 + 3] != 255)
			die("the TATE title has holes (not the disc this tool knows).");
	/* ALLIMAGE.DAT's 26 x 26 glyphs: 4418 cells of 352 bytes, 26 rows of 13 bytes, two 2-bit layers a 4-bit pixel */
	all = dread_all(F_ALL);
	for (i = 0; i < sizeof(rglyphs) / sizeof(rglyphs[0]); i++) {
		const struct rglyph *g = &rglyphs[i];
		const uint8_t *c = all + (size_t)g->cell * 352;
		for (y = 0; y < 26; y++)
			for (x = 0; x < g->w; x++) {
				const unsigned nib = x & 1 ? c[y * 13 + x / 2] >> 4 : c[y * 13 + x / 2] & 15;
				memcpy(atlas.px + ((size_t)(g->y + y) * ATLAS_W + g->x + x) * 4, lut[(nib >> g->layer) & 3], 4);
			}
	}
	free(all);
	b = argb(&title, 0, 0, 640, 448);
	add("la.title", b, 640 * 448 * 4, K_ARGB32, 640, 448, 0, 1);
	free(b);
	b = argb(&mode, 0, 0, 640, 448);
	add("la.mode", b, 640 * 448 * 4, K_ARGB32, 640, 448, 0, 1);
	free(b);
	/* backlog 2e: the TATE title, the GALLERY's picture 15 whole (files 1016-1019, columns 128-767: the flyer art the
	 * landscape title is the top of) */
	b = argb(&title_v, 0, 0, 640, 896);
	add("la.title_v", b, 640 * 896 * 4, K_ARGB32, 640, 896, 0, 1);
	free(b);
	b = argb(&atlas, 0, 0, ATLAS_W, ATLAS_H);
	add("la.atlas", b, ATLAS_W * ATLAS_H * 4, K_ARGB32, ATLAS_W, ATLAS_H, 0, 1);
	free(b);
	/* card_loading.h's NOW LOADING (mkloading.py): the atlas's LOADING */
	b = argb(&atlas, R_LOADING_X, R_LOADING_Y, R_LOADING_W, R_LOADING_H);
	add("loading", b, R_LOADING_W * R_LOADING_H * 4, K_ARGB32, R_LOADING_W, R_LOADING_H, 0, 1);
	free(b);
	free(title.px);
	free(mode.px);
	free(title_v.px);
}

/* the NOW LOADING ticker (mkticker.py): file 887's band (0,128)-(240,160) and text (0,98)-(240,128) */
static void make_ticker(void)
{
	const struct pic *p = tim_c(0x2B23800);
	uint8_t *b = argb(p, 0, 128, 240, 32);

	add("ticker.band", b, 240 * 32 * 4, K_ARGB32, 240, 32, 0, 1);
	free(b);
	b = argb(p, 0, 98, 240, 30);
	add("ticker.text", b, 240 * 30 * 4, K_ARGB32, 240, 30, 0, 1);
	free(b);
}

/* the SE00 bank's six sounds, PS-ADPCM to int16 (mklaunch.py's vag_decode) */
static void make_sounds(void)
{
	static const int f0[5] = {0, 60, 115, 98, 122}, f1[5] = {0, 0, -52, -55, -60};
	const uint32_t bank_at = 0xE46C800, bank_n = 0x1C5808;
	uint8_t *bank = xmalloc(bank_n);
	uint32_t data0;
	size_t i;

	say("  the launcher's sounds ...\n");
	dread(F_PDM, bank_at, bank, bank_n);
	if (memcmp(bank, "SE00", 4))
		die("no sound bank where it should be (not the disc this tool knows).");
	data0 = rd32le(bank + 4);
	for (i = 0; i < sizeof(rsounds) / sizeof(rsounds[0]); i++) {
		const uint32_t a = rd32le(bank + 12 + 8 * rsounds[i].entry);
		const uint8_t *v = bank + data0 + a, *body;
		uint32_t size, o, n = 0;
		int16_t *out;
		uint8_t *be;
		int h1 = 0, h2 = 0, k;
		char name[32];
		if (data0 + a + 48 > bank_n || memcmp(v, "VAGp", 4) || rd32be(v + 16) != 16000)
			die("sound %s is not where it should be.", rsounds[i].name);
		size = rd32be(v + 12);
		body = v + 48;
		if (data0 + a + 48 + size > bank_n)
			die("sound %s runs past the bank.", rsounds[i].name);
		out = xmalloc((size_t)(size / 16 + 1) * 28 * sizeof(*out));
		for (o = 0; o + 15 < size; o += 16) {
			const int b0 = body[o], fl = body[o + 1];
			const int f = b0 >> 4 <= 4 ? b0 >> 4 : 0, sh = (b0 & 15) <= 12 ? b0 & 15 : 9;
			for (k = 2; k < 16; k++) {
				int t;
				for (t = 0; t < 2; t++) {
					const int nb = t ? body[o + k] >> 4 : body[o + k] & 15, sv = nb >= 8 ? nb - 16 : nb;
					int s = ((sv * 4096) >> sh) + ((h1 * f0[f] + h2 * f1[f] + 32) >> 6);
					s = s < -32768 ? -32768 : s > 32767 ? 32767 : s;
					h2 = h1;
					h1 = s;
					out[n++] = (int16_t)s;
				}
			}
			if (fl & 1)
				break;
		}
		be = xmalloc((size_t)n * 2);
		for (o = 0; o < n; o++)
			wr16be(be + 2 * o, (uint16_t)out[o]);
		snprintf(name, sizeof(name), "la.snd.%s", rsounds[i].name);
		add(name, be, n * 2, K_S16, 0, 0, 16000, 1);
		free(be);
		free(out);
	}
	free(bank);
}

/* ---- the gallery (mkgallery.py) ------------------------------------------------------------------------------------ */

static int cmp_u32(const void *a, const void *b)
{
	const uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b;
	return x < y ? -1 : x > y;
}

struct gent {
	uint32_t zlen;
	uint16_t w, h, fmt, ncol, ww, wh, x, y;
	uint8_t *z;
};

static void gal_add(struct gent *e, const struct pic *p, int x0, int y0, int w, int h, int fmt, int ww, int wh)
{
	size_t n, i;
	uint8_t *raw;
	int x, y;

	if (fmt == 1) {
		n = (size_t)w * h * 2;
		raw = xmalloc(n);
		for (y = 0; y < h; y++)
			for (x = 0; x < w; x++) {
				const uint8_t *s = px_at(p, x0 + x, y0 + y);
				if ((s[0] | s[1] | s[2]) & 7)
					die("a gallery picture is not 5 bits a channel.");
				wr16be(raw + ((size_t)y * w + x) * 2, (unsigned)(s[0] >> 3) << 10 | (unsigned)(s[1] >> 3) << 5 | s[2] >> 3);
			}
		e->ncol = 0;
	} else { /* numpy.unique(axis=0): the colours sorted R, G, B, A; the palette A = 255 */
		const size_t np = (size_t)w * h;
		uint32_t *keys = xmalloc(np * 4), *u;
		size_t nu = 0;
		for (y = 0; y < h; y++)
			for (x = 0; x < w; x++) {
				const uint8_t *s = px_at(p, x0 + x, y0 + y);
				keys[(size_t)y * w + x] = (uint32_t)s[0] << 24 | (uint32_t)s[1] << 16 | (uint32_t)s[2] << 8 | s[3];
			}
		u = xmalloc(np * 4);
		memcpy(u, keys, np * 4);
		qsort(u, np, 4, cmp_u32);
		for (i = 0; i < np; i++)
			if (!nu || u[nu - 1] != u[i])
				u[nu++] = u[i];
		if (nu > 256)
			die("a gallery picture has more than 256 colours.");
		n = nu * 4 + np;
		raw = xmalloc(n);
		for (i = 0; i < nu; i++) {
			raw[4 * i] = 255;
			raw[4 * i + 1] = (uint8_t)(u[i] >> 24);
			raw[4 * i + 2] = (uint8_t)(u[i] >> 16);
			raw[4 * i + 3] = (uint8_t)(u[i] >> 8);
		}
		for (i = 0; i < np; i++) {
			size_t lo = 0, hi = nu - 1;
			while (lo < hi) {
				const size_t m = (lo + hi) / 2;
				if (u[m] < keys[i])
					lo = m + 1;
				else
					hi = m;
			}
			raw[nu * 4 + i] = (uint8_t)lo;
		}
		e->ncol = (uint16_t)nu;
		free(keys);
		free(u);
	}
	e->z = zcomp(raw, (uint32_t)n, &e->zlen);
	e->w = (uint16_t)w;
	e->h = (uint16_t)h;
	e->fmt = (uint16_t)fmt;
	e->ww = (uint16_t)ww;
	e->wh = (uint16_t)wh;
	e->x = (uint16_t)x0;
	e->y = (uint16_t)y0;
	free(raw);
}

static void make_gallery(void)
{
	static struct gent ge[5 + 78];
	uint8_t *out, *q;
	uint32_t pos, total;
	int s, n, k, x, y;

	say("  the gallery's 5 sheets and 78 pictures ...\n");
	for (s = 0; s < 5; s++) {
		struct pic p = tim2(pdm_off[955 + s]);
		for (y = 0; y < 432; y++)
			for (x = 0; x < 420; x++)
				if (px_at(&p, x, y)[3] != 255)
					die("a gallery sheet has a hole.");
		gal_add(&ge[s], &p, 0, 0, 420, 432, 1, 420, 432);
		ge[s].x = ge[s].y = 0;
		free(p.px);
	}
	for (n = 0; n < 78; n++) {
		struct pic whole;
		int fmt, x0 = 1 << 30, y0 = 1 << 30, x1 = -1, y1 = -1;
		if (n < 25) {
			whole = pic_new(896, 896);
			for (k = 0; k < 4; k++) {
				struct pic t = tim2(pdm_off[960 + 4 * n + k]);
				for (y = 0; y < 448; y++)
					for (x = 0; x < 448; x++)
						memcpy(whole.px + ((size_t)((k >> 1) * 448 + y) * 896 + (k & 1) * 448 + x) * 4, px_at(&t, x, y), 4);
				free(t.px);
			}
			fmt = 1;
		} else {
			whole = tim2(pdm_off[1035 + n]);
			fmt = 2;
		}
		for (y = 0; y < whole.h; y++)
			for (x = 0; x < whole.w; x++)
				if (whole.px[((size_t)y * whole.w + x) * 4 + 3] == 255) {
					x0 = x < x0 ? x : x0;
					y0 = y < y0 ? y : y0;
					x1 = x > x1 ? x : x1;
					y1 = y > y1 ? y : y1;
				}
		if (x1 < 0)
			die("gallery picture %d is empty.", n + 1);
		for (y = y0; y <= y1; y++)
			for (x = x0; x <= x1; x++)
				if (whole.px[((size_t)y * whole.w + x) * 4 + 3] != 255)
					die("gallery picture %d: its opaque part is not a rectangle.", n + 1);
		gal_add(&ge[5 + n], &whole, x0, y0, x1 + 1 - x0, y1 + 1 - y0, fmt, whole.w, whole.h);
		free(whole.px);
		if (n % 13 == 12)
			say("    %d of 78\n", n + 1);
	}
	pos = 16 + 24 * (5 + 78);
	total = pos;
	for (k = 0; k < 5 + 78; k++)
		total += ge[k].zlen;
	out = xmalloc(total);
	memcpy(out, "IBGL", 4);
	wr32be(out + 4, 1);
	wr32be(out + 8, 5);
	wr32be(out + 12, 78);
	for (k = 0; k < 5 + 78; k++) {
		q = out + 16 + 24 * k;
		wr32be(q, pos);
		wr32be(q + 4, ge[k].zlen);
		wr16be(q + 8, ge[k].w);
		wr16be(q + 10, ge[k].h);
		wr16be(q + 12, ge[k].fmt);
		wr16be(q + 14, ge[k].ncol);
		wr16be(q + 16, ge[k].ww);
		wr16be(q + 18, ge[k].wh);
		wr16be(q + 20, ge[k].x);
		wr16be(q + 22, ge[k].y);
		memcpy(out + pos, ge[k].z, ge[k].zlen);
		pos += ge[k].zlen;
		free(ge[k].z);
	}
	add("gallery", out, total, K_RAW, 0, 0, 0, 0);
	free(out);
}

/* ---- ARRANGE (mkgfx.py's pictures: conv944.py, conv876.py, bullets/gen.py; mkhud.py's box) ------------------------ */

/* PDM page n (256 x 256) turned into the arcade's orientation (numpy.rot90(page, 3)): arcade (row i, column j) =
 * page (x = i, y = 255 - j) */
static const uint8_t *arc_px(const struct pic *p, int i, int j)
{
	return px_at(p, i, 255 - j);
}

static void put1555(uint8_t *o, unsigned v)
{
	wr16be(o, v);
}

/* conv944 / conv876: opaque = alpha >= 128, colour min(31, (c + 4) >> 3) */
static unsigned c5_conv(const uint8_t *s)
{
	unsigned r = (s[0] + 4u) >> 3, g = (s[1] + 4u) >> 3, b = (s[2] + 4u) >> 3;
	r = r > 31 ? 31 : r;
	g = g > 31 ? 31 : g;
	b = b > 31 ? 31 : b;
	return s[3] >= 128 ? 0x8000u | r << 10 | g << 5 | b : 0;
}

/* bullets/gen.py: opaque = alpha > 0, colour min(31, rint(c / 8)) (numpy's rint: halves to even) */
static unsigned rint8(unsigned c)
{
	unsigned q = c >> 3, r = c & 7;
	if (r > 4 || (r == 4 && (q & 1)))
		q++;
	return q > 31 ? 31 : q;
}

static unsigned c5_bullet(const uint8_t *s)
{
	return s[3] > 0 ? 0x8000u | rint8(s[0]) << 10 | rint8(s[1]) << 5 | rint8(s[2]) : 0;
}

static struct pic page256(int file)
{
	struct pic p = tim2(pdm_off[file]);
	if (p.w != 256 || p.h != 256)
		die("PDM file %d is not a 256 x 256 page.", file);
	return p;
}

static void make_arrange(void)
{
	const uint32_t page = 0x20000, raw_n = page + 256 * 12 * 2 + 12 * page;
	uint8_t *raw = xmalloc(raw_n), *o;
	struct pic p;
	int i, j, k;

	say("  ARRANGE's pictures ...\n");
	p = page256(944); /* the ending: rows 0-239, columns 32-255 drawn, the rest clear */
	for (i = 0; i < 256; i++)
		for (j = 0; j < 256; j++)
			put1555(raw + (i * 256 + j) * 2, i < 240 && j >= 32 ? c5_conv(arc_px(&p, i, j)) : 0);
	free(p.px);
	p = page256(876); /* the ranking banner's label: columns 0xA0-0xAB */
	o = raw + page;
	for (i = 0; i < 256; i++)
		for (j = 0; j < 12; j++)
			put1555(o + (i * 12 + j) * 2, c5_conv(arc_px(&p, i, 0xA0 + j)));
	free(p.px);
	o += 256 * 12 * 2;
	for (k = 0; k < 12; k++) { /* BULLET DESIGN: COLOR 920-925, COLORLESS 938-943 */
		p = page256(k < 6 ? 920 + k : 938 + k - 6);
		for (i = 0; i < 256; i++)
			for (j = 0; j < 256; j++)
				put1555(o + (i * 256 + j) * 2, c5_bullet(arc_px(&p, i, j)));
		free(p.px);
		o += page;
	}
	add("arr.gfx", raw, raw_n, K_RAW, 0, 0, 0, 1);
	free(raw);
	/* mkhud.py: PDM 96's label box (179, 244) 77 x 12, turned into the framebuffer: [fb y][fb x], 12 wide, 77 tall */
	p = tim2(pdm_off[96]);
	raw = xmalloc(77 * 12 * 2);
	for (i = 0; i < 77; i++)
		for (j = 0; j < 12; j++) {
			const uint8_t *s = px_at(&p, 179 + i, 244 + 11 - j);
			put1555(raw + (i * 12 + j) * 2, (s[3] ? 0x8000u : 0) | (unsigned)(s[0] >> 3) << 10 | (unsigned)(s[1] >> 3) << 5 |
			                                 s[2] >> 3);
		}
	free(p.px);
	add("arr.fbox", raw, 77 * 12 * 2, K_ARGB1555, 12, 77, 0, 1);
	free(raw);
}

/* ---- the soundtrack (IBARAR.TBL files 1113-1128) ------------------------------------------------------------------- */

#define BGM_FIRST 1113
#define BGM_N 16
#define BGM_REC 80

static void make_bgm(int music)
{
	uint8_t tab[BGM_N * BGM_REC], *r;
	uint64_t at = 0;
	int i;

	memset(tab, 0, sizeof(tab));
	if (music) /* ps2music.bin's offsets: its table, then the streams 2048-aligned */
		at = (64 + 64 * BGM_N + 2047) / 2048 * 2048;
	for (i = 0; i < BGM_N; i++) {
		const int f = BGM_FIRST + i;
		uint8_t h[64];
		r = tab + i * BGM_REC;
		dread(F_PDM, pdm_off[f], h, 64);
		if (memcmp(h, "BG00", 4))
			die("soundtrack stream %d is not where it should be.", i);
		wr32be(r, (uint32_t)f);
		wr32be(r + 4, pdm_off[f]);
		wr32be(r + 8, pdm_size[f]);
		wr32be(r + 12, music ? (uint32_t)at : 0);
		memcpy(r + 16, h, 64);
		if (music) {
			struct blob *b = &mblobs[nmblobs++];
			snprintf(b->name, sizeof(b->name), "bgm.%02d", i);
			b->stored = b->size = pdm_size[f];
			b->kind = K_RAW;
			b->music_at = pdm_off[f];
			at = (at + pdm_size[f] + 2047) / 2048 * 2048;
		}
	}
	add("bgm.table", tab, sizeof(tab), K_TABLE, BGM_REC, BGM_N, 0, 0);
}

/* the music streams' CRCs (for the table): read once while the PDM's CRC is checked would be faster; here simply */
static void bgm_crcs(void)
{
	const size_t chunk = 1u << 22;
	uint8_t *b = xmalloc(chunk);
	int i;

	for (i = 0; i < nmblobs; i++) {
		uint32_t done = 0, crc = 0;
		while (done < mblobs[i].size) {
			const size_t m = mblobs[i].size - done < chunk ? mblobs[i].size - done : chunk;
			dread(F_PDM, mblobs[i].music_at + done, b, m);
			crc = (uint32_t)crc32(crc, b, (uInt)m);
			done += (uint32_t)m;
		}
		mblobs[i].crc = crc;
	}
	free(b);
}

/* ---- the PS2 menus' fonts and frames (test 97: work/g97/ps2menu/REPORT.md, tools/ps2menu/ps2fonts.py) ---------------
 * For the later in-game PS2 menu style and the Japanese help lines. All ARGB32 (bytes A R G B, the TIM2's own colours,
 * alpha 0-255 as tools/card/ps2art.py makes it), zlib'd:
 *   font.small   256 x 32   file 1's 8x8 italic font: char c at (8 (c & 31), 8 (c >> 5)), 0x18-0x1F arrows
 *   font.title   256 x 64   file 887's 8x16 font: char c at (8 (c & 31), 16 (c >> 5)) (row 0x00-0x1F: bar graphics)
 *   font.jp      256 x 3328 files 888-900, the 13 16x16 SJIS pages stacked: slot s at (16 (s & 15), 16 (s >> 4)), the
 *                code -> slot map ps2fonts.py's sjis_slot (FUN_00111070); the whole JIS level-1 set
 *   font.jp8     256 x 3328 test 98 (ps2extract 3): font.jp as one byte a pixel (RAW), its grey where it is opaque,
 *                0 where clear: what the games' LANGUAGE JAPANESE draws (source/ps2menu.c; without it they turn
 *                font.jp into it, 3.4 MB unpacked for a moment)
 *   menu.window  240 x 88   file 887's leaf window (8 px vine border, fill (48, 24, 32))
 *   menu.rose16  64 x 32    file 887's small rose cursor, 8 frames of 16 x 16 (k = (t >> 1) & 3 across, (t >> 3) & 1 down)
 *   menu.rose24  192 x 20   file 887's big rose cursor, 8 frames of 24 x 20
 *   menu.pad     64 x 32    file 886's pad icons
 *   menu.head    240 x 64   file 945: MODE SELECT plate (0, 0, 120, 64), logo plate (120, 0, 120, 48)
 *   menu.plates  224 x 96   file 946: ARCADE MODE (0, 0), ARRANGE MODE (112, 0), GALLERY (0, 48), OPTION (112, 48),
 *                           112 x 48 each
 *   menu.back    240 x 320  the rose backdrop: file 947 (0, 0, 240, 240) over file 948 (0, 0, 240, 80) */
static void add_crop(const char *name, uint32_t tim, int x, int y, int w, int h)
{
	uint8_t *b = argb(tim_c(tim), x, y, w, h);

	add(name, b, (uint32_t)w * h * 4, K_ARGB32, w, h, 0, 1);
	free(b);
}

static void make_menu(void)
{
	uint8_t *b, *o;
	int k;

	say("  the PS2 menus' fonts and frames ...\n");
	add_crop("font.small", 0x0020800, 0, 0, 256, 32);
	add_crop("font.title", 0x2B23800, 0, 192, 256, 64);
	o = xmalloc(256 * 3328 * 4);
	for (k = 0; k < 13; k++) {
		b = argb(tim_c(0x2B34000 + (uint32_t)k * 0x8800), 0, 0, 256, 256);
		memcpy(o + (size_t)k * 256 * 256 * 4, b, 256 * 256 * 4);
		free(b);
	}
	add("font.jp", o, 256 * 3328 * 4, K_ARGB32, 256, 3328, 0, 1);
	{ /* test 98: font.jp8 */
		uint8_t *g = xmalloc(256 * 3328);
		size_t i;
		for (i = 0; i < 256u * 3328u; i++)
			g[i] = o[4 * i] >= 0x80 ? (o[4 * i + 1] ? o[4 * i + 1] : 1) : 0;
		add("font.jp8", g, 256 * 3328, K_RAW, 256, 3328, 0, 1);
		free(g);
	}
	free(o);
	add_crop("menu.window", 0x2B23800, 0, 0, 240, 88);
	add_crop("menu.rose16", 0x2B23800, 192, 160, 64, 32);
	add_crop("menu.rose24", 0x2B23800, 0, 176, 192, 20);
	add_crop("menu.pad", 0x2B1B000, 0, 0, 64, 32);
	add_crop("menu.head", 0x2D20800, 0, 0, 240, 64);
	add_crop("menu.plates", 0x2D31000, 0, 0, 224, 96);
	o = xmalloc(240 * 320 * 4);
	b = argb(tim_c(0x2D41800), 0, 0, 240, 240);
	memcpy(o, b, 240 * 240 * 4);
	free(b);
	b = argb(tim_c(0x2D52000), 0, 0, 240, 80);
	memcpy(o + 240 * 240 * 4, b, 240 * 80 * 4);
	free(b);
	add("menu.back", o, 240 * 320 * 4, K_ARGB32, 240, 320, 0, 1);
	free(o);
}

/* ---- ARRANGE's TAITO logo (tools/arrange/mklogo.py): PDM 901 in the arcade's orientation, the 224 x 224 record at
 * u 0x20 cropped to its ink (min(R, G, B) < 248), the width made even; ARGB1555 (colour round(c / 8), halves to even)
 * through a sorted palette, run-length coded. Blob "taito_logo" (RAW), big-endian: u16 LOGO_W, LOGO_H, s16 LOGO_DX,
 * LOGO_DY, u16 LOGO_NPAL, u16 0, u32 LOGO_RLE_N, then LOGO_NPAL u16 palette entries (bit 15 set), then the runs
 * (u8 count 1-255, u8 palette index), mklogo.py's taito_logo.h in bytes. */
static void make_taito(void)
{
	enum { RU = 0x20, RW = 224, RD = -112 };
	struct pic p = page256(901);
	uint16_t *px, pal[256];
	uint8_t *out, *q;
	int u, v, u0 = RW, u1 = -1, v0 = RW, v1 = -1, w, h, npal = 0, i;
	size_t n, k, nr = 0;

	for (v = 0; v < RW; v++)
		for (u = 0; u < RW; u++) {
			const uint8_t *s = px_at(&p, v, 255 - (RU + u));
			int m = s[0] < s[1] ? s[0] : s[1];
			m = s[2] < m ? s[2] : m;
			if (!s[3])
				die("the TAITO logo has a hole (not the disc this tool knows).");
			if (m < 248) {
				u0 = u < u0 ? u : u0;
				u1 = u > u1 ? u : u1;
				v0 = v < v0 ? v : v0;
				v1 = v > v1 ? v : v1;
			}
		}
	u1++;
	v1++;
	if ((u1 - u0) & 1) {
		if (u1 < RW)
			u1++;
		else
			u0--;
	}
	w = u1 - u0;
	h = v1 - v0;
	n = (size_t)w * h;
	px = xmalloc(n * 2);
	for (v = 0; v < h; v++)
		for (u = 0; u < w; u++) {
			const uint8_t *s = px_at(&p, v0 + v, 255 - (RU + u0 + u));
			const uint16_t c = (uint16_t)(0x8000u | rint8(s[0]) << 10 | rint8(s[1]) << 5 | rint8(s[2]));
			px[(size_t)v * w + u] = c;
			for (i = 0; i < npal && pal[i] != c; i++)
				;
			if (i == npal) {
				if (npal == 256)
					die("the TAITO logo has more than 256 colours.");
				pal[npal++] = c;
			}
		}
	free(p.px);
	for (i = 1; i < npal; i++) { /* sorted, as mklogo.py */
		const uint16_t c = pal[i];
		int j = i - 1;
		while (j >= 0 && pal[j] > c) {
			pal[j + 1] = pal[j];
			j--;
		}
		pal[j + 1] = c;
	}
	out = xmalloc(16 + 2 * (size_t)npal + 2 * n);
	q = out + 16 + 2 * npal;
	for (k = 0; k < n;) {
		size_t r = 1;
		while (k + r < n && px[k + r] == px[k] && r < 255)
			r++;
		for (i = 0; pal[i] != px[k]; i++)
			;
		q[nr++] = (uint8_t)r;
		q[nr++] = (uint8_t)i;
		k += r;
	}
	wr16be(out, (unsigned)w);
	wr16be(out + 2, (unsigned)h);
	wr16be(out + 4, (unsigned)(uint16_t)(RD + u0));
	wr16be(out + 6, (unsigned)(uint16_t)(RD + v0));
	wr16be(out + 8, (unsigned)npal);
	wr16be(out + 10, 0);
	wr32be(out + 12, (uint32_t)nr);
	for (i = 0; i < npal; i++)
		wr16be(out + 16 + 2 * i, pal[i]);
	add("taito_logo", out, (uint32_t)(16 + 2 * npal + nr), K_RAW, w, h, 0, 1);
	free(out);
	free(px);
}

/* ---- test 99 (ps2extract 4): the 4:3 GADGETS panels' PS2 layers (tools/card/ps2art.py's layer) --------------------
 * Up to test 98 the four 4:3 panels inside the .xex files were composited on the PC from the Insanity DVD booklet's art
 * AND the PS2 gallery's Bond / Dyne and the PS2 title's logo. From test 99 the .xex files carry the booklet part only
 * (tools/card/mkcard.py, gen/card99) and the games lay these over it (gadgets.c):
 *   p43.ib.bond   ibara's (and ARRANGE's) Bond panel: the gallery's Bond, then the PS2 logo over him
 *   p43.ib.dyne   the same with Dyne
 *   p43.blk.bond  Kuro BL's: Bond alone (its own logo, the arcade's, is the .xex's card_p43top_z)
 *   p43.blk.dyne  Dyne alone
 * Each: ARGB32 (bytes A R G B) PREMULTIPLIED, w x h, its place in the 640 x 720 panel texture in extra (x | y << 16);
 * the games do out = layer + under * (255 - A) / 255. Made as ps2art.py does (its Python is the reference:
 * mkcard.py --p43ref, verify.py): the gallery picture from its four TIM2 tiles on (248, 248, 248), the figure cut off
 * its near-white backdrop (min(R, G, B) >= 232 joined to the border or a patch over 1500 pixels; scipy's label, one
 * binary erosion, gaussian_filter sigma 0.7), PIL's LANCZOS resizes (Resample.c's fixed-point coefficients, RGBA scaled
 * premultiplied) and alpha_composite, on a 2x canvas (960 x 1440) scaled to 640 x 720 at the end. */
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

static const uint32_t P43_BOND_TILES[4] = {0x003984000, 0x0039E6800, 0x003A49000, 0x003AAB800};
static const uint32_t P43_DYNE_TILES[4] = {0x003B0E000, 0x003B70800, 0x003BD3000, 0x003C35800};
#define P43_LOGO_TILE 0x002A75800
#define P43_CW 960 /* the 2x canvas */
#define P43_CH 1440
#define P43_OW 640 /* the panel texture */
#define P43_OH 720

static void pic_free(struct pic *p)
{
	free(p->px);
	p->px = NULL;
}

/* PIL's crop (inside the picture only) */
static struct pic pic_crop(const struct pic *s, int x0, int y0, int x1, int y1)
{
	struct pic d = pic_new(x1 - x0, y1 - y0);
	int y;

	for (y = 0; y < d.h; y++)
		memcpy(d.px + (size_t)y * d.w * 4, s->px + ((size_t)(y0 + y) * s->w + x0) * 4, (size_t)d.w * 4);
	return d;
}

/* the box of the pixels whose alpha is over 8 (ps2art: .point(255 if v > 8).getbbox()); any: any band non-zero */
static void pic_bbox(const struct pic *p, int any, int *x0, int *y0, int *x1, int *y1)
{
	int x, y;

	*x0 = p->w;
	*y0 = p->h;
	*x1 = *y1 = 0;
	for (y = 0; y < p->h; y++)
		for (x = 0; x < p->w; x++) {
			const uint8_t *q = p->px + ((size_t)y * p->w + x) * 4;
			if (any ? (q[0] | q[1] | q[2] | q[3]) != 0 : q[3] > 8) {
				if (x < *x0)
					*x0 = x;
				if (y < *y0)
					*y0 = y;
				if (x + 1 > *x1)
					*x1 = x + 1;
				if (y + 1 > *y1)
					*y1 = y + 1;
			}
		}
	if (*x1 == 0) { /* nothing: one pixel */
		*x0 = *y0 = 0;
		*x1 = *y1 = 1;
	}
}

/* PIL's RGBA -> RGBa and RGBa -> RGBA (Convert.c rgbA2rgba / rgba2rgbA) */
static void premul(struct pic *p)
{
	size_t i, n = (size_t)p->w * p->h;
	int c;

	for (i = 0; i < n; i++) {
		uint8_t *q = p->px + 4 * i;
		for (c = 0; c < 3; c++) {
			const unsigned t = q[c] * q[3] + 128;
			q[c] = (uint8_t)(((t >> 8) + t) >> 8);
		}
	}
}

static void unpremul(struct pic *p)
{
	size_t i, n = (size_t)p->w * p->h;
	int c;

	for (i = 0; i < n; i++) {
		uint8_t *q = p->px + 4 * i;
		if (q[3] != 0 && q[3] != 255)
			for (c = 0; c < 3; c++) {
				const unsigned v = 255u * q[c] / q[3];
				q[c] = (uint8_t)(v > 255 ? 255 : v);
			}
	}
}

/* PIL's LANCZOS (libImaging/Resample.c, 8 bits a band: coefficients in 22-bit fixed point, horizontal pass first) */
#define PIL_PREC 22

static double sinc_f(double x)
{
	if (x == 0.0)
		return 1.0;
	x = x * M_PI;
	return sin(x) / x;
}

static double lanczos_f(double x)
{
	return -3.0 <= x && x < 3.0 ? sinc_f(x) * sinc_f(x / 3) : 0.0;
}

static int pil_coeffs(int insize, int outsize, int **boundsp, int32_t **kkp)
{
	const double scale = (double)insize / outsize;
	const double filterscale = scale < 1.0 ? 1.0 : scale;
	const double support = 3.0 * filterscale;
	const int ksize = (int)ceil(support) * 2 + 1;
	double *k = xmalloc(sizeof(double) * ksize);
	int32_t *kk = xmalloc(sizeof(int32_t) * (size_t)outsize * ksize);
	int *bounds = xmalloc(sizeof(int) * (size_t)outsize * 2);
	int xx, x;

	for (xx = 0; xx < outsize; xx++) {
		const double center = (xx + 0.5) * scale, ss = 1.0 / filterscale;
		double ww = 0.0;
		int xmin = (int)(center - support + 0.5), xmax = (int)(center + support + 0.5);
		if (xmin < 0)
			xmin = 0;
		if (xmax > insize)
			xmax = insize;
		xmax -= xmin;
		for (x = 0; x < xmax; x++) {
			const double w = lanczos_f((x + xmin - center + 0.5) * ss);
			k[x] = w;
			ww += w;
		}
		for (x = 0; x < xmax; x++)
			if (ww != 0.0)
				k[x] /= ww;
		for (x = 0; x < ksize; x++) {
			const double v = x < xmax ? k[x] : 0.0;
			kk[(size_t)xx * ksize + x] = v < 0 ? (int32_t)(-0.5 + v * (1 << PIL_PREC)) : (int32_t)(0.5 + v * (1 << PIL_PREC));
		}
		bounds[xx * 2] = xmin;
		bounds[xx * 2 + 1] = xmax;
	}
	free(k);
	*boundsp = bounds;
	*kkp = kk;
	return ksize;
}

static uint8_t clip8(int32_t v)
{
	if (v >= (1 << PIL_PREC << 8))
		return 255;
	if (v <= 0)
		return 0;
	return (uint8_t)(v >> PIL_PREC);
}

/* one pass of PIL's resample: horizontal (w -> ow, rows kept) or vertical (h -> oh, columns kept) */
static struct pic pil_pass(const struct pic *in, int ow, int oh, int vertical)
{
	struct pic out = pic_new(ow, oh);
	int *bd, xx, yy, x, c;
	int32_t *kk;
	const int ksz = vertical ? pil_coeffs(in->h, oh, &bd, &kk) : pil_coeffs(in->w, ow, &bd, &kk);

	for (yy = 0; yy < oh; yy++)
		for (xx = 0; xx < ow; xx++) {
			const int o = vertical ? yy : xx, min = bd[o * 2], max = bd[o * 2 + 1];
			const int32_t *k = kk + (size_t)o * ksz;
			uint8_t *d = out.px + ((size_t)yy * ow + xx) * 4;
			for (c = 0; c < 4; c++) {
				int32_t ss = 1 << (PIL_PREC - 1);
				if (vertical)
					for (x = 0; x < max; x++)
						ss += in->px[((size_t)(min + x) * in->w + xx) * 4 + c] * k[x];
				else
					for (x = 0; x < max; x++)
						ss += in->px[((size_t)yy * in->w + min + x) * 4 + c] * k[x];
				d[c] = clip8(ss);
			}
		}
	free(bd);
	free(kk);
	return out;
}

/* the four bands as they are (premul first for RGBA, as PIL does); the passes in PIL's order (Resample.c: the
 * vertical one first when the height shrinks by more than twice what the width does) */
static struct pic pil_resize(const struct pic *in, int ow, int oh)
{
	const int need_h = ow != in->w, need_v = oh != in->h;
	const int hfirst = !(in->h - oh > 0 && in->h - oh > (in->w - ow) * 2);
	struct pic t, out;

	if (need_h && need_v) {
		t = hfirst ? pil_pass(in, ow, in->h, 0) : pil_pass(in, in->w, oh, 1);
		out = hfirst ? pil_pass(&t, ow, oh, 1) : pil_pass(&t, ow, oh, 0);
		pic_free(&t);
	} else if (need_h) {
		out = pil_pass(in, ow, oh, 0);
	} else if (need_v) {
		out = pil_pass(in, ow, oh, 1);
	} else {
		out = pic_new(ow, oh);
		memcpy(out.px, in->px, (size_t)ow * oh * 4);
	}
	return out;
}

/* ps2art.gallery: the four tiles on (248, 248, 248), the picture's 564 columns in their middle */
static struct pic p43_gallery(const uint32_t tiles[4])
{
	struct pic g = pic_new(896, 896), t, out;
	size_t i;
	int k, x, y;

	for (i = 0; i < 896u * 896u; i++) {
		g.px[4 * i] = g.px[4 * i + 1] = g.px[4 * i + 2] = 248;
		g.px[4 * i + 3] = 255;
	}
	for (k = 0; k < 4; k++) {
		t = tim2(tiles[k]);
		for (y = 0; y < t.h; y++)
			for (x = 0; x < t.w; x++) {
				const int gx = (k % 2) * 448 + x, gy = (k / 2) * 448 + y;
				if (gx < 896 && gy < 896)
					over(g.px + ((size_t)gy * 896 + gx) * 4, t.px + ((size_t)y * t.w + x) * 4);
			}
		pic_free(&t);
	}
	out = pic_crop(&g, 166, 0, 730, 896);
	pic_free(&g);
	return out;
}

/* scipy.ndimage.gaussian_filter (sigma 0.7, mode 'reflect', truncate 4: radius 3) along one axis: float32 in and out,
 * the sums in double in ni_filters.c's symmetric correlate1d order */
static void gauss_pass(const float *in, float *out, int w, int h, int vertical)
{
	double wt[4], sum = 0.0;
	const double sigma2 = 0.7 * 0.7;
	const int len = vertical ? h : w, lines = vertical ? w : h;
	double *line = xmalloc(sizeof(double) * (len + 6));
	int j, l, i;

	for (j = -3; j <= 3; j++) {
		const double v = exp(-0.5 / sigma2 * (double)(j * j));
		if (j >= 0)
			wt[j] = v;
		sum += v;
	}
	for (j = 0; j < 4; j++)
		wt[j] /= sum;
	for (l = 0; l < lines; l++) {
		for (i = -3; i < len + 3; i++) {
			int s = i; /* reflect: d c b a | a b c d | d c b a */
			if (s < 0)
				s = -s - 1;
			if (s >= len)
				s = 2 * len - s - 1;
			line[i + 3] = vertical ? in[(size_t)s * w + l] : in[(size_t)l * w + s];
		}
		for (i = 0; i < len; i++) {
			const double *p = line + i + 3;
			double o = p[0] * wt[0];
			for (j = 3; j >= 1; j--)
				o += (p[-j] + p[j]) * wt[j];
			if (vertical)
				out[(size_t)i * w + l] = (float)o;
			else
				out[(size_t)l * w + i] = (float)o;
		}
	}
	free(line);
}

/* ps2art.key_white / _cut: the figure off its near-white backdrop, a soft edge, cropped to alpha > 8 */
static struct pic p43_key_white(struct pic *im)
{
	const int w = im->w, h = im->h;
	const size_t n = (size_t)w * h;
	uint8_t *mask = xmalloc(n), *fig = xmalloc(n), *ero = xmalloc(n), *keep;
	int32_t *lab = xmalloc(sizeof(int32_t) * n), *stack = xmalloc(sizeof(int32_t) * n), nl = 0;
	uint32_t *size = xmalloc(sizeof(uint32_t) * (n + 1));
	float *f0 = xmalloc(sizeof(float) * n), *f1 = xmalloc(sizeof(float) * n);
	size_t i;
	int x, y, x0, y0, x1, y1;
	struct pic out;

	for (i = 0; i < n; i++) {
		const uint8_t *q = im->px + 4 * i;
		uint8_t m = q[0] < q[1] ? q[0] : q[1];
		if (q[2] < m)
			m = q[2];
		mask[i] = m >= 232;
		lab[i] = 0;
	}
	/* scipy's label (4-connected) and the patches' sizes */
	for (i = 0; i < n; i++) {
		int32_t sp = 0;
		if (!mask[i] || lab[i])
			continue;
		lab[i] = ++nl;
		size[nl] = 0;
		stack[sp++] = (int32_t)i;
		while (sp) {
			const int32_t p = stack[--sp];
			const int px = p % w, py = p / w;
			size[nl]++;
			if (px > 0 && mask[p - 1] && !lab[p - 1]) {
				lab[p - 1] = nl;
				stack[sp++] = p - 1;
			}
			if (px < w - 1 && mask[p + 1] && !lab[p + 1]) {
				lab[p + 1] = nl;
				stack[sp++] = p + 1;
			}
			if (py > 0 && mask[p - w] && !lab[p - w]) {
				lab[p - w] = nl;
				stack[sp++] = p - w;
			}
			if (py < h - 1 && mask[p + w] && !lab[p + w]) {
				lab[p + w] = nl;
				stack[sp++] = p + w;
			}
		}
	}
	keep = xmalloc((size_t)nl + 1);
	memset(keep, 0, (size_t)nl + 1);
	for (i = 1; i <= (size_t)nl; i++)
		keep[i] = size[i] > 1500;
	for (x = 0; x < w; x++) {
		keep[lab[x]] = 1;
		keep[lab[(size_t)(h - 1) * w + x]] = 1;
	}
	for (y = 0; y < h; y++) {
		keep[lab[(size_t)y * w]] = 1;
		keep[lab[(size_t)y * w + w - 1]] = 1;
	}
	keep[0] = 0;
	for (i = 0; i < n; i++)
		fig[i] = !(lab[i] && keep[lab[i]]);
	/* binary_erosion: one iteration, the cross, outside = background */
	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++) {
			const size_t p = (size_t)y * w + x;
			ero[p] = fig[p] && x > 0 && x < w - 1 && y > 0 && y < h - 1 && fig[p - 1] && fig[p + 1] && fig[p - w] &&
			         fig[p + w];
		}
	for (i = 0; i < n; i++)
		f0[i] = ero[i] ? 1.0f : 0.0f;
	gauss_pass(f0, f1, w, h, 1); /* axis 0 first, as gaussian_filter */
	gauss_pass(f1, f0, w, h, 0);
	for (i = 0; i < n; i++) {
		float a = f0[i];
		if (a < 0.0f)
			a = 0.0f;
		if (a > 1.0f)
			a = 1.0f;
		a = a * 255.0f; /* float32, as numpy */
		im->px[4 * i + 3] = (uint8_t)a;
	}
	pic_bbox(im, 0, &x0, &y0, &x1, &y1);
	out = pic_crop(im, x0, y0, x1, y1);
	free(mask);
	free(fig);
	free(ero);
	free(keep);
	free(lab);
	free(stack);
	free(size);
	free(f0);
	free(f1);
	return out;
}

/* ps2art._place: im scaled (PIL RGBA LANCZOS) to a height of h or a width of w canvas pixels (x 2) and composited at
 * (x, y) x 2 */
static void p43_place(struct pic *base, const struct pic *im, int x, int y, int h, int w)
{
	const double k = h ? (double)h * 2 / im->h : (double)w * 2 / im->w;
	const double sw = nearbyint(im->w * k), sh = nearbyint(im->h * k); /* Python's round: half to even */
	struct pic s = pic_new(im->w, im->h), r;
	int i, j;

	memcpy(s.px, im->px, (size_t)im->w * im->h * 4);
	premul(&s);
	r = pil_resize(&s, sw < 1 ? 1 : (int)sw, sh < 1 ? 1 : (int)sh);
	pic_free(&s);
	unpremul(&r);
	for (j = 0; j < r.h; j++)
		for (i = 0; i < r.w; i++) {
			const int bx = x * 2 + i, by = y * 2 + j;
			if (bx >= 0 && by >= 0 && bx < base->w && by < base->h)
				over(base->px + ((size_t)by * base->w + bx) * 4, r.px + ((size_t)j * r.w + i) * 4);
		}
	pic_free(&r);
}

static void make_p43(void)
{
	static const struct {
		const char *name;
		int dyne, logo;
	} lay[4] = {{"p43.ib.bond", 0, 1}, {"p43.ib.dyne", 1, 1}, {"p43.blk.bond", 0, 0}, {"p43.blk.dyne", 1, 0}};
	/* ps2art.FIG (the figure's left edge, top, height); the logo at ps2art.LOGO's left edge, BAND's top + 6, 300 wide */
	static const int fig[2][3] = {{150, 462, 640}, {112, 462, 640}};
	struct pic pilot[2], logo, t;
	int i, x0, y0, x1, y1;

	say("  the 4:3 GADGETS panels' pilots and logo ...\n");
	for (i = 0; i < 2; i++) {
		t = p43_gallery(i ? P43_DYNE_TILES : P43_BOND_TILES);
		pilot[i] = p43_key_white(&t);
		pic_free(&t);
	}
	{
		struct pic lt = tim2(P43_LOGO_TILE), band = pic_crop(&lt, 0, 80, 240, 142);
		pic_bbox(&band, 0, &x0, &y0, &x1, &y1);
		logo = pic_crop(&band, x0, y0, x1, y1);
		pic_free(&lt);
		pic_free(&band);
	}
	for (i = 0; i < 4; i++) {
		struct pic L = pic_new(P43_CW, P43_CH), o, c;
		const int d = lay[i].dyne;
		uint8_t *b;
		memset(L.px, 0, (size_t)P43_CW * P43_CH * 4);
		p43_place(&L, &pilot[d], fig[d][0], fig[d][1], fig[d][2], 0);
		if (lay[i].logo)
			p43_place(&L, &logo, 90, 612 + 6, 0, 300);
		premul(&L);
		o = pil_resize(&L, P43_OW, P43_OH);
		pic_free(&L);
		pic_bbox(&o, 1, &x0, &y0, &x1, &y1);
		c = pic_crop(&o, x0, y0, x1, y1);
		pic_free(&o);
		b = argb(&c, 0, 0, c.w, c.h);
		add(lay[i].name, b, (uint32_t)c.w * c.h * 4, K_ARGB32, c.w, c.h, (uint32_t)x0 | (uint32_t)y0 << 16, 1);
		free(b);
		pic_free(&c);
	}
	pic_free(&pilot[0]);
	pic_free(&pilot[1]);
	pic_free(&logo);
}

/* ---- main ------------------------------------------------------------------------------------------------------------ */

static void index_pdm(void)
{
	uint8_t *t = dread_all(F_TBL);
	int i;

	if (memcmp(t, "TBL\x04", 4))
		die("IBARAR.TBL is not the archive's index.");
	for (i = 0; i < 1130; i++) {
		pdm_off[i] = rd32le(t + 0x350C + 4 * i);
		pdm_size[i] = rd32le(t + 0x11BC + 8 * i + 4);
	}
	free(t);
	if (pdm_off[960] != 0x3048000 || pdm_off[1060] != 0x56C2000 || pdm_off[955] != 0x2DC5800)
		die("IBARAR.TBL is not the PS2 port's index this tool knows.");
}

static int pick_file(char *out, unsigned n)
{
#ifdef _WIN32
	OPENFILENAMEA ofn;

	memset(&ofn, 0, sizeof(ofn));
	out[0] = 0;
	ofn.lStructSize = sizeof(ofn);
	ofn.lpstrFilter = "Disc images (*.iso;*.bin;*.img)\0*.iso;*.bin;*.img\0All files\0*.*\0";
	ofn.lpstrFile = out;
	ofn.nMaxFile = n;
	ofn.lpstrTitle = "ps2extract: pick your Ibara PS2 disc image (SLPM-66301)";
	ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;
	return GetOpenFileNameA(&ofn) ? 0 : -1;
#else
	(void)out;
	(void)n;
	return -1;
#endif
}

static void usage(void)
{
	say("Usage: ps2extract [options] <Ibara PS2 disc image (.iso) | folder of its files>\n"
	    "  -o <folder>   write the files there (default: a folder \"ibara360 ps2data\" beside the image)\n"
	    "  --no-music    leave out ps2music.bin (the soundtrack, 135 MB)\n"
	    "  --no-pause    do not wait for Enter at the end\n"
	    "Or drag the disc image onto ps2extract.exe, or run it and pick the file.\n");
}

int main(int argc, char **argv)
{
	char in[1024] = "", outdir[1024] = "", path[1100];
	int music = 1, i, opened_by_click = 0;
	STAT_T st;
	uint64_t music_total = 0;

#ifdef _WIN32
	{
		DWORD pids[4];
		opened_by_click = GetConsoleProcessList(pids, 4) <= 1; /* its own console window: double-click or drop */
	}
#endif
	pause_at_end = opened_by_click;
	say("ps2extract %d: ibara360's PS2 data from your own Ibara PS2 disc (SLPM-66301)\n\n", TOOL_VERSION);
	for (i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "-o") && i + 1 < argc)
			snprintf(outdir, sizeof(outdir), "%s", argv[++i]);
		else if (!strcmp(argv[i], "--no-music"))
			music = 0;
		else if (!strcmp(argv[i], "--no-pause"))
			pause_at_end = 0;
		else if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help") || !strcmp(argv[i], "/?")) {
			usage();
			return 0;
		} else
			snprintf(in, sizeof(in), "%s", argv[i]);
	}
	if (!in[0]) {
		say("No disc image given: pick it in the window that opens.\n");
		if (pick_file(in, sizeof(in))) {
			usage();
			wait_key();
			return 1;
		}
	}
	while (in[0] && (in[strlen(in) - 1] == '\\' || in[strlen(in) - 1] == '/'))
		in[strlen(in) - 1] = 0;
	if (STAT(in, &st))
		die("\"%s\" is not there.", in);
	say("Reading \"%s\"\n", in);
	if (S_ISDIR(st.st_mode))
		open_dir(in);
	else
		open_iso(in);
	check_disc();
	index_pdm();
	if (!outdir[0]) {
		const char *cut = strrchr(in, '\\'), *c2 = strrchr(in, '/');
		if (c2 > cut)
			cut = c2;
		if (S_ISDIR(st.st_mode))
			snprintf(outdir, sizeof(outdir), "%s%cibara360 ps2data", in, PATHSEP);
		else if (cut)
			snprintf(outdir, sizeof(outdir), "%.*s%cibara360 ps2data", (int)(cut - in), in, PATHSEP);
		else
			snprintf(outdir, sizeof(outdir), "ibara360 ps2data");
	}
	say("\nMaking the pictures and sounds:\n");
	make_launcher();
	make_ticker();
	make_sounds();
	make_gallery();
	make_arrange();
	make_menu();
	make_taito();
	make_p43(); /* test 99 */
	make_bgm(music);
	MKDIR(outdir);
	snprintf(path, sizeof(path), "%s%cps2data.bin", outdir, PATHSEP);
	say("\nWriting:\n");
	write_container(path, blobs, nblobs, 16, 0, "SLPM-66301 IBARA (PS2)");
	{
		FILE *f = fopen(path, "rb");
		long n = 0;
		if (f && !fseek(f, 0, SEEK_END))
			n = ftell(f);
		if (f)
			fclose(f);
		say("  %s  %ld bytes, %d pieces (%llu bytes unpacked)\n", path, n, nblobs, (unsigned long long)raw_total);
	}
	if (music) {
		snprintf(path, sizeof(path), "%s%cps2music.bin", outdir, PATHSEP);
		bgm_crcs();
		for (i = 0; i < nmblobs; i++)
			music_total += mblobs[i].size;
		write_container(path, mblobs, nmblobs, 2048, 1, "SLPM-66301 IBARA (PS2) BGM");
		say("  %s  %llu bytes of streams (16)\n", path, (unsigned long long)music_total);
	} else {
		snprintf(path, sizeof(path), "%s%cps2music.bin", outdir, PATHSEP);
		remove(path);
	}
	say("\nDone. Copy %s from\n  %s\nbeside ibara360.xex, ibara.xex, ibarablk.xex and ibaraarr.xex (the same folder).\n",
	    music ? "ps2data.bin and ps2music.bin" : "ps2data.bin", outdir);
#ifdef _WIN32
	if (opened_by_click)
		ShellExecuteA(NULL, "open", outdir, NULL, NULL, SW_SHOWNORMAL);
#endif
	wait_key();
	return 0;
}

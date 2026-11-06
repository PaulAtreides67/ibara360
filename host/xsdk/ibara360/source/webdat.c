/* ibara360 test 121: ibaraweb.dat's reader (webdat.h), shared by the launcher (STORY) and the games (STAGE MAP later).
 * Nothing here logs, starts threads or uses globals other than its own (webdat_ prefix); the table is read once and then
 * only read. JPEGs go through stb_image.h (v2.30, pinned there), compiled here once with no SIMD, no stdio, no HDR
 * or linear code (so no libm calls: the console's libm is not linked). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zlib.h"

#include "webdat.h"

#define STBI_ONLY_JPEG
#define STBI_NO_STDIO
#define STBI_NO_SIMD
#define STBI_NO_HDR
#define STBI_NO_LINEAR
#define STBI_ASSERT(x) ((void)(x)) /* no assert() (its __assert_fail is not on the console's libc) */
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

static int st;                    /* 0 not read, 1 good, -1 not there, -2 not ours / damaged */
static char why[96];
static char file_path[260];       /* the file, as fopen takes it */
static struct webdat_entry *tab;
static uint32_t tab_n;

static uint32_t be32(const unsigned char *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static int fail(int s, const char *text)
{
	st = s;
	snprintf(why, sizeof(why), "%s", text);
	return -1;
}

int webdat_open(const char *path)
{
	unsigned char h[12], *t;
	uint32_t i, count;
	FILE *f;
	long len;

	if (st)
		return st > 0 ? 0 : -1;
	snprintf(file_path, sizeof(file_path), "%s", path ? path : "");
	{
		char *c;
		for (c = file_path; *c; c++)
			if (*c == '\\')
				*c = '/';
	}
	f = fopen(file_path, "rb");
	if (!f)
		return fail(-1, "NO IBARAWEB.DAT");
	if (fseek(f, 0, SEEK_END) || (len = ftell(f)) < 12 || fseek(f, 0, SEEK_SET) || fread(h, 1, 12, f) != 12 ||
	    memcmp(h, WEBDAT_MAGIC, 4) || be32(h + 4) != WEBDAT_VERSION) {
		fclose(f);
		return fail(-2, "IBARAWEB.DAT IS NOT THE SITE'S");
	}
	count = be32(h + 8);
	if (!count || count > 65536 || 12 + (uint64_t)count * WEBDAT_ENTRY > (uint64_t)len) {
		fclose(f);
		return fail(-2, "IBARAWEB.DAT IS DAMAGED (ITS TABLE)");
	}
	t = malloc((size_t)count * WEBDAT_ENTRY);
	tab = calloc(count, sizeof(*tab));
	if (!t || !tab) {
		free(t);
		free(tab);
		tab = NULL;
		fclose(f);
		return fail(-2, "IBARAWEB.DAT: NO MEMORY FOR ITS TABLE");
	}
	if (fread(t, WEBDAT_ENTRY, count, f) != count) {
		free(t);
		free(tab);
		tab = NULL;
		fclose(f);
		return fail(-2, "IBARAWEB.DAT IS DAMAGED (SHORT)");
	}
	fclose(f);
	for (i = 0; i < count; i++) {
		const unsigned char *p = t + (size_t)i * WEBDAT_ENTRY;
		struct webdat_entry *e = &tab[i];
		memcpy(e->name, p, 28);
		e->name[28] = 0;
		e->offset = be32(p + 28);
		e->bytes = be32(p + 32);
		e->w = (uint16_t)(p[36] << 8 | p[37]);
		e->h = (uint16_t)(p[38] << 8 | p[39]);
		e->kind = be32(p + 40);
		if ((uint64_t)e->offset > (uint64_t)len || (uint64_t)e->bytes > (uint64_t)len - e->offset) {
			free(t);
			free(tab);
			tab = NULL;
			return fail(-2, "IBARAWEB.DAT IS DAMAGED (CUT SHORT?)");
		}
	}
	free(t);
	tab_n = count;
	st = 1;
	why[0] = 0;
	return 0;
}

int webdat_ok(void)
{
	return st > 0;
}

const char *webdat_why(void)
{
	return why;
}

const struct webdat_entry *webdat_find(const char *name)
{
	uint32_t i;

	if (st <= 0 || !name)
		return NULL;
	for (i = 0; i < tab_n; i++)
		if (!strcmp(tab[i].name, name))
			return &tab[i];
	return NULL;
}

void *webdat_read(const struct webdat_entry *e)
{
	unsigned char *b;
	FILE *f;

	if (st <= 0 || !e || !e->bytes)
		return NULL;
	b = malloc(e->bytes);
	if (!b)
		return NULL;
	f = fopen(file_path, "rb");
	if (!f || fseek(f, (long)e->offset, SEEK_SET) || fread(b, 1, e->bytes, f) != e->bytes) {
		if (f)
			fclose(f);
		free(b);
		return NULL;
	}
	fclose(f);
	return b;
}

/* stb_image writes R G B A bytes; they are turned into 0xAARRGGBB in place (each pixel read before its word is
 * written; the build is -fno-strict-aliasing) */
uint32_t *webdat_jpeg_argb(const void *jpg, uint32_t n, int *w, int *h)
{
	unsigned char *px;
	uint32_t *out;
	int x = 0, y = 0, comp = 0;
	uint32_t i, count;

	if (w)
		*w = 0;
	if (h)
		*h = 0;
	if (!jpg || !n || n > 0x7FFFFFFFu)
		return NULL;
	px = stbi_load_from_memory((const stbi_uc *)jpg, (int)n, &x, &y, &comp, 4);
	if (!px)
		return NULL;
	if (x <= 0 || y <= 0) {
		free(px);
		return NULL;
	}
	count = (uint32_t)x * (uint32_t)y;
	out = (uint32_t *)px;
	for (i = 0; i < count; i++) {
		const unsigned char *p = px + (size_t)i * 4;
		const uint32_t v = 0xFF000000u | (uint32_t)p[0] << 16 | (uint32_t)p[1] << 8 | p[2];
		out[i] = v;
	}
	if (w)
		*w = x;
	if (h)
		*h = y;
	return out;
}

uint32_t *webdat_zlib_argb(const struct webdat_entry *e)
{
	const size_t n = e ? (size_t)e->w * e->h * 4 : 0;
	unsigned char *z, *raw;
	uint32_t i, count;
	z_stream zs;
	int r;

	if (!e || e->kind != WEBDAT_KIND_ZLIB || !n)
		return NULL;
	z = webdat_read(e);
	raw = malloc(n);
	if (!z || !raw) {
		free(z);
		free(raw);
		return NULL;
	}
	memset(&zs, 0, sizeof(zs));
	zs.next_in = z;
	zs.avail_in = e->bytes;
	zs.next_out = raw;
	zs.avail_out = (uInt)n;
	r = inflateInit(&zs) == Z_OK ? inflate(&zs, Z_FINISH) : Z_DATA_ERROR;
	inflateEnd(&zs);
	free(z);
	if (r != Z_STREAM_END || zs.avail_out) {
		free(raw);
		return NULL;
	}
	count = (uint32_t)e->w * e->h;
	for (i = 0; i < count; i++) {
		const unsigned char *p = raw + (size_t)i * 4;
		const uint32_t v = (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
		((uint32_t *)raw)[i] = v;
	}
	return (uint32_t *)raw;
}

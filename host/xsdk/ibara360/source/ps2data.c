/* Test 97: ps2data.bin beside the .xex files (ps2data.h; written by tools/ps2extract from the user's own Ibara PS2
 * disc): its table read once, its blobs read when asked. Also the data pointers of card_ticker.h, card_loading.h,
 * arrhud_art.h and arrgfx_data.h (before test 97 their arrays were compiled in): blank (transparent) until
 * ps2data_games_init puts the file's data behind them. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zlib.h"

#include "card.h"
#include "card_loading.h"
#include "card_ticker.h"
#include "launch.h"
#include "ps2data.h"

/* ---- the pointers the games read (the generated headers declare them) --------------------------------------------- */

static const uint32_t blank_band[TICKER_W * TICKER_BAND_H], blank_text[TICKER_W * TICKER_TEXT_H];
static const unsigned int blank_loading[CARD_LOADING_W * CARD_LOADING_H];
static const uint16_t blank_fbox[77][12];
const uint32_t *ticker_band = blank_band, *ticker_text = blank_text;
const unsigned int *card_loading = blank_loading;
const uint16_t (*arrhud_fbox)[12] = blank_fbox; /* gen/arrhud/arrhud_art.h */
const unsigned char *arrgfx_z;                   /* gen/arrgfx/arrgfx_data.h: the zlib stream, NULL = none */
unsigned arrgfx_z_size;

/* ---- the file ------------------------------------------------------------------------------------------------------- */

static int st;                  /* 0 not read, 1 good, -1 not there, -2 not ours / damaged */
static char why[96];
static struct ps2_entry *tab;
static uint32_t count, file_bytes;

static uint32_t be32(const unsigned char *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static FILE *open_beside(const char *name)
{
	char p[260];
	char *c;

	if (launch_path(p, sizeof(p), name))
		return NULL;
	for (c = p; *c; c++) /* newlib's fopen: /Device/... (launch.c's) */
		if (*c == '\\')
			*c = '/';
	return fopen(p, "rb");
}

static int fail(int s, const char *text)
{
	st = s;
	snprintf(why, sizeof(why), "%s", text);
	log_printf(C_RED, "PS2DATA: %s", why);
	return -1;
}

int ps2data_open(void)
{
	unsigned char h[PS2DATA_HEAD], *t;
	uint32_t i, toff;
	FILE *f;
	long len;

	if (st)
		return st > 0 ? 0 : -1;
	f = open_beside(PS2DATA_FILE);
	if (!f)
		return fail(-1, "NO PS2DATA.BIN BESIDE THE XEX FILES");
	if (fseek(f, 0, SEEK_END) || (len = ftell(f)) < PS2DATA_HEAD || fseek(f, 0, SEEK_SET) ||
	    fread(h, 1, PS2DATA_HEAD, f) != PS2DATA_HEAD || memcmp(h, PS2DATA_MAGIC, 8)) {
		fclose(f);
		return fail(-2, "PS2DATA.BIN IS NOT IBARA360'S");
	}
	if (be32(h + 8) != PS2DATA_VERSION) {
		fclose(f);
		return fail(-2, "PS2DATA.BIN IS FROM ANOTHER PS2EXTRACT VERSION");
	}
	count = be32(h + 12);
	toff = be32(h + 16);
	file_bytes = (uint32_t)len;
	if (!count || count > 4096 || toff < PS2DATA_HEAD || toff + count * PS2DATA_ENTRY > file_bytes ||
	    !(t = malloc(count * PS2DATA_ENTRY)) || !(tab = calloc(count, sizeof(*tab)))) {
		fclose(f);
		return fail(-2, "PS2DATA.BIN IS DAMAGED (ITS TABLE)");
	}
	if (fseek(f, (long)toff, SEEK_SET) || fread(t, PS2DATA_ENTRY, count, f) != count) {
		free(t);
		fclose(f);
		return fail(-2, "PS2DATA.BIN IS DAMAGED (SHORT)");
	}
	fclose(f);
	for (i = 0; i < count; i++) {
		const unsigned char *p = t + i * PS2DATA_ENTRY;
		struct ps2_entry *e = &tab[i];
		memcpy(e->name, p, 31);
		e->off = be32(p + 32);
		e->stored = be32(p + 36);
		e->size = be32(p + 40);
		e->crc = be32(p + 44);
		e->flags = (uint16_t)(p[48] << 8 | p[49]);
		e->kind = (uint16_t)(p[50] << 8 | p[51]);
		e->w = (uint16_t)(p[52] << 8 | p[53]);
		e->h = (uint16_t)(p[54] << 8 | p[55]);
		e->extra = be32(p + 56);
		if (e->off > file_bytes || e->stored > file_bytes - e->off) {
			free(t);
			return fail(-2, "PS2DATA.BIN IS DAMAGED (CUT SHORT?)");
		}
	}
	free(t);
	st = 1;
	why[0] = 0;
	log_printf(C_GREEN, "PS2DATA: %s READ, %u BLOBS, %u BYTES (MADE FROM %.32s)", PS2DATA_FILE, (unsigned)count,
	           (unsigned)file_bytes, (const char *)h + 0x20);
	return 0;
}

const char *ps2data_why(void)
{
	return why;
}

int ps2data_ok(void)
{
	return st > 0;
}

const struct ps2_entry *ps2data_find(const char *name)
{
	uint32_t i;

	if (st <= 0)
		return NULL;
	for (i = 0; i < count; i++)
		if (!strcmp(tab[i].name, name))
			return &tab[i];
	return NULL;
}

void *ps2data_load_stored(const char *name, uint32_t *size, const struct ps2_entry **ep)
{
	const struct ps2_entry *e = ps2data_find(name);
	unsigned char *b;
	FILE *f;

	*size = 0;
	if (ep)
		*ep = e;
	if (!e)
		return NULL;
	b = malloc(e->stored ? e->stored : 1);
	f = b ? open_beside(PS2DATA_FILE) : NULL;
	if (!f || fseek(f, (long)e->off, SEEK_SET) || fread(b, 1, e->stored, f) != e->stored) {
		if (f)
			fclose(f);
		free(b);
		log_printf(C_RED, "PS2DATA: %s DID NOT READ", name);
		return NULL;
	}
	fclose(f);
	*size = e->stored;
	return b;
}

void *ps2data_load(const char *name, uint32_t *size)
{
	const struct ps2_entry *e;
	uint32_t n;
	unsigned char *s = ps2data_load_stored(name, &n, &e), *b;
	z_stream z;
	int r;

	*size = 0;
	if (!s)
		return NULL;
	if (!(e->flags & PS2F_ZLIB)) {
		b = s;
	} else {
		b = malloc(e->size ? e->size : 1);
		if (!b) {
			free(s);
			return NULL;
		}
		memset(&z, 0, sizeof(z));
		z.next_in = s;
		z.avail_in = n;
		z.next_out = b;
		z.avail_out = e->size;
		r = inflateInit(&z) == Z_OK ? inflate(&z, Z_FINISH) : Z_DATA_ERROR;
		inflateEnd(&z);
		free(s);
		if (r != Z_STREAM_END || z.total_out != e->size) {
			free(b);
			log_printf(C_RED, "PS2DATA: %s DID NOT UNPACK", name);
			return NULL;
		}
	}
	if ((uint32_t)crc32(0, b, e->size) != e->crc) {
		free(b);
		log_printf(C_RED, "PS2DATA: %s IS DAMAGED (CRC)", name);
		return NULL;
	}
	*size = e->size;
	return b;
}

int ps2data_load_into(const char *name, void *dst, uint32_t n)
{
	uint32_t got;
	void *b = ps2data_load(name, &got);

	if (!b || got != n) {
		if (b)
			log_printf(C_RED, "PS2DATA: %s IS %u BYTES, NOT %u", name, (unsigned)got, (unsigned)n);
		free(b);
		return -1;
	}
	memcpy(dst, b, n);
	free(b);
	return 0;
}

/* test 123 (user: "teresa's boss artwork is too small, use the artbook (or ps2)"): n bytes of blob name at off of its
 * stored bytes (not inflated: the gallery's 10 MB is read a picture at a time), into dst; refused for a zlib blob or
 * past its end. 0 = done */
int ps2data_read_part(const char *name, uint32_t off, void *dst, uint32_t n)
{
	const struct ps2_entry *e = ps2data_find(name);
	FILE *f;
	int r = -1;

	if (!e || (e->flags & PS2F_ZLIB) || off > e->stored || n > e->stored - off)
		return -1;
	f = open_beside(PS2DATA_FILE);
	if (!f)
		return -1;
	if (!fseek(f, (long)(e->off + off), SEEK_SET) && fread(dst, 1, n, f) == n)
		r = 0;
	fclose(f);
	return r;
}

/* ---- the games' data ---------------------------------------------------------------------------------------------- */

static const void *load_exact(const char *name, uint32_t n, int *missing)
{
	uint32_t got;
	void *b = ps2data_load(name, &got);

	if (b && got == n)
		return b;
	free(b);
	(*missing)++;
	return NULL;
}

int ps2data_games_init(void)
{
#ifdef IB_ARRANGE
	static const char what[] = "NOW LOADING'S AND ARRANGE'S PICTURES";
#else
	static const char what[] = "NOW LOADING'S PICTURES";
#endif
	static int done, result;
	int missing = 0;
	const void *p;

	if (done)
		return result;
	done = 1;
	result = -1;
	if (ps2data_open())
		return -1;
	if ((p = load_exact(PS2N_TICK_BAND, sizeof(blank_band), &missing)) != NULL)
		ticker_band = p;
	if ((p = load_exact(PS2N_TICK_TEXT, sizeof(blank_text), &missing)) != NULL)
		ticker_text = p;
	if ((p = load_exact(PS2N_LOADING, sizeof(blank_loading), &missing)) != NULL)
		card_loading = p;
#ifdef IB_ARRANGE
	if ((p = load_exact(PS2N_ARRFBOX, sizeof(blank_fbox), &missing)) != NULL)
		arrhud_fbox = p;
	{
		uint32_t n;
		const struct ps2_entry *e;
		unsigned char *z = ps2data_load_stored(PS2N_ARRGFX, &n, &e);
		if (z && (e->flags & PS2F_ZLIB)) {
			arrgfx_z = z;
			arrgfx_z_size = n;
		} else {
			free(z);
			missing++;
		}
	}
#endif
	log_printf(missing ? C_RED : C_GREEN, "PS2DATA: %s %s", what, missing ? "NOT ALL THERE" : "READ");
	result = missing ? -1 : 0;
	return result;
}

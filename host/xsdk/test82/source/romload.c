/* Test 6 ROM loader: test 5's (goal 5 SUCCESS), now for one set and on its own
 * hardware thread. Finds MAME's <set>.zip, inflates every member into RAM with zlib and
 * checks it against MAME 0.289's CRC32 (cv1k.cpp) and against the zip's own CRC. The
 * buffers stay allocated: the game runs from them.
 *
 * Test 38 (goal 19, both games in one ELF): the loader first looks for every set's zip
 * (romload_scanned), then waits until the main thread picks one (romload_choose: the ini's
 * game key or the pad menu) and loads only that one.
 *
 * Members are matched to U4/U2/U23/U24 by CRC first, then by name (the part after the last
 * '_'). The work runs in slices (one 64 KB read, one inflate of at most 256 KB output, or
 * one zip directory parse) back to back on LOADER_THREAD, so the frame loop on thread 0
 * keeps the card at 60 Hz. Results are published with a barrier before `finished` is set.
 *
 * xsdk port (test 39 .xex): the kernel has the storage mounted, so there is nothing to mount.
 * The loader looks in the folders the .xex sits in, from its own folder up to its device's root
 * (ExLoadedImageName, e.g. \Device\Mass0\ibara360\ibara360.xex), then in game:\ and the roots of
 * the USB ports and the hard disk; in each at <dir>/<set>.zip and <dir>/roms/<set>.zip. The ini,
 * the saves and the recordings go to <the .xex's device root>/ibara360 as on XeLL (where the
 * ELF builds kept them on the stick), else to game:/ibara360. The loader is a kernel thread of
 * its own on LOADER_THREAD.
 *
 * Test 50: while it waits for the choice the loader keeps the hard disk awake (keep_awake). */
#include <malloc.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>

#include <zlib.h>

#include "xsdk/kernel.h"
#include "xsdk/thread.h"

#include "card.h"
#include "romload.h"
#include "xplat.h"

static const char *const role_name[NROLES] = {"U4", "U2", "U23", "U24"};
static const char *const role_file[NROLES] = {"u4", "u2", "u23", "u24"};
static const uint32_t role_size[NROLES] = {0x200000, 0x8400000, 0x400000, 0x400000};

struct set_def {
	const char *name;
	uint32_t crc[NROLES];
};
static const struct set_def set_defs[NSETS] = { /* the order of SET_IBARA, SET_IBARABLK */
	{"ibara",    {0xd5fb6657, 0x55840976, 0xee5e585d, 0xf0aa3cb6}},
	{"ibarablk", {0xee1f1f77, 0x5e46be44, 0xa436bb22, 0xd11ab6b6}},
};

/* xsdk port: the folders to look in (romload_start fills them) and the data root */
#define NROOTS 16
#define ROOT_MAX 112
#define SCAN_TRIES 10 /* a scan that finds no zip is tried again once a second this often */
static char roots[NROOTS][ROOT_MAX];
static int nroots;
static char data_root[ROOT_MAX] = "game:";
static char image_name[ROOT_MAX];
static unsigned scan_tries;

enum { M_MISSING, M_WAIT, M_LOAD, M_OK, M_DIFF, M_BAD, M_ERR };

struct member {
	int state;
	char name[48];
	int method;              /* 0 stored, 8 deflate */
	uint32_t crc_zip, csize, usize, lho;
	uint32_t crc, done, cleft;
	uint8_t *data;
	z_stream z;
	int z_open;
	uint64_t t_start;
	unsigned read_us, inflate_us, crc_us;
};

enum { S_WAIT, S_NOTFOUND, S_FOUND, S_LOAD, S_OK, S_BAD };

struct romset {
	int state;
	char path[ROOT_MAX + 24];
	uint32_t zip_size;
	struct member m[NROLES];
	int cur;                 /* member being loaded */
	uint64_t t_start;
	unsigned ms;             /* wall time for the whole set */
};

static struct romset sets[NSETS];

enum { L_IDLE, L_SCAN, L_CHOOSE, L_FIND, L_MEMBER, L_DONE };
static int lstate = L_IDLE;
static int cs = -1;          /* the chosen set, -1 before the choice (or none) */
static volatile int choice = -2; /* romload_choose: -2 not yet, -1 none, else a set */
static volatile int scanned;
static FILE *zf;
static unsigned wait_frames;

/* totals for the throughput row */
static uint64_t tot_read, tot_inflated, tot_crc;
static uint64_t tot_read_us, tot_inflate_us, tot_crc_us;
static unsigned step_max_us;
static volatile int finished;

static uint8_t inbuf[64 * 1024] __attribute__((aligned(128)));
#define OUT_SLICE (256 * 1024)

/* Test 50: the hard disk kept awake while the game menu waits. After ~6 s without a command the
 * disk winds down, and the first read after the choice waited for it: 0.5-1.2 s after 6-12 s in
 * the menu, 2.5 s after 26 s or more (14 hardware runs, PLAN.md "Test 50"). Until the choice the
 * loader reads KEEP_BYTES of every zip found each KEEP_MS through a handle of its own opened
 * uncached (NT's FILE_NO_INTERMEDIATE_BUFFERING, which xsdk's kernel.h lacks), so the kernel's
 * file cache can't answer; offset, length and buffer are 4 KB aligned, as uncached reads need.
 * Each read moves KEEP_STEP blocks of 4 KB on, modulo the file's blocks, so no place is read
 * twice for hours and the drive's own cache can't answer either. A failed uncached open or read
 * falls back to a cached handle. The reads' times show whether they reached the disk (a cache
 * hit takes microseconds) and whether it had wound down (KEEP_SLOW_US). */
#define KEEP_MS 2000
#define KEEP_BYTES 4096
#define KEEP_STEP 321              /* blocks: 1.25 MB, 3 x 107, prime to a zip's ~8000 blocks */
#define KEEP_SLOW_US 100000
enum { FILE_NO_INTERMEDIATE_BUFFERING = 0x00000008 };

struct keep {
	int state;                     /* 0 not opened yet, 1 open, -1 no keep-awake reads */
	int uncached;
	HANDLE h;
	uint32_t blocks, blk;
};
static struct keep keeps[NSETS];
static uint8_t keep_buf[KEEP_BYTES] __attribute__((aligned(4096)));
static uint64_t keep_first, keep_last, t_choice;
static unsigned keep_n, keep_n_uncached, keep_slow, keep_fail, keep_min_us = ~0u, keep_max_us;

static uint32_t le16(const uint8_t *p) { return p[0] | p[1] << 8; }
static uint32_t le32(const uint8_t *p) { return p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24; }

/* ---- where to look (xsdk port) ---------------------------------------------------- */

static void add_root(const char *r)
{
	int i;

	if (nroots >= NROOTS || strlen(r) >= ROOT_MAX)
		return;
	for (i = 0; i < nroots; i++)
		if (!strcasecmp(roots[i], r))
			return;
	strcpy(roots[nroots++], r);
}

/* length of the device part of a /Device/... path: /Device/Harddisk0/Partition1, else
 * /Device/<name> (Mass0, Mass1, ...); 0 when it is not one */
static size_t device_len(const char *p)
{
	static const char hdd[] = "/Device/Harddisk0/Partition1";
	const char *e;

	if (strncasecmp(p, "/Device/", 8))
		return 0;
	if (!strncasecmp(p, hdd, sizeof(hdd) - 1) && (p[sizeof(hdd) - 1] == '/' || !p[sizeof(hdd) - 1]))
		return sizeof(hdd) - 1;
	e = strchr(p + 8, '/');
	return e ? (size_t)(e - p) : strlen(p);
}

/* The .xex's folders from its own up to its device's root, game:, then the other roots. */
static void find_roots(void)
{
	static const char *const others[] = {"/Device/Mass0", "/Device/Mass1", "/Device/Mass2",
	                                     "/Device/Harddisk0/Partition1"};
	char p[ROOT_MAX], *s;
	size_t dl = 0, i;

	snprintf(image_name, sizeof(image_name), "%s", ExLoadedImageName ? ExLoadedImageName : "");
	snprintf(p, sizeof(p), "%s", image_name);
	for (i = 0; p[i]; i++)
		if (p[i] == '\\')
			p[i] = '/';
	s = strrchr(p, '/');
	if (s && p[0] == '/') {
		*s = 0;                      /* the .xex's folder */
		dl = device_len(p);
	}
	if (dl) {
		for (;;) {
			add_root(p);
			s = strrchr(p, '/');
			if (strlen(p) <= dl || !s || (size_t)(s - p) < dl)
				break;
			*s = 0;
		}
		snprintf(data_root, sizeof(data_root), "%.*s", (int)dl, p);
	}
	add_root("game:");
	for (i = 0; i < sizeof(others) / sizeof(others[0]); i++)
		add_root(others[i]);
	log_printf(C_WHITE, "STORAGE: XEX %s", image_name[0] ? image_name : "(NO IMAGE NAME)");
	log_printf(C_WHITE, "STORAGE: %d FOLDERS TO LOOK IN, DATA IN %s/IBARA360", nroots, data_root);
}

/* ---- zip directory ----------------------------------------------------------- */

static int role_by_name(const char *name)
{
	const char *b = strrchr(name, '_'), *s = strrchr(name, '/');
	int r;

	if (s && (!b || s > b))
		b = s;
	b = b ? b + 1 : name;
	for (r = 0; r < NROLES; r++)
		if (!strcasecmp(b, role_file[r]))
			return r;
	return -1;
}

/* Read the central directory and fill the set's members. */
static int zip_parse(struct romset *s, const struct set_def *d)
{
	uint8_t *tail, *cd = NULL, *e = NULL, *p;
	long size, tlen, i;
	uint32_t n, cd_size, cd_off, k;
	int r, ok = 0;

	if (fseek(zf, 0, SEEK_END) || (size = ftell(zf)) < 22)
		return 0;
	s->zip_size = (uint32_t)size;
	tlen = size < 65557 ? size : 65557;
	tail = malloc(tlen);
	if (!tail || fseek(zf, size - tlen, SEEK_SET) || fread(tail, 1, tlen, zf) != (size_t)tlen)
		goto out;
	for (i = tlen - 22; i >= 0; i--)
		if (le32(tail + i) == 0x06054b50) {
			e = tail + i;
			break;
		}
	if (!e) {
		log_printf(C_RED, "ZIP: NO END OF CENTRAL DIRECTORY");
		goto out;
	}
	n = le16(e + 10);
	cd_size = le32(e + 12);
	cd_off = le32(e + 16);
	cd = malloc(cd_size);
	if (!cd || fseek(zf, cd_off, SEEK_SET) || fread(cd, 1, cd_size, zf) != cd_size) {
		log_printf(C_RED, "ZIP: CANNOT READ CENTRAL DIRECTORY");
		goto out;
	}
	for (p = cd, k = 0; k < n && p + 46 <= cd + cd_size; k++) {
		uint32_t nlen = le16(p + 28), xlen = le16(p + 30), clen = le16(p + 32);
		char name[48];
		uint32_t crc = le32(p + 16);

		if (le32(p) != 0x02014b50 || p + 46 + nlen > cd + cd_size)
			break;
		snprintf(name, sizeof(name), "%.*s", (int)(nlen < 47 ? nlen : 47), (const char *)p + 46);
		for (r = 0; r < NROLES; r++)
			if (crc == d->crc[r])
				break;
		if (r == NROLES)
			r = role_by_name(name);
		if (r >= 0 && s->m[r].state == M_MISSING) {
			struct member *m = &s->m[r];
			m->state = M_WAIT;
			strcpy(m->name, name);
			m->method = le16(p + 10);
			m->crc_zip = crc;
			m->csize = le32(p + 20);
			m->usize = le32(p + 24);
			m->lho = le32(p + 42);
		} else {
			log_printf(C_DIM, "ZIP: %s (%08X) SKIPPED", name, (unsigned)crc);
		}
		p += 46 + nlen + xlen + clen;
	}
	ok = 1;
out:
	free(cd);
	free(tail);
	return ok;
}

/* ---- members ----------------------------------------------------------------- */

static void member_fail(struct member *m, const char *why)
{
	m->state = M_ERR;
	log_printf(C_RED, "%s %s: %s", set_defs[cs].name, m->name, why);
	if (m->z_open) {
		inflateEnd(&m->z);
		m->z_open = 0;
	}
}

static int member_begin(struct member *m)
{
	uint8_t h[30];

	if (m->method != 0 && m->method != 8) {
		member_fail(m, "UNSUPPORTED ZIP METHOD");
		return 0;
	}
	if (fseek(zf, m->lho, SEEK_SET) || fread(h, 1, 30, zf) != 30 || le32(h) != 0x04034b50) {
		member_fail(m, "BAD LOCAL HEADER");
		return 0;
	}
	if (fseek(zf, m->lho + 30 + le16(h + 26) + le16(h + 28), SEEK_SET)) {
		member_fail(m, "SEEK FAILED");
		return 0;
	}
	m->data = memalign(128, m->usize ? m->usize : 1);
	if (!m->data) {
		member_fail(m, "OUT OF MEMORY");
		return 0;
	}
	memset(&m->z, 0, sizeof(m->z));
	if (m->method == 8) {
		if (inflateInit2(&m->z, -MAX_WBITS) != Z_OK) {
			member_fail(m, "INFLATEINIT FAILED");
			return 0;
		}
		m->z_open = 1;
	}
	m->crc = crc32(0, Z_NULL, 0);
	m->done = 0;
	m->cleft = m->csize;
	m->t_start = tb_read();
	m->state = M_LOAD;
	return 1;
}

static void member_crc(struct member *m, const uint8_t *p, uint32_t n)
{
	uint64_t t = tb_read();
	unsigned us;

	m->crc = crc32(m->crc, p, n);
	us = tb_us(t, tb_read());
	m->crc_us += us;
	tot_crc_us += us;
	tot_crc += n;
}

static void member_end(struct member *m)
{
	const struct set_def *d = &set_defs[cs];
	int r = (int)(m - sets[cs].m);
	unsigned wall = tb_us(m->t_start, tb_read()) / 1000;

	if (m->z_open) {
		inflateEnd(&m->z);
		m->z_open = 0;
	}
	if (m->done != m->usize || m->crc != m->crc_zip)
		m->state = M_BAD;
	else if (m->crc != d->crc[r] || m->usize != role_size[r])
		m->state = M_DIFF;
	else
		m->state = M_OK;
	log_printf(m->state == M_OK ? C_GREEN : C_RED,
	           "%s %s (%s) %08X %s, %u B: READ %u B %u.%03u S, INFLATE %u.%03u S, CRC %u.%03u S, WALL %u.%03u S",
	           d->name, role_name[r], m->name, (unsigned)m->crc,
	           m->state == M_OK ? "OK" : m->state == M_DIFF ? "NOT MAME'S DUMP" : "BAD (ZIP CRC/SIZE)",
	           (unsigned)m->done, (unsigned)m->csize, m->read_us / 1000000, m->read_us / 1000 % 1000,
	           m->inflate_us / 1000000, m->inflate_us / 1000 % 1000,
	           m->crc_us / 1000000, m->crc_us / 1000 % 1000, wall / 1000, wall % 1000);
}

/* One slice of work on the member being loaded. Returns 0 when it is finished. */
static int member_slice(struct member *m)
{
	uint64_t t;
	unsigned us;

	if (m->method == 0) { /* stored: read straight into place */
		uint32_t n = m->usize - m->done;
		if (n > sizeof(inbuf))
			n = sizeof(inbuf);
		t = tb_read();
		if (n && fread(m->data + m->done, 1, n, zf) != n) {
			member_fail(m, "READ ERROR");
			return 0;
		}
		us = tb_us(t, tb_read());
		m->read_us += us;
		tot_read_us += us;
		tot_read += n;
		member_crc(m, m->data + m->done, n);
		m->done += n;
		if (m->done == m->usize) {
			member_end(m);
			return 0;
		}
		return 1;
	}

	if (m->z.avail_in == 0 && m->cleft) {
		uint32_t n = m->cleft < sizeof(inbuf) ? m->cleft : sizeof(inbuf);
		t = tb_read();
		if (fread(inbuf, 1, n, zf) != n) {
			member_fail(m, "READ ERROR");
			return 0;
		}
		us = tb_us(t, tb_read());
		m->read_us += us;
		tot_read_us += us;
		tot_read += n;
		m->cleft -= n;
		m->z.next_in = inbuf;
		m->z.avail_in = n;
		return 1; /* the inflate is the next slice */
	}

	{
		uint32_t room = m->usize - m->done, made;
		int ret;

		if (room > OUT_SLICE)
			room = OUT_SLICE;
		m->z.next_out = m->data + m->done;
		m->z.avail_out = room;
		t = tb_read();
		ret = inflate(&m->z, Z_NO_FLUSH);
		us = tb_us(t, tb_read());
		m->inflate_us += us;
		tot_inflate_us += us;
		made = room - m->z.avail_out;
		member_crc(m, m->data + m->done, made);
		m->done += made;
		tot_inflated += made;
		if (ret == Z_STREAM_END) {
			member_end(m);
			return 0;
		}
		if (ret == Z_BUF_ERROR && m->z.avail_in == 0 && m->cleft == 0) {
			member_fail(m, "TRUNCATED DATA");
			return 0;
		}
		if (ret == Z_BUF_ERROR && m->done == m->usize) {
			member_fail(m, "LONGER THAN THE ZIP SAYS");
			return 0;
		}
		if (ret != Z_OK && ret != Z_BUF_ERROR) {
			member_fail(m, "INFLATE ERROR");
			return 0;
		}
		return 1;
	}
}

/* ---- the loader -------------------------------------------------------------- */

static void set_finish(void)
{
	struct romset *s = &sets[cs];
	struct mallinfo mi = mallinfo();
	int r, ok = 1;

	for (r = 0; r < NROLES; r++)
		ok &= s->m[r].state == M_OK;
	s->state = ok ? S_OK : S_BAD;
	s->ms = tb_us(s->t_start, tb_read()) / 1000;
	log_printf(ok ? C_GREEN : C_RED, "SET %s %s IN %u.%03u S, HEAP IN USE %u KB",
	           set_defs[cs].name, ok ? "OK" : "BAD", s->ms / 1000, s->ms % 1000,
	           (unsigned)(mi.uordblks / 1024));
	if (zf) {
		fclose(zf);
		zf = NULL;
	}
	lstate = L_DONE; /* test 38: only the chosen set */
	log_printf(C_YELLOW, "TEST: ROM LOADING FINISHED");
}

/* test 38: <dir>/<set>.zip or <dir>/roms/<set>.zip in the first folder that has it; 1 when a
 * set was found. quiet: no NOT FOUND lines (a scan that is tried again) */
static int scan_sets(int quiet)
{
	int s, i, k, any = 0;

	for (s = 0; s < NSETS; s++) {
		FILE *f = NULL;
#ifdef IB_GAME
		if (s != IB_GAME) { /* test 72: one game per image, only its zip looked for */
			sets[s].path[0] = 0;
			sets[s].state = S_NOTFOUND;
			continue;
		}
#endif
		for (i = 0; i < nroots && !f; i++)
			for (k = 0; k < 2 && !f; k++) {
				snprintf(sets[s].path, sizeof(sets[s].path), "%s/%s%s.zip", roots[i], k ? "roms/" : "",
				         set_defs[s].name);
				f = fopen(sets[s].path, "rb");
			}
		if (f) {
			fclose(f);
			sets[s].state = S_FOUND;
			any = 1;
			log_printf(C_WHITE, "SET %s: %s", set_defs[s].name, sets[s].path);
		} else {
			sets[s].path[0] = 0;
			sets[s].state = S_NOTFOUND;
			if (!quiet)
				log_printf(C_DIM, "SET %s: NO %s.ZIP BESIDE THE XEX, IN A FOLDER ABOVE IT OR IN THEIR ROMS FOLDERS",
				           set_defs[s].name, set_defs[s].name);
		}
	}
	return any;
}

/* ---- test 50: the disk kept awake until the choice ---------------------------- */

/* The set's zip opened for the keep-awake reads: uncached, else (uncached 0, or that open
 * failing) cached; state -1 when neither opens or the zip is under two blocks. */
static void keep_open(int s, int uncached)
{
	struct keep *k = &keeps[s];
	char kp[ROOT_MAX + 24];
	ANSI_STRING name;
	OBJECT_ATTRIBUTES attributes;
	IO_STATUS_BLOCK io;
	NTSTATUS status = 0;
	struct stat st;
	size_t i;

	k->state = -1;
	if (stat(sets[s].path, &st) != 0 || st.st_size / KEEP_BYTES < 2) {
		log_printf(C_YELLOW, "DISK: %s: NO SIZE, NOT KEPT AWAKE", set_defs[s].name);
		return;
	}
	k->blocks = (uint32_t)(st.st_size / KEEP_BYTES);
	/* the loader's paths are absolute, /Device/... or game:/..., the kernel's have '\' */
	snprintf(kp, sizeof(kp), "%s", sets[s].path);
	for (i = 0; kp[i]; i++)
		if (kp[i] == '/')
			kp[i] = '\\';
	name.length = (uint16_t)strlen(kp);
	name.maximum_length = (uint16_t)(name.length + 1);
	name.pointer = kp;
	attributes.root_directory = kp[0] == '\\' ? 0 : OB_DOS_DEVICES;
	attributes.name = &name;
	attributes.attributes = 0;
	if (uncached) {
		status = NtCreateFile(&k->h, GENERIC_READ | SYNCHRONIZE, &attributes, &io, NULL, FILE_ATTRIBUTE_NORMAL,
		                      FILE_SHARE_READ, FILE_OPEN,
		                      FILE_SYNCHRONOUS_IO_NONALERT | FILE_NON_DIRECTORY_FILE | FILE_NO_INTERMEDIATE_BUFFERING);
		if (NT_SUCCESS(status)) {
			k->state = 1;
			k->uncached = 1;
			log_printf(C_WHITE, "DISK: %s: 4 KB READ EVERY %u S UNTIL THE CHOICE, UNCACHED", set_defs[s].name,
			           KEEP_MS / 1000);
			return;
		}
	}
	if (NT_SUCCESS(NtCreateFile(&k->h, GENERIC_READ | SYNCHRONIZE, &attributes, &io, NULL, FILE_ATTRIBUTE_NORMAL,
	                            FILE_SHARE_READ, FILE_OPEN, FILE_SYNCHRONOUS_IO_NONALERT | FILE_NON_DIRECTORY_FILE))) {
		k->state = 1;
		k->uncached = 0;
		if (uncached)
			log_printf(C_YELLOW, "DISK: %s: THE UNCACHED OPEN FAILED (%08X), 4 KB READ EVERY %u S CACHED",
			           set_defs[s].name, (unsigned)status, KEEP_MS / 1000);
		else
			log_printf(C_YELLOW, "DISK: %s: 4 KB READ EVERY %u S CACHED", set_defs[s].name, KEEP_MS / 1000);
		return;
	}
	log_printf(C_RED, "DISK: %s: DID NOT OPEN, NOT KEPT AWAKE", set_defs[s].name);
}

static void keep_read(int s)
{
	struct keep *k = &keeps[s];
	IO_STATUS_BLOCK io;
	const uint64_t off = (uint64_t)k->blk * KEEP_BYTES;
	uint64_t a;
	NTSTATUS status;
	unsigned us;

	io.information = 0;
	a = tb_read();
	status = NtReadFile(k->h, 0, NULL, NULL, &io, keep_buf, KEEP_BYTES, &off);
	us = tb_us(a, tb_read());
	k->blk = (k->blk + KEEP_STEP) % k->blocks;
	if (!NT_SUCCESS(status) || io.information != KEEP_BYTES) {
		keep_fail++;
		log_printf(C_YELLOW, "DISK: %s: A %s READ AT %u FAILED (%08X, %u B)", set_defs[s].name,
		           k->uncached ? "UNCACHED" : "CACHED", (unsigned)off, (unsigned)status, (unsigned)io.information);
		NtClose(k->h);
		if (k->uncached)
			keep_open(s, 0);
		else
			k->state = -1;
		return;
	}
	keep_n++;
	keep_n_uncached += k->uncached;
	if (us < keep_min_us)
		keep_min_us = us;
	if (us > keep_max_us)
		keep_max_us = us;
	if (us >= KEEP_SLOW_US) {
		keep_slow++;
		log_printf(C_YELLOW, "DISK: %s: A KEEP-AWAKE READ TOOK %u MS (THE DISK HAD WOUND DOWN)", set_defs[s].name,
		           us / 1000);
	}
}

/* Every KEEP_MS while the menu waits: one read of each zip found. */
static void keep_awake(void)
{
	const uint64_t now = tb_read();
	int s;

	if (keep_first && tb_us(keep_last, now) < KEEP_MS * 1000)
		return;
	if (!keep_first)
		keep_first = now;
	keep_last = now;
	for (s = 0; s < NSETS; s++) {
		if (sets[s].state != S_FOUND)
			continue;
		if (!keeps[s].state)
			keep_open(s, 1);
		if (keeps[s].state > 0)
			keep_read(s);
	}
}

/* At the choice: the handles closed and what the reads saw. */
static void keep_end(void)
{
	unsigned s10;
	int s;

	for (s = 0; s < NSETS; s++)
		if (keeps[s].state > 0) {
			NtClose(keeps[s].h);
			keeps[s].state = -1;
		}
	if (!keep_first)
		return;
	/* a choice made just as the first read began is earlier than keep_first */
	s10 = t_choice > keep_first ? (unsigned)((t_choice - keep_first) * 10 / PPC_TIMEBASE_FREQ) : 0;
	log_printf(keep_slow || keep_fail || !keep_n ? C_YELLOW : C_GREEN,
	           "DISK: MENU %u.%u S, %u KEEP-AWAKE READS (%u UNCACHED), %u.%02u-%u.%02u MS, %u OVER %u MS, %u FAILED",
	           s10 / 10, s10 % 10, keep_n, keep_n_uncached, keep_n ? keep_min_us / 1000 : 0,
	           keep_n ? keep_min_us % 1000 / 10 : 0, keep_max_us / 1000, keep_max_us % 1000 / 10, keep_slow,
	           KEEP_SLOW_US / 1000, keep_fail);
}

/* One slice of loader work. Returns 0 when there is nothing to do this frame. */
static int slice(void)
{
	struct romset *s;

	switch (lstate) {
	case L_SCAN:
		if (wait_frames) {
			wait_frames--;
			return 0;
		}
		if (!scan_sets(scan_tries + 1 < SCAN_TRIES) && ++scan_tries < SCAN_TRIES) {
			wait_frames = 60; /* a stick the kernel has not mounted yet: about a second */
			return 0;
		}
		if (scan_tries)
			log_printf(scan_tries < SCAN_TRIES ? C_WHITE : C_RED, "STORAGE: %s AFTER %u SCANS",
			           scan_tries < SCAN_TRIES ? "A ZIP FOUND" : "NO ZIP", scan_tries + (scan_tries < SCAN_TRIES));
		lstate = L_CHOOSE;
		__sync_synchronize(); /* the sets' states before the flag */
		scanned = 1;
		return 1;

	case L_CHOOSE:
		if (choice == -2) {
			keep_awake(); /* test 50 */
			return 0;
		}
		__sync_synchronize();
		keep_end();
		if (choice < 0 || choice >= NSETS || sets[choice].state != S_FOUND) {
			log_printf(C_RED, "TEST: NO SET TO LOAD");
			lstate = L_DONE;
			return 0;
		}
		cs = choice;
		lstate = L_FIND;
		return 1;

	case L_FIND: {
		const struct set_def *d = &set_defs[cs];
		int r;

		s = &sets[cs];
		zf = fopen(s->path, "rb");
		if (!zf) {
			s->state = S_NOTFOUND;
			log_printf(C_RED, "SET %s: %s DID NOT OPEN AGAIN", d->name, s->path);
			lstate = L_DONE;
			log_printf(C_YELLOW, "TEST: ROM LOADING FINISHED");
			return 1;
		}
		s->state = S_LOAD;
		s->t_start = tb_read();
		if (!zip_parse(s, d)) {
			log_printf(C_RED, "SET %s: %s IS NOT A READABLE ZIP", d->name, s->path);
			set_finish();
			return 1;
		}
		/* test 50: the choice to the zip's directory read (a wound-down disk's wait was here) */
		log_printf(C_WHITE, "SET %s: %s, %u B, DIRECTORY READ %u MS AFTER THE CHOICE", d->name, s->path,
		           (unsigned)s->zip_size, tb_us(t_choice, tb_read()) / 1000);
		for (r = 0; r < NROLES; r++)
			if (s->m[r].state == M_MISSING)
				log_printf(C_RED, "SET %s: NO %s IN THE ZIP", d->name, role_name[r]);
		s->cur = -1;
		lstate = L_MEMBER;
		return 1;
	}

	case L_MEMBER:
		s = &sets[cs];
		if (s->cur >= 0 && s->m[s->cur].state == M_LOAD)
			return member_slice(&s->m[s->cur]) | 1;
		do
			s->cur++;
		while (s->cur < NROLES && s->m[s->cur].state != M_WAIT);
		if (s->cur >= NROLES) {
			set_finish();
			return 1;
		}
		member_begin(&s->m[s->cur]);
		return 1;

	default:
		return 0;
	}
}

/* LOADER_THREAD's task: slices back to back; a slice that has nothing to do (the scan
 * retry waits count 60 of them) is followed by a 16 ms sleep. */
static uint32_t loader_task(void *u)
{
	(void)u;
	while (lstate != L_DONE) {
		uint64_t a = tb_read();
		unsigned us;
		int more = slice();

		us = tb_us(a, tb_read());
		if (us > step_max_us)
			step_max_us = us;
		if (!more && lstate != L_DONE)
			xsdk_thread_sleep(16);
	}
	__sync_synchronize(); /* every result before the flag */
	finished = 1;
	return 0;
}

int romload_start(void)
{
	HANDLE h;

	find_roots();
	lstate = L_SCAN;
	cs = -1;
	__sync_synchronize();
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, loader_task, NULL, LOADER_THREAD)))
		return -1;
	NtClose(h);
	return 0;
}

int romload_scanned(void)
{
	if (!scanned)
		return 0;
	__sync_synchronize(); /* pairs with the loader's barrier */
	return 1;
}

int romload_found(int set)
{
	return romload_scanned() && set >= 0 && set < NSETS && sets[set].state == S_FOUND;
}

const char *romload_set_name(int set)
{
	return set >= 0 && set < NSETS ? set_defs[set].name : "-";
}

const char *romload_scan_device(void)
{
	return romload_scanned() ? data_root : NULL;
}

const char *romload_image_name(void)
{
	return image_name;
}

void romload_choose(int set)
{
	t_choice = tb_read(); /* test 50 */
	__sync_synchronize();
	choice = set;
}

int romload_chosen(void)
{
	return cs;
}

int romload_finished(void)
{
	if (!finished)
		return 0;
	__sync_synchronize(); /* pairs with the loader's barrier */
	return 1;
}

/* test 14: where recordings go (xsdk port: the data root) */
const char *romload_device(void)
{
	if (!finished || cs < 0 || sets[cs].state != S_OK)
		return NULL;
	return data_root;
}

const uint8_t *romload_member(int role, uint32_t *size)
{
	const struct member *m;

	if (!finished || cs < 0)
		return NULL;
	m = &sets[cs].m[role];
	if (m->state != M_OK)
		return NULL;
	*size = m->usize;
	return m->data;
}

/* ---- card rows --------------------------------------------------------------- */

static unsigned mbs10(uint64_t bytes, uint64_t us) /* MB/s (10^6) times 10 */
{
	return us ? (unsigned)(bytes * 10 / us) : 0;
}

static void upper(char *s)
{
	for (; *s; s++)
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
}

void romload_rows(char text[ROMLOAD_ROWS][100], uint32_t color[ROMLOAD_ROWS])
{
	int i, r, n;

	/* xsdk port: the .xex and the data root in place of the mounted devices */
	snprintf(text[0], 100, "XEX %.44s  DATA %.20s", image_name[0] ? image_name : "?", data_root);
	upper(text[0]);
	color[0] = lstate == L_SCAN && scan_tries ? C_YELLOW : image_name[0] ? C_GREEN : C_YELLOW;

	if (cs < 0) { /* test 38: before the choice, every set on one row */
		n = snprintf(text[1], 100, "SETS");
		for (i = 0; i < NSETS; i++)
			n += snprintf(text[1] + n, 100 - n, "  %s %s", set_defs[i].name,
			              sets[i].state == S_FOUND ? "FOUND" : sets[i].state == S_NOTFOUND ? "NOT FOUND" : "--");
		upper(text[1]);
		color[1] = scanned ? C_WHITE : C_DIM;
		n = snprintf(text[2], 100, "%s", !scanned ? (scan_tries ? "        LOOKING FOR THE ZIPS AGAIN" :
		             "        LOOKING FOR THE ZIPS") : choice == -2 ? "        WAITING FOR THE CHOICE OF GAME" :
		             "        NO SET CHOSEN");
		if (keep_n || keep_fail) /* test 50 */
			snprintf(text[2] + n, 100 - n, "  DISK %u READS %u-%u MS%s", keep_n, keep_n ? keep_min_us / 1000 : 0,
			         keep_max_us / 1000, keep_fail ? " FAILS" : "");
		color[2] = keep_slow || keep_fail ? C_YELLOW : color[1];
	}
	if (cs >= 0) { /* the chosen set: test 6's two rows */
		const struct romset *s = &sets[cs];
		char *a = text[1], *b = text[2];

		i = cs;
		switch (s->state) {
		case S_WAIT:
			snprintf(a, 100, "%-8s WAITING", set_defs[i].name);
			color[1] = C_DIM;
			break;
		case S_NOTFOUND:
			snprintf(a, 100, "%-8s NOT FOUND", set_defs[i].name);
			color[1] = C_DIM;
			break;
		case S_FOUND:
			snprintf(a, 100, "%-8s %.50s", set_defs[i].name, s->path);
			color[1] = C_WHITE;
			break;
		case S_LOAD:
			snprintf(a, 100, "%-8s %u B  LOADING  %u S", set_defs[i].name, (unsigned)s->zip_size,
			         tb_us(s->t_start, tb_read()) / 1000000);
			color[1] = C_YELLOW;
			break;
		default:
			snprintf(a, 100, "%-8s %u B  %s IN %u.%03u S", set_defs[i].name, (unsigned)s->zip_size,
			         s->state == S_OK ? "ALL CRC OK" : "BAD", s->ms / 1000, s->ms % 1000);
			color[1] = s->state == S_OK ? C_GREEN : C_RED;
			break;
		}
		upper(a);

		n = snprintf(b, 100, "        ");
		for (r = 0; r < NROLES; r++) {
			const struct member *m = &s->m[r];
			static const char *const st[] = {"MISSING", "--", "", "OK", "DIFF", "BAD", "ERR"};
			if (s->state == S_WAIT || s->state == S_NOTFOUND || s->state == S_FOUND)
				n += snprintf(b + n, 100 - n, " %s --", role_name[r]);
			else if (m->state == M_LOAD)
				n += snprintf(b + n, 100 - n, " %s %u%%", role_name[r],
				              m->usize ? (unsigned)((uint64_t)m->done * 100 / m->usize) : 0);
			else
				n += snprintf(b + n, 100 - n, " %s %s", role_name[r], st[m->state]);
		}
		color[2] = color[1];
	}

	{
		unsigned rd = mbs10(tot_read, tot_read_us), in = mbs10(tot_inflated, tot_inflate_us);
		unsigned cr = mbs10(tot_crc, tot_crc_us);
		snprintf(text[3], 100, "LOAD MB/S RD %u.%u INF %u.%u CRC %u.%u  T%d STEP MAX %u US",
		         rd / 10, rd % 10, in / 10, in % 10, cr / 10, cr % 10, LOADER_THREAD, step_max_us);
		color[3] = C_WHITE;
	}
}

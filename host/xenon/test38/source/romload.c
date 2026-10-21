/* Test 6 ROM loader: test 5's (goal 5 SUCCESS), now for one set and on its own
 * hardware thread. Finds MAME's <set>.zip on FAT USB storage, inflates every
 * member into RAM with zlib and checks it against MAME 0.289's CRC32 (cv1k.cpp) and
 * against the zip's own CRC. The buffers stay allocated: the game runs from them.
 *
 * Test 38 (goal 19, both games in one ELF): the loader first mounts and looks for
 * every set's zip (romload_scanned), then waits until the main thread picks one
 * (romload_choose: the ini's game key or the pad menu) and loads only that one. While
 * it waits it leaves USB alone, so the main thread polls the pads for the menu.
 *
 * Mounting: libfat's fatInitDefault() would also try "sda" (the hard disk through
 * xenon_ata_ops, never initialised here), so only the three tinyehci mass storage
 * slots are mounted, under libfat's own names: uda/udb/udc = usb2mass_ops_0/1/2
 * (= _ehci_data[0..2], in the order USBStorage_Init found the devices). A slot that
 * is not ready yet is retried once a second for 10 s.
 *
 * Each set is looked for at <dev>:/<set>.zip and <dev>:/roms/<set>.zip. Members are
 * matched to U4/U2/U23/U24 by CRC first, then by name (the part after the last '_').
 * The work runs in slices (one 64 KB read, one inflate of at most 256 KB output, or
 * one zip directory parse) back to back on LOADER_THREAD, so the frame loop on
 * thread 0 keeps the card at 60 Hz. While it runs, nothing else touches USB: the
 * main thread stops polling once the loader starts. Results are published with a
 * barrier before `finished` is set. */
#include <malloc.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include <diskio/disc_io.h>
#include <libfat/fat.h>
#include <time/time.h>
#include <usb/usbmain.h>
#include <xenon_soc/xenon_power.h>
#include <zlib.h>

#include "card.h"
#include "romload.h"

/* drivers/usb/tinyehci/usbstorage.c */
extern DISC_INTERFACE usb2mass_ops_0, usb2mass_ops_1, usb2mass_ops_2;

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

#define NDEVS 3
static const char *const dev_name[NDEVS] = {"uda", "udb", "udc"};
static DISC_INTERFACE *const dev_ops[NDEVS] = {&usb2mass_ops_0, &usb2mass_ops_1, &usb2mass_ops_2};
static int dev_state[NDEVS]; /* 0 not ready, 1 mounted, -1 mount failed */

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
	char path[48];
	uint32_t zip_size;
	struct member m[NROLES];
	int cur;                 /* member being loaded */
	uint64_t t_start;
	unsigned ms;             /* wall time for the whole set */
};

static struct romset sets[NSETS];

enum { L_IDLE, L_MOUNT, L_SCAN, L_CHOOSE, L_FIND, L_MEMBER, L_DONE };
static int lstate = L_IDLE;
static int cs = -1;          /* the chosen set, -1 before the choice (or none) */
static volatile int choice = -2; /* romload_choose: -2 not yet, -1 none, else a set */
static volatile int scanned;
static FILE *zf;
static unsigned mount_tries, wait_frames;

/* totals for the throughput row */
static uint64_t tot_read, tot_inflated, tot_crc;
static uint64_t tot_read_us, tot_inflate_us, tot_crc_us;
static unsigned step_max_us;
static volatile int finished;
static uint8_t thread_stack[256 * 1024] __attribute__((aligned(128)));

static uint8_t inbuf[64 * 1024] __attribute__((aligned(128)));
#define OUT_SLICE (256 * 1024)

static uint32_t le16(const uint8_t *p) { return p[0] | p[1] << 8; }
static uint32_t le32(const uint8_t *p) { return p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24; }

/* ---- mount ------------------------------------------------------------------- */

static int mount_all(void)
{
	int i, any = 0;

	for (i = 0; i < NDEVS; i++) {
		if (dev_state[i] == 0 && dev_ops[i]->isInserted()) {
			dev_state[i] = fatMountSimple(dev_name[i], dev_ops[i]) ? 1 : -1;
			log_printf(dev_state[i] > 0 ? C_GREEN : C_RED, "STORAGE: %s %s", dev_name[i],
			           dev_state[i] > 0 ? "MOUNTED" : "MOUNT FAILED (NOT FAT?)");
		}
		any |= dev_state[i] > 0;
	}
	return any;
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

/* test 38: <dev>:/<set>.zip or <dev>:/roms/<set>.zip on the first mounted device that has it */
static void scan_sets(void)
{
	int s, i, k;

	for (s = 0; s < NSETS; s++) {
		FILE *f = NULL;
		for (i = 0; i < NDEVS && !f; i++)
			for (k = 0; k < 2 && !f && dev_state[i] > 0; k++) {
				snprintf(sets[s].path, sizeof(sets[s].path), "%s:/%s%s.zip", dev_name[i], k ? "roms/" : "",
				         set_defs[s].name);
				f = fopen(sets[s].path, "rb");
			}
		if (f) {
			fclose(f);
			sets[s].state = S_FOUND;
			log_printf(C_WHITE, "SET %s: %s", set_defs[s].name, sets[s].path);
		} else {
			sets[s].path[0] = 0;
			sets[s].state = S_NOTFOUND;
			log_printf(C_DIM, "SET %s: NO %s.ZIP IN THE ROOT OR /ROMS OF A MOUNTED DEVICE", set_defs[s].name,
			           set_defs[s].name);
		}
	}
}

/* One slice of loader work. Returns 0 when there is nothing to do this frame. */
static int slice(void)
{
	struct romset *s;

	switch (lstate) {
	case L_MOUNT:
		if (wait_frames) {
			wait_frames--;
			return 0;
		}
		if (mount_tries)
			usb_do_poll(); /* this thread owns USB now: let tinyehci find a late stick */
		if (mount_all()) {
			lstate = L_SCAN;
			return 1;
		}
		if (++mount_tries >= 10) {
			log_printf(C_RED, "STORAGE: NO FAT USB STORAGE AFTER 10 S");
			lstate = L_SCAN; /* every set NOT FOUND */
			return 1;
		}
		wait_frames = 60;
		return 0;

	case L_SCAN:
		scan_sets();
		lstate = L_CHOOSE;
		__sync_synchronize(); /* the sets' states before the flag */
		scanned = 1;
		return 1;

	case L_CHOOSE: /* the main thread polls USB for the menu meanwhile */
		if (choice == -2)
			return 0;
		__sync_synchronize();
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
		log_printf(C_WHITE, "SET %s: %s, %u B", d->name, s->path, (unsigned)s->zip_size);
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

/* LOADER_THREAD's task: slices back to back; a slice that has nothing to do (the
 * mount retry waits count 60 of them) is followed by a 16 ms pause. */
static void loader_task(void)
{
	while (lstate != L_DONE) {
		uint64_t a = tb_read();
		unsigned us;
		int more = slice();

		us = tb_us(a, tb_read());
		if (us > step_max_us)
			step_max_us = us;
		if (!more && lstate != L_DONE)
			mdelay(16);
	}
	__sync_synchronize(); /* every result before the flag */
	finished = 1;
}

int romload_start(void)
{
	lstate = L_MOUNT;
	cs = -1;
	__sync_synchronize();
	return xenon_run_thread_task(LOADER_THREAD, thread_stack + sizeof(thread_stack) - 256, loader_task);
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

static const char *path_device(const char *path)
{
	int i;

	for (i = 0; i < NDEVS; i++)
		if (!strncmp(path, dev_name[i], 3) && path[3] == ':')
			return dev_name[i];
	return NULL;
}

const char *romload_scan_device(void)
{
	int s;

	if (!romload_scanned())
		return NULL;
	for (s = 0; s < NSETS; s++)
		if (sets[s].state == S_FOUND)
			return path_device(sets[s].path);
	return NULL;
}

void romload_choose(int set)
{
	__sync_synchronize(); /* the main thread's USB work before the loader's */
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

/* test 14: the mounted device the set came from ("uda"...), where recordings go */
const char *romload_device(void)
{
	if (!finished || cs < 0 || sets[cs].state != S_OK)
		return NULL;
	return path_device(sets[cs].path);
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

void romload_rows(char text[ROMLOAD_ROWS][100], uint32_t color[ROMLOAD_ROWS])
{
	int i, r, n;

	n = snprintf(text[0], 100, "DISK");
	for (i = 0; i < NDEVS; i++)
		n += snprintf(text[0] + n, 100 - n, " %s %s", dev_name[i],
		              dev_state[i] > 0 ? "MOUNTED" : dev_state[i] < 0 ? "FAILED" : "--");
	if (lstate == L_MOUNT)
		snprintf(text[0] + n, 100 - n, "  MOUNT TRY %u", mount_tries + 1);
	color[0] = (dev_state[0] > 0 || dev_state[1] > 0 || dev_state[2] > 0) ? C_GREEN :
	           lstate == L_MOUNT ? C_YELLOW : C_RED;

	if (cs < 0) { /* test 38: before the choice, every set on one row */
		n = snprintf(text[1], 100, "SETS");
		for (i = 0; i < NSETS; i++)
			n += snprintf(text[1] + n, 100 - n, "  %s %s", set_defs[i].name,
			              sets[i].state == S_FOUND ? sets[i].path : sets[i].state == S_NOTFOUND ? "NOT FOUND" : "--");
		color[1] = scanned ? C_WHITE : C_DIM;
		snprintf(text[2], 100, "%s", !scanned ? "        LOOKING FOR THE ZIPS" :
		         choice == -2 ? "        WAITING FOR THE CHOICE OF GAME" : "        NO SET CHOSEN");
		color[2] = color[1];
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
			snprintf(a, 100, "%-8s %s", set_defs[i].name, s->path);
			color[1] = C_WHITE;
			break;
		case S_LOAD:
			snprintf(a, 100, "%-8s %s %u B  LOADING  %u S", set_defs[i].name, s->path,
			         (unsigned)s->zip_size, tb_us(s->t_start, tb_read()) / 1000000);
			color[1] = C_YELLOW;
			break;
		default:
			snprintf(a, 100, "%-8s %s %u B  %s IN %u.%03u S", set_defs[i].name, s->path,
			         (unsigned)s->zip_size, s->state == S_OK ? "ALL CRC OK" : "BAD",
			         s->ms / 1000, s->ms % 1000);
			color[1] = s->state == S_OK ? C_GREEN : C_RED;
			break;
		}

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

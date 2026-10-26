/* Test 14: input recording (see recorder.h). Threads: rec_begin/rec_frame on the game
 * thread, rec_service on the USB thread, which does every file operation (libfat is used
 * by no other thread once loading is over). The entry array is written only by the game
 * thread; an entry is complete before the count that covers it is published. Test 40: the file's
 * text also goes to the network log (source/netlog.c) as it is made. */
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#include "xplat.h"

#include "card.h"
#include "netlog.h"
#include "recorder.h"
#include "wgate.h"

#define REC_ENTRIES (1u << 20)   /* 20 MB of entries: 4.8 hours of game at 60 Hz */
#define REC_TEXT (128 * 1024)    /* text waiting for the next write (test 14d: room while the gate holds) */
#define REC_CHUNK (48 * 1024)    /* write as soon as this much text waits */
#define REC_FLUSH_US 2000000     /* and at least this often while any text waits */
#define REC_OPEN_TRIES 5         /* failed opens (nothing written) before giving up */

struct rec_entry {
	uint32_t frame, scr, word;
	uint8_t c, d, l, f;
	uint8_t vbl, pad[3];
};

enum { RS_OFF, RS_WAIT, RS_ON, RS_ERR };

/* game thread */
static struct rec_entry *ents;
static volatile uint32_t n_added;
static volatile int full;

/* set by rec_begin before RS_WAIT is published, then read-only */
static char dev_name[64]; /* xsdk port: a data root such as /Device/Mass0 */
static char header[REC_HEADER_MAX]; /* test 29: 2048 (was 1024), test 33: the "# eeprom" line */
static volatile int state = RS_OFF;
static char why[64]; /* RS_OFF / RS_ERR reason */
static int off_by_choice; /* test 33: rec_off() */

/* USB thread */
static char path[160];
static char text[REC_TEXT];
static unsigned tlen;
static uint32_t n_done;                          /* entries turned into text */
static uint8_t last_ports[4] = {0xFF, 0xFF, 0xFF, 0xFF};
static uint8_t last_timing;                      /* test 17: 0 = none written yet */
volatile uint8_t rec_timing;
static uint8_t last_dsw;                         /* test 53: the switches at power-on are 0 */
volatile uint8_t rec_dsw;
static volatile uint32_t saved_frame, saved_n;   /* last frame on the stick, entries on the stick */
static volatile unsigned saved_kb, writes, inputs_written, open_fails;
static volatile unsigned write_us, write_us_max;
static uint64_t last_write, saved_bytes;
static struct wgate gate; /* test 14d */

void rec_begin(const char *dev, const char *hdr)
{
	if (!dev) {
		snprintf(why, sizeof(why), "NO STORAGE DEVICE");
		return;
	}
	ents = memalign(128, REC_ENTRIES * sizeof(struct rec_entry));
	if (!ents) {
		snprintf(why, sizeof(why), "OUT OF MEMORY");
		return;
	}
	snprintf(dev_name, sizeof(dev_name), "%s", dev);
	snprintf(header, sizeof(header), "%s", hdr);
	__sync_synchronize(); /* the above before the state */
	state = RS_WAIT;
}

void rec_off(const char *reason)
{
	snprintf(why, sizeof(why), "%s", reason);
	off_by_choice = 1;
}

void rec_frame(uint32_t frame, uint8_t c, uint8_t d, uint8_t l, uint8_t f, uint32_t scr, uint32_t word,
               unsigned vbl)
{
	uint32_t n = n_added;
	struct rec_entry *e;

	if (!ents || full)
		return;
	if (n >= REC_ENTRIES) {
		full = 1;
		log_printf(C_RED, "REC: BUFFER FULL AT FRAME %u, RECORDING STOPS", (unsigned)frame);
		return;
	}
	e = &ents[n];
	e->frame = frame;
	e->scr = scr;
	e->word = word;
	e->c = c;
	e->d = d;
	e->l = l;
	e->f = f;
	e->vbl = (uint8_t)(vbl > 255 ? 255 : vbl);
	e->pad[0] = rec_timing;
	e->pad[1] = rec_dsw; /* test 53 */
	e->pad[2] = 0;
	__sync_synchronize(); /* the entry before the count */
	n_added = n + 1;
}

/* test 69: an entry that is a save state's line (pad[2] = 0x80 | what << 4 | slot) */
void rec_state(uint32_t frame, int what, int slot)
{
	uint32_t n = n_added;
	struct rec_entry *e;

	if (!ents || full || n >= REC_ENTRIES)
		return;
	e = &ents[n];
	memset(e, 0, sizeof(*e));
	e->frame = frame;
	e->pad[2] = (uint8_t)(0x80 | (what & 1) << 4 | (slot & 15));
	__sync_synchronize(); /* the entry before the count */
	n_added = n + 1;
}

/* test 81: a host setting's line (pad[2] = 0x40, c = what, d = value) */
void rec_host(uint32_t frame, int what, int value)
{
	uint32_t n = n_added;
	struct rec_entry *e;

	if (!ents || full || n >= REC_ENTRIES)
		return;
	e = &ents[n];
	memset(e, 0, sizeof(*e));
	e->frame = frame;
	e->c = (uint8_t)what;
	e->d = (uint8_t)value;
	e->pad[2] = 0x40;
	__sync_synchronize(); /* the entry before the count */
	n_added = n + 1;
}

/* <dev>:/ibara360/recNNNN.txt, the first number not on the stick, with the header */
static void open_file(void)
{
	char dir[128];
	struct stat st;
	FILE *f;
	int i, ok;

	snprintf(dir, sizeof(dir), "%s/ibara360", dev_name);
	mkdir(dir, 0777); /* fails when it exists; the stat below tells */
	if (stat(dir, &st) != 0 || !S_ISDIR(st.st_mode)) {
		snprintf(why, sizeof(why), "CANNOT CREATE %s", dir);
		state = RS_ERR;
		log_printf(C_RED, "REC: %s, NO RECORDING", why);
		return;
	}
	for (i = 1; i < 10000; i++) {
		snprintf(path, sizeof(path), "%s/rec%04d.txt", dir, i);
		if (stat(path, &st) != 0)
			break;
	}
	if (i == 10000) {
		snprintf(why, sizeof(why), "9999 RECORDINGS IN %s", dir);
		state = RS_ERR;
		log_printf(C_RED, "REC: %s, NO RECORDING", why);
		return;
	}
	wgate_io(1);
	f = fopen(path, "wb");
	ok = f && fwrite(header, 1, strlen(header), f) == strlen(header);
	if (f && fclose(f) != 0)
		ok = 0;
	wgate_io(0);
	if (!ok) {
		snprintf(why, sizeof(why), "CANNOT WRITE %s", path);
		state = RS_ERR;
		log_printf(C_RED, "REC: %s, NO RECORDING", why);
		return;
	}
	saved_bytes = strlen(header);
	saved_kb = (unsigned)(saved_bytes / 1024);
	netlog_name(NL_REC, strrchr(path, '/') + 1);
	netlog_put(NL_REC, header, (unsigned)strlen(header));
	last_write = tb_read();
	state = RS_ON;
	log_printf(C_GREEN, "REC: RECORDING TO %s", path);
}

/* One open, append, close. A failed open writes nothing and is retried; a failed write
 * or close may leave part of the text on the stick, so recording stops there. */
static void write_text(uint32_t last_frame)
{
	uint64_t t0 = tb_read();
	FILE *f;
	size_t w;
	int r;
	unsigned us;

	wgate_io(1);
	f = fopen(path, "ab");
	last_write = t0;
	if (!f) {
		wgate_io(0);
		if (++open_fails >= REC_OPEN_TRIES) {
			snprintf(why, sizeof(why), "OPEN FAILED %u TIMES", open_fails);
			state = RS_ERR;
			log_printf(C_RED, "REC: %s, RECORDING STOPS AT FRAME %u", why, (unsigned)saved_frame);
		}
		return;
	}
	w = fwrite(text, 1, tlen, f);
	r = fclose(f);
	wgate_io(0);
	us = tb_us(t0, tb_read());
	write_us = us;
	if (us > write_us_max)
		write_us_max = us;
	if (w != tlen || r != 0) {
		snprintf(why, sizeof(why), "WRITE FAILED (%u OF %u B)", (unsigned)w, tlen);
		state = RS_ERR;
		log_printf(C_RED, "REC: %s, RECORDING STOPS AFTER FRAME %u", why, (unsigned)saved_frame);
		return;
	}
	writes++;
	saved_bytes += tlen;
	saved_kb = (unsigned)(saved_bytes / 1024);
	saved_frame = last_frame;
	saved_n = n_done;
	tlen = 0;
}

volatile int rec_final; /* test 72 */

int rec_service(void)
{
	static uint32_t last_frame; /* the last frame in text[] */
	uint32_t n;
	unsigned t0;

	if (state == RS_WAIT) {
		open_file();
		return 1;
	}
	if (state != RS_ON)
		return 0;
	n = n_added;
	__sync_synchronize(); /* the count before the entries it covers */
	t0 = tlen;
	while (n_done < n && tlen + 112 <= REC_TEXT) { /* timing + dsw + input + s lines (tests 17, 53) */
		const struct rec_entry *e = &ents[n_done];
		uint8_t p[4] = {e->c, e->d, e->l, e->f};
		if (e->pad[2] & 0x80) { /* test 69: a save state's line */
			tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "# %s %u %u\n", e->pad[2] & 0x10 ? "load" : "save",
			                           (unsigned)e->frame, (unsigned)(e->pad[2] & 15));
			n_done++;
			continue;
		}
		if (e->pad[2] == 0x40) { /* test 81: a host setting's line */
			tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "# host %u %u %u\n", (unsigned)e->frame,
			                           (unsigned)e->c, (unsigned)e->d);
			n_done++;
			continue;
		}
		if (e->pad[0] && e->pad[0] != last_timing) {
			tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "# timing %u %s\n", (unsigned)e->frame,
			                           e->pad[0] == 9 ? "fitplus7" : e->pad[0] == 8 ? "fitplus6" :
			                           e->pad[0] == 7 ? "fitplus5" : e->pad[0] == 6 ? "fitplus4" :
			                           e->pad[0] == 5 ? "fitplus3" : e->pad[0] == 4 ? "fitplus2" :
			                           e->pad[0] == 3 ? "fitplus" :
			                           e->pad[0] == 1 ? "fit" : "mame");
			last_timing = e->pad[0];
		}
		if (e->pad[1] != last_dsw) { /* test 53 */
			tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "# dsw %u %02X\n", (unsigned)e->frame,
			                           (unsigned)e->pad[1]);
			last_dsw = e->pad[1];
		}
		if (memcmp(p, last_ports, 4)) {
			tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "%u %02X %02X %02X %02X\n", (unsigned)e->frame,
			                           p[0], p[1], p[2], p[3]);
			memcpy(last_ports, p, 4);
			inputs_written++;
		}
		tlen += (unsigned)snprintf(text + tlen, REC_TEXT - tlen, "s %u %08X %08X %u\n", (unsigned)e->frame,
		                           (unsigned)e->scr, (unsigned)e->word, e->vbl);
		last_frame = e->frame;
		n_done++;
	}
	if (tlen > t0) /* test 40: as it is made, the file gets it at the next write */
		netlog_put(NL_REC, text + t0, tlen - t0);
	if (tlen && (tlen >= REC_CHUNK || tb_us(last_write, tb_read()) >= REC_FLUSH_US || full || rec_final)) {
		if (!wgate_open(&gate))
			return 0;
		write_text(last_frame);
		return 1;
	}
	return 0;
}

void rec_rows(char t[REC_ROWS][100], uint32_t color[REC_ROWS])
{
	int st = state;
	unsigned i;

	if (st == RS_OFF || (st == RS_ERR && !path[0])) {
		snprintf(t[0], 100, "REC OFF: %s", why[0] ? why : "NOT STARTED");
		color[0] = why[0] && !off_by_choice ? C_RED : C_DIM;
		t[1][0] = 0;
		color[1] = C_DIM;
		return;
	}
	if (st == RS_WAIT) {
		snprintf(t[0], 100, "REC %s: OPENING THE FILE", dev_name);
		color[0] = C_YELLOW;
		t[1][0] = 0;
		color[1] = C_DIM;
		return;
	}
	snprintf(t[0], 100, "REC %s  FRAMES %u  INPUTS %u%s", path, (unsigned)n_added, inputs_written,
	         full ? "  FULL" : "");
	for (i = 0; t[0][i]; i++)
		if (t[0][i] >= 'a' && t[0][i] <= 'z')
			t[0][i] -= 32;
	color[0] = st == RS_ON && !full ? C_GREEN : C_RED;
	if (st == RS_ERR)
		snprintf(t[1], 100, "REC STOPPED: %s  SAVED TO FRAME %u", why, (unsigned)saved_frame);
	else
		snprintf(t[1], 100, "SAVED TO FRAME %u (%u KB)  WRITES %u  MS %u.%02u MAX %u.%02u", (unsigned)saved_frame,
		         saved_kb, writes, write_us / 1000, write_us / 10 % 100, write_us_max / 1000, write_us_max / 10 % 100);
	if (st != RS_ERR && open_fails) {
		size_t k = strlen(t[1]);
		snprintf(t[1] + k, 100 - k, " FAIL %u", open_fails);
	}
	color[1] = st == RS_ERR ? C_RED : C_WHITE;
}

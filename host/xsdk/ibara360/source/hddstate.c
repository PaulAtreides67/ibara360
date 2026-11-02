/* Test 84: save states on the hard disk (hddstate.h). Test 86: the replays' files. */
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include "card.h"
#include "cv1k.h"
#include "hddstate.h"
#include "state.h"
#include "xplat.h"
#include "zlib.h"

#define HDD_MAGIC 0x49425354u      /* "IBST" */
#define HDD_RP_MAGIC 0x49425250u   /* test 86: "IBRP", a replay */
#define HDD_BOM 0x01020304u        /* as the machine that wrote it stores a word (the 360: big-endian) */
#define HDD_VERSION 1u
#define HEAD_BYTES 512u
#define THUMB_BYTES (HDD_THUMB_W * HDD_THUMB_H * 2u)
#define CHUNK (128u << 10)         /* a chunk's raw bytes at most (16 VRAM blocks) */
#define NBUF 8                     /* chunks in flight */
#define WORKERS 2                  /* the blitter's (main.c's BANDS) */
#define MAX_CHUNKS 1400            /* the moment's ~610, the stage start's up to ~580 more */
#define NO_SLOT 0xFFFFFFFFu

/* the sections, in file order: the moment's, then the stage start's, the moment's VRAM last (a load changes the
 * machine's own memory only there). Test 86: SEC_INPUT = a replay's inputs (main.c's buffer), numbered after the
 * others (the chunk table stores the numbers: test 84's files keep theirs) and in the file before the VRAM */
enum { SEC_DEV_M, SEC_CHIP_M, SEC_RAM_M, SEC_DEV_S, SEC_CHIP_S, SEC_RAM_S, SEC_BLK_S, SEC_VRAM_M, SEC_INPUT, SEC_N };
static const int sec_order[SEC_N] = {SEC_DEV_M, SEC_CHIP_M, SEC_RAM_M, SEC_DEV_S, SEC_CHIP_S, SEC_RAM_S, SEC_BLK_S,
                                     SEC_INPUT, SEC_VRAM_M};

struct head {                      /* the file's first HEAD_BYTES (zero-padded), words as the writer stores them */
	uint32_t magic, bom, version, head_crc; /* head_crc: CRC-32 of the bytes before the chunks, with it 0 */
	uint32_t set, image_crc, patch_crc, special;
	uint32_t dev_bytes, chip_bytes, ram_bytes, host_bytes;
	uint32_t vb_n, vb_bytes, chunk_bytes, n_chunks;
	uint32_t n_sblk, stage_slot, moment_slot, frame;
	uint32_t thumb_off, host_off, list_off, table_off, data_off, file_bytes;
	int32_t stage, side, ship, type, mode, players;
	uint32_t score;
	int32_t y, mo, d, h, mi;
	uint32_t input_bytes;          /* test 86: SEC_INPUT's (0 in a state's file, test 84's: its zero padding) */
	uint32_t score2, frames, flags; /* a replay's: the other side's score, the run's vblanks, HDD_RP_* */
};
_Static_assert(sizeof(struct head) <= HEAD_BYTES, "the header fits its bytes");

struct tab {                       /* a chunk */
	uint32_t sec, off, len;        /* its section and raw bytes there */
	uint32_t foff, clen, crc;      /* its deflated bytes in the file, their CRC-32 */
};

enum { B_FREE, B_TODO, B_WORK, B_DONE, B_ERR };
static struct hbuf {
	uint8_t *raw, *comp;
	volatile int state;
	int chunk;
	uint32_t clen, crc;
} buf[NBUF];
static size_t comp_cap;
static z_stream dz[WORKERS], iz[WORKERS];
static volatile int job_on;        /* the workers stay in hdd_work */

static struct hdd_game G;
static int ready;
static struct hdd_info slots[HDD_SLOTS];
static size_t dev_bytes, chip_bytes;
static uint8_t *pre;               /* the bytes before the chunks (header, picture, host, list, table) */
static size_t pre_cap;

/* test 86: the replays' list, newest first */
static struct hdd_rpinfo rps[HDD_RP_MAX];
static int rp_n, rp_last;

static struct {
	int on, save, k, n, next_issue, next_done, stage_slot, first_vram;
	int rp, moment;                /* test 86: a replay's job (k = its number), the moment's runtime slot */
	FILE *f;
	char tmp[176], path[176], why[48];
	struct head h;
	struct tab *t;
	uint16_t *list;
	uint8_t *host;                 /* a load's: main.c's record to fill */
	struct hdd_info info;          /* a save's summary (the slot's once written) */
	uint32_t pos;
	uint64_t t0, io, idle;
	uint64_t raw;
} J;
struct hdd_stats hdd_stats;

static void slot_path(char *p, size_t n, int k, const char *ext)
{
	snprintf(p, n, "%s/slot%02d.%s", G.dir, k + 1, ext); /* slot01 .. slot10, as the SLOTS page numbers them */
}

static void rp_path(char *p, size_t n, int num, const char *ext)
{
	snprintf(p, n, "%s/rep%04d.%s", G.rp_dir, num, ext); /* test 86 */
}

static uint32_t sec_bytes(const struct head *h, int sec)
{
	const int s = h->stage_slot != NO_SLOT;

	switch (sec) {
	case SEC_DEV_M: return h->dev_bytes;
	case SEC_CHIP_M: return h->chip_bytes;
	case SEC_RAM_M: return h->ram_bytes;
	case SEC_DEV_S: return s ? h->dev_bytes : 0;
	case SEC_CHIP_S: return s ? h->chip_bytes : 0;
	case SEC_RAM_S: return s ? h->ram_bytes : 0;
	case SEC_BLK_S: return s ? h->n_sblk * h->vb_bytes : 0;
	case SEC_VRAM_M: return h->vb_n * h->vb_bytes;
	case SEC_INPUT: return h->input_bytes; /* test 86 */
	}
	return 0;
}

/* a section's memory (the slots' own buffers; test 86: main.c's input buffer), NULL for the VRAM ones (block by
 * block) */
static uint8_t *sec_mem(int sec)
{
	const int m = J.moment, s = J.stage_slot;
	size_t n;

	switch (sec) {
	case SEC_DEV_M: return rt_slot_dev(m);
	case SEC_CHIP_M: return ymz770_chip(m, &n);
	case SEC_RAM_M: return rt_slot_ram(m);
	case SEC_DEV_S: return rt_slot_dev(s);
	case SEC_CHIP_S: return ymz770_chip(s, &n);
	case SEC_RAM_S: return rt_slot_ram(s);
	case SEC_INPUT: return G.rp_input;
	}
	return NULL;
}

/* test 86: <dev>/ibara360/<kind>, then the game's folder, each only when not there (test 85) */
static void make_dirs(const char *dir)
{
	char d[160];
	struct stat st;
	char *e;

	snprintf(d, sizeof(d), "%s", dir);
	e = strrchr(d, '/');
	if (e) {
		*e = 0;
		if (stat(d, &st) != 0)
			mkdir(d, 0777);
	}
	if (stat(dir, &st) != 0)
		mkdir(dir, 0777);
}

int hdd_init(const struct hdd_game *g)
{
	const size_t hb = g->host_bytes > g->rp_host_bytes ? g->host_bytes : g->rp_host_bytes;
	int k, w;

	G = *g;
	dev_bytes = rt_state_dev_bytes();
	ymz770_chip(0, &chip_bytes);
	comp_cap = deflateBound(NULL, CHUNK);
	for (k = 0; k < NBUF; k++) {
		buf[k].raw = malloc(CHUNK);
		buf[k].comp = malloc(comp_cap);
		if (!buf[k].raw || !buf[k].comp)
			return -1;
	}
	for (w = 0; w < WORKERS; w++) {
		if (deflateInit2(&dz[w], 1, Z_DEFLATED, -15, 8, Z_DEFAULT_STRATEGY) != Z_OK)
			return -1;
		if (inflateInit2(&iz[w], -15) != Z_OK)
			return -1;
	}
	pre_cap = HEAD_BYTES + THUMB_BYTES + ((hb + 3) & ~(size_t)3) + RT_VB_N * 2 + MAX_CHUNKS * sizeof(struct tab);
	pre = malloc(pre_cap);
	J.t = malloc(MAX_CHUNKS * sizeof(struct tab));
	J.list = malloc(RT_VB_N * sizeof(uint16_t));
	if (!pre || !J.t || !J.list)
		return -1;
	/* <dev>/ibara360/states, then the game's; test 85: only when not there (xsdk logs a failed mkdir, not a missing stat);
	 * test 86: the same for <dev>/ibara360/replays */
	make_dirs(G.dir);
	if (G.rp_dir[0])
		make_dirs(G.rp_dir);
	ready = 1;
	return 0;
}

/* the header's words as this .xex wants them (rp: a replay's); NULL = it can be loaded, else why not */
static const char *head_why(const struct head *h, int rp)
{
	if (h->magic != (rp ? HDD_RP_MAGIC : HDD_MAGIC))
		return rp ? "NOT A REPLAY" : "NOT A SAVE STATE";
	if (h->bom != HDD_BOM)
		return "ANOTHER MACHINE'S";
	if (h->version != HDD_VERSION || h->image_crc != G.image_crc || h->patch_crc != G.patch_crc ||
	    h->dev_bytes != dev_bytes || h->chip_bytes != chip_bytes || h->ram_bytes != RAM_SIZE ||
	    (rp ? h->host_bytes > G.rp_host_bytes || h->host_bytes < G.rp_host_bytes_min :
	          h->host_bytes > G.host_bytes || h->host_bytes < G.host_bytes_min) ||
	    h->vb_n != RT_VB_N || h->vb_bytes != RT_VB_BYTES ||
	    h->chunk_bytes != CHUNK || h->moment_slot != (uint32_t)(rp ? G.rp_slot : G.moment_slot))
		return "MADE BY ANOTHER VERSION";
	if (h->set != G.set)
		return "ANOTHER GAME'S";
	if (h->special != G.special)
		return h->special ? "MADE IN SPECIAL MODE" : "SPECIAL MODE IS ON";
	if (rp ? h->stage_slot != NO_SLOT || !h->input_bytes || h->input_bytes > G.rp_input_cap : h->input_bytes != 0)
		return "DAMAGED";
	if (h->n_chunks > MAX_CHUNKS || h->n_sblk > RT_VB_N ||
	    (h->stage_slot != NO_SLOT && (h->stage_slot >= RT_SLOTS || h->stage_slot == h->moment_slot)) ||
	    h->thumb_off != HEAD_BYTES || h->host_off != h->thumb_off + THUMB_BYTES ||
	    h->list_off != h->host_off + ((h->host_bytes + 3) & ~3u) || h->table_off != h->list_off + ((h->n_sblk * 2 + 3) & ~3u) ||
	    h->data_off != h->table_off + h->n_chunks * (uint32_t)sizeof(struct tab) || h->data_off > pre_cap ||
	    h->file_bytes < h->data_off)
		return "DAMAGED";
	return NULL;
}

static void info_from(struct hdd_info *i, const struct head *h)
{
	i->stage = h->stage;
	i->side = h->side;
	i->ship = h->ship;
	i->type = h->type;
	i->mode = h->mode;
	i->players = h->players;
	i->score = h->score;
	i->y = h->y;
	i->mo = h->mo;
	i->d = h->d;
	i->h = h->h;
	i->mi = h->mi;
	i->crc = h->head_crc;
}

static long file_size(FILE *f)
{
	long n;

	if (fseek(f, 0, SEEK_END) != 0)
		return -1;
	n = ftell(f);
	fseek(f, 0, SEEK_SET);
	return n;
}

unsigned hdd_scan(void)
{
	const uint64_t t0 = tb_read();
	int k;

	if (!ready)
		return 0;
	for (k = 0; k < HDD_SLOTS; k++) {
		struct hdd_info *i = &slots[k];
		struct head h;
		struct stat st;
		char p[176];
		FILE *f;
		slot_path(p, sizeof(p), k, "sta");
		memset(i, 0, sizeof(*i));
		/* test 85: an empty slot by its stat (xsdk logs a failed open as "open: NtCreateFile(...) failed: 0xC0000034") */
		f = stat(p, &st) == 0 ? fopen(p, "rb") : NULL;
		if (!f) {
			i->state = HDD_EMPTY;
			continue;
		}
		memset(&h, 0, sizeof(h));
		if (fread(&h, 1, sizeof(h), f) != sizeof(h) || fseek(f, HEAD_BYTES, SEEK_SET) != 0 ||
		    fread(i->thumb, 1, THUMB_BYTES, f) != THUMB_BYTES) {
			i->state = HDD_REFUSED;
			i->why = "UNREADABLE";
		} else if ((i->why = head_why(&h, 0)) != NULL) {
			i->state = HDD_REFUSED;
		} else if (file_size(f) != (long)h.file_bytes) {
			i->state = HDD_REFUSED;
			i->why = "DAMAGED";
		} else {
			i->state = HDD_OK;
		}
		if (i->state == HDD_OK || h.magic == HDD_MAGIC)
			info_from(i, &h);
		fclose(f);
	}
	return tb_us(t0, tb_read()) / 1000;
}

void hdd_special(uint32_t on)
{
	if (G.special == on)
		return;
	G.special = on;
	hdd_scan();
	hdd_rp_scan(); /* test 86 */
}

const struct hdd_info *hdd_slot(int k)
{
	return &slots[k];
}

/* ---- test 86: the replays' list --------------------------------------------------------------------------------- */

static void rp_from(struct hdd_rpinfo *r, const struct head *h)
{
	r->stage = h->stage;
	r->side = h->side;
	r->ship = h->ship;
	r->type = h->type;
	r->mode = h->mode;
	r->players = h->players;
	r->score = h->score;
	r->score2 = h->score2;
	r->frames = h->frames;
	r->flags = h->flags;
	r->y = h->y;
	r->mo = h->mo;
	r->d = h->d;
	r->h = h->h;
	r->mi = h->mi;
	r->crc = h->head_crc;
}

/* entry r at its place (the list newest first: the highest number first) */
static void rp_insert(const struct hdd_rpinfo *r)
{
	int i = 0;

	if (rp_n >= HDD_RP_MAX)
		return;
	while (i < rp_n && rps[i].num > r->num)
		i++;
	memmove(&rps[i + 1], &rps[i], (size_t)(rp_n - i) * sizeof(rps[0]));
	rps[i] = *r;
	rp_n++;
}

/* the folder's repNNNN.rpl files (a header each); their numbers by name, a refused one listed with why */
unsigned hdd_rp_scan(void)
{
	const uint64_t t0 = tb_read();
	DIR *dir;
	struct dirent *e;

	rp_n = 0;
	if (!ready || !G.rp_dir[0] || !(dir = opendir(G.rp_dir)))
		return 0;
	while ((e = readdir(dir)) != NULL && rp_n < HDD_RP_MAX) {
		struct hdd_rpinfo r;
		struct head h;
		char p[176], x[8];
		FILE *f;
		int num;
		if (strlen(e->d_name) != 11 || sscanf(e->d_name, "rep%4d.%3s", &num, x) != 2 || strcmp(x, "rpl") || num < 1)
			continue;
		memset(&r, 0, sizeof(r));
		r.num = num;
		rp_path(p, sizeof(p), num, "rpl");
		f = fopen(p, "rb");
		memset(&h, 0, sizeof(h));
		if (!f || fread(&h, 1, sizeof(h), f) != sizeof(h)) {
			r.state = HDD_REFUSED;
			r.why = "UNREADABLE";
		} else if ((r.why = head_why(&h, 1)) != NULL) {
			r.state = HDD_REFUSED;
		} else if (file_size(f) != (long)h.file_bytes) {
			r.state = HDD_REFUSED;
			r.why = "DAMAGED";
		} else {
			r.state = HDD_OK;
		}
		if (h.magic == HDD_RP_MAGIC) /* the user's choice: a refused replay's line stays (its score, its date) */
			rp_from(&r, &h);
		if (f)
			fclose(f);
		rp_insert(&r);
	}
	closedir(dir);
	return tb_us(t0, tb_read()) / 1000;
}

int hdd_rp_count(void)
{
	return rp_n;
}

const struct hdd_rpinfo *hdd_rp(int i)
{
	return i >= 0 && i < rp_n ? &rps[i] : NULL;
}

int hdd_rp_last(void)
{
	return rp_last;
}

int hdd_rp_delete(int i)
{
	char p[176];

	if (i < 0 || i >= rp_n || J.on)
		return -1;
	rp_path(p, sizeof(p), rps[i].num, "rpl");
	if (unlink(p) != 0) {
		snprintf(J.why, sizeof(J.why), "CANNOT DELETE THE FILE");
		return -1;
	}
	memmove(&rps[i], &rps[i + 1], (size_t)(rp_n - i - 1) * sizeof(rps[0]));
	rp_n--;
	return 0;
}

/* ---- the workers ------------------------------------------------------------------------------------------------ */

/* a VRAM section's blocks of chunk c, as at its slot's moment, into raw */
static void gather(const struct tab *c, uint8_t *raw)
{
	const uint32_t b0 = c->off / RT_VB_BYTES, n = c->len / RT_VB_BYTES;

	for (uint32_t i = 0; i < n; i++) {
		if (c->sec == SEC_VRAM_M)
			rt_slot_block(J.moment, (int)(b0 + i), raw + i * RT_VB_BYTES);
		else
			rt_slot_block(J.stage_slot, J.list[b0 + i], raw + i * RT_VB_BYTES);
	}
}

static int chunk_deflate(int w, struct hbuf *b)
{
	const struct tab *c = &J.t[b->chunk];
	uint8_t *m = sec_mem((int)c->sec);
	z_stream *z = &dz[w];

	if (!m)
		gather(c, b->raw);
	if (deflateReset(z) != Z_OK)
		return 0;
	z->next_in = m ? m + c->off : b->raw;
	z->avail_in = c->len;
	z->next_out = b->comp;
	z->avail_out = (uInt)comp_cap;
	if (deflate(z, Z_FINISH) != Z_STREAM_END)
		return 0;
	b->clen = (uint32_t)(comp_cap - z->avail_out);
	b->crc = (uint32_t)crc32(0, b->comp, b->clen);
	return 1;
}

static int chunk_inflate(int w, struct hbuf *b)
{
	const struct tab *c = &J.t[b->chunk];
	uint8_t *m = sec_mem((int)c->sec);
	z_stream *z = &iz[w];

	if ((uint32_t)crc32(0, b->comp, c->clen) != c->crc || inflateReset(z) != Z_OK)
		return 0;
	z->next_in = b->comp;
	z->avail_in = c->clen;
	z->next_out = m ? m + c->off : b->raw;
	z->avail_out = c->len;
	return inflate(z, Z_FINISH) == Z_STREAM_END && z->avail_out == 0;
}

void hdd_work(int w)
{
	if (w < 0 || w >= WORKERS)
		return;
	while (job_on) {
		int k, did = 0;
		for (k = 0; k < NBUF; k++) {
			struct hbuf *b = &buf[k];
			if (b->state == B_TODO && __sync_bool_compare_and_swap(&b->state, B_TODO, B_WORK)) {
				int ok;
				__sync_synchronize(); /* the chunk's number (and a load's bytes) after its state */
				ok = J.save ? chunk_deflate(w, b) : chunk_inflate(w, b);
				__sync_synchronize(); /* its bytes before its state */
				b->state = ok ? B_DONE : B_ERR;
				did = 1;
			}
		}
		if (!did)
			G.sleep_ms(1);
	}
}

/* ---- the game thread's side --------------------------------------------------------------------------------------- */

static void job_end(void)
{
	int k;

	if (job_on) {
		job_on = 0;
		__sync_synchronize();
		G.workers_stop();
	}
	for (k = 0; k < NBUF; k++)
		buf[k].state = B_FREE;
	if (J.f)
		fclose(J.f);
	J.f = NULL;
	J.on = 0;
	hdd_stats.ms = tb_us(J.t0, tb_read()) / 1000;
	hdd_stats.io_ms = tb_us(0, J.io) / 1000;
	hdd_stats.idle_ms = tb_us(0, J.idle) / 1000;
	hdd_stats.raw_kb = (unsigned)(J.raw / 1024);
	hdd_stats.file_kb = J.pos / 1024;
	hdd_stats.chunks = (unsigned)J.next_done;
}

static int fail(const char *why)
{
	snprintf(J.why, sizeof(J.why), "%s", why);
	if (J.save) {
		job_end();
		unlink(J.tmp);
	} else {
		job_end();
	}
	return -1;
}

const char *hdd_why(void)
{
	return J.why;
}

int hdd_progress(void)
{
	return J.n ? J.next_done * 100 / J.n : 0;
}

static void job_start(void)
{
	int k;

	for (k = 0; k < NBUF; k++)
		buf[k].state = B_FREE;
	J.next_issue = J.next_done = 0;
	J.io = J.idle = 0;
	J.raw = 0;
	J.why[0] = 0;
	J.on = 1;
	job_on = 1;
	__sync_synchronize();
	G.workers_start();
}

/* the chunks of every section the header's sizes give, in file order; their count */
static int make_table(struct head *h)
{
	int n = 0;

	for (int q = 0; q < SEC_N; q++) {
		const int sec = sec_order[q]; /* test 86 */
		const uint32_t len = sec_bytes(h, sec);
		for (uint32_t off = 0; off < len && n < MAX_CHUNKS; off += CHUNK) {
			J.t[n].sec = (uint32_t)sec;
			J.t[n].off = off;
			J.t[n].len = len - off < CHUNK ? len - off : CHUNK;
			J.t[n].foff = J.t[n].clen = J.t[n].crc = 0;
			n++;
		}
	}
	return n;
}

static void layout(struct head *h)
{
	h->thumb_off = HEAD_BYTES;
	h->host_off = h->thumb_off + THUMB_BYTES;
	h->list_off = h->host_off + ((h->host_bytes + 3) & ~3u); /* test 86: the kind's record */
	h->table_off = h->list_off + ((h->n_sblk * 2 + 3) & ~3u);
	h->data_off = h->table_off + h->n_chunks * (uint32_t)sizeof(struct tab);
}

/* a save state's file (rp 0: slot k, the moment G.moment_slot, a stage start) or a replay's (test 86: rp 1, number k,
 * the moment G.rp_slot, input_bytes of G.rp_input, no stage start) */
static int save_start(int rp, int k, const struct hdd_info *info, const void *host, int stage_slot, uint32_t input_bytes)
{
	struct head *h = &J.h;
	uint8_t *a = buf[0].raw, *b = buf[1].raw;
	const size_t hb = rp ? G.rp_host_bytes : G.host_bytes;
	uint32_t n = 0;

	if (!ready || J.on) {
		snprintf(J.why, sizeof(J.why), "%s", ready ? "BUSY" : "NO SAVE STATES");
		return -1;
	}
	memset(&hdd_stats, 0, sizeof(hdd_stats));
	J.t0 = tb_read();
	J.save = 1;
	J.k = k;
	J.rp = rp;
	J.moment = rp ? G.rp_slot : G.moment_slot;
	J.stage_slot = !rp && stage_slot >= 0 && rt_state_ready(stage_slot) ? stage_slot : -1;
	/* the stage start's blocks that differ from the moment's (blocks written since it was taken; one written after the
	 * moment too has the same pixels in both: the slots share a copy) */
	if (J.stage_slot >= 0)
		for (int bl = 0; bl < RT_VB_N; bl++)
			if (rt_slot_has(J.stage_slot, bl)) {
				rt_slot_block(J.stage_slot, bl, a);
				rt_slot_block(J.moment, bl, b);
				if (memcmp(a, b, RT_VB_BYTES))
					J.list[n++] = (uint16_t)bl;
			}
	hdd_stats.sblocks = n;
	memset(h, 0, sizeof(*h));
	h->magic = rp ? HDD_RP_MAGIC : HDD_MAGIC;
	h->bom = HDD_BOM;
	h->version = HDD_VERSION;
	h->set = G.set;
	h->image_crc = G.image_crc;
	h->patch_crc = G.patch_crc;
	h->special = G.special;
	h->dev_bytes = (uint32_t)dev_bytes;
	h->chip_bytes = (uint32_t)chip_bytes;
	h->ram_bytes = RAM_SIZE;
	h->host_bytes = (uint32_t)hb;
	h->vb_n = RT_VB_N;
	h->vb_bytes = RT_VB_BYTES;
	h->chunk_bytes = CHUNK;
	h->n_sblk = n;
	h->stage_slot = J.stage_slot >= 0 ? (uint32_t)J.stage_slot : NO_SLOT;
	h->moment_slot = (uint32_t)J.moment;
	h->frame = (uint32_t)frame_count;
	h->stage = info->stage;
	h->side = info->side;
	h->ship = info->ship;
	h->type = info->type;
	h->mode = info->mode;
	h->players = info->players;
	h->score = info->score;
	h->y = info->y;
	h->mo = info->mo;
	h->d = info->d;
	h->h = info->h;
	h->mi = info->mi;
	if (rp) { /* test 86 */
		h->input_bytes = input_bytes;
		h->score2 = info->score2;
		h->frames = info->frames;
		h->flags = info->flags;
	}
	J.n = make_table(h);
	h->n_chunks = (uint32_t)J.n;
	layout(h);
	memset(pre, 0, h->data_off);
	memcpy(pre + h->thumb_off, info->thumb, THUMB_BYTES);
	memcpy(pre + h->host_off, host, hb);
	memcpy(pre + h->list_off, J.list, n * 2);
	J.info = *info;
	if (rp) {
		rp_path(J.tmp, sizeof(J.tmp), k, "tmp");
		rp_path(J.path, sizeof(J.path), k, "rpl");
	} else {
		slot_path(J.tmp, sizeof(J.tmp), k, "tmp");
		slot_path(J.path, sizeof(J.path), k, "sta");
	}
	J.f = fopen(J.tmp, "wb");
	if (!J.f) {
		snprintf(J.why, sizeof(J.why), "CANNOT WRITE THE FILE");
		return -1;
	}
	setvbuf(J.f, NULL, _IONBF, 0);
	if (fwrite(pre, 1, h->data_off, J.f) != h->data_off) { /* the bytes before the chunks: written again at the end */
		fclose(J.f);
		J.f = NULL;
		unlink(J.tmp);
		snprintf(J.why, sizeof(J.why), "WRITE FAILED");
		return -1;
	}
	J.pos = h->data_off;
	job_start();
	return 0;
}

int hdd_save_begin(int k, const struct hdd_info *info, const void *host, int stage_slot)
{
	return save_start(0, k, info, host, stage_slot, 0);
}

/* test 86: num, or the next number after the list's highest (its first: newest first) */
int hdd_rp_save_begin(int num, const struct hdd_info *info, const void *host, uint32_t input_bytes)
{
	if (num <= 0)
		num = rp_n ? rps[0].num + 1 : 1;
	if (!G.rp_dir[0] || !G.rp_input) {
		snprintf(J.why, sizeof(J.why), "NO REPLAYS");
		return -1;
	}
	if (rp_n >= HDD_RP_MAX || num > 9999) {
		snprintf(J.why, sizeof(J.why), "TOO MANY REPLAYS");
		return -1;
	}
	if (!input_bytes || input_bytes > G.rp_input_cap) {
		snprintf(J.why, sizeof(J.why), "NO INPUTS");
		return -1;
	}
	if (!rt_state_ready(G.rp_slot)) {
		snprintf(J.why, sizeof(J.why), "THE RUN'S START IS GONE");
		return -1;
	}
	for (int i = 0; i < rp_n; i++)
		if (rps[i].num == num) {
			snprintf(J.why, sizeof(J.why), "THE NUMBER IS TAKEN");
			return -1;
		}
	return save_start(1, num, info, host, -1, input_bytes) == 0 ? num : -1;
}

static int save_end(void)
{
	struct head *h = &J.h;
	uint64_t t;
	int ok;

	h->file_bytes = J.pos;
	memcpy(pre + h->table_off, J.t, (size_t)J.n * sizeof(struct tab));
	h->head_crc = 0;
	memcpy(pre, h, sizeof(*h));
	h->head_crc = (uint32_t)crc32(0, pre, h->data_off);
	memcpy(pre, h, sizeof(*h));
	t = tb_read();
	ok = fseek(J.f, 0, SEEK_SET) == 0 && fwrite(pre, 1, h->data_off, J.f) == h->data_off;
	ok = fclose(J.f) == 0 && ok;
	J.f = NULL;
	ok = ok && rename(J.tmp, J.path) == 0;
	J.io += tb_read() - t;
	if (!ok)
		return fail("WRITE FAILED");
	job_end();
	if (J.rp) { /* test 86: the list's new first entry */
		struct hdd_rpinfo r;
		memset(&r, 0, sizeof(r));
		r.num = J.k;
		r.state = HDD_OK;
		rp_from(&r, h);
		rp_insert(&r);
		rp_last = J.k;
		return 1;
	}
	slots[J.k] = J.info;
	slots[J.k].state = HDD_OK;
	slots[J.k].why = NULL;
	slots[J.k].crc = h->head_crc;
	return 1;
}

static int save_step(uint64_t end)
{
	for (;;) {
		struct hbuf *b;
		while (J.next_issue < J.n && J.next_issue < J.next_done + NBUF) {
			b = &buf[J.next_issue % NBUF];
			if (b->state != B_FREE)
				break;
			b->chunk = J.next_issue++;
			__sync_synchronize(); /* the number before the state */
			b->state = B_TODO;
		}
		if (J.next_done == J.n)
			return save_end();
		b = &buf[J.next_done % NBUF];
		if (b->state == B_ERR)
			return fail("DEFLATE FAILED");
		if (b->state == B_DONE) {
			struct tab *c = &J.t[J.next_done];
			const uint64_t t = tb_read();
			__sync_synchronize(); /* the state before the bytes */
			c->foff = J.pos;
			c->clen = b->clen;
			c->crc = b->crc;
			if (fwrite(b->comp, 1, b->clen, J.f) != b->clen)
				return fail("WRITE FAILED");
			J.io += tb_read() - t;
			J.pos += b->clen;
			J.raw += c->len;
			b->state = B_FREE;
			J.next_done++;
		} else {
			const uint64_t t = tb_read();
			if (t >= end)
				return 0;
			G.sleep_ms(1);
			J.idle += tb_read() - t;
		}
		if (tb_read() >= end)
			return 0;
	}
}

/* a save state's file slot k (rp 0) or a replay's number k (test 86: rp 1) opened and checked, J's load set up */
static int load_open(int rp, int k, void *host)
{
	struct head *h = &J.h;
	const char *why;
	uint32_t crc;
	long size;

	if (!ready || J.on) {
		snprintf(J.why, sizeof(J.why), "%s", ready ? "BUSY" : "NO SAVE STATES");
		return -1;
	}
	memset(&hdd_stats, 0, sizeof(hdd_stats));
	J.t0 = tb_read();
	J.save = 0;
	J.k = k;
	J.rp = rp;
	J.moment = rp ? G.rp_slot : G.moment_slot;
	J.host = host;
	if (rp)
		rp_path(J.path, sizeof(J.path), k, "rpl");
	else
		slot_path(J.path, sizeof(J.path), k, "sta");
	J.f = fopen(J.path, "rb");
	if (!J.f) {
		snprintf(J.why, sizeof(J.why), "NO FILE");
		return -1;
	}
	setvbuf(J.f, NULL, _IONBF, 0);
	memset(h, 0, sizeof(*h));
	why = fread(h, 1, sizeof(*h), J.f) == sizeof(*h) ? head_why(h, rp) : "UNREADABLE";
	size = why ? 0 : file_size(J.f);
	if (!why && size != (long)h->file_bytes)
		why = "DAMAGED";
	if (!why && (fseek(J.f, 0, SEEK_SET) != 0 || fread(pre, 1, h->data_off, J.f) != h->data_off))
		why = "UNREADABLE";
	if (!why) {
		struct head z = *h;
		z.head_crc = 0;
		memcpy(pre, &z, sizeof(z));
		crc = (uint32_t)crc32(0, pre, h->data_off);
		if (crc != h->head_crc)
			why = "DAMAGED";
	}
	if (!why) { /* the table must cover each section in order, inside the file */
		uint32_t at[SEC_N] = {0}, pos = h->data_off;
		J.n = (int)h->n_chunks;
		memcpy(J.t, pre + h->table_off, (size_t)J.n * sizeof(struct tab));
		memcpy(J.list, pre + h->list_off, h->n_sblk * 2);
		for (int i = 0; i < J.n && !why; i++) {
			const struct tab *c = &J.t[i];
			if (c->sec >= SEC_N || c->off != at[c->sec] || c->len == 0 || c->len > CHUNK || c->clen > comp_cap ||
			    c->foff != pos || c->clen > h->file_bytes - pos ||
			    ((c->sec == SEC_BLK_S || c->sec == SEC_VRAM_M) && (c->off | c->len) % RT_VB_BYTES))
				why = "DAMAGED";
			else {
				at[c->sec] += c->len;
				pos += c->clen;
			}
		}
		for (int s = 0; s < SEC_N && !why; s++)
			if (at[s] != sec_bytes(h, s))
				why = "DAMAGED";
		for (uint32_t i = 0; i < h->n_sblk && !why; i++)
			if (J.list[i] >= RT_VB_N)
				why = "DAMAGED";
	}
	if (why) {
		fclose(J.f);
		J.f = NULL;
		snprintf(J.why, sizeof(J.why), "%s", why);
		return -1;
	}
	memcpy(host, pre + h->host_off, h->host_bytes); /* the kind's size (head_why) */
	J.stage_slot = h->stage_slot != NO_SLOT ? (int)h->stage_slot : -1;
	J.first_vram = J.n;
	for (int i = 0; i < J.n; i++)
		if (J.t[i].sec == SEC_VRAM_M) {
			J.first_vram = i;
			break;
		}
	return 0;
}

int hdd_load_check(int k, void *host, int *stage_slot)
{
	const int r = load_open(0, k, host);

	*stage_slot = r == 0 ? J.stage_slot : -1;
	return r;
}

/* test 86: the list's entry i (its number) */
int hdd_rp_load_check(int i, void *host)
{
	if (i < 0 || i >= rp_n || !G.rp_input) {
		snprintf(J.why, sizeof(J.why), "NO SUCH REPLAY");
		return -1;
	}
	return load_open(1, rps[i].num, host);
}

uint32_t hdd_rp_input_bytes(void)
{
	return J.rp ? J.h.input_bytes : 0;
}

void hdd_load_cancel(void)
{
	if (J.f && !J.on) {
		fclose(J.f);
		J.f = NULL;
	}
}

int hdd_load_begin(void)
{
	int i;

	if (!J.f)
		return -1;
	/* the sound side has played every queued event (no snap or load of these slots' chips is pending) */
	for (i = 0; i < 500 && !ymz770_idle(); i++)
		G.sleep_ms(1);
	rt_slot_open(J.moment);
	if (J.stage_slot >= 0)
		rt_slot_open(J.stage_slot);
	fseek(J.f, (long)J.h.data_off, SEEK_SET);
	J.pos = J.h.data_off;
	job_start();
	return 0;
}

/* the game thread's part of a done chunk: VRAM blocks into the machine (cow), the stage start's into its slot */
static void apply(const struct tab *c, const uint8_t *raw)
{
	const uint32_t b0 = c->off / RT_VB_BYTES, n = c->len / RT_VB_BYTES;
	uint32_t i;

	if (c->sec == SEC_VRAM_M) {
		hdd_stats.vram_touched = 1;
		for (i = 0; i < n; i++)
			hdd_stats.vram_changed += (unsigned)rt_vram_put((int)(b0 + i), raw + i * RT_VB_BYTES);
	} else if (c->sec == SEC_BLK_S && !hdd_stats.stage_lost) {
		for (i = 0; i < n; i++)
			if (rt_slot_add(J.stage_slot, J.list[b0 + i], raw + i * RT_VB_BYTES) < 0) {
				hdd_stats.stage_lost = 1;
				break;
			}
	}
}

static int load_end(void)
{
	job_end();
	hdd_stats.sblocks = J.h.n_sblk;
	if (J.stage_slot >= 0) {
		if (hdd_stats.stage_lost)
			rt_slot_open(J.stage_slot); /* its blocks back to the pool; it stays dropped */
		else
			rt_slot_close(J.stage_slot);
		ymz770_chip_fix(J.stage_slot);
	}
	rt_slot_close(J.moment);
	ymz770_chip_fix(J.moment);
	return 1;
}

static int load_step(uint64_t end)
{
	for (;;) {
		struct hbuf *b;
		int did = 0;
		while (J.next_issue < J.n && J.next_issue < J.next_done + NBUF) {
			const struct tab *c = &J.t[J.next_issue];
			const uint64_t t = tb_read();
			b = &buf[J.next_issue % NBUF];
			if (b->state != B_FREE)
				break;
			if (fread(b->comp, 1, c->clen, J.f) != c->clen)
				return fail("READ FAILED");
			J.io += tb_read() - t;
			J.pos += c->clen;
			b->chunk = J.next_issue++;
			__sync_synchronize(); /* the bytes and the number before the state */
			b->state = B_TODO;
			did = 1;
			if (tb_read() >= end)
				break;
		}
		if (J.next_done == J.n)
			return load_end();
		b = &buf[J.next_done % NBUF];
		if (b->state == B_ERR)
			return fail("DAMAGED FILE");
		if (b->state == B_DONE) {
			__sync_synchronize(); /* the state before the bytes */
			apply(&J.t[J.next_done], b->raw);
			J.raw += J.t[J.next_done].len;
			b->state = B_FREE;
			J.next_done++;
			did = 1;
		}
		if (tb_read() >= end)
			return 0;
		if (!did) {
			const uint64_t t = tb_read();
			G.sleep_ms(1);
			J.idle += tb_read() - t;
		}
	}
}

int hdd_step(unsigned budget_us)
{
	const uint64_t end = tb_read() + (uint64_t)budget_us * PPC_TIMEBASE_FREQ / 1000000;

	if (!J.on)
		return -1;
	return J.save ? save_step(end) : load_step(end);
}

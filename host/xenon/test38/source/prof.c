/* Test 14b: PC sampler and frame log (see prof.h). The sampler, the ring drain and the
 * histograms belong to the game thread (hardware thread 0, the one sampled); the USB
 * thread does every file operation, as for the recorder, and builds the card's table from
 * the per-function counters. */
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#include <ppc/timebase.h>

#include "card.h"
#include "prof.h"
#include "sound.h"
#include "usbtime.h"
#include "wgate.h"

uint64_t tb_read(void);
unsigned tb_us(uint64_t a, uint64_t b);

extern volatile uint32_t prof_ctl[32];  /* excfix/except.S */
extern char elfldr_start[];             /* app.lds: .text ends here */
/* source/profsyms.c (written by the second link pass): text symbols by address, their
 * names at prof_sym_off[] in one blob; empty in the first pass */
extern const uint32_t prof_sym_addr[], prof_sym_off[];
extern const char prof_sym_names[];
extern const unsigned prof_nsyms;

/* "PROFSWITCH=0" in a copy of the ELF (deploy/test14b/nosampler) keeps the sampler off */
char prof_switch[] = "PROFSWITCH=1";

#define TEXT_BASE 0x80000000u
#define RING 4096u                 /* except.S prof_dec masks the slot with 4095 */
enum { PC_RING, PC_N, PC_TICKS, PC_EXT, PC_HDEC };
#define FLOG_MAX 216000u            /* one hour of emulated frames */
#define TEXT_MAX (64 * 1024)        /* text waiting for the next write (samples file) */
#define PERF_TEXT_MAX (192 * 1024)  /* test 14d: frame log text, room for ~30 s while the gate holds */
#define CHUNK (48 * 1024)           /* write as soon as this much waits */
#define FLUSH_US 4000000            /* and at least this often */
#define TABLE_US 5000000            /* card table refresh */
#define TOP 3 /* test 14d: was 5 (two card rows went to the write gate) */

/* game thread */
static uint32_t *ring, *hist[2], text_words;
static uint32_t (*symcnt)[2];
static uint32_t tail;
static volatile int armed, sampler_off, ever_armed;
static volatile uint32_t n_samples[2], n_lost, n_outside;
static volatile unsigned frames_heavy, frames_armed;
static unsigned msr_at_arm;
static struct prof_frame *flog;
static volatile uint32_t flog_n;
static volatile int dump_req;

/* USB thread */
struct tfile {
	char path[64];
	int ok, err;
	char why[48];
	unsigned writes, fails;
	uint64_t bytes, last;
};
static char dev_name[8];
static volatile int dev_set;
static struct tfile perf_f, prof_f;
static struct wgate perf_gate, prof_gate; /* test 14d */
static volatile uint32_t perf_saved;   /* frames on the stick */
static volatile int dump_state;        /* 0 not yet, 1 writing, 2 done, 3 failed */
static char top_name[TOP][48];
static volatile uint32_t top_cnt[TOP][2], top_n;
static volatile uint32_t ext_shown, hdec_shown;

static inline void dcbf(const volatile void *p)
{
	asm volatile ("dcbf 0,%0" : : "r" (p) : "memory");
}

static inline void sync_all(void)
{
	asm volatile ("sync" : : : "memory");
}

/* prof_ctl words as the handlers left them (real-mode stores, read through the cache) */
static uint32_t ctl(int i)
{
	dcbf(&prof_ctl[i]);
	sync_all();
	return prof_ctl[i];
}

int prof_init(void)
{
	uint32_t i;

	text_words = ((uint32_t)elfldr_start - TEXT_BASE) / 4;
	ring = memalign(128, RING * 4);
	hist[0] = memalign(128, text_words * 4);
	hist[1] = memalign(128, text_words * 4);
	symcnt = memalign(128, (prof_nsyms + 1) * sizeof(*symcnt));
	flog = memalign(128, FLOG_MAX * sizeof(struct prof_frame));
	if (!ring || !hist[0] || !hist[1] || !symcnt || !flog) {
		ring = NULL;
		flog = NULL;
		return -1;
	}
	memset(ring, 0, RING * 4);
	memset(hist[0], 0, text_words * 4);
	memset(hist[1], 0, text_words * 4);
	memset(symcnt, 0, (prof_nsyms + 1) * sizeof(*symcnt));
	for (i = 0; i < RING; i += 32)
		dcbf(&ring[i]);
	sync_all();
	sampler_off = prof_switch[11] == '0';
	return 0;
}

static char off_why[48]; /* test 33 */

void prof_off(const char *why)
{
	snprintf(off_why, sizeof(off_why), "%s", why);
}

void prof_begin(const char *dev)
{
	if (!dev)
		return;
	snprintf(dev_name, sizeof(dev_name), "%s", dev);
	__sync_synchronize(); /* the name before the flag */
	dev_set = 1;
}

void prof_arm(void)
{
	uint32_t msr;

	if (armed || sampler_off || !ring)
		return;
	prof_ctl[PC_RING] = (uint32_t)ring & 0x1FFFFFFFu; /* cached view 0x8... = real address */
	prof_ctl[PC_TICKS] = PROF_TICKS;
	sync_all();
	dcbf(prof_ctl);
	sync_all();
	tail = ctl(PC_N);
	asm volatile ("mfmsr %0" : "=r" (msr));
	msr_at_arm = msr;
	asm volatile ("mtspr 310,%0" : : "r" (0x7FFFFFFFu)); /* HDEC */
	asm volatile ("mtdec %0" : : "r" (PROF_TICKS));
	asm volatile ("mtmsrd %0,1" : : "r" (msr | 0x8000u) : "memory"); /* L=1: EE and RI only */
	armed = 1;
	ever_armed = 1;
}

void prof_disarm(void)
{
	uint32_t msr;

	if (!armed)
		return;
	asm volatile ("mfmsr %0" : "=r" (msr));
	asm volatile ("mtmsrd %0,1" : : "r" (msr & ~0x8000u) : "memory");
	armed = 0;
}

int prof_armed(void)
{
	return armed;
}

/* the symbol holding pc (the last one at or below it) */
static unsigned sym_of(uint32_t pc)
{
	unsigned lo = 0, hi = prof_nsyms;

	if (!prof_nsyms || pc < prof_sym_addr[0])
		return prof_nsyms; /* the spare counter */
	while (hi - lo > 1) {
		unsigned mid = (lo + hi) / 2;
		if (prof_sym_addr[mid] <= pc)
			lo = mid;
		else
			hi = mid;
	}
	return lo;
}

void prof_frame(struct prof_frame *f)
{
	const int heavy = (uint64_t)f->cpu * 1000 >= (uint64_t)PROF_HEAVY_MS * PPC_TIMEBASE_FREQ;
	uint32_t n, cnt, i;

	f->samples = 0;
	if (heavy)
		f->flags |= PF_HEAVY;
	if (armed)
		f->flags |= PF_ARMED;
	if (ring && ever_armed) {
		n = ctl(PC_N);
		cnt = n - tail;
		if (cnt > RING) {
			n_lost += cnt - RING;
			tail = n - RING;
			cnt = RING;
		}
		if (cnt) {
			uint32_t x, first = tail & ~31u, last = (n - 1) & ~31u;
			for (x = first; x != last + 32; x += 32)
				dcbf(&ring[x & (RING - 1)]);
			sync_all();
		}
		for (i = tail; i != n; i++) {
			uint32_t pc = ring[i & (RING - 1)], idx = (pc - TEXT_BASE) >> 2;
			unsigned s;
			if (idx >= text_words) {
				n_outside++;
				continue;
			}
			s = sym_of(pc);
			hist[0][idx]++;
			symcnt[s][0]++;
			if (heavy) {
				hist[1][idx]++;
				symcnt[s][1]++;
			}
		}
		tail = n;
		f->samples = cnt;
		n_samples[0] += cnt;
		if (heavy)
			n_samples[1] += cnt;
	}
	if (armed) {
		frames_armed++;
		if (heavy)
			frames_heavy++;
	}
	if (flog && flog_n < FLOG_MAX) {
		flog[flog_n] = *f;
		__sync_synchronize(); /* the entry before the count */
		flog_n = flog_n + 1;
	}
}

void prof_dump_request(void)
{
	dump_req = 1;
}

/* ---- USB thread ------------------------------------------------------------------ */

/* <dev>:/ibara360/<prefix>NNNN.txt, the first free number, with the header */
static int tf_create(struct tfile *t, const char *prefix, const char *hdr)
{
	char dir[24];
	struct stat st;
	size_t n = strlen(hdr);
	FILE *fp;
	int i, ok;

	snprintf(dir, sizeof(dir), "%s:/ibara360", dev_name);
	mkdir(dir, 0777); /* fails when it exists; the stat below tells */
	if (stat(dir, &st) != 0 || !S_ISDIR(st.st_mode)) {
		snprintf(t->why, sizeof(t->why), "CANNOT CREATE %s", dir);
		t->err = 1;
		return -1;
	}
	for (i = 1; i < 10000; i++) {
		snprintf(t->path, sizeof(t->path), "%s/%s%04d.txt", dir, prefix, i);
		if (stat(t->path, &st) != 0)
			break;
	}
	if (i == 10000) {
		snprintf(t->why, sizeof(t->why), "9999 %s FILES", prefix);
		t->err = 1;
		return -1;
	}
	wgate_io(1);
	fp = fopen(t->path, "wb");
	ok = fp && fwrite(hdr, 1, n, fp) == n;
	if (fp && fclose(fp) != 0)
		ok = 0;
	wgate_io(0);
	if (!ok) {
		snprintf(t->why, sizeof(t->why), "CANNOT WRITE THE FILE");
		t->err = 1;
		return -1;
	}
	t->ok = 1;
	t->bytes = n;
	t->last = tb_read();
	log_printf(C_GREEN, "PROF: WRITING %s", t->path);
	return 0;
}

/* one open, append, close; a failed open is retried (5 times), a failed write stops the file */
static int tf_append(struct tfile *t, const char *buf, unsigned len)
{
	FILE *fp;
	size_t w;
	int r;

	wgate_io(1);
	fp = fopen(t->path, "ab");
	t->last = tb_read();
	if (!fp) {
		wgate_io(0);
		if (++t->fails >= 5) {
			snprintf(t->why, sizeof(t->why), "OPEN FAILED %u TIMES", t->fails);
			t->err = 1;
		}
		return -1;
	}
	w = fwrite(buf, 1, len, fp);
	r = fclose(fp);
	wgate_io(0);
	if (w != len || r != 0) {
		snprintf(t->why, sizeof(t->why), "WRITE FAILED (%u OF %u B)", (unsigned)w, len);
		t->err = 1;
		return -1;
	}
	t->writes++;
	t->bytes += len;
	return 0;
}

static const char perf_header[] =
	"# ibara360 test 14d frame log (source/prof.c): one line per emulated vblank\n"
	"# frame cpu wait conv pres vwait band0 band1 period: game thread times, timebase ticks (49.875 MHz)\n"
	"# cyc pen acc miss ifs idle events io spin: runtime counters over the frame (SH-3 cycles, pcb\n"
	"#   penalty cycles incl. 1024 per idle step, slow data accesses, misses, slow fetches, idle\n"
	"#   steps, rt_event calls, I/O accesses, spin cycles skipped)\n"
	"# samples flags: PC samples drained, 1 heavy 2 armed 4 replay same 8 replay diff\n"
	"#   16 a file write ran during the frame, 32 the write gate held a due write (test 14d)\n"
	"#   64 the check's RAM hash ran, 128 pcbx_adjust ran its double expressions (test 17b)\n"
	"# t3gap t3late t3flags (test 21, source/sound.c): the sound thread's longest loop gap and wait\n"
	"#   lateness (us) that touched the frame; flags 1 a pass came from the medium-priority wait,\n"
	"#   2 a pass found the driver empty\n"
	"# \"# t3 <frame> gap late ymz drv sub (us) q <driver bytes> fifo <frames> <low|med> under <0|1>\":\n"
	"#   a sound-thread gap over 4 ms or a pass that found the driver empty, before its frame's line\n"
	"# \"# t3h <frame> <pass> gap late ymz drv sub (us) q <driver bytes> fifo <frames> chunks <n>\" (test 22):\n"
	"#   the sound thread's last 64 passes when one found the driver empty, oldest first, pass 0 =\n"
	"#   the empty one; q/fifo as found before that pass's submits, chunks = 2048-byte submits\n"
	"# test 23: \"# t3\" lines end \"kind <gap|under|false0|low1|high1|odd> reg <first read> <read used>\n"
	"#   rr <re-reads after a 0> dev <read - expected bytes>\": false0 = a 0 that a re-read showed was\n"
	"#   not empty, low1/high1 = a read 2048 +- 512 B below/above the expected bytes, odd = off by\n"
	"#   more than 512 B otherwise (reg = the driver's register: bits 0-4 descriptor playing, 8-12\n"
	"#   last valid, 16-31 bytes left in the one playing); \"# t3s <frame> <under|false0> passes <n>\"\n"
	"#   heads each snapshot (also taken at a false 0)\n"
	"# test 24: \"# pg <frame> gap <us> <loop|io> [w] us <poll> <pads> <probe> <rec> <prof> <draw> <copy>\n"
	"#   <flush> <cal> <wait> <iopoll> <write>\": a gap of 4+ ms between two pad reads on the USB\n"
	"#   thread (T5), split by what T5 ran in it (us); loop = the read in usb_task's loop, io = one\n"
	"#   inside a file write, w = a write ran in the gap; frame = emulated frame at the read\n"
	"# test 25: \"# pg\" lines from 2 ms, kind <loop|io|card|log> (card / log = a read inside the card\n"
	"#   render / the frame log's text), the <cal> column = <tpoll>: the time of those reads\n";

static const char *const t3_kind_name[] = {"gap", "under", "false0", "low1", "high1", "odd"};

/* test 21: the sound thread's events up to frame f as "# t3" lines; 0 when out of room */
static int perf_t3_events(char *text, unsigned *tlen, uint32_t f)
{
	static unsigned ev_done, ev_lost;
	unsigned n = t3_event_n;

	__sync_synchronize(); /* the count before the entries it covers */
	if (n - ev_done > T3_EVENTS) {
		ev_lost += n - ev_done - T3_EVENTS;
		ev_done = n - T3_EVENTS;
	}
	for (; ev_done != n; ev_done++) {
		const volatile struct t3_event *v = &t3_events[ev_done & (T3_EVENTS - 1)];
		if (v->frame > f)
			break;
		if (*tlen + 400 > PERF_TEXT_MAX)
			return 0;
		*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen,
		                            "# t3 %u gap %u late %u ymz %u drv %u sub %u q %u fifo %u %s under %u "
		                            "kind %s reg %08X %08X rr %u dev %d%s\n",
		                            (unsigned)v->frame, (unsigned)v->gap_us, (unsigned)v->late_us,
		                            (unsigned)v->ymz_us, (unsigned)v->drv_us, (unsigned)v->sub_us,
		                            (unsigned)v->queued, (unsigned)v->fifo, v->mode == WAIT_MED_DB ? "med" : "low",
		                            (unsigned)v->under, t3_kind_name[v->kind <= T3K_ODD ? v->kind : 0],
		                            (unsigned)v->reg0, (unsigned)v->reg1, (unsigned)v->rereads, (int)v->dev,
		                            ev_lost ? " (events lost before this one)" : "");
		ev_lost = 0;
	}
	return 1;
}

/* test 24: the USB thread's pad-read gaps up to frame f as "# pg" lines; 0 when out of room.
 * The ring and this reader are both on the USB thread. */
static int perf_pg_events(char *text, unsigned *tlen, uint32_t f)
{
	static unsigned ev_done, ev_lost;
	const unsigned n = pg_event_n;
	unsigned k;

	if (n - ev_done > PG_EVENTS) {
		ev_lost += n - ev_done - PG_EVENTS;
		ev_done = n - PG_EVENTS;
	}
	for (; ev_done != n; ev_done++) {
		const struct pg_event *v = &pg_events[ev_done & (PG_EVENTS - 1)];
		if (v->frame > f)
			break;
		if (*tlen + 400 > PERF_TEXT_MAX)
			return 0;
		*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen, "# pg %u gap %u %s%s us",
		                            (unsigned)v->frame, (unsigned)v->gap_us,
		                            v->where < NPR ? pg_where_name[v->where] : "?",
		                            v->wrote ? " w" : "");
		for (k = 0; k < NSEC; k++)
			*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen, " %u", (unsigned)v->sec_us[k]);
		*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen, "%s\n",
		                            ev_lost ? " (events lost before this one)" : "");
		ev_lost = 0;
	}
	return 1;
}

/* test 22: the sound thread's snapshots up to frame f as "# t3h" lines; 0 when out of room */
static int perf_t3_snaps(char *text, unsigned *tlen, uint32_t f)
{
	static unsigned sn_done, sn_lost;
	unsigned n = t3_snap_n;

	__sync_synchronize(); /* the count before the snapshots it covers */
	if (n - sn_done > T3H_SNAPS) {
		sn_lost += n - sn_done - T3H_SNAPS;
		sn_done = n - T3H_SNAPS;
	}
	for (; sn_done != n; sn_done++) {
		const volatile struct t3_snap *s = &t3_snaps[sn_done & (T3H_SNAPS - 1)];
		const unsigned np = s->n <= T3H_N ? (unsigned)s->n : T3H_N;
		unsigned k;
		if (s->frame > f)
			break;
		if (*tlen + 200 + np * 100 > PERF_TEXT_MAX)
			return 0;
		if (sn_lost)
			*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen,
			                            "# t3h %u snapshots lost before this one\n", sn_lost);
		sn_lost = 0;
		*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen, "# t3s %u %s passes %u\n",
		                            (unsigned)s->frame, s->kind == T3K_FALSE0 ? "false0" : "under", np);
		for (k = 0; k < np; k++) {
			const volatile struct t3_pass *p = &s->p[k];
			*tlen += (unsigned)snprintf(text + *tlen, PERF_TEXT_MAX - *tlen,
			                            "# t3h %u %d gap %u late %u ymz %u drv %u sub %u q %u fifo %u chunks %u\n",
			                            (unsigned)s->frame, (int)k - (int)(np - 1), (unsigned)p->gap_us,
			                            (unsigned)p->late_us, (unsigned)p->ymz_us, (unsigned)p->drv_us,
			                            (unsigned)p->sub_us, (unsigned)p->queued, (unsigned)p->fifo,
			                            (unsigned)p->chunks);
		}
	}
	return 1;
}

static int perf_service(void)
{
	static char text[PERF_TEXT_MAX];
	static unsigned tlen;
	static uint32_t done; /* frames turned into text */
	uint32_t n;

	if (!perf_f.ok) {
		if (!perf_f.err)
			tf_create(&perf_f, "perf", perf_header);
		return 1;
	}
	if (perf_f.err)
		return 0;
	n = flog_n;
	__sync_synchronize(); /* the count before the entries it covers */
	while (done < n && tlen + 240 <= PERF_TEXT_MAX) {
		const struct prof_frame *e = &flog[done];
		const uint32_t f = e->frame;
		t5_pad_tick(); /* test 25 */
		/* test 21: the sound thread's entry for the frame is final once it moved past it */
		if (sound_stats.alive && f >= t3_frame)
			break;
		if (!perf_t3_events(text, &tlen, f) || !perf_t3_snaps(text, &tlen, f) || !perf_pg_events(text, &tlen, f))
			break;
		tlen += (unsigned)snprintf(text + tlen, PERF_TEXT_MAX - tlen,
		                           "%u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u\n",
		                           (unsigned)e->frame, (unsigned)e->cpu, (unsigned)e->wait, (unsigned)e->conv,
		                           (unsigned)e->pres, (unsigned)e->vwait, (unsigned)e->band0, (unsigned)e->band1,
		                           (unsigned)e->period, (unsigned)e->cyc, (unsigned)e->pen, (unsigned)e->acc,
		                           (unsigned)e->miss, (unsigned)e->ifs, (unsigned)e->idle, (unsigned)e->events,
		                           (unsigned)e->io, (unsigned)e->spin, (unsigned)e->samples, (unsigned)e->flags,
		                           f < T3LOG_N ? (unsigned)t3log_gap[f] : 0u, f < T3LOG_N ? (unsigned)t3log_late[f] : 0u,
		                           f < T3LOG_N ? (unsigned)t3log_flags[f] : 0u);
		done++;
	}
	if (tlen && (tlen >= CHUNK || tb_us(perf_f.last, tb_read()) >= FLUSH_US)) {
		if (!wgate_open(&perf_gate))
			return 0;
		if (tf_append(&perf_f, text, tlen) == 0) {
			tlen = 0;
			perf_saved = done;
		}
		return 1;
	}
	return 0;
}

/* the histograms, one chunk per call: header, functions, instructions */
static int dump_service(void)
{
	static char text[TEXT_MAX];
	static unsigned tlen, phase;
	static uint32_t cur;

	if (dump_state >= 2 || !dump_req)
		return 0;
	if (!prof_f.ok) {
		static char hdr[1024];
		snprintf(hdr, sizeof(hdr),
		         "# ibara360 test 14d PC samples of hardware thread 0 (source/prof.c, excfix/except.S)\n"
		         "# text %08X-%08X, decrementer every %u ticks, frames sampled %u, heavy (cpu %u+ ms) %u\n"
		         "# samples all %u heavy %u, lost %u, outside text %u, external %u, hdec %u, msr at arm %08X\n"
		         "# F <addr> <all> <heavy> <name>: per function; <addr> <all> <heavy>: per instruction\n",
		         TEXT_BASE, (unsigned)elfldr_start, PROF_TICKS, frames_armed, PROF_HEAVY_MS, frames_heavy,
		         (unsigned)n_samples[0], (unsigned)n_samples[1], (unsigned)n_lost, (unsigned)n_outside,
		         (unsigned)ctl(PC_EXT), (unsigned)ctl(PC_HDEC), msr_at_arm);
		dump_state = 1;
		if (tf_create(&prof_f, "prof", hdr))
			dump_state = 3;
		return 1;
	}
	if (prof_f.err) {
		dump_state = 3;
		return 0;
	}
	while (tlen + 120 <= TEXT_MAX && phase < 2) {
		if (phase == 0) {
			if (cur > prof_nsyms) {
				phase = 1;
				cur = 0;
				continue;
			}
			if (symcnt[cur][0])
				tlen += (unsigned)snprintf(text + tlen, TEXT_MAX - tlen, "F %08X %u %u %s\n",
				                           cur < prof_nsyms ? (unsigned)prof_sym_addr[cur] : 0u,
				                           (unsigned)symcnt[cur][0], (unsigned)symcnt[cur][1],
				                           cur < prof_nsyms ? prof_sym_names + prof_sym_off[cur] : "(before the first symbol)");
			cur++;
		} else {
			if (cur >= text_words) {
				phase = 2;
				break;
			}
			if (hist[0][cur])
				tlen += (unsigned)snprintf(text + tlen, TEXT_MAX - tlen, "%08X %u %u\n", TEXT_BASE + cur * 4,
				                           (unsigned)hist[0][cur], (unsigned)hist[1][cur]);
			cur++;
		}
	}
	if (tlen >= CHUNK || (phase == 2 && tlen)) {
		if (!wgate_open(&prof_gate))
			return 0;
		if (tf_append(&prof_f, text, tlen) == 0)
			tlen = 0;
		if (prof_f.err)
			dump_state = 3;
		return 1;
	}
	if (phase == 2 && !tlen) {
		dump_state = 2;
		log_printf(C_GREEN, "PROF: SAMPLES SAVED (%u KB)", (unsigned)(prof_f.bytes / 1024));
	}
	return 0;
}

/* the TOP functions by samples in heavy frames (all frames until there are heavy ones) */
static void table_refresh(void)
{
	uint32_t best[TOP][2];
	unsigned who[TOP], k, s, n = 0;
	const int by = n_samples[1] ? 1 : 0;

	for (s = 0; s <= prof_nsyms; s++) {
		uint32_t v = symcnt[s][by];
		if (!v || (n == TOP && v <= best[TOP - 1][by]))
			continue;
		k = n < TOP ? n++ : TOP - 1;
		while (k > 0 && best[k - 1][by] < v) {
			best[k][0] = best[k - 1][0];
			best[k][1] = best[k - 1][1];
			who[k] = who[k - 1];
			k--;
		}
		best[k][0] = symcnt[s][0];
		best[k][1] = symcnt[s][1];
		who[k] = s;
	}
	for (k = 0; k < n; k++) {
		snprintf(top_name[k], sizeof(top_name[k]), "%s",
		         who[k] < prof_nsyms ? prof_sym_names + prof_sym_off[who[k]] : "(NO SYMBOL)");
		top_cnt[k][0] = best[k][0];
		top_cnt[k][1] = best[k][1];
	}
	top_n = n;
	ext_shown = ctl(PC_EXT);
	hdec_shown = ctl(PC_HDEC);
}

int prof_service(void)
{
	static uint64_t last_table;
	int r = 0;

	if (ever_armed && tb_us(last_table, tb_read()) >= TABLE_US) {
		last_table = tb_read();
		table_refresh();
	}
	if (!dev_set)
		return 0;
	r |= perf_service();
	r |= dump_service();
	return r;
}

/* ---- card ------------------------------------------------------------------------- */

static void upper(char *s)
{
	for (; *s; s++)
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
}

void prof_rows(char t[PROF_ROWS][100], uint32_t color[PROF_ROWS])
{
	unsigned k, per = frames_armed ? (unsigned)(n_samples[0] / frames_armed) : 0;
	const uint32_t tot = n_samples[1] ? n_samples[1] : n_samples[0];

	if (!ring)
		snprintf(t[0], 100, "SAMPLER: NO MEMORY");
	else if (sampler_off)
		snprintf(t[0], 100, "SAMPLER OFF (PROFSWITCH=0 BUILD)");
	else
		snprintf(t[0], 100, "SAMPLER T0 20US: %s  SAMPLES %uK  LOST %u  EXT %u  HDEC %u",
		         armed ? "ON" : ever_armed ? "OFF" : "AT 1200", (unsigned)(n_samples[0] / 1000), (unsigned)n_lost,
		         (unsigned)ext_shown, (unsigned)hdec_shown);
	color[0] = !ring || ext_shown || n_lost ? C_RED : armed ? C_GREEN : C_WHITE;
	snprintf(t[1], 100, "FRAMES %u HEAVY %u (%u+MS) PER FRAME %u OUT %u MSR %08X", frames_armed, frames_heavy,
	         PROF_HEAVY_MS, per, (unsigned)n_outside, msr_at_arm);
	color[1] = armed && frames_armed > 60 && per < 600 ? C_RED : C_WHITE;
	if (!dev_set) {
		snprintf(t[2], 100, "PERF LOG: %s", off_why[0] ? off_why : "NO STORAGE DEVICE");
	} else if (perf_f.err) {
		snprintf(t[2], 100, "PERF LOG STOPPED: %s", perf_f.why);
	} else {
		const char *base = strrchr(perf_f.path, '/');
		char pr[40];
		if (dump_state == 0)
			snprintf(pr, sizeof(pr), "NO SAMPLER (TEST 17)");
		else if (dump_state == 1)
			snprintf(pr, sizeof(pr), "WRITING %u KB", (unsigned)(prof_f.bytes / 1024));
		else if (dump_state == 2)
			snprintf(pr, sizeof(pr), "SAVED %u KB", (unsigned)(prof_f.bytes / 1024));
		else
			snprintf(pr, sizeof(pr), "%s", prof_f.why);
		snprintf(t[2], 100, "%s TO FRAME %u (%u KB)  PROF: %s", perf_f.ok && base ? base + 1 : "PERF OPENING",
		         (unsigned)perf_saved, (unsigned)(perf_f.bytes / 1024), pr);
	}
	upper(t[2]);
	color[2] = perf_f.err || dump_state == 3 ? C_RED : dump_state == 2 ? C_GREEN :
	           !dev_set && off_why[0] ? C_DIM : C_WHITE;
	snprintf(t[3], 100, "TOP %s                     %%HEAVY  %%ALL", n_samples[1] ? "IN HEAVY FRAMES" : "(ALL FRAMES)   ");
	color[3] = C_YELLOW;
	for (k = 0; k < TOP; k++) {
		if (k < top_n && tot) {
			unsigned h = (unsigned)((uint64_t)top_cnt[k][1] * 1000 / (n_samples[1] ? n_samples[1] : 1));
			unsigned a = (unsigned)((uint64_t)top_cnt[k][0] * 1000 / (n_samples[0] ? n_samples[0] : 1));
			snprintf(t[4 + k], 100, " %-38.38s %3u.%u %3u.%u", top_name[k], h / 10, h % 10, a / 10, a % 10);
		} else {
			t[4 + k][0] = 0;
		}
		color[4 + k] = C_WHITE;
	}
}

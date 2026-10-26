/* Test 14b frame log, xsdk port (test 39 .xex; see prof.h): one line per emulated vblank to
 * <data root>/ibara360/perfNNNN.txt, written by the IO thread as test 14b-39's prof.c wrote it
 * on the USB thread (the same columns; the sampler's is 0, the sound thread's three as sound.h
 * keeps them now). Test 40: the same text to the network log (source/netlog.c) as it is made. */
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#include "card.h"
#include "netlog.h"
#include "prof.h"
#include "sound.h"
#include "wgate.h"
#include "xplat.h"

#define FLOG_MAX 216000u            /* one hour of emulated frames */
#define PERF_TEXT_MAX (192 * 1024)  /* test 14d: frame log text, room for ~30 s while the gate holds */
#define CHUNK (48 * 1024)           /* write as soon as this much waits */
#define FLUSH_US 4000000            /* and at least this often */

/* game thread */
static struct prof_frame *flog;
static volatile uint32_t flog_n;

/* IO thread */
struct tfile {
	char path[160];
	int ok, err;
	char why[48];
	unsigned writes, fails;
	uint64_t bytes, last;
};
static char dev_name[64];
static volatile int dev_set;
static struct tfile perf_f;
static struct wgate perf_gate;
static volatile uint32_t perf_saved;   /* frames in the file */
static char off_why[48];

volatile int prof_final; /* test 72 */

int prof_init(void)
{
	flog = memalign(128, FLOG_MAX * sizeof(struct prof_frame));
	return flog ? 0 : -1;
}

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

void prof_frame(struct prof_frame *f)
{
	f->samples = 0;
	if ((uint64_t)f->cpu * 1000 >= (uint64_t)PROF_HEAVY_MS * PPC_TIMEBASE_FREQ)
		f->flags |= PF_HEAVY;
	if (flog && dev_set && flog_n < FLOG_MAX) {
		flog[flog_n] = *f;
		__sync_synchronize(); /* the entry before the count */
		flog_n = flog_n + 1;
	}
}

/* <root>/ibara360/perfNNNN.txt, the first free number, with the header */
static int tf_create(struct tfile *t, const char *prefix, const char *hdr)
{
	char dir[128];
	struct stat st;
	size_t n = strlen(hdr);
	FILE *fp;
	int i, ok;

	snprintf(dir, sizeof(dir), "%s/ibara360", dev_name);
	mkdir(dir, 0777); /* fails when it exists; the stat below tells */
	if (stat(dir, &st) != 0 || !S_ISDIR(st.st_mode)) {
		snprintf(t->why, sizeof(t->why), "CANNOT CREATE THE FOLDER");
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
	"# ibara360 test 49 xex frame log (host/xsdk/test49 source/framelog.c): one line per emulated vblank\n"
	"# frame cpu wait conv pres vwait band0 band1 period: game thread times, timebase ticks (49.875 MHz);\n"
	"#   test 42: vwait = the wait for the frame's vblank (not its flip), period = start to start\n"
	"# cyc pen acc miss ifs idle events io spin: runtime counters over the frame (SH-3 cycles, pcb\n"
	"#   penalty cycles incl. 1024 per idle step, slow data accesses, misses, slow fetches, idle\n"
	"#   steps, rt_event calls, I/O accesses, spin cycles skipped)\n"
	"# samples flags: 0 (no sampler under the retail kernel); flags 1 heavy (cpu 13+ ms),\n"
	"#   16 a file write ran during the frame, 32 the write gate held a due write (test 14d)\n"
	"#   64 the check's RAM hash ran (test 17b), 128 the network log sent datagrams (test 40),\n"
	"#   256 queued after the frame before had shown (a vblank late), 512 not shown (test 42)\n"
	"#   1024 the game was paused just before the frame (test 55: BACK in a run), 2048 shown from\n"
	"#   its job's early conversion while the job still drew (test 63: the job wrote nothing shown)\n"
	"# t3gap t3late t3flags: the sound thread's longest loop gap and wait lateness (us) that\n"
	"#   touched the frame; flags 2 = the kernel's audio driver found no frame ready in it\n"
	"# cushion (test 46): the fewest 48 kHz samples queued for the driver during the frame (ready\n"
	"#   driver frames x 256 + the FIFO, 800 = one emulated frame), 0 while not playing\n";

static int perf_service(void)
{
	static char text[PERF_TEXT_MAX];
	static unsigned tlen;
	static uint32_t done; /* frames turned into text */
	uint32_t n;
	unsigned t0;

	if (!perf_f.ok) {
		if (!perf_f.err && tf_create(&perf_f, "perf", perf_header) == 0) {
			netlog_name(NL_PERF, strrchr(perf_f.path, '/') + 1);
			netlog_put(NL_PERF, perf_header, sizeof(perf_header) - 1);
		}
		return 1;
	}
	if (perf_f.err)
		return 0;
	n = flog_n;
	__sync_synchronize(); /* the count before the entries it covers */
	t0 = tlen;
	while (done < n && tlen + 240 <= PERF_TEXT_MAX) {
		const struct prof_frame *e = &flog[done];
		const uint32_t f = e->frame;
		/* the sound thread's entry for the frame is final once it moved past it */
		if (sound_stats.alive && f >= t3_frame)
			break;
		tlen += (unsigned)snprintf(text + tlen, PERF_TEXT_MAX - tlen,
		                           "%u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u\n",
		                           (unsigned)e->frame, (unsigned)e->cpu, (unsigned)e->wait, (unsigned)e->conv,
		                           (unsigned)e->pres, (unsigned)e->vwait, (unsigned)e->band0, (unsigned)e->band1,
		                           (unsigned)e->period, (unsigned)e->cyc, (unsigned)e->pen, (unsigned)e->acc,
		                           (unsigned)e->miss, (unsigned)e->ifs, (unsigned)e->idle, (unsigned)e->events,
		                           (unsigned)e->io, (unsigned)e->spin, (unsigned)e->samples, (unsigned)e->flags,
		                           f < T3LOG_N ? (unsigned)t3log_gap[f] : 0u, f < T3LOG_N ? (unsigned)t3log_late[f] : 0u,
		                           f < T3LOG_N ? (unsigned)t3log_flags[f] : 0u, f < T3LOG_N ? (unsigned)t3log_cushion[f] : 0u);
		done++;
	}
	if (tlen > t0) /* test 40: as it is made, the file gets it at the next write */
		netlog_put(NL_PERF, text + t0, tlen - t0);
	if (tlen && (tlen >= CHUNK || tb_us(perf_f.last, tb_read()) >= FLUSH_US || prof_final)) {
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

int prof_service(void)
{
	if (!dev_set)
		return 0;
	return perf_service();
}

static void upper(char *s)
{
	for (; *s; s++)
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
}

void prof_rows(char t[PROF_ROWS][100], uint32_t color[PROF_ROWS])
{
	if (!dev_set) {
		snprintf(t[0], 100, "PERF LOG: %s", off_why[0] ? off_why : "NO STORAGE DEVICE");
	} else if (perf_f.err) {
		snprintf(t[0], 100, "PERF LOG STOPPED: %s", perf_f.why);
	} else {
		const char *base = strrchr(perf_f.path, '/');
		snprintf(t[0], 100, "%s TO FRAME %u (%u KB)", perf_f.ok && base ? base + 1 : "PERF OPENING",
		         (unsigned)perf_saved, (unsigned)(perf_f.bytes / 1024));
	}
	upper(t[0]);
	color[0] = perf_f.err ? C_RED : !dev_set && off_why[0] ? C_DIM : C_WHITE;
}

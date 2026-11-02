/* Test 99 (the SOUND page's SOUNDTRACK: PS2): the PS2 port's soundtrack streams in place of the board's music
 * (ps2music.h; the design: work/g97/ps2music/REPORT.md section 5, what was built: work/g99/ps2music/REPORT.md).
 *
 * Three sides:
 *  - the reader (its own thread on PS2M_THREAD, FILE_THREAD's hardware thread, kernel sleeps between passes): checks
 *    ps2music.bin against bgm.table once, then serves the sound thread's requests (a stream, a place): ~60 KB reads
 *    (three 0x5000-byte block pairs L R), SPU ADPCM decoded into a ring of RING 44.1 kHz stereo samples kept FILL
 *    ahead of the sound thread; the loop as the research found it (loops.json): at the stream's end n back to n - P,
 *    the last XFADE samples blended into the ones before n - P; the disk kept awake (a 4 KB read every KEEP_S) while
 *    the soundtrack is PS2. A load or a jump starts decoding at its block's start (one block earlier when the place is
 *    in a block's first 1024 samples: an ADPCM history of 0 has settled after ~100 samples).
 *  - the chip's side (the sound thread inside ymz_run, at each write's chip time): slot 0's sequence register (0x80),
 *    its SQON (0x81: a start, a stop), channel 0's level (0x41), and the save states' slots (ymz_slot_hook) into
 *    events stamped with the output sample (sndout's spacing: output m is at cycle m * out_step >> 16); the board's
 *    music hushed while a mapped track plays (ymz_music_hush).
 *  - the player (the sound thread, ps2music_mix after each sndout take): the events at their output samples, the ring
 *    read through the launcher's 32-tap windowed sinc (160 phases, 44.1 -> 48 kHz exactly: 147 inputs to 160 outputs),
 *    the gain = the stream's PS2 level x TRIM x channel 0's level over the track's base x MUSIC (smoothed, 5 ms).
 * Nothing on the sound thread logs, allocates or waits: it leaves records for the game thread (ps2music_vblank). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xsdk/kernel.h"
#include "xsdk/thread.h"

#include "card.h"
#include "cv1k.h"
#include "launch.h"
#include "ps2data.h"
#include "ps2music.h"
#include "romload.h"
#include "state.h"
#include "xplat.h"

extern uint64_t frame_count;
/* runtime/ymz770.c (test 99) */
#define YMZ_HUSH_BOARD 1
#define YMZ_HUSH_TEST 2
extern volatile int ymz_music_hush;
extern void (*ymz_slot_hook)(int load, int slot, u64 time);

#define PS2M_THREAD 5          /* main.c's FILE_THREAD: the IO thread's and the file thread's hardware thread */
#define RING (1u << 17)        /* 44.1 kHz stereo samples: 2.97 s (power of two) */
#define FILL 88200u            /* kept decoded ahead of the player: 2 s */
#define CHUNK 4096             /* samples decoded between looks at the requests */
#define BLK 17920u             /* samples per channel in a 0x2800-byte block (640 frames of 28) */
#define BLK_BYTES 0x2800u
#define PAIRS 3                /* block pairs a read takes: 60 KB */
#define DATA_AT 0x800u         /* a stream's first block (after its BG00 and VAGp headers) */
#define XFADE 220              /* the loop's crossfade: 5 ms (the research's) */
#define TRIM 0.159f            /* the streams' level against the board's music (work/g97/ps2music REPORT.md section 6:
                                * ARRANGE hw41's music RMS over 828 s, MUSIC 100%) */
#define KEEP_S 3               /* the disk's keep-awake read every this many seconds without a read */
#define EVQ 512                /* the chip side's events (power of two) */
#define LRQ 256                /* the records for the log (power of two) */
#define RS_PH 160
#define RS_TAPS 32
#define RS_HALF 15
#define STREAMS PS2BGM_STREAMS

/* ---- the soundtrack: IBARAR.PDM files 1113-1128 ----------------------------------------------------------------- */

/* n = the samples to the end-flag frame (= the VAGp size / 16 x 28 - 28, checked against ps2music.bin), P = the loop's
 * period (loops.json; 0 = plays once), vol = the PS2's list volume of 128 (SLPM_663.01 0x210F28) */
static const struct strm {
	uint32_t n, P;
	uint8_t vol;
	const char *name;
} st_tab[STREAMS] = {
	{2381568, 1411252, 0x55, "ENDING"},          {4648588, 2309278, 0x5A, "RANKING"},
	{673568, 0, 0x55, "GAME OVER"},              {6599180, 3112941, 0x64, "ROSE OF ZEAL"},
	{7705936, 4109396, 0x55, "GUARDIAN ANGEL"},  {7516824, 5580648, 0x55, "UNLISTED (SEQ 11-12)"},
	{6047412, 2880001, 0x4F, "SHOW TIME"},       {20694688, 4895100, 0x64, "SKY HIGH"},
	{6300364, 2862308, 0x58, "LIKE A ROLLING STONE"}, {8725304, 5644800, 0x4E, "ENDRESS TRAIN"},
	{7810376, 2481771, 0x58, "ROBOT NO28"},      {9463384, 2988423, 0x5C, "ROSE GARDEN"},
	{7717528, 2351996, 0x46, "BONDS OF STEEL"},  {6624884, 2028035, 0x5F, "THE FAMILY'S WORK"},
	{8740060, 5462720, 0x5C, "AIR POLLUTION"},   {5927488, 2963720, 0x6E, "MOTHER TERESA"},
};

/* slot 0's sequences (sequence n keys phrase n; the research's pairs, the same numbers in all three games; Kuro BL's 0,
 * its select track, and 1, 13, 14 have no stream): the stream and how a start of it acts. INTRO: the stream from 0.
 * LOOP: the stream goes on when it plays, else from its loop (n - P). SELF (33, the last boss: the driver starts it
 * again each pass): goes on, else from 0. ONCE (6, GAME OVER): from 0, to its end. */
enum { K_NONE, K_INTRO, K_LOOP, K_SELF, K_ONCE };
static const struct {
	uint8_t s, kind;
} seq_tab[34] = {
	[2] = {0, K_INTRO},   [3] = {0, K_LOOP},   [4] = {1, K_INTRO},   [5] = {1, K_LOOP},   [6] = {2, K_ONCE},
	[7] = {3, K_INTRO},   [8] = {3, K_LOOP},   [9] = {4, K_INTRO},   [10] = {4, K_LOOP},  [11] = {5, K_INTRO},
	[12] = {5, K_LOOP},   [15] = {6, K_INTRO}, [16] = {6, K_LOOP},   [17] = {7, K_INTRO}, [18] = {7, K_LOOP},
	[19] = {8, K_INTRO},  [20] = {8, K_LOOP},  [21] = {9, K_INTRO},  [22] = {9, K_LOOP},  [23] = {10, K_INTRO},
	[24] = {10, K_LOOP},  [25] = {11, K_INTRO}, [26] = {11, K_LOOP}, [27] = {12, K_INTRO}, [28] = {12, K_LOOP},
	[29] = {13, K_INTRO}, [30] = {13, K_LOOP}, [31] = {14, K_INTRO}, [32] = {14, K_LOOP}, [33] = {15, K_SELF},
};

/* the track's base level: channel 0's level as ibara's driver keeps it for that sequence (main.c's snd_track_vol, its
 * ibara table; ARRANGE's register log agrees). Kuro BL's driver keeps its own, higher levels for the same phrases, so
 * its streams come out louder by as much as its board's music does */
static const uint8_t base_tab[34] = {
	0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
	0x5A, 0x5A, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x50, 0x50, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
};

static uint32_t be32(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static int seq_stream(int seq)
{
	return seq >= 0 && seq < 34 && seq_tab[seq].kind != K_NONE ? seq_tab[seq].s : -1;
}

/* ---- shared between the threads ---------------------------------------------------------------------------------- */

static volatile int m_state = PS2M_NONE;
static char m_why[64] = "NO PS2DATA.BIN (ITS SOUNDTRACK TABLE)";
static volatile int m_enabled;               /* the SOUNDTRACK row (game thread) */
static int m_set, m_arrange;
static uint32_t tab_bytes[STREAMS];          /* bgm.table's sizes */

/* the player's request (sound thread) -> the reader; a seqlock of req_gen */
static volatile unsigned req_gen;
static volatile int req_k = -1;
static volatile uint32_t req_v0;
/* the reader's answer: the ring holds generation prod_gen's virtual samples [prod_v0, prod_w) (those below prod_v0 are
 * 0), the stream ends at prod_end (~0: never) */
static volatile unsigned prod_gen;
static volatile uint32_t prod_v0, prod_w, prod_end = ~0u;
static volatile int prod_fail;
static volatile uint32_t cons_v;             /* the lowest sample the player still needs */
static int16_t ring[RING * 2];

/* the reader's counters (the game thread reads them) */
static volatile unsigned rd_reads, rd_fails, rd_keep, rd_skips, rd_dec_us, rd_dec_max_us, rd_read_max_us;

/* ---- the reader ---------------------------------------------------------------------------------------------------- */

static HANDLE fh;
static uint32_t s_off[STREAMS], s_blocks[STREAMS], file_bytes;

struct dec {
	int k;
	uint32_t p;                 /* the next sample (per channel) */
	int h[2][2];                /* each channel's last two samples */
	int16_t fr[2][28];          /* the frame decoded; fi = the next of it (28: none) */
	int fi;
	uint32_t b0;                /* the first block pair in buf, nb of them */
	int nb;
	uint8_t *buf;
};
static struct dec dA, dB;

static int file_read(void *dst, uint32_t n, uint64_t off)
{
	IO_STATUS_BLOCK io;
	const uint64_t t0 = tb_read();
	NTSTATUS st;
	unsigned us;

	io.information = 0;
	st = NtReadFile(fh, 0, NULL, NULL, &io, dst, n, &off);
	us = tb_us(t0, tb_read());
	if (us > rd_read_max_us)
		rd_read_max_us = us;
	rd_reads = rd_reads + 1;
	if (!NT_SUCCESS(st) || io.information != n) {
		rd_fails = rd_fails + 1;
		return -1;
	}
	return 0;
}

/* SPU ADPCM, one 16-byte frame of 28 samples (work/g97/ps2music/tools/ps2music.py's decode_channel) */
static void adpcm_frame(const uint8_t *f, int *h, int16_t *out)
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

/* the frame at d->p (a frame's start) into d->fr; -1 = the read failed */
static int dec_frame(struct dec *d)
{
	const uint32_t b = d->p / BLK, f = d->p % BLK / 28;
	const uint8_t *src;

	if (b >= s_blocks[d->k])
		return -1;
	if (b < d->b0 || b >= d->b0 + (uint32_t)d->nb) {
		const uint32_t nb = s_blocks[d->k] - b < PAIRS ? s_blocks[d->k] - b : PAIRS;
		d->nb = 0;
		if (file_read(d->buf, nb * 2 * BLK_BYTES, (uint64_t)s_off[d->k] + DATA_AT + (uint64_t)b * 2 * BLK_BYTES))
			return -1;
		d->b0 = b;
		d->nb = (int)nb;
	}
	src = d->buf + (b - d->b0) * 2 * BLK_BYTES + f * 16;
	adpcm_frame(src, d->h[0], d->fr[0]);
	adpcm_frame(src + BLK_BYTES, d->h[1], d->fr[1]);
	return 0;
}

/* decoder d to stream k's sample p */
static int dec_seek(struct dec *d, int k, uint32_t p)
{
	uint32_t s = p / BLK * BLK;

	if (p - s < 1024 && s >= BLK)
		s -= BLK;
	d->k = k;
	memset(d->h, 0, sizeof(d->h));
	d->p = s;
	d->fi = 28;
	while (d->p + 28 <= p) {
		if (dec_frame(d))
			return -1;
		d->p += 28;
	}
	if (d->p < p) {
		if (dec_frame(d))
			return -1;
		d->fi = (int)(p - d->p);
		d->p = p;
	}
	return 0;
}

static int dec_get(struct dec *d, int *l, int *r)
{
	if (d->fi == 28) {
		if (dec_frame(d))
			return -1;
		d->fi = 0;
	}
	*l = d->fr[0][d->fi];
	*r = d->fr[1][d->fi];
	d->fi++;
	d->p++;
	return 0;
}

/* virtual sample v (from the stream's start, through its loops) -> its sample in the file */
static uint32_t v_to_p(int k, uint32_t v)
{
	const struct strm *s = &st_tab[k];

	return s->P && v >= s->n ? s->n - s->P + (v - s->n) % s->P : v;
}

static unsigned r_gen;
static int r_k = -1, r_xf, r_end;
static uint32_t r_w;

/* the decoders to virtual sample v of stream r_k (GAME OVER past its end: ended there) */
static void reader_seek(uint32_t v)
{
	const struct strm *s = &st_tab[r_k];
	const uint32_t p = v_to_p(r_k, v);

	r_w = v;
	r_xf = 0;
	if (!s->P && p >= s->n) {
		prod_end = v;
		r_end = 1;
		return;
	}
	if (dec_seek(&dA, r_k, p) || (s->P && p >= s->n - XFADE && (r_xf = 1, dec_seek(&dB, r_k, p - s->P)))) {
		prod_fail = 1;
		r_end = 1;
	}
}

static void reader_setup(unsigned g, int k, uint32_t v0)
{
	r_gen = g;
	r_k = k;
	r_w = v0;
	r_end = 0;
	r_xf = 0;
	prod_fail = 0;
	prod_end = ~0u;
	if (k >= 0 && m_state == PS2M_OK)
		reader_seek(v0);
	else
		r_end = 1;
	prod_v0 = v0;
	__atomic_store_n(&prod_w, v0, __ATOMIC_RELEASE);
	__atomic_store_n(&prod_gen, g, __ATOMIC_RELEASE);
}

/* up to max samples more into the ring; the number made */
static int reader_fill(int max)
{
	const struct strm *s = &st_tab[r_k];
	int made = 0;

	while (made < max) {
		int l, r;
		if (!s->P && dA.p >= s->n) { /* GAME OVER: its end */
			prod_end = r_w;
			r_end = 1;
			break;
		}
		if (s->P && !r_xf && dA.p >= s->n - XFADE) { /* the loop's crossfade: its other half from n - P - XFADE */
			if (dec_seek(&dB, r_k, dA.p - s->P))
				goto fail;
			r_xf = 1;
		}
		{
			const uint32_t pa = dA.p;
			if (dec_get(&dA, &l, &r))
				goto fail;
			if (r_xf) {
				const int i = (int)(pa - (s->n - XFADE));
				int l2, r2;
				if (dec_get(&dB, &l2, &r2))
					goto fail;
				l = (l * (XFADE - 1 - i) + l2 * i) / (XFADE - 1);
				r = (r * (XFADE - 1 - i) + r2 * i) / (XFADE - 1);
			}
		}
		ring[(r_w & (RING - 1)) * 2] = (int16_t)l;
		ring[(r_w & (RING - 1)) * 2 + 1] = (int16_t)r;
		r_w++;
		made++;
		if (r_xf && dA.p >= s->n) { /* at the end: on from n - P (B is there) */
			struct dec t = dA;
			dA = dB;
			dB = t;
			r_xf = 0;
		}
	}
	__atomic_store_n(&prod_w, r_w, __ATOMIC_RELEASE);
	return made;
fail:
	__atomic_store_n(&prod_w, r_w, __ATOMIC_RELEASE);
	prod_fail = 1;
	r_end = 1;
	return made;
}

static char m_path[260];

/* ps2music.bin opened (kernel calls: this thread never uses newlib's files) and checked: its own table's 16 streams
 * against bgm.table's sizes, each stream's BG00 / VAGp headers against st_tab's lengths. Returns PS2M_* */
static int reader_check(char *why, size_t nw)
{
	char kp[260];
	ANSI_STRING name;
	OBJECT_ATTRIBUTES at;
	IO_STATUS_BLOCK io;
	uint8_t h[64], e[64 * STREAMS], sh[0x80];
	size_t i;
	int k;

	if (launch_path(kp, sizeof(kp), PS2MUSIC_FILE)) {
		snprintf(why, nw, "NO PS2MUSIC.BIN (NO PATH)");
		return PS2M_MISSING;
	}
	for (i = 0; kp[i]; i++)
		if (kp[i] == '/')
			kp[i] = '\\';
	snprintf(m_path, sizeof(m_path), "%s", kp);
	name.length = (uint16_t)strlen(kp);
	name.maximum_length = (uint16_t)(name.length + 1);
	name.pointer = kp;
	at.root_directory = kp[0] == '\\' ? 0 : OB_DOS_DEVICES;
	at.name = &name;
	at.attributes = 0;
	if (!NT_SUCCESS(NtCreateFile(&fh, GENERIC_READ | SYNCHRONIZE, &at, &io, NULL, FILE_ATTRIBUTE_NORMAL,
	                             FILE_SHARE_READ, FILE_OPEN, FILE_SYNCHRONOUS_IO_NONALERT | FILE_NON_DIRECTORY_FILE))) {
		snprintf(why, nw, "NO PS2MUSIC.BIN BESIDE THE XEX FILES");
		return PS2M_MISSING;
	}
	if (file_read(h, 64, 0) || memcmp(h, PS2DATA_MAGIC, 8) || be32(h + 8) != PS2DATA_VERSION ||
	    be32(h + 12) != STREAMS || be32(h + 16) != 64 || file_read(e, sizeof(e), 64)) {
		snprintf(why, nw, "PS2MUSIC.BIN IS NOT IBARA360'S");
		return PS2M_BAD;
	}
	for (k = 0; k < STREAMS; k++) {
		const uint8_t *p = e + 64 * k;
		char nm[8];
		uint32_t vag;
		snprintf(nm, sizeof(nm), "bgm.%02d", k);
		s_off[k] = be32(p + 32);
		if (strncmp((const char *)p, nm, 32) || be32(p + 36) != tab_bytes[k] || be32(p + 40) != tab_bytes[k] ||
		    tab_bytes[k] < DATA_AT + 2 * BLK_BYTES) {
			snprintf(why, nw, "PS2MUSIC.BIN DOES NOT MATCH PS2DATA.BIN");
			return PS2M_BAD;
		}
		if (file_read(sh, sizeof(sh), s_off[k]) || memcmp(sh, "BG00", 4) || memcmp(sh + 0x40, "VAGp", 4) ||
		    (vag = be32(sh + 0x4C)) / 16 * 28 - 28 != st_tab[k].n || be32(sh + 0x7C) != vag ||
		    be32(sh + 0x50) != 44100) {
			snprintf(why, nw, "PS2MUSIC.BIN'S STREAM %d IS NOT AS EXPECTED", k);
			return PS2M_BAD;
		}
		s_blocks[k] = (tab_bytes[k] - DATA_AT) / (2 * BLK_BYTES);
		if ((uint64_t)s_blocks[k] * BLK < st_tab[k].n) {
			snprintf(why, nw, "PS2MUSIC.BIN'S STREAM %d IS CUT SHORT", k);
			return PS2M_BAD;
		}
		if (s_off[k] + tab_bytes[k] > file_bytes)
			file_bytes = s_off[k] + tab_bytes[k];
	}
	why[0] = 0;
	return PS2M_OK;
}

static uint32_t reader_main(void *u)
{
	uint64_t last_read = 0;
	uint32_t keep_at = 0;
	char why[64];
	int st;

	(void)u;
	st = reader_check(why, sizeof(why));
	if (st != PS2M_OK) {
		snprintf(m_why, sizeof(m_why), "%s", why);
		__sync_synchronize();
		m_state = st;
		log_printf(st == PS2M_MISSING ? C_YELLOW : C_RED, "PS2 MUSIC: %s: SOUNDTRACK STAYS ARCADE", why);
		return 0;
	}
	{
		uint64_t bytes = 0, samples = 0;
		int k;
		for (k = 0; k < STREAMS; k++) {
			bytes += tab_bytes[k];
			samples += st_tab[k].n;
		}
		m_why[0] = 0;
		__sync_synchronize();
		m_state = PS2M_OK;
		log_printf(C_GREEN, "PS2 MUSIC: PS2MUSIC.BIN FOUND: %u STREAMS, %u BYTES, %u.%u MIN, MATCHES BGM.TABLE; SOUNDTRACK "
		           "PS2 AVAILABLE", STREAMS, (unsigned)bytes, (unsigned)(samples / 44100 / 60),
		           (unsigned)(samples / 44100 % 60 / 6));
	}
	last_read = tb_read();
	for (;;) {
		unsigned g, g2;
		int k;
		uint32_t v0;
		do {
			g = __atomic_load_n(&req_gen, __ATOMIC_ACQUIRE);
			k = req_k;
			v0 = req_v0;
			__sync_synchronize();
			g2 = req_gen;
		} while (g != g2);
		if (g != r_gen)
			reader_setup(g, k, v0);
		if (r_k >= 0 && !r_end) {
			const uint32_t c = __atomic_load_n(&cons_v, __ATOMIC_ACQUIRE);
			uint32_t ahead = r_w - c;
			if ((int32_t)ahead < 0) { /* an underrun: the player went on past what was read; on from where it is */
				reader_seek(c);
				__atomic_store_n(&prod_w, r_w, __ATOMIC_RELEASE);
				rd_skips = rd_skips + 1;
				ahead = 0;
				if (r_end)
					continue;
			}
			if (ahead < FILL && ahead < RING - 64 - CHUNK) {
				const uint64_t t0 = tb_read();
				const int rd0 = (int)rd_reads;
				unsigned us;
				reader_fill(CHUNK);
				us = tb_us(t0, tb_read());
				rd_dec_us = rd_dec_us + us;
				if (us > rd_dec_max_us)
					rd_dec_max_us = us;
				if ((int)rd_reads != rd0)
					last_read = tb_read();
				if (prod_fail)
					log_printf(C_RED, "PS2 MUSIC: STREAM %d (%s) DID NOT READ AT SAMPLE %u: SILENT UNTIL THE NEXT TRACK",
					           r_k, st_tab[r_k].name, (unsigned)dA.p);
				continue;
			}
		}
		/* the disk kept awake while the soundtrack is PS2 (a stream's start must not wait for it to wind up) */
		if (m_enabled && tb_us(last_read, tb_read()) >= KEEP_S * 1000000u) {
			uint8_t b[4096];
			keep_at = (keep_at + (1u << 20) + 4096) % (file_bytes - 4096);
			if (file_read(b, sizeof(b), keep_at & ~4095u) == 0)
				rd_keep = rd_keep + 1;
			last_read = tb_read();
		}
		xsdk_thread_sleep(r_k >= 0 ? 1 : 3);
	}
	return 0;
}

/* ---- the chip's side and the player (the sound thread) ----------------------------------------------------------- */

enum { EV_START, EV_STOP, EV_VOL, EV_SNAP, EV_LOAD };
static struct ev {
	uint64_t m;
	uint32_t f;
	uint8_t type, a;
} evq[EVQ];
static unsigned ev_w, ev_r;
static uint64_t out_step, m_taken;            /* sndout's spacing; the output frames taken so far */

/* the chip's side: slot 0's sequence register, channel 0's last level, the board's music hushed */
static struct {
	uint8_t seq0, vol0, hush, on; /* test 100: on = slot 0's sequence playing (started, not stopped) */
} cs;
static volatile int test_hush;                /* the MUSIC TEST plays a stream (game thread) */

/* a slot's record (PS2M_REC_BYTES) */
#define REC_MAGIC 0x99
struct prec {
	uint8_t magic, seq0, hush, cvol0;          /* the chip's side at the snap's chip time */
	int8_t k;                                  /* the stream then (-1 none) */
	uint8_t seq, base, vol0;
	uint8_t flags, con, pad[2];                /* 1: stopping; test 100: con = cs.on at the snap (0 in older ones) */
	uint32_t v, acc, loops;
	float g;
	uint32_t spare;
};
static struct prec rec[RT_SLOTS];
static volatile unsigned rec_snaps[RT_SLOTS];

/* the records for the log (the game thread formats them) */
enum { LR_START, LR_CONT, LR_ARCADE, LR_STOP, LR_FADE, LR_FADED, LR_LOOP, LR_END, LR_DATA, LR_UNDER, LR_UNDEREND,
       LR_SNAP, LR_LOAD, LR_TEST, LR_TESTEND, LR_OFF, LR_LOST, LR_STOPPED, LR_RESUME };
static struct lrec {
	uint8_t type, k, a, b;
	uint32_t x, y, f;
} lrq[LRQ];
static volatile unsigned lr_w, lr_r;
static unsigned lr_lost;

static void lr_push(int type, int k, int a, int b, uint32_t x, uint32_t y, uint32_t f)
{
	const unsigned w = lr_w;

	if (w - __atomic_load_n(&lr_r, __ATOMIC_ACQUIRE) >= LRQ) {
		lr_lost++;
		return;
	}
	lrq[w & (LRQ - 1)] = (struct lrec){(uint8_t)type, (uint8_t)k, (uint8_t)a, (uint8_t)b, x, y, f};
	__atomic_store_n(&lr_w, w + 1, __ATOMIC_RELEASE);
}

static int en_now(void)
{
	return m_enabled && m_state == PS2M_OK;
}

static void hush_apply(void)
{
	ymz_music_hush = (cs.hush ? YMZ_HUSH_BOARD : 0) | (test_hush ? YMZ_HUSH_TEST : 0);
}

static void ev_push(int type, int a, uint64_t t)
{
	const unsigned w = ev_w;

	if (w - ev_r >= EVQ) {
		lr_lost++;
		return;
	}
	evq[w & (EVQ - 1)] = (struct ev){(t * 65536 + out_step - 1) / out_step, (uint32_t)frame_count, (uint8_t)type,
	                                 (uint8_t)a};
	ev_w = w + 1;
}

/* ymz_write_hook: the game's writes as the chip replays them (before each takes effect) */
static void wr_hook(u64 sample, u8 reg, u8 data)
{
	(void)sample;
	if (reg == 0x80) {
		cs.seq0 = data;
	} else if (reg == 0x81) {
		if ((data & 6) == 2) {
			/* the board's music hushed from a mapped track's start on; an unmapped one is the board's (a stop keeps the
			 * hush: the stopped phrase's block still plays out at its old level) */
			cs.hush = en_now() && seq_stream(cs.seq0) >= 0;
			cs.on = 1;
			hush_apply();
			ev_push(EV_START, cs.seq0, ymz_chip_time());
		} else if ((data & 6) == 0) {
			cs.on = 0;
			ev_push(EV_STOP, 0, ymz_chip_time());
		}
	} else if (reg == 0x41 && data != cs.vol0) {
		cs.vol0 = data;
		ev_push(EV_VOL, data, ymz_chip_time());
	}
}

static void slot_hook(int load, int slot, u64 t)
{
	struct prec *r;

	if (slot < 0 || slot >= RT_SLOTS)
		return;
	r = &rec[slot];
	if (!load) {
		r->magic = REC_MAGIC;
		r->seq0 = cs.seq0;
		r->hush = cs.hush;
		r->cvol0 = cs.vol0;
		r->con = cs.on;
		ev_push(EV_SNAP, slot, t);
		return;
	}
	if (r->magic == REC_MAGIC) {
		cs.seq0 = r->seq0;
		cs.vol0 = r->cvol0;
		cs.on = r->con;
		/* test 100: a state kept under ARCADE loaded under PS2 hushes its playing track too (EV_LOAD starts its
		 * stream from the board's place) */
		cs.hush = en_now() && (r->hush || (cs.on && seq_stream(cs.seq0) >= 0));
	} else {
		cs.hush = 0; /* an older state's: the board's music */
		cs.on = 0;
	}
	hush_apply();
	ev_push(EV_LOAD, slot, t);
}

/* the player */
static struct {
	int k;                      /* the stream (-1 none) */
	int test;                   /* the MUSIC TEST's */
	uint8_t seq, base, vol0;
	int started, stopping, under;
	uint32_t v, acc, loops;
	float g;
	unsigned gen;
	uint64_t wait_m, under_m;   /* the output frame the wait / the underrun began at */
	uint32_t f;                 /* the emulated frame of the last event (the records') */
	uint8_t fade;               /* channel 0's level went below the base: a fade (logged once) */
} pl = {.k = -1};
static unsigned my_gen;
/* Test 100 (user's list: "sound test is often interrupted by other attract sounds like the attract ranking screen";
 * "swapping from PS2 soundtrack to arcade during a run works; but then, trying to swap back ... doesn't work"): the
 * board's track as its events say, whatever the player does (ARCADE, a MUSIC TEST): its stream, from virtual sample v0
 * at output frame m0 (an intro's loop sequence goes on in it). A MUSIC TEST is no longer replaced or faded by the
 * board's starts and levels; when it ends, and when SOUNDTRACK goes back to PS2, the player takes up the board's track
 * at its place now (board_resume) instead of waiting for the next track */
static struct {
	int k;                      /* the stream (-1 none) */
	uint8_t seq, vol0, on;
	uint32_t v0;
	uint64_t m0;
} bd = {.k = -1};
static float rs_coef[RS_PH][RS_TAPS];
static volatile int32_t lvl_game_q15 = 32768, lvl_test_q15 = 32768;
static volatile int t_req_seq = -1, t_req_vol;
static volatile unsigned t_req_n;
static unsigned t_seen;
static int en_seen;
/* the cost (ps2music_vblank asks for the window's numbers: cost_ask) */
static uint32_t cost_f, cost_cur, cost_max, cost_n, cost_low = ~0u, cost_under;
static uint64_t cost_sum;
static int cost_played;
static volatile unsigned cost_ask, cost_done;
static volatile struct {
	uint32_t max, n, low, under;
	uint64_t sum;
	int played;
} cost_out;

static void request(int k, uint32_t v0)
{
	my_gen++;
	__atomic_store_n(&cons_v, v0, __ATOMIC_RELEASE);
	req_k = k;
	req_v0 = v0;
	__atomic_store_n(&req_gen, my_gen, __ATOMIC_RELEASE);
	pl.gen = my_gen;
}

static void pl_idle(void)
{
	if (pl.k >= 0)
		request(-1, 0);
	pl.k = -1;
	pl.test = 0;
	pl.stopping = pl.started = pl.under = 0;
}

static void pl_start(int k, uint32_t v, int seq, int base, int test)
{
	pl.k = k;
	pl.test = test;
	pl.seq = (uint8_t)seq;
	pl.base = (uint8_t)base;
	pl.v = v;
	pl.acc = 0;
	pl.loops = st_tab[k].P && v >= st_tab[k].n ? (v - st_tab[k].n) / st_tab[k].P + 1 : 0;
	pl.started = pl.stopping = pl.under = 0;
	pl.fade = 0;
	pl.wait_m = m_taken;
	request(k, v > RS_HALF ? v - RS_HALF : 0);
}

/* test 100: the board's track's virtual sample now */
static uint32_t bd_pos(void)
{
	return bd.v0 + (uint32_t)((m_taken - bd.m0) * 44100 / 48000);
}

static void bd_loops(int k, uint32_t v, uint32_t *loops)
{
	*loops = st_tab[k].P && v >= st_tab[k].n ? (v - st_tab[k].n) / st_tab[k].P + 1 : 0;
}

static float pl_level(void);

/* test 100: the player on the board's track at its place now (why: 0 SOUNDTRACK PS2 again, 1 the MUSIC TEST over) */
static void board_resume(int why)
{
	if (!en_now() || !bd.on || bd.k < 0)
		return;
	pl_start(bd.k, bd_pos(), bd.seq, base_tab[bd.seq], 0);
	pl.vol0 = bd.vol0;
	pl.g = 0.0f; /* in over ~5 ms (pl_one's smoothing) */
	lr_push(LR_RESUME, bd.k, bd.seq, why, pl.v, 0, (uint32_t)frame_count);
}

static float pl_level(void)
{
	const struct strm *s = &st_tab[pl.k];
	const float q = (float)(pl.test ? lvl_test_q15 : lvl_game_q15) * (1.0f / 32768.0f);

	if (pl.stopping)
		return 0.0f;
	return (float)s->vol * (1.0f / 128.0f) * TRIM * q * (pl.base ? (float)pl.vol0 / (float)pl.base : 1.0f);
}

static void ev_apply(const struct ev *e)
{
	pl.f = e->f;
	switch (e->type) {
	case EV_START: {
		const int seq = e->a, k = seq_stream(seq), kind = k >= 0 ? seq_tab[seq].kind : K_NONE;
		/* test 100: the board's model first (a loop sequence of the stream it plays goes on in it) */
		if (!(bd.on && bd.k == k && k >= 0 && (kind == K_LOOP || kind == K_SELF))) {
			bd.v0 = kind == K_LOOP ? st_tab[k].n - st_tab[k].P : 0;
			bd.m0 = m_taken;
		}
		bd.k = k;
		bd.seq = (uint8_t)seq;
		bd.vol0 = seq < 34 ? base_tab[seq] : 0;
		bd.on = k >= 0;
		if (pl.test) /* test 100: the MUSIC TEST plays on (board_resume at its end) */
			break;
		if (!en_now() || k < 0) {
			if (pl.k >= 0 && !pl.test) {
				pl.stopping = 1;
				lr_push(LR_STOP, pl.k, seq, 1, pl.v, 0, e->f);
			}
			if (en_now())
				lr_push(LR_ARCADE, 0, seq, 0, 0, 0, e->f);
			break;
		}
		if ((kind == K_LOOP || kind == K_SELF) && pl.k == k && !pl.test && !pl.stopping) {
			lr_push(LR_CONT, k, seq, 0, pl.v, 0, e->f);
			break;
		}
		pl_start(k, kind == K_LOOP ? st_tab[k].n - st_tab[k].P : 0, seq, base_tab[seq], 0);
		pl.vol0 = pl.base; /* the driver's level comes with the start (0x41 after 0x81) */
		pl.g = pl_level();
		lr_push(LR_START, k, seq, kind, pl.v, 0, e->f);
		break;
	}
	case EV_STOP:
		bd.on = 0; /* test 100 */
		if (pl.k >= 0 && !pl.test && !pl.stopping) {
			pl.stopping = 1;
			lr_push(LR_STOP, pl.k, 0, 0, pl.v, 0, e->f);
		}
		break;
	case EV_VOL:
		bd.vol0 = e->a; /* test 100: the board's level no longer fades a MUSIC TEST's stream */
		if (pl.test)
			break;
		pl.vol0 = e->a;
		if (pl.k >= 0 && !pl.test && !pl.stopping) {
			if (!pl.fade && e->a < pl.base) {
				pl.fade = 1;
				lr_push(LR_FADE, pl.k, e->a, pl.base, pl.v, 0, e->f);
			} else if (pl.fade == 1 && e->a == 0) {
				pl.fade = 2;
				lr_push(LR_FADED, pl.k, 0, pl.base, pl.v, 0, e->f);
			} else if (e->a >= pl.base) {
				pl.fade = 0;
			}
		}
		break;
	case EV_SNAP: {
		struct prec *r = &rec[e->a];
		const int on = pl.k >= 0 && !pl.test;
		r->k = (int8_t)(on ? pl.k : -1);
		r->seq = pl.seq;
		r->base = pl.base;
		r->vol0 = pl.vol0;
		r->flags = (uint8_t)(on && pl.stopping);
		r->v = pl.v;
		r->acc = pl.acc;
		r->loops = pl.loops;
		r->g = pl.g;
		if (!on && bd.on && bd.k >= 0) { /* test 100: the board's track (ARCADE, a MUSIC TEST): a load under PS2 plays
		                                  * its stream from there */
			r->k = (int8_t)bd.k;
			r->seq = bd.seq;
			r->base = base_tab[bd.seq];
			r->vol0 = bd.vol0;
			r->flags = 0;
			r->v = bd_pos();
			r->acc = 0;
			bd_loops(bd.k, r->v, &r->loops);
			r->g = 0.0f;
		}
		__sync_synchronize(); /* the record before its count (main.c reads it for a file) */
		rec_snaps[e->a] = rec_snaps[e->a] + 1;
		lr_push(LR_SNAP, r->k >= 0 ? r->k : 255, e->a, 0, r->v, 0, e->f);
		break;
	}
	case EV_LOAD: {
		const struct prec *r = &rec[e->a];
		/* test 100: the board's model from the record, the MUSIC TEST left playing */
		bd.on = r->magic == REC_MAGIC && r->k >= 0 && r->k < STREAMS && !(r->flags & 1);
		if (bd.on) {
			bd.k = r->k;
			bd.seq = r->seq;
			bd.vol0 = r->vol0;
			bd.v0 = r->v;
			bd.m0 = m_taken;
		}
		if (pl.test)
			break;
		if (r->magic == REC_MAGIC && en_now() && r->k >= 0 && r->k < STREAMS) {
			pl_start(r->k, r->v, r->seq, r->base, 0);
			pl.acc = r->acc;
			pl.loops = r->loops;
			pl.vol0 = r->vol0;
			pl.stopping = r->flags & 1;
			pl.g = r->g;
			lr_push(LR_LOAD, r->k, e->a, 1, r->v, 0, e->f);
		} else {
			pl_idle();
			pl.vol0 = cs.vol0;
			lr_push(LR_LOAD, 255, e->a, r->magic == REC_MAGIC, 0, 0, e->f);
		}
		break;
	}
	}
}

static uint32_t pw_now, pend_now, pv0_now;
static int avail_gen;

/* the ring's state for this pass (the reader's latest) */
static void ring_look(void)
{
	avail_gen = __atomic_load_n(&prod_gen, __ATOMIC_ACQUIRE) == pl.gen;
	if (avail_gen) {
		pw_now = __atomic_load_n(&prod_w, __ATOMIC_ACQUIRE);
		pend_now = prod_end;
		pv0_now = prod_v0;
	}
}

/* one output frame of the player into l, r (0 when it has none) */
static void pl_one(float *l, float *r)
{
	const struct strm *s;
	float sl = 0, sr = 0, t;
	int ok;

	*l = *r = 0;
	if (pl.k < 0)
		return;
	s = &st_tab[pl.k];
	ok = avail_gen && (pl.v + RS_HALF + 1 < pw_now || pl.v + RS_HALF + 1 >= pend_now);
	if (!ok) {
		if (!pl.started) { /* the start waits for its data (a stop meanwhile: none) */
			if (pl.stopping)
				pl_idle();
			return;
		}
		if (!pl.under) {
			pl.under = 1;
			pl.under_m = m_taken;
			cost_under++;
			lr_push(LR_UNDER, pl.k, 0, 0, pl.v, 0, (uint32_t)frame_count);
		}
	} else {
		const float *c = rs_coef[pl.acc / (48000 / RS_PH)];
		const int64_t b = (int64_t)pl.v - RS_HALF;
		int i;
		if (!pl.started) {
			pl.started = 1;
			lr_push(LR_DATA, pl.k, 0, 0, (uint32_t)((m_taken - pl.wait_m) / 48), pl.v, (uint32_t)frame_count);
		}
		if (pl.under) {
			pl.under = 0;
			lr_push(LR_UNDEREND, pl.k, 0, 0, (uint32_t)((m_taken - pl.under_m) / 48), pl.v, (uint32_t)frame_count);
		}
		if (b >= (int64_t)pv0_now && pl.v + RS_HALF + 1 < pend_now) {
			for (i = 0; i < RS_TAPS; i++) {
				const int16_t *x = &ring[((uint32_t)(b + i) & (RING - 1)) * 2];
				sl += (float)x[0] * c[i];
				sr += (float)x[1] * c[i];
			}
		} else {
			for (i = 0; i < RS_TAPS; i++) {
				const int64_t j = b + i;
				const int16_t *x;
				if (j < (int64_t)pv0_now || j >= (int64_t)pend_now)
					continue;
				x = &ring[((uint32_t)j & (RING - 1)) * 2];
				sl += (float)x[0] * c[i];
				sr += (float)x[1] * c[i];
			}
		}
		if (pend_now != ~0u && pl.v >= pend_now + RS_HALF) { /* GAME OVER's end */
			lr_push(LR_END, pl.k, pl.test, 0, pl.v, 0, (uint32_t)frame_count);
			pl_idle();
			return;
		}
	}
	t = pl_level();
	pl.g += (t - pl.g) * (1.0f / 256.0f);
	*l = sl * pl.g;
	*r = sr * pl.g;
	if (pl.stopping && pl.g < 1e-4f) {
		lr_push(LR_STOPPED, pl.k, 0, 0, pl.v, 0, (uint32_t)frame_count);
		pl_idle();
		return;
	}
	pl.acc += 44100;
	if (pl.acc >= 48000) {
		pl.acc -= 48000;
		pl.v++;
		if (s->P && pl.v > s->n && (pl.v - s->n - 1) / s->P + 1 > pl.loops) {
			pl.loops = (pl.v - s->n - 1) / s->P + 1;
			lr_push(LR_LOOP, pl.k, 0, 0, pl.loops, s->n - s->P, (uint32_t)frame_count);
		}
	}
}

static int16_t sat16(int32_t x)
{
	return (int16_t)(x > 32767 ? 32767 : x < -32768 ? -32768 : x);
}

static void pl_commands(void)
{
	const int en = en_now();

	if (en != en_seen) { /* the SOUNDTRACK row changed: off = the board's music again (the stream stops) */
		en_seen = en;
		if (!en) {
			cs.hush = 0;
			if (pl.k >= 0 && !pl.test) {
				pl.stopping = 1;
				lr_push(LR_OFF, pl.k, 0, 0, pl.v, 0, (uint32_t)frame_count);
			}
		} else { /* test 100: PS2 again: the board's playing track hushed, its stream from its place */
			cs.hush = cs.on && seq_stream(cs.seq0) >= 0;
			if (!pl.test && (pl.k < 0 || pl.stopping))
				board_resume(0);
		}
	}
	if (t_req_n != t_seen) {
		t_seen = t_req_n;
		__sync_synchronize();
		if (t_req_seq < 0) {
			if (pl.test) {
				lr_push(LR_TESTEND, pl.k, 0, 0, pl.v, 0, (uint32_t)frame_count);
				pl_idle();
				board_resume(1); /* test 100 */
			}
		} else {
			const int seq = t_req_seq, k = seq_stream(seq);
			if (k >= 0) {
				pl_start(k, 0, seq, base_tab[seq], 1);
				pl.vol0 = (uint8_t)(t_req_vol > 0 ? t_req_vol : base_tab[seq]);
				pl.g = pl_level();
				lr_push(LR_TEST, k, seq, 0, 0, 0, (uint32_t)frame_count);
			}
		}
	}
	hush_apply();
}

void ps2music_mix(int16_t *lr, int n)
{
	const uint64_t t0 = tb_read();
	const uint32_t f = (uint32_t)frame_count;
	int i;

	pl_commands();
	ring_look();
	if (pl.k >= 0 && avail_gen && pl.started) {
		const uint32_t ahead = pw_now - pl.v, ms = ahead / 44;
		if (pend_now == ~0u && ms < cost_low)
			cost_low = ms;
	}
	for (i = 0; i < n; i++) {
		float l, r;
		while (ev_r != ev_w && evq[ev_r & (EVQ - 1)].m <= m_taken) {
			ev_apply(&evq[ev_r & (EVQ - 1)]);
			ev_r++;
			ring_look();
		}
		if (pl.k >= 0) {
			pl_one(&l, &r);
			lr[2 * i] = sat16(lr[2 * i] + (int32_t)(l < 0 ? l - 0.5f : l + 0.5f));
			lr[2 * i + 1] = sat16(lr[2 * i + 1] + (int32_t)(r < 0 ? r - 0.5f : r + 0.5f));
			cost_played = 1;
		}
		m_taken++;
	}
	if (pl.k >= 0)
		__atomic_store_n(&cons_v, pl.v > RS_HALF ? pl.v - RS_HALF : 0, __ATOMIC_RELEASE);
	/* the cost, per emulated frame */
	if (f != cost_f) {
		if (cost_cur > cost_max)
			cost_max = cost_cur;
		cost_sum += cost_cur;
		cost_n++;
		cost_cur = 0;
		cost_f = f;
	}
	cost_cur += tb_us(t0, tb_read());
	if (cost_ask != cost_done) {
		cost_out.max = cost_max;
		cost_out.n = cost_n;
		cost_out.sum = cost_sum;
		cost_out.low = cost_low;
		cost_out.under = cost_under;
		cost_out.played = cost_played;
		cost_max = cost_n = cost_under = 0;
		cost_sum = 0;
		cost_low = ~0u;
		cost_played = 0;
		__sync_synchronize();
		cost_done = cost_ask;
	}
}

/* frames taken and dropped (sound_cut): the events in them applied, the stream moved on as if played */
void ps2music_skip(int n)
{
	int i;

	for (i = 0; i < n; i++) {
		while (ev_r != ev_w && evq[ev_r & (EVQ - 1)].m <= m_taken) {
			ev_apply(&evq[ev_r & (EVQ - 1)]);
			ev_r++;
		}
		if (pl.k >= 0 && pl.started) {
			pl.acc += 44100;
			if (pl.acc >= 48000) {
				pl.acc -= 48000;
				pl.v++;
			}
		}
		m_taken++;
	}
}

/* the launcher's resampler (launcher/lsound.c rs_init, hardware-proven in the GALLERY since test 75) */
static double s_sin(double x)
{
	const double pi = 3.14159265358979323846;
	double t, s = 0, x2;
	int k;

	x -= 2 * pi * (double)(long)(x / (2 * pi));
	if (x > pi)
		x -= 2 * pi;
	if (x < -pi)
		x += 2 * pi;
	x2 = x * x;
	t = x;
	for (k = 1; k < 18; k += 2) {
		s += t;
		t *= -x2 / ((k + 1) * (k + 2));
	}
	return s;
}

static double s_i0(double x)
{
	double s = 1, t = 1;
	int k;

	for (k = 1; k < 40; k++) {
		t *= (x / (2 * k)) * (x / (2 * k));
		s += t;
	}
	return s;
}

static void rs_init(void)
{
	const double pi = 3.14159265358979323846, fc = 0.94, beta = 8.0, half = RS_TAPS / 2.0;
	int p, k;

	for (p = 0; p < RS_PH; p++) {
		double sum = 0, h[RS_TAPS];
		for (k = 0; k < RS_TAPS; k++) {
			const double t = (double)(k - RS_HALF) - (double)p / RS_PH, r = t / half;
			const double w = r * r < 1 ? s_i0(beta * __builtin_sqrt(1 - r * r)) / s_i0(beta) : 0;
			h[k] = (t == 0 ? fc : s_sin(pi * fc * t) / (pi * t)) * w;
			sum += h[k];
		}
		for (k = 0; k < RS_TAPS; k++)
			rs_coef[p][k] = (float)(h[k] / sum);
	}
}

void ps2music_attach(uint64_t step)
{
	out_step = step;
	m_taken = 0;
	rs_init();
	ymz_write_hook = wr_hook;
	ymz_slot_hook = slot_hook;
}

/* ---- the game thread -------------------------------------------------------------------------------------------- */

void ps2music_init(int set, int arrange)
{
	const unsigned char *t;
	uint32_t n = 0;
	HANDLE h;
	int k;

	m_set = set;
	m_arrange = arrange;
	t = ps2data_load(PS2N_BGM_TABLE, &n);
	if (!t || n != STREAMS * PS2BGM_REC) {
		free((void *)t);
		snprintf(m_why, sizeof(m_why), "NO PS2DATA.BIN (ITS SOUNDTRACK TABLE)");
		m_state = PS2M_NONE;
		log_printf(C_YELLOW, "PS2 MUSIC: NO BGM.TABLE IN PS2DATA.BIN: SOUNDTRACK STAYS ARCADE");
		return;
	}
	for (k = 0; k < STREAMS; k++) {
		const unsigned char *r = t + k * PS2BGM_REC;
		if (be32(r) != (uint32_t)(PS2BGM_FIRST + k) || memcmp(r + 16, "BG00", 4)) {
			free((void *)t);
			snprintf(m_why, sizeof(m_why), "PS2DATA.BIN'S SOUNDTRACK TABLE IS DAMAGED");
			m_state = PS2M_BAD;
			log_printf(C_RED, "PS2 MUSIC: BGM.TABLE RECORD %d IS NOT FILE %d: SOUNDTRACK STAYS ARCADE", k,
			           PS2BGM_FIRST + k);
			return;
		}
		tab_bytes[k] = be32(r + 8);
	}
	free((void *)t);
	dA.buf = malloc(PAIRS * 2 * BLK_BYTES);
	dB.buf = malloc(PAIRS * 2 * BLK_BYTES);
	if (!dA.buf || !dB.buf) {
		snprintf(m_why, sizeof(m_why), "NO MEMORY FOR THE STREAMS");
		m_state = PS2M_BAD;
		log_printf(C_RED, "PS2 MUSIC: NO MEMORY FOR ITS READ BUFFERS");
		return;
	}
	snprintf(m_why, sizeof(m_why), "CHECKING PS2MUSIC.BIN");
	m_state = PS2M_CHECKING;
	__sync_synchronize();
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 64 * 1024, reader_main, NULL, PS2M_THREAD))) {
		snprintf(m_why, sizeof(m_why), "NO READER THREAD");
		m_state = PS2M_BAD;
		log_printf(C_RED, "PS2 MUSIC: ITS READER THREAD DID NOT START");
		return;
	}
	NtClose(h);
}

int ps2music_state(void)
{
	return m_state;
}

const char *ps2music_why(void)
{
	return m_state == PS2M_OK ? "" : m_why;
}

void ps2music_enable(int on)
{
	m_enabled = on != 0;
}

int ps2music_active(void)
{
	return en_now();
}

int ps2music_has_seq(int seq)
{
	return seq_stream(seq) >= 0;
}

const char *ps2music_seq_name(int seq)
{
	const int k = seq_stream(seq);

	return k >= 0 ? st_tab[k].name : "";
}

void ps2music_test(int seq, int vol)
{
	const int on = seq >= 0 && en_now() && seq_stream(seq) >= 0;

	test_hush = on;
	__sync_synchronize(); /* the hush before the test chip's commands (they follow this call) */
	if (on)
		ymz_music_hush |= YMZ_HUSH_TEST;
	t_req_seq = on ? seq : -1;
	t_req_vol = vol;
	__sync_synchronize();
	t_req_n = t_req_n + 1;
}

int ps2music_test_on(void)
{
	return test_hush;
}

void ps2music_levels(int32_t game_q15, int32_t test_q15)
{
	lvl_game_q15 = game_q15;
	lvl_test_q15 = test_q15;
}

void ps2music_slot_get(int slot, uint8_t out[PS2M_REC_BYTES])
{
	memset(out, 0, PS2M_REC_BYTES);
	if (slot >= 0 && slot < RT_SLOTS)
		memcpy(out, &rec[slot], sizeof(rec[slot]));
}

unsigned ps2music_snaps(int slot)
{
	return slot >= 0 && slot < RT_SLOTS ? rec_snaps[slot] : 0;
}

void ps2music_slot_put(int slot, const uint8_t *in)
{
	if (slot < 0 || slot >= RT_SLOTS)
		return;
	if (in)
		memcpy(&rec[slot], in, sizeof(rec[slot]));
	else
		memset(&rec[slot], 0, sizeof(rec[slot]));
}

/* seconds with three decimals of a stream's sample */
static void secs(char *b, size_t n, uint32_t v)
{
	snprintf(b, n, "%u.%03u S", (unsigned)(v / 44100), (unsigned)(v % 44100 * 1000 / 44100));
}

static const char *kind_word(int kind)
{
	return kind == K_INTRO ? "INTRO" : kind == K_LOOP ? "LOOP" : kind == K_SELF ? "LOOPING" : "ONCE";
}

static const char *slot_word(int s)
{
	static const char *const w[RT_SLOTS] = {"ATTRACT", "CREDIT", "STAGE", "STATE"};
	return s >= 0 && s < RT_SLOTS ? w[s] : "?";
}

void ps2music_vblank(void)
{
	static unsigned vb, rd_dec0, reads0, keep0, skips0;
	static int pending;
	char a[24], b[24];

	while (lr_r != __atomic_load_n(&lr_w, __ATOMIC_ACQUIRE)) {
		const struct lrec r = lrq[lr_r & (LRQ - 1)];
		const char *nm = r.k < STREAMS ? st_tab[r.k].name : "";
		__atomic_store_n(&lr_r, lr_r + 1, __ATOMIC_RELEASE);
		secs(a, sizeof(a), r.x);
		switch (r.type) {
		case LR_START:
			log_printf(C_WHITE, "PS2 MUSIC: SEQUENCE %u (%s) STARTS STREAM %u %s FROM %s AT EMU %u", r.a,
			           kind_word(r.b), r.k, nm, a, (unsigned)r.f);
			break;
		case LR_CONT:
			log_printf(C_WHITE, "PS2 MUSIC: SEQUENCE %u (LOOP) GOES ON IN STREAM %u %s AT %s, EMU %u", r.a, r.k, nm, a,
			           (unsigned)r.f);
			break;
		case LR_ARCADE:
			log_printf(C_WHITE, "PS2 MUSIC: SEQUENCE %u HAS NO PS2 STREAM: THE BOARD'S MUSIC (EMU %u)", r.a,
			           (unsigned)r.f);
			break;
		case LR_STOP:
			log_printf(C_WHITE, "PS2 MUSIC: STREAM %u %s STOPS AT %s%s, EMU %u", r.k, nm, a,
			           r.b ? " (AN UNMAPPED SEQUENCE STARTED)" : "", (unsigned)r.f);
			break;
		case LR_FADE:
			log_printf(C_WHITE, "PS2 MUSIC: STREAM %u %s FADES (LEVEL %02X OF %02X) AT %s, EMU %u", r.k, nm, r.a, r.b, a,
			           (unsigned)r.f);
			break;
		case LR_FADED:
			log_printf(C_WHITE, "PS2 MUSIC: STREAM %u %s FADED OUT AT %s, EMU %u", r.k, nm, a, (unsigned)r.f);
			break;
		case LR_LOOP:
			secs(b, sizeof(b), r.y);
			log_printf(C_WHITE, "PS2 MUSIC: STREAM %u %s LOOPS (%u) BACK TO %s, EMU %u", r.k, nm, (unsigned)r.x, b,
			           (unsigned)r.f);
			break;
		case LR_END:
			log_printf(C_WHITE, "PS2 MUSIC: STREAM %u %s ENDED AT %s, EMU %u%s", r.k, nm, a, (unsigned)r.f,
			           r.a ? " (MUSIC TEST)" : "");
			break;
		case LR_DATA:
			secs(b, sizeof(b), r.y);
			log_printf(r.x > 100 ? C_YELLOW : C_WHITE, "PS2 MUSIC: STREAM %u %s PLAYS FROM %s, ITS DATA CAME %u MS AFTER "
			           "THE START (EMU %u)", r.k, nm, b, (unsigned)r.x, (unsigned)r.f);
			break;
		case LR_UNDER:
			log_printf(C_YELLOW, "PS2 MUSIC: UNDERRUN IN STREAM %u %s AT %s (THE DISK IS SLOW): THE MUSIC SILENT, EMU %u",
			           r.k, nm, a, (unsigned)r.f);
			break;
		case LR_UNDEREND:
			secs(b, sizeof(b), r.y);
			log_printf(C_YELLOW, "PS2 MUSIC: STREAM %u %s BACK AT %s AFTER %u MS SILENT", r.k, nm, b, (unsigned)r.x);
			break;
		case LR_SNAP:
			if (r.k < STREAMS) /* (a slot without one: no line) */
				log_printf(C_WHITE, "PS2 MUSIC: SLOT %s KEEPS STREAM %u %s AT %s (EMU %u)", slot_word(r.a), r.k, nm, a,
				           (unsigned)r.f);
			break;
		case LR_LOAD:
			if (r.k < STREAMS)
				log_printf(C_WHITE, "PS2 MUSIC: SLOT %s LOADED: STREAM %u %s FROM %s (EMU %u)", slot_word(r.a), r.k, nm,
				           a, (unsigned)r.f);
			else
				log_printf(C_WHITE, "PS2 MUSIC: SLOT %s LOADED: NO STREAM%s (EMU %u)", slot_word(r.a),
				           r.b ? "" : " (NO RECORD: THE BOARD'S MUSIC UNTIL THE NEXT TRACK)", (unsigned)r.f);
			break;
		case LR_TEST:
			log_printf(C_WHITE, "PS2 MUSIC: MUSIC TEST: SEQUENCE %u = STREAM %u %s (EMU %u)", r.a, r.k, nm,
			           (unsigned)r.f);
			break;
		case LR_TESTEND:
			log_printf(C_WHITE, "PS2 MUSIC: MUSIC TEST STOPPED AT %s OF STREAM %u %s (EMU %u)", a, r.k, nm,
			           (unsigned)r.f);
			break;
		case LR_OFF:
			log_printf(C_WHITE, "PS2 MUSIC: SOUNDTRACK ARCADE: STREAM %u %s STOPS AT %s (EMU %u)", r.k, nm, a,
			           (unsigned)r.f);
			break;
		case LR_STOPPED:
			break;
		case LR_RESUME: /* test 100 */
			log_printf(C_WHITE, "PS2 MUSIC: SEQUENCE %u'S STREAM %u %s TAKEN UP AT %s (%s), EMU %u", r.a, r.k, nm, a,
			           r.b ? "THE MUSIC TEST OVER" : "SOUNDTRACK PS2 AGAIN", (unsigned)r.f);
			break;
		}
	}
	if (lr_lost) {
		log_printf(C_YELLOW, "PS2 MUSIC: %u EVENTS OR LOG RECORDS LOST (QUEUE FULL)", lr_lost);
		lr_lost = 0;
	}
	/* the cost, once a minute while a stream played (test 99: "the decode+resample cost per vblank") */
	if (!pending && ++vb >= 3600) {
		vb = 0;
		pending = 1;
		cost_ask = cost_ask + 1;
	} else if (pending && cost_done == cost_ask) {
		const unsigned dec = rd_dec_us - rd_dec0, reads = rd_reads - reads0, keep = rd_keep - keep0;
		pending = 0;
		if (cost_out.played && cost_out.n)
			log_printf(cost_out.under ? C_YELLOW : C_WHITE, "PS2 MUSIC: MIX + RESAMPLE %u US AT MOST IN A VBLANK, %u US "
			           "ON AVERAGE; READ + DECODE %u US A VBLANK ON AVERAGE (%u US THE LONGEST PASS, A READ UP TO %u US); "
			           "%u READS, %u KEEP-AWAKE; RING LOWEST %u MS; %u UNDERRUNS (%u CATCH-UPS)", (unsigned)cost_out.max,
			           (unsigned)(cost_out.sum / cost_out.n), dec / cost_out.n, rd_dec_max_us, rd_read_max_us,
			           reads - keep, keep, cost_out.low == ~0u ? 0 : (unsigned)cost_out.low, (unsigned)cost_out.under, rd_skips - skips0);
		rd_dec0 = rd_dec_us;
		skips0 = rd_skips;
		reads0 = rd_reads;
		keep0 = rd_keep;
		rd_dec_max_us = rd_read_max_us = 0;
	}
}

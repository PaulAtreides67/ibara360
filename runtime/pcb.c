/* `pcb` cost mode: a port of MAME 0.289 src/devices/cpu/sh/sh7709s.cpp (BSD-3-Clause,
 * copyright-holders: Jesus Ramos) as cv1k.cpp configures it. See pcb.h for what the DRC
 * around it does. The arithmetic below follows the original line by line, including the
 * places where it mixes the unmasked access address with physical ones (SDRAM pages). */
#include <string.h>
#ifdef PCBX_AB
#include <stdio.h>
#include <stdlib.h>
#endif

#include "cv1k.h"
#include "pcbx.h"

#ifdef CV1K_PCB

pcb_t pcb __attribute__((aligned(128)));

/* BSC registers (MAME sh3_base_device::device_start values until the game writes them) */
static u16 bcr2 = 0x3FF0, wcr1 = 0x3FF3, wcr2 = 0xFFFF, mcr = 0;

#define LINE_SIZE 16u
#define BLOCKS 256u
#define WAYS 4u
#define SDRAM_PAGE_SIZE 1024u
#define CACHE_MISS_STALL 1u
#define BUS_ACCESS_PENALTY 3u
#define BURST_READ_WORD_PENALTY 3u
#define BURST_WRITE_WORD_PENALTY 4u

static inline int is_cacheable(u32 a)
{
	u32 region = a >> 29;
	return region != 5 && region != 7;
}

static inline u32 get_area(u32 a)
{
	return (a & 0x1FFFFFFFu) >> 26;
}

static inline int is_sdram_region(u32 a)
{
	return get_area(a) == 3;
}

/* sh7709s_device::cache_access for a cacheable address, with the LRU ranks of a set packed in
 * one word and changed in registers (one store), see pcb.h. The ranks are always 0-3, at most
 * one way has rank 3 and at least one has rank 0: true after invalidate (all 0) and kept by
 * both updates below. So the way MAME's set_mru() finds (the first with rank 3) is always the
 * way just touched. Returns 1 on a hit; on a miss the replaced line's address goes to *wb
 * when it was dirty (MAME m_wb_address). */
static inline int cache_access(u32 address, int write, u32 *wb)
{
	u32 cache_address = (address & 0x1FFFFFFFu) / LINE_SIZE;
	pcb_set_t *s = &pcb.set[cache_address % BLOCKS];
	u32 lru = s->lru, i, sh;
	/* MAME's first match wins: tag 0 may sit in several ways */
	if (s->tag[0] == cache_address)
		i = 0;
	else if (s->tag[1] == cache_address)
		i = 1;
	else if (s->tag[2] == cache_address)
		i = 2;
	else if (s->tag[3] == cache_address)
		i = 3;
	else
		goto miss;
	if (write)
		s->dirty[i] = 1;
	sh = i * 8;
	u32 r = (lru >> sh) & 0xFF;
	if (r != WAYS - 1) {
		/* ranks above r drop by one (byte j of (lru | 0x80808080) - (r + 1) * 0x01010101 has
		 * bit 7 set exactly when rank j > r; no byte borrows), way i becomes rank 3 */
		u32 gt = (((lru | 0x80808080u) - (r + 1) * 0x01010101u) >> 7) & 0x01010101u;
		s->lru = ((lru - gt) & ~(0xFFu << sh)) | ((WAYS - 1) << sh);
		s->mru_tag = cache_address != 0 ? cache_address : PCB_NO_MRU;
		s->mru_way = i;
	}
	return 1;
miss:;
	/* the first way with rank 0 is replaced; every other nonzero rank drops by one */
	u32 nz = ((lru | 0x80808080u) - 0x01010101u) & 0x80808080u;   /* bit 7: rank != 0 */
	u32 z = nz ^ 0x80808080u;
	if (z != 0) {
		i = (u32)__builtin_ctz(z) >> 3;
		sh = i * 8;
		if (s->dirty[i])
			*wb = s->tag[i] * LINE_SIZE;
		s->tag[i] = cache_address;
		s->dirty[i] = (u8)write;
		s->lru = (lru - (nz >> 7)) | ((WAYS - 1) << sh);
		s->mru_tag = cache_address != 0 ? cache_address : PCB_NO_MRU;
		s->mru_way = i;
	}
	pcb.n_miss++;
	return 0;
}

static u32 get_wcr1_timing(u32 address)
{
	u32 area = get_area(address);
	if (area > 6 || area == 1)
		return 0;
	u32 v = (wcr1 >> (area * 2)) & 3;
	return v == 0 ? 1 : v;
}

static u32 get_wcr2_timing(u32 address)
{
	static const u8 burst[8] = { 2, 2, 3, 4, 4, 6, 8, 10 };
	static const u8 single[8] = { 0, 1, 2, 3, 4, 6, 8, 10 };
	u32 area = get_area(address);
	u32 w = wcr2, v;
	if (area > 6 || area == 1)
		return 0;
	if (area == 0) {
		v = w & 7;
	} else if (area == 2 || area == 3) {
		w >>= 3;
		if (area == 3)
			w >>= 2;
		v = w & 3;
		return v == 0 ? 1 : v;
	} else {
		w >>= 7 + (area - 4) * 3;
		v = w & 7;
	}
	return is_sdram_region(address) ? burst[v] : single[v];
}

static inline u32 mcr_tpc(void) { return ((mcr >> 14) & 3) + 1; }
static inline u32 mcr_rcd(void) { return ((mcr >> 12) & 3) + 1; }
static inline u32 mcr_trwl(void) { return ((mcr >> 10) & 3) + 1; }

static u32 cache_line_fetch_count(u32 address)
{
	u32 area = get_area(address);
	if (area == 0)
		return 8;
	if (area == 1)
		return 0;
	return LINE_SIZE >> ((bcr2 >> (area * 2)) & 3);
}

/* The parts of access_penalty() that depend only on the area and the BSC registers, per area
 * (0-7), rebuilt from the functions above whenever the game writes bcr2/wcr1/wcr2/mcr */
static struct {
	u32 bus_cached[8];    /* bus_penalty of a cacheable miss */
	u32 bus_rd[8];        /* ... of an uncached read */
	u32 bus_wr[8];        /* ... of an uncached write */
	u32 wcr1[8];          /* get_wcr1_timing(), added when the area changes */
	u32 wb[8];            /* wb_active after a write-back (SDRAM: without the same-page tpc * 2) */
	u32 tpc2;             /* mcr_tpc() * 2 */
} tm;

static void timing_update(void)
{
	for (u32 area = 0; area < 8; area++) {
		u32 a = area << 26, w2 = get_wcr2_timing(a);
		if (area != 3) {
			tm.bus_cached[area] = (BUS_ACCESS_PENALTY + w2) * cache_line_fetch_count(a);
			tm.bus_rd[area] = tm.bus_wr[area] = BUS_ACCESS_PENALTY + w2;
			tm.wb[area] = get_wcr1_timing(a) * 2 + tm.bus_cached[area] * 2;
		} else {
			tm.bus_cached[area] = BUS_ACCESS_PENALTY + BURST_READ_WORD_PENALTY + mcr_rcd() + w2;
			tm.bus_rd[area] = BUS_ACCESS_PENALTY + mcr_rcd() + w2;
			tm.bus_wr[area] = BUS_ACCESS_PENALTY + mcr_rcd() + mcr_trwl();
			tm.wb[area] = (BUS_ACCESS_PENALTY + get_wcr1_timing(a) + BURST_WRITE_WORD_PENALTY +
				mcr_rcd() + mcr_trwl()) * 2;
		}
		tm.wcr1[area] = get_wcr1_timing(a);
	}
	tm.tpc2 = mcr_tpc() * 2;
}

/* sh7709s_device::access_penalty, same arithmetic (page numbers from the unmasked address,
 * as MAME computes them). Inlined into the two slow entries. */
static inline __attribute__((always_inline)) u32 access_penalty(u32 address, int write)
{
	u32 area = get_area(address), wb_address = 0, bus_penalty, cpu_penalty;
	pcb.n_access++;
	if (PCB_CACHED(address)) {
		if (cache_access(address, write, &wb_address))
			return 0;
		bus_penalty = tm.bus_cached[area];
		cpu_penalty = CACHE_MISS_STALL;
	} else {
		bus_penalty = write ? tm.bus_wr[area] : tm.bus_rd[area];
		cpu_penalty = 0;
	}
	u32 page_read = address / SDRAM_PAGE_SIZE;
	int sdram = area == 3;

	if (area != pcb.last_area)
		bus_penalty += tm.wcr1[area];
	pcb.last_area = area;

	if (sdram && page_read == pcb.last_sdram_page)
		cpu_penalty += pcb.precharge;     /* (+ 0 when no precharge is pending) */
	cpu_penalty += pcb.wb_active;

	if (wb_address != 0) {
		if (sdram) {
			u32 page_write = wb_address / SDRAM_PAGE_SIZE;
			pcb.wb_active = tm.wb[3] + (page_read == page_write ? tm.tpc2 : 0);
			pcb.last_sdram_page = page_write;
		} else {
			pcb.wb_active = tm.wb[area];
		}
		pcb.precharge = 0;
	} else {
		pcb.wb_active = 0;
		if (sdram) {
			pcb.precharge = tm.tpc2;
			pcb.last_sdram_page = page_read;
		} else {
			pcb.precharge = 0;
		}
	}

	return cpu_penalty + bus_penalty * 2;
}

#ifdef PCB_AB
#include "pcb_ref.inc"
#endif

#ifdef PCB_PROF
/* profiling build: penalty cycles per block (CHK address) over emulated frames PCB_A..PCB_B,
 * data accesses and fetches apart; printed at exit to PCB_OUT */
#include <stdio.h>
#include <stdlib.h>
u32 pcb_cur_block;
extern u64 frame_count;
#define PROF_SLOTS (1 << 16)
static struct { u32 at; u64 data, fetch, nd, nf, miss; } prof[PROF_SLOTS];
static u64 prof_a = ~0ull, prof_b;
static int prof_fetch;

static void prof_print(void)
{
	const char *p = getenv("PCB_OUT");
	FILE *f = p ? fopen(p, "w") : NULL;
	if (!f)
		return;
	for (int i = 0; i < PROF_SLOTS; i++)
		if (prof[i].at)
			fprintf(f, "%08X data %llu fetch %llu nd %llu nf %llu miss %llu\n", prof[i].at,
				(unsigned long long)prof[i].data, (unsigned long long)prof[i].fetch,
				(unsigned long long)prof[i].nd, (unsigned long long)prof[i].nf,
				(unsigned long long)prof[i].miss);
	fclose(f);
}

static void prof_add(u32 p, u64 miss0)
{
	static int init;
	if (!init) {
		const char *a = getenv("PCB_A"), *b = getenv("PCB_B");
		init = 1;
		if (a && b) {
			prof_a = strtoull(a, NULL, 0);
			prof_b = strtoull(b, NULL, 0);
			atexit(prof_print);
		}
	}
	if (frame_count < prof_a || frame_count > prof_b)
		return;
	u32 at = pcb_cur_block, h = (at * 2654435761u) >> 16;
	while (prof[h].at && prof[h].at != at)
		h = (h + 1) & (PROF_SLOTS - 1);
	prof[h].at = at;
	if (prof_fetch) {
		prof[h].fetch += p;
		prof[h].nf++;
	} else {
		prof[h].data += p;
		prof[h].nd++;
	}
	prof[h].miss += pcb.n_miss - miss0;
}
#endif

#ifdef PCB_PROBE
#include <stdio.h>
#include <stdlib.h>
static FILE *probe_f;
static int probe_init;

static FILE *probe_file(void)
{
	if (!probe_init) {
		const char *p = getenv("PCB_PROBE_OUT");
		probe_init = 1;
		probe_f = p ? fopen(p, "w") : NULL;
	}
	return probe_f;
}

/* goal 16 frame model: penalty cycles by kind (cached SDRAM reads incl. fetches, cached
 * writes, uncached SDRAM writes, everything else) and access counts, printed with E/X when
 * PCB_PROBE_CNT=1, plus "K <cycle> <busy cycles> <list bytes> <upload bytes>" at each kick */
u64 pcbp_pen[4], pcbp_n[4];
static int probe_cnt = -1;

void pcb_probe(u32 at, u64 now)
{
	FILE *f = probe_file();
	if (probe_cnt < 0) {
		const char *s = getenv("PCB_PROBE_CNT");
		probe_cnt = s && *s == '1';
	}
	if (f && probe_cnt)
		fprintf(f, "%c %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu\n", at == 0x0C04A0A4u ? 'E' : 'X',
			(unsigned long long)now, (unsigned long long)pcb.pen_total,
			(unsigned long long)pcbp_pen[0], (unsigned long long)pcbp_n[0],
			(unsigned long long)pcbp_pen[1], (unsigned long long)pcbp_n[1],
			(unsigned long long)pcbp_pen[2], (unsigned long long)pcbp_n[2],
			(unsigned long long)pcbp_pen[3], (unsigned long long)pcb.n_idle);
	else if (f)
		fprintf(f, "%c %llu\n", at == 0x0C04A0A4u ? 'E' : 'X', (unsigned long long)now);
}

void pcb_probe_kick(u64 now, u64 busy, u32 bytes, u32 upload)
{
	FILE *f = probe_file();
	if (f && probe_cnt == 1)
		fprintf(f, "K %llu %llu %u %u\n", (unsigned long long)now, (unsigned long long)busy, bytes, upload);
}

int pcb_probe_on;

void pcb_probe_vblank(u64 n, u64 now)
{
	static long long from = -2, to;
	FILE *f = probe_file();
	if (f)
		fprintf(f, "V %llu %llu\n", (unsigned long long)n, (unsigned long long)now);
	if (from == -2) {
		const char *a = getenv("PCB_PROBE_FROM"), *b = getenv("PCB_PROBE_TO");
		from = a ? atoll(a) : -1;
		to = b ? atoll(b) : -1;
	}
	pcb_probe_on = f && (long long)n >= from && (long long)n <= to;
}

void pcb_probe_tmu(u64 now, u32 addr, u32 v)
{
	static int on = -1;
	if (on < 0) {
		const char *s = getenv("PCB_PROBE_TMU");
		on = s && *s == '1';
	}
	if (on && probe_file())
		fprintf(probe_file(), "M %llu %X %X\n", (unsigned long long)now, addr, v);
}

/* PCB_PROBE_ALL=1: "B <addr> <cycle>" at every block start instead (goal 15: block-level
 * comparison with MAME's instruction trace) */
void pcb_probe_fn(u32 at, u64 now)
{
	static u8 *ent;
	static int all = -1;
	if (all < 0) {
		const char *s = getenv("PCB_PROBE_ALL");
		all = s && *s == '1';
	}
	if (all) {
		fprintf(probe_file(), "B %X %llu\n", at, (unsigned long long)now);
		return;
	}
	if (!ent) {
		ent = calloc(0x200000, 1);
		for (unsigned i = 0; i < rt_game->table_len; i++)
			if (rt_game->table[i].addr - 0x0C000000u < 0x400000u)
				ent[(rt_game->table[i].addr - 0x0C000000u) >> 1] = 1;
	}
	if (at - 0x0C000000u < 0x400000u && ent[(at - 0x0C000000u) >> 1])
		fprintf(probe_file(), "P %X %llu\n", at, (unsigned long long)now);
}
#endif

/* Goal 16 experiments (the PC host sets these; the defaults are MAME 0.289): every bus access
 * (nonzero penalty) pays pcbx_pen_scale times its penalty, plus up to pcbx_stall_step of the
 * CPU stall the blitter's list fetches left owing (pcbx_stall_left, added at each kick). */
int pcbx_active;
double pcbx_pen_scale = 1.0;
u32 pcbx_stall_left, pcbx_stall_step = 32;
s32 pcbx_unc_write, pcbx_unc_read;   /* cycles added per uncached (P2) SDRAM write / read (min 1) */
double pcbx_fill_scale = 1.0;         /* scale of the penalty of cached SDRAM accesses (misses) */
double pcbx_uw_scale = 1.0;           /* scale of the penalty of uncached SDRAM writes */
extern u64 pcbx_stall_paid;

/* Test 17b: each scale as k tenths, so that the penalty scaled is (p * k + 5) / 10 in integers
 * for p below PCBX_INT_MAX. On the 360 the double expression costs two load-hit-store stalls
 * per call (int -> double and back go through memory), ~1.9 ms per heavy frame in test 17.
 * A scale gets the integer form only when it is whole tenths AND gives the double expression's
 * value for every p below PCBX_INT_MAX (not all do: 0.7 is a little under 0.7 as a double, so
 * 45 * 0.7 rounds to 31, not 32); otherwise -1 and the double expression, as before. The fit's
 * 1.3 and 0.0 pass (tools/xenon/tenths_check.c: 1.3 even for every p below 2^20).
 * Test 27: k hundredths, (p * k + 50) / 100, for FIT+ 2.9%'s 1.55 (whole tenths give the same
 * values as before: (p * 10k + 50) / 100 = (p * k + 5) / 10).
 * Test 32: k thousandths, (p * k + 500) / 1000, for FIT+ 3.75%'s 1.694 (whole hundredths give
 * the same values as before: (p * 10k + 500) / 1000 = (p * k + 50) / 100; p * k stays below
 * 2^32 for p below PCBX_INT_MAX and scales up to 100). */
#define PCBX_INT_MAX 4096u
static s32 pen_k = 1000, fill_k = 1000, uw_k = 1000;
int pcbx_dbl;

static s32 thousandths(double s)
{
	s32 k;
	u32 p;

	if (!(s >= 0.0 && s <= 100.0))
		return -1;
	k = (s32)(s * 1000.0 + 0.5);
	if ((double)k / 1000.0 != s)
		return -1;
	for (p = 0; p < PCBX_INT_MAX; p++)
		if ((p * (u32)k + 500u) / 1000u != (u32)((double)p * s + 0.5))
			return -1;
	return k;
}

void pcbx_prepare(void)
{
	pen_k = thousandths(pcbx_pen_scale);
	fill_k = thousandths(pcbx_fill_scale);
	uw_k = thousandths(pcbx_uw_scale);
}

static inline u32 pcbx_scale(u32 p, s32 k, double s)
{
#ifdef PCBX_AB
	if (k >= 0 && p >= PCBX_INT_MAX) {
		fprintf(stderr, "PCBX_AB: penalty %u above the integer form's range\n", p);
		abort();
	}
#endif
	if (k >= 0 && p < PCBX_INT_MAX && !pcbx_dbl)
		return (p * (u32)k + 500u) / 1000u;
	return (u32)((double)p * s + 0.5);
}

static u32 pcbx_adjust(u32 p, u32 a, int w)
{
	if (pen_k != 1000)
		p = pcbx_scale(p, pen_k, pcbx_pen_scale);
	if (((a >> 26) & 7) == 3) {
		if ((a >> 29) == 5) {
			s32 d = w ? pcbx_unc_write : pcbx_unc_read;
			if (w && uw_k != 1000)
				p = pcbx_scale(p, uw_k, pcbx_uw_scale);
			p = (s32)p + d < 1 ? 1 : (u32)((s32)p + d);
		} else if ((a >> 29) != 7 && fill_k != 1000) {
			p = pcbx_scale(p, fill_k, pcbx_fill_scale);
		}
	}
	if (pcbx_stall_left) {
		u32 s = pcbx_stall_left < pcbx_stall_step ? pcbx_stall_left : pcbx_stall_step;
		pcbx_stall_left -= s;
		pcbx_stall_paid += s;
		p += s;
	}
	return p;
}

u64 pcbx_stall_paid;

/* Test 17: the timing fitted to the user's PCB attract capture (goal 16, PLAN.md "Variants":
 * real run m1): uncached SDRAM stores cost 1 cycle instead of MAME's ~17, the blitter's list
 * fetch stalls the CPU 300 cycles per 64 bytes (owed at the kick, paid at the next bus
 * accesses), cached SDRAM penalties x1.3. on = 0 is MAME 0.289's model. */
void pcb_timing_fit(int on)
{
	pcb_timing_model(on ? PCB_MODEL_FIT : PCB_MODEL_MAME);
}

/* Test 26: FIT+ = the fit with cached SDRAM penalties x1.9 instead of x1.3, for ~6.0% dropped
 * vblanks in play (the PCB player Plasmo's rate, user 2026-10-20): on the user's test 18 run
 * replayed by logic frame (host/pc REPLAY_LOGIC) it drops 5.82% from the first start to the
 * ending (fit 1.78%, x1.7 3.85%, x2.0 6.82%). x1.9 keeps the integer form. The attract then
 * runs ~2.5% slower than the PCB capture (fit: 0.1% faster). PLAN.md "FIT+". */
#define FITPLUS_FILL 1.9
#define FITPLUS_BUS 300u

/* Test 27: FIT+ 2.9% (user 2026-10-20 after test 26: "rebuild FIT+ at 2.9%, 6.0% is too slow";
 * 2.9% = Plasmo's drops outside his one-in-6 chains): cached SDRAM penalties x1.55, the rest as
 * the fit. Same replay as above: x1.5 2.68%, x1.55 ~2.9%, x1.6 3.17%. Needs the hundredths form
 * (tools/xenon/tenths_check.c: 1.55 agrees for every p below 2^20). PLAN.md "FIT+ 2.9%". */
#define FITPLUS2_FILL 1.55

/* Test 28: FIT+ 3.0% (user 2026-10-20 after test 27: "rebuild FIT+ once again at 3.0%"): cached
 * SDRAM penalties x1.57, the rest as the fit. Same replay: x1.56 2.93%, x1.57 2.97%, x1.58 3.05%,
 * x1.59 3.08% (whole hundredths only; x1.57 is the nearest). tenths_check: 1.57 agrees for every
 * p below 2^20. PLAN.md "FIT+ 3.0%". */
#define FITPLUS3_FILL 1.57

/* Test 29: FIT+ 3.05% (user 2026-10-20 after test 28: "skip test 28, go for FIT+ 3.05% as
 * suggested in the table"): cached SDRAM penalties x1.58 (the next hundredth above x1.57 in the
 * same replay), the rest as the fit. tenths_check: 1.58 agrees for every p below 2^20. PLAN.md
 * "FIT+ 3.05%". */
#define FITPLUS4_FILL 1.58

/* Test 30: FIT+ 3.17% (user 2026-10-20 after test 29 was staged: "skip test 28, increase FIT+
 * by 3.17%"): cached SDRAM penalties x1.60 (the x1.6 row of the FIT+ 2.9% / 3.0% tables), the
 * rest as the fit. A whole tenth, so the integer form is exact. PLAN.md "FIT+ 3.17%". */
#define FITPLUS5_FILL 1.60

/* Test 31: FIT+ 3.97% (user 2026-10-20 after test 30 was staged: "closest FIT+ to 4.0%?", then
 * "skip test 30, build 31 with FIT+ at 3.97%"): cached SDRAM penalties x1.73, the rest as the
 * fit. Same replay: x1.72 3.91%, x1.73 3.97%, x1.74 4.23% (work/g31/scan.sh). tenths_check: 1.73
 * agrees for every p below 2^20. PLAN.md "FIT+ 3.97%". */
#define FITPLUS6_FILL 1.73

/* Test 32: FIT+ 3.75% (user 2026-10-20 after test 31 was staged: "skip test 31, FIT+ at 3.75%"):
 * cached SDRAM penalties x1.694, the rest as the fit. Same replay: x1.69 3.66%, x1.70 3.87%
 * (no whole hundredth near 3.75), x1.692 / 1.694 / 1.696 / 1.698 all 3.75% (work/g32/scan.sh),
 * so the integer form is in thousandths now. tenths_check: 1.694 agrees for every p below 2^20.
 * PLAN.md "FIT+ 3.75%". */
#define FITPLUS7_FILL 1.694

void pcb_timing_model(int m)
{
	pcbx_pen_scale = 1.0;
	pcbx_unc_write = pcbx_unc_read = 0;
	pcbx_uw_scale = m != PCB_MODEL_MAME ? 0.0 : 1.0;
	pcbx_fill_scale = m == PCB_MODEL_FITPLUS7 ? FITPLUS7_FILL : m == PCB_MODEL_FITPLUS6 ? FITPLUS6_FILL :
	                  m == PCB_MODEL_FITPLUS5 ? FITPLUS5_FILL : m == PCB_MODEL_FITPLUS4 ? FITPLUS4_FILL :
	                  m == PCB_MODEL_FITPLUS3 ? FITPLUS3_FILL : m == PCB_MODEL_FITPLUS2 ? FITPLUS2_FILL :
	                  m == PCB_MODEL_FITPLUS ? FITPLUS_FILL : m == PCB_MODEL_FIT ? 1.3 : 1.0;
	pcbx_stall_step = m != PCB_MODEL_MAME ? 1000 : 32;
	pcbx_stall_left = 0;
	blitx_bus_cyc = m == PCB_MODEL_FITPLUS7 || m == PCB_MODEL_FITPLUS6 || m == PCB_MODEL_FITPLUS5 || m == PCB_MODEL_FITPLUS4 ||
	                m == PCB_MODEL_FITPLUS3 || m == PCB_MODEL_FITPLUS2 || m == PCB_MODEL_FITPLUS ? FITPLUS_BUS :
	                m == PCB_MODEL_FIT ? 300 : 0;
	blitx_bus_upl_cyc = ~0u;
	pcbx_active = m != PCB_MODEL_MAME;
	pcbx_prepare();
}

#ifdef PCB_PROBE
/* PCB_PROBE_ACC=1 (probe frames only): "A <addr> <r|w|f> <penalty> <precharge> <wb_active>
 * <last_sdram_page> <last_area>" for every access with a nonzero penalty, state before it */
static int probe_acc = -1, probe_fetch;
#endif

u32 pcb_access_slow(u32 a, int w)
{
#ifdef PCB_PROF
	u64 miss0 = pcb.n_miss;
#endif
#ifdef PCB_PROBE
	u32 pre0 = pcb.precharge, wb0 = pcb.wb_active, pg0 = pcb.last_sdram_page, ar0 = pcb.last_area;
#endif
	u32 p = access_penalty(a, w);
	if (UNLIKELY(pcbx_active) && p != 0)
		p = pcbx_adjust(p, a, w);
	if (p != 0)                  /* (hits leave the counter alone: no load/store of it) */
		pcb.pen_total += p;
#ifdef PCB_PROBE
	if (p != 0) {
		int k = ((a >> 26) & 7) != 3 || (a >> 29) == 7 ? 3 : (a >> 29) == 5 ? (w ? 2 : 3) : (w ? 1 : 0);
		pcbp_pen[k] += p;
		pcbp_n[k]++;
	}
#endif
#ifdef PCB_PROF
	prof_add(p, miss0);
#endif
#ifdef PCB_PROBE
	if (UNLIKELY(pcb_probe_on) && p != 0) {
		if (probe_acc < 0) {
			const char *s = getenv("PCB_PROBE_ACC");
			probe_acc = s && *s == '1';
		}
		if (probe_acc)
			fprintf(probe_file(), "A %08X %c %u %u %u %X %u\n", a, probe_fetch ? 'f' : w ? 'w' : 'r',
				p, pre0, wb0, pg0, ar0);
	}
#endif
	return p;
}

u32 pcb_io(u32 a, int w)
{
	if (a >= 0xE0000000u)
		a = pcb.arg0;       /* the accessor jumped past its arg0 store */
	else
		pcb.arg0 = a;
#ifdef PCB_AB
	u32 pr = ref_access_penalty(a, w), pn = pcb_access_slow(a, w);
	ab_check(a, w, pn, pr, "io");
	return pn;
#else
	return pcb_access_slow(a, w);
#endif
}

/* sh7709s_device::drc_update_icache */
u32 pcb_ifetch_slow(void)
{
	pcb.n_ifetch_slow++;
	if (pcb.wb_active > 0) {
		pcb.wb_active--;
		if (pcb.wb_active == 0)
			pcb.precharge = tm.tpc2;
	} else if (pcb.precharge > 0) {
		pcb.precharge--;
	}
#ifdef PCB_PROF
	prof_fetch = 1;
	u32 p = pcb_access_slow(pcb.pc, 0);
	prof_fetch = 0;
	return p;
#elif defined(PCB_PROBE)
	probe_fetch = 1;
	u32 p = pcb_access_slow(pcb.pc, 0);
	probe_fetch = 0;
	return p;
#else
	return pcb_access_slow(pcb.pc, 0);
#endif
}

void pcb_set_pc(u32 pc)
{
	pcb.pc = pc;
	pcb.pc_set = ((pc & 0x1FFFFFFFu) >> 4) & 255;
	pcb.pc_line = is_cacheable(pc) ? (pc & 0x1FFFFFFFu) >> 4 : PCB_NO_LINE;
}

static void invalidate_all(void)
{
	memset(pcb.set, 0, sizeof pcb.set);
	for (u32 i = 0; i < BLOCKS; i++)
		pcb.set[i].mru_tag = PCB_NO_MRU;
}

void pcb_reset(void)
{
	memset(&pcb, 0, sizeof pcb);
	invalidate_all();
	bcr2 = 0x3FF0;
	wcr1 = 0x3FF3;
	wcr2 = 0xFFFF;
	mcr = 0;
	timing_update();
	pcb_set_pc(0xA0000000u);
#ifdef PCB_AB
	ref_reset();
#endif
}

/* COMBINE_DATA on the 16-bit registers (MAME maps them as 16-bit handlers) */
static void combine16(u16 *r, u32 off, u32 v, int size)
{
	if (size == 1)
		*r = (off & 1) ? (u16)((*r & 0xFF00) | (v & 0xFF)) : (u16)((*r & 0x00FF) | ((v & 0xFF) << 8));
	else
		*r = (u16)v;
}

void pcb_bsc_write(u32 off, u32 v, int size)
{
	if (size == 4) {             /* a 32-bit write covers two registers */
		pcb_bsc_write(off & ~3u, v >> 16, 2);
		pcb_bsc_write((off & ~3u) + 2, v & 0xFFFF, 2);
		return;
	}
	switch (off & ~1u) {
	case 0xF62: combine16(&bcr2, off, v, size); break;
	case 0xF64: combine16(&wcr1, off, v, size); break;
	case 0xF66: combine16(&wcr2, off, v, size); break;
	case 0xF68: combine16(&mcr, off, v, size); break;
	}
	timing_update();
}

void pcb_ccr_write(u32 v)
{
	if (v & 8) {
		invalidate_all();   /* CF: dirty lines are dropped, as MAME does */
#ifdef PCB_AB
		ref_invalidate_all();
#endif
	}
}

/* sh7709s_device::cache_address_array_w: writing U = 0 flushes the entry */
void pcb_cache_array_write(sh3_t *c, u32 a, u32 v)
{
#ifdef PCB_AB
	u32 pr = ref_cache_array_write(a, v);
	s32 ic0 = c->icount;
#endif
	u32 index = (a & 0x00FFFFFFu) / 16;     /* MAME: (32-bit handler offset) / 4 */
	if ((v & 2) == 0) {
		pcb_set_t *s = &pcb.set[index % BLOCKS];
		u32 way = (index / BLOCKS) & 3;     /* MAME indexes m_cache[...][way] unchecked; the game stays in range */
		if (s->dirty[way]) {
			u32 wb = s->tag[way] * LINE_SIZE;
			u32 p = (BUS_ACCESS_PENALTY + BURST_WRITE_WORD_PENALTY + get_wcr1_timing(wb) + mcr_rcd() + mcr_trwl()) * 2;
			s->dirty[way] = 0;
			c->icount -= (s32)p;
			pcb.pen_total += p;
			pcb.last_area = get_area(wb);
		}
	}
#ifdef PCB_AB
	ab_check(a, 0, (u32)(ic0 - c->icount), pr, "cache array");
#endif
}

#ifdef PCB_AB
u32 pcb_ab_data(u32 a, int w)
{
	u32 pr = ref_data(a, w), pn = pcb_data(a, w);
	ab_check(a, w, pn, pr, "data");
	return pn;
}

u32 pcb_ab_ifetch(void)
{
	int sr = (ref.wb_active | ref.precharge) != 0 || ref.set[pcb.pc_set].mru_tag != pcb.pc_line;
	int sn = (pcb.wb_active | pcb.precharge) != 0 || pcb.set[pcb.pc_set].mru_tag != pcb.pc_line;
	u32 pr = sr ? ref_ifetch_slow() : 0, pn = sn ? pcb_ifetch_slow() : 0;
	if (sr != sn)
		ab_fail("fetch hook taken", pcb.pc, 0, pn, pr);
	ab_check(pcb.pc, 0, pn, pr, "fetch");
	return pn;
}
#endif

#endif

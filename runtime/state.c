/* Save states (test 69): see state.h. */
#include <stdlib.h>
#include <string.h>

#include "cv1k.h"
#include "state.h"

#define VB_PX (1 << RT_VB_SHIFT)
#define VB_W (0x2000 >> RT_VB_SHIFT)
#define VB_H (0x1000 >> RT_VB_SHIFT)
#define VB_N (VB_W * VB_H)
#define VB_BYTES (VB_PX * VB_PX * 2)

int rt_state_want;
int rt_vsnap_on;
u64 rt_epoch;
struct rt_state_stats rt_state_stats;
void (*rt_state_taken)(int s);

static void copy_plain(void *dst, const void *src, size_t n)
{
	memcpy(dst, src, n);
}
void (*rt_copy)(void *dst, const void *src, size_t n) = copy_plain;

static struct {
	int live;                  /* taken and not dropped */
	unsigned seq;              /* the order slots were taken in */
	u8 *ram;                   /* the work RAM */
	u8 *dev;                   /* the modules' variables */
	u16 blk[VB_N];             /* each VRAM block's copy (pool index + 1; 0 = not written since) */
	unsigned nblk;
} slot[RT_SLOTS];

static int want_slot;          /* test 84: a mask of the slots asked for */
static int pinned = -1;       /* test 84: the slot a load is putting back (make_room never drops it) */
static unsigned seq_n;
static size_t dev_bytes;
static u8 *pool;               /* pool_n blocks of VB_BYTES */
static unsigned pool_n;
static u8 *refc;               /* slots holding each pool block */
static u16 *freel;             /* free pool blocks (a stack) */
static unsigned nfree;
static u32 need[VB_N / 32];    /* a live slot has no copy of the block yet */

static void dev_io(rt_sbuf *b)
{
	rt_core_state(b);
	onchip_state(b);
	nand_state(b);
	rtc9701_state(b);
	blitter_state(b);
#ifdef CV1K_PCB
	pcb_state(b);
#endif
	ymz770_state(b);
}

static void *alloc128(size_t n)
{
	u8 *p = malloc(n + 128);
	return p ? (void *)(((uintptr_t)p + 127) & ~(uintptr_t)127) : NULL;   /* whole cache lines */
}

/* a host may try again with fewer blocks: the slots' buffers are kept */
int rt_state_init(unsigned pool_blocks)
{
	rt_sbuf dry = {NULL, 0, 0, 0};
	unsigned i;
	int s;

	if (pool)
		return 0;
	dev_io(&dry);
	dev_bytes = dry.n;
	if (pool_blocks > 0xFFFFu)
		pool_blocks = 0xFFFFu;
	for (s = 0; s < RT_SLOTS; s++) {
		if (!slot[s].ram)
			slot[s].ram = alloc128(RAM_SIZE);
		if (!slot[s].dev)
			slot[s].dev = malloc(dev_bytes);
		if (!slot[s].ram || !slot[s].dev)
			return -1;
	}
	refc = calloc(pool_blocks ? pool_blocks : 1, 1);
	freel = malloc((pool_blocks ? pool_blocks : 1) * sizeof *freel);
	if (refc && freel)
		pool = alloc128((size_t)pool_blocks * VB_BYTES);
	if (!pool) {
		free(refc);
		free(freel);
		refc = NULL;
		freel = NULL;
		pool = NULL;
		return -1;
	}
	pool_n = pool_blocks;
	for (i = 0; i < pool_n; i++)
		freel[i] = (u16)(pool_n - 1 - i);
	nfree = pool_n;
	rt_state_stats.pool_blocks = pool_n;
	return 0;
}

static u8 *pool_block(unsigned k)
{
	return pool + (size_t)k * VB_BYTES;
}

static u16 *vram_block(int b)
{
	return cv1k_vram + (size_t)(b / VB_W) * VB_PX * CV1K_VRAM_STRIDE + (size_t)(b % VB_W) * VB_PX;
}

static void block_out(int b, u8 *dst)
{
	const u16 *src = vram_block(b);
	for (int y = 0; y < VB_PX; y++)
		memcpy(dst + y * VB_PX * 2, src + (size_t)y * CV1K_VRAM_STRIDE, VB_PX * 2);
}

static void block_in(int b, const u8 *src)
{
	u16 *dst = vram_block(b);
	for (int y = 0; y < VB_PX; y++)
		memcpy(dst + (size_t)y * CV1K_VRAM_STRIDE, src + y * VB_PX * 2, VB_PX * 2);
}

static void pool_put(unsigned k)
{
	if (--refc[k] == 0) {
		freel[nfree++] = (u16)k;
		rt_state_stats.pool_used--;
	}
}

static void slot_clear(int s)
{
	for (int b = 0; b < VB_N; b++)
		if (slot[s].blk[b]) {
			pool_put(slot[s].blk[b] - 1u);
			slot[s].blk[b] = 0;
		}
	slot[s].nblk = 0;
	slot[s].live = 0;
	rt_state_stats.saved_blocks[s] = 0;
}

static void need_rebuild(void)
{
	int s, any = 0;

	memset(need, 0, sizeof need);
	for (s = 0; s < RT_SLOTS; s++) {
		if (!slot[s].live)
			continue;
		any = 1;
		for (int b = 0; b < VB_N; b++)
			if (!slot[s].blk[b])
				need[b >> 5] |= 1u << (b & 31);
	}
	rt_vsnap_on = any;
}

/* the pool is empty: the live slots are dropped in slot order (the host numbers them least needed first) until a block
 * is free; s = the slot asking (kept while another one can go). 1 = a block is free */
static int make_room(int s)
{
	for (int v = 0; v < RT_SLOTS && !nfree; v++)
		if (slot[v].live && v != s && v != pinned) {
			slot_clear(v);
			rt_state_stats.overflows++;
		}
	if (!nfree && slot[s].live) {
		slot_clear(s);
		rt_state_stats.overflows++;
	}
	return nfree != 0;
}

/* block b is about to be written: its pixels to every live slot that lacks them (one shared copy); with the pool full,
 * the least needed slots go (make_room) */
static void cow(int b)
{
	unsigned copy = 0;
	int s, lost = 0;

	for (s = 0; s < RT_SLOTS; s++) {
		if (!slot[s].live || slot[s].blk[b])
			continue;
		if (!copy) {
			if (!nfree) {
				lost = 1;
				if (!make_room(s) || !slot[s].live)
					continue;
			}
			copy = freel[--nfree] + 1u;
			block_out(b, pool_block(copy - 1u));
			rt_state_stats.cow_copies++;
			if (++rt_state_stats.pool_used > rt_state_stats.pool_peak)
				rt_state_stats.pool_peak = rt_state_stats.pool_used;
		}
		slot[s].blk[b] = (u16)copy;
		refc[copy - 1u]++;
		slot[s].nblk++;
		rt_state_stats.saved_blocks[s] = slot[s].nblk;
	}
	need[b >> 5] &= ~(1u << (b & 31));
	if (lost)
		need_rebuild();
}

void rt_vram_cow(int x0, int y0, int x1, int y1)
{
	for (int by = y0 >> RT_VB_SHIFT; by <= y1 >> RT_VB_SHIFT; by++)
		for (int bx = x0 >> RT_VB_SHIFT; bx <= x1 >> RT_VB_SHIFT; bx++) {
			const int b = by * VB_W + bx;
			if (need[b >> 5] & (1u << (b & 31)))
				cow(b);
		}
}

void rt_state_request(int s)
{
	if (s < 0 || s >= RT_SLOTS || !pool)
		return;
	want_slot |= 1 << s;           /* test 84: each slot asked for (test 69: the one asked last) */
	rt_state_want = 1;
}

int rt_state_ready(int s)
{
	return s >= 0 && s < RT_SLOTS && slot[s].live;
}

void rt_state_drop(int s)
{
	if (s < 0 || s >= RT_SLOTS || !slot[s].live)
		return;
	slot_clear(s);
	need_rebuild();
}

static void take_one(int s);

/* test 84: every slot asked for since the last safe point, at this one (the save's moment and a stage's start can be
 * asked for at the same vblank) */
void rt_state_take(void)
{
	const int m = want_slot;

	want_slot = 0;
	rt_state_want = 0;
	blitter_sync();                /* the last job's pixels are in VRAM */
	for (int s = 0; s < RT_SLOTS; s++)
		if (m & (1 << s))
			take_one(s);
}

static void take_one(int s)
{
	const u64 t0 = blitter_clock ? blitter_clock() : 0;
	rt_sbuf b = {NULL, 0, 0, 0};

	if (slot[s].live)
		slot_clear(s);
	rt_copy(slot[s].ram, cv1k_ram, RAM_SIZE);
	b.p = slot[s].dev;
	b.cap = dev_bytes;
	dev_io(&b);
	slot[s].live = 1;
	slot[s].seq = ++seq_n;
	for (int k = 0; k < VB_N / 32; k++)
		need[k] = ~0u;             /* the new slot has no block yet */
	rt_vsnap_on = 1;
	ymz770_snap(rt_now(&cpu) + rt_epoch, s);
	rt_state_stats.takes++;
	rt_state_stats.taken_frame[s] = frame_count;
	rt_state_stats.take_ticks[s] = blitter_clock ? blitter_clock() - t0 : 0;
	if (rt_state_taken)
		rt_state_taken(s);
}

void rt_resume_loaded(void) __attribute__((noreturn));   /* sh3_rt.c */

void rt_state_load(int s)
{
	const u64 t0 = blitter_clock ? blitter_clock() : 0;
	const u64 was = rt_now(&cpu);
	rt_sbuf b = {NULL, 0, 0, 1};

	if (!rt_state_ready(s))
		rt_fatal("state: slot %d is not there to load", s);
	blitter_sync();
	rt_copy(cv1k_ram, slot[s].ram, RAM_SIZE);
	b.p = slot[s].dev;
	b.cap = dev_bytes;
	dev_io(&b);
	/* test 84: the slots taken after it are kept (test 69 dropped them): each block put back goes to those lacking it
	 * first, as a blitter write's would; slots taken before it have every such block already */
	pinned = s;
	for (int k = 0; k < VB_N; k++)
		if (slot[s].blk[k]) {
			if (need[k >> 5] & (1u << (k & 31)))
				cow(k);
			block_in(k, pool_block(slot[s].blk[k] - 1u));
		}
	pinned = -1;
	need_rebuild();
	/* the sound side's clock never goes back: a CPU time that went back (test 69) or forward (test 84: a file's from a
	 * longer session) moves rt_epoch the other way (modulo 2^64: only sums with it are used) */
	rt_epoch += was - rt_now(&cpu);
	ymz770_unsnap(rt_now(&cpu) + rt_epoch, s);
	want_slot = 0;
	rt_state_want = 0;
	frame_count++;                 /* the vblank the host was handling */
	rt_state_stats.loads++;
	rt_state_stats.load_ticks = blitter_clock ? blitter_clock() - t0 : 0;
	rt_resume_loaded();
}

/* ---- test 84: the slots' parts for the host's files ------------------------------------------------------------ */

size_t rt_state_dev_bytes(void)
{
	if (!dev_bytes) { /* asked before rt_state_init (the host's buffers first) */
		rt_sbuf dry = {NULL, 0, 0, 0};
		dev_io(&dry);
		dev_bytes = dry.n;
	}
	return dev_bytes;
}

u8 *rt_slot_ram(int s)
{
	return slot[s].ram;
}

u8 *rt_slot_dev(int s)
{
	return slot[s].dev;
}

int rt_slot_has(int s, int b)
{
	return slot[s].blk[b] != 0;
}

void rt_slot_block(int s, int b, u8 *dst)
{
	if (slot[s].blk[b])
		memcpy(dst, pool_block(slot[s].blk[b] - 1u), VB_BYTES);
	else
		block_out(b, dst);
}

void rt_live_block(int b, u8 *dst)
{
	block_out(b, dst);
}

int rt_vram_put(int b, const u8 *src)
{
	const u16 *v = vram_block(b);
	int y;

	for (y = 0; y < VB_PX; y++)
		if (memcmp(v + (size_t)y * CV1K_VRAM_STRIDE, src + y * VB_PX * 2, VB_PX * 2))
			break;
	if (y == VB_PX)
		return 0;
	if (need[b >> 5] & (1u << (b & 31)))
		cow(b);
	block_in(b, src);
	return 1;
}

void rt_slot_open(int s)
{
	if (slot[s].live) {
		slot_clear(s);
		need_rebuild();
	}
	for (int b = 0; b < VB_N; b++) /* a slot opened before and never closed */
		if (slot[s].blk[b]) {
			pool_put(slot[s].blk[b] - 1u);
			slot[s].blk[b] = 0;
		}
	slot[s].nblk = 0;
	rt_state_stats.saved_blocks[s] = 0;
}

int rt_slot_add(int s, int b, const u8 *src)
{
	unsigned k;

	if (slot[s].blk[b]) {
		memcpy(pool_block(slot[s].blk[b] - 1u), src, VB_BYTES);
		return 0;
	}
	if (!nfree)
		return -1;
	k = freel[--nfree];
	memcpy(pool_block(k), src, VB_BYTES);
	refc[k] = 1;
	slot[s].blk[b] = (u16)(k + 1u);
	slot[s].nblk++;
	rt_state_stats.saved_blocks[s] = slot[s].nblk;
	if (++rt_state_stats.pool_used > rt_state_stats.pool_peak)
		rt_state_stats.pool_peak = rt_state_stats.pool_used;
	return 0;
}

void rt_slot_close(int s)
{
	slot[s].live = 1;
	slot[s].seq = ++seq_n;
	rt_state_stats.taken_frame[s] = frame_count;
	rt_state_stats.take_ticks[s] = 0;
	need_rebuild();
}

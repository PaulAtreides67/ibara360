/* Interface between the code sh3rec generates and the CV1000 runtime.
 *
 * Generated functions keep the SH-3 registers in C locals (LOCALS) and write them back
 * to the context (FLUSH) only around calls, exceptions and runtime services, so guest
 * memory stores cannot alias them. Time is a countdown: IC is the number of SH-3 cycles
 * left until c->event_time; each basic block subtracts its cost (CHK) and calls the
 * runtime when it runs out.
 */
#ifndef RECOMP_H
#define RECOMP_H

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

/* SR bits (T lives in sh3_t.t) */
#define SR_T 0x00000001u
#define SR_S 0x00000002u
#define SR_IMASK 0x000000F0u
#define SR_Q 0x00000100u
#define SR_M 0x00000200u
#define SR_BL 0x10000000u
#define SR_RB 0x20000000u
#define SR_MD 0x40000000u

typedef struct sh3 {
	u32 r[16];
	u32 t, pr, macl, mach;
	u32 sr;          /* without T */
	u32 gbr, vbr, ssr, spc;
	u32 rbank[8];    /* the R0-R7 bank not currently selected by SR.RB */
	u32 pc;          /* valid at calls, returns and runtime services only */
	s32 icount;      /* SH-3 cycles left until event_time */
	u64 event_time;  /* absolute cycle of the next scheduled event */
} sh3_t;

typedef void (*recomp_fn)(sh3_t *c);
typedef struct {
	u32 addr;
	recomp_fn fn;
} recomp_entry_t;

/* per function: crc32 of the RAM its code was compiled from, as runs[first..first+n) of
 * <start, bytes> pairs (the instructions and the literals folded into the C) */
typedef struct {
	u32 crc;
	u32 first, n;
} recomp_check_t;

/* one recompiled game: sh3rec's <prefix>recomp_table.c defines <prefix>recomp_game */
typedef struct {
	const recomp_entry_t *table;   /* sorted by address */
	unsigned table_len;
	const recomp_check_t *check;   /* table order */
	const u32 *runs;
	const u32 *folded;             /* literal-pool halfwords folded into the code, sorted */
	unsigned folded_len;
	u32 image_crc, image_end;      /* the whole image sh3rec read (for the log) */
	const char *cycle_model;
} recomp_game_t;

/* the game the runtime runs: the host sets it before rt_init */
extern const recomp_game_t *rt_game;

/* ---- memory ---------------------------------------------------------------- */
#ifndef RAM_SIZE
#define RAM_SIZE 0x800000u   /* CV1000-B: 8 MB at 0x0C000000 */
#endif
extern u8 *cv1k_ram;

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#define BE16(p) (*(const u16 *)(p))
#define BE32(p) (*(const u32 *)(p))
#define PUT16(p, v) (*(u16 *)(p) = (u16)(v))
#define PUT32(p, v) (*(u32 *)(p) = (u32)(v))
#else
#define BE16(p) __builtin_bswap16(*(const u16 *)(p))
#define BE32(p) __builtin_bswap32(*(const u32 *)(p))
#define PUT16(p, v) (*(u16 *)(p) = __builtin_bswap16((u16)(v)))
#define PUT32(p, v) (*(u32 *)(p) = __builtin_bswap32((u32)(v)))
#endif

/* P0/P1/P2 views of work RAM; P3/P4 (0xC0000000 up) are never RAM */
#define IS_RAM(a) ((a) < 0xC0000000u && (((a) & 0x1FFFFFFFu) - 0x0C000000u) < RAM_SIZE)
#define RAMP(a) (cv1k_ram + ((a) & (RAM_SIZE - 1)))
#define PHYS(a) ((((a) >> 30) == 2u) ? ((a) & 0x1FFFFFFFu) : (a))

u32 io_rd8(sh3_t *c, u32 a);
u32 io_rd16(sh3_t *c, u32 a);
u32 io_rd32(sh3_t *c, u32 a);
void io_wr8(sh3_t *c, u32 a, u32 v);
void io_wr16(sh3_t *c, u32 a, u32 v);
void io_wr32(sh3_t *c, u32 a, u32 v);

#ifdef RECOMP_CHECK_FOLDED
void rt_check_folded(u32 a, unsigned len);
#define FOLDCHK(a, n) rt_check_folded(a, n)
#else
#define FOLDCHK(a, n) ((void)0)
#endif

#include "pcb.h"

/* Slow path syncs IC so I/O handlers see the current time and may move the next event.
 * In the pcb mode each access then pays the cache/SDRAM penalty (pcb.h); the ...N forms
 * are the accesses MAME makes without one (C-function opcodes, folded PC-relative loads). */
#define R8_(a, P) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = *RAMP(ma__); P(DATA)(ma__, 0); } \
	else { c->icount = IC; mv__ = io_rd8(c, ma__); IC = c->icount; P(IO)(ma__, 0); } mv__; })
#define R16_(a, P) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = BE16(RAMP(ma__)); P(DATA)(ma__, 0); } \
	else { c->icount = IC; mv__ = io_rd16(c, ma__); IC = c->icount; P(IO)(ma__, 0); } mv__; })
#define R32_(a, P) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = BE32(RAMP(ma__)); P(DATA)(ma__, 0); } \
	else { c->icount = IC; mv__ = io_rd32(c, ma__); IC = c->icount; P(IO)(ma__, 0); } mv__; })
#define W8_(a, v, P) do { u32 ma__ = (a), mv__ = (v); \
	if (LIKELY(IS_RAM(ma__))) { FOLDCHK(ma__, 1); *RAMP(ma__) = (u8)mv__; P(DATA)(ma__, 1); } \
	else { c->icount = IC; io_wr8(c, ma__, mv__); IC = c->icount; P(IO)(ma__, 1); } } while (0)
#define W16_(a, v, P) do { u32 ma__ = (a), mv__ = (v); \
	if (LIKELY(IS_RAM(ma__))) { FOLDCHK(ma__, 2); PUT16(RAMP(ma__), mv__); P(DATA)(ma__, 1); } \
	else { c->icount = IC; io_wr16(c, ma__, mv__); IC = c->icount; P(IO)(ma__, 1); } } while (0)
#define W32_(a, v, P) do { u32 ma__ = (a), mv__ = (v); \
	if (LIKELY(IS_RAM(ma__))) { FOLDCHK(ma__, 4); PUT32(RAMP(ma__), mv__); P(DATA)(ma__, 1); } \
	else { c->icount = IC; io_wr32(c, ma__, mv__); IC = c->icount; P(IO)(ma__, 1); } } while (0)
#define PEN_(k) PCB_##k
#define NOPEN_(k) NOPEN_X
#define NOPEN_X(a, w) ((void)0)
#define R8(a) R8_(a, PEN_)
#define R16(a) R16_(a, PEN_)
#define R32(a) R32_(a, PEN_)
#define W8(a, v) W8_(a, v, PEN_)
#define W16(a, v) W16_(a, v, PEN_)
#define W32(a, v) W32_(a, v, PEN_)
#define R8N(a) R8_(a, NOPEN_)
#define R16N(a) R16_(a, NOPEN_)
#define R32N(a) R32_(a, NOPEN_)
#define W8N(a, v) W8_(a, v, NOPEN_)
#define W16N(a, v) W16_(a, v, NOPEN_)
#define W32N(a, v) W32_(a, v, NOPEN_)

/* ---- runtime services ------------------------------------------------------ */
void rt_event(sh3_t *c);                       /* IC ran out at block c->pc */
void rt_call(sh3_t *c, u32 addr);              /* computed call/jump: compiled or interpreted */
void rt_resync(sh3_t *c) __attribute__((noreturn)); /* guest control flow left the C call structure */
void rt_trapa(sh3_t *c, u32 ret, u32 imm);
void rt_sleep(sh3_t *c);
void rt_illegal(sh3_t *c, u32 pc) __attribute__((noreturn));
void rt_slot_illegal(sh3_t *c, u32 pc) __attribute__((noreturn));
void sh3_set_sr(sh3_t *c, u32 v);              /* bank switch + forces an interrupt check */

static inline void sh3_set_sr_c(sh3_t *c, u32 v)
{
	sh3_set_sr(c, v);
}

/* DIV1, as in the SH-3 programming manual. Returns Rn | T << 32; updates Q in c->sr. */
static inline u64 sh3_div1(sh3_t *c, u32 rn, u32 rm, u32 t)
{
	u32 old_q = (c->sr & SR_Q) != 0, m = (c->sr & SR_M) != 0;
	u32 q = rn >> 31, tmp0, tmp1;
	rn = (rn << 1) | t;
	tmp0 = rn;
	if (old_q == m) {
		rn -= rm;
		tmp1 = rn > tmp0;
	} else {
		rn += rm;
		tmp1 = rn < tmp0;
	}
	if (m == 0)
		q = q ? !tmp1 : tmp1;
	else
		q = q ? tmp1 : !tmp1;
	c->sr = (c->sr & ~SR_Q) | (q ? SR_Q : 0);
	return rn | ((u64)(q == m) << 32);
}

/* MAC.L / MAC.W (S bit saturation per the programming manual) */
static inline u64 sh3_mac_l(u32 sr, s32 a, s32 b, u64 mac)
{
	s64 r = (s64)mac + (s64)a * (s64)b;
	if (sr & SR_S) {
		const s64 lo = -((s64)1 << 47), hi = ((s64)1 << 47) - 1;
		if (r < lo)
			r = lo;
		else if (r > hi)
			r = hi;
	}
	return (u64)r;
}

static inline u64 sh3_mac_w(u32 sr, s32 a, s32 b, u64 mac)
{
	if (sr & SR_S) {
		s64 r = (s64)(s32)(u32)mac + (s64)a * b;
		u32 mach = (u32)(mac >> 32);
		if (r > 0x7FFFFFFF) {
			r = 0x7FFFFFFF;
			mach |= 1;
		} else if (r < -(s64)0x80000000) {
			r = -(s64)0x80000000;
			mach |= 1;
		}
		return ((u64)mach << 32) | (u32)r;
	}
	return (u64)((s64)mac + (s64)a * b);
}

/* ---- macros used by generated functions ------------------------------------- */
#define LOCALS \
	u32 r0 = c->r[0], r1 = c->r[1], r2 = c->r[2], r3 = c->r[3], r4 = c->r[4], r5 = c->r[5], \
	    r6 = c->r[6], r7 = c->r[7], r8 = c->r[8], r9 = c->r[9], r10 = c->r[10], r11 = c->r[11], \
	    r12 = c->r[12], r13 = c->r[13], r14 = c->r[14], r15 = c->r[15]; \
	u32 T = c->t, PR = c->pr, MACL = c->macl, MACH = c->mach; \
	s32 IC = c->icount

#define FLUSH do { \
	c->r[0] = r0; c->r[1] = r1; c->r[2] = r2; c->r[3] = r3; c->r[4] = r4; c->r[5] = r5; \
	c->r[6] = r6; c->r[7] = r7; c->r[8] = r8; c->r[9] = r9; c->r[10] = r10; c->r[11] = r11; \
	c->r[12] = r12; c->r[13] = r13; c->r[14] = r14; c->r[15] = r15; \
	c->t = T; c->pr = PR; c->macl = MACL; c->mach = MACH; c->icount = IC; } while (0)

#define RELOAD do { \
	r0 = c->r[0]; r1 = c->r[1]; r2 = c->r[2]; r3 = c->r[3]; r4 = c->r[4]; r5 = c->r[5]; \
	r6 = c->r[6]; r7 = c->r[7]; r8 = c->r[8]; r9 = c->r[9]; r10 = c->r[10]; r11 = c->r[11]; \
	r12 = c->r[12]; r13 = c->r[13]; r14 = c->r[14]; r15 = c->r[15]; \
	T = c->t; PR = c->pr; MACL = c->macl; MACH = c->mach; IC = c->icount; } while (0)

/* start of a basic block at guest address pc costing n cycles */
#ifdef BLOCK_PROF
/* PC profiling build: SH-3 cycles per block over emulated frames BLK_A..BLK_B (env) */
void blk_prof(u32 at, s32 n);
#define BLK_PROF(at, n) blk_prof(at, n)
#else
#define BLK_PROF(at, n) ((void)0)
#endif
#if defined(CV1K_PCB) && defined(PCB_PROF)
#define PCB_BLK(at) (pcb_cur_block = (at))
#else
#define PCB_BLK(at) ((void)0)
#endif
#if defined(CV1K_PCB) && defined(PCB_PROBE)
#define PCB_PROBE_AT(at) do { if ((at) == 0x0C04A0A4u || (at) == 0x0C04A0B2u) \
	pcb_probe(at, c->event_time - (s64)IC); \
	if (UNLIKELY(pcb_probe_on)) pcb_probe_fn(at, c->event_time - (s64)IC); } while (0)
#else
#define PCB_PROBE_AT(at) ((void)0)
#endif
#define CHK(at, n) do { BLK_PROF(at, n); PCB_BLK(at); PCB_PROBE_AT(at); IC -= (n); \
	if (UNLIKELY(IC <= 0)) { FLUSH; c->pc = (at); rt_event(c); RELOAD; } } while (0)

/* sh3rec --drc (pcb builds): cycles as MAME's SH DRC charges them. UPD(next, n) charges the
 * n cycles accumulated since the last update point and, like MAME's EXHc(COND_S) there,
 * leaves for the runtime when the count goes negative: MAME's out-of-cycles exit stores
 * next as the pc, and its entry point checks interrupts on the way back in, so timer and
 * vblank interrupts are taken right after the update point (goal 15; block starts were up
 * to a block late, which moved the 1 ms timer's phase a few cycles per period through the
 * handler's TCR write). The slow path writes back only R15 and IC (rt_upd_event): an
 * inline FLUSH/RELOAD at ~76k update points made gcc run out of memory. */
s32 rt_upd_event(sh3_t *c, u32 next, s32 ic, u32 r15);
#define BLKS(at) do { BLK_PROF(at, 0); PCB_BLK(at); PCB_PROBE_AT(at); } while (0)
#define UPD(next, n) do { IC -= (n); if (UNLIKELY(IC < 0)) IC = rt_upd_event(c, (next), IC, r15); } while (0)
/* cycles MAME's C functions subtract themselves (RTE() 1, LDCMSR() 2), with no exit check */
#define UPDN(next, n) (IC -= (n))
/* the first update point after RTE / LDC SR / LDC.L SR: MAME's generate_update_cycles with
 * compiler.checkints set checks interrupts and hash-jumps to next before its cycle
 * subtraction, so the cycles accumulated there are never charged */
#define UPDI(next) do { IC = rt_upd_event(c, (next), IC, r15); } while (0)

/* static call; the callee's rts leaves the return address in c->pc. Calls come back to the
 * caller's address region (pcb mode; rt_call sets the callee's from its target address).
 * Test 69: on the way back every guest register is in the context, the moment for a save
 * state a host asked for (state.c; rt_state_want is 0 but for a moment after such a request) */
extern int rt_state_want;
void rt_state_point(sh3_t *c, u32 ret);
#define CALL(fn, ret) do { PCB_RGN_SAVE; FLUSH; fn(c); PCB_RGN_RESTORE; \
	if (UNLIKELY(rt_state_want)) { rt_state_point(c, (ret)); } \
	RELOAD; if (UNLIKELY(c->pc != (ret))) rt_resync(c); } while (0)
/* computed call */
#define CALLD(t, ret) do { u32 mt__ = (t); FLUSH; rt_call(c, mt__); RELOAD; \
	if (UNLIKELY(c->pc != (ret))) rt_resync(c); } while (0)
/* computed call with a predicted target */
#define CALLP(t, fn, pred, ret) do { if (LIKELY(PHYS(t) == (pred))) { PCB_RGN_SAVE; PCB_RGN_TO(t); \
	CALL(fn, ret); PCB_RGN_RESTORE; } else CALLD(t, ret); } while (0)
#define TAIL(fn) do { FLUSH; fn(c); return; } while (0)
#define JUMPD(t) do { u32 mt__ = (t); FLUSH; rt_call(c, mt__); return; } while (0)
/* jmp/braf: the target's region holds until the function returns */
#define JRGN(t) PCB_RGN_TO(t)
#define RET(t) do { c->pc = (t); FLUSH; return; } while (0)
#define SET_SR(v) do { u32 ms__ = (v); FLUSH; sh3_set_sr(c, ms__); RELOAD; } while (0)
#define TRAPA(ret, imm) do { FLUSH; rt_trapa(c, ret, imm); RELOAD; } while (0)
#define SLEEP(next) do { FLUSH; c->pc = (next); rt_sleep(c); RELOAD; } while (0)

/* Spin loops (sh3rec spin_blocks): a block that branches back to its own start with
 * no stores and no context writes. SPIN_SAVE records the registers at the start of a
 * pass; if the pass changed none of them and read only RAM, every later pass is the
 * same until the next event (memory changes only in events), so SPIN_FF leaves IC
 * where the pass that runs out of cycles would find it: same registers, same cycle. */
extern u64 stat_spin_cycles;
extern int rt_spin_enabled;      /* 0: SPIN_FF never skips (for measuring it) */
#ifdef CV1K_PCB
/* pcb mode: a pass is only repeatable if the model charged nothing in it (all cache hits,
 * which leave the same LRU order every pass) and no write-back/precharge is counting down */
#define SPIN_PCB_VARS(X) u64 sppen_##X
#define SPIN_PCB_SAVE(X) (sppen_##X = pcb.pen_total)
#define SPIN_PCB_SAME(X) (pcb.pen_total == sppen_##X && (pcb.wb_active | pcb.precharge) == 0)
#else
#define SPIN_PCB_VARS(X) int sppen_##X
#define SPIN_PCB_SAVE(X) ((void)0)
#define SPIN_PCB_SAME(X) 1
#endif
#define SPIN_VARS(X) u32 spv_##X[20]; u32 spio_##X; SPIN_PCB_VARS(X)
#define SPIN_SAVE(X) do { spio_##X = 0; SPIN_PCB_SAVE(X); \
	spv_##X[0] = r0; spv_##X[1] = r1; spv_##X[2] = r2; spv_##X[3] = r3; spv_##X[4] = r4; \
	spv_##X[5] = r5; spv_##X[6] = r6; spv_##X[7] = r7; spv_##X[8] = r8; spv_##X[9] = r9; \
	spv_##X[10] = r10; spv_##X[11] = r11; spv_##X[12] = r12; spv_##X[13] = r13; \
	spv_##X[14] = r14; spv_##X[15] = r15; spv_##X[16] = T; spv_##X[17] = PR; \
	spv_##X[18] = MACL; spv_##X[19] = MACH; } while (0)
#define SPIN_SAME(X) (r0 == spv_##X[0] && r1 == spv_##X[1] && r2 == spv_##X[2] && \
	r3 == spv_##X[3] && r4 == spv_##X[4] && r5 == spv_##X[5] && r6 == spv_##X[6] && \
	r7 == spv_##X[7] && r8 == spv_##X[8] && r9 == spv_##X[9] && r10 == spv_##X[10] && \
	r11 == spv_##X[11] && r12 == spv_##X[12] && r13 == spv_##X[13] && r14 == spv_##X[14] && \
	r15 == spv_##X[15] && T == spv_##X[16] && PR == spv_##X[17] && MACL == spv_##X[18] && \
	MACH == spv_##X[19])
/* the next CHK(n) subtracts n and fires: IC - n*ceil(IC/n), as the passes would */
#define SPIN_FF(X, n) do { if (!spio_##X && IC > (n) && rt_spin_enabled && SPIN_SAME(X) && SPIN_PCB_SAME(X)) { \
	s32 sk__ = (IC - 1) % (n) + 1; stat_spin_cycles += (u64)(IC - sk__); IC = sk__; } } while (0)
/* --drc form, before the back branch's UPD: skip whole passes of n cycles (n = what one pass
 * charges over all its update points), leaving n..2n-1 so the last passes run for real and
 * fire at the same update point as they would have */
#define SPIN_FFD(X, n) do { if (!spio_##X && IC >= 2 * (n) && rt_spin_enabled && SPIN_PCB_SAME(X)) { \
	if (SPIN_SAME(X)) { s32 sk__ = (IC - (n)) / (n) * (n); stat_spin_cycles += (u64)sk__; IC -= sk__; } \
	else SPIN_DT_FF(X, n); } } while (0)
/* Test 113 (user: "the loading is still slow"): the board's delay loops ("[nop ...] dt Rn; bf start" or "bf/s start"
 * with a nop in the slot; the EEPROM's bit-banging spends ~600 boot frames in them) change Rn, so SPIN_SAME never
 * holds. When a pass changed only one register, by -1, T is 0 and rt_spin_dt finds that loop's code at X, whole
 * passes are skipped as above with Rn lowered by as many; Rn stays 1 or more, so the pass that takes it to 0 runs */
int rt_spin_dt(u32 start, int reg);
#define SPIN_DT_REG(X, i, rv) if ((rv) != spv_##X[i]) { dn__++; di__ = (i); dv__ = (rv); }
#define SPIN_DT_SET(i, rv) if (di__ == (i)) (rv) -= p__
#define SPIN_DT_FF(X, n) do { int dn__ = 0, di__ = 0; u32 dv__ = 0; \
	SPIN_DT_REG(X, 0, r0) SPIN_DT_REG(X, 1, r1) SPIN_DT_REG(X, 2, r2) SPIN_DT_REG(X, 3, r3) \
	SPIN_DT_REG(X, 4, r4) SPIN_DT_REG(X, 5, r5) SPIN_DT_REG(X, 6, r6) SPIN_DT_REG(X, 7, r7) \
	SPIN_DT_REG(X, 8, r8) SPIN_DT_REG(X, 9, r9) SPIN_DT_REG(X, 10, r10) SPIN_DT_REG(X, 11, r11) \
	SPIN_DT_REG(X, 12, r12) SPIN_DT_REG(X, 13, r13) SPIN_DT_REG(X, 14, r14) SPIN_DT_REG(X, 15, r15) \
	if (dn__ == 1 && !T && PR == spv_##X[17] && MACL == spv_##X[18] && MACH == spv_##X[19] && \
	    spv_##X[di__] - dv__ == 1 && dv__ > 1 && rt_spin_dt(0x##X##u, di__)) { \
		u32 p__ = (u32)(IC - (n)) / (u32)(n); \
		if (p__ > dv__ - 1) \
			p__ = dv__ - 1; \
		SPIN_DT_SET(0, r0); SPIN_DT_SET(1, r1); SPIN_DT_SET(2, r2); SPIN_DT_SET(3, r3); \
		SPIN_DT_SET(4, r4); SPIN_DT_SET(5, r5); SPIN_DT_SET(6, r6); SPIN_DT_SET(7, r7); \
		SPIN_DT_SET(8, r8); SPIN_DT_SET(9, r9); SPIN_DT_SET(10, r10); SPIN_DT_SET(11, r11); \
		SPIN_DT_SET(12, r12); SPIN_DT_SET(13, r13); SPIN_DT_SET(14, r14); SPIN_DT_SET(15, r15); \
		stat_spin_cycles += (u64)p__ * (u32)(n); \
		IC -= (s32)(p__ * (u32)(n)); } } while (0)
#define RS8(X, a) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = *RAMP(ma__); PCB_DATA(ma__, 0); } \
	else { spio_##X = 1; c->icount = IC; mv__ = io_rd8(c, ma__); IC = c->icount; PCB_IO(ma__, 0); } mv__; })
#define RS16(X, a) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = BE16(RAMP(ma__)); PCB_DATA(ma__, 0); } \
	else { spio_##X = 1; c->icount = IC; mv__ = io_rd16(c, ma__); IC = c->icount; PCB_IO(ma__, 0); } mv__; })
#define RS32(X, a) ({ u32 ma__ = (a), mv__; \
	if (LIKELY(IS_RAM(ma__))) { mv__ = BE32(RAMP(ma__)); PCB_DATA(ma__, 0); } \
	else { spio_##X = 1; c->icount = IC; mv__ = io_rd32(c, ma__); IC = c->icount; PCB_IO(ma__, 0); } mv__; })

/* each generated file includes its own <prefix>recomp_funcs.h after this header */

#endif

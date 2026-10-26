/* SH-3 runtime: scheduler, interrupt controller, exceptions, dispatch between
 * recompiled functions and the interpreter fallback.
 *
 * Time: c->icount counts down to c->event_time (absolute SH-3 cycles). Recompiled
 * blocks and interpreted instructions subtract their cost; at zero, rt_event() fires
 * due events and takes an interrupt if one is pending and unmasked. Interrupts are
 * taken at block boundaries, as MAME's DRC takes them at its block boundaries.
 */
#include <setjmp.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cv1k.h"
#include "state.h"

sh3_t cpu;
u64 frame_count;
u64 stat_interp_insns, stat_resyncs, stat_compiled_calls_missed;
u64 stat_spin_cycles;            /* SH-3 cycles SPIN_FF skipped (recomp.h) */
u64 stat_events;                 /* rt_event calls */
int rt_spin_enabled = 1;

#ifdef BLOCK_PROF
/* cycles charged per block start (CHK) inside emulated frames BLK_A..BLK_B; spin-loop
 * passes SPIN_FF skips are not counted here. Printed at exit, BLK_OUT = file. */
#define BLK_SLOTS (1 << 16)
static struct { u32 at; u64 cyc, hits; } blk_tab[BLK_SLOTS];
static u64 blk_a = ~0ull, blk_b;

static void blk_print(void)
{
	const char *p = getenv("BLK_OUT");
	FILE *f = p ? fopen(p, "w") : NULL;
	if (!f)
		return;
	for (int i = 0; i < BLK_SLOTS; i++)
		if (blk_tab[i].at)
			fprintf(f, "%08X %llu %llu\n", blk_tab[i].at, (unsigned long long)blk_tab[i].cyc,
			        (unsigned long long)blk_tab[i].hits);
	fclose(f);
}

void blk_prof(u32 at, s32 n)
{
	static int init;
	if (!init) {
		const char *a = getenv("BLK_A"), *b = getenv("BLK_B");
		init = 1;
		if (a && b) {
			blk_a = strtoull(a, NULL, 0);
			blk_b = strtoull(b, NULL, 0);
			atexit(blk_print);
		}
	}
	if (frame_count < blk_a || frame_count > blk_b)
		return;
	u32 h = (at * 2654435761u) >> 16;
	while (blk_tab[h].at && blk_tab[h].at != at)
		h = (h + 1) & (BLK_SLOTS - 1);
	blk_tab[h].at = at;
	blk_tab[h].cyc += (u64)n;
	blk_tab[h].hits++;
}
#endif

static u64 ev_time[EV_COUNT];
static jmp_buf rt_jb;
static int irq_depth;            /* test 69: inside an interrupt or trapa handler (the interrupted code's registers may
                                  * be in a compiled function's locals: no state is taken there) */
static int rt_loaded;            /* test 69: a state was loaded (rt_run's calls then finish the functions it left) */
static int interp_quiet;         /* the next interp() is such a call: not a missed entry */
int use_compiled = 1;            /* 0: interpreter only (differential testing) */
static int image_checked;        /* a function has passed its check (logged once) */
const recomp_game_t *rt_game;
#define FN_OK 0xFFFFFFFFu
static u32 *fn_chk;              /* per table entry: FN_OK, 0 = not checked, else frame + 1 of the last failure */
static int lookup_known;         /* the last lookup found the entry, but its RAM was not ready */
u64 stat_fn_waits;               /* checks that failed */

/* Hosts may replace rt_log and rt_fatal (the 360 host shows them on screen). */
__attribute__((weak)) void rt_log(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);
}

__attribute__((weak)) void rt_fatal(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	fprintf(stderr, "FATAL: ");
	vfprintf(stderr, fmt, ap);
	va_end(ap);
	fprintf(stderr, "  [pc %08X pr %08X sr %08X frame %llu]\n", cpu.pc, cpu.pr, cpu.sr | cpu.t,
		(unsigned long long)frame_count);
	exit(1);
}

/* ---- scheduler -------------------------------------------------------------- */
u64 rt_now(sh3_t *c)
{
	return c->event_time - (s64)c->icount;
}

static void resched(sh3_t *c)
{
	u64 now = rt_now(c), next = EV_NEVER;
	for (int i = 0; i < EV_COUNT; i++)
		if (ev_time[i] < next)
			next = ev_time[i];
	if (next < now)
		next = now;
	if (next - now > 0x40000000u)
		next = now + 0x40000000u;
	c->event_time = next;
	c->icount = (s32)(next - now);
}

void rt_schedule(sh3_t *c, int ev, u64 when)
{
	ev_time[ev] = when;
	if (when < c->event_time)
		resched(c);
}

void rt_force_check(sh3_t *c)
{
	c->event_time = rt_now(c);
	c->icount = 0;
}

/* ---- interrupt controller ----------------------------------------------------- */
static int irq_req[IRQ_COUNT];
static int irq_pri[IRQ_COUNT];
static const u32 irq_intevt2[IRQ_COUNT] = {
	0x600, 0x620, 0x640, 0x660, 0x800, 0x820, 0x840, 0x860, 0x400, 0x420, 0x440,
};
u32 onchip_intevt, onchip_intevt2, onchip_expevt, onchip_tra;
extern u16 onchip_ipra, onchip_iprc;

void intc_recompute_priorities(void)
{
	/* MAME: IPRC sets IRQ0-3, IPRA sets TMU0-2; IPRE is stored but never sets DMTE */
	irq_pri[IRQ_IRL0] = onchip_iprc & 15;
	irq_pri[IRQ_IRL1] = (onchip_iprc >> 4) & 15;
	irq_pri[IRQ_IRL2] = (onchip_iprc >> 8) & 15;
	irq_pri[IRQ_IRL3] = (onchip_iprc >> 12) & 15;
	irq_pri[IRQ_TUNI0] = (onchip_ipra >> 12) & 15;
	irq_pri[IRQ_TUNI1] = (onchip_ipra >> 8) & 15;
	irq_pri[IRQ_TUNI2] = (onchip_ipra >> 4) & 15;
}

static void intc_reset(void)
{
	memset(irq_req, 0, sizeof irq_req);
	memset(irq_pri, 0, sizeof irq_pri);
	/* MAME sh4_default_exception_priorities() until IPRC is written */
	irq_pri[IRQ_IRL0] = 13;
	irq_pri[IRQ_IRL1] = 10;
	irq_pri[IRQ_IRL2] = 7;
	irq_pri[IRQ_IRL3] = 4;
}

void intc_request(int src)
{
	if (!irq_req[src]) {
		irq_req[src] = 1;
		rt_force_check(&cpu);
	}
}

void intc_unrequest(int src)
{
	irq_req[src] = 0;
}

/* ---- SR / banks --------------------------------------------------------------- */
static inline int bank_of(u32 sr)
{
	return (sr & SR_MD) && (sr & SR_RB);
}

static void set_sr_raw(sh3_t *c, u32 v)
{
	int ob = bank_of(c->sr), nb;
	c->t = v & 1;
	c->sr = v & 0x700003F2u;
	nb = bank_of(c->sr);
	if (ob != nb) {
		for (int i = 0; i < 8; i++) {
			u32 x = c->r[i];
			c->r[i] = c->rbank[i];
			c->rbank[i] = x;
		}
	}
}

void sh3_set_sr(sh3_t *c, u32 v)
{
	set_sr_raw(c, v);
	rt_force_check(c);
}

/* ---- dispatch ------------------------------------------------------------------ */
static void interp(sh3_t *c, u32 addr);

/* A function runs compiled once the RAM it was compiled from (its instructions and folded
 * literals) is what sh3rec read; checked at its first call. Until then it is interpreted and
 * checked again at most once per frame: ibarablk calls its unpacker in RAM while the rest of
 * the program is still packed, and keeps variables between functions (0C051000-0C05104F). */
static u32 crc32_runs(const u32 *runs, u32 n);

static int fn_valid(unsigned i, u32 addr)
{
	const recomp_check_t *k = &rt_game->check[i];
	u32 crc;
	if (fn_chk[i] == (u32)frame_count + 1u)
		return 0;       /* already failed this frame */
	crc = crc32_runs(rt_game->runs + 2 * k->first, k->n);
	if (crc != k->crc) {
		if (stat_fn_waits++ < 16)
			rt_log("rt: %08X differs from its recompiled code (frame %llu): interpreted until it matches\n",
				addr, (unsigned long long)frame_count);
		fn_chk[i] = (u32)frame_count + 1u;
		return 0;
	}
	if (!image_checked) {
		image_checked = 1;
		rt_log("rt: compiled functions checked against RAM at their first call (%u functions, image crc %08X, cycles %s)\n",
			rt_game->table_len, rt_game->image_crc, rt_game->cycle_model);
	}
	fn_chk[i] = FN_OK;
	return 1;
}

static recomp_fn lookup(u32 addr)
{
	unsigned lo = 0, hi = rt_game->table_len;
	const recomp_entry_t *tab = rt_game->table;
	lookup_known = 0;
	if (!use_compiled)
		return NULL;
	while (lo < hi) {
		unsigned mid = (lo + hi) / 2;
		u32 m = tab[mid].addr;
		if (m == addr) {
			if (UNLIKELY(fn_chk[mid] != FN_OK) && !fn_valid(mid, addr)) {
				lookup_known = 1;
				return NULL;
			}
			return tab[mid].fn;
		}
		if (m < addr)
			lo = mid + 1;
		else
			hi = mid;
	}
	return NULL;
}

void rt_call(sh3_t *c, u32 addr)
{
	recomp_fn f;
	PCB_RGN_SAVE;
	PCB_RGN_TO(addr);
	addr = PHYS(addr);
	f = lookup(addr);
	if (f)
		f(c);
	else
		interp(c, addr);
	PCB_RGN_RESTORE;
}

void rt_resync(sh3_t *c)
{
	stat_resyncs++;
	if (stat_resyncs <= 20)
		rt_log("rt: resync to %08X (frame %llu)\n", c->pc, (unsigned long long)frame_count);
	longjmp(rt_jb, 1);
}

void rt_illegal(sh3_t *c, u32 pc)
{
	(void)c;
	rt_fatal("illegal instruction at %08X", pc);
}

void rt_slot_illegal(sh3_t *c, u32 pc)
{
	(void)c;
	rt_fatal("illegal slot instruction at %08X", pc);
}

/* ---- exceptions ------------------------------------------------------------------ */
static int take_interrupt(sh3_t *c)
{
	int best = -1, bestpri = -1;
	u32 ret;
	for (int i = 0; i < IRQ_COUNT; i++)
		if (irq_req[i] && irq_pri[i] > bestpri) {
			bestpri = irq_pri[i];
			best = i;
		}
	if (best < 0 || (c->sr & SR_BL) || bestpri <= (int)((c->sr >> 4) & 15))
		return 0;
	if (best == IRQ_IRL2)
		intc_unrequest(IRQ_IRL2);       /* irq2_line_hold: cleared on acknowledge */
	if (best >= IRQ_DMTE0 && best <= IRQ_DMTE3)
		intc_unrequest(best);
	onchip_intevt2 = irq_intevt2[best];
	onchip_intevt = irq_intevt2[best] >= 0x600 ? 0x3E0 - bestpri * 0x20 : irq_intevt2[best];
	ret = c->pc;
	c->spc = ret;
	c->ssr = c->sr | c->t;
	set_sr_raw(c, c->sr | c->t | SR_MD | SR_RB | SR_BL);
#ifdef CV1K_PCB
	pcb_set_pc(c->vbr + 0x600);          /* MAME's exception entry stores the vector as pc */
#endif
	irq_depth++;
	rt_call(c, c->vbr + 0x600);
	irq_depth--;
	if (c->pc != ret)
		rt_resync(c);
	PCB_PC(ret);                         /* rte: the return address, in the interrupted region */
	return 1;
}

static void fire(sh3_t *c, int ev, u64 t);

/* Fire due events, then take at most one interrupt. Returns 1 if one was taken. */
static int service(sh3_t *c)
{
	for (;;) {
		u64 now = rt_now(c), tmin = EV_NEVER;
		int e = -1;
		for (int i = 0; i < EV_COUNT; i++)
			if (ev_time[i] < tmin) {
				tmin = ev_time[i];
				e = i;
			}
		if (e < 0 || tmin > now)
			break;
		ev_time[e] = EV_NEVER;
		fire(c, e, tmin);
	}
	resched(c);
	return take_interrupt(c);
}

void rt_event(sh3_t *c)
{
#if defined(CV1K_PCB) && !defined(PCB_TRUEPC)
	if (pcb.idle_end != 0) {
		/* cv1k.cpp speedup_r: the CPU sleeps until 10 us after the idle read; the cycles
		 * charged since then (the loop's update) are inside those 10 us (MAME's
		 * abort_timeslice + spin_until_time: the CPU resumes at read + 1024 cycles) */
		u64 now = rt_now(c);
		if (pcb.idle_end > now) {
			pcb.pen_total += pcb.idle_end - now;
			c->icount -= (s32)(pcb.idle_end - now);
		}
		pcb.idle_end = 0;
	}
#endif
	PCB_PC(c->pc);                       /* MAME's out-of-cycles exit stores the resume pc */
	stat_events++;
	while (service(c))
		;
}

/* UPD's slow path (--drc code). An interrupt handler saves and restores every register it
 * uses (R0-R7 are banked), so the caller's locals stay valid without a FLUSH; only the
 * stack pointer and the cycle count must be current. */
s32 rt_upd_event(sh3_t *c, u32 next, s32 ic, u32 r15)
{
	c->icount = ic;
	c->pc = next;
	c->r[15] = r15;
	rt_event(c);
	if (UNLIKELY(c->pc != next || c->r[15] != r15))
		rt_fatal("event at update point %08X left pc %08X r15 %08X (was %08X)", next, c->pc, c->r[15], r15);
	return c->icount;
}

void rt_trapa(sh3_t *c, u32 ret, u32 imm)
{
	onchip_tra = imm << 2;
	onchip_expevt = 0x160;
	c->spc = ret;
	c->ssr = c->sr | c->t;
	set_sr_raw(c, c->sr | c->t | SR_MD | SR_RB | SR_BL);
#ifdef CV1K_PCB
	pcb_set_pc(c->vbr + 0x100);
#endif
	irq_depth++;
	rt_call(c, c->vbr + 0x100);
	irq_depth--;
	if (c->pc != ret)
		rt_resync(c);
	PCB_PC(ret);
}

void rt_sleep(sh3_t *c)
{
	for (int guard = 0; guard < 100000; guard++) {
		c->icount = 0;                  /* jump to the next event */
		if (service(c))
			return;
	}
	rt_fatal("sleep with nothing to wake it");
}

/* ---- test 69: save states (state.c) ------------------------------------------------------- */

/* the CALL macro, after a static call returned: every guest register is in the context there (the callee's RET
 * flushed them, the caller reloads them next) and pc is the caller's next instruction; outside a handler, the moment for
 * a state a host asked for */
void rt_state_point(sh3_t *c, u32 ret)
{
	if (c->pc == ret && !irq_depth)
		rt_state_take();
}

/* after rt_state_load: rt_run goes on at the loaded pc */
void rt_resume_loaded(void)
{
	rt_loaded = 1;
	lookup_known = 0;
	longjmp(rt_jb, 2);
}

/* ---- machine events ----------------------------------------------------------------- */
static u64 vblank_origin;
static u64 vbl_n;                /* test 69: vblanks of the machine (frame_count but for loads, which take it back) */

/* MAME 0.289 cv1k: screen refresh HZ_TO_ATTOSECONDS(60.024) = 16660002665600426 as, and the
 * CPU's 102.4 MHz = 9765625000 as per cycle, so a frame is 1705984 + 2665600426/9765625000
 * cycles. Measured with the debugger (goal 15): MAME takes vblank IRQ k at k frames from
 * power-on (k >= 1), not at line 240 of 512 as assumed before; vblank n here is MAME's IRQ
 * n + 1, which keeps the frame numbers of its frame notifier. */
#define FRAME_CYC_INT 1705984ull
#define FRAME_CYC_FRAC 2665600426ull
#define FRAME_CYC_DEN 9765625000ull

double rt_clock_scale = 1.0;

static u64 vblank_at(u64 n)
{
	u64 k = n + 1;
	if (rt_clock_scale != 1.0)
		return vblank_origin + (u64)((double)k * ((double)FRAME_CYC_INT + (double)FRAME_CYC_FRAC /
			(double)FRAME_CYC_DEN) * rt_clock_scale + 0.5);
	return vblank_origin + k * FRAME_CYC_INT + k * FRAME_CYC_FRAC / FRAME_CYC_DEN;
}

static void fire(sh3_t *c, int ev, u64 t)
{
	switch (ev) {
	case EV_VBLANK:
#if defined(CV1K_PCB) && defined(PCB_PROBE)
		pcb_probe_vblank(frame_count, t);
#endif
		ymz770_mark(rt_now(c) + rt_epoch);    /* the host may make sound up to here */
		host_vblank(c);
		frame_count++;
		vbl_n++;
		intc_request(IRQ_IRL2);
		rt_schedule(c, EV_VBLANK, vblank_at(vbl_n));
		break;
	case EV_TMU0:
	case EV_TMU1:
	case EV_TMU2:
		tmu_fire(c, ev - EV_TMU0);
		break;
	case EV_DMA0:
	case EV_DMA1:
	case EV_DMA2:
	case EV_DMA3:
		dma_fire(c, ev - EV_DMA0);
		break;
	case EV_BLIT:
		blitter_done(c);
		break;
	case EV_RTC_SEC:
		rtc9701_tick_second();
		rt_schedule(c, EV_RTC_SEC, t + rt_scale_cyc(CPU_HZ));
		break;
	}
	(void)t;
}

void cv1k_reset(sh3_t *c)
{
	memset(c, 0, sizeof *c);
	for (int i = 0; i < EV_COUNT; i++)
		ev_time[i] = EV_NEVER;
	c->event_time = 0;
	c->icount = 0;
	c->sr = 0x700000F0u;               /* MD, RB, BL, IMASK 15 */
	c->vbr = 0;
	c->pc = 0xA0000000u;
	intc_reset();
#ifdef CV1K_PCB
	pcb_reset();
#endif
	onchip_reset();
	nand_reset();
	rtc9701_reset();
	blitter_reset();
	frame_count = 0;
	vbl_n = 0;
	vblank_origin = 0;
	ev_time[EV_VBLANK] = vblank_at(0);
	ev_time[EV_RTC_SEC] = rt_scale_cyc(CPU_HZ);
	resched(c);
}

void rt_run(sh3_t *c)
{
	setjmp(rt_jb);
	irq_depth = 0;
	for (;;) {
		recomp_fn f;
		u32 addr;
		if (!rt_loaded) {
			rt_call(c, c->pc);
			continue;
		}
		/* test 69: after a load, the rest of each function that was running at the state's moment (its pc, then each
		 * return address in turn) is interpreted; they are not missed entries */
		PCB_RGN_TO(c->pc);
		addr = PHYS(c->pc);
		f = lookup(addr);
		if (f) {
			f(c);
		} else {
			interp_quiet = 1;
			interp(c, addr);
		}
	}
}

/* test 69: the CPU, the scheduler and the interrupt controller in a state (not frame_count: the host's) */
void rt_core_state(rt_sbuf *b)
{
	ST(b, cpu);
	ST(b, ev_time);
	ST(b, irq_req);
	ST(b, irq_pri);
	ST(b, onchip_intevt);
	ST(b, onchip_intevt2);
	ST(b, onchip_expevt);
	ST(b, onchip_tra);
	ST(b, vblank_origin);
	ST(b, vbl_n);
}

/* ---- interpreter ------------------------------------------------------------------- */
static u8 cyc_table[65536];

static int cycles_mame(u32 op)
{
	u32 t = op >> 12;
	if (t == 0xA || t == 0xB) return 2;
	switch (op & 0xF00F) {
	case 0x200E: case 0x200F: case 0x3005: case 0x300D: case 0x0007: return 2;
	case 0x000F: case 0x400F: return 3;
	}
	switch (op & 0xFF00) {
	case 0x8900: case 0x8B00: return 3;
	case 0x8D00: case 0x8F00: return 2;
	case 0xC300: return 8;
	}
	if (op == 0x000B || (op & 0xF0FF) == 0x0023) return 2;
	if (op == 0x001B) return 3;
	if (op == 0x002B) return 4;
	switch (op & 0xF0FF) {
	case 0x4003: return 2;
	case 0x4007: return 3;
	case 0x401B: return 4;
	}
	return 1;
}

static void init_cycles(void)
{
	for (u32 op = 0; op < 65536; op++)
		cyc_table[op] = (u8)cycles_mame(op);
}

static inline u32 fetch16(u32 pc)
{
	u32 p = PHYS(pc);
	if (IS_RAM(p))
		return BE16(RAMP(p));
	if (p < 0x04000000u)
		return BE16(cv1k_rom + (p & cv1k_rom_mask));
	rt_fatal("instruction fetch from %08X", pc);
}

#define SH3_SET_SR(v) sh3_set_sr(c, v)
#define IC c->icount

#ifdef CV1K_PCB
/* per opcode: 1 = the fetch hook runs (groups 0 and 4), 2 = MAME runs it as a C function
 * that stores the opcode in arg0 (same list as sh3rec.py CFUNC) */
static u8 pcb_op_flags[65536];

static int pcb_cfunc(u32 op)
{
	switch (op & 0xF00F) {
	case 0x000F: case 0x3004: case 0x300B: case 0x300F: case 0x400C: case 0x400D: case 0x400F:
		return 1;
	}
	switch (op & 0xF0FF) {
	case 0x400E: case 0x4007: case 0x4033: case 0x4037: case 0x4043: case 0x4047:
		return 1;
	}
	switch (op & 0xF08F) {
	case 0x0082: case 0x408E: case 0x4083: case 0x4087:
		return 1;
	}
	return op == 0x0038 || op == 0x0048 || op == 0x0058 || (op & 0xFF00) == 0xC300;
}

static void pcb_init_ops(void)
{
	for (u32 op = 0; op < 65536; op++)
		pcb_op_flags[op] = (u8)(((op >> 12) == 0 || (op >> 12) == 4) | (pcb_cfunc(op) << 1));
}

#define PCB_OP(op, pc) do { u32 f__ = pcb_op_flags[op]; if (f__ & 1) IF(pc); if (f__ & 2) ARG0(op); } while (0)
/* a pc-relative target in the region the interpreter is running in */
#define IRGN(x) (pcb.region | ((x) & 0x1FFFFFFFu))
#else
#define PCB_OP(op, pc) ((void)0)
#define IRGN(x) (x)
#endif

static int interp_simple(sh3_t *c, u32 op)
{
#include "interp_ops.inc"
}

static inline s32 sx8(u32 v) { return (s32)(s8)v; }
static inline s32 sx12(u32 v) { return (v & 0x800) ? (s32)(v | 0xFFFFF000u) : (s32)v; }

static void exec_slot(sh3_t *c, u32 spc)
{
	u32 op = fetch16(spc);
	c->icount -= cyc_table[op];
	PCB_OP(op, spc);
	stat_interp_insns++;
	if ((op & 0xF000) == 0xD000)
		c->r[(op >> 8) & 15] = R32N(((spc & ~3u) + 4 + (op & 0xFF) * 4));
	else if ((op & 0xF000) == 0x9000)
		c->r[(op >> 8) & 15] = (u32)(s32)(s16)R16N(spc + 4 + (op & 0xFF) * 2);
	else if ((op & 0xFF00) == 0xC700)
		c->r[0] = (spc & ~3u) + 4 + (op & 0xFF) * 4;
	else if (!interp_simple(c, op))
		rt_slot_illegal(c, spc);
}

static u32 missed[1024];
static int n_missed;

static void note_missed(u32 pc)
{
	for (int i = 0; i < n_missed; i++)
		if (missed[i] == pc)
			return;
	if (n_missed < 1024) {
		missed[n_missed++] = pc;
		rt_log("rt: interpreting %08X (not a recompiled entry)\n", pc);
	}
}

/* entry points only the interpreter found: feed back to sh3rec --extra */
void rt_write_missed(const char *path)
{
	FILE *f = fopen(path, "w");
	if (!f)
		return;
	for (int i = 0; i < n_missed; i++)
		fprintf(f, "0x%08X\n", missed[i]);
	fclose(f);
}

static void interp(sh3_t *c, u32 addr)
{
	u32 pc = addr;
	if (pc >= 0x0C000000u && use_compiled && !lookup_known && !interp_quiet)
		note_missed(pc);
	interp_quiet = 0;
	for (;;) {
		u32 op = fetch16(pc), t, cond;
		c->icount -= cyc_table[op];
		if (UNLIKELY(c->icount <= 0)) {
			c->pc = pc;
			rt_event(c);
			if (c->pc != pc)
				rt_resync(c);
		}
#if defined(CV1K_PCB) && defined(PCB_PROBE)
		if (pc == 0x8Au || pc == 0x9Cu)       /* boot ROM copy loop start / end */
			pcb_probe(pc, rt_now(c) + cyc_table[op]);
#endif
		PCB_OP(op, pc);
		stat_interp_insns++;
		switch (op >> 12) {
		case 0x8:
			switch (op & 0xFF00) {
			case 0x8900: pc = c->t ? pc + 4 + sx8(op) * 2 : pc + 2; continue;
			case 0x8B00: pc = !c->t ? pc + 4 + sx8(op) * 2 : pc + 2; continue;
			case 0x8D00: cond = c->t; exec_slot(c, pc + 2); pc = cond ? pc + 4 + sx8(op) * 2 : pc + 4; continue;
			case 0x8F00: cond = !c->t; exec_slot(c, pc + 2); pc = cond ? pc + 4 + sx8(op) * 2 : pc + 4; continue;
			}
			break;
		case 0x9:
			c->r[(op >> 8) & 15] = (u32)(s32)(s16)R16N(pc + 4 + (op & 0xFF) * 2);
			pc += 2;
			continue;
		case 0xA:
			t = pc + 4 + sx12(op & 0xFFF) * 2;
			exec_slot(c, pc + 2);
			pc = t;
			continue;
		case 0xB:
			t = pc + 4 + sx12(op & 0xFFF) * 2;
			c->pr = pc + 4;
			exec_slot(c, pc + 2);
			rt_call(c, IRGN(t));
			if (c->pc != pc + 4)
				rt_resync(c);
			pc += 4;
			continue;
		case 0xC:
			if ((op & 0xFF00) == 0xC300) {
				rt_trapa(c, pc + 2, op & 0xFF);
				pc += 2;
				continue;
			}
			if ((op & 0xFF00) == 0xC700) {
				c->r[0] = (pc & ~3u) + 4 + (op & 0xFF) * 4;
				pc += 2;
				continue;
			}
			break;
		case 0xD:
			c->r[(op >> 8) & 15] = R32N(((pc & ~3u) + 4 + (op & 0xFF) * 4));
			pc += 2;
			continue;
		case 0xF:
			rt_illegal(c, pc);
		case 0x0:
			switch (op & 0xF0FF) {
			case 0x0003: /* bsrf */
				t = pc + 4 + c->r[(op >> 8) & 15];
				c->pr = pc + 4;
				exec_slot(c, pc + 2);
				rt_call(c, IRGN(t));
				if (c->pc != pc + 4)
					rt_resync(c);
				pc += 4;
				continue;
			case 0x0023: /* braf */
				t = IRGN(pc + 4 + c->r[(op >> 8) & 15]);
				goto jump;
			}
			if (op == 0x000B) { /* rts */
				t = c->pr;
				exec_slot(c, pc + 2);
				c->pc = t;
				return;
			}
			if (op == 0x002B) { /* rte */
				t = c->spc;
				sh3_set_sr(c, c->ssr);
				exec_slot(c, pc + 2);
				PCB_PC(t);
				c->pc = t;
				return;
			}
			if (op == 0x001B) { /* sleep */
				c->pc = pc + 2;
				rt_sleep(c);
				pc += 2;
				continue;
			}
			break;
		case 0x4:
			if ((op & 0xF0FF) == 0x400B) { /* jsr */
				t = c->r[(op >> 8) & 15];
				c->pr = pc + 4;
				exec_slot(c, pc + 2);
				rt_call(c, t);
				if (c->pc != pc + 4)
					rt_resync(c);
				pc += 4;
				continue;
			}
			if ((op & 0xF0FF) == 0x402B) { /* jmp */
				t = c->r[(op >> 8) & 15];
				goto jump;
			}
			break;
		}
		if (!interp_simple(c, op))
			rt_illegal(c, pc);
		pc += 2;
		continue;
jump:
		exec_slot(c, pc + 2);
		PCB_RGN_TO(t);
		{
			recomp_fn f = lookup(PHYS(t));
			if (f) {
				f(c);
				return;
			}
		}
		pc = PHYS(t);
	}
}

/* ---- misc --------------------------------------------------------------------------- */
static u32 crc_tab[256];

/* crc32 (zlib's) of the RAM bytes of n <start, bytes> runs, one after the other */
static u32 crc32_runs(const u32 *runs, u32 n)
{
	u32 crc = 0xFFFFFFFFu;
	if (!crc_tab[1])
		for (u32 i = 0; i < 256; i++) {
			u32 x = i;
			for (int k = 0; k < 8; k++)
				x = (x >> 1) ^ (0xEDB88320u & (0u - (x & 1)));
			crc_tab[i] = x;
		}
	for (u32 r = 0; r < n; r++) {
		const u8 *p = cv1k_ram + (runs[2 * r] - 0x0C000000u);
		for (u32 i = 0; i < runs[2 * r + 1]; i++)
			crc = crc_tab[(crc ^ p[i]) & 0xFF] ^ (crc >> 8);
	}
	return crc ^ 0xFFFFFFFFu;
}

/* Fast hash of work RAM as big-endian words, the same on every host: four
 * independent lanes so it runs near memory speed; the hosts compare it per frame. */
u32 cv1k_ram_hash(void)
{
	u32 h0 = 0x811C9DC5u, h1 = 0x01000193u, h2 = 0x9E3779B9u, h3 = 0x7F4A7C15u;
	for (u32 i = 0; i < RAM_SIZE; i += 16) {
		const u8 *p = cv1k_ram + i;
		h0 = (h0 ^ BE32(p)) * 0x01000193u;
		h1 = (h1 ^ BE32(p + 4)) * 0x01000193u;
		h2 = (h2 ^ BE32(p + 8)) * 0x01000193u;
		h3 = (h3 ^ BE32(p + 12)) * 0x01000193u;
	}
	return h0 ^ (h1 * 3u) ^ (h2 * 5u) ^ (h3 * 7u);
}

void rt_init(void)
{
	if (!rt_game)
		rt_fatal("rt_init: no game (the host sets rt_game)");
	fn_chk = calloc(rt_game->table_len, sizeof *fn_chk);
	if (!fn_chk)
		rt_fatal("rt_init: out of memory");
	init_cycles();
#ifdef CV1K_PCB
	pcb_init_ops();
#endif
}

#ifdef RECOMP_CHECK_FOLDED
void rt_check_folded(u32 a, unsigned len)
{
	u32 p = PHYS(a);
	const u32 *folded = rt_game->folded;
	unsigned lo = 0, hi = rt_game->folded_len;
	while (lo < hi) {
		unsigned mid = (lo + hi) / 2;
		if (folded[mid] + 2 <= p)
			lo = mid + 1;
		else
			hi = mid;
	}
	if (lo < rt_game->folded_len && folded[lo] < p + len)
		rt_log("rt: write to folded literal %08X (frame %llu)\n", p, (unsigned long long)frame_count);
}
#endif

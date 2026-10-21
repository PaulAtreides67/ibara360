/* `pcb` cost mode: MAME 0.289's SH7709S cache and SDRAM timing (src/devices/cpu/sh/sh7709s.cpp,
 * BSD-3, Jesus Ramos) as stock MAME runs it for cv1k. Built with -DCV1K_PCB; without it every
 * macro here is empty and the runtime is the `mame` mode.
 *
 * What MAME 0.289 does, and so what this reproduces (sh7709s.cpp, sh.cpp, sh4.cpp, cv1k.cpp):
 * - one 16 KB unified cache: 256 sets x 4 ways x 16-byte lines, LRU, dirty bits; tags are the
 *   29-bit physical line number; P2 (0xA...) and P4 (0xE...) are uncached;
 * - every data access through the DRC's memory accessors pays access_penalty() after the
 *   access. PC-relative loads (mov.l/mov.w @(disp,PC)) are folded at compile time and pay
 *   nothing; instructions MAME runs as C functions (div1, addv, subv, shad, shld, mac.l/w,
 *   ldc/stc to sr/ssr/spc/banks, trapa, ...) access memory without a penalty;
 * - accesses at or above 0xE0000000 skip the accessor's address store, so they charge the
 *   penalty for the address of the previous accessor call (arg0), which C-function opcodes
 *   overwrite with their opcode;
 * - the instruction fetch hook runs only for opcode groups 0 and 4 (sh7709s.cpp overrides
 *   generate_group_0/4/15) and fetches m_sh2_state->pc, which with SH2DRC_FASTEST_OPTIONS
 *   is only stored at timeslice exits, exceptions, rte, trapa and the idle pc flush
 *   (ibara 0C04A0AC), not per instruction;
 * - the same hook ticks the write-back and precharge background counters;
 * - ibara's idle read (0C0022F0 from the vblank wait loop) suspends the CPU for 10 us
 *   (cv1k.cpp speedup_r: spin_until_time).
 */
#ifndef PCB_H
#define PCB_H

#ifdef CV1K_PCB

/* One cache set, 32 bytes (four per 128-byte host cache line). The four LRU ranks live in one
 * word so that pcb.c updates them in registers: on the in-order PPE a byte store followed by a
 * load of the same word (MAME's per-way u8 loops) is a load-hit-store stall (test 14b). */
typedef struct {
	u32 tag[4];
	u32 lru;         /* bits 8i-8i+7 = MAME's lru[i] of way i: 0 (least recent) to 3 (most) */
	u32 mru_tag;     /* tag of the way whose lru is 3, or PCB_NO_MRU (also when that tag is 0) */
	u32 mru_way;
	u8 dirty[4];
} pcb_set_t;

#define PCB_NO_MRU 0xFFFFFFFFu
#define PCB_NO_LINE 0xFFFFFFFEu

typedef struct {
	pcb_set_t set[256];
	u32 arg0;            /* address of the last accessor call (MAME m_sh2_state->arg0) */
	u32 region;          /* top 3 bits of the virtual pc: compiled code and the interpreter run on
	                      * physical addresses, calls and jumps keep the region the guest is in
	                      * (P2 0xA... = uncached, e.g. the boot ROM and the cache flush code) */
	u32 pc;              /* MAME m_sh2_state->pc as the fetch hook sees it */
	u32 pc_line, pc_set; /* its line (PCB_NO_LINE if uncached) and set */
	u32 wb_active, precharge;
	u32 last_area, last_sdram_page;   /* (MAME's m_wb_address is always 0 between accesses: a local) */
	u64 pen_total;       /* cycles charged by the model (SPIN_FF checks it did not move) */
	u64 n_access, n_miss, n_ifetch_slow;
	u64 n_idle;          /* PCB_IDLE steps (host profiles) */
	u64 idle_end;        /* cycle the CPU wakes at after an idle read (0: not sleeping) */
} pcb_t;

extern pcb_t pcb;
#ifdef PCB_PROF
extern u32 pcb_cur_block;    /* profiling build: block whose code is running (CHK) */
#endif
#ifdef PCB_PROBE
/* probe build: cycle at the start of ibara's wait_vblanks (E) and its rts (X), and at each
 * vblank (V), to PCB_PROBE_OUT; compared with tools/oracle/mame_dbg_idle.lua */
void pcb_probe(u32 at, u64 now);
void pcb_probe_vblank(u64 n, u64 now);
/* frames PCB_PROBE_FROM..PCB_PROBE_TO: "P <addr> <cycle>" at every recompiled function entry */
extern int pcb_probe_on;
void pcb_probe_fn(u32 at, u64 now);
/* PCB_PROBE_TMU=1: "M <cycle> <address> <data>" for every timer unit register write and
 * blitter register write below 0x18000020 (kick, list address, display scroll) */
void pcb_probe_tmu(u64 now, u32 addr, u32 v);
extern u64 pcbp_pen[4], pcbp_n[4];
void pcb_probe_kick(u64 now, u64 busy, u32 bytes, u32 upload);
#endif

extern int pcbx_active;             /* goal 16 experiments, see pcb.c */
extern double pcbx_pen_scale;
extern u32 pcbx_stall_left, pcbx_stall_step;
extern s32 pcbx_unc_write, pcbx_unc_read;
extern double pcbx_fill_scale, pcbx_uw_scale;
extern u64 pcbx_stall_paid;          /* stall cycles charged so far */
void pcb_timing_fit(int on);         /* test 17: the PCB-fitted timing (1) or MAME 0.289's (0) */
u32 pcb_access_slow(u32 a, int w);  /* full access_penalty() */
u32 pcb_ifetch_slow(void);          /* full drc_update_icache() */
u32 pcb_io(u32 a, int w);           /* accessor penalty for an I/O access (uses arg0 at 0xE0000000 up) */
void pcb_set_pc(u32 pc);
void pcb_reset(void);
void pcb_bsc_write(u32 off, u32 v, int size);   /* 0xFFFFFF60-0xFFFFFF75 */
void pcb_ccr_write(u32 v);                      /* 0xFFFFFFEC */
void pcb_cache_array_write(sh3_t *c, u32 a, u32 v);  /* 0xF0000000-0xF0FFFFFF */

/* region 5 (P2) and 7 (P4) are uncached: (a >> 29) | 2 == 7 exactly for those */
#define PCB_CACHED(a) ((((a) >> 29) | 2u) != 7u)

static inline u32 pcb_data(u32 a, int w)
{
	u32 line = (a & 0x1FFFFFFFu) >> 4;
	pcb_set_t *s = &pcb.set[line & 255];
	pcb.arg0 = a;
	if (LIKELY(PCB_CACHED(a) && s->mru_tag == line)) {
		if (w)
			s->dirty[s->mru_way] = 1;
		return 0;
	}
	return pcb_access_slow(a, w);
}

/* fetch hook of a group 0/4 instruction at physical address a. Stock MAME fetches its stale
 * m_sh2_state->pc (IF0); with the debugger on it stores every instruction's pc (PCB_TRUEPC). */
#ifdef PCB_TRUEPC
#define IF(a) do { PCB_PC(a); IF0; } while (0)
#else
#define IF(a) IF0
#endif
#ifdef PCB_AB
/* check build (PC): every data access and fetch hook also runs the pre-14c model
 * (runtime/pcb_ref.inc) and aborts at the first difference in penalty or cache state */
u32 pcb_ab_data(u32 a, int w);
u32 pcb_ab_ifetch(void);
#define IF0 do { IC -= (s32)pcb_ab_ifetch(); } while (0)
#define PCB_DATA(a, w) (IC -= (s32)pcb_ab_data((a), (w)))
#else
#define IF0 do { if (UNLIKELY((pcb.wb_active | pcb.precharge) != 0 || \
	pcb.set[pcb.pc_set].mru_tag != pcb.pc_line)) IC -= (s32)pcb_ifetch_slow(); } while (0)
#define PCB_DATA(a, w) (IC -= (s32)pcb_data((a), (w)))
#endif
#define ARG0(op) (pcb.arg0 = (op))
#define PCB_PC(v) pcb_set_pc(pcb.region | ((v) & 0x1FFFFFFFu))   /* v: a physical code address */
#define PCB_RGN_SAVE u32 rg__ = pcb.region
#define PCB_RGN_TO(t) (pcb.region = (t) & 0xE0000000u)
#define PCB_RGN_RESTORE (pcb.region = rg__)
#define PCB_IO(a, w) (IC -= (s32)pcb_io((a), (w)))
/* cv1k.cpp speedup_r: spin_until_time(10 us) from the time of the read, then
 * abort_timeslice (icount 0 if positive), so the loop's next update point exits; rt_event
 * moves the time to the wake-up cycle. With the debugger on (PCB_TRUEPC) MAME's pc() is the
 * delay slot's 0C04A0B0, not the idle pc, and the CPU never sleeps. */
#ifdef PCB_TRUEPC
#define PCB_IDLE ((void)0)
#else
#define PCB_IDLE do { pcb.idle_end = c->event_time - (s64)IC + 1024; pcb.n_idle++; \
	if (IC > 0) { c->event_time -= (s64)IC; IC = 0; } } while (0)
#endif

#else

#define IF(a) ((void)0)
#define IF0 ((void)0)
#define ARG0(op) ((void)0)
#define PCB_PC(v) ((void)0)
#define PCB_RGN_SAVE ((void)0)
#define PCB_RGN_TO(t) ((void)0)
#define PCB_RGN_RESTORE ((void)0)
#define PCB_DATA(a, w) ((void)0)
#define PCB_IO(a, w) ((void)0)
#define PCB_IDLE ((void)0)

#endif
#endif

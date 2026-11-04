/* CV1000-B board model for the recompiled games.
 * Behaviour follows MAME 0.289 (cv1k.cpp, cv1k_v.cpp, sh3/sh4 peripherals, nandflash,
 * rtc9701), which is the timing oracle for now. Sources are BSD-3-Clause.
 */
#ifndef CV1K_H
#define CV1K_H

#include <stddef.h>
#include "recomp.h"

#define CPU_HZ 102400000u          /* SH7709S core clock */
#define PCLK_DIV 4u                /* peripheral clock = CPU / 4 (MD2-0 = 0) */
#define SCREEN_HZ 60.024           /* measured on an Ibara PCB */

/* ---- ROMs / memories ---------------------------------------------------- */
extern u8 *cv1k_rom;               /* U4 as the CPU sees it (big-endian), 4 MB window */
extern u32 cv1k_rom_mask;
extern u8 *cv1k_nand;              /* U2, 2112-byte pages */
extern u32 cv1k_nand_size;

/* ---- interrupt sources (MAME sh4 exception order for ties) --------------- */
enum {
	IRQ_IRL0, IRQ_IRL1, IRQ_IRL2, IRQ_IRL3,    /* IRQ0-3 pins: INTEVT2 0x600.. */
	IRQ_DMTE0, IRQ_DMTE1, IRQ_DMTE2, IRQ_DMTE3,
	IRQ_TUNI0, IRQ_TUNI1, IRQ_TUNI2,
	IRQ_COUNT
};
void intc_request(int src);
void intc_unrequest(int src);
void intc_recompute_priorities(void);

/* ---- scheduler ---------------------------------------------------------- */
enum {
	EV_VBLANK, EV_TMU0, EV_TMU1, EV_TMU2,
	EV_DMA0, EV_DMA1, EV_DMA2, EV_DMA3,
	EV_BLIT, EV_RTC_SEC,
	EV_COUNT
};
#define EV_NEVER UINT64_MAX
u64 rt_now(sh3_t *c);
void rt_schedule(sh3_t *c, int ev, u64 when);
void rt_force_check(sh3_t *c);

extern sh3_t cpu;
extern u64 frame_count;            /* vblanks so far */

/* Goal 16 experiment (set by the PC host only): CPU cycles per unit of peripheral time
 * (vblank, timer unit, blitter, RTC). 1.0 = MAME 0.289's 102.4 MHz; 0.9 = the CPU gets 10%
 * fewer cycles per frame, i.e. a CPU 10% slower against everything else. */
extern double rt_clock_scale;
static inline u64 rt_scale_cyc(u64 x)
{
	return rt_clock_scale == 1.0 ? x : (u64)((double)x * rt_clock_scale + 0.5);
}

/* ---- devices -------------------------------------------------------------- */
void onchip_reset(void);
u32 onchip_read(sh3_t *c, u32 a, int size);
void onchip_write(sh3_t *c, u32 a, u32 v, int size);
void tmu_fire(sh3_t *c, int which);
void dma_fire(sh3_t *c, int ch);

void nand_reset(void);
u8 nand_data_r(void);
void nand_data_read(u8 *dst, u32 n);  /* test 113: n nand_data_r calls into dst */
extern u64 stat_dma_fast;             /* test 113: bytes dma_transfer moved by nand_data_read */
void nand_data_w(u8 v);
void nand_command_w(u8 v);
void nand_address_w(u8 v);

void rtc9701_reset(void);
void rtc9701_port_w(u8 v);
int rtc9701_read_bit(void);
void rtc9701_tick_second(void);
void rtc9701_set_time(int year, int month, int day, int wday, int hour, int min, int sec);
void rtc9701_get(u8 out[7]);        /* sec min hour wday day month year as the chip holds them */
void rtc9701_put(const u8 in[7]);   /* test 86: and back */
u16 *rtc9701_eeprom(void);         /* 256 big-endian words, for nvram load/save */

void blitter_reset(void);
u32 blitter_read(sh3_t *c, u32 offset);
void blitter_write(sh3_t *c, u32 offset, u32 v, u32 mask);
void blitter_done(sh3_t *c);
void blitter_fpga_w(u8 v);
/* 320x240 frame as visible on screen, 0x00RRGGBB (MAME's r5<<3 expansion) */
void blitter_screen(u32 *out, int pitch);
extern u16 *cv1k_vram;             /* 8192 x 4096 ARGB1555, rows CV1K_VRAM_STRIDE apart */
/* u16s from one VRAM row to the next. 0x2000 = MAME's layout; a host may pad the rows
 * (-DCV1K_VRAM_STRIDE=0x2040): with 16 KB rows a column's rows share 8 of the 360's 1024
 * L2 sets, and the CV1000 draws much as tall narrow strips. The padding is never drawn. */
#ifndef CV1K_VRAM_STRIDE
#define CV1K_VRAM_STRIDE 0x2000
#endif
extern int blitter_firmware;       /* -1, or 0..3 = A..D once the FPGA is configured */
extern u64 blitter_busy_cycles;    /* sum of busy time, for stats */
extern double blitx_scale;         /* goal 16 experiments (PC host), see blitter.c */
extern int blitx_noclip;
extern u32 blitx_bus_cyc, blitx_bus_upl_cyc, blitx_upl_gap_ns;

/* YMZ770 (ymz770.c). CPU side: register writes stamped with the cycle, and a mark at
 * every vblank (sound may be made up to it). Chip side, any thread: ymz_run replays
 * the writes and makes chip samples (MAME's right channel, int, at ymz_rate()). */
void ymz770_write(u64 now, u32 offset, u8 v);
void ymz770_mark(u64 now);
void ymz_init(const u8 *rom, u32 bytes);   /* U23+U24 as the chip sees them (word-swapped), bytes+16 readable */
int ymz_run(void (*sink)(s32 v, u32 rate, u64 time, void *u), void *u);
u32 ymz_rate(void);
u64 ymz_chip_time(void);
int ymz_decode_phrase(int phrase, s16 *out, int max, int *rate);
extern int ymz_rate_mode;          /* 0 = MAME 0.289 (rate from each AMM block), 1 = fixed 16 kHz */
extern void (*ymz_write_hook)(u64 sample, u8 reg, u8 data);
extern u64 ymz770_writes, ymz_queue_full, ymz_samples, ymz_blocks, ymz_rate_changes;
/* Test 68 (ibara360's sound page): with ymz_scaled the host's mix comes out in ymz_out (the sink's sample stays the
 * chip's): each phrase's category and factor (Q8, 256 = as the game plays it), the categories' gains (Q15, 32768 = 1)
 * for the board's chip and for the sound test's chip, fed by ymz_test_cmd (reg << 8 | data, YMZT_LOOP(seq) = loop
 * that sequence once slot 0's has ended, YMZT_VOL0(v) = channel 0's volume v in place of what the sequences write, 0 =
 * theirs, YMZT_RESET = all of it stopped); ymz_test_busy while it plays */
enum { YMZ_CAT_MUSIC, YMZ_CAT_SFX, YMZ_CAT_VOICE, YMZ_CATS };
#define YMZT_LOOP(seq) (0x10000u | (u32)(seq))
#define YMZT_VOL0(v) (0x30000u | (u32)(v))
#define YMZT_RESET 0x20000u
extern u8 ymz_phrase_cat[256];
extern u16 ymz_phrase_k[256];
extern u8 ymz_phrase_force_main[256];
extern volatile u32 ymz_phrase_starts[256]; /* test 97 */
int ymz_phrase_active(int phrase);           /* host: wait for an attract voice before starting a run */
void ymz_hush_keyed(void);                    /* test 101: playing phrases whose factor is 0 hushed at once */
extern volatile s32 ymz_gain_main[YMZ_CATS], ymz_gain_test[YMZ_CATS];
extern volatile s32 ymz_gain_att[YMZ_CATS]; /* test 100: phrases keyed while ymz_attract */
extern volatile int ymz_attract;
extern volatile int ymz_scaled, ymz_test_busy;
extern s32 ymz_out;
int ymz_test_cmd(u32 what);
/* sndout.c: chip samples -> 48 kHz stereo s16, 800.8 frames per emulated frame */
void snd_out_init(void);
void snd_out_sink(s32 v, u32 rate, u64 time, void *u);     /* pass to ymz_run */
int snd_out_take(s16 *dst, int max);                        /* drain at least every frame */
extern u64 snd_out_frames, snd_out_clipped;
extern double snd_out_per_frame;   /* 48 kHz frames per emulated frame (800.8), set before snd_out_init */

/* ---- inputs (active low, MAME port layout) -------------------------------- */
extern u8 in_port_c, in_port_d, in_port_l, in_port_f, in_dsw;

/* ---- run control ---------------------------------------------------------- */
void cv1k_reset(sh3_t *c);
void rt_run(sh3_t *c);             /* never returns; hosts get control in host_vblank() */
void host_vblank(sh3_t *c);        /* called by the runtime at every vblank */
void rt_log(const char *fmt, ...);
void rt_fatal(const char *fmt, ...) __attribute__((noreturn));

/* stats */
extern u64 stat_interp_insns, stat_resyncs, stat_compiled_calls_missed;
extern u64 stat_events, stat_io;   /* rt_event calls; CPU I/O accesses (io_rd*, io_wr*) */
u32 cv1k_ram_hash(void);          /* work RAM as big-endian words, host independent */
/* optional host clock: when set, the blitter adds the time its draw passes take
 * (blitter_draw_ticks: kick to end when drawn here; per band when a host draws them) */
extern u64 (*blitter_clock)(void);
extern u64 blitter_draw_ticks;

/* Draw jobs (blitter.c): each kick's list is copied, then drawn in blitter_bands
 * row-interleaved bands (1 when the list reads VRAM it also writes). A host with
 * worker threads sets blitter_start (run blitter_draw_band(0..bands-1), may return
 * at once) and blitter_wait (until they are done); otherwise the bands are drawn
 * at kick time. VRAM readers call blitter_sync() first; blitter_screen() does. */
#define BLIT_MAX_BANDS 4
extern int blitter_bands;
extern void (*blitter_start)(int bands);
extern void (*blitter_wait)(void);
void blitter_draw_band(int band);
void blitter_sync(void);
void blitter_get_scroll(u32 *sx, u32 *sy); /* the screen's top left in VRAM */
extern u64 blitter_band_ticks[BLIT_MAX_BANDS];
extern u64 blitter_jobs, blitter_jobs_one_band;
extern u64 blitter_pixels;          /* destination pixels of all draws (after the clip) */
extern u64 blitter_phases;         /* phases beyond each list's first (bands meet between) */
/* test 63: the last kicked job writes (or may write) VRAM inside the 320x240 window at the
 * scroll it was kicked with; when it does not, a host may convert the screen before drawing */
extern int blitter_job_win;
extern u64 blitter_jobs_win;
/* draw routines: 0 = MAME-style (blit_in.inc), 1-3 = blit_fast.inc (same pixels): 1 tables,
 * 2 tables without the transparency branch, 3 = 2 + prefetch; read at each kick */
extern int blitter_fast;

#endif

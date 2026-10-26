/* SH7709S on-chip peripherals the CV1000 games use, and the board's address decoder.
 * Behaviour follows MAME 0.289 (sh3comn.cpp, sh4comn.cpp, sh4tmu.cpp, sh4dmac.cpp, cv1k.cpp).
 */
#include <string.h>

#include "cv1k.h"
#include "state.h"

u8 *cv1k_rom;
u32 cv1k_rom_mask;
u8 in_port_c = 0xFF, in_port_d = 0xFF, in_port_l = 0xFF, in_port_f = 0xFF, in_dsw = 0x00;

extern u32 onchip_intevt, onchip_intevt2, onchip_expevt, onchip_tra;
u16 onchip_ipra, onchip_iprc;

/* plain storage for registers without side effects (read back what was written) */
static u8 regs_a4[0x200];     /* 0x04000000-0x040001FF */
static u8 regs_ff[0x200];     /* 0xFFFFFE00-0xFFFFFFFF */
static u8 cache_array[0x10000];

/* ---- TMU ---------------------------------------------------------------------- */
static const u32 tcnt_div[8] = { 4, 16, 64, 256, 1024, 1, 1, 1 };
static struct {
	u32 tcor, tcnt, tcr;
	u64 due;              /* next underflow while running */
} tmu[3];
static u8 tocr, tstr;

static u64 tmu_tick(int i)
{
	return (u64)PCLK_DIV * tcnt_div[tmu[i].tcr & 7];
}

static void tmu_start_from(sh3_t *c, int i, u64 base)
{
	tmu[i].due = base + rt_scale_cyc(((u64)tmu[i].tcnt + 1) * tmu_tick(i));
	rt_schedule(c, EV_TMU0 + i, tmu[i].due);
}

/* MAME compute_ticks_timer: remaining time in ticks, minus one, truncated to u32 */
static u32 tmu_count_now(sh3_t *c, int i, u32 div)
{
	u64 now = rt_now(c);
	double rem = tmu[i].due > now ? (double)(tmu[i].due - now) : 0.0;
	return (u32)(s64)(rem / ((double)(PCLK_DIV * div) * rt_clock_scale) - 1.0);
}

void tmu_fire(sh3_t *c, int i)
{
	u64 t = tmu[i].due;
	tmu[i].tcnt = tmu[i].tcor;
	tmu_start_from(c, i, t);
	tmu[i].tcr |= 0x100;
	if (tmu[i].tcr & 0x20)
		intc_request(IRQ_TUNI0 + i);
}

extern u64 tmux_start_ofs;

static void tstr_w(sh3_t *c, u8 v)
{
	u8 chg = tstr ^ v;
	tstr = v;
	for (int i = 0; i < 3; i++) {
		if (!(chg & (1 << i)))
			continue;
		if (!(tstr & (1 << i))) {
			tmu[i].tcnt = tmu_count_now(c, i, tcnt_div[tmu[i].tcr & 7]);
			rt_schedule(c, EV_TMU0 + i, EV_NEVER);
		} else {
			tmu_start_from(c, i, rt_now(c) + tmux_start_ofs);
		}
	}
}

/* goal 16 experiment (PC host): cycles added to every timer start, to move the timer phase */
u64 tmux_start_ofs;

static u32 tmu_read(sh3_t *c, u32 off, int *ok)
{
	int i;
	*ok = 1;
	switch (off) {
	case 0xE90: return tocr;
	case 0xE92: return tstr;
	case 0xE94: case 0xEA0: case 0xEAC:
		i = (off - 0xE94) / 12;
		return tmu[i].tcor;
	case 0xE98: case 0xEA4: case 0xEB0:
		i = (off - 0xE98) / 12;
		return (tstr & (1 << i)) ? tmu_count_now(c, i, tcnt_div[tmu[i].tcr & 7]) : tmu[i].tcnt;
	case 0xE9C: case 0xEA8: case 0xEB4:
		i = (off - 0xE9C) / 12;
		return tmu[i].tcr;
	}
	*ok = 0;
	return 0;
}

static int tmu_write(sh3_t *c, u32 off, u32 v)
{
	int i;
#if defined(CV1K_PCB) && defined(PCB_PROBE)
	if (off >= 0xE90 && off <= 0xEB4)
		pcb_probe_tmu(rt_now(c), 0xFFFFF000u + off, v);
#endif
	switch (off) {
	case 0xE90: tocr = (u8)v; return 1;
	case 0xE92: tstr_w(c, (u8)v); return 1;
	case 0xE94: case 0xEA0: case 0xEAC:
		tmu[(off - 0xE94) / 12].tcor = v;
		return 1;
	case 0xE98: case 0xEA4: case 0xEB0:
		i = (off - 0xE98) / 12;
		tmu[i].tcnt = v;
		if (tstr & (1 << i))
			tmu_start_from(c, i, rt_now(c));
		return 1;
	case 0xE9C: case 0xEA8: case 0xEB4: {
		u32 old;
		i = (off - 0xE9C) / 12;
		old = tmu[i].tcr;
		tmu[i].tcr = v & 0xFFFF;
		if (tstr & (1 << i)) {
			tmu[i].tcnt = tmu_count_now(c, i, tcnt_div[old & 7]);
			tmu_start_from(c, i, rt_now(c));
		}
		if (!(tmu[i].tcr & 0x20) || !(tmu[i].tcr & 0x100))
			intc_unrequest(IRQ_TUNI0 + i);
		return 1;
	}
	}
	return 0;
}

/* ---- DMAC --------------------------------------------------------------------------- */
#define CHCR_DE 0x0001u
#define CHCR_TE 0x0002u
#define CHCR_IE 0x0004u
#define DMAOR_DME 0x0001u
#define DMAOR_NMIF 0x0002u
#define DMAOR_AE 0x0004u
static struct {
	u32 sar, dar, tcr, chcr;
	int active;
} dma[4];
static u16 dmaor;

u32 bus_read(u32 a, int size);
void bus_write(u32 a, u32 v, int size);

static void dma_transfer(sh3_t *c, int ch)
{
	static const int sizes[4] = { 1, 2, 4, 16 };
	u32 chcr = dma[ch].chcr;
	int incd = (chcr >> 14) & 3, incs = (chcr >> 12) & 3, size = sizes[(chcr >> 3) & 3];
	u32 src = dma[ch].sar & 0x1FFFFFFFu, dst = dma[ch].dar & 0x1FFFFFFFu, count = dma[ch].tcr;
	if (incd == 3 || incs == 3)
		return;
	if (!count)
		count = 0x1000000;
	dma[ch].active = 1;
	rt_schedule(c, EV_DMA0 + ch, rt_now(c) + 2ull * count + 1);
	if (size == 16) {
		/* MAME: four 64-bit moves per unit */
		src &= ~15u;
		dst &= ~15u;
	} else {
		src &= ~(u32)(size - 1);
		dst &= ~(u32)(size - 1);
	}
	for (; count > 0; count--) {
		if (incs == 2) src -= size;
		if (incd == 2) dst -= size;
		if (size == 16) {
			for (int k = 0; k < 16; k += 4)
				bus_write(dst + k, bus_read(src + k, 4), 4);
		} else {
			bus_write(dst, bus_read(src, size), size);
		}
		if (incs == 1) src += size;
		if (incd == 1) dst += size;
	}
}

static void dmac_check(sh3_t *c, int ch)
{
	u32 chcr = dma[ch].chcr, rs = (chcr >> 8) & 15;
	if (chcr & dmaor & DMAOR_DME) {
		if (rs < 2 || rs > 6)
			return;
		if (!dma[ch].active && !(chcr & CHCR_TE) && !(dmaor & (DMAOR_AE | DMAOR_NMIF))) {
			if (rs > 3)
				dma_transfer(c, ch);
			/* rs 2/3 (external request): no device on this board asks */
		}
	} else if (dma[ch].active) {
		dma[ch].active = 0;
		rt_schedule(c, EV_DMA0 + ch, EV_NEVER);
	}
}

void dma_fire(sh3_t *c, int ch)
{
	(void)c;
	dma[ch].active = 0;
	dma[ch].tcr = 0;
	dma[ch].chcr |= CHCR_TE;
	if (dma[ch].chcr & CHCR_IE)
		intc_request(IRQ_DMTE0 + ch);
}

/* ---- register file helpers ----------------------------------------------------------- */
static u32 get_be(const u8 *p, int size)
{
	return size == 1 ? p[0] : size == 2 ? (u32)(p[0] << 8 | p[1]) : (u32)(p[0] << 24 | p[1] << 16 | p[2] << 8 | p[3]);
}

static void put_be(u8 *p, u32 v, int size)
{
	if (size == 1) {
		p[0] = (u8)v;
	} else if (size == 2) {
		p[0] = (u8)(v >> 8);
		p[1] = (u8)v;
	} else {
		p[0] = (u8)(v >> 24);
		p[1] = (u8)(v >> 16);
		p[2] = (u8)(v >> 8);
		p[3] = (u8)v;
	}
}

void onchip_reset(void)
{
	memset(regs_a4, 0, sizeof regs_a4);
	memset(regs_ff, 0, sizeof regs_ff);
#ifdef CV1K_PCB
	/* MAME sh3_base_device::device_start BSC values (the pcb model times with them) */
	put_be(regs_ff + 0x162, 0x3FF0, 2);
	put_be(regs_ff + 0x164, 0x3FF3, 2);
	put_be(regs_ff + 0x166, 0xFFFF, 2);
#endif
	memset(tmu, 0, sizeof tmu);
	memset(dma, 0, sizeof dma);
	tocr = tstr = 0;
	dmaor = 0;
	onchip_ipra = onchip_iprc = 0;
	onchip_intevt = onchip_intevt2 = onchip_expevt = onchip_tra = 0;
}

/* test 69: the registers and timers in a save state (state.h; the input ports are the host's) */
void onchip_state(rt_sbuf *b)
{
	ST(b, regs_a4);
	ST(b, regs_ff);
	ST(b, cache_array);
	ST(b, tmu);
	ST(b, tocr);
	ST(b, tstr);
	ST(b, dma);
	ST(b, dmaor);
	ST(b, onchip_ipra);
	ST(b, onchip_iprc);
}

/* area 1 (0xA4000000): INTC extension, DMAC, ports */
static u32 a4_read(sh3_t *c, u32 off, int size)
{
	(void)c;
	switch (off) {
	case 0x000: return onchip_intevt2;
	case 0x020: case 0x030: case 0x040: case 0x050: return dma[(off - 0x20) >> 4].sar;
	case 0x024: case 0x034: case 0x044: case 0x054: return dma[(off - 0x24) >> 4].dar;
	case 0x028: case 0x038: case 0x048: case 0x058: return dma[(off - 0x28) >> 4].tcr;
	case 0x02C: case 0x03C: case 0x04C: case 0x05C: return dma[(off - 0x2C) >> 4].chcr;
	case 0x060: return dmaor;
	case 0x124: return in_port_c;
	case 0x126: return in_port_d;
	case 0x128: return 0xFF;            /* PEDR: NAND ready (0x20) | 0xDF; MAME's NAND is never busy */
	case 0x12A: return in_port_f;
	case 0x130: return 0xFF;            /* PJDR: fpga_r */
	case 0x134: return in_port_l;
	}
	return get_be(regs_a4 + (off & 0x1FF), size);
}

static void a4_write(sh3_t *c, u32 off, u32 v, int size)
{
	switch (off) {
	case 0x000: onchip_intevt2 = v; return;
	case 0x004:                         /* IRR0: zero bits clear IRQ lines */
		regs_a4[4] = (u8)v;
		if (!(v & 0x04))
			intc_unrequest(IRQ_IRL2);
		if (!(v & 0x01)) intc_unrequest(IRQ_IRL0);
		if (!(v & 0x02)) intc_unrequest(IRQ_IRL1);
		if (!(v & 0x08)) intc_unrequest(IRQ_IRL3);
		return;
	case 0x016:                         /* IPRC */
		onchip_iprc = (u16)v;
		put_be(regs_a4 + off, v, 2);
		intc_recompute_priorities();
		rt_force_check(c);
		return;
	case 0x020: case 0x030: case 0x040: case 0x050: dma[(off - 0x20) >> 4].sar = v; return;
	case 0x024: case 0x034: case 0x044: case 0x054: dma[(off - 0x24) >> 4].dar = v; return;
	case 0x028: case 0x038: case 0x048: case 0x058: dma[(off - 0x28) >> 4].tcr = v; return;
	case 0x02C: case 0x03C: case 0x04C: case 0x05C:
		dma[(off - 0x2C) >> 4].chcr = v;
		dmac_check(c, (off - 0x2C) >> 4);
		return;
	case 0x060: {
		u16 old = dmaor;
		dmaor = (u16)v;
		if ((dmaor & DMAOR_AE) && !(old & DMAOR_AE))
			dmaor &= ~DMAOR_AE;
		if ((dmaor & DMAOR_NMIF) && !(old & DMAOR_NMIF))
			dmaor &= ~DMAOR_NMIF;
		for (int ch = 0; ch < 4; ch++)
			dmac_check(c, ch);
		return;
	}
	case 0x130:
		blitter_fpga_w((u8)v);
		break;
	}
	put_be(regs_a4 + (off & 0x1FF), v, size);
}

/* P4 0xFFFFFE00-0xFFFFFFFF: TMU, INTC, BSC, CPG, CCN */
static u32 ff_read(sh3_t *c, u32 off, int size)
{
	int ok;
	u32 v = tmu_read(c, off, &ok);
	if (ok)
		return v;
	switch (off) {
	case 0xFD0: return onchip_tra;
	case 0xFD4: return onchip_expevt;
	case 0xFD8: return onchip_intevt;
	case 0xEE2: return onchip_ipra;
	}
	return get_be(regs_ff + (off & 0x1FF), size);
}

static void ff_write(sh3_t *c, u32 off, u32 v, int size)
{
	if (tmu_write(c, off, v))
		return;
	switch (off) {
	case 0xFD0: onchip_tra = v; return;
	case 0xFD4: onchip_expevt = v; return;
	case 0xFD8: onchip_intevt = v; return;
	case 0xEE2:
		onchip_ipra = (u16)v;
		intc_recompute_priorities();
		rt_force_check(c);
		return;
	}
#ifdef CV1K_PCB
	if (off >= 0xF60 && off < 0xF76)
		pcb_bsc_write(off, v, size);
	else if ((off & ~3u) == 0xFEC)        /* CCR: CF is bit 3 of the low byte */
		pcb_ccr_write(off + size == 0xFF0 ? v : 0);
#endif
	put_be(regs_ff + (off & 0x1FF), v, size);
}

u32 onchip_read(sh3_t *c, u32 a, int size)
{
	if (a >= 0xFFFFFE00u)
		return ff_read(c, a & 0xFFF, size);
	if ((a & 0xFF000000u) == 0xF0000000u)
		return get_be(cache_array + (a & 0xFFFF), size);
	return 0;   /* SDMR window and other P4 space */
}

void onchip_write(sh3_t *c, u32 a, u32 v, int size)
{
	if (a >= 0xFFFFFE00u)
		ff_write(c, a & 0xFFF, v, size);
	else if ((a & 0xFF000000u) == 0xF0000000u) {
#ifdef CV1K_PCB
		pcb_cache_array_write(c, a, v);
#endif
		put_be(cache_array + (a & 0xFFFF), v, size);
	}
}

/* ---- board address decoder --------------------------------------------------------------- */
static int unmapped_logs;

static u32 dev_read(sh3_t *c, u32 a, int size)
{
	u32 p;
	if (a >= 0xE0000000u)
		return onchip_read(c, a, size);
	p = a & 0x1FFFFFFFu;
	if (p < 0x00400000u)
		return get_be(cv1k_rom + (p & cv1k_rom_mask), size);
	if ((p & 0xFF000000u) == 0x04000000u)
		return a4_read(c, p & 0xFFFFFFu, size);
	if (IS_RAM(p))
		return get_be(RAMP(p), size);
	if (p - 0x10000000u < 8) {          /* NAND: byte port at offset 0 */
		u32 v = 0;
		for (int k = 0; k < size; k++)
			v = (v << 8) | (((p + k) & 7) == 0 ? nand_data_r() : 0xFF);
		return v;
	}
	if (p - 0x10C00000u < 8) {
		u32 v = 0;
		for (int k = 0; k < size; k++)
			v = (v << 8) | (((p + k) & 7) == 1 ? (u32)(0xFE | rtc9701_read_bit()) : 0);
		return v;
	}
	if (p - 0x18000000u < 0x58) {
		u32 w = blitter_read(c, p & 0x7C);
		if (size == 4)
			return w;
		return (w >> (8 * (4 - size - (p & 3)))) & (size == 1 ? 0xFF : 0xFFFF);
	}
	if (unmapped_logs < 20) {
		unmapped_logs++;
		rt_log("io: unmapped read%d %08X\n", size * 8, a);
	}
	return 0;
}

static void dev_write(sh3_t *c, u32 a, u32 v, int size)
{
	u32 p;
	if (a >= 0xE0000000u) {
		onchip_write(c, a, v, size);
		return;
	}
	p = a & 0x1FFFFFFFu;
	if (p < 0x00400000u)
		return;                     /* ROM: MAME nopw */
	if ((p & 0xFF000000u) == 0x04000000u) {
		a4_write(c, p & 0xFFFFFFu, v, size);
		return;
	}
	if (IS_RAM(p)) {
		put_be(RAMP(p), v, size);
		return;
	}
	if (p - 0x10000000u < 8 || p - 0x10400000u < 8 || p - 0x10C00000u < 8) {
		for (int k = 0; k < size; k++) {
			u32 q = p + k, off = q & 7;
			u8 b = (u8)(v >> (8 * (size - 1 - k)));
			if (q - 0x10000000u < 8) {
				if (off == 0) nand_data_w(b);
				else if (off == 1) nand_command_w(b);
				else if (off == 2) nand_address_w(b);
			} else if (q - 0x10400000u < 8) {
				ymz770_write(rt_now(c) + rt_epoch, off, b);
			} else if (off == 1) {
				/* EEPROMOUT: bit0 data, bit1 clock, bit2 CS (active low); callbacks on change */
				rtc9701_port_w(b);
			}
		}
		return;
	}
	if (p - 0x18000000u < 0x58) {
		u32 off = p & 0x7C;
		if (size == 4) {
			blitter_write(c, off, v, 0xFFFFFFFFu);
		} else {
			/* sub-dword write: MAME handlers see the dword with only these bytes enabled */
			u32 shift = 8 * (4 - size - (p & 3));
			blitter_write(c, off, v << shift, (size == 1 ? 0xFFu : 0xFFFFu) << shift);
		}
		return;
	}
	if (unmapped_logs < 20) {
		unmapped_logs++;
		rt_log("io: unmapped write%d %08X = %08X\n", size * 8, a, v);
	}
}

u64 stat_io;                     /* CPU accesses that left work RAM (counted for host profiles) */

u32 io_rd8(sh3_t *c, u32 a) { stat_io++; return dev_read(c, a, 1); }
u32 io_rd16(sh3_t *c, u32 a) { stat_io++; return dev_read(c, a, 2); }
u32 io_rd32(sh3_t *c, u32 a) { stat_io++; return dev_read(c, a, 4); }
void io_wr8(sh3_t *c, u32 a, u32 v) { stat_io++; dev_write(c, a, v & 0xFF, 1); }
void io_wr16(sh3_t *c, u32 a, u32 v) { stat_io++; dev_write(c, a, v & 0xFFFF, 2); }
void io_wr32(sh3_t *c, u32 a, u32 v) { stat_io++; dev_write(c, a, v, 4); }

/* DMA and blitter side: same decoder, no CPU */
u32 bus_read(u32 a, int size) { return dev_read(&cpu, a, size); }
void bus_write(u32 a, u32 v, int size) { dev_write(&cpu, a, v, size); }


/* test 135: CHEATS batch 2, host-side corrections of each game frame (work/g135/SPEC_B.md, RESEARCH.md) */
/* test 136: MAGNET RANGE, per-slot pull latch, whole-bullet FEWER, revised MEDAL PENALTY (work/g136/SPEC.md) */
#include <stdint.h>

#include "card.h"
#include "cheatfx.h"
#include "cv1k.h"
#include "xplat.h"

static inline uint32_t rd32(uint32_t a)
{
	return BE32(RAMP(a));
}

static inline void wr32(uint32_t a, uint32_t v)
{
	u8 *p = RAMP(a);

	p[0] = (u8)(v >> 24);
	p[1] = (u8)(v >> 16);
	p[2] = (u8)(v >> 8);
	p[3] = (u8)v;
}

static inline uint8_t rd8(uint32_t a)
{
	return RAMP(a)[0];
}

static inline void wr8(uint32_t a, uint8_t v)
{
	RAMP(a)[0] = v;
}

static inline int32_t iabs32(int32_t v)
{
	return v < 0 ? -v : v;
}

static uint32_t last_fc;
static int have, kuro_last, mag_latch_logged; /* test 136: FIX1 A.5 one CLOSE latch log per run */
static uint32_t b_fl[256];
static unsigned ground_released_n; /* test 140: ground items released this run */
static int32_t b_x[256], b_y[256];
static uint32_t i_fl[320], i_ty[320];
static int32_t i_x[320], i_y[320], i_vx[320], i_vy[320];
static int i_ok[320];
static int i_pull[320]; /* test 136: pull latch, until collected / freed / changed */
static unsigned fewer_n;
static uint8_t med_idx;

static void ship_pos(int kuro, int s, int32_t *x, int32_t *y, int *alive)
{
	const uint32_t base = kuro ? 0x0C29D1D8u + (uint32_t)s * 0x2A0u : 0x0C283794u + (uint32_t)s * 0x280u;

	*alive = rd32(base) == 0xDC000000u;
	*x = (int32_t)rd32(base + 0x10);
	*y = (int32_t)rd32(base + 0x14);
}

static int32_t ship_mag_thr(int kuro, int s)
{
	/* test 136 FIX1 A.5: Kuro BL f_0C07C160 (gen/ibarablk/recomp_10.c:0C07C184/0C07C188 sets r10 = player+0x18,
	 * 0C07C422 reads R32(r10), 0C07C426 shad -12, 0C07C428 neg, 0C07C42C +0x60, 0C07C42E <<17) latch threshold
	 * thr = ((-R32(player+0x18) >> 12) + 0x60) << 17, compared with f_0C06A380 octagonal distance (16.16 units,
	 * gen/ibarablk/recomp_05.c:0C06A380). No static writer of player+0x18 (0x0C29D1D8+s*0x2A0) found in
	 * gen/ibarablk/recomp_*.c; Kuro reads the live field. Ibara has no such field: use 0x20000 as the usual
	 * value (thr 0x400000 = 64 px, a close range; 0 would be 192 px, near full screen). */
	if (kuro) {
		const uint32_t base = 0x0C29D1D8u + (uint32_t)s * 0x2A0u;
		const int32_t v = (int32_t)rd32(base + 0x18);
		return ((-(v >> 12)) + 0x60) << 17;
	}
	return (((-((int32_t)0x20000 >> 12)) + 0x60) << 17); /* 0x400000, 64 px */
}

static int oct_dist_lt_thr(int32_t ix, int32_t iy, int32_t sx, int32_t sy, int32_t thr)
{
	/* test 136: f_0C06A380 (gen/ibara/recomp_06.c / gen/ibarablk/recomp_05.c:0C06A380) octagonal distance
	 * d = max(|dx|,|dy|) + min(|dx|,|dy|)/2; latch when d < thr and d < 0x0FFFFFFF */
	int32_t dx = iabs32(ix - sx);
	int32_t dy = iabs32(iy - sy);
	int32_t d;
	if (dx >= dy)
		d = dx + (dy >> 1);
	else
		d = dy + (dx >> 1);
	return d < thr && d < 0x0FFFFFFF;
}

static int nearest_ship(int kuro, const int *shot_recent, int release, int need_close, int32_t ix, int32_t iy, int32_t *sx, int32_t *sy)
{
	int best = -1;
	int32_t bestd = 0;
	int s;

	for (s = 0; s < 2; s++) {
		int32_t x, y, d;
		int alive;

		if (release && shot_recent[s])
			continue;
		ship_pos(kuro, s, &x, &y, &alive);
		if (!alive)
			continue;
		if (need_close && !oct_dist_lt_thr(ix, iy, x, y, ship_mag_thr(kuro, s)))
			continue;
		d = iabs32(x - ix);
		{
			const int32_t dy = iabs32(y - iy);
			if (dy > d)
				d = dy;
		}
		if (best < 0 || d < bestd) {
			best = s;
			bestd = d;
			*sx = x;
			*sy = y;
		}
	}
	return best;
}

void cfx_reset(void)
{
	unsigned i;
	have = 0;
	fewer_n = 0;
	mag_latch_logged = 0; /* test 136 (FIX1 A.5) */
	for (i = 0; i < 320; i++)
		i_pull[i] = 0;
	if (ground_released_n)
		log_printf(C_WHITE, "CHEATS: %u GROUND ITEMS RELEASED", ground_released_n);
	ground_released_n = 0; /* test 140: ground items released this run */
}

void cfx_vblank(const struct cfx_cfg *c)
{
	const uint32_t fc_addr = c->kuro ? 0x0C2B039Cu : 0x0C286298u;
	const uint32_t b_base = c->kuro ? 0x0C297B40u : 0x0C27E0FCu;
	const uint32_t i_base = c->kuro ? 0x0C3BC7CCu : 0x0C38C064u;
	const uint32_t med_addr = c->kuro ? 0x0C3C53E0u : 0x0C392D78u;
	const unsigned i_n = c->kuro ? 0x140u : 0x140u; /* test 136: scan attached slots too (0x100..0x13F) */
	const unsigned i_stride = c->kuro ? 0x60u : 0x54u;
	const uint32_t fc = rd32(fc_addr);
	uint8_t idx_now, idx_prev;
	int medals_gone = 0, items_left = 0;
	unsigned i;

	if (have && kuro_last != c->kuro)
		have = 0;
	if (!have) {
		last_fc = fc;
		for (i = 0; i < 256; i++) {
			const uint32_t b = b_base + i * 0x54u;

			b_fl[i] = rd32(b);
			b_x[i] = (int32_t)rd32(b + 0x28);
			b_y[i] = (int32_t)rd32(b + 0x2C);
		}
		for (i = 0; i < 320; i++) {
			i_ok[i] = 0;
			i_pull[i] = 0;
			if (i < i_n) {
				const uint32_t it = i_base + i * i_stride;
				const uint32_t fl = rd32(it);
				const uint32_t ty = rd32(it + 4);

				i_fl[i] = fl;
				i_ty[i] = ty;
				i_x[i] = (int32_t)rd32(it + 0x28);
				i_y[i] = (int32_t)rd32(it + 0x2C);
				i_vx[i] = (int32_t)rd32(it + 0x30);
				i_vy[i] = (int32_t)rd32(it + 0x34);
				i_ok[i] = fl != 0 && !(fl & 0x4000u) && ty <= 7;
			}
		}
		med_idx = rd8(med_addr);
		kuro_last = c->kuro;
		have = 1;
		return;
	}
	if (fc == last_fc)
		return;

	/* test 140: ground (attached) items released into a free slot so the magnet pulls them (work/g140/RESEARCH_MAGNET.md) */
	if (!c->kuro && (c->magnet == 2 || c->magnet == 3 || c->suction)) {
		unsigned s, j, k;

		for (s = 0x100; s <= 0x13F; s++) {
			const uint32_t sit = i_base + s * i_stride;
			const uint32_t fl = rd32(sit);
			const uint32_t ty = rd32(sit + 4);
			const int release = c->magnet == 2 && !(c->suction && ty == 3);
			int32_t x, y, sx = 0, sy = 0;
			int f = -1;
			uint32_t nf, fa;

			if (!(fl & 0x10u) || ty > 7)
				continue;
			if (!(c->magnet == 2 || c->magnet == 3 || (c->suction && ty == 3)))
				continue;
			x = (int32_t)rd32(sit + 0x28);
			y = (int32_t)rd32(sit + 0x2C);
			if (nearest_ship(0, c->shot_recent, release, c->magrange == 0, x, y, &sx, &sy) < 0)
				continue; /* nobody in range (RELEASE: shot held / CLOSE: outside latch radius) */

			/* first free slot F in 0..0xFF (+0x00 == 0); none -> retry next frame */
			for (j = 0; j <= 0xFF; j++) {
				if (rd32(i_base + j * i_stride) == 0) {
					f = (int)j;
					break;
				}
			}
			if (f < 0)
				continue;

			/* copy the whole record S -> F (big-endian, 4-byte steps) */
			fa = i_base + (uint32_t)f * i_stride;
			for (k = 0; k < i_stride; k += 4)
				wr32(fa + k, rd32(sit + k));
			nf = (fl & ~0x4010u) | 0x4u;
			wr32(fa, nf);
			wr8(fa + 0x48, 0);
			wr32(fa + 0x30, 0);
			wr32(fa + 0x34, 0);
			wr32(sit, 0); /* S: +0x00 ONLY */

			/* bookkeeping: F takes over S's slot state so medal penalty and pull start clean */
			i_fl[f] = nf;
			i_ty[f] = ty;
			i_x[f] = x;
			i_y[f] = y;
			i_vx[f] = 0;
			i_vy[f] = 0;
			i_ok[f] = 1;
			i_pull[f] = 0;
			i_ok[s] = 0;
			i_fl[s] = 0;
			i_pull[s] = 0;

			ground_released_n++;
			if (ground_released_n <= 8)
				log_printf(C_YELLOW, "CHEATS: GROUND ITEM %X -> %X (TYPE %u)", s, (unsigned)f, (unsigned)ty);
		}
	}

	/* BULLETS */
	if (c->fewer || c->bspeed != 100) {
		int b_kill[256];
		for (i = 0; i < 256; i++) {
			b_kill[i] = 0;
		}
		if (c->fewer) { /* test 136: one keep/drop per whole bullet (work/g136/SPEC.md §6) */
			int b_gid[256];
			int g_kill[256];
			int ng = 0;
			for (i = 0; i < 256; i++) {
				const uint32_t b = b_base + i * 0x54u;
				const uint32_t fl = rd32(b);
				b_gid[i] = -1;
				if (b_fl[i] == 0 && (fl & 0x10000000u)) {
					const int32_t vx = (int32_t)rd32(b + 0x30);
					const int32_t vy = (int32_t)rd32(b + 0x34);
					const int32_t x = (int32_t)rd32(b + 0x28);
					const int32_t y = (int32_t)rd32(b + 0x2C);
					unsigned j;
					for (j = 0; j < i; j++) {
						if (b_gid[j] < 0)
							continue;
						{
							const uint32_t bj = b_base + j * 0x54u;
							const int32_t vjx = (int32_t)rd32(bj + 0x30);
							const int32_t vjy = (int32_t)rd32(bj + 0x34);
							if (vjx == vx && vjy == vy) {
								const int32_t dx = x - (int32_t)rd32(bj + 0x28);
								const int32_t dy = y - (int32_t)rd32(bj + 0x2C);
								int32_t along = dx, cross = dy;
								if (iabs32(vx) >= iabs32(vy)) {
									along = dx; cross = dy;
								} else {
									along = dy; cross = dx;
								}
								if (iabs32(cross) <= 0x200000 && iabs32(along) <= 0x200000) {
									b_gid[i] = b_gid[j];
									break;
								}
							}
						}
					}
					if (b_gid[i] < 0) {
						b_gid[i] = ng;
						g_kill[ng] = (fewer_n++ & 1u) ? 1 : 0;
						ng++;
					}
				}
			}
			for (i = 0; i < 256; i++)
				if (b_gid[i] >= 0)
					b_kill[i] = g_kill[b_gid[i]];
		}
		for (i = 0; i < 256; i++) {
			const uint32_t b = b_base + i * 0x54u;
			uint32_t fl = rd32(b);
			int32_t x = (int32_t)rd32(b + 0x28);
			int32_t y = (int32_t)rd32(b + 0x2C);

			if (b_kill[i] && b_fl[i] == 0 && (fl & 0x10000000u)) {
				wr32(b, 0); /* test 136: free whole bullet group (same as test 135) */
				b_fl[i] = 0;
				b_x[i] = x;
				b_y[i] = y;
				continue;
			}
			if (c->bspeed != 100 && fl != 0 && fl == b_fl[i]) {
				const int32_t dx = x - b_x[i];
				const int32_t dy = y - b_y[i];

				if (iabs32(dx) < 0x200000 && iabs32(dy) < 0x200000) {
					x = b_x[i] + (int32_t)(((int64_t)dx * (int)c->bspeed) / 100);
					y = b_y[i] + (int32_t)(((int64_t)dy * (int)c->bspeed) / 100);
					wr32(b + 0x28, (uint32_t)x);
					wr32(b + 0x2C, (uint32_t)y);
				}
			}
			b_fl[i] = rd32(b);
			b_x[i] = x;
			b_y[i] = y;
		}
	} else {
		for (i = 0; i < 256; i++) {
			const uint32_t b = b_base + i * 0x54u;

			b_fl[i] = rd32(b);
			b_x[i] = (int32_t)rd32(b + 0x28);
			b_y[i] = (int32_t)rd32(b + 0x2C);
		}
	}

	/* ITEMS */
	idx_prev = med_idx;
	idx_now = rd8(med_addr);
	if (c->ifall != 100 || c->suction || c->magnet || c->medalpen) {
		for (i = 0; i < i_n; i++) {
			const uint32_t it = i_base + i * i_stride;
			uint32_t fl = rd32(it);
			uint32_t ty = rd32(it + 4);
			/* test 136: track includes attached (0x10) for medal scan (SPEC 7); not carried (0x4000).
			 * Pull/fall exclude attached ground items - see REPORT.md (SPEC 5 / FIX1 A.4). */
			int track = fl != 0 && !(fl & 0x4000u) && ty <= 7;
			int pullable = track && !(fl & 0x10u);
			int same = i_ok[i] && fl == i_fl[i] && ty == i_ty[i];
			int32_t x = (int32_t)rd32(it + 0x28);
			int32_t y = (int32_t)rd32(it + 0x2C);
			int handled = 0;
			uint8_t mag_tgt = 0;

			if (!same)
				i_pull[i] = 0; /* test 136: pull latch cleared when slot freed or changes */
			if (c->kuro)
				mag_tgt = rd8(it + 0x4E);

			if (track)
				items_left++;
			if (c->medalpen && i_ok[i] && i_ty[i] == 3) {
				if (!(track && ty == 3))
					medals_gone++; /* test 136: vanished medal slot (any reason) */
			}

			/* 3b: Kuro BL, magnet OFF (test 136: Kuro OFF only; DEFAULT untouched) */
			if (c->kuro && c->magnet == 1 && same && mag_tgt != 0) {
				int32_t vx = i_vx[i];
				const int32_t term = (int32_t)rd32(it + 0x40);
				int32_t vy = i_vy[i];

				if (vx > term)
					vx -= 0x1000;
				x = i_x[i] + vx;
				y = i_y[i] + vy;
				if ((uint32_t)(y - 0x1740000) > 0x1180000u) {
					vy = -vy;
					y += vy;
				}
				wr32(it + 0x28, (uint32_t)x);
				wr32(it + 0x2C, (uint32_t)y);
				wr32(it + 0x30, (uint32_t)vx);
				wr32(it + 0x34, (uint32_t)vy);
				wr8(it + 0x4E, 0);
				mag_tgt = 0;
				handled = 1;
			}

			/* 3c: PULL (test 136: per-program magnet, magrange, pull latch, ground items) */
			if (pullable) {
				int want = 0;
				int release = 0;

				if (c->suction && ty == 3)
					want = 1;
				if (c->magnet == 3) {
					want = 1;
					if (c->kuro && mag_tgt != 0)
						want = 0; /* test 136: Kuro ALWAYS leaves game-latched items to it */
				} else if (c->magnet == 2) { /* RELEASE (ibara/ARRANGE only) */
					want = 1;
					release = 1;
					if (c->kuro) /* test 136: no RELEASE on Kuro */
						want = 0;
				} else if (c->magnet == 0) { /* DEFAULT: Kuro game untouched */
					want = 0;
				}
				/* test 136: MEDAL SUCTION pulls medals even while shooting (test 135) */
				if (c->suction && ty == 3) {
					release = 0;
					want = 1;
					if (c->kuro && c->magnet == 3 && mag_tgt != 0)
						want = 0;
				}
				if (want) {
					int32_t sx = 0, sy = 0;
					/* test 136 FIX1 A.1/A.2: radius test in nearest_ship; release filter = release && (FULL || !pulled) */
					int need_close = (c->magrange == 0 && !i_pull[i]);
					int rel_filter = release && (c->magrange == 1 || !i_pull[i]);
					int tgt = nearest_ship(c->kuro, c->shot_recent, rel_filter, need_close, x, y, &sx, &sy);

					if (tgt >= 0) {
						const int32_t dx = sx - x;
						const int32_t dy = sy - y;
						int32_t l = iabs32(dx);

						{
							const int32_t ady = iabs32(dy);
							if (ady > l)
								l = ady;
						}
						if (c->magrange == 0 && !i_pull[i] && !mag_latch_logged) {
							/* test 136 (FIX1 A.5): first CLOSE latch, whole pixels */
							const int32_t adx = iabs32(dx), ady = iabs32(dy);
							const int32_t oct = adx >= ady ? adx + (ady >> 1) : ady + (adx >> 1);
							const int32_t thr = ship_mag_thr(c->kuro, tgt);
							log_printf(C_YELLOW, "CHEATS: MAGNET LATCH AT %d PX (THRESHOLD %d PX)",
							           (int)(oct >> 16), (int)(thr >> 16));
							mag_latch_logged = 1;
						}
						if (l <= 0x60000) {
							x = sx;
							y = sy;
						} else {
							x += (int32_t)(((int64_t)dx * 0x60000) / l);
							y += (int32_t)(((int64_t)dy * 0x60000) / l);
						}
						wr32(it + 0x28, (uint32_t)x);
						wr32(it + 0x2C, (uint32_t)y);
						wr32(it + 0x30, 0);
						wr32(it + 0x34, 0);
						i_pull[i] = 1; /* test 136: once pulled stays pulled */
						handled = 1;
					}
				}
				if (!want)
					i_pull[i] = 0; /* test 136 FIX1 A.1 */
			}

			/* 3d: FALL SPEED */
			if (!handled && c->ifall != 100 && same && !(fl & 0x10u) && (!c->kuro || mag_tgt == 0)) { /* test 136 FIX1 A.3: skip attached */
				const int32_t dx = x - i_x[i];
				const int32_t dy = y - i_y[i];

				if (iabs32(dx) < 0x200000 && iabs32(dy) < 0x200000) {
					x = i_x[i] + (int32_t)(((int64_t)dx * (int)c->ifall) / 100);
					y = i_y[i] + (int32_t)(((int64_t)dy * (int)c->ifall) / 100);
					wr32(it + 0x28, (uint32_t)x);
					wr32(it + 0x2C, (uint32_t)y);
				}
			}

			/* 3e: record */
			{
				const uint32_t fl2 = rd32(it);
				const uint32_t ty2 = rd32(it + 4);
				const int now_item = fl2 != 0 && !(fl2 & 0x4000u) && ty2 <= 7;
				if (now_item) {
					i_fl[i] = fl2;
					i_ty[i] = ty2;
					i_x[i] = (int32_t)rd32(it + 0x28);
					i_y[i] = (int32_t)rd32(it + 0x2C);
					i_vx[i] = (int32_t)rd32(it + 0x30);
					i_vy[i] = (int32_t)rd32(it + 0x34);
					i_ok[i] = 1;
				} else {
					i_ok[i] = 0;
					i_pull[i] = 0;
				}
			}
		}
	} else {
		/* record only; keep medal tracking for logging? */
		for (i = 0; i < i_n; i++) {
			const uint32_t it = i_base + i * i_stride;
			const uint32_t fl = rd32(it);
			const uint32_t ty = rd32(it + 4);

			i_fl[i] = fl;
			i_ty[i] = ty;
			i_x[i] = (int32_t)rd32(it + 0x28);
			i_y[i] = (int32_t)rd32(it + 0x2C);
			i_vx[i] = (int32_t)rd32(it + 0x30);
			i_vy[i] = (int32_t)rd32(it + 0x34);
			i_ok[i] = fl != 0 && !(fl & 0x4000u) && ty <= 7;
			if (!i_ok[i])
				i_pull[i] = 0;
			if (i_ok[i])
				items_left++;
			if (c->medalpen && i_ok[i] && i_ty[i] == 3) {
				/* checked next frame via i_ok/ty history? we need previous; but medalpen off in cfg branch won't log - handled below */
			}
		}
	}

	/* MEDAL PENALTY (test 136: index-drop trigger, no edge test) */
	{
		uint8_t idx = rd8(med_addr);
		if (c->medalpen) {
			if (idx != idx_prev)
				log_printf(C_YELLOW, "CHEATS: MEDAL INDEX %u -> %u (MEDALS GONE %u, ITEMS LEFT %u)",
				           (unsigned)idx_prev, (unsigned)idx, (unsigned)medals_gone, (unsigned)items_left);
			if (idx == 0 && idx_prev > 0) {
				int init = (items_left == 0 && medals_gone == 0);
				if (!init && medals_gone > 0) {
					uint8_t n = 0;

					if (c->medalpen == 1) {
						n = 0;
					} else {
						const uint8_t k = c->medalpen == 2 ? 5 : 3;
						n = idx_prev > k ? (uint8_t)(idx_prev - k) : 0;
					}
					if (n != idx) {
						wr8(med_addr, n);
						idx = n;
					}
					log_printf(C_YELLOW, "CHEATS: MEDAL LOST: INDEX %u -> %u", (unsigned)idx_prev, (unsigned)n);
				}
			}
		}
		med_idx = rd8(med_addr);
	}

	last_fc = fc;
}

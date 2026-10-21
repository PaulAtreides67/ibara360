/* Chip samples (any rate, stamped with their SH-3 cycle) -> 48 kHz stereo s16.
 *
 * Output frame m is at cycle m * CPU_HZ / (SCREEN_HZ * 800.8): 800.8 frames per
 * emulated frame, which the 360 shows one per 59.94 Hz vblank, so the queue drains at
 * exactly 48000 Hz while the game keeps up. Interpolation: 32-tap Kaiser-windowed
 * sinc in input-sample units (cutoff 0.45 of the input rate), 256 phases, Q14
 * integer taps so every host makes the same output. Output lags the chip by 16 input
 * samples (1 ms at 16 kHz). The board routes one chip output to a mono speaker; it
 * goes to both channels. */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "cv1k.h"

#define TAPS 32
#define PHASES 256
#define HIST 128                 /* power of two, > TAPS */
#define OUT_PER_FRAME 800.8

static s16 kern[PHASES + 1][TAPS];
static s32 in_v[HIST];
static u64 in_t[HIST];           /* cycle << 16 */
static u32 n_in;                 /* inputs so far */
static u32 p_idx;                /* t[p_idx] <= next output time < t[p_idx + 1] */
static u64 out_t, out_step;      /* cycle << 16 */
static s16 out_buf[8192 * 2];
static u32 out_n;
u64 snd_out_frames, snd_out_clipped;

static double bessel_i0(double x)
{
	double s = 1, t = 1;
	for (int k = 1; k < 40; k++) {
		t *= (x / (2 * k)) * (x / (2 * k));
		s += t;
	}
	return s;
}

void snd_out_init(void)
{
	const double fc = 0.45, beta = 8.0;
	for (int ph = 0; ph <= PHASES; ph++) {
		double frac = (double)ph / PHASES, w[TAPS], sum = 0;
		for (int k = 0; k < TAPS; k++) {
			/* tap k weighs input (p - TAPS/2 + 1 + k); distance from the output point */
			double x = (double)(k - (TAPS / 2 - 1)) - frac;
			double s = x == 0 ? 2 * fc : sin(2 * M_PI * fc * x) / (M_PI * x);
			double r = x / (TAPS / 2);
			double win = r * r < 1 ? bessel_i0(beta * sqrt(1 - r * r)) / bessel_i0(beta) : 0;
			w[k] = s * win;
			sum += w[k];
		}
		int isum = 0, big = 0;
		for (int k = 0; k < TAPS; k++) {
			kern[ph][k] = (s16)lrint(w[k] / sum * 16384);
			isum += kern[ph][k];
			if (abs(kern[ph][k]) > abs(kern[ph][big]))
				big = k;
		}
		kern[ph][big] = (s16)(kern[ph][big] + 16384 - isum);   /* DC gain exactly 1 */
	}
	memset(in_v, 0, sizeof in_v);
	memset(in_t, 0, sizeof in_t);
	n_in = 0;
	p_idx = 0;
	out_t = 0;
	out_step = (u64)llround((double)CPU_HZ / (SCREEN_HZ * OUT_PER_FRAME) * 65536.0);
	out_n = 0;
	snd_out_frames = snd_out_clipped = 0;
}

/* ymz_run sink */
void snd_out_sink(s32 v, u32 rate, u64 time, void *u)
{
	(void)rate;
	(void)u;
	in_v[n_in & (HIST - 1)] = v;
	in_t[n_in & (HIST - 1)] = time << 16;
	n_in++;
	/* output points up to input (n_in - 1 - TAPS/2) have all their taps */
	while (n_in > TAPS / 2 + 1 && out_n < sizeof out_buf / sizeof out_buf[0] / 2) {
		u32 last = n_in - 1 - TAPS / 2;           /* need t[p] <= out_t < t[p+1] with p + 1 <= last */
		while (p_idx + 1 <= last && in_t[(p_idx + 1) & (HIST - 1)] <= out_t)
			p_idx++;
		if (p_idx + 1 > last)
			break;
		u64 t0 = in_t[p_idx & (HIST - 1)], t1 = in_t[(p_idx + 1) & (HIST - 1)];
		u32 ph = out_t <= t0 ? 0 : (u32)(((out_t - t0) * PHASES) / (t1 - t0));
		const s16 *k = kern[ph];
		s64 acc = 0;
		for (int i = 0; i < TAPS; i++) {
			u32 idx = p_idx - (TAPS / 2 - 1) + (u32)i;     /* wraps below 0 at the start: zeros */
			acc += (s64)in_v[idx & (HIST - 1)] * k[i];
		}
		s32 o = (s32)((acc + 8192) >> 14);
		if (o > 32767 || o < -32768) {
			o = o > 32767 ? 32767 : -32768;
			snd_out_clipped++;
		}
		out_buf[out_n * 2] = (s16)o;
		out_buf[out_n * 2 + 1] = (s16)o;
		out_n++;
		snd_out_frames++;
		out_t += out_step;
	}
}

/* take up to max stereo frames made so far; returns how many */
int snd_out_take(s16 *dst, int max)
{
	int n = (int)out_n < max ? (int)out_n : max;
	memcpy(dst, out_buf, (size_t)n * 4);
	memmove(out_buf, out_buf + n * 2, (size_t)(out_n - (u32)n) * 4);
	out_n -= (u32)n;
	return n;
}

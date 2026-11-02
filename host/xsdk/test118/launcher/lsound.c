/* Test 72, the launcher's sound (lsound.h). The kernel's audio driver takes 48 kHz frames of 256 samples x 6 channels,
 * big-endian floats, from a callback that may not do floating point (xsdk docs/HARDWARE.md; the games' sound.c): the
 * mixer thread makes the frames into a ring, the callback hands over the next one or a silent one. The PS2 port's
 * sounds are 16 kHz mono: each plays three output samples per source sample, linearly between them, at its volume
 * (of 128) times LS_GAIN, into front left and right.
 * Test 75: the gallery's music, an MP3 in memory (minimp3, CC0: minimp3.h, minimp3_LICENSE.txt), decoded on the mixer
 * thread a frame at a time, taken to 48 kHz by a 32-tap windowed sinc (160 phases: 44.1 kHz is 147 input samples to
 * 160 output ones), in stereo, looped, faded in and out.
 * Test 97: the sounds' samples from ps2data.bin (launcher.c fills la_sounds; a sound not there is not played), the
 * music's MP3 from inside the .xex (launcher.c inflates it); the decoding as before. */
#include <stdint.h>
#include <string.h>

#include "xsdk/kernel.h"
#include "xsdk/thread.h"

#define MINIMP3_IMPLEMENTATION
#define MINIMP3_ONLY_MP3
#define MINIMP3_NO_SIMD
#define MINIMP3_FLOAT_OUTPUT
#include "minimp3.h"

#include "launch_layout.h"
#include "lsound.h"

#define AF_SAMPLES 256
#define AF_CHANNELS 6
#define AF_WORDS (AF_SAMPLES * AF_CHANNELS)
#define AF_BYTES (AF_WORDS * 4)
#define AF_RING 16       /* power of two */
#define AF_TARGET 8      /* frames kept ready: 43 ms */
#define VOICES 6
#define REQ_N 16         /* power of two */
#define LS_GAIN 0.39f    /* the PS2's volumes kept apart as they are, KAKATTE (88) peaking at 0.41; test 76: half of
                          * test 75's 1.4 (user: "reduce IBARA, KAKATTE and the other sound effects' volume by about
                          * 50%"; the gallery's music, MUS_LEVEL, as it was); test 77: 0.9 x test 76's 0.7 (user:
                          * "further reduce the launcher's volume of everything by 10%", MUS_LEVEL too). Test 89 (user's
                          * todo list: "launcher and gallery: all sounds and music should match the volume of the
                          * games", then "same loudness"): EBU R128 on the PC harness, the game's IBARA voice (VOICE
                          * TEST, VOICE 100%) -25.3 LUFS, test 77's IBARA here -21.1: 0.63 x 10^(-4.2 / 20) */
#define MIX_THREAD 1
#define MIX_STACK (256 * 1024) /* minimp3 keeps its ~16 KB scratch on the stack */

#define MUS_LEVEL 0.086f /* the music under the PS2's menu sounds (a mastered track peaks at full scale); test 77:
                          * 0.9 x test 75's 0.55. Test 89 ("same loudness" as the games): the gallery's MP3 (the
                          * soundtrack's Endress Train, -9.0 LUFS) was -15.1 LUFS at 0.495, the game's own Endress
                          * Train (MUSIC TEST, MUSIC 100%, 150 s of its loop) -30.3: 0.495 x 10^(-15.2 / 20) */
#define MUS_FADE_IN (32.0f / 60) /* seconds: the gallery's fades, 32 frames */
#define MUS_FADE_OUT (32.0f / 60)
#define OUT_HZ 48000
#define RS_PH 160        /* phases a sample apart: 48000 / 300 */
#define RS_TAPS 32       /* x[n - 15] .. x[n + 16] */
#define RS_HALF 15
#define MUS_KEEP 2048    /* input samples kept before the buffer is moved down */
#define MUS_CAP (MUS_KEEP + RS_TAPS + 2 * 1152)

static uint32_t *af_mem;                /* AF_RING frames + one silent */
static volatile unsigned af_w, af_r;
static volatile uint32_t driver;
static volatile int req[REQ_N];
static volatile unsigned req_w, req_r;
static volatile int busy;

struct voice {
	const short *pcm;
	unsigned n, pos; /* pos in output samples: source sample pos / 3, the next one's share (pos % 3) / 3 */
	float gain;
};
static struct voice vc[VOICES];

/* the music: the data (the caller's) and the commands from any thread, the rest the mixer thread's */
static const unsigned char *volatile mus_data;
static volatile unsigned mus_bytes;
static volatile unsigned mus_cmd_n, mus_cmd; /* the latest command (MUS_PLAY / MUS_STOP), their count */
enum { MUS_PLAY = 1, MUS_STOP = 2 };
static volatile int mus_live;               /* decoding (lsound_music_on) */
static volatile unsigned mus_loops;
static unsigned mus_cmd_seen;
static mp3dec_t mus_dec;
static unsigned mus_pos;                    /* the next MP3 byte */
static float mus_in[2][MUS_CAP];            /* decoded input samples, mus_n of them */
static int mus_n, mus_at;                   /* mus_at: the next output's x[n] */
static unsigned mus_hz, mus_acc;            /* the input's rate; the place between x[n] and x[n + 1], of OUT_HZ */
static float mus_gain, mus_target, mus_step;
static float rs_coef[RS_PH][RS_TAPS];
static mp3d_sample_t mus_pcm[MINIMP3_MAX_SAMPLES_PER_FRAME];

/* sin, as libm is not linked: x to -pi..pi, then its series to x^17 */
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

/* the zeroth modified Bessel function of the first kind (the Kaiser window), its series */
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

/* phase p = the output's place p / RS_PH past x[n]: tap k weighs x[n - RS_HALF + k] by FC sinc(FC t), t its distance
 * from the output's place, Kaiser windowed (beta 8) over the taps' span; each phase's taps sum to 1 */
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

/* the MP3 again from its first byte, the decoder's state cleared (a loop: the samples already decoded stay) */
static void mus_restart_stream(void)
{
	mp3dec_init(&mus_dec);
	mus_pos = 0;
}

/* one MP3 frame more into mus_in (at the end: the start again, a loop); 0 = nothing decodable */
static int mus_decode(void)
{
	int tries;

	for (tries = 0; tries < 64; tries++) {
		mp3dec_frame_info_t fi;
		int ns, i;
		if (mus_pos >= mus_bytes) {
			mus_restart_stream();
			mus_loops = mus_loops + 1;
		}
		ns = mp3dec_decode_frame(&mus_dec, mus_data + mus_pos, (int)(mus_bytes - mus_pos), mus_pcm, &fi);
		if (fi.frame_bytes <= 0) { /* no frame in what is left (an ID3v1 tag, the end) */
			mus_pos = mus_bytes;
			continue;
		}
		mus_pos += (unsigned)fi.frame_bytes; /* the bytes skipped before the frame (the ID3 tag) included */
		if (ns <= 0)
			continue;
		mus_hz = (unsigned)fi.hz;
		for (i = 0; i < ns; i++) {
			const float l = mus_pcm[i * fi.channels], r = fi.channels > 1 ? mus_pcm[i * fi.channels + 1] : l;
			mus_in[0][mus_n + i] = l;
			mus_in[1][mus_n + i] = r;
		}
		mus_n += ns;
		return 1;
	}
	return 0;
}

/* the music's n output samples added into l and r */
static void mus_mix(float *l, float *r, int n)
{
	int i;

	for (i = 0; i < n; i++) {
		const float *c, *a, *b;
		float sl = 0, sr = 0;
		int k;
		while (mus_at + RS_TAPS - RS_HALF > mus_n) {
			if (mus_n > MUS_KEEP + RS_HALF) { /* the samples still needed down to the buffer's start */
				const int d = mus_at - RS_HALF;
				memmove(&mus_in[0][0], &mus_in[0][d], sizeof(float) * (size_t)(mus_n - d));
				memmove(&mus_in[1][0], &mus_in[1][d], sizeof(float) * (size_t)(mus_n - d));
				mus_n -= d;
				mus_at -= d;
			}
			if (!mus_decode()) {
				mus_live = 0;
				return;
			}
		}
		c = rs_coef[mus_acc / (OUT_HZ / RS_PH)];
		a = &mus_in[0][mus_at - RS_HALF];
		b = &mus_in[1][mus_at - RS_HALF];
		for (k = 0; k < RS_TAPS; k++) {
			sl += a[k] * c[k];
			sr += b[k] * c[k];
		}
		l[i] += sl * mus_gain;
		r[i] += sr * mus_gain;
		if (mus_gain < mus_target) {
			mus_gain += mus_step;
			if (mus_gain > mus_target)
				mus_gain = mus_target;
		} else if (mus_gain > mus_target) {
			mus_gain -= mus_step;
			if (mus_gain < mus_target)
				mus_gain = mus_target;
		}
		if (mus_target <= 0 && mus_gain <= 0) {
			mus_live = 0;
			return;
		}
		mus_acc += mus_hz ? mus_hz : 44100;
		while (mus_acc >= OUT_HZ) {
			mus_acc -= OUT_HZ;
			mus_at++;
		}
	}
}

/* the latest play / stop */
static void mus_commands(void)
{
	const unsigned n = mus_cmd_n;

	if (n == mus_cmd_seen)
		return;
	__sync_synchronize();
	mus_cmd_seen = n;
	if (mus_cmd == MUS_PLAY && mus_data && mus_bytes) {
		mus_restart_stream();
		memset(&mus_in[0][0], 0, sizeof(float) * RS_HALF); /* silence before the first sample */
		memset(&mus_in[1][0], 0, sizeof(float) * RS_HALF);
		mus_n = mus_at = RS_HALF;
		mus_acc = 0;
		mus_gain = 0;
		mus_target = MUS_LEVEL;
		mus_step = MUS_LEVEL / (MUS_FADE_IN * OUT_HZ);
		mus_live = 1;
	} else if (mus_cmd == MUS_STOP && mus_live) {
		mus_target = 0;
		mus_step = mus_gain / (MUS_FADE_OUT * OUT_HZ);
		if (mus_step <= 0)
			mus_live = 0;
	}
}

static void drv_callback(const uint32_t *context)
{
	const uint32_t d = __atomic_load_n(&driver, __ATOMIC_ACQUIRE);
	const uint32_t *f = af_mem + AF_RING * AF_WORDS;
	const unsigned r = af_r;

	(void)context;
	if (!d)
		return;
	if (r != __atomic_load_n(&af_w, __ATOMIC_ACQUIRE)) {
		f = af_mem + (r & (AF_RING - 1)) * AF_WORDS;
		__atomic_store_n(&af_r, r + 1, __ATOMIC_RELEASE);
	}
	XAudioSubmitRenderDriverFrame(d, (const float *)f);
}

static uint32_t f_bits(float x)
{
	uint32_t bits;

	if (x > 1.0f)
		x = 1.0f;
	if (x < -1.0f)
		x = -1.0f;
	memcpy(&bits, &x, 4);
	return bits;
}

static void make_frame(uint32_t *dst)
{
	float mix[AF_SAMPLES], ml[AF_SAMPLES], mr[AF_SAMPLES];
	int k, i, n = 0;

	memset(mix, 0, sizeof(mix));
	for (k = 0; k < VOICES; k++) {
		struct voice *v = &vc[k];
		if (!v->pcm)
			continue;
		for (i = 0; i < AF_SAMPLES && v->pos / 3 < v->n; i++, v->pos++) {
			const unsigned s = v->pos / 3, fr = v->pos % 3;
			const float a = v->pcm[s], b = s + 1 < v->n ? v->pcm[s + 1] : 0.0f;
			mix[i] += (a + (b - a) * (float)fr * (1.0f / 3.0f)) * v->gain;
		}
		if (v->pos / 3 >= v->n)
			v->pcm = NULL;
		else
			n++;
	}
	busy = n;
	for (i = 0; i < AF_SAMPLES; i++)
		ml[i] = mr[i] = mix[i] * (1.0f / 32768.0f);
	if (mus_live)
		mus_mix(ml, mr, AF_SAMPLES);
	for (i = 0; i < AF_SAMPLES; i++) {
		dst[0 * AF_SAMPLES + i] = f_bits(ml[i]);
		dst[1 * AF_SAMPLES + i] = f_bits(mr[i]);
	}
}

static uint32_t mix_task(void *u)
{
	(void)u;
	rs_init();
	for (;;) {
		while (req_r != req_w) { /* new sounds into a free voice, else the oldest one's */
			const int id = req[req_r & (REQ_N - 1)];
			int k, oldest = 0;
			req_r = req_r + 1;
			if (id < 0 || id >= LSND_COUNT || !la_sounds[id].pcm) /* test 97: not in ps2data.bin: silent */
				continue;
			for (k = 0; k < VOICES && vc[k].pcm; k++)
				if (vc[k].pos > vc[oldest].pos)
					oldest = k;
			if (k == VOICES)
				k = oldest;
			vc[k].n = la_sounds[id].n;
			vc[k].pos = 0;
			vc[k].gain = (float)la_sounds[id].vol * (LS_GAIN / 128.0f);
			vc[k].pcm = la_sounds[id].pcm;
			busy = 1;
		}
		mus_commands();
		while (af_w - __atomic_load_n(&af_r, __ATOMIC_ACQUIRE) < AF_TARGET) {
			make_frame(af_mem + (af_w & (AF_RING - 1)) * AF_WORDS);
			__atomic_store_n(&af_w, af_w + 1, __ATOMIC_RELEASE);
		}
		xsdk_thread_sleep(2);
	}
	return 0;
}

int lsound_start(void)
{
	const XAUDIO_RENDER_DRIVER_CLIENT client = {.callback = drv_callback, .context = 0};
	uint32_t registered = 0;
	HANDLE h;

	af_mem = MmAllocatePhysicalMemoryEx(0, (AF_RING + 1) * AF_BYTES, PAGE_READWRITE, 0, UINT32_MAX, 0);
	if (!af_mem)
		return -1;
	memset(af_mem, 0, (AF_RING + 1) * AF_BYTES);
	__sync_synchronize();
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, MIX_STACK, mix_task, NULL, MIX_THREAD)))
		return -2;
	NtClose(h);
	if (XAudioRegisterRenderDriverClient(&client, &registered) != ERROR_SUCCESS)
		return -3;
	__atomic_store_n(&driver, registered, __ATOMIC_RELEASE);
	return 0;
}

void lsound_play(int id)
{
	req[req_w & (REQ_N - 1)] = id;
	__sync_synchronize();
	req_w = req_w + 1;
	busy = 1;
}

void lsound_stop(void)
{
	const uint32_t d = __atomic_exchange_n(&driver, 0, __ATOMIC_ACQ_REL);

	if (d)
		XAudioUnregisterRenderDriverClient(d);
}

int lsound_busy(void)
{
	return busy || req_r != req_w;
}

int lsound_music_set(const unsigned char *mp3, unsigned n)
{
	static mp3d_sample_t pcm[MINIMP3_MAX_SAMPLES_PER_FRAME];
	static mp3dec_t d;
	mp3dec_frame_info_t fi;
	unsigned pos = 0;
	int tries;

	mp3dec_init(&d);
	for (tries = 0; tries < 16 && pos < n; tries++) { /* the first frame that gives samples */
		const int ns = mp3dec_decode_frame(&d, mp3 + pos, (int)(n - pos), pcm, &fi);
		if (fi.frame_bytes <= 0)
			break;
		pos += (unsigned)fi.frame_bytes;
		if (ns > 0) {
			mus_bytes = n;
			__sync_synchronize();
			mus_data = mp3;
			return fi.hz;
		}
	}
	return 0;
}

static void mus_send(unsigned cmd)
{
	mus_cmd = cmd;
	__sync_synchronize();
	mus_cmd_n = mus_cmd_n + 1;
}

void lsound_music_play(void)
{
	mus_send(MUS_PLAY);
}

void lsound_music_stop(void)
{
	mus_send(MUS_STOP);
}

int lsound_music_on(void)
{
	return mus_live || mus_cmd_n != mus_cmd_seen;
}

unsigned lsound_music_loops(void)
{
	return mus_loops;
}

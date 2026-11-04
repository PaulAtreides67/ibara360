/* Test 99 (the SOUND page's SOUNDTRACK: PS2): the PS2 port's streams (ps2music.c) added to each run of 48 kHz frames
 * taken from the converter, at the output frame of each chip event (ps2music_mix; ps2music_skip for the ones a cut
 * drops), in stereo: the FIFO's right channel goes to the right output now (the converter's two are the same sample,
 * so with no stream every frame is as before).
 *
 * Test 68 (user 2026-10-25: "sound menu. music/sfx/voice/attract volume a mute toggle, and sound test for each
 * song/voice clip"; "reduce the continue countdown beep for Kuro BL by 50%"): the converter gets runtime/ymz770.c's
 * ymz_out, the chip's mix with the sound page's volumes per phrase category and the sound test's own chip added
 * (sound_levels, sound_test_*); the chip-sample check and its hash still take the chip's own sample, so they are as
 * before whatever the volumes. Kuro BL's countdown beep (phrase 92) at half; test 88: at ibara's level (12 of 252).
 *
 * Test 55: the pause (main.c, BACK in a run). While sound_paused is set the driver's callback
 * hands over the silent frame without taking a ready one and counts it as paused, not silent:
 * the cushion the game made before the pause is still queued when it goes on, so nothing runs
 * dry and the game's sound goes on where it stopped. No emulated frame passes meanwhile, so the
 * sound thread makes nothing new.
 *
 * Test 47 (test 46: ibara's first 33 frames take 22.3 ms each, the game polling an I/O register
 * ~28000 times a frame before its first picture, so the 48 ms cushion ran dry three times at EMU
 * 8-25, playing silence): nothing is queued until the game's first sound. The converter's
 * samples are silent (exactly 0) until then (PC harness: ~29 s into ibara, ~31 s into Kuro BL),
 * so they are left out (sound_stats.quiet) and playing starts AF_PRIME frames after the first
 * sample that is not, as it did after the boot before. The driver's calls before it are counted
 * as quiet, not silent. The chip-sample check and its hash see every sample as before.
 *
 * Test 46 (test 42's finding: the sound played from AF_PRIME 6 ready frames and then only held
 * what it started with, plus whatever the frames at boot added or took, so its low point was
 * ~10-16 ms in some runs and ~32 ms in others, and a single lost 16.7 ms emptied it): a larger
 * cushion, held in a range.
 *
 *  - the cushion = the 48 kHz frames queued for the driver after the frame it plays (ready
 *    driver frames x 256 + the FIFO), taken at the top of every pass, before that pass's new
 *    samples, so the lowest is the low point just before a vblank's samples come;
 *  - playing starts (again) at AF_PRIME 9 ready frames (48 ms) instead of 6, AF_TARGET 12;
 *  - the clock follower now keeps the cushion's low point between CUSHION_LOW (26.7 ms) and
 *    CUSHION_HIGH (53.3 ms): a second whose lowest was below plays one sample in DRIFT_EVERY
 *    twice for the next second, one above leaves one out (test 10's rule kept it between an
 *    empty ring and a FIFO above 1600, so it hardly ever ran: DRIFT 0/0 in test 45);
 *  - sound_stats: the cushion now, its low over the last second, its lowest after frame 1200
 *    and where; per emulated frame its lowest (t3log_cushion, the frame log's last column).
 *
 * Test 10 sound, xsdk port (test 39 .xex): the YMZ770 (runtime/ymz770.c, bit-exact with MAME
 * 0.289 on the PC) and the 48 kHz converter (runtime/sndout.c) on hardware thread SOUND_THREAD,
 * feeding the kernel's audio render driver.
 *
 * Every POLL_US the thread replays the register writes the game queued (stamped with the SH-3
 * cycle) up to the last vblank mark and moves the 48 kHz frames into a FIFO, as in tests 10-39.
 * The driver is the kernel's now (xsdk docs/GUIDE.md, "Input and audio through the kernel"):
 * about 188 times a second it calls back on its own audio thread for a frame of 256 samples of 6
 * channels, big-endian floats a channel after another (front left first), and plays the frame it
 * was handed last until it asks again. So this thread turns the FIFO into such frames ahead of
 * time, AF_TARGET of them (42.7 ms, the 4 x 2048 B tests 10-39 kept in libxenon's ring), in
 * cached physical memory; the callback only hands the next ready frame over (no floating point
 * there: whether the kernel's audio thread keeps it has not been checked), or a silent one when
 * none is ready. Playing starts once AF_PRIME frames are ready, and starts over the same way
 * after an underrun. The board's one chip output goes to front left and right.
 *
 * Rates: the game makes one emulated frame per displayed frame, and the kernel's display runs at
 * 60.00 Hz where libxenon's ran at 59.94 (xsdk docs/HARDWARE.md, "Frames read 16667 us"), so
 * the converter makes 48000 / (measured display rate) frames per emulated frame (sndout.c's
 * snd_out_per_frame; 800.8 at 59.94 Hz as before). What is left of the difference between the
 * display's and the driver's clocks is taken out slowly: a FIFO that never fell below
 * DRIFT_HIGH in the last second drops one sample in DRIFT_EVERY, and one that ran the driver dry
 * doubles one in DRIFT_EVERY, for the next second. SOUND_TRIM_ABOVE stays as the last guard.
 *
 * Check: each chip sample goes into a running FNV-1a hash; at the sample counts the PC run reached
 * at every 60th vblank (snd_expect.h, from work/snd/att/ymz.txt) the hash must match. The game is
 * the PC run only until the first input and only with the PC's RTC and a blank EEPROM, so the
 * check stops at the first input. Nothing of the check depends on the driver.
 *
 * As in tests 4-39, nothing here calls printf, malloc or the rest of newlib that keeps state
 * (memcpy and memset only); the game thread owns the log. */
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "xsdk/kernel.h"
#include "xsdk/thread.h"

#include "cv1k.h"
#include "ps2music.h"
#include "romload.h"
#include "sound.h"
#include "snd_expect.h"
#include "snd_expect_blk.h"
#include "xplat.h"

#define AF_SAMPLES 256                    /* a driver frame: 256 samples of each channel */
#define AF_CHANNELS 6
#define AF_WORDS (AF_SAMPLES * AF_CHANNELS)
#define AF_BYTES (AF_WORDS * 4)
#define AF_RING 16                        /* power of two */
#define AF_TARGET 12                      /* ready frames kept: 3072 samples, 64 ms (test 46: 8) */
#define AF_PRIME 9                        /* ready before playing starts (again): 48 ms (test 46: 6) */
#define FIFO_FRAMES 8192                  /* power of two */
#define SOUND_TRIM_ABOVE 4800             /* 100 ms waiting in the FIFO */
#define SOUND_TRIM_TO 1600
#define POLL_US 1000
#define DRIFT_EVERY 500                   /* one sample in this many while correcting (0.2%) */
#define AFTER_LOAD 1200                   /* emulated frames: sound_stats.cushion_min from here on */
#define AX_RING 4                         /* test 98: the menu sounds' own frames (power of two) */
#define AX_AHEAD 2                        /* made ahead of the callback */
#define SE_IDS 4
#define SE_VOICES 3
#define SE_REQ 8                          /* power of two */

struct sound_stats sound_stats;
volatile struct drv_counts drv_counts;
volatile struct sound_check sound_check;
unsigned sound_check_total = SND_EXPECT_N;
static const struct snd_point *snd_tab = snd_expect; /* test 38: the chosen game's (sound_start) */
static unsigned snd_n = SND_EXPECT_N;
volatile unsigned sound_first_input_frame = ~0u;
volatile int sound_paused; /* test 55 */
volatile int sound_mono;   /* test 112 */

uint32_t t3log_gap[T3LOG_N], t3log_late[T3LOG_N];
uint8_t t3log_flags[T3LOG_N];
uint16_t t3log_cushion[T3LOG_N];
volatile uint32_t t3_frame;
volatile unsigned t3_gap_max_us, t3_gap4;

static int16_t fifo[FIFO_FRAMES * 2];
static unsigned f_in, f_out;              /* frames, free running */
static int16_t take[1024 * 2];

/* the driver frames: AF_RING in a ring + one silent, cached physical memory (xsdk docs/GUIDE.md:
 * frames written with plain stores play as written) */
static uint32_t *af_mem;
static volatile unsigned af_w;            /* frames made (this thread) */
static volatile unsigned af_r;            /* frames handed to the driver (the callback) */
static volatile int af_play;              /* this thread sets it once primed, the callback clears it */
static volatile unsigned cut_req;         /* test 97: sound_cut's asks (the game thread) */
volatile unsigned sound_cuts;             /* and the ones done (this thread) */
static volatile int cut_quiet;            /* test 97: the queue's end after a cut is not an underrun */
static unsigned cut_w;                    /* the frames made at the cut */
/* test 101 (user: "still some minor clicks from stage 6 training end"): the frames made after a cut (the loaded
 * attract's sound, which starts wherever the slot's chip was) rise from silence over FADE_IN samples instead of
 * starting at full level after the cut's faded frame or the load's silent gap */
#define FADE_IN 1024u
static unsigned fade_in;
static volatile uint32_t driver;
/* Test 98 (MENU STYLE PS2: the PS2 port's menu sounds, the launcher's lsound.c way): sound_se_play asks (the game
 * thread), this thread mixes the asked sounds (16 kHz: three output samples a source sample, linearly between them)
 * into the frames it makes (make_frame), so they come after the queued cushion as the game's own sounds do (27-64 ms).
 * While the game is paused (sound_paused: the pause menus) or nothing plays (af_play 0: before the game's first
 * sound, after an underrun) the callback has only the silent frame to give: then this thread makes AX_RING frames of
 * their own, the menu sounds alone, AX_AHEAD ahead, and the callback gives those instead of the silent one */
static struct {
	const int16_t *pcm;
	unsigned n;
	float gain;
} se_tab[SE_IDS];
static struct {
	const int16_t *pcm;
	unsigned n, pos;
	float gain;
} sev[SE_VOICES];
static volatile int se_req[SE_REQ];
static volatile unsigned se_req_w, se_req_r;
static int se_on;                         /* a voice plays (this thread) */
static volatile unsigned ax_w, ax_r;      /* the menu sounds' own frames made (this thread), given (the callback) */
volatile unsigned sound_se_played;        /* test 98: menu sounds started (the log's census) */
static uint64_t drv_rate_t0;
static unsigned drv_rate_n0;

static uint32_t hash = 2166136261u;
static unsigned ck;                       /* next checkpoint */

static uint64_t tb_now(void)
{
	uint32_t u, l, u2;

	do {
		__asm__ volatile("mftbu %0" : "=r"(u));
		__asm__ volatile("mftbl %0" : "=r"(l));
		__asm__ volatile("mftbu %0" : "=r"(u2));
	} while (u != u2);
	return ((uint64_t)u << 32) | l;
}

static unsigned ticks_us(uint64_t t)
{
	return (unsigned)(t * 1000000 / PPC_TIMEBASE_FREQ);
}

/* ymz_run sink: hash and check the chip sample, then on to the 48 kHz converter; test 68: the converter gets the
 * host's mix (ymz_out: the sound page's volumes, the sound test), the check the chip's own sample */
static void sink(s32 v, u32 rate, u64 time, void *u)
{
	hash = (hash ^ (uint32_t)v) * 16777619u;
	if (sound_check.state == SCHK_RUNNING && ymz_samples == snd_tab[ck].samples) {
		if (snd_tab[ck].frame >= sound_first_input_frame) {
			sound_check.frame = snd_tab[ck].frame;
			sound_check.state = SCHK_STOPPED;
		} else if (hash != snd_tab[ck].hash) {
			sound_check.frame = snd_tab[ck].frame;
			sound_check.got = hash;
			sound_check.want = snd_tab[ck].hash;
			sound_check.state = SCHK_MISMATCH;
		} else {
			sound_check.ok++;
			if (++ck == snd_n)
				sound_check.state = SCHK_PASSED;
		}
	}
	snd_out_sink(ymz_out, rate, time, u);
}

/* The kernel's audio thread, each time the driver wants a frame: the next ready one, else the
 * silent one. Integer work only. */
static void drv_callback(const uint32_t *context)
{
	const uint32_t d = __atomic_load_n(&driver, __ATOMIC_ACQUIRE);
	const uint32_t *f = af_mem + AF_RING * AF_WORDS;  /* the silent frame */
	unsigned r, w;

	(void)context;
	if (!d) { /* the first calls can come before registering has returned the driver */
		drv_counts.early = drv_counts.early + 1;
		return;
	}
	drv_counts.calls = drv_counts.calls + 1;
	r = af_r;
	w = __atomic_load_n(&af_w, __ATOMIC_ACQUIRE);
	if (sound_paused) { /* test 55: the ready frames wait for the game to go on */
		drv_counts.paused = drv_counts.paused + 1;
		r = ax_r;
		if (r != __atomic_load_n(&ax_w, __ATOMIC_ACQUIRE)) { /* test 98: a menu sound's frame */
			f = af_mem + (AF_RING + 1 + (r & (AX_RING - 1))) * AF_WORDS;
			__atomic_store_n(&ax_r, r + 1, __ATOMIC_RELEASE);
		}
	} else if (af_play && r != w) {
		f = af_mem + (r & (AF_RING - 1)) * AF_WORDS;
		__atomic_store_n(&af_r, r + 1, __ATOMIC_RELEASE);
		drv_counts.played = drv_counts.played + 1;
	} else {
		if (af_play) {
			af_play = 0;
			if (cut_quiet) /* test 97: the cut's silence ran out (a load's gap) */
				cut_quiet = 0;
			else
				sound_stats.underruns = sound_stats.underruns + 1;
		}
		if (sound_stats.heard)
			drv_counts.silent = drv_counts.silent + 1;
		else
			drv_counts.quiet = drv_counts.quiet + 1;
		r = ax_r;
		if (r != __atomic_load_n(&ax_w, __ATOMIC_ACQUIRE)) { /* test 98: a menu sound's frame */
			f = af_mem + (AF_RING + 1 + (r & (AX_RING - 1))) * AF_WORDS;
			__atomic_store_n(&ax_r, r + 1, __ATOMIC_RELEASE);
		}
	}
	if (XAudioSubmitRenderDriverFrame(d, (const float *)f) != ERROR_SUCCESS)
		drv_counts.failed = drv_counts.failed + 1;
}

/* one driver frame from the FIFO: the mono chip output (both converter channels carry it) into
 * front left and right; drift = -1 leaves out, 1 doubles, one input sample in DRIFT_EVERY */
static unsigned drift_count;

/* test 98: the menu sounds' next output sample (0 when none plays) */
static float se_next(void)
{
	float x = 0.0f;
	int k;

	for (k = 0; k < SE_VOICES; k++) {
		const unsigned s = sev[k].pos / 3, fr = sev[k].pos % 3;
		float a, b;
		if (!sev[k].pcm)
			continue;
		if (s >= sev[k].n) {
			sev[k].pcm = NULL;
			continue;
		}
		a = sev[k].pcm[s];
		b = s + 1 < sev[k].n ? sev[k].pcm[s + 1] : 0.0f;
		x += (a + (b - a) * (float)fr * (1.0f / 3.0f)) * sev[k].gain;
		sev[k].pos++;
	}
	return x;
}

/* test 98: the asked menu sounds into voices (a free one, else the oldest); se_on = one plays */
static void se_take(void)
{
	int k;

	while (se_req_r != __atomic_load_n(&se_req_w, __ATOMIC_ACQUIRE)) {
		const int id = se_req[se_req_r & (SE_REQ - 1)];
		int oldest = 0;
		se_req_r = se_req_r + 1;
		if (id < 0 || id >= SE_IDS || !se_tab[id].pcm)
			continue;
		for (k = 0; k < SE_VOICES && sev[k].pcm; k++)
			if (sev[k].pos > sev[oldest].pos)
				oldest = k;
		if (k == SE_VOICES)
			k = oldest;
		sev[k].n = se_tab[id].n;
		sev[k].pos = 0;
		sev[k].gain = se_tab[id].gain;
		sev[k].pcm = se_tab[id].pcm;
		sound_se_played = sound_se_played + 1;
	}
	se_on = 0;
	for (k = 0; k < SE_VOICES; k++)
		se_on |= sev[k].pcm != NULL;
}

/* test 98: a frame of the menu sounds alone (while the callback has no game frame to give) */
static void make_se_frame(uint32_t *dst)
{
	unsigned i;

	for (i = 0; i < AF_SAMPLES; i++) {
		float x = se_next();
		uint32_t bits;
		x = x > 1.0f ? 1.0f : x < -1.0f ? -1.0f : x;
		memcpy(&bits, &x, 4);
		dst[0 * AF_SAMPLES + i] = bits;
		dst[1 * AF_SAMPLES + i] = bits;
	}
}

void sound_se_set(int id, const int16_t *pcm, unsigned n, float gain)
{
	if (id < 0 || id >= SE_IDS)
		return;
	se_tab[id].n = n;
	se_tab[id].gain = gain;
	__sync_synchronize();
	se_tab[id].pcm = pcm;
}

void sound_se_play(int id)
{
	const unsigned w = se_req_w;

	if (w - se_req_r >= SE_REQ)
		return;
	se_req[w & (SE_REQ - 1)] = id;
	__atomic_store_n(&se_req_w, w + 1, __ATOMIC_RELEASE);
}

static void make_frame(uint32_t *dst, int drift)
{
	unsigned i;

	for (i = 0; i < AF_SAMPLES; i++) {
		const int16_t v = fifo[(f_out & (FIFO_FRAMES - 1)) * 2], vr = fifo[(f_out & (FIFO_FRAMES - 1)) * 2 + 1];
		float x = (float)v * (1.0f / 32768.0f), xr = (float)vr * (1.0f / 32768.0f);
		uint32_t bits, bits_r;

		if (fade_in) { /* test 101 */
			const float g = (float)(FADE_IN - fade_in) * (1.0f / FADE_IN);
			x *= g;
			xr *= g;
			fade_in--;
		}

		if (sound_mono) { /* test 112: MONO (a PS2 stream's two channels as one) */
			x = (x + xr) * 0.5f;
			xr = x;
		}

		if (se_on) { /* test 98: the menu sounds over the game's */
			const float e = se_next();
			x += e;
			x = x > 1.0f ? 1.0f : x < -1.0f ? -1.0f : x;
			xr += e;
			xr = xr > 1.0f ? 1.0f : xr < -1.0f ? -1.0f : xr;
		}

		memcpy(&bits, &x, 4);
		memcpy(&bits_r, &xr, 4); /* test 99: the right channel's own (a PS2 stream is stereo) */
		dst[0 * AF_SAMPLES + i] = bits;
		dst[1 * AF_SAMPLES + i] = bits_r;
		if (drift && ++drift_count >= DRIFT_EVERY) {
			drift_count = 0;
			if (drift < 0 && f_in - f_out >= 2) {
				f_out += 2; /* this sample and the next one: one left out */
				sound_stats.dropped++;
				continue;
			}
			if (drift > 0) {
				sound_stats.doubled++; /* this sample again for the next one */
				continue;
			}
		}
		f_out++;
	}
}

/* test 97: sound_cut's work. The frame at af_r may be the callback's next (left as it is), the one after it fades out
 * over its 256 samples, the later ones are silent; the samples taken from the chip but not yet in a frame and the
 * ones still in sndout are dropped. Then the queue's end is not counted as an underrun (cut_quiet) */
static void cut_queue(void)
{
	const unsigned r = __atomic_load_n(&af_r, __ATOMIC_ACQUIRE), w = af_w;
	unsigned k;

	for (k = r + 1; k != w && k - r < AF_RING; k++) {
		uint32_t *dst = af_mem + (k & (AF_RING - 1)) * AF_WORDS;
		unsigned i;
		for (i = 0; i < AF_SAMPLES; i++) {
			int c;
			for (c = 0; c < 2; c++) { /* test 99: each channel its own (a PS2 stream is stereo) */
				float x;
				uint32_t bits = dst[c * AF_SAMPLES + i];
				memcpy(&x, &bits, 4);
				x = k == r + 1 ? x * (float)(AF_SAMPLES - 1 - i) * (1.0f / AF_SAMPLES) : 0.0f;
				memcpy(&bits, &x, 4);
				dst[c * AF_SAMPLES + i] = bits;
			}
		}
	}
	__sync_synchronize(); /* the frames in memory before the callback takes them */
	{
		int n;
		while ((n = snd_out_take(take, 1024)) > 0)
			ps2music_skip(n); /* test 99: the stream's place moves on with the dropped frames */
	}
	f_out = f_in;
	fade_in = FADE_IN; /* test 101 */
	cut_w = w;
	cut_quiet = 1;
	sound_cuts = cut_req;
}

void sound_cut(void)
{
	cut_req = cut_req + 1;
}

static uint32_t thread_main(void *u)
{
	const uint64_t poll = PPC_TIMEBASE_FREQ * POLL_US / 1000000;
	uint64_t next, sec_start, run_ticks = 0, run_max = 0, prev_top = 0, late_ticks = 0;
	unsigned cush_low = ~0u, ready_low = ~0u, under_seen = 0;
	uint32_t cur_f;

	(void)u;
	sound_stats.alive = 1;
	cur_f = (uint32_t)frame_count;
	t3_frame = cur_f;
	next = sec_start = tb_now();
	for (;;) {
		uint64_t t0 = tb_now(), t1;
		uint32_t f = (uint32_t)frame_count, gap_us = 0, late_us = 0;
		unsigned level, ready, cush;
		uint16_t c16;
		int n;

		/* test 46: the cushion before this pass's samples (0 while not playing) */
		ready = af_w - __atomic_load_n(&af_r, __ATOMIC_ACQUIRE);
		cush = af_play ? ready * AF_SAMPLES + (f_in - f_out) : 0;
		c16 = cush > 0xFFFF ? 0xFFFF : (uint16_t)cush;
		if (af_play) {
			if (cush < cush_low)
				cush_low = cush;
			if (f >= AFTER_LOAD && cush < sound_stats.cushion_min) {
				sound_stats.cushion_min = cush;
				sound_stats.cushion_min_frame = f;
			}
		}
		sound_stats.cushion = cush;

		/* the gap that ended here; frames it reached into get it too */
		if (prev_top) {
			gap_us = ticks_us(t0 - prev_top);
			late_us = ticks_us(late_ticks);
			if (f >= 1200) {
				if (gap_us > t3_gap_max_us)
					t3_gap_max_us = gap_us;
				if (gap_us > 4000)
					t3_gap4 = t3_gap4 + 1;
			}
		}
		if (f != cur_f) {
			uint32_t k;
			for (k = cur_f; k <= f && k - cur_f < 64; k++)
				if (k < T3LOG_N) {
					if (k != cur_f) {
						t3log_gap[k] = t3log_late[k] = t3log_flags[k] = 0;
						t3log_cushion[k] = c16;
					} else if (c16 < t3log_cushion[k]) {
						t3log_cushion[k] = c16;
					}
					if (gap_us > t3log_gap[k])
						t3log_gap[k] = gap_us;
					if (late_us > t3log_late[k])
						t3log_late[k] = late_us;
				}
			__sync_synchronize(); /* the slots before the count that makes them final */
			t3_frame = f;
			cur_f = f;
		} else if (f < T3LOG_N) {
			if (gap_us > t3log_gap[f])
				t3log_gap[f] = gap_us;
			if (late_us > t3log_late[f])
				t3log_late[f] = late_us;
			if (c16 < t3log_cushion[f])
				t3log_cushion[f] = c16;
		}
		if (sound_stats.underruns != under_seen) {
			under_seen = sound_stats.underruns;
			if (f < T3LOG_N)
				t3log_flags[f] |= T3F_UNDER;
			ready_low = 0;
		}

		if (cut_req != sound_cuts) /* test 97 */
			cut_queue();
		else if (cut_quiet && (int)(__atomic_load_n(&af_r, __ATOMIC_ACQUIRE) - cut_w) > AF_TARGET)
			cut_quiet = 0; /* the frames after the cut's are playing: no gap came; test 99: signed (test 98's QUIT TO
			                * TRAINING MODE logs: while the cut's own faded frames played, af_r - cut_w wrapped to a
			                * huge count, cut_quiet went at once and the load's silent gap counted as an underrun) */
		n = ymz_run(sink, NULL);
		t1 = tb_now();
		if (n > 0) {
			run_ticks += t1 - t0;
			if (t1 - t0 > run_max)
				run_max = t1 - t0;
		}
		while ((n = snd_out_take(take, 1024)) > 0) {
			int i;
			ps2music_mix(take, n); /* test 99: the PS2 stream, if one plays */
			for (i = 0; i < n; i++) {
				if (!sound_stats.heard) { /* test 47: nothing queued before the first sound */
					if (!take[2 * i] && !take[2 * i + 1]) {
						sound_stats.quiet++;
						continue;
					}
					sound_stats.first_sound_frame = f;
					__sync_synchronize(); /* the frame before the flag the game thread logs it by */
					sound_stats.heard = 1;
				}
				if (f_in - f_out >= FIFO_FRAMES) {
					sound_stats.overflow++;
					continue;
				}
				fifo[(f_in & (FIFO_FRAMES - 1)) * 2] = take[2 * i];
				fifo[(f_in & (FIFO_FRAMES - 1)) * 2 + 1] = take[2 * i + 1];
				f_in++;
			}
		}

		/* test 98: the menu sounds asked for; while the callback gives no game frames, their own frames */
		se_take();
		if (se_on && (sound_paused || !af_play)) {
			while (ax_w - __atomic_load_n(&ax_r, __ATOMIC_ACQUIRE) < AX_AHEAD) {
				make_se_frame(af_mem + (AF_RING + 1 + (ax_w & (AX_RING - 1))) * AF_WORDS);
				__sync_synchronize(); /* the frame in memory before its count */
				__atomic_store_n(&ax_w, ax_w + 1, __ATOMIC_RELEASE);
			}
			se_take(); /* se_on again: the last voice may have ended in them */
		}

		/* the driver frames: as many as fit up to AF_TARGET ready (the frame handed over last stays
		 * the driver's until its next call, so at most AF_RING - 1 ahead) */
		level = f_in - f_out;
		while (level >= AF_SAMPLES + 1 && af_w - __atomic_load_n(&af_r, __ATOMIC_ACQUIRE) < AF_TARGET) {
			make_frame(af_mem + (af_w & (AF_RING - 1)) * AF_WORDS, sound_stats.drift);
			__sync_synchronize(); /* the frame in memory before its count */
			af_w = af_w + 1;
			sound_stats.made++;
			level = f_in - f_out;
		}
		ready = af_w - __atomic_load_n(&af_r, __ATOMIC_ACQUIRE);
		if (ready < ready_low && af_play)
			ready_low = ready;
		if (!af_play && ready >= AF_PRIME)
			af_play = 1;
		if (level > SOUND_TRIM_ABOVE) {
			sound_stats.trims++;
			sound_stats.trimmed += level - SOUND_TRIM_TO;
			f_out += level - SOUND_TRIM_TO;
			level = SOUND_TRIM_TO;
		}
		sound_stats.fifo = level;
		sound_stats.ready = ready;

		if (t0 - sec_start >= PPC_TIMEBASE_FREQ) {
			const unsigned played = drv_counts.played + drv_counts.silent + drv_counts.paused;
			sound_stats.run_us = ticks_us(run_ticks);
			sound_stats.run_max_us = ticks_us(run_max);
			sound_stats.ready_low = ready_low == ~0u ? 0 : ready_low;
			sound_stats.cushion_low = cush_low == ~0u ? 0 : cush_low;
			/* test 46: the next second's correction from this one's lowest cushion */
			if (af_play && cush_low != ~0u && cush_low < CUSHION_LOW)
				sound_stats.drift = 1;
			else if (af_play && cush_low != ~0u && cush_low > CUSHION_HIGH)
				sound_stats.drift = -1;
			else
				sound_stats.drift = 0;
			if (drv_rate_t0)
				drv_counts.rate_x10 = (unsigned)((uint64_t)(played - drv_rate_n0) * 10 * PPC_TIMEBASE_FREQ /
				                                 (t0 - drv_rate_t0));
			drv_rate_t0 = t0;
			drv_rate_n0 = played;
			run_ticks = run_max = 0;
			cush_low = ready_low = ~0u;
			sec_start = t0;
		}
		sound_stats.loops++;
		prev_top = t0;

		next += poll;
		{
			const uint64_t ws = tb_now();
			uint64_t we, last_yield = ws;

			smt_low();
			while ((we = tb_now()) < next) {
				smt_pause();
				if (we - last_yield > poll / 8) { /* every ~125 us: a ready kernel thread runs */
					NtYieldExecution();
					smt_low();
					last_yield = tb_now();
				}
			}
			smt_medium();
			/* past the deadline, or past the start when the pass overran it */
			late_ticks = we - (next > ws ? next : ws);
			if (we - next > poll)        /* fell behind: no catch-up burst */
				next = we;
		}
	}
	return 0;
}

/* ---- test 68: the sound page ---------------------------------------------------------------------------------- */

/* Both games' sound ROMs have the same phrases (all but ibara's 0, Kuro BL's own track; work/g68/snd): ibara's sound
 * list (its name table at 0C1F5CD0 is indexed by phrase) has the music at 0-33 (each sequence plays one phrase on
 * channel 0), the effects at 64-125 ("exp sky s1" ... "2p big bomb exp") and the voices at 128-193 ("HAHAHA" ...
 * "IBARA"); 34-63 and 194-255 are empty or junk entries, 57-63 short effects without names. Kuro BL's continue
 * countdown keys phrase 92 ("continue") every 120 vblanks at volume 252 (twice its 128 = 1; work/g68/snd/b62c, the
 * countdown run out): user, "unbearably loud", at half there. */
static int snd_set;

void sound_categories(int set)
{
	int p;

	snd_set = set;
	memset(ymz_phrase_force_main, 0, sizeof(ymz_phrase_force_main));
	ymz_phrase_force_main[128 + 44] = 1; /* 1P IKUZE, phrase 172 */
	ymz_phrase_force_main[128 + 50] = 1; /* 2P IKUZE, phrase 178 */
	for (p = 0; p < 256; p++)
		ymz_phrase_cat[p] = p < 34 ? YMZ_CAT_MUSIC : p < 128 ? YMZ_CAT_SFX : YMZ_CAT_VOICE;
	if (set == SET_IBARABLK) /* test 88 (user's todo list: "reduce the continue countdown beep volume to be the same as
	                          * ibara/arrange"): ibara keys phrase 92 at volume2 12 (work/g68/snd/t62), Kuro BL at 252:
	                          * 12 / 256 of it = 11.8 (test 68's half left it ~10 times ibara's) */
		ymz_phrase_k[SND_BLK_BEEP] = 12;
	ymz_scaled = 1;
}

static int32_t q15(int pct)
{
	return pct <= 0 ? 0 : pct >= 100 ? 32768 : (int32_t)(pct * 32768 / 100);
}

void sound_levels(int music, int sfx, int voice, int attract, int in_attract, int mute, int start_voice)
{
	const int a = in_attract ? attract : 100;

	/* test 100: a run's gains and the attract's; each phrase keeps those of the time it was keyed (ymz_attract) */
	ymz_gain_main[YMZ_CAT_MUSIC] = mute ? 0 : q15(music);
	ymz_gain_main[YMZ_CAT_SFX] = mute ? 0 : q15(sfx);
	ymz_gain_main[YMZ_CAT_VOICE] = mute ? 0 : q15(voice);
	ymz_gain_att[YMZ_CAT_MUSIC] = mute ? 0 : q15(music * attract / 100);
	ymz_gain_att[YMZ_CAT_SFX] = mute ? 0 : q15(sfx * attract / 100);
	/* The start-of-run call ("IKUZE") uses full voice volume regardless of the attract volume. */
	ymz_gain_att[YMZ_CAT_VOICE] = mute ? 0 : q15(voice * (start_voice ? 100 : attract) / 100);
	ymz_attract = in_attract;
	ymz_gain_test[YMZ_CAT_MUSIC] = mute ? 0 : q15(music); /* the sound test as in a run */
	ymz_gain_test[YMZ_CAT_SFX] = mute ? 0 : q15(sfx);
	ymz_gain_test[YMZ_CAT_VOICE] = mute ? 0 : q15(voice);
	ps2music_levels(mute ? 0 : q15(music * a / 100), ymz_gain_test[YMZ_CAT_MUSIC]); /* test 99 */
}

/* a track as the game's driver plays it (work/g68/snd/seqdump.py): sequence slot 0, timer 0, no channels to stop on
 * its end, SQON; each sequence keys its phrase looping on channel 0 for its length, then stops it. The intro once
 * (02), then loop again and again (03: the sequencer starts it over at its end); loop = intro: that one again and
 * again; loop < 0: once; vol = channel 0's volume as the game's driver keeps it for the track (0: the sequences') */
void sound_test_music(int intro, int loop, int vol)
{
	static const uint8_t regs[] = {0x82, 0x83, 0x84, 0x85, 0x86};
	unsigned i;

	ymz_test_cmd(YMZT_RESET);
	if (vol > 0) /* the game's driver's level for the track on channel 0 (the sequences' own is 0x40) */
		ymz_test_cmd(YMZT_VOL0(vol));
	ymz_test_cmd(0x8000u | (uint32_t)intro);
	for (i = 0; i < sizeof(regs); i++)
		ymz_test_cmd((uint32_t)regs[i] << 8);
	ymz_test_cmd(0x8100u | (loop == intro ? 0x03u : 0x02u));
	if (loop >= 0 && loop != intro)
		ymz_test_cmd(YMZT_LOOP(loop));
}

/* a voice once on channel 1 (a song on channel 0 goes on), at the game's usual voice volume (0x40) and pan (0x08) */
void sound_test_voice(int phrase)
{
	ymz_test_cmd(0x4400u | (uint32_t)phrase);
	ymz_test_cmd(0x4540u);
	ymz_test_cmd(0x4608u);
	ymz_test_cmd(0x4702u);
}

void sound_test_stop(void)
{
	ymz_test_cmd(YMZT_RESET);
}

int sound_test_busy(void)
{
	return ymz_test_busy;
}

void sound_stop(void)
{
	const uint32_t d = __atomic_exchange_n(&driver, 0, __ATOMIC_ACQ_REL);

	if (d)
		XAudioUnregisterRenderDriverClient(d);
}

int sound_start(const uint8_t *rom, uint32_t bytes, int check, int set, unsigned display_hz_milli)
{
	const XAUDIO_RENDER_DRIVER_CLIENT client = {.callback = drv_callback, .context = 0};
	uint32_t registered = 0;
	HANDLE h;

	if (set == SET_IBARABLK) {
		snd_tab = snd_expect_blk;
		snd_n = SND_EXPECT_BLK_N;
	}
	sound_check_total = snd_n;
	/* test 98: AX_RING frames more, the menu sounds' own (after the silent one) */
	af_mem = MmAllocatePhysicalMemoryEx(0, (AF_RING + 1 + AX_RING) * AF_BYTES, PAGE_READWRITE, 0, UINT32_MAX, 0);
	if (!af_mem)
		return -1;
	memset(af_mem, 0, (AF_RING + 1 + AX_RING) * AF_BYTES);
	__sync_synchronize();
	/* 48 kHz over the emulated frames per second, which are the display's */
	if (display_hz_milli > 55000 && display_hz_milli < 65000)
		snd_out_per_frame = 48000000.0 / display_hz_milli;
	sound_stats.per_frame_x100 = (unsigned)(snd_out_per_frame * 100 + 0.5);
	sound_stats.cushion_min = ~0u; /* test 46: none yet */
	ymz_init(rom, bytes);
	sound_categories(set);
	snd_out_init();
	/* test 99: the PS2 streams' events at sndout's output frames (its spacing, computed as snd_out_init does) */
	ps2music_attach((uint64_t)llround((double)CPU_HZ / (SCREEN_HZ * snd_out_per_frame) * 65536.0));
	memset((void *)&sound_check, 0, sizeof(sound_check));
	sound_check.state = check ? SCHK_RUNNING : SCHK_OFF;
	drv_counts.reg_result = XAudioRegisterRenderDriverClient(&client, &registered);
	if (drv_counts.reg_result != ERROR_SUCCESS)
		return -2;
	__atomic_store_n(&driver, registered, __ATOMIC_RELEASE);
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, thread_main, NULL, SOUND_THREAD)))
		return -3;
	NtClose(h);
	return 0;
}

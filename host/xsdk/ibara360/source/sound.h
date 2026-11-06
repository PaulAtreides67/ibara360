/* Test 10 sound thread, xsdk port (test 39 .xex): see sound.c. */
#ifndef SOUND_H
#define SOUND_H

#include <stdint.h>

#define SOUND_THREAD 3 /* core 1's second thread (blitter band T2 is the first) */
#define CUSHION_LOW 1280  /* test 46: 48 kHz samples; a second's lowest cushion below this: doubling */
#define CUSHION_HIGH 2560 /* and above this: dropping */

/* written by the sound thread (and the counts the driver's callback keeps); the card reads them */
struct sound_stats {
	unsigned loops;
	unsigned run_us;        /* time in ymz_run over the last second */
	unsigned run_max_us;    /* longest single ymz_run call in the last second */
	unsigned fifo;          /* 48 kHz frames made but not yet turned into driver frames */
	unsigned ready;         /* driver frames (256 samples) made and not yet handed to the driver */
	unsigned ready_low;     /* the fewest ready over the last second */
	unsigned underruns;     /* the driver asked with none ready after playing had started */
	unsigned trims;         /* frames dropped because the FIFO grew past SOUND_TRIM_ABOVE */
	unsigned trimmed;
	unsigned overflow;      /* frames lost because the FIFO was full */
	unsigned made;          /* driver frames made */
	unsigned dropped, doubled; /* samples left out / played twice to follow the driver's clock */
	int drift;              /* the correction running: -1 dropping, 1 doubling, 0 none */
	unsigned per_frame_x100; /* 48 kHz frames per emulated frame, x100 (800.80 at 59.94 Hz) */
	int alive;
	/* test 46: 48 kHz frames queued after the one the driver plays (ready x 256 + fifo), 0 while
	 * not playing: at the top of the last pass, the lowest over the last second, the lowest from
	 * emulated frame 1200 on (~0u: none yet) and that frame */
	unsigned cushion, cushion_low, cushion_min, cushion_min_frame;
	/* test 47: the game's first sound has come (before it nothing is queued), the emulated frame
	 * it came in and the silent 48 kHz frames left out before it */
	int heard;
	unsigned first_sound_frame, quiet;
};
extern struct sound_stats sound_stats;

/* the kernel's audio driver, counted in its callback */
struct drv_counts {
	unsigned calls;         /* callbacks */
	unsigned played;        /* frames handed over from the ring */
	unsigned quiet;         /* test 47: silent frames handed over before the game's first sound */
	unsigned silent;        /* silent frames handed over after it (priming, after an underrun) */
	unsigned failed;        /* XAudioSubmitRenderDriverFrame errors */
	unsigned paused;        /* test 55: silent frames handed over while the game was paused */
	unsigned early;         /* calls before the driver number was known */
	uint32_t reg_result;    /* XAudioRegisterRenderDriverClient's result */
	unsigned rate_x10;      /* frames the driver took per second over the last one, x10 (187.5 = 48 kHz) */
};
extern volatile struct drv_counts drv_counts;

/* per emulated frame: the sound thread's longest loop gap and wait lateness that touched it (us),
 * and flags (T3F_UNDER: the driver ran dry in it), for the frame log */
#define T3LOG_N 216000             /* frames, as framelog.c's FLOG_MAX */
#define T3F_UNDER 2
extern uint32_t t3log_gap[T3LOG_N], t3log_late[T3LOG_N];
extern uint8_t t3log_flags[T3LOG_N];
extern uint16_t t3log_cushion[T3LOG_N]; /* test 46: the frame's lowest sound_stats.cushion (0 = not playing) */
extern volatile uint32_t t3_frame;   /* frames below this one have their final t3log_* entry */
extern volatile unsigned t3_gap_max_us, t3_gap4;  /* after the start: the longest loop gap, gaps over 4 ms */

/* chip-sample check against the PC attract run (snd_expect.h; test 38: snd_expect_blk.h for
 * ibarablk): the PC run's chip sample count and running hash at every 60th vblank */
struct snd_point {
	uint32_t frame, samples, hash;
};
enum { SCHK_OFF, SCHK_RUNNING, SCHK_PASSED, SCHK_MISMATCH, SCHK_STOPPED };
struct sound_check {
	int state;
	unsigned ok;            /* checkpoints that matched */
	unsigned frame;         /* emulated frame of the mismatch or of the stop */
	uint32_t got, want;     /* hashes at the mismatch */
};
extern volatile struct sound_check sound_check;
extern unsigned sound_check_total;

/* the game thread sets this to frame_count at the first input that is not idle */
extern volatile unsigned sound_first_input_frame;

/* test 55: the game thread sets this while the game is paused: the driver gets silence and the
 * frames made before the pause stay queued */
extern volatile int sound_paused;
/* test 112: the SOUND page's AUDIO MONO (cfg.mono, main.c sets it): both channels (L + R) / 2 */
extern volatile int sound_mono;

/* test 68: the sound page (main.c). sound_start sorts the phrases into music, effects and voices and halves Kuro
 * BL's continue countdown beep (SND_BLK_BEEP); sound_levels = the volumes in percent (music, effects, voices; attract
 * = the share they get while the game is idle, in_attract = it is), mute = no sound at all, the sound test included;
 * the sound test plays a track (its intro sequence, then its loop sequence again and again; loop = intro: that one
 * again and again; loop < 0: once) or a voice phrase on a chip of its own, the game's sound faded out meanwhile */
#define SND_BLK_BEEP 92
void sound_categories(int set);
void sound_levels(int music, int sfx, int voice, int attract, int in_attract, int mute);
void sound_test_music(int intro, int loop, int vol);
void sound_test_voice(int phrase);
void sound_test_stop(void);
int sound_test_busy(void);

/* the ROM is the chip's view (U23+U24 word-swapped) with 16 readable bytes past its end;
 * check = compare against the PC run (the RTC must be the PC default); set = SET_IBARA /
 * SET_IBARABLK picks the PC run's table; display_hz_milli = the display's measured rate (the
 * emulated frames per second), from which the 48 kHz frames per emulated frame follow (0 = the
 * 59.94 Hz of tests 10-39). 0 = started */
int sound_start(const uint8_t *rom, uint32_t bytes, int check, int set, unsigned display_hz_milli);

/* test 72: before a hand-off to another title: the kernel's audio driver client unregistered (the callback stops) */
void sound_stop(void);

/* test 97 (user: "leaving a TRAINING session still lets a fraction of a second of the session's audio trail into the
 * TRAINING menu screen"; QUIT TO TRAINING MODE's underrun): the game thread asks, before a load back to the attract;
 * the sound thread fades the next queued driver frame out, silences the rest and drops the chip samples not yet made
 * into frames, so the queue's end (and the load's gap, not counted as an underrun) is quiet */
void sound_cut(void);
extern volatile unsigned sound_cuts; /* cuts done (the sound thread) */

/* test 98 (MENU STYLE PS2): the PS2 port's menu sounds mixed into the output. sound_se_set: sound id's samples (16 kHz
 * mono, native int16, kept by the caller) and gain (output units per sample unit: the launcher's PS2 volume x
 * LS_GAIN / 128 / 32768), before the first play; sound_se_play: from its start (game thread). Heard over the game's
 * sound, and alone while the game is paused or silent (sound.c) */
void sound_se_set(int id, const int16_t *pcm, unsigned n, float gain);
void sound_se_play(int id);
extern volatile unsigned sound_se_played; /* the sounds started (the sound thread) */

#endif

/* Test 72, the launcher's sound: the PS2 port's menu sounds and title voices (gen/launcher, LSND_*), mixed at 48 kHz
 * on a thread of their own, handed to the kernel's audio driver as the games' sound.c does; test 75: the gallery's
 * music, in stereo. */
#ifndef LSOUND_H
#define LSOUND_H

#include <stdint.h>

/* the driver client and the mixer thread; 0 = started */
int lsound_start(void);

/* sound id (LSND_*) from its start, at the PS2 port's volume; any thread */
void lsound_play(int id);

/* the driver client unregistered (before the title hands the console on) */
void lsound_stop(void);

/* the sounds still playing (the launch waits for DECIDE's end; the music does not count) */
int lsound_busy(void);

/* Test 75, the gallery's music: an MP3 (the caller keeps the bytes for good), decoded on the mixer thread and looped.
 * Returns its sample rate (its first frame decoded), 0 = no MP3 frame in it. Set it once, before the first play. */
int lsound_music_set(const unsigned char *mp3, unsigned n);

/* from its start, fading in (any thread) */
void lsound_music_play(void);

/* fading out, then silent */
void lsound_music_stop(void);

/* still sounding (or a command not yet taken) */
int lsound_music_on(void);

/* the times it went round to its start */
unsigned lsound_music_loops(void);

/* Test 121 (STORY): a second music source, the PCM in RAM: 44.1 kHz stereo s16 (lr: frames of L R, frames of them),
 * looped from loop_start (frames) at its end; the caller keeps the data for good. Set it once, before the play. */
void lsound_music_set_pcm(const int16_t *lr, unsigned frames, unsigned loop_start);

/* Test 121: the source of the next lsound_music_play: 0 = the MP3 (lsound_music_set), 1 = the PCM above */
void lsound_music_choose(int pcm);

/* Test 121: the RMS (full scale 1.0) of an MP3 in memory over all its frames, for the log; *frames its frames per
 * channel; 0 when it has none. Decodes it on the calling thread (not the mixer's). */
double lsound_mp3_rms(const unsigned char *mp3, unsigned n, unsigned *frames);

#endif

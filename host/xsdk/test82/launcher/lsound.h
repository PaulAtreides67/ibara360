/* Test 72, the launcher's sound: the PS2 port's menu sounds and title voices (gen/launcher, LSND_*), mixed at 48 kHz
 * on a thread of their own, handed to the kernel's audio driver as the games' sound.c does; test 75: the gallery's
 * music, in stereo. */
#ifndef LSOUND_H
#define LSOUND_H

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

#endif

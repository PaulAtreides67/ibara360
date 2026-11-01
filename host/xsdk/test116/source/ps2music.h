/* Test 99 (the SOUND page's SOUNDTRACK: ARCADE / PS2; work/g97/ps2music/REPORT.md section 5, work/g99/ps2music/REPORT.md):
 * the PS2 port's 16 soundtrack streams (ps2music.bin beside the .xex files, tools/ps2extract with its music option;
 * ps2data.bin's bgm.table says what it must hold) played in place of the board's music.
 *
 * How (ps2music.c): the board's sound driver starts each track by a sequence on the YMZ770's slot 0 (registers 0x80,
 * 0x81) and keeps its level in channel 0's volume register (0x41: the level of the track's list, lowered a step a vblank
 * in a fade); the same numbers in ibara, Kuro BL and ARRANGE. The sound thread hears the game's writes as the chip
 * replays them (ymz_write_hook, runtime/ymz770.c), so at the chip time of each: a mapped intro sequence starts its
 * stream from 0, a loop sequence lets the stream go on (or starts it at its loop when none plays), a stop stops it,
 * channel 0's level over the track's base level scales it; the board's music category is hushed while a stream plays
 * (ymz_music_hush). The stream's SPU ADPCM is read and decoded on a thread of its own on FILE_THREAD's hardware thread
 * (64 KB reads, PCM ring of ~3 s); the sound thread resamples it 44.1 -> 48 kHz (the launcher's 32-tap sinc) into the
 * output at the exact output sample of each chip event. Save states: each runtime slot keeps a 32-byte record (the
 * chip's side at the snap's chip time, the stream's place at its output sample); a state file carries the moment's and
 * the stage start's (main.c's hdd_host); a slot without one (an older file, a replay) loads with no stream, the board's
 * music heard until the next track. */
#ifndef PS2MUSIC_H
#define PS2MUSIC_H

#include <stdint.h>

#define PS2M_REC_BYTES 32

enum { PS2M_NONE, PS2M_CHECKING, PS2M_OK, PS2M_MISSING, PS2M_BAD };

/* game thread, once after ps2data_games_init: bgm.table read, the reader thread started (it checks ps2music.bin);
 * set = SET_IBARA / SET_IBARABLK, arrange = ibaraarr.xex */
void ps2music_init(int set, int arrange);
int ps2music_state(void);           /* PS2M_* */
const char *ps2music_why(void);     /* why not PS2M_OK, for the SOUND page's grey line */
/* the SOUNDTRACK row: 1 = PS2 (it plays only once ps2music_state() is PS2M_OK) */
void ps2music_enable(int on);
int ps2music_active(void);          /* enabled and the file good */
int ps2music_has_seq(int seq);      /* a sequence with a stream */
const char *ps2music_seq_name(int seq);
/* MUSIC TEST (game thread): the stream of intro sequence seq at the game's level vol (0: its list's), in place of the
 * sound test chip's music (the chip plays the track too, hushed: its end and the game's fade as before); seq < 0 stops */
void ps2music_test(int seq, int vol);
int ps2music_test_on(void);
/* sound.c's sound_levels: the MUSIC volume (Q15) for the game's stream and for the test's */
void ps2music_levels(int32_t game_q15, int32_t test_q15);
/* game thread, every vblank: the sound thread's events and the reader's as log lines, the cost once a minute */
void ps2music_vblank(void);
/* save states (game thread): the slot's record (all 0: none), the snaps of it done (its stream part), and a file's
 * record put into a slot before its load (NULL: none) */
void ps2music_slot_get(int slot, uint8_t out[PS2M_REC_BYTES]);
unsigned ps2music_snaps(int slot);
void ps2music_slot_put(int slot, const uint8_t *in);

/* the sound thread (sound.c): ps2music_attach after ymz_init and snd_out_init (the hooks; out_step = sndout's output
 * spacing, cycles << 16), ps2music_mix on each run of output frames taken from sndout (n stereo int16, in order: the
 * stream added), ps2music_skip on frames taken and dropped (sound_cut) */
void ps2music_attach(uint64_t out_step);
void ps2music_mix(int16_t *lr, int n);
void ps2music_skip(int n);

#endif

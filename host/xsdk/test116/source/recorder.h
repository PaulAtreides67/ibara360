/* Test 14: input recording to the USB stick the set was loaded from, for replays on the
 * PC host and in stock MAME 0.289 (tools/rec/rec.py has the format and the tools).
 *
 * The game thread adds one entry per emulated vblank (rec_frame: the input ports from
 * that vblank on, the screen hash, ibara's logic counter word, the display vblanks the
 * 360 took). The USB thread (rec_service, every loop) creates <dev>:/ibara360/recNNNN.txt
 * (the first free number) and appends the entries as text lines, with an open, append,
 * close at least every REC_FLUSH_US, so the file on the stick is never more than ~2 s
 * behind the game. */
#ifndef RECORDER_H
#define RECORDER_H

#include <stdint.h>

#define REC_ROWS 2 /* card rows rec_rows() fills */

/* Game thread, before the first emulated frame. dev = the mounted device ("uda"...) or
 * NULL (no recording); header = the file's "# " lines, '\n'-terminated (test 33: up to
 * REC_HEADER_MAX bytes with the "# eeprom" line; test 86: 8192, test 85's header was 4035 of 4096). */
#define REC_HEADER_MAX 8192
void rec_begin(const char *dev, const char *header);

/* Test 33: no recording, the card says why (record = 0 in the ini). Instead of rec_begin. */
void rec_off(const char *why);

/* Game thread, once per emulated vblank, after the ports for the next frames are set. */
void rec_frame(uint32_t frame, uint8_t c, uint8_t d, uint8_t l, uint8_t f, uint32_t scr, uint32_t word,
               unsigned vbl);

/* Test 69, game thread: a save state taken (what 0: "# save <frame> <slot>") or loaded (1: "# load <frame> <slot>",
 * at the vblank that then has no rec_frame entry), in order with rec_frame's entries. Test 84: 3 = a FULL RESTART's
 * load ("# load <frame> <slot> full": its slots dropped differently) */
void rec_state(uint32_t frame, int what, int slot);

/* Test 81, game thread: a host setting the game reads changed by a menu at this vblank ("# host <frame> <what>
 * <value>": what 0-15 = main.c's HOST_* (the DIP SWITCHES page's rows, ARRANGE's BULLET DESIGN), value 0-255), in
 * order with rec_frame's entries; the PC harness applies it at that vblank, as the menu did */
void rec_host(uint32_t frame, int what, int value);
/* test 84: a save state file's line: "# hddsave <frame> <slot>" (what 0: the vblank that asks for its moment) or
 * "# hddload <frame> <slot> <crc>" (what 1: loaded at that vblank; crc = the file's header CRC), "# hddsaved <frame>
 * <slot> <crc>" (what 2: the file written, for the reader) */
void rec_hdd(uint32_t frame, int what, int slot, uint32_t crc);
/* test 86: a replay's line, in order with rec_frame's entries: "# rpsave <frame> <num>" (RP_REC_SAVE: SAVE REPLAY?'s A
 * at that vblank, nothing emulated meanwhile; the PC harness writes its own replay of that number there), "# rpsaved
 * <frame> <num> <crc>" (the file written), "# rpplay <frame> <num> <crc>" (its playback starts at that vblank, then "#
 * load <frame> 1"), "# rpend <frame> <num> <why>" (it ends there: why 0 = its last vblank, 1 = B / BACK, 2 = out of
 * step; then "# load <frame> 0"), "# rpno <frame> <num>" (SAVE REPLAY?'s B: num 0). Test 87: "# rpdel <frame> <num>"
 * (RP_REC_DEL: the replay deleted there, by the page's DELETE or replaced by SAVE REPLAY? with a full list; the PC
 * harness deletes its own of that number), rpend's why 3 = the playback's RESTART REPLAY (its "# rpplay" follows at the
 * same vblank) */
enum { RP_REC_SAVE, RP_REC_SAVED, RP_REC_PLAY, RP_REC_END, RP_REC_NO, RP_REC_DEL, RP_REC_N };
void rec_replay(uint32_t frame, int what, uint32_t num, uint32_t crc);

/* USB thread, every loop: file creation, text, writes. 1 when it touched the file. */
int rec_service(void);

/* Test 72: set before the title hands the console to another: every rec_service from then on writes what waits. */
extern volatile int rec_final;

/* Test 17: the timing model each rec_frame records (1 = PCB fit, 2 = MAME 0.289, test 26:
 * 3 = PCB fit+, test 27: 4 = PCB fit+ 2.9%, test 28: 5 = PCB fit+ 3.0%, test 29: 6 = PCB fit+
 * 3.05%, test 30: 7 = PCB fit+ 3.17%, test 31: 8 = PCB fit+ 3.97%, test 32: 9 = PCB fit+
 * 3.75%); a change is written as "# timing <frame> fit|mame|fitplus|fitplus2|fitplus3|fitplus4|
 * fitplus5|fitplus6|fitplus7" before that frame's line. Game thread. */
extern volatile uint8_t rec_timing;

/* Test 53: the DIP switch byte (in_dsw, 18000053) each rec_frame records; a change from the one
 * before (0 at power-on) is written as "# dsw <frame> <hex>" before that frame's line (host/pc
 * applies it at that vblank, "# dsw 0 ..." from reset). Game thread. */
extern volatile uint8_t rec_dsw;

/* The recorder's card rows: REC_ROWS lines of text with a colour each. */
void rec_rows(char text[REC_ROWS][100], uint32_t color[REC_ROWS]);

#endif

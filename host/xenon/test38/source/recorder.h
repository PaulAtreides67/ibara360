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
 * REC_HEADER_MAX bytes with the "# eeprom" line). */
#define REC_HEADER_MAX 4096
void rec_begin(const char *dev, const char *header);

/* Test 33: no recording, the card says why (record = 0 in the ini). Instead of rec_begin. */
void rec_off(const char *why);

/* Game thread, once per emulated vblank, after the ports for the next frames are set. */
void rec_frame(uint32_t frame, uint8_t c, uint8_t d, uint8_t l, uint8_t f, uint32_t scr, uint32_t word,
               unsigned vbl);

/* USB thread, every loop: file creation, text, writes. 1 when it touched the file. */
int rec_service(void);

/* Test 17: the timing model each rec_frame records (1 = PCB fit, 2 = MAME 0.289, test 26:
 * 3 = PCB fit+, test 27: 4 = PCB fit+ 2.9%, test 28: 5 = PCB fit+ 3.0%, test 29: 6 = PCB fit+
 * 3.05%, test 30: 7 = PCB fit+ 3.17%, test 31: 8 = PCB fit+ 3.97%, test 32: 9 = PCB fit+
 * 3.75%); a change is written as "# timing <frame> fit|mame|fitplus|fitplus2|fitplus3|fitplus4|
 * fitplus5|fitplus6|fitplus7" before that frame's line. Game thread. */
extern volatile uint8_t rec_timing;

/* The recorder's card rows: REC_ROWS lines of text with a colour each. */
void rec_rows(char text[REC_ROWS][100], uint32_t color[REC_ROWS]);

#endif

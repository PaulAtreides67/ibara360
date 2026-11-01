/* Test 14d: when the USB thread may write files, and what the writes cost the blitter.
 *
 * Test 14c's 22 late frames after loading were all file writes (recording every 2 s, frame
 * log every 4 s, ~58 ms each) on the USB thread, which shares core 2 with blitter band 1:
 * band 1 ran 1.8x slower for the 3-5 frames of each write, too slow in the heavy part of
 * stage 1. Two changes against it: the USB thread runs at low priority all the time
 * (source/tdelay.c keeps it there through libxenon's udelay), and a write that falls due
 * while the blitter is busy (band 0 at WGATE_BAND_US or more within the last
 * WGATE_FRAMES emulated frames; band 0's thread is never slowed by the writes) waits until
 * it is not, at most WGATE_MAX_US. The text keeps piling up meanwhile; nothing is lost. */
#ifndef WGATE_H
#define WGATE_H

#include <stdint.h>

#ifndef WGATE_BAND_US
#define WGATE_BAND_US 5000
#endif
#define WGATE_FRAMES 30
#define WGATE_MAX_US 20000000
#define WGATE_ROWS 2 /* card rows wgate_rows() fills */

struct wgate {
	uint64_t due;  /* when the write fell due (0: none pending) */
	int held;      /* the gate has held this write at least once */
};

/* USB thread. Call when a write is due: 1 = write now, 0 = wait (call again later). */
int wgate_open(struct wgate *g);
/* Test 91: any thread; from now on every due write goes at once (GAME SELECT: the title is ending, no emulated frame
 * comes to clear the busy mark, so the ini, the EEPROM and the recording waited out the two file passes). */
void wgate_force(void);
/* USB thread, around every file operation (open .. close): on = 1 before, 0 after. */
void wgate_io(int on);

/* Game thread, every emulated vblank: this frame's band times (timebase ticks) and
 * whether it was late. Returns PF_WRITE / PF_HELD bits for the frame log. */
unsigned wgate_frame(uint32_t frame, uint64_t band0, uint64_t band1, int late);

void wgate_rows(char text[WGATE_ROWS][100], uint32_t color[WGATE_ROWS]);

#endif

/* Test 6: what main.c shares with romload.c (colours, the on-screen log, timebase).
 * log_printf may be called from any hardware thread. */
#ifndef CARD_INC_H
#define CARD_INC_H

#include <stdint.h>

#define C_BG     0xFF202020u
#define C_GRID   0xFF404040u
#define C_WHITE  0xFFFFFFFFu
#define C_BLACK  0xFF000000u
#define C_RED    0xFFFF4040u
#define C_GREEN  0xFF00FF00u
#define C_YELLOW 0xFFFFFF00u
#define C_CYAN   0xFF00FFFFu
#define C_DIM    0xFF909090u
#define C_OFF    0xFF505050u
#define C_CLEAR  0xFF602010u /* dark blue border (red in the low byte, see test 2b) */

/* one logical line into the on-screen log, wrapped, frame number in front */
void log_printf(uint32_t color, const char *fmt, ...) __attribute__((format(printf, 2, 3)));

/* TBU/TBL/TBU timebase read (libxenon's mftb() can tear at the TBL wrap, test 2) */
uint64_t tb_read(void);
unsigned tb_us(uint64_t a, uint64_t b);

#endif

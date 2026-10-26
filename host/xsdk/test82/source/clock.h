/* Test 16: the real date and time for the RTC9701, as a PCB's battery-backed RTC has it.
 * xsdk port (test 39 .xex): the console's own clock, which the dashboard keeps (KeQuerySystemTime,
 * UTC), read at boot; the network time of tests 16-39 (lwIP on bare metal) is gone with libxenon.
 * At game start: the console clock if it is 2020-2099, else 2026-01-01 12:00:00 (the PC runs'
 * RTC: the attract and sound checks need it), shown as Central European time (CET/CEST,
 * timecalc.c). */
#ifndef CLOCK_H
#define CLOCK_H

#include <stdint.h>

#include "timecalc.h"

#define CLOCK_ROWS 1  /* card rows clock_rows() fills */

void clock_read(void);   /* at boot */
/* game start: the values for rtc9701_set_time (y, mo, d, wd, h, mi, s, local time) and
 * where they came from; returns 1 for the 2026-01-01 default */
int clock_pick(int v[7], char *text, unsigned n);
void clock_rows(char text[CLOCK_ROWS][100], uint32_t color[CLOCK_ROWS]);
const char *clock_source(void); /* "console clock", "default": for the recording */

#endif

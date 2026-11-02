/* Test 16: the console clock, the choice at game start and the card row (clock.h), xsdk port:
 * KeQuerySystemTime (100 ns units since 1601, UTC, the dashboard's clock) in place of the SMC. */
#include <stdio.h>
#include <string.h>

#include "xsdk/kernel.h"

#include "card.h"
#include "clock.h"
#include "cv1k.h"
#include "xplat.h"

#define FILETIME_UNIX_S 11644473600LL /* 1601-01-01 to 1970-01-01 */

static struct {
	int done, valid;
	uint64_t raw;      /* KeQuerySystemTime */
	int64_t unix_us;
	uint64_t tb;
} sys;

static const char *src_name = "default";
static int64_t ref_us;   /* the chosen UTC time at ref_tb */
static uint64_t ref_tb;
static volatile int have_ref, picked;

static const char *const wd_name[8] = {"???", "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

static int in_range(int64_t unix_s)
{
	struct civil c;

	civil_from_unix(unix_s, &c);
	return c.y >= 2020 && c.y <= 2099;
}

void clock_read(void)
{
	struct civil c;

	KeQuerySystemTime(&sys.raw);
	sys.tb = tb_read();
	sys.unix_us = (int64_t)(sys.raw / 10) - FILETIME_UNIX_S * 1000000;
	sys.valid = in_range(sys.unix_us / 1000000);
	sys.done = 1;
	civil_from_unix(sys.unix_us / 1000000, &c);
	log_printf(sys.valid ? C_WHITE : C_YELLOW, "CONSOLE CLOCK %04d-%02d-%02d %02d:%02d:%02d UTC (%s)", c.y, c.mo, c.d,
	           c.h, c.mi, c.s, sys.valid ? "SET" : "UNSET, NOT 2020-2099");
}

/* UTC seconds -> local civil time and the zone's name */
static const char *local_civil(int64_t utc, struct civil *c)
{
	const int off = cet_offset(utc);

	civil_from_unix(utc + off, c);
	return off == 7200 ? "CEST" : "CET";
}

int clock_pick(int v[7], char *text, unsigned n)
{
	const uint64_t now = tb_read();
	struct civil c;
	const char *zone;
	int64_t utc_us;

	if (sys.valid) {
		ref_us = sys.unix_us;
		ref_tb = sys.tb;
		src_name = "console clock";
	} else {
		static const int d[7] = {2026, 1, 1, 5, 12, 0, 0};
		memcpy(v, d, sizeof(d));
		src_name = "default";
		snprintf(text, n, "RTC 2026-01-01 12:00:00 (CONSOLE CLOCK UNSET)");
		picked = 1;
		return 1;
	}
	__sync_synchronize();
	have_ref = 1;
	picked = 1;
	utc_us = ref_us + ticks_to_us(now - ref_tb, PPC_TIMEBASE_FREQ);
	zone = local_civil((utc_us + 500000) / 1000000, &c); /* nearest second */
	v[0] = c.y;
	v[1] = c.mo;
	v[2] = c.d;
	v[3] = c.wd;
	v[4] = c.h;
	v[5] = c.mi;
	v[6] = c.s;
	snprintf(text, n, "RTC %04d-%02d-%02d %02d:%02d:%02d %s %s (CONSOLE CLOCK)", c.y, c.mo, c.d, c.h, c.mi, c.s,
	         wd_name[c.wd], zone);
	return 0;
}

const char *clock_source(void)
{
	return src_name;
}

static int bcd2(u8 v)
{
	return (v >> 4) * 10 + (v & 15);
}

int clock_now(struct civil *c)
{
	if (!have_ref)
		return 0;
	local_civil((ref_us + ticks_to_us(tb_read() - ref_tb, PPC_TIMEBASE_FREQ)) / 1000000, c);
	return 1;
}

/* the reference running on the timebase, and the game's RTC9701 registers */
void clock_rows(char t[CLOCK_ROWS][100], uint32_t color[CLOCK_ROWS])
{
	struct civil c;

	if (!picked) {
		snprintf(t[0], 100, "NOW: THE CLOCK IS CHOSEN AT GAME START");
		color[0] = C_DIM;
	} else {
		u8 r[7];
		char now[24];
		rtc9701_get(r);
		if (have_ref) {
			const char *zone;
			int64_t utc_us = ref_us + ticks_to_us(tb_read() - ref_tb, PPC_TIMEBASE_FREQ);
			zone = local_civil(utc_us / 1000000, &c);
			snprintf(now, sizeof(now), "%02d:%02d:%02d %s", c.h, c.mi, c.s, zone);
		} else {
			snprintf(now, sizeof(now), "NO CLOCK");
		}
		snprintf(t[0], 100, "NOW %s  GAME RTC 20%02d-%02d-%02d %02d:%02d:%02d WD %02X", now, bcd2(r[6]), bcd2(r[5]),
		         bcd2(r[4]), bcd2(r[2]), bcd2(r[1]), bcd2(r[0]), r[3]);
		color[0] = have_ref ? C_GREEN : C_YELLOW;
	}
}

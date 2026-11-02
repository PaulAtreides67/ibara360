/* Test 16: calendar arithmetic, the SMC clock's format, the EU summer-time rule and SNTP
 * packets. Pure functions (no libxenon, no newlib state), so the same file is checked on
 * the PC (scratchpad harness: glibc localtime with TZ=CET-1CEST,M3.5.0,M10.5.0/3 and real
 * NTP servers) and runs on the 360. */
#ifndef TIMECALC_H
#define TIMECALC_H

#include <stdint.h>

/* a date and time; wd 1 = Sunday ... 7 = Saturday, as rtc9701_set_time() takes it */
struct civil {
	int y, mo, d, wd, h, mi, s;
};

void civil_from_unix(int64_t t, struct civil *c);
int64_t unix_from_civil(int y, int mo, int d, int h, int mi, int s);

/* Central European time: seconds east of UTC at UTC time t, 7200 (CEST) from the last
 * Sunday of March 01:00 UTC to the last Sunday of October 01:00 UTC, else 3600 (CET). */
int cet_offset(int64_t utc);

/* SMC command 0x04 (Free60 wiki; libxenon xenon_gettimeofday): reply bytes 1-5 = a
 * 40-bit count of milliseconds since 2001-11-15 00:00:00 UTC, least significant first */
#define SMC_EPOCH_UNIX 1005782400LL
int64_t smc_unix_ms(const uint8_t reply[16]);

/* SNTP (RFC 4330): a version 4 client request whose transmit timestamp is the nonce; the
 * server sends it back as the originate timestamp. */
#define NTP_PKT 48
void ntp_request(uint8_t req[NTP_PKT], uint64_t nonce);

struct ntp_reply {
	int ok;
	const char *why;      /* when !ok */
	int li, version, stratum;
	char refid[5];        /* kiss code when stratum 0 */
	int64_t rtt_us;       /* round trip minus the server's own time */
	int64_t unix_us;      /* the server's time at t4 (UTC, microseconds) */
};

/* t1 = local clock when the request left, t4 = when the reply came, tick_hz = its rate */
void ntp_parse(const uint8_t rep[NTP_PKT], const uint8_t req[NTP_PKT], uint64_t t1, uint64_t t4, uint64_t tick_hz,
               struct ntp_reply *r);

/* ticks of a tick_hz clock to microseconds without overflow for any realistic span */
int64_t ticks_to_us(uint64_t ticks, uint64_t tick_hz);

#endif

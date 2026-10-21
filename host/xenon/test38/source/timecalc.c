/* Test 16: see timecalc.h. Days from/to civil dates after H. Hinnant's public-domain
 * algorithms (proleptic Gregorian, any year). */
#include <string.h>

#include "timecalc.h"

static int64_t floor_div(int64_t a, int64_t b)
{
	int64_t q = a / b;
	return (a % b != 0 && (a < 0) != (b < 0)) ? q - 1 : q;
}

static int64_t days_from_civil(int64_t y, unsigned m, unsigned d)
{
	int64_t era;
	unsigned yoe, doy, doe;

	y -= m <= 2;
	era = floor_div(y, 400);
	yoe = (unsigned)(y - era * 400);
	doy = (153 * (m > 2 ? m - 3 : m + 9) + 2) / 5 + d - 1;
	doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
	return era * 146097 + (int64_t)doe - 719468;
}

static void civil_from_days(int64_t z, int *y, int *m, int *d)
{
	int64_t era;
	unsigned doe, yoe, doy, mp;

	z += 719468;
	era = floor_div(z, 146097);
	doe = (unsigned)(z - era * 146097);
	yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
	doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
	mp = (5 * doy + 2) / 153;
	*d = (int)(doy - (153 * mp + 2) / 5 + 1);
	*m = (int)(mp < 10 ? mp + 3 : mp - 9);
	*y = (int)((int64_t)yoe + era * 400 + (*m <= 2));
}

/* 0 = Sunday; 1970-01-01 (day 0) was a Thursday */
static int weekday0(int64_t days)
{
	return (int)(((days % 7) + 7 + 4) % 7);
}

void civil_from_unix(int64_t t, struct civil *c)
{
	const int64_t days = floor_div(t, 86400);
	const int64_t sec = t - days * 86400;

	civil_from_days(days, &c->y, &c->mo, &c->d);
	c->wd = weekday0(days) + 1;
	c->h = (int)(sec / 3600);
	c->mi = (int)(sec / 60 % 60);
	c->s = (int)(sec % 60);
}

int64_t unix_from_civil(int y, int mo, int d, int h, int mi, int s)
{
	return days_from_civil(y, (unsigned)mo, (unsigned)d) * 86400 + h * 3600 + mi * 60 + s;
}

/* 01:00 UTC on the last Sunday of month m (March or October: both have 31 days) */
static int64_t last_sunday_0100(int y, int m)
{
	const int64_t last = days_from_civil(y, (unsigned)m, 31);
	return (last - weekday0(last)) * 86400 + 3600;
}

int cet_offset(int64_t utc)
{
	struct civil c;

	civil_from_unix(utc, &c);
	return utc >= last_sunday_0100(c.y, 3) && utc < last_sunday_0100(c.y, 10) ? 7200 : 3600;
}

int64_t smc_unix_ms(const uint8_t r[16])
{
	const uint64_t ms = (uint64_t)r[1] | (uint64_t)r[2] << 8 | (uint64_t)r[3] << 16 | (uint64_t)r[4] << 24 |
	                    (uint64_t)r[5] << 32;
	return (int64_t)ms + SMC_EPOCH_UNIX * 1000;
}

static uint32_t be32(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

void ntp_request(uint8_t req[NTP_PKT], uint64_t nonce)
{
	int i;

	memset(req, 0, NTP_PKT);
	req[0] = 0x23; /* LI 0, version 4, mode 3 (client) */
	for (i = 0; i < 8; i++)
		req[40 + i] = (uint8_t)(nonce >> (56 - 8 * i));
}

/* an NTP timestamp (seconds since 1900, 32.32 fixed point) in Unix microseconds; seconds
 * below 2^31 belong to era 1 (from 2036-02-07), so this covers 1968-2104 */
static int64_t ntp_unix_us(const uint8_t *p)
{
	uint64_t sec = be32(p);
	const uint64_t frac = be32(p + 4);

	if (sec < 0x80000000u)
		sec += 0x100000000ull;
	return ((int64_t)sec - 2208988800LL) * 1000000 + (int64_t)((frac * 1000000) >> 32);
}

int64_t ticks_to_us(uint64_t ticks, uint64_t hz)
{
	return (int64_t)(ticks / hz) * 1000000 + (int64_t)((ticks % hz) * 1000000 / hz);
}

void ntp_parse(const uint8_t rep[NTP_PKT], const uint8_t req[NTP_PKT], uint64_t t1, uint64_t t4, uint64_t hz,
               struct ntp_reply *r)
{
	int64_t t2, t3, proc;
	struct civil c;

	memset(r, 0, sizeof(*r));
	r->li = rep[0] >> 6;
	r->version = (rep[0] >> 3) & 7;
	r->stratum = rep[1];
	memcpy(r->refid, rep + 12, 4);
	r->why = "";
	if ((rep[0] & 7) != 4)
		r->why = "NOT A SERVER REPLY";
	else if (memcmp(rep + 24, req + 40, 8))
		r->why = "NOT AN ANSWER TO OUR REQUEST";
	else if (r->stratum == 0)
		r->why = "KISS OF DEATH";
	else if (r->stratum > 15)
		r->why = "BAD STRATUM";
	else if (r->li == 3)
		r->why = "SERVER NOT SYNCHRONISED";
	else if (!be32(rep + 40) && !be32(rep + 44))
		r->why = "NO TRANSMIT TIME";
	if (*r->why)
		return;
	t2 = ntp_unix_us(rep + 32);
	t3 = ntp_unix_us(rep + 40);
	proc = t3 - t2;
	if (proc < 0 || proc > 1000000)
		proc = 0;
	r->rtt_us = ticks_to_us(t4 - t1, hz) - proc;
	if (r->rtt_us < 0)
		r->rtt_us = 0;
	r->unix_us = t3 + r->rtt_us / 2;
	civil_from_unix(r->unix_us / 1000000, &c);
	if (c.y < 2020 || c.y > 2099) {
		r->why = "TIME OUT OF RANGE";
		return;
	}
	r->ok = 1;
}

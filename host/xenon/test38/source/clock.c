/* Test 16: the console clock, the choice at game start and the card rows (clock.h). */
#include <stdio.h>
#include <string.h>

#include <ppc/timebase.h>
#include <xenon_smc/xenon_smc.h>

#include "card.h"
#include "clock.h"
#include "cv1k.h"

#define SMC_WAIT_MS 200
#define DRAIN_MAX 64

static struct {
	int done, ok, valid;
	uint8_t raw[16];
	unsigned drained, skipped, wait_us;
	int64_t unix_ms;
	uint64_t tb;
} smc;

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

/* Thread 0 at boot, before the other hardware threads run: nothing else talks to the SMC. */
void clock_smc_read(void)
{
	uint8_t m[16];
	uint64_t t0;

	while (smc.drained < DRAIN_MAX && xenon_smc_receive_message(m) == 0)
		smc.drained++;
	memset(m, 0, sizeof(m));
	m[0] = 0x04;
	xenon_smc_send_message(m);
	t0 = tb_read();
	for (;;) {
		if (xenon_smc_receive_message(m) == 0) {
			if (m[0] == 0x04) {
				smc.tb = tb_read();
				memcpy(smc.raw, m, 16);
				smc.ok = 1;
				break;
			}
			smc.skipped++;
			continue;
		}
		if (tb_us(t0, tb_read()) > SMC_WAIT_MS * 1000)
			break;
	}
	smc.wait_us = tb_us(t0, tb_read());
	if (smc.ok) {
		smc.unix_ms = smc_unix_ms(smc.raw);
		smc.valid = in_range(smc.unix_ms / 1000);
	}
	smc.done = 1;
	if (smc.ok) {
		struct civil c;
		civil_from_unix(smc.unix_ms / 1000, &c);
		log_printf(smc.valid ? C_WHITE : C_YELLOW,
		           "SMC CLOCK %04d-%02d-%02d %02d:%02d:%02d UTC (%s), REPLY IN %u US, OLD MESSAGES %u DRAINED %u SKIPPED",
		           c.y, c.mo, c.d, c.h, c.mi, c.s, smc.valid ? "SET" : "UNSET", smc.wait_us, smc.drained, smc.skipped);
	} else {
		log_printf(C_RED, "SMC CLOCK: NO REPLY IN %u MS, OLD MESSAGES %u DRAINED %u SKIPPED", SMC_WAIT_MS,
		           smc.drained, smc.skipped);
	}
}

static void fmt_civil(char *b, unsigned n, const struct civil *c)
{
	snprintf(b, n, "%04d-%02d-%02d %02d:%02d:%02d", c->y, c->mo, c->d, c->h, c->mi, c->s);
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

	if (net.finished && net.ok) {
		ref_us = net.reply.unix_us;
		ref_tb = net.t4;
		src_name = "ntp";
	} else if (smc.valid) {
		ref_us = smc.unix_ms * 1000;
		ref_tb = smc.tb;
		src_name = "console clock";
	} else {
		static const int d[7] = {2026, 1, 1, 5, 12, 0, 0};
		memcpy(v, d, sizeof(d));
		src_name = "default";
		snprintf(text, n, "RTC 2026-01-01 12:00:00 (NO NETWORK TIME, CONSOLE CLOCK UNSET)");
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
	snprintf(text, n, "RTC %04d-%02d-%02d %02d:%02d:%02d %s %s (%s)", c.y, c.mo, c.d, c.h, c.mi, c.s, wd_name[c.wd],
	         zone, strcmp(src_name, "ntp") ? "CONSOLE CLOCK" : "NETWORK TIME");
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

static unsigned ms_since_start(const struct net_status *s)
{
	return tb_us(s->start, tb_read()) / 1000;
}

void clock_rows(char t[CLOCK_ROWS][100], uint32_t color[CLOCK_ROWS])
{
	const struct net_status *s = &net;
	char a[24];
	struct civil c;

	/* row 0: the network task */
	if (s->phase == NET_IDLE) {
		snprintf(t[0], 100, "NET T%d: NOT STARTED", NET_THREAD);
		color[0] = C_DIM;
	} else if (!s->finished) {
		static const char *const what[] = {"", "ETHERNET LINK", "DHCP", "ASKING TIME SERVERS", ""};
		snprintf(t[0], 100, "NET T%d: %s ...  %u.%u S", NET_THREAD, what[s->phase], ms_since_start(s) / 1000,
		         ms_since_start(s) / 100 % 10);
		color[0] = C_YELLOW;
	} else if (s->ok) {
		snprintf(t[0], 100, "NTP OK: %s %u.%u.%u.%u RTT %u MS STRATUM %d TRY %u", ntp_servers[s->server].name,
		         ntp_servers[s->server].a, ntp_servers[s->server].b, ntp_servers[s->server].c,
		         ntp_servers[s->server].d, (unsigned)(s->reply.rtt_us / 1000), s->reply.stratum, s->tries);
		color[0] = C_GREEN;
	} else {
		snprintf(t[0], 100, "NET: %s  (%u.%u S)", s->why, s->total_ms / 1000, s->total_ms / 100 % 10);
		color[0] = C_RED;
	}

	/* row 1: link and DHCP */
	if (s->phase <= NET_LINK && !s->finished) {
		snprintf(t[1], 100, "LINK: PHY RESET + UP TO 5 S FOR THE LINK");
		color[1] = C_DIM;
	} else {
		snprintf(t[1], 100, "LINK %s %u.%u S DHCP %u.%u.%u.%u GW %u.%u.%u.%u %u.%u S%s", enet_link_up ? "UP" : "DOWN",
		         (enet_reset_ms + enet_link_ms) / 1000, (enet_reset_ms + enet_link_ms) / 100 % 10, s->ip[0], s->ip[1],
		         s->ip[2], s->ip[3], s->gw[0], s->gw[1], s->gw[2], s->gw[3], s->dhcp_ms / 1000, s->dhcp_ms / 100 % 10,
		         enet_mdio_timeouts ? " MDIO!" : "");
		color[1] = enet_link_up ? C_WHITE : C_YELLOW;
	}

	/* row 2: the console clock as the SMC gave it */
	if (!smc.ok) {
		snprintf(t[2], 100, "SMC CLOCK: NO REPLY IN %u MS (DRAINED %u SKIPPED %u)", smc.wait_us / 1000, smc.drained,
		         smc.skipped);
		color[2] = C_RED;
	} else {
		char tail[24];
		civil_from_unix(smc.unix_ms / 1000, &c);
		fmt_civil(a, sizeof(a), &c);
		if (s->finished && s->ok) { /* SMC - NTP at the moment the SMC answered */
			const int64_t ntp_at_smc = s->reply.unix_us - ticks_to_us(s->t4 - smc.tb, PPC_TIMEBASE_FREQ);
			snprintf(tail, sizeof(tail), "%+lld S VS NTP", (long long)((smc.unix_ms * 1000 - ntp_at_smc) / 1000000));
		} else {
			snprintf(tail, sizeof(tail), "%s", smc.valid ? "SET" : "UNSET");
		}
		snprintf(t[2], 100, "SMC %02X%02X%02X%02X%02X%02X%02X%02X%02X %s UTC %s", smc.raw[0], smc.raw[1], smc.raw[2],
		         smc.raw[3], smc.raw[4], smc.raw[5], smc.raw[6], smc.raw[7], smc.raw[8], a, tail);
		color[2] = smc.valid ? C_WHITE : C_YELLOW;
	}

	/* row 3: the reference running on the timebase, and the game's RTC9701 registers */
	if (!picked) {
		snprintf(t[3], 100, "NOW: THE CLOCK IS CHOSEN AT GAME START");
		color[3] = C_DIM;
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
		snprintf(t[3], 100, "NOW %s  GAME RTC 20%02d-%02d-%02d %02d:%02d:%02d WD %02X", now, bcd2(r[6]), bcd2(r[5]),
		         bcd2(r[4]), bcd2(r[2]), bcd2(r[1]), bcd2(r[0]), r[3]);
		color[3] = have_ref ? C_GREEN : C_YELLOW;
	}
}

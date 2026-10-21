/* Test 16: the real date and time for the RTC9701, as a PCB's battery-backed RTC has it.
 *
 *  - console clock: SMC command 0x04 (UTC, see timecalc.h), read on thread 0 at boot
 *    before the other hardware threads run; stale SMC messages are drained first and only
 *    a reply that starts with 0x04 is taken (libxenon's gettimeofday takes whatever comes
 *    next and waits forever). The raw reply goes on the card;
 *  - network time: on NET_THREAD while the ROMs load: Ethernet link, DHCP, then SNTP to
 *    fixed anycast addresses (libxenon's lwIP has no DNS), lwIP's raw API, nothing printed
 *    (netfix/sntp.c, netfix/enet_quiet.c);
 *  - at game start: network time if it came, else the console clock if it is 2020-2099,
 *    else 2026-01-01 12:00:00 (the PC runs' RTC: the attract and sound checks need it),
 *    shown as Central European time (CET/CEST, timecalc.c). */
#ifndef CLOCK_H
#define CLOCK_H

#include <stdint.h>

#include "timecalc.h"

#define NET_THREAD 3  /* the sound thread's, free until the game starts */
#define CLOCK_ROWS 4  /* card rows clock_rows() fills */

enum { NET_IDLE, NET_LINK, NET_DHCP, NET_NTP, NET_DONE };

/* written by NET_THREAD only; finished = 1 last (after a barrier) */
struct net_status {
	volatile int phase;     /* NET_* */
	volatile int finished;
	int ok;                 /* reply = a good SNTP answer */
	char why[64];           /* the outcome in words */
	uint64_t start, t4;     /* timebase: task start, the reply's arrival */
	unsigned dhcp_ms, total_ms, tries, sent_err, stray;
	uint8_t ip[4], gw[4];
	int server;             /* index into ntp_servers[] of the answer */
	struct ntp_reply reply;
};
extern struct net_status net;

struct ntp_server {
	uint8_t a, b, c, d;
	const char *name;
};
#define NTP_SERVERS 4
extern const struct ntp_server ntp_servers[NTP_SERVERS];

/* netfix/sntp.c: hand the task to NET_THREAD (after xenon_thread_startup()); 0 = started */
int net_start(void);

/* netfix/enet_quiet.c */
extern volatile unsigned enet_reset_ms, enet_link_ms, enet_mdio_timeouts;
extern volatile int enet_link_up;

/* source/clock.c */
void clock_smc_read(void);   /* thread 0, at boot */
/* game start: the values for rtc9701_set_time (y, mo, d, wd, h, mi, s, local time) and
 * where they came from; returns 1 for the 2026-01-01 default */
int clock_pick(int v[7], char *text, unsigned n);
void clock_rows(char text[CLOCK_ROWS][100], uint32_t color[CLOCK_ROWS]);
const char *clock_source(void); /* "ntp", "console clock", "default": for the recording */

#endif

/* Test 16: network time on NET_THREAD while the ROMs load (source/clock.h).
 *
 * lwIP 1.4.1 as libxenon builds it (NO_SYS, raw API, no DNS), driven the way libxenon's
 * network_init/network_poll drive it, without their printf: netif with enet_init
 * (netfix/enet_quiet.c: NIC reset, PHY reset, up to 5 s for the link), DHCP with the fine,
 * coarse and ARP timers polled here, then SNTP requests to the anycast servers in turn
 * until one answers (each NTP_WAIT_MS, NTP_TRIES in all). Afterwards the lease is released
 * and the NIC stopped (libxenon's enet_quiesce), so nothing touches the network while the
 * game runs. The thread runs at low priority (its core's other thread loads the ROMs) and
 * waits with udelay (source/tdelay.c: db16cyc, back to low priority).
 *
 * Built with libxenon's flags (Makefile): lwIP's byte order comes from BYTE_ORDER. */
#include <string.h>

#include "lwip/opt.h"
#include "lwip/init.h"
#include "lwip/dhcp.h"
#include "lwip/ip.h"
#include "lwip/netif.h"
#include "lwip/pbuf.h"
#include "lwip/udp.h"
#include "netif/etharp.h"

#include <ppc/timebase.h>
#include <time/time.h>
#include <xenon_soc/xenon_power.h>

#include "../source/clock.h"

#if !defined(BYTE_ORDER) || !defined(BIG_ENDIAN) || BYTE_ORDER != BIG_ENDIAN
#error "lwIP must see BYTE_ORDER == BIG_ENDIAN, as libxenon builds it"
#endif

#define DHCP_LIMIT_MS 12000
#define NTP_WAIT_MS 1000
#define NTP_TRIES 8
#define POLL_US 50

uint64_t tb_read(void);                 /* source/main.c */
extern volatile int thread_prio_low[6]; /* source/main.c */
err_t enet_init(struct netif *netif);   /* netfix/enet_quiet.c */
void enet_poll(struct netif *netif);
void enet_quiesce(void);

struct net_status net;

/* time.cloudflare.com and time.google.com: anycast addresses their operators publish */
const struct ntp_server ntp_servers[NTP_SERVERS] = {
	{162, 159, 200, 1, "CLOUDFLARE"},
	{216, 239, 35, 0, "GOOGLE"},
	{162, 159, 200, 123, "CLOUDFLARE"},
	{216, 239, 35, 4, "GOOGLE"},
};

static struct netif nif;
static uint64_t tmr_fine, tmr_coarse, tmr_arp;
static uint8_t req[NTP_PKT], rep[NTP_PKT];
static ip_addr_t srv;
static volatile int got;
static uint64_t t4;
static uint8_t stack[64 * 1024] __attribute__((aligned(128)));

static uint64_t ms_ticks(unsigned ms)
{
	return (uint64_t)PPC_TIMEBASE_FREQ / 1000 * ms;
}

static unsigned ms_since(uint64_t t0)
{
	return (unsigned)((tb_read() - t0) / (PPC_TIMEBASE_FREQ / 1000));
}

/* one received frame and lwIP's timers (libxenon network_poll, plus etharp_tmr) */
static void poll_net(void)
{
	const uint64_t now = tb_read();

	enet_poll(&nif);
	if (now - tmr_fine >= ms_ticks(DHCP_FINE_TIMER_MSECS)) {
		tmr_fine = now;
		dhcp_fine_tmr();
	}
	if (now - tmr_coarse >= ms_ticks(DHCP_COARSE_TIMER_MSECS)) {
		tmr_coarse = now;
		dhcp_coarse_tmr();
	}
	if (now - tmr_arp >= ms_ticks(ARP_TMR_INTERVAL)) {
		tmr_arp = now;
		etharp_tmr();
	}
	udelay(POLL_US);
}

static void ntp_recv(void *arg, struct udp_pcb *pcb, struct pbuf *p, ip_addr_t *addr, u16_t port)
{
	(void)arg;
	(void)pcb;
	if (!got && p->tot_len >= NTP_PKT && ip_addr_cmp(addr, &srv) && port == 123) {
		t4 = tb_read();
		pbuf_copy_partial(p, rep, NTP_PKT, 0);
		got = 1;
	} else {
		net.stray++;
	}
	pbuf_free(p);
}

static void copy_ip(uint8_t out[4], const ip_addr_t *a)
{
	out[0] = ip4_addr1(a);
	out[1] = ip4_addr2(a);
	out[2] = ip4_addr3(a);
	out[3] = ip4_addr4(a);
}

static void ask_servers(void)
{
	struct udp_pcb *pcb = udp_new();
	unsigned k;

	if (!pcb) {
		strcpy(net.why, "NO UDP PCB");
		return;
	}
	udp_bind(pcb, IP_ADDR_ANY, 0);
	udp_recv(pcb, ntp_recv, NULL);
	for (k = 0; k < NTP_TRIES && !net.ok; k++) {
		const struct ntp_server *s = &ntp_servers[k % NTP_SERVERS];
		struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, NTP_PKT, PBUF_RAM);
		uint64_t t1;
		err_t e;

		net.tries = k + 1;
		if (!p) {
			strcpy(net.why, "NO PBUF");
			break;
		}
		IP4_ADDR(&srv, s->a, s->b, s->c, s->d);
		t1 = tb_read();
		ntp_request(req, t1 ^ 0x6962617261333630ull); /* any value we can recognise */
		memcpy(p->payload, req, NTP_PKT);
		got = 0;
		e = udp_sendto(pcb, p, &srv, 123);
		pbuf_free(p);
		if (e != ERR_OK)
			net.sent_err++;
		while (!got && tb_read() - t1 < ms_ticks(NTP_WAIT_MS))
			poll_net();
		if (!got)
			continue;
		ntp_parse(rep, req, t1, t4, PPC_TIMEBASE_FREQ, &net.reply);
		if (net.reply.ok) {
			net.ok = 1;
			net.server = (int)(k % NTP_SERVERS);
			net.t4 = t4;
		}
	}
	if (!net.ok) {
		if (net.reply.why && *net.reply.why)
			strcpy(net.why, net.reply.why);
		else
			strcpy(net.why, "NO ANSWER FROM THE TIME SERVERS");
	}
	udp_remove(pcb);
}

static void net_task(void)
{
	ip_addr_t ip, mask, gw;
	uint64_t t0;
	int added = 0, leased = 0;

	thread_prio_low[NET_THREAD] = 1;
	asm volatile ("or 1,1,1");
	net.start = tb_read();
	tmr_fine = tmr_coarse = tmr_arp = net.start;
	__sync_synchronize(); /* start before phase, for the card */

	net.phase = NET_LINK;
	lwip_init();
	IP4_ADDR(&mask, 255, 255, 255, 255);
	IP4_ADDR(&gw, 0, 0, 0, 0);
	IP4_ADDR(&ip, 0, 0, 0, 0);
	if (!netif_add(&nif, &ip, &mask, &gw, NULL, enet_init, ip_input)) {
		strcpy(net.why, "NETIF_ADD FAILED");
		goto out;
	}
	added = 1;
	netif_set_default(&nif);
	if (!netif_is_link_up(&nif)) {
		strcpy(net.why, "NO ETHERNET LINK (CABLE?)");
		goto out;
	}

	net.phase = NET_DHCP;
	t0 = tb_read();
	if (dhcp_start(&nif) != ERR_OK) {
		strcpy(net.why, "DHCP_START FAILED");
		goto out;
	}
	leased = 1;
	while (nif.ip_addr.addr == 0 && ms_since(t0) < DHCP_LIMIT_MS)
		poll_net();
	net.dhcp_ms = ms_since(t0);
	copy_ip(net.ip, &nif.ip_addr);
	copy_ip(net.gw, &nif.gw);
	if (nif.ip_addr.addr == 0) {
		strcpy(net.why, "NO DHCP ANSWER");
		goto out;
	}
	if (nif.gw.addr == 0) {
		strcpy(net.why, "DHCP GAVE NO GATEWAY");
		goto out;
	}

	net.phase = NET_NTP;
	ask_servers();
	if (net.ok)
		strcpy(net.why, "OK");

out:
	if (leased) {
		if (nif.ip_addr.addr != 0) {
			dhcp_release(&nif);
			t0 = tb_read();
			while (ms_since(t0) < 20) /* the release frame out of the NIC */
				poll_net();
		}
		dhcp_stop(&nif);
	}
	if (added)
		enet_quiesce();
	net.total_ms = ms_since(net.start);
	net.phase = NET_DONE;
	thread_prio_low[NET_THREAD] = 0;
	__sync_synchronize();
	net.finished = 1;
	asm volatile ("or 2,2,2");
}

int net_start(void)
{
	return xenon_run_thread_task(NET_THREAD, stack + sizeof(stack) - 256, net_task);
}

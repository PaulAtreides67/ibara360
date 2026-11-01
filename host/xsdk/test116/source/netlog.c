/* Test 40: the log, the recording and the frame log over UDP (see netlog.h). The console only
 * answers POLLs; the PC (tools/netlog/ibaranet.py) asks again for whatever did not arrive. */
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <netinet/in.h>
#include <sys/socket.h>

#include "card.h"
#include "netlog.h"
#include "xplat.h"

#define NL_VERSION 1
#define NL_POLL_HDR 12
#define NL_INFO_HDR 56
#define NL_INFO_STREAM 40         /* end, first, name */
#define NL_DATA_HDR 16
#define NL_NAME 32
#define NL_TITLE 32
#define NL_CHUNK 1400             /* DATA payload: with its header and UDP/IP's, one Ethernet frame */
#define NL_PER_POLL 8             /* DATA datagrams in one POLL's answer at most */
#define NL_RATE 250               /* datagrams a second at most, INFO included (~0.1 ms of T5 each) */
#define NL_BURST 16
#define NL_RECV_MAX 4             /* datagrams read per IO loop at most */
#define NL_FAULT_MAX 256          /* DATA datagrams netlog_ending sends at most */
#define NL_PEER_S 10              /* netlog_ending sends to a PC that polled this recently */
#define NL_SILENT_S 2             /* the card calls a PC silent after this long without a POLL */
#define NL_RETRY_S 5              /* a socket that failed is tried again this often */
#define NL_LOG_RING (1u << 20)    /* the log file: ~13000 lines */
#define NL_REC_RING (8u << 20)    /* the recording: ~70 minutes of play */
#define NL_PERF_RING (16u << 20)  /* the frame log: ~35 minutes */

enum { NL_IDLE, NL_OFF, NL_WAIT, NL_ON, NL_ERR };
/* INFO flags; test 74: PLANNED = the title's own choice (not a fault), HANDOFF = another title next */
enum { NL_ENDING = 1, NL_PLANNED = 2, NL_HANDOFF = 4 };

struct nl_stream {
	char name[NL_NAME];       /* the file's name; "" until named (puts are dropped) */
	uint8_t *buf;             /* the ring (NULL: the bytes are counted, not kept) */
	uint32_t mask;            /* ring size - 1, a power of two */
	volatile uint32_t end;    /* bytes put since the name */
	volatile uint32_t asked;  /* the last POLL's offset for this session */
	volatile int lock;
};

/* the log's ring is there from the start: the lines before the ini (and before the decision to
 * listen) are kept */
static uint8_t log_ring[NL_LOG_RING] __attribute__((aligned(128)));
static struct nl_stream st[NL_STREAMS] = {[NL_LOG] = {.buf = log_ring, .mask = NL_LOG_RING - 1}};

static volatile int state = NL_IDLE;
static unsigned listen_port = NETLOG_PORT;
static char title_text[NL_TITLE];
static uint32_t session;
static uint64_t t_start;

/* IO thread (the card reads them) */
static int fd = -1;
static char err_what[24];
static int err_no;
static uint64_t err_at;
static unsigned open_us;
static uint8_t own_ip[4];
static int addr_known;
static uint64_t addr_asked;
static struct sockaddr_in peer;
static volatile int have_peer;
static volatile uint64_t peer_at;
static volatile unsigned polls, bad, throttled, send_fails, recv_errs;
static volatile unsigned sent;           /* datagrams */
static volatile uint64_t sent_bytes;
static unsigned tokens = NL_BURST;
static uint64_t tok_t;
static volatile unsigned svc_us_max, svc_us_sec; /* netlog_service's time: the longest, the last second's */
static unsigned svc_us_acc;
static uint64_t svc_sec_t;

static void put16(uint8_t *p, unsigned v)
{
	p[0] = (uint8_t)(v >> 8);
	p[1] = (uint8_t)v;
}

static void put32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static unsigned get16(const uint8_t *p)
{
	return (unsigned)p[0] << 8 | p[1];
}

static uint32_t get32(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

/* A stream's puts come from one thread at a time already (the log's under main.c's critical
 * section, the recording's and the frame log's from the file thread, test 41), so the lock never waits in
 * a running title; it is there for a fault, whose handler logs from its own thread. It waits a
 * bounded time, as the holder may be the thread that faulted. 1 = held */
static int lock(struct nl_stream *s)
{
	unsigned spins = 0;

	while (__sync_lock_test_and_set(&s->lock, 1))
		if (++spins > (1u << 24))
			return 0;
	return 1;
}

static void unlock(struct nl_stream *s, int held)
{
	if (held)
		__sync_lock_release(&s->lock);
}

/* the oldest byte the ring still holds */
static uint32_t first_of(const struct nl_stream *s, uint32_t end)
{
	if (!s->buf)
		return end;
	return end > s->mask + 1 ? end - (s->mask + 1) : 0;
}

static void ring_read(const struct nl_stream *s, uint32_t off, uint8_t *out, unsigned n)
{
	while (n) {
		const uint32_t at = off & s->mask, room = s->mask + 1 - at, take = n < room ? n : room;
		memcpy(out, s->buf + at, take);
		out += take;
		off += take;
		n -= take;
	}
}

void netlog_name(int k, const char *name)
{
	int held;

	if ((unsigned)k >= NL_STREAMS || state == NL_OFF)
		return;
	held = lock(&st[k]);
	snprintf(st[k].name, sizeof(st[k].name), "%s", name);
	st[k].end = 0;
	st[k].asked = 0;
	unlock(&st[k], held);
}

void netlog_put(int k, const void *bytes, unsigned n)
{
	struct nl_stream *s;
	const uint8_t *p = bytes;
	uint32_t e;
	int held;

	if ((unsigned)k >= NL_STREAMS || state == NL_OFF || !n)
		return;
	s = &st[k];
	if (!s->name[0])
		return;
	held = lock(s);
	e = s->end;
	if (s->buf) {
		const uint32_t size = s->mask + 1, skip = n > size ? n - size : 0;
		uint32_t w = e + skip, left = n - skip;
		p += skip;
		while (left) {
			const uint32_t at = w & s->mask, take = left < size - at ? left : size - at;
			memcpy(s->buf + at, p, take);
			p += take;
			w += take;
			left -= take;
		}
	}
	__sync_synchronize(); /* the bytes before the end that covers them */
	s->end = e + n;
	unlock(s, held);
}

void netlog_start(int on, unsigned port, const char *title)
{
	const uint64_t t = tb_read();
	uint32_t h = (uint32_t)t ^ (uint32_t)(t >> 32) * 0x9E3779B9u;

	snprintf(title_text, sizeof(title_text), "%s", title);
	if (!on) {
		state = NL_OFF;
		return;
	}
	/* the session: the time base's low bits, mixed (ms of jitter at every power-on) */
	h ^= h >> 16;
	h *= 0x7FEB352Du;
	h ^= h >> 15;
	session = h ? h : 1;
	t_start = t;
	tok_t = t;
	listen_port = port;
	st[NL_REC].buf = malloc(NL_REC_RING);
	st[NL_REC].mask = NL_REC_RING - 1;
	st[NL_PERF].buf = malloc(NL_PERF_RING);
	st[NL_PERF].mask = NL_PERF_RING - 1;
	if (!st[NL_REC].buf || !st[NL_PERF].buf)
		log_printf(C_RED, "NET: OUT OF MEMORY FOR THE RINGS (REC %s, PERF %s): THEIR BYTES ARE COUNTED, NOT SENT",
		           st[NL_REC].buf ? "OK" : "NONE", st[NL_PERF].buf ? "OK" : "NONE");
	__sync_synchronize(); /* the rings and the port before the state */
	state = NL_WAIT;
}

static void fail(const char *what, int e)
{
	snprintf(err_what, sizeof(err_what), "%s", what);
	err_no = e;
	err_at = tb_read();
	state = NL_ERR;
	log_printf(C_RED, "NET: %s FAILED (ERRNO %d), TRYING AGAIN EVERY %u S", what, e, NL_RETRY_S);
}

static void open_socket(void)
{
	const uint64_t t0 = tb_read();
	struct sockaddr_in a;
	int s, e;

	s = socket(AF_INET, SOCK_DGRAM, 0); /* xsdk: XAM's network starts with the first socket */
	if (s < 0) {
		fail("SOCKET", errno);
		return;
	}
	memset(&a, 0, sizeof(a));
	a.sin_family = AF_INET;
	a.sin_port = htons((uint16_t)listen_port);
	a.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(s, (struct sockaddr *)&a, sizeof(a)) < 0) {
		e = errno;
		close(s);
		fail("BIND", e);
		return;
	}
	if (fcntl(s, F_SETFL, O_NONBLOCK) < 0) {
		e = errno;
		close(s);
		fail("NON-BLOCKING MODE", e);
		return;
	}
	fd = s;
	open_us = tb_us(t0, tb_read());
	state = NL_ON;
	log_printf(C_GREEN, "NET: LISTENING ON UDP %u (SOCKET + BIND %u.%02u MS), SESSION %08X", listen_port,
	           open_us / 1000, open_us / 10 % 100, (unsigned)session);
}

/* tokens for the datagrams: NL_RATE a second, at most NL_BURST saved up */
static void refill(uint64_t now)
{
	const uint64_t per = (uint64_t)PPC_TIMEBASE_FREQ / NL_RATE;
	const uint64_t n = (now - tok_t) / per;

	if (!n)
		return;
	if (tokens + n >= NL_BURST) {
		tokens = NL_BURST;
		tok_t = now;
	} else {
		tokens += (unsigned)n;
		tok_t += n * per;
	}
}

static void send_dgram(const struct sockaddr_in *to, const uint8_t *b, unsigned n)
{
	if (sendto(fd, b, n, 0, (const struct sockaddr *)to, sizeof(*to)) < 0) {
		send_fails++;
		err_no = errno;
		return;
	}
	sent_bytes += n;
	__sync_synchronize();
	sent = sent + 1;
}

static void send_info(const struct sockaddr_in *to, unsigned count, unsigned flags)
{
	uint8_t b[NL_INFO_HDR + NL_STREAMS * NL_INFO_STREAM];
	unsigned k;

	memset(b, 0, sizeof(b));
	memcpy(b, "I36I", 4);
	b[4] = NL_VERSION;
	b[5] = NL_STREAMS;
	put16(b + 6, flags);
	put32(b + 8, session);
	put32(b + 12, (uint32_t)((tb_read() - t_start) / (PPC_TIMEBASE_FREQ / 1000)));
	put16(b + 16, count);
	put16(b + 18, NL_CHUNK);
	if (addr_known)
		memcpy(b + 20, own_ip, 4);
	memcpy(b + 24, title_text, strnlen(title_text, NL_TITLE));
	for (k = 0; k < NL_STREAMS; k++) {
		const struct nl_stream *s = &st[k];
		const uint32_t end = s->end;
		uint8_t *o = b + NL_INFO_HDR + k * NL_INFO_STREAM;
		put32(o, end);
		put32(o + 4, first_of(s, end));
		memcpy(o + 8, s->name, strnlen(s->name, NL_NAME));
	}
	send_dgram(to, b, sizeof(b));
}

static void send_data(const struct sockaddr_in *to, unsigned k, uint32_t off, unsigned len)
{
	uint8_t b[NL_DATA_HDR + NL_CHUNK];

	memcpy(b, "I36D", 4);
	b[4] = NL_VERSION;
	b[5] = (uint8_t)k;
	put16(b + 6, len);
	put32(b + 8, session);
	put32(b + 12, off);
	ring_read(&st[k], off, b + NL_DATA_HDR, len);
	send_dgram(to, b, NL_DATA_HDR + len);
}

static void ip_text(char *out, unsigned n, const uint8_t ip[4])
{
	snprintf(out, n, "%u.%u.%u.%u", ip[0], ip[1], ip[2], ip[3]);
}

/* One POLL: an INFO, then the DATA from the PC's offsets (this session only), as far as the
 * PC's budget, NL_PER_POLL and the tokens go. 1 when it answered. */
static int answer(const uint8_t *p, int n, const struct sockaddr_in *from)
{
	struct { unsigned k, len; uint32_t off; } plan[NL_PER_POLL];
	unsigned k, ns, budget, count = 0, i;

	if (n < NL_POLL_HDR || memcmp(p, "I36P", 4) || p[4] != NL_VERSION) {
		bad++;
		return 0;
	}
	ns = p[5];
	budget = get16(p + 6);
	if (n < NL_POLL_HDR + 4 * (int)ns) {
		bad++;
		return 0;
	}
	if (!tokens) {
		throttled++; /* the PC asks again when no answer comes */
		return 0;
	}
	tokens--;
	if (!have_peer || peer.sin_addr.s_addr != from->sin_addr.s_addr) {
		char t[16];
		ip_text(t, sizeof(t), (const uint8_t *)&from->sin_addr.s_addr);
		log_printf(C_GREEN, "NET: POLLED BY %s PORT %u", t, (unsigned)ntohs(from->sin_port));
	}
	peer = *from;
	peer_at = tb_read();
	__sync_synchronize();
	have_peer = 1;
	polls++;
	if (get32(p + 8) == session) {
		for (k = 0; k < NL_STREAMS && k < ns; k++) {
			struct nl_stream *s = &st[k];
			const uint32_t end = s->end, first = first_of(s, end);
			uint32_t o = get32(p + NL_POLL_HDR + 4 * k);
			__sync_synchronize(); /* the end before the bytes under it */
			if (o > end)
				o = end;
			s->asked = o;
			if (o < first) /* gone from the ring: the INFO's first tells the PC */
				o = first;
			while (o < end && count < NL_PER_POLL && budget && tokens) {
				unsigned len = end - o;
				if (len > NL_CHUNK)
					len = NL_CHUNK;
				if (len > budget)
					len = budget;
				plan[count].k = k;
				plan[count].off = o;
				plan[count].len = len;
				count++;
				o += len;
				budget -= len;
				tokens--;
			}
		}
	}
	send_info(from, count, 0);
	for (i = 0; i < count; i++)
		send_data(from, plan[i].k, plan[i].off, plan[i].len);
	return 1;
}

int netlog_service(void)
{
	static uint8_t rx[512];
	uint64_t t0;
	unsigned i, us;
	int did = 0;

	if (state == NL_WAIT || (state == NL_ERR && tb_us(err_at, tb_read()) >= NL_RETRY_S * 1000000u))
		open_socket();
	if (state != NL_ON)
		return 0;
	t0 = tb_read();
	if (!addr_known && tb_us(addr_asked, t0) >= 1000000) {
		addr_asked = t0;
		addr_known = console_address(own_ip);
		if (addr_known) {
			char t[16];
			ip_text(t, sizeof(t), own_ip);
			log_printf(C_GREEN, "NET: CONSOLE ADDRESS %s (PC: python tools/netlog/ibaranet.py %s)", t, t);
		}
	}
	refill(t0);
	for (i = 0; i < NL_RECV_MAX; i++) {
		struct sockaddr_in from;
		socklen_t fl = sizeof(from);
		const int r = (int)recvfrom(fd, rx, sizeof(rx), 0, (struct sockaddr *)&from, &fl);
		if (r < 0) {
			if (errno != EAGAIN && errno != EWOULDBLOCK) {
				recv_errs++;
				err_no = errno;
			}
			break;
		}
		did |= answer(rx, r, &from);
	}
	us = tb_us(t0, tb_read());
	if (us > svc_us_max)
		svc_us_max = us;
	svc_us_acc += us;
	if (tb_us(svc_sec_t, t0) >= 1000000) {
		svc_sec_t = t0;
		svc_us_sec = svc_us_acc;
		svc_us_acc = 0;
	}
	return did;
}

int netlog_ending(int why)
{
	struct sockaddr_in to;
	uint32_t from[NL_STREAMS], end[NL_STREAMS];
	unsigned k, count = 0;

	if (state != NL_ON || !have_peer || tb_us(peer_at, tb_read()) > NL_PEER_S * 1000000u)
		return 0;
	to = peer;
	for (k = 0; k < NL_STREAMS; k++) {
		const struct nl_stream *s = &st[k];
		uint32_t o;
		end[k] = s->end;
		o = s->asked > end[k] ? end[k] : s->asked;
		if (o < first_of(s, end[k]))
			o = first_of(s, end[k]);
		from[k] = o;
		for (; o < end[k] && count < NL_FAULT_MAX; o += NL_CHUNK)
			count++;
	}
	send_info(&to, count, NL_ENDING | (why == NETLOG_END_EXIT ? NL_PLANNED : 0) |
	                          (why == NETLOG_END_HANDOFF ? NL_PLANNED | NL_HANDOFF : 0));
	for (k = 0; k < NL_STREAMS && count; k++) {
		uint32_t o = from[k];
		while (o < end[k] && count) {
			const unsigned len = end[k] - o > NL_CHUNK ? NL_CHUNK : end[k] - o;
			send_data(&to, k, o, len);
			o += len;
			count--;
		}
	}
	return 1;
}

unsigned netlog_sent(void)
{
	return sent;
}

void netlog_rows(char t[NETLOG_ROWS][100], uint32_t c[NETLOG_ROWS])
{
	char own[16] = "?", pc[16];
	const int s = state;
	unsigned k, lag[NL_STREAMS], errs = send_fails + recv_errs + bad;

	t[1][0] = 0;
	c[1] = C_DIM;
	if (s == NL_IDLE) {
		snprintf(t[0], 100, "NET LOG: WAITING FOR THE INI");
		c[0] = C_DIM;
		return;
	}
	if (s == NL_OFF) {
		snprintf(t[0], 100, "NET LOG OFF (NETLOG = 0 IN THE INI)");
		c[0] = C_DIM;
		return;
	}
	if (s == NL_WAIT) {
		snprintf(t[0], 100, "NET LOG: OPENING UDP %u", listen_port);
		c[0] = C_YELLOW;
		return;
	}
	if (s == NL_ERR) {
		snprintf(t[0], 100, "NET LOG: %s FAILED (ERRNO %d), AGAIN EVERY %u S", err_what, err_no, NL_RETRY_S);
		c[0] = C_RED;
		return;
	}
	if (addr_known)
		ip_text(own, sizeof(own), own_ip);
	if (have_peer) {
		const unsigned ago = tb_us(peer_at, tb_read()) / 100000;
		ip_text(pc, sizeof(pc), (const uint8_t *)&peer.sin_addr.s_addr);
		snprintf(t[0], 100, "NET :%u %s  PC %s  POLLS %u  %u.%u S", listen_port, own, pc, polls, ago / 10, ago % 10);
		c[0] = ago < NL_SILENT_S * 10 ? C_GREEN : C_YELLOW;
	} else {
		snprintf(t[0], 100, "NET :%u %s  LISTENING, NO PC YET", listen_port, own);
		c[0] = C_WHITE;
	}
	for (k = 0; k < NL_STREAMS; k++)
		lag[k] = (st[k].end - (have_peer ? st[k].asked : 0)) / 1024;
	snprintf(t[1], 100, "LAG LOG %u REC %u PERF %u KB  SENT %u  %u.%02u MS/S MAX %u.%02u", lag[NL_LOG], lag[NL_REC],
	         lag[NL_PERF], sent, svc_us_sec / 1000, svc_us_sec / 10 % 100, svc_us_max / 1000, svc_us_max / 10 % 100);
	if (errs) {
		const size_t n = strlen(t[1]);
		snprintf(t[1] + n, 100 - n, " ERR %u", errs);
	}
	c[1] = errs ? C_YELLOW : C_WHITE;
}

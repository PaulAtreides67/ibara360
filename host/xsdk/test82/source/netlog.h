/* Test 40 (user 2026-10-21: "add UDP listening to the xbox360 so that ibara360 can send its logs
 * directly to the PC"): the log file, the recording and the frame log over the LAN, the same
 * bytes the IO thread writes to the stick, for tools/netlog/ibaranet.py on the PC.
 *
 * The console listens on UDP port netlog_port (the ini; NETLOG_PORT by default) and only ever
 * answers: the PC asks, so the PC's firewall lets the answers in (they go back to the port it
 * asked from), and nothing goes out while no PC asks.
 *
 *  - POLL (PC -> console): the session the PC follows and, per stream, the offset below which it
 *    has every byte;
 *  - INFO (console -> PC, one per POLL): the session, each stream's file name, its end and the
 *    oldest byte still held, and how many DATA datagrams follow;
 *  - DATA (console -> PC): up to NL_CHUNK bytes of one stream at an offset.
 *
 * A lost datagram is asked for again by the next POLL (the PC's offsets stop at a hole), so the
 * PC's copies are the stick's files byte for byte. Each stream is a ring in memory: a PC further
 * behind than the ring loses the overwritten bytes, and ibaranet.py says so. The datagrams'
 * layout is in ibaranet.py's docstring; every integer is big-endian.
 *
 * Threads: netlog_name / netlog_put on the IO thread (on the game thread before the IO thread
 * runs), netlog_service on the IO thread, netlog_ending on a faulting or ending thread, the rest anywhere.
 * POSIX sockets only: xsdk's (on XAM's) on the console, Linux's in the PC harness. */
#ifndef NETLOG_H
#define NETLOG_H

#include <stdint.h>

enum { NL_LOG, NL_REC, NL_PERF, NL_STREAMS };

#define NETLOG_PORT 3600
#define NETLOG_ROWS 2 /* card rows netlog_rows() fills */

/* A stream's file name on the stick (the name only), from its first byte on. */
void netlog_name(int stream, const char *name);

/* Bytes the stream's file gets, in the file's order. */
void netlog_put(int stream, const void *bytes, unsigned n);

/* Game thread, once the ini is read: on = listen on the port (the IO thread opens the socket),
 * off = no network and nothing kept. title goes into every INFO. */
void netlog_start(int on, unsigned port, const char *title);

/* IO thread, every loop: the socket, the POLLs and their answers. 1 when it sent something. */
int netlog_service(void);

/* A title about to end (a faulting thread, or its own choice), after its lines are in the log:
 * what the last PC to poll has not had yet, sent to it unasked (no rate limit), with the INFO's
 * "ending" flag and, test 74, why (before it every ending read as a fault on the PC). 1 when it
 * sent something (the caller then gives the datagrams time to leave before ending the title). */
enum {
	NETLOG_END_FAULT,   /* the fault handler */
	NETLOG_END_EXIT,    /* planned: back to the dashboard */
	NETLOG_END_HANDOFF  /* planned: XamLoaderLaunchTitle, another title next (launch.h) */
};
int netlog_ending(int why);

/* Datagrams sent so far (the frame log's flag 128: some went out during the frame). */
unsigned netlog_sent(void);

/* main.c: the console's own IPv4 address once XAM has one (1), else 0; asked after the socket
 * is open, once a second until it answers */
int console_address(uint8_t ip[4]);

void netlog_rows(char text[NETLOG_ROWS][100], uint32_t color[NETLOG_ROWS]);

#endif

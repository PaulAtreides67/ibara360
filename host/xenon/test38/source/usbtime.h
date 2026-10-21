/* Test 24: where the USB thread's time goes between two pad reads (source/main.c).
 *
 * Every stretch of the USB thread's time (T5) belongs to one section; a pad read splits the
 * time since the last read by section. Gaps from PG_EVENT_US on are kept in pg_events[] for
 * the frame log (source/prof.c, "# pg" lines). All of it runs on the USB thread only (the
 * loop, the writes, the pad reads inside them and the frame log's text), so no locks.
 *
 * Test 25: test 24 found the ~17-22 ms gaps = the card render (T5 at low priority runs ~21x
 * slower than at medium). t5_pad_tick() reads the pads inside T5's long work (the card
 * render, the frame log's text) once PAD_IO_US have passed since the last read; the
 * calibration's section became those reads (S_TPOLL). */
#ifndef USBTIME_H
#define USBTIME_H

#include <stdint.h>

enum {
	S_POLL,   /* usb_do_poll */
	S_PADS,   /* pads_update after the read */
	S_PROBE,  /* its connection probe (usbctrl_set_rumble) */
	S_REC,    /* rec_service outside its writes */
	S_PROF,   /* prof_service outside its writes */
	S_DRAW,   /* the card: draw_card */
	S_COPY,   /* the card: raster -> texture */
	S_FLUSH,  /* the card: memdcbst */
	S_TPOLL,  /* test 25: pad reads by t5_pad_tick (card render, frame log text) */
	S_WAIT,   /* the wait for the next loop */
	S_IOPOLL, /* pad reads inside a write (pads_io_poll) */
	S_WRITE,  /* file operations (wgate_io 1 .. 0) */
	NSEC
};

/* where a pad read ran (test 25) */
enum {
	PR_LOOP, /* usb_task's loop, after usb_do_poll */
	PR_IO,   /* inside a file write (pads_io_poll) */
	PR_CARD, /* inside the card render (t5_pad_tick) */
	PR_LOG,  /* inside the frame log's text (t5_pad_tick) */
	NPR
};

#define PG_EVENT_US 2000 /* gaps from here on go to the frame log (test 24: 4000) */
#define PG_EVENTS 1024   /* ring of the latest ones (power of 2) */

struct pg_event {
	uint32_t frame;          /* emulated frame at the read that ended the gap */
	uint32_t gap_us;
	uint8_t where, wrote;    /* PR_* of the read / a write ran in the gap */
	uint32_t sec_us[NSEC];   /* the gap by section */
};

extern struct pg_event pg_events[PG_EVENTS];
extern unsigned pg_event_n;
extern const char *const pg_sec_name[NSEC];
extern const char *const pg_where_name[NPR];

/* test 25: a pad read if PAD_IO_US have passed since the last one, while usb_task allows it
 * (card render, frame log text); a no-op anywhere else */
void t5_pad_tick(void);

#endif

/* Test 14d: libxenon's drivers/time/time.c (udelay, mdelay, delay), linked in its place:
 * this object defines all three, so the archive's time.o is never pulled in (checked with
 * the link map). Two changes:
 *
 *  - after the wait the thread goes back to its own priority: low (or 1,1,1) on the
 *    threads in thread_prio_low[] (the USB thread), medium (or 2,2,2) elsewhere, as
 *    libxenon does. libxenon's version always ends at medium, so every udelay in the USB
 *    stack (tinyehci's handshake polls every 10 us) put the USB thread back to medium
 *    priority, next to the blitter band on the same core (test 14c: that band 1.8x slower
 *    during each file write);
 *  - the timebase is read with tb_read() (TBU, TBL, TBU again on a carry), not mftb().
 *
 * Test 19: while main.c's pad_io_pir names the waiting thread (it is inside a file write,
 * wgate_io), the wait calls pads_io_poll() every pad_io_ticks, so the pads are still read
 * while tinyehci waits for the stick (test 18: none for up to 0.47 s = ghost inputs).
 * pads_io_poll guards against nesting (the OHCI code it runs may wait too).
 *
 * The wait itself is libxenon's: db16cyc (or 31,31,31) in the loop. */
#include <stdint.h>

#include <ppc/timebase.h>

uint64_t tb_read(void);                /* main.c */
extern volatile int thread_prio_low[6]; /* main.c: 1 = this thread runs at low priority */
volatile unsigned tdelay_calls[6];      /* per thread, for the card */
extern volatile unsigned pad_io_pir;    /* main.c, test 19: PIR + 1 of the writing thread */
extern const unsigned pad_io_ticks;     /* main.c: pad read period inside a write */
void pads_io_poll(void);                /* main.c */
static uint64_t pad_next;               /* only the writing thread uses it */

static void tdelay(uint64_t i)
{
	uint64_t t = tb_read() + i, now;
	unsigned pir;
	int pads;

	asm volatile ("mfspr %0, 1023" : "=r" (pir)); /* PIR */
	pads = pad_io_pir == pir + 1;
	while ((now = tb_read()) < t) {
		if (pads && now >= pad_next) {
			pad_next = now + pad_io_ticks;
			pads_io_poll();
		}
		asm volatile ("or 31,31,31");
	}
	if (pir < 6 && thread_prio_low[pir])
		asm volatile ("or 1,1,1");
	else
		asm volatile ("or 2,2,2");
	if (pir < 6)
		tdelay_calls[pir]++;
}

void udelay(int u)
{
	tdelay(((long long)PPC_TIMEBASE_FREQ) * u / 1000000);
}

void mdelay(int u)
{
	tdelay(((long long)PPC_TIMEBASE_FREQ) * u / 1000);
}

void delay(int u)
{
	tdelay(((long long)PPC_TIMEBASE_FREQ) * u);
}

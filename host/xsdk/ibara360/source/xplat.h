/* xsdk port of test 39 (the .xex build): what the sources took from libxenon's ppc/timebase.h,
 * and the hardware-thread helpers every thread uses. The console's time base runs at the CPU's
 * 3192 MHz over 64, under the retail kernel as under XeLL (xsdk docs/HARDWARE.md, "The time base
 * runs at 49.875 MHz"; libxenon drivers/ppc/timebase.h), so every tick count of tests 1-39 keeps
 * its meaning. */
#ifndef XPLAT_H
#define XPLAT_H

#include <stdint.h>

#define PPC_TIMEBASE_FREQ (3192000000LL / 64LL) /* as libxenon's, same arithmetic */

uint64_t tb_read(void);
unsigned tb_us(uint64_t a, uint64_t b);

/* the hardware thread (0-5) the caller runs on, from the kernel's processor control region */
int my_thread(void);

/* SMT issue priority of the calling hardware thread (titles run in supervisor state: the fault
 * context's MSR is 0xB030, no PR bit, xsdk docs/HARDWARE.md "How the kernel hands a title its
 * faults"); medium is the kernel's default */
static inline void smt_low(void)
{
	__asm__ volatile("or 1,1,1");
}

static inline void smt_medium(void)
{
	__asm__ volatile("or 2,2,2");
}

/* a spin wait's pause: lets the core's other hardware thread issue (libxenon's db16cyc) */
static inline void smt_pause(void)
{
	__asm__ volatile("or 31,31,31");
}

/* a busy wait that leaves the hardware thread to any kernel thread that is ready on it: spins at
 * low priority, yielding (NtYieldExecution, which also hands over to lower priorities) every
 * YIELD_US. 0 when cond() came true, -1 after timeout_us (0 = no limit) */
void spin_yield_until(int (*cond)(void *), void *arg, unsigned timeout_us);

#endif

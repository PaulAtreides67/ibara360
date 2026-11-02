/* Test 72, the launcher's time base (xplat.h, card.h; the network log's): TBU/TBL/TBU, as the games' main.c. A file of its
 * own, so the PC harness puts its clock in its place. */
#include <stdint.h>

#include "xplat.h"

uint64_t tb_read(void)
{
	uint32_t u, l, u2;

	do {
		__asm__ volatile("mftbu %0" : "=r"(u));
		__asm__ volatile("mftbl %0" : "=r"(l));
		__asm__ volatile("mftbu %0" : "=r"(u2));
	} while (u != u2);
	return ((uint64_t)u << 32) | l;
}

unsigned tb_us(uint64_t a, uint64_t b)
{
	return (unsigned)((b - a) * 1000000 / PPC_TIMEBASE_FREQ);
}

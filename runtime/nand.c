/* U2: Samsung K9F1G08U0M NAND (2048+64-byte pages, 64 pages per block, 2+2 address
 * cycles), the read-side subset of MAME 0.289 nandflash.cpp. Programs and erases are
 * accepted but the games only read. MAME's device is never busy, so neither is this. */
#include <string.h>

#include "cv1k.h"

u8 *cv1k_nand;
u32 cv1k_nand_size;

enum { M_INIT, M_READ, M_PROGRAM, M_ERASE, M_READSTATUS, M_READID, M_RANDOM_OUT, M_RANDOM_IN };

#define PAGE_DATA 2048u
#define PAGE_TOTAL 2112u
#define NUM_PAGES 65536u

static int mode, addr_ptr;
static u32 page_addr, byte_addr;
static u8 status = 0xC0;
static const u8 nand_id[4] = { 0xEC, 0xF1, 0x00, 0x15 };

void nand_reset(void)
{
	mode = M_INIT;
	addr_ptr = 0;
	page_addr = byte_addr = 0;
	status = 0xC0;
}

void nand_command_w(u8 v)
{
	switch (v) {
	case 0xFF: mode = M_INIT; status = (status & 0x80) | 0x40; break;
	case 0x00: mode = M_READ; addr_ptr = 0; break;
	case 0x30:
		if (mode != M_READ || addr_ptr < 4)
			mode = M_INIT;
		break;
	case 0x05:
		if (mode == M_READ || mode == M_RANDOM_OUT) {
			mode = M_RANDOM_OUT;
			addr_ptr = 0;
		} else {
			mode = M_INIT;
		}
		break;
	case 0xE0:
		if (mode != M_RANDOM_OUT)
			mode = M_INIT;
		break;
	case 0x70: mode = M_READSTATUS; break;
	case 0x90: mode = M_READID; addr_ptr = 0; break;
	case 0x80: mode = M_PROGRAM; addr_ptr = 0; break;
	case 0x10: case 0x15: mode = M_INIT; status |= 0x40; break;
	case 0x60: mode = M_ERASE; page_addr = 0; addr_ptr = 0; break;
	case 0xD0: mode = M_INIT; status = (status & 0x80) | 0x40; break;
	default:
		rt_log("nand: unsupported command %02X\n", v);
		mode = M_INIT;
		break;
	}
}

void nand_address_w(u8 v)
{
	switch (mode) {
	case M_READ:
	case M_PROGRAM:
		if (addr_ptr == 0)
			page_addr = 0;
		if (addr_ptr < 2) {
			byte_addr &= ~(0xFFu << (addr_ptr * 8));
			byte_addr |= (u32)v << (addr_ptr * 8);
		} else if (addr_ptr < 4) {
			page_addr &= ~(0xFFu << ((addr_ptr - 2) * 8));
			page_addr |= (u32)v << ((addr_ptr - 2) * 8);
		}
		addr_ptr++;
		break;
	case M_ERASE:
		if (addr_ptr < 2) {
			page_addr &= ~(0xFFu << (addr_ptr * 8));
			page_addr |= (u32)v << (addr_ptr * 8);
		}
		addr_ptr++;
		break;
	case M_RANDOM_OUT:
	case M_RANDOM_IN:
		if (addr_ptr < 2) {
			byte_addr &= ~(0xFFu << (addr_ptr * 8));
			byte_addr |= (u32)v << (addr_ptr * 8);
		}
		addr_ptr++;
		break;
	case M_READID:
		if (addr_ptr == 0)
			byte_addr = v;
		addr_ptr++;
		break;
	}
}

u8 nand_data_r(void)
{
	u8 r = 0;
	switch (mode) {
	case M_READ:
	case M_RANDOM_OUT:
		if (byte_addr < PAGE_TOTAL && page_addr < NUM_PAGES) {
			u32 off = page_addr * PAGE_TOTAL + byte_addr;
			r = off < cv1k_nand_size ? cv1k_nand[off] : 0xFF;
		} else {
			r = 0xFF;
		}
		byte_addr++;
		break;
	case M_READSTATUS:
		r = status & 0xC1;
		break;
	case M_READID:
		r = byte_addr < 4 ? nand_id[byte_addr] : 0;
		byte_addr++;
		break;
	}
	return r;
}

void nand_data_w(u8 v)
{
	(void)v;    /* page program data: the games never write U2 */
}

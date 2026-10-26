/* RTC9701 serial RTC + 256-word EEPROM, after MAME 0.289 rtc9701.cpp (BSD-3-Clause).
 * The board drives it through EEPROMOUT (0x10C00001): bit0 data, bit1 clock, bit2 CS
 * (active low). MAME only calls the line callbacks when a bit changes, in bit order. */
#include <string.h>

#include "cv1k.h"
#include "state.h"

enum { CMD_WAIT, RTC_READ, RTC_WRITE, EEPROM_READ, EEPROM_WRITE, AFTER_WRITE_ENABLE };

static int latch, reset_line, state, cmd_pos, cur_cmd, addr_pos, data_pos;
static u32 cur_addr;
static u16 cur_data;
static u16 eeprom[0x100];
static struct { u8 sec, min, hour, day, wday, month, year; } rtc;
static u8 port_prev;

u16 *rtc9701_eeprom(void)
{
	return eeprom;
}

/* test 69: the serial interface in a save state (state.h); the clock goes on and the EEPROM keeps what the game wrote
 * (its high scores, its settings) */
void rtc9701_state(rt_sbuf *b)
{
	ST(b, latch);
	ST(b, reset_line);
	ST(b, state);
	ST(b, cmd_pos);
	ST(b, cur_cmd);
	ST(b, addr_pos);
	ST(b, data_pos);
	ST(b, cur_addr);
	ST(b, cur_data);
	ST(b, port_prev);
}

void rtc9701_reset(void)
{
	latch = reset_line = state = cmd_pos = cur_cmd = addr_pos = data_pos = 0;
	cur_addr = 0;
	cur_data = 0;
	port_prev = 0x04;
}

static u8 bcd(int v)
{
	return (u8)(((v / 10) << 4) | (v % 10));
}

void rtc9701_set_time(int year, int month, int day, int wday, int hour, int min, int sec)
{
	rtc.day = bcd(day);
	rtc.month = bcd(month);
	rtc.wday = (u8)(1 << (wday - 1));
	rtc.year = bcd(year % 100);
	rtc.hour = bcd(hour);
	rtc.min = bcd(min);
	rtc.sec = bcd(sec);
}

/* the time registers as the game reads them (BCD; wday one-hot), for a host's display */
void rtc9701_get(u8 out[7])
{
	out[0] = rtc.sec;
	out[1] = rtc.min;
	out[2] = rtc.hour;
	out[3] = rtc.wday;
	out[4] = rtc.day;
	out[5] = rtc.month;
	out[6] = rtc.year;
}

void rtc9701_tick_second(void)
{
	static const u8 dpm[12] = { 0x31, 0x28, 0x31, 0x30, 0x31, 0x30, 0x31, 0x31, 0x30, 0x31, 0x30, 0x31 };
	int dpm_count;
	rtc.sec++;
	if ((rtc.sec & 0x0f) >= 0x0a) { rtc.sec += 0x10; rtc.sec &= 0xf0; }
	if ((rtc.sec & 0xf0) >= 0x60) { rtc.min++; rtc.sec = 0; }
	if ((rtc.min & 0x0f) >= 0x0a) { rtc.min += 0x10; rtc.min &= 0xf0; }
	if ((rtc.min & 0xf0) >= 0x60) { rtc.hour++; rtc.min = 0; }
	if ((rtc.hour & 0x0f) >= 0x0a) { rtc.hour += 0x10; rtc.hour &= 0xf0; }
	if ((rtc.hour & 0xff) >= 0x24) { rtc.day++; rtc.wday <<= 1; rtc.hour = 0; }
	if (rtc.wday & 0x80) rtc.wday = 1;
	if ((rtc.day & 0x0f) >= 0x0a) { rtc.day += 0x10; rtc.day &= 0xf0; }
	dpm_count = (rtc.month & 0xf) + (((rtc.month & 0x10) >> 4) * 10) - 1;
	if (dpm_count < 0 || dpm_count > 11)
		dpm_count = 0;
	if (((rtc.year % 4) == 0) && rtc.month == 2) {
		if ((rtc.day & 0xff) >= dpm[dpm_count] + 1 + 1) { rtc.month++; rtc.day = 0x01; }
	} else if ((rtc.day & 0xff) >= dpm[dpm_count] + 1) {
		rtc.month++;
		rtc.day = 0x01;
	}
	if ((rtc.month & 0x0f) >= 0x0a) rtc.month = 0x10;
	if (rtc.month >= 0x13) { rtc.year++; rtc.month = 1; }
	if ((rtc.year & 0x0f) >= 0x0a) { rtc.year += 0x10; rtc.year &= 0xf0; }
	if ((rtc.year & 0xf0) >= 0xa0) rtc.year = 0;
}

static u8 rtc_read(u32 off)
{
	switch (off) {
	case 0: return rtc.sec;
	case 1: return rtc.min;
	case 2: return rtc.hour;
	case 3: return rtc.wday;
	case 4: return rtc.day;
	case 5: return rtc.month;
	case 6: return rtc.year;
	case 7: return 0x20;
	}
	return 0;
}

static void rtc_write(u32 off, u8 v)
{
	switch (off) {
	case 0: rtc.sec = v; break;
	case 1: rtc.min = v; break;
	case 2: rtc.hour = v; break;
	case 3: rtc.wday = v; break;
	case 4: rtc.day = v; break;
	case 5: rtc.month = v; break;
	case 6: rtc.year = v; break;
	}
}

int rtc9701_read_bit(void)
{
	if (state == RTC_READ || state == EEPROM_READ)
		return (cur_data >> (data_pos - 1)) & 1;
	return 0;
}

static void set_cs_line(int st)
{
	reset_line = st;
	if (reset_line) {
		state = CMD_WAIT;
		cmd_pos = cur_cmd = addr_pos = data_pos = 0;
		cur_addr = 0;
		cur_data = 0;
	}
}

static void start(int st)
{
	state = st;
	cmd_pos = addr_pos = data_pos = 0;
	cur_addr = 0;
	cur_data = 0;
}

static void set_clock_line(int st)
{
	if (reset_line || st != 1)
		return;
	switch (state) {
	case CMD_WAIT:
		cur_cmd = (cur_cmd << 1) | (latch & 1);
		if (++cmd_pos == 4) {
			cmd_pos = 0;
			if (cur_cmd == 0x0) start(RTC_WRITE);
			else if (cur_cmd == 0x2) start(EEPROM_WRITE);
			else if (cur_cmd == 0x6) state = AFTER_WRITE_ENABLE;
			else if (cur_cmd == 0x8) start(RTC_READ);
			else if (cur_cmd == 0xA) start(EEPROM_READ);
			cur_cmd = 0;
		}
		break;
	case AFTER_WRITE_ENABLE:
		if (++cmd_pos == 12) {
			cmd_pos = 0;
			state = CMD_WAIT;
		}
		break;
	case RTC_WRITE:
		cmd_pos++;
		if (cmd_pos <= 4) {
			addr_pos++;
			cur_addr = (cur_addr << 1) | (latch & 1);
		}
		if (cmd_pos > 4) {
			data_pos++;
			cur_data = (u16)((cur_data << 1) | (latch & 1));
		}
		if (cmd_pos == 12) {
			cmd_pos = 0;
			rtc_write(cur_addr, (u8)cur_data);
			state = CMD_WAIT;
		}
		break;
	case EEPROM_READ:
		cmd_pos++;
		if (cmd_pos <= 12) {
			addr_pos++;
			cur_addr = (cur_addr << 1) | (latch & 1);
			if (cmd_pos == 12) {
				cur_data = eeprom[(cur_addr >> 1) & 0xff];
				data_pos = 16;
			}
		}
		if (cmd_pos > 12)
			data_pos--;
		if (cmd_pos == 28)
			cmd_pos = 0;
		break;
	case EEPROM_WRITE:
		cmd_pos++;
		if (cmd_pos <= 12) {
			addr_pos++;
			cur_addr = (cur_addr << 1) | (latch & 1);
		}
		if (cmd_pos > 12) {
			data_pos++;
			cur_data = (u16)((cur_data << 1) | (latch & 1));
		}
		if (cmd_pos == 28) {
			cmd_pos = 0;
			eeprom[(cur_addr >> 1) & 0xff] = cur_data;
			state = CMD_WAIT;
		}
		break;
	case RTC_READ:
		cmd_pos++;
		if (cmd_pos <= 4) {
			addr_pos++;
			cur_addr = (cur_addr << 1) | (latch & 1);
			if (cmd_pos == 4) {
				cur_data = rtc_read(cur_addr);
				data_pos = 8;
			}
		}
		if (cmd_pos > 4)
			data_pos--;
		if (cmd_pos == 12)
			cmd_pos = 0;
		break;
	}
}

void rtc9701_port_w(u8 v)
{
	u8 chg = v ^ port_prev;
	port_prev = v;
	if (chg & 0x01)
		latch = v & 1;
	if (chg & 0x02)
		set_clock_line((v >> 1) & 1);
	if (chg & 0x04)
		set_cs_line(!(v & 0x04));
}

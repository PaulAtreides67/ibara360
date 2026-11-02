/* rankinit.c (test 101; work/g101/rankinit/REPORT.md): the debug menu's INITIALIZE RANKINGS (user: "include an
 * INITIALIZE RANKINGS option in the debug menu so one doesn't need to open the service menu for it").
 *
 * Each game's TEST MODE has an INITIALIZE RANKING page (ibara 0C054BA0 state 4, Kuro BL 0C066680): the factory
 * default writer (ibara 0C05A640, Kuro BL 0C06C140) fills the four RAM tables and the "table had a name entry" flags
 * (1, 0, 0, 0) and clears the save request; the packer (0C055B90 / 0C067580) puts them into the game's EEPROM image;
 * rtc_eeprom_write(image + 0x40, word 0x20, 404 bytes) = EEPROM words 0x20-0xE9. This does the same writes, in the
 * same order, to the same bytes; the game's incremental saver's shadow (ibara 0C28651C, Kuro BL 0C2B1824) is left
 * as the game leaves it. ARRANGE (ibara's program): the arcade's clear, then table 3 (ARRANGE's own, arr_table) = the
 * PS2's ARRANGE defaults, as settings.c's eeprom_arrange_table would make it at the next power-on.
 *
 * Entry in RAM (0x1C bytes, tables 0x16C apart): +0 score u32, +4 ship u32, +8 / +0xC / +0x10 the initials as
 * 0x808080nn, +0x14 u32 0, +0x18 cleared, +0x19 side. Packed (10 bytes, EEPROM byte 0x40 + 100t + 10e): score BE32,
 * the initials' low bytes, side, ship's low byte, cleared. EEPROM byte k = word k / 2's high byte when k is even. */
#include <stdint.h>

#include "cv1k.h"
#include "romload.h"
#include "rankinit.h"

struct rank_game {
	uint32_t tables;   /* table 0 entry 0 */
	uint32_t flags;    /* u8[4]: table t has had a name entry (the attract's ranking skips tables at 0) */
	uint32_t save_req; /* u8: a name entry asks the incremental saver for a save; the clear sets it 0 */
	uint32_t image;    /* the game's 512-byte EEPROM image (byte k = EEPROM byte k) */
	uint32_t unit;     /* entry e of table t: (10 - e) x (t + 1) x unit */
};

static const struct rank_game rank_games[2] = {
	[SET_IBARA] = {0x0C2859A8u, 0x0C392D54u, 0x0C28628Cu, 0x0C26C8D8u, 100000u},
	[SET_IBARABLK] = {0x0C2ABAACu, 0x0C3C43BCu, 0x0C2B0390u, 0x0C286110u, 1000000u},
};

#define RANK_ENTRY 0x1Cu
#define RANK_TABLE 0x16Cu
#define RANK_ARR_UNIT 1000000u /* ARRANGE's table 3: (10 - e) x 4 x 1,000,000 = 40,000,000 .. 4,000,000 (SLPM-66301 0x13D4A0) */

static void put32(uint32_t a, uint32_t v)
{
	u8 *p = RAMP(a);

	p[0] = (u8)(v >> 24);
	p[1] = (u8)(v >> 16);
	p[2] = (u8)(v >> 8);
	p[3] = (u8)v;
}

static uint32_t get32(uint32_t a)
{
	const u8 *p = RAMP(a);

	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

int rank_init(int set, int arrange)
{
	const struct rank_game *g;
	uint16_t *w = rtc9701_eeprom();
	int t, e, k;

	if ((set != SET_IBARA && set != SET_IBARABLK) || (arrange && set != SET_IBARA))
		return -1;
	g = &rank_games[set];
	/* the default writer (0C05A640 / 0C06C140), its store order */
	for (t = 0; t < 4; t++) {
		for (e = 0; e < 10; e++) {
			const uint32_t a = g->tables + (uint32_t)t * RANK_TABLE + (uint32_t)e * RANK_ENTRY;
			const uint32_t unit = arrange && t == 3 ? RANK_ARR_UNIT : g->unit;
			/* ship: ibara 8 (none: the ranking's dash, TOP on the top row); Kuro BL its own pattern 0, 9, 6, 15, ... */
			const uint32_t ship = set == SET_IBARA ? 8u : (uint32_t)((e & 1) << 3 | (e & 2) << 1 | (e & 3));
			put32(a, (uint32_t)(10 - e) * (uint32_t)(t + 1) * unit);
			put32(a + 4, ship);
			*RAMP(a + 0x19) = 2;
			put32(a + 8, 0x80808043u);  /* 'C' */
			put32(a + 0xC, 0x80808041u); /* 'A' */
			put32(a + 0x10, 0x80808056u); /* 'V' */
			put32(a + 0x14, 0);
			*RAMP(a + 0x18) = 0;
		}
		*RAMP(g->flags + (uint32_t)t) = 0;
	}
	*RAMP(g->flags) = 1;
	*RAMP(g->save_req) = 0;
	/* the packer (0C055B90 / 0C067580) into the image */
	for (t = 0; t < 4; t++)
		for (e = 0; e < 10; e++) {
			const uint32_t a = g->tables + (uint32_t)t * RANK_TABLE + (uint32_t)e * RANK_ENTRY;
			u8 *p = RAMP(g->image + 0x40u + (uint32_t)(t * 10 + e) * 10u);
			const uint32_t s = get32(a);
			p[0] = (u8)(s >> 24);
			p[1] = (u8)(s >> 16);
			p[2] = (u8)(s >> 8);
			p[3] = (u8)s;
			p[4] = *RAMP(a + 0xB);
			p[5] = *RAMP(a + 0xF);
			p[6] = *RAMP(a + 0x13);
			p[7] = *RAMP(a + 0x19);
			p[8] = *RAMP(a + 7);
			p[9] = *RAMP(a + 0x18);
		}
	for (t = 0; t < 4; t++)
		*RAMP(g->image + 0x1D0u + (uint32_t)t) = *RAMP(g->flags + (uint32_t)t);
	/* rtc_eeprom_write(image + 0x40, 0x20, 404): words 0x20-0xE9 */
	for (k = 0x20; k < 0xEA; k++)
		w[k] = (uint16_t)(*RAMP(g->image + 2u * (uint32_t)k) << 8 | *RAMP(g->image + 2u * (uint32_t)k + 1));
	return 0;
}

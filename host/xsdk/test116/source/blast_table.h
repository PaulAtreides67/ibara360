/* blast_table.h (work/g98/blast, 2026-10-31): the NOMINAL length of a tap bomb in game logic frames, by game, the
 * ship's bomb kind, the bomb power and (ibara / ARRANGE kinds 3 and 7 only) the player side, for the GADGETS BLAST
 * row. Research: the g98 blast subagent's handback (session 957ca3f6); scripts and logs in that session's
 * scratchpad bl/.
 *
 *   game  0 = ibara, 1 = Kuro BL, 2 = ARRANGE. ARRANGE runs ibara's bomb code unpatched; Kuro BL's bomb code is an
 *         exact copy of ibara's. Only the number of circular-bomb parents differs (see kinds 3 and 7).
 *   kind  the bomb dispatch's ship kind 0..7 (ibara / ARRANGE: player record +7, the low byte of the u32 at +4;
 *         Kuro BL: player record +7 & 7):
 *           0 forward pairs, angled   (ibara Bond A; Kuro STRAIGHT BOMB TYPE A)       spawner 0C069710 / 0C07A7B0
 *           1 forward pairs, straight (ibara Bond B; Kuro STRAIGHT BOMB TYPE B)       0C069880 / 0C07A920
 *           2 two homing bombs        (ibara Bond C; Kuro STRAIGHT BOMB TYPE C)       0C0699F0 / 0C07AA90
 *           3 circular explosion      (ibara Bond D; Kuro STRAIGHT BOMB TYPE D)       0C068570 / 0C079600
 *           4 shards, forward fan     (ibara Dyne A; Kuro SPREAD BOMB TYPE A)         0C0691E0 / 0C07A280
 *           5 shards, behind the move (ibara Dyne B; Kuro SPREAD BOMB TYPE B)         0C069370 / 0C07A410
 *           6 shards, all directions  (ibara Dyne C; Kuro SPREAD BOMB TYPE C)         0C069060 / 0C07A100
 *           7 circular explosion      (ibara Dyne D; Kuro SPREAD BOMB TYPE D)         0C068570 / 0C079600
 *   power 1..40 = the bomb fragments spent: 40 for a full bomb (bombs > 0, or a full gauge of 40), else the gauge
 *         (1..39) when bombs == 0: blast_power() of the values the frame BEFORE the bomb (the spawners zero the power
 *         byte +0x25F / Kuro +0x266 in the bomb's own frame, except kinds 3 and 7, which leave it).
 *   side  0 = 1P, 1 = 2P: only ibara / ARRANGE kinds 3 and 7 use it (0C068570 makes side + 1 parents).
 *
 * Length = gadgets.c's bm_last: logic frames from the first vblank that shows the bomb's records to the first one
 * that shows no type 0 or 3-8 record (leave the flash, types 9/10, out of the end test: pickups and respawns spawn
 * flashes too). Hits never end a bomb record in these games; records past the screen edge are erased early (kinds
 * 0/1 at the top for power >= 30, kind 2 without a target from about power 12, kinds 4-6 often) and the gadget then
 * measures less than this reference. Kinds 4-6 draw a random delay per shard: the reference is the largest
 * possible delay. +-1 frame from the table's slot order.
 *
 * Verified on the PC harness (test 97 binaries; TRAINING; ship unmoved at its spawn point; every power 1..40 x every
 * kind x all three games, 960 bombs): every bomb with no record leaving the screen matched these values (kinds 4-6:
 * the same formula with the bomb's actual largest delay). Not run: the 2P side (ibara / ARRANGE kinds 3/7 with two
 * parents use Kuro BL kind 7's measured row, the same code). */
#ifndef BLAST_TABLE_H
#define BLAST_TABLE_H

/* circular bombs (kinds 3, 7): 4 x power + 71, cut short where the 128-slot table is full and the last sparks are
 * not made (measured, nothing else in the table) */
static const unsigned char blast_circ[2][40] = {
	/* one parent: Kuro kind 3, ibara / ARRANGE 1P kinds 3 and 7 */
	{75, 79, 83, 87, 91, 95, 99, 103, 107, 111, 114, 114, 123, 127, 131, 135, 139, 143, 147, 151,
	 155, 159, 162, 162, 171, 175, 179, 183, 187, 191, 195, 199, 203, 207, 210, 210, 219, 223, 227, 231},
	/* two parents: Kuro kind 7, ibara / ARRANGE 2P kinds 3 and 7 */
	{75, 79, 83, 87, 91, 92, 92, 92, 92, 92, 92, 119, 123, 127, 131, 135, 139, 140, 140, 140,
	 140, 140, 163, 140, 171, 175, 179, 183, 187, 188, 188, 188, 188, 188, 188, 215, 219, 223, 227, 231},
};

static inline int blast_len(int game, int kind, int power, int side)
{
	if (power < 1)
		power = 1;
	if (power > 40)
		power = 40;
	switch (kind & 7) {
	case 0: /* pairs: waves of min(power, 10) explosions 4 frames apart, all waves at once, then the last explosion's
	         * 64 frames; a 1-fragment wave still takes 8 frames */
	case 1:
		return 4 * (power < 2 ? 2 : power > 10 ? 10 : power) + 63;
	case 2: /* two homing bombs: power + 1 explosions 4 frames apart, then the last one's 64 frames */
		return 4 * power + 67;
	case 3: /* circular: 17 frames flying, 8 frames, then 3 sparks a frame for 4 x power frames, each 48 frames */
	case 7: {
		const int two = game == 1 ? (kind & 4) != 0 : (side & 1) != 0;
		return blast_circ[two][power - 1];
	}
	case 4: /* 2 x power shards: delay rand(3 x power) + 4 (largest 3 x power + 3), 16 frames slowing, 64 exploding */
	case 5:
		return 3 * power + 82;
	default: /* 6: 2 x power shards: delay rand(5 x power) + 1 (largest 5 x power), 16 + 64 frames */
		return 5 * power + 79;
	}
}

/* the power a tap bomb spends, from the player's bombs and gauge the frame before it */
static inline int blast_power(int bombs, int gauge)
{
	return (bombs > 0 || gauge >= 40) ? 40 : gauge;
}

#endif

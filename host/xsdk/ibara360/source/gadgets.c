/* GADGETS (test 58's info card, renamed in test 59; gadgets.h). The background is gen/card's 1280x720 picture (Baffo's
 * artwork, tools/card/mkcard.py) drawn under the game picture; over it, quads from gen/card's atlas (the plates, the
 * artwork's sticks, buttons, digits, items and medals, the game's font, a white square for bars) tinted and faded by
 * their corner colour (shaders/card.vert, card.frag). The values come from game RAM, read on the game thread at each
 * emulated vblank (gadgets_frame); the quads are built in present() into one of GD_SLOTS blocks of GPU memory, each
 * written again only once the frame that drew with it has been shown.
 *
 * Test 60: a view (GV_*) is a canvas the quads are placed in, turned into the front buffer by xf(): 1280x720 (16:9,
 * tate off; test 58's), 960x720 (4:3, tate off: a 420x720 panel at its right, the game at its left) and 720x1280
 * (tate on a 16:9 display, upright as the player sees it: two 720x160 bands at its top and bottom, the game between;
 * turned a quarter to the TV's top edge, left or right). Kuro BL has its own background (its title logo) and RAM
 * (map_blk).
 *
 * Test 61 (user 2026-10-24): the score in the artwork's large digits; MUSIC under BOSS on 16:9; ibara on 16:9 only:
 * FORMATION (the special formation streak and the formation the options fly in) and RAPID (AUTO SHOT's rate, the
 * presses the game reads); the controls 5% smaller, the side last touched at the left whichever side it is.
 *
 * Test 62 (user 2026-10-24): every boss's time counts down: frames until it withdraws by timeout from bossclock.c,
 * shown from the start of its fight (tiers 1-2, or tier 3 while the boss music plays).
 *
 * Test 64 (user 2026-10-25, "GADGETS update" list): every plate is its own sprite (mkcard.py), drawn at its place in
 * the view with its gadget (gadgets_mask: the options' M3 GADGETS page turns each on or off); every plate 2.5% smaller
 * (CARD_KS): the values keep test 63's 16:9 coordinates ("design" pixels) and tx_*() maps them onto their plate's
 * place; WEAPON 8 rows on 16:9: HADOU under BOMB, LIVES (was SHIPS), RAPID at its bottom (its own plate is gone);
 * ibara's SHOT row with the full-power secret; Kuro BL's options as a three-row box of its seven weapons, the owned
 * ones lit; STAGES (each stage's score, a bar per stage) above MUSIC; the boss's HP at the bar's left, no "LEFT"; the
 * rank's 100% (two digits showed 00). ibara's 16:9 background with FORMATION on has its logo moved down (mkcard.py).
 *
 * Test 65 (user 2026-10-25, test 64's report): STAGES followed MUSIC's switch (a GD_STAGES define, the stage count,
 * hid the gadget's id: now ST_N); STATUS above WEAPON (the ship, type and mode, bombs, lives, EXT and the frames of
 * invincibility left, all out of WEAPON, which keeps SHOT, the options, HADOU and RAPID); SECRET FORMATION (was
 * FORMATION); a stage where a continue was used has its score red in STAGES (a continue = the score falling); tate on
 * 16:9: 2 x 2 short plates per band (SCORE RANK / STATUS STAGES above, BOSS NEXT MEDAL / ITEMS NEXT DROP below);
 * 4:3 with tate off: every plate and its values at CARD_X43 (75%) of their width, STATUS above WEAPON, NEXT MEDAL
 * beside BOSS; the boss's time with three decimals (game frames / 60), a little to the left; the logos may be buried
 * (one ibara background; mkcard.py paints the right panel's plates out without leftovers).
 *
 * Test 67 (user 2026-10-25): ITEMS COLLECTED gone ("secret formation does the same job"), NEXT DROP in its place,
 * BULLETS (the enemy bullets on screen, the artwork's large digits) and MEDALS (was NEXT MEDAL: the next medal and its
 * value), each as long as its name's tab, side by side in NEXT DROP's old place at their own scale; HADOU and
 * RAPID without switches of their own (WEAPON's rows); CONTROLS as the stick and buttons or as text on a slim plate at
 * the bottom left, each input lit while the game reads it pressed (gd_input.ctl_text).
 *
 * Test 71 (user 2026-10-25): co-op ("co-op gadgets, to be a separate toggle in the gadgets menu": rank, p1/p2 scores,
 * status, weapon, secret formation "unless the system is universally shared between the two players ... keep it on P1
 * side" (it is: one streak row for both, work/g61/re/REPORT.md A1), controls; "remove next drop, stages score breakdown,
 * music"): while both sides have played in the run (pl[].in, their ship seen in play) and M3 GADGETS' CO-OP is on, the
 * 16:9 view has 1P's column at the left as before and RANK, then 2P's SCORE, STATUS, WEAPON and CONTROLS at the right
 * (mirrored), the 4:3 view 1P's column and RANK + 2P's; each player's values from its own record (struct gd_pl; the
 * plates draw P's, the controls CS's). 4:3 reworked (user: "try to place everything (minus the stick controls, text
 * controls only) at your discretion"): two columns of every gadget at the panel's right (mkcard.py's CARD_F43X x
 * CARD_F43Y sprites, stacked: a gadget turned off leaves its room to the artwork), over the run's pilot's panel (Bond's
 * or Dyne's, gd_input.pilot). The BOSS: a part that becomes the boss while one is shown must stay the boss BOSS_SETTLE
 * vblanks first (user: "when a boss reaches 0% health, the gadget briefly displays 100% health again for a couple
 * frames": test 70's rec0012, the stage 1 boss at 3/229, then for one vblank part 24 at 21/21; Kuro BL's stage 2 tank
 * the same at a turret's death): the one shown meanwhile at its hit points, 0 once destroyed. SPECIAL FORMATIONS empty
 * outside a run and in the attract's demos (user). CONTROLS' style and CO-OP from gadgets_style at each draw (the
 * pause's M3 GADGETS changes them at once; test 70 read the style with the game's values, frozen in a pause).
 *
 * Ibara's RAM (big-endian bytes, as the SH-3 sees them), found on the PC (PLAN.md "Test 58"):
 *   rank      u32 0C27DFF8: (1 - v / 2^24) = the rank's share, 0 easiest .. 1 hardest (pinkswts' label, ported);
 *             0 at the hardest (test 64: Kuro BL's test 62 run, work/g64/rank)
 *   score     u32 0C283A04 (1P), +0x280 (2P)
 *   next drop u8  0C275DC8: the place in the 25-item drop cycle; item counts u8 0C21CC8C + i + 8 * u8 0C21CA15
 *             (i = 0..3, the first non-zero kind is the one being collected); next medal u8 0C392D78 (0..18 = 100 ..
 *             10000): the MAME artwork's script (Olifante), its addresses less 0x30 for this program ('06. 3. 7 ver.)
 *   music     u8  0C3929B0: the YMZ770 sequence the sound driver plays (each track an intro and a loop sequence)
 *   enemies   0C26CD40: 192 parts of 0xB4 bytes (test 110: was 100): +0 flags (bit 31 alive, 0x8000 boss class, 0x4000 a child part,
 *             0x03000100 active), +08 / +10 its type record, +3C u16 hit points, +40 u32 score value, +50 / +8C its
 *             behaviour's elapsed-time counters (game frames), +9F its phase
 *   ship      u8  0C28379B (1P; 2P +0x280): side * 4 + type; mode u8 0C286752: normal, harder, extended
 *   stage     u8  0C392B08: 2-7 = stages 1-6, 8-13 = the extended mode's second loop (test 63's run; 8 = the ending
 *             after one loop)
 *   player    0C283794 + side * 0x280 (the code's own stride): +253 ships in reserve, +254 shot level, +255 small P
 *             toward the next (level k takes k + 1), +256 full bombs, +257 bomb fragments (40 = a full bomb), +262..264
 *             the left / right / rear slot's formation code (5 of a kind, then an option: 1 search, 2 wide, 3 / 4
 *             rolling, 5 back), +265..267 the slots' options (weapon * 2 + side, test 61: the weapon 0 rocket, 1
 *             burner, 2 gatling, 3 homing, 4 napalm, 5 machine gun, 6 5way; 0xFF empty), +274 u32 the next extend's
 *             score; test 61: a slot's option flies while its pod's u32 0C27DC84 + side * 0x90 + slot * 0x30 is not 0
 *             (a hit frees the pods, the slot bytes and codes stay until the respawn clears them)
 *   streaks   (test 61, work/g61/re/REPORT.md) u8 0C21CC8C + kind + 8 * u8 0C21CA15 (the attract demo's flag: the demo
 *             counts in its own row): kinds 0 small P, 1 option, 2 bomb fragment, 3 medal, 4 large P, 5 full bomb, 6
 *             1UP, 7 score item; a pickup of kinds 0-5 clears the others and counts its own, no cap (u8); an option
 *             picked up with exactly 5 fragments / options / medals / small P before it sets search / wide / rolling /
 *             back on all three slots (wide: the 6th option in a row), unless the slots that fly options have it
 *   invincible (test 65, work/g65/inv) the player's u8 +269: 240 at a respawn, less one a game frame, hit only at 0
 * Kuro BL's: map_blk (work/card/blk/REPORT.md); its weapon stock u32[7] 0C22E028 + weapon * 4 (not 0 = owned, both
 * sides' own), the current weapon the player's +26F; test 65: its invincibility u8 +288, the ship select's flag u32
 * 0C3C86AC.
 *
 * Test 76, Kuro BL's XTC (Xtreme Terror Counter; this session's research, PLAN.md "Test 76", read in its code): the
 * graze test 0C06EF50 runs for one player a frame (the other the next), for each enemy bullet (+0 & 0x10000000) inside
 * the player's graze box while it can be hit (+0 & 0x04000000), A has been held 5 frames or more (+270) and its option
 * pods are out (+289): score + 10, the counter's quarters (+280) + 1 up to 39996 (shown >> 2 = 0..9999), and every
 * shown step its timer (+284) 128; the timer counts down each frame (0C071110) and wipes the counter at 0, as a bomb
 * does 16 frames after it starts. The box is not a circle: |bullet - player| < 14 + e + 1 along the game's x (the
 * player's up) and < 19 + e + 1 along its y, e = ((((2^24 - rank) >> 3) * A frames) >> 3) / 2^16 = 4 n share pixels:
 * 40 x 30 as the player sees it at the easiest rank, 104 x 94 at the hardest with A held 8 frames. The game's sphere
 * (its ring sprite) shows while A is held with the pods out, its opacity +277 (+16 a graze, -2 a frame, 0..0xC0), its
 * tint blue (easiest) -> green (half) -> red (hardest). */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xsdk/gpu.h"
#include "xsdk/kernel.h"
#include "xsdk/shader.h"
#include "xsdk/texture.h"
#include "xsdk/thread.h"

#include "ibara360_shaders.h"

#include "card.h"
#include "bossclock.h"
#include "card_layout.h"
#include "cv1k.h"
#include "gadgets.h"
#include "ps2data.h" /* test 99: the 4:3 panels' PS2 layers */
#include "launch.h" /* test 121 item 5 */
#include "webdat.h" /* test 121 item 5: ibaraweb.dat */
#include "zlib.h"
#ifdef IB_ARRANGE
#include "arrange_patch.h" /* test 79: ARRANGE's state in work RAM (ARRANGE_FORM, ...) */
#define ARR 1
#else
#define ARR 0
#endif

#define GD_SLOTS 4           /* vertex blocks used in turn */
#define GD_MAX_QUADS 1024    /* per frame (test 64: 768 before the plates and STAGES) */
#define GD_VF 8              /* floats per corner: x y, r g b a, u v */
#define GD_INPUT_SHOW 600    /* vblanks a side's controls stay after its last change (the artwork's script) */
#define GD_INPUT_FADE 60     /* then fade out over this many */
#define GD_RANK_SPAN 60      /* the rank's change is shown over this many emulated frames */
#define GD_RANK_HOLD 180     /* a fall of 1% or more (a death) stays this long */
#define ST_N 12              /* test 64: stage scores kept (two loops of six); test 65: was GD_STAGES, which hid
                              * the gadget's id (ON(GD_STAGES) read MUSIC's bit) */
#define BOSS_SETTLE 6        /* test 71: vblanks another part must be the boss before it is shown */
/* test 88: CONTROLS' text plate under MUSIC (16:9 canvas: MUSIC's plate ends at 581; the column's right edge 1279) */
#define CTL_UNDER_MUSIC_X 928
#define CTL_UNDER_MUSIC_Y 583

struct gd_stats gd_stats;

/* test 70 (user): SECRET FORMATION = SPECIAL FORMATIONS, STAGES = SCORE BREAKDOWN (their ini keys stay) */
const char *const gadgets_names[GD_N] = {"SCORE", "STATUS", "WEAPON", "SPECIAL FORMATIONS", "CONTROLS", "RANK",
                                         "NEXT DROP", "MEDALS", "BULLETS", "BOSS", "SCORE BREAKDOWN", "MUSIC", "XTC"};
const char *const gadgets_keys[GD_N] = {"score", "status", "weapon", "formation", "controls", "rank", "next_drop",
                                        "next_medal", "bullets", "boss", "stages", "music", "xtc"};

/* test 83: ARRANGE's FORMATION gadget is FORMATIONS (user: "they're not hidden in arrange"; its ini key stays) */
const char *gadgets_name(int g)
{
	return ARR && g == GD_FORMATION ? "FORMATIONS" : gadgets_names[g];
}

int gadgets_ibara_only(int g)
{
	return g == GD_FORMATION;
}

int gadgets_in_game(int g, int blk)
{
	return blk ? g != GD_FORMATION : g != GD_XTC;
}

static unsigned gd_on = GD_ALL; /* test 64: the gadgets shown (gadgets_mask) */
#define ON(g) ((gd_on >> (g)) & 1u)
static int gd_ctl_text, gd_coop = 1; /* test 71: gadgets_style's */
static int gd_xtc_full;              /* test 88: XTC FULL */
static int gd_compact;               /* test 97: WEAPON's options in one row (16:9 co-op, Kuro BL / ARRANGE) */
static float gd_game_k = 2.25f;      /* test 88: canvas pixels a game pixel (the game picture's scale) */

void gadgets_mask(unsigned mask)
{
	gd_on = mask;
}

void gadgets_style(int ctl_text, int coop, int xtc_full, float game_k)
{
	gd_ctl_text = ctl_text;
	gd_coop = coop;
	gd_xtc_full = xtc_full;
	gd_game_k = game_k > 0 ? game_k : 2.25f;
}

static const XsdkVertexElement gd_layout[] = {
	{.usage = XSDK_USAGE_POSITION, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 0},
	{.usage = XSDK_USAGE_COLOR, .format = XSDK_VERTEX_FLOAT4, .offset_bytes = 8},
	{.usage = XSDK_USAGE_TEXCOORD, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 24},
};

static XsdkShader gd_vs, gd_ps;
static XsdkTexture gd_bg, gd_atlas, gd_p43[2], gd_tate; /* test 71: the 4:3 panel per pilot */
static XsdkSamplerState gd_point, gd_linear;
static XsdkBlendState gd_alpha, gd_none;
static volatile uint32_t *gd_vmem;       /* GD_SLOTS blocks of GD_MAX_QUADS quads */
static uint32_t gd_used[GD_SLOTS];       /* frames_queued once the frame drawn with each block is queued */
static float gd_q[GD_MAX_QUADS][6][GD_VF];
static unsigned gd_nq;
/* test 88: XTC FULL's graph drawn point-sampled as the game picture is (after the others, from the same block) */
#define GD_POINT_QUADS 32
static float gd_qp[GD_POINT_QUADS][6][GD_VF];
static unsigned gd_npq;
static int gd_to_point;
static int gd_fbw = 1280, gd_fbh = 720;
static int gd_view = GV_WIDE;            /* the canvas quad() places in */
static int gd_v = CPV_WIDE;              /* test 64: its column in card_plates */

/* ---- each game's RAM and rules (test 60) ---------------------------------------------------------------------- */

struct gd_map {
	uint32_t rank, score, p2, drop, pickups, consec, medal, bgm, game_on, ship, mode, enemy, enemy_size, stage;
	uint32_t player;          /* + side * p2 */
	unsigned enemies;
	uint32_t lives, shot, shot_p, bombs, frags, form, opts, extend; /* offsets in the player's record */
	uint32_t ext_none;        /* the next extend's score at or above this: no more extends */
	int options;              /* ibara's L / R / B option slots and their formations */
	uint32_t pods;            /* test 61: the slots' pods (+ side * 0x90 + slot * 0x30; u32 not 0 = flying) */
	uint32_t stock, weapon;   /* test 64, Kuro BL: the weapon stock (u32[7]), the current weapon (player offset) */
	uint32_t shots;           /* test 64: the shot table (+ side * 0x2800 + slot * 0x50, 128 slots; the Hadou's) */
	unsigned shot_top;        /* test 64: the last shot level small P raise (ibara 4: 5 is its normal top, 6 the
	                           * secret's; Kuro BL 5) */
	int secret;               /* test 64, ibara: the 6th small P in a row = full power (work/g64/secret) */
	uint32_t inv;             /* test 65: the invincibility counter (u8, player offset; work/g65/inv) */
	uint32_t inv_frozen;      /* test 65, Kuro BL: the ship select's flag (u32; 0 = none) */
	uint32_t bullets, camera; /* test 67: the enemy bullet pool (256 x 0x54) and the camera's s32 (work/g67/bullets) */
	int modes;                /* normal / harder / extended (mode) */
	const char *(*bgm_name)(unsigned seq);
	int (*boss_music)(unsigned seq);
	int clock;                /* test 62: bossclock.c's game (BC_IBARA, BC_BLK) */
	const char *composer;
	unsigned side_bit;        /* the ship byte's Bond / Dyne bit */
	unsigned kind_bit;        /* its straight / spread ship bit (Kuro BL; 0 = none) */
	int run_stage;            /* a run also needs a stage (the stage byte not 0) */
	int own_plates;           /* test 61: FORMATION and RAPID (ibara's, user's choice) */
	int xtc;                  /* test 76: the XTC (Kuro BL's; XTC_* in the player's record) */
};

/* test 81: ibara's RAPID row is WEAPON's (its last row, or CONTROLS' text plate's), but not in ARRANGE, whose WEAPON has
 * the stored sub weapons' box there */
#define RAPID_ON_WEAPON (M->own_plates && !ARR)

/* test 76, Kuro BL's XTC: offsets in the player's record (the header's notes) */
#define XTC_HOLD 0x270u           /* u8: frames A has been held, 0..8 (0 at its release); the box tested from 5 */
#define XTC_GLOW 0x277u           /* u8: the sphere's opacity, 0..0xC0 */
#define XTC_RAW 0x280u            /* s32: the counter in quarters (shown >> 2) */
#define XTC_LEFT 0x284u           /* u16: frames until it is wiped */
#define XTC_OPTS 0x289u           /* u8: the option pods out (3) or not (0) */
#define XTC_TIMER 128             /* the timer at each shown step */
static const struct gd_map *M;

static uint32_t be32(uint32_t a)
{
	const uint8_t *p = RAMP(a);
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static unsigned be16(uint32_t a)
{
	const uint8_t *p = RAMP(a);
	return (unsigned)p[0] << 8 | p[1];
}

/* ibara's music: the sequence the driver plays -> the name in the game's own sound list (0C1F5CD4: its sound test
 * plays bgm 0-15 as sequences 15 17 19 21 23 25 2 9 7 6 4 27 29 31 33 0, each its intro, then the next one looping;
 * bgm 15, sequence 0, has no name; sequences 11/12 are not in the list) */
static const char *bgm_name_ib(unsigned seq)
{
	switch (seq) {
	case 29: case 30: return "The Family's Work";
	case 31: case 32: return "Air Pollution";
	case 2: case 3: return "Ending";
	case 4: case 5: return "Ranking";
	case 6: return "Game Over";
	case 7: case 8: return "Rose of Zeal";
	case 9: case 10: return "Guardian Angel";
	case 15: case 16: return "Show Time";
	case 17: case 18: return "Sky High";
	case 19: case 20: return "Like a Rolling Stone";
	case 21: case 22: return "Endress Train";
	case 23: case 24: return "Robot No28";
	case 25: case 26: return "Rose Garden";
	case 27: case 28: return "Bonds of Steel";
	case 33: return "Mother Teresa";
	default: return NULL;
	}
}

static int boss_music_ib(unsigned seq)
{
	return seq == 7 || seq == 8 || seq == 9 || seq == 10 || seq == 33;
}

static const struct gd_map map_ib = {
	.rank = 0x0C27DFF8u, .score = 0x0C283A04u, .p2 = 0x280u, .drop = 0x0C275DC8u, .pickups = 0x0C21CC8Cu,
	.consec = 0x0C21CA15u, .medal = 0x0C392D78u, .bgm = 0x0C3929B0u, .game_on = 0x0C28530Cu, .ship = 0x0C28379Bu,
	.mode = 0x0C286752u, .enemy = 0x0C26CD40u, .enemy_size = 0xB4u, .stage = 0x0C392B08u, .player = 0x0C283794u,
	.enemies = 192, .lives = 0x253u, .shot = 0x254u, .shot_p = 0x255u, .bombs = 0x256u, .frags = 0x257u,
	.form = 0x262u, .opts = 0x265u, .extend = 0x274u, .ext_none = 1000000000u, .options = 1, .pods = 0x0C27DC84u,
	.shots = 0x0C217A04u, .shot_top = 4, .secret = 1, .inv = 0x269u, .bullets = 0x0C27E0FCu, .camera = 0x0C3929E0u, .modes = 1, .bgm_name = bgm_name_ib, .boss_music = boss_music_ib, .clock = BC_IBARA, .composer = "SHINJI HOSOE",
	.side_bit = 4, .kind_bit = 0, .run_stage = 0, .own_plates = 1,
};

/* Kuro BL (work/card/blk/REPORT.md, from its replays): ibara's systems at its own addresses; its sound list is ibara's
 * less Show Time (15/16); its bosses follow ibara's tier rule (their clocks: bossclock.c); no modes; a run is game-on
 * 1..2 with a stage (0 = the attract); the ship byte is side * 8 + ship * 4 + type (the ship: 0 straight, 1 spread); a
 * weapon stock in place of ibara's L / R / B options (test 64: shown as a box of the seven) */
static const char *bgm_name_blk(unsigned seq)
{
	return seq == 15 || seq == 16 ? NULL : bgm_name_ib(seq);
}

static const struct gd_map map_blk = {
	.rank = 0x0C297A3Cu, .score = 0x0C29D468u, .p2 = 0x2A0u, .drop = 0x0C28F608u, .pickups = 0x0C22E2ACu,
	.consec = 0x0C22E015u, .medal = 0x0C3C53E0u, .bgm = 0x0C3C4018u, .game_on = 0x0C2A6D90u, .ship = 0x0C29D1DFu,
	.mode = 0x0C2B1A5Au, .enemy = 0x0C286578u, .enemy_size = 0xB4u, .stage = 0x0C3C4170u, .player = 0x0C29D1D8u,
	.enemies = 192, .lives = 0x25Au, .shot = 0x25Bu, .shot_p = 0x25Cu, .bombs = 0x25Du, .frags = 0x25Eu,
	.form = 0x269u, .opts = 0x26Cu, .extend = 0x294u, .ext_none = 1000000000u, .options = 0, .stock = 0x0C22E028u,
	.weapon = 0x26Fu, .shots = 0x0C229004u, .shot_top = 5, .secret = 0, .inv = 0x288u, .inv_frozen = 0x0C3C86ACu,
	.bullets = 0x0C297B40u, .camera = 0x0C3C4048u,
	.modes = 0, .bgm_name = bgm_name_blk, .boss_music = boss_music_ib, .clock = BC_BLK,
	.composer = "SHINJI HOSOE", .side_bit = 8, .kind_bit = 4, .run_stage = 1, .xtc = 1,
};

/* ---- what gadgets_frame read ------------------------------------------------------------------------------ */

static struct {
	int valid;
	int boot;                 /* test 89: the game still booting (gd_input.booted 0): every window empty */
	uint32_t rank;            /* the game's word */
	int rank_pct;             /* rank in 1/10000 % (0 .. 1000000) */
	int rank_hist[GD_RANK_SPAN];
	unsigned rank_n;
	int fall, fall_left;      /* the last fall of 1% or more, and how long it stays */
	int side;                 /* the player shown: 0 = 1P, 1 = 2P (test 71: one player's layout) */
	unsigned drop, medal, kind, count;
	unsigned streak;          /* test 61: the kind's count as the game has it (count stops at 6) */
	unsigned bgm;
	int run, mode;
	int demo;                 /* test 71: the attract's demo plays (M->consec, the demo flag) */
	unsigned p_streak;        /* test 64, ibara: small P picked up in a row (the secret's counter; both sides' one) */
	unsigned bullets;         /* test 67: the enemy bullets on screen (bullets_read) */
	int pilot;                /* test 71: gd_input.pilot */
	int cand;                 /* test 71: the part that would be the boss (-1 none), not shown yet */
	uint32_t cand_val;
	unsigned cand_n;          /* vblanks it has been */
	int boss, boss_hp, boss_max; /* boss: an enemy part's index (-1 = none) */
	int boss_tier;            /* boss_find's tier (3 = not fighting yet) */
	uint32_t boss_val;
	int boss_left;            /* game frames until it withdraws (-1 = not known for this boss; test 62: bossclock.c) */
	int boss_on;              /* the boss music plays */
	uint8_t port[2];
	uint8_t port_c;           /* test 79: port C (ARRANGE's aim lock, lock_down) */
	unsigned shown[2];        /* vblanks left before a side's controls fade */
	uint32_t pad[2], af_bit;
	int af_hz[2];             /* test 71: per side (its pad's) */
	char keys[2][GD_KEYS][16];
	int ctl;                  /* test 61: the side whose controls are drawn and whose shots RAPID counts (one player) */
	unsigned shot_logic;      /* the logic frame sampled last */
} s;

/* test 71: each side's player (co-op draws both; one player's layout the side shown); P = the player the plates being
 * drawn show, CS = the side whose controls (and RAPID) they show */
struct gd_pl {
	int side;
	int in;                   /* the side has played in this run (its ship seen in play since the run's start) */
	uint32_t score, extend;
	uint32_t score_last;      /* test 83: the score at the last vblank */
	int continued;            /* test 83: a continue in this run (the score fell while in): its SCORE red */
	int ship;
	unsigned lives, shot, shot_p, bombs, frags;
	uint8_t form[3], opt[3];
	uint8_t flies[3];         /* test 61: the slot has an option and its pod */
	unsigned weapon;          /* test 64, Kuro BL: the current weapon (0xFF none) */
	uint8_t owned[7];         /* and the stock (both sides' one) */
	int hd_phase;             /* test 64: the side's Hadou (HD_*) */
	int hd_left;              /* exploding: game frames left (the target surviving) */
	unsigned hd_count;        /* exploding Hadous (a second can be fired while the first explodes) */
	int tr_left;              /* test 83: game frames until the side's last Hadou trail piece goes (0 = none) */
	unsigned tr_count;        /* and its pieces */
	int tr_more;              /* a Hadou of the side flies: more pieces to come (tr_left grows) */
	int inv;                  /* test 65: the side's frames of invincibility left (0 = can be hit) */
	int inv_max;              /* and its value when it last went up (the bar's full length) */
	uint8_t shot_hist[60];    /* test 61: the shot button's presses (1 = went down) in the last 60 logic frames */
	unsigned shot_i, shot_n;  /* the next slot; their sum = presses per 60 logic frames (Hz at the game's 60) */
	int shot_down;
	unsigned shot_max;        /* test 82: CONTROLS' MANUAL, the highest shot_n while alive since the last death */
	unsigned state;           /* test 82: the ship's state, its +0's top byte last vblank (DC alive, E0 hit, A0 waiting) */
	int xtc;                  /* test 76, Kuro BL: the XTC as shown (0..9999) */
	unsigned xtc_left, xtc_hold, xtc_glow, xtc_opts; /* XTC_LEFT, XTC_HOLD, XTC_GLOW, XTC_OPTS */
	int xtc_hit;              /* it can be hit (the graze is tested with the hit) */
	/* test 97 (bomb_read): the side's tap bomb */
	int bm_on;                /* a bomb's records are on screen */
	unsigned bm_start;        /* gd_input.logic at its first game frame */
	unsigned bm_frames;       /* game frames since its start (1 = its first), while bm_on */
	unsigned bm_last;         /* the last bomb's game frames in all (0 = none yet in this run) */
	unsigned bm_len;          /* test 98: the bomb's length (blast_len), while bm_on */
	unsigned bm_pb, bm_pf;    /* test 98: the full bombs and fragments at the last vblank */
	uint8_t bm_type[128];     /* each record's type at the last vblank (0xFF = free) */
};
static struct gd_pl pl[2] = {{.side = 0}, {.side = 1}};
static const struct gd_pl *P = &pl[0];
static int CS;
static int coop_now; /* test 71: this draw is the co-op layout */

/* test 64: STAGES: the points the shown side scored in each stage (the stage being played: so far) */
#define GD_RUN_GAP 60         /* vblanks out of a run that end it (ibara's game byte is 0 for one at a stage start) */
static struct {
	int idx;                  /* the stage being played (0 .. GD_STAGES - 1; -1 none yet) */
	uint32_t start;           /* the score its points count from */
	uint32_t base;            /* its points before a continue (the score starts again from the continue count) */
	uint32_t score[ST_N];
	uint8_t played[ST_N];
	uint8_t cont[ST_N];       /* test 65: a continue was used in it (its score red) */
	uint32_t last;            /* test 65: the score at the last vblank (a fall = a continue) */
	unsigned out;             /* vblanks out of a run */
} st = {.idx = -1};

/* test 69 (main.c's pause menu: "restart stage (turn the score red on the score gadget and stages score gadget red as
 * well)", "full restart (same thing)"): STAGES as it was when each save state was taken, put back with it; a restart
 * in this run makes the score red until a new run */
static __typeof__(st) st_slot[GD_STATE_SLOTS];
static int restarted;
static int dip_red; /* test 81: gd_input's dip_changed (the SCORE red) */

/* The boss: of the enemy parts alive, boss class (0x8000), not a child part (0x4000), with hit points, the first
 * tier that has one, the most valuable there, the lowest index on a tie: 1 = worth 100000+ and active (0x03000100),
 * 2 = 50000+ and active (midbosses, stage 2's tank), 3 = 100000+ not active yet (a boss allocated at full strength
 * before its fight; stage 5's never shows the active bits). The game keeps no maximum: the most hit points seen
 * since it became the boss (tier 3 sees the 100000 ones whole). Checked on every stage of the test 18 run. */
static void boss_find(void)
{
	unsigned k;
	int best = -1, tier = 4;
	uint32_t bv = 0;

	for (k = 0; k < M->enemies; k++) {
		const uint32_t a = M->enemy + k * M->enemy_size;
		const uint32_t fl = be32(a), v = be32(a + 0x40);
		int t;
		if ((fl & 0x8000C000u) != 0x80008000u || !be16(a + 0x3C))
			continue;
		t = fl & 0x03000100u ? (v >= 100000 ? 1 : v >= 50000 ? 2 : 4) : v >= 100000 ? 3 : 4;
		if (t < tier || (t == tier && v > bv)) {
			tier = t;
			bv = v;
			best = (int)k;
		}
	}
	if (best >= 0 && tier > 3)
		best = -1;
	if (!(best >= 0 && best == s.boss && bv == s.boss_val)) {
		/* test 71: another part (or none) than the one shown: shown once it has been the boss BOSS_SETTLE vblanks; the
		 * one shown meanwhile at its hit points as they are (0 once destroyed), its time as it was. A boss after none
		 * at once (test 70: rec0012's stage 1 boss at 3/229 gave part 24, 21/21, for one vblank: 100%) */
		if (best == s.cand && (best < 0 || bv == s.cand_val)) {
			s.cand_n++;
		} else {
			s.cand = best;
			s.cand_val = bv;
			s.cand_n = 1;
		}
		if (s.boss >= 0 && s.cand_n < BOSS_SETTLE) {
			const uint32_t a = M->enemy + (uint32_t)s.boss * M->enemy_size;
			const int alive = (be32(a) & 0x8000C000u) == 0x80008000u && be32(a + 0x40) == s.boss_val;
			const int hp = alive ? (int)be16(a + 0x3C) : 0;
			s.boss_hp = hp < s.boss_max ? hp : s.boss_max;
			return;
		}
		s.cand_n = 0;
		if (best < 0) {
			s.boss = -1;
			s.boss_left = -1;
			return;
		}
	}
	{
		const uint32_t a = M->enemy + (uint32_t)best * M->enemy_size;
		const int hp = (int)be16(a + 0x3C);
		const int same = best == s.boss && bv == s.boss_val;
		int64_t left;
		s.boss_tier = tier;
		s.cand_n = 0;
		if (!same) {
			s.boss = best;
			s.boss_val = bv;
			s.boss_max = hp;
		} else if (hp > s.boss_max) {
			s.boss_max = hp;
		}
		s.boss_hp = hp;
		left = bossclock(M->clock, a);
		/* test 62: never upward for the same boss (a rank change can lengthen the stage 3 midboss's timers by a few
		 * frames): it holds until the count comes down to it */
		if (same && left >= 0 && s.boss_left >= 0 && left > s.boss_left)
			left = s.boss_left;
		s.boss_left = left < -1 ? 0 : left > 99 * 3600 ? 99 * 3600 : (int)left;
	}
}

/* test 64: the shown side's Hadou (the bomb held 16 frames with a full bomb, released: work/g64/hadou/REPORT.md, the
 * same code in both games): its shot record (type side + 1, phase 1 charging / flying, 3 exploding) in the side's shot
 * table. An explosion's frames left from its step a (+C), tick t (+48) and loops c (+49), while stuck (0x4000) to a
 * part still alive (+4C its index): 512 game frames in all; it is cut short when that part dies (the count drops
 * then). Of two exploding, the one with the most left.
 * Test 83 (user's todo list: "see if it's possible to add a hadou trail duration gadget, directly below the first hadou
 * gadget"; work/g83/trail/REPORT.md, the same code in all three games): the trail = the records of the same type in
 * phase 2 (flags 0xCD800000, one spawned every 4 game frames while the Hadou flies, 32 pixels behind it), each living 512
 * updates of its own, one a game frame (its tick t +48 +1 each, its step a +C +1 every 4th, freed when a reaches 0x80):
 * nothing else removes one in a run, so its frames left = 512 - 4a - (t & 3) exactly (1 = the next game frame frees it);
 * the trail's = the most of those. While the Hadou still flies more pieces come (tr_more) */
enum { HD_NONE, HD_CHARGING, HD_FLYING, HD_EXPLODING };
#define HD_TOTAL 512
#define TR_TOTAL 512

static void hadou_read(struct gd_pl *q)
{
	const uint32_t table = M->shots + (uint32_t)q->side * 0x2800u;
	unsigned k;

	q->hd_phase = HD_NONE;
	q->hd_left = 0;
	q->hd_count = 0;
	q->tr_left = 0;
	q->tr_count = 0;
	q->tr_more = 0;
	for (k = 0; k < 128; k++) {
		const uint32_t r = table + k * 0x50u, fl = be32(r), ph = be32(r + 8);
		if (!fl || be32(r + 4) != (uint32_t)q->side + 1)
			continue;
		if (ph == 1 && (fl & 0x0C000000u))
			q->tr_more = 1; /* test 83: flying */
		if (ph == 1 && q->hd_phase < HD_EXPLODING) {
			q->hd_phase = fl & 0x0C000000u ? HD_FLYING : HD_CHARGING;
		} else if (ph == 2) { /* test 83: a trail piece */
			const uint32_t a = be32(r + 0xC);
			const int left = a < 0x80 ? TR_TOTAL - 4 * (int)a - (int)(*RAMP(r + 0x48) & 3) : 0;
			q->tr_count++;
			if (left > q->tr_left)
				q->tr_left = left;
		} else if (ph == 3) {
			const uint32_t a = be32(r + 0xC), part = M->enemy + be16(r + 0x4C) * M->enemy_size;
			const unsigned t = *RAMP(r + 0x48), c = *RAMP(r + 0x49);
			const int stuck = (fl & 0x4000u) && be16(r + 0x4C) < M->enemies && be32(part) && be16(part + 0x3C);
			int steps, left;
			if (a >= 0x18)
				steps = 0x20 - (int)a;
			else
				steps = (0x17 - (int)a) + 9 + (stuck ? 16 * (int)((c - 1) & 0xFF) : 0);
			left = (t & 1 ? 1 : 2) + 2 * (steps - 1);
			if (left < 0 || a > 0x20)
				left = 0;
			q->hd_count++;
			if (q->hd_phase < HD_EXPLODING || left > q->hd_left)
				q->hd_left = left;
			q->hd_phase = HD_EXPLODING;
		}
	}
}

/* Test 97 (user 2026-10-31: "add a bomb frame duration gadget under weapon (above hadou bar)"; work/g97/gadgets/
 * REPORT.md, PC harness logs of the shot table every vblank, all three games): a tap bomb lives in the side's shot table
 * (M->shots + side * 0x2800, 128 x 0x50, +0 flags, +4 type) as records of the ship's bomb kind (3 shards, 5 forward
 * pairs, 6 two homing bombs, 7 aimed bombs; spawned by the bomb function, ibara 0C062550, Kuro BL 0C073600, in the same
 * game frame as its flash, type 9 / 10), which end as type 0 explosions (64 game frames: 16 steps of 4) or by
 * themselves; the Hadou is type 1 / 2 (excluded). Its length is the game's to decide (homing and shard bombs end on what
 * they hit: Kuro BL's two bombs ran 110-226 frames on the same input), so no countdown is exact: the gadget counts the
 * game frames from the bomb's first frame up while any of its records lives (a new flash and a new bomb-kind record in
 * one vblank = a bomb; a flash alone, the death burst's type 0 records alone, start nothing), then keeps that total.
 * The length = the logic frames from its spawn to the first one with no record (bombs.py on the harness: Kuro BL
 * straight A 103, straight D 231, spread A ~201).
 * Test 98 (user after test 97: "sometimes the blast frame count restarts on its own while a bomb is active (type D),
 * make it so that it ignores hitting things and ending early, calculate its duration depending on how many bomb
 * fragments (or full bomb) are used, and always use those as reference regardless"; work/g98/blast/REPORT.md, 960
 * bombs on the PC harness): hits never end a bomb record (the early ends are the screen edge), and the length is fixed
 * by the ship's kind and the power spent: blast_len() (blast_table.h). A bomb starts where the side's full bombs or
 * fragments dropped since the last vblank with a new flash and no new Hadou record (the power = blast_power() of the
 * last vblank's values); test 97's start (a new flash with a new bomb-kind record) fired again inside Bond / Dyne D's
 * circular bomb (new type 7 records every frame) at every pickup flash, so it now only starts a bomb when none is
 * shown (INF. BOMBS' refill comes before the game's frame, so the drop is seen anyway). The count runs to the length
 * whatever the records do, then that total stays. */
#include "blast_table.h" /* work/g98/blast */

static int bm_sync = 1; /* the next bomb_read only records the types and the stock (a load, the game's start) */

static void bomb_read(struct gd_pl *q, unsigned logic)
{
	const uint32_t table = M->shots + (uint32_t)q->side * 0x2800u;
	const int spent = q->bombs < q->bm_pb || (q->bombs == q->bm_pb && q->frags < q->bm_pf);
	int proj = 0, flash = 0, hadou = 0, power;
	unsigned k;

	for (k = 0; k < 128; k++) {
		const uint32_t r = table + k * 0x50u;
		const uint32_t t = be32(r) ? be32(r + 4) : 0xFFu;
		const unsigned was = q->bm_type[k];
		if (t >= 3 && t <= 8 && !(was >= 3 && was <= 8))
			proj = 1;
		if (t >= 9 && t <= 10 && was != t)
			flash = 1;
		if ((t == 1 || t == 2) && was != t)
			hadou = 1;
		q->bm_type[k] = t > 0xFE ? 0xFF : (uint8_t)t;
	}
	power = blast_power((int)q->bm_pb, (int)q->bm_pf);
	q->bm_pb = q->bombs;
	q->bm_pf = q->frags;
	if (bm_sync)
		return;
	if (flash && !hadou && (spent || (proj && !q->bm_on))) {
		q->bm_on = 1;
		q->bm_start = logic;
		q->bm_len = (unsigned)blast_len(M == &map_blk, q->ship & 7, power, q->side);
		if (s.run) /* not the demos' */
			log_printf(C_WHITE, "GADGETS: BLAST %dP, KIND %d, POWER %d = %u GAME FRAMES (%s, LOGIC %u)", q->side + 1,
			           q->ship & 7, power, q->bm_len, spent ? "STOCK SPENT" : "RECORDS", logic);
	}
	if (!q->bm_on)
		return;
	q->bm_frames = ((logic - q->bm_start) & 0xFFFFu) + 1;
	if (q->bm_frames >= q->bm_len) {
		q->bm_on = 0;
		q->bm_last = q->bm_len;
		if (s.run)
			log_printf(C_WHITE, "GADGETS: BLAST %dP OVER AT LOGIC %u", q->side + 1, logic);
	}
}

/* test 65: the shown side's frames of invincibility left (work/g65/inv/REPORT.txt, both games the same code): the
 * player's u8 M->inv, set to 240 by the respawn (game start, continue, 2P join and every respawn go through it), less
 * one each game frame before that frame's collisions, which hit only at 0: a counter c seen at a vblank protects the
 * next c - 1 game frames. Only while the ship is in play (+0 & CC000000 = CC000000: alive or flying in); hit, waiting
 * (the counter then counts the wait up) or out: 0. Kuro BL's ship select (u32 M->inv_frozen not 0) holds it at 240:
 * 0 then. Bombs and the Hadou give none (checked on the replays: deaths soon after both). */
static void inv_read(struct gd_pl *q)
{
	const uint32_t r = M->player + (uint32_t)q->side * M->p2;
	const unsigned c = *RAMP(r + M->inv);
	int v = 0;

	if ((be32(r) & 0xCC000000u) == 0xCC000000u && c && !(M->inv_frozen && be32(M->inv_frozen)))
		v = (int)c - 1;
	if (v > q->inv)
		q->inv_max = v;
	q->inv = v;
}

/* test 67: the enemy bullets on screen (work/g67/bullets, the same code in both games): one pool of 256 records of
 * 0x54 bytes holds every enemy bullet, a long bullet's segments and the erase animations bullets turn into; counted =
 * a bullet or a long bullet's head (+0 & 0x10004000 = 0x10000000: it can hit the player; segments have 0x4000, erase
 * animations no 0x10000000; the 3-frame spawn flash counts) with its centre on the screen (x = +28 >> 16 in 0..319,
 * y = (+2C - the camera) >> 16 in 0..239; bullets live 8-64 pixels past the edges). Only in a run (ibara's pool is
 * the boot's garbage until the game first clears it). A full pool drops new bullets: 256 at most (Kuro BL reaches it
 * at its stage 1 boss; ibara's run peaked at 189); Kuro BL's cancel after a boss erases them all (0) */
static unsigned bullets_read(void)
{
	const int32_t cam = (int32_t)be32(M->camera);
	unsigned k, n = 0;

	if (!s.run)
		return 0;
	for (k = 0; k < 256; k++) {
		const uint32_t a = M->bullets + k * 0x54u;
		int32_t x, y;
		if ((be32(a) & 0x10004000u) != 0x10000000u)
			continue;
		x = (int32_t)be32(a + 0x28) >> 16;
		y = ((int32_t)be32(a + 0x2C) - cam) >> 16;
		n += x >= 0 && x < 320 && y >= 0 && y < 240;
	}
	return n;
}

/* test 64: the stage being played from the stage byte (ibara: 2-7 = stages 1-6, 8-13 the extended mode's second loop;
 * Kuro BL: 2-7; anything else, as the ending's 8 after one loop, is no stage). A new table when a run starts after
 * GD_RUN_GAP vblanks out of one, or the stage goes back. A continue starts the score again from the continue count
 * (test 63's run: 9 continues, scores ending in 9): a fall of the score inside a run keeps the stage's points so far
 * and counts on from the new score. Test 65: the fall is against the last vblank's score (test 64 compared with the
 * stage's starting score, so a continue in a stage begun at 0 dropped its points), and marks the stage (cont). Test 87
 * (user: "score breakdown should be zeroed out after a run is over"): the table emptied once a run is over (GD_RUN_GAP
 * vblanks out of it); st_zeroed, not in st (the save states' and replays' record of it keeps its size), still makes
 * the next run's start a new run's (SCORE's red and the continues cleared there, as before) */
static int st_zeroed;
/* test 117 (user: "when i load a savestate, the score breakdown doesn't match the upper left score gadget"): after a
 * load the table waits for the side shown to be in play again (pl[].in, which the load clears: until then s.side can
 * be the pilot's or the other side's, and a score below st.last reads as a continue), then counts on from the score it
 * sees. With no continue in the slot's run (cont 1; a load's red mark is 2 from this test on) the stage being played
 * gets the score less the other stages (their sum = SCORE, as in a run without loads), else it keeps the slot's figure */
static int st_resync;
/* test 118 (user: "zero out any score breakdown when there's a loaded savestate to avoid confusion (all games)"): from
 * a save state's load (SLOT_STATE: LOAD STATE from the menu or the pause, RESTART STAGE: STATE) to the end of that run
 * the table stays empty (every stage "-"); the stage being played is still followed (STATUS's STAGE). A new run (the
 * credit's slot, the attract's, GD_RUN_GAP vblanks out of a run) ends it: gadgets_breakdown_void */
static int st_void;

static void stages_frame(void)
{
	const unsigned b = *RAMP(M->stage);
	const uint32_t sc = pl[s.side].score; /* test 71: the side shown's */
	int i = b >= 2 && b < 8 ? (int)b - 2 : -1;

	if (!M->modes && *RAMP(0x0C23E0A6u) == 0) /* test 89: Kuro BL's opening (its stage record id 0), main.c stage_now's */
		i = -1;

	if (b >= 8 && b < 14 && M->modes && s.mode == 2)
		i = (int)b - 2;
	if (!s.run) {
		if (st.out < GD_RUN_GAP) {
			st.out++;
		} else {
			pl[0].in = pl[1].in = pl[0].continued = pl[1].continued = 0; /* test 71: the run is over (co-op until then) */
			pl[0].bm_last = pl[1].bm_last = pl[0].bm_on = pl[1].bm_on = 0; /* test 97 */
			if (st.idx >= 0) { /* test 87 */
				memset(st.score, 0, sizeof(st.score));
				memset(st.played, 0, sizeof(st.played));
				memset(st.cont, 0, sizeof(st.cont));
				st.idx = -1;
				st_zeroed = 1;
			}
			st_void = 0; /* test 118 */
		}
		return;
	}
	if (i < 0)
		return;
	if (i < st.idx || (st.out >= GD_RUN_GAP && (st.idx >= 0 || st_zeroed))) {
		memset(st.score, 0, sizeof(st.score));
		memset(st.played, 0, sizeof(st.played));
		memset(st.cont, 0, sizeof(st.cont));
		st.idx = -1;
		st_zeroed = 0;
		restarted = 0; /* test 69: a new run */
		pl[0].continued = pl[1].continued = 0; /* test 83 */
		st_resync = 0;
		if (st.out >= GD_RUN_GAP)
			st_void = 0; /* test 118: a new run (a stage gone back is a restart in the same one) */
	}
	if (st_void) { /* test 118 */
		memset(st.score, 0, sizeof(st.score));
		memset(st.played, 0, sizeof(st.played));
		memset(st.cont, 0, sizeof(st.cont));
		st_resync = 0;
		st.out = 0;
		st.idx = i;
		st.start = st.last = sc;
		st.base = 0;
		return;
	}
	if (st_resync) { /* test 117 */
		if (!pl[s.side].in)
			return;
		st_resync = 0;
		if (i == st.idx) {
			const uint32_t was = st.score[i];
			uint32_t other = 0;
			int cont = 0;
			for (int k = 0; k < ST_N; k++) {
				if (k != i && st.played[k])
					other += st.score[k];
				cont |= st.cont[k] == 1;
			}
			if (!cont && sc >= other)
				st.score[i] = sc - other;
			st.base = st.score[i];
			st.start = st.last = sc;
			log_printf(st.score[i] == was ? C_WHITE : C_YELLOW, "GADGETS: SCORE BREAKDOWN AFTER THE LOAD: STAGE %d %u -> "
			           "%u (%dP SCORE %u, OTHER STAGES %u%s)", i + 1, (unsigned)was, (unsigned)st.score[i], s.side + 1,
			           (unsigned)sc, (unsigned)other, cont ? ", A CONTINUE IN THE RUN: KEPT" : "");
		}
	}
	st.out = 0;
	if (i != st.idx) {
		st.idx = i;
		st.start = sc;
		st.base = 0;
		st.played[i] = 1;
	} else if (sc < st.last) { /* a continue */
		st.base = st.score[i];
		st.start = sc;
		st.cont[i] = 1;
	}
	st.last = sc;
	st.score[i] = st.base + (sc - st.start);
}

void gadgets_state_save(int slot)
{
	if (slot >= 0 && slot < GD_STATE_SLOTS)
		st_slot[slot] = st;
}

static int sm_hold; /* test 122: STAGE MAP's boss hold (defined with the stage map below) */

void gadgets_state_load(int slot, int restart)
{
	if (slot < 0 || slot >= GD_STATE_SLOTS)
		return;
	sm_hold = 0; /* test 122: a load or a restart lets STAGE MAP's box go (the boss holds it again if it is up) */
	st = st_slot[slot];
	st_resync = st.idx >= 0; /* test 117 */
	restarted = restart;
	if (restart && st.idx >= 0 && !st.cont[st.idx])
		st.cont[st.idx] = 2;  /* the stage played again: red as a continue's (test 117: 2, a continue's 1) */
	s.rank_n = 0;             /* the rank's change starts again (no fall from the jump) */
	s.fall_left = 0;
	for (int k = 0; k < 2; k++) { /* test 71: both sides; who plays is seen again from the slot's moment */
		pl[k].shot_n = 0;
		memset(pl[k].shot_hist, 0, sizeof(pl[k].shot_hist));
		pl[k].shot_max = 0; /* test 82 */
		pl[k].state = 0;
		pl[k].in = 0;
		pl[k].continued = 0; /* test 83: a restart is red by restarted; the slot's score is no fall */
		pl[k].score_last = 0;
		pl[k].bm_on = 0; /* test 97: the slot's records are taken as they are */
	}
	bm_sync = 1;
	s.boss = -1;
	s.boss_left = -1;
	s.cand = -1;
	s.cand_n = 0;
	bossclock_reset();
}

/* test 118 */
void gadgets_breakdown_void(int on)
{
	if (on && !st_void)
		log_printf(C_YELLOW, "GADGETS: SCORE BREAKDOWN ZEROED UNTIL THE NEXT RUN (A SAVE STATE LOADED)");
	st_void = on;
}

/* test 84 (main.c's save state files) */
void *gadgets_state_blob(int slot, size_t *bytes)
{
	*bytes = sizeof(st_slot[0]);
	return &st_slot[slot];
}

uint32_t gadgets_score(int side)
{
	return pl[side & 1].score;
}

int gadgets_in(int side)
{
	return pl[side & 1].in;
}

int gadgets_boss_part(void)
{
	return s.boss >= 0 || s.cand >= 0;
}

int gadgets_boss_fight(void)
{
	return s.boss >= 0 && (s.boss_tier < 3 || s.boss_on);
}

/* test 86: side's SCORE is red now (draw_score_s' rule: a restart, a DIP SWITCHES setting, a continue) */
int gadgets_red(int side)
{
	return restarted || dip_red || pl[side & 1].continued;
}

/* test 79: ARRANGE's AIM LOCK held on side p (port C bit 6 / 7 low; main.c's A_LOCK) */
static int lock_down(int p)
{
	return ARR && !(s.port_c & (0x40u << p));
}

/* test 121 item 5 (user: "a new separate gadget (turns off all other gadgets when enabled, 16:9 only) that displays the
 * stage map on the left (and a red box that scrolls alongside the game itself), and when a boss appears, a full picture
 * and name on the right"): STAGE MAP. The game picture is 540 wide at x 370 .. 910 in 16:9, so the side panels are
 * x 0 .. 370 and 910 .. 1280. Left: the stage's map (ibaraweb.dat's map.N, the site's 200 px wide picture, END at the top)
 * at 1.25x, centred, and the game's view (240 x 320) as a 2 px red box along it. Right: the boss (boss.N) and its name
 * (bname.N.*) while it is up, fading in over SM_FADE frames, else the stage's title plate (stitle.N.*). The scroll is the
 * stage's layer 0 scroll (the 16.16 word at +8 of the layer slot: ibara and ARRANGE 0C26CAE8, Kuro BL 0C286320), read
 * from RAM every frame: 0 at the stage's start and sm_stop at the boss's entry. The view's bottom is at the map's bottom
 * at the start and its top at the map's top at sm_stop, so the map's rows per game pixel are H / (sm_stop + 320).
 * work/g121/map/REPORT.md has the measurements and the residuals. */
#define SM_LEFT_W 370    /* the left panel's width (the game picture starts here) */
#define SM_RIGHT_X 910   /* the right panel's left edge */
#define SM_MAP_X 60      /* the map's left edge: (370 - 200 * 1.25) / 2 */
#define SM_MAP_K 1.25f   /* canvas pixels a map pixel */
#define SM_FADE 16       /* frames the boss takes to fade in and out */
#define SM_CHUNK 2048    /* rows per map texture (stage 3's 13000 rows: 7 of them) */
#define SM_NMAPS 6
#define SM_NPLATES 24    /* bname.N.en/ja at 2N + lang (0 .. 11), stitle.N.en/ja at 12 + 2N + lang */
#define SM_CHUNKS 16     /* 1 + 2 + 7 + 2 + 2 + 2 map textures */
#define SM_RUNS 64       /* the stage map's draw runs per frame */

/* the scroll where the stage stops at its boss (game pixels), stages 1..6: [0] ibara and ARRANGE, [1] Kuro BL. Ibara
 * stage 1 measured (work/g121/map/REPORT.md: 2449.25), the others are the boss-entry states of gen/train/ib_boss.h and
 * blk_boss.h. Kuro BL stage 1: test 122 (work/g122/map/REPORT.md) = 2449.25, the boss's entry (the old 2013.25 was a
 * stage 1 run that froze there with no boss and cleared; its dump's 2448.5 is the boss entry). Stage 4 has no usable
 * state (its dump's layer layout differs and Kuro BL has none): 1291.75, unverified. */
static const float sm_stop[2][SM_NMAPS] = {
	{2449.25f, 3264.5f, 10553.45f, 1291.75f, 4037.5f, 2834.12f},
	{2449.25f, 3264.5f, 10269.83f, 1291.75f, 4032.5f, 2834.62f},
};
static const unsigned sm_rows[SM_NMAPS] = {1800, 2800, 13000, 2400, 3200, 4000}; /* the maps' heights (site) */

static int sm_want, sm_ja;        /* the setting and the language (gadgets_stagemap_set) */
static int sm_avail;              /* ibaraweb.dat's pictures are listed and their textures made (game thread) */
static volatile int sm_ready;     /* the pictures are decoded (unpack thread, before gd_unpacked) */
static int sm_n;                  /* the stage being played, 1..6 (0 none) */
static float sm_scroll;           /* that stage's scroll, game pixels (test 122: clamped to [0, stop], held at the stop) */
static int sm_pn;                 /* test 122: the stage of the last frame */
static int sm_hold;               /* test 122: the boss came in this stage: the box is held at the map's top */
static int sm_fade;               /* 0 .. SM_FADE: the boss's picture (the title plate shows the rest) */
static XsdkTexture sm_map[SM_CHUNKS];  /* the maps' chunks, 200 px wide: sm_maprow[] rows each */
static unsigned sm_maprow[SM_CHUNKS], sm_mapfirst[SM_NMAPS], sm_mapc[SM_NMAPS];
static XsdkTexture sm_boss[SM_NMAPS], sm_plate[SM_NPLATES];
static const struct webdat_entry *sm_me[SM_NMAPS], *sm_be[SM_NMAPS], *sm_pe[SM_NPLATES];
static struct {
	const XsdkTexture *t;
	int lin;
	unsigned first, n;   /* the quads' indices in gd_q */
} sm_run[SM_RUNS];
static unsigned sm_nrun;
/* test 122 (user: "add a background (taken from official artwork) to fill in the gaps for the stage map gadget"): the
 * site's stage background bg.stage (540 x 800, grey stage artwork), covering both side panels darkened to 65%: the
 * left panel shows the picture's left part, the right panel its right part. Optional: without it the panels stay black */
#define SM_BG_W 540
#define SM_BG_H 800
#define SM_BG_K 0.65f    /* the panels' brightness */
#define SM_BG_U 0.76132f /* the left panel's share of the picture's width: 370 / 0.9 / 540 (scale 0.9 covers 370 x 720) */
static XsdkTexture sm_bg;
static int sm_bg_ok;     /* the background is decoded (unpack thread, before sm_ready) */
static const struct webdat_entry *sm_bge;
/* test 123 (user: "teresa's boss artwork is too small, use the artbook (or ps2) as reference instead of the website's";
 * "for every other boss, use artbook (or ps2), with transparency so that it's seamless with the background"): the six
 * bosses are the PS2 gallery's pictures 1-6 (Meidi .. Teresa, full length on white), cut out on the unpack thread
 * (sm_cut); boss.N of ibaraweb.dat is the fallback. sm_boss[k] is the whole picture fitted into SM_BOSS_W x SM_BOSS_H,
 * the cut-out sits in its top-left corner: sm_buv[k] its rectangle, sm_bpw/sm_bph[k] its size in texture pixels.
 * bg.boss (370 x 720) is the right panel's own background (sm_bgb, after bg.stage). */
#define SM_BOSS_W 380   /* the largest boss texture (a picture fitted into 380 x 640; reviewer: 360 x 600 drew the narrow bosses under the preview's size) */
#define SM_BOSS_H 640
#define SM_GAL_FIRST 5  /* the gallery's entry of picture 0 (the IBGL header's 5 sheets come first) */
#define SM_GAL_MAX 896  /* a gallery picture's largest side */
#define SM_BB_W 370
#define SM_BB_H 720
static struct {
	uint32_t off, zn;  /* the picture's zlib bytes in the gallery blob */
	unsigned w, h;
} sm_gal[SM_NMAPS];
static int sm_gal_ok;               /* the six pictures are in (game thread, sm_begin): the bosses come from the gallery */
static char sm_gal_why[96];         /* why not (the log's fallback line) */
static unsigned sm_bw[SM_NMAPS], sm_bh[SM_NMAPS];   /* sm_boss[k]'s texture size */
static float sm_buv[SM_NMAPS][4];   /* the cut-out's rectangle in sm_boss[k] (u0, v0, u1, v1) */
static float sm_bpw[SM_NMAPS], sm_bph[SM_NMAPS];    /* the cut-out's size in texture pixels */
static XsdkTexture sm_bgb;          /* bg.boss */
static int sm_bgb_ok;               /* bg.boss is decoded (unpack thread, after bg.stage) */
static const struct webdat_entry *sm_bbe;

/* game thread, every emulated vblank (after the boss's state): the stage being played, its scroll and the boss's fade
 * (the boss's own rule, gadgets_boss_fight). The scroll is read, never integrated: a save state or a restart brings it
 * back by itself */
static void stagemap_frame(void)
{
	const unsigned b = *RAMP(M->stage);
	const int up = s.boss >= 0 && (s.boss_tier < 3 || s.boss_on);
	const uint32_t lay = M == &map_blk ? 0x0C286318u : 0x0C26CAE0u; /* the layer slots (8 x 0x4C, +8 the scroll) */
	const float raw = (float)be32(lay + 8) / 65536.0f;

	/* the stage byte's mapping of stages_frame: 2-7 = stages 1-6; 8-13 = the extended mode's second loop */
	sm_n = b >= 2 && b < 8 ? (int)b - 1 : b >= 8 && b < 14 && M->modes && s.mode == 2 ? (int)b - 7 : 0;
	/* test 122 (user: "the stage map gadget's red box scrolls kinda funky when reaching a boss"; work/g122/map/REPORT.md):
	 * the layer's scroll goes on past the stop once the boss comes (Kuro BL stage 1: 2449 -> 3058, then the arena wraps
	 * to 547 and runs on to 797, frozen there until the stage clears) and the box ran off the map's top. The box is held
	 * at the map's top (the scroll at the stop) from the boss's arrival (s.boss) until the stage changes or a save state,
	 * restart or quit is loaded (gadgets_state_load; reviewer: a jump test let it go at the stage clear's reset to 0, the
	 * box falling to the map's bottom before the next stage). Otherwise the scroll is clamped to [0, stop]. No easing:
	 * the box snaps, and nothing here is integrated */
	if (sm_n != sm_pn)
		sm_hold = 0;
	if (s.boss >= 0)
		sm_hold = 1;
	sm_pn = sm_n;
	if (sm_n >= 1 && sm_n <= SM_NMAPS) {
		const float stop = sm_stop[M == &map_blk][sm_n - 1];
		sm_scroll = sm_hold ? stop : raw < 0.0f ? 0.0f : raw > stop ? stop : raw;
	} else {
		sm_scroll = raw;
	}
	if (up) {
		if (sm_fade < SM_FADE)
			sm_fade++;
	} else if (sm_fade > 0) {
		sm_fade--;
	}
}

void gadgets_frame(const struct gd_input *in)
{
	unsigned k, cons;
	int p;

	if (!cv1k_ram || !M)
		return;
	dip_red = in->dip_changed || in->training; /* test 89: a training run is red as a DIP setting's */
	s.boot = !in->booted;
	s.rank = be32(M->rank);
	s.rank_pct = s.rank >= 0x1000000u ? 0 : (int)(((uint64_t)(0x1000000u - s.rank) * 1000000u) >> 24);
	{
		const int have = s.rank_n >= GD_RANK_SPAN;
		const int d = have ? s.rank_pct - s.rank_hist[(s.rank_n + GD_RANK_SPAN - 1) % GD_RANK_SPAN] : 0;
		if (d <= -10000) { /* a fall of 1% or more in one frame (a death) */
			s.fall = d;
			s.fall_left = GD_RANK_HOLD;
		} else if (s.fall_left) {
			s.fall_left--;
		}
		s.rank_hist[s.rank_n % GD_RANK_SPAN] = s.rank_pct;
		s.rank_n++;
	}
	s.demo = *RAMP(M->consec) == 1;
	/* test 82 (user's todo list: "the status gadget turns on and off occasionally during attract screens"): never in a
	 * demo. ibara's 4th demo (the PC harness's attract, EMU 10241-12611) has M->game_on (0C28530C: the stage script's
	 * call depth, 0C061550 pushes it) at 1 for 10415-10530 and 10680-10810 with the stage byte 0, which lit STATUS,
	 * WEAPON and BULLETS twice; Kuro BL's 4th demo does the same, but its run also needs the stage byte */
	s.run = *RAMP(M->game_on) != 0 && *RAMP(M->game_on) < 3 && (!M->run_stage || *RAMP(M->stage) != 0) && !s.demo;
	for (p = 0; p < 2; p++) { /* test 71: both sides' players */
		struct gd_pl *q = &pl[p];
		const uint32_t r = M->player + (uint32_t)p * M->p2;
		q->score = be32(M->score + (uint32_t)p * M->p2);
		q->extend = be32(r + M->extend);
		q->lives = *RAMP(r + M->lives);
		q->shot = *RAMP(r + M->shot);
		q->shot_p = *RAMP(r + M->shot_p);
		q->bombs = *RAMP(r + M->bombs);
		q->frags = *RAMP(r + M->frags);
		q->ship = *RAMP(M->ship + (uint32_t)p * M->p2);
		for (k = 0; k < 3 && M->options; k++) {
			q->form[k] = *RAMP(r + M->form + k);
			q->opt[k] = *RAMP(r + M->opts + k);
			q->flies[k] = q->opt[k] != 0xFF && be32(M->pods + (uint32_t)p * 0x90 + k * 0x30) != 0;
		}
		if (M->stock) {
			q->weapon = *RAMP(r + M->weapon);
			for (k = 0; k < 7; k++)
				q->owned[k] = be32(M->stock + k * 4) != 0;
		}
#ifdef IB_ARRANGE
		if (ARR) { /* test 81: ARRANGE's stored sub weapons and the current one (arrange/items.c arr_owned, arr_sub) */
			q->weapon = *RAMP(ARRANGE_SUB + (uint32_t)p);
			for (k = 0; k < 7; k++)
				q->owned[k] = *RAMP(ARRANGE_OWNED + (uint32_t)p * 7 + k) != 0;
		}
#endif
		if (M->xtc) { /* test 76 */
			q->xtc = (int32_t)be32(r + XTC_RAW) >> 2;
			q->xtc_left = be16(r + XTC_LEFT);
			q->xtc_hold = *RAMP(r + XTC_HOLD);
			q->xtc_glow = *RAMP(r + XTC_GLOW);
			q->xtc_opts = *RAMP(r + XTC_OPTS);
			q->xtc_hit = (be32(r) & 0x04000000u) != 0;
		}
		/* in the run: its ship seen in play (alive or flying in: work/g65/inv) outside a demo; until the run ends */
		if (s.run && !s.demo && (be32(r) & 0xCC000000u) == 0xCC000000u)
			q->in = 1;
		/* test 83 (user's todo list: "continuing in arrange did not turn the main score gadget red"; all three games, the
		 * user's choice): a continue starts the score again from the continue count (ibara and ARRANGE 0C05DE00, Kuro BL
		 * 0C06CFF0: score = continues, at most 9), so a fall of a side's score while it is in the run = its continue,
		 * as SCORE BREAKDOWN's (stages_frame); a join comes before the side is in */
		if (s.run && q->in && q->score < q->score_last)
			q->continued = 1;
		q->score_last = q->score;
		/* test 82 (user: "reset it to 0 after a death"): the ship hit (work/g65/inv: +0 DC000000 alive -> E0000000 hit,
		 * Kuro BL's for one game frame, then A0000000 waiting): MANUAL and the presses it counts start again */
		{
			const unsigned st = be32(r) >> 24;
			if (q->state == 0xDC && (st == 0xE0 || st == 0xA0)) {
				q->shot_max = 0;
				q->shot_n = 0;
				memset(q->shot_hist, 0, sizeof(q->shot_hist));
			}
			q->state = st;
		}
		hadou_read(q);
		bomb_read(q, in->logic); /* test 97 */
		inv_read(q);
	}
	bm_sync = 0;
	/* the side shown: 2P when its score is ahead (a game on the 2P side alone), else 1P. Test 88 (user's todo list: "when
	 * starting a run, independently of which player side was chosen, the status gadget always indicates bond type A or
	 * bond type C until scoring is registered"; video 2026-10-27 17-06-27: Kuro BL's 2P ship select and stage 1 read
	 * 1P's BOND TYPE A, XTC its ship): in a run, the side in it alone; neither yet (the ship select, the stage's first
	 * frames) the run's side (gd_input.pilot: the credit's, else the menu's); both (co-op) as before */
	if (s.run && !s.demo && pl[0].in != pl[1].in)
		s.side = pl[1].in;
	else if (s.run && !s.demo && !pl[0].in)
		s.side = in->pilot & 1;
	else
		s.side = pl[1].score > pl[0].score;
	s.drop = *RAMP(M->drop) % 25;
	s.medal = *RAMP(M->medal);
	cons = *RAMP(M->consec) & 7;
	s.kind = 0;
	s.count = 0;
	s.streak = 0;
	for (k = 0; k < 4; k++) {
		const unsigned c = *RAMP(M->pickups + k + 8 * cons);
		if (c) {
			s.kind = k + 1;
			s.count = c > 5 ? 6 : c;
			s.streak = c;
			break;
		}
	}
	s.p_streak = *RAMP(M->pickups + 8 * cons); /* kind 0, small P (test 64: the secret's count) */
	s.bgm = *RAMP(M->bgm);
	s.mode = M->modes ? *RAMP(M->mode) : -1;
	s.pilot = in->pilot & 1;
	boss_find();
	stages_frame();
	s.bullets = bullets_read();
	s.boss_on = M->boss_music(s.bgm);
	stagemap_frame(); /* test 121 item 5 */
	s.port[0] = in->port_d;
	s.port[1] = in->port_l;
	s.port_c = in->port_c;
	for (p = 0; p < 2; p++) {
		static unsigned last[2] = {0xFF, 0xFF};
		const unsigned now = s.port[p] | (unsigned)lock_down(p) << 8; /* test 79: ARRANGE's aim lock too */
		if (now != last[p]) {
			last[p] = now;
			s.shown[p] = GD_INPUT_SHOW + GD_INPUT_FADE;
			s.ctl = p; /* test 61: the side last touched (two players at once: a co-op card later, user) */
		} else if (s.shown[p]) {
			s.shown[p]--;
		}
		s.pad[p] = in->pad[p];
	}
	/* test 61: the shot button (button 1) as the game read it, once per logic frame: its presses over the last 60 logic
	 * frames (a second of the game's time, slowdown or not: AUTO SHOT's rate is counted the same way); test 71: each
	 * side's (test 61-70: the side last touched's) */
	if (in->logic != s.shot_logic) {
		s.shot_logic = in->logic;
		for (p = 0; p < 2; p++) {
			struct gd_pl *q = &pl[p];
			/* test 82: a press counts only with the ship alive in a run (the harness: A mashed through a death came
			 * back as MANUAL 3HZ 30 frames after the respawn) */
			const int down = !(s.port[p] & 0x10), press = down && !q->shot_down && s.run && q->state == 0xDC;
			q->shot_down = down;
			q->shot_n += (unsigned)press - q->shot_hist[q->shot_i];
			q->shot_hist[q->shot_i] = (uint8_t)press;
			q->shot_i = (q->shot_i + 1) % 60;
			/* test 82 (user: "fix it to stay at the maximum rate it has reached (either by manually mashing or using the
			 * auto fire button)"): AUTO SHOT's presses are the game's button 1 too; only in a run, the ship alive */
			if (s.run && q->state == 0xDC && q->shot_n > q->shot_max)
				q->shot_max = q->shot_n;
		}
	}
	s.af_bit = in->af_bit;
	for (p = 0; p < 2; p++) {
		s.af_hz[p] = in->af_hz[p];
		for (k = 0; k < GD_KEYS; k++)
			snprintf(s.keys[p][k], sizeof(s.keys[p][k]), "%s", in->keys[p][k] ? in->keys[p][k] : "");
	}
	s.valid = 1;
}

/* ---- quads ---------------------------------------------------------------------------------------------------- */

typedef struct { float r, g, b, a; } col_t;
static const col_t WHITE = {1, 1, 1, 1}, YELLOW = {1, 1, 0.38f, 1}, CYAN = {0.38f, 1, 1, 1}, GREY = {0.67f, 0.67f, 0.67f, 1},
                   RED = {1, 0.32f, 0.32f, 1}, GREEN = {0.4f, 1, 0.4f, 1}, MAGENTA = {1, 0.45f, 1, 1},
                   DARK = {0.25f, 0.22f, 0.25f, 1}, GOLD = {0.95f, 0.78f, 0.15f, 1}, DIM = {0.4f, 0.37f, 0.4f, 1};

static col_t fade(col_t c, float a)
{
	c.a *= a;
	return c;
}

/* test 64: design pixels (test 63's 16:9 places, where the values' coordinates are) -> the view's canvas: a plate's
 * design origin onto its place in the view, scaled by CARD_KS (tx_plate); tx_none = the canvas itself. Test 65: x and
 * y scaled apart (4:3: x by CARD_X43 more) */
static float t_ox, t_oy, t_nx, t_ny, t_kx = 1, t_ky = 1;

static void tx_set(float ox, float oy, float nx, float ny, float kx, float ky)
{
	t_ox = ox;
	t_oy = oy;
	t_nx = nx;
	t_ny = ny;
	t_kx = kx;
	t_ky = ky;
}

static void tx_none(void)
{
	tx_set(0, 0, 0, 0, 1, 1);
}

/* test 60: a point of the view's canvas -> clip space (the front buffer's size drops out: each canvas covers it) */
static void xf(float x, float y, float *cx, float *cy)
{
	switch (gd_view) {
	case GV_43: /* 960x720 */
		*cx = x / 480 - 1;
		*cy = 1 - y / 360;
		break;
	case GV_TATE_L: /* 720x1280, its top at the front buffer's right edge (the raster as it is) */
		*cx = 1 - y / 640;
		*cy = 1 - x / 360;
		break;
	case GV_TATE_R: /* its top at the left edge (the raster turned half a turn) */
		*cx = y / 640 - 1;
		*cy = x / 360 - 1;
		break;
	default: /* 1280x720 */
		*cx = x / 640 - 1;
		*cy = 1 - y / 360;
		break;
	}
}

/* x0, y0 .. x1, y1 (design pixels through tx_*) -> clip space; uv in the texture's 0..1 */
static void quad(float x0, float y0, float x1, float y1, float u0, float v0, float u1, float v1, col_t c)
{
	float (*q)[GD_VF];
	float cx[4][4];
	static const int order[6] = {0, 1, 2, 2, 1, 3};
	int i;

	if ((gd_to_point ? gd_npq >= GD_POINT_QUADS : gd_nq >= GD_MAX_QUADS) || c.a <= 0)
		return;
	x0 = t_nx + (x0 - t_ox) * t_kx;
	x1 = t_nx + (x1 - t_ox) * t_kx;
	y0 = t_ny + (y0 - t_oy) * t_ky;
	y1 = t_ny + (y1 - t_oy) * t_ky;
	cx[0][0] = x0, cx[0][1] = y0, cx[0][2] = u0, cx[0][3] = v0;
	cx[1][0] = x1, cx[1][1] = y0, cx[1][2] = u1, cx[1][3] = v0;
	cx[2][0] = x0, cx[2][1] = y1, cx[2][2] = u0, cx[2][3] = v1;
	cx[3][0] = x1, cx[3][1] = y1, cx[3][2] = u1, cx[3][3] = v1;
	q = gd_to_point ? gd_qp[gd_npq++] : gd_q[gd_nq++];
	for (i = 0; i < 6; i++) {
		const float *k = cx[order[i]];
		xf(k[0], k[1], &q[i][0], &q[i][1]);
		q[i][2] = c.r;
		q[i][3] = c.g;
		q[i][4] = c.b;
		q[i][5] = c.a;
		q[i][6] = k[2];
		q[i][7] = k[3];
	}
}

/* sprite id at x, y, w x h (0 = its own size) */
static void spr(int id, float x, float y, float w, float h, col_t c)
{
	const struct card_rect *r = &card_sprites[id];

	if (w <= 0)
		w = r->w;
	if (h <= 0)
		h = r->h;
	quad(x, y, x + w, y + h, (float)r->x / CARD_ATLAS_W, (float)r->y / CARD_ATLAS_H, (float)(r->x + r->w) / CARD_ATLAS_W,
	     (float)(r->y + r->h) / CARD_ATLAS_H, c);
}

/* a filled box (the white square's middle, stretched) */
static void box(float x, float y, float w, float h, col_t c)
{
	const struct card_rect *r = &card_sprites[CS_WHITE];
	const float u = (r->x + 2.0f) / CARD_ATLAS_W, v = (r->y + 2.0f) / CARD_ATLAS_H;

	if (w > 0 && h > 0)
		quad(x, y, x + w, y + h, u, v, u, v, c);
}

/* test 64: a box's outline, t pixels thick */
static void frame(float x, float y, float w, float h, float t, col_t c)
{
	box(x, y, w, t, c);
	box(x, y + h - t, w, t, c);
	box(x, y + t, t, h - 2 * t, c);
	box(x + w - t, y + t, t, h - 2 * t, c);
}

/* the game's font at k x 8 pixels, advance pixels apart; returns the width (test 65: k 1.5 for the short plates) */
static float text(float x, float y, const char *t, col_t c, float k, float advance)
{
	const float x0 = x;

	for (; *t; t++, x += advance) {
		const unsigned ch = (unsigned char)*t;
		if (ch > 0x20 && ch < 0x80)
			spr(CS_FONT_00 + (int)ch, x, y, 8.0f * k, 8.0f * k, c);
	}
	return x - x0;
}

#define TEXT2(x, y, t, c) text(x, y, t, c, 2, 14)

/* the artwork's digits (sprite base + 0..9) of the number n, right-aligned to x1, at least min digits */
static void digits(int base, float x1, float y, uint32_t n, int min, float advance, col_t c)
{
	int i = 0;

	do {
		x1 -= advance;
		spr(base + (int)(n % 10), x1, y, 0, 0, c);
		n /= 10;
	} while (++i < min || n);
}

/* test 64: plate cp at its place in this view, one atlas pixel per canvas pixel, and the transform for its values;
 * 0 = not in this view. Test 65: 4:3 draws it at CARD_X43 of its width, and for Kuro BL (WEAPON one row there,
 * ibara's three) the plates under WEAPON CARD_SHIFT43 higher (test 71: 4:3 has its own columns, plate_at). Test 66: no
 * backing under the plates (test 65's BACK_SIL
 * was the silhouettes painted out: with MUSIC off it showed in their place) */
static float plate_dy; /* test 70: added to the next plates' places (SPECIAL FORMATIONS under a 4-row WEAPON) */
static float plate_dx; /* test 88: CONTROLS' text plate under MUSIC (XTC FULL) */

static int plate(int cp)
{
	const struct card_plate *p = &card_plates[cp];
	const struct card_rect *r = &card_sprites[p->sprite];
	const float x = p->x[gd_v] + plate_dx, y = p->y[gd_v] + plate_dy;

	if (p->x[gd_v] == -32768)
		return 0;
	tx_none();
	spr(p->sprite, x, y, r->w, r->h, WHITE);
	tx_set(p->ox, p->oy, x, y, p->k, p->k); /* test 67: each plate's own scale (CARD_KS, the pair's less) */
	return 1;
}

/* test 71: plate cp with its top right at xr, y (canvas pixels): on 4:3 its 4:3 sprite (CARD_F43X x CARD_F43Y of its
 * 16:9 size; the atlas holds it in front buffer pixels, 4 / 3 of the canvas's), else its 16:9 one; the transform for
 * its values; returns its height */
static float plate_at(int cp, float xr, float y)
{
	const struct card_plate *p = &card_plates[cp];
	const int v43 = gd_v == CPV_43 && p->sprite43 >= 0;
	const struct card_rect *r = &card_sprites[v43 ? p->sprite43 : p->sprite];
	const float w = v43 ? r->w * 0.75f : r->w, x = xr - w;

	tx_none();
	spr(v43 ? p->sprite43 : p->sprite, x, y, w, r->h, WHITE);
	if (v43)
		tx_set(p->ox, p->oy, x, y, p->k * CARD_F43X, p->k * CARD_F43Y);
	else
		tx_set(p->ox, p->oy, x, y, p->k, p->k);
	return r->h;
}

/* ---- the plates' values ---------------------------------------------------------------------------------------- */

/* what a view shows besides its plates (test 60) */
struct gd_lay {
	int bars;                 /* the rank's and the boss's bars (tate: the numbers alone) */
	int change_in;            /* the rank's change inside its window (else under it, as on 16:9) */
	int wide;                 /* 16:9: STATUS's 4 rows, WEAPON's 5, the 16:9-only gadgets (test 71: 4:3 too) */
	int v43;                  /* test 71: 4:3's columns (CONTROLS as text always) */
};
static const struct gd_lay lay_wide = {1, 0, 1, 0}, lay_43 = {1, 1, 1, 1}, lay_tate = {0, 1, 0, 0};

static void draw_rank(const struct gd_lay *L)
{
	const int pct = s.rank_pct, whole = pct / 10000, frac = pct % 10000;
	const float bw = CL_RANK_WIN_W - 4.0f;
	int d = 0;

	if (s.boot) /* test 89 */
		return;
	if (L->bars)
		box(CL_RANK_WIN_X + 2, CL_RANK_WIN_Y + 5, bw * pct / 1000000.0f, CL_RANK_WIN_H - 10, (col_t){0.9f, 0.08f, 0.08f, 1});
	/* 18.7500%: the whole digits large, the rest small, as the artwork's script places them; test 64: 100% with its
	 * three (the word is 0 there; two digits showed 00) */
	if (whole >= 100)
		spr(CS_DIGIT_L0 + 1, 1114, 29, 0, 0, WHITE);
	spr(CS_DIGIT_L0 + (whole / 10) % 10, 1133, 29, 0, 0, WHITE);
	spr(CS_DIGIT_L0 + whole % 10, 1152, 29, 0, 0, WHITE);
	text(1170, 52, ".", WHITE, 1, 8);
	spr(CS_DIGIT_S0 + frac / 1000, 1175, 40, 0, 0, WHITE);
	spr(CS_DIGIT_S0 + frac / 100 % 10, 1187, 40, 0, 0, WHITE);
	spr(CS_DIGIT_S0 + frac / 10 % 10, 1199, 40, 0, 0, WHITE);
	spr(CS_DIGIT_S0 + frac % 10, 1211, 40, 0, 0, WHITE);
	text(1228, 49, "%", WHITE, 2, 14);
	/* its change over the last second (up = harder, red), or a fall of 1% or more (a death) for 3 s */
	if (s.fall_left)
		d = s.fall;
	else if (s.rank_n > GD_RANK_SPAN)
		d = s.rank_pct - s.rank_hist[s.rank_n % GD_RANK_SPAN];
	if (d) {
		char t[24];
		const int a = d < 0 ? -d : d;
		float w;
		snprintf(t, sizeof(t), "%c%d.%04d", d < 0 ? '-' : '+', a / 10000, a % 10000);
		w = 14.0f * (float)strlen(t);
		if (L->change_in) { /* test 60: in the window's right end, on black where the bar runs under it */
			const float x = CL_RANK_WIN_X + CL_RANK_WIN_W - w - 6, y = CL_RANK_WIN_Y + 5;
			if (L->bars)
				box(x - 4, y - 3, w + 6, 22, (col_t){0, 0, 0, 0.85f});
			TEXT2(x, y, t, d > 0 ? RED : GREEN);
		} else {
			TEXT2(CL_RANK_WIN_X + CL_RANK_WIN_W - w - 4, CL_RANK_WIN_Y + CL_RANK_WIN_H + 8, t, d > 0 ? RED : GREEN);
		}
	}
}

/* the 25-item drop cycle (the INH booklet's, as the MAME artwork's script): shot, medal, shot, medal, option x 4,
 * then shot, medal, shot, medal, a large shot */
static int drop_sprite(unsigned i)
{
	static const unsigned char cyc[5] = {CS_DROP_SHOT, CS_DROP_MEDAL, CS_DROP_SHOT, CS_DROP_MEDAL, CS_DROP_OPTION};
	return i == 24 ? CS_DROP_SHOT_LARGE : cyc[i % 5];
}

/* test 81: the weapon ARRANGE's next option item brings (arrange/items.c, the PS2's item setup 0x1308A0): the first one
 * not stored in the offer order M.G., 3WAY, GATLING, ROCKET, BURNER, NAPALM, HOMING; -1 = all seven stored (then a
 * random one, and every kill drops an item) */
static const char *const arr_wname[7];

static int arr_offer(void)
{
	static const unsigned char offer[7] = {5, 6, 2, 0, 1, 4, 3};
	int k;

	for (k = 0; k < 7; k++)
		if (!P->owned[offer[k]])
			return offer[k];
	return -1;
}

static void draw_drop(void)
{
	unsigned k;

	if (s.boot) /* test 89 */
		return;
	for (k = 0; k < 6; k++) {
		const int id = drop_sprite((s.drop + k) % 25);
		const struct card_rect *r = &card_sprites[id];
		spr(id, 1008 + 40.0f * k + (33 - r->w) / 2.0f, 283 + (33 - r->h) / 2.0f, 0, 0, WHITE);
	}
	if (ARR && s.run && !s.demo) { /* test 81: under the items, what ARRANGE's option item brings */
		const int w = arr_offer();
		if (w >= 0) {
			text(1008, 320, "OPTION:", CYAN, 1.5f, 10.5f);
			text(1008 + 10.5f * 8, 320, arr_wname[w], WHITE, 1.5f, 10.5f);
		} else {
			text(1008, 320, "ALL 7 STORED: EVERY KILL", YELLOW, 1.5f, 10.5f);
		}
	}
}

static const unsigned short medal_value[19] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,
                                               2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};

/* test 67 (user: "rename it to just medals and put the name above it"): the MEDALS plate (its name in a tab, as
 * BULLETS beside it): the next medal fitted to the window's height at its left, its value in the score's digits at the
 * right (test 66: the artwork's NEXT MEDAL piece, the medal alone) */
/* test 89 (user's todo list: "during the initial rom loading, medals are at 4000"): MEDALS and BOSS only in a run or
 * a demo (the medal byte and the enemy parts are the boot's or the last run's outside them: test 88's expected picture
 * 01 had 4000 and 100% at the CAVE logo too) */
static int run_or_demo(void)
{
	return !s.boot && (s.run || s.demo);
}

static void draw_medal(void)
{
	const float h = CL_MEDALS_WIN_H - 4.0f;

	if (s.medal >= 19 || !run_or_demo())
		return;
	spr(CS_MEDAL_100 + (int)s.medal, CL_MEDALS_WIN_X + 4, CL_MEDALS_WIN_Y + 2, h, h, WHITE);
	digits(CS_DIGIT_M0, CL_MEDALS_WIN_X + CL_MEDALS_WIN_W - 8.0f, CL_MEDALS_WIN_Y + (CL_MEDALS_WIN_H - 27) / 2.0f,
	       medal_value[s.medal], 1, 15, WHITE);
}

/* ---- test 65: STATUS (16:9: 4 rows; 4:3: 3 rows; tate: the short plate) ----------------------------------------- */

static const char *const mode_names[3] = {"NORMAL", "HARDER", "EXTENDED"};

static unsigned ext_left(void)
{
	return P->extend > P->score ? P->extend - P->score : 0;
}

static int has_ext(void)
{
	return P->extend && P->extend < M->ext_none;
}

/* the pilot (yellow), the type, the mode (Kuro BL: the ship, straight or spread, where ibara has its mode); compact =
 * the type's letter alone (4:3); returns the right end */
static float status_ship(float x, float y, float k, float adv, int compact)
{
	char t[16];
	/* test 88 (user's todo list: "update the status gadget to indicate arrange next to the player and ship type") */
	const char *m = ARR ? "ARRANGE" : s.mode >= 0 ? (s.mode < 3 ? mode_names[s.mode] : "")
	                : M->kind_bit ? ((P->ship & M->kind_bit) ? "SPREAD" : "STRAIGHT") : "";

	x += text(x, y, (P->ship & M->side_bit) ? "DYNE" : "BOND", YELLOW, k, adv) + adv;
	snprintf(t, sizeof(t), compact ? "%c" : "TYPE %c", 'A' + (P->ship & 3));
	x += text(x, y, t, WHITE, k, adv) + adv;
	return x + text(x, y, m, GREY, k, adv);
}

/* the full bombs as a count, the fragments as 40 bars (40 = one more) */
static void status_bombs(float x, float y)
{
	char t[8];
	unsigned k;

	TEXT2(x, y, "BOMB", CYAN);
	snprintf(t, sizeof(t), "%u", P->bombs);
	TEXT2(x + 14 * 5, y, t, WHITE);
	for (k = 0; k < 40; k++)
		box(x + 14 * 7 + 4.0f * k + (k >= 20 ? 4 : 0), y + 2, 3, 12, k < P->frags ? GOLD : DARK);
}

/* the lives, the points left to the next extend (test 72, user: "rename "ext" to "extend"": EXTEND 6 pixels nearer
 * the lives, its value at x + 200, so 8 digits (Kuro BL's 10000000 at the start) end inside the 321-pixel window) */
static void status_lives(float x, float y)
{
	char t[16];

	TEXT2(x, y, "LIVES", CYAN);
	snprintf(t, sizeof(t), "%u", P->lives);
	TEXT2(x + 14 * 6, y, t, WHITE);
	if (has_ext()) {
		TEXT2(x + 106, y, "EXTEND", CYAN);
		snprintf(t, sizeof(t), "%u", ext_left());
		TEXT2(x + 200, y, t, WHITE);
	}
}

/* the frames of invincibility left (game frames, as the game counts them) as a number, "-" when it can be hit */
static void inv_text(char *t, size_t n)
{
	if (P->inv > 0)
		snprintf(t, n, "%d", P->inv > 999 ? 999 : P->inv);
	else
		snprintf(t, n, "-");
}

static void draw_status(const struct gd_lay *L)
{
	const float x = CL_STATUS_WIN_X + 6;
	const float y = CL_STATUS_WIN_Y + 6;
	char t[8];

	if (!s.run)
		return;
	inv_text(t, sizeof(t));
	/* test 97 (user: "move the bomb count gadget" to WEAPON): three rows, 16:9 and 4:3 (STATUS_ROWS) */
	(void)L;
	status_ship(x, y, 2, 14, 0);
	status_lives(x, y + 20);
	TEXT2(x, y + 40, "INVINCIBLE", CYAN);
	TEXT2(x + 14 * 11, y + 40, t, P->inv > 0 ? YELLOW : GREY);
	if (P->inv > 0 && P->inv_max > 0) { /* the frames left and a bar of them (full = its value when it last went up) */
		box(x + 14 * 15, y + 42, 108, 12, DARK);
		box(x + 14 * 15, y + 42, 108.0f * (float)(P->inv < P->inv_max ? P->inv : P->inv_max) / (float)P->inv_max, 12,
		    CYAN);
	}
}

/* ---- test 65: the short plates (tate's 2 x 2 bands; SCORE on 4:3): RANK's shape, a 30-pixel window, more beside
 * the tab (from CL_<plate>_TAB_END to SHORT_R); their design place is RANK's ------------------------------------- */

#define SHORT_R 1268.0f   /* the right end of their values */
#define SHORT_TY 40.0f    /* the row beside the tab (2x text) */
#define TEXT15(x, y, t, c) text(x, y, t, c, 1.5f, 10.5f) /* 1.5x: two rows in a short window */

static void draw_score_s(void)
{
	if (s.boot) /* test 89 */
		return;
	digits(CS_DIGIT_M0, CL_SCORE_S_WIN_X + CL_SCORE_S_WIN_W - 8.0f, CL_SCORE_S_WIN_Y + (CL_SCORE_S_WIN_H - 27) / 2.0f,
	       P->score, 1, 15, restarted || dip_red || P->continued ? RED : WHITE); /* test 83: or a continue */
}

/* test 89 (user's todo list: "score breakdown is illegible in tate ... replace it", then "maybe extend the status bar
 * with more information, separated by a "-""): tate's STATUS across the band's second row (mkcard.py status_w; SCORE
 * BREAKDOWN's short plate and test 65's short STATUS gone): the ship's line - STAGE - EXTEND, then BOMB - GAUGE - LIVES -
 * MEDAL - INV, 1.5x text */
static float status_item(float x, float y, const char *label, const char *val, col_t vc, int first)
{
	if (!first)
		x += text(x, y, " - ", GREY, 1.5f, 10.5f);
	x += text(x, y, label, CYAN, 1.5f, 10.5f) + 10.5f;
	return x + text(x, y, val, vc, 1.5f, 10.5f);
}

static void draw_status_w(void)
{
	const float x = CL_STATUS_W_WIN_X + 5, y = CL_STATUS_W_WIN_Y + 2;
	char t[16];
	float cx;

	if (!s.run)
		return;
	cx = status_ship(x, y, 1.5f, 10.5f, 0);
	if (st.idx >= 0) {
		snprintf(t, sizeof(t), st.idx >= 6 ? "2-%d" : "%d", st.idx % 6 + 1);
		cx = status_item(cx, y, "STAGE", t, st.idx >= 6 ? MAGENTA : WHITE, 0);
	}
	if (has_ext()) {
		snprintf(t, sizeof(t), "%u", ext_left());
		status_item(cx, y, "EXTEND", t, WHITE, 0);
	}
	snprintf(t, sizeof(t), "%u", P->bombs);
	cx = status_item(x, y + 14, "BOMB", t, WHITE, 1);
	snprintf(t, sizeof(t), "%u/40", P->frags);
	cx = status_item(cx, y + 14, "GAUGE", t, WHITE, 0);
	snprintf(t, sizeof(t), "%u", P->lives);
	cx = status_item(cx, y + 14, "LIVES", t, WHITE, 0);
	if (s.medal < 19) {
		snprintf(t, sizeof(t), "%u", medal_value[s.medal]);
		cx = status_item(cx, y + 14, "MEDAL", t, WHITE, 0);
	}
	inv_text(t, sizeof(t));
	status_item(cx, y + 14, "INV", t, P->inv > 0 ? YELLOW : GREY, 0);
}

/* test 67: the enemy bullets on screen in the score's digits, at the window's right */
static void draw_bullets_s(void)
{
	if (!s.run)
		return;
	digits(CS_DIGIT_M0, CL_BULLETS_S_WIN_X + CL_BULLETS_S_WIN_W - 8.0f,
	       CL_BULLETS_S_WIN_Y + (CL_BULLETS_S_WIN_H - 27) / 2.0f, s.bullets, 1, 15, WHITE);
}

/* the next six drops, each fitted into a 26-pixel slot */
static void draw_drop_s(void)
{
	unsigned k;

	if (s.boot) /* test 89 */
		return;
	for (k = 0; k < 6; k++) {
		const int id = drop_sprite((s.drop + k) % 25);
		const struct card_rect *r = &card_sprites[id];
		const float f = 26.0f / (float)(r->w > r->h ? r->w : r->h), w = r->w * f, h = r->h * f;
		const float x = CL_DROP_S_WIN_X + 8 + 43.0f * k, y = CL_DROP_S_WIN_Y + 2;
		spr(id, x + (26 - w) / 2, y + (26 - h) / 2, w, h, WHITE);
	}
}

/* the next medal and its value */
static void draw_medal_s(void)
{
	char t[8];

	if (s.medal >= 19 || !run_or_demo())
		return;
	spr(CS_MEDAL_100 + (int)s.medal, CL_MEDAL_S_WIN_X + 8, CL_MEDAL_S_WIN_Y + 1, 28, 28, WHITE);
	snprintf(t, sizeof(t), "%u", medal_value[s.medal]);
	TEXT2(CL_MEDAL_S_WIN_X + 46, CL_MEDAL_S_WIN_Y + 7, t, WHITE);
}

/* test 61: the artwork's large digits (the rank's whole ones, 19 pixels apart) in the taller window */
static void draw_score(void)
{
	if (s.boot) /* test 89: the boot's RAM (1034707410 on the user's picture) */
		return;
	digits(CS_DIGIT_L0, CL_SCORE_WIN_X + CL_SCORE_WIN_W - 10.0f, CL_SCORE_WIN_Y + (CL_SCORE_WIN_H - 40) / 2.0f, P->score,
	       1, 19, restarted || dip_red || P->continued ? RED : WHITE); /* test 69: red after a restart in this run;
	                                         * test 81: or with a DIP SWITCHES setting not its default; test 83: or a
	                                         * continue */
}

/* test 67 (user: "a new bullet counter gadget with large number font"): the enemy bullets on screen in the score's
 * large digits */
static void draw_bullets(void)
{
	if (!s.run)
		return;
	digits(CS_DIGIT_L0, CL_BULLETS_WIN_X + CL_BULLETS_WIN_W - 10.0f, CL_BULLETS_WIN_Y + (CL_BULLETS_WIN_H - 40) / 2.0f,
	       s.bullets, 1, 19, WHITE);
}

/* an option slot's name (the names the game prints at a pickup; MACHINE GUN shortened) */
static const char *opt_name(unsigned v)
{
	static const char *const n[7] = {"ROCKET", "BURNER", "GATLING", "HOMING", "NAPALM", "M.GUN", "5WAY"};
	return v >> 1 < 7 ? n[v >> 1] : "-"; /* test 61: weapon * 2 + side (test 60 read 2P's as none) */
}

/* the special formation (5 of a kind, then an option): the first slot flying an option with a code (test 61: an
 * empty slot's code is stale, the next option there clears it) */
static const char *form_name(void)
{
	int k;

	for (k = 0; k < 3; k++)
		switch (P->flies[k] ? P->form[k] : 0) {
		case 1: return "SEARCH";
		case 2: return "WIDE";
		case 3: case 4: return "ROLLING";
		case 5: return "BACK";
		default: break;
		}
	return NULL;
}

/* test 81: ARRANGE's sub weapons by the PS2's names (its plates: M.G., 3WAY, GATLING, ROCKET, BURNER, NAPALM, HOMING) */
static const char *const arr_wname[7] = {"ROCKET", "BURNER", "GATLING", "HOMING", "NAPALM", "M.G.", "3WAY"};

/* test 64 (Kuro BL): its seven weapons in three rows, in its HUD's order (M.G, 5WAY, GATLING / ROCKET, BURNAR,
 * NAPALM / HOMING; work/card/blk/REPORT.md section 3), in a box: owned ones lit, the current one yellow on gold.
 * Test 81: ARRANGE's stored sub weapons the same way (the PS2's offer order is Kuro BL's HUD order) */
static void draw_stock(float x, float y)
{
	static const unsigned char order[7] = {5, 6, 2, 0, 1, 4, 3};
	int k;

	frame(x - 3, y - 3, 14 * 21 + 6, 3 * 20 + 2, 1, GREY);
	for (k = 0; k < 7; k++) {
		const unsigned w = order[k];
		const float cx = x + 14 * 7.0f * (k % 3), cy = y + 20.0f * (k / 3);
		const char *n = ARR ? arr_wname[w] : opt_name(w * 2);
		if (w == P->weapon && P->owned[w])
			box(cx - 2, cy - 2, 14.0f * (float)strlen(n) + 4, 20, (col_t){0.45f, 0.32f, 0.06f, 1});
		TEXT2(cx, cy, n, w == P->weapon && P->owned[w] ? YELLOW : P->owned[w] ? WHITE : DIM);
	}
}

/* test 64 (16:9, under BOMB; user: "hadou gun duration gadget below the bomb gadget (by frame numbers)", the
 * explosion's): CHARGE while the bomb is held, FLYING once fired, then its explosion's game frames left (a bar under
 * BOMB's fragments, the number after it; x2 while two explode) */
static void draw_hadou(float x, float y)
{
	char t[16];

	TEXT2(x, y, "HADOU", CYAN);
	switch (P->hd_phase) {
	case HD_EXPLODING:
		box(x + 14 * 7, y + 2, 140, 12, DARK);
		box(x + 14 * 7, y + 2, 140.0f * (float)(P->hd_left > HD_TOTAL ? HD_TOTAL : P->hd_left) / HD_TOTAL, 12,
		    (col_t){1, 0.35f, 0.1f, 1});
		snprintf(t, sizeof(t), "%d", P->hd_left);
		TEXT2(x + 14 * 7 + 148, y, t, YELLOW);
		if (P->hd_count > 1)
			TEXT2(x + 14 * 7 + 148 + 14 * 3 + 4, y, "X2", WHITE);
		break;
	case HD_FLYING:
		TEXT2(x + 14 * 7, y, "FLYING", WHITE);
		break;
	case HD_CHARGING:
		TEXT2(x + 14 * 7, y, "CHARGE", GREY);
		break;
	default:
		TEXT2(x + 14 * 7, y, "-", GREY);
		break;
	}
}

/* test 83 (user's todo list: "a hadou trail duration gadget, directly below the first hadou gadget"; 16:9, all three
 * games): the game frames until the side's last trail piece goes (hadou_read's tr_left), a bar of its 512 and the
 * number as HADOU's; "+" while the Hadou still flies (more pieces to come); "-" with none */
static void draw_trail(float x, float y)
{
	char t[16];

	TEXT2(x, y, "TRAIL", CYAN);
	if (!P->tr_count) {
		TEXT2(x + 14 * 7, y, "-", GREY);
		return;
	}
	box(x + 14 * 7, y + 2, 140, 12, DARK);
	box(x + 14 * 7, y + 2, 140.0f * (float)(P->tr_left > TR_TOTAL ? TR_TOTAL : P->tr_left) / TR_TOTAL, 12,
	    (col_t){0.3f, 0.75f, 1, 1});
	snprintf(t, sizeof(t), "%d", P->tr_left);
	TEXT2(x + 14 * 7 + 148, y, t, YELLOW);
	if (P->tr_more)
		TEXT2(x + 14 * 7 + 148 + 14 * 3 + 4, y, "+", WHITE);
}

/* test 97 (user: "a bomb frame duration gadget under weapon (above hadou bar)"): the side's bomb (bomb_read) in game
 * frames, counting up from its first frame while it lasts (yellow; test 98: the bar over its blast_len), then the last one's
 * length (white on a dim bar); "-" before the run's first */

static void draw_blast(float x, float y)
{
	const unsigned n = P->bm_on ? P->bm_frames : P->bm_last;
	char t[16];

	TEXT2(x, y, "BLAST", CYAN);
	if (!n) {
		TEXT2(x + 14 * 7, y, "-", GREY);
		return;
	}
	box(x + 14 * 7, y + 2, 140, 12, DARK);
	/* test 98: the bar fills over the bomb's own length (blast_len), then stays full and dim */
	box(x + 14 * 7, y + 2, P->bm_on && P->bm_len ? 140.0f * (float)n / (float)P->bm_len : 140.0f, 12,
	    P->bm_on ? (col_t){1, 0.75f, 0.2f, 1} : (col_t){0.5f, 0.42f, 0.3f, 1});
	snprintf(t, sizeof(t), "%u", n);
	TEXT2(x + 14 * 7 + 148, y, t, P->bm_on ? YELLOW : WHITE);
}

/* test 61's RAPID (ibara): AUTO = AUTO SHOT's rate (the controls' AUTOFIRE), lit while its button is held, OFF when no
 * button has it; NOW = the presses of the shot button the game read in its last 60 logic frames; test 82 (user:
 * "rename "now" to "manual"", "stay at the maximum rate it has reached ... reset it to 0 after a death"): MANUAL = the
 * highest of those since the ship's last death (shot_max), its value 3 columns further (the plate's 327 pixels hold
 * "AUTO 30HZ  MANUAL 30HZ") */
static void draw_auto(float x, float y)
{
	char t[16];

	TEXT2(x, y, "AUTO", CYAN);
	if (s.keys[CS][2][0]) {
		snprintf(t, sizeof(t), "%dHZ", s.af_hz[CS]);
		TEXT2(x + 14 * 5, y, t, s.pad[CS] & s.af_bit ? YELLOW : WHITE);
	} else {
		TEXT2(x + 14 * 5, y, "OFF", GREY);
	}
}

static void draw_rapid(float x, float y)
{
	char t[16];

	draw_auto(x, y);
	TEXT2(x + 14 * 11, y, "MANUAL", CYAN);
	snprintf(t, sizeof(t), "%uHZ", pl[CS].shot_max);
	TEXT2(x + 14 * 18, y, t, pl[CS].shot_max ? WHITE : GREY);
}

/* test 69: CONTROLS' slim text plate is drawn (16:9); test 71: 4:3's always (no stick there) */
static int ctl_text_shown(const struct gd_lay *L)
{
	return ON(GD_CONTROLS) && (L->v43 || (L->wide && gd_ctl_text));
}

/* rows of 20 pixels: the shot's level (boxes) and the small P toward the next; ibara: the left and right options, the
 * rear one and the formation; Kuro BL (test 64, 16:9): its weapon box; test 64, 16:9: HADOU; test 64, ibara on 16:9:
 * RAPID (test 61's plate). Test 65: the ship, the bombs and the lives went to STATUS (16:9: 5 rows; 4:3: ibara's 3,
 * Kuro BL's SHOT alone) */
static void draw_weapon(const struct gd_lay *L)
{
	const float x = CL_WEAPON5_WIN_X + 6;
	float y = CL_WEAPON5_WIN_Y + 6;
	char t[40];
	unsigned k;

	if (!s.run)
		return;
	/* shot: 7 boxes (level 0 = the first), then the small P toward the next level (level k takes k + 1; test 64: only
	 * up to M->shot_top, ibara's small P give points from 5); test 64, ibara (user: "shot gadget to include level 6
	 * power up's secret condition"): the small P picked up in a row, of 5 (work/g64/secret: the 6th in a row gives
	 * level 6; another kind's item restarts it, items lost do nothing): MAX = the next small P gives it, "-" = the row
	 * went past 5 */
	TEXT2(x, y, "SHOT", CYAN);
	for (k = 0; k < 7; k++)
		box(x + 14 * 5 + 15.0f * k, y + 2, 12, 12, k <= P->shot ? GOLD : DARK);
	if (P->shot <= M->shot_top) {
		snprintf(t, sizeof(t), "+%u/%u", P->shot_p, P->shot + 1);
		TEXT2(x + 14 * 5 + 15 * 7 + 6, y, t, WHITE);
	}
	if (M->secret && P->shot != 6) {
		const float sx = x + 14 * 5 + 15 * 7 + 6 + 14 * 5;
		spr(CS_POWERUP_1, sx, y, 16, 16, s.p_streak <= 5 ? WHITE : fade(WHITE, 0.4f));
		if (s.p_streak == 5) {
			TEXT2(sx + 18, y, "MAX", YELLOW);
		} else if (s.p_streak < 5) {
			snprintf(t, sizeof(t), "%u/5", s.p_streak);
			TEXT2(sx + 18, y, t, WHITE);
		} else {
			TEXT2(sx + 18, y, "-", GREY);
		}
	}
	if (ARR) { /* test 81: ARRANGE's stored sub weapons (16:9: Kuro BL's box; else the current one and how many); test 97:
	            * the box unless gd_compact (16:9 co-op) */
		if (!gd_compact) {
			draw_stock(x + 3, y + 23);
			y += 60;
		} else {
			const int cur = P->weapon < 7 && P->owned[P->weapon];
			int n = 0;
			for (k = 0; k < 7; k++)
				n += P->owned[k];
			y += 20;
			TEXT2(x, y, "SUB", CYAN);
			TEXT2(x + 14 * 4, y, cur ? arr_wname[P->weapon] : "-", cur ? YELLOW : GREY);
			snprintf(t, sizeof(t), "%d/7", n);
			TEXT2(x + 14 * 13, y, t, n ? WHITE : GREY);
			y += 20;
			TEXT2(x, y, "FORM", CYAN);
#ifdef IB_ARRANGE
			{
				static const char *const fn[5] = {"NORMAL", "BACK", "WIDE", "ROLLING", "SEARCH"};
				const unsigned f = *RAMP(ARRANGE_FORM + (uint32_t)P->side);
				TEXT2(x + 14 * 5, y, f < 5 ? fn[f] : "-", f ? MAGENTA : WHITE);
			}
#endif
		}
	} else if (M->options) { /* ibara's options */
		const char *f = form_name();
		y += 20;
		/* test 61: a slot's option while it flies (after a hit until the respawn: none) */
		TEXT2(x, y, "L", CYAN);
		TEXT2(x + 14 * 2, y, P->flies[0] ? opt_name(P->opt[0]) : "-", P->flies[0] ? WHITE : GREY);
		TEXT2(x + 14 * 11, y, "R", CYAN);
		TEXT2(x + 14 * 13, y, P->flies[1] ? opt_name(P->opt[1]) : "-", P->flies[1] ? WHITE : GREY);
		y += 20;
		TEXT2(x, y, "B", CYAN);
		TEXT2(x + 14 * 2, y, P->flies[2] ? opt_name(P->opt[2]) : "-", P->flies[2] ? WHITE : GREY);
		/* test 61: FORMATION's plate has it where it is drawn; test 71: in co-op 2P's own (its plate is 1P's) */
		if (f && !(L->wide && ON(GD_FORMATION) && !(coop_now && P->side)))
			TEXT2(x + 14 * 11, y, f, MAGENTA);
	} else if (M->stock && !gd_compact) { /* test 64: Kuro BL's weapon box, three rows */
		draw_stock(x + 3, y + 23);
		y += 60;
	} else if (M->stock) { /* test 97, 16:9 co-op: the weapon in use and the stock's count (the stock is both sides') */
		const int cur = P->weapon < 7 && P->owned[P->weapon];
		int n = 0;
		for (k = 0; k < 7; k++)
			n += P->owned[k];
		y += 20;
		TEXT2(x, y, "OPTION", CYAN);
		TEXT2(x + 14 * 7, y, cur ? opt_name(P->weapon * 2) : "-", cur ? YELLOW : GREY);
		snprintf(t, sizeof(t), "%d/7", n);
		TEXT2(x + 14 * 16, y, t, n ? WHITE : GREY);
	}
	/* test 97: the bombs (STATUS's row before) and the bomb's length, above HADOU */
	y += 20;
	status_bombs(x, y);
	y += 20;
	draw_blast(x, y);
	/* test 64: the Hadou's row; test 67: always (no switch of its own); test 83: its trail's under it */
	y += 20;
	draw_hadou(x, y);
	y += 20;
	draw_trail(x, y);
	/* test 61's RAPID (ibara, 16:9); test 67: always (no switch of its own); test 69: on CONTROLS' text plate when that
	 * is shown (user: "move the auto shot - auto / now shot frequencies gadgets to the bottom row of it") */
	if (RAPID_ON_WEAPON && !ctl_text_shown(L))
		draw_rapid(x, y + 20);
}

/* test 79 (user: "no 'missed' state for special formation gadget in arrange"): ARRANGE has no streak at all (an option
 * item brings a weapon, arrange/items.c arr_item1 as the PS2's: no combination formations), FORMATION CHANGE picks the
 * formation (NORMAL, BACK, WIDE, ROLLING, SEARCH = arr_form 0-4). So its rows: the formation, how its options fly (the
 * PS2's rules, work/ps2arr/REPORT.md), lit on gold while it is the one chosen; ON and its slots while they fly it.
 * Test 83 (user's todo list: "rename special formations gadget to just "formations" since they're not hidden in
 * arrange; also, reorder the gadget in the following order (add a 5th line to fit normal formation) normal back wide
 * rolling search"; "delete the pink "on" and "lrb", the highlight is enough"): its own 5-row plate FORMATIONS
 * (mkcard.py form5), a row per arr_form value 0-4 in FORMATION CHANGE's order, NORMAL's description left blank (user) */
static void draw_formation_arr(void)
{
#ifdef IB_ARRANGE
	static const char *const names[5] = {"NORMAL", "BACK", "WIDE", "ROLLING", "SEARCH"};
	static const char *const how[5] = {"", "REARWARD", "SIDEWAYS", "CIRCLING", "TRACKING"};
	const float x = CL_FORM5_WIN_X + 6;
	const unsigned cur = *RAMP(ARRANGE_FORM + (uint32_t)P->side);

	for (unsigned i = 0; i < 5; i++) {
		const float y = CL_FORM5_WIN_Y + 4 + 20.0f * i;
		const int lit = cur == i;
		if (lit)
			box(x - 3, y - 2, CL_FORM5_WIN_W - 6, 20, (col_t){0.45f, 0.32f, 0.06f, 1});
		TEXT2(x, y, names[i], lit ? YELLOW : WHITE);
		TEXT2(x + 112, y, how[i], lit ? WHITE : DIM);
	}
#endif
}

/* test 61 (ibara, 16:9): the special formations (shmups.wiki's "Special Option Formations", work/g61/re/REPORT.md):
 * row 1 = the streak being collected (its item, its count of 5, the formation it makes): at 5 the next option makes
 * it (+OPTION; ALREADY when all three slots fly it, the game then does nothing), past 5 it is missed until another
 * kind starts a streak; row 2 = the formation the options fly in (ON, its name, the slots flying it) */
static void draw_formation(void)
{
	/* test 70 (user: "rework the special formations gadget by providing the full list of formations on the gadget
	 * itself, with their conditions to achieve it, similar to shot level 6; when a special formation is on its way to
	 * being activated, highlight it"): a row per formation, its condition as SHOT's secret shows its own (the item and
	 * its count of 5 in a row, then an option): SEARCH 5 fragments, WIDE 5 options (the 6th makes it), ROLLING 5 medals,
	 * BACK 5 small P. The kind being collected (1-5 in a row): its row lit on gold, at 5 +OPTION (ALREADY when all three
	 * slots fly it, the game then does nothing); past 5 MISSED until another kind starts a streak; a formation the options
	 * fly: ON and its slots (test 61's second row). The list shows outside a run too (the counts only in one). */
	static const char *const names[4] = {"SEARCH", "WIDE", "ROLLING", "BACK"};
	static const uint8_t kinds[4] = {2, 1, 3, 0}; /* their items: fragment, option, medal, small P (pickup kinds) */
	static const uint8_t codes[4][3] = {{1, 1, 1}, {2, 2, 0}, {3, 4, 0}, {5, 5, 5}};
	static const char slot[3][2] = {"L", "R", "B"};
	const float x = CL_FORM_WIN_X + 6;
	int i, k;

	/* test 71 (user: "special formations gadget should be empty while in attract"): nothing outside a run or in a demo */
	if (!s.run || s.demo)
		return;
	if (ARR) {
		draw_formation_arr();
		return;
	}
	for (i = 0; i < 4; i++) {
		const float y = CL_FORM_WIN_Y + 4 + 20.0f * i;
		const uint8_t *want = codes[i];
		const int mine = s.kind == kinds[i] + 1u; /* this formation's item is being collected (both sides' streak) */
		const int lit = mine && s.streak >= 1 && s.streak <= 5;
		const int already = P->flies[0] && P->flies[1] && P->flies[2] && P->form[0] == want[0] &&
		                    P->form[1] == want[1] && P->form[2] == want[2];
		int on = 0, sides[2] = {0, 0};
		char t[8];
		for (k = 0; k < 3; k++)
			for (int q = 0; q < 2; q++)
				sides[q] |= want[k] && pl[q].flies[k] && pl[q].form[k] == want[k];
		on = coop_now ? sides[0] | sides[1] : sides[P->side];
		if (lit)
			box(x - 3, y - 2, CL_FORM_WIN_W - 6, 20, (col_t){0.45f, 0.32f, 0.06f, 1});
		TEXT2(x, y, names[i], lit ? YELLOW : on ? MAGENTA : WHITE);
		spr(CS_POWERUP_1 + kinds[i], x + 104, y - 1, 18, 18, lit ? WHITE : fade(WHITE, 0.55f));
		if (mine && s.streak > 5)
			snprintf(t, sizeof(t), "-");
		else
			snprintf(t, sizeof(t), "%u/5", mine ? s.streak : 0u);
		TEXT2(x + 126, y, t, lit ? (s.streak == 5 ? YELLOW : WHITE) : DIM);
		TEXT2(x + 175, y, "+", lit ? WHITE : DIM);
		spr(CS_POWERUP_2, x + 191, y - 1, 18, 18, lit ? WHITE : fade(WHITE, 0.55f)); /* the option that makes it */
		if (mine && s.streak == 5) {
			TEXT2(x + 217, y, already ? "ALREADY" : "+OPTION", already ? GREY : YELLOW);
		} else if (mine && s.streak > 5) {
			TEXT2(x + 217, y, "MISSED", RED);
		} else if (on && coop_now) { /* test 71: the sides flying it */
			TEXT2(x + 217, y, "ON", MAGENTA);
			TEXT2(x + 217 + 35, y, "1P", sides[0] ? WHITE : DIM);
			TEXT2(x + 217 + 35 + 14 * 3, y, "2P", sides[1] ? WHITE : DIM);
		} else if (on) {
			TEXT2(x + 217, y, "ON", MAGENTA);
			for (k = 0; k < 3; k++)
				if (want[k])
					TEXT2(x + 217 + 35 + 14.0f * k, y, slot[k], P->flies[k] && P->form[k] == want[k] ? WHITE : DIM);
		}
	}
}

/* test 76, Kuro BL's XTC: the graze window's half sizes in game pixels as the player sees it (hw across, hh up and down)
 * with A held n frames at the rank now (the header's box: 19 + 1 and 14 + 1, each + e) */
static void xtc_half(unsigned n, float *hw, float *hh)
{
	const uint32_t inv = s.rank < 0x1000000u ? 0x1000000u - s.rank : 0;
	const float e = (float)(((inv >> 3) * n) >> 3) / 65536.0f;

	*hw = 20 + e;
	*hh = 15 + e;
}

/* the game's tint of its sphere at the rank now (0C071110: q = ((0xFFFFFF - rank) >> 16) * 2, blue -> green -> red) */
static col_t xtc_tint(void)
{
	const unsigned q = s.rank < 0xFFFFFFu ? ((0xFFFFFFu - s.rank) >> 16) * 2 : 0;
	const unsigned r = q > 255 ? q - 255 : 0, g = q <= 255 ? q : 510 - q, b = q < 255 ? 255 - q : 0;

	return (col_t){r / 255.0f, g / 255.0f, b / 255.0f, 1};
}

/* Test 76 (user: "the value that increases when you shoot while grazing bullets, as well as the size of the increasing
 * graze window, in both a graph representing the ship, and the pixel number"). At the left the graph: the game's own
 * ship (the run's pilot and ship, work/card/blk/ships) and the graze window around it, both at XTC_G canvas pixels a
 * game pixel (the largest window, 104 x 94, fits), the window in the sphere's tint, lit by the sphere's opacity (a
 * graze); while the window is tested (A held 5 frames or more, the pods out, the ship hittable) it has its size now,
 * else (dim) the size holding A gives at this rank. At the right the counter in the large digits (the game's popup
 * green), a bar of the frames until it is wiped, the window's size in game pixels (across x up and down) and what the
 * window is doing. Nothing outside a run or in a demo, as SPECIAL FORMATIONS. */
#define XTC_G 0.85f

/* test 88 (user's todo list: "update the gadget to display the center of the ship's hitbox"): the ship's hitbox against
 * enemy bullets, per ship (Bond / Dyne x straight / spread, xtc_ship_ix), game pixels upright as the sprites (x right,
 * y down as the player sees it): its half sizes and its centre from the player's place (work/g88/blkhit/REPORT.md, read
 * in 0C06EF50 and checked on the harness: the table 0C17E12C's core box is 2 x 2, 2 pixels up for Bond, down for Dyne,
 * whatever the lean, frame, shot or bomb; a bullet's own box is forced to half 1, so a bullet kills while its centre is
 * strictly inside the 4 x 4 square drawn here) */
static const struct { float hw, hh, dx, dy; } xtc_hb[4] = {
	{2, 2, 0, -2}, {2, 2, 0, -2}, /* Bond straight, spread */
	{2, 2, 0, 2}, {2, 2, 0, 2},   /* Dyne straight, spread */
};

static int xtc_ship_ix(void)
{
	return (P->ship & M->side_bit ? 2 : 0) + (P->ship & M->kind_bit ? 1 : 0);
}

/* what the window does (SMALL's and FULL's last row) */
static const char *xtc_state(col_t c, col_t *sc)
{
	*sc = DIM;
	if (!P->xtc_hit)
		return "-";
	if (!P->xtc_opts)
		return "NO OPTIONS";
	if (P->xtc_hold <= 4)
		return "HOLD SHOT";
	if (P->xtc_glow) {
		*sc = c;
		return "SCRATCHING";
	}
	*sc = WHITE;
	return "READY";
}

/* the graph at k design pixels a game pixel around the player's place gx, gy: the graze window (its fill while it
 * glows, its frame live or dim), the ship, then (test 88) the hitbox (FULL: hb_box) and its centre */
static void xtc_graph(float gx, float gy, float k, int hb_box)
{
	const int active = P->xtc_hit && P->xtc_opts && P->xtc_hold > 4;
	const int ix = xtc_ship_ix(), id = CS_SHIP_BOND_ST + ix;
	const struct card_rect *sh = &card_sprites[id];
	const col_t c = xtc_tint();
	const float cx = gx + xtc_hb[ix].dx * k, cy = gy + xtc_hb[ix].dy * k, dot = k < 1.5f ? 2 : k;
	float hw, hh;

	xtc_half(active ? P->xtc_hold : 8, &hw, &hh);
	if (P->xtc_glow)
		box(gx - hw * k, gy - hh * k, 2 * hw * k, 2 * hh * k, fade(c, 0.45f * (P->xtc_glow > 0xC0 ? 1.0f :
		                                                                           P->xtc_glow / 192.0f)));
	/* the ship's centre is its picture's 20, 16 (the player's place) */
	spr(id, gx - 20 * k, gy - 16 * k, sh->w * k, sh->h * k, P->xtc_hit ? WHITE : fade(WHITE, 0.5f));
	frame(gx - hw * k, gy - hh * k, 2 * hw * k, 2 * hh * k, 2, active ? c : fade(c, 0.4f));
	if (hb_box && xtc_hb[ix].hw > 0)
		frame(cx - xtc_hb[ix].hw * k, cy - xtc_hb[ix].hh * k, 2 * xtc_hb[ix].hw * k, 2 * xtc_hb[ix].hh * k, 1, RED);
	box(cx - dot / 2, cy - dot / 2, dot, dot, YELLOW);
}

static void draw_xtc(void)
{
	static const col_t XTC_GREEN = {0x30 / 255.0f, 0xF0 / 255.0f, 0x60 / 255.0f, 1}; /* the game's "+XTC" popup */
	const float wx = CL_XTC_WIN_X, wy = CL_XTC_WIN_Y, ww = CL_XTC_WIN_W, wh = CL_XTC_WIN_H;
	const float gx = wx + 54, gy = wy + wh / 2, tx = wx + 112; /* the graph's centre, the text's left */
	const int active = P->xtc_hit && P->xtc_opts && P->xtc_hold > 4;
	const char *st;
	col_t sc;
	float hw, hh;
	char t[16];

	if (!s.run || s.demo)
		return;
	xtc_graph(gx, gy, XTC_G, 0);
	digits(CS_DIGIT_L0, wx + ww - 10, wy + 2, (uint32_t)(P->xtc > 0 ? P->xtc : 0), 1, 19, P->xtc > 0 ? XTC_GREEN : DIM);
	if (P->xtc > 0)
		box(tx, wy + 43, (ww - 10 - (tx - wx)) * (P->xtc_left >= XTC_TIMER ? 1.0f : P->xtc_left / (float)XTC_TIMER), 3,
		    XTC_GREEN);
	/* test 88 (user: "remove the size blue line ... but keep the xx x xx px pixel size") */
	xtc_half(active ? P->xtc_hold : 8, &hw, &hh);
	snprintf(t, sizeof(t), "%dX%d", (int)lroundf(2 * hw), (int)lroundf(2 * hh));
	{
		const float w = TEXT2(tx, wy + 49, t, active ? WHITE : GREY);
		TEXT2(tx + 14 + w, wy + 49, "PX", GREY);
	}
	st = xtc_state(xtc_tint(), &sc);
	TEXT2(tx, wy + 69, st, sc);
}

/* Test 88 (user's todo list: "make a toggle to display the ship's full scale sprite, hitbox and scratching area, instead
 * of a smaller approximation"): XTC FULL, 16:9's one player: its 12-row plate (mkcard.py xtcfull) to the left column's
 * bottom (the stick CONTROLS off, its text plate under MUSIC); the graph at the game picture's own scale (gd_game_k
 * canvas pixels a game pixel, through the plate's CARD_KS), point-sampled as the picture is: the ship, the graze window,
 * the hitbox and its centre; the counter and its bar at the graph's right, the window's size and what it does under */
static void draw_xtc_full(void)
{
	static const col_t XTC_GREEN = {0x30 / 255.0f, 0xF0 / 255.0f, 0x60 / 255.0f, 1};
	const float wx = CL_XTCFULL_WIN_X, wy = CL_XTCFULL_WIN_Y, ww = CL_XTCFULL_WIN_W;
	const float k = gd_game_k / CARD_KS; /* design pixels a game pixel */
	const float gx = wx + 4 + 52 * k, gy = wy + 4 + 47 * k; /* the largest window (104 x 94) at the graph's top left */
	const float tx = wx + 8 + 104 * k, ty = wy + 12 + 94 * k;
	const int active = P->xtc_hit && P->xtc_opts && P->xtc_hold > 4;
	const char *st;
	col_t sc;
	float hw, hh;
	char t[16];

	if (!s.run || s.demo)
		return;
	gd_to_point = 1;
	xtc_graph(gx, gy, k, 1);
	gd_to_point = 0;
	/* test 99 (user: the number touched the right border): 12 in from the window's right, its bar ending under it */
	digits(CS_DIGIT_L0, wx + ww - 12, wy + 2, (uint32_t)(P->xtc > 0 ? P->xtc : 0), 1, 19, P->xtc > 0 ? XTC_GREEN : DIM);
	if (P->xtc > 0)
		box(tx, wy + 43, (ww - 12 - (tx - wx)) *(P->xtc_left >= XTC_TIMER ? 1.0f : P->xtc_left / (float)XTC_TIMER), 3,
		    XTC_GREEN);
	xtc_half(active ? P->xtc_hold : 8, &hw, &hh);
	snprintf(t, sizeof(t), "%dX%d", (int)lroundf(2 * hw), (int)lroundf(2 * hh));
	{
		const float w = TEXT2(wx + 6, ty, t, active ? WHITE : GREY);
		TEXT2(wx + 6 + 14 + w, ty, "PX", GREY);
	}
	st = xtc_state(xtc_tint(), &sc);
	TEXT2(wx + 6 + 14 * 11, ty, st, sc);
}

static void draw_music(void)
{
	const char *n = M->bgm_name(s.bgm);
	const float x = CL_MUSIC_WIN_X + 6, y = CL_MUSIC_WIN_Y + 5;

	if (!n || s.boot) /* test 89 */
		return;
	TEXT2(x, y, "$", MAGENTA); /* the font's 0x24 is the game's note */
	TEXT2(x + 14, y, n, MAGENTA);
	if (M->composer)
		TEXT2(x, y + 22, M->composer, GREY);
}

/* test 64: STAGES: the six stages of the loop being played in two columns, each its number, a bar (its score's share
 * of the best stage shown) and its score (the one being played yellow, so far); the second loop says so beside the
 * plate's tab. Test 65 (user: "when using a continue, turn that stage's score red"): a stage with a continue in it has
 * its number and score red */
static void draw_stages(void)
{
	const float x0 = CL_STAGES_WIN_X + 4, y0 = CL_STAGES_WIN_Y + 4;
	const int loop = st.idx >= 6;
	uint32_t top = 1;
	char t[16];
	int k;

	for (k = 0; k < 6; k++)
		if (st.played[loop * 6 + k] && st.score[loop * 6 + k] > top)
			top = st.score[loop * 6 + k];
	for (k = 0; k < 6; k++) {
		const int i = loop * 6 + k;
		const float x = x0 + 154.0f * (k / 3), y = y0 + 20.0f * (k % 3);
		const float bx = loop ? 46.0f : 18.0f; /* test 70: the second loop's stages called 2-1 .. 2-6 */
		snprintf(t, sizeof(t), loop ? "2-%d" : "%d", k + 1);
		TEXT2(x, y, t, !st.played[i] ? GREY : st.cont[i] ? RED : loop ? MAGENTA : CYAN);
		if (!st.played[i]) {
			TEXT2(x + 14 * 9, y, "-", GREY);
			continue;
		}
		box(x + bx, y + 1, (140.0f - bx) * (float)st.score[i] / (float)top, 14, (col_t){0.45f, 0.32f, 0.06f, 1});
		snprintf(t, sizeof(t), "%u", (unsigned)st.score[i]);
		TEXT2(x + 14 * 10 - 14.0f * (float)strlen(t), y, t, st.cont[i] ? RED : i == st.idx ? YELLOW : WHITE);
	}
	/* test 70: no 2ND LOOP beside the tab (SCORE BREAKDOWN's reaches the plate's end): the stages' names say it */
}

static void draw_boss(const struct gd_lay *L)
{
	const col_t tc = s.boss_left >= 0 && s.boss_left < 30 * 60 ? RED : WHITE;

	if (!run_or_demo()) /* test 89 */
		return;
	if (s.boss >= 0 && s.boss_max > 0 && (s.boss_tier < 3 || s.boss_on)) { /* tier 3: not fighting yet */
		const int pct = (s.boss_hp * 100 + s.boss_max - 1) / s.boss_max;
		const float bx = CL_BOSS_WIN_X + 4 + 14 * 4 + 6; /* test 64: the bar after the number */
		char t[8];
		snprintf(t, sizeof(t), "%d%%", pct);
		TEXT2(CL_BOSS_WIN_X + 4 + 14 * 4 - 14.0f * (float)strlen(t), CL_BOSS_WIN_Y + 5, t, WHITE);
		if (L->bars)
			box(bx, CL_BOSS_WIN_Y + 5, (CL_BOSS_WIN_X + CL_BOSS_WIN_W - 2 - bx) * (float)s.boss_hp / (float)s.boss_max,
			    CL_BOSS_WIN_H - 10, GOLD);
	}
	/* test 62: the time until it withdraws by timeout (bossclock.c), from the start of its fight as the bar; in game
	 * frames, 60 a second (slowdown stretches it as it does the game); 00:00 = its time is up (it leaves at the end of
	 * the attack it is in, or is leaving); test 64: without "LEFT" after it (user). Test 65 (user: "add three decimals
	 * to the boss timer and move it slightly to the left"): MM:SS.mmm of the frames left / 60 (whole seconds no longer
	 * rounded up), the thousandths in the rank's small digits, 20 pixels left of test 64's place */
	if (s.boss >= 0 && s.boss_left >= 0 && (s.boss_tier < 3 || s.boss_on)) {
		const unsigned ms = (unsigned)((uint64_t)(unsigned)s.boss_left * 1000 / 60);
		const unsigned sec = ms / 1000, frac = ms % 1000;
		const float x = 1115;
		digits(CS_DIGIT_M0, x + 28, 450, sec / 60 % 100, 2, 14, tc);
		TEXT2(x + 28, 458, ":", WHITE);
		digits(CS_DIGIT_M0, x + 28 + 12 + 28, 450, sec % 60, 2, 14, tc);
		TEXT2(x + 28 + 12 + 28 - 2, 458, ".", WHITE); /* 2x: the rank's 1x point was too small to see */
		digits(CS_DIGIT_S0, x + 28 + 12 + 28 + 7 + 36, 452, frac, 3, 12, tc);
	}
}

static int stick_sprite(unsigned dirs)
{
	switch (dirs) { /* 1 up, 2 down, 4 left, 8 right (the artwork's script's states) */
	case 1: return CS_STICK_N;
	case 2: return CS_STICK_S;
	case 4: return CS_STICK_W;
	case 8: return CS_STICK_E;
	case 5: return CS_STICK_NW;
	case 6: return CS_STICK_SW;
	case 9: return CS_STICK_NE;
	case 10: return CS_STICK_SE;
	default: return CS_STICK_C;
	}
}

/* test 61: the controls 5% smaller, from the artwork's P1 places toward its bottom-left corner (13, 699); test 64: then
 * CARD_KS toward the same corner (tx_set), the sprites at that size in the atlas, each at a whole canvas pixel. Test 79
 * (user: "for stick, make it 20% smaller to fit in the new buttons"): ARRANGE's at 0.8 of that (its own sprites,
 * mkcard.py's *_A); test 83 (user: "shrink arrange's stick"): CARD_CTL_ARR (0.57), its button row under FORMATIONS */
#define CTL_K (ARR ? 0.95f * CARD_CTL_ARR : 0.95f)
#define CTL_X(x) (13 + ((x) - 13) * CTL_K)
#define CTL_Y(y) (699 + ((y) - 699) * CTL_K + ctl_dy + 28.0f)
#define CTL_DX2 971.0f /* test 71: co-op's 2P controls this far right (the group's 13-296 to 984-1267) */
static float ctl_dx, ctl_dy;

static void ctl_spr(int id, float x, float y, col_t c)
{
	tx_none();
	spr(id, floorf(13 + ctl_dx + (CTL_X(x) - 13) * CARD_KS + 0.5f), floorf(699 + (CTL_Y(y) - 699) * CARD_KS + 0.5f), 0,
	    0, c);
	tx_set(13, 699, 13 + ctl_dx, 699, CARD_KS, CARD_KS);
}

/* test 61: one side's controls (s.ctl, the side last touched), at the left whichever side it plays. AUTO SHOT's lamp
 * only where RAPID does not show it (Kuro BL; user: rapid fire is ibara's) */
static void draw_controls(int rapid)
{
	const int p = CS;
	const unsigned v = (unsigned)~s.port[p] & 0xFF;
	const float a = coop_now ? 1.0f : s.shown[p] >= GD_INPUT_FADE ? 1.0f : (float)s.shown[p] / GD_INPUT_FADE;
	const int ks = ARR ? CS_STICK_C_A - CS_STICK_C : 0, kb = ARR ? CS_BUTTON_A_A - CS_BUTTON_A : 0;

	if (a <= 0)
		return;
	tx_set(13, 699, 13 + ctl_dx, 699, CARD_KS, CARD_KS);
	ctl_spr(stick_sprite(v & 0x0F) + ks, 13, 533, fade(WHITE, a));
	ctl_spr((v & 0x10 ? CS_BUTTON_A_PRESSED : CS_BUTTON_A) + kb, 217, 572, fade(WHITE, a));
	ctl_spr((v & 0x20 ? CS_BUTTON_B_PRESSED : CS_BUTTON_B) + kb, 142, 599, fade(WHITE, a));
	/* the pad buttons set to shot and bomb over their buttons, AUTO SHOT's lamp */
	TEXT2(CTL_X(217 + 50) - 7.0f * (float)strlen(s.keys[p][0]), CTL_Y(576), s.keys[p][0], fade(YELLOW, a));
	TEXT2(CTL_X(142 + 50) - 7.0f * (float)strlen(s.keys[p][1]), CTL_Y(603), s.keys[p][1], fade(YELLOW, a));
	if (ARR) { /* test 79: SUB WEAPON CHANGE (button 3), FORMATION CHANGE (button 4), AIM LOCK in a row above them */
		static const struct { int id; float x; int key; } more[3] = {
			{CS_BUTTON_SUB_A, 184, GD_KEY_SUB}, {CS_BUTTON_FORM_A, 276, GD_KEY_FORM}, {CS_BUTTON_LOCK_A, 368, GD_KEY_LOCK}};
		const int down[3] = {(v & 0x40) != 0, (v & 0x80) != 0, lock_down(p)};
		for (int k = 0; k < 3; k++) {
			const char *key = s.keys[p][more[k].key];
			ctl_spr(more[k].id + down[k], more[k].x, 468, fade(WHITE, a)); /* its PRESSED sprite next */
			TEXT2(CTL_X(more[k].x + 50) - 7.0f * (float)strlen(key), CTL_Y(472), key, fade(YELLOW, a));
		}
	}
	/* test 83 (user: "remove the 30hz auto text that's almost hidden between the stick and the buttons, it has no place
	 * being there"): not in ARRANGE (CONTROLS' text plate keeps AUTO's rate) */
	if (s.keys[p][2][0] && !rapid && !ARR) {
		char t[40];
		snprintf(t, sizeof(t), "%s AUTO %dHZ", s.keys[p][2], s.af_hz[p]);
		TEXT2(CTL_X(217 + 100) - 14.0f * (float)strlen(t), CTL_Y(548), t, fade(s.pad[p] & s.af_bit ? YELLOW : GREY, a));
	}
}

/* test 67 (user: "a new slimmer option toggle between classic joystick (the current one) and text inputs that light up
 * when pressed down"): the side's inputs as the game reads them this frame, on CONTROLS' slim plate (mkcard.py ctltext):
 * the four directions in the game font's arrows and SHOT, BOMB; then RAPID (button 3), button 4 (ibara's unused B4,
 * Kuro BL's WEAPON) and AUTO (AUTO SHOT's button held); each yellow while down, dim while up. Test 69 (user: "remove
 * rapid shot and button 4 from ibara's controls gadget prompt"; ibara reads neither, test 68's work/g68/btn4): ibara's
 * second row is WEAPON's AUTO / NOW row */
static void draw_ctl_text(void)
{
	static const struct { unsigned char bit, glyph; } dirs[4] = {{4, 0x1D}, {1, 0x1E}, {2, 0x1F}, {8, 0x1C}}; /* < ^ v > */
	const unsigned v = (unsigned)~s.port[CS] & 0xFF;
	const float x = CL_CTLTEXT_WIN_X + 6, y = CL_CTLTEXT_WIN_Y + 6;
	int k;

	for (k = 0; k < 4; k++)
		spr(CS_FONT_00 + dirs[k].glyph, x + 20.0f * k, y, 16, 16, v & dirs[k].bit ? YELLOW : DIM);
	TEXT2(x + 98, y, "SHOT", v & 0x10 ? YELLOW : DIM);
	TEXT2(x + 98 + 14 * 5, y, "BOMB", v & 0x20 ? YELLOW : DIM);
	if (ARR) { /* test 79 (user: "for text, add the formation, option and aim lock weapon buttons"): SUB WEAPON CHANGE
	            * after BOMB; FORMATION CHANGE, AIM LOCK and AUTO SHOT's rate on the second row (no NOW: in ARRANGE
	            * SHOT held fires by itself) */
		TEXT2(x + 98 + 14 * 10, y, "SUB", v & 0x40 ? YELLOW : DIM);
		TEXT2(x, y + 20, "FORM", v & 0x80 ? YELLOW : DIM);
		TEXT2(x + 14 * 5, y + 20, "LOCK", lock_down(CS) ? YELLOW : DIM);
		draw_auto(x + 14 * 10, y + 20);
		return;
	}
	if (M->own_plates) {
		draw_rapid(x, y + 20);
		return;
	}
	TEXT2(x, y + 20, "RAPID", v & 0x40 ? YELLOW : DIM);
	TEXT2(x + 98, y + 20, M->stock ? "WEAPON" : "B4", v & 0x80 ? YELLOW : DIM);
	if (s.keys[CS][2][0])
		TEXT2(x + 98 + 14 * 7, y + 20, "AUTO", s.pad[CS] & s.af_bit ? YELLOW : DIM);
}

/* ---- textures, shaders, drawing ------------------------------------------------------------------------------ */

/* zlib data of exactly n bytes into a new buffer (NULL = bad) */
static unsigned char *inflate_new(const unsigned char *z, unsigned zn, size_t n)
{
	z_stream st;
	unsigned char *raw = malloc(n);
	int r;

	if (!raw)
		return NULL;
	memset(&st, 0, sizeof(st));
	st.next_in = (unsigned char *)z;
	st.avail_in = zn;
	st.next_out = raw;
	st.avail_out = (unsigned)n;
	if (inflateInit(&st) != Z_OK) {
		free(raw);
		return NULL;
	}
	r = inflate(&st, Z_FINISH);
	inflateEnd(&st);
	if (r != Z_STREAM_END || st.avail_out) {
		free(raw);
		return NULL;
	}
	return raw;
}

/* w x h pixels as bytes A R G B into t (0xAARRGGBB words) */
static void put_texels(XsdkTexture *t, const unsigned char *raw, unsigned w, unsigned h)
{
	unsigned x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++) {
			const unsigned char *p = raw + ((size_t)y * w + x) * 4;
			t->texels[(size_t)y * t->pitch + x] = (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
		}
	xsdk_gpu_invalidate(t->address, t->size_bytes);
}

/* zlib data of w x h pixels as bytes A R G B into t */
static int unpack(XsdkTexture *t, const unsigned char *z, unsigned zn, unsigned w, unsigned h)
{
	unsigned char *raw = inflate_new(z, zn, (size_t)w * h * 4);

	if (!raw)
		return -1;
	put_texels(t, raw, w, h);
	free(raw);
	return 0;
}

#if CARD_P43_LAYERS
/* Test 99 (user 2026-10-31: no PS2-disc pixels inside the .xex files): the 4:3 panels in card_art.c are the Insanity
 * DVD booklet's part only (tools/card/mkcard.py, gen/card99); the PS2 gallery's pilot (and ibara's PS2 logo) come
 * from ps2data.bin (tools/ps2extract 4: p43.ib.bond / p43.ib.dyne = the pilot + ibara's logo, for ibara and ARRANGE;
 * p43.blk.bond / p43.blk.dyne = the pilot alone), then Kuro BL's own logo (card_p43top_z) over it. Each layer is
 * premultiplied A R G B, laid over as out = layer + under * (255 - A) / 255 (ps2art.over_p is its Python); the
 * result differs from test 71-98's composite panels by resampling only (work/g99/p43/REPORT.md). */
static void p43_over(unsigned char *raw, const unsigned char *l, int lx, int ly, unsigned lw, unsigned lh)
{
	unsigned x, y;
	int c;

	for (y = 0; y < lh; y++)
		for (x = 0; x < lw; x++) {
			const int px = lx + (int)x, py = ly + (int)y;
			const unsigned char *s = l + ((size_t)y * lw + x) * 4;
			unsigned char *d;
			if (px < 0 || py < 0 || px >= CARD_P43_W || py >= CARD_P43_H || !(s[0] | s[1] | s[2] | s[3]))
				continue;
			d = raw + ((size_t)py * CARD_P43_W + px) * 4;
			for (c = 1; c < 4; c++) {
				const unsigned v = s[c] + (d[c] * (255u - s[0]) + 127) / 255;
				d[c] = (unsigned char)(v > 255 ? 255 : v);
			}
		}
}

/* the panel for pilot (0 Bond, 1 Dyne): the booklet part from z, the PS2 layer from ps2data.bin, Kuro BL's logo */
static int unpack_p43(XsdkTexture *t, const unsigned char *z, unsigned zn, int blk, int pilot)
{
	static int told;
	static const char *const names[2][2] = {{"p43.ib.bond", "p43.ib.dyne"}, {"p43.blk.bond", "p43.blk.dyne"}};
	const char *name = names[blk != 0][pilot & 1];
	unsigned char *raw = inflate_new(z, zn, (size_t)CARD_P43_W * CARD_P43_H * 4), *lay = NULL;
	const struct ps2_entry *e = NULL;
	uint32_t n = 0;

	if (!raw)
		return -1;
	if (ps2data_open() == 0 && (e = ps2data_find(name)) != NULL && e->kind == PS2K_ARGB32)
		lay = ps2data_load(name, &n);
	if (lay && n == (uint32_t)e->w * e->h * 4) {
		p43_over(raw, lay, (int)(e->extra & 0xFFFF), (int)(e->extra >> 16), e->w, e->h);
	} else if (!told) {
		told = 1;
		if (!ps2data_ok())
			log_printf(C_YELLOW, "GADGETS: 4:3 PANELS WITHOUT THE PILOT (%s): THE BOOKLET ART ONLY", ps2data_why());
		else
			log_printf(C_YELLOW, "GADGETS: 4:3 PANELS WITHOUT THE PILOT: PS2DATA.BIN HAS NO %s (MADE BY AN OLDER "
			           "PS2EXTRACT): RE-RUN THE NEW PS2EXTRACT.EXE (4 OR LATER) AND COPY ITS PS2DATA.BIN BESIDE THE XEX",
			           name);
	}
	free(lay);
#if CARD_HAVE_P43TOP && (!defined(IB_GAME) || IB_GAME == 1) /* card_art.c has it in Kuro BL's image only */
	if (blk) {
		unsigned char *top = inflate_new(card_p43top_z, card_p43top_z_size, (size_t)CARD_P43TOP_W * CARD_P43TOP_H * 4);
		if (top)
			p43_over(raw, top, CARD_P43TOP_X, CARD_P43TOP_Y, CARD_P43TOP_W, CARD_P43TOP_H);
		free(top);
	}
#endif
	put_texels(t, raw, CARD_P43_W, CARD_P43_H);
	free(raw);
	return 0;
}
#endif

/* Test 113 (user: "smooth out the now loading animation when a game is starting"): the pictures' unpacking (~470 ms,
 * NOW LOADING stood still through it) runs on GD_THREAD while the ROMs load: gadgets_init_start makes the shaders and
 * textures on the game thread and starts it, gadgets_init_finish waits for it at the game's start. gadgets_init does
 * both at once */
#define GD_THREAD 1 /* core 0's second thread: nothing else runs on it */
static int gd_blk;
static const unsigned char *gd_bgz;
static unsigned gd_bgn;
static const unsigned char *const *gd_p43z;
static const unsigned *gd_p43n;
static volatile int gd_unpacked; /* 0 running, 1 done, -1 failed */
static volatile unsigned gd_unpack_ms;
static int gd_started;

static int gd_unpack_main(void);

/* test 123: the scale that fits a w x h picture into SM_BOSS_W x SM_BOSS_H, at most 1 (sm_fit's rule) */
static float sm_boss_s(unsigned w, unsigned h)
{
	const float a = (float)SM_BOSS_W / w, b = (float)SM_BOSS_H / h, s = a < b ? a : b;

	return s < 1 ? s : 1;
}

static uint32_t sm_u32(const unsigned char *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

static unsigned sm_u16(const unsigned char *p)
{
	return (unsigned)p[0] << 8 | p[1];
}

/* test 123: the gallery's header and the six boss pictures' entries (IBGL: "IBGL", u32 1, u32 5 sheets, u32 pictures; then
 * 24 bytes an entry, big-endian: u32 offset, u32 zlib bytes, u16 w, h, format, colours, whole w, h, x, y; picture n is
 * entry 5 + n, format 1 = zlib of w x h u16 R << 10 | G << 5 | B; tools/launcher/mkgallery.py). 0 = the six are there */
static int sm_gal_read(void)
{
	unsigned char hd[16 + 24 * (SM_GAL_FIRST + SM_NMAPS)];
	unsigned k;

	if (ps2data_open()) {
		snprintf(sm_gal_why, sizeof(sm_gal_why), "%s", ps2data_why());
		return -1;
	}
	if (ps2data_read_part(PS2N_GALLERY, 0, hd, sizeof(hd))) {
		snprintf(sm_gal_why, sizeof(sm_gal_why), "PS2DATA.BIN HAS NO GALLERY");
		return -1;
	}
	if (memcmp(hd, "IBGL", 4) || sm_u32(hd + 4) != 1 || sm_u32(hd + 8) != 5 ||
	    sm_u32(hd + 12) < SM_GAL_FIRST + SM_NMAPS) {
		snprintf(sm_gal_why, sizeof(sm_gal_why), "THE GALLERY IS NOT AN IBGL FILE");
		return -1;
	}
	for (k = 0; k < SM_NMAPS; k++) {
		const unsigned char *e = hd + 16 + 24 * (SM_GAL_FIRST + k);

		sm_gal[k].off = sm_u32(e);
		sm_gal[k].zn = sm_u32(e + 4);
		sm_gal[k].w = sm_u16(e + 8);
		sm_gal[k].h = sm_u16(e + 10);
		if (sm_u16(e + 12) != 1 || !sm_gal[k].zn || !sm_gal[k].w || !sm_gal[k].h || sm_gal[k].w > SM_GAL_MAX ||
		    sm_gal[k].h > SM_GAL_MAX) {
			snprintf(sm_gal_why, sizeof(sm_gal_why), "GALLERY PICTURE %u IS NOT FORMAT 1 OR TOO BIG", k + 1);
			return -1;
		}
	}
	return 0;
}

/* test 123 (tools/card/ps2art.py's key_white and _cut; the reference work/g123/art/mockboss.py): picture k of the gallery
 * cut out onto sm_boss[k]. 1: bgm = min(R, G, B) >= 232; 2: bg = the bgm components (4 neighbours, an explicit queue: no
 * recursion) that touch the picture's edge or have over 1500 pixels; 3: fig = not bg, eroded once (4 neighbours, outside
 * is not fig); 4: alpha = fig blurred (sigma 0.7, a 5-tap kernel) x 255, truncated; 5: the crop = the bounding box of
 * alpha > 8; 6: the crop scaled by sm_boss_s (the picture's own scale) into sm_boss[k]'s top-left, box filtered
 * premultiplied by alpha and un-premultiplied after; the rest of the texture 0. sm_buv, sm_bpw, sm_bph get the crop. Every
 * buffer is malloc'd (the unpack thread's stack is 64 KB) and freed on every path. 0 = done */
static int sm_cut(unsigned k)
{
	static const float kern[5] = {0.00962f, 0.2055f, 0.5698f, 0.2055f, 0.00962f};
	static const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
	const unsigned w = sm_gal[k].w, h = sm_gal[k].h, n = w * h;
	XsdkTexture *t = &sm_boss[k];
	unsigned char *z = NULL, *raw = NULL, *bgm = NULL, *bg = NULL, *fig = NULL, *al = NULL;
	unsigned *q = NULL;
	float *ft = NULL;
	unsigned i, x, y, j, qh, qn, bx0 = 0, bx1 = 0, by0 = 0, by1 = 0, cw, ch, cwt, cht, tw = sm_bw[k], th = sm_bh[k];
	int d, found = 0, r = -1;
	float s;

	z = malloc(sm_gal[k].zn);
	raw = malloc((size_t)n * 2);
	if (!z || !raw || ps2data_read_part(PS2N_GALLERY, sm_gal[k].off, z, sm_gal[k].zn))
		goto done;
	{
		z_stream st;
		int zr;

		memset(&st, 0, sizeof(st));
		st.next_in = z;
		st.avail_in = sm_gal[k].zn;
		st.next_out = raw;
		st.avail_out = n * 2;
		if (inflateInit(&st) != Z_OK)
			goto done;
		zr = inflate(&st, Z_FINISH);
		inflateEnd(&st);
		if (zr != Z_STREAM_END || st.avail_out)
			goto done;
	}
	free(z);
	z = NULL;
	bgm = malloc(n);
	bg = calloc(n, 1);
	fig = calloc(n, 1);
	q = malloc((size_t)n * sizeof(*q));
	if (!bgm || !bg || !fig || !q)
		goto done;
	for (i = 0; i < n; i++) {
		const unsigned p = sm_u16(raw + 2 * (size_t)i);
		const unsigned c1 = ((p >> 10) & 31) << 3, c2 = ((p >> 5) & 31) << 3, c3 = (p & 31) << 3;
		const unsigned mn = c1 < c2 ? (c1 < c3 ? c1 : c3) : (c2 < c3 ? c2 : c3);

		bgm[i] = mn >= 232;
	}
	for (i = 0; i < n; i++) { /* the components (fig = seen here) */
		if (!bgm[i] || fig[i])
			continue;
		fig[i] = 1;
		qh = 0;
		qn = 0;
		q[qn++] = i;
		{
			unsigned border = 0;

			while (qh < qn) {
				const unsigned c = q[qh++], cx = c % w, cy = c / w;

				if (cx == 0 || cy == 0 || cx == w - 1 || cy == h - 1)
					border = 1;
				for (d = 0; d < 4; d++) {
					const int nx = (int)cx + dx[d], ny = (int)cy + dy[d];

					if (nx >= 0 && ny >= 0 && nx < (int)w && ny < (int)h) {
						const unsigned o = (unsigned)ny * w + (unsigned)nx;

						if (bgm[o] && !fig[o]) {
							fig[o] = 1;
							q[qn++] = o;
						}
					}
				}
			}
			if (border || qn > 1500)
				for (j = 0; j < qn; j++)
					bg[q[j]] = 1;
		}
	}
	free(q);
	q = NULL;
	free(fig);
	fig = NULL;
	for (y = 0; y < h; y++) /* 3: fig eroded once into bgm (the cross; outside is not fig) */
		for (x = 0; x < w; x++) {
			const unsigned o = y * w + x;

			bgm[o] = !bg[o] && x > 0 && !bg[o - 1] && x < w - 1 && !bg[o + 1] && y > 0 && !bg[o - w] &&
			         y < h - 1 && !bg[o + w];
		}
	free(bg);
	bg = NULL;
	ft = malloc((size_t)n * sizeof(*ft));
	al = malloc(n);
	if (!ft || !al)
		goto done;
	for (y = 0; y < h; y++) /* 4: the blur, across then down */
		for (x = 0; x < w; x++) {
			float v = 0;

			for (d = -2; d <= 2; d++) {
				const int xx = (int)x + d;

				if (xx >= 0 && xx < (int)w)
					v += kern[d + 2] * bgm[y * w + (unsigned)xx];
			}
			ft[y * w + x] = v;
		}
	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++) {
			float v = 0;
			int av;

			for (d = -2; d <= 2; d++) {
				const int yy = (int)y + d;

				if (yy >= 0 && yy < (int)h)
					v += kern[d + 2] * ft[(unsigned)yy * w + x];
			}
			av = v <= 0 ? 0 : v >= 1 ? 255 : (int)(v * 255);
			al[y * w + x] = (unsigned char)av;
		}
	for (y = 0; y < h; y++) /* 5: the crop */
		for (x = 0; x < w; x++)
			if (al[y * w + x] > 8) {
				if (!found) {
					bx0 = bx1 = x;
					by0 = by1 = y;
					found = 1;
				}
				if (x < bx0)
					bx0 = x;
				if (x > bx1)
					bx1 = x;
				if (y < by0)
					by0 = y;
				if (y > by1)
					by1 = y;
			}
	if (!found) {
		log_printf(C_RED, "STAGE MAP: BOSS %u HAS NO FIGURE IN ITS GALLERY PICTURE", k + 1);
		goto done;
	}
	cw = bx1 - bx0 + 1;
	ch = by1 - by0 + 1;
	s = sm_boss_s(w, h);
	cwt = (unsigned)(cw * s + 0.5f);
	cht = (unsigned)(ch * s + 0.5f);
	cwt = cwt < 1 ? 1 : cwt > tw ? tw : cwt;
	cht = cht < 1 ? 1 : cht > th ? th : cht;
	for (y = 0; y < th; y++) /* 6: the texture, the rest 0 */
		for (x = 0; x < tw; x++)
			t->texels[(size_t)y * t->pitch + x] = 0;
	for (y = 0; y < cht; y++) { /* the crop's texel rows and columns: the source boxes between its edges */
		const unsigned sy0 = by0 + y * ch / cht, sy1 = by0 + (y + 1) * ch / cht > sy0 ? by0 + (y + 1) * ch / cht : sy0 + 1;

		for (x = 0; x < cwt; x++) {
			const unsigned sx0 = bx0 + x * cw / cwt, sx1 = bx0 + (x + 1) * cw / cwt > sx0 ? bx0 + (x + 1) * cw / cwt : sx0 + 1;
			float sa = 0, sr = 0, sg = 0, sb = 0;
			unsigned yy, xx, cnt = 0;

			for (yy = sy0; yy < sy1; yy++)
				for (xx = sx0; xx < sx1; xx++) {
					const unsigned o = yy * w + xx, p = sm_u16(raw + 2 * (size_t)o);
					const float a = al[o];

					sa += a;
					sr += a * (float)(((p >> 10) & 31) << 3);
					sg += a * (float)(((p >> 5) & 31) << 3);
					sb += a * (float)((p & 31) << 3);
					cnt++;
				}
			if (sa > 0)
				t->texels[(size_t)y * t->pitch + x] = (uint32_t)(sa / cnt + 0.5f) << 24 |
				                                      (uint32_t)(sr / sa + 0.5f) << 16 |
				                                      (uint32_t)(sg / sa + 0.5f) << 8 | (uint32_t)(sb / sa + 0.5f);
		}
	}
	xsdk_gpu_invalidate(t->address, t->size_bytes);
	sm_buv[k][0] = 0;
	sm_buv[k][1] = 0;
	sm_buv[k][2] = (float)cwt / tw;
	sm_buv[k][3] = (float)cht / th;
	sm_bpw[k] = (float)cwt;
	sm_bph[k] = (float)cht;
	r = 0;
done:
	free(z);
	free(raw);
	free(bgm);
	free(bg);
	free(fig);
	free(q);
	free(ft);
	free(al);
	if (r)
		log_printf(C_RED, "STAGE MAP: BOSS %u DID NOT CUT OUT OF ITS GALLERY PICTURE", k + 1);
	return r;
}

/* test 121 item 5: ibaraweb.dat beside the .xex files (webdat.c). The table is read once here on the game thread (gd_begin),
 * which makes the textures; their pictures are decoded on the unpack thread (sm_unpack, from gd_unpack). Without the
 * file, or with a picture that does not decode, sm_avail stays 0: the M3 GADGETS row is OFF and nothing else changes */
static void sm_begin(void)
{
	char path[260], nm[40];
	unsigned k, l, i, c = 0;
	const char *why;

	sm_avail = 0;
	if (launch_path(path, sizeof(path), "ibaraweb.dat") || webdat_open(path) || !webdat_ok()) {
		why = webdat_why();
		log_printf(C_YELLOW, "STAGE MAP: OFF (%s)", why && *why ? why : "NO PATH");
		return;
	}
	for (k = 0; k < SM_NMAPS; k++) {
		snprintf(nm, sizeof(nm), "map.%u", k + 1);
		sm_me[k] = webdat_find(nm);
		snprintf(nm, sizeof(nm), "boss.%u", k + 1);
		sm_be[k] = webdat_find(nm);
		for (l = 0; l < 2; l++) {
			snprintf(nm, sizeof(nm), "bname.%u.%s", k + 1, l ? "ja" : "en");
			sm_pe[2 * k + l] = webdat_find(nm);
			snprintf(nm, sizeof(nm), "stitle.%u.%s", k + 1, l ? "ja" : "en");
			sm_pe[12 + 2 * k + l] = webdat_find(nm);
		}
		if (!sm_me[k] || !sm_be[k] || !sm_pe[2 * k] || !sm_pe[2 * k + 1] || !sm_pe[12 + 2 * k] ||
		    !sm_pe[13 + 2 * k] || sm_me[k]->w != 200 || sm_me[k]->h != sm_rows[k]) {
			log_printf(C_YELLOW, "STAGE MAP: OFF (IBARAWEB.DAT HAS NO STAGE %u PICTURES OF THE RIGHT SIZE)", k + 1);
			return;
		}
	}
	for (k = 0; k < SM_NMAPS; k++) { /* the map in chunks of SM_CHUNK rows */
		sm_mapfirst[k] = c;
		sm_mapc[k] = 0;
		for (i = 0; i < sm_rows[k]; i += SM_CHUNK) {
			const unsigned n = sm_rows[k] - i < SM_CHUNK ? sm_rows[k] - i : SM_CHUNK;
			if (c >= SM_CHUNKS || !NT_SUCCESS(xsdk_texture_create(&sm_map[c], XSDK_FORMAT_A8R8G8B8, 200, n, 1, false)))
				goto fail;
			sm_maprow[c++] = n;
			sm_mapc[k]++;
		}
	}
	/* test 123: the gallery's six pictures (none: the site's boss.N, as before, and the log says why once) */
	sm_gal_ok = !sm_gal_read();
	if (!sm_gal_ok)
		log_printf(C_YELLOW, "STAGE MAP: BOSS PICTURES FROM IBARAWEB.DAT (%s)", sm_gal_why);
	for (k = 0; k < SM_NMAPS; k++) { /* sm_boss[k]: the site's size, or the gallery's picture fitted into SM_BOSS_W x _H */
		sm_bw[k] = sm_be[k]->w;
		sm_bh[k] = sm_be[k]->h;
		if (sm_gal_ok) {
			const float s = sm_boss_s(sm_gal[k].w, sm_gal[k].h);

			sm_bw[k] = (unsigned)(sm_gal[k].w * s + 0.5f);
			sm_bh[k] = (unsigned)(sm_gal[k].h * s + 0.5f);
			sm_bw[k] = sm_bw[k] ? sm_bw[k] : 1;
			sm_bh[k] = sm_bh[k] ? sm_bh[k] : 1;
		}
		if (!NT_SUCCESS(xsdk_texture_create(&sm_boss[k], XSDK_FORMAT_A8R8G8B8, sm_bw[k], sm_bh[k], 1, false)))
			goto fail;
	}
	for (i = 0; i < SM_NPLATES; i++)
		if (!NT_SUCCESS(xsdk_texture_create(&sm_plate[i], XSDK_FORMAT_A8R8G8B8, sm_pe[i]->w, sm_pe[i]->h, 1, false)))
			goto fail;
	/* test 122: the background (optional; a file without it keeps the panels black) */
	sm_bg_ok = 0;
	sm_bge = webdat_find("bg.stage");
	if (sm_bge && sm_bge->w == SM_BG_W && sm_bge->h == SM_BG_H &&
	    NT_SUCCESS(xsdk_texture_create(&sm_bg, XSDK_FORMAT_A8R8G8B8, SM_BG_W, SM_BG_H, 1, false)))
		sm_bg_ok = 1;
	/* test 123: bg.boss, the right panel's own background (optional, as bg.stage) */
	sm_bgb_ok = 0;
	sm_bbe = webdat_find("bg.boss");
	if (sm_bbe && sm_bbe->w == SM_BB_W && sm_bbe->h == SM_BB_H &&
	    NT_SUCCESS(xsdk_texture_create(&sm_bgb, XSDK_FORMAT_A8R8G8B8, SM_BB_W, SM_BB_H, 1, false)))
		sm_bgb_ok = 1;
	sm_avail = 1;
	return;
fail:
	log_printf(C_RED, "STAGE MAP: OFF (ITS TEXTURES FAILED)");
}

/* w x h pixels of argb (rows row0 .. from src_w wide) into t's texels (0xAARRGGBB, as put_texels) */
static void sm_put(XsdkTexture *t, const uint32_t *argb, unsigned w, unsigned h, unsigned row0, unsigned src_w)
{
	unsigned x, y;

	for (y = 0; y < h; y++)
		for (x = 0; x < w; x++)
			t->texels[(size_t)y * t->pitch + x] = argb[(size_t)(row0 + y) * src_w + x];
	xsdk_gpu_invalidate(t->address, t->size_bytes);
}

/* test 122: the background on the unpack thread (sm_unpack's last step); one that does not decode only leaves the panels
 * black (sm_bg_ok 0), it does not turn the feature off */
static void sm_unpack_bg(void)
{
	void *b = webdat_read(sm_bge);
	uint32_t *argb = NULL;
	int w = 0, h = 0;

	if (b)
		argb = webdat_jpeg_argb(b, sm_bge->bytes, &w, &h);
	free(b);
	if (!argb || w != SM_BG_W || h != SM_BG_H) {
		sm_bg_ok = 0;
		log_printf(C_YELLOW, "STAGE MAP: NO BACKGROUND (bg.stage DID NOT DECODE)");
	} else {
		sm_put(&sm_bg, argb, SM_BG_W, SM_BG_H, 0, SM_BG_W);
	}
	free(argb);
}

/* test 123: bg.boss (370 x 720) on the unpack thread, after bg.stage; one that does not decode leaves the right panel the
 * stage's background (sm_bgb_ok 0), it does not turn the feature off */
static void sm_unpack_bgb(void)
{
	void *b = webdat_read(sm_bbe);
	uint32_t *argb = NULL;
	int w = 0, h = 0;

	if (b)
		argb = webdat_jpeg_argb(b, sm_bbe->bytes, &w, &h);
	free(b);
	if (!argb || w != SM_BB_W || h != SM_BB_H) {
		sm_bgb_ok = 0;
		log_printf(C_YELLOW, "STAGE MAP: NO BOSS BACKGROUND (bg.boss DID NOT DECODE)");
	} else {
		sm_put(&sm_bgb, argb, SM_BB_W, SM_BB_H, 0, SM_BB_W);
	}
	free(argb);
}

/* the stage map's pictures, on the unpack thread (gd_unpack): a picture that does not decode turns the feature off */
static void sm_unpack(void)
{
	const uint64_t t0 = tb_read();
	uint32_t *argb;
	unsigned k, i, idx, r0;
	int w, h;
	void *b;

	if (!sm_avail)
		return;
	for (k = 0; k < SM_NMAPS; k++) {
		b = webdat_read(sm_me[k]);
		argb = b ? webdat_jpeg_argb(b, sm_me[k]->bytes, &w, &h) : NULL;
		free(b);
		if (!argb || w != 200 || h != (int)sm_rows[k])
			goto bad;
		for (i = 0, r0 = 0; i < sm_mapc[k]; i++) {
			idx = sm_mapfirst[k] + i;
			sm_put(&sm_map[idx], argb, 200, sm_maprow[idx], r0, 200);
			r0 += sm_maprow[idx];
		}
		free(argb);
		argb = NULL;
		if (sm_gal_ok) { /* test 123 (user: "teresa's boss artwork is too small, use the artbook (or ps2)"): the gallery's, cut out */
			if (sm_cut(k))
				goto bad;
		} else {
			b = webdat_read(sm_be[k]);
			argb = b ? webdat_jpeg_argb(b, sm_be[k]->bytes, &w, &h) : NULL;
			free(b);
			if (!argb || w != sm_be[k]->w || h != sm_be[k]->h)
				goto bad;
			sm_put(&sm_boss[k], argb, (unsigned)w, (unsigned)h, 0, (unsigned)w);
			free(argb);
		}
	}
	for (i = 0; i < SM_NPLATES; i++) {
		argb = webdat_zlib_argb(sm_pe[i]);
		if (!argb)
			goto bad;
		sm_put(&sm_plate[i], argb, sm_pe[i]->w, sm_pe[i]->h, 0, sm_pe[i]->w);
		free(argb);
	}
	if (sm_bg_ok) /* test 122 */
		sm_unpack_bg();
	if (sm_bgb_ok) /* test 123 */
		sm_unpack_bgb();
	if (sm_gal_ok) /* test 123: the cut-outs (sm_cut) */
		log_printf(C_GREEN, "STAGE MAP: BOSS PICTURES FROM PS2DATA.BIN'S GALLERY (%u CUT OUT IN %u MS)", SM_NMAPS,
		           (unsigned)(tb_us(t0, tb_read()) / 1000));
	__sync_synchronize(); /* the texels before the flag */
	sm_ready = 1;
	log_printf(C_GREEN, "STAGE MAP: READY (%u MAP TEXTURES, %u PLATES)", (unsigned)sm_mapc[0] + sm_mapc[1] + sm_mapc[2] +
	           sm_mapc[3] + sm_mapc[4] + sm_mapc[5], SM_NPLATES);
	return;
bad:
	free(argb);
	sm_avail = 0;
	log_printf(C_RED, "STAGE MAP: OFF (ITS PICTURES DID NOT DECODE)");
}

/* the gadget's unpacking (before the picture unpacking's final flag): the stage map is optional */
static int gd_unpack(void)
{
	const int r = gd_unpack_main();

	if (!r)
		sm_unpack();
	return r;
}

static int gd_unpack_main(void)
{
	return unpack(&gd_bg, gd_bgz, gd_bgn, CARD_BG_W, CARD_BG_H) ||
	       unpack(&gd_atlas, card_atlas_z, card_atlas_z_size, CARD_ATLAS_W, CARD_ATLAS_H) ||
#if CARD_P43_LAYERS
	       unpack_p43(&gd_p43[0], gd_p43z[0], gd_p43n[0], gd_blk, 0) ||
	       unpack_p43(&gd_p43[1], gd_p43z[1], gd_p43n[1], gd_blk, 1) ||
#else
	       unpack(&gd_p43[0], gd_p43z[0], gd_p43n[0], CARD_P43_W, CARD_P43_H) ||
	       unpack(&gd_p43[1], gd_p43z[1], gd_p43n[1], CARD_P43_W, CARD_P43_H) ||
#endif
	       unpack(&gd_tate, card_tate_z, card_tate_z_size, CARD_TATE_W, CARD_TATE_H) ? -1 : 0;
}

static uint32_t gd_unpack_task(void *u)
{
	const uint64_t t = tb_read();
	const int r = gd_unpack();

	(void)u;
	gd_unpack_ms = tb_us(t, tb_read()) / 1000;
	__sync_synchronize(); /* the texels before the flag */
	gd_unpacked = r ? -1 : 1;
	return 0;
}

static int gd_begin(int blk)
{
	static const XsdkSampler point = {.mag_filter = XSDK_FILTER_POINT, .min_filter = XSDK_FILTER_POINT,
	                                  .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                  .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkSampler linear = {.mag_filter = XSDK_FILTER_LINEAR, .min_filter = XSDK_FILTER_LINEAR,
	                                   .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                   .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkBlend alpha = {.color_source = XSDK_BLEND_SRC_ALPHA, .color_dest = XSDK_BLEND_ONE_MINUS_SRC_ALPHA,
	                                .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ONE,
	                                .alpha_dest = XSDK_BLEND_ONE_MINUS_SRC_ALPHA, .alpha_op = XSDK_BLEND_OP_ADD,
	                                .write_mask = XSDK_WRITE_ALL};
	static const XsdkBlend none = {.color_source = XSDK_BLEND_ONE, .color_dest = XSDK_BLEND_ZERO,
	                               .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ONE,
	                               .alpha_dest = XSDK_BLEND_ZERO, .alpha_op = XSDK_BLEND_OP_ADD,
	                               .write_mask = XSDK_WRITE_ALL};
	/* test 72: in a one-game image (IB_GAME: 0 ibara, 1 Kuro BL; gen/card/card_art.c leaves the other game's
	 * pictures out under the same define) only its own background and panels */
#if !defined(IB_GAME) || IB_GAME == 0
	const unsigned char *bgz = card_bg_z;
	unsigned bgn = card_bg_z_size;
	const unsigned char *const *p43 = card_p43_z; /* test 71: the game's two panels (Bond, Dyne) */
	const unsigned *p43n = card_p43_z_size;
#else
	const unsigned char *bgz = card_bgblk_z;
	unsigned bgn = card_bgblk_z_size;
	const unsigned char *const *p43 = card_p43blk_z;
	const unsigned *p43n = card_p43blk_z_size;
#endif
	NTSTATUS st;

#if !defined(IB_GAME)
#if CARD_HAVE_BLK
	if (blk) {
		bgz = card_bgblk_z;
		bgn = card_bgblk_z_size;
	}
#endif
#if CARD_HAVE_P43BLK
	if (blk) {
		p43 = card_p43blk_z;
		p43n = card_p43blk_z_size;
	}
#endif
#endif
	M = blk ? &map_blk : &map_ib;
	s.boss = -1;
	s.cand = -1;
	st = xsdk_shader_load(&gd_vs, card_vert.container, card_vert.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_load(&gd_ps, card_frag.container, card_frag.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_set_vertex_layout(&gd_vs, gd_layout, sizeof(gd_layout) / sizeof(gd_layout[0]),
		                                   (const uint32_t[]){GD_VF * 4});
	if (NT_SUCCESS(st))
		st = xsdk_texture_create(&gd_bg, XSDK_FORMAT_A8R8G8B8, CARD_BG_W, CARD_BG_H, 1, false);
	if (NT_SUCCESS(st))
		st = xsdk_texture_create(&gd_atlas, XSDK_FORMAT_A8R8G8B8, CARD_ATLAS_W, CARD_ATLAS_H, 1, false);
	if (NT_SUCCESS(st))
		st = xsdk_texture_create(&gd_p43[0], XSDK_FORMAT_A8R8G8B8, CARD_P43_W, CARD_P43_H, 1, false);
	if (NT_SUCCESS(st))
		st = xsdk_texture_create(&gd_p43[1], XSDK_FORMAT_A8R8G8B8, CARD_P43_W, CARD_P43_H, 1, false);
	if (NT_SUCCESS(st))
		st = xsdk_texture_create(&gd_tate, XSDK_FORMAT_A8R8G8B8, CARD_TATE_W, CARD_TATE_H, 1, false);
	if (!NT_SUCCESS(st)) {
		log_printf(C_RED, "GADGETS: SHADERS OR TEXTURES FAILED %08X", (unsigned)st);
		return -1;
	}
	gd_vmem = xsdk_gpu_alloc(GD_SLOTS * GD_MAX_QUADS * 6 * GD_VF * 4);
	if (!gd_vmem) {
		log_printf(C_RED, "GADGETS: NO GPU MEMORY FOR ITS QUADS");
		return -1;
	}
	sm_begin(); /* test 121 item 5 (optional: no file, no stage map) */
	gd_blk = blk;
	gd_bgz = bgz;
	gd_bgn = bgn;
	gd_p43z = p43;
	gd_p43n = p43n;
	xsdk_texture_sampler_state(&gd_point, &point);
	xsdk_texture_sampler_state(&gd_linear, &linear);
	xsdk_gpu_blend_state(&gd_alpha, &alpha);
	xsdk_gpu_blend_state(&gd_none, &none);
	return 0;
}

int gadgets_init(int blk)
{
	if (gd_begin(blk))
		return -1;
	if (gd_unpack()) {
		log_printf(C_RED, "GADGETS: ITS PICTURES DID NOT UNPACK");
		return -1;
	}
	gd_stats.ready = 1;
	return 0;
}

int gadgets_init_start(int blk)
{
	HANDLE h;

	gd_started = 1;
	if (gd_begin(blk)) {
		gd_unpacked = -1;
		return -1;
	}
	gd_unpacked = 0;
	__sync_synchronize();
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 64 * 1024, gd_unpack_task, NULL, GD_THREAD))) {
		gd_unpack_task(NULL); /* no thread: here, as before */
		return 0;
	}
	NtClose(h);
	return 0;
}

int gadgets_init_finish(unsigned *unpack_ms, unsigned *wait_ms)
{
	const uint64_t t = tb_read();

	if (!gd_started)
		return -1;
	while (!gd_unpacked)
		xsdk_thread_sleep(1);
	__sync_synchronize();
	*wait_ms = tb_us(t, tb_read()) / 1000;
	*unpack_ms = gd_unpack_ms;
	if (gd_unpacked < 0) {
		log_printf(C_RED, "GADGETS: ITS PICTURES DID NOT UNPACK");
		return -1;
	}
	gd_stats.ready = 1;
	return 0;
}

static void gd_set(const XsdkTexture *t, int lin)
{
	xsdk_gpu_set_shaders(&gd_vs, &gd_ps);
	xsdk_built_shader_set_literals(&card_vert);
	xsdk_built_shader_set_literals(&card_frag);
	xsdk_gpu_set_texture(CARD_FRAG_SAMPLER_0_0, t, lin ? &gd_linear : &gd_point);
}

/* the quads built so far into block slot and drawn */
static void gd_flush(int slot)
{
	volatile uint32_t *dst = gd_vmem + (size_t)slot * GD_MAX_QUADS * 6 * GD_VF;
	const uint32_t *src = (const uint32_t *)gd_q;
	const unsigned words = gd_nq * 6 * GD_VF;
	unsigned i;
	uint32_t addr;

	if (!gd_nq)
		return;
	for (i = 0; i < words; i++)
		dst[i] = src[i];
	addr = xsdk_gpu_address(dst);
	xsdk_gpu_invalidate(addr, words * 4);
	xsdk_gpu_set_vertices(0, addr, words * 4);
	xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, gd_nq * 6);
}

/* ---- test 97: plates of any number of rows, and the layouts --------------------------------------------------- */

/* sprite id at x, y, w wide and H tall: its top T and bottom B rows as they are, the rows between them repeated (a
 * taller plate) or cut (a shorter one); the plates' windows are plain between their tab and their bottom edge */
static void spr_rows(int id, float x, float y, float w, float H, float T, float B)
{
	const struct card_rect *r = &card_sprites[id];
	const float u0 = (float)r->x / CARD_ATLAS_W, u1 = (float)(r->x + r->w) / CARD_ATLAS_W;
	const float h = r->h, mid = h - T - B;
	float yy = y + T, left = H - T - B;
#define RV(py) (((float)r->y + (py)) / CARD_ATLAS_H)
	if (fabsf(H - h) < 0.5f || left <= 0 || mid <= 0) {
		spr(id, x, y, w, H, WHITE);
		return;
	}
	quad(x, y, x + w, y + T, u0, RV(0), u1, RV(T), WHITE);
	while (left > 0.01f) {
		const float seg = left < mid ? left : mid;
		quad(x, yy, x + w, yy + seg, u0, RV(T), u1, RV(T + seg), WHITE);
		yy += seg;
		left -= seg;
	}
	quad(x, yy, x + w, yy + B, u0, RV(h - B), u1, RV(h), WHITE);
#undef RV
}

/* plate cp drawn with rows rows of 20 design pixels in its window (its sprite has base_rows, its 4:3 one base43): its
 * height in this view's canvas */
static float plate_rows_h(int cp, int base_rows, int base43, int rows)
{
	const struct card_plate *p = &card_plates[cp];
	const int v43 = gd_v == CPV_43 && p->sprite43 >= 0;
	const struct card_rect *r = &card_sprites[v43 ? p->sprite43 : p->sprite];

	return r->h + (float)(rows - (v43 ? base43 : base_rows)) * 20.0f * p->k * (v43 ? CARD_F43Y : 1.0f);
}

/* and drawn with its top right at xr, y, the transform for its values as plate_at's; returns its height */
static float plate_rows_at(int cp, int base_rows, int base43, int rows, float xr, float y)
{
	const struct card_plate *p = &card_plates[cp];
	const int v43 = gd_v == CPV_43 && p->sprite43 >= 0;
	const int id = v43 ? p->sprite43 : p->sprite;
	const struct card_rect *r = &card_sprites[id];
	const float w = v43 ? r->w * 0.75f : r->w, x = xr - w;
	const float H = plate_rows_h(cp, base_rows, base43, rows);

	tx_none();
	spr_rows(id, x, y, w, H, v43 ? 40.0f : 56.0f, v43 ? 20.0f : 28.0f);
	if (v43)
		tx_set(p->ox, p->oy, x, y, p->k * CARD_F43X, p->k * CARD_F43Y);
	else
		tx_set(p->ox, p->oy, x, y, p->k, p->k);
	return H;
}

/* WEAPON's rows: SHOT; ibara's L / R and B (2), Kuro BL's and ARRANGE's option box (3; gd_compact: Kuro BL 1, ARRANGE's
 * SUB and FORM 2); BOMB, BLAST (test 97), HADOU, TRAIL; ibara's RAPID unless CONTROLS' text plate has it */
static int weapon_rows(const struct gd_lay *L)
{
	int n = 1 + 4;

	if (ARR)
		n += gd_compact ? 2 : 3;
	else if (M->options)
		n += 2;
	else if (M->stock)
		n += gd_compact ? 1 : 3;
	if (RAPID_ON_WEAPON && !ctl_text_shown(L))
		n++;
	return n;
}

/* WEAPON from the 6-row 16:9 sprite or the 5-row 4:3 one (test 83's WEAPON6 has no 4:3 sprite: Kuro BL's and ARRANGE's
 * 4:3 WEAPON was its 16:9 plate, over the game picture: the user's 43_kuro_*_weapon_bleed.png); STATUS (test 97: three
 * rows) from its 4-row sprites */
#define STATUS_ROWS 3
static float weapon_h(const struct gd_lay *L)
{
	return gd_v == CPV_43 ? plate_rows_h(CP_WEAPON5, 5, 5, weapon_rows(L)) : plate_rows_h(CP_WEAPON6, 6, 6, weapon_rows(L));
}

static float weapon_at(const struct gd_lay *L, float xr, float y)
{
	return gd_v == CPV_43 ? plate_rows_at(CP_WEAPON5, 5, 5, weapon_rows(L), xr, y)
	                      : plate_rows_at(CP_WEAPON6, 6, 6, weapon_rows(L), xr, y);
}

static float status_h(void)
{
	return plate_rows_h(CP_STATUS, 4, 4, STATUS_ROWS);
}

static float status_at(float xr, float y)
{
	return plate_rows_at(CP_STATUS, 4, 4, STATUS_ROWS, xr, y);
}

/* test 83: ARRANGE's FORMATIONS (5 rows) where ibara has SPECIAL FORMATIONS */
static int form_plate(void)
{
	return ARR ? CP_FORM5 : CP_FORM;
}

/* a plate's height in this view (plate_at's) */
static float plate_h(int cp)
{
	const struct card_plate *p = &card_plates[cp];
	return card_sprites[gd_v == CPV_43 && p->sprite43 >= 0 ? p->sprite43 : p->sprite].h;
}

/* test 97: 16:9's left column (one player's and co-op's 1P; co-op's 2P mirrored): SCORE at its place, STATUS at its
 * place, WEAPON under STATUS, then SPECIAL FORMATIONS / FORMATIONS / XTC under WEAPON, 2 apart; places for every gadget
 * on (one turned off leaves its room to the artwork, as before). xfull: XTC FULL's 292 rows end at the canvas's bottom
 * (no gaps, the column moved up as much as it needs) */
#define WIDE_GAP 2.0f
struct wide_col {
	float dy;                 /* the column's move up (XTC FULL), SCORE's and STATUS's too */
	float status_y, weapon_y, below_y;
};

static void wide_col(const struct gd_lay *L, int xfull, struct wide_col *c)
{
	const float gap = xfull ? 0 : WIDE_GAP;
	float over;

	c->dy = 0;
	c->status_y = card_plates[CP_STATUS].y[CPV_WIDE];
	c->weapon_y = c->status_y + status_h() + gap;
	c->below_y = c->weapon_y + weapon_h(L) + gap;
	over = xfull ? c->below_y + card_sprites[CS_PLATE_XTCFULL].h - 720 : 0;
	if (over > 0) {
		c->dy = -(over > card_plates[CP_SCORE].y[CPV_WIDE] ? card_plates[CP_SCORE].y[CPV_WIDE] : over);
		c->status_y += c->dy;
		c->weapon_y += c->dy;
		c->below_y += c->dy;
	}
}

/* Test 97 (user's backlog: "16:9 co-op: P1/P2 boxes (score, status, weapon, formations, controls) mirror each other in
 * X"): both players' columns at the same heights, 2P's each plate at 1P's place mirrored (x -> 1280 - x); test 71's 2P
 * column stacked under RANK is gone. Under the two WEAPONs (Kuro BL's and ARRANGE's in one row, gd_compact: the stock
 * box does not leave room): ibara: 1P SPECIAL FORMATIONS (one streak for both, user) beside 2P's RANK and BOSS; Kuro BL
 * and ARRANGE: BOSS (1P side) beside RANK (2P side), then Kuro BL's two XTCs when they end above CONTROLS. CONTROLS at
 * their places, 2P's mirrored (stick: CTL_DX2) */
#define COOP_STICK_TOP 560.0f /* the stick CONTROLS' top (their sprites' empty top rows allowed over) */
#define XTC_STICK_GAP 14.0f /* test 120: leave visible space below Kuro BL's small XTC plate */
static void draw_wide_coop(const struct gd_lay *L)
{
	const float sl = card_plates[CP_STATUS].x[CPV_WIDE], sr = sl + card_sprites[CS_PLATE_STATUS].w; /* 5 .. 356 */
	const float cl = card_plates[CP_SCORE].x[CPV_WIDE], cr = cl + card_sprites[CS_PLATE_SCORE].w;   /* 13 .. 345 */
	const float bottom = !ON(GD_CONTROLS) ? 718.0f : gd_ctl_text ? card_plates[CP_CTLTEXT].y[CPV_WIDE] - WIDE_GAP
	                                                                 : COOP_STICK_TOP;
	struct wide_col c;
	float y, ys;
	int p;

#define MXR(xr, xl, p) ((p) ? 1280.0f - (xl) : (xr)) /* a plate's right edge, 1P's or 2P's (mirrored) */
	gd_compact = !M->options || ARR;
	wide_col(L, 0, &c);
	for (p = 0; p < 2; p++) {
		P = &pl[p];
		CS = p;
		if (ON(GD_SCORE)) {
			plate_at(CP_SCORE, MXR(cr, cl, p), card_plates[CP_SCORE].y[CPV_WIDE]);
			draw_score();
		}
		if (ON(GD_STATUS)) {
			status_at(MXR(sr, sl, p), c.status_y);
			draw_status(L);
		}
		if (ON(GD_WEAPON)) {
			weapon_at(L, MXR(sr, sl, p), c.weapon_y);
			draw_weapon(L);
		}
	}
	y = c.below_y;
	P = &pl[0];
	CS = 0;
	if (M->options && !ARR) {
		if (ON(GD_FORMATION)) {
			plate_at(CP_FORM, sr, y);
			draw_formation();
		}
		ys = y;
		if (ON(GD_RANK)) {
			ys += plate_at(CP_RANK, MXR(cr, cl, 1), ys) + WIDE_GAP;
			draw_rank(L);
		}
		if (ON(GD_BOSS) && ys + plate_h(CP_BOSS) <= bottom) {
			plate_at(CP_BOSS, MXR(cr, cl, 1), ys);
			draw_boss(L);
		}
	} else {
		if (ON(GD_BOSS)) {
			plate_at(CP_BOSS, cr, y);
			draw_boss(L);
		}
		if (ON(GD_RANK)) {
			plate_at(CP_RANK, MXR(cr, cl, 1), y);
			draw_rank(L);
		}
		if (ON(GD_BOSS) || ON(GD_RANK))
			y += plate_h(CP_RANK) + WIDE_GAP;
		if (M->xtc && ON(GD_XTC) && y + plate_h(CP_XTC) <= bottom)
			for (p = 0; p < 2; p++) {
				P = &pl[p];
				plate_at(CP_XTC, MXR(sr, sl, p), y);
				draw_xtc();
			}
	}
	gd_compact = 0;
	for (p = 0; p < 2; p++) {
		P = &pl[p];
		CS = p;
		if (ON(GD_CONTROLS) && !gd_ctl_text) {
			ctl_dx = p ? CTL_DX2 : 0;
			ctl_dy = M->xtc && ON(GD_XTC) ? XTC_STICK_GAP : 0;
			draw_controls(RAPID_ON_WEAPON && ON(GD_WEAPON));
			ctl_dx = ctl_dy = 0;
		}
		if (ON(GD_CONTROLS) && gd_ctl_text) {
			plate_at(CP_CTLTEXT, MXR(sr, sl, p), card_plates[CP_CTLTEXT].y[CPV_WIDE]);
			draw_ctl_text();
		}
	}
#undef MXR
}

/* Test 97 (user's backlog: "rearrange the 4:3 1P and co-op GADGETS more elegantly; co-op: P1 and P2 boxes in exactly
 * the same positions (each side's own column); add MORE gadgets in 4:3; covering the artwork is OK"): the panel's two
 * columns (right edges CARD_C43_RA / CARD_C43_RB), each stacked from the top and from the bottom, CARD_C43_GAP apart.
 * One player: A = SCORE, STATUS, WEAPON, SPECIAL FORMATIONS / FORMATIONS / XTC, CONTROLS at the bottom; B = RANK, NEXT
 * DROP, MEDALS | BULLETS, BOSS, then SCORE BREAKDOWN and MUSIC at the bottom. Co-op: A = 1P, B = 2P, the same plates at
 * the same heights (SCORE, STATUS, WEAPON, ARRANGE's FORMATIONS / Kuro BL's XTC, CONTROLS at the bottom), and between
 * them the shared ones in pairs while they fit: RANK | BOSS, ibara's SPECIAL FORMATIONS (both sides' streak) | NEXT
 * DROP, MEDALS + BULLETS | MUSIC, then Kuro BL's and ARRANGE's NEXT DROP */
static float medal_pair_at(float xr, float y) /* MEDALS | BULLETS side by side, BULLETS at the right (16:9's pair) */
{
	float h = 0;

	if (ON(GD_BULLETS)) {
		h = plate_at(CP_BULLETS, xr, y);
		draw_bullets();
	}
	xr -= card_sprites[CS_PLATE43_BULLETS].w * 0.75f + 3 * CARD_F43X;
	if (ON(GD_MEDAL)) {
		const float hm = plate_at(CP_MEDALS, xr, y);
		draw_medal();
		h = hm > h ? hm : h;
	}
	return h;
}

static float medal_pair_h(void)
{
	const float a = ON(GD_BULLETS) ? plate_h(CP_BULLETS) : 0, b = ON(GD_MEDAL) ? plate_h(CP_MEDALS) : 0;
	return a > b ? a : b;
}

/* one player's top of column (SCORE, STATUS, WEAPON, its own plate under them): returns the next y */
static float column43_player(const struct gd_lay *L, float xr, float y, int own)
{
	const float g = CARD_C43_GAP;

	if (ON(GD_SCORE)) {
		y += plate_at(CP_SCORE_S, xr, y) + g;
		draw_score_s();
	}
	if (ON(GD_STATUS)) {
		y += status_at(xr, y) + g;
		draw_status(L);
	}
	if (ON(GD_WEAPON)) {
		y += weapon_at(L, xr, y) + g;
		draw_weapon(L);
	}
	if (own && M->own_plates && ON(GD_FORMATION)) {
		y += plate_at(form_plate(), xr, y) + g;
		draw_formation();
	}
	if (M->xtc && ON(GD_XTC)) { /* test 76: Kuro BL's, each player's */
		y += plate_at(CP_XTC, xr, y) + g;
		draw_xtc();
	}
	return y;
}

/* Test 102 (user: "since all the gadgets now fit in the 4:3 screen, you can spread them out a little bit, it's ok if the
 * artwork below gets covered, just so no parts of the screen feel empty"; "add large XTC gadget option to the 4:3
 * gadgets mode (black label, single player only)"): one player's columns as lists, laid from y0 to y1 with the room
 * left shared evenly between the plates (CARD_C43_GAP at least); STAGES left out first, as before, when they do not fit */
enum { K43_SCORE, K43_STATUS, K43_WEAPON, K43_FORM, K43_XTC, K43_CTL, K43_RANK, K43_DROP, K43_MEDALS, K43_BOSS,
       K43_STAGES, K43_MUSIC };

static float k43_h(const struct gd_lay *L, int k)
{
	switch (k) {
	case K43_SCORE: return plate_h(CP_SCORE_S);
	case K43_STATUS: return status_h();
	case K43_WEAPON: return weapon_h(L);
	case K43_FORM: return plate_h(form_plate());
	case K43_XTC: return plate_h(CP_XTC);
	case K43_CTL: return plate_h(CP_CTLTEXT);
	case K43_RANK: return plate_h(CP_RANK);
	case K43_DROP: return plate_h(CP_DROP);
	case K43_MEDALS: return medal_pair_h();
	case K43_BOSS: return plate_h(CP_BOSS);
	case K43_STAGES: return plate_h(CP_STAGES);
	default: return plate_h(CP_MUSIC);
	}
}

static void k43_at(const struct gd_lay *L, int k, float xr, float y)
{
	switch (k) {
	case K43_SCORE: plate_at(CP_SCORE_S, xr, y); draw_score_s(); break;
	case K43_STATUS: status_at(xr, y); draw_status(L); break;
	case K43_WEAPON: weapon_at(L, xr, y); draw_weapon(L); break;
	case K43_FORM: plate_at(form_plate(), xr, y); draw_formation(); break;
	case K43_XTC: plate_at(CP_XTC, xr, y); draw_xtc(); break;
	case K43_CTL: plate_at(CP_CTLTEXT, xr, y); draw_ctl_text(); break;
	case K43_RANK: plate_at(CP_RANK, xr, y); draw_rank(L); break;
	case K43_DROP: plate_at(CP_DROP, xr, y); draw_drop(); break;
	case K43_MEDALS: medal_pair_at(xr, y); break;
	case K43_BOSS: plate_at(CP_BOSS, xr, y); draw_boss(L); break;
	case K43_STAGES: plate_at(CP_STAGES, xr, y); draw_stages(); break;
	default: plate_at(CP_MUSIC, xr, y); draw_music(); break;
	}
}

static void column43(const struct gd_lay *L, int *k, int n, float xr, float y0, float y1)
{
	float h[8], sum = 0, gap, y = y0;
	int i;

	for (i = 0; i < n; i++)
		sum += h[i] = k43_h(L, k[i]);
	if (sum + CARD_C43_GAP * (n - 1) > y1 - y0 + 0.5f) /* STAGES out (test 97's rule) */
		for (i = 0; i < n; i++)
			if (k[i] == K43_STAGES) {
				sum -= h[i];
				for (n--; i < n; i++) {
					k[i] = k[i + 1];
					h[i] = h[i + 1];
				}
				break;
			}
	gap = n > 1 ? (y1 - y0 - sum) / (n - 1) : 0;
	if (gap < CARD_C43_GAP)
		gap = CARD_C43_GAP;
	for (i = 0; i < n; i++) {
		k43_at(L, k[i], xr, y);
		y += h[i] + gap;
	}
}

static float ctl43_top(void)
{
	return ON(GD_CONTROLS) ? 720.0f - CARD_C43_TOP - plate_h(CP_CTLTEXT) : 720.0f - CARD_C43_TOP + CARD_C43_GAP;
}

static void draw_43(const struct gd_lay *L)
{
	const float g = CARD_C43_GAP, ra = CARD_C43_RA, rb = CARD_C43_RB;
	float y, lim;
	int p;

	if (coop_now) {
		for (p = 0; p < 2; p++) {
			P = &pl[p];
			CS = p;
			/* ARRANGE's FORMATIONS are each side's own (ARRANGE_FORM per side); ibara's streak is both sides' (below) */
			y = column43_player(L, p ? rb : ra, CARD_C43_TOP, ARR);
			if (ON(GD_CONTROLS)) {
				plate_at(CP_CTLTEXT, p ? rb : ra, ctl43_top());
				draw_ctl_text();
			}
		}
		P = &pl[0];
		CS = 0;
		lim = ctl43_top() - g;
		if (ON(GD_RANK) || ON(GD_BOSS)) {
			if (ON(GD_RANK)) {
				plate_at(CP_RANK, ra, y);
				draw_rank(L);
			}
			if (ON(GD_BOSS)) {
				plate_at(CP_BOSS, rb, y);
				draw_boss(L);
			}
			y += plate_h(CP_RANK) + g;
		}
		if (M->own_plates && !ARR && (ON(GD_FORMATION) || ON(GD_DROP))) {
			const float h = ON(GD_FORMATION) ? plate_h(CP_FORM) : plate_h(CP_DROP);
			if (y + h <= lim) {
				if (ON(GD_FORMATION)) {
					plate_at(CP_FORM, ra, y);
					draw_formation();
				}
				if (ON(GD_DROP)) {
					plate_at(CP_DROP, rb, y);
					draw_drop();
				}
				y += h + g;
			}
		}
		if ((ON(GD_MEDAL) || ON(GD_BULLETS) || ON(GD_MUSIC))) {
			const float hm = medal_pair_h(), hu = ON(GD_MUSIC) ? plate_h(CP_MUSIC) : 0, h = hm > hu ? hm : hu;
			if (y + h <= lim) {
				medal_pair_at(ra, y);
				if (ON(GD_MUSIC)) {
					plate_at(CP_MUSIC, rb, y);
					draw_music();
				}
				y += h + g;
			}
		}
		if ((!M->own_plates || ARR) && ON(GD_DROP) && y + plate_h(CP_DROP) <= lim) {
			plate_at(CP_DROP, ra, y);
			draw_drop();
		}
		return;
	}
	/* one player (test 102: each column spread from top to bottom; Kuro BL's XTC FULL across both at the bottom) */
	{
		const int xfull = M->xtc && ON(GD_XTC) && gd_xtc_full;
		int ka[8], kb[8], na = 0, nb = 0;
		float bottom = 720.0f - CARD_C43_TOP;
		if (xfull) { /* the 16:9 plate at its own size, centred on the two columns */
			const float w = card_sprites[CS_PLATE_XTCFULL].w, h = card_sprites[CS_PLATE_XTCFULL].h;
			const float left = ra - card_sprites[CS_PLATE43_STATUS].w * 0.75f;
			bottom -= h;
			plate_at(CP_XTCFULL, (left + rb) / 2 + w / 2, bottom);
			draw_xtc_full();
			bottom -= g;
		}
		if (ON(GD_SCORE))
			ka[na++] = K43_SCORE;
		if (ON(GD_STATUS))
			ka[na++] = K43_STATUS;
		if (ON(GD_WEAPON))
			ka[na++] = K43_WEAPON;
		if (M->own_plates && ON(GD_FORMATION))
			ka[na++] = K43_FORM;
		if (M->xtc && ON(GD_XTC) && !xfull)
			ka[na++] = K43_XTC;
		if (ON(GD_CONTROLS))
			ka[na++] = K43_CTL;
		if (ON(GD_RANK))
			kb[nb++] = K43_RANK;
		if (ON(GD_DROP))
			kb[nb++] = K43_DROP;
		if (ON(GD_MEDAL) || ON(GD_BULLETS))
			kb[nb++] = K43_MEDALS;
		if (ON(GD_BOSS))
			kb[nb++] = K43_BOSS;
		if (ON(GD_STAGES))
			kb[nb++] = K43_STAGES;
		if (ON(GD_MUSIC))
			kb[nb++] = K43_MUSIC;
		column43(L, ka, na, ra, CARD_C43_TOP, bottom);
		column43(L, kb, nb, rb, CARD_C43_TOP, bottom);
	}
}

/* test 121 item 5: one quad of the stage map on texture t, recorded as a draw run (gadgets_draw draws each run with its own
 * texture after the atlas quads) */
static void sm_add(const XsdkTexture *t, int lin, float x0, float y0, float x1, float y1, float u0, float v0, float u1,
                   float v1, col_t c)
{
	const unsigned before = gd_nq;
	const unsigned k = sm_nrun;

	quad(x0, y0, x1, y1, u0, v0, u1, v1, c);
	if (gd_nq == before)
		return;
	if (k && sm_run[k - 1].t == t && sm_run[k - 1].lin == lin && sm_run[k - 1].first + sm_run[k - 1].n == before) {
		sm_run[k - 1].n++;
		return;
	}
	if (k < SM_RUNS) {
		sm_run[k].t = t;
		sm_run[k].lin = lin;
		sm_run[k].first = before;
		sm_run[k].n = 1;
		sm_nrun++;
	}
}

/* the scale that fits w x h into maxw x maxh, at most 1 */
static float sm_fit(float w, float h, float maxw, float maxh)
{
	const float a = maxw / w, b = maxh / h, s = a < b ? a : b;

	return s < 1 ? s : 1;
}

/* a picture (texture t, w x h) centred at (cx, cy), fitted into maxw x maxh and at alpha a; returns the height drawn */
static float sm_pic(const XsdkTexture *t, float w, float h, float cx, float cy, float maxw, float maxh, float a)
{
	const float s = sm_fit(w, h, maxw, maxh), hw = w * s / 2, hh = h * s / 2;
	col_t c = {1, 1, 1, a};

	sm_add(t, 1, cx - hw, cy - hh, cx + hw, cy + hh, 0, 0, 1, 1, c);
	return h * s;
}

/* test 123: sm_pic for a part of texture t: the rectangle uv (u0, v0, u1, v1) of it, w x h texture pixels, fitted into
 * maxw x maxh (up as well as down: the reference's fit, work/g123/art/mockboss.py), centred at (cx, cy), alpha a */
static float sm_pic_uv(const XsdkTexture *t, const float *uv, float w, float h, float cx, float cy, float maxw, float maxh,
                       float a)
{
	const float p = maxw / w, q = maxh / h, s = p < q ? p : q, hw = w * s / 2, hh = h * s / 2;
	col_t c = {1, 1, 1, a};

	sm_add(t, 1, cx - hw, cy - hh, cx + hw, cy + hh, uv[0], uv[1], uv[2], uv[3], c);
	return h * s;
}

/* test 121 item 5: the 16:9 side panels with STAGE MAP on (gadgets_draw's layer 1; every other gadget off). The left
 * panel: black, the map (its chunks), the red box = the view; the right panel: the title plate, or the boss and its
 * name fading in over SM_FADE frames. The map's rows follow the scroll (see stagemap_frame) and the map is moved so
 * the box's centre sits at 60% of the panel's height (432 of 720), as far as the map's ends allow */
/* test 122: a quad of the white (or any) texel at x0..x1, y0..y1 clipped to the canvas, colour c (sm_draw's border) */
static void sm_rect(float x0, float y0, float x1, float y1, col_t c, float wu, float wv)
{
	if (x0 < 0.0f)
		x0 = 0.0f;
	if (x1 > 1280.0f)
		x1 = 1280.0f;
	if (y0 < 0.0f)
		y0 = 0.0f;
	if (y1 > 720.0f)
		y1 = 720.0f;
	if (x1 > x0 && y1 > y0)
		sm_add(&gd_atlas, 1, x0, y0, x1, y1, wu, wv, wu, wv, c);
}

/* test 122: the border's three bands from the edge e going dir (-1 or +1) outward: 1 px black next to the map, 3 px
 * light gold (200, 180, 130), 2 px black outside. vert: e is an x edge and s0 .. s1 a y span; else e is a y edge and
 * s0 .. s1 an x span */
static void sm_bands(float e, float dir, float s0, float s1, int vert, float wu, float wv)
{
	static const col_t black = {0, 0, 0, 1}, gold = {0.784f, 0.706f, 0.510f, 1};
	const float p[4] = {e, e + dir, e + 4 * dir, e + 6 * dir};
	const col_t cols[3] = {black, gold, black};
	int i;

	for (i = 0; i < 3; i++) {
		const float a = p[i] < p[i + 1] ? p[i] : p[i + 1], b = p[i] < p[i + 1] ? p[i + 1] : p[i];
		if (vert)
			sm_rect(a, s0, b, s1, cols[i], wu, wv);
		else
			sm_rect(s0, a, s1, b, cols[i], wu, wv);
	}
}

static void sm_draw(void)
{
	static const col_t black = {0, 0, 0, 1}, red = {1, 0, 0, 1};
	static const col_t dark = {SM_BG_K, SM_BG_K, SM_BG_K, 1};
	const struct card_rect *wr = &card_sprites[CS_WHITE];
	const float wu = (wr->x + 2.0f) / CARD_ATLAS_W, wv = (wr->y + 2.0f) / CARD_ATLAS_H;
	const int g = M == &map_blk, ja = sm_ja != 0;
	const float a = (float)sm_fade / SM_FADE;
	const float x1 = SM_MAP_X + 200 * SM_MAP_K;
	float H, sk, c, top, by, bh, y0, y1, plh, area;
	unsigned i, idx;
	int k, bi;

	sm_nrun = 0;
	if (sm_bg_ok) { /* test 122 (user: "add a background ... to fill in the gaps"; both panels, the right one too) */
		sm_add(&sm_bg, 1, 0, 0, SM_LEFT_W, 720, 0, 0, SM_BG_U, 1, dark);
	} else {
		sm_add(&gd_atlas, 1, 0, 0, SM_LEFT_W, 720, wu, wv, wu, wv, black);
	}
	if (sm_bgb_ok) { /* test 123 (user: the right panel's own background, bg.boss; the same 65%) */
		sm_add(&sm_bgb, 1, SM_RIGHT_X, 0, 1280, 720, 0, 0, 1, 1, dark);
	} else if (sm_bg_ok) {
		sm_add(&sm_bg, 1, SM_RIGHT_X, 0, 1280, 720, 1 - SM_BG_U, 0, 1, 1, dark);
	} else {
		sm_add(&gd_atlas, 1, SM_RIGHT_X, 0, 1280, 720, wu, wv, wu, wv, black);
	}
	if (sm_n < 1 || sm_n > SM_NMAPS)
		return;
	k = sm_n - 1;
	H = (float)sm_rows[k];
	sk = H / (sm_stop[g][k] + 320.0f); /* map rows a game pixel */
	c = H - sk * (sm_scroll + 160.0f); /* the box's centre, map rows */
	if (c < 345.6f) /* the map's top at or above the canvas's top */
		c = 345.6f;
	if (c > H - 230.4f) /* its bottom at or below the canvas's bottom */
		c = H - 230.4f;
	top = 432.0f - SM_MAP_K * c; /* the canvas row of the map's row 0 */
	for (i = 0; i < sm_mapc[k]; i++) {
		idx = sm_mapfirst[k] + i;
		y0 = top + SM_MAP_K * (float)(i * SM_CHUNK);
		y1 = y0 + SM_MAP_K * (float)sm_maprow[idx];
		if (y1 >= 0 && y0 <= 720)
			sm_add(&sm_map[idx], 1, SM_MAP_X, y0, x1, y1, 0, 0, 1, 1, WHITE);
	}
	/* test 122 (user: "a border around the stage map itself to separate it from the background"): along the map's sides
	 * over its visible part, and across its top / bottom edge where that end is on screen; outside the map */
	{
		const float mb = top + SM_MAP_K * H, yt = top < 0.0f ? 0.0f : top, yb = mb > 720.0f ? 720.0f : mb;

		sm_bands(SM_MAP_X, -1.0f, yt, yb, 1, wu, wv);
		sm_bands(x1, 1.0f, yt, yb, 1, wu, wv);
		if (top > 0.0f)
			sm_bands(top, -1.0f, SM_MAP_X - 6.0f, x1 + 6.0f, 0, wu, wv);
		if (mb < 720.0f)
			sm_bands(mb, 1.0f, SM_MAP_X - 6.0f, x1 + 6.0f, 0, wu, wv);
	}
	by = top + SM_MAP_K * (H - sk * (sm_scroll + 320.0f)); /* the view: its top .. bottom */
	bh = SM_MAP_K * 320.0f * sk;
	sm_add(&gd_atlas, 1, SM_MAP_X, by, x1, by + 2, wu, wv, wu, wv, red);
	sm_add(&gd_atlas, 1, SM_MAP_X, by + bh - 2, x1, by + bh, wu, wv, wu, wv, red);
	sm_add(&gd_atlas, 1, SM_MAP_X, by + 2, SM_MAP_X + 2, by + bh - 2, wu, wv, wu, wv, red);
	sm_add(&gd_atlas, 1, x1 - 2, by + 2, x1, by + bh - 2, wu, wv, wu, wv, red);
	/* the right panel: the title plate (the boss not up), the boss and its name (up) */
	bi = 2 * k + ja;
	if (sm_fade < SM_FADE)
		sm_pic(&sm_plate[12 + bi], sm_pe[12 + bi]->w, sm_pe[12 + bi]->h, 1095.0f, 360.0f, 350.0f, 560.0f, 1 - a);
	if (sm_fade > 0) {
		plh = sm_pe[bi]->h * sm_fit(sm_pe[bi]->w, sm_pe[bi]->h, 350.0f, 200.0f);
		area = 720.0f - 60.0f - plh;
		if (sm_gal_ok) /* test 123: the cut-out's own size and rectangle (sm_cut) */
			sm_pic_uv(&sm_boss[k], sm_buv[k], sm_bpw[k], sm_bph[k], 1095.0f, 20.0f + area / 2, 350.0f, area, a);
		else
			sm_pic(&sm_boss[k], sm_be[k]->w, sm_be[k]->h, 1095.0f, 20.0f + area / 2, 350.0f, area, a);
		sm_pic(&sm_plate[bi], sm_pe[bi]->w, sm_pe[bi]->h, 1095.0f, 700.0f - plh / 2, 350.0f, 200.0f, a);
	}
}

static int gd_slot = -1; /* the block this frame's background took (-1: none, nothing drawn) */

void gadgets_draw(int layer, int view, uint32_t queued, uint32_t flips)
{
	const int slot = (int)(queued % GD_SLOTS);
	const int scaled = gd_fbw != 1280 || gd_fbh != 720; /* the 16:9 and tate canvases at 1:1 on a 720p front buffer */

	if (!gd_stats.ready || view == GV_NONE)
		return;
	gd_view = view;
	gd_v = view == GV_43 ? CPV_43 : view == GV_WIDE ? CPV_WIDE : CPV_TATE;
	tx_none();
	if (layer == 0) {
		/* the background, the block's first quads; the block is this frame's from here on */
		const XsdkTexture *t = &gd_bg;
		int lin = scaled;
		gd_slot = -1;
		if ((int32_t)(flips - gd_used[slot]) < 0) {
			gd_stats.busy_skips++;
			return;
		}
		gd_slot = slot;
		gd_used[slot] = queued + 1;
		gd_nq = 0;
		switch (view) {
		case GV_43: /* the panel at the canvas's right (test 71: the run's pilot's, CARD_P43_CW canvas columns) */
			quad(CARD_P43_X, 0, CARD_P43_X + CARD_P43_CW, CARD_P43_H, 0, 0, 1, 1, WHITE);
			t = &gd_p43[s.pilot & 1];
			lin = 1;
			break;
		case GV_TATE_L:
		case GV_TATE_R: /* the top band over the game, the bottom one under it */
			quad(0, 0, CARD_TATE_W, CARD_TATE_BAND, 0, 0, 1, 0.5f, WHITE);
			quad(0, 1280 - CARD_TATE_BAND, CARD_TATE_W, 1280, 0, 0.5f, 1, 1, WHITE);
			t = &gd_tate;
			break;
		default: /* test 65: one background (test 64 moved ibara's logo while FORMATION was on) */
			quad(0, 0, CARD_BG_W, CARD_BG_H, 0, 0, 1, 1, WHITE);
			break;
		}
		xsdk_gpu_set_blend(&gd_none);
		gd_set(t, lin);
		gd_flush(slot);
		return;
	}
	{
		const uint64_t t0 = tb_read();
		const unsigned first = gd_nq; /* after the background's quads */
		const int sm = gd_v == CPV_WIDE && sm_want && sm_avail && sm_ready; /* test 121 item 5 */
		unsigned nmain, np, pbase, ri;
		const struct gd_lay *L = view == GV_43 ? &lay_43 : view == GV_WIDE ? &lay_wide : &lay_tate;
		volatile uint32_t *dst;
		const uint32_t *src;
		unsigned i, words;
		uint32_t addr;

		if (gd_slot != slot || !s.valid)
			return;
		/* test 71: co-op while both sides have played in this run (16:9 and 4:3; tate keeps one player's bands) */
		coop_now = gd_coop && pl[0].in && pl[1].in && gd_v != CPV_TATE;
		P = &pl[s.side];
		CS = s.ctl;
		ctl_dx = 0;
		/* test 64: each gadget's plate, then its values (tx_*: through the plate's place); a plate a view does not have
		 * draws nothing (plate() 0) */
		if (sm) { /* test 121 item 5: 16:9 with STAGE MAP on: its side panels only */
			sm_draw();
		} else if (gd_v == CPV_43) {
			draw_43(L);
		} else if (coop_now) {
			draw_wide_coop(L);
		} else if (gd_v == CPV_TATE) { /* test 65: the short plates, 2 x 2 per band */
			if (ON(GD_SCORE) && plate(CP_SCORE_S))
				draw_score_s();
			if (ON(GD_RANK) && plate(CP_RANK))
				draw_rank(L);
			if (ON(GD_STATUS) && plate(CP_STATUS_W)) /* test 89: across the second row, no SCORE BREAKDOWN */
				draw_status_w();
			if (ON(GD_BOSS) && plate(CP_BOSS))
				draw_boss(L);
			if (ON(GD_BULLETS) && plate(CP_BULLETS_S)) /* test 67 */
				draw_bullets_s();
			if (ON(GD_DROP) && plate(CP_DROP_S))
				draw_drop_s();
			if (ON(GD_MEDAL) && plate(CP_MEDAL_S))
				draw_medal_s();
		} else {
			if (ON(GD_RANK) && plate(CP_RANK))
				draw_rank(L);
			if (ON(GD_DROP) && plate(CP_DROP))
				draw_drop();
			if (ON(GD_MEDAL) && plate(CP_MEDALS)) /* test 67: MEDALS | BULLETS side by side */
				draw_medal();
			if (ON(GD_BULLETS) && plate(CP_BULLETS)) /* test 67 */
				draw_bullets();
			/* test 97: SCORE, STATUS (three rows) and WEAPON (its rows) down the left column, then SPECIAL FORMATIONS /
			 * FORMATIONS / XTC under WEAPON (wide_col: XTC FULL moves the column up to end at the bottom) */
			const int xfull = M->xtc && ON(GD_XTC) && gd_xtc_full;
			const float sr = card_plates[CP_STATUS].x[CPV_WIDE] + card_sprites[CS_PLATE_STATUS].w;
			struct wide_col c;
			wide_col(L, xfull, &c);
			plate_dy = c.dy;
			if (ON(GD_SCORE) && plate(CP_SCORE))
				draw_score();
			plate_dy = 0;
			if (ON(GD_STATUS)) {
				status_at(sr, c.status_y);
				draw_status(L);
			}
			if (ON(GD_WEAPON)) {
				weapon_at(L, sr, c.weapon_y);
				draw_weapon(L);
			}
			if (ON(GD_BOSS) && plate(CP_BOSS))
				draw_boss(L);
			if (ON(GD_STAGES) && plate(CP_STAGES))
				draw_stages();
			if (ON(GD_MUSIC) && plate(CP_MUSIC))
				draw_music();
			plate_dy = c.below_y - card_plates[CP_FORM].y[CPV_WIDE];
			if (M->own_plates && ON(GD_FORMATION) && plate(form_plate()))
				draw_formation();
			/* test 88: XTC FULL to the column's bottom: no stick CONTROLS, its text plate under MUSIC (user: "when doing
			 * this, the stick controls gadget is automatically disabled. if the XTC gadget does not fit with text
			 * controls gadget, move the text controls gadget to the bottom right, below music gadget") */
			if (xfull && plate(CP_XTCFULL))
				draw_xtc_full();
			else if (M->xtc && ON(GD_XTC) && plate(CP_XTC)) /* test 76: Kuro BL's, in SPECIAL FORMATIONS' place */
				draw_xtc();
			plate_dy = 0;
			if (L->wide && ON(GD_CONTROLS) && !gd_ctl_text && !xfull) {
				ctl_dy = M->xtc && ON(GD_XTC) ? XTC_STICK_GAP : 0;
				draw_controls(RAPID_ON_WEAPON && ON(GD_WEAPON));
				ctl_dy = 0;
			}
			if (xfull) {
				plate_dx = CTL_UNDER_MUSIC_X - card_plates[CP_CTLTEXT].x[CPV_WIDE];
				plate_dy = CTL_UNDER_MUSIC_Y - card_plates[CP_CTLTEXT].y[CPV_WIDE];
			}
			if (L->wide && ON(GD_CONTROLS) && gd_ctl_text && plate(CP_CTLTEXT)) /* test 67 */
				draw_ctl_text();
			plate_dx = plate_dy = 0;
		}
		tx_none();
		P = &pl[s.side];
		ctl_dx = 0;
		/* test 88: the point-sampled quads after the others */
		nmain = sm ? 0 : gd_nq - first; /* test 121 item 5: the stage map's quads have their runs */
		pbase = gd_nq - first;
		np = gd_npq < GD_MAX_QUADS - gd_nq ? gd_npq : GD_MAX_QUADS - gd_nq;
		memcpy(gd_q[gd_nq], gd_qp, np * sizeof(gd_qp[0]));
		gd_nq += np;
		gd_npq = 0;
		if (gd_nq == first)
			return;
		dst = gd_vmem + ((size_t)slot * GD_MAX_QUADS + first) * 6 * GD_VF;
		src = (const uint32_t *)gd_q[first];
		words = (gd_nq - first) * 6 * GD_VF;
		for (i = 0; i < words; i++)
			dst[i] = src[i];
		addr = xsdk_gpu_address(dst);
		xsdk_gpu_invalidate(addr, words * 4);
		xsdk_gpu_set_blend(&gd_alpha);
		gd_set(&gd_atlas, 1); /* test 64: linear (the values drawn at CARD_KS; the plates at whole pixels, 1:1) */
		xsdk_gpu_set_vertices(0, addr, nmain * 6 * GD_VF * 4);
		if (nmain)
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, nmain * 6);
		for (ri = 0; sm && ri < sm_nrun; ri++) { /* test 121 item 5 */
			gd_set(sm_run[ri].t, sm_run[ri].lin);
			xsdk_gpu_set_vertices(0, addr + (sm_run[ri].first - first) * 6 * GD_VF * 4, sm_run[ri].n * 6 * GD_VF * 4);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, sm_run[ri].n * 6);
		}
		if (np) { /* test 88 */
			gd_set(&gd_atlas, 0);
			xsdk_gpu_set_vertices(0, addr + pbase * 6 * GD_VF * 4, np * 6 * GD_VF * 4);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, np * 6);
		}
		xsdk_gpu_set_blend(&gd_none);
		if (gd_nq > gd_stats.quads_max)
			gd_stats.quads_max = gd_nq;
		gd_stats.frames++;
		{
			const uint64_t dt = tb_read() - t0;
			if (dt > gd_stats.build_ticks_max)
				gd_stats.build_ticks_max = dt;
		}
	}
}

/* the front buffer's size (1280x720, or the kernel's 640x480 on an interlaced output) */
void gadgets_target(int w, int h)
{
	gd_fbw = w;
	gd_fbh = h;
}

/* test 121 item 5 (main.c, every frame): the STAGE MAP setting and the menu language (1 = JAPANESE) */
void gadgets_stagemap_set(int on, int japanese)
{
	sm_want = on != 0;
	sm_ja = japanese != 0;
}

/* 1 = ibaraweb.dat's pictures are there (the M3 GADGETS row can be ON); else the reason is gadgets_stagemap_why */
int gadgets_stagemap_avail(void)
{
	return sm_avail;
}

const char *gadgets_stagemap_why(void)
{
	return webdat_why();
}

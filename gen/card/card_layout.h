/* tools/card/mkcard.py: the GADGETS atlas sprites, plates and places (720p pixels) */
#ifndef CARD_LAYOUT_H
#define CARD_LAYOUT_H

#define CARD_BG_W 1280
#define CARD_BG_H 720
#define CARD_ATLAS_W 1024
#define CARD_ATLAS_H 2048

enum card_sprite {
	CS_STICK_C,
	CS_STICK_N,
	CS_STICK_S,
	CS_STICK_W,
	CS_STICK_E,
	CS_STICK_NW,
	CS_STICK_SW,
	CS_STICK_SE,
	CS_STICK_NE,
	CS_BUTTON_A,
	CS_BUTTON_A_PRESSED,
	CS_BUTTON_B,
	CS_BUTTON_B_PRESSED,
	CS_STICK_C_A,
	CS_STICK_N_A,
	CS_STICK_S_A,
	CS_STICK_W_A,
	CS_STICK_E_A,
	CS_STICK_NW_A,
	CS_STICK_SW_A,
	CS_STICK_SE_A,
	CS_STICK_NE_A,
	CS_BUTTON_A_A,
	CS_BUTTON_A_PRESSED_A,
	CS_BUTTON_B_A,
	CS_BUTTON_B_PRESSED_A,
	CS_BUTTON_SUB_A,
	CS_BUTTON_SUB_PRESSED_A,
	CS_BUTTON_FORM_A,
	CS_BUTTON_FORM_PRESSED_A,
	CS_BUTTON_LOCK_A,
	CS_BUTTON_LOCK_PRESSED_A,
	CS_POWERUP_1,
	CS_POWERUP_2,
	CS_POWERUP_3,
	CS_POWERUP_4,
	CS_DROP_SHOT,
	CS_DROP_MEDAL,
	CS_DROP_OPTION,
	CS_DROP_SHOT_LARGE,
	CS_MEDAL_100,
	CS_MEDAL_200,
	CS_MEDAL_300,
	CS_MEDAL_400,
	CS_MEDAL_500,
	CS_MEDAL_600,
	CS_MEDAL_700,
	CS_MEDAL_800,
	CS_MEDAL_900,
	CS_MEDAL_1000,
	CS_MEDAL_2000,
	CS_MEDAL_3000,
	CS_MEDAL_4000,
	CS_MEDAL_5000,
	CS_MEDAL_6000,
	CS_MEDAL_7000,
	CS_MEDAL_8000,
	CS_MEDAL_9000,
	CS_MEDAL_10000,
	CS_DIGIT_L0,
	CS_DIGIT_L1,
	CS_DIGIT_L2,
	CS_DIGIT_L3,
	CS_DIGIT_L4,
	CS_DIGIT_L5,
	CS_DIGIT_L6,
	CS_DIGIT_L7,
	CS_DIGIT_L8,
	CS_DIGIT_L9,
	CS_DIGIT_S0,
	CS_DIGIT_S1,
	CS_DIGIT_S2,
	CS_DIGIT_S3,
	CS_DIGIT_S4,
	CS_DIGIT_S5,
	CS_DIGIT_S6,
	CS_DIGIT_S7,
	CS_DIGIT_S8,
	CS_DIGIT_S9,
	CS_DIGIT_M0,
	CS_DIGIT_M1,
	CS_DIGIT_M2,
	CS_DIGIT_M3,
	CS_DIGIT_M4,
	CS_DIGIT_M5,
	CS_DIGIT_M6,
	CS_DIGIT_M7,
	CS_DIGIT_M8,
	CS_DIGIT_M9,
	CS_FONT_00,
	CS_FONT_01,
	CS_FONT_02,
	CS_FONT_03,
	CS_FONT_04,
	CS_FONT_05,
	CS_FONT_06,
	CS_FONT_07,
	CS_FONT_08,
	CS_FONT_09,
	CS_FONT_0A,
	CS_FONT_0B,
	CS_FONT_0C,
	CS_FONT_0D,
	CS_FONT_0E,
	CS_FONT_0F,
	CS_FONT_10,
	CS_FONT_11,
	CS_FONT_12,
	CS_FONT_13,
	CS_FONT_14,
	CS_FONT_15,
	CS_FONT_16,
	CS_FONT_17,
	CS_FONT_18,
	CS_FONT_19,
	CS_FONT_1A,
	CS_FONT_1B,
	CS_FONT_1C,
	CS_FONT_1D,
	CS_FONT_1E,
	CS_FONT_1F,
	CS_FONT_20,
	CS_FONT_21,
	CS_FONT_22,
	CS_FONT_23,
	CS_FONT_24,
	CS_FONT_25,
	CS_FONT_26,
	CS_FONT_27,
	CS_FONT_28,
	CS_FONT_29,
	CS_FONT_2A,
	CS_FONT_2B,
	CS_FONT_2C,
	CS_FONT_2D,
	CS_FONT_2E,
	CS_FONT_2F,
	CS_FONT_30,
	CS_FONT_31,
	CS_FONT_32,
	CS_FONT_33,
	CS_FONT_34,
	CS_FONT_35,
	CS_FONT_36,
	CS_FONT_37,
	CS_FONT_38,
	CS_FONT_39,
	CS_FONT_3A,
	CS_FONT_3B,
	CS_FONT_3C,
	CS_FONT_3D,
	CS_FONT_3E,
	CS_FONT_3F,
	CS_FONT_40,
	CS_FONT_41,
	CS_FONT_42,
	CS_FONT_43,
	CS_FONT_44,
	CS_FONT_45,
	CS_FONT_46,
	CS_FONT_47,
	CS_FONT_48,
	CS_FONT_49,
	CS_FONT_4A,
	CS_FONT_4B,
	CS_FONT_4C,
	CS_FONT_4D,
	CS_FONT_4E,
	CS_FONT_4F,
	CS_FONT_50,
	CS_FONT_51,
	CS_FONT_52,
	CS_FONT_53,
	CS_FONT_54,
	CS_FONT_55,
	CS_FONT_56,
	CS_FONT_57,
	CS_FONT_58,
	CS_FONT_59,
	CS_FONT_5A,
	CS_FONT_5B,
	CS_FONT_5C,
	CS_FONT_5D,
	CS_FONT_5E,
	CS_FONT_5F,
	CS_FONT_60,
	CS_FONT_61,
	CS_FONT_62,
	CS_FONT_63,
	CS_FONT_64,
	CS_FONT_65,
	CS_FONT_66,
	CS_FONT_67,
	CS_FONT_68,
	CS_FONT_69,
	CS_FONT_6A,
	CS_FONT_6B,
	CS_FONT_6C,
	CS_FONT_6D,
	CS_FONT_6E,
	CS_FONT_6F,
	CS_FONT_70,
	CS_FONT_71,
	CS_FONT_72,
	CS_FONT_73,
	CS_FONT_74,
	CS_FONT_75,
	CS_FONT_76,
	CS_FONT_77,
	CS_FONT_78,
	CS_FONT_79,
	CS_FONT_7A,
	CS_FONT_7B,
	CS_FONT_7C,
	CS_FONT_7D,
	CS_FONT_7E,
	CS_FONT_7F,
	CS_WHITE,
	CS_SHIP_BOND_ST,
	CS_SHIP_BOND_SP,
	CS_SHIP_DYNE_ST,
	CS_SHIP_DYNE_SP,
	CS_PLATE_SCORE,
	CS_PLATE_STATUS,
	CS_PLATE_STATUS3,
	CS_PLATE_WEAPON5,
	CS_PLATE_WEAPON4,
	CS_PLATE_WEAPON3,
	CS_PLATE_WEAPON1,
	CS_PLATE_FORM,
	CS_PLATE_CTLTEXT,
	CS_PLATE_RANK,
	CS_PLATE_DROP,
	CS_PLATE_MEDALS,
	CS_PLATE_BULLETS,
	CS_PLATE_BOSS,
	CS_PLATE_MUSIC,
	CS_PLATE_STAGES,
	CS_PLATE_SCORE_S,
	CS_PLATE_STATUS_S,
	CS_PLATE_STAGES_S,
	CS_PLATE_BULLETS_S,
	CS_PLATE_DROP_S,
	CS_PLATE_MEDAL_S,
	CS_PLATE_XTC,
	CS_PLATE43_SCORE_S,
	CS_PLATE43_RANK,
	CS_PLATE43_STATUS,
	CS_PLATE43_WEAPON5,
	CS_PLATE43_WEAPON4,
	CS_PLATE43_FORM,
	CS_PLATE43_CTLTEXT,
	CS_PLATE43_DROP,
	CS_PLATE43_MEDALS,
	CS_PLATE43_BULLETS,
	CS_PLATE43_BOSS,
	CS_PLATE43_STAGES,
	CS_PLATE43_MUSIC,
	CS_PLATE43_XTC,
	CS_COUNT
};

struct card_rect { short x, y, w, h; };
extern const struct card_rect card_sprites[CS_COUNT];
extern const unsigned char card_bg_z[], card_atlas_z[];
extern const unsigned card_bg_z_size, card_atlas_z_size;

/* the windows in design pixels (test 63's 16:9 places) */
#define CL_BOSS_WIN_X 1007
#define CL_BOSS_WIN_Y 479
#define CL_BOSS_WIN_W 266
#define CL_BOSS_WIN_H 25
#define CL_BULLETS_S_WIN_X 1007
#define CL_BULLETS_S_WIN_Y 61
#define CL_BULLETS_S_WIN_W 266
#define CL_BULLETS_S_WIN_H 30
#define CL_BULLETS_WIN_X 1105
#define CL_BULLETS_WIN_Y 366
#define CL_BULLETS_WIN_W 168
#define CL_BULLETS_WIN_H 43
#define CL_CTLTEXT_WIN_X 33
#define CL_CTLTEXT_WIN_Y 138
#define CL_CTLTEXT_WIN_W 327
#define CL_CTLTEXT_WIN_H 49
#define CL_DROP_S_WIN_X 1007
#define CL_DROP_S_WIN_Y 61
#define CL_DROP_S_WIN_W 266
#define CL_DROP_S_WIN_H 30
#define CL_FORM_WIN_X 33
#define CL_FORM_WIN_Y 319
#define CL_FORM_WIN_W 327
#define CL_FORM_WIN_H 90
#define CL_MEDAL_S_WIN_X 1007
#define CL_MEDAL_S_WIN_Y 61
#define CL_MEDAL_S_WIN_W 266
#define CL_MEDAL_S_WIN_H 30
#define CL_MEDALS_WIN_X 919
#define CL_MEDALS_WIN_Y 366
#define CL_MEDALS_WIN_W 152
#define CL_MEDALS_WIN_H 43
#define CL_MUSIC_WIN_X 967
#define CL_MUSIC_WIN_Y 557
#define CL_MUSIC_WIN_W 306
#define CL_MUSIC_WIN_H 45
#define CL_RANK_WIN_X 1007
#define CL_RANK_WIN_Y 61
#define CL_RANK_WIN_W 266
#define CL_RANK_WIN_H 26
#define CL_SCORE_S_WIN_X 1007
#define CL_SCORE_S_WIN_Y 61
#define CL_SCORE_S_WIN_W 266
#define CL_SCORE_S_WIN_H 30
#define CL_SCORE_WIN_X 81
#define CL_SCORE_WIN_Y 43
#define CL_SCORE_WIN_W 267
#define CL_SCORE_WIN_H 43
#define CL_STAGES_S_WIN_X 1007
#define CL_STAGES_S_WIN_Y 61
#define CL_STAGES_S_WIN_W 266
#define CL_STAGES_S_WIN_H 30
#define CL_STAGES_WIN_X 967
#define CL_STAGES_WIN_Y 656
#define CL_STAGES_WIN_W 306
#define CL_STAGES_WIN_H 66
#define CL_STATUS3_WIN_X 33
#define CL_STATUS3_WIN_Y 138
#define CL_STATUS3_WIN_W 327
#define CL_STATUS3_WIN_H 69
#define CL_STATUS_S_WIN_X 1007
#define CL_STATUS_S_WIN_Y 61
#define CL_STATUS_S_WIN_W 266
#define CL_STATUS_S_WIN_H 30
#define CL_STATUS_WIN_X 33
#define CL_STATUS_WIN_Y 138
#define CL_STATUS_WIN_W 327
#define CL_STATUS_WIN_H 89
#define CL_WEAPON1_WIN_X 33
#define CL_WEAPON1_WIN_Y 138
#define CL_WEAPON1_WIN_W 327
#define CL_WEAPON1_WIN_H 29
#define CL_WEAPON3_WIN_X 33
#define CL_WEAPON3_WIN_Y 138
#define CL_WEAPON3_WIN_W 327
#define CL_WEAPON3_WIN_H 69
#define CL_WEAPON4_WIN_X 33
#define CL_WEAPON4_WIN_Y 138
#define CL_WEAPON4_WIN_W 327
#define CL_WEAPON4_WIN_H 89
#define CL_WEAPON5_WIN_X 33
#define CL_WEAPON5_WIN_Y 138
#define CL_WEAPON5_WIN_W 327
#define CL_WEAPON5_WIN_H 109
#define CL_XTC_WIN_X 33
#define CL_XTC_WIN_Y 319
#define CL_XTC_WIN_W 327
#define CL_XTC_WIN_H 90

/* test 64: the plates. Each one's design origin (its 720p top-left in test 63's 16:9 layout, where the
 * card's coordinates for its values are) and its place in each view's canvas (CPV_WIDE 1280x720, CPV_43
 * 960x720, CPV_TATE 720x1280; x -32768 = not in that view), drawn at its sprite's size = CARD_KS of the
 * design size */
#define CARD_KS 0.9750f
/* test 71: 4:3 = two columns, each plate at CARD_F43X of its 16:9 width and CARD_F43Y of its height (its
 * sprite43), stacked from CARD_C43_TOP, CARD_C43_GAP apart, right-aligned at CARD_C43_RA / CARD_C43_RB */
#define CARD_F43X 0.58405f
#define CARD_F43Y 0.75000f
#define CARD_C43_RA 748
#define CARD_C43_RB 957
#define CARD_C43_TOP 3
#define CARD_C43_GAP 3
/* test 65: the right end of each short plate's tab, design pixels (what is beside it starts there) */
#define CL_SCORE_S_TAB_END 1108
#define CL_STATUS_S_TAB_END 1122
#define CL_STAGES_S_TAB_END 1266
#define CL_BULLETS_S_TAB_END 1138
#define CL_DROP_S_TAB_END 1170
#define CL_MEDAL_S_TAB_END 1122
#define CARD_CTL_K 0.92625f /* the sticks' and buttons' sprites: this of 165 / 100 pixels */
enum card_plate_id {
	CP_SCORE,
	CP_STATUS,
	CP_STATUS3,
	CP_WEAPON5,
	CP_WEAPON4,
	CP_WEAPON3,
	CP_WEAPON1,
	CP_FORM,
	CP_CTLTEXT,
	CP_RANK,
	CP_DROP,
	CP_MEDALS,
	CP_BULLETS,
	CP_BOSS,
	CP_MUSIC,
	CP_STAGES,
	CP_SCORE_S,
	CP_STATUS_S,
	CP_STAGES_S,
	CP_BULLETS_S,
	CP_DROP_S,
	CP_MEDAL_S,
	CP_XTC,
	CP_COUNT
};
enum { CPV_WIDE, CPV_43, CPV_TATE, CPV_N };
struct card_plate { float ox, oy, k; short sprite; short x[CPV_N], y[CPV_N]; short sprite43; }; /* test 67: k = its scale (CARD_KS; the MEDALS | BULLETS pair less); test 71: its 4:3 sprite (-1 = none) */
extern const struct card_plate card_plates[CP_COUNT];

/* test 60: the 4:3 panel (its place in the 960x720 canvas) and the tate bands (one texture, the top band
 * over the bottom one; the canvas is 720x1280, the bands at its rows 0-159 and 1120-1279); test 71: the panel
 * covers the canvas's CARD_P43_CW columns from CARD_P43_X in CARD_P43_W front buffer pixels, one per pilot
 * (0 Bond, 1 Dyne) and game (card_p43blk_z: Kuro BL's) */
#define CARD_P43_W 640
#define CARD_P43_H 720
#define CARD_P43_X 480
#define CARD_P43_CW 480
#define CARD_TATE_W 720
#define CARD_TATE_H 320
#define CARD_TATE_BAND 160
#define CARD_HAVE_BLK 1
#define CARD_HAVE_P43BLK 1

extern const unsigned char *const card_p43_z[2], *const card_p43blk_z[2], card_tate_z[];
extern const unsigned card_p43_z_size[2], card_p43blk_z_size[2], card_tate_z_size;
extern const unsigned char card_bgblk_z[];
extern const unsigned card_bgblk_z_size;

#endif

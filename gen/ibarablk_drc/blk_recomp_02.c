#include "recomp.h"
#include "blk_recomp_funcs.h"

/* rtc_eeprom_init */
void blk_f_0C05D514(sh3_t *c)
{
	LOCALS;
L_0C05D514: BLKS(0x0C05D514u);
	IF(0x0C05D514u); r15 -= 4; W32(r15, PR); UPD(0x0C05D516u, 1);  /* 0C05D514 sts.l pr,@-Rn */
	r0 = 0xDu; UPD(0x0C05D518u, 1);  /* 0C05D516 mov.l @(disp,pc),Rn */
	r1 = 0x2u; UPD(0x0C05D51Au, 1);  /* 0C05D518 mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D51Cu, 1);  /* 0C05D51A mov.l @(disp,pc),Rn */
	IF(0x0C05D51Cu); { u32 t_ = r6; PR = 0x0C05D520u; IF(0x0C05D51Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D520u); }  /* 0C05D51C jsr @Rn */
L_0C05D520: BLKS(0x0C05D520u);
	r6 = 0xC05D4CCu; UPD(0x0C05D522u, 1);  /* 0C05D520 mov.l @(disp,pc),Rn */
	IF(0x0C05D522u); { u32 t_ = r6; PR = 0x0C05D526u; IF(0x0C05D524u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D4CC, 0x0C05D4CCu, 0x0C05D526u); }  /* 0C05D522 jsr @Rn */
L_0C05D526: BLKS(0x0C05D526u);
	IF(0x0C05D526u); PR = R32(r15); r15 += 4; UPD(0x0C05D528u, 1);  /* 0C05D526 lds.l @Rn+,pr */
	IF(0x0C05D528u); { u32 t_ = PR; IF(0x0C05D52Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05D528 rts */
}

/* rtc_eeprom_write_bits */
void blk_f_0C05D53C(sh3_t *c)
{
	LOCALS;
L_0C05D53C: BLKS(0x0C05D53Cu);
	IF(0x0C05D53Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05D53Eu, 1);  /* 0C05D53C sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C05D540u, 1);  /* 0C05D53E mov.l @(disp,pc),Rn */
	r6 = 0xC05D4A0u; UPD(0x0C05D542u, 1);  /* 0C05D540 mov.l @(disp,pc),Rn */
	IF(0x0C05D542u); { u32 t_ = r6; PR = 0x0C05D546u; IF(0x0C05D544u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D4A0, 0x0C05D4A0u, 0x0C05D546u); }  /* 0C05D542 jsr @Rn */
L_0C05D546: BLKS(0x0C05D546u);
	r5 = 0x0u; UPD(0x0C05D548u, 1);  /* 0C05D546 mov.l @(disp,pc),Rn */
	r5 |= r0;  /* 0C05D548 or Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D54Cu, 2);  /* 0C05D54A mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C05D54C swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D54E swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C05D552u, 3);  /* 0C05D550 mov.l @(disp,pc),Rn */
L_0C05D552: BLKS(0x0C05D552u);
	IF(0x0C05D552u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D552 rotl Rn */
	r2 = r5;  /* 0C05D554 mov Rm,Rn */
	r2 &= r3;  /* 0C05D556 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D55Au, 4);  /* 0C05D558 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D55Cu, 1);  /* 0C05D55A mov.b Rm,@Rn */
	r4 |= r2;  /* 0C05D55C or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D560u, 2);  /* 0C05D55E mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C05D562u, 1);  /* 0C05D560 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D562 or Rm,Rn */
	IF(0x0C05D564u); r6 -= 1; T = r6 == 0;  /* 0C05D564 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D552u, 5); goto L_0C05D552; } UPD(0x0C05D56Au, 1); goto L_0C05D56A; }  /* 0C05D566 bf/s */
L_0C05D56A: BLKS(0x0C05D56Au);
	r5 = r1;  /* 0C05D56A mov Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D56Eu, 2);  /* 0C05D56C mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C05D56E swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D570 swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C05D574u, 3);  /* 0C05D572 mov.l @(disp,pc),Rn */
L_0C05D574: BLKS(0x0C05D574u);
	IF(0x0C05D574u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D574 rotl Rn */
	r2 = r5;  /* 0C05D576 mov Rm,Rn */
	r2 &= r3;  /* 0C05D578 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D57Cu, 4);  /* 0C05D57A mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D57Eu, 1);  /* 0C05D57C mov.b Rm,@Rn */
	r4 |= r2;  /* 0C05D57E or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D582u, 2);  /* 0C05D580 mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C05D584u, 1);  /* 0C05D582 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D584 or Rm,Rn */
	IF(0x0C05D586u); r6 -= 1; T = r6 == 0;  /* 0C05D586 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D574u, 5); goto L_0C05D574; } UPD(0x0C05D58Cu, 1); goto L_0C05D58C; }  /* 0C05D588 bf/s */
L_0C05D58C: BLKS(0x0C05D58Cu);
	r6 = 0x2u; UPD(0x0C05D58Eu, 1);  /* 0C05D58C mov.l @(disp,pc),Rn */
	IF(0x0C05D58Eu); PR = R32(r15); r15 += 4; UPD(0x0C05D590u, 1);  /* 0C05D58E lds.l @Rn+,pr */
	IF(0x0C05D590u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D590 rts */
}

/* rtc_eeprom_read_bits */
void blk_f_0C05D5B4(sh3_t *c)
{
	LOCALS;
L_0C05D5B4: BLKS(0x0C05D5B4u);
	IF(0x0C05D5B4u); r15 -= 4; W32(r15, PR); UPD(0x0C05D5B6u, 1);  /* 0C05D5B4 sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C05D5B8u, 1);  /* 0C05D5B6 mov.l @(disp,pc),Rn */
	r6 = 0xC05D4A0u; UPD(0x0C05D5BAu, 1);  /* 0C05D5B8 mov.l @(disp,pc),Rn */
	IF(0x0C05D5BAu); { u32 t_ = r6; PR = 0x0C05D5BEu; IF(0x0C05D5BCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D4A0, 0x0C05D4A0u, 0x0C05D5BEu); }  /* 0C05D5BA jsr @Rn */
L_0C05D5BE: BLKS(0x0C05D5BEu);
	r5 = 0x80u; UPD(0x0C05D5C0u, 1);  /* 0C05D5BE mov.l @(disp,pc),Rn */
	r5 |= r0;  /* 0C05D5C0 or Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D5C4u, 2);  /* 0C05D5C2 mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C05D5C4 swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D5C6 swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C05D5CAu, 3);  /* 0C05D5C8 mov.l @(disp,pc),Rn */
L_0C05D5CA: BLKS(0x0C05D5CAu);
	IF(0x0C05D5CAu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D5CA rotl Rn */
	r2 = r5;  /* 0C05D5CC mov Rm,Rn */
	r2 &= r3;  /* 0C05D5CE and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D5D2u, 4);  /* 0C05D5D0 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D5D4u, 1);  /* 0C05D5D2 mov.b Rm,@Rn */
	r4 |= r2;  /* 0C05D5D4 or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D5D8u, 2);  /* 0C05D5D6 mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C05D5DAu, 1);  /* 0C05D5D8 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D5DA or Rm,Rn */
	IF(0x0C05D5DCu); r6 -= 1; T = r6 == 0;  /* 0C05D5DC dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D5CAu, 5); goto L_0C05D5CA; } UPD(0x0C05D5E2u, 1); goto L_0C05D5E2; }  /* 0C05D5DE bf/s */
L_0C05D5E2: BLKS(0x0C05D5E2u);
	r3 = 0x1u; UPD(0x0C05D5E4u, 1);  /* 0C05D5E2 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05D5E6u, 1);  /* 0C05D5E4 mov.l @(disp,pc),Rn */
	r6 = 0x8u; UPD(0x0C05D5E8u, 1);  /* 0C05D5E6 mov.l @(disp,pc),Rn */
L_0C05D5E8: BLKS(0x0C05D5E8u);
	r5 = 0x4u; UPD(0x0C05D5EAu, 1);  /* 0C05D5E8 mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C05D5ECu, 1);  /* 0C05D5EA mov.b Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C05D5EEu, 1);  /* 0C05D5EC mov.b @Rm,Rn */
	r1 &= r3;  /* 0C05D5EE and Rm,Rn */
	r0 |= r1;  /* 0C05D5F0 or Rm,Rn */
	IF(0x0C05D5F2u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C05D5F2 rotl Rn */
	r5 = 0x6u; UPD(0x0C05D5F6u, 4);  /* 0C05D5F4 mov.l @(disp,pc),Rn */
	IF(0x0C05D5F6u); r6 -= 1; T = r6 == 0;  /* 0C05D5F6 dt Rn */
	{ u32 c_ = !T; W8(r7, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D5E8u, 4); goto L_0C05D5E8; } UPD(0x0C05D5FCu, 1); goto L_0C05D5FC; }  /* 0C05D5F8 bf/s */
L_0C05D5FC: BLKS(0x0C05D5FCu);
	IF(0x0C05D5FCu); T = r0 & 1; r0 = (r0 >> 1) | (T << 31);  /* 0C05D5FC rotr Rn */
	r6 = 0x2u; UPD(0x0C05D600u, 2);  /* 0C05D5FE mov.l @(disp,pc),Rn */
	IF(0x0C05D600u); PR = R32(r15); r15 += 4; UPD(0x0C05D602u, 1);  /* 0C05D600 lds.l @Rn+,pr */
	IF(0x0C05D602u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D602 rts */
}

/* rtc_eeprom_write_block */
void blk_f_0C05D62C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05D648);
	SPIN_VARS(0C05D660);
	SPIN_VARS(0C05D672);
	SPIN_VARS(0C05D692);
	SPIN_VARS(0C05D6AA);
	SPIN_VARS(0C05D6BC);
L_0C05D62C: BLKS(0x0C05D62Cu);
	IF(0x0C05D62Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05D62Eu, 1);  /* 0C05D62C sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C05D630u, 1);  /* 0C05D62E mov.l @(disp,pc),Rn */
	r6 = 0xC05D4A0u; UPD(0x0C05D632u, 1);  /* 0C05D630 mov.l @(disp,pc),Rn */
	IF(0x0C05D632u); { u32 t_ = r6; PR = 0x0C05D636u; IF(0x0C05D634u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D4A0, 0x0C05D4A0u, 0x0C05D636u); }  /* 0C05D632 jsr @Rn */
L_0C05D636: BLKS(0x0C05D636u);
	r3 = 0x2000u; UPD(0x0C05D638u, 1);  /* 0C05D636 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C05D638 mov Rm,Rn */
	IF(0x0C05D63Au); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D63A rotl Rn */
	r5 |= r3;  /* 0C05D63C or Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D640u, 4);  /* 0C05D63E mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D640 swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C05D644u, 2);  /* 0C05D642 mov.l @(disp,pc),Rn */
L_0C05D644: BLKS(0x0C05D644u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D646u, 1);  /* 0C05D644 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D648u, 1);  /* 0C05D646 mov.l @(disp,pc),Rn */
L_0C05D648: BLKS(0x0C05D648u);
	SPIN_SAVE(0C05D648);
	IF(0x0C05D648u); ;  /* 0C05D648 nop */
	IF(0x0C05D64Au); r9 -= 1; T = r9 == 0;  /* 0C05D64A dt Rn */
	{ u32 c_ = !T; IF(0x0C05D64Eu); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D648, 5); UPD(0x0C05D648u, 5); goto L_0C05D648; } goto L_0C05D650; }  /* 0C05D64C bf/s */
L_0C05D650: BLKS(0x0C05D650u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D652u, 2);  /* 0C05D650 mov.l @Rm+,Rn */
	IF(0x0C05D652u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D652 rotl Rn */
	r2 = r5;  /* 0C05D654 mov Rm,Rn */
	r2 &= r3;  /* 0C05D656 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D65Au, 4);  /* 0C05D658 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D65Cu, 1);  /* 0C05D65A mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D65Eu, 1);  /* 0C05D65C mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D660u, 1);  /* 0C05D65E mov.l @(disp,pc),Rn */
L_0C05D660: BLKS(0x0C05D660u);
	SPIN_SAVE(0C05D660);
	IF(0x0C05D660u); ;  /* 0C05D660 nop */
	IF(0x0C05D662u); r9 -= 1; T = r9 == 0;  /* 0C05D662 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D666u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D660, 5); UPD(0x0C05D660u, 5); goto L_0C05D660; } goto L_0C05D668; }  /* 0C05D664 bf/s */
L_0C05D668: BLKS(0x0C05D668u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D66Au, 2);  /* 0C05D668 mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C05D66A or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D66Eu, 2);  /* 0C05D66C mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D670u, 1);  /* 0C05D66E mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D672u, 1);  /* 0C05D670 mov.l @(disp,pc),Rn */
L_0C05D672: BLKS(0x0C05D672u);
	SPIN_SAVE(0C05D672);
	IF(0x0C05D672u); ;  /* 0C05D672 nop */
	IF(0x0C05D674u); r9 -= 1; T = r9 == 0;  /* 0C05D674 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D678u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D672, 5); UPD(0x0C05D672u, 5); goto L_0C05D672; } goto L_0C05D67A; }  /* 0C05D676 bf/s */
L_0C05D67A: BLKS(0x0C05D67Au);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D67Cu, 2);  /* 0C05D67A mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C05D67Eu, 1);  /* 0C05D67C mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D67E or Rm,Rn */
	IF(0x0C05D680u); r6 -= 1; T = r6 == 0;  /* 0C05D680 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D644u, 5); goto L_0C05D644; } UPD(0x0C05D686u, 1); goto L_0C05D686; }  /* 0C05D682 bf/s */
L_0C05D686: BLKS(0x0C05D686u);
	r5 = r1;  /* 0C05D686 mov Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D68Au, 2);  /* 0C05D688 mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D68A swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C05D68Eu, 2);  /* 0C05D68C mov.l @(disp,pc),Rn */
L_0C05D68E: BLKS(0x0C05D68Eu);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D690u, 1);  /* 0C05D68E mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D692u, 1);  /* 0C05D690 mov.l @(disp,pc),Rn */
L_0C05D692: BLKS(0x0C05D692u);
	SPIN_SAVE(0C05D692);
	IF(0x0C05D692u); ;  /* 0C05D692 nop */
	IF(0x0C05D694u); r9 -= 1; T = r9 == 0;  /* 0C05D694 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D698u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D692, 5); UPD(0x0C05D692u, 5); goto L_0C05D692; } goto L_0C05D69A; }  /* 0C05D696 bf/s */
L_0C05D69A: BLKS(0x0C05D69Au);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D69Cu, 2);  /* 0C05D69A mov.l @Rm+,Rn */
	IF(0x0C05D69Cu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D69C rotl Rn */
	r2 = r5;  /* 0C05D69E mov Rm,Rn */
	r2 &= r3;  /* 0C05D6A0 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D6A4u, 4);  /* 0C05D6A2 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D6A6u, 1);  /* 0C05D6A4 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D6A8u, 1);  /* 0C05D6A6 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D6AAu, 1);  /* 0C05D6A8 mov.l @(disp,pc),Rn */
L_0C05D6AA: BLKS(0x0C05D6AAu);
	SPIN_SAVE(0C05D6AA);
	IF(0x0C05D6AAu); ;  /* 0C05D6AA nop */
	IF(0x0C05D6ACu); r9 -= 1; T = r9 == 0;  /* 0C05D6AC dt Rn */
	{ u32 c_ = !T; IF(0x0C05D6B0u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D6AA, 5); UPD(0x0C05D6AAu, 5); goto L_0C05D6AA; } goto L_0C05D6B2; }  /* 0C05D6AE bf/s */
L_0C05D6B2: BLKS(0x0C05D6B2u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D6B4u, 2);  /* 0C05D6B2 mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C05D6B4 or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D6B8u, 2);  /* 0C05D6B6 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D6BAu, 1);  /* 0C05D6B8 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D6BCu, 1);  /* 0C05D6BA mov.l @(disp,pc),Rn */
L_0C05D6BC: BLKS(0x0C05D6BCu);
	SPIN_SAVE(0C05D6BC);
	IF(0x0C05D6BCu); ;  /* 0C05D6BC nop */
	IF(0x0C05D6BEu); r9 -= 1; T = r9 == 0;  /* 0C05D6BE dt Rn */
	{ u32 c_ = !T; IF(0x0C05D6C2u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D6BC, 5); UPD(0x0C05D6BCu, 5); goto L_0C05D6BC; } goto L_0C05D6C4; }  /* 0C05D6C0 bf/s */
L_0C05D6C4: BLKS(0x0C05D6C4u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D6C6u, 2);  /* 0C05D6C4 mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C05D6C8u, 1);  /* 0C05D6C6 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D6C8 or Rm,Rn */
	IF(0x0C05D6CAu); r6 -= 1; T = r6 == 0;  /* 0C05D6CA dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D68Eu, 5); goto L_0C05D68E; } UPD(0x0C05D6D0u, 1); goto L_0C05D6D0; }  /* 0C05D6CC bf/s */
L_0C05D6D0: BLKS(0x0C05D6D0u);
	r6 = 0x2u; UPD(0x0C05D6D2u, 1);  /* 0C05D6D0 mov.l @(disp,pc),Rn */
	IF(0x0C05D6D2u); PR = R32(r15); r15 += 4; UPD(0x0C05D6D4u, 1);  /* 0C05D6D2 lds.l @Rn+,pr */
	IF(0x0C05D6D4u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D6D4 rts */
}

/* rtc_eeprom_read_block */
void blk_f_0C05D6FC(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05D718);
	SPIN_VARS(0C05D730);
	SPIN_VARS(0C05D742);
	SPIN_VARS(0C05D760);
	SPIN_VARS(0C05D772);
	SPIN_VARS(0C05D788);
L_0C05D6FC: BLKS(0x0C05D6FCu);
	IF(0x0C05D6FCu); r15 -= 4; W32(r15, PR); UPD(0x0C05D6FEu, 1);  /* 0C05D6FC sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C05D700u, 1);  /* 0C05D6FE mov.l @(disp,pc),Rn */
	r6 = 0xC05D4A0u; UPD(0x0C05D702u, 1);  /* 0C05D700 mov.l @(disp,pc),Rn */
	IF(0x0C05D702u); { u32 t_ = r6; PR = 0x0C05D706u; IF(0x0C05D704u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D4A0, 0x0C05D4A0u, 0x0C05D706u); }  /* 0C05D702 jsr @Rn */
L_0C05D706: BLKS(0x0C05D706u);
	r3 = 0xA000u; UPD(0x0C05D708u, 1);  /* 0C05D706 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C05D708 mov Rm,Rn */
	IF(0x0C05D70Au); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D70A rotl Rn */
	r5 |= r3;  /* 0C05D70C or Rm,Rn */
	r3 = 0x1u; UPD(0x0C05D710u, 4);  /* 0C05D70E mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C05D710 swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C05D714u, 2);  /* 0C05D712 mov.l @(disp,pc),Rn */
L_0C05D714: BLKS(0x0C05D714u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D716u, 1);  /* 0C05D714 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D718u, 1);  /* 0C05D716 mov.l @(disp,pc),Rn */
L_0C05D718: BLKS(0x0C05D718u);
	SPIN_SAVE(0C05D718);
	IF(0x0C05D718u); ;  /* 0C05D718 nop */
	IF(0x0C05D71Au); r9 -= 1; T = r9 == 0;  /* 0C05D71A dt Rn */
	{ u32 c_ = !T; IF(0x0C05D71Eu); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D718, 5); UPD(0x0C05D718u, 5); goto L_0C05D718; } goto L_0C05D720; }  /* 0C05D71C bf/s */
L_0C05D720: BLKS(0x0C05D720u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D722u, 2);  /* 0C05D720 mov.l @Rm+,Rn */
	IF(0x0C05D722u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05D722 rotl Rn */
	r2 = r5;  /* 0C05D724 mov Rm,Rn */
	r2 &= r3;  /* 0C05D726 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D72Au, 4);  /* 0C05D728 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C05D72Cu, 1);  /* 0C05D72A mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D72Eu, 1);  /* 0C05D72C mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D730u, 1);  /* 0C05D72E mov.l @(disp,pc),Rn */
L_0C05D730: BLKS(0x0C05D730u);
	SPIN_SAVE(0C05D730);
	IF(0x0C05D730u); ;  /* 0C05D730 nop */
	IF(0x0C05D732u); r9 -= 1; T = r9 == 0;  /* 0C05D732 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D736u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D730, 5); UPD(0x0C05D730u, 5); goto L_0C05D730; } goto L_0C05D738; }  /* 0C05D734 bf/s */
L_0C05D738: BLKS(0x0C05D738u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D73Au, 2);  /* 0C05D738 mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C05D73A or Rm,Rn */
	W8(r7, r4); UPD(0x0C05D73Eu, 2);  /* 0C05D73C mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D740u, 1);  /* 0C05D73E mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D742u, 1);  /* 0C05D740 mov.l @(disp,pc),Rn */
L_0C05D742: BLKS(0x0C05D742u);
	SPIN_SAVE(0C05D742);
	IF(0x0C05D742u); ;  /* 0C05D742 nop */
	IF(0x0C05D744u); r9 -= 1; T = r9 == 0;  /* 0C05D744 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D748u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D742, 5); UPD(0x0C05D742u, 5); goto L_0C05D742; } goto L_0C05D74A; }  /* 0C05D746 bf/s */
L_0C05D74A: BLKS(0x0C05D74Au);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D74Cu, 2);  /* 0C05D74A mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C05D74Eu, 1);  /* 0C05D74C mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C05D74E or Rm,Rn */
	IF(0x0C05D750u); r6 -= 1; T = r6 == 0;  /* 0C05D750 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D714u, 5); goto L_0C05D714; } UPD(0x0C05D756u, 1); goto L_0C05D756; }  /* 0C05D752 bf/s */
L_0C05D756: BLKS(0x0C05D756u);
	r3 = 0x1u; UPD(0x0C05D758u, 1);  /* 0C05D756 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05D75Au, 1);  /* 0C05D758 mov.l @(disp,pc),Rn */
	r6 = 0x10u; UPD(0x0C05D75Cu, 1);  /* 0C05D75A mov.l @(disp,pc),Rn */
L_0C05D75C: BLKS(0x0C05D75Cu);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D75Eu, 1);  /* 0C05D75C mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D760u, 1);  /* 0C05D75E mov.l @(disp,pc),Rn */
L_0C05D760: BLKS(0x0C05D760u);
	SPIN_SAVE(0C05D760);
	IF(0x0C05D760u); ;  /* 0C05D760 nop */
	IF(0x0C05D762u); r9 -= 1; T = r9 == 0;  /* 0C05D762 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D766u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D760, 5); UPD(0x0C05D760u, 5); goto L_0C05D760; } goto L_0C05D768; }  /* 0C05D764 bf/s */
L_0C05D768: BLKS(0x0C05D768u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D76Au, 2);  /* 0C05D768 mov.l @Rm+,Rn */
	r5 = 0x4u; UPD(0x0C05D76Cu, 1);  /* 0C05D76A mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C05D76Eu, 1);  /* 0C05D76C mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D770u, 1);  /* 0C05D76E mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D772u, 1);  /* 0C05D770 mov.l @(disp,pc),Rn */
L_0C05D772: BLKS(0x0C05D772u);
	SPIN_SAVE(0C05D772);
	IF(0x0C05D772u); ;  /* 0C05D772 nop */
	IF(0x0C05D774u); r9 -= 1; T = r9 == 0;  /* 0C05D774 dt Rn */
	{ u32 c_ = !T; IF(0x0C05D778u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D772, 5); UPD(0x0C05D772u, 5); goto L_0C05D772; } goto L_0C05D77A; }  /* 0C05D776 bf/s */
L_0C05D77A: BLKS(0x0C05D77Au);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D77Cu, 2);  /* 0C05D77A mov.l @Rm+,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C05D77Eu, 1);  /* 0C05D77C mov.b @Rm,Rn */
	r1 &= r3;  /* 0C05D77E and Rm,Rn */
	r0 |= r1;  /* 0C05D780 or Rm,Rn */
	IF(0x0C05D782u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C05D782 rotl Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05D786u, 4);  /* 0C05D784 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C05D788u, 1);  /* 0C05D786 mov.l @(disp,pc),Rn */
L_0C05D788: BLKS(0x0C05D788u);
	SPIN_SAVE(0C05D788);
	IF(0x0C05D788u); ;  /* 0C05D788 nop */
	IF(0x0C05D78Au); r9 -= 1; T = r9 == 0;  /* 0C05D78A dt Rn */
	{ u32 c_ = !T; IF(0x0C05D78Eu); ; /* slot nop */ if (c_) { SPIN_FFD(0C05D788, 5); UPD(0x0C05D788u, 5); goto L_0C05D788; } goto L_0C05D790; }  /* 0C05D78C bf/s */
L_0C05D790: BLKS(0x0C05D790u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05D792u, 2);  /* 0C05D790 mov.l @Rm+,Rn */
	r5 = 0x6u; UPD(0x0C05D794u, 1);  /* 0C05D792 mov.l @(disp,pc),Rn */
	IF(0x0C05D794u); r6 -= 1; T = r6 == 0;  /* 0C05D794 dt Rn */
	{ u32 c_ = !T; W8(r7, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05D75Cu, 4); goto L_0C05D75C; } UPD(0x0C05D79Au, 1); goto L_0C05D79A; }  /* 0C05D796 bf/s */
L_0C05D79A: BLKS(0x0C05D79Au);
	IF(0x0C05D79Au); T = r0 & 1; r0 = (r0 >> 1) | (T << 31);  /* 0C05D79A rotr Rn */
	r6 = 0x2u; UPD(0x0C05D79Eu, 2);  /* 0C05D79C mov.l @(disp,pc),Rn */
	IF(0x0C05D79Eu); PR = R32(r15); r15 += 4; UPD(0x0C05D7A0u, 1);  /* 0C05D79E lds.l @Rn+,pr */
	IF(0x0C05D7A0u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D7A0 rts */
}

/* FUN_0c05d7cc */
void blk_f_0C05D7CC(sh3_t *c)
{
	LOCALS;
L_0C05D7CC: BLKS(0x0C05D7CCu);
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05D7CEu, 1);  /* 0C05D7CC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05D7D0u, 1);  /* 0C05D7CE mov.l Rm,@-Rn */
	IF(0x0C05D7D0u); r15 -= 4; W32(r15, PR); UPD(0x0C05D7D2u, 1);  /* 0C05D7D0 sts.l pr,@-Rn */
	r12 = 0x1u; UPD(0x0C05D7D4u, 1);  /* 0C05D7D2 mov.l @(disp,pc),Rn */
	r13 = r4;  /* 0C05D7D4 mov Rm,Rn */
	r0 = 0x0u; UPD(0x0C05D7D8u, 2);  /* 0C05D7D6 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D7DAu, 1);  /* 0C05D7D8 mov.l @(disp,pc),Rn */
	IF(0x0C05D7DAu); { u32 t_ = r6; PR = 0x0C05D7DEu; IF(0x0C05D7DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D7DEu); }  /* 0C05D7DA jsr @Rn */
L_0C05D7DE: BLKS(0x0C05D7DEu);
	W8(r13, r0); UPD(0x0C05D7E0u, 1);  /* 0C05D7DE mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D7E0 add #imm,Rn */
	r5 = 0xFu; UPD(0x0C05D7E4u, 2);  /* 0C05D7E2 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C05D7E4 mov Rm,Rn */
	r1 &= r5;  /* 0C05D7E6 and Rm,Rn */
	IF(0x0C05D7E8u); r0 >>= 2;  /* 0C05D7E8 shlr2 Rn */
	IF(0x0C05D7EAu); r0 >>= 2;  /* 0C05D7EA shlr2 Rn */
	r0 &= r5;  /* 0C05D7EC and Rm,Rn */
	r4 = 0x9u; UPD(0x0C05D7F0u, 6);  /* 0C05D7EE mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D7F0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D7F4u); ; /* slot nop */ if (c_) { UPD(0x0C05D7F8u, 4); goto L_0C05D7F8; } goto L_0C05D7F6; }  /* 0C05D7F2 bf/s */
L_0C05D7F6: BLKS(0x0C05D7F6u);
	r12 = 0x0u; UPD(0x0C05D7F8u, 2);  /* 0C05D7F6 mov.l @(disp,pc),Rn */
L_0C05D7F8: BLKS(0x0C05D7F8u);
	r4 = 0x5u; UPD(0x0C05D7FAu, 1);  /* 0C05D7F8 mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C05D7FA cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D7FEu); ; /* slot nop */ if (c_) { UPD(0x0C05D802u, 4); goto L_0C05D802; } goto L_0C05D800; }  /* 0C05D7FC bf/s */
L_0C05D800: BLKS(0x0C05D800u);
	r12 = 0x0u; UPD(0x0C05D802u, 2);  /* 0C05D800 mov.l @(disp,pc),Rn */
L_0C05D802: BLKS(0x0C05D802u);
	r0 = 0x1u; UPD(0x0C05D804u, 1);  /* 0C05D802 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D806u, 1);  /* 0C05D804 mov.l @(disp,pc),Rn */
	IF(0x0C05D806u); { u32 t_ = r6; PR = 0x0C05D80Au; IF(0x0C05D808u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D80Au); }  /* 0C05D806 jsr @Rn */
L_0C05D80A: BLKS(0x0C05D80Au);
	W8(r13, r0); UPD(0x0C05D80Cu, 1);  /* 0C05D80A mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D80C add #imm,Rn */
	r5 = 0xFu; UPD(0x0C05D810u, 2);  /* 0C05D80E mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C05D810 mov Rm,Rn */
	r1 &= r5;  /* 0C05D812 and Rm,Rn */
	IF(0x0C05D814u); r0 >>= 2;  /* 0C05D814 shlr2 Rn */
	IF(0x0C05D816u); r0 >>= 2;  /* 0C05D816 shlr2 Rn */
	r0 &= r5;  /* 0C05D818 and Rm,Rn */
	r4 = 0x9u; UPD(0x0C05D81Cu, 6);  /* 0C05D81A mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D81C cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D820u); ; /* slot nop */ if (c_) { UPD(0x0C05D824u, 4); goto L_0C05D824; } goto L_0C05D822; }  /* 0C05D81E bf/s */
L_0C05D822: BLKS(0x0C05D822u);
	r12 = 0x0u; UPD(0x0C05D824u, 2);  /* 0C05D822 mov.l @(disp,pc),Rn */
L_0C05D824: BLKS(0x0C05D824u);
	r4 = 0x5u; UPD(0x0C05D826u, 1);  /* 0C05D824 mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C05D826 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D82Au); ; /* slot nop */ if (c_) { UPD(0x0C05D82Eu, 4); goto L_0C05D82E; } goto L_0C05D82C; }  /* 0C05D828 bf/s */
L_0C05D82C: BLKS(0x0C05D82Cu);
	r12 = 0x0u; UPD(0x0C05D82Eu, 2);  /* 0C05D82C mov.l @(disp,pc),Rn */
L_0C05D82E: BLKS(0x0C05D82Eu);
	r0 = 0x2u; UPD(0x0C05D830u, 1);  /* 0C05D82E mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D832u, 1);  /* 0C05D830 mov.l @(disp,pc),Rn */
	IF(0x0C05D832u); { u32 t_ = r6; PR = 0x0C05D836u; IF(0x0C05D834u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D836u); }  /* 0C05D832 jsr @Rn */
L_0C05D836: BLKS(0x0C05D836u);
	W8(r13, r0); UPD(0x0C05D838u, 1);  /* 0C05D836 mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D838 add #imm,Rn */
	r5 = 0xFu; UPD(0x0C05D83Cu, 2);  /* 0C05D83A mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C05D83C mov Rm,Rn */
	r1 &= r5;  /* 0C05D83E and Rm,Rn */
	IF(0x0C05D840u); r0 >>= 2;  /* 0C05D840 shlr2 Rn */
	IF(0x0C05D842u); r0 >>= 2;  /* 0C05D842 shlr2 Rn */
	r0 &= r5;  /* 0C05D844 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D848u, 6);  /* 0C05D846 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D848 mulu.w Rm,Rn */
	IF(0x0C05D84Au); r4 = MACL;  /* 0C05D84A sts macl,Rn */
	r1 += r4;  /* 0C05D84C add Rm,Rn */
	r4 = 0x17u; UPD(0x0C05D850u, 5);  /* 0C05D84E mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D850 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D854u); ; /* slot nop */ if (c_) { UPD(0x0C05D858u, 4); goto L_0C05D858; } goto L_0C05D856; }  /* 0C05D852 bf/s */
L_0C05D856: BLKS(0x0C05D856u);
	r12 = 0x0u; UPD(0x0C05D858u, 2);  /* 0C05D856 mov.l @(disp,pc),Rn */
L_0C05D858: BLKS(0x0C05D858u);
	r0 = 0x3u; UPD(0x0C05D85Au, 1);  /* 0C05D858 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D85Cu, 1);  /* 0C05D85A mov.l @(disp,pc),Rn */
	IF(0x0C05D85Cu); { u32 t_ = r6; PR = 0x0C05D860u; IF(0x0C05D85Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D860u); }  /* 0C05D85C jsr @Rn */
L_0C05D860: BLKS(0x0C05D860u);
	W8(r13, r0); UPD(0x0C05D862u, 1);  /* 0C05D860 mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D862 add #imm,Rn */
	r0 = 0x4u; UPD(0x0C05D866u, 2);  /* 0C05D864 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D868u, 1);  /* 0C05D866 mov.l @(disp,pc),Rn */
	IF(0x0C05D868u); { u32 t_ = r6; PR = 0x0C05D86Cu; IF(0x0C05D86Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D86Cu); }  /* 0C05D868 jsr @Rn */
L_0C05D86C: BLKS(0x0C05D86Cu);
	W8(r13, r0); UPD(0x0C05D86Eu, 1);  /* 0C05D86C mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D86E add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C05D870 tst Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05D890u, 5); goto L_0C05D890; } goto L_0C05D876; }  /* 0C05D872 bt/s */
L_0C05D876: BLKS(0x0C05D876u);
	r5 = 0xFu; UPD(0x0C05D878u, 2);  /* 0C05D876 mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C05D878 and Rm,Rn */
	IF(0x0C05D87Au); r0 >>= 2;  /* 0C05D87A shlr2 Rn */
	IF(0x0C05D87Cu); r0 >>= 2;  /* 0C05D87C shlr2 Rn */
	r0 &= r5;  /* 0C05D87E and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D882u, 5);  /* 0C05D880 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D882 mulu.w Rm,Rn */
	IF(0x0C05D884u); r4 = MACL;  /* 0C05D884 sts macl,Rn */
	r1 += r4;  /* 0C05D886 add Rm,Rn */
	r4 = 0x1Fu; UPD(0x0C05D88Au, 5);  /* 0C05D888 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D88A cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D88Eu); ; /* slot nop */ if (c_) { UPD(0x0C05D892u, 4); goto L_0C05D892; } UPD(0x0C05D890u, 1); goto L_0C05D890; }  /* 0C05D88C bf/s */
L_0C05D890: BLKS(0x0C05D890u);
	r12 = 0x0u; UPD(0x0C05D892u, 1);  /* 0C05D890 mov.l @(disp,pc),Rn */
L_0C05D892: BLKS(0x0C05D892u);
	r0 = 0x5u; UPD(0x0C05D894u, 1);  /* 0C05D892 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D896u, 1);  /* 0C05D894 mov.l @(disp,pc),Rn */
	IF(0x0C05D896u); { u32 t_ = r6; PR = 0x0C05D89Au; IF(0x0C05D898u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D89Au); }  /* 0C05D896 jsr @Rn */
L_0C05D89A: BLKS(0x0C05D89Au);
	W8(r13, r0); UPD(0x0C05D89Cu, 1);  /* 0C05D89A mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C05D89C add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C05D89E tst Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05D8BEu, 5); goto L_0C05D8BE; } goto L_0C05D8A4; }  /* 0C05D8A0 bt/s */
L_0C05D8A4: BLKS(0x0C05D8A4u);
	r5 = 0xFu; UPD(0x0C05D8A6u, 2);  /* 0C05D8A4 mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C05D8A6 and Rm,Rn */
	IF(0x0C05D8A8u); r0 >>= 2;  /* 0C05D8A8 shlr2 Rn */
	IF(0x0C05D8AAu); r0 >>= 2;  /* 0C05D8AA shlr2 Rn */
	r0 &= r5;  /* 0C05D8AC and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D8B0u, 5);  /* 0C05D8AE mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D8B0 mulu.w Rm,Rn */
	IF(0x0C05D8B2u); r4 = MACL;  /* 0C05D8B2 sts macl,Rn */
	r1 += r4;  /* 0C05D8B4 add Rm,Rn */
	r4 = 0xCu; UPD(0x0C05D8B8u, 5);  /* 0C05D8B6 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D8B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D8BCu); ; /* slot nop */ if (c_) { UPD(0x0C05D8C0u, 4); goto L_0C05D8C0; } UPD(0x0C05D8BEu, 1); goto L_0C05D8BE; }  /* 0C05D8BA bf/s */
L_0C05D8BE: BLKS(0x0C05D8BEu);
	r12 = 0x0u; UPD(0x0C05D8C0u, 1);  /* 0C05D8BE mov.l @(disp,pc),Rn */
L_0C05D8C0: BLKS(0x0C05D8C0u);
	r0 = 0x6u; UPD(0x0C05D8C2u, 1);  /* 0C05D8C0 mov.l @(disp,pc),Rn */
	r6 = 0xC05D5B4u; UPD(0x0C05D8C4u, 1);  /* 0C05D8C2 mov.l @(disp,pc),Rn */
	IF(0x0C05D8C4u); { u32 t_ = r6; PR = 0x0C05D8C8u; IF(0x0C05D8C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D5B4, 0x0C05D5B4u, 0x0C05D8C8u); }  /* 0C05D8C4 jsr @Rn */
L_0C05D8C8: BLKS(0x0C05D8C8u);
	W8(r13, r0); UPD(0x0C05D8CAu, 1);  /* 0C05D8C8 mov.b Rm,@Rn */
	r1 = r0;  /* 0C05D8CA mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C05D8CEu, 2);  /* 0C05D8CC mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C05D8CE and Rm,Rn */
	IF(0x0C05D8D0u); r0 >>= 2;  /* 0C05D8D0 shlr2 Rn */
	IF(0x0C05D8D2u); r0 >>= 2;  /* 0C05D8D2 shlr2 Rn */
	r0 &= r5;  /* 0C05D8D4 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D8D8u, 5);  /* 0C05D8D6 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D8D8 mulu.w Rm,Rn */
	IF(0x0C05D8DAu); r4 = MACL;  /* 0C05D8DA sts macl,Rn */
	r1 += r4;  /* 0C05D8DC add Rm,Rn */
	r4 = 0x4u; UPD(0x0C05D8E0u, 5);  /* 0C05D8DE mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C05D8E0 cmp/ge Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D8E4u); ; /* slot nop */ if (c_) { UPD(0x0C05D8EEu, 4); goto L_0C05D8EE; } goto L_0C05D8E6; }  /* 0C05D8E2 bf/s */
L_0C05D8E6: BLKS(0x0C05D8E6u);
	r4 = 0x63u; UPD(0x0C05D8E8u, 2);  /* 0C05D8E6 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05D8E8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D8ECu); ; /* slot nop */ if (c_) { UPD(0x0C05D8F0u, 4); goto L_0C05D8F0; } UPD(0x0C05D8EEu, 1); goto L_0C05D8EE; }  /* 0C05D8EA bf/s */
L_0C05D8EE: BLKS(0x0C05D8EEu);
	r12 = 0x0u; UPD(0x0C05D8F0u, 1);  /* 0C05D8EE mov.l @(disp,pc),Rn */
L_0C05D8F0: BLKS(0x0C05D8F0u);
	r0 = r12;  /* 0C05D8F0 mov Rm,Rn */
	IF(0x0C05D8F2u); PR = R32(r15); r15 += 4; UPD(0x0C05D8F4u, 2);  /* 0C05D8F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05D8F6u, 1);  /* 0C05D8F4 mov.l @Rm+,Rn */
	IF(0x0C05D8F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r12 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D8F6 rts */
}

/* FUN_0c05d938 */
void blk_f_0C05D938(sh3_t *c)
{
	LOCALS;
L_0C05D938: BLKS(0x0C05D938u);
	r0 = 0x0u; UPD(0x0C05D93Au, 1);  /* 0C05D938 mov.l @(disp,pc),Rn */
	IF(0x0C05D93Au); PR = R32(r15); r15 += 4; UPD(0x0C05D93Cu, 1);  /* 0C05D93A lds.l @Rn+,pr */
	IF(0x0C05D93Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D93C rts */
}

/* FUN_0c05d944 */
void blk_f_0C05D944(sh3_t *c)
{
	LOCALS;
	goto L_0C05D944;
L_0C05D938: BLKS(0x0C05D938u);
	r0 = 0x0u; UPD(0x0C05D93Au, 1);  /* 0C05D938 mov.l @(disp,pc),Rn */
	IF(0x0C05D93Au); PR = R32(r15); r15 += 4; UPD(0x0C05D93Cu, 1);  /* 0C05D93A lds.l @Rn+,pr */
	IF(0x0C05D93Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D93C rts */
L_0C05D944: BLKS(0x0C05D944u);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05D946u, 1);  /* 0C05D944 mov.l Rm,@-Rn */
	IF(0x0C05D946u); r15 -= 4; W32(r15, PR); UPD(0x0C05D948u, 1);  /* 0C05D946 sts.l pr,@-Rn */
	r13 = r4;  /* 0C05D948 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D94Cu, 2);  /* 0C05D94A mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C05D94Eu, 1);  /* 0C05D94C mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C05D94E mov Rm,Rn */
	r0 = r1;  /* 0C05D950 mov Rm,Rn */
	r2 &= r5;  /* 0C05D952 and Rm,Rn */
	IF(0x0C05D954u); r0 >>= 2;  /* 0C05D954 shlr2 Rn */
	IF(0x0C05D956u); r0 >>= 2;  /* 0C05D956 shlr2 Rn */
	r0 &= r5;  /* 0C05D958 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D95Cu, 7);  /* 0C05D95A mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D95C mulu.w Rm,Rn */
	IF(0x0C05D95Eu); r4 = MACL;  /* 0C05D95E sts macl,Rn */
	r2 += r4;  /* 0C05D960 add Rm,Rn */
	r4 = 0x3Bu; UPD(0x0C05D964u, 5);  /* 0C05D962 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05D964 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C05D968u); ; /* slot nop */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05D96A; }  /* 0C05D966 bt/s */
L_0C05D96A: BLKS(0x0C05D96Au);
	r0 = 0x0u; UPD(0x0C05D96Cu, 2);  /* 0C05D96A mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D96Eu, 1);  /* 0C05D96C mov.l @(disp,pc),Rn */
	IF(0x0C05D96Eu); { u32 t_ = r6; PR = 0x0C05D972u; IF(0x0C05D970u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D972u); }  /* 0C05D96E jsr @Rn */
L_0C05D972: BLKS(0x0C05D972u);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D974u, 1);  /* 0C05D972 mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C05D976u, 1);  /* 0C05D974 mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C05D976 mov Rm,Rn */
	r0 = r1;  /* 0C05D978 mov Rm,Rn */
	r2 &= r5;  /* 0C05D97A and Rm,Rn */
	IF(0x0C05D97Cu); r0 >>= 2;  /* 0C05D97C shlr2 Rn */
	IF(0x0C05D97Eu); r0 >>= 2;  /* 0C05D97E shlr2 Rn */
	r0 &= r5;  /* 0C05D980 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D984u, 7);  /* 0C05D982 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D984 mulu.w Rm,Rn */
	IF(0x0C05D986u); r4 = MACL;  /* 0C05D986 sts macl,Rn */
	r2 += r4;  /* 0C05D988 add Rm,Rn */
	r4 = 0x3Bu; UPD(0x0C05D98Cu, 5);  /* 0C05D98A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05D98C cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C05D990u); ; /* slot nop */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05D992; }  /* 0C05D98E bt/s */
L_0C05D992: BLKS(0x0C05D992u);
	r0 = 0x1u; UPD(0x0C05D994u, 2);  /* 0C05D992 mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D996u, 1);  /* 0C05D994 mov.l @(disp,pc),Rn */
	IF(0x0C05D996u); { u32 t_ = r6; PR = 0x0C05D99Au; IF(0x0C05D998u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D99Au); }  /* 0C05D996 jsr @Rn */
L_0C05D99A: BLKS(0x0C05D99Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D99Cu, 1);  /* 0C05D99A mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C05D99Eu, 1);  /* 0C05D99C mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C05D99E mov Rm,Rn */
	r0 = r1;  /* 0C05D9A0 mov Rm,Rn */
	r2 &= r5;  /* 0C05D9A2 and Rm,Rn */
	IF(0x0C05D9A4u); r0 >>= 2;  /* 0C05D9A4 shlr2 Rn */
	IF(0x0C05D9A6u); r0 >>= 2;  /* 0C05D9A6 shlr2 Rn */
	r0 &= r5;  /* 0C05D9A8 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D9ACu, 7);  /* 0C05D9AA mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D9AC mulu.w Rm,Rn */
	IF(0x0C05D9AEu); r4 = MACL;  /* 0C05D9AE sts macl,Rn */
	r2 += r4;  /* 0C05D9B0 add Rm,Rn */
	r4 = 0x17u; UPD(0x0C05D9B4u, 5);  /* 0C05D9B2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05D9B4 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C05D9B8u); ; /* slot nop */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05D9BA; }  /* 0C05D9B6 bt/s */
L_0C05D9BA: BLKS(0x0C05D9BAu);
	r0 = 0x2u; UPD(0x0C05D9BCu, 2);  /* 0C05D9BA mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D9BEu, 1);  /* 0C05D9BC mov.l @(disp,pc),Rn */
	IF(0x0C05D9BEu); { u32 t_ = r6; PR = 0x0C05D9C2u; IF(0x0C05D9C0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D9C2u); }  /* 0C05D9BE jsr @Rn */
L_0C05D9C2: BLKS(0x0C05D9C2u);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D9C4u, 1);  /* 0C05D9C2 mov.b @Rm+,Rn */
	r0 = 0x3u; UPD(0x0C05D9C6u, 1);  /* 0C05D9C4 mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D9C8u, 1);  /* 0C05D9C6 mov.l @(disp,pc),Rn */
	IF(0x0C05D9C8u); { u32 t_ = r6; PR = 0x0C05D9CCu; IF(0x0C05D9CAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D9CCu); }  /* 0C05D9C8 jsr @Rn */
L_0C05D9CC: BLKS(0x0C05D9CCu);
	r1 = 0x0u; UPD(0x0C05D9CEu, 1);  /* 0C05D9CC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D9D0u, 1);  /* 0C05D9CE mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C05D9D0 tst Rm,Rn */
	{ u32 c_ = T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05D9D6; }  /* 0C05D9D2 bt/s */
L_0C05D9D6: BLKS(0x0C05D9D6u);
	r0 = r1;  /* 0C05D9D6 mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C05D9DAu, 3);  /* 0C05D9D8 mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C05D9DA and Rm,Rn */
	IF(0x0C05D9DCu); r0 >>= 2;  /* 0C05D9DC shlr2 Rn */
	IF(0x0C05D9DEu); r0 >>= 2;  /* 0C05D9DE shlr2 Rn */
	r0 &= r5;  /* 0C05D9E0 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05D9E4u, 5);  /* 0C05D9E2 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05D9E4 mulu.w Rm,Rn */
	IF(0x0C05D9E6u); r4 = MACL;  /* 0C05D9E6 sts macl,Rn */
	r2 += r4;  /* 0C05D9E8 add Rm,Rn */
	r4 = 0x1Fu; UPD(0x0C05D9ECu, 5);  /* 0C05D9EA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05D9EC cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C05D9F0u); ; /* slot nop */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05D9F2; }  /* 0C05D9EE bt/s */
L_0C05D9F2: BLKS(0x0C05D9F2u);
	r0 = 0x4u; UPD(0x0C05D9F4u, 2);  /* 0C05D9F2 mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05D9F6u, 1);  /* 0C05D9F4 mov.l @(disp,pc),Rn */
	IF(0x0C05D9F6u); { u32 t_ = r6; PR = 0x0C05D9FAu; IF(0x0C05D9F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05D9FAu); }  /* 0C05D9F6 jsr @Rn */
L_0C05D9FA: BLKS(0x0C05D9FAu);
	r1 = 0x0u; UPD(0x0C05D9FCu, 1);  /* 0C05D9FA mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05D9FEu, 1);  /* 0C05D9FC mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C05D9FE tst Rm,Rn */
	{ u32 c_ = T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05DA04; }  /* 0C05DA00 bt/s */
L_0C05DA04: BLKS(0x0C05DA04u);
	r0 = r1;  /* 0C05DA04 mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C05DA08u, 3);  /* 0C05DA06 mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C05DA08 and Rm,Rn */
	IF(0x0C05DA0Au); r0 >>= 2;  /* 0C05DA0A shlr2 Rn */
	IF(0x0C05DA0Cu); r0 >>= 2;  /* 0C05DA0C shlr2 Rn */
	r0 &= r5;  /* 0C05DA0E and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05DA12u, 5);  /* 0C05DA10 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05DA12 mulu.w Rm,Rn */
	IF(0x0C05DA14u); r4 = MACL;  /* 0C05DA14 sts macl,Rn */
	r2 += r4;  /* 0C05DA16 add Rm,Rn */
	r4 = 0xCu; UPD(0x0C05DA1Au, 5);  /* 0C05DA18 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05DA1A cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C05DA1Eu); ; /* slot nop */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05DA20; }  /* 0C05DA1C bt/s */
L_0C05DA20: BLKS(0x0C05DA20u);
	r0 = 0x5u; UPD(0x0C05DA22u, 2);  /* 0C05DA20 mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05DA24u, 1);  /* 0C05DA22 mov.l @(disp,pc),Rn */
	IF(0x0C05DA24u); { u32 t_ = r6; PR = 0x0C05DA28u; IF(0x0C05DA26u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05DA28u); }  /* 0C05DA24 jsr @Rn */
L_0C05DA28: BLKS(0x0C05DA28u);
	r1 = 0x0u; UPD(0x0C05DA2Au, 1);  /* 0C05DA28 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C05DA2Cu, 1);  /* 0C05DA2A mov.b @Rm+,Rn */
	r4 = 0x4u; UPD(0x0C05DA2Eu, 1);  /* 0C05DA2C mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C05DA2E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); } goto L_0C05DA34; }  /* 0C05DA30 bf/s */
L_0C05DA34: BLKS(0x0C05DA34u);
	r0 = r1;  /* 0C05DA34 mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C05DA38u, 3);  /* 0C05DA36 mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C05DA38 and Rm,Rn */
	IF(0x0C05DA3Au); r0 >>= 2;  /* 0C05DA3A shlr2 Rn */
	IF(0x0C05DA3Cu); r0 >>= 2;  /* 0C05DA3C shlr2 Rn */
	r0 &= r5;  /* 0C05DA3E and Rm,Rn */
	r4 = 0xAu; UPD(0x0C05DA42u, 5);  /* 0C05DA40 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C05DA42 mulu.w Rm,Rn */
	IF(0x0C05DA44u); r4 = MACL;  /* 0C05DA44 sts macl,Rn */
	r2 += r4;  /* 0C05DA46 add Rm,Rn */
	r4 = 0x63u; UPD(0x0C05DA4Au, 5);  /* 0C05DA48 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05DA4A cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05DA4Eu); ; /* slot nop */ if (c_) { UPD(0x0C05DA8Cu, 4); goto L_0C05DA8C; } goto L_0C05DA50; }  /* 0C05DA4C bf/s */
L_0C05DA50: BLKS(0x0C05DA50u);
	{ IF(0x0C05DA52u); ; /* slot nop */ UPD(0x0C05D938u, 4); TAIL(blk_f_0C05D938); }  /* 0C05DA50 bra */
L_0C05DA8C: BLKS(0x0C05DA8Cu);
	r0 = 0x6u; UPD(0x0C05DA8Eu, 1);  /* 0C05DA8C mov.l @(disp,pc),Rn */
	r6 = 0xC05D53Cu; UPD(0x0C05DA90u, 1);  /* 0C05DA8E mov.l @(disp,pc),Rn */
	IF(0x0C05DA90u); { u32 t_ = r6; PR = 0x0C05DA94u; IF(0x0C05DA92u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D53C, 0x0C05D53Cu, 0x0C05DA94u); }  /* 0C05DA90 jsr @Rn */
L_0C05DA94: BLKS(0x0C05DA94u);
	r0 = 0x1u; UPD(0x0C05DA96u, 1);  /* 0C05DA94 mov.l @(disp,pc),Rn */
	IF(0x0C05DA96u); PR = R32(r15); r15 += 4; UPD(0x0C05DA98u, 1);  /* 0C05DA96 lds.l @Rn+,pr */
	IF(0x0C05DA98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05DA98 rts */
}

/* rtc_eeprom_write */
void blk_f_0C05DAA8(sh3_t *c)
{
	LOCALS;
L_0C05DAA8: BLKS(0x0C05DAA8u);
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05DAAAu, 1);  /* 0C05DAA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05DAACu, 1);  /* 0C05DAAA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05DAAEu, 1);  /* 0C05DAAC mov.l Rm,@-Rn */
	IF(0x0C05DAAEu); r15 -= 4; W32(r15, PR); UPD(0x0C05DAB0u, 1);  /* 0C05DAAE sts.l pr,@-Rn */
	r13 = r6;  /* 0C05DAB0 mov Rm,Rn */
	IF(0x0C05DAB2u); T = r13 & 1; r13 >>= 1;  /* 0C05DAB2 shlr Rn */
	r12 = r5;  /* 0C05DAB4 mov Rm,Rn */
	r11 = r4;  /* 0C05DAB6 mov Rm,Rn */
	UPD(0x0C05DAB8u, 4);
L_0C05DAB8: BLKS(0x0C05DAB8u);
	r1 = (u32)(s32)(s16)R16(r11); UPD(0x0C05DABAu, 1);  /* 0C05DAB8 mov.w @Rm,Rn */
	r6 = 0xC05D62Cu; UPD(0x0C05DABCu, 1);  /* 0C05DABA mov.l @(disp,pc),Rn */
	IF(0x0C05DABCu); { u32 t_ = r6; PR = 0x0C05DAC0u; r0 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05D62C, 0x0C05D62Cu, 0x0C05DAC0u); }  /* 0C05DABC jsr @Rn */
L_0C05DAC0: BLKS(0x0C05DAC0u);
	r11 += 0x2u;  /* 0C05DAC0 add #imm,Rn */
	IF(0x0C05DAC2u); r13 -= 1; T = r13 == 0;  /* 0C05DAC2 dt Rn */
	{ u32 c_ = !T; r12 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05DAB8u, 5); goto L_0C05DAB8; } goto L_0C05DAC8; }  /* 0C05DAC4 bf/s */
L_0C05DAC8: BLKS(0x0C05DAC8u);
	r0 = 0x1u; UPD(0x0C05DACAu, 2);  /* 0C05DAC8 mov.l @(disp,pc),Rn */
	IF(0x0C05DACAu); PR = R32(r15); r15 += 4; UPD(0x0C05DACCu, 1);  /* 0C05DACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05DACEu, 1);  /* 0C05DACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05DAD0u, 1);  /* 0C05DACE mov.l @Rm+,Rn */
	IF(0x0C05DAD0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05DAD0 rts */
}

/* rtc_eeprom_read */
void blk_f_0C05DADC(sh3_t *c)
{
	LOCALS;
L_0C05DADC: BLKS(0x0C05DADCu);
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05DADEu, 1);  /* 0C05DADC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05DAE0u, 1);  /* 0C05DADE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05DAE2u, 1);  /* 0C05DAE0 mov.l Rm,@-Rn */
	IF(0x0C05DAE2u); r15 -= 4; W32(r15, PR); UPD(0x0C05DAE4u, 1);  /* 0C05DAE2 sts.l pr,@-Rn */
	r13 = r6;  /* 0C05DAE4 mov Rm,Rn */
	IF(0x0C05DAE6u); T = r13 & 1; r13 >>= 1;  /* 0C05DAE6 shlr Rn */
	r12 = r5;  /* 0C05DAE8 mov Rm,Rn */
	r11 = r4;  /* 0C05DAEA mov Rm,Rn */
	UPD(0x0C05DAECu, 4);
L_0C05DAEC: BLKS(0x0C05DAECu);
	r6 = 0xC05D6FCu; UPD(0x0C05DAEEu, 1);  /* 0C05DAEC mov.l @(disp,pc),Rn */
	IF(0x0C05DAEEu); { u32 t_ = r6; PR = 0x0C05DAF2u; r0 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05D6FC, 0x0C05D6FCu, 0x0C05DAF2u); }  /* 0C05DAEE jsr @Rn */
L_0C05DAF2: BLKS(0x0C05DAF2u);
	W16(r11, r0); UPD(0x0C05DAF4u, 1);  /* 0C05DAF2 mov.w Rm,@Rn */
	r11 += 0x2u;  /* 0C05DAF4 add #imm,Rn */
	IF(0x0C05DAF6u); r13 -= 1; T = r13 == 0;  /* 0C05DAF6 dt Rn */
	{ u32 c_ = !T; r12 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05DAECu, 5); goto L_0C05DAEC; } goto L_0C05DAFC; }  /* 0C05DAF8 bf/s */
L_0C05DAFC: BLKS(0x0C05DAFCu);
	IF(0x0C05DAFCu); PR = R32(r15); r15 += 4; UPD(0x0C05DAFEu, 2);  /* 0C05DAFC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05DB00u, 1);  /* 0C05DAFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05DB02u, 1);  /* 0C05DB00 mov.l @Rm+,Rn */
	IF(0x0C05DB02u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05DB02 rts */
}

void blk_f_0C05F8F4(sh3_t *c)
{
	LOCALS;
L_0C05F8F4: BLKS(0x0C05F8F4u);
	r0 = 0xC05F8E8u; UPD(0x0C05F8F6u, 1);  /* 0C05F8F4 mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C05F8F8u, 1);  /* 0C05F8F6 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05F8F8 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05F8FCu); ; /* slot nop */ if (c_) { UPD(0x0C05F914u, 4); goto L_0C05F914; } goto L_0C05F8FE; }  /* 0C05F8FA bf/s */
L_0C05F8FE: BLKS(0x0C05F8FEu);
	r0 = 0xC05F8E4u; UPD(0x0C05F900u, 2);  /* 0C05F8FE mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05F902u, 1);  /* 0C05F900 mov.l @(disp,pc),Rn */
	IF(0x0C05F902u); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05F902 rts */
L_0C05F914: BLKS(0x0C05F914u);
	IF(0x0C05F914u); r15 -= 4; W32(r15, PR); UPD(0x0C05F916u, 1);  /* 0C05F914 sts.l pr,@-Rn */
	r0 = 0xC05F8ECu; UPD(0x0C05F918u, 1);  /* 0C05F916 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r0); r0 += 4; r1 = v_; } UPD(0x0C05F91Au, 1);  /* 0C05F918 mov.l @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C05F91A tst Rm,Rn */
	{ u32 c_ = T; r4 = R32(r0); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05F924u, 4); goto L_0C05F924; } UPD(0x0C05F920u, 1); goto L_0C05F920; }  /* 0C05F91C bt/s */
L_0C05F920: BLKS(0x0C05F920u);
	IF(0x0C05F920u); { u32 t_ = r1; PR = 0x0C05F924u; IF(0x0C05F922u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C05F924u); }  /* 0C05F920 jsr @Rn */
L_0C05F924: BLKS(0x0C05F924u);
	r0 = 0xC05F8E4u; UPD(0x0C05F926u, 1);  /* 0C05F924 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C05F928u, 1);  /* 0C05F926 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05F92Au, 1);  /* 0C05F928 mov.l Rm,@Rn */
	r7 = 0xC05F70Cu; UPD(0x0C05F92Cu, 1);  /* 0C05F92A mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C05F92Eu, 1);  /* 0C05F92C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05F92E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05F932u); ; /* slot nop */ if (c_) { UPD(0x0C05F948u, 4); goto L_0C05F948; } goto L_0C05F934; }  /* 0C05F930 bt/s */
L_0C05F934: BLKS(0x0C05F934u);
	{ IF(0x0C05F936u); ; /* slot nop */ UPD(0x0C05FA9Au, 4); goto L_0C05FA9A; }  /* 0C05F934 bra */
L_0C05F948: BLKS(0x0C05F948u);
	r1 = 0x1u; UPD(0x0C05F94Au, 1);  /* 0C05F948 mov.l @(disp,pc),Rn */
	r5 = R32(r7 + 0x0u); UPD(0x0C05F94Cu, 1);  /* 0C05F94A mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x4u); UPD(0x0C05F94Eu, 1);  /* 0C05F94C mov.l @(disp,Rm),Rn */
	T = r5 == r4;  /* 0C05F94E cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05F95Cu, 4); goto L_0C05F95C; } UPD(0x0C05F954u, 1); goto L_0C05F954; }  /* 0C05F950 bf/s */
L_0C05F954: BLKS(0x0C05F954u);
	{ IF(0x0C05F956u); ; /* slot nop */ UPD(0x0C05FA96u, 3); goto L_0C05FA96; }  /* 0C05F954 bra */
L_0C05F95C: BLKS(0x0C05F95Cu);
	r12 = 0xC05DB0Cu; UPD(0x0C05F95Eu, 1);  /* 0C05F95C mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C05F95E add Rm,Rn */
	r1 = R32(r12 + 0x10u); UPD(0x0C05F962u, 2);  /* 0C05F960 mov.l @(disp,Rm),Rn */
	r0 = 0x7u; UPD(0x0C05F964u, 1);  /* 0C05F962 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05F964 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05F968u); ; /* slot nop */ if (c_) { UPD(0x0C05F9B4u, 4); goto L_0C05F9B4; } goto L_0C05F96A; }  /* 0C05F966 bf/s */
L_0C05F96A: BLKS(0x0C05F96Au);
	r9 = 0xC05F71Cu; UPD(0x0C05F96Cu, 2);  /* 0C05F96A mov.l @(disp,pc),Rn */
	r13 = 0x8u; UPD(0x0C05F96Eu, 1);  /* 0C05F96C mov.l @(disp,pc),Rn */
L_0C05F96E: BLKS(0x0C05F96Eu);
	r4 = R32(r9 + 0x1Cu); UPD(0x0C05F970u, 1);  /* 0C05F96E mov.l @(disp,Rm),Rn */
	r1 = 0x0u; UPD(0x0C05F972u, 1);  /* 0C05F970 mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C05F974u, 1);  /* 0C05F972 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x0u, r1); UPD(0x0C05F976u, 1);  /* 0C05F974 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C05F978u, 1);  /* 0C05F976 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C05F97Au, 1);  /* 0C05F978 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05F97Cu, 1);  /* 0C05F97A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r1); UPD(0x0C05F97Eu, 1);  /* 0C05F97C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x4u, r1); UPD(0x0C05F980u, 1);  /* 0C05F97E mov.l Rm,@(disp,Rn) */
	r0 = 0xC060284u; UPD(0x0C05F982u, 1);  /* 0C05F980 mov.l @(disp,pc),Rn */
	IF(0x0C05F982u); { u32 t_ = r0; PR = 0x0C05F986u; IF(0x0C05F984u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060284, 0x0C060284u, 0x0C05F986u); }  /* 0C05F982 jsr @Rn */
L_0C05F986: BLKS(0x0C05F986u);
	r0 = 0xC060388u; UPD(0x0C05F988u, 1);  /* 0C05F986 mov.l @(disp,pc),Rn */
	IF(0x0C05F988u); { u32 t_ = r0; PR = 0x0C05F98Cu; IF(0x0C05F98Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060388, 0x0C060388u, 0x0C05F98Cu); }  /* 0C05F988 jsr @Rn */
L_0C05F98C: BLKS(0x0C05F98Cu);
	IF(0x0C05F98Cu); r13 -= 1; T = r13 == 0;  /* 0C05F98C dt Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F96Eu, 4); goto L_0C05F96E; } goto L_0C05F992; }  /* 0C05F98E bf/s */
L_0C05F992: BLKS(0x0C05F992u);
	{ IF(0x0C05F994u); ; /* slot nop */ UPD(0x0C05FA84u, 4); goto L_0C05FA84; }  /* 0C05F992 bra */
L_0C05F9B4: BLKS(0x0C05F9B4u);
	r2 = R32(r12 + 0x0u); UPD(0x0C05F9B6u, 1);  /* 0C05F9B4 mov.l @(disp,Rm),Rn */
	r9 = 0xC05F71Cu; UPD(0x0C05F9B8u, 1);  /* 0C05F9B6 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C05F9B8 add Rm,Rn */
	r1 = R32(r12 + 0x10u); UPD(0x0C05F9BCu, 2);  /* 0C05F9BA mov.l @(disp,Rm),Rn */
	r0 = 0x0u; UPD(0x0C05F9BEu, 1);  /* 0C05F9BC mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05F9BE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05F9C2u); ; /* slot nop */ if (c_) { UPD(0x0C05F9F4u, 4); goto L_0C05F9F4; } goto L_0C05F9C4; }  /* 0C05F9C0 bf/s */
L_0C05F9C4: BLKS(0x0C05F9C4u);
	r1 = 0x0u; UPD(0x0C05F9C6u, 2);  /* 0C05F9C4 mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C05F9C8u, 1);  /* 0C05F9C6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r1); UPD(0x0C05F9CAu, 1);  /* 0C05F9C8 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C05F9CCu, 1);  /* 0C05F9CA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C05F9CEu, 1);  /* 0C05F9CC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05F9D0u, 1);  /* 0C05F9CE mov.l Rm,@(disp,Rn) */
	r0 = R32(r12 + 0x14u); UPD(0x0C05F9D2u, 1);  /* 0C05F9D0 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C05F9D4u, 1);  /* 0C05F9D2 mov.l Rm,@(disp,Rn) */
	r6 = R32(r12 + 0xCu); UPD(0x0C05F9D6u, 1);  /* 0C05F9D4 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r6); UPD(0x0C05F9D8u, 1);  /* 0C05F9D6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r12 + 0x18u); UPD(0x0C05F9DAu, 1);  /* 0C05F9D8 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C05F9DCu, 1);  /* 0C05F9DA mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C05F9DEu, 1);  /* 0C05F9DC mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r5 * (u32)(u16)r1;  /* 0C05F9DE mulu.w Rm,Rn */
	IF(0x0C05F9E0u); r2 = MACL;  /* 0C05F9E0 sts macl,Rn */
	r3 = 0xC05F8DCu; UPD(0x0C05F9E4u, 4);  /* 0C05F9E2 mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C05F9E6u, 1);  /* 0C05F9E4 mov.l @Rm,Rn */
	r3 += r2;  /* 0C05F9E6 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C05F9EAu, 2);  /* 0C05F9E8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C05F9ECu, 1);  /* 0C05F9EA mov.l @(disp,Rm),Rn */
	W32(r9 + 0x0u, r1); UPD(0x0C05F9EEu, 1);  /* 0C05F9EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0602F8u; UPD(0x0C05F9F0u, 1);  /* 0C05F9EE mov.l @(disp,pc),Rn */
	IF(0x0C05F9F0u); { u32 t_ = r0; PR = 0x0C05F9F4u; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0602F8, 0x0C0602F8u, 0x0C05F9F4u); }  /* 0C05F9F0 jsr @Rn */
L_0C05F9F4: BLKS(0x0C05F9F4u);
	r1 = R32(r12 + 0x10u); UPD(0x0C05F9F6u, 1);  /* 0C05F9F4 mov.l @(disp,Rm),Rn */
	r0 = 0x1u; UPD(0x0C05F9F8u, 1);  /* 0C05F9F6 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05F9F8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05F9FCu); ; /* slot nop */ if (c_) { UPD(0x0C05FA30u, 4); goto L_0C05FA30; } goto L_0C05F9FE; }  /* 0C05F9FA bf/s */
L_0C05F9FE: BLKS(0x0C05F9FEu);
	r1 = 0x0u; UPD(0x0C05FA00u, 2);  /* 0C05F9FE mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C05FA02u, 1);  /* 0C05FA00 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C05FA04u, 1);  /* 0C05FA02 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05FA06u, 1);  /* 0C05FA04 mov.l Rm,@(disp,Rn) */
	r1 = 0x2u; UPD(0x0C05FA08u, 1);  /* 0C05FA06 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r1); UPD(0x0C05FA0Au, 1);  /* 0C05FA08 mov.l Rm,@(disp,Rn) */
	r0 = R32(r12 + 0x14u); UPD(0x0C05FA0Cu, 1);  /* 0C05FA0A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C05FA0Eu, 1);  /* 0C05FA0C mov.l Rm,@(disp,Rn) */
	r6 = R32(r12 + 0xCu); UPD(0x0C05FA10u, 1);  /* 0C05FA0E mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r6); UPD(0x0C05FA12u, 1);  /* 0C05FA10 mov.l Rm,@(disp,Rn) */
	r5 = R32(r12 + 0x18u); UPD(0x0C05FA14u, 1);  /* 0C05FA12 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C05FA16u, 1);  /* 0C05FA14 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C05FA18u, 1);  /* 0C05FA16 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r5 * (u32)(u16)r1;  /* 0C05FA18 mulu.w Rm,Rn */
	IF(0x0C05FA1Au); r2 = MACL;  /* 0C05FA1A sts macl,Rn */
	r3 = 0xC05F8DCu; UPD(0x0C05FA1Eu, 4);  /* 0C05FA1C mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C05FA20u, 1);  /* 0C05FA1E mov.l @Rm,Rn */
	r3 += r2;  /* 0C05FA20 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C05FA24u, 2);  /* 0C05FA22 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C05FA26u, 1);  /* 0C05FA24 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x0u, r1); UPD(0x0C05FA28u, 1);  /* 0C05FA26 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r1); UPD(0x0C05FA2Au, 1);  /* 0C05FA28 mov.l Rm,@(disp,Rn) */
	r0 = 0xC060340u; UPD(0x0C05FA2Cu, 1);  /* 0C05FA2A mov.l @(disp,pc),Rn */
	IF(0x0C05FA2Cu); { u32 t_ = r0; PR = 0x0C05FA30u; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060340, 0x0C060340u, 0x0C05FA30u); }  /* 0C05FA2C jsr @Rn */
L_0C05FA30: BLKS(0x0C05FA30u);
	r1 = R32(r12 + 0x10u); UPD(0x0C05FA32u, 1);  /* 0C05FA30 mov.l @(disp,Rm),Rn */
	r0 = 0x4u; UPD(0x0C05FA34u, 1);  /* 0C05FA32 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05FA34 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FA38u); ; /* slot nop */ if (c_) { UPD(0x0C05FA4Au, 4); goto L_0C05FA4A; } goto L_0C05FA3A; }  /* 0C05FA36 bf/s */
L_0C05FA3A: BLKS(0x0C05FA3Au);
	r10 = R32(r12 + 0x4u); UPD(0x0C05FA3Cu, 2);  /* 0C05FA3A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x10u, r10); UPD(0x0C05FA3Eu, 1);  /* 0C05FA3C mov.l Rm,@(disp,Rn) */
	r10 = R32(r12 + 0x8u); UPD(0x0C05FA40u, 1);  /* 0C05FA3E mov.l @(disp,Rm),Rn */
	W32(r9 + 0x14u, r10); UPD(0x0C05FA42u, 1);  /* 0C05FA40 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C05FA44u, 1);  /* 0C05FA42 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05FA46u, 1);  /* 0C05FA44 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u; UPD(0x0C05FA48u, 1);  /* 0C05FA46 mov.l @(disp,pc),Rn */
	W32(r9 + 0x20u, r1); UPD(0x0C05FA4Au, 1);  /* 0C05FA48 mov.l Rm,@(disp,Rn) */
L_0C05FA4A: BLKS(0x0C05FA4Au);
	r1 = R32(r12 + 0x10u); UPD(0x0C05FA4Cu, 1);  /* 0C05FA4A mov.l @(disp,Rm),Rn */
	r0 = 0x5u; UPD(0x0C05FA4Eu, 1);  /* 0C05FA4C mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05FA4E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FA52u); ; /* slot nop */ if (c_) { UPD(0x0C05FA5Eu, 4); goto L_0C05FA5E; } goto L_0C05FA54; }  /* 0C05FA50 bf/s */
L_0C05FA54: BLKS(0x0C05FA54u);
	r1 = R32(r12 + 0xCu); UPD(0x0C05FA56u, 2);  /* 0C05FA54 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x30u, r1); UPD(0x0C05FA58u, 1);  /* 0C05FA56 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x34u, r1); UPD(0x0C05FA5Au, 1);  /* 0C05FA58 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u; UPD(0x0C05FA5Cu, 1);  /* 0C05FA5A mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05FA5Eu, 1);  /* 0C05FA5C mov.l Rm,@(disp,Rn) */
L_0C05FA5E: BLKS(0x0C05FA5Eu);
	r1 = R32(r12 + 0x10u); UPD(0x0C05FA60u, 1);  /* 0C05FA5E mov.l @(disp,Rm),Rn */
	r0 = 0x6u; UPD(0x0C05FA62u, 1);  /* 0C05FA60 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C05FA62 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FA66u); ; /* slot nop */ if (c_) { UPD(0x0C05FA84u, 4); goto L_0C05FA84; } goto L_0C05FA68; }  /* 0C05FA64 bf/s */
L_0C05FA68: BLKS(0x0C05FA68u);
	r1 = 0x0u; UPD(0x0C05FA6Au, 2);  /* 0C05FA68 mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C05FA6Cu, 1);  /* 0C05FA6A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x0u, r1); UPD(0x0C05FA6Eu, 1);  /* 0C05FA6C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C05FA70u, 1);  /* 0C05FA6E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C05FA72u, 1);  /* 0C05FA70 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C05FA74u, 1);  /* 0C05FA72 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r1); UPD(0x0C05FA76u, 1);  /* 0C05FA74 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x4u, r1); UPD(0x0C05FA78u, 1);  /* 0C05FA76 mov.l Rm,@(disp,Rn) */
	r0 = 0xC060284u; UPD(0x0C05FA7Au, 1);  /* 0C05FA78 mov.l @(disp,pc),Rn */
	IF(0x0C05FA7Au); { u32 t_ = r0; PR = 0x0C05FA7Eu; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060284, 0x0C060284u, 0x0C05FA7Eu); }  /* 0C05FA7A jsr @Rn */
L_0C05FA7E: BLKS(0x0C05FA7Eu);
	r0 = 0xC060388u; UPD(0x0C05FA80u, 1);  /* 0C05FA7E mov.l @(disp,pc),Rn */
	IF(0x0C05FA80u); { u32 t_ = r0; PR = 0x0C05FA84u; IF(0x0C05FA82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060388, 0x0C060388u, 0x0C05FA84u); }  /* 0C05FA80 jsr @Rn */
L_0C05FA84: BLKS(0x0C05FA84u);
	r5 = R32(r7 + 0x0u); UPD(0x0C05FA86u, 1);  /* 0C05FA84 mov.l @(disp,Rm),Rn */
	r1 = 0x1Cu; UPD(0x0C05FA88u, 1);  /* 0C05FA86 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C05FA88 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C05FA8Cu, 2);  /* 0C05FA8A mov.l @(disp,pc),Rn */
	T = r5 == r2;  /* 0C05FA8C cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FA90u); ; /* slot nop */ if (c_) { UPD(0x0C05FA94u, 4); goto L_0C05FA94; } goto L_0C05FA92; }  /* 0C05FA8E bf/s */
L_0C05FA92: BLKS(0x0C05FA92u);
	r5 = 0x0u; UPD(0x0C05FA94u, 2);  /* 0C05FA92 mov.l @(disp,pc),Rn */
L_0C05FA94: BLKS(0x0C05FA94u);
	W32(r7 + 0x0u, r5); UPD(0x0C05FA96u, 1);  /* 0C05FA94 mov.l Rm,@(disp,Rn) */
L_0C05FA96: BLKS(0x0C05FA96u);
	r1 = 0x0u; UPD(0x0C05FA98u, 1);  /* 0C05FA96 mov.l @(disp,pc),Rn */
	W32(r7 + 0xCu, r1); UPD(0x0C05FA9Au, 1);  /* 0C05FA98 mov.l Rm,@(disp,Rn) */
L_0C05FA9A: BLKS(0x0C05FA9Au);
	r13 = 0xC05F71Cu; UPD(0x0C05FA9Cu, 1);  /* 0C05FA9A mov.l @(disp,pc),Rn */
	r12 = 0x8u; UPD(0x0C05FA9Eu, 1);  /* 0C05FA9C mov.l @(disp,pc),Rn */
L_0C05FA9E: BLKS(0x0C05FA9Eu);
	r4 = R32(r13 + 0x1Cu); UPD(0x0C05FAA0u, 1);  /* 0C05FA9E mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x20u); UPD(0x0C05FAA2u, 1);  /* 0C05FAA0 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05FAA2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05FAA6u); ; /* slot nop */ if (c_) { UPD(0x0C05FAFAu, 4); goto L_0C05FAFA; } goto L_0C05FAA8; }  /* 0C05FAA4 bt/s */
L_0C05FAA8: BLKS(0x0C05FAA8u);
	r7 = 0x0u; UPD(0x0C05FAAAu, 2);  /* 0C05FAA8 mov.l @(disp,pc),Rn */
	W32(r13 + 0x20u, r7); UPD(0x0C05FAACu, 1);  /* 0C05FAAA mov.l Rm,@(disp,Rn) */
L_0C05FAAC: BLKS(0x0C05FAACu);
	r10 = R32(r13 + 0x10u); UPD(0x0C05FAAEu, 1);  /* 0C05FAAC mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C05FAAE tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05FAB2u); ; /* slot nop */ if (c_) { UPD(0x0C05FAE4u, 4); goto L_0C05FAE4; } goto L_0C05FAB4; }  /* 0C05FAB0 bt/s */
L_0C05FAB4: BLKS(0x0C05FAB4u);
	r0 = R32(r13 + 0x2Cu); UPD(0x0C05FAB6u, 2);  /* 0C05FAB4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05FAB6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05FAC0u, 4); goto L_0C05FAC0; } UPD(0x0C05FABCu, 1); goto L_0C05FABC; }  /* 0C05FAB8 bf/s */
L_0C05FABC: BLKS(0x0C05FABCu);
	r0 = 0x0u; UPD(0x0C05FABEu, 1);  /* 0C05FABC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r10 + 0x2u); UPD(0x0C05FAC0u, 1);  /* 0C05FABE mov.w @(disp,Rm),r0 */
L_0C05FAC0: BLKS(0x0C05FAC0u);
	W32(r13 + 0x18u, r0); UPD(0x0C05FAC2u, 1);  /* 0C05FAC0 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r10 + 0x0u); UPD(0x0C05FAC4u, 1);  /* 0C05FAC2 mov.w @(disp,Rm),r0 */
	W32(r13 + 0x4u, r0); UPD(0x0C05FAC6u, 1);  /* 0C05FAC4 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C05FAC8u, 1);  /* 0C05FAC6 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r1;  /* 0C05FAC8 mulu.w Rm,Rn */
	IF(0x0C05FACAu); r2 = MACL;  /* 0C05FACA sts macl,Rn */
	r3 = 0xC05F8E0u; UPD(0x0C05FACEu, 4);  /* 0C05FACC mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C05FAD0u, 1);  /* 0C05FACE mov.l @Rm,Rn */
	r3 += r2;  /* 0C05FAD0 add Rm,Rn */
	W32(r13 + 0x24u, r3); UPD(0x0C05FAD4u, 2);  /* 0C05FAD2 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C05FAD6u, 1);  /* 0C05FAD4 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C05FAD8u, 1);  /* 0C05FAD6 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05FAD8 tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05FAE0u, 4); goto L_0C05FAE0; } UPD(0x0C05FADEu, 1); goto L_0C05FADE; }  /* 0C05FADA bt/s */
L_0C05FADE: BLKS(0x0C05FADEu);
	W32(r13 + 0x28u, r0); UPD(0x0C05FAE0u, 1);  /* 0C05FADE mov.l Rm,@(disp,Rn) */
L_0C05FAE0: BLKS(0x0C05FAE0u);
	r0 = R32(r10 + 0x8u); UPD(0x0C05FAE2u, 1);  /* 0C05FAE0 mov.l @(disp,Rm),Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C05FAE4u, 1);  /* 0C05FAE2 mov.l Rm,@(disp,Rn) */
L_0C05FAE4: BLKS(0x0C05FAE4u);
	r0 = R32(r13 + 0x28u); UPD(0x0C05FAE6u, 1);  /* 0C05FAE4 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x0u, r0); UPD(0x0C05FAE8u, 1);  /* 0C05FAE6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x4u); UPD(0x0C05FAEAu, 1);  /* 0C05FAE8 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFFFFu; UPD(0x0C05FAECu, 1);  /* 0C05FAEA mov.l @(disp,pc),Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C05FAEEu, 1);  /* 0C05FAEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC060198u; UPD(0x0C05FAF0u, 1);  /* 0C05FAEE mov.l @(disp,pc),Rn */
	r7 = 0x0u; UPD(0x0C05FAF2u, 1);  /* 0C05FAF0 mov.l @(disp,pc),Rn */
	r8 = 0x0u; UPD(0x0C05FAF4u, 1);  /* 0C05FAF2 mov.l @(disp,pc),Rn */
	r9 = 0x0u; UPD(0x0C05FAF6u, 1);  /* 0C05FAF4 mov.l @(disp,pc),Rn */
	IF(0x0C05FAF6u); { u32 t_ = r0; PR = 0x0C05FAFAu; IF(0x0C05FAF8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060198, 0x0C060198u, 0x0C05FAFAu); }  /* 0C05FAF6 jsr @Rn */
L_0C05FAFA: BLKS(0x0C05FAFAu);
	r11 = R32(r13 + 0x0u); UPD(0x0C05FAFCu, 1);  /* 0C05FAFA mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C05FAFC tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05FB00u); ; /* slot nop */ if (c_) { UPD(0x0C05FBEEu, 4); goto L_0C05FBEE; } goto L_0C05FB02; }  /* 0C05FAFE bt/s */
L_0C05FB02: BLKS(0x0C05FB02u);
	r0 = R32(r13 + 0x2Cu); UPD(0x0C05FB04u, 2);  /* 0C05FB02 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05FB04 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r13 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05FB90u, 4); goto L_0C05FB90; } UPD(0x0C05FB0Au, 1); goto L_0C05FB0A; }  /* 0C05FB06 bt/s */
L_0C05FB0A: BLKS(0x0C05FB0Au);
	T = (r0 & r0) == 0;  /* 0C05FB0A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05FB0Eu); r0 -= 1; T = r0 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C05FB5Cu, 4); goto L_0C05FB5C; } goto L_0C05FB10; }  /* 0C05FB0C bt/s */
L_0C05FB10: BLKS(0x0C05FB10u);
	{ W32(r13 + 0x30u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C05FB90u, 4); goto L_0C05FB90; }  /* 0C05FB10 bra */
L_0C05FB5C: BLKS(0x0C05FB5Cu);
	r0 = R32(r13 + 0x34u); UPD(0x0C05FB5Eu, 1);  /* 0C05FB5C mov.l @(disp,Rm),Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C05FB60u, 1);  /* 0C05FB5E mov.l Rm,@(disp,Rn) */
	r1 = R32(r13 + 0x18u); UPD(0x0C05FB62u, 1);  /* 0C05FB60 mov.l @(disp,Rm),Rn */
	IF(0x0C05FB62u); r1 -= 1; T = r1 == 0;  /* 0C05FB62 dt Rn */
	T = (r1 & r1) == 0;  /* 0C05FB64 tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x18u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05FB6Eu, 5); goto L_0C05FB6E; } UPD(0x0C05FB6Au, 1); goto L_0C05FB6A; }  /* 0C05FB66 bt/s */
L_0C05FB6A: BLKS(0x0C05FB6Au);
	{ IF(0x0C05FB6Cu); ; /* slot nop */ UPD(0x0C05FB90u, 3); goto L_0C05FB90; }  /* 0C05FB6A bra */
L_0C05FB6E: BLKS(0x0C05FB6Eu);
	r0 = 0xC060284u; UPD(0x0C05FB70u, 1);  /* 0C05FB6E mov.l @(disp,pc),Rn */
	IF(0x0C05FB70u); { u32 t_ = r0; PR = 0x0C05FB74u; IF(0x0C05FB72u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060284, 0x0C060284u, 0x0C05FB74u); }  /* 0C05FB70 jsr @Rn */
L_0C05FB74: BLKS(0x0C05FB74u);
	r0 = 0xC060388u; UPD(0x0C05FB76u, 1);  /* 0C05FB74 mov.l @(disp,pc),Rn */
	IF(0x0C05FB76u); { u32 t_ = r0; PR = 0x0C05FB7Au; IF(0x0C05FB78u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060388, 0x0C060388u, 0x0C05FB7Au); }  /* 0C05FB76 jsr @Rn */
L_0C05FB7A: BLKS(0x0C05FB7Au);
	r11 = 0x0u; UPD(0x0C05FB7Cu, 1);  /* 0C05FB7A mov.l @(disp,pc),Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C05FB7Eu, 1);  /* 0C05FB7C mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x4u, r11); UPD(0x0C05FB80u, 1);  /* 0C05FB7E mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C05FBEEu, 3); goto L_0C05FBEE; }  /* 0C05FB80 bra */
L_0C05FB90: BLKS(0x0C05FB90u);
	r0 = 0xC0602D0u; UPD(0x0C05FB92u, 1);  /* 0C05FB90 mov.l @(disp,pc),Rn */
	IF(0x0C05FB92u); { u32 t_ = r0; PR = 0x0C05FB96u; r6 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0602D0, 0x0C0602D0u, 0x0C05FB96u); }  /* 0C05FB92 jsr @Rn */
L_0C05FB96: BLKS(0x0C05FB96u);
	IF(0x0C05FB96u); r11 -= 1; T = r11 == 0;  /* 0C05FB96 dt Rn */
	T = (r11 & r11) == 0;  /* 0C05FB98 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FB9Cu); ; /* slot nop */ if (c_) { UPD(0x0C05FBEEu, 5); goto L_0C05FBEE; } goto L_0C05FB9E; }  /* 0C05FB9A bf/s */
L_0C05FB9E: BLKS(0x0C05FB9Eu);
	r1 = 0x0u; UPD(0x0C05FBA0u, 2);  /* 0C05FB9E mov.l @(disp,pc),Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C05FBA2u, 1);  /* 0C05FBA0 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C05FBA2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05FBA6u); ; /* slot nop */ if (c_) { UPD(0x0C05FBD4u, 4); goto L_0C05FBD4; } goto L_0C05FBA8; }  /* 0C05FBA4 bt/s */
L_0C05FBA8: BLKS(0x0C05FBA8u);
	r2 = 0x2u; UPD(0x0C05FBAAu, 2);  /* 0C05FBA8 mov.l @(disp,pc),Rn */
	T = r0 == r2;  /* 0C05FBAA cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r13 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05FBD0u, 4); goto L_0C05FBD0; } UPD(0x0C05FBB0u, 1); goto L_0C05FBB0; }  /* 0C05FBAC bf/s */
L_0C05FBB0: BLKS(0x0C05FBB0u);
	r11 = R32(r13 + 0x28u); UPD(0x0C05FBB2u, 1);  /* 0C05FBB0 mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x4u); UPD(0x0C05FBB4u, 1);  /* 0C05FBB2 mov.l @(disp,Rm),Rn */
	r0 = 0xC060340u; UPD(0x0C05FBB6u, 1);  /* 0C05FBB4 mov.l @(disp,pc),Rn */
	IF(0x0C05FBB6u); { u32 t_ = r0; PR = 0x0C05FBBAu; r6 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060340, 0x0C060340u, 0x0C05FBBAu); }  /* 0C05FBB6 jsr @Rn */
L_0C05FBBA: BLKS(0x0C05FBBAu);
	{ IF(0x0C05FBBCu); ; /* slot nop */ UPD(0x0C05FBEEu, 3); goto L_0C05FBEE; }  /* 0C05FBBA bra */
L_0C05FBD0: BLKS(0x0C05FBD0u);
	{ IF(0x0C05FBD2u); ; /* slot nop */ UPD(0x0C05FAACu, 3); goto L_0C05FAAC; }  /* 0C05FBD0 bra */
L_0C05FBD4: BLKS(0x0C05FBD4u);
	W32(r13 + 0x4u, r1); UPD(0x0C05FBD6u, 1);  /* 0C05FBD4 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x8u, r1); UPD(0x0C05FBD8u, 1);  /* 0C05FBD6 mov.l Rm,@(disp,Rn) */
	r10 = R32(r13 + 0x10u); UPD(0x0C05FBDAu, 1);  /* 0C05FBD8 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C05FBDA tst Rm,Rn */
	{ u32 c_ = T; r9 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05FBEEu, 4); goto L_0C05FBEE; } UPD(0x0C05FBE0u, 1); goto L_0C05FBE0; }  /* 0C05FBDC bt/s */
L_0C05FBE0: BLKS(0x0C05FBE0u);
	r10 += 0xCu;  /* 0C05FBE0 add #imm,Rn */
	T = r10 == r9;  /* 0C05FBE2 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x10u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05FBECu, 5); goto L_0C05FBEC; } UPD(0x0C05FBE8u, 1); goto L_0C05FBE8; }  /* 0C05FBE4 bt/s */
L_0C05FBE8: BLKS(0x0C05FBE8u);
	{ IF(0x0C05FBEAu); ; /* slot nop */ UPD(0x0C05FAACu, 3); goto L_0C05FAAC; }  /* 0C05FBE8 bra */
L_0C05FBEC: BLKS(0x0C05FBECu);
	W32(r13 + 0x10u, r1); UPD(0x0C05FBEEu, 1);  /* 0C05FBEC mov.l Rm,@(disp,Rn) */
L_0C05FBEE: BLKS(0x0C05FBEEu);
	W32(r13 + 0x0u, r11); UPD(0x0C05FBF0u, 1);  /* 0C05FBEE mov.l Rm,@(disp,Rn) */
	IF(0x0C05FBF0u); r12 -= 1; T = r12 == 0;  /* 0C05FBF0 dt Rn */
	{ u32 c_ = T; r13 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05FBFAu, 4); goto L_0C05FBFA; } goto L_0C05FBF6; }  /* 0C05FBF2 bt/s */
L_0C05FBF6: BLKS(0x0C05FBF6u);
	{ IF(0x0C05FBF8u); ; /* slot nop */ UPD(0x0C05FA9Eu, 4); goto L_0C05FA9E; }  /* 0C05FBF6 bra */
L_0C05FBFA: BLKS(0x0C05FBFAu);
	r0 = 0xC05F8E4u; UPD(0x0C05FBFCu, 1);  /* 0C05FBFA mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FBFEu, 1);  /* 0C05FBFC mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FC00u, 1);  /* 0C05FBFE mov.l Rm,@Rn */
	IF(0x0C05FC00u); PR = R32(r15); r15 += 4; UPD(0x0C05FC02u, 1);  /* 0C05FC00 lds.l @Rn+,pr */
	IF(0x0C05FC02u); { u32 t_ = PR; IF(0x0C05FC04u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05FC02 rts */
}

/* tmu0_init */
void blk_f_0C05FC10(sh3_t *c)
{
	LOCALS;
L_0C05FC10: BLKS(0x0C05FC10u);
	IF(0x0C05FC10u); r15 -= 4; W32(r15, PR); UPD(0x0C05FC12u, 1);  /* 0C05FC10 sts.l pr,@-Rn */
	r0 = 0xC05F8E8u; UPD(0x0C05FC14u, 1);  /* 0C05FC12 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FC16u, 1);  /* 0C05FC14 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FC18u, 1);  /* 0C05FC16 mov.l Rm,@Rn */
	r7 = 0xC060140u; UPD(0x0C05FC1Au, 1);  /* 0C05FC18 mov.l @(disp,pc),Rn */
	IF(0x0C05FC1Au); { u32 t_ = r7; PR = 0x0C05FC1Eu; IF(0x0C05FC1Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060140, 0x0C060140u, 0x0C05FC1Eu); }  /* 0C05FC1A jsr @Rn */
L_0C05FC1E: BLKS(0x0C05FC1Eu);
	r7 = 0xC05F71Cu; UPD(0x0C05FC20u, 1);  /* 0C05FC1E mov.l @(disp,pc),Rn */
	r6 = 0x8u; UPD(0x0C05FC22u, 1);  /* 0C05FC20 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05FC24u, 1);  /* 0C05FC22 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FC26u, 1);  /* 0C05FC24 mov.l @(disp,pc),Rn */
L_0C05FC26: BLKS(0x0C05FC26u);
	W32(r7 + 0x0u, r0); UPD(0x0C05FC28u, 1);  /* 0C05FC26 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C05FC2Au, 1);  /* 0C05FC28 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r0); UPD(0x0C05FC2Cu, 1);  /* 0C05FC2A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x20u, r0); UPD(0x0C05FC2Eu, 1);  /* 0C05FC2C mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r0); UPD(0x0C05FC30u, 1);  /* 0C05FC2E mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x2Cu, r0); UPD(0x0C05FC32u, 1);  /* 0C05FC30 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x1Cu, r1); UPD(0x0C05FC34u, 1);  /* 0C05FC32 mov.l Rm,@(disp,Rn) */
	r1 += 0x1u;  /* 0C05FC34 add #imm,Rn */
	IF(0x0C05FC36u); r6 -= 1; T = r6 == 0;  /* 0C05FC36 dt Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05FC26u, 5); goto L_0C05FC26; } goto L_0C05FC3C; }  /* 0C05FC38 bf/s */
L_0C05FC3C: BLKS(0x0C05FC3Cu);
	r0 = 0xC05F8E4u; UPD(0x0C05FC3Eu, 2);  /* 0C05FC3C mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FC40u, 1);  /* 0C05FC3E mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FC42u, 1);  /* 0C05FC40 mov.l Rm,@Rn */
	r0 = 0xFFFFFE00u; UPD(0x0C05FC44u, 1);  /* 0C05FC42 mov.l @(disp,pc),Rn */
	IF(0x0C05FC44u); c->gbr = r0;  /* 0C05FC44 ldc Rn,gbr */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C05FC48u, 2);  /* 0C05FC46 mov.b @(disp,gbr),r0 */
	r1 = 0xFFFFFFFEu; UPD(0x0C05FC4Au, 1);  /* 0C05FC48 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C05FC4A and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C05FC4Eu, 2);  /* 0C05FC4C mov.b r0,@(disp,gbr) */
	r0 = 0x20u; UPD(0x0C05FC50u, 1);  /* 0C05FC4E mov.w @(disp,pc),Rn */
	W16(c->gbr + 0x9Cu, r0); UPD(0x0C05FC52u, 1);  /* 0C05FC50 mov.w r0,@(disp,gbr) */
	r0 = 0x18FFu; UPD(0x0C05FC54u, 1);  /* 0C05FC52 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x94u, r0); UPD(0x0C05FC56u, 1);  /* 0C05FC54 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x98u, r0); UPD(0x0C05FC58u, 1);  /* 0C05FC56 mov.l r0,@(disp,gbr) */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C05FC5Au, 1);  /* 0C05FC58 mov.b @(disp,gbr),r0 */
	r0 |= 0x1u;  /* 0C05FC5A or #imm,r0 */
	W8(c->gbr + 0x92u, r0); UPD(0x0C05FC5Eu, 2);  /* 0C05FC5C mov.b r0,@(disp,gbr) */
	r3 = 0xFFFFFEE2u; UPD(0x0C05FC60u, 1);  /* 0C05FC5E mov.l @(disp,pc),Rn */
	r2 = 0x6000u; UPD(0x0C05FC62u, 1);  /* 0C05FC60 mov.w @(disp,pc),Rn */
	r1 = 0xFFFF0FFFu; UPD(0x0C05FC64u, 1);  /* 0C05FC62 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C05FC66u, 1);  /* 0C05FC64 mov.w @Rm,Rn */
	r0 &= r1;  /* 0C05FC66 and Rm,Rn */
	r0 |= r2;  /* 0C05FC68 or Rm,Rn */
	W16(r3, r0); UPD(0x0C05FC6Cu, 3);  /* 0C05FC6A mov.w Rm,@Rn */
	r0 = 0xC0025D0u; UPD(0x0C05FC6Eu, 1);  /* 0C05FC6C mov.l @(disp,pc),Rn */
	r1 = 0xC05F8F4u; UPD(0x0C05FC70u, 1);  /* 0C05FC6E mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FC72u, 1);  /* 0C05FC70 mov.l Rm,@Rn */
	r1 = 0xC05F8DCu; UPD(0x0C05FC74u, 1);  /* 0C05FC72 mov.l @(disp,pc),Rn */
	r3 = 0xC05F8E0u; UPD(0x0C05FC76u, 1);  /* 0C05FC74 mov.l @(disp,pc),Rn */
	r2 = 0x0u; UPD(0x0C05FC78u, 1);  /* 0C05FC76 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C05FC7Au, 1);  /* 0C05FC78 mov.l Rm,@Rn */
	W32(r3, r3); UPD(0x0C05FC7Cu, 1);  /* 0C05FC7A mov.l Rm,@Rn */
	r0 = 0xC05F70Cu; UPD(0x0C05FC7Eu, 1);  /* 0C05FC7C mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FC80u, 1);  /* 0C05FC7E mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C05FC82u, 1);  /* 0C05FC80 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r1); UPD(0x0C05FC84u, 1);  /* 0C05FC82 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r1); UPD(0x0C05FC86u, 1);  /* 0C05FC84 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r1); UPD(0x0C05FC88u, 1);  /* 0C05FC86 mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F8ECu; UPD(0x0C05FC8Au, 1);  /* 0C05FC88 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C05FC8Cu, 1);  /* 0C05FC8A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r1); UPD(0x0C05FC8Eu, 1);  /* 0C05FC8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F8E8u; UPD(0x0C05FC90u, 1);  /* 0C05FC8E mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C05FC92u, 1);  /* 0C05FC90 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FC94u, 1);  /* 0C05FC92 mov.l Rm,@Rn */
	IF(0x0C05FC94u); PR = R32(r15); r15 += 4; UPD(0x0C05FC96u, 1);  /* 0C05FC94 lds.l @Rn+,pr */
	IF(0x0C05FC96u); { u32 t_ = PR; IF(0x0C05FC98u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05FC96 rts */
}

/* FUN_0c05fce8 */
void blk_f_0C05FCE8(sh3_t *c)
{
	LOCALS;
L_0C05FCE8: BLKS(0x0C05FCE8u);
	r1 = 0xC05F8DCu; UPD(0x0C05FCEAu, 1);  /* 0C05FCE8 mov.l @(disp,pc),Rn */
	IF(0x0C05FCEAu); { u32 t_ = PR; W32(r1, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05FCEA rts */
}

/* FUN_0c05fcf4 */
void blk_f_0C05FCF4(sh3_t *c)
{
	LOCALS;
L_0C05FCF4: BLKS(0x0C05FCF4u);
	r1 = 0xC05F8E0u; UPD(0x0C05FCF6u, 1);  /* 0C05FCF4 mov.l @(disp,pc),Rn */
	IF(0x0C05FCF6u); { u32 t_ = PR; W32(r1, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05FCF6 rts */
}

/* FUN_0c05fd00 */
void blk_f_0C05FD00(sh3_t *c)
{
	LOCALS;
L_0C05FD00: BLKS(0x0C05FD00u);
	r1 = 0x7u; UPD(0x0C05FD02u, 1);  /* 0C05FD00 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C05FD02 and Rm,Rn */
	r0 = 0x38u; UPD(0x0C05FD06u, 2);  /* 0C05FD04 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r0;  /* 0C05FD06 mulu.w Rm,Rn */
	IF(0x0C05FD08u); r4 = MACL;  /* 0C05FD08 sts macl,Rn */
	r0 = 0xC05F71Cu; UPD(0x0C05FD0Cu, 4);  /* 0C05FD0A mov.l @(disp,pc),Rn */
	IF(0x0C05FD0Cu); { u32 t_ = PR; r0 += r4; /* slot add Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05FD0C rts */
}

/* FUN_0c05fd2c */
void blk_f_0C05FD2C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05FD34);
L_0C05FD2C: BLKS(0x0C05FD2Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05FD2Eu, 1);  /* 0C05FD2C mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05FD30u, 1);  /* 0C05FD2E mov.l Rm,@-Rn */
	r8 = 0x0u; UPD(0x0C05FD32u, 1);  /* 0C05FD30 mov.l @(disp,pc),Rn */
	r0 = 0xC05F718u; UPD(0x0C05FD34u, 1);  /* 0C05FD32 mov.l @(disp,pc),Rn */
L_0C05FD34: BLKS(0x0C05FD34u);
	SPIN_SAVE(0C05FD34);
	r1 = RS32(0C05FD34, r0); UPD(0x0C05FD36u, 1);  /* 0C05FD34 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05FD36 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FD3Au); ; /* slot nop */ if (c_) { SPIN_FFD(0C05FD34, 5); UPD(0x0C05FD34u, 4); goto L_0C05FD34; } goto L_0C05FD3C; }  /* 0C05FD38 bf/s */
L_0C05FD3C: BLKS(0x0C05FD3Cu);
	r0 = 0xC05F714u; UPD(0x0C05FD3Eu, 2);  /* 0C05FD3C mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C05FD40u, 1);  /* 0C05FD3E mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FD42u, 1);  /* 0C05FD40 mov.l Rm,@Rn */
	r0 = 0xC05DB0Cu; UPD(0x0C05FD44u, 1);  /* 0C05FD42 mov.l @(disp,pc),Rn */
	r9 = 0xC05F70Cu; UPD(0x0C05FD46u, 1);  /* 0C05FD44 mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0x4u); UPD(0x0C05FD48u, 1);  /* 0C05FD46 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C05FD48 add Rm,Rn */
	r1 = 0x7u; UPD(0x0C05FD4Cu, 2);  /* 0C05FD4A mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C05FD4C and Rm,Rn */
	r1 = 0x38u; UPD(0x0C05FD50u, 2);  /* 0C05FD4E mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C05FD50 mulu.w Rm,Rn */
	IF(0x0C05FD52u); r2 = MACL;  /* 0C05FD52 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C05FD56u, 4);  /* 0C05FD54 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r8); UPD(0x0C05FD58u, 1);  /* 0C05FD56 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x14u, r7); UPD(0x0C05FD5Au, 1);  /* 0C05FD58 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r6); UPD(0x0C05FD5Cu, 1);  /* 0C05FD5A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x18u, r5); UPD(0x0C05FD5Eu, 1);  /* 0C05FD5C mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C05FD60u, 1);  /* 0C05FD5E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C05FD60 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C05FD64u, 2);  /* 0C05FD62 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C05FD64 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FD68u); ; /* slot nop */ if (c_) { UPD(0x0C05FD6Cu, 4); goto L_0C05FD6C; } goto L_0C05FD6A; }  /* 0C05FD66 bf/s */
L_0C05FD6A: BLKS(0x0C05FD6Au);
	r3 = 0x0u; UPD(0x0C05FD6Cu, 2);  /* 0C05FD6A mov.l @(disp,pc),Rn */
L_0C05FD6C: BLKS(0x0C05FD6Cu);
	W32(r9 + 0x4u, r3); UPD(0x0C05FD6Eu, 1);  /* 0C05FD6C mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F714u; UPD(0x0C05FD70u, 1);  /* 0C05FD6E mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FD72u, 1);  /* 0C05FD70 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FD74u, 1);  /* 0C05FD72 mov.l Rm,@Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05FD76u, 1);  /* 0C05FD74 mov.l @Rm+,Rn */
	IF(0x0C05FD76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05FD76 rts */
}

/* FUN_0c05fe4c */
void blk_f_0C05FE4C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05FE62);
L_0C05FE4C: BLKS(0x0C05FE4Cu);
	r0 = 0xC05F8E0u; UPD(0x0C05FE4Eu, 1);  /* 0C05FE4C mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C05FE50u, 1);  /* 0C05FE4E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05FE50 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FE54u); ; /* slot nop */ if (c_) { UPD(0x0C05FE60u, 4); goto L_0C05FE60; } goto L_0C05FE56; }  /* 0C05FE52 bf/s */
L_0C05FE56: BLKS(0x0C05FE56u);
	IF(0x0C05FE56u); { u32 t_ = PR; IF(0x0C05FE58u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C05FE56 rts */
L_0C05FE60: BLKS(0x0C05FE60u);
	r0 = 0xC05F718u; UPD(0x0C05FE62u, 1);  /* 0C05FE60 mov.l @(disp,pc),Rn */
L_0C05FE62: BLKS(0x0C05FE62u);
	SPIN_SAVE(0C05FE62);
	r1 = RS32(0C05FE62, r0); UPD(0x0C05FE64u, 1);  /* 0C05FE62 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05FE64 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FE68u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05FE62, 5); UPD(0x0C05FE62u, 4); goto L_0C05FE62; } goto L_0C05FE6A; }  /* 0C05FE66 bf/s */
L_0C05FE6A: BLKS(0x0C05FE6Au);
	r0 = 0xC05F714u; UPD(0x0C05FE6Cu, 2);  /* 0C05FE6A mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C05FE6Eu, 1);  /* 0C05FE6C mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FE70u, 1);  /* 0C05FE6E mov.l Rm,@Rn */
	r0 = 0xC05DB0Cu; UPD(0x0C05FE72u, 1);  /* 0C05FE70 mov.l @(disp,pc),Rn */
	r7 = 0xC05F70Cu; UPD(0x0C05FE74u, 1);  /* 0C05FE72 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C05FE76u, 1);  /* 0C05FE74 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C05FE76 add Rm,Rn */
	r1 = 0x7u; UPD(0x0C05FE7Au, 2);  /* 0C05FE78 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C05FE7A and Rm,Rn */
	r1 = 0x38u; UPD(0x0C05FE7Eu, 2);  /* 0C05FE7C mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C05FE7E mulu.w Rm,Rn */
	IF(0x0C05FE80u); r2 = MACL;  /* 0C05FE80 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C05FE84u, 4);  /* 0C05FE82 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C05FE86u, 1);  /* 0C05FE84 mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C05FE88u, 1);  /* 0C05FE86 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C05FE8Au, 1);  /* 0C05FE88 mov.l @(disp,pc),Rn */
	W32(r0 + 0x14u, r1); UPD(0x0C05FE8Cu, 1);  /* 0C05FE8A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r5); UPD(0x0C05FE8Eu, 1);  /* 0C05FE8C mov.l Rm,@(disp,Rn) */
	r6 += r5;  /* 0C05FE8E add Rm,Rn */
	W32(r0 + 0x8u, r6); UPD(0x0C05FE92u, 2);  /* 0C05FE90 mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C05FE94u, 1);  /* 0C05FE92 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C05FE94 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C05FE98u, 2);  /* 0C05FE96 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C05FE98 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FE9Cu); ; /* slot nop */ if (c_) { UPD(0x0C05FEA0u, 4); goto L_0C05FEA0; } goto L_0C05FE9E; }  /* 0C05FE9A bf/s */
L_0C05FE9E: BLKS(0x0C05FE9Eu);
	r3 = 0x0u; UPD(0x0C05FEA0u, 2);  /* 0C05FE9E mov.l @(disp,pc),Rn */
L_0C05FEA0: BLKS(0x0C05FEA0u);
	W32(r7 + 0x4u, r3); UPD(0x0C05FEA2u, 1);  /* 0C05FEA0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F714u; UPD(0x0C05FEA4u, 1);  /* 0C05FEA2 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FEA6u, 1);  /* 0C05FEA4 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FEA8u, 1);  /* 0C05FEA6 mov.l Rm,@Rn */
	IF(0x0C05FEA8u); { u32 t_ = PR; IF(0x0C05FEAAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05FEA8 rts */
}

/* FUN_0c05fed8 */
void blk_f_0C05FED8(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05FEDA);
L_0C05FED8: BLKS(0x0C05FED8u);
	r0 = 0xC05F718u; UPD(0x0C05FEDAu, 1);  /* 0C05FED8 mov.l @(disp,pc),Rn */
L_0C05FEDA: BLKS(0x0C05FEDAu);
	SPIN_SAVE(0C05FEDA);
	r1 = RS32(0C05FEDA, r0); UPD(0x0C05FEDCu, 1);  /* 0C05FEDA mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05FEDC tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FEE0u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05FEDA, 5); UPD(0x0C05FEDAu, 4); goto L_0C05FEDA; } goto L_0C05FEE2; }  /* 0C05FEDE bf/s */
L_0C05FEE2: BLKS(0x0C05FEE2u);
	r0 = 0xC05F714u; UPD(0x0C05FEE4u, 2);  /* 0C05FEE2 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C05FEE6u, 1);  /* 0C05FEE4 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FEE8u, 1);  /* 0C05FEE6 mov.l Rm,@Rn */
	r0 = 0xC05DB0Cu; UPD(0x0C05FEEAu, 1);  /* 0C05FEE8 mov.l @(disp,pc),Rn */
	r7 = 0xC05F70Cu; UPD(0x0C05FEECu, 1);  /* 0C05FEEA mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C05FEEEu, 1);  /* 0C05FEEC mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C05FEEE add Rm,Rn */
	r1 = 0x7u; UPD(0x0C05FEF2u, 2);  /* 0C05FEF0 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C05FEF2 and Rm,Rn */
	r1 = 0x38u; UPD(0x0C05FEF6u, 2);  /* 0C05FEF4 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C05FEF6 mulu.w Rm,Rn */
	IF(0x0C05FEF8u); r2 = MACL;  /* 0C05FEF8 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C05FEFCu, 4);  /* 0C05FEFA mov.l Rm,@(disp,Rn) */
	r1 = 0x6u; UPD(0x0C05FEFEu, 1);  /* 0C05FEFC mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C05FF00u, 1);  /* 0C05FEFE mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C05FF02u, 1);  /* 0C05FF00 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C05FF02 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C05FF06u, 2);  /* 0C05FF04 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C05FF06 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05FF0Au); ; /* slot nop */ if (c_) { UPD(0x0C05FF0Eu, 4); goto L_0C05FF0E; } goto L_0C05FF0C; }  /* 0C05FF08 bf/s */
L_0C05FF0C: BLKS(0x0C05FF0Cu);
	r3 = 0x0u; UPD(0x0C05FF0Eu, 2);  /* 0C05FF0C mov.l @(disp,pc),Rn */
L_0C05FF0E: BLKS(0x0C05FF0Eu);
	W32(r7 + 0x4u, r3); UPD(0x0C05FF10u, 1);  /* 0C05FF0E mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F714u; UPD(0x0C05FF12u, 1);  /* 0C05FF10 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05FF14u, 1);  /* 0C05FF12 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05FF16u, 1);  /* 0C05FF14 mov.l Rm,@Rn */
	IF(0x0C05FF16u); { u32 t_ = PR; IF(0x0C05FF18u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05FF16 rts */
}

/* FUN_0c060078 */
void blk_f_0C060078(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C06007A);
L_0C060078: BLKS(0x0C060078u);
	r0 = 0xC05F718u; UPD(0x0C06007Au, 1);  /* 0C060078 mov.l @(disp,pc),Rn */
L_0C06007A: BLKS(0x0C06007Au);
	SPIN_SAVE(0C06007A);
	r1 = RS32(0C06007A, r0); UPD(0x0C06007Cu, 1);  /* 0C06007A mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06007C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C060080u); ; /* slot nop */ if (c_) { SPIN_FFD(0C06007A, 5); UPD(0x0C06007Au, 4); goto L_0C06007A; } goto L_0C060082; }  /* 0C06007E bf/s */
L_0C060082: BLKS(0x0C060082u);
	r0 = 0xC05F714u; UPD(0x0C060084u, 2);  /* 0C060082 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C060086u, 1);  /* 0C060084 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C060088u, 1);  /* 0C060086 mov.l Rm,@Rn */
	r0 = 0xC05DB0Cu; UPD(0x0C06008Au, 1);  /* 0C060088 mov.l @(disp,pc),Rn */
	r7 = 0xC05F70Cu; UPD(0x0C06008Cu, 1);  /* 0C06008A mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C06008Eu, 1);  /* 0C06008C mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C06008E add Rm,Rn */
	r1 = 0x7u; UPD(0x0C060092u, 2);  /* 0C060090 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C060092 and Rm,Rn */
	r1 = 0x38u; UPD(0x0C060096u, 2);  /* 0C060094 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C060096 mulu.w Rm,Rn */
	IF(0x0C060098u); r2 = MACL;  /* 0C060098 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C06009Cu, 4);  /* 0C06009A mov.l Rm,@(disp,Rn) */
	r1 = 0x5u; UPD(0x0C06009Eu, 1);  /* 0C06009C mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C0600A0u, 1);  /* 0C06009E mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r5); UPD(0x0C0600A2u, 1);  /* 0C0600A0 mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C0600A4u, 1);  /* 0C0600A2 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0600A4 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C0600A8u, 2);  /* 0C0600A6 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C0600A8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0600ACu); ; /* slot nop */ if (c_) { UPD(0x0C0600B0u, 4); goto L_0C0600B0; } goto L_0C0600AE; }  /* 0C0600AA bf/s */
L_0C0600AE: BLKS(0x0C0600AEu);
	r3 = 0x0u; UPD(0x0C0600B0u, 2);  /* 0C0600AE mov.l @(disp,pc),Rn */
L_0C0600B0: BLKS(0x0C0600B0u);
	W32(r7 + 0x4u, r3); UPD(0x0C0600B2u, 1);  /* 0C0600B0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC05F714u; UPD(0x0C0600B4u, 1);  /* 0C0600B2 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C0600B6u, 1);  /* 0C0600B4 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C0600B8u, 1);  /* 0C0600B6 mov.l Rm,@Rn */
	IF(0x0C0600B8u); { u32 t_ = PR; IF(0x0C0600BAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0600B8 rts */
}

void blk_f_0C060130(sh3_t *c)
{
	LOCALS;
L_0C060130: BLKS(0x0C060130u);
	W8(r9 + 0x0u, r0); UPD(0x0C060132u, 1);  /* 0C060130 mov.b r0,@(disp,Rn) */
	{ W8(c->gbr + 0xD0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(0x0C060296u, 3); goto L_0C060296; }  /* 0C060132 bra */
L_0C060296: BLKS(0x0C060296u);
	r0 = r2;  /* 0C060296 mov Rm,Rn */
	r0 += 0x4u;  /* 0C060298 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C06029Cu, 3);  /* 0C06029A mov.l @(disp,pc),Rn */
	IF(0x0C06029Cu); { u32 t_ = r7; PR = 0x0C0602A0u; IF(0x0C06029Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602A0u); }  /* 0C06029C jsr @Rn */
L_0C0602A0: BLKS(0x0C0602A0u);
	r0 = r2;  /* 0C0602A0 mov Rm,Rn */
	r0 += 0x5u;  /* 0C0602A2 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C0602A6u, 3);  /* 0C0602A4 mov.l @(disp,pc),Rn */
	IF(0x0C0602A6u); { u32 t_ = r7; PR = 0x0C0602AAu; IF(0x0C0602A8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602AAu); }  /* 0C0602A6 jsr @Rn */
L_0C0602AA: BLKS(0x0C0602AAu);
	r0 = r2;  /* 0C0602AA mov Rm,Rn */
	r0 += 0x1u;  /* 0C0602AC add #imm,Rn */
	r1 = 0x0u; UPD(0x0C0602B0u, 3);  /* 0C0602AE mov.l @(disp,pc),Rn */
	IF(0x0C0602B0u); { u32 t_ = r7; PR = 0x0C0602B4u; IF(0x0C0602B2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602B4u); }  /* 0C0602B0 jsr @Rn */
L_0C0602B4: BLKS(0x0C0602B4u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C0602B6u, 1);  /* 0C0602B4 mov.l @Rm+,Rn */
	IF(0x0C0602B6u); PR = R32(r15); r15 += 4; UPD(0x0C0602B8u, 1);  /* 0C0602B6 lds.l @Rn+,pr */
	IF(0x0C0602B8u); { u32 t_ = PR; IF(0x0C0602BAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0602B8 rts */
}

/* FUN_0c060140 */
void blk_f_0C060140(sh3_t *c)
{
	LOCALS;
L_0C060140: BLKS(0x0C060140u);
	IF(0x0C060140u); r15 -= 4; W32(r15, PR); UPD(0x0C060142u, 1);  /* 0C060140 sts.l pr,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C060144u, 1);  /* 0C060142 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C060146u, 1);  /* 0C060144 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C060148u, 1);  /* 0C060146 mov.l @(disp,pc),Rn */
	IF(0x0C060148u); { u32 t_ = r7; PR = 0x0C06014Cu; IF(0x0C06014Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06014Cu); }  /* 0C060148 jsr @Rn */
L_0C06014C: BLKS(0x0C06014Cu);
	r0 = 0x1u; UPD(0x0C06014Eu, 1);  /* 0C06014C mov.l @(disp,pc),Rn */
	r1 = 0x40u; UPD(0x0C060150u, 1);  /* 0C06014E mov.l @(disp,pc),Rn */
	IF(0x0C060150u); { u32 t_ = r7; PR = 0x0C060154u; IF(0x0C060152u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C060154u); }  /* 0C060150 jsr @Rn */
L_0C060154: BLKS(0x0C060154u);
	r0 = 0x2u; UPD(0x0C060156u, 1);  /* 0C060154 mov.l @(disp,pc),Rn */
	r1 = 0x30u; UPD(0x0C060158u, 1);  /* 0C060156 mov.l @(disp,pc),Rn */
	IF(0x0C060158u); { u32 t_ = r7; PR = 0x0C06015Cu; IF(0x0C06015Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06015Cu); }  /* 0C060158 jsr @Rn */
L_0C06015C: BLKS(0x0C06015Cu);
	IF(0x0C06015Cu); PR = R32(r15); r15 += 4; UPD(0x0C06015Eu, 1);  /* 0C06015C lds.l @Rn+,pr */
	IF(0x0C06015Eu); { u32 t_ = PR; IF(0x0C060160u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C06015E rts */
}

/* FUN_0c06017c */
void blk_f_0C06017C(sh3_t *c)
{
	LOCALS;
L_0C06017C: BLKS(0x0C06017Cu);
	{ u32 v_ = r2; r15 -= 4; W32(r15, v_); } UPD(0x0C06017Eu, 1);  /* 0C06017C mov.l Rm,@-Rn */
	{ u32 v_ = r3; r15 -= 4; W32(r15, v_); } UPD(0x0C060180u, 1);  /* 0C06017E mov.l Rm,@-Rn */
	r2 = 0xB0400000u; UPD(0x0C060182u, 1);  /* 0C060180 mov.l @(disp,pc),Rn */
	r3 = 0xB0400001u; UPD(0x0C060184u, 1);  /* 0C060182 mov.l @(disp,pc),Rn */
	W8(r2, r0); UPD(0x0C060186u, 1);  /* 0C060184 mov.b Rm,@Rn */
	W8(r3, r1); UPD(0x0C060188u, 1);  /* 0C060186 mov.b Rm,@Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C06018Au, 1);  /* 0C060188 mov.l @Rm+,Rn */
	IF(0x0C06018Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r2 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06018A rts */
}

/* FUN_0c060198 */
void blk_f_0C060198(sh3_t *c)
{
	LOCALS;
L_0C060198: BLKS(0x0C060198u);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06019Au, 1);  /* 0C060198 mov.l Rm,@-Rn */
	IF(0x0C06019Au); r15 -= 4; W32(r15, PR); UPD(0x0C06019Cu, 1);  /* 0C06019A sts.l pr,@-Rn */
	r13 = 0xC06017Cu; UPD(0x0C06019Eu, 1);  /* 0C06019C mov.l @(disp,pc),Rn */
	r0 = 0xC060130u; UPD(0x0C0601A0u, 1);  /* 0C06019E mov.l @(disp,pc),Rn */
	IF(0x0C0601A0u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0601A2u, 1);  /* 0C0601A0 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0601A2 mov Rm,Rn */
	IF(0x0C0601A4u); { u32 t_ = r13; PR = 0x0C0601A8u; r1 = r5; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601A8u); }  /* 0C0601A4 jsr @Rn */
L_0C0601A8: BLKS(0x0C0601A8u);
	r0 = r2;  /* 0C0601A8 mov Rm,Rn */
	r0 += 0x2u;  /* 0C0601AA add #imm,Rn */
	r1 = 0x0u; UPD(0x0C0601AEu, 3);  /* 0C0601AC mov.l @(disp,pc),Rn */
	IF(0x0C0601AEu); { u32 t_ = r13; PR = 0x0C0601B2u; IF(0x0C0601B0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601B2u); }  /* 0C0601AE jsr @Rn */
L_0C0601B2: BLKS(0x0C0601B2u);
	r0 = r2;  /* 0C0601B2 mov Rm,Rn */
	r0 += 0x3u;  /* 0C0601B4 add #imm,Rn */
	IF(0x0C0601B6u); { u32 t_ = r13; PR = 0x0C0601BAu; IF(0x0C0601B8u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601BAu); }  /* 0C0601B6 jsr @Rn */
L_0C0601BA: BLKS(0x0C0601BAu);
	r0 = r2;  /* 0C0601BA mov Rm,Rn */
	r0 += 0x4u;  /* 0C0601BC add #imm,Rn */
	IF(0x0C0601BEu); { u32 t_ = r13; PR = 0x0C0601C2u; r1 = r4; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601C2u); }  /* 0C0601BE jsr @Rn */
L_0C0601C2: BLKS(0x0C0601C2u);
	r0 = r2;  /* 0C0601C2 mov Rm,Rn */
	r0 += 0x5u;  /* 0C0601C4 add #imm,Rn */
	IF(0x0C0601C6u); { u32 t_ = r13; PR = 0x0C0601CAu; r1 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601CAu); }  /* 0C0601C6 jsr @Rn */
L_0C0601CA: BLKS(0x0C0601CAu);
	r0 = r2;  /* 0C0601CA mov Rm,Rn */
	r0 += 0x6u;  /* 0C0601CC add #imm,Rn */
	IF(0x0C0601CEu); { u32 t_ = r13; PR = 0x0C0601D2u; r1 = r4; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601D2u); }  /* 0C0601CE jsr @Rn */
L_0C0601D2: BLKS(0x0C0601D2u);
	r0 = r2;  /* 0C0601D2 mov Rm,Rn */
	r0 += 0x7u;  /* 0C0601D4 add #imm,Rn */
	r1 = 0x1u; UPD(0x0C0601D8u, 3);  /* 0C0601D6 mov.l @(disp,pc),Rn */
	IF(0x0C0601D8u); { u32 t_ = r13; PR = 0x0C0601DCu; IF(0x0C0601DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601DCu); }  /* 0C0601D8 jsr @Rn */
L_0C0601DC: BLKS(0x0C0601DCu);
	r0 = r2;  /* 0C0601DC mov Rm,Rn */
	r0 += 0x1u;  /* 0C0601DE add #imm,Rn */
	r1 = 0x2u; UPD(0x0C0601E2u, 3);  /* 0C0601E0 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C0601E2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0601E6u); ; /* slot nop */ if (c_) { UPD(0x0C0601ECu, 4); goto L_0C0601EC; } goto L_0C0601E8; }  /* 0C0601E4 bt/s */
L_0C0601E8: BLKS(0x0C0601E8u);
	r2 = 0x1u; UPD(0x0C0601EAu, 2);  /* 0C0601E8 mov.l @(disp,pc),Rn */
	r1 |= r2;  /* 0C0601EA or Rm,Rn */
	UPD(0x0C0601ECu, 1);
L_0C0601EC: BLKS(0x0C0601ECu);
	IF(0x0C0601ECu); { u32 t_ = r13; PR = 0x0C0601F0u; IF(0x0C0601EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0601F0u); }  /* 0C0601EC jsr @Rn */
L_0C0601F0: BLKS(0x0C0601F0u);
	IF(0x0C0601F0u); PR = R32(r15); r15 += 4; UPD(0x0C0601F2u, 1);  /* 0C0601F0 lds.l @Rn+,pr */
	IF(0x0C0601F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0601F2 rts */
}

/* FUN_0c060284 */
void blk_f_0C060284(sh3_t *c)
{
	LOCALS;
L_0C060284: BLKS(0x0C060284u);
	IF(0x0C060284u); r15 -= 4; W32(r15, PR); UPD(0x0C060286u, 1);  /* 0C060284 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C060288u, 1);  /* 0C060286 mov.l Rm,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C06028Au, 1);  /* 0C060288 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C06028Cu, 1);  /* 0C06028A mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C06028C and Rm,Rn */
	r0 = 0xC060130u; UPD(0x0C060290u, 2);  /* 0C06028E mov.l @(disp,pc),Rn */
	IF(0x0C060290u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C060292u, 1);  /* 0C060290 mov.b @(r0,Rm),Rn */
	r2 = r0;  /* 0C060292 mov Rm,Rn */
	r0 += 0x1u;  /* 0C060294 add #imm,Rn */
	r0 = r2;  /* 0C060296 mov Rm,Rn */
	r0 += 0x4u;  /* 0C060298 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C06029Cu, 5);  /* 0C06029A mov.l @(disp,pc),Rn */
	IF(0x0C06029Cu); { u32 t_ = r7; PR = 0x0C0602A0u; IF(0x0C06029Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602A0u); }  /* 0C06029C jsr @Rn */
L_0C0602A0: BLKS(0x0C0602A0u);
	r0 = r2;  /* 0C0602A0 mov Rm,Rn */
	r0 += 0x5u;  /* 0C0602A2 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C0602A6u, 3);  /* 0C0602A4 mov.l @(disp,pc),Rn */
	IF(0x0C0602A6u); { u32 t_ = r7; PR = 0x0C0602AAu; IF(0x0C0602A8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602AAu); }  /* 0C0602A6 jsr @Rn */
L_0C0602AA: BLKS(0x0C0602AAu);
	r0 = r2;  /* 0C0602AA mov Rm,Rn */
	r0 += 0x1u;  /* 0C0602AC add #imm,Rn */
	r1 = 0x0u; UPD(0x0C0602B0u, 3);  /* 0C0602AE mov.l @(disp,pc),Rn */
	IF(0x0C0602B0u); { u32 t_ = r7; PR = 0x0C0602B4u; IF(0x0C0602B2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602B4u); }  /* 0C0602B0 jsr @Rn */
L_0C0602B4: BLKS(0x0C0602B4u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C0602B6u, 1);  /* 0C0602B4 mov.l @Rm+,Rn */
	IF(0x0C0602B6u); PR = R32(r15); r15 += 4; UPD(0x0C0602B8u, 1);  /* 0C0602B6 lds.l @Rn+,pr */
	IF(0x0C0602B8u); { u32 t_ = PR; IF(0x0C0602BAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0602B8 rts */
}

/* FUN_0c0602d0 */
void blk_f_0C0602D0(sh3_t *c)
{
	LOCALS;
L_0C0602D0: BLKS(0x0C0602D0u);
	IF(0x0C0602D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0602D2u, 1);  /* 0C0602D0 sts.l pr,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C0602D4u, 1);  /* 0C0602D2 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C0602D6u, 1);  /* 0C0602D4 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C0602D6 and Rm,Rn */
	r0 = 0xC060138u; UPD(0x0C0602DAu, 2);  /* 0C0602D8 mov.l @(disp,pc),Rn */
	IF(0x0C0602DAu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0602DCu, 1);  /* 0C0602DA mov.b @(r0,Rm),Rn */
	r0 += 0x1u;  /* 0C0602DC add #imm,Rn */
	r1 = r6;  /* 0C0602DE mov Rm,Rn */
	IF(0x0C0602E0u); { u32 t_ = r7; PR = 0x0C0602E4u; IF(0x0C0602E2u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0602E4u); }  /* 0C0602E0 jsr @Rn */
L_0C0602E4: BLKS(0x0C0602E4u);
	IF(0x0C0602E4u); PR = R32(r15); r15 += 4; UPD(0x0C0602E6u, 1);  /* 0C0602E4 lds.l @Rn+,pr */
	IF(0x0C0602E6u); { u32 t_ = PR; IF(0x0C0602E8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0602E6 rts */
}

/* FUN_0c0602f8 */
void blk_f_0C0602F8(sh3_t *c)
{
	LOCALS;
L_0C0602F8: BLKS(0x0C0602F8u);
	IF(0x0C0602F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0602FAu, 1);  /* 0C0602F8 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C0602FCu, 1);  /* 0C0602FA mov.l Rm,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C0602FEu, 1);  /* 0C0602FC mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C060300u, 1);  /* 0C0602FE mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C060300 and Rm,Rn */
	r0 = 0xC060138u; UPD(0x0C060304u, 2);  /* 0C060302 mov.l @(disp,pc),Rn */
	IF(0x0C060304u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C060306u, 1);  /* 0C060304 mov.b @(r0,Rm),Rn */
	r1 = r5;  /* 0C060306 mov Rm,Rn */
	IF(0x0C060308u); { u32 t_ = r7; PR = 0x0C06030Cu; IF(0x0C06030Au); ; /* slot nop */ UPD(t_, 3); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06030Cu); }  /* 0C060308 jsr @Rn */
L_0C06030C: BLKS(0x0C06030Cu);
	r0 += 0x1u;  /* 0C06030C add #imm,Rn */
	r1 = r6;  /* 0C06030E mov Rm,Rn */
	IF(0x0C060310u); { u32 t_ = r7; PR = 0x0C060314u; IF(0x0C060312u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C060314u); }  /* 0C060310 jsr @Rn */
L_0C060314: BLKS(0x0C060314u);
	r0 += 0x1u;  /* 0C060314 add #imm,Rn */
	r1 = 0x8u; UPD(0x0C060318u, 2);  /* 0C060316 mov.l @(disp,pc),Rn */
	IF(0x0C060318u); { u32 t_ = r7; PR = 0x0C06031Cu; IF(0x0C06031Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06031Cu); }  /* 0C060318 jsr @Rn */
L_0C06031C: BLKS(0x0C06031Cu);
	r0 += 0x1u;  /* 0C06031C add #imm,Rn */
	r1 = 0x2u; UPD(0x0C060320u, 2);  /* 0C06031E mov.l @(disp,pc),Rn */
	IF(0x0C060320u); { u32 t_ = r7; PR = 0x0C060324u; IF(0x0C060322u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C060324u); }  /* 0C060320 jsr @Rn */
L_0C060324: BLKS(0x0C060324u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C060326u, 1);  /* 0C060324 mov.l @Rm+,Rn */
	IF(0x0C060326u); PR = R32(r15); r15 += 4; UPD(0x0C060328u, 1);  /* 0C060326 lds.l @Rn+,pr */
	IF(0x0C060328u); { u32 t_ = PR; IF(0x0C06032Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C060328 rts */
}

/* FUN_0c060340 */
void blk_f_0C060340(sh3_t *c)
{
	LOCALS;
L_0C060340: BLKS(0x0C060340u);
	IF(0x0C060340u); r15 -= 4; W32(r15, PR); UPD(0x0C060342u, 1);  /* 0C060340 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C060344u, 1);  /* 0C060342 mov.l Rm,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C060346u, 1);  /* 0C060344 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C060348u, 1);  /* 0C060346 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C060348 and Rm,Rn */
	r0 = 0xC060138u; UPD(0x0C06034Cu, 2);  /* 0C06034A mov.l @(disp,pc),Rn */
	IF(0x0C06034Cu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06034Eu, 1);  /* 0C06034C mov.b @(r0,Rm),Rn */
	r1 = r5;  /* 0C06034E mov Rm,Rn */
	IF(0x0C060350u); { u32 t_ = r7; PR = 0x0C060354u; IF(0x0C060352u); ; /* slot nop */ UPD(t_, 3); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C060354u); }  /* 0C060350 jsr @Rn */
L_0C060354: BLKS(0x0C060354u);
	r0 += 0x1u;  /* 0C060354 add #imm,Rn */
	r1 = r6;  /* 0C060356 mov Rm,Rn */
	IF(0x0C060358u); { u32 t_ = r7; PR = 0x0C06035Cu; IF(0x0C06035Au); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06035Cu); }  /* 0C060358 jsr @Rn */
L_0C06035C: BLKS(0x0C06035Cu);
	r0 += 0x1u;  /* 0C06035C add #imm,Rn */
	r1 = 0x8u; UPD(0x0C060360u, 2);  /* 0C06035E mov.l @(disp,pc),Rn */
	IF(0x0C060360u); { u32 t_ = r7; PR = 0x0C060364u; IF(0x0C060362u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C060364u); }  /* 0C060360 jsr @Rn */
L_0C060364: BLKS(0x0C060364u);
	r0 += 0x1u;  /* 0C060364 add #imm,Rn */
	r1 = 0x3u; UPD(0x0C060368u, 2);  /* 0C060366 mov.l @(disp,pc),Rn */
	IF(0x0C060368u); { u32 t_ = r7; PR = 0x0C06036Cu; IF(0x0C06036Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06036Cu); }  /* 0C060368 jsr @Rn */
L_0C06036C: BLKS(0x0C06036Cu);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C06036Eu, 1);  /* 0C06036C mov.l @Rm+,Rn */
	IF(0x0C06036Eu); PR = R32(r15); r15 += 4; UPD(0x0C060370u, 1);  /* 0C06036E lds.l @Rn+,pr */
	IF(0x0C060370u); { u32 t_ = PR; IF(0x0C060372u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C060370 rts */
}

/* FUN_0c060388 */
void blk_f_0C060388(sh3_t *c)
{
	LOCALS;
L_0C060388: BLKS(0x0C060388u);
	IF(0x0C060388u); r15 -= 4; W32(r15, PR); UPD(0x0C06038Au, 1);  /* 0C060388 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C06038Cu, 1);  /* 0C06038A mov.l Rm,@-Rn */
	r7 = 0xC06017Cu; UPD(0x0C06038Eu, 1);  /* 0C06038C mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C060390u, 1);  /* 0C06038E mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C060390 and Rm,Rn */
	r0 = 0xC060138u; UPD(0x0C060394u, 2);  /* 0C060392 mov.l @(disp,pc),Rn */
	IF(0x0C060394u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C060396u, 1);  /* 0C060394 mov.b @(r0,Rm),Rn */
	r0 += 0x1u;  /* 0C060396 add #imm,Rn */
	r1 = 0x0u; UPD(0x0C06039Au, 2);  /* 0C060398 mov.l @(disp,pc),Rn */
	IF(0x0C06039Au); { u32 t_ = r7; PR = 0x0C06039Eu; IF(0x0C06039Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C06039Eu); }  /* 0C06039A jsr @Rn */
L_0C06039E: BLKS(0x0C06039Eu);
	r0 += 0x2u;  /* 0C06039E add #imm,Rn */
	r1 = 0x0u; UPD(0x0C0603A2u, 2);  /* 0C0603A0 mov.l @(disp,pc),Rn */
	IF(0x0C0603A2u); { u32 t_ = r7; PR = 0x0C0603A6u; { u32 v_ = R32(r15); r15 += 4; r7 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06017C, 0x0C06017Cu, 0x0C0603A6u); }  /* 0C0603A2 jsr @Rn */
L_0C0603A6: BLKS(0x0C0603A6u);
	IF(0x0C0603A6u); PR = R32(r15); r15 += 4; UPD(0x0C0603A8u, 1);  /* 0C0603A6 lds.l @Rn+,pr */
	IF(0x0C0603A8u); { u32 t_ = PR; IF(0x0C0603AAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0603A8 rts */
}

/* FUN_0c0603c0 */
void blk_f_0C0603C0(sh3_t *c)
{
	LOCALS;
L_0C0603C0: BLKS(0x0C0603C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0603C2u, 1);  /* 0C0603C0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0603C4u, 1);  /* 0C0603C2 mov.l Rm,@-Rn */
	r6 = 0xC051614u; UPD(0x0C0603C6u, 1);  /* 0C0603C4 mov.l @(disp,pc),Rn */
	IF(0x0C0603C6u); r15 -= 4; W32(r15, PR); UPD(0x0C0603C8u, 1);  /* 0C0603C6 sts.l pr,@-Rn */
	r8 = 0xC0562D0u; UPD(0x0C0603CAu, 1);  /* 0C0603C8 mov.l @(disp,pc),Rn */
	IF(0x0C0603CAu); { u32 t_ = r6; PR = 0x0C0603CEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C051614, 0x0C051614u, 0x0C0603CEu); }  /* 0C0603CA jsr @Rn */
L_0C0603CE: BLKS(0x0C0603CEu);
	IF(0x0C0603CEu); { u32 t_ = r8; PR = 0x0C0603D2u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C0603D2u); }  /* 0C0603CE jsr @Rn */
L_0C0603D2: BLKS(0x0C0603D2u);
	IF(0x0C0603D2u); { u32 t_ = r8; PR = 0x0C0603D6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C0603D6u); }  /* 0C0603D2 jsr @Rn */
L_0C0603D6: BLKS(0x0C0603D6u);
	r5 = 0xC05177Cu; UPD(0x0C0603D8u, 1);  /* 0C0603D6 mov.l @(disp,pc),Rn */
	r8 = 0xC0C2720u; UPD(0x0C0603DAu, 1);  /* 0C0603D8 mov.l @(disp,pc),Rn */
	IF(0x0C0603DAu); { u32 t_ = r5; PR = 0x0C0603DEu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05177C, 0x0C05177Cu, 0x0C0603DEu); }  /* 0C0603DA jsr @Rn */
L_0C0603DE: BLKS(0x0C0603DEu);
	r4 = 0xC05B8E4u; UPD(0x0C0603E0u, 1);  /* 0C0603DE mov.l @(disp,pc),Rn */
	IF(0x0C0603E0u); { u32 t_ = r4; PR = 0x0C0603E4u; IF(0x0C0603E2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05B8E4, 0x0C05B8E4u, 0x0C0603E4u); }  /* 0C0603E0 jsr @Rn */
L_0C0603E4: BLKS(0x0C0603E4u);
	IF(0x0C0603E4u); { u32 t_ = r8; PR = 0x0C0603E8u; IF(0x0C0603E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2720, 0x0C0C2720u, 0x0C0603E8u); }  /* 0C0603E4 jsr @Rn */
L_0C0603E8: BLKS(0x0C0603E8u);
	r2 = 0xC055ED8u; UPD(0x0C0603EAu, 1);  /* 0C0603E8 mov.l @(disp,pc),Rn */
	r8 = 0xC05FC10u; UPD(0x0C0603ECu, 1);  /* 0C0603EA mov.l @(disp,pc),Rn */
	IF(0x0C0603ECu); { u32 t_ = r2; PR = 0x0C0603F0u; IF(0x0C0603EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C055ED8, 0x0C055ED8u, 0x0C0603F0u); }  /* 0C0603EC jsr @Rn */
L_0C0603F0: BLKS(0x0C0603F0u);
	r3 = 0xC05D514u; UPD(0x0C0603F2u, 1);  /* 0C0603F0 mov.l @(disp,pc),Rn */
	IF(0x0C0603F2u); { u32 t_ = r3; PR = 0x0C0603F6u; IF(0x0C0603F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05D514, 0x0C05D514u, 0x0C0603F6u); }  /* 0C0603F2 jsr @Rn */
L_0C0603F6: BLKS(0x0C0603F6u);
	r0 = 0xC051758u; UPD(0x0C0603F8u, 1);  /* 0C0603F6 mov.l @(disp,pc),Rn */
	r4 = 0xC061CA0u; UPD(0x0C0603FAu, 1);  /* 0C0603F8 mov.l @(disp,pc),Rn */
	IF(0x0C0603FAu); { u32 t_ = r0; PR = 0x0C0603FEu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C051758, 0x0C051758u, 0x0C0603FEu); }  /* 0C0603FA jsr @Rn */
L_0C0603FE: BLKS(0x0C0603FEu);
	IF(0x0C0603FEu); { u32 t_ = r8; PR = 0x0C060402u; IF(0x0C060400u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05FC10, 0x0C05FC10u, 0x0C060402u); }  /* 0C0603FE jsr @Rn */
L_0C060402: BLKS(0x0C060402u);
	r7 = 0xC05FCE8u; UPD(0x0C060404u, 1);  /* 0C060402 mov.l @(disp,pc),Rn */
	r4 = 0xC0C3A58u; UPD(0x0C060406u, 1);  /* 0C060404 mov.l @(disp,pc),Rn */
	IF(0x0C060406u); { u32 t_ = r7; PR = 0x0C06040Au; IF(0x0C060408u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05FCE8, 0x0C05FCE8u, 0x0C06040Au); }  /* 0C060406 jsr @Rn */
L_0C06040A: BLKS(0x0C06040Au);
	r6 = 0xC05FCF4u; UPD(0x0C06040Cu, 1);  /* 0C06040A mov.l @(disp,pc),Rn */
	r4 = 0xC0C3E58u; UPD(0x0C06040Eu, 1);  /* 0C06040C mov.l @(disp,pc),Rn */
	IF(0x0C06040Eu); { u32 t_ = r6; PR = 0x0C060412u; IF(0x0C060410u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05FCF4, 0x0C05FCF4u, 0x0C060412u); }  /* 0C06040E jsr @Rn */
L_0C060412: BLKS(0x0C060412u);
	r0 = 0xC29D18Cu; UPD(0x0C060414u, 1);  /* 0C060412 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C060414 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C060418u, 2);  /* 0C060416 mov.b Rm,@Rn */
	r0 = 0xC060480u; UPD(0x0C06041Au, 1);  /* 0C060418 mov.l @(disp,pc),Rn */
	r5 = 0xC234BF0u; UPD(0x0C06041Cu, 1);  /* 0C06041A mov.l @(disp,pc),Rn */
	r4 = 0xC3C53E4u; UPD(0x0C06041Eu, 1);  /* 0C06041C mov.l @(disp,pc),Rn */
	r2 = 0xC2B1A28u; UPD(0x0C060420u, 1);  /* 0C06041E mov.l @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C060422u, 1);  /* 0C060420 mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C060424u, 1);  /* 0C060422 mov.l Rm,@Rn */
	IF(0x0C060424u); { u32 t_ = r0; PR = 0x0C060428u; W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060480, 0x0C060480u, 0x0C060428u); }  /* 0C060424 jsr @Rn */
L_0C060428: BLKS(0x0C060428u);
	r0 = 0x0u;  /* 0C060428 mov #imm,Rn */
	r15 = r14;  /* 0C06042A mov Rm,Rn */
	IF(0x0C06042Cu); PR = R32(r15); r15 += 4; UPD(0x0C06042Eu, 3);  /* 0C06042C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060430u, 1);  /* 0C06042E mov.l @Rm+,Rn */
	IF(0x0C060430u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060430 rts */
}

/* FUN_0c060480 */
void blk_f_0C060480(sh3_t *c)
{
	LOCALS;
L_0C060480: BLKS(0x0C060480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060482u, 1);  /* 0C060480 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C060482 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060486u, 2);  /* 0C060484 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060488u, 1);  /* 0C060486 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C060488 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06048Cu, 2);  /* 0C06048A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06048Eu, 1);  /* 0C06048C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C060490u, 1);  /* 0C06048E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060492u, 1);  /* 0C060490 mov.l Rm,@-Rn */
	r11 = 0xC05177Cu; UPD(0x0C060494u, 1);  /* 0C060492 mov.l @(disp,pc),Rn */
	IF(0x0C060494u); r15 -= 4; W32(r15, PR); UPD(0x0C060496u, 1);  /* 0C060494 sts.l pr,@-Rn */
	r12 = 0xC232300u; UPD(0x0C060498u, 1);  /* 0C060496 mov.l @(disp,pc),Rn */
	IF(0x0C060498u); { u32 t_ = r11; PR = 0x0C06049Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05177C, 0x0C05177Cu, 0x0C06049Cu); }  /* 0C060498 jsr @Rn */
L_0C06049C: BLKS(0x0C06049Cu);
	W8(r12, r9); UPD(0x0C06049Eu, 1);  /* 0C06049C mov.b Rm,@Rn */
	r3 = 0x1u;  /* 0C06049E mov #imm,Rn */
	r13 = 0xC3C4016u; UPD(0x0C0604A2u, 2);  /* 0C0604A0 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0604A2 mov #imm,Rn */
	W16(r13, r9); UPD(0x0C0604A6u, 2);  /* 0C0604A4 mov.w Rm,@Rn */
	r6 = 0xC233726u; UPD(0x0C0604A8u, 1);  /* 0C0604A6 mov.l @(disp,pc),Rn */
	r5 = 0xC28F5FCu; UPD(0x0C0604AAu, 1);  /* 0C0604A8 mov.l @(disp,pc),Rn */
	r1 = 0xC286104u; UPD(0x0C0604ACu, 1);  /* 0C0604AA mov.l @(disp,pc),Rn */
	r4 = 0xC237C06u; UPD(0x0C0604AEu, 1);  /* 0C0604AC mov.l @(disp,pc),Rn */
	r7 = 0xC2B1A2Cu; UPD(0x0C0604B0u, 1);  /* 0C0604AE mov.l @(disp,pc),Rn */
	r8 = 0xC23946Cu; UPD(0x0C0604B2u, 1);  /* 0C0604B0 mov.l @(disp,pc),Rn */
	r13 = 0xC29CF84u; UPD(0x0C0604B4u, 1);  /* 0C0604B2 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C0604B6u, 1);  /* 0C0604B4 mov.b Rm,@Rn */
	W8(r6, r3); UPD(0x0C0604B8u, 1);  /* 0C0604B6 mov.b Rm,@Rn */
	W8(r5, r9); UPD(0x0C0604BAu, 1);  /* 0C0604B8 mov.b Rm,@Rn */
	W8(r7, r9); UPD(0x0C0604BCu, 1);  /* 0C0604BA mov.b Rm,@Rn */
	W8(r13, r9); UPD(0x0C0604BEu, 1);  /* 0C0604BC mov.b Rm,@Rn */
	W8(r1, r9); UPD(0x0C0604C0u, 1);  /* 0C0604BE mov.b Rm,@Rn */
	W8(r4, r9); UPD(0x0C0604C2u, 1);  /* 0C0604C0 mov.b Rm,@Rn */
	r0 = 0xB8000050u; UPD(0x0C0604C4u, 1);  /* 0C0604C2 mov.l @(disp,pc),Rn */
	r10 = 0xC2B0370u; UPD(0x0C0604C6u, 1);  /* 0C0604C4 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0604C8u, 1);  /* 0C0604C6 mov.l @Rm,Rn */
	W32(r10, r2); UPD(0x0C0604CAu, 1);  /* 0C0604C8 mov.l Rm,@Rn */
	r10 = 0xC238029u; UPD(0x0C0604CCu, 1);  /* 0C0604CA mov.l @(disp,pc),Rn */
	r5 = 0xB8000000u; UPD(0x0C0604CEu, 1);  /* 0C0604CC mov.l @(disp,pc),Rn */
	W8(r10, r9); UPD(0x0C0604D0u, 1);  /* 0C0604CE mov.b Rm,@Rn */
	r8 = 0xC0C2360u; UPD(0x0C0604D2u, 1);  /* 0C0604D0 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C0604D4u, 1);  /* 0C0604D2 mov.l @Rm,Rn */
	r7 = 0xC2B07A8u; UPD(0x0C0604D6u, 1);  /* 0C0604D4 mov.l @(disp,pc),Rn */
	IF(0x0C0604D6u); { u32 t_ = r8; PR = 0x0C0604DAu; W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0604DAu); }  /* 0C0604D6 jsr @Rn */
L_0C0604DA: BLKS(0x0C0604DAu);
	r3 = 0xC28F611u; UPD(0x0C0604DCu, 1);  /* 0C0604DA mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0604DC mov #imm,Rn */
	W8(r3, r9); UPD(0x0C0604E0u, 2);  /* 0C0604DE mov.b Rm,@Rn */
	r3 = 0xC28F60Cu; UPD(0x0C0604E2u, 1);  /* 0C0604E0 mov.l @(disp,pc),Rn */
	r0 = 0x12345678u; UPD(0x0C0604E4u, 1);  /* 0C0604E2 mov.l @(disp,pc),Rn */
	r6 = R32(r3); UPD(0x0C0604E6u, 1);  /* 0C0604E4 mov.l @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C0604E8u, 1);  /* 0C0604E6 mov.b @Rm,Rn */
	T = r6 == r0;  /* 0C0604E8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0604EA negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0604EC tst Rm,Rn */
	IF(0x0C0604EEu); r4 = T;  /* 0C0604EE movt Rn */
	r0 |= r4;  /* 0C0604F0 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0604F2 tst Rm,Rn */
	if (!T) { UPD(0x0C0604FAu, 9); goto L_0C0604FA; }  /* 0C0604F4 bf */
L_0C0604F6: BLKS(0x0C0604F6u);
	{ IF(0x0C0604F8u); ; /* slot nop */ UPD(0x0C060630u, 3); goto L_0C060630; }  /* 0C0604F6 bra */
L_0C0604FA: BLKS(0x0C0604FAu);
	r2 = 0x12345678u; UPD(0x0C0604FCu, 1);  /* 0C0604FA mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0604FC mov #imm,Rn */
	W32(r3, r2); UPD(0x0C060500u, 2);  /* 0C0604FE mov.l Rm,@Rn */
	r6 = 0xC239490u; UPD(0x0C060502u, 1);  /* 0C060500 mov.l @(disp,pc),Rn */
	r3 = 0xC2B1A5Au; UPD(0x0C060504u, 1);  /* 0C060502 mov.l @(disp,pc),Rn */
	r7 = 0xC239464u; UPD(0x0C060506u, 1);  /* 0C060504 mov.l @(disp,pc),Rn */
	r10 = 0xC2B039Cu; UPD(0x0C060508u, 1);  /* 0C060506 mov.l @(disp,pc),Rn */
	W8(r6, r9); UPD(0x0C06050Au, 1);  /* 0C060508 mov.b Rm,@Rn */
	W8(r3, r9); UPD(0x0C06050Cu, 1);  /* 0C06050A mov.b Rm,@Rn */
	W8(r7, r9); UPD(0x0C06050Eu, 1);  /* 0C06050C mov.b Rm,@Rn */
	W32(r10, r0); UPD(0x0C060510u, 1);  /* 0C06050E mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C060512u, 1);  /* 0C060510 mov.b @Rm,Rn */
L_0C060512: BLKS(0x0C060512u);
	r8 = 0x3u;  /* 0C060512 mov #imm,Rn */
	T = r4 > r8;  /* 0C060514 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06051Au, 5); goto L_0C06051A; }  /* 0C060516 bf */
L_0C060518: BLKS(0x0C060518u);
	W8(r3, r9); UPD(0x0C06051Au, 1);  /* 0C060518 mov.b Rm,@Rn */
L_0C06051A: BLKS(0x0C06051Au);
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C06051Cu, 1);  /* 0C06051A mov.b @Rm,Rn */
	r3 = 0x6u;  /* 0C06051C mov #imm,Rn */
	T = r1 > r3;  /* 0C06051E cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C060524u, 5); goto L_0C060524; }  /* 0C060520 bf */
L_0C060522: BLKS(0x0C060522u);
	W8(r7, r9); UPD(0x0C060524u, 1);  /* 0C060522 mov.b Rm,@Rn */
L_0C060524: BLKS(0x0C060524u);
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C060526u, 1);  /* 0C060524 mov.b @Rm,Rn */
	r7 = 0x8u;  /* 0C060526 mov #imm,Rn */
	T = r5 > r7;  /* 0C060528 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06052Eu, 5); goto L_0C06052E; }  /* 0C06052A bf */
L_0C06052C: BLKS(0x0C06052Cu);
	W8(r6, r9); UPD(0x0C06052Eu, 1);  /* 0C06052C mov.b Rm,@Rn */
L_0C06052E: BLKS(0x0C06052Eu);
	r6 = 0xC061190u; UPD(0x0C060530u, 1);  /* 0C06052E mov.l @(disp,pc),Rn */
	r10 = 0xC0691B0u; UPD(0x0C060532u, 1);  /* 0C060530 mov.l @(disp,pc),Rn */
	IF(0x0C060532u); { u32 t_ = r6; PR = 0x0C060536u; IF(0x0C060534u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061190, 0x0C061190u, 0x0C060536u); }  /* 0C060532 jsr @Rn */
L_0C060536: BLKS(0x0C060536u);
	r8 = 0xC0C1F10u; UPD(0x0C060538u, 1);  /* 0C060536 mov.l @(disp,pc),Rn */
	IF(0x0C060538u); { u32 t_ = r10; PR = 0x0C06053Cu; IF(0x0C06053Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0691B0, 0x0C0691B0u, 0x0C06053Cu); }  /* 0C060538 jsr @Rn */
L_0C06053C: BLKS(0x0C06053Cu);
	r10 = 0xC060810u; UPD(0x0C06053Eu, 1);  /* 0C06053C mov.l @(disp,pc),Rn */
	IF(0x0C06053Eu); { u32 t_ = r8; PR = 0x0C060542u; IF(0x0C060540u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1F10, 0x0C0C1F10u, 0x0C060542u); }  /* 0C06053E jsr @Rn */
L_0C060542: BLKS(0x0C060542u);
	r5 = 0xC2975E8u; UPD(0x0C060544u, 1);  /* 0C060542 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C060544 mov #imm,Rn */
	IF(0x0C060546u); { u32 t_ = r10; PR = 0x0C06054Au; W32(r5, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C060810, 0x0C060810u, 0x0C06054Au); }  /* 0C060546 jsr @Rn */
L_0C06054A: BLKS(0x0C06054Au);
	r2 = 0xC060D40u; UPD(0x0C06054Cu, 1);  /* 0C06054A mov.l @(disp,pc),Rn */
	r10 = 0xC3C543Cu; UPD(0x0C06054Eu, 1);  /* 0C06054C mov.l @(disp,pc),Rn */
	IF(0x0C06054Eu); { u32 t_ = r2; PR = 0x0C060552u; IF(0x0C060550u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060D40, 0x0C060D40u, 0x0C060552u); }  /* 0C06054E jsr @Rn */
L_0C060552: BLKS(0x0C060552u);
	r7 = 0xC061B90u; UPD(0x0C060554u, 1);  /* 0C060552 mov.l @(disp,pc),Rn */
	IF(0x0C060554u); { u32 t_ = r7; PR = 0x0C060558u; IF(0x0C060556u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061B90, 0x0C061B90u, 0x0C060558u); }  /* 0C060554 jsr @Rn */
L_0C060558: BLKS(0x0C060558u);
	r3 = 0xC2B0380u; UPD(0x0C06055Au, 1);  /* 0C060558 mov.l @(disp,pc),Rn */
	r0 = 0xC23801Cu; UPD(0x0C06055Cu, 1);  /* 0C06055A mov.l @(disp,pc),Rn */
	r6 = 0xC2ABA9Cu; UPD(0x0C06055Eu, 1);  /* 0C06055C mov.l @(disp,pc),Rn */
	r4 = 0xC3C43D8u; UPD(0x0C060560u, 1);  /* 0C06055E mov.l @(disp,pc),Rn */
	r5 = 0xC239470u; UPD(0x0C060562u, 1);  /* 0C060560 mov.l @(disp,pc),Rn */
	W32(r3, r8); UPD(0x0C060564u, 1);  /* 0C060562 mov.l Rm,@Rn */
	W32(r0, r8); UPD(0x0C060566u, 1);  /* 0C060564 mov.l Rm,@Rn */
	W32(r6, r8); UPD(0x0C060568u, 1);  /* 0C060566 mov.l Rm,@Rn */
	W32(r10, r8); UPD(0x0C06056Au, 1);  /* 0C060568 mov.l Rm,@Rn */
	W32(r4, r8); UPD(0x0C06056Cu, 1);  /* 0C06056A mov.l Rm,@Rn */
	W32(r5, r8); UPD(0x0C06056Eu, 1);  /* 0C06056C mov.l Rm,@Rn */
	r4 = 0x20u;  /* 0C06056E mov #imm,Rn */
	r3 = 0xC22E250u; UPD(0x0C060572u, 2);  /* 0C060570 mov.l @(disp,pc),Rn */
	r5 = 0x60u;  /* 0C060572 mov #imm,Rn */
	r0 = 0xC286100u; UPD(0x0C060576u, 2);  /* 0C060574 mov.l @(disp,pc),Rn */
	r6 = 0xC3C4160u; UPD(0x0C060578u, 1);  /* 0C060576 mov.l @(disp,pc),Rn */
	r10 = 0xC22E008u; UPD(0x0C06057Au, 1);  /* 0C060578 mov.l @(disp,pc),Rn */
	r2 = 0xC239498u; UPD(0x0C06057Cu, 1);  /* 0C06057A mov.l @(disp,pc),Rn */
	r7 = 0xC3C5464u; UPD(0x0C06057Eu, 1);  /* 0C06057C mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C060580u, 1);  /* 0C06057E mov.l Rm,@Rn */
	W32(r0, r5); UPD(0x0C060582u, 1);  /* 0C060580 mov.l Rm,@Rn */
	W32(r6, r4); UPD(0x0C060584u, 1);  /* 0C060582 mov.l Rm,@Rn */
	W32(r10, r5); UPD(0x0C060586u, 1);  /* 0C060584 mov.l Rm,@Rn */
	W32(r2, r8); UPD(0x0C060588u, 1);  /* 0C060586 mov.l Rm,@Rn */
	r10 = 0x1u;  /* 0C060588 mov #imm,Rn */
	W32(r7, r8); UPD(0x0C06058Cu, 2);  /* 0C06058A mov.l Rm,@Rn */
	r6 = 0xC3C5430u; UPD(0x0C06058Eu, 1);  /* 0C06058C mov.l @(disp,pc),Rn */
	r5 = 0xC061200u; UPD(0x0C060590u, 1);  /* 0C06058E mov.l @(disp,pc),Rn */
	r4 = 0x20000000u; UPD(0x0C060592u, 1);  /* 0C060590 mov.l @(disp,pc),Rn */
	r2 = 0xC2B0394u; UPD(0x0C060594u, 1);  /* 0C060592 mov.l @(disp,pc),Rn */
	r1 = 0x10000000u; UPD(0x0C060596u, 1);  /* 0C060594 mov.l @(disp,pc),Rn */
	r7 = 0xC2289D8u; UPD(0x0C060598u, 1);  /* 0C060596 mov.l @(disp,pc),Rn */
	r3 = 0x808080u; UPD(0x0C06059Au, 1);  /* 0C060598 mov.l @(disp,pc),Rn */
	r0 = 0xC29D71Cu; UPD(0x0C06059Cu, 1);  /* 0C06059A mov.l @(disp,pc),Rn */
	W32(r6, r4); UPD(0x0C06059Eu, 1);  /* 0C06059C mov.l Rm,@Rn */
	W32(r2, r10); UPD(0x0C0605A0u, 1);  /* 0C06059E mov.l Rm,@Rn */
	W32(r7, r1); UPD(0x0C0605A2u, 1);  /* 0C0605A0 mov.l Rm,@Rn */
	IF(0x0C0605A2u); { u32 t_ = r5; PR = 0x0C0605A6u; W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C0605A6u); }  /* 0C0605A2 jsr @Rn */
L_0C0605A6: BLKS(0x0C0605A6u);
	IF(0x0C0605A6u); { u32 t_ = r11; PR = 0x0C0605AAu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05177C, 0x0C05177Cu, 0x0C0605AAu); }  /* 0C0605A6 jsr @Rn */
L_0C0605AA: BLKS(0x0C0605AAu);
	r11 = 0xC0654D0u; UPD(0x0C0605ACu, 1);  /* 0C0605AA mov.l @(disp,pc),Rn */
	IF(0x0C0605ACu); { u32 t_ = r11; PR = 0x0C0605B0u; IF(0x0C0605AEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0654D0, 0x0C0654D0u, 0x0C0605B0u); }  /* 0C0605AC jsr @Rn */
L_0C0605B0: BLKS(0x0C0605B0u);
	r3 = 0xC051838u; UPD(0x0C0605B2u, 1);  /* 0C0605B0 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0605B2 mov #imm,Rn */
	r1 = 0xC286104u; UPD(0x0C0605B6u, 2);  /* 0C0605B4 mov.l @(disp,pc),Rn */
	r7 = 0xC3C4020u; UPD(0x0C0605B8u, 1);  /* 0C0605B6 mov.l @(disp,pc),Rn */
	W8(r1, r10); UPD(0x0C0605BAu, 1);  /* 0C0605B8 mov.b Rm,@Rn */
	r4 = 0xC061D70u; UPD(0x0C0605BCu, 1);  /* 0C0605BA mov.l @(disp,pc),Rn */
	IF(0x0C0605BCu); { u32 t_ = r3; PR = 0x0C0605C0u; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C051838, 0x0C051838u, 0x0C0605C0u); }  /* 0C0605BC jsr @Rn */
L_0C0605C0: BLKS(0x0C0605C0u);
	r0 = 0xC05174Cu; UPD(0x0C0605C2u, 1);  /* 0C0605C0 mov.l @(disp,pc),Rn */
	r11 = 0xC06A130u; UPD(0x0C0605C4u, 1);  /* 0C0605C2 mov.l @(disp,pc),Rn */
	r4 = 0xC061CD0u; UPD(0x0C0605C6u, 1);  /* 0C0605C4 mov.l @(disp,pc),Rn */
	IF(0x0C0605C6u); { u32 t_ = r0; PR = 0x0C0605CAu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05174C, 0x0C05174Cu, 0x0C0605CAu); }  /* 0C0605C6 jsr @Rn */
L_0C0605CA: BLKS(0x0C0605CAu);
	IF(0x0C0605CAu); { u32 t_ = r11; PR = 0x0C0605CEu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A130, 0x0C06A130u, 0x0C0605CEu); }  /* 0C0605CA jsr @Rn */
L_0C0605CE: BLKS(0x0C0605CEu);
	r11 = 0xC06F3D0u; UPD(0x0C0605D0u, 1);  /* 0C0605CE mov.l @(disp,pc),Rn */
	IF(0x0C0605D0u); { u32 t_ = r11; PR = 0x0C0605D4u; IF(0x0C0605D2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F3D0, 0x0C06F3D0u, 0x0C0605D4u); }  /* 0C0605D0 jsr @Rn */
L_0C0605D4: BLKS(0x0C0605D4u);
	r11 = 0xC2B0370u; UPD(0x0C0605D6u, 1);  /* 0C0605D4 mov.l @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C0605D8u, 1);  /* 0C0605D6 mov.l @Rm,Rn */
	r11 = 0xC22E048u; UPD(0x0C0605DAu, 1);  /* 0C0605D8 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0605DA and #imm,r0 */
	r2 = R32(r11); UPD(0x0C0605DEu, 2);  /* 0C0605DC mov.l @Rm,Rn */
	r4 = 0x12345678u; UPD(0x0C0605E0u, 1);  /* 0C0605DE mov.l @(disp,pc),Rn */
	T = r2 == r4;  /* 0C0605E0 cmp/eq Rm,Rn */
	IF(0x0C0605E2u); r6 = T;  /* 0C0605E2 movt Rn */
	r0 |= r6;  /* 0C0605E4 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0605E6 tst Rm,Rn */
	if (T) { UPD(0x0C0605F2u, 7); goto L_0C0605F2; }  /* 0C0605E8 bt */
L_0C0605EA: BLKS(0x0C0605EAu);
	r0 = 0xC0627E0u; UPD(0x0C0605ECu, 1);  /* 0C0605EA mov.l @(disp,pc),Rn */
	IF(0x0C0605ECu); { u32 t_ = r0; PR = 0x0C0605F0u; IF(0x0C0605EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0627E0, 0x0C0627E0u, 0x0C0605F0u); }  /* 0C0605EC jsr @Rn */
L_0C0605F0: BLKS(0x0C0605F0u);
	W32(r11, r8); UPD(0x0C0605F2u, 1);  /* 0C0605F0 mov.l Rm,@Rn */
L_0C0605F2: BLKS(0x0C0605F2u);
	r8 = 0xC0659C0u; UPD(0x0C0605F4u, 1);  /* 0C0605F2 mov.l @(disp,pc),Rn */
	r11 = 0xC068B90u; UPD(0x0C0605F6u, 1);  /* 0C0605F4 mov.l @(disp,pc),Rn */
	IF(0x0C0605F6u); { u32 t_ = r8; PR = 0x0C0605FAu; IF(0x0C0605F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0659C0, 0x0C0659C0u, 0x0C0605FAu); }  /* 0C0605F6 jsr @Rn */
L_0C0605FA: BLKS(0x0C0605FAu);
	r4 = 0xC29D18Cu; UPD(0x0C0605FCu, 1);  /* 0C0605FA mov.l @(disp,pc),Rn */
	W8(r4, r9); UPD(0x0C0605FEu, 1);  /* 0C0605FC mov.b Rm,@Rn */
	W8(r13, r10); UPD(0x0C060600u, 1);  /* 0C0605FE mov.b Rm,@Rn */
	r1 = 0xC28F5FCu; UPD(0x0C060602u, 1);  /* 0C060600 mov.l @(disp,pc),Rn */
	r0 = 0xC237C06u; UPD(0x0C060604u, 1);  /* 0C060602 mov.l @(disp,pc),Rn */
	r9 = 0xC068DA0u; UPD(0x0C060606u, 1);  /* 0C060604 mov.l @(disp,pc),Rn */
	r13 = 0xC07D6C0u; UPD(0x0C060608u, 1);  /* 0C060606 mov.l @(disp,pc),Rn */
	W8(r1, r10); UPD(0x0C06060Au, 1);  /* 0C060608 mov.b Rm,@Rn */
	IF(0x0C06060Au); { u32 t_ = r11; PR = 0x0C06060Eu; W8(r0, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068B90, 0x0C068B90u, 0x0C06060Eu); }  /* 0C06060A jsr @Rn */
L_0C06060E: BLKS(0x0C06060Eu);
	IF(0x0C06060Eu); { u32 t_ = r9; PR = 0x0C060612u; IF(0x0C060610u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C068DA0, 0x0C068DA0u, 0x0C060612u); }  /* 0C06060E jsr @Rn */
L_0C060612: BLKS(0x0C060612u);
	IF(0x0C060612u); { u32 t_ = r13; PR = 0x0C060616u; IF(0x0C060614u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D6C0, 0x0C07D6C0u, 0x0C060616u); }  /* 0C060612 jsr @Rn */
L_0C060616: BLKS(0x0C060616u);
	r8 = 0xC060750u; UPD(0x0C060618u, 1);  /* 0C060616 mov.l @(disp,pc),Rn */
	W8(r12, r10); UPD(0x0C06061Au, 1);  /* 0C060618 mov.b Rm,@Rn */
	IF(0x0C06061Au); ;  /* 0C06061A nop */
	UPD(0x0C06061Cu, 1);
L_0C06061C: BLKS(0x0C06061Cu);
	IF(0x0C06061Cu); { u32 t_ = r8; PR = 0x0C060620u; IF(0x0C06061Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060750, 0x0C060750u, 0x0C060620u); }  /* 0C06061C jsr @Rn */
L_0C060620: BLKS(0x0C060620u);
	{ IF(0x0C060622u); ; /* slot nop */ UPD(0x0C06061Cu, 3); goto L_0C06061C; }  /* 0C060620 bra */
L_0C060630: BLKS(0x0C060630u);
	r6 = 0xC239490u; UPD(0x0C060632u, 1);  /* 0C060630 mov.l @(disp,pc),Rn */
	r3 = 0xC2B1A5Au; UPD(0x0C060634u, 1);  /* 0C060632 mov.l @(disp,pc),Rn */
	r7 = 0xC239464u; UPD(0x0C060636u, 1);  /* 0C060634 mov.l @(disp,pc),Rn */
	{ r4 = (u32)(s32)(s8)R8(r3); /* slot mov.b @Rm,Rn */ UPD(0x0C060512u, 3); goto L_0C060512; }  /* 0C060636 bra */
}

/* FUN_0c060750 */
void blk_f_0C060750(sh3_t *c)
{
	LOCALS;
L_0C060750: BLKS(0x0C060750u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060752u, 1);  /* 0C060750 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060754u, 1);  /* 0C060752 mov.l Rm,@-Rn */
	r8 = 0xC06BBD0u; UPD(0x0C060756u, 1);  /* 0C060754 mov.l @(disp,pc),Rn */
	IF(0x0C060756u); r15 -= 4; W32(r15, PR); UPD(0x0C060758u, 1);  /* 0C060756 sts.l pr,@-Rn */
	IF(0x0C060758u); { u32 t_ = r8; PR = 0x0C06075Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06BBD0, 0x0C06BBD0u, 0x0C06075Cu); }  /* 0C060758 jsr @Rn */
L_0C06075C: BLKS(0x0C06075Cu);
	r2 = 0xC29D6D4u; UPD(0x0C06075Eu, 1);  /* 0C06075C mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06075E mov #imm,Rn */
	W32(r2 + 0x34u, r4); UPD(0x0C060762u, 2);  /* 0C060760 mov.l Rm,@(disp,Rn) */
	r6 = 0x5u;  /* 0C060762 mov #imm,Rn */
	r8 = 0xC29D454u; UPD(0x0C060766u, 2);  /* 0C060764 mov.l @(disp,pc),Rn */
	r0 = 0xC22E016u; UPD(0x0C060768u, 1);  /* 0C060766 mov.l @(disp,pc),Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C06076Au, 1);  /* 0C060768 mov.l Rm,@(disp,Rn) */
	r3 = 0xC238029u; UPD(0x0C06076Cu, 1);  /* 0C06076A mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C06076Eu, 1);  /* 0C06076C mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C060770u, 1);  /* 0C06076E mov.b @Rm,Rn */
	r2 = 0xC172980u; UPD(0x0C060772u, 1);  /* 0C060770 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C060772 and #imm,r0 */
	IF(0x0C060774u); r0 <<= 2;  /* 0C060774 shll2 Rn */
	r0 += r2;  /* 0C060776 add Rm,Rn */
	r0 += 0x2u;  /* 0C060778 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C06077Cu, 5);  /* 0C06077A mov.w @Rm,Rn */
	r7 = 0xC2ABAA0u; UPD(0x0C06077Eu, 1);  /* 0C06077C mov.l @(disp,pc),Rn */
	r5 = 0xC2A6D64u; UPD(0x0C060780u, 1);  /* 0C06077E mov.l @(disp,pc),Rn */
	r0 = 0xC239466u; UPD(0x0C060782u, 1);  /* 0C060780 mov.l @(disp,pc),Rn */
	r8 = 0xC0C21A0u; UPD(0x0C060784u, 1);  /* 0C060782 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C060786u, 1);  /* 0C060784 mov.b Rm,@Rn */
	W8(r5, r6); UPD(0x0C060788u, 1);  /* 0C060786 mov.b Rm,@Rn */
	W16(r0, r1); UPD(0x0C06078Au, 1);  /* 0C060788 mov.w Rm,@Rn */
	IF(0x0C06078Au); ;  /* 0C06078A nop */
	UPD(0x0C06078Cu, 1);
L_0C06078C: BLKS(0x0C06078Cu);
	IF(0x0C06078Cu); { u32 t_ = r8; PR = 0x0C060790u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C060790u); }  /* 0C06078C jsr @Rn */
L_0C060790: BLKS(0x0C060790u);
	r0 = 0xC06B810u; UPD(0x0C060792u, 1);  /* 0C060790 mov.l @(disp,pc),Rn */
	IF(0x0C060792u); { u32 t_ = r0; PR = 0x0C060796u; IF(0x0C060794u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06B810, 0x0C06B810u, 0x0C060796u); }  /* 0C060792 jsr @Rn */
L_0C060796: BLKS(0x0C060796u);
	r0 = 0xC06B930u; UPD(0x0C060798u, 1);  /* 0C060796 mov.l @(disp,pc),Rn */
	IF(0x0C060798u); { u32 t_ = r0; PR = 0x0C06079Cu; IF(0x0C06079Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06B930, 0x0C06B930u, 0x0C06079Cu); }  /* 0C060798 jsr @Rn */
L_0C06079C: BLKS(0x0C06079Cu);
	r0 = 0xC06A3C0u; UPD(0x0C06079Eu, 1);  /* 0C06079C mov.l @(disp,pc),Rn */
	IF(0x0C06079Eu); { u32 t_ = r0; PR = 0x0C0607A2u; IF(0x0C0607A0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06A3C0, 0x0C06A3C0u, 0x0C0607A2u); }  /* 0C06079E jsr @Rn */
L_0C0607A2: BLKS(0x0C0607A2u);
	r0 = 0xC06C630u; UPD(0x0C0607A4u, 1);  /* 0C0607A2 mov.l @(disp,pc),Rn */
	IF(0x0C0607A4u); { u32 t_ = r0; PR = 0x0C0607A8u; IF(0x0C0607A6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06C630, 0x0C06C630u, 0x0C0607A8u); }  /* 0C0607A4 jsr @Rn */
L_0C0607A8: BLKS(0x0C0607A8u);
	r0 = 0xC238020u; UPD(0x0C0607AAu, 1);  /* 0C0607A8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0607ACu, 1);  /* 0C0607AA mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0607AC tst Rm,Rn */
	if (T) { UPD(0x0C0607B6u, 4); goto L_0C0607B6; }  /* 0C0607AE bt */
L_0C0607B0: BLKS(0x0C0607B0u);
	r0 = 0xC06BD80u; UPD(0x0C0607B2u, 1);  /* 0C0607B0 mov.l @(disp,pc),Rn */
	IF(0x0C0607B2u); { u32 t_ = r0; PR = 0x0C0607B6u; IF(0x0C0607B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06BD80, 0x0C06BD80u, 0x0C0607B6u); }  /* 0C0607B2 jsr @Rn */
L_0C0607B6: BLKS(0x0C0607B6u);
	r0 = 0xC06AAD0u; UPD(0x0C0607B8u, 1);  /* 0C0607B6 mov.l @(disp,pc),Rn */
	IF(0x0C0607B8u); { u32 t_ = r0; PR = 0x0C0607BCu; IF(0x0C0607BAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06AAD0, 0x0C06AAD0u, 0x0C0607BCu); }  /* 0C0607B8 jsr @Rn */
L_0C0607BC: BLKS(0x0C0607BCu);
	{ IF(0x0C0607BEu); ; /* slot nop */ UPD(0x0C06078Cu, 3); goto L_0C06078C; }  /* 0C0607BC bra */
}

/* FUN_0c060810 */
void blk_f_0C060810(sh3_t *c)
{
	LOCALS;
L_0C060810: BLKS(0x0C060810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060812u, 1);  /* 0C060810 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C060812 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060816u, 2);  /* 0C060814 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C060816 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06081Au, 2);  /* 0C060818 mov.l Rm,@-Rn */
	r3 = 0x1u;  /* 0C06081A mov #imm,Rn */
	r9 = 0xC2860B0u; UPD(0x0C06081Eu, 2);  /* 0C06081C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06081E mov Rm,Rn */
	r8 = 0xC239480u; UPD(0x0C060822u, 2);  /* 0C060820 mov.l @(disp,pc),Rn */
	r4 = 0xC3C5468u; UPD(0x0C060824u, 1);  /* 0C060822 mov.l @(disp,pc),Rn */
	r5 = 0xC2B037Cu; UPD(0x0C060826u, 1);  /* 0C060824 mov.l @(disp,pc),Rn */
	r6 = 0xC2A6D44u; UPD(0x0C060828u, 1);  /* 0C060826 mov.l @(disp,pc),Rn */
	r7 = 0xC297494u; UPD(0x0C06082Au, 1);  /* 0C060828 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C06082A mov Rm,Rn */
	UPD(0x0C06082Cu, 1);
L_0C06082C: BLKS(0x0C06082Cu);
	r1 += r8;  /* 0C06082C add Rm,Rn */
	W8(r1, r2); UPD(0x0C060830u, 2);  /* 0C06082E mov.b Rm,@Rn */
	r1 = r0;  /* 0C060830 mov Rm,Rn */
	r1 += r6;  /* 0C060832 add Rm,Rn */
	W8(r1, r2); UPD(0x0C060836u, 3);  /* 0C060834 mov.b Rm,@Rn */
	r1 = r0;  /* 0C060836 mov Rm,Rn */
	r1 += r7;  /* 0C060838 add Rm,Rn */
	W8(r1, r2); UPD(0x0C06083Cu, 3);  /* 0C06083A mov.b Rm,@Rn */
	IF(0x0C06083Cu); W8(r0 + r9, r2); UPD(0x0C06083Eu, 1);  /* 0C06083C mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C06083E mov Rm,Rn */
	IF(0x0C060840u); W8(r0 + r4, r2); UPD(0x0C060842u, 2);  /* 0C060840 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C060842 add #imm,Rn */
	IF(0x0C060844u); W8(r0 + r5, r2); UPD(0x0C060846u, 2);  /* 0C060844 mov.b Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s8)r1;  /* 0C060846 exts.b Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C060848 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06082Cu, 5); goto L_0C06082C; } goto L_0C06084E; }  /* 0C06084A bf/s */
L_0C06084E: BLKS(0x0C06084Eu);
	r0 = 0xC234BA9u; UPD(0x0C060850u, 2);  /* 0C06084E mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C060850 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C060854u, 2);  /* 0C060852 mov.b Rm,@Rn */
	r1 = 0xCu;  /* 0C060854 mov #imm,Rn */
	r0 = 0xC2380CCu; UPD(0x0C060858u, 2);  /* 0C060856 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C06085Au, 1);  /* 0C060858 mov.l Rm,@Rn */
	r15 = r14;  /* 0C06085A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06085Eu, 2);  /* 0C06085C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060860u, 1);  /* 0C06085E mov.l @Rm+,Rn */
	IF(0x0C060860u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060860 rts */
}

/* FUN_0c060890 */
void blk_f_0C060890(sh3_t *c)
{
	LOCALS;
L_0C060890: BLKS(0x0C060890u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060892u, 1);  /* 0C060890 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060894u, 1);  /* 0C060892 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060896u, 1);  /* 0C060894 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C060898u, 1);  /* 0C060896 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06089Au, 1);  /* 0C060898 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06089Cu, 1);  /* 0C06089A mov.l Rm,@-Rn */
	r2 = 0xC237C06u; UPD(0x0C06089Eu, 1);  /* 0C06089C mov.l @(disp,pc),Rn */
	IF(0x0C06089Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0608A0u, 1);  /* 0C06089E sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0608A2u, 1);  /* 0C0608A0 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0608A2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0608ACu, 4); goto L_0C0608AC; } goto L_0C0608A8; }  /* 0C0608A4 bf/s */
L_0C0608A8: BLKS(0x0C0608A8u);
	{ IF(0x0C0608AAu); ; /* slot nop */ UPD(0x0C0609ACu, 4); goto L_0C0609AC; }  /* 0C0608A8 bra */
L_0C0608AC: BLKS(0x0C0608ACu);
	r8 = 0xA4000124u; UPD(0x0C0608AEu, 1);  /* 0C0608AC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0608B0u, 1);  /* 0C0608AE mov.b @Rm,Rn */
	r8 += 0x6u;  /* 0C0608B0 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0608B4u, 2);  /* 0C0608B2 mov.b @Rm,Rn */
	r5 = ~r1;  /* 0C0608B4 not Rm,Rn */
	r4 = 0xC239450u; UPD(0x0C0608B8u, 2);  /* 0C0608B6 mov.l @(disp,pc),Rn */
	r0 = ~r6;  /* 0C0608B8 not Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0608BCu, 2);  /* 0C0608BA mov.b @Rm,Rn */
	r0 &= 0x2u;  /* 0C0608BC and #imm,r0 */
	r5 |= r0;  /* 0C0608BE or Rm,Rn */
	W8(r4, r5); UPD(0x0C0608C2u, 3);  /* 0C0608C0 mov.b Rm,@Rn */
	r7 ^= r5;  /* 0C0608C2 xor Rm,Rn */
	r3 = 0xC3C8690u; UPD(0x0C0608C6u, 2);  /* 0C0608C4 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0608C6 add #imm,Rn */
	r7 &= r5;  /* 0C0608C8 and Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0608CCu, 3);  /* 0C0608CA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0608CC tst Rm,Rn */
	{ u32 c_ = T; W8(r4, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0608F8u, 4); goto L_0C0608F8; } UPD(0x0C0608D2u, 1); goto L_0C0608D2; }  /* 0C0608CE bt/s */
L_0C0608D2: BLKS(0x0C0608D2u);
	r9 = 0x1u;  /* 0C0608D2 mov #imm,Rn */
	r7 &= r9;  /* 0C0608D4 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0608D6 tst Rm,Rn */
	if (T) { UPD(0x0C0608F8u, 6); goto L_0C0608F8; }  /* 0C0608D8 bt */
L_0C0608DA: BLKS(0x0C0608DAu);
	r2 = 0xC2860B0u; UPD(0x0C0608DCu, 1);  /* 0C0608DA mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0608DEu, 1);  /* 0C0608DC mov.b @Rm,Rn */
	T = r0 == 0x9u;  /* 0C0608DE cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0608F8u, 4); goto L_0C0608F8; } goto L_0C0608E4; }  /* 0C0608E0 bt/s */
L_0C0608E4: BLKS(0x0C0608E4u);
	r10 = 0xC0C1FE0u; UPD(0x0C0608E6u, 2);  /* 0C0608E4 mov.l @(disp,pc),Rn */
	r7 = 0xC234BA9u; UPD(0x0C0608E8u, 1);  /* 0C0608E6 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C0608E8 add #imm,Rn */
	r11 = 0x1u;  /* 0C0608EA mov #imm,Rn */
	W8(r2, r12); UPD(0x0C0608EEu, 3);  /* 0C0608EC mov.b Rm,@Rn */
	r4 = 0x5Bu;  /* 0C0608EE mov #imm,Rn */
	W8(r7, r11); UPD(0x0C0608F2u, 2);  /* 0C0608F0 mov.b Rm,@Rn */
	IF(0x0C0608F2u); { u32 t_ = r10; PR = 0x0C0608F6u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1FE0, 0x0C0C1FE0u, 0x0C0608F6u); }  /* 0C0608F2 jsr @Rn */
L_0C0608F6: BLKS(0x0C0608F6u);
	IF(0x0C0608F6u); ;  /* 0C0608F6 nop */
	UPD(0x0C0608F8u, 1);
L_0C0608F8: BLKS(0x0C0608F8u);
	r3 = 0xC2B1810u; UPD(0x0C0608FAu, 1);  /* 0C0608F8 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0608FA mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0608FEu, 2);  /* 0C0608FC mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C0608FE extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r2;  /* 0C060900 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0609ACu, 5); goto L_0C0609AC; }  /* 0C060902 bt */
L_0C060904: BLKS(0x0C060904u);
	r12 = 0xC3C5468u; UPD(0x0C060906u, 1);  /* 0C060904 mov.l @(disp,pc),Rn */
	IF(0x0C060906u); ;  /* 0C060906 nop */
	UPD(0x0C060908u, 1);
L_0C060908: BLKS(0x0C060908u);
	r5 = 0xC2A6D68u; UPD(0x0C06090Au, 1);  /* 0C060908 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06090A mov Rm,Rn */
	r6 = 0xC3C43D4u; UPD(0x0C06090Eu, 2);  /* 0C06090C mov.l @(disp,pc),Rn */
	IF(0x0C06090Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060910u, 1);  /* 0C06090E mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C060910 mov Rm,Rn */
	r4 = 0xC297488u; UPD(0x0C060914u, 2);  /* 0C060912 mov.l @(disp,pc),Rn */
	IF(0x0C060914u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060916u, 1);  /* 0C060914 mov.b @(r0,Rm),Rn */
	r0 = r4;  /* 0C060916 mov Rm,Rn */
	IF(0x0C060918u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06091Au, 2);  /* 0C060918 mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C06091A mov Rm,Rn */
	IF(0x0C06091Cu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06091Eu, 2);  /* 0C06091C mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C06091E extu.b Rm,Rn */
	r0 = r4;  /* 0C060920 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C060922 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06092Cu, 6); goto L_0C06092C; } goto L_0C060928; }  /* 0C060924 bf/s */
L_0C060928: BLKS(0x0C060928u);
	{ IF(0x0C06092Au); ; /* slot nop */ UPD(0x0C060B20u, 4); goto L_0C060B20; }  /* 0C060928 bra */
L_0C06092C: BLKS(0x0C06092Cu);
	T = (s32)r4 > (s32)r7;  /* 0C06092C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C060936u, 4); goto L_0C060936; } goto L_0C060932; }  /* 0C06092E bf/s */
L_0C060932: BLKS(0x0C060932u);
	{ r0 = r4; /* slot mov Rm,Rn */ UPD(0x0C060AE0u, 4); goto L_0C060AE0; }  /* 0C060932 bra */
L_0C060936: BLKS(0x0C060936u);
	if (!T) { UPD(0x0C06093Cu, 3); goto L_0C06093C; }  /* 0C060936 bf */
L_0C060938: BLKS(0x0C060938u);
	{ IF(0x0C06093Au); ; /* slot nop */ UPD(0x0C060AC0u, 3); goto L_0C060AC0; }  /* 0C060938 bra */
L_0C06093C: BLKS(0x0C06093Cu);
	r4 = 0xC2A6D44u; UPD(0x0C06093Eu, 1);  /* 0C06093C mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06093E mov Rm,Rn */
	IF(0x0C060940u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060942u, 2);  /* 0C060940 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C060942 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C060944 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06094Eu, 5); goto L_0C06094E; } goto L_0C06094A; }  /* 0C060946 bf/s */
L_0C06094A: BLKS(0x0C06094Au);
	{ IF(0x0C06094Cu); ; /* slot nop */ UPD(0x0C060A80u, 4); goto L_0C060A80; }  /* 0C06094A bra */
L_0C06094E: BLKS(0x0C06094Eu);
	T = (s32)r0 > (s32)r6;  /* 0C06094E cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C060958u, 4); goto L_0C060958; } goto L_0C060954; }  /* 0C060950 bf/s */
L_0C060954: BLKS(0x0C060954u);
	{ IF(0x0C060956u); ; /* slot nop */ UPD(0x0C060A50u, 4); goto L_0C060A50; }  /* 0C060954 bra */
L_0C060958: BLKS(0x0C060958u);
	T = (r0 & r0) == 0;  /* 0C060958 tst Rm,Rn */
	if (T) { UPD(0x0C060A20u, 4); goto L_0C060A20; }  /* 0C06095A bt */
L_0C06095C: BLKS(0x0C06095Cu);
	r10 = 0xC2860B0u; UPD(0x0C06095Eu, 1);  /* 0C06095C mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C06095E mov #imm,Rn */
	r0 = r10;  /* 0C060960 mov Rm,Rn */
	IF(0x0C060962u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C060964u, 3);  /* 0C060962 mov.b @(r0,Rm),Rn */
	r11 = 0xC3C8690u; UPD(0x0C060966u, 1);  /* 0C060964 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C060966 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C060968 cmp/eq #imm,r0 */
	r0 = r11;  /* 0C06096A mov Rm,Rn */
	IF(0x0C06096Cu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06096Eu, 4);  /* 0C06096C mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06096E negc Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C060970 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C060972 negc Rm,Rn */
	T = (r7 & r0) == 0;  /* 0C060974 tst Rm,Rn */
	if (T) { UPD(0x0C060A00u, 7); goto L_0C060A00; }  /* 0C060976 bt */
L_0C060978: BLKS(0x0C060978u);
	r0 = r5;  /* 0C060978 mov Rm,Rn */
	r4 = 0xC2380CCu; UPD(0x0C06097Cu, 2);  /* 0C06097A mov.l @(disp,pc),Rn */
	r2 = 0xC172994u; UPD(0x0C06097Eu, 1);  /* 0C06097C mov.l @(disp,pc),Rn */
	IF(0x0C06097Eu); r0 <<= 2;  /* 0C06097E shll2 Rn */
	IF(0x0C060980u); r3 = R32(r0 + r2); UPD(0x0C060982u, 2);  /* 0C060980 mov.l @(r0,Rm),Rn */
	r7 = R32(r4); UPD(0x0C060984u, 1);  /* 0C060982 mov.l @Rm,Rn */
	r7 |= r3;  /* 0C060984 or Rm,Rn */
	W32(r4, r7); UPD(0x0C060988u, 2);  /* 0C060986 mov.l Rm,@Rn */
	r4 = 0xC239480u; UPD(0x0C06098Au, 1);  /* 0C060988 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06098A mov Rm,Rn */
	IF(0x0C06098Cu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06098Eu, 2);  /* 0C06098C mov.b @(r0,Rm),Rn */
	r2 = 0xC3C414Cu; UPD(0x0C060990u, 1);  /* 0C06098E mov.l @(disp,pc),Rn */
	r1 = r7 & 0xFF;  /* 0C060990 extu.b Rm,Rn */
	r0 = r2;  /* 0C060992 mov Rm,Rn */
	IF(0x0C060994u); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C060996u, 3);  /* 0C060994 mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C060996 extu.b Rm,Rn */
	T = r1 >= r0;  /* 0C060998 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0609C0u, 5); goto L_0C0609C0; }  /* 0C06099A bt */
L_0C06099C: BLKS(0x0C06099Cu);
	r6 = 0xC2B1810u; UPD(0x0C06099Eu, 1);  /* 0C06099C mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C06099E mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C0609A2u, 2);  /* 0C0609A0 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0609A2 add #imm,Rn */
	r8 = (u32)(s32)(s8)r11;  /* 0C0609A4 exts.b Rm,Rn */
	r9 = r10 & 0xFF;  /* 0C0609A6 extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C0609A8 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C060908u, 7); goto L_0C060908; }  /* 0C0609AA bf */
L_0C0609AC: BLKS(0x0C0609ACu);
	r15 = r14;  /* 0C0609AC mov Rm,Rn */
	IF(0x0C0609AEu); PR = R32(r15); r15 += 4; UPD(0x0C0609B0u, 2);  /* 0C0609AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0609B2u, 1);  /* 0C0609B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0609B4u, 1);  /* 0C0609B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0609B6u, 1);  /* 0C0609B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0609B8u, 1);  /* 0C0609B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0609BAu, 1);  /* 0C0609B8 mov.l @Rm+,Rn */
	IF(0x0C0609BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0609BA rts */
L_0C0609C0: BLKS(0x0C0609C0u);
	r2 = r7;  /* 0C0609C0 mov Rm,Rn */
	r2 -= r3;  /* 0C0609C2 sub Rm,Rn */
	r0 = r4;  /* 0C0609C4 mov Rm,Rn */
	IF(0x0C0609C6u); W8(r0 + r5, r2); UPD(0x0C0609C8u, 4);  /* 0C0609C6 mov.b Rm,@(r0,Rn) */
	r7 = 0xC2B1A58u; UPD(0x0C0609CAu, 1);  /* 0C0609C8 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0609CA mov Rm,Rn */
	IF(0x0C0609CCu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0609CEu, 2);  /* 0C0609CC mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C0609CE mov Rm,Rn */
	r4 += r6;  /* 0C0609D0 add Rm,Rn */
	IF(0x0C0609D2u); W8(r0 + r9, r4); UPD(0x0C0609D4u, 3);  /* 0C0609D2 mov.b Rm,@(r0,Rn) */
	r5 = 0x7u;  /* 0C0609D4 mov #imm,Rn */
	r0 = 0xC0C1FE0u; UPD(0x0C0609D8u, 2);  /* 0C0609D6 mov.l @(disp,pc),Rn */
	IF(0x0C0609D8u); { u32 t_ = r0; PR = 0x0C0609DCu; r4 = 0x5Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1FE0, 0x0C0C1FE0u, 0x0C0609DCu); }  /* 0C0609D8 jsr @Rn */
L_0C0609DC: BLKS(0x0C0609DCu);
	r0 = r10;  /* 0C0609DC mov Rm,Rn */
	IF(0x0C0609DEu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0609E0u, 2);  /* 0C0609DE mov.b @(r0,Rm),Rn */
	r3 = 0x9u;  /* 0C0609E0 mov #imm,Rn */
	r5 = r2 & 0xFF;  /* 0C0609E2 extu.b Rm,Rn */
	T = r5 > r3;  /* 0C0609E4 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0609ECu, 6); goto L_0C0609EC; }  /* 0C0609E6 bf */
L_0C0609E8: BLKS(0x0C0609E8u);
	IF(0x0C0609E8u); W8(r0 + r9, r3); UPD(0x0C0609EAu, 1);  /* 0C0609E8 mov.b Rm,@(r0,Rn) */
	r2 = 0x9u;  /* 0C0609EA mov #imm,Rn */
	UPD(0x0C0609ECu, 1);
L_0C0609EC: BLKS(0x0C0609ECu);
	r0 = r11;  /* 0C0609EC mov Rm,Rn */
	IF(0x0C0609EEu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0609F0u, 2);  /* 0C0609EE mov.b @(r0,Rm),Rn */
	r10 = r2 & 0xFF;  /* 0C0609F0 extu.b Rm,Rn */
	r9 = r6 & 0xFF;  /* 0C0609F2 extu.b Rm,Rn */
	T = r10 >= r9;  /* 0C0609F4 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C06099Cu, 6); goto L_0C06099C; }  /* 0C0609F6 bf */
L_0C0609F8: BLKS(0x0C0609F8u);
	r0 = 0x1u;  /* 0C0609F8 mov #imm,Rn */
	r11 = 0xC234BA9u; UPD(0x0C0609FCu, 2);  /* 0C0609FA mov.l @(disp,pc),Rn */
	{ W8(r11, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06099Cu, 3); goto L_0C06099C; }  /* 0C0609FC bra */
L_0C060A00: BLKS(0x0C060A00u);
	IF(0x0C060A00u); r5 <<= 2;  /* 0C060A00 shll2 Rn */
	r2 = 0xC172994u; UPD(0x0C060A04u, 2);  /* 0C060A02 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C060A04 mov Rm,Rn */
	r4 = 0xC2380CCu; UPD(0x0C060A08u, 2);  /* 0C060A06 mov.l @(disp,pc),Rn */
	IF(0x0C060A08u); r7 = R32(r0 + r2); UPD(0x0C060A0Au, 1);  /* 0C060A08 mov.l @(r0,Rm),Rn */
	r5 = 0xFFu; UPD(0x0C060A0Cu, 1);  /* 0C060A0A mov.w @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C060A0Eu, 1);  /* 0C060A0C mov.l @Rm,Rn */
	r5 -= r7;  /* 0C060A0E sub Rm,Rn */
	r3 &= r5;  /* 0C060A10 and Rm,Rn */
	{ W32(r4, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C06099Cu, 5); goto L_0C06099C; }  /* 0C060A12 bra */
L_0C060A20: BLKS(0x0C060A20u);
	r11 = 0xC2B037Cu; UPD(0x0C060A22u, 1);  /* 0C060A20 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C060A22 mov Rm,Rn */
	IF(0x0C060A24u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060A26u, 2);  /* 0C060A24 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C060A26 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06095Cu, 4); goto L_0C06095C; } goto L_0C060A2C; }  /* 0C060A28 bt/s */
L_0C060A2C: BLKS(0x0C060A2Cu);
	r11 = 0xC17298Cu; UPD(0x0C060A2Eu, 2);  /* 0C060A2C mov.l @(disp,pc),Rn */
	IF(0x0C060A2Eu); r0 <<= 2;  /* 0C060A2E shll2 Rn */
	IF(0x0C060A30u); r2 = R32(r0 + r11); UPD(0x0C060A32u, 2);  /* 0C060A30 mov.l @(r0,Rm),Rn */
	r3 = r7;  /* 0C060A32 mov Rm,Rn */
	r6 = 0xC2380CCu; UPD(0x0C060A36u, 2);  /* 0C060A34 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C060A36 mov Rm,Rn */
	r3 += 0x1u;  /* 0C060A38 add #imm,Rn */
	r10 = R32(r6); UPD(0x0C060A3Cu, 3);  /* 0C060A3A mov.l @Rm,Rn */
	r7 = 0x3Cu;  /* 0C060A3C mov #imm,Rn */
	IF(0x0C060A3Eu); W8(r0 + r8, r3); UPD(0x0C060A40u, 2);  /* 0C060A3E mov.b Rm,@(r0,Rn) */
	r10 |= r2;  /* 0C060A40 or Rm,Rn */
	r4 = 0xC28EDA8u; UPD(0x0C060A44u, 2);  /* 0C060A42 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C060A44 mov Rm,Rn */
	W32(r6, r10); UPD(0x0C060A48u, 2);  /* 0C060A46 mov.l Rm,@Rn */
	IF(0x0C060A48u); W8(r0 + r8, r7); UPD(0x0C060A4Au, 1);  /* 0C060A48 mov.b Rm,@(r0,Rn) */
L_0C060A4A: BLKS(0x0C060A4Au);
	{ IF(0x0C060A4Cu); ; /* slot nop */ UPD(0x0C06095Cu, 3); goto L_0C06095C; }  /* 0C060A4A bra */
L_0C060A50: BLKS(0x0C060A50u);
	if (!T) { UPD(0x0C060A4Au, 3); goto L_0C060A4A; }  /* 0C060A50 bf */
L_0C060A52: BLKS(0x0C060A52u);
	r1 = 0xC28EDA8u; UPD(0x0C060A54u, 1);  /* 0C060A52 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C060A54 mov Rm,Rn */
	IF(0x0C060A56u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060A58u, 2);  /* 0C060A56 mov.b @(r0,Rm),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C060A58 add #imm,Rn */
	r3 = r7 & 0xFF;  /* 0C060A5A extu.b Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C060A5C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C060A60u); W8(r0 + r8, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C060A4Au, 6); goto L_0C060A4A; } UPD(0x0C060A62u, 1); goto L_0C060A62; }  /* 0C060A5E bf/s */
L_0C060A62: BLKS(0x0C060A62u);
	r11 = 0xC2B037Cu; UPD(0x0C060A64u, 1);  /* 0C060A62 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C060A64 mov Rm,Rn */
	IF(0x0C060A66u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060A68u, 2);  /* 0C060A66 mov.b @(r0,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C060A68 add #imm,Rn */
	IF(0x0C060A6Au); W8(r0 + r8, r6); UPD(0x0C060A6Cu, 2);  /* 0C060A6A mov.b Rm,@(r0,Rn) */
	r0 = r4;  /* 0C060A6C mov Rm,Rn */
	IF(0x0C060A6Eu); W8(r0 + r8, r3); UPD(0x0C060A70u, 2);  /* 0C060A6E mov.b Rm,@(r0,Rn) */
	r4 = 0xC297494u; UPD(0x0C060A72u, 1);  /* 0C060A70 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C060A72 mov Rm,Rn */
	IF(0x0C060A74u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060A76u, 2);  /* 0C060A74 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C060A76 add #imm,Rn */
	UPD(0x0C060A78u, 1);
L_0C060A78: BLKS(0x0C060A78u);
	IF(0x0C060A78u); W8(r0 + r8, r1); UPD(0x0C060A7Au, 1);  /* 0C060A78 mov.b Rm,@(r0,Rn) */
L_0C060A7A: BLKS(0x0C060A7Au);
	{ IF(0x0C060A7Cu); ; /* slot nop */ UPD(0x0C06095Cu, 3); goto L_0C06095C; }  /* 0C060A7A bra */
L_0C060A80: BLKS(0x0C060A80u);
	r6 = 0xC28EDA8u; UPD(0x0C060A82u, 1);  /* 0C060A80 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C060A82 mov Rm,Rn */
	IF(0x0C060A84u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060A86u, 2);  /* 0C060A84 mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C060A86 add #imm,Rn */
	IF(0x0C060A88u); W8(r0 + r8, r3); UPD(0x0C060A8Au, 2);  /* 0C060A88 mov.b Rm,@(r0,Rn) */
	r0 = r3 & 0xFF;  /* 0C060A8A extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060A8C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060A7Au, 5); goto L_0C060A7A; } goto L_0C060A92; }  /* 0C060A8E bf/s */
L_0C060A92: BLKS(0x0C060A92u);
	r10 = 0xC17298Cu; UPD(0x0C060A94u, 2);  /* 0C060A92 mov.l @(disp,pc),Rn */
	IF(0x0C060A94u); r0 <<= 2;  /* 0C060A94 shll2 Rn */
	IF(0x0C060A96u); r2 = R32(r0 + r10); UPD(0x0C060A98u, 2);  /* 0C060A96 mov.l @(r0,Rm),Rn */
	r1 = 0x3Cu;  /* 0C060A98 mov #imm,Rn */
	r11 = 0xC2380CCu; UPD(0x0C060A9Cu, 2);  /* 0C060A9A mov.l @(disp,pc),Rn */
	r10 = r7;  /* 0C060A9C mov Rm,Rn */
	r3 = 0xFFu; UPD(0x0C060AA0u, 2);  /* 0C060A9E mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C060AA0 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C060AA4u, 2);  /* 0C060AA2 mov.l @Rm,Rn */
	r3 -= r2;  /* 0C060AA4 sub Rm,Rn */
	r0 &= r3;  /* 0C060AA6 and Rm,Rn */
	W32(r11, r0); UPD(0x0C060AAAu, 3);  /* 0C060AA8 mov.l Rm,@Rn */
	r0 = r4;  /* 0C060AAA mov Rm,Rn */
	IF(0x0C060AACu); W8(r0 + r8, r10); UPD(0x0C060AAEu, 2);  /* 0C060AAC mov.b Rm,@(r0,Rn) */
	{ r0 = r6; /* slot mov Rm,Rn */ UPD(0x0C060A78u, 3); goto L_0C060A78; }  /* 0C060AAE bra */
L_0C060AC0: BLKS(0x0C060AC0u);
	r0 = 0xC239450u; UPD(0x0C060AC2u, 1);  /* 0C060AC0 mov.l @(disp,pc),Rn */
	r2 = 0xC172988u; UPD(0x0C060AC4u, 1);  /* 0C060AC2 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C060AC6u, 1);  /* 0C060AC4 mov.b @Rm,Rn */
	r0 = r2;  /* 0C060AC6 mov Rm,Rn */
	IF(0x0C060AC8u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060ACAu, 2);  /* 0C060AC8 mov.b @(r0,Rm),Rn */
	T = (r11 & r10) == 0;  /* 0C060ACA tst Rm,Rn */
	{ u32 c_ = T; r4 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060ADCu, 4); goto L_0C060ADC; } goto L_0C060AD0; }  /* 0C060ACC bt/s */
L_0C060AD0: BLKS(0x0C060AD0u);
	r0 = r12;  /* 0C060AD0 mov Rm,Rn */
	r4 += 0x1u;  /* 0C060AD2 add #imm,Rn */
	IF(0x0C060AD4u); W8(r0 + r8, r4); UPD(0x0C060AD6u, 4);  /* 0C060AD4 mov.b Rm,@(r0,Rn) */
	r3 = 0xC3CA6F0u; UPD(0x0C060AD8u, 1);  /* 0C060AD6 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C060AD8 mov Rm,Rn */
	IF(0x0C060ADAu); W8(r0 + r8, r7); UPD(0x0C060ADCu, 2);  /* 0C060ADA mov.b Rm,@(r0,Rn) */
L_0C060ADC: BLKS(0x0C060ADCu);
	{ IF(0x0C060ADEu); ; /* slot nop */ UPD(0x0C06093Cu, 3); goto L_0C06093C; }  /* 0C060ADC bra */
L_0C060AE0: BLKS(0x0C060AE0u);
	T = r0 == 0x2u;  /* 0C060AE0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060ADCu, 4); goto L_0C060ADC; } goto L_0C060AE6; }  /* 0C060AE2 bf/s */
L_0C060AE6: BLKS(0x0C060AE6u);
	r2 = 0xC3CA6F0u; UPD(0x0C060AE8u, 2);  /* 0C060AE6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C060AE8 mov Rm,Rn */
	IF(0x0C060AEAu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060AECu, 2);  /* 0C060AEA mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C060AEC add #imm,Rn */
	r11 = r3 & 0xFF;  /* 0C060AEE extu.b Rm,Rn */
	T = r11 > r10;  /* 0C060AF0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C060B14u, 6); goto L_0C060B14; }  /* 0C060AF2 bt */
L_0C060AF4: BLKS(0x0C060AF4u);
	r1 = 0xC2B037Cu; UPD(0x0C060AF6u, 1);  /* 0C060AF4 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C060AF6 mov Rm,Rn */
	IF(0x0C060AF8u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C060AFAu, 2);  /* 0C060AF8 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C060AFA add #imm,Rn */
	IF(0x0C060AFCu); W8(r0 + r6, r4); UPD(0x0C060AFEu, 2);  /* 0C060AFC mov.b Rm,@(r0,Rn) */
	r7 = 0xC2860B0u; UPD(0x0C060B00u, 1);  /* 0C060AFE mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C060B00 mov Rm,Rn */
	IF(0x0C060B02u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C060B04u, 2);  /* 0C060B02 mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C060B04 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C060B06 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C060B14u, 5); goto L_0C060B14; }  /* 0C060B08 bt */
L_0C060B0A: BLKS(0x0C060B0Au);
	r11 = 0xC239480u; UPD(0x0C060B0Cu, 1);  /* 0C060B0A mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C060B0C mov Rm,Rn */
	IF(0x0C060B0Eu); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C060B10u, 2);  /* 0C060B0E mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C060B10 add #imm,Rn */
	IF(0x0C060B12u); W8(r0 + r5, r10); UPD(0x0C060B14u, 2);  /* 0C060B12 mov.b Rm,@(r0,Rn) */
L_0C060B14: BLKS(0x0C060B14u);
	r2 = 0xC3C5468u; UPD(0x0C060B16u, 1);  /* 0C060B14 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C060B16 mov #imm,Rn */
	r0 = r2;  /* 0C060B18 mov Rm,Rn */
	IF(0x0C060B1Au); W8(r0 + r8, r3); UPD(0x0C060B1Cu, 3);  /* 0C060B1A mov.b Rm,@(r0,Rn) */
L_0C060B1C: BLKS(0x0C060B1Cu);
	{ IF(0x0C060B1Eu); ; /* slot nop */ UPD(0x0C06093Cu, 3); goto L_0C06093C; }  /* 0C060B1C bra */
L_0C060B20: BLKS(0x0C060B20u);
	r10 = 0xC172988u; UPD(0x0C060B22u, 1);  /* 0C060B20 mov.l @(disp,pc),Rn */
	r11 = 0xC239450u; UPD(0x0C060B24u, 1);  /* 0C060B22 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C060B24 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C060B28u, 2);  /* 0C060B26 mov.b @Rm,Rn */
	IF(0x0C060B28u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060B2Au, 1);  /* 0C060B28 mov.b @(r0,Rm),Rn */
	T = (r6 & r7) == 0;  /* 0C060B2A tst Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060B50u, 4); goto L_0C060B50; } goto L_0C060B30; }  /* 0C060B2C bt/s */
L_0C060B30: BLKS(0x0C060B30u);
	r2 = 0xC3CA6F0u; UPD(0x0C060B32u, 2);  /* 0C060B30 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C060B32 mov Rm,Rn */
	IF(0x0C060B34u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C060B36u, 2);  /* 0C060B34 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C060B36 add #imm,Rn */
	IF(0x0C060B38u); W8(r0 + r8, r3); UPD(0x0C060B3Au, 2);  /* 0C060B38 mov.b Rm,@(r0,Rn) */
	r1 = r3 & 0xFF;  /* 0C060B3A extu.b Rm,Rn */
	r0 = 0xFu;  /* 0C060B3C mov #imm,Rn */
	T = r1 > r0;  /* 0C060B3E cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C060B1Cu, 6); goto L_0C060B1C; }  /* 0C060B40 bf */
L_0C060B42: BLKS(0x0C060B42u);
	r7 = 0xC29D18Cu; UPD(0x0C060B44u, 1);  /* 0C060B42 mov.l @(disp,pc),Rn */
	{ W8(r7, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06093Cu, 3); goto L_0C06093C; }  /* 0C060B44 bra */
L_0C060B50: BLKS(0x0C060B50u);
	r4 = r3;  /* 0C060B50 mov Rm,Rn */
	r4 += 0x1u;  /* 0C060B52 add #imm,Rn */
	{ IF(0x0C060B56u); W8(r0 + r8, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06093Cu, 5); goto L_0C06093C; }  /* 0C060B54 bra */
}

/* FUN_0c060bc0 */
void blk_f_0C060BC0(sh3_t *c)
{
	LOCALS;
L_0C060BC0: BLKS(0x0C060BC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060BC2u, 1);  /* 0C060BC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060BC4u, 1);  /* 0C060BC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060BC6u, 1);  /* 0C060BC4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060BC8u, 1);  /* 0C060BC6 mov.l Rm,@-Rn */
	r2 = 0xC2B1A2Cu; UPD(0x0C060BCAu, 1);  /* 0C060BC8 mov.l @(disp,pc),Rn */
	IF(0x0C060BCAu); r15 -= 4; W32(r15, PR); UPD(0x0C060BCCu, 1);  /* 0C060BCA sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C060BCEu, 1);  /* 0C060BCC mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060BCE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060BDAu, 4); goto L_0C060BDA; } goto L_0C060BD4; }  /* 0C060BD0 bt/s */
L_0C060BD4: BLKS(0x0C060BD4u);
	r0 = 0xC233726u; UPD(0x0C060BD6u, 2);  /* 0C060BD4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C060BD6 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C060BDAu, 2);  /* 0C060BD8 mov.b Rm,@Rn */
L_0C060BDA: BLKS(0x0C060BDAu);
	r4 = 0xC0C2B60u; UPD(0x0C060BDCu, 1);  /* 0C060BDA mov.l @(disp,pc),Rn */
	IF(0x0C060BDCu); { u32 t_ = r4; PR = 0x0C060BE0u; IF(0x0C060BDEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2B60, 0x0C0C2B60u, 0x0C060BE0u); }  /* 0C060BDC jsr @Rn */
L_0C060BE0: BLKS(0x0C060BE0u);
	r2 = 0xC29D718u; UPD(0x0C060BE2u, 1);  /* 0C060BE0 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C060BE4u, 1);  /* 0C060BE2 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C060BE4 tst Rm,Rn */
	{ u32 c_ = T; r8 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060BF6u, 4); goto L_0C060BF6; } goto L_0C060BEA; }  /* 0C060BE6 bt/s */
L_0C060BEA: BLKS(0x0C060BEAu);
	r9 = 0xC051764u; UPD(0x0C060BECu, 2);  /* 0C060BEA mov.l @(disp,pc),Rn */
L_0C060BEC: BLKS(0x0C060BECu);
	IF(0x0C060BECu); { u32 t_ = r9; PR = 0x0C060BF0u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C051764, 0x0C051764u, 0x0C060BF0u); }  /* 0C060BEC jsr @Rn */
L_0C060BF0: BLKS(0x0C060BF0u);
	r5 = R32(r8); UPD(0x0C060BF2u, 1);  /* 0C060BF0 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C060BF2 tst Rm,Rn */
	if (!T) { UPD(0x0C060BECu, 4); goto L_0C060BEC; }  /* 0C060BF4 bf */
L_0C060BF6: BLKS(0x0C060BF6u);
	r10 = 0xC2B1A54u; UPD(0x0C060BF8u, 1);  /* 0C060BF6 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C060BFAu, 1);  /* 0C060BF8 mov.w @Rm,Rn */
	r9 = 0xC2B039Cu; UPD(0x0C060BFCu, 1);  /* 0C060BFA mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C060BFC add #imm,Rn */
	W16(r10, r3); UPD(0x0C060C00u, 2);  /* 0C060BFE mov.w Rm,@Rn */
	r2 = R32(r9); UPD(0x0C060C02u, 1);  /* 0C060C00 mov.l @Rm,Rn */
	r10 = 0x0u;  /* 0C060C02 mov #imm,Rn */
	r7 = 0xC060DE0u; UPD(0x0C060C06u, 2);  /* 0C060C04 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C060C06 add #imm,Rn */
	r0 = 0xC3C4016u; UPD(0x0C060C0Au, 2);  /* 0C060C08 mov.l @(disp,pc),Rn */
	r8 = 0xC23946Cu; UPD(0x0C060C0Cu, 1);  /* 0C060C0A mov.l @(disp,pc),Rn */
	W32(r9, r2); UPD(0x0C060C0Eu, 1);  /* 0C060C0C mov.l Rm,@Rn */
	W16(r0, r10); UPD(0x0C060C10u, 1);  /* 0C060C0E mov.w Rm,@Rn */
	IF(0x0C060C10u); { u32 t_ = r7; PR = 0x0C060C14u; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060DE0, 0x0C060DE0u, 0x0C060C14u); }  /* 0C060C10 jsr @Rn */
L_0C060C14: BLKS(0x0C060C14u);
	r7 = 0xC3C5448u; UPD(0x0C060C16u, 1);  /* 0C060C14 mov.l @(disp,pc),Rn */
	r6 = 0xC239468u; UPD(0x0C060C18u, 1);  /* 0C060C16 mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C060C1Au, 1);  /* 0C060C18 mov.l @Rm,Rn */
	r3 = R32(r6); UPD(0x0C060C1Cu, 1);  /* 0C060C1A mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C060C1C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (s32)r2 >= (s32)r3; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C060C2Cu, 4); goto L_0C060C2C; } goto L_0C060C22; }  /* 0C060C1E bf/s */
L_0C060C22: BLKS(0x0C060C22u);
	r4 = r2;  /* 0C060C22 mov Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C060C24 add #imm,Rn */
	W32(r7, r4); UPD(0x0C060C28u, 4);  /* 0C060C26 mov.l Rm,@Rn */
	r2 = r4;  /* 0C060C28 mov Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C060C2A cmp/ge Rm,Rn */
	UPD(0x0C060C2Cu, 2);
L_0C060C2C: BLKS(0x0C060C2Cu);
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060C32u, 3); goto L_0C060C32; } goto L_0C060C30; }  /* 0C060C2C bt/s */
L_0C060C30: BLKS(0x0C060C30u);
	W32(r7, r2); UPD(0x0C060C32u, 2);  /* 0C060C30 mov.l Rm,@Rn */
L_0C060C32: BLKS(0x0C060C32u);
	r0 = 0xC0562D0u; UPD(0x0C060C34u, 1);  /* 0C060C32 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C060C34 mov #imm,Rn */
	r8 = 0xC3C86E8u; UPD(0x0C060C38u, 2);  /* 0C060C36 mov.l @(disp,pc),Rn */
	IF(0x0C060C38u); { u32 t_ = r0; PR = 0x0C060C3Cu; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C060C3Cu); }  /* 0C060C38 jsr @Rn */
L_0C060C3C: BLKS(0x0C060C3Cu);
	W32(r8, r0); UPD(0x0C060C3Eu, 1);  /* 0C060C3C mov.l Rm,@Rn */
	r0 -= r9;  /* 0C060C3E sub Rm,Rn */
	r8 = 0xC28F5FCu; UPD(0x0C060C42u, 2);  /* 0C060C40 mov.l @(disp,pc),Rn */
	r9 = 0xC3C4168u; UPD(0x0C060C44u, 1);  /* 0C060C42 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C060C46u, 1);  /* 0C060C44 mov.b @Rm,Rn */
	W32(r9, r0); UPD(0x0C060C48u, 1);  /* 0C060C46 mov.l Rm,@Rn */
	T = (r7 & r7) == 0;  /* 0C060C48 tst Rm,Rn */
	r6 = 0xC239450u; UPD(0x0C060C4Cu, 2);  /* 0C060C4A mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C060C4C mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C060C50u, 2);  /* 0C060C4E mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C060C50 negc Rm,Rn */
	IF(0x0C060C52u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C060C52 shar Rn */
	r0 &= 0x1u;  /* 0C060C54 and #imm,r0 */
	r5 &= r0;  /* 0C060C56 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C060C58 tst Rm,Rn */
	if (!T) { UPD(0x0C060CB0u, 8); goto L_0C060CB0; }  /* 0C060C5A bf */
L_0C060C5C: BLKS(0x0C060C5Cu);
	r2 = 0xC29CF84u; UPD(0x0C060C5Eu, 1);  /* 0C060C5C mov.l @(disp,pc),Rn */
	r7 = 0xC29D18Cu; UPD(0x0C060C60u, 1);  /* 0C060C5E mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C060C62u, 1);  /* 0C060C60 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C060C64u, 1);  /* 0C060C62 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C060C64 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C060C66 negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C060C68 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C060C6A negc Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C060C6C tst Rm,Rn */
	if (!T) { UPD(0x0C060CA0u, 8); goto L_0C060CA0; }  /* 0C060C6E bf */
L_0C060C70: BLKS(0x0C060C70u);
	r7 = 0xC2B0370u; UPD(0x0C060C72u, 1);  /* 0C060C70 mov.l @(disp,pc),Rn */
	r6 = 0xB8000050u; UPD(0x0C060C74u, 1);  /* 0C060C72 mov.l @(disp,pc),Rn */
	r5 = R32(r7); UPD(0x0C060C76u, 1);  /* 0C060C74 mov.l @Rm,Rn */
	r4 = R32(r6); UPD(0x0C060C78u, 1);  /* 0C060C76 mov.l @Rm,Rn */
	T = r5 == r4;  /* 0C060C78 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C060C82u, 4); goto L_0C060C82; }  /* 0C060C7A bt */
L_0C060C7C: BLKS(0x0C060C7Cu);
	r9 = 0xC060D30u; UPD(0x0C060C7Eu, 1);  /* 0C060C7C mov.l @(disp,pc),Rn */
	IF(0x0C060C7Eu); { u32 t_ = r9; PR = 0x0C060C82u; IF(0x0C060C80u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060D30, 0x0C060D30u, 0x0C060C82u); }  /* 0C060C7E jsr @Rn */
L_0C060C82: BLKS(0x0C060C82u);
	r8 = 0xC2B1A2Cu; UPD(0x0C060C84u, 1);  /* 0C060C82 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C060C86u, 1);  /* 0C060C84 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C060C86 tst Rm,Rn */
	if (!T) { UPD(0x0C060C8Eu, 4); goto L_0C060C8E; }  /* 0C060C88 bf */
L_0C060C8A: BLKS(0x0C060C8Au);
	r0 = 0xC233726u; UPD(0x0C060C8Cu, 1);  /* 0C060C8A mov.l @(disp,pc),Rn */
	W8(r0, r10); UPD(0x0C060C8Eu, 1);  /* 0C060C8C mov.b Rm,@Rn */
L_0C060C8E: BLKS(0x0C060C8Eu);
	r4 = 0xC2B0808u; UPD(0x0C060C90u, 1);  /* 0C060C8E mov.l @(disp,pc),Rn */
	r3 = 0xC05D7CCu; UPD(0x0C060C92u, 1);  /* 0C060C90 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C060C92 mov Rm,Rn */
	IF(0x0C060C94u); PR = R32(r15); r15 += 4; UPD(0x0C060C96u, 2);  /* 0C060C94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060C98u, 1);  /* 0C060C96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060C9Au, 1);  /* 0C060C98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060C9Cu, 1);  /* 0C060C9A mov.l @Rm+,Rn */
	IF(0x0C060C9Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05D7CCu: TAIL(blk_f_0C05D7CC); default: JUMPD(tv_); } }  /* 0C060C9C jmp @Rn */
L_0C060CA0: BLKS(0x0C060CA0u);
	r8 = 0xC060D30u; UPD(0x0C060CA2u, 1);  /* 0C060CA0 mov.l @(disp,pc),Rn */
	r3 = 0x12345678u; UPD(0x0C060CA4u, 1);  /* 0C060CA2 mov.l @(disp,pc),Rn */
	r0 = 0xC2B1A28u; UPD(0x0C060CA6u, 1);  /* 0C060CA4 mov.l @(disp,pc),Rn */
	IF(0x0C060CA6u); { u32 t_ = r8; PR = 0x0C060CAAu; W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060D30, 0x0C060D30u, 0x0C060CAAu); }  /* 0C060CA6 jsr @Rn */
L_0C060CAA: BLKS(0x0C060CAAu);
	{ IF(0x0C060CACu); ; /* slot nop */ UPD(0x0C060C70u, 3); goto L_0C060C70; }  /* 0C060CAA bra */
L_0C060CB0: BLKS(0x0C060CB0u);
	r2 = 0xC060D30u; UPD(0x0C060CB2u, 1);  /* 0C060CB0 mov.l @(disp,pc),Rn */
	r3 = 0x12345678u; UPD(0x0C060CB4u, 1);  /* 0C060CB2 mov.l @(disp,pc),Rn */
	r0 = 0xC22E048u; UPD(0x0C060CB6u, 1);  /* 0C060CB4 mov.l @(disp,pc),Rn */
	IF(0x0C060CB6u); { u32 t_ = r2; PR = 0x0C060CBAu; W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060D30, 0x0C060D30u, 0x0C060CBAu); }  /* 0C060CB6 jsr @Rn */
L_0C060CBA: BLKS(0x0C060CBAu);
	{ IF(0x0C060CBCu); ; /* slot nop */ UPD(0x0C060C5Cu, 3); goto L_0C060C5C; }  /* 0C060CBA bra */
}

/* FUN_0c060d30 */
void blk_f_0C060D30(sh3_t *c)
{
	LOCALS;
L_0C060D30: BLKS(0x0C060D30u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060D32u, 1);  /* 0C060D30 mov.l Rm,@-Rn */
	r0 = 0xC060480u; UPD(0x0C060D34u, 1);  /* 0C060D32 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C060D34 mov Rm,Rn */
	r15 = r14;  /* 0C060D36 mov Rm,Rn */
	IF(0x0C060D38u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C060480u: TAIL(blk_f_0C060480); default: JUMPD(tv_); } }  /* 0C060D38 jmp @Rn */
}

/* FUN_0c060d40 */
void blk_f_0C060D40(sh3_t *c)
{
	LOCALS;
L_0C060D40: BLKS(0x0C060D40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060D42u, 1);  /* 0C060D40 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C060D42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060D46u, 2);  /* 0C060D44 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C060D46 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060D4Au, 2);  /* 0C060D48 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C060D4Cu, 1);  /* 0C060D4A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C060D4Eu, 1);  /* 0C060D4C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C060D50u, 1);  /* 0C060D4E mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C060D50 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060D54u, 2);  /* 0C060D52 mov.l Rm,@-Rn */
	r13 = 0x2u;  /* 0C060D54 mov #imm,Rn */
	r11 = 0xC237C12u; UPD(0x0C060D58u, 2);  /* 0C060D56 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C060D58 mov Rm,Rn */
	r10 = 0xC228BF8u; UPD(0x0C060D5Cu, 2);  /* 0C060D5A mov.l @(disp,pc),Rn */
	r9 = 0xC297638u; UPD(0x0C060D5Eu, 1);  /* 0C060D5C mov.l @(disp,pc),Rn */
	r8 = 0xC2B03A6u; UPD(0x0C060D60u, 1);  /* 0C060D5E mov.l @(disp,pc),Rn */
L_0C060D60: BLKS(0x0C060D60u);
	r6 = r12;  /* 0C060D60 mov Rm,Rn */
	r5 = 0x3Fu;  /* 0C060D62 mov #imm,Rn */
	r6 += r6;  /* 0C060D64 add Rm,Rn */
	r5 += 0x1u;  /* 0C060D66 add #imm,Rn */
	UPD(0x0C060D68u, 4);
L_0C060D68: BLKS(0x0C060D68u);
	r7 = r6;  /* 0C060D68 mov Rm,Rn */
	r3 = r6;  /* 0C060D6A mov Rm,Rn */
	r2 = r6;  /* 0C060D6C mov Rm,Rn */
	r1 = r6;  /* 0C060D6E mov Rm,Rn */
	r7 += r11;  /* 0C060D70 add Rm,Rn */
	r3 += r10;  /* 0C060D72 add Rm,Rn */
	r2 += r9;  /* 0C060D74 add Rm,Rn */
	r1 += r8;  /* 0C060D76 add Rm,Rn */
	W16(r1, r4); UPD(0x0C060D7Au, 9);  /* 0C060D78 mov.w Rm,@Rn */
	r6 += 0x2u;  /* 0C060D7A add #imm,Rn */
	W16(r2, r4); UPD(0x0C060D7Eu, 2);  /* 0C060D7C mov.w Rm,@Rn */
	IF(0x0C060D7Eu); r5 -= 1; T = r5 == 0;  /* 0C060D7E dt Rn */
	W16(r3, r4); UPD(0x0C060D82u, 2);  /* 0C060D80 mov.w Rm,@Rn */
	{ u32 c_ = !T; W16(r7, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C060D68u, 3); goto L_0C060D68; } UPD(0x0C060D86u, 1); goto L_0C060D86; }  /* 0C060D82 bf/s */
L_0C060D86: BLKS(0x0C060D86u);
	r2 = 0x80u; UPD(0x0C060D88u, 1);  /* 0C060D86 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C060D88 add #imm,Rn */
	T = (s32)r0 > (s32)r13;  /* 0C060D8A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C060D60u, 5); goto L_0C060D60; } goto L_0C060D90; }  /* 0C060D8C bf/s */
L_0C060D90: BLKS(0x0C060D90u);
	r7 = 0x545Fu; UPD(0x0C060D92u, 2);  /* 0C060D90 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C060D92 mov #imm,Rn */
	r3 = 0xC165148u; UPD(0x0C060D96u, 2);  /* 0C060D94 mov.l @(disp,pc),Rn */
	r2 = 0xC3B1B0Cu; UPD(0x0C060D98u, 1);  /* 0C060D96 mov.l @(disp,pc),Rn */
L_0C060D98: BLKS(0x0C060D98u);
	IF(0x0C060D98u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060D9Au, 1);  /* 0C060D98 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C060D9A extu.b Rm,Rn */
	W16(r2, r4); UPD(0x0C060D9Eu, 2);  /* 0C060D9C mov.w Rm,@Rn */
	r0 += 0x1u;  /* 0C060D9E add #imm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C060DA0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060D98u, 5); goto L_0C060D98; } goto L_0C060DA6; }  /* 0C060DA2 bf/s */
L_0C060DA6: BLKS(0x0C060DA6u);
	r15 = r14;  /* 0C060DA6 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060DAAu, 3);  /* 0C060DA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C060DACu, 1);  /* 0C060DAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C060DAEu, 1);  /* 0C060DAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060DB0u, 1);  /* 0C060DAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060DB2u, 1);  /* 0C060DB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060DB4u, 1);  /* 0C060DB2 mov.l @Rm+,Rn */
	IF(0x0C060DB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060DB4 rts */
}

/* FUN_0c060de0 */
void blk_f_0C060DE0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C060ED0);
L_0C060DE0: BLKS(0x0C060DE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060DE2u, 1);  /* 0C060DE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060DE4u, 1);  /* 0C060DE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060DE6u, 1);  /* 0C060DE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C060DE8u, 1);  /* 0C060DE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C060DEAu, 1);  /* 0C060DE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C060DECu, 1);  /* 0C060DEA mov.l Rm,@-Rn */
	r2 = 0xC286104u; UPD(0x0C060DEEu, 1);  /* 0C060DEC mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060DF0u, 1);  /* 0C060DEE mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C060DF2u, 1);  /* 0C060DF0 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060DF2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060DFCu, 4); goto L_0C060DFC; } goto L_0C060DF8; }  /* 0C060DF4 bf/s */
L_0C060DF8: BLKS(0x0C060DF8u);
	{ IF(0x0C060DFAu); ; /* slot nop */ UPD(0x0C060F68u, 4); goto L_0C060F68; }  /* 0C060DF8 bra */
L_0C060DFC: BLKS(0x0C060DFCu);
	r6 = 0x102u; UPD(0x0C060DFEu, 1);  /* 0C060DFC mov.w @(disp,pc),Rn */
	r5 = 0x3Eu;  /* 0C060DFE mov #imm,Rn */
	r7 = 0x100u; UPD(0x0C060E02u, 2);  /* 0C060E00 mov.w @(disp,pc),Rn */
	r3 = 0xC237C8Eu; UPD(0x0C060E04u, 1);  /* 0C060E02 mov.l @(disp,pc),Rn */
L_0C060E04: BLKS(0x0C060E04u);
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C060E06u, 1);  /* 0C060E04 mov.w @Rm,Rn */
	r10 = r5;  /* 0C060E06 mov Rm,Rn */
	r3 += 0x2u;  /* 0C060E08 add #imm,Rn */
	W16(r3, r0); UPD(0x0C060E0Cu, 3);  /* 0C060E0A mov.w Rm,@Rn */
	r10 += r10;  /* 0C060E0C add Rm,Rn */
	r3 += 0xFFFFFFFEu;  /* 0C060E0E add #imm,Rn */
	r0 = r3;  /* 0C060E10 mov Rm,Rn */
	IF(0x0C060E12u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C060E14u, 4);  /* 0C060E12 mov.w @(r0,Rm),Rn */
	IF(0x0C060E14u); W16(r0 + r6, r9); UPD(0x0C060E16u, 1);  /* 0C060E14 mov.w Rm,@(r0,Rn) */
	r9 = 0xC228BF8u; UPD(0x0C060E18u, 1);  /* 0C060E16 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C060E18 mov Rm,Rn */
	r0 += r9;  /* 0C060E1A add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C060E1Eu, 3);  /* 0C060E1C mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C060E1E add #imm,Rn */
	W16(r0, r2); UPD(0x0C060E22u, 2);  /* 0C060E20 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C060E22 add #imm,Rn */
	IF(0x0C060E24u); r13 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C060E26u, 2);  /* 0C060E24 mov.w @(r0,Rm),Rn */
	IF(0x0C060E26u); W16(r0 + r6, r13); UPD(0x0C060E28u, 1);  /* 0C060E26 mov.w Rm,@(r0,Rn) */
	r0 = 0xC297638u; UPD(0x0C060E2Au, 1);  /* 0C060E28 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C060E2A add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C060E2Eu, 2);  /* 0C060E2C mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C060E2E add #imm,Rn */
	W16(r0, r12); UPD(0x0C060E32u, 2);  /* 0C060E30 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C060E32 add #imm,Rn */
	IF(0x0C060E34u); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C060E36u, 2);  /* 0C060E34 mov.w @(r0,Rm),Rn */
	IF(0x0C060E36u); W16(r0 + r6, r11); UPD(0x0C060E38u, 1);  /* 0C060E36 mov.w Rm,@(r0,Rn) */
	r0 = 0xC2B03A6u; UPD(0x0C060E3Au, 1);  /* 0C060E38 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C060E3A add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C060E3Eu, 2);  /* 0C060E3C mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C060E3E add #imm,Rn */
	W16(r0, r8); UPD(0x0C060E42u, 2);  /* 0C060E40 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C060E42 add #imm,Rn */
	IF(0x0C060E44u); r4 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C060E46u, 2);  /* 0C060E44 mov.w @(r0,Rm),Rn */
	IF(0x0C060E46u); W16(r0 + r6, r4); UPD(0x0C060E48u, 1);  /* 0C060E46 mov.w Rm,@(r0,Rn) */
	r0 = r5;  /* 0C060E48 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C060E4A add #imm,Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C060E4C exts.w Rm,Rn */
	IF(0x0C060E4Eu); T = (s32)r5 >= 0;  /* 0C060E4E cmp/pz Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060E04u, 7); goto L_0C060E04; } goto L_0C060E54; }  /* 0C060E50 bt/s */
L_0C060E54: BLKS(0x0C060E54u);
	r2 = 0xA4000124u; UPD(0x0C060E56u, 2);  /* 0C060E54 mov.l @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C060E56 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C060E5Au, 2);  /* 0C060E58 mov.b @Rm,Rn */
	r8 = 0x20u;  /* 0C060E5A mov #imm,Rn */
	r12 = 0xFFu; UPD(0x0C060E5Eu, 2);  /* 0C060E5C mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C060E5E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C060E62u, 2);  /* 0C060E60 mov.b @Rm,Rn */
	r12 ^= r6;  /* 0C060E62 xor Rm,Rn */
	r5 = 0xFFu; UPD(0x0C060E66u, 2);  /* 0C060E64 mov.w @(disp,pc),Rn */
	r7 &= r12;  /* 0C060E66 and Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C060E68 extu.b Rm,Rn */
	IF(0x0C060E6Au); r7 <<= 2;  /* 0C060E6A shll2 Rn */
	r13 = 0xC237C12u; UPD(0x0C060E6Eu, 4);  /* 0C060E6C mov.l @(disp,pc),Rn */
	r6 ^= r5;  /* 0C060E6E xor Rm,Rn */
	IF(0x0C060E70u); r7 <<= 2;  /* 0C060E70 shll2 Rn */
	r6 |= r7;  /* 0C060E72 or Rm,Rn */
	W16(r13, r6); UPD(0x0C060E76u, 4);  /* 0C060E74 mov.w Rm,@Rn */
	r8 &= r12;  /* 0C060E76 and Rm,Rn */
	r10 = 0xA4000134u; UPD(0x0C060E7Au, 2);  /* 0C060E78 mov.l @(disp,pc),Rn */
	IF(0x0C060E7Au); r8 <<= 2;  /* 0C060E7A shll2 Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C060E7Eu, 2);  /* 0C060E7C mov.b @Rm,Rn */
	r8 += r8;  /* 0C060E7E add Rm,Rn */
	r1 = r3 & 0xFF;  /* 0C060E80 extu.b Rm,Rn */
	r3 = 0xFFu; UPD(0x0C060E84u, 3);  /* 0C060E82 mov.w @(disp,pc),Rn */
	r7 = r6;  /* 0C060E84 mov Rm,Rn */
	r3 ^= r1;  /* 0C060E86 xor Rm,Rn */
	r3 |= r8;  /* 0C060E88 or Rm,Rn */
	r8 = r13;  /* 0C060E8A mov Rm,Rn */
	r8 += 0x2u;  /* 0C060E8C add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C060E90u, 6);  /* 0C060E8E mov.w @Rm,Rn */
	r4 = r6;  /* 0C060E90 mov Rm,Rn */
	r10 = 0x100u; UPD(0x0C060E94u, 2);  /* 0C060E92 mov.w @(disp,pc),Rn */
	r7 ^= r11;  /* 0C060E94 xor Rm,Rn */
	r4 &= r7;  /* 0C060E96 and Rm,Rn */
	r0 = r13;  /* 0C060E98 mov Rm,Rn */
	IF(0x0C060E9Au); W16(r0 + r10, r4); UPD(0x0C060E9Cu, 4);  /* 0C060E9A mov.w Rm,@(r0,Rn) */
	r12 = r3;  /* 0C060E9C mov Rm,Rn */
	W16(r9, r3); UPD(0x0C060EA0u, 2);  /* 0C060E9E mov.w Rm,@Rn */
	r4 = r9;  /* 0C060EA0 mov Rm,Rn */
	r4 += 0x2u;  /* 0C060EA2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C060EA6u, 3);  /* 0C060EA4 mov.w @Rm,Rn */
	r5 = r3;  /* 0C060EA6 mov Rm,Rn */
	r12 ^= r0;  /* 0C060EA8 xor Rm,Rn */
	r0 = r9;  /* 0C060EAA mov Rm,Rn */
	r5 &= r12;  /* 0C060EAC and Rm,Rn */
	IF(0x0C060EAEu); W16(r0 + r10, r5); UPD(0x0C060EB0u, 5);  /* 0C060EAE mov.w Rm,@(r0,Rn) */
	r2 = 0x3Fu;  /* 0C060EB0 mov #imm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C060EB2 add #imm,Rn */
	r11 = 0x300u; UPD(0x0C060EB6u, 3);  /* 0C060EB4 mov.w @(disp,pc),Rn */
	r6 ^= r10;  /* 0C060EB6 xor Rm,Rn */
	r6 &= r7;  /* 0C060EB8 and Rm,Rn */
	r0 = r13;  /* 0C060EBA mov Rm,Rn */
	IF(0x0C060EBCu); W16(r0 + r11, r6); UPD(0x0C060EBEu, 4);  /* 0C060EBC mov.w Rm,@(r0,Rn) */
	r1 = r10;  /* 0C060EBE mov Rm,Rn */
	r0 = r9;  /* 0C060EC0 mov Rm,Rn */
	r1 ^= r3;  /* 0C060EC2 xor Rm,Rn */
	r1 &= r12;  /* 0C060EC4 and Rm,Rn */
	r9 = 0x1FFu; UPD(0x0C060EC8u, 5);  /* 0C060EC6 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C060EC8 mov #imm,Rn */
	IF(0x0C060ECAu); W16(r0 + r11, r1); UPD(0x0C060ECCu, 2);  /* 0C060ECA mov.w Rm,@(r0,Rn) */
	r6 = r9;  /* 0C060ECC mov Rm,Rn */
	IF(0x0C060ECEu); ;  /* 0C060ECE nop */
	UPD(0x0C060ED0u, 2);
L_0C060ED0: BLKS(0x0C060ED0u);
	SPIN_SAVE(0C060ED0);
	r13 = r5;  /* 0C060ED0 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)RS16(0C060ED0, r8); r8 += 2; r12 = v_; } UPD(0x0C060ED4u, 2);  /* 0C060ED2 mov.w @Rm+,Rn */
	r13 += 0x1u;  /* 0C060ED4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)RS16(0C060ED0, r4); r4 += 2; r11 = v_; } UPD(0x0C060ED8u, 2);  /* 0C060ED6 mov.w @Rm+,Rn */
	r5 = (u32)(s32)(s16)r13;  /* 0C060ED8 exts.w Rm,Rn */
	r6 &= r12;  /* 0C060EDA and Rm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C060EDC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 &= r11; /* slot and Rm,Rn */ if (c_) { SPIN_FFD(0C060ED0, 10); UPD(0x0C060ED0u, 6); goto L_0C060ED0; } goto L_0C060EE2; }  /* 0C060EDE bf/s */
L_0C060EE2: BLKS(0x0C060EE2u);
	r8 = 0xC237C12u; UPD(0x0C060EE4u, 2);  /* 0C060EE2 mov.l @(disp,pc),Rn */
	r12 = 0x100u; UPD(0x0C060EE6u, 1);  /* 0C060EE4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C060EE6 mov Rm,Rn */
	IF(0x0C060EE8u); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C060EEAu, 2);  /* 0C060EE8 mov.w @(r0,Rm),Rn */
	r0 = 0x200u; UPD(0x0C060EECu, 1);  /* 0C060EEA mov.w @(disp,pc),Rn */
	r6 |= r7;  /* 0C060EEC or Rm,Rn */
	IF(0x0C060EEEu); W16(r0 + r8, r6); UPD(0x0C060EF0u, 2);  /* 0C060EEE mov.w Rm,@(r0,Rn) */
	r11 = r7;  /* 0C060EF0 mov Rm,Rn */
	r10 = 0xC228BF8u; UPD(0x0C060EF4u, 2);  /* 0C060EF2 mov.l @(disp,pc),Rn */
	r1 = r7;  /* 0C060EF4 mov Rm,Rn */
	r0 = r10;  /* 0C060EF6 mov Rm,Rn */
	IF(0x0C060EF8u); r4 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C060EFAu, 3);  /* 0C060EF8 mov.w @(r0,Rm),Rn */
	r0 = 0x200u; UPD(0x0C060EFCu, 1);  /* 0C060EFA mov.w @(disp,pc),Rn */
	r9 |= r4;  /* 0C060EFC or Rm,Rn */
	IF(0x0C060EFEu); W16(r0 + r10, r9); UPD(0x0C060F00u, 2);  /* 0C060EFE mov.w Rm,@(r0,Rn) */
	r11 |= r4;  /* 0C060F00 or Rm,Rn */
	r2 = 0xC297638u; UPD(0x0C060F04u, 2);  /* 0C060F02 mov.l @(disp,pc),Rn */
	r1 &= r4;  /* 0C060F04 and Rm,Rn */
	r0 = r2;  /* 0C060F06 mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C060F0Au, 3);  /* 0C060F08 mov.w @Rm,Rn */
	IF(0x0C060F0Au); W16(r0 + r12, r11); UPD(0x0C060F0Cu, 1);  /* 0C060F0A mov.w Rm,@(r0,Rn) */
	r13 = r3;  /* 0C060F0C mov Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C060F10u, 2);  /* 0C060F0E mov.w @Rm,Rn */
	r11 = r6;  /* 0C060F10 mov Rm,Rn */
	r0 = 0x200u; UPD(0x0C060F14u, 2);  /* 0C060F12 mov.w @(disp,pc),Rn */
	r11 |= r9;  /* 0C060F14 or Rm,Rn */
	r13 |= r5;  /* 0C060F16 or Rm,Rn */
	IF(0x0C060F18u); W16(r0 + r2, r11); UPD(0x0C060F1Au, 3);  /* 0C060F18 mov.w Rm,@(r0,Rn) */
	W16(r2, r13); UPD(0x0C060F1Cu, 1);  /* 0C060F1A mov.w Rm,@Rn */
	r0 = r3;  /* 0C060F1C mov Rm,Rn */
	r2 = 0xC2B03A6u; UPD(0x0C060F20u, 2);  /* 0C060F1E mov.l @(disp,pc),Rn */
	r0 &= r5;  /* 0C060F20 and Rm,Rn */
	W16(r2, r0); UPD(0x0C060F24u, 2);  /* 0C060F22 mov.w Rm,@Rn */
	r0 = r2;  /* 0C060F24 mov Rm,Rn */
	IF(0x0C060F26u); W16(r0 + r12, r1); UPD(0x0C060F28u, 2);  /* 0C060F26 mov.w Rm,@(r0,Rn) */
	r1 = r6;  /* 0C060F28 mov Rm,Rn */
	r0 = 0x200u; UPD(0x0C060F2Cu, 2);  /* 0C060F2A mov.w @(disp,pc),Rn */
	r1 &= r9;  /* 0C060F2C and Rm,Rn */
	IF(0x0C060F2Eu); W16(r0 + r2, r1); UPD(0x0C060F30u, 2);  /* 0C060F2E mov.w Rm,@(r0,Rn) */
	r2 = 0xC29D424u; UPD(0x0C060F32u, 1);  /* 0C060F30 mov.l @(disp,pc),Rn */
	r0 = 0xC29D428u; UPD(0x0C060F34u, 1);  /* 0C060F32 mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C060F36u, 1);  /* 0C060F34 mov.w Rm,@Rn */
	W16(r0, r6); UPD(0x0C060F38u, 1);  /* 0C060F36 mov.w Rm,@Rn */
	r3 = 0xC29D426u; UPD(0x0C060F3Au, 1);  /* 0C060F38 mov.l @(disp,pc),Rn */
	r0 = 0x300u; UPD(0x0C060F3Cu, 1);  /* 0C060F3A mov.w @(disp,pc),Rn */
	W16(r3, r7); UPD(0x0C060F3Eu, 1);  /* 0C060F3C mov.w Rm,@Rn */
	r6 = 0xC29D42Au; UPD(0x0C060F40u, 1);  /* 0C060F3E mov.l @(disp,pc),Rn */
	IF(0x0C060F40u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C060F42u, 1);  /* 0C060F40 mov.w @(r0,Rm),Rn */
	r2 = 0xC29D6C4u; UPD(0x0C060F44u, 1);  /* 0C060F42 mov.l @(disp,pc),Rn */
	r7 = 0xC29D6C6u; UPD(0x0C060F46u, 1);  /* 0C060F44 mov.l @(disp,pc),Rn */
	r3 = 0xC29D6C8u; UPD(0x0C060F48u, 1);  /* 0C060F46 mov.l @(disp,pc),Rn */
	W16(r6, r1); UPD(0x0C060F4Au, 1);  /* 0C060F48 mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C060F4Cu, 1);  /* 0C060F4A mov.w Rm,@Rn */
	W16(r2, r5); UPD(0x0C060F4Eu, 1);  /* 0C060F4C mov.w Rm,@Rn */
	W16(r3, r9); UPD(0x0C060F50u, 1);  /* 0C060F4E mov.w Rm,@Rn */
	r8 = 0xC29D6CAu; UPD(0x0C060F52u, 1);  /* 0C060F50 mov.l @(disp,pc),Rn */
	IF(0x0C060F52u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C060F54u, 1);  /* 0C060F52 mov.w @(r0,Rm),Rn */
	r4 = 0xC238029u; UPD(0x0C060F56u, 1);  /* 0C060F54 mov.l @(disp,pc),Rn */
	W16(r8, r1); UPD(0x0C060F58u, 1);  /* 0C060F56 mov.w Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C060F5Au, 1);  /* 0C060F58 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C060F5A tst Rm,Rn */
	if (T) { UPD(0x0C060F68u, 4); goto L_0C060F68; }  /* 0C060F5C bt */
L_0C060F5E: BLKS(0x0C060F5Eu);
	r10 = 0x70u;  /* 0C060F5E mov #imm,Rn */
	r11 &= r10;  /* 0C060F60 and Rm,Rn */
	r0 = r11;  /* 0C060F62 mov Rm,Rn */
	T = r0 == 0x70u;  /* 0C060F64 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C060F80u, 7); goto L_0C060F80; }  /* 0C060F66 bt */
L_0C060F68: BLKS(0x0C060F68u);
	r15 = r14;  /* 0C060F68 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060F6Cu, 2);  /* 0C060F6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C060F6Eu, 1);  /* 0C060F6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C060F70u, 1);  /* 0C060F6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060F72u, 1);  /* 0C060F70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060F74u, 1);  /* 0C060F72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060F76u, 1);  /* 0C060F74 mov.l @Rm+,Rn */
	IF(0x0C060F76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060F76 rts */
L_0C060F80: BLKS(0x0C060F80u);
	T = (r13 & r12) == 0;  /* 0C060F80 tst Rm,Rn */
	{ u32 c_ = T; r13 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060F92u, 4); goto L_0C060F92; } goto L_0C060F86; }  /* 0C060F82 bt/s */
L_0C060F86: BLKS(0x0C060F86u);
	r9 = 0xC234BF0u; UPD(0x0C060F88u, 2);  /* 0C060F86 mov.l @(disp,pc),Rn */
	r12 = 0xC3C43C8u; UPD(0x0C060F8Au, 1);  /* 0C060F88 mov.l @(disp,pc),Rn */
	r5 = 0xC3C53E4u; UPD(0x0C060F8Cu, 1);  /* 0C060F8A mov.l @(disp,pc),Rn */
	W32(r9, r13); UPD(0x0C060F8Eu, 1);  /* 0C060F8C mov.l Rm,@Rn */
	W32(r12, r13); UPD(0x0C060F90u, 1);  /* 0C060F8E mov.l Rm,@Rn */
	W32(r5, r13); UPD(0x0C060F92u, 1);  /* 0C060F90 mov.l Rm,@Rn */
L_0C060F92: BLKS(0x0C060F92u);
	r8 = 0xC286104u; UPD(0x0C060F94u, 1);  /* 0C060F92 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C060F94 mov #imm,Rn */
	W8(r8, r7); UPD(0x0C060F98u, 2);  /* 0C060F96 mov.b Rm,@Rn */
	r4 = 0xC0517E8u; UPD(0x0C060F9Au, 1);  /* 0C060F98 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C060F9A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060F9Eu, 2);  /* 0C060F9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C060FA0u, 1);  /* 0C060F9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C060FA2u, 1);  /* 0C060FA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060FA4u, 1);  /* 0C060FA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060FA6u, 1);  /* 0C060FA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060FA8u, 1);  /* 0C060FA6 mov.l @Rm+,Rn */
	IF(0x0C060FA8u); { u32 tv_ = r4; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0517E8u: TAIL(blk_f_0C0517E8); default: JUMPD(tv_); } }  /* 0C060FA8 jmp @Rn */
}

/* FUN_0c061010 */
void blk_f_0C061010(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C061064);
L_0C061010: BLKS(0x0C061010u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061012u, 1);  /* 0C061010 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C061012 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061016u, 2);  /* 0C061014 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r4;  /* 0C061016 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06101Au, 2);  /* 0C061018 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06101Cu, 1);  /* 0C06101A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06101Eu, 1);  /* 0C06101C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C061020u, 1);  /* 0C06101E mov.l Rm,@-Rn */
	r7 = 0xC232314u; UPD(0x0C061022u, 1);  /* 0C061020 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061024u, 1);  /* 0C061022 mov.l Rm,@-Rn */
	r5 = 0xC23802Cu; UPD(0x0C061026u, 1);  /* 0C061024 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C061026 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C06102Au, 2);  /* 0C061028 mov.l @Rm,Rn */
	r14 = r15;  /* 0C06102A mov Rm,Rn */
	r12 = R32(r7); UPD(0x0C06102Eu, 2);  /* 0C06102C mov.l @Rm,Rn */
	r4 = 0xC29D72Cu; UPD(0x0C061030u, 1);  /* 0C06102E mov.l @(disp,pc),Rn */
	r12 -= r0;  /* 0C061030 sub Rm,Rn */
	r3 = 0xC234BF8u; UPD(0x0C061034u, 2);  /* 0C061032 mov.l @(disp,pc),Rn */
	IF(0x0C061034u); r12 <<= 16;  /* 0C061034 shll16 Rn */
	r9 = 0xC3C415Cu; UPD(0x0C061038u, 2);  /* 0C061036 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C06103Au, 1);  /* 0C061038 mov.l Rm,@Rn */
	r0 = R32(r4); UPD(0x0C06103Cu, 1);  /* 0C06103A mov.l @Rm,Rn */
	r2 = R32(r3); UPD(0x0C06103Eu, 1);  /* 0C06103C mov.l @Rm,Rn */
	r6 = R32(r9); UPD(0x0C061040u, 1);  /* 0C06103E mov.l @Rm,Rn */
	r0 -= r2;  /* 0C061040 sub Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C061044u, 2);  /* 0C061042 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C061044 mov #imm,Rn */
	r12 |= r0;  /* 0C061046 or Rm,Rn */
	UPD(0x0C061048u, 2);
L_0C061048: BLKS(0x0C061048u);
	r11 = 0xC29749Cu; UPD(0x0C06104Au, 1);  /* 0C061048 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C06104A mov Rm,Rn */
	IF(0x0C06104Cu); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06104Eu, 2);  /* 0C06104C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C06104E tst Rm,Rn */
	{ u32 c_ = !T; r2 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061076u, 4); goto L_0C061076; } goto L_0C061054; }  /* 0C061050 bf/s */
L_0C061054: BLKS(0x0C061054u);
	r4 = 0x7u;  /* 0C061054 mov #imm,Rn */
	IF(0x0C061056u); ARG0(0x424Du); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C061056 shld Rm,Rn */
	r13 = 0xC23372Au; UPD(0x0C06105Au, 4);  /* 0C061058 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C06105A mov #imm,Rn */
	r3 = 0x0u;  /* 0C06105C mov #imm,Rn */
	r7 = 0x1Fu;  /* 0C06105E mov #imm,Rn */
	r2 += r13;  /* 0C061060 add Rm,Rn */
	IF(0x0C061062u); ;  /* 0C061062 nop */
	UPD(0x0C061064u, 5);
L_0C061064: BLKS(0x0C061064u);
	SPIN_SAVE(0C061064);
	r5 = (u32)(s32)(s16)RS16(0C061064, r2); UPD(0x0C061066u, 1);  /* 0C061064 mov.w @Rm,Rn */
	r0 = r3;  /* 0C061066 mov Rm,Rn */
	r0 += 0x1u;  /* 0C061068 add #imm,Rn */
	r5 |= r8;  /* 0C06106A or Rm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C06106C exts.w Rm,Rn */
	r2 += 0x4u;  /* 0C06106E add #imm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C061070 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ if (c_) { SPIN_FFD(0C061064, 10); UPD(0x0C061064u, 9); goto L_0C061064; } UPD(0x0C061076u, 1); goto L_0C061076; }  /* 0C061072 bf/s */
L_0C061076: BLKS(0x0C061076u);
	r7 = 0xC29749Cu; UPD(0x0C061078u, 1);  /* 0C061076 mov.l @(disp,pc),Rn */
	r2 = 0x3FFu; UPD(0x0C06107Au, 1);  /* 0C061078 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C06107A mov Rm,Rn */
	IF(0x0C06107Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06107Eu, 2);  /* 0C06107C mov.b @(r0,Rm),Rn */
	r2 &= r8;  /* 0C06107E and Rm,Rn */
	r3 |= r2;  /* 0C061080 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C061082 tst Rm,Rn */
	{ u32 c_ = T; r13 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06110Eu, 6); goto L_0C06110E; } goto L_0C061088; }  /* 0C061084 bt/s */
L_0C061088: BLKS(0x0C061088u);
	r5 = r9;  /* 0C061088 mov Rm,Rn */
	r0 = 0x7u;  /* 0C06108A mov #imm,Rn */
	r11 = 0xC233728u; UPD(0x0C06108Eu, 4);  /* 0C06108C mov.l @(disp,pc),Rn */
	IF(0x0C06108Eu); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06108E shld Rm,Rn */
	r5 += r11;  /* 0C061090 add Rm,Rn */
	r11 = R32(r14); UPD(0x0C061094u, 3);  /* 0C061092 mov.l @Rm,Rn */
	r10 = 0x0u;  /* 0C061094 mov #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C061098u, 2);  /* 0C061096 mov.l @(disp,Rm),Rn */
	IF(0x0C061098u); r11 <<= 16;  /* 0C061098 shll16 Rn */
	r13 = 0xC29D088u; UPD(0x0C06109Cu, 2);  /* 0C06109A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06109C mov #imm,Rn */
	r4 = r12;  /* 0C06109E mov Rm,Rn */
	r11 |= r1;  /* 0C0610A0 or Rm,Rn */
	IF(0x0C0610A2u); ;  /* 0C0610A2 nop */
	UPD(0x0C0610A4u, 4);
L_0C0610A4: BLKS(0x0C0610A4u);
	{ u32 v_ = R32(r5); r5 += 4; r7 = v_; } UPD(0x0C0610A6u, 1);  /* 0C0610A4 mov.l @Rm+,Rn */
	r0 = 0x3FFu; UPD(0x0C0610A8u, 1);  /* 0C0610A6 mov.w @(disp,pc),Rn */
	r0 &= r7;  /* 0C0610A8 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0610AA tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x20u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0610F8u, 5); goto L_0C0610F8; } goto L_0C0610B0; }  /* 0C0610AC bt/s */
L_0C0610B0: BLKS(0x0C0610B0u);
	if (T) { UPD(0x0C0610F8u, 4); goto L_0C0610F8; }  /* 0C0610B0 bt */
L_0C0610B2: BLKS(0x0C0610B2u);
	r1 = 0xC3C8470u; UPD(0x0C0610B4u, 1);  /* 0C0610B2 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0610B6u, 1);  /* 0C0610B4 mov.l @Rm,Rn */
	W32(r6, r2); UPD(0x0C0610B8u, 1);  /* 0C0610B6 mov.l Rm,@Rn */
	r1 = r7;  /* 0C0610B8 mov Rm,Rn */
	r2 = 0x3000000u; UPD(0x0C0610BCu, 2);  /* 0C0610BA mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C0610BC and Rm,Rn */
	T = r1 == r2;  /* 0C0610BE cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061140u, 5); goto L_0C061140; } goto L_0C0610C4; }  /* 0C0610C0 bt/s */
L_0C0610C4: BLKS(0x0C0610C4u);
	IF(0x0C0610C4u); r0 >>= 2;  /* 0C0610C4 shlr2 Rn */
	r1 = ~r0;  /* 0C0610C6 not Rm,Rn */
	r0 = 0xF8u; UPD(0x0C0610CAu, 4);  /* 0C0610C8 mov.w @(disp,pc),Rn */
	r2 = R32(r13); UPD(0x0C0610CCu, 1);  /* 0C0610CA mov.l @Rm,Rn */
	r1 &= r0;  /* 0C0610CC and Rm,Rn */
	IF(0x0C0610CEu); r1 <<= 16;  /* 0C0610CE shll16 Rn */
	UPD(0x0C0610D0u, 2);
L_0C0610D0: BLKS(0x0C0610D0u);
	r2 += r1;  /* 0C0610D0 add Rm,Rn */
	r1 = r7;  /* 0C0610D2 mov Rm,Rn */
	IF(0x0C0610D4u); r1 <<= 2;  /* 0C0610D4 shll2 Rn */
	r1 += r1;  /* 0C0610D6 add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0610D8 extu.b Rm,Rn */
	r2 += r0;  /* 0C0610DA add Rm,Rn */
	W32(r6, r2); UPD(0x0C0610DEu, 7);  /* 0C0610DC mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C0610DE add #imm,Rn */
	W32(r6, r4); UPD(0x0C0610E2u, 2);  /* 0C0610E0 mov.l Rm,@Rn */
	r2 = 0xFCFCFC00u; UPD(0x0C0610E4u, 1);  /* 0C0610E2 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0610E4 add #imm,Rn */
	W32(r6, r11); UPD(0x0C0610E8u, 2);  /* 0C0610E6 mov.l Rm,@Rn */
	r7 &= r2;  /* 0C0610E8 and Rm,Rn */
	r6 += 0x4u;  /* 0C0610EA add #imm,Rn */
	IF(0x0C0610ECu); r7 >>= 8;  /* 0C0610EC shlr8 Rn */
	W32(r6, r7); UPD(0x0C0610F0u, 4);  /* 0C0610EE mov.l Rm,@Rn */
	r7 = r10;  /* 0C0610F0 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0610F2 add #imm,Rn */
	r6 += 0x4u;  /* 0C0610F4 add #imm,Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0610F6 exts.b Rm,Rn */
	UPD(0x0C0610F8u, 4);
L_0C0610F8: BLKS(0x0C0610F8u);
	r7 = 0xC29749Cu; UPD(0x0C0610FAu, 1);  /* 0C0610F8 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0610FA mov Rm,Rn */
	r0 = r7;  /* 0C0610FC mov Rm,Rn */
	r2 += 0x1u;  /* 0C0610FE add #imm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C061100 exts.w Rm,Rn */
	r7 = 0x1Fu;  /* 0C061102 mov #imm,Rn */
	IF(0x0C061104u); W8(r0 + r9, r10); UPD(0x0C061106u, 6);  /* 0C061104 mov.b Rm,@(r0,Rn) */
	T = (s32)r3 > (s32)r7;  /* 0C061106 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0610A4u, 4); goto L_0C0610A4; } goto L_0C06110C; }  /* 0C061108 bf/s */
L_0C06110C: BLKS(0x0C06110Cu);
	r13 = r9;  /* 0C06110C mov Rm,Rn */
	UPD(0x0C06110Eu, 2);
L_0C06110E: BLKS(0x0C06110Eu);
	r9 = 0x80000u; UPD(0x0C061110u, 1);  /* 0C06110E mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C061110 add #imm,Rn */
	r12 += r9;  /* 0C061112 add Rm,Rn */
	r9 = (u32)(s32)(s16)r13;  /* 0C061114 exts.w Rm,Rn */
	r10 = 0x28u;  /* 0C061116 mov #imm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C061118 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C061048u, 8); goto L_0C061048; }  /* 0C06111A bf */
L_0C06111C: BLKS(0x0C06111Cu);
	r14 += 0x8u;  /* 0C06111C add #imm,Rn */
	r8 = 0xC3C415Cu; UPD(0x0C061120u, 2);  /* 0C06111E mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C061122u, 1);  /* 0C061120 mov.l Rm,@Rn */
	r15 = r14;  /* 0C061122 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061126u, 2);  /* 0C061124 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C061128u, 1);  /* 0C061126 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06112Au, 1);  /* 0C061128 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06112Cu, 1);  /* 0C06112A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06112Eu, 1);  /* 0C06112C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061130u, 1);  /* 0C06112E mov.l @Rm+,Rn */
	IF(0x0C061130u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061130 rts */
L_0C061140: BLKS(0x0C061140u);
	IF(0x0C061140u); r0 >>= 2;  /* 0C061140 shlr2 Rn */
	r1 = 0x108u; UPD(0x0C061144u, 2);  /* 0C061142 mov.w @(disp,pc),Rn */
	r0 &= 0xF8u;  /* 0C061144 and #imm,r0 */
	r1 -= r0;  /* 0C061146 sub Rm,Rn */
	r0 = 0xC29E6B8u; UPD(0x0C06114Au, 3);  /* 0C061148 mov.l @(disp,pc),Rn */
	IF(0x0C06114Au); r1 <<= 16;  /* 0C06114A shll16 Rn */
	{ r2 = R32(r0 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0610D0u, 4); goto L_0C0610D0; }  /* 0C06114C bra */
}

/* FUN_0c061190 */
void blk_f_0C061190(sh3_t *c)
{
	LOCALS;
L_0C061190: BLKS(0x0C061190u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061192u, 1);  /* 0C061190 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C061192 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061196u, 2);  /* 0C061194 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061198u, 1);  /* 0C061196 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C061198 mov #imm,Rn */
	r8 = 0xC051820u; UPD(0x0C06119Cu, 2);  /* 0C06119A mov.l @(disp,pc),Rn */
	IF(0x0C06119Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06119Eu, 1);  /* 0C06119C sts.l pr,@-Rn */
	r6 = 0xC22E01Cu; UPD(0x0C0611A0u, 1);  /* 0C06119E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0611A0 mov Rm,Rn */
	r5 = 0xC29D718u; UPD(0x0C0611A4u, 2);  /* 0C0611A2 mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C0611A6u, 1);  /* 0C0611A4 mov.b Rm,@Rn */
	IF(0x0C0611A6u); { u32 t_ = r8; PR = 0x0C0611AAu; W32(r5, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C051820, 0x0C051820u, 0x0C0611AAu); }  /* 0C0611A6 jsr @Rn */
L_0C0611AA: BLKS(0x0C0611AAu);
	r4 = 0xC22E010u; UPD(0x0C0611ACu, 1);  /* 0C0611AA mov.l @(disp,pc),Rn */
	r3 = 0xC3C43C0u; UPD(0x0C0611AEu, 1);  /* 0C0611AC mov.l @(disp,pc),Rn */
	r8 = 0xC0515F8u; UPD(0x0C0611B0u, 1);  /* 0C0611AE mov.l @(disp,pc),Rn */
	W32(r4, r0); UPD(0x0C0611B2u, 1);  /* 0C0611B0 mov.l Rm,@Rn */
	W32(r3, r9); UPD(0x0C0611B4u, 1);  /* 0C0611B2 mov.l Rm,@Rn */
	IF(0x0C0611B4u); { u32 t_ = r8; PR = 0x0C0611B8u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0515F8, 0x0C0515F8u, 0x0C0611B8u); }  /* 0C0611B4 jsr @Rn */
L_0C0611B8: BLKS(0x0C0611B8u);
	r9 = r0;  /* 0C0611B8 mov Rm,Rn */
	r0 = 0xC3C43D0u; UPD(0x0C0611BCu, 2);  /* 0C0611BA mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0611BC mov #imm,Rn */
	IF(0x0C0611BEu); { u32 t_ = r8; PR = 0x0C0611C2u; W32(r0, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0515F8, 0x0C0515F8u, 0x0C0611C2u); }  /* 0C0611BE jsr @Rn */
L_0C0611C2: BLKS(0x0C0611C2u);
	r2 = 0xC3C86A8u; UPD(0x0C0611C4u, 1);  /* 0C0611C2 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C0611C6u, 1);  /* 0C0611C4 mov.l Rm,@Rn */
	r2 = 0xF0000000u; UPD(0x0C0611C8u, 1);  /* 0C0611C6 mov.l @(disp,pc),Rn */
	W32(r0, r2); UPD(0x0C0611CAu, 1);  /* 0C0611C8 mov.l Rm,@Rn */
	W32(r9, r2); UPD(0x0C0611CCu, 1);  /* 0C0611CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0611CC mov Rm,Rn */
	IF(0x0C0611CEu); PR = R32(r15); r15 += 4; UPD(0x0C0611D0u, 2);  /* 0C0611CE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0611D2u, 1);  /* 0C0611D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0611D4u, 1);  /* 0C0611D2 mov.l @Rm+,Rn */
	IF(0x0C0611D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0611D4 rts */
}

/* FUN_0c061200 */
void blk_f_0C061200(sh3_t *c)
{
	LOCALS;
L_0C061200: BLKS(0x0C061200u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061202u, 1);  /* 0C061200 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C061202 mov #imm,Rn */
	r0 = 0xC29D718u; UPD(0x0C061206u, 2);  /* 0C061204 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C061208u, 1);  /* 0C061206 mov.l Rm,@Rn */
	r3 = 0xC3C5440u; UPD(0x0C06120Au, 1);  /* 0C061208 mov.l @(disp,pc),Rn */
	r2 = 0xC3C86A8u; UPD(0x0C06120Cu, 1);  /* 0C06120A mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C06120Eu, 1);  /* 0C06120C mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C061210u, 1);  /* 0C06120E mov.l @Rm,Rn */
	T = r0 == r1;  /* 0C061210 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061270u, 4); goto L_0C061270; } goto L_0C061216; }  /* 0C061212 bt/s */
L_0C061216: BLKS(0x0C061216u);
	W32(r3, r1); UPD(0x0C061218u, 2);  /* 0C061216 mov.l Rm,@Rn */
	r2 = 0x20u;  /* 0C061218 mov #imm,Rn */
	r0 = 0x1A0u; UPD(0x0C06121Cu, 2);  /* 0C06121A mov.w @(disp,pc),Rn */
	r7 = 0xC3C4160u; UPD(0x0C06121Eu, 1);  /* 0C06121C mov.l @(disp,pc),Rn */
	r3 = 0xC232314u; UPD(0x0C061220u, 1);  /* 0C06121E mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C061222u, 1);  /* 0C061220 mov.l Rm,@Rn */
L_0C061222: BLKS(0x0C061222u);
	r4 = 0xC22E250u; UPD(0x0C061224u, 1);  /* 0C061222 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C061226u, 1);  /* 0C061224 mov.l Rm,@Rn */
	W32(r4, r2); UPD(0x0C061228u, 1);  /* 0C061226 mov.l Rm,@Rn */
	r6 = 0x88u; UPD(0x0C06122Au, 1);  /* 0C061228 mov.w @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C06122Cu, 1);  /* 0C06122A mov.l @Rm,Rn */
	r2 = 0xC22E008u; UPD(0x0C06122Eu, 1);  /* 0C06122C mov.l @(disp,pc),Rn */
	IF(0x0C06122Eu); r5 <<= 16;  /* 0C06122E shll16 Rn */
	r7 = 0xC29D72Cu; UPD(0x0C061232u, 2);  /* 0C061230 mov.l @(disp,pc),Rn */
	r5 |= r6;  /* 0C061232 or Rm,Rn */
	W32(r2, r6); UPD(0x0C061236u, 2);  /* 0C061234 mov.l Rm,@Rn */
	W32(r7, r6); UPD(0x0C061238u, 1);  /* 0C061236 mov.l Rm,@Rn */
	r0 = 0xC286100u; UPD(0x0C06123Au, 1);  /* 0C061238 mov.l @(disp,pc),Rn */
	r3 = 0xC29D738u; UPD(0x0C06123Cu, 1);  /* 0C06123A mov.l @(disp,pc),Rn */
	r4 = 0xC3C5440u; UPD(0x0C06123Eu, 1);  /* 0C06123C mov.l @(disp,pc),Rn */
	W32(r0, r6); UPD(0x0C061240u, 1);  /* 0C06123E mov.l Rm,@Rn */
	W32(r3, r5); UPD(0x0C061242u, 1);  /* 0C061240 mov.l Rm,@Rn */
	r7 = R32(r4); UPD(0x0C061244u, 1);  /* 0C061242 mov.l @Rm,Rn */
	r2 = 0xC0000001u; UPD(0x0C061246u, 1);  /* 0C061244 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C061246 mov Rm,Rn */
	W32(r7, r2); UPD(0x0C06124Au, 2);  /* 0C061248 mov.l Rm,@Rn */
	r0 = 0xF0000000u; UPD(0x0C06124Cu, 1);  /* 0C06124A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C06124C add #imm,Rn */
	W32(r7, r0); UPD(0x0C061250u, 2);  /* 0C06124E mov.l Rm,@Rn */
	r5 = 0xC22E010u; UPD(0x0C061252u, 1);  /* 0C061250 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C061254u, 1);  /* 0C061252 mov.l @Rm,Rn */
	IF(0x0C061254u); r3 <<= 2;  /* 0C061254 shll2 Rn */
	r6 = 0xC3C415Cu; UPD(0x0C061258u, 2);  /* 0C061256 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C061258 add Rm,Rn */
	r2 = 0xC29D190u; UPD(0x0C06125Cu, 2);  /* 0C06125A mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFF0u;  /* 0C06125C add #imm,Rn */
	W32(r6, r7); UPD(0x0C061260u, 2);  /* 0C06125E mov.l Rm,@Rn */
	W32(r2, r4); UPD(0x0C061262u, 1);  /* 0C061260 mov.l Rm,@Rn */
	r15 = r14;  /* 0C061262 mov Rm,Rn */
	IF(0x0C061264u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C061264 rts */
L_0C061270: BLKS(0x0C061270u);
	r6 = 0xC3C43D0u; UPD(0x0C061272u, 1);  /* 0C061270 mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C061272 mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C061276u, 2);  /* 0C061274 mov.l @Rm,Rn */
	W32(r3, r5); UPD(0x0C061278u, 1);  /* 0C061276 mov.l Rm,@Rn */
	r3 = 0xC3C4160u; UPD(0x0C06127Au, 1);  /* 0C061278 mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C06127Cu, 1);  /* 0C06127A mov.l Rm,@Rn */
	r2 = 0x1A0u; UPD(0x0C06127Eu, 1);  /* 0C06127C mov.w @(disp,pc),Rn */
	r3 = 0xC232314u; UPD(0x0C061280u, 1);  /* 0C06127E mov.l @(disp,pc),Rn */
	{ IF(0x0C061282u); ; /* slot nop */ UPD(0x0C061222u, 3); goto L_0C061222; }  /* 0C061280 bra */
}


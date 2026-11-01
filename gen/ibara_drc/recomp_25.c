#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0aa870 */
void f_0C0AA870(sh3_t *c)
{
	LOCALS;
L_0C0AA870: BLKS(0x0C0AA870u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA870 exts.w Rm,Rn */
	r0 = 0x40u;  /* 0C0AA872 mov #imm,Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0AA874 cmp/gt Rm,Rn */
	IF(0x0C0AA876u); r0 = T;  /* 0C0AA876 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AA878 tst Rm,Rn */
	IF(0x0C0AA87Au); r2 = T;  /* 0C0AA87A movt Rn */
	r0 |= r2;  /* 0C0AA87C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA880u, 8);  /* 0C0AA87E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0AA880 tst Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0AA884u, 2);  /* 0C0AA882 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA884 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA90Cu, 4); goto L_0C0AA90C; } goto L_0C0AA88A; }  /* 0C0AA886 bf/s */
L_0C0AA88A: BLKS(0x0C0AA88Au);
	r3 = 0xC26C8C6u; UPD(0x0C0AA88Cu, 2);  /* 0C0AA88A mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0AA88Eu, 1);  /* 0C0AA88C mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AA890u, 1);  /* 0C0AA88E mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA890 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA8C8u, 4); goto L_0C0AA8C8; }  /* 0C0AA892 bt */
L_0C0AA894: BLKS(0x0C0AA894u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA894 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA896 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA898 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA8C8u, 6); goto L_0C0AA8C8; } goto L_0C0AA89E; }  /* 0C0AA89A bt/s */
L_0C0AA89E: BLKS(0x0C0AA89Eu);
	IF(0x0C0AA89Eu); MACL = r3 * r2;  /* 0C0AA89E mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA8A2u, 4);  /* 0C0AA8A0 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA8A2 mov Rm,Rn */
	IF(0x0C0AA8A4u); r2 = MACL;  /* 0C0AA8A4 sts macl,Rn */
	r2 += r0;  /* 0C0AA8A6 add Rm,Rn */
	UPD(0x0C0AA8A8u, 3);
L_0C0AA8A8: BLKS(0x0C0AA8A8u);
	r5 = R32(r2); UPD(0x0C0AA8AAu, 1);  /* 0C0AA8A8 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AA8AA tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA8BEu, 4); goto L_0C0AA8BE; } goto L_0C0AA8B0; }  /* 0C0AA8AC bf/s */
L_0C0AA8B0: BLKS(0x0C0AA8B0u);
	r0 = r4;  /* 0C0AA8B0 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA8B4u, 3);  /* 0C0AA8B2 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0AA8B4 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AA8B6 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA8B8 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA930u, 6); goto L_0C0AA930; } UPD(0x0C0AA8BEu, 1); goto L_0C0AA8BE; }  /* 0C0AA8BA bt/s */
L_0C0AA8BE: BLKS(0x0C0AA8BEu);
	r5 = r3;  /* 0C0AA8BE mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AA8C0 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0AA8C2 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA8C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA8A8u, 7); goto L_0C0AA8A8; }  /* 0C0AA8C6 bf */
L_0C0AA8C8: BLKS(0x0C0AA8C8u);
	r6 = 0xC21CC3Cu; UPD(0x0C0AA8CAu, 1);  /* 0C0AA8C8 mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0AA8CCu, 1);  /* 0C0AA8CA mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AA8CEu, 1);  /* 0C0AA8CC mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA8CE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA90Au, 4); goto L_0C0AA90A; }  /* 0C0AA8D0 bt */
L_0C0AA8D2: BLKS(0x0C0AA8D2u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA8D2 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA8D4 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA8D6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA90Au, 6); goto L_0C0AA90A; }  /* 0C0AA8D8 bt */
L_0C0AA8DA: BLKS(0x0C0AA8DAu);
	r2 = 0x38u;  /* 0C0AA8DA mov #imm,Rn */
	IF(0x0C0AA8DCu); MACL = r3 * r2;  /* 0C0AA8DC mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA8E0u, 4);  /* 0C0AA8DE mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA8E0 mov Rm,Rn */
	IF(0x0C0AA8E2u); r2 = MACL;  /* 0C0AA8E2 sts macl,Rn */
	r2 += r0;  /* 0C0AA8E4 add Rm,Rn */
	IF(0x0C0AA8E6u); ;  /* 0C0AA8E6 nop */
	UPD(0x0C0AA8E8u, 4);
L_0C0AA8E8: BLKS(0x0C0AA8E8u);
	r0 = R32(r2); UPD(0x0C0AA8EAu, 1);  /* 0C0AA8E8 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0AA8EA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AA8EC tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA900u, 5); goto L_0C0AA900; } goto L_0C0AA8F2; }  /* 0C0AA8EE bt/s */
L_0C0AA8F2: BLKS(0x0C0AA8F2u);
	r5 = r4;  /* 0C0AA8F2 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA8F6u, 3);  /* 0C0AA8F4 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AA8F6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0AA8F8 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA8FA tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA920u, 6); goto L_0C0AA920; } UPD(0x0C0AA900u, 1); goto L_0C0AA900; }  /* 0C0AA8FC bt/s */
L_0C0AA900: BLKS(0x0C0AA900u);
	r0 = r3;  /* 0C0AA900 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AA902 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AA904 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA906 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA8E8u, 7); goto L_0C0AA8E8; }  /* 0C0AA908 bf */
L_0C0AA90A: BLKS(0x0C0AA90Au);
	r0 = 0x0u;  /* 0C0AA90A mov #imm,Rn */
	UPD(0x0C0AA90Cu, 1);
L_0C0AA90C: BLKS(0x0C0AA90Cu);
	r15 = r14;  /* 0C0AA90C mov Rm,Rn */
	IF(0x0C0AA90Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA90E rts */
L_0C0AA920: BLKS(0x0C0AA920u);
	r5 = 0x240u; UPD(0x0C0AA922u, 1);  /* 0C0AA920 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AA922 add #imm,Rn */
	r4 = 0xC26C8C6u; UPD(0x0C0AA926u, 2);  /* 0C0AA924 mov.l @(disp,pc),Rn */
	r1 = 0xC21CC3Cu; UPD(0x0C0AA928u, 1);  /* 0C0AA926 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C0AA92Au, 1);  /* 0C0AA928 mov.w Rm,@Rn */
L_0C0AA92A: BLKS(0x0C0AA92Au);
	W16(r1, r3); UPD(0x0C0AA92Cu, 1);  /* 0C0AA92A mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AA90Cu, 3); goto L_0C0AA90C; }  /* 0C0AA92C bra */
L_0C0AA930: BLKS(0x0C0AA930u);
	r1 = 0xC26C8C6u; UPD(0x0C0AA932u, 1);  /* 0C0AA930 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AA92Au, 3); goto L_0C0AA92A; }  /* 0C0AA932 bra */
}

/* FUN_0c0aa9d0 */
void f_0C0AA9D0(sh3_t *c)
{
	LOCALS;
L_0C0AA9D0: BLKS(0x0C0AA9D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9D2u, 1);  /* 0C0AA9D0 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0AA9D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9D6u, 2);  /* 0C0AA9D4 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s8)r7;  /* 0C0AA9D6 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9DAu, 2);  /* 0C0AA9D8 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AA9DA mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9DEu, 2);  /* 0C0AA9DC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9E0u, 1);  /* 0C0AA9DE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9E2u, 1);  /* 0C0AA9E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA9E4u, 1);  /* 0C0AA9E2 mov.l Rm,@-Rn */
	IF(0x0C0AA9E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA9E6u, 1);  /* 0C0AA9E4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0AA9E6 add #imm,Rn */
	r14 = r15;  /* 0C0AA9E8 mov Rm,Rn */
	r3 += r14;  /* 0C0AA9EA add Rm,Rn */
	r4 = R32(r3 + 0x8u); UPD(0x0C0AA9EEu, 4);  /* 0C0AA9EC mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0AA9EE exts.w Rm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0AA9F2u, 2);  /* 0C0AA9F0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0AA9F4u, 1);  /* 0C0AA9F2 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C0AA9F6u, 1);  /* 0C0AA9F4 mov.l Rm,@(disp,Rn) */
	r8 = R32(r3 + 0x0u); UPD(0x0C0AA9F8u, 1);  /* 0C0AA9F6 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AA9F8 exts.w Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0AA9FCu, 2);  /* 0C0AA9FA mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s8)r8;  /* 0C0AA9FC exts.b Rm,Rn */
	r2 = 0xFF400000u; UPD(0x0C0AAA00u, 2);  /* 0C0AA9FE mov.l @(disp,pc),Rn */
	r6 = R32(r3 + 0x4u); UPD(0x0C0AAA02u, 1);  /* 0C0AAA00 mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C0AAA02 add Rm,Rn */
	W32(r14, r5); UPD(0x0C0AAA06u, 2);  /* 0C0AAA04 mov.l Rm,@Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C0AAA06 exts.w Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0AAA0Au, 2);  /* 0C0AAA08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAA0Au); T = (s32)r2 >= 0;  /* 0C0AAA0A cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AAA14u, 4); goto L_0C0AAA14; } UPD(0x0C0AAA10u, 1); goto L_0C0AAA10; }  /* 0C0AAA0C bt/s */
L_0C0AAA10: BLKS(0x0C0AAA10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AAB70u, 3); goto L_0C0AAB70; }  /* 0C0AAA10 bra */
L_0C0AAA14: BLKS(0x0C0AAA14u);
	r5 = 0xC00000u; UPD(0x0C0AAA16u, 1);  /* 0C0AAA14 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0AAA16 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AAA2Cu, 4); goto L_0C0AAA2C; }  /* 0C0AAA18 bt */
L_0C0AAA1A: BLKS(0x0C0AAA1Au);
	r10 = R32(r14 + 0x4u); UPD(0x0C0AAA1Cu, 1);  /* 0C0AAA1A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C0AAA1Eu, 1);  /* 0C0AAA1C mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C0AAA1E add Rm,Rn */
	IF(0x0C0AAA20u); T = (s32)r2 >= 0;  /* 0C0AAA20 cmp/pz Rn */
	if (T) { UPD(0x0C0AAA26u, 5); goto L_0C0AAA26; }  /* 0C0AAA22 bt */
L_0C0AAA24: BLKS(0x0C0AAA24u);
	r2 = 0u - r2;  /* 0C0AAA24 neg Rm,Rn */
	UPD(0x0C0AAA26u, 1);
L_0C0AAA26: BLKS(0x0C0AAA26u);
	r12 = 0xA00000u; UPD(0x0C0AAA28u, 1);  /* 0C0AAA26 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r12;  /* 0C0AAA28 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AAA50u, 4); goto L_0C0AAA50; }  /* 0C0AAA2A bf */
L_0C0AAA2C: BLKS(0x0C0AAA2Cu);
	r14 += 0x20u;  /* 0C0AAA2C add #imm,Rn */
	UPD(0x0C0AAA2Eu, 1);
L_0C0AAA2E: BLKS(0x0C0AAA2Eu);
	r15 = r14;  /* 0C0AAA2E mov Rm,Rn */
	IF(0x0C0AAA30u); PR = R32(r15); r15 += 4; UPD(0x0C0AAA32u, 2);  /* 0C0AAA30 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAA34u, 1);  /* 0C0AAA32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AAA36u, 1);  /* 0C0AAA34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AAA38u, 1);  /* 0C0AAA36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AAA3Au, 1);  /* 0C0AAA38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAA3Cu, 1);  /* 0C0AAA3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAA3Eu, 1);  /* 0C0AAA3C mov.l @Rm+,Rn */
	IF(0x0C0AAA3Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAA3E rts */
L_0C0AAA50: BLKS(0x0C0AAA50u);
	r8 = 0xC0AFE40u; UPD(0x0C0AAA52u, 1);  /* 0C0AAA50 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0AAA52 mov Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AAA56u, 2);  /* 0C0AAA54 mov.l @(disp,pc),Rn */
	IF(0x0C0AAA56u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0AAA56 rotl Rn */
	IF(0x0C0AAA58u); r13 = T;  /* 0C0AAA58 movt Rn */
	IF(0x0C0AAA5Au); { u32 t_ = r8; PR = 0x0C0AAA5Eu; W32(r14 + 0x18u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAA5Eu); }  /* 0C0AAA5A jsr @Rn */
L_0C0AAA5E: BLKS(0x0C0AAA5Eu);
	IF(0x0C0AAA5Eu); MACL = r11 * r0;  /* 0C0AAA5E mul.l Rm,Rn */
	r13 += r11;  /* 0C0AAA60 add Rm,Rn */
	IF(0x0C0AAA62u); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C0AAA62 shar Rn */
	IF(0x0C0AAA64u); r3 = MACL;  /* 0C0AAA64 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AAA66 swap.w Rm,Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C0AAA68 exts.w Rm,Rn */
	r13 += r11;  /* 0C0AAA6A add Rm,Rn */
	r13 += 0x1u;  /* 0C0AAA6C add #imm,Rn */
	r8 = 0xC0AA870u; UPD(0x0C0AAA70u, 10);  /* 0C0AAA6E mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r13;  /* 0C0AAA70 exts.w Rm,Rn */
	IF(0x0C0AAA72u); ;  /* 0C0AAA72 nop */
	UPD(0x0C0AAA74u, 2);
L_0C0AAA74: BLKS(0x0C0AAA74u);
	IF(0x0C0AAA74u); { u32 t_ = r8; PR = 0x0C0AAA78u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA870, 0x0C0AA870u, 0x0C0AAA78u); }  /* 0C0AAA74 jsr @Rn */
L_0C0AAA78: BLKS(0x0C0AAA78u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0AAA78 exts.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AAA7A tst Rm,Rn */
	{ u32 c_ = !T; r7 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AAAA0u, 5); goto L_0C0AAAA0; } goto L_0C0AAA80; }  /* 0C0AAA7C bf/s */
L_0C0AAA80: BLKS(0x0C0AAA80u);
	IF(0x0C0AAA80u); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C0AAA80 rotl Rn */
	IF(0x0C0AAA82u); r6 = T;  /* 0C0AAA82 movt Rn */
	r11 += r6;  /* 0C0AAA84 add Rm,Rn */
	IF(0x0C0AAA86u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AAA86 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AAA88 tst Rm,Rn */
	if (!T) { UPD(0x0C0AAA74u, 9); goto L_0C0AAA74; }  /* 0C0AAA8A bf */
L_0C0AAA8C: BLKS(0x0C0AAA8Cu);
	r14 += 0x20u;  /* 0C0AAA8C add #imm,Rn */
	{ IF(0x0C0AAA90u); ; /* slot nop */ UPD(0x0C0AAA2Eu, 4); goto L_0C0AAA2E; }  /* 0C0AAA8E bra */
L_0C0AAAA0: BLKS(0x0C0AAAA0u);
	r12 = 0x0u;  /* 0C0AAAA0 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAAA2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AAA2Cu, 5); goto L_0C0AAA2C; }  /* 0C0AAAA4 bt */
L_0C0AAAA6: BLKS(0x0C0AAAA6u);
	r0 = r9;  /* 0C0AAAA6 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0AAAA8 and #imm,r0 */
	r13 = 0xC0AFE40u; UPD(0x0C0AAAACu, 3);  /* 0C0AAAAA mov.l @(disp,pc),Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C0AAAAEu, 1);  /* 0C0AAAAC mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAAAEu); ;  /* 0C0AAAAE nop */
	UPD(0x0C0AAAB0u, 1);
L_0C0AAAB0: BLKS(0x0C0AAAB0u);
	r6 = R32(r14 + 0x18u); UPD(0x0C0AAAB2u, 1);  /* 0C0AAAB0 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AAAB2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r10 = v_; } UPD(0x0C0AAAB6u, 2);  /* 0C0AAAB4 mov.w @Rm+,Rn */
	r3 = 0x1Eu;  /* 0C0AAAB6 mov #imm,Rn */
	IF(0x0C0AAAB8u); MACL = r10 * r8;  /* 0C0AAAB8 mul.l Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0AAABCu, 4);  /* 0C0AAABA mov.l @(disp,Rm),Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AAABEu, 1);  /* 0C0AAABC mov.l @(disp,pc),Rn */
	IF(0x0C0AAABEu); r8 = MACL;  /* 0C0AAABE sts macl,Rn */
	r2 = 0xC0000002u; UPD(0x0C0AAAC2u, 2);  /* 0C0AAAC0 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0AAAC2 add Rm,Rn */
	r2 |= r1;  /* 0C0AAAC4 or Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0AAAC8u, 3);  /* 0C0AAAC6 mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C0AAACAu, 1);  /* 0C0AAAC8 mov.l Rm,@Rn */
	IF(0x0C0AAACAu); { u32 t_ = r13; PR = 0x0C0AAACEu; W32(r14 + 0x18u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAACEu); }  /* 0C0AAACA jsr @Rn */
L_0C0AAACE: BLKS(0x0C0AAACEu);
	r0 &= 0x7u;  /* 0C0AAACE and #imm,r0 */
	IF(0x0C0AAAD0u); { u32 t_ = r13; PR = 0x0C0AAAD4u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAAD4u); }  /* 0C0AAAD0 jsr @Rn */
L_0C0AAAD4: BLKS(0x0C0AAAD4u);
	r5 = R32(r14); UPD(0x0C0AAAD6u, 1);  /* 0C0AAAD4 mov.l @Rm,Rn */
	r0 &= 0x7u;  /* 0C0AAAD6 and #imm,r0 */
	r9 = R32(r14 + 0x4u); UPD(0x0C0AAADAu, 2);  /* 0C0AAAD8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0AAADA mov Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C0AAADEu, 2);  /* 0C0AAADC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r9); UPD(0x0C0AAAE0u, 1);  /* 0C0AAADE mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAAE0u); { u32 t_ = r13; PR = 0x0C0AAAE4u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAAE4u); }  /* 0C0AAAE0 jsr @Rn */
L_0C0AAAE4: BLKS(0x0C0AAAE4u);
	r7 = 0x1FFu; UPD(0x0C0AAAE6u, 1);  /* 0C0AAAE4 mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C0AAAE8u, 1);  /* 0C0AAAE6 mov.l @(disp,Rm),Rn */
	r7 &= r0;  /* 0C0AAAE8 and Rm,Rn */
	IF(0x0C0AAAEAu); MACL = r7 * r4;  /* 0C0AAAEA mul.l Rm,Rn */
	r0 = 0xFFFFFFF7u;  /* 0C0AAAEC mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0AAAF0u, 5);  /* 0C0AAAEE mov.l @(disp,Rm),Rn */
	IF(0x0C0AAAF0u); r10 = MACL;  /* 0C0AAAF0 sts macl,Rn */
	IF(0x0C0AAAF2u); ARG0(0x4A0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0AAAF2 shad Rm,Rn */
	r2 = r4;  /* 0C0AAAF4 mov Rm,Rn */
	IF(0x0C0AAAF6u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0AAAF6 shar Rn */
	r10 += r6;  /* 0C0AAAF8 add Rm,Rn */
	r10 -= r2;  /* 0C0AAAFA sub Rm,Rn */
	IF(0x0C0AAAFCu); { u32 t_ = r13; PR = 0x0C0AAB00u; r9 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 8); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAB00u); }  /* 0C0AAAFC jsr @Rn */
L_0C0AAB00: BLKS(0x0C0AAB00u);
	r3 = 0x7FFu; UPD(0x0C0AAB02u, 1);  /* 0C0AAB00 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AAB02 mov Rm,Rn */
	r5 = 0x200u; UPD(0x0C0AAB06u, 2);  /* 0C0AAB04 mov.w @(disp,pc),Rn */
	r10 &= r3;  /* 0C0AAB06 and Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AAB0Au, 2);  /* 0C0AAB08 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C0AAB0A add Rm,Rn */
	r4 = r9;  /* 0C0AAB0C mov Rm,Rn */
	IF(0x0C0AAB0Eu); { u32 t_ = r0; PR = 0x0C0AAB12u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AAB12u); }  /* 0C0AAB0E jsr @Rn */
L_0C0AAB12: BLKS(0x0C0AAB12u);
	r4 = r9;  /* 0C0AAB12 mov Rm,Rn */
	r1 = 0x6u;  /* 0C0AAB14 mov #imm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AAB18u, 3);  /* 0C0AAB16 mov.l @(disp,pc),Rn */
	IF(0x0C0AAB18u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AAB18 shld Rm,Rn */
	r5 = r10;  /* 0C0AAB1A mov Rm,Rn */
	IF(0x0C0AAB1Cu); { u32 t_ = r9; PR = 0x0C0AAB20u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AAB20u); }  /* 0C0AAB1C jsr @Rn */
L_0C0AAB20: BLKS(0x0C0AAB20u);
	r7 = 0x6u;  /* 0C0AAB20 mov #imm,Rn */
	IF(0x0C0AAB22u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AAB22 shld Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AAB26u, 3);  /* 0C0AAB24 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0AAB26 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0AAB28 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0AAB2Cu, 3);  /* 0C0AAB2A mov.l Rm,@(disp,Rn) */
	r4 += 0x30u;  /* 0C0AAB2C add #imm,Rn */
	r8 += 0x31u;  /* 0C0AAB2E add #imm,Rn */
	W8(r8, r0); UPD(0x0C0AAB32u, 3);  /* 0C0AAB30 mov.b Rm,@Rn */
	r6 = 0x0u;  /* 0C0AAB32 mov #imm,Rn */
	IF(0x0C0AAB34u); { u32 t_ = r13; PR = 0x0C0AAB38u; W8(r4, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAB38u); }  /* 0C0AAB34 jsr @Rn */
L_0C0AAB38: BLKS(0x0C0AAB38u);
	r8 += 0x1u;  /* 0C0AAB38 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0AAB3A and #imm,r0 */
	W8(r8, r0); UPD(0x0C0AAB3Eu, 3);  /* 0C0AAB3C mov.b Rm,@Rn */
	r9 = r12;  /* 0C0AAB3E mov Rm,Rn */
	r0 = 0xBu;  /* 0C0AAB40 mov #imm,Rn */
	IF(0x0C0AAB42u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAB44u, 3);  /* 0C0AAB42 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AAB44 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0AAB48u, 2);  /* 0C0AAB46 mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0AAB48 mov #imm,Rn */
	IF(0x0C0AAB4Au); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAB4Cu, 2);  /* 0C0AAB4A mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0AAB4C add #imm,Rn */
	{ u32 v_ = r3; r8 -= 1; W8(r8, v_); } UPD(0x0C0AAB50u, 2);  /* 0C0AAB4E mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0AAB50 exts.w Rm,Rn */
	r10 = 0x1104FFFFu; UPD(0x0C0AAB54u, 2);  /* 0C0AAB52 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AAB54 add #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0AAB58u, 2);  /* 0C0AAB56 mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAB58 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0AAB5Cu, 2);  /* 0C0AAB5A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AAAB0u, 3); goto L_0C0AAAB0; } UPD(0x0C0AAB60u, 1); goto L_0C0AAB60; }  /* 0C0AAB5C bf/s */
L_0C0AAB60: BLKS(0x0C0AAB60u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C0AAA2Eu, 3); goto L_0C0AAA2E; }  /* 0C0AAB60 bra */
L_0C0AAB70: BLKS(0x0C0AAB70u);
	{ IF(0x0C0AAB72u); ; /* slot nop */ UPD(0x0C0AAA14u, 3); goto L_0C0AAA14; }  /* 0C0AAB70 bra */
}

/* FUN_0c0aabb0 */
void f_0C0AABB0(sh3_t *c)
{
	LOCALS;
L_0C0AABB0: BLKS(0x0C0AABB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABB2u, 1);  /* 0C0AABB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABB4u, 1);  /* 0C0AABB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABB6u, 1);  /* 0C0AABB4 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AABB6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABBAu, 2);  /* 0C0AABB8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0AABBA exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABBEu, 2);  /* 0C0AABBC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABC0u, 1);  /* 0C0AABBE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABC2u, 1);  /* 0C0AABC0 mov.l Rm,@-Rn */
	IF(0x0C0AABC2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AABC4u, 1);  /* 0C0AABC2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0AABC4 add #imm,Rn */
	r14 = r15;  /* 0C0AABC6 mov Rm,Rn */
	W32(r14, r5); UPD(0x0C0AABCAu, 3);  /* 0C0AABC8 mov.l Rm,@Rn */
	r5 = R32(r14 + 0x3Cu); UPD(0x0C0AABCCu, 1);  /* 0C0AABCA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0AABCEu, 1);  /* 0C0AABCC mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r5;  /* 0C0AABCE exts.w Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C0AABD2u, 2);  /* 0C0AABD0 mov.l @(disp,Rm),Rn */
	r1 = r12;  /* 0C0AABD2 mov Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AABD6u, 2);  /* 0C0AABD4 mov.l @(disp,pc),Rn */
	IF(0x0C0AABD6u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0AABD6 rotl Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C0AABDAu, 2);  /* 0C0AABD8 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)r7;  /* 0C0AABDA exts.b Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AABDEu, 2);  /* 0C0AABDC mov.l @(disp,pc),Rn */
	IF(0x0C0AABDEu); r10 = T;  /* 0C0AABDE movt Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C0AABE2u, 2);  /* 0C0AABE0 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0AABE2 add Rm,Rn */
	IF(0x0C0AABE4u); { u32 t_ = r8; PR = 0x0C0AABE8u; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AABE8u); }  /* 0C0AABE4 jsr @Rn */
L_0C0AABE8: BLKS(0x0C0AABE8u);
	IF(0x0C0AABE8u); MACL = r12 * r0;  /* 0C0AABE8 mul.l Rm,Rn */
	IF(0x0C0AABEAu); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0AABEA shar Rn */
	r8 = 0xC0AA630u; UPD(0x0C0AABEEu, 4);  /* 0C0AABEC mov.l @(disp,pc),Rn */
	IF(0x0C0AABEEu); r3 = MACL;  /* 0C0AABEE sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AABF0 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AABF2 exts.w Rm,Rn */
	r10 += r0;  /* 0C0AABF4 add Rm,Rn */
	r10 += 0x1u;  /* 0C0AABF6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0AABF8 exts.w Rm,Rn */
	IF(0x0C0AABFAu); ;  /* 0C0AABFA nop */
	UPD(0x0C0AABFCu, 7);
L_0C0AABFC: BLKS(0x0C0AABFCu);
	IF(0x0C0AABFCu); { u32 t_ = r8; PR = 0x0C0AAC00u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA630, 0x0C0AA630u, 0x0C0AAC00u); }  /* 0C0AABFC jsr @Rn */
L_0C0AAC00: BLKS(0x0C0AAC00u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0AAC00 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AAC02 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AAC30u, 5); goto L_0C0AAC30; } goto L_0C0AAC08; }  /* 0C0AAC04 bf/s */
L_0C0AAC08: BLKS(0x0C0AAC08u);
	IF(0x0C0AAC08u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0AAC08 rotl Rn */
	IF(0x0C0AAC0Au); r13 = T;  /* 0C0AAC0A movt Rn */
	r11 += r13;  /* 0C0AAC0C add Rm,Rn */
	IF(0x0C0AAC0Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AAC0E shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AAC10 tst Rm,Rn */
	if (!T) { UPD(0x0C0AABFCu, 9); goto L_0C0AABFC; }  /* 0C0AAC12 bf */
L_0C0AAC14: BLKS(0x0C0AAC14u);
	r14 += 0x18u;  /* 0C0AAC14 add #imm,Rn */
	UPD(0x0C0AAC16u, 1);
L_0C0AAC16: BLKS(0x0C0AAC16u);
	r15 = r14;  /* 0C0AAC16 mov Rm,Rn */
	IF(0x0C0AAC18u); PR = R32(r15); r15 += 4; UPD(0x0C0AAC1Au, 2);  /* 0C0AAC18 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAC1Cu, 1);  /* 0C0AAC1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AAC1Eu, 1);  /* 0C0AAC1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AAC20u, 1);  /* 0C0AAC1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AAC22u, 1);  /* 0C0AAC20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAC24u, 1);  /* 0C0AAC22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAC26u, 1);  /* 0C0AAC24 mov.l @Rm+,Rn */
	IF(0x0C0AAC26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAC26 rts */
L_0C0AAC30: BLKS(0x0C0AAC30u);
	r12 = 0x0u;  /* 0C0AAC30 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAC32 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AAC14u, 5); goto L_0C0AAC14; }  /* 0C0AAC34 bt */
L_0C0AAC36: BLKS(0x0C0AAC36u);
	r0 = r9;  /* 0C0AAC36 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0AAC38 and #imm,r0 */
	r13 = 0xC0AFE40u; UPD(0x0C0AAC3Cu, 3);  /* 0C0AAC3A mov.l @(disp,pc),Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0AAC3Eu, 1);  /* 0C0AAC3C mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAC3Eu); ;  /* 0C0AAC3E nop */
	UPD(0x0C0AAC40u, 1);
L_0C0AAC40: BLKS(0x0C0AAC40u);
	r3 = R32(r14 + 0x10u); UPD(0x0C0AAC42u, 1);  /* 0C0AAC40 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AAC42 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AAC46u, 2);  /* 0C0AAC44 mov.w @Rm+,Rn */
	r5 = 0x16u;  /* 0C0AAC46 mov #imm,Rn */
	IF(0x0C0AAC48u); MACL = r0 * r8;  /* 0C0AAC48 mul.l Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0AAC4Cu, 4);  /* 0C0AAC4A mov.l @(disp,Rm),Rn */
	r4 = 0x18u;  /* 0C0AAC4C mov #imm,Rn */
	r9 = 0xC275E1Cu; UPD(0x0C0AAC50u, 2);  /* 0C0AAC4E mov.l @(disp,pc),Rn */
	IF(0x0C0AAC50u); r8 = MACL;  /* 0C0AAC50 sts macl,Rn */
	r10 = 0xC050D70u; UPD(0x0C0AAC54u, 2);  /* 0C0AAC52 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0AAC54 add Rm,Rn */
	r6 = 0xC0000002u; UPD(0x0C0AAC58u, 2);  /* 0C0AAC56 mov.l @(disp,pc),Rn */
	r6 |= r7;  /* 0C0AAC58 or Rm,Rn */
	W32(r8, r6); UPD(0x0C0AAC5Cu, 2);  /* 0C0AAC5A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0AAC5Eu, 1);  /* 0C0AAC5C mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAC5Eu); { u32 t_ = r10; PR = 0x0C0AAC62u; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AAC62u); }  /* 0C0AAC5E jsr @Rn */
L_0C0AAC62: BLKS(0x0C0AAC62u);
	IF(0x0C0AAC62u); { u32 t_ = r13; PR = 0x0C0AAC66u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAC66u); }  /* 0C0AAC62 jsr @Rn */
L_0C0AAC66: BLKS(0x0C0AAC66u);
	r1 = R32(r14); UPD(0x0C0AAC68u, 1);  /* 0C0AAC66 mov.l @Rm,Rn */
	r0 &= 0x7u;  /* 0C0AAC68 and #imm,r0 */
	r4 = R32(r14 + 0x4u); UPD(0x0C0AAC6Cu, 2);  /* 0C0AAC6A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r1); UPD(0x0C0AAC6Eu, 1);  /* 0C0AAC6C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r4); UPD(0x0C0AAC70u, 1);  /* 0C0AAC6E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAC70u); { u32 t_ = r13; PR = 0x0C0AAC74u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAC74u); }  /* 0C0AAC70 jsr @Rn */
L_0C0AAC74: BLKS(0x0C0AAC74u);
	r3 = 0x1FFu; UPD(0x0C0AAC76u, 1);  /* 0C0AAC74 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AAC76 mov Rm,Rn */
	IF(0x0C0AAC78u); { u32 t_ = r13; PR = 0x0C0AAC7Cu; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAC7Cu); }  /* 0C0AAC78 jsr @Rn */
L_0C0AAC7C: BLKS(0x0C0AAC7Cu);
	r2 = 0x7FFu; UPD(0x0C0AAC7Eu, 1);  /* 0C0AAC7C mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0AAC7E mov Rm,Rn */
	r0 = 0x200u; UPD(0x0C0AAC82u, 2);  /* 0C0AAC80 mov.w @(disp,pc),Rn */
	r9 &= r2;  /* 0C0AAC82 and Rm,Rn */
	r9 += r0;  /* 0C0AAC84 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AAC88u, 3);  /* 0C0AAC86 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AAC88 mov Rm,Rn */
	IF(0x0C0AAC8Au); { u32 t_ = r0; PR = 0x0C0AAC8Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AAC8Eu); }  /* 0C0AAC8A jsr @Rn */
L_0C0AAC8E: BLKS(0x0C0AAC8Eu);
	r5 = r9;  /* 0C0AAC8E mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AAC92u, 2);  /* 0C0AAC90 mov.l @(disp,pc),Rn */
	IF(0x0C0AAC92u); r0 <<= 8;  /* 0C0AAC92 shll8 Rn */
	r4 = r10;  /* 0C0AAC94 mov Rm,Rn */
	IF(0x0C0AAC96u); { u32 t_ = r9; PR = 0x0C0AAC9Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AAC9Au); }  /* 0C0AAC96 jsr @Rn */
L_0C0AAC9A: BLKS(0x0C0AAC9Au);
	IF(0x0C0AAC9Au); r0 <<= 8;  /* 0C0AAC9A shll8 Rn */
	r10 = 0x0u;  /* 0C0AAC9C mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AACA0u, 3);  /* 0C0AAC9E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0AACA0 mov Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0AACA4u, 2);  /* 0C0AACA2 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0AACA4 add #imm,Rn */
	r8 += 0x31u;  /* 0C0AACA6 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0AACAAu, 3);  /* 0C0AACA8 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C0AACAA mov #imm,Rn */
	IF(0x0C0AACACu); { u32 t_ = r13; PR = 0x0C0AACB0u; W8(r6, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AACB0u); }  /* 0C0AACAC jsr @Rn */
L_0C0AACB0: BLKS(0x0C0AACB0u);
	r8 += 0x1u;  /* 0C0AACB0 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0AACB2 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0AACB6u, 3);  /* 0C0AACB4 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0AACB6 mov Rm,Rn */
	r0 = 0xBu;  /* 0C0AACB8 mov #imm,Rn */
	IF(0x0C0AACBAu); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AACBCu, 3);  /* 0C0AACBA mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AACBC add #imm,Rn */
	W8(r8, r5); UPD(0x0C0AACC0u, 2);  /* 0C0AACBE mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0AACC0 mov #imm,Rn */
	IF(0x0C0AACC2u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AACC4u, 2);  /* 0C0AACC2 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0AACC4 add #imm,Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0AACC8u, 2);  /* 0C0AACC6 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0AACC8 exts.w Rm,Rn */
	r4 = 0x1104FFFFu; UPD(0x0C0AACCCu, 2);  /* 0C0AACCA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AACCC add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0AACD0u, 2);  /* 0C0AACCE mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AACD0 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0AACD4u, 2);  /* 0C0AACD2 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AAC40u, 3); goto L_0C0AAC40; } UPD(0x0C0AACD8u, 1); goto L_0C0AACD8; }  /* 0C0AACD4 bf/s */
L_0C0AACD8: BLKS(0x0C0AACD8u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0AAC16u, 3); goto L_0C0AAC16; }  /* 0C0AACD8 bra */
}

/* FUN_0c0aad10 */
void f_0C0AAD10(sh3_t *c)
{
	LOCALS;
L_0C0AAD10: BLKS(0x0C0AAD10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD12u, 1);  /* 0C0AAD10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD14u, 1);  /* 0C0AAD12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD16u, 1);  /* 0C0AAD14 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AAD16 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD1Au, 2);  /* 0C0AAD18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD1Cu, 1);  /* 0C0AAD1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD1Eu, 1);  /* 0C0AAD1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAD20u, 1);  /* 0C0AAD1E mov.l Rm,@-Rn */
	IF(0x0C0AAD20u); r15 -= 4; W32(r15, PR); UPD(0x0C0AAD22u, 1);  /* 0C0AAD20 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0AAD22 add #imm,Rn */
	r14 = r15;  /* 0C0AAD24 mov Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0AAD28u, 3);  /* 0C0AAD26 mov.l Rm,@(disp,Rn) */
	r13 = R32(r14 + 0x3Cu); UPD(0x0C0AAD2Au, 1);  /* 0C0AAD28 mov.l @(disp,Rm),Rn */
	r6 = 0x40u;  /* 0C0AAD2A mov #imm,Rn */
	W32(r14, r5); UPD(0x0C0AAD2Eu, 2);  /* 0C0AAD2C mov.l Rm,@Rn */
	r6 += r14;  /* 0C0AAD2E add Rm,Rn */
	r11 = (u32)(s32)(s8)r13;  /* 0C0AAD30 exts.b Rm,Rn */
	W32(r14 + 0xCu, r11); UPD(0x0C0AAD34u, 3);  /* 0C0AAD32 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0AAD36u, 1);  /* 0C0AAD34 mov.l @(disp,Rm),Rn */
	r10 = R32(r6 + 0x0u); UPD(0x0C0AAD38u, 1);  /* 0C0AAD36 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0AAD38 exts.w Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C0AAD3Cu, 2);  /* 0C0AAD3A mov.l Rm,@(disp,Rn) */
	r1 = r12;  /* 0C0AAD3C mov Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AAD40u, 2);  /* 0C0AAD3E mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)r10;  /* 0C0AAD40 exts.b Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AAD44u, 2);  /* 0C0AAD42 mov.l @(disp,pc),Rn */
	IF(0x0C0AAD44u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0AAD44 rotl Rn */
	IF(0x0C0AAD46u); r10 = T;  /* 0C0AAD46 movt Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C0AAD4Au, 3);  /* 0C0AAD48 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0AAD4A add Rm,Rn */
	IF(0x0C0AAD4Cu); { u32 t_ = r8; PR = 0x0C0AAD50u; W32(r14 + 0x14u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAD50u); }  /* 0C0AAD4C jsr @Rn */
L_0C0AAD50: BLKS(0x0C0AAD50u);
	IF(0x0C0AAD50u); MACL = r12 * r0;  /* 0C0AAD50 mul.l Rm,Rn */
	IF(0x0C0AAD52u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0AAD52 shar Rn */
	r8 = 0xC0AA630u; UPD(0x0C0AAD56u, 4);  /* 0C0AAD54 mov.l @(disp,pc),Rn */
	IF(0x0C0AAD56u); r3 = MACL;  /* 0C0AAD56 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AAD58 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AAD5A exts.w Rm,Rn */
	r10 += r0;  /* 0C0AAD5C add Rm,Rn */
	r10 += 0x1u;  /* 0C0AAD5E add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0AAD60 exts.w Rm,Rn */
	IF(0x0C0AAD62u); ;  /* 0C0AAD62 nop */
	UPD(0x0C0AAD64u, 7);
L_0C0AAD64: BLKS(0x0C0AAD64u);
	IF(0x0C0AAD64u); { u32 t_ = r8; PR = 0x0C0AAD68u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA630, 0x0C0AA630u, 0x0C0AAD68u); }  /* 0C0AAD64 jsr @Rn */
L_0C0AAD68: BLKS(0x0C0AAD68u);
	r3 = (u32)(s32)(s16)r0;  /* 0C0AAD68 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0AAD6A tst Rm,Rn */
	{ u32 c_ = !T; r2 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AADA0u, 5); goto L_0C0AADA0; } goto L_0C0AAD70; }  /* 0C0AAD6C bf/s */
L_0C0AAD70: BLKS(0x0C0AAD70u);
	IF(0x0C0AAD70u); T = r2 >> 31; r2 = (r2 << 1) | T;  /* 0C0AAD70 rotl Rn */
	IF(0x0C0AAD72u); r0 = T;  /* 0C0AAD72 movt Rn */
	r11 += r0;  /* 0C0AAD74 add Rm,Rn */
	IF(0x0C0AAD76u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AAD76 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AAD78 tst Rm,Rn */
	if (!T) { UPD(0x0C0AAD64u, 9); goto L_0C0AAD64; }  /* 0C0AAD7A bf */
L_0C0AAD7C: BLKS(0x0C0AAD7Cu);
	r14 += 0x1Cu;  /* 0C0AAD7C add #imm,Rn */
	UPD(0x0C0AAD7Eu, 1);
L_0C0AAD7E: BLKS(0x0C0AAD7Eu);
	r15 = r14;  /* 0C0AAD7E mov Rm,Rn */
	IF(0x0C0AAD80u); PR = R32(r15); r15 += 4; UPD(0x0C0AAD82u, 2);  /* 0C0AAD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAD84u, 1);  /* 0C0AAD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AAD86u, 1);  /* 0C0AAD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AAD88u, 1);  /* 0C0AAD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AAD8Au, 1);  /* 0C0AAD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAD8Cu, 1);  /* 0C0AAD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAD8Eu, 1);  /* 0C0AAD8C mov.l @Rm+,Rn */
	IF(0x0C0AAD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAD8E rts */
L_0C0AADA0: BLKS(0x0C0AADA0u);
	r12 = 0x0u;  /* 0C0AADA0 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AADA2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AAD7Cu, 5); goto L_0C0AAD7C; }  /* 0C0AADA4 bt */
L_0C0AADA6: BLKS(0x0C0AADA6u);
	r0 = r9;  /* 0C0AADA6 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0AADA8 and #imm,r0 */
	r13 = 0xC0AFE40u; UPD(0x0C0AADACu, 3);  /* 0C0AADAA mov.l @(disp,pc),Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C0AADAEu, 1);  /* 0C0AADAC mov.l Rm,@(disp,Rn) */
	IF(0x0C0AADAEu); ;  /* 0C0AADAE nop */
	UPD(0x0C0AADB0u, 1);
L_0C0AADB0: BLKS(0x0C0AADB0u);
	r3 = R32(r14 + 0x14u); UPD(0x0C0AADB2u, 1);  /* 0C0AADB0 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AADB2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AADB6u, 2);  /* 0C0AADB4 mov.w @Rm+,Rn */
	IF(0x0C0AADB6u); MACL = r0 * r8;  /* 0C0AADB6 mul.l Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0AADBAu, 3);  /* 0C0AADB8 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C0AADBCu, 1);  /* 0C0AADBA mov.l @(disp,Rm),Rn */
	IF(0x0C0AADBCu); r8 = MACL;  /* 0C0AADBC sts macl,Rn */
	r7 = 0xC0000002u; UPD(0x0C0AADC0u, 2);  /* 0C0AADBE mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C0AADC0 add Rm,Rn */
	r1 = R32(r14); UPD(0x0C0AADC4u, 2);  /* 0C0AADC2 mov.l @Rm,Rn */
	r7 |= r9;  /* 0C0AADC4 or Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C0AADC8u, 2);  /* 0C0AADC6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r1); UPD(0x0C0AADCAu, 1);  /* 0C0AADC8 mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C0AADCCu, 1);  /* 0C0AADCA mov.l Rm,@Rn */
	IF(0x0C0AADCCu); { u32 t_ = r13; PR = 0x0C0AADD0u; W32(r14 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AADD0u); }  /* 0C0AADCC jsr @Rn */
L_0C0AADD0: BLKS(0x0C0AADD0u);
	r0 &= 0x7u;  /* 0C0AADD0 and #imm,r0 */
	r4 = 0xCu;  /* 0C0AADD2 mov #imm,Rn */
	IF(0x0C0AADD4u); { u32 t_ = r10; PR = 0x0C0AADD8u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AADD8u); }  /* 0C0AADD4 jsr @Rn */
L_0C0AADD8: BLKS(0x0C0AADD8u);
	r6 = R32(r14 + 0x4u); UPD(0x0C0AADDAu, 1);  /* 0C0AADD8 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0AADDCu, 1);  /* 0C0AADDA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0AADDEu, 1);  /* 0C0AADDC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r5); UPD(0x0C0AADE0u, 1);  /* 0C0AADDE mov.l Rm,@(disp,Rn) */
	IF(0x0C0AADE0u); { u32 t_ = r13; PR = 0x0C0AADE4u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AADE4u); }  /* 0C0AADE0 jsr @Rn */
L_0C0AADE4: BLKS(0x0C0AADE4u);
	r4 = 0x1FFu; UPD(0x0C0AADE6u, 1);  /* 0C0AADE4 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AADE6 mov Rm,Rn */
	IF(0x0C0AADE8u); { u32 t_ = r13; PR = 0x0C0AADECu; r10 &= r4; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AADECu); }  /* 0C0AADE8 jsr @Rn */
L_0C0AADEC: BLKS(0x0C0AADECu);
	r3 = 0x3FFu; UPD(0x0C0AADEEu, 1);  /* 0C0AADEC mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0AADEE mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0AADF2u, 2);  /* 0C0AADF0 mov.w @(disp,pc),Rn */
	r9 &= r3;  /* 0C0AADF2 and Rm,Rn */
	r9 += r0;  /* 0C0AADF4 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AADF8u, 3);  /* 0C0AADF6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AADF8 mov Rm,Rn */
	IF(0x0C0AADFAu); { u32 t_ = r0; PR = 0x0C0AADFEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AADFEu); }  /* 0C0AADFA jsr @Rn */
L_0C0AADFE: BLKS(0x0C0AADFEu);
	r5 = r9;  /* 0C0AADFE mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AAE02u, 2);  /* 0C0AAE00 mov.l @(disp,pc),Rn */
	IF(0x0C0AAE02u); r0 <<= 8;  /* 0C0AAE02 shll8 Rn */
	r4 = r10;  /* 0C0AAE04 mov Rm,Rn */
	IF(0x0C0AAE06u); { u32 t_ = r9; PR = 0x0C0AAE0Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AAE0Au); }  /* 0C0AAE06 jsr @Rn */
L_0C0AAE0A: BLKS(0x0C0AAE0Au);
	r2 = 0x0u;  /* 0C0AAE0A mov #imm,Rn */
	IF(0x0C0AAE0Cu); r0 <<= 8;  /* 0C0AAE0C shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AAE10u, 3);  /* 0C0AAE0E mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C0AAE10 mov Rm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0AAE14u, 2);  /* 0C0AAE12 mov.l Rm,@(disp,Rn) */
	r7 += 0x30u;  /* 0C0AAE14 add #imm,Rn */
	r8 += 0x31u;  /* 0C0AAE16 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0AAE1Au, 3);  /* 0C0AAE18 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C0AAE1A mov #imm,Rn */
	IF(0x0C0AAE1Cu); { u32 t_ = r13; PR = 0x0C0AAE20u; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAE20u); }  /* 0C0AAE1C jsr @Rn */
L_0C0AAE20: BLKS(0x0C0AAE20u);
	r8 += 0x1u;  /* 0C0AAE20 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0AAE22 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0AAE26u, 3);  /* 0C0AAE24 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0AAE26 mov Rm,Rn */
	r0 = 0xFu;  /* 0C0AAE28 mov #imm,Rn */
	IF(0x0C0AAE2Au); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAE2Cu, 3);  /* 0C0AAE2A mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AAE2C add #imm,Rn */
	W8(r8, r1); UPD(0x0C0AAE30u, 2);  /* 0C0AAE2E mov.b Rm,@Rn */
	r0 = 0x13u;  /* 0C0AAE30 mov #imm,Rn */
	IF(0x0C0AAE32u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAE34u, 2);  /* 0C0AAE32 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0AAE34 add #imm,Rn */
	{ u32 v_ = r6; r8 -= 1; W8(r8, v_); } UPD(0x0C0AAE38u, 2);  /* 0C0AAE36 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0AAE38 exts.w Rm,Rn */
	r5 = 0x1104FFFFu; UPD(0x0C0AAE3Cu, 2);  /* 0C0AAE3A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AAE3C add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0AAE40u, 2);  /* 0C0AAE3E mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAE40 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0AAE44u, 2);  /* 0C0AAE42 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AADB0u, 3); goto L_0C0AADB0; } UPD(0x0C0AAE48u, 1); goto L_0C0AAE48; }  /* 0C0AAE44 bf/s */
L_0C0AAE48: BLKS(0x0C0AAE48u);
	{ r14 += 0x1Cu; /* slot add #imm,Rn */ UPD(0x0C0AAD7Eu, 3); goto L_0C0AAD7E; }  /* 0C0AAE48 bra */
}

/* FUN_0c0aae80 */
void f_0C0AAE80(sh3_t *c)
{
	LOCALS;
L_0C0AAE80: BLKS(0x0C0AAE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE82u, 1);  /* 0C0AAE80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE84u, 1);  /* 0C0AAE82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE86u, 1);  /* 0C0AAE84 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AAE86 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE8Au, 2);  /* 0C0AAE88 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0AAE8A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE8Eu, 2);  /* 0C0AAE8C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE90u, 1);  /* 0C0AAE8E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAE92u, 1);  /* 0C0AAE90 mov.l Rm,@-Rn */
	IF(0x0C0AAE92u); r15 -= 4; W32(r15, PR); UPD(0x0C0AAE94u, 1);  /* 0C0AAE92 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0AAE94 add #imm,Rn */
	r14 = r15;  /* 0C0AAE96 mov Rm,Rn */
	W32(r14, r5); UPD(0x0C0AAE9Au, 3);  /* 0C0AAE98 mov.l Rm,@Rn */
	r5 = R32(r14 + 0x3Cu); UPD(0x0C0AAE9Cu, 1);  /* 0C0AAE9A mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0AAE9Eu, 1);  /* 0C0AAE9C mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r5;  /* 0C0AAE9E exts.w Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C0AAEA2u, 2);  /* 0C0AAEA0 mov.l @(disp,Rm),Rn */
	r1 = r12;  /* 0C0AAEA2 mov Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AAEA6u, 2);  /* 0C0AAEA4 mov.l @(disp,pc),Rn */
	IF(0x0C0AAEA6u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0AAEA6 rotl Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C0AAEAAu, 2);  /* 0C0AAEA8 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)r7;  /* 0C0AAEAA exts.b Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AAEAEu, 2);  /* 0C0AAEAC mov.l @(disp,pc),Rn */
	IF(0x0C0AAEAEu); r10 = T;  /* 0C0AAEAE movt Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C0AAEB2u, 2);  /* 0C0AAEB0 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0AAEB2 add Rm,Rn */
	IF(0x0C0AAEB4u); { u32 t_ = r8; PR = 0x0C0AAEB8u; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAEB8u); }  /* 0C0AAEB4 jsr @Rn */
L_0C0AAEB8: BLKS(0x0C0AAEB8u);
	IF(0x0C0AAEB8u); MACL = r12 * r0;  /* 0C0AAEB8 mul.l Rm,Rn */
	IF(0x0C0AAEBAu); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0AAEBA shar Rn */
	r8 = 0xC0AA630u; UPD(0x0C0AAEBEu, 4);  /* 0C0AAEBC mov.l @(disp,pc),Rn */
	IF(0x0C0AAEBEu); r3 = MACL;  /* 0C0AAEBE sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AAEC0 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AAEC2 exts.w Rm,Rn */
	r10 += r0;  /* 0C0AAEC4 add Rm,Rn */
	r10 += 0x1u;  /* 0C0AAEC6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0AAEC8 exts.w Rm,Rn */
	IF(0x0C0AAECAu); ;  /* 0C0AAECA nop */
	UPD(0x0C0AAECCu, 7);
L_0C0AAECC: BLKS(0x0C0AAECCu);
	IF(0x0C0AAECCu); { u32 t_ = r8; PR = 0x0C0AAED0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA630, 0x0C0AA630u, 0x0C0AAED0u); }  /* 0C0AAECC jsr @Rn */
L_0C0AAED0: BLKS(0x0C0AAED0u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0AAED0 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AAED2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AAF00u, 5); goto L_0C0AAF00; } goto L_0C0AAED8; }  /* 0C0AAED4 bf/s */
L_0C0AAED8: BLKS(0x0C0AAED8u);
	IF(0x0C0AAED8u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0AAED8 rotl Rn */
	IF(0x0C0AAEDAu); r13 = T;  /* 0C0AAEDA movt Rn */
	r11 += r13;  /* 0C0AAEDC add Rm,Rn */
	IF(0x0C0AAEDEu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AAEDE shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AAEE0 tst Rm,Rn */
	if (!T) { UPD(0x0C0AAECCu, 9); goto L_0C0AAECC; }  /* 0C0AAEE2 bf */
L_0C0AAEE4: BLKS(0x0C0AAEE4u);
	r14 += 0x18u;  /* 0C0AAEE4 add #imm,Rn */
	UPD(0x0C0AAEE6u, 1);
L_0C0AAEE6: BLKS(0x0C0AAEE6u);
	r15 = r14;  /* 0C0AAEE6 mov Rm,Rn */
	IF(0x0C0AAEE8u); PR = R32(r15); r15 += 4; UPD(0x0C0AAEEAu, 2);  /* 0C0AAEE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAEECu, 1);  /* 0C0AAEEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AAEEEu, 1);  /* 0C0AAEEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AAEF0u, 1);  /* 0C0AAEEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AAEF2u, 1);  /* 0C0AAEF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAEF4u, 1);  /* 0C0AAEF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAEF6u, 1);  /* 0C0AAEF4 mov.l @Rm+,Rn */
	IF(0x0C0AAEF6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAEF6 rts */
L_0C0AAF00: BLKS(0x0C0AAF00u);
	r12 = 0x0u;  /* 0C0AAF00 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAF02 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AAEE4u, 5); goto L_0C0AAEE4; }  /* 0C0AAF04 bt */
L_0C0AAF06: BLKS(0x0C0AAF06u);
	r0 = r9;  /* 0C0AAF06 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0AAF08 and #imm,r0 */
	r13 = 0xC0AFE40u; UPD(0x0C0AAF0Cu, 3);  /* 0C0AAF0A mov.l @(disp,pc),Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0AAF0Eu, 1);  /* 0C0AAF0C mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAF0Eu); ;  /* 0C0AAF0E nop */
	UPD(0x0C0AAF10u, 1);
L_0C0AAF10: BLKS(0x0C0AAF10u);
	r3 = R32(r14 + 0x10u); UPD(0x0C0AAF12u, 1);  /* 0C0AAF10 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AAF12 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AAF16u, 2);  /* 0C0AAF14 mov.w @Rm+,Rn */
	r5 = 0x20u;  /* 0C0AAF16 mov #imm,Rn */
	IF(0x0C0AAF18u); MACL = r0 * r8;  /* 0C0AAF18 mul.l Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0AAF1Cu, 4);  /* 0C0AAF1A mov.l @(disp,Rm),Rn */
	r9 = 0xC275E1Cu; UPD(0x0C0AAF1Eu, 1);  /* 0C0AAF1C mov.l @(disp,pc),Rn */
	IF(0x0C0AAF1Eu); r8 = MACL;  /* 0C0AAF1E sts macl,Rn */
	r6 = 0xC0000002u; UPD(0x0C0AAF22u, 2);  /* 0C0AAF20 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0AAF22 add Rm,Rn */
	r6 |= r7;  /* 0C0AAF24 or Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C0AAF28u, 3);  /* 0C0AAF26 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C0AAF2Au, 1);  /* 0C0AAF28 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0AAF2Cu, 1);  /* 0C0AAF2A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAF2Cu); { u32 t_ = r13; PR = 0x0C0AAF30u; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAF30u); }  /* 0C0AAF2C jsr @Rn */
L_0C0AAF30: BLKS(0x0C0AAF30u);
	r0 &= 0x7u;  /* 0C0AAF30 and #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C0AAF34u, 2);  /* 0C0AAF32 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAF34u); { u32 t_ = r10; PR = 0x0C0AAF38u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AAF38u); }  /* 0C0AAF34 jsr @Rn */
L_0C0AAF38: BLKS(0x0C0AAF38u);
	r1 = R32(r14); UPD(0x0C0AAF3Au, 1);  /* 0C0AAF38 mov.l @Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0AAF3Cu, 1);  /* 0C0AAF3A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r1); UPD(0x0C0AAF3Eu, 1);  /* 0C0AAF3C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r4); UPD(0x0C0AAF40u, 1);  /* 0C0AAF3E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AAF40u); { u32 t_ = r13; PR = 0x0C0AAF44u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAF44u); }  /* 0C0AAF40 jsr @Rn */
L_0C0AAF44: BLKS(0x0C0AAF44u);
	r3 = 0x1FFu; UPD(0x0C0AAF46u, 1);  /* 0C0AAF44 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AAF46 mov Rm,Rn */
	IF(0x0C0AAF48u); { u32 t_ = r13; PR = 0x0C0AAF4Cu; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAF4Cu); }  /* 0C0AAF48 jsr @Rn */
L_0C0AAF4C: BLKS(0x0C0AAF4Cu);
	r2 = 0x3FFu; UPD(0x0C0AAF4Eu, 1);  /* 0C0AAF4C mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0AAF4E mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0AAF52u, 2);  /* 0C0AAF50 mov.w @(disp,pc),Rn */
	r9 &= r2;  /* 0C0AAF52 and Rm,Rn */
	r9 += r0;  /* 0C0AAF54 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AAF58u, 3);  /* 0C0AAF56 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AAF58 mov Rm,Rn */
	IF(0x0C0AAF5Au); { u32 t_ = r0; PR = 0x0C0AAF5Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AAF5Eu); }  /* 0C0AAF5A jsr @Rn */
L_0C0AAF5E: BLKS(0x0C0AAF5Eu);
	r5 = r9;  /* 0C0AAF5E mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AAF62u, 2);  /* 0C0AAF60 mov.l @(disp,pc),Rn */
	IF(0x0C0AAF62u); r0 <<= 8;  /* 0C0AAF62 shll8 Rn */
	r4 = r10;  /* 0C0AAF64 mov Rm,Rn */
	IF(0x0C0AAF66u); { u32 t_ = r9; PR = 0x0C0AAF6Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AAF6Au); }  /* 0C0AAF66 jsr @Rn */
L_0C0AAF6A: BLKS(0x0C0AAF6Au);
	IF(0x0C0AAF6Au); r0 <<= 8;  /* 0C0AAF6A shll8 Rn */
	r10 = 0x0u;  /* 0C0AAF6C mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AAF70u, 3);  /* 0C0AAF6E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0AAF70 mov Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0AAF74u, 2);  /* 0C0AAF72 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0AAF74 add #imm,Rn */
	r8 += 0x31u;  /* 0C0AAF76 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0AAF7Au, 3);  /* 0C0AAF78 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C0AAF7A mov #imm,Rn */
	IF(0x0C0AAF7Cu); { u32 t_ = r13; PR = 0x0C0AAF80u; W8(r6, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AAF80u); }  /* 0C0AAF7C jsr @Rn */
L_0C0AAF80: BLKS(0x0C0AAF80u);
	r8 += 0x1u;  /* 0C0AAF80 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0AAF82 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0AAF86u, 3);  /* 0C0AAF84 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0AAF86 mov Rm,Rn */
	r0 = 0xBu;  /* 0C0AAF88 mov #imm,Rn */
	IF(0x0C0AAF8Au); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAF8Cu, 3);  /* 0C0AAF8A mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AAF8C add #imm,Rn */
	W8(r8, r5); UPD(0x0C0AAF90u, 2);  /* 0C0AAF8E mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0AAF90 mov #imm,Rn */
	IF(0x0C0AAF92u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AAF94u, 2);  /* 0C0AAF92 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0AAF94 add #imm,Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0AAF98u, 2);  /* 0C0AAF96 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0AAF98 exts.w Rm,Rn */
	r4 = 0x1104FFFFu; UPD(0x0C0AAF9Cu, 2);  /* 0C0AAF9A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AAF9C add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0AAFA0u, 2);  /* 0C0AAF9E mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AAFA0 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0AAFA4u, 2);  /* 0C0AAFA2 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AAF10u, 3); goto L_0C0AAF10; } UPD(0x0C0AAFA8u, 1); goto L_0C0AAFA8; }  /* 0C0AAFA4 bf/s */
L_0C0AAFA8: BLKS(0x0C0AAFA8u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0AAEE6u, 3); goto L_0C0AAEE6; }  /* 0C0AAFA8 bra */
}

/* FUN_0c0aafe0 */
void f_0C0AAFE0(sh3_t *c)
{
	LOCALS;
L_0C0AAFE0: BLKS(0x0C0AAFE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFE2u, 1);  /* 0C0AAFE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFE4u, 1);  /* 0C0AAFE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFE6u, 1);  /* 0C0AAFE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFE8u, 1);  /* 0C0AAFE6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0AAFE8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFECu, 2);  /* 0C0AAFEA mov.l Rm,@-Rn */
	r1 = r10;  /* 0C0AAFEC mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFF0u, 2);  /* 0C0AAFEE mov.l Rm,@-Rn */
	IF(0x0C0AAFF0u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0AAFF0 rotl Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAFF4u, 2);  /* 0C0AAFF2 mov.l Rm,@-Rn */
	IF(0x0C0AAFF4u); r9 = T;  /* 0C0AAFF4 movt Rn */
	IF(0x0C0AAFF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AAFF8u, 2);  /* 0C0AAFF6 sts.l pr,@-Rn */
	r9 += r10;  /* 0C0AAFF8 add Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AAFFA add #imm,Rn */
	r14 = r15;  /* 0C0AAFFC mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AB000u, 4);  /* 0C0AAFFE mov.l Rm,@Rn */
	IF(0x0C0AB000u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0AB000 shar Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AB004u, 2);  /* 0C0AB002 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFE40u; UPD(0x0C0AB006u, 1);  /* 0C0AB004 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r6;  /* 0C0AB006 exts.b Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AB00Au, 2);  /* 0C0AB008 mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0AB00Cu, 1);  /* 0C0AB00A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB00Cu); { u32 t_ = r8; PR = 0x0C0AB010u; W32(r14 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB010u); }  /* 0C0AB00C jsr @Rn */
L_0C0AB010: BLKS(0x0C0AB010u);
	IF(0x0C0AB010u); MACL = r10 * r0;  /* 0C0AB010 mul.l Rm,Rn */
	r8 = 0xC0AA710u; UPD(0x0C0AB014u, 3);  /* 0C0AB012 mov.l @(disp,pc),Rn */
	IF(0x0C0AB014u); r3 = MACL;  /* 0C0AB014 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AB016 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AB018 exts.w Rm,Rn */
	r9 += r0;  /* 0C0AB01A add Rm,Rn */
	r9 += 0x1u;  /* 0C0AB01C add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0AB01E exts.w Rm,Rn */
	UPD(0x0C0AB020u, 6);
L_0C0AB020: BLKS(0x0C0AB020u);
	IF(0x0C0AB020u); { u32 t_ = r8; PR = 0x0C0AB024u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA710, 0x0C0AA710u, 0x0C0AB024u); }  /* 0C0AB020 jsr @Rn */
L_0C0AB024: BLKS(0x0C0AB024u);
	r9 = (u32)(s32)(s16)r0;  /* 0C0AB024 exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0AB026 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB050u, 5); goto L_0C0AB050; } goto L_0C0AB02C; }  /* 0C0AB028 bf/s */
L_0C0AB02C: BLKS(0x0C0AB02Cu);
	IF(0x0C0AB02Cu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C0AB02C rotl Rn */
	IF(0x0C0AB02Eu); r6 = T;  /* 0C0AB02E movt Rn */
	r11 += r6;  /* 0C0AB030 add Rm,Rn */
	IF(0x0C0AB032u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AB032 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AB034 tst Rm,Rn */
	if (!T) { UPD(0x0C0AB020u, 9); goto L_0C0AB020; }  /* 0C0AB036 bf */
L_0C0AB038: BLKS(0x0C0AB038u);
	r14 += 0x10u;  /* 0C0AB038 add #imm,Rn */
	UPD(0x0C0AB03Au, 1);
L_0C0AB03A: BLKS(0x0C0AB03Au);
	r15 = r14;  /* 0C0AB03A mov Rm,Rn */
	IF(0x0C0AB03Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AB03Eu, 2);  /* 0C0AB03C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB040u, 1);  /* 0C0AB03E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AB042u, 1);  /* 0C0AB040 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB044u, 1);  /* 0C0AB042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB046u, 1);  /* 0C0AB044 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB048u, 1);  /* 0C0AB046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB04Au, 1);  /* 0C0AB048 mov.l @Rm+,Rn */
	IF(0x0C0AB04Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB04A rts */
L_0C0AB050: BLKS(0x0C0AB050u);
	r12 = 0x0u;  /* 0C0AB050 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AB052 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AB038u, 5); goto L_0C0AB038; }  /* 0C0AB054 bt */
L_0C0AB056: BLKS(0x0C0AB056u);
	r13 = 0xC0AFE40u; UPD(0x0C0AB058u, 1);  /* 0C0AB056 mov.l @(disp,pc),Rn */
L_0C0AB058: BLKS(0x0C0AB058u);
	r5 = R32(r14 + 0xCu); UPD(0x0C0AB05Au, 1);  /* 0C0AB058 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AB05A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r9 = v_; } UPD(0x0C0AB05Eu, 2);  /* 0C0AB05C mov.w @Rm+,Rn */
	r3 = 0x17u;  /* 0C0AB05E mov #imm,Rn */
	IF(0x0C0AB060u); MACL = r9 * r8;  /* 0C0AB060 mul.l Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AB064u, 4);  /* 0C0AB062 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AB064 mov #imm,Rn */
	IF(0x0C0AB066u); r8 = MACL;  /* 0C0AB066 sts macl,Rn */
	r10 = 0xC0000001u; UPD(0x0C0AB06Au, 3);  /* 0C0AB068 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0AB06A add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0AB06Eu, 2);  /* 0C0AB06C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r2); UPD(0x0C0AB070u, 1);  /* 0C0AB06E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r5); UPD(0x0C0AB072u, 1);  /* 0C0AB070 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB072u); { u32 t_ = r13; PR = 0x0C0AB076u; W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB076u); }  /* 0C0AB072 jsr @Rn */
L_0C0AB076: BLKS(0x0C0AB076u);
	r0 &= 0xFu;  /* 0C0AB076 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0AB07Au, 2);  /* 0C0AB078 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0AB07Cu, 1);  /* 0C0AB07A mov.l @(disp,Rm),Rn */
	r0 = R32(r14); UPD(0x0C0AB07Eu, 1);  /* 0C0AB07C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0AB080u, 1);  /* 0C0AB07E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB080u); { u32 t_ = r13; PR = 0x0C0AB084u; W32(r8 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB084u); }  /* 0C0AB080 jsr @Rn */
L_0C0AB084: BLKS(0x0C0AB084u);
	r6 = 0x1FFu; UPD(0x0C0AB086u, 1);  /* 0C0AB084 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AB086 mov Rm,Rn */
	r10 &= r6;  /* 0C0AB088 and Rm,Rn */
	IF(0x0C0AB08Au); { u32 t_ = r13; PR = 0x0C0AB08Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB08Eu); }  /* 0C0AB08A jsr @Rn */
L_0C0AB08E: BLKS(0x0C0AB08Eu);
	r5 = 0x3FFu; UPD(0x0C0AB090u, 1);  /* 0C0AB08E mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0AB090 mov Rm,Rn */
	r9 &= r5;  /* 0C0AB092 and Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AB096u, 3);  /* 0C0AB094 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AB096 add #imm,Rn */
	r9 += r5;  /* 0C0AB098 add Rm,Rn */
	r4 = r10;  /* 0C0AB09A mov Rm,Rn */
	IF(0x0C0AB09Cu); { u32 t_ = r0; PR = 0x0C0AB0A0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AB0A0u); }  /* 0C0AB09C jsr @Rn */
L_0C0AB0A0: BLKS(0x0C0AB0A0u);
	r5 = r9;  /* 0C0AB0A0 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AB0A4u, 2);  /* 0C0AB0A2 mov.l @(disp,pc),Rn */
	IF(0x0C0AB0A4u); r0 <<= 8;  /* 0C0AB0A4 shll8 Rn */
	r4 = r10;  /* 0C0AB0A6 mov Rm,Rn */
	IF(0x0C0AB0A8u); { u32 t_ = r9; PR = 0x0C0AB0ACu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AB0ACu); }  /* 0C0AB0A8 jsr @Rn */
L_0C0AB0AC: BLKS(0x0C0AB0ACu);
	IF(0x0C0AB0ACu); r0 <<= 8;  /* 0C0AB0AC shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AB0B0u, 2);  /* 0C0AB0AE mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0AB0B0 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0AB0B2 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0AB0B6u, 3);  /* 0C0AB0B4 mov.b Rm,@Rn */
	r0 = 0xBu;  /* 0C0AB0B6 mov #imm,Rn */
	IF(0x0C0AB0B8u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AB0BAu, 2);  /* 0C0AB0B8 mov.b @(r0,Rm),Rn */
	r8 += 0x3u;  /* 0C0AB0BA add #imm,Rn */
	W8(r8, r10); UPD(0x0C0AB0BEu, 2);  /* 0C0AB0BC mov.b Rm,@Rn */
	r0 = r12;  /* 0C0AB0BE mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C0AB0C2u, 2);  /* 0C0AB0C0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AB0C2 add #imm,Rn */
	r3 = 0x0u;  /* 0C0AB0C4 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0AB0C6 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AB0C8 exts.w Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0AB0CCu, 5);  /* 0C0AB0CA mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0AB0CC cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB058u, 4); goto L_0C0AB058; } UPD(0x0C0AB0D2u, 1); goto L_0C0AB0D2; }  /* 0C0AB0CE bf/s */
L_0C0AB0D2: BLKS(0x0C0AB0D2u);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0AB03Au, 3); goto L_0C0AB03A; }  /* 0C0AB0D2 bra */
}

/* FUN_0c0ab100 */
void f_0C0AB100(sh3_t *c)
{
	LOCALS;
L_0C0AB100: BLKS(0x0C0AB100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB102u, 1);  /* 0C0AB100 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB104u, 1);  /* 0C0AB102 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB106u, 1);  /* 0C0AB104 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB108u, 1);  /* 0C0AB106 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0AB108 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB10Cu, 2);  /* 0C0AB10A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0AB10C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB110u, 2);  /* 0C0AB10E mov.l Rm,@-Rn */
	r1 = r10;  /* 0C0AB110 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB114u, 2);  /* 0C0AB112 mov.l Rm,@-Rn */
	IF(0x0C0AB114u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0AB114 rotl Rn */
	IF(0x0C0AB116u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB118u, 2);  /* 0C0AB116 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0AB118 add #imm,Rn */
	r14 = r15;  /* 0C0AB11A mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AB11Eu, 3);  /* 0C0AB11C mov.l Rm,@Rn */
	r9 = R32(r14 + 0x38u); UPD(0x0C0AB120u, 1);  /* 0C0AB11E mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AB122u, 1);  /* 0C0AB120 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)r9;  /* 0C0AB122 exts.w Rm,Rn */
	r6 = R32(r14 + 0x3Cu); UPD(0x0C0AB126u, 2);  /* 0C0AB124 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB126u); r9 = T;  /* 0C0AB126 movt Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AB12Au, 2);  /* 0C0AB128 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C0AB12A exts.w Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C0AB12Eu, 2);  /* 0C0AB12C mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C0AB12E add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C0AB132u, 2);  /* 0C0AB130 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB132u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0AB132 shar Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0AB136u, 2);  /* 0C0AB134 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r5); UPD(0x0C0AB138u, 1);  /* 0C0AB136 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB138u); { u32 t_ = r8; PR = 0x0C0AB13Cu; W32(r14 + 0x14u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB13Cu); }  /* 0C0AB138 jsr @Rn */
L_0C0AB13C: BLKS(0x0C0AB13Cu);
	IF(0x0C0AB13Cu); MACL = r10 * r0;  /* 0C0AB13C mul.l Rm,Rn */
	r8 = 0xC0AA710u; UPD(0x0C0AB140u, 3);  /* 0C0AB13E mov.l @(disp,pc),Rn */
	IF(0x0C0AB140u); r3 = MACL;  /* 0C0AB140 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0AB142 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AB144 exts.w Rm,Rn */
	r9 += r0;  /* 0C0AB146 add Rm,Rn */
	r9 += 0x1u;  /* 0C0AB148 add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0AB14A exts.w Rm,Rn */
	UPD(0x0C0AB14Cu, 6);
L_0C0AB14C: BLKS(0x0C0AB14Cu);
	IF(0x0C0AB14Cu); { u32 t_ = r8; PR = 0x0C0AB150u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA710, 0x0C0AA710u, 0x0C0AB150u); }  /* 0C0AB14C jsr @Rn */
L_0C0AB150: BLKS(0x0C0AB150u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0AB150 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AB152 tst Rm,Rn */
	{ u32 c_ = !T; r13 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB180u, 5); goto L_0C0AB180; } goto L_0C0AB158; }  /* 0C0AB154 bf/s */
L_0C0AB158: BLKS(0x0C0AB158u);
	IF(0x0C0AB158u); T = r13 >> 31; r13 = (r13 << 1) | T;  /* 0C0AB158 rotl Rn */
	IF(0x0C0AB15Au); r12 = T;  /* 0C0AB15A movt Rn */
	r11 += r12;  /* 0C0AB15C add Rm,Rn */
	IF(0x0C0AB15Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0AB15E shar Rn */
	T = (r11 & r11) == 0;  /* 0C0AB160 tst Rm,Rn */
	if (!T) { UPD(0x0C0AB14Cu, 9); goto L_0C0AB14C; }  /* 0C0AB162 bf */
L_0C0AB164: BLKS(0x0C0AB164u);
	r14 += 0x18u;  /* 0C0AB164 add #imm,Rn */
	UPD(0x0C0AB166u, 1);
L_0C0AB166: BLKS(0x0C0AB166u);
	r15 = r14;  /* 0C0AB166 mov Rm,Rn */
	IF(0x0C0AB168u); PR = R32(r15); r15 += 4; UPD(0x0C0AB16Au, 2);  /* 0C0AB168 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB16Cu, 1);  /* 0C0AB16A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AB16Eu, 1);  /* 0C0AB16C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB170u, 1);  /* 0C0AB16E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB172u, 1);  /* 0C0AB170 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB174u, 1);  /* 0C0AB172 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB176u, 1);  /* 0C0AB174 mov.l @Rm+,Rn */
	IF(0x0C0AB176u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB176 rts */
L_0C0AB180: BLKS(0x0C0AB180u);
	r12 = 0x0u;  /* 0C0AB180 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0AB182 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AB164u, 5); goto L_0C0AB164; }  /* 0C0AB184 bt */
L_0C0AB186: BLKS(0x0C0AB186u);
	r13 = 0xC0AFE40u; UPD(0x0C0AB188u, 1);  /* 0C0AB186 mov.l @(disp,pc),Rn */
L_0C0AB188: BLKS(0x0C0AB188u);
	r3 = R32(r14 + 0x14u); UPD(0x0C0AB18Au, 1);  /* 0C0AB188 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0AB18A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C0AB18Eu, 2);  /* 0C0AB18C mov.w @Rm+,Rn */
	r5 = 0x0u;  /* 0C0AB18E mov #imm,Rn */
	IF(0x0C0AB190u); MACL = r10 * r8;  /* 0C0AB190 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AB194u, 4);  /* 0C0AB192 mov.l @(disp,pc),Rn */
	r6 = 0x17u;  /* 0C0AB194 mov #imm,Rn */
	IF(0x0C0AB196u); r8 = MACL;  /* 0C0AB196 sts macl,Rn */
	r7 = 0xC0000001u; UPD(0x0C0AB19Au, 3);  /* 0C0AB198 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0AB19A add Rm,Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C0AB19Eu, 2);  /* 0C0AB19C mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C0AB1A0u, 1);  /* 0C0AB19E mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AB1A2u, 1);  /* 0C0AB1A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB1A2u); { u32 t_ = r13; PR = 0x0C0AB1A6u; W32(r14 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB1A6u); }  /* 0C0AB1A2 jsr @Rn */
L_0C0AB1A6: BLKS(0x0C0AB1A6u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0AB1A8u, 1);  /* 0C0AB1A6 mov.l @(disp,Rm),Rn */
	r0 &= 0xFu;  /* 0C0AB1A8 and #imm,r0 */
	r9 = R32(r14); UPD(0x0C0AB1ACu, 2);  /* 0C0AB1AA mov.l @Rm,Rn */
	r4 = r10;  /* 0C0AB1AC mov Rm,Rn */
	W32(r8 + 0x14u, r1); UPD(0x0C0AB1B0u, 2);  /* 0C0AB1AE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r9); UPD(0x0C0AB1B2u, 1);  /* 0C0AB1B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB1B2u); { u32 t_ = r13; PR = 0x0C0AB1B6u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB1B6u); }  /* 0C0AB1B2 jsr @Rn */
L_0C0AB1B6: BLKS(0x0C0AB1B6u);
	r4 = 0x1FFu; UPD(0x0C0AB1B8u, 1);  /* 0C0AB1B6 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFF7u;  /* 0C0AB1B8 mov #imm,Rn */
	r4 &= r0;  /* 0C0AB1BA and Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0AB1BEu, 3);  /* 0C0AB1BC mov.l @(disp,Rm),Rn */
	IF(0x0C0AB1BEu); MACL = r4 * r0;  /* 0C0AB1BE mul.l Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0AB1C2u, 3);  /* 0C0AB1C0 mov.l @(disp,Rm),Rn */
	r7 = r0;  /* 0C0AB1C2 mov Rm,Rn */
	IF(0x0C0AB1C4u); r6 = MACL;  /* 0C0AB1C4 sts macl,Rn */
	IF(0x0C0AB1C6u); ARG0(0x463Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C0AB1C6 shad Rm,Rn */
	IF(0x0C0AB1C8u); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C0AB1C8 shar Rn */
	r6 += r2;  /* 0C0AB1CA add Rm,Rn */
	r6 -= r7;  /* 0C0AB1CC sub Rm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0AB1CE exts.w Rm,Rn */
	IF(0x0C0AB1D0u); { u32 t_ = r13; PR = 0x0C0AB1D4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 9); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB1D4u); }  /* 0C0AB1D0 jsr @Rn */
L_0C0AB1D4: BLKS(0x0C0AB1D4u);
	r5 = 0x3FFu; UPD(0x0C0AB1D6u, 1);  /* 0C0AB1D4 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AB1D6 mov Rm,Rn */
	r10 &= r5;  /* 0C0AB1D8 and Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AB1DCu, 3);  /* 0C0AB1DA mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AB1DC add #imm,Rn */
	r10 += r5;  /* 0C0AB1DE add Rm,Rn */
	r4 = r9;  /* 0C0AB1E0 mov Rm,Rn */
	IF(0x0C0AB1E2u); { u32 t_ = r0; PR = 0x0C0AB1E6u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AB1E6u); }  /* 0C0AB1E2 jsr @Rn */
L_0C0AB1E6: BLKS(0x0C0AB1E6u);
	r4 = r9;  /* 0C0AB1E6 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AB1EAu, 2);  /* 0C0AB1E8 mov.l @(disp,pc),Rn */
	IF(0x0C0AB1EAu); r0 <<= 8;  /* 0C0AB1EA shll8 Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0AB1EEu, 2);  /* 0C0AB1EC mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB1EEu); { u32 t_ = r9; PR = 0x0C0AB1F2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AB1F2u); }  /* 0C0AB1EE jsr @Rn */
L_0C0AB1F2: BLKS(0x0C0AB1F2u);
	IF(0x0C0AB1F2u); r0 <<= 8;  /* 0C0AB1F2 shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AB1F6u, 2);  /* 0C0AB1F4 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0AB1F6 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0AB1F8 add #imm,Rn */
	W8(r8, r1); UPD(0x0C0AB1FCu, 3);  /* 0C0AB1FA mov.b Rm,@Rn */
	r0 = 0xBu;  /* 0C0AB1FC mov #imm,Rn */
	IF(0x0C0AB1FEu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AB200u, 2);  /* 0C0AB1FE mov.b @(r0,Rm),Rn */
	r8 += 0x3u;  /* 0C0AB200 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0AB204u, 2);  /* 0C0AB202 mov.b Rm,@Rn */
	r0 = r12;  /* 0C0AB204 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C0AB208u, 2);  /* 0C0AB206 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AB208 add #imm,Rn */
	r10 = 0x0u;  /* 0C0AB20A mov #imm,Rn */
	r0 += 0x1u;  /* 0C0AB20C add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AB20E exts.w Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0AB212u, 5);  /* 0C0AB210 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0AB212 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB188u, 4); goto L_0C0AB188; } UPD(0x0C0AB218u, 1); goto L_0C0AB218; }  /* 0C0AB214 bf/s */
L_0C0AB218: BLKS(0x0C0AB218u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0AB166u, 3); goto L_0C0AB166; }  /* 0C0AB218 bra */
}

/* FUN_0c0ab240 */
void f_0C0AB240(sh3_t *c)
{
	LOCALS;
L_0C0AB240: BLKS(0x0C0AB240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB242u, 1);  /* 0C0AB240 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB244u, 1);  /* 0C0AB242 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB246u, 1);  /* 0C0AB244 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB248u, 1);  /* 0C0AB246 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0AB248 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB24Cu, 2);  /* 0C0AB24A mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AB24C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB250u, 2);  /* 0C0AB24E mov.l Rm,@-Rn */
	r12 = r7;  /* 0C0AB250 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB254u, 2);  /* 0C0AB252 mov.l Rm,@-Rn */
	IF(0x0C0AB254u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB256u, 1);  /* 0C0AB254 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AB256 add #imm,Rn */
	r14 = r15;  /* 0C0AB258 mov Rm,Rn */
	r3 = R32(r14 + 0x2Cu); UPD(0x0C0AB25Cu, 3);  /* 0C0AB25A mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x30u); UPD(0x0C0AB25Eu, 1);  /* 0C0AB25C mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)r3;  /* 0C0AB25E exts.b Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0AB262u, 2);  /* 0C0AB260 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s8)r0;  /* 0C0AB262 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AB266u, 2);  /* 0C0AB264 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AB266 mov Rm,Rn */
	IF(0x0C0AB268u); r0 <<= 2;  /* 0C0AB268 shll2 Rn */
	IF(0x0C0AB26Au); r3 = R32(r0 + r2); UPD(0x0C0AB26Cu, 3);  /* 0C0AB26A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AB26Eu, 1);  /* 0C0AB26C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AB26E add Rm,Rn */
	IF(0x0C0AB270u); T = (s32)r2 >= 0;  /* 0C0AB270 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AB27Au, 5); goto L_0C0AB27A; } UPD(0x0C0AB276u, 1); goto L_0C0AB276; }  /* 0C0AB272 bt/s */
L_0C0AB276: BLKS(0x0C0AB276u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB380u, 3); goto L_0C0AB380; }  /* 0C0AB276 bra */
L_0C0AB27A: BLKS(0x0C0AB27Au);
	r4 = 0xA00000u; UPD(0x0C0AB27Cu, 1);  /* 0C0AB27A mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0AB27C add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0AB27E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB29Cu, 5); goto L_0C0AB29C; } goto L_0C0AB284; }  /* 0C0AB280 bt/s */
L_0C0AB284: BLKS(0x0C0AB284u);
	r7 = 0xC3929E0u; UPD(0x0C0AB286u, 2);  /* 0C0AB284 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AB286 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AB28Au, 2);  /* 0C0AB288 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0AB28Cu, 1);  /* 0C0AB28A mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0AB28C sub Rm,Rn */
	r2 += r5;  /* 0C0AB28E add Rm,Rn */
	IF(0x0C0AB290u); T = (s32)r2 >= 0;  /* 0C0AB290 cmp/pz Rn */
	if (!T) { UPD(0x0C0AB370u, 6); goto L_0C0AB370; }  /* 0C0AB292 bf */
L_0C0AB294: BLKS(0x0C0AB294u);
	r8 = 0x780000u; UPD(0x0C0AB296u, 1);  /* 0C0AB294 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0AB296 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AB298 cmp/ge Rm,Rn */
	IF(0x0C0AB29Au); r1 = T;  /* 0C0AB29A movt Rn */
	UPD(0x0C0AB29Cu, 3);
L_0C0AB29C: BLKS(0x0C0AB29Cu);
	r9 = (u32)(s32)(s16)r1;  /* 0C0AB29C exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0AB29E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB2C0u, 5); goto L_0C0AB2C0; } UPD(0x0C0AB2A4u, 1); goto L_0C0AB2A4; }  /* 0C0AB2A0 bt/s */
L_0C0AB2A4: BLKS(0x0C0AB2A4u);
	r14 += 0xCu;  /* 0C0AB2A4 add #imm,Rn */
	r15 = r14;  /* 0C0AB2A6 mov Rm,Rn */
	IF(0x0C0AB2A8u); PR = R32(r15); r15 += 4; UPD(0x0C0AB2AAu, 3);  /* 0C0AB2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB2ACu, 1);  /* 0C0AB2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AB2AEu, 1);  /* 0C0AB2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB2B0u, 1);  /* 0C0AB2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB2B2u, 1);  /* 0C0AB2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB2B4u, 1);  /* 0C0AB2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB2B6u, 1);  /* 0C0AB2B4 mov.l @Rm+,Rn */
	IF(0x0C0AB2B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB2B6 rts */
L_0C0AB2C0: BLKS(0x0C0AB2C0u);
	r0 = 0xC0AFE40u; UPD(0x0C0AB2C2u, 1);  /* 0C0AB2C0 mov.l @(disp,pc),Rn */
	r8 = 0xC1EEBF4u; UPD(0x0C0AB2C4u, 1);  /* 0C0AB2C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AB2C4u); { u32 t_ = r0; PR = 0x0C0AB2C8u; IF(0x0C0AB2C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB2C8u); }  /* 0C0AB2C4 jsr @Rn */
L_0C0AB2C8: BLKS(0x0C0AB2C8u);
	r3 = r10;  /* 0C0AB2C8 mov Rm,Rn */
	r3 += r3;  /* 0C0AB2CA add Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0AB2CEu, 3);  /* 0C0AB2CC mov.l Rm,@(disp,Rn) */
	r0 &= 0x1u;  /* 0C0AB2CE and #imm,r0 */
	r8 += r3;  /* 0C0AB2D0 add Rm,Rn */
	IF(0x0C0AB2D2u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AB2D4u, 3);  /* 0C0AB2D2 mov.b @(r0,Rm),Rn */
	r0 = 0x3Fu;  /* 0C0AB2D4 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C0AB2D6 extu.b Rm,Rn */
	T = r4 > r0;  /* 0C0AB2D8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AB360u, 6); goto L_0C0AB360; }  /* 0C0AB2DA bt */
L_0C0AB2DC: BLKS(0x0C0AB2DCu);
	r8 = 0xC0AA550u; UPD(0x0C0AB2DEu, 1);  /* 0C0AB2DC mov.l @(disp,pc),Rn */
	IF(0x0C0AB2DEu); { u32 t_ = r8; PR = 0x0C0AB2E2u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AB2E2u); }  /* 0C0AB2DE jsr @Rn */
L_0C0AB2E2: BLKS(0x0C0AB2E2u);
	T = (r0 & r0) == 0;  /* 0C0AB2E2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB2A4u, 4); goto L_0C0AB2A4; } goto L_0C0AB2E8; }  /* 0C0AB2E4 bt/s */
L_0C0AB2E8: BLKS(0x0C0AB2E8u);
	r2 = 0xC2755BCu; UPD(0x0C0AB2EAu, 2);  /* 0C0AB2E8 mov.l @(disp,pc),Rn */
	r0 = 0x38u;  /* 0C0AB2EA mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AB2EEu, 2);  /* 0C0AB2EC mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB2EE add #imm,Rn */
	IF(0x0C0AB2F0u); MACL = r4 * r0;  /* 0C0AB2F0 mul.l Rm,Rn */
	r1 = 0xC275E1Cu; UPD(0x0C0AB2F4u, 4);  /* 0C0AB2F2 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0AB2F6u, 1);  /* 0C0AB2F4 mov.l @Rm,Rn */
	IF(0x0C0AB2F6u); r6 = MACL;  /* 0C0AB2F6 sts macl,Rn */
	r8 = 0xC0000000u; UPD(0x0C0AB2FAu, 2);  /* 0C0AB2F8 mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0AB2FA and #imm,r0 */
	r6 += r1;  /* 0C0AB2FC add Rm,Rn */
	r0 |= r8;  /* 0C0AB2FE or Rm,Rn */
	W32(r6, r0); UPD(0x0C0AB302u, 4);  /* 0C0AB300 mov.l Rm,@Rn */
	W32(r6 + 0x4u, r10); UPD(0x0C0AB304u, 1);  /* 0C0AB302 mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0AB304 mov #imm,Rn */
	W32(r6 + 0xCu, r9); UPD(0x0C0AB308u, 2);  /* 0C0AB306 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x8u, r9); UPD(0x0C0AB30Au, 1);  /* 0C0AB308 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x1Cu, r9); UPD(0x0C0AB30Cu, 1);  /* 0C0AB30A mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x18u, r9); UPD(0x0C0AB30Eu, 1);  /* 0C0AB30C mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x10u, r11); UPD(0x0C0AB310u, 1);  /* 0C0AB30E mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x14u, r12); UPD(0x0C0AB312u, 1);  /* 0C0AB310 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0AB312 add #imm,Rn */
	W8(r6, r9); UPD(0x0C0AB316u, 2);  /* 0C0AB314 mov.b Rm,@Rn */
	IF(0x0C0AB316u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AB318u, 1);  /* 0C0AB316 mov.b @(r0,Rm),Rn */
	r6 += 0x4u;  /* 0C0AB318 add #imm,Rn */
	W8(r6, r3); UPD(0x0C0AB31Cu, 2);  /* 0C0AB31A mov.b Rm,@Rn */
	{ u32 v_ = r13; r6 -= 1; W8(r6, v_); } UPD(0x0C0AB31Eu, 1);  /* 0C0AB31C mov.b Rm,@-Rn */
	r7 = 0x808080u; UPD(0x0C0AB320u, 1);  /* 0C0AB31E mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFCDu;  /* 0C0AB320 add #imm,Rn */
	W32(r6 + 0x28u, r9); UPD(0x0C0AB324u, 2);  /* 0C0AB322 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x2Cu, r7); UPD(0x0C0AB326u, 1);  /* 0C0AB324 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x8u); UPD(0x0C0AB328u, 1);  /* 0C0AB326 mov.l @(disp,Rm),Rn */
	r6 = r12;  /* 0C0AB328 mov Rm,Rn */
	r10 = 0xC1EEB80u; UPD(0x0C0AB32Cu, 2);  /* 0C0AB32A mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C0AB32Eu, 1);  /* 0C0AB32C mov.l Rm,@Rn */
	r10 += r5;  /* 0C0AB32E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AB332u, 2);  /* 0C0AB330 mov.w @Rm,Rn */
	r5 = r11;  /* 0C0AB332 mov Rm,Rn */
	r0 = 0xC0AABB0u; UPD(0x0C0AB336u, 2);  /* 0C0AB334 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB338u, 1);  /* 0C0AB336 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0AB33Au, 1);  /* 0C0AB338 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB33Au); { u32 t_ = r0; PR = 0x0C0AB33Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0AB33Eu); }  /* 0C0AB33A jsr @Rn */
L_0C0AB33E: BLKS(0x0C0AB33Eu);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AB340u, 1);  /* 0C0AB33E mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0AB340 add #imm,Rn */
	r9 = 0xC0AAFE0u; UPD(0x0C0AB344u, 2);  /* 0C0AB342 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0AB344 add Rm,Rn */
	r7 = (u32)(s32)(s16)r1;  /* 0C0AB346 exts.w Rm,Rn */
	r4 = r11;  /* 0C0AB348 mov Rm,Rn */
	r5 = r12;  /* 0C0AB34A mov Rm,Rn */
	IF(0x0C0AB34Cu); { u32 t_ = r9; PR = 0x0C0AB350u; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0AB350u); }  /* 0C0AB34C jsr @Rn */
L_0C0AB350: BLKS(0x0C0AB350u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AB2A4u, 3); goto L_0C0AB2A4; }  /* 0C0AB350 bra */
L_0C0AB360: BLKS(0x0C0AB360u);
	r8 = 0xC0AFC10u; UPD(0x0C0AB362u, 1);  /* 0C0AB360 mov.l @(disp,pc),Rn */
	IF(0x0C0AB362u); { u32 t_ = r8; PR = 0x0C0AB366u; IF(0x0C0AB364u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AB366u); }  /* 0C0AB362 jsr @Rn */
L_0C0AB366: BLKS(0x0C0AB366u);
	{ IF(0x0C0AB368u); ; /* slot nop */ UPD(0x0C0AB2DCu, 3); goto L_0C0AB2DC; }  /* 0C0AB366 bra */
L_0C0AB370: BLKS(0x0C0AB370u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB294u, 3); goto L_0C0AB294; }  /* 0C0AB370 bra */
L_0C0AB380: BLKS(0x0C0AB380u);
	{ IF(0x0C0AB382u); ; /* slot nop */ UPD(0x0C0AB27Au, 3); goto L_0C0AB27A; }  /* 0C0AB380 bra */
}

void f_0C0AB3D0(sh3_t *c)
{
	LOCALS;
L_0C0AB3D0: BLKS(0x0C0AB3D0u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0AB3D0 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AB3D2 mov #imm,Rn */
	IF(0x0C0AB3D4u); MACL = r4 * r3;  /* 0C0AB3D4 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AB3D8u, 5);  /* 0C0AB3D6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3DAu, 1);  /* 0C0AB3D8 mov.l Rm,@-Rn */
	IF(0x0C0AB3DAu); r2 = MACL;  /* 0C0AB3DA sts macl,Rn */
	r0 += r2;  /* 0C0AB3DC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0AB3E0u, 3);  /* 0C0AB3DE mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0AB3E0 mov #imm,Rn */
	T = r2 > r0;  /* 0C0AB3E2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB4A0u, 5); goto L_0C0AB4A0; } goto L_0C0AB3E8; }  /* 0C0AB3E4 bt/s */
L_0C0AB3E8: BLKS(0x0C0AB3E8u);
	r0 = 0xC0AB3F8u;  /* 0C0AB3E8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0AB3EA add Rm,Rn */
	IF(0x0C0AB3ECu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AB3EEu, 4);  /* 0C0AB3EC mov.w @(r0,Rm),Rn */
	IF(0x0C0AB3EEu); { u32 tv_ = (r5 + 0x0C0AB3F2u); u32 t_ = PHYS(tv_); IF(0x0C0AB3F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0AB410u: goto L_0C0AB410; case 0x0C0AB440u: goto L_0C0AB440; case 0x0C0AB4B0u: goto L_0C0AB4B0; case 0x0C0AB540u: goto L_0C0AB540; case 0x0C0AB550u: goto L_0C0AB550; case 0x0C0AB560u: goto L_0C0AB560; default: JUMPD(tv_); } }  /* 0C0AB3EE braf Rn */
L_0C0AB410: BLKS(0x0C0AB410u);
	r0 = 0x38u;  /* 0C0AB410 mov #imm,Rn */
	IF(0x0C0AB412u); MACL = r4 * r0;  /* 0C0AB412 mul.l Rm,Rn */
	r6 = 0xC275E1Cu; UPD(0x0C0AB416u, 4);  /* 0C0AB414 mov.l @(disp,pc),Rn */
	IF(0x0C0AB416u); r3 = MACL;  /* 0C0AB416 sts macl,Rn */
	r3 += r6;  /* 0C0AB418 add Rm,Rn */
	r7 = R32(r3 + 0x18u); UPD(0x0C0AB41Cu, 3);  /* 0C0AB41A mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C0AB41Eu, 1);  /* 0C0AB41C mov.w @(disp,pc),Rn */
	IF(0x0C0AB41Eu); MACL = r7 * r6;  /* 0C0AB41E mul.l Rm,Rn */
	IF(0x0C0AB420u); r2 = MACL;  /* 0C0AB420 sts macl,Rn */
	IF(0x0C0AB422u); T = (s32)r2 >= 0;  /* 0C0AB422 cmp/pz Rn */
	{ u32 c_ = T; r7 = 0xFFFFFFF8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB42Eu, 7); goto L_0C0AB42E; } goto L_0C0AB428; }  /* 0C0AB424 bt/s */
L_0C0AB428: BLKS(0x0C0AB428u);
	{ IF(0x0C0AB42Au); ; /* slot nop */ UPD(0x0C0AB530u, 4); goto L_0C0AB530; }  /* 0C0AB428 bra */
L_0C0AB42C: BLKS(0x0C0AB42Cu);
	r7 = 0xFFFFFFF8u;  /* 0C0AB42C mov #imm,Rn */
	UPD(0x0C0AB42Eu, 1);
L_0C0AB42E: BLKS(0x0C0AB42Eu);
	IF(0x0C0AB42Eu); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0AB42E shad Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C0AB432u, 2);  /* 0C0AB430 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0AB434u, 1);  /* 0C0AB432 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB434u); MACL = r2 * r6;  /* 0C0AB434 mul.l Rm,Rn */
	IF(0x0C0AB436u); r2 = MACL;  /* 0C0AB436 sts macl,Rn */
	IF(0x0C0AB438u); T = (s32)r2 >= 0;  /* 0C0AB438 cmp/pz Rn */
	if (!T) { UPD(0x0C0AB520u, 7); goto L_0C0AB520; }  /* 0C0AB43A bf */
L_0C0AB43C: BLKS(0x0C0AB43Cu);
	IF(0x0C0AB43Cu); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0AB43C shad Rm,Rn */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0AB440u, 2);  /* 0C0AB43E mov.l Rm,@(disp,Rn) */
L_0C0AB440: BLKS(0x0C0AB440u);
	r2 = 0x38u;  /* 0C0AB440 mov #imm,Rn */
	IF(0x0C0AB442u); MACL = r4 * r2;  /* 0C0AB442 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AB446u, 4);  /* 0C0AB444 mov.l @(disp,pc),Rn */
	IF(0x0C0AB446u); r6 = MACL;  /* 0C0AB446 sts macl,Rn */
	r6 += r0;  /* 0C0AB448 add Rm,Rn */
	r5 = R32(r6 + 0x10u); UPD(0x0C0AB44Cu, 3);  /* 0C0AB44A mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x18u); UPD(0x0C0AB44Eu, 1);  /* 0C0AB44C mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C0AB44E add Rm,Rn */
	r7 = R32(r6 + 0x14u); UPD(0x0C0AB452u, 2);  /* 0C0AB450 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x1Cu); UPD(0x0C0AB454u, 1);  /* 0C0AB452 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x4u); UPD(0x0C0AB456u, 1);  /* 0C0AB454 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0AB456 add Rm,Rn */
	W32(r6 + 0x10u, r5); UPD(0x0C0AB45Au, 2);  /* 0C0AB458 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB45Au); r0 <<= 2;  /* 0C0AB45A shll2 Rn */
	W32(r6 + 0x14u, r7); UPD(0x0C0AB45Eu, 2);  /* 0C0AB45C mov.l Rm,@(disp,Rn) */
	r3 = 0xC1EEBA4u; UPD(0x0C0AB460u, 1);  /* 0C0AB45E mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AB462u, 1);  /* 0C0AB460 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0AB462 add Rm,Rn */
	IF(0x0C0AB464u); T = (s32)r2 >= 0;  /* 0C0AB464 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0AB468u); r6 = R32(r0 + r3); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0AB510u, 5); goto L_0C0AB510; } UPD(0x0C0AB46Au, 1); goto L_0C0AB46A; }  /* 0C0AB466 bf/s */
L_0C0AB46A: BLKS(0x0C0AB46Au);
	r5 = 0xA00000u; UPD(0x0C0AB46Cu, 1);  /* 0C0AB46A mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0AB46C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AB46E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB48Cu, 5); goto L_0C0AB48C; } goto L_0C0AB474; }  /* 0C0AB470 bt/s */
L_0C0AB474: BLKS(0x0C0AB474u);
	r2 = 0xC3929E0u; UPD(0x0C0AB476u, 2);  /* 0C0AB474 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0AB478u, 1);  /* 0C0AB476 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0AB47Au, 1);  /* 0C0AB478 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0AB47A mov Rm,Rn */
	r2 -= r0;  /* 0C0AB47C sub Rm,Rn */
	r2 += r3;  /* 0C0AB47E add Rm,Rn */
	IF(0x0C0AB480u); T = (s32)r2 >= 0;  /* 0C0AB480 cmp/pz Rn */
	if (!T) { UPD(0x0C0AB500u, 7); goto L_0C0AB500; }  /* 0C0AB482 bf */
L_0C0AB484: BLKS(0x0C0AB484u);
	r7 = 0x780000u; UPD(0x0C0AB486u, 1);  /* 0C0AB484 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0AB486 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0AB488 cmp/ge Rm,Rn */
	IF(0x0C0AB48Au); r1 = T;  /* 0C0AB48A movt Rn */
	UPD(0x0C0AB48Cu, 3);
L_0C0AB48C: BLKS(0x0C0AB48Cu);
	r6 = (u32)(s32)(s16)r1;  /* 0C0AB48C exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AB48E tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB4B0u, 5); goto L_0C0AB4B0; } goto L_0C0AB494; }  /* 0C0AB490 bt/s */
L_0C0AB494: BLKS(0x0C0AB494u);
	IF(0x0C0AB494u); MACL = r4 * r3;  /* 0C0AB494 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C0AB496 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AB49Au, 5);  /* 0C0AB498 mov.l @(disp,pc),Rn */
	IF(0x0C0AB49Au); r0 = MACL;  /* 0C0AB49A sts macl,Rn */
	IF(0x0C0AB49Cu); W32(r0 + r4, r5); UPD(0x0C0AB49Eu, 2);  /* 0C0AB49C mov.l Rm,@(r0,Rn) */
	IF(0x0C0AB49Eu); ;  /* 0C0AB49E nop */
	UPD(0x0C0AB4A0u, 1);
L_0C0AB4A0: BLKS(0x0C0AB4A0u);
	r15 = r14;  /* 0C0AB4A0 mov Rm,Rn */
	IF(0x0C0AB4A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AB4A2 rts */
L_0C0AB4B0: BLKS(0x0C0AB4B0u);
	r2 = 0x38u;  /* 0C0AB4B0 mov #imm,Rn */
	IF(0x0C0AB4B2u); MACL = r4 * r2;  /* 0C0AB4B2 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AB4B6u, 4);  /* 0C0AB4B4 mov.l @(disp,pc),Rn */
	IF(0x0C0AB4B6u); r3 = MACL;  /* 0C0AB4B6 sts macl,Rn */
	r3 += r0;  /* 0C0AB4B8 add Rm,Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C0AB4BCu, 3);  /* 0C0AB4BA mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0AB4BC tst Rm,Rn */
	if (T) { UPD(0x0C0AB4C6u, 4); goto L_0C0AB4C6; }  /* 0C0AB4BE bt */
L_0C0AB4C0: BLKS(0x0C0AB4C0u);
	r7 = 0xFFFFF1F2u; UPD(0x0C0AB4C2u, 1);  /* 0C0AB4C0 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0AB4C2 add Rm,Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0AB4C6u, 2);  /* 0C0AB4C4 mov.l Rm,@(disp,Rn) */
L_0C0AB4C6: BLKS(0x0C0AB4C6u);
	r2 = r3;  /* 0C0AB4C6 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0AB4C8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AB4CCu, 3);  /* 0C0AB4CA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0AB4CC add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AB4CE extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0AB4D0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AB4A0u, 6); goto L_0C0AB4A0; } UPD(0x0C0AB4D6u, 1); goto L_0C0AB4D6; }  /* 0C0AB4D2 bf/s */
L_0C0AB4D6: BLKS(0x0C0AB4D6u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AB4D8u, 1);  /* 0C0AB4D6 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C0AB4D8 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0AB4DA add #imm,Rn */
	W8(r2, r6); UPD(0x0C0AB4DEu, 3);  /* 0C0AB4DC mov.b Rm,@Rn */
	T = r0 == 0xAu;  /* 0C0AB4DE cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB4F0u, 4); goto L_0C0AB4F0; } UPD(0x0C0AB4E4u, 1); goto L_0C0AB4E4; }  /* 0C0AB4E0 bt/s */
L_0C0AB4E4: BLKS(0x0C0AB4E4u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AB4E6u, 1);  /* 0C0AB4E4 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0AB4E6 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0AB4A0u, 4); goto L_0C0AB4A0; }  /* 0C0AB4E8 bf */
L_0C0AB4EA: BLKS(0x0C0AB4EAu);
	r5 = 0x0u;  /* 0C0AB4EA mov #imm,Rn */
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB4A0u, 4); goto L_0C0AB4A0; }  /* 0C0AB4EC bra */
L_0C0AB4F0: BLKS(0x0C0AB4F0u);
	r4 = 0x204FFFFu; UPD(0x0C0AB4F2u, 1);  /* 0C0AB4F0 mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AB4E4u, 3); goto L_0C0AB4E4; }  /* 0C0AB4F2 bra */
L_0C0AB500: BLKS(0x0C0AB500u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB484u, 3); goto L_0C0AB484; }  /* 0C0AB500 bra */
L_0C0AB510: BLKS(0x0C0AB510u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB46Au, 3); goto L_0C0AB46A; }  /* 0C0AB510 bra */
L_0C0AB520: BLKS(0x0C0AB520u);
	r6 = 0xFFu; UPD(0x0C0AB522u, 1);  /* 0C0AB520 mov.w @(disp,pc),Rn */
	{ r2 += r6; /* slot add Rm,Rn */ UPD(0x0C0AB43Cu, 3); goto L_0C0AB43C; }  /* 0C0AB522 bra */
L_0C0AB530: BLKS(0x0C0AB530u);
	r5 = 0xFFu; UPD(0x0C0AB532u, 1);  /* 0C0AB530 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AB42Cu, 3); goto L_0C0AB42C; }  /* 0C0AB532 bra */
L_0C0AB540: BLKS(0x0C0AB540u);
	r1 = 0xC0ABF40u; UPD(0x0C0AB542u, 1);  /* 0C0AB540 mov.l @(disp,pc),Rn */
L_0C0AB542: BLKS(0x0C0AB542u);
	r15 = r14;  /* 0C0AB542 mov Rm,Rn */
	IF(0x0C0AB544u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0ABF40u: goto L_0C0ABF40; case 0x0C0AC1D0u: goto L_0C0AC1D0; default: JUMPD(tv_); } }  /* 0C0AB544 jmp @Rn */
L_0C0AB550: BLKS(0x0C0AB550u);
	r1 = 0xC0AC1D0u; UPD(0x0C0AB552u, 1);  /* 0C0AB550 mov.l @(disp,pc),Rn */
	{ IF(0x0C0AB554u); ; /* slot nop */ UPD(0x0C0AB542u, 3); goto L_0C0AB542; }  /* 0C0AB552 bra */
L_0C0AB560: BLKS(0x0C0AB560u);
	r1 = 0xC0ACCF0u; UPD(0x0C0AB562u, 1);  /* 0C0AB560 mov.l @(disp,pc),Rn */
	{ IF(0x0C0AB564u); ; /* slot nop */ UPD(0x0C0AB542u, 3); goto L_0C0AB542; }  /* 0C0AB562 bra */
L_0C0ABF40: BLKS(0x0C0ABF40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF42u, 1);  /* 0C0ABF40 mov.l Rm,@-Rn */
	r7 = 0x38u;  /* 0C0ABF42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF46u, 2);  /* 0C0ABF44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF48u, 1);  /* 0C0ABF46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF4Au, 1);  /* 0C0ABF48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF4Cu, 1);  /* 0C0ABF4A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0ABF4C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF50u, 2);  /* 0C0ABF4E mov.l Rm,@-Rn */
	IF(0x0C0ABF50u); MACL = r11 * r7;  /* 0C0ABF50 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF54u, 3);  /* 0C0ABF52 mov.l Rm,@-Rn */
	r6 = 0xC275E1Cu; UPD(0x0C0ABF56u, 1);  /* 0C0ABF54 mov.l @(disp,pc),Rn */
	IF(0x0C0ABF56u); r12 = MACL;  /* 0C0ABF56 sts macl,Rn */
	IF(0x0C0ABF58u); r15 -= 4; W32(r15, PR); UPD(0x0C0ABF5Au, 2);  /* 0C0ABF58 sts.l pr,@-Rn */
	r12 += r6;  /* 0C0ABF5A add Rm,Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0ABF5Eu, 2);  /* 0C0ABF5C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ABF5E add #imm,Rn */
	r5 = 0xC1EEC1Cu; UPD(0x0C0ABF62u, 2);  /* 0C0ABF60 mov.l @(disp,pc),Rn */
	IF(0x0C0ABF62u); r0 <<= 2;  /* 0C0ABF62 shll2 Rn */
	IF(0x0C0ABF64u); r9 = R32(r0 + r5); UPD(0x0C0ABF66u, 2);  /* 0C0ABF64 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0ABF66 mov Rm,Rn */
	r0 = R32(r12 + 0x20u); UPD(0x0C0ABF6Au, 2);  /* 0C0ABF68 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0ABF6A mov Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C0ABF6Eu, 2);  /* 0C0ABF6C mov.l @(disp,Rm),Rn */
	r13 = 0xC058060u; UPD(0x0C0ABF70u, 1);  /* 0C0ABF6E mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C0ABF70 add Rm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0ABF72 exts.w Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0ABF76u, 3);  /* 0C0ABF74 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0ABF76 mov Rm,Rn */
	IF(0x0C0ABF78u); { u32 t_ = r13; PR = 0x0C0ABF7Cu; W32(r12 + 0x20u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ABF7Cu); }  /* 0C0ABF78 jsr @Rn */
L_0C0ABF7C: BLKS(0x0C0ABF7Cu);
	IF(0x0C0ABF7Cu); r0 <<= 2;  /* 0C0ABF7C shll2 Rn */
	r4 = r10;  /* 0C0ABF7E mov Rm,Rn */
	W32(r12 + 0x18u, r0); UPD(0x0C0ABF82u, 3);  /* 0C0ABF80 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABF82u); { u32 t_ = r8; PR = 0x0C0ABF86u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ABF86u); }  /* 0C0ABF82 jsr @Rn */
L_0C0ABF86: BLKS(0x0C0ABF86u);
	IF(0x0C0ABF86u); r0 <<= 2;  /* 0C0ABF86 shll2 Rn */
	r7 = R32(r12 + 0x14u); UPD(0x0C0ABF8Au, 2);  /* 0C0ABF88 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x1Cu, r0); UPD(0x0C0ABF8Cu, 1);  /* 0C0ABF8A mov.l Rm,@(disp,Rn) */
	r7 += r0;  /* 0C0ABF8C add Rm,Rn */
	r4 = R32(r12 + 0x10u); UPD(0x0C0ABF90u, 2);  /* 0C0ABF8E mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x18u); UPD(0x0C0ABF92u, 1);  /* 0C0ABF90 mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0ABF94u, 1);  /* 0C0ABF92 mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C0ABF94 add Rm,Rn */
	W32(r12 + 0x10u, r4); UPD(0x0C0ABF98u, 2);  /* 0C0ABF96 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABF98u); r0 <<= 2;  /* 0C0ABF98 shll2 Rn */
	W32(r12 + 0x14u, r7); UPD(0x0C0ABF9Cu, 2);  /* 0C0ABF9A mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0ABF9Eu, 1);  /* 0C0ABF9C mov.l @(disp,pc),Rn */
	r3 = 0xFF600000u; UPD(0x0C0ABFA0u, 1);  /* 0C0ABF9E mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0ABFA0 add Rm,Rn */
	IF(0x0C0ABFA2u); T = (s32)r3 >= 0;  /* 0C0ABFA2 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0ABFA6u); r6 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0ABFACu, 5); goto L_0C0ABFAC; } UPD(0x0C0ABFA8u, 1); goto L_0C0ABFA8; }  /* 0C0ABFA4 bt/s */
L_0C0ABFA8: BLKS(0x0C0ABFA8u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AC180u, 3); goto L_0C0AC180; }  /* 0C0ABFA8 bra */
L_0C0ABFAC: BLKS(0x0C0ABFACu);
	r2 = 0xA00000u; UPD(0x0C0ABFAEu, 1);  /* 0C0ABFAC mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0ABFAE add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0ABFB0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABFD0u, 5); goto L_0C0ABFD0; } goto L_0C0ABFB6; }  /* 0C0ABFB2 bt/s */
L_0C0ABFB6: BLKS(0x0C0ABFB6u);
	r8 = 0xC3929E0u; UPD(0x0C0ABFB8u, 2);  /* 0C0ABFB6 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0ABFB8 mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C0ABFBCu, 2);  /* 0C0ABFBA mov.l @Rm,Rn */
	r12 = 0xFF880000u; UPD(0x0C0ABFBEu, 1);  /* 0C0ABFBC mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C0ABFBE sub Rm,Rn */
	r2 += r12;  /* 0C0ABFC0 add Rm,Rn */
	IF(0x0C0ABFC2u); T = (s32)r2 >= 0;  /* 0C0ABFC2 cmp/pz Rn */
	if (T) { UPD(0x0C0ABFC8u, 6); goto L_0C0ABFC8; }  /* 0C0ABFC4 bt */
L_0C0ABFC6: BLKS(0x0C0ABFC6u);
	r2 = 0u - r2;  /* 0C0ABFC6 neg Rm,Rn */
	UPD(0x0C0ABFC8u, 1);
L_0C0ABFC8: BLKS(0x0C0ABFC8u);
	r9 = 0x780000u; UPD(0x0C0ABFCAu, 1);  /* 0C0ABFC8 mov.l @(disp,pc),Rn */
	r6 += r9;  /* 0C0ABFCA add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0ABFCC cmp/ge Rm,Rn */
	IF(0x0C0ABFCEu); r1 = T;  /* 0C0ABFCE movt Rn */
	UPD(0x0C0ABFD0u, 3);
L_0C0ABFD0: BLKS(0x0C0ABFD0u);
	r9 = (u32)(s32)(s16)r1;  /* 0C0ABFD0 exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0ABFD2 tst Rm,Rn */
	{ u32 c_ = T; r13 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC000u, 5); goto L_0C0AC000; } goto L_0C0ABFD8; }  /* 0C0ABFD4 bt/s */
L_0C0ABFD8: BLKS(0x0C0ABFD8u);
	IF(0x0C0ABFD8u); MACL = r11 * r13;  /* 0C0ABFD8 mul.l Rm,Rn */
	r10 = 0x0u;  /* 0C0ABFDA mov #imm,Rn */
	r11 = 0xC275E1Cu; UPD(0x0C0ABFDEu, 5);  /* 0C0ABFDC mov.l @(disp,pc),Rn */
	IF(0x0C0ABFDEu); r0 = MACL;  /* 0C0ABFDE sts macl,Rn */
	IF(0x0C0ABFE0u); W32(r0 + r11, r10); UPD(0x0C0ABFE2u, 2);  /* 0C0ABFE0 mov.l Rm,@(r0,Rn) */
L_0C0ABFE2: BLKS(0x0C0ABFE2u);
	r14 += 0x8u;  /* 0C0ABFE2 add #imm,Rn */
	UPD(0x0C0ABFE4u, 1);
L_0C0ABFE4: BLKS(0x0C0ABFE4u);
	r15 = r14;  /* 0C0ABFE4 mov Rm,Rn */
	IF(0x0C0ABFE6u); PR = R32(r15); r15 += 4; UPD(0x0C0ABFE8u, 2);  /* 0C0ABFE6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABFEAu, 1);  /* 0C0ABFE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ABFECu, 1);  /* 0C0ABFEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABFEEu, 1);  /* 0C0ABFEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABFF0u, 1);  /* 0C0ABFEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABFF2u, 1);  /* 0C0ABFF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABFF4u, 1);  /* 0C0ABFF2 mov.l @Rm+,Rn */
	IF(0x0C0ABFF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABFF4 rts */
L_0C0AC000: BLKS(0x0C0AC000u);
	r4 = 0x38u;  /* 0C0AC000 mov #imm,Rn */
	IF(0x0C0AC002u); MACL = r11 * r4;  /* 0C0AC002 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AC006u, 4);  /* 0C0AC004 mov.l @(disp,pc),Rn */
	r6 = 0x40u;  /* 0C0AC006 mov #imm,Rn */
	r12 = 0xC0A9CC0u; UPD(0x0C0AC00Au, 2);  /* 0C0AC008 mov.l @(disp,pc),Rn */
	IF(0x0C0AC00Au); r8 = MACL;  /* 0C0AC00A sts macl,Rn */
	r8 += r0;  /* 0C0AC00C add Rm,Rn */
	r4 = R32(r8 + 0x10u); UPD(0x0C0AC010u, 3);  /* 0C0AC00E mov.l @(disp,Rm),Rn */
	IF(0x0C0AC010u); { u32 t_ = r12; PR = 0x0C0AC014u; r5 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9CC0, 0x0C0A9CC0u, 0x0C0AC014u); }  /* 0C0AC010 jsr @Rn */
L_0C0AC014: BLKS(0x0C0AC014u);
	T = (r0 & r0) == 0;  /* 0C0AC014 tst Rm,Rn */
	if (T) { UPD(0x0C0AC020u, 4); goto L_0C0AC020; }  /* 0C0AC016 bt */
L_0C0AC018: BLKS(0x0C0AC018u);
	W32(r8, r9); UPD(0x0C0AC01Au, 1);  /* 0C0AC018 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0ABFE4u, 3); goto L_0C0ABFE4; }  /* 0C0AC01A bra */
L_0C0AC020: BLKS(0x0C0AC020u);
	r9 = R32(r8 + 0x4u); UPD(0x0C0AC022u, 1);  /* 0C0AC020 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x10u); UPD(0x0C0AC024u, 1);  /* 0C0AC022 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C0AC024 mov Rm,Rn */
	r10 = R32(r8); UPD(0x0C0AC028u, 2);  /* 0C0AC026 mov.l @Rm,Rn */
	IF(0x0C0AC028u); r0 <<= 2;  /* 0C0AC028 shll2 Rn */
	r13 = R32(r8 + 0x14u); UPD(0x0C0AC02Cu, 2);  /* 0C0AC02A mov.l @(disp,Rm),Rn */
	r8 += 0x34u;  /* 0C0AC02C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AC030u, 2);  /* 0C0AC02E mov.b @Rm,Rn */
	W32(r14, r6); UPD(0x0C0AC032u, 1);  /* 0C0AC030 mov.l Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0AC032 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AC036u, 2);  /* 0C0AC034 mov.b @Rm,Rn */
	r5 = 0xC1EEBA4u; UPD(0x0C0AC038u, 1);  /* 0C0AC036 mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC03Au, 1);  /* 0C0AC038 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0AC03Cu, 1);  /* 0C0AC03A mov.l Rm,@(disp,Rn) */
	r2 += r12;  /* 0C0AC03C add Rm,Rn */
	IF(0x0C0AC03Eu); T = (s32)r2 >= 0;  /* 0C0AC03E cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0AC042u); r3 = R32(r0 + r5); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0AC048u, 5); goto L_0C0AC048; } UPD(0x0C0AC044u, 1); goto L_0C0AC044; }  /* 0C0AC040 bt/s */
L_0C0AC044: BLKS(0x0C0AC044u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC170u, 3); goto L_0C0AC170; }  /* 0C0AC044 bra */
L_0C0AC048: BLKS(0x0C0AC048u);
	r7 = 0xA00000u; UPD(0x0C0AC04Au, 1);  /* 0C0AC048 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C0AC04A add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C0AC04C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC06Cu, 5); goto L_0C0AC06C; } goto L_0C0AC052; }  /* 0C0AC04E bt/s */
L_0C0AC052: BLKS(0x0C0AC052u);
	r2 = 0xC3929E0u; UPD(0x0C0AC054u, 2);  /* 0C0AC052 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0AC056u, 1);  /* 0C0AC054 mov.l @Rm,Rn */
	r8 = 0xFF880000u; UPD(0x0C0AC058u, 1);  /* 0C0AC056 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0AC058 mov Rm,Rn */
	r2 -= r0;  /* 0C0AC05A sub Rm,Rn */
	r2 += r8;  /* 0C0AC05C add Rm,Rn */
	IF(0x0C0AC05Eu); T = (s32)r2 >= 0;  /* 0C0AC05E cmp/pz Rn */
	if (T) { UPD(0x0C0AC064u, 7); goto L_0C0AC064; }  /* 0C0AC060 bt */
L_0C0AC062: BLKS(0x0C0AC062u);
	r2 = 0u - r2;  /* 0C0AC062 neg Rm,Rn */
	UPD(0x0C0AC064u, 1);
L_0C0AC064: BLKS(0x0C0AC064u);
	r4 = 0x780000u; UPD(0x0C0AC066u, 1);  /* 0C0AC064 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0AC066 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC068 cmp/ge Rm,Rn */
	IF(0x0C0AC06Au); r1 = T;  /* 0C0AC06A movt Rn */
	UPD(0x0C0AC06Cu, 3);
L_0C0AC06C: BLKS(0x0C0AC06Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC06C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC06E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC0F0u, 5); goto L_0C0AC0F0; } UPD(0x0C0AC074u, 1); goto L_0C0AC074; }  /* 0C0AC070 bt/s */
L_0C0AC074: BLKS(0x0C0AC074u);
	r2 = (u32)(s32)(s16)r1;  /* 0C0AC074 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AC076 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC090u, 5); goto L_0C0AC090; } goto L_0C0AC07C; }  /* 0C0AC078 bf/s */
L_0C0AC07C: BLKS(0x0C0AC07Cu);
	IF(0x0C0AC07Cu); MACL = r11 * r8;  /* 0C0AC07C mul.l Rm,Rn */
	r11 = 0xC275E1Cu; UPD(0x0C0AC080u, 4);  /* 0C0AC07E mov.l @(disp,pc),Rn */
	IF(0x0C0AC080u); r0 = MACL;  /* 0C0AC080 sts macl,Rn */
	{ IF(0x0C0AC084u); W32(r0 + r11, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0ABFE2u, 4); goto L_0C0ABFE2; }  /* 0C0AC082 bra */
L_0C0AC090: BLKS(0x0C0AC090u);
	r0 = 0x38u;  /* 0C0AC090 mov #imm,Rn */
	IF(0x0C0AC092u); MACL = r11 * r0;  /* 0C0AC092 mul.l Rm,Rn */
	r7 = 0xC275E1Cu; UPD(0x0C0AC096u, 4);  /* 0C0AC094 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AC096 mov #imm,Rn */
	IF(0x0C0AC098u); r9 = MACL;  /* 0C0AC098 sts macl,Rn */
	r9 += r7;  /* 0C0AC09A add Rm,Rn */
	r9 += 0x30u;  /* 0C0AC09C add #imm,Rn */
	W8(r9, r12); UPD(0x0C0AC0A0u, 5);  /* 0C0AC09E mov.b Rm,@Rn */
	r9 += 0xFFFFFFD0u;  /* 0C0AC0A0 add #imm,Rn */
	r2 = r9;  /* 0C0AC0A2 mov Rm,Rn */
	r2 += 0x31u;  /* 0C0AC0A4 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AC0A8u, 4);  /* 0C0AC0A6 mov.b @Rm,Rn */
	r3 = 0xFFu; UPD(0x0C0AC0AAu, 1);  /* 0C0AC0A8 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0AC0AA add #imm,Rn */
	r10 = r13 & 0xFF;  /* 0C0AC0AC extu.b Rm,Rn */
	T = r10 == r3;  /* 0C0AC0AE cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AC0E0u, 6); goto L_0C0AC0E0; } UPD(0x0C0AC0B4u, 1); goto L_0C0AC0B4; }  /* 0C0AC0B0 bt/s */
L_0C0AC0B4: BLKS(0x0C0AC0B4u);
	r2 += 0x1u;  /* 0C0AC0B4 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AC0B8u, 2);  /* 0C0AC0B6 mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AC0B8 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AC0BA extu.b Rm,Rn */
	T = r4 == r3;  /* 0C0AC0BC cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABFE2u, 6); goto L_0C0ABFE2; } UPD(0x0C0AC0C2u, 1); goto L_0C0AC0C2; }  /* 0C0AC0BE bf/s */
L_0C0AC0C2: BLKS(0x0C0AC0C2u);
	r10 = 0xC0AFE40u; UPD(0x0C0AC0C4u, 1);  /* 0C0AC0C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AC0C4u); { u32 t_ = r10; PR = 0x0C0AC0C8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC0C8u); }  /* 0C0AC0C4 jsr @Rn */
L_0C0AC0C8: BLKS(0x0C0AC0C8u);
	r3 = R32(r9 + 0x20u); UPD(0x0C0AC0CAu, 1);  /* 0C0AC0C8 mov.l @(disp,Rm),Rn */
	r1 = r0 & 0xFF;  /* 0C0AC0CA extu.b Rm,Rn */
	r3 += r1;  /* 0C0AC0CC add Rm,Rn */
	r3 += 0xFFFFFF80u;  /* 0C0AC0CE add #imm,Rn */
	IF(0x0C0AC0D0u); { u32 t_ = r10; PR = 0x0C0AC0D4u; W32(r9 + 0x20u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC0D4u); }  /* 0C0AC0D0 jsr @Rn */
L_0C0AC0D4: BLKS(0x0C0AC0D4u);
	r0 &= 0x3Fu;  /* 0C0AC0D4 and #imm,r0 */
	r0 += 0xFFFFFFE0u;  /* 0C0AC0D6 add #imm,Rn */
	{ W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABFE2u, 5); goto L_0C0ABFE2; }  /* 0C0AC0D8 bra */
L_0C0AC0E0: BLKS(0x0C0AC0E0u);
	r6 = 0x0u;  /* 0C0AC0E0 mov #imm,Rn */
	{ W32(r9, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0ABFE2u, 4); goto L_0C0ABFE2; }  /* 0C0AC0E2 bra */
L_0C0AC0F0: BLKS(0x0C0AC0F0u);
	r0 = 0xC0AA550u; UPD(0x0C0AC0F2u, 1);  /* 0C0AC0F0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC0F2u); { u32 t_ = r0; PR = 0x0C0AC0F6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC0F6u); }  /* 0C0AC0F2 jsr @Rn */
L_0C0AC0F6: BLKS(0x0C0AC0F6u);
	T = (r0 & r0) == 0;  /* 0C0AC0F6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC074u, 4); goto L_0C0AC074; } goto L_0C0AC0FC; }  /* 0C0AC0F8 bt/s */
L_0C0AC0FC: BLKS(0x0C0AC0FCu);
	r2 = 0xC2755BCu; UPD(0x0C0AC0FEu, 2);  /* 0C0AC0FC mov.l @(disp,pc),Rn */
	r5 = 0x38u;  /* 0C0AC0FE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AC102u, 2);  /* 0C0AC100 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC102 mov #imm,Rn */
	IF(0x0C0AC104u); MACL = r6 * r5;  /* 0C0AC104 mul.l Rm,Rn */
	r3 = 0xC275E1Cu; UPD(0x0C0AC108u, 4);  /* 0C0AC106 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AC108 and Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0AC10Cu, 2);  /* 0C0AC10A mov.l @(disp,pc),Rn */
	IF(0x0C0AC10Cu); r5 = MACL;  /* 0C0AC10C sts macl,Rn */
	r5 += r3;  /* 0C0AC10E add Rm,Rn */
	r10 |= r0;  /* 0C0AC110 or Rm,Rn */
	W32(r5, r10); UPD(0x0C0AC114u, 4);  /* 0C0AC112 mov.l Rm,@Rn */
	r0 = 0x3u;  /* 0C0AC114 mov #imm,Rn */
	W32(r5 + 0x4u, r9); UPD(0x0C0AC118u, 2);  /* 0C0AC116 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x10u, r12); UPD(0x0C0AC11Au, 1);  /* 0C0AC118 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC11A add Rm,Rn */
	W32(r5 + 0x14u, r13); UPD(0x0C0AC11Eu, 2);  /* 0C0AC11C mov.l Rm,@(disp,Rn) */
	W32(r5 + 0xCu, r8); UPD(0x0C0AC120u, 1);  /* 0C0AC11E mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x8u, r8); UPD(0x0C0AC122u, 1);  /* 0C0AC120 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x1Cu, r8); UPD(0x0C0AC124u, 1);  /* 0C0AC122 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r8); UPD(0x0C0AC126u, 1);  /* 0C0AC124 mov.l Rm,@(disp,Rn) */
	r5 += 0x30u;  /* 0C0AC126 add #imm,Rn */
	W8(r5, r8); UPD(0x0C0AC12Au, 2);  /* 0C0AC128 mov.b Rm,@Rn */
	IF(0x0C0AC12Au); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC12Cu, 1);  /* 0C0AC12A mov.b @(r0,Rm),Rn */
	r5 += 0x4u;  /* 0C0AC12C add #imm,Rn */
	W8(r5, r7); UPD(0x0C0AC130u, 2);  /* 0C0AC12E mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC130 mov #imm,Rn */
	IF(0x0C0AC132u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC134u, 2);  /* 0C0AC132 mov.b @(r0,Rm),Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AC136u, 1);  /* 0C0AC134 mov.l @(disp,pc),Rn */
	{ u32 v_ = r6; r5 -= 1; W8(r5, v_); } UPD(0x0C0AC138u, 1);  /* 0C0AC136 mov.b Rm,@-Rn */
	r1 = 0x808080u; UPD(0x0C0AC13Au, 1);  /* 0C0AC138 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFCDu;  /* 0C0AC13A add #imm,Rn */
	r13 = 0xC1EEBF4u; UPD(0x0C0AC13Eu, 2);  /* 0C0AC13C mov.l @(disp,pc),Rn */
	W32(r5 + 0x28u, r8); UPD(0x0C0AC140u, 1);  /* 0C0AC13E mov.l Rm,@(disp,Rn) */
	r9 += r13;  /* 0C0AC140 add Rm,Rn */
	IF(0x0C0AC142u); { u32 t_ = r12; PR = 0x0C0AC146u; W32(r5 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC146u); }  /* 0C0AC142 jsr @Rn */
L_0C0AC146: BLKS(0x0C0AC146u);
	r0 &= 0x1u;  /* 0C0AC146 and #imm,r0 */
	IF(0x0C0AC148u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC14Au, 2);  /* 0C0AC148 mov.b @(r0,Rm),Rn */
	r3 = 0x3Fu;  /* 0C0AC14A mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AC14C extu.b Rm,Rn */
	T = r4 > r3;  /* 0C0AC14E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC160u, 6); goto L_0C0AC160; }  /* 0C0AC150 bt */
L_0C0AC152: BLKS(0x0C0AC152u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC074u, 3); goto L_0C0AC074; }  /* 0C0AC152 bra */
L_0C0AC160: BLKS(0x0C0AC160u);
	r9 = 0xC0AFC10u; UPD(0x0C0AC162u, 1);  /* 0C0AC160 mov.l @(disp,pc),Rn */
	IF(0x0C0AC162u); { u32 t_ = r9; PR = 0x0C0AC166u; IF(0x0C0AC164u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC166u); }  /* 0C0AC162 jsr @Rn */
L_0C0AC166: BLKS(0x0C0AC166u);
	{ IF(0x0C0AC168u); ; /* slot nop */ UPD(0x0C0AC152u, 3); goto L_0C0AC152; }  /* 0C0AC166 bra */
L_0C0AC170: BLKS(0x0C0AC170u);
	{ IF(0x0C0AC172u); ; /* slot nop */ UPD(0x0C0AC048u, 3); goto L_0C0AC048; }  /* 0C0AC170 bra */
L_0C0AC180: BLKS(0x0C0AC180u);
	{ IF(0x0C0AC182u); ; /* slot nop */ UPD(0x0C0ABFACu, 3); goto L_0C0ABFAC; }  /* 0C0AC180 bra */
L_0C0AC1D0: BLKS(0x0C0AC1D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1D2u, 1);  /* 0C0AC1D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1D4u, 1);  /* 0C0AC1D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1D6u, 1);  /* 0C0AC1D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1D8u, 1);  /* 0C0AC1D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1DAu, 1);  /* 0C0AC1D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1DCu, 1);  /* 0C0AC1DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1DEu, 1);  /* 0C0AC1DC mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0AC1DE exts.w Rm,Rn */
	IF(0x0C0AC1E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC1E2u, 2);  /* 0C0AC1E0 sts.l pr,@-Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AC1E4u, 1);  /* 0C0AC1E2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC1E4 add #imm,Rn */
	IF(0x0C0AC1E6u); { u32 t_ = r8; PR = 0x0C0AC1EAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC1EAu); }  /* 0C0AC1E6 jsr @Rn */
L_0C0AC1EA: BLKS(0x0C0AC1EAu);
	r6 = 0x38u;  /* 0C0AC1EA mov #imm,Rn */
	IF(0x0C0AC1ECu); MACL = r13 * r6;  /* 0C0AC1EC mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC1F0u, 4);  /* 0C0AC1EE mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0AC1F0 exts.w Rm,Rn */
	IF(0x0C0AC1F2u); r8 = MACL;  /* 0C0AC1F2 sts macl,Rn */
	r8 += r5;  /* 0C0AC1F4 add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0AC1F8u, 4);  /* 0C0AC1F6 mov.l @(disp,Rm),Rn */
	r4 = 0x7u;  /* 0C0AC1F8 mov #imm,Rn */
	r11 = 0xC050D70u; UPD(0x0C0AC1FCu, 2);  /* 0C0AC1FA mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C0AC1FC and Rm,Rn */
	r2 = 0xC1EEC5Cu; UPD(0x0C0AC200u, 2);  /* 0C0AC1FE mov.l @(disp,pc),Rn */
	IF(0x0C0AC200u); r0 <<= 2;  /* 0C0AC200 shll2 Rn */
	IF(0x0C0AC202u); { u32 t_ = r11; PR = 0x0C0AC206u; IF(0x0C0AC204u); r4 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AC206u); }  /* 0C0AC202 jsr @Rn */
L_0C0AC206: BLKS(0x0C0AC206u);
	r3 = 0xFu;  /* 0C0AC206 mov #imm,Rn */
	r9 = r0;  /* 0C0AC208 mov Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C0AC20Cu, 3);  /* 0C0AC20A mov.l @(disp,pc),Rn */
	IF(0x0C0AC20Cu); ARG0(0x493Du); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0AC20C shld Rm,Rn */
	r4 = r10;  /* 0C0AC20E mov Rm,Rn */
	IF(0x0C0AC210u); { u32 t_ = r12; PR = 0x0C0AC214u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AC214u); }  /* 0C0AC210 jsr @Rn */
L_0C0AC214: BLKS(0x0C0AC214u);
	r5 = r9;  /* 0C0AC214 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AC218u, 2);  /* 0C0AC216 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AC218 mov Rm,Rn */
	r12 = R32(r8 + 0x10u); UPD(0x0C0AC21Cu, 2);  /* 0C0AC21A mov.l @(disp,Rm),Rn */
	IF(0x0C0AC21Cu); { u32 t_ = r9; PR = 0x0C0AC220u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AC220u); }  /* 0C0AC21C jsr @Rn */
L_0C0AC220: BLKS(0x0C0AC220u);
	r10 = R32(r8 + 0x14u); UPD(0x0C0AC222u, 1);  /* 0C0AC220 mov.l @(disp,Rm),Rn */
	r9 = 0x8u;  /* 0C0AC222 mov #imm,Rn */
	r10 += r0;  /* 0C0AC224 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0AC228u, 3);  /* 0C0AC226 mov.l @Rm,Rn */
	W32(r14, r0); UPD(0x0C0AC22Au, 1);  /* 0C0AC228 mov.l Rm,@Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0AC22Cu, 1);  /* 0C0AC22A mov.l @(disp,Rm),Rn */
	r9 &= r0;  /* 0C0AC22C and Rm,Rn */
	r0 &= 0x7u;  /* 0C0AC22E and #imm,r0 */
	r0 += 0x1u;  /* 0C0AC230 add #imm,Rn */
	IF(0x0C0AC232u); { u32 t_ = r11; PR = 0x0C0AC236u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AC236u); }  /* 0C0AC232 jsr @Rn */
L_0C0AC236: BLKS(0x0C0AC236u);
	r9 |= r0;  /* 0C0AC236 or Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC23Au, 2);  /* 0C0AC238 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0AC23A mov Rm,Rn */
	r8 += 0x34u;  /* 0C0AC23C add #imm,Rn */
	IF(0x0C0AC23Eu); r0 <<= 2;  /* 0C0AC23E shll2 Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AC242u, 4);  /* 0C0AC240 mov.b @Rm,Rn */
	IF(0x0C0AC242u); r3 = R32(r0 + r2); UPD(0x0C0AC244u, 1);  /* 0C0AC242 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0AC244 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0AC248u, 2);  /* 0C0AC246 mov.l Rm,@(disp,Rn) */
	r2 = 0xFF600000u; UPD(0x0C0AC24Au, 1);  /* 0C0AC248 mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C0AC24A add Rm,Rn */
	IF(0x0C0AC24Cu); T = (s32)r2 >= 0;  /* 0C0AC24C cmp/pz Rn */
	{ u32 c_ = T; r11 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ if (c_) { UPD(0x0C0AC256u, 5); goto L_0C0AC256; } UPD(0x0C0AC252u, 1); goto L_0C0AC252; }  /* 0C0AC24E bt/s */
L_0C0AC252: BLKS(0x0C0AC252u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC360u, 3); goto L_0C0AC360; }  /* 0C0AC252 bra */
L_0C0AC256: BLKS(0x0C0AC256u);
	r0 = 0xA00000u; UPD(0x0C0AC258u, 1);  /* 0C0AC256 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C0AC258 add Rm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0AC25A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC278u, 5); goto L_0C0AC278; } goto L_0C0AC260; }  /* 0C0AC25C bt/s */
L_0C0AC260: BLKS(0x0C0AC260u);
	r2 = 0xC3929E0u; UPD(0x0C0AC262u, 2);  /* 0C0AC260 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0AC264u, 1);  /* 0C0AC262 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0AC266u, 1);  /* 0C0AC264 mov.l @(disp,pc),Rn */
	r2 = r10;  /* 0C0AC266 mov Rm,Rn */
	r2 -= r5;  /* 0C0AC268 sub Rm,Rn */
	r2 += r4;  /* 0C0AC26A add Rm,Rn */
	IF(0x0C0AC26Cu); T = (s32)r2 >= 0;  /* 0C0AC26C cmp/pz Rn */
	if (!T) { UPD(0x0C0AC350u, 7); goto L_0C0AC350; }  /* 0C0AC26E bf */
L_0C0AC270: BLKS(0x0C0AC270u);
	r6 = 0x780000u; UPD(0x0C0AC272u, 1);  /* 0C0AC270 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0AC272 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC274 cmp/ge Rm,Rn */
	IF(0x0C0AC276u); r1 = T;  /* 0C0AC276 movt Rn */
	UPD(0x0C0AC278u, 3);
L_0C0AC278: BLKS(0x0C0AC278u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC278 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC27A tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC2D0u, 5); goto L_0C0AC2D0; } UPD(0x0C0AC280u, 1); goto L_0C0AC280; }  /* 0C0AC27C bt/s */
L_0C0AC280: BLKS(0x0C0AC280u);
	r2 = (u32)(s32)(s16)r1;  /* 0C0AC280 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AC282 tst Rm,Rn */
	{ u32 c_ = !T; r10 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC2B0u, 5); goto L_0C0AC2B0; } goto L_0C0AC288; }  /* 0C0AC284 bf/s */
L_0C0AC288: BLKS(0x0C0AC288u);
	IF(0x0C0AC288u); MACL = r13 * r10;  /* 0C0AC288 mul.l Rm,Rn */
	r13 = 0xC275E1Cu; UPD(0x0C0AC28Cu, 4);  /* 0C0AC28A mov.l @(disp,pc),Rn */
	IF(0x0C0AC28Cu); r0 = MACL;  /* 0C0AC28C sts macl,Rn */
	IF(0x0C0AC28Eu); W32(r0 + r13, r2); UPD(0x0C0AC290u, 2);  /* 0C0AC28E mov.l Rm,@(r0,Rn) */
L_0C0AC290: BLKS(0x0C0AC290u);
	r14 += 0x8u;  /* 0C0AC290 add #imm,Rn */
	r15 = r14;  /* 0C0AC292 mov Rm,Rn */
	IF(0x0C0AC294u); PR = R32(r15); r15 += 4; UPD(0x0C0AC296u, 3);  /* 0C0AC294 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC298u, 1);  /* 0C0AC296 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC29Au, 1);  /* 0C0AC298 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC29Cu, 1);  /* 0C0AC29A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC29Eu, 1);  /* 0C0AC29C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC2A0u, 1);  /* 0C0AC29E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC2A2u, 1);  /* 0C0AC2A0 mov.l @Rm+,Rn */
	IF(0x0C0AC2A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC2A2 rts */
L_0C0AC2B0: BLKS(0x0C0AC2B0u);
	r3 = 0x38u;  /* 0C0AC2B0 mov #imm,Rn */
	IF(0x0C0AC2B2u); MACL = r13 * r3;  /* 0C0AC2B2 mul.l Rm,Rn */
	r8 = 0xC275E1Cu; UPD(0x0C0AC2B6u, 4);  /* 0C0AC2B4 mov.l @(disp,pc),Rn */
	IF(0x0C0AC2B6u); r3 = MACL;  /* 0C0AC2B6 sts macl,Rn */
	r3 += r8;  /* 0C0AC2B8 add Rm,Rn */
	r12 = r3;  /* 0C0AC2BA mov Rm,Rn */
	r12 += 0x30u;  /* 0C0AC2BC add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AC2C0u, 5);  /* 0C0AC2BE mov.b @Rm,Rn */
	r11 += 0xFFFFFFFFu;  /* 0C0AC2C0 add #imm,Rn */
	r1 = r11 & 0xFF;  /* 0C0AC2C2 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AC2C4 tst Rm,Rn */
	{ u32 c_ = !T; W8(r12, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AC290u, 6); goto L_0C0AC290; } UPD(0x0C0AC2CAu, 1); goto L_0C0AC2CA; }  /* 0C0AC2C6 bf/s */
L_0C0AC2CA: BLKS(0x0C0AC2CAu);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0AC290u, 3); goto L_0C0AC290; }  /* 0C0AC2CA bra */
L_0C0AC2D0: BLKS(0x0C0AC2D0u);
	r0 = 0xC0AA550u; UPD(0x0C0AC2D2u, 1);  /* 0C0AC2D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC2D2u); { u32 t_ = r0; PR = 0x0C0AC2D6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC2D6u); }  /* 0C0AC2D2 jsr @Rn */
L_0C0AC2D6: BLKS(0x0C0AC2D6u);
	T = (r0 & r0) == 0;  /* 0C0AC2D6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC280u, 4); goto L_0C0AC280; } goto L_0C0AC2DC; }  /* 0C0AC2D8 bt/s */
L_0C0AC2DC: BLKS(0x0C0AC2DCu);
	r2 = 0xC2755BCu; UPD(0x0C0AC2DEu, 2);  /* 0C0AC2DC mov.l @(disp,pc),Rn */
	r5 = 0x38u;  /* 0C0AC2DE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AC2E2u, 2);  /* 0C0AC2E0 mov.w @Rm,Rn */
	IF(0x0C0AC2E2u); MACL = r6 * r5;  /* 0C0AC2E2 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AC2E6u, 3);  /* 0C0AC2E4 mov.l @(disp,pc),Rn */
	IF(0x0C0AC2E6u); r3 = MACL;  /* 0C0AC2E6 sts macl,Rn */
	r3 += r0;  /* 0C0AC2E8 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0AC2ECu, 3);  /* 0C0AC2EA mov.l @Rm,Rn */
	r4 = 0xC0000000u; UPD(0x0C0AC2EEu, 1);  /* 0C0AC2EC mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0AC2EE and #imm,r0 */
	r0 |= r4;  /* 0C0AC2F0 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0AC2F4u, 3);  /* 0C0AC2F2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AC2F6u, 1);  /* 0C0AC2F4 mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0AC2F6 mov #imm,Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0AC2FAu, 2);  /* 0C0AC2F8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC2FA add Rm,Rn */
	W32(r3 + 0x8u, r8); UPD(0x0C0AC2FEu, 2);  /* 0C0AC2FC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r12); UPD(0x0C0AC300u, 1);  /* 0C0AC2FE mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r10); UPD(0x0C0AC302u, 1);  /* 0C0AC300 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0AC304u, 1);  /* 0C0AC302 mov.l Rm,@(disp,Rn) */
	r10 = 0x3Fu;  /* 0C0AC304 mov #imm,Rn */
	W32(r3 + 0x18u, r8); UPD(0x0C0AC308u, 2);  /* 0C0AC306 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AC308 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AC30Cu, 2);  /* 0C0AC30A mov.b Rm,@Rn */
	IF(0x0C0AC30Cu); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC30Eu, 1);  /* 0C0AC30C mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0AC30E add #imm,Rn */
	W8(r3, r7); UPD(0x0C0AC312u, 2);  /* 0C0AC310 mov.b Rm,@Rn */
	{ u32 v_ = r11; r3 -= 1; W8(r3, v_); } UPD(0x0C0AC314u, 1);  /* 0C0AC312 mov.b Rm,@-Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AC314 add #imm,Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0AC318u, 2);  /* 0C0AC316 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFE40u; UPD(0x0C0AC31Au, 1);  /* 0C0AC318 mov.l @(disp,pc),Rn */
	r1 = 0x808080u; UPD(0x0C0AC31Cu, 1);  /* 0C0AC31A mov.l @(disp,pc),Rn */
	r12 = 0xC1EEBF4u; UPD(0x0C0AC31Eu, 1);  /* 0C0AC31C mov.l @(disp,pc),Rn */
	IF(0x0C0AC31Eu); { u32 t_ = r8; PR = 0x0C0AC322u; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC322u); }  /* 0C0AC31E jsr @Rn */
L_0C0AC322: BLKS(0x0C0AC322u);
	r0 &= 0x1u;  /* 0C0AC322 and #imm,r0 */
	r9 += r12;  /* 0C0AC324 add Rm,Rn */
	IF(0x0C0AC326u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC328u, 3);  /* 0C0AC326 mov.b @(r0,Rm),Rn */
	r4 = r11 & 0xFF;  /* 0C0AC328 extu.b Rm,Rn */
	T = r4 > r10;  /* 0C0AC32A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC340u, 5); goto L_0C0AC340; }  /* 0C0AC32C bt */
L_0C0AC32E: BLKS(0x0C0AC32Eu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC280u, 3); goto L_0C0AC280; }  /* 0C0AC32E bra */
L_0C0AC340: BLKS(0x0C0AC340u);
	r9 = 0xC0AFC10u; UPD(0x0C0AC342u, 1);  /* 0C0AC340 mov.l @(disp,pc),Rn */
	IF(0x0C0AC342u); { u32 t_ = r9; PR = 0x0C0AC346u; IF(0x0C0AC344u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC346u); }  /* 0C0AC342 jsr @Rn */
L_0C0AC346: BLKS(0x0C0AC346u);
	{ IF(0x0C0AC348u); ; /* slot nop */ UPD(0x0C0AC32Eu, 3); goto L_0C0AC32E; }  /* 0C0AC346 bra */
L_0C0AC350: BLKS(0x0C0AC350u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC270u, 3); goto L_0C0AC270; }  /* 0C0AC350 bra */
L_0C0AC360: BLKS(0x0C0AC360u);
	{ IF(0x0C0AC362u); ; /* slot nop */ UPD(0x0C0AC256u, 3); goto L_0C0AC256; }  /* 0C0AC360 bra */
}

void f_0C0AB750(sh3_t *c)
{
	LOCALS;
L_0C0AB750: BLKS(0x0C0AB750u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB752u, 1);  /* 0C0AB750 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AB752 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB756u, 2);  /* 0C0AB754 mov.l Rm,@-Rn */
	r0 = 0x38u;  /* 0C0AB756 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB75Au, 2);  /* 0C0AB758 mov.l Rm,@-Rn */
	IF(0x0C0AB75Au); MACL = r1 * r0;  /* 0C0AB75A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB75Eu, 3);  /* 0C0AB75C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB760u, 1);  /* 0C0AB75E mov.l Rm,@-Rn */
	IF(0x0C0AB760u); r3 = MACL;  /* 0C0AB760 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB764u, 2);  /* 0C0AB762 mov.l Rm,@-Rn */
	IF(0x0C0AB764u); r2 = MACL;  /* 0C0AB764 sts macl,Rn */
	r8 = 0xC275E1Cu; UPD(0x0C0AB768u, 2);  /* 0C0AB766 mov.l @(disp,pc),Rn */
	IF(0x0C0AB768u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB76Au, 1);  /* 0C0AB768 sts.l pr,@-Rn */
	r3 += r8;  /* 0C0AB76A add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0AB76Eu, 2);  /* 0C0AB76C mov.l @(disp,Rm),Rn */
	IF(0x0C0AB76Eu); T = (s32)r1 >= 0;  /* 0C0AB76E cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB778u, 4); goto L_0C0AB778; } goto L_0C0AB774; }  /* 0C0AB770 bt/s */
L_0C0AB774: BLKS(0x0C0AB774u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0AB9E0u, 4); goto L_0C0AB9E0; }  /* 0C0AB774 bra */
L_0C0AB778: BLKS(0x0C0AB778u);
	r6 = 0xFFFFFFFCu;  /* 0C0AB778 mov #imm,Rn */
	UPD(0x0C0AB77Au, 1);
L_0C0AB77A: BLKS(0x0C0AB77Au);
	IF(0x0C0AB77Au); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AB77A shad Rm,Rn */
	r7 = 0xFu;  /* 0C0AB77C mov #imm,Rn */
	IF(0x0C0AB77Eu); MACL = r1 * r7;  /* 0C0AB77E mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0AB782u, 5);  /* 0C0AB780 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB782u); r0 = MACL;  /* 0C0AB782 sts macl,Rn */
	IF(0x0C0AB784u); T = (s32)r1 >= 0;  /* 0C0AB784 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB78Eu, 5); goto L_0C0AB78E; } UPD(0x0C0AB78Au, 1); goto L_0C0AB78A; }  /* 0C0AB786 bt/s */
L_0C0AB78A: BLKS(0x0C0AB78Au);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0AB9D0u, 3); goto L_0C0AB9D0; }  /* 0C0AB78A bra */
L_0C0AB78E: BLKS(0x0C0AB78Eu);
	IF(0x0C0AB78Eu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AB78E shad Rm,Rn */
	UPD(0x0C0AB790u, 1);
L_0C0AB790: BLKS(0x0C0AB790u);
	IF(0x0C0AB790u); MACL = r1 * r7;  /* 0C0AB790 mul.l Rm,Rn */
	r5 = r2;  /* 0C0AB792 mov Rm,Rn */
	r2 = 0xC220C2Cu; UPD(0x0C0AB796u, 4);  /* 0C0AB794 mov.l @(disp,pc),Rn */
	IF(0x0C0AB796u); r4 = MACL;  /* 0C0AB796 sts macl,Rn */
	W32(r3 + 0x1Cu, r4); UPD(0x0C0AB79Au, 2);  /* 0C0AB798 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0AB79Cu, 1);  /* 0C0AB79A mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0AB79Eu, 1);  /* 0C0AB79C mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0AB79E sub Rm,Rn */
	IF(0x0C0AB7A0u); T = (s32)r1 >= 0;  /* 0C0AB7A0 cmp/pz Rn */
	if (T) { UPD(0x0C0AB7AAu, 5); goto L_0C0AB7AA; }  /* 0C0AB7A2 bt */
L_0C0AB7A4: BLKS(0x0C0AB7A4u);
	r1 += 0xFu;  /* 0C0AB7A4 add #imm,Rn */
	{ IF(0x0C0AB7A8u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0AB7ACu, 4); goto L_0C0AB7AC; }  /* 0C0AB7A6 bra */
L_0C0AB7AA: BLKS(0x0C0AB7AAu);
	IF(0x0C0AB7AAu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AB7AA shad Rm,Rn */
	UPD(0x0C0AB7ACu, 1);
L_0C0AB7AC: BLKS(0x0C0AB7ACu);
	IF(0x0C0AB7ACu); MACL = r1 * r7;  /* 0C0AB7AC mul.l Rm,Rn */
	r9 = R32(r3 + 0x10u); UPD(0x0C0AB7B0u, 3);  /* 0C0AB7AE mov.l @(disp,Rm),Rn */
	IF(0x0C0AB7B0u); r6 = MACL;  /* 0C0AB7B0 sts macl,Rn */
	r6 += r2;  /* 0C0AB7B2 add Rm,Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0AB7B6u, 3);  /* 0C0AB7B4 mov.l Rm,@(disp,Rn) */
	r9 += r0;  /* 0C0AB7B6 add Rm,Rn */
	r9 -= r6;  /* 0C0AB7B8 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AB7BCu, 3);  /* 0C0AB7BA mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0AB7BEu, 1);  /* 0C0AB7BC mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0AB7BE add Rm,Rn */
	r7 += r9;  /* 0C0AB7C0 add Rm,Rn */
	W32(r3 + 0x10u, r9); UPD(0x0C0AB7C4u, 3);  /* 0C0AB7C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB7C4u); T = (s32)r7 >= 0;  /* 0C0AB7C4 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB7CEu, 4); goto L_0C0AB7CE; } UPD(0x0C0AB7CAu, 1); goto L_0C0AB7CA; }  /* 0C0AB7C6 bt/s */
L_0C0AB7CA: BLKS(0x0C0AB7CAu);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AB9C0u, 3); goto L_0C0AB9C0; }  /* 0C0AB7CA bra */
L_0C0AB7CE: BLKS(0x0C0AB7CEu);
	r0 = 0xA80000u; UPD(0x0C0AB7D0u, 1);  /* 0C0AB7CE mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0AB7D0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB7F0u, 4); goto L_0C0AB7F0; } goto L_0C0AB7D6; }  /* 0C0AB7D2 bt/s */
L_0C0AB7D6: BLKS(0x0C0AB7D6u);
	r10 = 0xC3929E0u; UPD(0x0C0AB7D8u, 2);  /* 0C0AB7D6 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0AB7D8 mov Rm,Rn */
	r7 = R32(r10); UPD(0x0C0AB7DCu, 2);  /* 0C0AB7DA mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0AB7DEu, 1);  /* 0C0AB7DC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AB7DE sub Rm,Rn */
	r2 += r4;  /* 0C0AB7E0 add Rm,Rn */
	IF(0x0C0AB7E2u); T = (s32)r2 >= 0;  /* 0C0AB7E2 cmp/pz Rn */
	if (T) { UPD(0x0C0AB7E8u, 6); goto L_0C0AB7E8; }  /* 0C0AB7E4 bt */
L_0C0AB7E6: BLKS(0x0C0AB7E6u);
	r2 = 0u - r2;  /* 0C0AB7E6 neg Rm,Rn */
	UPD(0x0C0AB7E8u, 1);
L_0C0AB7E8: BLKS(0x0C0AB7E8u);
	r11 = 0x800000u; UPD(0x0C0AB7EAu, 1);  /* 0C0AB7E8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C0AB7EA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB810u, 4); goto L_0C0AB810; } UPD(0x0C0AB7F0u, 1); goto L_0C0AB7F0; }  /* 0C0AB7EC bf/s */
L_0C0AB7F0: BLKS(0x0C0AB7F0u);
	W32(r3, r1); UPD(0x0C0AB7F2u, 1);  /* 0C0AB7F0 mov.l Rm,@Rn */
L_0C0AB7F2: BLKS(0x0C0AB7F2u);
	r15 = r14;  /* 0C0AB7F2 mov Rm,Rn */
	IF(0x0C0AB7F4u); PR = R32(r15); r15 += 4; UPD(0x0C0AB7F6u, 2);  /* 0C0AB7F4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB7F8u, 1);  /* 0C0AB7F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB7FAu, 1);  /* 0C0AB7F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB7FCu, 1);  /* 0C0AB7FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB7FEu, 1);  /* 0C0AB7FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB800u, 1);  /* 0C0AB7FE mov.l @Rm+,Rn */
	IF(0x0C0AB800u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB800 rts */
L_0C0AB810: BLKS(0x0C0AB810u);
	r7 = r3;  /* 0C0AB810 mov Rm,Rn */
	r6 = r3;  /* 0C0AB812 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0AB814 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AB818u, 4);  /* 0C0AB816 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0AB818 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AB81Cu, 2);  /* 0C0AB81A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0AB81C add #imm,Rn */
	r9 = r1 & 0xFF;  /* 0C0AB81E extu.b Rm,Rn */
	r12 = r0 & 0xFF;  /* 0C0AB820 extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0AB824u, 4);  /* 0C0AB822 mov.b Rm,@Rn */
	r6 += 0x30u;  /* 0C0AB824 add #imm,Rn */
	T = r9 == r12;  /* 0C0AB826 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AB830u, 5); goto L_0C0AB830; } goto L_0C0AB82C; }  /* 0C0AB828 bf/s */
L_0C0AB82C: BLKS(0x0C0AB82Cu);
	{ r0 = R32(r3 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB9B0u, 4); goto L_0C0AB9B0; }  /* 0C0AB82C bra */
L_0C0AB830: BLKS(0x0C0AB830u);
	r2 = R32(r3 + 0x28u); UPD(0x0C0AB832u, 1);  /* 0C0AB830 mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C0AB834u, 1);  /* 0C0AB832 mov.l @(disp,pc),Rn */
	T = (r2 & r4) == 0;  /* 0C0AB834 tst Rm,Rn */
	if (T) { UPD(0x0C0AB83Cu, 4); goto L_0C0AB83C; }  /* 0C0AB836 bt */
L_0C0AB838: BLKS(0x0C0AB838u);
	{ IF(0x0C0AB83Au); ; /* slot nop */ UPD(0x0C0AB990u, 3); goto L_0C0AB990; }  /* 0C0AB838 bra */
L_0C0AB83C: BLKS(0x0C0AB83Cu);
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AB83Eu, 1);  /* 0C0AB83C mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0AB83E add #imm,Rn */
	W8(r6, r7); UPD(0x0C0AB842u, 2);  /* 0C0AB840 mov.b Rm,@Rn */
	r6 = r7 & 0xFF;  /* 0C0AB842 extu.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AB844 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0AB848u, 3);  /* 0C0AB846 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB848u); r7 = T;  /* 0C0AB848 movt Rn */
	IF(0x0C0AB84Au); T = (s32)r2 >= 0;  /* 0C0AB84A cmp/pz Rn */
	if (T) { UPD(0x0C0AB854u, 5); goto L_0C0AB854; }  /* 0C0AB84C bt */
L_0C0AB84E: BLKS(0x0C0AB84Eu);
	r2 = 0u - r2;  /* 0C0AB84E neg Rm,Rn */
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AB856u, 4); goto L_0C0AB856; }  /* 0C0AB850 bra */
L_0C0AB854: BLKS(0x0C0AB854u);
	r3 = r8;  /* 0C0AB854 mov Rm,Rn */
	UPD(0x0C0AB856u, 1);
L_0C0AB856: BLKS(0x0C0AB856u);
	r3 += r5;  /* 0C0AB856 add Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0AB85Au, 2);  /* 0C0AB858 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB85Au); T = (s32)r1 >= 0;  /* 0C0AB85A cmp/pz Rn */
	if (T) { UPD(0x0C0AB860u, 4); goto L_0C0AB860; }  /* 0C0AB85C bt */
L_0C0AB85E: BLKS(0x0C0AB85Eu);
	r1 = 0u - r1;  /* 0C0AB85E neg Rm,Rn */
	UPD(0x0C0AB860u, 1);
L_0C0AB860: BLKS(0x0C0AB860u);
	r8 = 0xFFFFu; UPD(0x0C0AB862u, 1);  /* 0C0AB860 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0AB862 add Rm,Rn */
	T = (s32)r8 >= (s32)r2;  /* 0C0AB864 cmp/ge Rm,Rn */
	IF(0x0C0AB866u); r5 = T;  /* 0C0AB866 movt Rn */
	r7 |= r5;  /* 0C0AB868 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0AB86A tst Rm,Rn */
	if (T) { UPD(0x0C0AB87Au, 8); goto L_0C0AB87A; }  /* 0C0AB86C bt */
L_0C0AB86E: BLKS(0x0C0AB86Eu);
	r10 = R32(r3 + 0x28u); UPD(0x0C0AB870u, 1);  /* 0C0AB86E mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0AB872u, 1);  /* 0C0AB870 mov.l @Rm,Rn */
	r10 |= r4;  /* 0C0AB872 or Rm,Rn */
	r0 |= 0x1u;  /* 0C0AB874 or #imm,r0 */
	W32(r3 + 0x28u, r10); UPD(0x0C0AB878u, 3);  /* 0C0AB876 mov.l Rm,@(disp,Rn) */
	W32(r3, r0); UPD(0x0C0AB87Au, 1);  /* 0C0AB878 mov.l Rm,@Rn */
L_0C0AB87A: BLKS(0x0C0AB87Au);
	r11 = R32(r3 + 0x8u); UPD(0x0C0AB87Cu, 1);  /* 0C0AB87A mov.l @(disp,Rm),Rn */
	r4 = 0x13u;  /* 0C0AB87C mov #imm,Rn */
	T = (s32)r11 > (s32)r4;  /* 0C0AB87E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AB7F2u, 5); goto L_0C0AB7F2; }  /* 0C0AB880 bf */
L_0C0AB882: BLKS(0x0C0AB882u);
	r1 = r3;  /* 0C0AB882 mov Rm,Rn */
	r1 += 0x30u;  /* 0C0AB884 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AB888u, 3);  /* 0C0AB886 mov.b @Rm,Rn */
	r2 = 0x3u;  /* 0C0AB888 mov #imm,Rn */
	r2 &= r12;  /* 0C0AB88A and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AB88C tst Rm,Rn */
	if (!T) { UPD(0x0C0AB7F2u, 6); goto L_0C0AB7F2; }  /* 0C0AB88E bf */
L_0C0AB890: BLKS(0x0C0AB890u);
	r1 += 0x2u;  /* 0C0AB890 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AB894u, 2);  /* 0C0AB892 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0AB894 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AB896 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AB8D0u, 5); goto L_0C0AB8D0; } goto L_0C0AB89C; }  /* 0C0AB898 bt/s */
L_0C0AB89C: BLKS(0x0C0AB89Cu);
	if (!T) { UPD(0x0C0AB7F2u, 4); goto L_0C0AB7F2; }  /* 0C0AB89C bf */
L_0C0AB89E: BLKS(0x0C0AB89Eu);
	r15 += 0xFFFFFFECu;  /* 0C0AB89E add #imm,Rn */
	W32(r15, r2); UPD(0x0C0AB8A2u, 2);  /* 0C0AB8A0 mov.l Rm,@Rn */
	r12 = r3;  /* 0C0AB8A2 mov Rm,Rn */
	r12 += 0x33u;  /* 0C0AB8A4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AB8A8u, 3);  /* 0C0AB8A6 mov.b @Rm,Rn */
	r5 = 0x0u;  /* 0C0AB8A8 mov #imm,Rn */
	r10 = 0x808080u; UPD(0x0C0AB8ACu, 2);  /* 0C0AB8AA mov.l @(disp,pc),Rn */
	r9 = 0xC0ACA40u; UPD(0x0C0AB8AEu, 1);  /* 0C0AB8AC mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0AB8B0u, 1);  /* 0C0AB8AE mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r2); UPD(0x0C0AB8B2u, 1);  /* 0C0AB8B0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r2); UPD(0x0C0AB8B4u, 1);  /* 0C0AB8B2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r10); UPD(0x0C0AB8B6u, 1);  /* 0C0AB8B4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0AB8B8u, 1);  /* 0C0AB8B6 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0AB8BAu, 1);  /* 0C0AB8B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0AB8BAu); { u32 t_ = r9; PR = 0x0C0AB8BEu; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0AB8BEu); }  /* 0C0AB8BA jsr @Rn */
L_0C0AB8BE: BLKS(0x0C0AB8BEu);
	r15 += 0x14u;  /* 0C0AB8BE add #imm,Rn */
	UPD(0x0C0AB8C0u, 1);
L_0C0AB8C0: BLKS(0x0C0AB8C0u);
	{ IF(0x0C0AB8C2u); ; /* slot nop */ UPD(0x0C0AB7F2u, 3); goto L_0C0AB7F2; }  /* 0C0AB8C0 bra */
L_0C0AB8D0: BLKS(0x0C0AB8D0u);
	r2 = r3;  /* 0C0AB8D0 mov Rm,Rn */
	r2 += 0x33u;  /* 0C0AB8D2 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AB8D6u, 3);  /* 0C0AB8D4 mov.b @Rm,Rn */
	r10 = R32(r3 + 0x10u); UPD(0x0C0AB8D8u, 1);  /* 0C0AB8D6 mov.l @(disp,Rm),Rn */
	r9 = R32(r3); UPD(0x0C0AB8DAu, 1);  /* 0C0AB8D8 mov.l @Rm,Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C0AB8DCu, 1);  /* 0C0AB8DA mov.l @(disp,Rm),Rn */
	r0 = 0xC1EEBA4u; UPD(0x0C0AB8DEu, 1);  /* 0C0AB8DC mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AB8E0u, 1);  /* 0C0AB8DE mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C0AB8E0 add Rm,Rn */
	IF(0x0C0AB8E2u); T = (s32)r2 >= 0;  /* 0C0AB8E2 cmp/pz Rn */
	{ u32 c_ = !T; r3 = R32(r0); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0AB980u, 5); goto L_0C0AB980; } UPD(0x0C0AB8E8u, 1); goto L_0C0AB8E8; }  /* 0C0AB8E4 bf/s */
L_0C0AB8E8: BLKS(0x0C0AB8E8u);
	r6 = 0xA00000u; UPD(0x0C0AB8EAu, 1);  /* 0C0AB8E8 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0AB8EA add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0AB8EC cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB90Au, 5); goto L_0C0AB90A; } goto L_0C0AB8F2; }  /* 0C0AB8EE bt/s */
L_0C0AB8F2: BLKS(0x0C0AB8F2u);
	r8 = 0xC3929E0u; UPD(0x0C0AB8F4u, 2);  /* 0C0AB8F2 mov.l @(disp,pc),Rn */
	r2 = r11;  /* 0C0AB8F4 mov Rm,Rn */
	r5 = R32(r8); UPD(0x0C0AB8F8u, 2);  /* 0C0AB8F6 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0AB8FAu, 1);  /* 0C0AB8F8 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0AB8FA sub Rm,Rn */
	r2 += r7;  /* 0C0AB8FC add Rm,Rn */
	IF(0x0C0AB8FEu); T = (s32)r2 >= 0;  /* 0C0AB8FE cmp/pz Rn */
	if (!T) { UPD(0x0C0AB970u, 6); goto L_0C0AB970; }  /* 0C0AB900 bf */
L_0C0AB902: BLKS(0x0C0AB902u);
	r4 = 0x780000u; UPD(0x0C0AB904u, 1);  /* 0C0AB902 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0AB904 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AB906 cmp/ge Rm,Rn */
	IF(0x0C0AB908u); r1 = T;  /* 0C0AB908 movt Rn */
	UPD(0x0C0AB90Au, 3);
L_0C0AB90A: BLKS(0x0C0AB90Au);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AB90A exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AB90C tst Rm,Rn */
	if (!T) { UPD(0x0C0AB8C0u, 5); goto L_0C0AB8C0; }  /* 0C0AB90E bf */
L_0C0AB910: BLKS(0x0C0AB910u);
	r0 = 0xC0AA550u; UPD(0x0C0AB912u, 1);  /* 0C0AB910 mov.l @(disp,pc),Rn */
	IF(0x0C0AB912u); { u32 t_ = r0; PR = 0x0C0AB916u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AB916u); }  /* 0C0AB912 jsr @Rn */
L_0C0AB916: BLKS(0x0C0AB916u);
	T = (r0 & r0) == 0;  /* 0C0AB916 tst Rm,Rn */
	if (T) { UPD(0x0C0AB8C0u, 4); goto L_0C0AB8C0; }  /* 0C0AB918 bt */
L_0C0AB91A: BLKS(0x0C0AB91Au);
	r4 = 0x38u;  /* 0C0AB91A mov #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C0AB91Eu, 2);  /* 0C0AB91C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AB920u, 1);  /* 0C0AB91E mov.w @Rm,Rn */
	r7 = 0x10u;  /* 0C0AB920 mov #imm,Rn */
	IF(0x0C0AB922u); MACL = r3 * r4;  /* 0C0AB922 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AB926u, 4);  /* 0C0AB924 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0AB926 and Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0AB92Au, 2);  /* 0C0AB928 mov.l @(disp,pc),Rn */
	IF(0x0C0AB92Au); r0 = MACL;  /* 0C0AB92A sts macl,Rn */
	r0 += r5;  /* 0C0AB92C add Rm,Rn */
	r9 |= r6;  /* 0C0AB92E or Rm,Rn */
	r2 = 0x0u;  /* 0C0AB930 mov #imm,Rn */
	W32(r0, r9); UPD(0x0C0AB934u, 5);  /* 0C0AB932 mov.l Rm,@Rn */
	W32(r0 + 0x10u, r10); UPD(0x0C0AB936u, 1);  /* 0C0AB934 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x14u, r11); UPD(0x0C0AB938u, 1);  /* 0C0AB936 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r2); UPD(0x0C0AB93Au, 1);  /* 0C0AB938 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r8); UPD(0x0C0AB93Cu, 1);  /* 0C0AB93A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r8); UPD(0x0C0AB93Eu, 1);  /* 0C0AB93C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x1Cu, r8); UPD(0x0C0AB940u, 1);  /* 0C0AB93E mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x18u, r8); UPD(0x0C0AB942u, 1);  /* 0C0AB940 mov.l Rm,@(disp,Rn) */
	r0 += 0x30u;  /* 0C0AB942 add #imm,Rn */
	W8(r0, r8); UPD(0x0C0AB946u, 2);  /* 0C0AB944 mov.b Rm,@Rn */
	r0 += 0x4u;  /* 0C0AB946 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0AB94Au, 2);  /* 0C0AB948 mov.b Rm,@Rn */
	{ u32 v_ = r12; r0 -= 1; W8(r0, v_); } UPD(0x0C0AB94Cu, 1);  /* 0C0AB94A mov.b Rm,@-Rn */
	r11 = 0xC0AFE40u; UPD(0x0C0AB94Eu, 1);  /* 0C0AB94C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFCDu;  /* 0C0AB94E add #imm,Rn */
	r12 = 0x808080u; UPD(0x0C0AB952u, 2);  /* 0C0AB950 mov.l @(disp,pc),Rn */
	W32(r0 + 0x28u, r8); UPD(0x0C0AB954u, 1);  /* 0C0AB952 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AB954u); { u32 t_ = r11; PR = 0x0C0AB958u; W32(r0 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AB958u); }  /* 0C0AB954 jsr @Rn */
L_0C0AB958: BLKS(0x0C0AB958u);
	r10 = 0xC1EEBF4u; UPD(0x0C0AB95Au, 1);  /* 0C0AB958 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0AB95A and #imm,r0 */
	IF(0x0C0AB95Cu); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0AB95Eu, 2);  /* 0C0AB95C mov.b @(r0,Rm),Rn */
	r3 = 0x3Fu;  /* 0C0AB95E mov #imm,Rn */
	r4 = r9 & 0xFF;  /* 0C0AB960 extu.b Rm,Rn */
	T = r4 > r3;  /* 0C0AB962 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AB8C0u, 6); goto L_0C0AB8C0; }  /* 0C0AB964 bf */
L_0C0AB966: BLKS(0x0C0AB966u);
	r8 = 0xC0AFC10u; UPD(0x0C0AB968u, 1);  /* 0C0AB966 mov.l @(disp,pc),Rn */
	IF(0x0C0AB968u); { u32 t_ = r8; PR = 0x0C0AB96Cu; IF(0x0C0AB96Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AB96Cu); }  /* 0C0AB968 jsr @Rn */
L_0C0AB96C: BLKS(0x0C0AB96Cu);
	{ IF(0x0C0AB96Eu); ; /* slot nop */ UPD(0x0C0AB7F2u, 3); goto L_0C0AB7F2; }  /* 0C0AB96C bra */
L_0C0AB970: BLKS(0x0C0AB970u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB902u, 3); goto L_0C0AB902; }  /* 0C0AB970 bra */
L_0C0AB980: BLKS(0x0C0AB980u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AB8E8u, 3); goto L_0C0AB8E8; }  /* 0C0AB980 bra */
L_0C0AB990: BLKS(0x0C0AB990u);
	r6 = 0xFFFFFAFBu; UPD(0x0C0AB992u, 1);  /* 0C0AB990 mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C0AB992 add Rm,Rn */
	r1 = r6 & 0xFFFF;  /* 0C0AB994 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AB996 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AB9A0u, 6); goto L_0C0AB9A0; } UPD(0x0C0AB99Cu, 1); goto L_0C0AB99C; }  /* 0C0AB998 bf/s */
L_0C0AB99C: BLKS(0x0C0AB99Cu);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB7F2u, 3); goto L_0C0AB7F2; }  /* 0C0AB99C bra */
L_0C0AB9A0: BLKS(0x0C0AB9A0u);
	{ IF(0x0C0AB9A2u); ; /* slot nop */ UPD(0x0C0AB7F2u, 3); goto L_0C0AB7F2; }  /* 0C0AB9A0 bra */
L_0C0AB9B0: BLKS(0x0C0AB9B0u);
	r2 = 0x0u;  /* 0C0AB9B0 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0AB9B2 add #imm,Rn */
	r0 &= 0x7u;  /* 0C0AB9B4 and #imm,r0 */
	W8(r7, r2); UPD(0x0C0AB9B8u, 4);  /* 0C0AB9B6 mov.b Rm,@Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AB830u, 3); goto L_0C0AB830; }  /* 0C0AB9B8 bra */
L_0C0AB9C0: BLKS(0x0C0AB9C0u);
	{ IF(0x0C0AB9C2u); ; /* slot nop */ UPD(0x0C0AB7CEu, 3); goto L_0C0AB7CE; }  /* 0C0AB9C0 bra */
L_0C0AB9D0: BLKS(0x0C0AB9D0u);
	{ IF(0x0C0AB9D2u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0AB790u, 3); goto L_0C0AB790; }  /* 0C0AB9D0 bra */
L_0C0AB9E0: BLKS(0x0C0AB9E0u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0AB77Au, 3); goto L_0C0AB77A; }  /* 0C0AB9E0 bra */
}

void f_0C0ABA40(sh3_t *c)
{
	LOCALS;
L_0C0ABA40: BLKS(0x0C0ABA40u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABA40 exts.w Rm,Rn */
	r2 = 0x38u;  /* 0C0ABA42 mov #imm,Rn */
	IF(0x0C0ABA44u); MACL = r4 * r2;  /* 0C0ABA44 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ABA48u, 5);  /* 0C0ABA46 mov.l @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C0ABA48 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA4Cu, 2);  /* 0C0ABA4A mov.l Rm,@-Rn */
	IF(0x0C0ABA4Cu); r3 = MACL;  /* 0C0ABA4C sts macl,Rn */
	r3 += r0;  /* 0C0ABA4E add Rm,Rn */
	r0 = R32(r3 + 0x18u); UPD(0x0C0ABA52u, 3);  /* 0C0ABA50 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABA52u); MACL = r0 * r6;  /* 0C0ABA52 mul.l Rm,Rn */
	IF(0x0C0ABA54u); r1 = MACL;  /* 0C0ABA54 sts macl,Rn */
	IF(0x0C0ABA56u); T = (s32)r1 >= 0;  /* 0C0ABA56 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABA60u, 7); goto L_0C0ABA60; } goto L_0C0ABA5C; }  /* 0C0ABA58 bt/s */
L_0C0ABA5C: BLKS(0x0C0ABA5Cu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0ABBC0u, 4); goto L_0C0ABBC0; }  /* 0C0ABA5C bra */
L_0C0ABA60: BLKS(0x0C0ABA60u);
	r5 = R32(r3 + 0x1Cu); UPD(0x0C0ABA62u, 1);  /* 0C0ABA60 mov.l @(disp,Rm),Rn */
L_0C0ABA62: BLKS(0x0C0ABA62u);
	r0 = r1;  /* 0C0ABA62 mov Rm,Rn */
	r7 = 0xFFFFFFFCu;  /* 0C0ABA64 mov #imm,Rn */
	IF(0x0C0ABA66u); MACL = r5 * r6;  /* 0C0ABA66 mul.l Rm,Rn */
	IF(0x0C0ABA68u); ARG0(0x407Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0ABA68 shad Rm,Rn */
	IF(0x0C0ABA6Au); r1 = MACL;  /* 0C0ABA6A sts macl,Rn */
	IF(0x0C0ABA6Cu); T = (s32)r1 >= 0;  /* 0C0ABA6C cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABA76u, 10); goto L_0C0ABA76; } UPD(0x0C0ABA72u, 1); goto L_0C0ABA72; }  /* 0C0ABA6E bt/s */
L_0C0ABA72: BLKS(0x0C0ABA72u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0ABBB0u, 3); goto L_0C0ABBB0; }  /* 0C0ABA72 bra */
L_0C0ABA76: BLKS(0x0C0ABA76u);
	r5 = r1;  /* 0C0ABA76 mov Rm,Rn */
	UPD(0x0C0ABA78u, 1);
L_0C0ABA78: BLKS(0x0C0ABA78u);
	IF(0x0C0ABA78u); ARG0(0x457Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0ABA78 shad Rm,Rn */
	r2 = 0xC220C2Cu; UPD(0x0C0ABA7Cu, 2);  /* 0C0ABA7A mov.l @(disp,pc),Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0ABA7Eu, 1);  /* 0C0ABA7C mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0ABA80u, 1);  /* 0C0ABA7E mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0ABA82u, 1);  /* 0C0ABA80 mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0ABA82 sub Rm,Rn */
	IF(0x0C0ABA84u); MACL = r1 * r6;  /* 0C0ABA84 mul.l Rm,Rn */
	IF(0x0C0ABA86u); r1 = MACL;  /* 0C0ABA86 sts macl,Rn */
	IF(0x0C0ABA88u); T = (s32)r1 >= 0;  /* 0C0ABA88 cmp/pz Rn */
	if (T) { UPD(0x0C0ABA92u, 8); goto L_0C0ABA92; }  /* 0C0ABA8A bt */
L_0C0ABA8C: BLKS(0x0C0ABA8Cu);
	r1 += 0xFu;  /* 0C0ABA8C add #imm,Rn */
	{ IF(0x0C0ABA90u); ARG0(0x417Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0ABA94u, 4); goto L_0C0ABA94; }  /* 0C0ABA8E bra */
L_0C0ABA92: BLKS(0x0C0ABA92u);
	IF(0x0C0ABA92u); ARG0(0x417Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0ABA92 shad Rm,Rn */
	UPD(0x0C0ABA94u, 1);
L_0C0ABA94: BLKS(0x0C0ABA94u);
	r1 += r2;  /* 0C0ABA94 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0ABA98u, 2);  /* 0C0ABA96 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0ABA9Au, 1);  /* 0C0ABA98 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0ABA9A add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0ABA9Eu, 2);  /* 0C0ABA9C mov.l @(disp,pc),Rn */
	r2 -= r1;  /* 0C0ABA9E sub Rm,Rn */
	r6 += r5;  /* 0C0ABAA0 add Rm,Rn */
	r7 += r2;  /* 0C0ABAA2 add Rm,Rn */
	W32(r3 + 0x24u, r1); UPD(0x0C0ABAA6u, 4);  /* 0C0ABAA4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABAA6u); T = (s32)r7 >= 0;  /* 0C0ABAA6 cmp/pz Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0ABAAAu, 2);  /* 0C0ABAA8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABBA0u, 3); goto L_0C0ABBA0; } UPD(0x0C0ABAAEu, 1); goto L_0C0ABAAE; }  /* 0C0ABAAA bf/s */
L_0C0ABAAE: BLKS(0x0C0ABAAEu);
	r0 = 0xA80000u; UPD(0x0C0ABAB0u, 1);  /* 0C0ABAAE mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0ABAB0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABACEu, 4); goto L_0C0ABACE; } goto L_0C0ABAB6; }  /* 0C0ABAB2 bt/s */
L_0C0ABAB6: BLKS(0x0C0ABAB6u);
	r5 = 0xC3929E0u; UPD(0x0C0ABAB8u, 2);  /* 0C0ABAB6 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0ABAB8 mov Rm,Rn */
	r7 = R32(r5); UPD(0x0C0ABABCu, 2);  /* 0C0ABABA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ABABEu, 1);  /* 0C0ABABC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ABABE sub Rm,Rn */
	r2 += r6;  /* 0C0ABAC0 add Rm,Rn */
	IF(0x0C0ABAC2u); T = (s32)r2 >= 0;  /* 0C0ABAC2 cmp/pz Rn */
	if (!T) { UPD(0x0C0ABB90u, 6); goto L_0C0ABB90; }  /* 0C0ABAC4 bf */
L_0C0ABAC6: BLKS(0x0C0ABAC6u);
	r0 = 0x800000u; UPD(0x0C0ABAC8u, 1);  /* 0C0ABAC6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0ABAC8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABAE0u, 4); goto L_0C0ABAE0; } UPD(0x0C0ABACEu, 1); goto L_0C0ABACE; }  /* 0C0ABACA bf/s */
L_0C0ABACE: BLKS(0x0C0ABACEu);
	W32(r3, r1); UPD(0x0C0ABAD0u, 1);  /* 0C0ABACE mov.l Rm,@Rn */
L_0C0ABAD0: BLKS(0x0C0ABAD0u);
	r15 = r14;  /* 0C0ABAD0 mov Rm,Rn */
	IF(0x0C0ABAD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ABAD2 rts */
L_0C0ABAE0: BLKS(0x0C0ABAE0u);
	r7 = r3;  /* 0C0ABAE0 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0ABAE2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ABAE6u, 3);  /* 0C0ABAE4 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0ABAE6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ABAEAu, 2);  /* 0C0ABAE8 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0ABAEA add #imm,Rn */
	r5 = r1 & 0xFF;  /* 0C0ABAEC extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0ABAEE extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0ABAF2u, 4);  /* 0C0ABAF0 mov.b Rm,@Rn */
	T = r5 == r6;  /* 0C0ABAF2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ABB70u, 4); goto L_0C0ABB70; } UPD(0x0C0ABAF8u, 1); goto L_0C0ABAF8; }  /* 0C0ABAF4 bt/s */
L_0C0ABAF8: BLKS(0x0C0ABAF8u);
	r3 = 0x38u;  /* 0C0ABAF8 mov #imm,Rn */
	IF(0x0C0ABAFAu); MACL = r4 * r3;  /* 0C0ABAFA mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0ABAFEu, 4);  /* 0C0ABAFC mov.l @(disp,pc),Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ABB00u, 1);  /* 0C0ABAFE mov.l @(disp,pc),Rn */
	IF(0x0C0ABB00u); r3 = MACL;  /* 0C0ABB00 sts macl,Rn */
	r3 += r4;  /* 0C0ABB02 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0ABB06u, 3);  /* 0C0ABB04 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0ABB06 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABB60u, 4); goto L_0C0ABB60; } goto L_0C0ABB0C; }  /* 0C0ABB08 bf/s */
L_0C0ABB0C: BLKS(0x0C0ABB0Cu);
	r1 += 0x30u;  /* 0C0ABB0C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0ABB10u, 3);  /* 0C0ABB0E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0ABB10 add #imm,Rn */
	r6 = r0 & 0xFF;  /* 0C0ABB12 extu.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0ABB14 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0ABB18u, 4);  /* 0C0ABB16 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABB18u); r6 = T;  /* 0C0ABB18 movt Rn */
	IF(0x0C0ABB1Au); T = (s32)r2 >= 0;  /* 0C0ABB1A cmp/pz Rn */
	{ u32 c_ = !T; W8(r1, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABB50u, 5); goto L_0C0ABB50; } UPD(0x0C0ABB20u, 1); goto L_0C0ABB20; }  /* 0C0ABB1C bf/s */
L_0C0ABB20: BLKS(0x0C0ABB20u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0ABB22u, 1);  /* 0C0ABB20 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABB22u); T = (s32)r1 >= 0;  /* 0C0ABB22 cmp/pz Rn */
	if (!T) { UPD(0x0C0ABB40u, 4); goto L_0C0ABB40; }  /* 0C0ABB24 bf */
L_0C0ABB26: BLKS(0x0C0ABB26u);
	r4 = 0xFFFFu; UPD(0x0C0ABB28u, 1);  /* 0C0ABB26 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0ABB28 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0ABB2A cmp/ge Rm,Rn */
	IF(0x0C0ABB2Cu); r2 = T;  /* 0C0ABB2C movt Rn */
	r6 |= r2;  /* 0C0ABB2E or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0ABB30 tst Rm,Rn */
	if (T) { UPD(0x0C0ABAD0u, 8); goto L_0C0ABAD0; }  /* 0C0ABB32 bt */
L_0C0ABB34: BLKS(0x0C0ABB34u);
	r7 |= r5;  /* 0C0ABB34 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABAD0u, 4); goto L_0C0ABAD0; }  /* 0C0ABB36 bra */
L_0C0ABB40: BLKS(0x0C0ABB40u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0ABB26u, 3); goto L_0C0ABB26; }  /* 0C0ABB40 bra */
L_0C0ABB50: BLKS(0x0C0ABB50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABB20u, 3); goto L_0C0ABB20; }  /* 0C0ABB50 bra */
L_0C0ABB60: BLKS(0x0C0ABB60u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0ABB62u, 1);  /* 0C0ABB60 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0ABB62 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0ABB64 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0ABB66 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABACEu, 6); goto L_0C0ABACE; } UPD(0x0C0ABB6Cu, 1); goto L_0C0ABB6C; }  /* 0C0ABB68 bt/s */
L_0C0ABB6C: BLKS(0x0C0ABB6Cu);
	{ IF(0x0C0ABB6Eu); ; /* slot nop */ UPD(0x0C0ABAD0u, 3); goto L_0C0ABAD0; }  /* 0C0ABB6C bra */
L_0C0ABB70: BLKS(0x0C0ABB70u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0ABB72u, 1);  /* 0C0ABB70 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0ABB72 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0ABB74 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0ABB78u, 3);  /* 0C0ABB76 mov.b Rm,@Rn */
	T = r0 == 0xCu;  /* 0C0ABB78 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABAF8u, 4); goto L_0C0ABAF8; } UPD(0x0C0ABB7Eu, 1); goto L_0C0ABB7E; }  /* 0C0ABB7A bf/s */
L_0C0ABB7E: BLKS(0x0C0ABB7Eu);
	r7 = 0x0u;  /* 0C0ABB7E mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABAF8u, 4); goto L_0C0ABAF8; }  /* 0C0ABB80 bra */
L_0C0ABB90: BLKS(0x0C0ABB90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABAC6u, 3); goto L_0C0ABAC6; }  /* 0C0ABB90 bra */
L_0C0ABBA0: BLKS(0x0C0ABBA0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0ABAAEu, 3); goto L_0C0ABAAE; }  /* 0C0ABBA0 bra */
L_0C0ABBB0: BLKS(0x0C0ABBB0u);
	{ r5 = r1; /* slot mov Rm,Rn */ UPD(0x0C0ABA78u, 3); goto L_0C0ABA78; }  /* 0C0ABBB0 bra */
L_0C0ABBC0: BLKS(0x0C0ABBC0u);
	{ r5 = R32(r3 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0ABA62u, 3); goto L_0C0ABA62; }  /* 0C0ABBC0 bra */
}

void f_0C0ABBF0(sh3_t *c)
{
	LOCALS;
L_0C0ABBF0: BLKS(0x0C0ABBF0u);
	r0 = 0x38u;  /* 0C0ABBF0 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABBF2 exts.w Rm,Rn */
	IF(0x0C0ABBF4u); MACL = r4 * r0;  /* 0C0ABBF4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF8u, 5);  /* 0C0ABBF6 mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ABBFAu, 1);  /* 0C0ABBF8 mov.l @(disp,pc),Rn */
	IF(0x0C0ABBFAu); r3 = MACL;  /* 0C0ABBFA sts macl,Rn */
	r3 += r0;  /* 0C0ABBFC add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0ABC00u, 3);  /* 0C0ABBFE mov.l @(disp,Rm),Rn */
	IF(0x0C0ABC00u); T = (s32)r1 >= 0;  /* 0C0ABC00 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABC0Au, 4); goto L_0C0ABC0A; } goto L_0C0ABC06; }  /* 0C0ABC02 bt/s */
L_0C0ABC06: BLKS(0x0C0ABC06u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0ABD70u, 4); goto L_0C0ABD70; }  /* 0C0ABC06 bra */
L_0C0ABC0A: BLKS(0x0C0ABC0Au);
	r6 = 0xFFFFFFFCu;  /* 0C0ABC0A mov #imm,Rn */
	UPD(0x0C0ABC0Cu, 1);
L_0C0ABC0C: BLKS(0x0C0ABC0Cu);
	IF(0x0C0ABC0Cu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0ABC0C shad Rm,Rn */
	r7 = 0xFu;  /* 0C0ABC0E mov #imm,Rn */
	IF(0x0C0ABC10u); MACL = r1 * r7;  /* 0C0ABC10 mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0ABC14u, 5);  /* 0C0ABC12 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABC14u); r0 = MACL;  /* 0C0ABC14 sts macl,Rn */
	IF(0x0C0ABC16u); T = (s32)r1 >= 0;  /* 0C0ABC16 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABC20u, 5); goto L_0C0ABC20; } UPD(0x0C0ABC1Cu, 1); goto L_0C0ABC1C; }  /* 0C0ABC18 bt/s */
L_0C0ABC1C: BLKS(0x0C0ABC1Cu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0ABD60u, 3); goto L_0C0ABD60; }  /* 0C0ABC1C bra */
L_0C0ABC20: BLKS(0x0C0ABC20u);
	IF(0x0C0ABC20u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0ABC20 shad Rm,Rn */
	UPD(0x0C0ABC22u, 1);
L_0C0ABC22: BLKS(0x0C0ABC22u);
	IF(0x0C0ABC22u); MACL = r1 * r7;  /* 0C0ABC22 mul.l Rm,Rn */
	r2 = 0xC220C2Cu; UPD(0x0C0ABC26u, 3);  /* 0C0ABC24 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC26u); r5 = MACL;  /* 0C0ABC26 sts macl,Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0ABC2Au, 2);  /* 0C0ABC28 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0ABC2Cu, 1);  /* 0C0ABC2A mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0ABC2Eu, 1);  /* 0C0ABC2C mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0ABC2E sub Rm,Rn */
	IF(0x0C0ABC30u); T = (s32)r1 >= 0;  /* 0C0ABC30 cmp/pz Rn */
	if (T) { UPD(0x0C0ABC3Au, 5); goto L_0C0ABC3A; }  /* 0C0ABC32 bt */
L_0C0ABC34: BLKS(0x0C0ABC34u);
	r1 += 0xFu;  /* 0C0ABC34 add #imm,Rn */
	{ IF(0x0C0ABC38u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0ABC3Cu, 4); goto L_0C0ABC3C; }  /* 0C0ABC36 bra */
L_0C0ABC3A: BLKS(0x0C0ABC3Au);
	IF(0x0C0ABC3Au); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0ABC3A shad Rm,Rn */
	UPD(0x0C0ABC3Cu, 1);
L_0C0ABC3C: BLKS(0x0C0ABC3Cu);
	IF(0x0C0ABC3Cu); MACL = r1 * r7;  /* 0C0ABC3C mul.l Rm,Rn */
	IF(0x0C0ABC3Eu); r6 = MACL;  /* 0C0ABC3E sts macl,Rn */
	r6 += r2;  /* 0C0ABC40 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0ABC44u, 5);  /* 0C0ABC42 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0ABC46u, 1);  /* 0C0ABC44 mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C0ABC46 add Rm,Rn */
	r2 -= r6;  /* 0C0ABC48 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0ABC4Cu, 3);  /* 0C0ABC4A mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0ABC4Eu, 1);  /* 0C0ABC4C mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0ABC4E add Rm,Rn */
	r7 += r2;  /* 0C0ABC50 add Rm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0ABC54u, 3);  /* 0C0ABC52 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABC54u); T = (s32)r7 >= 0;  /* 0C0ABC54 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABD50u, 4); goto L_0C0ABD50; } UPD(0x0C0ABC5Au, 1); goto L_0C0ABC5A; }  /* 0C0ABC56 bf/s */
L_0C0ABC5A: BLKS(0x0C0ABC5Au);
	r5 = 0xA80000u; UPD(0x0C0ABC5Cu, 1);  /* 0C0ABC5A mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0ABC5C cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABC7Au, 4); goto L_0C0ABC7A; } goto L_0C0ABC62; }  /* 0C0ABC5E bt/s */
L_0C0ABC62: BLKS(0x0C0ABC62u);
	r2 = 0xC3929E0u; UPD(0x0C0ABC64u, 2);  /* 0C0ABC62 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0ABC66u, 1);  /* 0C0ABC64 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0ABC68u, 1);  /* 0C0ABC66 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0ABC68 mov Rm,Rn */
	r2 -= r0;  /* 0C0ABC6A sub Rm,Rn */
	r2 += r7;  /* 0C0ABC6C add Rm,Rn */
	IF(0x0C0ABC6Eu); T = (s32)r2 >= 0;  /* 0C0ABC6E cmp/pz Rn */
	if (!T) { UPD(0x0C0ABD40u, 7); goto L_0C0ABD40; }  /* 0C0ABC70 bf */
L_0C0ABC72: BLKS(0x0C0ABC72u);
	r6 = 0x800000u; UPD(0x0C0ABC74u, 1);  /* 0C0ABC72 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0ABC74 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABC90u, 4); goto L_0C0ABC90; } UPD(0x0C0ABC7Au, 1); goto L_0C0ABC7A; }  /* 0C0ABC76 bf/s */
L_0C0ABC7A: BLKS(0x0C0ABC7Au);
	W32(r3, r1); UPD(0x0C0ABC7Cu, 1);  /* 0C0ABC7A mov.l Rm,@Rn */
L_0C0ABC7C: BLKS(0x0C0ABC7Cu);
	r15 = r14;  /* 0C0ABC7C mov Rm,Rn */
	IF(0x0C0ABC7Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ABC7E rts */
L_0C0ABC90: BLKS(0x0C0ABC90u);
	r7 = r3;  /* 0C0ABC90 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0ABC92 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ABC96u, 3);  /* 0C0ABC94 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0ABC96 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ABC9Au, 2);  /* 0C0ABC98 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0ABC9A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0ABC9C extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0ABC9E extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0ABCA2u, 4);  /* 0C0ABCA0 mov.b Rm,@Rn */
	T = r0 == r5;  /* 0C0ABCA2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ABD20u, 4); goto L_0C0ABD20; } UPD(0x0C0ABCA8u, 1); goto L_0C0ABCA8; }  /* 0C0ABCA4 bt/s */
L_0C0ABCA8: BLKS(0x0C0ABCA8u);
	r3 = 0x38u;  /* 0C0ABCA8 mov #imm,Rn */
	IF(0x0C0ABCAAu); MACL = r4 * r3;  /* 0C0ABCAA mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0ABCAEu, 4);  /* 0C0ABCAC mov.l @(disp,pc),Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ABCB0u, 1);  /* 0C0ABCAE mov.l @(disp,pc),Rn */
	IF(0x0C0ABCB0u); r3 = MACL;  /* 0C0ABCB0 sts macl,Rn */
	r3 += r4;  /* 0C0ABCB2 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0ABCB6u, 3);  /* 0C0ABCB4 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0ABCB6 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABD10u, 4); goto L_0C0ABD10; } goto L_0C0ABCBC; }  /* 0C0ABCB8 bf/s */
L_0C0ABCBC: BLKS(0x0C0ABCBCu);
	r1 += 0x30u;  /* 0C0ABCBC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0ABCC0u, 3);  /* 0C0ABCBE mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0ABCC0 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0ABCC2 extu.b Rm,Rn */
	W8(r1, r6); UPD(0x0C0ABCC6u, 3);  /* 0C0ABCC4 mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0ABCC6 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0ABCCAu, 2);  /* 0C0ABCC8 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABCCAu); r6 = T;  /* 0C0ABCCA movt Rn */
	IF(0x0C0ABCCCu); T = (s32)r2 >= 0;  /* 0C0ABCCC cmp/pz Rn */
	if (!T) { UPD(0x0C0ABD00u, 5); goto L_0C0ABD00; }  /* 0C0ABCCE bf */
L_0C0ABCD0: BLKS(0x0C0ABCD0u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0ABCD2u, 1);  /* 0C0ABCD0 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABCD2u); T = (s32)r1 >= 0;  /* 0C0ABCD2 cmp/pz Rn */
	if (!T) { UPD(0x0C0ABCF0u, 4); goto L_0C0ABCF0; }  /* 0C0ABCD4 bf */
L_0C0ABCD6: BLKS(0x0C0ABCD6u);
	r4 = 0xFFFFu; UPD(0x0C0ABCD8u, 1);  /* 0C0ABCD6 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0ABCD8 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0ABCDA cmp/ge Rm,Rn */
	IF(0x0C0ABCDCu); r2 = T;  /* 0C0ABCDC movt Rn */
	r6 |= r2;  /* 0C0ABCDE or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0ABCE0 tst Rm,Rn */
	if (T) { UPD(0x0C0ABC7Cu, 8); goto L_0C0ABC7C; }  /* 0C0ABCE2 bt */
L_0C0ABCE4: BLKS(0x0C0ABCE4u);
	r7 |= r5;  /* 0C0ABCE4 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABC7Cu, 4); goto L_0C0ABC7C; }  /* 0C0ABCE6 bra */
L_0C0ABCF0: BLKS(0x0C0ABCF0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0ABCD6u, 3); goto L_0C0ABCD6; }  /* 0C0ABCF0 bra */
L_0C0ABD00: BLKS(0x0C0ABD00u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABCD0u, 3); goto L_0C0ABCD0; }  /* 0C0ABD00 bra */
L_0C0ABD10: BLKS(0x0C0ABD10u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0ABD12u, 1);  /* 0C0ABD10 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0ABD12 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0ABD14 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0ABD16 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABC7Au, 6); goto L_0C0ABC7A; } UPD(0x0C0ABD1Cu, 1); goto L_0C0ABD1C; }  /* 0C0ABD18 bt/s */
L_0C0ABD1C: BLKS(0x0C0ABD1Cu);
	{ IF(0x0C0ABD1Eu); ; /* slot nop */ UPD(0x0C0ABC7Cu, 3); goto L_0C0ABC7C; }  /* 0C0ABD1C bra */
L_0C0ABD20: BLKS(0x0C0ABD20u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0ABD22u, 1);  /* 0C0ABD20 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0ABD22 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0ABD24 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0ABD28u, 3);  /* 0C0ABD26 mov.b Rm,@Rn */
	T = r0 == 0x8u;  /* 0C0ABD28 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABCA8u, 4); goto L_0C0ABCA8; } UPD(0x0C0ABD2Eu, 1); goto L_0C0ABD2E; }  /* 0C0ABD2A bf/s */
L_0C0ABD2E: BLKS(0x0C0ABD2Eu);
	r7 = 0x0u;  /* 0C0ABD2E mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABCA8u, 4); goto L_0C0ABCA8; }  /* 0C0ABD30 bra */
L_0C0ABD40: BLKS(0x0C0ABD40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABC72u, 3); goto L_0C0ABC72; }  /* 0C0ABD40 bra */
L_0C0ABD50: BLKS(0x0C0ABD50u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0ABC5Au, 3); goto L_0C0ABC5A; }  /* 0C0ABD50 bra */
L_0C0ABD60: BLKS(0x0C0ABD60u);
	{ IF(0x0C0ABD62u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0ABC22u, 3); goto L_0C0ABC22; }  /* 0C0ABD60 bra */
L_0C0ABD70: BLKS(0x0C0ABD70u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0ABC0Cu, 3); goto L_0C0ABC0C; }  /* 0C0ABD70 bra */
}

void f_0C0ABDA0(sh3_t *c)
{
	LOCALS;
L_0C0ABDA0: BLKS(0x0C0ABDA0u);
	r0 = 0x38u;  /* 0C0ABDA0 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABDA2 exts.w Rm,Rn */
	IF(0x0C0ABDA4u); MACL = r4 * r0;  /* 0C0ABDA4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABDA8u, 5);  /* 0C0ABDA6 mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ABDAAu, 1);  /* 0C0ABDA8 mov.l @(disp,pc),Rn */
	IF(0x0C0ABDAAu); r2 = MACL;  /* 0C0ABDAA sts macl,Rn */
	r2 += r0;  /* 0C0ABDAC add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C0ABDB0u, 3);  /* 0C0ABDAE mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C0ABDB0 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0ABDB2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABE42u, 5); goto L_0C0ABE42; } goto L_0C0ABDB8; }  /* 0C0ABDB4 bt/s */
L_0C0ABDB8: BLKS(0x0C0ABDB8u);
	r5 = 0x1u;  /* 0C0ABDB8 mov #imm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0ABDBA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0ABE20u, 6); goto L_0C0ABE20; } goto L_0C0ABDC0; }  /* 0C0ABDBC bt/s */
L_0C0ABDC0: BLKS(0x0C0ABDC0u);
	T = (r3 & r3) == 0;  /* 0C0ABDC0 tst Rm,Rn */
	if (T) { UPD(0x0C0ABDD0u, 5); goto L_0C0ABDD0; }  /* 0C0ABDC2 bt */
L_0C0ABDC4: BLKS(0x0C0ABDC4u);
	r15 = r14;  /* 0C0ABDC4 mov Rm,Rn */
	IF(0x0C0ABDC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ABDC6 rts */
L_0C0ABDD0: BLKS(0x0C0ABDD0u);
	r7 = R32(r2 + 0x28u); UPD(0x0C0ABDD2u, 1);  /* 0C0ABDD0 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0ABDD2 tst Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABDE0u, 4); goto L_0C0ABDE0; } goto L_0C0ABDD8; }  /* 0C0ABDD4 bt/s */
L_0C0ABDD8: BLKS(0x0C0ABDD8u);
	r4 = 0xFFFFF1F2u; UPD(0x0C0ABDDAu, 2);  /* 0C0ABDD8 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C0ABDDA add Rm,Rn */
	W32(r2 + 0x28u, r7); UPD(0x0C0ABDDEu, 2);  /* 0C0ABDDC mov.l Rm,@(disp,Rn) */
	r1 = r2;  /* 0C0ABDDE mov Rm,Rn */
	UPD(0x0C0ABDE0u, 1);
L_0C0ABDE0: BLKS(0x0C0ABDE0u);
	r1 += 0x30u;  /* 0C0ABDE0 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0ABDE4u, 2);  /* 0C0ABDE2 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0ABDE4 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0ABDE6 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0ABDE8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABDC4u, 6); goto L_0C0ABDC4; } UPD(0x0C0ABDEEu, 1); goto L_0C0ABDEE; }  /* 0C0ABDEA bf/s */
L_0C0ABDEE: BLKS(0x0C0ABDEEu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0ABDF0u, 1);  /* 0C0ABDEE mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ABDF0 add #imm,Rn */
	W8(r1, r3); UPD(0x0C0ABDF4u, 2);  /* 0C0ABDF2 mov.b Rm,@Rn */
	T = r0 == 0xAu;  /* 0C0ABDF4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ABE10u, 4); goto L_0C0ABE10; } UPD(0x0C0ABDFAu, 1); goto L_0C0ABDFA; }  /* 0C0ABDF6 bt/s */
L_0C0ABDFA: BLKS(0x0C0ABDFAu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0ABDFCu, 1);  /* 0C0ABDFA mov.l @(disp,Rm),Rn */
L_0C0ABDFC: BLKS(0x0C0ABDFCu);
	T = r0 == 0x10u;  /* 0C0ABDFC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0ABDC4u, 4); goto L_0C0ABDC4; }  /* 0C0ABDFE bf */
L_0C0ABE00: BLKS(0x0C0ABE00u);
	W32(r2, r3); UPD(0x0C0ABE02u, 1);  /* 0C0ABE00 mov.l Rm,@Rn */
	{ IF(0x0C0ABE04u); ; /* slot nop */ UPD(0x0C0ABDC4u, 3); goto L_0C0ABDC4; }  /* 0C0ABE02 bra */
L_0C0ABE10: BLKS(0x0C0ABE10u);
	r5 = 0x204FFFFu; UPD(0x0C0ABE12u, 1);  /* 0C0ABE10 mov.l @(disp,pc),Rn */
	{ W32(r2 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABDFAu, 3); goto L_0C0ABDFA; }  /* 0C0ABE12 bra */
L_0C0ABE20: BLKS(0x0C0ABE20u);
	if (!T) { UPD(0x0C0ABDC4u, 3); goto L_0C0ABDC4; }  /* 0C0ABE20 bf */
L_0C0ABE22: BLKS(0x0C0ABE22u);
	r3 = R32(r2 + 0x18u); UPD(0x0C0ABE24u, 1);  /* 0C0ABE22 mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C0ABE26u, 1);  /* 0C0ABE24 mov.w @(disp,pc),Rn */
	IF(0x0C0ABE26u); MACL = r3 * r6;  /* 0C0ABE26 mul.l Rm,Rn */
	IF(0x0C0ABE28u); r3 = MACL;  /* 0C0ABE28 sts macl,Rn */
	IF(0x0C0ABE2Au); T = (s32)r3 >= 0;  /* 0C0ABE2A cmp/pz Rn */
	if (!T) { UPD(0x0C0ABF10u, 7); goto L_0C0ABF10; }  /* 0C0ABE2C bf */
L_0C0ABE2E: BLKS(0x0C0ABE2Eu);
	r7 = 0xFFFFFFF8u;  /* 0C0ABE2E mov #imm,Rn */
	r0 = R32(r2 + 0x1Cu); UPD(0x0C0ABE32u, 2);  /* 0C0ABE30 mov.l @(disp,Rm),Rn */
	IF(0x0C0ABE32u); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0ABE32 shad Rm,Rn */
	IF(0x0C0ABE34u); MACL = r0 * r6;  /* 0C0ABE34 mul.l Rm,Rn */
	W32(r2 + 0x18u, r3); UPD(0x0C0ABE38u, 4);  /* 0C0ABE36 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABE38u); r3 = MACL;  /* 0C0ABE38 sts macl,Rn */
	IF(0x0C0ABE3Au); T = (s32)r3 >= 0;  /* 0C0ABE3A cmp/pz Rn */
	if (!T) { UPD(0x0C0ABF00u, 5); goto L_0C0ABF00; }  /* 0C0ABE3C bf */
L_0C0ABE3E: BLKS(0x0C0ABE3Eu);
	IF(0x0C0ABE3Eu); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0ABE3E shad Rm,Rn */
	W32(r2 + 0x1Cu, r3); UPD(0x0C0ABE42u, 2);  /* 0C0ABE40 mov.l Rm,@(disp,Rn) */
L_0C0ABE42: BLKS(0x0C0ABE42u);
	r6 = 0x38u;  /* 0C0ABE42 mov #imm,Rn */
	IF(0x0C0ABE44u); MACL = r4 * r6;  /* 0C0ABE44 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ABE48u, 4);  /* 0C0ABE46 mov.l @(disp,pc),Rn */
	IF(0x0C0ABE48u); r3 = MACL;  /* 0C0ABE48 sts macl,Rn */
	r3 += r0;  /* 0C0ABE4A add Rm,Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0ABE4Eu, 3);  /* 0C0ABE4C mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x18u); UPD(0x0C0ABE50u, 1);  /* 0C0ABE4E mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C0ABE50 add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0ABE54u, 2);  /* 0C0ABE52 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0ABE56u, 1);  /* 0C0ABE54 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0ABE58u, 1);  /* 0C0ABE56 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0ABE58 add Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ABE5Cu, 2);  /* 0C0ABE5A mov.l @(disp,pc),Rn */
	IF(0x0C0ABE5Cu); r0 <<= 2;  /* 0C0ABE5C shll2 Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0ABE60u, 2);  /* 0C0ABE5E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r7); UPD(0x0C0ABE62u, 1);  /* 0C0ABE60 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABE62u); r6 = R32(r0 + r2); UPD(0x0C0ABE64u, 1);  /* 0C0ABE62 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ABE66u, 1);  /* 0C0ABE64 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0ABE66 add Rm,Rn */
	IF(0x0C0ABE68u); T = (s32)r2 >= 0;  /* 0C0ABE68 cmp/pz Rn */
	if (!T) { UPD(0x0C0ABEF0u, 5); goto L_0C0ABEF0; }  /* 0C0ABE6A bf */
L_0C0ABE6C: BLKS(0x0C0ABE6Cu);
	r5 = 0xA00000u; UPD(0x0C0ABE6Eu, 1);  /* 0C0ABE6C mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0ABE6E add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ABE70 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABE8Eu, 5); goto L_0C0ABE8E; } goto L_0C0ABE76; }  /* 0C0ABE72 bt/s */
L_0C0ABE76: BLKS(0x0C0ABE76u);
	r2 = 0xC3929E0u; UPD(0x0C0ABE78u, 2);  /* 0C0ABE76 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0ABE7Au, 1);  /* 0C0ABE78 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0ABE7Cu, 1);  /* 0C0ABE7A mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0ABE7C mov Rm,Rn */
	r2 -= r0;  /* 0C0ABE7E sub Rm,Rn */
	r2 += r3;  /* 0C0ABE80 add Rm,Rn */
	IF(0x0C0ABE82u); T = (s32)r2 >= 0;  /* 0C0ABE82 cmp/pz Rn */
	if (!T) { UPD(0x0C0ABEE0u, 7); goto L_0C0ABEE0; }  /* 0C0ABE84 bf */
L_0C0ABE86: BLKS(0x0C0ABE86u);
	r7 = 0x780000u; UPD(0x0C0ABE88u, 1);  /* 0C0ABE86 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0ABE88 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0ABE8A cmp/ge Rm,Rn */
	IF(0x0C0ABE8Cu); r1 = T;  /* 0C0ABE8C movt Rn */
	UPD(0x0C0ABE8Eu, 3);
L_0C0ABE8E: BLKS(0x0C0ABE8Eu);
	r3 = (u32)(s32)(s16)r1;  /* 0C0ABE8E exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0ABE90 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABEB0u, 5); goto L_0C0ABEB0; } goto L_0C0ABE96; }  /* 0C0ABE92 bt/s */
L_0C0ABE96: BLKS(0x0C0ABE96u);
	IF(0x0C0ABE96u); MACL = r4 * r5;  /* 0C0ABE96 mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C0ABE98 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ABE9Cu, 5);  /* 0C0ABE9A mov.l @(disp,pc),Rn */
	IF(0x0C0ABE9Cu); r0 = MACL;  /* 0C0ABE9C sts macl,Rn */
	IF(0x0C0ABE9Eu); W32(r0 + r4, r6); UPD(0x0C0ABEA0u, 2);  /* 0C0ABE9E mov.l Rm,@(r0,Rn) */
L_0C0ABEA0: BLKS(0x0C0ABEA0u);
	{ IF(0x0C0ABEA2u); ; /* slot nop */ UPD(0x0C0ABDC4u, 3); goto L_0C0ABDC4; }  /* 0C0ABEA0 bra */
L_0C0ABEB0: BLKS(0x0C0ABEB0u);
	r2 = 0x38u;  /* 0C0ABEB0 mov #imm,Rn */
	IF(0x0C0ABEB2u); MACL = r4 * r2;  /* 0C0ABEB2 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ABEB6u, 4);  /* 0C0ABEB4 mov.l @(disp,pc),Rn */
	IF(0x0C0ABEB6u); r2 = MACL;  /* 0C0ABEB6 sts macl,Rn */
	r2 += r0;  /* 0C0ABEB8 add Rm,Rn */
	r1 = r2;  /* 0C0ABEBA mov Rm,Rn */
	r1 += 0x30u;  /* 0C0ABEBC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C0ABEC0u, 5);  /* 0C0ABEBE mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0ABEC0 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0ABEC2 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0ABEC4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABEA0u, 6); goto L_0C0ABEA0; } UPD(0x0C0ABECAu, 1); goto L_0C0ABECA; }  /* 0C0ABEC6 bf/s */
L_0C0ABECA: BLKS(0x0C0ABECAu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0ABECCu, 1);  /* 0C0ABECA mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ABECC add #imm,Rn */
	W8(r1, r3); UPD(0x0C0ABED0u, 2);  /* 0C0ABECE mov.b Rm,@Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ABDFCu, 3); goto L_0C0ABDFC; }  /* 0C0ABED0 bra */
L_0C0ABEE0: BLKS(0x0C0ABEE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABE86u, 3); goto L_0C0ABE86; }  /* 0C0ABEE0 bra */
L_0C0ABEF0: BLKS(0x0C0ABEF0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ABE6Cu, 3); goto L_0C0ABE6C; }  /* 0C0ABEF0 bra */
L_0C0ABF00: BLKS(0x0C0ABF00u);
	r6 = 0xFFu; UPD(0x0C0ABF02u, 1);  /* 0C0ABF00 mov.w @(disp,pc),Rn */
	{ r3 += r6; /* slot add Rm,Rn */ UPD(0x0C0ABE3Eu, 3); goto L_0C0ABE3E; }  /* 0C0ABF02 bra */
L_0C0ABF10: BLKS(0x0C0ABF10u);
	r7 = 0xFFu; UPD(0x0C0ABF12u, 1);  /* 0C0ABF10 mov.w @(disp,pc),Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C0ABE2Eu, 3); goto L_0C0ABE2E; }  /* 0C0ABF12 bra */
}

/* FUN_0c0ac3b0 */
void f_0C0AC3B0(sh3_t *c)
{
	LOCALS;
L_0C0AC3B0: BLKS(0x0C0AC3B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3B2u, 1);  /* 0C0AC3B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3B4u, 1);  /* 0C0AC3B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3B6u, 1);  /* 0C0AC3B4 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AC3B6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3BAu, 2);  /* 0C0AC3B8 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0AC3BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3BEu, 2);  /* 0C0AC3BC mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0AC3BE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3C2u, 2);  /* 0C0AC3C0 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0AC3C2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC3C6u, 2);  /* 0C0AC3C4 mov.l Rm,@-Rn */
	IF(0x0C0AC3C6u); r12 <<= 2;  /* 0C0AC3C6 shll2 Rn */
	IF(0x0C0AC3C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC3CAu, 2);  /* 0C0AC3C8 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC3CA add #imm,Rn */
	r14 = r15;  /* 0C0AC3CC mov Rm,Rn */
	r3 = R32(r14 + 0x28u); UPD(0x0C0AC3D0u, 3);  /* 0C0AC3CE mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)r3;  /* 0C0AC3D0 exts.b Rm,Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0AC3D4u, 2);  /* 0C0AC3D2 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0AC3D6u, 1);  /* 0C0AC3D4 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s8)r0;  /* 0C0AC3D6 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC3DAu, 2);  /* 0C0AC3D8 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC3DA mov Rm,Rn */
	IF(0x0C0AC3DCu); r3 = R32(r0 + r2); UPD(0x0C0AC3DEu, 2);  /* 0C0AC3DC mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC3E0u, 1);  /* 0C0AC3DE mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC3E0 add Rm,Rn */
	IF(0x0C0AC3E2u); T = (s32)r2 >= 0;  /* 0C0AC3E2 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AC3ECu, 5); goto L_0C0AC3EC; } UPD(0x0C0AC3E8u, 1); goto L_0C0AC3E8; }  /* 0C0AC3E4 bt/s */
L_0C0AC3E8: BLKS(0x0C0AC3E8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC4F0u, 3); goto L_0C0AC4F0; }  /* 0C0AC3E8 bra */
L_0C0AC3EC: BLKS(0x0C0AC3ECu);
	r4 = 0xA00000u; UPD(0x0C0AC3EEu, 1);  /* 0C0AC3EC mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0AC3EE add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0AC3F0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC40Eu, 5); goto L_0C0AC40E; } goto L_0C0AC3F6; }  /* 0C0AC3F2 bt/s */
L_0C0AC3F6: BLKS(0x0C0AC3F6u);
	r7 = 0xC3929E0u; UPD(0x0C0AC3F8u, 2);  /* 0C0AC3F6 mov.l @(disp,pc),Rn */
	r2 = r11;  /* 0C0AC3F8 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AC3FCu, 2);  /* 0C0AC3FA mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0AC3FEu, 1);  /* 0C0AC3FC mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0AC3FE sub Rm,Rn */
	r2 += r5;  /* 0C0AC400 add Rm,Rn */
	IF(0x0C0AC402u); T = (s32)r2 >= 0;  /* 0C0AC402 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC4E0u, 6); goto L_0C0AC4E0; }  /* 0C0AC404 bf */
L_0C0AC406: BLKS(0x0C0AC406u);
	r8 = 0x780000u; UPD(0x0C0AC408u, 1);  /* 0C0AC406 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0AC408 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC40A cmp/ge Rm,Rn */
	IF(0x0C0AC40Cu); r1 = T;  /* 0C0AC40C movt Rn */
	UPD(0x0C0AC40Eu, 3);
L_0C0AC40E: BLKS(0x0C0AC40Eu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC40E exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC410 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC430u, 5); goto L_0C0AC430; } UPD(0x0C0AC416u, 1); goto L_0C0AC416; }  /* 0C0AC412 bt/s */
L_0C0AC416: BLKS(0x0C0AC416u);
	r14 += 0x8u;  /* 0C0AC416 add #imm,Rn */
	r15 = r14;  /* 0C0AC418 mov Rm,Rn */
	IF(0x0C0AC41Au); PR = R32(r15); r15 += 4; UPD(0x0C0AC41Cu, 3);  /* 0C0AC41A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC41Eu, 1);  /* 0C0AC41C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC420u, 1);  /* 0C0AC41E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC422u, 1);  /* 0C0AC420 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC424u, 1);  /* 0C0AC422 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC426u, 1);  /* 0C0AC424 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC428u, 1);  /* 0C0AC426 mov.l @Rm+,Rn */
	IF(0x0C0AC428u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC428 rts */
L_0C0AC430: BLKS(0x0C0AC430u);
	r0 = 0xC0AA550u; UPD(0x0C0AC432u, 1);  /* 0C0AC430 mov.l @(disp,pc),Rn */
	IF(0x0C0AC432u); { u32 t_ = r0; PR = 0x0C0AC436u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC436u); }  /* 0C0AC432 jsr @Rn */
L_0C0AC436: BLKS(0x0C0AC436u);
	T = (r0 & r0) == 0;  /* 0C0AC436 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC416u, 4); goto L_0C0AC416; } goto L_0C0AC43C; }  /* 0C0AC438 bt/s */
L_0C0AC43C: BLKS(0x0C0AC43Cu);
	r0 = 0xC2755BCu; UPD(0x0C0AC43Eu, 2);  /* 0C0AC43C mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0AC43E mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AC442u, 2);  /* 0C0AC440 mov.w @Rm,Rn */
	r4 = 0x1u;  /* 0C0AC442 mov #imm,Rn */
	IF(0x0C0AC444u); MACL = r7 * r3;  /* 0C0AC444 mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C0AC448u, 4);  /* 0C0AC446 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC448 add #imm,Rn */
	r6 = 0xC275E1Cu; UPD(0x0C0AC44Cu, 2);  /* 0C0AC44A mov.l @(disp,pc),Rn */
	IF(0x0C0AC44Cu); r3 = MACL;  /* 0C0AC44C sts macl,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC450u, 2);  /* 0C0AC44E mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0AC450 and #imm,r0 */
	r3 += r6;  /* 0C0AC452 add Rm,Rn */
	r0 |= r5;  /* 0C0AC454 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0AC458u, 4);  /* 0C0AC456 mov.l Rm,@Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C0AC45Au, 1);  /* 0C0AC458 mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x34u); UPD(0x0C0AC45Cu, 1);  /* 0C0AC45A mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AC45Eu, 1);  /* 0C0AC45C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r4); UPD(0x0C0AC460u, 1);  /* 0C0AC45E mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC460 add Rm,Rn */
	W32(r3 + 0x10u, r10); UPD(0x0C0AC464u, 2);  /* 0C0AC462 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r11); UPD(0x0C0AC466u, 1);  /* 0C0AC464 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r2); UPD(0x0C0AC468u, 1);  /* 0C0AC466 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r0); UPD(0x0C0AC46Au, 1);  /* 0C0AC468 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0AC46Cu, 1);  /* 0C0AC46A mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0AC46C mov #imm,Rn */
	r3 += 0x30u;  /* 0C0AC46E add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AC472u, 3);  /* 0C0AC470 mov.b Rm,@Rn */
	IF(0x0C0AC472u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC474u, 1);  /* 0C0AC472 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0AC474 add #imm,Rn */
	W8(r3, r7); UPD(0x0C0AC478u, 2);  /* 0C0AC476 mov.b Rm,@Rn */
	r0 = r12;  /* 0C0AC478 mov Rm,Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0AC47Cu, 2);  /* 0C0AC47A mov.b Rm,@-Rn */
	r6 = 0xC1EEC7Cu; UPD(0x0C0AC47Eu, 1);  /* 0C0AC47C mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AC47E add #imm,Rn */
	IF(0x0C0AC480u); r5 = R32(r0 + r6); UPD(0x0C0AC482u, 2);  /* 0C0AC480 mov.l @(r0,Rm),Rn */
	r4 = 0x808080u; UPD(0x0C0AC484u, 1);  /* 0C0AC482 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0AC484 mov Rm,Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0AC488u, 2);  /* 0C0AC486 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x2Cu, r4); UPD(0x0C0AC48Au, 1);  /* 0C0AC488 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C0AC48A mov Rm,Rn */
	r12 = 0xC1EEB80u; UPD(0x0C0AC48Eu, 2);  /* 0C0AC48C mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C0AC490u, 1);  /* 0C0AC48E mov.l Rm,@Rn */
	r12 += r9;  /* 0C0AC490 add Rm,Rn */
	r0 = 0xC0AABB0u; UPD(0x0C0AC494u, 2);  /* 0C0AC492 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C0AC496u, 1);  /* 0C0AC494 mov.w @Rm,Rn */
	r4 = R32(r14); UPD(0x0C0AC498u, 1);  /* 0C0AC496 mov.l @Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AC49Au, 1);  /* 0C0AC498 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC49Au); { u32 t_ = r0; PR = 0x0C0AC49Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0AC49Eu); }  /* 0C0AC49A jsr @Rn */
L_0C0AC49E: BLKS(0x0C0AC49Eu);
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C0AC4A0u, 1);  /* 0C0AC49E mov.w @Rm,Rn */
	r6 = r13;  /* 0C0AC4A0 mov Rm,Rn */
	r13 = 0xC0AAFE0u; UPD(0x0C0AC4A4u, 2);  /* 0C0AC4A2 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0AC4A4 add Rm,Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AC4A8u, 2);  /* 0C0AC4A6 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0AC4A8 mov Rm,Rn */
	r4 = r10;  /* 0C0AC4AA mov Rm,Rn */
	r15 += 0x8u;  /* 0C0AC4AC add #imm,Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AC4B0u, 4);  /* 0C0AC4AE mov.l @(disp,pc),Rn */
	IF(0x0C0AC4B0u); { u32 t_ = r13; PR = 0x0C0AC4B4u; r7 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0AC4B4u); }  /* 0C0AC4B0 jsr @Rn */
L_0C0AC4B4: BLKS(0x0C0AC4B4u);
	IF(0x0C0AC4B4u); { u32 t_ = r12; PR = 0x0C0AC4B8u; r11 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC4B8u); }  /* 0C0AC4B4 jsr @Rn */
L_0C0AC4B8: BLKS(0x0C0AC4B8u);
	r0 &= 0x1u;  /* 0C0AC4B8 and #imm,r0 */
	IF(0x0C0AC4BAu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AC4BCu, 2);  /* 0C0AC4BA mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AC4BC mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AC4BE extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AC4C0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC4D0u, 6); goto L_0C0AC4D0; }  /* 0C0AC4C2 bt */
L_0C0AC4C4: BLKS(0x0C0AC4C4u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC416u, 3); goto L_0C0AC416; }  /* 0C0AC4C4 bra */
L_0C0AC4D0: BLKS(0x0C0AC4D0u);
	r8 = 0xC0AFC10u; UPD(0x0C0AC4D2u, 1);  /* 0C0AC4D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC4D2u); { u32 t_ = r8; PR = 0x0C0AC4D6u; IF(0x0C0AC4D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC4D6u); }  /* 0C0AC4D2 jsr @Rn */
L_0C0AC4D6: BLKS(0x0C0AC4D6u);
	{ IF(0x0C0AC4D8u); ; /* slot nop */ UPD(0x0C0AC4C4u, 3); goto L_0C0AC4C4; }  /* 0C0AC4D6 bra */
L_0C0AC4E0: BLKS(0x0C0AC4E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC406u, 3); goto L_0C0AC406; }  /* 0C0AC4E0 bra */
L_0C0AC4F0: BLKS(0x0C0AC4F0u);
	{ IF(0x0C0AC4F2u); ; /* slot nop */ UPD(0x0C0AC3ECu, 3); goto L_0C0AC3EC; }  /* 0C0AC4F0 bra */
}

/* FUN_0c0ac540 */
void f_0C0AC540(sh3_t *c)
{
	LOCALS;
L_0C0AC540: BLKS(0x0C0AC540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC542u, 1);  /* 0C0AC540 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC544u, 1);  /* 0C0AC542 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC546u, 1);  /* 0C0AC544 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AC546 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC54Au, 2);  /* 0C0AC548 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0AC54A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC54Eu, 2);  /* 0C0AC54C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AC54E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC552u, 2);  /* 0C0AC550 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0AC552 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC556u, 2);  /* 0C0AC554 mov.l Rm,@-Rn */
	IF(0x0C0AC556u); r12 <<= 2;  /* 0C0AC556 shll2 Rn */
	IF(0x0C0AC558u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC55Au, 2);  /* 0C0AC558 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC55A add #imm,Rn */
	r14 = r15;  /* 0C0AC55C mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AC560u, 3);  /* 0C0AC55E mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AC562u, 1);  /* 0C0AC560 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AC562 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AC564 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AC568u, 3);  /* 0C0AC566 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC56Au, 1);  /* 0C0AC568 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC56A mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AC56Eu, 2);  /* 0C0AC56C mov.l Rm,@Rn */
	IF(0x0C0AC56Eu); r3 = R32(r0 + r2); UPD(0x0C0AC570u, 1);  /* 0C0AC56E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC572u, 1);  /* 0C0AC570 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC572 add Rm,Rn */
	IF(0x0C0AC574u); T = (s32)r2 >= 0;  /* 0C0AC574 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AC660u, 5); goto L_0C0AC660; } UPD(0x0C0AC57Au, 1); goto L_0C0AC57A; }  /* 0C0AC576 bf/s */
L_0C0AC57A: BLKS(0x0C0AC57Au);
	r5 = 0xA00000u; UPD(0x0C0AC57Cu, 1);  /* 0C0AC57A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AC57C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AC57E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC59Cu, 5); goto L_0C0AC59C; } goto L_0C0AC584; }  /* 0C0AC580 bt/s */
L_0C0AC584: BLKS(0x0C0AC584u);
	r8 = 0xC3929E0u; UPD(0x0C0AC586u, 2);  /* 0C0AC584 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0AC586 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AC58Au, 2);  /* 0C0AC588 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC58Cu, 1);  /* 0C0AC58A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC58C sub Rm,Rn */
	r2 += r6;  /* 0C0AC58E add Rm,Rn */
	IF(0x0C0AC590u); T = (s32)r2 >= 0;  /* 0C0AC590 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC650u, 6); goto L_0C0AC650; }  /* 0C0AC592 bf */
L_0C0AC594: BLKS(0x0C0AC594u);
	r0 = 0x780000u; UPD(0x0C0AC596u, 1);  /* 0C0AC594 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AC596 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC598 cmp/ge Rm,Rn */
	IF(0x0C0AC59Au); r1 = T;  /* 0C0AC59A movt Rn */
	UPD(0x0C0AC59Cu, 3);
L_0C0AC59C: BLKS(0x0C0AC59Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC59C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC59E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC5C0u, 5); goto L_0C0AC5C0; } UPD(0x0C0AC5A4u, 1); goto L_0C0AC5A4; }  /* 0C0AC5A0 bt/s */
L_0C0AC5A4: BLKS(0x0C0AC5A4u);
	r14 += 0x8u;  /* 0C0AC5A4 add #imm,Rn */
	UPD(0x0C0AC5A6u, 1);
L_0C0AC5A6: BLKS(0x0C0AC5A6u);
	r15 = r14;  /* 0C0AC5A6 mov Rm,Rn */
	IF(0x0C0AC5A8u); PR = R32(r15); r15 += 4; UPD(0x0C0AC5AAu, 2);  /* 0C0AC5A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC5ACu, 1);  /* 0C0AC5AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC5AEu, 1);  /* 0C0AC5AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC5B0u, 1);  /* 0C0AC5AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC5B2u, 1);  /* 0C0AC5B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC5B4u, 1);  /* 0C0AC5B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC5B6u, 1);  /* 0C0AC5B4 mov.l @Rm+,Rn */
	IF(0x0C0AC5B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC5B6 rts */
L_0C0AC5C0: BLKS(0x0C0AC5C0u);
	r0 = 0xC0AA550u; UPD(0x0C0AC5C2u, 1);  /* 0C0AC5C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC5C2u); { u32 t_ = r0; PR = 0x0C0AC5C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC5C6u); }  /* 0C0AC5C2 jsr @Rn */
L_0C0AC5C6: BLKS(0x0C0AC5C6u);
	T = (r0 & r0) == 0;  /* 0C0AC5C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC5A4u, 4); goto L_0C0AC5A4; } goto L_0C0AC5CC; }  /* 0C0AC5C8 bt/s */
L_0C0AC5CC: BLKS(0x0C0AC5CCu);
	r7 = 0xC2755BCu; UPD(0x0C0AC5CEu, 2);  /* 0C0AC5CC mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0AC5CE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AC5D2u, 2);  /* 0C0AC5D0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC5D2 mov #imm,Rn */
	IF(0x0C0AC5D4u); MACL = r6 * r3;  /* 0C0AC5D4 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC5D8u, 4);  /* 0C0AC5D6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AC5D8 and Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0AC5DCu, 2);  /* 0C0AC5DA mov.l @(disp,pc),Rn */
	IF(0x0C0AC5DCu); r3 = MACL;  /* 0C0AC5DC sts macl,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0AC5E0u, 2);  /* 0C0AC5DE mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0AC5E0 add Rm,Rn */
	r6 = R32(r14 + 0x34u); UPD(0x0C0AC5E4u, 2);  /* 0C0AC5E2 mov.l @(disp,Rm),Rn */
	r2 |= r10;  /* 0C0AC5E4 or Rm,Rn */
	r0 = 0x1u;  /* 0C0AC5E6 mov #imm,Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AC5EAu, 3);  /* 0C0AC5E8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r0); UPD(0x0C0AC5ECu, 1);  /* 0C0AC5EA mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC5EC add Rm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AC5F0u, 2);  /* 0C0AC5EE mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0AC5F0 mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0AC5F4u, 2);  /* 0C0AC5F2 mov.l Rm,@(disp,Rn) */
	W32(r3, r2); UPD(0x0C0AC5F6u, 1);  /* 0C0AC5F4 mov.l Rm,@Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0AC5F8u, 1);  /* 0C0AC5F6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r7); UPD(0x0C0AC5FAu, 1);  /* 0C0AC5F8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C0AC5FCu, 1);  /* 0C0AC5FA mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AC5FC add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AC600u, 2);  /* 0C0AC5FE mov.b Rm,@Rn */
	IF(0x0C0AC600u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC602u, 1);  /* 0C0AC600 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0AC602 add #imm,Rn */
	W8(r3, r1); UPD(0x0C0AC606u, 2);  /* 0C0AC604 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC606 mov #imm,Rn */
	IF(0x0C0AC608u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC60Au, 2);  /* 0C0AC608 mov.b @(r0,Rm),Rn */
	r4 = 0xC1EECC4u; UPD(0x0C0AC60Cu, 1);  /* 0C0AC60A mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC60C mov Rm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C0AC610u, 2);  /* 0C0AC60E mov.b Rm,@-Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AC612u, 1);  /* 0C0AC610 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AC612 add #imm,Rn */
	IF(0x0C0AC614u); r2 = R32(r0 + r4); UPD(0x0C0AC616u, 2);  /* 0C0AC614 mov.l @(r0,Rm),Rn */
	r13 = 0x808080u; UPD(0x0C0AC618u, 1);  /* 0C0AC616 mov.l @(disp,pc),Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AC61Au, 1);  /* 0C0AC618 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0AC61Cu, 1);  /* 0C0AC61A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0AC61C add Rm,Rn */
	IF(0x0C0AC61Eu); { u32 t_ = r12; PR = 0x0C0AC622u; W32(r3 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC622u); }  /* 0C0AC61E jsr @Rn */
L_0C0AC622: BLKS(0x0C0AC622u);
	r0 &= 0x1u;  /* 0C0AC622 and #imm,r0 */
	IF(0x0C0AC624u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AC626u, 2);  /* 0C0AC624 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AC626 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AC628 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AC62A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC640u, 6); goto L_0C0AC640; }  /* 0C0AC62C bt */
L_0C0AC62E: BLKS(0x0C0AC62Eu);
	r0 = 0x1u;  /* 0C0AC62E mov #imm,Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0AC5A6u, 4); goto L_0C0AC5A6; }  /* 0C0AC630 bra */
L_0C0AC640: BLKS(0x0C0AC640u);
	r8 = 0xC0AFC10u; UPD(0x0C0AC642u, 1);  /* 0C0AC640 mov.l @(disp,pc),Rn */
	IF(0x0C0AC642u); { u32 t_ = r8; PR = 0x0C0AC646u; IF(0x0C0AC644u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC646u); }  /* 0C0AC642 jsr @Rn */
L_0C0AC646: BLKS(0x0C0AC646u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC5A4u, 3); goto L_0C0AC5A4; }  /* 0C0AC646 bra */
L_0C0AC650: BLKS(0x0C0AC650u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC594u, 3); goto L_0C0AC594; }  /* 0C0AC650 bra */
L_0C0AC660: BLKS(0x0C0AC660u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC57Au, 3); goto L_0C0AC57A; }  /* 0C0AC660 bra */
}

/* FUN_0c0ac6a0 */
void f_0C0AC6A0(sh3_t *c)
{
	LOCALS;
L_0C0AC6A0: BLKS(0x0C0AC6A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A2u, 1);  /* 0C0AC6A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A4u, 1);  /* 0C0AC6A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A6u, 1);  /* 0C0AC6A4 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AC6A6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6AAu, 2);  /* 0C0AC6A8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0AC6AA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6AEu, 2);  /* 0C0AC6AC mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AC6AE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6B2u, 2);  /* 0C0AC6B0 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0AC6B2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6B6u, 2);  /* 0C0AC6B4 mov.l Rm,@-Rn */
	IF(0x0C0AC6B6u); r12 <<= 2;  /* 0C0AC6B6 shll2 Rn */
	IF(0x0C0AC6B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC6BAu, 2);  /* 0C0AC6B8 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC6BA add #imm,Rn */
	r14 = r15;  /* 0C0AC6BC mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AC6C0u, 3);  /* 0C0AC6BE mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AC6C2u, 1);  /* 0C0AC6C0 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AC6C2 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AC6C4 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AC6C8u, 3);  /* 0C0AC6C6 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC6CAu, 1);  /* 0C0AC6C8 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC6CA mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AC6CEu, 2);  /* 0C0AC6CC mov.l Rm,@Rn */
	IF(0x0C0AC6CEu); r3 = R32(r0 + r2); UPD(0x0C0AC6D0u, 1);  /* 0C0AC6CE mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC6D2u, 1);  /* 0C0AC6D0 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC6D2 add Rm,Rn */
	IF(0x0C0AC6D4u); T = (s32)r2 >= 0;  /* 0C0AC6D4 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AC7C0u, 5); goto L_0C0AC7C0; } UPD(0x0C0AC6DAu, 1); goto L_0C0AC6DA; }  /* 0C0AC6D6 bf/s */
L_0C0AC6DA: BLKS(0x0C0AC6DAu);
	r5 = 0xA00000u; UPD(0x0C0AC6DCu, 1);  /* 0C0AC6DA mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AC6DC add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AC6DE cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC6FCu, 5); goto L_0C0AC6FC; } goto L_0C0AC6E4; }  /* 0C0AC6E0 bt/s */
L_0C0AC6E4: BLKS(0x0C0AC6E4u);
	r8 = 0xC3929E0u; UPD(0x0C0AC6E6u, 2);  /* 0C0AC6E4 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0AC6E6 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AC6EAu, 2);  /* 0C0AC6E8 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC6ECu, 1);  /* 0C0AC6EA mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC6EC sub Rm,Rn */
	r2 += r6;  /* 0C0AC6EE add Rm,Rn */
	IF(0x0C0AC6F0u); T = (s32)r2 >= 0;  /* 0C0AC6F0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC7B0u, 6); goto L_0C0AC7B0; }  /* 0C0AC6F2 bf */
L_0C0AC6F4: BLKS(0x0C0AC6F4u);
	r0 = 0x780000u; UPD(0x0C0AC6F6u, 1);  /* 0C0AC6F4 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AC6F6 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC6F8 cmp/ge Rm,Rn */
	IF(0x0C0AC6FAu); r1 = T;  /* 0C0AC6FA movt Rn */
	UPD(0x0C0AC6FCu, 3);
L_0C0AC6FC: BLKS(0x0C0AC6FCu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC6FC exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC6FE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC720u, 5); goto L_0C0AC720; } UPD(0x0C0AC704u, 1); goto L_0C0AC704; }  /* 0C0AC700 bt/s */
L_0C0AC704: BLKS(0x0C0AC704u);
	r14 += 0x8u;  /* 0C0AC704 add #imm,Rn */
	UPD(0x0C0AC706u, 1);
L_0C0AC706: BLKS(0x0C0AC706u);
	r15 = r14;  /* 0C0AC706 mov Rm,Rn */
	IF(0x0C0AC708u); PR = R32(r15); r15 += 4; UPD(0x0C0AC70Au, 2);  /* 0C0AC708 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC70Cu, 1);  /* 0C0AC70A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC70Eu, 1);  /* 0C0AC70C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC710u, 1);  /* 0C0AC70E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC712u, 1);  /* 0C0AC710 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC714u, 1);  /* 0C0AC712 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC716u, 1);  /* 0C0AC714 mov.l @Rm+,Rn */
	IF(0x0C0AC716u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC716 rts */
L_0C0AC720: BLKS(0x0C0AC720u);
	r0 = 0xC0AA550u; UPD(0x0C0AC722u, 1);  /* 0C0AC720 mov.l @(disp,pc),Rn */
	IF(0x0C0AC722u); { u32 t_ = r0; PR = 0x0C0AC726u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC726u); }  /* 0C0AC722 jsr @Rn */
L_0C0AC726: BLKS(0x0C0AC726u);
	T = (r0 & r0) == 0;  /* 0C0AC726 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC704u, 4); goto L_0C0AC704; } goto L_0C0AC72C; }  /* 0C0AC728 bt/s */
L_0C0AC72C: BLKS(0x0C0AC72Cu);
	r7 = 0xC2755BCu; UPD(0x0C0AC72Eu, 2);  /* 0C0AC72C mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0AC72E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AC732u, 2);  /* 0C0AC730 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC732 mov #imm,Rn */
	IF(0x0C0AC734u); MACL = r6 * r3;  /* 0C0AC734 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC738u, 4);  /* 0C0AC736 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AC738 and Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0AC73Cu, 2);  /* 0C0AC73A mov.l @(disp,pc),Rn */
	IF(0x0C0AC73Cu); r3 = MACL;  /* 0C0AC73C sts macl,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0AC740u, 2);  /* 0C0AC73E mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0AC740 add Rm,Rn */
	r6 = R32(r14 + 0x34u); UPD(0x0C0AC744u, 2);  /* 0C0AC742 mov.l @(disp,Rm),Rn */
	r2 |= r10;  /* 0C0AC744 or Rm,Rn */
	r0 = 0x2u;  /* 0C0AC746 mov #imm,Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AC74Au, 3);  /* 0C0AC748 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r0); UPD(0x0C0AC74Cu, 1);  /* 0C0AC74A mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC74C add Rm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AC750u, 2);  /* 0C0AC74E mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0AC750 mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0AC754u, 2);  /* 0C0AC752 mov.l Rm,@(disp,Rn) */
	W32(r3, r2); UPD(0x0C0AC756u, 1);  /* 0C0AC754 mov.l Rm,@Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0AC758u, 1);  /* 0C0AC756 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r7); UPD(0x0C0AC75Au, 1);  /* 0C0AC758 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C0AC75Cu, 1);  /* 0C0AC75A mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AC75C add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AC760u, 2);  /* 0C0AC75E mov.b Rm,@Rn */
	IF(0x0C0AC760u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC762u, 1);  /* 0C0AC760 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0AC762 add #imm,Rn */
	W8(r3, r1); UPD(0x0C0AC766u, 2);  /* 0C0AC764 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC766 mov #imm,Rn */
	IF(0x0C0AC768u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC76Au, 2);  /* 0C0AC768 mov.b @(r0,Rm),Rn */
	r4 = 0xC1EED0Cu; UPD(0x0C0AC76Cu, 1);  /* 0C0AC76A mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC76C mov Rm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C0AC770u, 2);  /* 0C0AC76E mov.b Rm,@-Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AC772u, 1);  /* 0C0AC770 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AC772 add #imm,Rn */
	IF(0x0C0AC774u); r2 = R32(r0 + r4); UPD(0x0C0AC776u, 2);  /* 0C0AC774 mov.l @(r0,Rm),Rn */
	r13 = 0x808080u; UPD(0x0C0AC778u, 1);  /* 0C0AC776 mov.l @(disp,pc),Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AC77Au, 1);  /* 0C0AC778 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0AC77Cu, 1);  /* 0C0AC77A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0AC77C add Rm,Rn */
	IF(0x0C0AC77Eu); { u32 t_ = r12; PR = 0x0C0AC782u; W32(r3 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC782u); }  /* 0C0AC77E jsr @Rn */
L_0C0AC782: BLKS(0x0C0AC782u);
	r0 &= 0x1u;  /* 0C0AC782 and #imm,r0 */
	IF(0x0C0AC784u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AC786u, 2);  /* 0C0AC784 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AC786 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AC788 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AC78A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC7A0u, 6); goto L_0C0AC7A0; }  /* 0C0AC78C bt */
L_0C0AC78E: BLKS(0x0C0AC78Eu);
	r0 = 0x1u;  /* 0C0AC78E mov #imm,Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0AC706u, 4); goto L_0C0AC706; }  /* 0C0AC790 bra */
L_0C0AC7A0: BLKS(0x0C0AC7A0u);
	r8 = 0xC0AFC10u; UPD(0x0C0AC7A2u, 1);  /* 0C0AC7A0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC7A2u); { u32 t_ = r8; PR = 0x0C0AC7A6u; IF(0x0C0AC7A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC7A6u); }  /* 0C0AC7A2 jsr @Rn */
L_0C0AC7A6: BLKS(0x0C0AC7A6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC704u, 3); goto L_0C0AC704; }  /* 0C0AC7A6 bra */
L_0C0AC7B0: BLKS(0x0C0AC7B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC6F4u, 3); goto L_0C0AC6F4; }  /* 0C0AC7B0 bra */
L_0C0AC7C0: BLKS(0x0C0AC7C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC6DAu, 3); goto L_0C0AC6DA; }  /* 0C0AC7C0 bra */
}

/* FUN_0c0ac800 */
void f_0C0AC800(sh3_t *c)
{
	LOCALS;
L_0C0AC800: BLKS(0x0C0AC800u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC802u, 1);  /* 0C0AC800 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC804u, 1);  /* 0C0AC802 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC806u, 1);  /* 0C0AC804 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC808u, 1);  /* 0C0AC806 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0AC808 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC80Cu, 2);  /* 0C0AC80A mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AC80C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC810u, 2);  /* 0C0AC80E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC812u, 1);  /* 0C0AC810 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0AC812 mov Rm,Rn */
	IF(0x0C0AC814u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC816u, 2);  /* 0C0AC814 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC816 add #imm,Rn */
	r14 = r15;  /* 0C0AC818 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AC81Cu, 3);  /* 0C0AC81A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AC81Eu, 1);  /* 0C0AC81C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AC81E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AC822u, 2);  /* 0C0AC820 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AC822 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC826u, 2);  /* 0C0AC824 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AC826 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AC82Au, 2);  /* 0C0AC828 mov.l Rm,@Rn */
	IF(0x0C0AC82Au); r0 <<= 2;  /* 0C0AC82A shll2 Rn */
	IF(0x0C0AC82Cu); r3 = R32(r0 + r2); UPD(0x0C0AC82Eu, 2);  /* 0C0AC82C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC830u, 1);  /* 0C0AC82E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC830 add Rm,Rn */
	IF(0x0C0AC832u); T = (s32)r2 >= 0;  /* 0C0AC832 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AC920u, 5); goto L_0C0AC920; } UPD(0x0C0AC838u, 1); goto L_0C0AC838; }  /* 0C0AC834 bf/s */
L_0C0AC838: BLKS(0x0C0AC838u);
	r5 = 0xA00000u; UPD(0x0C0AC83Au, 1);  /* 0C0AC838 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AC83A add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AC83C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC85Au, 5); goto L_0C0AC85A; } goto L_0C0AC842; }  /* 0C0AC83E bt/s */
L_0C0AC842: BLKS(0x0C0AC842u);
	r8 = 0xC3929E0u; UPD(0x0C0AC844u, 2);  /* 0C0AC842 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AC844 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AC848u, 2);  /* 0C0AC846 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC84Au, 1);  /* 0C0AC848 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC84A sub Rm,Rn */
	r2 += r6;  /* 0C0AC84C add Rm,Rn */
	IF(0x0C0AC84Eu); T = (s32)r2 >= 0;  /* 0C0AC84E cmp/pz Rn */
	if (!T) { UPD(0x0C0AC910u, 6); goto L_0C0AC910; }  /* 0C0AC850 bf */
L_0C0AC852: BLKS(0x0C0AC852u);
	r9 = 0x780000u; UPD(0x0C0AC854u, 1);  /* 0C0AC852 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0AC854 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC856 cmp/ge Rm,Rn */
	IF(0x0C0AC858u); r1 = T;  /* 0C0AC858 movt Rn */
	UPD(0x0C0AC85Au, 3);
L_0C0AC85A: BLKS(0x0C0AC85Au);
	r9 = (u32)(s32)(s16)r1;  /* 0C0AC85A exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0AC85C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC880u, 5); goto L_0C0AC880; } UPD(0x0C0AC862u, 1); goto L_0C0AC862; }  /* 0C0AC85E bt/s */
L_0C0AC862: BLKS(0x0C0AC862u);
	r14 += 0x8u;  /* 0C0AC862 add #imm,Rn */
	r15 = r14;  /* 0C0AC864 mov Rm,Rn */
	IF(0x0C0AC866u); PR = R32(r15); r15 += 4; UPD(0x0C0AC868u, 3);  /* 0C0AC866 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC86Au, 1);  /* 0C0AC868 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC86Cu, 1);  /* 0C0AC86A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC86Eu, 1);  /* 0C0AC86C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC870u, 1);  /* 0C0AC86E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC872u, 1);  /* 0C0AC870 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC874u, 1);  /* 0C0AC872 mov.l @Rm+,Rn */
	IF(0x0C0AC874u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC874 rts */
L_0C0AC880: BLKS(0x0C0AC880u);
	r8 = 0xC0AB240u; UPD(0x0C0AC882u, 1);  /* 0C0AC880 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC882 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0AC886u, 2);  /* 0C0AC884 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0AC886 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0AC88Au, 2);  /* 0C0AC888 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C0AC88A mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0AC88Eu, 2);  /* 0C0AC88C mov.l Rm,@Rn */
	r6 = r11;  /* 0C0AC88E mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AC892u, 2);  /* 0C0AC890 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC892u); { u32 t_ = r8; PR = 0x0C0AC896u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0AC896u); }  /* 0C0AC892 jsr @Rn */
L_0C0AC896: BLKS(0x0C0AC896u);
	r8 = 0xC0AA550u; UPD(0x0C0AC898u, 1);  /* 0C0AC896 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AC898 add #imm,Rn */
	IF(0x0C0AC89Au); { u32 t_ = r8; PR = 0x0C0AC89Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC89Eu); }  /* 0C0AC89A jsr @Rn */
L_0C0AC89E: BLKS(0x0C0AC89Eu);
	T = (r0 & r0) == 0;  /* 0C0AC89E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC862u, 4); goto L_0C0AC862; } goto L_0C0AC8A4; }  /* 0C0AC8A0 bt/s */
L_0C0AC8A4: BLKS(0x0C0AC8A4u);
	r8 = 0xC2755BCu; UPD(0x0C0AC8A6u, 2);  /* 0C0AC8A4 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AC8A6 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC8AAu, 2);  /* 0C0AC8A8 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC8AA mov #imm,Rn */
	IF(0x0C0AC8ACu); MACL = r7 * r6;  /* 0C0AC8AC mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC8B0u, 4);  /* 0C0AC8AE mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0AC8B0 and Rm,Rn */
	IF(0x0C0AC8B2u); r8 = MACL;  /* 0C0AC8B2 sts macl,Rn */
	r3 = 0x80000000u; UPD(0x0C0AC8B6u, 3);  /* 0C0AC8B4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0AC8B6 add Rm,Rn */
	r3 |= r13;  /* 0C0AC8B8 or Rm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C0AC8BCu, 3);  /* 0C0AC8BA mov.l Rm,@(disp,Rn) */
	r13 = 0x3u;  /* 0C0AC8BC mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0AC8C0u, 2);  /* 0C0AC8BE mov.l Rm,@Rn */
	r10 = 0xC0AFE40u; UPD(0x0C0AC8C2u, 1);  /* 0C0AC8C0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0AC8C4u, 1);  /* 0C0AC8C2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r12); UPD(0x0C0AC8C6u, 1);  /* 0C0AC8C4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r13); UPD(0x0C0AC8C8u, 1);  /* 0C0AC8C6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C0AC8CAu, 1);  /* 0C0AC8C8 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0AC8CA add #imm,Rn */
	IF(0x0C0AC8CCu); { u32 t_ = r10; PR = 0x0C0AC8D0u; W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8D0u); }  /* 0C0AC8CC jsr @Rn */
L_0C0AC8D0: BLKS(0x0C0AC8D0u);
	r0 &= 0x7u;  /* 0C0AC8D0 and #imm,r0 */
	r8 += 0x1u;  /* 0C0AC8D2 add #imm,Rn */
	r0 += 0x8u;  /* 0C0AC8D4 add #imm,Rn */
	IF(0x0C0AC8D6u); { u32 t_ = r10; PR = 0x0C0AC8DAu; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8DAu); }  /* 0C0AC8D6 jsr @Rn */
L_0C0AC8DA: BLKS(0x0C0AC8DAu);
	r0 &= 0xFu;  /* 0C0AC8DA and #imm,r0 */
	r8 += 0x1u;  /* 0C0AC8DC add #imm,Rn */
	r0 += 0x4u;  /* 0C0AC8DE add #imm,Rn */
	W8(r8, r0); UPD(0x0C0AC8E2u, 4);  /* 0C0AC8E0 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0AC8E2 mov #imm,Rn */
	IF(0x0C0AC8E4u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC8E6u, 2);  /* 0C0AC8E4 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AC8E6 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0AC8EAu, 2);  /* 0C0AC8E8 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC8EA mov #imm,Rn */
	IF(0x0C0AC8ECu); r11 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC8EEu, 2);  /* 0C0AC8EC mov.b @(r0,Rm),Rn */
	IF(0x0C0AC8EEu); { u32 t_ = r10; PR = 0x0C0AC8F2u; { u32 v_ = r11; r8 -= 1; W8(r8, v_); } /* slot mov.b Rm,@-Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8F2u); }  /* 0C0AC8EE jsr @Rn */
L_0C0AC8F2: BLKS(0x0C0AC8F2u);
	r8 += 0xFFFFFFCDu;  /* 0C0AC8F2 add #imm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0AC8F6u, 2);  /* 0C0AC8F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC8F6u); { u32 t_ = r10; PR = 0x0C0AC8FAu; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8FAu); }  /* 0C0AC8F6 jsr @Rn */
L_0C0AC8FA: BLKS(0x0C0AC8FAu);
	r0 &= 0x3Fu;  /* 0C0AC8FA and #imm,r0 */
	r0 += 0xFFFFFFE0u;  /* 0C0AC8FC add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0AC900u, 3);  /* 0C0AC8FE mov.l Rm,@(disp,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC862u, 3); goto L_0C0AC862; }  /* 0C0AC900 bra */
L_0C0AC910: BLKS(0x0C0AC910u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC852u, 3); goto L_0C0AC852; }  /* 0C0AC910 bra */
L_0C0AC920: BLKS(0x0C0AC920u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC838u, 3); goto L_0C0AC838; }  /* 0C0AC920 bra */
}

/* FUN_0c0ac960 */
void f_0C0AC960(sh3_t *c)
{
	LOCALS;
L_0C0AC960: BLKS(0x0C0AC960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC962u, 1);  /* 0C0AC960 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFCu;  /* 0C0AC962 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC966u, 2);  /* 0C0AC964 mov.l Rm,@-Rn */
	r0 &= r4;  /* 0C0AC966 and Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC96Au, 2);  /* 0C0AC968 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AC96A mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC96Eu, 2);  /* 0C0AC96C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC970u, 1);  /* 0C0AC96E mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0AC970 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC974u, 2);  /* 0C0AC972 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C0AC974 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC978u, 2);  /* 0C0AC976 mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0AC978 mov Rm,Rn */
	IF(0x0C0AC97Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AC97Cu, 2);  /* 0C0AC97A sts.l pr,@-Rn */
	r3 = 0xC1EED54u; UPD(0x0C0AC97Eu, 1);  /* 0C0AC97C mov.l @(disp,pc),Rn */
	IF(0x0C0AC97Eu); r2 = R32(r0 + r3); UPD(0x0C0AC980u, 1);  /* 0C0AC97E mov.l @(r0,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0AC982u, 1);  /* 0C0AC980 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C0AC982 add Rm,Rn */
	IF(0x0C0AC984u); T = (s32)r3 >= 0;  /* 0C0AC984 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACA10u, 5); goto L_0C0ACA10; } UPD(0x0C0AC98Au, 1); goto L_0C0AC98A; }  /* 0C0AC986 bf/s */
L_0C0AC98A: BLKS(0x0C0AC98Au);
	r0 = 0xA00000u; UPD(0x0C0AC98Cu, 1);  /* 0C0AC98A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0AC98C add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0AC98E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AC9A4u, 5); goto L_0C0AC9A4; }  /* 0C0AC990 bt */
L_0C0AC992: BLKS(0x0C0AC992u);
	r3 = 0x4Cu;  /* 0C0AC992 mov #imm,Rn */
	IF(0x0C0AC994u); MACL = r12 * r3;  /* 0C0AC994 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AC998u, 4);  /* 0C0AC996 mov.l @(disp,pc),Rn */
	IF(0x0C0AC998u); r10 = MACL;  /* 0C0AC998 sts macl,Rn */
	r10 += r2;  /* 0C0AC99A add Rm,Rn */
	r0 = R32(r10); UPD(0x0C0AC99Eu, 3);  /* 0C0AC99C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0AC99E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AC9A0 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC9C0u, 5); goto L_0C0AC9C0; }  /* 0C0AC9A2 bf */
L_0C0AC9A4: BLKS(0x0C0AC9A4u);
	r15 = r14;  /* 0C0AC9A4 mov Rm,Rn */
	IF(0x0C0AC9A6u); PR = R32(r15); r15 += 4; UPD(0x0C0AC9A8u, 2);  /* 0C0AC9A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC9AAu, 1);  /* 0C0AC9A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC9ACu, 1);  /* 0C0AC9AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC9AEu, 1);  /* 0C0AC9AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC9B0u, 1);  /* 0C0AC9AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC9B2u, 1);  /* 0C0AC9B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC9B4u, 1);  /* 0C0AC9B2 mov.l @Rm+,Rn */
	IF(0x0C0AC9B4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC9B4 rts */
L_0C0AC9C0: BLKS(0x0C0AC9C0u);
	r8 = 0xC0AA790u; UPD(0x0C0AC9C2u, 1);  /* 0C0AC9C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC9C2u); { u32 t_ = r8; PR = 0x0C0AC9C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA790, 0x0C0AA790u, 0x0C0AC9C6u); }  /* 0C0AC9C2 jsr @Rn */
L_0C0AC9C6: BLKS(0x0C0AC9C6u);
	T = (r0 & r0) == 0;  /* 0C0AC9C6 tst Rm,Rn */
	if (T) { UPD(0x0C0AC9A4u, 4); goto L_0C0AC9A4; }  /* 0C0AC9C8 bt */
L_0C0AC9CA: BLKS(0x0C0AC9CAu);
	r8 = 0x38u;  /* 0C0AC9CA mov #imm,Rn */
	r5 = 0xC2755BCu; UPD(0x0C0AC9CEu, 2);  /* 0C0AC9CC mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AC9D0u, 1);  /* 0C0AC9CE mov.w @Rm,Rn */
	r0 = 0x18u;  /* 0C0AC9D0 mov #imm,Rn */
	IF(0x0C0AC9D2u); MACL = r4 * r8;  /* 0C0AC9D2 mul.l Rm,Rn */
	r3 = 0xC275E1Cu; UPD(0x0C0AC9D6u, 4);  /* 0C0AC9D4 mov.l @(disp,pc),Rn */
	r10 += 0x42u;  /* 0C0AC9D6 add #imm,Rn */
	IF(0x0C0AC9D8u); r8 = MACL;  /* 0C0AC9D8 sts macl,Rn */
	r8 += r3;  /* 0C0AC9DA add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0AC9DEu, 4);  /* 0C0AC9DC mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C0AC9DE mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0AC9E2u, 2);  /* 0C0AC9E0 mov.l @(disp,pc),Rn */
	r2 = 0xC0000010u; UPD(0x0C0AC9E4u, 1);  /* 0C0AC9E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AC9E4u); { u32 t_ = r0; PR = 0x0C0AC9E8u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AC9E8u); }  /* 0C0AC9E4 jsr @Rn */
L_0C0AC9E8: BLKS(0x0C0AC9E8u);
	r7 = 0x0u;  /* 0C0AC9E8 mov #imm,Rn */
	r9 += r0;  /* 0C0AC9EA add Rm,Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C0AC9EEu, 3);  /* 0C0AC9EC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r7); UPD(0x0C0AC9F0u, 1);  /* 0C0AC9EE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r11); UPD(0x0C0AC9F2u, 1);  /* 0C0AC9F0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r13); UPD(0x0C0AC9F4u, 1);  /* 0C0AC9F2 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0AC9F4 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0AC9F8u, 2);  /* 0C0AC9F6 mov.b Rm,@Rn */
	r8 += 0x4u;  /* 0C0AC9F8 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0AC9FCu, 2);  /* 0C0AC9FA mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AC9FEu, 1);  /* 0C0AC9FC mov.b @Rm,Rn */
	{ u32 v_ = r6; r8 -= 1; W8(r8, v_); } UPD(0x0C0ACA00u, 1);  /* 0C0AC9FE mov.b Rm,@-Rn */
	r5 = 0xFFFFu; UPD(0x0C0ACA02u, 1);  /* 0C0ACA00 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ACA02 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0ACA06u, 2);  /* 0C0ACA04 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0ACA08u, 1);  /* 0C0ACA06 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AC9A4u, 3); goto L_0C0AC9A4; }  /* 0C0ACA08 bra */
L_0C0ACA10: BLKS(0x0C0ACA10u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AC98Au, 3); goto L_0C0AC98A; }  /* 0C0ACA10 bra */
}

/* FUN_0c0aca40 */
void f_0C0ACA40(sh3_t *c)
{
	LOCALS;
L_0C0ACA40: BLKS(0x0C0ACA40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA42u, 1);  /* 0C0ACA40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA44u, 1);  /* 0C0ACA42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA46u, 1);  /* 0C0ACA44 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0ACA46 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA4Au, 2);  /* 0C0ACA48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA4Cu, 1);  /* 0C0ACA4A mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0ACA4C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA50u, 2);  /* 0C0ACA4E mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0ACA50 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA54u, 2);  /* 0C0ACA52 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C0ACA54 mov Rm,Rn */
	IF(0x0C0ACA56u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACA58u, 2);  /* 0C0ACA56 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACA58 add #imm,Rn */
	r14 = r15;  /* 0C0ACA5A mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0ACA5Eu, 3);  /* 0C0ACA5C mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0ACA60u, 1);  /* 0C0ACA5E mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ACA60 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0ACA64u, 2);  /* 0C0ACA62 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ACA64 exts.b Rm,Rn */
	r2 = 0xC1EED6Cu; UPD(0x0C0ACA68u, 2);  /* 0C0ACA66 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0ACA68 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0ACA6Cu, 2);  /* 0C0ACA6A mov.l Rm,@Rn */
	IF(0x0C0ACA6Cu); r0 <<= 2;  /* 0C0ACA6C shll2 Rn */
	IF(0x0C0ACA6Eu); r3 = R32(r0 + r2); UPD(0x0C0ACA70u, 2);  /* 0C0ACA6E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACA72u, 1);  /* 0C0ACA70 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0ACA72 add Rm,Rn */
	IF(0x0C0ACA74u); T = (s32)r2 >= 0;  /* 0C0ACA74 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0ACB30u, 5); goto L_0C0ACB30; } UPD(0x0C0ACA7Au, 1); goto L_0C0ACA7A; }  /* 0C0ACA76 bf/s */
L_0C0ACA7A: BLKS(0x0C0ACA7Au);
	r5 = 0xA00000u; UPD(0x0C0ACA7Cu, 1);  /* 0C0ACA7A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACA7C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACA7E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACA9Cu, 5); goto L_0C0ACA9C; } goto L_0C0ACA84; }  /* 0C0ACA80 bt/s */
L_0C0ACA84: BLKS(0x0C0ACA84u);
	r8 = 0xC3929E0u; UPD(0x0C0ACA86u, 2);  /* 0C0ACA84 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACA86 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0ACA8Au, 2);  /* 0C0ACA88 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACA8Cu, 1);  /* 0C0ACA8A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACA8C sub Rm,Rn */
	r2 += r6;  /* 0C0ACA8E add Rm,Rn */
	IF(0x0C0ACA90u); T = (s32)r2 >= 0;  /* 0C0ACA90 cmp/pz Rn */
	if (!T) { UPD(0x0C0ACB20u, 6); goto L_0C0ACB20; }  /* 0C0ACA92 bf */
L_0C0ACA94: BLKS(0x0C0ACA94u);
	r0 = 0x780000u; UPD(0x0C0ACA96u, 1);  /* 0C0ACA94 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0ACA96 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACA98 cmp/ge Rm,Rn */
	IF(0x0C0ACA9Au); r1 = T;  /* 0C0ACA9A movt Rn */
	UPD(0x0C0ACA9Cu, 3);
L_0C0ACA9C: BLKS(0x0C0ACA9Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0ACA9C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0ACA9E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACAC0u, 5); goto L_0C0ACAC0; } UPD(0x0C0ACAA4u, 1); goto L_0C0ACAA4; }  /* 0C0ACAA0 bt/s */
L_0C0ACAA4: BLKS(0x0C0ACAA4u);
	r14 += 0x8u;  /* 0C0ACAA4 add #imm,Rn */
	r15 = r14;  /* 0C0ACAA6 mov Rm,Rn */
	IF(0x0C0ACAA8u); PR = R32(r15); r15 += 4; UPD(0x0C0ACAAAu, 3);  /* 0C0ACAA8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACAACu, 1);  /* 0C0ACAAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACAAEu, 1);  /* 0C0ACAAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACAB0u, 1);  /* 0C0ACAAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACAB2u, 1);  /* 0C0ACAB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACAB4u, 1);  /* 0C0ACAB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACAB6u, 1);  /* 0C0ACAB4 mov.l @Rm+,Rn */
	IF(0x0C0ACAB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACAB6 rts */
L_0C0ACAC0: BLKS(0x0C0ACAC0u);
	r0 = 0xC0AA550u; UPD(0x0C0ACAC2u, 1);  /* 0C0ACAC0 mov.l @(disp,pc),Rn */
	IF(0x0C0ACAC2u); { u32 t_ = r0; PR = 0x0C0ACAC6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACAC6u); }  /* 0C0ACAC2 jsr @Rn */
L_0C0ACAC6: BLKS(0x0C0ACAC6u);
	T = (r0 & r0) == 0;  /* 0C0ACAC6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACAA4u, 4); goto L_0C0ACAA4; } goto L_0C0ACACC; }  /* 0C0ACAC8 bt/s */
L_0C0ACACC: BLKS(0x0C0ACACCu);
	r2 = 0xC2755BCu; UPD(0x0C0ACACEu, 2);  /* 0C0ACACC mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0ACACE mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACAD2u, 2);  /* 0C0ACAD0 mov.w @Rm,Rn */
	r7 = 0x10u;  /* 0C0ACAD2 mov #imm,Rn */
	IF(0x0C0ACAD4u); MACL = r4 * r3;  /* 0C0ACAD4 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACAD8u, 4);  /* 0C0ACAD6 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0ACAD8 and Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0ACADCu, 2);  /* 0C0ACADA mov.l @(disp,pc),Rn */
	IF(0x0C0ACADCu); r3 = MACL;  /* 0C0ACADC sts macl,Rn */
	r4 = R32(r14 + 0x30u); UPD(0x0C0ACAE0u, 2);  /* 0C0ACADE mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0ACAE0 add Rm,Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0ACAE4u, 2);  /* 0C0ACAE2 mov.l @(disp,Rm),Rn */
	r6 |= r9;  /* 0C0ACAE4 or Rm,Rn */
	r5 = 0x15u;  /* 0C0ACAE6 mov #imm,Rn */
	W32(r3 + 0x8u, r11); UPD(0x0C0ACAEAu, 3);  /* 0C0ACAE8 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0ACAEA mov #imm,Rn */
	W32(r3 + 0x10u, r12); UPD(0x0C0ACAEEu, 2);  /* 0C0ACAEC mov.l Rm,@(disp,Rn) */
	r9 = 0xFFFFFFFCu;  /* 0C0ACAEE mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0ACAF2u, 2);  /* 0C0ACAF0 mov.l Rm,@(disp,Rn) */
	W32(r3, r6); UPD(0x0C0ACAF4u, 1);  /* 0C0ACAF2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C0ACAF6u, 1);  /* 0C0ACAF4 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0ACAF8u, 1);  /* 0C0ACAF6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r4); UPD(0x0C0ACAFAu, 1);  /* 0C0ACAF8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0ACAFCu, 1);  /* 0C0ACAFA mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ACAFC add #imm,Rn */
	W8(r3, r8); UPD(0x0C0ACB00u, 2);  /* 0C0ACAFE mov.b Rm,@Rn */
	IF(0x0C0ACB00u); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACB02u, 1);  /* 0C0ACB00 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0ACB02 add #imm,Rn */
	W8(r3, r13); UPD(0x0C0ACB06u, 2);  /* 0C0ACB04 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACB06 mov #imm,Rn */
	IF(0x0C0ACB08u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACB0Au, 2);  /* 0C0ACB08 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r12; r3 -= 1; W8(r3, v_); } UPD(0x0C0ACB0Cu, 1);  /* 0C0ACB0A mov.b Rm,@-Rn */
	r0 = 0x1u;  /* 0C0ACB0C mov #imm,Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ACB0E add #imm,Rn */
	W32(r3 + 0x2Cu, r10); UPD(0x0C0ACB12u, 3);  /* 0C0ACB10 mov.l Rm,@(disp,Rn) */
	r11 = 0x207C0C0u; UPD(0x0C0ACB14u, 1);  /* 0C0ACB12 mov.l @(disp,pc),Rn */
	IF(0x0C0ACB14u); ARG0(0x4A9Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0ACB14 shad Rm,Rn */
	W32(r3 + 0x28u, r11); UPD(0x0C0ACB18u, 2);  /* 0C0ACB16 mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ACAA4u, 3); goto L_0C0ACAA4; }  /* 0C0ACB18 bra */
L_0C0ACB20: BLKS(0x0C0ACB20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACA94u, 3); goto L_0C0ACA94; }  /* 0C0ACB20 bra */
L_0C0ACB30: BLKS(0x0C0ACB30u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACA7Au, 3); goto L_0C0ACA7A; }  /* 0C0ACB30 bra */
}

/* FUN_0c0acb60 */
void f_0C0ACB60(sh3_t *c)
{
	LOCALS;
L_0C0ACB60: BLKS(0x0C0ACB60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB62u, 1);  /* 0C0ACB60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB64u, 1);  /* 0C0ACB62 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0ACB64 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB68u, 2);  /* 0C0ACB66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB6Au, 1);  /* 0C0ACB68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB6Cu, 1);  /* 0C0ACB6A mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0ACB6C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB70u, 2);  /* 0C0ACB6E mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0ACB70 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB74u, 2);  /* 0C0ACB72 mov.l Rm,@-Rn */
	IF(0x0C0ACB74u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACB76u, 1);  /* 0C0ACB74 sts.l pr,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0ACB76 add #imm,Rn */
	r14 = r15;  /* 0C0ACB78 mov Rm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0ACB7Cu, 3);  /* 0C0ACB7A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x34u); UPD(0x0C0ACB7Eu, 1);  /* 0C0ACB7C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ACB7E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0ACB82u, 2);  /* 0C0ACB80 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ACB82 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ACB86u, 2);  /* 0C0ACB84 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0ACB86 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0ACB8Au, 2);  /* 0C0ACB88 mov.l Rm,@Rn */
	IF(0x0C0ACB8Au); r0 <<= 2;  /* 0C0ACB8A shll2 Rn */
	IF(0x0C0ACB8Cu); r3 = R32(r0 + r2); UPD(0x0C0ACB8Eu, 2);  /* 0C0ACB8C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACB90u, 1);  /* 0C0ACB8E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0ACB90 add Rm,Rn */
	IF(0x0C0ACB92u); T = (s32)r2 >= 0;  /* 0C0ACB92 cmp/pz Rn */
	{ u32 c_ = T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACB9Cu, 5); goto L_0C0ACB9C; } goto L_0C0ACB98; }  /* 0C0ACB94 bt/s */
L_0C0ACB98: BLKS(0x0C0ACB98u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACCA0u, 4); goto L_0C0ACCA0; }  /* 0C0ACB98 bra */
L_0C0ACB9C: BLKS(0x0C0ACB9Cu);
	r5 = 0xA00000u; UPD(0x0C0ACB9Eu, 1);  /* 0C0ACB9C mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACB9E add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACBA0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBC0u, 5); goto L_0C0ACBC0; } goto L_0C0ACBA6; }  /* 0C0ACBA2 bt/s */
L_0C0ACBA6: BLKS(0x0C0ACBA6u);
	r9 = 0xC3929E0u; UPD(0x0C0ACBA8u, 2);  /* 0C0ACBA6 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACBA8 mov Rm,Rn */
	r7 = R32(r9); UPD(0x0C0ACBACu, 2);  /* 0C0ACBAA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACBAEu, 1);  /* 0C0ACBAC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACBAE sub Rm,Rn */
	r2 += r6;  /* 0C0ACBB0 add Rm,Rn */
	IF(0x0C0ACBB2u); T = (s32)r2 >= 0;  /* 0C0ACBB2 cmp/pz Rn */
	if (T) { UPD(0x0C0ACBB8u, 6); goto L_0C0ACBB8; }  /* 0C0ACBB4 bt */
L_0C0ACBB6: BLKS(0x0C0ACBB6u);
	r2 = 0u - r2;  /* 0C0ACBB6 neg Rm,Rn */
	UPD(0x0C0ACBB8u, 1);
L_0C0ACBB8: BLKS(0x0C0ACBB8u);
	r10 = 0x780000u; UPD(0x0C0ACBBAu, 1);  /* 0C0ACBB8 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0ACBBA add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACBBC cmp/ge Rm,Rn */
	IF(0x0C0ACBBEu); r1 = T;  /* 0C0ACBBE movt Rn */
	UPD(0x0C0ACBC0u, 3);
L_0C0ACBC0: BLKS(0x0C0ACBC0u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0ACBC0 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0ACBC2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBE0u, 5); goto L_0C0ACBE0; } UPD(0x0C0ACBC8u, 1); goto L_0C0ACBC8; }  /* 0C0ACBC4 bt/s */
L_0C0ACBC8: BLKS(0x0C0ACBC8u);
	r14 += 0x14u;  /* 0C0ACBC8 add #imm,Rn */
	UPD(0x0C0ACBCAu, 1);
L_0C0ACBCA: BLKS(0x0C0ACBCAu);
	r15 = r14;  /* 0C0ACBCA mov Rm,Rn */
	IF(0x0C0ACBCCu); PR = R32(r15); r15 += 4; UPD(0x0C0ACBCEu, 2);  /* 0C0ACBCC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACBD0u, 1);  /* 0C0ACBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACBD2u, 1);  /* 0C0ACBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACBD4u, 1);  /* 0C0ACBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACBD6u, 1);  /* 0C0ACBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACBD8u, 1);  /* 0C0ACBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACBDAu, 1);  /* 0C0ACBD8 mov.l @Rm+,Rn */
	IF(0x0C0ACBDAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACBDA rts */
L_0C0ACBE0: BLKS(0x0C0ACBE0u);
	r5 = R32(r14); UPD(0x0C0ACBE2u, 1);  /* 0C0ACBE0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACBE2 add #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0ACBE6u, 2);  /* 0C0ACBE4 mov.l @(disp,Rm),Rn */
	r6 = r12;  /* 0C0ACBE6 mov Rm,Rn */
	r10 = 0xC0AB240u; UPD(0x0C0ACBEAu, 2);  /* 0C0ACBE8 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0ACBEA mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0ACBEEu, 2);  /* 0C0ACBEC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0ACBF0u, 1);  /* 0C0ACBEE mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0ACBF0 mov Rm,Rn */
	IF(0x0C0ACBF2u); { u32 t_ = r10; PR = 0x0C0ACBF6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0ACBF6u); }  /* 0C0ACBF2 jsr @Rn */
L_0C0ACBF6: BLKS(0x0C0ACBF6u);
	r0 = 0x7u;  /* 0C0ACBF6 mov #imm,Rn */
	r3 = 0xC1EED94u; UPD(0x0C0ACBFAu, 2);  /* 0C0ACBF8 mov.l @(disp,pc),Rn */
	r0 &= r11;  /* 0C0ACBFA and Rm,Rn */
	IF(0x0C0ACBFCu); r0 <<= 2;  /* 0C0ACBFC shll2 Rn */
	r9 = 0xC0AA550u; UPD(0x0C0ACC00u, 3);  /* 0C0ACBFE mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0ACC00 add #imm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C0ACC04u, 2);  /* 0C0ACC02 mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0ACC04 mov #imm,Rn */
	IF(0x0C0ACC06u); r2 = R32(r0 + r3); UPD(0x0C0ACC08u, 2);  /* 0C0ACC06 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0ACC0Au, 1);  /* 0C0ACC08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC0Au); { u32 t_ = r9; PR = 0x0C0ACC0Eu; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACC0Eu); }  /* 0C0ACC0A jsr @Rn */
L_0C0ACC0E: BLKS(0x0C0ACC0Eu);
	T = (r0 & r0) == 0;  /* 0C0ACC0E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBC8u, 4); goto L_0C0ACBC8; } goto L_0C0ACC14; }  /* 0C0ACC10 bt/s */
L_0C0ACC14: BLKS(0x0C0ACC14u);
	r0 = r8;  /* 0C0ACC14 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0ACC16 and #imm,r0 */
	r9 = 0x80u; UPD(0x0C0ACC1Au, 4);  /* 0C0ACC18 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0ACC1A mov #imm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C0ACC1Eu, 2);  /* 0C0ACC1C mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC1Eu); ;  /* 0C0ACC1E nop */
	UPD(0x0C0ACC20u, 1);
L_0C0ACC20: BLKS(0x0C0ACC20u);
	r6 = R32(r14 + 0x8u); UPD(0x0C0ACC22u, 1);  /* 0C0ACC20 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0ACC22 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0ACC26u, 2);  /* 0C0ACC24 mov.w @Rm+,Rn */
	r2 = 0x0u;  /* 0C0ACC26 mov #imm,Rn */
	IF(0x0C0ACC28u); MACL = r5 * r8;  /* 0C0ACC28 mul.l Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0ACC2Cu, 4);  /* 0C0ACC2A mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0ACC2C mov #imm,Rn */
	r7 = 0xC058060u; UPD(0x0C0ACC30u, 2);  /* 0C0ACC2E mov.l @(disp,pc),Rn */
	IF(0x0C0ACC30u); r8 = MACL;  /* 0C0ACC30 sts macl,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ACC34u, 2);  /* 0C0ACC32 mov.l @(disp,pc),Rn */
	r3 = 0x80000000u; UPD(0x0C0ACC36u, 1);  /* 0C0ACC34 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0ACC36 add Rm,Rn */
	r3 |= r1;  /* 0C0ACC38 or Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C0ACC3Cu, 3);  /* 0C0ACC3A mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0ACC3C mov Rm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C0ACC40u, 2);  /* 0C0ACC3E mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0ACC42u, 1);  /* 0C0ACC40 mov.l Rm,@Rn */
	W32(r8 + 0x20u, r9); UPD(0x0C0ACC44u, 1);  /* 0C0ACC42 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r11); UPD(0x0C0ACC46u, 1);  /* 0C0ACC44 mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C0ACC46 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0ACC4Au, 2);  /* 0C0ACC48 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC4Au); { u32 t_ = r7; PR = 0x0C0ACC4Eu; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ACC4Eu); }  /* 0C0ACC4A jsr @Rn */
L_0C0ACC4E: BLKS(0x0C0ACC4Eu);
	r6 = 0xC058030u; UPD(0x0C0ACC50u, 1);  /* 0C0ACC4E mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0ACC50 add Rm,Rn */
	r4 = R32(r8 + 0x20u); UPD(0x0C0ACC54u, 2);  /* 0C0ACC52 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r0); UPD(0x0C0ACC56u, 1);  /* 0C0ACC54 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC56u); { u32 t_ = r6; PR = 0x0C0ACC5Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ACC5Au); }  /* 0C0ACC56 jsr @Rn */
L_0C0ACC5A: BLKS(0x0C0ACC5Au);
	r0 += r13;  /* 0C0ACC5A add Rm,Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0ACC5Eu, 2);  /* 0C0ACC5C mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0ACC5E mov #imm,Rn */
	r8 += 0x30u;  /* 0C0ACC60 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0ACC64u, 3);  /* 0C0ACC62 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0ACC64 mov #imm,Rn */
	IF(0x0C0ACC66u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACC68u, 2);  /* 0C0ACC66 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0ACC68 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0ACC6Cu, 2);  /* 0C0ACC6A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACC6C mov #imm,Rn */
	IF(0x0C0ACC6Eu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACC70u, 2);  /* 0C0ACC6E mov.b @(r0,Rm),Rn */
	r3 = 0xC058060u; UPD(0x0C0ACC72u, 1);  /* 0C0ACC70 mov.l @(disp,pc),Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0ACC74u, 1);  /* 0C0ACC72 mov.b Rm,@-Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ACC74 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C0ACC78u, 2);  /* 0C0ACC76 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC78u); { u32 t_ = r3; PR = 0x0C0ACC7Cu; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ACC7Cu); }  /* 0C0ACC78 jsr @Rn */
L_0C0ACC7C: BLKS(0x0C0ACC7Cu);
	r2 = 0x20000u; UPD(0x0C0ACC7Eu, 1);  /* 0C0ACC7C mov.l @(disp,pc),Rn */
	r7 = 0xC058030u; UPD(0x0C0ACC80u, 1);  /* 0C0ACC7E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0ACC80 add Rm,Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0ACC84u, 2);  /* 0C0ACC82 mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C0ACC86u, 1);  /* 0C0ACC84 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC86u); { u32 t_ = r7; PR = 0x0C0ACC8Au; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ACC8Au); }  /* 0C0ACC86 jsr @Rn */
L_0C0ACC8A: BLKS(0x0C0ACC8Au);
	r6 = r10;  /* 0C0ACC8A mov Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0ACC8Eu, 2);  /* 0C0ACC8C mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C0ACC8E add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0ACC90 exts.w Rm,Rn */
	r8 = 0x1Fu;  /* 0C0ACC92 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C0ACC94 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACC20u, 7); goto L_0C0ACC20; } goto L_0C0ACC9A; }  /* 0C0ACC96 bf/s */
L_0C0ACC9A: BLKS(0x0C0ACC9Au);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0ACBCAu, 4); goto L_0C0ACBCA; }  /* 0C0ACC9A bra */
L_0C0ACCA0: BLKS(0x0C0ACCA0u);
	{ IF(0x0C0ACCA2u); ; /* slot nop */ UPD(0x0C0ACB9Cu, 3); goto L_0C0ACB9C; }  /* 0C0ACCA0 bra */
}

void f_0C0ACCF0(sh3_t *c)
{
	LOCALS;
L_0C0ACCF0: BLKS(0x0C0ACCF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF2u, 1);  /* 0C0ACCF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF4u, 1);  /* 0C0ACCF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF6u, 1);  /* 0C0ACCF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0ACCF6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCFAu, 2);  /* 0C0ACCF8 mov.l Rm,@-Rn */
	r4 = 0x38u;  /* 0C0ACCFA mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCFEu, 2);  /* 0C0ACCFC mov.l Rm,@-Rn */
	IF(0x0C0ACCFEu); MACL = r9 * r4;  /* 0C0ACCFE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACD02u, 3);  /* 0C0ACD00 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACD04u, 1);  /* 0C0ACD02 mov.l Rm,@-Rn */
	IF(0x0C0ACD04u); r5 = MACL;  /* 0C0ACD04 sts macl,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACD08u, 2);  /* 0C0ACD06 mov.l @(disp,pc),Rn */
	IF(0x0C0ACD08u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACD0Au, 1);  /* 0C0ACD08 sts.l pr,@-Rn */
	r5 += r0;  /* 0C0ACD0A add Rm,Rn */
	r1 = R32(r5 + 0x18u); UPD(0x0C0ACD0Eu, 2);  /* 0C0ACD0C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACD0E add #imm,Rn */
	r4 = R32(r5 + 0x10u); UPD(0x0C0ACD12u, 2);  /* 0C0ACD10 mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x14u); UPD(0x0C0ACD14u, 1);  /* 0C0ACD12 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0ACD14 add Rm,Rn */
	r3 = 0xFFFFE000u; UPD(0x0C0ACD18u, 2);  /* 0C0ACD16 mov.w @(disp,pc),Rn */
	r7 = R32(r5 + 0x1Cu); UPD(0x0C0ACD1Au, 1);  /* 0C0ACD18 mov.l @(disp,Rm),Rn */
	r1 += r3;  /* 0C0ACD1A add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0ACD1Eu, 2);  /* 0C0ACD1C mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0ACD1E add Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ACD22u, 2);  /* 0C0ACD20 mov.l @(disp,pc),Rn */
	IF(0x0C0ACD22u); r0 <<= 2;  /* 0C0ACD22 shll2 Rn */
	W32(r5 + 0x10u, r4); UPD(0x0C0ACD26u, 2);  /* 0C0ACD24 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x14u, r6); UPD(0x0C0ACD28u, 1);  /* 0C0ACD26 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r1); UPD(0x0C0ACD2Au, 1);  /* 0C0ACD28 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACD2Au); r3 = R32(r0 + r2); UPD(0x0C0ACD2Cu, 1);  /* 0C0ACD2A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACD2Eu, 1);  /* 0C0ACD2C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0ACD2E add Rm,Rn */
	IF(0x0C0ACD30u); T = (s32)r2 >= 0;  /* 0C0ACD30 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACD3Au, 5); goto L_0C0ACD3A; } goto L_0C0ACD36; }  /* 0C0ACD32 bt/s */
L_0C0ACD36: BLKS(0x0C0ACD36u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACF00u, 4); goto L_0C0ACF00; }  /* 0C0ACD36 bra */
L_0C0ACD3A: BLKS(0x0C0ACD3Au);
	r8 = 0xA00000u; UPD(0x0C0ACD3Cu, 1);  /* 0C0ACD3A mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0ACD3C add Rm,Rn */
	T = (s32)r2 >= (s32)r8;  /* 0C0ACD3E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACD5Eu, 5); goto L_0C0ACD5E; } goto L_0C0ACD44; }  /* 0C0ACD40 bt/s */
L_0C0ACD44: BLKS(0x0C0ACD44u);
	r11 = 0xC3929E0u; UPD(0x0C0ACD46u, 2);  /* 0C0ACD44 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0ACD46 mov Rm,Rn */
	r10 = R32(r11); UPD(0x0C0ACD4Au, 2);  /* 0C0ACD48 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACD4Cu, 1);  /* 0C0ACD4A mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C0ACD4C sub Rm,Rn */
	r2 += r6;  /* 0C0ACD4E add Rm,Rn */
	IF(0x0C0ACD50u); T = (s32)r2 >= 0;  /* 0C0ACD50 cmp/pz Rn */
	if (T) { UPD(0x0C0ACD56u, 6); goto L_0C0ACD56; }  /* 0C0ACD52 bt */
L_0C0ACD54: BLKS(0x0C0ACD54u);
	r2 = 0u - r2;  /* 0C0ACD54 neg Rm,Rn */
	UPD(0x0C0ACD56u, 1);
L_0C0ACD56: BLKS(0x0C0ACD56u);
	r12 = 0x780000u; UPD(0x0C0ACD58u, 1);  /* 0C0ACD56 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0ACD58 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACD5A cmp/ge Rm,Rn */
	IF(0x0C0ACD5Cu); r1 = T;  /* 0C0ACD5C movt Rn */
	UPD(0x0C0ACD5Eu, 3);
L_0C0ACD5E: BLKS(0x0C0ACD5Eu);
	r6 = (u32)(s32)(s16)r1;  /* 0C0ACD5E exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0ACD60 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACD90u, 5); goto L_0C0ACD90; } goto L_0C0ACD66; }  /* 0C0ACD62 bt/s */
L_0C0ACD66: BLKS(0x0C0ACD66u);
	IF(0x0C0ACD66u); MACL = r9 * r2;  /* 0C0ACD66 mul.l Rm,Rn */
	r13 = 0x0u;  /* 0C0ACD68 mov #imm,Rn */
	r9 = 0xC275E1Cu; UPD(0x0C0ACD6Cu, 5);  /* 0C0ACD6A mov.l @(disp,pc),Rn */
	IF(0x0C0ACD6Cu); r0 = MACL;  /* 0C0ACD6C sts macl,Rn */
	IF(0x0C0ACD6Eu); W32(r0 + r9, r13); UPD(0x0C0ACD70u, 2);  /* 0C0ACD6E mov.l Rm,@(r0,Rn) */
L_0C0ACD70: BLKS(0x0C0ACD70u);
	r14 += 0x8u;  /* 0C0ACD70 add #imm,Rn */
	r15 = r14;  /* 0C0ACD72 mov Rm,Rn */
	IF(0x0C0ACD74u); PR = R32(r15); r15 += 4; UPD(0x0C0ACD76u, 3);  /* 0C0ACD74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACD78u, 1);  /* 0C0ACD76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACD7Au, 1);  /* 0C0ACD78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACD7Cu, 1);  /* 0C0ACD7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACD7Eu, 1);  /* 0C0ACD7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACD80u, 1);  /* 0C0ACD7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACD82u, 1);  /* 0C0ACD80 mov.l @Rm+,Rn */
	IF(0x0C0ACD82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACD82 rts */
L_0C0ACD90: BLKS(0x0C0ACD90u);
	r3 = 0x38u;  /* 0C0ACD90 mov #imm,Rn */
	IF(0x0C0ACD92u); MACL = r9 * r3;  /* 0C0ACD92 mul.l Rm,Rn */
	r7 = 0xC275E1Cu; UPD(0x0C0ACD96u, 4);  /* 0C0ACD94 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACD96 mov #imm,Rn */
	IF(0x0C0ACD98u); r3 = MACL;  /* 0C0ACD98 sts macl,Rn */
	r3 += r7;  /* 0C0ACD9A add Rm,Rn */
	r7 = r3;  /* 0C0ACD9C mov Rm,Rn */
	r7 += 0x30u;  /* 0C0ACD9E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ACDA2u, 6);  /* 0C0ACDA0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0ACDA2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0ACDA4 extu.b Rm,Rn */
	T = r0 > r5;  /* 0C0ACDA6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ACD70u, 6); goto L_0C0ACD70; } UPD(0x0C0ACDACu, 1); goto L_0C0ACDAC; }  /* 0C0ACDA8 bf/s */
L_0C0ACDAC: BLKS(0x0C0ACDACu);
	r10 = R32(r3 + 0x4u); UPD(0x0C0ACDAEu, 1);  /* 0C0ACDAC mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x10u); UPD(0x0C0ACDB0u, 1);  /* 0C0ACDAE mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0ACDB0 mov Rm,Rn */
	r11 = R32(r3); UPD(0x0C0ACDB4u, 2);  /* 0C0ACDB2 mov.l @Rm,Rn */
	IF(0x0C0ACDB4u); r0 <<= 2;  /* 0C0ACDB4 shll2 Rn */
	r13 = R32(r3 + 0x14u); UPD(0x0C0ACDB8u, 2);  /* 0C0ACDB6 mov.l @(disp,Rm),Rn */
	W8(r7, r6); UPD(0x0C0ACDBAu, 1);  /* 0C0ACDB8 mov.b Rm,@Rn */
	r3 += 0x34u;  /* 0C0ACDBA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACDBEu, 2);  /* 0C0ACDBC mov.b @Rm,Rn */
	W32(r14, r6); UPD(0x0C0ACDC0u, 1);  /* 0C0ACDBE mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0ACDC0 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACDC4u, 2);  /* 0C0ACDC2 mov.b @Rm,Rn */
	r8 = 0xC1EEBA4u; UPD(0x0C0ACDC6u, 1);  /* 0C0ACDC4 mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACDC8u, 1);  /* 0C0ACDC6 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0ACDCAu, 1);  /* 0C0ACDC8 mov.l Rm,@(disp,Rn) */
	r2 += r12;  /* 0C0ACDCA add Rm,Rn */
	IF(0x0C0ACDCCu); T = (s32)r2 >= 0;  /* 0C0ACDCC cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0ACDD0u); r3 = R32(r0 + r8); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0ACEB0u, 5); goto L_0C0ACEB0; } UPD(0x0C0ACDD2u, 1); goto L_0C0ACDD2; }  /* 0C0ACDCE bf/s */
L_0C0ACDD2: BLKS(0x0C0ACDD2u);
	r5 = 0xA00000u; UPD(0x0C0ACDD4u, 1);  /* 0C0ACDD2 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACDD4 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACDD6 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDF4u, 5); goto L_0C0ACDF4; } goto L_0C0ACDDC; }  /* 0C0ACDD8 bt/s */
L_0C0ACDDC: BLKS(0x0C0ACDDCu);
	r2 = 0xC3929E0u; UPD(0x0C0ACDDEu, 2);  /* 0C0ACDDC mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0ACDE0u, 1);  /* 0C0ACDDE mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0ACDE2u, 1);  /* 0C0ACDE0 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACDE2 mov Rm,Rn */
	r2 -= r4;  /* 0C0ACDE4 sub Rm,Rn */
	r2 += r0;  /* 0C0ACDE6 add Rm,Rn */
	IF(0x0C0ACDE8u); T = (s32)r2 >= 0;  /* 0C0ACDE8 cmp/pz Rn */
	if (!T) { UPD(0x0C0ACEA0u, 7); goto L_0C0ACEA0; }  /* 0C0ACDEA bf */
L_0C0ACDEC: BLKS(0x0C0ACDECu);
	r7 = 0x780000u; UPD(0x0C0ACDEEu, 1);  /* 0C0ACDEC mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C0ACDEE add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACDF0 cmp/ge Rm,Rn */
	IF(0x0C0ACDF2u); r1 = T;  /* 0C0ACDF2 movt Rn */
	UPD(0x0C0ACDF4u, 3);
L_0C0ACDF4: BLKS(0x0C0ACDF4u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0ACDF4 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0ACDF6 tst Rm,Rn */
	if (T) { UPD(0x0C0ACE30u, 5); goto L_0C0ACE30; }  /* 0C0ACDF8 bt */
L_0C0ACDFA: BLKS(0x0C0ACDFAu);
	r12 = 0x38u;  /* 0C0ACDFA mov #imm,Rn */
	UPD(0x0C0ACDFCu, 1);
L_0C0ACDFC: BLKS(0x0C0ACDFCu);
	IF(0x0C0ACDFCu); MACL = r9 * r12;  /* 0C0ACDFC mul.l Rm,Rn */
	UPD(0x0C0ACDFEu, 2);
L_0C0ACDFE: BLKS(0x0C0ACDFEu);
	r11 = 0xC275E1Cu; UPD(0x0C0ACE00u, 1);  /* 0C0ACDFE mov.l @(disp,pc),Rn */
	IF(0x0C0ACE00u); r2 = MACL;  /* 0C0ACE00 sts macl,Rn */
	r2 += r11;  /* 0C0ACE02 add Rm,Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0ACE06u, 3);  /* 0C0ACE04 mov.l @(disp,Rm),Rn */
	r9 = 0x1u;  /* 0C0ACE06 mov #imm,Rn */
	r0 &= 0xFu;  /* 0C0ACE08 and #imm,r0 */
	T = (s32)r0 > (s32)r9;  /* 0C0ACE0A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0ACD70u, 6); goto L_0C0ACD70; }  /* 0C0ACE0C bf */
L_0C0ACE0E: BLKS(0x0C0ACE0Eu);
	r2 += 0x33u;  /* 0C0ACE0E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACE12u, 2);  /* 0C0ACE10 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACE12 add #imm,Rn */
	r8 = 0x0u;  /* 0C0ACE14 mov #imm,Rn */
	r13 = 0xC06CC20u; UPD(0x0C0ACE18u, 3);  /* 0C0ACE16 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFCDu;  /* 0C0ACE18 add #imm,Rn */
	W32(r15, r8); UPD(0x0C0ACE1Cu, 2);  /* 0C0ACE1A mov.l Rm,@Rn */
	r7 = r1 & 0xFF;  /* 0C0ACE1C extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0ACE20u, 2);  /* 0C0ACE1E mov.l Rm,@(disp,Rn) */
	r4 = 0x7u;  /* 0C0ACE20 mov #imm,Rn */
	r5 = R32(r2 + 0x10u); UPD(0x0C0ACE24u, 2);  /* 0C0ACE22 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACE24u); { u32 t_ = r13; PR = 0x0C0ACE28u; r6 = R32(r2 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C0ACE28u); }  /* 0C0ACE24 jsr @Rn */
L_0C0ACE28: BLKS(0x0C0ACE28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0ACD70u, 3); goto L_0C0ACD70; }  /* 0C0ACE28 bra */
L_0C0ACE30: BLKS(0x0C0ACE30u);
	r0 = 0xC0AA550u; UPD(0x0C0ACE32u, 1);  /* 0C0ACE30 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE32u); { u32 t_ = r0; PR = 0x0C0ACE36u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACE36u); }  /* 0C0ACE32 jsr @Rn */
L_0C0ACE36: BLKS(0x0C0ACE36u);
	T = (r0 & r0) == 0;  /* 0C0ACE36 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDFAu, 4); goto L_0C0ACDFA; } goto L_0C0ACE3C; }  /* 0C0ACE38 bt/s */
L_0C0ACE3C: BLKS(0x0C0ACE3Cu);
	r2 = 0xC2755BCu; UPD(0x0C0ACE3Eu, 2);  /* 0C0ACE3C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACE40u, 1);  /* 0C0ACE3E mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0ACE40 mov #imm,Rn */
	IF(0x0C0ACE42u); MACL = r3 * r7;  /* 0C0ACE42 mul.l Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ACE46u, 4);  /* 0C0ACE44 mov.l @(disp,pc),Rn */
	r11 &= r0;  /* 0C0ACE46 and Rm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0ACE4Au, 2);  /* 0C0ACE48 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE4Au); r3 = MACL;  /* 0C0ACE4A sts macl,Rn */
	r3 += r4;  /* 0C0ACE4C add Rm,Rn */
	r11 |= r5;  /* 0C0ACE4E or Rm,Rn */
	W32(r3, r11); UPD(0x0C0ACE52u, 4);  /* 0C0ACE50 mov.l Rm,@Rn */
	r0 = 0x3u;  /* 0C0ACE52 mov #imm,Rn */
	W32(r3 + 0x4u, r10); UPD(0x0C0ACE56u, 2);  /* 0C0ACE54 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0ACE58u, 1);  /* 0C0ACE56 mov.l Rm,@(disp,Rn) */
	r10 += r10;  /* 0C0ACE58 add Rm,Rn */
	W32(r3 + 0x8u, r8); UPD(0x0C0ACE5Cu, 2);  /* 0C0ACE5A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r12); UPD(0x0C0ACE5Eu, 1);  /* 0C0ACE5C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r13); UPD(0x0C0ACE60u, 1);  /* 0C0ACE5E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0ACE62u, 1);  /* 0C0ACE60 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0ACE64u, 1);  /* 0C0ACE62 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ACE64 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0ACE68u, 2);  /* 0C0ACE66 mov.b Rm,@Rn */
	IF(0x0C0ACE68u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACE6Au, 1);  /* 0C0ACE68 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0ACE6A add #imm,Rn */
	W8(r3, r6); UPD(0x0C0ACE6Eu, 2);  /* 0C0ACE6C mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACE6E mov #imm,Rn */
	IF(0x0C0ACE70u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACE72u, 2);  /* 0C0ACE70 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r1; r3 -= 1; W8(r3, v_); } UPD(0x0C0ACE74u, 1);  /* 0C0ACE72 mov.b Rm,@-Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ACE74 add #imm,Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0ACE78u, 2);  /* 0C0ACE76 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AFE40u; UPD(0x0C0ACE7Au, 1);  /* 0C0ACE78 mov.l @(disp,pc),Rn */
	r8 = 0x808080u; UPD(0x0C0ACE7Cu, 1);  /* 0C0ACE7A mov.l @(disp,pc),Rn */
	r12 = 0xC1EEBF4u; UPD(0x0C0ACE7Eu, 1);  /* 0C0ACE7C mov.l @(disp,pc),Rn */
	IF(0x0C0ACE7Eu); { u32 t_ = r13; PR = 0x0C0ACE82u; W32(r3 + 0x2Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ACE82u); }  /* 0C0ACE7E jsr @Rn */
L_0C0ACE82: BLKS(0x0C0ACE82u);
	r10 += r12;  /* 0C0ACE82 add Rm,Rn */
	r0 &= 0x1u;  /* 0C0ACE84 and #imm,r0 */
	IF(0x0C0ACE86u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0ACE88u, 3);  /* 0C0ACE86 mov.b @(r0,Rm),Rn */
	r10 = 0x3Fu;  /* 0C0ACE88 mov #imm,Rn */
	r4 = r11 & 0xFF;  /* 0C0ACE8A extu.b Rm,Rn */
	T = r4 > r10;  /* 0C0ACE8C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r12 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDFCu, 6); goto L_0C0ACDFC; } goto L_0C0ACE92; }  /* 0C0ACE8E bf/s */
L_0C0ACE92: BLKS(0x0C0ACE92u);
	r10 = 0xC0AFC10u; UPD(0x0C0ACE94u, 2);  /* 0C0ACE92 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE94u); { u32 t_ = r10; PR = 0x0C0ACE98u; IF(0x0C0ACE96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ACE98u); }  /* 0C0ACE94 jsr @Rn */
L_0C0ACE98: BLKS(0x0C0ACE98u);
	{ IF(0x0C0ACE9Au); MACL = r9 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C0ACDFEu, 4); goto L_0C0ACDFE; }  /* 0C0ACE98 bra */
L_0C0ACEA0: BLKS(0x0C0ACEA0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACDECu, 3); goto L_0C0ACDEC; }  /* 0C0ACEA0 bra */
L_0C0ACEB0: BLKS(0x0C0ACEB0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACDD2u, 3); goto L_0C0ACDD2; }  /* 0C0ACEB0 bra */
L_0C0ACF00: BLKS(0x0C0ACF00u);
	{ IF(0x0C0ACF02u); ; /* slot nop */ UPD(0x0C0ACD3Au, 3); goto L_0C0ACD3A; }  /* 0C0ACF00 bra */
}

void f_0C0ACF10(sh3_t *c)
{
	LOCALS;
L_0C0ACF10: BLKS(0x0C0ACF10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACF12u, 1);  /* 0C0ACF10 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0ACF12 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACF16u, 2);  /* 0C0ACF14 mov.l Rm,@-Rn */
	r0 = 0xC286509u; UPD(0x0C0ACF18u, 1);  /* 0C0ACF16 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF18u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACF1Au, 1);  /* 0C0ACF18 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C0ACF1Cu, 1);  /* 0C0ACF1A mov.b @Rm,Rn */
	r0 = 0xC0AA550u; UPD(0x0C0ACF1Eu, 1);  /* 0C0ACF1C mov.l @(disp,pc),Rn */
	IF(0x0C0ACF1Eu); { u32 t_ = r0; PR = 0x0C0ACF22u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACF22u); }  /* 0C0ACF1E jsr @Rn */
L_0C0ACF22: BLKS(0x0C0ACF22u);
	T = (r0 & r0) == 0;  /* 0C0ACF22 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACFA0u, 4); goto L_0C0ACFA0; } goto L_0C0ACF28; }  /* 0C0ACF24 bt/s */
L_0C0ACF28: BLKS(0x0C0ACF28u);
	r7 = 0xC2755BCu; UPD(0x0C0ACF2Au, 2);  /* 0C0ACF28 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ACF2Cu, 1);  /* 0C0ACF2A mov.w @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0ACF2C mov #imm,Rn */
	IF(0x0C0ACF2Eu); MACL = r0 * r4;  /* 0C0ACF2E mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0ACF32u, 4);  /* 0C0ACF30 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0ACF32 mov #imm,Rn */
	IF(0x0C0ACF34u); r4 = MACL;  /* 0C0ACF34 sts macl,Rn */
	r4 += r5;  /* 0C0ACF36 add Rm,Rn */
	r6 = 0xC0000010u; UPD(0x0C0ACF3Au, 4);  /* 0C0ACF38 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF3Au); MACL = r8 * r7;  /* 0C0ACF3A mul.l Rm,Rn */
	W32(r4 + 0x4u, r3); UPD(0x0C0ACF3Eu, 3);  /* 0C0ACF3C mov.l Rm,@(disp,Rn) */
	W32(r4, r6); UPD(0x0C0ACF40u, 1);  /* 0C0ACF3E mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C0ACF40 mov #imm,Rn */
	r2 = 0xC21F5E2u; UPD(0x0C0ACF44u, 2);  /* 0C0ACF42 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF44u); r7 = MACL;  /* 0C0ACF44 sts macl,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0ACF48u, 2);  /* 0C0ACF46 mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r3); UPD(0x0C0ACF4Au, 1);  /* 0C0ACF48 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0ACF4A add Rm,Rn */
	W32(r4 + 0x8u, r3); UPD(0x0C0ACF4Eu, 2);  /* 0C0ACF4C mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACF50u, 1);  /* 0C0ACF4E mov.w @Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0ACF52u, 1);  /* 0C0ACF50 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACF52u); r6 <<= 16;  /* 0C0ACF52 shll16 Rn */
	r6 -= r2;  /* 0C0ACF54 sub Rm,Rn */
	W32(r4 + 0x10u, r6); UPD(0x0C0ACF58u, 3);  /* 0C0ACF56 mov.l Rm,@(disp,Rn) */
	r7 += 0x42u;  /* 0C0ACF58 add #imm,Rn */
	r5 = 0xC392D5Eu; UPD(0x0C0ACF5Cu, 2);  /* 0C0ACF5A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ACF5Eu, 1);  /* 0C0ACF5C mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0ACF60u, 1);  /* 0C0ACF5E mov.w @(disp,pc),Rn */
	IF(0x0C0ACF60u); r6 <<= 16;  /* 0C0ACF60 shll16 Rn */
	W32(r4 + 0x14u, r6); UPD(0x0C0ACF64u, 2);  /* 0C0ACF62 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACF64u); MACL = r0 * r2;  /* 0C0ACF64 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0ACF68u, 3);  /* 0C0ACF66 mov.l @(disp,pc),Rn */
	W32(r4 + 0x1Cu, r3); UPD(0x0C0ACF6Au, 1);  /* 0C0ACF68 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACF6Au); r5 = MACL;  /* 0C0ACF6A sts macl,Rn */
	W32(r4 + 0x18u, r3); UPD(0x0C0ACF6Eu, 2);  /* 0C0ACF6C mov.l Rm,@(disp,Rn) */
	r6 += r5;  /* 0C0ACF6E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0ACF72u, 2);  /* 0C0ACF70 mov.w @(disp,pc),Rn */
	IF(0x0C0ACF72u); W8(r0 + r6, r8); UPD(0x0C0ACF74u, 1);  /* 0C0ACF72 mov.b Rm,@(r0,Rn) */
	r0 = r4;  /* 0C0ACF74 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ACF78u, 2);  /* 0C0ACF76 mov.b @Rm,Rn */
	r4 += 0x33u;  /* 0C0ACF78 add #imm,Rn */
	W8(r4, r6); UPD(0x0C0ACF7Cu, 2);  /* 0C0ACF7A mov.b Rm,@Rn */
	r0 += 0x30u;  /* 0C0ACF7C add #imm,Rn */
	r4 += 0xFFFFFFCDu;  /* 0C0ACF7E add #imm,Rn */
	W8(r0, r3); UPD(0x0C0ACF82u, 3);  /* 0C0ACF80 mov.b Rm,@Rn */
	W32(r4 + 0x28u, r3); UPD(0x0C0ACF84u, 1);  /* 0C0ACF82 mov.l Rm,@(disp,Rn) */
	r2 = 0xC392D5Cu; UPD(0x0C0ACF86u, 1);  /* 0C0ACF84 mov.l @(disp,pc),Rn */
	r3 = 0xC283CB2u; UPD(0x0C0ACF88u, 1);  /* 0C0ACF86 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACF8Au, 1);  /* 0C0ACF88 mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACF8Cu, 1);  /* 0C0ACF8A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0ACF8C extu.b Rm,Rn */
	r6 = 0xC392B09u; UPD(0x0C0ACF90u, 2);  /* 0C0ACF8E mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C0ACF90 extu.b Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0ACF94u, 2);  /* 0C0ACF92 mov.b @Rm,Rn */
	IF(0x0C0ACF94u); r0 <<= 16;  /* 0C0ACF94 shll16 Rn */
	IF(0x0C0ACF96u); r7 <<= 8;  /* 0C0ACF96 shll8 Rn */
	r0 |= r7;  /* 0C0ACF98 or Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C0ACF9A extu.b Rm,Rn */
	r0 |= r3;  /* 0C0ACF9C or Rm,Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0ACFA0u, 6);  /* 0C0ACF9E mov.l Rm,@(disp,Rn) */
L_0C0ACFA0: BLKS(0x0C0ACFA0u);
	r0 = 0x1u;  /* 0C0ACFA0 mov #imm,Rn */
	r15 = r14;  /* 0C0ACFA2 mov Rm,Rn */
	IF(0x0C0ACFA4u); PR = R32(r15); r15 += 4; UPD(0x0C0ACFA6u, 3);  /* 0C0ACFA4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACFA8u, 1);  /* 0C0ACFA6 mov.l @Rm+,Rn */
	IF(0x0C0ACFA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACFA8 rts */
}

void f_0C0ACFE0(sh3_t *c)
{
	LOCALS;
L_0C0ACFE0: BLKS(0x0C0ACFE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE2u, 1);  /* 0C0ACFE0 mov.l Rm,@-Rn */
	r2 = 0x38u;  /* 0C0ACFE2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE6u, 2);  /* 0C0ACFE4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE8u, 1);  /* 0C0ACFE6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0ACFE8 exts.w Rm,Rn */
	IF(0x0C0ACFEAu); MACL = r10 * r2;  /* 0C0ACFEA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFEEu, 4);  /* 0C0ACFEC mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACFF0u, 1);  /* 0C0ACFEE mov.l @(disp,pc),Rn */
	IF(0x0C0ACFF0u); r8 = MACL;  /* 0C0ACFF0 sts macl,Rn */
	IF(0x0C0ACFF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACFF4u, 2);  /* 0C0ACFF2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0ACFF4 add Rm,Rn */
	r8 += 0x34u;  /* 0C0ACFF6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0ACFFAu, 3);  /* 0C0ACFF8 mov.b @Rm,Rn */
	r0 = 0x8u;  /* 0C0ACFFA mov #imm,Rn */
	r14 = r15;  /* 0C0ACFFC mov Rm,Rn */
	T = r1 > r0;  /* 0C0ACFFE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD008u, 6); goto L_0C0AD008; } goto L_0C0AD004; }  /* 0C0AD000 bf/s */
L_0C0AD004: BLKS(0x0C0AD004u);
	r3 = 0x0u;  /* 0C0AD004 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0AD008u, 3);  /* 0C0AD006 mov.l Rm,@Rn */
L_0C0AD008: BLKS(0x0C0AD008u);
	r9 = R32(r8 + 0xCu); UPD(0x0C0AD00Au, 1);  /* 0C0AD008 mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0AD00A tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD070u, 4); goto L_0C0AD070; } goto L_0C0AD010; }  /* 0C0AD00C bt/s */
L_0C0AD010: BLKS(0x0C0AD010u);
	r2 += 0x30u;  /* 0C0AD010 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD014u, 3);  /* 0C0AD012 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0AD014 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0AD016 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0AD018 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AD060u, 6); goto L_0C0AD060; } UPD(0x0C0AD01Eu, 1); goto L_0C0AD01E; }  /* 0C0AD01A bt/s */
L_0C0AD01E: BLKS(0x0C0AD01Eu);
	r3 = 0x38u;  /* 0C0AD01E mov #imm,Rn */
	IF(0x0C0AD020u); MACL = r10 * r3;  /* 0C0AD020 mul.l Rm,Rn */
	r2 = 0xC392D5Cu; UPD(0x0C0AD024u, 4);  /* 0C0AD022 mov.l @(disp,pc),Rn */
	r7 = 0xC283CB2u; UPD(0x0C0AD026u, 1);  /* 0C0AD024 mov.l @(disp,pc),Rn */
	IF(0x0C0AD026u); r9 = MACL;  /* 0C0AD026 sts macl,Rn */
	r8 = 0xC275E1Cu; UPD(0x0C0AD02Au, 2);  /* 0C0AD028 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD02Cu, 1);  /* 0C0AD02A mov.b @Rm,Rn */
	r8 += r9;  /* 0C0AD02C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD030u, 2);  /* 0C0AD02E mov.b @Rm,Rn */
	r9 = r0 & 0xFF;  /* 0C0AD030 extu.b Rm,Rn */
	r4 = 0xC392B09u; UPD(0x0C0AD034u, 2);  /* 0C0AD032 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD034 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AD038u, 2);  /* 0C0AD036 mov.b @Rm,Rn */
	IF(0x0C0AD038u); r5 <<= 8;  /* 0C0AD038 shll8 Rn */
	IF(0x0C0AD03Au); r9 <<= 16;  /* 0C0AD03A shll16 Rn */
	r9 |= r5;  /* 0C0AD03C or Rm,Rn */
	r10 = r3 & 0xFF;  /* 0C0AD03E extu.b Rm,Rn */
	r9 |= r10;  /* 0C0AD040 or Rm,Rn */
	W32(r8 + 0x2Cu, r9); UPD(0x0C0AD044u, 6);  /* 0C0AD042 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0AD044 mov Rm,Rn */
	IF(0x0C0AD046u); PR = R32(r15); r15 += 4; UPD(0x0C0AD048u, 2);  /* 0C0AD046 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD04Au, 1);  /* 0C0AD048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD04Cu, 1);  /* 0C0AD04A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD04Eu, 1);  /* 0C0AD04C mov.l @Rm+,Rn */
	IF(0x0C0AD04Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD04E rts */
L_0C0AD060: BLKS(0x0C0AD060u);
	r9 += 0x1u;  /* 0C0AD060 add #imm,Rn */
	r7 = 0x3u;  /* 0C0AD062 mov #imm,Rn */
	r0 = 0x0u;  /* 0C0AD064 mov #imm,Rn */
	r9 &= r7;  /* 0C0AD066 and Rm,Rn */
	W8(r2, r0); UPD(0x0C0AD06Au, 5);  /* 0C0AD068 mov.b Rm,@Rn */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD01Eu, 3); goto L_0C0AD01E; }  /* 0C0AD06A bra */
L_0C0AD070: BLKS(0x0C0AD070u);
	r0 = 0xC0AFE40u; UPD(0x0C0AD072u, 1);  /* 0C0AD070 mov.l @(disp,pc),Rn */
	IF(0x0C0AD072u); { u32 t_ = r0; PR = 0x0C0AD076u; IF(0x0C0AD074u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD076u); }  /* 0C0AD072 jsr @Rn */
L_0C0AD076: BLKS(0x0C0AD076u);
	r4 = 0x100u; UPD(0x0C0AD078u, 1);  /* 0C0AD076 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0AD078 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AD01Eu, 4); goto L_0C0AD01E; }  /* 0C0AD07A bt */
L_0C0AD07C: BLKS(0x0C0AD07Cu);
	r8 += 0x30u;  /* 0C0AD07C add #imm,Rn */
	W8(r8, r9); UPD(0x0C0AD080u, 2);  /* 0C0AD07E mov.b Rm,@Rn */
	r8 += 0xFFFFFFD0u;  /* 0C0AD080 add #imm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0AD084u, 2);  /* 0C0AD082 mov.l @(disp,Rm),Rn */
	r5 += 0x1u;  /* 0C0AD084 add #imm,Rn */
	{ W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD01Eu, 4); goto L_0C0AD01E; }  /* 0C0AD086 bra */
}

void f_0C0AD0A0(sh3_t *c)
{
	LOCALS;
L_0C0AD0A0: BLKS(0x0C0AD0A0u);
	r2 = 0x38u;  /* 0C0AD0A0 mov #imm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD0A2 exts.w Rm,Rn */
	IF(0x0C0AD0A4u); MACL = r1 * r2;  /* 0C0AD0A4 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD0A8u, 5);  /* 0C0AD0A6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0AAu, 1);  /* 0C0AD0A8 mov.l Rm,@-Rn */
	IF(0x0C0AD0AAu); r3 = MACL;  /* 0C0AD0AA sts macl,Rn */
	r3 += r0;  /* 0C0AD0AC add Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0AD0B0u, 3);  /* 0C0AD0AE mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x20u); UPD(0x0C0AD0B2u, 1);  /* 0C0AD0B0 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0AD0B2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD0BEu, 4); goto L_0C0AD0BE; } goto L_0C0AD0B8; }  /* 0C0AD0B4 bt/s */
L_0C0AD0B8: BLKS(0x0C0AD0B8u);
	r4 = 0x8000u; UPD(0x0C0AD0BAu, 2);  /* 0C0AD0B8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AD0BA add Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C0AD0BEu, 2);  /* 0C0AD0BC mov.l Rm,@(disp,Rn) */
L_0C0AD0BE: BLKS(0x0C0AD0BEu);
	r6 = R32(r3 + 0x10u); UPD(0x0C0AD0C0u, 1);  /* 0C0AD0BE mov.l @(disp,Rm),Rn */
	r5 = 0x147FFFFu; UPD(0x0C0AD0C2u, 1);  /* 0C0AD0C0 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0AD0C2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD0D0u, 4); goto L_0C0AD0D0; } goto L_0C0AD0C8; }  /* 0C0AD0C4 bf/s */
L_0C0AD0C8: BLKS(0x0C0AD0C8u);
	W32(r3, r7); UPD(0x0C0AD0CAu, 2);  /* 0C0AD0C8 mov.l Rm,@Rn */
L_0C0AD0CA: BLKS(0x0C0AD0CAu);
	r15 = r14;  /* 0C0AD0CA mov Rm,Rn */
	IF(0x0C0AD0CCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD0CC rts */
L_0C0AD0D0: BLKS(0x0C0AD0D0u);
	r5 = R32(r3 + 0x18u); UPD(0x0C0AD0D2u, 1);  /* 0C0AD0D0 mov.l @(disp,Rm),Rn */
	r2 = 0xC3929E0u; UPD(0x0C0AD0D4u, 1);  /* 0C0AD0D2 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0AD0D6u, 1);  /* 0C0AD0D4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3 + 0x1Cu); UPD(0x0C0AD0D8u, 1);  /* 0C0AD0D6 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C0AD0DAu, 1);  /* 0C0AD0D8 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0AD0DA add Rm,Rn */
	{ W32(r3 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD0CAu, 4); goto L_0C0AD0CA; }  /* 0C0AD0DC bra */
}

/* FUN_0c0ad0f0 */
void f_0C0AD0F0(sh3_t *c)
{
	LOCALS;
L_0C0AD0F0: BLKS(0x0C0AD0F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0F2u, 1);  /* 0C0AD0F0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0AD0F2 mov #imm,Rn */
	r3 = 0x23Fu; UPD(0x0C0AD0F6u, 2);  /* 0C0AD0F4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD0F6 mov Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0AD0FAu, 2);  /* 0C0AD0F8 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AD0FA mov #imm,Rn */
	UPD(0x0C0AD0FCu, 1);
L_0C0AD0FC: BLKS(0x0C0AD0FCu);
	W32(r2, r7); UPD(0x0C0AD0FEu, 1);  /* 0C0AD0FC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C0AD0FE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0AD100 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0AD102 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD0FCu, 6); goto L_0C0AD0FC; } goto L_0C0AD108; }  /* 0C0AD104 bf/s */
L_0C0AD108: BLKS(0x0C0AD108u);
	r15 = r14;  /* 0C0AD108 mov Rm,Rn */
	IF(0x0C0AD10Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD10A rts */
}

/* FUN_0c0ad120 */
void f_0C0AD120(sh3_t *c)
{
	LOCALS;
L_0C0AD120: BLKS(0x0C0AD120u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD122u, 1);  /* 0C0AD120 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0AD122 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD126u, 2);  /* 0C0AD124 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AD126 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD12Au, 2);  /* 0C0AD128 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AD12A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD12Eu, 2);  /* 0C0AD12C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD130u, 1);  /* 0C0AD12E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD132u, 1);  /* 0C0AD130 mov.l Rm,@-Rn */
	r0 = 0xC26C8D6u; UPD(0x0C0AD134u, 1);  /* 0C0AD132 mov.l @(disp,pc),Rn */
	IF(0x0C0AD134u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD136u, 1);  /* 0C0AD134 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0AD136 mov Rm,Rn */
	r2 = 0xC28353Eu; UPD(0x0C0AD13Au, 2);  /* 0C0AD138 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD13A mov Rm,Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD13Eu, 2);  /* 0C0AD13C mov.l @(disp,pc),Rn */
	r12 = 0xC1EEAF4u; UPD(0x0C0AD140u, 1);  /* 0C0AD13E mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C0AD142u, 1);  /* 0C0AD140 mov.w Rm,@Rn */
	W16(r0, r3); UPD(0x0C0AD144u, 1);  /* 0C0AD142 mov.w Rm,@Rn */
L_0C0AD144: BLKS(0x0C0AD144u);
	r2 = r9;  /* 0C0AD144 mov Rm,Rn */
	r2 += r10;  /* 0C0AD146 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AD14Au, 3);  /* 0C0AD148 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AD14A tst Rm,Rn */
	if (!T) { UPD(0x0C0AD1C0u, 4); goto L_0C0AD1C0; }  /* 0C0AD14C bf */
L_0C0AD14E: BLKS(0x0C0AD14Eu);
	r7 = r8;  /* 0C0AD14E mov Rm,Rn */
	UPD(0x0C0AD150u, 1);
L_0C0AD150: BLKS(0x0C0AD150u);
	r7 += 0x1u;  /* 0C0AD150 add #imm,Rn */
	r6 = 0x1FFu; UPD(0x0C0AD154u, 2);  /* 0C0AD152 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0AD154 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0AD156 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD144u, 5); goto L_0C0AD144; } goto L_0C0AD15C; }  /* 0C0AD158 bf/s */
L_0C0AD15C: BLKS(0x0C0AD15Cu);
	r8 = 0x200u; UPD(0x0C0AD15Eu, 2);  /* 0C0AD15C mov.w @(disp,pc),Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD160u, 1);  /* 0C0AD15E mov.l @(disp,pc),Rn */
	r11 = 0xC28353Eu; UPD(0x0C0AD162u, 1);  /* 0C0AD160 mov.l @(disp,pc),Rn */
	r12 = 0xC1EEAF4u; UPD(0x0C0AD164u, 1);  /* 0C0AD162 mov.l @(disp,pc),Rn */
	r9 = 0x7000u; UPD(0x0C0AD166u, 1);  /* 0C0AD164 mov.w @(disp,pc),Rn */
	IF(0x0C0AD166u); ;  /* 0C0AD166 nop */
	UPD(0x0C0AD168u, 1);
L_0C0AD168: BLKS(0x0C0AD168u);
	r2 = r9;  /* 0C0AD168 mov Rm,Rn */
	r2 += r10;  /* 0C0AD16A add Rm,Rn */
	r3 = R32(r2); UPD(0x0C0AD16Eu, 3);  /* 0C0AD16C mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0AD16E tst Rm,Rn */
	if (!T) { UPD(0x0C0AD1A0u, 4); goto L_0C0AD1A0; }  /* 0C0AD170 bf */
L_0C0AD172: BLKS(0x0C0AD172u);
	r4 = r8;  /* 0C0AD172 mov Rm,Rn */
	UPD(0x0C0AD174u, 1);
L_0C0AD174: BLKS(0x0C0AD174u);
	r4 += 0x1u;  /* 0C0AD174 add #imm,Rn */
	r5 = 0x23Fu; UPD(0x0C0AD178u, 2);  /* 0C0AD176 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD178 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C0AD17A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD168u, 5); goto L_0C0AD168; } goto L_0C0AD180; }  /* 0C0AD17C bf/s */
L_0C0AD180: BLKS(0x0C0AD180u);
	r15 = r14;  /* 0C0AD180 mov Rm,Rn */
	IF(0x0C0AD182u); PR = R32(r15); r15 += 4; UPD(0x0C0AD184u, 3);  /* 0C0AD182 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD186u, 1);  /* 0C0AD184 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD188u, 1);  /* 0C0AD186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD18Au, 1);  /* 0C0AD188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD18Cu, 1);  /* 0C0AD18A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD18Eu, 1);  /* 0C0AD18C mov.l @Rm+,Rn */
	IF(0x0C0AD18Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD18E rts */
L_0C0AD1A0: BLKS(0x0C0AD1A0u);
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AD1A2u, 1);  /* 0C0AD1A0 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0AD1A2 add #imm,Rn */
	W16(r11, r0); UPD(0x0C0AD1A6u, 2);  /* 0C0AD1A4 mov.w Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0AD1A8u, 1);  /* 0C0AD1A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD1A8u); r0 <<= 2;  /* 0C0AD1A8 shll2 Rn */
	IF(0x0C0AD1AAu); r2 = R32(r0 + r12); UPD(0x0C0AD1ACu, 2);  /* 0C0AD1AA mov.l @(r0,Rm),Rn */
	IF(0x0C0AD1ACu); { u32 t_ = r2; PR = 0x0C0AD1B0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD1B0u); }  /* 0C0AD1AC jsr @Rn */
L_0C0AD1B0: BLKS(0x0C0AD1B0u);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AD174u, 3); goto L_0C0AD174; }  /* 0C0AD1B0 bra */
L_0C0AD1C0: BLKS(0x0C0AD1C0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0AD1C2u, 1);  /* 0C0AD1C0 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AD1C4u, 1);  /* 0C0AD1C2 mov.w @Rm,Rn */
	IF(0x0C0AD1C4u); r0 <<= 2;  /* 0C0AD1C4 shll2 Rn */
	r4 += 0x1u;  /* 0C0AD1C6 add #imm,Rn */
	IF(0x0C0AD1C8u); r5 = R32(r0 + r12); UPD(0x0C0AD1CAu, 3);  /* 0C0AD1C8 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C0AD1CCu, 1);  /* 0C0AD1CA mov.w Rm,@Rn */
	IF(0x0C0AD1CCu); { u32 t_ = r5; PR = 0x0C0AD1D0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD1D0u); }  /* 0C0AD1CC jsr @Rn */
L_0C0AD1D0: BLKS(0x0C0AD1D0u);
	{ r7 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AD150u, 3); goto L_0C0AD150; }  /* 0C0AD1D0 bra */
}

/* FUN_0c0ad1f0 */
void f_0C0AD1F0(sh3_t *c)
{
	LOCALS;
L_0C0AD1F0: BLKS(0x0C0AD1F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD1F2u, 1);  /* 0C0AD1F0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0AD1F2 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AD1F6u, 2);  /* 0C0AD1F4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD1F6 mov Rm,Rn */
	r0 = 0xC27557Cu; UPD(0x0C0AD1FAu, 2);  /* 0C0AD1F8 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AD1FA mov #imm,Rn */
	r5 = 0x1FFu; UPD(0x0C0AD1FEu, 2);  /* 0C0AD1FC mov.w @(disp,pc),Rn */
	r6 = 0x40000000u; UPD(0x0C0AD200u, 1);  /* 0C0AD1FE mov.l @(disp,pc),Rn */
L_0C0AD200: BLKS(0x0C0AD200u);
	r2 = r3;  /* 0C0AD200 mov Rm,Rn */
	r2 += r4;  /* 0C0AD202 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0AD206u, 3);  /* 0C0AD204 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD206 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x33u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD21Eu, 4); goto L_0C0AD21E; } goto L_0C0AD20C; }  /* 0C0AD208 bt/s */
L_0C0AD20C: BLKS(0x0C0AD20Cu);
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD20Eu, 2);  /* 0C0AD20C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AD20E mov #imm,Rn */
	r1 &= r2;  /* 0C0AD210 and Rm,Rn */
	r1 += r1;  /* 0C0AD212 add Rm,Rn */
	r2 = r1;  /* 0C0AD214 mov Rm,Rn */
	r2 += r0;  /* 0C0AD216 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD21Au, 6);  /* 0C0AD218 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C0AD21A add #imm,Rn */
	W16(r2, r1); UPD(0x0C0AD21Eu, 2);  /* 0C0AD21C mov.w Rm,@Rn */
L_0C0AD21E: BLKS(0x0C0AD21Eu);
	r2 = r7;  /* 0C0AD21E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AD220 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AD222 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD224 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD200u, 7); goto L_0C0AD200; } goto L_0C0AD22A; }  /* 0C0AD226 bf/s */
L_0C0AD22A: BLKS(0x0C0AD22Au);
	r15 = r14;  /* 0C0AD22A mov Rm,Rn */
	IF(0x0C0AD22Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD22C rts */
}

/* FUN_0c0ad240 */
void f_0C0AD240(sh3_t *c)
{
	LOCALS;
L_0C0AD240: BLKS(0x0C0AD240u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD242u, 1);  /* 0C0AD240 mov.l Rm,@-Rn */
	r7 = 0x200u; UPD(0x0C0AD244u, 1);  /* 0C0AD242 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD244 mov Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AD248u, 2);  /* 0C0AD246 mov.l @(disp,pc),Rn */
	r0 = 0xC27DDB4u; UPD(0x0C0AD24Au, 1);  /* 0C0AD248 mov.l @(disp,pc),Rn */
	r5 = 0x23Fu; UPD(0x0C0AD24Cu, 1);  /* 0C0AD24A mov.w @(disp,pc),Rn */
	r3 = 0x7000u; UPD(0x0C0AD24Eu, 1);  /* 0C0AD24C mov.w @(disp,pc),Rn */
	r6 = 0x40000000u; UPD(0x0C0AD250u, 1);  /* 0C0AD24E mov.l @(disp,pc),Rn */
L_0C0AD250: BLKS(0x0C0AD250u);
	r2 = r3;  /* 0C0AD250 mov Rm,Rn */
	r2 += r4;  /* 0C0AD252 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0AD256u, 3);  /* 0C0AD254 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD256 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x33u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD26Eu, 4); goto L_0C0AD26E; } goto L_0C0AD25C; }  /* 0C0AD258 bt/s */
L_0C0AD25C: BLKS(0x0C0AD25Cu);
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD25Eu, 2);  /* 0C0AD25C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AD25E mov #imm,Rn */
	r1 &= r2;  /* 0C0AD260 and Rm,Rn */
	r1 += r1;  /* 0C0AD262 add Rm,Rn */
	r2 = r1;  /* 0C0AD264 mov Rm,Rn */
	r2 += r0;  /* 0C0AD266 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD26Au, 6);  /* 0C0AD268 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C0AD26A add #imm,Rn */
	W16(r2, r1); UPD(0x0C0AD26Eu, 2);  /* 0C0AD26C mov.w Rm,@Rn */
L_0C0AD26E: BLKS(0x0C0AD26Eu);
	r2 = r7;  /* 0C0AD26E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AD270 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AD272 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD274 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD250u, 7); goto L_0C0AD250; } goto L_0C0AD27A; }  /* 0C0AD276 bf/s */
L_0C0AD27A: BLKS(0x0C0AD27Au);
	r15 = r14;  /* 0C0AD27A mov Rm,Rn */
	IF(0x0C0AD27Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD27C rts */
}

/* FUN_0c0ad2a0 */
void f_0C0AD2A0(sh3_t *c)
{
	LOCALS;
L_0C0AD2A0: BLKS(0x0C0AD2A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A2u, 1);  /* 0C0AD2A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A4u, 1);  /* 0C0AD2A2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AD2A4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A8u, 2);  /* 0C0AD2A6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AD2A8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2ACu, 2);  /* 0C0AD2AA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0AD2AC exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B0u, 2);  /* 0C0AD2AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B2u, 1);  /* 0C0AD2B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B4u, 1);  /* 0C0AD2B2 mov.l Rm,@-Rn */
	r13 = 0xC1EE9D8u; UPD(0x0C0AD2B6u, 1);  /* 0C0AD2B4 mov.l @(disp,pc),Rn */
	IF(0x0C0AD2B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD2B8u, 1);  /* 0C0AD2B6 sts.l pr,@-Rn */
	r12 = 0xC2175E8u; UPD(0x0C0AD2BAu, 1);  /* 0C0AD2B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD2BA mov Rm,Rn */
	r11 = 0xC062A70u; UPD(0x0C0AD2BEu, 2);  /* 0C0AD2BC mov.l @(disp,pc),Rn */
	IF(0x0C0AD2BEu); ;  /* 0C0AD2BE nop */
	UPD(0x0C0AD2C0u, 1);
L_0C0AD2C0: BLKS(0x0C0AD2C0u);
	r7 = 0xC275E1Cu; UPD(0x0C0AD2C2u, 1);  /* 0C0AD2C0 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C0AD2C2 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0AD2C6u, 2);  /* 0C0AD2C4 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0AD2C8u, 1);  /* 0C0AD2C6 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0AD2C8 tst Rm,Rn */
	{ u32 c_ = T; r6 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD2DCu, 4); goto L_0C0AD2DC; } goto L_0C0AD2CE; }  /* 0C0AD2CA bt/s */
L_0C0AD2CE: BLKS(0x0C0AD2CEu);
	r7 += 0x33u;  /* 0C0AD2CE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD2D2u, 3);  /* 0C0AD2D0 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AD2D2 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C0AD2D4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFCDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD300u, 5); goto L_0C0AD300; } UPD(0x0C0AD2DAu, 1); goto L_0C0AD2DA; }  /* 0C0AD2D6 bt/s */
L_0C0AD2DA: BLKS(0x0C0AD2DAu);
	r6 = r9;  /* 0C0AD2DA mov Rm,Rn */
	UPD(0x0C0AD2DCu, 1);
L_0C0AD2DC: BLKS(0x0C0AD2DCu);
	r6 += 0x1u;  /* 0C0AD2DC add #imm,Rn */
	r7 = 0x1FFu; UPD(0x0C0AD2E0u, 2);  /* 0C0AD2DE mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0AD2E0 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0AD2E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD2C0u, 5); goto L_0C0AD2C0; } goto L_0C0AD2E8; }  /* 0C0AD2E4 bf/s */
L_0C0AD2E8: BLKS(0x0C0AD2E8u);
	r15 = r14;  /* 0C0AD2E8 mov Rm,Rn */
	IF(0x0C0AD2EAu); PR = R32(r15); r15 += 4; UPD(0x0C0AD2ECu, 3);  /* 0C0AD2EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD2EEu, 1);  /* 0C0AD2EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD2F0u, 1);  /* 0C0AD2EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD2F2u, 1);  /* 0C0AD2F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD2F4u, 1);  /* 0C0AD2F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD2F6u, 1);  /* 0C0AD2F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD2F8u, 1);  /* 0C0AD2F6 mov.l @Rm+,Rn */
	IF(0x0C0AD2F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD2F8 rts */
L_0C0AD300: BLKS(0x0C0AD300u);
	r5 = R32(r7 + 0x4u); UPD(0x0C0AD302u, 1);  /* 0C0AD300 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0AD302 mov #imm,Rn */
	IF(0x0C0AD304u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0AD304 shld Rm,Rn */
	r5 += r13;  /* 0C0AD306 add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C0AD30Au, 4);  /* 0C0AD308 mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C0AD30A mov #imm,Rn */
	r0 = 0xC393044u; UPD(0x0C0AD30Eu, 2);  /* 0C0AD30C mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C0AD30E mov #imm,Rn */
	W32(r0, r3); UPD(0x0C0AD312u, 2);  /* 0C0AD310 mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD312 add #imm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0AD316u, 2);  /* 0C0AD314 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0AD316 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C0AD31Au, 2);  /* 0C0AD318 mov.l @Rm,Rn */
	IF(0x0C0AD31Au); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD31A shld Rm,Rn */
	IF(0x0C0AD31Cu); r5 = R32(r0 + r4); UPD(0x0C0AD31Eu, 2);  /* 0C0AD31C mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0AD320u, 1);  /* 0C0AD31E mov.l @(disp,Rm),Rn */
	IF(0x0C0AD320u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD320 shld Rm,Rn */
	IF(0x0C0AD322u); r4 = R32(r0 + r5); UPD(0x0C0AD324u, 2);  /* 0C0AD322 mov.l @(r0,Rm),Rn */
	W32(r15, r3); UPD(0x0C0AD326u, 1);  /* 0C0AD324 mov.l Rm,@Rn */
	W32(r12, r4); UPD(0x0C0AD328u, 1);  /* 0C0AD326 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C0AD32Au, 1);  /* 0C0AD328 mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x10u); UPD(0x0C0AD32Cu, 1);  /* 0C0AD32A mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x14u); UPD(0x0C0AD32Eu, 1);  /* 0C0AD32C mov.l @(disp,Rm),Rn */
	IF(0x0C0AD32Eu); { u32 t_ = r11; PR = 0x0C0AD332u; r7 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0AD332u); }  /* 0C0AD32E jsr @Rn */
L_0C0AD332: BLKS(0x0C0AD332u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD2DAu, 3); goto L_0C0AD2DA; }  /* 0C0AD332 bra */
}

/* FUN_0c0ad350 */
void f_0C0AD350(sh3_t *c)
{
	LOCALS;
L_0C0AD350: BLKS(0x0C0AD350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD352u, 1);  /* 0C0AD350 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD354u, 1);  /* 0C0AD352 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD356u, 1);  /* 0C0AD354 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD358u, 1);  /* 0C0AD356 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD35Au, 1);  /* 0C0AD358 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C0AD35A exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD35Eu, 2);  /* 0C0AD35C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD360u, 1);  /* 0C0AD35E mov.l Rm,@-Rn */
	r9 = 0x200u; UPD(0x0C0AD362u, 1);  /* 0C0AD360 mov.w @(disp,pc),Rn */
	IF(0x0C0AD362u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD364u, 1);  /* 0C0AD362 sts.l pr,@-Rn */
	r13 = 0xC2175E8u; UPD(0x0C0AD366u, 1);  /* 0C0AD364 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD366 mov Rm,Rn */
	r8 = 0x7000u; UPD(0x0C0AD36Au, 2);  /* 0C0AD368 mov.w @(disp,pc),Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD36Cu, 1);  /* 0C0AD36A mov.l @(disp,pc),Rn */
	r12 = 0xC062A70u; UPD(0x0C0AD36Eu, 1);  /* 0C0AD36C mov.l @(disp,pc),Rn */
	IF(0x0C0AD36Eu); ;  /* 0C0AD36E nop */
	UPD(0x0C0AD370u, 1);
L_0C0AD370: BLKS(0x0C0AD370u);
	r7 = r8;  /* 0C0AD370 mov Rm,Rn */
	r7 += r10;  /* 0C0AD372 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0AD376u, 3);  /* 0C0AD374 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0AD378u, 1);  /* 0C0AD376 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0AD378 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD38Cu, 4); goto L_0C0AD38C; } goto L_0C0AD37E; }  /* 0C0AD37A bt/s */
L_0C0AD37E: BLKS(0x0C0AD37Eu);
	r7 += 0x33u;  /* 0C0AD37E add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD382u, 3);  /* 0C0AD380 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AD382 extu.b Rm,Rn */
	T = r0 == r11;  /* 0C0AD384 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFCDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD3B0u, 5); goto L_0C0AD3B0; } UPD(0x0C0AD38Au, 1); goto L_0C0AD38A; }  /* 0C0AD386 bt/s */
L_0C0AD38A: BLKS(0x0C0AD38Au);
	r4 = r9;  /* 0C0AD38A mov Rm,Rn */
	UPD(0x0C0AD38Cu, 1);
L_0C0AD38C: BLKS(0x0C0AD38Cu);
	r4 += 0x1u;  /* 0C0AD38C add #imm,Rn */
	r7 = 0x23Fu; UPD(0x0C0AD390u, 2);  /* 0C0AD38E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD390 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0AD392 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD370u, 5); goto L_0C0AD370; } goto L_0C0AD398; }  /* 0C0AD394 bf/s */
L_0C0AD398: BLKS(0x0C0AD398u);
	r15 = r14;  /* 0C0AD398 mov Rm,Rn */
	IF(0x0C0AD39Au); PR = R32(r15); r15 += 4; UPD(0x0C0AD39Cu, 3);  /* 0C0AD39A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD39Eu, 1);  /* 0C0AD39C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD3A0u, 1);  /* 0C0AD39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD3A2u, 1);  /* 0C0AD3A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD3A4u, 1);  /* 0C0AD3A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD3A6u, 1);  /* 0C0AD3A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD3A8u, 1);  /* 0C0AD3A6 mov.l @Rm+,Rn */
	IF(0x0C0AD3A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD3A8 rts */
L_0C0AD3B0: BLKS(0x0C0AD3B0u);
	r5 = R32(r7 + 0x4u); UPD(0x0C0AD3B2u, 1);  /* 0C0AD3B0 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0AD3B2 mov #imm,Rn */
	IF(0x0C0AD3B4u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0AD3B4 shld Rm,Rn */
	r1 = 0xC1EE9D8u; UPD(0x0C0AD3B8u, 3);  /* 0C0AD3B6 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0AD3B8 mov #imm,Rn */
	r5 += r1;  /* 0C0AD3BA add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C0AD3BEu, 3);  /* 0C0AD3BC mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0AD3BE mov #imm,Rn */
	r0 = 0xC393044u; UPD(0x0C0AD3C2u, 2);  /* 0C0AD3C0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD3C2 add #imm,Rn */
	W32(r0, r3); UPD(0x0C0AD3C6u, 2);  /* 0C0AD3C4 mov.l Rm,@Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0AD3C8u, 1);  /* 0C0AD3C6 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0AD3C8 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C0AD3CCu, 2);  /* 0C0AD3CA mov.l @Rm,Rn */
	IF(0x0C0AD3CCu); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD3CC shld Rm,Rn */
	IF(0x0C0AD3CEu); r5 = R32(r0 + r4); UPD(0x0C0AD3D0u, 2);  /* 0C0AD3CE mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0AD3D2u, 1);  /* 0C0AD3D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD3D2u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD3D2 shld Rm,Rn */
	IF(0x0C0AD3D4u); r4 = R32(r0 + r5); UPD(0x0C0AD3D6u, 2);  /* 0C0AD3D4 mov.l @(r0,Rm),Rn */
	W32(r15, r3); UPD(0x0C0AD3D8u, 1);  /* 0C0AD3D6 mov.l Rm,@Rn */
	W32(r13, r4); UPD(0x0C0AD3DAu, 1);  /* 0C0AD3D8 mov.l Rm,@Rn */
	r5 = R32(r7 + 0x10u); UPD(0x0C0AD3DCu, 1);  /* 0C0AD3DA mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0AD3DC mov #imm,Rn */
	r6 = R32(r7 + 0x14u); UPD(0x0C0AD3E0u, 2);  /* 0C0AD3DE mov.l @(disp,Rm),Rn */
	IF(0x0C0AD3E0u); { u32 t_ = r12; PR = 0x0C0AD3E4u; r7 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0AD3E4u); }  /* 0C0AD3E0 jsr @Rn */
L_0C0AD3E4: BLKS(0x0C0AD3E4u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD38Au, 3); goto L_0C0AD38A; }  /* 0C0AD3E4 bra */
}

/* FUN_0c0ad540 */
void f_0C0AD540(sh3_t *c)
{
	LOCALS;
L_0C0AD540: BLKS(0x0C0AD540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD542u, 1);  /* 0C0AD540 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD544u, 1);  /* 0C0AD542 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD546u, 1);  /* 0C0AD544 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AD546 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD54Au, 2);  /* 0C0AD548 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0AD54A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD54Eu, 2);  /* 0C0AD54C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AD54E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD552u, 2);  /* 0C0AD550 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD554u, 1);  /* 0C0AD552 mov.l Rm,@-Rn */
	IF(0x0C0AD554u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD556u, 1);  /* 0C0AD554 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD556 add #imm,Rn */
	r14 = r15;  /* 0C0AD558 mov Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0AD55Cu, 3);  /* 0C0AD55A mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD55C exts.b Rm,Rn */
	W32(r14, r0); UPD(0x0C0AD560u, 2);  /* 0C0AD55E mov.l Rm,@Rn */
	r3 = R32(r14 + 0x24u); UPD(0x0C0AD562u, 1);  /* 0C0AD560 mov.l @(disp,Rm),Rn */
	r0 = r5;  /* 0C0AD562 mov Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD566u, 2);  /* 0C0AD564 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)r3;  /* 0C0AD566 exts.b Rm,Rn */
	IF(0x0C0AD568u); r0 <<= 2;  /* 0C0AD568 shll2 Rn */
	IF(0x0C0AD56Au); r3 = R32(r0 + r2); UPD(0x0C0AD56Cu, 3);  /* 0C0AD56A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD56Eu, 1);  /* 0C0AD56C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD56E add Rm,Rn */
	IF(0x0C0AD570u); T = (s32)r2 >= 0;  /* 0C0AD570 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD650u, 5); goto L_0C0AD650; } UPD(0x0C0AD576u, 1); goto L_0C0AD576; }  /* 0C0AD572 bf/s */
L_0C0AD576: BLKS(0x0C0AD576u);
	r4 = 0xA00000u; UPD(0x0C0AD578u, 1);  /* 0C0AD576 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0AD578 add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0AD57A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD598u, 5); goto L_0C0AD598; } goto L_0C0AD580; }  /* 0C0AD57C bt/s */
L_0C0AD580: BLKS(0x0C0AD580u);
	r7 = 0xC3929E0u; UPD(0x0C0AD582u, 2);  /* 0C0AD580 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AD582 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AD586u, 2);  /* 0C0AD584 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0AD588u, 1);  /* 0C0AD586 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0AD588 sub Rm,Rn */
	r2 += r5;  /* 0C0AD58A add Rm,Rn */
	IF(0x0C0AD58Cu); T = (s32)r2 >= 0;  /* 0C0AD58C cmp/pz Rn */
	if (!T) { UPD(0x0C0AD640u, 6); goto L_0C0AD640; }  /* 0C0AD58E bf */
L_0C0AD590: BLKS(0x0C0AD590u);
	r8 = 0x780000u; UPD(0x0C0AD592u, 1);  /* 0C0AD590 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0AD592 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD594 cmp/ge Rm,Rn */
	IF(0x0C0AD596u); r1 = T;  /* 0C0AD596 movt Rn */
	UPD(0x0C0AD598u, 3);
L_0C0AD598: BLKS(0x0C0AD598u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AD598 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AD59A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD5C0u, 5); goto L_0C0AD5C0; } UPD(0x0C0AD5A0u, 1); goto L_0C0AD5A0; }  /* 0C0AD59C bt/s */
L_0C0AD5A0: BLKS(0x0C0AD5A0u);
	r14 += 0x4u;  /* 0C0AD5A0 add #imm,Rn */
	UPD(0x0C0AD5A2u, 1);
L_0C0AD5A2: BLKS(0x0C0AD5A2u);
	r15 = r14;  /* 0C0AD5A2 mov Rm,Rn */
	IF(0x0C0AD5A4u); PR = R32(r15); r15 += 4; UPD(0x0C0AD5A6u, 2);  /* 0C0AD5A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD5A8u, 1);  /* 0C0AD5A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD5AAu, 1);  /* 0C0AD5A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD5ACu, 1);  /* 0C0AD5AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD5AEu, 1);  /* 0C0AD5AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD5B0u, 1);  /* 0C0AD5AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD5B2u, 1);  /* 0C0AD5B0 mov.l @Rm+,Rn */
	IF(0x0C0AD5B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD5B2 rts */
L_0C0AD5C0: BLKS(0x0C0AD5C0u);
	r0 = 0xC0AA550u; UPD(0x0C0AD5C2u, 1);  /* 0C0AD5C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AD5C2u); { u32 t_ = r0; PR = 0x0C0AD5C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AD5C6u); }  /* 0C0AD5C2 jsr @Rn */
L_0C0AD5C6: BLKS(0x0C0AD5C6u);
	T = (r0 & r0) == 0;  /* 0C0AD5C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD5A0u, 4); goto L_0C0AD5A0; } goto L_0C0AD5CC; }  /* 0C0AD5C8 bt/s */
L_0C0AD5CC: BLKS(0x0C0AD5CCu);
	r2 = 0xC2755BCu; UPD(0x0C0AD5CEu, 2);  /* 0C0AD5CC mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AD5CE mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD5D2u, 2);  /* 0C0AD5D0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AD5D2 mov #imm,Rn */
	IF(0x0C0AD5D4u); MACL = r7 * r6;  /* 0C0AD5D4 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD5D8u, 4);  /* 0C0AD5D6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AD5D8 and Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0AD5DCu, 2);  /* 0C0AD5DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD5DCu); r3 = MACL;  /* 0C0AD5DC sts macl,Rn */
	r3 += r5;  /* 0C0AD5DE add Rm,Rn */
	r0 |= r10;  /* 0C0AD5E0 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0AD5E4u, 4);  /* 0C0AD5E2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AD5E6u, 1);  /* 0C0AD5E4 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0AD5E6 mov #imm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AD5EAu, 2);  /* 0C0AD5E8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AD5EA add Rm,Rn */
	W32(r3 + 0x14u, r12); UPD(0x0C0AD5EEu, 2);  /* 0C0AD5EC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0AD5F0u, 1);  /* 0C0AD5EE mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r8); UPD(0x0C0AD5F2u, 1);  /* 0C0AD5F0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0AD5F4u, 1);  /* 0C0AD5F2 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0AD5F6u, 1);  /* 0C0AD5F4 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AD5F6 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AD5FAu, 2);  /* 0C0AD5F8 mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0AD5FA add #imm,Rn */
	W8(r3, r13); UPD(0x0C0AD5FEu, 2);  /* 0C0AD5FC mov.b Rm,@Rn */
	IF(0x0C0AD5FEu); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD600u, 1);  /* 0C0AD5FE mov.b @(r0,Rm),Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AD602u, 1);  /* 0C0AD600 mov.l @(disp,pc),Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0AD604u, 1);  /* 0C0AD602 mov.b Rm,@-Rn */
	r1 = 0x808080u; UPD(0x0C0AD606u, 1);  /* 0C0AD604 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AD606 add #imm,Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AD60Au, 2);  /* 0C0AD608 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0AD60Cu, 1);  /* 0C0AD60A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0AD60C add Rm,Rn */
	IF(0x0C0AD60Eu); { u32 t_ = r12; PR = 0x0C0AD612u; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD612u); }  /* 0C0AD60E jsr @Rn */
L_0C0AD612: BLKS(0x0C0AD612u);
	r0 &= 0x1u;  /* 0C0AD612 and #imm,r0 */
	IF(0x0C0AD614u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AD616u, 2);  /* 0C0AD614 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AD616 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AD618 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AD61A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AD630u, 6); goto L_0C0AD630; }  /* 0C0AD61C bt */
L_0C0AD61E: BLKS(0x0C0AD61Eu);
	r0 = 0x1u;  /* 0C0AD61E mov #imm,Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD5A2u, 4); goto L_0C0AD5A2; }  /* 0C0AD620 bra */
L_0C0AD630: BLKS(0x0C0AD630u);
	r8 = 0xC0AFC10u; UPD(0x0C0AD632u, 1);  /* 0C0AD630 mov.l @(disp,pc),Rn */
	IF(0x0C0AD632u); { u32 t_ = r8; PR = 0x0C0AD636u; IF(0x0C0AD634u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AD636u); }  /* 0C0AD632 jsr @Rn */
L_0C0AD636: BLKS(0x0C0AD636u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD5A0u, 3); goto L_0C0AD5A0; }  /* 0C0AD636 bra */
L_0C0AD640: BLKS(0x0C0AD640u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD590u, 3); goto L_0C0AD590; }  /* 0C0AD640 bra */
L_0C0AD650: BLKS(0x0C0AD650u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD576u, 3); goto L_0C0AD576; }  /* 0C0AD650 bra */
}

void f_0C0AD690(sh3_t *c)
{
	LOCALS;
L_0C0AD690: BLKS(0x0C0AD690u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD690 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD692 mov #imm,Rn */
	IF(0x0C0AD694u); MACL = r1 * r3;  /* 0C0AD694 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD698u, 5);  /* 0C0AD696 mov.l @(disp,pc),Rn */
	r0 = 0x4Cu;  /* 0C0AD698 mov #imm,Rn */
	IF(0x0C0AD69Au); r3 = MACL;  /* 0C0AD69A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD69Eu, 3);  /* 0C0AD69C mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0AD69E add Rm,Rn */
	r3 += 0x34u;  /* 0C0AD6A0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AD6A4u, 3);  /* 0C0AD6A2 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0AD6A4 mov Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD6A6 extu.b Rm,Rn */
	IF(0x0C0AD6A8u); MACL = r2 * r0;  /* 0C0AD6A8 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AD6ACu, 5);  /* 0C0AD6AA mov.l @(disp,pc),Rn */
	IF(0x0C0AD6ACu); r0 = MACL;  /* 0C0AD6AC sts macl,Rn */
	IF(0x0C0AD6AEu); r1 = R32(r0 + r2); UPD(0x0C0AD6B0u, 2);  /* 0C0AD6AE mov.l @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0AD6B0 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD6B8u, 4); goto L_0C0AD6B8; } goto L_0C0AD6B6; }  /* 0C0AD6B2 bf/s */
L_0C0AD6B6: BLKS(0x0C0AD6B6u);
	W32(r3, r1); UPD(0x0C0AD6B8u, 2);  /* 0C0AD6B6 mov.l Rm,@Rn */
L_0C0AD6B8: BLKS(0x0C0AD6B8u);
	r6 = r3;  /* 0C0AD6B8 mov Rm,Rn */
	r6 += 0x30u;  /* 0C0AD6BA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AD6BEu, 3);  /* 0C0AD6BC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0AD6BE add #imm,Rn */
	W8(r6, r0); UPD(0x0C0AD6C2u, 2);  /* 0C0AD6C0 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C0AD6C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AD6C4 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD6D0u, 5); goto L_0C0AD6D0; }  /* 0C0AD6C6 bf */
L_0C0AD6C8: BLKS(0x0C0AD6C8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AD6CAu, 1);  /* 0C0AD6C8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AD6CA add #imm,Rn */
	r0 &= 0x3u;  /* 0C0AD6CC and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0AD6D0u, 3);  /* 0C0AD6CE mov.l Rm,@(disp,Rn) */
L_0C0AD6D0: BLKS(0x0C0AD6D0u);
	r2 = 0xC392D5Cu; UPD(0x0C0AD6D2u, 1);  /* 0C0AD6D0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD6D4u, 1);  /* 0C0AD6D2 mov.b @Rm,Rn */
	r4 = 0xC283CB2u; UPD(0x0C0AD6D6u, 1);  /* 0C0AD6D4 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C0AD6D6 extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AD6DAu, 2);  /* 0C0AD6D8 mov.b @Rm,Rn */
	IF(0x0C0AD6DAu); r7 <<= 16;  /* 0C0AD6DA shll16 Rn */
	r5 = 0xC392B09u; UPD(0x0C0AD6DEu, 2);  /* 0C0AD6DC mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C0AD6DE extu.b Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AD6E2u, 2);  /* 0C0AD6E0 mov.b @Rm,Rn */
	IF(0x0C0AD6E2u); r6 <<= 8;  /* 0C0AD6E2 shll8 Rn */
	r7 |= r6;  /* 0C0AD6E4 or Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AD6E6 extu.b Rm,Rn */
	r7 |= r0;  /* 0C0AD6E8 or Rm,Rn */
	W32(r3 + 0x2Cu, r7); UPD(0x0C0AD6ECu, 5);  /* 0C0AD6EA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0AD6EC mov Rm,Rn */
	IF(0x0C0AD6EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD6EE rts */
}

void f_0C0AD710(sh3_t *c)
{
	LOCALS;
L_0C0AD710: BLKS(0x0C0AD710u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD710 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD712 mov #imm,Rn */
	IF(0x0C0AD714u); MACL = r1 * r3;  /* 0C0AD714 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD718u, 5);  /* 0C0AD716 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD71Au, 1);  /* 0C0AD718 mov.l Rm,@-Rn */
	IF(0x0C0AD71Au); r3 = MACL;  /* 0C0AD71A sts macl,Rn */
	r3 += r0;  /* 0C0AD71C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0AD720u, 3);  /* 0C0AD71E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AD720 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AD724u, 2);  /* 0C0AD722 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0AD726u, 1);  /* 0C0AD724 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0AD728u, 1);  /* 0C0AD726 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0AD728 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AD72Cu, 2);  /* 0C0AD72A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AD72C add Rm,Rn */
	r7 += r0;  /* 0C0AD72E add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0AD732u, 3);  /* 0C0AD730 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD732u); T = (s32)r7 >= 0;  /* 0C0AD732 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD770u, 4); goto L_0C0AD770; } UPD(0x0C0AD738u, 1); goto L_0C0AD738; }  /* 0C0AD734 bf/s */
L_0C0AD738: BLKS(0x0C0AD738u);
	r5 = 0xA00000u; UPD(0x0C0AD73Au, 1);  /* 0C0AD738 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD73A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD758u, 4); goto L_0C0AD758; } goto L_0C0AD740; }  /* 0C0AD73C bt/s */
L_0C0AD740: BLKS(0x0C0AD740u);
	r2 = 0xC3929E0u; UPD(0x0C0AD742u, 2);  /* 0C0AD740 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0AD744u, 1);  /* 0C0AD742 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0AD744 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD748u, 2);  /* 0C0AD746 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD748 sub Rm,Rn */
	r2 += r6;  /* 0C0AD74A add Rm,Rn */
	IF(0x0C0AD74Cu); T = (s32)r2 >= 0;  /* 0C0AD74C cmp/pz Rn */
	if (!T) { UPD(0x0C0AD760u, 6); goto L_0C0AD760; }  /* 0C0AD74E bf */
L_0C0AD750: BLKS(0x0C0AD750u);
	r4 = 0x780000u; UPD(0x0C0AD752u, 1);  /* 0C0AD750 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0AD752 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD75Au, 4); goto L_0C0AD75A; } UPD(0x0C0AD758u, 1); goto L_0C0AD758; }  /* 0C0AD754 bf/s */
L_0C0AD758: BLKS(0x0C0AD758u);
	W32(r3, r0); UPD(0x0C0AD75Au, 1);  /* 0C0AD758 mov.l Rm,@Rn */
L_0C0AD75A: BLKS(0x0C0AD75Au);
	r15 = r14;  /* 0C0AD75A mov Rm,Rn */
	IF(0x0C0AD75Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD75C rts */
L_0C0AD760: BLKS(0x0C0AD760u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD750u, 3); goto L_0C0AD750; }  /* 0C0AD760 bra */
L_0C0AD770: BLKS(0x0C0AD770u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AD738u, 3); goto L_0C0AD738; }  /* 0C0AD770 bra */
}

void f_0C0AD790(sh3_t *c)
{
	LOCALS;
L_0C0AD790: BLKS(0x0C0AD790u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD790 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD792 mov #imm,Rn */
	IF(0x0C0AD794u); MACL = r1 * r3;  /* 0C0AD794 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD798u, 5);  /* 0C0AD796 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD79Au, 1);  /* 0C0AD798 mov.l Rm,@-Rn */
	IF(0x0C0AD79Au); r3 = MACL;  /* 0C0AD79A sts macl,Rn */
	r3 += r0;  /* 0C0AD79C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0AD7A0u, 3);  /* 0C0AD79E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AD7A0 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AD7A4u, 2);  /* 0C0AD7A2 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0AD7A6u, 1);  /* 0C0AD7A4 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0AD7A8u, 1);  /* 0C0AD7A6 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0AD7A8 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AD7ACu, 2);  /* 0C0AD7AA mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AD7AC add Rm,Rn */
	r7 += r0;  /* 0C0AD7AE add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0AD7B2u, 3);  /* 0C0AD7B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD7B2u); T = (s32)r7 >= 0;  /* 0C0AD7B2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD810u, 4); goto L_0C0AD810; } UPD(0x0C0AD7B8u, 1); goto L_0C0AD7B8; }  /* 0C0AD7B4 bf/s */
L_0C0AD7B8: BLKS(0x0C0AD7B8u);
	r5 = 0xA00000u; UPD(0x0C0AD7BAu, 1);  /* 0C0AD7B8 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD7BA cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD7F2u, 4); goto L_0C0AD7F2; } goto L_0C0AD7C0; }  /* 0C0AD7BC bt/s */
L_0C0AD7C0: BLKS(0x0C0AD7C0u);
	r2 = 0xC3929E0u; UPD(0x0C0AD7C2u, 2);  /* 0C0AD7C0 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0AD7C4u, 1);  /* 0C0AD7C2 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0AD7C4 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD7C8u, 2);  /* 0C0AD7C6 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD7C8 sub Rm,Rn */
	r2 += r6;  /* 0C0AD7CA add Rm,Rn */
	IF(0x0C0AD7CCu); T = (s32)r2 >= 0;  /* 0C0AD7CC cmp/pz Rn */
	if (!T) { UPD(0x0C0AD800u, 6); goto L_0C0AD800; }  /* 0C0AD7CE bf */
L_0C0AD7D0: BLKS(0x0C0AD7D0u);
	r4 = 0x780000u; UPD(0x0C0AD7D2u, 1);  /* 0C0AD7D0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0AD7D2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD7F2u, 4); goto L_0C0AD7F2; } goto L_0C0AD7D8; }  /* 0C0AD7D4 bt/s */
L_0C0AD7D8: BLKS(0x0C0AD7D8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AD7DAu, 2);  /* 0C0AD7D8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AD7DA add #imm,Rn */
	T = r0 == 0x8u;  /* 0C0AD7DC cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD7F0u, 5); goto L_0C0AD7F0; } UPD(0x0C0AD7E2u, 1); goto L_0C0AD7E2; }  /* 0C0AD7DE bt/s */
L_0C0AD7E2: BLKS(0x0C0AD7E2u);
	r15 = r14;  /* 0C0AD7E2 mov Rm,Rn */
	IF(0x0C0AD7E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD7E4 rts */
L_0C0AD7F0: BLKS(0x0C0AD7F0u);
	r0 = 0x0u;  /* 0C0AD7F0 mov #imm,Rn */
	UPD(0x0C0AD7F2u, 1);
L_0C0AD7F2: BLKS(0x0C0AD7F2u);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD7E2u, 3); goto L_0C0AD7E2; }  /* 0C0AD7F2 bra */
L_0C0AD800: BLKS(0x0C0AD800u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD7D0u, 3); goto L_0C0AD7D0; }  /* 0C0AD800 bra */
L_0C0AD810: BLKS(0x0C0AD810u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AD7B8u, 3); goto L_0C0AD7B8; }  /* 0C0AD810 bra */
}

/* FUN_0c0ad830 */
void f_0C0AD830(sh3_t *c)
{
	LOCALS;
L_0C0AD830: BLKS(0x0C0AD830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD832u, 1);  /* 0C0AD830 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD834u, 1);  /* 0C0AD832 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD836u, 1);  /* 0C0AD834 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AD836 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD83Au, 2);  /* 0C0AD838 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0AD83A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD83Eu, 2);  /* 0C0AD83C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD840u, 1);  /* 0C0AD83E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD842u, 1);  /* 0C0AD840 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0AD842 mov Rm,Rn */
	IF(0x0C0AD844u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD846u, 2);  /* 0C0AD844 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD846 add #imm,Rn */
	r14 = r15;  /* 0C0AD848 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AD84Cu, 3);  /* 0C0AD84A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AD84Eu, 1);  /* 0C0AD84C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD84E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AD852u, 2);  /* 0C0AD850 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AD852 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD856u, 2);  /* 0C0AD854 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AD856 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AD85Au, 2);  /* 0C0AD858 mov.l Rm,@Rn */
	IF(0x0C0AD85Au); r0 <<= 2;  /* 0C0AD85A shll2 Rn */
	IF(0x0C0AD85Cu); r3 = R32(r0 + r2); UPD(0x0C0AD85Eu, 2);  /* 0C0AD85C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD860u, 1);  /* 0C0AD85E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD860 add Rm,Rn */
	IF(0x0C0AD862u); T = (s32)r2 >= 0;  /* 0C0AD862 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD930u, 5); goto L_0C0AD930; } UPD(0x0C0AD868u, 1); goto L_0C0AD868; }  /* 0C0AD864 bf/s */
L_0C0AD868: BLKS(0x0C0AD868u);
	r5 = 0xA00000u; UPD(0x0C0AD86Au, 1);  /* 0C0AD868 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AD86A add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AD86C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD88Au, 5); goto L_0C0AD88A; } goto L_0C0AD872; }  /* 0C0AD86E bt/s */
L_0C0AD872: BLKS(0x0C0AD872u);
	r8 = 0xC3929E0u; UPD(0x0C0AD874u, 2);  /* 0C0AD872 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AD874 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AD878u, 2);  /* 0C0AD876 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD87Au, 1);  /* 0C0AD878 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD87A sub Rm,Rn */
	r2 += r6;  /* 0C0AD87C add Rm,Rn */
	IF(0x0C0AD87Eu); T = (s32)r2 >= 0;  /* 0C0AD87E cmp/pz Rn */
	if (!T) { UPD(0x0C0AD920u, 6); goto L_0C0AD920; }  /* 0C0AD880 bf */
L_0C0AD882: BLKS(0x0C0AD882u);
	r11 = 0x780000u; UPD(0x0C0AD884u, 1);  /* 0C0AD882 mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C0AD884 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD886 cmp/ge Rm,Rn */
	IF(0x0C0AD888u); r1 = T;  /* 0C0AD888 movt Rn */
	UPD(0x0C0AD88Au, 3);
L_0C0AD88A: BLKS(0x0C0AD88Au);
	r11 = (u32)(s32)(s16)r1;  /* 0C0AD88A exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0AD88C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD8B0u, 5); goto L_0C0AD8B0; } UPD(0x0C0AD892u, 1); goto L_0C0AD892; }  /* 0C0AD88E bt/s */
L_0C0AD892: BLKS(0x0C0AD892u);
	r14 += 0x8u;  /* 0C0AD892 add #imm,Rn */
	r15 = r14;  /* 0C0AD894 mov Rm,Rn */
	IF(0x0C0AD896u); PR = R32(r15); r15 += 4; UPD(0x0C0AD898u, 3);  /* 0C0AD896 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD89Au, 1);  /* 0C0AD898 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD89Cu, 1);  /* 0C0AD89A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD89Eu, 1);  /* 0C0AD89C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD8A0u, 1);  /* 0C0AD89E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD8A2u, 1);  /* 0C0AD8A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD8A4u, 1);  /* 0C0AD8A2 mov.l @Rm+,Rn */
	IF(0x0C0AD8A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD8A4 rts */
L_0C0AD8B0: BLKS(0x0C0AD8B0u);
	r8 = 0xC0AB240u; UPD(0x0C0AD8B2u, 1);  /* 0C0AD8B0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD8B2 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0AD8B6u, 2);  /* 0C0AD8B4 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0AD8B6 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0AD8BAu, 2);  /* 0C0AD8B8 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0AD8BA mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD8BEu, 2);  /* 0C0AD8BC mov.l Rm,@Rn */
	r6 = r10;  /* 0C0AD8BE mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD8C2u, 2);  /* 0C0AD8C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD8C2u); { u32 t_ = r8; PR = 0x0C0AD8C6u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0AD8C6u); }  /* 0C0AD8C2 jsr @Rn */
L_0C0AD8C6: BLKS(0x0C0AD8C6u);
	r8 = 0xC0AA550u; UPD(0x0C0AD8C8u, 1);  /* 0C0AD8C6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AD8C8 add #imm,Rn */
	IF(0x0C0AD8CAu); { u32 t_ = r8; PR = 0x0C0AD8CEu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AD8CEu); }  /* 0C0AD8CA jsr @Rn */
L_0C0AD8CE: BLKS(0x0C0AD8CEu);
	T = (r0 & r0) == 0;  /* 0C0AD8CE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD892u, 4); goto L_0C0AD892; } goto L_0C0AD8D4; }  /* 0C0AD8D0 bt/s */
L_0C0AD8D4: BLKS(0x0C0AD8D4u);
	r8 = 0xC2755BCu; UPD(0x0C0AD8D6u, 2);  /* 0C0AD8D4 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AD8D6 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AD8DAu, 2);  /* 0C0AD8D8 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AD8DA mov #imm,Rn */
	IF(0x0C0AD8DCu); MACL = r7 * r6;  /* 0C0AD8DC mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD8E0u, 4);  /* 0C0AD8DE mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0AD8E0 and Rm,Rn */
	IF(0x0C0AD8E2u); r8 = MACL;  /* 0C0AD8E2 sts macl,Rn */
	r8 += r5;  /* 0C0AD8E4 add Rm,Rn */
	W32(r8 + 0x14u, r12); UPD(0x0C0AD8E8u, 4);  /* 0C0AD8E6 mov.l Rm,@(disp,Rn) */
	r4 = 0x14u;  /* 0C0AD8E8 mov #imm,Rn */
	r3 = 0x80000000u; UPD(0x0C0AD8ECu, 2);  /* 0C0AD8EA mov.l @(disp,pc),Rn */
	r12 = 0xC050D70u; UPD(0x0C0AD8EEu, 1);  /* 0C0AD8EC mov.l @(disp,pc),Rn */
	r3 |= r13;  /* 0C0AD8EE or Rm,Rn */
	r13 = 0x4u;  /* 0C0AD8F0 mov #imm,Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0AD8F4u, 3);  /* 0C0AD8F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0AD8F6u, 1);  /* 0C0AD8F4 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0AD8F8u, 1);  /* 0C0AD8F6 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C0AD8FAu, 1);  /* 0C0AD8F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD8FAu); { u32 t_ = r12; PR = 0x0C0AD8FEu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AD8FEu); }  /* 0C0AD8FA jsr @Rn */
L_0C0AD8FE: BLKS(0x0C0AD8FEu);
	r8 += 0x30u;  /* 0C0AD8FE add #imm,Rn */
	r0 += 0x4u;  /* 0C0AD900 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0AD904u, 3);  /* 0C0AD902 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0AD904 mov #imm,Rn */
	IF(0x0C0AD906u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD908u, 2);  /* 0C0AD906 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0AD908 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0AD90Cu, 2);  /* 0C0AD90A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AD90C mov #imm,Rn */
	IF(0x0C0AD90Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD910u, 2);  /* 0C0AD90E mov.b @(r0,Rm),Rn */
	{ u32 v_ = r9; r8 -= 1; W8(r8, v_); } UPD(0x0C0AD912u, 1);  /* 0C0AD910 mov.b Rm,@-Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD892u, 3); goto L_0C0AD892; }  /* 0C0AD912 bra */
L_0C0AD920: BLKS(0x0C0AD920u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD882u, 3); goto L_0C0AD882; }  /* 0C0AD920 bra */
L_0C0AD930: BLKS(0x0C0AD930u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD868u, 3); goto L_0C0AD868; }  /* 0C0AD930 bra */
}

/* FUN_0c0ad970 */
void f_0C0AD970(sh3_t *c)
{
	LOCALS;
L_0C0AD970: BLKS(0x0C0AD970u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD972u, 1);  /* 0C0AD970 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD974u, 1);  /* 0C0AD972 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD976u, 1);  /* 0C0AD974 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD978u, 1);  /* 0C0AD976 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD97Au, 1);  /* 0C0AD978 mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0AD97A mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD97Eu, 2);  /* 0C0AD97C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD980u, 1);  /* 0C0AD97E mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0AD980 mov Rm,Rn */
	IF(0x0C0AD982u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD984u, 2);  /* 0C0AD982 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0AD984 add #imm,Rn */
	r14 = r15;  /* 0C0AD986 mov Rm,Rn */
	r2 = R32(r14 + 0x3Cu); UPD(0x0C0AD98Au, 3);  /* 0C0AD988 mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0AD98Cu, 1);  /* 0C0AD98A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD98C exts.b Rm,Rn */
	r4 = R32(r14 + 0x38u); UPD(0x0C0AD990u, 2);  /* 0C0AD98E mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0AD992u, 1);  /* 0C0AD990 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AD992 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD996u, 2);  /* 0C0AD994 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AD996 mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0AD99Au, 2);  /* 0C0AD998 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD99Au); r0 <<= 2;  /* 0C0AD99A shll2 Rn */
	IF(0x0C0AD99Cu); r3 = R32(r0 + r2); UPD(0x0C0AD99Eu, 2);  /* 0C0AD99C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD9A0u, 1);  /* 0C0AD99E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD9A0 add Rm,Rn */
	IF(0x0C0AD9A2u); T = (s32)r2 >= 0;  /* 0C0AD9A2 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD9ACu, 5); goto L_0C0AD9AC; } UPD(0x0C0AD9A8u, 1); goto L_0C0AD9A8; }  /* 0C0AD9A4 bt/s */
L_0C0AD9A8: BLKS(0x0C0AD9A8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADAE0u, 3); goto L_0C0ADAE0; }  /* 0C0AD9A8 bra */
L_0C0AD9AC: BLKS(0x0C0AD9ACu);
	r5 = 0xA00000u; UPD(0x0C0AD9AEu, 1);  /* 0C0AD9AC mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AD9AE add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AD9B0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD9D0u, 5); goto L_0C0AD9D0; } goto L_0C0AD9B6; }  /* 0C0AD9B2 bt/s */
L_0C0AD9B6: BLKS(0x0C0AD9B6u);
	r8 = 0xC3929E0u; UPD(0x0C0AD9B8u, 2);  /* 0C0AD9B6 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0AD9BAu, 1);  /* 0C0AD9B8 mov.l @(disp,Rm),Rn */
	r7 = R32(r8); UPD(0x0C0AD9BCu, 1);  /* 0C0AD9BA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD9BEu, 1);  /* 0C0AD9BC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD9BE sub Rm,Rn */
	r2 += r6;  /* 0C0AD9C0 add Rm,Rn */
	IF(0x0C0AD9C2u); T = (s32)r2 >= 0;  /* 0C0AD9C2 cmp/pz Rn */
	if (T) { UPD(0x0C0AD9C8u, 6); goto L_0C0AD9C8; }  /* 0C0AD9C4 bt */
L_0C0AD9C6: BLKS(0x0C0AD9C6u);
	r2 = 0u - r2;  /* 0C0AD9C6 neg Rm,Rn */
	UPD(0x0C0AD9C8u, 1);
L_0C0AD9C8: BLKS(0x0C0AD9C8u);
	r9 = 0x780000u; UPD(0x0C0AD9CAu, 1);  /* 0C0AD9C8 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0AD9CA add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD9CC cmp/ge Rm,Rn */
	IF(0x0C0AD9CEu); r1 = T;  /* 0C0AD9CE movt Rn */
	UPD(0x0C0AD9D0u, 3);
L_0C0AD9D0: BLKS(0x0C0AD9D0u);
	r10 = (u32)(s32)(s16)r1;  /* 0C0AD9D0 exts.w Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0AD9D2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD9F0u, 5); goto L_0C0AD9F0; } UPD(0x0C0AD9D8u, 1); goto L_0C0AD9D8; }  /* 0C0AD9D4 bt/s */
L_0C0AD9D8: BLKS(0x0C0AD9D8u);
	r14 += 0x18u;  /* 0C0AD9D8 add #imm,Rn */
	r15 = r14;  /* 0C0AD9DA mov Rm,Rn */
	IF(0x0C0AD9DCu); PR = R32(r15); r15 += 4; UPD(0x0C0AD9DEu, 3);  /* 0C0AD9DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD9E0u, 1);  /* 0C0AD9DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD9E2u, 1);  /* 0C0AD9E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD9E4u, 1);  /* 0C0AD9E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD9E6u, 1);  /* 0C0AD9E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD9E8u, 1);  /* 0C0AD9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD9EAu, 1);  /* 0C0AD9E8 mov.l @Rm+,Rn */
	IF(0x0C0AD9EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD9EA rts */
L_0C0AD9F0: BLKS(0x0C0AD9F0u);
	r12 = 0xC0AFE40u; UPD(0x0C0AD9F2u, 1);  /* 0C0AD9F0 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C0AD9F2 mov #imm,Rn */
	IF(0x0C0AD9F4u); { u32 t_ = r12; PR = 0x0C0AD9F8u; r9 &= r11; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD9F8u); }  /* 0C0AD9F4 jsr @Rn */
L_0C0AD9F8: BLKS(0x0C0AD9F8u);
	r3 = 0x1FFu; UPD(0x0C0AD9FAu, 1);  /* 0C0AD9F8 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AD9FA mov Rm,Rn */
	IF(0x0C0AD9FCu); { u32 t_ = r12; PR = 0x0C0ADA00u; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADA00u); }  /* 0C0AD9FC jsr @Rn */
L_0C0ADA00: BLKS(0x0C0ADA00u);
	r0 &= 0x1Fu;  /* 0C0ADA00 and #imm,r0 */
	r0 += 0xFFFFFFF0u;  /* 0C0ADA02 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0ADA04 exts.w Rm,Rn */
	r0 = 0xC1EEDF4u; UPD(0x0C0ADA08u, 4);  /* 0C0ADA06 mov.l @(disp,pc),Rn */
	IF(0x0C0ADA08u); r9 <<= 2;  /* 0C0ADA08 shll2 Rn */
	r12 = 0xC050D70u; UPD(0x0C0ADA0Cu, 2);  /* 0C0ADA0A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0ADA0C add Rm,Rn */
	r4 = R32(r9); UPD(0x0C0ADA10u, 2);  /* 0C0ADA0E mov.l @Rm,Rn */
	IF(0x0C0ADA10u); { u32 t_ = r12; PR = 0x0C0ADA14u; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADA14u); }  /* 0C0ADA10 jsr @Rn */
L_0C0ADA14: BLKS(0x0C0ADA14u);
	r4 = R32(r9); UPD(0x0C0ADA16u, 1);  /* 0C0ADA14 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0ADA16 add Rm,Rn */
	r1 = r0;  /* 0C0ADA18 mov Rm,Rn */
	IF(0x0C0ADA1Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0ADA1A rotl Rn */
	IF(0x0C0ADA1Cu); r8 = T;  /* 0C0ADA1C movt Rn */
	IF(0x0C0ADA1Eu); { u32 t_ = r12; PR = 0x0C0ADA22u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADA22u); }  /* 0C0ADA1E jsr @Rn */
L_0C0ADA22: BLKS(0x0C0ADA22u);
	W32(r14 + 0x14u, r0); UPD(0x0C0ADA24u, 1);  /* 0C0ADA22 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADA24u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C0ADA24 shar Rn */
	r9 = 0x0u;  /* 0C0ADA26 mov #imm,Rn */
	UPD(0x0C0ADA28u, 2);
L_0C0ADA28: BLKS(0x0C0ADA28u);
	r12 = 0xC0AFE40u; UPD(0x0C0ADA2Au, 1);  /* 0C0ADA28 mov.l @(disp,pc),Rn */
	IF(0x0C0ADA2Au); { u32 t_ = r12; PR = 0x0C0ADA2Eu; IF(0x0C0ADA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADA2Eu); }  /* 0C0ADA2A jsr @Rn */
L_0C0ADA2E: BLKS(0x0C0ADA2Eu);
	r0 &= 0xFu;  /* 0C0ADA2E and #imm,r0 */
	r0 += 0x4u;  /* 0C0ADA30 add #imm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0ADA32 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0ADA80u, 6); goto L_0C0ADA80; }  /* 0C0ADA34 bt */
L_0C0ADA36: BLKS(0x0C0ADA36u);
	r15 += 0xFFFFFFF0u;  /* 0C0ADA36 add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C0ADA3Au, 2);  /* 0C0ADA38 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0ADA3Cu, 1);  /* 0C0ADA3A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0ADA3C mov Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0ADA40u, 2);  /* 0C0ADA3E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C0ADA40 mov Rm,Rn */
	W32(r15, r3); UPD(0x0C0ADA44u, 2);  /* 0C0ADA42 mov.l Rm,@Rn */
	IF(0x0C0ADA44u); { u32 t_ = r12; PR = 0x0C0ADA48u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADA48u); }  /* 0C0ADA44 jsr @Rn */
L_0C0ADA48: BLKS(0x0C0ADA48u);
	r7 = 0xC058030u; UPD(0x0C0ADA4Au, 1);  /* 0C0ADA48 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0ADA4A mov Rm,Rn */
	r5 = r8;  /* 0C0ADA4C mov Rm,Rn */
	IF(0x0C0ADA4Eu); { u32 t_ = r7; PR = 0x0C0ADA52u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADA52u); }  /* 0C0ADA4E jsr @Rn */
L_0C0ADA52: BLKS(0x0C0ADA52u);
	r2 = 0xC0AC540u; UPD(0x0C0ADA54u, 1);  /* 0C0ADA52 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0ADA54 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0ADA58u, 2);  /* 0C0ADA56 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C0ADA58 mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C0ADA5Cu, 2);  /* 0C0ADA5A mov.l @Rm,Rn */
	IF(0x0C0ADA5Cu); { u32 t_ = r2; PR = 0x0C0ADA60u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC540, 0x0C0AC540u, 0x0C0ADA60u); }  /* 0C0ADA5C jsr @Rn */
L_0C0ADA60: BLKS(0x0C0ADA60u);
	r6 = R32(r14 + 0x10u); UPD(0x0C0ADA62u, 1);  /* 0C0ADA60 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0ADA62 mov Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C0ADA66u, 2);  /* 0C0ADA64 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C0ADA66 add Rm,Rn */
	r4 += 0x1u;  /* 0C0ADA68 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0ADA6A exts.w Rm,Rn */
	r8 += r5;  /* 0C0ADA6C add Rm,Rn */
	r15 += 0x10u;  /* 0C0ADA6E add #imm,Rn */
	{ r9 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C0ADA28u, 8); goto L_0C0ADA28; }  /* 0C0ADA70 bra */
L_0C0ADA80: BLKS(0x0C0ADA80u);
	r9 = R32(r14 + 0xCu); UPD(0x0C0ADA82u, 1);  /* 0C0ADA80 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ADA82 add #imm,Rn */
	W32(r15, r9); UPD(0x0C0ADA86u, 2);  /* 0C0ADA84 mov.l Rm,@Rn */
	r5 = r13;  /* 0C0ADA86 mov Rm,Rn */
	r9 = r11;  /* 0C0ADA88 mov Rm,Rn */
	r10 = 0xC1EEB80u; UPD(0x0C0ADA8Cu, 3);  /* 0C0ADA8A mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C0ADA8C add Rm,Rn */
	r10 += r9;  /* 0C0ADA8E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ADA92u, 3);  /* 0C0ADA90 mov.w @Rm,Rn */
	r11 = 0x3Fu;  /* 0C0ADA92 mov #imm,Rn */
	r2 = 0xC0AABB0u; UPD(0x0C0ADA96u, 2);  /* 0C0ADA94 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0ADA98u, 1);  /* 0C0ADA96 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x4u); UPD(0x0C0ADA9Au, 1);  /* 0C0ADA98 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0ADA9Cu, 1);  /* 0C0ADA9A mov.l @Rm,Rn */
	IF(0x0C0ADA9Cu); { u32 t_ = r2; PR = 0x0C0ADAA0u; r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0ADAA0u); }  /* 0C0ADA9C jsr @Rn */
L_0C0ADAA0: BLKS(0x0C0ADAA0u);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ADAA2u, 1);  /* 0C0ADAA0 mov.w @Rm,Rn */
	r4 = r13;  /* 0C0ADAA2 mov Rm,Rn */
	r8 = 0xC0AAFE0u; UPD(0x0C0ADAA6u, 2);  /* 0C0ADAA4 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0ADAA6 add Rm,Rn */
	r15 += 0x8u;  /* 0C0ADAA8 add #imm,Rn */
	r7 = (u32)(s32)(s16)r1;  /* 0C0ADAAA exts.w Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0ADAAEu, 4);  /* 0C0ADAAC mov.l @(disp,Rm),Rn */
	IF(0x0C0ADAAEu); { u32 t_ = r8; PR = 0x0C0ADAB2u; r6 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0ADAB2u); }  /* 0C0ADAAE jsr @Rn */
L_0C0ADAB2: BLKS(0x0C0ADAB2u);
	r10 = 0xC1EEBF4u; UPD(0x0C0ADAB4u, 1);  /* 0C0ADAB2 mov.l @(disp,pc),Rn */
	IF(0x0C0ADAB4u); { u32 t_ = r12; PR = 0x0C0ADAB8u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADAB8u); }  /* 0C0ADAB4 jsr @Rn */
L_0C0ADAB8: BLKS(0x0C0ADAB8u);
	r0 &= 0x1u;  /* 0C0ADAB8 and #imm,r0 */
	IF(0x0C0ADABAu); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0ADABCu, 2);  /* 0C0ADABA mov.b @(r0,Rm),Rn */
	r4 = r13 & 0xFF;  /* 0C0ADABC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0ADABE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0ADAD0u, 5); goto L_0C0ADAD0; }  /* 0C0ADAC0 bt */
L_0C0ADAC2: BLKS(0x0C0ADAC2u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD9D8u, 3); goto L_0C0AD9D8; }  /* 0C0ADAC2 bra */
L_0C0ADAD0: BLKS(0x0C0ADAD0u);
	r12 = 0xC0AFC10u; UPD(0x0C0ADAD2u, 1);  /* 0C0ADAD0 mov.l @(disp,pc),Rn */
	IF(0x0C0ADAD2u); { u32 t_ = r12; PR = 0x0C0ADAD6u; IF(0x0C0ADAD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ADAD6u); }  /* 0C0ADAD2 jsr @Rn */
L_0C0ADAD6: BLKS(0x0C0ADAD6u);
	{ IF(0x0C0ADAD8u); ; /* slot nop */ UPD(0x0C0ADAC2u, 3); goto L_0C0ADAC2; }  /* 0C0ADAD6 bra */
L_0C0ADAE0: BLKS(0x0C0ADAE0u);
	{ IF(0x0C0ADAE2u); ; /* slot nop */ UPD(0x0C0AD9ACu, 3); goto L_0C0AD9AC; }  /* 0C0ADAE0 bra */
}

/* FUN_0c0adb30 */
void f_0C0ADB30(sh3_t *c)
{
	LOCALS;
L_0C0ADB30: BLKS(0x0C0ADB30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB32u, 1);  /* 0C0ADB30 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0ADB32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB36u, 2);  /* 0C0ADB34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB38u, 1);  /* 0C0ADB36 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Au, 1);  /* 0C0ADB38 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Cu, 1);  /* 0C0ADB3A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Eu, 1);  /* 0C0ADB3C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB40u, 1);  /* 0C0ADB3E mov.l Rm,@-Rn */
	IF(0x0C0ADB40u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADB42u, 1);  /* 0C0ADB40 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0ADB42 add #imm,Rn */
	r14 = r15;  /* 0C0ADB44 mov Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0ADB48u, 3);  /* 0C0ADB46 mov.l Rm,@(disp,Rn) */
	r3 += r14;  /* 0C0ADB48 add Rm,Rn */
	r7 = R32(r3 + 0x0u); UPD(0x0C0ADB4Cu, 2);  /* 0C0ADB4A mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0ADB4Eu, 1);  /* 0C0ADB4C mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)r7;  /* 0C0ADB4E exts.b Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C0ADB52u, 2);  /* 0C0ADB50 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0ADB52 mov Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0ADB56u, 2);  /* 0C0ADB54 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADB56u); r7 <<= 2;  /* 0C0ADB56 shll2 Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ADB58 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0ADB5Cu, 3);  /* 0C0ADB5A mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0ADB5Eu, 1);  /* 0C0ADB5C mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0ADB5E mov Rm,Rn */
	IF(0x0C0ADB60u); r3 = R32(r0 + r2); UPD(0x0C0ADB62u, 2);  /* 0C0ADB60 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ADB64u, 1);  /* 0C0ADB62 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0ADB66u, 1);  /* 0C0ADB64 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0ADB66 add Rm,Rn */
	IF(0x0C0ADB68u); T = (s32)r2 >= 0;  /* 0C0ADB68 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ADB72u, 5); goto L_0C0ADB72; } UPD(0x0C0ADB6Eu, 1); goto L_0C0ADB6E; }  /* 0C0ADB6A bt/s */
L_0C0ADB6E: BLKS(0x0C0ADB6Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADCC0u, 3); goto L_0C0ADCC0; }  /* 0C0ADB6E bra */
L_0C0ADB72: BLKS(0x0C0ADB72u);
	r5 = 0xA00000u; UPD(0x0C0ADB74u, 1);  /* 0C0ADB72 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ADB74 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ADB76 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADB96u, 5); goto L_0C0ADB96; } goto L_0C0ADB7C; }  /* 0C0ADB78 bt/s */
L_0C0ADB7C: BLKS(0x0C0ADB7Cu);
	r9 = 0xC3929E0u; UPD(0x0C0ADB7Eu, 2);  /* 0C0ADB7C mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0ADB80u, 1);  /* 0C0ADB7E mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0ADB82u, 1);  /* 0C0ADB80 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ADB84u, 1);  /* 0C0ADB82 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0ADB84 sub Rm,Rn */
	r2 += r6;  /* 0C0ADB86 add Rm,Rn */
	IF(0x0C0ADB88u); T = (s32)r2 >= 0;  /* 0C0ADB88 cmp/pz Rn */
	if (T) { UPD(0x0C0ADB8Eu, 6); goto L_0C0ADB8E; }  /* 0C0ADB8A bt */
L_0C0ADB8C: BLKS(0x0C0ADB8Cu);
	r2 = 0u - r2;  /* 0C0ADB8C neg Rm,Rn */
	UPD(0x0C0ADB8Eu, 1);
L_0C0ADB8E: BLKS(0x0C0ADB8Eu);
	r10 = 0x780000u; UPD(0x0C0ADB90u, 1);  /* 0C0ADB8E mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0ADB90 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ADB92 cmp/ge Rm,Rn */
	IF(0x0C0ADB94u); r1 = T;  /* 0C0ADB94 movt Rn */
	UPD(0x0C0ADB96u, 3);
L_0C0ADB96: BLKS(0x0C0ADB96u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0ADB96 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0ADB98 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADBC0u, 5); goto L_0C0ADBC0; } UPD(0x0C0ADB9Eu, 1); goto L_0C0ADB9E; }  /* 0C0ADB9A bt/s */
L_0C0ADB9E: BLKS(0x0C0ADB9Eu);
	r14 += 0x20u;  /* 0C0ADB9E add #imm,Rn */
	r15 = r14;  /* 0C0ADBA0 mov Rm,Rn */
	IF(0x0C0ADBA2u); PR = R32(r15); r15 += 4; UPD(0x0C0ADBA4u, 3);  /* 0C0ADBA2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADBA6u, 1);  /* 0C0ADBA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADBA8u, 1);  /* 0C0ADBA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADBAAu, 1);  /* 0C0ADBA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADBACu, 1);  /* 0C0ADBAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADBAEu, 1);  /* 0C0ADBAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADBB0u, 1);  /* 0C0ADBAE mov.l @Rm+,Rn */
	IF(0x0C0ADBB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADBB0 rts */
L_0C0ADBC0: BLKS(0x0C0ADBC0u);
	r8 = 0xC0AFE40u; UPD(0x0C0ADBC2u, 1);  /* 0C0ADBC0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0ADBC2 mov Rm,Rn */
	r2 = 0xC1EEE14u; UPD(0x0C0ADBC6u, 2);  /* 0C0ADBC4 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0ADBC6 mov #imm,Rn */
	r13 = 0xC050D70u; UPD(0x0C0ADBCAu, 2);  /* 0C0ADBC8 mov.l @(disp,pc),Rn */
	IF(0x0C0ADBCAu); { u32 t_ = r8; PR = 0x0C0ADBCEu; IF(0x0C0ADBCCu); r10 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADBCEu); }  /* 0C0ADBCA jsr @Rn */
L_0C0ADBCE: BLKS(0x0C0ADBCEu);
	r4 = 0x3u;  /* 0C0ADBCE mov #imm,Rn */
	IF(0x0C0ADBD0u); { u32 t_ = r13; PR = 0x0C0ADBD4u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADBD4u); }  /* 0C0ADBD0 jsr @Rn */
L_0C0ADBD4: BLKS(0x0C0ADBD4u);
	r0 += 0x1u;  /* 0C0ADBD4 add #imm,Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0ADBD6 exts.w Rm,Rn */
	r4 = r10;  /* 0C0ADBD8 mov Rm,Rn */
	IF(0x0C0ADBDAu); { u32 t_ = r13; PR = 0x0C0ADBDEu; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADBDEu); }  /* 0C0ADBDA jsr @Rn */
L_0C0ADBDE: BLKS(0x0C0ADBDEu);
	W32(r14 + 0x18u, r12); UPD(0x0C0ADBE0u, 1);  /* 0C0ADBDE mov.l Rm,@(disp,Rn) */
	r13 = r0;  /* 0C0ADBE0 mov Rm,Rn */
	IF(0x0C0ADBE2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0ADBE2 shar Rn */
	r13 += r10;  /* 0C0ADBE4 add Rm,Rn */
	r12 = 0x0u;  /* 0C0ADBE6 mov #imm,Rn */
	UPD(0x0C0ADBE8u, 4);
L_0C0ADBE8: BLKS(0x0C0ADBE8u);
	r9 = 0xC058060u; UPD(0x0C0ADBEAu, 1);  /* 0C0ADBE8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ADBEA mov Rm,Rn */
	IF(0x0C0ADBECu); { u32 t_ = r9; PR = 0x0C0ADBF0u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADBF0u); }  /* 0C0ADBEC jsr @Rn */
L_0C0ADBF0: BLKS(0x0C0ADBF0u);
	r7 = 0xC0AFF74u; UPD(0x0C0ADBF2u, 1);  /* 0C0ADBF0 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C0ADBF2 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0ADBF6u, 2);  /* 0C0ADBF4 mov.l @(disp,pc),Rn */
	IF(0x0C0ADBF6u); { u32 t_ = r7; PR = 0x0C0ADBFAu; r5 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0ADBFAu); }  /* 0C0ADBF6 jsr @Rn */
L_0C0ADBFA: BLKS(0x0C0ADBFAu);
	r9 = r0;  /* 0C0ADBFA mov Rm,Rn */
	r4 = r12;  /* 0C0ADBFC mov Rm,Rn */
	IF(0x0C0ADBFEu); { u32 t_ = r10; PR = 0x0C0ADC02u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC02u); }  /* 0C0ADBFE jsr @Rn */
L_0C0ADC02: BLKS(0x0C0ADC02u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0ADC04u, 1);  /* 0C0ADC02 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0ADC04 add #imm,Rn */
	r10 = r0;  /* 0C0ADC06 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C0ADC0Au, 3);  /* 0C0ADC08 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0ADC0A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0ADC0Eu, 2);  /* 0C0ADC0C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0ADC0E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0ADC12u, 2);  /* 0C0ADC10 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0ADC12 mov Rm,Rn */
	IF(0x0C0ADC14u); { u32 t_ = r8; PR = 0x0C0ADC18u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADC18u); }  /* 0C0ADC14 jsr @Rn */
L_0C0ADC18: BLKS(0x0C0ADC18u);
	r3 = 0xC058030u; UPD(0x0C0ADC1Au, 1);  /* 0C0ADC18 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0ADC1A mov Rm,Rn */
	r4 = r11;  /* 0C0ADC1C mov Rm,Rn */
	IF(0x0C0ADC1Eu); { u32 t_ = r3; PR = 0x0C0ADC22u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC22u); }  /* 0C0ADC1E jsr @Rn */
L_0C0ADC22: BLKS(0x0C0ADC22u);
	r1 = 0xC058030u; UPD(0x0C0ADC24u, 1);  /* 0C0ADC22 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0ADC24 sub Rm,Rn */
	r5 = r9;  /* 0C0ADC26 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0ADC2Au, 3);  /* 0C0ADC28 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADC2Au); { u32 t_ = r1; PR = 0x0C0ADC2Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC2Eu); }  /* 0C0ADC2A jsr @Rn */
L_0C0ADC2E: BLKS(0x0C0ADC2Eu);
	r6 = 0xC058060u; UPD(0x0C0ADC30u, 1);  /* 0C0ADC2E mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0ADC30 mov Rm,Rn */
	r4 = r11;  /* 0C0ADC32 mov Rm,Rn */
	IF(0x0C0ADC34u); { u32 t_ = r6; PR = 0x0C0ADC38u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADC38u); }  /* 0C0ADC34 jsr @Rn */
L_0C0ADC38: BLKS(0x0C0ADC38u);
	r9 += r0;  /* 0C0ADC38 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0ADC3Cu, 2);  /* 0C0ADC3A mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AC6A0u; UPD(0x0C0ADC3Eu, 1);  /* 0C0ADC3C mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C0ADC40u, 1);  /* 0C0ADC3E mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0ADC42u, 1);  /* 0C0ADC40 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0ADC44u, 1);  /* 0C0ADC42 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC44u); { u32 t_ = r9; PR = 0x0C0ADC48u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC6A0, 0x0C0AC6A0u, 0x0C0ADC48u); }  /* 0C0ADC44 jsr @Rn */
L_0C0ADC48: BLKS(0x0C0ADC48u);
	r7 = R32(r14 + 0x18u); UPD(0x0C0ADC4Au, 1);  /* 0C0ADC48 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0ADC4A mov #imm,Rn */
	r7 += 0x1u;  /* 0C0ADC4C add #imm,Rn */
	r4 = (u32)(s32)(s16)r7;  /* 0C0ADC4E exts.w Rm,Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C0ADC52u, 4);  /* 0C0ADC50 mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x18u); UPD(0x0C0ADC54u, 1);  /* 0C0ADC52 mov.l @(disp,Rm),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0ADC54 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ADBE8u, 4); goto L_0C0ADBE8; } goto L_0C0ADC5A; }  /* 0C0ADC56 bf/s */
L_0C0ADC5A: BLKS(0x0C0ADC5Au);
	r1 = R32(r14 + 0x14u); UPD(0x0C0ADC5Cu, 2);  /* 0C0ADC5A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ADC5C add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0ADC60u, 2);  /* 0C0ADC5E mov.l @(disp,Rm),Rn */
	r11 = 0x3Fu;  /* 0C0ADC60 mov #imm,Rn */
	r9 = 0xC1EEB80u; UPD(0x0C0ADC64u, 2);  /* 0C0ADC62 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0ADC64 add Rm,Rn */
	W32(r15, r1); UPD(0x0C0ADC68u, 2);  /* 0C0ADC66 mov.l Rm,@Rn */
	r9 += r10;  /* 0C0ADC68 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ADC6Cu, 2);  /* 0C0ADC6A mov.w @Rm,Rn */
	r3 = 0xC0AABB0u; UPD(0x0C0ADC6Eu, 1);  /* 0C0ADC6C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0ADC70u, 1);  /* 0C0ADC6E mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0ADC72u, 1);  /* 0C0ADC70 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0ADC74u, 1);  /* 0C0ADC72 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0ADC76u, 1);  /* 0C0ADC74 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC76u); { u32 t_ = r3; PR = 0x0C0ADC7Au; r7 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0ADC7Au); }  /* 0C0ADC76 jsr @Rn */
L_0C0ADC7A: BLKS(0x0C0ADC7Au);
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ADC7Cu, 1);  /* 0C0ADC7A mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0ADC7C add #imm,Rn */
	r2 = 0xC0AAFE0u; UPD(0x0C0ADC80u, 2);  /* 0C0ADC7E mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0ADC80 add Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0ADC84u, 2);  /* 0C0ADC82 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0ADC84 exts.w Rm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C0ADC88u, 2);  /* 0C0ADC86 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0ADC8Au, 1);  /* 0C0ADC88 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC8Au); { u32 t_ = r2; PR = 0x0C0ADC8Eu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0ADC8Eu); }  /* 0C0ADC8A jsr @Rn */
L_0C0ADC8E: BLKS(0x0C0ADC8Eu);
	r13 = 0xC1EEBF4u; UPD(0x0C0ADC90u, 1);  /* 0C0ADC8E mov.l @(disp,pc),Rn */
	IF(0x0C0ADC90u); { u32 t_ = r8; PR = 0x0C0ADC94u; r13 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADC94u); }  /* 0C0ADC90 jsr @Rn */
L_0C0ADC94: BLKS(0x0C0ADC94u);
	r0 &= 0x1u;  /* 0C0ADC94 and #imm,r0 */
	IF(0x0C0ADC96u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0ADC98u, 2);  /* 0C0ADC96 mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0ADC98 extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0ADC9A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0ADCB0u, 5); goto L_0C0ADCB0; }  /* 0C0ADC9C bt */
L_0C0ADC9E: BLKS(0x0C0ADC9Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ADB9Eu, 3); goto L_0C0ADB9E; }  /* 0C0ADC9E bra */
L_0C0ADCB0: BLKS(0x0C0ADCB0u);
	r11 = 0xC0AFC10u; UPD(0x0C0ADCB2u, 1);  /* 0C0ADCB0 mov.l @(disp,pc),Rn */
	IF(0x0C0ADCB2u); { u32 t_ = r11; PR = 0x0C0ADCB6u; IF(0x0C0ADCB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ADCB6u); }  /* 0C0ADCB2 jsr @Rn */
L_0C0ADCB6: BLKS(0x0C0ADCB6u);
	{ IF(0x0C0ADCB8u); ; /* slot nop */ UPD(0x0C0ADC9Eu, 3); goto L_0C0ADC9E; }  /* 0C0ADCB6 bra */
L_0C0ADCC0: BLKS(0x0C0ADCC0u);
	{ IF(0x0C0ADCC2u); ; /* slot nop */ UPD(0x0C0ADB72u, 3); goto L_0C0ADB72; }  /* 0C0ADCC0 bra */
}

/* FUN_0c0add10 */
void f_0C0ADD10(sh3_t *c)
{
	LOCALS;
L_0C0ADD10: BLKS(0x0C0ADD10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD12u, 1);  /* 0C0ADD10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD14u, 1);  /* 0C0ADD12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD16u, 1);  /* 0C0ADD14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD18u, 1);  /* 0C0ADD16 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0ADD18 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD1Cu, 2);  /* 0C0ADD1A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0ADD1C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD20u, 2);  /* 0C0ADD1E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0ADD20 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD24u, 2);  /* 0C0ADD22 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C0ADD24 mov Rm,Rn */
	r8 = 0xC0AA550u; UPD(0x0C0ADD28u, 2);  /* 0C0ADD26 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0ADD28 mov #imm,Rn */
	IF(0x0C0ADD2Au); r15 -= 4; W32(r15, PR); UPD(0x0C0ADD2Cu, 2);  /* 0C0ADD2A sts.l pr,@-Rn */
	IF(0x0C0ADD2Cu); { u32 t_ = r8; PR = 0x0C0ADD30u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ADD30u); }  /* 0C0ADD2C jsr @Rn */
L_0C0ADD30: BLKS(0x0C0ADD30u);
	T = (r0 & r0) == 0;  /* 0C0ADD30 tst Rm,Rn */
	if (!T) { UPD(0x0C0ADD50u, 4); goto L_0C0ADD50; }  /* 0C0ADD32 bf */
L_0C0ADD34: BLKS(0x0C0ADD34u);
	r15 = r14;  /* 0C0ADD34 mov Rm,Rn */
	IF(0x0C0ADD36u); PR = R32(r15); r15 += 4; UPD(0x0C0ADD38u, 2);  /* 0C0ADD36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADD3Au, 1);  /* 0C0ADD38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADD3Cu, 1);  /* 0C0ADD3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADD3Eu, 1);  /* 0C0ADD3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADD40u, 1);  /* 0C0ADD3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADD42u, 1);  /* 0C0ADD40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADD44u, 1);  /* 0C0ADD42 mov.l @Rm+,Rn */
	IF(0x0C0ADD44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADD44 rts */
L_0C0ADD50: BLKS(0x0C0ADD50u);
	r2 = 0xC2755BCu; UPD(0x0C0ADD52u, 1);  /* 0C0ADD50 mov.l @(disp,pc),Rn */
	r8 = 0x38u;  /* 0C0ADD52 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ADD56u, 2);  /* 0C0ADD54 mov.w @Rm,Rn */
	r5 = 0x1Au;  /* 0C0ADD56 mov #imm,Rn */
	IF(0x0C0ADD58u); MACL = r0 * r8;  /* 0C0ADD58 mul.l Rm,Rn */
	r7 = 0xC275E1Cu; UPD(0x0C0ADD5Cu, 4);  /* 0C0ADD5A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0ADD5C mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0ADD60u, 2);  /* 0C0ADD5E mov.l @(disp,pc),Rn */
	IF(0x0C0ADD60u); r8 = MACL;  /* 0C0ADD60 sts macl,Rn */
	r6 = 0xC0000000u; UPD(0x0C0ADD64u, 2);  /* 0C0ADD62 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0ADD64 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0ADD68u, 2);  /* 0C0ADD66 mov.l Rm,@Rn */
	IF(0x0C0ADD68u); { u32 t_ = r9; PR = 0x0C0ADD6Cu; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD6Cu); }  /* 0C0ADD68 jsr @Rn */
L_0C0ADD6C: BLKS(0x0C0ADD6Cu);
	r4 = 0x0u;  /* 0C0ADD6C mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0ADD70u, 2);  /* 0C0ADD6E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0ADD72u, 1);  /* 0C0ADD70 mov.l Rm,@(disp,Rn) */
	r4 = 0x3Fu;  /* 0C0ADD72 mov #imm,Rn */
	W32(r8 + 0x14u, r13); UPD(0x0C0ADD76u, 2);  /* 0C0ADD74 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADD76u); { u32 t_ = r9; PR = 0x0C0ADD7Au; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD7Au); }  /* 0C0ADD76 jsr @Rn */
L_0C0ADD7A: BLKS(0x0C0ADD7Au);
	r10 = 0x400u; UPD(0x0C0ADD7Cu, 1);  /* 0C0ADD7A mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C0ADD7C add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C0ADD7E add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0ADD80 exts.w Rm,Rn */
	IF(0x0C0ADD82u); { u32 t_ = r9; PR = 0x0C0ADD86u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD86u); }  /* 0C0ADD82 jsr @Rn */
L_0C0ADD86: BLKS(0x0C0ADD86u);
	r13 = r0;  /* 0C0ADD86 mov Rm,Rn */
	r13 += r10;  /* 0C0ADD88 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0ADD8Cu, 3);  /* 0C0ADD8A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ADD8C mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0ADD90u, 2);  /* 0C0ADD8E mov.l @(disp,pc),Rn */
	IF(0x0C0ADD90u); { u32 t_ = r10; PR = 0x0C0ADD94u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADD94u); }  /* 0C0ADD90 jsr @Rn */
L_0C0ADD94: BLKS(0x0C0ADD94u);
	IF(0x0C0ADD94u); r0 <<= 8;  /* 0C0ADD94 shll8 Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0ADD98u, 2);  /* 0C0ADD96 mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0ADD98 mov Rm,Rn */
	IF(0x0C0ADD9Au); { u32 t_ = r9; PR = 0x0C0ADD9Eu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADD9Eu); }  /* 0C0ADD9A jsr @Rn */
L_0C0ADD9E: BLKS(0x0C0ADD9Eu);
	IF(0x0C0ADD9Eu); r0 <<= 8;  /* 0C0ADD9E shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0ADDA2u, 2);  /* 0C0ADDA0 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C0ADDA2 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0ADDA4 add #imm,Rn */
	W8(r8, r3); UPD(0x0C0ADDA8u, 3);  /* 0C0ADDA6 mov.b Rm,@Rn */
	r2 = 0x0u;  /* 0C0ADDA8 mov #imm,Rn */
	r8 += 0x3u;  /* 0C0ADDAA add #imm,Rn */
	W8(r8, r11); UPD(0x0C0ADDAEu, 3);  /* 0C0ADDAC mov.b Rm,@Rn */
	r0 = 0x808080u; UPD(0x0C0ADDB0u, 1);  /* 0C0ADDAE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ADDB0 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C0ADDB4u, 2);  /* 0C0ADDB2 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ADD34u, 3); goto L_0C0ADD34; }  /* 0C0ADDB4 bra */
}

/* FUN_0c0adde0 */
void f_0C0ADDE0(sh3_t *c)
{
	LOCALS;
L_0C0ADDE0: BLKS(0x0C0ADDE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE2u, 1);  /* 0C0ADDE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE4u, 1);  /* 0C0ADDE2 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0ADDE4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE8u, 2);  /* 0C0ADDE6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0ADDE8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDECu, 2);  /* 0C0ADDEA mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0ADDEC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF0u, 2);  /* 0C0ADDEE mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0ADDF0 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF4u, 2);  /* 0C0ADDF2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF6u, 1);  /* 0C0ADDF4 mov.l Rm,@-Rn */
	IF(0x0C0ADDF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADDF8u, 1);  /* 0C0ADDF6 sts.l pr,@-Rn */
	r14 = r15;  /* 0C0ADDF8 mov Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0ADDFCu, 2);  /* 0C0ADDFA mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s8)r0;  /* 0C0ADDFC exts.b Rm,Rn */
	r0 = R32(r14 + 0x24u); UPD(0x0C0ADE00u, 2);  /* 0C0ADDFE mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s8)r0;  /* 0C0ADE00 exts.b Rm,Rn */
	r0 = 0xC0AA550u; UPD(0x0C0ADE04u, 2);  /* 0C0ADE02 mov.l @(disp,pc),Rn */
	IF(0x0C0ADE04u); { u32 t_ = r0; PR = 0x0C0ADE08u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ADE08u); }  /* 0C0ADE04 jsr @Rn */
L_0C0ADE08: BLKS(0x0C0ADE08u);
	T = (r0 & r0) == 0;  /* 0C0ADE08 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADE4Eu, 4); goto L_0C0ADE4E; } goto L_0C0ADE0E; }  /* 0C0ADE0A bt/s */
L_0C0ADE0E: BLKS(0x0C0ADE0Eu);
	r5 = 0xC2755BCu; UPD(0x0C0ADE10u, 2);  /* 0C0ADE0E mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0ADE10 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ADE14u, 2);  /* 0C0ADE12 mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0ADE14 mov #imm,Rn */
	IF(0x0C0ADE16u); MACL = r4 * r3;  /* 0C0ADE16 mul.l Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0ADE1Au, 4);  /* 0C0ADE18 mov.l @(disp,pc),Rn */
	r8 &= r0;  /* 0C0ADE1A and Rm,Rn */
	r7 = 0xC0000000u; UPD(0x0C0ADE1Eu, 2);  /* 0C0ADE1C mov.l @(disp,pc),Rn */
	IF(0x0C0ADE1Eu); r3 = MACL;  /* 0C0ADE1E sts macl,Rn */
	r3 += r2;  /* 0C0ADE20 add Rm,Rn */
	r5 = 0x0u;  /* 0C0ADE22 mov #imm,Rn */
	r7 |= r8;  /* 0C0ADE24 or Rm,Rn */
	r6 = 0x14u;  /* 0C0ADE26 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0ADE2Au, 6);  /* 0C0ADE28 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0ADE2A mov #imm,Rn */
	W32(r3 + 0x4u, r6); UPD(0x0C0ADE2Eu, 2);  /* 0C0ADE2C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r9); UPD(0x0C0ADE30u, 1);  /* 0C0ADE2E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C0ADE32u, 1);  /* 0C0ADE30 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r10); UPD(0x0C0ADE34u, 1);  /* 0C0ADE32 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r11); UPD(0x0C0ADE36u, 1);  /* 0C0ADE34 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0ADE38u, 1);  /* 0C0ADE36 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r5); UPD(0x0C0ADE3Au, 1);  /* 0C0ADE38 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ADE3A add #imm,Rn */
	W8(r3, r5); UPD(0x0C0ADE3Eu, 2);  /* 0C0ADE3C mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0ADE3E add #imm,Rn */
	W8(r3, r12); UPD(0x0C0ADE42u, 2);  /* 0C0ADE40 mov.b Rm,@Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0ADE44u, 1);  /* 0C0ADE42 mov.b Rm,@-Rn */
	r4 = 0x207C0C0u; UPD(0x0C0ADE46u, 1);  /* 0C0ADE44 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ADE46 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0ADE4Au, 2);  /* 0C0ADE48 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C0ADE4Cu, 1);  /* 0C0ADE4A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x2Cu, r2); UPD(0x0C0ADE4Eu, 1);  /* 0C0ADE4C mov.l Rm,@(disp,Rn) */
L_0C0ADE4E: BLKS(0x0C0ADE4Eu);
	r15 = r14;  /* 0C0ADE4E mov Rm,Rn */
	IF(0x0C0ADE50u); PR = R32(r15); r15 += 4; UPD(0x0C0ADE52u, 2);  /* 0C0ADE50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADE54u, 1);  /* 0C0ADE52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADE56u, 1);  /* 0C0ADE54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADE58u, 1);  /* 0C0ADE56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADE5Au, 1);  /* 0C0ADE58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADE5Cu, 1);  /* 0C0ADE5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADE5Eu, 1);  /* 0C0ADE5C mov.l @Rm+,Rn */
	IF(0x0C0ADE5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADE5E rts */
}

void f_0C0ADE80(sh3_t *c)
{
	LOCALS;
L_0C0ADE80: BLKS(0x0C0ADE80u);
	r6 = 0x38u;  /* 0C0ADE80 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ADE82 exts.w Rm,Rn */
	IF(0x0C0ADE84u); MACL = r4 * r6;  /* 0C0ADE84 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0ADE88u, 5);  /* 0C0ADE86 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADE8Au, 1);  /* 0C0ADE88 mov.l Rm,@-Rn */
	IF(0x0C0ADE8Au); r3 = MACL;  /* 0C0ADE8A sts macl,Rn */
	r3 += r5;  /* 0C0ADE8C add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0ADE90u, 3);  /* 0C0ADE8E mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x1Cu); UPD(0x0C0ADE92u, 1);  /* 0C0ADE90 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0ADE94u, 1);  /* 0C0ADE92 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0ADE94 add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0ADE98u, 2);  /* 0C0ADE96 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0ADE9Au, 1);  /* 0C0ADE98 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0ADE9A add Rm,Rn */
	r2 = 0xC1EED6Cu; UPD(0x0C0ADE9Eu, 2);  /* 0C0ADE9C mov.l @(disp,pc),Rn */
	IF(0x0C0ADE9Eu); r0 <<= 2;  /* 0C0ADE9E shll2 Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0ADEA2u, 2);  /* 0C0ADEA0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r7); UPD(0x0C0ADEA4u, 1);  /* 0C0ADEA2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADEA4u); r6 = R32(r0 + r2); UPD(0x0C0ADEA6u, 1);  /* 0C0ADEA4 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ADEA8u, 1);  /* 0C0ADEA6 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0ADEA8 add Rm,Rn */
	IF(0x0C0ADEAAu); T = (s32)r2 >= 0;  /* 0C0ADEAA cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ADF50u, 5); goto L_0C0ADF50; } UPD(0x0C0ADEB0u, 1); goto L_0C0ADEB0; }  /* 0C0ADEAC bf/s */
L_0C0ADEB0: BLKS(0x0C0ADEB0u);
	r3 = 0xA00000u; UPD(0x0C0ADEB2u, 1);  /* 0C0ADEB0 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0ADEB2 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ADEB4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADED2u, 5); goto L_0C0ADED2; } goto L_0C0ADEBA; }  /* 0C0ADEB6 bt/s */
L_0C0ADEBA: BLKS(0x0C0ADEBAu);
	r2 = 0xC3929E0u; UPD(0x0C0ADEBCu, 2);  /* 0C0ADEBA mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0ADEBEu, 1);  /* 0C0ADEBC mov.l @Rm,Rn */
	r2 = r7;  /* 0C0ADEBE mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0ADEC2u, 2);  /* 0C0ADEC0 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0ADEC2 sub Rm,Rn */
	r2 += r7;  /* 0C0ADEC4 add Rm,Rn */
	IF(0x0C0ADEC6u); T = (s32)r2 >= 0;  /* 0C0ADEC6 cmp/pz Rn */
	if (!T) { UPD(0x0C0ADF40u, 6); goto L_0C0ADF40; }  /* 0C0ADEC8 bf */
L_0C0ADECA: BLKS(0x0C0ADECAu);
	r5 = 0x780000u; UPD(0x0C0ADECCu, 1);  /* 0C0ADECA mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0ADECC add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0ADECE cmp/ge Rm,Rn */
	IF(0x0C0ADED0u); r1 = T;  /* 0C0ADED0 movt Rn */
	UPD(0x0C0ADED2u, 3);
L_0C0ADED2: BLKS(0x0C0ADED2u);
	r7 = (u32)(s32)(s16)r1;  /* 0C0ADED2 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0ADED4 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADEF0u, 5); goto L_0C0ADEF0; } goto L_0C0ADEDA; }  /* 0C0ADED6 bt/s */
L_0C0ADEDA: BLKS(0x0C0ADEDAu);
	IF(0x0C0ADEDAu); MACL = r4 * r3;  /* 0C0ADEDA mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C0ADEDC mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ADEE0u, 5);  /* 0C0ADEDE mov.l @(disp,pc),Rn */
	IF(0x0C0ADEE0u); r0 = MACL;  /* 0C0ADEE0 sts macl,Rn */
	IF(0x0C0ADEE2u); W32(r0 + r4, r6); UPD(0x0C0ADEE4u, 2);  /* 0C0ADEE2 mov.l Rm,@(r0,Rn) */
L_0C0ADEE4: BLKS(0x0C0ADEE4u);
	r15 = r14;  /* 0C0ADEE4 mov Rm,Rn */
	IF(0x0C0ADEE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ADEE6 rts */
L_0C0ADEF0: BLKS(0x0C0ADEF0u);
	r5 = 0x38u;  /* 0C0ADEF0 mov #imm,Rn */
	IF(0x0C0ADEF2u); MACL = r4 * r5;  /* 0C0ADEF2 mul.l Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0ADEF6u, 4);  /* 0C0ADEF4 mov.l @(disp,pc),Rn */
	IF(0x0C0ADEF6u); r3 = MACL;  /* 0C0ADEF6 sts macl,Rn */
	r3 += r2;  /* 0C0ADEF8 add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0ADEFCu, 3);  /* 0C0ADEFA mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C0ADEFEu, 1);  /* 0C0ADEFC mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C0ADEFE sub Rm,Rn */
	W32(r3 + 0x2Cu, r0); UPD(0x0C0ADF02u, 2);  /* 0C0ADF00 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0xCu); UPD(0x0C0ADF04u, 1);  /* 0C0ADF02 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ADF04 add #imm,Rn */
	T = r0 == 0xAu;  /* 0C0ADF06 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ADF30u, 5); goto L_0C0ADF30; } UPD(0x0C0ADF0Cu, 1); goto L_0C0ADF0C; }  /* 0C0ADF08 bt/s */
L_0C0ADF0C: BLKS(0x0C0ADF0Cu);
	r4 = 0xAu;  /* 0C0ADF0C mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0ADF0E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x10u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0ADF20u, 5); goto L_0C0ADF20; } goto L_0C0ADF14; }  /* 0C0ADF10 bt/s */
L_0C0ADF14: BLKS(0x0C0ADF14u);
	T = r0 == 0x6u;  /* 0C0ADF14 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0ADEE4u, 5); goto L_0C0ADEE4; }  /* 0C0ADF16 bf */
L_0C0ADF18: BLKS(0x0C0ADF18u);
	r0 = R32(r3); UPD(0x0C0ADF1Au, 1);  /* 0C0ADF18 mov.l @Rm,Rn */
	r0 |= 0x2u;  /* 0C0ADF1A or #imm,r0 */
	UPD(0x0C0ADF1Cu, 1);
L_0C0ADF1C: BLKS(0x0C0ADF1Cu);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF1C bra */
L_0C0ADF20: BLKS(0x0C0ADF20u);
	if (!T) { UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF20 bf */
L_0C0ADF22: BLKS(0x0C0ADF22u);
	W32(r3, r7); UPD(0x0C0ADF24u, 1);  /* 0C0ADF22 mov.l Rm,@Rn */
	{ IF(0x0C0ADF26u); ; /* slot nop */ UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF24 bra */
L_0C0ADF30: BLKS(0x0C0ADF30u);
	r0 = R32(r3); UPD(0x0C0ADF32u, 1);  /* 0C0ADF30 mov.l @Rm,Rn */
	{ r0 |= 0x1u; /* slot or #imm,r0 */ UPD(0x0C0ADF1Cu, 3); goto L_0C0ADF1C; }  /* 0C0ADF32 bra */
L_0C0ADF40: BLKS(0x0C0ADF40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADECAu, 3); goto L_0C0ADECA; }  /* 0C0ADF40 bra */
L_0C0ADF50: BLKS(0x0C0ADF50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADEB0u, 3); goto L_0C0ADEB0; }  /* 0C0ADF50 bra */
}


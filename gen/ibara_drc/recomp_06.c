#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c05b900 */
void f_0C05B900(sh3_t *c)
{
	LOCALS;
L_0C05B900: BLKS(0x0C05B900u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B902u, 1);  /* 0C05B900 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05B904u, 1);  /* 0C05B902 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05B906u, 1);  /* 0C05B904 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05B908u, 1);  /* 0C05B906 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05B90Au, 1);  /* 0C05B908 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05B90Cu, 1);  /* 0C05B90A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B90Eu, 1);  /* 0C05B90C mov.l Rm,@-Rn */
	r2 = 0xC21F7F9u; UPD(0x0C05B910u, 1);  /* 0C05B90E mov.l @(disp,pc),Rn */
	IF(0x0C05B910u); r15 -= 4; W32(r15, PR); UPD(0x0C05B912u, 1);  /* 0C05B910 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B914u, 1);  /* 0C05B912 mov.b @Rm,Rn */
	r15 += 0xFFFFFFDCu;  /* 0C05B914 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C05B916 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05B960u, 5); goto L_0C05B960; } goto L_0C05B91C; }  /* 0C05B918 bt/s */
L_0C05B91C: BLKS(0x0C05B91Cu);
	r7 = 0xC286298u; UPD(0x0C05B91Eu, 2);  /* 0C05B91C mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C05B91E mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C05B922u, 2);  /* 0C05B920 mov.l @Rm,Rn */
	r6 = 0xC21CA24u; UPD(0x0C05B924u, 1);  /* 0C05B922 mov.l @(disp,pc),Rn */
	IF(0x0C05B924u); r0 >>= 2;  /* 0C05B924 shlr2 Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C05B928u, 2);  /* 0C05B926 mov.b @Rm,Rn */
	IF(0x0C05B928u); T = r0 & 1; r0 >>= 1;  /* 0C05B928 shlr Rn */
	IF(0x0C05B92Au); r0 >>= 2;  /* 0C05B92A shlr2 Rn */
	T = (r5 & r5) == 0;  /* 0C05B92C tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C05B92E negc Rm,Rn */
	r0 &= 0x1u;  /* 0C05B930 and #imm,r0 */
	r0 |= r3;  /* 0C05B932 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05B934 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x27u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05B942u, 10); goto L_0C05B942; } goto L_0C05B93A; }  /* 0C05B936 bf/s */
L_0C05B93A: BLKS(0x0C05B93Au);
	r13 = 0x2460u; UPD(0x0C05B93Cu, 2);  /* 0C05B93A mov.w @(disp,pc),Rn */
	IF(0x0C05B93Cu); { u32 tv_ = (r13 + 0x0C05B940u); u32 t_ = PHYS(tv_); r6 = 0xAu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05DDA0u: goto L_0C05DDA0; default: JUMPD(tv_); } }  /* 0C05B93C braf Rn */
L_0C05B942: BLKS(0x0C05B942u);
	r11 = 0xC050CD0u; UPD(0x0C05B944u, 1);  /* 0C05B942 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B944 mov #imm,Rn */
	r4 = 0xC275544u; UPD(0x0C05B948u, 2);  /* 0C05B946 mov.l @(disp,pc),Rn */
	r7 = 0xC040C000u; UPD(0x0C05B94Au, 1);  /* 0C05B948 mov.l @(disp,pc),Rn */
	IF(0x0C05B94Au); { u32 t_ = r11; PR = 0x0C05B94Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05B94Eu); }  /* 0C05B94A jsr @Rn */
L_0C05B94E: BLKS(0x0C05B94Eu);
	r10 = 0xC161A9Fu; UPD(0x0C05B950u, 1);  /* 0C05B94E mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B950 mov #imm,Rn */
	r9 = 0xC22C870u; UPD(0x0C05B954u, 2);  /* 0C05B952 mov.l @(disp,pc),Rn */
	r8 = 0xC2864B4u; UPD(0x0C05B956u, 1);  /* 0C05B954 mov.l @(disp,pc),Rn */
	r0 = 0xC05E330u; UPD(0x0C05B958u, 1);  /* 0C05B956 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C05B95Au, 1);  /* 0C05B958 mov.b @Rm,Rn */
	r4 = R32(r9); UPD(0x0C05B95Cu, 1);  /* 0C05B95A mov.l @Rm,Rn */
	IF(0x0C05B95Cu); { u32 t_ = r0; PR = 0x0C05B960u; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C05B960u); }  /* 0C05B95C jsr @Rn */
L_0C05B960: BLKS(0x0C05B960u);
	r8 = 0xC21F7F9u; UPD(0x0C05B962u, 1);  /* 0C05B960 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C05B964u, 1);  /* 0C05B962 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05B964 tst Rm,Rn */
	if (T) { UPD(0x0C05B970u, 4); goto L_0C05B970; }  /* 0C05B966 bt */
L_0C05B968: BLKS(0x0C05B968u);
	r4 = 0x2422u; UPD(0x0C05B96Au, 1);  /* 0C05B968 mov.w @(disp,pc),Rn */
	IF(0x0C05B96Au); { u32 tv_ = (r4 + 0x0C05B96Eu); u32 t_ = PHYS(tv_); IF(0x0C05B96Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05DD90u: goto L_0C05DD90; default: JUMPD(tv_); } }  /* 0C05B96A braf Rn */
L_0C05B970: BLKS(0x0C05B970u);
	r2 = 0xC220C5Cu; UPD(0x0C05B972u, 1);  /* 0C05B970 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B974u, 1);  /* 0C05B972 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C05B974 tst Rm,Rn */
	IF(0x0C05B976u); r0 = T;  /* 0C05B976 movt Rn */
	r0 ^= 0x1u;  /* 0C05B978 xor #imm,r0 */
	r13 = 0xC161B78u; UPD(0x0C05B97Cu, 4);  /* 0C05B97A mov.l @(disp,pc),Rn */
	IF(0x0C05B97Cu); r0 <<= 2;  /* 0C05B97C shll2 Rn */
	IF(0x0C05B97Eu); r11 = R32(r0 + r13); UPD(0x0C05B980u, 2);  /* 0C05B97E mov.l @(r0,Rm),Rn */
	IF(0x0C05B980u); r6 = T;  /* 0C05B980 movt Rn */
	r0 = r7 & 0xFF;  /* 0C05B982 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05B984 tst Rm,Rn */
	r10 = 0xC392E08u; UPD(0x0C05B988u, 4);  /* 0C05B986 mov.l @(disp,pc),Rn */
	IF(0x0C05B988u); r5 = T;  /* 0C05B988 movt Rn */
	r5 &= r6;  /* 0C05B98A and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05B98C tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05BA28u, 6); goto L_0C05BA28; } UPD(0x0C05B992u, 1); goto L_0C05B992; }  /* 0C05B98E bf/s */
L_0C05B992: BLKS(0x0C05B992u);
	r1 = 0xC21F5EAu; UPD(0x0C05B994u, 1);  /* 0C05B992 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C05B996u, 1);  /* 0C05B994 mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C05B996 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05B998 tst Rm,Rn */
	if (!T) { UPD(0x0C05B9A4u, 5); goto L_0C05B9A4; }  /* 0C05B99A bf */
L_0C05B99C: BLKS(0x0C05B99Cu);
	r1 = 0x23DEu; UPD(0x0C05B99Eu, 1);  /* 0C05B99C mov.w @(disp,pc),Rn */
	IF(0x0C05B99Eu); { u32 tv_ = (r1 + 0x0C05B9A2u); u32 t_ = PHYS(tv_); r1 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05DD80u: goto L_0C05DD80; default: JUMPD(tv_); } }  /* 0C05B99E braf Rn */
L_0C05B9A4: BLKS(0x0C05B9A4u);
	r0 = 0x80u; UPD(0x0C05B9A6u, 1);  /* 0C05B9A4 mov.w @(disp,pc),Rn */
	IF(0x0C05B9A6u); r7 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C05B9A8u, 1);  /* 0C05B9A6 mov.b @(r0,Rm),Rn */
	r1 = 0x1u;  /* 0C05B9A8 mov #imm,Rn */
	r1 &= r7;  /* 0C05B9AA and Rm,Rn */
	UPD(0x0C05B9ACu, 2);
L_0C05B9AC: BLKS(0x0C05B9ACu);
	r2 = 0xC2177F8u; UPD(0x0C05B9AEu, 1);  /* 0C05B9AC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B9B0u, 1);  /* 0C05B9AE mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C05B9B0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05B9B2 tst Rm,Rn */
	{ u32 c_ = T; T = (r1 & r1) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C05B9C2u, 5); goto L_0C05B9C2; } goto L_0C05B9B8; }  /* 0C05B9B4 bt/s */
L_0C05B9B8: BLKS(0x0C05B9B8u);
	r0 = 0x80u; UPD(0x0C05B9BAu, 2);  /* 0C05B9B8 mov.w @(disp,pc),Rn */
	IF(0x0C05B9BAu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C05B9BCu, 1);  /* 0C05B9BA mov.b @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C05B9BC and #imm,r0 */
	r1 |= r0;  /* 0C05B9BE or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05B9C0 tst Rm,Rn */
	UPD(0x0C05B9C2u, 3);
L_0C05B9C2: BLKS(0x0C05B9C2u);
	if (T) { UPD(0x0C05B9DEu, 3); goto L_0C05B9DE; }  /* 0C05B9C2 bt */
L_0C05B9C4: BLKS(0x0C05B9C4u);
	r2 = 0xC220C5Cu; UPD(0x0C05B9C6u, 1);  /* 0C05B9C4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B9C8u, 1);  /* 0C05B9C6 mov.b @Rm,Rn */
	T = r0 == 0xBu;  /* 0C05B9C8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05B9D2u, 4); goto L_0C05B9D2; } goto L_0C05B9CE; }  /* 0C05B9CA bt/s */
L_0C05B9CE: BLKS(0x0C05B9CEu);
	r1 = r0;  /* 0C05B9CE mov Rm,Rn */
	r1 += 0x1u;  /* 0C05B9D0 add #imm,Rn */
	UPD(0x0C05B9D2u, 3);
L_0C05B9D2: BLKS(0x0C05B9D2u);
	r8 = 0xC0505F0u; UPD(0x0C05B9D4u, 1);  /* 0C05B9D2 mov.l @(disp,pc),Rn */
	r12 = 0xC05B5F0u; UPD(0x0C05B9D6u, 1);  /* 0C05B9D4 mov.l @(disp,pc),Rn */
	IF(0x0C05B9D6u); { u32 t_ = r8; PR = 0x0C05B9DAu; W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05B9DAu); }  /* 0C05B9D6 jsr @Rn */
L_0C05B9DA: BLKS(0x0C05B9DAu);
	IF(0x0C05B9DAu); { u32 t_ = r12; PR = 0x0C05B9DEu; IF(0x0C05B9DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5F0, 0x0C05B5F0u, 0x0C05B9DEu); }  /* 0C05B9DA jsr @Rn */
L_0C05B9DE: BLKS(0x0C05B9DEu);
	r10 = 0xC21F5EAu; UPD(0x0C05B9E0u, 1);  /* 0C05B9DE mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFFAu;  /* 0C05B9E0 mov #imm,Rn */
	r0 = 0x80u; UPD(0x0C05B9E4u, 2);  /* 0C05B9E2 mov.w @(disp,pc),Rn */
	r1 = 0xC2177F8u; UPD(0x0C05B9E6u, 1);  /* 0C05B9E4 mov.l @(disp,pc),Rn */
	IF(0x0C05B9E6u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C05B9E8u, 1);  /* 0C05B9E6 mov.b @(r0,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C05B9EAu, 1);  /* 0C05B9E8 mov.b @Rm,Rn */
	IF(0x0C05B9EAu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C05B9EA shar Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C05B9EEu, 2);  /* 0C05B9EC mov.b @Rm,Rn */
	IF(0x0C05B9EEu); ARG0(0x465Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C05B9EE shad Rm,Rn */
	IF(0x0C05B9F0u); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C05B9F2u, 2);  /* 0C05B9F0 mov.b @(r0,Rm),Rn */
	IF(0x0C05B9F2u); ARG0(0x435Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C05B9F2 shad Rm,Rn */
	IF(0x0C05B9F4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C05B9F4 shar Rn */
	r4 &= r6;  /* 0C05B9F6 and Rm,Rn */
	r0 &= r3;  /* 0C05B9F8 and Rm,Rn */
	r0 |= r4;  /* 0C05B9FA or Rm,Rn */
	r0 &= 0x1u;  /* 0C05B9FC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05B9FE tst Rm,Rn */
	if (T) { UPD(0x0C05BA1Au, 10); goto L_0C05BA1A; }  /* 0C05BA00 bt */
L_0C05BA02: BLKS(0x0C05BA02u);
	r2 = 0xC220C5Cu; UPD(0x0C05BA04u, 1);  /* 0C05BA02 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C05BA06u, 1);  /* 0C05BA04 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05BA06 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05BA0Eu, 4); goto L_0C05BA0E; } goto L_0C05BA0C; }  /* 0C05BA08 bf/s */
L_0C05BA0C: BLKS(0x0C05BA0Cu);
	r1 = 0xBu;  /* 0C05BA0C mov #imm,Rn */
	UPD(0x0C05BA0Eu, 2);
L_0C05BA0E: BLKS(0x0C05BA0Eu);
	r11 = 0xC0505F0u; UPD(0x0C05BA10u, 1);  /* 0C05BA0E mov.l @(disp,pc),Rn */
	IF(0x0C05BA10u); { u32 t_ = r11; PR = 0x0C05BA14u; W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05BA14u); }  /* 0C05BA10 jsr @Rn */
L_0C05BA14: BLKS(0x0C05BA14u);
	r0 = 0xC05B5F0u; UPD(0x0C05BA16u, 1);  /* 0C05BA14 mov.l @(disp,pc),Rn */
	IF(0x0C05BA16u); { u32 t_ = r0; PR = 0x0C05BA1Au; IF(0x0C05BA18u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5F0, 0x0C05B5F0u, 0x0C05BA1Au); }  /* 0C05BA16 jsr @Rn */
L_0C05BA1A: BLKS(0x0C05BA1Au);
	r2 = 0xC220C5Cu; UPD(0x0C05BA1Cu, 1);  /* 0C05BA1A mov.l @(disp,pc),Rn */
	r13 = 0xAu;  /* 0C05BA1C mov #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C05BA20u, 2);  /* 0C05BA1E mov.b @Rm,Rn */
	r2 = r9 & 0xFF;  /* 0C05BA20 extu.b Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C05BA22 add #imm,Rn */
	T = r2 > r13;  /* 0C05BA24 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C05BA2Cu, 6); goto L_0C05BA2C; }  /* 0C05BA26 bf */
L_0C05BA28: BLKS(0x0C05BA28u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C05BED6u, 3); goto L_0C05BED6; }  /* 0C05BA28 bra */
L_0C05BA2C: BLKS(0x0C05BA2Cu);
	r0 = 0xC05BA7Cu;  /* 0C05BA2C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C05BA2E add Rm,Rn */
	IF(0x0C05BA30u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05BA32u, 3);  /* 0C05BA30 mov.w @(r0,Rm),Rn */
	IF(0x0C05BA32u); { u32 tv_ = (r7 + 0x0C05BA36u); u32 t_ = PHYS(tv_); IF(0x0C05BA34u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05DBE0u: goto L_0C05DBE0; default: JUMPD(tv_); } }  /* 0C05BA32 braf Rn */
L_0C05BED6: BLKS(0x0C05BED6u);
	r15 = r14;  /* 0C05BED6 mov Rm,Rn */
	IF(0x0C05BED8u); PR = R32(r15); r15 += 4; UPD(0x0C05BEDAu, 2);  /* 0C05BED8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05BEDCu, 1);  /* 0C05BEDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05BEDEu, 1);  /* 0C05BEDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05BEE0u, 1);  /* 0C05BEDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05BEE2u, 1);  /* 0C05BEE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05BEE4u, 1);  /* 0C05BEE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05BEE6u, 1);  /* 0C05BEE4 mov.l @Rm+,Rn */
	IF(0x0C05BEE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05BEE6 rts */
L_0C05DBE0: BLKS(0x0C05DBE0u);
	r9 = 0xC050CD0u; UPD(0x0C05DBE2u, 1);  /* 0C05DBE0 mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C05DBE2 mov #imm,Rn */
	r12 = 0xC0404000u; UPD(0x0C05DBE6u, 2);  /* 0C05DBE4 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C05DBE6 mov #imm,Rn */
	r4 = 0xC161DF8u; UPD(0x0C05DBEAu, 2);  /* 0C05DBE8 mov.l @(disp,pc),Rn */
	IF(0x0C05DBEAu); { u32 t_ = r9; PR = 0x0C05DBEEu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DBEEu); }  /* 0C05DBEA jsr @Rn */
L_0C05DBEE: BLKS(0x0C05DBEEu);
	r7 = 0xC392D50u; UPD(0x0C05DBF0u, 1);  /* 0C05DBEE mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C05DBF0 mov #imm,Rn */
	r11 = 0xC051540u; UPD(0x0C05DBF4u, 2);  /* 0C05DBF2 mov.l @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C05DBF4 mov #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C05DBF8u, 2);  /* 0C05DBF6 mov.b @Rm,Rn */
	r13 = 0xC392E24u; UPD(0x0C05DBFAu, 1);  /* 0C05DBF8 mov.l @(disp,pc),Rn */
	IF(0x0C05DBFAu); { u32 t_ = r11; PR = 0x0C05DBFEu; r4 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05DBFEu); }  /* 0C05DBFA jsr @Rn */
L_0C05DBFE: BLKS(0x0C05DBFEu);
	r7 = r12;  /* 0C05DBFE mov Rm,Rn */
	r4 = 0xC161E00u; UPD(0x0C05DC02u, 2);  /* 0C05DC00 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C05DC02 mov #imm,Rn */
	IF(0x0C05DC04u); { u32 t_ = r9; PR = 0x0C05DC08u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DC08u); }  /* 0C05DC04 jsr @Rn */
L_0C05DC08: BLKS(0x0C05DC08u);
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C05DC0Au, 1);  /* 0C05DC08 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C05DC0A mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C05DC0C extu.b Rm,Rn */
	IF(0x0C05DC0Eu); { u32 t_ = r11; PR = 0x0C05DC12u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05DC12u); }  /* 0C05DC0E jsr @Rn */
L_0C05DC12: BLKS(0x0C05DC12u);
	r7 = r12;  /* 0C05DC12 mov Rm,Rn */
	r4 = 0xC161E08u; UPD(0x0C05DC16u, 2);  /* 0C05DC14 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C05DC16 mov #imm,Rn */
	IF(0x0C05DC18u); { u32 t_ = r9; PR = 0x0C05DC1Cu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DC1Cu); }  /* 0C05DC18 jsr @Rn */
L_0C05DC1C: BLKS(0x0C05DC1Cu);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C05DC1Eu, 1);  /* 0C05DC1C mov.b @Rm,Rn */
	r5 = 0xDu;  /* 0C05DC1E mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C05DC20 extu.b Rm,Rn */
	r13 = 0xC050A80u; UPD(0x0C05DC24u, 3);  /* 0C05DC22 mov.l @(disp,pc),Rn */
	IF(0x0C05DC24u); { u32 t_ = r11; PR = 0x0C05DC28u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05DC28u); }  /* 0C05DC24 jsr @Rn */
L_0C05DC28: BLKS(0x0C05DC28u);
	r7 = r12;  /* 0C05DC28 mov Rm,Rn */
	r4 = 0xC161E30u; UPD(0x0C05DC2Cu, 2);  /* 0C05DC2A mov.l @(disp,pc),Rn */
	r5 = 0xBu;  /* 0C05DC2C mov #imm,Rn */
	r6 = 0x3u;  /* 0C05DC2E mov #imm,Rn */
	IF(0x0C05DC30u); { u32 t_ = r9; PR = 0x0C05DC34u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DC34u); }  /* 0C05DC30 jsr @Rn */
L_0C05DC34: BLKS(0x0C05DC34u);
	r11 = r12;  /* 0C05DC34 mov Rm,Rn */
	IF(0x0C05DC36u); r11 <<= 2;  /* 0C05DC36 shll2 Rn */
	r5 = 0xC161E4Cu; UPD(0x0C05DC3Au, 3);  /* 0C05DC38 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C05DC3A mov Rm,Rn */
	IF(0x0C05DC3Cu); r4 = R32(r0 + r5); UPD(0x0C05DC3Eu, 2);  /* 0C05DC3C mov.l @(r0,Rm),Rn */
	r10 = 0u - r12;  /* 0C05DC3E neg Rm,Rn */
	r10 += 0xAu;  /* 0C05DC40 add #imm,Rn */
	r5 = r10;  /* 0C05DC42 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05DC46u, 4);  /* 0C05DC44 mov.l @(disp,pc),Rn */
	IF(0x0C05DC46u); { u32 t_ = r9; PR = 0x0C05DC4Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DC4Au); }  /* 0C05DC46 jsr @Rn */
L_0C05DC4A: BLKS(0x0C05DC4Au);
	r2 = 0xC27DC24u; UPD(0x0C05DC4Cu, 1);  /* 0C05DC4A mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C05DC4C mov Rm,Rn */
	IF(0x0C05DC4Eu); r11 = R32(r0 + r2); UPD(0x0C05DC50u, 2);  /* 0C05DC4E mov.l @(r0,Rm),Rn */
	r3 = 0x10000u; UPD(0x0C05DC52u, 1);  /* 0C05DC50 mov.l @(disp,pc),Rn */
	T = (s32)r11 > (s32)r3;  /* 0C05DC52 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05DC58u, 4); goto L_0C05DC58; }  /* 0C05DC54 bf */
L_0C05DC56: BLKS(0x0C05DC56u);
	r11 = 0xFFFFu; UPD(0x0C05DC58u, 1);  /* 0C05DC56 mov.l @(disp,pc),Rn */
L_0C05DC58: BLKS(0x0C05DC58u);
	r8 = 0xC3929B0u; UPD(0x0C05DC5Au, 1);  /* 0C05DC58 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05DC5A mov Rm,Rn */
	r0 = r8;  /* 0C05DC5C mov Rm,Rn */
	IF(0x0C05DC5Eu); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05DC60u, 3);  /* 0C05DC5E mov.b @(r0,Rm),Rn */
	r6 = 0x3u;  /* 0C05DC60 mov #imm,Rn */
	IF(0x0C05DC62u); { u32 t_ = r13; PR = 0x0C05DC66u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05DC66u); }  /* 0C05DC62 jsr @Rn */
L_0C05DC66: BLKS(0x0C05DC66u);
	r7 = 0xC0AFD50u; UPD(0x0C05DC68u, 1);  /* 0C05DC66 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C05DC68 mov Rm,Rn */
	r5 = r10;  /* 0C05DC6A mov Rm,Rn */
	IF(0x0C05DC6Cu); { u32 t_ = r7; PR = 0x0C05DC70u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFD50, 0x0C0AFD50u, 0x0C05DC70u); }  /* 0C05DC6C jsr @Rn */
L_0C05DC70: BLKS(0x0C05DC70u);
	r4 = r11;  /* 0C05DC70 mov Rm,Rn */
	r11 = 0xC0509B0u; UPD(0x0C05DC74u, 2);  /* 0C05DC72 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05DC74 mov Rm,Rn */
	IF(0x0C05DC76u); { u32 t_ = r11; PR = 0x0C05DC7Au; r6 = 0x11u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05DC7Au); }  /* 0C05DC76 jsr @Rn */
L_0C05DC7A: BLKS(0x0C05DC7Au);
	r2 = 0xC3929C8u; UPD(0x0C05DC7Cu, 1);  /* 0C05DC7A mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05DC7C mov Rm,Rn */
	r0 = r2;  /* 0C05DC7E mov Rm,Rn */
	IF(0x0C05DC80u); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05DC82u, 3);  /* 0C05DC80 mov.b @(r0,Rm),Rn */
	r6 = 0x16u;  /* 0C05DC82 mov #imm,Rn */
	IF(0x0C05DC84u); { u32 t_ = r13; PR = 0x0C05DC88u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05DC88u); }  /* 0C05DC84 jsr @Rn */
L_0C05DC88: BLKS(0x0C05DC88u);
	r7 = 0xC3929E4u; UPD(0x0C05DC8Au, 1);  /* 0C05DC88 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05DC8A mov Rm,Rn */
	r0 = r7;  /* 0C05DC8C mov Rm,Rn */
	IF(0x0C05DC8Eu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05DC90u, 3);  /* 0C05DC8E mov.b @(r0,Rm),Rn */
	r6 = 0x19u;  /* 0C05DC90 mov #imm,Rn */
	IF(0x0C05DC92u); { u32 t_ = r13; PR = 0x0C05DC96u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05DC96u); }  /* 0C05DC92 jsr @Rn */
L_0C05DC96: BLKS(0x0C05DC96u);
	r4 = 0xC283544u; UPD(0x0C05DC98u, 1);  /* 0C05DC96 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05DC98 mov Rm,Rn */
	r0 = r4;  /* 0C05DC9A mov Rm,Rn */
	IF(0x0C05DC9Cu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05DC9Eu, 3);  /* 0C05DC9C mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C05DC9E add #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C05DCA0 extu.b Rm,Rn */
	IF(0x0C05DCA2u); { u32 t_ = r13; PR = 0x0C05DCA6u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05DCA6u); }  /* 0C05DCA2 jsr @Rn */
L_0C05DCA6: BLKS(0x0C05DCA6u);
	r0 = 0x7u;  /* 0C05DCA6 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C05DCA8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05DC34u, 5); goto L_0C05DC34; }  /* 0C05DCAA bf */
L_0C05DCAC: BLKS(0x0C05DCACu);
	r14 += 0x24u;  /* 0C05DCAC add #imm,Rn */
	r13 = 0xFFFFE222u; UPD(0x0C05DCB0u, 2);  /* 0C05DCAE mov.w @(disp,pc),Rn */
	IF(0x0C05DCB0u); { u32 tv_ = (r13 + 0x0C05DCB4u); u32 t_ = PHYS(tv_); IF(0x0C05DCB2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05BED6u: goto L_0C05BED6; default: JUMPD(tv_); } }  /* 0C05DCB0 braf Rn */
L_0C05DD80: BLKS(0x0C05DD80u);
	r2 = 0xFFFFDC26u; UPD(0x0C05DD82u, 1);  /* 0C05DD80 mov.w @(disp,pc),Rn */
	IF(0x0C05DD82u); { u32 tv_ = (r2 + 0x0C05DD86u); u32 t_ = PHYS(tv_); IF(0x0C05DD84u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05B9ACu: goto L_0C05B9AC; default: JUMPD(tv_); } }  /* 0C05DD82 braf Rn */
L_0C05DD90: BLKS(0x0C05DD90u);
	r4 = 0xC05B800u; UPD(0x0C05DD92u, 1);  /* 0C05DD90 mov.l @(disp,pc),Rn */
	IF(0x0C05DD92u); { u32 t_ = r4; PR = 0x0C05DD96u; IF(0x0C05DD94u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B800, 0x0C05B800u, 0x0C05DD96u); }  /* 0C05DD92 jsr @Rn */
L_0C05DD96: BLKS(0x0C05DD96u);
	r2 = 0xFFFFDBD4u; UPD(0x0C05DD98u, 1);  /* 0C05DD96 mov.w @(disp,pc),Rn */
	IF(0x0C05DD98u); { u32 tv_ = (r2 + 0x0C05DD9Cu); u32 t_ = PHYS(tv_); r7 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05B970u: goto L_0C05B970; default: JUMPD(tv_); } }  /* 0C05DD98 braf Rn */
L_0C05DDA0: BLKS(0x0C05DDA0u);
	r13 = 0xC050CD0u; UPD(0x0C05DDA2u, 1);  /* 0C05DDA0 mov.l @(disp,pc),Rn */
	r9 = 0xC0C04000u; UPD(0x0C05DDA4u, 1);  /* 0C05DDA2 mov.l @(disp,pc),Rn */
	r4 = 0xC161BE0u; UPD(0x0C05DDA6u, 1);  /* 0C05DDA4 mov.l @(disp,pc),Rn */
	IF(0x0C05DDA6u); { u32 t_ = r13; PR = 0x0C05DDAAu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DDAAu); }  /* 0C05DDA6 jsr @Rn */
L_0C05DDAA: BLKS(0x0C05DDAAu);
	r8 = 0xC0508F0u; UPD(0x0C05DDACu, 1);  /* 0C05DDAA mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05DDAC mov #imm,Rn */
	r3 = 0xC27DFF8u; UPD(0x0C05DDB0u, 2);  /* 0C05DDAE mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C05DDB0 mov #imm,Rn */
	IF(0x0C05DDB2u); { u32 t_ = r8; PR = 0x0C05DDB6u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C05DDB6u); }  /* 0C05DDB2 jsr @Rn */
L_0C05DDB6: BLKS(0x0C05DDB6u);
	r2 = 0xC050A80u; UPD(0x0C05DDB8u, 1);  /* 0C05DDB6 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05DDB8 mov #imm,Rn */
	r12 = 0xC393068u; UPD(0x0C05DDBCu, 2);  /* 0C05DDBA mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C05DDBC mov #imm,Rn */
	IF(0x0C05DDBEu); { u32 t_ = r2; PR = 0x0C05DDC2u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05DDC2u); }  /* 0C05DDBE jsr @Rn */
L_0C05DDC2: BLKS(0x0C05DDC2u);
	r4 = 0xC161BE4u; UPD(0x0C05DDC4u, 1);  /* 0C05DDC2 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05DDC4 mov #imm,Rn */
	r6 = 0xDu;  /* 0C05DDC6 mov #imm,Rn */
	IF(0x0C05DDC8u); { u32 t_ = r13; PR = 0x0C05DDCCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05DDCCu); }  /* 0C05DDC8 jsr @Rn */
L_0C05DDCC: BLKS(0x0C05DDCCu);
	r8 = 0xFFFFDB8Eu; UPD(0x0C05DDCEu, 1);  /* 0C05DDCC mov.w @(disp,pc),Rn */
	IF(0x0C05DDCEu); { u32 tv_ = (r8 + 0x0C05DDD2u); u32 t_ = PHYS(tv_); IF(0x0C05DDD0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05B960u: goto L_0C05B960; default: JUMPD(tv_); } }  /* 0C05DDCE braf Rn */
}

/* FUN_0c05de00 */
void f_0C05DE00(sh3_t *c)
{
	LOCALS;
L_0C05DE00: BLKS(0x0C05DE00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05DE02u, 1);  /* 0C05DE00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05DE04u, 1);  /* 0C05DE02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05DE06u, 1);  /* 0C05DE04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05DE08u, 1);  /* 0C05DE06 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05DE0Au, 1);  /* 0C05DE08 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C05DE0A mov #imm,Rn */
	IF(0x0C05DE0Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05DE0Eu, 2);  /* 0C05DE0C sts.l pr,@-Rn */
	r14 = r15;  /* 0C05DE0E mov Rm,Rn */
	UPD(0x0C05DE10u, 1);
L_0C05DE10: BLKS(0x0C05DE10u);
	r4 = 0xC2852E4u; UPD(0x0C05DE12u, 1);  /* 0C05DE10 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C05DE12 mov Rm,Rn */
	r3 = 0xC27DC48u; UPD(0x0C05DE16u, 2);  /* 0C05DE14 mov.l @(disp,pc),Rn */
	IF(0x0C05DE16u); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05DE18u, 1);  /* 0C05DE16 mov.b @(r0,Rm),Rn */
	r2 = 0x280u; UPD(0x0C05DE1Au, 1);  /* 0C05DE18 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C05DE1A mov Rm,Rn */
	IF(0x0C05DE1Cu); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05DE1Eu, 2);  /* 0C05DE1C mov.b @(r0,Rm),Rn */
	IF(0x0C05DE1Eu); MACL = r11 * r2;  /* 0C05DE1E mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05DE22u, 3);  /* 0C05DE20 mov.l @(disp,pc),Rn */
	IF(0x0C05DE22u); r3 = MACL;  /* 0C05DE22 sts macl,Rn */
	r3 += r0;  /* 0C05DE24 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C05DE28u, 3);  /* 0C05DE26 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05DE28 tst Rm,Rn */
	{ u32 c_ = T; r8 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05DE32u, 4); goto L_0C05DE32; } goto L_0C05DE2E; }  /* 0C05DE2A bt/s */
L_0C05DE2E: BLKS(0x0C05DE2Eu);
	{ IF(0x0C05DE30u); r8 <<= 2; /* slot shll2 Rn */ UPD(0x0C05E0F0u, 4); goto L_0C05E0F0; }  /* 0C05DE2E bra */
L_0C05DE32: BLKS(0x0C05DE32u);
	r0 = 0x26Bu; UPD(0x0C05DE34u, 1);  /* 0C05DE32 mov.w @(disp,pc),Rn */
	r2 = 0xC395086u; UPD(0x0C05DE36u, 1);  /* 0C05DE34 mov.l @(disp,pc),Rn */
	IF(0x0C05DE36u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05DE38u, 1);  /* 0C05DE36 mov.b @(r0,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C05DE3Au, 1);  /* 0C05DE38 mov.b @Rm,Rn */
	r10 = r8 & 0xFF;  /* 0C05DE3A extu.b Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C05DE3C extu.b Rm,Rn */
	T = r10 > r6;  /* 0C05DE3E cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFE2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05DE76u, 6); goto L_0C05DE76; } goto L_0C05DE44; }  /* 0C05DE40 bt/s */
L_0C05DE44: BLKS(0x0C05DE44u);
	IF(0x0C05DE44u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05DE46u, 2);  /* 0C05DE44 mov.b @(r0,Rm),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C05DE46 mov #imm,Rn */
	r3 = 0xC26C878u; UPD(0x0C05DE4Au, 2);  /* 0C05DE48 mov.l @(disp,pc),Rn */
	IF(0x0C05DE4Au); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05DE4A rotl Rn */
	r0 = r3;  /* 0C05DE4C mov Rm,Rn */
	IF(0x0C05DE4Eu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05DE50u, 3);  /* 0C05DE4E mov.b @(r0,Rm),Rn */
	IF(0x0C05DE50u); r5 = T;  /* 0C05DE50 movt Rn */
	r8 = 0xC393028u; UPD(0x0C05DE54u, 2);  /* 0C05DE52 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C05DE54 tst Rm,Rn */
	r0 = r8;  /* 0C05DE56 mov Rm,Rn */
	IF(0x0C05DE58u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05DE5Au, 3);  /* 0C05DE58 mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C05DE5A negc Rm,Rn */
	r3 = 0xC283750u; UPD(0x0C05DE5Eu, 2);  /* 0C05DE5C mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C05DE5E tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05DE62u, 2);  /* 0C05DE60 mov.b @Rm,Rn */
	IF(0x0C05DE62u); r10 = T;  /* 0C05DE62 movt Rn */
	T = (r0 & r0) == 0;  /* 0C05DE64 tst Rm,Rn */
	r6 |= r10;  /* 0C05DE66 or Rm,Rn */
	IF(0x0C05DE68u); r7 = T;  /* 0C05DE68 movt Rn */
	r5 &= r6;  /* 0C05DE6A and Rm,Rn */
	r5 &= r7;  /* 0C05DE6C and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05DE6E tst Rm,Rn */
	if (T) { UPD(0x0C05DE76u, 10); goto L_0C05DE76; }  /* 0C05DE70 bt */
L_0C05DE72: BLKS(0x0C05DE72u);
	{ IF(0x0C05DE74u); ; /* slot nop */ UPD(0x0C05E0C0u, 3); goto L_0C05E0C0; }  /* 0C05DE72 bra */
L_0C05DE76: BLKS(0x0C05DE76u);
	r5 = 0x280u; UPD(0x0C05DE78u, 1);  /* 0C05DE76 mov.w @(disp,pc),Rn */
	IF(0x0C05DE78u); MACL = r11 * r5;  /* 0C05DE78 mul.l Rm,Rn */
	r2 = 0xC21CA15u; UPD(0x0C05DE7Cu, 3);  /* 0C05DE7A mov.l @(disp,pc),Rn */
	r3 = 0xC283794u; UPD(0x0C05DE7Eu, 1);  /* 0C05DE7C mov.l @(disp,pc),Rn */
	IF(0x0C05DE7Eu); r0 = MACL;  /* 0C05DE7E sts macl,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C05DE82u, 2);  /* 0C05DE80 mov.b @Rm,Rn */
	IF(0x0C05DE82u); r4 = R32(r0 + r3); UPD(0x0C05DE84u, 1);  /* 0C05DE82 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C05DE84 tst Rm,Rn */
	{ u32 c_ = T; r2 = r7 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C05DE90u, 4); goto L_0C05DE90; } goto L_0C05DE8A; }  /* 0C05DE86 bt/s */
L_0C05DE8A: BLKS(0x0C05DE8Au);
	T = (r2 & r2) == 0;  /* 0C05DE8A tst Rm,Rn */
	{ u32 c_ = T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05DF1Eu, 5); goto L_0C05DF1E; } UPD(0x0C05DE90u, 1); goto L_0C05DE90; }  /* 0C05DE8C bt/s */
L_0C05DE90: BLKS(0x0C05DE90u);
	r0 = 0x280u; UPD(0x0C05DE92u, 1);  /* 0C05DE90 mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C05DE92 mov #imm,Rn */
	IF(0x0C05DE94u); MACL = r11 * r0;  /* 0C05DE94 mul.l Rm,Rn */
	r10 = 0xC283750u; UPD(0x0C05DE98u, 4);  /* 0C05DE96 mov.l @(disp,pc),Rn */
	r6 = 0xC283794u; UPD(0x0C05DE9Au, 1);  /* 0C05DE98 mov.l @(disp,pc),Rn */
	IF(0x0C05DE9Au); r2 = MACL;  /* 0C05DE9A sts macl,Rn */
	r0 = 0x26Bu; UPD(0x0C05DE9Eu, 2);  /* 0C05DE9C mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C05DE9E add Rm,Rn */
	r7 = 0xC395086u; UPD(0x0C05DEA2u, 2);  /* 0C05DEA0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C05DEA4u, 1);  /* 0C05DEA2 mov.b @Rm,Rn */
	IF(0x0C05DEA4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05DEA6u, 1);  /* 0C05DEA4 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05DEA6 tst Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C05DEAAu, 2);  /* 0C05DEA8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C05DEAA negc Rm,Rn */
	r8 = r5 & 0xFF;  /* 0C05DEAC extu.b Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C05DEAE extu.b Rm,Rn */
	T = r8 > r6;  /* 0C05DEB0 cmp/hi Rm,Rn */
	IF(0x0C05DEB2u); r0 = T;  /* 0C05DEB2 movt Rn */
	r10 |= r0;  /* 0C05DEB4 or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C05DEB6 tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05DEC0u, 10); goto L_0C05DEC0; } goto L_0C05DEBC; }  /* 0C05DEB8 bt/s */
L_0C05DEBC: BLKS(0x0C05DEBCu);
	{ r5 = 0x26u; /* slot mov #imm,Rn */ UPD(0x0C05E0A0u, 4); goto L_0C05E0A0; }  /* 0C05DEBC bra */
L_0C05DEC0: BLKS(0x0C05DEC0u);
	r4 = 0xC286298u; UPD(0x0C05DEC2u, 1);  /* 0C05DEC0 mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C05DEC4u, 1);  /* 0C05DEC2 mov.l @Rm,Rn */
	IF(0x0C05DEC4u); r2 >>= 2;  /* 0C05DEC4 shlr2 Rn */
	IF(0x0C05DEC6u); r2 >>= 2;  /* 0C05DEC6 shlr2 Rn */
	IF(0x0C05DEC8u); r2 >>= 2;  /* 0C05DEC8 shlr2 Rn */
	r2 &= r8;  /* 0C05DECA and Rm,Rn */
	T = r2 > r8;  /* 0C05DECC cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05DF1Eu, 8); goto L_0C05DF1E; } goto L_0C05DED2; }  /* 0C05DECE bt/s */
L_0C05DED2: BLKS(0x0C05DED2u);
	r0 = 0xC05DF04u;  /* 0C05DED2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C05DED4 add Rm,Rn */
	IF(0x0C05DED6u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05DED8u, 4);  /* 0C05DED6 mov.w @(r0,Rm),Rn */
	IF(0x0C05DED8u); { u32 tv_ = (r5 + 0x0C05DEDCu); u32 t_ = PHYS(tv_); IF(0x0C05DEDAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05DF10u: goto L_0C05DF10; case 0x0C05E050u: goto L_0C05E050; case 0x0C05E070u: goto L_0C05E070; case 0x0C05E080u: goto L_0C05E080; default: JUMPD(tv_); } }  /* 0C05DED8 braf Rn */
L_0C05DF10: BLKS(0x0C05DF10u);
	r9 = 0xC392DC2u; UPD(0x0C05DF12u, 1);  /* 0C05DF10 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C05DF14u, 1);  /* 0C05DF12 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C05DF14 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C05DF1Cu, 4); goto L_0C05DF1C; }  /* 0C05DF16 bf */
L_0C05DF18: BLKS(0x0C05DF18u);
	{ IF(0x0C05DF1Au); ; /* slot nop */ UPD(0x0C05E050u, 3); goto L_0C05E050; }  /* 0C05DF18 bra */
L_0C05DF1C: BLKS(0x0C05DF1Cu);
	r0 = r11;  /* 0C05DF1C mov Rm,Rn */
	UPD(0x0C05DF1Eu, 1);
L_0C05DF1E: BLKS(0x0C05DF1Eu);
	r0 += 0x1u;  /* 0C05DF1E add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C05DF20 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C05DF22 mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C05DF24 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C05DF2Cu, 7); goto L_0C05DF2C; }  /* 0C05DF26 bt */
L_0C05DF28: BLKS(0x0C05DF28u);
	{ IF(0x0C05DF2Au); ; /* slot nop */ UPD(0x0C05DE10u, 3); goto L_0C05DE10; }  /* 0C05DF28 bra */
L_0C05DF2C: BLKS(0x0C05DF2Cu);
	r9 = 0xC286748u; UPD(0x0C05DF2Eu, 1);  /* 0C05DF2C mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C05DF30u, 1);  /* 0C05DF2E mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05DF30 tst Rm,Rn */
	if (T) { UPD(0x0C05DF80u, 4); goto L_0C05DF80; }  /* 0C05DF32 bt */
L_0C05DF34: BLKS(0x0C05DF34u);
	r2 += 0xFFFFFFFFu;  /* 0C05DF34 add #imm,Rn */
	W32(r9, r2); UPD(0x0C05DF38u, 2);  /* 0C05DF36 mov.l Rm,@Rn */
L_0C05DF38: BLKS(0x0C05DF38u);
	r2 = 0xC220C44u; UPD(0x0C05DF3Au, 1);  /* 0C05DF38 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C05DF3Cu, 1);  /* 0C05DF3A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05DF3C tst Rm,Rn */
	if (T) { UPD(0x0C05DF4Au, 4); goto L_0C05DF4A; }  /* 0C05DF3E bt */
L_0C05DF40: BLKS(0x0C05DF40u);
	r1 += 0xFFFFFFFFu;  /* 0C05DF40 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C05DF42 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05DF44 tst Rm,Rn */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05DF60u, 6); goto L_0C05DF60; } UPD(0x0C05DF4Au, 1); goto L_0C05DF4A; }  /* 0C05DF46 bt/s */
L_0C05DF4A: BLKS(0x0C05DF4Au);
	r15 = r14;  /* 0C05DF4A mov Rm,Rn */
	IF(0x0C05DF4Cu); PR = R32(r15); r15 += 4; UPD(0x0C05DF4Eu, 2);  /* 0C05DF4C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05DF50u, 1);  /* 0C05DF4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05DF52u, 1);  /* 0C05DF50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05DF54u, 1);  /* 0C05DF52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05DF56u, 1);  /* 0C05DF54 mov.l @Rm+,Rn */
	IF(0x0C05DF56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05DF56 rts */
L_0C05DF60: BLKS(0x0C05DF60u);
	r2 = 0xC0AFDB0u; UPD(0x0C05DF62u, 1);  /* 0C05DF60 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05DF62 mov #imm,Rn */
	r5 = 0x4u;  /* 0C05DF64 mov #imm,Rn */
	r6 = 0x1u;  /* 0C05DF66 mov #imm,Rn */
	r15 = r14;  /* 0C05DF68 mov Rm,Rn */
	IF(0x0C05DF6Au); PR = R32(r15); r15 += 4; UPD(0x0C05DF6Cu, 5);  /* 0C05DF6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05DF6Eu, 1);  /* 0C05DF6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05DF70u, 1);  /* 0C05DF6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05DF72u, 1);  /* 0C05DF70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05DF74u, 1);  /* 0C05DF72 mov.l @Rm+,Rn */
	IF(0x0C05DF74u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFDB0u: TAIL(f_0C0AFDB0); default: JUMPD(tv_); } }  /* 0C05DF74 jmp @Rn */
L_0C05DF80: BLKS(0x0C05DF80u);
	r10 = 0xC392E0Cu; UPD(0x0C05DF82u, 1);  /* 0C05DF80 mov.l @(disp,pc),Rn */
	r3 = R32(r10); UPD(0x0C05DF84u, 1);  /* 0C05DF82 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05DF84 tst Rm,Rn */
	if (T) { UPD(0x0C05E020u, 4); goto L_0C05E020; }  /* 0C05DF86 bt */
L_0C05DF88: BLKS(0x0C05DF88u);
	r7 = 0xC21F589u; UPD(0x0C05DF8Au, 1);  /* 0C05DF88 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C05DF8Cu, 1);  /* 0C05DF8A mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C05DF8C tst Rm,Rn */
	if (T) { UPD(0x0C05DF98u, 4); goto L_0C05DF98; }  /* 0C05DF8E bt */
L_0C05DF90: BLKS(0x0C05DF90u);
	W8(r7, r2); UPD(0x0C05DF92u, 1);  /* 0C05DF90 mov.b Rm,@Rn */
	r4 = 0x4B0u; UPD(0x0C05DF94u, 1);  /* 0C05DF92 mov.w @(disp,pc),Rn */
	r3 = r4;  /* 0C05DF94 mov Rm,Rn */
	W32(r10, r4); UPD(0x0C05DF98u, 2);  /* 0C05DF96 mov.l Rm,@Rn */
L_0C05DF98: BLKS(0x0C05DF98u);
	r2 = r3;  /* 0C05DF98 mov Rm,Rn */
	IF(0x0C05DF9Au); r2 -= 1; T = r2 == 0;  /* 0C05DF9A dt Rn */
	{ u32 c_ = T; W32(r10, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05DFD0u, 5); goto L_0C05DFD0; } UPD(0x0C05DFA0u, 1); goto L_0C05DFA0; }  /* 0C05DF9C bt/s */
L_0C05DFA0: BLKS(0x0C05DFA0u);
	r5 = 0xC27DEF4u; UPD(0x0C05DFA2u, 1);  /* 0C05DFA0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C05DFA4u, 1);  /* 0C05DFA2 mov.b @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C05DFA6u, 1);  /* 0C05DFA4 mov.w @(disp,pc),Rn */
	IF(0x0C05DFA6u); r0 >>= 2;  /* 0C05DFA6 shlr2 Rn */
	T = (s32)r2 > (s32)r9;  /* 0C05DFA8 cmp/gt Rm,Rn */
	IF(0x0C05DFAAu); r0 >>= 2;  /* 0C05DFAA shlr2 Rn */
	IF(0x0C05DFACu); r8 = T;  /* 0C05DFAC movt Rn */
	r0 &= 0x1u;  /* 0C05DFAE and #imm,r0 */
	r0 &= r8;  /* 0C05DFB0 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05DFB2 tst Rm,Rn */
	if (T) { UPD(0x0C05DFBAu, 10); goto L_0C05DFBA; }  /* 0C05DFB4 bt */
L_0C05DFB6: BLKS(0x0C05DFB6u);
	r3 += 0xFFFFFFC3u;  /* 0C05DFB6 add #imm,Rn */
	W32(r10, r3); UPD(0x0C05DFBAu, 2);  /* 0C05DFB8 mov.l Rm,@Rn */
L_0C05DFBA: BLKS(0x0C05DFBAu);
	r7 = 0xC060570u; UPD(0x0C05DFBCu, 1);  /* 0C05DFBA mov.l @(disp,pc),Rn */
	r4 = 0x14u;  /* 0C05DFBC mov #imm,Rn */
	IF(0x0C05DFBEu); { u32 t_ = r7; PR = 0x0C05DFC2u; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C060570, 0x0C060570u, 0x0C05DFC2u); }  /* 0C05DFBE jsr @Rn */
L_0C05DFC2: BLKS(0x0C05DFC2u);
	r4 = R32(r10); UPD(0x0C05DFC4u, 1);  /* 0C05DFC2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C05DFC4 mov #imm,Rn */
	r10 = 0xC060370u; UPD(0x0C05DFC8u, 2);  /* 0C05DFC6 mov.l @(disp,pc),Rn */
	IF(0x0C05DFC8u); { u32 t_ = r10; PR = 0x0C05DFCCu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060370, 0x0C060370u, 0x0C05DFCCu); }  /* 0C05DFC8 jsr @Rn */
L_0C05DFCC: BLKS(0x0C05DFCCu);
	{ IF(0x0C05DFCEu); ; /* slot nop */ UPD(0x0C05DF38u, 3); goto L_0C05DF38; }  /* 0C05DFCC bra */
L_0C05DFD0: BLKS(0x0C05DFD0u);
	r6 = 0xC0604F0u; UPD(0x0C05DFD2u, 1);  /* 0C05DFD0 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C05DFD2 mov #imm,Rn */
	IF(0x0C05DFD4u); { u32 t_ = r6; PR = 0x0C05DFD8u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0604F0, 0x0C0604F0u, 0x0C05DFD8u); }  /* 0C05DFD4 jsr @Rn */
L_0C05DFD8: BLKS(0x0C05DFD8u);
	r15 += 0xFFFFFFFCu;  /* 0C05DFD8 add #imm,Rn */
	r4 = 0x1Cu;  /* 0C05DFDA mov #imm,Rn */
	r11 = 0xC050B50u; UPD(0x0C05DFDEu, 3);  /* 0C05DFDC mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C05DFDE mov #imm,Rn */
	W32(r15, r4); UPD(0x0C05DFE2u, 2);  /* 0C05DFE0 mov.l Rm,@Rn */
	r6 = 0x1u;  /* 0C05DFE2 mov #imm,Rn */
	r4 = 0xC161E94u; UPD(0x0C05DFE6u, 2);  /* 0C05DFE4 mov.l @(disp,pc),Rn */
	IF(0x0C05DFE6u); { u32 t_ = r11; PR = 0x0C05DFEAu; r7 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050B50, 0x0C050B50u, 0x0C05DFEAu); }  /* 0C05DFE6 jsr @Rn */
L_0C05DFEA: BLKS(0x0C05DFEAu);
	r7 = 0x1E0u; UPD(0x0C05DFECu, 1);  /* 0C05DFEA mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C05DFEC add #imm,Rn */
	W32(r9, r7); UPD(0x0C05DFF0u, 2);  /* 0C05DFEE mov.l Rm,@Rn */
	r10 = 0xC283750u; UPD(0x0C05DFF2u, 1);  /* 0C05DFF0 mov.l @(disp,pc),Rn */
	r9 = 0xC0AFC10u; UPD(0x0C05DFF4u, 1);  /* 0C05DFF2 mov.l @(disp,pc),Rn */
	r4 = 0x81u; UPD(0x0C05DFF6u, 1);  /* 0C05DFF4 mov.w @(disp,pc),Rn */
	IF(0x0C05DFF6u); { u32 t_ = r9; PR = 0x0C05DFFAu; W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C05DFFAu); }  /* 0C05DFF6 jsr @Rn */
L_0C05DFFA: BLKS(0x0C05DFFAu);
	r8 = 0xC392D50u; UPD(0x0C05DFFCu, 1);  /* 0C05DFFA mov.l @(disp,pc),Rn */
	r4 = 0xC0u; UPD(0x0C05DFFEu, 1);  /* 0C05DFFC mov.w @(disp,pc),Rn */
	IF(0x0C05DFFEu); { u32 t_ = r9; PR = 0x0C05E002u; IF(0x0C05E000u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C05E002u); }  /* 0C05DFFE jsr @Rn */
L_0C05E002: BLKS(0x0C05E002u);
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C05E004u, 1);  /* 0C05E002 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05E004 tst Rm,Rn */
	if (T) { UPD(0x0C05DF38u, 4); goto L_0C05DF38; }  /* 0C05E006 bt */
L_0C05E008: BLKS(0x0C05E008u);
	r8 = 0xC0AFCA0u; UPD(0x0C05E00Au, 1);  /* 0C05E008 mov.l @(disp,pc),Rn */
	IF(0x0C05E00Au); { u32 t_ = r8; PR = 0x0C05E00Eu; r4 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C05E00Eu); }  /* 0C05E00A jsr @Rn */
L_0C05E00E: BLKS(0x0C05E00Eu);
	{ IF(0x0C05E010u); ; /* slot nop */ UPD(0x0C05DF38u, 3); goto L_0C05DF38; }  /* 0C05E00E bra */
L_0C05E020: BLKS(0x0C05E020u);
	r7 = 0xC283794u; UPD(0x0C05E022u, 1);  /* 0C05E020 mov.l @(disp,pc),Rn */
	r0 = 0xC283A10u; UPD(0x0C05E024u, 1);  /* 0C05E022 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C05E026u, 1);  /* 0C05E024 mov.l @Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C05E028u, 1);  /* 0C05E026 mov.l @(disp,Rm),Rn */
	r3 |= r2;  /* 0C05E028 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05E02A tst Rm,Rn */
	if (!T) { UPD(0x0C05E00Eu, 5); goto L_0C05E00E; }  /* 0C05E02C bf */
L_0C05E02E: BLKS(0x0C05E02Eu);
	r2 = 0xC21CA26u; UPD(0x0C05E030u, 1);  /* 0C05E02E mov.l @(disp,pc),Rn */
	r0 = 0x280u; UPD(0x0C05E032u, 1);  /* 0C05E030 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r2); UPD(0x0C05E034u, 1);  /* 0C05E032 mov.w @Rm,Rn */
	IF(0x0C05E034u); MACL = r11 * r0;  /* 0C05E034 mul.l Rm,Rn */
	r5 = 0xC395086u; UPD(0x0C05E038u, 3);  /* 0C05E036 mov.l @(disp,pc),Rn */
	IF(0x0C05E038u); r6 = MACL;  /* 0C05E038 sts macl,Rn */
	r0 = 0x26Bu; UPD(0x0C05E03Cu, 2);  /* 0C05E03A mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C05E03C add Rm,Rn */
	IF(0x0C05E03Eu); r11 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05E040u, 2);  /* 0C05E03E mov.b @(r0,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05E042u, 1);  /* 0C05E040 mov.b @Rm,Rn */
	T = r4 >= r11;  /* 0C05E042 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C05DFD8u, 4); goto L_0C05DFD8; }  /* 0C05E044 bf */
L_0C05E046: BLKS(0x0C05E046u);
	r6 = 0x4B0u; UPD(0x0C05E048u, 1);  /* 0C05E046 mov.w @(disp,pc),Rn */
	r5 = 0xC21F589u; UPD(0x0C05E04Au, 1);  /* 0C05E048 mov.l @(disp,pc),Rn */
	W32(r10, r6); UPD(0x0C05E04Cu, 1);  /* 0C05E04A mov.l Rm,@Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C05DF38u, 3); goto L_0C05DF38; }  /* 0C05E04C bra */
L_0C05E050: BLKS(0x0C05E050u);
	r7 = 0xC161E90u; UPD(0x0C05E052u, 1);  /* 0C05E050 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)r11;  /* 0C05E052 exts.b Rm,Rn */
	r0 = r7;  /* 0C05E054 mov Rm,Rn */
	IF(0x0C05E056u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05E058u, 3);  /* 0C05E056 mov.b @(r0,Rm),Rn */
	r5 = 0x26u;  /* 0C05E058 mov #imm,Rn */
	r1 = 0xC0601B0u; UPD(0x0C05E05Cu, 2);  /* 0C05E05A mov.l @(disp,pc),Rn */
L_0C05E05C: BLKS(0x0C05E05Cu);
	IF(0x0C05E05Cu); { u32 t_ = r1; PR = 0x0C05E060u; IF(0x0C05E05Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C05E060u); }  /* 0C05E05C jsr @Rn */
L_0C05E060: BLKS(0x0C05E060u);
	{ r0 = r11; /* slot mov Rm,Rn */ UPD(0x0C05DF1Eu, 3); goto L_0C05DF1E; }  /* 0C05E060 bra */
L_0C05E070: BLKS(0x0C05E070u);
	r2 = 0xC161E90u; UPD(0x0C05E072u, 1);  /* 0C05E070 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C05E072 mov Rm,Rn */
	r0 = r2;  /* 0C05E074 mov Rm,Rn */
	IF(0x0C05E076u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05E078u, 3);  /* 0C05E076 mov.b @(r0,Rm),Rn */
	r1 = 0xC05FE80u; UPD(0x0C05E07Au, 1);  /* 0C05E078 mov.l @(disp,pc),Rn */
	{ r5 = 0x26u; /* slot mov #imm,Rn */ UPD(0x0C05E05Cu, 3); goto L_0C05E05C; }  /* 0C05E07A bra */
L_0C05E080: BLKS(0x0C05E080u);
	r6 = 0xC392DC2u; UPD(0x0C05E082u, 1);  /* 0C05E080 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05E084u, 1);  /* 0C05E082 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C05E084 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C05E070u, 4); goto L_0C05E070; }  /* 0C05E086 bt */
L_0C05E088: BLKS(0x0C05E088u);
	r4 = (u32)(s32)(s8)r11;  /* 0C05E088 exts.b Rm,Rn */
	r3 = 0xC161E90u; UPD(0x0C05E08Cu, 2);  /* 0C05E08A mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C05E08C mov Rm,Rn */
	r1 = 0xC0600A0u; UPD(0x0C05E090u, 2);  /* 0C05E08E mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C05E090 mov #imm,Rn */
	{ IF(0x0C05E094u); r6 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C05E05Cu, 4); goto L_0C05E05C; }  /* 0C05E092 bra */
L_0C05E0A0: BLKS(0x0C05E0A0u);
	r8 = 0xC161E90u; UPD(0x0C05E0A2u, 1);  /* 0C05E0A0 mov.l @(disp,pc),Rn */
	r10 = 0xC050CD0u; UPD(0x0C05E0A4u, 1);  /* 0C05E0A2 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05E0A4 mov Rm,Rn */
	r9 = 0x80808000u; UPD(0x0C05E0A8u, 2);  /* 0C05E0A6 mov.l @(disp,pc),Rn */
	IF(0x0C05E0A8u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05E0AAu, 1);  /* 0C05E0A8 mov.b @(r0,Rm),Rn */
	r4 = 0xC161A58u; UPD(0x0C05E0ACu, 1);  /* 0C05E0AA mov.l @(disp,pc),Rn */
	IF(0x0C05E0ACu); { u32 t_ = r10; PR = 0x0C05E0B0u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05E0B0u); }  /* 0C05E0AC jsr @Rn */
L_0C05E0B0: BLKS(0x0C05E0B0u);
	r0 = r8;  /* 0C05E0B0 mov Rm,Rn */
	IF(0x0C05E0B2u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05E0B4u, 2);  /* 0C05E0B2 mov.b @(r0,Rm),Rn */
	r5 = 0x25u;  /* 0C05E0B4 mov #imm,Rn */
	r4 = 0xC161A70u; UPD(0x0C05E0B8u, 2);  /* 0C05E0B6 mov.l @(disp,pc),Rn */
	IF(0x0C05E0B8u); { u32 t_ = r10; PR = 0x0C05E0BCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05E0BCu); }  /* 0C05E0B8 jsr @Rn */
L_0C05E0BC: BLKS(0x0C05E0BCu);
	{ r0 = r11; /* slot mov Rm,Rn */ UPD(0x0C05DF1Eu, 3); goto L_0C05DF1E; }  /* 0C05E0BC bra */
L_0C05E0C0: BLKS(0x0C05E0C0u);
	r8 = 0xC05AFF0u; UPD(0x0C05E0C2u, 1);  /* 0C05E0C0 mov.l @(disp,pc),Rn */
	r10 = 0xC050AC0u; UPD(0x0C05E0C4u, 1);  /* 0C05E0C2 mov.l @(disp,pc),Rn */
	IF(0x0C05E0C4u); { u32 t_ = r8; PR = 0x0C05E0C8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05AFF0, 0x0C05AFF0u, 0x0C05E0C8u); }  /* 0C05E0C4 jsr @Rn */
L_0C05E0C8: BLKS(0x0C05E0C8u);
	r6 = 0xC161E90u; UPD(0x0C05E0CAu, 1);  /* 0C05E0C8 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C05E0CA mov #imm,Rn */
	r0 = r6;  /* 0C05E0CC mov Rm,Rn */
	r4 = 0xC1619D8u; UPD(0x0C05E0D0u, 3);  /* 0C05E0CE mov.l @(disp,pc),Rn */
	IF(0x0C05E0D0u); { u32 t_ = r10; PR = 0x0C05E0D4u; IF(0x0C05E0D2u); r6 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05E0D4u); }  /* 0C05E0D0 jsr @Rn */
L_0C05E0D4: BLKS(0x0C05E0D4u);
	r0 = 0xC0605A0u; UPD(0x0C05E0D6u, 1);  /* 0C05E0D4 mov.l @(disp,pc),Rn */
	r4 = 0x14u;  /* 0C05E0D6 mov #imm,Rn */
	IF(0x0C05E0D8u); { u32 t_ = r0; PR = 0x0C05E0DCu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0605A0, 0x0C0605A0u, 0x0C05E0DCu); }  /* 0C05E0D8 jsr @Rn */
L_0C05E0DC: BLKS(0x0C05E0DCu);
	r7 = 0xC0604F0u; UPD(0x0C05E0DEu, 1);  /* 0C05E0DC mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C05E0DE mov #imm,Rn */
	IF(0x0C05E0E0u); { u32 t_ = r7; PR = 0x0C05E0E4u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0604F0, 0x0C0604F0u, 0x0C05E0E4u); }  /* 0C05E0E0 jsr @Rn */
L_0C05E0E4: BLKS(0x0C05E0E4u);
	{ IF(0x0C05E0E6u); ; /* slot nop */ UPD(0x0C05DE76u, 3); goto L_0C05DE76; }  /* 0C05E0E4 bra */
L_0C05E0F0: BLKS(0x0C05E0F0u);
	r4 = 0xC161A97u; UPD(0x0C05E0F2u, 1);  /* 0C05E0F0 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05E0F2 mov Rm,Rn */
	IF(0x0C05E0F4u); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05E0F6u, 2);  /* 0C05E0F4 mov.b @(r0,Rm),Rn */
	r0 = 0x270u; UPD(0x0C05E0F8u, 1);  /* 0C05E0F6 mov.w @(disp,pc),Rn */
	IF(0x0C05E0F8u); r4 = R32(r0 + r3); UPD(0x0C05E0FAu, 1);  /* 0C05E0F8 mov.l @(r0,Rm),Rn */
	r3 = 0xC05E330u; UPD(0x0C05E0FCu, 1);  /* 0C05E0FA mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05E0FEu, 1);  /* 0C05E0FC mov.l @(disp,pc),Rn */
	IF(0x0C05E0FEu); { u32 t_ = r3; PR = 0x0C05E102u; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C05E102u); }  /* 0C05E0FE jsr @Rn */
L_0C05E102: BLKS(0x0C05E102u);
	r2 = 0xC161E78u; UPD(0x0C05E104u, 1);  /* 0C05E102 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05E104 mov Rm,Rn */
	IF(0x0C05E106u); r6 = R32(r0 + r2); UPD(0x0C05E108u, 2);  /* 0C05E106 mov.l @(r0,Rm),Rn */
	r4 = r11;  /* 0C05E108 mov Rm,Rn */
	r0 = 0xC05E500u; UPD(0x0C05E10Cu, 2);  /* 0C05E10A mov.l @(disp,pc),Rn */
	r10 = 0xC161E80u; UPD(0x0C05E10Eu, 1);  /* 0C05E10C mov.l @(disp,pc),Rn */
	IF(0x0C05E10Eu); { u32 t_ = r0; PR = 0x0C05E112u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E500, 0x0C05E500u, 0x0C05E112u); }  /* 0C05E10E jsr @Rn */
L_0C05E112: BLKS(0x0C05E112u);
	r7 = 0xC05E560u; UPD(0x0C05E114u, 1);  /* 0C05E112 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05E114 mov Rm,Rn */
	IF(0x0C05E116u); r6 = R32(r0 + r10); UPD(0x0C05E118u, 2);  /* 0C05E116 mov.l @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C05E118 mov #imm,Rn */
	IF(0x0C05E11Au); { u32 t_ = r7; PR = 0x0C05E11Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C05E560, 0x0C05E560u, 0x0C05E11Eu); }  /* 0C05E11A jsr @Rn */
L_0C05E11E: BLKS(0x0C05E11Eu);
	r6 = 0xC21CA15u; UPD(0x0C05E120u, 1);  /* 0C05E11E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C05E122u, 1);  /* 0C05E120 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05E122 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E0E4u, 4); goto L_0C05E0E4; } goto L_0C05E128; }  /* 0C05E124 bf/s */
L_0C05E128: BLKS(0x0C05E128u);
	r5 = 0xC161E8Bu; UPD(0x0C05E12Au, 2);  /* 0C05E128 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C05E12A mov Rm,Rn */
	r8 = 0xC05E610u; UPD(0x0C05E12Eu, 2);  /* 0C05E12C mov.l @(disp,pc),Rn */
	IF(0x0C05E12Eu); r6 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C05E130u, 1);  /* 0C05E12E mov.b @(r0,Rm),Rn */
	IF(0x0C05E130u); { u32 t_ = r8; PR = 0x0C05E134u; r5 = 0x25u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E610, 0x0C05E610u, 0x0C05E134u); }  /* 0C05E130 jsr @Rn */
L_0C05E134: BLKS(0x0C05E134u);
	{ IF(0x0C05E136u); ; /* slot nop */ UPD(0x0C05DE76u, 3); goto L_0C05DE76; }  /* 0C05E134 bra */
}

/* FUN_0c05e1f0 */
void f_0C05E1F0(sh3_t *c)
{
	LOCALS;
L_0C05E1F0: BLKS(0x0C05E1F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E1F2u, 1);  /* 0C05E1F0 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C05E1F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05E1F6u, 2);  /* 0C05E1F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05E1F8u, 1);  /* 0C05E1F6 mov.l Rm,@-Rn */
	r9 = 0x5u;  /* 0C05E1F8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05E1FCu, 2);  /* 0C05E1FA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05E1FEu, 1);  /* 0C05E1FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E200u, 1);  /* 0C05E1FE mov.l Rm,@-Rn */
	r4 = 0xC21F7F9u; UPD(0x0C05E202u, 1);  /* 0C05E200 mov.l @(disp,pc),Rn */
	IF(0x0C05E202u); r15 -= 4; W32(r15, PR); UPD(0x0C05E204u, 1);  /* 0C05E202 sts.l pr,@-Rn */
	r11 = 0xC220C53u; UPD(0x0C05E206u, 1);  /* 0C05E204 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05E206 mov Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r4); UPD(0x0C05E20Au, 2);  /* 0C05E208 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C05E20Cu, 1);  /* 0C05E20A mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C05E20C tst Rm,Rn */
	r6 = 0xC21CA15u; UPD(0x0C05E210u, 2);  /* 0C05E20E mov.l @(disp,pc),Rn */
	IF(0x0C05E210u); r5 = T;  /* 0C05E210 movt Rn */
	r8 = r10 & 0xFF;  /* 0C05E212 extu.b Rm,Rn */
	T = r9 >= r8;  /* 0C05E214 cmp/hs Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C05E218u, 4);  /* 0C05E216 mov.b @Rm,Rn */
	IF(0x0C05E218u); r7 = T;  /* 0C05E218 movt Rn */
	r1 = 0xC286748u; UPD(0x0C05E21Cu, 2);  /* 0C05E21A mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C05E21C tst Rm,Rn */
	r0 = R32(r1); UPD(0x0C05E220u, 2);  /* 0C05E21E mov.l @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05E220 negc Rm,Rn */
	r5 &= r7;  /* 0C05E222 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05E224 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C05E226 negc Rm,Rn */
	r4 |= r5;  /* 0C05E228 or Rm,Rn */
	r0 |= r4;  /* 0C05E22A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05E22C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05E2A0u, 10); goto L_0C05E2A0; } goto L_0C05E232; }  /* 0C05E22E bf/s */
L_0C05E232: BLKS(0x0C05E232u);
	r11 = 0xC283794u; UPD(0x0C05E234u, 2);  /* 0C05E232 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C05E234 mov #imm,Rn */
	r12 = 0xC21CA24u; UPD(0x0C05E238u, 2);  /* 0C05E236 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFF9u;  /* 0C05E238 mov #imm,Rn */
	r8 = 0x0u;  /* 0C05E23A mov #imm,Rn */
	UPD(0x0C05E23Cu, 2);
L_0C05E23C: BLKS(0x0C05E23Cu);
	r2 = r8;  /* 0C05E23C mov Rm,Rn */
	r2 += r11;  /* 0C05E23E add Rm,Rn */
	r0 = R32(r2); UPD(0x0C05E242u, 3);  /* 0C05E240 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05E242 tst Rm,Rn */
	{ u32 c_ = T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E272u, 4); goto L_0C05E272; } goto L_0C05E248; }  /* 0C05E244 bt/s */
L_0C05E248: BLKS(0x0C05E248u);
	r4 = 0x24Cu; UPD(0x0C05E24Au, 2);  /* 0C05E248 mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C05E24A add Rm,Rn */
	r4 += 0x1u;  /* 0C05E24C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C05E250u, 3);  /* 0C05E24E mov.b @Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C05E250 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C05E254u, 2);  /* 0C05E252 mov.b @Rm,Rn */
	r1 = r2 & 0xFF;  /* 0C05E254 extu.b Rm,Rn */
	IF(0x0C05E256u); ARG0(0x41ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C05E256 shld Rm,Rn */
	r6 = r7 & 0xFF;  /* 0C05E258 extu.b Rm,Rn */
	IF(0x0C05E25Au); ARG0(0x46ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C05E25A shld Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C05E25C extu.b Rm,Rn */
	r0 ^= 0x1u;  /* 0C05E25E xor #imm,r0 */
	r5 = r6 & 0xFF;  /* 0C05E260 extu.b Rm,Rn */
	T = (r0 & r5) == 0;  /* 0C05E262 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0xFFFFFF80u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05E2E0u, 11); goto L_0C05E2E0; } goto L_0C05E268; }  /* 0C05E264 bf/s */
L_0C05E268: BLKS(0x0C05E268u);
	r3 &= r2;  /* 0C05E268 and Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C05E26A extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05E26C tst Rm,Rn */
	if (!T) { UPD(0x0C05E2C0u, 7); goto L_0C05E2C0; }  /* 0C05E26E bf */
L_0C05E270: BLKS(0x0C05E270u);
	r7 = r9;  /* 0C05E270 mov Rm,Rn */
	UPD(0x0C05E272u, 1);
L_0C05E272: BLKS(0x0C05E272u);
	r9 = 0x280u; UPD(0x0C05E274u, 1);  /* 0C05E272 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C05E274 add #imm,Rn */
	r8 += r9;  /* 0C05E276 add Rm,Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C05E278 exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C05E27A mov #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C05E27C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05E23Cu, 8); goto L_0C05E23C; }  /* 0C05E27E bf */
L_0C05E280: BLKS(0x0C05E280u);
	r8 = 0xFFFFFFFAu;  /* 0C05E280 mov #imm,Rn */
	r2 = 0xC286298u; UPD(0x0C05E284u, 2);  /* 0C05E282 mov.l @(disp,pc),Rn */
	r10 = 0xC21CA24u; UPD(0x0C05E286u, 1);  /* 0C05E284 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C05E286 mov #imm,Rn */
	r0 = R32(r2); UPD(0x0C05E28Au, 2);  /* 0C05E288 mov.l @Rm,Rn */
	r6 = 0xDu;  /* 0C05E28A mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C05E28Eu, 2);  /* 0C05E28C mov.b @Rm,Rn */
	IF(0x0C05E28Eu); ARG0(0x408Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05E28E shad Rm,Rn */
	r11 = 0xC050AC0u; UPD(0x0C05E292u, 2);  /* 0C05E290 mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C05E292 and Rm,Rn */
	r0 &= 0x1u;  /* 0C05E294 and #imm,r0 */
	r12 = 0xC162244u; UPD(0x0C05E298u, 3);  /* 0C05E296 mov.l @(disp,pc),Rn */
	IF(0x0C05E298u); r0 <<= 2;  /* 0C05E298 shll2 Rn */
	IF(0x0C05E29Au); { u32 t_ = r11; PR = 0x0C05E29Eu; IF(0x0C05E29Cu); r4 = R32(r0 + r12); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05E29Eu); }  /* 0C05E29A jsr @Rn */
L_0C05E29E: BLKS(0x0C05E29Eu);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C05E2A0u, 1);  /* 0C05E29E mov.b @Rm,Rn */
L_0C05E2A0: BLKS(0x0C05E2A0u);
	r15 = r14;  /* 0C05E2A0 mov Rm,Rn */
	IF(0x0C05E2A2u); PR = R32(r15); r15 += 4; UPD(0x0C05E2A4u, 2);  /* 0C05E2A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E2A6u, 1);  /* 0C05E2A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05E2A8u, 1);  /* 0C05E2A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05E2AAu, 1);  /* 0C05E2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05E2ACu, 1);  /* 0C05E2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05E2AEu, 1);  /* 0C05E2AC mov.l @Rm+,Rn */
	IF(0x0C05E2AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E2AE rts */
L_0C05E2C0: BLKS(0x0C05E2C0u);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C05E2C2u, 1);  /* 0C05E2C0 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05E2C2 tst Rm,Rn */
	IF(0x0C05E2C4u); r0 = T;  /* 0C05E2C4 movt Rn */
	W8(r12, r0); UPD(0x0C05E2C8u, 3);  /* 0C05E2C6 mov.b Rm,@Rn */
	r0 = 0xC0AFC60u; UPD(0x0C05E2CAu, 1);  /* 0C05E2C8 mov.l @(disp,pc),Rn */
	IF(0x0C05E2CAu); { u32 t_ = r0; PR = 0x0C05E2CEu; r4 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC60, 0x0C0AFC60u, 0x0C05E2CEu); }  /* 0C05E2CA jsr @Rn */
L_0C05E2CE: BLKS(0x0C05E2CEu);
	{ r7 = r9; /* slot mov Rm,Rn */ UPD(0x0C05E272u, 3); goto L_0C05E272; }  /* 0C05E2CE bra */
L_0C05E2E0: BLKS(0x0C05E2E0u);
	r2 = 0xC393080u; UPD(0x0C05E2E2u, 1);  /* 0C05E2E0 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C05E2E4u, 1);  /* 0C05E2E2 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05E2E4 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C05E2E6 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C05E2E8 cmp/eq #imm,r0 */
	W8(r2, r8); UPD(0x0C05E2ECu, 4);  /* 0C05E2EA mov.b Rm,@Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05E2A0u, 3); goto L_0C05E2A0; } goto L_0C05E2F0; }  /* 0C05E2EC bf/s */
L_0C05E2F0: BLKS(0x0C05E2F0u);
	r3 = 0x0u;  /* 0C05E2F0 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C05E2F4u, 3);  /* 0C05E2F2 mov.b Rm,@Rn */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05E2A0u, 3); goto L_0C05E2A0; }  /* 0C05E2F4 bra */
}

/* FUN_0c05e330 */
void f_0C05E330(sh3_t *c)
{
	LOCALS;
L_0C05E330: BLKS(0x0C05E330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E332u, 1);  /* 0C05E330 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05E334u, 1);  /* 0C05E332 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05E336u, 1);  /* 0C05E334 mov.l Rm,@-Rn */
	r9 = 0x5u;  /* 0C05E336 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05E33Au, 2);  /* 0C05E338 mov.l Rm,@-Rn */
	r10 = r7;  /* 0C05E33A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05E33Eu, 2);  /* 0C05E33C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C05E33E exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05E342u, 2);  /* 0C05E340 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C05E342 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E346u, 2);  /* 0C05E344 mov.l Rm,@-Rn */
	r5 = 0xAu;  /* 0C05E346 mov #imm,Rn */
	IF(0x0C05E348u); r15 -= 4; W32(r15, PR); UPD(0x0C05E34Au, 2);  /* 0C05E348 sts.l pr,@-Rn */
	r8 = 0xC0AFDF0u; UPD(0x0C05E34Cu, 1);  /* 0C05E34A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C05E34C add #imm,Rn */
	r14 = r15;  /* 0C05E34E mov Rm,Rn */
	IF(0x0C05E350u); { u32 t_ = r8; PR = 0x0C05E354u; W32(r14, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05E354u); }  /* 0C05E350 jsr @Rn */
L_0C05E354: BLKS(0x0C05E354u);
	r5 = r1;  /* 0C05E354 mov Rm,Rn */
	r1 = 0x5u;  /* 0C05E356 mov #imm,Rn */
	IF(0x0C05E358u); ARG0(0x4C1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C05E358 shld Rm,Rn */
	W32(r14, r0); UPD(0x0C05E35Cu, 4);  /* 0C05E35A mov.l Rm,@Rn */
	r3 = r12;  /* 0C05E35C mov Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C05E360u, 2);  /* 0C05E35E mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C05E360 add Rm,Rn */
	IF(0x0C05E362u); r3 <<= 2;  /* 0C05E362 shll2 Rn */
	r4 = 0xC16224Cu; UPD(0x0C05E366u, 3);  /* 0C05E364 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C05E366 add Rm,Rn */
	r0 = r4;  /* 0C05E368 mov Rm,Rn */
	IF(0x0C05E36Au); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C05E36Cu, 3);  /* 0C05E36A mov.b @(r0,Rm),Rn */
	r13 = r8;  /* 0C05E36C mov Rm,Rn */
	r2 |= r10;  /* 0C05E36E or Rm,Rn */
	r8 = r3;  /* 0C05E370 mov Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C05E374u, 4);  /* 0C05E372 mov.l Rm,@(disp,Rn) */
	r8 += 0x14u;  /* 0C05E374 add #imm,Rn */
	UPD(0x0C05E376u, 1);
L_0C05E376: BLKS(0x0C05E376u);
	r4 = R32(r14); UPD(0x0C05E378u, 1);  /* 0C05E376 mov.l @Rm,Rn */
	IF(0x0C05E378u); { u32 t_ = r13; PR = 0x0C05E37Cu; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05E37Cu); }  /* 0C05E378 jsr @Rn */
L_0C05E37C: BLKS(0x0C05E37Cu);
	r4 = r1;  /* 0C05E37C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05E37E tst Rm,Rn */
	r1 = 0xC162258u; UPD(0x0C05E382u, 3);  /* 0C05E380 mov.l @(disp,pc),Rn */
	{ u32 c_ = T; W32(r14, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05E388u, 3); goto L_0C05E388; } UPD(0x0C05E386u, 1); goto L_0C05E386; }  /* 0C05E382 bt/s */
L_0C05E386: BLKS(0x0C05E386u);
	r1 = 0xC16224Cu; UPD(0x0C05E388u, 1);  /* 0C05E386 mov.l @(disp,pc),Rn */
L_0C05E388: BLKS(0x0C05E388u);
	r0 = r1;  /* 0C05E388 mov Rm,Rn */
	IF(0x0C05E38Au); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05E38Cu, 2);  /* 0C05E38A mov.b @(r0,Rm),Rn */
	r3 = r9;  /* 0C05E38C mov Rm,Rn */
	r2 |= r10;  /* 0C05E38E or Rm,Rn */
	W32(r8, r2); UPD(0x0C05E392u, 3);  /* 0C05E390 mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C05E392 add #imm,Rn */
	r9 = (u32)(s32)(s8)r3;  /* 0C05E394 exts.b Rm,Rn */
	IF(0x0C05E396u); T = (s32)r9 > 0;  /* 0C05E396 cmp/pl Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E376u, 6); goto L_0C05E376; } goto L_0C05E39C; }  /* 0C05E398 bt/s */
L_0C05E39C: BLKS(0x0C05E39Cu);
	r11 += r12;  /* 0C05E39C add Rm,Rn */
	r0 = R32(r14); UPD(0x0C05E3A0u, 3);  /* 0C05E39E mov.l @Rm,Rn */
	IF(0x0C05E3A0u); r11 <<= 2;  /* 0C05E3A0 shll2 Rn */
	r12 = 0xC162258u; UPD(0x0C05E3A4u, 2);  /* 0C05E3A2 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C05E3A4 add #imm,Rn */
	IF(0x0C05E3A6u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05E3A8u, 2);  /* 0C05E3A6 mov.b @(r0,Rm),Rn */
	r8 = 0xC21E108u; UPD(0x0C05E3AAu, 1);  /* 0C05E3A8 mov.l @(disp,pc),Rn */
	r9 |= r10;  /* 0C05E3AA or Rm,Rn */
	r0 = r11;  /* 0C05E3AC mov Rm,Rn */
	IF(0x0C05E3AEu); W32(r0 + r8, r9); UPD(0x0C05E3B0u, 3);  /* 0C05E3AE mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C05E3B0 mov Rm,Rn */
	IF(0x0C05E3B2u); PR = R32(r15); r15 += 4; UPD(0x0C05E3B4u, 2);  /* 0C05E3B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E3B6u, 1);  /* 0C05E3B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05E3B8u, 1);  /* 0C05E3B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05E3BAu, 1);  /* 0C05E3B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05E3BCu, 1);  /* 0C05E3BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05E3BEu, 1);  /* 0C05E3BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05E3C0u, 1);  /* 0C05E3BE mov.l @Rm+,Rn */
	IF(0x0C05E3C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E3C0 rts */
}

/* FUN_0c05e3e0 */
void f_0C05E3E0(sh3_t *c)
{
	LOCALS;
L_0C05E3E0: BLKS(0x0C05E3E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3E2u, 1);  /* 0C05E3E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3E4u, 1);  /* 0C05E3E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3E6u, 1);  /* 0C05E3E4 mov.l Rm,@-Rn */
	r9 = r7;  /* 0C05E3E6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3EAu, 2);  /* 0C05E3E8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C05E3EA exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3EEu, 2);  /* 0C05E3EC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C05E3EE exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E3F2u, 2);  /* 0C05E3F0 mov.l Rm,@-Rn */
	r5 = 0xAu;  /* 0C05E3F2 mov #imm,Rn */
	r0 = 0xC0AFDF0u; UPD(0x0C05E3F6u, 2);  /* 0C05E3F4 mov.l @(disp,pc),Rn */
	IF(0x0C05E3F6u); r15 -= 4; W32(r15, PR); UPD(0x0C05E3F8u, 1);  /* 0C05E3F6 sts.l pr,@-Rn */
	IF(0x0C05E3F8u); { u32 t_ = r0; PR = 0x0C05E3FCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05E3FCu); }  /* 0C05E3F8 jsr @Rn */
L_0C05E3FC: BLKS(0x0C05E3FCu);
	r2 = 0xC16224Cu; UPD(0x0C05E3FEu, 1);  /* 0C05E3FC mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C05E3FE mov Rm,Rn */
	r0 = r2;  /* 0C05E400 mov Rm,Rn */
	IF(0x0C05E402u); r12 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C05E404u, 3);  /* 0C05E402 mov.b @(r0,Rm),Rn */
	r6 = 0xFu;  /* 0C05E404 mov #imm,Rn */
	r7 = 0x1F0u; UPD(0x0C05E408u, 2);  /* 0C05E406 mov.w @(disp,pc),Rn */
	r1 = r10;  /* 0C05E408 mov Rm,Rn */
	r7 &= r12;  /* 0C05E40A and Rm,Rn */
	r5 = 0xC0u; UPD(0x0C05E40Eu, 3);  /* 0C05E40C mov.w @(disp,pc),Rn */
	IF(0x0C05E40Eu); r7 <<= 2;  /* 0C05E40E shll2 Rn */
	r3 = 0x5u;  /* 0C05E410 mov #imm,Rn */
	r6 &= r12;  /* 0C05E412 and Rm,Rn */
	IF(0x0C05E414u); ARG0(0x413Du); { s32 s_ = (s32)r3; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C05E414 shld Rm,Rn */
	r0 = r7;  /* 0C05E416 mov Rm,Rn */
	r0 += r5;  /* 0C05E418 add Rm,Rn */
	r6 += r6;  /* 0C05E41A add Rm,Rn */
	r6 |= r9;  /* 0C05E41C or Rm,Rn */
	r5 = r1;  /* 0C05E41E mov Rm,Rn */
	r6 |= r0;  /* 0C05E420 or Rm,Rn */
	r2 = 0xC21E108u; UPD(0x0C05E424u, 11);  /* 0C05E422 mov.l @(disp,pc),Rn */
	r5 += r11;  /* 0C05E424 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C05E428u, 2);  /* 0C05E426 mov.w @(disp,pc),Rn */
	IF(0x0C05E428u); r5 <<= 2;  /* 0C05E428 shll2 Rn */
	r5 += r2;  /* 0C05E42A add Rm,Rn */
	IF(0x0C05E42Cu); W32(r0 + r5, r6); UPD(0x0C05E42Eu, 3);  /* 0C05E42C mov.l Rm,@(r0,Rn) */
	r8 = r5;  /* 0C05E42E mov Rm,Rn */
	r6 += 0x1u;  /* 0C05E430 add #imm,Rn */
	r0 += 0x4u;  /* 0C05E432 add #imm,Rn */
	IF(0x0C05E434u); W32(r0 + r5, r6); UPD(0x0C05E436u, 4);  /* 0C05E434 mov.l Rm,@(r0,Rn) */
	r12 = r1;  /* 0C05E436 mov Rm,Rn */
	r6 += 0x1Fu;  /* 0C05E438 add #imm,Rn */
	W32(r5 + 0x30u, r6); UPD(0x0C05E43Cu, 3);  /* 0C05E43A mov.l Rm,@(disp,Rn) */
	r10 = 0x5u;  /* 0C05E43C mov #imm,Rn */
	r6 += 0x1u;  /* 0C05E43E add #imm,Rn */
	W32(r5 + 0x34u, r6); UPD(0x0C05E442u, 3);  /* 0C05E440 mov.l Rm,@(disp,Rn) */
	r8 += 0x28u;  /* 0C05E442 add #imm,Rn */
	UPD(0x0C05E444u, 1);
L_0C05E444: BLKS(0x0C05E444u);
	r0 = 0xC0AFDF0u; UPD(0x0C05E446u, 1);  /* 0C05E444 mov.l @(disp,pc),Rn */
	IF(0x0C05E446u); { u32 t_ = r0; PR = 0x0C05E44Au; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05E44Au); }  /* 0C05E446 jsr @Rn */
L_0C05E44A: BLKS(0x0C05E44Au);
	r3 = r1;  /* 0C05E44A mov Rm,Rn */
	r1 = 0xC162258u; UPD(0x0C05E44Eu, 2);  /* 0C05E44C mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C05E44E tst Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E456u, 4); goto L_0C05E456; } goto L_0C05E454; }  /* 0C05E450 bt/s */
L_0C05E454: BLKS(0x0C05E454u);
	r1 = 0xC16224Cu; UPD(0x0C05E456u, 2);  /* 0C05E454 mov.l @(disp,pc),Rn */
L_0C05E456: BLKS(0x0C05E456u);
	r0 = r1;  /* 0C05E456 mov Rm,Rn */
	IF(0x0C05E458u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05E45Au, 2);  /* 0C05E458 mov.b @(r0,Rm),Rn */
	r5 = 0xFu;  /* 0C05E45A mov #imm,Rn */
	r6 = 0x1F0u; UPD(0x0C05E45Eu, 2);  /* 0C05E45C mov.w @(disp,pc),Rn */
	r5 &= r1;  /* 0C05E45E and Rm,Rn */
	r6 &= r1;  /* 0C05E460 and Rm,Rn */
	IF(0x0C05E462u); r6 <<= 2;  /* 0C05E462 shll2 Rn */
	r7 = 0xC0u; UPD(0x0C05E466u, 4);  /* 0C05E464 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C05E466 mov Rm,Rn */
	r5 += r5;  /* 0C05E468 add Rm,Rn */
	r0 += r7;  /* 0C05E46A add Rm,Rn */
	r5 |= r9;  /* 0C05E46C or Rm,Rn */
	r5 |= r0;  /* 0C05E46E or Rm,Rn */
	r3 = 0x80u; UPD(0x0C05E472u, 6);  /* 0C05E470 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C05E472 mov Rm,Rn */
	IF(0x0C05E474u); W32(r0 + r3, r5); UPD(0x0C05E476u, 2);  /* 0C05E474 mov.l Rm,@(r0,Rn) */
	r10 += 0xFFFFFFFFu;  /* 0C05E476 add #imm,Rn */
	r6 = 0x84u; UPD(0x0C05E47Au, 2);  /* 0C05E478 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C05E47A add #imm,Rn */
	IF(0x0C05E47Cu); W32(r0 + r6, r5); UPD(0x0C05E47Eu, 2);  /* 0C05E47C mov.l Rm,@(r0,Rn) */
	IF(0x0C05E47Eu); T = (s32)r10 > 0;  /* 0C05E47E cmp/pl Rn */
	r5 += 0x1Fu;  /* 0C05E480 add #imm,Rn */
	W32(r8, r5); UPD(0x0C05E484u, 3);  /* 0C05E482 mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C05E484 add #imm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C05E488u, 2);  /* 0C05E486 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r8 += 0xFFFFFFF8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E444u, 3); goto L_0C05E444; } goto L_0C05E48C; }  /* 0C05E488 bt/s */
L_0C05E48C: BLKS(0x0C05E48Cu);
	r8 = 0xC162258u; UPD(0x0C05E48Eu, 2);  /* 0C05E48C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05E48E mov Rm,Rn */
	IF(0x0C05E490u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05E492u, 2);  /* 0C05E490 mov.b @(r0,Rm),Rn */
	r8 = r9;  /* 0C05E492 mov Rm,Rn */
	r7 = 0x1F0u; UPD(0x0C05E496u, 2);  /* 0C05E494 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C05E496 mov #imm,Rn */
	r7 &= r1;  /* 0C05E498 and Rm,Rn */
	IF(0x0C05E49Au); r7 <<= 2;  /* 0C05E49A shll2 Rn */
	r0 = 0xC0u; UPD(0x0C05E49Eu, 4);  /* 0C05E49C mov.w @(disp,pc),Rn */
	r5 = r7;  /* 0C05E49E mov Rm,Rn */
	r5 += r0;  /* 0C05E4A0 add Rm,Rn */
	r4 &= r1;  /* 0C05E4A2 and Rm,Rn */
	r0 = r12;  /* 0C05E4A4 mov Rm,Rn */
	r4 += r4;  /* 0C05E4A6 add Rm,Rn */
	r4 |= r9;  /* 0C05E4A8 or Rm,Rn */
	r0 += r11;  /* 0C05E4AA add Rm,Rn */
	r2 = 0xC21E108u; UPD(0x0C05E4AEu, 8);  /* 0C05E4AC mov.l @(disp,pc),Rn */
	r4 |= r5;  /* 0C05E4AE or Rm,Rn */
	r12 = r9;  /* 0C05E4B0 mov Rm,Rn */
	IF(0x0C05E4B2u); r0 <<= 2;  /* 0C05E4B2 shll2 Rn */
	r0 += r2;  /* 0C05E4B4 add Rm,Rn */
	r12 |= r4;  /* 0C05E4B6 or Rm,Rn */
	r10 = r4;  /* 0C05E4B8 mov Rm,Rn */
	IF(0x0C05E4BAu); W32(r0 + r3, r12); UPD(0x0C05E4BCu, 7);  /* 0C05E4BA mov.l Rm,@(r0,Rn) */
	r4 += 0x20u;  /* 0C05E4BC add #imm,Rn */
	r10 += 0x1u;  /* 0C05E4BE add #imm,Rn */
	r8 |= r4;  /* 0C05E4C0 or Rm,Rn */
	r10 |= r9;  /* 0C05E4C2 or Rm,Rn */
	IF(0x0C05E4C4u); W32(r0 + r6, r10); UPD(0x0C05E4C6u, 5);  /* 0C05E4C4 mov.l Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C05E4C6 add #imm,Rn */
	r4 |= r9;  /* 0C05E4C8 or Rm,Rn */
	W32(r0, r8); UPD(0x0C05E4CCu, 3);  /* 0C05E4CA mov.l Rm,@Rn */
	W32(r0 + 0x4u, r4); UPD(0x0C05E4CEu, 1);  /* 0C05E4CC mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C05E4CE mov Rm,Rn */
	IF(0x0C05E4D0u); PR = R32(r15); r15 += 4; UPD(0x0C05E4D2u, 2);  /* 0C05E4D0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E4D4u, 1);  /* 0C05E4D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05E4D6u, 1);  /* 0C05E4D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05E4D8u, 1);  /* 0C05E4D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05E4DAu, 1);  /* 0C05E4D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05E4DCu, 1);  /* 0C05E4DA mov.l @Rm+,Rn */
	IF(0x0C05E4DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E4DC rts */
}

/* FUN_0c05e500 */
void f_0C05E500(sh3_t *c)
{
	LOCALS;
L_0C05E500: BLKS(0x0C05E500u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E502u, 1);  /* 0C05E500 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C05E502 mov Rm,Rn */
	r3 = 0xC1623C0u; UPD(0x0C05E506u, 2);  /* 0C05E504 mov.l @(disp,pc),Rn */
	IF(0x0C05E506u); r0 <<= 2;  /* 0C05E506 shll2 Rn */
	IF(0x0C05E508u); r7 = R32(r0 + r3); UPD(0x0C05E50Au, 2);  /* 0C05E508 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C05E50A mov Rm,Rn */
	r0 = 0x280u; UPD(0x0C05E50Eu, 2);  /* 0C05E50C mov.w @(disp,pc),Rn */
	IF(0x0C05E50Eu); MACL = r4 * r0;  /* 0C05E50E mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C05E512u, 3);  /* 0C05E510 mov.l @(disp,pc),Rn */
	IF(0x0C05E512u); r2 = MACL;  /* 0C05E512 sts macl,Rn */
	r0 = 0x256u; UPD(0x0C05E516u, 2);  /* 0C05E514 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C05E516 add Rm,Rn */
	IF(0x0C05E518u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05E51Au, 2);  /* 0C05E518 mov.b @(r0,Rm),Rn */
	r0 = r1 & 0xFF;  /* 0C05E51A extu.b Rm,Rn */
	IF(0x0C05E51Cu); r0 <<= 2;  /* 0C05E51C shll2 Rn */
	IF(0x0C05E51Eu); r3 = R32(r0 + r7); UPD(0x0C05E520u, 3);  /* 0C05E51E mov.l @(r0,Rm),Rn */
	r0 = 0x5u;  /* 0C05E520 mov #imm,Rn */
	IF(0x0C05E522u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05E522 shld Rm,Rn */
	r2 = 0xC21E108u; UPD(0x0C05E526u, 3);  /* 0C05E524 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C05E526 add Rm,Rn */
	IF(0x0C05E528u); r6 <<= 2;  /* 0C05E528 shll2 Rn */
	r0 = 0x80u; UPD(0x0C05E52Cu, 3);  /* 0C05E52A mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C05E52C add Rm,Rn */
	r2 = 0x4u;  /* 0C05E52E mov #imm,Rn */
	UPD(0x0C05E530u, 2);
L_0C05E530: BLKS(0x0C05E530u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05E532u, 1);  /* 0C05E530 mov.l @Rm+,Rn */
	IF(0x0C05E532u); r2 -= 1; T = r2 == 0;  /* 0C05E532 dt Rn */
	IF(0x0C05E534u); W32(r0 + r6, r5); UPD(0x0C05E536u, 2);  /* 0C05E534 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C05E538u, 1);  /* 0C05E536 mov.l @Rm+,Rn */
	W32(r6, r4); UPD(0x0C05E53Au, 1);  /* 0C05E538 mov.l Rm,@Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E530u, 3); goto L_0C05E530; } goto L_0C05E53E; }  /* 0C05E53A bf/s */
L_0C05E53E: BLKS(0x0C05E53Eu);
	r15 = r14;  /* 0C05E53E mov Rm,Rn */
	IF(0x0C05E540u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C05E540 rts */
}

/* FUN_0c05e560 */
void f_0C05E560(sh3_t *c)
{
	LOCALS;
L_0C05E560: BLKS(0x0C05E560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E562u, 1);  /* 0C05E560 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C05E562 mov Rm,Rn */
	r2 = 0x280u; UPD(0x0C05E566u, 2);  /* 0C05E564 mov.w @(disp,pc),Rn */
	IF(0x0C05E566u); r0 <<= 2;  /* 0C05E566 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E56Au, 2);  /* 0C05E568 mov.l Rm,@-Rn */
	IF(0x0C05E56Au); MACL = r4 * r2;  /* 0C05E56A mul.l Rm,Rn */
	r7 = 0xC162AB0u; UPD(0x0C05E56Eu, 3);  /* 0C05E56C mov.l @(disp,pc),Rn */
	r8 = r6;  /* 0C05E56E mov Rm,Rn */
	IF(0x0C05E570u); r6 = R32(r0 + r7); UPD(0x0C05E572u, 2);  /* 0C05E570 mov.l @(r0,Rm),Rn */
	r2 = 0x14u;  /* 0C05E572 mov #imm,Rn */
	r3 = 0xC283794u; UPD(0x0C05E576u, 2);  /* 0C05E574 mov.l @(disp,pc),Rn */
	IF(0x0C05E576u); r0 = MACL;  /* 0C05E576 sts macl,Rn */
	r3 += r0;  /* 0C05E578 add Rm,Rn */
	r0 = 0x257u; UPD(0x0C05E57Cu, 3);  /* 0C05E57A mov.w @(disp,pc),Rn */
	IF(0x0C05E57Cu); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05E57Eu, 1);  /* 0C05E57C mov.b @(r0,Rm),Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05E57E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E586u, 4); goto L_0C05E586; } goto L_0C05E584; }  /* 0C05E580 bf/s */
L_0C05E584: BLKS(0x0C05E584u);
	r0 = 0x14u;  /* 0C05E584 mov #imm,Rn */
	UPD(0x0C05E586u, 2);
L_0C05E586: BLKS(0x0C05E586u);
	r2 = 0x5u;  /* 0C05E586 mov #imm,Rn */
	IF(0x0C05E588u); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05E588 shld Rm,Rn */
	IF(0x0C05E58Au); r0 <<= 2;  /* 0C05E58A shll2 Rn */
	r2 = r8;  /* 0C05E58C mov Rm,Rn */
	IF(0x0C05E58Eu); r3 = R32(r0 + r6); UPD(0x0C05E590u, 5);  /* 0C05E58E mov.l @(r0,Rm),Rn */
	r2 += r5;  /* 0C05E590 add Rm,Rn */
	r1 = 0xC21E108u; UPD(0x0C05E594u, 2);  /* 0C05E592 mov.l @(disp,pc),Rn */
	IF(0x0C05E594u); r2 <<= 2;  /* 0C05E594 shll2 Rn */
	r0 = 0x0u;  /* 0C05E596 mov #imm,Rn */
	r7 = 0x9u;  /* 0C05E598 mov #imm,Rn */
	r2 += r1;  /* 0C05E59A add Rm,Rn */
	UPD(0x0C05E59Cu, 4);
L_0C05E59C: BLKS(0x0C05E59Cu);
	{ u32 v_ = R32(r3); r3 += 4; r1 = v_; } UPD(0x0C05E59Eu, 1);  /* 0C05E59C mov.l @Rm+,Rn */
	W32(r2, r1); UPD(0x0C05E5A0u, 1);  /* 0C05E59E mov.l Rm,@Rn */
	r1 = r0;  /* 0C05E5A0 mov Rm,Rn */
	r1 += 0x1u;  /* 0C05E5A2 add #imm,Rn */
	r0 = (u32)(s32)(s8)r1;  /* 0C05E5A4 exts.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C05E5A6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E59Cu, 7); goto L_0C05E59C; } goto L_0C05E5AC; }  /* 0C05E5A8 bf/s */
L_0C05E5AC: BLKS(0x0C05E5ACu);
	r7 = 0x280u; UPD(0x0C05E5AEu, 2);  /* 0C05E5AC mov.w @(disp,pc),Rn */
	IF(0x0C05E5AEu); MACL = r4 * r7;  /* 0C05E5AE mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C05E5B2u, 3);  /* 0C05E5B0 mov.l @(disp,pc),Rn */
	IF(0x0C05E5B2u); r0 = MACL;  /* 0C05E5B2 sts macl,Rn */
	r3 += r0;  /* 0C05E5B4 add Rm,Rn */
	r0 = 0x257u; UPD(0x0C05E5B8u, 3);  /* 0C05E5B6 mov.w @(disp,pc),Rn */
	IF(0x0C05E5B8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05E5BAu, 1);  /* 0C05E5B8 mov.b @(r0,Rm),Rn */
	r4 += 0xFFFFFFECu;  /* 0C05E5BA add #imm,Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C05E5BC exts.b Rm,Rn */
	IF(0x0C05E5BEu); T = (s32)r0 >= 0;  /* 0C05E5BE cmp/pz Rn */
	if (!T) { UPD(0x0C05E5F0u, 6); goto L_0C05E5F0; }  /* 0C05E5C0 bf */
L_0C05E5C2: BLKS(0x0C05E5C2u);
	IF(0x0C05E5C2u); r0 <<= 2;  /* 0C05E5C2 shll2 Rn */
	IF(0x0C05E5C4u); r3 = R32(r0 + r6); UPD(0x0C05E5C6u, 2);  /* 0C05E5C4 mov.l @(r0,Rm),Rn */
	r5 += r8;  /* 0C05E5C6 add Rm,Rn */
	r6 = 0xC21E188u; UPD(0x0C05E5CAu, 2);  /* 0C05E5C8 mov.l @(disp,pc),Rn */
	IF(0x0C05E5CAu); r5 <<= 2;  /* 0C05E5CA shll2 Rn */
	r0 = 0x0u;  /* 0C05E5CC mov #imm,Rn */
	r2 = 0x9u;  /* 0C05E5CE mov #imm,Rn */
	r5 += r6;  /* 0C05E5D0 add Rm,Rn */
	IF(0x0C05E5D2u); ;  /* 0C05E5D2 nop */
	UPD(0x0C05E5D4u, 5);
L_0C05E5D4: BLKS(0x0C05E5D4u);
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C05E5D6u, 1);  /* 0C05E5D4 mov.l @Rm+,Rn */
	r8 = r0;  /* 0C05E5D6 mov Rm,Rn */
	W32(r5, r4); UPD(0x0C05E5DAu, 2);  /* 0C05E5D8 mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C05E5DA add #imm,Rn */
	r0 = (u32)(s32)(s8)r8;  /* 0C05E5DC exts.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05E5DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E5D4u, 6); goto L_0C05E5D4; } goto L_0C05E5E4; }  /* 0C05E5E0 bf/s */
L_0C05E5E4: BLKS(0x0C05E5E4u);
	r15 = r14;  /* 0C05E5E4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E5E8u, 3);  /* 0C05E5E6 mov.l @Rm+,Rn */
	IF(0x0C05E5E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E5E8 rts */
L_0C05E5F0: BLKS(0x0C05E5F0u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05E5C2u, 3); goto L_0C05E5C2; }  /* 0C05E5F0 bra */
}

/* FUN_0c05e610 */
void f_0C05E610(sh3_t *c)
{
	LOCALS;
L_0C05E610: BLKS(0x0C05E610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E612u, 1);  /* 0C05E610 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C05E612 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05E616u, 2);  /* 0C05E614 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C05E616 exts.w Rm,Rn */
	r4 = 0x280u; UPD(0x0C05E61Au, 2);  /* 0C05E618 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C05E61A exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05E61Eu, 2);  /* 0C05E61C mov.l Rm,@-Rn */
	IF(0x0C05E61Eu); MACL = r8 * r4;  /* 0C05E61E mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05E622u, 3);  /* 0C05E620 mov.l Rm,@-Rn */
	r0 = 0xC283794u; UPD(0x0C05E624u, 1);  /* 0C05E622 mov.l @(disp,pc),Rn */
	IF(0x0C05E624u); r7 = MACL;  /* 0C05E624 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E628u, 2);  /* 0C05E626 mov.l Rm,@-Rn */
	r7 += r0;  /* 0C05E628 add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C05E62Cu, 2);  /* 0C05E62A mov.l @(disp,Rm),Rn */
	r9 = 0xC162C38u; UPD(0x0C05E62Eu, 1);  /* 0C05E62C mov.l @(disp,pc),Rn */
	IF(0x0C05E62Eu); r0 <<= 2;  /* 0C05E62E shll2 Rn */
	IF(0x0C05E630u); r4 = R32(r0 + r9); UPD(0x0C05E632u, 2);  /* 0C05E630 mov.l @(r0,Rm),Rn */
	r3 = 0x253u; UPD(0x0C05E634u, 1);  /* 0C05E632 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C05E634 mov Rm,Rn */
	IF(0x0C05E636u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05E638u, 2);  /* 0C05E636 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C05E638 extu.b Rm,Rn */
	IF(0x0C05E63Au); r0 <<= 2;  /* 0C05E63A shll2 Rn */
	IF(0x0C05E63Cu); r3 = R32(r0 + r4); UPD(0x0C05E63Eu, 3);  /* 0C05E63C mov.l @(r0,Rm),Rn */
	r0 = r8;  /* 0C05E63E mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C05E640 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E6A0u, 5); goto L_0C05E6A0; } goto L_0C05E646; }  /* 0C05E642 bt/s */
L_0C05E646: BLKS(0x0C05E646u);
	r2 = 0x5u;  /* 0C05E646 mov #imm,Rn */
	r11 = 0xC21E108u; UPD(0x0C05E64Au, 3);  /* 0C05E648 mov.l @(disp,pc),Rn */
	IF(0x0C05E64Au); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05E64A shld Rm,Rn */
	UPD(0x0C05E64Cu, 1);
L_0C05E64C: BLKS(0x0C05E64Cu);
	r10 = 0x80u; UPD(0x0C05E64Eu, 1);  /* 0C05E64C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C05E64E mov #imm,Rn */
	r9 = 0x84u; UPD(0x0C05E652u, 2);  /* 0C05E650 mov.w @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C05E652 mov #imm,Rn */
	r0 = r5;  /* 0C05E654 mov Rm,Rn */
	UPD(0x0C05E656u, 2);
L_0C05E656: BLKS(0x0C05E656u);
	r0 += r6;  /* 0C05E656 add Rm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C05E65Au, 2);  /* 0C05E658 mov.l @Rm+,Rn */
	IF(0x0C05E65Au); r0 <<= 2;  /* 0C05E65A shll2 Rn */
	r0 += r11;  /* 0C05E65C add Rm,Rn */
	IF(0x0C05E65Eu); W32(r0 + r10, r7); UPD(0x0C05E660u, 3);  /* 0C05E65E mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C05E662u, 1);  /* 0C05E660 mov.l @Rm+,Rn */
	IF(0x0C05E662u); W32(r0 + r9, r7); UPD(0x0C05E664u, 1);  /* 0C05E662 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C05E666u, 1);  /* 0C05E664 mov.l @Rm+,Rn */
	W32(r0, r7); UPD(0x0C05E668u, 1);  /* 0C05E666 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r1 = v_; } UPD(0x0C05E66Au, 1);  /* 0C05E668 mov.l @Rm+,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C05E66Cu, 1);  /* 0C05E66A mov.l Rm,@(disp,Rn) */
	r0 = r6;  /* 0C05E66C mov Rm,Rn */
	r0 += 0x2u;  /* 0C05E66E add #imm,Rn */
	r6 = (u32)(s32)(s8)r0;  /* 0C05E670 exts.b Rm,Rn */
	r0 = r2;  /* 0C05E672 mov Rm,Rn */
	r0 += 0x1u;  /* 0C05E674 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C05E676 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C05E678 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E656u, 10); goto L_0C05E656; } goto L_0C05E67E; }  /* 0C05E67A bf/s */
L_0C05E67E: BLKS(0x0C05E67Eu);
	T = (r8 & r8) == 0;  /* 0C05E67E tst Rm,Rn */
	if (!T) { UPD(0x0C05E68Eu, 5); goto L_0C05E68E; }  /* 0C05E680 bf */
L_0C05E682: BLKS(0x0C05E682u);
	r0 += r6;  /* 0C05E682 add Rm,Rn */
	IF(0x0C05E684u); r0 <<= 2;  /* 0C05E684 shll2 Rn */
	r0 += r11;  /* 0C05E686 add Rm,Rn */
	W32(r0, r8); UPD(0x0C05E68Au, 4);  /* 0C05E688 mov.l Rm,@Rn */
	r6 = 0x80u; UPD(0x0C05E68Cu, 1);  /* 0C05E68A mov.w @(disp,pc),Rn */
	IF(0x0C05E68Cu); W32(r0 + r6, r8); UPD(0x0C05E68Eu, 1);  /* 0C05E68C mov.l Rm,@(r0,Rn) */
L_0C05E68E: BLKS(0x0C05E68Eu);
	r15 = r14;  /* 0C05E68E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E692u, 2);  /* 0C05E690 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05E694u, 1);  /* 0C05E692 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05E696u, 1);  /* 0C05E694 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05E698u, 1);  /* 0C05E696 mov.l @Rm+,Rn */
	IF(0x0C05E698u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E698 rts */
L_0C05E6A0: BLKS(0x0C05E6A0u);
	r9 = r5;  /* 0C05E6A0 mov Rm,Rn */
	r5 = 0x5u;  /* 0C05E6A2 mov #imm,Rn */
	IF(0x0C05E6A4u); ARG0(0x495Du); { s32 s_ = (s32)r5; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C05E6A4 shld Rm,Rn */
	r7 = r9;  /* 0C05E6A6 mov Rm,Rn */
	r7 += r6;  /* 0C05E6A8 add Rm,Rn */
	r11 = 0xC21E108u; UPD(0x0C05E6ACu, 6);  /* 0C05E6AA mov.l @(disp,pc),Rn */
	IF(0x0C05E6ACu); r7 <<= 2;  /* 0C05E6AC shll2 Rn */
	r7 += r11;  /* 0C05E6AE add Rm,Rn */
	r1 = 0x0u;  /* 0C05E6B0 mov #imm,Rn */
	W32(r7, r1); UPD(0x0C05E6B4u, 4);  /* 0C05E6B2 mov.l Rm,@Rn */
	r10 = r6;  /* 0C05E6B4 mov Rm,Rn */
	r0 = 0x80u; UPD(0x0C05E6B8u, 2);  /* 0C05E6B6 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C05E6B8 add #imm,Rn */
	IF(0x0C05E6BAu); W32(r0 + r7, r1); UPD(0x0C05E6BCu, 2);  /* 0C05E6BA mov.l Rm,@(r0,Rn) */
	r5 = r9;  /* 0C05E6BC mov Rm,Rn */
	{ r6 = (u32)(s32)(s8)r10; /* slot exts.b Rm,Rn */ UPD(0x0C05E64Cu, 4); goto L_0C05E64C; }  /* 0C05E6BE bra */
}

/* FUN_0c05e6e0 */
void f_0C05E6E0(sh3_t *c)
{
	LOCALS;
L_0C05E6E0: BLKS(0x0C05E6E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6E2u, 1);  /* 0C05E6E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6E4u, 1);  /* 0C05E6E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6E6u, 1);  /* 0C05E6E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6E8u, 1);  /* 0C05E6E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6EAu, 1);  /* 0C05E6E8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6ECu, 1);  /* 0C05E6EA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05E6EEu, 1);  /* 0C05E6EC mov.l Rm,@-Rn */
	r0 = 0xC21F882u; UPD(0x0C05E6F0u, 1);  /* 0C05E6EE mov.l @(disp,pc),Rn */
	IF(0x0C05E6F0u); r15 -= 4; W32(r15, PR); UPD(0x0C05E6F2u, 1);  /* 0C05E6F0 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C05E6F4u, 1);  /* 0C05E6F2 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C05E6F4 add #imm,Rn */
	r0 = r2;  /* 0C05E6F6 mov Rm,Rn */
	r14 = r15;  /* 0C05E6F8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05E6FA and #imm,r0 */
	W32(r14, r0); UPD(0x0C05E6FEu, 5);  /* 0C05E6FC mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C05E6FE mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C05E702u, 2);  /* 0C05E700 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r0); UPD(0x0C05E704u, 1);  /* 0C05E702 mov.l Rm,@(disp,Rn) */
L_0C05E704: BLKS(0x0C05E704u);
	r3 = 0x340u; UPD(0x0C05E706u, 1);  /* 0C05E704 mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C05E708u, 1);  /* 0C05E706 mov.l @Rm,Rn */
	IF(0x0C05E708u); MACL = r6 * r3;  /* 0C05E708 mul.l Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C05E70Cu, 3);  /* 0C05E70A mov.l @(disp,Rm),Rn */
	r7 = 0xC285318u; UPD(0x0C05E70Eu, 1);  /* 0C05E70C mov.l @(disp,pc),Rn */
	IF(0x0C05E70Eu); r3 = MACL;  /* 0C05E70E sts macl,Rn */
	r3 += r5;  /* 0C05E710 add Rm,Rn */
	r3 += r7;  /* 0C05E712 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05E716u, 4);  /* 0C05E714 mov.l @Rm,Rn */
	r4 = 0x8000000u; UPD(0x0C05E718u, 1);  /* 0C05E716 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C05E718 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05E722u, 4); goto L_0C05E722; } UPD(0x0C05E71Eu, 1); goto L_0C05E71E; }  /* 0C05E71A bf/s */
L_0C05E71E: BLKS(0x0C05E71Eu);
	{ IF(0x0C05E720u); ; /* slot nop */ UPD(0x0C05E822u, 3); goto L_0C05E822; }  /* 0C05E71E bra */
L_0C05E722: BLKS(0x0C05E722u);
	r0 = R32(r3 + 0x4u); UPD(0x0C05E724u, 1);  /* 0C05E722 mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C05E724 mov #imm,Rn */
	IF(0x0C05E726u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05E726 shld Rm,Rn */
	r2 = 0xC16BEACu; UPD(0x0C05E72Au, 3);  /* 0C05E728 mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C05E72A mov #imm,Rn */
	IF(0x0C05E72Cu); r13 = R32(r0 + r2); UPD(0x0C05E72Eu, 2);  /* 0C05E72C mov.l @(r0,Rm),Rn */
	r12 = 0x3u;  /* 0C05E72E mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C05E732u, 2);  /* 0C05E730 mov.l @(disp,Rm),Rn */
	r10 = R32(r3 + 0xCu); UPD(0x0C05E734u, 1);  /* 0C05E732 mov.l @(disp,Rm),Rn */
	IF(0x0C05E734u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05E734 shld Rm,Rn */
	IF(0x0C05E736u); ARG0(0x4ACDu); { s32 s_ = (s32)r12; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C05E736 shld Rm,Rn */
	IF(0x0C05E738u); r11 = R32(r0 + r13); UPD(0x0C05E73Au, 3);  /* 0C05E738 mov.l @(r0,Rm),Rn */
	r10 += r11;  /* 0C05E73A add Rm,Rn */
	r4 = R32(r10 + 0x4u); UPD(0x0C05E73Eu, 2);  /* 0C05E73C mov.l @(disp,Rm),Rn */
	r9 = 0xC392DE8u; UPD(0x0C05E740u, 1);  /* 0C05E73E mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r4); r4 += 4; r8 = v_; } UPD(0x0C05E742u, 1);  /* 0C05E740 mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C05E742 tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05E820u, 4); goto L_0C05E820; } UPD(0x0C05E748u, 1); goto L_0C05E748; }  /* 0C05E744 bt/s */
L_0C05E748: BLKS(0x0C05E748u);
	r0 = r7;  /* 0C05E748 mov Rm,Rn */
	UPD(0x0C05E74Au, 1);
L_0C05E74A: BLKS(0x0C05E74Au);
	r12 = 0x340u; UPD(0x0C05E74Cu, 1);  /* 0C05E74A mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C05E74Eu, 1);  /* 0C05E74C mov.l @Rm,Rn */
	IF(0x0C05E74Eu); MACL = r13 * r12;  /* 0C05E74E mul.l Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r1 = v_; } UPD(0x0C05E752u, 3);  /* 0C05E750 mov.l @Rm+,Rn */
	r7 = 0xC2852C4u; UPD(0x0C05E754u, 1);  /* 0C05E752 mov.l @(disp,pc),Rn */
	IF(0x0C05E754u); r6 = MACL;  /* 0C05E754 sts macl,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C05E758u, 2);  /* 0C05E756 mov.l @(disp,Rm),Rn */
	W32(r7, r1); UPD(0x0C05E75Au, 1);  /* 0C05E758 mov.l Rm,@Rn */
	r6 += r11;  /* 0C05E75A add Rm,Rn */
	r6 += r0;  /* 0C05E75C add Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r10 = v_; } UPD(0x0C05E760u, 3);  /* 0C05E75E mov.l @Rm+,Rn */
	r9 = R32(r6 + 0x10u); UPD(0x0C05E762u, 1);  /* 0C05E760 mov.l @(disp,Rm),Rn */
	r8 = 0xC286738u; UPD(0x0C05E764u, 1);  /* 0C05E762 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C05E764 add Rm,Rn */
	W32(r8, r9); UPD(0x0C05E768u, 2);  /* 0C05E766 mov.l Rm,@Rn */
	r5 = R32(r6 + 0x14u); UPD(0x0C05E76Au, 1);  /* 0C05E768 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r4); r4 += 4; r3 = v_; } UPD(0x0C05E76Cu, 1);  /* 0C05E76A mov.l @Rm+,Rn */
	r7 = 0xC27DDB0u; UPD(0x0C05E76Eu, 1);  /* 0C05E76C mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C05E76E add Rm,Rn */
	r12 = 0xBFu; UPD(0x0C05E772u, 2);  /* 0C05E770 mov.w @(disp,pc),Rn */
	r11 = 0x864Cu; UPD(0x0C05E774u, 1);  /* 0C05E772 mov.l @(disp,pc),Rn */
	W32(r7, r5); UPD(0x0C05E776u, 1);  /* 0C05E774 mov.l Rm,@Rn */
	IF(0x0C05E776u); ;  /* 0C05E776 nop */
	UPD(0x0C05E778u, 1);
L_0C05E778: BLKS(0x0C05E778u);
	r7 = 0xC26CD40u; UPD(0x0C05E77Au, 1);  /* 0C05E778 mov.l @(disp,pc),Rn */
	r7 += r11;  /* 0C05E77A add Rm,Rn */
	r3 = R32(r7); UPD(0x0C05E77Eu, 2);  /* 0C05E77C mov.l @Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C05E780u, 1);  /* 0C05E77E mov.l @(disp,pc),Rn */
	T = (r3 & r5) == 0;  /* 0C05E780 tst Rm,Rn */
	{ u32 c_ = T; r3 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05E80Au, 4); goto L_0C05E80A; } goto L_0C05E786; }  /* 0C05E782 bt/s */
L_0C05E786: BLKS(0x0C05E786u);
	r13 = 0xA8u; UPD(0x0C05E788u, 2);  /* 0C05E786 mov.w @(disp,pc),Rn */
	r13 += r7;  /* 0C05E788 add Rm,Rn */
	r2 = r13;  /* 0C05E78A mov Rm,Rn */
	r2 += 0x3u;  /* 0C05E78C add #imm,Rn */
	r13 += 0x1u;  /* 0C05E78E add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C05E792u, 5);  /* 0C05E790 mov.b @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C05E794u, 1);  /* 0C05E792 mov.b @Rm,Rn */
	r8 = r10 & 0xFF;  /* 0C05E794 extu.b Rm,Rn */
	r6 = r9 & 0xFF;  /* 0C05E796 extu.b Rm,Rn */
	T = r8 >= r6;  /* 0C05E798 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C05E80Au, 6); goto L_0C05E80A; }  /* 0C05E79A bf */
L_0C05E79C: BLKS(0x0C05E79Cu);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C05E79Eu, 1);  /* 0C05E79C mov.l @(disp,Rm),Rn */
	r6 = 0xC275578u; UPD(0x0C05E7A0u, 1);  /* 0C05E79E mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05E7A2u, 1);  /* 0C05E7A0 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C05E7A2 tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05E808u, 4); goto L_0C05E808; } UPD(0x0C05E7A8u, 1); goto L_0C05E7A8; }  /* 0C05E7A4 bt/s */
L_0C05E7A8: BLKS(0x0C05E7A8u);
	r9 = r7;  /* 0C05E7A8 mov Rm,Rn */
	IF(0x0C05E7AAu); ;  /* 0C05E7AA nop */
	UPD(0x0C05E7ACu, 2);
L_0C05E7AC: BLKS(0x0C05E7ACu);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05E7AEu, 1);  /* 0C05E7AC mov.l @Rm+,Rn */
	r8 = 0xC27DC44u; UPD(0x0C05E7B0u, 1);  /* 0C05E7AE mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C05E7B2u, 1);  /* 0C05E7B0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r6 = v_; } UPD(0x0C05E7B4u, 1);  /* 0C05E7B2 mov.l @Rm+,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C05E7B6u, 1);  /* 0C05E7B4 mov.l @(disp,Rm),Rn */
	r13 = 0xC3867F8u; UPD(0x0C05E7B8u, 1);  /* 0C05E7B6 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C05E7B8 add Rm,Rn */
	W32(r13, r8); UPD(0x0C05E7BCu, 2);  /* 0C05E7BA mov.l Rm,@Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C05E7BEu, 1);  /* 0C05E7BC mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C05E7C0u, 1);  /* 0C05E7BE mov.l @Rm+,Rn */
	r7 = 0xC3929BCu; UPD(0x0C05E7C2u, 1);  /* 0C05E7C0 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C05E7C2 add Rm,Rn */
	W32(r7, r6); UPD(0x0C05E7C6u, 2);  /* 0C05E7C4 mov.l Rm,@Rn */
	r10 = 0xC286738u; UPD(0x0C05E7C8u, 1);  /* 0C05E7C6 mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C05E7CAu, 1);  /* 0C05E7C8 mov.l @Rm,Rn */
	r7 -= r8;  /* 0C05E7CA sub Rm,Rn */
	IF(0x0C05E7CCu); T = (s32)r7 >= 0;  /* 0C05E7CC cmp/pz Rn */
	if (T) { UPD(0x0C05E7D2u, 5); goto L_0C05E7D2; }  /* 0C05E7CE bt */
L_0C05E7D0: BLKS(0x0C05E7D0u);
	r7 = 0u - r7;  /* 0C05E7D0 neg Rm,Rn */
	UPD(0x0C05E7D2u, 1);
L_0C05E7D2: BLKS(0x0C05E7D2u);
	r10 = 0xC275578u; UPD(0x0C05E7D4u, 1);  /* 0C05E7D2 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFFFFu; UPD(0x0C05E7D6u, 1);  /* 0C05E7D4 mov.l @(disp,pc),Rn */
	r8 = R32(r10); UPD(0x0C05E7D8u, 1);  /* 0C05E7D6 mov.l @Rm,Rn */
	r2 = 0xC392DE8u; UPD(0x0C05E7DAu, 1);  /* 0C05E7D8 mov.l @(disp,pc),Rn */
	r8 &= r13;  /* 0C05E7DA and Rm,Rn */
	r13 = R32(r2); UPD(0x0C05E7DEu, 2);  /* 0C05E7DC mov.l @Rm,Rn */
	r13 += r8;  /* 0C05E7DE add Rm,Rn */
	T = (s32)r7 >= (s32)r13;  /* 0C05E7E0 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05E7FCu, 5); goto L_0C05E7FC; }  /* 0C05E7E2 bt */
L_0C05E7E4: BLKS(0x0C05E7E4u);
	r7 = 0xC27DDB0u; UPD(0x0C05E7E6u, 1);  /* 0C05E7E4 mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C05E7E8u, 1);  /* 0C05E7E6 mov.l @Rm,Rn */
	r2 -= r6;  /* 0C05E7E8 sub Rm,Rn */
	IF(0x0C05E7EAu); T = (s32)r2 >= 0;  /* 0C05E7EA cmp/pz Rn */
	if (T) { UPD(0x0C05E7F0u, 5); goto L_0C05E7F0; }  /* 0C05E7EC bt */
L_0C05E7EE: BLKS(0x0C05E7EEu);
	r2 = 0u - r2;  /* 0C05E7EE neg Rm,Rn */
	UPD(0x0C05E7F0u, 1);
L_0C05E7F0: BLKS(0x0C05E7F0u);
	r8 = 0xC2852C4u; UPD(0x0C05E7F2u, 1);  /* 0C05E7F0 mov.l @(disp,pc),Rn */
	r6 = R32(r8); UPD(0x0C05E7F4u, 1);  /* 0C05E7F2 mov.l @Rm,Rn */
	r6 += r5;  /* 0C05E7F4 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C05E7F6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05E8A0u, 5); goto L_0C05E8A0; } UPD(0x0C05E7FCu, 1); goto L_0C05E7FC; }  /* 0C05E7F8 bf/s */
L_0C05E7FC: BLKS(0x0C05E7FCu);
	{ u32 v_ = R32(r3); r3 += 4; r10 = v_; } UPD(0x0C05E7FEu, 1);  /* 0C05E7FC mov.l @Rm+,Rn */
	r2 = 0xC275578u; UPD(0x0C05E800u, 1);  /* 0C05E7FE mov.l @(disp,pc),Rn */
	T = (r10 & r10) == 0;  /* 0C05E800 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05E7ACu, 4); goto L_0C05E7AC; } UPD(0x0C05E806u, 1); goto L_0C05E806; }  /* 0C05E802 bf/s */
L_0C05E806: BLKS(0x0C05E806u);
	IF(0x0C05E806u); ;  /* 0C05E806 nop */
	UPD(0x0C05E808u, 1);
L_0C05E808: BLKS(0x0C05E808u);
	r3 = r12;  /* 0C05E808 mov Rm,Rn */
	UPD(0x0C05E80Au, 1);
L_0C05E80A: BLKS(0x0C05E80Au);
	r12 = 0xFFFFFF4Cu; UPD(0x0C05E80Cu, 1);  /* 0C05E80A mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C05E80C add #imm,Rn */
	r11 += r12;  /* 0C05E80E add Rm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C05E810 exts.w Rm,Rn */
	IF(0x0C05E812u); T = (s32)r12 >= 0;  /* 0C05E812 cmp/pz Rn */
	if (T) { UPD(0x0C05E778u, 7); goto L_0C05E778; }  /* 0C05E814 bt */
L_0C05E816: BLKS(0x0C05E816u);
	{ u32 v_ = R32(r4); r4 += 4; r11 = v_; } UPD(0x0C05E818u, 1);  /* 0C05E816 mov.l @Rm+,Rn */
	r13 = 0xC392DE8u; UPD(0x0C05E81Au, 1);  /* 0C05E818 mov.l @(disp,pc),Rn */
	T = (r11 & r11) == 0;  /* 0C05E81A tst Rm,Rn */
	{ u32 c_ = !T; W32(r13, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05E74Au, 4); goto L_0C05E74A; } UPD(0x0C05E820u, 1); goto L_0C05E820; }  /* 0C05E81C bf/s */
L_0C05E820: BLKS(0x0C05E820u);
	r0 = R32(r14 + 0x4u); UPD(0x0C05E822u, 1);  /* 0C05E820 mov.l @(disp,Rm),Rn */
L_0C05E822: BLKS(0x0C05E822u);
	r9 = 0xFu;  /* 0C05E822 mov #imm,Rn */
	r0 += 0x1u;  /* 0C05E824 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C05E826 exts.w Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C05E82Au, 4);  /* 0C05E828 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C05E82Cu, 1);  /* 0C05E82A mov.l Rm,@(disp,Rn) */
	r5 += 0x34u;  /* 0C05E82C add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C05E830u, 2);  /* 0C05E82E mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r9;  /* 0C05E830 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05E83Au, 4); goto L_0C05E83A; } UPD(0x0C05E836u, 1); goto L_0C05E836; }  /* 0C05E832 bt/s */
L_0C05E836: BLKS(0x0C05E836u);
	{ IF(0x0C05E838u); ; /* slot nop */ UPD(0x0C05E704u, 3); goto L_0C05E704; }  /* 0C05E836 bra */
L_0C05E83A: BLKS(0x0C05E83Au);
	r14 += 0x14u;  /* 0C05E83A add #imm,Rn */
	r15 = r14;  /* 0C05E83C mov Rm,Rn */
	IF(0x0C05E83Eu); PR = R32(r15); r15 += 4; UPD(0x0C05E840u, 3);  /* 0C05E83E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05E842u, 1);  /* 0C05E840 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05E844u, 1);  /* 0C05E842 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05E846u, 1);  /* 0C05E844 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05E848u, 1);  /* 0C05E846 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05E84Au, 1);  /* 0C05E848 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05E84Cu, 1);  /* 0C05E84A mov.l @Rm+,Rn */
	IF(0x0C05E84Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05E84C rts */
L_0C05E8A0: BLKS(0x0C05E8A0u);
	r15 += 0xFFFFFFF8u;  /* 0C05E8A0 add #imm,Rn */
	r13 = 0x340u; UPD(0x0C05E8A4u, 2);  /* 0C05E8A2 mov.w @(disp,pc),Rn */
	IF(0x0C05E8A4u); MACL = r7 * r13;  /* 0C05E8A4 mul.l Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C05E8A8u, 3);  /* 0C05E8A6 mov.l @(disp,Rm),Rn */
	IF(0x0C05E8A8u); r13 = MACL;  /* 0C05E8A8 sts macl,Rn */
	r3 = 0xC285318u; UPD(0x0C05E8ACu, 2);  /* 0C05E8AA mov.l @(disp,pc),Rn */
	r13 += r5;  /* 0C05E8AC add Rm,Rn */
	r13 += r3;  /* 0C05E8AE add Rm,Rn */
	r4 = r13;  /* 0C05E8B0 mov Rm,Rn */
	r4 += 0x2Cu;  /* 0C05E8B2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C05E8B6u, 5);  /* 0C05E8B4 mov.w @Rm,Rn */
	r7 = 0x8u;  /* 0C05E8B6 mov #imm,Rn */
	r2 = 0x1C0u; UPD(0x0C05E8BAu, 2);  /* 0C05E8B8 mov.w @(disp,pc),Rn */
	r6 = r0 & 0xFFFF;  /* 0C05E8BA extu.w Rm,Rn */
	r8 = 0xC0AB100u; UPD(0x0C05E8BEu, 2);  /* 0C05E8BC mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C05E8C0u, 1);  /* 0C05E8BE mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C05E8C2u, 1);  /* 0C05E8C0 mov.l Rm,@(disp,Rn) */
	r6 = 0x14u;  /* 0C05E8C2 mov #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C05E8C6u, 2);  /* 0C05E8C4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x14u); UPD(0x0C05E8C8u, 1);  /* 0C05E8C6 mov.l @(disp,Rm),Rn */
	IF(0x0C05E8C8u); { u32 t_ = r8; PR = 0x0C05E8CCu; r4 = R32(r13 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB100, 0x0C0AB100u, 0x0C05E8CCu); }  /* 0C05E8C8 jsr @Rn */
L_0C05E8CC: BLKS(0x0C05E8CCu);
	r7 = 0x280u; UPD(0x0C05E8CEu, 1);  /* 0C05E8CC mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C05E8D0u, 1);  /* 0C05E8CE mov.l @Rm,Rn */
	IF(0x0C05E8D0u); MACL = r1 * r7;  /* 0C05E8D0 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C05E8D4u, 3);  /* 0C05E8D2 mov.l @(disp,pc),Rn */
	r3 = 0x270u; UPD(0x0C05E8D6u, 1);  /* 0C05E8D4 mov.w @(disp,pc),Rn */
	IF(0x0C05E8D6u); r0 = MACL;  /* 0C05E8D6 sts macl,Rn */
	r0 += r5;  /* 0C05E8D8 add Rm,Rn */
	r0 += r3;  /* 0C05E8DA add Rm,Rn */
	r4 = R32(r0); UPD(0x0C05E8DEu, 4);  /* 0C05E8DC mov.l @Rm,Rn */
	r4 += 0xAu;  /* 0C05E8DE add #imm,Rn */
	W32(r0, r4); UPD(0x0C05E8E2u, 2);  /* 0C05E8E0 mov.l Rm,@Rn */
	r3 = 0x800000u; UPD(0x0C05E8E4u, 1);  /* 0C05E8E2 mov.l @(disp,pc),Rn */
	r2 = R32(r13); UPD(0x0C05E8E6u, 1);  /* 0C05E8E4 mov.l @Rm,Rn */
	r3 &= r2;  /* 0C05E8E6 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05E8E8 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05E980u, 5); goto L_0C05E980; } UPD(0x0C05E8EEu, 1); goto L_0C05E8EE; }  /* 0C05E8EA bt/s */
L_0C05E8EE: BLKS(0x0C05E8EEu);
	r2 = 0xC275578u; UPD(0x0C05E8F0u, 1);  /* 0C05E8EE mov.l @(disp,pc),Rn */
	r3 = 0x20000000u; UPD(0x0C05E8F2u, 1);  /* 0C05E8F0 mov.l @(disp,pc),Rn */
	r10 = R32(r2); UPD(0x0C05E8F4u, 1);  /* 0C05E8F2 mov.l @Rm,Rn */
	T = (r10 & r3) == 0;  /* 0C05E8F4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05E822u, 4); goto L_0C05E822; } UPD(0x0C05E8FAu, 1); goto L_0C05E8FA; }  /* 0C05E8F6 bf/s */
L_0C05E8FA: BLKS(0x0C05E8FAu);
	r9 = 0xC26CD40u; UPD(0x0C05E8FCu, 1);  /* 0C05E8FA mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C05E8FC add Rm,Rn */
	r1 = R32(r9); UPD(0x0C05E900u, 2);  /* 0C05E8FE mov.l @Rm,Rn */
	r11 = 0x20020000u; UPD(0x0C05E902u, 1);  /* 0C05E900 mov.l @(disp,pc),Rn */
	T = (r1 & r11) == 0;  /* 0C05E902 tst Rm,Rn */
	{ u32 c_ = !T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05E822u, 4); goto L_0C05E822; } UPD(0x0C05E908u, 1); goto L_0C05E908; }  /* 0C05E904 bf/s */
L_0C05E908: BLKS(0x0C05E908u);
	r7 = 0x1u;  /* 0C05E908 mov #imm,Rn */
	r8 = 0x340u; UPD(0x0C05E90Cu, 2);  /* 0C05E90A mov.w @(disp,pc),Rn */
	IF(0x0C05E90Cu); MACL = r5 * r8;  /* 0C05E90C mul.l Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C05E910u, 3);  /* 0C05E90E mov.l @(disp,Rm),Rn */
	IF(0x0C05E910u); r8 = MACL;  /* 0C05E910 sts macl,Rn */
	r8 += r4;  /* 0C05E912 add Rm,Rn */
	r4 = r5;  /* 0C05E914 mov Rm,Rn */
	r5 = r12;  /* 0C05E916 mov Rm,Rn */
	r0 = 0xC285318u; UPD(0x0C05E91Au, 5);  /* 0C05E918 mov.l @(disp,pc),Rn */
	r12 = 0xC0A0730u; UPD(0x0C05E91Cu, 1);  /* 0C05E91A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C05E91C add Rm,Rn */
	IF(0x0C05E91Eu); { u32 t_ = r12; PR = 0x0C05E922u; r6 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0730, 0x0C0A0730u, 0x0C05E922u); }  /* 0C05E91E jsr @Rn */
L_0C05E922: BLKS(0x0C05E922u);
	T = (r0 & r0) == 0;  /* 0C05E922 tst Rm,Rn */
	if (T) { UPD(0x0C05E948u, 4); goto L_0C05E948; }  /* 0C05E924 bt */
L_0C05E926: BLKS(0x0C05E926u);
	r13 = R32(r8); UPD(0x0C05E928u, 1);  /* 0C05E926 mov.l @Rm,Rn */
	r7 = 0x800000u; UPD(0x0C05E92Au, 1);  /* 0C05E928 mov.l @(disp,pc),Rn */
	T = (r13 & r7) == 0;  /* 0C05E92A tst Rm,Rn */
	if (!T) { UPD(0x0C05E950u, 4); goto L_0C05E950; }  /* 0C05E92C bf */
L_0C05E92E: BLKS(0x0C05E92Eu);
	r9 += 0x40u;  /* 0C05E92E add #imm,Rn */
	r12 = 0x280u; UPD(0x0C05E932u, 2);  /* 0C05E930 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C05E934u, 1);  /* 0C05E932 mov.l @Rm,Rn */
	IF(0x0C05E934u); MACL = r1 * r12;  /* 0C05E934 mul.l Rm,Rn */
	r11 = 0xC283794u; UPD(0x0C05E938u, 3);  /* 0C05E936 mov.l @(disp,pc),Rn */
	IF(0x0C05E938u); r6 = MACL;  /* 0C05E938 sts macl,Rn */
	r2 = 0x270u; UPD(0x0C05E93Cu, 2);  /* 0C05E93A mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C05E93C add Rm,Rn */
	r6 += r2;  /* 0C05E93E add Rm,Rn */
	r3 = R32(r6); UPD(0x0C05E942u, 3);  /* 0C05E940 mov.l @Rm,Rn */
	r10 = R32(r9); UPD(0x0C05E944u, 1);  /* 0C05E942 mov.l @Rm,Rn */
	r3 += r10;  /* 0C05E944 add Rm,Rn */
	W32(r6, r3); UPD(0x0C05E948u, 2);  /* 0C05E946 mov.l Rm,@Rn */
L_0C05E948: BLKS(0x0C05E948u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C05E822u, 3); goto L_0C05E822; }  /* 0C05E948 bra */
L_0C05E950: BLKS(0x0C05E950u);
	r7 = 0x280u; UPD(0x0C05E952u, 1);  /* 0C05E950 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C05E952 mov Rm,Rn */
	r6 = R32(r14); UPD(0x0C05E956u, 2);  /* 0C05E954 mov.l @Rm,Rn */
	r9 += 0x40u;  /* 0C05E956 add #imm,Rn */
	IF(0x0C05E958u); MACL = r6 * r7;  /* 0C05E958 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C05E95Cu, 4);  /* 0C05E95A mov.l @(disp,pc),Rn */
	r0 += 0x44u;  /* 0C05E95C add #imm,Rn */
	IF(0x0C05E95Eu); r13 = MACL;  /* 0C05E95E sts macl,Rn */
	r5 = 0x270u; UPD(0x0C05E962u, 3);  /* 0C05E960 mov.w @(disp,pc),Rn */
	r13 += r4;  /* 0C05E962 add Rm,Rn */
	r8 = 0xC0588A0u; UPD(0x0C05E966u, 2);  /* 0C05E964 mov.l @(disp,pc),Rn */
	r13 += r5;  /* 0C05E966 add Rm,Rn */
	r4 = R32(r9); UPD(0x0C05E96Au, 2);  /* 0C05E968 mov.l @Rm,Rn */
	IF(0x0C05E96Au); { u32 t_ = r8; PR = 0x0C05E96Eu; r5 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0588A0, 0x0C0588A0u, 0x0C05E96Eu); }  /* 0C05E96A jsr @Rn */
L_0C05E96E: BLKS(0x0C05E96Eu);
	r9 = R32(r13); UPD(0x0C05E970u, 1);  /* 0C05E96E mov.l @Rm,Rn */
	r9 += r0;  /* 0C05E970 add Rm,Rn */
	{ W32(r13, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C05E820u, 4); goto L_0C05E820; }  /* 0C05E972 bra */
L_0C05E980: BLKS(0x0C05E980u);
	W32(r13 + 0x4u, r3); UPD(0x0C05E982u, 1);  /* 0C05E980 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r3); UPD(0x0C05E984u, 1);  /* 0C05E982 mov.l Rm,@(disp,Rn) */
	r8 = R32(r13 + 0x8u); UPD(0x0C05E986u, 1);  /* 0C05E984 mov.l @(disp,Rm),Rn */
	r4 = 0xF7FFFFFFu; UPD(0x0C05E988u, 1);  /* 0C05E986 mov.l @(disp,pc),Rn */
	IF(0x0C05E988u); r8 <<= 2;  /* 0C05E988 shll2 Rn */
	r3 = 0xC050D70u; UPD(0x0C05E98Cu, 2);  /* 0C05E98A mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C05E98C and Rm,Rn */
	r0 = 0xC162C60u; UPD(0x0C05E990u, 2);  /* 0C05E98E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C05E990 mov #imm,Rn */
	W32(r13, r2); UPD(0x0C05E994u, 2);  /* 0C05E992 mov.l Rm,@Rn */
	IF(0x0C05E994u); { u32 t_ = r3; PR = 0x0C05E998u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05E998u); }  /* 0C05E994 jsr @Rn */
L_0C05E998: BLKS(0x0C05E998u);
	r6 = R32(r8); UPD(0x0C05E99Au, 1);  /* 0C05E998 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C05E99Cu, 1);  /* 0C05E99A mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C05E99C add Rm,Rn */
	W32(r13 + 0x8u, r6); UPD(0x0C05E9A0u, 2);  /* 0C05E99E mov.l Rm,@(disp,Rn) */
	W32(r13 + 0xCu, r1); UPD(0x0C05E9A2u, 1);  /* 0C05E9A0 mov.l Rm,@(disp,Rn) */
	r13 += 0x30u;  /* 0C05E9A2 add #imm,Rn */
	W8(r13, r1); UPD(0x0C05E9A6u, 2);  /* 0C05E9A4 mov.b Rm,@Rn */
	r8 = R32(r9); UPD(0x0C05E9A8u, 1);  /* 0C05E9A6 mov.l @Rm,Rn */
	r2 = R32(r10); UPD(0x0C05E9AAu, 1);  /* 0C05E9A8 mov.l @Rm,Rn */
	r9 = 0x20000000u; UPD(0x0C05E9ACu, 1);  /* 0C05E9AA mov.l @(disp,pc),Rn */
	r8 |= r2;  /* 0C05E9AC or Rm,Rn */
	T = (r8 & r9) == 0;  /* 0C05E9AE tst Rm,Rn */
	{ u32 c_ = !T; r13 += 0xFFFFFFD0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05EA10u, 5); goto L_0C05EA10; } goto L_0C05E9B4; }  /* 0C05E9B0 bf/s */
L_0C05E9B4: BLKS(0x0C05E9B4u);
	r9 = 0xC0AFE40u; UPD(0x0C05E9B6u, 2);  /* 0C05E9B4 mov.l @(disp,pc),Rn */
	IF(0x0C05E9B6u); { u32 t_ = r9; PR = 0x0C05E9BAu; IF(0x0C05E9B8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C05E9BAu); }  /* 0C05E9B6 jsr @Rn */
L_0C05E9BA: BLKS(0x0C05E9BAu);
	r7 = R32(r14 + 0x8u); UPD(0x0C05E9BCu, 1);  /* 0C05E9BA mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C05E9BC and #imm,r0 */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C05E9C0u, 2);  /* 0C05E9BE mov.w @Rm,Rn */
	r5 = 0xC050D70u; UPD(0x0C05E9C2u, 1);  /* 0C05E9C0 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C05E9C2 add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C05E9C4 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C05E9C6 exts.w Rm,Rn */
	IF(0x0C05E9C8u); { u32 t_ = r5; PR = 0x0C05E9CCu; r4 = R32(r13 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05E9CCu); }  /* 0C05E9C8 jsr @Rn */
L_0C05E9CC: BLKS(0x0C05E9CCu);
	r9 = R32(r13 + 0x20u); UPD(0x0C05E9CEu, 1);  /* 0C05E9CC mov.l @(disp,Rm),Rn */
	r1 = 0xC162C88u; UPD(0x0C05E9D0u, 1);  /* 0C05E9CE mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C05E9D0 add Rm,Rn */
	UPD(0x0C05E9D2u, 1);
L_0C05E9D2: BLKS(0x0C05E9D2u);
	r0 = R32(r14); UPD(0x0C05E9D4u, 1);  /* 0C05E9D2 mov.l @Rm,Rn */
	r13 = 0xC0AFB20u; UPD(0x0C05E9D6u, 1);  /* 0C05E9D4 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C05E9D6 mov Rm,Rn */
	IF(0x0C05E9D8u); r6 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C05E9DAu, 2);  /* 0C05E9D8 mov.b @(r0,Rm),Rn */
	IF(0x0C05E9DAu); { u32 t_ = r13; PR = 0x0C05E9DEu; r5 = r6 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C05E9DEu); }  /* 0C05E9DA jsr @Rn */
L_0C05E9DE: BLKS(0x0C05E9DEu);
	r7 = R32(r14); UPD(0x0C05E9E0u, 1);  /* 0C05E9DE mov.l @Rm,Rn */
	r5 = 0x340u; UPD(0x0C05E9E2u, 1);  /* 0C05E9E0 mov.w @(disp,pc),Rn */
	IF(0x0C05E9E2u); MACL = r7 * r5;  /* 0C05E9E2 mul.l Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C05E9E6u, 3);  /* 0C05E9E4 mov.l @(disp,Rm),Rn */
	r8 = 0xC058060u; UPD(0x0C05E9E8u, 1);  /* 0C05E9E6 mov.l @(disp,pc),Rn */
	IF(0x0C05E9E8u); r13 = MACL;  /* 0C05E9E8 sts macl,Rn */
	r0 = 0xC285318u; UPD(0x0C05E9ECu, 2);  /* 0C05E9EA mov.l @(disp,pc),Rn */
	r13 += r4;  /* 0C05E9EC add Rm,Rn */
	r13 += r0;  /* 0C05E9EE add Rm,Rn */
	r5 = r9;  /* 0C05E9F0 mov Rm,Rn */
	IF(0x0C05E9F2u); { u32 t_ = r8; PR = 0x0C05E9F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C05E9F6u); }  /* 0C05E9F2 jsr @Rn */
L_0C05E9F6: BLKS(0x0C05E9F6u);
	r5 = r9;  /* 0C05E9F6 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C05E9FAu, 2);  /* 0C05E9F8 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C05E9FA mov Rm,Rn */
	IF(0x0C05E9FCu); { u32 t_ = r9; PR = 0x0C05EA00u; W32(r13 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C05EA00u); }  /* 0C05E9FC jsr @Rn */
L_0C05EA00: BLKS(0x0C05EA00u);
	{ W32(r13 + 0x1Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C05E8EEu, 3); goto L_0C05E8EE; }  /* 0C05EA00 bra */
L_0C05EA10: BLKS(0x0C05EA10u);
	r10 = 0xC0AFE40u; UPD(0x0C05EA12u, 1);  /* 0C05EA10 mov.l @(disp,pc),Rn */
	r8 = 0xC050D70u; UPD(0x0C05EA14u, 1);  /* 0C05EA12 mov.l @(disp,pc),Rn */
	IF(0x0C05EA14u); { u32 t_ = r10; PR = 0x0C05EA18u; IF(0x0C05EA16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C05EA18u); }  /* 0C05EA14 jsr @Rn */
L_0C05EA18: BLKS(0x0C05EA18u);
	r1 = R32(r14 + 0x8u); UPD(0x0C05EA1Au, 1);  /* 0C05EA18 mov.l @(disp,Rm),Rn */
	r6 = r0 & 0xFF;  /* 0C05EA1A extu.b Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C05EA1Eu, 2);  /* 0C05EA1C mov.w @Rm,Rn */
	r2 = 0x80u; UPD(0x0C05EA20u, 1);  /* 0C05EA1E mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C05EA20 add Rm,Rn */
	r6 += r2;  /* 0C05EA22 add Rm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C05EA24 exts.w Rm,Rn */
	IF(0x0C05EA26u); { u32 t_ = r8; PR = 0x0C05EA2Au; r4 = R32(r13 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05EA2Au); }  /* 0C05EA26 jsr @Rn */
L_0C05EA2A: BLKS(0x0C05EA2Au);
	r9 = R32(r13 + 0x20u); UPD(0x0C05EA2Cu, 1);  /* 0C05EA2A mov.l @(disp,Rm),Rn */
	r1 = 0xC162C8Cu; UPD(0x0C05EA2Eu, 1);  /* 0C05EA2C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C05EA2E add Rm,Rn */
	{ IF(0x0C05EA32u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(0x0C05E9D2u, 4); goto L_0C05E9D2; }  /* 0C05EA30 bra */
}

/* FUN_0c05eaa0 */
void f_0C05EAA0(sh3_t *c)
{
	LOCALS;
L_0C05EAA0: BLKS(0x0C05EAA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAA2u, 1);  /* 0C05EAA0 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C05EAA2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAA6u, 2);  /* 0C05EAA4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAA8u, 1);  /* 0C05EAA6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAAAu, 1);  /* 0C05EAA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAACu, 1);  /* 0C05EAAA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAAEu, 1);  /* 0C05EAAC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05EAB0u, 1);  /* 0C05EAAE mov.l Rm,@-Rn */
	r2 = 0xC21F882u; UPD(0x0C05EAB2u, 1);  /* 0C05EAB0 mov.l @(disp,pc),Rn */
	IF(0x0C05EAB2u); r15 -= 4; W32(r15, PR); UPD(0x0C05EAB4u, 1);  /* 0C05EAB2 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C05EAB6u, 1);  /* 0C05EAB4 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C05EAB6 add #imm,Rn */
	r12 = r0;  /* 0C05EAB8 mov Rm,Rn */
	r14 = r15;  /* 0C05EABA mov Rm,Rn */
	r0 = 0x0u;  /* 0C05EABC mov #imm,Rn */
	r12 += 0x1u;  /* 0C05EABE add #imm,Rn */
	W32(r14, r0); UPD(0x0C05EAC2u, 6);  /* 0C05EAC0 mov.l Rm,@Rn */
	r12 &= r1;  /* 0C05EAC2 and Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C05EAC6u, 2);  /* 0C05EAC4 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C05EAC6 mov #imm,Rn */
	UPD(0x0C05EAC8u, 1);
L_0C05EAC8: BLKS(0x0C05EAC8u);
	W32(r14 + 0x4u, r3); UPD(0x0C05EACAu, 1);  /* 0C05EAC8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r3); UPD(0x0C05EACCu, 1);  /* 0C05EACA mov.l Rm,@(disp,Rn) */
L_0C05EACC: BLKS(0x0C05EACCu);
	r8 = 0x9C0u; UPD(0x0C05EACEu, 1);  /* 0C05EACC mov.w @(disp,pc),Rn */
	IF(0x0C05EACEu); MACL = r12 * r8;  /* 0C05EACE mul.l Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C05EAD2u, 3);  /* 0C05EAD0 mov.l @(disp,Rm),Rn */
	IF(0x0C05EAD2u); r3 = MACL;  /* 0C05EAD2 sts macl,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C05EAD6u, 2);  /* 0C05EAD4 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C05EAD6 add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C05EADAu, 2);  /* 0C05EAD8 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C05EADA add Rm,Rn */
	IF(0x0C05EADCu); r5 = R32(r0 + r6); UPD(0x0C05EADEu, 2);  /* 0C05EADC mov.l @(r0,Rm),Rn */
	r4 = 0x8000000u; UPD(0x0C05EAE0u, 1);  /* 0C05EADE mov.l @(disp,pc),Rn */
	T = (r5 & r4) == 0;  /* 0C05EAE0 tst Rm,Rn */
	{ u32 c_ = !T; r13 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05EAEAu, 4); goto L_0C05EAEA; } UPD(0x0C05EAE6u, 1); goto L_0C05EAE6; }  /* 0C05EAE2 bf/s */
L_0C05EAE6: BLKS(0x0C05EAE6u);
	{ IF(0x0C05EAE8u); ; /* slot nop */ UPD(0x0C05EBEAu, 3); goto L_0C05EBEA; }  /* 0C05EAE6 bra */
L_0C05EAEA: BLKS(0x0C05EAEAu);
	r9 = R32(r14 + 0xCu); UPD(0x0C05EAECu, 1);  /* 0C05EAEA mov.l @(disp,Rm),Rn */
	r5 = r0;  /* 0C05EAEC mov Rm,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C05EAF0u, 2);  /* 0C05EAEE mov.l @(disp,Rm),Rn */
	r3 += r9;  /* 0C05EAF0 add Rm,Rn */
	r3 += r8;  /* 0C05EAF2 add Rm,Rn */
	r5 += r3;  /* 0C05EAF4 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C05EAF8u, 4);  /* 0C05EAF6 mov.l @(disp,Rm),Rn */
	r11 = 0x3u;  /* 0C05EAF8 mov #imm,Rn */
	IF(0x0C05EAFAu); ARG0(0x40BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05EAFA shld Rm,Rn */
	r7 = 0xC16BEACu; UPD(0x0C05EAFEu, 3);  /* 0C05EAFC mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C05EAFE mov #imm,Rn */
	IF(0x0C05EB00u); r1 = R32(r0 + r7); UPD(0x0C05EB02u, 2);  /* 0C05EB00 mov.l @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C05EB02 mov #imm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C05EB06u, 2);  /* 0C05EB04 mov.l @(disp,Rm),Rn */
	r13 = R32(r5 + 0xCu); UPD(0x0C05EB08u, 1);  /* 0C05EB06 mov.l @(disp,Rm),Rn */
	IF(0x0C05EB08u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05EB08 shld Rm,Rn */
	IF(0x0C05EB0Au); ARG0(0x4D4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C05EB0A shld Rm,Rn */
	IF(0x0C05EB0Cu); r2 = R32(r0 + r1); UPD(0x0C05EB0Eu, 3);  /* 0C05EB0C mov.l @(r0,Rm),Rn */
	r13 += r2;  /* 0C05EB0E add Rm,Rn */
	r11 = R32(r13 + 0x4u); UPD(0x0C05EB12u, 2);  /* 0C05EB10 mov.l @(disp,Rm),Rn */
	r10 = 0xC392DE8u; UPD(0x0C05EB14u, 1);  /* 0C05EB12 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C05EB16u, 1);  /* 0C05EB14 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C05EB16 tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EBE8u, 4); goto L_0C05EBE8; } UPD(0x0C05EB1Cu, 1); goto L_0C05EB1C; }  /* 0C05EB18 bt/s */
L_0C05EB1C: BLKS(0x0C05EB1Cu);
	r13 = 0xC21F8A0u; UPD(0x0C05EB1Eu, 1);  /* 0C05EB1C mov.l @(disp,pc),Rn */
	r13 += r3;  /* 0C05EB1E add Rm,Rn */
	UPD(0x0C05EB20u, 1);
L_0C05EB20: BLKS(0x0C05EB20u);
	{ u32 v_ = R32(r11); r11 += 4; r1 = v_; } UPD(0x0C05EB22u, 1);  /* 0C05EB20 mov.l @Rm+,Rn */
	r6 = 0xC2852C4u; UPD(0x0C05EB24u, 1);  /* 0C05EB22 mov.l @(disp,pc),Rn */
	W32(r6, r1); UPD(0x0C05EB26u, 1);  /* 0C05EB24 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C05EB28u, 1);  /* 0C05EB26 mov.l @Rm+,Rn */
	r5 = R32(r13 + 0x10u); UPD(0x0C05EB2Au, 1);  /* 0C05EB28 mov.l @(disp,Rm),Rn */
	r4 = 0xC286738u; UPD(0x0C05EB2Cu, 1);  /* 0C05EB2A mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C05EB2C add Rm,Rn */
	W32(r4, r5); UPD(0x0C05EB30u, 2);  /* 0C05EB2E mov.l Rm,@Rn */
	r3 = R32(r13 + 0x14u); UPD(0x0C05EB32u, 1);  /* 0C05EB30 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C05EB34u, 1);  /* 0C05EB32 mov.l @Rm+,Rn */
	r0 = 0xC27DDB0u; UPD(0x0C05EB36u, 1);  /* 0C05EB34 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C05EB36 add Rm,Rn */
	W32(r0, r3); UPD(0x0C05EB3Au, 2);  /* 0C05EB38 mov.l Rm,@Rn */
	r9 = 0xBFu; UPD(0x0C05EB3Cu, 1);  /* 0C05EB3A mov.w @(disp,pc),Rn */
	r0 = 0x864Cu; UPD(0x0C05EB3Eu, 1);  /* 0C05EB3C mov.l @(disp,pc),Rn */
	IF(0x0C05EB3Eu); ;  /* 0C05EB3E nop */
	UPD(0x0C05EB40u, 1);
L_0C05EB40: BLKS(0x0C05EB40u);
	r4 = 0xC26CD40u; UPD(0x0C05EB42u, 1);  /* 0C05EB40 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C05EB42 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C05EB46u, 2);  /* 0C05EB44 mov.l @Rm,Rn */
	r7 = 0x2000000u; UPD(0x0C05EB48u, 1);  /* 0C05EB46 mov.l @(disp,pc),Rn */
	T = (r8 & r7) == 0;  /* 0C05EB48 tst Rm,Rn */
	{ u32 c_ = T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05EBD2u, 4); goto L_0C05EBD2; } goto L_0C05EB4E; }  /* 0C05EB4A bt/s */
L_0C05EB4E: BLKS(0x0C05EB4Eu);
	r7 = 0xA8u; UPD(0x0C05EB50u, 2);  /* 0C05EB4E mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C05EB50 add Rm,Rn */
	r2 = r7;  /* 0C05EB52 mov Rm,Rn */
	r2 += 0x3u;  /* 0C05EB54 add #imm,Rn */
	r7 += 0x1u;  /* 0C05EB56 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05EB5Au, 5);  /* 0C05EB58 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C05EB5Cu, 1);  /* 0C05EB5A mov.b @Rm,Rn */
	r10 = r6 & 0xFF;  /* 0C05EB5C extu.b Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C05EB5E extu.b Rm,Rn */
	T = r10 >= r3;  /* 0C05EB60 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05EBD2u, 6); goto L_0C05EBD2; } goto L_0C05EB66; }  /* 0C05EB62 bf/s */
L_0C05EB66: BLKS(0x0C05EB66u);
	r3 = R32(r4 + 0x1Cu); UPD(0x0C05EB68u, 2);  /* 0C05EB66 mov.l @(disp,Rm),Rn */
	r10 = 0xC275578u; UPD(0x0C05EB6Au, 1);  /* 0C05EB68 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r8 = v_; } UPD(0x0C05EB6Cu, 1);  /* 0C05EB6A mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C05EB6C tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EBD0u, 4); goto L_0C05EBD0; } UPD(0x0C05EB72u, 1); goto L_0C05EB72; }  /* 0C05EB6E bt/s */
L_0C05EB72: BLKS(0x0C05EB72u);
	r8 = r4;  /* 0C05EB72 mov Rm,Rn */
	r4 += 0x44u;  /* 0C05EB74 add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C05EB78u, 3);  /* 0C05EB76 mov.l Rm,@(disp,Rn) */
L_0C05EB78: BLKS(0x0C05EB78u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05EB7Au, 1);  /* 0C05EB78 mov.l @Rm+,Rn */
	r10 = 0xC27DC44u; UPD(0x0C05EB7Cu, 1);  /* 0C05EB7A mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C05EB7Eu, 1);  /* 0C05EB7C mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C05EB80u, 1);  /* 0C05EB7E mov.l @Rm+,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C05EB82u, 1);  /* 0C05EB80 mov.l @(disp,Rm),Rn */
	r6 = 0xC3867F8u; UPD(0x0C05EB84u, 1);  /* 0C05EB82 mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C05EB84 add Rm,Rn */
	W32(r6, r10); UPD(0x0C05EB88u, 2);  /* 0C05EB86 mov.l Rm,@Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C05EB8Au, 1);  /* 0C05EB88 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C05EB8Cu, 1);  /* 0C05EB8A mov.l @Rm+,Rn */
	r7 = 0xC3929BCu; UPD(0x0C05EB8Eu, 1);  /* 0C05EB8C mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C05EB8E add Rm,Rn */
	W32(r7, r6); UPD(0x0C05EB92u, 2);  /* 0C05EB90 mov.l Rm,@Rn */
	r2 = 0xC286738u; UPD(0x0C05EB94u, 1);  /* 0C05EB92 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C05EB96u, 1);  /* 0C05EB94 mov.l @Rm,Rn */
	r7 -= r10;  /* 0C05EB96 sub Rm,Rn */
	IF(0x0C05EB98u); T = (s32)r7 >= 0;  /* 0C05EB98 cmp/pz Rn */
	if (T) { UPD(0x0C05EB9Eu, 5); goto L_0C05EB9E; }  /* 0C05EB9A bt */
L_0C05EB9C: BLKS(0x0C05EB9Cu);
	r7 = 0u - r7;  /* 0C05EB9C neg Rm,Rn */
	UPD(0x0C05EB9Eu, 1);
L_0C05EB9E: BLKS(0x0C05EB9Eu);
	r10 = 0xC275578u; UPD(0x0C05EBA0u, 1);  /* 0C05EB9E mov.l @(disp,pc),Rn */
	r1 = 0xC392DE8u; UPD(0x0C05EBA2u, 1);  /* 0C05EBA0 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C05EBA4u, 1);  /* 0C05EBA2 mov.l @Rm,Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C05EBA6u, 1);  /* 0C05EBA4 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C05EBA8u, 1);  /* 0C05EBA6 mov.l @Rm,Rn */
	r2 &= r4;  /* 0C05EBA8 and Rm,Rn */
	r1 += r2;  /* 0C05EBAA add Rm,Rn */
	T = (s32)r7 >= (s32)r1;  /* 0C05EBAC cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05EBC6u, 6); goto L_0C05EBC6; }  /* 0C05EBAE bt */
L_0C05EBB0: BLKS(0x0C05EBB0u);
	r7 = 0xC27DDB0u; UPD(0x0C05EBB2u, 1);  /* 0C05EBB0 mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C05EBB4u, 1);  /* 0C05EBB2 mov.l @Rm,Rn */
	r2 -= r6;  /* 0C05EBB4 sub Rm,Rn */
	IF(0x0C05EBB6u); T = (s32)r2 >= 0;  /* 0C05EBB6 cmp/pz Rn */
	if (T) { UPD(0x0C05EBBCu, 5); goto L_0C05EBBC; }  /* 0C05EBB8 bt */
L_0C05EBBA: BLKS(0x0C05EBBAu);
	r2 = 0u - r2;  /* 0C05EBBA neg Rm,Rn */
	UPD(0x0C05EBBCu, 1);
L_0C05EBBC: BLKS(0x0C05EBBCu);
	r7 = 0xC2852C4u; UPD(0x0C05EBBEu, 1);  /* 0C05EBBC mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C05EBC0u, 1);  /* 0C05EBBE mov.l @Rm,Rn */
	r6 += r5;  /* 0C05EBC0 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C05EBC2 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C05EC80u, 5); goto L_0C05EC80; }  /* 0C05EBC4 bf */
L_0C05EBC6: BLKS(0x0C05EBC6u);
	{ u32 v_ = R32(r3); r3 += 4; r10 = v_; } UPD(0x0C05EBC8u, 1);  /* 0C05EBC6 mov.l @Rm+,Rn */
	r5 = 0xC275578u; UPD(0x0C05EBCAu, 1);  /* 0C05EBC8 mov.l @(disp,pc),Rn */
	T = (r10 & r10) == 0;  /* 0C05EBCA tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EB78u, 4); goto L_0C05EB78; } UPD(0x0C05EBD0u, 1); goto L_0C05EBD0; }  /* 0C05EBCC bf/s */
L_0C05EBD0: BLKS(0x0C05EBD0u);
	r3 = r9;  /* 0C05EBD0 mov Rm,Rn */
	UPD(0x0C05EBD2u, 1);
L_0C05EBD2: BLKS(0x0C05EBD2u);
	r9 = 0xFFFFFF4Cu; UPD(0x0C05EBD4u, 1);  /* 0C05EBD2 mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C05EBD4 add #imm,Rn */
	r0 += r9;  /* 0C05EBD6 add Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C05EBD8 exts.w Rm,Rn */
	IF(0x0C05EBDAu); T = (s32)r9 >= 0;  /* 0C05EBDA cmp/pz Rn */
	if (T) { UPD(0x0C05EB40u, 7); goto L_0C05EB40; }  /* 0C05EBDC bt */
L_0C05EBDE: BLKS(0x0C05EBDEu);
	{ u32 v_ = R32(r11); r11 += 4; r4 = v_; } UPD(0x0C05EBE0u, 1);  /* 0C05EBDE mov.l @Rm+,Rn */
	r2 = 0xC392DE8u; UPD(0x0C05EBE2u, 1);  /* 0C05EBE0 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C05EBE2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EB20u, 4); goto L_0C05EB20; } UPD(0x0C05EBE8u, 1); goto L_0C05EBE8; }  /* 0C05EBE4 bf/s */
L_0C05EBE8: BLKS(0x0C05EBE8u);
	r13 = R32(r14 + 0x4u); UPD(0x0C05EBEAu, 1);  /* 0C05EBE8 mov.l @(disp,Rm),Rn */
L_0C05EBEA: BLKS(0x0C05EBEAu);
	r11 = 0xFu;  /* 0C05EBEA mov #imm,Rn */
	r13 += 0x1u;  /* 0C05EBEC add #imm,Rn */
	r7 = (u32)(s32)(s16)r13;  /* 0C05EBEE exts.w Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C05EBF2u, 4);  /* 0C05EBF0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C05EBF4u, 1);  /* 0C05EBF2 mov.l Rm,@(disp,Rn) */
	r0 += 0x34u;  /* 0C05EBF4 add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C05EBF8u, 2);  /* 0C05EBF6 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r11;  /* 0C05EBF8 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05EC02u, 4); goto L_0C05EC02; } UPD(0x0C05EBFEu, 1); goto L_0C05EBFE; }  /* 0C05EBFA bt/s */
L_0C05EBFE: BLKS(0x0C05EBFEu);
	{ IF(0x0C05EC00u); ; /* slot nop */ UPD(0x0C05EACCu, 3); goto L_0C05EACC; }  /* 0C05EBFE bra */
L_0C05EC02: BLKS(0x0C05EC02u);
	r5 = R32(r14); UPD(0x0C05EC04u, 1);  /* 0C05EC02 mov.l @Rm,Rn */
	r8 = 0x2u;  /* 0C05EC04 mov #imm,Rn */
	r5 += 0x1u;  /* 0C05EC06 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C05EC08 exts.w Rm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C05EC0Cu, 4);  /* 0C05EC0A mov.l @(disp,Rm),Rn */
	r9 = 0x340u; UPD(0x0C05EC0Eu, 1);  /* 0C05EC0C mov.w @(disp,pc),Rn */
	W32(r14, r10); UPD(0x0C05EC10u, 1);  /* 0C05EC0E mov.l Rm,@Rn */
	r3 += r9;  /* 0C05EC10 add Rm,Rn */
	r6 = R32(r14); UPD(0x0C05EC14u, 2);  /* 0C05EC12 mov.l @Rm,Rn */
	T = (s32)r6 > (s32)r8;  /* 0C05EC14 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05EC1Eu, 4); goto L_0C05EC1E; } UPD(0x0C05EC1Au, 1); goto L_0C05EC1A; }  /* 0C05EC16 bt/s */
L_0C05EC1A: BLKS(0x0C05EC1Au);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05EAC8u, 3); goto L_0C05EAC8; }  /* 0C05EC1A bra */
L_0C05EC1E: BLKS(0x0C05EC1Eu);
	r14 += 0x14u;  /* 0C05EC1E add #imm,Rn */
	r15 = r14;  /* 0C05EC20 mov Rm,Rn */
	IF(0x0C05EC22u); PR = R32(r15); r15 += 4; UPD(0x0C05EC24u, 3);  /* 0C05EC22 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05EC26u, 1);  /* 0C05EC24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05EC28u, 1);  /* 0C05EC26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05EC2Au, 1);  /* 0C05EC28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05EC2Cu, 1);  /* 0C05EC2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05EC2Eu, 1);  /* 0C05EC2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05EC30u, 1);  /* 0C05EC2E mov.l @Rm+,Rn */
	IF(0x0C05EC30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05EC30 rts */
L_0C05EC80: BLKS(0x0C05EC80u);
	r11 = 0x280u; UPD(0x0C05EC82u, 1);  /* 0C05EC80 mov.w @(disp,pc),Rn */
	IF(0x0C05EC82u); MACL = r12 * r11;  /* 0C05EC82 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C05EC86u, 3);  /* 0C05EC84 mov.l @(disp,pc),Rn */
	IF(0x0C05EC86u); r11 = MACL;  /* 0C05EC86 sts macl,Rn */
	r6 = 0x270u; UPD(0x0C05EC8Au, 2);  /* 0C05EC88 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C05EC8A add Rm,Rn */
	r11 += r6;  /* 0C05EC8C add Rm,Rn */
	r0 = R32(r11); UPD(0x0C05EC90u, 3);  /* 0C05EC8E mov.l @Rm,Rn */
	r0 += 0xAu;  /* 0C05EC90 add #imm,Rn */
	W32(r11, r0); UPD(0x0C05EC94u, 2);  /* 0C05EC92 mov.l Rm,@Rn */
	r13 = 0xC065C30u; UPD(0x0C05EC96u, 1);  /* 0C05EC94 mov.l @(disp,pc),Rn */
	r7 = R32(r8); UPD(0x0C05EC98u, 1);  /* 0C05EC96 mov.l @Rm,Rn */
	r7 |= r4;  /* 0C05EC98 or Rm,Rn */
	r4 = r12;  /* 0C05EC9A mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C05EC9Eu, 3);  /* 0C05EC9C mov.l @Rm,Rn */
	IF(0x0C05EC9Eu); { u32 t_ = r13; PR = 0x0C05ECA2u; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065C30, 0x0C065C30u, 0x0C05ECA2u); }  /* 0C05EC9E jsr @Rn */
L_0C05ECA2: BLKS(0x0C05ECA2u);
	r13 = 0x9C0u; UPD(0x0C05ECA4u, 1);  /* 0C05ECA2 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C05ECA4 add #imm,Rn */
	IF(0x0C05ECA6u); MACL = r12 * r13;  /* 0C05ECA6 mul.l Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C05ECAAu, 4);  /* 0C05ECA8 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C05ECACu, 1);  /* 0C05ECAA mov.l @(disp,Rm),Rn */
	IF(0x0C05ECACu); r13 = MACL;  /* 0C05ECAC sts macl,Rn */
	r2 = 0xC21F8A0u; UPD(0x0C05ECB0u, 2);  /* 0C05ECAE mov.l @(disp,pc),Rn */
	r6 += r13;  /* 0C05ECB0 add Rm,Rn */
	r6 += r7;  /* 0C05ECB2 add Rm,Rn */
	r6 += r2;  /* 0C05ECB4 add Rm,Rn */
	r6 += 0x2Cu;  /* 0C05ECB6 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C05ECBAu, 5);  /* 0C05ECB8 mov.w @Rm,Rn */
	r7 = 0x8u;  /* 0C05ECBA mov #imm,Rn */
	r3 = 0x1C0u; UPD(0x0C05ECBEu, 2);  /* 0C05ECBC mov.w @(disp,pc),Rn */
	r5 = r4 & 0xFFFF;  /* 0C05ECBE extu.w Rm,Rn */
	W32(r15, r5); UPD(0x0C05ECC2u, 2);  /* 0C05ECC0 mov.l Rm,@Rn */
	r6 += 0xFFFFFFD4u;  /* 0C05ECC2 add #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C05ECC6u, 2);  /* 0C05ECC4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB100u; UPD(0x0C05ECC8u, 1);  /* 0C05ECC6 mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0x10u); UPD(0x0C05ECCAu, 1);  /* 0C05ECC8 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x14u); UPD(0x0C05ECCCu, 1);  /* 0C05ECCA mov.l @(disp,Rm),Rn */
	IF(0x0C05ECCCu); { u32 t_ = r0; PR = 0x0C05ECD0u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB100, 0x0C0AB100u, 0x0C05ECD0u); }  /* 0C05ECCC jsr @Rn */
L_0C05ECD0: BLKS(0x0C05ECD0u);
	r1 = R32(r10); UPD(0x0C05ECD2u, 1);  /* 0C05ECD0 mov.l @Rm,Rn */
	r0 = 0x20000000u; UPD(0x0C05ECD4u, 1);  /* 0C05ECD2 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05ECD4 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05ED12u, 4); goto L_0C05ED12; } goto L_0C05ECDA; }  /* 0C05ECD6 bf/s */
L_0C05ECDA: BLKS(0x0C05ECDAu);
	r1 = R32(r8); UPD(0x0C05ECDCu, 2);  /* 0C05ECDA mov.l @Rm,Rn */
	r10 = 0x20020000u; UPD(0x0C05ECDEu, 1);  /* 0C05ECDC mov.l @(disp,pc),Rn */
	T = (r1 & r10) == 0;  /* 0C05ECDE tst Rm,Rn */
	if (!T) { UPD(0x0C05ED12u, 4); goto L_0C05ED12; }  /* 0C05ECE0 bf */
L_0C05ECE2: BLKS(0x0C05ECE2u);
	r2 = R32(r14 + 0x10u); UPD(0x0C05ECE4u, 1);  /* 0C05ECE2 mov.l @(disp,Rm),Rn */
	r10 = r13;  /* 0C05ECE4 mov Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C05ECE8u, 2);  /* 0C05ECE6 mov.l @(disp,Rm),Rn */
	r10 += r2;  /* 0C05ECE8 add Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C05ECECu, 2);  /* 0C05ECEA mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C05ECEC add Rm,Rn */
	r10 += r5;  /* 0C05ECEE add Rm,Rn */
	r5 = r9;  /* 0C05ECF0 mov Rm,Rn */
	r9 = 0xC0A0730u; UPD(0x0C05ECF4u, 4);  /* 0C05ECF2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C05ECF4 mov Rm,Rn */
	r6 = R32(r10); UPD(0x0C05ECF8u, 2);  /* 0C05ECF6 mov.l @Rm,Rn */
	IF(0x0C05ECF8u); { u32 t_ = r9; PR = 0x0C05ECFCu; r7 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0730, 0x0C0A0730u, 0x0C05ECFCu); }  /* 0C05ECF8 jsr @Rn */
L_0C05ECFC: BLKS(0x0C05ECFCu);
	T = (r0 & r0) == 0;  /* 0C05ECFC tst Rm,Rn */
	if (T) { UPD(0x0C05ED12u, 4); goto L_0C05ED12; }  /* 0C05ECFE bt */
L_0C05ED00: BLKS(0x0C05ED00u);
	r13 = R32(r10); UPD(0x0C05ED02u, 1);  /* 0C05ED00 mov.l @Rm,Rn */
	r7 = 0x800000u; UPD(0x0C05ED04u, 1);  /* 0C05ED02 mov.l @(disp,pc),Rn */
	T = (r13 & r7) == 0;  /* 0C05ED04 tst Rm,Rn */
	if (!T) { UPD(0x0C05ED20u, 4); goto L_0C05ED20; }  /* 0C05ED06 bf */
L_0C05ED08: BLKS(0x0C05ED08u);
	r8 += 0x40u;  /* 0C05ED08 add #imm,Rn */
	r1 = R32(r11); UPD(0x0C05ED0Cu, 2);  /* 0C05ED0A mov.l @Rm,Rn */
	r0 = R32(r8); UPD(0x0C05ED0Eu, 1);  /* 0C05ED0C mov.l @Rm,Rn */
	r1 += r0;  /* 0C05ED0E add Rm,Rn */
	UPD(0x0C05ED10u, 1);
L_0C05ED10: BLKS(0x0C05ED10u);
	W32(r11, r1); UPD(0x0C05ED12u, 1);  /* 0C05ED10 mov.l Rm,@Rn */
L_0C05ED12: BLKS(0x0C05ED12u);
	{ r13 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C05EBEAu, 3); goto L_0C05EBEA; }  /* 0C05ED12 bra */
L_0C05ED20: BLKS(0x0C05ED20u);
	r8 += 0x40u;  /* 0C05ED20 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C05ED24u, 2);  /* 0C05ED22 mov.l @Rm,Rn */
	r8 = 0xC0588A0u; UPD(0x0C05ED26u, 1);  /* 0C05ED24 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C05ED28u, 1);  /* 0C05ED26 mov.l @(disp,Rm),Rn */
	IF(0x0C05ED28u); { u32 t_ = r8; PR = 0x0C05ED2Cu; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0588A0, 0x0C0588A0u, 0x0C05ED2Cu); }  /* 0C05ED28 jsr @Rn */
L_0C05ED2C: BLKS(0x0C05ED2Cu);
	r1 = R32(r11); UPD(0x0C05ED2Eu, 1);  /* 0C05ED2C mov.l @Rm,Rn */
	{ r1 += r0; /* slot add Rm,Rn */ UPD(0x0C05ED10u, 3); goto L_0C05ED10; }  /* 0C05ED2E bra */
}

/* FUN_0c05ed70 */
void f_0C05ED70(sh3_t *c)
{
	LOCALS;
L_0C05ED70: BLKS(0x0C05ED70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED72u, 1);  /* 0C05ED70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED74u, 1);  /* 0C05ED72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED76u, 1);  /* 0C05ED74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED78u, 1);  /* 0C05ED76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED7Au, 1);  /* 0C05ED78 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED7Cu, 1);  /* 0C05ED7A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05ED7Eu, 1);  /* 0C05ED7C mov.l Rm,@-Rn */
	r0 = 0xC21F882u; UPD(0x0C05ED80u, 1);  /* 0C05ED7E mov.l @(disp,pc),Rn */
	IF(0x0C05ED80u); r15 -= 4; W32(r15, PR); UPD(0x0C05ED82u, 1);  /* 0C05ED80 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C05ED84u, 1);  /* 0C05ED82 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C05ED84 add #imm,Rn */
	r0 = r2;  /* 0C05ED86 mov Rm,Rn */
	r14 = r15;  /* 0C05ED88 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05ED8A and #imm,r0 */
	W32(r14, r0); UPD(0x0C05ED8Eu, 5);  /* 0C05ED8C mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C05ED8E mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C05ED92u, 2);  /* 0C05ED90 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C05ED94u, 1);  /* 0C05ED92 mov.l Rm,@(disp,Rn) */
L_0C05ED94: BLKS(0x0C05ED94u);
	r3 = 0x2800u; UPD(0x0C05ED96u, 1);  /* 0C05ED94 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C05ED98u, 1);  /* 0C05ED96 mov.l @Rm,Rn */
	IF(0x0C05ED98u); MACL = r7 * r3;  /* 0C05ED98 mul.l Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C05ED9Cu, 3);  /* 0C05ED9A mov.l @(disp,Rm),Rn */
	r5 = 0xC217A04u; UPD(0x0C05ED9Eu, 1);  /* 0C05ED9C mov.l @(disp,pc),Rn */
	IF(0x0C05ED9Eu); r3 = MACL;  /* 0C05ED9E sts macl,Rn */
	r3 += r6;  /* 0C05EDA0 add Rm,Rn */
	r3 += r5;  /* 0C05EDA2 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05EDA6u, 4);  /* 0C05EDA4 mov.l @Rm,Rn */
	r4 = 0x8000000u; UPD(0x0C05EDA8u, 1);  /* 0C05EDA6 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C05EDA8 tst Rm,Rn */
	{ u32 c_ = T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05EE2Eu, 4); goto L_0C05EE2E; } UPD(0x0C05EDAEu, 1); goto L_0C05EDAE; }  /* 0C05EDAA bt/s */
L_0C05EDAE: BLKS(0x0C05EDAEu);
	r11 = R32(r3 + 0x1Cu); UPD(0x0C05EDB0u, 1);  /* 0C05EDAE mov.l @(disp,Rm),Rn */
	r10 = r11;  /* 0C05EDB0 mov Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C05EDB4u, 2);  /* 0C05EDB2 mov.l @Rm+,Rn */
	r9 = 0xC21E0FCu; UPD(0x0C05EDB6u, 1);  /* 0C05EDB4 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C05EDB6 tst Rm,Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C05EDBAu, 2);  /* 0C05EDB8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EE2Cu, 3); goto L_0C05EE2C; } UPD(0x0C05EDBEu, 1); goto L_0C05EDBE; }  /* 0C05EDBA bt/s */
L_0C05EDBE: BLKS(0x0C05EDBEu);
	r13 = R32(r14 + 0x8u); UPD(0x0C05EDC0u, 1);  /* 0C05EDBE mov.l @(disp,Rm),Rn */
	r10 = R32(r14); UPD(0x0C05EDC2u, 1);  /* 0C05EDC0 mov.l @Rm,Rn */
	r9 = 0x2800u; UPD(0x0C05EDC4u, 1);  /* 0C05EDC2 mov.w @(disp,pc),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r12 = v_; } UPD(0x0C05EDC6u, 1);  /* 0C05EDC4 mov.l @Rm+,Rn */
	IF(0x0C05EDC6u); MACL = r10 * r9;  /* 0C05EDC6 mul.l Rm,Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C05EDCAu, 3);  /* 0C05EDC8 mov.l Rm,@(disp,Rn) */
	r11 = 0xC2859A4u; UPD(0x0C05EDCCu, 1);  /* 0C05EDCA mov.l @(disp,pc),Rn */
	IF(0x0C05EDCCu); r13 = MACL;  /* 0C05EDCC sts macl,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C05EDD0u, 2);  /* 0C05EDCE mov.l @(disp,Rm),Rn */
	r1 = 0xC217A04u; UPD(0x0C05EDD2u, 1);  /* 0C05EDD0 mov.l @(disp,pc),Rn */
	r13 += r8;  /* 0C05EDD2 add Rm,Rn */
	W32(r11, r12); UPD(0x0C05EDD6u, 2);  /* 0C05EDD4 mov.l Rm,@Rn */
	r13 += r1;  /* 0C05EDD6 add Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C05EDDAu, 2);  /* 0C05EDD8 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x24u); UPD(0x0C05EDDCu, 1);  /* 0C05EDDA mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r7 = v_; } UPD(0x0C05EDDEu, 1);  /* 0C05EDDC mov.l @Rm+,Rn */
	r6 = 0xC220C54u; UPD(0x0C05EDE0u, 1);  /* 0C05EDDE mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C05EDE0 add Rm,Rn */
	W32(r6, r3); UPD(0x0C05EDE4u, 2);  /* 0C05EDE2 mov.l Rm,@Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C05EDE6u, 1);  /* 0C05EDE4 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r2 = v_; } UPD(0x0C05EDE8u, 1);  /* 0C05EDE6 mov.l @Rm+,Rn */
	r0 = 0xC220C58u; UPD(0x0C05EDEAu, 1);  /* 0C05EDE8 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C05EDEA add Rm,Rn */
	W32(r0, r4); UPD(0x0C05EDEEu, 2);  /* 0C05EDEC mov.l Rm,@Rn */
	r0 = R32(r13); UPD(0x0C05EDF0u, 1);  /* 0C05EDEE mov.l @Rm,Rn */
	IF(0x0C05EDF0u); r0 >>= 8;  /* 0C05EDF0 shlr8 Rn */
	r0 += r0;  /* 0C05EDF2 add Rm,Rn */
	IF(0x0C05EDF4u); r0 >>= 8;  /* 0C05EDF4 shlr8 Rn */
	r12 = 0xC162C90u; UPD(0x0C05EDF8u, 4);  /* 0C05EDF6 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C05EDF8 and #imm,r0 */
	IF(0x0C05EDFAu); r0 <<= 2;  /* 0C05EDFA shll2 Rn */
	IF(0x0C05EDFCu); r13 = R32(r0 + r12); UPD(0x0C05EDFEu, 3);  /* 0C05EDFC mov.l @(r0,Rm),Rn */
	r11 = 0xBFu; UPD(0x0C05EE00u, 1);  /* 0C05EDFE mov.w @(disp,pc),Rn */
	r12 = 0x864Cu; UPD(0x0C05EE02u, 1);  /* 0C05EE00 mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C05EE04u, 1);  /* 0C05EE02 mov.l Rm,@(disp,Rn) */
L_0C05EE04: BLKS(0x0C05EE04u);
	r7 = 0xC26CD40u; UPD(0x0C05EE06u, 1);  /* 0C05EE04 mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C05EE06 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C05EE0Au, 2);  /* 0C05EE08 mov.l @Rm,Rn */
	r0 &= r13;  /* 0C05EE0A and Rm,Rn */
	T = r0 == r13;  /* 0C05EE0C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C05EE90u, 5); goto L_0C05EE90; }  /* 0C05EE0E bt */
L_0C05EE10: BLKS(0x0C05EE10u);
	r8 = r11;  /* 0C05EE10 mov Rm,Rn */
	UPD(0x0C05EE12u, 1);
L_0C05EE12: BLKS(0x0C05EE12u);
	r11 = 0xFFFFFF4Cu; UPD(0x0C05EE14u, 1);  /* 0C05EE12 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C05EE14 add #imm,Rn */
	r12 += r11;  /* 0C05EE16 add Rm,Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C05EE18 exts.w Rm,Rn */
	IF(0x0C05EE1Au); T = (s32)r11 >= 0;  /* 0C05EE1A cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05EE04u, 7); goto L_0C05EE04; } UPD(0x0C05EE20u, 1); goto L_0C05EE20; }  /* 0C05EE1C bt/s */
L_0C05EE20: BLKS(0x0C05EE20u);
	r13 = 0xC21E0FCu; UPD(0x0C05EE22u, 1);  /* 0C05EE20 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r12 = v_; } UPD(0x0C05EE24u, 1);  /* 0C05EE22 mov.l @Rm+,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C05EE26u, 1);  /* 0C05EE24 mov.l Rm,@(disp,Rn) */
	T = (r12 & r12) == 0;  /* 0C05EE26 tst Rm,Rn */
	{ u32 c_ = !T; W32(r13, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EDBEu, 4); goto L_0C05EDBE; } UPD(0x0C05EE2Cu, 1); goto L_0C05EE2C; }  /* 0C05EE28 bf/s */
L_0C05EE2C: BLKS(0x0C05EE2Cu);
	r7 = R32(r14 + 0x4u); UPD(0x0C05EE2Eu, 1);  /* 0C05EE2C mov.l @(disp,Rm),Rn */
L_0C05EE2E: BLKS(0x0C05EE2Eu);
	r4 = 0x7Fu;  /* 0C05EE2E mov #imm,Rn */
	r7 += 0x1u;  /* 0C05EE30 add #imm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C05EE32 exts.w Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C05EE36u, 4);  /* 0C05EE34 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C05EE38u, 1);  /* 0C05EE36 mov.l Rm,@(disp,Rn) */
	r0 += 0x50u;  /* 0C05EE38 add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C05EE3Cu, 2);  /* 0C05EE3A mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C05EE3C cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05ED94u, 4); goto L_0C05ED94; } UPD(0x0C05EE42u, 1); goto L_0C05EE42; }  /* 0C05EE3E bf/s */
L_0C05EE42: BLKS(0x0C05EE42u);
	r14 += 0x14u;  /* 0C05EE42 add #imm,Rn */
	r15 = r14;  /* 0C05EE44 mov Rm,Rn */
	IF(0x0C05EE46u); PR = R32(r15); r15 += 4; UPD(0x0C05EE48u, 3);  /* 0C05EE46 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05EE4Au, 1);  /* 0C05EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05EE4Cu, 1);  /* 0C05EE4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05EE4Eu, 1);  /* 0C05EE4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05EE50u, 1);  /* 0C05EE4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05EE52u, 1);  /* 0C05EE50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05EE54u, 1);  /* 0C05EE52 mov.l @Rm+,Rn */
	IF(0x0C05EE54u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05EE54 rts */
L_0C05EE90: BLKS(0x0C05EE90u);
	r3 = 0xA8u; UPD(0x0C05EE92u, 1);  /* 0C05EE90 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C05EE92 add Rm,Rn */
	r2 = r3;  /* 0C05EE94 mov Rm,Rn */
	r2 += 0x3u;  /* 0C05EE96 add #imm,Rn */
	r3 += 0x1u;  /* 0C05EE98 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C05EE9Cu, 5);  /* 0C05EE9A mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C05EE9Eu, 1);  /* 0C05EE9C mov.b @Rm,Rn */
	r5 = r8 & 0xFF;  /* 0C05EE9E extu.b Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C05EEA0 extu.b Rm,Rn */
	T = r5 >= r4;  /* 0C05EEA2 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r8 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05EE12u, 6); goto L_0C05EE12; } goto L_0C05EEA8; }  /* 0C05EEA4 bf/s */
L_0C05EEA8: BLKS(0x0C05EEA8u);
	r8 = R32(r7 + 0x1Cu); UPD(0x0C05EEAAu, 2);  /* 0C05EEA8 mov.l @(disp,Rm),Rn */
	r10 = 0xC275578u; UPD(0x0C05EEACu, 1);  /* 0C05EEAA mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r9 = v_; } UPD(0x0C05EEAEu, 1);  /* 0C05EEAC mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C05EEAE tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EE10u, 4); goto L_0C05EE10; } UPD(0x0C05EEB4u, 1); goto L_0C05EEB4; }  /* 0C05EEB0 bt/s */
L_0C05EEB4: BLKS(0x0C05EEB4u);
	r9 = r7;  /* 0C05EEB4 mov Rm,Rn */
	r7 += 0x44u;  /* 0C05EEB6 add #imm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C05EEBAu, 3);  /* 0C05EEB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C05EEBAu); ;  /* 0C05EEBA nop */
	UPD(0x0C05EEBCu, 1);
L_0C05EEBC: BLKS(0x0C05EEBCu);
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C05EEBEu, 1);  /* 0C05EEBC mov.l @Rm+,Rn */
	r7 = 0xC27DC44u; UPD(0x0C05EEC0u, 1);  /* 0C05EEBE mov.l @(disp,pc),Rn */
	W32(r7, r6); UPD(0x0C05EEC2u, 1);  /* 0C05EEC0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r8); r8 += 4; r10 = v_; } UPD(0x0C05EEC4u, 1);  /* 0C05EEC2 mov.l @Rm+,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C05EEC6u, 1);  /* 0C05EEC4 mov.l @(disp,Rm),Rn */
	r3 = 0xC3867F8u; UPD(0x0C05EEC8u, 1);  /* 0C05EEC6 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C05EEC8 add Rm,Rn */
	W32(r3, r0); UPD(0x0C05EECCu, 2);  /* 0C05EECA mov.l Rm,@Rn */
	r4 = 0xC220C54u; UPD(0x0C05EECEu, 1);  /* 0C05EECC mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C05EED0u, 1);  /* 0C05EECE mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C05EED2u, 1);  /* 0C05EED0 mov.l @Rm+,Rn */
	r5 = 0xC3929BCu; UPD(0x0C05EED4u, 1);  /* 0C05EED2 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C05EED4 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C05EED8u, 2);  /* 0C05EED6 mov.l @Rm,Rn */
	r3 -= r0;  /* 0C05EED8 sub Rm,Rn */
	IF(0x0C05EEDAu); T = (s32)r3 >= 0;  /* 0C05EEDA cmp/pz Rn */
	{ u32 c_ = !T; W32(r5, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EFD0u, 5); goto L_0C05EFD0; } UPD(0x0C05EEE0u, 1); goto L_0C05EEE0; }  /* 0C05EEDC bf/s */
L_0C05EEE0: BLKS(0x0C05EEE0u);
	r10 = 0xC275578u; UPD(0x0C05EEE2u, 1);  /* 0C05EEE0 mov.l @(disp,pc),Rn */
	r2 = 0xC21E0FCu; UPD(0x0C05EEE4u, 1);  /* 0C05EEE2 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C05EEE6u, 1);  /* 0C05EEE4 mov.l @Rm,Rn */
	r5 = 0xFFFFFFFu; UPD(0x0C05EEE8u, 1);  /* 0C05EEE6 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C05EEEAu, 1);  /* 0C05EEE8 mov.l @Rm,Rn */
	r5 &= r0;  /* 0C05EEEA and Rm,Rn */
	r4 += r5;  /* 0C05EEEC add Rm,Rn */
	T = (s32)r3 >= (s32)r4;  /* 0C05EEEE cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05EF6Eu, 6); goto L_0C05EF6E; }  /* 0C05EEF0 bt */
L_0C05EEF2: BLKS(0x0C05EEF2u);
	r3 = 0xC220C58u; UPD(0x0C05EEF4u, 1);  /* 0C05EEF2 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C05EEF6u, 1);  /* 0C05EEF4 mov.l @Rm,Rn */
	r2 -= r7;  /* 0C05EEF6 sub Rm,Rn */
	IF(0x0C05EEF8u); T = (s32)r2 >= 0;  /* 0C05EEF8 cmp/pz Rn */
	if (!T) { UPD(0x0C05EFC0u, 5); goto L_0C05EFC0; }  /* 0C05EEFA bf */
L_0C05EEFC: BLKS(0x0C05EEFCu);
	r4 = 0xC2859A4u; UPD(0x0C05EEFEu, 1);  /* 0C05EEFC mov.l @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C05EF00u, 1);  /* 0C05EEFE mov.l @Rm,Rn */
	r7 += r6;  /* 0C05EF00 add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C05EF02 cmp/ge Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05EF6Eu, 5); goto L_0C05EF6E; } UPD(0x0C05EF08u, 1); goto L_0C05EF08; }  /* 0C05EF04 bt/s */
L_0C05EF08: BLKS(0x0C05EF08u);
	r10 = 0x2800u; UPD(0x0C05EF0Au, 1);  /* 0C05EF08 mov.w @(disp,pc),Rn */
	IF(0x0C05EF0Au); MACL = r2 * r10;  /* 0C05EF0A mul.l Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C05EF0Eu, 3);  /* 0C05EF0C mov.l @(disp,Rm),Rn */
	r6 = 0xC217A04u; UPD(0x0C05EF10u, 1);  /* 0C05EF0E mov.l @(disp,pc),Rn */
	IF(0x0C05EF10u); r10 = MACL;  /* 0C05EF10 sts macl,Rn */
	r10 += r1;  /* 0C05EF12 add Rm,Rn */
	r10 += r6;  /* 0C05EF14 add Rm,Rn */
	r6 = R32(r10); UPD(0x0C05EF18u, 4);  /* 0C05EF16 mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C05EF1Au, 1);  /* 0C05EF18 mov.l @(disp,pc),Rn */
	T = (r6 & r5) == 0;  /* 0C05EF1A tst Rm,Rn */
	if (!T) { UPD(0x0C05EF32u, 4); goto L_0C05EF32; }  /* 0C05EF1C bf */
L_0C05EF1E: BLKS(0x0C05EF1Eu);
	r4 = 0x280u; UPD(0x0C05EF20u, 1);  /* 0C05EF1E mov.w @(disp,pc),Rn */
	IF(0x0C05EF20u); MACL = r2 * r4;  /* 0C05EF20 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C05EF24u, 3);  /* 0C05EF22 mov.l @(disp,pc),Rn */
	IF(0x0C05EF24u); r3 = MACL;  /* 0C05EF24 sts macl,Rn */
	r3 += r5;  /* 0C05EF26 add Rm,Rn */
	r4 += 0xFFFFFFF0u;  /* 0C05EF28 add #imm,Rn */
	r3 += r4;  /* 0C05EF2A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C05EF2Eu, 5);  /* 0C05EF2C mov.l @Rm,Rn */
	r2 += 0xAu;  /* 0C05EF2E add #imm,Rn */
	W32(r3, r2); UPD(0x0C05EF32u, 2);  /* 0C05EF30 mov.l Rm,@Rn */
L_0C05EF32: BLKS(0x0C05EF32u);
	r3 = R32(r9); UPD(0x0C05EF34u, 1);  /* 0C05EF32 mov.l @Rm,Rn */
	r7 = 0x20000000u; UPD(0x0C05EF36u, 1);  /* 0C05EF34 mov.l @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C05EF36 tst Rm,Rn */
	{ u32 c_ = !T; r0 |= r3; /* slot or Rm,Rn */ if (c_) { UPD(0x0C05EF64u, 4); goto L_0C05EF64; } goto L_0C05EF3C; }  /* 0C05EF38 bf/s */
L_0C05EF3C: BLKS(0x0C05EF3Cu);
	r9 += 0x3Cu;  /* 0C05EF3C add #imm,Rn */
	r3 &= r6;  /* 0C05EF3E and Rm,Rn */
	r2 = 0xFFFFFFE3u;  /* 0C05EF40 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C05EF44u, 5);  /* 0C05EF42 mov.w @Rm,Rn */
	IF(0x0C05EF44u); r3 >>= 8;  /* 0C05EF44 shlr8 Rn */
	IF(0x0C05EF46u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05EF46 shad Rm,Rn */
	r3 += r3;  /* 0C05EF48 add Rm,Rn */
	r5 = 0xFu;  /* 0C05EF4A mov #imm,Rn */
	T = (s32)r5 >= (s32)r4;  /* 0C05EF4C cmp/ge Rm,Rn */
	IF(0x0C05EF4Eu); r3 >>= 8;  /* 0C05EF4E shlr8 Rn */
	r7 = 0x1u;  /* 0C05EF50 mov #imm,Rn */
	IF(0x0C05EF52u); r2 = T;  /* 0C05EF52 movt Rn */
	r0 ^= 0x1u;  /* 0C05EF54 xor #imm,r0 */
	r3 &= r7;  /* 0C05EF56 and Rm,Rn */
	r0 &= 0x1u;  /* 0C05EF58 and #imm,r0 */
	r3 &= r2;  /* 0C05EF5A and Rm,Rn */
	r0 |= r3;  /* 0C05EF5C or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05EF5E tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05EF80u, 17); goto L_0C05EF80; } UPD(0x0C05EF64u, 1); goto L_0C05EF64; }  /* 0C05EF60 bf/s */
L_0C05EF64: BLKS(0x0C05EF64u);
	r10 = 0xC06A860u; UPD(0x0C05EF66u, 1);  /* 0C05EF64 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C05EF66 mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C05EF6Au, 2);  /* 0C05EF68 mov.l @Rm,Rn */
	IF(0x0C05EF6Au); { u32 t_ = r10; PR = 0x0C05EF6Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06A860, 0x0C06A860u, 0x0C05EF6Eu); }  /* 0C05EF6A jsr @Rn */
L_0C05EF6E: BLKS(0x0C05EF6Eu);
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C05EF70u, 1);  /* 0C05EF6E mov.l @Rm+,Rn */
	r3 = 0xC275578u; UPD(0x0C05EF72u, 1);  /* 0C05EF70 mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C05EF72 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05EEBCu, 4); goto L_0C05EEBC; } UPD(0x0C05EF78u, 1); goto L_0C05EF78; }  /* 0C05EF74 bf/s */
L_0C05EF78: BLKS(0x0C05EF78u);
	{ r8 = r11; /* slot mov Rm,Rn */ UPD(0x0C05EE12u, 3); goto L_0C05EE12; }  /* 0C05EF78 bra */
L_0C05EF80: BLKS(0x0C05EF80u);
	r0 = 0xC0A0730u; UPD(0x0C05EF82u, 1);  /* 0C05EF80 mov.l @(disp,pc),Rn */
	r10 += 0x38u;  /* 0C05EF82 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C05EF86u, 2);  /* 0C05EF84 mov.w @Rm,Rn */
	r5 = r11;  /* 0C05EF86 mov Rm,Rn */
	IF(0x0C05EF88u); { u32 t_ = r0; PR = 0x0C05EF8Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0730, 0x0C0A0730u, 0x0C05EF8Cu); }  /* 0C05EF88 jsr @Rn */
L_0C05EF8C: BLKS(0x0C05EF8Cu);
	T = (r0 & r0) == 0;  /* 0C05EF8C tst Rm,Rn */
	{ u32 c_ = T; r10 += 0xFFFFFFC8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05EF64u, 4); goto L_0C05EF64; } goto L_0C05EF92; }  /* 0C05EF8E bt/s */
L_0C05EF92: BLKS(0x0C05EF92u);
	r6 = R32(r10); UPD(0x0C05EF94u, 2);  /* 0C05EF92 mov.l @Rm,Rn */
	r0 = 0x8000u; UPD(0x0C05EF96u, 1);  /* 0C05EF94 mov.l @(disp,pc),Rn */
	T = (r6 & r0) == 0;  /* 0C05EF96 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05EF64u, 4); goto L_0C05EF64; } UPD(0x0C05EF9Cu, 1); goto L_0C05EF9C; }  /* 0C05EF98 bf/s */
L_0C05EF9C: BLKS(0x0C05EF9Cu);
	r2 = 0x280u; UPD(0x0C05EF9Eu, 1);  /* 0C05EF9C mov.w @(disp,pc),Rn */
	IF(0x0C05EF9Eu); MACL = r0 * r2;  /* 0C05EF9E mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C05EFA2u, 3);  /* 0C05EFA0 mov.l @(disp,pc),Rn */
	IF(0x0C05EFA2u); r10 = MACL;  /* 0C05EFA2 sts macl,Rn */
	r5 = 0x270u; UPD(0x0C05EFA6u, 2);  /* 0C05EFA4 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C05EFA6 add Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C05EFAAu, 2);  /* 0C05EFA8 mov.l @(disp,Rm),Rn */
	r10 += r5;  /* 0C05EFAA add Rm,Rn */
	r3 = R32(r10); UPD(0x0C05EFAEu, 2);  /* 0C05EFAC mov.l @Rm,Rn */
	r1 = R32(r4); UPD(0x0C05EFB0u, 1);  /* 0C05EFAE mov.l @Rm,Rn */
	r3 += r1;  /* 0C05EFB0 add Rm,Rn */
	{ W32(r10, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C05EF64u, 4); goto L_0C05EF64; }  /* 0C05EFB2 bra */
L_0C05EFC0: BLKS(0x0C05EFC0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C05EEFCu, 3); goto L_0C05EEFC; }  /* 0C05EFC0 bra */
L_0C05EFD0: BLKS(0x0C05EFD0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C05EEE0u, 3); goto L_0C05EEE0; }  /* 0C05EFD0 bra */
}

/* FUN_0c05f020 */
void f_0C05F020(sh3_t *c)
{
	LOCALS;
L_0C05F020: BLKS(0x0C05F020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05F022u, 1);  /* 0C05F020 mov.l Rm,@-Rn */
	r0 = 0x1u;  /* 0C05F022 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05F026u, 2);  /* 0C05F024 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05F028u, 1);  /* 0C05F026 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05F02Au, 1);  /* 0C05F028 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05F02Cu, 1);  /* 0C05F02A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05F02Eu, 1);  /* 0C05F02C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05F030u, 1);  /* 0C05F02E mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C05F030 mov #imm,Rn */
	IF(0x0C05F032u); r15 -= 4; W32(r15, PR); UPD(0x0C05F034u, 2);  /* 0C05F032 sts.l pr,@-Rn */
	r3 = 0xC21F882u; UPD(0x0C05F036u, 1);  /* 0C05F034 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C05F036 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C05F03Au, 2);  /* 0C05F038 mov.w @Rm,Rn */
	r14 = r15;  /* 0C05F03A mov Rm,Rn */
	r11 = r2;  /* 0C05F03C mov Rm,Rn */
	r11 += 0x1u;  /* 0C05F03E add #imm,Rn */
	r11 &= r0;  /* 0C05F040 and Rm,Rn */
	r0 = 0x0u;  /* 0C05F042 mov #imm,Rn */
	W32(r14, r0); UPD(0x0C05F046u, 6);  /* 0C05F044 mov.l Rm,@Rn */
L_0C05F046: BLKS(0x0C05F046u);
	r6 = 0x2800u; UPD(0x0C05F048u, 1);  /* 0C05F046 mov.w @(disp,pc),Rn */
	IF(0x0C05F048u); MACL = r11 * r6;  /* 0C05F048 mul.l Rm,Rn */
	r5 = 0xC217A04u; UPD(0x0C05F04Cu, 3);  /* 0C05F04A mov.l @(disp,pc),Rn */
	IF(0x0C05F04Cu); r3 = MACL;  /* 0C05F04C sts macl,Rn */
	r3 += r13;  /* 0C05F04E add Rm,Rn */
	r3 += r5;  /* 0C05F050 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05F054u, 4);  /* 0C05F052 mov.l @Rm,Rn */
	r4 = 0x4000000u; UPD(0x0C05F056u, 1);  /* 0C05F054 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C05F056 tst Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05F110u, 4); goto L_0C05F110; } UPD(0x0C05F05Cu, 1); goto L_0C05F05C; }  /* 0C05F058 bt/s */
L_0C05F05C: BLKS(0x0C05F05Cu);
	r12 = R32(r3 + 0x1Cu); UPD(0x0C05F05Eu, 1);  /* 0C05F05C mov.l @(disp,Rm),Rn */
	r8 = 0xC21E0FCu; UPD(0x0C05F060u, 1);  /* 0C05F05E mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r12); r12 += 4; r7 = v_; } UPD(0x0C05F062u, 1);  /* 0C05F060 mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C05F062 tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F10Eu, 4); goto L_0C05F10E; } UPD(0x0C05F068u, 1); goto L_0C05F068; }  /* 0C05F064 bt/s */
L_0C05F068: BLKS(0x0C05F068u);
	W32(r14 + 0x4u, r3); UPD(0x0C05F06Au, 1);  /* 0C05F068 mov.l Rm,@(disp,Rn) */
L_0C05F06A: BLKS(0x0C05F06Au);
	{ u32 v_ = R32(r12); r12 += 4; r7 = v_; } UPD(0x0C05F06Cu, 1);  /* 0C05F06A mov.l @Rm+,Rn */
	r6 = 0xC2859A4u; UPD(0x0C05F06Eu, 1);  /* 0C05F06C mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C05F070u, 1);  /* 0C05F06E mov.l @(disp,Rm),Rn */
	W32(r6, r7); UPD(0x0C05F072u, 1);  /* 0C05F070 mov.l Rm,@Rn */
	{ u32 v_ = R32(r12); r12 += 4; r1 = v_; } UPD(0x0C05F074u, 1);  /* 0C05F072 mov.l @Rm+,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C05F076u, 1);  /* 0C05F074 mov.l @(disp,Rm),Rn */
	r3 = 0xC220C54u; UPD(0x0C05F078u, 1);  /* 0C05F076 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C05F078 add Rm,Rn */
	W32(r3, r4); UPD(0x0C05F07Cu, 2);  /* 0C05F07A mov.l Rm,@Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C05F07Eu, 1);  /* 0C05F07C mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r12); r12 += 4; r0 = v_; } UPD(0x0C05F080u, 1);  /* 0C05F07E mov.l @Rm+,Rn */
	r10 = R32(r2 + 0x28u); UPD(0x0C05F082u, 1);  /* 0C05F080 mov.l @(disp,Rm),Rn */
	r9 = 0xC220C58u; UPD(0x0C05F084u, 1);  /* 0C05F082 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C05F084 add Rm,Rn */
	W32(r9, r10); UPD(0x0C05F088u, 2);  /* 0C05F086 mov.l Rm,@Rn */
	r8 = 0xFFu; UPD(0x0C05F08Au, 1);  /* 0C05F088 mov.w @(disp,pc),Rn */
	r9 = 0x53ACu; UPD(0x0C05F08Cu, 1);  /* 0C05F08A mov.w @(disp,pc),Rn */
L_0C05F08C: BLKS(0x0C05F08Cu);
	r3 = 0xC27E0FCu; UPD(0x0C05F08Eu, 1);  /* 0C05F08C mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C05F08E add Rm,Rn */
	r0 = R32(r3); UPD(0x0C05F092u, 2);  /* 0C05F090 mov.l @Rm,Rn */
	r10 = 0x1000000u; UPD(0x0C05F094u, 1);  /* 0C05F092 mov.l @(disp,pc),Rn */
	T = (r0 & r10) == 0;  /* 0C05F094 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F0FAu, 4); goto L_0C05F0FA; } goto L_0C05F09A; }  /* 0C05F096 bt/s */
L_0C05F09A: BLKS(0x0C05F09Au);
	r7 = R32(r3 + 0x20u); UPD(0x0C05F09Cu, 2);  /* 0C05F09A mov.l @(disp,Rm),Rn */
	r2 = 0xC275E18u; UPD(0x0C05F09Eu, 1);  /* 0C05F09C mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r4 = v_; } UPD(0x0C05F0A0u, 1);  /* 0C05F09E mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C05F0A0 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F0F8u, 4); goto L_0C05F0F8; } UPD(0x0C05F0A6u, 1); goto L_0C05F0A6; }  /* 0C05F0A2 bt/s */
L_0C05F0A6: BLKS(0x0C05F0A6u);
	r10 = 0xC286728u; UPD(0x0C05F0A8u, 1);  /* 0C05F0A6 mov.l @(disp,pc),Rn */
	r4 = r3;  /* 0C05F0A8 mov Rm,Rn */
	r0 = 0xC275574u; UPD(0x0C05F0ACu, 2);  /* 0C05F0AA mov.l @(disp,pc),Rn */
L_0C05F0AC: BLKS(0x0C05F0ACu);
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C05F0AEu, 1);  /* 0C05F0AC mov.l @Rm+,Rn */
	r2 = 0xC386800u; UPD(0x0C05F0B0u, 1);  /* 0C05F0AE mov.l @(disp,pc),Rn */
	W32(r2, r5); UPD(0x0C05F0B2u, 1);  /* 0C05F0B0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r7); r7 += 4; r6 = v_; } UPD(0x0C05F0B4u, 1);  /* 0C05F0B2 mov.l @Rm+,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C05F0B6u, 1);  /* 0C05F0B4 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C05F0B6 add Rm,Rn */
	W32(r10, r2); UPD(0x0C05F0BAu, 2);  /* 0C05F0B8 mov.l Rm,@Rn */
	{ u32 v_ = R32(r7); r7 += 4; r3 = v_; } UPD(0x0C05F0BCu, 1);  /* 0C05F0BA mov.l @Rm+,Rn */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C05F0BEu, 1);  /* 0C05F0BC mov.l @(disp,Rm),Rn */
	r1 = 0xC220C54u; UPD(0x0C05F0C0u, 1);  /* 0C05F0BE mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C05F0C0 add Rm,Rn */
	r3 = R32(r1); UPD(0x0C05F0C4u, 2);  /* 0C05F0C2 mov.l @Rm,Rn */
	r3 -= r2;  /* 0C05F0C4 sub Rm,Rn */
	IF(0x0C05F0C6u); T = (s32)r3 >= 0;  /* 0C05F0C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r0, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F190u, 5); goto L_0C05F190; } UPD(0x0C05F0CCu, 1); goto L_0C05F0CC; }  /* 0C05F0C8 bf/s */
L_0C05F0CC: BLKS(0x0C05F0CCu);
	r1 = 0xC21E0FCu; UPD(0x0C05F0CEu, 1);  /* 0C05F0CC mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C05F0D0u, 1);  /* 0C05F0CE mov.l @Rm,Rn */
	r1 = 0xC275E18u; UPD(0x0C05F0D2u, 1);  /* 0C05F0D0 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C05F0D4u, 1);  /* 0C05F0D2 mov.l @Rm,Rn */
	r2 += r1;  /* 0C05F0D4 add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C05F0D6 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F0EEu, 5); goto L_0C05F0EE; }  /* 0C05F0D8 bt */
L_0C05F0DA: BLKS(0x0C05F0DAu);
	r3 = 0xC220C58u; UPD(0x0C05F0DCu, 1);  /* 0C05F0DA mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C05F0DEu, 1);  /* 0C05F0DC mov.l @Rm,Rn */
	r2 -= r6;  /* 0C05F0DE sub Rm,Rn */
	IF(0x0C05F0E0u); T = (s32)r2 >= 0;  /* 0C05F0E0 cmp/pz Rn */
	if (!T) { UPD(0x0C05F180u, 5); goto L_0C05F180; }  /* 0C05F0E2 bf */
L_0C05F0E4: BLKS(0x0C05F0E4u);
	r3 = 0xC2859A4u; UPD(0x0C05F0E6u, 1);  /* 0C05F0E4 mov.l @(disp,pc),Rn */
	r6 = R32(r3); UPD(0x0C05F0E8u, 1);  /* 0C05F0E6 mov.l @Rm,Rn */
	r6 += r5;  /* 0C05F0E8 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C05F0EA cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C05F140u, 5); goto L_0C05F140; }  /* 0C05F0EC bf */
L_0C05F0EE: BLKS(0x0C05F0EEu);
	{ u32 v_ = R32(r7); r7 += 4; r6 = v_; } UPD(0x0C05F0F0u, 1);  /* 0C05F0EE mov.l @Rm+,Rn */
	r2 = 0xC275E18u; UPD(0x0C05F0F2u, 1);  /* 0C05F0F0 mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C05F0F2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F0ACu, 4); goto L_0C05F0AC; } UPD(0x0C05F0F8u, 1); goto L_0C05F0F8; }  /* 0C05F0F4 bf/s */
L_0C05F0F8: BLKS(0x0C05F0F8u);
	r0 = r8;  /* 0C05F0F8 mov Rm,Rn */
	UPD(0x0C05F0FAu, 1);
L_0C05F0FA: BLKS(0x0C05F0FAu);
	r0 += 0xFFFFFFFFu;  /* 0C05F0FA add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C05F0FC exts.w Rm,Rn */
	IF(0x0C05F0FEu); T = (s32)r8 >= 0;  /* 0C05F0FE cmp/pz Rn */
	{ u32 c_ = T; r9 += 0xFFFFFFACu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F08Cu, 6); goto L_0C05F08C; } goto L_0C05F104; }  /* 0C05F100 bt/s */
L_0C05F104: BLKS(0x0C05F104u);
	{ u32 v_ = R32(r12); r12 += 4; r8 = v_; } UPD(0x0C05F106u, 2);  /* 0C05F104 mov.l @Rm+,Rn */
	r9 = 0xC21E0FCu; UPD(0x0C05F108u, 1);  /* 0C05F106 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C05F108 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F06Au, 4); goto L_0C05F06A; } UPD(0x0C05F10Eu, 1); goto L_0C05F10E; }  /* 0C05F10A bf/s */
L_0C05F10E: BLKS(0x0C05F10Eu);
	r5 = R32(r14); UPD(0x0C05F110u, 1);  /* 0C05F10E mov.l @Rm,Rn */
L_0C05F110: BLKS(0x0C05F110u);
	r12 = 0x7Fu;  /* 0C05F110 mov #imm,Rn */
	r5 += 0x1u;  /* 0C05F112 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C05F114 exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C05F118u, 4);  /* 0C05F116 mov.l Rm,@Rn */
	r4 = R32(r14); UPD(0x0C05F11Au, 1);  /* 0C05F118 mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r12;  /* 0C05F11A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F046u, 4); goto L_0C05F046; } goto L_0C05F120; }  /* 0C05F11C bf/s */
L_0C05F120: BLKS(0x0C05F120u);
	r14 += 0x8u;  /* 0C05F120 add #imm,Rn */
	r15 = r14;  /* 0C05F122 mov Rm,Rn */
	IF(0x0C05F124u); PR = R32(r15); r15 += 4; UPD(0x0C05F126u, 4);  /* 0C05F124 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F128u, 1);  /* 0C05F126 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F12Au, 1);  /* 0C05F128 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F12Cu, 1);  /* 0C05F12A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F12Eu, 1);  /* 0C05F12C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F130u, 1);  /* 0C05F12E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F132u, 1);  /* 0C05F130 mov.l @Rm+,Rn */
	IF(0x0C05F132u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05F132 rts */
L_0C05F140: BLKS(0x0C05F140u);
	r0 = 0x2800u; UPD(0x0C05F142u, 1);  /* 0C05F140 mov.w @(disp,pc),Rn */
	IF(0x0C05F142u); MACL = r11 * r0;  /* 0C05F142 mul.l Rm,Rn */
	r10 = 0xC217A04u; UPD(0x0C05F146u, 3);  /* 0C05F144 mov.l @(disp,pc),Rn */
	IF(0x0C05F146u); r0 = MACL;  /* 0C05F146 sts macl,Rn */
	r0 += r13;  /* 0C05F148 add Rm,Rn */
	IF(0x0C05F14Au); r7 = R32(r0 + r10); UPD(0x0C05F14Cu, 3);  /* 0C05F14A mov.l @(r0,Rm),Rn */
	r5 = 0x8000u; UPD(0x0C05F14Eu, 1);  /* 0C05F14C mov.l @(disp,pc),Rn */
	T = (r7 & r5) == 0;  /* 0C05F14E tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05F172u, 4); goto L_0C05F172; } goto L_0C05F154; }  /* 0C05F150 bf/s */
L_0C05F154: BLKS(0x0C05F154u);
	r7 = 0x280u; UPD(0x0C05F156u, 2);  /* 0C05F154 mov.w @(disp,pc),Rn */
	IF(0x0C05F156u); MACL = r11 * r7;  /* 0C05F156 mul.l Rm,Rn */
	r3 = R32(r4 + 0x8u); UPD(0x0C05F15Au, 3);  /* 0C05F158 mov.l @(disp,Rm),Rn */
	r10 = 0xC283794u; UPD(0x0C05F15Cu, 1);  /* 0C05F15A mov.l @(disp,pc),Rn */
	IF(0x0C05F15Cu); r6 = MACL;  /* 0C05F15C sts macl,Rn */
	r5 = R32(r4 + 0x14u); UPD(0x0C05F160u, 2);  /* 0C05F15E mov.l @(disp,Rm),Rn */
	IF(0x0C05F160u); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C05F160 shld Rm,Rn */
	r6 += r10;  /* 0C05F162 add Rm,Rn */
	r7 += 0xFFFFFFF0u;  /* 0C05F164 add #imm,Rn */
	r6 += r7;  /* 0C05F166 add Rm,Rn */
	r3 += r5;  /* 0C05F168 add Rm,Rn */
	r4 = R32(r6); UPD(0x0C05F16Cu, 6);  /* 0C05F16A mov.l @Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C05F16Eu, 1);  /* 0C05F16C mov.l @(disp,Rm),Rn */
	r4 += r2;  /* 0C05F16E add Rm,Rn */
	W32(r6, r4); UPD(0x0C05F172u, 2);  /* 0C05F170 mov.l Rm,@Rn */
L_0C05F172: BLKS(0x0C05F172u);
	r10 = 0xC0A9EA0u; UPD(0x0C05F174u, 1);  /* 0C05F172 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C05F174 mov Rm,Rn */
	IF(0x0C05F176u); { u32 t_ = r10; PR = 0x0C05F17Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9EA0, 0x0C0A9EA0u, 0x0C05F17Au); }  /* 0C05F176 jsr @Rn */
L_0C05F17A: BLKS(0x0C05F17Au);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C05F0FAu, 3); goto L_0C05F0FA; }  /* 0C05F17A bra */
L_0C05F180: BLKS(0x0C05F180u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C05F0E4u, 3); goto L_0C05F0E4; }  /* 0C05F180 bra */
L_0C05F190: BLKS(0x0C05F190u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C05F0CCu, 3); goto L_0C05F0CC; }  /* 0C05F190 bra */
}

/* FUN_0c05f1e0 */
void f_0C05F1E0(sh3_t *c)
{
	LOCALS;
L_0C05F1E0: BLKS(0x0C05F1E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1E2u, 1);  /* 0C05F1E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1E4u, 1);  /* 0C05F1E2 mov.l Rm,@-Rn */
	r8 = 0x1u;  /* 0C05F1E4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1E8u, 2);  /* 0C05F1E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1EAu, 1);  /* 0C05F1E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1ECu, 1);  /* 0C05F1EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1EEu, 1);  /* 0C05F1EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05F1F0u, 1);  /* 0C05F1EE mov.l Rm,@-Rn */
	r4 = 0xC21F882u; UPD(0x0C05F1F2u, 1);  /* 0C05F1F0 mov.l @(disp,pc),Rn */
	IF(0x0C05F1F2u); r15 -= 4; W32(r15, PR); UPD(0x0C05F1F4u, 1);  /* 0C05F1F2 sts.l pr,@-Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C05F1F6u, 1);  /* 0C05F1F4 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C05F1F6 add #imm,Rn */
	r2 = 0x280u; UPD(0x0C05F1FAu, 2);  /* 0C05F1F8 mov.w @(disp,pc),Rn */
	r8 &= r3;  /* 0C05F1FA and Rm,Rn */
	IF(0x0C05F1FCu); MACL = r8 * r2;  /* 0C05F1FC mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05F200u, 4);  /* 0C05F1FE mov.l @(disp,pc),Rn */
	IF(0x0C05F200u); r3 = MACL;  /* 0C05F200 sts macl,Rn */
	r3 += r0;  /* 0C05F202 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05F206u, 3);  /* 0C05F204 mov.l @Rm,Rn */
	r0 = 0x8000000u; UPD(0x0C05F208u, 1);  /* 0C05F206 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05F208 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F23Eu, 4); goto L_0C05F23E; } goto L_0C05F20E; }  /* 0C05F20A bt/s */
L_0C05F20E: BLKS(0x0C05F20Eu);
	r5 = R32(r3 + 0x4u); UPD(0x0C05F210u, 2);  /* 0C05F20E mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C05F210 mov #imm,Rn */
	r0 = 0xC16BE68u; UPD(0x0C05F214u, 2);  /* 0C05F212 mov.l @(disp,pc),Rn */
	IF(0x0C05F214u); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05F214 shld Rm,Rn */
	IF(0x0C05F216u); r4 = R32(r0 + r5); UPD(0x0C05F218u, 2);  /* 0C05F216 mov.l @(r0,Rm),Rn */
	r1 = 0x4u;  /* 0C05F218 mov #imm,Rn */
	W32(r14, r4); UPD(0x0C05F21Cu, 2);  /* 0C05F21A mov.l Rm,@Rn */
	r11 = 0x3u;  /* 0C05F21C mov #imm,Rn */
	r13 = R32(r3 + 0x8u); UPD(0x0C05F220u, 2);  /* 0C05F21E mov.l @(disp,Rm),Rn */
	r0 = R32(r14); UPD(0x0C05F222u, 1);  /* 0C05F220 mov.l @Rm,Rn */
	IF(0x0C05F222u); ARG0(0x4D1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C05F222 shld Rm,Rn */
	IF(0x0C05F224u); r12 = R32(r0 + r13); UPD(0x0C05F226u, 2);  /* 0C05F224 mov.l @(r0,Rm),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C05F228u, 1);  /* 0C05F226 mov.l @(disp,Rm),Rn */
	W32(r14, r12); UPD(0x0C05F22Au, 1);  /* 0C05F228 mov.l Rm,@Rn */
	IF(0x0C05F22Au); ARG0(0x49BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C05F22A shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C05F22Eu, 2);  /* 0C05F22C mov.l @Rm,Rn */
	r9 += r10;  /* 0C05F22E add Rm,Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C05F232u, 2);  /* 0C05F230 mov.l @(disp,Rm),Rn */
	r6 = 0xC2864F8u; UPD(0x0C05F234u, 1);  /* 0C05F232 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C05F236u, 1);  /* 0C05F234 mov.l @Rm+,Rn */
	W32(r14, r7); UPD(0x0C05F238u, 1);  /* 0C05F236 mov.l Rm,@Rn */
	T = (r5 & r5) == 0;  /* 0C05F238 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F242u, 4); goto L_0C05F242; } UPD(0x0C05F23Eu, 1); goto L_0C05F23E; }  /* 0C05F23A bf/s */
L_0C05F23E: BLKS(0x0C05F23Eu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C05F352u, 3); goto L_0C05F352; }  /* 0C05F23E bra */
L_0C05F242: BLKS(0x0C05F242u);
	r4 = 0x280u; UPD(0x0C05F244u, 1);  /* 0C05F242 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C05F246u, 1);  /* 0C05F244 mov.l @Rm,Rn */
	IF(0x0C05F246u); MACL = r8 * r4;  /* 0C05F246 mul.l Rm,Rn */
	{ u32 v_ = R32(r9); r9 += 4; r1 = v_; } UPD(0x0C05F24Au, 3);  /* 0C05F248 mov.l @Rm+,Rn */
	r5 = 0xC224668u; UPD(0x0C05F24Cu, 1);  /* 0C05F24A mov.l @(disp,pc),Rn */
	IF(0x0C05F24Cu); r7 = MACL;  /* 0C05F24C sts macl,Rn */
	r13 = 0xC283794u; UPD(0x0C05F250u, 2);  /* 0C05F24E mov.l @(disp,pc),Rn */
	W32(r5, r1); UPD(0x0C05F252u, 1);  /* 0C05F250 mov.l Rm,@Rn */
	r7 += r13;  /* 0C05F252 add Rm,Rn */
	{ u32 v_ = R32(r9); r9 += 4; r12 = v_; } UPD(0x0C05F256u, 2);  /* 0C05F254 mov.l @Rm+,Rn */
	r11 = R32(r7 + 0x10u); UPD(0x0C05F258u, 1);  /* 0C05F256 mov.l @(disp,Rm),Rn */
	r10 = 0xC26CADCu; UPD(0x0C05F25Au, 1);  /* 0C05F258 mov.l @(disp,pc),Rn */
	r11 += r12;  /* 0C05F25A add Rm,Rn */
	W32(r10, r11); UPD(0x0C05F25Eu, 2);  /* 0C05F25C mov.l Rm,@Rn */
	{ u32 v_ = R32(r9); r9 += 4; r3 = v_; } UPD(0x0C05F260u, 1);  /* 0C05F25E mov.l @Rm+,Rn */
	r6 = R32(r7 + 0x14u); UPD(0x0C05F262u, 1);  /* 0C05F260 mov.l @(disp,Rm),Rn */
	r0 = 0xC275DC0u; UPD(0x0C05F264u, 1);  /* 0C05F262 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C05F264 add Rm,Rn */
	r12 = 0xBFu; UPD(0x0C05F268u, 2);  /* 0C05F266 mov.w @(disp,pc),Rn */
	r13 = 0x864Cu; UPD(0x0C05F26Au, 1);  /* 0C05F268 mov.l @(disp,pc),Rn */
	W32(r14, r9); UPD(0x0C05F26Cu, 1);  /* 0C05F26A mov.l Rm,@Rn */
	W32(r0, r6); UPD(0x0C05F26Eu, 1);  /* 0C05F26C mov.l Rm,@Rn */
	IF(0x0C05F26Eu); ;  /* 0C05F26E nop */
	UPD(0x0C05F270u, 1);
L_0C05F270: BLKS(0x0C05F270u);
	r7 = 0xC26CD40u; UPD(0x0C05F272u, 1);  /* 0C05F270 mov.l @(disp,pc),Rn */
	r7 += r13;  /* 0C05F272 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C05F276u, 2);  /* 0C05F274 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C05F278u, 1);  /* 0C05F276 mov.l @(disp,pc),Rn */
	T = (r6 & r0) == 0;  /* 0C05F278 tst Rm,Rn */
	{ u32 c_ = T; r9 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F332u, 4); goto L_0C05F332; } goto L_0C05F27E; }  /* 0C05F27A bt/s */
L_0C05F27E: BLKS(0x0C05F27Eu);
	r4 = 0xA8u; UPD(0x0C05F280u, 2);  /* 0C05F27E mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C05F280 add Rm,Rn */
	r2 = r4;  /* 0C05F282 mov Rm,Rn */
	r2 += 0x3u;  /* 0C05F284 add #imm,Rn */
	r4 += 0x1u;  /* 0C05F286 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r4); UPD(0x0C05F28Au, 5);  /* 0C05F288 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C05F28Cu, 1);  /* 0C05F28A mov.b @Rm,Rn */
	r9 = r11 & 0xFF;  /* 0C05F28C extu.b Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C05F28E extu.b Rm,Rn */
	T = r9 >= r3;  /* 0C05F290 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r9 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F332u, 6); goto L_0C05F332; } goto L_0C05F296; }  /* 0C05F292 bf/s */
L_0C05F296: BLKS(0x0C05F296u);
	r9 = R32(r7 + 0x1Cu); UPD(0x0C05F298u, 2);  /* 0C05F296 mov.l @(disp,Rm),Rn */
	r0 = 0xC275578u; UPD(0x0C05F29Au, 1);  /* 0C05F298 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r5 = v_; } UPD(0x0C05F29Cu, 1);  /* 0C05F29A mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C05F29C tst Rm,Rn */
	{ u32 c_ = T; W32(r0, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F330u, 4); goto L_0C05F330; } UPD(0x0C05F2A2u, 1); goto L_0C05F2A2; }  /* 0C05F29E bt/s */
L_0C05F2A2: BLKS(0x0C05F2A2u);
	r10 = r7;  /* 0C05F2A2 mov Rm,Rn */
	r7 += 0x44u;  /* 0C05F2A4 add #imm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C05F2A8u, 3);  /* 0C05F2A6 mov.l Rm,@(disp,Rn) */
L_0C05F2A8: BLKS(0x0C05F2A8u);
	{ u32 v_ = R32(r9); r9 += 4; r4 = v_; } UPD(0x0C05F2AAu, 1);  /* 0C05F2A8 mov.l @Rm+,Rn */
	r0 = 0xC27DC44u; UPD(0x0C05F2ACu, 1);  /* 0C05F2AA mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C05F2AEu, 1);  /* 0C05F2AC mov.l Rm,@Rn */
	{ u32 v_ = R32(r9); r9 += 4; r6 = v_; } UPD(0x0C05F2B0u, 1);  /* 0C05F2AE mov.l @Rm+,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C05F2B2u, 1);  /* 0C05F2B0 mov.l @(disp,Rm),Rn */
	r1 = 0xC3867F8u; UPD(0x0C05F2B4u, 1);  /* 0C05F2B2 mov.l @(disp,pc),Rn */
	r11 += r6;  /* 0C05F2B4 add Rm,Rn */
	W32(r1, r11); UPD(0x0C05F2B8u, 2);  /* 0C05F2B6 mov.l Rm,@Rn */
	r3 = 0xC26CADCu; UPD(0x0C05F2BAu, 1);  /* 0C05F2B8 mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C05F2BCu, 1);  /* 0C05F2BA mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r5 = v_; } UPD(0x0C05F2BEu, 1);  /* 0C05F2BC mov.l @Rm+,Rn */
	r2 = 0xC3929BCu; UPD(0x0C05F2C0u, 1);  /* 0C05F2BE mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C05F2C0 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C05F2C4u, 2);  /* 0C05F2C2 mov.l @Rm,Rn */
	r7 -= r11;  /* 0C05F2C4 sub Rm,Rn */
	IF(0x0C05F2C6u); T = (s32)r7 >= 0;  /* 0C05F2C6 cmp/pz Rn */
	{ u32 c_ = T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F2D0u, 5); goto L_0C05F2D0; } UPD(0x0C05F2CCu, 1); goto L_0C05F2CC; }  /* 0C05F2C8 bt/s */
L_0C05F2CC: BLKS(0x0C05F2CCu);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C05F440u, 3); goto L_0C05F440; }  /* 0C05F2CC bra */
L_0C05F2D0: BLKS(0x0C05F2D0u);
	r2 = 0xC2864F8u; UPD(0x0C05F2D2u, 1);  /* 0C05F2D0 mov.l @(disp,pc),Rn */
	r1 = 0xC275578u; UPD(0x0C05F2D4u, 1);  /* 0C05F2D2 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C05F2D6u, 1);  /* 0C05F2D4 mov.l @Rm,Rn */
	r3 = 0xFFFFFFFu; UPD(0x0C05F2D8u, 1);  /* 0C05F2D6 mov.l @(disp,pc),Rn */
	r11 = r5;  /* 0C05F2D8 mov Rm,Rn */
	r2 = R32(r1); UPD(0x0C05F2DCu, 2);  /* 0C05F2DA mov.l @Rm,Rn */
	r11 &= r3;  /* 0C05F2DC and Rm,Rn */
	r3 &= r2;  /* 0C05F2DE and Rm,Rn */
	r11 += r3;  /* 0C05F2E0 add Rm,Rn */
	T = (s32)r7 >= (s32)r11;  /* 0C05F2E2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F324u, 7); goto L_0C05F324; }  /* 0C05F2E4 bt */
L_0C05F2E6: BLKS(0x0C05F2E6u);
	r7 = 0xC275DC0u; UPD(0x0C05F2E8u, 1);  /* 0C05F2E6 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C05F2EAu, 1);  /* 0C05F2E8 mov.l @Rm,Rn */
	r3 -= r6;  /* 0C05F2EA sub Rm,Rn */
	IF(0x0C05F2ECu); T = (s32)r3 >= 0;  /* 0C05F2EC cmp/pz Rn */
	if (T) { UPD(0x0C05F2F2u, 5); goto L_0C05F2F2; }  /* 0C05F2EE bt */
L_0C05F2F0: BLKS(0x0C05F2F0u);
	r3 = 0u - r3;  /* 0C05F2F0 neg Rm,Rn */
	UPD(0x0C05F2F2u, 1);
L_0C05F2F2: BLKS(0x0C05F2F2u);
	r0 = 0xC224668u; UPD(0x0C05F2F4u, 1);  /* 0C05F2F2 mov.l @(disp,pc),Rn */
	r6 = R32(r0); UPD(0x0C05F2F6u, 1);  /* 0C05F2F4 mov.l @Rm,Rn */
	r6 += r4;  /* 0C05F2F6 add Rm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C05F2F8 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F324u, 5); goto L_0C05F324; }  /* 0C05F2FA bt */
L_0C05F2FC: BLKS(0x0C05F2FCu);
	r3 = 0x20000000u; UPD(0x0C05F2FEu, 1);  /* 0C05F2FC mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C05F2FE tst Rm,Rn */
	if (T) { UPD(0x0C05F306u, 4); goto L_0C05F306; }  /* 0C05F300 bt */
L_0C05F302: BLKS(0x0C05F302u);
	{ IF(0x0C05F304u); ; /* slot nop */ UPD(0x0C05F420u, 3); goto L_0C05F420; }  /* 0C05F302 bra */
L_0C05F306: BLKS(0x0C05F306u);
	r7 = R32(r10); UPD(0x0C05F308u, 1);  /* 0C05F306 mov.l @Rm,Rn */
	r7 |= r2;  /* 0C05F308 or Rm,Rn */
	T = (r7 & r3) == 0;  /* 0C05F30A tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F3E0u, 5); goto L_0C05F3E0; } UPD(0x0C05F310u, 1); goto L_0C05F310; }  /* 0C05F30C bt/s */
L_0C05F310: BLKS(0x0C05F310u);
	r6 = 0x280u; UPD(0x0C05F312u, 1);  /* 0C05F310 mov.w @(disp,pc),Rn */
	IF(0x0C05F312u); MACL = r8 * r6;  /* 0C05F312 mul.l Rm,Rn */
	r1 = 0xC283794u; UPD(0x0C05F316u, 3);  /* 0C05F314 mov.l @(disp,pc),Rn */
	IF(0x0C05F316u); r0 = MACL;  /* 0C05F316 sts macl,Rn */
	r0 += r1;  /* 0C05F318 add Rm,Rn */
	r6 += 0xFFFFFFE9u;  /* 0C05F31A add #imm,Rn */
	IF(0x0C05F31Cu); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05F31Eu, 4);  /* 0C05F31C mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05F31E tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F370u, 4); goto L_0C05F370; } UPD(0x0C05F324u, 1); goto L_0C05F324; }  /* 0C05F320 bt/s */
L_0C05F324: BLKS(0x0C05F324u);
	{ u32 v_ = R32(r9); r9 += 4; r4 = v_; } UPD(0x0C05F326u, 1);  /* 0C05F324 mov.l @Rm+,Rn */
L_0C05F326: BLKS(0x0C05F326u);
	r11 = 0xC275578u; UPD(0x0C05F328u, 1);  /* 0C05F326 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C05F328 tst Rm,Rn */
	{ u32 c_ = !T; W32(r11, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F2A8u, 4); goto L_0C05F2A8; } UPD(0x0C05F32Eu, 1); goto L_0C05F32E; }  /* 0C05F32A bf/s */
L_0C05F32E: BLKS(0x0C05F32Eu);
	IF(0x0C05F32Eu); ;  /* 0C05F32E nop */
	UPD(0x0C05F330u, 1);
L_0C05F330: BLKS(0x0C05F330u);
	r9 = r12;  /* 0C05F330 mov Rm,Rn */
	UPD(0x0C05F332u, 1);
L_0C05F332: BLKS(0x0C05F332u);
	r12 = 0xFFFFFF4Cu; UPD(0x0C05F334u, 1);  /* 0C05F332 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C05F334 add #imm,Rn */
	r13 += r12;  /* 0C05F336 add Rm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C05F338 exts.w Rm,Rn */
	IF(0x0C05F33Au); T = (s32)r12 >= 0;  /* 0C05F33A cmp/pz Rn */
	{ u32 c_ = T; r2 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C05F270u, 7); goto L_0C05F270; } UPD(0x0C05F340u, 1); goto L_0C05F340; }  /* 0C05F33C bt/s */
L_0C05F340: BLKS(0x0C05F340u);
	r10 = 0xC2864F8u; UPD(0x0C05F342u, 1);  /* 0C05F340 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r2); r2 += 4; r13 = v_; } UPD(0x0C05F344u, 1);  /* 0C05F342 mov.l @Rm+,Rn */
	W32(r14, r2); UPD(0x0C05F346u, 1);  /* 0C05F344 mov.l Rm,@Rn */
	T = (r13 & r13) == 0;  /* 0C05F346 tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r13); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F350u, 4); goto L_0C05F350; } UPD(0x0C05F34Cu, 1); goto L_0C05F34C; }  /* 0C05F348 bt/s */
L_0C05F34C: BLKS(0x0C05F34Cu);
	{ IF(0x0C05F34Eu); ; /* slot nop */ UPD(0x0C05F242u, 3); goto L_0C05F242; }  /* 0C05F34C bra */
L_0C05F350: BLKS(0x0C05F350u);
	r14 += 0xCu;  /* 0C05F350 add #imm,Rn */
	UPD(0x0C05F352u, 1);
L_0C05F352: BLKS(0x0C05F352u);
	r15 = r14;  /* 0C05F352 mov Rm,Rn */
	IF(0x0C05F354u); PR = R32(r15); r15 += 4; UPD(0x0C05F356u, 2);  /* 0C05F354 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F358u, 1);  /* 0C05F356 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F35Au, 1);  /* 0C05F358 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F35Cu, 1);  /* 0C05F35A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F35Eu, 1);  /* 0C05F35C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F360u, 1);  /* 0C05F35E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F362u, 1);  /* 0C05F360 mov.l @Rm+,Rn */
	IF(0x0C05F362u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05F362 rts */
L_0C05F370: BLKS(0x0C05F370u);
	r0 = 0xC066270u; UPD(0x0C05F372u, 1);  /* 0C05F370 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C05F372 add #imm,Rn */
	r15 = r14;  /* 0C05F374 mov Rm,Rn */
	IF(0x0C05F376u); PR = R32(r15); r15 += 4; UPD(0x0C05F378u, 3);  /* 0C05F376 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F37Au, 1);  /* 0C05F378 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F37Cu, 1);  /* 0C05F37A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F37Eu, 1);  /* 0C05F37C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F380u, 1);  /* 0C05F37E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F382u, 1);  /* 0C05F380 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F384u, 1);  /* 0C05F382 mov.l @Rm+,Rn */
	IF(0x0C05F384u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C066270u: TAIL(f_0C066270); default: JUMPD(tv_); } }  /* 0C05F384 jmp @Rn */
L_0C05F3E0: BLKS(0x0C05F3E0u);
	r0 = 0x280u; UPD(0x0C05F3E2u, 1);  /* 0C05F3E0 mov.w @(disp,pc),Rn */
	IF(0x0C05F3E2u); MACL = r8 * r0;  /* 0C05F3E2 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C05F3E6u, 3);  /* 0C05F3E4 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C05F3E6 mov Rm,Rn */
	r0 = 0xC0A0730u; UPD(0x0C05F3EAu, 2);  /* 0C05F3E8 mov.l @(disp,pc),Rn */
	IF(0x0C05F3EAu); r11 = MACL;  /* 0C05F3EA sts macl,Rn */
	r11 += r6;  /* 0C05F3EC add Rm,Rn */
	r6 = R32(r11); UPD(0x0C05F3F0u, 3);  /* 0C05F3EE mov.l @Rm,Rn */
	IF(0x0C05F3F0u); { u32 t_ = r0; PR = 0x0C05F3F4u; r7 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0730, 0x0C0A0730u, 0x0C05F3F4u); }  /* 0C05F3F0 jsr @Rn */
L_0C05F3F4: BLKS(0x0C05F3F4u);
	T = (r0 & r0) == 0;  /* 0C05F3F4 tst Rm,Rn */
	if (T) { UPD(0x0C05F310u, 4); goto L_0C05F310; }  /* 0C05F3F6 bt */
L_0C05F3F8: BLKS(0x0C05F3F8u);
	r5 = r10;  /* 0C05F3F8 mov Rm,Rn */
	r3 = 0x270u; UPD(0x0C05F3FCu, 2);  /* 0C05F3FA mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C05F3FC add Rm,Rn */
	r5 += 0x40u;  /* 0C05F3FE add #imm,Rn */
	r11 = 0xC058880u; UPD(0x0C05F402u, 3);  /* 0C05F400 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C05F404u, 1);  /* 0C05F402 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C05F406u, 1);  /* 0C05F404 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C05F408u, 1);  /* 0C05F406 mov.l Rm,@(disp,Rn) */
	IF(0x0C05F408u); { u32 t_ = r11; PR = 0x0C05F40Cu; r5 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058880, 0x0C058880u, 0x0C05F40Cu); }  /* 0C05F408 jsr @Rn */
L_0C05F40C: BLKS(0x0C05F40Cu);
	r11 = R32(r14 + 0x8u); UPD(0x0C05F40Eu, 1);  /* 0C05F40C mov.l @(disp,Rm),Rn */
	r4 = R32(r11); UPD(0x0C05F410u, 1);  /* 0C05F40E mov.l @Rm,Rn */
	r4 += r0;  /* 0C05F410 add Rm,Rn */
	{ W32(r11, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C05F310u, 4); goto L_0C05F310; }  /* 0C05F412 bra */
L_0C05F420: BLKS(0x0C05F420u);
	r2 = 0x280u; UPD(0x0C05F422u, 1);  /* 0C05F420 mov.w @(disp,pc),Rn */
	IF(0x0C05F422u); MACL = r8 * r2;  /* 0C05F422 mul.l Rm,Rn */
	r1 = 0xC283794u; UPD(0x0C05F426u, 3);  /* 0C05F424 mov.l @(disp,pc),Rn */
	IF(0x0C05F426u); r4 = MACL;  /* 0C05F426 sts macl,Rn */
	r3 = 0x270u; UPD(0x0C05F42Au, 2);  /* 0C05F428 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C05F42A add Rm,Rn */
	r4 += r3;  /* 0C05F42C add Rm,Rn */
	r5 = R32(r4); UPD(0x0C05F430u, 3);  /* 0C05F42E mov.l @Rm,Rn */
	r11 = 0xC0AFBA0u; UPD(0x0C05F432u, 1);  /* 0C05F430 mov.l @(disp,pc),Rn */
	r5 += 0xAu;  /* 0C05F432 add #imm,Rn */
	W32(r4, r5); UPD(0x0C05F436u, 2);  /* 0C05F434 mov.l Rm,@Rn */
	r4 = r8;  /* 0C05F436 mov Rm,Rn */
	IF(0x0C05F438u); { u32 t_ = r11; PR = 0x0C05F43Cu; r5 = 0x59u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C05F43Cu); }  /* 0C05F438 jsr @Rn */
L_0C05F43C: BLKS(0x0C05F43Cu);
	{ { u32 v_ = R32(r9); r9 += 4; r4 = v_; } /* slot mov.l @Rm+,Rn */ UPD(0x0C05F326u, 3); goto L_0C05F326; }  /* 0C05F43C bra */
L_0C05F440: BLKS(0x0C05F440u);
	{ IF(0x0C05F442u); ; /* slot nop */ UPD(0x0C05F2D0u, 3); goto L_0C05F2D0; }  /* 0C05F440 bra */
}

/* FUN_0c05f460 */
void f_0C05F460(sh3_t *c)
{
	LOCALS;
L_0C05F460: BLKS(0x0C05F460u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05F462u, 1);  /* 0C05F460 mov.l Rm,@-Rn */
	r3 = 0x1u;  /* 0C05F462 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05F466u, 2);  /* 0C05F464 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05F468u, 1);  /* 0C05F466 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05F46Au, 1);  /* 0C05F468 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05F46Cu, 1);  /* 0C05F46A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05F46Eu, 1);  /* 0C05F46C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05F470u, 1);  /* 0C05F46E mov.l Rm,@-Rn */
	r5 = 0xC21F882u; UPD(0x0C05F472u, 1);  /* 0C05F470 mov.l @(disp,pc),Rn */
	IF(0x0C05F472u); r15 -= 4; W32(r15, PR); UPD(0x0C05F474u, 1);  /* 0C05F472 sts.l pr,@-Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C05F476u, 1);  /* 0C05F474 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C05F476 add #imm,Rn */
	r11 = r4;  /* 0C05F478 mov Rm,Rn */
	r11 += 0x1u;  /* 0C05F47A add #imm,Rn */
	r2 = 0x280u; UPD(0x0C05F47Eu, 4);  /* 0C05F47C mov.w @(disp,pc),Rn */
	r11 &= r3;  /* 0C05F47E and Rm,Rn */
	IF(0x0C05F480u); MACL = r11 * r2;  /* 0C05F480 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05F484u, 4);  /* 0C05F482 mov.l @(disp,pc),Rn */
	IF(0x0C05F484u); r3 = MACL;  /* 0C05F484 sts macl,Rn */
	r3 += r0;  /* 0C05F486 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05F48Au, 3);  /* 0C05F488 mov.l @Rm,Rn */
	r0 = 0x4000000u; UPD(0x0C05F48Cu, 1);  /* 0C05F48A mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05F48C tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F496u, 4); goto L_0C05F496; } goto L_0C05F492; }  /* 0C05F48E bf/s */
L_0C05F492: BLKS(0x0C05F492u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C05F5B6u, 4); goto L_0C05F5B6; }  /* 0C05F492 bra */
L_0C05F496: BLKS(0x0C05F496u);
	r5 = R32(r3 + 0x4u); UPD(0x0C05F498u, 1);  /* 0C05F496 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C05F498 mov #imm,Rn */
	r2 = 0xC16BE68u; UPD(0x0C05F49Cu, 2);  /* 0C05F49A mov.l @(disp,pc),Rn */
	IF(0x0C05F49Cu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05F49C shld Rm,Rn */
	r0 = r2;  /* 0C05F49E mov Rm,Rn */
	IF(0x0C05F4A0u); r1 = R32(r0 + r5); UPD(0x0C05F4A2u, 3);  /* 0C05F4A0 mov.l @(r0,Rm),Rn */
	r12 = 0x3u;  /* 0C05F4A2 mov #imm,Rn */
	r4 = R32(r3 + 0x8u); UPD(0x0C05F4A6u, 2);  /* 0C05F4A4 mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C05F4A6 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C05F4AAu, 2);  /* 0C05F4A8 mov.l Rm,@Rn */
	IF(0x0C05F4AAu); ARG0(0x440Du); { s32 s_ = (s32)r0; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C05F4AA shld Rm,Rn */
	r0 = R32(r14); UPD(0x0C05F4AEu, 2);  /* 0C05F4AC mov.l @Rm,Rn */
	IF(0x0C05F4AEu); r13 = R32(r0 + r4); UPD(0x0C05F4B0u, 1);  /* 0C05F4AE mov.l @(r0,Rm),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C05F4B2u, 1);  /* 0C05F4B0 mov.l @(disp,Rm),Rn */
	W32(r14, r13); UPD(0x0C05F4B4u, 1);  /* 0C05F4B2 mov.l Rm,@Rn */
	IF(0x0C05F4B4u); ARG0(0x49CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C05F4B4 shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C05F4B8u, 2);  /* 0C05F4B6 mov.l @Rm,Rn */
	r9 += r10;  /* 0C05F4B8 add Rm,Rn */
	r8 = R32(r9 + 0x4u); UPD(0x0C05F4BCu, 2);  /* 0C05F4BA mov.l @(disp,Rm),Rn */
	r7 = 0xC2864F8u; UPD(0x0C05F4BEu, 1);  /* 0C05F4BC mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C05F4C0u, 1);  /* 0C05F4BE mov.l @Rm+,Rn */
	W32(r14, r8); UPD(0x0C05F4C2u, 1);  /* 0C05F4C0 mov.l Rm,@Rn */
	T = (r6 & r6) == 0;  /* 0C05F4C2 tst Rm,Rn */
	{ u32 c_ = T; W32(r7, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F5B4u, 4); goto L_0C05F5B4; } UPD(0x0C05F4C8u, 1); goto L_0C05F4C8; }  /* 0C05F4C4 bt/s */
L_0C05F4C8: BLKS(0x0C05F4C8u);
	r0 = 0x280u; UPD(0x0C05F4CAu, 1);  /* 0C05F4C8 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C05F4CCu, 1);  /* 0C05F4CA mov.l @Rm,Rn */
	IF(0x0C05F4CCu); MACL = r11 * r0;  /* 0C05F4CC mul.l Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C05F4D0u, 3);  /* 0C05F4CE mov.l @Rm+,Rn */
	r5 = 0xC224668u; UPD(0x0C05F4D2u, 1);  /* 0C05F4D0 mov.l @(disp,pc),Rn */
	IF(0x0C05F4D2u); r7 = MACL;  /* 0C05F4D2 sts macl,Rn */
	r1 = 0xC283794u; UPD(0x0C05F4D6u, 2);  /* 0C05F4D4 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05F4D8u, 1);  /* 0C05F4D6 mov.l Rm,@Rn */
	r7 += r1;  /* 0C05F4D8 add Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C05F4DCu, 2);  /* 0C05F4DA mov.l @Rm+,Rn */
	r13 = R32(r7 + 0x10u); UPD(0x0C05F4DEu, 1);  /* 0C05F4DC mov.l @(disp,Rm),Rn */
	r12 = 0xC26CADCu; UPD(0x0C05F4E0u, 1);  /* 0C05F4DE mov.l @(disp,pc),Rn */
	r13 += r4;  /* 0C05F4E0 add Rm,Rn */
	W32(r12, r13); UPD(0x0C05F4E4u, 2);  /* 0C05F4E2 mov.l Rm,@Rn */
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C05F4E6u, 1);  /* 0C05F4E4 mov.l @Rm+,Rn */
	r8 = R32(r7 + 0x14u); UPD(0x0C05F4E8u, 1);  /* 0C05F4E6 mov.l @(disp,Rm),Rn */
	W32(r14, r10); UPD(0x0C05F4EAu, 1);  /* 0C05F4E8 mov.l Rm,@Rn */
	r8 += r9;  /* 0C05F4EA add Rm,Rn */
	r3 = 0xC275DC0u; UPD(0x0C05F4EEu, 2);  /* 0C05F4EC mov.l @(disp,pc),Rn */
	r10 = 0xFFu; UPD(0x0C05F4F0u, 1);  /* 0C05F4EE mov.w @(disp,pc),Rn */
	r12 = 0x53ACu; UPD(0x0C05F4F2u, 1);  /* 0C05F4F0 mov.w @(disp,pc),Rn */
	W32(r3, r8); UPD(0x0C05F4F4u, 1);  /* 0C05F4F2 mov.l Rm,@Rn */
L_0C05F4F4: BLKS(0x0C05F4F4u);
	r3 = 0xC27E0FCu; UPD(0x0C05F4F6u, 1);  /* 0C05F4F4 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C05F4F6 add Rm,Rn */
	r9 = R32(r3); UPD(0x0C05F4FAu, 2);  /* 0C05F4F8 mov.l @Rm,Rn */
	r8 = 0x10000000u; UPD(0x0C05F4FCu, 1);  /* 0C05F4FA mov.l @(disp,pc),Rn */
	T = (r9 & r8) == 0;  /* 0C05F4FC tst Rm,Rn */
	{ u32 c_ = T; r13 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F59Cu, 4); goto L_0C05F59C; } goto L_0C05F502; }  /* 0C05F4FE bt/s */
L_0C05F502: BLKS(0x0C05F502u);
	r8 = R32(r3 + 0x20u); UPD(0x0C05F504u, 2);  /* 0C05F502 mov.l @(disp,Rm),Rn */
	r2 = 0xC275E18u; UPD(0x0C05F506u, 1);  /* 0C05F504 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C05F508u, 1);  /* 0C05F506 mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C05F508 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F59Au, 4); goto L_0C05F59A; } UPD(0x0C05F50Eu, 1); goto L_0C05F50E; }  /* 0C05F50A bt/s */
L_0C05F50E: BLKS(0x0C05F50Eu);
	r9 = r3;  /* 0C05F50E mov Rm,Rn */
	r3 += 0x44u;  /* 0C05F510 add #imm,Rn */
	r13 = 0xC286728u; UPD(0x0C05F514u, 3);  /* 0C05F512 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C05F516u, 1);  /* 0C05F514 mov.l Rm,@(disp,Rn) */
	IF(0x0C05F516u); ;  /* 0C05F516 nop */
	UPD(0x0C05F518u, 1);
L_0C05F518: BLKS(0x0C05F518u);
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C05F51Au, 1);  /* 0C05F518 mov.l @Rm+,Rn */
	r4 = 0xC386800u; UPD(0x0C05F51Cu, 1);  /* 0C05F51A mov.l @(disp,pc),Rn */
	W32(r4, r0); UPD(0x0C05F51Eu, 1);  /* 0C05F51C mov.l Rm,@Rn */
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C05F520u, 1);  /* 0C05F51E mov.l @Rm+,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C05F522u, 1);  /* 0C05F520 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C05F522 add Rm,Rn */
	W32(r13, r6); UPD(0x0C05F526u, 2);  /* 0C05F524 mov.l Rm,@Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C05F528u, 1);  /* 0C05F526 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C05F52Au, 1);  /* 0C05F528 mov.l @Rm+,Rn */
	r3 = 0xC275574u; UPD(0x0C05F52Cu, 1);  /* 0C05F52A mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C05F52C add Rm,Rn */
	W32(r3, r7); UPD(0x0C05F530u, 2);  /* 0C05F52E mov.l Rm,@Rn */
	r2 = 0xC26CADCu; UPD(0x0C05F532u, 1);  /* 0C05F530 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C05F534u, 1);  /* 0C05F532 mov.l @Rm,Rn */
	r3 -= r6;  /* 0C05F534 sub Rm,Rn */
	IF(0x0C05F536u); T = (s32)r3 >= 0;  /* 0C05F536 cmp/pz Rn */
	if (!T) { UPD(0x0C05F620u, 5); goto L_0C05F620; }  /* 0C05F538 bf */
L_0C05F53A: BLKS(0x0C05F53Au);
	r2 = 0xC2864F8u; UPD(0x0C05F53Cu, 1);  /* 0C05F53A mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C05F53Eu, 1);  /* 0C05F53C mov.l @Rm,Rn */
	r1 = 0xC275E18u; UPD(0x0C05F540u, 1);  /* 0C05F53E mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C05F542u, 1);  /* 0C05F540 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C05F544u, 1);  /* 0C05F542 mov.l @Rm,Rn */
	r2 &= r6;  /* 0C05F544 and Rm,Rn */
	r2 += r1;  /* 0C05F546 add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C05F548 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F590u, 6); goto L_0C05F590; }  /* 0C05F54A bt */
L_0C05F54C: BLKS(0x0C05F54Cu);
	r3 = 0xC275DC0u; UPD(0x0C05F54Eu, 1);  /* 0C05F54C mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C05F550u, 1);  /* 0C05F54E mov.l @Rm,Rn */
	r2 -= r7;  /* 0C05F550 sub Rm,Rn */
	IF(0x0C05F552u); T = (s32)r2 >= 0;  /* 0C05F552 cmp/pz Rn */
	if (!T) { UPD(0x0C05F610u, 5); goto L_0C05F610; }  /* 0C05F554 bf */
L_0C05F556: BLKS(0x0C05F556u);
	r3 = 0xC224668u; UPD(0x0C05F558u, 1);  /* 0C05F556 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C05F55Au, 1);  /* 0C05F558 mov.l @Rm,Rn */
	r7 += r0;  /* 0C05F55A add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C05F55C cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F590u, 5); goto L_0C05F590; }  /* 0C05F55E bt */
L_0C05F560: BLKS(0x0C05F560u);
	r0 = 0x20000000u; UPD(0x0C05F562u, 1);  /* 0C05F560 mov.l @(disp,pc),Rn */
	T = (r6 & r0) == 0;  /* 0C05F562 tst Rm,Rn */
	{ u32 c_ = T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05F5D0u, 4); goto L_0C05F5D0; } UPD(0x0C05F568u, 1); goto L_0C05F568; }  /* 0C05F564 bt/s */
L_0C05F568: BLKS(0x0C05F568u);
	r6 = 0x14u;  /* 0C05F568 mov #imm,Rn */
	r0 = 0xC0ADD10u; UPD(0x0C05F56Cu, 2);  /* 0C05F56A mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C05F56Eu, 1);  /* 0C05F56C mov.w @Rm,Rn */
	IF(0x0C05F56Eu); { u32 t_ = r0; PR = 0x0C05F572u; r7 = r3 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADD10, 0x0C0ADD10u, 0x0C05F572u); }  /* 0C05F56E jsr @Rn */
L_0C05F572: BLKS(0x0C05F572u);
	r2 = 0x280u; UPD(0x0C05F574u, 1);  /* 0C05F572 mov.w @(disp,pc),Rn */
	IF(0x0C05F574u); MACL = r11 * r2;  /* 0C05F574 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C05F578u, 3);  /* 0C05F576 mov.l @(disp,pc),Rn */
	IF(0x0C05F578u); r5 = MACL;  /* 0C05F578 sts macl,Rn */
	r1 = 0x270u; UPD(0x0C05F57Cu, 2);  /* 0C05F57A mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C05F57C add Rm,Rn */
	r5 += r1;  /* 0C05F57E add Rm,Rn */
	r6 = R32(r5); UPD(0x0C05F582u, 3);  /* 0C05F580 mov.l @Rm,Rn */
	r4 = r11;  /* 0C05F582 mov Rm,Rn */
	r6 += 0xAu;  /* 0C05F584 add #imm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C05F588u, 3);  /* 0C05F586 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05F58Au, 1);  /* 0C05F588 mov.l Rm,@Rn */
	IF(0x0C05F58Au); { u32 t_ = r0; PR = 0x0C05F58Eu; r5 = 0x59u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C05F58Eu); }  /* 0C05F58A jsr @Rn */
L_0C05F58E: BLKS(0x0C05F58Eu);
	IF(0x0C05F58Eu); ;  /* 0C05F58E nop */
	UPD(0x0C05F590u, 1);
L_0C05F590: BLKS(0x0C05F590u);
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C05F592u, 1);  /* 0C05F590 mov.l @Rm+,Rn */
	r7 = 0xC275E18u; UPD(0x0C05F594u, 1);  /* 0C05F592 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C05F594 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F518u, 4); goto L_0C05F518; } UPD(0x0C05F59Au, 1); goto L_0C05F59A; }  /* 0C05F596 bf/s */
L_0C05F59A: BLKS(0x0C05F59Au);
	r13 = r10;  /* 0C05F59A mov Rm,Rn */
	UPD(0x0C05F59Cu, 1);
L_0C05F59C: BLKS(0x0C05F59Cu);
	r13 += 0xFFFFFFFFu;  /* 0C05F59C add #imm,Rn */
	r10 = (u32)(s32)(s16)r13;  /* 0C05F59E exts.w Rm,Rn */
	IF(0x0C05F5A0u); T = (s32)r10 >= 0;  /* 0C05F5A0 cmp/pz Rn */
	{ u32 c_ = T; r12 += 0xFFFFFFACu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F4F4u, 6); goto L_0C05F4F4; } goto L_0C05F5A6; }  /* 0C05F5A2 bt/s */
L_0C05F5A6: BLKS(0x0C05F5A6u);
	r8 = R32(r14); UPD(0x0C05F5A8u, 2);  /* 0C05F5A6 mov.l @Rm,Rn */
	r12 = 0xC2864F8u; UPD(0x0C05F5AAu, 1);  /* 0C05F5A8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r10 = v_; } UPD(0x0C05F5ACu, 1);  /* 0C05F5AA mov.l @Rm+,Rn */
	W32(r14, r8); UPD(0x0C05F5AEu, 1);  /* 0C05F5AC mov.l Rm,@Rn */
	T = (r10 & r10) == 0;  /* 0C05F5AE tst Rm,Rn */
	{ u32 c_ = !T; W32(r12, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F4C8u, 4); goto L_0C05F4C8; } UPD(0x0C05F5B4u, 1); goto L_0C05F5B4; }  /* 0C05F5B0 bf/s */
L_0C05F5B4: BLKS(0x0C05F5B4u);
	r14 += 0x8u;  /* 0C05F5B4 add #imm,Rn */
	UPD(0x0C05F5B6u, 1);
L_0C05F5B6: BLKS(0x0C05F5B6u);
	r15 = r14;  /* 0C05F5B6 mov Rm,Rn */
	IF(0x0C05F5B8u); PR = R32(r15); r15 += 4; UPD(0x0C05F5BAu, 2);  /* 0C05F5B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F5BCu, 1);  /* 0C05F5BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F5BEu, 1);  /* 0C05F5BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F5C0u, 1);  /* 0C05F5BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F5C2u, 1);  /* 0C05F5C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F5C4u, 1);  /* 0C05F5C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F5C6u, 1);  /* 0C05F5C4 mov.l @Rm+,Rn */
	IF(0x0C05F5C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05F5C6 rts */
L_0C05F5D0: BLKS(0x0C05F5D0u);
	r0 = 0xC0A9EA0u; UPD(0x0C05F5D2u, 1);  /* 0C05F5D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C05F5D2 mov Rm,Rn */
	IF(0x0C05F5D4u); { u32 t_ = r0; PR = 0x0C05F5D8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9EA0, 0x0C0A9EA0u, 0x0C05F5D8u); }  /* 0C05F5D4 jsr @Rn */
L_0C05F5D8: BLKS(0x0C05F5D8u);
	r0 = 0x280u; UPD(0x0C05F5DAu, 1);  /* 0C05F5D8 mov.w @(disp,pc),Rn */
	IF(0x0C05F5DAu); MACL = r11 * r0;  /* 0C05F5DA mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C05F5DEu, 3);  /* 0C05F5DC mov.l @(disp,pc),Rn */
	IF(0x0C05F5DEu); r0 = MACL;  /* 0C05F5DE sts macl,Rn */
	r6 = 0x269u; UPD(0x0C05F5E2u, 2);  /* 0C05F5E0 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C05F5E2 add Rm,Rn */
	IF(0x0C05F5E4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05F5E6u, 2);  /* 0C05F5E4 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C05F5E6 tst Rm,Rn */
	if (!T) { UPD(0x0C05F590u, 4); goto L_0C05F590; }  /* 0C05F5E8 bf */
L_0C05F5EA: BLKS(0x0C05F5EAu);
	r4 = r11;  /* 0C05F5EA mov Rm,Rn */
	r2 = 0xC066270u; UPD(0x0C05F5EEu, 2);  /* 0C05F5EC mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C05F5EE add #imm,Rn */
	r15 = r14;  /* 0C05F5F0 mov Rm,Rn */
	IF(0x0C05F5F2u); PR = R32(r15); r15 += 4; UPD(0x0C05F5F4u, 3);  /* 0C05F5F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F5F6u, 1);  /* 0C05F5F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F5F8u, 1);  /* 0C05F5F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F5FAu, 1);  /* 0C05F5F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F5FCu, 1);  /* 0C05F5FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F5FEu, 1);  /* 0C05F5FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F600u, 1);  /* 0C05F5FE mov.l @Rm+,Rn */
	IF(0x0C05F600u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C066270u: TAIL(f_0C066270); default: JUMPD(tv_); } }  /* 0C05F600 jmp @Rn */
L_0C05F610: BLKS(0x0C05F610u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C05F556u, 3); goto L_0C05F556; }  /* 0C05F610 bra */
L_0C05F620: BLKS(0x0C05F620u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C05F53Au, 3); goto L_0C05F53A; }  /* 0C05F620 bra */
}

/* FUN_0c05f680 */
void f_0C05F680(sh3_t *c)
{
	LOCALS;
L_0C05F680: BLKS(0x0C05F680u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05F682u, 1);  /* 0C05F680 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05F684u, 1);  /* 0C05F682 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05F686u, 1);  /* 0C05F684 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05F688u, 1);  /* 0C05F686 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05F68Au, 1);  /* 0C05F688 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05F68Cu, 1);  /* 0C05F68A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05F68Eu, 1);  /* 0C05F68C mov.l Rm,@-Rn */
	r13 = 0x1u;  /* 0C05F68E mov #imm,Rn */
	IF(0x0C05F690u); r15 -= 4; W32(r15, PR); UPD(0x0C05F692u, 2);  /* 0C05F690 sts.l pr,@-Rn */
	r4 = 0xC21F882u; UPD(0x0C05F694u, 1);  /* 0C05F692 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C05F696u, 1);  /* 0C05F694 mov.w @Rm,Rn */
	r2 = 0x280u; UPD(0x0C05F698u, 1);  /* 0C05F696 mov.w @(disp,pc),Rn */
	r13 &= r3;  /* 0C05F698 and Rm,Rn */
	IF(0x0C05F69Au); MACL = r13 * r2;  /* 0C05F69A mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05F69Eu, 4);  /* 0C05F69C mov.l @(disp,pc),Rn */
	IF(0x0C05F69Eu); r3 = MACL;  /* 0C05F69E sts macl,Rn */
	r3 += r0;  /* 0C05F6A0 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C05F6A4u, 3);  /* 0C05F6A2 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C05F6A6u, 1);  /* 0C05F6A4 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05F6A6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F784u, 4); goto L_0C05F784; } goto L_0C05F6AC; }  /* 0C05F6A8 bt/s */
L_0C05F6AC: BLKS(0x0C05F6ACu);
	r0 = R32(r3 + 0x4u); UPD(0x0C05F6AEu, 2);  /* 0C05F6AC mov.l @(disp,Rm),Rn */
	r10 = 0x3u;  /* 0C05F6AE mov #imm,Rn */
	IF(0x0C05F6B0u); ARG0(0x40ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05F6B0 shld Rm,Rn */
	r2 = 0xC16BE68u; UPD(0x0C05F6B4u, 3);  /* 0C05F6B2 mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C05F6B4 mov #imm,Rn */
	IF(0x0C05F6B6u); r12 = R32(r0 + r2); UPD(0x0C05F6B8u, 2);  /* 0C05F6B6 mov.l @(r0,Rm),Rn */
	r11 = 0x3u;  /* 0C05F6B8 mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C05F6BCu, 2);  /* 0C05F6BA mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0xCu); UPD(0x0C05F6BEu, 1);  /* 0C05F6BC mov.l @(disp,Rm),Rn */
	IF(0x0C05F6BEu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05F6BE shld Rm,Rn */
	IF(0x0C05F6C0u); ARG0(0x48BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C05F6C0 shld Rm,Rn */
	IF(0x0C05F6C2u); r9 = R32(r0 + r12); UPD(0x0C05F6C4u, 3);  /* 0C05F6C2 mov.l @(r0,Rm),Rn */
	r8 += r9;  /* 0C05F6C4 add Rm,Rn */
	r10 = R32(r8 + 0x4u); UPD(0x0C05F6C8u, 2);  /* 0C05F6C6 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFFu; UPD(0x0C05F6CAu, 1);  /* 0C05F6C8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r5 = v_; } UPD(0x0C05F6CCu, 1);  /* 0C05F6CA mov.l @Rm+,Rn */
	r6 = 0xC2864F8u; UPD(0x0C05F6CEu, 1);  /* 0C05F6CC mov.l @(disp,pc),Rn */
	r5 &= r7;  /* 0C05F6CE and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05F6D0 tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F784u, 5); goto L_0C05F784; } UPD(0x0C05F6D6u, 1); goto L_0C05F6D6; }  /* 0C05F6D2 bt/s */
L_0C05F6D6: BLKS(0x0C05F6D6u);
	r11 = 0xC26C8D0u; UPD(0x0C05F6D8u, 1);  /* 0C05F6D6 mov.l @(disp,pc),Rn */
	r12 = r3;  /* 0C05F6D8 mov Rm,Rn */
	UPD(0x0C05F6DAu, 1);
L_0C05F6DA: BLKS(0x0C05F6DAu);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C05F6DCu, 1);  /* 0C05F6DA mov.l @Rm+,Rn */
	r8 = 0xC224668u; UPD(0x0C05F6DEu, 1);  /* 0C05F6DC mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C05F6E0u, 1);  /* 0C05F6DE mov.l Rm,@Rn */
	{ u32 v_ = R32(r10); r10 += 4; r7 = v_; } UPD(0x0C05F6E2u, 1);  /* 0C05F6E0 mov.l @Rm+,Rn */
	r8 = 0x0u;  /* 0C05F6E2 mov #imm,Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C05F6E6u, 2);  /* 0C05F6E4 mov.l @(disp,Rm),Rn */
	r9 = 0x0u;  /* 0C05F6E6 mov #imm,Rn */
	r5 = 0xC26CADCu; UPD(0x0C05F6EAu, 2);  /* 0C05F6E8 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C05F6EA add Rm,Rn */
	W32(r5, r6); UPD(0x0C05F6EEu, 2);  /* 0C05F6EC mov.l Rm,@Rn */
	r3 = R32(r12 + 0x14u); UPD(0x0C05F6F0u, 1);  /* 0C05F6EE mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C05F6F2u, 1);  /* 0C05F6F0 mov.l @Rm+,Rn */
	r0 = 0xC275DC0u; UPD(0x0C05F6F4u, 1);  /* 0C05F6F2 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C05F6F4 add Rm,Rn */
	W32(r0, r3); UPD(0x0C05F6F8u, 2);  /* 0C05F6F6 mov.l Rm,@Rn */
L_0C05F6F8: BLKS(0x0C05F6F8u);
	r7 = 0xC38C064u; UPD(0x0C05F6FAu, 1);  /* 0C05F6F8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C05F6FA add Rm,Rn */
	r1 = R32(r7); UPD(0x0C05F6FEu, 2);  /* 0C05F6FC mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C05F700u, 1);  /* 0C05F6FE mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05F700 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F76Au, 4); goto L_0C05F76A; } goto L_0C05F706; }  /* 0C05F702 bt/s */
L_0C05F706: BLKS(0x0C05F706u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C05F708u, 2);  /* 0C05F706 mov.l @(disp,Rm),Rn */
	r2 = 0xC286284u; UPD(0x0C05F70Au, 1);  /* 0C05F708 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C05F70Cu, 1);  /* 0C05F70A mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C05F70C tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F768u, 4); goto L_0C05F768; } UPD(0x0C05F712u, 1); goto L_0C05F712; }  /* 0C05F70E bt/s */
L_0C05F712: BLKS(0x0C05F712u);
	r0 = 0xC2864A8u; UPD(0x0C05F714u, 1);  /* 0C05F712 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C05F714 mov Rm,Rn */
	IF(0x0C05F716u); ;  /* 0C05F716 nop */
	UPD(0x0C05F718u, 2);
L_0C05F718: BLKS(0x0C05F718u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05F71Au, 1);  /* 0C05F718 mov.l @Rm+,Rn */
	r2 = 0xC39306Cu; UPD(0x0C05F71Cu, 1);  /* 0C05F71A mov.l @(disp,pc),Rn */
	W32(r2, r5); UPD(0x0C05F71Eu, 1);  /* 0C05F71C mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r6 = v_; } UPD(0x0C05F720u, 1);  /* 0C05F71E mov.l @Rm+,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C05F722u, 1);  /* 0C05F720 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C05F722 add Rm,Rn */
	W32(r0, r2); UPD(0x0C05F726u, 2);  /* 0C05F724 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C05F728u, 1);  /* 0C05F726 mov.l @Rm+,Rn */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C05F72Au, 1);  /* 0C05F728 mov.l @(disp,Rm),Rn */
	r1 = 0xC26CADCu; UPD(0x0C05F72Cu, 1);  /* 0C05F72A mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C05F72C add Rm,Rn */
	r7 = R32(r1); UPD(0x0C05F730u, 2);  /* 0C05F72E mov.l @Rm,Rn */
	r7 -= r2;  /* 0C05F730 sub Rm,Rn */
	IF(0x0C05F732u); T = (s32)r7 >= 0;  /* 0C05F732 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F7C0u, 5); goto L_0C05F7C0; } UPD(0x0C05F738u, 1); goto L_0C05F738; }  /* 0C05F734 bf/s */
L_0C05F738: BLKS(0x0C05F738u);
	r1 = 0xC2864F8u; UPD(0x0C05F73Au, 1);  /* 0C05F738 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C05F73Cu, 1);  /* 0C05F73A mov.l @Rm,Rn */
	r1 = 0xFFFFFFFu; UPD(0x0C05F73Eu, 1);  /* 0C05F73C mov.l @(disp,pc),Rn */
	r2 &= r1;  /* 0C05F73E and Rm,Rn */
	r1 = 0xC286284u; UPD(0x0C05F742u, 2);  /* 0C05F740 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C05F744u, 1);  /* 0C05F742 mov.l @Rm,Rn */
	r2 += r1;  /* 0C05F744 add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C05F746 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05F75Eu, 5); goto L_0C05F75E; }  /* 0C05F748 bt */
L_0C05F74A: BLKS(0x0C05F74Au);
	r7 = 0xC275DC0u; UPD(0x0C05F74Cu, 1);  /* 0C05F74A mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C05F74Eu, 1);  /* 0C05F74C mov.l @Rm,Rn */
	r2 -= r6;  /* 0C05F74E sub Rm,Rn */
	IF(0x0C05F750u); T = (s32)r2 >= 0;  /* 0C05F750 cmp/pz Rn */
	if (!T) { UPD(0x0C05F7B0u, 5); goto L_0C05F7B0; }  /* 0C05F752 bf */
L_0C05F754: BLKS(0x0C05F754u);
	r7 = 0xC224668u; UPD(0x0C05F756u, 1);  /* 0C05F754 mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C05F758u, 1);  /* 0C05F756 mov.l @Rm,Rn */
	r6 += r5;  /* 0C05F758 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C05F75A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C05F7A0u, 5); goto L_0C05F7A0; }  /* 0C05F75C bf */
L_0C05F75E: BLKS(0x0C05F75Eu);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C05F760u, 1);  /* 0C05F75E mov.l @Rm+,Rn */
	r2 = 0xC286284u; UPD(0x0C05F762u, 1);  /* 0C05F760 mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C05F762 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F718u, 4); goto L_0C05F718; } UPD(0x0C05F768u, 1); goto L_0C05F768; }  /* 0C05F764 bf/s */
L_0C05F768: BLKS(0x0C05F768u);
	r0 = r8;  /* 0C05F768 mov Rm,Rn */
	UPD(0x0C05F76Au, 1);
L_0C05F76A: BLKS(0x0C05F76Au);
	r0 += 0x1u;  /* 0C05F76A add #imm,Rn */
	r3 = 0x13Fu; UPD(0x0C05F76Eu, 2);  /* 0C05F76C mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C05F76E exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C05F770 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F6F8u, 5); goto L_0C05F6F8; } goto L_0C05F776; }  /* 0C05F772 bf/s */
L_0C05F776: BLKS(0x0C05F776u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C05F778u, 2);  /* 0C05F776 mov.l @Rm+,Rn */
	r1 = 0xFFFFFFFu; UPD(0x0C05F77Au, 1);  /* 0C05F778 mov.l @(disp,pc),Rn */
	r9 = 0xC2864F8u; UPD(0x0C05F77Cu, 1);  /* 0C05F77A mov.l @(disp,pc),Rn */
	r8 &= r1;  /* 0C05F77C and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C05F77E tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05F6DAu, 5); goto L_0C05F6DA; } UPD(0x0C05F784u, 1); goto L_0C05F784; }  /* 0C05F780 bf/s */
L_0C05F784: BLKS(0x0C05F784u);
	r15 = r14;  /* 0C05F784 mov Rm,Rn */
	IF(0x0C05F786u); PR = R32(r15); r15 += 4; UPD(0x0C05F788u, 2);  /* 0C05F786 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05F78Au, 1);  /* 0C05F788 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05F78Cu, 1);  /* 0C05F78A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05F78Eu, 1);  /* 0C05F78C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05F790u, 1);  /* 0C05F78E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05F792u, 1);  /* 0C05F790 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05F794u, 1);  /* 0C05F792 mov.l @Rm+,Rn */
	IF(0x0C05F794u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05F794 rts */
L_0C05F7A0: BLKS(0x0C05F7A0u);
	r0 = 0xC06D0B0u; UPD(0x0C05F7A2u, 1);  /* 0C05F7A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C05F7A2 mov Rm,Rn */
	IF(0x0C05F7A4u); { u32 t_ = r0; PR = 0x0C05F7A8u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C06D0B0, 0x0C06D0B0u, 0x0C05F7A8u); }  /* 0C05F7A4 jsr @Rn */
L_0C05F7A8: BLKS(0x0C05F7A8u);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C05F76Au, 3); goto L_0C05F76A; }  /* 0C05F7A8 bra */
L_0C05F7B0: BLKS(0x0C05F7B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C05F754u, 3); goto L_0C05F754; }  /* 0C05F7B0 bra */
L_0C05F7C0: BLKS(0x0C05F7C0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C05F738u, 3); goto L_0C05F738; }  /* 0C05F7C0 bra */
}

/* FUN_0c05f810 */
void f_0C05F810(sh3_t *c)
{
	LOCALS;
L_0C05F810: BLKS(0x0C05F810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05F812u, 1);  /* 0C05F810 mov.l Rm,@-Rn */
	r5 = 0x24u;  /* 0C05F812 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05F816u, 2);  /* 0C05F814 mov.l Rm,@-Rn */
	r6 = 0x1u;  /* 0C05F816 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05F81Au, 2);  /* 0C05F818 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05F81Cu, 1);  /* 0C05F81A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C05F81C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05F820u, 2);  /* 0C05F81E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05F822u, 1);  /* 0C05F820 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05F824u, 1);  /* 0C05F822 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C05F824 mov #imm,Rn */
	r9 = 0xC050CD0u; UPD(0x0C05F828u, 2);  /* 0C05F826 mov.l @(disp,pc),Rn */
	IF(0x0C05F828u); r15 -= 4; W32(r15, PR); UPD(0x0C05F82Au, 1);  /* 0C05F828 sts.l pr,@-Rn */
	r4 = 0xC162C98u; UPD(0x0C05F82Cu, 1);  /* 0C05F82A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C05F82Eu, 1);  /* 0C05F82C mov.l @(disp,pc),Rn */
	IF(0x0C05F82Eu); { u32 t_ = r9; PR = 0x0C05F832u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F832u); }  /* 0C05F82E jsr @Rn */
L_0C05F832: BLKS(0x0C05F832u);
	r4 = 0xC162CF0u; UPD(0x0C05F834u, 1);  /* 0C05F832 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C05F834 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C05F838u, 2);  /* 0C05F836 mov.l @(disp,pc),Rn */
	IF(0x0C05F838u); { u32 t_ = r9; PR = 0x0C05F83Cu; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F83Cu); }  /* 0C05F838 jsr @Rn */
L_0C05F83C: BLKS(0x0C05F83Cu);
	r0 = r13;  /* 0C05F83C mov Rm,Rn */
	r0 &= 0x3u;  /* 0C05F83E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F840 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F84Au, 6); goto L_0C05F84A; } goto L_0C05F846; }  /* 0C05F842 bf/s */
L_0C05F846: BLKS(0x0C05F846u);
	{ r9 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C05FE30u, 4); goto L_0C05FE30; }  /* 0C05F846 bra */
L_0C05F84A: BLKS(0x0C05F84Au);
	r9 = r13;  /* 0C05F84A mov Rm,Rn */
	r9 += 0x4u;  /* 0C05F84C add #imm,Rn */
	UPD(0x0C05F84Eu, 2);
L_0C05F84E: BLKS(0x0C05F84Eu);
	r11 = 0xC050CD0u; UPD(0x0C05F850u, 1);  /* 0C05F84E mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C05F850 mov Rm,Rn */
	r12 = 0x0u;  /* 0C05F852 mov #imm,Rn */
	r8 += r8;  /* 0C05F854 add Rm,Rn */
	IF(0x0C05F856u); ;  /* 0C05F856 nop */
	UPD(0x0C05F858u, 4);
L_0C05F858: BLKS(0x0C05F858u);
	r2 = 0xC38BC64u; UPD(0x0C05F85Au, 1);  /* 0C05F858 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05F85A mov Rm,Rn */
	IF(0x0C05F85Cu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05F85Eu, 2);  /* 0C05F85C mov.w @(r0,Rm),Rn */
	r0 = 0x400u; UPD(0x0C05F860u, 1);  /* 0C05F85E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C05F860 exts.w Rm,Rn */
	T = r2 == r0;  /* 0C05F862 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C05F86Cu, 5); goto L_0C05F86C; }  /* 0C05F864 bf */
L_0C05F866: BLKS(0x0C05F866u);
	r6 = r12;  /* 0C05F866 mov Rm,Rn */
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C05FE20u, 4); goto L_0C05FE20; }  /* 0C05F868 bra */
L_0C05F86C: BLKS(0x0C05F86Cu);
	r4 = 0x401u; UPD(0x0C05F86Eu, 1);  /* 0C05F86C mov.w @(disp,pc),Rn */
	T = r2 == r4;  /* 0C05F86E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05F872u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C05F878u, 4); goto L_0C05F878; } goto L_0C05F874; }  /* 0C05F870 bf/s */
L_0C05F874: BLKS(0x0C05F874u);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C05FE10u, 4); goto L_0C05FE10; }  /* 0C05F874 bra */
L_0C05F878: BLKS(0x0C05F878u);
	{ u32 c_ = T; r6 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F880u, 3); goto L_0C05F880; } goto L_0C05F87C; }  /* 0C05F878 bt/s */
L_0C05F87C: BLKS(0x0C05F87Cu);
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C05FE00u, 4); goto L_0C05FE00; }  /* 0C05F87C bra */
L_0C05F880: BLKS(0x0C05F880u);
	r5 = 0x4000u; UPD(0x0C05F882u, 1);  /* 0C05F880 mov.w @(disp,pc),Rn */
	T = (r3 & r5) == 0;  /* 0C05F882 tst Rm,Rn */
	{ u32 c_ = !T; r6 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F88Cu, 4); goto L_0C05F88C; } goto L_0C05F888; }  /* 0C05F884 bf/s */
L_0C05F888: BLKS(0x0C05F888u);
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C05FDF0u, 4); goto L_0C05FDF0; }  /* 0C05F888 bra */
L_0C05F88C: BLKS(0x0C05F88Cu);
	r6 = r12;  /* 0C05F88C mov Rm,Rn */
	r4 = 0xC162D18u; UPD(0x0C05F890u, 2);  /* 0C05F88E mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C05F890 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C05F894u, 2);  /* 0C05F892 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C05F894 mov Rm,Rn */
	UPD(0x0C05F896u, 1);
L_0C05F896: BLKS(0x0C05F896u);
	r0 = 0xC050CD0u; UPD(0x0C05F898u, 1);  /* 0C05F896 mov.l @(disp,pc),Rn */
	IF(0x0C05F898u); { u32 t_ = r0; PR = 0x0C05F89Cu; IF(0x0C05F89Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F89Cu); }  /* 0C05F898 jsr @Rn */
L_0C05F89C: BLKS(0x0C05F89Cu);
	r7 = r12;  /* 0C05F89C mov Rm,Rn */
	UPD(0x0C05F89Eu, 1);
L_0C05F89E: BLKS(0x0C05F89Eu);
	r7 += 0x1u;  /* 0C05F89E add #imm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C05F8A0 exts.w Rm,Rn */
	r6 = 0xFu;  /* 0C05F8A2 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C05F8A4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F858u, 7); goto L_0C05F858; } goto L_0C05F8AA; }  /* 0C05F8A6 bf/s */
L_0C05F8AA: BLKS(0x0C05F8AAu);
	r11 = r13;  /* 0C05F8AA mov Rm,Rn */
	r11 += 0x1u;  /* 0C05F8AC add #imm,Rn */
	r13 = (u32)(s32)(s16)r11;  /* 0C05F8AE exts.w Rm,Rn */
	r9 = 0x1Fu;  /* 0C05F8B0 mov #imm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C05F8B2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05F83Cu, 9); goto L_0C05F83C; } goto L_0C05F8B8; }  /* 0C05F8B4 bf/s */
L_0C05F8B8: BLKS(0x0C05F8B8u);
	r12 = 0xC21F7F9u; UPD(0x0C05F8BAu, 2);  /* 0C05F8B8 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C05F8BCu, 1);  /* 0C05F8BA mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C05F8BC tst Rm,Rn */
	if (T) { UPD(0x0C05F920u, 4); goto L_0C05F920; }  /* 0C05F8BE bt */
L_0C05F8C0: BLKS(0x0C05F8C0u);
	r13 = 0xC286298u; UPD(0x0C05F8C2u, 1);  /* 0C05F8C0 mov.l @(disp,pc),Rn */
	r0 = R32(r13); UPD(0x0C05F8C4u, 1);  /* 0C05F8C2 mov.l @Rm,Rn */
	r0 &= 0x4u;  /* 0C05F8C4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F8C6 tst Rm,Rn */
	if (T) { UPD(0x0C05F8CEu, 5); goto L_0C05F8CE; }  /* 0C05F8C8 bt */
L_0C05F8CA: BLKS(0x0C05F8CAu);
	{ IF(0x0C05F8CCu); ; /* slot nop */ UPD(0x0C05FDD0u, 3); goto L_0C05FDD0; }  /* 0C05F8CA bra */
L_0C05F8CE: BLKS(0x0C05F8CEu);
	r3 = 0xC27DEF4u; UPD(0x0C05F8D0u, 1);  /* 0C05F8CE mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C05F8D2u, 1);  /* 0C05F8D0 mov.b @Rm,Rn */
	r0 = r1;  /* 0C05F8D2 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05F8D4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F8D6 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F8E8u, 6); goto L_0C05F8E8; } goto L_0C05F8DC; }  /* 0C05F8D8 bt/s */
L_0C05F8DC: BLKS(0x0C05F8DCu);
	r4 = 0xC3929C4u; UPD(0x0C05F8DEu, 2);  /* 0C05F8DC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C05F8E0u, 1);  /* 0C05F8DE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C05F8E0 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C05F8E2 and #imm,r0 */
	W8(r4, r0); UPD(0x0C05F8E6u, 3);  /* 0C05F8E4 mov.b Rm,@Rn */
	r0 = r1;  /* 0C05F8E6 mov Rm,Rn */
	UPD(0x0C05F8E8u, 1);
L_0C05F8E8: BLKS(0x0C05F8E8u);
	r0 &= 0x2u;  /* 0C05F8E8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F8EA tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F8FCu, 5); goto L_0C05F8FC; } goto L_0C05F8F0; }  /* 0C05F8EC bt/s */
L_0C05F8F0: BLKS(0x0C05F8F0u);
	r5 = 0xC3929C4u; UPD(0x0C05F8F2u, 2);  /* 0C05F8F0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C05F8F4u, 1);  /* 0C05F8F2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C05F8F4 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C05F8F6 and #imm,r0 */
	W8(r5, r0); UPD(0x0C05F8FAu, 3);  /* 0C05F8F8 mov.b Rm,@Rn */
	r0 = r1;  /* 0C05F8FA mov Rm,Rn */
	UPD(0x0C05F8FCu, 1);
L_0C05F8FC: BLKS(0x0C05F8FCu);
	r0 &= 0x8u;  /* 0C05F8FC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F8FE tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05F910u, 5); goto L_0C05F910; } goto L_0C05F904; }  /* 0C05F900 bt/s */
L_0C05F904: BLKS(0x0C05F904u);
	r6 = 0xC220C28u; UPD(0x0C05F906u, 2);  /* 0C05F904 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05F908u, 1);  /* 0C05F906 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C05F908 add #imm,Rn */
	r0 &= 0xFu;  /* 0C05F90A and #imm,r0 */
	W8(r6, r0); UPD(0x0C05F90Eu, 3);  /* 0C05F90C mov.b Rm,@Rn */
	r0 = r1;  /* 0C05F90E mov Rm,Rn */
	UPD(0x0C05F910u, 1);
L_0C05F910: BLKS(0x0C05F910u);
	r0 &= 0x4u;  /* 0C05F910 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05F912 tst Rm,Rn */
	if (T) { UPD(0x0C05F920u, 5); goto L_0C05F920; }  /* 0C05F914 bt */
L_0C05F916: BLKS(0x0C05F916u);
	r7 = 0xC220C28u; UPD(0x0C05F918u, 1);  /* 0C05F916 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C05F91Au, 1);  /* 0C05F918 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C05F91A add #imm,Rn */
	r0 &= 0xFu;  /* 0C05F91C and #imm,r0 */
	W8(r7, r0); UPD(0x0C05F920u, 3);  /* 0C05F91E mov.b Rm,@Rn */
L_0C05F920: BLKS(0x0C05F920u);
	r10 = 0xC050CD0u; UPD(0x0C05F922u, 1);  /* 0C05F920 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F922 mov #imm,Rn */
	r12 = 0xC0404000u; UPD(0x0C05F926u, 2);  /* 0C05F924 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C05F926 mov #imm,Rn */
	r4 = 0xC162C9Cu; UPD(0x0C05F92Au, 2);  /* 0C05F928 mov.l @(disp,pc),Rn */
	r11 = 0xC058240u; UPD(0x0C05F92Cu, 1);  /* 0C05F92A mov.l @(disp,pc),Rn */
	IF(0x0C05F92Cu); { u32 t_ = r10; PR = 0x0C05F930u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F930u); }  /* 0C05F92C jsr @Rn */
L_0C05F930: BLKS(0x0C05F930u);
	r13 = 0xC0509B0u; UPD(0x0C05F932u, 1);  /* 0C05F930 mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C05F932 mov Rm,Rn */
	r4 = 0xC162CA4u; UPD(0x0C05F936u, 2);  /* 0C05F934 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F936 mov #imm,Rn */
	IF(0x0C05F938u); { u32 t_ = r10; PR = 0x0C05F93Cu; r6 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F93Cu); }  /* 0C05F938 jsr @Rn */
L_0C05F93C: BLKS(0x0C05F93Cu);
	IF(0x0C05F93Cu); { u32 t_ = r11; PR = 0x0C05F940u; IF(0x0C05F93Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058240, 0x0C058240u, 0x0C05F940u); }  /* 0C05F93C jsr @Rn */
L_0C05F940: BLKS(0x0C05F940u);
	r4 = r0;  /* 0C05F940 mov Rm,Rn */
	r5 = 0x24u;  /* 0C05F942 mov #imm,Rn */
	IF(0x0C05F944u); { u32 t_ = r13; PR = 0x0C05F948u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05F948u); }  /* 0C05F944 jsr @Rn */
L_0C05F948: BLKS(0x0C05F948u);
	r4 = 0x200u; UPD(0x0C05F94Au, 1);  /* 0C05F948 mov.w @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F94A mov #imm,Rn */
	r11 = 0x4040C000u; UPD(0x0C05F94Eu, 2);  /* 0C05F94C mov.l @(disp,pc),Rn */
	IF(0x0C05F94Eu); { u32 t_ = r13; PR = 0x0C05F952u; r6 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05F952u); }  /* 0C05F94E jsr @Rn */
L_0C05F952: BLKS(0x0C05F952u);
	r4 = 0xC162CA8u; UPD(0x0C05F954u, 1);  /* 0C05F952 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05F954 mov Rm,Rn */
	r5 = 0x24u;  /* 0C05F956 mov #imm,Rn */
	IF(0x0C05F958u); { u32 t_ = r10; PR = 0x0C05F95Cu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F95Cu); }  /* 0C05F958 jsr @Rn */
L_0C05F95C: BLKS(0x0C05F95Cu);
	r7 = r11;  /* 0C05F95C mov Rm,Rn */
	r4 = 0xC162CACu; UPD(0x0C05F960u, 2);  /* 0C05F95E mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F960 mov #imm,Rn */
	IF(0x0C05F962u); { u32 t_ = r10; PR = 0x0C05F966u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F966u); }  /* 0C05F962 jsr @Rn */
L_0C05F966: BLKS(0x0C05F966u);
	r0 = 0xC28672Cu; UPD(0x0C05F968u, 1);  /* 0C05F966 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F968 mov #imm,Rn */
	r4 = R32(r0); UPD(0x0C05F96Cu, 2);  /* 0C05F96A mov.l @Rm,Rn */
	r8 = 0xC27DDA4u; UPD(0x0C05F96Eu, 1);  /* 0C05F96C mov.l @(disp,pc),Rn */
	IF(0x0C05F96Eu); { u32 t_ = r13; PR = 0x0C05F972u; r6 = 0x15u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05F972u); }  /* 0C05F96E jsr @Rn */
L_0C05F972: BLKS(0x0C05F972u);
	r12 = 0xC0508F0u; UPD(0x0C05F974u, 1);  /* 0C05F972 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05F974 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C05F978u, 2);  /* 0C05F976 mov.l @Rm,Rn */
	r9 = 0xC21CC2Cu; UPD(0x0C05F97Au, 1);  /* 0C05F978 mov.l @(disp,pc),Rn */
	IF(0x0C05F97Au); { u32 t_ = r13; PR = 0x0C05F97Eu; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05F97Eu); }  /* 0C05F97A jsr @Rn */
L_0C05F97E: BLKS(0x0C05F97Eu);
	r4 = R32(r9); UPD(0x0C05F980u, 1);  /* 0C05F97E mov.l @Rm,Rn */
	r5 = 0x23u;  /* 0C05F980 mov #imm,Rn */
	IF(0x0C05F982u); { u32 t_ = r12; PR = 0x0C05F986u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C05F986u); }  /* 0C05F982 jsr @Rn */
L_0C05F986: BLKS(0x0C05F986u);
	r7 = 0xC392D58u; UPD(0x0C05F988u, 1);  /* 0C05F986 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C05F988 mov #imm,Rn */
	r4 = R32(r7); UPD(0x0C05F98Cu, 2);  /* 0C05F98A mov.l @Rm,Rn */
	IF(0x0C05F98Cu); { u32 t_ = r12; PR = 0x0C05F990u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C05F990u); }  /* 0C05F98C jsr @Rn */
L_0C05F990: BLKS(0x0C05F990u);
	r4 = 0xC162CB0u; UPD(0x0C05F992u, 1);  /* 0C05F990 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05F992 mov Rm,Rn */
	r5 = 0x21u;  /* 0C05F994 mov #imm,Rn */
	IF(0x0C05F996u); { u32 t_ = r10; PR = 0x0C05F99Au; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F99Au); }  /* 0C05F996 jsr @Rn */
L_0C05F99A: BLKS(0x0C05F99Au);
	r4 = 0xC162CB8u; UPD(0x0C05F99Cu, 1);  /* 0C05F99A mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05F99C mov Rm,Rn */
	r5 = 0x20u;  /* 0C05F99E mov #imm,Rn */
	IF(0x0C05F9A0u); { u32 t_ = r10; PR = 0x0C05F9A4u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F9A4u); }  /* 0C05F9A0 jsr @Rn */
L_0C05F9A4: BLKS(0x0C05F9A4u);
	r4 = 0xC162CC0u; UPD(0x0C05F9A6u, 1);  /* 0C05F9A4 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05F9A6 mov Rm,Rn */
	r5 = 0x1Fu;  /* 0C05F9A8 mov #imm,Rn */
	IF(0x0C05F9AAu); { u32 t_ = r10; PR = 0x0C05F9AEu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F9AEu); }  /* 0C05F9AA jsr @Rn */
L_0C05F9AE: BLKS(0x0C05F9AEu);
	r4 = 0xC162CC8u; UPD(0x0C05F9B0u, 1);  /* 0C05F9AE mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05F9B0 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C05F9B2 mov #imm,Rn */
	IF(0x0C05F9B4u); { u32 t_ = r10; PR = 0x0C05F9B8u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F9B8u); }  /* 0C05F9B4 jsr @Rn */
L_0C05F9B8: BLKS(0x0C05F9B8u);
	r7 = r11;  /* 0C05F9B8 mov Rm,Rn */
	r4 = 0xC162D10u; UPD(0x0C05F9BCu, 2);  /* 0C05F9BA mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C05F9BC mov #imm,Rn */
	IF(0x0C05F9BEu); { u32 t_ = r10; PR = 0x0C05F9C2u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05F9C2u); }  /* 0C05F9BE jsr @Rn */
L_0C05F9C2: BLKS(0x0C05F9C2u);
	r6 = 0xC275DD0u; UPD(0x0C05F9C4u, 1);  /* 0C05F9C2 mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C05F9C4 mov #imm,Rn */
	r9 = 0xC050A80u; UPD(0x0C05F9C8u, 2);  /* 0C05F9C6 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C05F9CAu, 1);  /* 0C05F9C8 mov.b @Rm,Rn */
	IF(0x0C05F9CAu); { u32 t_ = r9; PR = 0x0C05F9CEu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05F9CEu); }  /* 0C05F9CA jsr @Rn */
L_0C05F9CE: BLKS(0x0C05F9CEu);
	r5 = 0xC21CA14u; UPD(0x0C05F9D0u, 1);  /* 0C05F9CE mov.l @(disp,pc),Rn */
	r6 = 0x1Bu;  /* 0C05F9D0 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05F9D4u, 2);  /* 0C05F9D2 mov.b @Rm,Rn */
	IF(0x0C05F9D4u); { u32 t_ = r9; PR = 0x0C05F9D8u; r5 = 0x21u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05F9D8u); }  /* 0C05F9D4 jsr @Rn */
L_0C05F9D8: BLKS(0x0C05F9D8u);
	r4 = 0xC286277u; UPD(0x0C05F9DAu, 1);  /* 0C05F9D8 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C05F9DA mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C05F9DEu, 2);  /* 0C05F9DC mov.b @Rm,Rn */
	r6 = 0x18u;  /* 0C05F9DE mov #imm,Rn */
	IF(0x0C05F9E0u); { u32 t_ = r9; PR = 0x0C05F9E4u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05F9E4u); }  /* 0C05F9E0 jsr @Rn */
L_0C05F9E4: BLKS(0x0C05F9E4u);
	r2 = 0xC286268u; UPD(0x0C05F9E6u, 1);  /* 0C05F9E4 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C05F9E6 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05F9EAu, 2);  /* 0C05F9E8 mov.b @Rm,Rn */
	r6 = 0x1Bu;  /* 0C05F9EA mov #imm,Rn */
	r8 = 0xC285314u; UPD(0x0C05F9EEu, 2);  /* 0C05F9EC mov.l @(disp,pc),Rn */
	IF(0x0C05F9EEu); { u32 t_ = r9; PR = 0x0C05F9F2u; r4 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05F9F2u); }  /* 0C05F9EE jsr @Rn */
L_0C05F9F2: BLKS(0x0C05F9F2u);
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C05F9F4u, 1);  /* 0C05F9F2 mov.w @Rm,Rn */
	r5 = 0x1Fu;  /* 0C05F9F4 mov #imm,Rn */
	r12 = 0xC392D76u; UPD(0x0C05F9F8u, 2);  /* 0C05F9F6 mov.l @(disp,pc),Rn */
	r4 = r13 & 0xFFFF;  /* 0C05F9F8 extu.w Rm,Rn */
	IF(0x0C05F9FAu); { u32 t_ = r9; PR = 0x0C05F9FEu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05F9FEu); }  /* 0C05F9FA jsr @Rn */
L_0C05F9FE: BLKS(0x0C05F9FEu);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C05FA00u, 1);  /* 0C05F9FE mov.w @Rm,Rn */
	r5 = 0x1Eu;  /* 0C05FA00 mov #imm,Rn */
	r4 = r11 & 0xFFFF;  /* 0C05FA02 extu.w Rm,Rn */
	{ r6 = 0x18u; /* slot mov #imm,Rn */ UPD(0x0C05FAB0u, 5); goto L_0C05FAB0; }  /* 0C05FA04 bra */
L_0C05FAB0: BLKS(0x0C05FAB0u);
	IF(0x0C05FAB0u); { u32 t_ = r9; PR = 0x0C05FAB4u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FAB4u); }  /* 0C05FAB0 jsr @Rn */
L_0C05FAB4: BLKS(0x0C05FAB4u);
	r9 = 0xC162D1Cu; UPD(0x0C05FAB6u, 1);  /* 0C05FAB4 mov.l @(disp,pc),Rn */
	IF(0x0C05FAB6u); ;  /* 0C05FAB6 nop */
	UPD(0x0C05FAB8u, 1);
L_0C05FAB8: BLKS(0x0C05FAB8u);
	r5 = 0xC393070u; UPD(0x0C05FABAu, 1);  /* 0C05FAB8 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C05FABA mov Rm,Rn */
	IF(0x0C05FABCu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05FABEu, 2);  /* 0C05FABC mov.b @(r0,Rm),Rn */
	r5 = 0x1Du;  /* 0C05FABE mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C05FAC0 extu.b Rm,Rn */
	r13 = 0xC162D24u; UPD(0x0C05FAC4u, 3);  /* 0C05FAC2 mov.l @(disp,pc),Rn */
	IF(0x0C05FAC4u); r0 <<= 2;  /* 0C05FAC4 shll2 Rn */
	r8 += 0x16u;  /* 0C05FAC6 add #imm,Rn */
	r6 = r8;  /* 0C05FAC8 mov Rm,Rn */
	IF(0x0C05FACAu); r4 = R32(r0 + r9); UPD(0x0C05FACCu, 4);  /* 0C05FACA mov.l @(r0,Rm),Rn */
	IF(0x0C05FACCu); { u32 t_ = r10; PR = 0x0C05FAD0u; IF(0x0C05FACEu); r7 = R32(r0 + r13); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FAD0u); }  /* 0C05FACC jsr @Rn */
L_0C05FAD0: BLKS(0x0C05FAD0u);
	r3 = r8;  /* 0C05FAD0 mov Rm,Rn */
	r3 += 0xFFFFFFEBu;  /* 0C05FAD2 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C05FAD4 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C05FAD6 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C05FAD8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05FAB8u, 8); goto L_0C05FAB8; } goto L_0C05FADE; }  /* 0C05FADA bf/s */
L_0C05FADE: BLKS(0x0C05FADEu);
	r11 = 0xC284EB8u; UPD(0x0C05FAE0u, 2);  /* 0C05FADE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C05FAE2u, 1);  /* 0C05FAE0 mov.w @Rm,Rn */
	r6 = 0x13u;  /* 0C05FAE2 mov #imm,Rn */
	r11 = 0xC0509B0u; UPD(0x0C05FAE6u, 2);  /* 0C05FAE4 mov.l @(disp,pc),Rn */
	r8 = 0xC21CC38u; UPD(0x0C05FAE8u, 1);  /* 0C05FAE6 mov.l @(disp,pc),Rn */
	IF(0x0C05FAE8u); { u32 t_ = r11; PR = 0x0C05FAECu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05FAECu); }  /* 0C05FAE8 jsr @Rn */
L_0C05FAEC: BLKS(0x0C05FAECu);
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C05FAEEu, 1);  /* 0C05FAEC mov.w @Rm,Rn */
	r5 = 0x1Cu;  /* 0C05FAEE mov #imm,Rn */
	r4 = r10 & 0xFFFF;  /* 0C05FAF0 extu.w Rm,Rn */
	r10 = 0xC050A80u; UPD(0x0C05FAF4u, 3);  /* 0C05FAF2 mov.l @(disp,pc),Rn */
	r12 = 0xC050CD0u; UPD(0x0C05FAF6u, 1);  /* 0C05FAF4 mov.l @(disp,pc),Rn */
	IF(0x0C05FAF6u); { u32 t_ = r10; PR = 0x0C05FAFAu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FAFAu); }  /* 0C05FAF6 jsr @Rn */
L_0C05FAFA: BLKS(0x0C05FAFAu);
	r7 = 0xC392DD0u; UPD(0x0C05FAFCu, 1);  /* 0C05FAFA mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C05FAFC mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C05FB00u, 2);  /* 0C05FAFE mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C05FB00 mov #imm,Rn */
	r4 = r6 & 0xFFFF;  /* 0C05FB02 extu.w Rm,Rn */
	r9 = 0x4040C000u; UPD(0x0C05FB06u, 3);  /* 0C05FB04 mov.l @(disp,pc),Rn */
	IF(0x0C05FB06u); { u32 t_ = r10; PR = 0x0C05FB0Au; r6 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FB0Au); }  /* 0C05FB06 jsr @Rn */
L_0C05FB0A: BLKS(0x0C05FB0Au);
	r4 = 0xC162CD0u; UPD(0x0C05FB0Cu, 1);  /* 0C05FB0A mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C05FB0C mov #imm,Rn */
	r6 = 0x13u;  /* 0C05FB0E mov #imm,Rn */
	IF(0x0C05FB10u); { u32 t_ = r12; PR = 0x0C05FB14u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FB14u); }  /* 0C05FB10 jsr @Rn */
L_0C05FB14: BLKS(0x0C05FB14u);
	r4 = 0xC162CDCu; UPD(0x0C05FB16u, 1);  /* 0C05FB14 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C05FB16 mov #imm,Rn */
	r6 = 0x13u;  /* 0C05FB18 mov #imm,Rn */
	IF(0x0C05FB1Au); { u32 t_ = r12; PR = 0x0C05FB1Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FB1Eu); }  /* 0C05FB1A jsr @Rn */
L_0C05FB1E: BLKS(0x0C05FB1Eu);
	r12 = 0x0u;  /* 0C05FB1E mov #imm,Rn */
	UPD(0x0C05FB20u, 1);
L_0C05FB20: BLKS(0x0C05FB20u);
	r2 = 0x100u; UPD(0x0C05FB22u, 1);  /* 0C05FB20 mov.w @(disp,pc),Rn */
	T = r12 == r2;  /* 0C05FB22 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C05FB2Cu, 4); goto L_0C05FB2C; } goto L_0C05FB28; }  /* 0C05FB24 bf/s */
L_0C05FB28: BLKS(0x0C05FB28u);
	{ r5 += 0x1Au; /* slot add #imm,Rn */ UPD(0x0C05FDC0u, 4); goto L_0C05FDC0; }  /* 0C05FB28 bra */
L_0C05FB2C: BLKS(0x0C05FB2Cu);
	r9 = r12;  /* 0C05FB2C mov Rm,Rn */
	r4 = 0xC286068u; UPD(0x0C05FB30u, 2);  /* 0C05FB2E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C05FB30 add Rm,Rn */
	r0 = r9;  /* 0C05FB32 mov Rm,Rn */
	IF(0x0C05FB34u); r6 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05FB36u, 3);  /* 0C05FB34 mov.w @(r0,Rm),Rn */
	r5 = 0x400u; UPD(0x0C05FB38u, 1);  /* 0C05FB36 mov.w @(disp,pc),Rn */
	r4 = r6 & 0xFFFF;  /* 0C05FB38 extu.w Rm,Rn */
	T = r4 == r5;  /* 0C05FB3A cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C05FB78u, 5); goto L_0C05FB78; } goto L_0C05FB40; }  /* 0C05FB3C bt/s */
L_0C05FB40: BLKS(0x0C05FB40u);
	r8 += 0x1Au;  /* 0C05FB40 add #imm,Rn */
	r5 = r8;  /* 0C05FB42 mov Rm,Rn */
	IF(0x0C05FB44u); { u32 t_ = r11; PR = 0x0C05FB48u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05FB48u); }  /* 0C05FB44 jsr @Rn */
L_0C05FB48: BLKS(0x0C05FB48u);
	r4 = 0xC2175F4u; UPD(0x0C05FB4Au, 1);  /* 0C05FB48 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FB4A mov Rm,Rn */
	IF(0x0C05FB4Cu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05FB4Eu, 2);  /* 0C05FB4C mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FB4E mov Rm,Rn */
	r4 = r7 & 0xFFFF;  /* 0C05FB50 extu.w Rm,Rn */
	IF(0x0C05FB52u); { u32 t_ = r10; PR = 0x0C05FB56u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FB56u); }  /* 0C05FB52 jsr @Rn */
L_0C05FB56: BLKS(0x0C05FB56u);
	r6 = 0xC223068u; UPD(0x0C05FB58u, 1);  /* 0C05FB56 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FB58 mov Rm,Rn */
	IF(0x0C05FB5Au); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05FB5Cu, 2);  /* 0C05FB5A mov.w @(r0,Rm),Rn */
	r4 = r5 & 0xFFFF;  /* 0C05FB5C extu.w Rm,Rn */
	r5 = r8;  /* 0C05FB5E mov Rm,Rn */
	IF(0x0C05FB60u); { u32 t_ = r10; PR = 0x0C05FB64u; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FB64u); }  /* 0C05FB60 jsr @Rn */
L_0C05FB64: BLKS(0x0C05FB64u);
	r3 = 0xC2173D8u; UPD(0x0C05FB66u, 1);  /* 0C05FB64 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FB66 mov Rm,Rn */
	IF(0x0C05FB68u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C05FB6Au, 2);  /* 0C05FB68 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FB6A mov Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C05FB6C extu.w Rm,Rn */
	IF(0x0C05FB6Eu); { u32 t_ = r10; PR = 0x0C05FB72u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FB72u); }  /* 0C05FB6E jsr @Rn */
L_0C05FB72: BLKS(0x0C05FB72u);
	r7 = r13;  /* 0C05FB72 mov Rm,Rn */
	r7 += 0x1u;  /* 0C05FB74 add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C05FB76 exts.w Rm,Rn */
	UPD(0x0C05FB78u, 3);
L_0C05FB78: BLKS(0x0C05FB78u);
	r8 = r12;  /* 0C05FB78 mov Rm,Rn */
	r8 += 0x1u;  /* 0C05FB7A add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C05FB7C exts.w Rm,Rn */
	UPD(0x0C05FB7Eu, 3);
L_0C05FB7E: BLKS(0x0C05FB7Eu);
	r0 = 0x6u;  /* 0C05FB7E mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C05FB80 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05FB20u, 5); goto L_0C05FB20; }  /* 0C05FB82 bf */
L_0C05FB84: BLKS(0x0C05FB84u);
	r13 = 0x0u;  /* 0C05FB84 mov #imm,Rn */
	r10 = 0xC050A80u; UPD(0x0C05FB88u, 2);  /* 0C05FB86 mov.l @(disp,pc),Rn */
	r11 = 0xC0509B0u; UPD(0x0C05FB8Au, 1);  /* 0C05FB88 mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C05FB8A mov Rm,Rn */
	UPD(0x0C05FB8Cu, 1);
L_0C05FB8C: BLKS(0x0C05FB8Cu);
	r9 = 0x100u; UPD(0x0C05FB8Eu, 1);  /* 0C05FB8C mov.w @(disp,pc),Rn */
	T = r12 == r9;  /* 0C05FB8E cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C05FB98u, 4); goto L_0C05FB98; } goto L_0C05FB94; }  /* 0C05FB90 bf/s */
L_0C05FB94: BLKS(0x0C05FB94u);
	{ r5 += 0x12u; /* slot add #imm,Rn */ UPD(0x0C05FDB0u, 4); goto L_0C05FDB0; }  /* 0C05FB94 bra */
L_0C05FB98: BLKS(0x0C05FB98u);
	r9 = r12;  /* 0C05FB98 mov Rm,Rn */
	r9 += r9;  /* 0C05FB9A add Rm,Rn */
	r7 = 0xC21CA2Cu; UPD(0x0C05FB9Eu, 3);  /* 0C05FB9C mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FB9E mov Rm,Rn */
	IF(0x0C05FBA0u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C05FBA2u, 2);  /* 0C05FBA0 mov.w @(r0,Rm),Rn */
	r5 = 0x400u; UPD(0x0C05FBA4u, 1);  /* 0C05FBA2 mov.w @(disp,pc),Rn */
	r4 = r6 & 0xFFFF;  /* 0C05FBA4 extu.w Rm,Rn */
	T = r4 == r5;  /* 0C05FBA6 cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C05FBE4u, 5); goto L_0C05FBE4; } goto L_0C05FBAC; }  /* 0C05FBA8 bt/s */
L_0C05FBAC: BLKS(0x0C05FBACu);
	r8 += 0x12u;  /* 0C05FBAC add #imm,Rn */
	r5 = r8;  /* 0C05FBAE mov Rm,Rn */
	IF(0x0C05FBB0u); { u32 t_ = r11; PR = 0x0C05FBB4u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05FBB4u); }  /* 0C05FBB0 jsr @Rn */
L_0C05FBB4: BLKS(0x0C05FBB4u);
	r7 = 0xC283CB8u; UPD(0x0C05FBB6u, 1);  /* 0C05FBB4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FBB6 mov Rm,Rn */
	IF(0x0C05FBB8u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C05FBBAu, 2);  /* 0C05FBB8 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FBBA mov Rm,Rn */
	r4 = r6 & 0xFFFF;  /* 0C05FBBC extu.w Rm,Rn */
	IF(0x0C05FBBEu); { u32 t_ = r10; PR = 0x0C05FBC2u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FBC2u); }  /* 0C05FBBE jsr @Rn */
L_0C05FBC2: BLKS(0x0C05FBC2u);
	r5 = 0xC22466Eu; UPD(0x0C05FBC4u, 1);  /* 0C05FBC2 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FBC4 mov Rm,Rn */
	IF(0x0C05FBC6u); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05FBC8u, 2);  /* 0C05FBC6 mov.w @(r0,Rm),Rn */
	r6 = 0x1Au;  /* 0C05FBC8 mov #imm,Rn */
	r4 = r3 & 0xFFFF;  /* 0C05FBCA extu.w Rm,Rn */
	IF(0x0C05FBCCu); { u32 t_ = r10; PR = 0x0C05FBD0u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FBD0u); }  /* 0C05FBCC jsr @Rn */
L_0C05FBD0: BLKS(0x0C05FBD0u);
	r2 = 0xC392E26u; UPD(0x0C05FBD2u, 1);  /* 0C05FBD0 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FBD2 mov Rm,Rn */
	IF(0x0C05FBD4u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05FBD6u, 2);  /* 0C05FBD4 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FBD6 mov Rm,Rn */
	r4 = r9 & 0xFFFF;  /* 0C05FBD8 extu.w Rm,Rn */
	IF(0x0C05FBDAu); { u32 t_ = r10; PR = 0x0C05FBDEu; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FBDEu); }  /* 0C05FBDA jsr @Rn */
L_0C05FBDE: BLKS(0x0C05FBDEu);
	r4 = r13;  /* 0C05FBDE mov Rm,Rn */
	r4 += 0x1u;  /* 0C05FBE0 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C05FBE2 exts.w Rm,Rn */
	UPD(0x0C05FBE4u, 3);
L_0C05FBE4: BLKS(0x0C05FBE4u);
	r8 = r12;  /* 0C05FBE4 mov Rm,Rn */
	r8 += 0x1u;  /* 0C05FBE6 add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C05FBE8 exts.w Rm,Rn */
	UPD(0x0C05FBEAu, 3);
L_0C05FBEA: BLKS(0x0C05FBEAu);
	r0 = 0x6u;  /* 0C05FBEA mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C05FBEC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05FB8Cu, 5); goto L_0C05FB8C; }  /* 0C05FBEE bf */
L_0C05FBF0: BLKS(0x0C05FBF0u);
	r13 = 0x0u;  /* 0C05FBF0 mov #imm,Rn */
	r12 = 0xC050CD0u; UPD(0x0C05FBF4u, 2);  /* 0C05FBF2 mov.l @(disp,pc),Rn */
	r10 = 0xC050A80u; UPD(0x0C05FBF6u, 1);  /* 0C05FBF4 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C05FBF6 mov #imm,Rn */
	r11 = 0xC0509B0u; UPD(0x0C05FBFAu, 2);  /* 0C05FBF8 mov.l @(disp,pc),Rn */
	r4 = 0xC162CE8u; UPD(0x0C05FBFCu, 1);  /* 0C05FBFA mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C05FBFEu, 1);  /* 0C05FBFC mov.l @(disp,pc),Rn */
	IF(0x0C05FBFEu); { u32 t_ = r12; PR = 0x0C05FC02u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FC02u); }  /* 0C05FBFE jsr @Rn */
L_0C05FC02: BLKS(0x0C05FC02u);
	r12 = r13;  /* 0C05FC02 mov Rm,Rn */
	UPD(0x0C05FC04u, 1);
L_0C05FC04: BLKS(0x0C05FC04u);
	r4 = 0x100u; UPD(0x0C05FC06u, 1);  /* 0C05FC04 mov.w @(disp,pc),Rn */
	T = r12 == r4;  /* 0C05FC06 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05FC10u, 4); goto L_0C05FC10; } goto L_0C05FC0C; }  /* 0C05FC08 bf/s */
L_0C05FC0C: BLKS(0x0C05FC0Cu);
	{ r5 = 0u - r13; /* slot neg Rm,Rn */ UPD(0x0C05FD90u, 4); goto L_0C05FD90; }  /* 0C05FC0C bra */
L_0C05FC10: BLKS(0x0C05FC10u);
	r9 = r13;  /* 0C05FC10 mov Rm,Rn */
	r9 += r9;  /* 0C05FC12 add Rm,Rn */
	r6 = 0xC2852C8u; UPD(0x0C05FC16u, 3);  /* 0C05FC14 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FC16 mov Rm,Rn */
	IF(0x0C05FC18u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05FC1Au, 2);  /* 0C05FC18 mov.w @(r0,Rm),Rn */
	r3 = 0x400u; UPD(0x0C05FC1Cu, 1);  /* 0C05FC1A mov.w @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C05FC1C extu.w Rm,Rn */
	T = r4 == r3;  /* 0C05FC1E cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C05FC5Cu, 5); goto L_0C05FC5C; } goto L_0C05FC24; }  /* 0C05FC20 bt/s */
L_0C05FC24: BLKS(0x0C05FC24u);
	r8 += 0x9u;  /* 0C05FC24 add #imm,Rn */
	r5 = r8;  /* 0C05FC26 mov Rm,Rn */
	IF(0x0C05FC28u); { u32 t_ = r11; PR = 0x0C05FC2Cu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05FC2Cu); }  /* 0C05FC28 jsr @Rn */
L_0C05FC2C: BLKS(0x0C05FC2Cu);
	r6 = 0xC392DECu; UPD(0x0C05FC2Eu, 1);  /* 0C05FC2C mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FC2E mov Rm,Rn */
	IF(0x0C05FC30u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05FC32u, 2);  /* 0C05FC30 mov.w @(r0,Rm),Rn */
	r4 = r5 & 0xFFFF;  /* 0C05FC32 extu.w Rm,Rn */
	r5 = r8;  /* 0C05FC34 mov Rm,Rn */
	IF(0x0C05FC36u); { u32 t_ = r10; PR = 0x0C05FC3Au; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FC3Au); }  /* 0C05FC36 jsr @Rn */
L_0C05FC3A: BLKS(0x0C05FC3Au);
	r3 = 0xC21F884u; UPD(0x0C05FC3Cu, 1);  /* 0C05FC3A mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FC3C mov Rm,Rn */
	IF(0x0C05FC3Eu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C05FC40u, 2);  /* 0C05FC3E mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FC40 mov Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C05FC42 extu.w Rm,Rn */
	IF(0x0C05FC44u); { u32 t_ = r10; PR = 0x0C05FC48u; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FC48u); }  /* 0C05FC44 jsr @Rn */
L_0C05FC48: BLKS(0x0C05FC48u);
	r4 = 0xC3929D0u; UPD(0x0C05FC4Au, 1);  /* 0C05FC48 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05FC4A mov Rm,Rn */
	IF(0x0C05FC4Cu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05FC4Eu, 2);  /* 0C05FC4C mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FC4E mov Rm,Rn */
	r4 = r9 & 0xFFFF;  /* 0C05FC50 extu.w Rm,Rn */
	IF(0x0C05FC52u); { u32 t_ = r10; PR = 0x0C05FC56u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FC56u); }  /* 0C05FC52 jsr @Rn */
L_0C05FC56: BLKS(0x0C05FC56u);
	r7 = r13;  /* 0C05FC56 mov Rm,Rn */
	r7 += 0x1u;  /* 0C05FC58 add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C05FC5A exts.w Rm,Rn */
	UPD(0x0C05FC5Cu, 3);
L_0C05FC5C: BLKS(0x0C05FC5Cu);
	r8 = r12;  /* 0C05FC5C mov Rm,Rn */
	r8 += 0x1u;  /* 0C05FC5E add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C05FC60 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C05FC62 mov #imm,Rn */
	UPD(0x0C05FC64u, 4);
L_0C05FC64: BLKS(0x0C05FC64u);
	T = (s32)r13 > (s32)r0;  /* 0C05FC64 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05FC04u, 4); goto L_0C05FC04; } goto L_0C05FC6A; }  /* 0C05FC66 bf/s */
L_0C05FC6A: BLKS(0x0C05FC6Au);
	r13 = 0xC050CD0u; UPD(0x0C05FC6Cu, 2);  /* 0C05FC6A mov.l @(disp,pc),Rn */
	r10 = 0xC0404000u; UPD(0x0C05FC6Eu, 1);  /* 0C05FC6C mov.l @(disp,pc),Rn */
	r6 = 0x13u;  /* 0C05FC6E mov #imm,Rn */
	r4 = 0xC162C98u; UPD(0x0C05FC72u, 2);  /* 0C05FC70 mov.l @(disp,pc),Rn */
	IF(0x0C05FC72u); { u32 t_ = r13; PR = 0x0C05FC76u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FC76u); }  /* 0C05FC72 jsr @Rn */
L_0C05FC76: BLKS(0x0C05FC76u);
	r4 = 0xC162D04u; UPD(0x0C05FC78u, 1);  /* 0C05FC76 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C05FC78 mov Rm,Rn */
	r5 = 0x4u;  /* 0C05FC7A mov #imm,Rn */
	IF(0x0C05FC7Cu); { u32 t_ = r13; PR = 0x0C05FC80u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FC80u); }  /* 0C05FC7C jsr @Rn */
L_0C05FC80: BLKS(0x0C05FC80u);
	r7 = r10;  /* 0C05FC80 mov Rm,Rn */
	r4 = 0xC162D0Cu; UPD(0x0C05FC84u, 2);  /* 0C05FC82 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C05FC84 mov #imm,Rn */
	IF(0x0C05FC86u); { u32 t_ = r13; PR = 0x0C05FC8Au; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FC8Au); }  /* 0C05FC86 jsr @Rn */
L_0C05FC8A: BLKS(0x0C05FC8Au);
	r2 = 0xC3929C4u; UPD(0x0C05FC8Cu, 1);  /* 0C05FC8A mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C05FC8C mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05FC90u, 2);  /* 0C05FC8E mov.b @Rm,Rn */
	r6 = 0x18u;  /* 0C05FC90 mov #imm,Rn */
	r5 = 0xC220C28u; UPD(0x0C05FC94u, 2);  /* 0C05FC92 mov.l @(disp,pc),Rn */
	IF(0x0C05FC94u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C05FC94 shld Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C05FC98u, 2);  /* 0C05FC96 mov.b @Rm,Rn */
	r4 = 0xC38BC64u; UPD(0x0C05FC9Au, 1);  /* 0C05FC98 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C05FC9A add Rm,Rn */
	r0 += r0;  /* 0C05FC9C add Rm,Rn */
	r8 = 0xC0509B0u; UPD(0x0C05FCA0u, 3);  /* 0C05FC9E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C05FCA0 mov #imm,Rn */
	IF(0x0C05FCA2u); r10 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05FCA4u, 2);  /* 0C05FCA2 mov.w @(r0,Rm),Rn */
	r11 = 0xC050A80u; UPD(0x0C05FCA6u, 1);  /* 0C05FCA4 mov.l @(disp,pc),Rn */
	r9 = 0xC284EC0u; UPD(0x0C05FCA8u, 1);  /* 0C05FCA6 mov.l @(disp,pc),Rn */
	IF(0x0C05FCA8u); { u32 t_ = r8; PR = 0x0C05FCACu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C05FCACu); }  /* 0C05FCA8 jsr @Rn */
L_0C05FCAC: BLKS(0x0C05FCACu);
	r0 = r9;  /* 0C05FCAC mov Rm,Rn */
	r12 = 0xC220C64u; UPD(0x0C05FCB0u, 2);  /* 0C05FCAE mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C05FCB0 mov #imm,Rn */
	IF(0x0C05FCB2u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C05FCB4u, 2);  /* 0C05FCB2 mov.b @(r0,Rm),Rn */
	IF(0x0C05FCB4u); { u32 t_ = r11; PR = 0x0C05FCB8u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FCB8u); }  /* 0C05FCB4 jsr @Rn */
L_0C05FCB8: BLKS(0x0C05FCB8u);
	r0 = r12;  /* 0C05FCB8 mov Rm,Rn */
	IF(0x0C05FCBAu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C05FCBCu, 2);  /* 0C05FCBA mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C05FCBC mov #imm,Rn */
	r6 = 0x1Bu;  /* 0C05FCBE mov #imm,Rn */
	IF(0x0C05FCC0u); { u32 t_ = r11; PR = 0x0C05FCC4u; IF(0x0C05FCC2u); r10 <<= 2; /* slot shll2 Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FCC4u); }  /* 0C05FCC0 jsr @Rn */
L_0C05FCC4: BLKS(0x0C05FCC4u);
	r13 = 0xC283EB8u; UPD(0x0C05FCC6u, 1);  /* 0C05FCC4 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C05FCC6 mov Rm,Rn */
	IF(0x0C05FCC8u); r4 = R32(r0 + r13); UPD(0x0C05FCCAu, 2);  /* 0C05FCC8 mov.l @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C05FCCA mov #imm,Rn */
	r7 = 0xC0508F0u; UPD(0x0C05FCCEu, 2);  /* 0C05FCCC mov.l @(disp,pc),Rn */
	r6 = 0x15u;  /* 0C05FCCE mov #imm,Rn */
	r15 = r14;  /* 0C05FCD0 mov Rm,Rn */
	IF(0x0C05FCD2u); PR = R32(r15); r15 += 4; UPD(0x0C05FCD4u, 3);  /* 0C05FCD2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05FCD6u, 1);  /* 0C05FCD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05FCD8u, 1);  /* 0C05FCD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05FCDAu, 1);  /* 0C05FCD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05FCDCu, 1);  /* 0C05FCDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05FCDEu, 1);  /* 0C05FCDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05FCE0u, 1);  /* 0C05FCDE mov.l @Rm+,Rn */
	{ { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(0x0C05FD80u, 3); goto L_0C05FD80; }  /* 0C05FCE0 bra */
L_0C05FD80: BLKS(0x0C05FD80u);
	IF(0x0C05FD80u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); IF(0x0C05FD82u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0508F0u: TAIL(f_0C0508F0); default: JUMPD(tv_); } }  /* 0C05FD80 jmp @Rn */
L_0C05FD90: BLKS(0x0C05FD90u);
	r2 = 0xC050AC0u; UPD(0x0C05FD92u, 1);  /* 0C05FD90 mov.l @(disp,pc),Rn */
	r4 = 0xC1619D8u; UPD(0x0C05FD94u, 1);  /* 0C05FD92 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C05FD94 add #imm,Rn */
	r5 += 0x9u;  /* 0C05FD96 add #imm,Rn */
	r6 = 0x13u;  /* 0C05FD98 mov #imm,Rn */
	IF(0x0C05FD9Au); { u32 t_ = r2; PR = 0x0C05FD9Eu; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05FD9Eu); }  /* 0C05FD9A jsr @Rn */
L_0C05FD9E: BLKS(0x0C05FD9Eu);
	{ r0 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C05FC64u, 3); goto L_0C05FC64; }  /* 0C05FD9E bra */
L_0C05FDB0: BLKS(0x0C05FDB0u);
	r3 = 0xC050AC0u; UPD(0x0C05FDB2u, 1);  /* 0C05FDB0 mov.l @(disp,pc),Rn */
	r4 = 0xC1619D8u; UPD(0x0C05FDB4u, 1);  /* 0C05FDB2 mov.l @(disp,pc),Rn */
	IF(0x0C05FDB4u); { u32 t_ = r3; PR = 0x0C05FDB8u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05FDB8u); }  /* 0C05FDB4 jsr @Rn */
L_0C05FDB8: BLKS(0x0C05FDB8u);
	r2 = r13;  /* 0C05FDB8 mov Rm,Rn */
	r2 += 0x1u;  /* 0C05FDBA add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ UPD(0x0C05FBEAu, 5); goto L_0C05FBEA; }  /* 0C05FDBC bra */
L_0C05FDC0: BLKS(0x0C05FDC0u);
	r9 = 0xC050AC0u; UPD(0x0C05FDC2u, 1);  /* 0C05FDC0 mov.l @(disp,pc),Rn */
	r4 = 0xC1619D8u; UPD(0x0C05FDC4u, 1);  /* 0C05FDC2 mov.l @(disp,pc),Rn */
	IF(0x0C05FDC4u); { u32 t_ = r9; PR = 0x0C05FDC8u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05FDC8u); }  /* 0C05FDC4 jsr @Rn */
L_0C05FDC8: BLKS(0x0C05FDC8u);
	r3 = r13;  /* 0C05FDC8 mov Rm,Rn */
	r3 += 0x1u;  /* 0C05FDCA add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C05FB7Eu, 5); goto L_0C05FB7E; }  /* 0C05FDCC bra */
L_0C05FDD0: BLKS(0x0C05FDD0u);
	r2 = 0xC3929C4u; UPD(0x0C05FDD2u, 1);  /* 0C05FDD0 mov.l @(disp,pc),Rn */
	r0 = 0xC220C28u; UPD(0x0C05FDD4u, 1);  /* 0C05FDD2 mov.l @(disp,pc),Rn */
	r8 = 0xC050AC0u; UPD(0x0C05FDD6u, 1);  /* 0C05FDD4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C05FDD8u, 1);  /* 0C05FDD6 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C05FDDAu, 1);  /* 0C05FDD8 mov.b @Rm,Rn */
	r5 += 0x4u;  /* 0C05FDDA add #imm,Rn */
	r4 = 0xC161B40u; UPD(0x0C05FDDEu, 2);  /* 0C05FDDC mov.l @(disp,pc),Rn */
	IF(0x0C05FDDEu); { u32 t_ = r8; PR = 0x0C05FDE2u; r6 += 0x3u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05FDE2u); }  /* 0C05FDDE jsr @Rn */
L_0C05FDE2: BLKS(0x0C05FDE2u);
	{ IF(0x0C05FDE4u); ; /* slot nop */ UPD(0x0C05F8CEu, 3); goto L_0C05F8CE; }  /* 0C05FDE2 bra */
L_0C05FDF0: BLKS(0x0C05FDF0u);
	r4 = 0xC162D18u; UPD(0x0C05FDF2u, 1);  /* 0C05FDF0 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C05FDF4u, 1);  /* 0C05FDF2 mov.l @(disp,pc),Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C05F896u, 3); goto L_0C05F896; }  /* 0C05FDF4 bra */
L_0C05FE00: BLKS(0x0C05FE00u);
	r4 = 0xC162D18u; UPD(0x0C05FE02u, 1);  /* 0C05FE00 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C05FE04u, 1);  /* 0C05FE02 mov.l @(disp,pc),Rn */
	IF(0x0C05FE04u); { u32 t_ = r11; PR = 0x0C05FE08u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FE08u); }  /* 0C05FE04 jsr @Rn */
L_0C05FE08: BLKS(0x0C05FE08u);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C05F89Eu, 3); goto L_0C05F89E; }  /* 0C05FE08 bra */
L_0C05FE10: BLKS(0x0C05FE10u);
	r1 = 0xC050CD0u; UPD(0x0C05FE12u, 1);  /* 0C05FE10 mov.l @(disp,pc),Rn */
	r4 = 0xC162D18u; UPD(0x0C05FE14u, 1);  /* 0C05FE12 mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C05FE14 add #imm,Rn */
	r7 = 0xC0C04000u; UPD(0x0C05FE18u, 2);  /* 0C05FE16 mov.l @(disp,pc),Rn */
	IF(0x0C05FE18u); { u32 t_ = r1; PR = 0x0C05FE1Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FE1Cu); }  /* 0C05FE18 jsr @Rn */
L_0C05FE1C: BLKS(0x0C05FE1Cu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C05F89Eu, 3); goto L_0C05F89E; }  /* 0C05FE1C bra */
L_0C05FE20: BLKS(0x0C05FE20u);
	r3 = 0xC050CD0u; UPD(0x0C05FE22u, 1);  /* 0C05FE20 mov.l @(disp,pc),Rn */
	r4 = 0xC162D14u; UPD(0x0C05FE24u, 1);  /* 0C05FE22 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05FE26u, 1);  /* 0C05FE24 mov.l @(disp,pc),Rn */
	IF(0x0C05FE26u); { u32 t_ = r3; PR = 0x0C05FE2Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FE2Au); }  /* 0C05FE26 jsr @Rn */
L_0C05FE2A: BLKS(0x0C05FE2Au);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C05F89Eu, 3); goto L_0C05F89E; }  /* 0C05FE2A bra */
L_0C05FE30: BLKS(0x0C05FE30u);
	r8 = 0xC050A80u; UPD(0x0C05FE32u, 1);  /* 0C05FE30 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C05FE32 mov Rm,Rn */
	r5 = r9;  /* 0C05FE34 mov Rm,Rn */
	IF(0x0C05FE36u); { u32 t_ = r8; PR = 0x0C05FE3Au; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05FE3Au); }  /* 0C05FE36 jsr @Rn */
L_0C05FE3A: BLKS(0x0C05FE3Au);
	{ IF(0x0C05FE3Cu); ; /* slot nop */ UPD(0x0C05F84Eu, 3); goto L_0C05F84E; }  /* 0C05FE3A bra */
}

/* FUN_0c05fe80 */
void f_0C05FE80(sh3_t *c)
{
	LOCALS;
L_0C05FE80: BLKS(0x0C05FE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE82u, 1);  /* 0C05FE80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE84u, 1);  /* 0C05FE82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE86u, 1);  /* 0C05FE84 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE88u, 1);  /* 0C05FE86 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C05FE88 exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE8Cu, 2);  /* 0C05FE8A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C05FE8C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE90u, 2);  /* 0C05FE8E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C05FE90 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05FE94u, 2);  /* 0C05FE92 mov.l Rm,@-Rn */
	r2 = 0xC393028u; UPD(0x0C05FE96u, 1);  /* 0C05FE94 mov.l @(disp,pc),Rn */
	IF(0x0C05FE96u); r15 -= 4; W32(r15, PR); UPD(0x0C05FE98u, 1);  /* 0C05FE96 sts.l pr,@-Rn */
	r0 = r2;  /* 0C05FE98 mov Rm,Rn */
	IF(0x0C05FE9Au); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05FE9Cu, 2);  /* 0C05FE9A mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C05FE9C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05FF60u, 4); goto L_0C05FF60; } goto L_0C05FEA2; }  /* 0C05FE9E bt/s */
L_0C05FEA2: BLKS(0x0C05FEA2u);
	r13 = 0xC27DC48u; UPD(0x0C05FEA4u, 2);  /* 0C05FEA2 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C05FEA4 mov Rm,Rn */
	IF(0x0C05FEA6u); r7 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05FEA8u, 2);  /* 0C05FEA6 mov.b @(r0,Rm),Rn */
	r6 = 0xC26C878u; UPD(0x0C05FEAAu, 1);  /* 0C05FEA8 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C05FEAA extu.b Rm,Rn */
	IF(0x0C05FEACu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05FEAEu, 2);  /* 0C05FEAC mov.b @(r0,Rm),Rn */
	r5 = 0xC161910u; UPD(0x0C05FEB0u, 1);  /* 0C05FEAE mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C05FEB0 extu.b Rm,Rn */
	IF(0x0C05FEB2u); r0 <<= 2;  /* 0C05FEB2 shll2 Rn */
	r8 = 0xC050CD0u; UPD(0x0C05FEB6u, 3);  /* 0C05FEB4 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C05FEB6 mov Rm,Rn */
	IF(0x0C05FEB8u); r4 = R32(r0 + r5); UPD(0x0C05FEBAu, 2);  /* 0C05FEB8 mov.l @(r0,Rm),Rn */
	r13 = 0xC0C04000u; UPD(0x0C05FEBCu, 1);  /* 0C05FEBA mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05FEBC mov Rm,Rn */
	IF(0x0C05FEBEu); { u32 t_ = r8; PR = 0x0C05FEC2u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FEC2u); }  /* 0C05FEBE jsr @Rn */
L_0C05FEC2: BLKS(0x0C05FEC2u);
	r3 = 0xC392DC2u; UPD(0x0C05FEC4u, 1);  /* 0C05FEC2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05FEC6u, 1);  /* 0C05FEC4 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C05FEC6 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05FF40u, 4); goto L_0C05FF40; } goto L_0C05FECC; }  /* 0C05FEC8 bt/s */
L_0C05FECC: BLKS(0x0C05FECCu);
	r0 = 0xC392AE4u; UPD(0x0C05FECEu, 2);  /* 0C05FECC mov.l @(disp,pc),Rn */
	IF(0x0C05FECEu); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05FED0u, 1);  /* 0C05FECE mov.b @(r0,Rm),Rn */
	r0 = 0x1u;  /* 0C05FED0 mov #imm,Rn */
	T = r9 > r0;  /* 0C05FED2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C05FF00u, 5); goto L_0C05FF00; }  /* 0C05FED4 bt */
L_0C05FED6: BLKS(0x0C05FED6u);
	r10 += 0xFFFFFFFFu;  /* 0C05FED6 add #imm,Rn */
	r4 = 0xC162D2Cu; UPD(0x0C05FEDAu, 2);  /* 0C05FED8 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05FEDA mov Rm,Rn */
	UPD(0x0C05FEDCu, 1);
L_0C05FEDC: BLKS(0x0C05FEDCu);
	r1 = 0xC050CD0u; UPD(0x0C05FEDEu, 1);  /* 0C05FEDC mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C05FEDE mov Rm,Rn */
	r7 = r13;  /* 0C05FEE0 mov Rm,Rn */
	UPD(0x0C05FEE2u, 2);
L_0C05FEE2: BLKS(0x0C05FEE2u);
	r15 = r14;  /* 0C05FEE2 mov Rm,Rn */
	IF(0x0C05FEE4u); PR = R32(r15); r15 += 4; UPD(0x0C05FEE6u, 2);  /* 0C05FEE4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05FEE8u, 1);  /* 0C05FEE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05FEEAu, 1);  /* 0C05FEE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05FEECu, 1);  /* 0C05FEEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05FEEEu, 1);  /* 0C05FEEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05FEF0u, 1);  /* 0C05FEEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05FEF2u, 1);  /* 0C05FEF0 mov.l @Rm+,Rn */
	IF(0x0C05FEF2u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05FEF2 jmp @Rn */
L_0C05FF00: BLKS(0x0C05FF00u);
	r9 = 0xC050CD0u; UPD(0x0C05FF02u, 1);  /* 0C05FF00 mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C05FF02 mov Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C05FF04 add #imm,Rn */
	r4 = 0xC162D38u; UPD(0x0C05FF08u, 3);  /* 0C05FF06 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C05FF08 mov Rm,Rn */
	IF(0x0C05FF0Au); { u32 t_ = r9; PR = 0x0C05FF0Eu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FF0Eu); }  /* 0C05FF0A jsr @Rn */
L_0C05FF0E: BLKS(0x0C05FF0Eu);
	r4 = 0xC220C50u; UPD(0x0C05FF10u, 1);  /* 0C05FF0E mov.l @(disp,pc),Rn */
	r11 += 0x8u;  /* 0C05FF10 add #imm,Rn */
	r0 = r4;  /* 0C05FF12 mov Rm,Rn */
	IF(0x0C05FF14u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05FF16u, 3);  /* 0C05FF14 mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C05FF16 mov Rm,Rn */
	r3 = 0xC050CD0u; UPD(0x0C05FF1Au, 2);  /* 0C05FF18 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C05FF1A extu.b Rm,Rn */
	r10 = 0xC161A30u; UPD(0x0C05FF1Eu, 2);  /* 0C05FF1C mov.l @(disp,pc),Rn */
	IF(0x0C05FF1Eu); r0 <<= 2;  /* 0C05FF1E shll2 Rn */
	IF(0x0C05FF20u); r4 = R32(r0 + r10); UPD(0x0C05FF22u, 2);  /* 0C05FF20 mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FF22 mov Rm,Rn */
	IF(0x0C05FF24u); { u32 t_ = r3; PR = 0x0C05FF28u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FF28u); }  /* 0C05FF24 jsr @Rn */
L_0C05FF28: BLKS(0x0C05FF28u);
	r0 = 0xC392AE4u; UPD(0x0C05FF2Au, 1);  /* 0C05FF28 mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C05FF2A add #imm,Rn */
	IF(0x0C05FF2Cu); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05FF2Eu, 2);  /* 0C05FF2C mov.b @(r0,Rm),Rn */
	r5 = r8;  /* 0C05FF2E mov Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C05FF30 extu.b Rm,Rn */
	IF(0x0C05FF32u); r0 <<= 2;  /* 0C05FF32 shll2 Rn */
	{ IF(0x0C05FF36u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C05FEDCu, 6); goto L_0C05FEDC; }  /* 0C05FF34 bra */
L_0C05FF40: BLKS(0x0C05FF40u);
	r10 += 0xFFFFFFFFu;  /* 0C05FF40 add #imm,Rn */
	r4 = 0xC162D2Cu; UPD(0x0C05FF44u, 2);  /* 0C05FF42 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05FF44 mov Rm,Rn */
	r1 = 0xC050CD0u; UPD(0x0C05FF48u, 2);  /* 0C05FF46 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C05FF48 mov Rm,Rn */
	r15 = r14;  /* 0C05FF4A mov Rm,Rn */
	IF(0x0C05FF4Cu); PR = R32(r15); r15 += 4; UPD(0x0C05FF4Eu, 3);  /* 0C05FF4C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05FF50u, 1);  /* 0C05FF4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05FF52u, 1);  /* 0C05FF50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05FF54u, 1);  /* 0C05FF52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05FF56u, 1);  /* 0C05FF54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05FF58u, 1);  /* 0C05FF56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05FF5Au, 1);  /* 0C05FF58 mov.l @Rm+,Rn */
	IF(0x0C05FF5Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05FF5A jmp @Rn */
L_0C05FF60: BLKS(0x0C05FF60u);
	r12 = 0xC050CD0u; UPD(0x0C05FF62u, 1);  /* 0C05FF60 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05FF62 mov Rm,Rn */
	r9 = 0xC0C04000u; UPD(0x0C05FF66u, 2);  /* 0C05FF64 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C05FF66 mov Rm,Rn */
	r4 = 0xC161904u; UPD(0x0C05FF6Au, 2);  /* 0C05FF68 mov.l @(disp,pc),Rn */
	IF(0x0C05FF6Au); { u32 t_ = r12; PR = 0x0C05FF6Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05FF6Eu); }  /* 0C05FF6A jsr @Rn */
L_0C05FF6E: BLKS(0x0C05FF6Eu);
	r10 += 0xFFFFFFFFu;  /* 0C05FF6E add #imm,Rn */
	r4 = 0xC162D2Cu; UPD(0x0C05FF72u, 2);  /* 0C05FF70 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05FF72 mov Rm,Rn */
	r6 = r11;  /* 0C05FF74 mov Rm,Rn */
	r7 = r9;  /* 0C05FF76 mov Rm,Rn */
	{ r1 = r12; /* slot mov Rm,Rn */ UPD(0x0C05FEE2u, 6); goto L_0C05FEE2; }  /* 0C05FF78 bra */
}

/* FUN_0c0600a0 */
void f_0C0600A0(sh3_t *c)
{
	LOCALS;
L_0C0600A0: BLKS(0x0C0600A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0600A2u, 1);  /* 0C0600A0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0600A2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0600A6u, 2);  /* 0C0600A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0600A8u, 1);  /* 0C0600A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0600AAu, 1);  /* 0C0600A8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C0600AA exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0600AEu, 2);  /* 0C0600AC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0600AE exts.b Rm,Rn */
	r4 = 0xC27DC48u; UPD(0x0C0600B2u, 2);  /* 0C0600B0 mov.l @(disp,pc),Rn */
	IF(0x0C0600B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0600B4u, 1);  /* 0C0600B2 sts.l pr,@-Rn */
	r0 = r4;  /* 0C0600B4 mov Rm,Rn */
	IF(0x0C0600B6u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0600B8u, 2);  /* 0C0600B6 mov.b @(r0,Rm),Rn */
	r2 = 0xC393028u; UPD(0x0C0600BAu, 1);  /* 0C0600B8 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0600BA mov Rm,Rn */
	IF(0x0C0600BCu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0600BEu, 2);  /* 0C0600BC mov.b @(r0,Rm),Rn */
	r7 = r4 & 0xFF;  /* 0C0600BE extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0600C0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060160u, 5); goto L_0C060160; } goto L_0C0600C6; }  /* 0C0600C2 bt/s */
L_0C0600C6: BLKS(0x0C0600C6u);
	r8 = 0x280u; UPD(0x0C0600C8u, 2);  /* 0C0600C6 mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C0600C8 mov #imm,Rn */
	IF(0x0C0600CAu); MACL = r3 * r8;  /* 0C0600CA mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C0600CEu, 4);  /* 0C0600CC mov.l @(disp,pc),Rn */
	IF(0x0C0600CEu); r0 = MACL;  /* 0C0600CE sts macl,Rn */
	r6 += r0;  /* 0C0600D0 add Rm,Rn */
	r0 = 0x26Bu; UPD(0x0C0600D4u, 3);  /* 0C0600D2 mov.w @(disp,pc),Rn */
	r4 = 0xC21CA15u; UPD(0x0C0600D6u, 1);  /* 0C0600D4 mov.l @(disp,pc),Rn */
	IF(0x0C0600D6u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0600D8u, 1);  /* 0C0600D6 mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0600DAu, 1);  /* 0C0600D8 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0600DA tst Rm,Rn */
	r8 = 0xC28599Cu; UPD(0x0C0600DEu, 2);  /* 0C0600DC mov.l @(disp,pc),Rn */
	IF(0x0C0600DEu); r0 = T;  /* 0C0600DE movt Rn */
	T = (r2 & r2) == 0;  /* 0C0600E0 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0600E4u, 3);  /* 0C0600E2 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0600E4 negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0600E6 tst Rm,Rn */
	IF(0x0C0600E8u); r3 = T;  /* 0C0600E8 movt Rn */
	r0 |= r9;  /* 0C0600EA or Rm,Rn */
	r0 |= r3;  /* 0C0600EC or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0600EE tst Rm,Rn */
	{ u32 c_ = T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060130u, 9); goto L_0C060130; } goto L_0C0600F4; }  /* 0C0600F0 bt/s */
L_0C0600F4: BLKS(0x0C0600F4u);
	IF(0x0C0600F4u); r7 <<= 2;  /* 0C0600F4 shll2 Rn */
	r5 = 0xC1619B0u; UPD(0x0C0600F8u, 3);  /* 0C0600F6 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0600F8 mov Rm,Rn */
	r9 = 0xC050CD0u; UPD(0x0C0600FCu, 2);  /* 0C0600FA mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0600FC mov Rm,Rn */
	IF(0x0C0600FEu); r4 = R32(r0 + r5); UPD(0x0C060100u, 2);  /* 0C0600FE mov.l @(r0,Rm),Rn */
	r8 = 0xC040C000u; UPD(0x0C060102u, 1);  /* 0C060100 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C060102 mov Rm,Rn */
	IF(0x0C060104u); { u32 t_ = r9; PR = 0x0C060108u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C060108u); }  /* 0C060104 jsr @Rn */
L_0C060108: BLKS(0x0C060108u);
	r4 = 0xC162DBCu; UPD(0x0C06010Au, 1);  /* 0C060108 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C06010A add #imm,Rn */
	r5 = r10;  /* 0C06010C mov Rm,Rn */
	r6 = r11;  /* 0C06010E mov Rm,Rn */
	r7 = r8;  /* 0C060110 mov Rm,Rn */
	r1 = r9;  /* 0C060112 mov Rm,Rn */
	UPD(0x0C060114u, 5);
L_0C060114: BLKS(0x0C060114u);
	r15 = r14;  /* 0C060114 mov Rm,Rn */
	IF(0x0C060116u); PR = R32(r15); r15 += 4; UPD(0x0C060118u, 2);  /* 0C060116 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06011Au, 1);  /* 0C060118 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06011Cu, 1);  /* 0C06011A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06011Eu, 1);  /* 0C06011C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060120u, 1);  /* 0C06011E mov.l @Rm+,Rn */
	IF(0x0C060120u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C060120 jmp @Rn */
L_0C060130: BLKS(0x0C060130u);
	r9 = 0xC050CD0u; UPD(0x0C060132u, 1);  /* 0C060130 mov.l @(disp,pc),Rn */
	r8 = 0xC040C000u; UPD(0x0C060134u, 1);  /* 0C060132 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C060134 mov Rm,Rn */
	r4 = 0xC161944u; UPD(0x0C060138u, 2);  /* 0C060136 mov.l @(disp,pc),Rn */
	IF(0x0C060138u); { u32 t_ = r9; PR = 0x0C06013Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C06013Cu); }  /* 0C060138 jsr @Rn */
L_0C06013C: BLKS(0x0C06013Cu);
	r10 += 0xFFFFFFFFu;  /* 0C06013C add #imm,Rn */
	r4 = 0xC162DC8u; UPD(0x0C060140u, 2);  /* 0C06013E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C060140 mov Rm,Rn */
	r6 = r11;  /* 0C060142 mov Rm,Rn */
	r7 = r8;  /* 0C060144 mov Rm,Rn */
	r1 = r9;  /* 0C060146 mov Rm,Rn */
	r15 = r14;  /* 0C060148 mov Rm,Rn */
	IF(0x0C06014Au); PR = R32(r15); r15 += 4; UPD(0x0C06014Cu, 6);  /* 0C06014A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06014Eu, 1);  /* 0C06014C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060150u, 1);  /* 0C06014E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060152u, 1);  /* 0C060150 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060154u, 1);  /* 0C060152 mov.l @Rm+,Rn */
	IF(0x0C060154u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C060154 jmp @Rn */
L_0C060160: BLKS(0x0C060160u);
	r4 = 0xC161904u; UPD(0x0C060162u, 1);  /* 0C060160 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C060162 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C060166u, 2);  /* 0C060164 mov.l @(disp,pc),Rn */
	r1 = 0xC050CD0u; UPD(0x0C060168u, 1);  /* 0C060166 mov.l @(disp,pc),Rn */
	{ r6 = r11; /* slot mov Rm,Rn */ UPD(0x0C060114u, 3); goto L_0C060114; }  /* 0C060168 bra */
}

/* FUN_0c0601b0 */
void f_0C0601B0(sh3_t *c)
{
	LOCALS;
L_0C0601B0: BLKS(0x0C0601B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0601B2u, 1);  /* 0C0601B0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0601B2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0601B6u, 2);  /* 0C0601B4 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0601B6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0601BAu, 2);  /* 0C0601B8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0601BCu, 1);  /* 0C0601BA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C0601BC exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0601C0u, 2);  /* 0C0601BE mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0601C0 exts.b Rm,Rn */
	r5 = 0x280u; UPD(0x0C0601C4u, 2);  /* 0C0601C2 mov.w @(disp,pc),Rn */
	IF(0x0C0601C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0601C6u, 1);  /* 0C0601C4 sts.l pr,@-Rn */
	IF(0x0C0601C6u); MACL = r0 * r5;  /* 0C0601C6 mul.l Rm,Rn */
	r6 = 0xC27DC48u; UPD(0x0C0601CAu, 3);  /* 0C0601C8 mov.l @(disp,pc),Rn */
	IF(0x0C0601CAu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0601CCu, 1);  /* 0C0601CA mov.b @(r0,Rm),Rn */
	r7 = 0xC283794u; UPD(0x0C0601CEu, 1);  /* 0C0601CC mov.l @(disp,pc),Rn */
	IF(0x0C0601CEu); r0 = MACL;  /* 0C0601CE sts macl,Rn */
	r7 += r0;  /* 0C0601D0 add Rm,Rn */
	r0 = 0x26Bu; UPD(0x0C0601D4u, 3);  /* 0C0601D2 mov.w @(disp,pc),Rn */
	IF(0x0C0601D4u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0601D6u, 1);  /* 0C0601D4 mov.b @(r0,Rm),Rn */
	r2 = 0xC21CA15u; UPD(0x0C0601D8u, 1);  /* 0C0601D6 mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C0601D8 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0601DA tst Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0601DEu, 3);  /* 0C0601DC mov.b @Rm,Rn */
	IF(0x0C0601DEu); r0 = T;  /* 0C0601DE movt Rn */
	r5 = 0xC28599Cu; UPD(0x0C0601E2u, 2);  /* 0C0601E0 mov.l @(disp,pc),Rn */
	T = (r9 & r9) == 0;  /* 0C0601E2 tst Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0601E6u, 2);  /* 0C0601E4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0601E6 negc Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0601E8 tst Rm,Rn */
	IF(0x0C0601EAu); r2 = T;  /* 0C0601EA movt Rn */
	r0 |= r6;  /* 0C0601EC or Rm,Rn */
	r0 |= r2;  /* 0C0601EE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0601F0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060270u, 9); goto L_0C060270; } goto L_0C0601F6; }  /* 0C0601F2 bt/s */
L_0C0601F6: BLKS(0x0C0601F6u);
	r7 = 0xC26C878u; UPD(0x0C0601F8u, 2);  /* 0C0601F6 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0601F8 mov Rm,Rn */
	IF(0x0C0601FAu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0601FCu, 2);  /* 0C0601FA mov.b @(r0,Rm),Rn */
	r2 = 0xC393028u; UPD(0x0C0601FEu, 1);  /* 0C0601FC mov.l @(disp,pc),Rn */
	r8 = r4 & 0xFF;  /* 0C0601FE extu.b Rm,Rn */
	r0 = r2;  /* 0C060200 mov Rm,Rn */
	IF(0x0C060202u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060204u, 3);  /* 0C060202 mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C060204 extu.b Rm,Rn */
	T = r8 >= r3;  /* 0C060206 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060240u, 5); goto L_0C060240; } goto L_0C06020C; }  /* 0C060208 bf/s */
L_0C06020C: BLKS(0x0C06020Cu);
	r9 = 0xC050CD0u; UPD(0x0C06020Eu, 2);  /* 0C06020C mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06020E mov Rm,Rn */
	r8 = 0x40C04000u; UPD(0x0C060212u, 2);  /* 0C060210 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C060212 mov Rm,Rn */
	r4 = 0xC161A64u; UPD(0x0C060216u, 2);  /* 0C060214 mov.l @(disp,pc),Rn */
	IF(0x0C060216u); { u32 t_ = r9; PR = 0x0C06021Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C06021Au); }  /* 0C060216 jsr @Rn */
L_0C06021A: BLKS(0x0C06021Au);
	r4 = 0xC162DBCu; UPD(0x0C06021Cu, 1);  /* 0C06021A mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C06021C add #imm,Rn */
	UPD(0x0C06021Eu, 1);
L_0C06021E: BLKS(0x0C06021Eu);
	r5 = r10;  /* 0C06021E mov Rm,Rn */
	r6 = r11;  /* 0C060220 mov Rm,Rn */
	r7 = r8;  /* 0C060222 mov Rm,Rn */
	r1 = r9;  /* 0C060224 mov Rm,Rn */
	UPD(0x0C060226u, 4);
L_0C060226: BLKS(0x0C060226u);
	r15 = r14;  /* 0C060226 mov Rm,Rn */
	IF(0x0C060228u); PR = R32(r15); r15 += 4; UPD(0x0C06022Au, 2);  /* 0C060228 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06022Cu, 1);  /* 0C06022A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06022Eu, 1);  /* 0C06022C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060230u, 1);  /* 0C06022E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060232u, 1);  /* 0C060230 mov.l @Rm+,Rn */
	IF(0x0C060232u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C060232 jmp @Rn */
L_0C060240: BLKS(0x0C060240u);
	r9 = 0xC050CD0u; UPD(0x0C060242u, 1);  /* 0C060240 mov.l @(disp,pc),Rn */
	r8 = 0xC040C000u; UPD(0x0C060244u, 1);  /* 0C060242 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C060244 mov Rm,Rn */
	r4 = 0xC161A88u; UPD(0x0C060248u, 2);  /* 0C060246 mov.l @(disp,pc),Rn */
	IF(0x0C060248u); { u32 t_ = r9; PR = 0x0C06024Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C06024Cu); }  /* 0C060248 jsr @Rn */
L_0C06024C: BLKS(0x0C06024Cu);
	r10 += 0xFFFFFFFFu;  /* 0C06024C add #imm,Rn */
	r4 = 0xC161A7Cu; UPD(0x0C060250u, 2);  /* 0C06024E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C060250 mov Rm,Rn */
	r6 = r11;  /* 0C060252 mov Rm,Rn */
	r7 = r8;  /* 0C060254 mov Rm,Rn */
	r1 = r9;  /* 0C060256 mov Rm,Rn */
	r15 = r14;  /* 0C060258 mov Rm,Rn */
	IF(0x0C06025Au); PR = R32(r15); r15 += 4; UPD(0x0C06025Cu, 6);  /* 0C06025A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06025Eu, 1);  /* 0C06025C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060260u, 1);  /* 0C06025E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060262u, 1);  /* 0C060260 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060264u, 1);  /* 0C060262 mov.l @Rm+,Rn */
	IF(0x0C060264u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C060264 jmp @Rn */
L_0C060270: BLKS(0x0C060270u);
	r6 = 0xC395086u; UPD(0x0C060272u, 1);  /* 0C060270 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C060274u, 1);  /* 0C060272 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C060274 extu.b Rm,Rn */
	T = r0 > r7;  /* 0C060276 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0602E0u, 5); goto L_0C0602E0; }  /* 0C060278 bf */
L_0C06027A: BLKS(0x0C06027Au);
	r4 = 0xC26C878u; UPD(0x0C06027Cu, 1);  /* 0C06027A mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06027C mov Rm,Rn */
	IF(0x0C06027Eu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060280u, 2);  /* 0C06027E mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C060280 tst Rm,Rn */
	if (!T) { UPD(0x0C060290u, 4); goto L_0C060290; }  /* 0C060282 bf */
L_0C060284: BLKS(0x0C060284u);
	r7 = 0xC393028u; UPD(0x0C060286u, 1);  /* 0C060284 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C060286 mov Rm,Rn */
	IF(0x0C060288u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06028Au, 2);  /* 0C060288 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06028A tst Rm,Rn */
	{ u32 c_ = !T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0602B0u, 4); goto L_0C0602B0; } UPD(0x0C060290u, 1); goto L_0C060290; }  /* 0C06028C bf/s */
L_0C060290: BLKS(0x0C060290u);
	r9 = 0xC050CD0u; UPD(0x0C060292u, 1);  /* 0C060290 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C060292 mov Rm,Rn */
	r8 = 0xC0C04000u; UPD(0x0C060296u, 2);  /* 0C060294 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C060296 mov Rm,Rn */
	r4 = 0xC161A64u; UPD(0x0C06029Au, 2);  /* 0C060298 mov.l @(disp,pc),Rn */
	IF(0x0C06029Au); { u32 t_ = r9; PR = 0x0C06029Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C06029Eu); }  /* 0C06029A jsr @Rn */
L_0C06029E: BLKS(0x0C06029Eu);
	r4 = 0xC162DC8u; UPD(0x0C0602A0u, 1);  /* 0C06029E mov.l @(disp,pc),Rn */
	{ r10 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C06021Eu, 3); goto L_0C06021E; }  /* 0C0602A0 bra */
L_0C0602B0: BLKS(0x0C0602B0u);
	r9 = 0xC050CD0u; UPD(0x0C0602B2u, 1);  /* 0C0602B0 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0602B2 mov Rm,Rn */
	r8 = 0xC040C000u; UPD(0x0C0602B6u, 2);  /* 0C0602B4 mov.l @(disp,pc),Rn */
	r4 = 0xC161A88u; UPD(0x0C0602B8u, 1);  /* 0C0602B6 mov.l @(disp,pc),Rn */
	IF(0x0C0602B8u); { u32 t_ = r9; PR = 0x0C0602BCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0602BCu); }  /* 0C0602B8 jsr @Rn */
L_0C0602BC: BLKS(0x0C0602BCu);
	r10 += 0xFFFFFFFFu;  /* 0C0602BC add #imm,Rn */
	r4 = 0xC161A7Cu; UPD(0x0C0602C0u, 2);  /* 0C0602BE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0602C0 mov Rm,Rn */
	r6 = r11;  /* 0C0602C2 mov Rm,Rn */
	IF(0x0C0602C4u); { u32 t_ = r9; PR = 0x0C0602C8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0602C8u); }  /* 0C0602C4 jsr @Rn */
L_0C0602C8: BLKS(0x0C0602C8u);
	r15 = r14;  /* 0C0602C8 mov Rm,Rn */
	IF(0x0C0602CAu); PR = R32(r15); r15 += 4; UPD(0x0C0602CCu, 2);  /* 0C0602CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0602CEu, 1);  /* 0C0602CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0602D0u, 1);  /* 0C0602CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0602D2u, 1);  /* 0C0602D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0602D4u, 1);  /* 0C0602D2 mov.l @Rm+,Rn */
	IF(0x0C0602D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0602D4 rts */
L_0C0602E0: BLKS(0x0C0602E0u);
	r9 = 0xC050CD0u; UPD(0x0C0602E2u, 1);  /* 0C0602E0 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0602E2 mov Rm,Rn */
	r4 = 0xC161A58u; UPD(0x0C0602E6u, 2);  /* 0C0602E4 mov.l @(disp,pc),Rn */
	r7 = 0xC0C04000u; UPD(0x0C0602E8u, 1);  /* 0C0602E6 mov.l @(disp,pc),Rn */
	IF(0x0C0602E8u); { u32 t_ = r9; PR = 0x0C0602ECu; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0602ECu); }  /* 0C0602E8 jsr @Rn */
L_0C0602EC: BLKS(0x0C0602ECu);
	r10 += 0xFFFFFFFFu;  /* 0C0602EC add #imm,Rn */
	r4 = 0xC161A70u; UPD(0x0C0602F0u, 2);  /* 0C0602EE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0602F0 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C0602F4u, 2);  /* 0C0602F2 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0602F4 mov Rm,Rn */
	{ r1 = r9; /* slot mov Rm,Rn */ UPD(0x0C060226u, 4); goto L_0C060226; }  /* 0C0602F6 bra */
}

/* rank_up */
void f_0C060350(sh3_t *c)
{
	LOCALS;
L_0C060350: BLKS(0x0C060350u);
	r2 = 0xC27DFF8u; UPD(0x0C060352u, 1);  /* 0C060350 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060354u, 1);  /* 0C060352 mov.l Rm,@-Rn */
	r1 = R32(r2); UPD(0x0C060356u, 1);  /* 0C060354 mov.l @Rm,Rn */
	T = r1 > r4;  /* 0C060356 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060360u, 4); goto L_0C060360; } goto L_0C06035C; }  /* 0C060358 bf/s */
L_0C06035C: BLKS(0x0C06035Cu);
	r1 -= r4;  /* 0C06035C sub Rm,Rn */
	W32(r2, r1); UPD(0x0C060360u, 3);  /* 0C06035E mov.l Rm,@Rn */
L_0C060360: BLKS(0x0C060360u);
	r15 = r14;  /* 0C060360 mov Rm,Rn */
	IF(0x0C060362u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C060362 rts */
}

/* FUN_0c060370 */
void f_0C060370(sh3_t *c)
{
	LOCALS;
L_0C060370: BLKS(0x0C060370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060372u, 1);  /* 0C060370 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C060372 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060376u, 2);  /* 0C060374 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C060376 exts.b Rm,Rn */
	IF(0x0C060378u); r15 -= 4; W32(r15, PR); UPD(0x0C06037Au, 2);  /* 0C060378 sts.l pr,@-Rn */
	r0 = 0xC162F4Cu; UPD(0x0C06037Cu, 1);  /* 0C06037A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFD8u;  /* 0C06037C add #imm,Rn */
	r14 = r15;  /* 0C06037E mov Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C060382u, 3);  /* 0C060380 mov.l Rm,@(disp,Rn) */
	r8 = 0xC162F0Cu; UPD(0x0C060384u, 1);  /* 0C060382 mov.l @(disp,pc),Rn */
	r7 = 0xC162F1Cu; UPD(0x0C060386u, 1);  /* 0C060384 mov.l @(disp,pc),Rn */
	r3 = 0xC162F2Cu; UPD(0x0C060388u, 1);  /* 0C060386 mov.l @(disp,pc),Rn */
	r2 = 0xC162F3Cu; UPD(0x0C06038Au, 1);  /* 0C060388 mov.l @(disp,pc),Rn */
	r0 = 0xC162F9Cu; UPD(0x0C06038Cu, 1);  /* 0C06038A mov.l @(disp,pc),Rn */
	W32(r14, r8); UPD(0x0C06038Eu, 1);  /* 0C06038C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C060390u, 1);  /* 0C06038E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C060392u, 1);  /* 0C060390 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r2); UPD(0x0C060394u, 1);  /* 0C060392 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x24u, r0); UPD(0x0C060396u, 1);  /* 0C060394 mov.l Rm,@(disp,Rn) */
	r8 = 0xC162F5Cu; UPD(0x0C060398u, 1);  /* 0C060396 mov.l @(disp,pc),Rn */
	r7 = 0xC162F6Cu; UPD(0x0C06039Au, 1);  /* 0C060398 mov.l @(disp,pc),Rn */
	r3 = 0xC162F7Cu; UPD(0x0C06039Cu, 1);  /* 0C06039A mov.l @(disp,pc),Rn */
	r2 = 0xC162F8Cu; UPD(0x0C06039Eu, 1);  /* 0C06039C mov.l @(disp,pc),Rn */
	r0 = 0x4AEu; UPD(0x0C0603A0u, 1);  /* 0C06039E mov.w @(disp,pc),Rn */
	W32(r14 + 0x14u, r8); UPD(0x0C0603A2u, 1);  /* 0C0603A0 mov.l Rm,@(disp,Rn) */
	T = (s32)r4 > (s32)r0;  /* 0C0603A2 cmp/gt Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C0603A6u, 2);  /* 0C0603A4 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r3); UPD(0x0C0603A8u, 1);  /* 0C0603A6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C060490u, 3); goto L_0C060490; } UPD(0x0C0603ACu, 1); goto L_0C0603AC; }  /* 0C0603A8 bf/s */
L_0C0603AC: BLKS(0x0C0603ACu);
	r8 = 0xC162FACu; UPD(0x0C0603AEu, 1);  /* 0C0603AC mov.l @(disp,pc),Rn */
	r0 = 0x3u;  /* 0C0603AE mov #imm,Rn */
	W8(r8, r0); UPD(0x0C0603B2u, 2);  /* 0C0603B0 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0603B4u, 1);  /* 0C0603B2 mov.b @Rm,Rn */
L_0C0603B4: BLKS(0x0C0603B4u);
	r3 = 0x3u;  /* 0C0603B4 mov #imm,Rn */
	T = r2 > r3;  /* 0C0603B6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0603FCu, 5); goto L_0C0603FC; }  /* 0C0603B8 bt */
L_0C0603BA: BLKS(0x0C0603BAu);
	r0 = 0xC0603C4u;  /* 0C0603BA mova @(disp,pc),r0 */
	IF(0x0C0603BCu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0603BEu, 2);  /* 0C0603BC mov.b @(r0,Rm),Rn */
	r7 = r7 & 0xFF;  /* 0C0603BE extu.b Rm,Rn */
	IF(0x0C0603C0u); { u32 tv_ = (r7 + 0x0C0603C4u); u32 t_ = PHYS(tv_); IF(0x0C0603C2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C060480u: goto L_0C060480; default: JUMPD(tv_); } }  /* 0C0603C0 braf Rn */
L_0C0603FC: BLKS(0x0C0603FCu);
	r14 += 0x28u;  /* 0C0603FC add #imm,Rn */
	r15 = r14;  /* 0C0603FE mov Rm,Rn */
	IF(0x0C060400u); PR = R32(r15); r15 += 4; UPD(0x0C060402u, 3);  /* 0C060400 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060404u, 1);  /* 0C060402 mov.l @Rm+,Rn */
	IF(0x0C060404u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060404 rts */
L_0C060422: BLKS(0x0C060422u);
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0603FCu, 3); goto L_0C0603FC; }  /* 0C060422 bra */
L_0C060480: BLKS(0x0C060480u);
	r0 = 0xC0604F0u; UPD(0x0C060482u, 1);  /* 0C060480 mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C060482 mov Rm,Rn */
	IF(0x0C060484u); { u32 t_ = r0; PR = 0x0C060488u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0604F0, 0x0C0604F0u, 0x0C060488u); }  /* 0C060484 jsr @Rn */
L_0C060488: BLKS(0x0C060488u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C060422u, 3); goto L_0C060422; }  /* 0C060488 bra */
L_0C060490: BLKS(0x0C060490u);
	r8 = 0xC162FACu; UPD(0x0C060492u, 1);  /* 0C060490 mov.l @(disp,pc),Rn */
	{ r2 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C0603B4u, 3); goto L_0C0603B4; }  /* 0C060492 bra */
}

void f_0C0603D0(sh3_t *c)
{
	LOCALS;
L_0C0603D0: BLKS(0x0C0603D0u);
	r0 = 0xC0AFDF0u; UPD(0x0C0603D2u, 1);  /* 0C0603D0 mov.l @(disp,pc),Rn */
	IF(0x0C0603D2u); { u32 t_ = r0; PR = 0x0C0603D6u; r5 = 0x78u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C0603D6u); }  /* 0C0603D2 jsr @Rn */
L_0C0603D6: BLKS(0x0C0603D6u);
	r1 = r0;  /* 0C0603D6 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0603DAu, 2);  /* 0C0603D8 mov.b @Rm,Rn */
	r0 = 0xC1F6100u; UPD(0x0C0603DCu, 1);  /* 0C0603DA mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0603DC add #imm,Rn */
	W8(r0, r1); UPD(0x0C0603E0u, 2);  /* 0C0603DE mov.b Rm,@Rn */
	W8(r8, r4); UPD(0x0C0603E2u, 1);  /* 0C0603E0 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)r1;  /* 0C0603E2 exts.b Rm,Rn */
	r2 = 0xC162EE4u; UPD(0x0C0603E6u, 2);  /* 0C0603E4 mov.l @(disp,pc),Rn */
	IF(0x0C0603E6u); r0 <<= 2;  /* 0C0603E6 shll2 Rn */
	r8 = 0xC0AFC10u; UPD(0x0C0603EAu, 2);  /* 0C0603E8 mov.l @(disp,pc),Rn */
	r4 = 0x5Cu;  /* 0C0603EA mov #imm,Rn */
	IF(0x0C0603ECu); r6 = R32(r0 + r2); UPD(0x0C0603EEu, 2);  /* 0C0603EC mov.l @(r0,Rm),Rn */
	r5 = 0xC1F6104u; UPD(0x0C0603F0u, 1);  /* 0C0603EE mov.l @(disp,pc),Rn */
	IF(0x0C0603F0u); { u32 t_ = r8; PR = 0x0C0603F4u; W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0603F4u); }  /* 0C0603F0 jsr @Rn */
L_0C0603F4: BLKS(0x0C0603F4u);
	r4 = 0x97u; UPD(0x0C0603F6u, 1);  /* 0C0603F4 mov.w @(disp,pc),Rn */
	IF(0x0C0603F6u); { u32 t_ = r8; PR = 0x0C0603FAu; IF(0x0C0603F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0603FAu); }  /* 0C0603F6 jsr @Rn */
L_0C0603FA: BLKS(0x0C0603FAu);
	IF(0x0C0603FAu); ;  /* 0C0603FA nop */
	r14 += 0x28u;  /* 0C0603FC add #imm,Rn */
	r15 = r14;  /* 0C0603FE mov Rm,Rn */
	IF(0x0C060400u); PR = R32(r15); r15 += 4; UPD(0x0C060402u, 4);  /* 0C060400 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060404u, 1);  /* 0C060402 mov.l @Rm+,Rn */
	IF(0x0C060404u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060404 rts */
}

void f_0C060410(sh3_t *c)
{
	LOCALS;
	goto L_0C060410;
L_0C0603FC: BLKS(0x0C0603FCu);
	r14 += 0x28u;  /* 0C0603FC add #imm,Rn */
	r15 = r14;  /* 0C0603FE mov Rm,Rn */
	IF(0x0C060400u); PR = R32(r15); r15 += 4; UPD(0x0C060402u, 3);  /* 0C060400 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060404u, 1);  /* 0C060402 mov.l @Rm+,Rn */
	IF(0x0C060404u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060404 rts */
L_0C060410: BLKS(0x0C060410u);
	r7 = 0xC1F6104u; UPD(0x0C060412u, 1);  /* 0C060410 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C060412 mov #imm,Rn */
	r2 = R32(r7); UPD(0x0C060416u, 2);  /* 0C060414 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C060418u, 1);  /* 0C060416 mov.b @Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C060418 extu.b Rm,Rn */
	T = r3 > r4;  /* 0C06041A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C060430u, 5); goto L_0C060430; }  /* 0C06041C bf */
L_0C06041E: BLKS(0x0C06041Eu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C060420u, 1);  /* 0C06041E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C060420 add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0603FCu, 4); goto L_0C0603FC; }  /* 0C060422 bra */
L_0C060430: BLKS(0x0C060430u);
	r2 += 0x1u;  /* 0C060430 add #imm,Rn */
	W32(r7, r2); UPD(0x0C060434u, 2);  /* 0C060432 mov.l Rm,@Rn */
	r3 += r3;  /* 0C060434 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r4 = v_; } UPD(0x0C060438u, 2);  /* 0C060436 mov.b @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C060438 add #imm,Rn */
	r8 = 0xC1F6100u; UPD(0x0C06043Cu, 2);  /* 0C06043A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C06043C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C060440u, 2);  /* 0C06043E mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C060440 extu.b Rm,Rn */
	W32(r7, r2); UPD(0x0C060444u, 2);  /* 0C060442 mov.l Rm,@Rn */
	IF(0x0C060444u); r0 <<= 2;  /* 0C060444 shll2 Rn */
	r7 = 0x2u;  /* 0C060446 mov #imm,Rn */
	r8 = 0xC050B50u; UPD(0x0C06044Au, 3);  /* 0C060448 mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C06044A add Rm,Rn */
	W32(r15, r7); UPD(0x0C06044Eu, 2);  /* 0C06044C mov.l Rm,@Rn */
	r6 += r3;  /* 0C06044E add Rm,Rn */
	IF(0x0C060450u); r4 = R32(r0 + r14); UPD(0x0C060452u, 2);  /* 0C060450 mov.l @(r0,Rm),Rn */
	IF(0x0C060452u); { u32 t_ = r8; PR = 0x0C060456u; r7 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050B50, 0x0C050B50u, 0x0C060456u); }  /* 0C060452 jsr @Rn */
L_0C060456: BLKS(0x0C060456u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0603FCu, 3); goto L_0C0603FC; }  /* 0C060456 bra */
}

void f_0C060460(sh3_t *c)
{
	LOCALS;
	goto L_0C060460;
L_0C0603FC: BLKS(0x0C0603FCu);
	r14 += 0x28u;  /* 0C0603FC add #imm,Rn */
	UPD(0x0C0603FEu, 1);
L_0C0603FE: BLKS(0x0C0603FEu);
	r15 = r14;  /* 0C0603FE mov Rm,Rn */
	IF(0x0C060400u); PR = R32(r15); r15 += 4; UPD(0x0C060402u, 2);  /* 0C060400 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060404u, 1);  /* 0C060402 mov.l @Rm+,Rn */
	IF(0x0C060404u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060404 rts */
L_0C06041E: BLKS(0x0C06041Eu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C060420u, 1);  /* 0C06041E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C060420 add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0603FCu, 4); goto L_0C0603FC; }  /* 0C060422 bra */
L_0C060460: BLKS(0x0C060460u);
	r0 = 0xC0AFDF0u; UPD(0x0C060462u, 1);  /* 0C060460 mov.l @(disp,pc),Rn */
	IF(0x0C060462u); { u32 t_ = r0; PR = 0x0C060466u; r5 = 0x78u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C060466u); }  /* 0C060462 jsr @Rn */
L_0C060466: BLKS(0x0C060466u);
	r2 = 0xC1F6100u; UPD(0x0C060468u, 1);  /* 0C060466 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C06046Au, 1);  /* 0C060468 mov.b @Rm,Rn */
	T = r6 == r0;  /* 0C06046A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06041Eu, 4); goto L_0C06041E; }  /* 0C06046C bf */
L_0C06046E: BLKS(0x0C06046Eu);
	r14 += 0x28u;  /* 0C06046E add #imm,Rn */
	{ IF(0x0C060472u); ; /* slot nop */ UPD(0x0C0603FEu, 4); goto L_0C0603FE; }  /* 0C060470 bra */
}

/* FUN_0c0604f0 */
void f_0C0604F0(sh3_t *c)
{
	LOCALS;
L_0C0604F0: BLKS(0x0C0604F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0604F2u, 1);  /* 0C0604F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0604F4u, 1);  /* 0C0604F2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r4;  /* 0C0604F4 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0604F8u, 2);  /* 0C0604F6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r5;  /* 0C0604F8 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0604FCu, 2);  /* 0C0604FA mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0604FC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C060500u, 2);  /* 0C0604FE mov.l Rm,@-Rn */
	r6 = r9;  /* 0C060500 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060504u, 2);  /* 0C060502 mov.l Rm,@-Rn */
	r8 += 0x2u;  /* 0C060504 add #imm,Rn */
	r12 = 0xC050D10u; UPD(0x0C060508u, 2);  /* 0C060506 mov.l @(disp,pc),Rn */
	IF(0x0C060508u); r15 -= 4; W32(r15, PR); UPD(0x0C06050Au, 1);  /* 0C060508 sts.l pr,@-Rn */
	r10 = 0xC162FB0u; UPD(0x0C06050Cu, 1);  /* 0C06050A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06050C mov Rm,Rn */
	r11 = 0x80808000u; UPD(0x0C060510u, 2);  /* 0C06050E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C060510 mov Rm,Rn */
	IF(0x0C060512u); { u32 t_ = r12; PR = 0x0C060516u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D10, 0x0C050D10u, 0x0C060516u); }  /* 0C060512 jsr @Rn */
L_0C060516: BLKS(0x0C060516u);
	r5 = r8;  /* 0C060516 mov Rm,Rn */
	r4 = r10;  /* 0C060518 mov Rm,Rn */
	r6 = r9;  /* 0C06051A mov Rm,Rn */
	r7 = r11;  /* 0C06051C mov Rm,Rn */
	IF(0x0C06051Eu); { u32 t_ = r12; PR = 0x0C060522u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050D10, 0x0C050D10u, 0x0C060522u); }  /* 0C06051E jsr @Rn */
L_0C060522: BLKS(0x0C060522u);
	r5 = r8;  /* 0C060522 mov Rm,Rn */
	r4 = r10;  /* 0C060524 mov Rm,Rn */
	r6 = r9;  /* 0C060526 mov Rm,Rn */
	r7 = r11;  /* 0C060528 mov Rm,Rn */
	IF(0x0C06052Au); { u32 t_ = r12; PR = 0x0C06052Eu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050D10, 0x0C050D10u, 0x0C06052Eu); }  /* 0C06052A jsr @Rn */
L_0C06052E: BLKS(0x0C06052Eu);
	r5 = r8;  /* 0C06052E mov Rm,Rn */
	r4 = r10;  /* 0C060530 mov Rm,Rn */
	r6 = r9;  /* 0C060532 mov Rm,Rn */
	r7 = r11;  /* 0C060534 mov Rm,Rn */
	IF(0x0C060536u); { u32 t_ = r12; PR = 0x0C06053Au; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050D10, 0x0C050D10u, 0x0C06053Au); }  /* 0C060536 jsr @Rn */
L_0C06053A: BLKS(0x0C06053Au);
	r4 = r10;  /* 0C06053A mov Rm,Rn */
	r5 = r8;  /* 0C06053C mov Rm,Rn */
	r6 = r9;  /* 0C06053E mov Rm,Rn */
	r7 = r11;  /* 0C060540 mov Rm,Rn */
	r0 = r12;  /* 0C060542 mov Rm,Rn */
	r15 = r14;  /* 0C060544 mov Rm,Rn */
	IF(0x0C060546u); PR = R32(r15); r15 += 4; UPD(0x0C060548u, 7);  /* 0C060546 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06054Au, 1);  /* 0C060548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06054Cu, 1);  /* 0C06054A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06054Eu, 1);  /* 0C06054C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060550u, 1);  /* 0C06054E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060552u, 1);  /* 0C060550 mov.l @Rm+,Rn */
	IF(0x0C060552u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050D10u: TAIL(f_0C050D10); default: JUMPD(tv_); } }  /* 0C060552 jmp @Rn */
}

/* FUN_0c060570 */
void f_0C060570(sh3_t *c)
{
	LOCALS;
L_0C060570: BLKS(0x0C060570u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060572u, 1);  /* 0C060570 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C060572 exts.b Rm,Rn */
	IF(0x0C060574u); r15 -= 4; W32(r15, PR); UPD(0x0C060576u, 2);  /* 0C060574 sts.l pr,@-Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C060576 exts.b Rm,Rn */
	r5 = r0;  /* 0C060578 mov Rm,Rn */
	r14 = r15;  /* 0C06057A mov Rm,Rn */
	r0 = 0xC050B50u; UPD(0x0C06057Eu, 4);  /* 0C06057C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06057E add #imm,Rn */
	r3 = 0x1Au;  /* 0C060580 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C060584u, 3);  /* 0C060582 mov.l Rm,@Rn */
	r4 = 0xC162FB8u; UPD(0x0C060586u, 1);  /* 0C060584 mov.l @(disp,pc),Rn */
	IF(0x0C060586u); { u32 t_ = r0; PR = 0x0C06058Au; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050B50, 0x0C050B50u, 0x0C06058Au); }  /* 0C060586 jsr @Rn */
L_0C06058A: BLKS(0x0C06058Au);
	r15 = r14;  /* 0C06058A mov Rm,Rn */
	IF(0x0C06058Cu); PR = R32(r15); r15 += 4; UPD(0x0C06058Eu, 2);  /* 0C06058C lds.l @Rn+,pr */
	IF(0x0C06058Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06058E rts */
}

/* FUN_0c0605a0 */
void f_0C0605A0(sh3_t *c)
{
	LOCALS;
L_0C0605A0: BLKS(0x0C0605A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0605A2u, 1);  /* 0C0605A0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0605A2 exts.b Rm,Rn */
	IF(0x0C0605A4u); r15 -= 4; W32(r15, PR); UPD(0x0C0605A6u, 2);  /* 0C0605A4 sts.l pr,@-Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C0605A6 exts.b Rm,Rn */
	r5 = r0;  /* 0C0605A8 mov Rm,Rn */
	r14 = r15;  /* 0C0605AA mov Rm,Rn */
	r0 = 0xC050B50u; UPD(0x0C0605AEu, 4);  /* 0C0605AC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0605AE add #imm,Rn */
	r3 = 0x1Au;  /* 0C0605B0 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C0605B4u, 3);  /* 0C0605B2 mov.l Rm,@Rn */
	r4 = 0xC163158u; UPD(0x0C0605B6u, 1);  /* 0C0605B4 mov.l @(disp,pc),Rn */
	IF(0x0C0605B6u); { u32 t_ = r0; PR = 0x0C0605BAu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050B50, 0x0C050B50u, 0x0C0605BAu); }  /* 0C0605B6 jsr @Rn */
L_0C0605BA: BLKS(0x0C0605BAu);
	r15 = r14;  /* 0C0605BA mov Rm,Rn */
	IF(0x0C0605BCu); PR = R32(r15); r15 += 4; UPD(0x0C0605BEu, 2);  /* 0C0605BC lds.l @Rn+,pr */
	IF(0x0C0605BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0605BE rts */
}

/* FUN_0c0605d0 */
void f_0C0605D0(sh3_t *c)
{
	LOCALS;
L_0C0605D0: BLKS(0x0C0605D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0605D2u, 1);  /* 0C0605D0 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C0605D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0605D6u, 2);  /* 0C0605D4 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0605D6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0605DAu, 2);  /* 0C0605D8 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0605DA mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0605DEu, 2);  /* 0C0605DC mov.l Rm,@-Rn */
	r10 = 0xC283752u; UPD(0x0C0605E0u, 1);  /* 0C0605DE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0605E0 mov Rm,Rn */
	IF(0x0C0605E2u); ;  /* 0C0605E2 nop */
	UPD(0x0C0605E4u, 2);
L_0C0605E4: BLKS(0x0C0605E4u);
	r6 = 0xC27DDB4u; UPD(0x0C0605E6u, 1);  /* 0C0605E4 mov.l @(disp,pc),Rn */
	r7 = 0xC392D82u; UPD(0x0C0605E8u, 1);  /* 0C0605E6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0605E8 add Rm,Rn */
	r3 = 0xC26C87Au; UPD(0x0C0605ECu, 2);  /* 0C0605EA mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C0605EC add Rm,Rn */
	r9 = 0xC392968u; UPD(0x0C0605F0u, 2);  /* 0C0605EE mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0605F0 add Rm,Rn */
	r2 = 0xC21CC40u; UPD(0x0C0605F4u, 2);  /* 0C0605F2 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0605F4 add Rm,Rn */
	r5 = 0xC27557Cu; UPD(0x0C0605F8u, 2);  /* 0C0605F6 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0605F8 add Rm,Rn */
	r5 += r0;  /* 0C0605FA add Rm,Rn */
	W16(r9, r4); UPD(0x0C0605FEu, 3);  /* 0C0605FC mov.w Rm,@Rn */
	W16(r3, r4); UPD(0x0C060600u, 1);  /* 0C0605FE mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C060602u, 1);  /* 0C060600 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C060604u, 1);  /* 0C060602 mov.w Rm,@Rn */
	W16(r2, r4); UPD(0x0C060606u, 1);  /* 0C060604 mov.w Rm,@Rn */
	W16(r5, r4); UPD(0x0C060608u, 1);  /* 0C060606 mov.w Rm,@Rn */
	r2 = r8;  /* 0C060608 mov Rm,Rn */
	r9 = 0xC2864B8u; UPD(0x0C06060Cu, 2);  /* 0C06060A mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C06060C mov Rm,Rn */
	r6 = 0xC21F840u; UPD(0x0C060610u, 2);  /* 0C06060E mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C060610 add #imm,Rn */
	r7 = 0xC21F800u; UPD(0x0C060614u, 2);  /* 0C060612 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C060614 add Rm,Rn */
	r3 = 0xC2834FCu; UPD(0x0C060618u, 2);  /* 0C060616 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C060618 add Rm,Rn */
	r1 = 0xC275DD6u; UPD(0x0C06061Cu, 2);  /* 0C06061A mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C06061C add Rm,Rn */
	r1 += r0;  /* 0C06061E add Rm,Rn */
	r8 = (u32)(s32)(s8)r2;  /* 0C060620 exts.b Rm,Rn */
	IF(0x0C060622u); W16(r0 + r10, r4); UPD(0x0C060624u, 4);  /* 0C060622 mov.w Rm,@(r0,Rn) */
	r5 += r9;  /* 0C060624 add Rm,Rn */
	r2 = 0x17u;  /* 0C060626 mov #imm,Rn */
	W16(r1, r4); UPD(0x0C06062Au, 3);  /* 0C060628 mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C06062A add #imm,Rn */
	W16(r3, r4); UPD(0x0C06062Eu, 2);  /* 0C06062C mov.w Rm,@Rn */
	T = (s32)r8 > (s32)r2;  /* 0C06062E cmp/gt Rm,Rn */
	W16(r7, r4); UPD(0x0C060632u, 2);  /* 0C060630 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C060634u, 1);  /* 0C060632 mov.w Rm,@Rn */
	{ u32 c_ = !T; W16(r5, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0605E4u, 3); goto L_0C0605E4; } UPD(0x0C060638u, 1); goto L_0C060638; }  /* 0C060634 bf/s */
L_0C060638: BLKS(0x0C060638u);
	r0 = r9;  /* 0C060638 mov Rm,Rn */
	r0 += 0x28u;  /* 0C06063A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C06063Eu, 3);  /* 0C06063C mov.w @Rm,Rn */
	r4 += 0x1u;  /* 0C06063E add #imm,Rn */
	W16(r0, r4); UPD(0x0C060642u, 2);  /* 0C060640 mov.w Rm,@Rn */
	r15 = r14;  /* 0C060642 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060646u, 2);  /* 0C060644 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060648u, 1);  /* 0C060646 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06064Au, 1);  /* 0C060648 mov.l @Rm+,Rn */
	IF(0x0C06064Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06064A rts */
}

/* FUN_0c060680 */
void f_0C060680(sh3_t *c)
{
	LOCALS;
L_0C060680: BLKS(0x0C060680u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060682u, 1);  /* 0C060680 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C060682 mov #imm,Rn */
	r0 = 0xC283C65u; UPD(0x0C060686u, 2);  /* 0C060684 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C060686 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C06068Au, 2);  /* 0C060688 mov.b Rm,@Rn */
	r14 = r15;  /* 0C06068A mov Rm,Rn */
	r7 = 0xC283C7Fu; UPD(0x0C06068Eu, 2);  /* 0C06068C mov.l @(disp,pc),Rn */
	r4 = 0xC283C50u; UPD(0x0C060690u, 1);  /* 0C06068E mov.l @(disp,pc),Rn */
	W8(r7, r6); UPD(0x0C060692u, 1);  /* 0C060690 mov.b Rm,@Rn */
	r5 = 0xC2839FFu; UPD(0x0C060694u, 1);  /* 0C060692 mov.l @(disp,pc),Rn */
	W32(r4 + 0x34u, r3); UPD(0x0C060696u, 1);  /* 0C060694 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2839D0u; UPD(0x0C060698u, 1);  /* 0C060696 mov.l @(disp,pc),Rn */
	r0 = 0xC2839E5u; UPD(0x0C06069Au, 1);  /* 0C060698 mov.l @(disp,pc),Rn */
	W8(r5, r6); UPD(0x0C06069Cu, 1);  /* 0C06069A mov.b Rm,@Rn */
	W32(r2 + 0x34u, r3); UPD(0x0C06069Eu, 1);  /* 0C06069C mov.l Rm,@(disp,Rn) */
	W8(r0, r3); UPD(0x0C0606A0u, 1);  /* 0C06069E mov.b Rm,@Rn */
	r15 = r14;  /* 0C0606A0 mov Rm,Rn */
	IF(0x0C0606A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0606A2 rts */
}

/* FUN_0c0606c0 */
void f_0C0606C0(sh3_t *c)
{
	LOCALS;
L_0C0606C0: BLKS(0x0C0606C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0606C2u, 1);  /* 0C0606C0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0606C2 exts.w Rm,Rn */
	r0 = 0xC0u; UPD(0x0C0606C6u, 2);  /* 0C0606C4 mov.w @(disp,pc),Rn */
	r7 = 0xC2755BCu; UPD(0x0C0606C8u, 1);  /* 0C0606C6 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0606C8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0606F8u, 4); goto L_0C0606F8; } goto L_0C0606CE; }  /* 0C0606CA bt/s */
L_0C0606CE: BLKS(0x0C0606CEu);
	r0 = 0xC2175ECu; UPD(0x0C0606D0u, 2);  /* 0C0606CE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0606D0 mov #imm,Rn */
	r5 = 0xBFu; UPD(0x0C0606D4u, 2);  /* 0C0606D2 mov.w @(disp,pc),Rn */
	r3 = 0xC26CD40u; UPD(0x0C0606D6u, 1);  /* 0C0606D4 mov.l @(disp,pc),Rn */
	r6 = 0xB4u; UPD(0x0C0606D8u, 1);  /* 0C0606D6 mov.w @(disp,pc),Rn */
L_0C0606D8: BLKS(0x0C0606D8u);
	r1 = R32(r3); UPD(0x0C0606DAu, 1);  /* 0C0606D8 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0606DA tst Rm,Rn */
	{ u32 c_ = !T; r3 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0606EEu, 4); goto L_0C0606EE; } goto L_0C0606E0; }  /* 0C0606DC bf/s */
L_0C0606E0: BLKS(0x0C0606E0u);
	r1 = r4;  /* 0C0606E0 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C0606E4u, 3);  /* 0C0606E2 mov.w Rm,@Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0606E4 add #imm,Rn */
	r4 = (u32)(s32)(s16)r1;  /* 0C0606E6 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0606E8 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060700u, 6); goto L_0C060700; } UPD(0x0C0606EEu, 1); goto L_0C0606EE; }  /* 0C0606EA bt/s */
L_0C0606EE: BLKS(0x0C0606EEu);
	r1 = r2;  /* 0C0606EE mov Rm,Rn */
	r1 += 0x1u;  /* 0C0606F0 add #imm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C0606F2 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0606F4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0606D8u, 7); goto L_0C0606D8; }  /* 0C0606F6 bf */
L_0C0606F8: BLKS(0x0C0606F8u);
	r0 = 0x0u;  /* 0C0606F8 mov #imm,Rn */
	UPD(0x0C0606FAu, 1);
L_0C0606FA: BLKS(0x0C0606FAu);
	r15 = r14;  /* 0C0606FA mov Rm,Rn */
	IF(0x0C0606FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0606FC rts */
L_0C060700: BLKS(0x0C060700u);
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C060702u, 1);  /* 0C060700 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C060702 add #imm,Rn */
	W16(r0, r2); UPD(0x0C060706u, 2);  /* 0C060704 mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0606FAu, 3); goto L_0C0606FA; }  /* 0C060706 bra */
}

/* FUN_0c060720 */
void f_0C060720(sh3_t *c)
{
	LOCALS;
L_0C060720: BLKS(0x0C060720u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060722u, 1);  /* 0C060720 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C060722 exts.w Rm,Rn */
	r0 = 0x100u; UPD(0x0C060726u, 2);  /* 0C060724 mov.w @(disp,pc),Rn */
	r7 = 0xC2755BCu; UPD(0x0C060728u, 1);  /* 0C060726 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C060728 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060758u, 4); goto L_0C060758; } goto L_0C06072E; }  /* 0C06072A bt/s */
L_0C06072E: BLKS(0x0C06072Eu);
	r5 = 0xC21F894u; UPD(0x0C060730u, 2);  /* 0C06072E mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C060730 mov #imm,Rn */
	r6 = 0xFFu; UPD(0x0C060734u, 2);  /* 0C060732 mov.w @(disp,pc),Rn */
	r3 = 0xC27E0FCu; UPD(0x0C060736u, 1);  /* 0C060734 mov.l @(disp,pc),Rn */
	IF(0x0C060736u); ;  /* 0C060736 nop */
	UPD(0x0C060738u, 1);
L_0C060738: BLKS(0x0C060738u);
	r0 = R32(r3); UPD(0x0C06073Au, 1);  /* 0C060738 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06073A tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06074Eu, 4); goto L_0C06074E; } goto L_0C060740; }  /* 0C06073C bf/s */
L_0C060740: BLKS(0x0C060740u);
	r0 = r4;  /* 0C060740 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C060744u, 3);  /* 0C060742 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C060744 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C060746 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060748 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060760u, 6); goto L_0C060760; } UPD(0x0C06074Eu, 1); goto L_0C06074E; }  /* 0C06074A bt/s */
L_0C06074E: BLKS(0x0C06074Eu);
	r0 = r2;  /* 0C06074E mov Rm,Rn */
	r0 += 0x1u;  /* 0C060750 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C060752 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C060754 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C060738u, 7); goto L_0C060738; }  /* 0C060756 bf */
L_0C060758: BLKS(0x0C060758u);
	r0 = 0x0u;  /* 0C060758 mov #imm,Rn */
	UPD(0x0C06075Au, 1);
L_0C06075A: BLKS(0x0C06075Au);
	r15 = r14;  /* 0C06075A mov Rm,Rn */
	IF(0x0C06075Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06075C rts */
L_0C060760: BLKS(0x0C060760u);
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C060762u, 1);  /* 0C060760 mov.w @Rm,Rn */
	r0 = 0x1u;  /* 0C060762 mov #imm,Rn */
	r2 += 0x1u;  /* 0C060764 add #imm,Rn */
	{ W16(r5, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C06075Au, 5); goto L_0C06075A; }  /* 0C060766 bra */
}

/* FUN_0c0607d0 */
void f_0C0607D0(sh3_t *c)
{
	LOCALS;
L_0C0607D0: BLKS(0x0C0607D0u);
	r0 = 0x3FFu; UPD(0x0C0607D2u, 1);  /* 0C0607D0 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0607D2 exts.w Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C0607D4 cmp/ge Rm,Rn */
	IF(0x0C0607D6u); r0 = T;  /* 0C0607D6 movt Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C0607D8 exts.w Rm,Rn */
	r3 = 0x10u;  /* 0C0607DA mov #imm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C0607DC cmp/ge Rm,Rn */
	IF(0x0C0607DEu); r2 = T;  /* 0C0607DE movt Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0607E2u, 8);  /* 0C0607E0 mov.l Rm,@-Rn */
	r0 &= r2;  /* 0C0607E2 and Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0607E6u, 2);  /* 0C0607E4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0607E6 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0607E8 tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060822u, 5); goto L_0C060822; } goto L_0C0607EE; }  /* 0C0607EA bt/s */
L_0C0607EE: BLKS(0x0C0607EEu);
	r3 = 0x0u;  /* 0C0607EE mov #imm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C0607F0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060824u, 6); goto L_0C060824; } goto L_0C0607F6; }  /* 0C0607F2 bt/s */
L_0C0607F6: BLKS(0x0C0607F6u);
	r2 = 0x340u; UPD(0x0C0607F8u, 2);  /* 0C0607F6 mov.w @(disp,pc),Rn */
	IF(0x0C0607F8u); MACL = r4 * r2;  /* 0C0607F8 mul.l Rm,Rn */
	r4 = 0xC285318u; UPD(0x0C0607FCu, 3);  /* 0C0607FA mov.l @(disp,pc),Rn */
	IF(0x0C0607FCu); r2 = MACL;  /* 0C0607FC sts macl,Rn */
	r2 += r4;  /* 0C0607FE add Rm,Rn */
	UPD(0x0C060800u, 2);
L_0C060800: BLKS(0x0C060800u);
	r0 = R32(r2); UPD(0x0C060802u, 1);  /* 0C060800 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060802 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060818u, 4); goto L_0C060818; } goto L_0C060808; }  /* 0C060804 bf/s */
L_0C060808: BLKS(0x0C060808u);
	r4 = r5;  /* 0C060808 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C06080Cu, 3);  /* 0C06080A mov.w Rm,@Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06080C add #imm,Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C06080E exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C060810 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C060812 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060824u, 7); goto L_0C060824; } UPD(0x0C060818u, 1); goto L_0C060818; }  /* 0C060814 bt/s */
L_0C060818: BLKS(0x0C060818u);
	r0 = r3;  /* 0C060818 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06081A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C06081C exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C06081E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C060800u, 7); goto L_0C060800; }  /* 0C060820 bf */
L_0C060822: BLKS(0x0C060822u);
	r0 = 0x0u;  /* 0C060822 mov #imm,Rn */
	UPD(0x0C060824u, 1);
L_0C060824: BLKS(0x0C060824u);
	r15 = r14;  /* 0C060824 mov Rm,Rn */
	IF(0x0C060826u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C060826 rts */
}

/* FUN_0c060840 */
void f_0C060840(sh3_t *c)
{
	LOCALS;
L_0C060840: BLKS(0x0C060840u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060842u, 1);  /* 0C060840 mov.l Rm,@-Rn */
	r0 = 0x10u;  /* 0C060842 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060846u, 2);  /* 0C060844 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C060846 exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C060848 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C06084A cmp/gt Rm,Rn */
	r5 = 0xC2755BCu; UPD(0x0C06084Eu, 4);  /* 0C06084C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06084E mov Rm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C060850 exts.w Rm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C060852 exts.w Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06089Au, 6); goto L_0C06089A; } goto L_0C060858; }  /* 0C060854 bt/s */
L_0C060858: BLKS(0x0C060858u);
	r0 = 0x3FFu; UPD(0x0C06085Au, 2);  /* 0C060858 mov.w @(disp,pc),Rn */
	T = (s32)r6 > (s32)r0;  /* 0C06085A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06089Au, 4); goto L_0C06089A; } goto L_0C060860; }  /* 0C06085C bt/s */
L_0C060860: BLKS(0x0C060860u);
	r3 = 0x0u;  /* 0C060860 mov #imm,Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C060862 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06089Au, 6); goto L_0C06089A; }  /* 0C060864 bt */
L_0C060866: BLKS(0x0C060866u);
	r2 = 0x9C0u; UPD(0x0C060868u, 1);  /* 0C060866 mov.w @(disp,pc),Rn */
	IF(0x0C060868u); MACL = r4 * r2;  /* 0C060868 mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C06086Cu, 3);  /* 0C06086A mov.w @(disp,pc),Rn */
	IF(0x0C06086Cu); r2 = MACL;  /* 0C06086C sts macl,Rn */
	IF(0x0C06086Eu); MACL = r8 * r0;  /* 0C06086E mul.l Rm,Rn */
	r4 = 0xC21F8A0u; UPD(0x0C060872u, 4);  /* 0C060870 mov.l @(disp,pc),Rn */
	IF(0x0C060872u); r8 = MACL;  /* 0C060872 sts macl,Rn */
	r2 += r8;  /* 0C060874 add Rm,Rn */
	r2 += r4;  /* 0C060876 add Rm,Rn */
	UPD(0x0C060878u, 3);
L_0C060878: BLKS(0x0C060878u);
	r4 = R32(r2); UPD(0x0C06087Au, 1);  /* 0C060878 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06087A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06088Eu, 4); goto L_0C06088E; } goto L_0C060880; }  /* 0C06087C bf/s */
L_0C060880: BLKS(0x0C060880u);
	r8 = r6;  /* 0C060880 mov Rm,Rn */
	W16(r5, r3); UPD(0x0C060884u, 3);  /* 0C060882 mov.w Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C060884 add #imm,Rn */
	r6 = (u32)(s32)(s16)r8;  /* 0C060886 exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C060888 tst Rm,Rn */
	{ u32 c_ = T; r5 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0608B0u, 6); goto L_0C0608B0; } UPD(0x0C06088Eu, 1); goto L_0C06088E; }  /* 0C06088A bt/s */
L_0C06088E: BLKS(0x0C06088Eu);
	r0 = r3;  /* 0C06088E mov Rm,Rn */
	r0 += 0x1u;  /* 0C060890 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C060892 exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C060894 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060878u, 7); goto L_0C060878; } UPD(0x0C06089Au, 1); goto L_0C06089A; }  /* 0C060896 bf/s */
L_0C06089A: BLKS(0x0C06089Au);
	r15 = r14;  /* 0C06089A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06089Eu, 2);  /* 0C06089C mov.l @Rm+,Rn */
	IF(0x0C06089Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06089E rts */
L_0C0608B0: BLKS(0x0C0608B0u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06089Au, 3); goto L_0C06089A; }  /* 0C0608B0 bra */
}

/* FUN_0c0608d0 */
void f_0C0608D0(sh3_t *c)
{
	LOCALS;
L_0C0608D0: BLKS(0x0C0608D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0608D2u, 1);  /* 0C0608D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0608D2 exts.w Rm,Rn */
	r0 = 0x20u;  /* 0C0608D4 mov #imm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C0608D8u, 3);  /* 0C0608D6 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0608D8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060906u, 4); goto L_0C060906; } goto L_0C0608DE; }  /* 0C0608DA bt/s */
L_0C0608DE: BLKS(0x0C0608DEu);
	r7 = 0xC393048u; UPD(0x0C0608E0u, 2);  /* 0C0608DE mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0608E0 mov #imm,Rn */
	r3 = 0x1Fu;  /* 0C0608E2 mov #imm,Rn */
	UPD(0x0C0608E4u, 2);
L_0C0608E4: BLKS(0x0C0608E4u);
	IF(0x0C0608E4u); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0608E6u, 1);  /* 0C0608E4 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0608E6 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0608FEu, 4); goto L_0C0608FE; } goto L_0C0608EC; }  /* 0C0608E8 bf/s */
L_0C0608EC: BLKS(0x0C0608ECu);
	r6 = r4;  /* 0C0608EC mov Rm,Rn */
	W16(r2, r0); UPD(0x0C0608F0u, 3);  /* 0C0608EE mov.w Rm,@Rn */
	r6 += 0xFFFFFFFFu;  /* 0C0608F0 add #imm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C0608F2 exts.w Rm,Rn */
	r2 += 0x2u;  /* 0C0608F4 add #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C0608F6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060908u, 7); goto L_0C060908; } goto L_0C0608FC; }  /* 0C0608F8 bt/s */
L_0C0608FC: BLKS(0x0C0608FCu);
	r5 = r0;  /* 0C0608FC mov Rm,Rn */
	UPD(0x0C0608FEu, 2);
L_0C0608FE: BLKS(0x0C0608FEu);
	r5 += 0x1u;  /* 0C0608FE add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C060900 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C060902 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0608E4u, 6); goto L_0C0608E4; }  /* 0C060904 bf */
L_0C060906: BLKS(0x0C060906u);
	r1 = 0x0u;  /* 0C060906 mov #imm,Rn */
	UPD(0x0C060908u, 1);
L_0C060908: BLKS(0x0C060908u);
	r0 = r1;  /* 0C060908 mov Rm,Rn */
	r15 = r14;  /* 0C06090A mov Rm,Rn */
	IF(0x0C06090Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06090C rts */
}

/* FUN_0c060a90 */
void f_0C060A90(sh3_t *c)
{
	LOCALS;
L_0C060A90: BLKS(0x0C060A90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060A92u, 1);  /* 0C060A90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060A94u, 1);  /* 0C060A92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060A96u, 1);  /* 0C060A94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C060A98u, 1);  /* 0C060A96 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060A9Au, 1);  /* 0C060A98 mov.l Rm,@-Rn */
	r10 = 0xC16BE68u; UPD(0x0C060A9Cu, 1);  /* 0C060A9A mov.l @(disp,pc),Rn */
	IF(0x0C060A9Cu); r15 -= 4; W32(r15, PR); UPD(0x0C060A9Eu, 1);  /* 0C060A9C sts.l pr,@-Rn */
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C060AA0u, 1);  /* 0C060A9E mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C060AA0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060AC8u, 4); goto L_0C060AC8; } goto L_0C060AA6; }  /* 0C060AA2 bt/s */
L_0C060AA6: BLKS(0x0C060AA6u);
	IF(0x0C060AA6u); ;  /* 0C060AA6 nop */
	UPD(0x0C060AA8u, 2);
L_0C060AA8: BLKS(0x0C060AA8u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060AAAu, 1);  /* 0C060AA8 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060AACu, 1);  /* 0C060AAA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060AAC tst Rm,Rn */
	if (T) { UPD(0x0C060AC2u, 4); goto L_0C060AC2; }  /* 0C060AAE bt */
L_0C060AB0: BLKS(0x0C060AB0u);
	r9 = 0xC058480u; UPD(0x0C060AB2u, 1);  /* 0C060AB0 mov.l @(disp,pc),Rn */
	IF(0x0C060AB2u); ;  /* 0C060AB2 nop */
	UPD(0x0C060AB4u, 1);
L_0C060AB4: BLKS(0x0C060AB4u);
	r4 = (u32)(s32)(s16)r4;  /* 0C060AB4 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060AB8u, 2);  /* 0C060AB6 mov.w @(disp,pc),Rn */
	IF(0x0C060AB8u); { u32 t_ = r9; PR = 0x0C060ABCu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060ABCu); }  /* 0C060AB8 jsr @Rn */
L_0C060ABC: BLKS(0x0C060ABCu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060ABEu, 1);  /* 0C060ABC mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060ABE tst Rm,Rn */
	if (!T) { UPD(0x0C060AB4u, 4); goto L_0C060AB4; }  /* 0C060AC0 bf */
L_0C060AC2: BLKS(0x0C060AC2u);
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C060AC4u, 1);  /* 0C060AC2 mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C060AC4 tst Rm,Rn */
	if (!T) { UPD(0x0C060AA8u, 4); goto L_0C060AA8; }  /* 0C060AC6 bf */
L_0C060AC8: BLKS(0x0C060AC8u);
	r10 = 0xC170314u; UPD(0x0C060ACAu, 1);  /* 0C060AC8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r2 = v_; } UPD(0x0C060ACCu, 1);  /* 0C060ACA mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C060ACC tst Rm,Rn */
	if (T) { UPD(0x0C060AF0u, 4); goto L_0C060AF0; }  /* 0C060ACE bt */
L_0C060AD0: BLKS(0x0C060AD0u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060AD2u, 1);  /* 0C060AD0 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060AD4u, 1);  /* 0C060AD2 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060AD4 tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060AEAu, 4); goto L_0C060AEA; } goto L_0C060ADA; }  /* 0C060AD6 bt/s */
L_0C060ADA: BLKS(0x0C060ADAu);
	r9 = 0xC058480u; UPD(0x0C060ADCu, 2);  /* 0C060ADA mov.l @(disp,pc),Rn */
L_0C060ADC: BLKS(0x0C060ADCu);
	r5 = 0x100u; UPD(0x0C060ADEu, 1);  /* 0C060ADC mov.w @(disp,pc),Rn */
	IF(0x0C060ADEu); { u32 t_ = r9; PR = 0x0C060AE2u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060AE2u); }  /* 0C060ADE jsr @Rn */
L_0C060AE2: BLKS(0x0C060AE2u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060AE4u, 1);  /* 0C060AE2 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060AE4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060ADCu, 4); goto L_0C060ADC; } UPD(0x0C060AEAu, 1); goto L_0C060AEA; }  /* 0C060AE6 bf/s */
L_0C060AEA: BLKS(0x0C060AEAu);
	{ u32 v_ = R32(r10); r10 += 4; r3 = v_; } UPD(0x0C060AECu, 1);  /* 0C060AEA mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C060AEC tst Rm,Rn */
	if (!T) { UPD(0x0C060AD0u, 4); goto L_0C060AD0; }  /* 0C060AEE bf */
L_0C060AF0: BLKS(0x0C060AF0u);
	r10 = 0xC16BEACu; UPD(0x0C060AF2u, 1);  /* 0C060AF0 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C060AF4u, 1);  /* 0C060AF2 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C060AF4 tst Rm,Rn */
	if (T) { UPD(0x0C060B18u, 4); goto L_0C060B18; }  /* 0C060AF6 bt */
L_0C060AF8: BLKS(0x0C060AF8u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060AFAu, 1);  /* 0C060AF8 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060AFCu, 1);  /* 0C060AFA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060AFC tst Rm,Rn */
	if (T) { UPD(0x0C060B12u, 4); goto L_0C060B12; }  /* 0C060AFE bt */
L_0C060B00: BLKS(0x0C060B00u);
	r9 = 0xC058480u; UPD(0x0C060B02u, 1);  /* 0C060B00 mov.l @(disp,pc),Rn */
	IF(0x0C060B02u); ;  /* 0C060B02 nop */
	UPD(0x0C060B04u, 1);
L_0C060B04: BLKS(0x0C060B04u);
	r4 = (u32)(s32)(s16)r4;  /* 0C060B04 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060B08u, 2);  /* 0C060B06 mov.w @(disp,pc),Rn */
	IF(0x0C060B08u); { u32 t_ = r9; PR = 0x0C060B0Cu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060B0Cu); }  /* 0C060B08 jsr @Rn */
L_0C060B0C: BLKS(0x0C060B0Cu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B0Eu, 1);  /* 0C060B0C mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B0E tst Rm,Rn */
	if (!T) { UPD(0x0C060B04u, 4); goto L_0C060B04; }  /* 0C060B10 bf */
L_0C060B12: BLKS(0x0C060B12u);
	{ u32 v_ = R32(r10); r10 += 4; r5 = v_; } UPD(0x0C060B14u, 1);  /* 0C060B12 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C060B14 tst Rm,Rn */
	if (!T) { UPD(0x0C060AF8u, 4); goto L_0C060AF8; }  /* 0C060B16 bf */
L_0C060B18: BLKS(0x0C060B18u);
	r10 = 0xC174370u; UPD(0x0C060B1Au, 1);  /* 0C060B18 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C060B1Cu, 1);  /* 0C060B1A mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C060B1C tst Rm,Rn */
	if (T) { UPD(0x0C060B40u, 4); goto L_0C060B40; }  /* 0C060B1E bt */
L_0C060B20: BLKS(0x0C060B20u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060B22u, 1);  /* 0C060B20 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B24u, 1);  /* 0C060B22 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B24 tst Rm,Rn */
	if (T) { UPD(0x0C060B3Au, 4); goto L_0C060B3A; }  /* 0C060B26 bt */
L_0C060B28: BLKS(0x0C060B28u);
	r9 = 0xC058480u; UPD(0x0C060B2Au, 1);  /* 0C060B28 mov.l @(disp,pc),Rn */
	IF(0x0C060B2Au); ;  /* 0C060B2A nop */
	UPD(0x0C060B2Cu, 1);
L_0C060B2C: BLKS(0x0C060B2Cu);
	r4 = (u32)(s32)(s16)r4;  /* 0C060B2C exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060B30u, 2);  /* 0C060B2E mov.w @(disp,pc),Rn */
	IF(0x0C060B30u); { u32 t_ = r9; PR = 0x0C060B34u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060B34u); }  /* 0C060B30 jsr @Rn */
L_0C060B34: BLKS(0x0C060B34u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B36u, 1);  /* 0C060B34 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B36 tst Rm,Rn */
	if (!T) { UPD(0x0C060B2Cu, 4); goto L_0C060B2C; }  /* 0C060B38 bf */
L_0C060B3A: BLKS(0x0C060B3Au);
	{ u32 v_ = R32(r10); r10 += 4; r7 = v_; } UPD(0x0C060B3Cu, 1);  /* 0C060B3A mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C060B3C tst Rm,Rn */
	if (!T) { UPD(0x0C060B20u, 4); goto L_0C060B20; }  /* 0C060B3E bf */
L_0C060B40: BLKS(0x0C060B40u);
	r10 = 0xC177790u; UPD(0x0C060B42u, 1);  /* 0C060B40 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060B44u, 1);  /* 0C060B42 mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C060B44 tst Rm,Rn */
	if (T) { UPD(0x0C060B68u, 4); goto L_0C060B68; }  /* 0C060B46 bt */
L_0C060B48: BLKS(0x0C060B48u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060B4Au, 1);  /* 0C060B48 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B4Cu, 1);  /* 0C060B4A mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B4C tst Rm,Rn */
	if (T) { UPD(0x0C060B62u, 4); goto L_0C060B62; }  /* 0C060B4E bt */
L_0C060B50: BLKS(0x0C060B50u);
	r9 = 0xC058480u; UPD(0x0C060B52u, 1);  /* 0C060B50 mov.l @(disp,pc),Rn */
	IF(0x0C060B52u); ;  /* 0C060B52 nop */
	UPD(0x0C060B54u, 1);
L_0C060B54: BLKS(0x0C060B54u);
	r4 = (u32)(s32)(s16)r4;  /* 0C060B54 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060B58u, 2);  /* 0C060B56 mov.w @(disp,pc),Rn */
	IF(0x0C060B58u); { u32 t_ = r9; PR = 0x0C060B5Cu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060B5Cu); }  /* 0C060B58 jsr @Rn */
L_0C060B5C: BLKS(0x0C060B5Cu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B5Eu, 1);  /* 0C060B5C mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B5E tst Rm,Rn */
	if (!T) { UPD(0x0C060B54u, 4); goto L_0C060B54; }  /* 0C060B60 bf */
L_0C060B62: BLKS(0x0C060B62u);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C060B64u, 1);  /* 0C060B62 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C060B64 tst Rm,Rn */
	if (!T) { UPD(0x0C060B48u, 4); goto L_0C060B48; }  /* 0C060B66 bf */
L_0C060B68: BLKS(0x0C060B68u);
	r10 = 0xC1E6ABCu; UPD(0x0C060B6Au, 1);  /* 0C060B68 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r11 = v_; } UPD(0x0C060B6Cu, 1);  /* 0C060B6A mov.l @Rm+,Rn */
	T = (r11 & r11) == 0;  /* 0C060B6C tst Rm,Rn */
	if (T) { UPD(0x0C060B90u, 4); goto L_0C060B90; }  /* 0C060B6E bt */
L_0C060B70: BLKS(0x0C060B70u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060B72u, 1);  /* 0C060B70 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B74u, 1);  /* 0C060B72 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B74 tst Rm,Rn */
	if (T) { UPD(0x0C060B8Au, 4); goto L_0C060B8A; }  /* 0C060B76 bt */
L_0C060B78: BLKS(0x0C060B78u);
	r9 = 0xC058480u; UPD(0x0C060B7Au, 1);  /* 0C060B78 mov.l @(disp,pc),Rn */
	IF(0x0C060B7Au); ;  /* 0C060B7A nop */
	UPD(0x0C060B7Cu, 1);
L_0C060B7C: BLKS(0x0C060B7Cu);
	r4 = (u32)(s32)(s16)r4;  /* 0C060B7C exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060B80u, 2);  /* 0C060B7E mov.w @(disp,pc),Rn */
	IF(0x0C060B80u); { u32 t_ = r9; PR = 0x0C060B84u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060B84u); }  /* 0C060B80 jsr @Rn */
L_0C060B84: BLKS(0x0C060B84u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B86u, 1);  /* 0C060B84 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B86 tst Rm,Rn */
	if (!T) { UPD(0x0C060B7Cu, 4); goto L_0C060B7C; }  /* 0C060B88 bf */
L_0C060B8A: BLKS(0x0C060B8Au);
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C060B8Cu, 1);  /* 0C060B8A mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C060B8C tst Rm,Rn */
	if (!T) { UPD(0x0C060B70u, 4); goto L_0C060B70; }  /* 0C060B8E bf */
L_0C060B90: BLKS(0x0C060B90u);
	r10 = 0xC1EE9D8u; UPD(0x0C060B92u, 1);  /* 0C060B90 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r2 = v_; } UPD(0x0C060B94u, 1);  /* 0C060B92 mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C060B94 tst Rm,Rn */
	if (T) { UPD(0x0C060BB8u, 4); goto L_0C060BB8; }  /* 0C060B96 bt */
L_0C060B98: BLKS(0x0C060B98u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C060B9Au, 1);  /* 0C060B98 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060B9Cu, 1);  /* 0C060B9A mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060B9C tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060BB2u, 4); goto L_0C060BB2; } goto L_0C060BA2; }  /* 0C060B9E bt/s */
L_0C060BA2: BLKS(0x0C060BA2u);
	r9 = 0xC058480u; UPD(0x0C060BA4u, 2);  /* 0C060BA2 mov.l @(disp,pc),Rn */
L_0C060BA4: BLKS(0x0C060BA4u);
	r5 = 0x100u; UPD(0x0C060BA6u, 1);  /* 0C060BA4 mov.w @(disp,pc),Rn */
	IF(0x0C060BA6u); { u32 t_ = r9; PR = 0x0C060BAAu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060BAAu); }  /* 0C060BA6 jsr @Rn */
L_0C060BAA: BLKS(0x0C060BAAu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060BACu, 1);  /* 0C060BAA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060BAC tst Rm,Rn */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060BA4u, 4); goto L_0C060BA4; } UPD(0x0C060BB2u, 1); goto L_0C060BB2; }  /* 0C060BAE bf/s */
L_0C060BB2: BLKS(0x0C060BB2u);
	{ u32 v_ = R32(r10); r10 += 4; r3 = v_; } UPD(0x0C060BB4u, 1);  /* 0C060BB2 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C060BB4 tst Rm,Rn */
	if (!T) { UPD(0x0C060B98u, 4); goto L_0C060B98; }  /* 0C060BB6 bf */
L_0C060BB8: BLKS(0x0C060BB8u);
	r10 = 0xC163320u; UPD(0x0C060BBAu, 1);  /* 0C060BB8 mov.l @(disp,pc),Rn */
	r4 = 0x400u; UPD(0x0C060BBCu, 1);  /* 0C060BBA mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C060BBEu, 1);  /* 0C060BBC mov.w @Rm,Rn */
	r11 = 0xC1D93E4u; UPD(0x0C060BC0u, 1);  /* 0C060BBE mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C060BC0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060BF0u, 4); goto L_0C060BF0; } UPD(0x0C060BC6u, 1); goto L_0C060BC6; }  /* 0C060BC2 bt/s */
L_0C060BC6: BLKS(0x0C060BC6u);
	IF(0x0C060BC6u); r5 <<= 2;  /* 0C060BC6 shll2 Rn */
	r5 += r5;  /* 0C060BC8 add Rm,Rn */
	r5 += r11;  /* 0C060BCA add Rm,Rn */
	r8 = R32(r5 + 0x4u); UPD(0x0C060BCEu, 4);  /* 0C060BCC mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060BD0u, 1);  /* 0C060BCE mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060BD0 tst Rm,Rn */
	{ u32 c_ = T; r10 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060BE6u, 4); goto L_0C060BE6; } goto L_0C060BD6; }  /* 0C060BD2 bt/s */
L_0C060BD6: BLKS(0x0C060BD6u);
	r9 = 0xC058480u; UPD(0x0C060BD8u, 2);  /* 0C060BD6 mov.l @(disp,pc),Rn */
L_0C060BD8: BLKS(0x0C060BD8u);
	r4 = (u32)(s32)(s16)r4;  /* 0C060BD8 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C060BDCu, 2);  /* 0C060BDA mov.w @(disp,pc),Rn */
	IF(0x0C060BDCu); { u32 t_ = r9; PR = 0x0C060BE0u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C060BE0u); }  /* 0C060BDC jsr @Rn */
L_0C060BE0: BLKS(0x0C060BE0u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C060BE2u, 1);  /* 0C060BE0 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060BE2 tst Rm,Rn */
	if (!T) { UPD(0x0C060BD8u, 4); goto L_0C060BD8; }  /* 0C060BE4 bf */
L_0C060BE6: BLKS(0x0C060BE6u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C060BE8u, 1);  /* 0C060BE6 mov.w @Rm,Rn */
	r7 = 0x400u; UPD(0x0C060BEAu, 1);  /* 0C060BE8 mov.w @(disp,pc),Rn */
	T = r7 == r2;  /* 0C060BEA cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C060BC6u, 4); goto L_0C060BC6; } UPD(0x0C060BF0u, 1); goto L_0C060BF0; }  /* 0C060BEC bf/s */
L_0C060BF0: BLKS(0x0C060BF0u);
	r15 = r14;  /* 0C060BF0 mov Rm,Rn */
	IF(0x0C060BF2u); PR = R32(r15); r15 += 4; UPD(0x0C060BF4u, 2);  /* 0C060BF2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060BF6u, 1);  /* 0C060BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060BF8u, 1);  /* 0C060BF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060BFAu, 1);  /* 0C060BF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060BFCu, 1);  /* 0C060BFA mov.l @Rm+,Rn */
	IF(0x0C060BFCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060BFC rts */
}

/* FUN_0c060c30 */
void f_0C060C30(sh3_t *c)
{
	LOCALS;
L_0C060C30: BLKS(0x0C060C30u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060C32u, 1);  /* 0C060C30 mov.l Rm,@-Rn */
	r0 = 0xC27DC49u; UPD(0x0C060C34u, 1);  /* 0C060C32 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C060C34 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C060C38u, 2);  /* 0C060C36 mov.b @Rm,Rn */
	r7 = 0xC21F589u; UPD(0x0C060C3Au, 1);  /* 0C060C38 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C060C3Cu, 1);  /* 0C060C3A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060C3C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060C86u, 4); goto L_0C060C86; } goto L_0C060C42; }  /* 0C060C3E bf/s */
L_0C060C42: BLKS(0x0C060C42u);
	r6 = 0xC26C878u; UPD(0x0C060C44u, 2);  /* 0C060C42 mov.l @(disp,pc),Rn */
	r5 = 0xC393028u; UPD(0x0C060C46u, 1);  /* 0C060C44 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C060C48u, 1);  /* 0C060C46 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C060C4Au, 1);  /* 0C060C48 mov.b @Rm,Rn */
	r4 = r0 & 0xFF;  /* 0C060C4A extu.b Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C060C4C extu.b Rm,Rn */
	T = r4 >= r0;  /* 0C060C4E cmp/hs Rm,Rn */
	r4 = 0xC21F5EAu; UPD(0x0C060C52u, 4);  /* 0C060C50 mov.l @(disp,pc),Rn */
	IF(0x0C060C52u); r0 = T;  /* 0C060C52 movt Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C060C56u, 2);  /* 0C060C54 mov.b @Rm,Rn */
	IF(0x0C060C56u); T = r2 >> 31; r2 = (r2 << 1) | T;  /* 0C060C56 rotl Rn */
	IF(0x0C060C58u); r4 = T;  /* 0C060C58 movt Rn */
	r4 &= r0;  /* 0C060C5A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C060C5C tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060C82u, 7); goto L_0C060C82; } goto L_0C060C62; }  /* 0C060C5E bf/s */
L_0C060C62: BLKS(0x0C060C62u);
	r0 = r6;  /* 0C060C62 mov Rm,Rn */
	IF(0x0C060C64u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060C66u, 3);  /* 0C060C64 mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C060C66 mov Rm,Rn */
	IF(0x0C060C68u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060C6Au, 2);  /* 0C060C68 mov.b @(r0,Rm),Rn */
	r6 = 0xC2177F8u; UPD(0x0C060C6Cu, 1);  /* 0C060C6A mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C060C6C extu.b Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C060C6E extu.b Rm,Rn */
	T = r0 >= r4;  /* 0C060C70 cmp/hs Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C060C74u, 4);  /* 0C060C72 mov.b @Rm,Rn */
	r5 = 0xFFFFFFF9u;  /* 0C060C74 mov #imm,Rn */
	IF(0x0C060C76u); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C060C76 shad Rm,Rn */
	IF(0x0C060C78u); r3 = T;  /* 0C060C78 movt Rn */
	r0 &= 0x1u;  /* 0C060C7A and #imm,r0 */
	r0 &= r3;  /* 0C060C7C and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060C7E tst Rm,Rn */
	if (T) { UPD(0x0C060C90u, 9); goto L_0C060C90; }  /* 0C060C80 bt */
L_0C060C82: BLKS(0x0C060C82u);
	W8(r7, r2); UPD(0x0C060C84u, 1);  /* 0C060C82 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C060C84 mov #imm,Rn */
	UPD(0x0C060C86u, 1);
L_0C060C86: BLKS(0x0C060C86u);
	r15 = r14;  /* 0C060C86 mov Rm,Rn */
	IF(0x0C060C88u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C060C88 rts */
L_0C060C90: BLKS(0x0C060C90u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C060C86u, 3); goto L_0C060C86; }  /* 0C060C90 bra */
}

/* FUN_0c060cb0 */
void f_0C060CB0(sh3_t *c)
{
	LOCALS;
L_0C060CB0: BLKS(0x0C060CB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060CB2u, 1);  /* 0C060CB0 mov.l Rm,@-Rn */
	r7 = 0xC26C878u; UPD(0x0C060CB4u, 1);  /* 0C060CB2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C060CB4 mov Rm,Rn */
	r6 = 0xC393028u; UPD(0x0C060CB8u, 2);  /* 0C060CB6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C060CBAu, 1);  /* 0C060CB8 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C060CBCu, 1);  /* 0C060CBA mov.b @Rm,Rn */
	r4 = r0 & 0xFF;  /* 0C060CBC extu.b Rm,Rn */
	r2 = 0xC27DC49u; UPD(0x0C060CC0u, 2);  /* 0C060CBE mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C060CC0 extu.b Rm,Rn */
	T = r4 >= r0;  /* 0C060CC2 cmp/hs Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C060CC6u, 3);  /* 0C060CC4 mov.b @Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C060CDAu, 3); goto L_0C060CDA; } goto L_0C060CCA; }  /* 0C060CC6 bt/s */
L_0C060CCA: BLKS(0x0C060CCAu);
	r0 = r7;  /* 0C060CCA mov Rm,Rn */
	IF(0x0C060CCCu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060CCEu, 3);  /* 0C060CCC mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C060CCE mov Rm,Rn */
	IF(0x0C060CD0u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C060CD2u, 2);  /* 0C060CD0 mov.b @(r0,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C060CD2 extu.b Rm,Rn */
	r3 = r7 & 0xFF;  /* 0C060CD4 extu.b Rm,Rn */
	T = r6 >= r3;  /* 0C060CD6 cmp/hs Rm,Rn */
	IF(0x0C060CD8u); r0 = T;  /* 0C060CD8 movt Rn */
	UPD(0x0C060CDAu, 4);
L_0C060CDA: BLKS(0x0C060CDAu);
	r15 = r14;  /* 0C060CDA mov Rm,Rn */
	IF(0x0C060CDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C060CDC rts */
}

/* FUN_0c060cf0 */
void f_0C060CF0(sh3_t *c)
{
	LOCALS;
L_0C060CF0: BLKS(0x0C060CF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060CF2u, 1);  /* 0C060CF0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C060CF2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060CF6u, 2);  /* 0C060CF4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060CF8u, 1);  /* 0C060CF6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C060CF8 exts.b Rm,Rn */
	IF(0x0C060CFAu); r15 -= 4; W32(r15, PR); UPD(0x0C060CFCu, 2);  /* 0C060CFA sts.l pr,@-Rn */
	r0 = 0xC392DC2u; UPD(0x0C060CFEu, 1);  /* 0C060CFC mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C060D00u, 1);  /* 0C060CFE mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C060D00 extu.b Rm,Rn */
	r2 = 0x2u;  /* 0C060D02 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C060D04 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060D40u, 6); goto L_0C060D40; } goto L_0C060D0A; }  /* 0C060D06 bf/s */
L_0C060D0A: BLKS(0x0C060D0Au);
	T = r0 == 0x3u;  /* 0C060D0A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C060D20u, 5); goto L_0C060D20; }  /* 0C060D0C bt */
L_0C060D0E: BLKS(0x0C060D0Eu);
	r15 = r14;  /* 0C060D0E mov Rm,Rn */
	IF(0x0C060D10u); PR = R32(r15); r15 += 4; UPD(0x0C060D12u, 2);  /* 0C060D10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060D14u, 1);  /* 0C060D12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060D16u, 1);  /* 0C060D14 mov.l @Rm+,Rn */
	IF(0x0C060D16u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060D16 rts */
L_0C060D20: BLKS(0x0C060D20u);
	r8 = 0xC05FE80u; UPD(0x0C060D22u, 1);  /* 0C060D20 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C060D22 mov #imm,Rn */
	r5 = r9;  /* 0C060D24 mov Rm,Rn */
	IF(0x0C060D26u); { u32 t_ = r8; PR = 0x0C060D2Au; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C05FE80, 0x0C05FE80u, 0x0C060D2Au); }  /* 0C060D26 jsr @Rn */
L_0C060D2A: BLKS(0x0C060D2Au);
	r4 = 0x1u;  /* 0C060D2A mov #imm,Rn */
	r5 = r9;  /* 0C060D2C mov Rm,Rn */
	r6 = 0x13u;  /* 0C060D2E mov #imm,Rn */
	r1 = r8;  /* 0C060D30 mov Rm,Rn */
	UPD(0x0C060D32u, 4);
L_0C060D32: BLKS(0x0C060D32u);
	r15 = r14;  /* 0C060D32 mov Rm,Rn */
	IF(0x0C060D34u); PR = R32(r15); r15 += 4; UPD(0x0C060D36u, 2);  /* 0C060D34 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060D38u, 1);  /* 0C060D36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060D3Au, 1);  /* 0C060D38 mov.l @Rm+,Rn */
	IF(0x0C060D3Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05FE80u: TAIL(f_0C05FE80); default: JUMPD(tv_); } }  /* 0C060D3A jmp @Rn */
L_0C060D40: BLKS(0x0C060D40u);
	r5 += 0x9u;  /* 0C060D40 add #imm,Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C060D42 exts.b Rm,Rn */
	r1 = 0xC05FE80u; UPD(0x0C060D46u, 3);  /* 0C060D44 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C060D46 mov #imm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C060D32u, 4); goto L_0C060D32; }  /* 0C060D48 bra */
}

/* rank_down */
void f_0C060D60(sh3_t *c)
{
	LOCALS;
L_0C060D60: BLKS(0x0C060D60u);
	r3 = 0xC27DFF8u; UPD(0x0C060D62u, 1);  /* 0C060D60 mov.l @(disp,pc),Rn */
	r2 = 0xC21F5E4u; UPD(0x0C060D64u, 1);  /* 0C060D62 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C060D66u, 1);  /* 0C060D64 mov.l @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060D68u, 1);  /* 0C060D66 mov.l Rm,@-Rn */
	r0 += r4;  /* 0C060D68 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C060D6Cu, 2);  /* 0C060D6A mov.l @Rm,Rn */
	r14 = r15;  /* 0C060D6C mov Rm,Rn */
	T = r0 > r1;  /* 0C060D6E cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r3, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C060D76u, 5); goto L_0C060D76; } UPD(0x0C060D74u, 1); goto L_0C060D74; }  /* 0C060D70 bf/s */
L_0C060D74: BLKS(0x0C060D74u);
	W32(r3, r1); UPD(0x0C060D76u, 1);  /* 0C060D74 mov.l Rm,@Rn */
L_0C060D76: BLKS(0x0C060D76u);
	r15 = r14;  /* 0C060D76 mov Rm,Rn */
	IF(0x0C060D78u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C060D78 rts */
}

/* FUN_0c060d90 */
void f_0C060D90(sh3_t *c)
{
	LOCALS;
L_0C060D90: BLKS(0x0C060D90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C060D92u, 1);  /* 0C060D90 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C060D92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C060D96u, 2);  /* 0C060D94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C060D98u, 1);  /* 0C060D96 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C060D98 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C060D9Cu, 2);  /* 0C060D9A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C060D9C mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060DA0u, 2);  /* 0C060D9E mov.l Rm,@-Rn */
	r0 = 0xC286740u; UPD(0x0C060DA2u, 1);  /* 0C060DA0 mov.l @(disp,pc),Rn */
	IF(0x0C060DA2u); r15 -= 4; W32(r15, PR); UPD(0x0C060DA4u, 1);  /* 0C060DA2 sts.l pr,@-Rn */
	W8(r0, r1); UPD(0x0C060DA6u, 1);  /* 0C060DA4 mov.b Rm,@Rn */
	r14 = r15;  /* 0C060DA6 mov Rm,Rn */
	UPD(0x0C060DA8u, 1);
L_0C060DA8: BLKS(0x0C060DA8u);
	r5 = 0xC27DFFCu; UPD(0x0C060DAAu, 1);  /* 0C060DA8 mov.l @(disp,pc),Rn */
	r5 += r10;  /* 0C060DAA add Rm,Rn */
	r0 = R32(r5); UPD(0x0C060DAEu, 2);  /* 0C060DAC mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C060DAE tst Rm,Rn */
	{ u32 c_ = T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C060DD6u, 4); goto L_0C060DD6; } goto L_0C060DB4; }  /* 0C060DB0 bt/s */
L_0C060DB4: BLKS(0x0C060DB4u);
	r7 = 0xC286740u; UPD(0x0C060DB6u, 2);  /* 0C060DB4 mov.l @(disp,pc),Rn */
	r5 += 0x8u;  /* 0C060DB6 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C060DBAu, 2);  /* 0C060DB8 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C060DBA add #imm,Rn */
	W8(r7, r8); UPD(0x0C060DBEu, 2);  /* 0C060DBC mov.b Rm,@Rn */
	r6 = 0xC283CA4u; UPD(0x0C060DC0u, 1);  /* 0C060DBE mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C060DC2u, 1);  /* 0C060DC0 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C060DC4u, 1);  /* 0C060DC2 mov.w @Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C060DC4 extu.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C060DC6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 += 0xFFFFFFF8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060DD0u, 5); goto L_0C060DD0; } goto L_0C060DCC; }  /* 0C060DC8 bt/s */
L_0C060DCC: BLKS(0x0C060DCCu);
	{ r4 = r5; /* slot mov Rm,Rn */ UPD(0x0C060F40u, 4); goto L_0C060F40; }  /* 0C060DCC bra */
L_0C060DD0: BLKS(0x0C060DD0u);
	r11 = 0x0u;  /* 0C060DD0 mov #imm,Rn */
	W32(r5, r11); UPD(0x0C060DD4u, 2);  /* 0C060DD2 mov.l Rm,@Rn */
	r8 = r9;  /* 0C060DD4 mov Rm,Rn */
	UPD(0x0C060DD6u, 1);
L_0C060DD6: BLKS(0x0C060DD6u);
	r8 += 0x1u;  /* 0C060DD6 add #imm,Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C060DD8 exts.w Rm,Rn */
	r3 = 0xFu;  /* 0C060DDA mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C060DDC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060DA8u, 7); goto L_0C060DA8; } goto L_0C060DE2; }  /* 0C060DDE bf/s */
L_0C060DE2: BLKS(0x0C060DE2u);
	r9 = 0xC21CC9Cu; UPD(0x0C060DE4u, 2);  /* 0C060DE2 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C060DE4 mov #imm,Rn */
	W8(r9, r10); UPD(0x0C060DE8u, 2);  /* 0C060DE6 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C060DE8 mov #imm,Rn */
	r10 = 0x0u;  /* 0C060DEA mov #imm,Rn */
	UPD(0x0C060DECu, 2);
L_0C060DEC: BLKS(0x0C060DECu);
	r8 = 0xC26CAE0u; UPD(0x0C060DEEu, 1);  /* 0C060DEC mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C060DEE add Rm,Rn */
	r5 = R32(r8); UPD(0x0C060DF2u, 2);  /* 0C060DF0 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C060DF2 tst Rm,Rn */
	if (T) { UPD(0x0C060E14u, 4); goto L_0C060E14; }  /* 0C060DF4 bt */
L_0C060DF6: BLKS(0x0C060DF6u);
	r3 = R32(r8 + 0x34u); UPD(0x0C060DF8u, 1);  /* 0C060DF6 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C060DF8 tst Rm,Rn */
	if (T) { UPD(0x0C060E14u, 4); goto L_0C060E14; }  /* 0C060DFA bt */
L_0C060DFC: BLKS(0x0C060DFCu);
	r11 = 0xC21CC9Cu; UPD(0x0C060DFEu, 1);  /* 0C060DFC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C060E00u, 1);  /* 0C060DFE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C060E00 add #imm,Rn */
	W8(r11, r0); UPD(0x0C060E04u, 2);  /* 0C060E02 mov.b Rm,@Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C060E06u, 1);  /* 0C060E04 mov.l @(disp,Rm),Rn */
	r11 = 0xC392D64u; UPD(0x0C060E08u, 1);  /* 0C060E06 mov.l @(disp,pc),Rn */
	r2 = (r7 >> 16) | (r7 << 16);  /* 0C060E08 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C060E0Cu, 2);  /* 0C060E0A mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C060E0C exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C060E0E cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r11, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C060F00u, 5); goto L_0C060F00; } UPD(0x0C060E14u, 1); goto L_0C060E14; }  /* 0C060E10 bt/s */
L_0C060E14: BLKS(0x0C060E14u);
	r9 += 0x1u;  /* 0C060E14 add #imm,Rn */
	UPD(0x0C060E16u, 1);
L_0C060E16: BLKS(0x0C060E16u);
	r8 = 0x7u;  /* 0C060E16 mov #imm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C060E18 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060DECu, 5); goto L_0C060DEC; } goto L_0C060E1E; }  /* 0C060E1A bf/s */
L_0C060E1E: BLKS(0x0C060E1Eu);
	r2 = 0xC26C8BAu; UPD(0x0C060E20u, 2);  /* 0C060E1E mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C060E22u, 1);  /* 0C060E20 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C060E22 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060E2Au, 4); goto L_0C060E2A; } goto L_0C060E28; }  /* 0C060E24 bt/s */
L_0C060E28: BLKS(0x0C060E28u);
	W8(r2, r1); UPD(0x0C060E2Au, 2);  /* 0C060E28 mov.b Rm,@Rn */
L_0C060E2A: BLKS(0x0C060E2Au);
	r1 = 0xC21F5DCu; UPD(0x0C060E2Cu, 1);  /* 0C060E2A mov.l @(disp,pc),Rn */
	r7 = R32(r1); UPD(0x0C060E2Eu, 1);  /* 0C060E2C mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C060E2E tst Rm,Rn */
	if (T) { UPD(0x0C060E50u, 4); goto L_0C060E50; }  /* 0C060E30 bt */
L_0C060E32: BLKS(0x0C060E32u);
	r7 += 0xFFFFFFFFu;  /* 0C060E32 add #imm,Rn */
	W32(r1, r7); UPD(0x0C060E36u, 2);  /* 0C060E34 mov.l Rm,@Rn */
L_0C060E36: BLKS(0x0C060E36u);
	r15 = r14;  /* 0C060E36 mov Rm,Rn */
	IF(0x0C060E38u); PR = R32(r15); r15 += 4; UPD(0x0C060E3Au, 2);  /* 0C060E38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C060E3Cu, 1);  /* 0C060E3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C060E3Eu, 1);  /* 0C060E3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C060E40u, 1);  /* 0C060E3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C060E42u, 1);  /* 0C060E40 mov.l @Rm+,Rn */
	IF(0x0C060E42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C060E42 rts */
L_0C060E50: BLKS(0x0C060E50u);
	r9 = 0xC2859A0u; UPD(0x0C060E52u, 1);  /* 0C060E50 mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C060E54u, 1);  /* 0C060E52 mov.l @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C060E56u, 1);  /* 0C060E54 mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C060E56 exts.w Rm,Rn */
	IF(0x0C060E58u); T = (s32)r2 >= 0;  /* 0C060E58 cmp/pz Rn */
	if (!T) { UPD(0x0C060EC0u, 5); goto L_0C060EC0; }  /* 0C060E5A bf */
L_0C060E5C: BLKS(0x0C060E5Cu);
	r11 = 0xC283CA4u; UPD(0x0C060E5Eu, 1);  /* 0C060E5C mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C060E60u, 1);  /* 0C060E5E mov.w @Rm,Rn */
	T = (s32)r10 >= (s32)r2;  /* 0C060E60 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C060E36u, 4); goto L_0C060E36; }  /* 0C060E62 bf */
L_0C060E64: BLKS(0x0C060E64u);
	r9 = 0xC2859A0u; UPD(0x0C060E66u, 1);  /* 0C060E64 mov.l @(disp,pc),Rn */
	r8 = R32(r9); UPD(0x0C060E68u, 1);  /* 0C060E66 mov.l @Rm,Rn */
	r3 = r8;  /* 0C060E68 mov Rm,Rn */
	r3 += 0x2u;  /* 0C060E6A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C060E6Eu, 3);  /* 0C060E6C mov.w @Rm+,Rn */
	r6 = 0xC22C874u; UPD(0x0C060E70u, 1);  /* 0C060E6E mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C060E70 extu.w Rm,Rn */
	r4 = 0xFEFFu; UPD(0x0C060E74u, 2);  /* 0C060E72 mov.l @(disp,pc),Rn */
	W16(r6, r0); UPD(0x0C060E76u, 1);  /* 0C060E74 mov.w Rm,@Rn */
	T = r7 > r4;  /* 0C060E76 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r9, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C060EA0u, 4); goto L_0C060EA0; } UPD(0x0C060E7Cu, 1); goto L_0C060E7C; }  /* 0C060E78 bf/s */
L_0C060E7C: BLKS(0x0C060E7Cu);
	r7 = 0xC163354u; UPD(0x0C060E7Eu, 1);  /* 0C060E7C mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C060E7E extu.b Rm,Rn */
	IF(0x0C060E80u); r0 <<= 2;  /* 0C060E80 shll2 Rn */
	IF(0x0C060E82u); r10 = R32(r0 + r7); UPD(0x0C060E84u, 3);  /* 0C060E82 mov.l @(r0,Rm),Rn */
	IF(0x0C060E84u); { u32 t_ = r10; PR = 0x0C060E88u; IF(0x0C060E86u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C060E88u); }  /* 0C060E84 jsr @Rn */
L_0C060E88: BLKS(0x0C060E88u);
	T = (r0 & r0) == 0;  /* 0C060E88 tst Rm,Rn */
	UPD(0x0C060E8Au, 1);
L_0C060E8A: BLKS(0x0C060E8Au);
	if (!T) { UPD(0x0C060E36u, 3); goto L_0C060E36; }  /* 0C060E8A bf */
L_0C060E8C: BLKS(0x0C060E8Cu);
	W32(r9, r8); UPD(0x0C060E8Eu, 1);  /* 0C060E8C mov.l Rm,@Rn */
	{ IF(0x0C060E90u); ; /* slot nop */ UPD(0x0C060E36u, 3); goto L_0C060E36; }  /* 0C060E8E bra */
L_0C060EA0: BLKS(0x0C060EA0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C060EA2u, 1);  /* 0C060EA0 mov.w @Rm+,Rn */
	IF(0x0C060EA2u); r7 <<= 2;  /* 0C060EA2 shll2 Rn */
	r0 = 0xC21F5E2u; UPD(0x0C060EA6u, 2);  /* 0C060EA4 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C060EA8u, 1);  /* 0C060EA6 mov.w Rm,@Rn */
	W32(r9, r3); UPD(0x0C060EAAu, 1);  /* 0C060EA8 mov.l Rm,@Rn */
	r0 = r7;  /* 0C060EAA mov Rm,Rn */
	r11 = 0xC1633F4u; UPD(0x0C060EAEu, 2);  /* 0C060EAC mov.l @(disp,pc),Rn */
	IF(0x0C060EAEu); r3 = R32(r0 + r11); UPD(0x0C060EB0u, 1);  /* 0C060EAE mov.l @(r0,Rm),Rn */
	IF(0x0C060EB0u); { u32 t_ = r3; PR = 0x0C060EB4u; IF(0x0C060EB2u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C060EB4u); }  /* 0C060EB0 jsr @Rn */
L_0C060EB4: BLKS(0x0C060EB4u);
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C060E8Au, 3); goto L_0C060E8A; }  /* 0C060EB4 bra */
L_0C060EC0: BLKS(0x0C060EC0u);
	r4 = 0xC21F5E8u; UPD(0x0C060EC2u, 1);  /* 0C060EC0 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C060EC4u, 1);  /* 0C060EC2 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C060EC4 tst Rm,Rn */
	if (!T) { UPD(0x0C060EF0u, 4); goto L_0C060EF0; }  /* 0C060EC6 bf */
L_0C060EC8: BLKS(0x0C060EC8u);
	r3 = 0xC283CA4u; UPD(0x0C060ECAu, 1);  /* 0C060EC8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C060ECCu, 1);  /* 0C060ECA mov.w @Rm,Rn */
	W16(r4, r1); UPD(0x0C060ECEu, 1);  /* 0C060ECC mov.w Rm,@Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C060ED0u, 1);  /* 0C060ECE mov.w @Rm,Rn */
L_0C060ED0: BLKS(0x0C060ED0u);
	r5 = 0x7FFFu; UPD(0x0C060ED2u, 1);  /* 0C060ED0 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C060ED2 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C060ED6u, 2);  /* 0C060ED4 mov.w @Rm,Rn */
	r5 &= r6;  /* 0C060ED6 and Rm,Rn */
	r0 += r5;  /* 0C060ED8 add Rm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C060EDA cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C060E36u, 6); goto L_0C060E36; }  /* 0C060EDC bf */
L_0C060EDE: BLKS(0x0C060EDEu);
	W16(r4, r7); UPD(0x0C060EE0u, 1);  /* 0C060EDE mov.w Rm,@Rn */
	{ IF(0x0C060EE2u); ; /* slot nop */ UPD(0x0C060E64u, 3); goto L_0C060E64; }  /* 0C060EE0 bra */
L_0C060EF0: BLKS(0x0C060EF0u);
	r3 = 0xC283CA4u; UPD(0x0C060EF2u, 1);  /* 0C060EF0 mov.l @(disp,pc),Rn */
	{ IF(0x0C060EF4u); ; /* slot nop */ UPD(0x0C060ED0u, 3); goto L_0C060ED0; }  /* 0C060EF2 bra */
L_0C060F00: BLKS(0x0C060F00u);
	r4 = r3;  /* 0C060F00 mov Rm,Rn */
	r4 += 0x2u;  /* 0C060F02 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C060F06u, 3);  /* 0C060F04 mov.w @Rm+,Rn */
	r3 = 0xC22C874u; UPD(0x0C060F08u, 1);  /* 0C060F06 mov.l @(disp,pc),Rn */
	r0 = 0xC286509u; UPD(0x0C060F0Au, 1);  /* 0C060F08 mov.l @(disp,pc),Rn */
	W16(r3, r5); UPD(0x0C060F0Cu, 1);  /* 0C060F0A mov.w Rm,@Rn */
	W8(r0, r9); UPD(0x0C060F0Eu, 1);  /* 0C060F0C mov.b Rm,@Rn */
	r7 = 0xC21F5E2u; UPD(0x0C060F10u, 1);  /* 0C060F0E mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFFFF;  /* 0C060F10 extu.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C060F14u, 2);  /* 0C060F12 mov.w @Rm+,Rn */
	IF(0x0C060F14u); r0 <<= 2;  /* 0C060F14 shll2 Rn */
	r3 = 0xC1633F4u; UPD(0x0C060F18u, 2);  /* 0C060F16 mov.l @(disp,pc),Rn */
	W16(r7, r2); UPD(0x0C060F1Au, 1);  /* 0C060F18 mov.w Rm,@Rn */
	IF(0x0C060F1Au); r0 = R32(r0 + r3); UPD(0x0C060F1Cu, 1);  /* 0C060F1A mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r6 = v_; } UPD(0x0C060F1Eu, 1);  /* 0C060F1C mov.w @Rm+,Rn */
	r1 = 0xC392D5Eu; UPD(0x0C060F20u, 1);  /* 0C060F1E mov.l @(disp,pc),Rn */
	W32(r11, r4); UPD(0x0C060F22u, 1);  /* 0C060F20 mov.l Rm,@Rn */
	IF(0x0C060F22u); { u32 t_ = r0; PR = 0x0C060F26u; W16(r1, r6); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C060F26u); }  /* 0C060F22 jsr @Rn */
L_0C060F26: BLKS(0x0C060F26u);
	T = (r0 & r0) == 0;  /* 0C060F26 tst Rm,Rn */
	if (T) { UPD(0x0C060F2Eu, 4); goto L_0C060F2E; }  /* 0C060F28 bt */
L_0C060F2A: BLKS(0x0C060F2Au);
	r5 = R32(r11); UPD(0x0C060F2Cu, 1);  /* 0C060F2A mov.l @Rm,Rn */
	W32(r8 + 0x34u, r5); UPD(0x0C060F2Eu, 1);  /* 0C060F2C mov.l Rm,@(disp,Rn) */
L_0C060F2E: BLKS(0x0C060F2Eu);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C060E16u, 3); goto L_0C060E16; }  /* 0C060F2E bra */
L_0C060F40: BLKS(0x0C060F40u);
	r5 += 0xAu;  /* 0C060F40 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C060F44u, 2);  /* 0C060F42 mov.w @Rm,Rn */
	r4 += 0xCu;  /* 0C060F44 add #imm,Rn */
	r7 = 0xAAAAAAABu; UPD(0x0C060F48u, 2);  /* 0C060F46 mov.l @(disp,pc),Rn */
	r8 = r0 & 0xFFFF;  /* 0C060F48 extu.w Rm,Rn */
	{ u64 r_ = (u64)r8 * (u64)r7; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C060F4A dmulu.l Rm,Rn */
	r11 = 0x55555556u; UPD(0x0C060F4Eu, 4);  /* 0C060F4C mov.l @(disp,pc),Rn */
	IF(0x0C060F4Eu); r1 = MACH;  /* 0C060F4E sts mach,Rn */
	r8 += r8;  /* 0C060F50 add Rm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r11; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C060F52 dmuls.l Rm,Rn */
	IF(0x0C060F54u); T = r1 & 1; r1 >>= 1;  /* 0C060F54 shlr Rn */
	r0 = r1 & 0xFFFF;  /* 0C060F56 extu.w Rm,Rn */
	IF(0x0C060F58u); T = r8 >> 31; r8 <<= 1;  /* 0C060F58 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C060F5A subc Rm,Rn */
	IF(0x0C060F5Cu); r11 = MACH;  /* 0C060F5C sts mach,Rn */
	r1 = 0xC27DFF8u; UPD(0x0C060F60u, 10);  /* 0C060F5E mov.l @(disp,pc),Rn */
	r11 -= r8;  /* 0C060F60 sub Rm,Rn */
	r8 = R32(r1); UPD(0x0C060F64u, 2);  /* 0C060F62 mov.l @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C060F66u, 1);  /* 0C060F64 mov.w @Rm,Rn */
	IF(0x0C060F66u); r8 >>= 16;  /* 0C060F66 shlr16 Rn */
	r3 += 0x1u;  /* 0C060F68 add #imm,Rn */
	IF(0x0C060F6Au); MACL = r11 * r8;  /* 0C060F6A mul.l Rm,Rn */
	W16(r4, r3); UPD(0x0C060F6Eu, 5);  /* 0C060F6C mov.w Rm,@Rn */
	r2 = r3 & 0xFFFF;  /* 0C060F6E extu.w Rm,Rn */
	IF(0x0C060F70u); r3 = MACL;  /* 0C060F70 sts macl,Rn */
	IF(0x0C060F72u); r3 >>= 8;  /* 0C060F72 shlr8 Rn */
	r0 += r3;  /* 0C060F74 add Rm,Rn */
	T = r2 > r0;  /* 0C060F76 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFF6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C060F98u, 8); goto L_0C060F98; } goto L_0C060F7C; }  /* 0C060F78 bf/s */
L_0C060F7C: BLKS(0x0C060F7Cu);
	r0 = 0x0u;  /* 0C060F7C mov #imm,Rn */
	W16(r4, r0); UPD(0x0C060F80u, 3);  /* 0C060F7E mov.w Rm,@Rn */
	r5 += 0x4u;  /* 0C060F80 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r4 = v_; } UPD(0x0C060F84u, 2);  /* 0C060F82 mov.w @Rm+,Rn */
	r7 = 0xC22C874u; UPD(0x0C060F86u, 1);  /* 0C060F84 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C060F86 extu.w Rm,Rn */
	W16(r7, r4); UPD(0x0C060F8Au, 2);  /* 0C060F88 mov.w Rm,@Rn */
	IF(0x0C060F8Au); r0 <<= 2;  /* 0C060F8A shll2 Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C060F8Eu, 2);  /* 0C060F8C mov.w @Rm,Rn */
	r5 = 0xC1633F4u; UPD(0x0C060F90u, 1);  /* 0C060F8E mov.l @(disp,pc),Rn */
	IF(0x0C060F90u); r8 = R32(r0 + r5); UPD(0x0C060F92u, 1);  /* 0C060F90 mov.l @(r0,Rm),Rn */
	r6 = 0xC21F5E2u; UPD(0x0C060F94u, 1);  /* 0C060F92 mov.l @(disp,pc),Rn */
	IF(0x0C060F94u); { u32 t_ = r8; PR = 0x0C060F98u; W16(r6, r11); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C060F98u); }  /* 0C060F94 jsr @Rn */
L_0C060F98: BLKS(0x0C060F98u);
	{ r8 = r9; /* slot mov Rm,Rn */ UPD(0x0C060DD6u, 3); goto L_0C060DD6; }  /* 0C060F98 bra */
}


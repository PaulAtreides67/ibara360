#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0627d0 */
void f_0C0627D0(sh3_t *c)
{
	LOCALS;
L_0C0627D0: BLKS(0x0C0627D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0627D2u, 1);  /* 0C0627D0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0627D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0627D6u, 2);  /* 0C0627D4 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0627D6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0627DAu, 2);  /* 0C0627D8 mov.l Rm,@-Rn */
	r6 = 0xAu;  /* 0C0627DA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0627DEu, 2);  /* 0C0627DC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E0u, 1);  /* 0C0627DE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E2u, 1);  /* 0C0627E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E4u, 1);  /* 0C0627E2 mov.l Rm,@-Rn */
	r5 = 0xC283794u; UPD(0x0C0627E6u, 1);  /* 0C0627E4 mov.l @(disp,pc),Rn */
	IF(0x0C0627E6u); r15 -= 4; W32(r15, PR); UPD(0x0C0627E8u, 1);  /* 0C0627E6 sts.l pr,@-Rn */
	r0 = R32(r5); UPD(0x0C0627EAu, 1);  /* 0C0627E8 mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0627EA add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0627EC tst Rm,Rn */
	r0 = 0x280u; UPD(0x0C0627F0u, 3);  /* 0C0627EE mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0627F0 negc Rm,Rn */
	IF(0x0C0627F2u); r1 = R32(r0 + r5); UPD(0x0C0627F4u, 2);  /* 0C0627F2 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0627F4 mov Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0627F6 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0627F8 negc Rm,Rn */
	T = (r4 & r0) == 0;  /* 0C0627FA tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062802u, 7); goto L_0C062802; } UPD(0x0C062800u, 1); goto L_0C062800; }  /* 0C0627FC bf/s */
L_0C062800: BLKS(0x0C062800u);
	r6 = 0x10u;  /* 0C062800 mov #imm,Rn */
	UPD(0x0C062802u, 1);
L_0C062802: BLKS(0x0C062802u);
	r4 = R32(r14); UPD(0x0C062804u, 1);  /* 0C062802 mov.l @Rm,Rn */
	r8 = 0x280u; UPD(0x0C062806u, 1);  /* 0C062804 mov.w @(disp,pc),Rn */
	IF(0x0C062806u); MACL = r4 * r8;  /* 0C062806 mul.l Rm,Rn */
	r13 = 0xC283794u; UPD(0x0C06280Au, 3);  /* 0C062808 mov.l @(disp,pc),Rn */
	IF(0x0C06280Au); r8 = MACL;  /* 0C06280A sts macl,Rn */
	r8 += r13;  /* 0C06280C add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C062810u, 3);  /* 0C06280E mov.l @(disp,Rm),Rn */
	r12 = 0xC16D04Cu; UPD(0x0C062812u, 1);  /* 0C062810 mov.l @(disp,pc),Rn */
	IF(0x0C062812u); r0 <<= 2;  /* 0C062812 shll2 Rn */
	IF(0x0C062814u); r10 = R32(r0 + r12); UPD(0x0C062816u, 2);  /* 0C062814 mov.l @(r0,Rm),Rn */
	r0 = 0x254u; UPD(0x0C062818u, 1);  /* 0C062816 mov.w @(disp,pc),Rn */
	IF(0x0C062818u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06281Au, 1);  /* 0C062818 mov.b @(r0,Rm),Rn */
	r0 = r11 & 0xFF;  /* 0C06281A extu.b Rm,Rn */
	IF(0x0C06281Cu); r0 <<= 2;  /* 0C06281C shll2 Rn */
	IF(0x0C06281Eu); r11 = R32(r0 + r10); UPD(0x0C062820u, 3);  /* 0C06281E mov.l @(r0,Rm),Rn */
	r9 = 0xC7C0870u; UPD(0x0C062822u, 1);  /* 0C062820 mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C062822 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r7 = v_; } UPD(0x0C062826u, 2);  /* 0C062824 mov.w @Rm+,Rn */
	r4 = R32(r14); UPD(0x0C062828u, 1);  /* 0C062826 mov.l @Rm,Rn */
	r5 = r7;  /* 0C062828 mov Rm,Rn */
	IF(0x0C06282Au); { u32 t_ = r9; PR = 0x0C06282Eu; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C7C0870, 0x0C7C0870u, 0x0C06282Eu); }  /* 0C06282A jsr @Rn */
L_0C06282E: BLKS(0x0C06282Eu);
	T = (r0 & r0) == 0;  /* 0C06282E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062910u, 4); goto L_0C062910; } goto L_0C062834; }  /* 0C062830 bt/s */
L_0C062834: BLKS(0x0C062834u);
	r3 = 0xC2755BCu; UPD(0x0C062836u, 2);  /* 0C062834 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C062838u, 1);  /* 0C062836 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C06283Au, 1);  /* 0C062838 mov.l Rm,@(disp,Rn) */
	T = (s32)r1 >= (s32)r6;  /* 0C06283A cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0628D4u, 4); goto L_0C0628D4; } UPD(0x0C062840u, 1); goto L_0C062840; }  /* 0C06283C bt/s */
L_0C062840: BLKS(0x0C062840u);
	W32(r14 + 0x10u, r8); UPD(0x0C062842u, 1);  /* 0C062840 mov.l Rm,@(disp,Rn) */
	IF(0x0C062842u); ;  /* 0C062842 nop */
	UPD(0x0C062844u, 1);
L_0C062844: BLKS(0x0C062844u);
	r2 = R32(r14); UPD(0x0C062846u, 1);  /* 0C062844 mov.l @Rm,Rn */
	r5 = 0x34u;  /* 0C062846 mov #imm,Rn */
	r13 = 0x340u; UPD(0x0C06284Au, 2);  /* 0C062848 mov.w @(disp,pc),Rn */
	r8 = R32(r14 + 0x8u); UPD(0x0C06284Cu, 1);  /* 0C06284A mov.l @(disp,Rm),Rn */
	IF(0x0C06284Cu); MACL = r2 * r13;  /* 0C06284C mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r7 = v_; } UPD(0x0C062850u, 3);  /* 0C06284E mov.w @Rm+,Rn */
	IF(0x0C062850u); r13 = MACL;  /* 0C062850 sts macl,Rn */
	IF(0x0C062852u); MACL = r7 * r5;  /* 0C062852 mul.l Rm,Rn */
	r1 = 0xC285318u; UPD(0x0C062856u, 4);  /* 0C062854 mov.l @(disp,pc),Rn */
	IF(0x0C062856u); r3 = MACL;  /* 0C062856 sts macl,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r6 = v_; } UPD(0x0C06285Au, 2);  /* 0C062858 mov.l @Rm+,Rn */
	r13 += r3;  /* 0C06285A add Rm,Rn */
	r4 = R32(r14); UPD(0x0C06285Eu, 2);  /* 0C06285C mov.l @Rm,Rn */
	r13 += r1;  /* 0C06285E add Rm,Rn */
	W32(r13, r6); UPD(0x0C062862u, 2);  /* 0C062860 mov.l Rm,@Rn */
	W32(r13 + 0x4u, r4); UPD(0x0C062864u, 1);  /* 0C062862 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C062866u, 1);  /* 0C062864 mov.l @Rm+,Rn */
	r4 = 0x4u;  /* 0C062866 mov #imm,Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C06286Au, 2);  /* 0C062868 mov.l Rm,@(disp,Rn) */
	r9 = 0xC050D70u; UPD(0x0C06286Cu, 1);  /* 0C06286A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06286Eu, 1);  /* 0C06286C mov.l @Rm+,Rn */
	IF(0x0C06286Eu); { u32 t_ = r9; PR = 0x0C062872u; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C062872u); }  /* 0C06286E jsr @Rn */
L_0C062872: BLKS(0x0C062872u);
	r0 += r10;  /* 0C062872 add Rm,Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C062876u, 2);  /* 0C062874 mov.l Rm,@(disp,Rn) */
	r12 = R32(r14 + 0x10u); UPD(0x0C062878u, 1);  /* 0C062876 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C06287Au, 1);  /* 0C062878 mov.l @Rm+,Rn */
	r10 = R32(r12 + 0x10u); UPD(0x0C06287Cu, 1);  /* 0C06287A mov.l @(disp,Rm),Rn */
	r3 = 0x66666667u; UPD(0x0C06287Eu, 1);  /* 0C06287C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C06287E add Rm,Rn */
	W32(r13 + 0x10u, r10); UPD(0x0C062882u, 2);  /* 0C062880 mov.l Rm,@(disp,Rn) */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C062882 dmuls.l Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C062886u, 3);  /* 0C062884 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C062888u, 1);  /* 0C062886 mov.l @Rm+,Rn */
	IF(0x0C062888u); r6 = MACH;  /* 0C062888 sts mach,Rn */
	r5 = R32(r2 + 0x14u); UPD(0x0C06288Cu, 2);  /* 0C06288A mov.l @(disp,Rm),Rn */
	IF(0x0C06288Cu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C06288C shar Rn */
	r5 += r7;  /* 0C06288E add Rm,Rn */
	W32(r13 + 0x14u, r5); UPD(0x0C062892u, 3);  /* 0C062890 mov.l Rm,@(disp,Rn) */
	IF(0x0C062892u); T = r0 >> 31; r0 <<= 1;  /* 0C062892 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C062894 subc Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C062898u, 3);  /* 0C062896 mov.l @Rm+,Rn */
	r6 -= r0;  /* 0C062898 sub Rm,Rn */
	r6 += r6;  /* 0C06289A add Rm,Rn */
	r4 = 0xC16BF52u; UPD(0x0C06289Eu, 3);  /* 0C06289C mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06289E mov Rm,Rn */
	W32(r13 + 0x20u, r8); UPD(0x0C0628A2u, 2);  /* 0C0628A0 mov.l Rm,@(disp,Rn) */
	r5 = r8;  /* 0C0628A2 mov Rm,Rn */
	IF(0x0C0628A4u); r12 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0628A6u, 2);  /* 0C0628A4 mov.w @(r0,Rm),Rn */
	r13 += 0x2Cu;  /* 0C0628A6 add #imm,Rn */
	r9 = 0xC7C0838u; UPD(0x0C0628AAu, 2);  /* 0C0628A8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0628AA mov Rm,Rn */
	IF(0x0C0628ACu); { u32 t_ = r9; PR = 0x0C0628B0u; W16(r13, r12); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C7C0838, 0x0C7C0838u, 0x0C0628B0u); }  /* 0C0628AC jsr @Rn */
L_0C0628B0: BLKS(0x0C0628B0u);
	r10 = 0xC7C0854u; UPD(0x0C0628B2u, 1);  /* 0C0628B0 mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFFD4u;  /* 0C0628B2 add #imm,Rn */
	r5 = r8;  /* 0C0628B4 mov Rm,Rn */
	W32(r13 + 0x18u, r0); UPD(0x0C0628B8u, 3);  /* 0C0628B6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0628B8u); { u32 t_ = r10; PR = 0x0C0628BCu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C0854, 0x0C7C0854u, 0x0C0628BCu); }  /* 0C0628B8 jsr @Rn */
L_0C0628BC: BLKS(0x0C0628BCu);
	r2 = R32(r14 + 0xCu); UPD(0x0C0628BEu, 1);  /* 0C0628BC mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C0628BE mov #imm,Rn */
	W32(r13 + 0x1Cu, r0); UPD(0x0C0628C2u, 2);  /* 0C0628C0 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C0628C2 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C0628C6u, 2);  /* 0C0628C4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0628C6 exts.w Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0628CAu, 2);  /* 0C0628C8 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x24u, r7); UPD(0x0C0628CCu, 1);  /* 0C0628CA mov.l Rm,@(disp,Rn) */
	T = (s32)r0 >= (s32)r5;  /* 0C0628CC cmp/ge Rm,Rn */
	W32(r13 + 0x28u, r9); UPD(0x0C0628D0u, 2);  /* 0C0628CE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C062844u, 3); goto L_0C062844; } UPD(0x0C0628D4u, 1); goto L_0C0628D4; }  /* 0C0628D0 bf/s */
L_0C0628D4: BLKS(0x0C0628D4u);
	r0 = 0x6u;  /* 0C0628D4 mov #imm,Rn */
	IF(0x0C0628D6u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0628D8u, 2);  /* 0C0628D6 mov.w @(r0,Rm),Rn */
	r9 = 0xAu;  /* 0C0628D8 mov #imm,Rn */
	r10 = 0xC7C00A0u; UPD(0x0C0628DCu, 2);  /* 0C0628DA mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r9);  /* 0C0628DC muls.w Rm,Rn */
	r12 = 0xC16BF50u; UPD(0x0C0628E0u, 3);  /* 0C0628DE mov.l @(disp,pc),Rn */
	IF(0x0C0628E0u); { u32 t_ = r10; PR = 0x0C0628E4u; IF(0x0C0628E2u); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C00A0, 0x0C7C00A0u, 0x0C0628E4u); }  /* 0C0628E0 jsr @Rn */
L_0C0628E4: BLKS(0x0C0628E4u);
	r0 = R32(r14); UPD(0x0C0628E6u, 1);  /* 0C0628E4 mov.l @Rm,Rn */
	IF(0x0C0628E6u); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0628E8u, 1);  /* 0C0628E6 mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C0628E8 mov Rm,Rn */
	r0 = 0xC0AFB20u; UPD(0x0C0628ECu, 2);  /* 0C0628EA mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C0628EC extu.b Rm,Rn */
	r14 += 0x14u;  /* 0C0628EE add #imm,Rn */
	r15 = r14;  /* 0C0628F0 mov Rm,Rn */
	IF(0x0C0628F2u); PR = R32(r15); r15 += 4; UPD(0x0C0628F4u, 4);  /* 0C0628F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0628F6u, 1);  /* 0C0628F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0628F8u, 1);  /* 0C0628F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0628FAu, 1);  /* 0C0628F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0628FCu, 1);  /* 0C0628FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0628FEu, 1);  /* 0C0628FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062900u, 1);  /* 0C0628FE mov.l @Rm+,Rn */
	IF(0x0C062900u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C062900 jmp @Rn */
L_0C062910: BLKS(0x0C062910u);
	r14 += 0x14u;  /* 0C062910 add #imm,Rn */
	r15 = r14;  /* 0C062912 mov Rm,Rn */
	IF(0x0C062914u); PR = R32(r15); r15 += 4; UPD(0x0C062916u, 3);  /* 0C062914 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062918u, 1);  /* 0C062916 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06291Au, 1);  /* 0C062918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06291Cu, 1);  /* 0C06291A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06291Eu, 1);  /* 0C06291C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062920u, 1);  /* 0C06291E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062922u, 1);  /* 0C062920 mov.l @Rm+,Rn */
	IF(0x0C062922u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062922 rts */
}

/* FUN_0c062970 */
void f_0C062970(sh3_t *c)
{
	LOCALS;
L_0C062970: BLKS(0x0C062970u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062972u, 1);  /* 0C062970 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C062972 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062976u, 2);  /* 0C062974 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062978u, 1);  /* 0C062976 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C062978 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06297Cu, 2);  /* 0C06297A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06297C mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062980u, 2);  /* 0C06297E mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C062980 mov #imm,Rn */
	IF(0x0C062982u); r15 -= 4; W32(r15, PR); UPD(0x0C062984u, 2);  /* 0C062982 sts.l pr,@-Rn */
	r0 = 0xC392DC4u; UPD(0x0C062986u, 1);  /* 0C062984 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C062986 mov Rm,Rn */
	W16(r0, r1); UPD(0x0C06298Au, 2);  /* 0C062988 mov.w Rm,@Rn */
	IF(0x0C06298Au); ;  /* 0C06298A nop */
	UPD(0x0C06298Cu, 1);
L_0C06298C: BLKS(0x0C06298Cu);
	r8 = 0xC283794u; UPD(0x0C06298Eu, 1);  /* 0C06298C mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C06298E mov Rm,Rn */
	r3 += r8;  /* 0C062990 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C062994u, 3);  /* 0C062992 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062994 tst Rm,Rn */
	if (!T) { UPD(0x0C0629C0u, 4); goto L_0C0629C0; }  /* 0C062996 bf */
L_0C062998: BLKS(0x0C062998u);
	r3 = r9;  /* 0C062998 mov Rm,Rn */
	UPD(0x0C06299Au, 1);
L_0C06299A: BLKS(0x0C06299Au);
	r9 = 0xA0u; UPD(0x0C06299Cu, 1);  /* 0C06299A mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C06299C add #imm,Rn */
	r2 = 0x280u; UPD(0x0C0629A0u, 2);  /* 0C06299E mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C0629A0 add Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0629A2 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C0629A4 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C0629A6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06298Cu, 7); goto L_0C06298C; } goto L_0C0629AC; }  /* 0C0629A8 bf/s */
L_0C0629AC: BLKS(0x0C0629ACu);
	r15 = r14;  /* 0C0629AC mov Rm,Rn */
	IF(0x0C0629AEu); PR = R32(r15); r15 += 4; UPD(0x0C0629B0u, 3);  /* 0C0629AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0629B2u, 1);  /* 0C0629B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0629B4u, 1);  /* 0C0629B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0629B6u, 1);  /* 0C0629B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0629B8u, 1);  /* 0C0629B6 mov.l @Rm+,Rn */
	IF(0x0C0629B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0629B8 rts */
L_0C0629C0: BLKS(0x0C0629C0u);
	r4 = 0xC392DC4u; UPD(0x0C0629C2u, 1);  /* 0C0629C0 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0629C4u, 1);  /* 0C0629C2 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0629C6u, 1);  /* 0C0629C4 mov.w @Rm,Rn */
	IF(0x0C0629C6u); r0 <<= 2;  /* 0C0629C6 shll2 Rn */
	r3 = 0xC16BEF8u; UPD(0x0C0629CAu, 2);  /* 0C0629C8 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0629CA add #imm,Rn */
	IF(0x0C0629CCu); r2 = R32(r0 + r3); UPD(0x0C0629CEu, 2);  /* 0C0629CC mov.l @(r0,Rm),Rn */
	W16(r4, r5); UPD(0x0C0629D0u, 1);  /* 0C0629CE mov.w Rm,@Rn */
	IF(0x0C0629D0u); { u32 t_ = r2; PR = 0x0C0629D4u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0629D4u); }  /* 0C0629D0 jsr @Rn */
L_0C0629D4: BLKS(0x0C0629D4u);
	r0 = r11;  /* 0C0629D4 mov Rm,Rn */
	IF(0x0C0629D6u); r0 <<= 2;  /* 0C0629D6 shll2 Rn */
	r0 += r8;  /* 0C0629D8 add Rm,Rn */
	r2 = 0x22Cu; UPD(0x0C0629DCu, 4);  /* 0C0629DA mov.w @(disp,pc),Rn */
	r0 += 0x8u;  /* 0C0629DC add #imm,Rn */
	r3 = 0x2u;  /* 0C0629DE mov #imm,Rn */
	r2 += r0;  /* 0C0629E0 add Rm,Rn */
	UPD(0x0C0629E2u, 3);
L_0C0629E2: BLKS(0x0C0629E2u);
	r7 = R32(r2); UPD(0x0C0629E4u, 1);  /* 0C0629E2 mov.l @Rm,Rn */
	r6 = r3;  /* 0C0629E4 mov Rm,Rn */
	W32(r2 + 0x4u, r7); UPD(0x0C0629E8u, 2);  /* 0C0629E6 mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFFFu;  /* 0C0629E8 add #imm,Rn */
	r7 = 0x23Cu; UPD(0x0C0629ECu, 2);  /* 0C0629EA mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C0629EC exts.w Rm,Rn */
	IF(0x0C0629EEu); r8 = R32(r0 + r7); UPD(0x0C0629F0u, 2);  /* 0C0629EE mov.l @(r0,Rm),Rn */
	IF(0x0C0629F0u); T = (s32)r3 >= 0;  /* 0C0629F0 cmp/pz Rn */
	W32(r2 + 0x14u, r8); UPD(0x0C0629F4u, 2);  /* 0C0629F2 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0629F4 add #imm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0629E2u, 4); goto L_0C0629E2; } goto L_0C0629FA; }  /* 0C0629F6 bt/s */
L_0C0629FA: BLKS(0x0C0629FAu);
	r3 = 0xC283794u; UPD(0x0C0629FCu, 2);  /* 0C0629FA mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0629FC add Rm,Rn */
	r0 = 0x22Cu; UPD(0x0C062A00u, 2);  /* 0C0629FE mov.w @(disp,pc),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C062A02u, 1);  /* 0C062A00 mov.l @(disp,Rm),Rn */
	IF(0x0C062A02u); W32(r0 + r3, r5); UPD(0x0C062A04u, 1);  /* 0C062A02 mov.l Rm,@(r0,Rn) */
	r2 = R32(r3 + 0x14u); UPD(0x0C062A06u, 1);  /* 0C062A04 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C062A06 mov Rm,Rn */
	IF(0x0C062A08u); W32(r0 + r7, r2); UPD(0x0C062A0Au, 2);  /* 0C062A08 mov.l Rm,@(r0,Rn) */
	r7 += 0x38u;  /* 0C062A0A add #imm,Rn */
	r0 = 0x270u; UPD(0x0C062A0Eu, 2);  /* 0C062A0C mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C062A0E add Rm,Rn */
	IF(0x0C062A10u); r4 = R32(r0 + r3); UPD(0x0C062A12u, 2);  /* 0C062A10 mov.l @(r0,Rm),Rn */
	r2 = R32(r7); UPD(0x0C062A14u, 1);  /* 0C062A12 mov.l @Rm,Rn */
	T = r4 >= r2;  /* 0C062A14 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFE3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062998u, 4); goto L_0C062998; } goto L_0C062A1A; }  /* 0C062A16 bf/s */
L_0C062A1A: BLKS(0x0C062A1Au);
	r4 = 0xC7C423Cu; UPD(0x0C062A1Cu, 2);  /* 0C062A1A mov.l @(disp,pc),Rn */
	r8 = R32(r4); UPD(0x0C062A1Eu, 1);  /* 0C062A1C mov.l @Rm,Rn */
	r6 = 0x4u;  /* 0C062A1E mov #imm,Rn */
	r2 += r8;  /* 0C062A20 add Rm,Rn */
	W32(r7, r2); UPD(0x0C062A24u, 3);  /* 0C062A22 mov.l Rm,@Rn */
	IF(0x0C062A24u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C062A26u, 1);  /* 0C062A24 mov.b @(r0,Rm),Rn */
	T = r2 > r6;  /* 0C062A26 cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062998u, 4); goto L_0C062998; } goto L_0C062A2C; }  /* 0C062A28 bt/s */
L_0C062A2C: BLKS(0x0C062A2Cu);
	r8 = 0xC0AFBA0u; UPD(0x0C062A2Eu, 2);  /* 0C062A2C mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C062A2E add #imm,Rn */
	r4 = r9;  /* 0C062A30 mov Rm,Rn */
	r5 = 0x62u;  /* 0C062A32 mov #imm,Rn */
	IF(0x0C062A34u); { u32 t_ = r8; PR = 0x0C062A38u; IF(0x0C062A36u); W8(r0 + r3, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C062A38u); }  /* 0C062A34 jsr @Rn */
L_0C062A38: BLKS(0x0C062A38u);
	r8 = 0xC0AFB20u; UPD(0x0C062A3Au, 1);  /* 0C062A38 mov.l @(disp,pc),Rn */
	r5 = 0x9Bu; UPD(0x0C062A3Cu, 1);  /* 0C062A3A mov.w @(disp,pc),Rn */
	IF(0x0C062A3Cu); { u32 t_ = r8; PR = 0x0C062A40u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C062A40u); }  /* 0C062A3C jsr @Rn */
L_0C062A40: BLKS(0x0C062A40u);
	{ r3 = r9; /* slot mov Rm,Rn */ UPD(0x0C06299Au, 3); goto L_0C06299A; }  /* 0C062A40 bra */
}

/* FUN_0c062a70 */
void f_0C062A70(sh3_t *c)
{
	LOCALS;
L_0C062A70: BLKS(0x0C062A70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062A72u, 1);  /* 0C062A70 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C062A72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062A76u, 2);  /* 0C062A74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062A78u, 1);  /* 0C062A76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C062A7Au, 1);  /* 0C062A78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C062A7Cu, 1);  /* 0C062A7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C062A7Eu, 1);  /* 0C062A7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062A80u, 1);  /* 0C062A7E mov.l Rm,@-Rn */
	r15 += 0xFFFFFFC8u;  /* 0C062A80 add #imm,Rn */
	r14 = r15;  /* 0C062A82 mov Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C062A86u, 3);  /* 0C062A84 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2175E8u; UPD(0x0C062A88u, 1);  /* 0C062A86 mov.l @(disp,pc),Rn */
	r6 = 0xC1F6110u; UPD(0x0C062A8Au, 1);  /* 0C062A88 mov.l @(disp,pc),Rn */
	r9 = R32(r2); UPD(0x0C062A8Cu, 1);  /* 0C062A8A mov.l @Rm,Rn */
	r13 = 0x3FFFFFFFu; UPD(0x0C062A8Eu, 1);  /* 0C062A8C mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C062A90u, 1);  /* 0C062A8E mov.b Rm,@Rn */
	r9 &= r13;  /* 0C062A90 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r6 = v_; } UPD(0x0C062A94u, 2);  /* 0C062A92 mov.w @Rm+,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C062A96u, 1);  /* 0C062A94 mov.l Rm,@(disp,Rn) */
	r3 = r6;  /* 0C062A96 mov Rm,Rn */
	r0 = 0xC392AF4u; UPD(0x0C062A9Au, 2);  /* 0C062A98 mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFF3u;  /* 0C062A9A mov #imm,Rn */
	W32(r14, r4); UPD(0x0C062A9Eu, 2);  /* 0C062A9C mov.l Rm,@Rn */
	IF(0x0C062A9Eu); ARG0(0x435Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C062A9E shad Rm,Rn */
	r4 = 0xC1F6108u; UPD(0x0C062AA2u, 2);  /* 0C062AA0 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C062AA2 mov Rm,Rn */
	r8 = R32(r0); UPD(0x0C062AA6u, 2);  /* 0C062AA4 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C062AA6 tst Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C062AAAu, 2);  /* 0C062AA8 mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C062AAA mov #imm,Rn */
	r12 = 0xC393044u; UPD(0x0C062AAEu, 2);  /* 0C062AAC mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C062AAE mov #imm,Rn */
	W32(r4, r9); UPD(0x0C062AB2u, 2);  /* 0C062AB0 mov.l Rm,@Rn */
	r2 ^= r0;  /* 0C062AB2 xor Rm,Rn */
	r11 = R32(r12); UPD(0x0C062AB6u, 2);  /* 0C062AB4 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C062AB6 negc Rm,Rn */
	r10 = 0xC1F610Cu; UPD(0x0C062ABAu, 2);  /* 0C062AB8 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C062ABA and Rm,Rn */
	r4 &= r2;  /* 0C062ABC and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C062ABE tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062AC8u, 6); goto L_0C062AC8; } UPD(0x0C062AC4u, 1); goto L_0C062AC4; }  /* 0C062AC0 bf/s */
L_0C062AC4: BLKS(0x0C062AC4u);
	{ IF(0x0C062AC6u); ; /* slot nop */ UPD(0x0C062CB0u, 3); goto L_0C062CB0; }  /* 0C062AC4 bra */
L_0C062AC8: BLKS(0x0C062AC8u);
	r10 = 0xC283CB4u; UPD(0x0C062ACAu, 1);  /* 0C062AC8 mov.l @(disp,pc),Rn */
	r13 = r6 & 0xFF;  /* 0C062ACA extu.b Rm,Rn */
	r2 = 0xC1F610Cu; UPD(0x0C062ACEu, 2);  /* 0C062ACC mov.l @(disp,pc),Rn */
	r13 += r13;  /* 0C062ACE add Rm,Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C062AD2u, 2);  /* 0C062AD0 mov.l @(disp,Rm),Rn */
	r4 = R32(r10); UPD(0x0C062AD4u, 1);  /* 0C062AD2 mov.l @Rm,Rn */
	r12 = R32(r2); UPD(0x0C062AD6u, 1);  /* 0C062AD4 mov.l @Rm,Rn */
	r4 += r9;  /* 0C062AD6 add Rm,Rn */
	r5 = (r4 >> 16) | (r4 << 16);  /* 0C062AD8 swap.w Rm,Rn */
	r12 += r13;  /* 0C062ADA add Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C062ADC exts.w Rm,Rn */
	r12 += 0xFFFFFFFEu;  /* 0C062ADE add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C062AE2u, 6);  /* 0C062AE0 mov.w @Rm,Rn */
	r7 = 0xC392B0Cu; UPD(0x0C062AE4u, 1);  /* 0C062AE2 mov.l @(disp,pc),Rn */
	r5 = 0xC284EBCu; UPD(0x0C062AE6u, 1);  /* 0C062AE4 mov.l @(disp,pc),Rn */
	r3 = 0xFFFFu; UPD(0x0C062AE8u, 1);  /* 0C062AE6 mov.l @(disp,pc),Rn */
	W32(r7, r11); UPD(0x0C062AEAu, 1);  /* 0C062AE8 mov.l Rm,@Rn */
	T = (r9 & r3) == 0;  /* 0C062AEA tst Rm,Rn */
	{ u32 c_ = T; W16(r5, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C062AF4u, 4); goto L_0C062AF4; } UPD(0x0C062AF0u, 1); goto L_0C062AF0; }  /* 0C062AEC bt/s */
L_0C062AF0: BLKS(0x0C062AF0u);
	r1 += 0x1u;  /* 0C062AF0 add #imm,Rn */
	W16(r5, r1); UPD(0x0C062AF4u, 2);  /* 0C062AF2 mov.w Rm,@Rn */
L_0C062AF4: BLKS(0x0C062AF4u);
	r10 = 0xC3929E0u; UPD(0x0C062AF6u, 1);  /* 0C062AF4 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C062AF6 mov Rm,Rn */
	r11 = R32(r10); UPD(0x0C062AFAu, 2);  /* 0C062AF8 mov.l @Rm,Rn */
	r0 += 0x2u;  /* 0C062AFA add #imm,Rn */
	r12 = 0xFFFF0000u; UPD(0x0C062AFEu, 2);  /* 0C062AFC mov.l @(disp,pc),Rn */
	r13 = 0xC283CAAu; UPD(0x0C062B00u, 1);  /* 0C062AFE mov.l @(disp,pc),Rn */
	r11 &= r12;  /* 0C062B00 and Rm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C062B04u, 2);  /* 0C062B02 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C062B06u, 1);  /* 0C062B04 mov.w @Rm,Rn */
	r9 -= r11;  /* 0C062B06 sub Rm,Rn */
	r3 = 0xC21F7EAu; UPD(0x0C062B0Au, 2);  /* 0C062B08 mov.l @(disp,pc),Rn */
	IF(0x0C062B0Au); r9 >>= 16;  /* 0C062B0A shlr16 Rn */
	r9 += r5;  /* 0C062B0C add Rm,Rn */
	W16(r3, r9); UPD(0x0C062B10u, 3);  /* 0C062B0E mov.w Rm,@Rn */
	r13 = 0xFFFFFFF8u;  /* 0C062B10 mov #imm,Rn */
	r5 = 0xC1F6108u; UPD(0x0C062B14u, 2);  /* 0C062B12 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C062B16u, 1);  /* 0C062B14 mov.l @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C062B18u, 1);  /* 0C062B16 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C062B1Au, 1);  /* 0C062B18 mov.w @Rm,Rn */
	IF(0x0C062B1Au); r11 <<= 2;  /* 0C062B1A shll2 Rn */
	r7 = 0xC283EB8u; UPD(0x0C062B1Eu, 2);  /* 0C062B1C mov.l @(disp,pc),Rn */
	IF(0x0C062B1Eu); ARG0(0x44DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C062B1E shad Rm,Rn */
	r11 += r7;  /* 0C062B20 add Rm,Rn */
	W32(r14 + 0x18u, r9); UPD(0x0C062B24u, 3);  /* 0C062B22 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C062B26u, 1);  /* 0C062B24 mov.w @Rm,Rn */
	r9 = r4 & 0xFF;  /* 0C062B26 extu.b Rm,Rn */
	r10 = 0xC21E0F8u; UPD(0x0C062B2Au, 2);  /* 0C062B28 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C062B2A add Rm,Rn */
	W16(r10, r9); UPD(0x0C062B2Eu, 2);  /* 0C062B2C mov.w Rm,@Rn */
	r11 += 0x2u;  /* 0C062B2E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r12 = v_; } UPD(0x0C062B32u, 2);  /* 0C062B30 mov.w @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C062B34u, 1);  /* 0C062B32 mov.w @Rm,Rn */
	r10 = r12 & 0xFF;  /* 0C062B34 extu.b Rm,Rn */
	r0 = 0xC286518u; UPD(0x0C062B38u, 2);  /* 0C062B36 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C062B38 add Rm,Rn */
	W16(r0, r10); UPD(0x0C062B3Cu, 2);  /* 0C062B3A mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C062B3Eu, 1);  /* 0C062B3C mov.w @Rm,Rn */
	r2 = 0xC2177F6u; UPD(0x0C062B40u, 1);  /* 0C062B3E mov.l @(disp,pc),Rn */
	IF(0x0C062B40u); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C062B40 shad Rm,Rn */
	r7 = 0x80u; UPD(0x0C062B44u, 2);  /* 0C062B42 mov.w @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C062B46u, 1);  /* 0C062B44 mov.l Rm,@Rn */
	r7 &= r0;  /* 0C062B46 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C062B48 tst Rm,Rn */
	{ u32 c_ = T; W16(r2, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C062B56u, 5); goto L_0C062B56; } UPD(0x0C062B4Eu, 1); goto L_0C062B4E; }  /* 0C062B4A bt/s */
L_0C062B4E: BLKS(0x0C062B4Eu);
	r7 = 0xFFFFFF00u; UPD(0x0C062B50u, 1);  /* 0C062B4E mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C062B50 mov Rm,Rn */
	r4 |= r7;  /* 0C062B52 or Rm,Rn */
	W16(r2, r4); UPD(0x0C062B56u, 3);  /* 0C062B54 mov.w Rm,@Rn */
L_0C062B56: BLKS(0x0C062B56u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r11 = v_; } UPD(0x0C062B58u, 1);  /* 0C062B56 mov.w @Rm+,Rn */
	r4 = 0xC286294u; UPD(0x0C062B5Au, 1);  /* 0C062B58 mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C062B5A extu.b Rm,Rn */
	r0 = 0x80u; UPD(0x0C062B5Eu, 2);  /* 0C062B5C mov.w @(disp,pc),Rn */
	W16(r4, r7); UPD(0x0C062B60u, 1);  /* 0C062B5E mov.w Rm,@Rn */
	r0 &= r7;  /* 0C062B60 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062B62 tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062B6Eu, 5); goto L_0C062B6E; } UPD(0x0C062B68u, 1); goto L_0C062B68; }  /* 0C062B64 bt/s */
L_0C062B68: BLKS(0x0C062B68u);
	r12 = 0xFFFFFF00u; UPD(0x0C062B6Au, 1);  /* 0C062B68 mov.w @(disp,pc),Rn */
	r7 |= r12;  /* 0C062B6A or Rm,Rn */
	W16(r4, r7); UPD(0x0C062B6Eu, 2);  /* 0C062B6C mov.w Rm,@Rn */
L_0C062B6E: BLKS(0x0C062B6Eu);
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C062B70u, 1);  /* 0C062B6E mov.w @Rm,Rn */
	IF(0x0C062B70u); ARG0(0x4CDCu); { s32 s_ = (s32)r13; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = (u32)((s32)r12 >> 31); else r12 = (u32)((s32)r12 >> ((~s_ & 31) + 1)); }  /* 0C062B70 shad Rm,Rn */
	r11 = 0xC27556Eu; UPD(0x0C062B74u, 2);  /* 0C062B72 mov.l @(disp,pc),Rn */
	r7 = r12 & 0xFF;  /* 0C062B74 extu.b Rm,Rn */
	W16(r11, r7); UPD(0x0C062B78u, 2);  /* 0C062B76 mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C062B7Au, 1);  /* 0C062B78 mov.w @Rm+,Rn */
	r12 = 0xC28671Cu; UPD(0x0C062B7Cu, 1);  /* 0C062B7A mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C062B7C extu.b Rm,Rn */
	W32(r5, r3); UPD(0x0C062B80u, 2);  /* 0C062B7E mov.l Rm,@Rn */
	W16(r12, r11); UPD(0x0C062B82u, 1);  /* 0C062B80 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C062B82 exts.w Rm,Rn */
	r0 = r3;  /* 0C062B84 mov Rm,Rn */
	r12 = 0xC21CA20u; UPD(0x0C062B88u, 3);  /* 0C062B86 mov.l @(disp,pc),Rn */
	IF(0x0C062B88u); r0 <<= 16;  /* 0C062B88 shll16 Rn */
	r5 = (u32)(s32)(s16)r10;  /* 0C062B8A exts.w Rm,Rn */
	r0 |= r5;  /* 0C062B8C or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C062B90u, 4);  /* 0C062B8E mov.w @Rm,Rn */
	W32(r12, r0); UPD(0x0C062B92u, 1);  /* 0C062B90 mov.l Rm,@Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C062B94u, 1);  /* 0C062B92 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C062B96u, 1);  /* 0C062B94 mov.w @Rm,Rn */
	IF(0x0C062B96u); r1 <<= 16;  /* 0C062B96 shll16 Rn */
	W32(r14 + 0x20u, r0); UPD(0x0C062B9Au, 2);  /* 0C062B98 mov.l Rm,@(disp,Rn) */
	r1 |= r0;  /* 0C062B9A or Rm,Rn */
	r0 = r7;  /* 0C062B9C mov Rm,Rn */
	IF(0x0C062B9Eu); r0 <<= 16;  /* 0C062B9E shll16 Rn */
	W32(r14 + 0x24u, r0); UPD(0x0C062BA2u, 4);  /* 0C062BA0 mov.l Rm,@(disp,Rn) */
	r4 = 0xC392AF0u; UPD(0x0C062BA4u, 1);  /* 0C062BA2 mov.l @(disp,pc),Rn */
	r0 |= r11;  /* 0C062BA4 or Rm,Rn */
	W32(r4, r0); UPD(0x0C062BA8u, 2);  /* 0C062BA6 mov.l Rm,@Rn */
	r2 = 0xC2175E8u; UPD(0x0C062BAAu, 1);  /* 0C062BA8 mov.l @(disp,pc),Rn */
	W32(r14 + 0x2Cu, r0); UPD(0x0C062BACu, 1);  /* 0C062BAA mov.l Rm,@(disp,Rn) */
	r4 = R32(r2); UPD(0x0C062BAEu, 1);  /* 0C062BAC mov.l @Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C062BB0u, 1);  /* 0C062BAE mov.l @(disp,pc),Rn */
	r12 = 0xC28650Cu; UPD(0x0C062BB2u, 1);  /* 0C062BB0 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C062BB2 and Rm,Rn */
	r0 = (r4 >> 16) | (r4 << 16);  /* 0C062BB4 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C062BB6 exts.w Rm,Rn */
	W32(r12, r1); UPD(0x0C062BBAu, 4);  /* 0C062BB8 mov.l Rm,@Rn */
	r6 ^= r2;  /* 0C062BBA xor Rm,Rn */
	r1 = r6;  /* 0C062BBC mov Rm,Rn */
	IF(0x0C062BBEu); r1 >>= 8;  /* 0C062BBE shlr8 Rn */
	IF(0x0C062BC0u); T = r1 & 1; r1 >>= 1;  /* 0C062BC0 shlr Rn */
	r0 = r1;  /* 0C062BC2 mov Rm,Rn */
	r4 = 0xC26C8D4u; UPD(0x0C062BC6u, 6);  /* 0C062BC4 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C062BC6 and #imm,r0 */
	W16(r4, r0); UPD(0x0C062BCAu, 2);  /* 0C062BC8 mov.w Rm,@Rn */
	r2 = 0xCu;  /* 0C062BCA mov #imm,Rn */
	W32(r14 + 0x30u, r0); UPD(0x0C062BCEu, 2);  /* 0C062BCC mov.l Rm,@(disp,Rn) */
	r12 = r7;  /* 0C062BCE mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C062BD2u, 2);  /* 0C062BD0 mov.w @(disp,pc),Rn */
	r0 &= r6;  /* 0C062BD2 and Rm,Rn */
	IF(0x0C062BD4u); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C062BD4 shad Rm,Rn */
	r13 = 0xC21F5D0u; UPD(0x0C062BD8u, 3);  /* 0C062BD6 mov.l @(disp,pc),Rn */
	r4 = 0xC000u; UPD(0x0C062BDAu, 1);  /* 0C062BD8 mov.l @(disp,pc),Rn */
	W16(r13, r0); UPD(0x0C062BDCu, 1);  /* 0C062BDA mov.w Rm,@Rn */
	r4 &= r6;  /* 0C062BDC and Rm,Rn */
	W32(r14 + 0x34u, r0); UPD(0x0C062BE0u, 2);  /* 0C062BDE mov.l Rm,@(disp,Rn) */
	r13 = r4;  /* 0C062BE0 mov Rm,Rn */
	r1 = R32(r14); UPD(0x0C062BE4u, 2);  /* 0C062BE2 mov.l @Rm,Rn */
	IF(0x0C062BE4u); ARG0(0x4D2Du); { s32 s_ = (s32)r2; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C062BE4 shld Rm,Rn */
	r0 = 0x2FFFFFFu; UPD(0x0C062BE8u, 2);  /* 0C062BE6 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C062BE8 mov Rm,Rn */
	r0 &= r1;  /* 0C062BEA and Rm,Rn */
	r6 = 0x11000000u; UPD(0x0C062BEEu, 3);  /* 0C062BEC mov.l @(disp,pc),Rn */
	r13 |= r0;  /* 0C062BEE or Rm,Rn */
	r13 |= r6;  /* 0C062BF0 or Rm,Rn */
	r0 = 0xC21CCE8u; UPD(0x0C062BF4u, 3);  /* 0C062BF2 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C062BF4 add Rm,Rn */
	r6 = 0xFFE0u; UPD(0x0C062BF8u, 2);  /* 0C062BF6 mov.l @(disp,pc),Rn */
	W32(r0, r13); UPD(0x0C062BFAu, 1);  /* 0C062BF8 mov.l Rm,@Rn */
	r3 &= r6;  /* 0C062BFA and Rm,Rn */
	r2 &= r6;  /* 0C062BFC and Rm,Rn */
	T = r2 == r3;  /* 0C062BFE cmp/eq Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C062C00 mov #imm,Rn */
	r0 = r9;  /* 0C062C02 mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C062C04 negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C062C06 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C062C08 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C062C0A negc Rm,Rn */
	T = (r1 & r9) == 0;  /* 0C062C0C tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C062C16u, 13); goto L_0C062C16; } UPD(0x0C062C12u, 1); goto L_0C062C12; }  /* 0C062C0E bf/s */
L_0C062C12: BLKS(0x0C062C12u);
	{ r1 = R32(r14 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0633D0u, 3); goto L_0C0633D0; }  /* 0C062C12 bra */
L_0C062C16: BLKS(0x0C062C16u);
	r2 = r5;  /* 0C062C16 mov Rm,Rn */
	r5 += r11;  /* 0C062C18 add Rm,Rn */
	r5 &= r6;  /* 0C062C1A and Rm,Rn */
	r2 &= r6;  /* 0C062C1C and Rm,Rn */
	T = r2 == r5;  /* 0C062C1E cmp/eq Rm,Rn */
	r6 = 0x1Fu;  /* 0C062C20 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C062C22 negc Rm,Rn */
	r6 &= r10;  /* 0C062C24 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C062C26 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C062C28 negc Rm,Rn */
	T = (r1 & r5) == 0;  /* 0C062C2A tst Rm,Rn */
	{ u32 c_ = !T; r9 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062C34u, 14); goto L_0C062C34; } goto L_0C062C30; }  /* 0C062C2C bf/s */
L_0C062C30: BLKS(0x0C062C30u);
	{ r3 = 0u - r0; /* slot neg Rm,Rn */ UPD(0x0C063160u, 4); goto L_0C063160; }  /* 0C062C30 bra */
L_0C062C34: BLKS(0x0C062C34u);
	r12 = 0u - r0;  /* 0C062C34 neg Rm,Rn */
	r12 += 0x1Fu;  /* 0C062C36 add #imm,Rn */
	r0 = 0u - r6;  /* 0C062C38 neg Rm,Rn */
	r7 -= r12;  /* 0C062C3A sub Rm,Rn */
	r10 = 0xC283CB0u; UPD(0x0C062C3Eu, 5);  /* 0C062C3C mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C062C3E add #imm,Rn */
	r11 = 0xC28629Cu; UPD(0x0C062C42u, 2);  /* 0C062C40 mov.l @(disp,pc),Rn */
	r0 += 0x1Fu;  /* 0C062C42 add #imm,Rn */
	r6 = 0xC275570u; UPD(0x0C062C46u, 2);  /* 0C062C44 mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C062C46 sub Rm,Rn */
	W16(r10, r7); UPD(0x0C062C4Au, 2);  /* 0C062C48 mov.w Rm,@Rn */
	r2 = (u32)(s32)(s16)r12;  /* 0C062C4A exts.w Rm,Rn */
	W16(r11, r12); UPD(0x0C062C4Eu, 2);  /* 0C062C4C mov.w Rm,@Rn */
	r10 = r0;  /* 0C062C4E mov Rm,Rn */
	W16(r6, r0); UPD(0x0C062C52u, 2);  /* 0C062C50 mov.w Rm,@Rn */
	r5 = r2;  /* 0C062C52 mov Rm,Rn */
	r3 = 0xC392DE4u; UPD(0x0C062C56u, 2);  /* 0C062C54 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C062C56 mov Rm,Rn */
	r11 = 0xC21CC88u; UPD(0x0C062C5Au, 2);  /* 0C062C58 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C062C5A add #imm,Rn */
	r12 = 0xC28673Cu; UPD(0x0C062C5Eu, 2);  /* 0C062C5C mov.l @(disp,pc),Rn */
	IF(0x0C062C5Eu); r5 <<= 16;  /* 0C062C5E shll16 Rn */
	IF(0x0C062C60u); r0 <<= 16;  /* 0C062C60 shll16 Rn */
	r1 = 0x4000u; UPD(0x0C062C64u, 3);  /* 0C062C62 mov.w @(disp,pc),Rn */
	W16(r3, r9); UPD(0x0C062C66u, 1);  /* 0C062C64 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C062C66 cmp/eq Rm,Rn */
	W32(r11, r5); UPD(0x0C062C6Au, 2);  /* 0C062C68 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r12, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062C72u, 3); goto L_0C062C72; } UPD(0x0C062C6Eu, 1); goto L_0C062C6E; }  /* 0C062C6A bf/s */
L_0C062C6E: BLKS(0x0C062C6Eu);
	{ r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063040u, 3); goto L_0C063040; }  /* 0C062C6E bra */
L_0C062C72: BLKS(0x0C062C72u);
	T = (s32)r4 > (s32)r1;  /* 0C062C72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C062C7Cu, 4); goto L_0C062C7C; } goto L_0C062C78; }  /* 0C062C74 bf/s */
L_0C062C78: BLKS(0x0C062C78u);
	{ IF(0x0C062C7Au); ; /* slot nop */ UPD(0x0C062E60u, 4); goto L_0C062E60; }  /* 0C062C78 bra */
L_0C062C7C: BLKS(0x0C062C7Cu);
	{ u32 c_ = !T; r0 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062C84u, 3); goto L_0C062C84; } goto L_0C062C80; }  /* 0C062C7C bf/s */
L_0C062C80: BLKS(0x0C062C80u);
	{ r7 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C062D80u, 4); goto L_0C062D80; }  /* 0C062C80 bra */
L_0C062C84: BLKS(0x0C062C84u);
	r4 = 0xC1F6110u; UPD(0x0C062C86u, 1);  /* 0C062C84 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFFF3u;  /* 0C062C86 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C062C8Au, 2);  /* 0C062C88 mov.b @Rm,Rn */
	r10 = 0xFFFFFFFFu;  /* 0C062C8A mov #imm,Rn */
	r3 = 0xC1F6108u; UPD(0x0C062C8Eu, 2);  /* 0C062C8C mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C062C8E add #imm,Rn */
	r2 = R32(r3); UPD(0x0C062C92u, 2);  /* 0C062C90 mov.l @Rm,Rn */
	W8(r4, r7); UPD(0x0C062C94u, 1);  /* 0C062C92 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C062C96u, 1);  /* 0C062C94 mov.w @Rm+,Rn */
	r12 = r6;  /* 0C062C96 mov Rm,Rn */
	IF(0x0C062C98u); ARG0(0x4C0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = (u32)((s32)r12 >> 31); else r12 = (u32)((s32)r12 >> ((~s_ & 31) + 1)); }  /* 0C062C98 shad Rm,Rn */
	r0 = r12;  /* 0C062C9A mov Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C062C9C tst Rm,Rn */
	r0 ^= 0x1u;  /* 0C062C9E xor #imm,r0 */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r13 = r_; }  /* 0C062CA0 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C062CA2 and #imm,r0 */
	r13 &= r0;  /* 0C062CA4 and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C062CA6 tst Rm,Rn */
	{ u32 c_ = T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062CB0u, 12); goto L_0C062CB0; } UPD(0x0C062CACu, 1); goto L_0C062CAC; }  /* 0C062CA8 bt/s */
L_0C062CAC: BLKS(0x0C062CACu);
	{ IF(0x0C062CAEu); ; /* slot nop */ UPD(0x0C062AC8u, 3); goto L_0C062AC8; }  /* 0C062CAC bra */
L_0C062CB0: BLKS(0x0C062CB0u);
	r9 = 0xF0000000u; UPD(0x0C062CB2u, 1);  /* 0C062CB0 mov.l @(disp,pc),Rn */
	r14 += 0x38u;  /* 0C062CB2 add #imm,Rn */
	r11 = 0xC392AF4u; UPD(0x0C062CB6u, 2);  /* 0C062CB4 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C062CB8u, 1);  /* 0C062CB6 mov.l Rm,@Rn */
	W32(r11, r8); UPD(0x0C062CBAu, 1);  /* 0C062CB8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C062CBA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062CBEu, 2);  /* 0C062CBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C062CC0u, 1);  /* 0C062CBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C062CC2u, 1);  /* 0C062CC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C062CC4u, 1);  /* 0C062CC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062CC6u, 1);  /* 0C062CC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062CC8u, 1);  /* 0C062CC6 mov.l @Rm+,Rn */
	IF(0x0C062CC8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062CC8 rts */
L_0C062D80: BLKS(0x0C062D80u);
	r3 = 0xC284EBCu; UPD(0x0C062D82u, 1);  /* 0C062D80 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C062D84u, 1);  /* 0C062D82 mov.w @Rm,Rn */
	IF(0x0C062D84u); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C062D86u, 1);  /* 0C062D84 mov.w @(r0,Rm),Rn */
	r1 += r7;  /* 0C062D86 add Rm,Rn */
	r4 = 0xC3929A8u; UPD(0x0C062D8Au, 2);  /* 0C062D88 mov.l @(disp,pc),Rn */
	IF(0x0C062D8Au); r1 <<= 16;  /* 0C062D8A shll16 Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C062D8Eu, 2);  /* 0C062D8C mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C062D8E exts.w Rm,Rn */
	r3 = 0xC2864B0u; UPD(0x0C062D92u, 2);  /* 0C062D90 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C062D92 add Rm,Rn */
	W32(r4, r1); UPD(0x0C062D96u, 2);  /* 0C062D94 mov.l Rm,@Rn */
	W32(r3, r2); UPD(0x0C062D98u, 1);  /* 0C062D96 mov.l Rm,@Rn */
	r1 += r5;  /* 0C062D98 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C062D9Cu, 2);  /* 0C062D9A mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C062D9C add Rm,Rn */
	r0 = 0xC3867F4u; UPD(0x0C062DA0u, 2);  /* 0C062D9E mov.l @(disp,pc),Rn */
	r1 += r6;  /* 0C062DA0 add Rm,Rn */
	r5 = 0xC285308u; UPD(0x0C062DA4u, 2);  /* 0C062DA2 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C062DA4 add #imm,Rn */
	W32(r0, r1); UPD(0x0C062DA8u, 2);  /* 0C062DA6 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C062DAAu, 1);  /* 0C062DA8 mov.l Rm,@Rn */
	r1 = 0xC21CA20u; UPD(0x0C062DACu, 1);  /* 0C062DAA mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C062DAEu, 1);  /* 0C062DAC mov.l Rm,@Rn */
	r10 = R32(r1); UPD(0x0C062DB0u, 1);  /* 0C062DAE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DB0 add #imm,Rn */
	W32(r8, r10); UPD(0x0C062DB4u, 2);  /* 0C062DB2 mov.l Rm,@Rn */
	r13 = R32(r4); UPD(0x0C062DB6u, 1);  /* 0C062DB4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DB6 add #imm,Rn */
	r4 = R32(r3); UPD(0x0C062DBAu, 2);  /* 0C062DB8 mov.l @Rm,Rn */
	r13 |= r4;  /* 0C062DBA or Rm,Rn */
	W32(r8, r13); UPD(0x0C062DBEu, 2);  /* 0C062DBC mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C062DC0u, 1);  /* 0C062DBE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DC0 add #imm,Rn */
	r5 |= r7;  /* 0C062DC2 or Rm,Rn */
	W32(r8, r5); UPD(0x0C062DC6u, 3);  /* 0C062DC4 mov.l Rm,@Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C062DC8u, 1);  /* 0C062DC6 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C062DC8 add #imm,Rn */
	W32(r8, r4); UPD(0x0C062DCCu, 2);  /* 0C062DCA mov.l Rm,@Rn */
	r5 = 0xC21CCE8u; UPD(0x0C062DCEu, 1);  /* 0C062DCC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062DCE add #imm,Rn */
	r10 = R32(r5); UPD(0x0C062DD2u, 2);  /* 0C062DD0 mov.l @Rm,Rn */
	W32(r8, r10); UPD(0x0C062DD4u, 1);  /* 0C062DD2 mov.l Rm,@Rn */
	r10 = 0xC21CA20u; UPD(0x0C062DD6u, 1);  /* 0C062DD4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062DD6 add #imm,Rn */
	r13 = R32(r10); UPD(0x0C062DDAu, 2);  /* 0C062DD8 mov.l @Rm,Rn */
	r1 = R32(r11); UPD(0x0C062DDCu, 1);  /* 0C062DDA mov.l @Rm,Rn */
	r13 += r1;  /* 0C062DDC add Rm,Rn */
	r13 += r6;  /* 0C062DDE add Rm,Rn */
	W32(r8, r13); UPD(0x0C062DE2u, 3);  /* 0C062DE0 mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C062DE4u, 1);  /* 0C062DE2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DE4 add #imm,Rn */
	r6 = R32(r0); UPD(0x0C062DE8u, 2);  /* 0C062DE6 mov.l @Rm,Rn */
	r6 |= r1;  /* 0C062DE8 or Rm,Rn */
	W32(r8, r6); UPD(0x0C062DECu, 2);  /* 0C062DEA mov.l Rm,@Rn */
	r13 = R32(r12); UPD(0x0C062DEEu, 1);  /* 0C062DEC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DEE add #imm,Rn */
	r13 |= r7;  /* 0C062DF0 or Rm,Rn */
	W32(r8, r13); UPD(0x0C062DF4u, 3);  /* 0C062DF2 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C062DF4 add #imm,Rn */
	W32(r8, r4); UPD(0x0C062DF8u, 2);  /* 0C062DF6 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C062DFAu, 1);  /* 0C062DF8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062DFA add #imm,Rn */
	W32(r8, r3); UPD(0x0C062DFEu, 2);  /* 0C062DFC mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C062E00u, 1);  /* 0C062DFE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062E00 add #imm,Rn */
	r0 += r7;  /* 0C062E02 add Rm,Rn */
	r0 += 0x1u;  /* 0C062E04 add #imm,Rn */
	W32(r8, r0); UPD(0x0C062E08u, 4);  /* 0C062E06 mov.l Rm,@Rn */
	r6 = 0xC3929A8u; UPD(0x0C062E0Au, 1);  /* 0C062E08 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062E0A add #imm,Rn */
	r2 = 0xC285308u; UPD(0x0C062E0Eu, 2);  /* 0C062E0C mov.l @(disp,pc),Rn */
	r13 = R32(r6); UPD(0x0C062E10u, 1);  /* 0C062E0E mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C062E12u, 1);  /* 0C062E10 mov.l @Rm,Rn */
	r13 |= r1;  /* 0C062E12 or Rm,Rn */
	W32(r8, r13); UPD(0x0C062E16u, 2);  /* 0C062E14 mov.l Rm,@Rn */
	r3 = R32(r11); UPD(0x0C062E18u, 1);  /* 0C062E16 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C062E18 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C062E1A add #imm,Rn */
	r3 |= r13;  /* 0C062E1C or Rm,Rn */
	W32(r8, r3); UPD(0x0C062E20u, 4);  /* 0C062E1E mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C062E20 add #imm,Rn */
	W32(r8, r4); UPD(0x0C062E24u, 2);  /* 0C062E22 mov.l Rm,@Rn */
	r9 = R32(r5); UPD(0x0C062E26u, 1);  /* 0C062E24 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062E26 add #imm,Rn */
	W32(r8, r9); UPD(0x0C062E2Au, 2);  /* 0C062E28 mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C062E2Cu, 1);  /* 0C062E2A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062E2C add #imm,Rn */
	r6 = R32(r11); UPD(0x0C062E30u, 2);  /* 0C062E2E mov.l @Rm,Rn */
	r10 = 0x10001u; UPD(0x0C062E32u, 1);  /* 0C062E30 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C062E32 add Rm,Rn */
	r0 += r7;  /* 0C062E34 add Rm,Rn */
	r0 += r10;  /* 0C062E36 add Rm,Rn */
	W32(r8, r0); UPD(0x0C062E3Au, 4);  /* 0C062E38 mov.l Rm,@Rn */
	r2 = 0xC3867F4u; UPD(0x0C062E3Cu, 1);  /* 0C062E3A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062E3C add #imm,Rn */
	r1 = 0xC285308u; UPD(0x0C062E40u, 2);  /* 0C062E3E mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C062E42u, 1);  /* 0C062E40 mov.l @Rm,Rn */
	r4 = R32(r1); UPD(0x0C062E44u, 1);  /* 0C062E42 mov.l @Rm,Rn */
	r3 |= r4;  /* 0C062E44 or Rm,Rn */
	W32(r8, r3); UPD(0x0C062E48u, 2);  /* 0C062E46 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C062E4Au, 1);  /* 0C062E48 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062E4A add #imm,Rn */
	r9 |= r13;  /* 0C062E4C or Rm,Rn */
	W32(r8, r9); UPD(0x0C062E50u, 3);  /* 0C062E4E mov.l Rm,@Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C062E52u, 1);  /* 0C062E50 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C062E52 add #imm,Rn */
	UPD(0x0C062E54u, 1);
L_0C062E54: BLKS(0x0C062E54u);
	W32(r8, r6); UPD(0x0C062E56u, 1);  /* 0C062E54 mov.l Rm,@Rn */
	IF(0x0C062E56u); ;  /* 0C062E56 nop */
	UPD(0x0C062E58u, 1);
L_0C062E58: BLKS(0x0C062E58u);
	r8 += 0x4u;  /* 0C062E58 add #imm,Rn */
	UPD(0x0C062E5Au, 1);
L_0C062E5A: BLKS(0x0C062E5Au);
	{ IF(0x0C062E5Cu); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C062E5A bra */
L_0C062E60: BLKS(0x0C062E60u);
	r7 = 0x8000u; UPD(0x0C062E62u, 1);  /* 0C062E60 mov.l @(disp,pc),Rn */
	T = r4 == r7;  /* 0C062E62 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C062E6Cu, 4); goto L_0C062E6C; }  /* 0C062E64 bf */
L_0C062E66: BLKS(0x0C062E66u);
	r4 = R32(r14 + 0x1Cu); UPD(0x0C062E68u, 1);  /* 0C062E66 mov.l @(disp,Rm),Rn */
	{ r4 += r2; /* slot add Rm,Rn */ UPD(0x0C062F60u, 3); goto L_0C062F60; }  /* 0C062E68 bra */
L_0C062E6C: BLKS(0x0C062E6Cu);
	r5 = 0xC000u; UPD(0x0C062E6Eu, 1);  /* 0C062E6C mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C062E6E cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062E5Au, 4); goto L_0C062E5A; } goto L_0C062E74; }  /* 0C062E70 bf/s */
L_0C062E74: BLKS(0x0C062E74u);
	r1 = 0xC284EBCu; UPD(0x0C062E76u, 2);  /* 0C062E74 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x1Cu); UPD(0x0C062E78u, 1);  /* 0C062E76 mov.l @(disp,Rm),Rn */
	r6 += r14;  /* 0C062E78 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C062E7Cu, 2);  /* 0C062E7A mov.w @Rm,Rn */
	r7 += r2;  /* 0C062E7C add Rm,Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C062E80u, 2);  /* 0C062E7E mov.l @(disp,Rm),Rn */
	r3 -= r7;  /* 0C062E80 sub Rm,Rn */
	r3 -= r2;  /* 0C062E82 sub Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C062E86u, 3);  /* 0C062E84 mov.w @Rm,Rn */
	r1 = 0x36u;  /* 0C062E86 mov #imm,Rn */
	r6 = (u32)(s32)(s16)r10;  /* 0C062E88 exts.w Rm,Rn */
	r10 = R32(r14 + 0x20u); UPD(0x0C062E8Cu, 3);  /* 0C062E8A mov.l @(disp,Rm),Rn */
	r1 += r14;  /* 0C062E8C add Rm,Rn */
	r5 = 0xC3867F4u; UPD(0x0C062E90u, 2);  /* 0C062E8E mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C062E90 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C062E94u, 2);  /* 0C062E92 mov.w @Rm,Rn */
	r10 += r6;  /* 0C062E94 add Rm,Rn */
	IF(0x0C062E96u); r3 <<= 16;  /* 0C062E96 shll16 Rn */
	W32(r5, r3); UPD(0x0C062E9Au, 3);  /* 0C062E98 mov.l Rm,@Rn */
	r2 -= r10;  /* 0C062E9A sub Rm,Rn */
	r2 -= r4;  /* 0C062E9C sub Rm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C062EA0u, 3);  /* 0C062E9E mov.l @(disp,pc),Rn */
	r3 -= r0;  /* 0C062EA0 sub Rm,Rn */
	r7 = 0xC285308u; UPD(0x0C062EA4u, 2);  /* 0C062EA2 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C062EA4 add Rm,Rn */
	r4 = 0xC220C30u; UPD(0x0C062EA8u, 2);  /* 0C062EA6 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C062EA8 add #imm,Rn */
	W32(r7, r2); UPD(0x0C062EACu, 2);  /* 0C062EAA mov.l Rm,@Rn */
	r9 = (u32)(s32)(s16)r9;  /* 0C062EAC exts.w Rm,Rn */
	W32(r4, r3); UPD(0x0C062EB0u, 2);  /* 0C062EAE mov.l Rm,@Rn */
	r2 -= r9;  /* 0C062EB0 sub Rm,Rn */
	r3 = 0xC392DCCu; UPD(0x0C062EB4u, 2);  /* 0C062EB2 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C062EB4 add #imm,Rn */
	W32(r3, r2); UPD(0x0C062EB8u, 2);  /* 0C062EB6 mov.l Rm,@Rn */
	r10 = 0xC21CA20u; UPD(0x0C062EBAu, 1);  /* 0C062EB8 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C062EBCu, 1);  /* 0C062EBA mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C062EBEu, 1);  /* 0C062EBC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062EBE add #imm,Rn */
	W32(r8, r0); UPD(0x0C062EC2u, 2);  /* 0C062EC0 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C062EC4u, 1);  /* 0C062EC2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062EC4 add #imm,Rn */
	r13 = R32(r5); UPD(0x0C062EC8u, 2);  /* 0C062EC6 mov.l @Rm,Rn */
	r13 |= r1;  /* 0C062EC8 or Rm,Rn */
	W32(r8, r13); UPD(0x0C062ECCu, 2);  /* 0C062ECA mov.l Rm,@Rn */
	r10 = R32(r11); UPD(0x0C062ECEu, 1);  /* 0C062ECC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062ECE add #imm,Rn */
	r10 |= r6;  /* 0C062ED0 or Rm,Rn */
	W32(r8, r10); UPD(0x0C062ED4u, 3);  /* 0C062ED2 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C062ED6u, 1);  /* 0C062ED4 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C062ED6 add #imm,Rn */
	W32(r8, r10); UPD(0x0C062EDAu, 2);  /* 0C062ED8 mov.l Rm,@Rn */
	r13 = 0xC21CCE8u; UPD(0x0C062EDCu, 1);  /* 0C062EDA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062EDC add #imm,Rn */
	r0 = R32(r13); UPD(0x0C062EE0u, 2);  /* 0C062EDE mov.l @Rm,Rn */
	r2 = 0xC21CA20u; UPD(0x0C062EE2u, 1);  /* 0C062EE0 mov.l @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C062EE4u, 1);  /* 0C062EE2 mov.l Rm,@Rn */
	r0 = R32(r2); UPD(0x0C062EE6u, 1);  /* 0C062EE4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062EE6 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C062EEAu, 2);  /* 0C062EE8 mov.l @Rm,Rn */
	r0 += r2; UPD(0x0C062EECu, 1);  /* 0C062EEA add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C062EEEu, 1);  /* 0C062EEC mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C062EEE add Rm,Rn */
	W32(r8, r0); UPD(0x0C062EF2u, 2);  /* 0C062EF0 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C062EF4u, 1);  /* 0C062EF2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062EF4 add #imm,Rn */
	r0 = R32(r4); UPD(0x0C062EF8u, 2);  /* 0C062EF6 mov.l @Rm,Rn */
	r0 |= r1;  /* 0C062EF8 or Rm,Rn */
	W32(r8, r0); UPD(0x0C062EFCu, 2);  /* 0C062EFA mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C062EFEu, 1);  /* 0C062EFC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062EFE add #imm,Rn */
	r7 |= r6;  /* 0C062F00 or Rm,Rn */
	W32(r8, r7); UPD(0x0C062F04u, 3);  /* 0C062F02 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C062F04 add #imm,Rn */
	W32(r8, r10); UPD(0x0C062F08u, 2);  /* 0C062F06 mov.l Rm,@Rn */
	r2 = R32(r13); UPD(0x0C062F0Au, 1);  /* 0C062F08 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F0A add #imm,Rn */
	W32(r8, r2); UPD(0x0C062F0Eu, 2);  /* 0C062F0C mov.l Rm,@Rn */
	r1 = 0xC21CA20u; UPD(0x0C062F10u, 1);  /* 0C062F0E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062F10 add #imm,Rn */
	r0 = R32(r1); UPD(0x0C062F14u, 2);  /* 0C062F12 mov.l @Rm,Rn */
	r0 += r6;  /* 0C062F14 add Rm,Rn */
	r0 += 0x1u;  /* 0C062F16 add #imm,Rn */
	W32(r8, r0); UPD(0x0C062F1Au, 3);  /* 0C062F18 mov.l Rm,@Rn */
	r7 = R32(r5); UPD(0x0C062F1Cu, 1);  /* 0C062F1A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F1C add #imm,Rn */
	r5 = R32(r3); UPD(0x0C062F20u, 2);  /* 0C062F1E mov.l @Rm,Rn */
	r7 |= r5;  /* 0C062F20 or Rm,Rn */
	W32(r8, r7); UPD(0x0C062F24u, 2);  /* 0C062F22 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C062F26u, 1);  /* 0C062F24 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F26 add #imm,Rn */
	r0 |= r9;  /* 0C062F28 or Rm,Rn */
	W32(r8, r0); UPD(0x0C062F2Cu, 3);  /* 0C062F2A mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C062F2C add #imm,Rn */
	W32(r8, r10); UPD(0x0C062F30u, 2);  /* 0C062F2E mov.l Rm,@Rn */
	r2 = R32(r13); UPD(0x0C062F32u, 1);  /* 0C062F30 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F32 add #imm,Rn */
	W32(r8, r2); UPD(0x0C062F36u, 2);  /* 0C062F34 mov.l Rm,@Rn */
	r1 = 0xC21CA20u; UPD(0x0C062F38u, 1);  /* 0C062F36 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062F38 add #imm,Rn */
	r13 = R32(r1); UPD(0x0C062F3Cu, 2);  /* 0C062F3A mov.l @Rm,Rn */
	r7 = R32(r11); UPD(0x0C062F3Eu, 1);  /* 0C062F3C mov.l @Rm,Rn */
	r5 = 0x10001u; UPD(0x0C062F40u, 1);  /* 0C062F3E mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C062F40 add Rm,Rn */
	r13 += r6;  /* 0C062F42 add Rm,Rn */
	r13 += r5;  /* 0C062F44 add Rm,Rn */
	W32(r8, r13); UPD(0x0C062F48u, 4);  /* 0C062F46 mov.l Rm,@Rn */
	r11 = R32(r4); UPD(0x0C062F4Au, 1);  /* 0C062F48 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F4A add #imm,Rn */
	r6 = R32(r3); UPD(0x0C062F4Eu, 2);  /* 0C062F4C mov.l @Rm,Rn */
	r11 |= r6;  /* 0C062F4E or Rm,Rn */
	W32(r8, r11); UPD(0x0C062F52u, 2);  /* 0C062F50 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C062F54u, 1);  /* 0C062F52 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F54 add #imm,Rn */
	r1 |= r9;  /* 0C062F56 or Rm,Rn */
	UPD(0x0C062F58u, 2);
L_0C062F58: BLKS(0x0C062F58u);
	W32(r8, r1); UPD(0x0C062F5Au, 1);  /* 0C062F58 mov.l Rm,@Rn */
L_0C062F5A: BLKS(0x0C062F5Au);
	r8 += 0x4u;  /* 0C062F5A add #imm,Rn */
	UPD(0x0C062F5Cu, 1);
L_0C062F5C: BLKS(0x0C062F5Cu);
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 3); goto L_0C062E58; }  /* 0C062F5C bra */
L_0C062F60: BLKS(0x0C062F60u);
	r6 = 0xC284EBCu; UPD(0x0C062F62u, 1);  /* 0C062F60 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r6); UPD(0x0C062F64u, 1);  /* 0C062F62 mov.w @Rm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C062F66u, 1);  /* 0C062F64 mov.l @(disp,Rm),Rn */
	r1 -= r4;  /* 0C062F66 sub Rm,Rn */
	r1 -= r5;  /* 0C062F68 sub Rm,Rn */
	r5 = 0xC3867F4u; UPD(0x0C062F6Cu, 3);  /* 0C062F6A mov.l @(disp,pc),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C062F6C add #imm,Rn */
	IF(0x0C062F6Eu); r1 <<= 16;  /* 0C062F6E shll16 Rn */
	W32(r5, r1); UPD(0x0C062F72u, 3);  /* 0C062F70 mov.l Rm,@Rn */
	r7 = 0xFFFF0000u; UPD(0x0C062F74u, 1);  /* 0C062F72 mov.l @(disp,pc),Rn */
	r1 -= r0;  /* 0C062F74 sub Rm,Rn */
	r3 = 0xC220C30u; UPD(0x0C062F78u, 2);  /* 0C062F76 mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C062F78 add Rm,Rn */
	W32(r3, r1); UPD(0x0C062F7Cu, 2);  /* 0C062F7A mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C062F7C mov #imm,Rn */
	IF(0x0C062F7Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C062F80u, 2);  /* 0C062F7E mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C062F80 exts.w Rm,Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C062F84u, 2);  /* 0C062F82 mov.l @(disp,Rm),Rn */
	r3 = 0xC2864B0u; UPD(0x0C062F86u, 1);  /* 0C062F84 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C062F86 add Rm,Rn */
	W32(r3, r4); UPD(0x0C062F8Au, 2);  /* 0C062F88 mov.l Rm,@Rn */
	r6 = 0xC285308u; UPD(0x0C062F8Cu, 1);  /* 0C062F8A mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C062F8C add Rm,Rn */
	r4 += 0x1u;  /* 0C062F8E add #imm,Rn */
	W32(r6, r4); UPD(0x0C062F92u, 3);  /* 0C062F90 mov.l Rm,@Rn */
	W32(r8, r13); UPD(0x0C062F94u, 1);  /* 0C062F92 mov.l Rm,@Rn */
	r4 = 0xC21CA20u; UPD(0x0C062F96u, 1);  /* 0C062F94 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062F96 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C062F9Au, 2);  /* 0C062F98 mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C062F9Cu, 1);  /* 0C062F9A mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C062F9Eu, 1);  /* 0C062F9C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062F9E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C062FA2u, 2);  /* 0C062FA0 mov.l @Rm,Rn */
	r10 |= r1;  /* 0C062FA2 or Rm,Rn */
	W32(r8, r10); UPD(0x0C062FA6u, 2);  /* 0C062FA4 mov.l Rm,@Rn */
	r13 = R32(r11); UPD(0x0C062FA8u, 1);  /* 0C062FA6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062FA8 add #imm,Rn */
	r13 |= r7;  /* 0C062FAA or Rm,Rn */
	W32(r8, r13); UPD(0x0C062FAEu, 3);  /* 0C062FAC mov.l Rm,@Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C062FB0u, 1);  /* 0C062FAE mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C062FB0 add #imm,Rn */
	W32(r8, r13); UPD(0x0C062FB4u, 2);  /* 0C062FB2 mov.l Rm,@Rn */
	r10 = 0xC21CCE8u; UPD(0x0C062FB6u, 1);  /* 0C062FB4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062FB6 add #imm,Rn */
	r0 = R32(r10); UPD(0x0C062FBAu, 2);  /* 0C062FB8 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C062FBCu, 1);  /* 0C062FBA mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C062FBEu, 1);  /* 0C062FBC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062FBE add #imm,Rn */
	r0 = R32(r4); UPD(0x0C062FC2u, 2);  /* 0C062FC0 mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C062FC4u, 1);  /* 0C062FC2 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C062FC4 add Rm,Rn */
	r0 += r2;  /* 0C062FC6 add Rm,Rn */
	W32(r8, r0); UPD(0x0C062FCAu, 3);  /* 0C062FC8 mov.l Rm,@Rn */
	r0 = 0xC220C30u; UPD(0x0C062FCCu, 1);  /* 0C062FCA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062FCC add #imm,Rn */
	r1 = R32(r3); UPD(0x0C062FD0u, 2);  /* 0C062FCE mov.l @Rm,Rn */
	r5 = R32(r0); UPD(0x0C062FD2u, 1);  /* 0C062FD0 mov.l @Rm,Rn */
	r5 |= r1;  /* 0C062FD2 or Rm,Rn */
	W32(r8, r5); UPD(0x0C062FD6u, 2);  /* 0C062FD4 mov.l Rm,@Rn */
	r3 = R32(r12); UPD(0x0C062FD8u, 1);  /* 0C062FD6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062FD8 add #imm,Rn */
	r3 |= r7;  /* 0C062FDA or Rm,Rn */
	W32(r8, r3); UPD(0x0C062FDEu, 3);  /* 0C062FDC mov.l Rm,@Rn */
	r8 += 0x4u; UPD(0x0C062FE0u, 1);  /* 0C062FDE add #imm,Rn */
	W32(r8, r13); UPD(0x0C062FE2u, 1);  /* 0C062FE0 mov.l Rm,@Rn */
	r5 = R32(r10); UPD(0x0C062FE4u, 1);  /* 0C062FE2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062FE4 add #imm,Rn */
	W32(r8, r5); UPD(0x0C062FE8u, 2);  /* 0C062FE6 mov.l Rm,@Rn */
	r2 = R32(r4); UPD(0x0C062FEAu, 1);  /* 0C062FE8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C062FEA add #imm,Rn */
	r2 += r7;  /* 0C062FEC add Rm,Rn */
	r2 += 0x1u;  /* 0C062FEE add #imm,Rn */
	W32(r8, r2); UPD(0x0C062FF2u, 4);  /* 0C062FF0 mov.l Rm,@Rn */
	r3 = 0xC3867F4u; UPD(0x0C062FF4u, 1);  /* 0C062FF2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C062FF4 add #imm,Rn */
	r5 = R32(r3); UPD(0x0C062FF8u, 2);  /* 0C062FF6 mov.l @Rm,Rn */
	r1 = R32(r6); UPD(0x0C062FFAu, 1);  /* 0C062FF8 mov.l @Rm,Rn */
	r5 |= r1;  /* 0C062FFA or Rm,Rn */
	W32(r8, r5); UPD(0x0C062FFEu, 2);  /* 0C062FFC mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)r9;  /* 0C062FFE exts.w Rm,Rn */
	r9 = R32(r11); UPD(0x0C063002u, 2);  /* 0C063000 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063002 add #imm,Rn */
	r9 |= r5;  /* 0C063004 or Rm,Rn */
	W32(r8, r9); UPD(0x0C063008u, 3);  /* 0C063006 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C063008 add #imm,Rn */
	W32(r8, r13); UPD(0x0C06300Cu, 2);  /* 0C06300A mov.l Rm,@Rn */
	r2 = R32(r10); UPD(0x0C06300Eu, 1);  /* 0C06300C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06300E add #imm,Rn */
	W32(r8, r2); UPD(0x0C063012u, 2);  /* 0C063010 mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C063014u, 1);  /* 0C063012 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063014 add #imm,Rn */
	r3 = R32(r11); UPD(0x0C063018u, 2);  /* 0C063016 mov.l @Rm,Rn */
	r1 = 0x10001u; UPD(0x0C06301Au, 1);  /* 0C063018 mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C06301A add Rm,Rn */
	r10 += r7;  /* 0C06301C add Rm,Rn */
	r10 += r1;  /* 0C06301E add Rm,Rn */
	W32(r8, r10); UPD(0x0C063022u, 4);  /* 0C063020 mov.l Rm,@Rn */
	r9 = R32(r0); UPD(0x0C063024u, 1);  /* 0C063022 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063024 add #imm,Rn */
	r4 = R32(r6); UPD(0x0C063028u, 2);  /* 0C063026 mov.l @Rm,Rn */
	r9 |= r4;  /* 0C063028 or Rm,Rn */
	W32(r8, r9); UPD(0x0C06302Cu, 2);  /* 0C06302A mov.l Rm,@Rn */
	r11 = R32(r12); UPD(0x0C06302Eu, 1);  /* 0C06302C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06302E add #imm,Rn */
	r11 |= r5;  /* 0C063030 or Rm,Rn */
	W32(r8, r11); UPD(0x0C063034u, 3);  /* 0C063032 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C063034 add #imm,Rn */
	{ W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 4); goto L_0C062E58; }  /* 0C063036 bra */
L_0C063040: BLKS(0x0C063040u);
	r2 = 0xC284EBCu; UPD(0x0C063042u, 1);  /* 0C063040 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C063044u, 1);  /* 0C063042 mov.w @Rm,Rn */
	r6 = 0xC3929A8u; UPD(0x0C063046u, 1);  /* 0C063044 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C063046 add Rm,Rn */
	IF(0x0C063048u); r7 <<= 16;  /* 0C063048 shll16 Rn */
	W32(r6, r7); UPD(0x0C06304Cu, 3);  /* 0C06304A mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C06304C mov #imm,Rn */
	r1 = 0x10000u; UPD(0x0C063050u, 2);  /* 0C06304E mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C063050 add Rm,Rn */
	r3 = 0xC3867F4u; UPD(0x0C063054u, 2);  /* 0C063052 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C063054 add Rm,Rn */
	W32(r3, r7); UPD(0x0C063058u, 2);  /* 0C063056 mov.l Rm,@Rn */
	IF(0x0C063058u); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C06305Au, 1);  /* 0C063058 mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C06305A exts.w Rm,Rn */
	r4 = R32(r14 + 0x20u); UPD(0x0C06305Eu, 2);  /* 0C06305C mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C06305E mov #imm,Rn */
	IF(0x0C063060u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063062u, 2);  /* 0C063060 mov.w @(r0,Rm),Rn */
	r4 += r7;  /* 0C063062 add Rm,Rn */
	r1 -= r4;  /* 0C063064 sub Rm,Rn */
	r3 = 0xC285308u; UPD(0x0C063068u, 3);  /* 0C063066 mov.l @(disp,pc),Rn */
	r1 -= r5;  /* 0C063068 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C06306A add #imm,Rn */
	W32(r3, r1); UPD(0x0C06306Eu, 3);  /* 0C06306C mov.l Rm,@Rn */
	r4 = (u32)(s32)(s16)r9;  /* 0C06306E exts.w Rm,Rn */
	r5 = 0xC392DCCu; UPD(0x0C063072u, 2);  /* 0C063070 mov.l @(disp,pc),Rn */
	r1 -= r4;  /* 0C063072 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C063074 add #imm,Rn */
	W32(r5, r1); UPD(0x0C063078u, 3);  /* 0C063076 mov.l Rm,@Rn */
	r9 = 0xC21CA20u; UPD(0x0C06307Au, 1);  /* 0C063078 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C06307Cu, 1);  /* 0C06307A mov.l Rm,@Rn */
	r2 = R32(r9); UPD(0x0C06307Eu, 1);  /* 0C06307C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06307E add #imm,Rn */
	W32(r8, r2); UPD(0x0C063082u, 2);  /* 0C063080 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C063084u, 1);  /* 0C063082 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063084 add #imm,Rn */
	r10 = R32(r6); UPD(0x0C063088u, 2);  /* 0C063086 mov.l @Rm,Rn */
	r10 |= r13;  /* 0C063088 or Rm,Rn */
	W32(r8, r10); UPD(0x0C06308Cu, 2);  /* 0C06308A mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C06308Eu, 1);  /* 0C06308C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06308E add #imm,Rn */
	r0 |= r7;  /* 0C063090 or Rm,Rn */
	W32(r8, r0); UPD(0x0C063094u, 3);  /* 0C063092 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C063096u, 1);  /* 0C063094 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063096 add #imm,Rn */
	W32(r8, r10); UPD(0x0C06309Au, 2);  /* 0C063098 mov.l Rm,@Rn */
	r0 = 0xC21CCE8u; UPD(0x0C06309Cu, 1);  /* 0C06309A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06309C add #imm,Rn */
	r2 = R32(r0); UPD(0x0C0630A0u, 2);  /* 0C06309E mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C0630A2u, 1);  /* 0C0630A0 mov.l Rm,@Rn */
	r13 = R32(r9); UPD(0x0C0630A4u, 1);  /* 0C0630A2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0630A4 add #imm,Rn */
	r1 = R32(r11); UPD(0x0C0630A8u, 2);  /* 0C0630A6 mov.l @Rm,Rn */
	r9 = 0x10000u; UPD(0x0C0630AAu, 1);  /* 0C0630A8 mov.l @(disp,pc),Rn */
	r13 += r1;  /* 0C0630AA add Rm,Rn */
	r13 += r9;  /* 0C0630AC add Rm,Rn */
	W32(r8, r13); UPD(0x0C0630B0u, 3);  /* 0C0630AE mov.l Rm,@Rn */
	r13 = 0xC3867F4u; UPD(0x0C0630B2u, 1);  /* 0C0630B0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0630B2 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C0630B6u, 2);  /* 0C0630B4 mov.l @Rm,Rn */
	r9 = R32(r13); UPD(0x0C0630B8u, 1);  /* 0C0630B6 mov.l @Rm,Rn */
	r9 |= r1;  /* 0C0630B8 or Rm,Rn */
	W32(r8, r9); UPD(0x0C0630BCu, 2);  /* 0C0630BA mov.l Rm,@Rn */
	r3 = R32(r12); UPD(0x0C0630BEu, 1);  /* 0C0630BC mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C0630C0u, 1);  /* 0C0630BE add #imm,Rn */
	r3 |= r7;  /* 0C0630C0 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0630C4u, 2);  /* 0C0630C2 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0630C4 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0630C8u, 2);  /* 0C0630C6 mov.l Rm,@Rn */
	r9 = R32(r0); UPD(0x0C0630CAu, 1);  /* 0C0630C8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0630CA add #imm,Rn */
	W32(r8, r9); UPD(0x0C0630CEu, 2);  /* 0C0630CC mov.l Rm,@Rn */
	r9 = 0xC21CA20u; UPD(0x0C0630D0u, 1);  /* 0C0630CE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0630D0 add #imm,Rn */
	r2 = R32(r9); UPD(0x0C0630D4u, 2);  /* 0C0630D2 mov.l @Rm,Rn */
	r2 += r7;  /* 0C0630D4 add Rm,Rn */
	r2 += 0x1u;  /* 0C0630D6 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0630DAu, 3);  /* 0C0630D8 mov.l Rm,@Rn */
	r10 = R32(r6); UPD(0x0C0630DCu, 1);  /* 0C0630DA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0630DC add #imm,Rn */
	r1 = R32(r5); UPD(0x0C0630E0u, 2);  /* 0C0630DE mov.l @Rm,Rn */
	r10 |= r1;  /* 0C0630E0 or Rm,Rn */
	W32(r8, r10); UPD(0x0C0630E4u, 2);  /* 0C0630E2 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C0630E6u, 1);  /* 0C0630E4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0630E6 add #imm,Rn */
	r0 |= r4;  /* 0C0630E8 or Rm,Rn */
	W32(r8, r0); UPD(0x0C0630ECu, 3);  /* 0C0630EA mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0630EEu, 1);  /* 0C0630EC mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0630EE add #imm,Rn */
	W32(r8, r0); UPD(0x0C0630F2u, 2);  /* 0C0630F0 mov.l Rm,@Rn */
	r3 = 0xC21CCE8u; UPD(0x0C0630F4u, 1);  /* 0C0630F2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0630F4 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C0630F8u, 2);  /* 0C0630F6 mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C0630FAu, 1);  /* 0C0630F8 mov.l Rm,@Rn */
	r1 = R32(r11); UPD(0x0C0630FCu, 1);  /* 0C0630FA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0630FC add #imm,Rn */
	r3 = R32(r9); UPD(0x0C063100u, 2);  /* 0C0630FE mov.l @Rm,Rn */
	r10 = 0x10001u; UPD(0x0C063102u, 1);  /* 0C063100 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C063102 add Rm,Rn */
	r3 += r7;  /* 0C063104 add Rm,Rn */
	r3 += r10;  /* 0C063106 add Rm,Rn */
	W32(r8, r3); UPD(0x0C06310Au, 4);  /* 0C063108 mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C06310Cu, 1);  /* 0C06310A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06310C add #imm,Rn */
	r9 = R32(r5); UPD(0x0C063110u, 2);  /* 0C06310E mov.l @Rm,Rn */
	r11 |= r9;  /* 0C063110 or Rm,Rn */
	W32(r8, r11); UPD(0x0C063114u, 2);  /* 0C063112 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C063116u, 1);  /* 0C063114 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063116 add #imm,Rn */
	r1 |= r4;  /* 0C063118 or Rm,Rn */
	UPD(0x0C06311Au, 2);
L_0C06311A: BLKS(0x0C06311Au);
	W32(r8, r1); UPD(0x0C06311Cu, 1);  /* 0C06311A mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C06311C add #imm,Rn */
	UPD(0x0C06311Eu, 1);
L_0C06311E: BLKS(0x0C06311Eu);
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 3); goto L_0C062E58; }  /* 0C06311E bra */
L_0C063160: BLKS(0x0C063160u);
	r3 += 0x1Fu;  /* 0C063160 add #imm,Rn */
	r9 = 0xC28629Cu; UPD(0x0C063164u, 2);  /* 0C063162 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C063164 mov Rm,Rn */
	r0 -= r3;  /* 0C063166 sub Rm,Rn */
	r12 = 0xC283CB0u; UPD(0x0C06316Au, 3);  /* 0C063168 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06316A add #imm,Rn */
	W16(r9, r3); UPD(0x0C06316Eu, 2);  /* 0C06316C mov.w Rm,@Rn */
	r1 = 0x4000u; UPD(0x0C063170u, 1);  /* 0C06316E mov.w @(disp,pc),Rn */
	r9 = r3;  /* 0C063170 mov Rm,Rn */
	T = r4 == r1;  /* 0C063172 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W16(r12, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06317Cu, 5); goto L_0C06317C; } UPD(0x0C063178u, 1); goto L_0C063178; }  /* 0C063174 bf/s */
L_0C063178: BLKS(0x0C063178u);
	{ r1 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C063350u, 3); goto L_0C063350; }  /* 0C063178 bra */
L_0C06317C: BLKS(0x0C06317Cu);
	T = (s32)r4 > (s32)r1;  /* 0C06317C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C063200u, 4); goto L_0C063200; } goto L_0C063182; }  /* 0C06317E bt/s */
L_0C063182: BLKS(0x0C063182u);
	{ u32 c_ = !T; r2 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063210u, 4); goto L_0C063210; } goto L_0C063186; }  /* 0C063182 bf/s */
L_0C063186: BLKS(0x0C063186u);
	r5 = 0xC284EBCu; UPD(0x0C063188u, 2);  /* 0C063186 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C06318Au, 1);  /* 0C063188 mov.w @Rm,Rn */
	r2 += r14;  /* 0C06318A add Rm,Rn */
	r3 = R32(r14 + 0x1Cu); UPD(0x0C06318Eu, 2);  /* 0C06318C mov.l @(disp,Rm),Rn */
	r6 = r9;  /* 0C06318E mov Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C063192u, 2);  /* 0C063190 mov.w @Rm,Rn */
	r12 += r3;  /* 0C063192 add Rm,Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C063196u, 2);  /* 0C063194 mov.l @(disp,Rm),Rn */
	IF(0x0C063196u); r12 <<= 16;  /* 0C063196 shll16 Rn */
	r11 = 0xC21CCF0u; UPD(0x0C06319Au, 2);  /* 0C063198 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C06319A add Rm,Rn */
	r12 |= r7;  /* 0C06319C or Rm,Rn */
	W32(r11, r12); UPD(0x0C0631A0u, 3);  /* 0C06319E mov.l Rm,@Rn */
	IF(0x0C0631A0u); r6 <<= 16;  /* 0C0631A0 shll16 Rn */
	r12 = 0xC21CC88u; UPD(0x0C0631A4u, 2);  /* 0C0631A2 mov.l @(disp,pc),Rn */
	IF(0x0C0631A4u); r0 <<= 16;  /* 0C0631A4 shll16 Rn */
	W32(r12, r6); UPD(0x0C0631A8u, 2);  /* 0C0631A6 mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C0631AAu, 1);  /* 0C0631A8 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C0631ACu, 1);  /* 0C0631AA mov.l Rm,@Rn */
	r4 = R32(r3); UPD(0x0C0631AEu, 1);  /* 0C0631AC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0631AE add #imm,Rn */
	W32(r8, r4); UPD(0x0C0631B2u, 2);  /* 0C0631B0 mov.l Rm,@Rn */
	r13 = R32(r11); UPD(0x0C0631B4u, 1);  /* 0C0631B2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0631B4 add #imm,Rn */
	W32(r8, r13); UPD(0x0C0631B8u, 2);  /* 0C0631B6 mov.l Rm,@Rn */
	r13 = R32(r14 + 0x28u); UPD(0x0C0631BAu, 1);  /* 0C0631B8 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0631BA add #imm,Rn */
	r10 = R32(r12); UPD(0x0C0631BEu, 2);  /* 0C0631BC mov.l @Rm,Rn */
	r0 |= r13;  /* 0C0631BE or Rm,Rn */
	r10 |= r13;  /* 0C0631C0 or Rm,Rn */
	W32(r8, r10); UPD(0x0C0631C4u, 3);  /* 0C0631C2 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C0631C6u, 1);  /* 0C0631C4 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0631C6 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0631CAu, 2);  /* 0C0631C8 mov.l Rm,@Rn */
	r5 = 0xC21CCE8u; UPD(0x0C0631CCu, 1);  /* 0C0631CA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0631CC add #imm,Rn */
	r9 = R32(r5); UPD(0x0C0631D0u, 2);  /* 0C0631CE mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C0631D2u, 1);  /* 0C0631D0 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C0631D4u, 1);  /* 0C0631D2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0631D4 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C0631D8u, 2);  /* 0C0631D6 mov.l @Rm,Rn */
	r1 = 0x10000u; UPD(0x0C0631DAu, 1);  /* 0C0631D8 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0631DA add Rm,Rn */
	r7 += r1;  /* 0C0631DC add Rm,Rn */
	W32(r8, r7); UPD(0x0C0631E0u, 3);  /* 0C0631DE mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C0631E2u, 1);  /* 0C0631E0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0631E2 add #imm,Rn */
	r6 = R32(r12); UPD(0x0C0631E6u, 2);  /* 0C0631E4 mov.l @Rm,Rn */
	r4 += r6;  /* 0C0631E6 add Rm,Rn */
	r4 += r1;  /* 0C0631E8 add Rm,Rn */
	W32(r8, r4); UPD(0x0C0631ECu, 3);  /* 0C0631EA mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0631EC add #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C062F5Au, 4); goto L_0C062F5A; }  /* 0C0631EE bra */
L_0C063200: BLKS(0x0C063200u);
	r11 = 0x8000u; UPD(0x0C063202u, 1);  /* 0C063200 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C063202 cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0632A0u, 4); goto L_0C0632A0; } goto L_0C063208; }  /* 0C063204 bt/s */
L_0C063208: BLKS(0x0C063208u);
	r5 = 0xC000u; UPD(0x0C06320Au, 2);  /* 0C063208 mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C06320A cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063214u, 4); goto L_0C063214; } UPD(0x0C063210u, 1); goto L_0C063210; }  /* 0C06320C bt/s */
L_0C063210: BLKS(0x0C063210u);
	{ IF(0x0C063212u); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C063210 bra */
L_0C063214: BLKS(0x0C063214u);
	r6 = 0xC284EBCu; UPD(0x0C063216u, 1);  /* 0C063214 mov.l @(disp,pc),Rn */
	r5 += r14;  /* 0C063216 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06321Au, 2);  /* 0C063218 mov.w @Rm,Rn */
	r2 = 0x36u;  /* 0C06321A mov #imm,Rn */
	r11 = R32(r14 + 0x20u); UPD(0x0C06321Eu, 2);  /* 0C06321C mov.l @(disp,Rm),Rn */
	r2 += r14;  /* 0C06321E add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C063222u, 2);  /* 0C063220 mov.w @Rm,Rn */
	r4 -= r11;  /* 0C063222 sub Rm,Rn */
	r10 = R32(r14 + 0x30u); UPD(0x0C063226u, 2);  /* 0C063224 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C063226 exts.w Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C06322Au, 2);  /* 0C063228 mov.l @(disp,Rm),Rn */
	r7 -= r10;  /* 0C06322A sub Rm,Rn */
	r11 = R32(r14 + 0x28u); UPD(0x0C06322Eu, 2);  /* 0C06322C mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C06322E add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C063232u, 2);  /* 0C063230 mov.w @Rm,Rn */
	r7 -= r1;  /* 0C063232 sub Rm,Rn */
	r4 -= r11;  /* 0C063234 sub Rm,Rn */
	r4 -= r3;  /* 0C063236 sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C063238 add #imm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06323A add #imm,Rn */
	IF(0x0C06323Cu); r7 <<= 16;  /* 0C06323C shll16 Rn */
	r7 |= r4;  /* 0C06323E or Rm,Rn */
	r12 = 0xC21CCF0u; UPD(0x0C063242u, 8);  /* 0C063240 mov.l @(disp,pc),Rn */
	IF(0x0C063242u); r6 <<= 16;  /* 0C063242 shll16 Rn */
	r4 = 0xC21CC88u; UPD(0x0C063246u, 2);  /* 0C063244 mov.l @(disp,pc),Rn */
	IF(0x0C063246u); r0 <<= 16;  /* 0C063246 shll16 Rn */
	r5 = 0xC28673Cu; UPD(0x0C06324Au, 2);  /* 0C063248 mov.l @(disp,pc),Rn */
	W32(r12, r7); UPD(0x0C06324Cu, 1);  /* 0C06324A mov.l Rm,@Rn */
	W32(r4, r6); UPD(0x0C06324Eu, 1);  /* 0C06324C mov.l Rm,@Rn */
	W32(r5, r0); UPD(0x0C063250u, 1);  /* 0C06324E mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C063252u, 1);  /* 0C063250 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C063254u, 1);  /* 0C063252 mov.l Rm,@Rn */
	r0 = R32(r3); UPD(0x0C063256u, 1);  /* 0C063254 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063256 add #imm,Rn */
	W32(r8, r0); UPD(0x0C06325Au, 2);  /* 0C063258 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C06325Cu, 1);  /* 0C06325A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06325C add #imm,Rn */
	W32(r8, r9); UPD(0x0C063260u, 2);  /* 0C06325E mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C063262u, 1);  /* 0C063260 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063262 add #imm,Rn */
	r10 |= r11;  /* 0C063264 or Rm,Rn */
	W32(r8, r10); UPD(0x0C063268u, 3);  /* 0C063266 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C06326Au, 1);  /* 0C063268 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06326A add #imm,Rn */
	W32(r8, r10); UPD(0x0C06326Eu, 2);  /* 0C06326C mov.l Rm,@Rn */
	r1 = 0xC21CCE8u; UPD(0x0C063270u, 1);  /* 0C06326E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063270 add #imm,Rn */
	r2 = R32(r1); UPD(0x0C063274u, 2);  /* 0C063272 mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C063276u, 1);  /* 0C063274 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C063278u, 1);  /* 0C063276 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063278 add #imm,Rn */
	r7 = R32(r4); UPD(0x0C06327Cu, 2);  /* 0C06327A mov.l @Rm,Rn */
	r0 = 0x10000u; UPD(0x0C06327Eu, 1);  /* 0C06327C mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C06327E add Rm,Rn */
	r13 += r0;  /* 0C063280 add Rm,Rn */
	W32(r8, r13); UPD(0x0C063284u, 3);  /* 0C063282 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C063286u, 1);  /* 0C063284 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063286 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C06328Au, 2);  /* 0C063288 mov.l @Rm,Rn */
	r9 -= r6;  /* 0C06328A sub Rm,Rn */
	r9 -= r0;  /* 0C06328C sub Rm,Rn */
	W32(r8, r9); UPD(0x0C063290u, 3);  /* 0C06328E mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C063292u, 1);  /* 0C063290 mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C063294u, 1);  /* 0C063292 add #imm,Rn */
	{ r1 |= r11; /* slot or Rm,Rn */ UPD(0x0C062F58u, 3); goto L_0C062F58; }  /* 0C063294 bra */
L_0C0632A0: BLKS(0x0C0632A0u);
	r2 = 0xC284EBCu; UPD(0x0C0632A2u, 1);  /* 0C0632A0 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r3;  /* 0C0632A2 exts.w Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0632A6u, 2);  /* 0C0632A4 mov.w @Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0632A8u, 1);  /* 0C0632A6 mov.l @(disp,Rm),Rn */
	r9 += r14;  /* 0C0632A8 add Rm,Rn */
	r5 -= r1;  /* 0C0632AA sub Rm,Rn */
	r3 = R32(r14 + 0x30u); UPD(0x0C0632AEu, 3);  /* 0C0632AC mov.l @(disp,Rm),Rn */
	r5 -= r4;  /* 0C0632AE sub Rm,Rn */
	r5 -= r3;  /* 0C0632B0 sub Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0632B4u, 3);  /* 0C0632B2 mov.w @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0632B4 add #imm,Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C0632B8u, 2);  /* 0C0632B6 mov.l @(disp,Rm),Rn */
	IF(0x0C0632B8u); r5 <<= 16;  /* 0C0632B8 shll16 Rn */
	r12 = 0xC21CCF0u; UPD(0x0C0632BCu, 2);  /* 0C0632BA mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0632BC add Rm,Rn */
	r5 |= r6;  /* 0C0632BE or Rm,Rn */
	W32(r12, r5); UPD(0x0C0632C2u, 3);  /* 0C0632C0 mov.l Rm,@Rn */
	IF(0x0C0632C2u); r4 <<= 16;  /* 0C0632C2 shll16 Rn */
	r5 = 0xC21CC88u; UPD(0x0C0632C6u, 2);  /* 0C0632C4 mov.l @(disp,pc),Rn */
	IF(0x0C0632C6u); r0 <<= 16;  /* 0C0632C6 shll16 Rn */
	r9 = 0xC28673Cu; UPD(0x0C0632CAu, 2);  /* 0C0632C8 mov.l @(disp,pc),Rn */
	W32(r5, r4); UPD(0x0C0632CCu, 1);  /* 0C0632CA mov.l Rm,@Rn */
	W32(r9, r0); UPD(0x0C0632CEu, 1);  /* 0C0632CC mov.l Rm,@Rn */
	r7 = 0xC21CA20u; UPD(0x0C0632D0u, 1);  /* 0C0632CE mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C0632D2u, 1);  /* 0C0632D0 mov.l Rm,@Rn */
	r10 = R32(r7); UPD(0x0C0632D4u, 1);  /* 0C0632D2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0632D4 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0632D8u, 2);  /* 0C0632D6 mov.l Rm,@Rn */
	r11 = R32(r12); UPD(0x0C0632DAu, 1);  /* 0C0632D8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0632DA add #imm,Rn */
	W32(r8, r11); UPD(0x0C0632DEu, 2);  /* 0C0632DC mov.l Rm,@Rn */
	r11 = R32(r14 + 0x28u); UPD(0x0C0632E0u, 1);  /* 0C0632DE mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0632E0 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C0632E4u, 2);  /* 0C0632E2 mov.l @Rm,Rn */
	r0 |= r11;  /* 0C0632E4 or Rm,Rn */
	W32(r8, r0); UPD(0x0C0632E8u, 2);  /* 0C0632E6 mov.l Rm,@Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0632EAu, 1);  /* 0C0632E8 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0632EA add #imm,Rn */
	W32(r8, r2); UPD(0x0C0632EEu, 2);  /* 0C0632EC mov.l Rm,@Rn */
	r1 = 0xC21CCE8u; UPD(0x0C0632F0u, 1);  /* 0C0632EE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0632F0 add #imm,Rn */
	r3 = R32(r1); UPD(0x0C0632F4u, 2);  /* 0C0632F2 mov.l @Rm,Rn */
	W32(r8, r3); UPD(0x0C0632F6u, 1);  /* 0C0632F4 mov.l Rm,@Rn */
	r4 = R32(r7); UPD(0x0C0632F8u, 1);  /* 0C0632F6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0632F8 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C0632FCu, 2);  /* 0C0632FA mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C0632FEu, 1);  /* 0C0632FC mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C0632FE add Rm,Rn */
	r4 += r10;  /* 0C063300 add Rm,Rn */
	W32(r8, r4); UPD(0x0C063304u, 3);  /* 0C063302 mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C063306u, 1);  /* 0C063304 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063306 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C06330Au, 2);  /* 0C063308 mov.l @Rm,Rn */
	r0 -= r13;  /* 0C06330A sub Rm,Rn */
	r0 -= r10;  /* 0C06330C sub Rm,Rn */
	W32(r8, r0); UPD(0x0C063310u, 3);  /* 0C06330E mov.l Rm,@Rn */
	r1 = R32(r9); UPD(0x0C063312u, 1);  /* 0C063310 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063312 add #imm,Rn */
	r1 |= r11;  /* 0C063314 or Rm,Rn */
	UPD(0x0C063316u, 2);
L_0C063316: BLKS(0x0C063316u);
	W32(r8, r1); UPD(0x0C063318u, 1);  /* 0C063316 mov.l Rm,@Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C06331Au, 1);  /* 0C063318 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06331A add #imm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 4); goto L_0C062E58; }  /* 0C06331C bra */
L_0C063350: BLKS(0x0C063350u);
	r1 += r14;  /* 0C063350 add Rm,Rn */
	r12 = 0xC284EBCu; UPD(0x0C063354u, 2);  /* 0C063352 mov.l @(disp,pc),Rn */
	r7 = 0x36u;  /* 0C063354 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C063358u, 2);  /* 0C063356 mov.w @Rm,Rn */
	r7 += r14;  /* 0C063358 add Rm,Rn */
	r3 = R32(r14 + 0x20u); UPD(0x0C06335Cu, 2);  /* 0C06335A mov.l @(disp,Rm),Rn */
	IF(0x0C06335Cu); r0 <<= 16;  /* 0C06335C shll16 Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C063360u, 2);  /* 0C06335E mov.l @(disp,Rm),Rn */
	r5 -= r3;  /* 0C063360 sub Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C063364u, 2);  /* 0C063362 mov.w @Rm,Rn */
	r5 -= r4;  /* 0C063364 sub Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C063368u, 2);  /* 0C063366 mov.w @Rm,Rn */
	r5 -= r10;  /* 0C063368 sub Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C06336Cu, 2);  /* 0C06336A mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C06336C add #imm,Rn */
	r11 += r2;  /* 0C06336E add Rm,Rn */
	IF(0x0C063370u); r11 <<= 16;  /* 0C063370 shll16 Rn */
	r11 |= r5;  /* 0C063372 or Rm,Rn */
	r5 = 0xC21CC88u; UPD(0x0C063376u, 5);  /* 0C063374 mov.l @(disp,pc),Rn */
	r12 = r9;  /* 0C063376 mov Rm,Rn */
	IF(0x0C063378u); r12 <<= 16;  /* 0C063378 shll16 Rn */
	W32(r5, r12); UPD(0x0C06337Cu, 3);  /* 0C06337A mov.l Rm,@Rn */
	r6 = 0xC21CCF0u; UPD(0x0C06337Eu, 1);  /* 0C06337C mov.l @(disp,pc),Rn */
	r12 = 0xC28673Cu; UPD(0x0C063380u, 1);  /* 0C06337E mov.l @(disp,pc),Rn */
	W32(r6, r11); UPD(0x0C063382u, 1);  /* 0C063380 mov.l Rm,@Rn */
	W32(r12, r0); UPD(0x0C063384u, 1);  /* 0C063382 mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C063386u, 1);  /* 0C063384 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C063388u, 1);  /* 0C063386 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C06338Au, 1);  /* 0C063388 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06338A add #imm,Rn */
	W32(r8, r13); UPD(0x0C06338Eu, 2);  /* 0C06338C mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C063390u, 1);  /* 0C06338E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063390 add #imm,Rn */
	W32(r8, r2); UPD(0x0C063394u, 2);  /* 0C063392 mov.l Rm,@Rn */
	r13 = R32(r14 + 0x28u); UPD(0x0C063396u, 1);  /* 0C063394 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063396 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C06339Au, 2);  /* 0C063398 mov.l @Rm,Rn */
	r0 |= r13;  /* 0C06339A or Rm,Rn */
	W32(r8, r0); UPD(0x0C06339Eu, 2);  /* 0C06339C mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0633A0u, 1);  /* 0C06339E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0633A0 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0633A4u, 2);  /* 0C0633A2 mov.l Rm,@Rn */
	r1 = 0xC21CCE8u; UPD(0x0C0633A6u, 1);  /* 0C0633A4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0633A6 add #imm,Rn */
	r11 = R32(r1); UPD(0x0C0633AAu, 2);  /* 0C0633A8 mov.l @Rm,Rn */
	W32(r8, r11); UPD(0x0C0633ACu, 1);  /* 0C0633AA mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C0633AEu, 1);  /* 0C0633AC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0633AE add #imm,Rn */
	r9 = R32(r5); UPD(0x0C0633B2u, 2);  /* 0C0633B0 mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C0633B4u, 1);  /* 0C0633B2 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C0633B4 add Rm,Rn */
	r7 += r10;  /* 0C0633B6 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0633BAu, 3);  /* 0C0633B8 mov.l Rm,@Rn */
	r11 = R32(r6); UPD(0x0C0633BCu, 1);  /* 0C0633BA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0633BC add #imm,Rn */
	r4 = R32(r5); UPD(0x0C0633C0u, 2);  /* 0C0633BE mov.l @Rm,Rn */
	r11 += r4;  /* 0C0633C0 add Rm,Rn */
	r11 += r10;  /* 0C0633C2 add Rm,Rn */
	W32(r8, r11); UPD(0x0C0633C6u, 3);  /* 0C0633C4 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C0633C8u, 1);  /* 0C0633C6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0633C8 add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C06311Au, 4); goto L_0C06311A; }  /* 0C0633CA bra */
L_0C0633D0: BLKS(0x0C0633D0u);
	r0 = r5;  /* 0C0633D0 mov Rm,Rn */
	r5 += r1;  /* 0C0633D2 add Rm,Rn */
	r0 &= r6;  /* 0C0633D4 and Rm,Rn */
	r5 &= r6;  /* 0C0633D6 and Rm,Rn */
	T = r0 == r5;  /* 0C0633D8 cmp/eq Rm,Rn */
	r0 = r10;  /* 0C0633DA mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C0633DC negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0633DE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0633E0 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0633E2 negc Rm,Rn */
	T = (r7 & r9) == 0;  /* 0C0633E4 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r0; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C0633EEu, 14); goto L_0C0633EE; } goto L_0C0633EA; }  /* 0C0633E6 bf/s */
L_0C0633EA: BLKS(0x0C0633EAu);
	{ IF(0x0C0633ECu); ; /* slot nop */ UPD(0x0C0636D0u, 4); goto L_0C0636D0; }  /* 0C0633EA bra */
L_0C0633EE: BLKS(0x0C0633EEu);
	r10 = 0xC275570u; UPD(0x0C0633F0u, 1);  /* 0C0633EE mov.l @(disp,pc),Rn */
	r5 += 0x1Fu;  /* 0C0633F0 add #imm,Rn */
	W16(r10, r5); UPD(0x0C0633F4u, 2);  /* 0C0633F2 mov.w Rm,@Rn */
	r0 = r11;  /* 0C0633F4 mov Rm,Rn */
	r0 -= r5;  /* 0C0633F6 sub Rm,Rn */
	r7 = r5;  /* 0C0633F8 mov Rm,Rn */
	r3 = 0xC392DE4u; UPD(0x0C0633FCu, 4);  /* 0C0633FA mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0633FC add #imm,Rn */
	r5 = 0xC283C9Cu; UPD(0x0C063400u, 2);  /* 0C0633FE mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C063402u, 1);  /* 0C063400 mov.l @(disp,Rm),Rn */
	r1 = 0x4000u; UPD(0x0C063404u, 1);  /* 0C063402 mov.w @(disp,pc),Rn */
	W16(r3, r0); UPD(0x0C063406u, 1);  /* 0C063404 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C063406 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r5, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063410u, 4); goto L_0C063410; } UPD(0x0C06340Cu, 1); goto L_0C06340C; }  /* 0C063408 bf/s */
L_0C06340C: BLKS(0x0C06340Cu);
	{ r10 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C0636B0u, 3); goto L_0C0636B0; }  /* 0C06340C bra */
L_0C063410: BLKS(0x0C063410u);
	T = (s32)r4 > (s32)r1;  /* 0C063410 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06341Au, 4); goto L_0C06341A; } goto L_0C063416; }  /* 0C063412 bf/s */
L_0C063416: BLKS(0x0C063416u);
	{ IF(0x0C063418u); ; /* slot nop */ UPD(0x0C0635B0u, 4); goto L_0C0635B0; }  /* 0C063416 bra */
L_0C06341A: BLKS(0x0C06341Au);
	{ u32 c_ = !T; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0634F8u, 3); goto L_0C0634F8; } UPD(0x0C06341Eu, 1); goto L_0C06341E; }  /* 0C06341A bf/s */
L_0C06341E: BLKS(0x0C06341Eu);
	r2 = 0xFF000000u; UPD(0x0C063420u, 1);  /* 0C06341E mov.l @(disp,pc),Rn */
	r12 = 0x1000000u; UPD(0x0C063422u, 1);  /* 0C063420 mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C063422 and Rm,Rn */
	T = r2 == r12;  /* 0C063424 cmp/eq Rm,Rn */
	{ u32 c_ = T; r12 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063500u, 5); goto L_0C063500; } UPD(0x0C06342Au, 1); goto L_0C06342A; }  /* 0C063426 bt/s */
L_0C06342A: BLKS(0x0C06342Au);
	r6 = 0x2000000u; UPD(0x0C06342Cu, 1);  /* 0C06342A mov.l @(disp,pc),Rn */
	T = r2 == r6;  /* 0C06342C cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063490u, 4); goto L_0C063490; } goto L_0C063432; }  /* 0C06342E bt/s */
L_0C063432: BLKS(0x0C063432u);
	r1 = 0xC284EBCu; UPD(0x0C063434u, 2);  /* 0C063432 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C063436u, 1);  /* 0C063434 mov.w @Rm,Rn */
	r9 += r14;  /* 0C063436 add Rm,Rn */
	r10 = R32(r14 + 0x1Cu); UPD(0x0C06343Au, 2);  /* 0C063438 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C06343Cu, 1);  /* 0C06343A mov.w @Rm,Rn */
	r11 += r10;  /* 0C06343C add Rm,Rn */
	r3 = R32(r14 + 0x20u); UPD(0x0C063440u, 2);  /* 0C06343E mov.l @(disp,Rm),Rn */
	IF(0x0C063440u); r11 <<= 16;  /* 0C063440 shll16 Rn */
	r12 = 0xC21CCF0u; UPD(0x0C063444u, 2);  /* 0C063442 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C063444 add Rm,Rn */
	r11 |= r2;  /* 0C063446 or Rm,Rn */
	W32(r12, r11); UPD(0x0C06344Au, 3);  /* 0C063448 mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C06344Cu, 1);  /* 0C06344A mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C06344C exts.w Rm,Rn */
	W32(r8, r13); UPD(0x0C063450u, 2);  /* 0C06344E mov.l Rm,@Rn */
	r6 = R32(r3); UPD(0x0C063452u, 1);  /* 0C063450 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063452 add #imm,Rn */
	W32(r8, r6); UPD(0x0C063456u, 2);  /* 0C063454 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C063456 exts.w Rm,Rn */
	r4 = R32(r12); UPD(0x0C06345Au, 2);  /* 0C063458 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06345A add #imm,Rn */
	W32(r8, r4); UPD(0x0C06345Eu, 2);  /* 0C06345C mov.l Rm,@Rn */
	r10 = R32(r5); UPD(0x0C063460u, 1);  /* 0C06345E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063460 add #imm,Rn */
	r10 |= r11;  /* 0C063462 or Rm,Rn */
	W32(r8, r10); UPD(0x0C063466u, 3);  /* 0C063464 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C063468u, 1);  /* 0C063466 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063468 add #imm,Rn */
	W32(r8, r10); UPD(0x0C06346Cu, 2);  /* 0C06346A mov.l Rm,@Rn */
	r1 = 0xC21CCE8u; UPD(0x0C06346Eu, 1);  /* 0C06346C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06346E add #imm,Rn */
	r9 = R32(r1); UPD(0x0C063472u, 2);  /* 0C063470 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C063474u, 1);  /* 0C063472 mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C063476u, 1);  /* 0C063474 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063476 add #imm,Rn */
	r2 += r11;  /* 0C063478 add Rm,Rn */
	r2 += 0x1u;  /* 0C06347A add #imm,Rn */
	W32(r8, r2); UPD(0x0C06347Eu, 4);  /* 0C06347C mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C063480u, 1);  /* 0C06347E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063480 add #imm,Rn */
	r7 += r11;  /* 0C063482 add Rm,Rn */
	r7 += 0x1u;  /* 0C063484 add #imm,Rn */
	W32(r8, r7); UPD(0x0C063488u, 4);  /* 0C063486 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C06348Au, 1);  /* 0C063488 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06348A add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C062F58u, 4); goto L_0C062F58; }  /* 0C06348C bra */
L_0C063490: BLKS(0x0C063490u);
	r10 = 0xC284EBCu; UPD(0x0C063492u, 1);  /* 0C063490 mov.l @(disp,pc),Rn */
	r13 = 0xC2177F6u; UPD(0x0C063494u, 1);  /* 0C063492 mov.l @(disp,pc),Rn */
	r11 = 0xC21F7EAu; UPD(0x0C063496u, 1);  /* 0C063494 mov.l @(disp,pc),Rn */
	r4 = 0xC286294u; UPD(0x0C063498u, 1);  /* 0C063496 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C06349Au, 1);  /* 0C063498 mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C06349Cu, 1);  /* 0C06349A mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C06349Eu, 1);  /* 0C06349C mov.w @Rm,Rn */
	r7 += r9;  /* 0C06349E add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r4); UPD(0x0C0634A2u, 2);  /* 0C0634A0 mov.w @Rm,Rn */
	IF(0x0C0634A2u); r7 <<= 16;  /* 0C0634A2 shll16 Rn */
	r6 += r12;  /* 0C0634A4 add Rm,Rn */
	r5 = 0xC392AF0u; UPD(0x0C0634A8u, 3);  /* 0C0634A6 mov.l @(disp,pc),Rn */
	r7 |= r6;  /* 0C0634A8 or Rm,Rn */
	r2 = 0xC28671Cu; UPD(0x0C0634ACu, 2);  /* 0C0634AA mov.l @(disp,pc),Rn */
	r3 = 0xFFFF0000u; UPD(0x0C0634AEu, 1);  /* 0C0634AC mov.l @(disp,pc),Rn */
	r6 = R32(r5); UPD(0x0C0634B0u, 1);  /* 0C0634AE mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0634B2u, 1);  /* 0C0634B0 mov.w @Rm,Rn */
	r6 &= r3;  /* 0C0634B2 and Rm,Rn */
	IF(0x0C0634B4u); T = (s32)r1 >= 0;  /* 0C0634B4 cmp/pz Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0634F8u, 5); goto L_0C0634F8; } goto L_0C0634BA; }  /* 0C0634B6 bf/s */
L_0C0634BA: BLKS(0x0C0634BAu);
	r0 = 0xC21CCE8u; UPD(0x0C0634BCu, 2);  /* 0C0634BA mov.l @(disp,pc),Rn */
	r5 = r1;  /* 0C0634BC mov Rm,Rn */
	r4 = 0xC21CA20u; UPD(0x0C0634C0u, 2);  /* 0C0634BE mov.l @(disp,pc),Rn */
L_0C0634C0: BLKS(0x0C0634C0u);
	r10 = 0x40u;  /* 0C0634C0 mov #imm,Rn */
	r10 += r14;  /* 0C0634C2 add Rm,Rn */
	r2 = R32(r10 + 0x14u); UPD(0x0C0634C6u, 3);  /* 0C0634C4 mov.l @(disp,Rm),Rn */
	r11 = r7;  /* 0C0634C6 mov Rm,Rn */
	r9 = R32(r0); UPD(0x0C0634CAu, 2);  /* 0C0634C8 mov.l @Rm,Rn */
	r2 += 0x4u;  /* 0C0634CA add #imm,Rn */
	W32(r10 + 0x14u, r2); UPD(0x0C0634CEu, 2);  /* 0C0634CC mov.l Rm,@(disp,Rn) */
	r11 += r3;  /* 0C0634CE add Rm,Rn */
	W32(r8, r9); UPD(0x0C0634D2u, 2);  /* 0C0634D0 mov.l Rm,@Rn */
	r2 += 0xFFFFFFFCu;  /* 0C0634D2 add #imm,Rn */
	{ u32 v_ = R32(r2); r2 += 4; r1 = v_; } UPD(0x0C0634D6u, 2);  /* 0C0634D4 mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C0634D6 add #imm,Rn */
	r13 = R32(r4); UPD(0x0C0634DAu, 2);  /* 0C0634D8 mov.l @Rm,Rn */
	r2 = r3;  /* 0C0634DA mov Rm,Rn */
	r13 += r1;  /* 0C0634DC add Rm,Rn */
	W32(r8, r13); UPD(0x0C0634E0u, 3);  /* 0C0634DE mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0634E0 add #imm,Rn */
	r8 += 0x4u;  /* 0C0634E2 add #imm,Rn */
	W32(r8, r11); UPD(0x0C0634E6u, 3);  /* 0C0634E4 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C0634E6 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C0634E8 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0634ECu, 3);  /* 0C0634EA mov.l Rm,@Rn */
	T = (s32)r5 >= (s32)r3;  /* 0C0634EC cmp/ge Rm,Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C0634F0u, 2);  /* 0C0634EE mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0634F0 add #imm,Rn */
	W32(r8, r12); UPD(0x0C0634F4u, 2);  /* 0C0634F2 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0634C0u, 3); goto L_0C0634C0; } UPD(0x0C0634F8u, 1); goto L_0C0634F8; }  /* 0C0634F4 bt/s */
L_0C0634F8: BLKS(0x0C0634F8u);
	{ IF(0x0C0634FAu); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C0634F8 bra */
L_0C063500: BLKS(0x0C063500u);
	r4 = 0xC284EBCu; UPD(0x0C063502u, 1);  /* 0C063500 mov.l @(disp,pc),Rn */
	r0 = 0x1Au;  /* 0C063502 mov #imm,Rn */
	IF(0x0C063504u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063506u, 2);  /* 0C063504 mov.w @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C063506 mov #imm,Rn */
	r5 = R32(r14 + 0x2Cu); UPD(0x0C06350Au, 2);  /* 0C063508 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFF0000u; UPD(0x0C06350Cu, 1);  /* 0C06350A mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C06350Eu, 1);  /* 0C06350C mov.w @Rm,Rn */
	r6 &= r5;  /* 0C06350E and Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C063512u, 2);  /* 0C063510 mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C063512 add Rm,Rn */
	r4 = 0xC21CCE8u; UPD(0x0C063516u, 2);  /* 0C063514 mov.l @(disp,pc),Rn */
	IF(0x0C063516u); r7 <<= 16;  /* 0C063516 shll16 Rn */
	r2 = 0xC21CA20u; UPD(0x0C06351Au, 2);  /* 0C063518 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C06351A add Rm,Rn */
	r5 = R32(r14 + 0x28u); UPD(0x0C06351Eu, 2);  /* 0C06351C mov.l @(disp,Rm),Rn */
	r7 |= r13;  /* 0C06351E or Rm,Rn */
	UPD(0x0C063520u, 1);
L_0C063520: BLKS(0x0C063520u);
	r0 = R32(r4); UPD(0x0C063522u, 1);  /* 0C063520 mov.l @Rm,Rn */
	r11 = r3;  /* 0C063522 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C063526u, 2);  /* 0C063524 mov.l Rm,@Rn */
	r11 += 0x1u;  /* 0C063526 add #imm,Rn */
	r0 = 0x54u;  /* 0C063528 mov #imm,Rn */
	IF(0x0C06352Au); r1 = R32(r0 + r14); UPD(0x0C06352Cu, 3);  /* 0C06352A mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C06352C add #imm,Rn */
	r10 = R32(r2); UPD(0x0C063530u, 2);  /* 0C06352E mov.l @Rm,Rn */
	r1 += 0x4u;  /* 0C063530 add #imm,Rn */
	r10 += r3;  /* 0C063532 add Rm,Rn */
	IF(0x0C063534u); W32(r0 + r14, r1); UPD(0x0C063536u, 3);  /* 0C063534 mov.l Rm,@(r0,Rn) */
	W32(r8, r10); UPD(0x0C063538u, 1);  /* 0C063536 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C063538 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r13 = v_; } UPD(0x0C06353Cu, 2);  /* 0C06353A mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C06353C add #imm,Rn */
	r13 += r7;  /* 0C06353E add Rm,Rn */
	r13 += r3;  /* 0C063540 add Rm,Rn */
	W32(r8, r13); UPD(0x0C063544u, 4);  /* 0C063542 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r11;  /* 0C063544 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C063546 add #imm,Rn */
	W32(r8, r6); UPD(0x0C06354Au, 3);  /* 0C063548 mov.l Rm,@Rn */
	T = (s32)r5 >= (s32)r3;  /* 0C06354A cmp/ge Rm,Rn */
	r9 = R32(r14 + 0xCu); UPD(0x0C06354Eu, 2);  /* 0C06354C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06354E add #imm,Rn */
	W32(r8, r9); UPD(0x0C063552u, 2);  /* 0C063550 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063520u, 3); goto L_0C063520; } UPD(0x0C063556u, 1); goto L_0C063556; }  /* 0C063552 bt/s */
L_0C063556: BLKS(0x0C063556u);
	{ IF(0x0C063558u); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C063556 bra */
L_0C0635B0: BLKS(0x0C0635B0u);
	r11 = 0x8000u; UPD(0x0C0635B2u, 1);  /* 0C0635B0 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C0635B2 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C063630u, 4); goto L_0C063630; }  /* 0C0635B4 bt */
L_0C0635B6: BLKS(0x0C0635B6u);
	r9 = 0xC000u; UPD(0x0C0635B8u, 1);  /* 0C0635B6 mov.l @(disp,pc),Rn */
	T = r4 == r9;  /* 0C0635B8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C063556u, 4); goto L_0C063556; } goto L_0C0635BE; }  /* 0C0635BA bf/s */
L_0C0635BE: BLKS(0x0C0635BEu);
	r10 = 0xC284EBCu; UPD(0x0C0635C0u, 2);  /* 0C0635BE mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0635C2u, 1);  /* 0C0635C0 mov.w @Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C0635C4u, 1);  /* 0C0635C2 mov.l @(disp,Rm),Rn */
	r3 -= r2;  /* 0C0635C4 sub Rm,Rn */
	r3 -= r12;  /* 0C0635C6 sub Rm,Rn */
	r12 = 0x1Au;  /* 0C0635C8 mov #imm,Rn */
	r11 = R32(r14 + 0x30u); UPD(0x0C0635CCu, 4);  /* 0C0635CA mov.l @(disp,Rm),Rn */
	r12 += r14;  /* 0C0635CC add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C0635D0u, 2);  /* 0C0635CE mov.w @Rm,Rn */
	r3 -= r11;  /* 0C0635D0 sub Rm,Rn */
	r9 = R32(r14 + 0x20u); UPD(0x0C0635D4u, 2);  /* 0C0635D2 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0635D4 add #imm,Rn */
	r6 = 0xC21CCF0u; UPD(0x0C0635D8u, 2);  /* 0C0635D6 mov.l @(disp,pc),Rn */
	r1 -= r9;  /* 0C0635D8 sub Rm,Rn */
	IF(0x0C0635DAu); r3 <<= 16;  /* 0C0635DA shll16 Rn */
	r1 -= r7;  /* 0C0635DC sub Rm,Rn */
	UPD(0x0C0635DEu, 3);
L_0C0635DE: BLKS(0x0C0635DEu);
	r12 = 0x36u;  /* 0C0635DE mov #imm,Rn */
	r12 += r14;  /* 0C0635E0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C0635E4u, 3);  /* 0C0635E2 mov.w @Rm,Rn */
	r1 -= r4;  /* 0C0635E4 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0635E6 add #imm,Rn */
	r3 |= r1;  /* 0C0635E8 or Rm,Rn */
	W32(r6, r3); UPD(0x0C0635ECu, 4);  /* 0C0635EA mov.l Rm,@Rn */
	r4 = 0xC21CA20u; UPD(0x0C0635EEu, 1);  /* 0C0635EC mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C0635F0u, 1);  /* 0C0635EE mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C0635F2u, 1);  /* 0C0635F0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0635F2 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0635F6u, 2);  /* 0C0635F4 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0635F6 exts.w Rm,Rn */
	r2 = R32(r6); UPD(0x0C0635FAu, 2);  /* 0C0635F8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0635FA add #imm,Rn */
	W32(r8, r2); UPD(0x0C0635FEu, 2);  /* 0C0635FC mov.l Rm,@Rn */
	r11 = R32(r5); UPD(0x0C063600u, 1);  /* 0C0635FE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063600 add #imm,Rn */
	r11 |= r7;  /* 0C063602 or Rm,Rn */
	W32(r8, r11); UPD(0x0C063606u, 3);  /* 0C063604 mov.l Rm,@Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C063608u, 1);  /* 0C063606 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063608 add #imm,Rn */
	W32(r8, r12); UPD(0x0C06360Cu, 2);  /* 0C06360A mov.l Rm,@Rn */
	r1 = 0xC21CCE8u; UPD(0x0C06360Eu, 1);  /* 0C06360C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06360E add #imm,Rn */
	r9 = R32(r1); UPD(0x0C063612u, 2);  /* 0C063610 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C063614u, 1);  /* 0C063612 mov.l Rm,@Rn */
	r3 = R32(r4); UPD(0x0C063616u, 1);  /* 0C063614 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063616 add #imm,Rn */
	r3 += r7;  /* 0C063618 add Rm,Rn */
	r3 += 0x1u;  /* 0C06361A add #imm,Rn */
	W32(r8, r3); UPD(0x0C06361Eu, 4);  /* 0C06361C mov.l Rm,@Rn */
	r7 = R32(r6); UPD(0x0C063620u, 1);  /* 0C06361E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063620 add #imm,Rn */
	r7 -= r13;  /* 0C063622 sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C063624 add #imm,Rn */
	W32(r8, r7); UPD(0x0C063628u, 4);  /* 0C063626 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C06362Au, 1);  /* 0C063628 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06362A add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C063316u, 4); goto L_0C063316; }  /* 0C06362C bra */
L_0C063630: BLKS(0x0C063630u);
	r11 = 0xC284EBCu; UPD(0x0C063632u, 1);  /* 0C063630 mov.l @(disp,pc),Rn */
	r3 = 0xC2177F6u; UPD(0x0C063634u, 1);  /* 0C063632 mov.l @(disp,pc),Rn */
	r0 = 0xC27556Eu; UPD(0x0C063636u, 1);  /* 0C063634 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C063638u, 1);  /* 0C063636 mov.w @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C06363Au, 1);  /* 0C063638 mov.w @Rm,Rn */
	r4 = 0xC26C8D4u; UPD(0x0C06363Cu, 1);  /* 0C06363A mov.l @(disp,pc),Rn */
	r5 -= r12;  /* 0C06363C sub Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C063640u, 2);  /* 0C06363E mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C063642u, 1);  /* 0C063640 mov.w @Rm,Rn */
	r5 -= r7;  /* 0C063642 sub Rm,Rn */
	r10 = 0xC21F7EAu; UPD(0x0C063646u, 2);  /* 0C063644 mov.l @(disp,pc),Rn */
	r5 -= r9;  /* 0C063646 sub Rm,Rn */
	r2 = 0xC286294u; UPD(0x0C06364Au, 2);  /* 0C063648 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C06364A add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C06364Eu, 2);  /* 0C06364C mov.w @Rm,Rn */
	IF(0x0C06364Eu); r5 <<= 16;  /* 0C06364E shll16 Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C063652u, 2);  /* 0C063650 mov.w @Rm,Rn */
	r13 = 0xC21CCF0u; UPD(0x0C063654u, 1);  /* 0C063652 mov.l @(disp,pc),Rn */
	r11 += r6;  /* 0C063654 add Rm,Rn */
	r9 = 0xC21CCE8u; UPD(0x0C063658u, 2);  /* 0C063656 mov.l @(disp,pc),Rn */
	r5 |= r11;  /* 0C063658 or Rm,Rn */
	W32(r13, r5); UPD(0x0C06365Cu, 2);  /* 0C06365A mov.l Rm,@Rn */
	r3 = R32(r9); UPD(0x0C06365Eu, 1);  /* 0C06365C mov.l @Rm,Rn */
	r2 = 0xC21CA20u; UPD(0x0C063660u, 1);  /* 0C06365E mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C063662u, 1);  /* 0C063660 mov.l Rm,@Rn */
	r12 = R32(r2); UPD(0x0C063664u, 1);  /* 0C063662 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063664 add #imm,Rn */
	W32(r8, r12); UPD(0x0C063668u, 2);  /* 0C063666 mov.l Rm,@Rn */
	r0 = R32(r13); UPD(0x0C06366Au, 1);  /* 0C063668 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06366A add #imm,Rn */
	W32(r8, r0); UPD(0x0C06366Eu, 2);  /* 0C06366C mov.l Rm,@Rn */
	r12 = 0xC283C9Cu; UPD(0x0C063670u, 1);  /* 0C06366E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063670 add #imm,Rn */
	r7 = 0xC275570u; UPD(0x0C063674u, 2);  /* 0C063672 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C063676u, 1);  /* 0C063674 mov.l @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r7); UPD(0x0C063678u, 1);  /* 0C063676 mov.w @Rm,Rn */
	r4 |= r11;  /* 0C063678 or Rm,Rn */
	W32(r8, r4); UPD(0x0C06367Cu, 2);  /* 0C06367A mov.l Rm,@Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C06367Eu, 1);  /* 0C06367C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06367E add #imm,Rn */
	W32(r8, r4); UPD(0x0C063682u, 2);  /* 0C063680 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C063684u, 1);  /* 0C063682 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063684 add #imm,Rn */
	W32(r8, r10); UPD(0x0C063688u, 2);  /* 0C063686 mov.l Rm,@Rn */
	r6 = R32(r2); UPD(0x0C06368Au, 1);  /* 0C063688 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06368A add #imm,Rn */
	r6 += r11;  /* 0C06368C add Rm,Rn */
	r6 += 0x1u;  /* 0C06368E add #imm,Rn */
	W32(r8, r6); UPD(0x0C063692u, 4);  /* 0C063690 mov.l Rm,@Rn */
	r5 = R32(r13); UPD(0x0C063694u, 1);  /* 0C063692 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063694 add #imm,Rn */
	r5 += r11;  /* 0C063696 add Rm,Rn */
	r5 += 0x1u;  /* 0C063698 add #imm,Rn */
	W32(r8, r5); UPD(0x0C06369Cu, 4);  /* 0C06369A mov.l Rm,@Rn */
	r3 = 0xC392DE4u; UPD(0x0C06369Eu, 1);  /* 0C06369C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06369E add #imm,Rn */
	r7 = R32(r12); UPD(0x0C0636A2u, 2);  /* 0C0636A0 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0636A4u, 1);  /* 0C0636A2 mov.w @Rm,Rn */
	r7 |= r0;  /* 0C0636A4 or Rm,Rn */
	W32(r8, r7); UPD(0x0C0636A8u, 2);  /* 0C0636A6 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0636A8 add #imm,Rn */
	UPD(0x0C0636AAu, 1);
L_0C0636AA: BLKS(0x0C0636AAu);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 3); goto L_0C062E58; }  /* 0C0636AA bra */
L_0C0636B0: BLKS(0x0C0636B0u);
	r4 = 0xC284EBCu; UPD(0x0C0636B2u, 1);  /* 0C0636B0 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0636B4u, 1);  /* 0C0636B2 mov.l @(disp,Rm),Rn */
	r10 += r14;  /* 0C0636B4 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0636B8u, 2);  /* 0C0636B6 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C0636B8 exts.w Rm,Rn */
	r3 += r1;  /* 0C0636BA add Rm,Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C0636BEu, 3);  /* 0C0636BC mov.l @(disp,Rm),Rn */
	IF(0x0C0636BEu); r3 <<= 16;  /* 0C0636BE shll16 Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0636C2u, 2);  /* 0C0636C0 mov.w @Rm,Rn */
	r2 += r7;  /* 0C0636C2 add Rm,Rn */
	r6 = 0xC21CCF0u; UPD(0x0C0636C6u, 2);  /* 0C0636C4 mov.l @(disp,pc),Rn */
	{ r1 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0635DEu, 3); goto L_0C0635DE; }  /* 0C0636C6 bra */
L_0C0636D0: BLKS(0x0C0636D0u);
	r1 = 0x4000u; UPD(0x0C0636D2u, 1);  /* 0C0636D0 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C0636D2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = (s32)r4 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C0636DCu, 4); goto L_0C0636DC; } goto L_0C0636D8; }  /* 0C0636D4 bf/s */
L_0C0636D8: BLKS(0x0C0636D8u);
	{ r0 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C063AF0u, 4); goto L_0C063AF0; }  /* 0C0636D8 bra */
L_0C0636DC: BLKS(0x0C0636DCu);
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0636E4u, 3); goto L_0C0636E4; } goto L_0C0636E0; }  /* 0C0636DC bf/s */
L_0C0636E0: BLKS(0x0C0636E0u);
	{ IF(0x0C0636E2u); ; /* slot nop */ UPD(0x0C063A50u, 4); goto L_0C063A50; }  /* 0C0636E0 bra */
L_0C0636E4: BLKS(0x0C0636E4u);
	{ u32 c_ = !T; r13 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0637A6u, 3); goto L_0C0637A6; } UPD(0x0C0636E8u, 1); goto L_0C0636E8; }  /* 0C0636E4 bf/s */
L_0C0636E8: BLKS(0x0C0636E8u);
	r2 = 0xFF000000u; UPD(0x0C0636EAu, 1);  /* 0C0636E8 mov.l @(disp,pc),Rn */
	r1 = 0x2000000u; UPD(0x0C0636ECu, 1);  /* 0C0636EA mov.l @(disp,pc),Rn */
	r2 &= r13;  /* 0C0636EC and Rm,Rn */
	T = r2 == r1;  /* 0C0636EE cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = r2 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0636F8u, 5); goto L_0C0636F8; } goto L_0C0636F4; }  /* 0C0636F0 bf/s */
L_0C0636F4: BLKS(0x0C0636F4u);
	{ IF(0x0C0636F6u); ; /* slot nop */ UPD(0x0C0639E0u, 4); goto L_0C0639E0; }  /* 0C0636F4 bra */
L_0C0636F8: BLKS(0x0C0636F8u);
	{ u32 c_ = T; T = (r2 & r2) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0637B0u, 3); goto L_0C0637B0; } goto L_0C0636FC; }  /* 0C0636F8 bt/s */
L_0C0636FC: BLKS(0x0C0636FCu);
	if (T) { UPD(0x0C063706u, 4); goto L_0C063706; }  /* 0C0636FC bt */
L_0C0636FE: BLKS(0x0C0636FEu);
	r7 = 0x1000000u; UPD(0x0C063700u, 1);  /* 0C0636FE mov.l @(disp,pc),Rn */
	T = r2 == r7;  /* 0C063700 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063750u, 4); goto L_0C063750; } UPD(0x0C063706u, 1); goto L_0C063706; }  /* 0C063702 bt/s */
L_0C063706: BLKS(0x0C063706u);
	r10 = 0xC21CCE8u; UPD(0x0C063708u, 1);  /* 0C063706 mov.l @(disp,pc),Rn */
	r2 = R32(r10); UPD(0x0C06370Au, 1);  /* 0C063708 mov.l @Rm,Rn */
	r11 = 0xC21CA20u; UPD(0x0C06370Cu, 1);  /* 0C06370A mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C06370Eu, 1);  /* 0C06370C mov.l Rm,@Rn */
	r3 = 0xC284EBCu; UPD(0x0C063710u, 1);  /* 0C06370E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063710 add #imm,Rn */
	r7 = 0xC2177F6u; UPD(0x0C063714u, 2);  /* 0C063712 mov.l @(disp,pc),Rn */
	r0 = 0xC21F7EAu; UPD(0x0C063716u, 1);  /* 0C063714 mov.l @(disp,pc),Rn */
	r6 = 0xC286294u; UPD(0x0C063718u, 1);  /* 0C063716 mov.l @(disp,pc),Rn */
	r9 = R32(r11); UPD(0x0C06371Au, 1);  /* 0C063718 mov.l @Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C06371Cu, 1);  /* 0C06371A mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r7); UPD(0x0C06371Eu, 1);  /* 0C06371C mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C063720u, 1);  /* 0C06371E mov.w @Rm,Rn */
	r10 += r13;  /* 0C063720 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C063724u, 2);  /* 0C063722 mov.w @Rm,Rn */
	IF(0x0C063724u); r10 <<= 16;  /* 0C063724 shll16 Rn */
	W32(r8, r9); UPD(0x0C063728u, 2);  /* 0C063726 mov.l Rm,@Rn */
	r12 += r5;  /* 0C063728 add Rm,Rn */
	r4 = r12 & 0xFFFF;  /* 0C06372A extu.w Rm,Rn */
	r8 += 0x4u;  /* 0C06372C add #imm,Rn */
	r10 |= r4;  /* 0C06372E or Rm,Rn */
	W32(r8, r10); UPD(0x0C063732u, 5);  /* 0C063730 mov.l Rm,@Rn */
	r2 = 0xC392AF0u; UPD(0x0C063734u, 1);  /* 0C063732 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063734 add #imm,Rn */
	r11 = R32(r2); UPD(0x0C063738u, 2);  /* 0C063736 mov.l @Rm,Rn */
	W32(r8, r11); UPD(0x0C06373Au, 1);  /* 0C063738 mov.l Rm,@Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C06373Cu, 1);  /* 0C06373A mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06373C add #imm,Rn */
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C062E58u, 4); goto L_0C062E58; }  /* 0C06373E bra */
L_0C063750: BLKS(0x0C063750u);
	r13 = 0xC284EBCu; UPD(0x0C063752u, 1);  /* 0C063750 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C063754u, 1);  /* 0C063752 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r13); UPD(0x0C063756u, 1);  /* 0C063754 mov.w @Rm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C063758u, 1);  /* 0C063756 mov.l @(disp,Rm),Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C06375Au, 1);  /* 0C063758 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C06375A add Rm,Rn */
	r12 += r5;  /* 0C06375C add Rm,Rn */
	r4 = r12 & 0xFFFF;  /* 0C06375E extu.w Rm,Rn */
	IF(0x0C063760u); r6 <<= 16;  /* 0C063760 shll16 Rn */
	r6 |= r4;  /* 0C063762 or Rm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C063766u, 6);  /* 0C063764 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C063768u, 1);  /* 0C063766 mov.l @(disp,Rm),Rn */
	r4 = 0xC21CCE8u; UPD(0x0C06376Au, 1);  /* 0C063768 mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C06376A and Rm,Rn */
	r2 = 0xC21CA20u; UPD(0x0C06376Eu, 2);  /* 0C06376C mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x28u); UPD(0x0C063770u, 1);  /* 0C06376E mov.l @(disp,Rm),Rn */
L_0C063770: BLKS(0x0C063770u);
	r0 = R32(r4); UPD(0x0C063772u, 1);  /* 0C063770 mov.l @Rm,Rn */
	r9 = r7;  /* 0C063772 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C063776u, 2);  /* 0C063774 mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C063776 add #imm,Rn */
	r0 = 0x54u;  /* 0C063778 mov #imm,Rn */
	IF(0x0C06377Au); r1 = R32(r0 + r14); UPD(0x0C06377Cu, 3);  /* 0C06377A mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C06377C add #imm,Rn */
	r10 = R32(r2); UPD(0x0C063780u, 2);  /* 0C06377E mov.l @Rm,Rn */
	r1 += 0x4u;  /* 0C063780 add #imm,Rn */
	r10 += r7;  /* 0C063782 add Rm,Rn */
	IF(0x0C063784u); W32(r0 + r14, r1); UPD(0x0C063786u, 3);  /* 0C063784 mov.l Rm,@(r0,Rn) */
	W32(r8, r10); UPD(0x0C063788u, 1);  /* 0C063786 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C063788 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r12 = v_; } UPD(0x0C06378Cu, 2);  /* 0C06378A mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C06378C add #imm,Rn */
	r12 += r6;  /* 0C06378E add Rm,Rn */
	r12 += r7;  /* 0C063790 add Rm,Rn */
	W32(r8, r12); UPD(0x0C063794u, 4);  /* 0C063792 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r9;  /* 0C063794 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C063796 add #imm,Rn */
	W32(r8, r5); UPD(0x0C06379Au, 3);  /* 0C063798 mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C06379A cmp/ge Rm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C06379Eu, 2);  /* 0C06379C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06379E add #imm,Rn */
	W32(r8, r11); UPD(0x0C0637A2u, 2);  /* 0C0637A0 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063770u, 3); goto L_0C063770; } UPD(0x0C0637A6u, 1); goto L_0C0637A6; }  /* 0C0637A2 bt/s */
L_0C0637A6: BLKS(0x0C0637A6u);
	{ IF(0x0C0637A8u); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C0637A6 bra */
L_0C0637B0: BLKS(0x0C0637B0u);
	r1 = 0x4000000u; UPD(0x0C0637B2u, 1);  /* 0C0637B0 mov.l @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0637B2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = r2 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0637BCu, 4); goto L_0C0637BC; } goto L_0C0637B8; }  /* 0C0637B4 bf/s */
L_0C0637B8: BLKS(0x0C0637B8u);
	{ IF(0x0C0637BAu); ; /* slot nop */ UPD(0x0C063960u, 4); goto L_0C063960; }  /* 0C0637B8 bra */
L_0C0637BC: BLKS(0x0C0637BCu);
	if (T) { UPD(0x0C0638A0u, 3); goto L_0C0638A0; }  /* 0C0637BC bt */
L_0C0637BE: BLKS(0x0C0637BEu);
	r3 = 0x3000000u; UPD(0x0C0637C0u, 1);  /* 0C0637BE mov.l @(disp,pc),Rn */
	T = r2 == r3;  /* 0C0637C0 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C063706u, 4); goto L_0C063706; }  /* 0C0637C2 bf */
L_0C0637C4: BLKS(0x0C0637C4u);
	r10 = 0xC2177F6u; UPD(0x0C0637C6u, 1);  /* 0C0637C4 mov.l @(disp,pc),Rn */
	r2 = 0xC284EBCu; UPD(0x0C0637C8u, 1);  /* 0C0637C6 mov.l @(disp,pc),Rn */
	r11 = 0xC21F7EAu; UPD(0x0C0637CAu, 1);  /* 0C0637C8 mov.l @(disp,pc),Rn */
	r9 = 0xC286294u; UPD(0x0C0637CCu, 1);  /* 0C0637CA mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C0637CEu, 1);  /* 0C0637CC mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0637D0u, 1);  /* 0C0637CE mov.w @Rm,Rn */
	r10 = 0x0u;  /* 0C0637D0 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C0637D4u, 2);  /* 0C0637D2 mov.w @Rm,Rn */
	r6 += r12;  /* 0C0637D4 add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C0637D8u, 2);  /* 0C0637D6 mov.w @Rm,Rn */
	IF(0x0C0637D8u); r6 <<= 16;  /* 0C0637D8 shll16 Rn */
	r4 = 0xFFFFu; UPD(0x0C0637DCu, 2);  /* 0C0637DA mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C0637DC add Rm,Rn */
	r5 &= r4;  /* 0C0637DE and Rm,Rn */
	r0 = 0xC392AF0u; UPD(0x0C0637E2u, 3);  /* 0C0637E0 mov.l @(disp,pc),Rn */
	r6 |= r5;  /* 0C0637E2 or Rm,Rn */
	r3 = 0xC27556Eu; UPD(0x0C0637E6u, 2);  /* 0C0637E4 mov.l @(disp,pc),Rn */
	r5 = R32(r0); UPD(0x0C0637E8u, 1);  /* 0C0637E6 mov.l @Rm,Rn */
	r7 = 0x30000u; UPD(0x0C0637EAu, 1);  /* 0C0637E8 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C0637EA and Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0637EEu, 2);  /* 0C0637EC mov.w @Rm,Rn */
	IF(0x0C0637EEu); T = (s32)r1 >= 0;  /* 0C0637EE cmp/pz Rn */
	{ u32 c_ = !T; r5 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0637A6u, 4); goto L_0C0637A6; } goto L_0C0637F4; }  /* 0C0637F0 bf/s */
L_0C0637F4: BLKS(0x0C0637F4u);
	r7 = 0xC21CCE8u; UPD(0x0C0637F6u, 2);  /* 0C0637F4 mov.l @(disp,pc),Rn */
	r3 = r1;  /* 0C0637F6 mov Rm,Rn */
	r4 = 0xC21CA20u; UPD(0x0C0637FAu, 2);  /* 0C0637F8 mov.l @(disp,pc),Rn */
L_0C0637FA: BLKS(0x0C0637FAu);
	r0 = R32(r7); UPD(0x0C0637FCu, 1);  /* 0C0637FA mov.l @Rm,Rn */
	r12 = 0x40u;  /* 0C0637FC mov #imm,Rn */
	W32(r8, r0); UPD(0x0C063800u, 2);  /* 0C0637FE mov.l Rm,@Rn */
	r12 += r14;  /* 0C063800 add Rm,Rn */
	r1 = R32(r12 + 0x14u); UPD(0x0C063804u, 2);  /* 0C063802 mov.l @(disp,Rm),Rn */
	r11 = r10;  /* 0C063804 mov Rm,Rn */
	r2 = R32(r4); UPD(0x0C063808u, 2);  /* 0C063806 mov.l @Rm,Rn */
	IF(0x0C063808u); r11 <<= 16;  /* 0C063808 shll16 Rn */
	r1 += 0x4u;  /* 0C06380A add #imm,Rn */
	r8 += 0x4u;  /* 0C06380C add #imm,Rn */
	r2 += r11;  /* 0C06380E add Rm,Rn */
	W32(r12 + 0x14u, r1); UPD(0x0C063812u, 5);  /* 0C063810 mov.l Rm,@(disp,Rn) */
	r0 = r10;  /* 0C063812 mov Rm,Rn */
	W32(r8, r2); UPD(0x0C063816u, 2);  /* 0C063814 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C063816 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r9 = v_; } UPD(0x0C06381Au, 2);  /* 0C063818 mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C06381A add #imm,Rn */
	r9 += r6;  /* 0C06381C add Rm,Rn */
	r9 += r11;  /* 0C06381E add Rm,Rn */
	W32(r8, r9); UPD(0x0C063822u, 4);  /* 0C063820 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C063822 add #imm,Rn */
	r8 += 0x4u;  /* 0C063824 add #imm,Rn */
	W32(r8, r5); UPD(0x0C063828u, 3);  /* 0C063826 mov.l Rm,@Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C063828 exts.w Rm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C06382Cu, 2);  /* 0C06382A mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06382C add #imm,Rn */
	W32(r8, r13); UPD(0x0C063830u, 2);  /* 0C06382E mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r10;  /* 0C063830 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0637FAu, 4); goto L_0C0637FA; } goto L_0C063836; }  /* 0C063832 bt/s */
L_0C063836: BLKS(0x0C063836u);
	{ IF(0x0C063838u); ; /* slot nop */ UPD(0x0C062C84u, 4); goto L_0C062C84; }  /* 0C063836 bra */
L_0C0638A0: BLKS(0x0C0638A0u);
	r9 = 0x5000000u; UPD(0x0C0638A2u, 1);  /* 0C0638A0 mov.l @(disp,pc),Rn */
	T = r2 == r9;  /* 0C0638A2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0638ACu, 4); goto L_0C0638AC; } goto L_0C0638A8; }  /* 0C0638A4 bt/s */
L_0C0638A8: BLKS(0x0C0638A8u);
	{ IF(0x0C0638AAu); ; /* slot nop */ UPD(0x0C063706u, 4); goto L_0C063706; }  /* 0C0638A8 bra */
L_0C0638AC: BLKS(0x0C0638ACu);
	r6 = 0xC0000000u; UPD(0x0C0638AEu, 1);  /* 0C0638AC mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C0638B0u, 1);  /* 0C0638AE mov.l Rm,@Rn */
	r9 = 0x10000000u; UPD(0x0C0638B2u, 1);  /* 0C0638B0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0638B2 add #imm,Rn */
	r0 = 0xC21CA20u; UPD(0x0C0638B6u, 2);  /* 0C0638B4 mov.l @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C0638B6 mov #imm,Rn */
	r11 = 0x5000000u; UPD(0x0C0638BAu, 2);  /* 0C0638B8 mov.l @(disp,pc),Rn */
	r4 = 0x1F000Fu; UPD(0x0C0638BCu, 1);  /* 0C0638BA mov.l @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C0638BEu, 1);  /* 0C0638BC mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0638BE mov #imm,Rn */
	UPD(0x0C0638C0u, 1);
L_0C0638C0: BLKS(0x0C0638C0u);
	r3 = r11;  /* 0C0638C0 mov Rm,Rn */
	r2 = 0x0u;  /* 0C0638C2 mov #imm,Rn */
	UPD(0x0C0638C4u, 2);
L_0C0638C4: BLKS(0x0C0638C4u);
	W32(r8, r9); UPD(0x0C0638C6u, 1);  /* 0C0638C4 mov.l Rm,@Rn */
	r13 = r3;  /* 0C0638C6 mov Rm,Rn */
	r12 = R32(r0); UPD(0x0C0638CAu, 2);  /* 0C0638C8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0638CA add #imm,Rn */
	W32(r8, r12); UPD(0x0C0638CEu, 2);  /* 0C0638CC mov.l Rm,@Rn */
	r13 |= r2;  /* 0C0638CE or Rm,Rn */
	r8 += 0x4u;  /* 0C0638D0 add #imm,Rn */
	W32(r8, r13); UPD(0x0C0638D4u, 3);  /* 0C0638D2 mov.l Rm,@Rn */
	r12 = r7;  /* 0C0638D4 mov Rm,Rn */
	r8 += 0x4u;  /* 0C0638D6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0638DAu, 3);  /* 0C0638D8 mov.l Rm,@Rn */
	r12 += 0x1u;  /* 0C0638DA add #imm,Rn */
	r8 += 0x4u;  /* 0C0638DC add #imm,Rn */
	W32(r8, r5); UPD(0x0C0638E0u, 3);  /* 0C0638DE mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r12;  /* 0C0638E0 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C0638E2 add #imm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C0638E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0638C4u, 6); goto L_0C0638C4; } goto L_0C0638EA; }  /* 0C0638E6 bf/s */
L_0C0638EA: BLKS(0x0C0638EAu);
	r3 = r10;  /* 0C0638EA mov Rm,Rn */
	r10 = 0x200000u; UPD(0x0C0638EEu, 3);  /* 0C0638EC mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0638EE add #imm,Rn */
	r11 += r10;  /* 0C0638F0 add Rm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0638F2 exts.w Rm,Rn */
	r7 = 0x7u;  /* 0C0638F4 mov #imm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0638F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0638C0u, 8); goto L_0C0638C0; } goto L_0C0638FC; }  /* 0C0638F8 bf/s */
L_0C0638FC: BLKS(0x0C0638FCu);
	r13 = 0xFFFFu; UPD(0x0C0638FEu, 2);  /* 0C0638FC mov.l @(disp,pc),Rn */
	r12 = R32(r14); UPD(0x0C063900u, 1);  /* 0C0638FE mov.l @Rm,Rn */
	r1 = 0x13040000u; UPD(0x0C063902u, 1);  /* 0C063900 mov.l @(disp,pc),Rn */
	r12 &= r13;  /* 0C063902 and Rm,Rn */
	r12 |= r1;  /* 0C063904 or Rm,Rn */
	W32(r8, r12); UPD(0x0C063908u, 3);  /* 0C063906 mov.l Rm,@Rn */
	r5 = 0xC21CA20u; UPD(0x0C06390Au, 1);  /* 0C063908 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06390A add #imm,Rn */
	r0 = R32(r5); UPD(0x0C06390Eu, 2);  /* 0C06390C mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C063910u, 1);  /* 0C06390E mov.l Rm,@Rn */
	r4 = 0x5000000u; UPD(0x0C063912u, 1);  /* 0C063910 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063912 add #imm,Rn */
	W32(r8, r4); UPD(0x0C063916u, 2);  /* 0C063914 mov.l Rm,@Rn */
	r0 = 0xC392AF0u; UPD(0x0C063918u, 1);  /* 0C063916 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063918 add #imm,Rn */
	r6 = R32(r0); UPD(0x0C06391Cu, 2);  /* 0C06391A mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C06391Eu, 1);  /* 0C06391C mov.l Rm,@Rn */
	r6 = 0x808080u; UPD(0x0C063920u, 1);  /* 0C06391E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063920 add #imm,Rn */
	W32(r8, r6); UPD(0x0C063924u, 2);  /* 0C063922 mov.l Rm,@Rn */
	r9 = 0xC0000001u; UPD(0x0C063926u, 1);  /* 0C063924 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063926 add #imm,Rn */
	W32(r8, r9); UPD(0x0C06392Au, 2);  /* 0C063928 mov.l Rm,@Rn */
	r11 = 0x13010080u; UPD(0x0C06392Cu, 1);  /* 0C06392A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06392C add #imm,Rn */
	W32(r8, r11); UPD(0x0C063930u, 2);  /* 0C06392E mov.l Rm,@Rn */
	r10 = 0xC284EBCu; UPD(0x0C063932u, 1);  /* 0C063930 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063932 add #imm,Rn */
	r3 = 0xC2177F6u; UPD(0x0C063936u, 2);  /* 0C063934 mov.l @(disp,pc),Rn */
	r12 = 0xC21F7EAu; UPD(0x0C063938u, 1);  /* 0C063936 mov.l @(disp,pc),Rn */
	r2 = 0xC286294u; UPD(0x0C06393Au, 1);  /* 0C063938 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C06393Cu, 1);  /* 0C06393A mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C06393Eu, 1);  /* 0C06393C mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r12); UPD(0x0C063940u, 1);  /* 0C06393E mov.w @Rm,Rn */
	r11 += r7;  /* 0C063940 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C063944u, 2);  /* 0C063942 mov.w @Rm,Rn */
	IF(0x0C063944u); r11 <<= 16;  /* 0C063944 shll16 Rn */
	W32(r8, r4); UPD(0x0C063948u, 2);  /* 0C063946 mov.l Rm,@Rn */
	r9 += r5;  /* 0C063948 add Rm,Rn */
	r9 &= r13;  /* 0C06394A and Rm,Rn */
	r8 += 0x4u;  /* 0C06394C add #imm,Rn */
	r11 |= r9;  /* 0C06394E or Rm,Rn */
	W32(r8, r11); UPD(0x0C063952u, 5);  /* 0C063950 mov.l Rm,@Rn */
	r4 = R32(r0); UPD(0x0C063954u, 1);  /* 0C063952 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063954 add #imm,Rn */
	W32(r8, r4); UPD(0x0C063958u, 2);  /* 0C063956 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C062E54u, 3); goto L_0C062E54; }  /* 0C063958 bra */
L_0C063960: BLKS(0x0C063960u);
	r0 = 0xC284EBCu; UPD(0x0C063962u, 1);  /* 0C063960 mov.l @(disp,pc),Rn */
	r2 = 0xC2177F6u; UPD(0x0C063964u, 1);  /* 0C063962 mov.l @(disp,pc),Rn */
	r11 = 0xC21F7EAu; UPD(0x0C063966u, 1);  /* 0C063964 mov.l @(disp,pc),Rn */
	r9 = 0xC286294u; UPD(0x0C063968u, 1);  /* 0C063966 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C06396Au, 1);  /* 0C063968 mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C06396Cu, 1);  /* 0C06396A mov.w @Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C06396Eu, 1);  /* 0C06396C mov.w @Rm,Rn */
	r6 += r12;  /* 0C06396E add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C063972u, 2);  /* 0C063970 mov.w @Rm,Rn */
	IF(0x0C063972u); r6 <<= 16;  /* 0C063972 shll16 Rn */
	r10 += r13;  /* 0C063974 add Rm,Rn */
	r5 = r10 & 0xFFFF;  /* 0C063976 extu.w Rm,Rn */
	r4 = 0xC392AF0u; UPD(0x0C06397Au, 4);  /* 0C063978 mov.l @(disp,pc),Rn */
	r6 |= r5;  /* 0C06397A or Rm,Rn */
	r3 = 0xC28671Cu; UPD(0x0C06397Eu, 2);  /* 0C06397C mov.l @(disp,pc),Rn */
	r7 = 0xFFFF0000u; UPD(0x0C063980u, 1);  /* 0C06397E mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C063982u, 1);  /* 0C063980 mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C063984u, 1);  /* 0C063982 mov.w @Rm,Rn */
	r5 &= r7;  /* 0C063984 and Rm,Rn */
	IF(0x0C063986u); T = (s32)r1 >= 0;  /* 0C063986 cmp/pz Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0639DCu, 5); goto L_0C0639DC; } goto L_0C06398C; }  /* 0C063988 bf/s */
L_0C06398C: BLKS(0x0C06398Cu);
	r0 = 0xC21CCE8u; UPD(0x0C06398Eu, 2);  /* 0C06398C mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C06398E mov Rm,Rn */
	UPD(0x0C063990u, 1);
L_0C063990: BLKS(0x0C063990u);
	r13 = 0x40u;  /* 0C063990 mov #imm,Rn */
	r13 += r14;  /* 0C063992 add Rm,Rn */
	r1 = R32(r13 + 0x14u); UPD(0x0C063996u, 3);  /* 0C063994 mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C063996 add #imm,Rn */
	W32(r13 + 0x14u, r1); UPD(0x0C06399Au, 2);  /* 0C063998 mov.l Rm,@(disp,Rn) */
	r1 += 0xFFFFFFFCu;  /* 0C06399A add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r10 = v_; } UPD(0x0C06399Eu, 2);  /* 0C06399C mov.l @Rm+,Rn */
	r2 = r10 & 0xFF;  /* 0C06399E extu.b Rm,Rn */
	r11 = R32(r0); UPD(0x0C0639A2u, 2);  /* 0C0639A0 mov.l @Rm,Rn */
	r3 = r2;  /* 0C0639A2 mov Rm,Rn */
	r9 = 0xFFFF0000u; UPD(0x0C0639A6u, 2);  /* 0C0639A4 mov.l @(disp,pc),Rn */
	IF(0x0C0639A6u); r3 <<= 8;  /* 0C0639A6 shll8 Rn */
	r11 &= r9;  /* 0C0639A8 and Rm,Rn */
	r3 += r2;  /* 0C0639AA add Rm,Rn */
	r12 = 0x2040000u; UPD(0x0C0639AEu, 4);  /* 0C0639AC mov.l @(disp,pc),Rn */
	r11 |= r3;  /* 0C0639AE or Rm,Rn */
	r11 |= r12;  /* 0C0639B0 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0639B4u, 3);  /* 0C0639B2 mov.l Rm,@Rn */
	r10 = r6;  /* 0C0639B4 mov Rm,Rn */
	r9 = 0xC21CA20u; UPD(0x0C0639B8u, 2);  /* 0C0639B6 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0639B8 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C0639BCu, 2);  /* 0C0639BA mov.l @Rm,Rn */
	r10 += r7;  /* 0C0639BC add Rm,Rn */
	r13 += r7;  /* 0C0639BE add Rm,Rn */
	W32(r8, r13); UPD(0x0C0639C2u, 3);  /* 0C0639C0 mov.l Rm,@Rn */
	r3 = r7;  /* 0C0639C2 mov Rm,Rn */
	r8 += 0x4u;  /* 0C0639C4 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0639C8u, 3);  /* 0C0639C6 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C0639C8 add #imm,Rn */
	r8 += 0x4u;  /* 0C0639CA add #imm,Rn */
	W32(r8, r5); UPD(0x0C0639CEu, 3);  /* 0C0639CC mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r3;  /* 0C0639CE exts.w Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0639D2u, 2);  /* 0C0639D0 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0639D2 add #imm,Rn */
	W32(r8, r1); UPD(0x0C0639D6u, 2);  /* 0C0639D4 mov.l Rm,@Rn */
	T = (s32)r4 >= (s32)r7;  /* 0C0639D6 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063990u, 4); goto L_0C063990; } UPD(0x0C0639DCu, 1); goto L_0C0639DC; }  /* 0C0639D8 bt/s */
L_0C0639DC: BLKS(0x0C0639DCu);
	{ IF(0x0C0639DEu); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C0639DC bra */
L_0C0639E0: BLKS(0x0C0639E0u);
	r11 = 0xC21F7EAu; UPD(0x0C0639E2u, 1);  /* 0C0639E0 mov.l @(disp,pc),Rn */
	r9 = 0xC286294u; UPD(0x0C0639E4u, 1);  /* 0C0639E2 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C0639E6u, 1);  /* 0C0639E4 mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C0639E8u, 1);  /* 0C0639E6 mov.w @Rm,Rn */
	r0 = 0xC284EBCu; UPD(0x0C0639EAu, 1);  /* 0C0639E8 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C0639EA add Rm,Rn */
	r10 = 0xC2177F6u; UPD(0x0C0639EEu, 2);  /* 0C0639EC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C0639EE extu.w Rm,Rn */
	r2 = 0xC392AF0u; UPD(0x0C0639F2u, 2);  /* 0C0639F0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C0639F4u, 1);  /* 0C0639F2 mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C0639F6u, 1);  /* 0C0639F4 mov.w @Rm,Rn */
	r3 = 0xC28671Cu; UPD(0x0C0639F8u, 1);  /* 0C0639F6 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C0639F8 add Rm,Rn */
	r7 = 0xFFFF0000u; UPD(0x0C0639FCu, 2);  /* 0C0639FA mov.l @(disp,pc),Rn */
	IF(0x0C0639FCu); r6 <<= 16;  /* 0C0639FC shll16 Rn */
	r5 = R32(r2); UPD(0x0C063A00u, 2);  /* 0C0639FE mov.l @Rm,Rn */
	r6 |= r4;  /* 0C063A00 or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C063A04u, 2);  /* 0C063A02 mov.w @Rm,Rn */
	r5 &= r7;  /* 0C063A04 and Rm,Rn */
	IF(0x0C063A06u); T = (s32)r1 >= 0;  /* 0C063A06 cmp/pz Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0639DCu, 5); goto L_0C0639DC; } goto L_0C063A0C; }  /* 0C063A08 bf/s */
L_0C063A0C: BLKS(0x0C063A0Cu);
	r0 = 0xC21CCE8u; UPD(0x0C063A0Eu, 2);  /* 0C063A0C mov.l @(disp,pc),Rn */
	r3 = r1;  /* 0C063A0E mov Rm,Rn */
	r4 = 0xC21CA20u; UPD(0x0C063A12u, 2);  /* 0C063A10 mov.l @(disp,pc),Rn */
	IF(0x0C063A12u); ;  /* 0C063A12 nop */
	UPD(0x0C063A14u, 1);
L_0C063A14: BLKS(0x0C063A14u);
	r10 = 0x40u;  /* 0C063A14 mov #imm,Rn */
	r10 += r14;  /* 0C063A16 add Rm,Rn */
	r12 = R32(r10 + 0x14u); UPD(0x0C063A1Au, 3);  /* 0C063A18 mov.l @(disp,Rm),Rn */
	r9 = r6;  /* 0C063A1A mov Rm,Rn */
	r2 = R32(r0); UPD(0x0C063A1Eu, 2);  /* 0C063A1C mov.l @Rm,Rn */
	r12 += 0x4u;  /* 0C063A1E add #imm,Rn */
	W32(r10 + 0x14u, r12); UPD(0x0C063A22u, 2);  /* 0C063A20 mov.l Rm,@(disp,Rn) */
	r9 += r7;  /* 0C063A22 add Rm,Rn */
	W32(r8, r2); UPD(0x0C063A26u, 2);  /* 0C063A24 mov.l Rm,@Rn */
	r12 += 0xFFFFFFFCu;  /* 0C063A26 add #imm,Rn */
	r11 = R32(r4); UPD(0x0C063A2Au, 2);  /* 0C063A28 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063A2A add #imm,Rn */
	{ u32 v_ = R32(r12); r12 += 4; r1 = v_; } UPD(0x0C063A2Eu, 2);  /* 0C063A2C mov.l @Rm+,Rn */
	r2 = r7;  /* 0C063A2E mov Rm,Rn */
	r11 += r1;  /* 0C063A30 add Rm,Rn */
	W32(r8, r11); UPD(0x0C063A34u, 3);  /* 0C063A32 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C063A34 add #imm,Rn */
	r8 += 0x4u;  /* 0C063A36 add #imm,Rn */
	W32(r8, r9); UPD(0x0C063A3Au, 3);  /* 0C063A38 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C063A3A exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C063A3C add #imm,Rn */
	W32(r8, r5); UPD(0x0C063A40u, 3);  /* 0C063A3E mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C063A40 cmp/ge Rm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C063A44u, 2);  /* 0C063A42 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063A44 add #imm,Rn */
	W32(r8, r13); UPD(0x0C063A48u, 2);  /* 0C063A46 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063A14u, 3); goto L_0C063A14; } UPD(0x0C063A4Cu, 1); goto L_0C063A4C; }  /* 0C063A48 bt/s */
L_0C063A4C: BLKS(0x0C063A4Cu);
	{ IF(0x0C063A4Eu); ; /* slot nop */ UPD(0x0C062C84u, 3); goto L_0C062C84; }  /* 0C063A4C bra */
L_0C063A50: BLKS(0x0C063A50u);
	r6 = 0x8000u; UPD(0x0C063A52u, 1);  /* 0C063A50 mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C063A52 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063AB0u, 4); goto L_0C063AB0; } goto L_0C063A58; }  /* 0C063A54 bt/s */
L_0C063A58: BLKS(0x0C063A58u);
	r0 = 0xC000u; UPD(0x0C063A5Au, 2);  /* 0C063A58 mov.l @(disp,pc),Rn */
	T = r4 == r0;  /* 0C063A5A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C063A4Cu, 4); goto L_0C063A4C; }  /* 0C063A5C bf */
L_0C063A5E: BLKS(0x0C063A5Eu);
	W32(r8, r13); UPD(0x0C063A60u, 1);  /* 0C063A5E mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C063A60 mov #imm,Rn */
	r9 = 0xC284EBCu; UPD(0x0C063A64u, 2);  /* 0C063A62 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063A64 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C063A68u, 2);  /* 0C063A66 mov.w @Rm,Rn */
	r11 = R32(r14 + 0x1Cu); UPD(0x0C063A6Au, 1);  /* 0C063A68 mov.l @(disp,Rm),Rn */
	r13 -= r11;  /* 0C063A6A sub Rm,Rn */
	r13 -= r12;  /* 0C063A6C sub Rm,Rn */
	IF(0x0C063A6Eu); r12 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063A70u, 3);  /* 0C063A6E mov.w @(r0,Rm),Rn */
	r4 = R32(r14 + 0x20u); UPD(0x0C063A72u, 1);  /* 0C063A70 mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C063A72 mov #imm,Rn */
	r5 = 0xC21CA20u; UPD(0x0C063A76u, 2);  /* 0C063A74 mov.l @(disp,pc),Rn */
	r12 -= r4;  /* 0C063A76 sub Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C063A7Au, 2);  /* 0C063A78 mov.l @(disp,Rm),Rn */
	IF(0x0C063A7Au); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063A7Cu, 1);  /* 0C063A7A mov.w @(r0,Rm),Rn */
	r12 -= r2;  /* 0C063A7C sub Rm,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C063A80u, 2);  /* 0C063A7E mov.l @(disp,Rm),Rn */
	r12 -= r3;  /* 0C063A80 sub Rm,Rn */
	r6 = R32(r5); UPD(0x0C063A84u, 2);  /* 0C063A82 mov.l @Rm,Rn */
	r13 -= r7;  /* 0C063A84 sub Rm,Rn */
	r10 = 0xFFFFu; UPD(0x0C063A88u, 2);  /* 0C063A86 mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C063A88 add #imm,Rn */
	W32(r8, r6); UPD(0x0C063A8Cu, 2);  /* 0C063A8A mov.l Rm,@Rn */
	r12 += 0xFFFFFFFFu;  /* 0C063A8C add #imm,Rn */
	IF(0x0C063A8Eu); r13 <<= 16;  /* 0C063A8E shll16 Rn */
	r12 &= r10;  /* 0C063A90 and Rm,Rn */
	r8 += 0x4u;  /* 0C063A92 add #imm,Rn */
	r13 |= r12;  /* 0C063A94 or Rm,Rn */
	W32(r8, r13); UPD(0x0C063A98u, 6);  /* 0C063A96 mov.l Rm,@Rn */
	r1 = 0xC392AF0u; UPD(0x0C063A9Au, 1);  /* 0C063A98 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063A9A add #imm,Rn */
	r0 = R32(r1); UPD(0x0C063A9Eu, 2);  /* 0C063A9C mov.l @Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C063AA0u, 1);  /* 0C063A9E mov.l @(disp,Rm),Rn */
	W32(r8, r0); UPD(0x0C063AA2u, 1);  /* 0C063AA0 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0636AAu, 3); goto L_0C0636AA; }  /* 0C063AA2 bra */
L_0C063AB0: BLKS(0x0C063AB0u);
	r6 = 0xC284EBCu; UPD(0x0C063AB2u, 1);  /* 0C063AB0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C063AB4u, 1);  /* 0C063AB2 mov.w @Rm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C063AB6u, 1);  /* 0C063AB4 mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C063AB8u, 1);  /* 0C063AB6 mov.l Rm,@Rn */
	r10 -= r9;  /* 0C063AB8 sub Rm,Rn */
	r1 = 0xC21CA20u; UPD(0x0C063ABCu, 2);  /* 0C063ABA mov.l @(disp,pc),Rn */
	r10 -= r12;  /* 0C063ABC sub Rm,Rn */
	r11 = R32(r14 + 0x30u); UPD(0x0C063AC0u, 2);  /* 0C063ABE mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C063AC0 add #imm,Rn */
	r5 = R32(r1); UPD(0x0C063AC4u, 2);  /* 0C063AC2 mov.l @Rm,Rn */
	r10 -= r11;  /* 0C063AC4 sub Rm,Rn */
	IF(0x0C063AC6u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063AC8u, 2);  /* 0C063AC6 mov.w @(r0,Rm),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C063AC8 add #imm,Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C063ACCu, 2);  /* 0C063ACA mov.l @(disp,Rm),Rn */
	IF(0x0C063ACCu); r10 <<= 16;  /* 0C063ACC shll16 Rn */
	r4 = 0xFFFFu; UPD(0x0C063AD0u, 2);  /* 0C063ACE mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C063AD0 add Rm,Rn */
	W32(r8, r5); UPD(0x0C063AD4u, 2);  /* 0C063AD2 mov.l Rm,@Rn */
	r3 &= r4;  /* 0C063AD4 and Rm,Rn */
	r8 += 0x4u;  /* 0C063AD6 add #imm,Rn */
	r10 |= r3;  /* 0C063AD8 or Rm,Rn */
	W32(r8, r10); UPD(0x0C063ADCu, 4);  /* 0C063ADA mov.l Rm,@Rn */
	r2 = 0xC392AF0u; UPD(0x0C063ADEu, 1);  /* 0C063ADC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063ADE add #imm,Rn */
	r13 = R32(r2); UPD(0x0C063AE2u, 2);  /* 0C063AE0 mov.l @Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C063AE4u, 1);  /* 0C063AE2 mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C063AE6u, 1);  /* 0C063AE4 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C062F5Cu, 3); goto L_0C062F5C; }  /* 0C063AE6 bra */
L_0C063AF0: BLKS(0x0C063AF0u);
	IF(0x0C063AF0u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063AF2u, 1);  /* 0C063AF0 mov.w @(r0,Rm),Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C063AF4u, 1);  /* 0C063AF2 mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C063AF4 mov #imm,Rn */
	W32(r8, r13); UPD(0x0C063AF8u, 2);  /* 0C063AF6 mov.l Rm,@Rn */
	r10 -= r7;  /* 0C063AF8 sub Rm,Rn */
	r5 = 0xC21CA20u; UPD(0x0C063AFCu, 2);  /* 0C063AFA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063AFC add #imm,Rn */
	r9 = 0xC284EBCu; UPD(0x0C063B00u, 2);  /* 0C063AFE mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C063B02u, 1);  /* 0C063B00 mov.l @(disp,Rm),Rn */
	IF(0x0C063B02u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063B04u, 1);  /* 0C063B02 mov.w @(r0,Rm),Rn */
	r10 -= r4;  /* 0C063B04 sub Rm,Rn */
	r6 = R32(r5); UPD(0x0C063B08u, 2);  /* 0C063B06 mov.l @Rm,Rn */
	r10 -= r3;  /* 0C063B08 sub Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C063B0Cu, 2);  /* 0C063B0A mov.w @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C063B0C add #imm,Rn */
	r11 = R32(r14 + 0x1Cu); UPD(0x0C063B10u, 2);  /* 0C063B0E mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFu; UPD(0x0C063B12u, 1);  /* 0C063B10 mov.l @(disp,pc),Rn */
	r13 += r11;  /* 0C063B12 add Rm,Rn */
	W32(r8, r6); UPD(0x0C063B16u, 2);  /* 0C063B14 mov.l Rm,@Rn */
	IF(0x0C063B16u); r13 <<= 16;  /* 0C063B16 shll16 Rn */
	r10 &= r2;  /* 0C063B18 and Rm,Rn */
	r8 += 0x4u;  /* 0C063B1A add #imm,Rn */
	r13 |= r10;  /* 0C063B1C or Rm,Rn */
	W32(r8, r13); UPD(0x0C063B20u, 5);  /* 0C063B1E mov.l Rm,@Rn */
	r12 = 0xC392AF0u; UPD(0x0C063B22u, 1);  /* 0C063B20 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063B22 add #imm,Rn */
	r0 = R32(r12); UPD(0x0C063B26u, 2);  /* 0C063B24 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C063B28u, 1);  /* 0C063B26 mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C063B2Au, 1);  /* 0C063B28 mov.l @(disp,Rm),Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06311Eu, 3); goto L_0C06311E; }  /* 0C063B2A bra */
}

/* FUN_0c063b90 */
void f_0C063B90(sh3_t *c)
{
	LOCALS;
L_0C063B90: BLKS(0x0C063B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C063B92u, 1);  /* 0C063B90 mov.l Rm,@-Rn */
	r0 = r6 & 0xFF;  /* 0C063B92 extu.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C063B96u, 2);  /* 0C063B94 mov.l Rm,@-Rn */
	r2 = 0x18u;  /* 0C063B96 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C063B9Au, 2);  /* 0C063B98 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s8)r7;  /* 0C063B9A exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C063B9Eu, 2);  /* 0C063B9C mov.l Rm,@-Rn */
	T = r0 > r2;  /* 0C063B9E cmp/hi Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C063BA2u, 2);  /* 0C063BA0 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C063BA4u, 1);  /* 0C063BA2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C063BA6u, 1);  /* 0C063BA4 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C063BA6 add #imm,Rn */
	r14 = r15;  /* 0C063BA8 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C063BACu, 3);  /* 0C063BAA mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C063BB4u, 3); goto L_0C063BB4; } UPD(0x0C063BB0u, 1); goto L_0C063BB0; }  /* 0C063BAC bf/s */
L_0C063BB0: BLKS(0x0C063BB0u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C063EDAu, 3); goto L_0C063EDA; }  /* 0C063BB0 bra */
L_0C063BB4: BLKS(0x0C063BB4u);
	r13 = 0xC2175E8u; UPD(0x0C063BB6u, 1);  /* 0C063BB4 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C063BB6 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C063BBAu, 2);  /* 0C063BB8 mov.l @Rm,Rn */
	r12 = 0x3FFFFFFFu; UPD(0x0C063BBCu, 1);  /* 0C063BBA mov.l @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C063BBEu, 1);  /* 0C063BBC mov.l @Rm,Rn */
	r5 &= r12;  /* 0C063BBE and Rm,Rn */
	r11 = 0xC393044u; UPD(0x0C063BC2u, 2);  /* 0C063BC0 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFFFF8u;  /* 0C063BC2 mov #imm,Rn */
	r10 = R32(r11); UPD(0x0C063BC6u, 2);  /* 0C063BC4 mov.l @Rm,Rn */
	IF(0x0C063BC6u); ARG0(0x46CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C063BC6 shad Rm,Rn */
	r9 = 0xC1F6120u; UPD(0x0C063BCAu, 2);  /* 0C063BC8 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C063BCCu, 1);  /* 0C063BCA mov.l Rm,@Rn */
	W32(r9, r10); UPD(0x0C063BCEu, 1);  /* 0C063BCC mov.l Rm,@Rn */
	r3 = 0xC16D070u; UPD(0x0C063BD0u, 1);  /* 0C063BCE mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C063BD2u, 1);  /* 0C063BD0 mov.l @Rm,Rn */
	IF(0x0C063BD2u); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C063BD4u, 1);  /* 0C063BD2 mov.w @(r0,Rm),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C063BD6u, 1);  /* 0C063BD4 mov.l @(disp,Rm),Rn */
	IF(0x0C063BD6u); MACL = r1 * r10;  /* 0C063BD6 mul.l Rm,Rn */
	r13 = 0xFE000000u; UPD(0x0C063BDAu, 3);  /* 0C063BD8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C063BDA add Rm,Rn */
	r11 += r13;  /* 0C063BDC add Rm,Rn */
	IF(0x0C063BDEu); ARG0(0x4BCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C063BDE shad Rm,Rn */
	IF(0x0C063BE0u); r2 = MACL;  /* 0C063BE0 sts macl,Rn */
	IF(0x0C063BE2u); MACL = r11 * r10;  /* 0C063BE2 mul.l Rm,Rn */
	W32(r14, r2); UPD(0x0C063BE6u, 7);  /* 0C063BE4 mov.l Rm,@Rn */
	r9 = 0x2000000u; UPD(0x0C063BE8u, 1);  /* 0C063BE6 mov.l @(disp,pc),Rn */
	IF(0x0C063BE8u); r6 = MACL;  /* 0C063BE8 sts macl,Rn */
	r3 = 0xC16D0B3u; UPD(0x0C063BECu, 2);  /* 0C063BEA mov.l @(disp,pc),Rn */
	r6 += r9;  /* 0C063BEC add Rm,Rn */
	IF(0x0C063BEEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C063BF0u, 2);  /* 0C063BEE mov.b @(r0,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C063BF2u, 1);  /* 0C063BF0 mov.l Rm,@(disp,Rn) */
	r4 = 0xC392AF4u; UPD(0x0C063BF4u, 1);  /* 0C063BF2 mov.l @(disp,pc),Rn */
	r6 = r2 & 0xFF;  /* 0C063BF4 extu.b Rm,Rn */
	r0 = 0xFFu; UPD(0x0C063BF8u, 2);  /* 0C063BF6 mov.w @(disp,pc),Rn */
	r8 = R32(r4); UPD(0x0C063BFAu, 1);  /* 0C063BF8 mov.l @Rm,Rn */
	r0 -= r6;  /* 0C063BFA sub Rm,Rn */
	IF(0x0C063BFCu); MACL = r0 * r7;  /* 0C063BFC mul.l Rm,Rn */
	r4 = 0xC1F611Cu; UPD(0x0C063C00u, 4);  /* 0C063BFE mov.l @(disp,pc),Rn */
	IF(0x0C063C00u); r2 = MACL;  /* 0C063C00 sts macl,Rn */
	IF(0x0C063C02u); T = (s32)r2 >= 0;  /* 0C063C02 cmp/pz Rn */
	{ u32 c_ = T; W32(r4, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063C0Cu, 5); goto L_0C063C0C; } UPD(0x0C063C08u, 1); goto L_0C063C08; }  /* 0C063C04 bt/s */
L_0C063C08: BLKS(0x0C063C08u);
	{ r2 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C0648D0u, 3); goto L_0C0648D0; }  /* 0C063C08 bra */
L_0C063C0C: BLKS(0x0C063C0Cu);
	r11 = 0xFFFFFFFAu;  /* 0C063C0C mov #imm,Rn */
	UPD(0x0C063C0Eu, 1);
L_0C063C0E: BLKS(0x0C063C0Eu);
	IF(0x0C063C0Eu); ARG0(0x42BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C063C0E shad Rm,Rn */
	r7 = 0xC1F6124u; UPD(0x0C063C12u, 2);  /* 0C063C10 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C063C12 add Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C063C14 extu.b Rm,Rn */
	r1 = 0x0u;  /* 0C063C16 mov #imm,Rn */
	W8(r7, r1); UPD(0x0C063C1Au, 4);  /* 0C063C18 mov.b Rm,@Rn */
	r3 = r10;  /* 0C063C1A mov Rm,Rn */
	r6 = r10;  /* 0C063C1C mov Rm,Rn */
	IF(0x0C063C1Eu); r3 <<= 16;  /* 0C063C1E shll16 Rn */
	IF(0x0C063C20u); r6 <<= 8;  /* 0C063C20 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C063C24u, 5);  /* 0C063C22 mov.w @Rm+,Rn */
	r3 |= r6;  /* 0C063C24 or Rm,Rn */
	r9 = 0xC1F6114u; UPD(0x0C063C28u, 2);  /* 0C063C26 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C063C28 or Rm,Rn */
	r7 = 0xC1F6118u; UPD(0x0C063C2Cu, 2);  /* 0C063C2A mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C063C2C tst Rm,Rn */
	W32(r9, r3); UPD(0x0C063C30u, 2);  /* 0C063C2E mov.l Rm,@Rn */
	W32(r7, r0); UPD(0x0C063C32u, 1);  /* 0C063C30 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r4, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063C3Cu, 3); goto L_0C063C3C; } UPD(0x0C063C36u, 1); goto L_0C063C36; }  /* 0C063C32 bf/s */
L_0C063C36: BLKS(0x0C063C36u);
	{ IF(0x0C063C38u); ; /* slot nop */ UPD(0x0C063ED0u, 3); goto L_0C063ED0; }  /* 0C063C36 bra */
L_0C063C3C: BLKS(0x0C063C3Cu);
	r4 = R32(r7); UPD(0x0C063C3Eu, 1);  /* 0C063C3C mov.l @Rm,Rn */
L_0C063C3E: BLKS(0x0C063C3Eu);
	r5 = 0x2000u; UPD(0x0C063C40u, 1);  /* 0C063C3E mov.w @(disp,pc),Rn */
	T = (r4 & r5) == 0;  /* 0C063C40 tst Rm,Rn */
	if (!T) { UPD(0x0C063C48u, 4); goto L_0C063C48; }  /* 0C063C42 bf */
L_0C063C44: BLKS(0x0C063C44u);
	{ IF(0x0C063C46u); ; /* slot nop */ UPD(0x0C0648C0u, 3); goto L_0C0648C0; }  /* 0C063C44 bra */
L_0C063C48: BLKS(0x0C063C48u);
	r11 = 0xC1F6120u; UPD(0x0C063C4Au, 1);  /* 0C063C48 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C063C4A extu.b Rm,Rn */
	r9 = 0xC283CB4u; UPD(0x0C063C4Eu, 2);  /* 0C063C4C mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C063C4E add Rm,Rn */
	r10 = R32(r11); UPD(0x0C063C52u, 2);  /* 0C063C50 mov.l @Rm,Rn */
	r12 = R32(r14); UPD(0x0C063C54u, 1);  /* 0C063C52 mov.l @Rm,Rn */
	r10 += r6;  /* 0C063C54 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C063C58u, 2);  /* 0C063C56 mov.l @Rm,Rn */
	r10 += 0xFFFFFFFEu;  /* 0C063C58 add #imm,Rn */
	r0 += r12;  /* 0C063C5A add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C063C5Eu, 3);  /* 0C063C5C mov.w @Rm,Rn */
	r13 = (r0 >> 16) | (r0 << 16);  /* 0C063C5E swap.w Rm,Rn */
	r7 = 0xC392B0Cu; UPD(0x0C063C62u, 2);  /* 0C063C60 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r13;  /* 0C063C62 exts.w Rm,Rn */
	r5 = 0xC284EBCu; UPD(0x0C063C66u, 2);  /* 0C063C64 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFu; UPD(0x0C063C68u, 1);  /* 0C063C66 mov.l @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C063C6Au, 1);  /* 0C063C68 mov.l Rm,@Rn */
	T = (r12 & r2) == 0;  /* 0C063C6A tst Rm,Rn */
	{ u32 c_ = T; W16(r5, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C063C74u, 4); goto L_0C063C74; } UPD(0x0C063C70u, 1); goto L_0C063C70; }  /* 0C063C6C bt/s */
L_0C063C70: BLKS(0x0C063C70u);
	r1 += 0x1u;  /* 0C063C70 add #imm,Rn */
	W16(r5, r1); UPD(0x0C063C74u, 2);  /* 0C063C72 mov.w Rm,@Rn */
L_0C063C74: BLKS(0x0C063C74u);
	r13 = 0xC3929E0u; UPD(0x0C063C76u, 1);  /* 0C063C74 mov.l @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C063C78u, 1);  /* 0C063C76 mov.l @(disp,Rm),Rn */
	r2 = R32(r13); UPD(0x0C063C7Au, 1);  /* 0C063C78 mov.l @Rm,Rn */
	r11 -= r2;  /* 0C063C7A sub Rm,Rn */
	r0 = (r11 >> 16) | (r11 << 16);  /* 0C063C7C swap.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C063C80u, 3);  /* 0C063C7E mov.l Rm,@(disp,Rn) */
	r2 = r7;  /* 0C063C80 mov Rm,Rn */
	r0 = 0xAu;  /* 0C063C82 mov #imm,Rn */
	IF(0x0C063C84u); r6 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063C86u, 3);  /* 0C063C84 mov.w @(r0,Rm),Rn */
	r2 += 0x2u;  /* 0C063C86 add #imm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C063C8Au, 2);  /* 0C063C88 mov.l Rm,@(disp,Rn) */
	r3 = 0xC283CAAu; UPD(0x0C063C8Cu, 1);  /* 0C063C8A mov.l @(disp,pc),Rn */
	r12 = R32(r14 + 0x8u); UPD(0x0C063C8Eu, 1);  /* 0C063C8C mov.l @(disp,Rm),Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C063C90u, 1);  /* 0C063C8E mov.w @Rm,Rn */
	r5 = 0xC21F7EAu; UPD(0x0C063C92u, 1);  /* 0C063C90 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C063C92 add Rm,Rn */
	W16(r5, r12); UPD(0x0C063C96u, 2);  /* 0C063C94 mov.w Rm,@Rn */
	r5 = 0xC1F611Cu; UPD(0x0C063C98u, 1);  /* 0C063C96 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C063C9Au, 1);  /* 0C063C98 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C063C9Cu, 1);  /* 0C063C9A mov.w @Rm,Rn */
	W32(r14 + 0x8u, r12); UPD(0x0C063C9Eu, 1);  /* 0C063C9C mov.l Rm,@(disp,Rn) */
	IF(0x0C063C9Eu); r0 <<= 2;  /* 0C063C9E shll2 Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C063CA2u, 2);  /* 0C063CA0 mov.w @Rm,Rn */
	r12 = 0xFFFFFFF8u;  /* 0C063CA2 mov #imm,Rn */
	r7 = 0xC283EB8u; UPD(0x0C063CA6u, 2);  /* 0C063CA4 mov.l @(disp,pc),Rn */
	IF(0x0C063CA6u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C063CA6 shad Rm,Rn */
	r0 += r7;  /* 0C063CA8 add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C063CACu, 3);  /* 0C063CAA mov.w @Rm,Rn */
	r9 = r13 & 0xFF;  /* 0C063CAC extu.b Rm,Rn */
	r10 = 0xC21E0F8u; UPD(0x0C063CB0u, 2);  /* 0C063CAE mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C063CB0 add Rm,Rn */
	W16(r10, r9); UPD(0x0C063CB4u, 2);  /* 0C063CB2 mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C063CB4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r6 = v_; } UPD(0x0C063CB8u, 2);  /* 0C063CB6 mov.w @Rm+,Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C063CBAu, 1);  /* 0C063CB8 mov.w @Rm,Rn */
	r10 = r6 & 0xFF;  /* 0C063CBA extu.b Rm,Rn */
	r2 = 0xC286518u; UPD(0x0C063CBEu, 2);  /* 0C063CBC mov.l @(disp,pc),Rn */
	r10 += r13;  /* 0C063CBE add Rm,Rn */
	W16(r2, r10); UPD(0x0C063CC2u, 2);  /* 0C063CC0 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C063CC4u, 1);  /* 0C063CC2 mov.w @Rm,Rn */
	r2 = 0xC2177F6u; UPD(0x0C063CC6u, 1);  /* 0C063CC4 mov.l @(disp,pc),Rn */
	IF(0x0C063CC6u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C063CC6 shad Rm,Rn */
	r7 = 0x80u; UPD(0x0C063CCAu, 2);  /* 0C063CC8 mov.w @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C063CCCu, 1);  /* 0C063CCA mov.l Rm,@Rn */
	r7 &= r0;  /* 0C063CCC and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C063CCE tst Rm,Rn */
	{ u32 c_ = T; W16(r2, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C063CDCu, 5); goto L_0C063CDC; } UPD(0x0C063CD4u, 1); goto L_0C063CD4; }  /* 0C063CD0 bt/s */
L_0C063CD4: BLKS(0x0C063CD4u);
	r7 = 0xFFFFFF00u; UPD(0x0C063CD6u, 1);  /* 0C063CD4 mov.w @(disp,pc),Rn */
	r6 = r0;  /* 0C063CD6 mov Rm,Rn */
	r6 |= r7;  /* 0C063CD8 or Rm,Rn */
	W16(r2, r6); UPD(0x0C063CDCu, 3);  /* 0C063CDA mov.w Rm,@Rn */
L_0C063CDC: BLKS(0x0C063CDCu);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r11 = v_; } UPD(0x0C063CDEu, 1);  /* 0C063CDC mov.w @Rm+,Rn */
	r6 = 0xC286294u; UPD(0x0C063CE0u, 1);  /* 0C063CDE mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C063CE0 extu.b Rm,Rn */
	r0 = 0x80u; UPD(0x0C063CE4u, 2);  /* 0C063CE2 mov.w @(disp,pc),Rn */
	W16(r6, r7); UPD(0x0C063CE6u, 1);  /* 0C063CE4 mov.w Rm,@Rn */
	r0 &= r7;  /* 0C063CE6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C063CE8 tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063CF4u, 5); goto L_0C063CF4; } UPD(0x0C063CEEu, 1); goto L_0C063CEE; }  /* 0C063CEA bt/s */
L_0C063CEE: BLKS(0x0C063CEEu);
	r13 = 0xFFFFFF00u; UPD(0x0C063CF0u, 1);  /* 0C063CEE mov.w @(disp,pc),Rn */
	r7 |= r13;  /* 0C063CF0 or Rm,Rn */
	W16(r6, r7); UPD(0x0C063CF4u, 2);  /* 0C063CF2 mov.w Rm,@Rn */
L_0C063CF4: BLKS(0x0C063CF4u);
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C063CF6u, 1);  /* 0C063CF4 mov.w @Rm,Rn */
	IF(0x0C063CF6u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C063CF6 shad Rm,Rn */
	r11 = 0xC27556Eu; UPD(0x0C063CFAu, 2);  /* 0C063CF8 mov.l @(disp,pc),Rn */
	r7 = r13 & 0xFF;  /* 0C063CFA extu.b Rm,Rn */
	W16(r11, r7); UPD(0x0C063CFEu, 2);  /* 0C063CFC mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C063D00u, 1);  /* 0C063CFE mov.w @Rm+,Rn */
	r13 = 0xC28671Cu; UPD(0x0C063D02u, 1);  /* 0C063D00 mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C063D02 extu.b Rm,Rn */
	W32(r5, r3); UPD(0x0C063D06u, 2);  /* 0C063D04 mov.l Rm,@Rn */
	W16(r13, r11); UPD(0x0C063D08u, 1);  /* 0C063D06 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C063D08 exts.w Rm,Rn */
	r0 = r3;  /* 0C063D0A mov Rm,Rn */
	r13 = 0xC21CA20u; UPD(0x0C063D0Eu, 3);  /* 0C063D0C mov.l @(disp,pc),Rn */
	IF(0x0C063D0Eu); r0 <<= 16;  /* 0C063D0E shll16 Rn */
	r5 = (u32)(s32)(s16)r10;  /* 0C063D10 exts.w Rm,Rn */
	r0 |= r5;  /* 0C063D12 or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C063D16u, 4);  /* 0C063D14 mov.w @Rm,Rn */
	W32(r13, r0); UPD(0x0C063D18u, 1);  /* 0C063D16 mov.l Rm,@Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C063D1Au, 1);  /* 0C063D18 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C063D1Cu, 1);  /* 0C063D1A mov.w @Rm,Rn */
	IF(0x0C063D1Cu); r1 <<= 16;  /* 0C063D1C shll16 Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C063D20u, 2);  /* 0C063D1E mov.l Rm,@(disp,Rn) */
	r1 |= r0;  /* 0C063D20 or Rm,Rn */
	r0 = r7;  /* 0C063D22 mov Rm,Rn */
	IF(0x0C063D24u); r0 <<= 16;  /* 0C063D24 shll16 Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C063D28u, 4);  /* 0C063D26 mov.l Rm,@(disp,Rn) */
	r6 = 0xC392AF0u; UPD(0x0C063D2Au, 1);  /* 0C063D28 mov.l @(disp,pc),Rn */
	r0 |= r11;  /* 0C063D2A or Rm,Rn */
	W32(r6, r0); UPD(0x0C063D2Eu, 2);  /* 0C063D2C mov.l Rm,@Rn */
	r2 = 0xC2175E8u; UPD(0x0C063D30u, 1);  /* 0C063D2E mov.l @(disp,pc),Rn */
	r0 = 0xC0000000u; UPD(0x0C063D32u, 1);  /* 0C063D30 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C063D34u, 1);  /* 0C063D32 mov.l @Rm,Rn */
	r13 = 0xC28650Cu; UPD(0x0C063D36u, 1);  /* 0C063D34 mov.l @(disp,pc),Rn */
	r6 &= r0;  /* 0C063D36 and Rm,Rn */
	r0 = (r6 >> 16) | (r6 << 16);  /* 0C063D38 swap.w Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C063D3A exts.w Rm,Rn */
	W32(r13, r1); UPD(0x0C063D3Eu, 4);  /* 0C063D3C mov.l Rm,@Rn */
	r0 = r4;  /* 0C063D3E mov Rm,Rn */
	r0 ^= r6;  /* 0C063D40 xor Rm,Rn */
	r1 = 0x200u; UPD(0x0C063D44u, 3);  /* 0C063D42 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFF9u;  /* 0C063D44 mov #imm,Rn */
	r6 = 0x100u; UPD(0x0C063D48u, 2);  /* 0C063D46 mov.w @(disp,pc),Rn */
	r1 &= r0;  /* 0C063D48 and Rm,Rn */
	r2 = 0xC1F6118u; UPD(0x0C063D4Cu, 2);  /* 0C063D4A mov.l @(disp,pc),Rn */
	IF(0x0C063D4Cu); ARG0(0x41CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C063D4C shad Rm,Rn */
	r6 &= r0;  /* 0C063D4E and Rm,Rn */
	W32(r14 + 0x20u, r6); UPD(0x0C063D52u, 3);  /* 0C063D50 mov.l Rm,@(disp,Rn) */
	r13 = r7;  /* 0C063D52 mov Rm,Rn */
	W32(r2, r0); UPD(0x0C063D56u, 2);  /* 0C063D54 mov.l Rm,@Rn */
	r12 = 0xC26C8D4u; UPD(0x0C063D58u, 1);  /* 0C063D56 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C063D5Au, 1);  /* 0C063D58 mov.l @(disp,Rm),Rn */
	W16(r12, r1); UPD(0x0C063D5Cu, 1);  /* 0C063D5A mov.w Rm,@Rn */
	IF(0x0C063D5Cu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C063D5C shad Rm,Rn */
	r12 = 0xC21F5D0u; UPD(0x0C063D60u, 2);  /* 0C063D5E mov.l @(disp,pc),Rn */
	r4 = 0xC000u; UPD(0x0C063D62u, 1);  /* 0C063D60 mov.l @(disp,pc),Rn */
	W16(r12, r2); UPD(0x0C063D64u, 1);  /* 0C063D62 mov.w Rm,@Rn */
	r4 &= r0;  /* 0C063D64 and Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C063D68u, 2);  /* 0C063D66 mov.l Rm,@(disp,Rn) */
	r12 = r4;  /* 0C063D68 mov Rm,Rn */
	r1 = 0xCu;  /* 0C063D6A mov #imm,Rn */
	IF(0x0C063D6Cu); ARG0(0x4C1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C063D6C shld Rm,Rn */
	r0 = 0x13010080u; UPD(0x0C063D70u, 4);  /* 0C063D6E mov.l @(disp,pc),Rn */
	r6 = 0xC21CCE8u; UPD(0x0C063D72u, 1);  /* 0C063D70 mov.l @(disp,pc),Rn */
	r12 |= r0; UPD(0x0C063D74u, 1);  /* 0C063D72 or Rm,Rn */
	W32(r14 + 0x20u, r2); UPD(0x0C063D76u, 1);  /* 0C063D74 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C063D76 mov Rm,Rn */
	W32(r6, r12); UPD(0x0C063D7Au, 2);  /* 0C063D78 mov.l Rm,@Rn */
	r2 = r3;  /* 0C063D7A mov Rm,Rn */
	r6 = 0xFFE0u; UPD(0x0C063D7Eu, 2);  /* 0C063D7C mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C063D7E add Rm,Rn */
	r3 &= r6;  /* 0C063D80 and Rm,Rn */
	r2 &= r6;  /* 0C063D82 and Rm,Rn */
	T = r2 == r3;  /* 0C063D84 cmp/eq Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C063D86 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C063D88 negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C063D8A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063D8C tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C063D8E negc Rm,Rn */
	T = (r1 & r9) == 0;  /* 0C063D90 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x18u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C063D9Au, 13); goto L_0C063D9A; } UPD(0x0C063D96u, 1); goto L_0C063D96; }  /* 0C063D92 bf/s */
L_0C063D96: BLKS(0x0C063D96u);
	{ r9 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0645D0u, 3); goto L_0C0645D0; }  /* 0C063D96 bra */
L_0C063D9A: BLKS(0x0C063D9Au);
	r13 = r5;  /* 0C063D9A mov Rm,Rn */
	r5 += r11;  /* 0C063D9C add Rm,Rn */
	r5 &= r6;  /* 0C063D9E and Rm,Rn */
	r13 &= r6;  /* 0C063DA0 and Rm,Rn */
	T = r13 == r5;  /* 0C063DA2 cmp/eq Rm,Rn */
	r6 = 0x1Fu;  /* 0C063DA4 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C063DA6 negc Rm,Rn */
	r6 &= r10;  /* 0C063DA8 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C063DAA tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C063DAC negc Rm,Rn */
	T = (r9 & r5) == 0;  /* 0C063DAE tst Rm,Rn */
	if (!T) { UPD(0x0C063DB8u, 14); goto L_0C063DB8; }  /* 0C063DB0 bf */
L_0C063DB2: BLKS(0x0C063DB2u);
	r11 = 0u - r0;  /* 0C063DB2 neg Rm,Rn */
	{ r11 += 0x1Fu; /* slot add #imm,Rn */ UPD(0x0C064320u, 4); goto L_0C064320; }  /* 0C063DB4 bra */
L_0C063DB8: BLKS(0x0C063DB8u);
	r5 = 0u - r0;  /* 0C063DB8 neg Rm,Rn */
	r9 = 0xC28629Cu; UPD(0x0C063DBCu, 2);  /* 0C063DBA mov.l @(disp,pc),Rn */
	r0 = 0u - r6;  /* 0C063DBC neg Rm,Rn */
	r2 = 0xC275570u; UPD(0x0C063DC0u, 2);  /* 0C063DBE mov.l @(disp,pc),Rn */
	r5 += 0x1Fu;  /* 0C063DC0 add #imm,Rn */
	r0 += 0x1Fu;  /* 0C063DC2 add #imm,Rn */
	W16(r9, r5); UPD(0x0C063DC6u, 3);  /* 0C063DC4 mov.w Rm,@Rn */
	r7 -= r5;  /* 0C063DC6 sub Rm,Rn */
	W16(r2, r0); UPD(0x0C063DCAu, 2);  /* 0C063DC8 mov.w Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C063DCA add #imm,Rn */
	r10 = 0xC283CB0u; UPD(0x0C063DCEu, 2);  /* 0C063DCC mov.l @(disp,pc),Rn */
	r9 = r11;  /* 0C063DCE mov Rm,Rn */
	{ r2 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ UPD(0x0C063E80u, 4); goto L_0C063E80; }  /* 0C063DD0 bra */
L_0C063E80: BLKS(0x0C063E80u);
	r9 -= r0;  /* 0C063E80 sub Rm,Rn */
	r3 = 0xC392DE4u; UPD(0x0C063E84u, 2);  /* 0C063E82 mov.l @(disp,pc),Rn */
	r6 = r2;  /* 0C063E84 mov Rm,Rn */
	r11 = 0xC21CC88u; UPD(0x0C063E88u, 2);  /* 0C063E86 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C063E88 mov Rm,Rn */
	r13 = 0xC28673Cu; UPD(0x0C063E8Cu, 2);  /* 0C063E8A mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C063E8C add #imm,Rn */
	W16(r10, r7); UPD(0x0C063E90u, 2);  /* 0C063E8E mov.w Rm,@Rn */
	IF(0x0C063E90u); r6 <<= 16;  /* 0C063E90 shll16 Rn */
	IF(0x0C063E92u); r5 <<= 16;  /* 0C063E92 shll16 Rn */
	r1 = 0x4000u; UPD(0x0C063E96u, 3);  /* 0C063E94 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C063E96 mov Rm,Rn */
	W16(r3, r9); UPD(0x0C063E9Au, 2);  /* 0C063E98 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C063E9A cmp/eq Rm,Rn */
	W32(r11, r6); UPD(0x0C063E9Eu, 2);  /* 0C063E9C mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r13, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063EA6u, 3); goto L_0C063EA6; } UPD(0x0C063EA2u, 1); goto L_0C063EA2; }  /* 0C063E9E bf/s */
L_0C063EA2: BLKS(0x0C063EA2u);
	{ r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C064230u, 3); goto L_0C064230; }  /* 0C063EA2 bra */
L_0C063EA6: BLKS(0x0C063EA6u);
	T = (s32)r4 > (s32)r1;  /* 0C063EA6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C063EB0u, 4); goto L_0C063EB0; } goto L_0C063EAC; }  /* 0C063EA8 bf/s */
L_0C063EAC: BLKS(0x0C063EACu);
	{ IF(0x0C063EAEu); ; /* slot nop */ UPD(0x0C064030u, 4); goto L_0C064030; }  /* 0C063EAC bra */
L_0C063EB0: BLKS(0x0C063EB0u);
	{ u32 c_ = T; r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063EF0u, 3); goto L_0C063EF0; } UPD(0x0C063EB4u, 1); goto L_0C063EB4; }  /* 0C063EB0 bt/s */
L_0C063EB4: BLKS(0x0C063EB4u);
	r10 = 0xC1F6124u; UPD(0x0C063EB6u, 1);  /* 0C063EB4 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C063EB8u, 1);  /* 0C063EB6 mov.b @Rm,Rn */
	r13 = 0xC1F611Cu; UPD(0x0C063EBAu, 1);  /* 0C063EB8 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C063EBA add #imm,Rn */
	W8(r10, r7); UPD(0x0C063EBEu, 2);  /* 0C063EBC mov.b Rm,@Rn */
	r2 = R32(r13); UPD(0x0C063EC0u, 1);  /* 0C063EBE mov.l @Rm,Rn */
	r7 = 0xC1F6118u; UPD(0x0C063EC2u, 1);  /* 0C063EC0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C063EC4u, 1);  /* 0C063EC2 mov.w @Rm+,Rn */
	W32(r7, r4); UPD(0x0C063EC6u, 1);  /* 0C063EC4 mov.l Rm,@Rn */
	T = (r4 & r4) == 0;  /* 0C063EC6 tst Rm,Rn */
	{ u32 c_ = T; W32(r13, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063ED0u, 4); goto L_0C063ED0; } UPD(0x0C063ECCu, 1); goto L_0C063ECC; }  /* 0C063EC8 bt/s */
L_0C063ECC: BLKS(0x0C063ECCu);
	{ r4 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C063C3Eu, 3); goto L_0C063C3E; }  /* 0C063ECC bra */
L_0C063ED0: BLKS(0x0C063ED0u);
	r5 = 0xF0000000u; UPD(0x0C063ED2u, 1);  /* 0C063ED0 mov.l @(disp,pc),Rn */
	r6 = 0xC392AF4u; UPD(0x0C063ED4u, 1);  /* 0C063ED2 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C063ED6u, 1);  /* 0C063ED4 mov.l Rm,@Rn */
	W32(r6, r8); UPD(0x0C063ED8u, 1);  /* 0C063ED6 mov.l Rm,@Rn */
	r14 += 0x24u;  /* 0C063ED8 add #imm,Rn */
	UPD(0x0C063EDAu, 1);
L_0C063EDA: BLKS(0x0C063EDAu);
	r15 = r14;  /* 0C063EDA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C063EDEu, 2);  /* 0C063EDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C063EE0u, 1);  /* 0C063EDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C063EE2u, 1);  /* 0C063EE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C063EE4u, 1);  /* 0C063EE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C063EE6u, 1);  /* 0C063EE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C063EE8u, 1);  /* 0C063EE6 mov.l @Rm+,Rn */
	IF(0x0C063EE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C063EE8 rts */
L_0C063EF0: BLKS(0x0C063EF0u);
	r5 = 0xC284EBCu; UPD(0x0C063EF2u, 1);  /* 0C063EF0 mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C063EF2 mov #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C063EF6u, 2);  /* 0C063EF4 mov.w @Rm,Rn */
	r3 = 0xC3929A8u; UPD(0x0C063EF8u, 1);  /* 0C063EF6 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C063EF8 add Rm,Rn */
	IF(0x0C063EFAu); r1 <<= 16;  /* 0C063EFA shll16 Rn */
	W32(r3, r1); UPD(0x0C063EFEu, 3);  /* 0C063EFC mov.l Rm,@Rn */
	IF(0x0C063EFEu); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C063F00u, 1);  /* 0C063EFE mov.w @(r0,Rm),Rn */
	r1 += r6;  /* 0C063F00 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C063F04u, 2);  /* 0C063F02 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C063F06u, 1);  /* 0C063F04 mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C063F06 add Rm,Rn */
	r7 = 0xC3867F4u; UPD(0x0C063F0Au, 2);  /* 0C063F08 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C063F0A add Rm,Rn */
	r3 = 0xC2864B0u; UPD(0x0C063F0Eu, 2);  /* 0C063F0C mov.l @(disp,pc),Rn */
	W32(r7, r1); UPD(0x0C063F10u, 1);  /* 0C063F0E mov.l Rm,@Rn */
	W32(r3, r2); UPD(0x0C063F12u, 1);  /* 0C063F10 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C063F12 exts.w Rm,Rn */
	r1 = 0xC285308u; UPD(0x0C063F16u, 2);  /* 0C063F14 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C063F16 add Rm,Rn */
	r2 += 0x1u;  /* 0C063F18 add #imm,Rn */
	W32(r1, r2); UPD(0x0C063F1Cu, 3);  /* 0C063F1A mov.l Rm,@Rn */
	r10 = 0xC21CA20u; UPD(0x0C063F1Eu, 1);  /* 0C063F1C mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C063F20u, 1);  /* 0C063F1E mov.l Rm,@Rn */
	r4 = R32(r10); UPD(0x0C063F22u, 1);  /* 0C063F20 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063F22 add #imm,Rn */
	W32(r8, r4); UPD(0x0C063F26u, 2);  /* 0C063F24 mov.l Rm,@Rn */
	r5 = 0xC3929A8u; UPD(0x0C063F28u, 1);  /* 0C063F26 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F28 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C063F2Cu, 2);  /* 0C063F2A mov.l @Rm,Rn */
	r0 = R32(r5); UPD(0x0C063F2Eu, 1);  /* 0C063F2C mov.l @Rm,Rn */
	r0 |= r1;  /* 0C063F2E or Rm,Rn */
	W32(r8, r0); UPD(0x0C063F32u, 2);  /* 0C063F30 mov.l Rm,@Rn */
	r12 = R32(r11); UPD(0x0C063F34u, 1);  /* 0C063F32 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063F34 add #imm,Rn */
	r12 |= r7;  /* 0C063F36 or Rm,Rn */
	W32(r8, r12); UPD(0x0C063F3Au, 3);  /* 0C063F38 mov.l Rm,@Rn */
	r12 = 0xC1F6114u; UPD(0x0C063F3Cu, 1);  /* 0C063F3A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F3C add #imm,Rn */
	r10 = R32(r12); UPD(0x0C063F40u, 2);  /* 0C063F3E mov.l @Rm,Rn */
	W32(r8, r10); UPD(0x0C063F42u, 1);  /* 0C063F40 mov.l Rm,@Rn */
	r10 = 0xC21CCE8u; UPD(0x0C063F44u, 1);  /* 0C063F42 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F44 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C063F48u, 2);  /* 0C063F46 mov.l @Rm,Rn */
	r5 = 0xC21CA20u; UPD(0x0C063F4Au, 1);  /* 0C063F48 mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C063F4Cu, 1);  /* 0C063F4A mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C063F4Eu, 1);  /* 0C063F4C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063F4E add #imm,Rn */
	r0 = R32(r5); UPD(0x0C063F52u, 2);  /* 0C063F50 mov.l @Rm,Rn */
	r0 += r4;  /* 0C063F52 add Rm,Rn */
	r0 += r6;  /* 0C063F54 add Rm,Rn */
	W32(r8, r0); UPD(0x0C063F58u, 3);  /* 0C063F56 mov.l Rm,@Rn */
	r2 = 0xC3867F4u; UPD(0x0C063F5Au, 1);  /* 0C063F58 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F5A add #imm,Rn */
	r1 = R32(r3); UPD(0x0C063F5Eu, 2);  /* 0C063F5C mov.l @Rm,Rn */
	r5 = R32(r2); UPD(0x0C063F60u, 1);  /* 0C063F5E mov.l @Rm,Rn */
	r5 |= r1;  /* 0C063F60 or Rm,Rn */
	W32(r8, r5); UPD(0x0C063F64u, 2);  /* 0C063F62 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C063F66u, 1);  /* 0C063F64 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063F66 add #imm,Rn */
	r4 |= r7;  /* 0C063F68 or Rm,Rn */
	W32(r8, r4); UPD(0x0C063F6Cu, 3);  /* 0C063F6A mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C063F6Eu, 1);  /* 0C063F6C mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C063F70u, 1);  /* 0C063F6E add #imm,Rn */
	W32(r8, r0); UPD(0x0C063F72u, 1);  /* 0C063F70 mov.l Rm,@Rn */
	r6 = R32(r10); UPD(0x0C063F74u, 1);  /* 0C063F72 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063F74 add #imm,Rn */
	W32(r8, r6); UPD(0x0C063F78u, 2);  /* 0C063F76 mov.l Rm,@Rn */
	r0 = 0xC21CA20u; UPD(0x0C063F7Au, 1);  /* 0C063F78 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F7A add #imm,Rn */
	r2 = R32(r0); UPD(0x0C063F7Eu, 2);  /* 0C063F7C mov.l @Rm,Rn */
	r2 += r7;  /* 0C063F7E add Rm,Rn */
	r2 += 0x1u;  /* 0C063F80 add #imm,Rn */
	W32(r8, r2); UPD(0x0C063F84u, 3);  /* 0C063F82 mov.l Rm,@Rn */
	r3 = 0xC3929A8u; UPD(0x0C063F86u, 1);  /* 0C063F84 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F86 add #imm,Rn */
	r12 = R32(r3); UPD(0x0C063F8Au, 2);  /* 0C063F88 mov.l @Rm,Rn */
	r3 = 0xC285308u; UPD(0x0C063F8Cu, 1);  /* 0C063F8A mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C063F8Eu, 1);  /* 0C063F8C mov.l @Rm,Rn */
	r12 |= r5;  /* 0C063F8E or Rm,Rn */
	W32(r8, r12); UPD(0x0C063F92u, 2);  /* 0C063F90 mov.l Rm,@Rn */
	r10 = R32(r11); UPD(0x0C063F94u, 1);  /* 0C063F92 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C063F94 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C063F96 add #imm,Rn */
	r10 |= r12;  /* 0C063F98 or Rm,Rn */
	W32(r8, r10); UPD(0x0C063F9Cu, 4);  /* 0C063F9A mov.l Rm,@Rn */
	r1 = 0xC1F6114u; UPD(0x0C063F9Eu, 1);  /* 0C063F9C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063F9E add #imm,Rn */
	r4 = R32(r1); UPD(0x0C063FA2u, 2);  /* 0C063FA0 mov.l @Rm,Rn */
	r6 = 0xC21CCE8u; UPD(0x0C063FA4u, 1);  /* 0C063FA2 mov.l @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C063FA6u, 1);  /* 0C063FA4 mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C063FA8u, 1);  /* 0C063FA6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063FA8 add #imm,Rn */
	W32(r8, r2); UPD(0x0C063FACu, 2);  /* 0C063FAA mov.l Rm,@Rn */
	r10 = R32(r0); UPD(0x0C063FAEu, 1);  /* 0C063FAC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063FAE add #imm,Rn */
	r9 = R32(r11); UPD(0x0C063FB2u, 2);  /* 0C063FB0 mov.l @Rm,Rn */
	r5 = 0x10001u; UPD(0x0C063FB4u, 1);  /* 0C063FB2 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C063FB4 add Rm,Rn */
	r10 += r7;  /* 0C063FB6 add Rm,Rn */
	r10 += r5;  /* 0C063FB8 add Rm,Rn */
	W32(r8, r10); UPD(0x0C063FBCu, 4);  /* 0C063FBA mov.l Rm,@Rn */
	r0 = 0xC3867F4u; UPD(0x0C063FBEu, 1);  /* 0C063FBC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063FBE add #imm,Rn */
	r11 = R32(r0); UPD(0x0C063FC2u, 2);  /* 0C063FC0 mov.l @Rm,Rn */
	r1 = R32(r3); UPD(0x0C063FC4u, 1);  /* 0C063FC2 mov.l @Rm,Rn */
	r11 |= r1;  /* 0C063FC4 or Rm,Rn */
	W32(r8, r11); UPD(0x0C063FC8u, 2);  /* 0C063FC6 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C063FCAu, 1);  /* 0C063FC8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C063FCA add #imm,Rn */
	r4 |= r12;  /* 0C063FCC or Rm,Rn */
	W32(r8, r4); UPD(0x0C063FD0u, 3);  /* 0C063FCE mov.l Rm,@Rn */
	r6 = 0xC1F6114u; UPD(0x0C063FD2u, 1);  /* 0C063FD0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C063FD2 add #imm,Rn */
	UPD(0x0C063FD4u, 1);
L_0C063FD4: BLKS(0x0C063FD4u);
	r1 = R32(r6); UPD(0x0C063FD6u, 1);  /* 0C063FD4 mov.l @Rm,Rn */
L_0C063FD6: BLKS(0x0C063FD6u);
	W32(r8, r1); UPD(0x0C063FD8u, 1);  /* 0C063FD6 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C063FD8 add #imm,Rn */
	UPD(0x0C063FDAu, 1);
L_0C063FDA: BLKS(0x0C063FDAu);
	{ IF(0x0C063FDCu); ; /* slot nop */ UPD(0x0C063EB4u, 3); goto L_0C063EB4; }  /* 0C063FDA bra */
L_0C064030: BLKS(0x0C064030u);
	r7 = 0x8000u; UPD(0x0C064032u, 1);  /* 0C064030 mov.l @(disp,pc),Rn */
	T = r4 == r7;  /* 0C064032 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06403Cu, 4); goto L_0C06403C; }  /* 0C064034 bf */
L_0C064036: BLKS(0x0C064036u);
	r4 = R32(r14 + 0xCu); UPD(0x0C064038u, 1);  /* 0C064036 mov.l @(disp,Rm),Rn */
	{ r4 += r2; /* slot add Rm,Rn */ UPD(0x0C064140u, 3); goto L_0C064140; }  /* 0C064038 bra */
L_0C06403C: BLKS(0x0C06403Cu);
	r6 = 0xC000u; UPD(0x0C06403Eu, 1);  /* 0C06403C mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C06403E cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C063FDAu, 4); goto L_0C063FDA; }  /* 0C064040 bf */
L_0C064042: BLKS(0x0C064042u);
	r1 = R32(r14 + 0xCu); UPD(0x0C064044u, 1);  /* 0C064042 mov.l @(disp,Rm),Rn */
	r0 = 0xC284EBCu; UPD(0x0C064046u, 1);  /* 0C064044 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C064048u, 1);  /* 0C064046 mov.w @Rm,Rn */
	r0 = 0x1Eu;  /* 0C064048 mov #imm,Rn */
	IF(0x0C06404Au); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C06404Cu, 2);  /* 0C06404A mov.w @(r0,Rm),Rn */
	r1 += r2;  /* 0C06404C add Rm,Rn */
	r3 -= r1;  /* 0C06404E sub Rm,Rn */
	r3 -= r7;  /* 0C064050 sub Rm,Rn */
	r6 = 0xC3867F4u; UPD(0x0C064054u, 4);  /* 0C064052 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C064054 add #imm,Rn */
	IF(0x0C064056u); r3 <<= 16;  /* 0C064056 shll16 Rn */
	W32(r6, r3); UPD(0x0C06405Au, 3);  /* 0C064058 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C06405A mov #imm,Rn */
	r6 = (u32)(s32)(s16)r10;  /* 0C06405C exts.w Rm,Rn */
	IF(0x0C06405Eu); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064060u, 3);  /* 0C06405E mov.w @(r0,Rm),Rn */
	r3 -= r5;  /* 0C064060 sub Rm,Rn */
	r10 = R32(r14 + 0x10u); UPD(0x0C064064u, 2);  /* 0C064062 mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C064064 mov #imm,Rn */
	IF(0x0C064066u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064068u, 2);  /* 0C064066 mov.w @(r0,Rm),Rn */
	r10 += r6;  /* 0C064068 add Rm,Rn */
	r2 -= r10;  /* 0C06406A sub Rm,Rn */
	r7 = 0xC285308u; UPD(0x0C06406Eu, 3);  /* 0C06406C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C06406E sub Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C064070 add #imm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C064074u, 3);  /* 0C064072 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r9;  /* 0C064074 exts.w Rm,Rn */
	W32(r7, r2); UPD(0x0C064078u, 2);  /* 0C064076 mov.l Rm,@Rn */
	r3 += r5;  /* 0C064078 add Rm,Rn */
	r4 = 0xC220C30u; UPD(0x0C06407Cu, 2);  /* 0C06407A mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C06407C sub Rm,Rn */
	r5 = 0xC392DCCu; UPD(0x0C064080u, 2);  /* 0C06407E mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C064080 add #imm,Rn */
	W32(r4, r3); UPD(0x0C064084u, 2);  /* 0C064082 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C064086u, 1);  /* 0C064084 mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C064088u, 1);  /* 0C064086 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C06408Au, 1);  /* 0C064088 mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C06408Cu, 1);  /* 0C06408A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06408C add #imm,Rn */
	W32(r8, r2); UPD(0x0C064090u, 2);  /* 0C06408E mov.l Rm,@Rn */
	r0 = 0xC3867F4u; UPD(0x0C064092u, 1);  /* 0C064090 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064092 add #imm,Rn */
	r1 = R32(r7); UPD(0x0C064096u, 2);  /* 0C064094 mov.l @Rm,Rn */
	r12 = R32(r0); UPD(0x0C064098u, 1);  /* 0C064096 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C064098 or Rm,Rn */
	W32(r8, r12); UPD(0x0C06409Cu, 2);  /* 0C06409A mov.l Rm,@Rn */
	r3 = R32(r11); UPD(0x0C06409Eu, 1);  /* 0C06409C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06409E add #imm,Rn */
	r3 |= r6;  /* 0C0640A0 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0640A4u, 3);  /* 0C0640A2 mov.l Rm,@Rn */
	r3 = 0xC1F6114u; UPD(0x0C0640A6u, 1);  /* 0C0640A4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0640A6 add #imm,Rn */
	r0 = R32(r3); UPD(0x0C0640AAu, 2);  /* 0C0640A8 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C0640ACu, 1);  /* 0C0640AA mov.l Rm,@Rn */
	r0 = 0xC21CCE8u; UPD(0x0C0640AEu, 1);  /* 0C0640AC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0640AE add #imm,Rn */
	r12 = R32(r0); UPD(0x0C0640B2u, 2);  /* 0C0640B0 mov.l @Rm,Rn */
	r2 = 0xC21CA20u; UPD(0x0C0640B4u, 1);  /* 0C0640B2 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C0640B6u, 1);  /* 0C0640B4 mov.l Rm,@Rn */
	r12 = R32(r2); UPD(0x0C0640B8u, 1);  /* 0C0640B6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640B8 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C0640BCu, 2);  /* 0C0640BA mov.l @Rm,Rn */
	r12 += r2;  /* 0C0640BC add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0640C0u, 2);  /* 0C0640BE mov.l @(disp,pc),Rn */
	r12 += r2;  /* 0C0640C0 add Rm,Rn */
	W32(r8, r12); UPD(0x0C0640C4u, 2);  /* 0C0640C2 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C0640C6u, 1);  /* 0C0640C4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640C6 add #imm,Rn */
	r12 = R32(r4); UPD(0x0C0640CAu, 2);  /* 0C0640C8 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C0640CA or Rm,Rn */
	W32(r8, r12); UPD(0x0C0640CEu, 2);  /* 0C0640CC mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C0640D0u, 1);  /* 0C0640CE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640D0 add #imm,Rn */
	r12 |= r6;  /* 0C0640D2 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0640D6u, 3);  /* 0C0640D4 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C0640D8u, 1);  /* 0C0640D6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640D8 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0640DCu, 2);  /* 0C0640DA mov.l Rm,@Rn */
	r2 = R32(r0); UPD(0x0C0640DEu, 1);  /* 0C0640DC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640DE add #imm,Rn */
	W32(r8, r2); UPD(0x0C0640E2u, 2);  /* 0C0640E0 mov.l Rm,@Rn */
	r12 = 0xC21CA20u; UPD(0x0C0640E4u, 1);  /* 0C0640E2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0640E4 add #imm,Rn */
	r7 = R32(r12); UPD(0x0C0640E8u, 2);  /* 0C0640E6 mov.l @Rm,Rn */
	r7 += r6;  /* 0C0640E8 add Rm,Rn */
	r7 += 0x1u;  /* 0C0640EA add #imm,Rn */
	W32(r8, r7); UPD(0x0C0640EEu, 3);  /* 0C0640EC mov.l Rm,@Rn */
	r2 = 0xC3867F4u; UPD(0x0C0640F0u, 1);  /* 0C0640EE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0640F0 add #imm,Rn */
	r12 = R32(r2); UPD(0x0C0640F4u, 2);  /* 0C0640F2 mov.l @Rm,Rn */
	r1 = R32(r5); UPD(0x0C0640F6u, 1);  /* 0C0640F4 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C0640F6 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0640FAu, 2);  /* 0C0640F8 mov.l Rm,@Rn */
	r2 = R32(r11); UPD(0x0C0640FCu, 1);  /* 0C0640FA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0640FC add #imm,Rn */
	r2 |= r10;  /* 0C0640FE or Rm,Rn */
	W32(r8, r2); UPD(0x0C064102u, 3);  /* 0C064100 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C064104u, 1);  /* 0C064102 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064104 add #imm,Rn */
	W32(r8, r7); UPD(0x0C064108u, 2);  /* 0C064106 mov.l Rm,@Rn */
	r12 = R32(r0); UPD(0x0C06410Au, 1);  /* 0C064108 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06410A add #imm,Rn */
	W32(r8, r12); UPD(0x0C06410Eu, 2);  /* 0C06410C mov.l Rm,@Rn */
	r2 = 0xC21CA20u; UPD(0x0C064110u, 1);  /* 0C06410E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064110 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C064114u, 2);  /* 0C064112 mov.l @Rm,Rn */
	r7 = R32(r2); UPD(0x0C064116u, 1);  /* 0C064114 mov.l @Rm,Rn */
	r7 += r0;  /* 0C064116 add Rm,Rn */
	r7 += r6;  /* 0C064118 add Rm,Rn */
	r6 = 0x10001u; UPD(0x0C06411Cu, 3);  /* 0C06411A mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C06411C add Rm,Rn */
	W32(r8, r7); UPD(0x0C064120u, 2);  /* 0C06411E mov.l Rm,@Rn */
	r11 = R32(r4); UPD(0x0C064122u, 1);  /* 0C064120 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064122 add #imm,Rn */
	r12 = R32(r5); UPD(0x0C064126u, 2);  /* 0C064124 mov.l @Rm,Rn */
	r11 |= r12;  /* 0C064126 or Rm,Rn */
	W32(r8, r11); UPD(0x0C06412Au, 2);  /* 0C064128 mov.l Rm,@Rn */
	r1 = R32(r13); UPD(0x0C06412Cu, 1);  /* 0C06412A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06412C add #imm,Rn */
	r1 |= r10;  /* 0C06412E or Rm,Rn */
	UPD(0x0C064130u, 2);
L_0C064130: BLKS(0x0C064130u);
	W32(r8, r1); UPD(0x0C064132u, 1);  /* 0C064130 mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C064134u, 1);  /* 0C064132 mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C063FD6u, 3); goto L_0C063FD6; }  /* 0C064134 bra */
L_0C064140: BLKS(0x0C064140u);
	r0 = 0xC284EBCu; UPD(0x0C064142u, 1);  /* 0C064140 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C064144u, 1);  /* 0C064142 mov.w @Rm,Rn */
	r0 = 0x1Eu;  /* 0C064144 mov #imm,Rn */
	IF(0x0C064146u); r6 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064148u, 2);  /* 0C064146 mov.w @(r0,Rm),Rn */
	r3 -= r4;  /* 0C064148 sub Rm,Rn */
	r3 -= r6;  /* 0C06414A sub Rm,Rn */
	r6 = 0xC3867F4u; UPD(0x0C06414Eu, 3);  /* 0C06414C mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C06414E add #imm,Rn */
	IF(0x0C064150u); r3 <<= 16;  /* 0C064150 shll16 Rn */
	W32(r6, r3); UPD(0x0C064154u, 3);  /* 0C064152 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C064154 mov #imm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C064158u, 2);  /* 0C064156 mov.l @(disp,pc),Rn */
	r3 -= r5;  /* 0C064158 sub Rm,Rn */
	r7 = 0xC220C30u; UPD(0x0C06415Cu, 2);  /* 0C06415A mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C06415C add Rm,Rn */
	IF(0x0C06415Eu); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064160u, 2);  /* 0C06415E mov.w @(r0,Rm),Rn */
	W32(r7, r3); UPD(0x0C064162u, 1);  /* 0C064160 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C064164u, 1);  /* 0C064162 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C064164 exts.w Rm,Rn */
	r3 = 0xC2864B0u; UPD(0x0C064168u, 2);  /* 0C064166 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C064168 add Rm,Rn */
	W32(r3, r5); UPD(0x0C06416Cu, 2);  /* 0C06416A mov.l Rm,@Rn */
	r2 = 0xC285308u; UPD(0x0C06416Eu, 1);  /* 0C06416C mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C06416E add Rm,Rn */
	r5 += 0x1u;  /* 0C064170 add #imm,Rn */
	W32(r2, r5); UPD(0x0C064174u, 3);  /* 0C064172 mov.l Rm,@Rn */
	r4 = 0xC21CA20u; UPD(0x0C064176u, 1);  /* 0C064174 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C064178u, 1);  /* 0C064176 mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C06417Au, 1);  /* 0C064178 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06417A add #imm,Rn */
	W32(r8, r10); UPD(0x0C06417Eu, 2);  /* 0C06417C mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C064180u, 1);  /* 0C06417E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064180 add #imm,Rn */
	r12 = R32(r6); UPD(0x0C064184u, 2);  /* 0C064182 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C064184 or Rm,Rn */
	W32(r8, r12); UPD(0x0C064188u, 2);  /* 0C064186 mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C06418Au, 1);  /* 0C064188 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06418A add #imm,Rn */
	r5 |= r7;  /* 0C06418C or Rm,Rn */
	W32(r8, r5); UPD(0x0C064190u, 3);  /* 0C06418E mov.l Rm,@Rn */
	r5 = 0xC1F6114u; UPD(0x0C064192u, 1);  /* 0C064190 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064192 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C064196u, 2);  /* 0C064194 mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C064198u, 1);  /* 0C064196 mov.l Rm,@Rn */
	r6 = 0xC21CCE8u; UPD(0x0C06419Au, 1);  /* 0C064198 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06419A add #imm,Rn */
	r0 = R32(r6); UPD(0x0C06419Eu, 2);  /* 0C06419C mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C0641A0u, 1);  /* 0C06419E mov.l Rm,@Rn */
	r0 = 0xC21CA20u; UPD(0x0C0641A2u, 1);  /* 0C0641A0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0641A2 add #imm,Rn */
	r4 = R32(r11); UPD(0x0C0641A6u, 2);  /* 0C0641A4 mov.l @Rm,Rn */
	r10 = R32(r0); UPD(0x0C0641A8u, 1);  /* 0C0641A6 mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0641AAu, 1);  /* 0C0641A8 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C0641AA add Rm,Rn */
	r10 += r2;  /* 0C0641AC add Rm,Rn */
	W32(r8, r10); UPD(0x0C0641B0u, 3);  /* 0C0641AE mov.l Rm,@Rn */
	r10 = 0xC220C30u; UPD(0x0C0641B2u, 1);  /* 0C0641B0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0641B2 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C0641B6u, 2);  /* 0C0641B4 mov.l @Rm,Rn */
	r12 = R32(r10); UPD(0x0C0641B8u, 1);  /* 0C0641B6 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C0641B8 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0641BCu, 2);  /* 0C0641BA mov.l Rm,@Rn */
	r3 = R32(r13); UPD(0x0C0641BEu, 1);  /* 0C0641BC mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C0641C0u, 1);  /* 0C0641BE add #imm,Rn */
	r3 |= r7;  /* 0C0641C0 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0641C4u, 2);  /* 0C0641C2 mov.l Rm,@Rn */
	r4 = R32(r5); UPD(0x0C0641C6u, 1);  /* 0C0641C4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641C6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0641CAu, 2);  /* 0C0641C8 mov.l Rm,@Rn */
	r12 = R32(r6); UPD(0x0C0641CCu, 1);  /* 0C0641CA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641CC add #imm,Rn */
	W32(r8, r12); UPD(0x0C0641D0u, 2);  /* 0C0641CE mov.l Rm,@Rn */
	r2 = R32(r0); UPD(0x0C0641D2u, 1);  /* 0C0641D0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641D2 add #imm,Rn */
	r2 += r7;  /* 0C0641D4 add Rm,Rn */
	r2 += 0x1u;  /* 0C0641D6 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0641DAu, 4);  /* 0C0641D8 mov.l Rm,@Rn */
	r3 = 0xC3867F4u; UPD(0x0C0641DCu, 1);  /* 0C0641DA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0641DC add #imm,Rn */
	r1 = 0xC285308u; UPD(0x0C0641E0u, 2);  /* 0C0641DE mov.l @(disp,pc),Rn */
	r12 = R32(r3); UPD(0x0C0641E2u, 1);  /* 0C0641E0 mov.l @Rm,Rn */
	r4 = R32(r1); UPD(0x0C0641E4u, 1);  /* 0C0641E2 mov.l @Rm,Rn */
	r12 |= r4;  /* 0C0641E4 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0641E8u, 2);  /* 0C0641E6 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0641E8 exts.w Rm,Rn */
	r9 = R32(r11); UPD(0x0C0641ECu, 2);  /* 0C0641EA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641EC add #imm,Rn */
	r9 |= r12;  /* 0C0641EE or Rm,Rn */
	W32(r8, r9); UPD(0x0C0641F2u, 3);  /* 0C0641F0 mov.l Rm,@Rn */
	r2 = R32(r5); UPD(0x0C0641F4u, 1);  /* 0C0641F2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641F4 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0641F8u, 2);  /* 0C0641F6 mov.l Rm,@Rn */
	r3 = R32(r6); UPD(0x0C0641FAu, 1);  /* 0C0641F8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0641FA add #imm,Rn */
	W32(r8, r3); UPD(0x0C0641FEu, 2);  /* 0C0641FC mov.l Rm,@Rn */
	r4 = R32(r0); UPD(0x0C064200u, 1);  /* 0C0641FE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064200 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C064204u, 2);  /* 0C064202 mov.l @Rm,Rn */
	r1 = 0x10001u; UPD(0x0C064206u, 1);  /* 0C064204 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C064206 add Rm,Rn */
	r4 += r7;  /* 0C064208 add Rm,Rn */
	r4 += r1;  /* 0C06420A add Rm,Rn */
	W32(r8, r4); UPD(0x0C06420Eu, 4);  /* 0C06420C mov.l Rm,@Rn */
	r9 = R32(r10); UPD(0x0C064210u, 1);  /* 0C06420E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064210 add #imm,Rn */
	r10 = 0xC285308u; UPD(0x0C064214u, 2);  /* 0C064212 mov.l @(disp,pc),Rn */
	r6 = R32(r10); UPD(0x0C064216u, 1);  /* 0C064214 mov.l @Rm,Rn */
	r9 |= r6;  /* 0C064216 or Rm,Rn */
	W32(r8, r9); UPD(0x0C06421Au, 2);  /* 0C064218 mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C06421Cu, 1);  /* 0C06421A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06421C add #imm,Rn */
	r11 |= r12;  /* 0C06421E or Rm,Rn */
	W32(r8, r11); UPD(0x0C064222u, 3);  /* 0C064220 mov.l Rm,@Rn */
	r5 = 0xC1F6114u; UPD(0x0C064224u, 1);  /* 0C064222 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064224 add #imm,Rn */
	UPD(0x0C064226u, 1);
L_0C064226: BLKS(0x0C064226u);
	{ r1 = R32(r5); /* slot mov.l @Rm,Rn */ UPD(0x0C063FD6u, 3); goto L_0C063FD6; }  /* 0C064226 bra */
L_0C064230: BLKS(0x0C064230u);
	r1 = 0xC284EBCu; UPD(0x0C064232u, 1);  /* 0C064230 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C064234u, 1);  /* 0C064232 mov.w @Rm,Rn */
	r0 = 0xC3929A8u; UPD(0x0C064236u, 1);  /* 0C064234 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C064236 add Rm,Rn */
	IF(0x0C064238u); r5 <<= 16;  /* 0C064238 shll16 Rn */
	W32(r0, r5); UPD(0x0C06423Cu, 3);  /* 0C06423A mov.l Rm,@Rn */
	r5 += r6;  /* 0C06423C add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C064240u, 2);  /* 0C06423E mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C064240 mov #imm,Rn */
	r7 = 0xC3867F4u; UPD(0x0C064244u, 2);  /* 0C064242 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C064244 add Rm,Rn */
	W32(r7, r5); UPD(0x0C064248u, 2);  /* 0C064246 mov.l Rm,@Rn */
	IF(0x0C064248u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C06424Au, 1);  /* 0C064248 mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C06424A exts.w Rm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C06424Eu, 2);  /* 0C06424C mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C06424E mov #imm,Rn */
	IF(0x0C064250u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064252u, 2);  /* 0C064250 mov.w @(r0,Rm),Rn */
	r4 += r7;  /* 0C064252 add Rm,Rn */
	r3 -= r4;  /* 0C064254 sub Rm,Rn */
	r5 = 0xC285308u; UPD(0x0C064258u, 3);  /* 0C064256 mov.l @(disp,pc),Rn */
	r3 -= r10;  /* 0C064258 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C06425A add #imm,Rn */
	W32(r5, r3); UPD(0x0C06425Eu, 3);  /* 0C06425C mov.l Rm,@Rn */
	r10 = (u32)(s32)(s16)r9;  /* 0C06425E exts.w Rm,Rn */
	r4 = 0xC392DCCu; UPD(0x0C064262u, 2);  /* 0C064260 mov.l @(disp,pc),Rn */
	r3 -= r10;  /* 0C064262 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C064264 add #imm,Rn */
	W32(r4, r3); UPD(0x0C064268u, 3);  /* 0C064266 mov.l Rm,@Rn */
	r1 = 0xC21CA20u; UPD(0x0C06426Au, 1);  /* 0C064268 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C06426Cu, 1);  /* 0C06426A mov.l Rm,@Rn */
	r3 = R32(r1); UPD(0x0C06426Eu, 1);  /* 0C06426C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06426E add #imm,Rn */
	W32(r8, r3); UPD(0x0C064272u, 2);  /* 0C064270 mov.l Rm,@Rn */
	r2 = 0xC3929A8u; UPD(0x0C064274u, 1);  /* 0C064272 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064274 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C064278u, 2);  /* 0C064276 mov.l @Rm,Rn */
	r12 = R32(r2); UPD(0x0C06427Au, 1);  /* 0C064278 mov.l @Rm,Rn */
	r12 |= r0;  /* 0C06427A or Rm,Rn */
	W32(r8, r12); UPD(0x0C06427Eu, 2);  /* 0C06427C mov.l Rm,@Rn */
	r6 = R32(r11); UPD(0x0C064280u, 1);  /* 0C06427E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064280 add #imm,Rn */
	r6 |= r7;  /* 0C064282 or Rm,Rn */
	W32(r8, r6); UPD(0x0C064286u, 3);  /* 0C064284 mov.l Rm,@Rn */
	r6 = 0xC1F6114u; UPD(0x0C064288u, 1);  /* 0C064286 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064288 add #imm,Rn */
	r9 = R32(r6); UPD(0x0C06428Cu, 2);  /* 0C06428A mov.l @Rm,Rn */
	r1 = 0xC21CCE8u; UPD(0x0C06428Eu, 1);  /* 0C06428C mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C064290u, 1);  /* 0C06428E mov.l Rm,@Rn */
	r3 = R32(r1); UPD(0x0C064292u, 1);  /* 0C064290 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064292 add #imm,Rn */
	W32(r8, r3); UPD(0x0C064296u, 2);  /* 0C064294 mov.l Rm,@Rn */
	r0 = 0xC21CA20u; UPD(0x0C064298u, 1);  /* 0C064296 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064298 add #imm,Rn */
	r12 = R32(r11); UPD(0x0C06429Cu, 2);  /* 0C06429A mov.l @Rm,Rn */
	r9 = R32(r0); UPD(0x0C06429Eu, 1);  /* 0C06429C mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0642A0u, 1);  /* 0C06429E mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C0642A0 add Rm,Rn */
	r9 += r2;  /* 0C0642A2 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0642A6u, 3);  /* 0C0642A4 mov.l Rm,@Rn */
	r3 = 0xC3867F4u; UPD(0x0C0642A8u, 1);  /* 0C0642A6 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0642A8 add #imm,Rn */
	r1 = R32(r5); UPD(0x0C0642ACu, 2);  /* 0C0642AA mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C0642AEu, 1);  /* 0C0642AC mov.l @Rm,Rn */
	r0 |= r1; UPD(0x0C0642B0u, 1);  /* 0C0642AE or Rm,Rn */
	W32(r8, r0); UPD(0x0C0642B2u, 1);  /* 0C0642B0 mov.l Rm,@Rn */
	r5 = R32(r13); UPD(0x0C0642B4u, 1);  /* 0C0642B2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642B4 add #imm,Rn */
	r5 |= r7;  /* 0C0642B6 or Rm,Rn */
	W32(r8, r5); UPD(0x0C0642BAu, 3);  /* 0C0642B8 mov.l Rm,@Rn */
	r12 = R32(r6); UPD(0x0C0642BCu, 1);  /* 0C0642BA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642BC add #imm,Rn */
	W32(r8, r12); UPD(0x0C0642C0u, 2);  /* 0C0642BE mov.l Rm,@Rn */
	r12 = 0xC21CCE8u; UPD(0x0C0642C2u, 1);  /* 0C0642C0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0642C2 add #imm,Rn */
	r9 = R32(r12); UPD(0x0C0642C6u, 2);  /* 0C0642C4 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C0642C8u, 1);  /* 0C0642C6 mov.l Rm,@Rn */
	r9 = 0xC21CA20u; UPD(0x0C0642CAu, 1);  /* 0C0642C8 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0642CA add #imm,Rn */
	r2 = R32(r9); UPD(0x0C0642CEu, 2);  /* 0C0642CC mov.l @Rm,Rn */
	r2 += r7;  /* 0C0642CE add Rm,Rn */
	r2 += 0x1u;  /* 0C0642D0 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0642D4u, 3);  /* 0C0642D2 mov.l Rm,@Rn */
	r0 = 0xC3929A8u; UPD(0x0C0642D6u, 1);  /* 0C0642D4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0642D6 add #imm,Rn */
	r3 = R32(r0); UPD(0x0C0642DAu, 2);  /* 0C0642D8 mov.l @Rm,Rn */
	r1 = R32(r4); UPD(0x0C0642DCu, 1);  /* 0C0642DA mov.l @Rm,Rn */
	r3 |= r1;  /* 0C0642DC or Rm,Rn */
	W32(r8, r3); UPD(0x0C0642E0u, 2);  /* 0C0642DE mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C0642E2u, 1);  /* 0C0642E0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642E2 add #imm,Rn */
	r5 |= r10;  /* 0C0642E4 or Rm,Rn */
	W32(r8, r5); UPD(0x0C0642E8u, 3);  /* 0C0642E6 mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C0642EAu, 1);  /* 0C0642E8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642EA add #imm,Rn */
	W32(r8, r2); UPD(0x0C0642EEu, 2);  /* 0C0642EC mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C0642F0u, 1);  /* 0C0642EE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642F0 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0642F4u, 2);  /* 0C0642F2 mov.l Rm,@Rn */
	r5 = R32(r9); UPD(0x0C0642F6u, 1);  /* 0C0642F4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0642F6 add #imm,Rn */
	r3 = R32(r11); UPD(0x0C0642FAu, 2);  /* 0C0642F8 mov.l @Rm,Rn */
	r5 += r3;  /* 0C0642FA add Rm,Rn */
	r5 += r7;  /* 0C0642FC add Rm,Rn */
	r7 = 0x10001u; UPD(0x0C064300u, 3);  /* 0C0642FE mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C064300 add Rm,Rn */
	W32(r8, r5); UPD(0x0C064304u, 2);  /* 0C064302 mov.l Rm,@Rn */
	r2 = 0xC3867F4u; UPD(0x0C064306u, 1);  /* 0C064304 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064306 add #imm,Rn */
	r9 = R32(r2); UPD(0x0C06430Au, 2);  /* 0C064308 mov.l @Rm,Rn */
	r12 = R32(r4); UPD(0x0C06430Cu, 1);  /* 0C06430A mov.l @Rm,Rn */
	r9 |= r12;  /* 0C06430C or Rm,Rn */
	W32(r8, r9); UPD(0x0C064310u, 2);  /* 0C06430E mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C064312u, 1);  /* 0C064310 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064312 add #imm,Rn */
	r11 |= r10;  /* 0C064314 or Rm,Rn */
	W32(r8, r11); UPD(0x0C064318u, 3);  /* 0C064316 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C063FD4u, 3); goto L_0C063FD4; }  /* 0C064318 bra */
L_0C064320: BLKS(0x0C064320u);
	r9 = 0xC28629Cu; UPD(0x0C064322u, 1);  /* 0C064320 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C064322 mov Rm,Rn */
	r0 -= r11;  /* 0C064324 sub Rm,Rn */
	r13 = 0xC283CB0u; UPD(0x0C064328u, 3);  /* 0C064326 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C064328 add #imm,Rn */
	W16(r9, r11); UPD(0x0C06432Cu, 2);  /* 0C06432A mov.w Rm,@Rn */
	r1 = 0x4000u; UPD(0x0C06432Eu, 1);  /* 0C06432C mov.w @(disp,pc),Rn */
	r9 = r11;  /* 0C06432E mov Rm,Rn */
	T = r4 == r1;  /* 0C064330 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W16(r13, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06433Au, 5); goto L_0C06433A; } UPD(0x0C064336u, 1); goto L_0C064336; }  /* 0C064332 bf/s */
L_0C064336: BLKS(0x0C064336u);
	{ r1 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C064550u, 3); goto L_0C064550; }  /* 0C064336 bra */
L_0C06433A: BLKS(0x0C06433Au);
	T = (s32)r4 > (s32)r1;  /* 0C06433A cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C064410u, 4); goto L_0C064410; } goto L_0C064340; }  /* 0C06433C bt/s */
L_0C064340: BLKS(0x0C064340u);
	{ u32 c_ = !T; r4 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064420u, 4); goto L_0C064420; } goto L_0C064344; }  /* 0C064340 bf/s */
L_0C064344: BLKS(0x0C064344u);
	r10 = 0xC284EBCu; UPD(0x0C064346u, 2);  /* 0C064344 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C064348u, 1);  /* 0C064346 mov.w @Rm,Rn */
	r4 += r14;  /* 0C064348 add Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C06434Cu, 2);  /* 0C06434A mov.l @(disp,Rm),Rn */
	r3 = r9;  /* 0C06434C mov Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C064350u, 2);  /* 0C06434E mov.w @Rm,Rn */
	r13 += r5;  /* 0C064350 add Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C064354u, 2);  /* 0C064352 mov.l @(disp,Rm),Rn */
	IF(0x0C064354u); r13 <<= 16;  /* 0C064354 shll16 Rn */
	r11 = 0xC21CCF0u; UPD(0x0C064358u, 2);  /* 0C064356 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C064358 add Rm,Rn */
	r13 |= r2;  /* 0C06435A or Rm,Rn */
	W32(r11, r13); UPD(0x0C06435Eu, 3);  /* 0C06435C mov.l Rm,@Rn */
	IF(0x0C06435Eu); r3 <<= 16;  /* 0C06435E shll16 Rn */
	r13 = 0xC21CC88u; UPD(0x0C064362u, 2);  /* 0C064360 mov.l @(disp,pc),Rn */
	IF(0x0C064362u); r0 <<= 16;  /* 0C064362 shll16 Rn */
	W32(r13, r3); UPD(0x0C064366u, 2);  /* 0C064364 mov.l Rm,@Rn */
	W32(r8, r12); UPD(0x0C064368u, 1);  /* 0C064366 mov.l Rm,@Rn */
	r12 = 0xC21CA20u; UPD(0x0C06436Au, 1);  /* 0C064368 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06436A add #imm,Rn */
	r7 = R32(r12); UPD(0x0C06436Eu, 2);  /* 0C06436C mov.l @Rm,Rn */
	W32(r8, r7); UPD(0x0C064370u, 1);  /* 0C06436E mov.l Rm,@Rn */
	r6 = R32(r11); UPD(0x0C064372u, 1);  /* 0C064370 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064372 add #imm,Rn */
	W32(r8, r6); UPD(0x0C064376u, 2);  /* 0C064374 mov.l Rm,@Rn */
	r10 = R32(r14 + 0x18u); UPD(0x0C064378u, 1);  /* 0C064376 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C064378 add #imm,Rn */
	r5 = R32(r13); UPD(0x0C06437Cu, 2);  /* 0C06437A mov.l @Rm,Rn */
	r5 |= r10;  /* 0C06437C or Rm,Rn */
	W32(r8, r5); UPD(0x0C064380u, 2);  /* 0C06437E mov.l Rm,@Rn */
	r5 = 0xC1F6114u; UPD(0x0C064382u, 1);  /* 0C064380 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064382 add #imm,Rn */
	r4 = R32(r5); UPD(0x0C064386u, 2);  /* 0C064384 mov.l @Rm,Rn */
	r1 = 0xC21CCE8u; UPD(0x0C064388u, 1);  /* 0C064386 mov.l @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C06438Au, 1);  /* 0C064388 mov.l Rm,@Rn */
	r2 = R32(r1); UPD(0x0C06438Cu, 1);  /* 0C06438A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06438C add #imm,Rn */
	W32(r8, r2); UPD(0x0C064390u, 2);  /* 0C06438E mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C064392u, 1);  /* 0C064390 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064392 add #imm,Rn */
	r9 = R32(r13); UPD(0x0C064396u, 2);  /* 0C064394 mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C064398u, 1);  /* 0C064396 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C064398 add Rm,Rn */
	r7 += r10;  /* 0C06439A add Rm,Rn */
	W32(r8, r7); UPD(0x0C06439Eu, 3);  /* 0C06439C mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C0643A0u, 1);  /* 0C06439E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0643A0 add #imm,Rn */
	r6 = R32(r13); UPD(0x0C0643A4u, 2);  /* 0C0643A2 mov.l @Rm,Rn */
	r4 += r6;  /* 0C0643A4 add Rm,Rn */
	r4 += r10;  /* 0C0643A6 add Rm,Rn */
	W32(r8, r4); UPD(0x0C0643AAu, 3);  /* 0C0643A8 mov.l Rm,@Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C0643ACu, 1);  /* 0C0643AA mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0643AC add #imm,Rn */
	r0 |= r12;  /* 0C0643AE or Rm,Rn */
	W32(r8, r0); UPD(0x0C0643B2u, 3);  /* 0C0643B0 mov.l Rm,@Rn */
L_0C0643B2: BLKS(0x0C0643B2u);
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C064226u, 3); goto L_0C064226; }  /* 0C0643B2 bra */
L_0C064410: BLKS(0x0C064410u);
	r2 = 0x8000u; UPD(0x0C064412u, 1);  /* 0C064410 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C064412 cmp/eq Rm,Rn */
	{ u32 c_ = T; r11 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0644C0u, 4); goto L_0C0644C0; } UPD(0x0C064418u, 1); goto L_0C064418; }  /* 0C064414 bt/s */
L_0C064418: BLKS(0x0C064418u);
	r3 = 0xC000u; UPD(0x0C06441Au, 1);  /* 0C064418 mov.l @(disp,pc),Rn */
	T = r4 == r3;  /* 0C06441A cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064424u, 4); goto L_0C064424; } UPD(0x0C064420u, 1); goto L_0C064420; }  /* 0C06441C bt/s */
L_0C064420: BLKS(0x0C064420u);
	{ IF(0x0C064422u); ; /* slot nop */ UPD(0x0C063EB4u, 3); goto L_0C063EB4; }  /* 0C064420 bra */
L_0C064424: BLKS(0x0C064424u);
	r11 = 0x1Eu;  /* 0C064424 mov #imm,Rn */
	r11 += r14;  /* 0C064426 add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C06442Au, 3);  /* 0C064428 mov.w @Rm,Rn */
	r6 = 0xC284EBCu; UPD(0x0C06442Cu, 1);  /* 0C06442A mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C06442C exts.w Rm,Rn */
	r5 += r14;  /* 0C06442E add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C064432u, 3);  /* 0C064430 mov.w @Rm,Rn */
	r3 = 0x22u;  /* 0C064432 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C064436u, 2);  /* 0C064434 mov.w @Rm,Rn */
	r3 += r14;  /* 0C064436 add Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C06443Au, 2);  /* 0C064438 mov.l @(disp,Rm),Rn */
	r7 -= r13;  /* 0C06443A sub Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C06443Eu, 2);  /* 0C06443C mov.l @(disp,Rm),Rn */
	r9 -= r1;  /* 0C06443E sub Rm,Rn */
	r4 = R32(r14 + 0x18u); UPD(0x0C064442u, 2);  /* 0C064440 mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C064442 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C064446u, 2);  /* 0C064444 mov.w @Rm,Rn */
	r7 -= r2;  /* 0C064446 sub Rm,Rn */
	r9 -= r4;  /* 0C064448 sub Rm,Rn */
	r9 -= r6;  /* 0C06444A sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C06444C add #imm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C06444E add #imm,Rn */
	IF(0x0C064450u); r7 <<= 16;  /* 0C064450 shll16 Rn */
	r7 |= r9;  /* 0C064452 or Rm,Rn */
	r10 = 0xC21CCF0u; UPD(0x0C064456u, 8);  /* 0C064454 mov.l @(disp,pc),Rn */
	IF(0x0C064456u); r11 <<= 16;  /* 0C064456 shll16 Rn */
	r6 = 0xC21CC88u; UPD(0x0C06445Au, 2);  /* 0C064458 mov.l @(disp,pc),Rn */
	IF(0x0C06445Au); r0 <<= 16;  /* 0C06445A shll16 Rn */
	r9 = 0xC28673Cu; UPD(0x0C06445Eu, 2);  /* 0C06445C mov.l @(disp,pc),Rn */
	W32(r10, r7); UPD(0x0C064460u, 1);  /* 0C06445E mov.l Rm,@Rn */
	W32(r6, r11); UPD(0x0C064462u, 1);  /* 0C064460 mov.l Rm,@Rn */
	W32(r9, r0); UPD(0x0C064464u, 1);  /* 0C064462 mov.l Rm,@Rn */
	r13 = 0xC21CA20u; UPD(0x0C064466u, 1);  /* 0C064464 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C064468u, 1);  /* 0C064466 mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C06446Au, 1);  /* 0C064468 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06446A add #imm,Rn */
	W32(r8, r12); UPD(0x0C06446Eu, 2);  /* 0C06446C mov.l Rm,@Rn */
	r11 = R32(r10); UPD(0x0C064470u, 1);  /* 0C06446E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064470 add #imm,Rn */
	W32(r8, r11); UPD(0x0C064474u, 2);  /* 0C064472 mov.l Rm,@Rn */
	r11 = R32(r14 + 0x18u); UPD(0x0C064476u, 1);  /* 0C064474 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C064476 add #imm,Rn */
	r5 = R32(r6); UPD(0x0C06447Au, 2);  /* 0C064478 mov.l @Rm,Rn */
	r5 |= r11;  /* 0C06447A or Rm,Rn */
	W32(r8, r5); UPD(0x0C06447Eu, 2);  /* 0C06447C mov.l Rm,@Rn */
	r5 = 0xC1F6114u; UPD(0x0C064480u, 1);  /* 0C06447E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064480 add #imm,Rn */
	r2 = R32(r5); UPD(0x0C064484u, 2);  /* 0C064482 mov.l @Rm,Rn */
	r1 = 0xC21CCE8u; UPD(0x0C064486u, 1);  /* 0C064484 mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C064488u, 1);  /* 0C064486 mov.l Rm,@Rn */
	r0 = R32(r1); UPD(0x0C06448Au, 1);  /* 0C064488 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06448A add #imm,Rn */
	W32(r8, r0); UPD(0x0C06448Eu, 2);  /* 0C06448C mov.l Rm,@Rn */
	r3 = 0xC21CA20u; UPD(0x0C064490u, 1);  /* 0C06448E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064490 add #imm,Rn */
	r7 = R32(r3); UPD(0x0C064494u, 2);  /* 0C064492 mov.l @Rm,Rn */
	r4 = R32(r6); UPD(0x0C064496u, 1);  /* 0C064494 mov.l @Rm,Rn */
	r12 = 0x10000u; UPD(0x0C064498u, 1);  /* 0C064496 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C064498 add Rm,Rn */
	r7 += r12;  /* 0C06449A add Rm,Rn */
	W32(r8, r7); UPD(0x0C06449Eu, 3);  /* 0C06449C mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C0644A0u, 1);  /* 0C06449E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0644A0 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C0644A4u, 2);  /* 0C0644A2 mov.l @Rm,Rn */
	r0 -= r13;  /* 0C0644A4 sub Rm,Rn */
	r0 -= r12;  /* 0C0644A6 sub Rm,Rn */
	W32(r8, r0); UPD(0x0C0644AAu, 3);  /* 0C0644A8 mov.l Rm,@Rn */
	r1 = R32(r9); UPD(0x0C0644ACu, 1);  /* 0C0644AA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0644AC add #imm,Rn */
	r1 |= r11;  /* 0C0644AE or Rm,Rn */
	UPD(0x0C0644B0u, 2);
L_0C0644B0: BLKS(0x0C0644B0u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0643B2u, 3); goto L_0C0643B2; }  /* 0C0644B0 bra */
L_0C0644C0: BLKS(0x0C0644C0u);
	r6 = 0xC284EBCu; UPD(0x0C0644C2u, 1);  /* 0C0644C0 mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C0644C2 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0644C6u, 2);  /* 0C0644C4 mov.w @Rm,Rn */
	r4 += r14;  /* 0C0644C6 add Rm,Rn */
	r1 = 0x1Eu;  /* 0C0644C8 mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0644CCu, 3);  /* 0C0644CA mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C0644CC exts.w Rm,Rn */
	r5 -= r11;  /* 0C0644CE sub Rm,Rn */
	r1 += r14;  /* 0C0644D0 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r1); UPD(0x0C0644D4u, 4);  /* 0C0644D2 mov.w @Rm,Rn */
	r5 -= r13;  /* 0C0644D4 sub Rm,Rn */
	r4 = 0xC21CC88u; UPD(0x0C0644D8u, 2);  /* 0C0644D6 mov.l @(disp,pc),Rn */
	IF(0x0C0644D8u); r13 <<= 16;  /* 0C0644D8 shll16 Rn */
	W32(r4, r13); UPD(0x0C0644DCu, 2);  /* 0C0644DA mov.l Rm,@Rn */
	r5 -= r9;  /* 0C0644DC sub Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0644E0u, 2);  /* 0C0644DE mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0644E0 add #imm,Rn */
	r10 = 0xC21CCF0u; UPD(0x0C0644E4u, 2);  /* 0C0644E2 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0644E4 add Rm,Rn */
	r13 = 0xC28673Cu; UPD(0x0C0644E8u, 2);  /* 0C0644E6 mov.l @(disp,pc),Rn */
	IF(0x0C0644E8u); r5 <<= 16;  /* 0C0644E8 shll16 Rn */
	r5 |= r3;  /* 0C0644EA or Rm,Rn */
	IF(0x0C0644ECu); r0 <<= 16;  /* 0C0644EC shll16 Rn */
	W32(r10, r5); UPD(0x0C0644F0u, 4);  /* 0C0644EE mov.l Rm,@Rn */
	W32(r13, r0); UPD(0x0C0644F2u, 1);  /* 0C0644F0 mov.l Rm,@Rn */
	r5 = 0xC21CA20u; UPD(0x0C0644F4u, 1);  /* 0C0644F2 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C0644F6u, 1);  /* 0C0644F4 mov.l Rm,@Rn */
	r7 = R32(r5); UPD(0x0C0644F8u, 1);  /* 0C0644F6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0644F8 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0644FCu, 2);  /* 0C0644FA mov.l Rm,@Rn */
	r6 = R32(r10); UPD(0x0C0644FEu, 1);  /* 0C0644FC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0644FE add #imm,Rn */
	W32(r8, r6); UPD(0x0C064502u, 2);  /* 0C064500 mov.l Rm,@Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C064504u, 1);  /* 0C064502 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C064504 add #imm,Rn */
	r11 = R32(r4); UPD(0x0C064508u, 2);  /* 0C064506 mov.l @Rm,Rn */
	r11 |= r12;  /* 0C064508 or Rm,Rn */
	W32(r8, r11); UPD(0x0C06450Cu, 2);  /* 0C06450A mov.l Rm,@Rn */
	r11 = 0xC1F6114u; UPD(0x0C06450Eu, 1);  /* 0C06450C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06450E add #imm,Rn */
	r9 = R32(r11); UPD(0x0C064512u, 2);  /* 0C064510 mov.l @Rm,Rn */
	r1 = 0xC21CCE8u; UPD(0x0C064514u, 1);  /* 0C064512 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C064516u, 1);  /* 0C064514 mov.l Rm,@Rn */
	r0 = R32(r1); UPD(0x0C064518u, 1);  /* 0C064516 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064518 add #imm,Rn */
	W32(r8, r0); UPD(0x0C06451Cu, 2);  /* 0C06451A mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C06451Eu, 1);  /* 0C06451C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06451E add #imm,Rn */
	r2 = R32(r4); UPD(0x0C064522u, 2);  /* 0C064520 mov.l @Rm,Rn */
	r6 = 0x10000u; UPD(0x0C064524u, 1);  /* 0C064522 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C064524 add Rm,Rn */
	r3 += r6;  /* 0C064526 add Rm,Rn */
	W32(r8, r3); UPD(0x0C06452Au, 3);  /* 0C064528 mov.l Rm,@Rn */
	r12 = R32(r10); UPD(0x0C06452Cu, 1);  /* 0C06452A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06452C add #imm,Rn */
	r7 = R32(r13); UPD(0x0C064530u, 2);  /* 0C06452E mov.l @Rm,Rn */
	r12 -= r7;  /* 0C064530 sub Rm,Rn */
	r12 -= r6;  /* 0C064532 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C064536u, 3);  /* 0C064534 mov.l Rm,@Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C064538u, 1);  /* 0C064536 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C064538 add #imm,Rn */
	r0 = R32(r13); UPD(0x0C06453Cu, 2);  /* 0C06453A mov.l @Rm,Rn */
	r0 |= r9;  /* 0C06453C or Rm,Rn */
	W32(r8, r0); UPD(0x0C064540u, 2);  /* 0C06453E mov.l Rm,@Rn */
	r1 = R32(r11); UPD(0x0C064542u, 1);  /* 0C064540 mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C063FD6u, 3); goto L_0C063FD6; }  /* 0C064542 bra */
L_0C064550: BLKS(0x0C064550u);
	r5 = 0xC284EBCu; UPD(0x0C064552u, 1);  /* 0C064550 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C064554u, 1);  /* 0C064552 mov.w @Rm,Rn */
	r1 += r14;  /* 0C064554 add Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C064558u, 2);  /* 0C064556 mov.l @(disp,Rm),Rn */
	r2 = 0x22u;  /* 0C064558 mov #imm,Rn */
	r10 += r6;  /* 0C06455A add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C06455Eu, 3);  /* 0C06455C mov.w @Rm,Rn */
	r2 += r14;  /* 0C06455E add Rm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C064562u, 2);  /* 0C064560 mov.l @(disp,Rm),Rn */
	r13 = r9;  /* 0C064562 mov Rm,Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C064566u, 2);  /* 0C064564 mov.l @(disp,Rm),Rn */
	r3 -= r7;  /* 0C064566 sub Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C06456Au, 2);  /* 0C064568 mov.w @Rm,Rn */
	r3 -= r6;  /* 0C06456A sub Rm,Rn */
	r3 -= r4;  /* 0C06456C sub Rm,Rn */
	r4 = 0xC21CC88u; UPD(0x0C064570u, 3);  /* 0C06456E mov.l @(disp,pc),Rn */
	IF(0x0C064570u); r13 <<= 16;  /* 0C064570 shll16 Rn */
	W32(r4, r13); UPD(0x0C064574u, 2);  /* 0C064572 mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C064574 add #imm,Rn */
	r11 = 0xC21CCF0u; UPD(0x0C064578u, 2);  /* 0C064576 mov.l @(disp,pc),Rn */
	IF(0x0C064578u); r10 <<= 16;  /* 0C064578 shll16 Rn */
	r13 = 0xC28673Cu; UPD(0x0C06457Cu, 2);  /* 0C06457A mov.l @(disp,pc),Rn */
	r10 |= r3;  /* 0C06457C or Rm,Rn */
	IF(0x0C06457Eu); r0 <<= 16;  /* 0C06457E shll16 Rn */
	W32(r11, r10); UPD(0x0C064582u, 3);  /* 0C064580 mov.l Rm,@Rn */
	W32(r13, r0); UPD(0x0C064584u, 1);  /* 0C064582 mov.l Rm,@Rn */
	r9 = 0xC21CA20u; UPD(0x0C064586u, 1);  /* 0C064584 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C064588u, 1);  /* 0C064586 mov.l Rm,@Rn */
	r12 = R32(r9); UPD(0x0C06458Au, 1);  /* 0C064588 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06458A add #imm,Rn */
	W32(r8, r12); UPD(0x0C06458Eu, 2);  /* 0C06458C mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C064590u, 1);  /* 0C06458E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064590 add #imm,Rn */
	W32(r8, r5); UPD(0x0C064594u, 2);  /* 0C064592 mov.l Rm,@Rn */
	r0 = R32(r4); UPD(0x0C064596u, 1);  /* 0C064594 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064596 add #imm,Rn */
	r0 |= r6;  /* 0C064598 or Rm,Rn */
	W32(r8, r0); UPD(0x0C06459Cu, 3);  /* 0C06459A mov.l Rm,@Rn */
	r5 = 0xC1F6114u; UPD(0x0C06459Eu, 1);  /* 0C06459C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06459E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C0645A2u, 2);  /* 0C0645A0 mov.l @Rm,Rn */
	r1 = 0xC21CCE8u; UPD(0x0C0645A4u, 1);  /* 0C0645A2 mov.l @(disp,pc),Rn */
	W32(r8, r10); UPD(0x0C0645A6u, 1);  /* 0C0645A4 mov.l Rm,@Rn */
	r6 = R32(r1); UPD(0x0C0645A8u, 1);  /* 0C0645A6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0645A8 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0645ACu, 2);  /* 0C0645AA mov.l Rm,@Rn */
	r7 = R32(r9); UPD(0x0C0645AEu, 1);  /* 0C0645AC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0645AE add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0645B2u, 2);  /* 0C0645B0 mov.l @Rm,Rn */
	r12 = 0x10000u; UPD(0x0C0645B4u, 1);  /* 0C0645B2 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0645B4 add Rm,Rn */
	r7 += r12;  /* 0C0645B6 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0645BAu, 3);  /* 0C0645B8 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C0645BCu, 1);  /* 0C0645BA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0645BC add #imm,Rn */
	r3 = R32(r4); UPD(0x0C0645C0u, 2);  /* 0C0645BE mov.l @Rm,Rn */
	r0 += r3;  /* 0C0645C0 add Rm,Rn */
	r0 += r12;  /* 0C0645C2 add Rm,Rn */
	W32(r8, r0); UPD(0x0C0645C6u, 3);  /* 0C0645C4 mov.l Rm,@Rn */
	r10 = R32(r14 + 0x18u); UPD(0x0C0645C8u, 1);  /* 0C0645C6 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0645C8 add #imm,Rn */
	r1 = R32(r13); UPD(0x0C0645CCu, 2);  /* 0C0645CA mov.l @Rm,Rn */
	{ r1 |= r10; /* slot or Rm,Rn */ UPD(0x0C0644B0u, 3); goto L_0C0644B0; }  /* 0C0645CC bra */
L_0C0645D0: BLKS(0x0C0645D0u);
	r0 = r5;  /* 0C0645D0 mov Rm,Rn */
	r5 += r9;  /* 0C0645D2 add Rm,Rn */
	r0 &= r6;  /* 0C0645D4 and Rm,Rn */
	r5 &= r6;  /* 0C0645D6 and Rm,Rn */
	T = r0 == r5;  /* 0C0645D8 cmp/eq Rm,Rn */
	r0 = r10;  /* 0C0645DA mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C0645DC negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0645DE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0645E0 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C0645E2 negc Rm,Rn */
	T = (r7 & r10) == 0;  /* 0C0645E4 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0u - r0; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C0645EEu, 14); goto L_0C0645EE; } goto L_0C0645EA; }  /* 0C0645E6 bf/s */
L_0C0645EA: BLKS(0x0C0645EAu);
	{ IF(0x0C0645ECu); ; /* slot nop */ UPD(0x0C064790u, 4); goto L_0C064790; }  /* 0C0645EA bra */
L_0C0645EE: BLKS(0x0C0645EEu);
	r6 += 0x1Fu;  /* 0C0645EE add #imm,Rn */
	r0 = r11;  /* 0C0645F0 mov Rm,Rn */
	r5 = 0xC392DE4u; UPD(0x0C0645F4u, 3);  /* 0C0645F2 mov.l @(disp,pc),Rn */
	r0 -= r6;  /* 0C0645F4 sub Rm,Rn */
	r1 = 0xC275570u; UPD(0x0C0645F8u, 2);  /* 0C0645F6 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0645F8 add #imm,Rn */
	W16(r5, r0); UPD(0x0C0645FCu, 2);  /* 0C0645FA mov.w Rm,@Rn */
	r7 = r6;  /* 0C0645FC mov Rm,Rn */
	W16(r1, r6); UPD(0x0C064600u, 2);  /* 0C0645FE mov.w Rm,@Rn */
	r5 = 0xC283C9Cu; UPD(0x0C064602u, 1);  /* 0C064600 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C064604u, 1);  /* 0C064602 mov.l @(disp,Rm),Rn */
	r1 = 0x4000u; UPD(0x0C064606u, 1);  /* 0C064604 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C064606 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C064610u, 4); goto L_0C064610; } UPD(0x0C06460Cu, 1); goto L_0C06460C; }  /* 0C064608 bf/s */
L_0C06460C: BLKS(0x0C06460Cu);
	{ r2 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C064740u, 3); goto L_0C064740; }  /* 0C06460C bra */
L_0C064610: BLKS(0x0C064610u);
	T = (s32)r4 > (s32)r1;  /* 0C064610 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C064690u, 4); goto L_0C064690; } goto L_0C064616; }  /* 0C064612 bt/s */
L_0C064616: BLKS(0x0C064616u);
	{ u32 c_ = !T; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0646A0u, 4); goto L_0C0646A0; } UPD(0x0C06461Au, 1); goto L_0C06461A; }  /* 0C064616 bf/s */
L_0C06461A: BLKS(0x0C06461Au);
	r13 = 0xC284EBCu; UPD(0x0C06461Cu, 1);  /* 0C06461A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C06461Eu, 1);  /* 0C06461C mov.w @Rm,Rn */
	r3 = 0xC21CCF0u; UPD(0x0C064620u, 1);  /* 0C06461E mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C064620 add Rm,Rn */
	UPD(0x0C064622u, 1);
L_0C064622: BLKS(0x0C064622u);
	r9 = 0xAu;  /* 0C064622 mov #imm,Rn */
	r9 += r14;  /* 0C064624 add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C064628u, 3);  /* 0C064626 mov.w @Rm,Rn */
	IF(0x0C064628u); r2 <<= 16;  /* 0C064628 shll16 Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C06462Cu, 2);  /* 0C06462A mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C06462C add Rm,Rn */
	r2 |= r10;  /* 0C06462E or Rm,Rn */
	W32(r3, r2); UPD(0x0C064632u, 3);  /* 0C064630 mov.l Rm,@Rn */
	r13 = 0xC21CA20u; UPD(0x0C064634u, 1);  /* 0C064632 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C064636u, 1);  /* 0C064634 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C064638u, 1);  /* 0C064636 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064638 add #imm,Rn */
	W32(r8, r4); UPD(0x0C06463Cu, 2);  /* 0C06463A mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C06463C exts.w Rm,Rn */
	r12 = R32(r3); UPD(0x0C064640u, 2);  /* 0C06463E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064640 add #imm,Rn */
	W32(r8, r12); UPD(0x0C064644u, 2);  /* 0C064642 mov.l Rm,@Rn */
	r11 = R32(r5); UPD(0x0C064646u, 1);  /* 0C064644 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064646 add #imm,Rn */
	r11 |= r13;  /* 0C064648 or Rm,Rn */
	W32(r8, r11); UPD(0x0C06464Cu, 3);  /* 0C06464A mov.l Rm,@Rn */
	r12 = 0xC1F6114u; UPD(0x0C06464Eu, 1);  /* 0C06464C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06464E add #imm,Rn */
	r6 = R32(r12); UPD(0x0C064652u, 2);  /* 0C064650 mov.l @Rm,Rn */
	r9 = 0xC21CCE8u; UPD(0x0C064654u, 1);  /* 0C064652 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C064656u, 1);  /* 0C064654 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C064658u, 1);  /* 0C064656 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064658 add #imm,Rn */
	W32(r8, r10); UPD(0x0C06465Cu, 2);  /* 0C06465A mov.l Rm,@Rn */
	r1 = 0xC21CA20u; UPD(0x0C06465Eu, 1);  /* 0C06465C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06465E add #imm,Rn */
	r2 = R32(r1); UPD(0x0C064662u, 2);  /* 0C064660 mov.l @Rm,Rn */
	r2 += r13;  /* 0C064662 add Rm,Rn */
	r2 += 0x1u;  /* 0C064664 add #imm,Rn */
	W32(r8, r2); UPD(0x0C064668u, 3);  /* 0C064666 mov.l Rm,@Rn */
	r4 = R32(r3); UPD(0x0C06466Au, 1);  /* 0C064668 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06466A add #imm,Rn */
	r4 += r13;  /* 0C06466C add Rm,Rn */
	r4 += 0x1u;  /* 0C06466E add #imm,Rn */
	W32(r8, r4); UPD(0x0C064672u, 4);  /* 0C064670 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C064672 exts.w Rm,Rn */
	r7 = R32(r5); UPD(0x0C064676u, 2);  /* 0C064674 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064676 add #imm,Rn */
	r7 |= r3;  /* 0C064678 or Rm,Rn */
	W32(r8, r7); UPD(0x0C06467Cu, 3);  /* 0C06467A mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C06467Eu, 1);  /* 0C06467C mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C063FD6u, 3); goto L_0C063FD6; }  /* 0C06467E bra */
L_0C064690: BLKS(0x0C064690u);
	r2 = 0x8000u; UPD(0x0C064692u, 1);  /* 0C064690 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C064692 cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Eu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064720u, 4); goto L_0C064720; } goto L_0C064698; }  /* 0C064694 bt/s */
L_0C064698: BLKS(0x0C064698u);
	r11 = 0xC000u; UPD(0x0C06469Au, 2);  /* 0C064698 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C06469A cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0646A4u, 4); goto L_0C0646A4; } UPD(0x0C0646A0u, 1); goto L_0C0646A0; }  /* 0C06469C bt/s */
L_0C0646A0: BLKS(0x0C0646A0u);
	{ IF(0x0C0646A2u); ; /* slot nop */ UPD(0x0C063EB4u, 3); goto L_0C063EB4; }  /* 0C0646A0 bra */
L_0C0646A4: BLKS(0x0C0646A4u);
	r4 = 0xC284EBCu; UPD(0x0C0646A6u, 1);  /* 0C0646A4 mov.l @(disp,pc),Rn */
	r1 = 0x1Eu;  /* 0C0646A6 mov #imm,Rn */
	r1 += r14;  /* 0C0646A8 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0646ACu, 3);  /* 0C0646AA mov.w @Rm,Rn */
	r9 = 0xAu;  /* 0C0646AC mov #imm,Rn */
	r9 += r14;  /* 0C0646AE add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C0646B2u, 3);  /* 0C0646B0 mov.w @Rm,Rn */
	r3 -= r2;  /* 0C0646B2 sub Rm,Rn */
	r3 -= r13;  /* 0C0646B4 sub Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r9); UPD(0x0C0646B8u, 3);  /* 0C0646B6 mov.w @Rm,Rn */
	r3 -= r11;  /* 0C0646B8 sub Rm,Rn */
	r10 = R32(r14 + 0x10u); UPD(0x0C0646BCu, 2);  /* 0C0646BA mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0646BC add #imm,Rn */
	r6 = 0xC21CCF0u; UPD(0x0C0646C0u, 2);  /* 0C0646BE mov.l @(disp,pc),Rn */
	r1 -= r10;  /* 0C0646C0 sub Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C0646C2 exts.w Rm,Rn */
	IF(0x0C0646C4u); r3 <<= 16;  /* 0C0646C4 shll16 Rn */
	r1 -= r7;  /* 0C0646C6 sub Rm,Rn */
	UPD(0x0C0646C8u, 4);
L_0C0646C8: BLKS(0x0C0646C8u);
	r10 = 0x22u;  /* 0C0646C8 mov #imm,Rn */
	r10 += r14;  /* 0C0646CA add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C0646CEu, 3);  /* 0C0646CC mov.w @Rm,Rn */
	r1 -= r13;  /* 0C0646CE sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0646D0 add #imm,Rn */
	r3 |= r1;  /* 0C0646D2 or Rm,Rn */
	W32(r6, r3); UPD(0x0C0646D6u, 4);  /* 0C0646D4 mov.l Rm,@Rn */
	r13 = 0xC21CA20u; UPD(0x0C0646D8u, 1);  /* 0C0646D6 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C0646DAu, 1);  /* 0C0646D8 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C0646DCu, 1);  /* 0C0646DA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0646DC add #imm,Rn */
	W32(r8, r4); UPD(0x0C0646E0u, 2);  /* 0C0646DE mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C0646E2u, 1);  /* 0C0646E0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0646E2 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0646E6u, 2);  /* 0C0646E4 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C0646E8u, 1);  /* 0C0646E6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0646E8 add #imm,Rn */
	r3 |= r7;  /* 0C0646EA or Rm,Rn */
	W32(r8, r3); UPD(0x0C0646EEu, 3);  /* 0C0646EC mov.l Rm,@Rn */
	r3 = 0xC1F6114u; UPD(0x0C0646F0u, 1);  /* 0C0646EE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0646F0 add #imm,Rn */
	r11 = R32(r3); UPD(0x0C0646F4u, 2);  /* 0C0646F2 mov.l @Rm,Rn */
	r9 = 0xC21CCE8u; UPD(0x0C0646F6u, 1);  /* 0C0646F4 mov.l @(disp,pc),Rn */
	W32(r8, r11); UPD(0x0C0646F8u, 1);  /* 0C0646F6 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C0646FAu, 1);  /* 0C0646F8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0646FA add #imm,Rn */
	W32(r8, r10); UPD(0x0C0646FEu, 2);  /* 0C0646FC mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C064700u, 1);  /* 0C0646FE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064700 add #imm,Rn */
	r12 += r7;  /* 0C064702 add Rm,Rn */
	r12 += 0x1u;  /* 0C064704 add #imm,Rn */
	W32(r8, r12); UPD(0x0C064708u, 4);  /* 0C064706 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C064708 exts.w Rm,Rn */
	r0 = R32(r6); UPD(0x0C06470Cu, 2);  /* 0C06470A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C06470C add #imm,Rn */
	r0 -= r7;  /* 0C06470E sub Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C064710 add #imm,Rn */
	W32(r8, r0); UPD(0x0C064714u, 4);  /* 0C064712 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C064716u, 1);  /* 0C064714 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C064716 add #imm,Rn */
	{ r1 |= r7; /* slot or Rm,Rn */ UPD(0x0C064130u, 4); goto L_0C064130; }  /* 0C064718 bra */
L_0C064720: BLKS(0x0C064720u);
	r11 = 0xC284EBCu; UPD(0x0C064722u, 1);  /* 0C064720 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C064724u, 1);  /* 0C064722 mov.w @Rm,Rn */
	r9 += r14;  /* 0C064724 add Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C064728u, 2);  /* 0C064726 mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C06472Au, 1);  /* 0C064728 mov.w @Rm,Rn */
	r2 -= r6;  /* 0C06472A sub Rm,Rn */
	r2 -= r13;  /* 0C06472C sub Rm,Rn */
	r3 = 0xC21CCF0u; UPD(0x0C064730u, 3);  /* 0C06472E mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C064730 sub Rm,Rn */
	{ r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C064622u, 4); goto L_0C064622; }  /* 0C064732 bra */
L_0C064740: BLKS(0x0C064740u);
	r13 = 0xC284EBCu; UPD(0x0C064742u, 1);  /* 0C064740 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C064744u, 1);  /* 0C064742 mov.w @Rm,Rn */
	r2 += r14;  /* 0C064744 add Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C064748u, 2);  /* 0C064746 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C064748 exts.w Rm,Rn */
	r11 = R32(r14 + 0x10u); UPD(0x0C06474Cu, 2);  /* 0C06474A mov.l @(disp,Rm),Rn */
	r3 += r4;  /* 0C06474C add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C064750u, 2);  /* 0C06474E mov.w @Rm,Rn */
	r11 += r7;  /* 0C064750 add Rm,Rn */
	r6 = 0xC21CCF0u; UPD(0x0C064754u, 2);  /* 0C064752 mov.l @(disp,pc),Rn */
	IF(0x0C064754u); r3 <<= 16;  /* 0C064754 shll16 Rn */
	{ r1 -= r11; /* slot sub Rm,Rn */ UPD(0x0C0646C8u, 4); goto L_0C0646C8; }  /* 0C064756 bra */
L_0C064790: BLKS(0x0C064790u);
	r1 = 0x4000u; UPD(0x0C064792u, 1);  /* 0C064790 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C064792 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = (s32)r4 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C064880u, 4); goto L_0C064880; } goto L_0C064798; }  /* 0C064794 bt/s */
L_0C064798: BLKS(0x0C064798u);
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0647E0u, 4); goto L_0C0647E0; } goto L_0C06479C; }  /* 0C064798 bt/s */
L_0C06479C: BLKS(0x0C06479Cu);
	if (!T) { UPD(0x0C0647EEu, 4); goto L_0C0647EE; }  /* 0C06479C bf */
L_0C06479E: BLKS(0x0C06479Eu);
	r0 = 0xAu;  /* 0C06479E mov #imm,Rn */
	W32(r8, r12); UPD(0x0C0647A2u, 2);  /* 0C0647A0 mov.l Rm,@Rn */
	IF(0x0C0647A2u); r9 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0647A4u, 1);  /* 0C0647A2 mov.w @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0647A4 add #imm,Rn */
	r4 = 0xC21CA20u; UPD(0x0C0647A8u, 2);  /* 0C0647A6 mov.l @(disp,pc),Rn */
	r3 = 0xC284EBCu; UPD(0x0C0647AAu, 1);  /* 0C0647A8 mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C0647ACu, 1);  /* 0C0647AA mov.l @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C0647AEu, 1);  /* 0C0647AC mov.w @Rm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C0647B0u, 1);  /* 0C0647AE mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0647B2u, 1);  /* 0C0647B0 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C0647B2 add Rm,Rn */
	r1 = 0xFFFFu; UPD(0x0C0647B6u, 2);  /* 0C0647B4 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0647B6 add Rm,Rn */
	W32(r8, r2); UPD(0x0C0647BAu, 2);  /* 0C0647B8 mov.l Rm,@Rn */
	r9 &= r1;  /* 0C0647BA and Rm,Rn */
	IF(0x0C0647BCu); r12 <<= 16;  /* 0C0647BC shll16 Rn */
	r8 += 0x4u;  /* 0C0647BE add #imm,Rn */
	r12 |= r9;  /* 0C0647C0 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0647C4u, 5);  /* 0C0647C2 mov.l Rm,@Rn */
	r7 = 0xC392AF0u; UPD(0x0C0647C6u, 1);  /* 0C0647C4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0647C6 add #imm,Rn */
	r1 = R32(r7); UPD(0x0C0647CAu, 2);  /* 0C0647C8 mov.l @Rm,Rn */
L_0C0647CA: BLKS(0x0C0647CAu);
	W32(r8, r1); UPD(0x0C0647CCu, 1);  /* 0C0647CA mov.l Rm,@Rn */
	r0 = 0xC1F6114u; UPD(0x0C0647CEu, 1);  /* 0C0647CC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0647CE add #imm,Rn */
	{ r1 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(0x0C063FD6u, 4); goto L_0C063FD6; }  /* 0C0647D0 bra */
L_0C0647E0: BLKS(0x0C0647E0u);
	r5 = 0x8000u; UPD(0x0C0647E2u, 1);  /* 0C0647E0 mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C0647E2 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C064840u, 4); goto L_0C064840; }  /* 0C0647E4 bt */
L_0C0647E6: BLKS(0x0C0647E6u);
	r6 = 0xC000u; UPD(0x0C0647E8u, 1);  /* 0C0647E6 mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C0647E8 cmp/eq Rm,Rn */
	{ u32 c_ = T; r10 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0647F2u, 4); goto L_0C0647F2; } UPD(0x0C0647EEu, 1); goto L_0C0647EE; }  /* 0C0647EA bt/s */
L_0C0647EE: BLKS(0x0C0647EEu);
	{ IF(0x0C0647F0u); ; /* slot nop */ UPD(0x0C063EB4u, 3); goto L_0C063EB4; }  /* 0C0647EE bra */
L_0C0647F2: BLKS(0x0C0647F2u);
	r0 = 0x1Eu;  /* 0C0647F2 mov #imm,Rn */
	IF(0x0C0647F4u); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0647F6u, 2);  /* 0C0647F4 mov.w @(r0,Rm),Rn */
	r5 = 0xC284EBCu; UPD(0x0C0647F8u, 1);  /* 0C0647F6 mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C0647F8 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C0647FCu, 2);  /* 0C0647FA mov.w @Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0647FEu, 1);  /* 0C0647FC mov.l @(disp,Rm),Rn */
	IF(0x0C0647FEu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064800u, 1);  /* 0C0647FE mov.w @(r0,Rm),Rn */
	r11 -= r6;  /* 0C064800 sub Rm,Rn */
	r11 -= r13;  /* 0C064802 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C064806u, 3);  /* 0C064804 mov.l Rm,@Rn */
	r0 = 0x22u;  /* 0C064806 mov #imm,Rn */
	r9 = 0xC21CA20u; UPD(0x0C06480Au, 2);  /* 0C064808 mov.l @(disp,pc),Rn */
	r4 -= r10;  /* 0C06480A sub Rm,Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C06480Eu, 2);  /* 0C06480C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C06480E add #imm,Rn */
	IF(0x0C064810u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064812u, 2);  /* 0C064810 mov.w @(r0,Rm),Rn */
	r4 -= r2;  /* 0C064812 sub Rm,Rn */
	r12 = R32(r9); UPD(0x0C064816u, 2);  /* 0C064814 mov.l @Rm,Rn */
	r11 -= r7;  /* 0C064816 sub Rm,Rn */
	r4 -= r13;  /* 0C064818 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C06481Cu, 3);  /* 0C06481A mov.l Rm,@Rn */
	r11 += 0xFFFFFFFFu;  /* 0C06481C add #imm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06481E add #imm,Rn */
	IF(0x0C064820u); r11 <<= 16;  /* 0C064820 shll16 Rn */
	r3 = r4 & 0xFFFF;  /* 0C064822 extu.w Rm,Rn */
	r8 += 0x4u;  /* 0C064824 add #imm,Rn */
	r11 |= r3;  /* 0C064826 or Rm,Rn */
	W32(r8, r11); UPD(0x0C06482Au, 7);  /* 0C064828 mov.l Rm,@Rn */
	r0 = 0xC392AF0u; UPD(0x0C06482Cu, 1);  /* 0C06482A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06482C add #imm,Rn */
	{ r1 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(0x0C0647CAu, 4); goto L_0C0647CA; }  /* 0C06482E bra */
L_0C064840: BLKS(0x0C064840u);
	W32(r8, r12); UPD(0x0C064842u, 1);  /* 0C064840 mov.l Rm,@Rn */
	r11 = 0xC21CA20u; UPD(0x0C064844u, 1);  /* 0C064842 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064844 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C064848u, 2);  /* 0C064846 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C06484Au, 1);  /* 0C064848 mov.l Rm,@Rn */
	r1 = 0xC284EBCu; UPD(0x0C06484Cu, 1);  /* 0C06484A mov.l @(disp,pc),Rn */
	r0 = 0x1Eu;  /* 0C06484C mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r1); UPD(0x0C064850u, 2);  /* 0C06484E mov.w @Rm,Rn */
	r8 += 0x4u;  /* 0C064850 add #imm,Rn */
	IF(0x0C064852u); r12 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064854u, 2);  /* 0C064852 mov.w @(r0,Rm),Rn */
	r9 = R32(r14 + 0xCu); UPD(0x0C064856u, 1);  /* 0C064854 mov.l @(disp,Rm),Rn */
	r0 = 0xAu;  /* 0C064856 mov #imm,Rn */
	r10 -= r9;  /* 0C064858 sub Rm,Rn */
	r10 -= r13;  /* 0C06485A sub Rm,Rn */
	IF(0x0C06485Cu); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C06485Eu, 4);  /* 0C06485C mov.w @(r0,Rm),Rn */
	r10 -= r12;  /* 0C06485E sub Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C064862u, 2);  /* 0C064860 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C064862 add #imm,Rn */
	r5 = 0xFFFFu; UPD(0x0C064866u, 2);  /* 0C064864 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C064866 add Rm,Rn */
	IF(0x0C064868u); r10 <<= 16;  /* 0C064868 shll16 Rn */
	r7 &= r5;  /* 0C06486A and Rm,Rn */
	r10 |= r7;  /* 0C06486C or Rm,Rn */
	W32(r8, r10); UPD(0x0C064870u, 5);  /* 0C06486E mov.l Rm,@Rn */
	r13 = 0xC392AF0u; UPD(0x0C064872u, 1);  /* 0C064870 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C064872 add #imm,Rn */
	{ r1 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(0x0C0647CAu, 4); goto L_0C0647CA; }  /* 0C064874 bra */
L_0C064880: BLKS(0x0C064880u);
	r0 = 0xAu;  /* 0C064880 mov #imm,Rn */
	W32(r8, r12); UPD(0x0C064884u, 2);  /* 0C064882 mov.l Rm,@Rn */
	IF(0x0C064884u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064886u, 1);  /* 0C064884 mov.w @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C064886 add #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C06488Au, 2);  /* 0C064888 mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C06488A mov #imm,Rn */
	r1 = 0xC21CA20u; UPD(0x0C06488Eu, 2);  /* 0C06488C mov.l @(disp,pc),Rn */
	r13 -= r6;  /* 0C06488E sub Rm,Rn */
	r12 = 0xC284EBCu; UPD(0x0C064892u, 2);  /* 0C064890 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x18u); UPD(0x0C064894u, 1);  /* 0C064892 mov.l @(disp,Rm),Rn */
	IF(0x0C064894u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C064896u, 1);  /* 0C064894 mov.w @(r0,Rm),Rn */
	r13 -= r7;  /* 0C064896 sub Rm,Rn */
	r9 = R32(r1); UPD(0x0C06489Au, 2);  /* 0C064898 mov.l @Rm,Rn */
	r13 -= r10;  /* 0C06489A sub Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C06489Eu, 2);  /* 0C06489C mov.w @Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C06489E add #imm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0648A2u, 2);  /* 0C0648A0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFu; UPD(0x0C0648A4u, 1);  /* 0C0648A2 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0648A4 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0648A8u, 2);  /* 0C0648A6 mov.l Rm,@Rn */
	IF(0x0C0648A8u); r4 <<= 16;  /* 0C0648A8 shll16 Rn */
	r13 &= r2;  /* 0C0648AA and Rm,Rn */
	r8 += 0x4u;  /* 0C0648AC add #imm,Rn */
	r4 |= r13;  /* 0C0648AE or Rm,Rn */
	W32(r8, r4); UPD(0x0C0648B2u, 5);  /* 0C0648B0 mov.l Rm,@Rn */
	r3 = 0xC392AF0u; UPD(0x0C0648B4u, 1);  /* 0C0648B2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0648B4 add #imm,Rn */
	{ r1 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(0x0C0647CAu, 4); goto L_0C0647CA; }  /* 0C0648B6 bra */
L_0C0648C0: BLKS(0x0C0648C0u);
	r11 = 0xC1F611Cu; UPD(0x0C0648C2u, 1);  /* 0C0648C0 mov.l @(disp,pc),Rn */
	r3 = R32(r11); UPD(0x0C0648C4u, 1);  /* 0C0648C2 mov.l @Rm,Rn */
	r3 += 0x6u;  /* 0C0648C4 add #imm,Rn */
	{ W32(r11, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C063EB4u, 4); goto L_0C063EB4; }  /* 0C0648C6 bra */
L_0C0648D0: BLKS(0x0C0648D0u);
	{ r11 = 0xFFFFFFFAu; /* slot mov #imm,Rn */ UPD(0x0C063C0Eu, 3); goto L_0C063C0E; }  /* 0C0648D0 bra */
}

/* FUN_0c064900 */
void f_0C064900(sh3_t *c)
{
	LOCALS;
L_0C064900: BLKS(0x0C064900u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064902u, 1);  /* 0C064900 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064904u, 1);  /* 0C064902 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C064906u, 1);  /* 0C064904 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064908u, 1);  /* 0C064906 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C064908 exts.b Rm,Rn */
	IF(0x0C06490Au); r15 -= 4; W32(r15, PR); UPD(0x0C06490Cu, 2);  /* 0C06490A sts.l pr,@-Rn */
	T = (r10 & r10) == 0;  /* 0C06490C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064942u, 4); goto L_0C064942; } goto L_0C064912; }  /* 0C06490E bt/s */
L_0C064912: BLKS(0x0C064912u);
	r9 = 0x0u;  /* 0C064912 mov #imm,Rn */
	r8 = 0x0u;  /* 0C064914 mov #imm,Rn */
	IF(0x0C064916u); ;  /* 0C064916 nop */
	UPD(0x0C064918u, 4);
L_0C064918: BLKS(0x0C064918u);
	r3 = 0xC283794u; UPD(0x0C06491Au, 1);  /* 0C064918 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C06491A add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06491Eu, 2);  /* 0C06491C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C064920u, 1);  /* 0C06491E mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C064920 tst Rm,Rn */
	{ u32 c_ = T; r5 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064934u, 4); goto L_0C064934; } goto L_0C064926; }  /* 0C064922 bt/s */
L_0C064926: BLKS(0x0C064926u);
	r7 = 0x26Cu; UPD(0x0C064928u, 2);  /* 0C064926 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C064928 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06492Cu, 2);  /* 0C06492A mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06492C extu.b Rm,Rn */
	T = r2 == r10;  /* 0C06492E cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064950u, 5); goto L_0C064950; } UPD(0x0C064934u, 1); goto L_0C064934; }  /* 0C064930 bt/s */
L_0C064934: BLKS(0x0C064934u);
	r9 = 0x280u; UPD(0x0C064936u, 1);  /* 0C064934 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C064936 add #imm,Rn */
	r8 += r9;  /* 0C064938 add Rm,Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06493A exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C06493C mov #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C06493E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C064918u, 8); goto L_0C064918; }  /* 0C064940 bf */
L_0C064942: BLKS(0x0C064942u);
	r15 = r14;  /* 0C064942 mov Rm,Rn */
	IF(0x0C064944u); PR = R32(r15); r15 += 4; UPD(0x0C064946u, 2);  /* 0C064944 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064948u, 1);  /* 0C064946 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06494Au, 1);  /* 0C064948 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06494Cu, 1);  /* 0C06494A mov.l @Rm+,Rn */
	IF(0x0C06494Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06494C rts */
L_0C064950: BLKS(0x0C064950u);
	r7 += 0x2u;  /* 0C064950 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C064954u, 2);  /* 0C064952 mov.b @Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C064954 extu.b Rm,Rn */
	r4 -= r2;  /* 0C064956 sub Rm,Rn */
	r4 += 0x1u;  /* 0C064958 add #imm,Rn */
	T = r4 > r3;  /* 0C06495A cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0649C0u, 7); goto L_0C0649C0; } goto L_0C064960; }  /* 0C06495C bt/s */
L_0C064960: BLKS(0x0C064960u);
	r2 = r7;  /* 0C064960 mov Rm,Rn */
	r2 += 0x1u;  /* 0C064962 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C064966u, 4);  /* 0C064964 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C064966 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06496Eu, 4); goto L_0C06496E; } goto L_0C06496C; }  /* 0C064968 bt/s */
L_0C06496C: BLKS(0x0C06496Cu);
	W8(r2, r1); UPD(0x0C06496Eu, 2);  /* 0C06496C mov.b Rm,@Rn */
L_0C06496E: BLKS(0x0C06496Eu);
	r5 = 0xC283794u; UPD(0x0C064970u, 1);  /* 0C06496E mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C064970 mov #imm,Rn */
	r4 = 0x26Cu; UPD(0x0C064974u, 2);  /* 0C064972 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C064974 add Rm,Rn */
	r4 += r5;  /* 0C064976 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C06497Au, 3);  /* 0C064978 mov.l @(disp,Rm),Rn */
	r2 = r4;  /* 0C06497A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r6 = v_; } UPD(0x0C06497Eu, 2);  /* 0C06497C mov.b @Rm+,Rn */
	r2 += 0x2u;  /* 0C06497E add #imm,Rn */
	IF(0x0C064980u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C064980 shld Rm,Rn */
	r3 = 0xC16BE68u; UPD(0x0C064984u, 3);  /* 0C064982 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C064984 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C064988u, 2);  /* 0C064986 mov.b Rm,@Rn */
	r0 += r3;  /* 0C064988 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C06498Cu, 2);  /* 0C06498A mov.l @Rm,Rn */
	r2 = 0x4u;  /* 0C06498C mov #imm,Rn */
	r7 = R32(r0 + 0x4u); UPD(0x0C064990u, 2);  /* 0C06498E mov.l @(disp,Rm),Rn */
	r0 = 0xC393044u; UPD(0x0C064992u, 1);  /* 0C064990 mov.l @(disp,pc),Rn */
	W32(r0, r7); UPD(0x0C064994u, 1);  /* 0C064992 mov.l Rm,@Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C064996u, 1);  /* 0C064994 mov.l @(disp,Rm),Rn */
	IF(0x0C064996u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C064996 shld Rm,Rn */
	IF(0x0C064998u); r7 = R32(r0 + r3); UPD(0x0C06499Au, 2);  /* 0C064998 mov.l @(r0,Rm),Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C06499Cu, 1);  /* 0C06499A mov.l @(disp,Rm),Rn */
	IF(0x0C06499Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06499C shld Rm,Rn */
	IF(0x0C06499Eu); r1 = R32(r0 + r7); UPD(0x0C0649A0u, 2);  /* 0C06499E mov.l @(r0,Rm),Rn */
	r3 = 0xC2175E8u; UPD(0x0C0649A2u, 1);  /* 0C0649A0 mov.l @(disp,pc),Rn */
	r7 = 0u - r6;  /* 0C0649A2 neg Rm,Rn */
	W32(r3, r1); UPD(0x0C0649A6u, 2);  /* 0C0649A4 mov.l Rm,@Rn */
	r7 += 0x14u;  /* 0C0649A6 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0649A8 extu.b Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0649ACu, 3);  /* 0C0649AA mov.b @Rm,Rn */
	r0 = 0xC063B90u; UPD(0x0C0649AEu, 1);  /* 0C0649AC mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x10u); UPD(0x0C0649B0u, 1);  /* 0C0649AE mov.l @(disp,Rm),Rn */
	IF(0x0C0649B0u); { u32 t_ = r0; PR = 0x0C0649B4u; r5 = R32(r5 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C0649B4u); }  /* 0C0649B0 jsr @Rn */
L_0C0649B4: BLKS(0x0C0649B4u);
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C064934u, 3); goto L_0C064934; }  /* 0C0649B4 bra */
L_0C0649C0: BLKS(0x0C0649C0u);
	r7 += 0x1u;  /* 0C0649C0 add #imm,Rn */
	r2 = 0x40u;  /* 0C0649C2 mov #imm,Rn */
	{ W8(r7, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C06496Eu, 5); goto L_0C06496E; }  /* 0C0649C4 bra */
}

/* FUN_0c0649f0 */
void f_0C0649F0(sh3_t *c)
{
	LOCALS;
L_0C0649F0: BLKS(0x0C0649F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0649F2u, 1);  /* 0C0649F0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0649F2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0649F6u, 2);  /* 0C0649F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0649F8u, 1);  /* 0C0649F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0649FAu, 1);  /* 0C0649F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0649FCu, 1);  /* 0C0649FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0649FEu, 1);  /* 0C0649FC mov.l Rm,@-Rn */
	r3 = 0x280u; UPD(0x0C064A00u, 1);  /* 0C0649FE mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064A02u, 1);  /* 0C064A00 mov.l Rm,@-Rn */
	IF(0x0C064A02u); MACL = r5 * r3;  /* 0C064A02 mul.l Rm,Rn */
	IF(0x0C064A04u); r15 -= 4; W32(r15, PR); UPD(0x0C064A06u, 3);  /* 0C064A04 sts.l pr,@-Rn */
	r1 = 0xC283794u; UPD(0x0C064A08u, 1);  /* 0C064A06 mov.l @(disp,pc),Rn */
	IF(0x0C064A08u); r0 = MACL;  /* 0C064A08 sts macl,Rn */
	r9 = 0xC050D70u; UPD(0x0C064A0Cu, 2);  /* 0C064A0A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C064A0C add #imm,Rn */
	r14 = r15;  /* 0C064A0E mov Rm,Rn */
	r0 += r1;  /* 0C064A10 add Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C064A12 add #imm,Rn */
	W32(r14, r5); UPD(0x0C064A16u, 5);  /* 0C064A14 mov.l Rm,@Rn */
	r12 = R32(r0 + 0x10u); UPD(0x0C064A18u, 1);  /* 0C064A16 mov.l @(disp,Rm),Rn */
	r4 = 0x20000u; UPD(0x0C064A1Au, 1);  /* 0C064A18 mov.l @(disp,pc),Rn */
	IF(0x0C064A1Au); { u32 t_ = r9; PR = 0x0C064A1Eu; r13 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064A1Eu); }  /* 0C064A1A jsr @Rn */
L_0C064A1E: BLKS(0x0C064A1Eu);
	r2 = 0x58000u; UPD(0x0C064A20u, 1);  /* 0C064A1E mov.l @(disp,pc),Rn */
	r11 = 0x180u; UPD(0x0C064A22u, 1);  /* 0C064A20 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C064A22 add Rm,Rn */
	r10 = 0xFFFFFF40u; UPD(0x0C064A26u, 2);  /* 0C064A24 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C064A26 mov Rm,Rn */
	IF(0x0C064A28u); { u32 t_ = r9; PR = 0x0C064A2Cu; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064A2Cu); }  /* 0C064A28 jsr @Rn */
L_0C064A2C: BLKS(0x0C064A2Cu);
	r8 = 0xC06CC20u; UPD(0x0C064A2Eu, 1);  /* 0C064A2C mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C064A2E add Rm,Rn */
	IF(0x0C064A30u); r0 <<= 8;  /* 0C064A30 shll8 Rn */
	r5 = r12;  /* 0C064A32 mov Rm,Rn */
	r6 = r13;  /* 0C064A34 mov Rm,Rn */
	r7 = 0x14u;  /* 0C064A36 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064A3Au, 6);  /* 0C064A38 mov.l Rm,@(disp,Rn) */
	IF(0x0C064A3Au); { u32 t_ = r8; PR = 0x0C064A3Eu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064A3Eu); }  /* 0C064A3A jsr @Rn */
L_0C064A3E: BLKS(0x0C064A3Eu);
	r4 = 0x20000u; UPD(0x0C064A40u, 1);  /* 0C064A3E mov.l @(disp,pc),Rn */
	IF(0x0C064A40u); { u32 t_ = r9; PR = 0x0C064A44u; IF(0x0C064A42u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064A44u); }  /* 0C064A40 jsr @Rn */
L_0C064A44: BLKS(0x0C064A44u);
	r1 = 0x58000u; UPD(0x0C064A46u, 1);  /* 0C064A44 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C064A46 mov Rm,Rn */
	r0 += r1;  /* 0C064A48 add Rm,Rn */
	IF(0x0C064A4Au); { u32 t_ = r9; PR = 0x0C064A4Eu; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064A4Eu); }  /* 0C064A4A jsr @Rn */
L_0C064A4E: BLKS(0x0C064A4Eu);
	r0 += r10;  /* 0C064A4E add Rm,Rn */
	IF(0x0C064A50u); r0 <<= 8;  /* 0C064A50 shll8 Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064A54u, 3);  /* 0C064A52 mov.l Rm,@(disp,Rn) */
	r4 = 0xDu;  /* 0C064A54 mov #imm,Rn */
	r5 = r12;  /* 0C064A56 mov Rm,Rn */
	r6 = r13;  /* 0C064A58 mov Rm,Rn */
	IF(0x0C064A5Au); { u32 t_ = r8; PR = 0x0C064A5Eu; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064A5Eu); }  /* 0C064A5A jsr @Rn */
L_0C064A5E: BLKS(0x0C064A5Eu);
	r10 = 0x0u;  /* 0C064A5E mov #imm,Rn */
	r15 += 0x8u;  /* 0C064A60 add #imm,Rn */
	IF(0x0C064A62u); ;  /* 0C064A62 nop */
	UPD(0x0C064A64u, 3);
L_0C064A64: BLKS(0x0C064A64u);
	r7 = 0x280u; UPD(0x0C064A66u, 1);  /* 0C064A64 mov.w @(disp,pc),Rn */
	r4 = 0xDu;  /* 0C064A66 mov #imm,Rn */
	r8 = R32(r14); UPD(0x0C064A6Au, 2);  /* 0C064A68 mov.l @Rm,Rn */
	IF(0x0C064A6Au); MACL = r8 * r7;  /* 0C064A6A mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C064A6Eu, 3);  /* 0C064A6C mov.l @(disp,pc),Rn */
	IF(0x0C064A6Eu); r11 = MACL;  /* 0C064A6E sts macl,Rn */
	r0 += r11;  /* 0C064A70 add Rm,Rn */
	r0 += r10;  /* 0C064A72 add Rm,Rn */
	r7 += 0xFFFFFFE5u;  /* 0C064A74 add #imm,Rn */
	IF(0x0C064A76u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C064A78u, 5);  /* 0C064A76 mov.b @(r0,Rm),Rn */
	r8 = r6 & 0xFF;  /* 0C064A78 extu.b Rm,Rn */
	T = r8 > r4;  /* 0C064A7A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C064B50u, 5); goto L_0C064B50; }  /* 0C064A7C bf */
L_0C064A7E: BLKS(0x0C064A7Eu);
	r4 = r10;  /* 0C064A7E mov Rm,Rn */
	r4 += 0x1u;  /* 0C064A80 add #imm,Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C064A82 exts.b Rm,Rn */
	r5 = 0x2u;  /* 0C064A84 mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C064A86 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064A64u, 8); goto L_0C064A64; } goto L_0C064A8C; }  /* 0C064A88 bf/s */
L_0C064A8C: BLKS(0x0C064A8Cu);
	r6 = 0xC283794u; UPD(0x0C064A8Eu, 2);  /* 0C064A8C mov.l @(disp,pc),Rn */
	r10 = 0x253u; UPD(0x0C064A90u, 1);  /* 0C064A8E mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C064A90 add Rm,Rn */
	IF(0x0C064A92u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C064A94u, 2);  /* 0C064A92 mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C064A94 tst Rm,Rn */
	if (!T) { UPD(0x0C064B30u, 4); goto L_0C064B30; }  /* 0C064A96 bf */
L_0C064A98: BLKS(0x0C064A98u);
	r10 = 0x0u;  /* 0C064A98 mov #imm,Rn */
	r8 = 0xC050D70u; UPD(0x0C064A9Cu, 2);  /* 0C064A9A mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFF40u; UPD(0x0C064A9Eu, 1);  /* 0C064A9C mov.w @(disp,pc),Rn */
	r9 = 0xC06CC20u; UPD(0x0C064AA0u, 1);  /* 0C064A9E mov.l @(disp,pc),Rn */
L_0C064AA0: BLKS(0x0C064AA0u);
	r0 = 0x280u; UPD(0x0C064AA2u, 1);  /* 0C064AA0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C064AA4u, 1);  /* 0C064AA2 mov.l @Rm,Rn */
	IF(0x0C064AA4u); MACL = r1 * r0;  /* 0C064AA4 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C064AA8u, 3);  /* 0C064AA6 mov.l @(disp,pc),Rn */
	IF(0x0C064AA8u); r0 = MACL;  /* 0C064AA8 sts macl,Rn */
	r2 = 0x26Bu; UPD(0x0C064AACu, 2);  /* 0C064AAA mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C064AAC add Rm,Rn */
	IF(0x0C064AAEu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C064AB0u, 2);  /* 0C064AAE mov.b @(r0,Rm),Rn */
	r4 = 0xAAAAAAABu; UPD(0x0C064AB2u, 1);  /* 0C064AB0 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C064AB2 extu.b Rm,Rn */
	{ u64 r_ = (u64)r6 * (u64)r4; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C064AB4 dmulu.l Rm,Rn */
	IF(0x0C064AB6u); r5 = MACH;  /* 0C064AB6 sts mach,Rn */
	IF(0x0C064AB8u); T = r5 & 1; r5 >>= 1;  /* 0C064AB8 shlr Rn */
	r0 = r5 & 0xFF;  /* 0C064ABA extu.b Rm,Rn */
	r0 += 0x1u;  /* 0C064ABC add #imm,Rn */
	T = (s32)r10 >= (s32)r0;  /* 0C064ABE cmp/ge Rm,Rn */
	if (T) { UPD(0x0C064B30u, 11); goto L_0C064B30; }  /* 0C064AC0 bt */
L_0C064AC2: BLKS(0x0C064AC2u);
	r4 = 0x20000u; UPD(0x0C064AC4u, 1);  /* 0C064AC2 mov.l @(disp,pc),Rn */
	IF(0x0C064AC4u); { u32 t_ = r8; PR = 0x0C064AC8u; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064AC8u); }  /* 0C064AC4 jsr @Rn */
L_0C064AC8: BLKS(0x0C064AC8u);
	r3 = 0x58000u; UPD(0x0C064ACAu, 1);  /* 0C064AC8 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C064ACA add Rm,Rn */
	r4 = 0x180u; UPD(0x0C064ACEu, 2);  /* 0C064ACC mov.w @(disp,pc),Rn */
	IF(0x0C064ACEu); { u32 t_ = r8; PR = 0x0C064AD2u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064AD2u); }  /* 0C064ACE jsr @Rn */
L_0C064AD2: BLKS(0x0C064AD2u);
	r0 += r11;  /* 0C064AD2 add Rm,Rn */
	IF(0x0C064AD4u); r0 <<= 8;  /* 0C064AD4 shll8 Rn */
	r5 = r12;  /* 0C064AD6 mov Rm,Rn */
	r6 = r13;  /* 0C064AD8 mov Rm,Rn */
	r7 = 0x14u;  /* 0C064ADA mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064ADEu, 6);  /* 0C064ADC mov.l Rm,@(disp,Rn) */
	IF(0x0C064ADEu); { u32 t_ = r9; PR = 0x0C064AE2u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064AE2u); }  /* 0C064ADE jsr @Rn */
L_0C064AE2: BLKS(0x0C064AE2u);
	r4 = 0x20000u; UPD(0x0C064AE4u, 1);  /* 0C064AE2 mov.l @(disp,pc),Rn */
	IF(0x0C064AE4u); { u32 t_ = r8; PR = 0x0C064AE8u; IF(0x0C064AE6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064AE8u); }  /* 0C064AE4 jsr @Rn */
L_0C064AE8: BLKS(0x0C064AE8u);
	r1 = 0x58000u; UPD(0x0C064AEAu, 1);  /* 0C064AE8 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C064AEA add Rm,Rn */
	r4 = 0x180u; UPD(0x0C064AEEu, 2);  /* 0C064AEC mov.w @(disp,pc),Rn */
	IF(0x0C064AEEu); { u32 t_ = r8; PR = 0x0C064AF2u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064AF2u); }  /* 0C064AEE jsr @Rn */
L_0C064AF2: BLKS(0x0C064AF2u);
	r0 += r11;  /* 0C064AF2 add Rm,Rn */
	IF(0x0C064AF4u); r0 <<= 8;  /* 0C064AF4 shll8 Rn */
	r5 = r12;  /* 0C064AF6 mov Rm,Rn */
	r6 = r13;  /* 0C064AF8 mov Rm,Rn */
	r7 = 0x14u;  /* 0C064AFA mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064AFEu, 6);  /* 0C064AFC mov.l Rm,@(disp,Rn) */
	IF(0x0C064AFEu); { u32 t_ = r9; PR = 0x0C064B02u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064B02u); }  /* 0C064AFE jsr @Rn */
L_0C064B02: BLKS(0x0C064B02u);
	r4 = 0x20000u; UPD(0x0C064B04u, 1);  /* 0C064B02 mov.l @(disp,pc),Rn */
	IF(0x0C064B04u); { u32 t_ = r8; PR = 0x0C064B08u; IF(0x0C064B06u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064B08u); }  /* 0C064B04 jsr @Rn */
L_0C064B08: BLKS(0x0C064B08u);
	r2 = 0x58000u; UPD(0x0C064B0Au, 1);  /* 0C064B08 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C064B0A add Rm,Rn */
	r4 = 0x180u; UPD(0x0C064B0Eu, 2);  /* 0C064B0C mov.w @(disp,pc),Rn */
	IF(0x0C064B0Eu); { u32 t_ = r8; PR = 0x0C064B12u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064B12u); }  /* 0C064B0E jsr @Rn */
L_0C064B12: BLKS(0x0C064B12u);
	r0 += r11;  /* 0C064B12 add Rm,Rn */
	IF(0x0C064B14u); r0 <<= 8;  /* 0C064B14 shll8 Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064B18u, 3);  /* 0C064B16 mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C064B18 mov #imm,Rn */
	r4 = 0x1u;  /* 0C064B1A mov #imm,Rn */
	r5 = r12;  /* 0C064B1C mov Rm,Rn */
	IF(0x0C064B1Eu); { u32 t_ = r9; PR = 0x0C064B22u; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064B22u); }  /* 0C064B1E jsr @Rn */
L_0C064B22: BLKS(0x0C064B22u);
	r7 = r10;  /* 0C064B22 mov Rm,Rn */
	r7 += 0x1u;  /* 0C064B24 add #imm,Rn */
	r15 += 0x8u;  /* 0C064B26 add #imm,Rn */
	{ r10 = (u32)(s32)(s8)r7; /* slot exts.b Rm,Rn */ UPD(0x0C064AA0u, 6); goto L_0C064AA0; }  /* 0C064B28 bra */
L_0C064B30: BLKS(0x0C064B30u);
	r14 += 0x4u;  /* 0C064B30 add #imm,Rn */
	r15 = r14;  /* 0C064B32 mov Rm,Rn */
	IF(0x0C064B34u); PR = R32(r15); r15 += 4; UPD(0x0C064B36u, 3);  /* 0C064B34 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064B38u, 1);  /* 0C064B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C064B3Au, 1);  /* 0C064B38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064B3Cu, 1);  /* 0C064B3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064B3Eu, 1);  /* 0C064B3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064B40u, 1);  /* 0C064B3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064B42u, 1);  /* 0C064B40 mov.l @Rm+,Rn */
	IF(0x0C064B42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C064B42 rts */
L_0C064B50: BLKS(0x0C064B50u);
	r0 = 0xC16D1B8u; UPD(0x0C064B52u, 1);  /* 0C064B50 mov.l @(disp,pc),Rn */
	IF(0x0C064B52u); r8 <<= 2;  /* 0C064B52 shll2 Rn */
	r15 += 0xFFFFFFF8u;  /* 0C064B54 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C064B58u, 3);  /* 0C064B56 mov.l @(disp,pc),Rn */
	IF(0x0C064B58u); { u32 t_ = r9; PR = 0x0C064B5Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064B5Cu); }  /* 0C064B58 jsr @Rn */
L_0C064B5C: BLKS(0x0C064B5Cu);
	r3 = 0x58000u; UPD(0x0C064B5Eu, 1);  /* 0C064B5C mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C064B5E add Rm,Rn */
	r4 = 0x180u; UPD(0x0C064B62u, 2);  /* 0C064B60 mov.w @(disp,pc),Rn */
	IF(0x0C064B62u); { u32 t_ = r9; PR = 0x0C064B66u; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C064B66u); }  /* 0C064B62 jsr @Rn */
L_0C064B66: BLKS(0x0C064B66u);
	r2 = 0xFFFFFF40u; UPD(0x0C064B68u, 1);  /* 0C064B66 mov.w @(disp,pc),Rn */
	r5 = r12;  /* 0C064B68 mov Rm,Rn */
	r0 += r2;  /* 0C064B6A add Rm,Rn */
	IF(0x0C064B6Cu); r0 <<= 8;  /* 0C064B6C shll8 Rn */
	r1 = 0xC06CC20u; UPD(0x0C064B70u, 4);  /* 0C064B6E mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C064B70 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C064B74u, 2);  /* 0C064B72 mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C064B74 mov #imm,Rn */
	IF(0x0C064B76u); { u32 t_ = r1; PR = 0x0C064B7Au; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C064B7Au); }  /* 0C064B76 jsr @Rn */
L_0C064B7A: BLKS(0x0C064B7Au);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C064A7Eu, 3); goto L_0C064A7E; }  /* 0C064B7A bra */
}

void f_0C064BB0(sh3_t *c)
{
	LOCALS;
L_0C064BB0: BLKS(0x0C064BB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064BB2u, 1);  /* 0C064BB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064BB4u, 1);  /* 0C064BB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C064BB6u, 1);  /* 0C064BB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C064BB8u, 1);  /* 0C064BB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C064BBAu, 1);  /* 0C064BB8 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C064BBCu, 1);  /* 0C064BBA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C064BBC exts.w Rm,Rn */
	IF(0x0C064BBEu); MACL = r12 * r2;  /* 0C064BBE mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C064BC2u, 4);  /* 0C064BC0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064BC4u, 1);  /* 0C064BC2 mov.l Rm,@-Rn */
	IF(0x0C064BC4u); r10 = MACL;  /* 0C064BC4 sts macl,Rn */
	r10 += r0;  /* 0C064BC6 add Rm,Rn */
	IF(0x0C064BC8u); r15 -= 4; W32(r15, PR); UPD(0x0C064BCAu, 3);  /* 0C064BC8 sts.l pr,@-Rn */
	r0 = 0x27Cu; UPD(0x0C064BCCu, 1);  /* 0C064BCA mov.w @(disp,pc),Rn */
	IF(0x0C064BCCu); r2 = R32(r0 + r10); UPD(0x0C064BCEu, 1);  /* 0C064BCC mov.l @(r0,Rm),Rn */
	r3 = 0xF8F8F7u; UPD(0x0C064BD0u, 1);  /* 0C064BCE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C064BD0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064BDCu, 4); goto L_0C064BDC; } goto L_0C064BD6; }  /* 0C064BD2 bt/s */
L_0C064BD6: BLKS(0x0C064BD6u);
	r3 = 0x20202u; UPD(0x0C064BD8u, 2);  /* 0C064BD6 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C064BD8 add Rm,Rn */
	IF(0x0C064BDAu); W32(r0 + r10, r2); UPD(0x0C064BDCu, 2);  /* 0C064BDA mov.l Rm,@(r0,Rn) */
L_0C064BDC: BLKS(0x0C064BDCu);
	r11 = 0x268u; UPD(0x0C064BDEu, 1);  /* 0C064BDC mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C064BDE add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C064BE2u, 2);  /* 0C064BE0 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C064BE2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C064BE4 cmp/eq #imm,r0 */
	IF(0x0C064BE6u); r4 = T;  /* 0C064BE6 movt Rn */
	T = r0 == 0x28u;  /* 0C064BE8 cmp/eq #imm,r0 */
	IF(0x0C064BEAu); r6 = T;  /* 0C064BEA movt Rn */
	T = r0 == 0x32u;  /* 0C064BEC cmp/eq #imm,r0 */
	IF(0x0C064BEEu); r5 = T;  /* 0C064BEE movt Rn */
	r4 |= r6;  /* 0C064BF0 or Rm,Rn */
	r4 |= r5;  /* 0C064BF2 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C064BF4 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064CD0u, 13); goto L_0C064CD0; } UPD(0x0C064BFAu, 1); goto L_0C064BFA; }  /* 0C064BF6 bf/s */
L_0C064BFA: BLKS(0x0C064BFAu);
	r9 = 0x1u;  /* 0C064BFA mov #imm,Rn */
	r9 &= r3;  /* 0C064BFC and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C064BFE tst Rm,Rn */
	if (T) { UPD(0x0C064C80u, 6); goto L_0C064C80; }  /* 0C064C00 bt */
L_0C064C02: BLKS(0x0C064C02u);
	r1 = r3;  /* 0C064C02 mov Rm,Rn */
	r1 += 0x1u;  /* 0C064C04 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C064C06 extu.b Rm,Rn */
	T = r0 == 0x5Bu;  /* 0C064C08 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C064C20u, 7); goto L_0C064C20; } UPD(0x0C064C0Eu, 1); goto L_0C064C0E; }  /* 0C064C0A bt/s */
L_0C064C0E: BLKS(0x0C064C0Eu);
	r15 = r14;  /* 0C064C0E mov Rm,Rn */
	IF(0x0C064C10u); PR = R32(r15); r15 += 4; UPD(0x0C064C12u, 2);  /* 0C064C10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064C14u, 1);  /* 0C064C12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064C16u, 1);  /* 0C064C14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064C18u, 1);  /* 0C064C16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064C1Au, 1);  /* 0C064C18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064C1Cu, 1);  /* 0C064C1A mov.l @Rm+,Rn */
	IF(0x0C064C1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C064C1C rts */
L_0C064C20: BLKS(0x0C064C20u);
	r6 = 0xC7C3D24u; UPD(0x0C064C22u, 1);  /* 0C064C20 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C064C22 mov Rm,Rn */
	IF(0x0C064C24u); { u32 t_ = r6; PR = 0x0C064C28u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C3D24, 0x0C7C3D24u, 0x0C064C28u); }  /* 0C064C24 jsr @Rn */
L_0C064C28: BLKS(0x0C064C28u);
	r0 = R32(r10); UPD(0x0C064C2Au, 1);  /* 0C064C28 mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C064C2A mov #imm,Rn */
	r3 = 0xA3FFFFFFu; UPD(0x0C064C2Eu, 2);  /* 0C064C2C mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C064C2E mov #imm,Rn */
	r0 &= r3;  /* 0C064C30 and Rm,Rn */
	W8(r11, r8); UPD(0x0C064C34u, 3);  /* 0C064C32 mov.b Rm,@Rn */
	r2 = 0x15u;  /* 0C064C34 mov #imm,Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C064C38u, 2);  /* 0C064C36 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C064C38 add #imm,Rn */
	W32(r10, r0); UPD(0x0C064C3Cu, 2);  /* 0C064C3A mov.l Rm,@Rn */
	W32(r10 + 0x8u, r5); UPD(0x0C064C3Eu, 1);  /* 0C064C3C mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C064C3E mov Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C064C42u, 2);  /* 0C064C40 mov.l Rm,@(disp,Rn) */
	IF(0x0C064C42u); r0 <<= 2;  /* 0C064C42 shll2 Rn */
	W32(r15, r4); UPD(0x0C064C46u, 2);  /* 0C064C44 mov.l Rm,@Rn */
	r7 = 0xC16D1F0u; UPD(0x0C064C48u, 1);  /* 0C064C46 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C064C48 mov #imm,Rn */
	IF(0x0C064C4Au); r5 = R32(r0 + r7); UPD(0x0C064C4Cu, 2);  /* 0C064C4A mov.l @(r0,Rm),Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C064C4Eu, 1);  /* 0C064C4C mov.l @(disp,Rm),Rn */
	r9 = 0xC0AB240u; UPD(0x0C064C50u, 1);  /* 0C064C4E mov.l @(disp,pc),Rn */
	r11 = 0xC0AFB20u; UPD(0x0C064C52u, 1);  /* 0C064C50 mov.l @(disp,pc),Rn */
	IF(0x0C064C52u); { u32 t_ = r9; PR = 0x0C064C56u; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C064C56u); }  /* 0C064C52 jsr @Rn */
L_0C064C56: BLKS(0x0C064C56u);
	r10 = 0xC0AFC10u; UPD(0x0C064C58u, 1);  /* 0C064C56 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C064C58 add #imm,Rn */
	r4 = r12;  /* 0C064C5A mov Rm,Rn */
	IF(0x0C064C5Cu); { u32 t_ = r11; PR = 0x0C064C60u; r5 = 0x47u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C064C60u); }  /* 0C064C5C jsr @Rn */
L_0C064C60: BLKS(0x0C064C60u);
	r4 = 0x80u; UPD(0x0C064C62u, 1);  /* 0C064C60 mov.w @(disp,pc),Rn */
	IF(0x0C064C62u); { u32 t_ = r10; PR = 0x0C064C66u; IF(0x0C064C64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C064C66u); }  /* 0C064C62 jsr @Rn */
L_0C064C66: BLKS(0x0C064C66u);
	r6 = 0xC068F40u; UPD(0x0C064C68u, 1);  /* 0C064C66 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C064C68 mov Rm,Rn */
	r15 = r14;  /* 0C064C6A mov Rm,Rn */
	IF(0x0C064C6Cu); PR = R32(r15); r15 += 4; UPD(0x0C064C6Eu, 3);  /* 0C064C6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064C70u, 1);  /* 0C064C6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064C72u, 1);  /* 0C064C70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064C74u, 1);  /* 0C064C72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064C76u, 1);  /* 0C064C74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064C78u, 1);  /* 0C064C76 mov.l @Rm+,Rn */
	IF(0x0C064C78u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C068F40u: TAIL(f_0C068F40); default: JUMPD(tv_); } }  /* 0C064C78 jmp @Rn */
L_0C064C80: BLKS(0x0C064C80u);
	r8 = 0xC0AFE40u; UPD(0x0C064C82u, 1);  /* 0C064C80 mov.l @(disp,pc),Rn */
	IF(0x0C064C82u); { u32 t_ = r8; PR = 0x0C064C86u; IF(0x0C064C84u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C064C86u); }  /* 0C064C82 jsr @Rn */
L_0C064C86: BLKS(0x0C064C86u);
	r15 += 0xFFFFFFECu;  /* 0C064C86 add #imm,Rn */
	W32(r15, r9); UPD(0x0C064C8Au, 2);  /* 0C064C88 mov.l Rm,@Rn */
	r8 = r0;  /* 0C064C8A mov Rm,Rn */
	r5 = 0x1Fu;  /* 0C064C8C mov #imm,Rn */
	r4 = 0xF0u; UPD(0x0C064C90u, 3);  /* 0C064C8E mov.w @(disp,pc),Rn */
	r8 &= r5;  /* 0C064C90 and Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C064C94u, 2);  /* 0C064C92 mov.l @(disp,pc),Rn */
	r3 = 0x15u;  /* 0C064C94 mov #imm,Rn */
	r9 = 0x40000u; UPD(0x0C064C98u, 2);  /* 0C064C96 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C064C98 add Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C064C9Cu, 2);  /* 0C064C9A mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C064C9C mov Rm,Rn */
	IF(0x0C064C9Eu); { u32 t_ = r0; PR = 0x0C064CA2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C064CA2u); }  /* 0C064C9E jsr @Rn */
L_0C064CA2: BLKS(0x0C064CA2u);
	r5 = r9;  /* 0C064CA2 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C064CA6u, 2);  /* 0C064CA4 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C064CA6 mov Rm,Rn */
	IF(0x0C064CA8u); { u32 t_ = r9; PR = 0x0C064CACu; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C064CACu); }  /* 0C064CA8 jsr @Rn */
L_0C064CAC: BLKS(0x0C064CACu);
	W32(r15 + 0xCu, r0); UPD(0x0C064CAEu, 1);  /* 0C064CAC mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C064CAE mov #imm,Rn */
	r0 = 0xC080C0u; UPD(0x0C064CB2u, 2);  /* 0C064CB0 mov.l @(disp,pc),Rn */
	r8 = 0xC0ACA40u; UPD(0x0C064CB4u, 1);  /* 0C064CB2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C064CB6u, 1);  /* 0C064CB4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C064CB8u, 1);  /* 0C064CB6 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C064CBAu, 1);  /* 0C064CB8 mov.l @(disp,Rm),Rn */
	IF(0x0C064CBAu); { u32 t_ = r8; PR = 0x0C064CBEu; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C064CBEu); }  /* 0C064CBA jsr @Rn */
L_0C064CBE: BLKS(0x0C064CBEu);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C064CC0u, 1);  /* 0C064CBE mov.b @Rm,Rn */
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C064C02u, 3); goto L_0C064C02; }  /* 0C064CC0 bra */
L_0C064CD0: BLKS(0x0C064CD0u);
	r15 += 0xFFFFFFF8u;  /* 0C064CD0 add #imm,Rn */
	r9 = 0x14u;  /* 0C064CD2 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C064CD6u, 3);  /* 0C064CD4 mov.l Rm,@Rn */
	r0 = r12;  /* 0C064CD6 mov Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C064CDAu, 2);  /* 0C064CD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C064CDAu); r0 <<= 2;  /* 0C064CDA shll2 Rn */
	r7 = 0xC16D1F0u; UPD(0x0C064CDEu, 2);  /* 0C064CDC mov.l @(disp,pc),Rn */
	r8 = 0xC0ADB30u; UPD(0x0C064CE0u, 1);  /* 0C064CDE mov.l @(disp,pc),Rn */
	IF(0x0C064CE0u); r5 = R32(r0 + r7); UPD(0x0C064CE2u, 1);  /* 0C064CE0 mov.l @(r0,Rm),Rn */
	r4 = R32(r10); UPD(0x0C064CE4u, 1);  /* 0C064CE2 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C064CE6u, 1);  /* 0C064CE4 mov.l @(disp,Rm),Rn */
	IF(0x0C064CE6u); { u32 t_ = r8; PR = 0x0C064CEAu; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADB30, 0x0C0ADB30u, 0x0C064CEAu); }  /* 0C064CE6 jsr @Rn */
L_0C064CEA: BLKS(0x0C064CEAu);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C064CECu, 1);  /* 0C064CEA mov.b @Rm,Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C064BFAu, 3); goto L_0C064BFA; }  /* 0C064CEC bra */
}

/* FUN_0c064d40 */
void f_0C064D40(sh3_t *c)
{
	LOCALS;
L_0C064D40: BLKS(0x0C064D40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064D42u, 1);  /* 0C064D40 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C064D42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064D46u, 2);  /* 0C064D44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C064D48u, 1);  /* 0C064D46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C064D4Au, 1);  /* 0C064D48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C064D4Cu, 1);  /* 0C064D4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C064D4Eu, 1);  /* 0C064D4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064D50u, 1);  /* 0C064D4E mov.l Rm,@-Rn */
	IF(0x0C064D50u); r15 -= 4; W32(r15, PR); UPD(0x0C064D52u, 1);  /* 0C064D50 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C064D52 add #imm,Rn */
	r14 = r15;  /* 0C064D54 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C064D58u, 3);  /* 0C064D56 mov.l Rm,@Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C064D5Au, 1);  /* 0C064D58 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r1); UPD(0x0C064D5Cu, 1);  /* 0C064D5A mov.l Rm,@(disp,Rn) */
L_0C064D5C: BLKS(0x0C064D5Cu);
	r0 = R32(r14); UPD(0x0C064D5Eu, 1);  /* 0C064D5C mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C064D5E mov #imm,Rn */
	r0 += r0;  /* 0C064D60 add Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C064D64u, 3);  /* 0C064D62 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C064D64 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C064D68u, 2);  /* 0C064D66 mov.l @(disp,Rm),Rn */
	r3 = 0xC27556Au; UPD(0x0C064D6Au, 1);  /* 0C064D68 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C064D6A mov Rm,Rn */
	r1 = 0xC275DD2u; UPD(0x0C064D6Eu, 2);  /* 0C064D6C mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C064D6E add Rm,Rn */
	r8 = 0xC285318u; UPD(0x0C064D72u, 2);  /* 0C064D70 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C064D74u, 1);  /* 0C064D72 mov.l @(disp,Rm),Rn */
	IF(0x0C064D74u); W16(r0 + r1, r4); UPD(0x0C064D76u, 1);  /* 0C064D74 mov.w Rm,@(r0,Rn) */
	r8 += r2;  /* 0C064D76 add Rm,Rn */
	IF(0x0C064D78u); W16(r0 + r3, r4); UPD(0x0C064D7Au, 2);  /* 0C064D78 mov.w Rm,@(r0,Rn) */
	IF(0x0C064D7Au); ;  /* 0C064D7A nop */
	UPD(0x0C064D7Cu, 1);
L_0C064D7C: BLKS(0x0C064D7Cu);
	r5 = R32(r8); UPD(0x0C064D7Eu, 1);  /* 0C064D7C mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C064D7E tst Rm,Rn */
	{ u32 c_ = T; r3 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064D88u, 4); goto L_0C064D88; } goto L_0C064D84; }  /* 0C064D80 bt/s */
L_0C064D84: BLKS(0x0C064D84u);
	{ r0 = R32(r8 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C064EA0u, 4); goto L_0C064EA0; }  /* 0C064D84 bra */
L_0C064D88: BLKS(0x0C064D88u);
	r3 += 0x1u;  /* 0C064D88 add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C064D8A exts.w Rm,Rn */
	r13 = 0xFu;  /* 0C064D8C mov #imm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C064D8E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064D7Cu, 7); goto L_0C064D7C; } goto L_0C064D94; }  /* 0C064D90 bf/s */
L_0C064D94: BLKS(0x0C064D94u);
	r7 = 0x0u;  /* 0C064D94 mov #imm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C064D98u, 3);  /* 0C064D96 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C064D9Au, 1);  /* 0C064D98 mov.l Rm,@(disp,Rn) */
	r12 = R32(r14 + 0x8u); UPD(0x0C064D9Cu, 1);  /* 0C064D9A mov.l @(disp,Rm),Rn */
L_0C064D9C: BLKS(0x0C064D9Cu);
	r11 = 0x0u;  /* 0C064D9C mov #imm,Rn */
	r9 = r12;  /* 0C064D9E mov Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C064DA2u, 3);  /* 0C064DA0 mov.l @(disp,pc),Rn */
	r9 += r13;  /* 0C064DA2 add Rm,Rn */
	r9 += r8;  /* 0C064DA4 add Rm,Rn */
	r10 = 0x0u;  /* 0C064DA6 mov #imm,Rn */
	UPD(0x0C064DA8u, 3);
L_0C064DA8: BLKS(0x0C064DA8u);
	r8 = r13;  /* 0C064DA8 mov Rm,Rn */
	r8 += r12;  /* 0C064DAA add Rm,Rn */
	r1 = 0xC21F8A0u; UPD(0x0C064DAEu, 3);  /* 0C064DAC mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C064DAE add Rm,Rn */
	r8 += r1;  /* 0C064DB0 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C064DB4u, 3);  /* 0C064DB2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C064DB4 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064E20u, 4); goto L_0C064E20; } UPD(0x0C064DBAu, 1); goto L_0C064DBA; }  /* 0C064DB6 bf/s */
L_0C064DBA: BLKS(0x0C064DBAu);
	r6 = r11;  /* 0C064DBA mov Rm,Rn */
	UPD(0x0C064DBCu, 1);
L_0C064DBC: BLKS(0x0C064DBCu);
	r6 += 0x1u;  /* 0C064DBC add #imm,Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C064DBE exts.w Rm,Rn */
	r8 = 0xFu;  /* 0C064DC0 mov #imm,Rn */
	r9 += 0x34u;  /* 0C064DC2 add #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C064DC4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064DA8u, 8); goto L_0C064DA8; } goto L_0C064DCA; }  /* 0C064DC6 bf/s */
L_0C064DCA: BLKS(0x0C064DCAu);
	r11 = r7;  /* 0C064DCA mov Rm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C064DCEu, 3);  /* 0C064DCC mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C064DCE add #imm,Rn */
	r3 = 0x340u; UPD(0x0C064DD2u, 2);  /* 0C064DD0 mov.w @(disp,pc),Rn */
	r9 = 0x2u;  /* 0C064DD2 mov #imm,Rn */
	r7 += r3;  /* 0C064DD4 add Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C064DD8u, 3);  /* 0C064DD6 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)r11;  /* 0C064DD8 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r9;  /* 0C064DDA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064D9Cu, 5); goto L_0C064D9C; } UPD(0x0C064DE0u, 1); goto L_0C064DE0; }  /* 0C064DDC bf/s */
L_0C064DE0: BLKS(0x0C064DE0u);
	r4 = R32(r14); UPD(0x0C064DE2u, 1);  /* 0C064DE0 mov.l @Rm,Rn */
	r10 = 0x1u;  /* 0C064DE2 mov #imm,Rn */
	r4 += 0x1u;  /* 0C064DE4 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C064DE6 exts.w Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C064DEAu, 4);  /* 0C064DE8 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C064DECu, 1);  /* 0C064DEA mov.l @(disp,Rm),Rn */
	r5 = 0x9C0u; UPD(0x0C064DEEu, 1);  /* 0C064DEC mov.w @(disp,pc),Rn */
	r1 += r3;  /* 0C064DEE add Rm,Rn */
	W32(r14, r13); UPD(0x0C064DF2u, 2);  /* 0C064DF0 mov.l Rm,@Rn */
	r0 += r5;  /* 0C064DF2 add Rm,Rn */
	r12 = R32(r14); UPD(0x0C064DF6u, 2);  /* 0C064DF4 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C064DF8u, 1);  /* 0C064DF6 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 > (s32)r10;  /* 0C064DF8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C064D5Cu, 4); goto L_0C064D5C; } UPD(0x0C064DFEu, 1); goto L_0C064DFE; }  /* 0C064DFA bf/s */
L_0C064DFE: BLKS(0x0C064DFEu);
	r14 += 0x18u;  /* 0C064DFE add #imm,Rn */
	r15 = r14;  /* 0C064E00 mov Rm,Rn */
	IF(0x0C064E02u); PR = R32(r15); r15 += 4; UPD(0x0C064E04u, 3);  /* 0C064E02 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064E06u, 1);  /* 0C064E04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C064E08u, 1);  /* 0C064E06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064E0Au, 1);  /* 0C064E08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064E0Cu, 1);  /* 0C064E0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064E0Eu, 1);  /* 0C064E0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064E10u, 1);  /* 0C064E0E mov.l @Rm+,Rn */
	IF(0x0C064E10u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C064E10 rts */
L_0C064E20: BLKS(0x0C064E20u);
	r5 = r7;  /* 0C064E20 mov Rm,Rn */
	r4 = 0xC275DD2u; UPD(0x0C064E24u, 2);  /* 0C064E22 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C064E24 mov Rm,Rn */
	r4 += r1;  /* 0C064E26 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C064E2Au, 3);  /* 0C064E28 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C064E2A add #imm,Rn */
	W16(r4, r0); UPD(0x0C064E2Eu, 2);  /* 0C064E2C mov.w Rm,@Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C064E30u, 1);  /* 0C064E2E mov.l @(disp,Rm),Rn */
	r0 = 0xC16D204u; UPD(0x0C064E32u, 1);  /* 0C064E30 mov.l @(disp,pc),Rn */
	IF(0x0C064E32u); r2 <<= 2;  /* 0C064E32 shll2 Rn */
	IF(0x0C064E34u); r3 = R32(r0 + r2); UPD(0x0C064E36u, 2);  /* 0C064E34 mov.l @(r0,Rm),Rn */
	r4 = R32(r14); UPD(0x0C064E38u, 1);  /* 0C064E36 mov.l @Rm,Rn */
	IF(0x0C064E38u); { u32 t_ = r3; PR = 0x0C064E3Cu; W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C064E3Cu); }  /* 0C064E38 jsr @Rn */
L_0C064E3C: BLKS(0x0C064E3Cu);
	r4 = R32(r9 + 0x10u); UPD(0x0C064E3Eu, 1);  /* 0C064E3C mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x14u); UPD(0x0C064E40u, 1);  /* 0C064E3E mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C064E42u, 1);  /* 0C064E40 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x1Cu); UPD(0x0C064E44u, 1);  /* 0C064E42 mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C064E44 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C064E48u, 2);  /* 0C064E46 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C064E48 add Rm,Rn */
	r2 += r4;  /* 0C064E4A add Rm,Rn */
	W32(r9 + 0x10u, r4); UPD(0x0C064E4Eu, 3);  /* 0C064E4C mov.l Rm,@(disp,Rn) */
	IF(0x0C064E4Eu); T = (s32)r2 >= 0;  /* 0C064E4E cmp/pz Rn */
	W32(r9 + 0x14u, r0); UPD(0x0C064E52u, 2);  /* 0C064E50 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; r7 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064E90u, 3); goto L_0C064E90; } UPD(0x0C064E56u, 1); goto L_0C064E56; }  /* 0C064E52 bf/s */
L_0C064E56: BLKS(0x0C064E56u);
	r5 = 0xB00000u; UPD(0x0C064E58u, 1);  /* 0C064E56 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C064E58 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064E60u, 4); goto L_0C064E60; } goto L_0C064E5E; }  /* 0C064E5A bf/s */
L_0C064E5E: BLKS(0x0C064E5Eu);
	W32(r8, r6); UPD(0x0C064E60u, 2);  /* 0C064E5E mov.l Rm,@Rn */
L_0C064E60: BLKS(0x0C064E60u);
	r0 = 0xC3929E0u; UPD(0x0C064E62u, 1);  /* 0C064E60 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x14u); UPD(0x0C064E64u, 1);  /* 0C064E62 mov.l @(disp,Rm),Rn */
	r4 = R32(r0); UPD(0x0C064E66u, 1);  /* 0C064E64 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C064E68u, 1);  /* 0C064E66 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C064E68 sub Rm,Rn */
	r2 += r3;  /* 0C064E6A add Rm,Rn */
	IF(0x0C064E6Cu); T = (s32)r2 >= 0;  /* 0C064E6C cmp/pz Rn */
	if (!T) { UPD(0x0C064E80u, 6); goto L_0C064E80; }  /* 0C064E6E bf */
L_0C064E70: BLKS(0x0C064E70u);
	r5 = 0x880000u; UPD(0x0C064E72u, 1);  /* 0C064E70 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C064E72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064DBCu, 4); goto L_0C064DBC; } goto L_0C064E78; }  /* 0C064E74 bf/s */
L_0C064E78: BLKS(0x0C064E78u);
	r2 = 0x0u;  /* 0C064E78 mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C064DBAu, 5); goto L_0C064DBA; }  /* 0C064E7A bra */
L_0C064E80: BLKS(0x0C064E80u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C064E70u, 3); goto L_0C064E70; }  /* 0C064E80 bra */
L_0C064E90: BLKS(0x0C064E90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C064E56u, 3); goto L_0C064E56; }  /* 0C064E90 bra */
L_0C064EA0: BLKS(0x0C064EA0u);
	r5 = r11;  /* 0C064EA0 mov Rm,Rn */
	r3 = 0xC16D1F8u; UPD(0x0C064EA4u, 2);  /* 0C064EA2 mov.l @(disp,pc),Rn */
	IF(0x0C064EA4u); r0 <<= 2;  /* 0C064EA4 shll2 Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C064EA8u, 2);  /* 0C064EA6 mov.w @Rm,Rn */
	IF(0x0C064EA8u); r13 = R32(r0 + r3); UPD(0x0C064EAAu, 1);  /* 0C064EA8 mov.l @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C064EAA add #imm,Rn */
	W16(r9, r2); UPD(0x0C064EAEu, 2);  /* 0C064EAC mov.w Rm,@Rn */
	IF(0x0C064EAEu); { u32 t_ = r13; PR = 0x0C064EB2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C064EB2u); }  /* 0C064EAE jsr @Rn */
L_0C064EB2: BLKS(0x0C064EB2u);
	r6 = R32(r8 + 0x10u); UPD(0x0C064EB4u, 1);  /* 0C064EB2 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C064EB6u, 1);  /* 0C064EB4 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x18u); UPD(0x0C064EB8u, 1);  /* 0C064EB6 mov.l @(disp,Rm),Rn */
	r10 = R32(r8 + 0x1Cu); UPD(0x0C064EBAu, 1);  /* 0C064EB8 mov.l @(disp,Rm),Rn */
	r6 += r12;  /* 0C064EBA add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C064EBEu, 2);  /* 0C064EBC mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C064EBE add Rm,Rn */
	r2 += r6;  /* 0C064EC0 add Rm,Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C064EC4u, 3);  /* 0C064EC2 mov.l Rm,@(disp,Rn) */
	IF(0x0C064EC4u); T = (s32)r2 >= 0;  /* 0C064EC4 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C064F10u, 4); goto L_0C064F10; } UPD(0x0C064ECAu, 1); goto L_0C064ECA; }  /* 0C064EC6 bf/s */
L_0C064ECA: BLKS(0x0C064ECAu);
	r4 = 0xB00000u; UPD(0x0C064ECCu, 1);  /* 0C064ECA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C064ECC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064ED4u, 4); goto L_0C064ED4; } goto L_0C064ED2; }  /* 0C064ECE bf/s */
L_0C064ED2: BLKS(0x0C064ED2u);
	W32(r8, r0); UPD(0x0C064ED4u, 2);  /* 0C064ED2 mov.l Rm,@Rn */
L_0C064ED4: BLKS(0x0C064ED4u);
	r7 = 0xC3929E0u; UPD(0x0C064ED6u, 1);  /* 0C064ED4 mov.l @(disp,pc),Rn */
	r2 = R32(r8 + 0x14u); UPD(0x0C064ED8u, 1);  /* 0C064ED6 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C064EDAu, 1);  /* 0C064ED8 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C064EDCu, 1);  /* 0C064EDA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C064EDC sub Rm,Rn */
	r2 += r5;  /* 0C064EDE add Rm,Rn */
	IF(0x0C064EE0u); T = (s32)r2 >= 0;  /* 0C064EE0 cmp/pz Rn */
	if (!T) { UPD(0x0C064F00u, 6); goto L_0C064F00; }  /* 0C064EE2 bf */
L_0C064EE4: BLKS(0x0C064EE4u);
	r10 = 0x880000u; UPD(0x0C064EE6u, 1);  /* 0C064EE4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C064EE6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C064EEEu, 4); goto L_0C064EEE; } goto L_0C064EEC; }  /* 0C064EE8 bf/s */
L_0C064EEC: BLKS(0x0C064EECu);
	W32(r8, r12); UPD(0x0C064EEEu, 2);  /* 0C064EEC mov.l Rm,@Rn */
L_0C064EEE: BLKS(0x0C064EEEu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C064D88u, 3); goto L_0C064D88; }  /* 0C064EEE bra */
L_0C064F00: BLKS(0x0C064F00u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C064EE4u, 3); goto L_0C064EE4; }  /* 0C064F00 bra */
L_0C064F10: BLKS(0x0C064F10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C064ECAu, 3); goto L_0C064ECA; }  /* 0C064F10 bra */
}

/* FUN_0c064f50 */
void f_0C064F50(sh3_t *c)
{
	LOCALS;
L_0C064F50: BLKS(0x0C064F50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064F52u, 1);  /* 0C064F50 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C064F52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064F56u, 2);  /* 0C064F54 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C064F58u, 1);  /* 0C064F56 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C064F5Au, 1);  /* 0C064F58 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C064F5Cu, 1);  /* 0C064F5A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C064F5Eu, 1);  /* 0C064F5C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C064F5E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064F62u, 2);  /* 0C064F60 mov.l Rm,@-Rn */
	IF(0x0C064F62u); r15 -= 4; W32(r15, PR); UPD(0x0C064F64u, 1);  /* 0C064F62 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C064F64 add #imm,Rn */
	r14 = r15;  /* 0C064F66 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C064F6Au, 3);  /* 0C064F68 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C064F6Cu, 1);  /* 0C064F6A mov.l Rm,@(disp,Rn) */
L_0C064F6C: BLKS(0x0C064F6Cu);
	r13 = 0x0u;  /* 0C064F6C mov #imm,Rn */
	r11 = 0x0u;  /* 0C064F6E mov #imm,Rn */
	UPD(0x0C064F70u, 2);
L_0C064F70: BLKS(0x0C064F70u);
	r8 = r12;  /* 0C064F70 mov Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C064F74u, 2);  /* 0C064F72 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C064F74 add Rm,Rn */
	r10 = 0x0u;  /* 0C064F76 mov #imm,Rn */
	r9 = 0x0u;  /* 0C064F78 mov #imm,Rn */
	r8 += r0;  /* 0C064F7A add Rm,Rn */
	UPD(0x0C064F7Cu, 4);
L_0C064F7C: BLKS(0x0C064F7Cu);
	r3 = r12;  /* 0C064F7C mov Rm,Rn */
	r3 += r11;  /* 0C064F7E add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C064F82u, 3);  /* 0C064F80 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C064F82 add Rm,Rn */
	IF(0x0C064F84u); r2 = R32(r0 + r3); UPD(0x0C064F86u, 2);  /* 0C064F84 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C064F86 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065050u, 4); goto L_0C065050; } UPD(0x0C064F8Cu, 1); goto L_0C064F8C; }  /* 0C064F88 bf/s */
L_0C064F8C: BLKS(0x0C064F8Cu);
	r3 = r10;  /* 0C064F8C mov Rm,Rn */
	r3 += 0x1u;  /* 0C064F8E add #imm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C064F90 exts.w Rm,Rn */
	r7 = 0xFu;  /* 0C064F92 mov #imm,Rn */
	r8 += 0x34u;  /* 0C064F94 add #imm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C064F96 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064F7Cu, 9); goto L_0C064F7C; } goto L_0C064F9C; }  /* 0C064F98 bf/s */
L_0C064F9C: BLKS(0x0C064F9Cu);
	r9 = r13;  /* 0C064F9C mov Rm,Rn */
	r9 += 0x1u;  /* 0C064F9E add #imm,Rn */
	r10 = 0x340u; UPD(0x0C064FA2u, 4);  /* 0C064FA0 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C064FA2 exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C064FA4 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C064FA6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r10; /* slot add Rm,Rn */ if (c_) { UPD(0x0C064F70u, 6); goto L_0C064F70; } goto L_0C064FAC; }  /* 0C064FA8 bf/s */
L_0C064FAC: BLKS(0x0C064FACu);
	r9 = 0xC285318u; UPD(0x0C064FAEu, 2);  /* 0C064FAC mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C064FAE mov #imm,Rn */
	r13 = 0xC16BEACu; UPD(0x0C064FB2u, 2);  /* 0C064FB0 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C064FB2 mov #imm,Rn */
	r11 = 0xC393044u; UPD(0x0C064FB6u, 2);  /* 0C064FB4 mov.l @(disp,pc),Rn */
	IF(0x0C064FB6u); ;  /* 0C064FB6 nop */
	UPD(0x0C064FB8u, 1);
L_0C064FB8: BLKS(0x0C064FB8u);
	r3 = R32(r14 + 0x4u); UPD(0x0C064FBAu, 1);  /* 0C064FB8 mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C064FBA add Rm,Rn */
	r3 += r9;  /* 0C064FBC add Rm,Rn */
	r0 = R32(r3); UPD(0x0C064FC0u, 3);  /* 0C064FBE mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C064FC2u, 1);  /* 0C064FC0 mov.l @(disp,pc),Rn */
	T = (r0 & r4) == 0;  /* 0C064FC2 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065010u, 4); goto L_0C065010; } UPD(0x0C064FC8u, 1); goto L_0C064FC8; }  /* 0C064FC4 bf/s */
L_0C064FC8: BLKS(0x0C064FC8u);
	r4 = r10;  /* 0C064FC8 mov Rm,Rn */
	r4 += 0x1u;  /* 0C064FCA add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C064FCC exts.w Rm,Rn */
	r3 = 0xFu;  /* 0C064FCE mov #imm,Rn */
	T = (s32)r10 > (s32)r3;  /* 0C064FD0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064FB8u, 8); goto L_0C064FB8; } goto L_0C064FD6; }  /* 0C064FD2 bf/s */
L_0C064FD6: BLKS(0x0C064FD6u);
	r8 = R32(r14); UPD(0x0C064FD8u, 2);  /* 0C064FD6 mov.l @Rm,Rn */
	r11 = 0x1u;  /* 0C064FD8 mov #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C064FDCu, 2);  /* 0C064FDA mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C064FDC add #imm,Rn */
	r5 = 0x340u; UPD(0x0C064FE0u, 2);  /* 0C064FDE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C064FE0 exts.w Rm,Rn */
	r10 += r5;  /* 0C064FE2 add Rm,Rn */
	r9 = 0x9C0u; UPD(0x0C064FE6u, 3);  /* 0C064FE4 mov.w @(disp,pc),Rn */
	T = (s32)r13 > (s32)r11;  /* 0C064FE6 cmp/gt Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C064FEAu, 2);  /* 0C064FE8 mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C064FEA add Rm,Rn */
	{ u32 c_ = !T; W32(r14, r13); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C064F6Cu, 4); goto L_0C064F6C; } UPD(0x0C064FF0u, 1); goto L_0C064FF0; }  /* 0C064FEC bf/s */
L_0C064FF0: BLKS(0x0C064FF0u);
	r14 += 0x8u;  /* 0C064FF0 add #imm,Rn */
	r15 = r14;  /* 0C064FF2 mov Rm,Rn */
	IF(0x0C064FF4u); PR = R32(r15); r15 += 4; UPD(0x0C064FF6u, 3);  /* 0C064FF4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064FF8u, 1);  /* 0C064FF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C064FFAu, 1);  /* 0C064FF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064FFCu, 1);  /* 0C064FFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064FFEu, 1);  /* 0C064FFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065000u, 1);  /* 0C064FFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065002u, 1);  /* 0C065000 mov.l @Rm+,Rn */
	IF(0x0C065002u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065002 rts */
L_0C065010: BLKS(0x0C065010u);
	r7 = R32(r3 + 0x4u); UPD(0x0C065012u, 1);  /* 0C065010 mov.l @(disp,Rm),Rn */
	IF(0x0C065012u); ARG0(0x471Du); { s32 s_ = (s32)r1; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C065012 shld Rm,Rn */
	r7 += r13;  /* 0C065014 add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C065018u, 3);  /* 0C065016 mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C065018 mov #imm,Rn */
	W32(r11, r0); UPD(0x0C06501Cu, 2);  /* 0C06501A mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C06501C mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C065020u, 2);  /* 0C06501E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C065020 add #imm,Rn */
	r6 = R32(r7); UPD(0x0C065024u, 2);  /* 0C065022 mov.l @Rm,Rn */
	IF(0x0C065024u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C065024 shld Rm,Rn */
	IF(0x0C065026u); r4 = R32(r0 + r6); UPD(0x0C065028u, 2);  /* 0C065026 mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C06502Au, 1);  /* 0C065028 mov.l @(disp,Rm),Rn */
	IF(0x0C06502Au); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06502A shld Rm,Rn */
	r6 = 0xC2175E8u; UPD(0x0C06502Eu, 2);  /* 0C06502C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06502E mov #imm,Rn */
	IF(0x0C065030u); r7 = R32(r0 + r4); UPD(0x0C065032u, 2);  /* 0C065030 mov.l @(r0,Rm),Rn */
	W32(r6, r7); UPD(0x0C065034u, 1);  /* 0C065032 mov.l Rm,@Rn */
	r2 = 0xC062A70u; UPD(0x0C065036u, 1);  /* 0C065034 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C065038u, 1);  /* 0C065036 mov.l Rm,@Rn */
	r4 = R32(r3 + 0x24u); UPD(0x0C06503Au, 1);  /* 0C065038 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C06503Cu, 1);  /* 0C06503A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C06503Eu, 1);  /* 0C06503C mov.l @(disp,Rm),Rn */
	IF(0x0C06503Eu); { u32 t_ = r2; PR = 0x0C065042u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C065042u); }  /* 0C06503E jsr @Rn */
L_0C065042: BLKS(0x0C065042u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C064FC8u, 3); goto L_0C064FC8; }  /* 0C065042 bra */
L_0C065050: BLKS(0x0C065050u);
	r5 = R32(r8 + 0x4u); UPD(0x0C065052u, 1);  /* 0C065050 mov.l @(disp,Rm),Rn */
	IF(0x0C065052u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C065052 shld Rm,Rn */
	r6 = 0xC16BEACu; UPD(0x0C065056u, 2);  /* 0C065054 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C065056 mov #imm,Rn */
	r5 += r6;  /* 0C065058 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C06505Cu, 3);  /* 0C06505A mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C06505C mov #imm,Rn */
	r4 = 0xC393044u; UPD(0x0C065060u, 2);  /* 0C06505E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C065060 add #imm,Rn */
	W32(r4, r0); UPD(0x0C065064u, 2);  /* 0C065062 mov.l Rm,@Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C065066u, 1);  /* 0C065064 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C065066 mov #imm,Rn */
	r3 = R32(r5); UPD(0x0C06506Au, 2);  /* 0C065068 mov.l @Rm,Rn */
	IF(0x0C06506Au); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06506A shld Rm,Rn */
	IF(0x0C06506Cu); r1 = R32(r0 + r3); UPD(0x0C06506Eu, 2);  /* 0C06506C mov.l @(r0,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C065070u, 1);  /* 0C06506E mov.l @(disp,Rm),Rn */
	IF(0x0C065070u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C065070 shld Rm,Rn */
	r5 = 0xC2175E8u; UPD(0x0C065074u, 2);  /* 0C065072 mov.l @(disp,pc),Rn */
	IF(0x0C065074u); r6 = R32(r0 + r1); UPD(0x0C065076u, 1);  /* 0C065074 mov.l @(r0,Rm),Rn */
	W32(r5, r6); UPD(0x0C065078u, 1);  /* 0C065076 mov.l Rm,@Rn */
	r0 = 0xC062A70u; UPD(0x0C06507Au, 1);  /* 0C065078 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C06507Cu, 1);  /* 0C06507A mov.l Rm,@Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06507Eu, 1);  /* 0C06507C mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C065080u, 1);  /* 0C06507E mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x14u); UPD(0x0C065082u, 1);  /* 0C065080 mov.l @(disp,Rm),Rn */
	IF(0x0C065082u); { u32 t_ = r0; PR = 0x0C065086u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C065086u); }  /* 0C065082 jsr @Rn */
L_0C065086: BLKS(0x0C065086u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C064F8Cu, 3); goto L_0C064F8C; }  /* 0C065086 bra */
}

void f_0C0650B0(sh3_t *c)
{
	LOCALS;
L_0C0650B0: BLKS(0x0C0650B0u);
	r3 = 0x340u; UPD(0x0C0650B2u, 1);  /* 0C0650B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0650B2 exts.w Rm,Rn */
	IF(0x0C0650B4u); MACL = r1 * r3;  /* 0C0650B4 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0650B6 exts.w Rm,Rn */
	r6 = 0x34u;  /* 0C0650B8 mov #imm,Rn */
	IF(0x0C0650BAu); r3 = MACL;  /* 0C0650BA sts macl,Rn */
	IF(0x0C0650BCu); MACL = r7 * r6;  /* 0C0650BC mul.l Rm,Rn */
	r0 = 0xC285318u; UPD(0x0C0650C0u, 9);  /* 0C0650BE mov.l @(disp,pc),Rn */
	IF(0x0C0650C0u); r4 = MACL;  /* 0C0650C0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0650C4u, 2);  /* 0C0650C2 mov.l Rm,@-Rn */
	r3 += r4;  /* 0C0650C4 add Rm,Rn */
	r3 += r0;  /* 0C0650C6 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0650CAu, 3);  /* 0C0650C8 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C0650CA mov #imm,Rn */
	r2 += 0xFFFFFFF6u;  /* 0C0650CC add #imm,Rn */
	T = r2 > r0;  /* 0C0650CE cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065110u, 6); goto L_0C065110; } goto L_0C0650D4; }  /* 0C0650D0 bt/s */
L_0C0650D4: BLKS(0x0C0650D4u);
	r2 = r3;  /* 0C0650D4 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0650D6 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0650DAu, 4);  /* 0C0650D8 mov.b @Rm,Rn */
	r1 = 0x1u;  /* 0C0650DA mov #imm,Rn */
	r5 += 0x1u;  /* 0C0650DC add #imm,Rn */
	r1 &= r5;  /* 0C0650DE and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0650E0 tst Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0650F0u, 7); goto L_0C0650F0; } UPD(0x0C0650E6u, 1); goto L_0C0650E6; }  /* 0C0650E2 bf/s */
L_0C0650E6: BLKS(0x0C0650E6u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0650E8u, 1);  /* 0C0650E6 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0650E8 add #imm,Rn */
	T = r0 == 0x8u;  /* 0C0650EA cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C065100u, 5); goto L_0C065100; } UPD(0x0C0650F0u, 1); goto L_0C0650F0; }  /* 0C0650EC bt/s */
L_0C0650F0: BLKS(0x0C0650F0u);
	r15 = r14;  /* 0C0650F0 mov Rm,Rn */
	IF(0x0C0650F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0650F2 rts */
L_0C065100: BLKS(0x0C065100u);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0650F0u, 3); goto L_0C0650F0; }  /* 0C065100 bra */
L_0C065110: BLKS(0x0C065110u);
	r2 = R32(r3 + 0xCu); UPD(0x0C065112u, 1);  /* 0C065110 mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C065112 mov #imm,Rn */
	r0 = r2;  /* 0C065114 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C065116 and #imm,r0 */
	T = (s32)r0 > (s32)r4;  /* 0C065118 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0650F0u, 7); goto L_0C0650F0; }  /* 0C06511A bt */
L_0C06511C: BLKS(0x0C06511Cu);
	IF(0x0C06511Cu); r2 <<= 2;  /* 0C06511C shll2 Rn */
	r5 = 0xC16D22Cu; UPD(0x0C065120u, 2);  /* 0C06511E mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C065120 mov Rm,Rn */
	IF(0x0C065122u); r7 = R32(r0 + r5); UPD(0x0C065124u, 2);  /* 0C065122 mov.l @(r0,Rm),Rn */
	r6 = 0x0u;  /* 0C065124 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C065128u, 2);  /* 0C065126 mov.l @(disp,pc),Rn */
	W32(r3 + 0xCu, r7); UPD(0x0C06512Au, 1);  /* 0C065128 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x24u, r6); UPD(0x0C06512Cu, 1);  /* 0C06512A mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0650F0u, 3); goto L_0C0650F0; }  /* 0C06512C bra */
}

/* FUN_0c065140 */
void f_0C065140(sh3_t *c)
{
	LOCALS;
L_0C065140: BLKS(0x0C065140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065142u, 1);  /* 0C065140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065144u, 1);  /* 0C065142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065146u, 1);  /* 0C065144 mov.l Rm,@-Rn */
	r9 = 0x34u;  /* 0C065146 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06514Au, 2);  /* 0C065148 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C06514A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06514Eu, 2);  /* 0C06514C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06514E exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065152u, 2);  /* 0C065150 mov.l Rm,@-Rn */
	r12 = 0x9C0u; UPD(0x0C065154u, 1);  /* 0C065152 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065156u, 1);  /* 0C065154 mov.l Rm,@-Rn */
	IF(0x0C065156u); MACL = r11 * r12;  /* 0C065156 mul.l Rm,Rn */
	IF(0x0C065158u); r15 -= 4; W32(r15, PR); UPD(0x0C06515Au, 3);  /* 0C065158 sts.l pr,@-Rn */
	IF(0x0C06515Au); r12 = MACL;  /* 0C06515A sts macl,Rn */
	r15 += 0xFFFFFFE0u;  /* 0C06515C add #imm,Rn */
	r14 = r15;  /* 0C06515E mov Rm,Rn */
	IF(0x0C065160u); MACL = r10 * r9;  /* 0C065160 mul.l Rm,Rn */
	W32(r14, r7); UPD(0x0C065164u, 6);  /* 0C065162 mov.l Rm,@Rn */
	r6 = 0x340u; UPD(0x0C065166u, 1);  /* 0C065164 mov.w @(disp,pc),Rn */
	IF(0x0C065166u); r8 = MACL;  /* 0C065166 sts macl,Rn */
	IF(0x0C065168u); r9 = MACL;  /* 0C065168 sts macl,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C06516A exts.w Rm,Rn */
	IF(0x0C06516Cu); MACL = r7 * r6;  /* 0C06516C mul.l Rm,Rn */
	r3 = 0xC21F8A0u; UPD(0x0C065170u, 6);  /* 0C06516E mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C065170 add Rm,Rn */
	IF(0x0C065172u); r2 = MACL;  /* 0C065172 sts macl,Rn */
	r9 += r2;  /* 0C065174 add Rm,Rn */
	r9 += r3;  /* 0C065176 add Rm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C06517Au, 5);  /* 0C065178 mov.l Rm,@(disp,Rn) */
	r3 = r9;  /* 0C06517A mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C06517Eu, 2);  /* 0C06517C mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C06517E add #imm,Rn */
	r13 = R32(r9 + 0x20u); UPD(0x0C065182u, 2);  /* 0C065180 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C065184u, 1);  /* 0C065182 mov.b @Rm,Rn */
	r0 = (r13 >> 16) | (r13 << 16);  /* 0C065184 swap.w Rm,Rn */
	r4 += 0x1u;  /* 0C065186 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C065188 exts.w Rm,Rn */
	W8(r3, r4); UPD(0x0C06518Cu, 4);  /* 0C06518A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C06518C extu.b Rm,Rn */
	r0 = 0xC16D3A0u; UPD(0x0C065190u, 2);  /* 0C06518E mov.l @(disp,pc),Rn */
	IF(0x0C065190u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C065192u, 1);  /* 0C065190 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C065192 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0651B0u, 4); goto L_0C0651B0; }  /* 0C065194 bt */
L_0C065196: BLKS(0x0C065196u);
	r14 += 0x20u;  /* 0C065196 add #imm,Rn */
	UPD(0x0C065198u, 1);
L_0C065198: BLKS(0x0C065198u);
	r15 = r14;  /* 0C065198 mov Rm,Rn */
	IF(0x0C06519Au); PR = R32(r15); r15 += 4; UPD(0x0C06519Cu, 2);  /* 0C06519A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06519Eu, 1);  /* 0C06519C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0651A0u, 1);  /* 0C06519E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0651A2u, 1);  /* 0C0651A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0651A4u, 1);  /* 0C0651A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0651A6u, 1);  /* 0C0651A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0651A8u, 1);  /* 0C0651A6 mov.l @Rm+,Rn */
	IF(0x0C0651A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0651A8 rts */
L_0C0651B0: BLKS(0x0C0651B0u);
	r9 += 0x2Cu;  /* 0C0651B0 add #imm,Rn */
	r7 = 0x100u; UPD(0x0C0651B4u, 2);  /* 0C0651B2 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0651B4 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0651B8u, 2);  /* 0C0651B6 mov.w @Rm,Rn */
	W8(r3, r10); UPD(0x0C0651BAu, 1);  /* 0C0651B8 mov.b Rm,@Rn */
	r4 += r7;  /* 0C0651BA add Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C0651BEu, 2);  /* 0C0651BC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0651BE exts.w Rm,Rn */
	r5 = R32(r14); UPD(0x0C0651C2u, 2);  /* 0C0651C0 mov.l @Rm,Rn */
	r9 += 0xFFFFFFD4u;  /* 0C0651C2 add #imm,Rn */
	r4 = r0;  /* 0C0651C4 mov Rm,Rn */
	IF(0x0C0651C6u); { u32 t_ = r2; PR = 0x0C0651CAu; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0651CAu); }  /* 0C0651C6 jsr @Rn */
L_0C0651CA: BLKS(0x0C0651CAu);
	r5 = R32(r9 + 0x10u); UPD(0x0C0651CCu, 1);  /* 0C0651CA mov.l @(disp,Rm),Rn */
	r6 = 0xC058030u; UPD(0x0C0651CEu, 1);  /* 0C0651CC mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C0651CE add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0651D2u, 2);  /* 0C0651D0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C0651D4u, 1);  /* 0C0651D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0651D4u); { u32 t_ = r6; PR = 0x0C0651D8u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0651D8u); }  /* 0C0651D4 jsr @Rn */
L_0C0651D8: BLKS(0x0C0651D8u);
	r3 = 0xC0AFE40u; UPD(0x0C0651DAu, 1);  /* 0C0651D8 mov.l @(disp,pc),Rn */
	r1 = R32(r9 + 0x14u); UPD(0x0C0651DCu, 1);  /* 0C0651DA mov.l @(disp,Rm),Rn */
	r1 += r0;  /* 0C0651DC add Rm,Rn */
	IF(0x0C0651DEu); { u32 t_ = r3; PR = 0x0C0651E2u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0651E2u); }  /* 0C0651DE jsr @Rn */
L_0C0651E2: BLKS(0x0C0651E2u);
	r10 = R32(r14 + 0x4u); UPD(0x0C0651E4u, 1);  /* 0C0651E2 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C0651E4 and #imm,r0 */
	r0 += r10;  /* 0C0651E6 add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C0651E8 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0651EA exts.w Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0651EEu, 5);  /* 0C0651EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0651EE add #imm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0651F2u, 2);  /* 0C0651F0 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0651F2 mov #imm,Rn */
	r1 = 0xC058060u; UPD(0x0C0651F6u, 2);  /* 0C0651F4 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C0651F6 mov #imm,Rn */
	r0 = r13;  /* 0C0651F8 mov Rm,Rn */
	r12 += r7;  /* 0C0651FA add Rm,Rn */
	r6 = 0xC21F8A0u; UPD(0x0C0651FEu, 4);  /* 0C0651FC mov.l @(disp,pc),Rn */
	IF(0x0C0651FEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0651FE shar Rn */
	W32(r15, r4); UPD(0x0C065202u, 2);  /* 0C065200 mov.l Rm,@Rn */
	r12 += r2;  /* 0C065202 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C065206u, 2);  /* 0C065204 mov.l Rm,@(disp,Rn) */
	IF(0x0C065206u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C065206 shar Rn */
	r12 += r6;  /* 0C065208 add Rm,Rn */
	r4 = r10;  /* 0C06520A mov Rm,Rn */
	r5 = r0;  /* 0C06520C mov Rm,Rn */
	IF(0x0C06520Eu); { u32 t_ = r1; PR = 0x0C065212u; W32(r14 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C065212u); }  /* 0C06520E jsr @Rn */
L_0C065212: BLKS(0x0C065212u);
	r3 = 0xC058030u; UPD(0x0C065214u, 1);  /* 0C065212 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C065214 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C065218u, 2);  /* 0C065216 mov.l Rm,@(disp,Rn) */
	IF(0x0C065218u); { u32 t_ = r3; PR = 0x0C06521Cu; r5 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06521Cu); }  /* 0C065218 jsr @Rn */
L_0C06521C: BLKS(0x0C06521Cu);
	r7 = r11;  /* 0C06521C mov Rm,Rn */
	r10 = 0xC16D394u; UPD(0x0C065220u, 2);  /* 0C06521E mov.l @(disp,pc),Rn */
	IF(0x0C065220u); r7 <<= 2;  /* 0C065220 shll2 Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C065224u, 2);  /* 0C065222 mov.l Rm,@(disp,Rn) */
	r7 += r10;  /* 0C065224 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C065228u, 2);  /* 0C065226 mov.l @Rm,Rn */
	r5 = 0x1u;  /* 0C065228 mov #imm,Rn */
	r2 = 0xC0ACA40u; UPD(0x0C06522Cu, 2);  /* 0C06522A mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C06522C add Rm,Rn */
	W32(r15 + 0x10u, r6); UPD(0x0C065230u, 2);  /* 0C06522E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r7); UPD(0x0C065232u, 1);  /* 0C065230 mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C065234u, 1);  /* 0C065232 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C065236u, 1);  /* 0C065234 mov.l @(disp,Rm),Rn */
	IF(0x0C065236u); { u32 t_ = r2; PR = 0x0C06523Au; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C06523Au); }  /* 0C065236 jsr @Rn */
L_0C06523A: BLKS(0x0C06523Au);
	r3 = 0xC16D39Cu; UPD(0x0C06523Cu, 1);  /* 0C06523A mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C06523C mov Rm,Rn */
	IF(0x0C06523Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C065240u, 2);  /* 0C06523E mov.w @(r0,Rm),Rn */
	r0 = 0x280u; UPD(0x0C065242u, 1);  /* 0C065240 mov.w @(disp,pc),Rn */
	IF(0x0C065242u); MACL = r4 * r0;  /* 0C065242 mul.l Rm,Rn */
	r11 = 0xC283794u; UPD(0x0C065246u, 3);  /* 0C065244 mov.l @(disp,pc),Rn */
	IF(0x0C065246u); r0 = MACL;  /* 0C065246 sts macl,Rn */
	IF(0x0C065248u); r5 = R32(r0 + r11); UPD(0x0C06524Au, 2);  /* 0C065248 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C06524A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C065196u, 4); goto L_0C065196; } goto L_0C065250; }  /* 0C06524C bf/s */
L_0C065250: BLKS(0x0C065250u);
	r0 = 0xC16D3A0u; UPD(0x0C065252u, 2);  /* 0C065250 mov.l @(disp,pc),Rn */
	IF(0x0C065252u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C065254u, 1);  /* 0C065252 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C065254 tst Rm,Rn */
	if (!T) { UPD(0x0C065196u, 4); goto L_0C065196; }  /* 0C065256 bf */
L_0C065258: BLKS(0x0C065258u);
	r3 = r13;  /* 0C065258 mov Rm,Rn */
	IF(0x0C06525Au); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C06525A rotl Rn */
	IF(0x0C06525Cu); r10 = T;  /* 0C06525C movt Rn */
	r10 += r13;  /* 0C06525E add Rm,Rn */
	r0 = R32(r14); UPD(0x0C065262u, 5);  /* 0C065260 mov.l @Rm,Rn */
	IF(0x0C065262u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C065262 shar Rn */
	r13 = 0xC058060u; UPD(0x0C065266u, 2);  /* 0C065264 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C065266 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C06526Au, 2);  /* 0C065268 mov.l @(disp,Rm),Rn */
	IF(0x0C06526Au); { u32 t_ = r13; PR = 0x0C06526Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06526Eu); }  /* 0C06526A jsr @Rn */
L_0C06526E: BLKS(0x0C06526Eu);
	r7 = 0xC058030u; UPD(0x0C065270u, 1);  /* 0C06526E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C065270 mov Rm,Rn */
	r8 = R32(r9 + 0x10u); UPD(0x0C065274u, 2);  /* 0C065272 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C065276u, 1);  /* 0C065274 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C065276 add Rm,Rn */
	IF(0x0C065278u); { u32 t_ = r7; PR = 0x0C06527Cu; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06527Cu); }  /* 0C065278 jsr @Rn */
L_0C06527C: BLKS(0x0C06527Cu);
	r4 = R32(r9 + 0x14u); UPD(0x0C06527Eu, 1);  /* 0C06527C mov.l @(disp,Rm),Rn */
	r5 = 0xC0AFE40u; UPD(0x0C065280u, 1);  /* 0C06527E mov.l @(disp,pc),Rn */
	r2 = r4;  /* 0C065280 mov Rm,Rn */
	r2 += r0;  /* 0C065282 add Rm,Rn */
	IF(0x0C065284u); { u32 t_ = r5; PR = 0x0C065288u; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C065288u); }  /* 0C065284 jsr @Rn */
L_0C065288: BLKS(0x0C065288u);
	r6 = R32(r14 + 0x4u); UPD(0x0C06528Au, 1);  /* 0C065288 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C06528A and #imm,r0 */
	r6 += r0;  /* 0C06528C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06528E add #imm,Rn */
	r6 += 0xFFFFFFF0u;  /* 0C065290 add #imm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C065294u, 5);  /* 0C065292 mov.l Rm,@(disp,Rn) */
	r0 = 0x6u;  /* 0C065294 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C065298u, 2);  /* 0C065296 mov.l Rm,@Rn */
	r1 = 0x14u;  /* 0C065298 mov #imm,Rn */
	r3 = 0xC058060u; UPD(0x0C06529Cu, 2);  /* 0C06529A mov.l @(disp,pc),Rn */
	IF(0x0C06529Cu); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C06529Eu, 1);  /* 0C06529C mov.w @(r0,Rm),Rn */
	r11 = 0xC058030u; UPD(0x0C0652A0u, 1);  /* 0C06529E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0652A0 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C0652A4u, 2);  /* 0C0652A2 mov.l @(disp,Rm),Rn */
	IF(0x0C0652A4u); { u32 t_ = r3; PR = 0x0C0652A8u; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0652A8u); }  /* 0C0652A4 jsr @Rn */
L_0C0652A8: BLKS(0x0C0652A8u);
	r4 = r13;  /* 0C0652A8 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C0652ACu, 2);  /* 0C0652AA mov.l @(disp,Rm),Rn */
	IF(0x0C0652ACu); { u32 t_ = r11; PR = 0x0C0652B0u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0652B0u); }  /* 0C0652AC jsr @Rn */
L_0C0652B0: BLKS(0x0C0652B0u);
	W32(r15 + 0xCu, r0); UPD(0x0C0652B2u, 1);  /* 0C0652B0 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C0652B2 mov #imm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C0652B6u, 2);  /* 0C0652B4 mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0652B8u, 1);  /* 0C0652B6 mov.l @Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C0652BAu, 1);  /* 0C0652B8 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r8); UPD(0x0C0652BCu, 1);  /* 0C0652BA mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x8u); UPD(0x0C0652BEu, 1);  /* 0C0652BC mov.l @(disp,Rm),Rn */
	r4 = R32(r12); UPD(0x0C0652C0u, 1);  /* 0C0652BE mov.l @Rm,Rn */
	IF(0x0C0652C0u); { u32 t_ = r13; PR = 0x0C0652C4u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0652C4u); }  /* 0C0652C0 jsr @Rn */
L_0C0652C4: BLKS(0x0C0652C4u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C065198u, 3); goto L_0C065198; }  /* 0C0652C4 bra */
}

void f_0C065300(sh3_t *c)
{
	LOCALS;
L_0C065300: BLKS(0x0C065300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065302u, 1);  /* 0C065300 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065304u, 1);  /* 0C065302 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065306u, 1);  /* 0C065304 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065308u, 1);  /* 0C065306 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06530Au, 1);  /* 0C065308 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06530A exts.w Rm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C06530C exts.w Rm,Rn */
	r5 = 0x9C0u; UPD(0x0C065310u, 3);  /* 0C06530E mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C065310 mov #imm,Rn */
	IF(0x0C065312u); MACL = r11 * r5;  /* 0C065312 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065316u, 4);  /* 0C065314 mov.l Rm,@-Rn */
	IF(0x0C065316u); r9 = MACL;  /* 0C065316 sts macl,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C065318 exts.w Rm,Rn */
	IF(0x0C06531Au); MACL = r13 * r4;  /* 0C06531A mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C06531Eu, 5);  /* 0C06531C mov.w @(disp,pc),Rn */
	IF(0x0C06531Eu); r3 = MACL;  /* 0C06531E sts macl,Rn */
	IF(0x0C065320u); MACL = r12 * r2;  /* 0C065320 mul.l Rm,Rn */
	r9 += r3;  /* 0C065322 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065326u, 5);  /* 0C065324 mov.l Rm,@-Rn */
	IF(0x0C065326u); r0 = MACL;  /* 0C065326 sts macl,Rn */
	r9 += r0;  /* 0C065328 add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C06532Cu, 3);  /* 0C06532A mov.l @(disp,pc),Rn */
	IF(0x0C06532Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06532Eu, 1);  /* 0C06532C sts.l pr,@-Rn */
	r9 += r0;  /* 0C06532E add Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C065332u, 2);  /* 0C065330 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C065332 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06534Cu, 4); goto L_0C06534C; } goto L_0C065338; }  /* 0C065334 bt/s */
L_0C065338: BLKS(0x0C065338u);
	IF(0x0C065338u); T = (s32)r2 >= 0;  /* 0C065338 cmp/pz Rn */
	{ u32 c_ = !T; r6 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0653A0u, 5); goto L_0C0653A0; } goto L_0C06533E; }  /* 0C06533A bf/s */
L_0C06533E: BLKS(0x0C06533Eu);
	T = (s32)r2 > (s32)r6;  /* 0C06533E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0653A0u, 5); goto L_0C0653A0; }  /* 0C065340 bt */
L_0C065342: BLKS(0x0C065342u);
	r8 = 0x0u;  /* 0C065342 mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C065346u, 2);  /* 0C065344 mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r8); UPD(0x0C065348u, 1);  /* 0C065346 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r8); UPD(0x0C06534Au, 1);  /* 0C065348 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r7); UPD(0x0C06534Cu, 1);  /* 0C06534A mov.l Rm,@(disp,Rn) */
L_0C06534C: BLKS(0x0C06534Cu);
	r10 = R32(r9 + 0x20u); UPD(0x0C06534Eu, 1);  /* 0C06534C mov.l @(disp,Rm),Rn */
	r0 = 0x7FFFFu; UPD(0x0C065350u, 1);  /* 0C06534E mov.l @(disp,pc),Rn */
	T = (s32)r10 > (s32)r0;  /* 0C065350 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06535Cu, 4); goto L_0C06535C; }  /* 0C065352 bt */
L_0C065354: BLKS(0x0C065354u);
	r2 = 0x4000u; UPD(0x0C065356u, 1);  /* 0C065354 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C065356 add Rm,Rn */
	W32(r9 + 0x20u, r2); UPD(0x0C06535Au, 2);  /* 0C065358 mov.l Rm,@(disp,Rn) */
	r10 = r2;  /* 0C06535A mov Rm,Rn */
	UPD(0x0C06535Cu, 1);
L_0C06535C: BLKS(0x0C06535Cu);
	r9 += 0x2Cu;  /* 0C06535C add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C065360u, 2);  /* 0C06535E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C065360 mov Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C065364u, 2);  /* 0C065362 mov.w @Rm,Rn */
	IF(0x0C065364u); { u32 t_ = r0; PR = 0x0C065368u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C065368u); }  /* 0C065364 jsr @Rn */
L_0C065368: BLKS(0x0C065368u);
	r4 = r8;  /* 0C065368 mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06536Cu, 2);  /* 0C06536A mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C06536C add #imm,Rn */
	r5 = r10;  /* 0C06536E mov Rm,Rn */
	IF(0x0C065370u); { u32 t_ = r8; PR = 0x0C065374u; W32(r9 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C065374u); }  /* 0C065370 jsr @Rn */
L_0C065374: BLKS(0x0C065374u);
	r10 = R32(r9 + 0x20u); UPD(0x0C065376u, 1);  /* 0C065374 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C065376 mov Rm,Rn */
	r7 = 0xC0000u; UPD(0x0C06537Au, 2);  /* 0C065378 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C06537A mov Rm,Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C06537Eu, 2);  /* 0C06537C mov.l Rm,@(disp,Rn) */
	r7 -= r10;  /* 0C06537E sub Rm,Rn */
	r3 = 0xC065140u; UPD(0x0C065382u, 2);  /* 0C065380 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C065382 mov Rm,Rn */
	r15 = r14;  /* 0C065384 mov Rm,Rn */
	IF(0x0C065386u); PR = R32(r15); r15 += 4; UPD(0x0C065388u, 3);  /* 0C065386 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06538Au, 1);  /* 0C065388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06538Cu, 1);  /* 0C06538A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06538Eu, 1);  /* 0C06538C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065390u, 1);  /* 0C06538E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065392u, 1);  /* 0C065390 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065394u, 1);  /* 0C065392 mov.l @Rm+,Rn */
	IF(0x0C065394u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C065140u: TAIL(f_0C065140); default: JUMPD(tv_); } }  /* 0C065394 jmp @Rn */
L_0C0653A0: BLKS(0x0C0653A0u);
	r15 = r14;  /* 0C0653A0 mov Rm,Rn */
	IF(0x0C0653A2u); PR = R32(r15); r15 += 4; UPD(0x0C0653A4u, 2);  /* 0C0653A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0653A6u, 1);  /* 0C0653A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0653A8u, 1);  /* 0C0653A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0653AAu, 1);  /* 0C0653A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0653ACu, 1);  /* 0C0653AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0653AEu, 1);  /* 0C0653AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0653B0u, 1);  /* 0C0653AE mov.l @Rm+,Rn */
	IF(0x0C0653B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0653B0 rts */
}

void f_0C0653E0(sh3_t *c)
{
	LOCALS;
L_0C0653E0: BLKS(0x0C0653E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0653E2u, 1);  /* 0C0653E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0653E4u, 1);  /* 0C0653E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0653E6u, 1);  /* 0C0653E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0653E8u, 1);  /* 0C0653E6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0653E8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0653ECu, 2);  /* 0C0653EA mov.l Rm,@-Rn */
	r6 = 0x34u;  /* 0C0653EC mov #imm,Rn */
	r7 = 0x9C0u; UPD(0x0C0653F0u, 2);  /* 0C0653EE mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0653F0 exts.w Rm,Rn */
	IF(0x0C0653F2u); MACL = r12 * r7;  /* 0C0653F2 mul.l Rm,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0653F4 exts.w Rm,Rn */
	r4 = 0x340u; UPD(0x0C0653F8u, 5);  /* 0C0653F6 mov.w @(disp,pc),Rn */
	IF(0x0C0653F8u); r3 = MACL;  /* 0C0653F8 sts macl,Rn */
	IF(0x0C0653FAu); MACL = r10 * r6;  /* 0C0653FA mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0653FEu, 4);  /* 0C0653FC mov.l Rm,@-Rn */
	IF(0x0C0653FEu); r5 = MACL;  /* 0C0653FE sts macl,Rn */
	IF(0x0C065400u); MACL = r11 * r4;  /* 0C065400 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065404u, 4);  /* 0C065402 mov.l Rm,@-Rn */
	r3 += r5;  /* 0C065404 add Rm,Rn */
	IF(0x0C065406u); r2 = MACL;  /* 0C065406 sts macl,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C06540Au, 3);  /* 0C065408 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C06540A add Rm,Rn */
	IF(0x0C06540Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06540Eu, 2);  /* 0C06540C sts.l pr,@-Rn */
	r0 += r3;  /* 0C06540E add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C065412u, 2);  /* 0C065410 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C065412 add #imm,Rn */
	r0 = 0x5u;  /* 0C065414 mov #imm,Rn */
	T = r2 > r0;  /* 0C065416 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065420u, 6); goto L_0C065420; } goto L_0C06541C; }  /* 0C065418 bf/s */
L_0C06541C: BLKS(0x0C06541Cu);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C065558u, 4); goto L_0C065558; }  /* 0C06541C bra */
L_0C065420: BLKS(0x0C065420u);
	r0 = 0xC065434u;  /* 0C065420 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C065422 add Rm,Rn */
	IF(0x0C065424u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C065426u, 3);  /* 0C065424 mov.w @(r0,Rm),Rn */
	IF(0x0C065426u); { u32 tv_ = (r8 + 0x0C06542Au); u32 t_ = PHYS(tv_); IF(0x0C065428u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C065440u: goto L_0C065440; case 0x0C065464u: goto L_0C065464; case 0x0C0655B0u: goto L_0C0655B0; default: JUMPD(tv_); } }  /* 0C065426 braf Rn */
L_0C065440: BLKS(0x0C065440u);
	r7 = 0x9C0u; UPD(0x0C065442u, 1);  /* 0C065440 mov.w @(disp,pc),Rn */
	r6 = 0x34u;  /* 0C065442 mov #imm,Rn */
	IF(0x0C065444u); MACL = r12 * r7;  /* 0C065444 mul.l Rm,Rn */
	r4 = 0x340u; UPD(0x0C065448u, 4);  /* 0C065446 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C065448 mov #imm,Rn */
	IF(0x0C06544Au); r9 = MACL;  /* 0C06544A sts macl,Rn */
	IF(0x0C06544Cu); MACL = r10 * r6;  /* 0C06544C mul.l Rm,Rn */
	r3 = 0xC21F8A0u; UPD(0x0C065450u, 5);  /* 0C06544E mov.l @(disp,pc),Rn */
	IF(0x0C065450u); r5 = MACL;  /* 0C065450 sts macl,Rn */
	IF(0x0C065452u); MACL = r11 * r4;  /* 0C065452 mul.l Rm,Rn */
	r9 += r5;  /* 0C065454 add Rm,Rn */
	r13 = 0x808080u; UPD(0x0C065458u, 5);  /* 0C065456 mov.l @(disp,pc),Rn */
	IF(0x0C065458u); r2 = MACL;  /* 0C065458 sts macl,Rn */
	r9 += r2;  /* 0C06545A add Rm,Rn */
	r9 += r3;  /* 0C06545C add Rm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C065460u, 4);  /* 0C06545E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r0); UPD(0x0C065462u, 1);  /* 0C065460 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r13); UPD(0x0C065464u, 1);  /* 0C065462 mov.l Rm,@(disp,Rn) */
L_0C065464: BLKS(0x0C065464u);
	r7 = 0x9C0u; UPD(0x0C065466u, 1);  /* 0C065464 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C065466 mov #imm,Rn */
	IF(0x0C065468u); MACL = r12 * r7;  /* 0C065468 mul.l Rm,Rn */
	r9 = 0x340u; UPD(0x0C06546Cu, 4);  /* 0C06546A mov.w @(disp,pc),Rn */
	IF(0x0C06546Cu); r6 = MACL;  /* 0C06546C sts macl,Rn */
	IF(0x0C06546Eu); MACL = r10 * r8;  /* 0C06546E mul.l Rm,Rn */
	W32(r14, r6); UPD(0x0C065472u, 4);  /* 0C065470 mov.l Rm,@Rn */
	IF(0x0C065472u); r5 = MACL;  /* 0C065472 sts macl,Rn */
	IF(0x0C065474u); MACL = r11 * r9;  /* 0C065474 mul.l Rm,Rn */
	r8 = R32(r14); UPD(0x0C065478u, 4);  /* 0C065476 mov.l @Rm,Rn */
	IF(0x0C065478u); r9 = MACL;  /* 0C065478 sts macl,Rn */
	r2 = 0xC21F8A0u; UPD(0x0C06547Cu, 2);  /* 0C06547A mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C06547C add Rm,Rn */
	r8 += r9;  /* 0C06547E add Rm,Rn */
	r8 += r2;  /* 0C065480 add Rm,Rn */
	r0 = R32(r8 + 0x20u); UPD(0x0C065484u, 4);  /* 0C065482 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFF000u; UPD(0x0C065486u, 1);  /* 0C065484 mov.w @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C065488u, 1);  /* 0C065486 mov.l Rm,@(disp,Rn) */
	r0 += r4;  /* 0C065488 add Rm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C06548Cu, 2);  /* 0C06548A mov.l Rm,@(disp,Rn) */
	r3 = r0;  /* 0C06548C mov Rm,Rn */
	r5 = r0;  /* 0C06548E mov Rm,Rn */
	r8 += 0x2Cu;  /* 0C065490 add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C065494u, 4);  /* 0C065492 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C065496u, 1);  /* 0C065494 mov.w @Rm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C065498u, 1);  /* 0C065496 mov.l Rm,@(disp,Rn) */
	IF(0x0C065498u); { u32 t_ = r0; PR = 0x0C06549Cu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06549Cu); }  /* 0C065498 jsr @Rn */
L_0C06549C: BLKS(0x0C06549Cu);
	r4 = r13;  /* 0C06549C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0654A0u, 2);  /* 0C06549E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0654A0 add #imm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0654A4u, 2);  /* 0C0654A2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0654A6u, 1);  /* 0C0654A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0654A6u); { u32 t_ = r13; PR = 0x0C0654AAu; r5 = r1; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0654AAu); }  /* 0C0654A6 jsr @Rn */
L_0C0654AA: BLKS(0x0C0654AAu);
	r13 = R32(r8 + 0x20u); UPD(0x0C0654ACu, 1);  /* 0C0654AA mov.l @(disp,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C0654AC tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x1Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0654B8u, 4); goto L_0C0654B8; } UPD(0x0C0654B2u, 1); goto L_0C0654B2; }  /* 0C0654AE bf/s */
L_0C0654B2: BLKS(0x0C0654B2u);
	r7 = R32(r8 + 0x24u); UPD(0x0C0654B4u, 1);  /* 0C0654B2 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0654B4 tst Rm,Rn */
	if (T) { UPD(0x0C065570u, 4); goto L_0C065570; }  /* 0C0654B6 bt */
L_0C0654B8: BLKS(0x0C0654B8u);
	r9 = 0x9C0u; UPD(0x0C0654BAu, 1);  /* 0C0654B8 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C0654BA mov #imm,Rn */
	IF(0x0C0654BCu); MACL = r12 * r9;  /* 0C0654BC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0654C0u, 4);  /* 0C0654BE mov.w @(disp,pc),Rn */
	IF(0x0C0654C0u); r9 = MACL;  /* 0C0654C0 sts macl,Rn */
	IF(0x0C0654C2u); MACL = r10 * r8;  /* 0C0654C2 mul.l Rm,Rn */
	r3 = 0xC21F8A0u; UPD(0x0C0654C6u, 4);  /* 0C0654C4 mov.l @(disp,pc),Rn */
	IF(0x0C0654C6u); r12 <<= 2;  /* 0C0654C6 shll2 Rn */
	IF(0x0C0654C8u); r4 = MACL;  /* 0C0654C8 sts macl,Rn */
	IF(0x0C0654CAu); r8 = MACL;  /* 0C0654CA sts macl,Rn */
	IF(0x0C0654CCu); MACL = r11 * r0;  /* 0C0654CC mul.l Rm,Rn */
	r8 += r9;  /* 0C0654CE add Rm,Rn */
	r13 = 0x100u; UPD(0x0C0654D2u, 7);  /* 0C0654D0 mov.w @(disp,pc),Rn */
	IF(0x0C0654D2u); r6 = MACL;  /* 0C0654D2 sts macl,Rn */
	r8 += r6;  /* 0C0654D4 add Rm,Rn */
	r8 += r3;  /* 0C0654D6 add Rm,Rn */
	r8 += 0x2Cu;  /* 0C0654D8 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0654DCu, 5);  /* 0C0654DA mov.w @Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C0654DEu, 1);  /* 0C0654DC mov.l @(disp,pc),Rn */
	r7 += r13;  /* 0C0654DE add Rm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C0654E2u, 2);  /* 0C0654E0 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s16)r7;  /* 0C0654E2 exts.w Rm,Rn */
	r10 = 0x80000u; UPD(0x0C0654E6u, 2);  /* 0C0654E4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0654E6 mov Rm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C0654EAu, 2);  /* 0C0654E8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0654EAu); { u32 t_ = r11; PR = 0x0C0654EEu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0654EEu); }  /* 0C0654EA jsr @Rn */
L_0C0654EE: BLKS(0x0C0654EEu);
	r5 = r10;  /* 0C0654EE mov Rm,Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0654F0 add #imm,Rn */
	r10 = 0xC058030u; UPD(0x0C0654F4u, 3);  /* 0C0654F2 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0654F4 mov Rm,Rn */
	r11 = R32(r8 + 0x10u); UPD(0x0C0654F8u, 2);  /* 0C0654F6 mov.l @(disp,Rm),Rn */
	IF(0x0C0654F8u); { u32 t_ = r10; PR = 0x0C0654FCu; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0654FCu); }  /* 0C0654F8 jsr @Rn */
L_0C0654FC: BLKS(0x0C0654FCu);
	r10 = R32(r8 + 0x14u); UPD(0x0C0654FEu, 1);  /* 0C0654FC mov.l @(disp,Rm),Rn */
	r10 += r0;  /* 0C0654FE add Rm,Rn */
	r0 = 0xC0AFE40u; UPD(0x0C065502u, 2);  /* 0C065500 mov.l @(disp,pc),Rn */
	IF(0x0C065502u); { u32 t_ = r0; PR = 0x0C065506u; IF(0x0C065504u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C065506u); }  /* 0C065502 jsr @Rn */
L_0C065506: BLKS(0x0C065506u);
	r6 = R32(r8 + 0x20u); UPD(0x0C065508u, 1);  /* 0C065506 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C065508 and #imm,r0 */
	r5 = R32(r14 + 0xCu); UPD(0x0C06550Cu, 2);  /* 0C06550A mov.l @(disp,Rm),Rn */
	r0 += r13;  /* 0C06550C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06550E add #imm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C065512u, 3);  /* 0C065510 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C065512 add #imm,Rn */
	r3 = 0xC058060u; UPD(0x0C065516u, 2);  /* 0C065514 mov.l @(disp,pc),Rn */
	IF(0x0C065516u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C065516 shar Rn */
	r4 = 0x0u;  /* 0C065518 mov #imm,Rn */
	IF(0x0C06551Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C06551A shar Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C06551C exts.w Rm,Rn */
	r1 = 0xC21F8A0u; UPD(0x0C065520u, 5);  /* 0C06551E mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C065520 add Rm,Rn */
	W32(r15, r4); UPD(0x0C065524u, 2);  /* 0C065522 mov.l Rm,@Rn */
	r9 += r2;  /* 0C065524 add Rm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C065528u, 2);  /* 0C065526 mov.l Rm,@(disp,Rn) */
	r0 = 0x14u;  /* 0C065528 mov #imm,Rn */
	r9 += r1;  /* 0C06552A add Rm,Rn */
	r4 = r13;  /* 0C06552C mov Rm,Rn */
	r5 = r6;  /* 0C06552E mov Rm,Rn */
	IF(0x0C065530u); { u32 t_ = r3; PR = 0x0C065534u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C065534u); }  /* 0C065530 jsr @Rn */
L_0C065534: BLKS(0x0C065534u);
	r6 = 0xC058030u; UPD(0x0C065536u, 1);  /* 0C065534 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C065536 mov Rm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C06553Au, 2);  /* 0C065538 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C06553Cu, 1);  /* 0C06553A mov.l Rm,@(disp,Rn) */
	IF(0x0C06553Cu); { u32 t_ = r6; PR = 0x0C065540u; r5 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C065540u); }  /* 0C06553C jsr @Rn */
L_0C065540: BLKS(0x0C065540u);
	W32(r15 + 0xCu, r0); UPD(0x0C065542u, 1);  /* 0C065540 mov.l Rm,@(disp,Rn) */
	r7 = r10;  /* 0C065542 mov Rm,Rn */
	r8 = 0xC16D394u; UPD(0x0C065546u, 2);  /* 0C065544 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C065546 mov Rm,Rn */
	IF(0x0C065548u); r12 = R32(r0 + r8); UPD(0x0C06554Au, 2);  /* 0C065548 mov.l @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C06554A mov #imm,Rn */
	W32(r15 + 0x10u, r12); UPD(0x0C06554Eu, 2);  /* 0C06554C mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C06554E mov Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C065552u, 2);  /* 0C065550 mov.l @(disp,pc),Rn */
	IF(0x0C065552u); { u32 t_ = r10; PR = 0x0C065556u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C065556u); }  /* 0C065552 jsr @Rn */
L_0C065556: BLKS(0x0C065556u);
	r14 += 0x14u;  /* 0C065556 add #imm,Rn */
	UPD(0x0C065558u, 1);
L_0C065558: BLKS(0x0C065558u);
	r15 = r14;  /* 0C065558 mov Rm,Rn */
	IF(0x0C06555Au); PR = R32(r15); r15 += 4; UPD(0x0C06555Cu, 2);  /* 0C06555A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06555Eu, 1);  /* 0C06555C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C065560u, 1);  /* 0C06555E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065562u, 1);  /* 0C065560 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065564u, 1);  /* 0C065562 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065566u, 1);  /* 0C065564 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065568u, 1);  /* 0C065566 mov.l @Rm+,Rn */
	IF(0x0C065568u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065568 rts */
L_0C065570: BLKS(0x0C065570u);
	r4 = R32(r14); UPD(0x0C065572u, 1);  /* 0C065570 mov.l @Rm,Rn */
	r0 = 0x5u;  /* 0C065572 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C065576u, 2);  /* 0C065574 mov.l @(disp,Rm),Rn */
	r4 += r9;  /* 0C065576 add Rm,Rn */
	r9 = 0xC21F8A0u; UPD(0x0C06557Au, 2);  /* 0C065578 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C06557A add Rm,Rn */
	r4 += r9;  /* 0C06557C add Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C065580u, 3);  /* 0C06557E mov.l Rm,@(disp,Rn) */
	r5 = 0x57u;  /* 0C065580 mov #imm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C065584u, 2);  /* 0C065582 mov.l Rm,@(disp,Rn) */
	r1 = R32(r4); UPD(0x0C065586u, 1);  /* 0C065584 mov.l @Rm,Rn */
	r8 += 0x30u;  /* 0C065586 add #imm,Rn */
	r2 = 0x800000u; UPD(0x0C06558Au, 2);  /* 0C065588 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C06558Cu, 1);  /* 0C06558A mov.b Rm,@Rn */
	r1 |= r2;  /* 0C06558C or Rm,Rn */
	r13 = 0xC0AFBA0u; UPD(0x0C065590u, 2);  /* 0C06558E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD0u;  /* 0C065590 add #imm,Rn */
	W32(r4, r1); UPD(0x0C065594u, 2);  /* 0C065592 mov.l Rm,@Rn */
	r3 = 0x204B0B0u; UPD(0x0C065596u, 1);  /* 0C065594 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C065596 mov Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C06559Au, 2);  /* 0C065598 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x18u, r7); UPD(0x0C06559Cu, 1);  /* 0C06559A mov.l Rm,@(disp,Rn) */
	IF(0x0C06559Cu); { u32 t_ = r13; PR = 0x0C0655A0u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C0655A0u); }  /* 0C06559C jsr @Rn */
L_0C0655A0: BLKS(0x0C0655A0u);
	{ IF(0x0C0655A2u); ; /* slot nop */ UPD(0x0C0654B8u, 3); goto L_0C0654B8; }  /* 0C0655A0 bra */
L_0C0655B0: BLKS(0x0C0655B0u);
	r7 = 0x9C0u; UPD(0x0C0655B2u, 1);  /* 0C0655B0 mov.w @(disp,pc),Rn */
	r5 = 0x34u;  /* 0C0655B2 mov #imm,Rn */
	IF(0x0C0655B4u); MACL = r12 * r7;  /* 0C0655B4 mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C0655B8u, 4);  /* 0C0655B6 mov.w @(disp,pc),Rn */
	IF(0x0C0655B8u); r8 = MACL;  /* 0C0655B8 sts macl,Rn */
	IF(0x0C0655BAu); MACL = r10 * r5;  /* 0C0655BA mul.l Rm,Rn */
	r7 = r8;  /* 0C0655BC mov Rm,Rn */
	r9 = 0xC21F8A0u; UPD(0x0C0655C0u, 5);  /* 0C0655BE mov.l @(disp,pc),Rn */
	IF(0x0C0655C0u); r4 = MACL;  /* 0C0655C0 sts macl,Rn */
	IF(0x0C0655C2u); MACL = r11 * r2;  /* 0C0655C2 mul.l Rm,Rn */
	r7 += r4;  /* 0C0655C4 add Rm,Rn */
	r12 = 0x1u;  /* 0C0655C6 mov #imm,Rn */
	IF(0x0C0655C8u); r5 = MACL;  /* 0C0655C8 sts macl,Rn */
	r7 += r5;  /* 0C0655CA add Rm,Rn */
	r7 += r9;  /* 0C0655CC add Rm,Rn */
	r6 = R32(r7 + 0xCu); UPD(0x0C0655D0u, 9);  /* 0C0655CE mov.l @(disp,Rm),Rn */
	r1 = r6;  /* 0C0655D0 mov Rm,Rn */
	r1 += 0xFFFFFFF2u;  /* 0C0655D2 add #imm,Rn */
	T = r1 > r12;  /* 0C0655D4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065630u, 6); goto L_0C065630; } goto L_0C0655DA; }  /* 0C0655D6 bf/s */
L_0C0655DA: BLKS(0x0C0655DAu);
	r2 += 0x30u;  /* 0C0655DA add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C0655DEu, 3);  /* 0C0655DC mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0655DE add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C0655E0 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0655E2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C065556u, 6); goto L_0C065556; } UPD(0x0C0655E8u, 1); goto L_0C0655E8; }  /* 0C0655E4 bf/s */
L_0C0655E8: BLKS(0x0C0655E8u);
	r11 = 0x0u;  /* 0C0655E8 mov #imm,Rn */
	r6 += 0x1u;  /* 0C0655EA add #imm,Rn */
	W8(r2, r11); UPD(0x0C0655EEu, 3);  /* 0C0655EC mov.b Rm,@Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C0655F0u, 1);  /* 0C0655EE mov.l Rm,@(disp,Rn) */
L_0C0655F0: BLKS(0x0C0655F0u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C065558u, 3); goto L_0C065558; }  /* 0C0655F0 bra */
L_0C065630: BLKS(0x0C065630u);
	r0 = R32(r7 + 0x24u); UPD(0x0C065632u, 1);  /* 0C065630 mov.l @(disp,Rm),Rn */
	r2 = 0xFE00u; UPD(0x0C065634u, 1);  /* 0C065632 mov.l @(disp,pc),Rn */
	r11 = 0xC0u; UPD(0x0C065636u, 1);  /* 0C065634 mov.w @(disp,pc),Rn */
	r2 &= r0;  /* 0C065636 and Rm,Rn */
	IF(0x0C065638u); MACL = r2 * r11;  /* 0C065638 mul.l Rm,Rn */
	r0 &= 0xFEu;  /* 0C06563A and #imm,r0 */
	r12 = 0xFF00u; UPD(0x0C06563Eu, 5);  /* 0C06563C mov.l @(disp,pc),Rn */
	IF(0x0C06563Eu); r10 = MACL;  /* 0C06563E sts macl,Rn */
	IF(0x0C065640u); MACL = r0 * r11;  /* 0C065640 mul.l Rm,Rn */
	r2 = r7;  /* 0C065642 mov Rm,Rn */
	r2 += 0x30u;  /* 0C065644 add #imm,Rn */
	IF(0x0C065646u); r1 = MACL;  /* 0C065646 sts macl,Rn */
	IF(0x0C065648u); r10 >>= 8;  /* 0C065648 shlr8 Rn */
	IF(0x0C06564Au); r1 >>= 8;  /* 0C06564A shlr8 Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C06564Eu, 9);  /* 0C06564C mov.b @Rm,Rn */
	r12 &= r10;  /* 0C06564E and Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C065650 extu.b Rm,Rn */
	r3 = 0x2040000u; UPD(0x0C065654u, 3);  /* 0C065652 mov.l @(disp,pc),Rn */
	r0 |= r12;  /* 0C065654 or Rm,Rn */
	r3 |= r0;  /* 0C065656 or Rm,Rn */
	r13 += 0x1u;  /* 0C065658 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C06565A extu.b Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C06565Eu, 5);  /* 0C06565C mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C06565E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0655F0u, 4); goto L_0C0655F0; } UPD(0x0C065664u, 1); goto L_0C065664; }  /* 0C065660 bf/s */
L_0C065664: BLKS(0x0C065664u);
	r0 = r6;  /* 0C065664 mov Rm,Rn */
	r0 += 0x1u;  /* 0C065666 add #imm,Rn */
	r13 = 0x0u;  /* 0C065668 mov #imm,Rn */
	W8(r2, r13); UPD(0x0C06566Cu, 4);  /* 0C06566A mov.b Rm,@Rn */
	T = r0 == 0x10u;  /* 0C06566C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0655F0u, 4); goto L_0C0655F0; } UPD(0x0C065672u, 1); goto L_0C065672; }  /* 0C06566E bf/s */
L_0C065672: BLKS(0x0C065672u);
	r0 = r8;  /* 0C065672 mov Rm,Rn */
	r0 += r5;  /* 0C065674 add Rm,Rn */
	r0 += r4;  /* 0C065676 add Rm,Rn */
	r6 = 0x0u;  /* 0C065678 mov #imm,Rn */
	{ IF(0x0C06567Cu); W32(r0 + r9, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C065556u, 7); goto L_0C065556; }  /* 0C06567A bra */
}

void f_0C065690(sh3_t *c)
{
	LOCALS;
L_0C065690: BLKS(0x0C065690u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065692u, 1);  /* 0C065690 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C065692 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065696u, 2);  /* 0C065694 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s16)r6;  /* 0C065696 exts.w Rm,Rn */
	r9 = 0x9C0u; UPD(0x0C06569Au, 2);  /* 0C065698 mov.w @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C06569A mov #imm,Rn */
	IF(0x0C06569Cu); MACL = r1 * r9;  /* 0C06569C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0656A0u, 4);  /* 0C06569E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C0656A0 exts.w Rm,Rn */
	IF(0x0C0656A2u); r9 = MACL;  /* 0C0656A2 sts macl,Rn */
	IF(0x0C0656A4u); MACL = r7 * r3;  /* 0C0656A4 mul.l Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C0656A8u, 5);  /* 0C0656A6 mov.l @(disp,pc),Rn */
	IF(0x0C0656A8u); r4 = MACL;  /* 0C0656A8 sts macl,Rn */
	IF(0x0C0656AAu); MACL = r2 * r0;  /* 0C0656AA mul.l Rm,Rn */
	r7 = r9;  /* 0C0656AC mov Rm,Rn */
	r7 += r4;  /* 0C0656AE add Rm,Rn */
	IF(0x0C0656B0u); r6 = MACL;  /* 0C0656B0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0656B4u, 7);  /* 0C0656B2 mov.l Rm,@-Rn */
	r7 += r6;  /* 0C0656B4 add Rm,Rn */
	r7 += r8;  /* 0C0656B6 add Rm,Rn */
	r1 = R32(r7 + 0x8u); UPD(0x0C0656BAu, 3);  /* 0C0656B8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0656BA mov #imm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C0656BC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0656E0u, 5); goto L_0C0656E0; } goto L_0C0656C2; }  /* 0C0656BE bf/s */
L_0C0656C2: BLKS(0x0C0656C2u);
	r5 = R32(r7 + 0xCu); UPD(0x0C0656C4u, 2);  /* 0C0656C2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0656C4 mov #imm,Rn */
	W32(r7 + 0x8u, r5); UPD(0x0C0656C8u, 2);  /* 0C0656C6 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r4); UPD(0x0C0656CAu, 1);  /* 0C0656C8 mov.l Rm,@(disp,Rn) */
L_0C0656CA: BLKS(0x0C0656CAu);
	r15 = r14;  /* 0C0656CA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0656CEu, 2);  /* 0C0656CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0656D0u, 1);  /* 0C0656CE mov.l @Rm+,Rn */
	IF(0x0C0656D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0656D0 rts */
L_0C0656E0: BLKS(0x0C0656E0u);
	r3 = R32(r7 + 0xCu); UPD(0x0C0656E2u, 1);  /* 0C0656E0 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C0656E2 mov Rm,Rn */
	T = r0 == 0xFu;  /* 0C0656E4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065710u, 5); goto L_0C065710; } goto L_0C0656EA; }  /* 0C0656E6 bt/s */
L_0C0656EA: BLKS(0x0C0656EAu);
	r2 += 0x30u;  /* 0C0656EA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0656EEu, 3);  /* 0C0656EC mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0656EE add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0656F0 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0656F2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0656CAu, 6); goto L_0C0656CA; } UPD(0x0C0656F8u, 1); goto L_0C0656F8; }  /* 0C0656F4 bf/s */
L_0C0656F8: BLKS(0x0C0656F8u);
	r8 = 0x0u;  /* 0C0656F8 mov #imm,Rn */
	r3 += 0x1u;  /* 0C0656FA add #imm,Rn */
	W8(r2, r8); UPD(0x0C0656FEu, 3);  /* 0C0656FC mov.b Rm,@Rn */
	{ W32(r7 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0656CAu, 3); goto L_0C0656CA; }  /* 0C0656FE bra */
L_0C065710: BLKS(0x0C065710u);
	r2 = R32(r7 + 0x28u); UPD(0x0C065712u, 1);  /* 0C065710 mov.l @(disp,Rm),Rn */
	r0 = 0xFF00u; UPD(0x0C065714u, 1);  /* 0C065712 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF00u; UPD(0x0C065716u, 1);  /* 0C065714 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C065716 and Rm,Rn */
	IF(0x0C065718u); r0 >>= 2;  /* 0C065718 shlr2 Rn */
	r0 &= r1;  /* 0C06571A and Rm,Rn */
	r1 = r2 & 0xFF;  /* 0C06571C extu.b Rm,Rn */
	IF(0x0C06571Eu); r1 >>= 2;  /* 0C06571E shlr2 Rn */
	r1 |= r0;  /* 0C065720 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C065722 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0656CAu, 10); goto L_0C0656CA; } UPD(0x0C065728u, 1); goto L_0C065728; }  /* 0C065724 bf/s */
L_0C065728: BLKS(0x0C065728u);
	r0 = r9;  /* 0C065728 mov Rm,Rn */
	r0 += r6;  /* 0C06572A add Rm,Rn */
	r0 += r4;  /* 0C06572C add Rm,Rn */
	{ IF(0x0C065730u); W32(r0 + r8, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0656CAu, 6); goto L_0C0656CA; }  /* 0C06572E bra */
}

void f_0C065740(sh3_t *c)
{
	LOCALS;
L_0C065740: BLKS(0x0C065740u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065742u, 1);  /* 0C065740 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C065742 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065746u, 2);  /* 0C065744 mov.l Rm,@-Rn */
	r3 = 0x34u;  /* 0C065746 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06574Au, 2);  /* 0C065748 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06574Cu, 1);  /* 0C06574A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06574Eu, 1);  /* 0C06574C mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C06574E exts.w Rm,Rn */
	r5 = 0x9C0u; UPD(0x0C065752u, 2);  /* 0C065750 mov.w @(disp,pc),Rn */
	IF(0x0C065752u); MACL = r1 * r5;  /* 0C065752 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065756u, 3);  /* 0C065754 mov.l Rm,@-Rn */
	IF(0x0C065756u); r10 = MACL;  /* 0C065756 sts macl,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C065758 exts.w Rm,Rn */
	IF(0x0C06575Au); MACL = r13 * r3;  /* 0C06575A mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C06575Eu, 5);  /* 0C06575C mov.w @(disp,pc),Rn */
	IF(0x0C06575Eu); r9 = MACL;  /* 0C06575E sts macl,Rn */
	IF(0x0C065760u); MACL = r12 * r2;  /* 0C065760 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065764u, 4);  /* 0C065762 mov.l Rm,@-Rn */
	r9 += r10;  /* 0C065764 add Rm,Rn */
	IF(0x0C065766u); r0 = MACL;  /* 0C065766 sts macl,Rn */
	r9 += r0;  /* 0C065768 add Rm,Rn */
	IF(0x0C06576Au); r15 -= 4; W32(r15, PR); UPD(0x0C06576Cu, 4);  /* 0C06576A sts.l pr,@-Rn */
	r0 = 0xC21F8A0u; UPD(0x0C06576Eu, 1);  /* 0C06576C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06576E add #imm,Rn */
	r9 += r0;  /* 0C065770 add Rm,Rn */
	r14 = r15;  /* 0C065772 mov Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C065776u, 4);  /* 0C065774 mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C065778u, 1);  /* 0C065776 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C065778 tst Rm,Rn */
	{ u32 c_ = T; r11 = R32(r9 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C065796u, 4); goto L_0C065796; } UPD(0x0C06577Eu, 1); goto L_0C06577E; }  /* 0C06577A bt/s */
L_0C06577E: BLKS(0x0C06577Eu);
	IF(0x0C06577Eu); T = (s32)r2 >= 0;  /* 0C06577E cmp/pz Rn */
	{ u32 c_ = !T; r4 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06578Au, 4); goto L_0C06578A; } goto L_0C065784; }  /* 0C065780 bf/s */
L_0C065784: BLKS(0x0C065784u);
	T = (s32)r2 > (s32)r4;  /* 0C065784 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06578Eu, 5); goto L_0C06578E; } UPD(0x0C06578Au, 1); goto L_0C06578A; }  /* 0C065786 bf/s */
L_0C06578A: BLKS(0x0C06578Au);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0658F0u, 3); goto L_0C0658F0; }  /* 0C06578A bra */
L_0C06578E: BLKS(0x0C06578Eu);
	r6 = 0x808080u; UPD(0x0C065790u, 1);  /* 0C06578E mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r7); UPD(0x0C065792u, 1);  /* 0C065790 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r7); UPD(0x0C065794u, 1);  /* 0C065792 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C065796u, 1);  /* 0C065794 mov.l Rm,@(disp,Rn) */
L_0C065796: BLKS(0x0C065796u);
	r8 = r9;  /* 0C065796 mov Rm,Rn */
	r8 += 0x2Cu;  /* 0C065798 add #imm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C06579Cu, 3);  /* 0C06579A mov.l Rm,@(disp,Rn) */
	r0 = 0xC065950u; UPD(0x0C06579Eu, 1);  /* 0C06579C mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C06579E mov Rm,Rn */
	r8 += 0x2Eu;  /* 0C0657A0 add #imm,Rn */
	IF(0x0C0657A2u); { u32 t_ = r0; PR = 0x0C0657A6u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C065950, 0x0C065950u, 0x0C0657A6u); }  /* 0C0657A2 jsr @Rn */
L_0C0657A6: BLKS(0x0C0657A6u);
	r1 = 0xBFu; UPD(0x0C0657A8u, 1);  /* 0C0657A6 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0657A8 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r1;  /* 0C0657AA cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r8, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0657F0u, 5); goto L_0C0657F0; } UPD(0x0C0657B0u, 1); goto L_0C0657B0; }  /* 0C0657AC bf/s */
L_0C0657B0: BLKS(0x0C0657B0u);
	r0 = R32(r14); UPD(0x0C0657B2u, 1);  /* 0C0657B0 mov.l @Rm,Rn */
	r5 = 0x34u;  /* 0C0657B2 mov #imm,Rn */
	r4 = 0x9C0u; UPD(0x0C0657B6u, 2);  /* 0C0657B4 mov.w @(disp,pc),Rn */
	IF(0x0C0657B6u); MACL = r0 * r4;  /* 0C0657B6 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C0657BAu, 3);  /* 0C0657B8 mov.w @(disp,pc),Rn */
	IF(0x0C0657BAu); r11 = MACL;  /* 0C0657BA sts macl,Rn */
	IF(0x0C0657BCu); MACL = r13 * r5;  /* 0C0657BC mul.l Rm,Rn */
	r10 = 0xC21F8A0u; UPD(0x0C0657C0u, 4);  /* 0C0657BE mov.l @(disp,pc),Rn */
	IF(0x0C0657C0u); r3 = MACL;  /* 0C0657C0 sts macl,Rn */
	IF(0x0C0657C2u); MACL = r12 * r7;  /* 0C0657C2 mul.l Rm,Rn */
	r11 += r3;  /* 0C0657C4 add Rm,Rn */
	r4 = R32(r14); UPD(0x0C0657C8u, 5);  /* 0C0657C6 mov.l @Rm,Rn */
	IF(0x0C0657C8u); r9 = MACL;  /* 0C0657C8 sts macl,Rn */
	r11 += r9;  /* 0C0657CA add Rm,Rn */
	r10 += r11;  /* 0C0657CC add Rm,Rn */
	r6 = R32(r10 + 0x20u); UPD(0x0C0657D0u, 4);  /* 0C0657CE mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C0657D0 mov Rm,Rn */
	r7 = 0xE0000u; UPD(0x0C0657D4u, 2);  /* 0C0657D2 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C0657D4 add #imm,Rn */
	r7 -= r6;  /* 0C0657D6 sub Rm,Rn */
	r2 = 0xC065140u; UPD(0x0C0657DAu, 3);  /* 0C0657D8 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C0657DA mov Rm,Rn */
	r15 = r14;  /* 0C0657DC mov Rm,Rn */
	IF(0x0C0657DEu); PR = R32(r15); r15 += 4; UPD(0x0C0657E0u, 3);  /* 0C0657DE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0657E2u, 1);  /* 0C0657E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0657E4u, 1);  /* 0C0657E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0657E6u, 1);  /* 0C0657E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0657E8u, 1);  /* 0C0657E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0657EAu, 1);  /* 0C0657E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0657ECu, 1);  /* 0C0657EA mov.l @Rm+,Rn */
	IF(0x0C0657ECu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C065140u: TAIL(f_0C065140); default: JUMPD(tv_); } }  /* 0C0657EC jmp @Rn */
L_0C0657F0: BLKS(0x0C0657F0u);
	r1 += 0xFFFFFFF5u;  /* 0C0657F0 add #imm,Rn */
	IF(0x0C0657F2u); MACL = r4 * r1;  /* 0C0657F2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0657F6u, 4);  /* 0C0657F4 mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C0657F8u, 1);  /* 0C0657F6 mov.l @(disp,pc),Rn */
	IF(0x0C0657F8u); r0 = MACL;  /* 0C0657F8 sts macl,Rn */
	r0 += r6;  /* 0C0657FA add Rm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C0657FEu, 3);  /* 0C0657FC mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C065800u, 1);  /* 0C0657FE mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C065802u, 1);  /* 0C065800 mov.l @(disp,Rm),Rn */
	IF(0x0C065802u); { u32 t_ = r8; PR = 0x0C065806u; r7 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C065806u); }  /* 0C065802 jsr @Rn */
L_0C065806: BLKS(0x0C065806u);
	r9 = R32(r14 + 0x4u); UPD(0x0C065808u, 1);  /* 0C065806 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C065808 exts.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C06580Cu, 2);  /* 0C06580A mov.w @Rm,Rn */
	r6 = r9;  /* 0C06580C mov Rm,Rn */
	r5 = 0x100u; UPD(0x0C065810u, 2);  /* 0C06580E mov.w @(disp,pc),Rn */
	r0 -= r4;  /* 0C065810 sub Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C065814u, 2);  /* 0C065812 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C065814 add Rm,Rn */
	r2 = 0xFFFFFF03u; UPD(0x0C065818u, 2);  /* 0C065816 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C065818 and Rm,Rn */
	r5 = 0x100u; UPD(0x0C06581Cu, 2);  /* 0C06581A mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C06581C add Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C065820u, 2);  /* 0C06581E mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C065820 mov #imm,Rn */
	r7 = r2 & 0xFFFF;  /* 0C065822 extu.w Rm,Rn */
	r4 = r10;  /* 0C065824 mov Rm,Rn */
	r10 = 0x6u;  /* 0C065826 mov #imm,Rn */
	UPD(0x0C065828u, 4);
L_0C065828: BLKS(0x0C065828u);
	T = r7 > r10;  /* 0C065828 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (s32)r0 > (s32)r5; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C0658A0u, 4); goto L_0C0658A0; } goto L_0C06582E; }  /* 0C06582A bt/s */
L_0C06582E: BLKS(0x0C06582Eu);
	r9 = 0x5FFFFu; UPD(0x0C065830u, 2);  /* 0C06582E mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C065832u, 1);  /* 0C065830 mov.w @(disp,pc),Rn */
	T = (s32)r11 > (s32)r9;  /* 0C065832 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C065890u, 4); goto L_0C065890; }  /* 0C065834 bf */
L_0C065836: BLKS(0x0C065836u);
	r9 = r3;  /* 0C065836 mov Rm,Rn */
	UPD(0x0C065838u, 1);
L_0C065838: BLKS(0x0C065838u);
	r9 += 0x1u;  /* 0C065838 add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C06583A exts.w Rm,Rn */
	r2 = 0x5u;  /* 0C06583C mov #imm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C06583E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065828u, 7); goto L_0C065828; } goto L_0C065844; }  /* 0C065840 bf/s */
L_0C065844: BLKS(0x0C065844u);
	r1 = R32(r14); UPD(0x0C065846u, 2);  /* 0C065844 mov.l @Rm,Rn */
	r0 = 0x34u;  /* 0C065846 mov #imm,Rn */
	r8 = 0x9C0u; UPD(0x0C06584Au, 2);  /* 0C065848 mov.w @(disp,pc),Rn */
	IF(0x0C06584Au); MACL = r1 * r8;  /* 0C06584A mul.l Rm,Rn */
	r5 = 0x340u; UPD(0x0C06584Eu, 3);  /* 0C06584C mov.w @(disp,pc),Rn */
	IF(0x0C06584Eu); r8 = MACL;  /* 0C06584E sts macl,Rn */
	IF(0x0C065850u); MACL = r13 * r0;  /* 0C065850 mul.l Rm,Rn */
	r7 = 0xC21F8A0u; UPD(0x0C065854u, 4);  /* 0C065852 mov.l @(disp,pc),Rn */
	IF(0x0C065854u); r4 = MACL;  /* 0C065854 sts macl,Rn */
	IF(0x0C065856u); MACL = r12 * r5;  /* 0C065856 mul.l Rm,Rn */
	r8 += r4;  /* 0C065858 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C06585Cu, 5);  /* 0C06585A mov.l @(disp,pc),Rn */
	IF(0x0C06585Cu); r3 = MACL;  /* 0C06585C sts macl,Rn */
	r8 += r3;  /* 0C06585E add Rm,Rn */
	r8 += r7;  /* 0C065860 add Rm,Rn */
	r10 = r8;  /* 0C065862 mov Rm,Rn */
	r10 += 0x2Cu;  /* 0C065864 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C065868u, 6);  /* 0C065866 mov.w @Rm,Rn */
	r5 = r11;  /* 0C065868 mov Rm,Rn */
	r4 = r9;  /* 0C06586A mov Rm,Rn */
	IF(0x0C06586Cu); { u32 t_ = r0; PR = 0x0C065870u; W32(r8 + 0x20u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C065870u); }  /* 0C06586C jsr @Rn */
L_0C065870: BLKS(0x0C065870u);
	r4 = r9;  /* 0C065870 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C065874u, 2);  /* 0C065872 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C065874 mov Rm,Rn */
	IF(0x0C065876u); { u32 t_ = r9; PR = 0x0C06587Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06587Au); }  /* 0C065876 jsr @Rn */
L_0C06587A: BLKS(0x0C06587Au);
	W32(r8 + 0x1Cu, r0); UPD(0x0C06587Cu, 1);  /* 0C06587A mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C06587Eu, 1);  /* 0C06587C mov.w @Rm,Rn */
	r0 = r11 & 0xFFFF;  /* 0C06587E extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C065880 add #imm,Rn */
	IF(0x0C065882u); r0 >>= 2;  /* 0C065882 shlr2 Rn */
	IF(0x0C065884u); T = r0 & 1; r0 >>= 1;  /* 0C065884 shlr Rn */
	r0 &= 0x3Fu;  /* 0C065886 and #imm,r0 */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0657B0u, 8); goto L_0C0657B0; }  /* 0C065888 bra */
L_0C065890: BLKS(0x0C065890u);
	{ r11 += r1; /* slot add Rm,Rn */ UPD(0x0C065836u, 3); goto L_0C065836; }  /* 0C065890 bra */
L_0C0658A0: BLKS(0x0C0658A0u);
	if (!T) { UPD(0x0C0658C0u, 3); goto L_0C0658C0; }  /* 0C0658A0 bf */
L_0C0658A2: BLKS(0x0C0658A2u);
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0658A4u, 1);  /* 0C0658A2 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C0658A4 add #imm,Rn */
	W16(r6, r2); UPD(0x0C0658A8u, 2);  /* 0C0658A6 mov.w Rm,@Rn */
L_0C0658A8: BLKS(0x0C0658A8u);
	r10 = 0x20000u; UPD(0x0C0658AAu, 1);  /* 0C0658A8 mov.l @(disp,pc),Rn */
	T = (s32)r11 > (s32)r10;  /* 0C0658AA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065838u, 4); goto L_0C065838; } goto L_0C0658B0; }  /* 0C0658AC bf/s */
L_0C0658B0: BLKS(0x0C0658B0u);
	r1 = 0xFFFFF000u; UPD(0x0C0658B2u, 2);  /* 0C0658B0 mov.w @(disp,pc),Rn */
	{ r11 += r1; /* slot add Rm,Rn */ UPD(0x0C065838u, 3); goto L_0C065838; }  /* 0C0658B2 bra */
L_0C0658C0: BLKS(0x0C0658C0u);
	r10 = 0xFFu; UPD(0x0C0658C2u, 1);  /* 0C0658C0 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r10;  /* 0C0658C2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065838u, 4); goto L_0C065838; } goto L_0C0658C8; }  /* 0C0658C4 bt/s */
L_0C0658C8: BLKS(0x0C0658C8u);
	r9 = 0x34u;  /* 0C0658C8 mov #imm,Rn */
	IF(0x0C0658CAu); MACL = r13 * r9;  /* 0C0658CA mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C0658CEu, 5);  /* 0C0658CC mov.w @(disp,pc),Rn */
	IF(0x0C0658CEu); r9 = MACL;  /* 0C0658CE sts macl,Rn */
	IF(0x0C0658D0u); MACL = r12 * r2;  /* 0C0658D0 mul.l Rm,Rn */
	r9 += r4;  /* 0C0658D2 add Rm,Rn */
	IF(0x0C0658D4u); r10 = MACL;  /* 0C0658D4 sts macl,Rn */
	r9 += r10;  /* 0C0658D6 add Rm,Rn */
	r9 += r8;  /* 0C0658D8 add Rm,Rn */
	r9 += 0x2Cu;  /* 0C0658DA add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0658DEu, 9);  /* 0C0658DC mov.w @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0658DE add #imm,Rn */
	{ W16(r9, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C0658A8u, 4); goto L_0C0658A8; }  /* 0C0658E0 bra */
L_0C0658F0: BLKS(0x0C0658F0u);
	r15 = r14;  /* 0C0658F0 mov Rm,Rn */
	IF(0x0C0658F2u); PR = R32(r15); r15 += 4; UPD(0x0C0658F4u, 2);  /* 0C0658F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0658F6u, 1);  /* 0C0658F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0658F8u, 1);  /* 0C0658F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0658FAu, 1);  /* 0C0658F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0658FCu, 1);  /* 0C0658FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0658FEu, 1);  /* 0C0658FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065900u, 1);  /* 0C0658FE mov.l @Rm+,Rn */
	IF(0x0C065900u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065900 rts */
}

/* FUN_0c065950 */
void f_0C065950(sh3_t *c)
{
	LOCALS;
L_0C065950: BLKS(0x0C065950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065952u, 1);  /* 0C065950 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C065952 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065956u, 2);  /* 0C065954 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065958u, 1);  /* 0C065956 mov.l Rm,@-Rn */
	r1 = 0xBFu; UPD(0x0C06595Au, 1);  /* 0C065958 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06595Cu, 1);  /* 0C06595A mov.l Rm,@-Rn */
	T = (s32)r0 > (s32)r1;  /* 0C06595C cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065A40u, 4); goto L_0C065A40; } goto L_0C065962; }  /* 0C06595E bt/s */
L_0C065962: BLKS(0x0C065962u);
	r1 += 0xFFFFFFF5u;  /* 0C065962 add #imm,Rn */
	IF(0x0C065964u); MACL = r0 * r1;  /* 0C065964 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C065968u, 5);  /* 0C065966 mov.l @(disp,pc),Rn */
	IF(0x0C065968u); r7 = MACL;  /* 0C065968 sts macl,Rn */
	r7 += r9;  /* 0C06596A add Rm,Rn */
	r1 = R32(r7); UPD(0x0C06596Eu, 3);  /* 0C06596C mov.l @Rm,Rn */
	r3 = 0x2000000u; UPD(0x0C065970u, 1);  /* 0C06596E mov.l @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C065970 tst Rm,Rn */
	if (T) { UPD(0x0C0659A6u, 4); goto L_0C0659A6; }  /* 0C065972 bt */
L_0C065974: BLKS(0x0C065974u);
	r8 = 0xA8u; UPD(0x0C065976u, 1);  /* 0C065974 mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C065976 add Rm,Rn */
	r2 = r8;  /* 0C065978 mov Rm,Rn */
	r2 += 0x3u;  /* 0C06597A add #imm,Rn */
	r8 += 0x1u;  /* 0C06597C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C065980u, 5);  /* 0C06597E mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C065982u, 1);  /* 0C065980 mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C065982 extu.b Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C065984 extu.b Rm,Rn */
	T = r4 >= r3;  /* 0C065986 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C0659A6u, 6); goto L_0C0659A6; }  /* 0C065988 bf */
L_0C06598A: BLKS(0x0C06598Au);
	r3 = R32(r7 + 0x24u); UPD(0x0C06598Cu, 1);  /* 0C06598A mov.l @(disp,Rm),Rn */
	r1 = 0xFFF7FFFFu; UPD(0x0C06598Eu, 1);  /* 0C06598C mov.l @(disp,pc),Rn */
	r10 = 0x12FFFFEu; UPD(0x0C065990u, 1);  /* 0C06598E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C065990 add Rm,Rn */
	T = r3 > r10;  /* 0C065992 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0659A6u, 5); goto L_0C0659A6; }  /* 0C065994 bt */
L_0C065996: BLKS(0x0C065996u);
	r4 = R32(r7 + 0x28u); UPD(0x0C065998u, 1);  /* 0C065996 mov.l @(disp,Rm),Rn */
	r6 = 0xC3929E0u; UPD(0x0C06599Au, 1);  /* 0C065998 mov.l @(disp,pc),Rn */
	r5 = R32(r6); UPD(0x0C06599Cu, 1);  /* 0C06599A mov.l @Rm,Rn */
	r7 = 0xEFFFFEu; UPD(0x0C06599Eu, 1);  /* 0C06599C mov.l @(disp,pc),Rn */
	r4 -= r5;  /* 0C06599E sub Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0659A0 add #imm,Rn */
	T = r4 > r7;  /* 0C0659A2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065A0Cu, 6); goto L_0C065A0C; }  /* 0C0659A4 bf */
L_0C0659A6: BLKS(0x0C0659A6u);
	r6 = 0xC16D3B2u; UPD(0x0C0659A8u, 1);  /* 0C0659A6 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0659A8 mov #imm,Rn */
	r8 = 0xC0u; UPD(0x0C0659ACu, 2);  /* 0C0659AA mov.w @(disp,pc),Rn */
	r4 = 0xBFu; UPD(0x0C0659AEu, 1);  /* 0C0659AC mov.w @(disp,pc),Rn */
	r10 = 0xC3929E0u; UPD(0x0C0659B0u, 1);  /* 0C0659AE mov.l @(disp,pc),Rn */
L_0C0659B0: BLKS(0x0C0659B0u);
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0659B2u, 1);  /* 0C0659B0 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C0659B2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C0659B4 exts.w Rm,Rn */
	T = r2 == r8;  /* 0C0659B6 cmp/eq Rm,Rn */
	{ u32 c_ = T; W16(r6, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C065A30u, 6); goto L_0C065A30; } UPD(0x0C0659BCu, 1); goto L_0C0659BC; }  /* 0C0659B8 bt/s */
L_0C0659BC: BLKS(0x0C0659BCu);
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0659BEu, 1);  /* 0C0659BC mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0659C0u, 1);  /* 0C0659BE mov.w @(disp,pc),Rn */
	IF(0x0C0659C0u); MACL = r5 * r2;  /* 0C0659C0 mul.l Rm,Rn */
	r3 = 0x2000000u; UPD(0x0C0659C4u, 3);  /* 0C0659C2 mov.l @(disp,pc),Rn */
	IF(0x0C0659C4u); r7 = MACL;  /* 0C0659C4 sts macl,Rn */
	r7 += r9;  /* 0C0659C6 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0659CAu, 3);  /* 0C0659C8 mov.l @Rm,Rn */
	T = (r1 & r3) == 0;  /* 0C0659CA tst Rm,Rn */
	if (T) { UPD(0x0C065A00u, 4); goto L_0C065A00; }  /* 0C0659CC bt */
L_0C0659CE: BLKS(0x0C0659CEu);
	r1 = 0xA8u; UPD(0x0C0659D0u, 1);  /* 0C0659CE mov.w @(disp,pc),Rn */
	r1 += r7;  /* 0C0659D0 add Rm,Rn */
	r3 = r1;  /* 0C0659D2 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0659D4 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C0659D8u, 4);  /* 0C0659D6 mov.b @Rm,Rn */
	r3 += 0x3u;  /* 0C0659D8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0659DCu, 2);  /* 0C0659DA mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C0659DC extu.b Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0659DE extu.b Rm,Rn */
	T = r2 >= r3;  /* 0C0659E0 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C065A00u, 6); goto L_0C065A00; }  /* 0C0659E2 bf */
L_0C0659E4: BLKS(0x0C0659E4u);
	r1 = R32(r7 + 0x24u); UPD(0x0C0659E6u, 1);  /* 0C0659E4 mov.l @(disp,Rm),Rn */
	r3 = 0xFFF7FFFFu; UPD(0x0C0659E8u, 1);  /* 0C0659E6 mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C0659E8 add Rm,Rn */
	r3 = 0x12FFFFEu; UPD(0x0C0659ECu, 2);  /* 0C0659EA mov.l @(disp,pc),Rn */
	T = r1 > r3;  /* 0C0659EC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065A00u, 4); goto L_0C065A00; }  /* 0C0659EE bt */
L_0C0659F0: BLKS(0x0C0659F0u);
	r3 = R32(r7 + 0x28u); UPD(0x0C0659F2u, 1);  /* 0C0659F0 mov.l @(disp,Rm),Rn */
	r1 = R32(r10); UPD(0x0C0659F4u, 1);  /* 0C0659F2 mov.l @Rm,Rn */
	r7 = 0xEFFFFEu; UPD(0x0C0659F6u, 1);  /* 0C0659F4 mov.l @(disp,pc),Rn */
	r3 -= r1;  /* 0C0659F6 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0659F8 add #imm,Rn */
	T = r3 > r7;  /* 0C0659FA cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065A20u, 6); goto L_0C065A20; }  /* 0C0659FC bf */
L_0C0659FE: BLKS(0x0C0659FEu);
	IF(0x0C0659FEu); ;  /* 0C0659FE nop */
	UPD(0x0C065A00u, 1);
L_0C065A00: BLKS(0x0C065A00u);
	r5 = r0;  /* 0C065A00 mov Rm,Rn */
	r5 += 0x1u;  /* 0C065A02 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C065A04 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C065A06 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0659B0u, 7); goto L_0C0659B0; }  /* 0C065A08 bf */
L_0C065A0A: BLKS(0x0C065A0Au);
	r0 = 0xC0u; UPD(0x0C065A0Cu, 1);  /* 0C065A0A mov.w @(disp,pc),Rn */
L_0C065A0C: BLKS(0x0C065A0Cu);
	r15 = r14;  /* 0C065A0C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065A10u, 2);  /* 0C065A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065A12u, 1);  /* 0C065A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065A14u, 1);  /* 0C065A12 mov.l @Rm+,Rn */
	IF(0x0C065A14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065A14 rts */
L_0C065A20: BLKS(0x0C065A20u);
	{ r0 = r5; /* slot mov Rm,Rn */ UPD(0x0C065A0Cu, 3); goto L_0C065A0C; }  /* 0C065A20 bra */
L_0C065A30: BLKS(0x0C065A30u);
	r7 = 0x0u;  /* 0C065A30 mov #imm,Rn */
	{ W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(0x0C0659BCu, 4); goto L_0C0659BC; }  /* 0C065A32 bra */
L_0C065A40: BLKS(0x0C065A40u);
	r9 = 0xC26CD40u; UPD(0x0C065A42u, 1);  /* 0C065A40 mov.l @(disp,pc),Rn */
	{ IF(0x0C065A44u); ; /* slot nop */ UPD(0x0C0659A6u, 3); goto L_0C0659A6; }  /* 0C065A42 bra */
}

/* FUN_0c065a70 */
void f_0C065A70(sh3_t *c)
{
	LOCALS;
L_0C065A70: BLKS(0x0C065A70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065A72u, 1);  /* 0C065A70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065A74u, 1);  /* 0C065A72 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C065A74 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065A78u, 2);  /* 0C065A76 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C065A78 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065A7Cu, 2);  /* 0C065A7A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065A7Eu, 1);  /* 0C065A7C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C065A7E exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065A82u, 2);  /* 0C065A80 mov.l Rm,@-Rn */
	r2 = 0xFF600000u; UPD(0x0C065A84u, 1);  /* 0C065A82 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065A86u, 1);  /* 0C065A84 mov.l Rm,@-Rn */
	r2 += r4;  /* 0C065A86 add Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C065A88 add #imm,Rn */
	IF(0x0C065A8Au); T = (s32)r2 >= 0;  /* 0C065A8A cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065A94u, 6); goto L_0C065A94; } goto L_0C065A90; }  /* 0C065A8C bt/s */
L_0C065A90: BLKS(0x0C065A90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C065BF0u, 4); goto L_0C065BF0; }  /* 0C065A90 bra */
L_0C065A94: BLKS(0x0C065A94u);
	r0 = 0xE00000u; UPD(0x0C065A96u, 1);  /* 0C065A94 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C065A96 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065B62u, 4); goto L_0C065B62; } goto L_0C065A9C; }  /* 0C065A98 bt/s */
L_0C065A9C: BLKS(0x0C065A9Cu);
	r3 = 0xFE000000u; UPD(0x0C065A9Eu, 2);  /* 0C065A9C mov.l @(disp,pc),Rn */
	r2 = r9;  /* 0C065A9E mov Rm,Rn */
	r2 += r3;  /* 0C065AA0 add Rm,Rn */
	IF(0x0C065AA2u); T = (s32)r2 >= 0;  /* 0C065AA2 cmp/pz Rn */
	if (T) { UPD(0x0C065AA8u, 6); goto L_0C065AA8; }  /* 0C065AA4 bt */
L_0C065AA6: BLKS(0x0C065AA6u);
	r2 = 0u - r2;  /* 0C065AA6 neg Rm,Rn */
	UPD(0x0C065AA8u, 1);
L_0C065AA8: BLKS(0x0C065AA8u);
	r0 = 0xC80000u; UPD(0x0C065AAAu, 1);  /* 0C065AA8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C065AAA cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065B62u, 4); goto L_0C065B62; } goto L_0C065AB0; }  /* 0C065AAC bt/s */
L_0C065AB0: BLKS(0x0C065AB0u);
	r6 = 0xC392D80u; UPD(0x0C065AB2u, 2);  /* 0C065AB0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C065AB2 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C065AB6u, 2);  /* 0C065AB4 mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C065AB6 mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C065AB8 extu.b Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C065ABA cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C065B60u, 6); goto L_0C065B60; } UPD(0x0C065AC0u, 1); goto L_0C065AC0; }  /* 0C065ABC bt/s */
L_0C065AC0: BLKS(0x0C065AC0u);
	r7 = 0xFFFFFFF8u;  /* 0C065AC0 mov #imm,Rn */
	r10 = r8;  /* 0C065AC2 mov Rm,Rn */
	IF(0x0C065AC4u); ARG0(0x4A7Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C065AC4 shad Rm,Rn */
	r13 = r3;  /* 0C065AC6 mov Rm,Rn */
	r13 += r9;  /* 0C065AC8 add Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C065ACCu, 6);  /* 0C065ACA mov.l Rm,@(disp,Rn) */
	IF(0x0C065ACCu); ARG0(0x4D7Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C065ACC shad Rm,Rn */
	IF(0x0C065ACEu); ;  /* 0C065ACE nop */
	UPD(0x0C065AD0u, 2);
L_0C065AD0: BLKS(0x0C065AD0u);
	r2 = 0xC39302Cu; UPD(0x0C065AD2u, 1);  /* 0C065AD0 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C065AD2 mov Rm,Rn */
	IF(0x0C065AD4u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C065AD6u, 2);  /* 0C065AD4 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C065AD6 mov #imm,Rn */
	IF(0x0C065AD8u); MACL = r5 * r0;  /* 0C065AD8 mul.l Rm,Rn */
	r12 = 0xC26CAE0u; UPD(0x0C065ADCu, 4);  /* 0C065ADA mov.l @(disp,pc),Rn */
	IF(0x0C065ADCu); r6 = MACL;  /* 0C065ADC sts macl,Rn */
	r6 += r12;  /* 0C065ADE add Rm,Rn */
	r2 = R32(r6); UPD(0x0C065AE2u, 3);  /* 0C065AE0 mov.l @Rm,Rn */
	r3 = 0x40000000u; UPD(0x0C065AE4u, 1);  /* 0C065AE2 mov.l @(disp,pc),Rn */
	T = (r2 & r3) == 0;  /* 0C065AE4 tst Rm,Rn */
	if (T) { UPD(0x0C065B50u, 4); goto L_0C065B50; }  /* 0C065AE6 bt */
L_0C065AE8: BLKS(0x0C065AE8u);
	r7 = 0x20000000u; UPD(0x0C065AEAu, 1);  /* 0C065AE8 mov.l @(disp,pc),Rn */
	T = (r2 & r7) == 0;  /* 0C065AEA tst Rm,Rn */
	{ u32 c_ = T; r6 += 0x42u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C065B50u, 4); goto L_0C065B50; } goto L_0C065AF0; }  /* 0C065AEC bt/s */
L_0C065AF0: BLKS(0x0C065AF0u);
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C065AF2u, 2);  /* 0C065AF0 mov.b @Rm,Rn */
	r12 = r10 & 0xFF;  /* 0C065AF2 extu.b Rm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C065AF4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C065BB0u, 5); goto L_0C065BB0; } goto L_0C065AFA; }  /* 0C065AF6 bf/s */
L_0C065AFA: BLKS(0x0C065AFAu);
	r1 = r11;  /* 0C065AFA mov Rm,Rn */
	r1 -= r10;  /* 0C065AFC sub Rm,Rn */
	r3 = (u32)(s32)(s8)r1;  /* 0C065AFE exts.b Rm,Rn */
	r0 = r3;  /* 0C065B00 mov Rm,Rn */
	r7 = 0xC16D070u; UPD(0x0C065B04u, 6);  /* 0C065B02 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C065B04 add Rm,Rn */
	IF(0x0C065B06u); r2 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C065B08u, 2);  /* 0C065B06 mov.w @(r0,Rm),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C065B0Au, 1);  /* 0C065B08 mov.l @(disp,Rm),Rn */
	IF(0x0C065B0Au); MACL = r7 * r2;  /* 0C065B0A mul.l Rm,Rn */
	r1 = 0x2000000u; UPD(0x0C065B0Eu, 3);  /* 0C065B0C mov.l @(disp,pc),Rn */
	IF(0x0C065B0Eu); r7 = MACL;  /* 0C065B0E sts macl,Rn */
	IF(0x0C065B10u); MACL = r13 * r2;  /* 0C065B10 mul.l Rm,Rn */
	IF(0x0C065B12u); r0 = MACL;  /* 0C065B12 sts macl,Rn */
	r1 += r0;  /* 0C065B14 add Rm,Rn */
	r0 = R32(r6 + 0x8u); UPD(0x0C065B18u, 6);  /* 0C065B16 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C065B18 add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C065B1A swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C065B1C exts.w Rm,Rn */
	r0 -= r3;  /* 0C065B1E sub Rm,Rn */
	r6 = 0xFFFFFFFBu;  /* 0C065B20 mov #imm,Rn */
	IF(0x0C065B22u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C065B22 shad Rm,Rn */
	r7 = 0x4u;  /* 0C065B24 mov #imm,Rn */
	IF(0x0C065B26u); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C065B26 shld Rm,Rn */
	r0 &= 0xFu;  /* 0C065B28 and #imm,r0 */
	r5 += r0;  /* 0C065B2A add Rm,Rn */
	r0 = (r1 >> 16) | (r1 << 16);  /* 0C065B2C swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C065B2E exts.w Rm,Rn */
	r6 = 0xFFFFFEA0u; UPD(0x0C065B32u, 13);  /* 0C065B30 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C065B32 add Rm,Rn */
	r7 += r6;  /* 0C065B34 add Rm,Rn */
	r2 = 0xFFFFFFFBu;  /* 0C065B36 mov #imm,Rn */
	IF(0x0C065B38u); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C065B38 shad Rm,Rn */
	r3 = 0x4u;  /* 0C065B3A mov #imm,Rn */
	r0 = 0xFu;  /* 0C065B3C mov #imm,Rn */
	IF(0x0C065B3Eu); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C065B3E shld Rm,Rn */
	r7 &= r0;  /* 0C065B40 and Rm,Rn */
	r5 += r7;  /* 0C065B42 add Rm,Rn */
	r0 = 0xC393084u; UPD(0x0C065B46u, 10);  /* 0C065B44 mov.l @(disp,pc),Rn */
	IF(0x0C065B46u); r5 <<= 2;  /* 0C065B46 shll2 Rn */
	IF(0x0C065B48u); r6 = R32(r0 + r5); UPD(0x0C065B4Au, 2);  /* 0C065B48 mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C065B4A tst Rm,Rn */
	if (!T) { UPD(0x0C065B80u, 4); goto L_0C065B80; }  /* 0C065B4C bf */
L_0C065B4E: BLKS(0x0C065B4Eu);
	IF(0x0C065B4Eu); ; UPD(0x0C065B50u, 1);  /* 0C065B4E nop */
L_0C065B50: BLKS(0x0C065B50u);
	r12 = 0xC392D80u; UPD(0x0C065B52u, 1);  /* 0C065B50 mov.l @(disp,pc),Rn */
	r3 = r4;  /* 0C065B52 mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C065B56u, 2);  /* 0C065B54 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C065B56 add #imm,Rn */
	r4 = (u32)(s32)(s8)r3;  /* 0C065B58 exts.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C065B5A extu.b Rm,Rn */
	T = (s32)r4 >= (s32)r5;  /* 0C065B5C cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C065AD0u, 7); goto L_0C065AD0; }  /* 0C065B5E bf */
L_0C065B60: BLKS(0x0C065B60u);
	r0 = 0x0u;  /* 0C065B60 mov #imm,Rn */
	UPD(0x0C065B62u, 1);
L_0C065B62: BLKS(0x0C065B62u);
	r14 += 0x8u;  /* 0C065B62 add #imm,Rn */
	r15 = r14;  /* 0C065B64 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065B68u, 3);  /* 0C065B66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C065B6Au, 1);  /* 0C065B68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065B6Cu, 1);  /* 0C065B6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065B6Eu, 1);  /* 0C065B6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065B70u, 1);  /* 0C065B6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065B72u, 1);  /* 0C065B70 mov.l @Rm+,Rn */
	IF(0x0C065B72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065B72 rts */
L_0C065B80: BLKS(0x0C065B80u);
	r4 = R32(r14); UPD(0x0C065B82u, 1);  /* 0C065B80 mov.l @Rm,Rn */
	T = (s32)r4 >= (s32)r12;  /* 0C065B82 cmp/ge Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C065B8Eu, 4); goto L_0C065B8E; } UPD(0x0C065B88u, 1); goto L_0C065B88; }  /* 0C065B84 bt/s */
L_0C065B88: BLKS(0x0C065B88u);
	r8 = (u32)(s32)(s8)r10;  /* 0C065B88 exts.b Rm,Rn */
	W32(r14, r8); UPD(0x0C065B8Cu, 2);  /* 0C065B8A mov.l Rm,@Rn */
	r5 = R32(r14); UPD(0x0C065B8Eu, 1);  /* 0C065B8C mov.l @Rm,Rn */
L_0C065B8E: BLKS(0x0C065B8Eu);
	r13 = 0xFFFFFFFFu;  /* 0C065B8E mov #imm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C065B90 cmp/gt Rm,Rn */
	r0 = R32(r14); UPD(0x0C065B94u, 3);  /* 0C065B92 mov.l @Rm,Rn */
	IF(0x0C065B94u); r11 = T;  /* 0C065B94 movt Rn */
	T = (r0 & r0) == 0;  /* 0C065B96 tst Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C065B98 negc Rm,Rn */
	r9 &= r11;  /* 0C065B9A and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C065B9C tst Rm,Rn */
	if (T) { UPD(0x0C065B62u, 8); goto L_0C065B62; }  /* 0C065B9E bt */
L_0C065BA0: BLKS(0x0C065BA0u);
	r12 = r0;  /* 0C065BA0 mov Rm,Rn */
	r12 += 0x1u;  /* 0C065BA2 add #imm,Rn */
	r10 = (u32)(s32)(s8)r12;  /* 0C065BA4 exts.b Rm,Rn */
	W32(r14, r10); UPD(0x0C065BA8u, 4);  /* 0C065BA6 mov.l Rm,@Rn */
L_0C065BA8: BLKS(0x0C065BA8u);
	{ r0 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C065B62u, 3); goto L_0C065B62; }  /* 0C065BA8 bra */
L_0C065BB0: BLKS(0x0C065BB0u);
	r0 = R32(r6 + 0x8u); UPD(0x0C065BB2u, 1);  /* 0C065BB0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFEBu;  /* 0C065BB2 mov #imm,Rn */
	r0 += r8;  /* 0C065BB4 add Rm,Rn */
	r6 = 0x4u;  /* 0C065BB6 mov #imm,Rn */
	IF(0x0C065BB8u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C065BB8 shad Rm,Rn */
	IF(0x0C065BBAu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C065BBA shld Rm,Rn */
	r0 &= 0xFu;  /* 0C065BBC and #imm,r0 */
	r5 += r0;  /* 0C065BBE add Rm,Rn */
	r0 = 0xFEA00000u; UPD(0x0C065BC2u, 8);  /* 0C065BC0 mov.l @(disp,pc),Rn */
	IF(0x0C065BC2u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C065BC2 shld Rm,Rn */
	r0 += r9;  /* 0C065BC4 add Rm,Rn */
	IF(0x0C065BC6u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C065BC6 shad Rm,Rn */
	r0 &= 0xFu;  /* 0C065BC8 and #imm,r0 */
	r5 += r0;  /* 0C065BCA add Rm,Rn */
	r0 = 0xC393084u; UPD(0x0C065BCEu, 6);  /* 0C065BCC mov.l @(disp,pc),Rn */
	IF(0x0C065BCEu); r5 <<= 2;  /* 0C065BCE shll2 Rn */
	IF(0x0C065BD0u); r3 = R32(r0 + r5); UPD(0x0C065BD2u, 2);  /* 0C065BD0 mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C065BD2 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C065B50u, 4); goto L_0C065B50; } UPD(0x0C065BD8u, 1); goto L_0C065BD8; }  /* 0C065BD4 bt/s */
L_0C065BD8: BLKS(0x0C065BD8u);
	T = (s32)r0 >= (s32)r12;  /* 0C065BD8 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C065B62u, 4); goto L_0C065B62; }  /* 0C065BDA bt */
L_0C065BDC: BLKS(0x0C065BDCu);
	r7 = (u32)(s32)(s8)r10;  /* 0C065BDC exts.b Rm,Rn */
	{ W32(r14, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C065BA8u, 4); goto L_0C065BA8; }  /* 0C065BDE bra */
L_0C065BF0: BLKS(0x0C065BF0u);
	{ IF(0x0C065BF2u); ; /* slot nop */ UPD(0x0C065A94u, 3); goto L_0C065A94; }  /* 0C065BF0 bra */
}

/* FUN_0c065c30 */
void f_0C065C30(sh3_t *c)
{
	LOCALS;
L_0C065C30: BLKS(0x0C065C30u);
	r0 = 0x9C0u; UPD(0x0C065C32u, 1);  /* 0C065C30 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C065C32 exts.w Rm,Rn */
	IF(0x0C065C34u); MACL = r4 * r0;  /* 0C065C34 mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C065C36 exts.w Rm,Rn */
	r2 = 0x34u;  /* 0C065C38 mov #imm,Rn */
	IF(0x0C065C3Au); r0 = MACL;  /* 0C065C3A sts macl,Rn */
	IF(0x0C065C3Cu); MACL = r6 * r2;  /* 0C065C3C mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C065C3E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065C42u, 10);  /* 0C065C40 mov.l Rm,@-Rn */
	IF(0x0C065C42u); r2 = MACL;  /* 0C065C42 sts macl,Rn */
	r0 += r2;  /* 0C065C44 add Rm,Rn */
	r2 = 0x340u; UPD(0x0C065C48u, 3);  /* 0C065C46 mov.w @(disp,pc),Rn */
	IF(0x0C065C48u); MACL = r5 * r2;  /* 0C065C48 mul.l Rm,Rn */
	r3 = 0xC21F8A0u; UPD(0x0C065C4Cu, 3);  /* 0C065C4A mov.l @(disp,pc),Rn */
	IF(0x0C065C4Cu); r2 = MACL;  /* 0C065C4C sts macl,Rn */
	IF(0x0C065C4Eu); r15 -= 4; W32(r15, PR); UPD(0x0C065C50u, 2);  /* 0C065C4E sts.l pr,@-Rn */
	r0 += r2;  /* 0C065C50 add Rm,Rn */
	r3 += r0;  /* 0C065C52 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C065C56u, 3);  /* 0C065C54 mov.l @(disp,Rm),Rn */
	r3 = 0xC16BF18u; UPD(0x0C065C58u, 1);  /* 0C065C56 mov.l @(disp,pc),Rn */
	IF(0x0C065C58u); r0 <<= 2;  /* 0C065C58 shll2 Rn */
	IF(0x0C065C5Au); r2 = R32(r0 + r3); UPD(0x0C065C5Cu, 2);  /* 0C065C5A mov.l @(r0,Rm),Rn */
	IF(0x0C065C5Cu); { u32 t_ = r2; PR = 0x0C065C60u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C065C60u); }  /* 0C065C5C jsr @Rn */
L_0C065C60: BLKS(0x0C065C60u);
	r15 = r14;  /* 0C065C60 mov Rm,Rn */
	IF(0x0C065C62u); PR = R32(r15); r15 += 4; UPD(0x0C065C64u, 2);  /* 0C065C62 lds.l @Rn+,pr */
	IF(0x0C065C64u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065C64 rts */
}

void f_0C065C80(sh3_t *c)
{
	LOCALS;
L_0C065C80: BLKS(0x0C065C80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065C82u, 1);  /* 0C065C80 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C065C82 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065C86u, 2);  /* 0C065C84 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065C88u, 1);  /* 0C065C86 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065C8Au, 1);  /* 0C065C88 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065C8Cu, 1);  /* 0C065C8A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C065C8C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065C90u, 2);  /* 0C065C8E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C065C90 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065C94u, 2);  /* 0C065C92 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C065C94 mov Rm,Rn */
	IF(0x0C065C96u); r15 -= 4; W32(r15, PR); UPD(0x0C065C98u, 2);  /* 0C065C96 sts.l pr,@-Rn */
	r2 = 0x9C0u; UPD(0x0C065C9Au, 1);  /* 0C065C98 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C065C9A add #imm,Rn */
	r14 = r15;  /* 0C065C9C mov Rm,Rn */
	IF(0x0C065C9Eu); MACL = r11 * r2;  /* 0C065C9E mul.l Rm,Rn */
	W32(r14, r3); UPD(0x0C065CA2u, 5);  /* 0C065CA0 mov.l Rm,@Rn */
	r0 = 0x340u; UPD(0x0C065CA4u, 1);  /* 0C065CA2 mov.w @(disp,pc),Rn */
	IF(0x0C065CA4u); r8 = MACL;  /* 0C065CA4 sts macl,Rn */
	r1 = R32(r14); UPD(0x0C065CA8u, 2);  /* 0C065CA6 mov.l @Rm,Rn */
	r3 = r8;  /* 0C065CA8 mov Rm,Rn */
	IF(0x0C065CAAu); MACL = r1 * r0;  /* 0C065CAA mul.l Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C065CAEu, 4);  /* 0C065CAC mov.l @(disp,pc),Rn */
	IF(0x0C065CAEu); r6 = MACL;  /* 0C065CAE sts macl,Rn */
	r0 = 0x34u;  /* 0C065CB0 mov #imm,Rn */
	IF(0x0C065CB2u); MACL = r12 * r0;  /* 0C065CB2 mul.l Rm,Rn */
	r3 += r6;  /* 0C065CB4 add Rm,Rn */
	r10 = 0x800000u; UPD(0x0C065CB8u, 6);  /* 0C065CB6 mov.l @(disp,pc),Rn */
	IF(0x0C065CB8u); r7 = MACL;  /* 0C065CB8 sts macl,Rn */
	r3 += r7;  /* 0C065CBA add Rm,Rn */
	r3 += r5;  /* 0C065CBC add Rm,Rn */
	r2 = R32(r3); UPD(0x0C065CC0u, 4);  /* 0C065CBE mov.l @Rm,Rn */
	r10 &= r2;  /* 0C065CC0 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C065CC2 tst Rm,Rn */
	if (T) { UPD(0x0C065CE0u, 5); goto L_0C065CE0; }  /* 0C065CC4 bt */
L_0C065CC6: BLKS(0x0C065CC6u);
	r14 += 0x4u;  /* 0C065CC6 add #imm,Rn */
	r15 = r14;  /* 0C065CC8 mov Rm,Rn */
	IF(0x0C065CCAu); PR = R32(r15); r15 += 4; UPD(0x0C065CCCu, 3);  /* 0C065CCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065CCEu, 1);  /* 0C065CCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C065CD0u, 1);  /* 0C065CCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065CD2u, 1);  /* 0C065CD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065CD4u, 1);  /* 0C065CD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065CD6u, 1);  /* 0C065CD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065CD8u, 1);  /* 0C065CD6 mov.l @Rm+,Rn */
	IF(0x0C065CD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065CD8 rts */
L_0C065CE0: BLKS(0x0C065CE0u);
	r9 = 0xF7FFFFFFu; UPD(0x0C065CE2u, 1);  /* 0C065CE0 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C065CE2 mov #imm,Rn */
	r2 &= r9;  /* 0C065CE4 and Rm,Rn */
	r9 = r8;  /* 0C065CE6 mov Rm,Rn */
	r9 += r7;  /* 0C065CE8 add Rm,Rn */
	r9 += r6;  /* 0C065CEA add Rm,Rn */
	r9 += r5;  /* 0C065CEC add Rm,Rn */
	r8 = R32(r9 + 0x8u); UPD(0x0C065CF0u, 7);  /* 0C065CEE mov.l @(disp,Rm),Rn */
	r7 = 0xC050D70u; UPD(0x0C065CF2u, 1);  /* 0C065CF0 mov.l @(disp,pc),Rn */
	IF(0x0C065CF2u); r8 <<= 2;  /* 0C065CF2 shll2 Rn */
	r0 = 0xC16D3B4u; UPD(0x0C065CF6u, 2);  /* 0C065CF4 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C065CF8u, 1);  /* 0C065CF6 mov.l Rm,@Rn */
	r8 += r0;  /* 0C065CF8 add Rm,Rn */
	IF(0x0C065CFAu); { u32 t_ = r7; PR = 0x0C065CFEu; W32(r9 + 0x4u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C065CFEu); }  /* 0C065CFA jsr @Rn */
L_0C065CFE: BLKS(0x0C065CFEu);
	r6 = R32(r8); UPD(0x0C065D00u, 1);  /* 0C065CFE mov.l @Rm,Rn */
	r5 = r9;  /* 0C065D00 mov Rm,Rn */
	r6 += r0;  /* 0C065D02 add Rm,Rn */
	r5 += 0x30u;  /* 0C065D04 add #imm,Rn */
	r4 = 0x20000000u; UPD(0x0C065D08u, 4);  /* 0C065D06 mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r6); UPD(0x0C065D0Au, 1);  /* 0C065D08 mov.l Rm,@(disp,Rn) */
	T = (r13 & r4) == 0;  /* 0C065D0A tst Rm,Rn */
	W32(r9 + 0xCu, r10); UPD(0x0C065D0Eu, 2);  /* 0C065D0C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r5, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C065D60u, 3); goto L_0C065D60; } UPD(0x0C065D12u, 1); goto L_0C065D12; }  /* 0C065D0E bf/s */
L_0C065D12: BLKS(0x0C065D12u);
	r8 = 0xC0AFE40u; UPD(0x0C065D14u, 1);  /* 0C065D12 mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C065D14 mov Rm,Rn */
	IF(0x0C065D16u); { u32 t_ = r8; PR = 0x0C065D1Au; r13 += 0x2Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C065D1Au); }  /* 0C065D16 jsr @Rn */
L_0C065D1A: BLKS(0x0C065D1Au);
	r10 = (u32)(s32)(s16)R16(r13); UPD(0x0C065D1Cu, 1);  /* 0C065D1A mov.w @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C065D1C and #imm,r0 */
	r8 = 0xC050D70u; UPD(0x0C065D20u, 2);  /* 0C065D1E mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C065D20 add Rm,Rn */
	r0 += 0xFFFFFFC0u;  /* 0C065D22 add #imm,Rn */
	r4 = R32(r9 + 0x20u); UPD(0x0C065D26u, 3);  /* 0C065D24 mov.l @(disp,Rm),Rn */
	IF(0x0C065D26u); { u32 t_ = r8; PR = 0x0C065D2Au; r10 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C065D2Au); }  /* 0C065D26 jsr @Rn */
L_0C065D2A: BLKS(0x0C065D2Au);
	r9 = R32(r9 + 0x20u); UPD(0x0C065D2Cu, 1);  /* 0C065D2A mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C065D2C add Rm,Rn */
	UPD(0x0C065D2Eu, 1);
L_0C065D2E: BLKS(0x0C065D2Eu);
	r4 = 0x9C0u; UPD(0x0C065D30u, 1);  /* 0C065D2E mov.w @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C065D30 mov #imm,Rn */
	IF(0x0C065D32u); MACL = r11 * r4;  /* 0C065D32 mul.l Rm,Rn */
	r1 = R32(r14); UPD(0x0C065D36u, 4);  /* 0C065D34 mov.l @Rm,Rn */
	r5 = r9;  /* 0C065D36 mov Rm,Rn */
	IF(0x0C065D38u); r11 = MACL;  /* 0C065D38 sts macl,Rn */
	IF(0x0C065D3Au); MACL = r12 * r3;  /* 0C065D3A mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C065D3Eu, 5);  /* 0C065D3C mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C065D3E mov Rm,Rn */
	IF(0x0C065D40u); r2 = MACL;  /* 0C065D40 sts macl,Rn */
	IF(0x0C065D42u); MACL = r1 * r0;  /* 0C065D42 mul.l Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C065D46u, 5);  /* 0C065D44 mov.l @(disp,pc),Rn */
	r11 += r2;  /* 0C065D46 add Rm,Rn */
	IF(0x0C065D48u); r7 = MACL;  /* 0C065D48 sts macl,Rn */
	r6 = 0xC21F8A0u; UPD(0x0C065D4Cu, 3);  /* 0C065D4A mov.l @(disp,pc),Rn */
	r11 += r7;  /* 0C065D4C add Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C065D50u, 2);  /* 0C065D4E mov.l @(disp,pc),Rn */
	IF(0x0C065D50u); { u32 t_ = r8; PR = 0x0C065D54u; r11 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C065D54u); }  /* 0C065D50 jsr @Rn */
L_0C065D54: BLKS(0x0C065D54u);
	W32(r11 + 0x18u, r0); UPD(0x0C065D56u, 1);  /* 0C065D54 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C065D56 mov Rm,Rn */
	IF(0x0C065D58u); { u32 t_ = r12; PR = 0x0C065D5Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C065D5Cu); }  /* 0C065D58 jsr @Rn */
L_0C065D5C: BLKS(0x0C065D5Cu);
	{ W32(r11 + 0x1Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C065CC6u, 3); goto L_0C065CC6; }  /* 0C065D5C bra */
L_0C065D60: BLKS(0x0C065D60u);
	r13 = 0xC0AFE40u; UPD(0x0C065D62u, 1);  /* 0C065D60 mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C065D62 mov Rm,Rn */
	IF(0x0C065D64u); { u32 t_ = r13; PR = 0x0C065D68u; r10 += 0x2Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C065D68u); }  /* 0C065D64 jsr @Rn */
L_0C065D68: BLKS(0x0C065D68u);
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C065D6Au, 1);  /* 0C065D68 mov.w @Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C065D6A extu.b Rm,Rn */
	r4 = 0x80u; UPD(0x0C065D6Eu, 2);  /* 0C065D6C mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C065D6E add Rm,Rn */
	r2 = 0xC050D70u; UPD(0x0C065D72u, 2);  /* 0C065D70 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C065D72 add Rm,Rn */
	r4 = R32(r9 + 0x20u); UPD(0x0C065D76u, 2);  /* 0C065D74 mov.l @(disp,Rm),Rn */
	IF(0x0C065D76u); { u32 t_ = r2; PR = 0x0C065D7Au; r10 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C065D7Au); }  /* 0C065D76 jsr @Rn */
L_0C065D7A: BLKS(0x0C065D7Au);
	r9 = R32(r9 + 0x20u); UPD(0x0C065D7Cu, 1);  /* 0C065D7A mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C065D7C add Rm,Rn */
	{ IF(0x0C065D80u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(0x0C065D2Eu, 4); goto L_0C065D2E; }  /* 0C065D7E bra */
}

void f_0C065DB0(sh3_t *c)
{
	LOCALS;
L_0C065DB0: BLKS(0x0C065DB0u);
	r0 = 0x9C0u; UPD(0x0C065DB2u, 1);  /* 0C065DB0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C065DB2 exts.w Rm,Rn */
	IF(0x0C065DB4u); MACL = r4 * r0;  /* 0C065DB4 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C065DB6 exts.w Rm,Rn */
	r2 = 0x34u;  /* 0C065DB8 mov #imm,Rn */
	IF(0x0C065DBAu); r0 = MACL;  /* 0C065DBA sts macl,Rn */
	IF(0x0C065DBCu); MACL = r3 * r2;  /* 0C065DBC mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C065DBE exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065DC2u, 10);  /* 0C065DC0 mov.l Rm,@-Rn */
	IF(0x0C065DC2u); r3 = MACL;  /* 0C065DC2 sts macl,Rn */
	r2 = 0x340u; UPD(0x0C065DC6u, 2);  /* 0C065DC4 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C065DC6 mov Rm,Rn */
	IF(0x0C065DC8u); MACL = r5 * r2;  /* 0C065DC8 mul.l Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C065DCCu, 4);  /* 0C065DCA mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C065DCC add Rm,Rn */
	IF(0x0C065DCEu); r2 = MACL;  /* 0C065DCE sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065DD2u, 3);  /* 0C065DD0 mov.l Rm,@-Rn */
	r7 += r2;  /* 0C065DD2 add Rm,Rn */
	r7 += r8;  /* 0C065DD4 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C065DD8u, 3);  /* 0C065DD6 mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C065DD8 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065DF0u, 4); goto L_0C065DF0; } goto L_0C065DDE; }  /* 0C065DDA bt/s */
L_0C065DDE: BLKS(0x0C065DDEu);
	r15 = r14;  /* 0C065DDE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065DE2u, 3);  /* 0C065DE0 mov.l @Rm+,Rn */
	IF(0x0C065DE2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065DE2 rts */
L_0C065DF0: BLKS(0x0C065DF0u);
	r5 = r0;  /* 0C065DF0 mov Rm,Rn */
	r5 += r2;  /* 0C065DF2 add Rm,Rn */
	r5 += r3;  /* 0C065DF4 add Rm,Rn */
	r5 += r8;  /* 0C065DF6 add Rm,Rn */
	r8 = 0x5u;  /* 0C065DF8 mov #imm,Rn */
	r1 = R32(r5); UPD(0x0C065DFCu, 6);  /* 0C065DFA mov.l @Rm,Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C065DFEu, 1);  /* 0C065DFC mov.l Rm,@(disp,Rn) */
	r2 = 0x800000u; UPD(0x0C065E00u, 1);  /* 0C065DFE mov.l @(disp,pc),Rn */
	W32(r7 + 0x8u, r8); UPD(0x0C065E02u, 1);  /* 0C065E00 mov.l Rm,@(disp,Rn) */
	r1 |= r2;  /* 0C065E02 or Rm,Rn */
	r7 += 0x30u;  /* 0C065E04 add #imm,Rn */
	W8(r7, r6); UPD(0x0C065E08u, 3);  /* 0C065E06 mov.b Rm,@Rn */
	W32(r5, r1); UPD(0x0C065E0Au, 1);  /* 0C065E08 mov.l Rm,@Rn */
	r7 += 0xFFFFFFD0u;  /* 0C065E0A add #imm,Rn */
	r5 = 0x204B0B0u; UPD(0x0C065E0Eu, 2);  /* 0C065E0C mov.l @(disp,pc),Rn */
	W32(r7 + 0x1Cu, r6); UPD(0x0C065E10u, 1);  /* 0C065E0E mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x18u, r6); UPD(0x0C065E12u, 1);  /* 0C065E10 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x24u, r5); UPD(0x0C065E14u, 1);  /* 0C065E12 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0AFBA0u; UPD(0x0C065E16u, 1);  /* 0C065E14 mov.l @(disp,pc),Rn */
	r5 = 0x57u;  /* 0C065E16 mov #imm,Rn */
	r15 = r14;  /* 0C065E18 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065E1Cu, 3);  /* 0C065E1A mov.l @Rm+,Rn */
	IF(0x0C065E1Cu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C065E1C jmp @Rn */
}

void f_0C065E40(sh3_t *c)
{
	LOCALS;
L_0C065E40: BLKS(0x0C065E40u);
	r0 = 0x9C0u; UPD(0x0C065E42u, 1);  /* 0C065E40 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C065E42 exts.w Rm,Rn */
	IF(0x0C065E44u); MACL = r1 * r0;  /* 0C065E44 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C065E46 exts.w Rm,Rn */
	r3 = 0x34u;  /* 0C065E48 mov #imm,Rn */
	IF(0x0C065E4Au); r0 = MACL;  /* 0C065E4A sts macl,Rn */
	IF(0x0C065E4Cu); MACL = r2 * r3;  /* 0C065E4C mul.l Rm,Rn */
	r6 = 0x340u; UPD(0x0C065E50u, 9);  /* 0C065E4E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C065E50 exts.w Rm,Rn */
	IF(0x0C065E52u); r2 = MACL;  /* 0C065E52 sts macl,Rn */
	IF(0x0C065E54u); MACL = r7 * r6;  /* 0C065E54 mul.l Rm,Rn */
	r0 += r2;  /* 0C065E56 add Rm,Rn */
	r3 = 0xC21F8A0u; UPD(0x0C065E5Au, 6);  /* 0C065E58 mov.l @(disp,pc),Rn */
	IF(0x0C065E5Au); r4 = MACL;  /* 0C065E5A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065E5Eu, 2);  /* 0C065E5C mov.l Rm,@-Rn */
	r0 += r4;  /* 0C065E5E add Rm,Rn */
	r0 += r3;  /* 0C065E60 add Rm,Rn */
	r2 = 0x0u;  /* 0C065E62 mov #imm,Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C065E66u, 4);  /* 0C065E64 mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C065E66 mov Rm,Rn */
	W32(r0 + 0x18u, r2); UPD(0x0C065E6Au, 2);  /* 0C065E68 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C065E6A mov Rm,Rn */
	IF(0x0C065E6Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C065E6C rts */
}

/* FUN_0c065fa0 */
void f_0C065FA0(sh3_t *c)
{
	LOCALS;
L_0C065FA0: BLKS(0x0C065FA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065FA2u, 1);  /* 0C065FA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065FA4u, 1);  /* 0C065FA2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C065FA4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065FA8u, 2);  /* 0C065FA6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C065FA8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065FACu, 2);  /* 0C065FAA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065FAEu, 1);  /* 0C065FAC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065FB0u, 1);  /* 0C065FAE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065FB2u, 1);  /* 0C065FB0 mov.l Rm,@-Rn */
	r10 = 0xC283794u; UPD(0x0C065FB4u, 1);  /* 0C065FB2 mov.l @(disp,pc),Rn */
	IF(0x0C065FB4u); r15 -= 4; W32(r15, PR); UPD(0x0C065FB6u, 1);  /* 0C065FB4 sts.l pr,@-Rn */
	r13 = 0xC2175E8u; UPD(0x0C065FB8u, 1);  /* 0C065FB6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C065FB8 mov Rm,Rn */
	r12 = 0xC393044u; UPD(0x0C065FBCu, 2);  /* 0C065FBA mov.l @(disp,pc),Rn */
	r11 = 0xC062A70u; UPD(0x0C065FBEu, 1);  /* 0C065FBC mov.l @(disp,pc),Rn */
	IF(0x0C065FBEu); ;  /* 0C065FBE nop */
	UPD(0x0C065FC0u, 1);
L_0C065FC0: BLKS(0x0C065FC0u);
	r3 = r8;  /* 0C065FC0 mov Rm,Rn */
	r3 += r10;  /* 0C065FC2 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C065FC6u, 3);  /* 0C065FC4 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C065FC8u, 1);  /* 0C065FC6 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C065FC8 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066000u, 4); goto L_0C066000; } UPD(0x0C065FCEu, 1); goto L_0C065FCE; }  /* 0C065FCA bf/s */
L_0C065FCE: BLKS(0x0C065FCEu);
	r6 = r9;  /* 0C065FCE mov Rm,Rn */
	r9 = 0x280u; UPD(0x0C065FD2u, 2);  /* 0C065FD0 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C065FD2 add #imm,Rn */
	r8 += r9;  /* 0C065FD4 add Rm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C065FD6 exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C065FD8 mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C065FDA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C065FC0u, 8); goto L_0C065FC0; }  /* 0C065FDC bf */
L_0C065FDE: BLKS(0x0C065FDEu);
	r15 = r14;  /* 0C065FDE mov Rm,Rn */
	IF(0x0C065FE0u); PR = R32(r15); r15 += 4; UPD(0x0C065FE2u, 2);  /* 0C065FE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065FE4u, 1);  /* 0C065FE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C065FE6u, 1);  /* 0C065FE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065FE8u, 1);  /* 0C065FE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065FEAu, 1);  /* 0C065FE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065FECu, 1);  /* 0C065FEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065FEEu, 1);  /* 0C065FEC mov.l @Rm+,Rn */
	IF(0x0C065FEEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065FEE rts */
L_0C066000: BLKS(0x0C066000u);
	r4 = R32(r3 + 0x4u); UPD(0x0C066002u, 1);  /* 0C066000 mov.l @(disp,Rm),Rn */
	IF(0x0C066002u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C066002 shld Rm,Rn */
	r1 = 0xC16BE68u; UPD(0x0C066006u, 2);  /* 0C066004 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C066006 mov #imm,Rn */
	r4 += r1;  /* 0C066008 add Rm,Rn */
	r0 = R32(r4 + 0x4u); UPD(0x0C06600Cu, 3);  /* 0C06600A mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C06600C mov #imm,Rn */
	W32(r12, r0); UPD(0x0C066010u, 2);  /* 0C06600E mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C066010 add #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C066014u, 2);  /* 0C066012 mov.l @(disp,Rm),Rn */
	r7 = R32(r4); UPD(0x0C066016u, 1);  /* 0C066014 mov.l @Rm,Rn */
	IF(0x0C066016u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C066016 shld Rm,Rn */
	IF(0x0C066018u); r5 = R32(r0 + r7); UPD(0x0C06601Au, 2);  /* 0C066018 mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C06601Cu, 1);  /* 0C06601A mov.l @(disp,Rm),Rn */
	IF(0x0C06601Cu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06601C shld Rm,Rn */
	IF(0x0C06601Eu); r4 = R32(r0 + r5); UPD(0x0C066020u, 2);  /* 0C06601E mov.l @(r0,Rm),Rn */
	r0 = 0x0u;  /* 0C066020 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C066024u, 2);  /* 0C066022 mov.l Rm,@Rn */
	W32(r13, r4); UPD(0x0C066026u, 1);  /* 0C066024 mov.l Rm,@Rn */
	r0 = 0x27Cu; UPD(0x0C066028u, 1);  /* 0C066026 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C066028 mov #imm,Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C06602Cu, 2);  /* 0C06602A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C06602Eu, 1);  /* 0C06602C mov.l @(disp,Rm),Rn */
	IF(0x0C06602Eu); { u32 t_ = r11; PR = 0x0C066032u; IF(0x0C066030u); r7 = R32(r0 + r3); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C066032u); }  /* 0C06602E jsr @Rn */
L_0C066032: BLKS(0x0C066032u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C065FCEu, 3); goto L_0C065FCE; }  /* 0C066032 bra */
}

/* FUN_0c066060 */
void f_0C066060(sh3_t *c)
{
	LOCALS;
L_0C066060: BLKS(0x0C066060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066062u, 1);  /* 0C066060 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066064u, 1);  /* 0C066062 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066066u, 1);  /* 0C066064 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C066066 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06606Au, 2);  /* 0C066068 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06606A mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06606Eu, 2);  /* 0C06606C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066070u, 1);  /* 0C06606E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066072u, 1);  /* 0C066070 mov.l Rm,@-Rn */
	r11 = 0xC283794u; UPD(0x0C066074u, 1);  /* 0C066072 mov.l @(disp,pc),Rn */
	IF(0x0C066074u); r15 -= 4; W32(r15, PR); UPD(0x0C066076u, 1);  /* 0C066074 sts.l pr,@-Rn */
	r12 = 0xC065A70u; UPD(0x0C066078u, 1);  /* 0C066076 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C066078 mov Rm,Rn */
	r13 = 0xC21F840u; UPD(0x0C06607Cu, 2);  /* 0C06607A mov.l @(disp,pc),Rn */
L_0C06607C: BLKS(0x0C06607Cu);
	r3 = r9;  /* 0C06607C mov Rm,Rn */
	r3 += r11;  /* 0C06607E add Rm,Rn */
	r1 = R32(r3); UPD(0x0C066082u, 3);  /* 0C066080 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C066084u, 1);  /* 0C066082 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C066084 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0660B0u, 4); goto L_0C0660B0; } UPD(0x0C06608Au, 1); goto L_0C06608A; }  /* 0C066086 bf/s */
L_0C06608A: BLKS(0x0C06608Au);
	r5 = r10;  /* 0C06608A mov Rm,Rn */
	r5 += 0x1u;  /* 0C06608C add #imm,Rn */
	r6 = 0x280u; UPD(0x0C066090u, 3);  /* 0C06608E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C066090 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C066092 mov #imm,Rn */
	T = (s32)r10 > (s32)r4;  /* 0C066094 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06607Cu, 6); goto L_0C06607C; } goto L_0C06609A; }  /* 0C066096 bf/s */
L_0C06609A: BLKS(0x0C06609Au);
	r15 = r14;  /* 0C06609A mov Rm,Rn */
	IF(0x0C06609Cu); PR = R32(r15); r15 += 4; UPD(0x0C06609Eu, 3);  /* 0C06609C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0660A0u, 1);  /* 0C06609E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0660A2u, 1);  /* 0C0660A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0660A4u, 1);  /* 0C0660A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0660A6u, 1);  /* 0C0660A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0660A8u, 1);  /* 0C0660A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0660AAu, 1);  /* 0C0660A8 mov.l @Rm+,Rn */
	IF(0x0C0660AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0660AA rts */
L_0C0660B0: BLKS(0x0C0660B0u);
	r8 = 0x26Cu; UPD(0x0C0660B2u, 1);  /* 0C0660B0 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0660B2 add Rm,Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C0660B6u, 2);  /* 0C0660B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0660B6u); { u32 t_ = r12; PR = 0x0C0660BAu; r5 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065A70, 0x0C065A70u, 0x0C0660BAu); }  /* 0C0660B6 jsr @Rn */
L_0C0660BA: BLKS(0x0C0660BAu);
	r2 = r0 & 0xFF;  /* 0C0660BA extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0660BC tst Rm,Rn */
	{ u32 c_ = T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06608Au, 5); goto L_0C06608A; } UPD(0x0C0660C2u, 1); goto L_0C0660C2; }  /* 0C0660BE bt/s */
L_0C0660C2: BLKS(0x0C0660C2u);
	r3 = 0x1Fu;  /* 0C0660C2 mov #imm,Rn */
	r3 &= r0;  /* 0C0660C4 and Rm,Rn */
	r3 += r3;  /* 0C0660C6 add Rm,Rn */
	r3 += r13;  /* 0C0660C8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0660CCu, 5);  /* 0C0660CA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0660CC add #imm,Rn */
	{ W16(r3, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C06608Au, 4); goto L_0C06608A; }  /* 0C0660CE bra */
}

void f_0C0660F0(sh3_t *c)
{
	LOCALS;
L_0C0660F0: BLKS(0x0C0660F0u);
	r2 = 0x280u; UPD(0x0C0660F2u, 1);  /* 0C0660F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0660F2 exts.w Rm,Rn */
	IF(0x0C0660F4u); MACL = r4 * r2;  /* 0C0660F4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0660F8u, 4);  /* 0C0660F6 mov.l Rm,@-Rn */
	r5 = 0xC283794u; UPD(0x0C0660FAu, 1);  /* 0C0660F8 mov.l @(disp,pc),Rn */
	IF(0x0C0660FAu); r0 = MACL;  /* 0C0660FA sts macl,Rn */
	IF(0x0C0660FCu); r15 -= 4; W32(r15, PR); UPD(0x0C0660FEu, 2);  /* 0C0660FC sts.l pr,@-Rn */
	r5 += r0;  /* 0C0660FE add Rm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C066102u, 2);  /* 0C066100 mov.l @(disp,Rm),Rn */
	r3 = 0xC16D130u; UPD(0x0C066104u, 1);  /* 0C066102 mov.l @(disp,pc),Rn */
	IF(0x0C066104u); r0 <<= 2;  /* 0C066104 shll2 Rn */
	IF(0x0C066106u); r2 = R32(r0 + r3); UPD(0x0C066108u, 2);  /* 0C066106 mov.l @(r0,Rm),Rn */
	IF(0x0C066108u); { u32 t_ = r2; PR = 0x0C06610Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06610Cu); }  /* 0C066108 jsr @Rn */
L_0C06610C: BLKS(0x0C06610Cu);
	r15 = r14;  /* 0C06610C mov Rm,Rn */
	IF(0x0C06610Eu); PR = R32(r15); r15 += 4; UPD(0x0C066110u, 2);  /* 0C06610E lds.l @Rn+,pr */
	IF(0x0C066110u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066110 rts */
}

void f_0C066120(sh3_t *c)
{
	LOCALS;
L_0C066120: BLKS(0x0C066120u);
	r2 = 0x280u; UPD(0x0C066122u, 1);  /* 0C066120 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066122 exts.w Rm,Rn */
	IF(0x0C066124u); MACL = r4 * r2;  /* 0C066124 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066128u, 4);  /* 0C066126 mov.l Rm,@-Rn */
	r5 = 0xC283794u; UPD(0x0C06612Au, 1);  /* 0C066128 mov.l @(disp,pc),Rn */
	IF(0x0C06612Au); r0 = MACL;  /* 0C06612A sts macl,Rn */
	IF(0x0C06612Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06612Eu, 2);  /* 0C06612C sts.l pr,@-Rn */
	r5 += r0;  /* 0C06612E add Rm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C066132u, 2);  /* 0C066130 mov.l @(disp,Rm),Rn */
	r3 = 0xC16D130u; UPD(0x0C066134u, 1);  /* 0C066132 mov.l @(disp,pc),Rn */
	IF(0x0C066134u); r0 <<= 2;  /* 0C066134 shll2 Rn */
	IF(0x0C066136u); r2 = R32(r0 + r3); UPD(0x0C066138u, 2);  /* 0C066136 mov.l @(r0,Rm),Rn */
	IF(0x0C066138u); { u32 t_ = r2; PR = 0x0C06613Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06613Cu); }  /* 0C066138 jsr @Rn */
L_0C06613C: BLKS(0x0C06613Cu);
	r15 = r14;  /* 0C06613C mov Rm,Rn */
	IF(0x0C06613Eu); PR = R32(r15); r15 += 4; UPD(0x0C066140u, 2);  /* 0C06613E lds.l @Rn+,pr */
	IF(0x0C066140u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066140 rts */
}

void f_0C066150(sh3_t *c)
{
	LOCALS;
L_0C066150: BLKS(0x0C066150u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066152u, 1);  /* 0C066150 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066152 exts.w Rm,Rn */
	r8 = 0x280u; UPD(0x0C066156u, 2);  /* 0C066154 mov.w @(disp,pc),Rn */
	IF(0x0C066156u); MACL = r4 * r8;  /* 0C066156 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06615Au, 3);  /* 0C066158 mov.l Rm,@-Rn */
	r5 = 0xC283794u; UPD(0x0C06615Cu, 1);  /* 0C06615A mov.l @(disp,pc),Rn */
	IF(0x0C06615Cu); r8 = MACL;  /* 0C06615C sts macl,Rn */
	IF(0x0C06615Eu); r15 -= 4; W32(r15, PR); UPD(0x0C066160u, 2);  /* 0C06615E sts.l pr,@-Rn */
	r8 += r5;  /* 0C066160 add Rm,Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C066164u, 2);  /* 0C066162 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C066164 mov Rm,Rn */
	r0 = 0x20000u; UPD(0x0C066168u, 2);  /* 0C066166 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C066168 add Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C06616Cu, 2);  /* 0C06616A mov.l Rm,@(disp,Rn) */
	r0 = r4;  /* 0C06616C mov Rm,Rn */
	r7 = 0xC3929E0u; UPD(0x0C066170u, 2);  /* 0C06616E mov.l @(disp,pc),Rn */
	IF(0x0C066170u); r0 <<= 2;  /* 0C066170 shll2 Rn */
	r6 = 0xC16D3F4u; UPD(0x0C066174u, 2);  /* 0C066172 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C066176u, 1);  /* 0C066174 mov.l @Rm,Rn */
	IF(0x0C066176u); r2 = R32(r0 + r6); UPD(0x0C066178u, 1);  /* 0C066176 mov.l @(r0,Rm),Rn */
	r0 = 0x400000u; UPD(0x0C06617Au, 1);  /* 0C066178 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C06617A add Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C06617C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0661B0u, 5); goto L_0C0661B0; } UPD(0x0C066182u, 1); goto L_0C066182; }  /* 0C06617E bt/s */
L_0C066182: BLKS(0x0C066182u);
	r1 = 0x269u; UPD(0x0C066184u, 1);  /* 0C066182 mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C066184 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C066188u, 2);  /* 0C066186 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C066188 tst Rm,Rn */
	if (T) { UPD(0x0C06619Eu, 4); goto L_0C06619E; }  /* 0C06618A bt */
L_0C06618C: BLKS(0x0C06618Cu);
	r0 += 0xFFFFFFFFu;  /* 0C06618C add #imm,Rn */
	W8(r1, r0); UPD(0x0C066190u, 2);  /* 0C06618E mov.b Rm,@Rn */
	r6 = 0x2u;  /* 0C066190 mov #imm,Rn */
	r0 &= r6;  /* 0C066192 and Rm,Rn */
	r2 = 0xC16D3ECu; UPD(0x0C066196u, 3);  /* 0C066194 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C066196 add Rm,Rn */
	IF(0x0C066198u); r4 = R32(r0 + r2); UPD(0x0C06619Au, 2);  /* 0C066198 mov.l @(r0,Rm),Rn */
	r0 = 0x27Cu; UPD(0x0C06619Cu, 1);  /* 0C06619A mov.w @(disp,pc),Rn */
	IF(0x0C06619Cu); W32(r0 + r8, r4); UPD(0x0C06619Eu, 1);  /* 0C06619C mov.l Rm,@(r0,Rn) */
L_0C06619E: BLKS(0x0C06619Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C0661A0u, 1);  /* 0C06619E mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0661A0 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0661A2 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0661A6u, 3);  /* 0C0661A4 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0661A6 mov Rm,Rn */
	IF(0x0C0661A8u); PR = R32(r15); r15 += 4; UPD(0x0C0661AAu, 2);  /* 0C0661A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0661ACu, 1);  /* 0C0661AA mov.l @Rm+,Rn */
	IF(0x0C0661ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0661AC rts */
L_0C0661B0: BLKS(0x0C0661B0u);
	r0 = 0xC06CFF0u; UPD(0x0C0661B2u, 1);  /* 0C0661B0 mov.l @(disp,pc),Rn */
	r3 = 0x5u;  /* 0C0661B2 mov #imm,Rn */
	IF(0x0C0661B4u); { u32 t_ = r0; PR = 0x0C0661B8u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06CFF0, 0x0C06CFF0u, 0x0C0661B8u); }  /* 0C0661B4 jsr @Rn */
L_0C0661B8: BLKS(0x0C0661B8u);
	{ IF(0x0C0661BAu); ; /* slot nop */ UPD(0x0C066182u, 3); goto L_0C066182; }  /* 0C0661B8 bra */
}

void f_0C0661E0(sh3_t *c)
{
	LOCALS;
L_0C0661E0: BLKS(0x0C0661E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0661E2u, 1);  /* 0C0661E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0661E4u, 1);  /* 0C0661E2 mov.l Rm,@-Rn */
	r0 = 0x280u; UPD(0x0C0661E6u, 1);  /* 0C0661E4 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0661E6 exts.w Rm,Rn */
	IF(0x0C0661E8u); MACL = r9 * r0;  /* 0C0661E8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0661ECu, 4);  /* 0C0661EA mov.l Rm,@-Rn */
	r0 = 0xC283794u; UPD(0x0C0661EEu, 1);  /* 0C0661EC mov.l @(disp,pc),Rn */
	IF(0x0C0661EEu); r8 = MACL;  /* 0C0661EE sts macl,Rn */
	r1 = 0x269u; UPD(0x0C0661F2u, 2);  /* 0C0661F0 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0661F2 add Rm,Rn */
	IF(0x0C0661F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0661F6u, 2);  /* 0C0661F4 sts.l pr,@-Rn */
	r1 += r8;  /* 0C0661F6 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0661FAu, 2);  /* 0C0661F8 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0661FA tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066212u, 4); goto L_0C066212; } goto L_0C066200; }  /* 0C0661FC bt/s */
L_0C066200: BLKS(0x0C066200u);
	r0 += 0xFFFFFFFFu;  /* 0C066200 add #imm,Rn */
	W8(r1, r0); UPD(0x0C066204u, 3);  /* 0C066202 mov.b Rm,@Rn */
	r4 = 0x2u;  /* 0C066204 mov #imm,Rn */
	r0 &= r4;  /* 0C066206 and Rm,Rn */
	r3 = 0xC16D3ECu; UPD(0x0C06620Au, 3);  /* 0C066208 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C06620A add Rm,Rn */
	IF(0x0C06620Cu); r2 = R32(r0 + r3); UPD(0x0C06620Eu, 2);  /* 0C06620C mov.l @(r0,Rm),Rn */
	r0 = 0x27Cu; UPD(0x0C066210u, 1);  /* 0C06620E mov.w @(disp,pc),Rn */
	IF(0x0C066210u); W32(r0 + r8, r2); UPD(0x0C066212u, 1);  /* 0C066210 mov.l Rm,@(r0,Rn) */
L_0C066212: BLKS(0x0C066212u);
	r0 = R32(r8 + 0xCu); UPD(0x0C066214u, 1);  /* 0C066212 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C066214 mov Rm,Rn */
	r2 = 0xC7C0618u; UPD(0x0C066218u, 2);  /* 0C066216 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C066218 add #imm,Rn */
	r0 &= 0x3u;  /* 0C06621A and #imm,r0 */
	IF(0x0C06621Cu); { u32 t_ = r2; PR = 0x0C066220u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C7C0618, 0x0C7C0618u, 0x0C066220u); }  /* 0C06621C jsr @Rn */
L_0C066220: BLKS(0x0C066220u);
	r0 = 0xC7C0700u; UPD(0x0C066222u, 1);  /* 0C066220 mov.l @(disp,pc),Rn */
	IF(0x0C066222u); { u32 t_ = r0; PR = 0x0C066226u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C0700, 0x0C7C0700u, 0x0C066226u); }  /* 0C066222 jsr @Rn */
L_0C066226: BLKS(0x0C066226u);
	r7 = 0xC062550u; UPD(0x0C066228u, 1);  /* 0C066226 mov.l @(disp,pc),Rn */
	IF(0x0C066228u); { u32 t_ = r7; PR = 0x0C06622Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C062550, 0x0C062550u, 0x0C06622Cu); }  /* 0C066228 jsr @Rn */
L_0C06622C: BLKS(0x0C06622Cu);
	r6 = 0x24Eu; UPD(0x0C06622Eu, 1);  /* 0C06622C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06622E mov Rm,Rn */
	IF(0x0C066230u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C066232u, 2);  /* 0C066230 mov.b @(r0,Rm),Rn */
	IF(0x0C066232u); T = (s32)r5 >= 0;  /* 0C066232 cmp/pz Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066244u, 4); goto L_0C066244; } goto L_0C066238; }  /* 0C066234 bt/s */
L_0C066238: BLKS(0x0C066238u);
	r8 = 0x264u; UPD(0x0C06623Au, 2);  /* 0C066238 mov.w @(disp,pc),Rn */
	IF(0x0C06623Au); W8(r0 + r8, r1); UPD(0x0C06623Cu, 1);  /* 0C06623A mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFFFu;  /* 0C06623C add #imm,Rn */
	IF(0x0C06623Eu); W8(r0 + r8, r1); UPD(0x0C066240u, 2);  /* 0C06623E mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFFFu;  /* 0C066240 add #imm,Rn */
	IF(0x0C066242u); W8(r0 + r8, r1); UPD(0x0C066244u, 2);  /* 0C066242 mov.b Rm,@(r0,Rn) */
L_0C066244: BLKS(0x0C066244u);
	r15 = r14;  /* 0C066244 mov Rm,Rn */
	IF(0x0C066246u); PR = R32(r15); r15 += 4; UPD(0x0C066248u, 2);  /* 0C066246 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06624Au, 1);  /* 0C066248 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06624Cu, 1);  /* 0C06624A mov.l @Rm+,Rn */
	IF(0x0C06624Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06624C rts */
}

/* FUN_0c066270 */
void f_0C066270(sh3_t *c)
{
	LOCALS;
L_0C066270: BLKS(0x0C066270u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066272u, 1);  /* 0C066270 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFE3u;  /* 0C066272 mov #imm,Rn */
	r2 = 0x280u; UPD(0x0C066276u, 2);  /* 0C066274 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C066276 exts.w Rm,Rn */
	IF(0x0C066278u); MACL = r8 * r2;  /* 0C066278 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06627Cu, 4);  /* 0C06627A mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C06627C mov #imm,Rn */
	r3 = 0xC283794u; UPD(0x0C066280u, 2);  /* 0C06627E mov.l @(disp,pc),Rn */
	IF(0x0C066280u); r2 = MACL;  /* 0C066280 sts macl,Rn */
	IF(0x0C066282u); r15 -= 4; W32(r15, PR); UPD(0x0C066284u, 2);  /* 0C066282 sts.l pr,@-Rn */
	r2 += r3;  /* 0C066284 add Rm,Rn */
	r7 = R32(r2); UPD(0x0C066288u, 2);  /* 0C066286 mov.l @Rm,Rn */
	r3 = r7;  /* 0C066288 mov Rm,Rn */
	IF(0x0C06628Au); ARG0(0x430Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C06628A shad Rm,Rn */
	r0 = 0x253u; UPD(0x0C06628Eu, 3);  /* 0C06628C mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C06628E and Rm,Rn */
	IF(0x0C066290u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C066292u, 2);  /* 0C066290 mov.b @(r0,Rm),Rn */
	T = r0 == 0x7u;  /* 0C066292 cmp/eq #imm,r0 */
	IF(0x0C066294u); r0 = T;  /* 0C066294 movt Rn */
	r3 |= r0;  /* 0C066296 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C066298 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0662B0u, 7); goto L_0C0662B0; } goto L_0C06629E; }  /* 0C06629A bt/s */
L_0C06629E: BLKS(0x0C06629Eu);
	r0 = 0x269u; UPD(0x0C0662A0u, 2);  /* 0C06629E mov.w @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C0662A0 mov #imm,Rn */
	IF(0x0C0662A2u); W8(r0 + r2, r4); UPD(0x0C0662A4u, 2);  /* 0C0662A2 mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0662A4 mov Rm,Rn */
	IF(0x0C0662A6u); PR = R32(r15); r15 += 4; UPD(0x0C0662A8u, 2);  /* 0C0662A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0662AAu, 1);  /* 0C0662A8 mov.l @Rm+,Rn */
	IF(0x0C0662AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0662AA rts */
L_0C0662B0: BLKS(0x0C0662B0u);
	r4 = 0x20000000u; UPD(0x0C0662B2u, 1);  /* 0C0662B0 mov.l @(disp,pc),Rn */
	r5 = 0x58u;  /* 0C0662B2 mov #imm,Rn */
	r0 = 0xE3FFFFFFu; UPD(0x0C0662B6u, 2);  /* 0C0662B4 mov.l @(disp,pc),Rn */
	r7 |= r4;  /* 0C0662B6 or Rm,Rn */
	r7 &= r0;  /* 0C0662B8 and Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C0662BCu, 3);  /* 0C0662BA mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C0662BC mov Rm,Rn */
	r0 |= 0x10u;  /* 0C0662BE or #imm,r0 */
	W32(r2 + 0x8u, r0); UPD(0x0C0662C2u, 3);  /* 0C0662C0 mov.l Rm,@(disp,Rn) */
	r0 = 0x258u; UPD(0x0C0662C4u, 1);  /* 0C0662C2 mov.w @(disp,pc),Rn */
	IF(0x0C0662C4u); W8(r0 + r2, r3); UPD(0x0C0662C6u, 1);  /* 0C0662C4 mov.b Rm,@(r0,Rn) */
	r0 += 0x10u;  /* 0C0662C6 add #imm,Rn */
	IF(0x0C0662C8u); W8(r0 + r2, r3); UPD(0x0C0662CAu, 2);  /* 0C0662C8 mov.b Rm,@(r0,Rn) */
	r0 = 0xC0AFB20u; UPD(0x0C0662CCu, 1);  /* 0C0662CA mov.l @(disp,pc),Rn */
	IF(0x0C0662CCu); { u32 t_ = r0; PR = 0x0C0662D0u; W32(r2, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C0662D0u); }  /* 0C0662CC jsr @Rn */
L_0C0662D0: BLKS(0x0C0662D0u);
	r7 = 0xC16D3FCu; UPD(0x0C0662D2u, 1);  /* 0C0662D0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0662D2 mov Rm,Rn */
	IF(0x0C0662D4u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0662D6u, 2);  /* 0C0662D4 mov.b @(r0,Rm),Rn */
	r5 = 0xC0AFC10u; UPD(0x0C0662D8u, 1);  /* 0C0662D6 mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C0662D8 extu.b Rm,Rn */
	r15 = r14;  /* 0C0662DA mov Rm,Rn */
	IF(0x0C0662DCu); PR = R32(r15); r15 += 4; UPD(0x0C0662DEu, 3);  /* 0C0662DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0662E0u, 1);  /* 0C0662DE mov.l @Rm+,Rn */
	IF(0x0C0662E0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C0662E0 jmp @Rn */
}

void f_0C066310(sh3_t *c)
{
	LOCALS;
L_0C066310: BLKS(0x0C066310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066312u, 1);  /* 0C066310 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066314u, 1);  /* 0C066312 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C066316u, 1);  /* 0C066314 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C066316 exts.w Rm,Rn */
	IF(0x0C066318u); MACL = r9 * r2;  /* 0C066318 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06631Cu, 4);  /* 0C06631A mov.l Rm,@-Rn */
	r3 = 0xC283794u; UPD(0x0C06631Eu, 1);  /* 0C06631C mov.l @(disp,pc),Rn */
	IF(0x0C06631Eu); r2 = MACL;  /* 0C06631E sts macl,Rn */
	r0 = 0x269u; UPD(0x0C066322u, 2);  /* 0C066320 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C066322 add Rm,Rn */
	IF(0x0C066324u); r15 -= 4; W32(r15, PR); UPD(0x0C066326u, 2);  /* 0C066324 sts.l pr,@-Rn */
	r0 += r2;  /* 0C066326 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C06632Au, 2);  /* 0C066328 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C06632A add #imm,Rn */
	W8(r0, r3); UPD(0x0C06632Eu, 2);  /* 0C06632C mov.b Rm,@Rn */
	r0 = r3 & 0xFF;  /* 0C06632E extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C066330 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066350u, 5); goto L_0C066350; } UPD(0x0C066336u, 1); goto L_0C066336; }  /* 0C066332 bt/s */
L_0C066336: BLKS(0x0C066336u);
	r15 = r14;  /* 0C066336 mov Rm,Rn */
	IF(0x0C066338u); PR = R32(r15); r15 += 4; UPD(0x0C06633Au, 2);  /* 0C066338 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06633Cu, 1);  /* 0C06633A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06633Eu, 1);  /* 0C06633C mov.l @Rm+,Rn */
	IF(0x0C06633Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06633E rts */
L_0C066350: BLKS(0x0C066350u);
	r8 = 0x253u; UPD(0x0C066352u, 1);  /* 0C066350 mov.w @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C066352 mov #imm,Rn */
	r8 += r2;  /* 0C066354 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C066358u, 3);  /* 0C066356 mov.b @Rm,Rn */
	r7 &= r1;  /* 0C066358 and Rm,Rn */
	IF(0x0C06635Au); r7 <<= 2;  /* 0C06635A shll2 Rn */
	r6 = 0xC16D400u; UPD(0x0C06635Eu, 3);  /* 0C06635C mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C06635E mov Rm,Rn */
	IF(0x0C066360u); r4 = R32(r0 + r6); UPD(0x0C066362u, 2);  /* 0C066360 mov.l @(r0,Rm),Rn */
	r0 = 0xC7C00D4u; UPD(0x0C066364u, 1);  /* 0C066362 mov.l @(disp,pc),Rn */
	IF(0x0C066364u); { u32 t_ = r0; PR = 0x0C066368u; IF(0x0C066366u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C00D4, 0x0C7C00D4u, 0x0C066368u); }  /* 0C066364 jsr @Rn */
L_0C066368: BLKS(0x0C066368u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C06636Au, 1);  /* 0C066368 mov.b @Rm,Rn */
	r4 = 0x6u;  /* 0C06636A mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C06636C extu.b Rm,Rn */
	T = r2 > r4;  /* 0C06636E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C066336u, 6); goto L_0C066336; }  /* 0C066370 bt */
L_0C066372: BLKS(0x0C066372u);
	r0 = 0xC06638Cu;  /* 0C066372 mova @(disp,pc),r0 */
	IF(0x0C066374u); r8 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C066376u, 2);  /* 0C066374 mov.b @(r0,Rm),Rn */
	IF(0x0C066376u); { u32 tv_ = (r8 + 0x0C06637Au); u32 t_ = PHYS(tv_); IF(0x0C066378u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0663A0u: goto L_0C0663A0; case 0x0C0663C0u: goto L_0C0663C0; case 0x0C0663D4u: goto L_0C0663D4; default: JUMPD(tv_); } }  /* 0C066376 braf Rn */
L_0C0663A0: BLKS(0x0C0663A0u);
	r0 = 0x280u; UPD(0x0C0663A2u, 1);  /* 0C0663A0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0663A2 mov #imm,Rn */
	r2 = 0xC21CA26u; UPD(0x0C0663A6u, 2);  /* 0C0663A4 mov.l @(disp,pc),Rn */
	IF(0x0C0663A6u); MACL = r9 * r0;  /* 0C0663A6 mul.l Rm,Rn */
	W16(r2, r9); UPD(0x0C0663AAu, 3);  /* 0C0663A8 mov.w Rm,@Rn */
	r9 = 0xC283794u; UPD(0x0C0663ACu, 1);  /* 0C0663AA mov.l @(disp,pc),Rn */
	IF(0x0C0663ACu); r0 = MACL;  /* 0C0663AC sts macl,Rn */
	{ IF(0x0C0663B0u); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C066336u, 4); goto L_0C066336; }  /* 0C0663AE bra */
L_0C0663C0: BLKS(0x0C0663C0u);
	r8 = 0x280u; UPD(0x0C0663C2u, 1);  /* 0C0663C0 mov.w @(disp,pc),Rn */
	IF(0x0C0663C2u); MACL = r9 * r8;  /* 0C0663C2 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0663C6u, 3);  /* 0C0663C4 mov.l @(disp,pc),Rn */
	IF(0x0C0663C6u); r4 = MACL;  /* 0C0663C6 sts macl,Rn */
	r6 = 0x253u; UPD(0x0C0663CAu, 2);  /* 0C0663C8 mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C0663CA add Rm,Rn */
	r4 += r6;  /* 0C0663CC add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C0663D0u, 3);  /* 0C0663CE mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0663D0 add #imm,Rn */
	W8(r4, r5); UPD(0x0C0663D4u, 2);  /* 0C0663D2 mov.b Rm,@Rn */
L_0C0663D4: BLKS(0x0C0663D4u);
	r4 = r9;  /* 0C0663D4 mov Rm,Rn */
	r9 = 0xC7C03D4u; UPD(0x0C0663D8u, 2);  /* 0C0663D6 mov.l @(disp,pc),Rn */
	IF(0x0C0663D8u); { u32 t_ = r9; PR = 0x0C0663DCu; IF(0x0C0663DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C03D4, 0x0C7C03D4u, 0x0C0663DCu); }  /* 0C0663D8 jsr @Rn */
L_0C0663DC: BLKS(0x0C0663DCu);
	{ IF(0x0C0663DEu); ; /* slot nop */ UPD(0x0C066336u, 3); goto L_0C066336; }  /* 0C0663DC bra */
}

void f_0C0663F0(sh3_t *c)
{
	LOCALS;
L_0C0663F0: BLKS(0x0C0663F0u);
	r0 = 0x9C0u; UPD(0x0C0663F2u, 1);  /* 0C0663F0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0663F2 exts.w Rm,Rn */
	IF(0x0C0663F4u); MACL = r1 * r0;  /* 0C0663F4 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C0663F6 exts.w Rm,Rn */
	r3 = 0x34u;  /* 0C0663F8 mov #imm,Rn */
	IF(0x0C0663FAu); r4 = MACL;  /* 0C0663FA sts macl,Rn */
	IF(0x0C0663FCu); MACL = r2 * r3;  /* 0C0663FC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C066400u, 9);  /* 0C0663FE mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C066400 exts.w Rm,Rn */
	IF(0x0C066402u); r6 = MACL;  /* 0C066402 sts macl,Rn */
	IF(0x0C066404u); MACL = r7 * r0;  /* 0C066404 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066408u, 5);  /* 0C066406 mov.l Rm,@-Rn */
	r3 = r4;  /* 0C066408 mov Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C06640Cu, 2);  /* 0C06640A mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C06640C add Rm,Rn */
	IF(0x0C06640Eu); r7 = MACL;  /* 0C06640E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066412u, 3);  /* 0C066410 mov.l Rm,@-Rn */
	r3 += r7;  /* 0C066412 add Rm,Rn */
	r3 += r8;  /* 0C066414 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C066418u, 3);  /* 0C066416 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C066418 mov #imm,Rn */
	r2 += 0xFFFFFFF6u;  /* 0C06641A add #imm,Rn */
	T = r2 > r0;  /* 0C06641C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06643Eu, 6); goto L_0C06643E; } goto L_0C066422; }  /* 0C06641E bt/s */
L_0C066422: BLKS(0x0C066422u);
	r2 = r3;  /* 0C066422 mov Rm,Rn */
	r2 += 0x30u;  /* 0C066424 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C066428u, 4);  /* 0C066426 mov.b @Rm,Rn */
	r1 = 0x1u;  /* 0C066428 mov #imm,Rn */
	r5 += 0x1u;  /* 0C06642A add #imm,Rn */
	r1 &= r5;  /* 0C06642C and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06642E tst Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06643Eu, 7); goto L_0C06643E; } UPD(0x0C066434u, 1); goto L_0C066434; }  /* 0C066430 bf/s */
L_0C066434: BLKS(0x0C066434u);
	r0 = R32(r3 + 0xCu); UPD(0x0C066436u, 1);  /* 0C066434 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C066436 add #imm,Rn */
	T = r0 == 0x8u;  /* 0C066438 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C066450u, 5); goto L_0C066450; } UPD(0x0C06643Eu, 1); goto L_0C06643E; }  /* 0C06643A bt/s */
L_0C06643E: BLKS(0x0C06643Eu);
	r15 = r14;  /* 0C06643E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066442u, 2);  /* 0C066440 mov.l @Rm+,Rn */
	IF(0x0C066442u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066442 rts */
L_0C066450: BLKS(0x0C066450u);
	r0 = r4;  /* 0C066450 mov Rm,Rn */
	r0 += r7;  /* 0C066452 add Rm,Rn */
	r0 += r6;  /* 0C066454 add Rm,Rn */
	{ IF(0x0C066458u); W32(r0 + r8, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06643Eu, 6); goto L_0C06643E; }  /* 0C066456 bra */
}

void f_0C066470(sh3_t *c)
{
	LOCALS;
L_0C066470: BLKS(0x0C066470u);
	r3 = 0x9C0u; UPD(0x0C066472u, 1);  /* 0C066470 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066472 exts.w Rm,Rn */
	IF(0x0C066474u); MACL = r4 * r3;  /* 0C066474 mul.l Rm,Rn */
	r2 = 0x34u;  /* 0C066476 mov #imm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C066478 exts.w Rm,Rn */
	IF(0x0C06647Au); r3 = MACL;  /* 0C06647A sts macl,Rn */
	IF(0x0C06647Cu); MACL = r6 * r2;  /* 0C06647C mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066480u, 9);  /* 0C06647E mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C066480 exts.w Rm,Rn */
	r7 = 0x340u; UPD(0x0C066484u, 2);  /* 0C066482 mov.w @(disp,pc),Rn */
	IF(0x0C066484u); r8 = MACL;  /* 0C066484 sts macl,Rn */
	IF(0x0C066486u); MACL = r5 * r7;  /* 0C066486 mul.l Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C06648Au, 4);  /* 0C066488 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C06648A add Rm,Rn */
	IF(0x0C06648Cu); r2 = MACL;  /* 0C06648C sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066490u, 3);  /* 0C06648E mov.l Rm,@-Rn */
	r3 += r2;  /* 0C066490 add Rm,Rn */
	r0 += r3;  /* 0C066492 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C066496u, 3);  /* 0C066494 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C066496 mov #imm,Rn */
	T = r2 > r0;  /* 0C066498 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0664EAu, 5); goto L_0C0664EA; } goto L_0C06649E; }  /* 0C06649A bt/s */
L_0C06649E: BLKS(0x0C06649Eu);
	r0 = 0xC0664B0u;  /* 0C06649E mova @(disp,pc),r0 */
	IF(0x0C0664A0u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0664A2u, 3);  /* 0C0664A0 mov.b @(r0,Rm),Rn */
	IF(0x0C0664A2u); { u32 tv_ = (r7 + 0x0C0664A6u); u32 t_ = PHYS(tv_); IF(0x0C0664A4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0664C0u: goto L_0C0664C0; case 0x0C0664EAu: goto L_0C0664EA; case 0x0C066500u: goto L_0C066500; default: JUMPD(tv_); } }  /* 0C0664A2 braf Rn */
L_0C0664C0: BLKS(0x0C0664C0u);
	r0 = 0x9C0u; UPD(0x0C0664C2u, 1);  /* 0C0664C0 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C0664C2 mov #imm,Rn */
	IF(0x0C0664C4u); MACL = r4 * r0;  /* 0C0664C4 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C0664C8u, 4);  /* 0C0664C6 mov.w @(disp,pc),Rn */
	IF(0x0C0664C8u); r0 = MACL;  /* 0C0664C8 sts macl,Rn */
	IF(0x0C0664CAu); MACL = r6 * r8;  /* 0C0664CA mul.l Rm,Rn */
	r2 = 0xC21F8A0u; UPD(0x0C0664CEu, 4);  /* 0C0664CC mov.l @(disp,pc),Rn */
	IF(0x0C0664CEu); r6 = MACL;  /* 0C0664CE sts macl,Rn */
	IF(0x0C0664D0u); MACL = r5 * r7;  /* 0C0664D0 mul.l Rm,Rn */
	r8 = 0xDu;  /* 0C0664D2 mov #imm,Rn */
	r0 += r6;  /* 0C0664D4 add Rm,Rn */
	IF(0x0C0664D6u); r3 = MACL;  /* 0C0664D6 sts macl,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r8);  /* 0C0664D8 muls.w Rm,Rn */
	r0 += r3;  /* 0C0664DA add Rm,Rn */
	r4 = 0x808080u; UPD(0x0C0664DEu, 10);  /* 0C0664DC mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C0664DE add Rm,Rn */
	IF(0x0C0664E0u); r6 = MACL;  /* 0C0664E0 sts macl,Rn */
	r5 = 0x0u;  /* 0C0664E2 mov #imm,Rn */
	W32(r0 + 0x8u, r6); UPD(0x0C0664E6u, 4);  /* 0C0664E4 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x24u, r5); UPD(0x0C0664E8u, 1);  /* 0C0664E6 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C0664EAu, 1);  /* 0C0664E8 mov.l Rm,@(disp,Rn) */
L_0C0664EA: BLKS(0x0C0664EAu);
	r15 = r14;  /* 0C0664EA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0664EEu, 2);  /* 0C0664EC mov.l @Rm+,Rn */
	IF(0x0C0664EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0664EE rts */
L_0C066500: BLKS(0x0C066500u);
	r0 = 0x9C0u; UPD(0x0C066502u, 1);  /* 0C066500 mov.w @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C066502 mov #imm,Rn */
	IF(0x0C066504u); MACL = r4 * r0;  /* 0C066504 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C066508u, 4);  /* 0C066506 mov.w @(disp,pc),Rn */
	IF(0x0C066508u); r4 = MACL;  /* 0C066508 sts macl,Rn */
	IF(0x0C06650Au); MACL = r6 * r3;  /* 0C06650A mul.l Rm,Rn */
	r8 = 0xC21F8A0u; UPD(0x0C06650Eu, 4);  /* 0C06650C mov.l @(disp,pc),Rn */
	IF(0x0C06650Eu); r6 = MACL;  /* 0C06650E sts macl,Rn */
	IF(0x0C066510u); MACL = r5 * r7;  /* 0C066510 mul.l Rm,Rn */
	r3 = r4;  /* 0C066512 mov Rm,Rn */
	r3 += r6;  /* 0C066514 add Rm,Rn */
	IF(0x0C066516u); r7 = MACL;  /* 0C066516 sts macl,Rn */
	r3 += r7;  /* 0C066518 add Rm,Rn */
	r3 += r8;  /* 0C06651A add Rm,Rn */
	r0 = r3;  /* 0C06651C mov Rm,Rn */
	r0 += 0x30u;  /* 0C06651E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C066522u, 11);  /* 0C066520 mov.b @Rm,Rn */
	r2 = r5;  /* 0C066522 mov Rm,Rn */
	r2 += 0x1u;  /* 0C066524 add #imm,Rn */
	W8(r0, r2); UPD(0x0C066528u, 3);  /* 0C066526 mov.b Rm,@Rn */
	r2 = 0x1u;  /* 0C066528 mov #imm,Rn */
	r2 &= r5;  /* 0C06652A and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06652C tst Rm,Rn */
	if (!T) { UPD(0x0C0664EAu, 6); goto L_0C0664EA; }  /* 0C06652E bf */
L_0C066530: BLKS(0x0C066530u);
	r1 = R32(r3 + 0xCu); UPD(0x0C066532u, 1);  /* 0C066530 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C066532 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C066534 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C066540u, 5); goto L_0C066540; }  /* 0C066536 bt */
L_0C066538: BLKS(0x0C066538u);
	r1 += 0x1u;  /* 0C066538 add #imm,Rn */
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0664EAu, 4); goto L_0C0664EA; }  /* 0C06653A bra */
L_0C066540: BLKS(0x0C066540u);
	r0 = r4;  /* 0C066540 mov Rm,Rn */
	r0 += r7;  /* 0C066542 add Rm,Rn */
	r0 += r6;  /* 0C066544 add Rm,Rn */
	{ IF(0x0C066548u); W32(r0 + r8, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C066538u, 6); goto L_0C066538; }  /* 0C066546 bra */
}

/* FUN_0c066560 */
void f_0C066560(sh3_t *c)
{
	LOCALS;
L_0C066560: BLKS(0x0C066560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066562u, 1);  /* 0C066560 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066564u, 1);  /* 0C066562 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066566u, 1);  /* 0C066564 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066568u, 1);  /* 0C066566 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06656Au, 1);  /* 0C066568 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C06656A mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06656Eu, 2);  /* 0C06656C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066570u, 1);  /* 0C06656E mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C066570 mov #imm,Rn */
	IF(0x0C066572u); r15 -= 4; W32(r15, PR); UPD(0x0C066574u, 2);  /* 0C066572 sts.l pr,@-Rn */
	r12 = 0xC283794u; UPD(0x0C066576u, 1);  /* 0C066574 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C066576 mov Rm,Rn */
	UPD(0x0C066578u, 1);
L_0C066578: BLKS(0x0C066578u);
	r8 = 0xC27DC84u; UPD(0x0C06657Au, 1);  /* 0C066578 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C06657A mov #imm,Rn */
	r8 += r13;  /* 0C06657C add Rm,Rn */
	IF(0x0C06657Eu); ;  /* 0C06657E nop */
	UPD(0x0C066580u, 3);
L_0C066580: BLKS(0x0C066580u);
	r0 = R32(r8); UPD(0x0C066582u, 1);  /* 0C066580 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C066582 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0665C0u, 4); goto L_0C0665C0; } UPD(0x0C066588u, 1); goto L_0C066588; }  /* 0C066584 bf/s */
L_0C066588: BLKS(0x0C066588u);
	r4 = r10;  /* 0C066588 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06658A add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06658C exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C06658E mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C066590 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C066580u, 8); goto L_0C066580; } goto L_0C066596; }  /* 0C066592 bf/s */
L_0C066596: BLKS(0x0C066596u);
	r10 = r11;  /* 0C066596 mov Rm,Rn */
	r11 = 0x280u; UPD(0x0C06659Au, 3);  /* 0C066598 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C06659A add #imm,Rn */
	r5 = 0x90u; UPD(0x0C06659Eu, 2);  /* 0C06659C mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C06659E add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0665A0 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C0665A2 mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C0665A4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C066578u, 7); goto L_0C066578; } goto L_0C0665AA; }  /* 0C0665A6 bf/s */
L_0C0665AA: BLKS(0x0C0665AAu);
	r15 = r14;  /* 0C0665AA mov Rm,Rn */
	IF(0x0C0665ACu); PR = R32(r15); r15 += 4; UPD(0x0C0665AEu, 3);  /* 0C0665AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0665B0u, 1);  /* 0C0665AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0665B2u, 1);  /* 0C0665B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0665B4u, 1);  /* 0C0665B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0665B6u, 1);  /* 0C0665B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0665B8u, 1);  /* 0C0665B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0665BAu, 1);  /* 0C0665B8 mov.l @Rm+,Rn */
	IF(0x0C0665BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0665BA rts */
L_0C0665C0: BLKS(0x0C0665C0u);
	r6 = 0xC066890u; UPD(0x0C0665C2u, 1);  /* 0C0665C0 mov.l @(disp,pc),Rn */
	IF(0x0C0665C2u); { u32 t_ = r6; PR = 0x0C0665C6u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C066890, 0x0C066890u, 0x0C0665C6u); }  /* 0C0665C2 jsr @Rn */
L_0C0665C6: BLKS(0x0C0665C6u);
	r5 = R32(r12); UPD(0x0C0665C8u, 1);  /* 0C0665C6 mov.l @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C0665C8 mov #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0665CA tst Rm,Rn */
	r3 = R32(r12 + 0x8u); UPD(0x0C0665CEu, 3);  /* 0C0665CC mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0665CE negc Rm,Rn */
	r2 = 0xFu;  /* 0C0665D0 mov #imm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0665D2 cmp/ge Rm,Rn */
	IF(0x0C0665D4u); r0 = T;  /* 0C0665D4 movt Rn */
	r9 &= r0;  /* 0C0665D6 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0665D8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066600u, 9); goto L_0C066600; } goto L_0C0665DE; }  /* 0C0665DA bt/s */
L_0C0665DE: BLKS(0x0C0665DEu);
	r0 = R32(r8 + 0x4u); UPD(0x0C0665E0u, 2);  /* 0C0665DE mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0665E0 mov Rm,Rn */
	r3 = 0xC170398u; UPD(0x0C0665E4u, 2);  /* 0C0665E2 mov.l @(disp,pc),Rn */
	IF(0x0C0665E4u); r0 <<= 2;  /* 0C0665E4 shll2 Rn */
	IF(0x0C0665E6u); r9 = R32(r0 + r3); UPD(0x0C0665E8u, 2);  /* 0C0665E6 mov.l @(r0,Rm),Rn */
	IF(0x0C0665E8u); { u32 t_ = r9; PR = 0x0C0665ECu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0665ECu); }  /* 0C0665E8 jsr @Rn */
L_0C0665EC: BLKS(0x0C0665ECu);
	r7 = r8;  /* 0C0665EC mov Rm,Rn */
	r7 += 0x2Fu;  /* 0C0665EE add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0665F2u, 3);  /* 0C0665F0 mov.b @Rm,Rn */
	r0 += 0x7u;  /* 0C0665F2 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C0665F4 and #imm,r0 */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C066588u, 5); goto L_0C066588; }  /* 0C0665F6 bra */
L_0C066600: BLKS(0x0C066600u);
	r15 += 0xFFFFFFF8u;  /* 0C066600 add #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C066604u, 2);  /* 0C066602 mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C066604 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C066608u, 2);  /* 0C066606 mov.l Rm,@Rn */
	IF(0x0C066608u); r6 <<= 2;  /* 0C066608 shll2 Rn */
	r0 = 0xC1703D4u; UPD(0x0C06660Cu, 2);  /* 0C06660A mov.l @(disp,pc),Rn */
	IF(0x0C06660Cu); r5 = R32(r0 + r6); UPD(0x0C06660Eu, 1);  /* 0C06660C mov.l @(r0,Rm),Rn */
	r0 = 0xC0ADB30u; UPD(0x0C066610u, 1);  /* 0C06660E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C066612u, 1);  /* 0C066610 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x14u); UPD(0x0C066614u, 1);  /* 0C066612 mov.l @(disp,Rm),Rn */
	IF(0x0C066614u); { u32 t_ = r0; PR = 0x0C066618u; r7 = R32(r8 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADB30, 0x0C0ADB30u, 0x0C066618u); }  /* 0C066614 jsr @Rn */
L_0C066618: BLKS(0x0C066618u);
	W32(r8, r9); UPD(0x0C06661Au, 1);  /* 0C066618 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C066588u, 3); goto L_0C066588; }  /* 0C06661A bra */
}

/* FUN_0c066640 */
void f_0C066640(sh3_t *c)
{
	LOCALS;
L_0C066640: BLKS(0x0C066640u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066642u, 1);  /* 0C066640 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066644u, 1);  /* 0C066642 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066646u, 1);  /* 0C066644 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066648u, 1);  /* 0C066646 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06664Au, 1);  /* 0C066648 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C06664A mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06664Eu, 2);  /* 0C06664C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C06664E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066652u, 2);  /* 0C066650 mov.l Rm,@-Rn */
	r13 = 0xC062A70u; UPD(0x0C066654u, 1);  /* 0C066652 mov.l @(disp,pc),Rn */
	IF(0x0C066654u); r15 -= 4; W32(r15, PR); UPD(0x0C066656u, 1);  /* 0C066654 sts.l pr,@-Rn */
	r14 = r15;  /* 0C066656 mov Rm,Rn */
	UPD(0x0C066658u, 1);
L_0C066658: BLKS(0x0C066658u);
	r9 = 0xC27DC84u; UPD(0x0C06665Au, 1);  /* 0C066658 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C06665A mov #imm,Rn */
	r9 += r12;  /* 0C06665C add Rm,Rn */
	IF(0x0C06665Eu); ;  /* 0C06665E nop */
	UPD(0x0C066660u, 3);
L_0C066660: BLKS(0x0C066660u);
	r1 = R32(r9); UPD(0x0C066662u, 1);  /* 0C066660 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C066664u, 1);  /* 0C066662 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C066664 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0666A0u, 4); goto L_0C0666A0; } UPD(0x0C06666Au, 1); goto L_0C06666A; }  /* 0C066666 bf/s */
L_0C06666A: BLKS(0x0C06666Au);
	r2 = r10;  /* 0C06666A mov Rm,Rn */
	r2 += 0x1u;  /* 0C06666C add #imm,Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C06666E exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C066670 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C066672 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C066660u, 8); goto L_0C066660; } goto L_0C066678; }  /* 0C066674 bf/s */
L_0C066678: BLKS(0x0C066678u);
	r10 = r11;  /* 0C066678 mov Rm,Rn */
	r11 = 0x90u; UPD(0x0C06667Cu, 3);  /* 0C06667A mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C06667C add #imm,Rn */
	r12 += r11;  /* 0C06667E add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C066680 exts.w Rm,Rn */
	r9 = 0x1u;  /* 0C066682 mov #imm,Rn */
	T = (s32)r11 > (s32)r9;  /* 0C066684 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C066658u, 8); goto L_0C066658; }  /* 0C066686 bf */
L_0C066688: BLKS(0x0C066688u);
	r15 = r14;  /* 0C066688 mov Rm,Rn */
	IF(0x0C06668Au); PR = R32(r15); r15 += 4; UPD(0x0C06668Cu, 2);  /* 0C06668A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06668Eu, 1);  /* 0C06668C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066690u, 1);  /* 0C06668E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066692u, 1);  /* 0C066690 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066694u, 1);  /* 0C066692 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066696u, 1);  /* 0C066694 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066698u, 1);  /* 0C066696 mov.l @Rm+,Rn */
	IF(0x0C066698u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066698 rts */
L_0C0666A0: BLKS(0x0C0666A0u);
	r8 = R32(r9 + 0x4u); UPD(0x0C0666A2u, 1);  /* 0C0666A0 mov.l @(disp,Rm),Rn */
	r3 = r8;  /* 0C0666A2 mov Rm,Rn */
	IF(0x0C0666A4u); ARG0(0x437Du); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0666A4 shld Rm,Rn */
	r1 = 0xC170314u; UPD(0x0C0666A8u, 3);  /* 0C0666A6 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0666A8 mov #imm,Rn */
	r3 += r1;  /* 0C0666AA add Rm,Rn */
	r5 = R32(r3 + 0x4u); UPD(0x0C0666AEu, 3);  /* 0C0666AC mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C0666AE mov #imm,Rn */
	r0 = 0xC393044u; UPD(0x0C0666B2u, 2);  /* 0C0666B0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0666B2 add #imm,Rn */
	W32(r0, r5); UPD(0x0C0666B6u, 2);  /* 0C0666B4 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C0666B6 mov #imm,Rn */
	r5 = R32(r9 + 0x8u); UPD(0x0C0666BAu, 2);  /* 0C0666B8 mov.l @(disp,Rm),Rn */
	r0 = r5;  /* 0C0666BA mov Rm,Rn */
	r4 = R32(r3); UPD(0x0C0666BEu, 2);  /* 0C0666BC mov.l @Rm,Rn */
	IF(0x0C0666BEu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0666BE shld Rm,Rn */
	IF(0x0C0666C0u); r3 = R32(r0 + r4); UPD(0x0C0666C2u, 2);  /* 0C0666C0 mov.l @(r0,Rm),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C0666C4u, 1);  /* 0C0666C2 mov.l @(disp,Rm),Rn */
	r0 = r4;  /* 0C0666C4 mov Rm,Rn */
	IF(0x0C0666C6u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0666C6 shld Rm,Rn */
	IF(0x0C0666C8u); r2 = R32(r0 + r3); UPD(0x0C0666CAu, 3);  /* 0C0666C8 mov.l @(r0,Rm),Rn */
	r7 = 0xC2175E8u; UPD(0x0C0666CCu, 1);  /* 0C0666CA mov.l @(disp,pc),Rn */
	r3 = 0xC286270u; UPD(0x0C0666CEu, 1);  /* 0C0666CC mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C0666D0u, 1);  /* 0C0666CE mov.l Rm,@Rn */
	W32(r3, r8); UPD(0x0C0666D2u, 1);  /* 0C0666D0 mov.l Rm,@Rn */
	r2 = 0xC217A00u; UPD(0x0C0666D4u, 1);  /* 0C0666D2 mov.l @(disp,pc),Rn */
	r8 = 0x280u; UPD(0x0C0666D6u, 1);  /* 0C0666D4 mov.w @(disp,pc),Rn */
	r0 = 0xC283CACu; UPD(0x0C0666D8u, 1);  /* 0C0666D6 mov.l @(disp,pc),Rn */
	IF(0x0C0666D8u); MACL = r11 * r8;  /* 0C0666D8 mul.l Rm,Rn */
	W32(r2, r5); UPD(0x0C0666DCu, 3);  /* 0C0666DA mov.l Rm,@Rn */
	r6 = 0xC21F5D8u; UPD(0x0C0666DEu, 1);  /* 0C0666DC mov.l @(disp,pc),Rn */
	IF(0x0C0666DEu); r8 = MACL;  /* 0C0666DE sts macl,Rn */
	r7 = 0xC27DC51u; UPD(0x0C0666E2u, 2);  /* 0C0666E0 mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C0666E4u, 1);  /* 0C0666E2 mov.l Rm,@Rn */
	W8(r6, r11); UPD(0x0C0666E6u, 1);  /* 0C0666E4 mov.b Rm,@Rn */
	W8(r7, r10); UPD(0x0C0666E8u, 1);  /* 0C0666E6 mov.b Rm,@Rn */
	r5 = 0xC283794u; UPD(0x0C0666EAu, 1);  /* 0C0666E8 mov.l @(disp,pc),Rn */
	r4 = 0x27Cu; UPD(0x0C0666ECu, 1);  /* 0C0666EA mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0666EC add Rm,Rn */
	W32(r15, r1); UPD(0x0C0666F0u, 2);  /* 0C0666EE mov.l Rm,@Rn */
	r8 += r4;  /* 0C0666F0 add Rm,Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C0666F4u, 2);  /* 0C0666F2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0666F4 mov #imm,Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C0666F8u, 2);  /* 0C0666F6 mov.l @(disp,Rm),Rn */
	IF(0x0C0666F8u); { u32 t_ = r13; PR = 0x0C0666FCu; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0666FCu); }  /* 0C0666F8 jsr @Rn */
L_0C0666FC: BLKS(0x0C0666FCu);
	r2 = 0xC170354u; UPD(0x0C0666FEu, 1);  /* 0C0666FC mov.l @(disp,pc),Rn */
	r9 += 0x2Fu;  /* 0C0666FE add #imm,Rn */
	r0 = R32(r2 + 0x34u); UPD(0x0C066702u, 2);  /* 0C066700 mov.l @(disp,Rm),Rn */
	r6 = 0xC393044u; UPD(0x0C066704u, 1);  /* 0C066702 mov.l @(disp,pc),Rn */
	W32(r6, r0); UPD(0x0C066706u, 1);  /* 0C066704 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C066708u, 1);  /* 0C066706 mov.b @Rm,Rn */
	r7 = R32(r2 + 0x30u); UPD(0x0C06670Au, 1);  /* 0C066708 mov.l @(disp,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C06670A extu.b Rm,Rn */
	r4 = R32(r7); UPD(0x0C06670Eu, 2);  /* 0C06670C mov.l @Rm,Rn */
	IF(0x0C06670Eu); r0 <<= 2;  /* 0C06670E shll2 Rn */
	r0 += r0;  /* 0C066710 add Rm,Rn */
	IF(0x0C066712u); r3 = R32(r0 + r4); UPD(0x0C066714u, 3);  /* 0C066712 mov.l @(r0,Rm),Rn */
	r9 += 0xFFFFFFD1u;  /* 0C066714 add #imm,Rn */
	r2 = 0xC2175E8u; UPD(0x0C066718u, 2);  /* 0C066716 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C066718 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C06671Cu, 2);  /* 0C06671A mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C06671C mov #imm,Rn */
	W32(r15, r0); UPD(0x0C066720u, 2);  /* 0C06671E mov.l Rm,@Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C066722u, 1);  /* 0C066720 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C066724u, 1);  /* 0C066722 mov.l @(disp,Rm),Rn */
	IF(0x0C066724u); { u32 t_ = r13; PR = 0x0C066728u; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C066728u); }  /* 0C066724 jsr @Rn */
L_0C066728: BLKS(0x0C066728u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06666Au, 3); goto L_0C06666A; }  /* 0C066728 bra */
}

/* FUN_0c066770 */
void f_0C066770(sh3_t *c)
{
	LOCALS;
L_0C066770: BLKS(0x0C066770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066772u, 1);  /* 0C066770 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066774u, 1);  /* 0C066772 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066776u, 1);  /* 0C066774 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066778u, 1);  /* 0C066776 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06677Au, 1);  /* 0C066778 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C06677A exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06677Eu, 2);  /* 0C06677C mov.l Rm,@-Rn */
	T = (r11 & r11) == 0;  /* 0C06677E tst Rm,Rn */
	IF(0x0C066780u); r15 -= 4; W32(r15, PR); UPD(0x0C066782u, 2);  /* 0C066780 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0667C2u, 3); goto L_0C0667C2; } goto L_0C066786; }  /* 0C066782 bt/s */
L_0C066786: BLKS(0x0C066786u);
	r12 = 0x0u;  /* 0C066786 mov #imm,Rn */
	r10 = 0x0u;  /* 0C066788 mov #imm,Rn */
	IF(0x0C06678Au); ;  /* 0C06678A nop */
	UPD(0x0C06678Cu, 4);
L_0C06678C: BLKS(0x0C06678Cu);
	r9 = 0x0u;  /* 0C06678C mov #imm,Rn */
	r8 = 0x0u;  /* 0C06678E mov #imm,Rn */
	UPD(0x0C066790u, 2);
L_0C066790: BLKS(0x0C066790u);
	r0 = 0xC27DC84u; UPD(0x0C066792u, 1);  /* 0C066790 mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C066792 mov Rm,Rn */
	r3 += r8;  /* 0C066794 add Rm,Rn */
	r3 += r0;  /* 0C066796 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06679Au, 4);  /* 0C066798 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C06679Cu, 1);  /* 0C06679A mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06679C tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x2Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0667ACu, 4); goto L_0C0667AC; } goto L_0C0667A2; }  /* 0C06679E bt/s */
L_0C0667A2: BLKS(0x0C0667A2u);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0667A4u, 2);  /* 0C0667A2 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C0667A4 extu.b Rm,Rn */
	T = r2 == r11;  /* 0C0667A6 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFD4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0667E0u, 5); goto L_0C0667E0; } UPD(0x0C0667ACu, 1); goto L_0C0667AC; }  /* 0C0667A8 bt/s */
L_0C0667AC: BLKS(0x0C0667ACu);
	r9 += 0x1u;  /* 0C0667AC add #imm,Rn */
	UPD(0x0C0667AEu, 1);
L_0C0667AE: BLKS(0x0C0667AEu);
	r3 = 0x2u;  /* 0C0667AE mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C0667B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C066790u, 5); goto L_0C066790; } goto L_0C0667B6; }  /* 0C0667B2 bf/s */
L_0C0667B6: BLKS(0x0C0667B6u);
	r9 = 0x90u; UPD(0x0C0667B8u, 2);  /* 0C0667B6 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C0667B8 add #imm,Rn */
	r8 = 0x1u;  /* 0C0667BA mov #imm,Rn */
	T = (s32)r12 > (s32)r8;  /* 0C0667BC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r9; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06678Cu, 6); goto L_0C06678C; } UPD(0x0C0667C2u, 1); goto L_0C0667C2; }  /* 0C0667BE bf/s */
L_0C0667C2: BLKS(0x0C0667C2u);
	r15 = r14;  /* 0C0667C2 mov Rm,Rn */
	IF(0x0C0667C4u); PR = R32(r15); r15 += 4; UPD(0x0C0667C6u, 2);  /* 0C0667C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0667C8u, 1);  /* 0C0667C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0667CAu, 1);  /* 0C0667C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0667CCu, 1);  /* 0C0667CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0667CEu, 1);  /* 0C0667CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0667D0u, 1);  /* 0C0667CE mov.l @Rm+,Rn */
	IF(0x0C0667D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0667D0 rts */
L_0C0667E0: BLKS(0x0C0667E0u);
	r3 += 0x2Du;  /* 0C0667E0 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0667E4u, 2);  /* 0C0667E2 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C0667E4 mov #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0667E6 extu.b Rm,Rn */
	r6 -= r2;  /* 0C0667E8 sub Rm,Rn */
	r6 += 0x1u;  /* 0C0667EA add #imm,Rn */
	T = r6 > r5;  /* 0C0667EC cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFD3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C066860u, 8); goto L_0C066860; } goto L_0C0667F2; }  /* 0C0667EE bt/s */
L_0C0667F2: BLKS(0x0C0667F2u);
	r2 = r3;  /* 0C0667F2 mov Rm,Rn */
	r2 += 0x2Eu;  /* 0C0667F4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0667F8u, 4);  /* 0C0667F6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0667F8 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C066800u, 4); goto L_0C066800; } goto L_0C0667FE; }  /* 0C0667FA bt/s */
L_0C0667FE: BLKS(0x0C0667FEu);
	W8(r2, r1); UPD(0x0C066800u, 2);  /* 0C0667FE mov.b Rm,@Rn */
L_0C066800: BLKS(0x0C066800u);
	r4 = 0xC27DC84u; UPD(0x0C066802u, 1);  /* 0C066800 mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C066802 mov Rm,Rn */
	r3 += r8;  /* 0C066804 add Rm,Rn */
	r3 += r4;  /* 0C066806 add Rm,Rn */
	r2 = r3;  /* 0C066808 mov Rm,Rn */
	r2 += 0x2Cu;  /* 0C06680A add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C06680Eu, 6);  /* 0C06680C mov.b @Rm,Rn */
	r3 += 0x2Du;  /* 0C06680E add #imm,Rn */
	W8(r3, r4); UPD(0x0C066812u, 2);  /* 0C066810 mov.b Rm,@Rn */
	r6 = 0x3u;  /* 0C066812 mov #imm,Rn */
	r3 += 0xFFFFFFD3u;  /* 0C066814 add #imm,Rn */
	r7 = R32(r3 + 0x4u); UPD(0x0C066818u, 3);  /* 0C066816 mov.l @(disp,Rm),Rn */
	r1 = 0xC170314u; UPD(0x0C06681Au, 1);  /* 0C066818 mov.l @(disp,pc),Rn */
	IF(0x0C06681Au); ARG0(0x476Du); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C06681A shld Rm,Rn */
	r7 += r1;  /* 0C06681C add Rm,Rn */
	r5 = R32(r7 + 0x4u); UPD(0x0C066820u, 3);  /* 0C06681E mov.l @(disp,Rm),Rn */
	r0 = 0xC393044u; UPD(0x0C066822u, 1);  /* 0C066820 mov.l @(disp,pc),Rn */
	W32(r0, r5); UPD(0x0C066824u, 1);  /* 0C066822 mov.l Rm,@Rn */
	r6 = R32(r7); UPD(0x0C066826u, 1);  /* 0C066824 mov.l @Rm,Rn */
	r5 = 0x3u;  /* 0C066826 mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C06682Au, 2);  /* 0C066828 mov.l @(disp,Rm),Rn */
	r7 = 0x4u;  /* 0C06682A mov #imm,Rn */
	IF(0x0C06682Cu); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06682C shld Rm,Rn */
	IF(0x0C06682Eu); r1 = R32(r0 + r6); UPD(0x0C066830u, 3);  /* 0C06682E mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C066832u, 1);  /* 0C066830 mov.l @(disp,Rm),Rn */
	IF(0x0C066832u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C066832 shld Rm,Rn */
	r5 = 0xC2175E8u; UPD(0x0C066836u, 2);  /* 0C066834 mov.l @(disp,pc),Rn */
	r3 += 0x2Eu;  /* 0C066836 add #imm,Rn */
	IF(0x0C066838u); r6 = R32(r0 + r1); UPD(0x0C06683Au, 2);  /* 0C066838 mov.l @(r0,Rm),Rn */
	W32(r5, r6); UPD(0x0C06683Cu, 1);  /* 0C06683A mov.l Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C06683C extu.b Rm,Rn */
	r6 = 0u - r0;  /* 0C06683E neg Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C066842u, 3);  /* 0C066840 mov.b @Rm,Rn */
	r6 += 0x14u;  /* 0C066842 add #imm,Rn */
	r0 = 0xC063B90u; UPD(0x0C066846u, 2);  /* 0C066844 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFD2u;  /* 0C066846 add #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C066848 extu.b Rm,Rn */
	r4 = R32(r3 + 0x14u); UPD(0x0C06684Cu, 3);  /* 0C06684A mov.l @(disp,Rm),Rn */
	IF(0x0C06684Cu); { u32 t_ = r0; PR = 0x0C066850u; r5 = R32(r3 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C066850u); }  /* 0C06684C jsr @Rn */
L_0C066850: BLKS(0x0C066850u);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0667AEu, 3); goto L_0C0667AE; }  /* 0C066850 bra */
L_0C066860: BLKS(0x0C066860u);
	r3 += 0x2Eu;  /* 0C066860 add #imm,Rn */
	r2 = 0x40u;  /* 0C066862 mov #imm,Rn */
	{ W8(r3, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C066800u, 5); goto L_0C066800; }  /* 0C066864 bra */
}

/* FUN_0c066890 */
void f_0C066890(sh3_t *c)
{
	LOCALS;
L_0C066890: BLKS(0x0C066890u);
	r6 = (u32)(s32)(s16)r5;  /* 0C066890 exts.w Rm,Rn */
	r5 = 0x90u; UPD(0x0C066894u, 2);  /* 0C066892 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066894 exts.w Rm,Rn */
	IF(0x0C066896u); MACL = r4 * r5;  /* 0C066896 mul.l Rm,Rn */
	r3 = 0x30u;  /* 0C066898 mov #imm,Rn */
	r2 = 0x280u; UPD(0x0C06689Cu, 5);  /* 0C06689A mov.w @(disp,pc),Rn */
	IF(0x0C06689Cu); r5 = MACL;  /* 0C06689C sts macl,Rn */
	IF(0x0C06689Eu); MACL = r6 * r3;  /* 0C06689E mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0668A2u, 4);  /* 0C0668A0 mov.l Rm,@-Rn */
	IF(0x0C0668A2u); r3 = MACL;  /* 0C0668A2 sts macl,Rn */
	IF(0x0C0668A4u); MACL = r4 * r2;  /* 0C0668A4 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C0668A8u, 4);  /* 0C0668A6 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C0668A8 add Rm,Rn */
	IF(0x0C0668AAu); r7 = MACL;  /* 0C0668AA sts macl,Rn */
	r7 += r0;  /* 0C0668AC add Rm,Rn */
	r8 = 0xC27DC84u; UPD(0x0C0668B0u, 4);  /* 0C0668AE mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0668B2u, 1);  /* 0C0668B0 mov.l Rm,@-Rn */
	r3 += r8;  /* 0C0668B2 add Rm,Rn */
	r0 = 0x238u; UPD(0x0C0668B6u, 2);  /* 0C0668B4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0668B6 mov Rm,Rn */
	IF(0x0C0668B8u); r1 = R32(r0 + r7); UPD(0x0C0668BAu, 2);  /* 0C0668B8 mov.l @(r0,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0668BCu, 1);  /* 0C0668BA mov.l @(disp,Rm),Rn */
	r0 += 0x10u;  /* 0C0668BC add #imm,Rn */
	r2 += r1;  /* 0C0668BE add Rm,Rn */
	W32(r3 + 0x14u, r2); UPD(0x0C0668C2u, 3);  /* 0C0668C0 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x20u); UPD(0x0C0668C4u, 1);  /* 0C0668C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0668C4u); r1 = R32(r0 + r7); UPD(0x0C0668C6u, 1);  /* 0C0668C4 mov.l @(r0,Rm),Rn */
	r2 += r1;  /* 0C0668C6 add Rm,Rn */
	r1 = R32(r3 + 0x4u); UPD(0x0C0668CAu, 2);  /* 0C0668C8 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0668CCu, 1);  /* 0C0668CA mov.l @(disp,Rm),Rn */
	T = r1 == r0;  /* 0C0668CC cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C066970u, 4); goto L_0C066970; } UPD(0x0C0668D2u, 1); goto L_0C0668D2; }  /* 0C0668CE bt/s */
L_0C0668D2: BLKS(0x0C0668D2u);
	r0 = r6;  /* 0C0668D2 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0668D4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066950u, 5); goto L_0C066950; } goto L_0C0668DA; }  /* 0C0668D6 bt/s */
L_0C0668DA: BLKS(0x0C0668DAu);
	T = (s32)r6 > (s32)r2;  /* 0C0668DA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C066930u, 5); goto L_0C066930; } goto L_0C0668E0; }  /* 0C0668DC bt/s */
L_0C0668E0: BLKS(0x0C0668E0u);
	T = (r6 & r6) == 0;  /* 0C0668E0 tst Rm,Rn */
	{ u32 c_ = T; r3 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066920u, 5); goto L_0C066920; } UPD(0x0C0668E6u, 1); goto L_0C0668E6; }  /* 0C0668E2 bt/s */
L_0C0668E6: BLKS(0x0C0668E6u);
	r0 = 0x90u; UPD(0x0C0668E8u, 1);  /* 0C0668E6 mov.w @(disp,pc),Rn */
	r8 = 0x30u;  /* 0C0668E8 mov #imm,Rn */
	IF(0x0C0668EAu); MACL = r4 * r0;  /* 0C0668EA mul.l Rm,Rn */
	r3 = 0xC27DC84u; UPD(0x0C0668EEu, 4);  /* 0C0668EC mov.l @(disp,pc),Rn */
	IF(0x0C0668EEu); r2 = MACL;  /* 0C0668EE sts macl,Rn */
	IF(0x0C0668F0u); MACL = r6 * r8;  /* 0C0668F0 mul.l Rm,Rn */
	IF(0x0C0668F2u); r6 = MACL;  /* 0C0668F2 sts macl,Rn */
	r2 += r6;  /* 0C0668F4 add Rm,Rn */
	r2 += r3;  /* 0C0668F6 add Rm,Rn */
	r3 = R32(r2 + 0x1Cu); UPD(0x0C0668FAu, 7);  /* 0C0668F8 mov.l @(disp,Rm),Rn */
	r4 = R32(r2 + 0x20u); UPD(0x0C0668FCu, 1);  /* 0C0668FA mov.l @(disp,Rm),Rn */
	r3 |= r4;  /* 0C0668FC or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0668FE tst Rm,Rn */
	if (!T) { UPD(0x0C066910u, 5); goto L_0C066910; }  /* 0C066900 bf */
L_0C066902: BLKS(0x0C066902u);
	r7 = R32(r2 + 0x10u); UPD(0x0C066904u, 1);  /* 0C066902 mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C066906u, 1);  /* 0C066904 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x4u, r7); UPD(0x0C066908u, 1);  /* 0C066906 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r3); UPD(0x0C06690Au, 1);  /* 0C066908 mov.l Rm,@(disp,Rn) */
	r2 += 0x2Bu;  /* 0C06690A add #imm,Rn */
	W8(r2, r3); UPD(0x0C06690Eu, 2);  /* 0C06690C mov.b Rm,@Rn */
	{ u32 v_ = r3; r2 -= 1; W8(r2, v_); } UPD(0x0C066910u, 1);  /* 0C06690E mov.b Rm,@-Rn */
L_0C066910: BLKS(0x0C066910u);
	r15 = r14;  /* 0C066910 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066914u, 2);  /* 0C066912 mov.l @Rm+,Rn */
	IF(0x0C066914u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066914 rts */
L_0C066920: BLKS(0x0C066920u);
	r3 += r8;  /* 0C066920 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C066924u, 2);  /* 0C066922 mov.l @(disp,Rm),Rn */
	r1 = 0x10000u; UPD(0x0C066926u, 1);  /* 0C066924 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C066926 tst Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0668E6u, 4); goto L_0C0668E6; } UPD(0x0C06692Cu, 1); goto L_0C06692C; }  /* 0C066928 bt/s */
L_0C06692C: BLKS(0x0C06692Cu);
	{ W32(r3 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0668E6u, 3); goto L_0C0668E6; }  /* 0C06692C bra */
L_0C066930: BLKS(0x0C066930u);
	{ u32 c_ = !T; r3 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0668E6u, 3); goto L_0C0668E6; } goto L_0C066934; }  /* 0C066930 bf/s */
L_0C066934: BLKS(0x0C066934u);
	r3 += 0x60u;  /* 0C066934 add #imm,Rn */
	r3 += r8;  /* 0C066936 add Rm,Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C06693Au, 4);  /* 0C066938 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06693A tst Rm,Rn */
	if (T) { UPD(0x0C0668E6u, 4); goto L_0C0668E6; }  /* 0C06693C bt */
L_0C06693E: BLKS(0x0C06693Eu);
	r5 = 0x10000u; UPD(0x0C066940u, 1);  /* 0C06693E mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C066940 add Rm,Rn */
	{ W32(r3 + 0x1Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0668E6u, 4); goto L_0C0668E6; }  /* 0C066942 bra */
L_0C066950: BLKS(0x0C066950u);
	r3 = r5;  /* 0C066950 mov Rm,Rn */
	r3 += 0x30u;  /* 0C066952 add #imm,Rn */
	r3 += r8;  /* 0C066954 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C066958u, 4);  /* 0C066956 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C066958 tst Rm,Rn */
	if (T) { UPD(0x0C0668E6u, 4); goto L_0C0668E6; }  /* 0C06695A bt */
L_0C06695C: BLKS(0x0C06695Cu);
	r1 = 0xFFFF0000u; UPD(0x0C06695Eu, 1);  /* 0C06695C mov.l @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C06692Cu, 3); goto L_0C06692C; }  /* 0C06695E bra */
L_0C066970: BLKS(0x0C066970u);
	r0 = r6;  /* 0C066970 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C066972 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0669E0u, 5); goto L_0C0669E0; } goto L_0C066978; }  /* 0C066974 bt/s */
L_0C066978: BLKS(0x0C066978u);
	T = (s32)r6 > (s32)r4;  /* 0C066978 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0669B0u, 5); goto L_0C0669B0; } goto L_0C06697E; }  /* 0C06697A bt/s */
L_0C06697E: BLKS(0x0C06697Eu);
	T = (r6 & r6) == 0;  /* 0C06697E tst Rm,Rn */
	if (!T) { UPD(0x0C066910u, 5); goto L_0C066910; }  /* 0C066980 bf */
L_0C066982: BLKS(0x0C066982u);
	r3 = r5;  /* 0C066982 mov Rm,Rn */
	r3 += r8;  /* 0C066984 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C066988u, 3);  /* 0C066986 mov.l @(disp,Rm),Rn */
	IF(0x0C066988u); T = (s32)r2 >= 0;  /* 0C066988 cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0669A0u, 4); goto L_0C0669A0; } UPD(0x0C06698Eu, 1); goto L_0C06698E; }  /* 0C06698A bf/s */
L_0C06698E: BLKS(0x0C06698Eu);
	r6 = 0x1C0000u; UPD(0x0C066990u, 1);  /* 0C06698E mov.l @(disp,pc),Rn */
	r1 = 0xFFFF0000u; UPD(0x0C066992u, 1);  /* 0C066990 mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C066992 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C066910u, 4); goto L_0C066910; }  /* 0C066994 bt */
L_0C066996: BLKS(0x0C066996u);
	r2 += r1;  /* 0C066996 add Rm,Rn */
	UPD(0x0C066998u, 1);
L_0C066998: BLKS(0x0C066998u);
	{ W32(r3 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C066910u, 3); goto L_0C066910; }  /* 0C066998 bra */
L_0C0669A0: BLKS(0x0C0669A0u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06698Eu, 3); goto L_0C06698E; }  /* 0C0669A0 bra */
L_0C0669B0: BLKS(0x0C0669B0u);
	if (!T) { UPD(0x0C066910u, 3); goto L_0C066910; }  /* 0C0669B0 bf */
L_0C0669B2: BLKS(0x0C0669B2u);
	r3 = r5;  /* 0C0669B2 mov Rm,Rn */
	r3 += 0x60u;  /* 0C0669B4 add #imm,Rn */
	r3 += r8;  /* 0C0669B6 add Rm,Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0669BAu, 4);  /* 0C0669B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0669BAu); T = (s32)r2 >= 0;  /* 0C0669BA cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0669D0u, 4); goto L_0C0669D0; } UPD(0x0C0669C0u, 1); goto L_0C0669C0; }  /* 0C0669BC bf/s */
L_0C0669C0: BLKS(0x0C0669C0u);
	r0 = 0x1C0000u; UPD(0x0C0669C2u, 1);  /* 0C0669C0 mov.l @(disp,pc),Rn */
	T = r7 == r0;  /* 0C0669C2 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C066910u, 4); goto L_0C066910; }  /* 0C0669C4 bt */
L_0C0669C6: BLKS(0x0C0669C6u);
	r7 = 0xFFFF0000u; UPD(0x0C0669C8u, 1);  /* 0C0669C6 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0669C8 add Rm,Rn */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0669CCu, 2);  /* 0C0669CA mov.l Rm,@(disp,Rn) */
L_0C0669CC: BLKS(0x0C0669CCu);
	{ IF(0x0C0669CEu); ; /* slot nop */ UPD(0x0C066910u, 3); goto L_0C066910; }  /* 0C0669CC bra */
L_0C0669D0: BLKS(0x0C0669D0u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0669C0u, 3); goto L_0C0669C0; }  /* 0C0669D0 bra */
L_0C0669E0: BLKS(0x0C0669E0u);
	r3 = r5;  /* 0C0669E0 mov Rm,Rn */
	r3 += 0x30u;  /* 0C0669E2 add #imm,Rn */
	r3 += r8;  /* 0C0669E4 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C0669E8u, 4);  /* 0C0669E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0669E8u); T = (s32)r2 >= 0;  /* 0C0669E8 cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066A00u, 4); goto L_0C066A00; } UPD(0x0C0669EEu, 1); goto L_0C0669EE; }  /* 0C0669EA bf/s */
L_0C0669EE: BLKS(0x0C0669EEu);
	r8 = 0x1C0000u; UPD(0x0C0669F0u, 1);  /* 0C0669EE mov.l @(disp,pc),Rn */
	T = r7 == r8;  /* 0C0669F0 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0669CCu, 4); goto L_0C0669CC; }  /* 0C0669F2 bt */
L_0C0669F4: BLKS(0x0C0669F4u);
	r1 = 0x10000u; UPD(0x0C0669F6u, 1);  /* 0C0669F4 mov.l @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C066998u, 3); goto L_0C066998; }  /* 0C0669F6 bra */
L_0C066A00: BLKS(0x0C066A00u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0669EEu, 3); goto L_0C0669EE; }  /* 0C066A00 bra */
}

/* FUN_0c066a20 */
void f_0C066A20(sh3_t *c)
{
	LOCALS;
L_0C066A20: BLKS(0x0C066A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066A22u, 1);  /* 0C066A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066A24u, 1);  /* 0C066A22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066A26u, 1);  /* 0C066A24 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C066A26 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066A2Au, 2);  /* 0C066A28 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C066A2A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066A2Eu, 2);  /* 0C066A2C mov.l Rm,@-Rn */
	r0 = r10;  /* 0C066A2E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066A32u, 2);  /* 0C066A30 mov.l Rm,@-Rn */
	IF(0x0C066A32u); r0 <<= 2;  /* 0C066A32 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066A36u, 2);  /* 0C066A34 mov.l Rm,@-Rn */
	r6 = 0xC1704C0u; UPD(0x0C066A38u, 1);  /* 0C066A36 mov.l @(disp,pc),Rn */
	IF(0x0C066A38u); r15 -= 4; W32(r15, PR); UPD(0x0C066A3Au, 1);  /* 0C066A38 sts.l pr,@-Rn */
	IF(0x0C066A3Au); r5 = R32(r0 + r6); UPD(0x0C066A3Cu, 1);  /* 0C066A3A mov.l @(r0,Rm),Rn */
	r3 = 0x280u; UPD(0x0C066A3Eu, 1);  /* 0C066A3C mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C066A3E mov Rm,Rn */
	IF(0x0C066A40u); r0 <<= 2;  /* 0C066A40 shll2 Rn */
	IF(0x0C066A42u); r7 = R32(r0 + r5); UPD(0x0C066A44u, 3);  /* 0C066A42 mov.l @(r0,Rm),Rn */
	IF(0x0C066A44u); MACL = r10 * r3;  /* 0C066A44 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C066A48u, 3);  /* 0C066A46 mov.l @(disp,pc),Rn */
	IF(0x0C066A48u); r3 = MACL;  /* 0C066A48 sts macl,Rn */
	r3 += r0;  /* 0C066A4A add Rm,Rn */
	r2 = 0x262u; UPD(0x0C066A4Eu, 3);  /* 0C066A4C mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C066A4E mov Rm,Rn */
	r0 += r9;  /* 0C066A50 add Rm,Rn */
	IF(0x0C066A52u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C066A54u, 3);  /* 0C066A52 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C066A54 extu.b Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C066A56 add #imm,Rn */
	r0 = 0x4u;  /* 0C066A58 mov #imm,Rn */
	T = r2 > r0;  /* 0C066A5A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066A64u, 7); goto L_0C066A64; } goto L_0C066A60; }  /* 0C066A5C bf/s */
L_0C066A60: BLKS(0x0C066A60u);
	{ r12 = 0x30u; /* slot mov #imm,Rn */ UPD(0x0C066C90u, 4); goto L_0C066C90; }  /* 0C066A60 bra */
L_0C066A64: BLKS(0x0C066A64u);
	r0 = 0xC066A7Cu;  /* 0C066A64 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C066A66 add Rm,Rn */
	IF(0x0C066A68u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C066A6Au, 3);  /* 0C066A68 mov.w @(r0,Rm),Rn */
	IF(0x0C066A6Au); { u32 tv_ = (r7 + 0x0C066A6Eu); u32 t_ = PHYS(tv_); IF(0x0C066A6Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C066A90u: goto L_0C066A90; case 0x0C066BE0u: goto L_0C066BE0; case 0x0C066C00u: goto L_0C066C00; case 0x0C066C20u: goto L_0C066C20; case 0x0C066C40u: goto L_0C066C40; default: JUMPD(tv_); } }  /* 0C066A6A braf Rn */
L_0C066A90: BLKS(0x0C066A90u);
	r5 = 0x90u; UPD(0x0C066A92u, 1);  /* 0C066A90 mov.w @(disp,pc),Rn */
	r3 = 0x30u;  /* 0C066A92 mov #imm,Rn */
	IF(0x0C066A94u); MACL = r10 * r5;  /* 0C066A94 mul.l Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066A98u, 4);  /* 0C066A96 mov.l @(disp,pc),Rn */
	IF(0x0C066A98u); r11 = MACL;  /* 0C066A98 sts macl,Rn */
	IF(0x0C066A9Au); MACL = r9 * r3;  /* 0C066A9A mul.l Rm,Rn */
	IF(0x0C066A9Cu); r0 = MACL;  /* 0C066A9C sts macl,Rn */
	r11 += r0;  /* 0C066A9E add Rm,Rn */
	r11 += r13;  /* 0C066AA0 add Rm,Rn */
	r0 = 0xC065950u; UPD(0x0C066AA4u, 7);  /* 0C066AA2 mov.l @(disp,pc),Rn */
	r8 = r11;  /* 0C066AA4 mov Rm,Rn */
	r8 += 0x28u;  /* 0C066AA6 add #imm,Rn */
	IF(0x0C066AA8u); { u32 t_ = r0; PR = 0x0C066AACu; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C065950, 0x0C065950u, 0x0C066AACu); }  /* 0C066AA8 jsr @Rn */
L_0C066AAC: BLKS(0x0C066AACu);
	W16(r8, r0); UPD(0x0C066AAEu, 1);  /* 0C066AAC mov.w Rm,@Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C066AAE exts.w Rm,Rn */
	r2 = 0xBFu; UPD(0x0C066AB2u, 2);  /* 0C066AB0 mov.w @(disp,pc),Rn */
	r12 = r11;  /* 0C066AB2 mov Rm,Rn */
	r12 += 0x26u;  /* 0C066AB4 add #imm,Rn */
	T = (s32)r4 > (s32)r2;  /* 0C066AB6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066AC0u, 6); goto L_0C066AC0; } goto L_0C066ABC; }  /* 0C066AB8 bt/s */
L_0C066ABC: BLKS(0x0C066ABCu);
	{ r5 = R32(r11 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C066BC0u, 4); goto L_0C066BC0; }  /* 0C066ABC bra */
L_0C066AC0: BLKS(0x0C066AC0u);
	W16(r12, r0); UPD(0x0C066AC2u, 1);  /* 0C066AC0 mov.w Rm,@Rn */
	IF(0x0C066AC2u); ;  /* 0C066AC2 nop */
	UPD(0x0C066AC4u, 1);
L_0C066AC4: BLKS(0x0C066AC4u);
	r11 = 0x280u; UPD(0x0C066AC6u, 1);  /* 0C066AC4 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFCu;  /* 0C066AC6 mov #imm,Rn */
	IF(0x0C066AC8u); MACL = r10 * r11;  /* 0C066AC8 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C066ACCu, 4);  /* 0C066ACA mov.l @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C066ACC mov #imm,Rn */
	IF(0x0C066ACEu); r11 = MACL;  /* 0C066ACE sts macl,Rn */
	r2 = 0x24Cu; UPD(0x0C066AD2u, 3);  /* 0C066AD0 mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C066AD2 add Rm,Rn */
	r2 += r11;  /* 0C066AD4 add Rm,Rn */
	r2 += 0x1u;  /* 0C066AD6 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C066ADAu, 4);  /* 0C066AD8 mov.b @Rm,Rn */
	r1 = r11;  /* 0C066ADA mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C066ADC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C066AE0u, 3);  /* 0C066ADE mov.b @Rm,Rn */
	IF(0x0C066AE0u); ARG0(0x464Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C066AE0 shad Rm,Rn */
	IF(0x0C066AE2u); ARG0(0x474Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C066AE2 shad Rm,Rn */
	r5 = 0x262u; UPD(0x0C066AE6u, 3);  /* 0C066AE4 mov.w @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C066AE6 mov #imm,Rn */
	r1 += r9;  /* 0C066AE8 add Rm,Rn */
	r4 ^= r7;  /* 0C066AEA xor Rm,Rn */
	r0 = r1;  /* 0C066AEC mov Rm,Rn */
	IF(0x0C066AEEu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C066AF0u, 5);  /* 0C066AEE mov.b @(r0,Rm),Rn */
	r4 |= r6;  /* 0C066AF0 or Rm,Rn */
	r6 = R32(r11 + 0x4u); UPD(0x0C066AF4u, 2);  /* 0C066AF2 mov.l @(disp,Rm),Rn */
	r4 &= r8;  /* 0C066AF4 and Rm,Rn */
	r0 = 0x3u;  /* 0C066AF6 mov #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C066AF8 tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C066AFA mov #imm,Rn */
	r6 &= r0;  /* 0C066AFC and Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r12 = r_; }  /* 0C066AFE negc Rm,Rn */
	r0 = r6;  /* 0C066B00 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C066B02 cmp/eq #imm,r0 */
	IF(0x0C066B04u); r7 = T;  /* 0C066B04 movt Rn */
	r0 = r9;  /* 0C066B06 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C066B08 cmp/eq #imm,r0 */
	IF(0x0C066B0Au); r2 = T;  /* 0C066B0A movt Rn */
	r0 = r6;  /* 0C066B0C mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C066B0E cmp/eq #imm,r0 */
	IF(0x0C066B10u); r5 = T;  /* 0C066B10 movt Rn */
	IF(0x0C066B12u); T = (s32)r2 > 0;  /* 0C066B12 cmp/pl Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C066B14 negc Rm,Rn */
	r4 |= r12;  /* 0C066B16 or Rm,Rn */
	r7 &= r2;  /* 0C066B18 and Rm,Rn */
	r4 |= r7;  /* 0C066B1A or Rm,Rn */
	r3 &= r5;  /* 0C066B1C and Rm,Rn */
	r4 |= r3;  /* 0C066B1E or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C066B20 tst Rm,Rn */
	if (T) { UPD(0x0C066B78u, 26); goto L_0C066B78; }  /* 0C066B22 bt */
L_0C066B24: BLKS(0x0C066B24u);
	r3 = r9;  /* 0C066B24 mov Rm,Rn */
	r5 = 0xC1704C8u; UPD(0x0C066B28u, 2);  /* 0C066B26 mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C066B28 add Rm,Rn */
	r3 += r5;  /* 0C066B2A add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C066B2Eu, 3);  /* 0C066B2C mov.w @Rm,Rn */
	IF(0x0C066B2Eu); T = (s32)r12 > 0;  /* 0C066B2E cmp/pl Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066B78u, 4); goto L_0C066B78; } goto L_0C066B34; }  /* 0C066B30 bf/s */
L_0C066B34: BLKS(0x0C066B34u);
	r4 = 0x90u; UPD(0x0C066B36u, 2);  /* 0C066B34 mov.w @(disp,pc),Rn */
	r7 = 0x30u;  /* 0C066B36 mov #imm,Rn */
	IF(0x0C066B38u); MACL = r10 * r4;  /* 0C066B38 mul.l Rm,Rn */
	r0 = 0x100u; UPD(0x0C066B3Cu, 4);  /* 0C066B3A mov.w @(disp,pc),Rn */
	r5 = r3;  /* 0C066B3C mov Rm,Rn */
	IF(0x0C066B3Eu); r8 = MACL;  /* 0C066B3E sts macl,Rn */
	IF(0x0C066B40u); MACL = r9 * r7;  /* 0C066B40 mul.l Rm,Rn */
	r11 = 0xFFu; UPD(0x0C066B44u, 5);  /* 0C066B42 mov.w @(disp,pc),Rn */
	IF(0x0C066B44u); r1 = MACL;  /* 0C066B44 sts macl,Rn */
	r8 += r1;  /* 0C066B46 add Rm,Rn */
	r8 += r13;  /* 0C066B48 add Rm,Rn */
	r7 = r8;  /* 0C066B4A mov Rm,Rn */
	r8 += 0x26u;  /* 0C066B4C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C066B50u, 6);  /* 0C066B4E mov.w @Rm,Rn */
	r7 += 0x24u;  /* 0C066B50 add #imm,Rn */
	r8 = 0x100u; UPD(0x0C066B54u, 2);  /* 0C066B52 mov.w @(disp,pc),Rn */
L_0C066B54: BLKS(0x0C066B54u);
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C066B56u, 1);  /* 0C066B54 mov.w @Rm,Rn */
	r2 = r4;  /* 0C066B56 mov Rm,Rn */
	r2 -= r3;  /* 0C066B58 sub Rm,Rn */
	r12 = 0x1FFu; UPD(0x0C066B5Cu, 3);  /* 0C066B5A mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C066B5C add Rm,Rn */
	r2 &= r12;  /* 0C066B5E and Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C066B60 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (s32)r2 > (s32)r11; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C066BB0u, 6); goto L_0C066BB0; } goto L_0C066B66; }  /* 0C066B62 bf/s */
L_0C066B66: BLKS(0x0C066B66u);
	r1 = r3;  /* 0C066B66 mov Rm,Rn */
	r1 += 0x1u;  /* 0C066B68 add #imm,Rn */
	UPD(0x0C066B6Au, 3);
L_0C066B6A: BLKS(0x0C066B6Au);
	W16(r7, r1); UPD(0x0C066B6Cu, 1);  /* 0C066B6A mov.w Rm,@Rn */
	r2 = r6;  /* 0C066B6C mov Rm,Rn */
	UPD(0x0C066B6Eu, 1);
L_0C066B6E: BLKS(0x0C066B6Eu);
	r2 += 0x1u;  /* 0C066B6E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C066B72u, 2);  /* 0C066B70 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C066B72 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C066B74 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C066B54u, 5); goto L_0C066B54; }  /* 0C066B76 bt */
L_0C066B78: BLKS(0x0C066B78u);
	r11 = 0x90u; UPD(0x0C066B7Au, 1);  /* 0C066B78 mov.w @(disp,pc),Rn */
	r0 = 0x30u;  /* 0C066B7A mov #imm,Rn */
	IF(0x0C066B7Cu); MACL = r10 * r11;  /* 0C066B7C mul.l Rm,Rn */
	IF(0x0C066B7Eu); r10 = MACL;  /* 0C066B7E sts macl,Rn */
	IF(0x0C066B80u); MACL = r9 * r0;  /* 0C066B80 mul.l Rm,Rn */
	IF(0x0C066B82u); r6 = MACL;  /* 0C066B82 sts macl,Rn */
	r10 += r6;  /* 0C066B84 add Rm,Rn */
	r10 += r13;  /* 0C066B86 add Rm,Rn */
	r10 += 0x24u;  /* 0C066B88 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C066B8Cu, 11);  /* 0C066B8A mov.w @Rm,Rn */
	r0 = r9 & 0xFFFF;  /* 0C066B8C extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C066B8E add #imm,Rn */
	IF(0x0C066B90u); r0 >>= 2;  /* 0C066B90 shlr2 Rn */
	IF(0x0C066B92u); T = r0 & 1; r0 >>= 1;  /* 0C066B92 shlr Rn */
	r10 += 0xFFFFFFDCu;  /* 0C066B94 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C066B96 and #imm,r0 */
	W32(r10 + 0xCu, r0); UPD(0x0C066B9Au, 7);  /* 0C066B98 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C066B9A mov Rm,Rn */
	IF(0x0C066B9Cu); PR = R32(r15); r15 += 4; UPD(0x0C066B9Eu, 2);  /* 0C066B9C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066BA0u, 1);  /* 0C066B9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066BA2u, 1);  /* 0C066BA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066BA4u, 1);  /* 0C066BA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066BA6u, 1);  /* 0C066BA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066BA8u, 1);  /* 0C066BA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066BAAu, 1);  /* 0C066BA8 mov.l @Rm+,Rn */
	IF(0x0C066BAAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066BAA rts */
L_0C066BB0: BLKS(0x0C066BB0u);
	{ u32 c_ = T; r2 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066B6Eu, 3); goto L_0C066B6E; } goto L_0C066BB4; }  /* 0C066BB0 bt/s */
L_0C066BB4: BLKS(0x0C066BB4u);
	r1 = r3;  /* 0C066BB4 mov Rm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C066B6Au, 5); goto L_0C066B6A; }  /* 0C066BB6 bra */
L_0C066BC0: BLKS(0x0C066BC0u);
	r7 = 0xB4u; UPD(0x0C066BC2u, 1);  /* 0C066BC0 mov.w @(disp,pc),Rn */
	IF(0x0C066BC2u); MACL = r4 * r7;  /* 0C066BC2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C066BC6u, 3);  /* 0C066BC4 mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C066BC8u, 1);  /* 0C066BC6 mov.l @(disp,pc),Rn */
	IF(0x0C066BC8u); r0 = MACL;  /* 0C066BC8 sts macl,Rn */
	r0 += r6;  /* 0C066BCA add Rm,Rn */
	r4 = R32(r11 + 0x14u); UPD(0x0C066BCEu, 3);  /* 0C066BCC mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C066BD0u, 1);  /* 0C066BCE mov.l @(disp,Rm),Rn */
	IF(0x0C066BD0u); { u32 t_ = r8; PR = 0x0C066BD4u; r7 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C066BD4u); }  /* 0C066BD0 jsr @Rn */
L_0C066BD4: BLKS(0x0C066BD4u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C066AC0u, 3); goto L_0C066AC0; }  /* 0C066BD4 bra */
L_0C066BE0: BLKS(0x0C066BE0u);
	r4 = 0x90u; UPD(0x0C066BE2u, 1);  /* 0C066BE0 mov.w @(disp,pc),Rn */
	r12 = 0x30u;  /* 0C066BE2 mov #imm,Rn */
	IF(0x0C066BE4u); MACL = r10 * r4;  /* 0C066BE4 mul.l Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066BE8u, 4);  /* 0C066BE6 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C066BE8 mov Rm,Rn */
	IF(0x0C066BEAu); r2 = MACL;  /* 0C066BEA sts macl,Rn */
	IF(0x0C066BECu); MACL = r9 * r12;  /* 0C066BEC mul.l Rm,Rn */
	r1 = 0xC17049Cu; UPD(0x0C066BF0u, 5);  /* 0C066BEE mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C066BF0 add Rm,Rn */
	IF(0x0C066BF2u); r11 = MACL;  /* 0C066BF2 sts macl,Rn */
	r2 += r11;  /* 0C066BF4 add Rm,Rn */
	r2 += r13;  /* 0C066BF6 add Rm,Rn */
	r2 += 0x26u;  /* 0C066BF8 add #imm,Rn */
	UPD(0x0C066BFAu, 5);
L_0C066BFA: BLKS(0x0C066BFAu);
	IF(0x0C066BFAu); r1 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C066BFCu, 1);  /* 0C066BFA mov.w @(r0,Rm),Rn */
L_0C066BFC: BLKS(0x0C066BFCu);
	{ W16(r2, r1); /* slot mov.w Rm,@Rn */ UPD(0x0C066AC4u, 3); goto L_0C066AC4; }  /* 0C066BFC bra */
L_0C066C00: BLKS(0x0C066C00u);
	r2 = 0x90u; UPD(0x0C066C02u, 1);  /* 0C066C00 mov.w @(disp,pc),Rn */
	r5 = 0x30u;  /* 0C066C02 mov #imm,Rn */
	IF(0x0C066C04u); MACL = r10 * r2;  /* 0C066C04 mul.l Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066C08u, 4);  /* 0C066C06 mov.l @(disp,pc),Rn */
	IF(0x0C066C08u); r2 = MACL;  /* 0C066C08 sts macl,Rn */
	IF(0x0C066C0Au); MACL = r9 * r5;  /* 0C066C0A mul.l Rm,Rn */
	IF(0x0C066C0Cu); r3 = MACL;  /* 0C066C0C sts macl,Rn */
	r2 += r3;  /* 0C066C0E add Rm,Rn */
	r2 += r13;  /* 0C066C10 add Rm,Rn */
	r2 += 0x26u;  /* 0C066C12 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C066C16u, 8);  /* 0C066C14 mov.w @Rm,Rn */
	{ r1 += 0xFFFFFFFDu; /* slot add #imm,Rn */ UPD(0x0C066BFCu, 3); goto L_0C066BFC; }  /* 0C066C16 bra */
L_0C066C20: BLKS(0x0C066C20u);
	r6 = 0x90u; UPD(0x0C066C22u, 1);  /* 0C066C20 mov.w @(disp,pc),Rn */
	r0 = 0x30u;  /* 0C066C22 mov #imm,Rn */
	IF(0x0C066C24u); MACL = r10 * r6;  /* 0C066C24 mul.l Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066C28u, 4);  /* 0C066C26 mov.l @(disp,pc),Rn */
	IF(0x0C066C28u); r2 = MACL;  /* 0C066C28 sts macl,Rn */
	IF(0x0C066C2Au); MACL = r9 * r0;  /* 0C066C2A mul.l Rm,Rn */
	IF(0x0C066C2Cu); r8 = MACL;  /* 0C066C2C sts macl,Rn */
	r2 += r8;  /* 0C066C2E add Rm,Rn */
	r2 += r13;  /* 0C066C30 add Rm,Rn */
	r2 += 0x26u;  /* 0C066C32 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C066C36u, 8);  /* 0C066C34 mov.w @Rm,Rn */
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C066BFCu, 3); goto L_0C066BFC; }  /* 0C066C36 bra */
L_0C066C40: BLKS(0x0C066C40u);
	r12 = 0x90u; UPD(0x0C066C42u, 1);  /* 0C066C40 mov.w @(disp,pc),Rn */
	r11 = 0x30u;  /* 0C066C42 mov #imm,Rn */
	IF(0x0C066C44u); MACL = r10 * r12;  /* 0C066C44 mul.l Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066C48u, 4);  /* 0C066C46 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C066C48 mov Rm,Rn */
	IF(0x0C066C4Au); r2 = MACL;  /* 0C066C4A sts macl,Rn */
	IF(0x0C066C4Cu); MACL = r9 * r11;  /* 0C066C4C mul.l Rm,Rn */
	r1 = 0xC1704A2u; UPD(0x0C066C50u, 5);  /* 0C066C4E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C066C50 add Rm,Rn */
	IF(0x0C066C52u); r7 = MACL;  /* 0C066C52 sts macl,Rn */
	r2 += r7;  /* 0C066C54 add Rm,Rn */
	r2 += r13;  /* 0C066C56 add Rm,Rn */
	{ r2 += 0x26u; /* slot add #imm,Rn */ UPD(0x0C066BFAu, 7); goto L_0C066BFA; }  /* 0C066C58 bra */
L_0C066C90: BLKS(0x0C066C90u);
	r4 = 0x90u; UPD(0x0C066C92u, 1);  /* 0C066C90 mov.w @(disp,pc),Rn */
	IF(0x0C066C92u); MACL = r10 * r4;  /* 0C066C92 mul.l Rm,Rn */
	r0 = 0x24Cu; UPD(0x0C066C96u, 3);  /* 0C066C94 mov.w @(disp,pc),Rn */
	r8 = 0xFu;  /* 0C066C96 mov #imm,Rn */
	IF(0x0C066C98u); r2 = MACL;  /* 0C066C98 sts macl,Rn */
	IF(0x0C066C9Au); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C066C9Cu, 3);  /* 0C066C9A mov.b @(r0,Rm),Rn */
	IF(0x0C066C9Cu); MACL = r9 * r12;  /* 0C066C9C mul.l Rm,Rn */
	r8 &= r1;  /* 0C066C9E and Rm,Rn */
	r13 = 0xC27DC84u; UPD(0x0C066CA2u, 4);  /* 0C066CA0 mov.l @(disp,pc),Rn */
	IF(0x0C066CA2u); r11 = MACL;  /* 0C066CA2 sts macl,Rn */
	r8 += r8;  /* 0C066CA4 add Rm,Rn */
	r2 += r11;  /* 0C066CA6 add Rm,Rn */
	r0 = r8;  /* 0C066CA8 mov Rm,Rn */
	r2 += r13;  /* 0C066CAA add Rm,Rn */
	IF(0x0C066CACu); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C066CAEu, 6);  /* 0C066CAC mov.w @(r0,Rm),Rn */
	{ r2 += 0x26u; /* slot add #imm,Rn */ UPD(0x0C066BFCu, 3); goto L_0C066BFC; }  /* 0C066CAE bra */
}

void f_0C066CC0(sh3_t *c)
{
	LOCALS;
L_0C066CC0: BLKS(0x0C066CC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC2u, 1);  /* 0C066CC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC4u, 1);  /* 0C066CC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC6u, 1);  /* 0C066CC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC8u, 1);  /* 0C066CC6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C066CC8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066CCCu, 2);  /* 0C066CCA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066CCEu, 1);  /* 0C066CCC mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C066CD0u, 1);  /* 0C066CCE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C066CD0 exts.w Rm,Rn */
	IF(0x0C066CD2u); MACL = r13 * r2;  /* 0C066CD2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C066CD6u, 4);  /* 0C066CD4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066CD8u, 1);  /* 0C066CD6 mov.l Rm,@-Rn */
	IF(0x0C066CD8u); r0 = MACL;  /* 0C066CD8 sts macl,Rn */
	r4 += r0;  /* 0C066CDA add Rm,Rn */
	IF(0x0C066CDCu); r15 -= 4; W32(r15, PR); UPD(0x0C066CDEu, 3);  /* 0C066CDC sts.l pr,@-Rn */
	r0 = 0x258u; UPD(0x0C066CE0u, 1);  /* 0C066CDE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C066CE0 add #imm,Rn */
	IF(0x0C066CE2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C066CE4u, 2);  /* 0C066CE2 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C066CE4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066D00u, 4); goto L_0C066D00; } UPD(0x0C066CEAu, 1); goto L_0C066CEA; }  /* 0C066CE6 bf/s */
L_0C066CEA: BLKS(0x0C066CEAu);
	r14 += 0x4u;  /* 0C066CEA add #imm,Rn */
	UPD(0x0C066CECu, 1);
L_0C066CEC: BLKS(0x0C066CECu);
	r15 = r14;  /* 0C066CEC mov Rm,Rn */
	IF(0x0C066CEEu); PR = R32(r15); r15 += 4; UPD(0x0C066CF0u, 2);  /* 0C066CEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066CF2u, 1);  /* 0C066CF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066CF4u, 1);  /* 0C066CF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066CF6u, 1);  /* 0C066CF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066CF8u, 1);  /* 0C066CF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066CFAu, 1);  /* 0C066CF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066CFCu, 1);  /* 0C066CFA mov.l @Rm+,Rn */
	IF(0x0C066CFCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066CFC rts */
L_0C066D00: BLKS(0x0C066D00u);
	r8 = 0xC060840u; UPD(0x0C066D02u, 1);  /* 0C066D00 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C066D02 mov Rm,Rn */
	r5 = r10;  /* 0C066D04 mov Rm,Rn */
	r6 = 0x1u;  /* 0C066D06 mov #imm,Rn */
	IF(0x0C066D08u); { u32 t_ = r8; PR = 0x0C066D0Cu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C066D0Cu); }  /* 0C066D08 jsr @Rn */
L_0C066D0C: BLKS(0x0C066D0Cu);
	T = (r0 & r0) == 0;  /* 0C066D0C tst Rm,Rn */
	if (T) { UPD(0x0C066CEAu, 4); goto L_0C066CEA; }  /* 0C066D0E bt */
L_0C066D10: BLKS(0x0C066D10u);
	r6 = 0x30u;  /* 0C066D10 mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C066D14u, 2);  /* 0C066D12 mov.w @(disp,pc),Rn */
	IF(0x0C066D14u); MACL = r13 * r11;  /* 0C066D14 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C066D18u, 3);  /* 0C066D16 mov.w @(disp,pc),Rn */
	r7 = 0x34u;  /* 0C066D18 mov #imm,Rn */
	IF(0x0C066D1Au); r11 = MACL;  /* 0C066D1A sts macl,Rn */
	IF(0x0C066D1Cu); MACL = r10 * r6;  /* 0C066D1C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C066D20u, 5);  /* 0C066D1E mov.w @(disp,pc),Rn */
	IF(0x0C066D20u); r4 = MACL;  /* 0C066D20 sts macl,Rn */
	IF(0x0C066D22u); MACL = r13 * r8;  /* 0C066D22 mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C066D26u, 4);  /* 0C066D24 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C066D26 add Rm,Rn */
	IF(0x0C066D28u); r8 = MACL;  /* 0C066D28 sts macl,Rn */
	IF(0x0C066D2Au); MACL = r10 * r0;  /* 0C066D2A mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C066D2Eu, 5);  /* 0C066D2C mov.w @Rm,Rn */
	r13 += 0x7u;  /* 0C066D2E add #imm,Rn */
	IF(0x0C066D30u); r6 = MACL;  /* 0C066D30 sts macl,Rn */
	IF(0x0C066D32u); MACL = r3 * r7;  /* 0C066D32 mul.l Rm,Rn */
	r12 = 0xC27DC84u; UPD(0x0C066D36u, 5);  /* 0C066D34 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C066D36 mov Rm,Rn */
	IF(0x0C066D38u); r3 = MACL;  /* 0C066D38 sts macl,Rn */
	r0 += r6;  /* 0C066D3A add Rm,Rn */
	r4 = 0xC21F8A0u; UPD(0x0C066D3Eu, 4);  /* 0C066D3C mov.l @(disp,pc),Rn */
	r11 += r12;  /* 0C066D3E add Rm,Rn */
	r5 = 0xC8000000u; UPD(0x0C066D42u, 2);  /* 0C066D40 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C066D42 add Rm,Rn */
	r8 += r3;  /* 0C066D44 add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C066D48u, 3);  /* 0C066D46 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C066D48 add Rm,Rn */
	IF(0x0C066D4Au); W32(r0 + r4, r5); UPD(0x0C066D4Cu, 2);  /* 0C066D4A mov.l Rm,@(r0,Rn) */
	r9 = r11;  /* 0C066D4C mov Rm,Rn */
	r8 += r4;  /* 0C066D4E add Rm,Rn */
	r9 += 0x24u;  /* 0C066D50 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r9); UPD(0x0C066D54u, 4);  /* 0C066D52 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C066D54 mov #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C066D58u, 2);  /* 0C066D56 mov.l Rm,@(disp,Rn) */
	r12 += 0x4u;  /* 0C066D58 add #imm,Rn */
	IF(0x0C066D5Au); { u32 t_ = r10; PR = 0x0C066D5Eu; W32(r14, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C066D5Eu); }  /* 0C066D5A jsr @Rn */
L_0C066D5E: BLKS(0x0C066D5Eu);
	r0 += 0x1u;  /* 0C066D5E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C066D62u, 2);  /* 0C066D60 mov.l Rm,@(disp,Rn) */
	r13 += 0xFFFFFFF9u;  /* 0C066D62 add #imm,Rn */
	r0 = r12;  /* 0C066D64 mov Rm,Rn */
	IF(0x0C066D66u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D66 shar Rn */
	IF(0x0C066D68u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D68 shar Rn */
	IF(0x0C066D6Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D6A shar Rn */
	r0 &= 0x3Fu;  /* 0C066D6C and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C066D70u, 7);  /* 0C066D6E mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C066D70 add #imm,Rn */
	r8 += 0x2Cu;  /* 0C066D72 add #imm,Rn */
	W16(r8, r12); UPD(0x0C066D76u, 3);  /* 0C066D74 mov.w Rm,@Rn */
	r4 = r12;  /* 0C066D76 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C066D7Au, 2);  /* 0C066D78 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C066D7A add #imm,Rn */
	r9 = 0x70000u; UPD(0x0C066D7Eu, 2);  /* 0C066D7C mov.l @(disp,pc),Rn */
	r5 = 0xD0000u; UPD(0x0C066D80u, 1);  /* 0C066D7E mov.l @(disp,pc),Rn */
	IF(0x0C066D80u); { u32 t_ = r10; PR = 0x0C066D84u; W32(r8 + 0x20u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066D84u); }  /* 0C066D80 jsr @Rn */
L_0C066D84: BLKS(0x0C066D84u);
	r2 = R32(r11 + 0x14u); UPD(0x0C066D86u, 1);  /* 0C066D84 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066D86 mov Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C066D8Au, 2);  /* 0C066D88 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C066D8A add Rm,Rn */
	r10 = 0xFFFD0000u; UPD(0x0C066D8Eu, 2);  /* 0C066D8C mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C066D90u, 1);  /* 0C066D8E mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C066D90 add Rm,Rn */
	IF(0x0C066D92u); { u32 t_ = r7; PR = 0x0C066D96u; W32(r8 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066D96u); }  /* 0C066D92 jsr @Rn */
L_0C066D96: BLKS(0x0C066D96u);
	r5 = R32(r11 + 0x18u); UPD(0x0C066D98u, 1);  /* 0C066D96 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066D98 mov Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C066D9Cu, 2);  /* 0C066D9A mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C066D9C add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C066DA0u, 2);  /* 0C066D9E mov.l Rm,@(disp,Rn) */
	IF(0x0C066DA0u); { u32 t_ = r6; PR = 0x0C066DA4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066DA4u); }  /* 0C066DA0 jsr @Rn */
L_0C066DA4: BLKS(0x0C066DA4u);
	r3 = 0xC058030u; UPD(0x0C066DA6u, 1);  /* 0C066DA4 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C066DA6 mov Rm,Rn */
	r4 = r12;  /* 0C066DA8 mov Rm,Rn */
	IF(0x0C066DAAu); { u32 t_ = r3; PR = 0x0C066DAEu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066DAEu); }  /* 0C066DAA jsr @Rn */
L_0C066DAE: BLKS(0x0C066DAEu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C066DB0u, 1);  /* 0C066DAE mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C066DB0 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C066DB4u, 2);  /* 0C066DB2 mov.l @(disp,pc),Rn */
	r4 = 0x32u;  /* 0C066DB4 mov #imm,Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C066DB8u, 2);  /* 0C066DB6 mov.l Rm,@(disp,Rn) */
	r9 = 0xC7C00A0u; UPD(0x0C066DBAu, 1);  /* 0C066DB8 mov.l @(disp,pc),Rn */
	r12 = 0xC0AFBA0u; UPD(0x0C066DBCu, 1);  /* 0C066DBA mov.l @(disp,pc),Rn */
	IF(0x0C066DBCu); { u32 t_ = r9; PR = 0x0C066DC0u; W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C7C00A0, 0x0C7C00A0u, 0x0C066DC0u); }  /* 0C066DBC jsr @Rn */
L_0C066DC0: BLKS(0x0C066DC0u);
	r8 = 0xC0AFE40u; UPD(0x0C066DC2u, 1);  /* 0C066DC0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C066DC2 mov Rm,Rn */
	IF(0x0C066DC4u); { u32 t_ = r12; PR = 0x0C066DC8u; r5 = 0x51u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C066DC8u); }  /* 0C066DC4 jsr @Rn */
L_0C066DC8: BLKS(0x0C066DC8u);
	IF(0x0C066DC8u); { u32 t_ = r8; PR = 0x0C066DCCu; IF(0x0C066DCAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C066DCCu); }  /* 0C066DC8 jsr @Rn */
L_0C066DCC: BLKS(0x0C066DCCu);
	r13 = R32(r14); UPD(0x0C066DCEu, 1);  /* 0C066DCC mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C066DCE and #imm,r0 */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C066DD2u, 2);  /* 0C066DD0 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C066DD2 add #imm,Rn */
	r4 = 0xF0u; UPD(0x0C066DD6u, 2);  /* 0C066DD4 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C066DD6 add Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C066DDAu, 2);  /* 0C066DD8 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C066DDA add Rm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C066DDC exts.w Rm,Rn */
	r5 = 0x78000u; UPD(0x0C066DE0u, 3);  /* 0C066DDE mov.l @(disp,pc),Rn */
	IF(0x0C066DE0u); { u32 t_ = r2; PR = 0x0C066DE4u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066DE4u); }  /* 0C066DE0 jsr @Rn */
L_0C066DE4: BLKS(0x0C066DE4u);
	r12 = 0xC058030u; UPD(0x0C066DE6u, 1);  /* 0C066DE4 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C066DE6 mov Rm,Rn */
	r9 = R32(r11 + 0x14u); UPD(0x0C066DEAu, 2);  /* 0C066DE8 mov.l @(disp,Rm),Rn */
	r5 = 0xA0000u; UPD(0x0C066DECu, 1);  /* 0C066DEA mov.l @(disp,pc),Rn */
	IF(0x0C066DECu); { u32 t_ = r12; PR = 0x0C066DF0u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066DF0u); }  /* 0C066DEC jsr @Rn */
L_0C066DF0: BLKS(0x0C066DF0u);
	r13 = R32(r11 + 0x18u); UPD(0x0C066DF2u, 1);  /* 0C066DF0 mov.l @(disp,Rm),Rn */
	r9 += r10;  /* 0C066DF2 add Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C066DF6u, 2);  /* 0C066DF4 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C066DF6 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C066DFAu, 2);  /* 0C066DF8 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C066DFA mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C066DFEu, 2);  /* 0C066DFC mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C066DFE add Rm,Rn */
	W32(r15, r7); UPD(0x0C066E02u, 2);  /* 0C066E00 mov.l Rm,@Rn */
	r4 = r8;  /* 0C066E02 mov Rm,Rn */
	IF(0x0C066E04u); { u32 t_ = r6; PR = 0x0C066E08u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066E08u); }  /* 0C066E04 jsr @Rn */
L_0C066E08: BLKS(0x0C066E08u);
	r3 = 0xC058030u; UPD(0x0C066E0Au, 1);  /* 0C066E08 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C066E0A mov Rm,Rn */
	r5 = r10;  /* 0C066E0C mov Rm,Rn */
	IF(0x0C066E0Eu); { u32 t_ = r3; PR = 0x0C066E12u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066E12u); }  /* 0C066E0E jsr @Rn */
L_0C066E12: BLKS(0x0C066E12u);
	r1 = 0x808080u; UPD(0x0C066E14u, 1);  /* 0C066E12 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C066E14 mov Rm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C066E18u, 2);  /* 0C066E16 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C066E18 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C066E1Cu, 2);  /* 0C066E1A mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C066E1C mov Rm,Rn */
	W32(r15 + 0x10u, r1); UPD(0x0C066E20u, 2);  /* 0C066E1E mov.l Rm,@(disp,Rn) */
	IF(0x0C066E20u); { u32 t_ = r9; PR = 0x0C066E24u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C066E24u); }  /* 0C066E20 jsr @Rn */
L_0C066E24: BLKS(0x0C066E24u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C066CECu, 3); goto L_0C066CEC; }  /* 0C066E24 bra */
}

void f_0C066E90(sh3_t *c)
{
	LOCALS;
L_0C066E90: BLKS(0x0C066E90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066E92u, 1);  /* 0C066E90 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066E92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066E96u, 2);  /* 0C066E94 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C066E96 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Au, 2);  /* 0C066E98 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Cu, 1);  /* 0C066E9A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Eu, 1);  /* 0C066E9C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA0u, 1);  /* 0C066E9E mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C066EA2u, 1);  /* 0C066EA0 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA4u, 1);  /* 0C066EA2 mov.l Rm,@-Rn */
	IF(0x0C066EA4u); MACL = r4 * r2;  /* 0C066EA4 mul.l Rm,Rn */
	IF(0x0C066EA6u); r15 -= 4; W32(r15, PR); UPD(0x0C066EA8u, 3);  /* 0C066EA6 sts.l pr,@-Rn */
	r6 = 0xC283794u; UPD(0x0C066EAAu, 1);  /* 0C066EA8 mov.l @(disp,pc),Rn */
	IF(0x0C066EAAu); r0 = MACL;  /* 0C066EAA sts macl,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C066EAC add #imm,Rn */
	r14 = r15;  /* 0C066EAE mov Rm,Rn */
	r6 += r0;  /* 0C066EB0 add Rm,Rn */
	W32(r14, r4); UPD(0x0C066EB4u, 5);  /* 0C066EB2 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C066EB6u, 1);  /* 0C066EB4 mov.l Rm,@(disp,Rn) */
	r0 = 0x258u; UPD(0x0C066EB8u, 1);  /* 0C066EB6 mov.w @(disp,pc),Rn */
	IF(0x0C066EB8u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C066EBAu, 1);  /* 0C066EB8 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C066EBA tst Rm,Rn */
	if (!T) { UPD(0x0C066EE0u, 4); goto L_0C066EE0; }  /* 0C066EBC bf */
L_0C066EBE: BLKS(0x0C066EBEu);
	r14 += 0x18u;  /* 0C066EBE add #imm,Rn */
	UPD(0x0C066EC0u, 1);
L_0C066EC0: BLKS(0x0C066EC0u);
	r15 = r14;  /* 0C066EC0 mov Rm,Rn */
	IF(0x0C066EC2u); PR = R32(r15); r15 += 4; UPD(0x0C066EC4u, 2);  /* 0C066EC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066EC6u, 1);  /* 0C066EC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066EC8u, 1);  /* 0C066EC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066ECAu, 1);  /* 0C066EC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066ECCu, 1);  /* 0C066ECA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066ECEu, 1);  /* 0C066ECC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066ED0u, 1);  /* 0C066ECE mov.l @Rm+,Rn */
	IF(0x0C066ED0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066ED0 rts */
L_0C066EE0: BLKS(0x0C066EE0u);
	r8 = 0xC060840u; UPD(0x0C066EE2u, 1);  /* 0C066EE0 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C066EE2 mov #imm,Rn */
	IF(0x0C066EE4u); { u32 t_ = r8; PR = 0x0C066EE8u; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C066EE8u); }  /* 0C066EE4 jsr @Rn */
L_0C066EE8: BLKS(0x0C066EE8u);
	T = (r0 & r0) == 0;  /* 0C066EE8 tst Rm,Rn */
	if (T) { UPD(0x0C066EBEu, 4); goto L_0C066EBE; }  /* 0C066EEA bt */
L_0C066EEC: BLKS(0x0C066EECu);
	r13 = 0x30u;  /* 0C066EEC mov #imm,Rn */
	r6 = 0x90u; UPD(0x0C066EF0u, 2);  /* 0C066EEE mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C066EF2u, 1);  /* 0C066EF0 mov.l @Rm,Rn */
	IF(0x0C066EF2u); MACL = r0 * r6;  /* 0C066EF2 mul.l Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C066EF6u, 3);  /* 0C066EF4 mov.l @(disp,Rm),Rn */
	IF(0x0C066EF6u); r10 = MACL;  /* 0C066EF6 sts macl,Rn */
	IF(0x0C066EF8u); MACL = r4 * r13;  /* 0C066EF8 mul.l Rm,Rn */
	r7 = 0x9C0u; UPD(0x0C066EFCu, 4);  /* 0C066EFA mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C066EFEu, 1);  /* 0C066EFC mov.l @Rm,Rn */
	IF(0x0C066EFEu); r12 = MACL;  /* 0C066EFE sts macl,Rn */
	IF(0x0C066F00u); MACL = r9 * r7;  /* 0C066F00 mul.l Rm,Rn */
	r3 = 0x340u; UPD(0x0C066F04u, 4);  /* 0C066F02 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C066F04 add Rm,Rn */
	IF(0x0C066F06u); r5 = MACL;  /* 0C066F06 sts macl,Rn */
	r11 = 0xC27DC84u; UPD(0x0C066F0Au, 3);  /* 0C066F08 mov.l @(disp,pc),Rn */
	IF(0x0C066F0Au); MACL = r4 * r3;  /* 0C066F0A mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C066F0Eu, 3);  /* 0C066F0C mov.l @(disp,pc),Rn */
	r10 += r11;  /* 0C066F0E add Rm,Rn */
	r10 += 0x24u;  /* 0C066F10 add #imm,Rn */
	IF(0x0C066F12u); r1 = MACL;  /* 0C066F12 sts macl,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C066F16u, 4);  /* 0C066F14 mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C066F16 mov #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C066F1Au, 2);  /* 0C066F18 mov.w @Rm,Rn */
	W32(r14 + 0x10u, r5); UPD(0x0C066F1Cu, 1);  /* 0C066F1A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r1); UPD(0x0C066F1Eu, 1);  /* 0C066F1C mov.l Rm,@(disp,Rn) */
	IF(0x0C066F1Eu); ;  /* 0C066F1E nop */
	UPD(0x0C066F20u, 1);
L_0C066F20: BLKS(0x0C066F20u);
	r0 = R32(r14 + 0x8u); UPD(0x0C066F22u, 1);  /* 0C066F20 mov.l @(disp,Rm),Rn */
	r1 = 0x34u;  /* 0C066F22 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r7 = v_; } UPD(0x0C066F26u, 2);  /* 0C066F24 mov.w @Rm+,Rn */
	r6 = 0x3u;  /* 0C066F26 mov #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C066F2Au, 2);  /* 0C066F28 mov.l Rm,@(disp,Rn) */
	IF(0x0C066F2Au); MACL = r7 * r1;  /* 0C066F2A mul.l Rm,Rn */
	r11 = 0xC1704D0u; UPD(0x0C066F2Eu, 3);  /* 0C066F2C mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C066F2E mov Rm,Rn */
	IF(0x0C066F30u); r0 <<= 2;  /* 0C066F30 shll2 Rn */
	IF(0x0C066F32u); r10 = R32(r0 + r11); UPD(0x0C066F34u, 3);  /* 0C066F32 mov.l @(r0,Rm),Rn */
	IF(0x0C066F34u); r5 = MACL;  /* 0C066F34 sts macl,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C066F38u, 2);  /* 0C066F36 mov.l @(disp,Rm),Rn */
	r12 += 0x4u;  /* 0C066F38 add #imm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C066F3Cu, 2);  /* 0C066F3A mov.l @(disp,Rm),Rn */
	r3 = 0xC8800000u; UPD(0x0C066F3Eu, 1);  /* 0C066F3C mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C066F3E add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C066F42u, 2);  /* 0C066F40 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C066F42 add Rm,Rn */
	IF(0x0C066F44u); W32(r0 + r9, r3); UPD(0x0C066F46u, 2);  /* 0C066F44 mov.l Rm,@(r0,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C066F48u, 1);  /* 0C066F46 mov.l @(disp,Rm),Rn */
	IF(0x0C066F48u); r9 = MACL;  /* 0C066F48 sts macl,Rn */
	r9 += r2;  /* 0C066F4A add Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C066F4Eu, 3);  /* 0C066F4C mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C066F4E add Rm,Rn */
	r9 += r0;  /* 0C066F50 add Rm,Rn */
	W32(r9 + 0x4u, r6); UPD(0x0C066F54u, 3);  /* 0C066F52 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C066F54 mov #imm,Rn */
	IF(0x0C066F56u); { u32 t_ = r8; PR = 0x0C066F5Au; W32(r14 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C066F5Au); }  /* 0C066F56 jsr @Rn */
L_0C066F5A: BLKS(0x0C066F5Au);
	r0 += 0x1u;  /* 0C066F5A add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C066F5Eu, 2);  /* 0C066F5C mov.l Rm,@(disp,Rn) */
	r4 = 0x30u;  /* 0C066F5E mov #imm,Rn */
	r0 = r12;  /* 0C066F60 mov Rm,Rn */
	IF(0x0C066F62u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F62 shar Rn */
	IF(0x0C066F64u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F64 shar Rn */
	IF(0x0C066F66u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F66 shar Rn */
	r0 &= 0x3Fu;  /* 0C066F68 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C066F6Cu, 7);  /* 0C066F6A mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C066F6C add #imm,Rn */
	r9 += 0x2Cu;  /* 0C066F6E add #imm,Rn */
	r10 = R32(r14); UPD(0x0C066F72u, 3);  /* 0C066F70 mov.l @Rm,Rn */
	r7 = 0x90u; UPD(0x0C066F74u, 1);  /* 0C066F72 mov.w @(disp,pc),Rn */
	W16(r9, r12); UPD(0x0C066F76u, 1);  /* 0C066F74 mov.w Rm,@Rn */
	IF(0x0C066F76u); MACL = r10 * r7;  /* 0C066F76 mul.l Rm,Rn */
	r11 = 0x30000u; UPD(0x0C066F7Au, 3);  /* 0C066F78 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C066F7A add #imm,Rn */
	W32(r9 + 0x20u, r11); UPD(0x0C066F7Eu, 2);  /* 0C066F7C mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x4u); UPD(0x0C066F80u, 1);  /* 0C066F7E mov.l @(disp,Rm),Rn */
	IF(0x0C066F80u); r11 = MACL;  /* 0C066F80 sts macl,Rn */
	IF(0x0C066F82u); MACL = r5 * r4;  /* 0C066F82 mul.l Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C066F86u, 4);  /* 0C066F84 mov.l @(disp,pc),Rn */
	IF(0x0C066F86u); r3 = MACL;  /* 0C066F86 sts macl,Rn */
	r11 += r3;  /* 0C066F88 add Rm,Rn */
	r5 = 0x140000u; UPD(0x0C066F8Cu, 3);  /* 0C066F8A mov.l @(disp,pc),Rn */
	IF(0x0C066F8Cu); { u32 t_ = r8; PR = 0x0C066F90u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066F90u); }  /* 0C066F8C jsr @Rn */
L_0C066F90: BLKS(0x0C066F90u);
	r1 = 0xC058030u; UPD(0x0C066F92u, 1);  /* 0C066F90 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C066F92 mov Rm,Rn */
	r4 = r12;  /* 0C066F94 mov Rm,Rn */
	IF(0x0C066F96u); { u32 t_ = r1; PR = 0x0C066F9Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066F9Au); }  /* 0C066F96 jsr @Rn */
L_0C066F9A: BLKS(0x0C066F9Au);
	r8 -= r0;  /* 0C066F9A sub Rm,Rn */
	r1 = r8;  /* 0C066F9C mov Rm,Rn */
	r10 = 0xC27DC84u; UPD(0x0C066FA0u, 3);  /* 0C066F9E mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C066FA0 add Rm,Rn */
	r1 += r8;  /* 0C066FA2 add Rm,Rn */
	IF(0x0C066FA4u); T = (s32)r1 >= 0;  /* 0C066FA4 cmp/pz Rn */
	{ u32 c_ = !T; r10 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C067080u, 6); goto L_0C067080; } UPD(0x0C066FAAu, 1); goto L_0C066FAA; }  /* 0C066FA6 bf/s */
L_0C066FAA: BLKS(0x0C066FAAu);
	r0 = R32(r10 + 0x14u); UPD(0x0C066FACu, 1);  /* 0C066FAA mov.l @(disp,Rm),Rn */
	IF(0x0C066FACu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C066FAC shar Rn */
	IF(0x0C066FAEu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C066FAE shar Rn */
	r4 = 0x10000u; UPD(0x0C066FB2u, 3);  /* 0C066FB0 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C066FB2 add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C066FB6u, 2);  /* 0C066FB4 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C066FB6 add Rm,Rn */
	r4 = r12;  /* 0C066FB8 mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C066FBCu, 3);  /* 0C066FBA mov.l @(disp,pc),Rn */
	IF(0x0C066FBCu); { u32 t_ = r8; PR = 0x0C066FC0u; W32(r9 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066FC0u); }  /* 0C066FBC jsr @Rn */
L_0C066FC0: BLKS(0x0C066FC0u);
	r8 = R32(r10 + 0x18u); UPD(0x0C066FC2u, 1);  /* 0C066FC0 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066FC2 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C066FC6u, 2);  /* 0C066FC4 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C066FC6 add Rm,Rn */
	IF(0x0C066FC8u); { u32 t_ = r10; PR = 0x0C066FCCu; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066FCCu); }  /* 0C066FC8 jsr @Rn */
L_0C066FCC: BLKS(0x0C066FCCu);
	r8 += r0;  /* 0C066FCC add Rm,Rn */
	r7 = 0xC1704D8u; UPD(0x0C066FD0u, 2);  /* 0C066FCE mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C066FD0 mov Rm,Rn */
	r0 += r0;  /* 0C066FD2 add Rm,Rn */
	IF(0x0C066FD4u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C066FD6u, 3);  /* 0C066FD4 mov.w @(r0,Rm),Rn */
	r1 = 0xC058060u; UPD(0x0C066FD8u, 1);  /* 0C066FD6 mov.l @(disp,pc),Rn */
	r5 += r12;  /* 0C066FD8 add Rm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C066FDA exts.w Rm,Rn */
	W32(r9 + 0x14u, r8); UPD(0x0C066FDEu, 3);  /* 0C066FDC mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C066FE0u, 1);  /* 0C066FDE mov.l @(disp,pc),Rn */
	IF(0x0C066FE0u); { u32 t_ = r1; PR = 0x0C066FE4u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066FE4u); }  /* 0C066FE0 jsr @Rn */
L_0C066FE4: BLKS(0x0C066FE4u);
	r3 = 0xC058030u; UPD(0x0C066FE6u, 1);  /* 0C066FE4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C066FE6 mov Rm,Rn */
	W32(r9 + 0x18u, r0); UPD(0x0C066FEAu, 2);  /* 0C066FE8 mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C066FECu, 1);  /* 0C066FEA mov.l @(disp,pc),Rn */
	IF(0x0C066FECu); { u32 t_ = r3; PR = 0x0C066FF0u; r8 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066FF0u); }  /* 0C066FEC jsr @Rn */
L_0C066FF0: BLKS(0x0C066FF0u);
	r6 = r13;  /* 0C066FF0 mov Rm,Rn */
	r4 = 0x808080u; UPD(0x0C066FF4u, 2);  /* 0C066FF2 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C066FF4 mov #imm,Rn */
	r6 += 0x1u;  /* 0C066FF6 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C066FF8 exts.w Rm,Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C066FFCu, 4);  /* 0C066FFA mov.l Rm,@(disp,Rn) */
	T = (s32)r13 > (s32)r8;  /* 0C066FFC cmp/gt Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C067000u, 2);  /* 0C066FFE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C066F20u, 3); goto L_0C066F20; } UPD(0x0C067004u, 1); goto L_0C067004; }  /* 0C067000 bf/s */
L_0C067004: BLKS(0x0C067004u);
	r12 = 0xC7C00A0u; UPD(0x0C067006u, 1);  /* 0C067004 mov.l @(disp,pc),Rn */
	r8 = 0xC0AFBA0u; UPD(0x0C067008u, 1);  /* 0C067006 mov.l @(disp,pc),Rn */
	IF(0x0C067008u); { u32 t_ = r12; PR = 0x0C06700Cu; r4 = 0x64u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C00A0, 0x0C7C00A0u, 0x0C06700Cu); }  /* 0C067008 jsr @Rn */
L_0C06700C: BLKS(0x0C06700Cu);
	r4 = R32(r14); UPD(0x0C06700Eu, 1);  /* 0C06700C mov.l @Rm,Rn */
	IF(0x0C06700Eu); { u32 t_ = r8; PR = 0x0C067012u; r5 = 0x4Eu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C067012u); }  /* 0C06700E jsr @Rn */
L_0C067012: BLKS(0x0C067012u);
	r8 = 0xC27DC84u; UPD(0x0C067014u, 1);  /* 0C067012 mov.l @(disp,pc),Rn */
	r10 = 0xC0AFE40u; UPD(0x0C067016u, 1);  /* 0C067014 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C067016 add Rm,Rn */
	IF(0x0C067018u); { u32 t_ = r10; PR = 0x0C06701Cu; r8 += 0x24u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C06701Cu); }  /* 0C067018 jsr @Rn */
L_0C06701C: BLKS(0x0C06701Cu);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C06701Eu, 1);  /* 0C06701C mov.w @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C06701E and #imm,r0 */
	r9 = 0xF0u; UPD(0x0C067022u, 2);  /* 0C067020 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C067022 add Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C067026u, 2);  /* 0C067024 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C067026 add Rm,Rn */
	r13 = 0xC0000u; UPD(0x0C06702Au, 2);  /* 0C067028 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C06702A exts.w Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06702C add #imm,Rn */
	r8 += 0xFFFFFFDCu;  /* 0C06702E add #imm,Rn */
	r4 = r12;  /* 0C067030 mov Rm,Rn */
	IF(0x0C067032u); { u32 t_ = r11; PR = 0x0C067036u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067036u); }  /* 0C067032 jsr @Rn */
L_0C067036: BLKS(0x0C067036u);
	r9 = R32(r8 + 0x14u); UPD(0x0C067038u, 1);  /* 0C067036 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C067038 mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C06703Cu, 2);  /* 0C06703A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C06703C add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C067040u, 2);  /* 0C06703E mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C067040 add Rm,Rn */
	IF(0x0C067042u); { u32 t_ = r1; PR = 0x0C067046u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067046u); }  /* 0C067042 jsr @Rn */
L_0C067046: BLKS(0x0C067046u);
	r13 = R32(r8 + 0x18u); UPD(0x0C067048u, 1);  /* 0C067046 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C067048 mov #imm,Rn */
	r2 = 0x14u;  /* 0C06704A mov #imm,Rn */
	r4 = r12;  /* 0C06704C mov Rm,Rn */
	r13 += r0;  /* 0C06704E add Rm,Rn */
	W32(r15, r3); UPD(0x0C067052u, 5);  /* 0C067050 mov.l Rm,@Rn */
	r5 = 0x10000u; UPD(0x0C067054u, 1);  /* 0C067052 mov.l @(disp,pc),Rn */
	IF(0x0C067054u); { u32 t_ = r11; PR = 0x0C067058u; W32(r15 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067058u); }  /* 0C067054 jsr @Rn */
L_0C067058: BLKS(0x0C067058u);
	r6 = 0xC058030u; UPD(0x0C06705Au, 1);  /* 0C067058 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06705A mov Rm,Rn */
	r11 = 0x808080u; UPD(0x0C06705Eu, 2);  /* 0C06705C mov.l @(disp,pc),Rn */
	r5 = 0x10000u; UPD(0x0C067060u, 1);  /* 0C06705E mov.l @(disp,pc),Rn */
	IF(0x0C067060u); { u32 t_ = r6; PR = 0x0C067064u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067064u); }  /* 0C067060 jsr @Rn */
L_0C067064: BLKS(0x0C067064u);
	r12 = 0xC0ACA40u; UPD(0x0C067066u, 1);  /* 0C067064 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C067066 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C06706Au, 2);  /* 0C067068 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C06706A mov Rm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C06706Eu, 2);  /* 0C06706C mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C06706E mov Rm,Rn */
	IF(0x0C067070u); { u32 t_ = r12; PR = 0x0C067074u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C067074u); }  /* 0C067070 jsr @Rn */
L_0C067074: BLKS(0x0C067074u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C066EC0u, 3); goto L_0C066EC0; }  /* 0C067074 bra */
L_0C067080: BLKS(0x0C067080u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C066FAAu, 3); goto L_0C066FAA; }  /* 0C067080 bra */
}

void f_0C0670E0(sh3_t *c)
{
	LOCALS;
L_0C0670E0: BLKS(0x0C0670E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E2u, 1);  /* 0C0670E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E4u, 1);  /* 0C0670E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E6u, 1);  /* 0C0670E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E8u, 1);  /* 0C0670E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0670EAu, 1);  /* 0C0670E8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0670EA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0670EEu, 2);  /* 0C0670EC mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C0670F0u, 1);  /* 0C0670EE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0670F0 exts.w Rm,Rn */
	IF(0x0C0670F2u); MACL = r13 * r2;  /* 0C0670F2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C0670F6u, 4);  /* 0C0670F4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0670F8u, 1);  /* 0C0670F6 mov.l Rm,@-Rn */
	IF(0x0C0670F8u); r0 = MACL;  /* 0C0670F8 sts macl,Rn */
	r4 += r0;  /* 0C0670FA add Rm,Rn */
	IF(0x0C0670FCu); r15 -= 4; W32(r15, PR); UPD(0x0C0670FEu, 3);  /* 0C0670FC sts.l pr,@-Rn */
	r0 = 0x258u; UPD(0x0C067100u, 1);  /* 0C0670FE mov.w @(disp,pc),Rn */
	IF(0x0C067100u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067102u, 1);  /* 0C067100 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C067102 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067120u, 4); goto L_0C067120; } UPD(0x0C067108u, 1); goto L_0C067108; }  /* 0C067104 bf/s */
L_0C067108: BLKS(0x0C067108u);
	r15 = r14;  /* 0C067108 mov Rm,Rn */
	IF(0x0C06710Au); PR = R32(r15); r15 += 4; UPD(0x0C06710Cu, 2);  /* 0C06710A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06710Eu, 1);  /* 0C06710C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067110u, 1);  /* 0C06710E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067112u, 1);  /* 0C067110 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067114u, 1);  /* 0C067112 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067116u, 1);  /* 0C067114 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067118u, 1);  /* 0C067116 mov.l @Rm+,Rn */
	IF(0x0C067118u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067118 rts */
L_0C067120: BLKS(0x0C067120u);
	r8 = 0xC060840u; UPD(0x0C067122u, 1);  /* 0C067120 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C067122 mov Rm,Rn */
	r5 = r11;  /* 0C067124 mov Rm,Rn */
	r6 = 0x1u;  /* 0C067126 mov #imm,Rn */
	IF(0x0C067128u); { u32 t_ = r8; PR = 0x0C06712Cu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C06712Cu); }  /* 0C067128 jsr @Rn */
L_0C06712C: BLKS(0x0C06712Cu);
	T = (r0 & r0) == 0;  /* 0C06712C tst Rm,Rn */
	if (T) { UPD(0x0C067108u, 4); goto L_0C067108; }  /* 0C06712E bt */
L_0C067130: BLKS(0x0C067130u);
	r6 = 0x30u;  /* 0C067130 mov #imm,Rn */
	r10 = 0x90u; UPD(0x0C067134u, 2);  /* 0C067132 mov.w @(disp,pc),Rn */
	IF(0x0C067134u); MACL = r13 * r10;  /* 0C067134 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C067138u, 3);  /* 0C067136 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C067138 mov #imm,Rn */
	IF(0x0C06713Au); r10 = MACL;  /* 0C06713A sts macl,Rn */
	IF(0x0C06713Cu); MACL = r11 * r6;  /* 0C06713C mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C067140u, 5);  /* 0C06713E mov.w @(disp,pc),Rn */
	IF(0x0C067140u); r5 = MACL;  /* 0C067140 sts macl,Rn */
	IF(0x0C067142u); MACL = r13 * r8;  /* 0C067142 mul.l Rm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C067146u, 4);  /* 0C067144 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C067146 add Rm,Rn */
	IF(0x0C067148u); r8 = MACL;  /* 0C067148 sts macl,Rn */
	IF(0x0C06714Au); MACL = r11 * r2;  /* 0C06714A mul.l Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C06714Eu, 5);  /* 0C06714C mov.w @Rm,Rn */
	IF(0x0C06714Eu); r6 = MACL;  /* 0C06714E sts macl,Rn */
	IF(0x0C067150u); MACL = r12 * r4;  /* 0C067150 mul.l Rm,Rn */
	r0 = r8;  /* 0C067152 mov Rm,Rn */
	r0 += r6;  /* 0C067154 add Rm,Rn */
	IF(0x0C067156u); r3 = MACL;  /* 0C067156 sts macl,Rn */
	r7 = 0xC8000000u; UPD(0x0C06715Au, 7);  /* 0C067158 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C06715A add Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C06715Eu, 2);  /* 0C06715C mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C06715E add Rm,Rn */
	r9 = 0xC27DC84u; UPD(0x0C067162u, 2);  /* 0C067160 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C067162 add Rm,Rn */
	IF(0x0C067164u); W32(r0 + r5, r7); UPD(0x0C067166u, 2);  /* 0C067164 mov.l Rm,@(r0,Rn) */
	r10 += r9;  /* 0C067166 add Rm,Rn */
	r11 = 0xC050D70u; UPD(0x0C06716Au, 2);  /* 0C067168 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C06716A add Rm,Rn */
	r10 += 0x24u;  /* 0C06716C add #imm,Rn */
	r0 = 0x2u;  /* 0C06716E mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C067172u, 4);  /* 0C067170 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C067172 mov #imm,Rn */
	IF(0x0C067174u); { u32 t_ = r11; PR = 0x0C067178u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067178u); }  /* 0C067174 jsr @Rn */
L_0C067178: BLKS(0x0C067178u);
	r0 += 0x1u;  /* 0C067178 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C06717Cu, 2);  /* 0C06717A mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFDCu;  /* 0C06717C add #imm,Rn */
	r8 += 0x2Cu;  /* 0C06717E add #imm,Rn */
	W16(r8, r9); UPD(0x0C067182u, 3);  /* 0C067180 mov.w Rm,@Rn */
	r9 += 0x4u;  /* 0C067182 add #imm,Rn */
	r0 = r9;  /* 0C067184 mov Rm,Rn */
	IF(0x0C067186u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067186 shar Rn */
	r2 = 0xC058060u; UPD(0x0C06718Au, 4);  /* 0C067188 mov.l @(disp,pc),Rn */
	IF(0x0C06718Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06718A shar Rn */
	r11 = 0x80000u; UPD(0x0C06718Eu, 2);  /* 0C06718C mov.l @(disp,pc),Rn */
	IF(0x0C06718Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06718E shar Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067190 add #imm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C067192 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C067194 and #imm,r0 */
	r4 = r9;  /* 0C067196 mov Rm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06719Au, 6);  /* 0C067198 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C06719Cu, 1);  /* 0C06719A mov.l @(disp,pc),Rn */
	IF(0x0C06719Cu); { u32 t_ = r2; PR = 0x0C0671A0u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0671A0u); }  /* 0C06719C jsr @Rn */
L_0C0671A0: BLKS(0x0C0671A0u);
	r12 = R32(r10 + 0x14u); UPD(0x0C0671A2u, 1);  /* 0C0671A0 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C0671A4u, 1);  /* 0C0671A2 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C0671A4 add Rm,Rn */
	r12 += r1;  /* 0C0671A6 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0671AAu, 3);  /* 0C0671A8 mov.l Rm,@(disp,Rn) */
	r12 = 0xC058030u; UPD(0x0C0671ACu, 1);  /* 0C0671AA mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0671AEu, 1);  /* 0C0671AC mov.l @(disp,pc),Rn */
	IF(0x0C0671AEu); { u32 t_ = r12; PR = 0x0C0671B2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0671B2u); }  /* 0C0671AE jsr @Rn */
L_0C0671B2: BLKS(0x0C0671B2u);
	r4 = R32(r10 + 0x18u); UPD(0x0C0671B4u, 1);  /* 0C0671B2 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0671B4 mov Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C0671B8u, 2);  /* 0C0671B6 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C0671B8 add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0671BCu, 2);  /* 0C0671BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0671BCu); { u32 t_ = r7; PR = 0x0C0671C0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0671C0u); }  /* 0C0671BC jsr @Rn */
L_0C0671C0: BLKS(0x0C0671C0u);
	r4 = r9;  /* 0C0671C0 mov Rm,Rn */
	r5 = r11;  /* 0C0671C2 mov Rm,Rn */
	IF(0x0C0671C4u); { u32 t_ = r12; PR = 0x0C0671C8u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0671C8u); }  /* 0C0671C4 jsr @Rn */
L_0C0671C8: BLKS(0x0C0671C8u);
	r9 = 0xC7C00A0u; UPD(0x0C0671CAu, 1);  /* 0C0671C8 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0671CA mov #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0671CEu, 2);  /* 0C0671CC mov.l @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C0671CE mov #imm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0671D2u, 2);  /* 0C0671D0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0671D4u, 1);  /* 0C0671D2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0671D4u); { u32 t_ = r9; PR = 0x0C0671D8u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C7C00A0, 0x0C7C00A0u, 0x0C0671D8u); }  /* 0C0671D4 jsr @Rn */
L_0C0671D8: BLKS(0x0C0671D8u);
	r3 = 0xC0AFBA0u; UPD(0x0C0671DAu, 1);  /* 0C0671D8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0671DA mov Rm,Rn */
	r5 = 0x4Du;  /* 0C0671DC mov #imm,Rn */
	r15 = r14;  /* 0C0671DE mov Rm,Rn */
	IF(0x0C0671E0u); PR = R32(r15); r15 += 4; UPD(0x0C0671E2u, 4);  /* 0C0671E0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0671E4u, 1);  /* 0C0671E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0671E6u, 1);  /* 0C0671E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0671E8u, 1);  /* 0C0671E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0671EAu, 1);  /* 0C0671E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0671ECu, 1);  /* 0C0671EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0671EEu, 1);  /* 0C0671EC mov.l @Rm+,Rn */
	IF(0x0C0671EEu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C0671EE jmp @Rn */
}

void f_0C067240(sh3_t *c)
{
	LOCALS;
L_0C067240: BLKS(0x0C067240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067242u, 1);  /* 0C067240 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C067242 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067246u, 2);  /* 0C067244 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C067246 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Au, 2);  /* 0C067248 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Cu, 1);  /* 0C06724A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Eu, 1);  /* 0C06724C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067250u, 1);  /* 0C06724E mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C067252u, 1);  /* 0C067250 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067254u, 1);  /* 0C067252 mov.l Rm,@-Rn */
	IF(0x0C067254u); MACL = r4 * r2;  /* 0C067254 mul.l Rm,Rn */
	IF(0x0C067256u); r15 -= 4; W32(r15, PR); UPD(0x0C067258u, 3);  /* 0C067256 sts.l pr,@-Rn */
	r6 = 0xC283794u; UPD(0x0C06725Au, 1);  /* 0C067258 mov.l @(disp,pc),Rn */
	IF(0x0C06725Au); r0 = MACL;  /* 0C06725A sts macl,Rn */
	r15 += 0xFFFFFFE4u;  /* 0C06725C add #imm,Rn */
	r14 = r15;  /* 0C06725E mov Rm,Rn */
	r6 += r0;  /* 0C067260 add Rm,Rn */
	W32(r14, r4); UPD(0x0C067264u, 5);  /* 0C067262 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C067266u, 1);  /* 0C067264 mov.l Rm,@(disp,Rn) */
	r0 = 0x258u; UPD(0x0C067268u, 1);  /* 0C067266 mov.w @(disp,pc),Rn */
	IF(0x0C067268u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06726Au, 1);  /* 0C067268 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06726A tst Rm,Rn */
	if (!T) { UPD(0x0C067290u, 4); goto L_0C067290; }  /* 0C06726C bf */
L_0C06726E: BLKS(0x0C06726Eu);
	r14 += 0x1Cu;  /* 0C06726E add #imm,Rn */
	r15 = r14;  /* 0C067270 mov Rm,Rn */
	IF(0x0C067272u); PR = R32(r15); r15 += 4; UPD(0x0C067274u, 3);  /* 0C067272 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067276u, 1);  /* 0C067274 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067278u, 1);  /* 0C067276 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06727Au, 1);  /* 0C067278 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06727Cu, 1);  /* 0C06727A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06727Eu, 1);  /* 0C06727C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067280u, 1);  /* 0C06727E mov.l @Rm+,Rn */
	IF(0x0C067280u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067280 rts */
L_0C067290: BLKS(0x0C067290u);
	r8 = 0xC060840u; UPD(0x0C067292u, 1);  /* 0C067290 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C067292 mov #imm,Rn */
	IF(0x0C067294u); { u32 t_ = r8; PR = 0x0C067298u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C067298u); }  /* 0C067294 jsr @Rn */
L_0C067298: BLKS(0x0C067298u);
	T = (r0 & r0) == 0;  /* 0C067298 tst Rm,Rn */
	if (T) { UPD(0x0C06726Eu, 4); goto L_0C06726E; }  /* 0C06729A bt */
L_0C06729C: BLKS(0x0C06729Cu);
	r9 = R32(r14); UPD(0x0C06729Eu, 1);  /* 0C06729C mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C06729E mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C0672A2u, 2);  /* 0C0672A0 mov.w @(disp,pc),Rn */
	IF(0x0C0672A2u); MACL = r9 * r11;  /* 0C0672A2 mul.l Rm,Rn */
	r7 = 0x9C0u; UPD(0x0C0672A6u, 3);  /* 0C0672A4 mov.w @(disp,pc),Rn */
	IF(0x0C0672A6u); r10 = MACL;  /* 0C0672A6 sts macl,Rn */
	IF(0x0C0672A8u); MACL = r9 * r7;  /* 0C0672A8 mul.l Rm,Rn */
	r3 = 0x340u; UPD(0x0C0672ACu, 4);  /* 0C0672AA mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0672AEu, 1);  /* 0C0672AC mov.l @(disp,Rm),Rn */
	IF(0x0C0672AEu); r5 = MACL;  /* 0C0672AE sts macl,Rn */
	IF(0x0C0672B0u); MACL = r4 * r3;  /* 0C0672B0 mul.l Rm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C0672B4u, 4);  /* 0C0672B2 mov.l @(disp,pc),Rn */
	IF(0x0C0672B4u); r1 = MACL;  /* 0C0672B4 sts macl,Rn */
	W32(r14 + 0xCu, r13); UPD(0x0C0672B8u, 2);  /* 0C0672B6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r12); UPD(0x0C0672BAu, 1);  /* 0C0672B8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r10); UPD(0x0C0672BCu, 1);  /* 0C0672BA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r5); UPD(0x0C0672BEu, 1);  /* 0C0672BC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r1); UPD(0x0C0672C0u, 1);  /* 0C0672BE mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C0672C2u, 1);  /* 0C0672C0 mov.l @(disp,Rm),Rn */
L_0C0672C2: BLKS(0x0C0672C2u);
	r10 = 0x30u;  /* 0C0672C2 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C0672C6u, 2);  /* 0C0672C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0672C6u); MACL = r4 * r10;  /* 0C0672C6 mul.l Rm,Rn */
	r3 = 0xC1704DCu; UPD(0x0C0672CAu, 3);  /* 0C0672C8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0672CA add Rm,Rn */
	r13 = 0xC1704E6u; UPD(0x0C0672CEu, 2);  /* 0C0672CC mov.l @(disp,pc),Rn */
	IF(0x0C0672CEu); r10 = MACL;  /* 0C0672CE sts macl,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0672D2u, 2);  /* 0C0672D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0672D2u); r12 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0672D4u, 1);  /* 0C0672D2 mov.w @(r0,Rm),Rn */
	IF(0x0C0672D4u); r9 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0672D6u, 1);  /* 0C0672D4 mov.w @(r0,Rm),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0672D8u, 1);  /* 0C0672D6 mov.l @(disp,Rm),Rn */
	r0 = 0x34u;  /* 0C0672D8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r8 = v_; } UPD(0x0C0672DCu, 2);  /* 0C0672DA mov.w @Rm+,Rn */
	r10 += r1;  /* 0C0672DC add Rm,Rn */
	r2 = 0xC27DC84u; UPD(0x0C0672E0u, 2);  /* 0C0672DE mov.l @(disp,pc),Rn */
	IF(0x0C0672E0u); MACL = r8 * r0;  /* 0C0672E0 mul.l Rm,Rn */
	r10 += r2;  /* 0C0672E2 add Rm,Rn */
	r7 = R32(r14 + 0x18u); UPD(0x0C0672E6u, 4);  /* 0C0672E4 mov.l @(disp,Rm),Rn */
	r10 += 0x24u;  /* 0C0672E6 add #imm,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C0672EAu, 2);  /* 0C0672E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0672EAu); r8 = MACL;  /* 0C0672EA sts macl,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0672EEu, 2);  /* 0C0672EC mov.w @Rm,Rn */
	r4 += r7;  /* 0C0672EE add Rm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0672F2u, 2);  /* 0C0672F0 mov.l Rm,@(disp,Rn) */
	r4 += r8;  /* 0C0672F2 add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0672F6u, 2);  /* 0C0672F4 mov.l @(disp,Rm),Rn */
	r6 = r11;  /* 0C0672F6 mov Rm,Rn */
	r3 = R32(r14 + 0x18u); UPD(0x0C0672FAu, 2);  /* 0C0672F8 mov.l @(disp,Rm),Rn */
	r8 += r2;  /* 0C0672FA add Rm,Rn */
	r5 = 0xC8000000u; UPD(0x0C0672FEu, 2);  /* 0C0672FC mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C0672FE add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C067302u, 2);  /* 0C067300 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C067302 add Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C067306u, 2);  /* 0C067304 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C067306 exts.w Rm,Rn */
	IF(0x0C067308u); W32(r0 + r4, r5); UPD(0x0C06730Au, 2);  /* 0C067308 mov.l Rm,@(r0,Rn) */
	r6 = 0x2u;  /* 0C06730A mov #imm,Rn */
	r8 += r0;  /* 0C06730C add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C067310u, 3);  /* 0C06730E mov.l Rm,@(disp,Rn) */
	IF(0x0C067310u); { u32 t_ = r13; PR = 0x0C067314u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067314u); }  /* 0C067310 jsr @Rn */
L_0C067314: BLKS(0x0C067314u);
	r0 += 0x1u;  /* 0C067314 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C067318u, 2);  /* 0C067316 mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C067318 add Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C06731A exts.w Rm,Rn */
	r8 += 0x2Cu;  /* 0C06731C add #imm,Rn */
	W16(r8, r9); UPD(0x0C067320u, 4);  /* 0C06731E mov.w Rm,@Rn */
	r10 += 0xFFFFFFDCu;  /* 0C067320 add #imm,Rn */
	r11 = 0x80000u; UPD(0x0C067324u, 2);  /* 0C067322 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067324 add #imm,Rn */
	r9 += 0x4u;  /* 0C067326 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06732Au, 3);  /* 0C067328 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C06732A mov Rm,Rn */
	IF(0x0C06732Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06732C shar Rn */
	IF(0x0C06732Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06732E shar Rn */
	r11 = 0xC058060u; UPD(0x0C067332u, 4);  /* 0C067330 mov.l @(disp,pc),Rn */
	IF(0x0C067332u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067332 shar Rn */
	r0 &= 0x3Fu;  /* 0C067334 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067338u, 3);  /* 0C067336 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C06733Au, 1);  /* 0C067338 mov.l @(disp,pc),Rn */
	IF(0x0C06733Au); { u32 t_ = r11; PR = 0x0C06733Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06733Eu); }  /* 0C06733A jsr @Rn */
L_0C06733E: BLKS(0x0C06733Eu);
	r7 = R32(r10 + 0x14u); UPD(0x0C067340u, 1);  /* 0C06733E mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C067340 mov Rm,Rn */
	r1 = 0xFFFD0000u; UPD(0x0C067344u, 2);  /* 0C067342 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C067344 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C067348u, 2);  /* 0C067346 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C067348 add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C06734Cu, 2);  /* 0C06734A mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06734C add #imm,Rn */
	IF(0x0C06734Eu); { u32 t_ = r13; PR = 0x0C067352u; W32(r8 + 0x10u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067352u); }  /* 0C06734E jsr @Rn */
L_0C067352: BLKS(0x0C067352u);
	r5 = R32(r10 + 0x18u); UPD(0x0C067354u, 1);  /* 0C067352 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C067354 add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C067358u, 2);  /* 0C067356 mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C06735Au, 1);  /* 0C067358 mov.l @(disp,pc),Rn */
	IF(0x0C06735Au); { u32 t_ = r11; PR = 0x0C06735Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06735Eu); }  /* 0C06735A jsr @Rn */
L_0C06735E: BLKS(0x0C06735Eu);
	W32(r8 + 0x18u, r0); UPD(0x0C067360u, 1);  /* 0C06735E mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C067362u, 1);  /* 0C067360 mov.l @(disp,pc),Rn */
	IF(0x0C067362u); { u32 t_ = r13; PR = 0x0C067366u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067366u); }  /* 0C067362 jsr @Rn */
L_0C067366: BLKS(0x0C067366u);
	r3 = 0x808080u; UPD(0x0C067368u, 1);  /* 0C067366 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C067368 mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C06736Cu, 2);  /* 0C06736A mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C06736C mov #imm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C067370u, 2);  /* 0C06736E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C067372u, 1);  /* 0C067370 mov.l Rm,@(disp,Rn) */
	r8 = R32(r14 + 0x8u); UPD(0x0C067374u, 1);  /* 0C067372 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C067374 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C067376 exts.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C06737Au, 3);  /* 0C067378 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x8u); UPD(0x0C06737Cu, 1);  /* 0C06737A mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06737C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0672C2u, 4); goto L_0C0672C2; } UPD(0x0C067382u, 1); goto L_0C067382; }  /* 0C06737E bf/s */
L_0C067382: BLKS(0x0C067382u);
	r8 = 0xC7C00A0u; UPD(0x0C067384u, 1);  /* 0C067382 mov.l @(disp,pc),Rn */
	IF(0x0C067384u); { u32 t_ = r8; PR = 0x0C067388u; r4 = 0x4Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C00A0, 0x0C7C00A0u, 0x0C067388u); }  /* 0C067384 jsr @Rn */
L_0C067388: BLKS(0x0C067388u);
	r4 = R32(r14); UPD(0x0C06738Au, 1);  /* 0C067388 mov.l @Rm,Rn */
	r5 = 0x50u;  /* 0C06738A mov #imm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C06738Eu, 2);  /* 0C06738C mov.l @(disp,pc),Rn */
	r14 += 0x1Cu;  /* 0C06738E add #imm,Rn */
	r15 = r14;  /* 0C067390 mov Rm,Rn */
	IF(0x0C067392u); PR = R32(r15); r15 += 4; UPD(0x0C067394u, 3);  /* 0C067392 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067396u, 1);  /* 0C067394 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067398u, 1);  /* 0C067396 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06739Au, 1);  /* 0C067398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06739Cu, 1);  /* 0C06739A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06739Eu, 1);  /* 0C06739C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0673A0u, 1);  /* 0C06739E mov.l @Rm+,Rn */
	IF(0x0C0673A0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C0673A0 jmp @Rn */
}


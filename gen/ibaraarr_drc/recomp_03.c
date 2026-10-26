#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0509b0 */
void f_0C0509B0(sh3_t *c)
{
	LOCALS;
L_0C0509B0: BLKS(0x0C0509B0u);
	r0 = 0x5u;  /* 0C0509B0 mov #imm,Rn */
	IF(0x0C0509B2u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0509B2 shld Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0509B6u, 3);  /* 0C0509B4 mov.l Rm,@-Rn */
	r6 += r5;  /* 0C0509B6 add Rm,Rn */
	r0 = 0xC21E114u; UPD(0x0C0509BAu, 2);  /* 0C0509B8 mov.l @(disp,pc),Rn */
	IF(0x0C0509BAu); r6 <<= 2;  /* 0C0509BA shll2 Rn */
	r3 = 0xC160464u; UPD(0x0C0509BEu, 2);  /* 0C0509BC mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0509BE mov Rm,Rn */
	r4 = r4 & 0xFFFF;  /* 0C0509C0 extu.w Rm,Rn */
	r2 = 0x3u;  /* 0C0509C2 mov #imm,Rn */
	r6 += r0;  /* 0C0509C4 add Rm,Rn */
	UPD(0x0C0509C6u, 4);
L_0C0509C6: BLKS(0x0C0509C6u);
	r0 = 0xFu;  /* 0C0509C6 mov #imm,Rn */
	r0 &= r4;  /* 0C0509C8 and Rm,Rn */
	IF(0x0C0509CAu); r0 <<= 2;  /* 0C0509CA shll2 Rn */
	IF(0x0C0509CCu); r5 = R32(r0 + r3); UPD(0x0C0509CEu, 4);  /* 0C0509CC mov.l @(r0,Rm),Rn */
	IF(0x0C0509CEu); r4 >>= 2;  /* 0C0509CE shlr2 Rn */
	W32(r6, r5); UPD(0x0C0509D2u, 2);  /* 0C0509D0 mov.l Rm,@Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0509D2 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C0509D4 add #imm,Rn */
	IF(0x0C0509D6u); T = (s32)r2 >= 0;  /* 0C0509D6 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0509DAu); r4 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C0509C6u, 6); goto L_0C0509C6; } goto L_0C0509DC; }  /* 0C0509D8 bt/s */
L_0C0509DC: BLKS(0x0C0509DCu);
	r15 = r14;  /* 0C0509DC mov Rm,Rn */
	IF(0x0C0509DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0509DE rts */
}

/* FUN_0c0509f0 */
void f_0C0509F0(sh3_t *c)
{
	LOCALS;
L_0C0509F0: BLKS(0x0C0509F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0509F2u, 1);  /* 0C0509F0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0509F2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0509F6u, 2);  /* 0C0509F4 mov.l Rm,@-Rn */
	IF(0x0C0509F6u); T = (s32)r4 >= 0;  /* 0C0509F6 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050A50u, 4); goto L_0C050A50; } goto L_0C0509FC; }  /* 0C0509F8 bf/s */
L_0C0509FC: BLKS(0x0C0509FCu);
	r3 = 0x5u;  /* 0C0509FC mov #imm,Rn */
	r8 = 0xC21E108u; UPD(0x0C050A00u, 3);  /* 0C0509FE mov.l @(disp,pc),Rn */
	IF(0x0C050A00u); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050A00 shld Rm,Rn */
	UPD(0x0C050A02u, 1);
L_0C050A02: BLKS(0x0C050A02u);
	r5 += r6;  /* 0C050A02 add Rm,Rn */
	IF(0x0C050A04u); r5 <<= 2;  /* 0C050A04 shll2 Rn */
	r7 = 0xC160464u; UPD(0x0C050A08u, 3);  /* 0C050A06 mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C050A08 add Rm,Rn */
	r2 = 0x4u;  /* 0C050A0A mov #imm,Rn */
	r3 = 0xFFFFFFFCu;  /* 0C050A0C mov #imm,Rn */
	r5 += 0x10u;  /* 0C050A0E add #imm,Rn */
	UPD(0x0C050A10u, 4);
L_0C050A10: BLKS(0x0C050A10u);
	r0 = 0xFu;  /* 0C050A10 mov #imm,Rn */
	r0 &= r4;  /* 0C050A12 and Rm,Rn */
	IF(0x0C050A14u); r0 <<= 2;  /* 0C050A14 shll2 Rn */
	IF(0x0C050A16u); r6 = R32(r0 + r7); UPD(0x0C050A18u, 4);  /* 0C050A16 mov.l @(r0,Rm),Rn */
	r1 = r4;  /* 0C050A18 mov Rm,Rn */
	W32(r5, r6); UPD(0x0C050A1Cu, 2);  /* 0C050A1A mov.l Rm,@Rn */
	IF(0x0C050A1Cu); T = (s32)r4 >= 0;  /* 0C050A1C cmp/pz Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050A40u, 4); goto L_0C050A40; } UPD(0x0C050A22u, 1); goto L_0C050A22; }  /* 0C050A1E bf/s */
L_0C050A22: BLKS(0x0C050A22u);
	IF(0x0C050A22u); ARG0(0x413Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C050A22 shad Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C050A24 add #imm,Rn */
	IF(0x0C050A26u); T = (s32)r2 > 0;  /* 0C050A26 cmp/pl Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C050A10u, 6); goto L_0C050A10; } goto L_0C050A2C; }  /* 0C050A28 bt/s */
L_0C050A2C: BLKS(0x0C050A2Cu);
	r15 = r14;  /* 0C050A2C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C050A30u, 3);  /* 0C050A2E mov.l @Rm+,Rn */
	IF(0x0C050A30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050A30 rts */
L_0C050A40: BLKS(0x0C050A40u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C050A22u, 3); goto L_0C050A22; }  /* 0C050A40 bra */
L_0C050A50: BLKS(0x0C050A50u);
	r0 = 0x5u;  /* 0C050A50 mov #imm,Rn */
	IF(0x0C050A52u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050A52 shld Rm,Rn */
	r0 = r5;  /* 0C050A54 mov Rm,Rn */
	r8 = 0xC21E108u; UPD(0x0C050A58u, 4);  /* 0C050A56 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C050A58 add Rm,Rn */
	r2 = 0x8080802Du; UPD(0x0C050A5Cu, 2);  /* 0C050A5A mov.l @(disp,pc),Rn */
	IF(0x0C050A5Cu); r0 <<= 2;  /* 0C050A5C shll2 Rn */
	IF(0x0C050A5Eu); W32(r0 + r8, r2); UPD(0x0C050A60u, 2);  /* 0C050A5E mov.l Rm,@(r0,Rn) */
	r0 = 0u - r4;  /* 0C050A60 neg Rm,Rn */
	{ r4 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C050A02u, 4); goto L_0C050A02; }  /* 0C050A62 bra */
}

/* FUN_0c050a80 */
void f_0C050A80(sh3_t *c)
{
	LOCALS;
L_0C050A80: BLKS(0x0C050A80u);
	r7 = 0x5u;  /* 0C050A80 mov #imm,Rn */
	IF(0x0C050A82u); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050A82 shld Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C050A86u, 3);  /* 0C050A84 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C050A86 add Rm,Rn */
	IF(0x0C050A88u); r5 <<= 2;  /* 0C050A88 shll2 Rn */
	r5 += r0;  /* 0C050A8A add Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C050A8C extu.b Rm,Rn */
	r0 = r2;  /* 0C050A8E mov Rm,Rn */
	IF(0x0C050A90u); r0 >>= 2;  /* 0C050A90 shlr2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050A94u, 7);  /* 0C050A92 mov.l Rm,@-Rn */
	IF(0x0C050A94u); r0 >>= 2;  /* 0C050A94 shlr2 Rn */
	r6 = 0xC160464u; UPD(0x0C050A98u, 2);  /* 0C050A96 mov.l @(disp,pc),Rn */
	IF(0x0C050A98u); r0 <<= 2;  /* 0C050A98 shll2 Rn */
	IF(0x0C050A9Au); r3 = R32(r0 + r6); UPD(0x0C050A9Cu, 2);  /* 0C050A9A mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C050A9C mov Rm,Rn */
	r0 = 0xFu;  /* 0C050A9E mov #imm,Rn */
	W32(r5, r3); UPD(0x0C050AA2u, 3);  /* 0C050AA0 mov.l Rm,@Rn */
	r0 &= r2;  /* 0C050AA2 and Rm,Rn */
	IF(0x0C050AA4u); r0 <<= 2;  /* 0C050AA4 shll2 Rn */
	IF(0x0C050AA6u); r3 = R32(r0 + r6); UPD(0x0C050AA8u, 3);  /* 0C050AA6 mov.l @(r0,Rm),Rn */
	W32(r5 + 0x4u, r3); UPD(0x0C050AAAu, 1);  /* 0C050AA8 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C050AAA mov Rm,Rn */
	IF(0x0C050AACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050AAC rts */
}

/* FUN_0c050ac0 */
void f_0C050AC0(sh3_t *c)
{
	LOCALS;
L_0C050AC0: BLKS(0x0C050AC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050AC2u, 1);  /* 0C050AC0 mov.l Rm,@-Rn */
	r2 = R32(r4); UPD(0x0C050AC4u, 1);  /* 0C050AC2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C050AC4 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050AE6u, 4); goto L_0C050AE6; } goto L_0C050ACA; }  /* 0C050AC6 bt/s */
L_0C050ACA: BLKS(0x0C050ACAu);
	r0 = 0x5u;  /* 0C050ACA mov #imm,Rn */
	IF(0x0C050ACCu); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050ACC shld Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C050AD0u, 4);  /* 0C050ACE mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C050AD0 add Rm,Rn */
	IF(0x0C050AD2u); r5 <<= 2;  /* 0C050AD2 shll2 Rn */
	r5 += r0;  /* 0C050AD4 add Rm,Rn */
	IF(0x0C050AD6u); ;  /* 0C050AD6 nop */
	UPD(0x0C050AD8u, 4);
L_0C050AD8: BLKS(0x0C050AD8u);
	W32(r5, r2); UPD(0x0C050ADAu, 1);  /* 0C050AD8 mov.l Rm,@Rn */
	r4 += 0x4u;  /* 0C050ADA add #imm,Rn */
	r3 = R32(r4); UPD(0x0C050ADEu, 2);  /* 0C050ADC mov.l @Rm,Rn */
	r5 += 0x4u;  /* 0C050ADE add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C050AE0 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050AD8u, 5); goto L_0C050AD8; } UPD(0x0C050AE6u, 1); goto L_0C050AE6; }  /* 0C050AE2 bf/s */
L_0C050AE6: BLKS(0x0C050AE6u);
	r15 = r14;  /* 0C050AE6 mov Rm,Rn */
	IF(0x0C050AE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050AE8 rts */
}

/* FUN_0c050af0 */
void f_0C050AF0(sh3_t *c)
{
	LOCALS;
L_0C050AF0: BLKS(0x0C050AF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050AF2u, 1);  /* 0C050AF0 mov.l Rm,@-Rn */
	r2 = R32(r4); UPD(0x0C050AF4u, 1);  /* 0C050AF2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C050AF4 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050B3Eu, 4); goto L_0C050B3E; } goto L_0C050AFA; }  /* 0C050AF6 bt/s */
L_0C050AFA: BLKS(0x0C050AFAu);
	r0 = 0x5u;  /* 0C050AFA mov #imm,Rn */
	IF(0x0C050AFCu); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050AFC shld Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C050B00u, 4);  /* 0C050AFE mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C050B00 add Rm,Rn */
	IF(0x0C050B02u); r5 <<= 2;  /* 0C050B02 shll2 Rn */
	r5 += r0;  /* 0C050B04 add Rm,Rn */
	IF(0x0C050B06u); ;  /* 0C050B06 nop */
	UPD(0x0C050B08u, 4);
L_0C050B08: BLKS(0x0C050B08u);
	r7 = 0x1F0u; UPD(0x0C050B0Au, 1);  /* 0C050B08 mov.w @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C050B0A mov #imm,Rn */
	r7 &= r2;  /* 0C050B0C and Rm,Rn */
	r1 = 0xC0u; UPD(0x0C050B10u, 3);  /* 0C050B0E mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C050B10 and Rm,Rn */
	r6 = 0xFFFFFC00u; UPD(0x0C050B14u, 2);  /* 0C050B12 mov.w @(disp,pc),Rn */
	IF(0x0C050B14u); r7 <<= 2;  /* 0C050B14 shll2 Rn */
	r0 += r0;  /* 0C050B16 add Rm,Rn */
	r7 += r1;  /* 0C050B18 add Rm,Rn */
	r6 &= r2;  /* 0C050B1A and Rm,Rn */
	r0 |= r7;  /* 0C050B1C or Rm,Rn */
	r6 += r0;  /* 0C050B1E add Rm,Rn */
	r0 = 0x80u; UPD(0x0C050B22u, 7);  /* 0C050B20 mov.w @(disp,pc),Rn */
	r4 += 0x4u;  /* 0C050B22 add #imm,Rn */
	IF(0x0C050B24u); W32(r0 + r5, r6); UPD(0x0C050B26u, 2);  /* 0C050B24 mov.l Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C050B26 add #imm,Rn */
	r0 += 0x4u;  /* 0C050B28 add #imm,Rn */
	IF(0x0C050B2Au); W32(r0 + r5, r6); UPD(0x0C050B2Cu, 3);  /* 0C050B2A mov.l Rm,@(r0,Rn) */
	r6 += 0x1Fu;  /* 0C050B2C add #imm,Rn */
	W32(r5, r6); UPD(0x0C050B30u, 2);  /* 0C050B2E mov.l Rm,@Rn */
	r6 += 0x1u;  /* 0C050B30 add #imm,Rn */
	W32(r5 + 0x4u, r6); UPD(0x0C050B34u, 2);  /* 0C050B32 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C050B36u, 1);  /* 0C050B34 mov.l @Rm,Rn */
	r5 += 0x8u;  /* 0C050B36 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C050B38 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050B08u, 5); goto L_0C050B08; } UPD(0x0C050B3Eu, 1); goto L_0C050B3E; }  /* 0C050B3A bf/s */
L_0C050B3E: BLKS(0x0C050B3Eu);
	r15 = r14;  /* 0C050B3E mov Rm,Rn */
	IF(0x0C050B40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050B40 rts */
}

/* FUN_0c050b50 */
void f_0C050B50(sh3_t *c)
{
	LOCALS;
L_0C050B50: BLKS(0x0C050B50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050B52u, 1);  /* 0C050B50 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C050B52 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050B56u, 2);  /* 0C050B54 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C050B56 exts.w Rm,Rn */
	r14 = r15;  /* 0C050B58 mov Rm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C050B5A exts.w Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C050B5Eu, 4);  /* 0C050B5C mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C050B5E mov #imm,Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C050B60 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C050B98u, 5); goto L_0C050B98; } goto L_0C050B66; }  /* 0C050B62 bt/s */
L_0C050B66: BLKS(0x0C050B66u);
	r5 += r6;  /* 0C050B66 add Rm,Rn */
	UPD(0x0C050B68u, 2);
L_0C050B68: BLKS(0x0C050B68u);
	r3 = 0x0u;  /* 0C050B68 mov #imm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C050B6A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C050B8Cu, 5); goto L_0C050B8C; } goto L_0C050B70; }  /* 0C050B6C bt/s */
L_0C050B70: BLKS(0x0C050B70u);
	r2 = r5;  /* 0C050B70 mov Rm,Rn */
	IF(0x0C050B72u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C050B72 shld Rm,Rn */
	r1 = 0xC21E088u; UPD(0x0C050B76u, 4);  /* 0C050B74 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C050B76 add Rm,Rn */
	IF(0x0C050B78u); r2 <<= 2;  /* 0C050B78 shll2 Rn */
	r2 += r1;  /* 0C050B7A add Rm,Rn */
	UPD(0x0C050B7Cu, 3);
L_0C050B7C: BLKS(0x0C050B7Cu);
	{ u32 v_ = R32(r4); r4 += 4; r1 = v_; } UPD(0x0C050B7Eu, 1);  /* 0C050B7C mov.l @Rm+,Rn */
	W32(r2, r1); UPD(0x0C050B80u, 1);  /* 0C050B7E mov.l Rm,@Rn */
	r1 = r3;  /* 0C050B80 mov Rm,Rn */
	r1 += 0x1u;  /* 0C050B82 add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C050B84 exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C050B86 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050B7Cu, 7); goto L_0C050B7C; } UPD(0x0C050B8Cu, 1); goto L_0C050B8C; }  /* 0C050B88 bf/s */
L_0C050B8C: BLKS(0x0C050B8Cu);
	r2 = r7;  /* 0C050B8C mov Rm,Rn */
	r2 += 0x1u;  /* 0C050B8E add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C050B90 exts.w Rm,Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C050B92 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050B68u, 7); goto L_0C050B68; } UPD(0x0C050B98u, 1); goto L_0C050B98; }  /* 0C050B94 bf/s */
L_0C050B98: BLKS(0x0C050B98u);
	r15 = r14;  /* 0C050B98 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C050B9Cu, 2);  /* 0C050B9A mov.l @Rm+,Rn */
	IF(0x0C050B9Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050B9C rts */
}

/* FUN_0c050cd0 */
void f_0C050CD0(sh3_t *c)
{
	LOCALS;
L_0C050CD0: BLKS(0x0C050CD0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050CD2u, 1);  /* 0C050CD0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C050CD2 exts.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C050CD6u, 2);  /* 0C050CD4 mov.b @Rm,Rn */
	r14 = r15;  /* 0C050CD6 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C050CD8 tst Rm,Rn */
	{ u32 c_ = T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C050CFCu, 5); goto L_0C050CFC; } goto L_0C050CDE; }  /* 0C050CDA bt/s */
L_0C050CDE: BLKS(0x0C050CDEu);
	r0 = 0x5u;  /* 0C050CDE mov #imm,Rn */
	IF(0x0C050CE0u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050CE0 shld Rm,Rn */
	r0 = 0xC21E104u; UPD(0x0C050CE4u, 4);  /* 0C050CE2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C050CE4 add Rm,Rn */
	IF(0x0C050CE6u); r5 <<= 2;  /* 0C050CE6 shll2 Rn */
	r5 += r0;  /* 0C050CE8 add Rm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C050CEA exts.b Rm,Rn */
	UPD(0x0C050CECu, 4);
L_0C050CEC: BLKS(0x0C050CECu);
	r3 += r7;  /* 0C050CEC add Rm,Rn */
	r5 += 0x4u;  /* 0C050CEE add #imm,Rn */
	W32(r5, r3); UPD(0x0C050CF2u, 3);  /* 0C050CF0 mov.l Rm,@Rn */
	r4 += 0x1u;  /* 0C050CF2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C050CF6u, 2);  /* 0C050CF4 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C050CF6 tst Rm,Rn */
	{ u32 c_ = !T; r3 = (u32)(s32)(s8)r2; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C050CECu, 4); goto L_0C050CEC; } UPD(0x0C050CFCu, 1); goto L_0C050CFC; }  /* 0C050CF8 bf/s */
L_0C050CFC: BLKS(0x0C050CFCu);
	r15 = r14;  /* 0C050CFC mov Rm,Rn */
	IF(0x0C050CFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050CFE rts */
}

/* FUN_0c050d10 */
void f_0C050D10(sh3_t *c)
{
	LOCALS;
L_0C050D10: BLKS(0x0C050D10u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050D12u, 1);  /* 0C050D10 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C050D12 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C050D16u, 2);  /* 0C050D14 mov.b @Rm,Rn */
	r14 = r15;  /* 0C050D16 mov Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C050D18 tst Rm,Rn */
	{ u32 c_ = T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C050D5Cu, 5); goto L_0C050D5C; } goto L_0C050D1E; }  /* 0C050D1A bt/s */
L_0C050D1E: BLKS(0x0C050D1Eu);
	r0 = 0x5u;  /* 0C050D1E mov #imm,Rn */
	IF(0x0C050D20u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C050D20 shld Rm,Rn */
	r5 += r6;  /* 0C050D22 add Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C050D26u, 5);  /* 0C050D24 mov.l @(disp,pc),Rn */
	IF(0x0C050D26u); r5 <<= 2;  /* 0C050D26 shll2 Rn */
	r6 = 0x1F0u; UPD(0x0C050D2Au, 2);  /* 0C050D28 mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C050D2A add Rm,Rn */
	UPD(0x0C050D2Cu, 1);
L_0C050D2C: BLKS(0x0C050D2Cu);
	r1 = (u32)(s32)(s8)r3;  /* 0C050D2C exts.b Rm,Rn */
	r2 = 0xFu;  /* 0C050D2E mov #imm,Rn */
	r2 &= r1;  /* 0C050D30 and Rm,Rn */
	r1 &= r6;  /* 0C050D32 and Rm,Rn */
	r0 = 0xC0u; UPD(0x0C050D36u, 5);  /* 0C050D34 mov.w @(disp,pc),Rn */
	IF(0x0C050D36u); r1 <<= 2;  /* 0C050D36 shll2 Rn */
	r0 += r1;  /* 0C050D38 add Rm,Rn */
	r2 += r2;  /* 0C050D3A add Rm,Rn */
	r2 |= r0;  /* 0C050D3C or Rm,Rn */
	r0 = 0x80u; UPD(0x0C050D40u, 5);  /* 0C050D3E mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C050D40 add Rm,Rn */
	IF(0x0C050D42u); W32(r0 + r5, r2); UPD(0x0C050D44u, 2);  /* 0C050D42 mov.l Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C050D44 add #imm,Rn */
	r2 += 0x1u;  /* 0C050D46 add #imm,Rn */
	r0 += 0x4u;  /* 0C050D48 add #imm,Rn */
	IF(0x0C050D4Au); W32(r0 + r5, r2); UPD(0x0C050D4Cu, 4);  /* 0C050D4A mov.l Rm,@(r0,Rn) */
	r2 += 0x1Fu;  /* 0C050D4C add #imm,Rn */
	W32(r5, r2); UPD(0x0C050D50u, 2);  /* 0C050D4E mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C050D50 add #imm,Rn */
	W32(r5 + 0x4u, r2); UPD(0x0C050D54u, 2);  /* 0C050D52 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C050D56u, 1);  /* 0C050D54 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C050D56 tst Rm,Rn */
	{ u32 c_ = !T; r5 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050D2Cu, 4); goto L_0C050D2C; } UPD(0x0C050D5Cu, 1); goto L_0C050D5C; }  /* 0C050D58 bf/s */
L_0C050D5C: BLKS(0x0C050D5Cu);
	r15 = r14;  /* 0C050D5C mov Rm,Rn */
	IF(0x0C050D5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050D5E rts */
}

/* FUN_0c050d70 */
void f_0C050D70(sh3_t *c)
{
	LOCALS;
L_0C050D70: BLKS(0x0C050D70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050D72u, 1);  /* 0C050D70 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050D74u, 1);  /* 0C050D72 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C050D74 mov Rm,Rn */
	r0 = 0xC0AFE40u; UPD(0x0C050D78u, 2);  /* 0C050D76 mov.l @(disp,pc),Rn */
	IF(0x0C050D78u); r15 -= 4; W32(r15, PR); UPD(0x0C050D7Au, 1);  /* 0C050D78 sts.l pr,@-Rn */
	IF(0x0C050D7Au); { u32 t_ = r0; PR = 0x0C050D7Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C050D7Eu); }  /* 0C050D7A jsr @Rn */
L_0C050D7E: BLKS(0x0C050D7Eu);
	IF(0x0C050D7Eu); MACL = r8 * r0;  /* 0C050D7E mul.l Rm,Rn */
	IF(0x0C050D80u); r1 = MACL;  /* 0C050D80 sts macl,Rn */
	IF(0x0C050D82u); r1 >>= 8;  /* 0C050D82 shlr8 Rn */
	r1 += r1;  /* 0C050D84 add Rm,Rn */
	IF(0x0C050D86u); r1 >>= 8;  /* 0C050D86 shlr8 Rn */
	r0 = r1 & 0xFFFF;  /* 0C050D88 extu.w Rm,Rn */
	r15 = r14;  /* 0C050D8A mov Rm,Rn */
	IF(0x0C050D8Cu); PR = R32(r15); r15 += 4; UPD(0x0C050D8Eu, 9);  /* 0C050D8C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C050D90u, 1);  /* 0C050D8E mov.l @Rm+,Rn */
	IF(0x0C050D90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050D90 rts */
}

void f_0C050DA0(sh3_t *c)
{
	LOCALS;
L_0C050DA0: BLKS(0x0C050DA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050DA2u, 1);  /* 0C050DA0 mov.l Rm,@-Rn */
	r0 = 0xC2177F4u; UPD(0x0C050DA4u, 1);  /* 0C050DA2 mov.l @(disp,pc),Rn */
	IF(0x0C050DA4u); r15 -= 4; W32(r15, PR); UPD(0x0C050DA6u, 1);  /* 0C050DA4 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C050DA8u, 1);  /* 0C050DA6 mov.b @Rm,Rn */
	r0 = r2;  /* 0C050DA8 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C050DAA cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050DD0u, 5); goto L_0C050DD0; } goto L_0C050DB0; }  /* 0C050DAC bt/s */
L_0C050DB0: BLKS(0x0C050DB0u);
	r0 = 0xC275DD0u; UPD(0x0C050DB2u, 2);  /* 0C050DB0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C050DB2 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C050DB6u, 2);  /* 0C050DB4 mov.b Rm,@Rn */
L_0C050DB6: BLKS(0x0C050DB6u);
	r1 = 0xC2177F4u; UPD(0x0C050DB8u, 1);  /* 0C050DB6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C050DB8 mov #imm,Rn */
	UPD(0x0C050DBAu, 1);
L_0C050DBA: BLKS(0x0C050DBAu);
	W8(r1, r2); UPD(0x0C050DBCu, 1);  /* 0C050DBA mov.b Rm,@Rn */
L_0C050DBC: BLKS(0x0C050DBCu);
	r15 = r14;  /* 0C050DBC mov Rm,Rn */
	IF(0x0C050DBEu); PR = R32(r15); r15 += 4; UPD(0x0C050DC0u, 2);  /* 0C050DBE lds.l @Rn+,pr */
	IF(0x0C050DC0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050DC0 rts */
L_0C050DD0: BLKS(0x0C050DD0u);
	r5 = 0xC392AFCu; UPD(0x0C050DD2u, 1);  /* 0C050DD0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C050DD2 mov #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C050DD4 tst Rm,Rn */
	{ u32 c_ = T; W8(r5, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C050DF0u, 5); goto L_0C050DF0; } UPD(0x0C050DDAu, 1); goto L_0C050DDA; }  /* 0C050DD6 bt/s */
L_0C050DDA: BLKS(0x0C050DDAu);
	r4 = 0xC275DD0u; UPD(0x0C050DDCu, 1);  /* 0C050DDA mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C050DDC mov #imm,Rn */
	r2 = 0xC1604CFu; UPD(0x0C050DE0u, 2);  /* 0C050DDE mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C050DE2u, 1);  /* 0C050DE0 mov.b Rm,@Rn */
	{ W8(r2, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C050DBCu, 3); goto L_0C050DBC; }  /* 0C050DE2 bra */
L_0C050DF0: BLKS(0x0C050DF0u);
	r1 = 0xC1604CFu; UPD(0x0C050DF2u, 1);  /* 0C050DF0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C050DF4u, 1);  /* 0C050DF2 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C050DF4 add #imm,Rn */
	r0 = (u32)(s32)(s8)r3;  /* 0C050DF6 exts.b Rm,Rn */
	T = r0 == 0x5u;  /* 0C050DF8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r1, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C050E20u, 6); goto L_0C050E20; } UPD(0x0C050DFEu, 1); goto L_0C050DFE; }  /* 0C050DFA bt/s */
L_0C050DFE: BLKS(0x0C050DFEu);
	r4 = 0xC284EB8u; UPD(0x0C050E00u, 1);  /* 0C050DFE mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C050E00 add #imm,Rn */
	r5 = 0xC286277u; UPD(0x0C050E04u, 2);  /* 0C050E02 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C050E06u, 1);  /* 0C050E04 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C050E08u, 1);  /* 0C050E06 mov.b @Rm,Rn */
	r4 = r6 & 0xFFFF;  /* 0C050E08 extu.w Rm,Rn */
	W32(r15, r2); UPD(0x0C050E0Cu, 2);  /* 0C050E0A mov.l Rm,@Rn */
	r6 = r0 & 0xFF;  /* 0C050E0C extu.b Rm,Rn */
	r7 = 0xC2864FCu; UPD(0x0C050E10u, 2);  /* 0C050E0E mov.l @(disp,pc),Rn */
	r0 = 0xC0B0930u; UPD(0x0C050E12u, 1);  /* 0C050E10 mov.l @(disp,pc),Rn */
	r5 = R32(r7); UPD(0x0C050E14u, 1);  /* 0C050E12 mov.l @Rm,Rn */
	r7 = 0xC050DA0u; UPD(0x0C050E16u, 1);  /* 0C050E14 mov.l @(disp,pc),Rn */
	IF(0x0C050E16u); { u32 t_ = r0; PR = 0x0C050E1Au; IF(0x0C050E18u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0930, 0x0C0B0930u, 0x0C050E1Au); }  /* 0C050E16 jsr @Rn */
L_0C050E1A: BLKS(0x0C050E1Au);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C050DB6u, 3); goto L_0C050DB6; }  /* 0C050E1A bra */
L_0C050E20: BLKS(0x0C050E20u);
	W8(r1, r4); UPD(0x0C050E22u, 1);  /* 0C050E20 mov.b Rm,@Rn */
	r1 = 0xC283748u; UPD(0x0C050E24u, 1);  /* 0C050E22 mov.l @(disp,pc),Rn */
	{ r2 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C050DBAu, 3); goto L_0C050DBA; }  /* 0C050E24 bra */
}

/* FUN_0c050e50 */
void f_0C050E50(sh3_t *c)
{
	LOCALS;
L_0C050E50: BLKS(0x0C050E50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050E52u, 1);  /* 0C050E50 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C050E52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C050E56u, 2);  /* 0C050E54 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C050E56 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C050E5Au, 2);  /* 0C050E58 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C050E5Cu, 1);  /* 0C050E5A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C050E5Eu, 1);  /* 0C050E5C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C050E60u, 1);  /* 0C050E5E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050E62u, 1);  /* 0C050E60 mov.l Rm,@-Rn */
	r8 = 0xC0AFCA0u; UPD(0x0C050E64u, 1);  /* 0C050E62 mov.l @(disp,pc),Rn */
	IF(0x0C050E64u); r15 -= 4; W32(r15, PR); UPD(0x0C050E66u, 1);  /* 0C050E64 sts.l pr,@-Rn */
	r0 = 0xC275DBCu; UPD(0x0C050E68u, 1);  /* 0C050E66 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C050E68 mov Rm,Rn */
	IF(0x0C050E6Au); { u32 t_ = r8; PR = 0x0C050E6Eu; W8(r0, r2); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C050E6Eu); }  /* 0C050E6A jsr @Rn */
L_0C050E6E: BLKS(0x0C050E6Eu);
	r12 = 0x0u;  /* 0C050E6E mov #imm,Rn */
	UPD(0x0C050E70u, 1);
L_0C050E70: BLKS(0x0C050E70u);
	r13 = 0x0u;  /* 0C050E70 mov #imm,Rn */
	IF(0x0C050E72u); ;  /* 0C050E72 nop */
	UPD(0x0C050E74u, 2);
L_0C050E74: BLKS(0x0C050E74u);
	r8 = 0xC04F330u; UPD(0x0C050E76u, 1);  /* 0C050E74 mov.l @(disp,pc),Rn */
	r11 = 0xC04F930u; UPD(0x0C050E78u, 1);  /* 0C050E76 mov.l @(disp,pc),Rn */
	IF(0x0C050E78u); { u32 t_ = r8; PR = 0x0C050E7Cu; IF(0x0C050E7Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C050E7Cu); }  /* 0C050E78 jsr @Rn */
L_0C050E7C: BLKS(0x0C050E7Cu);
	r10 = 0xC050650u; UPD(0x0C050E7Eu, 1);  /* 0C050E7C mov.l @(disp,pc),Rn */
	IF(0x0C050E7Eu); { u32 t_ = r11; PR = 0x0C050E82u; IF(0x0C050E80u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C050E82u); }  /* 0C050E7E jsr @Rn */
L_0C050E82: BLKS(0x0C050E82u);
	r9 = 0xC0505F0u; UPD(0x0C050E84u, 1);  /* 0C050E82 mov.l @(disp,pc),Rn */
	r8 = 0xC054B70u; UPD(0x0C050E86u, 1);  /* 0C050E84 mov.l @(disp,pc),Rn */
	IF(0x0C050E86u); { u32 t_ = r10; PR = 0x0C050E8Au; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C050E8Au); }  /* 0C050E86 jsr @Rn */
L_0C050E8A: BLKS(0x0C050E8Au);
	IF(0x0C050E8Au); { u32 t_ = r9; PR = 0x0C050E8Eu; IF(0x0C050E8Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C050E8Eu); }  /* 0C050E8A jsr @Rn */
L_0C050E8E: BLKS(0x0C050E8Eu);
	r5 = r13;  /* 0C050E8E mov Rm,Rn */
	IF(0x0C050E90u); { u32 t_ = r8; PR = 0x0C050E94u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054B70, 0x0C054B70u, 0x0C050E94u); }  /* 0C050E90 jsr @Rn */
L_0C050E94: BLKS(0x0C050E94u);
	r13 = r0;  /* 0C050E94 mov Rm,Rn */
	r0 = 0xC27DDF4u; UPD(0x0C050E98u, 2);  /* 0C050E96 mov.l @(disp,pc),Rn */
	r3 = 0x100u; UPD(0x0C050E9Au, 1);  /* 0C050E98 mov.w @(disp,pc),Rn */
	IF(0x0C050E9Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C050E9Cu, 1);  /* 0C050E9A mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C050E9C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C050E9E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C050EA0 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050EAEu, 6); goto L_0C050EAE; } goto L_0C050EA6; }  /* 0C050EA2 bt/s */
L_0C050EA6: BLKS(0x0C050EA6u);
	r4 = 0xC160790u; UPD(0x0C050EA8u, 2);  /* 0C050EA6 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C050EA8 mov Rm,Rn */
	IF(0x0C050EAAu); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C050EACu, 2);  /* 0C050EAA mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C050EAC mov Rm,Rn */
	UPD(0x0C050EAEu, 1);
L_0C050EAE: BLKS(0x0C050EAEu);
	r0 &= 0x2u;  /* 0C050EAE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C050EB0 tst Rm,Rn */
	if (T) { UPD(0x0C050EBAu, 5); goto L_0C050EBA; }  /* 0C050EB2 bt */
L_0C050EB4: BLKS(0x0C050EB4u);
	r5 = 0xC16079Cu; UPD(0x0C050EB6u, 1);  /* 0C050EB4 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C050EB6 mov Rm,Rn */
	IF(0x0C050EB8u); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C050EBAu, 2);  /* 0C050EB8 mov.b @(r0,Rm),Rn */
L_0C050EBA: BLKS(0x0C050EBAu);
	r2 = 0xC160784u; UPD(0x0C050EBCu, 1);  /* 0C050EBA mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C050EBC mov #imm,Rn */
	r9 = 0xC050CD0u; UPD(0x0C050EC0u, 2);  /* 0C050EBE mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C050EC0 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C050EC4u, 2);  /* 0C050EC2 mov.l @(disp,pc),Rn */
	r4 = 0xC160690u; UPD(0x0C050EC6u, 1);  /* 0C050EC4 mov.l @(disp,pc),Rn */
	IF(0x0C050EC6u); { u32 t_ = r9; PR = 0x0C050ECAu; IF(0x0C050EC8u); r5 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050ECAu); }  /* 0C050EC6 jsr @Rn */
L_0C050ECA: BLKS(0x0C050ECAu);
	r10 = 0x80u; UPD(0x0C050ECCu, 1);  /* 0C050ECA mov.w @(disp,pc),Rn */
	T = (r12 & r12) == 0;  /* 0C050ECC tst Rm,Rn */
	r0 = 0xC27DDF4u; UPD(0x0C050ED0u, 2);  /* 0C050ECE mov.l @(disp,pc),Rn */
	IF(0x0C050ED0u); r3 = T;  /* 0C050ED0 movt Rn */
	IF(0x0C050ED2u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C050ED4u, 2);  /* 0C050ED2 mov.b @(r0,Rm),Rn */
	r11 = 0xC21F7F9u; UPD(0x0C050ED6u, 1);  /* 0C050ED4 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C050ED6 mov Rm,Rn */
	T = (r0 & 0xCu) == 0;  /* 0C050ED8 tst #imm,r0 */
	r10 = 0xFFFFFFFFu;  /* 0C050EDA mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C050EDEu, 4);  /* 0C050EDC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C050EDE negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C050EE0 tst Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C050EE2 negc Rm,Rn */
	r7 &= r3;  /* 0C050EE4 and Rm,Rn */
	r6 &= r7;  /* 0C050EE6 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C050EE8 tst Rm,Rn */
	{ u32 c_ = T; r0 ^= 0x1u; /* slot xor #imm,r0 */ if (c_) { UPD(0x0C050EF0u, 9); goto L_0C050EF0; } goto L_0C050EEE; }  /* 0C050EEA bt/s */
L_0C050EEE: BLKS(0x0C050EEEu);
	W8(r11, r0); UPD(0x0C050EF0u, 2);  /* 0C050EEE mov.b Rm,@Rn */
L_0C050EF0: BLKS(0x0C050EF0u);
	r8 = 0x80808000u; UPD(0x0C050EF2u, 1);  /* 0C050EF0 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C050EF2 mov #imm,Rn */
	r4 = 0xC1604F8u; UPD(0x0C050EF6u, 2);  /* 0C050EF4 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C050EF6 mov #imm,Rn */
	IF(0x0C050EF8u); { u32 t_ = r9; PR = 0x0C050EFCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050EFCu); }  /* 0C050EF8 jsr @Rn */
L_0C050EFC: BLKS(0x0C050EFCu);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C050EFEu, 1);  /* 0C050EFC mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C050EFE tst Rm,Rn */
	if (T) { UPD(0x0C050F08u, 4); goto L_0C050F08; }  /* 0C050F00 bt */
L_0C050F02: BLKS(0x0C050F02u);
	r5 = 0x2u;  /* 0C050F02 mov #imm,Rn */
	{ r6 = 0x10u; /* slot mov #imm,Rn */ UPD(0x0C051050u, 4); goto L_0C051050; }  /* 0C050F04 bra */
L_0C050F08: BLKS(0x0C050F08u);
	r4 = 0xC1604ECu; UPD(0x0C050F0Au, 1);  /* 0C050F08 mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C050F0A mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F0C mov #imm,Rn */
	IF(0x0C050F0Eu); { u32 t_ = r9; PR = 0x0C050F12u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F12u); }  /* 0C050F0E jsr @Rn */
L_0C050F12: BLKS(0x0C050F12u);
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C050F14u, 1);  /* 0C050F12 mov.b @Rm,Rn */
	r7 = r8;  /* 0C050F14 mov Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C050F16 tst Rm,Rn */
	IF(0x0C050F18u); r0 = T;  /* 0C050F18 movt Rn */
	r5 = 0xC1607C8u; UPD(0x0C050F1Cu, 4);  /* 0C050F1A mov.l @(disp,pc),Rn */
	r0 ^= 0x1u;  /* 0C050F1C xor #imm,r0 */
	IF(0x0C050F1Eu); r0 <<= 2;  /* 0C050F1E shll2 Rn */
	IF(0x0C050F20u); r4 = R32(r0 + r5); UPD(0x0C050F22u, 3);  /* 0C050F20 mov.l @(r0,Rm),Rn */
	r6 = 0xEu;  /* 0C050F22 mov #imm,Rn */
	IF(0x0C050F24u); { u32 t_ = r9; PR = 0x0C050F28u; r5 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F28u); }  /* 0C050F24 jsr @Rn */
L_0C050F28: BLKS(0x0C050F28u);
	r4 = 0xC160504u; UPD(0x0C050F2Au, 1);  /* 0C050F28 mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C050F2A mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F2C mov #imm,Rn */
	IF(0x0C050F2Eu); { u32 t_ = r9; PR = 0x0C050F32u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F32u); }  /* 0C050F2E jsr @Rn */
L_0C050F32: BLKS(0x0C050F32u);
	r4 = 0xC160510u; UPD(0x0C050F34u, 1);  /* 0C050F32 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C050F34 mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F36 mov #imm,Rn */
	IF(0x0C050F38u); { u32 t_ = r9; PR = 0x0C050F3Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F3Cu); }  /* 0C050F38 jsr @Rn */
L_0C050F3C: BLKS(0x0C050F3Cu);
	r4 = 0xC16052Cu; UPD(0x0C050F3Eu, 1);  /* 0C050F3C mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C050F3E mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F40 mov #imm,Rn */
	IF(0x0C050F42u); { u32 t_ = r9; PR = 0x0C050F46u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F46u); }  /* 0C050F42 jsr @Rn */
L_0C050F46: BLKS(0x0C050F46u);
	r4 = 0xC160538u; UPD(0x0C050F48u, 1);  /* 0C050F46 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C050F48 mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F4A mov #imm,Rn */
	IF(0x0C050F4Cu); { u32 t_ = r9; PR = 0x0C050F50u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F50u); }  /* 0C050F4C jsr @Rn */
L_0C050F50: BLKS(0x0C050F50u);
	r4 = 0xC16054Cu; UPD(0x0C050F52u, 1);  /* 0C050F50 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C050F52 mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F54 mov #imm,Rn */
	IF(0x0C050F56u); { u32 t_ = r9; PR = 0x0C050F5Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F5Au); }  /* 0C050F56 jsr @Rn */
L_0C050F5A: BLKS(0x0C050F5Au);
	r4 = 0xC160520u; UPD(0x0C050F5Cu, 1);  /* 0C050F5A mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C050F5C mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F5E mov #imm,Rn */
	IF(0x0C050F60u); { u32 t_ = r9; PR = 0x0C050F64u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F64u); }  /* 0C050F60 jsr @Rn */
L_0C050F64: BLKS(0x0C050F64u);
	r4 = 0xC160558u; UPD(0x0C050F66u, 1);  /* 0C050F64 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C050F66 mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F68 mov #imm,Rn */
	IF(0x0C050F6Au); { u32 t_ = r9; PR = 0x0C050F6Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F6Eu); }  /* 0C050F6A jsr @Rn */
L_0C050F6E: BLKS(0x0C050F6Eu);
	r4 = 0xC160564u; UPD(0x0C050F70u, 1);  /* 0C050F6E mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C050F70 mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F72 mov #imm,Rn */
	IF(0x0C050F74u); { u32 t_ = r9; PR = 0x0C050F78u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F78u); }  /* 0C050F74 jsr @Rn */
L_0C050F78: BLKS(0x0C050F78u);
	r4 = 0xC160570u; UPD(0x0C050F7Au, 1);  /* 0C050F78 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C050F7A mov #imm,Rn */
	r6 = 0xBu;  /* 0C050F7C mov #imm,Rn */
	IF(0x0C050F7Eu); { u32 t_ = r9; PR = 0x0C050F82u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C050F82u); }  /* 0C050F7E jsr @Rn */
L_0C050F82: BLKS(0x0C050F82u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C050F84u, 1);  /* 0C050F82 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C050F84 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C050FF0u, 4); goto L_0C050FF0; } UPD(0x0C050F8Au, 1); goto L_0C050F8A; }  /* 0C050F86 bf/s */
L_0C050F8A: BLKS(0x0C050F8Au);
	r9 = 0xC04F770u; UPD(0x0C050F8Cu, 1);  /* 0C050F8A mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C050F8C mov #imm,Rn */
	r11 = 0xC050840u; UPD(0x0C050F90u, 2);  /* 0C050F8E mov.l @(disp,pc),Rn */
	IF(0x0C050F90u); { u32 t_ = r9; PR = 0x0C050F94u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C050F94u); }  /* 0C050F90 jsr @Rn */
L_0C050F94: BLKS(0x0C050F94u);
	IF(0x0C050F94u); { u32 t_ = r11; PR = 0x0C050F98u; IF(0x0C050F96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C050F98u); }  /* 0C050F94 jsr @Rn */
L_0C050F98: BLKS(0x0C050F98u);
	r0 = 0x80u; UPD(0x0C050F9Au, 1);  /* 0C050F98 mov.w @(disp,pc),Rn */
	r3 = 0xC27DDF4u; UPD(0x0C050F9Cu, 1);  /* 0C050F9A mov.l @(disp,pc),Rn */
	IF(0x0C050F9Cu); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C050F9Eu, 1);  /* 0C050F9C mov.b @(r0,Rm),Rn */
	r0 &= 0x90u;  /* 0C050F9E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C050FA0 tst Rm,Rn */
	IF(0x0C050FA2u); r8 = T;  /* 0C050FA2 movt Rn */
	r0 = r12;  /* 0C050FA4 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C050FA6 cmp/eq #imm,r0 */
	IF(0x0C050FA8u); r10 = T;  /* 0C050FA8 movt Rn */
	r8 |= r10;  /* 0C050FAA or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C050FAC tst Rm,Rn */
	{ u32 c_ = T; T = (r12 & r12) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C050FB6u, 11); goto L_0C050FB6; } goto L_0C050FB2; }  /* 0C050FAE bt/s */
L_0C050FB2: BLKS(0x0C050FB2u);
	{ IF(0x0C050FB4u); ; /* slot nop */ UPD(0x0C050E74u, 4); goto L_0C050E74; }  /* 0C050FB2 bra */
L_0C050FB6: BLKS(0x0C050FB6u);
	if (T) { UPD(0x0C050FD0u, 3); goto L_0C050FD0; }  /* 0C050FB6 bt */
L_0C050FB8: BLKS(0x0C050FB8u);
	IF(0x0C050FB8u); r12 <<= 2;  /* 0C050FB8 shll2 Rn */
	r13 = 0xC160758u; UPD(0x0C050FBCu, 2);  /* 0C050FBA mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C050FBC mov Rm,Rn */
	IF(0x0C050FBEu); r12 = R32(r0 + r13); UPD(0x0C050FC0u, 2);  /* 0C050FBE mov.l @(r0,Rm),Rn */
	IF(0x0C050FC0u); { u32 t_ = r12; PR = 0x0C050FC4u; IF(0x0C050FC2u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C050FC4u); }  /* 0C050FC0 jsr @Rn */
L_0C050FC4: BLKS(0x0C050FC4u);
	{ r12 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C050E70u, 3); goto L_0C050E70; }  /* 0C050FC4 bra */
L_0C050FD0: BLKS(0x0C050FD0u);
	r15 = r14;  /* 0C050FD0 mov Rm,Rn */
	IF(0x0C050FD2u); PR = R32(r15); r15 += 4; UPD(0x0C050FD4u, 2);  /* 0C050FD2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C050FD6u, 1);  /* 0C050FD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C050FD8u, 1);  /* 0C050FD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C050FDAu, 1);  /* 0C050FD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C050FDCu, 1);  /* 0C050FDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C050FDEu, 1);  /* 0C050FDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C050FE0u, 1);  /* 0C050FDE mov.l @Rm+,Rn */
	IF(0x0C050FE0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050FE0 rts */
L_0C050FF0: BLKS(0x0C050FF0u);
	r11 = 0xC0559C0u; UPD(0x0C050FF2u, 1);  /* 0C050FF0 mov.l @(disp,pc),Rn */
	IF(0x0C050FF2u); { u32 t_ = r11; PR = 0x0C050FF6u; r5 = 0x17u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0559C0, 0x0C0559C0u, 0x0C050FF6u); }  /* 0C050FF2 jsr @Rn */
L_0C050FF6: BLKS(0x0C050FF6u);
	T = (r0 & r0) == 0;  /* 0C050FF6 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C051040u, 4); goto L_0C051040; } UPD(0x0C050FFCu, 1); goto L_0C050FFC; }  /* 0C050FF8 bf/s */
L_0C050FFC: BLKS(0x0C050FFCu);
	r7 = 0xC286068u; UPD(0x0C050FFEu, 1);  /* 0C050FFC mov.l @(disp,pc),Rn */
	r5 = 0xC2852C8u; UPD(0x0C051000u, 1);  /* 0C050FFE mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r7); UPD(0x0C051002u, 1);  /* 0C051000 mov.w @Rm,Rn */
	r2 = 0x400u; UPD(0x0C051004u, 1);  /* 0C051002 mov.w @(disp,pc),Rn */
	r6 = r11 & 0xFFFF;  /* 0C051004 extu.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C051008u, 2);  /* 0C051006 mov.w @Rm,Rn */
	T = r6 == r2;  /* 0C051008 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C05100A negc Rm,Rn */
	r0 = r4 & 0xFFFF;  /* 0C05100C extu.w Rm,Rn */
	T = r0 == r2;  /* 0C05100E cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C051010 negc Rm,Rn */
	r7 |= r3;  /* 0C051012 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C051014 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C051030u, 10); goto L_0C051030; } UPD(0x0C05101Au, 1); goto L_0C05101A; }  /* 0C051016 bf/s */
L_0C05101A: BLKS(0x0C05101Au);
	r9 = 0xC05B800u; UPD(0x0C05101Cu, 1);  /* 0C05101A mov.l @(disp,pc),Rn */
	IF(0x0C05101Cu); { u32 t_ = r9; PR = 0x0C051020u; IF(0x0C05101Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B800, 0x0C05B800u, 0x0C051020u); }  /* 0C05101C jsr @Rn */
L_0C051020: BLKS(0x0C051020u);
	{ IF(0x0C051022u); ; /* slot nop */ UPD(0x0C050F8Au, 3); goto L_0C050F8A; }  /* 0C051020 bra */
L_0C051030: BLKS(0x0C051030u);
	r4 = 0xC16074Cu; UPD(0x0C051032u, 1);  /* 0C051030 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C051032 mov #imm,Rn */
	IF(0x0C051034u); { u32 t_ = r9; PR = 0x0C051038u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051038u); }  /* 0C051034 jsr @Rn */
L_0C051038: BLKS(0x0C051038u);
	{ IF(0x0C05103Au); ; /* slot nop */ UPD(0x0C05101Au, 3); goto L_0C05101A; }  /* 0C051038 bra */
L_0C051040: BLKS(0x0C051040u);
	r4 = 0xC160740u; UPD(0x0C051042u, 1);  /* 0C051040 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C051042 mov #imm,Rn */
	IF(0x0C051044u); { u32 t_ = r9; PR = 0x0C051048u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051048u); }  /* 0C051044 jsr @Rn */
L_0C051048: BLKS(0x0C051048u);
	{ IF(0x0C05104Au); ; /* slot nop */ UPD(0x0C050FFCu, 3); goto L_0C050FFC; }  /* 0C051048 bra */
L_0C051050: BLKS(0x0C051050u);
	r4 = 0xC1607D0u; UPD(0x0C051052u, 1);  /* 0C051050 mov.l @(disp,pc),Rn */
	IF(0x0C051052u); { u32 t_ = r9; PR = 0x0C051056u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051056u); }  /* 0C051052 jsr @Rn */
L_0C051056: BLKS(0x0C051056u);
	{ IF(0x0C051058u); ; /* slot nop */ UPD(0x0C050F08u, 3); goto L_0C050F08; }  /* 0C051056 bra */
}

void f_0C051100(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05121C);
L_0C051100: BLKS(0x0C051100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051102u, 1);  /* 0C051100 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C051102 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051106u, 2);  /* 0C051104 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051108u, 1);  /* 0C051106 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05110Au, 1);  /* 0C051108 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05110Cu, 1);  /* 0C05110A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05110Eu, 1);  /* 0C05110C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051110u, 1);  /* 0C05110E mov.l Rm,@-Rn */
	r0 = 0xC053FC0u; UPD(0x0C051112u, 1);  /* 0C051110 mov.l @(disp,pc),Rn */
	IF(0x0C051112u); r15 -= 4; W32(r15, PR); UPD(0x0C051114u, 1);  /* 0C051112 sts.l pr,@-Rn */
	r3 = 0xC21F5E1u; UPD(0x0C051116u, 1);  /* 0C051114 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C051116 mov Rm,Rn */
	r8 = 0xC0505F0u; UPD(0x0C05111Au, 2);  /* 0C051118 mov.l @(disp,pc),Rn */
	IF(0x0C05111Au); { u32 t_ = r0; PR = 0x0C05111Eu; W8(r3, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C053FC0, 0x0C053FC0u, 0x0C05111Eu); }  /* 0C05111A jsr @Rn */
L_0C05111E: BLKS(0x0C05111Eu);
	r10 = 0xC050CD0u; UPD(0x0C051120u, 1);  /* 0C05111E mov.l @(disp,pc),Rn */
	IF(0x0C051120u); { u32 t_ = r8; PR = 0x0C051124u; IF(0x0C051122u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C051124u); }  /* 0C051120 jsr @Rn */
L_0C051124: BLKS(0x0C051124u);
	r9 = 0x80808000u; UPD(0x0C051126u, 1);  /* 0C051124 mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C051126 mov #imm,Rn */
	r4 = 0xC160520u; UPD(0x0C05112Au, 2);  /* 0C051128 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C05112A mov #imm,Rn */
	IF(0x0C05112Cu); { u32 t_ = r10; PR = 0x0C051130u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051130u); }  /* 0C05112C jsr @Rn */
L_0C051130: BLKS(0x0C051130u);
	r4 = 0xC160810u; UPD(0x0C051132u, 1);  /* 0C051130 mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C051132 mov #imm,Rn */
	r6 = 0xCu;  /* 0C051134 mov #imm,Rn */
	IF(0x0C051136u); { u32 t_ = r10; PR = 0x0C05113Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05113Au); }  /* 0C051136 jsr @Rn */
L_0C05113A: BLKS(0x0C05113Au);
	r4 = 0xC1607E0u; UPD(0x0C05113Cu, 1);  /* 0C05113A mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C05113C mov #imm,Rn */
	r6 = 0x7u;  /* 0C05113E mov #imm,Rn */
	IF(0x0C051140u); { u32 t_ = r10; PR = 0x0C051144u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051144u); }  /* 0C051140 jsr @Rn */
L_0C051144: BLKS(0x0C051144u);
	r4 = 0xC1607E8u; UPD(0x0C051146u, 1);  /* 0C051144 mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C051146 mov #imm,Rn */
	r6 = 0x7u;  /* 0C051148 mov #imm,Rn */
	IF(0x0C05114Au); { u32 t_ = r10; PR = 0x0C05114Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05114Eu); }  /* 0C05114A jsr @Rn */
L_0C05114E: BLKS(0x0C05114Eu);
	r4 = 0xC1607F0u; UPD(0x0C051150u, 1);  /* 0C05114E mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C051150 mov #imm,Rn */
	r6 = 0x7u;  /* 0C051152 mov #imm,Rn */
	IF(0x0C051154u); { u32 t_ = r10; PR = 0x0C051158u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051158u); }  /* 0C051154 jsr @Rn */
L_0C051158: BLKS(0x0C051158u);
	r4 = 0xC160800u; UPD(0x0C05115Au, 1);  /* 0C051158 mov.l @(disp,pc),Rn */
	r5 = 0x19u;  /* 0C05115A mov #imm,Rn */
	r6 = 0x7u;  /* 0C05115C mov #imm,Rn */
	IF(0x0C05115Eu); { u32 t_ = r10; PR = 0x0C051162u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051162u); }  /* 0C05115E jsr @Rn */
L_0C051162: BLKS(0x0C051162u);
	r4 = 0xC1607F8u; UPD(0x0C051164u, 1);  /* 0C051162 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C051164 mov #imm,Rn */
	r6 = 0x7u;  /* 0C051166 mov #imm,Rn */
	IF(0x0C051168u); { u32 t_ = r10; PR = 0x0C05116Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05116Cu); }  /* 0C051168 jsr @Rn */
L_0C05116C: BLKS(0x0C05116Cu);
	r4 = 0xC160808u; UPD(0x0C05116Eu, 1);  /* 0C05116C mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C05116E mov #imm,Rn */
	r6 = 0x7u;  /* 0C051170 mov #imm,Rn */
	IF(0x0C051172u); { u32 t_ = r10; PR = 0x0C051176u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051176u); }  /* 0C051172 jsr @Rn */
L_0C051176: BLKS(0x0C051176u);
	r4 = 0xC16081Cu; UPD(0x0C051178u, 1);  /* 0C051176 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C051178 mov #imm,Rn */
	r6 = 0x1u;  /* 0C05117A mov #imm,Rn */
	IF(0x0C05117Cu); { u32 t_ = r10; PR = 0x0C051180u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051180u); }  /* 0C05117C jsr @Rn */
L_0C051180: BLKS(0x0C051180u);
	r4 = 0xC160824u; UPD(0x0C051182u, 1);  /* 0C051180 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C051182 mov #imm,Rn */
	r6 = 0x1u;  /* 0C051184 mov #imm,Rn */
	IF(0x0C051186u); { u32 t_ = r10; PR = 0x0C05118Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05118Au); }  /* 0C051186 jsr @Rn */
L_0C05118A: BLKS(0x0C05118Au);
	r4 = 0xC16082Cu; UPD(0x0C05118Cu, 1);  /* 0C05118A mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C05118C mov #imm,Rn */
	r6 = 0x1u;  /* 0C05118E mov #imm,Rn */
	IF(0x0C051190u); { u32 t_ = r10; PR = 0x0C051194u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051194u); }  /* 0C051190 jsr @Rn */
L_0C051194: BLKS(0x0C051194u);
	r4 = 0xC160834u; UPD(0x0C051196u, 1);  /* 0C051194 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C051196 mov #imm,Rn */
	r6 = 0x1u;  /* 0C051198 mov #imm,Rn */
	IF(0x0C05119Au); { u32 t_ = r10; PR = 0x0C05119Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05119Eu); }  /* 0C05119A jsr @Rn */
L_0C05119E: BLKS(0x0C05119Eu);
	r4 = 0xC16086Cu; UPD(0x0C0511A0u, 1);  /* 0C05119E mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C0511A0 mov #imm,Rn */
	r6 = 0x10u;  /* 0C0511A2 mov #imm,Rn */
	IF(0x0C0511A4u); { u32 t_ = r10; PR = 0x0C0511A8u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511A8u); }  /* 0C0511A4 jsr @Rn */
L_0C0511A8: BLKS(0x0C0511A8u);
	r4 = 0xC160870u; UPD(0x0C0511AAu, 1);  /* 0C0511A8 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C0511AA mov #imm,Rn */
	r6 = 0x15u;  /* 0C0511AC mov #imm,Rn */
	IF(0x0C0511AEu); { u32 t_ = r10; PR = 0x0C0511B2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511B2u); }  /* 0C0511AE jsr @Rn */
L_0C0511B2: BLKS(0x0C0511B2u);
	r4 = 0xC16083Cu; UPD(0x0C0511B4u, 1);  /* 0C0511B2 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C0511B4 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511B6 mov #imm,Rn */
	IF(0x0C0511B8u); { u32 t_ = r10; PR = 0x0C0511BCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511BCu); }  /* 0C0511B8 jsr @Rn */
L_0C0511BC: BLKS(0x0C0511BCu);
	r4 = 0xC160840u; UPD(0x0C0511BEu, 1);  /* 0C0511BC mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C0511BE mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511C0 mov #imm,Rn */
	IF(0x0C0511C2u); { u32 t_ = r10; PR = 0x0C0511C6u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511C6u); }  /* 0C0511C2 jsr @Rn */
L_0C0511C6: BLKS(0x0C0511C6u);
	r4 = 0xC160848u; UPD(0x0C0511C8u, 1);  /* 0C0511C6 mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C0511C8 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511CA mov #imm,Rn */
	IF(0x0C0511CCu); { u32 t_ = r10; PR = 0x0C0511D0u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511D0u); }  /* 0C0511CC jsr @Rn */
L_0C0511D0: BLKS(0x0C0511D0u);
	r4 = 0xC160850u; UPD(0x0C0511D2u, 1);  /* 0C0511D0 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C0511D2 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511D4 mov #imm,Rn */
	IF(0x0C0511D6u); { u32 t_ = r10; PR = 0x0C0511DAu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511DAu); }  /* 0C0511D6 jsr @Rn */
L_0C0511DA: BLKS(0x0C0511DAu);
	r4 = 0xC160858u; UPD(0x0C0511DCu, 1);  /* 0C0511DA mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C0511DC mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511DE mov #imm,Rn */
	IF(0x0C0511E0u); { u32 t_ = r10; PR = 0x0C0511E4u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511E4u); }  /* 0C0511E0 jsr @Rn */
L_0C0511E4: BLKS(0x0C0511E4u);
	r4 = 0xC16085Cu; UPD(0x0C0511E6u, 1);  /* 0C0511E4 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C0511E6 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511E8 mov #imm,Rn */
	IF(0x0C0511EAu); { u32 t_ = r10; PR = 0x0C0511EEu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511EEu); }  /* 0C0511EA jsr @Rn */
L_0C0511EE: BLKS(0x0C0511EEu);
	r4 = 0xC160860u; UPD(0x0C0511F0u, 1);  /* 0C0511EE mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C0511F0 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511F2 mov #imm,Rn */
	IF(0x0C0511F4u); { u32 t_ = r10; PR = 0x0C0511F8u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0511F8u); }  /* 0C0511F4 jsr @Rn */
L_0C0511F8: BLKS(0x0C0511F8u);
	r4 = 0xC160864u; UPD(0x0C0511FAu, 1);  /* 0C0511F8 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0511FA mov #imm,Rn */
	r6 = 0xBu;  /* 0C0511FC mov #imm,Rn */
	IF(0x0C0511FEu); { u32 t_ = r10; PR = 0x0C051202u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051202u); }  /* 0C0511FE jsr @Rn */
L_0C051202: BLKS(0x0C051202u);
	r4 = 0xC1605D4u; UPD(0x0C051204u, 1);  /* 0C051202 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C051204 mov #imm,Rn */
	r6 = 0x3u;  /* 0C051206 mov #imm,Rn */
	IF(0x0C051208u); { u32 t_ = r10; PR = 0x0C05120Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05120Cu); }  /* 0C051208 jsr @Rn */
L_0C05120C: BLKS(0x0C05120Cu);
	r4 = 0xC1605F0u; UPD(0x0C05120Eu, 1);  /* 0C05120C mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C05120E mov #imm,Rn */
	r6 = 0x5u;  /* 0C051210 mov #imm,Rn */
	IF(0x0C051212u); { u32 t_ = r10; PR = 0x0C051216u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051216u); }  /* 0C051212 jsr @Rn */
L_0C051216: BLKS(0x0C051216u);
	r2 = 0xC2862A2u; UPD(0x0C051218u, 1);  /* 0C051216 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05121Au, 1);  /* 0C051218 mov.b @Rm,Rn */
	IF(0x0C05121Au); T = (s32)r0 >= 0;  /* 0C05121A cmp/pz Rn */
	UPD(0x0C05121Cu, 1);
L_0C05121C: BLKS(0x0C05121Cu);
	SPIN_SAVE(0C05121C);
	if (!T) { SPIN_FFD(0C05121C, 3); UPD(0x0C05121Cu, 3); goto L_0C05121C; }  /* 0C05121C bf */
L_0C05121E: BLKS(0x0C05121Eu);
	r9 = 0xC051490u; UPD(0x0C051220u, 1);  /* 0C05121E mov.l @(disp,pc),Rn */
	r11 = 0xC0514F0u; UPD(0x0C051222u, 1);  /* 0C051220 mov.l @(disp,pc),Rn */
	r13 = 0xC0404000u; UPD(0x0C051224u, 1);  /* 0C051222 mov.l @(disp,pc),Rn */
	r12 = 0xC050CD0u; UPD(0x0C051226u, 1);  /* 0C051224 mov.l @(disp,pc),Rn */
	r10 = 0xC050A80u; UPD(0x0C051228u, 1);  /* 0C051226 mov.l @(disp,pc),Rn */
L_0C051228: BLKS(0x0C051228u);
	r8 = 0xC04F330u; UPD(0x0C05122Au, 1);  /* 0C051228 mov.l @(disp,pc),Rn */
	IF(0x0C05122Au); { u32 t_ = r8; PR = 0x0C05122Eu; IF(0x0C05122Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05122Eu); }  /* 0C05122A jsr @Rn */
L_0C05122E: BLKS(0x0C05122Eu);
	r8 = 0xC04F930u; UPD(0x0C051230u, 1);  /* 0C05122E mov.l @(disp,pc),Rn */
	IF(0x0C051230u); { u32 t_ = r8; PR = 0x0C051234u; IF(0x0C051232u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C051234u); }  /* 0C051230 jsr @Rn */
L_0C051234: BLKS(0x0C051234u);
	r8 = 0xC050650u; UPD(0x0C051236u, 1);  /* 0C051234 mov.l @(disp,pc),Rn */
	IF(0x0C051236u); { u32 t_ = r8; PR = 0x0C05123Au; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C05123Au); }  /* 0C051236 jsr @Rn */
L_0C05123A: BLKS(0x0C05123Au);
	r4 = 0xA4000124u; UPD(0x0C05123Cu, 1);  /* 0C05123A mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C05123C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C051240u, 2);  /* 0C05123E mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)r5;  /* 0C051240 exts.b Rm,Rn */
	IF(0x0C051242u); { u32 t_ = r9; PR = 0x0C051246u; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C051246u); }  /* 0C051242 jsr @Rn */
L_0C051246: BLKS(0x0C051246u);
	r3 = 0xA4000126u; UPD(0x0C051248u, 1);  /* 0C051246 mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C051248 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05124Cu, 2);  /* 0C05124A mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C05124C mov #imm,Rn */
	r8 = 0xA4000134u; UPD(0x0C051250u, 2);  /* 0C05124E mov.l @(disp,pc),Rn */
	IF(0x0C051250u); { u32 t_ = r9; PR = 0x0C051254u; r4 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C051254u); }  /* 0C051250 jsr @Rn */
L_0C051254: BLKS(0x0C051254u);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C051256u, 1);  /* 0C051254 mov.b @Rm,Rn */
	r5 = 0x1Au;  /* 0C051256 mov #imm,Rn */
	r4 = (u32)(s32)(s8)r2;  /* 0C051258 exts.b Rm,Rn */
	IF(0x0C05125Au); { u32 t_ = r9; PR = 0x0C05125Eu; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C05125Eu); }  /* 0C05125A jsr @Rn */
L_0C05125E: BLKS(0x0C05125Eu);
	r7 = 0xA400012Au; UPD(0x0C051260u, 1);  /* 0C05125E mov.l @(disp,pc),Rn */
	r5 = 0x19u;  /* 0C051260 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C051264u, 2);  /* 0C051262 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)r6;  /* 0C051264 exts.b Rm,Rn */
	IF(0x0C051266u); { u32 t_ = r9; PR = 0x0C05126Au; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C05126Au); }  /* 0C051266 jsr @Rn */
L_0C05126A: BLKS(0x0C05126Au);
	r4 = 0xA4000130u; UPD(0x0C05126Cu, 1);  /* 0C05126A mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C05126C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C051270u, 2);  /* 0C05126E mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)r5;  /* 0C051270 exts.b Rm,Rn */
	IF(0x0C051272u); { u32 t_ = r9; PR = 0x0C051276u; r5 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C051276u); }  /* 0C051272 jsr @Rn */
L_0C051276: BLKS(0x0C051276u);
	r3 = 0xB8000050u; UPD(0x0C051278u, 1);  /* 0C051276 mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C051278 mov #imm,Rn */
	r0 = R32(r3); UPD(0x0C05127Cu, 2);  /* 0C05127A mov.l @Rm,Rn */
	r6 = 0xCu;  /* 0C05127C mov #imm,Rn */
	r8 = 0xC21F89Fu; UPD(0x0C051280u, 2);  /* 0C05127E mov.l @(disp,pc),Rn */
	IF(0x0C051280u); { u32 t_ = r9; PR = 0x0C051284u; r4 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C051284u); }  /* 0C051280 jsr @Rn */
L_0C051284: BLKS(0x0C051284u);
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C051286u, 1);  /* 0C051284 mov.b @Rm,Rn */
	r5 = 0x16u;  /* 0C051286 mov #imm,Rn */
	IF(0x0C051288u); { u32 t_ = r9; PR = 0x0C05128Cu; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051490, 0x0C051490u, 0x0C05128Cu); }  /* 0C051288 jsr @Rn */
L_0C05128C: BLKS(0x0C05128Cu);
	r2 = 0xC220C20u; UPD(0x0C05128Eu, 1);  /* 0C05128C mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C05128E mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C051292u, 2);  /* 0C051290 mov.b @Rm,Rn */
	IF(0x0C051292u); { u32 t_ = r11; PR = 0x0C051296u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0514F0, 0x0C0514F0u, 0x0C051296u); }  /* 0C051292 jsr @Rn */
L_0C051296: BLKS(0x0C051296u);
	r7 = 0xC21F5EAu; UPD(0x0C051298u, 1);  /* 0C051296 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C051298 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C05129Cu, 2);  /* 0C05129A mov.b @Rm,Rn */
	IF(0x0C05129Cu); { u32 t_ = r11; PR = 0x0C0512A0u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0514F0, 0x0C0514F0u, 0x0C0512A0u); }  /* 0C05129C jsr @Rn */
L_0C0512A0: BLKS(0x0C0512A0u);
	r6 = 0xC2177F8u; UPD(0x0C0512A2u, 1);  /* 0C0512A0 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C0512A2 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0512A6u, 2);  /* 0C0512A4 mov.b @Rm,Rn */
	IF(0x0C0512A6u); { u32 t_ = r11; PR = 0x0C0512AAu; r6 = 0x15u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0514F0, 0x0C0514F0u, 0x0C0512AAu); }  /* 0C0512A6 jsr @Rn */
L_0C0512AA: BLKS(0x0C0512AAu);
	r5 = 0xC21F7F9u; UPD(0x0C0512ACu, 1);  /* 0C0512AA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0512AEu, 1);  /* 0C0512AC mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0512AE tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0512F0u, 4); goto L_0C0512F0; } UPD(0x0C0512B4u, 1); goto L_0C0512B4; }  /* 0C0512B0 bf/s */
L_0C0512B4: BLKS(0x0C0512B4u);
	r8 = 0xC04F770u; UPD(0x0C0512B6u, 1);  /* 0C0512B4 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0512B6 mov #imm,Rn */
	IF(0x0C0512B8u); { u32 t_ = r8; PR = 0x0C0512BCu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C0512BCu); }  /* 0C0512B8 jsr @Rn */
L_0C0512BC: BLKS(0x0C0512BCu);
	r8 = 0xC050840u; UPD(0x0C0512BEu, 1);  /* 0C0512BC mov.l @(disp,pc),Rn */
	IF(0x0C0512BEu); { u32 t_ = r8; PR = 0x0C0512C2u; IF(0x0C0512C0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C0512C2u); }  /* 0C0512BE jsr @Rn */
L_0C0512C2: BLKS(0x0C0512C2u);
	r0 = 0xC2862A2u; UPD(0x0C0512C4u, 1);  /* 0C0512C2 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0512C6u, 1);  /* 0C0512C4 mov.b @Rm,Rn */
	IF(0x0C0512C6u); T = (s32)r2 >= 0;  /* 0C0512C6 cmp/pz Rn */
	if (T) { UPD(0x0C051228u, 4); goto L_0C051228; }  /* 0C0512C8 bt */
L_0C0512CA: BLKS(0x0C0512CAu);
	r12 = 0x0u;  /* 0C0512CA mov #imm,Rn */
	r11 = 0xC21F5E1u; UPD(0x0C0512CEu, 2);  /* 0C0512CC mov.l @(disp,pc),Rn */
	W8(r11, r12); UPD(0x0C0512D0u, 1);  /* 0C0512CE mov.b Rm,@Rn */
	r15 = r14;  /* 0C0512D0 mov Rm,Rn */
	IF(0x0C0512D2u); PR = R32(r15); r15 += 4; UPD(0x0C0512D4u, 2);  /* 0C0512D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0512D6u, 1);  /* 0C0512D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0512D8u, 1);  /* 0C0512D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0512DAu, 1);  /* 0C0512D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0512DCu, 1);  /* 0C0512DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0512DEu, 1);  /* 0C0512DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0512E0u, 1);  /* 0C0512DE mov.l @Rm+,Rn */
	IF(0x0C0512E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0512E0 rts */
L_0C0512F0: BLKS(0x0C0512F0u);
	r4 = 0xC16086Cu; UPD(0x0C0512F2u, 1);  /* 0C0512F0 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C0512F2 mov #imm,Rn */
	IF(0x0C0512F4u); { u32 t_ = r12; PR = 0x0C0512F8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0512F8u); }  /* 0C0512F4 jsr @Rn */
L_0C0512F8: BLKS(0x0C0512F8u);
	r4 = 0xC160870u; UPD(0x0C0512FAu, 1);  /* 0C0512F8 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0512FA mov #imm,Rn */
	r6 = 0x19u;  /* 0C0512FC mov #imm,Rn */
	IF(0x0C0512FEu); { u32 t_ = r12; PR = 0x0C051302u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051302u); }  /* 0C0512FE jsr @Rn */
L_0C051302: BLKS(0x0C051302u);
	r4 = 0xC160874u; UPD(0x0C051304u, 1);  /* 0C051302 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C051304 mov #imm,Rn */
	r6 = 0xCu;  /* 0C051306 mov #imm,Rn */
	IF(0x0C051308u); { u32 t_ = r12; PR = 0x0C05130Cu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05130Cu); }  /* 0C051308 jsr @Rn */
L_0C05130C: BLKS(0x0C05130Cu);
	r4 = 0xC160880u; UPD(0x0C05130Eu, 1);  /* 0C05130C mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C05130E mov #imm,Rn */
	r6 = 0xCu;  /* 0C051310 mov #imm,Rn */
	IF(0x0C051312u); { u32 t_ = r12; PR = 0x0C051316u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051316u); }  /* 0C051312 jsr @Rn */
L_0C051316: BLKS(0x0C051316u);
	r4 = 0xC16088Cu; UPD(0x0C051318u, 1);  /* 0C051316 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C051318 mov #imm,Rn */
	r6 = 0xCu;  /* 0C05131A mov #imm,Rn */
	IF(0x0C05131Cu); { u32 t_ = r12; PR = 0x0C051320u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051320u); }  /* 0C05131C jsr @Rn */
L_0C051320: BLKS(0x0C051320u);
	r4 = 0xC160898u; UPD(0x0C051322u, 1);  /* 0C051320 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C051322 mov #imm,Rn */
	r6 = 0xCu;  /* 0C051324 mov #imm,Rn */
	IF(0x0C051326u); { u32 t_ = r12; PR = 0x0C05132Au; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05132Au); }  /* 0C051326 jsr @Rn */
L_0C05132A: BLKS(0x0C05132Au);
	r7 = 0xC392E00u; UPD(0x0C05132Cu, 1);  /* 0C05132A mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C05132C mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C051330u, 2);  /* 0C05132E mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C051330 extu.b Rm,Rn */
	IF(0x0C051332u); { u32 t_ = r10; PR = 0x0C051336u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051336u); }  /* 0C051332 jsr @Rn */
L_0C051336: BLKS(0x0C051336u);
	r4 = 0xC392E01u; UPD(0x0C051338u, 1);  /* 0C051336 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C051338 mov #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C05133Cu, 2);  /* 0C05133A mov.b @Rm,Rn */
	r4 = r8 & 0xFF;  /* 0C05133C extu.b Rm,Rn */
	r8 = 0xC395084u; UPD(0x0C051340u, 2);  /* 0C05133E mov.l @(disp,pc),Rn */
	IF(0x0C051340u); { u32 t_ = r10; PR = 0x0C051344u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051344u); }  /* 0C051340 jsr @Rn */
L_0C051344: BLKS(0x0C051344u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C051346u, 1);  /* 0C051344 mov.b @Rm+,Rn */
	r5 = 0x8u;  /* 0C051346 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C051348 extu.b Rm,Rn */
	IF(0x0C05134Au); { u32 t_ = r10; PR = 0x0C05134Eu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05134Eu); }  /* 0C05134A jsr @Rn */
L_0C05134E: BLKS(0x0C05134Eu);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C051350u, 1);  /* 0C05134E mov.b @Rm,Rn */
	r6 = 0x19u;  /* 0C051350 mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C051352 extu.b Rm,Rn */
	r8 = 0xC286278u; UPD(0x0C051356u, 3);  /* 0C051354 mov.l @(disp,pc),Rn */
	IF(0x0C051356u); { u32 t_ = r10; PR = 0x0C05135Au; r5 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05135Au); }  /* 0C051356 jsr @Rn */
L_0C05135A: BLKS(0x0C05135Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C05135Cu, 1);  /* 0C05135A mov.b @Rm+,Rn */
	r5 = 0x6u;  /* 0C05135C mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C05135E extu.b Rm,Rn */
	IF(0x0C051360u); { u32 t_ = r10; PR = 0x0C051364u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051364u); }  /* 0C051360 jsr @Rn */
L_0C051364: BLKS(0x0C051364u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C051366u, 1);  /* 0C051364 mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C051366 mov #imm,Rn */
	r8 = 0xC2852C0u; UPD(0x0C05136Au, 2);  /* 0C051368 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C05136A extu.b Rm,Rn */
	IF(0x0C05136Cu); { u32 t_ = r10; PR = 0x0C051370u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051370u); }  /* 0C05136C jsr @Rn */
L_0C051370: BLKS(0x0C051370u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r2 = v_; } UPD(0x0C051372u, 1);  /* 0C051370 mov.b @Rm+,Rn */
	r5 = 0x5u;  /* 0C051372 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C051374 extu.b Rm,Rn */
	IF(0x0C051376u); { u32 t_ = r10; PR = 0x0C05137Au; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05137Au); }  /* 0C051376 jsr @Rn */
L_0C05137A: BLKS(0x0C05137Au);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C05137Cu, 1);  /* 0C05137A mov.b @Rm,Rn */
	r5 = 0x5u;  /* 0C05137C mov #imm,Rn */
	r8 = 0xC275568u; UPD(0x0C051380u, 2);  /* 0C05137E mov.l @(disp,pc),Rn */
	r4 = r7 & 0xFF;  /* 0C051380 extu.b Rm,Rn */
	IF(0x0C051382u); { u32 t_ = r10; PR = 0x0C051386u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051386u); }  /* 0C051382 jsr @Rn */
L_0C051386: BLKS(0x0C051386u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r6 = v_; } UPD(0x0C051388u, 1);  /* 0C051386 mov.b @Rm+,Rn */
	r5 = 0x4u;  /* 0C051388 mov #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C05138A extu.b Rm,Rn */
	IF(0x0C05138Cu); { u32 t_ = r10; PR = 0x0C051390u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051390u); }  /* 0C05138C jsr @Rn */
L_0C051390: BLKS(0x0C051390u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C051392u, 1);  /* 0C051390 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C051392 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C051394 extu.b Rm,Rn */
	IF(0x0C051396u); { u32 t_ = r10; PR = 0x0C05139Au; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05139Au); }  /* 0C051396 jsr @Rn */
L_0C05139A: BLKS(0x0C05139Au);
	{ IF(0x0C05139Cu); ; /* slot nop */ UPD(0x0C0512B4u, 3); goto L_0C0512B4; }  /* 0C05139A bra */
}

/* FUN_0c051490 */
void f_0C051490(sh3_t *c)
{
	LOCALS;
L_0C051490: BLKS(0x0C051490u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051492u, 1);  /* 0C051490 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051494u, 1);  /* 0C051492 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r4;  /* 0C051494 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051498u, 2);  /* 0C051496 mov.l Rm,@-Rn */
	r9 = 0x7u;  /* 0C051498 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05149Cu, 2);  /* 0C05149A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C05149C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0514A0u, 2);  /* 0C05149E mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C0514A0 exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0514A4u, 2);  /* 0C0514A2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0514A6u, 1);  /* 0C0514A4 mov.l Rm,@-Rn */
	r13 = 0xC1608B4u; UPD(0x0C0514A8u, 1);  /* 0C0514A6 mov.l @(disp,pc),Rn */
	IF(0x0C0514A8u); r15 -= 4; W32(r15, PR); UPD(0x0C0514AAu, 1);  /* 0C0514A8 sts.l pr,@-Rn */
	r12 = 0xC050AC0u; UPD(0x0C0514ACu, 1);  /* 0C0514AA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0514AC mov Rm,Rn */
	r0 = r8;  /* 0C0514AE mov Rm,Rn */
	UPD(0x0C0514B0u, 2);
L_0C0514B0: BLKS(0x0C0514B0u);
	r0 &= 0x1u;  /* 0C0514B0 and #imm,r0 */
	r6 = r10;  /* 0C0514B2 mov Rm,Rn */
	IF(0x0C0514B4u); r0 <<= 2;  /* 0C0514B4 shll2 Rn */
	r6 += r9;  /* 0C0514B6 add Rm,Rn */
	IF(0x0C0514B8u); r4 = R32(r0 + r13); UPD(0x0C0514BAu, 5);  /* 0C0514B8 mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C0514BA mov Rm,Rn */
	IF(0x0C0514BCu); { u32 t_ = r12; PR = 0x0C0514C0u; IF(0x0C0514BEu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1); /* slot shar Rn */ UPD(t_, 3); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0514C0u); }  /* 0C0514BC jsr @Rn */
L_0C0514C0: BLKS(0x0C0514C0u);
	r9 += 0xFFFFFFFFu;  /* 0C0514C0 add #imm,Rn */
	IF(0x0C0514C2u); T = (s32)r9 >= 0;  /* 0C0514C2 cmp/pz Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0514B0u, 5); goto L_0C0514B0; } goto L_0C0514C8; }  /* 0C0514C4 bt/s */
L_0C0514C8: BLKS(0x0C0514C8u);
	r15 = r14;  /* 0C0514C8 mov Rm,Rn */
	IF(0x0C0514CAu); PR = R32(r15); r15 += 4; UPD(0x0C0514CCu, 3);  /* 0C0514CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0514CEu, 1);  /* 0C0514CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0514D0u, 1);  /* 0C0514CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0514D2u, 1);  /* 0C0514D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0514D4u, 1);  /* 0C0514D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0514D6u, 1);  /* 0C0514D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0514D8u, 1);  /* 0C0514D6 mov.l @Rm+,Rn */
	IF(0x0C0514D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0514D8 rts */
}

/* FUN_0c0514f0 */
void f_0C0514F0(sh3_t *c)
{
	LOCALS;
L_0C0514F0: BLKS(0x0C0514F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0514F2u, 1);  /* 0C0514F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0514F4u, 1);  /* 0C0514F2 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C0514F4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0514F8u, 2);  /* 0C0514F6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C0514F8 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0514FCu, 2);  /* 0C0514FA mov.l Rm,@-Rn */
	r10 = 0x7u;  /* 0C0514FC mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C051500u, 2);  /* 0C0514FE mov.l Rm,@-Rn */
	r11 = r6;  /* 0C051500 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051504u, 2);  /* 0C051502 mov.l Rm,@-Rn */
	r12 = 0xC051540u; UPD(0x0C051506u, 1);  /* 0C051504 mov.l @(disp,pc),Rn */
	IF(0x0C051506u); r15 -= 4; W32(r15, PR); UPD(0x0C051508u, 1);  /* 0C051506 sts.l pr,@-Rn */
	r14 = r15;  /* 0C051508 mov Rm,Rn */
	IF(0x0C05150Au); ;  /* 0C05150A nop */
	UPD(0x0C05150Cu, 2);
L_0C05150C: BLKS(0x0C05150Cu);
	r0 = r9;  /* 0C05150C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05150E and #imm,r0 */
	r5 = r8;  /* 0C051510 mov Rm,Rn */
	r4 = r0;  /* 0C051512 mov Rm,Rn */
	r6 = r11;  /* 0C051514 mov Rm,Rn */
	IF(0x0C051516u); { u32 t_ = r12; PR = 0x0C05151Au; IF(0x0C051518u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(t_, 7); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05151Au); }  /* 0C051516 jsr @Rn */
L_0C05151A: BLKS(0x0C05151Au);
	r10 += 0xFFFFFFFFu;  /* 0C05151A add #imm,Rn */
	IF(0x0C05151Cu); T = (s32)r10 >= 0;  /* 0C05151C cmp/pz Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05150Cu, 5); goto L_0C05150C; } goto L_0C051522; }  /* 0C05151E bt/s */
L_0C051522: BLKS(0x0C051522u);
	r15 = r14;  /* 0C051522 mov Rm,Rn */
	IF(0x0C051524u); PR = R32(r15); r15 += 4; UPD(0x0C051526u, 3);  /* 0C051524 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C051528u, 1);  /* 0C051526 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05152Au, 1);  /* 0C051528 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05152Cu, 1);  /* 0C05152A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05152Eu, 1);  /* 0C05152C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C051530u, 1);  /* 0C05152E mov.l @Rm+,Rn */
	IF(0x0C051530u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C051530 rts */
}

/* FUN_0c051540 */
void f_0C051540(sh3_t *c)
{
	LOCALS;
L_0C051540: BLKS(0x0C051540u);
	r0 = (u32)(s32)(s8)r4;  /* 0C051540 exts.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C051542 tst Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051546u, 3);  /* 0C051544 mov.l Rm,@-Rn */
	IF(0x0C051546u); r0 = T;  /* 0C051546 movt Rn */
	r2 = 0xC1608DCu; UPD(0x0C05154Au, 2);  /* 0C051548 mov.l @(disp,pc),Rn */
	IF(0x0C05154Au); r0 <<= 2;  /* 0C05154A shll2 Rn */
	IF(0x0C05154Cu); r4 = R32(r0 + r2); UPD(0x0C05154Eu, 2);  /* 0C05154C mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C05154E mov Rm,Rn */
	r0 = 0xC050AC0u; UPD(0x0C051552u, 2);  /* 0C051550 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C051552 mov Rm,Rn */
	IF(0x0C051554u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C050AC0u: TAIL(f_0C050AC0); default: JUMPD(tv_); } }  /* 0C051554 jmp @Rn */
}

void f_0C051560(sh3_t *c)
{
	LOCALS;
L_0C051560: BLKS(0x0C051560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051562u, 1);  /* 0C051560 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051564u, 1);  /* 0C051562 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051566u, 1);  /* 0C051564 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C051568u, 1);  /* 0C051566 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C051568 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05156Cu, 2);  /* 0C05156A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05156Eu, 1);  /* 0C05156C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C05156E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051572u, 2);  /* 0C051570 mov.l Rm,@-Rn */
	r0 = 0xC053AD0u; UPD(0x0C051574u, 1);  /* 0C051572 mov.l @(disp,pc),Rn */
	IF(0x0C051574u); r15 -= 4; W32(r15, PR); UPD(0x0C051576u, 1);  /* 0C051574 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C051576 add #imm,Rn */
	r13 = 0xC050AC0u; UPD(0x0C05157Au, 2);  /* 0C051578 mov.l @(disp,pc),Rn */
	IF(0x0C05157Au); { u32 t_ = r0; PR = 0x0C05157Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C053AD0, 0x0C053AD0u, 0x0C05157Eu); }  /* 0C05157A jsr @Rn */
L_0C05157E: BLKS(0x0C05157Eu);
	W32(r14, r12); UPD(0x0C051580u, 1);  /* 0C05157E mov.l Rm,@Rn */
	W32(r14 + 0x4u, r12); UPD(0x0C051582u, 1);  /* 0C051580 mov.l Rm,@(disp,Rn) */
L_0C051582: BLKS(0x0C051582u);
	r8 = 0xC04F330u; UPD(0x0C051584u, 1);  /* 0C051582 mov.l @(disp,pc),Rn */
	r11 = 0xC04F930u; UPD(0x0C051586u, 1);  /* 0C051584 mov.l @(disp,pc),Rn */
	IF(0x0C051586u); { u32 t_ = r8; PR = 0x0C05158Au; IF(0x0C051588u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05158Au); }  /* 0C051586 jsr @Rn */
L_0C05158A: BLKS(0x0C05158Au);
	r9 = 0xC050650u; UPD(0x0C05158Cu, 1);  /* 0C05158A mov.l @(disp,pc),Rn */
	IF(0x0C05158Cu); { u32 t_ = r11; PR = 0x0C051590u; IF(0x0C05158Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C051590u); }  /* 0C05158C jsr @Rn */
L_0C051590: BLKS(0x0C051590u);
	r8 = 0xC0505F0u; UPD(0x0C051592u, 1);  /* 0C051590 mov.l @(disp,pc),Rn */
	r11 = 0xC1608E4u; UPD(0x0C051594u, 1);  /* 0C051592 mov.l @(disp,pc),Rn */
	IF(0x0C051594u); { u32 t_ = r9; PR = 0x0C051598u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C051598u); }  /* 0C051594 jsr @Rn */
L_0C051598: BLKS(0x0C051598u);
	IF(0x0C051598u); { u32 t_ = r8; PR = 0x0C05159Cu; IF(0x0C05159Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05159Cu); }  /* 0C051598 jsr @Rn */
L_0C05159C: BLKS(0x0C05159Cu);
	r4 = r11;  /* 0C05159C mov Rm,Rn */
	r5 = 0xCu;  /* 0C05159E mov #imm,Rn */
	IF(0x0C0515A0u); { u32 t_ = r13; PR = 0x0C0515A4u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515A4u); }  /* 0C0515A0 jsr @Rn */
L_0C0515A4: BLKS(0x0C0515A4u);
	r4 = r11;  /* 0C0515A4 mov Rm,Rn */
	r5 = 0xDu;  /* 0C0515A6 mov #imm,Rn */
	IF(0x0C0515A8u); { u32 t_ = r13; PR = 0x0C0515ACu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515ACu); }  /* 0C0515A8 jsr @Rn */
L_0C0515AC: BLKS(0x0C0515ACu);
	r9 = 0xC16092Cu; UPD(0x0C0515AEu, 1);  /* 0C0515AC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0515AE mov Rm,Rn */
	r5 = 0xEu;  /* 0C0515B0 mov #imm,Rn */
	IF(0x0C0515B2u); { u32 t_ = r13; PR = 0x0C0515B6u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515B6u); }  /* 0C0515B2 jsr @Rn */
L_0C0515B6: BLKS(0x0C0515B6u);
	r4 = r11;  /* 0C0515B6 mov Rm,Rn */
	r5 = 0xFu;  /* 0C0515B8 mov #imm,Rn */
	IF(0x0C0515BAu); { u32 t_ = r13; PR = 0x0C0515BEu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515BEu); }  /* 0C0515BA jsr @Rn */
L_0C0515BE: BLKS(0x0C0515BEu);
	r4 = r9;  /* 0C0515BE mov Rm,Rn */
	r5 = 0x10u;  /* 0C0515C0 mov #imm,Rn */
	IF(0x0C0515C2u); { u32 t_ = r13; PR = 0x0C0515C6u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515C6u); }  /* 0C0515C2 jsr @Rn */
L_0C0515C6: BLKS(0x0C0515C6u);
	r4 = r9;  /* 0C0515C6 mov Rm,Rn */
	r5 = 0x11u;  /* 0C0515C8 mov #imm,Rn */
	IF(0x0C0515CAu); { u32 t_ = r13; PR = 0x0C0515CEu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515CEu); }  /* 0C0515CA jsr @Rn */
L_0C0515CE: BLKS(0x0C0515CEu);
	r11 = 0xC160974u; UPD(0x0C0515D0u, 1);  /* 0C0515CE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0515D0 mov Rm,Rn */
	r5 = 0x12u;  /* 0C0515D2 mov #imm,Rn */
	IF(0x0C0515D4u); { u32 t_ = r13; PR = 0x0C0515D8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515D8u); }  /* 0C0515D4 jsr @Rn */
L_0C0515D8: BLKS(0x0C0515D8u);
	r4 = r9;  /* 0C0515D8 mov Rm,Rn */
	r5 = 0x13u;  /* 0C0515DA mov #imm,Rn */
	IF(0x0C0515DCu); { u32 t_ = r13; PR = 0x0C0515E0u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515E0u); }  /* 0C0515DC jsr @Rn */
L_0C0515E0: BLKS(0x0C0515E0u);
	r4 = r11;  /* 0C0515E0 mov Rm,Rn */
	r5 = 0x14u;  /* 0C0515E2 mov #imm,Rn */
	IF(0x0C0515E4u); { u32 t_ = r13; PR = 0x0C0515E8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515E8u); }  /* 0C0515E4 jsr @Rn */
L_0C0515E8: BLKS(0x0C0515E8u);
	r4 = r11;  /* 0C0515E8 mov Rm,Rn */
	r5 = 0x15u;  /* 0C0515EA mov #imm,Rn */
	IF(0x0C0515ECu); { u32 t_ = r13; PR = 0x0C0515F0u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515F0u); }  /* 0C0515EC jsr @Rn */
L_0C0515F0: BLKS(0x0C0515F0u);
	r9 = 0xC1609BCu; UPD(0x0C0515F2u, 1);  /* 0C0515F0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0515F2 mov Rm,Rn */
	r5 = 0x16u;  /* 0C0515F4 mov #imm,Rn */
	IF(0x0C0515F6u); { u32 t_ = r13; PR = 0x0C0515FAu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C0515FAu); }  /* 0C0515F6 jsr @Rn */
L_0C0515FA: BLKS(0x0C0515FAu);
	r4 = r11;  /* 0C0515FA mov Rm,Rn */
	r5 = 0x17u;  /* 0C0515FC mov #imm,Rn */
	IF(0x0C0515FEu); { u32 t_ = r13; PR = 0x0C051602u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C051602u); }  /* 0C0515FE jsr @Rn */
L_0C051602: BLKS(0x0C051602u);
	r4 = r9;  /* 0C051602 mov Rm,Rn */
	r5 = 0x18u;  /* 0C051604 mov #imm,Rn */
	IF(0x0C051606u); { u32 t_ = r13; PR = 0x0C05160Au; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05160Au); }  /* 0C051606 jsr @Rn */
L_0C05160A: BLKS(0x0C05160Au);
	r4 = r9;  /* 0C05160A mov Rm,Rn */
	r5 = 0x19u;  /* 0C05160C mov #imm,Rn */
	IF(0x0C05160Eu); { u32 t_ = r13; PR = 0x0C051612u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C051612u); }  /* 0C05160E jsr @Rn */
L_0C051612: BLKS(0x0C051612u);
	r4 = r9;  /* 0C051612 mov Rm,Rn */
	r5 = 0x1Au;  /* 0C051614 mov #imm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C051618u, 3);  /* 0C051616 mov.l @(disp,pc),Rn */
	IF(0x0C051618u); { u32 t_ = r13; PR = 0x0C05161Cu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05161Cu); }  /* 0C051618 jsr @Rn */
L_0C05161C: BLKS(0x0C05161Cu);
	r4 = r9;  /* 0C05161C mov Rm,Rn */
	r5 = 0x1Bu;  /* 0C05161E mov #imm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C051622u, 3);  /* 0C051620 mov.l @(disp,pc),Rn */
	IF(0x0C051622u); { u32 t_ = r13; PR = 0x0C051626u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C051626u); }  /* 0C051622 jsr @Rn */
L_0C051626: BLKS(0x0C051626u);
	r4 = 0xC160A04u; UPD(0x0C051628u, 1);  /* 0C051626 mov.l @(disp,pc),Rn */
	r5 = 0x23u;  /* 0C051628 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C05162Cu, 2);  /* 0C05162A mov.l @(disp,pc),Rn */
	IF(0x0C05162Cu); { u32 t_ = r11; PR = 0x0C051630u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051630u); }  /* 0C05162C jsr @Rn */
L_0C051630: BLKS(0x0C051630u);
	r4 = 0xC160A10u; UPD(0x0C051632u, 1);  /* 0C051630 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C051632 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C051636u, 2);  /* 0C051634 mov.l @(disp,pc),Rn */
	IF(0x0C051636u); { u32 t_ = r8; PR = 0x0C05163Au; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05163Au); }  /* 0C051636 jsr @Rn */
L_0C05163A: BLKS(0x0C05163Au);
	r3 = 0xC050CD0u; UPD(0x0C05163Cu, 1);  /* 0C05163A mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C05163C mov #imm,Rn */
	r4 = 0xC160A1Cu; UPD(0x0C051640u, 2);  /* 0C05163E mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C051642u, 1);  /* 0C051640 mov.l @(disp,pc),Rn */
	IF(0x0C051642u); { u32 t_ = r3; PR = 0x0C051646u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051646u); }  /* 0C051642 jsr @Rn */
L_0C051646: BLKS(0x0C051646u);
	r2 = 0xC050CD0u; UPD(0x0C051648u, 1);  /* 0C051646 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C051648 mov #imm,Rn */
	r4 = 0xC160A28u; UPD(0x0C05164Cu, 2);  /* 0C05164A mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05164Eu, 1);  /* 0C05164C mov.l @(disp,pc),Rn */
	IF(0x0C05164Eu); { u32 t_ = r2; PR = 0x0C051652u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051652u); }  /* 0C05164E jsr @Rn */
L_0C051652: BLKS(0x0C051652u);
	r9 = 0xC050CD0u; UPD(0x0C051654u, 1);  /* 0C051652 mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C051654 mov #imm,Rn */
	r4 = 0xC160608u; UPD(0x0C051658u, 2);  /* 0C051656 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05165Au, 1);  /* 0C051658 mov.l @(disp,pc),Rn */
	IF(0x0C05165Au); { u32 t_ = r9; PR = 0x0C05165Eu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05165Eu); }  /* 0C05165A jsr @Rn */
L_0C05165E: BLKS(0x0C05165Eu);
	r11 = 0xC050CD0u; UPD(0x0C051660u, 1);  /* 0C05165E mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C051660 mov #imm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C051664u, 2);  /* 0C051662 mov.l @(disp,pc),Rn */
	r4 = 0xC160620u; UPD(0x0C051666u, 1);  /* 0C051664 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C051668u, 1);  /* 0C051666 mov.l @(disp,pc),Rn */
	IF(0x0C051668u); { u32 t_ = r11; PR = 0x0C05166Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05166Cu); }  /* 0C051668 jsr @Rn */
L_0C05166C: BLKS(0x0C05166Cu);
	r7 = 0x80808000u; UPD(0x0C05166Eu, 1);  /* 0C05166C mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C05166E mov #imm,Rn */
	r4 = 0xC160688u; UPD(0x0C051672u, 2);  /* 0C051670 mov.l @(disp,pc),Rn */
	IF(0x0C051672u); { u32 t_ = r8; PR = 0x0C051676u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051676u); }  /* 0C051672 jsr @Rn */
L_0C051676: BLKS(0x0C051676u);
	r5 = 0xC21F898u; UPD(0x0C051678u, 1);  /* 0C051676 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C051678 mov #imm,Rn */
	r9 = 0xC050A80u; UPD(0x0C05167Cu, 2);  /* 0C05167A mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C05167Eu, 1);  /* 0C05167C mov.l @Rm,Rn */
	IF(0x0C05167Eu); { u32 t_ = r9; PR = 0x0C051682u; r5 = 0x23u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051682u); }  /* 0C05167E jsr @Rn */
L_0C051682: BLKS(0x0C051682u);
	r3 = 0xC2175E4u; UPD(0x0C051684u, 1);  /* 0C051682 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C051684 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C051688u, 2);  /* 0C051686 mov.l @Rm,Rn */
	IF(0x0C051688u); { u32 t_ = r9; PR = 0x0C05168Cu; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05168Cu); }  /* 0C051688 jsr @Rn */
L_0C05168C: BLKS(0x0C05168Cu);
	r2 = 0xC21E100u; UPD(0x0C05168Eu, 1);  /* 0C05168C mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C05168E mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C051692u, 2);  /* 0C051690 mov.l @Rm,Rn */
	IF(0x0C051692u); { u32 t_ = r9; PR = 0x0C051696u; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051696u); }  /* 0C051692 jsr @Rn */
L_0C051696: BLKS(0x0C051696u);
	r0 = 0xC26CAD8u; UPD(0x0C051698u, 1);  /* 0C051696 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C051698 mov #imm,Rn */
	r4 = R32(r0); UPD(0x0C05169Cu, 2);  /* 0C05169A mov.l @Rm,Rn */
	IF(0x0C05169Cu); { u32 t_ = r9; PR = 0x0C0516A0u; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0516A0u); }  /* 0C05169C jsr @Rn */
L_0C0516A0: BLKS(0x0C0516A0u);
	r1 = 0xC27DEF4u; UPD(0x0C0516A2u, 1);  /* 0C0516A0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C0516A4u, 1);  /* 0C0516A2 mov.b @Rm,Rn */
	r0 = r2;  /* 0C0516A4 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0516A6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0516A8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0516B6u, 6); goto L_0C0516B6; } goto L_0C0516AE; }  /* 0C0516AA bt/s */
L_0C0516AE: BLKS(0x0C0516AEu);
	r4 = 0xC160A54u; UPD(0x0C0516B0u, 2);  /* 0C0516AE mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0516B0 mov Rm,Rn */
	IF(0x0C0516B2u); r10 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0516B4u, 2);  /* 0C0516B2 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0516B4 mov Rm,Rn */
	UPD(0x0C0516B6u, 1);
L_0C0516B6: BLKS(0x0C0516B6u);
	r0 &= 0x2u;  /* 0C0516B6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0516B8 tst Rm,Rn */
	if (T) { UPD(0x0C0516C2u, 5); goto L_0C0516C2; }  /* 0C0516BA bt */
L_0C0516BC: BLKS(0x0C0516BCu);
	r6 = 0xC160A5Cu; UPD(0x0C0516BEu, 1);  /* 0C0516BC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0516BE mov Rm,Rn */
	IF(0x0C0516C0u); r10 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0516C2u, 2);  /* 0C0516C0 mov.b @(r0,Rm),Rn */
L_0C0516C2: BLKS(0x0C0516C2u);
	r5 = 0xC160A64u; UPD(0x0C0516C4u, 1);  /* 0C0516C2 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0516C4 mov #imm,Rn */
	r2 = 0xC050CD0u; UPD(0x0C0516C8u, 2);  /* 0C0516C6 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0516C8 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C0516CCu, 2);  /* 0C0516CA mov.l @(disp,pc),Rn */
	r4 = 0xC160690u; UPD(0x0C0516CEu, 1);  /* 0C0516CC mov.l @(disp,pc),Rn */
	IF(0x0C0516CEu); { u32 t_ = r2; PR = 0x0C0516D2u; IF(0x0C0516D0u); r5 = (u32)(s32)(s8)R8(r0 + r10); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0516D2u); }  /* 0C0516CE jsr @Rn */
L_0C0516D2: BLKS(0x0C0516D2u);
	r7 = 0xC27DEF4u; UPD(0x0C0516D4u, 1);  /* 0C0516D2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0516D6u, 1);  /* 0C0516D4 mov.b @Rm,Rn */
	r0 &= 0x8u;  /* 0C0516D6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0516D8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0516F4u, 5); goto L_0C0516F4; } goto L_0C0516DE; }  /* 0C0516DA bt/s */
L_0C0516DE: BLKS(0x0C0516DEu);
	r11 = 0xC160A38u; UPD(0x0C0516E0u, 2);  /* 0C0516DE mov.l @(disp,pc),Rn */
	IF(0x0C0516E0u); r0 <<= 2;  /* 0C0516E0 shll2 Rn */
	IF(0x0C0516E2u); r5 = R32(r0 + r11); UPD(0x0C0516E4u, 2);  /* 0C0516E2 mov.l @(r0,Rm),Rn */
	r9 = 0xC160A30u; UPD(0x0C0516E6u, 1);  /* 0C0516E4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0516E6 mov Rm,Rn */
	IF(0x0C0516E8u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0516EAu, 2);  /* 0C0516E8 mov.b @(r0,Rm),Rn */
	r2 = R32(r5); UPD(0x0C0516ECu, 1);  /* 0C0516EA mov.l @Rm,Rn */
	T = r2 == r3;  /* 0C0516EC cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0516F4u, 4); goto L_0C0516F4; } goto L_0C0516F2; }  /* 0C0516EE bt/s */
L_0C0516F2: BLKS(0x0C0516F2u);
	W32(r5, r2); UPD(0x0C0516F4u, 2);  /* 0C0516F2 mov.l Rm,@Rn */
L_0C0516F4: BLKS(0x0C0516F4u);
	r8 = 0xC27DDF4u; UPD(0x0C0516F6u, 1);  /* 0C0516F4 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C0516F8u, 1);  /* 0C0516F6 mov.w @(disp,pc),Rn */
	IF(0x0C0516F8u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0516FAu, 1);  /* 0C0516F8 mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C0516FA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0516FC tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051718u, 5); goto L_0C051718; } goto L_0C051702; }  /* 0C0516FE bt/s */
L_0C051702: BLKS(0x0C051702u);
	r7 = 0xC160A38u; UPD(0x0C051704u, 2);  /* 0C051702 mov.l @(disp,pc),Rn */
	IF(0x0C051704u); r0 <<= 2;  /* 0C051704 shll2 Rn */
	IF(0x0C051706u); r5 = R32(r0 + r7); UPD(0x0C051708u, 2);  /* 0C051706 mov.l @(r0,Rm),Rn */
	r6 = 0xC160A34u; UPD(0x0C05170Au, 1);  /* 0C051708 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C05170A mov Rm,Rn */
	IF(0x0C05170Cu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C05170Eu, 2);  /* 0C05170C mov.b @(r0,Rm),Rn */
	r2 = R32(r5); UPD(0x0C051710u, 1);  /* 0C05170E mov.l @Rm,Rn */
	T = r2 == r4;  /* 0C051710 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C051718u, 4); goto L_0C051718; } goto L_0C051716; }  /* 0C051712 bt/s */
L_0C051716: BLKS(0x0C051716u);
	W32(r5, r2); UPD(0x0C051718u, 2);  /* 0C051716 mov.l Rm,@Rn */
L_0C051718: BLKS(0x0C051718u);
	r2 = 0xC21E100u; UPD(0x0C05171Au, 1);  /* 0C051718 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)r10;  /* 0C05171A exts.b Rm,Rn */
	r3 = R32(r2); UPD(0x0C05171Eu, 2);  /* 0C05171C mov.l @Rm,Rn */
	r5 = 0xC220C38u; UPD(0x0C051720u, 1);  /* 0C05171E mov.l @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C051722u, 1);  /* 0C051720 mov.l Rm,@Rn */
	r5 = r12;  /* 0C051722 mov Rm,Rn */
	r12 = 0xC054A40u; UPD(0x0C051726u, 2);  /* 0C051724 mov.l @(disp,pc),Rn */
	r8 = 0xC054F50u; UPD(0x0C051728u, 1);  /* 0C051726 mov.l @(disp,pc),Rn */
	IF(0x0C051728u); { u32 t_ = r12; PR = 0x0C05172Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054A40, 0x0C054A40u, 0x0C05172Cu); }  /* 0C051728 jsr @Rn */
L_0C05172C: BLKS(0x0C05172Cu);
	r9 = 0xC055400u; UPD(0x0C05172Eu, 1);  /* 0C05172C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C05172E mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C051732u, 2);  /* 0C051730 mov.l @Rm,Rn */
	IF(0x0C051732u); { u32 t_ = r8; PR = 0x0C051736u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054F50, 0x0C054F50u, 0x0C051736u); }  /* 0C051732 jsr @Rn */
L_0C051736: BLKS(0x0C051736u);
	r4 = r11;  /* 0C051736 mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C05173Au, 2);  /* 0C051738 mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C05173A mov #imm,Rn */
	IF(0x0C05173Cu); { u32 t_ = r9; PR = 0x0C051740u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C055400, 0x0C055400u, 0x0C051740u); }  /* 0C05173C jsr @Rn */
L_0C051740: BLKS(0x0C051740u);
	W32(r14 + 0x4u, r0); UPD(0x0C051742u, 1);  /* 0C051740 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C051742 mov #imm,Rn */
	r0 = 0xC392AF4u; UPD(0x0C051746u, 2);  /* 0C051744 mov.l @(disp,pc),Rn */
	r5 = R32(r0); UPD(0x0C051748u, 1);  /* 0C051746 mov.l @Rm,Rn */
L_0C051748: BLKS(0x0C051748u);
	r4 = r8;  /* 0C051748 mov Rm,Rn */
	r4 += 0xFFFFFFF2u;  /* 0C05174A add #imm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C05174C add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C051750u, 4);  /* 0C05174E mov.l Rm,@(disp,Rn) */
	r9 = r8 & 0xFF;  /* 0C051750 extu.b Rm,Rn */
	r6 = 0x0u;  /* 0C051752 mov #imm,Rn */
	r8 += 0x2u;  /* 0C051754 add #imm,Rn */
	r4 = 0x0u;  /* 0C051756 mov #imm,Rn */
	UPD(0x0C051758u, 4);
L_0C051758: BLKS(0x0C051758u);
	r0 = 0xBu;  /* 0C051758 mov #imm,Rn */
	IF(0x0C05175Au); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05175Cu, 2);  /* 0C05175A mov.b @(r0,Rm),Rn */
	r2 = 0x3u;  /* 0C05175C mov #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C05175E extu.b Rm,Rn */
	T = r2 >= r7;  /* 0C051760 cmp/hs Rm,Rn */
	r6 += 0xFFFFFFFEu;  /* 0C051762 add #imm,Rn */
	IF(0x0C051764u); r7 = T;  /* 0C051764 movt Rn */
	r0 = r6 & 0xFF;  /* 0C051766 extu.b Rm,Rn */
	r3 = 0xAu;  /* 0C051768 mov #imm,Rn */
	T = r3 >= r0;  /* 0C05176A cmp/hs Rm,Rn */
	IF(0x0C05176Cu); r3 = T;  /* 0C05176C movt Rn */
	r7 &= r3;  /* 0C05176E and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C051770 tst Rm,Rn */
	{ u32 c_ = !T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0517E0u, 14); goto L_0C0517E0; } goto L_0C051776; }  /* 0C051772 bf/s */
L_0C051776: BLKS(0x0C051776u);
	r0 = 0x1u;  /* 0C051776 mov #imm,Rn */
	T = r0 >= r9;  /* 0C051778 cmp/hs Rm,Rn */
	IF(0x0C05177Au); r7 = T;  /* 0C05177A movt Rn */
	r0 = r10;  /* 0C05177C mov Rm,Rn */
	T = r0 == 0x4u;  /* 0C05177E cmp/eq #imm,r0 */
	r7 &= r3;  /* 0C051780 and Rm,Rn */
	IF(0x0C051782u); r2 = T;  /* 0C051782 movt Rn */
	T = (r12 & r12) == 0;  /* 0C051784 tst Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C051786 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C051788 negc Rm,Rn */
	r1 &= r2;  /* 0C05178A and Rm,Rn */
	T = (r7 & r1) == 0;  /* 0C05178C tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x5u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0517E0u, 16); goto L_0C0517E0; } goto L_0C051792; }  /* 0C05178E bf/s */
L_0C051792: BLKS(0x0C051792u);
	r1 = R32(r14); UPD(0x0C051794u, 2);  /* 0C051792 mov.l @Rm,Rn */
	IF(0x0C051794u); r2 = T;  /* 0C051794 movt Rn */
	T = (r1 & r1) == 0;  /* 0C051796 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C051798 negc Rm,Rn */
	r1 &= r2;  /* 0C05179A and Rm,Rn */
	T = (r7 & r1) == 0;  /* 0C05179C tst Rm,Rn */
	{ u32 c_ = !T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0517E2u, 8); goto L_0C0517E2; } goto L_0C0517A2; }  /* 0C05179E bf/s */
L_0C0517A2: BLKS(0x0C0517A2u);
	T = r0 == 0x6u;  /* 0C0517A2 cmp/eq #imm,r0 */
	IF(0x0C0517A4u); r3 = T;  /* 0C0517A4 movt Rn */
	T = (r7 & r3) == 0;  /* 0C0517A6 tst Rm,Rn */
	{ u32 c_ = !T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0517E2u, 7); goto L_0C0517E2; } goto L_0C0517AC; }  /* 0C0517A8 bf/s */
L_0C0517AC: BLKS(0x0C0517ACu);
	r2 = 0x10000000u; UPD(0x0C0517AEu, 2);  /* 0C0517AC mov.l @(disp,pc),Rn */
	r7 = 0xC283644u; UPD(0x0C0517B0u, 1);  /* 0C0517AE mov.l @(disp,pc),Rn */
	W32(r5, r2); UPD(0x0C0517B2u, 1);  /* 0C0517B0 mov.l Rm,@Rn */
	r3 = 0x400000u; UPD(0x0C0517B4u, 1);  /* 0C0517B2 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0517B4 add #imm,Rn */
	r0 = R32(r7); UPD(0x0C0517B8u, 2);  /* 0C0517B6 mov.l @Rm,Rn */
	r0 += r3;  /* 0C0517B8 add Rm,Rn */
	W32(r5, r0); UPD(0x0C0517BCu, 2);  /* 0C0517BA mov.l Rm,@Rn */
	r2 = 0xC21CCF4u; UPD(0x0C0517BEu, 1);  /* 0C0517BC mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0517BE add #imm,Rn */
	r7 = 0xC283CA8u; UPD(0x0C0517C2u, 2);  /* 0C0517C0 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0517C4u, 1);  /* 0C0517C2 mov.l @Rm,Rn */
	r3 = R32(r7); UPD(0x0C0517C6u, 1);  /* 0C0517C4 mov.l @Rm,Rn */
	r0 += r11;  /* 0C0517C6 add Rm,Rn */
	IF(0x0C0517C8u); r0 <<= 16;  /* 0C0517C8 shll16 Rn */
	r3 += r4;  /* 0C0517CA add Rm,Rn */
	r0 |= r3;  /* 0C0517CC or Rm,Rn */
	W32(r5, r0); UPD(0x0C0517D0u, 5);  /* 0C0517CE mov.l Rm,@Rn */
	r2 = 0xF000Fu; UPD(0x0C0517D2u, 1);  /* 0C0517D0 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0517D2 add #imm,Rn */
	W32(r5, r2); UPD(0x0C0517D6u, 2);  /* 0C0517D4 mov.l Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C0517D8u, 1);  /* 0C0517D6 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0517D8 add #imm,Rn */
	W32(r5, r7); UPD(0x0C0517DCu, 2);  /* 0C0517DA mov.l Rm,@Rn */
	r5 += 0x4u;  /* 0C0517DC add #imm,Rn */
	IF(0x0C0517DEu); ;  /* 0C0517DE nop */
	UPD(0x0C0517E0u, 2);
L_0C0517E0: BLKS(0x0C0517E0u);
	r3 = r6;  /* 0C0517E0 mov Rm,Rn */
	UPD(0x0C0517E2u, 1);
L_0C0517E2: BLKS(0x0C0517E2u);
	r3 += 0x1u;  /* 0C0517E2 add #imm,Rn */
	r6 = (u32)(s32)(s8)r3;  /* 0C0517E4 exts.b Rm,Rn */
	r0 = 0xEu;  /* 0C0517E6 mov #imm,Rn */
	T = (s32)r6 > (s32)r0;  /* 0C0517E8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C051758u, 7); goto L_0C051758; } goto L_0C0517EE; }  /* 0C0517EA bf/s */
L_0C0517EE: BLKS(0x0C0517EEu);
	r9 = r8;  /* 0C0517EE mov Rm,Rn */
	r9 += 0x1u;  /* 0C0517F0 add #imm,Rn */
	r8 = (u32)(s32)(s8)r9;  /* 0C0517F2 exts.b Rm,Rn */
	r6 = 0x13u;  /* 0C0517F4 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0517F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C051748u, 9); goto L_0C051748; } goto L_0C0517FC; }  /* 0C0517F8 bf/s */
L_0C0517FC: BLKS(0x0C0517FCu);
	r4 = 0xC392AF4u; UPD(0x0C0517FEu, 2);  /* 0C0517FC mov.l @(disp,pc),Rn */
	r11 = 0xC04F770u; UPD(0x0C051800u, 1);  /* 0C0517FE mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C051802u, 1);  /* 0C051800 mov.l Rm,@Rn */
	r9 = 0xC050840u; UPD(0x0C051804u, 1);  /* 0C051802 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C051804 mov #imm,Rn */
	IF(0x0C051806u); { u32 t_ = r11; PR = 0x0C05180Au; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C05180Au); }  /* 0C051806 jsr @Rn */
L_0C05180A: BLKS(0x0C05180Au);
	IF(0x0C05180Au); { u32 t_ = r9; PR = 0x0C05180Eu; IF(0x0C05180Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05180Eu); }  /* 0C05180A jsr @Rn */
L_0C05180E: BLKS(0x0C05180Eu);
	r0 = r10;  /* 0C05180E mov Rm,Rn */
	T = r0 == 0x6u;  /* 0C051810 cmp/eq #imm,r0 */
	r5 = 0xFFFFFFFFu;  /* 0C051812 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C051816u, 4);  /* 0C051814 mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C051816 negc Rm,Rn */
	T = r0 == 0x3u;  /* 0C051818 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C05181A negc Rm,Rn */
	r11 |= r8;  /* 0C05181C or Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C05181E tst Rm,Rn */
	if (T) { UPD(0x0C051826u, 8); goto L_0C051826; }  /* 0C051820 bt */
L_0C051822: BLKS(0x0C051822u);
	{ IF(0x0C051824u); ; /* slot nop */ UPD(0x0C051582u, 3); goto L_0C051582; }  /* 0C051822 bra */
L_0C051826: BLKS(0x0C051826u);
	r14 += 0xCu;  /* 0C051826 add #imm,Rn */
	r15 = r14;  /* 0C051828 mov Rm,Rn */
	IF(0x0C05182Au); PR = R32(r15); r15 += 4; UPD(0x0C05182Cu, 3);  /* 0C05182A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05182Eu, 1);  /* 0C05182C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C051830u, 1);  /* 0C05182E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C051832u, 1);  /* 0C051830 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C051834u, 1);  /* 0C051832 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C051836u, 1);  /* 0C051834 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C051838u, 1);  /* 0C051836 mov.l @Rm+,Rn */
	IF(0x0C051838u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C051838 rts */
}

void f_0C051900(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C051970);
L_0C051900: BLKS(0x0C051900u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051902u, 1);  /* 0C051900 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C051902 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051906u, 2);  /* 0C051904 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051908u, 1);  /* 0C051906 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C051908 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05190Cu, 2);  /* 0C05190A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C05190C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C051910u, 2);  /* 0C05190E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C051912u, 1);  /* 0C051910 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051914u, 1);  /* 0C051912 mov.l Rm,@-Rn */
	r0 = 0xC283CA4u; UPD(0x0C051916u, 1);  /* 0C051914 mov.l @(disp,pc),Rn */
	IF(0x0C051916u); r15 -= 4; W32(r15, PR); UPD(0x0C051918u, 1);  /* 0C051916 sts.l pr,@-Rn */
	W32(r0, r3); UPD(0x0C05191Au, 1);  /* 0C051918 mov.l Rm,@Rn */
	r14 = r15;  /* 0C05191A mov Rm,Rn */
	r0 = 0xC3929E0u; UPD(0x0C05191Eu, 2);  /* 0C05191C mov.l @(disp,pc),Rn */
	r8 = 0xC283794u; UPD(0x0C051920u, 1);  /* 0C05191E mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C051922u, 1);  /* 0C051920 mov.l Rm,@Rn */
	IF(0x0C051922u); ;  /* 0C051922 nop */
	UPD(0x0C051924u, 1);
L_0C051924: BLKS(0x0C051924u);
	r0 = 0xC0000000u; UPD(0x0C051926u, 1);  /* 0C051924 mov.l @(disp,pc),Rn */
	r11 = r10;  /* 0C051926 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C05192Au, 2);  /* 0C051928 mov.l Rm,@Rn */
	IF(0x0C05192Au); r11 <<= 2;  /* 0C05192A shll2 Rn */
	r5 = 0xC160A7Cu; UPD(0x0C05192Eu, 2);  /* 0C05192C mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C05192E mov Rm,Rn */
	IF(0x0C051930u); r4 = R32(r0 + r5); UPD(0x0C051932u, 2);  /* 0C051930 mov.l @(r0,Rm),Rn */
	r2 = 0xC160A6Cu; UPD(0x0C051934u, 1);  /* 0C051932 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C051936u, 1);  /* 0C051934 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C051938u, 1);  /* 0C051936 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)r10;  /* 0C051938 exts.w Rm,Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C05193Cu, 2);  /* 0C05193A mov.l Rm,@(disp,Rn) */
	r10 += 0x1u;  /* 0C05193C add #imm,Rn */
	IF(0x0C05193Eu); r3 = R32(r0 + r2); UPD(0x0C051940u, 2);  /* 0C05193E mov.l @(r0,Rm),Rn */
	r12 = 0x808080u; UPD(0x0C051942u, 1);  /* 0C051940 mov.l @(disp,pc),Rn */
	r0 = 0x27Cu; UPD(0x0C051944u, 1);  /* 0C051942 mov.w @(disp,pc),Rn */
	r13 = 0x980000u; UPD(0x0C051946u, 1);  /* 0C051944 mov.l @(disp,pc),Rn */
	IF(0x0C051946u); W32(r0 + r8, r12); UPD(0x0C051948u, 1);  /* 0C051946 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x10u, r3); UPD(0x0C05194Au, 1);  /* 0C051948 mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C05194A mov Rm,Rn */
	W32(r8 + 0x14u, r13); UPD(0x0C05194Eu, 2);  /* 0C05194C mov.l Rm,@(disp,Rn) */
	r7 = 0xC160A74u; UPD(0x0C051950u, 1);  /* 0C05194E mov.l @(disp,pc),Rn */
	IF(0x0C051950u); r6 = R32(r0 + r7); UPD(0x0C051952u, 1);  /* 0C051950 mov.l @(r0,Rm),Rn */
	r0 = 0x224u; UPD(0x0C051954u, 1);  /* 0C051952 mov.w @(disp,pc),Rn */
	r5 = 0xC052B50u; UPD(0x0C051956u, 1);  /* 0C051954 mov.l @(disp,pc),Rn */
	IF(0x0C051956u); W32(r0 + r8, r6); UPD(0x0C051958u, 1);  /* 0C051956 mov.l Rm,@(r0,Rn) */
	r0 += 0x44u;  /* 0C051958 add #imm,Rn */
	IF(0x0C05195Au); { u32 t_ = r5; PR = 0x0C05195Eu; IF(0x0C05195Cu); W8(r0 + r8, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C05195Eu); }  /* 0C05195A jsr @Rn */
L_0C05195E: BLKS(0x0C05195Eu);
	r4 = 0x280u; UPD(0x0C051960u, 1);  /* 0C05195E mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C051960 mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C051962 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C051924u, 5); goto L_0C051924; } goto L_0C051968; }  /* 0C051964 bf/s */
L_0C051968: BLKS(0x0C051968u);
	r9 = 0xC2862A2u; UPD(0x0C05196Au, 2);  /* 0C051968 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C05196Cu, 1);  /* 0C05196A mov.b @Rm,Rn */
	IF(0x0C05196Cu); T = (s32)r8 >= 0;  /* 0C05196C cmp/pz Rn */
	IF(0x0C05196Eu); ;  /* 0C05196E nop */
	UPD(0x0C051970u, 2);
L_0C051970: BLKS(0x0C051970u);
	SPIN_SAVE(0C051970);
	if (!T) { SPIN_FFD(0C051970, 3); UPD(0x0C051970u, 3); goto L_0C051970; }  /* 0C051970 bf */
L_0C051972: BLKS(0x0C051972u);
	r12 = 0xC393034u; UPD(0x0C051974u, 1);  /* 0C051972 mov.l @(disp,pc),Rn */
	r13 = 0xC050CD0u; UPD(0x0C051976u, 1);  /* 0C051974 mov.l @(disp,pc),Rn */
	IF(0x0C051976u); ;  /* 0C051976 nop */
	UPD(0x0C051978u, 1);
L_0C051978: BLKS(0x0C051978u);
	r9 = 0xC04F330u; UPD(0x0C05197Au, 1);  /* 0C051978 mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C05197Cu, 1);  /* 0C05197A mov.l @(disp,pc),Rn */
	IF(0x0C05197Cu); { u32 t_ = r9; PR = 0x0C051980u; IF(0x0C05197Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C051980u); }  /* 0C05197C jsr @Rn */
L_0C051980: BLKS(0x0C051980u);
	r11 = 0xC050650u; UPD(0x0C051982u, 1);  /* 0C051980 mov.l @(disp,pc),Rn */
	IF(0x0C051982u); { u32 t_ = r8; PR = 0x0C051986u; IF(0x0C051984u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C051986u); }  /* 0C051982 jsr @Rn */
L_0C051986: BLKS(0x0C051986u);
	r10 = 0xC0505F0u; UPD(0x0C051988u, 1);  /* 0C051986 mov.l @(disp,pc),Rn */
	IF(0x0C051988u); { u32 t_ = r11; PR = 0x0C05198Cu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C05198Cu); }  /* 0C051988 jsr @Rn */
L_0C05198C: BLKS(0x0C05198Cu);
	IF(0x0C05198Cu); { u32 t_ = r10; PR = 0x0C051990u; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C051990u); }  /* 0C05198C jsr @Rn */
L_0C051990: BLKS(0x0C051990u);
	r4 = 0xC160510u; UPD(0x0C051992u, 1);  /* 0C051990 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C051992 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C051996u, 2);  /* 0C051994 mov.l @(disp,pc),Rn */
	IF(0x0C051996u); { u32 t_ = r13; PR = 0x0C05199Au; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05199Au); }  /* 0C051996 jsr @Rn */
L_0C05199A: BLKS(0x0C05199Au);
	r4 = 0xC1605D4u; UPD(0x0C05199Cu, 1);  /* 0C05199A mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C05199C mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0519A0u, 2);  /* 0C05199E mov.l @(disp,pc),Rn */
	IF(0x0C0519A0u); { u32 t_ = r13; PR = 0x0C0519A4u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0519A4u); }  /* 0C0519A0 jsr @Rn */
L_0C0519A4: BLKS(0x0C0519A4u);
	r4 = 0xC1605F0u; UPD(0x0C0519A6u, 1);  /* 0C0519A4 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0519A6 mov #imm,Rn */
	r6 = 0x5u;  /* 0C0519A8 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0519ACu, 3);  /* 0C0519AA mov.l @(disp,pc),Rn */
	IF(0x0C0519ACu); { u32 t_ = r13; PR = 0x0C0519B0u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0519B0u); }  /* 0C0519AC jsr @Rn */
L_0C0519B0: BLKS(0x0C0519B0u);
	r9 = 0xC283794u; UPD(0x0C0519B2u, 1);  /* 0C0519B0 mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C0519B2 add Rm,Rn */
	r1 = R32(r9); UPD(0x0C0519B6u, 2);  /* 0C0519B4 mov.l @Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0519B8u, 1);  /* 0C0519B6 mov.l @(disp,pc),Rn */
	T = (r1 & r6) == 0;  /* 0C0519B8 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0519C2u, 4); goto L_0C0519C2; } goto L_0C0519BE; }  /* 0C0519BA bt/s */
L_0C0519BE: BLKS(0x0C0519BEu);
	{ W8(r12, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C051B00u, 4); goto L_0C051B00; }  /* 0C0519BE bra */
L_0C0519C2: BLKS(0x0C0519C2u);
	r4 = 0x280u; UPD(0x0C0519C4u, 1);  /* 0C0519C2 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0519C4 add #imm,Rn */
	r9 = 0x1u;  /* 0C0519C6 mov #imm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C0519C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0519B0u, 6); goto L_0C0519B0; } goto L_0C0519CE; }  /* 0C0519CA bf/s */
L_0C0519CE: BLKS(0x0C0519CEu);
	r7 = 0xC0522D0u; UPD(0x0C0519D0u, 2);  /* 0C0519CE mov.l @(disp,pc),Rn */
	r8 = 0xC286068u; UPD(0x0C0519D2u, 1);  /* 0C0519D0 mov.l @(disp,pc),Rn */
	IF(0x0C0519D2u); { u32 t_ = r7; PR = 0x0C0519D6u; IF(0x0C0519D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0522D0, 0x0C0522D0u, 0x0C0519D6u); }  /* 0C0519D2 jsr @Rn */
L_0C0519D6: BLKS(0x0C0519D6u);
	r2 = 0xC051DD0u; UPD(0x0C0519D8u, 1);  /* 0C0519D6 mov.l @(disp,pc),Rn */
	IF(0x0C0519D8u); { u32 t_ = r2; PR = 0x0C0519DCu; IF(0x0C0519DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C051DD0, 0x0C051DD0u, 0x0C0519DCu); }  /* 0C0519D8 jsr @Rn */
L_0C0519DC: BLKS(0x0C0519DCu);
	r0 = 0xC051BB0u; UPD(0x0C0519DEu, 1);  /* 0C0519DC mov.l @(disp,pc),Rn */
	IF(0x0C0519DEu); { u32 t_ = r0; PR = 0x0C0519E2u; IF(0x0C0519E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C051BB0, 0x0C051BB0u, 0x0C0519E2u); }  /* 0C0519DE jsr @Rn */
L_0C0519E2: BLKS(0x0C0519E2u);
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0519E4u, 1);  /* 0C0519E2 mov.w @Rm,Rn */
	r4 = 0xC21CA2Cu; UPD(0x0C0519E6u, 1);  /* 0C0519E4 mov.l @(disp,pc),Rn */
	r10 = r11 & 0xFFFF;  /* 0C0519E6 extu.w Rm,Rn */
	r0 = 0x400u; UPD(0x0C0519EAu, 2);  /* 0C0519E8 mov.w @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0519EA mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C0519EEu, 2);  /* 0C0519EC mov.w @Rm,Rn */
	T = r10 == r0;  /* 0C0519EE cmp/eq Rm,Rn */
	r5 = 0xC2852C8u; UPD(0x0C0519F2u, 2);  /* 0C0519F0 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C0519F2 negc Rm,Rn */
	r3 = r9 & 0xFFFF;  /* 0C0519F4 extu.w Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C0519F8u, 3);  /* 0C0519F6 mov.w @Rm,Rn */
	T = r3 == r0;  /* 0C0519F8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0519FA negc Rm,Rn */
	r2 = r7 & 0xFFFF;  /* 0C0519FC extu.w Rm,Rn */
	T = r2 == r0;  /* 0C0519FE cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C051A00 negc Rm,Rn */
	r10 |= r6;  /* 0C051A02 or Rm,Rn */
	r10 |= r11;  /* 0C051A04 or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C051A06 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C051A60u, 11); goto L_0C051A60; } UPD(0x0C051A0Cu, 1); goto L_0C051A0C; }  /* 0C051A08 bf/s */
L_0C051A0C: BLKS(0x0C051A0Cu);
	r8 = 0xC2862A2u; UPD(0x0C051A0Eu, 1);  /* 0C051A0C mov.l @(disp,pc),Rn */
	r0 = 0x80u; UPD(0x0C051A10u, 1);  /* 0C051A0E mov.w @(disp,pc),Rn */
	IF(0x0C051A10u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C051A12u, 1);  /* 0C051A10 mov.b @(r0,Rm),Rn */
	r0 &= 0x40u;  /* 0C051A12 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C051A14 tst Rm,Rn */
	if (T) { UPD(0x0C051A20u, 5); goto L_0C051A20; }  /* 0C051A16 bt */
L_0C051A18: BLKS(0x0C051A18u);
	r5 = 0xC160A90u; UPD(0x0C051A1Au, 1);  /* 0C051A18 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C051A1Cu, 1);  /* 0C051A1A mov.b @Rm,Rn */
	r6 += 0xFFFFFF80u;  /* 0C051A1C add #imm,Rn */
	W8(r5, r6); UPD(0x0C051A20u, 2);  /* 0C051A1E mov.b Rm,@Rn */
L_0C051A20: BLKS(0x0C051A20u);
	r4 = 0xC160A90u; UPD(0x0C051A22u, 1);  /* 0C051A20 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C051A24u, 1);  /* 0C051A22 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C051A24 tst Rm,Rn */
	if (!T) { UPD(0x0C051A50u, 4); goto L_0C051A50; }  /* 0C051A26 bf */
L_0C051A28: BLKS(0x0C051A28u);
	r10 = 0xC04F770u; UPD(0x0C051A2Au, 1);  /* 0C051A28 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C051A2A mov #imm,Rn */
	r9 = 0xC050840u; UPD(0x0C051A2Eu, 2);  /* 0C051A2C mov.l @(disp,pc),Rn */
	IF(0x0C051A2Eu); { u32 t_ = r10; PR = 0x0C051A32u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C051A32u); }  /* 0C051A2E jsr @Rn */
L_0C051A32: BLKS(0x0C051A32u);
	IF(0x0C051A32u); { u32 t_ = r9; PR = 0x0C051A36u; IF(0x0C051A34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C051A36u); }  /* 0C051A32 jsr @Rn */
L_0C051A36: BLKS(0x0C051A36u);
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C051A38u, 1);  /* 0C051A36 mov.b @Rm,Rn */
	IF(0x0C051A38u); T = (s32)r11 >= 0;  /* 0C051A38 cmp/pz Rn */
	if (T) { UPD(0x0C051978u, 4); goto L_0C051978; }  /* 0C051A3A bt */
L_0C051A3C: BLKS(0x0C051A3Cu);
	r15 = r14;  /* 0C051A3C mov Rm,Rn */
	IF(0x0C051A3Eu); PR = R32(r15); r15 += 4; UPD(0x0C051A40u, 2);  /* 0C051A3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C051A42u, 1);  /* 0C051A40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C051A44u, 1);  /* 0C051A42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C051A46u, 1);  /* 0C051A44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C051A48u, 1);  /* 0C051A46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C051A4Au, 1);  /* 0C051A48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C051A4Cu, 1);  /* 0C051A4A mov.l @Rm+,Rn */
	IF(0x0C051A4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C051A4C rts */
L_0C051A50: BLKS(0x0C051A50u);
	r10 = 0xC05F810u; UPD(0x0C051A52u, 1);  /* 0C051A50 mov.l @(disp,pc),Rn */
	IF(0x0C051A52u); { u32 t_ = r10; PR = 0x0C051A56u; IF(0x0C051A54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F810, 0x0C05F810u, 0x0C051A56u); }  /* 0C051A52 jsr @Rn */
L_0C051A56: BLKS(0x0C051A56u);
	{ IF(0x0C051A58u); ; /* slot nop */ UPD(0x0C051A28u, 3); goto L_0C051A28; }  /* 0C051A56 bra */
L_0C051A60: BLKS(0x0C051A60u);
	r9 = 0xC050CD0u; UPD(0x0C051A62u, 1);  /* 0C051A60 mov.l @(disp,pc),Rn */
	r4 = 0xC160A84u; UPD(0x0C051A64u, 1);  /* 0C051A62 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C051A66u, 1);  /* 0C051A64 mov.l @(disp,pc),Rn */
	IF(0x0C051A66u); { u32 t_ = r9; PR = 0x0C051A6Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051A6Au); }  /* 0C051A66 jsr @Rn */
L_0C051A6A: BLKS(0x0C051A6Au);
	{ IF(0x0C051A6Cu); ; /* slot nop */ UPD(0x0C051A0Cu, 3); goto L_0C051A0C; }  /* 0C051A6A bra */
L_0C051B00: BLKS(0x0C051B00u);
	r6 = 0x3u;  /* 0C051B00 mov #imm,Rn */
	r0 = 0x224u; UPD(0x0C051B04u, 2);  /* 0C051B02 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C051B04 mov #imm,Rn */
	IF(0x0C051B06u); r5 = R32(r0 + r9); UPD(0x0C051B08u, 2);  /* 0C051B06 mov.l @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C051B08 mov #imm,Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C051B0Cu, 2);  /* 0C051B0A mov.l @(disp,Rm),Rn */
	IF(0x0C051B0Cu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C051B0C shld Rm,Rn */
	r0 += r5;  /* 0C051B0E add Rm,Rn */
	r7 = R32(r0 + 0x4u); UPD(0x0C051B12u, 3);  /* 0C051B10 mov.l @(disp,Rm),Rn */
	r2 = 0xC393044u; UPD(0x0C051B14u, 1);  /* 0C051B12 mov.l @(disp,pc),Rn */
	W32(r2, r7); UPD(0x0C051B16u, 1);  /* 0C051B14 mov.l Rm,@Rn */
	r8 = R32(r0); UPD(0x0C051B18u, 1);  /* 0C051B16 mov.l @Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C051B1Au, 1);  /* 0C051B18 mov.l @(disp,Rm),Rn */
	IF(0x0C051B1Au); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C051B1A shld Rm,Rn */
	IF(0x0C051B1Cu); r6 = R32(r0 + r8); UPD(0x0C051B1Eu, 2);  /* 0C051B1C mov.l @(r0,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C051B20u, 1);  /* 0C051B1E mov.l @(disp,Rm),Rn */
	IF(0x0C051B20u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C051B20 shld Rm,Rn */
	r8 = 0x228u; UPD(0x0C051B24u, 2);  /* 0C051B22 mov.w @(disp,pc),Rn */
	IF(0x0C051B24u); r5 = R32(r0 + r6); UPD(0x0C051B26u, 1);  /* 0C051B24 mov.l @(r0,Rm),Rn */
	r8 += r9;  /* 0C051B26 add Rm,Rn */
	W32(r8, r5); UPD(0x0C051B2Au, 2);  /* 0C051B28 mov.l Rm,@Rn */
	r6 = 0xCu;  /* 0C051B2A mov #imm,Rn */
	r7 = 0xC2175E8u; UPD(0x0C051B2Eu, 2);  /* 0C051B2C mov.l @(disp,pc),Rn */
	r2 = 0xC063B90u; UPD(0x0C051B30u, 1);  /* 0C051B2E mov.l @(disp,pc),Rn */
	W32(r7, r5); UPD(0x0C051B32u, 1);  /* 0C051B30 mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C051B32 mov #imm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C051B36u, 2);  /* 0C051B34 mov.l @(disp,Rm),Rn */
	IF(0x0C051B36u); { u32 t_ = r2; PR = 0x0C051B3Au; r5 = R32(r9 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C051B3Au); }  /* 0C051B36 jsr @Rn */
L_0C051B3A: BLKS(0x0C051B3Au);
	r3 = 0xC063B90u; UPD(0x0C051B3Cu, 1);  /* 0C051B3A mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C051B3C mov #imm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C051B40u, 2);  /* 0C051B3E mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C051B40 mov #imm,Rn */
	IF(0x0C051B42u); { u32 t_ = r3; PR = 0x0C051B46u; r5 = R32(r9 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C051B46u); }  /* 0C051B42 jsr @Rn */
L_0C051B46: BLKS(0x0C051B46u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C051B48u, 1);  /* 0C051B46 mov.b @Rm,Rn */
	r2 = 0xFFFFFFFCu;  /* 0C051B48 mov #imm,Rn */
	r6 = 0x258u; UPD(0x0C051B4Cu, 2);  /* 0C051B4A mov.w @(disp,pc),Rn */
	r4 = r1;  /* 0C051B4C mov Rm,Rn */
	IF(0x0C051B4Eu); ARG0(0x442Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C051B4E shad Rm,Rn */
	r6 += r9;  /* 0C051B50 add Rm,Rn */
	r6 += 0x1u;  /* 0C051B52 add #imm,Rn */
	W8(r6, r4); UPD(0x0C051B56u, 5);  /* 0C051B54 mov.b Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C051B56 add #imm,Rn */
	r6 += 0x1u;  /* 0C051B58 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C051B5Cu, 3);  /* 0C051B5A mov.l @Rm,Rn */
	r3 = 0x0u;  /* 0C051B5C mov #imm,Rn */
	W8(r6, r1); UPD(0x0C051B60u, 2);  /* 0C051B5E mov.b Rm,@Rn */
	r4 = 0x0u;  /* 0C051B60 mov #imm,Rn */
	r5 = 0xC2175E8u; UPD(0x0C051B64u, 2);  /* 0C051B62 mov.l @(disp,pc),Rn */
	W32(r5, r0); UPD(0x0C051B66u, 1);  /* 0C051B64 mov.l Rm,@Rn */
	r8 = 0xC062A70u; UPD(0x0C051B68u, 1);  /* 0C051B66 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C051B6Au, 1);  /* 0C051B68 mov.l Rm,@Rn */
	r0 = 0x27Cu; UPD(0x0C051B6Cu, 1);  /* 0C051B6A mov.w @(disp,pc),Rn */
	IF(0x0C051B6Cu); r7 = R32(r0 + r9); UPD(0x0C051B6Eu, 1);  /* 0C051B6C mov.l @(r0,Rm),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C051B70u, 1);  /* 0C051B6E mov.l @(disp,Rm),Rn */
	IF(0x0C051B70u); { u32 t_ = r8; PR = 0x0C051B74u; r6 = R32(r9 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C051B74u); }  /* 0C051B70 jsr @Rn */
L_0C051B74: BLKS(0x0C051B74u);
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C051B76u, 1);  /* 0C051B74 mov.b @Rm,Rn */
	r4 = 0xFFFFFFFCu;  /* 0C051B76 mov #imm,Rn */
	r2 = r7;  /* 0C051B78 mov Rm,Rn */
	r0 = 0x25Fu; UPD(0x0C051B7Cu, 3);  /* 0C051B7A mov.w @(disp,pc),Rn */
	IF(0x0C051B7Cu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C051B7C shad Rm,Rn */
	IF(0x0C051B7Eu); W8(r0 + r9, r2); UPD(0x0C051B80u, 2);  /* 0C051B7E mov.b Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C051B80 add #imm,Rn */
	r0 += 0x1u;  /* 0C051B82 add #imm,Rn */
	{ IF(0x0C051B86u); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0519C2u, 5); goto L_0C0519C2; }  /* 0C051B84 bra */
}

/* FUN_0c051bb0 */
void f_0C051BB0(sh3_t *c)
{
	LOCALS;
L_0C051BB0: BLKS(0x0C051BB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051BB2u, 1);  /* 0C051BB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051BB4u, 1);  /* 0C051BB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051BB6u, 1);  /* 0C051BB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C051BB8u, 1);  /* 0C051BB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C051BBAu, 1);  /* 0C051BB8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C051BBCu, 1);  /* 0C051BBA mov.l Rm,@-Rn */
	r0 = 0xC392AF4u; UPD(0x0C051BBEu, 1);  /* 0C051BBC mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051BC0u, 1);  /* 0C051BBE mov.l Rm,@-Rn */
	r6 = R32(r0); UPD(0x0C051BC2u, 1);  /* 0C051BC0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C051BC2 add #imm,Rn */
	r14 = r15;  /* 0C051BC4 mov Rm,Rn */
	r0 = 0x0u;  /* 0C051BC6 mov #imm,Rn */
	r13 = 0x70007u; UPD(0x0C051BCAu, 4);  /* 0C051BC8 mov.l @(disp,pc),Rn */
	W32(r14, r0); UPD(0x0C051BCCu, 1);  /* 0C051BCA mov.l Rm,@Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C051BCEu, 1);  /* 0C051BCC mov.l Rm,@(disp,Rn) */
	IF(0x0C051BCEu); ;  /* 0C051BCE nop */
	UPD(0x0C051BD0u, 1);
L_0C051BD0: BLKS(0x0C051BD0u);
	r1 = 0xC283794u; UPD(0x0C051BD2u, 1);  /* 0C051BD0 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C051BD4u, 1);  /* 0C051BD2 mov.l @(disp,Rm),Rn */
	r5 = 0x268u; UPD(0x0C051BD6u, 1);  /* 0C051BD4 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C051BD6 add Rm,Rn */
	r5 += r7;  /* 0C051BD8 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C051BDCu, 3);  /* 0C051BDA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C051BDC tst Rm,Rn */
	{ u32 c_ = T; r3 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051C2Au, 4); goto L_0C051C2A; } goto L_0C051BE2; }  /* 0C051BDE bt/s */
L_0C051BE2: BLKS(0x0C051BE2u);
	r12 = 0xC392E08u; UPD(0x0C051BE4u, 2);  /* 0C051BE2 mov.l @(disp,pc),Rn */
	r11 = R32(r12); UPD(0x0C051BE6u, 1);  /* 0C051BE4 mov.l @Rm,Rn */
	r10 = 0xC283644u; UPD(0x0C051BE8u, 1);  /* 0C051BE6 mov.l @(disp,pc),Rn */
	W32(r6, r11); UPD(0x0C051BEAu, 1);  /* 0C051BE8 mov.l Rm,@Rn */
	r9 = 0xF00058u; UPD(0x0C051BECu, 1);  /* 0C051BEA mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051BEC add #imm,Rn */
	r8 = R32(r10); UPD(0x0C051BF0u, 2);  /* 0C051BEE mov.l @Rm,Rn */
	r8 += r9;  /* 0C051BF0 add Rm,Rn */
	W32(r6, r8); UPD(0x0C051BF4u, 2);  /* 0C051BF2 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x10u); UPD(0x0C051BF6u, 1);  /* 0C051BF4 mov.l @(disp,Rm),Rn */
	r6 += 0x4u;  /* 0C051BF6 add #imm,Rn */
	r3 = 0xC21CCF4u; UPD(0x0C051BFAu, 2);  /* 0C051BF8 mov.l @(disp,pc),Rn */
	r2 = (r4 >> 16) | (r4 << 16);  /* 0C051BFA swap.w Rm,Rn */
	r12 = R32(r7 + 0x14u); UPD(0x0C051BFEu, 2);  /* 0C051BFC mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C051BFE exts.w Rm,Rn */
	r10 = 0xC283CA8u; UPD(0x0C051C02u, 2);  /* 0C051C00 mov.l @(disp,pc),Rn */
	r11 = (r12 >> 16) | (r12 << 16);  /* 0C051C02 swap.w Rm,Rn */
	r4 = R32(r3); UPD(0x0C051C06u, 2);  /* 0C051C04 mov.l @Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C051C06 exts.w Rm,Rn */
	r8 = R32(r10); UPD(0x0C051C0Au, 2);  /* 0C051C08 mov.l @Rm,Rn */
	r4 += r0;  /* 0C051C0A add Rm,Rn */
	r4 += 0xFFFFFFFCu;  /* 0C051C0C add #imm,Rn */
	r8 += r9;  /* 0C051C0E add Rm,Rn */
	IF(0x0C051C10u); r4 <<= 16;  /* 0C051C10 shll16 Rn */
	r8 += 0xFFFFFFFCu;  /* 0C051C12 add #imm,Rn */
	r4 |= r8;  /* 0C051C14 or Rm,Rn */
	W32(r6, r4); UPD(0x0C051C18u, 7);  /* 0C051C16 mov.l Rm,@Rn */
	r3 = 0x70007u; UPD(0x0C051C1Au, 1);  /* 0C051C18 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051C1A add #imm,Rn */
	W32(r6, r3); UPD(0x0C051C1Eu, 2);  /* 0C051C1C mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C051C20u, 1);  /* 0C051C1E mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051C20 add #imm,Rn */
	W32(r6, r2); UPD(0x0C051C24u, 2);  /* 0C051C22 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C051C26u, 1);  /* 0C051C24 mov.b @Rm,Rn */
	r6 += 0x4u;  /* 0C051C26 add #imm,Rn */
	r3 = r7;  /* 0C051C28 mov Rm,Rn */
	UPD(0x0C051C2Au, 2);
L_0C051C2A: BLKS(0x0C051C2Au);
	r3 += 0x20u;  /* 0C051C2A add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C051C2Eu, 2);  /* 0C051C2C mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C051C2E mov #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C051C30 tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C051C32 negc Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C051C34 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C051C36 cmp/eq #imm,r0 */
	IF(0x0C051C38u); r5 = T;  /* 0C051C38 movt Rn */
	T = (r2 & r5) == 0;  /* 0C051C3A tst Rm,Rn */
	if (T) { UPD(0x0C051C54u, 10); goto L_0C051C54; }  /* 0C051C3C bt */
L_0C051C3E: BLKS(0x0C051C3Eu);
	W32(r14 + 0x4u, r3); UPD(0x0C051C40u, 1);  /* 0C051C3E mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C051C40 mov #imm,Rn */
	r12 = 0xC392E08u; UPD(0x0C051C44u, 2);  /* 0C051C42 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C051C44 mov Rm,Rn */
	r11 = 0xC283644u; UPD(0x0C051C48u, 2);  /* 0C051C46 mov.l @(disp,pc),Rn */
	r10 = 0xC21CCF4u; UPD(0x0C051C4Au, 1);  /* 0C051C48 mov.l @(disp,pc),Rn */
	IF(0x0C051C4Au); ;  /* 0C051C4A nop */
	UPD(0x0C051C4Cu, 1);
L_0C051C4C: BLKS(0x0C051C4Cu);
	r7 = R32(r14 + 0x4u); UPD(0x0C051C4Eu, 1);  /* 0C051C4C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C051C50u, 1);  /* 0C051C4E mov.b @Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C051C50 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C051C58u, 4); goto L_0C051C58; }  /* 0C051C52 bf */
L_0C051C54: BLKS(0x0C051C54u);
	{ r11 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C051D60u, 3); goto L_0C051D60; }  /* 0C051C54 bra */
L_0C051C58: BLKS(0x0C051C58u);
	r3 = R32(r14); UPD(0x0C051C5Au, 1);  /* 0C051C58 mov.l @Rm,Rn */
	r8 = 0xA0u; UPD(0x0C051C5Cu, 1);  /* 0C051C5A mov.w @(disp,pc),Rn */
	IF(0x0C051C5Cu); MACL = r3 * r8;  /* 0C051C5C mul.l Rm,Rn */
	r1 = 0xC283794u; UPD(0x0C051C60u, 3);  /* 0C051C5E mov.l @(disp,pc),Rn */
	IF(0x0C051C60u); r2 = MACL;  /* 0C051C60 sts macl,Rn */
	r2 += r9;  /* 0C051C62 add Rm,Rn */
	r0 = 0x124u; UPD(0x0C051C66u, 3);  /* 0C051C64 mov.w @(disp,pc),Rn */
	IF(0x0C051C66u); r2 <<= 2;  /* 0C051C66 shll2 Rn */
	r2 += r1;  /* 0C051C68 add Rm,Rn */
	r3 = R32(r4 + 0x10u); UPD(0x0C051C6Cu, 3);  /* 0C051C6A mov.l @(disp,Rm),Rn */
	IF(0x0C051C6Cu); r5 = R32(r0 + r2); UPD(0x0C051C6Eu, 1);  /* 0C051C6C mov.l @(r0,Rm),Rn */
	r5 += r3;  /* 0C051C6E add Rm,Rn */
	r7 = (r5 >> 16) | (r5 << 16);  /* 0C051C70 swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C051C72 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C051C74 exts.w Rm,Rn */
	r7 = R32(r4 + 0x14u); UPD(0x0C051C78u, 5);  /* 0C051C76 mov.l @(disp,Rm),Rn */
	IF(0x0C051C78u); r1 = R32(r0 + r2); UPD(0x0C051C7Au, 1);  /* 0C051C78 mov.l @(r0,Rm),Rn */
	r4 += 0x21u;  /* 0C051C7A add #imm,Rn */
	r1 += r7;  /* 0C051C7C add Rm,Rn */
	r5 = (r1 >> 16) | (r1 << 16);  /* 0C051C7E swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C051C80 add #imm,Rn */
	IF(0x0C051C82u); r1 = R32(r0 + r2); UPD(0x0C051C84u, 5);  /* 0C051C82 mov.l @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C051C84 exts.w Rm,Rn */
	r1 += r3;  /* 0C051C86 add Rm,Rn */
	r3 = (r1 >> 16) | (r1 << 16);  /* 0C051C88 swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C051C8A add #imm,Rn */
	IF(0x0C051C8Cu); r1 = R32(r0 + r2); UPD(0x0C051C8Eu, 5);  /* 0C051C8C mov.l @(r0,Rm),Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C051C8E exts.w Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C051C92u, 2);  /* 0C051C90 mov.b @Rm,Rn */
	r1 += r7;  /* 0C051C92 add Rm,Rn */
	T = r9 == r0;  /* 0C051C94 cmp/eq Rm,Rn */
	r2 = (r1 >> 16) | (r1 << 16);  /* 0C051C96 swap.w Rm,Rn */
	r0 = 0xE02020u; UPD(0x0C051C9Au, 4);  /* 0C051C98 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C051C9A add #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C051C9C add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C051C9E exts.w Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFDFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C051CA6u, 6); goto L_0C051CA6; } goto L_0C051CA4; }  /* 0C051CA0 bt/s */
L_0C051CA4: BLKS(0x0C051CA4u);
	r0 = 0x808080u; UPD(0x0C051CA6u, 2);  /* 0C051CA4 mov.l @(disp,pc),Rn */
L_0C051CA6: BLKS(0x0C051CA6u);
	r2 = R32(r12); UPD(0x0C051CA8u, 1);  /* 0C051CA6 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C051CA8 add #imm,Rn */
	W32(r6, r2); UPD(0x0C051CACu, 2);  /* 0C051CAA mov.l Rm,@Rn */
	r2 = 0xF800D0u; UPD(0x0C051CAEu, 1);  /* 0C051CAC mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051CAE add #imm,Rn */
	r1 = R32(r11); UPD(0x0C051CB2u, 2);  /* 0C051CB0 mov.l @Rm,Rn */
	r1 += r2;  /* 0C051CB2 add Rm,Rn */
	W32(r6, r1); UPD(0x0C051CB6u, 2);  /* 0C051CB4 mov.l Rm,@Rn */
	r1 = 0xC283CA8u; UPD(0x0C051CB8u, 1);  /* 0C051CB6 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051CB8 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C051CBCu, 2);  /* 0C051CBA mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C051CBEu, 1);  /* 0C051CBC mov.l @Rm,Rn */
	r2 += r8;  /* 0C051CBE add Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C051CC0 add #imm,Rn */
	r1 += r5;  /* 0C051CC2 add Rm,Rn */
	IF(0x0C051CC4u); r2 <<= 16;  /* 0C051CC4 shll16 Rn */
	r2 |= r1;  /* 0C051CC6 or Rm,Rn */
	W32(r6, r2); UPD(0x0C051CCAu, 6);  /* 0C051CC8 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051CCA add #imm,Rn */
	W32(r6, r13); UPD(0x0C051CCEu, 2);  /* 0C051CCC mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051CCE add #imm,Rn */
	W32(r6, r0); UPD(0x0C051CD2u, 2);  /* 0C051CD0 mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C051CD4u, 1);  /* 0C051CD2 mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C051CD4 add #imm,Rn */
	W32(r6, r2); UPD(0x0C051CD8u, 2);  /* 0C051CD6 mov.l Rm,@Rn */
	r2 = 0xF800C8u; UPD(0x0C051CDAu, 1);  /* 0C051CD8 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051CDA add #imm,Rn */
	r1 = R32(r11); UPD(0x0C051CDEu, 2);  /* 0C051CDC mov.l @Rm,Rn */
	r1 += r2;  /* 0C051CDE add Rm,Rn */
	W32(r6, r1); UPD(0x0C051CE2u, 2);  /* 0C051CE0 mov.l Rm,@Rn */
	r1 = 0xC283CA8u; UPD(0x0C051CE4u, 1);  /* 0C051CE2 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051CE4 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C051CE8u, 2);  /* 0C051CE6 mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C051CEAu, 1);  /* 0C051CE8 mov.l @Rm,Rn */
	r2 += r3;  /* 0C051CEA add Rm,Rn */
	r1 += r5;  /* 0C051CEC add Rm,Rn */
	IF(0x0C051CEEu); r2 <<= 16;  /* 0C051CEE shll16 Rn */
	r2 |= r1;  /* 0C051CF0 or Rm,Rn */
	W32(r6, r2); UPD(0x0C051CF4u, 5);  /* 0C051CF2 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051CF4 add #imm,Rn */
	W32(r6, r13); UPD(0x0C051CF8u, 2);  /* 0C051CF6 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051CF8 add #imm,Rn */
	W32(r6, r0); UPD(0x0C051CFCu, 2);  /* 0C051CFA mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C051CFEu, 1);  /* 0C051CFC mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C051CFE add #imm,Rn */
	W32(r6, r2); UPD(0x0C051D02u, 2);  /* 0C051D00 mov.l Rm,@Rn */
	r1 = 0xF800D8u; UPD(0x0C051D04u, 1);  /* 0C051D02 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051D04 add #imm,Rn */
	r5 = R32(r11); UPD(0x0C051D08u, 2);  /* 0C051D06 mov.l @Rm,Rn */
	r5 += r1;  /* 0C051D08 add Rm,Rn */
	W32(r6, r5); UPD(0x0C051D0Cu, 2);  /* 0C051D0A mov.l Rm,@Rn */
	r2 = R32(r10); UPD(0x0C051D0Eu, 1);  /* 0C051D0C mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C051D0E add #imm,Rn */
	r5 = 0xC283CA8u; UPD(0x0C051D12u, 2);  /* 0C051D10 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C051D12 add Rm,Rn */
	r8 = R32(r5); UPD(0x0C051D16u, 2);  /* 0C051D14 mov.l @Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C051D16 add #imm,Rn */
	r8 += r7;  /* 0C051D18 add Rm,Rn */
	r8 += 0xFFFFFFF8u;  /* 0C051D1A add #imm,Rn */
	IF(0x0C051D1Cu); r2 <<= 16;  /* 0C051D1C shll16 Rn */
	r2 |= r8;  /* 0C051D1E or Rm,Rn */
	W32(r6, r2); UPD(0x0C051D22u, 6);  /* 0C051D20 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051D22 add #imm,Rn */
	W32(r6, r13); UPD(0x0C051D26u, 2);  /* 0C051D24 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051D26 add #imm,Rn */
	W32(r6, r0); UPD(0x0C051D2Au, 2);  /* 0C051D28 mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C051D2Cu, 1);  /* 0C051D2A mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C051D2C add #imm,Rn */
	W32(r6, r2); UPD(0x0C051D30u, 2);  /* 0C051D2E mov.l Rm,@Rn */
	r1 = 0xF800C0u; UPD(0x0C051D32u, 1);  /* 0C051D30 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C051D32 add #imm,Rn */
	r8 = R32(r11); UPD(0x0C051D36u, 2);  /* 0C051D34 mov.l @Rm,Rn */
	r8 += r1;  /* 0C051D36 add Rm,Rn */
	W32(r6, r8); UPD(0x0C051D3Au, 2);  /* 0C051D38 mov.l Rm,@Rn */
	r8 = R32(r10); UPD(0x0C051D3Cu, 1);  /* 0C051D3A mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C051D3C add #imm,Rn */
	r2 = R32(r5); UPD(0x0C051D40u, 2);  /* 0C051D3E mov.l @Rm,Rn */
	r8 += r3;  /* 0C051D40 add Rm,Rn */
	r2 += r7;  /* 0C051D42 add Rm,Rn */
	IF(0x0C051D44u); r8 <<= 16;  /* 0C051D44 shll16 Rn */
	r2 += 0xFFFFFFF8u;  /* 0C051D46 add #imm,Rn */
	r8 |= r2;  /* 0C051D48 or Rm,Rn */
	W32(r6, r8); UPD(0x0C051D4Cu, 6);  /* 0C051D4A mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051D4C add #imm,Rn */
	W32(r6, r13); UPD(0x0C051D50u, 2);  /* 0C051D4E mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C051D50 add #imm,Rn */
	W32(r6, r0); UPD(0x0C051D54u, 2);  /* 0C051D52 mov.l Rm,@Rn */
	{ r6 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C051C4Cu, 3); goto L_0C051C4C; }  /* 0C051D54 bra */
L_0C051D60: BLKS(0x0C051D60u);
	r9 = 0x1u;  /* 0C051D60 mov #imm,Rn */
	r10 = R32(r14); UPD(0x0C051D64u, 2);  /* 0C051D62 mov.l @Rm,Rn */
	r12 = 0x280u; UPD(0x0C051D66u, 1);  /* 0C051D64 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C051D66 add #imm,Rn */
	r11 += r12;  /* 0C051D68 add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C051D6Cu, 3);  /* 0C051D6A mov.l Rm,@(disp,Rn) */
	T = (s32)r10 > (s32)r9;  /* 0C051D6C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C051D76u, 4); goto L_0C051D76; } UPD(0x0C051D72u, 1); goto L_0C051D72; }  /* 0C051D6E bt/s */
L_0C051D72: BLKS(0x0C051D72u);
	{ IF(0x0C051D74u); ; /* slot nop */ UPD(0x0C051BD0u, 3); goto L_0C051BD0; }  /* 0C051D72 bra */
L_0C051D76: BLKS(0x0C051D76u);
	r13 = 0xC392AF4u; UPD(0x0C051D78u, 1);  /* 0C051D76 mov.l @(disp,pc),Rn */
	r14 += 0x10u;  /* 0C051D78 add #imm,Rn */
	W32(r13, r6); UPD(0x0C051D7Cu, 2);  /* 0C051D7A mov.l Rm,@Rn */
	r15 = r14;  /* 0C051D7C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C051D80u, 2);  /* 0C051D7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C051D82u, 1);  /* 0C051D80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C051D84u, 1);  /* 0C051D82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C051D86u, 1);  /* 0C051D84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C051D88u, 1);  /* 0C051D86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C051D8Au, 1);  /* 0C051D88 mov.l @Rm+,Rn */
	IF(0x0C051D8Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C051D8A rts */
}

/* FUN_0c051dd0 */
void f_0C051DD0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C052254);
L_0C051DD0: BLKS(0x0C051DD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C051DD2u, 1);  /* 0C051DD0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C051DD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C051DD6u, 2);  /* 0C051DD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C051DD8u, 1);  /* 0C051DD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C051DDAu, 1);  /* 0C051DD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C051DDCu, 1);  /* 0C051DDA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C051DDEu, 1);  /* 0C051DDC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C051DE0u, 1);  /* 0C051DDE mov.l Rm,@-Rn */
	IF(0x0C051DE0u); r15 -= 4; W32(r15, PR); UPD(0x0C051DE2u, 1);  /* 0C051DE0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C051DE2 add #imm,Rn */
	r14 = r15;  /* 0C051DE4 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C051DE8u, 3);  /* 0C051DE6 mov.l Rm,@Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C051DEAu, 1);  /* 0C051DE8 mov.l Rm,@(disp,Rn) */
	IF(0x0C051DEAu); ;  /* 0C051DEA nop */
	UPD(0x0C051DECu, 1);
L_0C051DEC: BLKS(0x0C051DECu);
	r5 = 0xC160AF0u; UPD(0x0C051DEEu, 1);  /* 0C051DEC mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C051DEE mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C051DF2u, 2);  /* 0C051DF0 mov.l @Rm,Rn */
	IF(0x0C051DF2u); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C051DF4u, 1);  /* 0C051DF2 mov.b @(r0,Rm),Rn */
	r2 = 0xC050CD0u; UPD(0x0C051DF6u, 1);  /* 0C051DF4 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C051DF6 mov Rm,Rn */
	r8 += 0x13u;  /* 0C051DF8 add #imm,Rn */
	r4 = 0xC160A94u; UPD(0x0C051DFCu, 3);  /* 0C051DFA mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C051DFEu, 1);  /* 0C051DFC mov.l @(disp,pc),Rn */
	IF(0x0C051DFEu); { u32 t_ = r2; PR = 0x0C051E02u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051E02u); }  /* 0C051DFE jsr @Rn */
L_0C051E02: BLKS(0x0C051E02u);
	r4 = R32(r14 + 0x18u); UPD(0x0C051E04u, 1);  /* 0C051E02 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C051E04 mov Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C051E08u, 2);  /* 0C051E06 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C051E08 mov #imm,Rn */
	r1 = 0xC050A80u; UPD(0x0C051E0Cu, 2);  /* 0C051E0A mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C051E0C add Rm,Rn */
	IF(0x0C051E0Eu); { u32 t_ = r1; PR = 0x0C051E12u; r4 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051E12u); }  /* 0C051E0E jsr @Rn */
L_0C051E12: BLKS(0x0C051E12u);
	r12 = 0xC050CD0u; UPD(0x0C051E14u, 1);  /* 0C051E12 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C051E14 add #imm,Rn */
	r11 = 0xC050A80u; UPD(0x0C051E18u, 2);  /* 0C051E16 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C051E18 mov Rm,Rn */
	r4 = 0xC160A98u; UPD(0x0C051E1Cu, 2);  /* 0C051E1A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C051E1Eu, 1);  /* 0C051E1C mov.l @(disp,pc),Rn */
	IF(0x0C051E1Eu); { u32 t_ = r12; PR = 0x0C051E22u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051E22u); }  /* 0C051E1E jsr @Rn */
L_0C051E22: BLKS(0x0C051E22u);
	r9 = 0xC050CD0u; UPD(0x0C051E24u, 1);  /* 0C051E22 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C051E24 mov Rm,Rn */
	r4 = R32(r10 + 0x8u); UPD(0x0C051E28u, 2);  /* 0C051E26 mov.l @(disp,Rm),Rn */
	IF(0x0C051E28u); { u32 t_ = r11; PR = 0x0C051E2Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051E2Cu); }  /* 0C051E28 jsr @Rn */
L_0C051E2C: BLKS(0x0C051E2Cu);
	r8 += 0xFFFFFFFFu;  /* 0C051E2C add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C051E30u, 2);  /* 0C051E2E mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C051E30 mov Rm,Rn */
	r4 = 0xC160A9Cu; UPD(0x0C051E34u, 2);  /* 0C051E32 mov.l @(disp,pc),Rn */
	IF(0x0C051E34u); { u32 t_ = r9; PR = 0x0C051E38u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051E38u); }  /* 0C051E34 jsr @Rn */
L_0C051E38: BLKS(0x0C051E38u);
	r7 = 0xC050A80u; UPD(0x0C051E3Au, 1);  /* 0C051E38 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C051E3A mov Rm,Rn */
	r4 = R32(r10 + 0xCu); UPD(0x0C051E3Eu, 2);  /* 0C051E3C mov.l @(disp,Rm),Rn */
	IF(0x0C051E3Eu); { u32 t_ = r7; PR = 0x0C051E42u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C051E42u); }  /* 0C051E3E jsr @Rn */
L_0C051E42: BLKS(0x0C051E42u);
	r3 = 0xC050CD0u; UPD(0x0C051E44u, 1);  /* 0C051E42 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C051E44 mov Rm,Rn */
	r5 += 0x10u;  /* 0C051E46 add #imm,Rn */
	r4 = 0xC160AA0u; UPD(0x0C051E4Au, 3);  /* 0C051E48 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C051E4Cu, 1);  /* 0C051E4A mov.l @(disp,pc),Rn */
	IF(0x0C051E4Cu); { u32 t_ = r3; PR = 0x0C051E50u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051E50u); }  /* 0C051E4C jsr @Rn */
L_0C051E50: BLKS(0x0C051E50u);
	r0 = 0x224u; UPD(0x0C051E52u, 1);  /* 0C051E50 mov.w @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C051E52 mov #imm,Rn */
	IF(0x0C051E54u); r1 = R32(r0 + r10); UPD(0x0C051E56u, 2);  /* 0C051E54 mov.l @(r0,Rm),Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C051E58u, 1);  /* 0C051E56 mov.l @(disp,Rm),Rn */
	IF(0x0C051E58u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C051E58 shld Rm,Rn */
	r0 += r1;  /* 0C051E5A add Rm,Rn */
	r10 = R32(r0 + 0x4u); UPD(0x0C051E5Eu, 3);  /* 0C051E5C mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C051E60u, 1);  /* 0C051E5E mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C051E60 tst Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C051EA8u, 4); goto L_0C051EA8; } goto L_0C051E66; }  /* 0C051E62 bt/s */
L_0C051E66: BLKS(0x0C051E66u);
	r6 = 0x5u;  /* 0C051E66 mov #imm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C051E6Au, 3);  /* 0C051E68 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r11); UPD(0x0C051E6Cu, 1);  /* 0C051E6A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r6); UPD(0x0C051E6Eu, 1);  /* 0C051E6C mov.l Rm,@(disp,Rn) */
	r9 = r10;  /* 0C051E6E mov Rm,Rn */
	UPD(0x0C051E70u, 1);
L_0C051E70: BLKS(0x0C051E70u);
	r4 = (u32)(s32)(s16)r2;  /* 0C051E70 exts.w Rm,Rn */
	r9 += 0x2u;  /* 0C051E72 add #imm,Rn */
	r3 = r4;  /* 0C051E74 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C051E78u, 4);  /* 0C051E76 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C051E78 add #imm,Rn */
	T = r3 == r0;  /* 0C051E7A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051E84u, 5); goto L_0C051E84; } goto L_0C051E80; }  /* 0C051E7C bf/s */
L_0C051E80: BLKS(0x0C051E80u);
	{ r8 = r13; /* slot mov Rm,Rn */ UPD(0x0C0521C0u, 4); goto L_0C0521C0; }  /* 0C051E80 bra */
L_0C051E84: BLKS(0x0C051E84u);
	r8 = 0xC0509B0u; UPD(0x0C051E86u, 1);  /* 0C051E84 mov.l @(disp,pc),Rn */
	r5 -= r11;  /* 0C051E86 sub Rm,Rn */
	r5 += 0x10u;  /* 0C051E88 add #imm,Rn */
	IF(0x0C051E8Au); { u32 t_ = r8; PR = 0x0C051E8Eu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C051E8Eu); }  /* 0C051E8A jsr @Rn */
L_0C051E8E: BLKS(0x0C051E8Eu);
	r7 = r11;  /* 0C051E8E mov Rm,Rn */
	r7 += 0x1u;  /* 0C051E90 add #imm,Rn */
	r11 = (u32)(s32)(s8)r7;  /* 0C051E92 exts.b Rm,Rn */
	r0 = r11;  /* 0C051E94 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C051E96 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051EA0u, 8); goto L_0C051EA0; } goto L_0C051E9C; }  /* 0C051E98 bf/s */
L_0C051E9C: BLKS(0x0C051E9Cu);
	{ r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0521A0u, 4); goto L_0C0521A0; }  /* 0C051E9C bra */
L_0C051EA0: BLKS(0x0C051EA0u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C051EA2u, 1);  /* 0C051EA0 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C051EA2 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051E70u, 4); goto L_0C051E70; } UPD(0x0C051EA8u, 1); goto L_0C051EA8; }  /* 0C051EA4 bf/s */
L_0C051EA8: BLKS(0x0C051EA8u);
	r11 = 0xC283794u; UPD(0x0C051EAAu, 1);  /* 0C051EA8 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C051EACu, 1);  /* 0C051EAA mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C051EAC add Rm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C051EB0u, 2);  /* 0C051EAE mov.l Rm,@(disp,Rn) */
	r11 = r9;  /* 0C051EB0 mov Rm,Rn */
	r11 += 0x20u;  /* 0C051EB2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C051EB6u, 3);  /* 0C051EB4 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C051EB6 tst Rm,Rn */
	{ u32 c_ = T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051EC0u, 4); goto L_0C051EC0; } goto L_0C051EBC; }  /* 0C051EB8 bt/s */
L_0C051EBC: BLKS(0x0C051EBCu);
	{ r9 += 0xDu; /* slot add #imm,Rn */ UPD(0x0C0520E0u, 4); goto L_0C0520E0; }  /* 0C051EBC bra */
L_0C051EC0: BLKS(0x0C051EC0u);
	r0 = R32(r14 + 0x4u); UPD(0x0C051EC2u, 1);  /* 0C051EC0 mov.l @(disp,Rm),Rn */
L_0C051EC2: BLKS(0x0C051EC2u);
	r1 = 0x3u;  /* 0C051EC2 mov #imm,Rn */
	r2 = 0x224u; UPD(0x0C051EC6u, 2);  /* 0C051EC4 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C051EC6 mov Rm,Rn */
	IF(0x0C051EC8u); r7 = R32(r0 + r2); UPD(0x0C051ECAu, 2);  /* 0C051EC8 mov.l @(r0,Rm),Rn */
	r0 = R32(r0 + 0x4u); UPD(0x0C051ECCu, 1);  /* 0C051ECA mov.l @(disp,Rm),Rn */
	IF(0x0C051ECCu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C051ECC shld Rm,Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C051ED0u, 2);  /* 0C051ECE mov.l @(disp,Rm),Rn */
	IF(0x0C051ED0u); r9 = R32(r0 + r7); UPD(0x0C051ED2u, 1);  /* 0C051ED0 mov.l @(r0,Rm),Rn */
	r6 = r2;  /* 0C051ED2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C051ED4 mov #imm,Rn */
	IF(0x0C051ED6u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C051ED6 shld Rm,Rn */
	r6 += r9;  /* 0C051ED8 add Rm,Rn */
	r5 = R32(r6 + 0x4u); UPD(0x0C051EDCu, 5);  /* 0C051EDA mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C051EDC tst Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051EE8u, 4); goto L_0C051EE8; } goto L_0C051EE2; }  /* 0C051EDE bt/s */
L_0C051EE2: BLKS(0x0C051EE2u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C0520B0u, 4); goto L_0C0520B0; }  /* 0C051EE2 bra */
L_0C051EE6: BLKS(0x0C051EE6u);
	r4 = r2;  /* 0C051EE6 mov Rm,Rn */
	UPD(0x0C051EE8u, 1);
L_0C051EE8: BLKS(0x0C051EE8u);
	r7 = 0x4u;  /* 0C051EE8 mov #imm,Rn */
	IF(0x0C051EEAu); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C051EEA shld Rm,Rn */
	r4 += r9;  /* 0C051EEC add Rm,Rn */
	r6 = R32(r4 + 0x8u); UPD(0x0C051EF0u, 4);  /* 0C051EEE mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C051EF0 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C051EFCu, 4); goto L_0C051EFC; } goto L_0C051EF6; }  /* 0C051EF2 bt/s */
L_0C051EF6: BLKS(0x0C051EF6u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C052080u, 4); goto L_0C052080; }  /* 0C051EF6 bra */
L_0C051EFA: BLKS(0x0C051EFAu);
	r5 = 0x4u;  /* 0C051EFA mov #imm,Rn */
	UPD(0x0C051EFCu, 1);
L_0C051EFC: BLKS(0x0C051EFCu);
	IF(0x0C051EFCu); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C051EFC shld Rm,Rn */
	r2 += r9;  /* 0C051EFE add Rm,Rn */
	r3 = R32(r2 + 0xCu); UPD(0x0C051F02u, 3);  /* 0C051F00 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C051F02 tst Rm,Rn */
	{ u32 c_ = T; r12 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C051F0Cu, 4); goto L_0C051F0C; } goto L_0C051F08; }  /* 0C051F04 bt/s */
L_0C051F08: BLKS(0x0C051F08u);
	{ r12 += 0x6u; /* slot add #imm,Rn */ UPD(0x0C052000u, 4); goto L_0C052000; }  /* 0C051F08 bra */
L_0C051F0C: BLKS(0x0C051F0Cu);
	r11 = 0xC050CD0u; UPD(0x0C051F0Eu, 1);  /* 0C051F0C mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C051F0E mov Rm,Rn */
	r10 = 0xC0404000u; UPD(0x0C051F12u, 2);  /* 0C051F10 mov.l @(disp,pc),Rn */
	r12 += 0x5u;  /* 0C051F12 add #imm,Rn */
	r4 = 0xC160AE8u; UPD(0x0C051F16u, 2);  /* 0C051F14 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C051F16 mov Rm,Rn */
	r7 = r10;  /* 0C051F18 mov Rm,Rn */
	IF(0x0C051F1Au); { u32 t_ = r11; PR = 0x0C051F1Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F1Eu); }  /* 0C051F1A jsr @Rn */
L_0C051F1E: BLKS(0x0C051F1Eu);
	r5 = r12;  /* 0C051F1E mov Rm,Rn */
	r7 = r10;  /* 0C051F20 mov Rm,Rn */
	r4 = 0xC160AECu; UPD(0x0C051F24u, 3);  /* 0C051F22 mov.l @(disp,pc),Rn */
	IF(0x0C051F24u); { u32 t_ = r11; PR = 0x0C051F28u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F28u); }  /* 0C051F24 jsr @Rn */
L_0C051F28: BLKS(0x0C051F28u);
	r0 = R32(r14 + 0x4u); UPD(0x0C051F2Au, 1);  /* 0C051F28 mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C051F2A mov #imm,Rn */
	r8 = 0x25Fu; UPD(0x0C051F2Eu, 2);  /* 0C051F2C mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r12;  /* 0C051F2E exts.w Rm,Rn */
	IF(0x0C051F30u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C051F32u, 2);  /* 0C051F30 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C051F32 mov Rm,Rn */
	r6 &= r4;  /* 0C051F34 and Rm,Rn */
	r13 = 0xC160B10u; UPD(0x0C051F38u, 3);  /* 0C051F36 mov.l @(disp,pc),Rn */
	IF(0x0C051F38u); r6 <<= 2;  /* 0C051F38 shll2 Rn */
	r12 = 0x80808000u; UPD(0x0C051F3Cu, 2);  /* 0C051F3A mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C051F3C mov Rm,Rn */
	IF(0x0C051F3Eu); r4 = R32(r0 + r13); UPD(0x0C051F40u, 2);  /* 0C051F3E mov.l @(r0,Rm),Rn */
	r6 = 0x4u;  /* 0C051F40 mov #imm,Rn */
	IF(0x0C051F42u); { u32 t_ = r11; PR = 0x0C051F46u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F46u); }  /* 0C051F42 jsr @Rn */
L_0C051F46: BLKS(0x0C051F46u);
	r0 = R32(r14 + 0x4u); UPD(0x0C051F48u, 1);  /* 0C051F46 mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C051F48 mov #imm,Rn */
	r9 = 0x260u; UPD(0x0C051F4Cu, 2);  /* 0C051F4A mov.w @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C051F4C mov #imm,Rn */
	IF(0x0C051F4Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C051F50u, 2);  /* 0C051F4E mov.b @(r0,Rm),Rn */
	r7 = r12;  /* 0C051F50 mov Rm,Rn */
	r3 &= r5;  /* 0C051F52 and Rm,Rn */
	IF(0x0C051F54u); r3 <<= 2;  /* 0C051F54 shll2 Rn */
	r0 = r3;  /* 0C051F56 mov Rm,Rn */
	IF(0x0C051F58u); r4 = R32(r0 + r13); UPD(0x0C051F5Au, 5);  /* 0C051F58 mov.l @(r0,Rm),Rn */
	IF(0x0C051F5Au); { u32 t_ = r11; PR = 0x0C051F5Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F5Eu); }  /* 0C051F5A jsr @Rn */
L_0C051F5E: BLKS(0x0C051F5Eu);
	r0 = R32(r14 + 0x18u); UPD(0x0C051F60u, 1);  /* 0C051F5E mov.l @(disp,Rm),Rn */
	r13 = 0x1u;  /* 0C051F60 mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C051F64u, 2);  /* 0C051F62 mov.l @Rm,Rn */
	r2 = 0x280u; UPD(0x0C051F66u, 1);  /* 0C051F64 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C051F66 add #imm,Rn */
	r0 += r2;  /* 0C051F68 add Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C051F6Cu, 3);  /* 0C051F6A mov.l Rm,@(disp,Rn) */
	T = (s32)r1 > (s32)r13;  /* 0C051F6C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C051F76u, 4); goto L_0C051F76; } UPD(0x0C051F72u, 1); goto L_0C051F72; }  /* 0C051F6E bt/s */
L_0C051F72: BLKS(0x0C051F72u);
	{ IF(0x0C051F74u); ; /* slot nop */ UPD(0x0C051DECu, 3); goto L_0C051DEC; }  /* 0C051F72 bra */
L_0C051F76: BLKS(0x0C051F76u);
	r13 = 0x4040C000u; UPD(0x0C051F78u, 1);  /* 0C051F76 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C051F78 mov #imm,Rn */
	r4 = 0xC160AF8u; UPD(0x0C051F7Cu, 2);  /* 0C051F7A mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C051F7C mov #imm,Rn */
	IF(0x0C051F7Eu); { u32 t_ = r11; PR = 0x0C051F82u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F82u); }  /* 0C051F7E jsr @Rn */
L_0C051F82: BLKS(0x0C051F82u);
	r4 = 0xC160AFCu; UPD(0x0C051F84u, 1);  /* 0C051F82 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C051F84 mov Rm,Rn */
	r5 = 0x14u;  /* 0C051F86 mov #imm,Rn */
	IF(0x0C051F88u); { u32 t_ = r11; PR = 0x0C051F8Cu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C051F8Cu); }  /* 0C051F88 jsr @Rn */
L_0C051F8C: BLKS(0x0C051F8Cu);
	r2 = 0xC283794u; UPD(0x0C051F8Eu, 1);  /* 0C051F8C mov.l @(disp,pc),Rn */
	r8 = 0x27Cu; UPD(0x0C051F90u, 1);  /* 0C051F8E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C051F90 add Rm,Rn */
	r7 = R32(r2 + 0x10u); UPD(0x0C051F94u, 2);  /* 0C051F92 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x14u); UPD(0x0C051F96u, 1);  /* 0C051F94 mov.l @(disp,Rm),Rn */
	r7 -= r0;  /* 0C051F96 sub Rm,Rn */
	r11 = (r7 >> 16) | (r7 << 16);  /* 0C051F98 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r11;  /* 0C051F9A exts.w Rm,Rn */
	IF(0x0C051F9Cu); T = (s32)r4 >= 0;  /* 0C051F9C cmp/pz Rn */
	if (!T) { UPD(0x0C051FF0u, 7); goto L_0C051FF0; }  /* 0C051F9E bf */
L_0C051FA0: BLKS(0x0C051FA0u);
	r9 = 0xC0509B0u; UPD(0x0C051FA2u, 1);  /* 0C051FA0 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C051FA2 mov #imm,Rn */
	IF(0x0C051FA4u); { u32 t_ = r9; PR = 0x0C051FA8u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C051FA8u); }  /* 0C051FA4 jsr @Rn */
L_0C051FA8: BLKS(0x0C051FA8u);
	r6 = 0xC283794u; UPD(0x0C051FAAu, 1);  /* 0C051FA8 mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x18u); UPD(0x0C051FACu, 1);  /* 0C051FAA mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x14u); UPD(0x0C051FAEu, 1);  /* 0C051FAC mov.l @(disp,Rm),Rn */
	r5 -= r1;  /* 0C051FAE sub Rm,Rn */
	r3 = (r5 >> 16) | (r5 << 16);  /* 0C051FB0 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r3;  /* 0C051FB2 exts.w Rm,Rn */
	IF(0x0C051FB4u); T = (s32)r4 >= 0;  /* 0C051FB4 cmp/pz Rn */
	if (!T) { UPD(0x0C051FE0u, 7); goto L_0C051FE0; }  /* 0C051FB6 bf */
L_0C051FB8: BLKS(0x0C051FB8u);
	r5 = 0x14u;  /* 0C051FB8 mov #imm,Rn */
	r6 = 0x3u;  /* 0C051FBA mov #imm,Rn */
	r7 = r9;  /* 0C051FBC mov Rm,Rn */
	r14 += 0x1Cu;  /* 0C051FBE add #imm,Rn */
	r15 = r14;  /* 0C051FC0 mov Rm,Rn */
	IF(0x0C051FC2u); PR = R32(r15); r15 += 4; UPD(0x0C051FC4u, 6);  /* 0C051FC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C051FC6u, 1);  /* 0C051FC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C051FC8u, 1);  /* 0C051FC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C051FCAu, 1);  /* 0C051FC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C051FCCu, 1);  /* 0C051FCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C051FCEu, 1);  /* 0C051FCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C051FD0u, 1);  /* 0C051FCE mov.l @Rm+,Rn */
	IF(0x0C051FD0u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0509B0u: TAIL(f_0C0509B0); default: JUMPD(tv_); } }  /* 0C051FD0 jmp @Rn */
L_0C051FE0: BLKS(0x0C051FE0u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C051FB8u, 3); goto L_0C051FB8; }  /* 0C051FE0 bra */
L_0C051FF0: BLKS(0x0C051FF0u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C051FA0u, 3); goto L_0C051FA0; }  /* 0C051FF0 bra */
L_0C052000: BLKS(0x0C052000u);
	r10 = 0xC050CD0u; UPD(0x0C052002u, 1);  /* 0C052000 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C052004u, 1);  /* 0C052002 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C052004 mov Rm,Rn */
	r4 = 0xC160ACCu; UPD(0x0C052008u, 2);  /* 0C052006 mov.l @(disp,pc),Rn */
	IF(0x0C052008u); { u32 t_ = r10; PR = 0x0C05200Cu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05200Cu); }  /* 0C052008 jsr @Rn */
L_0C05200C: BLKS(0x0C05200Cu);
	r7 = R32(r14 + 0x4u); UPD(0x0C05200Eu, 1);  /* 0C05200C mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C05200E mov #imm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C052012u, 2);  /* 0C052010 mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C052012 mov Rm,Rn */
	IF(0x0C052014u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C052014 shld Rm,Rn */
	r6 += r9;  /* 0C052016 add Rm,Rn */
	r9 = 0xC05E330u; UPD(0x0C05201Au, 4);  /* 0C052018 mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0xCu); UPD(0x0C05201Cu, 1);  /* 0C05201A mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C05201Eu, 1);  /* 0C05201C mov.l @(disp,pc),Rn */
	IF(0x0C05201Eu); { u32 t_ = r9; PR = 0x0C052022u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C052022u); }  /* 0C05201E jsr @Rn */
L_0C052022: BLKS(0x0C052022u);
	{ IF(0x0C052024u); ; /* slot nop */ UPD(0x0C051F0Cu, 3); goto L_0C051F0C; }  /* 0C052022 bra */
L_0C052080: BLKS(0x0C052080u);
	r11 = 0xC050CD0u; UPD(0x0C052082u, 1);  /* 0C052080 mov.l @(disp,pc),Rn */
	r10 += 0x7u;  /* 0C052082 add #imm,Rn */
	r4 = 0xC160ADCu; UPD(0x0C052086u, 2);  /* 0C052084 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C052086 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05208Au, 2);  /* 0C052088 mov.l @(disp,pc),Rn */
	IF(0x0C05208Au); { u32 t_ = r11; PR = 0x0C05208Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05208Eu); }  /* 0C05208A jsr @Rn */
L_0C05208E: BLKS(0x0C05208Eu);
	r8 = R32(r14 + 0x4u); UPD(0x0C052090u, 1);  /* 0C05208E mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C052090 mov #imm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C052094u, 2);  /* 0C052092 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C052094 mov Rm,Rn */
	IF(0x0C052096u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052096 shld Rm,Rn */
	r12 = 0xC05E330u; UPD(0x0C05209Au, 3);  /* 0C052098 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C05209A add Rm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C05209Eu, 2);  /* 0C05209C mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C0520A0u, 1);  /* 0C05209E mov.l @(disp,pc),Rn */
	IF(0x0C0520A0u); { u32 t_ = r12; PR = 0x0C0520A4u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C0520A4u); }  /* 0C0520A0 jsr @Rn */
L_0C0520A4: BLKS(0x0C0520A4u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0520A6u, 1);  /* 0C0520A4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r1 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C051EFAu, 3); goto L_0C051EFA; }  /* 0C0520A6 bra */
L_0C0520B0: BLKS(0x0C0520B0u);
	r11 = 0xC050CD0u; UPD(0x0C0520B2u, 1);  /* 0C0520B0 mov.l @(disp,pc),Rn */
	r10 += 0x8u;  /* 0C0520B2 add #imm,Rn */
	r4 = 0xC160AD4u; UPD(0x0C0520B6u, 2);  /* 0C0520B4 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0520B6 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C0520BAu, 2);  /* 0C0520B8 mov.l @(disp,pc),Rn */
	IF(0x0C0520BAu); { u32 t_ = r11; PR = 0x0C0520BEu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0520BEu); }  /* 0C0520BA jsr @Rn */
L_0C0520BE: BLKS(0x0C0520BEu);
	r5 = R32(r14 + 0x4u); UPD(0x0C0520C0u, 1);  /* 0C0520BE mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C0520C0 mov #imm,Rn */
	r8 = R32(r5 + 0x8u); UPD(0x0C0520C4u, 2);  /* 0C0520C2 mov.l @(disp,Rm),Rn */
	r6 = 0x6u;  /* 0C0520C4 mov #imm,Rn */
	IF(0x0C0520C6u); ARG0(0x483Du); { s32 s_ = (s32)r3; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0520C6 shld Rm,Rn */
	r12 = 0xC05E330u; UPD(0x0C0520CAu, 3);  /* 0C0520C8 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0520CA add Rm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0520CEu, 2);  /* 0C0520CC mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C0520D0u, 1);  /* 0C0520CE mov.l @(disp,pc),Rn */
	IF(0x0C0520D0u); { u32 t_ = r12; PR = 0x0C0520D4u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C0520D4u); }  /* 0C0520D0 jsr @Rn */
L_0C0520D4: BLKS(0x0C0520D4u);
	r11 = R32(r14 + 0x4u); UPD(0x0C0520D6u, 1);  /* 0C0520D4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r11 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C051EE6u, 3); goto L_0C051EE6; }  /* 0C0520D6 bra */
L_0C0520E0: BLKS(0x0C0520E0u);
	r3 = 0xC050CD0u; UPD(0x0C0520E2u, 1);  /* 0C0520E0 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0520E2 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C0520E6u, 2);  /* 0C0520E4 mov.l @(disp,pc),Rn */
	r4 = 0xC160AA4u; UPD(0x0C0520E8u, 1);  /* 0C0520E6 mov.l @(disp,pc),Rn */
	IF(0x0C0520E8u); { u32 t_ = r3; PR = 0x0C0520ECu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0520ECu); }  /* 0C0520E8 jsr @Rn */
L_0C0520EC: BLKS(0x0C0520ECu);
	r12 = R32(r14 + 0x4u); UPD(0x0C0520EEu, 1);  /* 0C0520EC mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0520EE mov Rm,Rn */
	r12 += 0x21u;  /* 0C0520F0 add #imm,Rn */
	r10 = 0xC050A80u; UPD(0x0C0520F4u, 3);  /* 0C0520F2 mov.l @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C0520F4 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C0520F8u, 2);  /* 0C0520F6 mov.b @Rm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C0520FAu, 1);  /* 0C0520F8 mov.l @(disp,pc),Rn */
	IF(0x0C0520FAu); { u32 t_ = r10; PR = 0x0C0520FEu; r4 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0520FEu); }  /* 0C0520FA jsr @Rn */
L_0C0520FE: BLKS(0x0C0520FEu);
	r4 = 0xC160AE4u; UPD(0x0C052100u, 1);  /* 0C0520FE mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C052100 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C052104u, 2);  /* 0C052102 mov.l @(disp,pc),Rn */
	IF(0x0C052104u); { u32 t_ = r8; PR = 0x0C052108u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052108u); }  /* 0C052104 jsr @Rn */
L_0C052108: BLKS(0x0C052108u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C05210Au, 1);  /* 0C052108 mov.b @Rm,Rn */
	r5 = r9;  /* 0C05210A mov Rm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C05210Eu, 2);  /* 0C05210C mov.l @(disp,pc),Rn */
	IF(0x0C05210Eu); { u32 t_ = r10; PR = 0x0C052112u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C052112u); }  /* 0C05210E jsr @Rn */
L_0C052112: BLKS(0x0C052112u);
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C052114u, 1);  /* 0C052112 mov.b @Rm,Rn */
	r10 = r13;  /* 0C052114 mov Rm,Rn */
	r10 += 0xCu;  /* 0C052116 add #imm,Rn */
	r4 = 0xC160ABCu; UPD(0x0C05211Au, 3);  /* 0C052118 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C05211A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05211Eu, 2);  /* 0C05211C mov.l @(disp,pc),Rn */
	IF(0x0C05211Eu); { u32 t_ = r11; PR = 0x0C052122u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052122u); }  /* 0C05211E jsr @Rn */
L_0C052122: BLKS(0x0C052122u);
	r12 = 0xC050CD0u; UPD(0x0C052124u, 1);  /* 0C052122 mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C052124 mov Rm,Rn */
	r11 += 0xBu;  /* 0C052126 add #imm,Rn */
	r4 = 0xC160AC4u; UPD(0x0C05212Au, 3);  /* 0C052128 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C05212A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05212Eu, 2);  /* 0C05212C mov.l @(disp,pc),Rn */
	IF(0x0C05212Eu); { u32 t_ = r12; PR = 0x0C052132u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052132u); }  /* 0C05212E jsr @Rn */
L_0C052132: BLKS(0x0C052132u);
	r1 = 0xC050CD0u; UPD(0x0C052134u, 1);  /* 0C052132 mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C052134 mov Rm,Rn */
	r12 += 0xAu;  /* 0C052136 add #imm,Rn */
	r4 = 0xC160AACu; UPD(0x0C05213Au, 3);  /* 0C052138 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C05213A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05213Eu, 2);  /* 0C05213C mov.l @(disp,pc),Rn */
	IF(0x0C05213Eu); { u32 t_ = r1; PR = 0x0C052142u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052142u); }  /* 0C05213E jsr @Rn */
L_0C052142: BLKS(0x0C052142u);
	r2 = 0xC050CD0u; UPD(0x0C052144u, 1);  /* 0C052142 mov.l @(disp,pc),Rn */
	r3 = r13;  /* 0C052144 mov Rm,Rn */
	r3 += 0x9u;  /* 0C052146 add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05214Au, 3);  /* 0C052148 mov.l @(disp,pc),Rn */
	r5 = r3;  /* 0C05214A mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C05214Eu, 2);  /* 0C05214C mov.l Rm,@(disp,Rn) */
	r4 = 0xC160AB4u; UPD(0x0C052150u, 1);  /* 0C05214E mov.l @(disp,pc),Rn */
	IF(0x0C052150u); { u32 t_ = r2; PR = 0x0C052154u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052154u); }  /* 0C052150 jsr @Rn */
L_0C052154: BLKS(0x0C052154u);
	r7 = R32(r14); UPD(0x0C052156u, 1);  /* 0C052154 mov.l @Rm,Rn */
	r5 = r10;  /* 0C052156 mov Rm,Rn */
	r8 = 0xA0u; UPD(0x0C05215Au, 2);  /* 0C052158 mov.w @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C05215A mov #imm,Rn */
	IF(0x0C05215Cu); MACL = r7 * r8;  /* 0C05215C mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C052160u, 4);  /* 0C05215E mov.l @(disp,pc),Rn */
	IF(0x0C052160u); r8 = MACL;  /* 0C052160 sts macl,Rn */
	r8 += r9;  /* 0C052162 add Rm,Rn */
	r9 = 0xC0509F0u; UPD(0x0C052166u, 3);  /* 0C052164 mov.l @(disp,pc),Rn */
	IF(0x0C052166u); r8 <<= 2;  /* 0C052166 shll2 Rn */
	r0 = 0xA4u; UPD(0x0C05216Au, 2);  /* 0C052168 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C05216A add Rm,Rn */
	IF(0x0C05216Cu); { u32 t_ = r9; PR = 0x0C052170u; IF(0x0C05216Eu); r4 = (u32)(s32)(s16)R16(r0 + r8); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0509F0, 0x0C0509F0u, 0x0C052170u); }  /* 0C05216C jsr @Rn */
L_0C052170: BLKS(0x0C052170u);
	r0 = 0xE4u; UPD(0x0C052172u, 1);  /* 0C052170 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C052172 mov Rm,Rn */
	IF(0x0C052174u); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C052176u, 2);  /* 0C052174 mov.w @(r0,Rm),Rn */
	IF(0x0C052176u); { u32 t_ = r9; PR = 0x0C05217Au; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509F0, 0x0C0509F0u, 0x0C05217Au); }  /* 0C052176 jsr @Rn */
L_0C05217A: BLKS(0x0C05217Au);
	r0 = R32(r8 + 0x24u); UPD(0x0C05217Cu, 1);  /* 0C05217A mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C05217C mov Rm,Rn */
	r1 = (r0 >> 16) | (r0 << 16);  /* 0C05217E swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r1;  /* 0C052180 exts.w Rm,Rn */
	r6 = 0x6u;  /* 0C052182 mov #imm,Rn */
	IF(0x0C052184u); { u32 t_ = r9; PR = 0x0C052188u; r8 += 0x64u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C0509F0, 0x0C0509F0u, 0x0C052188u); }  /* 0C052184 jsr @Rn */
L_0C052188: BLKS(0x0C052188u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C05218Au, 1);  /* 0C052188 mov.w @Rm,Rn */
	r6 = 0x6u;  /* 0C05218A mov #imm,Rn */
	IF(0x0C05218Cu); { u32 t_ = r9; PR = 0x0C052190u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0509F0, 0x0C0509F0u, 0x0C052190u); }  /* 0C05218C jsr @Rn */
L_0C052190: BLKS(0x0C052190u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C051EC2u, 3); goto L_0C051EC2; }  /* 0C052190 bra */
L_0C0521A0: BLKS(0x0C0521A0u);
	r11 = 0x0u;  /* 0C0521A0 mov #imm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C0521A4u, 2);  /* 0C0521A2 mov.l @(disp,Rm),Rn */
	r4 += 0x5u;  /* 0C0521A4 add #imm,Rn */
	r9 = R32(r14 + 0x14u); UPD(0x0C0521A8u, 2);  /* 0C0521A6 mov.l @(disp,Rm),Rn */
	r12 += 0x5u;  /* 0C0521A8 add #imm,Rn */
	r9 += 0x5u;  /* 0C0521AA add #imm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C0521AEu, 3);  /* 0C0521AC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C0521B0u, 1);  /* 0C0521AE mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C051EA0u, 3); goto L_0C051EA0; }  /* 0C0521B0 bra */
L_0C0521C0: BLKS(0x0C0521C0u);
	r12 = 0xC050CD0u; UPD(0x0C0521C2u, 1);  /* 0C0521C0 mov.l @(disp,pc),Rn */
	r8 -= r11;  /* 0C0521C2 sub Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0521C6u, 2);  /* 0C0521C4 mov.l @(disp,Rm),Rn */
	r8 += 0x10u;  /* 0C0521C6 add #imm,Rn */
	r5 = r8;  /* 0C0521C8 mov Rm,Rn */
	r4 = 0xC160AF4u; UPD(0x0C0521CCu, 3);  /* 0C0521CA mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C0521CEu, 1);  /* 0C0521CC mov.l @(disp,pc),Rn */
	IF(0x0C0521CEu); { u32 t_ = r12; PR = 0x0C0521D2u; r6 += 0x9u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0521D2u); }  /* 0C0521CE jsr @Rn */
L_0C0521D2: BLKS(0x0C0521D2u);
	r5 = r8;  /* 0C0521D2 mov Rm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C0521D6u, 2);  /* 0C0521D4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0509B0u; UPD(0x0C0521D8u, 1);  /* 0C0521D6 mov.l @(disp,pc),Rn */
	r12 += 0x5u;  /* 0C0521D8 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0521DCu, 2);  /* 0C0521DA mov.w @Rm,Rn */
	IF(0x0C0521DCu); { u32 t_ = r8; PR = 0x0C0521E0u; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C0521E0u); }  /* 0C0521DC jsr @Rn */
L_0C0521E0: BLKS(0x0C0521E0u);
	r2 = r11;  /* 0C0521E0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0521E2 add #imm,Rn */
	r11 = (u32)(s32)(s8)r2;  /* 0C0521E4 exts.b Rm,Rn */
	r0 = r11;  /* 0C0521E6 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C0521E8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C052270u, 8); goto L_0C052270; } UPD(0x0C0521EEu, 1); goto L_0C0521EE; }  /* 0C0521EA bt/s */
L_0C0521EE: BLKS(0x0C0521EEu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0521F0u, 1);  /* 0C0521EE mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C0521F0 mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0521F4u, 2);  /* 0C0521F2 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0521F4 add #imm,Rn */
	T = r0 == r6;  /* 0C0521F6 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C052250u, 5); goto L_0C052250; } goto L_0C0521FC; }  /* 0C0521F8 bt/s */
L_0C0521FC: BLKS(0x0C0521FCu);
	r8 = r6;  /* 0C0521FC mov Rm,Rn */
	UPD(0x0C0521FEu, 2);
L_0C0521FE: BLKS(0x0C0521FEu);
	r8 += r10;  /* 0C0521FE add Rm,Rn */
	r12 = 0xC0509B0u; UPD(0x0C052202u, 2);  /* 0C052200 mov.l @(disp,pc),Rn */
	r10 = r11;  /* 0C052202 mov Rm,Rn */
	r5 = r13;  /* 0C052204 mov Rm,Rn */
	r5 -= r11;  /* 0C052206 sub Rm,Rn */
	r10 += 0x1u;  /* 0C052208 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C05220Cu, 5);  /* 0C05220A mov.w @Rm,Rn */
	r5 += 0x10u;  /* 0C05220C add #imm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C052210u, 2);  /* 0C05220E mov.l @(disp,Rm),Rn */
	IF(0x0C052210u); { u32 t_ = r12; PR = 0x0C052214u; r11 = (u32)(s32)(s8)r10; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C052214u); }  /* 0C052210 jsr @Rn */
L_0C052214: BLKS(0x0C052214u);
	r0 = r11;  /* 0C052214 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C052216 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C052230u, 5); goto L_0C052230; } UPD(0x0C05221Cu, 1); goto L_0C05221C; }  /* 0C052218 bt/s */
L_0C05221C: BLKS(0x0C05221Cu);
	r10 = r8;  /* 0C05221C mov Rm,Rn */
	{ r10 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C051EA0u, 4); goto L_0C051EA0; }  /* 0C05221E bra */
L_0C052230: BLKS(0x0C052230u);
	r11 = 0x0u;  /* 0C052230 mov #imm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C052234u, 2);  /* 0C052232 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C052234 add #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C052238u, 2);  /* 0C052236 mov.l @(disp,Rm),Rn */
	r3 += 0x5u;  /* 0C052238 add #imm,Rn */
	r7 += 0x5u;  /* 0C05223A add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C05223Eu, 3);  /* 0C05223C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r3); UPD(0x0C052240u, 1);  /* 0C05223E mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C05221Cu, 3); goto L_0C05221C; }  /* 0C052240 bra */
L_0C052250: BLKS(0x0C052250u);
	r3 = r10;  /* 0C052250 mov Rm,Rn */
	IF(0x0C052252u); ;  /* 0C052252 nop */
	UPD(0x0C052254u, 2);
L_0C052254: BLKS(0x0C052254u);
	SPIN_SAVE(0C052254);
	r3 += 0x2u;  /* 0C052254 add #imm,Rn */
	r2 = r3;  /* 0C052256 mov Rm,Rn */
	r8 = r7;  /* 0C052258 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)RS16(0C052254, r2); r2 += 2; r4 = v_; } UPD(0x0C05225Cu, 4);  /* 0C05225A mov.w @Rm+,Rn */
	r8 += 0x1u;  /* 0C05225C add #imm,Rn */
	r7 = (u32)(s32)(s16)r8;  /* 0C05225E exts.w Rm,Rn */
	r9 = (u32)(s32)(s16)RS16(0C052254, r2); UPD(0x0C052262u, 3);  /* 0C052260 mov.w @Rm,Rn */
	r6 = r7;  /* 0C052262 mov Rm,Rn */
	r4 += 0x1u;  /* 0C052264 add #imm,Rn */
	T = r4 == r9;  /* 0C052266 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 += r6; /* slot add Rm,Rn */ if (c_) { SPIN_FFD(0C052254, 13); UPD(0x0C052254u, 6); goto L_0C052254; } goto L_0C05226C; }  /* 0C052268 bt/s */
L_0C05226C: BLKS(0x0C05226Cu);
	{ r8 = r6; /* slot mov Rm,Rn */ UPD(0x0C0521FEu, 4); goto L_0C0521FE; }  /* 0C05226C bra */
L_0C052270: BLKS(0x0C052270u);
	r11 = 0x0u;  /* 0C052270 mov #imm,Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C052274u, 2);  /* 0C052272 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C052274 add #imm,Rn */
	r1 += 0x5u;  /* 0C052276 add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C05227Au, 3);  /* 0C052278 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C05227Cu, 1);  /* 0C05227A mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0521EEu, 3); goto L_0C0521EE; }  /* 0C05227C bra */
}

/* FUN_0c0522d0 */
void f_0C0522D0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0529DC);
L_0C0522D0: BLKS(0x0C0522D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0522D2u, 1);  /* 0C0522D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0522D4u, 1);  /* 0C0522D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0522D6u, 1);  /* 0C0522D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0522D8u, 1);  /* 0C0522D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0522DAu, 1);  /* 0C0522D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0522DCu, 1);  /* 0C0522DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0522DEu, 1);  /* 0C0522DC mov.l Rm,@-Rn */
	r12 = 0xC21F5EAu; UPD(0x0C0522E0u, 1);  /* 0C0522DE mov.l @(disp,pc),Rn */
	IF(0x0C0522E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0522E2u, 1);  /* 0C0522E0 sts.l pr,@-Rn */
	r0 = r12;  /* 0C0522E2 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0522E6u, 2);  /* 0C0522E4 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0522E6 mov Rm,Rn */
	r13 = 0xC2839E0u; UPD(0x0C0522EAu, 2);  /* 0C0522E8 mov.l @(disp,pc),Rn */
	r6 = 0x80u; UPD(0x0C0522ECu, 1);  /* 0C0522EA mov.w @(disp,pc),Rn */
	W8(r13, r1); UPD(0x0C0522EEu, 1);  /* 0C0522EC mov.b Rm,@Rn */
	r10 = 0xC2839E1u; UPD(0x0C0522F0u, 1);  /* 0C0522EE mov.l @(disp,pc),Rn */
	IF(0x0C0522F0u); r11 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0522F2u, 1);  /* 0C0522F0 mov.b @(r0,Rm),Rn */
	r4 = 0x100u; UPD(0x0C0522F4u, 1);  /* 0C0522F2 mov.w @(disp,pc),Rn */
	W8(r10, r11); UPD(0x0C0522F6u, 1);  /* 0C0522F4 mov.b Rm,@Rn */
	r3 = 0xC2839E2u; UPD(0x0C0522F8u, 1);  /* 0C0522F6 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0522F8 mov #imm,Rn */
	IF(0x0C0522FAu); r9 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0522FCu, 2);  /* 0C0522FA mov.b @(r0,Rm),Rn */
	r7 = 0xC2177F8u; UPD(0x0C0522FEu, 1);  /* 0C0522FC mov.l @(disp,pc),Rn */
	W8(r3, r9); UPD(0x0C052300u, 1);  /* 0C0522FE mov.b Rm,@Rn */
	r0 = 0xC283C60u; UPD(0x0C052302u, 1);  /* 0C052300 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C052304u, 1);  /* 0C052302 mov.b @Rm,Rn */
	W8(r0, r8); UPD(0x0C052306u, 1);  /* 0C052304 mov.b Rm,@Rn */
	r0 = r7;  /* 0C052306 mov Rm,Rn */
	IF(0x0C052308u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05230Au, 2);  /* 0C052308 mov.b @(r0,Rm),Rn */
	r2 = 0xC283C61u; UPD(0x0C05230Cu, 1);  /* 0C05230A mov.l @(disp,pc),Rn */
	W8(r2, r5); UPD(0x0C05230Eu, 1);  /* 0C05230C mov.b Rm,@Rn */
	IF(0x0C05230Eu); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C052310u, 1);  /* 0C05230E mov.b @(r0,Rm),Rn */
	r0 = 0xC283C62u; UPD(0x0C052312u, 1);  /* 0C052310 mov.l @(disp,pc),Rn */
	r11 = 0xC283794u; UPD(0x0C052314u, 1);  /* 0C052312 mov.l @(disp,pc),Rn */
	r12 = 0x280u; UPD(0x0C052316u, 1);  /* 0C052314 mov.w @(disp,pc),Rn */
	W8(r0, r1); UPD(0x0C052318u, 1);  /* 0C052316 mov.b Rm,@Rn */
L_0C052318: BLKS(0x0C052318u);
	IF(0x0C052318u); MACL = r10 * r12;  /* 0C052318 mul.l Rm,Rn */
	r5 = 0x224u; UPD(0x0C05231Cu, 3);  /* 0C05231A mov.w @(disp,pc),Rn */
	IF(0x0C05231Cu); r7 = MACL;  /* 0C05231C sts macl,Rn */
	r7 += r11;  /* 0C05231E add Rm,Rn */
	r0 = r7;  /* 0C052320 mov Rm,Rn */
	r6 = 0x24Cu; UPD(0x0C052324u, 4);  /* 0C052322 mov.w @(disp,pc),Rn */
	IF(0x0C052324u); r9 = R32(r0 + r5); UPD(0x0C052326u, 1);  /* 0C052324 mov.l @(r0,Rm),Rn */
	r6 += r7;  /* 0C052326 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05232Au, 2);  /* 0C052328 mov.b @Rm,Rn */
	r0 &= 0x70u;  /* 0C05232A and #imm,r0 */
	T = r0 == 0x20u;  /* 0C05232C cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C052330u); r2 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C052336u, 5); goto L_0C052336; } goto L_0C052332; }  /* 0C05232E bf/s */
L_0C052332: BLKS(0x0C052332u);
	{ r7 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C052A40u, 4); goto L_0C052A40; }  /* 0C052332 bra */
L_0C052336: BLKS(0x0C052336u);
	r4 = 0x20u;  /* 0C052336 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C052338 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x50u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C052342u, 5); goto L_0C052342; } goto L_0C05233E; }  /* 0C05233A bf/s */
L_0C05233E: BLKS(0x0C05233Eu);
	{ IF(0x0C052340u); ; /* slot nop */ UPD(0x0C052740u, 4); goto L_0C052740; }  /* 0C05233E bra */
L_0C052342: BLKS(0x0C052342u);
	T = (r0 & r0) == 0;  /* 0C052342 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x10u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C05234Cu, 4); goto L_0C05234C; } goto L_0C052348; }  /* 0C052344 bf/s */
L_0C052348: BLKS(0x0C052348u);
	{ r0 = R32(r7 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C052600u, 4); goto L_0C052600; }  /* 0C052348 bra */
L_0C05234C: BLKS(0x0C05234Cu);
	r8 = r10;  /* 0C05234C mov Rm,Rn */
	{ u32 c_ = T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052370u, 4); goto L_0C052370; } goto L_0C052352; }  /* 0C05234E bt/s */
L_0C052352: BLKS(0x0C052352u);
	r13 = 0x1u;  /* 0C052352 mov #imm,Rn */
	UPD(0x0C052354u, 2);
L_0C052354: BLKS(0x0C052354u);
	T = (s32)r8 > (s32)r13;  /* 0C052354 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052318u, 4); goto L_0C052318; } goto L_0C05235A; }  /* 0C052356 bf/s */
L_0C05235A: BLKS(0x0C05235Au);
	r15 = r14;  /* 0C05235A mov Rm,Rn */
	IF(0x0C05235Cu); PR = R32(r15); r15 += 4; UPD(0x0C05235Eu, 3);  /* 0C05235C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C052360u, 1);  /* 0C05235E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C052362u, 1);  /* 0C052360 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C052364u, 1);  /* 0C052362 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C052366u, 1);  /* 0C052364 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C052368u, 1);  /* 0C052366 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05236Au, 1);  /* 0C052368 mov.l @Rm+,Rn */
	IF(0x0C05236Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05236A rts */
L_0C052370: BLKS(0x0C052370u);
	r6 += 0x2u;  /* 0C052370 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C052374u, 2);  /* 0C052372 mov.b @Rm,Rn */
	r0 &= 0x8u;  /* 0C052374 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052376 tst Rm,Rn */
	if (!T) { UPD(0x0C052380u, 5); goto L_0C052380; }  /* 0C052378 bf */
L_0C05237A: BLKS(0x0C05237Au);
	r8 = r10;  /* 0C05237A mov Rm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0523C8u, 4); goto L_0C0523C8; }  /* 0C05237C bra */
L_0C052380: BLKS(0x0C052380u);
	r0 = 0xC1D93E4u; UPD(0x0C052382u, 1);  /* 0C052380 mov.l @(disp,pc),Rn */
	T = r9 == r0;  /* 0C052382 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05238Cu, 4); goto L_0C05238C; } goto L_0C052388; }  /* 0C052384 bf/s */
L_0C052388: BLKS(0x0C052388u);
	{ IF(0x0C05238Au); ; /* slot nop */ UPD(0x0C052580u, 4); goto L_0C052580; }  /* 0C052388 bra */
L_0C05238C: BLKS(0x0C05238Cu);
	r13 = 0xC052B50u; UPD(0x0C05238Eu, 1);  /* 0C05238C mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C05238E mov Rm,Rn */
	r8 += 0x1u;  /* 0C052390 add #imm,Rn */
	UPD(0x0C052392u, 2);
L_0C052392: BLKS(0x0C052392u);
	r0 = 0x280u; UPD(0x0C052394u, 1);  /* 0C052392 mov.w @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C052394 mov #imm,Rn */
	IF(0x0C052396u); MACL = r10 * r0;  /* 0C052396 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C05239Au, 4);  /* 0C052398 mov.l @(disp,pc),Rn */
	IF(0x0C05239Au); r2 = MACL;  /* 0C05239A sts macl,Rn */
	r2 += r7;  /* 0C05239C add Rm,Rn */
	r3 = R32(r2 + 0x4u); UPD(0x0C0523A0u, 3);  /* 0C05239E mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0523A0 mov Rm,Rn */
	IF(0x0C0523A2u); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0523A2 shld Rm,Rn */
	r4 += r9;  /* 0C0523A4 add Rm,Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0523A8u, 4);  /* 0C0523A6 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0523A8 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0523B2u, 4); goto L_0C0523B2; } goto L_0C0523AE; }  /* 0C0523AA bf/s */
L_0C0523AE: BLKS(0x0C0523AEu);
	{ W32(r2 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C052570u, 4); goto L_0C052570; }  /* 0C0523AE bra */
L_0C0523B2: BLKS(0x0C0523B2u);
	W32(r2 + 0x4u, r3); UPD(0x0C0523B4u, 1);  /* 0C0523B2 mov.l Rm,@(disp,Rn) */
L_0C0523B4: BLKS(0x0C0523B4u);
	r6 = 0x280u; UPD(0x0C0523B6u, 1);  /* 0C0523B4 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0523B6 mov #imm,Rn */
	IF(0x0C0523B8u); MACL = r10 * r6;  /* 0C0523B8 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C0523BCu, 4);  /* 0C0523BA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C0523BC exts.w Rm,Rn */
	IF(0x0C0523BEu); r3 = MACL;  /* 0C0523BE sts macl,Rn */
	r3 += r2;  /* 0C0523C0 add Rm,Rn */
	W32(r3 + 0xCu, r5); UPD(0x0C0523C4u, 4);  /* 0C0523C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0523C4u); { u32 t_ = r13; PR = 0x0C0523C8u; W32(r3 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C0523C8u); }  /* 0C0523C4 jsr @Rn */
L_0C0523C8: BLKS(0x0C0523C8u);
	r0 = 0x280u; UPD(0x0C0523CAu, 1);  /* 0C0523C8 mov.w @(disp,pc),Rn */
	IF(0x0C0523CAu); MACL = r10 * r0;  /* 0C0523CA mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0523CEu, 3);  /* 0C0523CC mov.l @(disp,pc),Rn */
	IF(0x0C0523CEu); r3 = MACL;  /* 0C0523CE sts macl,Rn */
	r3 += r7;  /* 0C0523D0 add Rm,Rn */
	r4 = 0x24Eu; UPD(0x0C0523D4u, 3);  /* 0C0523D2 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0523D4 mov Rm,Rn */
	IF(0x0C0523D6u); r13 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0523D8u, 2);  /* 0C0523D6 mov.b @(r0,Rm),Rn */
	r0 = r13;  /* 0C0523D8 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C0523DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0523DC tst Rm,Rn */
	if (T) { UPD(0x0C05241Eu, 6); goto L_0C05241E; }  /* 0C0523DE bt */
L_0C0523E0: BLKS(0x0C0523E0u);
	r0 = 0x224u; UPD(0x0C0523E2u, 1);  /* 0C0523E0 mov.w @(disp,pc),Rn */
	r5 = 0xC1D93E4u; UPD(0x0C0523E4u, 1);  /* 0C0523E2 mov.l @(disp,pc),Rn */
	IF(0x0C0523E4u); r1 = R32(r0 + r3); UPD(0x0C0523E6u, 1);  /* 0C0523E4 mov.l @(r0,Rm),Rn */
	T = r1 == r5;  /* 0C0523E6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0523F0u, 4); goto L_0C0523F0; } goto L_0C0523EC; }  /* 0C0523E8 bf/s */
L_0C0523EC: BLKS(0x0C0523ECu);
	{ IF(0x0C0523EEu); ; /* slot nop */ UPD(0x0C052510u, 4); goto L_0C052510; }  /* 0C0523EC bra */
L_0C0523F0: BLKS(0x0C0523F0u);
	r13 = 0xC052B50u; UPD(0x0C0523F2u, 1);  /* 0C0523F0 mov.l @(disp,pc),Rn */
L_0C0523F2: BLKS(0x0C0523F2u);
	r0 = 0x280u; UPD(0x0C0523F4u, 1);  /* 0C0523F2 mov.w @(disp,pc),Rn */
	IF(0x0C0523F4u); MACL = r10 * r0;  /* 0C0523F4 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0523F8u, 3);  /* 0C0523F6 mov.l @(disp,pc),Rn */
	IF(0x0C0523F8u); r2 = MACL;  /* 0C0523F8 sts macl,Rn */
	r2 += r7;  /* 0C0523FA add Rm,Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C0523FEu, 3);  /* 0C0523FC mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0523FE tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052408u, 4); goto L_0C052408; } goto L_0C052404; }  /* 0C052400 bf/s */
L_0C052404: BLKS(0x0C052404u);
	{ r3 = r2; /* slot mov Rm,Rn */ UPD(0x0C0524F0u, 4); goto L_0C0524F0; }  /* 0C052404 bra */
L_0C052408: BLKS(0x0C052408u);
	W32(r2 + 0x4u, r1); UPD(0x0C05240Au, 1);  /* 0C052408 mov.l Rm,@(disp,Rn) */
L_0C05240A: BLKS(0x0C05240Au);
	r6 = 0x280u; UPD(0x0C05240Cu, 1);  /* 0C05240A mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C05240C mov #imm,Rn */
	IF(0x0C05240Eu); MACL = r10 * r6;  /* 0C05240E mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C052412u, 4);  /* 0C052410 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C052412 exts.w Rm,Rn */
	IF(0x0C052414u); r9 = MACL;  /* 0C052414 sts macl,Rn */
	r9 += r2;  /* 0C052416 add Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C05241Au, 4);  /* 0C052418 mov.l Rm,@(disp,Rn) */
	IF(0x0C05241Au); { u32 t_ = r13; PR = 0x0C05241Eu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C05241Eu); }  /* 0C05241A jsr @Rn */
L_0C05241E: BLKS(0x0C05241Eu);
	r7 = 0x280u; UPD(0x0C052420u, 1);  /* 0C05241E mov.w @(disp,pc),Rn */
	IF(0x0C052420u); MACL = r10 * r7;  /* 0C052420 mul.l Rm,Rn */
	r13 = 0xC283794u; UPD(0x0C052424u, 3);  /* 0C052422 mov.l @(disp,pc),Rn */
	IF(0x0C052424u); r2 = MACL;  /* 0C052424 sts macl,Rn */
	r2 += r13;  /* 0C052426 add Rm,Rn */
	r2 += 0x20u;  /* 0C052428 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C05242Cu, 4);  /* 0C05242A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05242C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05247Eu, 4); goto L_0C05247E; } goto L_0C052432; }  /* 0C05242E bt/s */
L_0C052432: BLKS(0x0C052432u);
	r4 = 0x24Eu; UPD(0x0C052434u, 2);  /* 0C052432 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C052434 mov Rm,Rn */
	IF(0x0C052436u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C052438u, 2);  /* 0C052436 mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C052438 mov Rm,Rn */
	r0 &= 0x2u;  /* 0C05243A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05243C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x21u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052454u, 6); goto L_0C052454; } goto L_0C052442; }  /* 0C05243E bt/s */
L_0C052442: BLKS(0x0C052442u);
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C052444u, 2);  /* 0C052442 mov.b @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C052444 add #imm,Rn */
	r0 = (u32)(s32)(s8)r7;  /* 0C052446 exts.b Rm,Rn */
	T = (s32)r0 >= (s32)r3;  /* 0C052448 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C052452u, 6); goto L_0C052452; } goto L_0C05244E; }  /* 0C05244A bt/s */
L_0C05244E: BLKS(0x0C05244Eu);
	r1 = r7;  /* 0C05244E mov Rm,Rn */
	r1 += 0x1u;  /* 0C052450 add #imm,Rn */
	UPD(0x0C052452u, 3);
L_0C052452: BLKS(0x0C052452u);
	W8(r2, r1); UPD(0x0C052454u, 1);  /* 0C052452 mov.b Rm,@Rn */
L_0C052454: BLKS(0x0C052454u);
	r2 = 0x280u; UPD(0x0C052456u, 1);  /* 0C052454 mov.w @(disp,pc),Rn */
	IF(0x0C052456u); MACL = r10 * r2;  /* 0C052456 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C05245Au, 3);  /* 0C052458 mov.l @(disp,pc),Rn */
	IF(0x0C05245Au); r2 = MACL;  /* 0C05245A sts macl,Rn */
	r2 += r6;  /* 0C05245C add Rm,Rn */
	r3 = 0x24Eu; UPD(0x0C052460u, 3);  /* 0C05245E mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C052460 mov Rm,Rn */
	IF(0x0C052462u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C052464u, 2);  /* 0C052462 mov.b @(r0,Rm),Rn */
	r0 = r9;  /* 0C052464 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C052466 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052468 tst Rm,Rn */
	if (T) { UPD(0x0C05247Eu, 6); goto L_0C05247E; }  /* 0C05246A bt */
L_0C05246C: BLKS(0x0C05246Cu);
	r3 = r2;  /* 0C05246C mov Rm,Rn */
	r2 += 0x21u;  /* 0C05246E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C052472u, 3);  /* 0C052470 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C052472 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05247Au, 4); goto L_0C05247A; } goto L_0C052478; }  /* 0C052474 bf/s */
L_0C052478: BLKS(0x0C052478u);
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C05247Au, 2);  /* 0C052478 mov.b @Rm,Rn */
L_0C05247A: BLKS(0x0C05247Au);
	r1 += 0xFFFFFFFFu;  /* 0C05247A add #imm,Rn */
	W8(r2, r1); UPD(0x0C05247Eu, 2);  /* 0C05247C mov.b Rm,@Rn */
L_0C05247E: BLKS(0x0C05247Eu);
	r5 = 0x280u; UPD(0x0C052480u, 1);  /* 0C05247E mov.w @(disp,pc),Rn */
	IF(0x0C052480u); MACL = r10 * r5;  /* 0C052480 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C052484u, 3);  /* 0C052482 mov.l @(disp,pc),Rn */
	IF(0x0C052484u); r0 = MACL;  /* 0C052484 sts macl,Rn */
	r13 = 0x24Eu; UPD(0x0C052488u, 2);  /* 0C052486 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C052488 add Rm,Rn */
	IF(0x0C05248Au); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C05248Cu, 2);  /* 0C05248A mov.b @(r0,Rm),Rn */
	IF(0x0C05248Cu); T = (s32)r10 >= 0;  /* 0C05248C cmp/pz Rn */
	if (T) { UPD(0x0C0524A4u, 4); goto L_0C0524A4; }  /* 0C05248E bt */
L_0C052490: BLKS(0x0C052490u);
	r2 = 0x268u; UPD(0x0C052492u, 1);  /* 0C052490 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C052492 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C052496u, 2);  /* 0C052494 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C052496 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C052498 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C05249A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0524A4u, 6); goto L_0C0524A4; } UPD(0x0C0524A0u, 1); goto L_0C0524A0; }  /* 0C05249C bf/s */
L_0C0524A0: BLKS(0x0C0524A0u);
	r4 = 0x0u;  /* 0C0524A0 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0524A4u, 2);  /* 0C0524A2 mov.b Rm,@Rn */
L_0C0524A4: BLKS(0x0C0524A4u);
	{ r13 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C052354u, 3); goto L_0C052354; }  /* 0C0524A4 bra */
L_0C0524F0: BLKS(0x0C0524F0u);
	r2 = R32(r3 + 0x4u); UPD(0x0C0524F2u, 1);  /* 0C0524F0 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0524F2 mov #imm,Rn */
	r4 = r2;  /* 0C0524F4 mov Rm,Rn */
	IF(0x0C0524F6u); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0524F6 shld Rm,Rn */
	r4 += r9;  /* 0C0524F8 add Rm,Rn */
	r5 = R32(r4 + 0x8u); UPD(0x0C0524FCu, 5);  /* 0C0524FA mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0524FC tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052506u, 4); goto L_0C052506; } goto L_0C052502; }  /* 0C0524FE bf/s */
L_0C052502: BLKS(0x0C052502u);
	{ r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C05240Au, 4); goto L_0C05240A; }  /* 0C052502 bra */
L_0C052506: BLKS(0x0C052506u);
	{ W32(r3 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0524F0u, 3); goto L_0C0524F0; }  /* 0C052506 bra */
L_0C052510: BLKS(0x0C052510u);
	r7 = 0xC160B44u; UPD(0x0C052512u, 1);  /* 0C052510 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C052514u, 1);  /* 0C052512 mov.w @Rm,Rn */
	r5 = 0x400u; UPD(0x0C052516u, 1);  /* 0C052514 mov.w @(disp,pc),Rn */
	T = r5 == r1;  /* 0C052516 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C05252Eu, 4); goto L_0C05252E; }  /* 0C052518 bt */
L_0C05251A: BLKS(0x0C05251Au);
	r2 = R32(r3 + 0x4u); UPD(0x0C05251Cu, 1);  /* 0C05251A mov.l @(disp,Rm),Rn */
	r3 = r5;  /* 0C05251C mov Rm,Rn */
	r13 = (u32)(s32)(s16)r1;  /* 0C05251E exts.w Rm,Rn */
	UPD(0x0C052520u, 2);
L_0C052520: BLKS(0x0C052520u);
	T = r2 == r13;  /* 0C052520 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052560u, 4); goto L_0C052560; } UPD(0x0C052526u, 1); goto L_0C052526; }  /* 0C052522 bt/s */
L_0C052526: BLKS(0x0C052526u);
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C052528u, 1);  /* 0C052526 mov.w @Rm,Rn */
	T = r3 == r1;  /* 0C052528 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C052520u, 4); goto L_0C052520; } UPD(0x0C05252Eu, 1); goto L_0C05252E; }  /* 0C05252A bf/s */
L_0C05252E: BLKS(0x0C05252Eu);
	T = (r6 & r6) == 0;  /* 0C05252E tst Rm,Rn */
	if (T) { UPD(0x0C052536u, 4); goto L_0C052536; }  /* 0C052530 bt */
L_0C052532: BLKS(0x0C052532u);
	{ IF(0x0C052534u); ; /* slot nop */ UPD(0x0C0523F0u, 3); goto L_0C0523F0; }  /* 0C052532 bra */
L_0C052536: BLKS(0x0C052536u);
	r6 = 0x280u; UPD(0x0C052538u, 1);  /* 0C052536 mov.w @(disp,pc),Rn */
	IF(0x0C052538u); MACL = r10 * r6;  /* 0C052538 mul.l Rm,Rn */
	r13 = 0xC0585B0u; UPD(0x0C05253Cu, 3);  /* 0C05253A mov.l @(disp,pc),Rn */
	r3 = 0xC283794u; UPD(0x0C05253Eu, 1);  /* 0C05253C mov.l @(disp,pc),Rn */
	IF(0x0C05253Eu); r2 = MACL;  /* 0C05253E sts macl,Rn */
	r3 += r2;  /* 0C052540 add Rm,Rn */
	IF(0x0C052542u); { u32 t_ = r13; PR = 0x0C052546u; r4 = R32(r3 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0585B0, 0x0C0585B0u, 0x0C052546u); }  /* 0C052542 jsr @Rn */
L_0C052546: BLKS(0x0C052546u);
	r13 = 0xC052B50u; UPD(0x0C052548u, 1);  /* 0C052546 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C052548 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05254A and #imm,r0 */
	IF(0x0C05254Cu); { u32 t_ = r13; PR = 0x0C052550u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C052550u); }  /* 0C05254C jsr @Rn */
L_0C052550: BLKS(0x0C052550u);
	{ IF(0x0C052552u); ; /* slot nop */ UPD(0x0C0523F2u, 3); goto L_0C0523F2; }  /* 0C052550 bra */
L_0C052560: BLKS(0x0C052560u);
	r4 = r6;  /* 0C052560 mov Rm,Rn */
	r4 += 0x1u;  /* 0C052562 add #imm,Rn */
	{ r6 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C052526u, 5); goto L_0C052526; }  /* 0C052564 bra */
L_0C052570: BLKS(0x0C052570u);
	{ IF(0x0C052572u); ; /* slot nop */ UPD(0x0C0523B4u, 3); goto L_0C0523B4; }  /* 0C052570 bra */
L_0C052580: BLKS(0x0C052580u);
	r7 = 0xC160B44u; UPD(0x0C052582u, 1);  /* 0C052580 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C052584u, 1);  /* 0C052582 mov.w @Rm,Rn */
	r5 = 0x400u; UPD(0x0C052586u, 1);  /* 0C052584 mov.w @(disp,pc),Rn */
	T = r5 == r3;  /* 0C052586 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = (r6 & r6) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0525A4u, 4); goto L_0C0525A4; } goto L_0C05258C; }  /* 0C052588 bt/s */
L_0C05258C: BLKS(0x0C05258Cu);
	r8 = 0xC283794u; UPD(0x0C05258Eu, 2);  /* 0C05258C mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C05258E add Rm,Rn */
	r2 = R32(r8 + 0x4u); UPD(0x0C052592u, 2);  /* 0C052590 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C052592 exts.w Rm,Rn */
	UPD(0x0C052594u, 1);
L_0C052594: BLKS(0x0C052594u);
	T = r2 == r13;  /* 0C052594 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0525D0u, 4); goto L_0C0525D0; } UPD(0x0C05259Au, 1); goto L_0C05259A; }  /* 0C052596 bt/s */
L_0C05259A: BLKS(0x0C05259Au);
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C05259Cu, 1);  /* 0C05259A mov.w @Rm,Rn */
	T = r5 == r3;  /* 0C05259C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C052594u, 4); goto L_0C052594; } goto L_0C0525A2; }  /* 0C05259E bf/s */
L_0C0525A2: BLKS(0x0C0525A2u);
	T = (r6 & r6) == 0;  /* 0C0525A2 tst Rm,Rn */
	UPD(0x0C0525A4u, 2);
L_0C0525A4: BLKS(0x0C0525A4u);
	if (T) { UPD(0x0C0525AAu, 3); goto L_0C0525AA; }  /* 0C0525A4 bt */
L_0C0525A6: BLKS(0x0C0525A6u);
	{ IF(0x0C0525A8u); ; /* slot nop */ UPD(0x0C05238Cu, 3); goto L_0C05238C; }  /* 0C0525A6 bra */
L_0C0525AA: BLKS(0x0C0525AAu);
	r6 = 0x280u; UPD(0x0C0525ACu, 1);  /* 0C0525AA mov.w @(disp,pc),Rn */
	IF(0x0C0525ACu); MACL = r10 * r6;  /* 0C0525AC mul.l Rm,Rn */
	r8 = 0xC0585B0u; UPD(0x0C0525B0u, 3);  /* 0C0525AE mov.l @(disp,pc),Rn */
	r5 = 0xC283794u; UPD(0x0C0525B2u, 1);  /* 0C0525B0 mov.l @(disp,pc),Rn */
	IF(0x0C0525B2u); r2 = MACL;  /* 0C0525B2 sts macl,Rn */
	r5 += r2;  /* 0C0525B4 add Rm,Rn */
	IF(0x0C0525B6u); { u32 t_ = r8; PR = 0x0C0525BAu; r4 = R32(r5 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0585B0, 0x0C0585B0u, 0x0C0525BAu); }  /* 0C0525B6 jsr @Rn */
L_0C0525BA: BLKS(0x0C0525BAu);
	r8 = r10;  /* 0C0525BA mov Rm,Rn */
	r8 += 0x1u;  /* 0C0525BC add #imm,Rn */
	r13 = 0xC052B50u; UPD(0x0C0525C0u, 3);  /* 0C0525BE mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C0525C0 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0525C2 and #imm,r0 */
	IF(0x0C0525C4u); { u32 t_ = r13; PR = 0x0C0525C8u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C0525C8u); }  /* 0C0525C4 jsr @Rn */
L_0C0525C8: BLKS(0x0C0525C8u);
	{ IF(0x0C0525CAu); ; /* slot nop */ UPD(0x0C052392u, 3); goto L_0C052392; }  /* 0C0525C8 bra */
L_0C0525D0: BLKS(0x0C0525D0u);
	r3 = r6;  /* 0C0525D0 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0525D2 add #imm,Rn */
	{ r6 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C05259Au, 5); goto L_0C05259A; }  /* 0C0525D4 bra */
L_0C052600: BLKS(0x0C052600u);
	r5 = 0x3u;  /* 0C052600 mov #imm,Rn */
	IF(0x0C052602u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052602 shld Rm,Rn */
	IF(0x0C052604u); r9 = R32(r0 + r9); UPD(0x0C052606u, 3);  /* 0C052604 mov.l @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C052606 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05260Au, 2);  /* 0C052608 mov.b @Rm,Rn */
	r0 &= 0x2u;  /* 0C05260A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05260C tst Rm,Rn */
	if (T) { UPD(0x0C05263Cu, 5); goto L_0C05263C; }  /* 0C05260E bt */
L_0C052610: BLKS(0x0C052610u);
	r2 = R32(r7 + 0x8u); UPD(0x0C052612u, 1);  /* 0C052610 mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C052612 mov #imm,Rn */
	r6 = r2;  /* 0C052614 mov Rm,Rn */
	IF(0x0C052616u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C052616 shld Rm,Rn */
	r6 += r9;  /* 0C052618 add Rm,Rn */
	r1 = R32(r6 + 0x10u); UPD(0x0C05261Cu, 5);  /* 0C05261A mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C05261C tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052626u, 4); goto L_0C052626; } goto L_0C052622; }  /* 0C05261E bf/s */
L_0C052622: BLKS(0x0C052622u);
	{ W32(r7 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C052730u, 4); goto L_0C052730; }  /* 0C052622 bra */
L_0C052626: BLKS(0x0C052626u);
	W32(r7 + 0x8u, r2); UPD(0x0C052628u, 1);  /* 0C052626 mov.l Rm,@(disp,Rn) */
L_0C052628: BLKS(0x0C052628u);
	r4 = 0x280u; UPD(0x0C05262Au, 1);  /* 0C052628 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C05262A mov #imm,Rn */
	IF(0x0C05262Cu); MACL = r10 * r4;  /* 0C05262C mul.l Rm,Rn */
	r8 = 0xC283794u; UPD(0x0C052630u, 4);  /* 0C05262E mov.l @(disp,pc),Rn */
	r7 = 0xC052B50u; UPD(0x0C052632u, 1);  /* 0C052630 mov.l @(disp,pc),Rn */
	IF(0x0C052632u); r13 = MACL;  /* 0C052632 sts macl,Rn */
	r8 += r13;  /* 0C052634 add Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C052638u, 3);  /* 0C052636 mov.l Rm,@(disp,Rn) */
	IF(0x0C052638u); { u32 t_ = r7; PR = 0x0C05263Cu; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C05263Cu); }  /* 0C052638 jsr @Rn */
L_0C05263C: BLKS(0x0C05263Cu);
	r2 = 0x280u; UPD(0x0C05263Eu, 1);  /* 0C05263C mov.w @(disp,pc),Rn */
	IF(0x0C05263Eu); MACL = r10 * r2;  /* 0C05263E mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C052642u, 3);  /* 0C052640 mov.l @(disp,pc),Rn */
	IF(0x0C052642u); r2 = MACL;  /* 0C052642 sts macl,Rn */
	r2 += r0;  /* 0C052644 add Rm,Rn */
	r6 = 0x24Eu; UPD(0x0C052648u, 3);  /* 0C052646 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C052648 mov Rm,Rn */
	IF(0x0C05264Au); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05264Cu, 2);  /* 0C05264A mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C05264C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05264E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052650 tst Rm,Rn */
	if (T) { UPD(0x0C052674u, 6); goto L_0C052674; }  /* 0C052652 bt */
L_0C052654: BLKS(0x0C052654u);
	r1 = R32(r2 + 0x8u); UPD(0x0C052656u, 1);  /* 0C052654 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C052656 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052710u, 4); goto L_0C052710; } goto L_0C05265C; }  /* 0C052658 bt/s */
L_0C05265C: BLKS(0x0C05265Cu);
	r1 += 0xFFFFFFFFu;  /* 0C05265C add #imm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C052660u, 3);  /* 0C05265E mov.l Rm,@(disp,Rn) */
L_0C052660: BLKS(0x0C052660u);
	r6 = 0x280u; UPD(0x0C052662u, 1);  /* 0C052660 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C052662 mov #imm,Rn */
	IF(0x0C052664u); MACL = r10 * r6;  /* 0C052664 mul.l Rm,Rn */
	r13 = 0xC283794u; UPD(0x0C052668u, 4);  /* 0C052666 mov.l @(disp,pc),Rn */
	IF(0x0C052668u); r5 = MACL;  /* 0C052668 sts macl,Rn */
	r13 += r5;  /* 0C05266A add Rm,Rn */
	r3 = 0xC052B50u; UPD(0x0C05266Eu, 3);  /* 0C05266C mov.l @(disp,pc),Rn */
	W32(r13 + 0xCu, r4); UPD(0x0C052670u, 1);  /* 0C05266E mov.l Rm,@(disp,Rn) */
	IF(0x0C052670u); { u32 t_ = r3; PR = 0x0C052674u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C052674u); }  /* 0C052670 jsr @Rn */
L_0C052674: BLKS(0x0C052674u);
	r2 = 0x280u; UPD(0x0C052676u, 1);  /* 0C052674 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C052676 mov #imm,Rn */
	IF(0x0C052678u); MACL = r10 * r2;  /* 0C052678 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05267Cu, 4);  /* 0C05267A mov.l @(disp,pc),Rn */
	IF(0x0C05267Cu); r2 = MACL;  /* 0C05267C sts macl,Rn */
	r2 += r0;  /* 0C05267E add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C052682u, 3);  /* 0C052680 mov.l @(disp,Rm),Rn */
	IF(0x0C052682u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052682 shld Rm,Rn */
	IF(0x0C052684u); r9 = R32(r0 + r9); UPD(0x0C052686u, 2);  /* 0C052684 mov.l @(r0,Rm),Rn */
	r8 = 0x24Eu; UPD(0x0C052688u, 1);  /* 0C052686 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C052688 mov Rm,Rn */
	IF(0x0C05268Au); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05268Cu, 2);  /* 0C05268A mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C05268C mov Rm,Rn */
	r0 &= 0x8u;  /* 0C05268E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052690 tst Rm,Rn */
	if (T) { UPD(0x0C0526AEu, 6); goto L_0C0526AE; }  /* 0C052692 bt */
L_0C052694: BLKS(0x0C052694u);
	r3 = R32(r2 + 0xCu); UPD(0x0C052696u, 1);  /* 0C052694 mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C052696 mov #imm,Rn */
	r13 = r3;  /* 0C052698 mov Rm,Rn */
	IF(0x0C05269Au); ARG0(0x4D4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C05269A shld Rm,Rn */
	r13 += r9;  /* 0C05269C add Rm,Rn */
	r1 = R32(r13 + 0x8u); UPD(0x0C0526A0u, 5);  /* 0C05269E mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0526A0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052700u, 4); goto L_0C052700; } goto L_0C0526A6; }  /* 0C0526A2 bt/s */
L_0C0526A6: BLKS(0x0C0526A6u);
	W32(r2 + 0xCu, r3); UPD(0x0C0526A8u, 2);  /* 0C0526A6 mov.l Rm,@(disp,Rn) */
L_0C0526A8: BLKS(0x0C0526A8u);
	r3 = 0xC052B50u; UPD(0x0C0526AAu, 1);  /* 0C0526A8 mov.l @(disp,pc),Rn */
	IF(0x0C0526AAu); { u32 t_ = r3; PR = 0x0C0526AEu; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C0526AEu); }  /* 0C0526AA jsr @Rn */
L_0C0526AE: BLKS(0x0C0526AEu);
	r8 = 0x280u; UPD(0x0C0526B0u, 1);  /* 0C0526AE mov.w @(disp,pc),Rn */
	IF(0x0C0526B0u); MACL = r10 * r8;  /* 0C0526B0 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0526B4u, 3);  /* 0C0526B2 mov.l @(disp,pc),Rn */
	IF(0x0C0526B4u); r2 = MACL;  /* 0C0526B4 sts macl,Rn */
	r2 += r7;  /* 0C0526B6 add Rm,Rn */
	r6 = 0x24Eu; UPD(0x0C0526BAu, 3);  /* 0C0526B8 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C0526BA mov Rm,Rn */
	IF(0x0C0526BCu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0526BEu, 2);  /* 0C0526BC mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C0526BE mov Rm,Rn */
	r0 &= 0x4u;  /* 0C0526C0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0526C2 tst Rm,Rn */
	if (T) { UPD(0x0C0526D8u, 6); goto L_0C0526D8; }  /* 0C0526C4 bt */
L_0C0526C6: BLKS(0x0C0526C6u);
	r1 = R32(r2 + 0xCu); UPD(0x0C0526C8u, 1);  /* 0C0526C6 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0526C8 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0526E0u, 4); goto L_0C0526E0; } goto L_0C0526CE; }  /* 0C0526CA bt/s */
L_0C0526CE: BLKS(0x0C0526CEu);
	W32(r2 + 0xCu, r1); UPD(0x0C0526D0u, 2);  /* 0C0526CE mov.l Rm,@(disp,Rn) */
L_0C0526D0: BLKS(0x0C0526D0u);
	r9 = 0xC052B50u; UPD(0x0C0526D2u, 1);  /* 0C0526D0 mov.l @(disp,pc),Rn */
	IF(0x0C0526D2u); { u32 t_ = r9; PR = 0x0C0526D6u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C0526D6u); }  /* 0C0526D2 jsr @Rn */
L_0C0526D6: BLKS(0x0C0526D6u);
	IF(0x0C0526D6u); ;  /* 0C0526D6 nop */
	UPD(0x0C0526D8u, 1);
L_0C0526D8: BLKS(0x0C0526D8u);
	r8 = r10;  /* 0C0526D8 mov Rm,Rn */
	UPD(0x0C0526DAu, 1);
L_0C0526DA: BLKS(0x0C0526DAu);
	r8 += 0x1u;  /* 0C0526DA add #imm,Rn */
	UPD(0x0C0526DCu, 1);
L_0C0526DC: BLKS(0x0C0526DCu);
	{ r13 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C052354u, 3); goto L_0C052354; }  /* 0C0526DC bra */
L_0C0526E0: BLKS(0x0C0526E0u);
	r0 = r2;  /* 0C0526E0 mov Rm,Rn */
	IF(0x0C0526E2u); ;  /* 0C0526E2 nop */
	UPD(0x0C0526E4u, 2);
L_0C0526E4: BLKS(0x0C0526E4u);
	r2 = R32(r0 + 0xCu); UPD(0x0C0526E6u, 1);  /* 0C0526E4 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0526E6 mov #imm,Rn */
	r4 = r2;  /* 0C0526E8 mov Rm,Rn */
	IF(0x0C0526EAu); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0526EA shld Rm,Rn */
	r4 += r9;  /* 0C0526EC add Rm,Rn */
	r13 = R32(r4 + 0x8u); UPD(0x0C0526F0u, 5);  /* 0C0526EE mov.l @(disp,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C0526F0 tst Rm,Rn */
	if (T) { UPD(0x0C0526D0u, 4); goto L_0C0526D0; }  /* 0C0526F2 bt */
L_0C0526F4: BLKS(0x0C0526F4u);
	r2 += 0x1u;  /* 0C0526F4 add #imm,Rn */
	{ W32(r0 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0526E4u, 4); goto L_0C0526E4; }  /* 0C0526F6 bra */
L_0C052700: BLKS(0x0C052700u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0526A8u, 3); goto L_0C0526A8; }  /* 0C052700 bra */
L_0C052710: BLKS(0x0C052710u);
	r2 = R32(r0 + 0x8u); UPD(0x0C052712u, 1);  /* 0C052710 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C052712 mov #imm,Rn */
	r8 = r2;  /* 0C052714 mov Rm,Rn */
	IF(0x0C052716u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C052716 shld Rm,Rn */
	r8 += r9;  /* 0C052718 add Rm,Rn */
	r7 = R32(r8 + 0x10u); UPD(0x0C05271Cu, 5);  /* 0C05271A mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05271C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052660u, 4); goto L_0C052660; } goto L_0C052722; }  /* 0C05271E bt/s */
L_0C052722: BLKS(0x0C052722u);
	{ W32(r0 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C052710u, 4); goto L_0C052710; }  /* 0C052722 bra */
L_0C052730: BLKS(0x0C052730u);
	{ IF(0x0C052732u); ; /* slot nop */ UPD(0x0C052628u, 3); goto L_0C052628; }  /* 0C052730 bra */
L_0C052740: BLKS(0x0C052740u);
	if (!T) { UPD(0x0C052748u, 3); goto L_0C052748; }  /* 0C052740 bf */
L_0C052742: BLKS(0x0C052742u);
	r6 += 0x2u;  /* 0C052742 add #imm,Rn */
	{ r0 = (u32)(s32)(s8)R8(r6); /* slot mov.b @Rm,Rn */ UPD(0x0C052940u, 4); goto L_0C052940; }  /* 0C052744 bra */
L_0C052748: BLKS(0x0C052748u);
	r2 = 0x50u;  /* 0C052748 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05274A cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x40u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C052754u, 5); goto L_0C052754; } goto L_0C052750; }  /* 0C05274C bf/s */
L_0C052750: BLKS(0x0C052750u);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0528C0u, 4); goto L_0C0528C0; }  /* 0C052750 bra */
L_0C052754: BLKS(0x0C052754u);
	r8 = r10;  /* 0C052754 mov Rm,Rn */
	{ u32 c_ = !T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0526DCu, 4); goto L_0C0526DC; } goto L_0C05275A; }  /* 0C052756 bf/s */
L_0C05275A: BLKS(0x0C05275Au);
	r7 += 0x20u;  /* 0C05275A add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C05275Eu, 3);  /* 0C05275C mov.b @Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C05275E mov #imm,Rn */
	r0 = 0x268u; UPD(0x0C052762u, 2);  /* 0C052760 mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFE0u;  /* 0C052762 add #imm,Rn */
	T = (r2 & r2) == 0;  /* 0C052764 tst Rm,Rn */
	IF(0x0C052766u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C052768u, 3);  /* 0C052766 mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C052768 negc Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05276A tst Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05276C negc Rm,Rn */
	T = (r8 & r4) == 0;  /* 0C05276E tst Rm,Rn */
	if (T) { UPD(0x0C0526D8u, 7); goto L_0C0526D8; }  /* 0C052770 bt */
L_0C052772: BLKS(0x0C052772u);
	r7 += 0x21u;  /* 0C052772 add #imm,Rn */
	r0 = 0xA0u; UPD(0x0C052776u, 2);  /* 0C052774 mov.w @(disp,pc),Rn */
	IF(0x0C052776u); MACL = r10 * r0;  /* 0C052776 mul.l Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C05277Au, 3);  /* 0C052778 mov.b @Rm,Rn */
	IF(0x0C05277Au); r0 = MACL;  /* 0C05277A sts macl,Rn */
	r0 += r5;  /* 0C05277C add Rm,Rn */
	IF(0x0C05277Eu); r0 <<= 2;  /* 0C05277E shll2 Rn */
	r3 = 0x1A4u; UPD(0x0C052782u, 4);  /* 0C052780 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C052782 add Rm,Rn */
	r9 = 0x124u; UPD(0x0C052786u, 2);  /* 0C052784 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C052786 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C05278Au, 2);  /* 0C052788 mov.l @Rm,Rn */
	IF(0x0C05278Au); r7 = R32(r0 + r9); UPD(0x0C05278Cu, 1);  /* 0C05278A mov.l @(r0,Rm),Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C05278C cmp/ge Rm,Rn */
	{ u32 c_ = T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0527A0u, 4); goto L_0C0527A0; } goto L_0C052792; }  /* 0C05278E bt/s */
L_0C052792: BLKS(0x0C052792u);
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C052794u, 2);  /* 0C052792 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C052794 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052796 tst Rm,Rn */
	if (T) { UPD(0x0C0527A0u, 5); goto L_0C0527A0; }  /* 0C052798 bt */
L_0C05279A: BLKS(0x0C05279Au);
	r6 = 0x10000u; UPD(0x0C05279Cu, 1);  /* 0C05279A mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C05279C add Rm,Rn */
	W32(r3, r2); UPD(0x0C0527A0u, 2);  /* 0C05279E mov.l Rm,@Rn */
L_0C0527A0: BLKS(0x0C0527A0u);
	r13 = 0x280u; UPD(0x0C0527A2u, 1);  /* 0C0527A0 mov.w @(disp,pc),Rn */
	IF(0x0C0527A2u); MACL = r10 * r13;  /* 0C0527A2 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C0527A6u, 3);  /* 0C0527A4 mov.l @(disp,pc),Rn */
	IF(0x0C0527A6u); r0 = MACL;  /* 0C0527A6 sts macl,Rn */
	r0 += r6;  /* 0C0527A8 add Rm,Rn */
	r13 += 0xFFFFFFCEu;  /* 0C0527AA add #imm,Rn */
	IF(0x0C0527ACu); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0527AEu, 4);  /* 0C0527AC mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C0527AE mov Rm,Rn */
	r0 &= 0x2u;  /* 0C0527B0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0527B2 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0527D2u, 6); goto L_0C0527D2; } goto L_0C0527B8; }  /* 0C0527B4 bt/s */
L_0C0527B8: BLKS(0x0C0527B8u);
	r2 = 0xA0u; UPD(0x0C0527BAu, 2);  /* 0C0527B8 mov.w @(disp,pc),Rn */
	IF(0x0C0527BAu); MACL = r10 * r2;  /* 0C0527BA mul.l Rm,Rn */
	r3 = 0x1A4u; UPD(0x0C0527BEu, 3);  /* 0C0527BC mov.w @(disp,pc),Rn */
	IF(0x0C0527BEu); r4 = MACL;  /* 0C0527BE sts macl,Rn */
	r4 += r5;  /* 0C0527C0 add Rm,Rn */
	IF(0x0C0527C2u); r4 <<= 2;  /* 0C0527C2 shll2 Rn */
	r4 += r6;  /* 0C0527C4 add Rm,Rn */
	r4 += r3;  /* 0C0527C6 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C0527CAu, 6);  /* 0C0527C8 mov.l @Rm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C0527CCu, 1);  /* 0C0527CA mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C0527CC add Rm,Rn */
	W32(r4, r8); UPD(0x0C0527D0u, 2);  /* 0C0527CE mov.l Rm,@Rn */
	r0 = r7;  /* 0C0527D0 mov Rm,Rn */
	UPD(0x0C0527D2u, 1);
L_0C0527D2: BLKS(0x0C0527D2u);
	r0 &= 0x8u;  /* 0C0527D2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0527D4 tst Rm,Rn */
	if (T) { UPD(0x0C0527F0u, 5); goto L_0C0527F0; }  /* 0C0527D6 bt */
L_0C0527D8: BLKS(0x0C0527D8u);
	r8 = 0xA0u; UPD(0x0C0527DAu, 1);  /* 0C0527D8 mov.w @(disp,pc),Rn */
	IF(0x0C0527DAu); MACL = r10 * r8;  /* 0C0527DA mul.l Rm,Rn */
	r4 = 0x1E4u; UPD(0x0C0527DEu, 3);  /* 0C0527DC mov.w @(disp,pc),Rn */
	IF(0x0C0527DEu); r9 = MACL;  /* 0C0527DE sts macl,Rn */
	r9 += r5;  /* 0C0527E0 add Rm,Rn */
	IF(0x0C0527E2u); r9 <<= 2;  /* 0C0527E2 shll2 Rn */
	r9 += r6;  /* 0C0527E4 add Rm,Rn */
	r9 += r4;  /* 0C0527E6 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C0527EAu, 6);  /* 0C0527E8 mov.l @Rm,Rn */
	r13 = 0x10000u; UPD(0x0C0527ECu, 1);  /* 0C0527EA mov.l @(disp,pc),Rn */
	r0 += r13;  /* 0C0527EC add Rm,Rn */
	W32(r9, r0); UPD(0x0C0527F0u, 2);  /* 0C0527EE mov.l Rm,@Rn */
L_0C0527F0: BLKS(0x0C0527F0u);
	r3 = 0xA0u; UPD(0x0C0527F2u, 1);  /* 0C0527F0 mov.w @(disp,pc),Rn */
	r9 = r7;  /* 0C0527F2 mov Rm,Rn */
	IF(0x0C0527F4u); MACL = r10 * r3;  /* 0C0527F4 mul.l Rm,Rn */
	r0 = 0x164u; UPD(0x0C0527F8u, 4);  /* 0C0527F6 mov.w @(disp,pc),Rn */
	IF(0x0C0527F8u); r9 >>= 2;  /* 0C0527F8 shlr2 Rn */
	IF(0x0C0527FAu); r4 = MACL;  /* 0C0527FA sts macl,Rn */
	r4 += r5;  /* 0C0527FC add Rm,Rn */
	IF(0x0C0527FEu); r4 <<= 2;  /* 0C0527FE shll2 Rn */
	r3 = 0x1E4u; UPD(0x0C052802u, 5);  /* 0C052800 mov.w @(disp,pc),Rn */
	r4 += r6;  /* 0C052802 add Rm,Rn */
	r3 += r4;  /* 0C052804 add Rm,Rn */
	r5 = R32(r3); UPD(0x0C052808u, 3);  /* 0C052806 mov.l @Rm,Rn */
	r1 = 0x1u;  /* 0C052808 mov #imm,Rn */
	IF(0x0C05280Au); r8 = R32(r0 + r4); UPD(0x0C05280Cu, 2);  /* 0C05280A mov.l @(r0,Rm),Rn */
	r9 &= r1;  /* 0C05280C and Rm,Rn */
	T = (s32)r5 > (s32)r8;  /* 0C05280E cmp/gt Rm,Rn */
	IF(0x0C052810u); r7 = T;  /* 0C052810 movt Rn */
	r9 &= r7;  /* 0C052812 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C052814 tst Rm,Rn */
	if (T) { UPD(0x0C052820u, 8); goto L_0C052820; }  /* 0C052816 bt */
L_0C052818: BLKS(0x0C052818u);
	r6 = 0xFFFF0000u; UPD(0x0C05281Au, 1);  /* 0C052818 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C05281A add Rm,Rn */
	W32(r3, r6); UPD(0x0C05281Eu, 2);  /* 0C05281C mov.l Rm,@Rn */
	r5 = r6;  /* 0C05281E mov Rm,Rn */
	UPD(0x0C052820u, 1);
L_0C052820: BLKS(0x0C052820u);
	r0 = 0x124u; UPD(0x0C052822u, 1);  /* 0C052820 mov.w @(disp,pc),Rn */
	IF(0x0C052822u); r13 = R32(r0 + r4); UPD(0x0C052824u, 1);  /* 0C052822 mov.l @(r0,Rm),Rn */
	r0 = 0x1A4u; UPD(0x0C052826u, 1);  /* 0C052824 mov.w @(disp,pc),Rn */
	IF(0x0C052826u); r9 = R32(r0 + r4); UPD(0x0C052828u, 1);  /* 0C052826 mov.l @(r0,Rm),Rn */
	r0 = r13;  /* 0C052828 mov Rm,Rn */
	r0 += r9;  /* 0C05282A add Rm,Rn */
	r7 = r0;  /* 0C05282C mov Rm,Rn */
	IF(0x0C05282Eu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C05282E rotl Rn */
	IF(0x0C052830u); r3 = T;  /* 0C052830 movt Rn */
	r7 = r8;  /* 0C052832 mov Rm,Rn */
	r0 += r3;  /* 0C052834 add Rm,Rn */
	r7 += r5;  /* 0C052836 add Rm,Rn */
	IF(0x0C052838u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C052838 shar Rn */
	r6 = r7;  /* 0C05283A mov Rm,Rn */
	IF(0x0C05283Cu); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C05283C rotl Rn */
	IF(0x0C05283Eu); r1 = T;  /* 0C05283E movt Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C052842u, 13);  /* 0C052840 mov.l Rm,@(disp,Rn) */
	r7 += r1;  /* 0C052842 add Rm,Rn */
	r13 -= r9;  /* 0C052844 sub Rm,Rn */
	IF(0x0C052846u); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C052846 shar Rn */
	r0 = r13;  /* 0C052848 mov Rm,Rn */
	IF(0x0C05284Au); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C05284A rotl Rn */
	IF(0x0C05284Cu); r1 = T;  /* 0C05284C movt Rn */
	r3 = r4;  /* 0C05284E mov Rm,Rn */
	r3 += 0x64u;  /* 0C052850 add #imm,Rn */
	r2 = 0xA4u; UPD(0x0C052854u, 9);  /* 0C052852 mov.w @(disp,pc),Rn */
	r1 += r13;  /* 0C052854 add Rm,Rn */
	IF(0x0C052856u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C052856 shar Rn */
	W32(r3, r7); UPD(0x0C05285Au, 3);  /* 0C052858 mov.l Rm,@Rn */
	IF(0x0C05285Au); T = (s32)r1 >= 0;  /* 0C05285A cmp/pz Rn */
	{ u32 c_ = !T; r2 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C052890u, 4); goto L_0C052890; } UPD(0x0C052860u, 1); goto L_0C052860; }  /* 0C05285C bf/s */
L_0C052860: BLKS(0x0C052860u);
	W32(r2, r1); UPD(0x0C052862u, 1);  /* 0C052860 mov.l Rm,@Rn */
	r3 = 0xE4u; UPD(0x0C052864u, 1);  /* 0C052862 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C052864 mov Rm,Rn */
	r3 += r4;  /* 0C052866 add Rm,Rn */
	r1 -= r5;  /* 0C052868 sub Rm,Rn */
	IF(0x0C05286Au); ;  /* 0C05286A nop */
	UPD(0x0C05286Cu, 4);
L_0C05286C: BLKS(0x0C05286Cu);
	r5 = r1;  /* 0C05286C mov Rm,Rn */
	IF(0x0C05286Eu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C05286E rotl Rn */
	IF(0x0C052870u); r2 = T;  /* 0C052870 movt Rn */
	r2 += r1;  /* 0C052872 add Rm,Rn */
	IF(0x0C052874u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C052874 shar Rn */
	IF(0x0C052876u); T = (s32)r2 >= 0;  /* 0C052876 cmp/pz Rn */
	if (!T) { UPD(0x0C052880u, 9); goto L_0C052880; }  /* 0C052878 bf */
L_0C05287A: BLKS(0x0C05287Au);
	W32(r3, r2); UPD(0x0C05287Cu, 1);  /* 0C05287A mov.l Rm,@Rn */
L_0C05287C: BLKS(0x0C05287Cu);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0526DAu, 3); goto L_0C0526DA; }  /* 0C05287C bra */
L_0C052880: BLKS(0x0C052880u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C05287Au, 3); goto L_0C05287A; }  /* 0C052880 bra */
L_0C052890: BLKS(0x0C052890u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C052860u, 3); goto L_0C052860; }  /* 0C052890 bra */
L_0C0528C0: BLKS(0x0C0528C0u);
	T = r0 == 0x60u;  /* 0C0528C0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0528CAu, 4); goto L_0C0528CA; } goto L_0C0528C6; }  /* 0C0528C2 bt/s */
L_0C0528C6: BLKS(0x0C0528C6u);
	{ r13 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C052354u, 4); goto L_0C052354; }  /* 0C0528C6 bra */
L_0C0528CA: BLKS(0x0C0528CAu);
	r2 = R32(r7 + 0x10u); UPD(0x0C0528CCu, 1);  /* 0C0528CA mov.l @(disp,Rm),Rn */
	r4 = 0x13FFFFFu; UPD(0x0C0528CEu, 1);  /* 0C0528CC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0528CE cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0528E2u, 4); goto L_0C0528E2; } goto L_0C0528D4; }  /* 0C0528D0 bt/s */
L_0C0528D4: BLKS(0x0C0528D4u);
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0528D6u, 2);  /* 0C0528D4 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0528D6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0528D8 tst Rm,Rn */
	if (T) { UPD(0x0C0528E2u, 5); goto L_0C0528E2; }  /* 0C0528DA bt */
L_0C0528DC: BLKS(0x0C0528DCu);
	r8 = 0x10000u; UPD(0x0C0528DEu, 1);  /* 0C0528DC mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C0528DE add Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C0528E2u, 2);  /* 0C0528E0 mov.l Rm,@(disp,Rn) */
L_0C0528E2: BLKS(0x0C0528E2u);
	r6 = 0x280u; UPD(0x0C0528E4u, 1);  /* 0C0528E2 mov.w @(disp,pc),Rn */
	IF(0x0C0528E4u); MACL = r10 * r6;  /* 0C0528E4 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C0528E8u, 3);  /* 0C0528E6 mov.l @(disp,pc),Rn */
	IF(0x0C0528E8u); r7 = MACL;  /* 0C0528E8 sts macl,Rn */
	r7 += r2;  /* 0C0528EA add Rm,Rn */
	r9 = 0x24Eu; UPD(0x0C0528EEu, 3);  /* 0C0528EC mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0528EE mov Rm,Rn */
	IF(0x0C0528F0u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0528F2u, 2);  /* 0C0528F0 mov.b @(r0,Rm),Rn */
	r3 = R32(r7 + 0x10u); UPD(0x0C0528F4u, 1);  /* 0C0528F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0528F4u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0528F4 shar Rn */
	IF(0x0C0528F6u); T = (s32)r3 > 0;  /* 0C0528F6 cmp/pl Rn */
	r0 = r2;  /* 0C0528F8 mov Rm,Rn */
	IF(0x0C0528FAu); r13 = T;  /* 0C0528FA movt Rn */
	r0 &= 0x1u;  /* 0C0528FC and #imm,r0 */
	r0 &= r13;  /* 0C0528FE and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C052900 tst Rm,Rn */
	if (T) { UPD(0x0C05290Au, 10); goto L_0C05290A; }  /* 0C052902 bt */
L_0C052904: BLKS(0x0C052904u);
	r0 = 0xFFFF0000u; UPD(0x0C052906u, 1);  /* 0C052904 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C052906 add Rm,Rn */
	W32(r7 + 0x10u, r3); UPD(0x0C05290Au, 2);  /* 0C052908 mov.l Rm,@(disp,Rn) */
L_0C05290A: BLKS(0x0C05290Au);
	r3 = R32(r7 + 0x14u); UPD(0x0C05290Cu, 1);  /* 0C05290A mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C05290C mov Rm,Rn */
	r4 = 0xEFFFFFu; UPD(0x0C052910u, 2);  /* 0C05290E mov.l @(disp,pc),Rn */
	IF(0x0C052910u); r0 >>= 2;  /* 0C052910 shlr2 Rn */
	T = (s32)r4 >= (s32)r3;  /* 0C052912 cmp/ge Rm,Rn */
	IF(0x0C052914u); r5 = T;  /* 0C052914 movt Rn */
	r0 &= 0x1u;  /* 0C052916 and #imm,r0 */
	r0 &= r5;  /* 0C052918 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05291A tst Rm,Rn */
	if (T) { UPD(0x0C052926u, 9); goto L_0C052926; }  /* 0C05291C bt */
L_0C05291E: BLKS(0x0C05291Eu);
	r8 = 0x10000u; UPD(0x0C052920u, 1);  /* 0C05291E mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C052920 add Rm,Rn */
	W32(r7 + 0x14u, r8); UPD(0x0C052924u, 2);  /* 0C052922 mov.l Rm,@(disp,Rn) */
	r3 = r8;  /* 0C052924 mov Rm,Rn */
	UPD(0x0C052926u, 1);
L_0C052926: BLKS(0x0C052926u);
	IF(0x0C052926u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C052926 shar Rn */
	IF(0x0C052928u); T = (s32)r3 > 0;  /* 0C052928 cmp/pl Rn */
	r9 = 0x1u;  /* 0C05292A mov #imm,Rn */
	IF(0x0C05292Cu); r13 = T;  /* 0C05292C movt Rn */
	r2 &= r9;  /* 0C05292E and Rm,Rn */
	r2 &= r13;  /* 0C052930 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C052932 tst Rm,Rn */
	if (T) { UPD(0x0C05287Cu, 10); goto L_0C05287C; }  /* 0C052934 bt */
L_0C052936: BLKS(0x0C052936u);
	r2 = 0xFFFF0000u; UPD(0x0C052938u, 1);  /* 0C052936 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C052938 add Rm,Rn */
	W32(r7 + 0x14u, r2); UPD(0x0C05293Cu, 2);  /* 0C05293A mov.l Rm,@(disp,Rn) */
L_0C05293C: BLKS(0x0C05293Cu);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0526DAu, 3); goto L_0C0526DA; }  /* 0C05293C bra */
L_0C052940: BLKS(0x0C052940u);
	r0 &= 0x8u;  /* 0C052940 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052942 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0529A0u, 5); goto L_0C0529A0; } goto L_0C052948; }  /* 0C052944 bt/s */
L_0C052948: BLKS(0x0C052948u);
	r7 = 0xC283794u; UPD(0x0C05294Au, 2);  /* 0C052948 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C05294A add Rm,Rn */
	r0 = r7;  /* 0C05294C mov Rm,Rn */
	IF(0x0C05294Eu); r7 = R32(r0 + r5); UPD(0x0C052950u, 3);  /* 0C05294E mov.l @(r0,Rm),Rn */
	r2 = 0xC160B20u; UPD(0x0C052952u, 1);  /* 0C052950 mov.l @(disp,pc),Rn */
	IF(0x0C052952u); ;  /* 0C052952 nop */
	UPD(0x0C052954u, 1);
L_0C052954: BLKS(0x0C052954u);
	{ u32 v_ = R32(r2); r2 += 4; r0 = v_; } UPD(0x0C052956u, 1);  /* 0C052954 mov.l @Rm+,Rn */
	T = r7 == r0;  /* 0C052956 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052970u, 4); goto L_0C052970; } goto L_0C05295C; }  /* 0C052958 bt/s */
L_0C05295C: BLKS(0x0C05295Cu);
	r6 += 0x1u;  /* 0C05295C add #imm,Rn */
	{ r3 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ UPD(0x0C052954u, 5); goto L_0C052954; }  /* 0C05295E bra */
L_0C052970: BLKS(0x0C052970u);
	r1 = r3;  /* 0C052970 mov Rm,Rn */
	r1 += 0x1u;  /* 0C052972 add #imm,Rn */
	r3 = 0xC160B20u; UPD(0x0C052976u, 3);  /* 0C052974 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C052976 exts.w Rm,Rn */
	IF(0x0C052978u); r0 <<= 2;  /* 0C052978 shll2 Rn */
	IF(0x0C05297Au); r5 = R32(r0 + r3); UPD(0x0C05297Cu, 3);  /* 0C05297A mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C05297C tst Rm,Rn */
	if (!T) { UPD(0x0C052982u, 4); goto L_0C052982; }  /* 0C05297E bf */
L_0C052980: BLKS(0x0C052980u);
	r0 = 0x0u;  /* 0C052980 mov #imm,Rn */
	UPD(0x0C052982u, 1);
L_0C052982: BLKS(0x0C052982u);
	r2 = 0x280u; UPD(0x0C052984u, 1);  /* 0C052982 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C052984 mov #imm,Rn */
	IF(0x0C052986u); MACL = r10 * r2;  /* 0C052986 mul.l Rm,Rn */
	IF(0x0C052988u); r13 = R32(r0 + r3); UPD(0x0C05298Au, 4);  /* 0C052988 mov.l @(r0,Rm),Rn */
	r9 = 0xC283794u; UPD(0x0C05298Cu, 1);  /* 0C05298A mov.l @(disp,pc),Rn */
	IF(0x0C05298Cu); r4 = MACL;  /* 0C05298C sts macl,Rn */
	r0 = 0x224u; UPD(0x0C052990u, 2);  /* 0C05298E mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C052990 add Rm,Rn */
	r3 = 0xC052B50u; UPD(0x0C052994u, 2);  /* 0C052992 mov.l @(disp,pc),Rn */
	IF(0x0C052994u); W32(r0 + r4, r13); UPD(0x0C052996u, 1);  /* 0C052994 mov.l Rm,@(r0,Rn) */
	W32(r4 + 0xCu, r8); UPD(0x0C052998u, 1);  /* 0C052996 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x8u, r8); UPD(0x0C05299Au, 1);  /* 0C052998 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x4u, r8); UPD(0x0C05299Cu, 1);  /* 0C05299A mov.l Rm,@(disp,Rn) */
	IF(0x0C05299Cu); { u32 t_ = r3; PR = 0x0C0529A0u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C0529A0u); }  /* 0C05299C jsr @Rn */
L_0C0529A0: BLKS(0x0C0529A0u);
	r5 = 0x280u; UPD(0x0C0529A2u, 1);  /* 0C0529A0 mov.w @(disp,pc),Rn */
	IF(0x0C0529A2u); MACL = r10 * r5;  /* 0C0529A2 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C0529A6u, 3);  /* 0C0529A4 mov.l @(disp,pc),Rn */
	IF(0x0C0529A6u); r2 = MACL;  /* 0C0529A6 sts macl,Rn */
	r2 += r0;  /* 0C0529A8 add Rm,Rn */
	r6 = 0x24Eu; UPD(0x0C0529ACu, 3);  /* 0C0529AA mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C0529AC mov Rm,Rn */
	IF(0x0C0529AEu); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0529B0u, 2);  /* 0C0529AE mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C0529B0 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C0529B2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0529B4 tst Rm,Rn */
	if (T) { UPD(0x0C05293Cu, 6); goto L_0C05293C; }  /* 0C0529B6 bt */
L_0C0529B8: BLKS(0x0C0529B8u);
	r3 = 0x0u;  /* 0C0529B8 mov #imm,Rn */
	r0 = 0x224u; UPD(0x0C0529BCu, 2);  /* 0C0529BA mov.w @(disp,pc),Rn */
	IF(0x0C0529BCu); r7 = R32(r0 + r2); UPD(0x0C0529BEu, 1);  /* 0C0529BC mov.l @(r0,Rm),Rn */
	r2 = 0xC160B20u; UPD(0x0C0529C0u, 1);  /* 0C0529BE mov.l @(disp,pc),Rn */
L_0C0529C0: BLKS(0x0C0529C0u);
	{ u32 v_ = R32(r2); r2 += 4; r8 = v_; } UPD(0x0C0529C2u, 1);  /* 0C0529C0 mov.l @Rm+,Rn */
	T = r7 == r8;  /* 0C0529C2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0529D0u, 4); goto L_0C0529D0; } goto L_0C0529C8; }  /* 0C0529C4 bt/s */
L_0C0529C8: BLKS(0x0C0529C8u);
	r4 += 0x1u;  /* 0C0529C8 add #imm,Rn */
	{ r3 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C0529C0u, 5); goto L_0C0529C0; }  /* 0C0529CA bra */
L_0C0529D0: BLKS(0x0C0529D0u);
	T = (r3 & r3) == 0;  /* 0C0529D0 tst Rm,Rn */
	if (!T) { UPD(0x0C0529EAu, 4); goto L_0C0529EA; }  /* 0C0529D2 bf */
L_0C0529D4: BLKS(0x0C0529D4u);
	r2 = 0xC160B20u; UPD(0x0C0529D6u, 1);  /* 0C0529D4 mov.l @(disp,pc),Rn */
	r13 = R32(r2); UPD(0x0C0529D8u, 1);  /* 0C0529D6 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0529D8 tst Rm,Rn */
	if (T) { UPD(0x0C0529EAu, 4); goto L_0C0529EA; }  /* 0C0529DA bt */
L_0C0529DC: BLKS(0x0C0529DCu);
	SPIN_SAVE(0C0529DC);
	r2 += 0x4u;  /* 0C0529DC add #imm,Rn */
	r7 = r3;  /* 0C0529DE mov Rm,Rn */
	r9 = RS32(0C0529DC, r2); UPD(0x0C0529E2u, 3);  /* 0C0529E0 mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C0529E2 add #imm,Rn */
	T = (r9 & r9) == 0;  /* 0C0529E4 tst Rm,Rn */
	{ u32 c_ = !T; r3 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ if (c_) { SPIN_FFD(0C0529DC, 8); UPD(0x0C0529DCu, 5); goto L_0C0529DC; } UPD(0x0C0529EAu, 1); goto L_0C0529EA; }  /* 0C0529E6 bf/s */
L_0C0529EA: BLKS(0x0C0529EAu);
	r8 = 0x280u; UPD(0x0C0529ECu, 1);  /* 0C0529EA mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0529EC add #imm,Rn */
	IF(0x0C0529EEu); MACL = r10 * r8;  /* 0C0529EE mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C0529F2u, 4);  /* 0C0529F0 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C0529F2 exts.w Rm,Rn */
	IF(0x0C0529F4u); r6 = MACL;  /* 0C0529F4 sts macl,Rn */
	r6 += r0;  /* 0C0529F6 add Rm,Rn */
	r4 = 0xC160B20u; UPD(0x0C0529FAu, 4);  /* 0C0529F8 mov.l @(disp,pc),Rn */
	IF(0x0C0529FAu); r1 <<= 2;  /* 0C0529FA shll2 Rn */
	r0 = r1;  /* 0C0529FC mov Rm,Rn */
	IF(0x0C0529FEu); r5 = R32(r0 + r4); UPD(0x0C052A00u, 3);  /* 0C0529FE mov.l @(r0,Rm),Rn */
	r2 = 0x0u;  /* 0C052A00 mov #imm,Rn */
	r3 = 0xC052B50u; UPD(0x0C052A04u, 2);  /* 0C052A02 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C052A04 exts.w Rm,Rn */
	r0 = 0x224u; UPD(0x0C052A08u, 2);  /* 0C052A06 mov.w @(disp,pc),Rn */
	W32(r6 + 0xCu, r2); UPD(0x0C052A0Au, 1);  /* 0C052A08 mov.l Rm,@(disp,Rn) */
	IF(0x0C052A0Au); W32(r0 + r6, r5); UPD(0x0C052A0Cu, 1);  /* 0C052A0A mov.l Rm,@(r0,Rn) */
	W32(r6 + 0x8u, r2); UPD(0x0C052A0Eu, 1);  /* 0C052A0C mov.l Rm,@(disp,Rn) */
	IF(0x0C052A0Eu); { u32 t_ = r3; PR = 0x0C052A12u; W32(r6 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C052B50, 0x0C052B50u, 0x0C052A12u); }  /* 0C052A0E jsr @Rn */
L_0C052A12: BLKS(0x0C052A12u);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0526DAu, 3); goto L_0C0526DA; }  /* 0C052A12 bra */
L_0C052A40: BLKS(0x0C052A40u);
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C052A42u, 1);  /* 0C052A40 mov.b @Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C052A42 mov #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C052A44 tst Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C052A46 negc Rm,Rn */
	r0 = 0x268u; UPD(0x0C052A4Au, 4);  /* 0C052A48 mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFE0u;  /* 0C052A4A add #imm,Rn */
	IF(0x0C052A4Cu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C052A4Eu, 2);  /* 0C052A4C mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C052A4E cmp/eq #imm,r0 */
	IF(0x0C052A50u); r8 = T;  /* 0C052A50 movt Rn */
	T = (r9 & r8) == 0;  /* 0C052A52 tst Rm,Rn */
	if (T) { UPD(0x0C052A12u, 6); goto L_0C052A12; }  /* 0C052A54 bt */
L_0C052A56: BLKS(0x0C052A56u);
	r6 += 0x2u;  /* 0C052A56 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r6); UPD(0x0C052A5Au, 2);  /* 0C052A58 mov.b @Rm,Rn */
	r7 += 0x21u;  /* 0C052A5A add #imm,Rn */
	r0 = r9;  /* 0C052A5C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C052A5E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052A60 tst Rm,Rn */
	{ u32 c_ = T; r5 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ if (c_) { UPD(0x0C052A7Eu, 7); goto L_0C052A7E; } UPD(0x0C052A66u, 1); goto L_0C052A66; }  /* 0C052A62 bt/s */
L_0C052A66: BLKS(0x0C052A66u);
	r4 = 0xA0u; UPD(0x0C052A68u, 1);  /* 0C052A66 mov.w @(disp,pc),Rn */
	IF(0x0C052A68u); MACL = r10 * r4;  /* 0C052A68 mul.l Rm,Rn */
	r7 = 0x124u; UPD(0x0C052A6Cu, 3);  /* 0C052A6A mov.w @(disp,pc),Rn */
	IF(0x0C052A6Cu); r6 = MACL;  /* 0C052A6C sts macl,Rn */
	r6 += r5;  /* 0C052A6E add Rm,Rn */
	IF(0x0C052A70u); r6 <<= 2;  /* 0C052A70 shll2 Rn */
	r6 += r11;  /* 0C052A72 add Rm,Rn */
	r6 += r7;  /* 0C052A74 add Rm,Rn */
	r13 = R32(r6); UPD(0x0C052A78u, 6);  /* 0C052A76 mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C052A7Au, 1);  /* 0C052A78 mov.l @(disp,pc),Rn */
	r13 += r2;  /* 0C052A7A add Rm,Rn */
	W32(r6, r13); UPD(0x0C052A7Eu, 2);  /* 0C052A7C mov.l Rm,@Rn */
L_0C052A7E: BLKS(0x0C052A7Eu);
	r8 = 0xA0u; UPD(0x0C052A80u, 1);  /* 0C052A7E mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)r9;  /* 0C052A80 exts.b Rm,Rn */
	IF(0x0C052A82u); MACL = r10 * r8;  /* 0C052A82 mul.l Rm,Rn */
	r6 = 0x124u; UPD(0x0C052A86u, 4);  /* 0C052A84 mov.w @(disp,pc),Rn */
	IF(0x0C052A86u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C052A86 shar Rn */
	IF(0x0C052A88u); r7 = MACL;  /* 0C052A88 sts macl,Rn */
	r7 += r5;  /* 0C052A8A add Rm,Rn */
	IF(0x0C052A8Cu); r7 <<= 2;  /* 0C052A8C shll2 Rn */
	r7 += r11;  /* 0C052A8E add Rm,Rn */
	r0 = 0x1A4u; UPD(0x0C052A92u, 6);  /* 0C052A90 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C052A92 add Rm,Rn */
	IF(0x0C052A94u); r8 = R32(r0 + r7); UPD(0x0C052A96u, 2);  /* 0C052A94 mov.l @(r0,Rm),Rn */
	r13 = 0x1u;  /* 0C052A96 mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C052A9Au, 2);  /* 0C052A98 mov.l @Rm,Rn */
	r13 &= r3;  /* 0C052A9A and Rm,Rn */
	T = (s32)r5 > (s32)r8;  /* 0C052A9C cmp/gt Rm,Rn */
	IF(0x0C052A9Eu); r0 = T;  /* 0C052A9E movt Rn */
	r13 &= r0;  /* 0C052AA0 and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C052AA2 tst Rm,Rn */
	if (T) { UPD(0x0C052AAEu, 8); goto L_0C052AAE; }  /* 0C052AA4 bt */
L_0C052AA6: BLKS(0x0C052AA6u);
	r2 = 0xFFFF0000u; UPD(0x0C052AA8u, 1);  /* 0C052AA6 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C052AA8 add Rm,Rn */
	W32(r6, r2); UPD(0x0C052AACu, 2);  /* 0C052AAA mov.l Rm,@Rn */
	r5 = r2;  /* 0C052AAC mov Rm,Rn */
	UPD(0x0C052AAEu, 1);
L_0C052AAE: BLKS(0x0C052AAEu);
	r2 = 0x164u; UPD(0x0C052AB0u, 1);  /* 0C052AAE mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C052AB0 mov #imm,Rn */
	IF(0x0C052AB2u); r3 >>= 2;  /* 0C052AB2 shlr2 Rn */
	r0 = 0x1E4u; UPD(0x0C052AB6u, 3);  /* 0C052AB4 mov.w @(disp,pc),Rn */
	r3 &= r6;  /* 0C052AB6 and Rm,Rn */
	r2 += r7;  /* 0C052AB8 add Rm,Rn */
	r6 = R32(r2); UPD(0x0C052ABCu, 3);  /* 0C052ABA mov.l @Rm,Rn */
	IF(0x0C052ABCu); r4 = R32(r0 + r7); UPD(0x0C052ABEu, 1);  /* 0C052ABC mov.l @(r0,Rm),Rn */
	T = (s32)r4 > (s32)r6;  /* 0C052ABE cmp/gt Rm,Rn */
	IF(0x0C052AC0u); r13 = T;  /* 0C052AC0 movt Rn */
	r3 &= r13;  /* 0C052AC2 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C052AC4 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052AD4u, 7); goto L_0C052AD4; } goto L_0C052ACA; }  /* 0C052AC6 bt/s */
L_0C052ACA: BLKS(0x0C052ACAu);
	r3 = 0x10000u; UPD(0x0C052ACCu, 2);  /* 0C052ACA mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C052ACC add Rm,Rn */
	W32(r2, r3); UPD(0x0C052AD0u, 2);  /* 0C052ACE mov.l Rm,@Rn */
	r6 = r3;  /* 0C052AD0 mov Rm,Rn */
	r0 = r9;  /* 0C052AD2 mov Rm,Rn */
	UPD(0x0C052AD4u, 2);
L_0C052AD4: BLKS(0x0C052AD4u);
	r0 &= 0x4u;  /* 0C052AD4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052AD6 tst Rm,Rn */
	{ u32 c_ = T; r0 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052AE6u, 5); goto L_0C052AE6; } goto L_0C052ADC; }  /* 0C052AD8 bt/s */
L_0C052ADC: BLKS(0x0C052ADCu);
	r9 = 0xFFFF0000u; UPD(0x0C052ADEu, 2);  /* 0C052ADC mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C052ADE add Rm,Rn */
	W32(r2, r9); UPD(0x0C052AE2u, 2);  /* 0C052AE0 mov.l Rm,@Rn */
	r6 = r9;  /* 0C052AE2 mov Rm,Rn */
	r0 = r5;  /* 0C052AE4 mov Rm,Rn */
	UPD(0x0C052AE6u, 2);
L_0C052AE6: BLKS(0x0C052AE6u);
	r0 += r8;  /* 0C052AE6 add Rm,Rn */
	r3 = r0;  /* 0C052AE8 mov Rm,Rn */
	IF(0x0C052AEAu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C052AEA rotl Rn */
	IF(0x0C052AECu); r13 = T;  /* 0C052AEC movt Rn */
	r0 += r13;  /* 0C052AEE add Rm,Rn */
	r3 = r6;  /* 0C052AF0 mov Rm,Rn */
	IF(0x0C052AF2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C052AF2 shar Rn */
	r3 += r4;  /* 0C052AF4 add Rm,Rn */
	r9 = r3;  /* 0C052AF6 mov Rm,Rn */
	W32(r7 + 0x24u, r0); UPD(0x0C052AFAu, 10);  /* 0C052AF8 mov.l Rm,@(disp,Rn) */
	IF(0x0C052AFAu); T = r9 >> 31; r9 = (r9 << 1) | T;  /* 0C052AFA rotl Rn */
	IF(0x0C052AFCu); r1 = T;  /* 0C052AFC movt Rn */
	r0 = r5;  /* 0C052AFE mov Rm,Rn */
	r0 -= r8;  /* 0C052B00 sub Rm,Rn */
	r13 = r7;  /* 0C052B02 mov Rm,Rn */
	r3 += r1;  /* 0C052B04 add Rm,Rn */
	IF(0x0C052B06u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C052B06 shar Rn */
	r13 += 0x64u;  /* 0C052B08 add #imm,Rn */
	r5 = r0;  /* 0C052B0A mov Rm,Rn */
	IF(0x0C052B0Cu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C052B0C rotl Rn */
	W32(r13, r3); UPD(0x0C052B10u, 11);  /* 0C052B0E mov.l Rm,@Rn */
	IF(0x0C052B10u); r2 = T;  /* 0C052B10 movt Rn */
	r3 = 0xA4u; UPD(0x0C052B14u, 2);  /* 0C052B12 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C052B14 add Rm,Rn */
	IF(0x0C052B16u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C052B16 shar Rn */
	IF(0x0C052B18u); T = (s32)r2 >= 0;  /* 0C052B18 cmp/pz Rn */
	{ u32 c_ = !T; r3 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C052B30u, 6); goto L_0C052B30; } UPD(0x0C052B1Eu, 1); goto L_0C052B1E; }  /* 0C052B1A bf/s */
L_0C052B1E: BLKS(0x0C052B1Eu);
	W32(r3, r2); UPD(0x0C052B20u, 1);  /* 0C052B1E mov.l Rm,@Rn */
	r1 = r6;  /* 0C052B20 mov Rm,Rn */
	r3 = 0xE4u; UPD(0x0C052B24u, 2);  /* 0C052B22 mov.w @(disp,pc),Rn */
	r1 -= r4;  /* 0C052B24 sub Rm,Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C05286Cu, 4); goto L_0C05286C; }  /* 0C052B26 bra */
L_0C052B30: BLKS(0x0C052B30u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C052B1Eu, 3); goto L_0C052B1E; }  /* 0C052B30 bra */
}

/* FUN_0c052b50 */
void f_0C052B50(sh3_t *c)
{
	LOCALS;
L_0C052B50: BLKS(0x0C052B50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C052B52u, 1);  /* 0C052B50 mov.l Rm,@-Rn */
	r6 = 0x3u;  /* 0C052B52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C052B56u, 2);  /* 0C052B54 mov.l Rm,@-Rn */
	r8 = 0x4u;  /* 0C052B56 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C052B5Au, 2);  /* 0C052B58 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C052B5A exts.w Rm,Rn */
	r0 = 0x280u; UPD(0x0C052B5Eu, 2);  /* 0C052B5C mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C052B5E mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C052B62u, 2);  /* 0C052B60 mov.l Rm,@-Rn */
	IF(0x0C052B62u); MACL = r9 * r0;  /* 0C052B62 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C052B66u, 3);  /* 0C052B64 mov.l Rm,@-Rn */
	r3 = 0xC283794u; UPD(0x0C052B68u, 1);  /* 0C052B66 mov.l @(disp,pc),Rn */
	IF(0x0C052B68u); r7 = MACL;  /* 0C052B68 sts macl,Rn */
	IF(0x0C052B6Au); r15 -= 4; W32(r15, PR); UPD(0x0C052B6Cu, 2);  /* 0C052B6A sts.l pr,@-Rn */
	r7 += r3;  /* 0C052B6C add Rm,Rn */
	r0 = 0x224u; UPD(0x0C052B70u, 2);  /* 0C052B6E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C052B70 mov Rm,Rn */
	IF(0x0C052B72u); r10 = R32(r0 + r7); UPD(0x0C052B74u, 2);  /* 0C052B72 mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C052B76u, 1);  /* 0C052B74 mov.l @(disp,Rm),Rn */
	IF(0x0C052B76u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052B76 shld Rm,Rn */
	IF(0x0C052B78u); r1 = R32(r0 + r10); UPD(0x0C052B7Au, 2);  /* 0C052B78 mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C052B7Cu, 1);  /* 0C052B7A mov.l @(disp,Rm),Rn */
	IF(0x0C052B7Cu); ARG0(0x408Du); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052B7C shld Rm,Rn */
	IF(0x0C052B7Eu); r5 = R32(r0 + r1); UPD(0x0C052B80u, 2);  /* 0C052B7E mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C052B82u, 1);  /* 0C052B80 mov.l @(disp,Rm),Rn */
	IF(0x0C052B82u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C052B82 shld Rm,Rn */
	r0 += r5;  /* 0C052B84 add Rm,Rn */
	r4 = R32(r0 + 0x4u); UPD(0x0C052B88u, 3);  /* 0C052B86 mov.l @(disp,Rm),Rn */
	r2 = R32(r4); UPD(0x0C052B8Au, 1);  /* 0C052B88 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C052B8A tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C052BE4u, 4); goto L_0C052BE4; } goto L_0C052B90; }  /* 0C052B8C bt/s */
L_0C052B90: BLKS(0x0C052B90u);
	r10 = 0xA0u; UPD(0x0C052B92u, 2);  /* 0C052B90 mov.w @(disp,pc),Rn */
	r11 = r3;  /* 0C052B92 mov Rm,Rn */
	UPD(0x0C052B94u, 1);
L_0C052B94: BLKS(0x0C052B94u);
	IF(0x0C052B94u); MACL = r9 * r10;  /* 0C052B94 mul.l Rm,Rn */
	r6 = 0xFFFFFFFu; UPD(0x0C052B98u, 3);  /* 0C052B96 mov.l @(disp,pc),Rn */
	r4 += 0x4u;  /* 0C052B98 add #imm,Rn */
	IF(0x0C052B9Au); r1 = MACL;  /* 0C052B9A sts macl,Rn */
	r1 += r8;  /* 0C052B9C add Rm,Rn */
	r0 = 0xA4u; UPD(0x0C052BA0u, 4);  /* 0C052B9E mov.w @(disp,pc),Rn */
	IF(0x0C052BA0u); r1 <<= 2;  /* 0C052BA0 shll2 Rn */
	r1 += r11;  /* 0C052BA2 add Rm,Rn */
	r6 &= r2;  /* 0C052BA4 and Rm,Rn */
	IF(0x0C052BA6u); W32(r0 + r1, r6); UPD(0x0C052BA8u, 4);  /* 0C052BA6 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r4); r4 += 4; r5 = v_; } UPD(0x0C052BAAu, 1);  /* 0C052BA8 mov.l @Rm+,Rn */
	r0 += 0x40u;  /* 0C052BAA add #imm,Rn */
	IF(0x0C052BACu); W32(r0 + r1, r5); UPD(0x0C052BAEu, 2);  /* 0C052BAC mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r4); r4 += 4; r3 = v_; } UPD(0x0C052BB0u, 1);  /* 0C052BAE mov.l @Rm+,Rn */
	r0 += 0x40u;  /* 0C052BB0 add #imm,Rn */
	W32(r1 + 0x24u, r3); UPD(0x0C052BB4u, 2);  /* 0C052BB2 mov.l Rm,@(disp,Rn) */
	r2 = r3;  /* 0C052BB4 mov Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r7 = v_; } UPD(0x0C052BB8u, 2);  /* 0C052BB6 mov.l @Rm+,Rn */
	r1 += 0x64u;  /* 0C052BB8 add #imm,Rn */
	W32(r1, r7); UPD(0x0C052BBCu, 2);  /* 0C052BBA mov.l Rm,@Rn */
	r2 += r6;  /* 0C052BBC add Rm,Rn */
	r1 += 0xFFFFFF9Cu;  /* 0C052BBE add #imm,Rn */
	IF(0x0C052BC0u); W32(r0 + r1, r2); UPD(0x0C052BC2u, 3);  /* 0C052BC0 mov.l Rm,@(r0,Rn) */
	r3 -= r6;  /* 0C052BC2 sub Rm,Rn */
	r2 = r7;  /* 0C052BC4 mov Rm,Rn */
	r2 -= r5;  /* 0C052BC6 sub Rm,Rn */
	r0 += 0x40u;  /* 0C052BC8 add #imm,Rn */
	IF(0x0C052BCAu); W32(r0 + r1, r2); UPD(0x0C052BCCu, 5);  /* 0C052BCA mov.l Rm,@(r0,Rn) */
	r7 += r5;  /* 0C052BCC add Rm,Rn */
	r0 += 0x40u;  /* 0C052BCE add #imm,Rn */
	IF(0x0C052BD0u); W32(r0 + r1, r3); UPD(0x0C052BD2u, 3);  /* 0C052BD0 mov.l Rm,@(r0,Rn) */
	r2 = r8;  /* 0C052BD2 mov Rm,Rn */
	r0 += 0x40u;  /* 0C052BD4 add #imm,Rn */
	IF(0x0C052BD6u); W32(r0 + r1, r7); UPD(0x0C052BD8u, 3);  /* 0C052BD6 mov.l Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C052BD8 add #imm,Rn */
	r3 = R32(r4); UPD(0x0C052BDCu, 2);  /* 0C052BDA mov.l @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C052BDC exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C052BDE tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052B94u, 5); goto L_0C052B94; } UPD(0x0C052BE4u, 1); goto L_0C052BE4; }  /* 0C052BE0 bf/s */
L_0C052BE4: BLKS(0x0C052BE4u);
	r4 = 0x280u; UPD(0x0C052BE6u, 1);  /* 0C052BE4 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C052BE6 mov #imm,Rn */
	IF(0x0C052BE8u); MACL = r9 * r4;  /* 0C052BE8 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C052BECu, 4);  /* 0C052BEA mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C052BEC mov #imm,Rn */
	IF(0x0C052BEEu); r0 = MACL;  /* 0C052BEE sts macl,Rn */
	r0 += r10;  /* 0C052BF0 add Rm,Rn */
	r0 += 0x20u;  /* 0C052BF2 add #imm,Rn */
	W8(r0, r8); UPD(0x0C052BF6u, 5);  /* 0C052BF4 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C052BF6 add #imm,Rn */
	W8(r0, r7); UPD(0x0C052BFAu, 2);  /* 0C052BF8 mov.b Rm,@Rn */
	r0 += 0xFFFFFFDFu;  /* 0C052BFA add #imm,Rn */
	r6 = 0x224u; UPD(0x0C052BFEu, 2);  /* 0C052BFC mov.w @(disp,pc),Rn */
	r9 = R32(r0 + 0x4u); UPD(0x0C052C00u, 1);  /* 0C052BFE mov.l @(disp,Rm),Rn */
	IF(0x0C052C00u); r11 = R32(r0 + r6); UPD(0x0C052C02u, 1);  /* 0C052C00 mov.l @(r0,Rm),Rn */
	IF(0x0C052C02u); ARG0(0x495Du); { s32 s_ = (s32)r5; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C052C02 shld Rm,Rn */
	r9 += r11;  /* 0C052C04 add Rm,Rn */
	r8 = R32(r9 + 0x4u); UPD(0x0C052C08u, 3);  /* 0C052C06 mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C052C0Au, 1);  /* 0C052C08 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C052C0A tst Rm,Rn */
	if (T) { UPD(0x0C052C1Cu, 4); goto L_0C052C1C; }  /* 0C052C0C bt */
L_0C052C0E: BLKS(0x0C052C0Eu);
	r9 = 0xC057AF0u; UPD(0x0C052C10u, 1);  /* 0C052C0E mov.l @(disp,pc),Rn */
L_0C052C10: BLKS(0x0C052C10u);
	r5 = 0x100u; UPD(0x0C052C12u, 1);  /* 0C052C10 mov.w @(disp,pc),Rn */
	IF(0x0C052C12u); { u32 t_ = r9; PR = 0x0C052C16u; IF(0x0C052C14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057AF0, 0x0C057AF0u, 0x0C052C16u); }  /* 0C052C12 jsr @Rn */
L_0C052C16: BLKS(0x0C052C16u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C052C18u, 1);  /* 0C052C16 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C052C18 tst Rm,Rn */
	if (!T) { UPD(0x0C052C10u, 4); goto L_0C052C10; }  /* 0C052C1A bf */
L_0C052C1C: BLKS(0x0C052C1Cu);
	r15 = r14;  /* 0C052C1C mov Rm,Rn */
	IF(0x0C052C1Eu); PR = R32(r15); r15 += 4; UPD(0x0C052C20u, 2);  /* 0C052C1E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C052C22u, 1);  /* 0C052C20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C052C24u, 1);  /* 0C052C22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C052C26u, 1);  /* 0C052C24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C052C28u, 1);  /* 0C052C26 mov.l @Rm+,Rn */
	IF(0x0C052C28u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C052C28 rts */
}

void f_0C052C50(sh3_t *c)
{
	LOCALS;
L_0C052C50: BLKS(0x0C052C50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C052C52u, 1);  /* 0C052C50 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C052C52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C052C56u, 2);  /* 0C052C54 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C052C56 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C052C5Au, 2);  /* 0C052C58 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C052C5Cu, 1);  /* 0C052C5A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C052C5Eu, 1);  /* 0C052C5C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C052C60u, 1);  /* 0C052C5E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C052C62u, 1);  /* 0C052C60 mov.l Rm,@-Rn */
	IF(0x0C052C62u); r15 -= 4; W32(r15, PR); UPD(0x0C052C64u, 1);  /* 0C052C62 sts.l pr,@-Rn */
	r10 = 0xC0613E0u; UPD(0x0C052C66u, 1);  /* 0C052C64 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C052C66 add #imm,Rn */
	r5 = 0xC22486Eu; UPD(0x0C052C6Au, 2);  /* 0C052C68 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C052C6A mov Rm,Rn */
	r9 = 0xC0AE410u; UPD(0x0C052C6Eu, 2);  /* 0C052C6C mov.l @(disp,pc),Rn */
	r8 = 0xC0AED70u; UPD(0x0C052C70u, 1);  /* 0C052C6E mov.l @(disp,pc),Rn */
	W8(r5, r6); UPD(0x0C052C72u, 1);  /* 0C052C70 mov.b Rm,@Rn */
	IF(0x0C052C72u); { u32 t_ = r10; PR = 0x0C052C76u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C052C76u); }  /* 0C052C72 jsr @Rn */
L_0C052C76: BLKS(0x0C052C76u);
	IF(0x0C052C76u); { u32 t_ = r9; PR = 0x0C052C7Au; IF(0x0C052C78u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C052C7Au); }  /* 0C052C76 jsr @Rn */
L_0C052C7A: BLKS(0x0C052C7Au);
	IF(0x0C052C7Au); { u32 t_ = r8; PR = 0x0C052C7Eu; IF(0x0C052C7Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C052C7Eu); }  /* 0C052C7A jsr @Rn */
L_0C052C7E: BLKS(0x0C052C7Eu);
	r0 = 0xC286288u; UPD(0x0C052C80u, 1);  /* 0C052C7E mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFF80u;  /* 0C052C80 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C052C84u, 2);  /* 0C052C82 mov.b Rm,@Rn */
	r4 = 0xC220C52u; UPD(0x0C052C86u, 1);  /* 0C052C84 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C052C86 mov #imm,Rn */
	r2 = 0xC275DCAu; UPD(0x0C052C8Au, 2);  /* 0C052C88 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C052C8Cu, 1);  /* 0C052C8A mov.b Rm,@Rn */
	W8(r2, r3); UPD(0x0C052C8Eu, 1);  /* 0C052C8C mov.b Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C052C90u, 1);  /* 0C052C8E mov.l Rm,@(disp,Rn) */
L_0C052C90: BLKS(0x0C052C90u);
	r10 = 0xC04F330u; UPD(0x0C052C92u, 1);  /* 0C052C90 mov.l @(disp,pc),Rn */
	r9 = 0xC04F930u; UPD(0x0C052C94u, 1);  /* 0C052C92 mov.l @(disp,pc),Rn */
	IF(0x0C052C94u); { u32 t_ = r10; PR = 0x0C052C98u; IF(0x0C052C96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C052C98u); }  /* 0C052C94 jsr @Rn */
L_0C052C98: BLKS(0x0C052C98u);
	r8 = 0xC050650u; UPD(0x0C052C9Au, 1);  /* 0C052C98 mov.l @(disp,pc),Rn */
	IF(0x0C052C9Au); { u32 t_ = r9; PR = 0x0C052C9Eu; IF(0x0C052C9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C052C9Eu); }  /* 0C052C9A jsr @Rn */
L_0C052C9E: BLKS(0x0C052C9Eu);
	IF(0x0C052C9Eu); { u32 t_ = r8; PR = 0x0C052CA2u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C052CA2u); }  /* 0C052C9E jsr @Rn */
L_0C052CA2: BLKS(0x0C052CA2u);
	r8 = 0xC0505F0u; UPD(0x0C052CA4u, 1);  /* 0C052CA2 mov.l @(disp,pc),Rn */
	r12 = 0xC050CD0u; UPD(0x0C052CA6u, 1);  /* 0C052CA4 mov.l @(disp,pc),Rn */
	IF(0x0C052CA6u); { u32 t_ = r8; PR = 0x0C052CAAu; IF(0x0C052CA8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C052CAAu); }  /* 0C052CA6 jsr @Rn */
L_0C052CAA: BLKS(0x0C052CAAu);
	r13 = 0xC220C2Cu; UPD(0x0C052CACu, 1);  /* 0C052CAA mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C052CAC mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C052CB0u, 2);  /* 0C052CAE mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C052CB0 mov #imm,Rn */
	W32(r13, r0); UPD(0x0C052CB4u, 2);  /* 0C052CB2 mov.l Rm,@Rn */
	r4 = 0xC16052Cu; UPD(0x0C052CB6u, 1);  /* 0C052CB4 mov.l @(disp,pc),Rn */
	IF(0x0C052CB6u); { u32 t_ = r12; PR = 0x0C052CBAu; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052CBAu); }  /* 0C052CB6 jsr @Rn */
L_0C052CBA: BLKS(0x0C052CBAu);
	r0 = 0x80u; UPD(0x0C052CBCu, 1);  /* 0C052CBA mov.w @(disp,pc),Rn */
	r11 = 0xC27DDF4u; UPD(0x0C052CBEu, 1);  /* 0C052CBC mov.l @(disp,pc),Rn */
	IF(0x0C052CBEu); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C052CC0u, 1);  /* 0C052CBE mov.b @(r0,Rm),Rn */
	IF(0x0C052CC0u); T = (s32)r7 >= 0;  /* 0C052CC0 cmp/pz Rn */
	{ u32 c_ = T; r2 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C052CDEu, 4); goto L_0C052CDE; } UPD(0x0C052CC6u, 1); goto L_0C052CC6; }  /* 0C052CC2 bt/s */
L_0C052CC6: BLKS(0x0C052CC6u);
	r2 = R32(r14); UPD(0x0C052CC8u, 1);  /* 0C052CC6 mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C052CC8 add #imm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C052CCA exts.b Rm,Rn */
	r0 = r3;  /* 0C052CCC mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C052CCE cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r14, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C052CD8u, 7); goto L_0C052CD8; } UPD(0x0C052CD4u, 1); goto L_0C052CD4; }  /* 0C052CD0 bf/s */
L_0C052CD4: BLKS(0x0C052CD4u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C053130u, 3); goto L_0C053130; }  /* 0C052CD4 bra */
L_0C052CD8: BLKS(0x0C052CD8u);
	IF(0x0C052CD8u); { u32 t_ = r8; PR = 0x0C052CDCu; IF(0x0C052CDAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C052CDCu); }  /* 0C052CD8 jsr @Rn */
L_0C052CDC: BLKS(0x0C052CDCu);
	r2 = R32(r14); UPD(0x0C052CDEu, 1);  /* 0C052CDC mov.l @Rm,Rn */
L_0C052CDE: BLKS(0x0C052CDEu);
	T = (r2 & r2) == 0;  /* 0C052CDE tst Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052CE8u, 4); goto L_0C052CE8; } goto L_0C052CE4; }  /* 0C052CE0 bf/s */
L_0C052CE4: BLKS(0x0C052CE4u);
	{ r8 = 0xCu; /* slot mov #imm,Rn */ UPD(0x0C053070u, 4); goto L_0C053070; }  /* 0C052CE4 bra */
L_0C052CE8: BLKS(0x0C052CE8u);
	T = r0 == 0x1u;  /* 0C052CE8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C052DA0u, 4); goto L_0C052DA0; } UPD(0x0C052CEEu, 1); goto L_0C052CEE; }  /* 0C052CEA bt/s */
L_0C052CEE: BLKS(0x0C052CEEu);
	r13 = 0xC0AE540u; UPD(0x0C052CF0u, 1);  /* 0C052CEE mov.l @(disp,pc),Rn */
	r10 = 0xC0AF650u; UPD(0x0C052CF2u, 1);  /* 0C052CF0 mov.l @(disp,pc),Rn */
	IF(0x0C052CF2u); { u32 t_ = r13; PR = 0x0C052CF6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE540, 0x0C0AE540u, 0x0C052CF6u); }  /* 0C052CF2 jsr @Rn */
L_0C052CF6: BLKS(0x0C052CF6u);
	r9 = 0x17u;  /* 0C052CF6 mov #imm,Rn */
	r11 = r8;  /* 0C052CF8 mov Rm,Rn */
	UPD(0x0C052CFAu, 2);
L_0C052CFA: BLKS(0x0C052CFAu);
	r4 = r8;  /* 0C052CFA mov Rm,Rn */
	IF(0x0C052CFCu); { u32 t_ = r10; PR = 0x0C052D00u; r11 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AF650, 0x0C0AF650u, 0x0C052D00u); }  /* 0C052CFC jsr @Rn */
L_0C052D00: BLKS(0x0C052D00u);
	r8 = (u32)(s32)(s16)r11;  /* 0C052D00 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C052D02 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052CFAu, 5); goto L_0C052CFA; } goto L_0C052D08; }  /* 0C052D04 bf/s */
L_0C052D08: BLKS(0x0C052D08u);
	r13 = 0xC04F770u; UPD(0x0C052D0Au, 2);  /* 0C052D08 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C052D0A mov #imm,Rn */
	r8 = 0xC050840u; UPD(0x0C052D0Eu, 2);  /* 0C052D0C mov.l @(disp,pc),Rn */
	IF(0x0C052D0Eu); { u32 t_ = r13; PR = 0x0C052D12u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C052D12u); }  /* 0C052D0E jsr @Rn */
L_0C052D12: BLKS(0x0C052D12u);
	IF(0x0C052D12u); { u32 t_ = r8; PR = 0x0C052D16u; IF(0x0C052D14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C052D16u); }  /* 0C052D12 jsr @Rn */
L_0C052D16: BLKS(0x0C052D16u);
	r4 = 0xC21F880u; UPD(0x0C052D18u, 1);  /* 0C052D16 mov.l @(disp,pc),Rn */
	r12 = 0xC2862A2u; UPD(0x0C052D1Au, 1);  /* 0C052D18 mov.l @(disp,pc),Rn */
	r9 = R32(r4); UPD(0x0C052D1Cu, 1);  /* 0C052D1A mov.l @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C052D1Eu, 1);  /* 0C052D1C mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C052D1E add #imm,Rn */
	IF(0x0C052D20u); T = (s32)r10 >= 0;  /* 0C052D20 cmp/pz Rn */
	{ u32 c_ = T; W32(r4, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C052C90u, 5); goto L_0C052C90; } UPD(0x0C052D26u, 1); goto L_0C052D26; }  /* 0C052D22 bt/s */
L_0C052D26: BLKS(0x0C052D26u);
	r14 += 0x8u;  /* 0C052D26 add #imm,Rn */
	r15 = r14;  /* 0C052D28 mov Rm,Rn */
	IF(0x0C052D2Au); PR = R32(r15); r15 += 4; UPD(0x0C052D2Cu, 3);  /* 0C052D2A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C052D2Eu, 1);  /* 0C052D2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C052D30u, 1);  /* 0C052D2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C052D32u, 1);  /* 0C052D30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C052D34u, 1);  /* 0C052D32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C052D36u, 1);  /* 0C052D34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C052D38u, 1);  /* 0C052D36 mov.l @Rm+,Rn */
	IF(0x0C052D38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C052D38 rts */
L_0C052DA0: BLKS(0x0C052DA0u);
	r11 = 0xC050CD0u; UPD(0x0C052DA2u, 1);  /* 0C052DA0 mov.l @(disp,pc),Rn */
	r10 = 0x27u;  /* 0C052DA2 mov #imm,Rn */
	UPD(0x0C052DA4u, 1);
L_0C052DA4: BLKS(0x0C052DA4u);
	r8 = 0x4u;  /* 0C052DA4 mov #imm,Rn */
	IF(0x0C052DA6u); ;  /* 0C052DA6 nop */
	UPD(0x0C052DA8u, 2);
L_0C052DA8: BLKS(0x0C052DA8u);
	r7 = 0x80808000u; UPD(0x0C052DAAu, 1);  /* 0C052DA8 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C052DAA mov Rm,Rn */
	r4 = 0xC160B7Cu; UPD(0x0C052DAEu, 2);  /* 0C052DAC mov.l @(disp,pc),Rn */
	IF(0x0C052DAEu); { u32 t_ = r11; PR = 0x0C052DB2u; r6 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052DB2u); }  /* 0C052DAE jsr @Rn */
L_0C052DB2: BLKS(0x0C052DB2u);
	r7 = r8;  /* 0C052DB2 mov Rm,Rn */
	r7 += 0x4u;  /* 0C052DB4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C052DB6 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C052DB8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C052DA8u, 7); goto L_0C052DA8; } goto L_0C052DBE; }  /* 0C052DBA bf/s */
L_0C052DBE: BLKS(0x0C052DBEu);
	r3 += 0x4u;  /* 0C052DBE add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C052DC0 exts.w Rm,Rn */
	r0 = 0x1Du;  /* 0C052DC2 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C052DC4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C052DA4u, 8); goto L_0C052DA4; }  /* 0C052DC6 bf */
L_0C052DC8: BLKS(0x0C052DC8u);
	r1 = 0xC27DDF4u; UPD(0x0C052DCAu, 1);  /* 0C052DC8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C052DCCu, 1);  /* 0C052DCA mov.b @Rm,Rn */
	r0 &= 0x10u;  /* 0C052DCC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052DCE tst Rm,Rn */
	if (!T) { UPD(0x0C052DD6u, 5); goto L_0C052DD6; }  /* 0C052DD0 bf */
L_0C052DD2: BLKS(0x0C052DD2u);
	{ IF(0x0C052DD4u); ; /* slot nop */ UPD(0x0C052FC0u, 3); goto L_0C052FC0; }  /* 0C052DD2 bra */
L_0C052DD6: BLKS(0x0C052DD6u);
	r0 = 0x100u; UPD(0x0C052DD8u, 1);  /* 0C052DD6 mov.w @(disp,pc),Rn */
	IF(0x0C052DD8u); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C052DDAu, 1);  /* 0C052DD8 mov.b @(r0,Rm),Rn */
	r0 = r3;  /* 0C052DDA mov Rm,Rn */
	r0 &= 0x1u;  /* 0C052DDC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052DDE tst Rm,Rn */
	if (T) { UPD(0x0C052DE8u, 6); goto L_0C052DE8; }  /* 0C052DE0 bt */
L_0C052DE2: BLKS(0x0C052DE2u);
	r1 = 0x80000u; UPD(0x0C052DE4u, 1);  /* 0C052DE2 mov.l @(disp,pc),Rn */
	r4 = 0xC220C2Cu; UPD(0x0C052DE6u, 1);  /* 0C052DE4 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C052DE8u, 1);  /* 0C052DE6 mov.l Rm,@Rn */
L_0C052DE8: BLKS(0x0C052DE8u);
	r8 = 0xC283CA4u; UPD(0x0C052DEAu, 1);  /* 0C052DE8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)r3;  /* 0C052DEA exts.b Rm,Rn */
	r11 = R32(r8); UPD(0x0C052DEEu, 2);  /* 0C052DEC mov.l @Rm,Rn */
	IF(0x0C052DEEu); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C052DEE shar Rn */
	IF(0x0C052DF0u); T = (s32)r11 > 0;  /* 0C052DF0 cmp/pl Rn */
	r0 = r3;  /* 0C052DF2 mov Rm,Rn */
	IF(0x0C052DF4u); r2 = T;  /* 0C052DF4 movt Rn */
	r0 &= 0x1u;  /* 0C052DF6 and #imm,r0 */
	r0 &= r2;  /* 0C052DF8 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C052DFA tst Rm,Rn */
	if (T) { UPD(0x0C052E04u, 10); goto L_0C052E04; }  /* 0C052DFC bt */
L_0C052DFE: BLKS(0x0C052DFEu);
	r13 = 0xFFF80000u; UPD(0x0C052E00u, 1);  /* 0C052DFE mov.l @(disp,pc),Rn */
	r12 = 0xC220C2Cu; UPD(0x0C052E02u, 1);  /* 0C052E00 mov.l @(disp,pc),Rn */
	W32(r12, r13); UPD(0x0C052E04u, 1);  /* 0C052E02 mov.l Rm,@Rn */
L_0C052E04: BLKS(0x0C052E04u);
	r9 = 0xC3929E0u; UPD(0x0C052E06u, 1);  /* 0C052E04 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C052E06 mov Rm,Rn */
	r2 = R32(r9); UPD(0x0C052E0Au, 2);  /* 0C052E08 mov.l @Rm,Rn */
	IF(0x0C052E0Au); r0 >>= 2;  /* 0C052E0A shlr2 Rn */
	r6 = 0x1AFFFFFu; UPD(0x0C052E0Eu, 2);  /* 0C052E0C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C052E0E and #imm,r0 */
	T = (s32)r6 >= (s32)r2;  /* 0C052E10 cmp/ge Rm,Rn */
	IF(0x0C052E12u); r5 = T;  /* 0C052E12 movt Rn */
	r0 &= r5;  /* 0C052E14 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C052E16 tst Rm,Rn */
	if (T) { UPD(0x0C052E22u, 8); goto L_0C052E22; }  /* 0C052E18 bt */
L_0C052E1A: BLKS(0x0C052E1Au);
	r10 = 0x80000u; UPD(0x0C052E1Cu, 1);  /* 0C052E1A mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C052E1C add Rm,Rn */
	W32(r9, r10); UPD(0x0C052E20u, 2);  /* 0C052E1E mov.l Rm,@Rn */
	r2 = r10;  /* 0C052E20 mov Rm,Rn */
	UPD(0x0C052E22u, 1);
L_0C052E22: BLKS(0x0C052E22u);
	r0 = 0x1600000u; UPD(0x0C052E24u, 1);  /* 0C052E22 mov.l @(disp,pc),Rn */
	IF(0x0C052E24u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C052E24 shar Rn */
	T = (s32)r2 > (s32)r0;  /* 0C052E26 cmp/gt Rm,Rn */
	r4 = 0x1u;  /* 0C052E28 mov #imm,Rn */
	IF(0x0C052E2Au); r7 = T;  /* 0C052E2A movt Rn */
	r3 &= r4;  /* 0C052E2C and Rm,Rn */
	r3 &= r7;  /* 0C052E2E and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C052E30 tst Rm,Rn */
	if (T) { UPD(0x0C052E3Au, 10); goto L_0C052E3A; }  /* 0C052E32 bt */
L_0C052E34: BLKS(0x0C052E34u);
	r3 = 0xFFF80000u; UPD(0x0C052E36u, 1);  /* 0C052E34 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C052E36 add Rm,Rn */
	W32(r9, r3); UPD(0x0C052E3Au, 2);  /* 0C052E38 mov.l Rm,@Rn */
L_0C052E3A: BLKS(0x0C052E3Au);
	r12 = 0xC050CD0u; UPD(0x0C052E3Cu, 1);  /* 0C052E3A mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C052E3C mov #imm,Rn */
	r4 = 0xC160B98u; UPD(0x0C052E40u, 2);  /* 0C052E3E mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052E42u, 1);  /* 0C052E40 mov.l @(disp,pc),Rn */
	IF(0x0C052E42u); { u32 t_ = r12; PR = 0x0C052E46u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E46u); }  /* 0C052E42 jsr @Rn */
L_0C052E46: BLKS(0x0C052E46u);
	r1 = 0xC050CD0u; UPD(0x0C052E48u, 1);  /* 0C052E46 mov.l @(disp,pc),Rn */
	r5 = 0x23u;  /* 0C052E48 mov #imm,Rn */
	r11 = 0xC0509B0u; UPD(0x0C052E4Cu, 2);  /* 0C052E4A mov.l @(disp,pc),Rn */
	r4 = 0xC160BA0u; UPD(0x0C052E4Eu, 1);  /* 0C052E4C mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052E50u, 1);  /* 0C052E4E mov.l @(disp,pc),Rn */
	IF(0x0C052E50u); { u32 t_ = r1; PR = 0x0C052E54u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E54u); }  /* 0C052E50 jsr @Rn */
L_0C052E54: BLKS(0x0C052E54u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C052E56u, 1);  /* 0C052E54 mov.w @Rm,Rn */
	r5 = 0x24u;  /* 0C052E56 mov #imm,Rn */
	IF(0x0C052E58u); { u32 t_ = r11; PR = 0x0C052E5Cu; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C052E5Cu); }  /* 0C052E58 jsr @Rn */
L_0C052E5C: BLKS(0x0C052E5Cu);
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C052E5Eu, 1);  /* 0C052E5C mov.w @Rm,Rn */
	r5 = 0x23u;  /* 0C052E5E mov #imm,Rn */
	IF(0x0C052E60u); { u32 t_ = r11; PR = 0x0C052E64u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C052E64u); }  /* 0C052E60 jsr @Rn */
L_0C052E64: BLKS(0x0C052E64u);
	r3 = 0xC050CD0u; UPD(0x0C052E66u, 1);  /* 0C052E64 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052E66 mov #imm,Rn */
	r4 = 0xC160BA8u; UPD(0x0C052E6Au, 2);  /* 0C052E68 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052E6Cu, 1);  /* 0C052E6A mov.l @(disp,pc),Rn */
	IF(0x0C052E6Cu); { u32 t_ = r3; PR = 0x0C052E70u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E70u); }  /* 0C052E6C jsr @Rn */
L_0C052E70: BLKS(0x0C052E70u);
	r8 = 0xC050CD0u; UPD(0x0C052E72u, 1);  /* 0C052E70 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052E72 mov #imm,Rn */
	r4 = 0xC160BACu; UPD(0x0C052E76u, 2);  /* 0C052E74 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052E78u, 1);  /* 0C052E76 mov.l @(disp,pc),Rn */
	IF(0x0C052E78u); { u32 t_ = r8; PR = 0x0C052E7Cu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E7Cu); }  /* 0C052E78 jsr @Rn */
L_0C052E7C: BLKS(0x0C052E7Cu);
	r10 = 0xC050CD0u; UPD(0x0C052E7Eu, 1);  /* 0C052E7C mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052E7E mov #imm,Rn */
	r13 = 0xC050CD0u; UPD(0x0C052E82u, 2);  /* 0C052E80 mov.l @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C052E82 mov #imm,Rn */
	r4 = 0xC160BB0u; UPD(0x0C052E86u, 2);  /* 0C052E84 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052E88u, 1);  /* 0C052E86 mov.l @(disp,pc),Rn */
	IF(0x0C052E88u); { u32 t_ = r10; PR = 0x0C052E8Cu; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E8Cu); }  /* 0C052E88 jsr @Rn */
L_0C052E8C: BLKS(0x0C052E8Cu);
	r4 = 0xC160BB4u; UPD(0x0C052E8Eu, 1);  /* 0C052E8C mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052E8E mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C052E92u, 2);  /* 0C052E90 mov.l @(disp,pc),Rn */
	IF(0x0C052E92u); { u32 t_ = r13; PR = 0x0C052E96u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052E96u); }  /* 0C052E92 jsr @Rn */
L_0C052E96: BLKS(0x0C052E96u);
	r2 = 0xC050CD0u; UPD(0x0C052E98u, 1);  /* 0C052E96 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052E98 mov #imm,Rn */
	r12 = 0xC050CD0u; UPD(0x0C052E9Cu, 2);  /* 0C052E9A mov.l @(disp,pc),Rn */
	r6 = 0x11u;  /* 0C052E9C mov #imm,Rn */
	r4 = 0xC160BBCu; UPD(0x0C052EA0u, 2);  /* 0C052E9E mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C052EA2u, 1);  /* 0C052EA0 mov.l @(disp,pc),Rn */
	IF(0x0C052EA2u); { u32 t_ = r2; PR = 0x0C052EA6u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052EA6u); }  /* 0C052EA2 jsr @Rn */
L_0C052EA6: BLKS(0x0C052EA6u);
	r4 = 0xC160BC4u; UPD(0x0C052EA8u, 1);  /* 0C052EA6 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C052EA8 mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C052EACu, 2);  /* 0C052EAA mov.l @(disp,pc),Rn */
	IF(0x0C052EACu); { u32 t_ = r12; PR = 0x0C052EB0u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052EB0u); }  /* 0C052EAC jsr @Rn */
L_0C052EB0: BLKS(0x0C052EB0u);
	r12 = 0x0u;  /* 0C052EB0 mov #imm,Rn */
	r13 = 0x0u;  /* 0C052EB2 mov #imm,Rn */
	UPD(0x0C052EB4u, 2);
L_0C052EB4: BLKS(0x0C052EB4u);
	r9 = 0u - r10;  /* 0C052EB4 neg Rm,Rn */
	r0 = 0xC050A80u; UPD(0x0C052EB8u, 2);  /* 0C052EB6 mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C052EB8 mov Rm,Rn */
	r8 += 0x1Du;  /* 0C052EBA add #imm,Rn */
	r5 = r8;  /* 0C052EBC mov Rm,Rn */
	r6 = 0x1u;  /* 0C052EBE mov #imm,Rn */
	IF(0x0C052EC0u); { u32 t_ = r0; PR = 0x0C052EC4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C052EC4u); }  /* 0C052EC0 jsr @Rn */
L_0C052EC4: BLKS(0x0C052EC4u);
	r5 = 0xC26CAE0u; UPD(0x0C052EC6u, 1);  /* 0C052EC4 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C052EC6 mov Rm,Rn */
	IF(0x0C052EC8u); r7 = R32(r0 + r5); UPD(0x0C052ECAu, 2);  /* 0C052EC8 mov.l @(r0,Rm),Rn */
	r6 = 0x40000000u; UPD(0x0C052ECCu, 1);  /* 0C052ECA mov.l @(disp,pc),Rn */
	r1 = 0xC160BCCu; UPD(0x0C052ECEu, 1);  /* 0C052ECC mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C052ECE tst Rm,Rn */
	{ u32 c_ = !T; r5 = (u32)(s32)(s8)r8; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C052ED6u, 4); goto L_0C052ED6; } goto L_0C052ED4; }  /* 0C052ED0 bf/s */
L_0C052ED4: BLKS(0x0C052ED4u);
	r1 = 0xC160BD0u; UPD(0x0C052ED6u, 2);  /* 0C052ED4 mov.l @(disp,pc),Rn */
L_0C052ED6: BLKS(0x0C052ED6u);
	r8 = 0xC050CD0u; UPD(0x0C052ED8u, 1);  /* 0C052ED6 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C052ED8 mov #imm,Rn */
	r4 = R32(r1); UPD(0x0C052EDCu, 2);  /* 0C052EDA mov.l @Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C052EDEu, 1);  /* 0C052EDC mov.l @(disp,pc),Rn */
	IF(0x0C052EDEu); { u32 t_ = r8; PR = 0x0C052EE2u; r9 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052EE2u); }  /* 0C052EDE jsr @Rn */
L_0C052EE2: BLKS(0x0C052EE2u);
	r2 = 0xC26CAE0u; UPD(0x0C052EE4u, 1);  /* 0C052EE2 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C052EE4 mov Rm,Rn */
	IF(0x0C052EE6u); r4 = R32(r0 + r2); UPD(0x0C052EE8u, 2);  /* 0C052EE6 mov.l @(r0,Rm),Rn */
	r5 = (u32)(s32)(s8)r9;  /* 0C052EE8 exts.b Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C052EECu, 2);  /* 0C052EEA mov.l @(disp,pc),Rn */
	r1 = 0xC160BCCu; UPD(0x0C052EEEu, 1);  /* 0C052EEC mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C052EEE tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFE3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052EF6u, 4); goto L_0C052EF6; } goto L_0C052EF4; }  /* 0C052EF0 bf/s */
L_0C052EF4: BLKS(0x0C052EF4u);
	r1 = 0xC160BD0u; UPD(0x0C052EF6u, 2);  /* 0C052EF4 mov.l @(disp,pc),Rn */
L_0C052EF6: BLKS(0x0C052EF6u);
	r8 = 0xC050CD0u; UPD(0x0C052EF8u, 1);  /* 0C052EF6 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C052EF8 mov #imm,Rn */
	r4 = R32(r1); UPD(0x0C052EFCu, 2);  /* 0C052EFA mov.l @Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C052EFEu, 1);  /* 0C052EFC mov.l @(disp,pc),Rn */
	IF(0x0C052EFEu); { u32 t_ = r8; PR = 0x0C052F02u; r9 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052F02u); }  /* 0C052EFE jsr @Rn */
L_0C052F02: BLKS(0x0C052F02u);
	r8 = 0xC26CAE0u; UPD(0x0C052F04u, 1);  /* 0C052F02 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C052F04 mov Rm,Rn */
	r8 += r12;  /* 0C052F06 add Rm,Rn */
	r3 = R32(r8 + 0x8u); UPD(0x0C052F0Au, 3);  /* 0C052F08 mov.l @(disp,Rm),Rn */
	r6 = 0xCu;  /* 0C052F0A mov #imm,Rn */
	r2 = 0xC0509B0u; UPD(0x0C052F0Eu, 2);  /* 0C052F0C mov.l @(disp,pc),Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C052F0E swap.w Rm,Rn */
	IF(0x0C052F10u); { u32 t_ = r2; PR = 0x0C052F14u; r4 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C052F14u); }  /* 0C052F10 jsr @Rn */
L_0C052F14: BLKS(0x0C052F14u);
	r5 = R32(r8 + 0xCu); UPD(0x0C052F16u, 1);  /* 0C052F14 mov.l @(disp,Rm),Rn */
	r12 += 0x4Cu;  /* 0C052F16 add #imm,Rn */
	r7 = 0xC0509B0u; UPD(0x0C052F1Au, 2);  /* 0C052F18 mov.l @(disp,pc),Rn */
	r6 = (r5 >> 16) | (r5 << 16);  /* 0C052F1A swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C052F1C exts.w Rm,Rn */
	r5 = r9;  /* 0C052F1E mov Rm,Rn */
	r6 = 0x11u;  /* 0C052F20 mov #imm,Rn */
	IF(0x0C052F22u); { u32 t_ = r7; PR = 0x0C052F26u; r8 += 0x42u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C052F26u); }  /* 0C052F22 jsr @Rn */
L_0C052F26: BLKS(0x0C052F26u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C052F28u, 1);  /* 0C052F26 mov.b @Rm,Rn */
	r5 = r9;  /* 0C052F28 mov Rm,Rn */
	r8 = 0xC050A80u; UPD(0x0C052F2Cu, 2);  /* 0C052F2A mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFF;  /* 0C052F2C extu.b Rm,Rn */
	IF(0x0C052F2Eu); { u32 t_ = r8; PR = 0x0C052F32u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C052F32u); }  /* 0C052F2E jsr @Rn */
L_0C052F32: BLKS(0x0C052F32u);
	r3 = r10;  /* 0C052F32 mov Rm,Rn */
	r3 += 0x1u;  /* 0C052F34 add #imm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C052F36 exts.w Rm,Rn */
	r9 = 0x7u;  /* 0C052F38 mov #imm,Rn */
	r13 += 0x4Cu;  /* 0C052F3A add #imm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C052F3C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C052EB4u, 9); goto L_0C052EB4; } goto L_0C052F42; }  /* 0C052F3E bf/s */
L_0C052F42: BLKS(0x0C052F42u);
	{ IF(0x0C052F44u); ; /* slot nop */ UPD(0x0C052CEEu, 4); goto L_0C052CEE; }  /* 0C052F42 bra */
L_0C052FC0: BLKS(0x0C052FC0u);
	r0 = 0x100u; UPD(0x0C052FC2u, 1);  /* 0C052FC0 mov.w @(disp,pc),Rn */
	IF(0x0C052FC2u); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C052FC4u, 1);  /* 0C052FC2 mov.b @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C052FC4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052FC6 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053040u, 5); goto L_0C053040; } UPD(0x0C052FCCu, 1); goto L_0C052FCC; }  /* 0C052FC8 bf/s */
L_0C052FCC: BLKS(0x0C052FCCu);
	r2 = 0xC27DDF4u; UPD(0x0C052FCEu, 1);  /* 0C052FCC mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C052FD0u, 1);  /* 0C052FCE mov.w @(disp,pc),Rn */
	IF(0x0C052FD0u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C052FD2u, 1);  /* 0C052FD0 mov.b @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C052FD2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C052FD4 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053010u, 5); goto L_0C053010; } UPD(0x0C052FDAu, 1); goto L_0C052FDA; }  /* 0C052FD6 bf/s */
L_0C052FDA: BLKS(0x0C052FDAu);
	r6 = 0x4u;  /* 0C052FDA mov #imm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C052FDEu, 2);  /* 0C052FDC mov.l @(disp,pc),Rn */
	r5 = 0u - r7;  /* 0C052FDE neg Rm,Rn */
	r4 = 0xC160690u; UPD(0x0C052FE2u, 2);  /* 0C052FE0 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C052FE4u, 1);  /* 0C052FE2 mov.l @(disp,pc),Rn */
	IF(0x0C052FE4u); { u32 t_ = r8; PR = 0x0C052FE8u; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C052FE8u); }  /* 0C052FE4 jsr @Rn */
L_0C052FE8: BLKS(0x0C052FE8u);
	r10 = 0xC27DDF4u; UPD(0x0C052FEAu, 1);  /* 0C052FE8 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C052FECu, 1);  /* 0C052FEA mov.w @(disp,pc),Rn */
	IF(0x0C052FECu); r0 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C052FEEu, 1);  /* 0C052FEC mov.b @(r0,Rm),Rn */
	T = (r0 & 0xCu) == 0;  /* 0C052FEE tst #imm,r0 */
	{ u32 c_ = T; r1 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053006u, 4); goto L_0C053006; } UPD(0x0C052FF4u, 1); goto L_0C052FF4; }  /* 0C052FF0 bt/s */
L_0C052FF4: BLKS(0x0C052FF4u);
	r11 = 0x4Cu;  /* 0C052FF4 mov #imm,Rn */
	IF(0x0C052FF6u); MACL = r1 * r11;  /* 0C052FF6 mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C052FFAu, 4);  /* 0C052FF8 mov.l @(disp,pc),Rn */
	IF(0x0C052FFAu); r0 = MACL;  /* 0C052FFA sts macl,Rn */
	r0 += r9;  /* 0C052FFC add Rm,Rn */
	r4 = R32(r0); UPD(0x0C053000u, 3);  /* 0C052FFE mov.l @Rm,Rn */
	r3 = 0x40000000u; UPD(0x0C053002u, 1);  /* 0C053000 mov.l @(disp,pc),Rn */
	r4 ^= r3;  /* 0C053002 xor Rm,Rn */
	W32(r0, r4); UPD(0x0C053006u, 2);  /* 0C053004 mov.l Rm,@Rn */
L_0C053006: BLKS(0x0C053006u);
	r8 = 0xC283CA4u; UPD(0x0C053008u, 1);  /* 0C053006 mov.l @(disp,pc),Rn */
	r9 = 0xC3929E0u; UPD(0x0C05300Au, 1);  /* 0C053008 mov.l @(disp,pc),Rn */
	{ IF(0x0C05300Cu); ; /* slot nop */ UPD(0x0C052E3Au, 3); goto L_0C052E3A; }  /* 0C05300A bra */
L_0C053010: BLKS(0x0C053010u);
	r13 = R32(r14 + 0x4u); UPD(0x0C053012u, 1);  /* 0C053010 mov.l @(disp,Rm),Rn */
	r6 = 0x4u;  /* 0C053012 mov #imm,Rn */
	r12 = 0xC050CD0u; UPD(0x0C053016u, 2);  /* 0C053014 mov.l @(disp,pc),Rn */
	r5 = 0u - r13;  /* 0C053016 neg Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C05301Au, 2);  /* 0C053018 mov.l @(disp,pc),Rn */
	r4 = 0xC160B78u; UPD(0x0C05301Cu, 1);  /* 0C05301A mov.l @(disp,pc),Rn */
	IF(0x0C05301Cu); { u32 t_ = r12; PR = 0x0C053020u; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053020u); }  /* 0C05301C jsr @Rn */
L_0C053020: BLKS(0x0C053020u);
	r7 = 0xC160B80u; UPD(0x0C053022u, 1);  /* 0C053020 mov.l @(disp,pc),Rn */
	r2 = 0x4Cu;  /* 0C053022 mov #imm,Rn */
	r3 = 0xC26CAE0u; UPD(0x0C053026u, 2);  /* 0C053024 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C053028u, 1);  /* 0C053026 mov.l @(disp,Rm),Rn */
L_0C053028: BLKS(0x0C053028u);
	IF(0x0C053028u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05302Au, 1);  /* 0C053028 mov.b @(r0,Rm),Rn */
	IF(0x0C05302Au); MACL = r6 * r2;  /* 0C05302A mul.l Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C05302Eu, 3);  /* 0C05302C mov.l Rm,@(disp,Rn) */
	IF(0x0C05302Eu); r0 = MACL;  /* 0C05302E sts macl,Rn */
	IF(0x0C053030u); r5 = R32(r0 + r3); UPD(0x0C053032u, 2);  /* 0C053030 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C053032 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053028u, 4); goto L_0C053028; } UPD(0x0C053038u, 1); goto L_0C053038; }  /* 0C053034 bt/s */
L_0C053038: BLKS(0x0C053038u);
	{ r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C052FDAu, 3); goto L_0C052FDA; }  /* 0C053038 bra */
L_0C053040: BLKS(0x0C053040u);
	r6 = 0x4u;  /* 0C053040 mov #imm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C053044u, 2);  /* 0C053042 mov.l @(disp,pc),Rn */
	r5 = 0u - r9;  /* 0C053044 neg Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C053048u, 2);  /* 0C053046 mov.l @(disp,pc),Rn */
	r4 = 0xC160B78u; UPD(0x0C05304Au, 1);  /* 0C053048 mov.l @(disp,pc),Rn */
	IF(0x0C05304Au); { u32 t_ = r8; PR = 0x0C05304Eu; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05304Eu); }  /* 0C05304A jsr @Rn */
L_0C05304E: BLKS(0x0C05304Eu);
	r7 = 0xC160B88u; UPD(0x0C053050u, 1);  /* 0C05304E mov.l @(disp,pc),Rn */
	r2 = 0x4Cu;  /* 0C053050 mov #imm,Rn */
	r3 = 0xC26CAE0u; UPD(0x0C053054u, 2);  /* 0C053052 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C053056u, 1);  /* 0C053054 mov.l @(disp,Rm),Rn */
L_0C053056: BLKS(0x0C053056u);
	IF(0x0C053056u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C053058u, 1);  /* 0C053056 mov.b @(r0,Rm),Rn */
	IF(0x0C053058u); MACL = r1 * r2;  /* 0C053058 mul.l Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C05305Cu, 3);  /* 0C05305A mov.l Rm,@(disp,Rn) */
	IF(0x0C05305Cu); r0 = MACL;  /* 0C05305C sts macl,Rn */
	IF(0x0C05305Eu); r11 = R32(r0 + r3); UPD(0x0C053060u, 2);  /* 0C05305E mov.l @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C053060 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053056u, 4); goto L_0C053056; } UPD(0x0C053066u, 1); goto L_0C053066; }  /* 0C053062 bt/s */
L_0C053066: BLKS(0x0C053066u);
	{ IF(0x0C053068u); ; /* slot nop */ UPD(0x0C052FCCu, 3); goto L_0C052FCC; }  /* 0C053066 bra */
L_0C053070: BLKS(0x0C053070u);
	r6 = 0xC27DDF4u; UPD(0x0C053072u, 1);  /* 0C053070 mov.l @(disp,pc),Rn */
	r0 = 0x80u; UPD(0x0C053074u, 1);  /* 0C053072 mov.w @(disp,pc),Rn */
	IF(0x0C053074u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C053076u, 1);  /* 0C053074 mov.b @(r0,Rm),Rn */
	r3 = 0xC1F519Cu; UPD(0x0C053078u, 1);  /* 0C053076 mov.l @(disp,pc),Rn */
	r8 &= r5;  /* 0C053078 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C05307A tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0530AAu, 5); goto L_0C0530AA; } goto L_0C053080; }  /* 0C05307C bt/s */
L_0C053080: BLKS(0x0C053080u);
	T = r0 == 0x8u;  /* 0C053080 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C053110u, 5); goto L_0C053110; }  /* 0C053082 bt */
L_0C053084: BLKS(0x0C053084u);
	r0 = r8;  /* 0C053084 mov Rm,Rn */
	UPD(0x0C053086u, 1);
L_0C053086: BLKS(0x0C053086u);
	T = r0 == 0x4u;  /* 0C053086 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0530D0u, 4); goto L_0C0530D0; }  /* 0C053088 bt */
L_0C05308A: BLKS(0x0C05308Au);
	r13 = 0xC0613E0u; UPD(0x0C05308Cu, 1);  /* 0C05308A mov.l @(disp,pc),Rn */
	r12 = 0xC0AE410u; UPD(0x0C05308Eu, 1);  /* 0C05308C mov.l @(disp,pc),Rn */
	IF(0x0C05308Eu); { u32 t_ = r13; PR = 0x0C053092u; IF(0x0C053090u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C053092u); }  /* 0C05308E jsr @Rn */
L_0C053092: BLKS(0x0C053092u);
	r11 = 0xC0AED70u; UPD(0x0C053094u, 1);  /* 0C053092 mov.l @(disp,pc),Rn */
	IF(0x0C053094u); { u32 t_ = r12; PR = 0x0C053098u; IF(0x0C053096u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C053098u); }  /* 0C053094 jsr @Rn */
L_0C053098: BLKS(0x0C053098u);
	r10 = 0xC286288u; UPD(0x0C05309Au, 1);  /* 0C053098 mov.l @(disp,pc),Rn */
	IF(0x0C05309Au); { u32 t_ = r11; PR = 0x0C05309Eu; IF(0x0C05309Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C05309Eu); }  /* 0C05309A jsr @Rn */
L_0C05309E: BLKS(0x0C05309Eu);
	r4 = 0xC220C52u; UPD(0x0C0530A0u, 1);  /* 0C05309E mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFF80u;  /* 0C0530A0 mov #imm,Rn */
	r2 = 0xC275DCAu; UPD(0x0C0530A4u, 2);  /* 0C0530A2 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0530A6u, 1);  /* 0C0530A4 mov.b Rm,@Rn */
	W8(r2, r3); UPD(0x0C0530A8u, 1);  /* 0C0530A6 mov.b Rm,@Rn */
	W8(r10, r3); UPD(0x0C0530AAu, 1);  /* 0C0530A8 mov.b Rm,@Rn */
L_0C0530AA: BLKS(0x0C0530AAu);
	r10 = 0xC050CD0u; UPD(0x0C0530ACu, 1);  /* 0C0530AA mov.l @(disp,pc),Rn */
	r5 = 0x25u;  /* 0C0530AC mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C0530B0u, 2);  /* 0C0530AE mov.l @(disp,pc),Rn */
	r4 = 0xC160B90u; UPD(0x0C0530B2u, 1);  /* 0C0530B0 mov.l @(disp,pc),Rn */
	IF(0x0C0530B2u); { u32 t_ = r10; PR = 0x0C0530B6u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0530B6u); }  /* 0C0530B2 jsr @Rn */
L_0C0530B6: BLKS(0x0C0530B6u);
	r6 = 0xC22486Eu; UPD(0x0C0530B8u, 1);  /* 0C0530B6 mov.l @(disp,pc),Rn */
	r9 = 0xC050A80u; UPD(0x0C0530BAu, 1);  /* 0C0530B8 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0530BCu, 1);  /* 0C0530BA mov.b @Rm,Rn */
	r8 = 0xC05F810u; UPD(0x0C0530BEu, 1);  /* 0C0530BC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0530BE extu.b Rm,Rn */
	r5 = 0x25u;  /* 0C0530C0 mov #imm,Rn */
	IF(0x0C0530C2u); { u32 t_ = r9; PR = 0x0C0530C6u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0530C6u); }  /* 0C0530C2 jsr @Rn */
L_0C0530C6: BLKS(0x0C0530C6u);
	IF(0x0C0530C6u); { u32 t_ = r8; PR = 0x0C0530CAu; IF(0x0C0530C8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F810, 0x0C05F810u, 0x0C0530CAu); }  /* 0C0530C6 jsr @Rn */
L_0C0530CA: BLKS(0x0C0530CAu);
	{ IF(0x0C0530CCu); ; /* slot nop */ UPD(0x0C052CEEu, 3); goto L_0C052CEE; }  /* 0C0530CA bra */
L_0C0530D0: BLKS(0x0C0530D0u);
	r2 = 0xC22486Eu; UPD(0x0C0530D2u, 1);  /* 0C0530D0 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0530D4u, 1);  /* 0C0530D2 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0530D4 tst Rm,Rn */
	if (!T) { UPD(0x0C053100u, 4); goto L_0C053100; }  /* 0C0530D6 bf */
L_0C0530D8: BLKS(0x0C0530D8u);
	r11 = R32(r3 + 0x4u); UPD(0x0C0530DAu, 1);  /* 0C0530D8 mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0530DA tst Rm,Rn */
	if (T) { UPD(0x0C05308Au, 4); goto L_0C05308A; }  /* 0C0530DC bt */
L_0C0530DE: BLKS(0x0C0530DEu);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0530E0u, 1);  /* 0C0530DE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0530E0 add #imm,Rn */
	r13 = r0 & 0xFF;  /* 0C0530E2 extu.b Rm,Rn */
	W8(r2, r0); UPD(0x0C0530E6u, 3);  /* 0C0530E4 mov.b Rm,@Rn */
	IF(0x0C0530E6u); r13 <<= 2;  /* 0C0530E6 shll2 Rn */
	r13 += r3;  /* 0C0530E8 add Rm,Rn */
	r12 = R32(r13 + 0x4u); UPD(0x0C0530ECu, 3);  /* 0C0530EA mov.l @(disp,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C0530EC tst Rm,Rn */
	if (!T) { UPD(0x0C0530DEu, 4); goto L_0C0530DE; }  /* 0C0530EE bf */
L_0C0530F0: BLKS(0x0C0530F0u);
	{ IF(0x0C0530F2u); ; /* slot nop */ UPD(0x0C05308Au, 3); goto L_0C05308A; }  /* 0C0530F0 bra */
L_0C053100: BLKS(0x0C053100u);
	r8 = 0xC22486Eu; UPD(0x0C053102u, 1);  /* 0C053100 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C053104u, 1);  /* 0C053102 mov.b @Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C053104 add #imm,Rn */
	{ W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C05308Au, 4); goto L_0C05308A; }  /* 0C053106 bra */
L_0C053110: BLKS(0x0C053110u);
	r2 = 0xC22486Eu; UPD(0x0C053112u, 1);  /* 0C053110 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C053114u, 1);  /* 0C053112 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C053114 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C053116 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C05311Au, 3);  /* 0C053118 mov.b Rm,@Rn */
	IF(0x0C05311Au); r0 <<= 2;  /* 0C05311A shll2 Rn */
	IF(0x0C05311Cu); r1 = R32(r0 + r3); UPD(0x0C05311Eu, 2);  /* 0C05311C mov.l @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C05311E tst Rm,Rn */
	if (!T) { UPD(0x0C053084u, 4); goto L_0C053084; }  /* 0C053120 bf */
L_0C053122: BLKS(0x0C053122u);
	W8(r2, r1); UPD(0x0C053124u, 1);  /* 0C053122 mov.b Rm,@Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C053086u, 3); goto L_0C053086; }  /* 0C053124 bra */
L_0C053130: BLKS(0x0C053130u);
	{ W32(r14, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C052CD8u, 3); goto L_0C052CD8; }  /* 0C053130 bra */
}

void f_0C0531A0(sh3_t *c)
{
	LOCALS;
L_0C0531A0: BLKS(0x0C0531A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0531A2u, 1);  /* 0C0531A0 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0531A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0531A6u, 2);  /* 0C0531A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0531A8u, 1);  /* 0C0531A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0531AAu, 1);  /* 0C0531A8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0531ACu, 1);  /* 0C0531AA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0531AEu, 1);  /* 0C0531AC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0531B0u, 1);  /* 0C0531AE mov.l Rm,@-Rn */
	r7 = 0xC28353Cu; UPD(0x0C0531B2u, 1);  /* 0C0531B0 mov.l @(disp,pc),Rn */
	IF(0x0C0531B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0531B4u, 1);  /* 0C0531B2 sts.l pr,@-Rn */
	r4 = 0xC21CC3Eu; UPD(0x0C0531B6u, 1);  /* 0C0531B4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0531B6 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0531BAu, 2);  /* 0C0531B8 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0531BA mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0531BEu, 2);  /* 0C0531BC mov.w @Rm,Rn */
	IF(0x0C0531BEu); r6 <<= 8;  /* 0C0531BE shll8 Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C0531C0 exts.w Rm,Rn */
	r8 = 0xC0AFEB0u; UPD(0x0C0531C4u, 3);  /* 0C0531C2 mov.l @(disp,pc),Rn */
	IF(0x0C0531C4u); r3 <<= 8;  /* 0C0531C4 shll8 Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0531C8u, 2);  /* 0C0531C6 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)r3;  /* 0C0531C8 exts.w Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C0531CCu, 2);  /* 0C0531CA mov.l Rm,@(disp,Rn) */
	r4 = r14;  /* 0C0531CC mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0531D0u, 2);  /* 0C0531CE mov.l Rm,@(disp,Rn) */
	r6 = 0xBu;  /* 0C0531D0 mov #imm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C0531D4u, 2);  /* 0C0531D2 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0B1D56u; UPD(0x0C0531D6u, 1);  /* 0C0531D4 mov.l @(disp,pc),Rn */
	IF(0x0C0531D6u); { u32 t_ = r8; PR = 0x0C0531DAu; W32(r14 + 0x1Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C0531DAu); }  /* 0C0531D6 jsr @Rn */
L_0C0531DA: BLKS(0x0C0531DAu);
	r0 = 0xC3929E0u; UPD(0x0C0531DCu, 1);  /* 0C0531DA mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x18u); UPD(0x0C0531DEu, 1);  /* 0C0531DC mov.l @(disp,Rm),Rn */
	W32(r0, r1); UPD(0x0C0531E0u, 1);  /* 0C0531DE mov.l Rm,@Rn */
L_0C0531E0: BLKS(0x0C0531E0u);
	r11 = 0xC04F330u; UPD(0x0C0531E2u, 1);  /* 0C0531E0 mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C0531E4u, 1);  /* 0C0531E2 mov.l @(disp,pc),Rn */
	IF(0x0C0531E4u); { u32 t_ = r11; PR = 0x0C0531E8u; IF(0x0C0531E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C0531E8u); }  /* 0C0531E4 jsr @Rn */
L_0C0531E8: BLKS(0x0C0531E8u);
	r13 = 0xC050650u; UPD(0x0C0531EAu, 1);  /* 0C0531E8 mov.l @(disp,pc),Rn */
	IF(0x0C0531EAu); { u32 t_ = r8; PR = 0x0C0531EEu; IF(0x0C0531ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C0531EEu); }  /* 0C0531EA jsr @Rn */
L_0C0531EE: BLKS(0x0C0531EEu);
	r9 = 0xC0505F0u; UPD(0x0C0531F0u, 1);  /* 0C0531EE mov.l @(disp,pc),Rn */
	r11 = 0xC050CD0u; UPD(0x0C0531F2u, 1);  /* 0C0531F0 mov.l @(disp,pc),Rn */
	IF(0x0C0531F2u); { u32 t_ = r13; PR = 0x0C0531F6u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C0531F6u); }  /* 0C0531F2 jsr @Rn */
L_0C0531F6: BLKS(0x0C0531F6u);
	IF(0x0C0531F6u); { u32 t_ = r9; PR = 0x0C0531FAu; IF(0x0C0531F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C0531FAu); }  /* 0C0531F6 jsr @Rn */
L_0C0531FA: BLKS(0x0C0531FAu);
	r12 = 0x80808000u; UPD(0x0C0531FCu, 1);  /* 0C0531FA mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C0531FC mov #imm,Rn */
	r4 = 0xC160504u; UPD(0x0C053200u, 2);  /* 0C0531FE mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C053200 mov #imm,Rn */
	r10 = 0x40C04000u; UPD(0x0C053204u, 2);  /* 0C053202 mov.l @(disp,pc),Rn */
	IF(0x0C053204u); { u32 t_ = r11; PR = 0x0C053208u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053208u); }  /* 0C053204 jsr @Rn */
L_0C053208: BLKS(0x0C053208u);
	r4 = 0xC160C08u; UPD(0x0C05320Au, 1);  /* 0C053208 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C05320A mov #imm,Rn */
	r6 = 0x1u;  /* 0C05320C mov #imm,Rn */
	IF(0x0C05320Eu); { u32 t_ = r11; PR = 0x0C053212u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053212u); }  /* 0C05320E jsr @Rn */
L_0C053212: BLKS(0x0C053212u);
	r4 = 0xC160C0Cu; UPD(0x0C053214u, 1);  /* 0C053212 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C053214 mov #imm,Rn */
	r6 = 0x1u;  /* 0C053216 mov #imm,Rn */
	IF(0x0C053218u); { u32 t_ = r11; PR = 0x0C05321Cu; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05321Cu); }  /* 0C053218 jsr @Rn */
L_0C05321C: BLKS(0x0C05321Cu);
	r4 = 0xC160C10u; UPD(0x0C05321Eu, 1);  /* 0C05321C mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C05321E mov #imm,Rn */
	r6 = 0x1u;  /* 0C053220 mov #imm,Rn */
	IF(0x0C053222u); { u32 t_ = r11; PR = 0x0C053226u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053226u); }  /* 0C053222 jsr @Rn */
L_0C053226: BLKS(0x0C053226u);
	r4 = 0xC160C14u; UPD(0x0C053228u, 1);  /* 0C053226 mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C053228 mov #imm,Rn */
	r6 = 0x1u;  /* 0C05322A mov #imm,Rn */
	IF(0x0C05322Cu); { u32 t_ = r11; PR = 0x0C053230u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053230u); }  /* 0C05322C jsr @Rn */
L_0C053230: BLKS(0x0C053230u);
	r4 = 0xC1605D4u; UPD(0x0C053232u, 1);  /* 0C053230 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C053232 mov #imm,Rn */
	r6 = 0x3u;  /* 0C053234 mov #imm,Rn */
	IF(0x0C053236u); { u32 t_ = r11; PR = 0x0C05323Au; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05323Au); }  /* 0C053236 jsr @Rn */
L_0C05323A: BLKS(0x0C05323Au);
	r4 = 0xC1605F0u; UPD(0x0C05323Cu, 1);  /* 0C05323A mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C05323C mov #imm,Rn */
	r6 = 0x5u;  /* 0C05323E mov #imm,Rn */
	IF(0x0C053240u); { u32 t_ = r11; PR = 0x0C053244u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053244u); }  /* 0C053240 jsr @Rn */
L_0C053244: BLKS(0x0C053244u);
	r2 = 0xC27DDF4u; UPD(0x0C053246u, 1);  /* 0C053244 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C053248u, 1);  /* 0C053246 mov.b @Rm,Rn */
	r0 = r3;  /* 0C053248 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C05324A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05324C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053256u, 6); goto L_0C053256; } goto L_0C053252; }  /* 0C05324E bf/s */
L_0C053252: BLKS(0x0C053252u);
	{ r0 &= 0x20u; /* slot and #imm,r0 */ UPD(0x0C053600u, 4); goto L_0C053600; }  /* 0C053252 bra */
L_0C053256: BLKS(0x0C053256u);
	r0 = 0x100u; UPD(0x0C053258u, 1);  /* 0C053256 mov.w @(disp,pc),Rn */
	IF(0x0C053258u); r2 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C05325Au, 1);  /* 0C053258 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C05325A mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05325C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05325E tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053270u, 6); goto L_0C053270; } goto L_0C053264; }  /* 0C053260 bt/s */
L_0C053264: BLKS(0x0C053264u);
	r0 = R32(r14 + 0xCu); UPD(0x0C053266u, 2);  /* 0C053264 mov.l @(disp,Rm),Rn */
	r3 = 0x1FFFu; UPD(0x0C053268u, 1);  /* 0C053266 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C053268 add #imm,Rn */
	r0 &= r3;  /* 0C05326A and Rm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C05326Eu, 3);  /* 0C05326C mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C05326E mov Rm,Rn */
	UPD(0x0C053270u, 1);
L_0C053270: BLKS(0x0C053270u);
	r0 &= 0x2u;  /* 0C053270 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053272 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053284u, 5); goto L_0C053284; } goto L_0C053278; }  /* 0C053274 bt/s */
L_0C053278: BLKS(0x0C053278u);
	r4 = R32(r14 + 0xCu); UPD(0x0C05327Au, 2);  /* 0C053278 mov.l @(disp,Rm),Rn */
	r5 = 0x1FFFu; UPD(0x0C05327Cu, 1);  /* 0C05327A mov.w @(disp,pc),Rn */
	r4 += 0x20u;  /* 0C05327C add #imm,Rn */
	r4 &= r5;  /* 0C05327E and Rm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C053282u, 3);  /* 0C053280 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C053282 mov Rm,Rn */
	UPD(0x0C053284u, 1);
L_0C053284: BLKS(0x0C053284u);
	r0 &= 0x4u;  /* 0C053284 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053286 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053298u, 5); goto L_0C053298; } goto L_0C05328C; }  /* 0C053288 bt/s */
L_0C05328C: BLKS(0x0C05328Cu);
	r6 = R32(r14 + 0x10u); UPD(0x0C05328Eu, 2);  /* 0C05328C mov.l @(disp,Rm),Rn */
	r7 = 0xFFFu; UPD(0x0C053290u, 1);  /* 0C05328E mov.w @(disp,pc),Rn */
	r6 += 0x20u;  /* 0C053290 add #imm,Rn */
	r6 &= r7;  /* 0C053292 and Rm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C053296u, 3);  /* 0C053294 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C053296 mov Rm,Rn */
	UPD(0x0C053298u, 1);
L_0C053298: BLKS(0x0C053298u);
	r0 &= 0x8u;  /* 0C053298 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05329A tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0532A8u, 5); goto L_0C0532A8; } UPD(0x0C0532A0u, 1); goto L_0C0532A0; }  /* 0C05329C bt/s */
L_0C0532A0: BLKS(0x0C0532A0u);
	r12 = 0xFFFu; UPD(0x0C0532A2u, 1);  /* 0C0532A0 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0532A2 add #imm,Rn */
	r2 &= r12;  /* 0C0532A4 and Rm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0532A8u, 3);  /* 0C0532A6 mov.l Rm,@(disp,Rn) */
L_0C0532A8: BLKS(0x0C0532A8u);
	r9 = 0xC160BD4u; UPD(0x0C0532AAu, 1);  /* 0C0532A8 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C0532AA mov #imm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0532AEu, 2);  /* 0C0532AC mov.l @(disp,Rm),Rn */
	r11 = 0x1Au;  /* 0C0532AE mov #imm,Rn */
	IF(0x0C0532B0u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0532B2u, 2);  /* 0C0532B0 mov.b @(r0,Rm),Rn */
	r9 = 0xC050CD0u; UPD(0x0C0532B4u, 1);  /* 0C0532B2 mov.l @(disp,pc),Rn */
	r13 = 0x4040C000u; UPD(0x0C0532B6u, 1);  /* 0C0532B4 mov.l @(disp,pc),Rn */
	r4 = 0xC160690u; UPD(0x0C0532B8u, 1);  /* 0C0532B6 mov.l @(disp,pc),Rn */
	IF(0x0C0532B8u); { u32 t_ = r9; PR = 0x0C0532BCu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0532BCu); }  /* 0C0532B8 jsr @Rn */
L_0C0532BC: BLKS(0x0C0532BCu);
	r0 = 0x1u;  /* 0C0532BC mov #imm,Rn */
	IF(0x0C0532BEu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532C0u, 2);  /* 0C0532BE mov.b @(r0,Rm),Rn */
	r5 = 0x1Bu;  /* 0C0532C0 mov #imm,Rn */
	r0 = 0x2u;  /* 0C0532C2 mov #imm,Rn */
	IF(0x0C0532C4u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532C6u, 3);  /* 0C0532C4 mov.b @(r0,Rm),Rn */
	IF(0x0C0532C6u); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0532C6 shld Rm,Rn */
	r0 = 0x3u;  /* 0C0532C8 mov #imm,Rn */
	IF(0x0C0532CAu); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532CCu, 3);  /* 0C0532CA mov.b @(r0,Rm),Rn */
	r2 = 0x19u;  /* 0C0532CC mov #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r14); UPD(0x0C0532D0u, 2);  /* 0C0532CE mov.b @Rm,Rn */
	r0 = 0x4u;  /* 0C0532D0 mov #imm,Rn */
	IF(0x0C0532D2u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532D4u, 2);  /* 0C0532D2 mov.b @(r0,Rm),Rn */
	IF(0x0C0532D4u); ARG0(0x4A5Du); { s32 s_ = (s32)r5; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0532D4 shld Rm,Rn */
	IF(0x0C0532D6u); ARG0(0x472Du); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0532D6 shld Rm,Rn */
	r1 = 0x18u;  /* 0C0532D8 mov #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0532DA extu.b Rm,Rn */
	IF(0x0C0532DCu); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0532DC shld Rm,Rn */
	r10 |= r4;  /* 0C0532DE or Rm,Rn */
	IF(0x0C0532E0u); r0 <<= 16;  /* 0C0532E0 shll16 Rn */
	r10 |= r7;  /* 0C0532E2 or Rm,Rn */
	IF(0x0C0532E4u); r0 <<= 2;  /* 0C0532E4 shll2 Rn */
	r10 |= r6;  /* 0C0532E6 or Rm,Rn */
	IF(0x0C0532E8u); r0 <<= 2;  /* 0C0532E8 shll2 Rn */
	r10 |= r0;  /* 0C0532EA or Rm,Rn */
	r0 = 0x5u;  /* 0C0532EC mov #imm,Rn */
	IF(0x0C0532EEu); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532F0u, 14);  /* 0C0532EE mov.b @(r0,Rm),Rn */
	r0 = 0x6u;  /* 0C0532F0 mov #imm,Rn */
	IF(0x0C0532F2u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532F4u, 2);  /* 0C0532F2 mov.b @(r0,Rm),Rn */
	r12 = r3 & 0xFF;  /* 0C0532F4 extu.b Rm,Rn */
	r0 = 0x7u;  /* 0C0532F6 mov #imm,Rn */
	IF(0x0C0532F8u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0532FAu, 3);  /* 0C0532F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0532FAu); r12 <<= 16;  /* 0C0532FA shll16 Rn */
	r0 = 0x8u;  /* 0C0532FC mov #imm,Rn */
	IF(0x0C0532FEu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053300u, 3);  /* 0C0532FE mov.b @(r0,Rm),Rn */
	r10 |= r12;  /* 0C053300 or Rm,Rn */
	r0 = 0x9u;  /* 0C053302 mov #imm,Rn */
	IF(0x0C053304u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053306u, 3);  /* 0C053304 mov.b @(r0,Rm),Rn */
	r3 = r1 & 0xFF;  /* 0C053306 extu.b Rm,Rn */
	r0 = 0xAu;  /* 0C053308 mov #imm,Rn */
	IF(0x0C05330Au); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05330Cu, 3);  /* 0C05330A mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C05330C extu.b Rm,Rn */
	IF(0x0C05330Eu); r6 <<= 8;  /* 0C05330E shll8 Rn */
	IF(0x0C053310u); r3 <<= 16;  /* 0C053310 shll16 Rn */
	r0 = r8 & 0xFF;  /* 0C053312 extu.b Rm,Rn */
	r11 = r5 & 0xFF;  /* 0C053314 extu.b Rm,Rn */
	r3 |= r6;  /* 0C053316 or Rm,Rn */
	r12 = 0xC283C98u; UPD(0x0C05331Au, 7);  /* 0C053318 mov.l @(disp,pc),Rn */
	r3 |= r0;  /* 0C05331A or Rm,Rn */
	IF(0x0C05331Cu); r11 <<= 8;  /* 0C05331C shll8 Rn */
	W32(r12, r3); UPD(0x0C053320u, 3);  /* 0C05331E mov.l Rm,@Rn */
	r2 = r4 & 0xFF;  /* 0C053320 extu.b Rm,Rn */
	r5 = 0x10000000u; UPD(0x0C053324u, 2);  /* 0C053322 mov.l @(disp,pc),Rn */
	r10 |= r11;  /* 0C053324 or Rm,Rn */
	r4 = 0xC2175D8u; UPD(0x0C053328u, 2);  /* 0C053326 mov.l @(disp,pc),Rn */
	r10 |= r2;  /* 0C053328 or Rm,Rn */
	r10 |= r5;  /* 0C05332A or Rm,Rn */
	r12 = 0xC392AF4u; UPD(0x0C05332Eu, 3);  /* 0C05332C mov.l @(disp,pc),Rn */
	W32(r4, r10); UPD(0x0C053330u, 1);  /* 0C05332E mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C053332u, 1);  /* 0C053330 mov.l @Rm,Rn */
	r10 = R32(r14 + 0x14u); UPD(0x0C053334u, 1);  /* 0C053332 mov.l @(disp,Rm),Rn */
	W32(r0, r5); UPD(0x0C053336u, 1);  /* 0C053334 mov.l Rm,@Rn */
	IF(0x0C053336u); r10 <<= 16;  /* 0C053336 shll16 Rn */
	r11 = R32(r14 + 0x18u); UPD(0x0C05333Au, 2);  /* 0C053338 mov.l @(disp,Rm),Rn */
	r0 += 0x4u; UPD(0x0C05333Cu, 1);  /* 0C05333A add #imm,Rn */
	r10 |= r11;  /* 0C05333C or Rm,Rn */
	W32(r0, r10); UPD(0x0C053340u, 2);  /* 0C05333E mov.l Rm,@Rn */
	r5 = 0xC21CCF4u; UPD(0x0C053342u, 1);  /* 0C053340 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C053342 add #imm,Rn */
	r11 = 0xC283CA8u; UPD(0x0C053346u, 2);  /* 0C053344 mov.l @(disp,pc),Rn */
	r1 = R32(r5); UPD(0x0C053348u, 1);  /* 0C053346 mov.l @Rm,Rn */
	r7 = R32(r11); UPD(0x0C05334Au, 1);  /* 0C053348 mov.l @Rm,Rn */
	r1 += 0x1Cu;  /* 0C05334A add #imm,Rn */
	r10 = 0xFFFFu; UPD(0x0C05334Eu, 2);  /* 0C05334C mov.l @(disp,pc),Rn */
	r7 += 0x34u;  /* 0C05334E add #imm,Rn */
	r7 &= r10;  /* 0C053350 and Rm,Rn */
	r6 = 0xFFE00000u; UPD(0x0C053354u, 3);  /* 0C053352 mov.l @(disp,pc),Rn */
	IF(0x0C053354u); r1 <<= 16;  /* 0C053354 shll16 Rn */
	r1 += r7;  /* 0C053356 add Rm,Rn */
	r1 += r6;  /* 0C053358 add Rm,Rn */
	W32(r0, r1); UPD(0x0C05335Cu, 4);  /* 0C05335A mov.l Rm,@Rn */
	r1 = 0xFF00C3u; UPD(0x0C05335Eu, 1);  /* 0C05335C mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C05335E add #imm,Rn */
	W32(r0, r1); UPD(0x0C053362u, 2);  /* 0C053360 mov.l Rm,@Rn */
	r8 = 0x808080u; UPD(0x0C053364u, 1);  /* 0C053362 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C053364 add #imm,Rn */
	W32(r0, r8); UPD(0x0C053368u, 2);  /* 0C053366 mov.l Rm,@Rn */
	r3 = R32(r4); UPD(0x0C05336Au, 1);  /* 0C053368 mov.l @Rm,Rn */
	r0 += 0x4u;  /* 0C05336A add #imm,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C05336Eu, 2);  /* 0C05336C mov.l @(disp,Rm),Rn */
	r4 = 0x1FFFu; UPD(0x0C053370u, 1);  /* 0C05336E mov.w @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C053372u, 1);  /* 0C053370 mov.l @(disp,Rm),Rn */
	r4 &= r7;  /* 0C053372 and Rm,Rn */
	r6 = 0xFFFu; UPD(0x0C053376u, 2);  /* 0C053374 mov.w @(disp,pc),Rn */
	IF(0x0C053376u); r4 <<= 16;  /* 0C053376 shll16 Rn */
	W32(r0, r3); UPD(0x0C05337Au, 2);  /* 0C053378 mov.l Rm,@Rn */
	r6 &= r2;  /* 0C05337A and Rm,Rn */
	r4 += r6;  /* 0C05337C add Rm,Rn */
	r0 += 0x4u;  /* 0C05337E add #imm,Rn */
	W32(r0, r4); UPD(0x0C053382u, 4);  /* 0C053380 mov.l Rm,@Rn */
	r8 = R32(r5); UPD(0x0C053384u, 1);  /* 0C053382 mov.l @Rm,Rn */
	r0 += 0x4u;  /* 0C053384 add #imm,Rn */
	r3 = R32(r11); UPD(0x0C053388u, 2);  /* 0C053386 mov.l @Rm,Rn */
	r8 += 0x1Cu;  /* 0C053388 add #imm,Rn */
	r3 += 0x14u;  /* 0C05338A add #imm,Rn */
	r3 &= r10;  /* 0C05338C and Rm,Rn */
	IF(0x0C05338Eu); r8 <<= 16;  /* 0C05338E shll16 Rn */
	r8 += r3;  /* 0C053390 add Rm,Rn */
	W32(r0, r8); UPD(0x0C053394u, 6);  /* 0C053392 mov.l Rm,@Rn */
	r5 = 0x14u;  /* 0C053394 mov #imm,Rn */
	r0 += 0x4u;  /* 0C053396 add #imm,Rn */
	W32(r0, r1); UPD(0x0C05339Au, 3);  /* 0C053398 mov.l Rm,@Rn */
	r7 = 0xC283C98u; UPD(0x0C05339Cu, 1);  /* 0C05339A mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C05339C add #imm,Rn */
	r6 = R32(r7); UPD(0x0C0533A0u, 2);  /* 0C05339E mov.l @Rm,Rn */
	W32(r0, r6); UPD(0x0C0533A2u, 1);  /* 0C0533A0 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C0533A2 add #imm,Rn */
	W32(r12, r0); UPD(0x0C0533A6u, 2);  /* 0C0533A4 mov.l Rm,@Rn */
	r6 = 0x4u;  /* 0C0533A6 mov #imm,Rn */
	r12 = 0xC0404000u; UPD(0x0C0533AAu, 2);  /* 0C0533A8 mov.l @(disp,pc),Rn */
	r11 = 0xC160BF8u; UPD(0x0C0533ACu, 1);  /* 0C0533AA mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C0533AC mov Rm,Rn */
	r10 = 0xC160C00u; UPD(0x0C0533B0u, 2);  /* 0C0533AE mov.l @(disp,pc),Rn */
	r8 = 0xC0509B0u; UPD(0x0C0533B2u, 1);  /* 0C0533B0 mov.l @(disp,pc),Rn */
	IF(0x0C0533B2u); { u32 t_ = r9; PR = 0x0C0533B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0533B6u); }  /* 0C0533B2 jsr @Rn */
L_0C0533B6: BLKS(0x0C0533B6u);
	r7 = r12;  /* 0C0533B6 mov Rm,Rn */
	r4 = r10;  /* 0C0533B8 mov Rm,Rn */
	r5 = 0x12u;  /* 0C0533BA mov #imm,Rn */
	IF(0x0C0533BCu); { u32 t_ = r9; PR = 0x0C0533C0u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0533C0u); }  /* 0C0533BC jsr @Rn */
L_0C0533C0: BLKS(0x0C0533C0u);
	r4 = R32(r14 + 0xCu); UPD(0x0C0533C2u, 1);  /* 0C0533C0 mov.l @(disp,Rm),Rn */
	r5 = 0x13u;  /* 0C0533C2 mov #imm,Rn */
	IF(0x0C0533C4u); { u32 t_ = r8; PR = 0x0C0533C8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C0533C8u); }  /* 0C0533C4 jsr @Rn */
L_0C0533C8: BLKS(0x0C0533C8u);
	r4 = R32(r14 + 0x10u); UPD(0x0C0533CAu, 1);  /* 0C0533C8 mov.l @(disp,Rm),Rn */
	r5 = 0x11u;  /* 0C0533CA mov #imm,Rn */
	IF(0x0C0533CCu); { u32 t_ = r8; PR = 0x0C0533D0u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C0533D0u); }  /* 0C0533CC jsr @Rn */
L_0C0533D0: BLKS(0x0C0533D0u);
	r4 = r11;  /* 0C0533D0 mov Rm,Rn */
	r7 = r13;  /* 0C0533D2 mov Rm,Rn */
	r5 = 0x14u;  /* 0C0533D4 mov #imm,Rn */
	IF(0x0C0533D6u); { u32 t_ = r9; PR = 0x0C0533DAu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0533DAu); }  /* 0C0533D6 jsr @Rn */
L_0C0533DA: BLKS(0x0C0533DAu);
	r7 = r13;  /* 0C0533DA mov Rm,Rn */
	r4 = r10;  /* 0C0533DC mov Rm,Rn */
	r5 = 0x12u;  /* 0C0533DE mov #imm,Rn */
	IF(0x0C0533E0u); { u32 t_ = r9; PR = 0x0C0533E4u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0533E4u); }  /* 0C0533E0 jsr @Rn */
L_0C0533E4: BLKS(0x0C0533E4u);
	r4 = R32(r14 + 0x14u); UPD(0x0C0533E6u, 1);  /* 0C0533E4 mov.l @(disp,Rm),Rn */
	r5 = 0x13u;  /* 0C0533E6 mov #imm,Rn */
	IF(0x0C0533E8u); { u32 t_ = r8; PR = 0x0C0533ECu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C0533ECu); }  /* 0C0533E8 jsr @Rn */
L_0C0533EC: BLKS(0x0C0533ECu);
	r4 = R32(r14 + 0x18u); UPD(0x0C0533EEu, 1);  /* 0C0533EC mov.l @(disp,Rm),Rn */
	r5 = 0x11u;  /* 0C0533EE mov #imm,Rn */
	r11 = 0x80808000u; UPD(0x0C0533F2u, 2);  /* 0C0533F0 mov.l @(disp,pc),Rn */
	IF(0x0C0533F2u); { u32 t_ = r8; PR = 0x0C0533F6u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0509B0, 0x0C0509B0u, 0x0C0533F6u); }  /* 0C0533F2 jsr @Rn */
L_0C0533F6: BLKS(0x0C0533F6u);
	r4 = 0xC160C18u; UPD(0x0C0533F8u, 1);  /* 0C0533F6 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C0533F8 mov Rm,Rn */
	r5 = 0xFu;  /* 0C0533FA mov #imm,Rn */
	IF(0x0C0533FCu); { u32 t_ = r9; PR = 0x0C053400u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053400u); }  /* 0C0533FC jsr @Rn */
L_0C053400: BLKS(0x0C053400u);
	r4 = 0xC160C1Cu; UPD(0x0C053402u, 1);  /* 0C053400 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C053402 mov Rm,Rn */
	r5 = 0xEu;  /* 0C053404 mov #imm,Rn */
	IF(0x0C053406u); { u32 t_ = r9; PR = 0x0C05340Au; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05340Au); }  /* 0C053406 jsr @Rn */
L_0C05340A: BLKS(0x0C05340Au);
	r4 = 0xC160C20u; UPD(0x0C05340Cu, 1);  /* 0C05340A mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05340C mov Rm,Rn */
	r5 = 0xDu;  /* 0C05340E mov #imm,Rn */
	IF(0x0C053410u); { u32 t_ = r9; PR = 0x0C053414u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053414u); }  /* 0C053410 jsr @Rn */
L_0C053414: BLKS(0x0C053414u);
	r4 = 0xC160C24u; UPD(0x0C053416u, 1);  /* 0C053414 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C053416 mov Rm,Rn */
	r5 = 0xCu;  /* 0C053418 mov #imm,Rn */
	IF(0x0C05341Au); { u32 t_ = r9; PR = 0x0C05341Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05341Eu); }  /* 0C05341A jsr @Rn */
L_0C05341E: BLKS(0x0C05341Eu);
	r4 = 0xC160C28u; UPD(0x0C053420u, 1);  /* 0C05341E mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C053420 mov Rm,Rn */
	r5 = 0xBu;  /* 0C053422 mov #imm,Rn */
	IF(0x0C053424u); { u32 t_ = r9; PR = 0x0C053428u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053428u); }  /* 0C053424 jsr @Rn */
L_0C053428: BLKS(0x0C053428u);
	r4 = 0xC160C2Cu; UPD(0x0C05342Au, 1);  /* 0C053428 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C05342A mov Rm,Rn */
	{ r5 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C0534F0u, 4); goto L_0C0534F0; }  /* 0C05342C bra */
L_0C0534F0: BLKS(0x0C0534F0u);
	IF(0x0C0534F0u); { u32 t_ = r9; PR = 0x0C0534F4u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0534F4u); }  /* 0C0534F0 jsr @Rn */
L_0C0534F4: BLKS(0x0C0534F4u);
	r4 = 0xC160C30u; UPD(0x0C0534F6u, 1);  /* 0C0534F4 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C0534F6 mov Rm,Rn */
	r5 = 0x9u;  /* 0C0534F8 mov #imm,Rn */
	IF(0x0C0534FAu); { u32 t_ = r9; PR = 0x0C0534FEu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0534FEu); }  /* 0C0534FA jsr @Rn */
L_0C0534FE: BLKS(0x0C0534FEu);
	r4 = 0xC160C34u; UPD(0x0C053500u, 1);  /* 0C0534FE mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C053500 mov Rm,Rn */
	r5 = 0x8u;  /* 0C053502 mov #imm,Rn */
	IF(0x0C053504u); { u32 t_ = r9; PR = 0x0C053508u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053508u); }  /* 0C053504 jsr @Rn */
L_0C053508: BLKS(0x0C053508u);
	r7 = r12;  /* 0C053508 mov Rm,Rn */
	r4 = 0xC160C78u; UPD(0x0C05350Cu, 2);  /* 0C05350A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C05350C mov #imm,Rn */
	IF(0x0C05350Eu); { u32 t_ = r9; PR = 0x0C053512u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053512u); }  /* 0C05350E jsr @Rn */
L_0C053512: BLKS(0x0C053512u);
	r7 = 0x40C04000u; UPD(0x0C053514u, 1);  /* 0C053512 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C053514 mov #imm,Rn */
	r4 = 0xC160C7Cu; UPD(0x0C053518u, 2);  /* 0C053516 mov.l @(disp,pc),Rn */
	IF(0x0C053518u); { u32 t_ = r9; PR = 0x0C05351Cu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05351Cu); }  /* 0C053518 jsr @Rn */
L_0C05351C: BLKS(0x0C05351Cu);
	r7 = r13;  /* 0C05351C mov Rm,Rn */
	r13 = 0xC051540u; UPD(0x0C053520u, 2);  /* 0C05351E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C053520 mov #imm,Rn */
	r4 = 0xC160C84u; UPD(0x0C053524u, 2);  /* 0C053522 mov.l @(disp,pc),Rn */
	IF(0x0C053524u); { u32 t_ = r9; PR = 0x0C053528u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053528u); }  /* 0C053524 jsr @Rn */
L_0C053528: BLKS(0x0C053528u);
	r4 = (u32)(s32)(s8)R8(r14); UPD(0x0C05352Au, 1);  /* 0C053528 mov.b @Rm,Rn */
	r5 = 0xFu;  /* 0C05352A mov #imm,Rn */
	IF(0x0C05352Cu); { u32 t_ = r13; PR = 0x0C053530u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C053530u); }  /* 0C05352C jsr @Rn */
L_0C053530: BLKS(0x0C053530u);
	r0 = 0x1u;  /* 0C053530 mov #imm,Rn */
	IF(0x0C053532u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053534u, 2);  /* 0C053532 mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C053534 mov #imm,Rn */
	IF(0x0C053536u); { u32 t_ = r13; PR = 0x0C05353Au; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05353Au); }  /* 0C053536 jsr @Rn */
L_0C05353A: BLKS(0x0C05353Au);
	r0 = 0x2u;  /* 0C05353A mov #imm,Rn */
	IF(0x0C05353Cu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05353Eu, 2);  /* 0C05353C mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C05353E mov #imm,Rn */
	IF(0x0C053540u); { u32 t_ = r13; PR = 0x0C053544u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C053544u); }  /* 0C053540 jsr @Rn */
L_0C053544: BLKS(0x0C053544u);
	r0 = 0x3u;  /* 0C053544 mov #imm,Rn */
	IF(0x0C053546u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053548u, 2);  /* 0C053546 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C053548 mov #imm,Rn */
	IF(0x0C05354Au); { u32 t_ = r13; PR = 0x0C05354Eu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C05354Eu); }  /* 0C05354A jsr @Rn */
L_0C05354E: BLKS(0x0C05354Eu);
	r0 = 0x4u;  /* 0C05354E mov #imm,Rn */
	IF(0x0C053550u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053552u, 2);  /* 0C053550 mov.b @(r0,Rm),Rn */
	r6 = 0x8u;  /* 0C053552 mov #imm,Rn */
	r10 = r5 & 0xFF;  /* 0C053554 extu.b Rm,Rn */
	r12 = 0xC160C8Cu; UPD(0x0C053558u, 3);  /* 0C053556 mov.l @(disp,pc),Rn */
	IF(0x0C053558u); r10 <<= 2;  /* 0C053558 shll2 Rn */
	r10 += r10;  /* 0C05355A add Rm,Rn */
	r10 += r12;  /* 0C05355C add Rm,Rn */
	r4 = R32(r10); UPD(0x0C053560u, 4);  /* 0C05355E mov.l @Rm,Rn */
	r5 = 0xBu;  /* 0C053560 mov #imm,Rn */
	IF(0x0C053562u); { u32 t_ = r9; PR = 0x0C053566u; r7 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053566u); }  /* 0C053562 jsr @Rn */
L_0C053566: BLKS(0x0C053566u);
	r0 = 0x5u;  /* 0C053566 mov #imm,Rn */
	IF(0x0C053568u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05356Au, 2);  /* 0C053568 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C05356A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C05356C extu.b Rm,Rn */
	IF(0x0C05356Eu); r0 <<= 2;  /* 0C05356E shll2 Rn */
	r0 += r0;  /* 0C053570 add Rm,Rn */
	r0 += r12;  /* 0C053572 add Rm,Rn */
	r7 = R32(r0 + 0x4u); UPD(0x0C053576u, 6);  /* 0C053574 mov.l @(disp,Rm),Rn */
	r6 = 0x8u;  /* 0C053576 mov #imm,Rn */
	IF(0x0C053578u); { u32 t_ = r9; PR = 0x0C05357Cu; r4 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05357Cu); }  /* 0C053578 jsr @Rn */
L_0C05357C: BLKS(0x0C05357Cu);
	r11 = 0xC050A80u; UPD(0x0C05357Eu, 1);  /* 0C05357C mov.l @(disp,pc),Rn */
	r0 = 0x6u;  /* 0C05357E mov #imm,Rn */
	IF(0x0C053580u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053582u, 2);  /* 0C053580 mov.b @(r0,Rm),Rn */
	r5 = 0x9u;  /* 0C053582 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C053584 extu.b Rm,Rn */
	IF(0x0C053586u); { u32 t_ = r11; PR = 0x0C05358Au; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05358Au); }  /* 0C053586 jsr @Rn */
L_0C05358A: BLKS(0x0C05358Au);
	r0 = 0x7u;  /* 0C05358A mov #imm,Rn */
	IF(0x0C05358Cu); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05358Eu, 2);  /* 0C05358C mov.b @(r0,Rm),Rn */
	r5 = 0x8u;  /* 0C05358E mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C053590 extu.b Rm,Rn */
	IF(0x0C053592u); { u32 t_ = r11; PR = 0x0C053596u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C053596u); }  /* 0C053592 jsr @Rn */
L_0C053596: BLKS(0x0C053596u);
	r0 = 0x8u;  /* 0C053596 mov #imm,Rn */
	IF(0x0C053598u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05359Au, 2);  /* 0C053598 mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C05359A mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C05359C extu.b Rm,Rn */
	IF(0x0C05359Eu); { u32 t_ = r11; PR = 0x0C0535A2u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0535A2u); }  /* 0C05359E jsr @Rn */
L_0C0535A2: BLKS(0x0C0535A2u);
	r0 = 0x9u;  /* 0C0535A2 mov #imm,Rn */
	IF(0x0C0535A4u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0535A6u, 2);  /* 0C0535A4 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0535A6 mov #imm,Rn */
	r4 = r8 & 0xFF;  /* 0C0535A8 extu.b Rm,Rn */
	IF(0x0C0535AAu); { u32 t_ = r11; PR = 0x0C0535AEu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0535AEu); }  /* 0C0535AA jsr @Rn */
L_0C0535AE: BLKS(0x0C0535AEu);
	r0 = 0xAu;  /* 0C0535AE mov #imm,Rn */
	IF(0x0C0535B0u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0535B2u, 2);  /* 0C0535B0 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0535B2 mov #imm,Rn */
	r9 = 0xC0508F0u; UPD(0x0C0535B6u, 2);  /* 0C0535B4 mov.l @(disp,pc),Rn */
	r4 = r7 & 0xFF;  /* 0C0535B6 extu.b Rm,Rn */
	r13 = 0xC2175D8u; UPD(0x0C0535BAu, 2);  /* 0C0535B8 mov.l @(disp,pc),Rn */
	IF(0x0C0535BAu); { u32 t_ = r11; PR = 0x0C0535BEu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0535BEu); }  /* 0C0535BA jsr @Rn */
L_0C0535BE: BLKS(0x0C0535BEu);
	r4 = R32(r13); UPD(0x0C0535C0u, 1);  /* 0C0535BE mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C0535C0 mov #imm,Rn */
	IF(0x0C0535C2u); { u32 t_ = r9; PR = 0x0C0535C6u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C0535C6u); }  /* 0C0535C2 jsr @Rn */
L_0C0535C6: BLKS(0x0C0535C6u);
	r6 = 0xC283C98u; UPD(0x0C0535C8u, 1);  /* 0C0535C6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0535C8 mov #imm,Rn */
	r4 = R32(r6); UPD(0x0C0535CCu, 2);  /* 0C0535CA mov.l @Rm,Rn */
	r10 = 0xC04F770u; UPD(0x0C0535CEu, 1);  /* 0C0535CC mov.l @(disp,pc),Rn */
	r12 = 0xC050840u; UPD(0x0C0535D0u, 1);  /* 0C0535CE mov.l @(disp,pc),Rn */
	IF(0x0C0535D0u); { u32 t_ = r9; PR = 0x0C0535D4u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C0535D4u); }  /* 0C0535D0 jsr @Rn */
L_0C0535D4: BLKS(0x0C0535D4u);
	r5 = 0x7u;  /* 0C0535D4 mov #imm,Rn */
	IF(0x0C0535D6u); { u32 t_ = r10; PR = 0x0C0535DAu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C0535DAu); }  /* 0C0535D6 jsr @Rn */
L_0C0535DA: BLKS(0x0C0535DAu);
	IF(0x0C0535DAu); { u32 t_ = r12; PR = 0x0C0535DEu; IF(0x0C0535DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C0535DEu); }  /* 0C0535DA jsr @Rn */
L_0C0535DE: BLKS(0x0C0535DEu);
	r5 = 0xC2862A2u; UPD(0x0C0535E0u, 1);  /* 0C0535DE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0535E2u, 1);  /* 0C0535E0 mov.b @Rm,Rn */
	IF(0x0C0535E2u); T = (s32)r0 >= 0;  /* 0C0535E2 cmp/pz Rn */
	if (!T) { UPD(0x0C0535EAu, 4); goto L_0C0535EA; }  /* 0C0535E4 bf */
L_0C0535E6: BLKS(0x0C0535E6u);
	{ IF(0x0C0535E8u); ; /* slot nop */ UPD(0x0C0531E0u, 3); goto L_0C0531E0; }  /* 0C0535E6 bra */
L_0C0535EA: BLKS(0x0C0535EAu);
	r14 += 0x20u;  /* 0C0535EA add #imm,Rn */
	r15 = r14;  /* 0C0535EC mov Rm,Rn */
	IF(0x0C0535EEu); PR = R32(r15); r15 += 4; UPD(0x0C0535F0u, 3);  /* 0C0535EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0535F2u, 1);  /* 0C0535F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0535F4u, 1);  /* 0C0535F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0535F6u, 1);  /* 0C0535F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0535F8u, 1);  /* 0C0535F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0535FAu, 1);  /* 0C0535F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0535FCu, 1);  /* 0C0535FA mov.l @Rm+,Rn */
	IF(0x0C0535FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0535FC rts */
L_0C053600: BLKS(0x0C053600u);
	T = (r0 & r0) == 0;  /* 0C053600 tst Rm,Rn */
	if (T) { UPD(0x0C053660u, 4); goto L_0C053660; }  /* 0C053602 bt */
L_0C053604: BLKS(0x0C053604u);
	r0 = 0x100u; UPD(0x0C053606u, 1);  /* 0C053604 mov.w @(disp,pc),Rn */
	IF(0x0C053606u); r2 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C053608u, 1);  /* 0C053606 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C053608 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05360A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05360C tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053622u, 6); goto L_0C053622; } goto L_0C053612; }  /* 0C05360E bt/s */
L_0C053612: BLKS(0x0C053612u);
	r13 = R32(r14 + 0x14u); UPD(0x0C053614u, 2);  /* 0C053612 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFFE0u;  /* 0C053614 add #imm,Rn */
	W32(r14 + 0x14u, r13); UPD(0x0C053618u, 2);  /* 0C053616 mov.l Rm,@(disp,Rn) */
	r9 = 0x1FFFu; UPD(0x0C05361Au, 1);  /* 0C053618 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x14u); UPD(0x0C05361Cu, 1);  /* 0C05361A mov.l @(disp,Rm),Rn */
	r10 &= r9;  /* 0C05361C and Rm,Rn */
	W32(r14 + 0x14u, r10); UPD(0x0C053620u, 2);  /* 0C05361E mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C053620 mov Rm,Rn */
	UPD(0x0C053622u, 1);
L_0C053622: BLKS(0x0C053622u);
	r0 &= 0x2u;  /* 0C053622 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053624 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053636u, 5); goto L_0C053636; } goto L_0C05362A; }  /* 0C053626 bt/s */
L_0C05362A: BLKS(0x0C05362Au);
	r8 = R32(r14 + 0x14u); UPD(0x0C05362Cu, 2);  /* 0C05362A mov.l @(disp,Rm),Rn */
	r11 = 0x1FFFu; UPD(0x0C05362Eu, 1);  /* 0C05362C mov.w @(disp,pc),Rn */
	r8 += 0x20u;  /* 0C05362E add #imm,Rn */
	r8 &= r11;  /* 0C053630 and Rm,Rn */
	W32(r14 + 0x14u, r8); UPD(0x0C053634u, 3);  /* 0C053632 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C053634 mov Rm,Rn */
	UPD(0x0C053636u, 1);
L_0C053636: BLKS(0x0C053636u);
	r0 &= 0x4u;  /* 0C053636 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053638 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05364Au, 5); goto L_0C05364A; } goto L_0C05363E; }  /* 0C05363A bt/s */
L_0C05363E: BLKS(0x0C05363Eu);
	r0 = R32(r14 + 0x18u); UPD(0x0C053640u, 2);  /* 0C05363E mov.l @(disp,Rm),Rn */
	r3 = 0xFFFu; UPD(0x0C053642u, 1);  /* 0C053640 mov.w @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C053642 add #imm,Rn */
	r0 &= r3;  /* 0C053644 and Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C053648u, 3);  /* 0C053646 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C053648 mov Rm,Rn */
	UPD(0x0C05364Au, 1);
L_0C05364A: BLKS(0x0C05364Au);
	r0 &= 0x8u;  /* 0C05364A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05364C tst Rm,Rn */
	if (T) { UPD(0x0C05365Au, 5); goto L_0C05365A; }  /* 0C05364E bt */
L_0C053650: BLKS(0x0C053650u);
	r4 = R32(r14 + 0x18u); UPD(0x0C053652u, 1);  /* 0C053650 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFu; UPD(0x0C053654u, 1);  /* 0C053652 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFE0u;  /* 0C053654 add #imm,Rn */
	r4 &= r5;  /* 0C053656 and Rm,Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C05365Au, 3);  /* 0C053658 mov.l Rm,@(disp,Rn) */
L_0C05365A: BLKS(0x0C05365Au);
	{ IF(0x0C05365Cu); ; /* slot nop */ UPD(0x0C0532A8u, 3); goto L_0C0532A8; }  /* 0C05365A bra */
L_0C053660: BLKS(0x0C053660u);
	r0 = 0x80u; UPD(0x0C053662u, 1);  /* 0C053660 mov.w @(disp,pc),Rn */
	IF(0x0C053662u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C053664u, 1);  /* 0C053662 mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C053664 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C053666 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053668 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05367Au, 6); goto L_0C05367A; } goto L_0C05366E; }  /* 0C05366A bt/s */
L_0C05366E: BLKS(0x0C05366Eu);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C053670u, 2);  /* 0C05366E mov.l @(disp,Rm),Rn */
	r10 = 0xC160BE0u; UPD(0x0C053672u, 1);  /* 0C053670 mov.l @(disp,pc),Rn */
	IF(0x0C053672u); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C053674u, 1);  /* 0C053672 mov.b @(r0,Rm),Rn */
	r6 = r12 & 0xFF;  /* 0C053674 extu.b Rm,Rn */
	W32(r14 + 0x1Cu, r6); UPD(0x0C053678u, 2);  /* 0C053676 mov.l Rm,@(disp,Rn) */
	r0 = r7;  /* 0C053678 mov Rm,Rn */
	UPD(0x0C05367Au, 1);
L_0C05367A: BLKS(0x0C05367Au);
	r0 &= 0x2u;  /* 0C05367A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05367C tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05368Au, 5); goto L_0C05368A; } UPD(0x0C053682u, 1); goto L_0C053682; }  /* 0C05367E bt/s */
L_0C053682: BLKS(0x0C053682u);
	r13 = 0xC160BECu; UPD(0x0C053684u, 1);  /* 0C053682 mov.l @(disp,pc),Rn */
	IF(0x0C053684u); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C053686u, 1);  /* 0C053684 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C053686 extu.b Rm,Rn */
	W32(r14 + 0x1Cu, r7); UPD(0x0C05368Au, 2);  /* 0C053688 mov.l Rm,@(disp,Rn) */
L_0C05368A: BLKS(0x0C05368Au);
	r0 = 0x100u; UPD(0x0C05368Cu, 1);  /* 0C05368A mov.w @(disp,pc),Rn */
	IF(0x0C05368Cu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C05368Eu, 1);  /* 0C05368C mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C05368E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053690 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053730u, 5); goto L_0C053730; } UPD(0x0C053696u, 1); goto L_0C053696; }  /* 0C053692 bt/s */
L_0C053696: BLKS(0x0C053696u);
	r11 = 0xC160C38u; UPD(0x0C053698u, 1);  /* 0C053696 mov.l @(disp,pc),Rn */
	IF(0x0C053698u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05369Au, 1);  /* 0C053698 mov.b @(r0,Rm),Rn */
	IF(0x0C05369Au); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C05369Cu, 1);  /* 0C05369A mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C05369C add #imm,Rn */
	r8 &= r1;  /* 0C05369E and Rm,Rn */
	IF(0x0C0536A0u); W8(r0 + r14, r8); UPD(0x0C0536A2u, 3);  /* 0C0536A0 mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C0536A2 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C0536A4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0536A6 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053730u, 6); goto L_0C053730; } UPD(0x0C0536ACu, 1); goto L_0C0536AC; }  /* 0C0536A8 bt/s */
L_0C0536AC: BLKS(0x0C0536ACu);
	r0 = 0x4u;  /* 0C0536AC mov #imm,Rn */
	r2 += 0xFFFFFFFAu;  /* 0C0536AE add #imm,Rn */
	T = r2 > r0;  /* 0C0536B0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053730u, 6); goto L_0C053730; }  /* 0C0536B2 bt */
L_0C0536B4: BLKS(0x0C0536B4u);
	r0 = 0xC053710u;  /* 0C0536B4 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0536B6 add Rm,Rn */
	IF(0x0C0536B8u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0536BAu, 3);  /* 0C0536B8 mov.w @(r0,Rm),Rn */
	IF(0x0C0536BAu); { u32 tv_ = (r3 + 0x0C0536BEu); u32 t_ = PHYS(tv_); IF(0x0C0536BCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C053720u: goto L_0C053720; case 0x0C0537C0u: goto L_0C0537C0; default: JUMPD(tv_); } }  /* 0C0536BA braf Rn */
L_0C053720: BLKS(0x0C053720u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C053722u, 1);  /* 0C053720 mov.l @(disp,Rm),Rn */
	IF(0x0C053722u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053724u, 1);  /* 0C053722 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C053724 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C053726 extu.b Rm,Rn */
	IF(0x0C053728u); W8(r0 + r14, r2); UPD(0x0C05372Au, 3);  /* 0C053728 mov.b Rm,@(r0,Rn) */
	r0 = 0x6u;  /* 0C05372A mov #imm,Rn */
	IF(0x0C05372Cu); W8(r0 + r14, r2); UPD(0x0C05372Eu, 2);  /* 0C05372C mov.b Rm,@(r0,Rn) */
	IF(0x0C05372Eu); ;  /* 0C05372E nop */
	UPD(0x0C053730u, 1);
L_0C053730: BLKS(0x0C053730u);
	r7 = 0xC27DEF4u; UPD(0x0C053732u, 1);  /* 0C053730 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C053734u, 1);  /* 0C053732 mov.b @Rm,Rn */
	r0 &= 0x8u;  /* 0C053734 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C053736 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05365Au, 5); goto L_0C05365A; } UPD(0x0C05373Cu, 1); goto L_0C05373C; }  /* 0C053738 bt/s */
L_0C05373C: BLKS(0x0C05373Cu);
	r1 = 0xC160C38u; UPD(0x0C05373Eu, 1);  /* 0C05373C mov.l @(disp,pc),Rn */
	IF(0x0C05373Eu); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053740u, 1);  /* 0C05373E mov.b @(r0,Rm),Rn */
	IF(0x0C053740u); r8 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C053742u, 1);  /* 0C053740 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C053742 add #imm,Rn */
	r13 &= r8;  /* 0C053744 and Rm,Rn */
	IF(0x0C053746u); W8(r0 + r14, r13); UPD(0x0C053748u, 3);  /* 0C053746 mov.b Rm,@(r0,Rn) */
	r9 = 0xC27DDF4u; UPD(0x0C05374Au, 1);  /* 0C053748 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C05374Cu, 1);  /* 0C05374A mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C05374C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05374E tst Rm,Rn */
	{ u32 c_ = !T; r2 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C053758u, 5); goto L_0C053758; } UPD(0x0C053754u, 1); goto L_0C053754; }  /* 0C053750 bf/s */
L_0C053754: BLKS(0x0C053754u);
	{ IF(0x0C053756u); ; /* slot nop */ UPD(0x0C05365Au, 3); goto L_0C05365A; }  /* 0C053754 bra */
L_0C053758: BLKS(0x0C053758u);
	r11 = 0x4u;  /* 0C053758 mov #imm,Rn */
	r2 += 0xFFFFFFFAu;  /* 0C05375A add #imm,Rn */
	T = r2 > r11;  /* 0C05375C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C05378Eu, 6); goto L_0C05378E; }  /* 0C05375E bt */
L_0C053760: BLKS(0x0C053760u);
	r0 = 0xC053774u;  /* 0C053760 mova @(disp,pc),r0 */
	IF(0x0C053762u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C053764u, 2);  /* 0C053762 mov.b @(r0,Rm),Rn */
	IF(0x0C053764u); { u32 tv_ = (r3 + 0x0C053768u); u32 t_ = PHYS(tv_); IF(0x0C053766u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C053780u: goto L_0C053780; case 0x0C0537A0u: goto L_0C0537A0; default: JUMPD(tv_); } }  /* 0C053764 braf Rn */
L_0C053780: BLKS(0x0C053780u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C053782u, 1);  /* 0C053780 mov.l @(disp,Rm),Rn */
	IF(0x0C053782u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C053784u, 1);  /* 0C053782 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C053784 mov #imm,Rn */
	r1 = r2 & 0xFF;  /* 0C053786 extu.b Rm,Rn */
	IF(0x0C053788u); W8(r0 + r14, r1); UPD(0x0C05378Au, 3);  /* 0C053788 mov.b Rm,@(r0,Rn) */
	r0 = 0x6u;  /* 0C05378A mov #imm,Rn */
	UPD(0x0C05378Cu, 1);
L_0C05378C: BLKS(0x0C05378Cu);
	IF(0x0C05378Cu); W8(r0 + r14, r1); UPD(0x0C05378Eu, 1);  /* 0C05378C mov.b Rm,@(r0,Rn) */
L_0C05378E: BLKS(0x0C05378Eu);
	{ IF(0x0C053790u); ; /* slot nop */ UPD(0x0C0532A8u, 3); goto L_0C0532A8; }  /* 0C05378E bra */
L_0C0537A0: BLKS(0x0C0537A0u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0537A2u, 1);  /* 0C0537A0 mov.l @(disp,Rm),Rn */
	IF(0x0C0537A2u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0537A4u, 1);  /* 0C0537A2 mov.b @(r0,Rm),Rn */
	r0 = 0xAu;  /* 0C0537A4 mov #imm,Rn */
	r1 = r4 & 0xFF;  /* 0C0537A6 extu.b Rm,Rn */
	IF(0x0C0537A8u); W8(r0 + r14, r1); UPD(0x0C0537AAu, 3);  /* 0C0537A8 mov.b Rm,@(r0,Rn) */
	r0 = 0x9u;  /* 0C0537AA mov #imm,Rn */
	IF(0x0C0537ACu); W8(r0 + r14, r1); UPD(0x0C0537AEu, 2);  /* 0C0537AC mov.b Rm,@(r0,Rn) */
	{ r0 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C05378Cu, 3); goto L_0C05378C; }  /* 0C0537AE bra */
L_0C0537C0: BLKS(0x0C0537C0u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0537C2u, 1);  /* 0C0537C0 mov.l @(disp,Rm),Rn */
	r12 = 0x9u;  /* 0C0537C2 mov #imm,Rn */
	IF(0x0C0537C4u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0537C6u, 2);  /* 0C0537C4 mov.b @(r0,Rm),Rn */
	r12 += r14;  /* 0C0537C6 add Rm,Rn */
	r6 = r10 & 0xFF;  /* 0C0537C8 extu.b Rm,Rn */
	r0 = 0xAu;  /* 0C0537CA mov #imm,Rn */
	IF(0x0C0537CCu); W8(r0 + r14, r6); UPD(0x0C0537CEu, 4);  /* 0C0537CC mov.b Rm,@(r0,Rn) */
	r5 = 0x8u;  /* 0C0537CE mov #imm,Rn */
	W8(r12, r6); UPD(0x0C0537D2u, 2);  /* 0C0537D0 mov.b Rm,@Rn */
	r5 += r14;  /* 0C0537D2 add Rm,Rn */
	{ W8(r5, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C053730u, 4); goto L_0C053730; }  /* 0C0537D4 bra */
}

void f_0C0537E0(sh3_t *c)
{
	LOCALS;
L_0C0537E0: BLKS(0x0C0537E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0537E2u, 1);  /* 0C0537E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0537E4u, 1);  /* 0C0537E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0537E6u, 1);  /* 0C0537E4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0537E6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0537EAu, 2);  /* 0C0537E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0537ECu, 1);  /* 0C0537EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0537EEu, 1);  /* 0C0537EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0537F0u, 1);  /* 0C0537EE mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C0537F0 mov #imm,Rn */
	IF(0x0C0537F2u); r15 -= 4; W32(r15, PR); UPD(0x0C0537F4u, 2);  /* 0C0537F2 sts.l pr,@-Rn */
	r0 = 0xC053AD0u; UPD(0x0C0537F6u, 1);  /* 0C0537F4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0537F6 add #imm,Rn */
	r12 = 0x80808000u; UPD(0x0C0537FAu, 2);  /* 0C0537F8 mov.l @(disp,pc),Rn */
	IF(0x0C0537FAu); { u32 t_ = r0; PR = 0x0C0537FEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C053AD0, 0x0C053AD0u, 0x0C0537FEu); }  /* 0C0537FA jsr @Rn */
L_0C0537FE: BLKS(0x0C0537FEu);
	r11 = 0xC050CD0u; UPD(0x0C053800u, 1);  /* 0C0537FE mov.l @(disp,pc),Rn */
	W32(r14, r13); UPD(0x0C053802u, 1);  /* 0C053800 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C053804u, 1);  /* 0C053802 mov.l Rm,@(disp,Rn) */
L_0C053804: BLKS(0x0C053804u);
	r10 = 0xC04F330u; UPD(0x0C053806u, 1);  /* 0C053804 mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C053808u, 1);  /* 0C053806 mov.l @(disp,pc),Rn */
	IF(0x0C053808u); { u32 t_ = r10; PR = 0x0C05380Cu; IF(0x0C05380Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05380Cu); }  /* 0C053808 jsr @Rn */
L_0C05380C: BLKS(0x0C05380Cu);
	r10 = 0xC050650u; UPD(0x0C05380Eu, 1);  /* 0C05380C mov.l @(disp,pc),Rn */
	IF(0x0C05380Eu); { u32 t_ = r8; PR = 0x0C053812u; IF(0x0C053810u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C053812u); }  /* 0C05380E jsr @Rn */
L_0C053812: BLKS(0x0C053812u);
	r8 = 0xC0505F0u; UPD(0x0C053814u, 1);  /* 0C053812 mov.l @(disp,pc),Rn */
	IF(0x0C053814u); { u32 t_ = r10; PR = 0x0C053818u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C053818u); }  /* 0C053814 jsr @Rn */
L_0C053818: BLKS(0x0C053818u);
	IF(0x0C053818u); { u32 t_ = r8; PR = 0x0C05381Cu; IF(0x0C05381Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05381Cu); }  /* 0C053818 jsr @Rn */
L_0C05381C: BLKS(0x0C05381Cu);
	r4 = 0xC160538u; UPD(0x0C05381Eu, 1);  /* 0C05381C mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C05381E mov #imm,Rn */
	r6 = 0x2u;  /* 0C053820 mov #imm,Rn */
	IF(0x0C053822u); { u32 t_ = r11; PR = 0x0C053826u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053826u); }  /* 0C053822 jsr @Rn */
L_0C053826: BLKS(0x0C053826u);
	r2 = 0xC160CD0u; UPD(0x0C053828u, 1);  /* 0C053826 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C053828 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C05382Cu, 2);  /* 0C05382A mov.l @Rm,Rn */
	r6 = 0x3u;  /* 0C05382C mov #imm,Rn */
	IF(0x0C05382Eu); { u32 t_ = r11; PR = 0x0C053832u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053832u); }  /* 0C05382E jsr @Rn */
L_0C053832: BLKS(0x0C053832u);
	r4 = 0xC160608u; UPD(0x0C053834u, 1);  /* 0C053832 mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C053834 mov #imm,Rn */
	r6 = 0x3u;  /* 0C053836 mov #imm,Rn */
	IF(0x0C053838u); { u32 t_ = r11; PR = 0x0C05383Cu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05383Cu); }  /* 0C053838 jsr @Rn */
L_0C05383C: BLKS(0x0C05383Cu);
	r4 = 0xC160620u; UPD(0x0C05383Eu, 1);  /* 0C05383C mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C05383E mov #imm,Rn */
	r6 = 0x3u;  /* 0C053840 mov #imm,Rn */
	IF(0x0C053842u); { u32 t_ = r11; PR = 0x0C053846u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053846u); }  /* 0C053842 jsr @Rn */
L_0C053846: BLKS(0x0C053846u);
	r7 = r12;  /* 0C053846 mov Rm,Rn */
	r4 = 0xC160688u; UPD(0x0C05384Au, 2);  /* 0C053848 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C05384A mov #imm,Rn */
	IF(0x0C05384Cu); { u32 t_ = r11; PR = 0x0C053850u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C053850u); }  /* 0C05384C jsr @Rn */
L_0C053850: BLKS(0x0C053850u);
	r3 = 0xC392AE4u; UPD(0x0C053852u, 1);  /* 0C053850 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C053854u, 1);  /* 0C053852 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C053854 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05385Cu, 4); goto L_0C05385C; } goto L_0C05385A; }  /* 0C053856 bf/s */
L_0C05385A: BLKS(0x0C05385Au);
	r7 = 0x1u;  /* 0C05385A mov #imm,Rn */
	UPD(0x0C05385Cu, 2);
L_0C05385C: BLKS(0x0C05385Cu);
	r0 = 0xC392DC2u; UPD(0x0C05385Eu, 1);  /* 0C05385C mov.l @(disp,pc),Rn */
	r6 = r3;  /* 0C05385E mov Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C053862u, 2);  /* 0C053860 mov.b @Rm,Rn */
	r2 = 0x1u;  /* 0C053862 mov #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C053864 extu.b Rm,Rn */
	r6 += 0x1u;  /* 0C053866 add #imm,Rn */
	T = r0 > r2;  /* 0C053868 cmp/hi Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C05386Cu, 5);  /* 0C05386A mov.b @Rm,Rn */
	IF(0x0C05386Cu); r4 = T;  /* 0C05386C movt Rn */
	T = (r5 & r5) == 0;  /* 0C05386E tst Rm,Rn */
	IF(0x0C053870u); r3 = T;  /* 0C053870 movt Rn */
	r4 &= r3;  /* 0C053872 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C053874 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C053882u, 8); goto L_0C053882; } goto L_0C05387A; }  /* 0C053876 bt/s */
L_0C05387A: BLKS(0x0C05387Au);
	r10 = r7;  /* 0C05387A mov Rm,Rn */
	r10 += 0x2u;  /* 0C05387C add #imm,Rn */
	r7 = (u32)(s32)(s8)r10;  /* 0C05387E exts.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C053880 cmp/eq #imm,r0 */
	UPD(0x0C053882u, 5);
L_0C053882: BLKS(0x0C053882u);
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C05388Cu, 3); goto L_0C05388C; } goto L_0C053886; }  /* 0C053882 bf/s */
L_0C053886: BLKS(0x0C053886u);
	{ r4 = r7; /* slot mov Rm,Rn */ UPD(0x0C053A20u, 4); goto L_0C053A20; }  /* 0C053886 bra */
L_0C05388A: BLKS(0x0C05388Au);
	T = r0 == 0x2u;  /* 0C05388A cmp/eq #imm,r0 */
	UPD(0x0C05388Cu, 1);
L_0C05388C: BLKS(0x0C05388Cu);
	{ u32 c_ = !T; r3 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053894u, 3); goto L_0C053894; } goto L_0C053890; }  /* 0C05388C bf/s */
L_0C053890: BLKS(0x0C053890u);
	{ r3 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C053A10u, 4); goto L_0C053A10; }  /* 0C053890 bra */
L_0C053894: BLKS(0x0C053894u);
	r10 = 0xC27DEF4u; UPD(0x0C053896u, 1);  /* 0C053894 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C053898u, 1);  /* 0C053896 mov.b @Rm,Rn */
	r0 = r3;  /* 0C053898 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05389A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05389C tst Rm,Rn */
	{ u32 c_ = !T; r8 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0538A6u, 6); goto L_0C0538A6; } goto L_0C0538A2; }  /* 0C05389E bf/s */
L_0C0538A2: BLKS(0x0C0538A2u);
	{ IF(0x0C0538A4u); r8 <<= 2; /* slot shll2 Rn */ UPD(0x0C0538B4u, 4); goto L_0C0538B4; }  /* 0C0538A2 bra */
L_0C0538A6: BLKS(0x0C0538A6u);
	r8 = r7;  /* 0C0538A6 mov Rm,Rn */
	IF(0x0C0538A8u); r8 <<= 2;  /* 0C0538A8 shll2 Rn */
	r5 = 0xC160F08u; UPD(0x0C0538ACu, 3);  /* 0C0538AA mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C0538AC mov Rm,Rn */
	IF(0x0C0538AEu); r7 = R32(r0 + r5); UPD(0x0C0538B0u, 2);  /* 0C0538AE mov.l @(r0,Rm),Rn */
	r0 = r7;  /* 0C0538B0 mov Rm,Rn */
	IF(0x0C0538B2u); r9 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0538B4u, 2);  /* 0C0538B2 mov.b @(r0,Rm),Rn */
L_0C0538B4: BLKS(0x0C0538B4u);
	r0 = r3;  /* 0C0538B4 mov Rm,Rn */
	r0 &= 0x2u;  /* 0C0538B6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0538B8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0538C6u, 6); goto L_0C0538C6; } goto L_0C0538BE; }  /* 0C0538BA bt/s */
L_0C0538BE: BLKS(0x0C0538BEu);
	r2 = 0xC160F38u; UPD(0x0C0538C0u, 2);  /* 0C0538BE mov.l @(disp,pc),Rn */
	IF(0x0C0538C0u); r6 = R32(r0 + r2); UPD(0x0C0538C2u, 1);  /* 0C0538C0 mov.l @(r0,Rm),Rn */
	r0 = r6;  /* 0C0538C2 mov Rm,Rn */
	IF(0x0C0538C4u); r9 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0538C6u, 2);  /* 0C0538C4 mov.b @(r0,Rm),Rn */
L_0C0538C6: BLKS(0x0C0538C6u);
	r7 = 0xC160D20u; UPD(0x0C0538C8u, 1);  /* 0C0538C6 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C0538C8 mov #imm,Rn */
	r0 = r7;  /* 0C0538CA mov Rm,Rn */
	r4 = 0xC160690u; UPD(0x0C0538CEu, 3);  /* 0C0538CC mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C0538D0u, 1);  /* 0C0538CE mov.l @(disp,pc),Rn */
	IF(0x0C0538D0u); { u32 t_ = r11; PR = 0x0C0538D4u; IF(0x0C0538D2u); r5 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0538D4u); }  /* 0C0538D0 jsr @Rn */
L_0C0538D4: BLKS(0x0C0538D4u);
	r0 = r9;  /* 0C0538D4 mov Rm,Rn */
	r3 = 0xC160CD4u; UPD(0x0C0538D8u, 2);  /* 0C0538D6 mov.l @(disp,pc),Rn */
	IF(0x0C0538D8u); r0 <<= 2;  /* 0C0538D8 shll2 Rn */
	IF(0x0C0538DAu); r2 = R32(r0 + r3); UPD(0x0C0538DCu, 2);  /* 0C0538DA mov.l @(r0,Rm),Rn */
	r4 = 0xC160ED8u; UPD(0x0C0538DEu, 1);  /* 0C0538DC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C0538DE mov Rm,Rn */
	IF(0x0C0538E0u); r7 = R32(r0 + r4); UPD(0x0C0538E2u, 2);  /* 0C0538E0 mov.l @(r0,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0538E4u, 1);  /* 0C0538E2 mov.b @Rm,Rn */
	r0 &= 0x8u;  /* 0C0538E4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0538E6 tst Rm,Rn */
	if (T) { UPD(0x0C053902u, 5); goto L_0C053902; }  /* 0C0538E8 bt */
L_0C0538EA: BLKS(0x0C0538EAu);
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0538ECu, 1);  /* 0C0538EA mov.b @Rm,Rn */
	r10 = 0xC160D34u; UPD(0x0C0538EEu, 1);  /* 0C0538EC mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0538EE mov Rm,Rn */
	IF(0x0C0538F0u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0538F2u, 2);  /* 0C0538F0 mov.b @(r0,Rm),Rn */
	T = r8 == r3;  /* 0C0538F2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0538FCu, 4); goto L_0C0538FC; } goto L_0C0538F8; }  /* 0C0538F4 bf/s */
L_0C0538F8: BLKS(0x0C0538F8u);
	{ IF(0x0C0538FAu); r1 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C053900u, 4); goto L_0C053900; }  /* 0C0538F8 bra */
L_0C0538FC: BLKS(0x0C0538FCu);
	r1 = r3;  /* 0C0538FC mov Rm,Rn */
	r1 += 0x1u;  /* 0C0538FE add #imm,Rn */
	UPD(0x0C053900u, 2);
L_0C053900: BLKS(0x0C053900u);
	W8(r2, r1); UPD(0x0C053902u, 1);  /* 0C053900 mov.b Rm,@Rn */
L_0C053902: BLKS(0x0C053902u);
	r5 = 0xC27DDF4u; UPD(0x0C053904u, 1);  /* 0C053902 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C053906u, 1);  /* 0C053904 mov.w @(disp,pc),Rn */
	IF(0x0C053906u); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C053908u, 1);  /* 0C053906 mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C053908 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05390A tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053922u, 5); goto L_0C053922; } goto L_0C053910; }  /* 0C05390C bt/s */
L_0C053910: BLKS(0x0C053910u);
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C053912u, 2);  /* 0C053910 mov.b @Rm,Rn */
	IF(0x0C053912u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C053914u, 1);  /* 0C053912 mov.b @(r0,Rm),Rn */
	T = r6 == r3;  /* 0C053914 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C05391Cu, 4); goto L_0C05391C; }  /* 0C053916 bf */
L_0C053918: BLKS(0x0C053918u);
	{ IF(0x0C05391Au); ; /* slot nop */ UPD(0x0C053A00u, 3); goto L_0C053A00; }  /* 0C053918 bra */
L_0C05391C: BLKS(0x0C05391Cu);
	r1 = r3;  /* 0C05391C mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C05391E add #imm,Rn */
	UPD(0x0C053920u, 2);
L_0C053920: BLKS(0x0C053920u);
	W8(r2, r1); UPD(0x0C053922u, 1);  /* 0C053920 mov.b Rm,@Rn */
L_0C053922: BLKS(0x0C053922u);
	r3 = 0xC392DC2u; UPD(0x0C053924u, 1);  /* 0C053922 mov.l @(disp,pc),Rn */
	r7 = 0xC392AE5u; UPD(0x0C053926u, 1);  /* 0C053924 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C053928u, 1);  /* 0C053926 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C05392Au, 1);  /* 0C053928 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C05392A cmp/eq #imm,r0 */
	IF(0x0C05392Cu); r0 = T;  /* 0C05392C movt Rn */
	T = (r3 & r3) == 0;  /* 0C05392E tst Rm,Rn */
	IF(0x0C053930u); r2 = T;  /* 0C053930 movt Rn */
	r0 &= r2;  /* 0C053932 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C053934 tst Rm,Rn */
	{ u32 c_ = T; r8 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05393Eu, 9); goto L_0C05393E; } goto L_0C05393A; }  /* 0C053936 bt/s */
L_0C05393A: BLKS(0x0C05393Au);
	r8 += 0x1u;  /* 0C05393A add #imm,Rn */
	W8(r7, r8); UPD(0x0C05393Eu, 3);  /* 0C05393C mov.b Rm,@Rn */
L_0C05393E: BLKS(0x0C05393Eu);
	r0 = 0xC054300u; UPD(0x0C053940u, 1);  /* 0C05393E mov.l @(disp,pc),Rn */
	r4 = 0x22u;  /* 0C053940 mov #imm,Rn */
	IF(0x0C053942u); { u32 t_ = r0; PR = 0x0C053946u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054300, 0x0C054300u, 0x0C053946u); }  /* 0C053942 jsr @Rn */
L_0C053946: BLKS(0x0C053946u);
	r6 = 0xC054360u; UPD(0x0C053948u, 1);  /* 0C053946 mov.l @(disp,pc),Rn */
	r4 = 0x17u;  /* 0C053948 mov #imm,Rn */
	r10 = 0xC0545F0u; UPD(0x0C05394Cu, 2);  /* 0C05394A mov.l @(disp,pc),Rn */
	IF(0x0C05394Cu); { u32 t_ = r6; PR = 0x0C053950u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054360, 0x0C054360u, 0x0C053950u); }  /* 0C05394C jsr @Rn */
L_0C053950: BLKS(0x0C053950u);
	r4 = 0x0u;  /* 0C053950 mov #imm,Rn */
	r5 = 0x20u;  /* 0C053952 mov #imm,Rn */
	IF(0x0C053954u); { u32 t_ = r10; PR = 0x0C053958u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0545F0, 0x0C0545F0u, 0x0C053958u); }  /* 0C053954 jsr @Rn */
L_0C053958: BLKS(0x0C053958u);
	r5 = 0x1Du;  /* 0C053958 mov #imm,Rn */
	r6 = 0x3u;  /* 0C05395A mov #imm,Rn */
	IF(0x0C05395Cu); { u32 t_ = r10; PR = 0x0C053960u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0545F0, 0x0C0545F0u, 0x0C053960u); }  /* 0C05395C jsr @Rn */
L_0C053960: BLKS(0x0C053960u);
	r4 = 0xC054960u; UPD(0x0C053962u, 1);  /* 0C053960 mov.l @(disp,pc),Rn */
	r8 = 0xC051540u; UPD(0x0C053964u, 1);  /* 0C053962 mov.l @(disp,pc),Rn */
	IF(0x0C053964u); { u32 t_ = r4; PR = 0x0C053968u; IF(0x0C053966u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054960, 0x0C054960u, 0x0C053968u); }  /* 0C053964 jsr @Rn */
L_0C053968: BLKS(0x0C053968u);
	r5 = 0xC26C8C4u; UPD(0x0C05396Au, 1);  /* 0C053968 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C05396A mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05396Eu, 2);  /* 0C05396C mov.b @Rm,Rn */
	IF(0x0C05396Eu); { u32 t_ = r8; PR = 0x0C053972u; r5 = 0x15u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C053972u); }  /* 0C05396E jsr @Rn */
L_0C053972: BLKS(0x0C053972u);
	r7 = 0xC0543C0u; UPD(0x0C053974u, 1);  /* 0C053972 mov.l @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C053974 mov #imm,Rn */
	IF(0x0C053976u); { u32 t_ = r7; PR = 0x0C05397Au; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0543C0, 0x0C0543C0u, 0x0C05397Au); }  /* 0C053976 jsr @Rn */
L_0C05397A: BLKS(0x0C05397Au);
	r3 = 0xC054420u; UPD(0x0C05397Cu, 1);  /* 0C05397A mov.l @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C05397C mov #imm,Rn */
	IF(0x0C05397Eu); { u32 t_ = r3; PR = 0x0C053982u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054420, 0x0C054420u, 0x0C053982u); }  /* 0C05397E jsr @Rn */
L_0C053982: BLKS(0x0C053982u);
	r2 = 0xC054480u; UPD(0x0C053984u, 1);  /* 0C053982 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C053984 mov #imm,Rn */
	IF(0x0C053986u); { u32 t_ = r2; PR = 0x0C05398Au; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054480, 0x0C054480u, 0x0C05398Au); }  /* 0C053986 jsr @Rn */
L_0C05398A: BLKS(0x0C05398Au);
	r0 = 0xC054500u; UPD(0x0C05398Cu, 1);  /* 0C05398A mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C05398C mov #imm,Rn */
	IF(0x0C05398Eu); { u32 t_ = r0; PR = 0x0C053992u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054500, 0x0C054500u, 0x0C053992u); }  /* 0C05398E jsr @Rn */
L_0C053992: BLKS(0x0C053992u);
	r6 = 0xC054550u; UPD(0x0C053994u, 1);  /* 0C053992 mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C053994 mov #imm,Rn */
	r10 = 0xC054D30u; UPD(0x0C053998u, 2);  /* 0C053996 mov.l @(disp,pc),Rn */
	IF(0x0C053998u); { u32 t_ = r6; PR = 0x0C05399Cu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054550, 0x0C054550u, 0x0C05399Cu); }  /* 0C053998 jsr @Rn */
L_0C05399C: BLKS(0x0C05399Cu);
	r5 = R32(r14 + 0x4u); UPD(0x0C05399Eu, 1);  /* 0C05399C mov.l @(disp,Rm),Rn */
	r8 = 0xC055140u; UPD(0x0C0539A0u, 1);  /* 0C05399E mov.l @(disp,pc),Rn */
	IF(0x0C0539A0u); { u32 t_ = r10; PR = 0x0C0539A4u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054D30, 0x0C054D30u, 0x0C0539A4u); }  /* 0C0539A0 jsr @Rn */
L_0C0539A4: BLKS(0x0C0539A4u);
	r5 = R32(r14); UPD(0x0C0539A6u, 1);  /* 0C0539A4 mov.l @Rm,Rn */
	r4 = r9;  /* 0C0539A6 mov Rm,Rn */
	IF(0x0C0539A8u); { u32 t_ = r8; PR = 0x0C0539ACu; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C055140, 0x0C055140u, 0x0C0539ACu); }  /* 0C0539A8 jsr @Rn */
L_0C0539AC: BLKS(0x0C0539ACu);
	r5 = r13;  /* 0C0539AC mov Rm,Rn */
	r13 = 0xC0554C0u; UPD(0x0C0539B0u, 2);  /* 0C0539AE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0539B0 mov Rm,Rn */
	r10 = 0xC04F770u; UPD(0x0C0539B4u, 2);  /* 0C0539B2 mov.l @(disp,pc),Rn */
	r8 = 0xC050840u; UPD(0x0C0539B6u, 1);  /* 0C0539B4 mov.l @(disp,pc),Rn */
	IF(0x0C0539B6u); { u32 t_ = r13; PR = 0x0C0539BAu; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0554C0, 0x0C0554C0u, 0x0C0539BAu); }  /* 0C0539B6 jsr @Rn */
L_0C0539BA: BLKS(0x0C0539BAu);
	r5 = 0x7u;  /* 0C0539BA mov #imm,Rn */
	r13 = r0;  /* 0C0539BC mov Rm,Rn */
	IF(0x0C0539BEu); { u32 t_ = r10; PR = 0x0C0539C2u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C0539C2u); }  /* 0C0539BE jsr @Rn */
L_0C0539C2: BLKS(0x0C0539C2u);
	IF(0x0C0539C2u); { u32 t_ = r8; PR = 0x0C0539C6u; IF(0x0C0539C4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C0539C6u); }  /* 0C0539C2 jsr @Rn */
L_0C0539C6: BLKS(0x0C0539C6u);
	r0 = r9;  /* 0C0539C6 mov Rm,Rn */
	T = r0 == 0x12u;  /* 0C0539C8 cmp/eq #imm,r0 */
	r5 = 0xFFFFFFFFu;  /* 0C0539CA mov #imm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C0539CC negc Rm,Rn */
	r0 = r13;  /* 0C0539CE mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C0539D0 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C0539D2 negc Rm,Rn */
	r7 |= r10;  /* 0C0539D4 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0539D6 tst Rm,Rn */
	if (T) { UPD(0x0C0539DEu, 12); goto L_0C0539DE; }  /* 0C0539D8 bt */
L_0C0539DA: BLKS(0x0C0539DAu);
	{ IF(0x0C0539DCu); ; /* slot nop */ UPD(0x0C053804u, 3); goto L_0C053804; }  /* 0C0539DA bra */
L_0C0539DE: BLKS(0x0C0539DEu);
	r14 += 0x8u;  /* 0C0539DE add #imm,Rn */
	r15 = r14;  /* 0C0539E0 mov Rm,Rn */
	IF(0x0C0539E2u); PR = R32(r15); r15 += 4; UPD(0x0C0539E4u, 3);  /* 0C0539E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0539E6u, 1);  /* 0C0539E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0539E8u, 1);  /* 0C0539E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0539EAu, 1);  /* 0C0539E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0539ECu, 1);  /* 0C0539EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0539EEu, 1);  /* 0C0539EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0539F0u, 1);  /* 0C0539EE mov.l @Rm+,Rn */
	IF(0x0C0539F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0539F0 rts */
L_0C053A00: BLKS(0x0C053A00u);
	r4 = 0xC160D34u; UPD(0x0C053A02u, 1);  /* 0C053A00 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C053A02 mov Rm,Rn */
	{ IF(0x0C053A06u); r1 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C053920u, 4); goto L_0C053920; }  /* 0C053A04 bra */
L_0C053A10: BLKS(0x0C053A10u);
	{ r7 = (u32)(s32)(s8)r3; /* slot exts.b Rm,Rn */ UPD(0x0C053894u, 3); goto L_0C053894; }  /* 0C053A10 bra */
L_0C053A20: BLKS(0x0C053A20u);
	r4 += 0x4u;  /* 0C053A20 add #imm,Rn */
	{ r7 = (u32)(s32)(s8)r4; /* slot exts.b Rm,Rn */ UPD(0x0C05388Au, 4); goto L_0C05388A; }  /* 0C053A22 bra */
}

/* FUN_0c053ad0 */
void f_0C053AD0(sh3_t *c)
{
	LOCALS;
L_0C053AD0: BLKS(0x0C053AD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C053AD2u, 1);  /* 0C053AD0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C053AD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C053AD6u, 2);  /* 0C053AD4 mov.l Rm,@-Rn */
	r6 = 0x40u;  /* 0C053AD6 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C053ADAu, 2);  /* 0C053AD8 mov.l Rm,@-Rn */
	r3 = 0xC04C270u; UPD(0x0C053ADCu, 1);  /* 0C053ADA mov.l @(disp,pc),Rn */
	r9 = 0xC21CCA0u; UPD(0x0C053ADEu, 1);  /* 0C053ADC mov.l @(disp,pc),Rn */
	IF(0x0C053ADEu); r15 -= 4; W32(r15, PR); UPD(0x0C053AE0u, 1);  /* 0C053ADE sts.l pr,@-Rn */
	r4 = r9;  /* 0C053AE0 mov Rm,Rn */
	IF(0x0C053AE2u); { u32 t_ = r3; PR = 0x0C053AE6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04C270, 0x0C04C270u, 0x0C053AE6u); }  /* 0C053AE2 jsr @Rn */
L_0C053AE6: BLKS(0x0C053AE6u);
	r0 = r9;  /* 0C053AE6 mov Rm,Rn */
	r0 += 0xCu;  /* 0C053AE8 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C053AECu, 3);  /* 0C053AEA mov.b @Rm,Rn */
	r7 = r9;  /* 0C053AEC mov Rm,Rn */
	r5 = 0xC392DC2u; UPD(0x0C053AF0u, 2);  /* 0C053AEE mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C053AF0 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r1 = v_; } UPD(0x0C053AF4u, 2);  /* 0C053AF2 mov.b @Rm+,Rn */
	r6 += 0x2u;  /* 0C053AF4 add #imm,Rn */
	W8(r5, r8); UPD(0x0C053AF8u, 2);  /* 0C053AF6 mov.b Rm,@Rn */
	r3 = r9;  /* 0C053AF8 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C053AFCu, 2);  /* 0C053AFA mov.b @Rm,Rn */
	r3 += 0x3u;  /* 0C053AFC add #imm,Rn */
	r5 = 0xC286750u; UPD(0x0C053B00u, 2);  /* 0C053AFE mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C053B00 mov Rm,Rn */
	W8(r5, r4); UPD(0x0C053B04u, 2);  /* 0C053B02 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C053B04 add #imm,Rn */
	r8 = 0xC392AE4u; UPD(0x0C053B08u, 2);  /* 0C053B06 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C053B08 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C053B0Cu, 2);  /* 0C053B0A mov.b @Rm,Rn */
	W8(r8, r1); UPD(0x0C053B0Eu, 1);  /* 0C053B0C mov.b Rm,@Rn */
	r4 = 0xC393028u; UPD(0x0C053B10u, 1);  /* 0C053B0E mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C053B10 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C053B14u, 2);  /* 0C053B12 mov.b @Rm,Rn */
	W8(r4, r2); UPD(0x0C053B16u, 1);  /* 0C053B14 mov.b Rm,@Rn */
	W8(r8, r0); UPD(0x0C053B18u, 1);  /* 0C053B16 mov.b Rm,@Rn */
	r2 = r9;  /* 0C053B18 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C053B1Cu, 2);  /* 0C053B1A mov.b @Rm,Rn */
	r2 += 0x5u;  /* 0C053B1C add #imm,Rn */
	r0 = r9;  /* 0C053B1E mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C053B22u, 3);  /* 0C053B20 mov.b @Rm,Rn */
	r0 += 0x6u;  /* 0C053B22 add #imm,Rn */
	W8(r5, r6); UPD(0x0C053B26u, 2);  /* 0C053B24 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C053B26 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C053B2Au, 2);  /* 0C053B28 mov.b @Rm,Rn */
	r6 = r9;  /* 0C053B2A mov Rm,Rn */
	r7 = 0xC395086u; UPD(0x0C053B2Eu, 2);  /* 0C053B2C mov.l @(disp,pc),Rn */
	r6 += 0x7u;  /* 0C053B2E add #imm,Rn */
	W8(r4, r3); UPD(0x0C053B32u, 2);  /* 0C053B30 mov.b Rm,@Rn */
	r2 = r9;  /* 0C053B32 mov Rm,Rn */
	W8(r7, r8); UPD(0x0C053B36u, 2);  /* 0C053B34 mov.b Rm,@Rn */
	r2 += 0x8u;  /* 0C053B36 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C053B3Au, 2);  /* 0C053B38 mov.b @Rm,Rn */
	r8 = r9;  /* 0C053B3A mov Rm,Rn */
	r4 = 0xC26C8C4u; UPD(0x0C053B3Eu, 2);  /* 0C053B3C mov.l @(disp,pc),Rn */
	r8 += 0x9u;  /* 0C053B3E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C053B42u, 2);  /* 0C053B40 mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C053B44u, 1);  /* 0C053B42 mov.b Rm,@Rn */
	r2 = r9;  /* 0C053B44 mov Rm,Rn */
	r0 = 0xC21F5E0u; UPD(0x0C053B48u, 2);  /* 0C053B46 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C053B48 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C053B4Cu, 2);  /* 0C053B4A mov.b @Rm,Rn */
	r5 += 0xAu;  /* 0C053B4C add #imm,Rn */
	r6 = 0xC22466Cu; UPD(0x0C053B50u, 2);  /* 0C053B4E mov.l @(disp,pc),Rn */
	r2 += 0xBu;  /* 0C053B50 add #imm,Rn */
	W8(r0, r3); UPD(0x0C053B54u, 2);  /* 0C053B52 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C053B56u, 1);  /* 0C053B54 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C053B58u, 1);  /* 0C053B56 mov.b @Rm,Rn */
	r7 = r9;  /* 0C053B58 mov Rm,Rn */
	r3 = 0xC21F588u; UPD(0x0C053B5Cu, 2);  /* 0C053B5A mov.l @(disp,pc),Rn */
	r7 += 0xFu;  /* 0C053B5C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C053B60u, 2);  /* 0C053B5E mov.b @Rm,Rn */
	W8(r3, r4); UPD(0x0C053B62u, 1);  /* 0C053B60 mov.b Rm,@Rn */
	r2 = r9;  /* 0C053B62 mov Rm,Rn */
	r8 = 0xC220C53u; UPD(0x0C053B66u, 2);  /* 0C053B64 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C053B66 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C053B6Au, 2);  /* 0C053B68 mov.b @Rm,Rn */
	r4 += 0xDu;  /* 0C053B6A add #imm,Rn */
	r5 = 0xC286276u; UPD(0x0C053B6Eu, 2);  /* 0C053B6C mov.l @(disp,pc),Rn */
	r2 += 0xEu;  /* 0C053B6E add #imm,Rn */
	W8(r8, r0); UPD(0x0C053B72u, 2);  /* 0C053B70 mov.b Rm,@Rn */
	W8(r5, r6); UPD(0x0C053B74u, 1);  /* 0C053B72 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C053B76u, 1);  /* 0C053B74 mov.b @Rm,Rn */
	r6 = r9;  /* 0C053B76 mov Rm,Rn */
	r0 = 0xC392D50u; UPD(0x0C053B7Au, 2);  /* 0C053B78 mov.l @(disp,pc),Rn */
	r6 += 0x10u;  /* 0C053B7A add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C053B7Eu, 2);  /* 0C053B7C mov.b @Rm,Rn */
	W8(r0, r3); UPD(0x0C053B80u, 1);  /* 0C053B7E mov.b Rm,@Rn */
	r7 = 0xC392E24u; UPD(0x0C053B82u, 1);  /* 0C053B80 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C053B82 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C053B86u, 2);  /* 0C053B84 mov.b @Rm,Rn */
	r0 += 0x11u;  /* 0C053B86 add #imm,Rn */
	W8(r7, r8); UPD(0x0C053B8Au, 2);  /* 0C053B88 mov.b Rm,@Rn */
	r4 = r5 & 0xFF;  /* 0C053B8A extu.b Rm,Rn */
	r3 = 0xC21F898u; UPD(0x0C053B8Eu, 2);  /* 0C053B8C mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C053B8E mov Rm,Rn */
	W32(r3, r4); UPD(0x0C053B92u, 2);  /* 0C053B90 mov.l Rm,@Rn */
	r9 += 0x13u;  /* 0C053B92 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C053B96u, 2);  /* 0C053B94 mov.b @Rm,Rn */
	r6 += 0x12u;  /* 0C053B96 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C053B9Au, 2);  /* 0C053B98 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C053B9A extu.b Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C053B9C extu.b Rm,Rn */
	r7 = 0xC2175E4u; UPD(0x0C053BA0u, 3);  /* 0C053B9E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C053BA2u, 1);  /* 0C053BA0 mov.b @Rm,Rn */
	r3 = 0xC21E100u; UPD(0x0C053BA4u, 1);  /* 0C053BA2 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C053BA4 extu.b Rm,Rn */
	r0 = 0xC26CAD8u; UPD(0x0C053BA8u, 2);  /* 0C053BA6 mov.l @(disp,pc),Rn */
	W32(r7, r8); UPD(0x0C053BAAu, 1);  /* 0C053BA8 mov.l Rm,@Rn */
	r9 = 0xC1604D0u; UPD(0x0C053BACu, 1);  /* 0C053BAA mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C053BAC mov #imm,Rn */
	W32(r3, r4); UPD(0x0C053BB0u, 2);  /* 0C053BAE mov.l Rm,@Rn */
	W32(r0, r2); UPD(0x0C053BB2u, 1);  /* 0C053BB0 mov.l Rm,@Rn */
	IF(0x0C053BB2u); ;  /* 0C053BB2 nop */
	UPD(0x0C053BB4u, 1);
L_0C053BB4: BLKS(0x0C053BB4u);
	r0 = 0xC21CCC0u; UPD(0x0C053BB6u, 1);  /* 0C053BB4 mov.l @(disp,pc),Rn */
	IF(0x0C053BB6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C053BB8u, 1);  /* 0C053BB6 mov.b @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r6 = v_; } UPD(0x0C053BBAu, 1);  /* 0C053BB8 mov.b @Rm+,Rn */
	r2 = r4 & 0xFF;  /* 0C053BBA extu.b Rm,Rn */
	T = r2 == r6;  /* 0C053BBC cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C053BCAu, 5); goto L_0C053BCA; } goto L_0C053BC2; }  /* 0C053BBE bt/s */
L_0C053BC2: BLKS(0x0C053BC2u);
	r7 = 0xC054140u; UPD(0x0C053BC4u, 2);  /* 0C053BC2 mov.l @(disp,pc),Rn */
	IF(0x0C053BC4u); { u32 t_ = r7; PR = 0x0C053BC8u; IF(0x0C053BC6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053BC8u); }  /* 0C053BC4 jsr @Rn */
L_0C053BC8: BLKS(0x0C053BC8u);
	r5 = r8;  /* 0C053BC8 mov Rm,Rn */
	UPD(0x0C053BCAu, 1);
L_0C053BCA: BLKS(0x0C053BCAu);
	r5 += 0x1u;  /* 0C053BCA add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C053BCC exts.w Rm,Rn */
	r2 = 0x1Fu;  /* 0C053BCE mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C053BD0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053BB4u, 7); goto L_0C053BB4; }  /* 0C053BD2 bf */
L_0C053BD4: BLKS(0x0C053BD4u);
	r8 = 0xC21F898u; UPD(0x0C053BD6u, 1);  /* 0C053BD4 mov.l @(disp,pc),Rn */
	r9 = R32(r8); UPD(0x0C053BD8u, 1);  /* 0C053BD6 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C053BD8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053BE0u, 4); goto L_0C053BE0; }  /* 0C053BDA bf */
L_0C053BDC: BLKS(0x0C053BDCu);
	{ IF(0x0C053BDEu); ; /* slot nop */ UPD(0x0C053E10u, 3); goto L_0C053E10; }  /* 0C053BDC bra */
L_0C053BE0: BLKS(0x0C053BE0u);
	r6 = 0xC2175E4u; UPD(0x0C053BE2u, 1);  /* 0C053BE0 mov.l @(disp,pc),Rn */
	r8 = 0xFu;  /* 0C053BE2 mov #imm,Rn */
	r3 = R32(r6); UPD(0x0C053BE6u, 2);  /* 0C053BE4 mov.l @Rm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C053BE6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053BEEu, 4); goto L_0C053BEE; }  /* 0C053BE8 bf */
L_0C053BEA: BLKS(0x0C053BEAu);
	{ IF(0x0C053BECu); ; /* slot nop */ UPD(0x0C053E00u, 3); goto L_0C053E00; }  /* 0C053BEA bra */
L_0C053BEE: BLKS(0x0C053BEEu);
	r5 = 0xC21E100u; UPD(0x0C053BF0u, 1);  /* 0C053BEE mov.l @(disp,pc),Rn */
	r4 = 0x17u;  /* 0C053BF0 mov #imm,Rn */
	r7 = R32(r5); UPD(0x0C053BF4u, 2);  /* 0C053BF2 mov.l @Rm,Rn */
	r7 += 0xFFFFFFF8u;  /* 0C053BF4 add #imm,Rn */
	T = r7 > r4;  /* 0C053BF6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053BFEu, 5); goto L_0C053BFE; }  /* 0C053BF8 bf */
L_0C053BFA: BLKS(0x0C053BFAu);
	{ IF(0x0C053BFCu); ; /* slot nop */ UPD(0x0C053DF0u, 3); goto L_0C053DF0; }  /* 0C053BFA bra */
L_0C053BFE: BLKS(0x0C053BFEu);
	r3 = 0xC26CAD8u; UPD(0x0C053C00u, 1);  /* 0C053BFE mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C053C02u, 1);  /* 0C053C00 mov.l @Rm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C053C02 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053C0Au, 4); goto L_0C053C0A; }  /* 0C053C04 bf */
L_0C053C06: BLKS(0x0C053C06u);
	{ IF(0x0C053C08u); ; /* slot nop */ UPD(0x0C053DE0u, 3); goto L_0C053DE0; }  /* 0C053C06 bra */
L_0C053C0A: BLKS(0x0C053C0Au);
	r2 = 0xC392DC2u; UPD(0x0C053C0Cu, 1);  /* 0C053C0A mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C053C0C mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C053C10u, 2);  /* 0C053C0E mov.b @Rm,Rn */
	T = r4 > r6;  /* 0C053C10 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C18u, 4); goto L_0C053C18; }  /* 0C053C12 bf */
L_0C053C14: BLKS(0x0C053C14u);
	{ IF(0x0C053C16u); ; /* slot nop */ UPD(0x0C053DD0u, 3); goto L_0C053DD0; }  /* 0C053C14 bra */
L_0C053C18: BLKS(0x0C053C18u);
	r8 = 0x0u;  /* 0C053C18 mov #imm,Rn */
	IF(0x0C053C1Au); ;  /* 0C053C1A nop */
	UPD(0x0C053C1Cu, 2);
L_0C053C1C: BLKS(0x0C053C1Cu);
	r9 = 0xC392AE4u; UPD(0x0C053C1Eu, 1);  /* 0C053C1C mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C053C1E mov #imm,Rn */
	r0 = r9;  /* 0C053C20 mov Rm,Rn */
	IF(0x0C053C22u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C053C24u, 3);  /* 0C053C22 mov.b @(r0,Rm),Rn */
	T = r1 > r5;  /* 0C053C24 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C2Cu, 4); goto L_0C053C2C; }  /* 0C053C26 bf */
L_0C053C28: BLKS(0x0C053C28u);
	{ IF(0x0C053C2Au); ; /* slot nop */ UPD(0x0C053DC0u, 3); goto L_0C053DC0; }  /* 0C053C28 bra */
L_0C053C2C: BLKS(0x0C053C2Cu);
	r2 = 0xC286750u; UPD(0x0C053C2Eu, 1);  /* 0C053C2C mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C053C2E mov #imm,Rn */
	r0 = r2;  /* 0C053C30 mov Rm,Rn */
	IF(0x0C053C32u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C053C34u, 3);  /* 0C053C32 mov.b @(r0,Rm),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C053C34 add #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C053C36 extu.b Rm,Rn */
	T = r6 > r3;  /* 0C053C38 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C40u, 6); goto L_0C053C40; }  /* 0C053C3A bf */
L_0C053C3C: BLKS(0x0C053C3Cu);
	{ IF(0x0C053C3Eu); ; /* slot nop */ UPD(0x0C053DB0u, 3); goto L_0C053DB0; }  /* 0C053C3C bra */
L_0C053C40: BLKS(0x0C053C40u);
	r9 = 0xC393028u; UPD(0x0C053C42u, 1);  /* 0C053C40 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C053C42 mov #imm,Rn */
	r0 = r9;  /* 0C053C44 mov Rm,Rn */
	IF(0x0C053C46u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C053C48u, 3);  /* 0C053C46 mov.b @(r0,Rm),Rn */
	T = r1 > r5;  /* 0C053C48 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C50u, 4); goto L_0C053C50; }  /* 0C053C4A bf */
L_0C053C4C: BLKS(0x0C053C4Cu);
	{ IF(0x0C053C4Eu); ; /* slot nop */ UPD(0x0C053DA0u, 3); goto L_0C053DA0; }  /* 0C053C4C bra */
L_0C053C50: BLKS(0x0C053C50u);
	r3 = r8;  /* 0C053C50 mov Rm,Rn */
	UPD(0x0C053C52u, 1);
L_0C053C52: BLKS(0x0C053C52u);
	r3 += 0x1u;  /* 0C053C52 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C053C54 exts.w Rm,Rn */
	r9 = 0x1u;  /* 0C053C56 mov #imm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C053C58 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053C1Cu, 7); goto L_0C053C1C; }  /* 0C053C5A bf */
L_0C053C5C: BLKS(0x0C053C5Cu);
	r4 = 0xC392D50u; UPD(0x0C053C5Eu, 1);  /* 0C053C5C mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C053C60u, 1);  /* 0C053C5E mov.b @Rm,Rn */
	r6 = r8 & 0xFF;  /* 0C053C60 extu.b Rm,Rn */
	r8 = 0x2u;  /* 0C053C62 mov #imm,Rn */
	T = r6 > r8;  /* 0C053C64 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C6Cu, 6); goto L_0C053C6C; }  /* 0C053C66 bf */
L_0C053C68: BLKS(0x0C053C68u);
	{ IF(0x0C053C6Au); ; /* slot nop */ UPD(0x0C053D90u, 3); goto L_0C053D90; }  /* 0C053C68 bra */
L_0C053C6C: BLKS(0x0C053C6Cu);
	r0 = 0xC392E24u; UPD(0x0C053C6Eu, 1);  /* 0C053C6C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C053C70u, 1);  /* 0C053C6E mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C053C70 extu.b Rm,Rn */
	T = r7 > r8;  /* 0C053C72 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053C7Au, 5); goto L_0C053C7A; }  /* 0C053C74 bf */
L_0C053C76: BLKS(0x0C053C76u);
	{ IF(0x0C053C78u); ; /* slot nop */ UPD(0x0C053D80u, 3); goto L_0C053D80; }  /* 0C053C76 bra */
L_0C053C7A: BLKS(0x0C053C7Au);
	r4 = 0xC21F5E0u; UPD(0x0C053C7Cu, 1);  /* 0C053C7A mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C053C7Eu, 1);  /* 0C053C7C mov.b @Rm,Rn */
	r6 = r8 & 0xFF;  /* 0C053C7E extu.b Rm,Rn */
	r8 = 0x7u;  /* 0C053C80 mov #imm,Rn */
	T = r6 > r8;  /* 0C053C82 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D70u, 6); goto L_0C053D70; }  /* 0C053C84 bt */
L_0C053C86: BLKS(0x0C053C86u);
	r0 = 0xC22466Cu; UPD(0x0C053C88u, 1);  /* 0C053C86 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C053C8Au, 1);  /* 0C053C88 mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C053C8A extu.b Rm,Rn */
	T = r7 > r8;  /* 0C053C8C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D60u, 5); goto L_0C053D60; }  /* 0C053C8E bt */
L_0C053C90: BLKS(0x0C053C90u);
	r2 = 0xC21F588u; UPD(0x0C053C92u, 1);  /* 0C053C90 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C053C92 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C053C96u, 2);  /* 0C053C94 mov.b @Rm,Rn */
	T = r4 > r6;  /* 0C053C96 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D50u, 4); goto L_0C053D50; }  /* 0C053C98 bt */
L_0C053C9A: BLKS(0x0C053C9Au);
	r3 = 0xC220C53u; UPD(0x0C053C9Cu, 1);  /* 0C053C9A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C053C9Eu, 1);  /* 0C053C9C mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C053C9E extu.b Rm,Rn */
	T = r5 > r8;  /* 0C053CA0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D40u, 5); goto L_0C053D40; }  /* 0C053CA2 bt */
L_0C053CA4: BLKS(0x0C053CA4u);
	r2 = 0xC286276u; UPD(0x0C053CA6u, 1);  /* 0C053CA4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C053CA8u, 1);  /* 0C053CA6 mov.b @Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C053CA8 extu.b Rm,Rn */
	T = r6 > r9;  /* 0C053CAA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D30u, 5); goto L_0C053D30; }  /* 0C053CAC bt */
L_0C053CAE: BLKS(0x0C053CAEu);
	r0 = 0xC395086u; UPD(0x0C053CB0u, 1);  /* 0C053CAE mov.l @(disp,pc),Rn */
	r7 = 0xAu;  /* 0C053CB0 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C053CB4u, 2);  /* 0C053CB2 mov.b @Rm,Rn */
	T = r5 > r7;  /* 0C053CB4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C053D20u, 4); goto L_0C053D20; }  /* 0C053CB6 bt */
L_0C053CB8: BLKS(0x0C053CB8u);
	r7 = 0xC28651Cu; UPD(0x0C053CBAu, 1);  /* 0C053CB8 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C053CBA mov #imm,Rn */
	r3 = 0xC21CCA0u; UPD(0x0C053CBEu, 2);  /* 0C053CBC mov.l @(disp,pc),Rn */
	r2 = 0x3Fu;  /* 0C053CBE mov #imm,Rn */
	UPD(0x0C053CC0u, 1);
L_0C053CC0: BLKS(0x0C053CC0u);
	IF(0x0C053CC0u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C053CC2u, 1);  /* 0C053CC0 mov.b @(r0,Rm),Rn */
	r8 = r0;  /* 0C053CC2 mov Rm,Rn */
	IF(0x0C053CC4u); W8(r0 + r7, r6); UPD(0x0C053CC6u, 2);  /* 0C053CC4 mov.b Rm,@(r0,Rn) */
	r8 += 0x1u;  /* 0C053CC6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C053CC8 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C053CCA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C053CC0u, 6); goto L_0C053CC0; }  /* 0C053CCC bf */
L_0C053CCE: BLKS(0x0C053CCEu);
	r9 = 0xC0540C0u; UPD(0x0C053CD0u, 1);  /* 0C053CCE mov.l @(disp,pc),Rn */
	r8 = 0xC392DE0u; UPD(0x0C053CD2u, 1);  /* 0C053CD0 mov.l @(disp,pc),Rn */
	IF(0x0C053CD2u); { u32 t_ = r9; PR = 0x0C053CD6u; IF(0x0C053CD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0540C0, 0x0C0540C0u, 0x0C053CD6u); }  /* 0C053CD2 jsr @Rn */
L_0C053CD6: BLKS(0x0C053CD6u);
	r2 = 0xC21E100u; UPD(0x0C053CD8u, 1);  /* 0C053CD6 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C053CD8 mov #imm,Rn */
	r5 = 0xC392AE4u; UPD(0x0C053CDCu, 2);  /* 0C053CDA mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C053CDEu, 1);  /* 0C053CDC mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C053CE0u, 1);  /* 0C053CDE mov.b @Rm+,Rn */
	r4 = 0xC220C38u; UPD(0x0C053CE2u, 1);  /* 0C053CE0 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C053CE2 tst Rm,Rn */
	r3 = 0xC392DC2u; UPD(0x0C053CE6u, 2);  /* 0C053CE4 mov.l @(disp,pc),Rn */
	W32(r4, r6); UPD(0x0C053CE8u, 1);  /* 0C053CE6 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C053CEAu, 1);  /* 0C053CE8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C053CEA negc Rm,Rn */
	T = r0 == 0x3u;  /* 0C053CEC cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C053CF0u, 3);  /* 0C053CEE mov.b @Rm,Rn */
	IF(0x0C053CF0u); r9 = T;  /* 0C053CF0 movt Rn */
	T = (r1 & r1) == 0;  /* 0C053CF2 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C053CF4 negc Rm,Rn */
	r2 &= r9;  /* 0C053CF6 and Rm,Rn */
	r4 |= r2;  /* 0C053CF8 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C053CFA tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C053D0Au, 9); goto L_0C053D0A; } UPD(0x0C053D00u, 1); goto L_0C053D00; }  /* 0C053CFC bt/s */
L_0C053D00: BLKS(0x0C053D00u);
	r1 = 0xC392E24u; UPD(0x0C053D02u, 1);  /* 0C053D00 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C053D02 mov #imm,Rn */
	r7 = 0xC392D50u; UPD(0x0C053D06u, 2);  /* 0C053D04 mov.l @(disp,pc),Rn */
	W8(r1, r5); UPD(0x0C053D08u, 1);  /* 0C053D06 mov.b Rm,@Rn */
	W8(r7, r5); UPD(0x0C053D0Au, 1);  /* 0C053D08 mov.b Rm,@Rn */
L_0C053D0A: BLKS(0x0C053D0Au);
	r15 = r14;  /* 0C053D0A mov Rm,Rn */
	IF(0x0C053D0Cu); PR = R32(r15); r15 += 4; UPD(0x0C053D0Eu, 2);  /* 0C053D0C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C053D10u, 1);  /* 0C053D0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C053D12u, 1);  /* 0C053D10 mov.l @Rm+,Rn */
	IF(0x0C053D12u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C053D12 rts */
L_0C053D20: BLKS(0x0C053D20u);
	r3 = 0xC054140u; UPD(0x0C053D22u, 1);  /* 0C053D20 mov.l @(disp,pc),Rn */
	IF(0x0C053D22u); { u32 t_ = r3; PR = 0x0C053D26u; IF(0x0C053D24u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D26u); }  /* 0C053D22 jsr @Rn */
L_0C053D26: BLKS(0x0C053D26u);
	{ IF(0x0C053D28u); ; /* slot nop */ UPD(0x0C053CB8u, 3); goto L_0C053CB8; }  /* 0C053D26 bra */
L_0C053D30: BLKS(0x0C053D30u);
	r9 = 0xC054140u; UPD(0x0C053D32u, 1);  /* 0C053D30 mov.l @(disp,pc),Rn */
	IF(0x0C053D32u); { u32 t_ = r9; PR = 0x0C053D36u; IF(0x0C053D34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D36u); }  /* 0C053D32 jsr @Rn */
L_0C053D36: BLKS(0x0C053D36u);
	{ IF(0x0C053D38u); ; /* slot nop */ UPD(0x0C053CAEu, 3); goto L_0C053CAE; }  /* 0C053D36 bra */
L_0C053D40: BLKS(0x0C053D40u);
	r8 = 0xC054140u; UPD(0x0C053D42u, 1);  /* 0C053D40 mov.l @(disp,pc),Rn */
	IF(0x0C053D42u); { u32 t_ = r8; PR = 0x0C053D46u; IF(0x0C053D44u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D46u); }  /* 0C053D42 jsr @Rn */
L_0C053D46: BLKS(0x0C053D46u);
	{ IF(0x0C053D48u); ; /* slot nop */ UPD(0x0C053CA4u, 3); goto L_0C053CA4; }  /* 0C053D46 bra */
L_0C053D50: BLKS(0x0C053D50u);
	r7 = 0xC054140u; UPD(0x0C053D52u, 1);  /* 0C053D50 mov.l @(disp,pc),Rn */
	IF(0x0C053D52u); { u32 t_ = r7; PR = 0x0C053D56u; IF(0x0C053D54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D56u); }  /* 0C053D52 jsr @Rn */
L_0C053D56: BLKS(0x0C053D56u);
	{ IF(0x0C053D58u); ; /* slot nop */ UPD(0x0C053C9Au, 3); goto L_0C053C9A; }  /* 0C053D56 bra */
L_0C053D60: BLKS(0x0C053D60u);
	r3 = 0xC054140u; UPD(0x0C053D62u, 1);  /* 0C053D60 mov.l @(disp,pc),Rn */
	IF(0x0C053D62u); { u32 t_ = r3; PR = 0x0C053D66u; IF(0x0C053D64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D66u); }  /* 0C053D62 jsr @Rn */
L_0C053D66: BLKS(0x0C053D66u);
	{ IF(0x0C053D68u); ; /* slot nop */ UPD(0x0C053C90u, 3); goto L_0C053C90; }  /* 0C053D66 bra */
L_0C053D70: BLKS(0x0C053D70u);
	r2 = 0xC054140u; UPD(0x0C053D72u, 1);  /* 0C053D70 mov.l @(disp,pc),Rn */
	IF(0x0C053D72u); { u32 t_ = r2; PR = 0x0C053D76u; IF(0x0C053D74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D76u); }  /* 0C053D72 jsr @Rn */
L_0C053D76: BLKS(0x0C053D76u);
	{ IF(0x0C053D78u); ; /* slot nop */ UPD(0x0C053C86u, 3); goto L_0C053C86; }  /* 0C053D76 bra */
L_0C053D80: BLKS(0x0C053D80u);
	r3 = 0xC054140u; UPD(0x0C053D82u, 1);  /* 0C053D80 mov.l @(disp,pc),Rn */
	IF(0x0C053D82u); { u32 t_ = r3; PR = 0x0C053D86u; IF(0x0C053D84u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D86u); }  /* 0C053D82 jsr @Rn */
L_0C053D86: BLKS(0x0C053D86u);
	{ IF(0x0C053D88u); ; /* slot nop */ UPD(0x0C053C7Au, 3); goto L_0C053C7A; }  /* 0C053D86 bra */
L_0C053D90: BLKS(0x0C053D90u);
	r2 = 0xC054140u; UPD(0x0C053D92u, 1);  /* 0C053D90 mov.l @(disp,pc),Rn */
	IF(0x0C053D92u); { u32 t_ = r2; PR = 0x0C053D96u; IF(0x0C053D94u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053D96u); }  /* 0C053D92 jsr @Rn */
L_0C053D96: BLKS(0x0C053D96u);
	{ IF(0x0C053D98u); ; /* slot nop */ UPD(0x0C053C6Cu, 3); goto L_0C053C6C; }  /* 0C053D96 bra */
L_0C053DA0: BLKS(0x0C053DA0u);
	r0 = 0xC054140u; UPD(0x0C053DA2u, 1);  /* 0C053DA0 mov.l @(disp,pc),Rn */
	IF(0x0C053DA2u); { u32 t_ = r0; PR = 0x0C053DA6u; IF(0x0C053DA4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DA6u); }  /* 0C053DA2 jsr @Rn */
L_0C053DA6: BLKS(0x0C053DA6u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C053C52u, 3); goto L_0C053C52; }  /* 0C053DA6 bra */
L_0C053DB0: BLKS(0x0C053DB0u);
	r7 = 0xC054140u; UPD(0x0C053DB2u, 1);  /* 0C053DB0 mov.l @(disp,pc),Rn */
	IF(0x0C053DB2u); { u32 t_ = r7; PR = 0x0C053DB6u; IF(0x0C053DB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DB6u); }  /* 0C053DB2 jsr @Rn */
L_0C053DB6: BLKS(0x0C053DB6u);
	{ IF(0x0C053DB8u); ; /* slot nop */ UPD(0x0C053C40u, 3); goto L_0C053C40; }  /* 0C053DB6 bra */
L_0C053DC0: BLKS(0x0C053DC0u);
	r0 = 0xC054140u; UPD(0x0C053DC2u, 1);  /* 0C053DC0 mov.l @(disp,pc),Rn */
	IF(0x0C053DC2u); { u32 t_ = r0; PR = 0x0C053DC6u; IF(0x0C053DC4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DC6u); }  /* 0C053DC2 jsr @Rn */
L_0C053DC6: BLKS(0x0C053DC6u);
	{ IF(0x0C053DC8u); ; /* slot nop */ UPD(0x0C053C2Cu, 3); goto L_0C053C2C; }  /* 0C053DC6 bra */
L_0C053DD0: BLKS(0x0C053DD0u);
	r7 = 0xC054140u; UPD(0x0C053DD2u, 1);  /* 0C053DD0 mov.l @(disp,pc),Rn */
	IF(0x0C053DD2u); { u32 t_ = r7; PR = 0x0C053DD6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DD6u); }  /* 0C053DD2 jsr @Rn */
L_0C053DD6: BLKS(0x0C053DD6u);
	{ IF(0x0C053DD8u); ; /* slot nop */ UPD(0x0C053C1Cu, 3); goto L_0C053C1C; }  /* 0C053DD6 bra */
L_0C053DE0: BLKS(0x0C053DE0u);
	r8 = 0xC054140u; UPD(0x0C053DE2u, 1);  /* 0C053DE0 mov.l @(disp,pc),Rn */
	IF(0x0C053DE2u); { u32 t_ = r8; PR = 0x0C053DE6u; IF(0x0C053DE4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DE6u); }  /* 0C053DE2 jsr @Rn */
L_0C053DE6: BLKS(0x0C053DE6u);
	{ IF(0x0C053DE8u); ; /* slot nop */ UPD(0x0C053C0Au, 3); goto L_0C053C0A; }  /* 0C053DE6 bra */
L_0C053DF0: BLKS(0x0C053DF0u);
	r9 = 0xC054140u; UPD(0x0C053DF2u, 1);  /* 0C053DF0 mov.l @(disp,pc),Rn */
	IF(0x0C053DF2u); { u32 t_ = r9; PR = 0x0C053DF6u; IF(0x0C053DF4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053DF6u); }  /* 0C053DF2 jsr @Rn */
L_0C053DF6: BLKS(0x0C053DF6u);
	{ IF(0x0C053DF8u); ; /* slot nop */ UPD(0x0C053BFEu, 3); goto L_0C053BFE; }  /* 0C053DF6 bra */
L_0C053E00: BLKS(0x0C053E00u);
	r2 = 0xC054140u; UPD(0x0C053E02u, 1);  /* 0C053E00 mov.l @(disp,pc),Rn */
	IF(0x0C053E02u); { u32 t_ = r2; PR = 0x0C053E06u; IF(0x0C053E04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053E06u); }  /* 0C053E02 jsr @Rn */
L_0C053E06: BLKS(0x0C053E06u);
	{ IF(0x0C053E08u); ; /* slot nop */ UPD(0x0C053BEEu, 3); goto L_0C053BEE; }  /* 0C053E06 bra */
L_0C053E10: BLKS(0x0C053E10u);
	r0 = 0xC054140u; UPD(0x0C053E12u, 1);  /* 0C053E10 mov.l @(disp,pc),Rn */
	IF(0x0C053E12u); { u32 t_ = r0; PR = 0x0C053E16u; IF(0x0C053E14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C054140, 0x0C054140u, 0x0C053E16u); }  /* 0C053E12 jsr @Rn */
L_0C053E16: BLKS(0x0C053E16u);
	{ IF(0x0C053E18u); ; /* slot nop */ UPD(0x0C053BE0u, 3); goto L_0C053BE0; }  /* 0C053E16 bra */
}

/* FUN_0c053e90 */
void f_0C053E90(sh3_t *c)
{
	LOCALS;
L_0C053E90: BLKS(0x0C053E90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C053E92u, 1);  /* 0C053E90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C053E94u, 1);  /* 0C053E92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C053E96u, 1);  /* 0C053E94 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C053E96 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C053E9Au, 2);  /* 0C053E98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C053E9Cu, 1);  /* 0C053E9A mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C053E9C mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C053EA0u, 2);  /* 0C053E9E mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C053EA0 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C053EA4u, 2);  /* 0C053EA2 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C053EA4 mov #imm,Rn */
	r10 = 0xC160F68u; UPD(0x0C053EA8u, 2);  /* 0C053EA6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C053EA8 mov Rm,Rn */
	IF(0x0C053EAAu); ;  /* 0C053EAA nop */
	UPD(0x0C053EACu, 2);
L_0C053EAC: BLKS(0x0C053EACu);
	r0 = 0xAu;  /* 0C053EAC mov #imm,Rn */
	IF(0x0C053EAEu); MACL = r13 * r0;  /* 0C053EAE mul.l Rm,Rn */
	r5 = 0xC2859A8u; UPD(0x0C053EB2u, 4);  /* 0C053EB0 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C053EB2 mov #imm,Rn */
	r0 = 0xC26C8D8u; UPD(0x0C053EB6u, 2);  /* 0C053EB4 mov.l @(disp,pc),Rn */
	IF(0x0C053EB6u); r6 = MACL;  /* 0C053EB6 sts macl,Rn */
	r6 += r0;  /* 0C053EB8 add Rm,Rn */
	r5 += r11;  /* 0C053EBA add Rm,Rn */
	UPD(0x0C053EBCu, 3);
L_0C053EBC: BLKS(0x0C053EBCu);
	r6 += 0x40u;  /* 0C053EBC add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r7 = v_; } UPD(0x0C053EC0u, 2);  /* 0C053EBE mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C053EC2u, 1);  /* 0C053EC0 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C053EC4u, 1);  /* 0C053EC2 mov.b @Rm+,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C053EC6u, 1);  /* 0C053EC4 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C053EC6 extu.b Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C053EC8 extu.b Rm,Rn */
	r4 = 0x18u;  /* 0C053ECA mov #imm,Rn */
	IF(0x0C053ECCu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C053ECC shld Rm,Rn */
	r4 = r1 & 0xFF;  /* 0C053ECE extu.b Rm,Rn */
	IF(0x0C053ED0u); r4 <<= 16;  /* 0C053ED0 shll16 Rn */
	r7 |= r4;  /* 0C053ED2 or Rm,Rn */
	IF(0x0C053ED4u); r2 <<= 8;  /* 0C053ED4 shll8 Rn */
	r7 |= r2;  /* 0C053ED6 or Rm,Rn */
	r7 |= r0;  /* 0C053ED8 or Rm,Rn */
	W32(r5, r7); UPD(0x0C053EDCu, 11);  /* 0C053EDA mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C053EDC add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C053EE0u, 2);  /* 0C053EDE mov.b @Rm,Rn */
	r0 = r4;  /* 0C053EE0 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C053EE2 and #imm,r0 */
	IF(0x0C053EE4u); r0 <<= 2;  /* 0C053EE4 shll2 Rn */
	IF(0x0C053EE6u); r3 = R32(r0 + r10); UPD(0x0C053EE8u, 4);  /* 0C053EE6 mov.l @(r0,Rm),Rn */
	r6 += 0xFFFFFFFDu;  /* 0C053EE8 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C053EECu, 2);  /* 0C053EEA mov.b @Rm+,Rn */
	r2 = r0 & 0xFF;  /* 0C053EEC extu.b Rm,Rn */
	r2 += r3;  /* 0C053EEE add Rm,Rn */
	W32(r5 + 0x8u, r2); UPD(0x0C053EF2u, 3);  /* 0C053EF0 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C053EF4u, 1);  /* 0C053EF2 mov.b @Rm+,Rn */
	r2 = r0 & 0xFF;  /* 0C053EF4 extu.b Rm,Rn */
	r2 += r3;  /* 0C053EF6 add Rm,Rn */
	W32(r5 + 0xCu, r2); UPD(0x0C053EFAu, 3);  /* 0C053EF8 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C053EFCu, 1);  /* 0C053EFA mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C053EFC extu.b Rm,Rn */
	r3 += r2;  /* 0C053EFE add Rm,Rn */
	W32(r5 + 0x10u, r3); UPD(0x0C053F02u, 3);  /* 0C053F00 mov.l Rm,@(disp,Rn) */
	r2 = r5;  /* 0C053F02 mov Rm,Rn */
	r3 = 0x0u;  /* 0C053F04 mov #imm,Rn */
	W32(r5 + 0x14u, r3); UPD(0x0C053F08u, 3);  /* 0C053F06 mov.l Rm,@(disp,Rn) */
	r6 += 0x2u;  /* 0C053F08 add #imm,Rn */
	r5 += 0x19u;  /* 0C053F0A add #imm,Rn */
	W8(r5, r4); UPD(0x0C053F0Eu, 3);  /* 0C053F0C mov.b Rm,@Rn */
	r2 += 0x18u;  /* 0C053F0E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C053F12u, 2);  /* 0C053F10 mov.b @Rm+,Rn */
	r5 += 0xFFFFFFE7u;  /* 0C053F12 add #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C053F14 extu.b Rm,Rn */
	W32(r5 + 0x4u, r3); UPD(0x0C053F18u, 3);  /* 0C053F16 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C053F1Au, 1);  /* 0C053F18 mov.b @Rm,Rn */
	W8(r2, r0); UPD(0x0C053F1Cu, 1);  /* 0C053F1A mov.b Rm,@Rn */
	r2 = 0x3B9AC9FFu; UPD(0x0C053F1Eu, 1);  /* 0C053F1C mov.l @(disp,pc),Rn */
	T = r7 > r2;  /* 0C053F1E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 += 0xFFFFFFB7u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C053F26u, 4); goto L_0C053F26; } goto L_0C053F24; }  /* 0C053F20 bf/s */
L_0C053F24: BLKS(0x0C053F24u);
	r9 = 0x1u;  /* 0C053F24 mov #imm,Rn */
	UPD(0x0C053F26u, 2);
L_0C053F26: BLKS(0x0C053F26u);
	r7 = 0x8u;  /* 0C053F26 mov #imm,Rn */
	T = r3 > r7;  /* 0C053F28 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053F2Eu, 5); goto L_0C053F2E; }  /* 0C053F2A bf */
L_0C053F2C: BLKS(0x0C053F2Cu);
	r9 = 0x1u;  /* 0C053F2C mov #imm,Rn */
	UPD(0x0C053F2Eu, 1);
L_0C053F2E: BLKS(0x0C053F2Eu);
	r1 = r4 & 0xFF;  /* 0C053F2E extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C053F30 mov #imm,Rn */
	T = r1 > r4;  /* 0C053F32 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053F38u, 6); goto L_0C053F38; }  /* 0C053F34 bf */
L_0C053F36: BLKS(0x0C053F36u);
	r9 = 0x1u;  /* 0C053F36 mov #imm,Rn */
	UPD(0x0C053F38u, 1);
L_0C053F38: BLKS(0x0C053F38u);
	r3 = r0 & 0xFF;  /* 0C053F38 extu.b Rm,Rn */
	r0 = 0x1u;  /* 0C053F3A mov #imm,Rn */
	T = r3 > r0;  /* 0C053F3C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C053F42u, 6); goto L_0C053F42; }  /* 0C053F3E bf */
L_0C053F40: BLKS(0x0C053F40u);
	r9 = 0x1u;  /* 0C053F40 mov #imm,Rn */
	UPD(0x0C053F42u, 1);
L_0C053F42: BLKS(0x0C053F42u);
	r7 = r8;  /* 0C053F42 mov Rm,Rn */
	r7 += 0x1u;  /* 0C053F44 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C053F46 exts.w Rm,Rn */
	r2 = 0x9u;  /* 0C053F48 mov #imm,Rn */
	r5 += 0x1Cu;  /* 0C053F4A add #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C053F4C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0xAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C053EBCu, 9); goto L_0C053EBC; } goto L_0C053F52; }  /* 0C053F4E bf/s */
L_0C053F52: BLKS(0x0C053F52u);
	r6 = r12;  /* 0C053F52 mov Rm,Rn */
	r6 += 0x1u;  /* 0C053F54 add #imm,Rn */
	r8 = 0x16Cu; UPD(0x0C053F58u, 4);  /* 0C053F56 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C053F58 exts.w Rm,Rn */
	r5 = 0x3u;  /* 0C053F5A mov #imm,Rn */
	r13 += 0xAu;  /* 0C053F5C add #imm,Rn */
	T = (s32)r12 > (s32)r5;  /* 0C053F5E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C053EACu, 7); goto L_0C053EAC; } goto L_0C053F64; }  /* 0C053F60 bf/s */
L_0C053F64: BLKS(0x0C053F64u);
	r5 = 0xC26CAA8u; UPD(0x0C053F66u, 2);  /* 0C053F64 mov.l @(disp,pc),Rn */
	r10 = 0xC392D54u; UPD(0x0C053F68u, 1);  /* 0C053F66 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C053F6Au, 1);  /* 0C053F68 mov.b @Rm,Rn */
	r13 = r10;  /* 0C053F6A mov Rm,Rn */
	r2 = 0xC26CAA9u; UPD(0x0C053F6Eu, 2);  /* 0C053F6C mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C053F6E add #imm,Rn */
	W8(r10, r7); UPD(0x0C053F72u, 2);  /* 0C053F70 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C053F74u, 1);  /* 0C053F72 mov.b @Rm,Rn */
	r10 += 0x3u;  /* 0C053F74 add #imm,Rn */
	r0 = 0xC26CAAAu; UPD(0x0C053F78u, 2);  /* 0C053F76 mov.l @(disp,pc),Rn */
	W8(r13, r3); UPD(0x0C053F7Au, 1);  /* 0C053F78 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C053F7Cu, 1);  /* 0C053F7A mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C053F7C add #imm,Rn */
	r12 = 0xC26CAABu; UPD(0x0C053F80u, 2);  /* 0C053F7E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C053F80 mov Rm,Rn */
	W8(r13, r4); UPD(0x0C053F84u, 2);  /* 0C053F82 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C053F86u, 1);  /* 0C053F84 mov.b @Rm,Rn */
	W8(r10, r11); UPD(0x0C053F88u, 1);  /* 0C053F86 mov.b Rm,@Rn */
	r15 = r14;  /* 0C053F88 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C053F8Cu, 2);  /* 0C053F8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C053F8Eu, 1);  /* 0C053F8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C053F90u, 1);  /* 0C053F8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C053F92u, 1);  /* 0C053F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C053F94u, 1);  /* 0C053F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C053F96u, 1);  /* 0C053F94 mov.l @Rm+,Rn */
	IF(0x0C053F96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C053F96 rts */
}

/* FUN_0c053fc0 */
void f_0C053FC0(sh3_t *c)
{
	LOCALS;
L_0C053FC0: BLKS(0x0C053FC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C053FC2u, 1);  /* 0C053FC0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C053FC2 mov #imm,Rn */
	r0 = 0xC392DC2u; UPD(0x0C053FC6u, 2);  /* 0C053FC4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C053FC8u, 1);  /* 0C053FC6 mov.b @Rm,Rn */
	r3 = 0xC160F78u; UPD(0x0C053FCAu, 1);  /* 0C053FC8 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C053FCA extu.b Rm,Rn */
	IF(0x0C053FCCu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C053FCEu, 2);  /* 0C053FCC mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C053FCE cmp/eq #imm,r0 */
	r3 = 0xC286508u; UPD(0x0C053FD2u, 2);  /* 0C053FD0 mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C053FD4u, 1);  /* 0C053FD2 mov.b Rm,@Rn */
	r7 = 0xC392D6Cu; UPD(0x0C053FD6u, 1);  /* 0C053FD4 mov.l @(disp,pc),Rn */
	r2 = 0xC160F7Cu; UPD(0x0C053FD8u, 1);  /* 0C053FD6 mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C053FDAu, 1);  /* 0C053FD8 mov.b Rm,@Rn */
	IF(0x0C053FDAu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C053FDCu, 1);  /* 0C053FDA mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C053FDC add #imm,Rn */
	r6 = 0xC2852E4u; UPD(0x0C053FE0u, 2);  /* 0C053FDE mov.l @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C053FE2u, 1);  /* 0C053FE0 mov.b Rm,@Rn */
	r2 = 0xC160F80u; UPD(0x0C053FE4u, 1);  /* 0C053FE2 mov.l @(disp,pc),Rn */
	W8(r6, r5); UPD(0x0C053FE6u, 1);  /* 0C053FE4 mov.b Rm,@Rn */
	IF(0x0C053FE6u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C053FE8u, 1);  /* 0C053FE6 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C053FE8 add #imm,Rn */
	W8(r6, r7); UPD(0x0C053FECu, 2);  /* 0C053FEA mov.b Rm,@Rn */
	r4 = 0xC27DC48u; UPD(0x0C053FEEu, 1);  /* 0C053FEC mov.l @(disp,pc),Rn */
	r6 = 0xC160F84u; UPD(0x0C053FF0u, 1);  /* 0C053FEE mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C053FF2u, 1);  /* 0C053FF0 mov.b Rm,@Rn */
	IF(0x0C053FF2u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C053FF4u, 1);  /* 0C053FF2 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C053FF4 add #imm,Rn */
	W8(r4, r3); UPD(0x0C053FF8u, 2);  /* 0C053FF6 mov.b Rm,@Rn */
	IF(0x0C053FF8u); r0 = T;  /* 0C053FF8 movt Rn */
	r3 = 0xC392AE4u; UPD(0x0C053FFCu, 2);  /* 0C053FFA mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C053FFEu, 1);  /* 0C053FFC mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C053FFE tst Rm,Rn */
	IF(0x0C054000u); r2 = T;  /* 0C054000 movt Rn */
	r0 &= r2;  /* 0C054002 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C054004 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054060u, 7); goto L_0C054060; } goto L_0C05400A; }  /* 0C054006 bt/s */
L_0C05400A: BLKS(0x0C05400Au);
	r2 = r3;  /* 0C05400A mov Rm,Rn */
	r2 += 0x1u;  /* 0C05400C add #imm,Rn */
	W8(r2, r5); UPD(0x0C054010u, 4);  /* 0C05400E mov.b Rm,@Rn */
L_0C054010: BLKS(0x0C054010u);
	r6 = 0xC26C879u; UPD(0x0C054012u, 1);  /* 0C054010 mov.l @(disp,pc),Rn */
	r3 = r7 & 0xFF;  /* 0C054012 extu.b Rm,Rn */
	r4 = 0xC220C51u; UPD(0x0C054016u, 2);  /* 0C054014 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C054016 tst Rm,Rn */
	W8(r6, r5); UPD(0x0C05401Au, 2);  /* 0C054018 mov.b Rm,@Rn */
	W8(r4, r5); UPD(0x0C05401Cu, 1);  /* 0C05401A mov.b Rm,@Rn */
	{ u32 v_ = r5; r6 -= 1; W8(r6, v_); } UPD(0x0C05401Eu, 1);  /* 0C05401C mov.b Rm,@-Rn */
	{ u32 c_ = !T; { u32 v_ = r5; r4 -= 1; W8(r4, v_); } /* slot mov.b Rm,@-Rn */ if (c_) { UPD(0x0C054026u, 3); goto L_0C054026; } UPD(0x0C054022u, 1); goto L_0C054022; }  /* 0C05401E bf/s */
L_0C054022: BLKS(0x0C054022u);
	r5 = 0xC393028u; UPD(0x0C054024u, 1);  /* 0C054022 mov.l @(disp,pc),Rn */
	W8(r5, r3); UPD(0x0C054026u, 1);  /* 0C054024 mov.b Rm,@Rn */
L_0C054026: BLKS(0x0C054026u);
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C054028u, 1);  /* 0C054026 mov.b @Rm,Rn */
	r2 = r7 & 0xFF;  /* 0C054028 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05402A tst Rm,Rn */
	if (!T) { UPD(0x0C054032u, 5); goto L_0C054032; }  /* 0C05402C bf */
L_0C05402E: BLKS(0x0C05402Eu);
	r3 = 0xC393029u; UPD(0x0C054030u, 1);  /* 0C05402E mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C054032u, 1);  /* 0C054030 mov.b Rm,@Rn */
L_0C054032: BLKS(0x0C054032u);
	r0 = 0xC21F588u; UPD(0x0C054034u, 1);  /* 0C054032 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C054036u, 1);  /* 0C054034 mov.b @Rm,Rn */
	r7 = 0xC160694u; UPD(0x0C054038u, 1);  /* 0C054036 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C054038 extu.b Rm,Rn */
	IF(0x0C05403Au); r0 <<= 2;  /* 0C05403A shll2 Rn */
	r6 = 0xC1606E0u; UPD(0x0C05403Eu, 3);  /* 0C05403C mov.l @(disp,pc),Rn */
	IF(0x0C05403Eu); r2 = R32(r0 + r7); UPD(0x0C054040u, 1);  /* 0C05403E mov.l @(r0,Rm),Rn */
	r5 = 0xC392AE8u; UPD(0x0C054042u, 1);  /* 0C054040 mov.l @(disp,pc),Rn */
	IF(0x0C054042u); r4 = R32(r0 + r6); UPD(0x0C054044u, 1);  /* 0C054042 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C054044 tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05404Cu, 4); goto L_0C05404C; } UPD(0x0C05404Au, 1); goto L_0C05404A; }  /* 0C054046 bf/s */
L_0C05404A: BLKS(0x0C05404Au);
	r2 = 0x3B9ACA00u; UPD(0x0C05404Cu, 1);  /* 0C05404A mov.l @(disp,pc),Rn */
L_0C05404C: BLKS(0x0C05404Cu);
	r3 = 0xC286514u; UPD(0x0C05404Eu, 1);  /* 0C05404C mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C054050u, 1);  /* 0C05404E mov.l Rm,@Rn */
	r15 = r14;  /* 0C054050 mov Rm,Rn */
	IF(0x0C054052u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C054052 rts */
L_0C054060: BLKS(0x0C054060u);
	r2 = r3;  /* 0C054060 mov Rm,Rn */
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C054010u, 4); goto L_0C054010; }  /* 0C054062 bra */
}

/* FUN_0c0540c0 */
void f_0C0540C0(sh3_t *c)
{
	LOCALS;
L_0C0540C0: BLKS(0x0C0540C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0540C2u, 1);  /* 0C0540C0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0540C2 mov #imm,Rn */
	r0 = 0xC21F598u; UPD(0x0C0540C6u, 2);  /* 0C0540C4 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C0540C6 mov #imm,Rn */
	W8(r0, r7); UPD(0x0C0540CAu, 2);  /* 0C0540C8 mov.b Rm,@Rn */
	r3 = 0xAu;  /* 0C0540CA mov #imm,Rn */
	r0 += 0xFFFFFFF4u;  /* 0C0540CC add #imm,Rn */
	r0 += 0x3u;  /* 0C0540CE add #imm,Rn */
	W8(r0, r6); UPD(0x0C0540D2u, 4);  /* 0C0540D0 mov.b Rm,@Rn */
	r1 = 0x2u;  /* 0C0540D2 mov #imm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0540D4 add #imm,Rn */
	W8(r0, r6); UPD(0x0C0540D8u, 3);  /* 0C0540D6 mov.b Rm,@Rn */
	r4 = r0;  /* 0C0540D8 mov Rm,Rn */
	r0 += 0x4u;  /* 0C0540DA add #imm,Rn */
	W8(r0, r6); UPD(0x0C0540DEu, 3);  /* 0C0540DC mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C0540DE add #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0540E0 add #imm,Rn */
	r0 += 0x5u;  /* 0C0540E2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C0540E6u, 4);  /* 0C0540E4 mov.b Rm,@Rn */
	r5 = 0x10u;  /* 0C0540E6 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0540E8 add #imm,Rn */
	W8(r0, r3); UPD(0x0C0540ECu, 3);  /* 0C0540EA mov.b Rm,@Rn */
	r14 = r15;  /* 0C0540EC mov Rm,Rn */
	W8(r4, r6); UPD(0x0C0540F0u, 2);  /* 0C0540EE mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0540F0 add #imm,Rn */
	r4 += 0x1u;  /* 0C0540F2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C0540F6u, 3);  /* 0C0540F4 mov.b Rm,@Rn */
	r3 = 0x1Fu;  /* 0C0540F6 mov #imm,Rn */
	W8(r4, r6); UPD(0x0C0540FAu, 2);  /* 0C0540F8 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0540FA add #imm,Rn */
	r4 = 0x3u;  /* 0C0540FC mov #imm,Rn */
	W8(r0, r4); UPD(0x0C054100u, 3);  /* 0C0540FE mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054100 add #imm,Rn */
	W8(r0, r4); UPD(0x0C054104u, 2);  /* 0C054102 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054104 add #imm,Rn */
	W8(r0, r6); UPD(0x0C054108u, 2);  /* 0C054106 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054108 add #imm,Rn */
	W8(r0, r1); UPD(0x0C05410Cu, 2);  /* 0C05410A mov.b Rm,@Rn */
	r0 += 0x2u;  /* 0C05410C add #imm,Rn */
	W8(r0, r6); UPD(0x0C054110u, 2);  /* 0C05410E mov.b Rm,@Rn */
	r1 = 0xFu;  /* 0C054110 mov #imm,Rn */
	r0 += 0x1u;  /* 0C054112 add #imm,Rn */
	W8(r0, r6); UPD(0x0C054116u, 3);  /* 0C054114 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054116 add #imm,Rn */
	W8(r0, r7); UPD(0x0C05411Au, 2);  /* 0C054118 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C05411A add #imm,Rn */
	W8(r0, r5); UPD(0x0C05411Eu, 2);  /* 0C05411C mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C05411E add #imm,Rn */
	W8(r0, r4); UPD(0x0C054122u, 2);  /* 0C054120 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054122 add #imm,Rn */
	W8(r0, r3); UPD(0x0C054126u, 2);  /* 0C054124 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C054126 add #imm,Rn */
	W8(r0, r1); UPD(0x0C05412Au, 2);  /* 0C054128 mov.b Rm,@Rn */
	r15 = r14;  /* 0C05412A mov Rm,Rn */
	IF(0x0C05412Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05412C rts */
}

/* FUN_0c054140 */
void f_0C054140(sh3_t *c)
{
	LOCALS;
L_0C054140: BLKS(0x0C054140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054142u, 1);  /* 0C054140 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C054142 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054146u, 2);  /* 0C054144 mov.l Rm,@-Rn */
	r6 = 0x1Fu;  /* 0C054146 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05414Au, 2);  /* 0C054148 mov.l Rm,@-Rn */
	r7 = 0xC1604D0u; UPD(0x0C05414Cu, 1);  /* 0C05414A mov.l @(disp,pc),Rn */
	IF(0x0C05414Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05414Eu, 1);  /* 0C05414C sts.l pr,@-Rn */
	r2 = 0xC21CCC0u; UPD(0x0C054150u, 1);  /* 0C05414E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C054150 mov Rm,Rn */
	IF(0x0C054152u); ;  /* 0C054152 nop */
	UPD(0x0C054154u, 2);
L_0C054154: BLKS(0x0C054154u);
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r0 = v_; } UPD(0x0C054156u, 1);  /* 0C054154 mov.b @Rm+,Rn */
	W8(r2, r0); UPD(0x0C054158u, 1);  /* 0C054156 mov.b Rm,@Rn */
	r0 = r3;  /* 0C054158 mov Rm,Rn */
	r0 += 0x1u;  /* 0C05415A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C05415C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C05415E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C054154u, 7); goto L_0C054154; } goto L_0C054164; }  /* 0C054160 bf/s */
L_0C054164: BLKS(0x0C054164u);
	r2 = 0xC0540C0u; UPD(0x0C054166u, 2);  /* 0C054164 mov.l @(disp,pc),Rn */
	IF(0x0C054166u); { u32 t_ = r2; PR = 0x0C05416Au; IF(0x0C054168u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0540C0, 0x0C0540C0u, 0x0C05416Au); }  /* 0C054166 jsr @Rn */
L_0C05416A: BLKS(0x0C05416Au);
	r7 = 0xC21CCA0u; UPD(0x0C05416Cu, 1);  /* 0C05416A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C05416C mov #imm,Rn */
	r3 = 0xC21F58Cu; UPD(0x0C054170u, 2);  /* 0C05416E mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C054170 mov #imm,Rn */
	IF(0x0C054172u); ;  /* 0C054172 nop */
	UPD(0x0C054174u, 2);
L_0C054174: BLKS(0x0C054174u);
	IF(0x0C054174u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C054176u, 1);  /* 0C054174 mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C054176 mov Rm,Rn */
	IF(0x0C054178u); W8(r0 + r7, r5); UPD(0x0C05417Au, 2);  /* 0C054178 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C05417A add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C05417C exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05417E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C054174u, 6); goto L_0C054174; }  /* 0C054180 bf */
L_0C054182: BLKS(0x0C054182u);
	r0 = 0x10u;  /* 0C054182 mov #imm,Rn */
	r7 = 0xC21CCA0u; UPD(0x0C054186u, 2);  /* 0C054184 mov.l @(disp,pc),Rn */
	r3 = 0xC21F58Cu; UPD(0x0C054188u, 1);  /* 0C054186 mov.l @(disp,pc),Rn */
	r2 = 0x1Fu;  /* 0C054188 mov #imm,Rn */
	IF(0x0C05418Au); ;  /* 0C05418A nop */
	UPD(0x0C05418Cu, 2);
L_0C05418C: BLKS(0x0C05418Cu);
	IF(0x0C05418Cu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05418Eu, 1);  /* 0C05418C mov.b @(r0,Rm),Rn */
	r6 = r0;  /* 0C05418E mov Rm,Rn */
	IF(0x0C054190u); W8(r0 + r7, r8); UPD(0x0C054192u, 2);  /* 0C054190 mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C054192 add #imm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C054194 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C054196 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05418Cu, 6); goto L_0C05418C; } goto L_0C05419C; }  /* 0C054198 bf/s */
L_0C05419C: BLKS(0x0C05419Cu);
	r9 = 0xC04C23Cu; UPD(0x0C05419Eu, 2);  /* 0C05419C mov.l @(disp,pc),Rn */
	r8 = 0xC21CCA0u; UPD(0x0C0541A0u, 1);  /* 0C05419E mov.l @(disp,pc),Rn */
	r6 = 0x40u;  /* 0C0541A0 mov #imm,Rn */
	IF(0x0C0541A2u); { u32 t_ = r9; PR = 0x0C0541A6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C0541A6u); }  /* 0C0541A2 jsr @Rn */
L_0C0541A6: BLKS(0x0C0541A6u);
	r2 = r8;  /* 0C0541A6 mov Rm,Rn */
	r2 += 0xCu;  /* 0C0541A8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0541ACu, 3);  /* 0C0541AA mov.b @Rm,Rn */
	r5 = r8;  /* 0C0541AC mov Rm,Rn */
	r6 = 0xC392DC2u; UPD(0x0C0541B0u, 2);  /* 0C0541AE mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0541B0 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0541B4u, 2);  /* 0C0541B2 mov.b @Rm+,Rn */
	r7 += 0x2u;  /* 0C0541B4 add #imm,Rn */
	W8(r6, r0); UPD(0x0C0541B8u, 2);  /* 0C0541B6 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0541BAu, 1);  /* 0C0541B8 mov.b @Rm,Rn */
	r6 = 0xC286750u; UPD(0x0C0541BCu, 1);  /* 0C0541BA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0541BC mov Rm,Rn */
	W8(r6, r4); UPD(0x0C0541C0u, 2);  /* 0C0541BE mov.b Rm,@Rn */
	r5 += 0x3u;  /* 0C0541C0 add #imm,Rn */
	r0 = 0xC392AE4u; UPD(0x0C0541C4u, 2);  /* 0C0541C2 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0541C4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C0541C8u, 2);  /* 0C0541C6 mov.b @Rm,Rn */
	r4 = 0xC393028u; UPD(0x0C0541CAu, 1);  /* 0C0541C8 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0541CA mov Rm,Rn */
	W8(r0, r1); UPD(0x0C0541CEu, 2);  /* 0C0541CC mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C0541CE add #imm,Rn */
	W8(r4, r3); UPD(0x0C0541D2u, 2);  /* 0C0541D0 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0541D2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0541D6u, 2);  /* 0C0541D4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0541D6 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C0541DAu, 2);  /* 0C0541D8 mov.b @Rm,Rn */
	r5 = r8;  /* 0C0541DA mov Rm,Rn */
	W8(r0, r2); UPD(0x0C0541DEu, 2);  /* 0C0541DC mov.b Rm,@Rn */
	r5 += 0x5u;  /* 0C0541DE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0541E2u, 2);  /* 0C0541E0 mov.b @Rm,Rn */
	r0 = r8;  /* 0C0541E2 mov Rm,Rn */
	W8(r6, r3); UPD(0x0C0541E6u, 2);  /* 0C0541E4 mov.b Rm,@Rn */
	r0 += 0x6u;  /* 0C0541E6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C0541EAu, 2);  /* 0C0541E8 mov.b @Rm,Rn */
	r6 = r8;  /* 0C0541EA mov Rm,Rn */
	W8(r4, r2); UPD(0x0C0541EEu, 2);  /* 0C0541EC mov.b Rm,@Rn */
	r6 += 0x7u;  /* 0C0541EE add #imm,Rn */
	r3 = 0xC395086u; UPD(0x0C0541F2u, 2);  /* 0C0541F0 mov.l @(disp,pc),Rn */
	r2 = r8;  /* 0C0541F2 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0541F6u, 2);  /* 0C0541F4 mov.b @Rm,Rn */
	r2 += 0x8u;  /* 0C0541F6 add #imm,Rn */
	W8(r3, r7); UPD(0x0C0541FAu, 2);  /* 0C0541F8 mov.b Rm,@Rn */
	r4 = 0xC26C8C4u; UPD(0x0C0541FCu, 1);  /* 0C0541FA mov.l @(disp,pc),Rn */
	r3 = r8;  /* 0C0541FC mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C054200u, 2);  /* 0C0541FE mov.b @Rm,Rn */
	r3 += 0x9u;  /* 0C054200 add #imm,Rn */
	W8(r4, r5); UPD(0x0C054204u, 2);  /* 0C054202 mov.b Rm,@Rn */
	r2 = r8;  /* 0C054204 mov Rm,Rn */
	r7 = 0xC21F5E0u; UPD(0x0C054208u, 2);  /* 0C054206 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C054208 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C05420Cu, 2);  /* 0C05420A mov.b @Rm,Rn */
	r4 += 0xAu;  /* 0C05420C add #imm,Rn */
	W8(r7, r0); UPD(0x0C054210u, 2);  /* 0C05420E mov.b Rm,@Rn */
	r2 += 0xBu;  /* 0C054210 add #imm,Rn */
	r5 = 0xC22466Cu; UPD(0x0C054214u, 2);  /* 0C054212 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C054216u, 1);  /* 0C054214 mov.b @Rm,Rn */
	W8(r5, r6); UPD(0x0C054218u, 1);  /* 0C054216 mov.b Rm,@Rn */
	r7 = 0xC21F588u; UPD(0x0C05421Au, 1);  /* 0C054218 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C05421A mov Rm,Rn */
	W8(r7, r0); UPD(0x0C05421Eu, 2);  /* 0C05421C mov.b Rm,@Rn */
	r5 += 0xFu;  /* 0C05421E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C054222u, 2);  /* 0C054220 mov.b @Rm,Rn */
	r7 = r8;  /* 0C054222 mov Rm,Rn */
	r6 = 0xC220C53u; UPD(0x0C054226u, 2);  /* 0C054224 mov.l @(disp,pc),Rn */
	r7 += 0xDu;  /* 0C054226 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05422Au, 2);  /* 0C054228 mov.b @Rm,Rn */
	r2 = r8;  /* 0C05422A mov Rm,Rn */
	r0 = 0xC286276u; UPD(0x0C05422Eu, 2);  /* 0C05422C mov.l @(disp,pc),Rn */
	r2 += 0xEu;  /* 0C05422E add #imm,Rn */
	W8(r6, r3); UPD(0x0C054232u, 2);  /* 0C054230 mov.b Rm,@Rn */
	W8(r0, r4); UPD(0x0C054234u, 1);  /* 0C054232 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C054236u, 1);  /* 0C054234 mov.b @Rm,Rn */
	r0 = r8;  /* 0C054236 mov Rm,Rn */
	r6 = 0xC392D50u; UPD(0x0C05423Au, 2);  /* 0C054238 mov.l @(disp,pc),Rn */
	r0 += 0x10u;  /* 0C05423A add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C05423Eu, 2);  /* 0C05423C mov.b @Rm,Rn */
	W8(r6, r3); UPD(0x0C054240u, 1);  /* 0C05423E mov.b Rm,@Rn */
	r4 = 0xC392E24u; UPD(0x0C054242u, 1);  /* 0C054240 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C054244u, 1);  /* 0C054242 mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C054246u, 1);  /* 0C054244 mov.b Rm,@Rn */
	r3 = r7 & 0xFF;  /* 0C054246 extu.b Rm,Rn */
	r6 = 0xC21F898u; UPD(0x0C05424Au, 2);  /* 0C054248 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C05424A mov Rm,Rn */
	W32(r6, r3); UPD(0x0C05424Eu, 2);  /* 0C05424C mov.l Rm,@Rn */
	r5 += 0x11u;  /* 0C05424E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C054252u, 2);  /* 0C054250 mov.b @Rm,Rn */
	r7 = r8;  /* 0C054252 mov Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C054254 extu.b Rm,Rn */
	r0 = 0xC2175E4u; UPD(0x0C054258u, 3);  /* 0C054256 mov.l @(disp,pc),Rn */
	r8 += 0x13u;  /* 0C054258 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C05425Cu, 2);  /* 0C05425A mov.b @Rm,Rn */
	r7 += 0x12u;  /* 0C05425C add #imm,Rn */
	W32(r0, r2); UPD(0x0C054260u, 2);  /* 0C05425E mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C054262u, 1);  /* 0C054260 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C054262 extu.b Rm,Rn */
	r8 = 0xC05A640u; UPD(0x0C054266u, 2);  /* 0C054264 mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C054266 extu.b Rm,Rn */
	r5 = 0xC21E100u; UPD(0x0C05426Au, 2);  /* 0C054268 mov.l @(disp,pc),Rn */
	r0 = 0xC26CAD8u; UPD(0x0C05426Cu, 1);  /* 0C05426A mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05426Eu, 1);  /* 0C05426C mov.l Rm,@Rn */
	IF(0x0C05426Eu); { u32 t_ = r8; PR = 0x0C054272u; W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C054272u); }  /* 0C05426E jsr @Rn */
L_0C054272: BLKS(0x0C054272u);
	r7 = 0xC055B90u; UPD(0x0C054274u, 1);  /* 0C054272 mov.l @(disp,pc),Rn */
	IF(0x0C054274u); { u32 t_ = r7; PR = 0x0C054278u; IF(0x0C054276u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055B90, 0x0C055B90u, 0x0C054278u); }  /* 0C054274 jsr @Rn */
L_0C054278: BLKS(0x0C054278u);
	r4 = 0xC26C918u; UPD(0x0C05427Au, 1);  /* 0C054278 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C05427A mov #imm,Rn */
	r6 = 0x194u; UPD(0x0C05427Eu, 2);  /* 0C05427C mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C05427E mov Rm,Rn */
	r15 = r14;  /* 0C054280 mov Rm,Rn */
	IF(0x0C054282u); PR = R32(r15); r15 += 4; UPD(0x0C054284u, 3);  /* 0C054282 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054286u, 1);  /* 0C054284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054288u, 1);  /* 0C054286 mov.l @Rm+,Rn */
	IF(0x0C054288u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04C23Cu: TAIL(f_0C04C23C); default: JUMPD(tv_); } }  /* 0C054288 jmp @Rn */
}

/* FUN_0c054300 */
void f_0C054300(sh3_t *c)
{
	LOCALS;
L_0C054300: BLKS(0x0C054300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054302u, 1);  /* 0C054300 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054304u, 1);  /* 0C054302 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C054304 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054308u, 2);  /* 0C054306 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C054308 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05430Cu, 2);  /* 0C05430A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C05430C mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054310u, 2);  /* 0C05430E mov.l Rm,@-Rn */
	r6 = r8;  /* 0C054310 mov Rm,Rn */
	IF(0x0C054312u); r15 -= 4; W32(r15, PR); UPD(0x0C054314u, 2);  /* 0C054312 sts.l pr,@-Rn */
	r8 += 0xBu;  /* 0C054314 add #imm,Rn */
	r0 = 0xC392DC2u; UPD(0x0C054318u, 2);  /* 0C054316 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C054318 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C05431Cu, 2);  /* 0C05431A mov.b @Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C05431Eu, 1);  /* 0C05431C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C05431E extu.b Rm,Rn */
	r2 = 0xC160FD4u; UPD(0x0C054322u, 2);  /* 0C054320 mov.l @(disp,pc),Rn */
	IF(0x0C054322u); r0 <<= 2;  /* 0C054322 shll2 Rn */
	r7 = 0x80808000u; UPD(0x0C054326u, 2);  /* 0C054324 mov.l @(disp,pc),Rn */
	r4 = 0xC160F88u; UPD(0x0C054328u, 1);  /* 0C054326 mov.l @(disp,pc),Rn */
	IF(0x0C054328u); { u32 t_ = r10; PR = 0x0C05432Cu; IF(0x0C05432Au); r11 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05432Cu); }  /* 0C054328 jsr @Rn */
L_0C05432C: BLKS(0x0C05432Cu);
	r7 = 0x40C04000u; UPD(0x0C05432Eu, 1);  /* 0C05432C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C05432E mov Rm,Rn */
	r5 = r9;  /* 0C054330 mov Rm,Rn */
	r6 = r8;  /* 0C054332 mov Rm,Rn */
	r0 = r10;  /* 0C054334 mov Rm,Rn */
	r15 = r14;  /* 0C054336 mov Rm,Rn */
	IF(0x0C054338u); PR = R32(r15); r15 += 4; UPD(0x0C05433Au, 6);  /* 0C054338 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05433Cu, 1);  /* 0C05433A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05433Eu, 1);  /* 0C05433C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054340u, 1);  /* 0C05433E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054342u, 1);  /* 0C054340 mov.l @Rm+,Rn */
	IF(0x0C054342u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C054342 jmp @Rn */
}

/* FUN_0c054360 */
void f_0C054360(sh3_t *c)
{
	LOCALS;
L_0C054360: BLKS(0x0C054360u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054362u, 1);  /* 0C054360 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054364u, 1);  /* 0C054362 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C054364 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054368u, 2);  /* 0C054366 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C054368 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05436Cu, 2);  /* 0C05436A mov.l Rm,@-Rn */
	r6 = r8;  /* 0C05436C mov Rm,Rn */
	IF(0x0C05436Eu); r15 -= 4; W32(r15, PR); UPD(0x0C054370u, 2);  /* 0C05436E sts.l pr,@-Rn */
	r8 += 0x11u;  /* 0C054370 add #imm,Rn */
	r5 = 0xC161068u; UPD(0x0C054374u, 2);  /* 0C054372 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C054374 mov Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C054378u, 2);  /* 0C054376 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C05437Au, 1);  /* 0C054378 mov.l @Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C05437Cu, 1);  /* 0C05437A mov.l @(disp,pc),Rn */
	IF(0x0C05437Cu); { u32 t_ = r10; PR = 0x0C054380u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054380u); }  /* 0C05437C jsr @Rn */
L_0C054380: BLKS(0x0C054380u);
	r0 = 0xC395086u; UPD(0x0C054382u, 1);  /* 0C054380 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C054382 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C054386u, 2);  /* 0C054384 mov.b @Rm,Rn */
	r6 = r8;  /* 0C054386 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C054388 extu.b Rm,Rn */
	r2 = 0xC16103Cu; UPD(0x0C05438Cu, 3);  /* 0C05438A mov.l @(disp,pc),Rn */
	IF(0x0C05438Cu); r0 <<= 2;  /* 0C05438C shll2 Rn */
	IF(0x0C05438Eu); r4 = R32(r0 + r2); UPD(0x0C054390u, 2);  /* 0C05438E mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C054392u, 1);  /* 0C054390 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C054392 mov Rm,Rn */
	r15 = r14;  /* 0C054394 mov Rm,Rn */
	IF(0x0C054396u); PR = R32(r15); r15 += 4; UPD(0x0C054398u, 3);  /* 0C054396 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05439Au, 1);  /* 0C054398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05439Cu, 1);  /* 0C05439A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05439Eu, 1);  /* 0C05439C mov.l @Rm+,Rn */
	IF(0x0C05439Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05439E jmp @Rn */
}

/* FUN_0c0543c0 */
void f_0C0543C0(sh3_t *c)
{
	LOCALS;
L_0C0543C0: BLKS(0x0C0543C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0543C2u, 1);  /* 0C0543C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0543C4u, 1);  /* 0C0543C2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C0543C4 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0543C8u, 2);  /* 0C0543C6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C0543C8 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0543CCu, 2);  /* 0C0543CA mov.l Rm,@-Rn */
	r5 = r9;  /* 0C0543CC mov Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C0543D0u, 2);  /* 0C0543CE mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C0543D0 mov Rm,Rn */
	IF(0x0C0543D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0543D4u, 2);  /* 0C0543D2 sts.l pr,@-Rn */
	r8 += 0xCu;  /* 0C0543D4 add #imm,Rn */
	r4 = 0xC16106Cu; UPD(0x0C0543D8u, 2);  /* 0C0543D6 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C0543DAu, 1);  /* 0C0543D8 mov.l @(disp,pc),Rn */
	IF(0x0C0543DAu); { u32 t_ = r10; PR = 0x0C0543DEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0543DEu); }  /* 0C0543DA jsr @Rn */
L_0C0543DE: BLKS(0x0C0543DEu);
	r0 = 0xC21F5E0u; UPD(0x0C0543E0u, 1);  /* 0C0543DE mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0543E0 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0543E4u, 2);  /* 0C0543E2 mov.b @Rm,Rn */
	r6 = r8;  /* 0C0543E4 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C0543E6 extu.b Rm,Rn */
	r2 = 0xC1610D0u; UPD(0x0C0543EAu, 3);  /* 0C0543E8 mov.l @(disp,pc),Rn */
	IF(0x0C0543EAu); r0 <<= 2;  /* 0C0543EA shll2 Rn */
	IF(0x0C0543ECu); r4 = R32(r0 + r2); UPD(0x0C0543EEu, 2);  /* 0C0543EC mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C0543F0u, 1);  /* 0C0543EE mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0543F0 mov Rm,Rn */
	r15 = r14;  /* 0C0543F2 mov Rm,Rn */
	IF(0x0C0543F4u); PR = R32(r15); r15 += 4; UPD(0x0C0543F6u, 3);  /* 0C0543F4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0543F8u, 1);  /* 0C0543F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0543FAu, 1);  /* 0C0543F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0543FCu, 1);  /* 0C0543FA mov.l @Rm+,Rn */
	IF(0x0C0543FCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0543FC jmp @Rn */
}

/* dipmenu_draw_item_b */
void f_0C054420(sh3_t *c)
{
	LOCALS;
L_0C054420: BLKS(0x0C054420u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054422u, 1);  /* 0C054420 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054424u, 1);  /* 0C054422 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C054424 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054428u, 2);  /* 0C054426 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C054428 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05442Cu, 2);  /* 0C05442A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C05442C mov Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C054430u, 2);  /* 0C05442E mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C054430 mov Rm,Rn */
	IF(0x0C054432u); r15 -= 4; W32(r15, PR); UPD(0x0C054434u, 2);  /* 0C054432 sts.l pr,@-Rn */
	r8 += 0xCu;  /* 0C054434 add #imm,Rn */
	r4 = 0xC1610F0u; UPD(0x0C054438u, 2);  /* 0C054436 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05443Au, 1);  /* 0C054438 mov.l @(disp,pc),Rn */
	IF(0x0C05443Au); { u32 t_ = r10; PR = 0x0C05443Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05443Eu); }  /* 0C05443A jsr @Rn */
L_0C05443E: BLKS(0x0C05443Eu);
	r0 = 0xC22466Cu; UPD(0x0C054440u, 1);  /* 0C05443E mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C054440 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C054444u, 2);  /* 0C054442 mov.b @Rm,Rn */
	r6 = r8;  /* 0C054444 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C054446 extu.b Rm,Rn */
	r2 = 0xC16115Cu; UPD(0x0C05444Au, 3);  /* 0C054448 mov.l @(disp,pc),Rn */
	IF(0x0C05444Au); r0 <<= 2;  /* 0C05444A shll2 Rn */
	IF(0x0C05444Cu); r4 = R32(r0 + r2); UPD(0x0C05444Eu, 2);  /* 0C05444C mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C054450u, 1);  /* 0C05444E mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C054450 mov Rm,Rn */
	r15 = r14;  /* 0C054452 mov Rm,Rn */
	IF(0x0C054454u); PR = R32(r15); r15 += 4; UPD(0x0C054456u, 3);  /* 0C054454 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054458u, 1);  /* 0C054456 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05445Au, 1);  /* 0C054458 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05445Cu, 1);  /* 0C05445A mov.l @Rm+,Rn */
	IF(0x0C05445Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05445C jmp @Rn */
}

/* dipmenu_draw_item_c */
void f_0C054480(sh3_t *c)
{
	LOCALS;
L_0C054480: BLKS(0x0C054480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054482u, 1);  /* 0C054480 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054484u, 1);  /* 0C054482 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C054484 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054488u, 2);  /* 0C054486 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C054488 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05448Cu, 2);  /* 0C05448A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C05448C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C054490u, 2);  /* 0C05448E mov.l Rm,@-Rn */
	r6 = r8;  /* 0C054490 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054494u, 2);  /* 0C054492 mov.l Rm,@-Rn */
	r10 = 0xC050CD0u; UPD(0x0C054496u, 1);  /* 0C054494 mov.l @(disp,pc),Rn */
	IF(0x0C054496u); r15 -= 4; W32(r15, PR); UPD(0x0C054498u, 1);  /* 0C054496 sts.l pr,@-Rn */
	r12 = 0x80808000u; UPD(0x0C05449Au, 1);  /* 0C054498 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05449A mov Rm,Rn */
	r11 = 0xC220C53u; UPD(0x0C05449Eu, 2);  /* 0C05449C mov.l @(disp,pc),Rn */
	r4 = 0xC16117Cu; UPD(0x0C0544A0u, 1);  /* 0C05449E mov.l @(disp,pc),Rn */
	IF(0x0C0544A0u); { u32 t_ = r10; PR = 0x0C0544A4u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0544A4u); }  /* 0C0544A0 jsr @Rn */
L_0C0544A4: BLKS(0x0C0544A4u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C0544A6u, 1);  /* 0C0544A4 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0544A6 tst Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0544D0u, 4); goto L_0C0544D0; } UPD(0x0C0544ACu, 1); goto L_0C0544AC; }  /* 0C0544A8 bf/s */
L_0C0544AC: BLKS(0x0C0544ACu);
	r2 = 0xC1605B4u; UPD(0x0C0544AEu, 1);  /* 0C0544AC mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C0544AE extu.b Rm,Rn */
	IF(0x0C0544B0u); r0 <<= 2;  /* 0C0544B0 shll2 Rn */
	IF(0x0C0544B2u); r4 = R32(r0 + r2); UPD(0x0C0544B4u, 3);  /* 0C0544B2 mov.l @(r0,Rm),Rn */
	r8 += 0xEu;  /* 0C0544B4 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C0544B8u, 2);  /* 0C0544B6 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0544B8 mov Rm,Rn */
	r6 = r8;  /* 0C0544BA mov Rm,Rn */
	r0 = r10;  /* 0C0544BC mov Rm,Rn */
	r15 = r14;  /* 0C0544BE mov Rm,Rn */
	IF(0x0C0544C0u); PR = R32(r15); r15 += 4; UPD(0x0C0544C2u, 5);  /* 0C0544C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0544C4u, 1);  /* 0C0544C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0544C6u, 1);  /* 0C0544C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0544C8u, 1);  /* 0C0544C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0544CAu, 1);  /* 0C0544C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0544CCu, 1);  /* 0C0544CA mov.l @Rm+,Rn */
	IF(0x0C0544CCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0544CC jmp @Rn */
L_0C0544D0: BLKS(0x0C0544D0u);
	r6 += 0xCu;  /* 0C0544D0 add #imm,Rn */
	r4 = 0xC16118Cu; UPD(0x0C0544D4u, 2);  /* 0C0544D2 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0544D4 mov Rm,Rn */
	IF(0x0C0544D6u); { u32 t_ = r10; PR = 0x0C0544DAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0544DAu); }  /* 0C0544D6 jsr @Rn */
L_0C0544DA: BLKS(0x0C0544DAu);
	{ r0 = (u32)(s32)(s8)R8(r11); /* slot mov.b @Rm,Rn */ UPD(0x0C0544ACu, 3); goto L_0C0544AC; }  /* 0C0544DA bra */
}

/* FUN_0c054500 */
void f_0C054500(sh3_t *c)
{
	LOCALS;
L_0C054500: BLKS(0x0C054500u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054502u, 1);  /* 0C054500 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054504u, 1);  /* 0C054502 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C054504 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054508u, 2);  /* 0C054506 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C054508 exts.b Rm,Rn */
	r0 = 0xC050CD0u; UPD(0x0C05450Cu, 2);  /* 0C05450A mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C05450C mov Rm,Rn */
	IF(0x0C05450Eu); r15 -= 4; W32(r15, PR); UPD(0x0C054510u, 2);  /* 0C05450E sts.l pr,@-Rn */
	r6 = r8;  /* 0C054510 mov Rm,Rn */
	r14 = r15;  /* 0C054512 mov Rm,Rn */
	r4 = 0xC161190u; UPD(0x0C054516u, 3);  /* 0C054514 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C054518u, 1);  /* 0C054516 mov.l @(disp,pc),Rn */
	IF(0x0C054518u); { u32 t_ = r0; PR = 0x0C05451Cu; r8 += 0x11u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05451Cu); }  /* 0C054518 jsr @Rn */
L_0C05451C: BLKS(0x0C05451Cu);
	r0 = 0xC286276u; UPD(0x0C05451Eu, 1);  /* 0C05451C mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C05451E mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C054522u, 2);  /* 0C054520 mov.b @Rm,Rn */
	r6 = r8;  /* 0C054522 mov Rm,Rn */
	r0 = 0xC051540u; UPD(0x0C054526u, 2);  /* 0C054524 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C054526 mov Rm,Rn */
	IF(0x0C054528u); PR = R32(r15); r15 += 4; UPD(0x0C05452Au, 2);  /* 0C054528 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05452Cu, 1);  /* 0C05452A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05452Eu, 1);  /* 0C05452C mov.l @Rm+,Rn */
	IF(0x0C05452Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C051540u: TAIL(f_0C051540); default: JUMPD(tv_); } }  /* 0C05452E jmp @Rn */
}

/* dipmenu_draw_item_d */
void f_0C054550(sh3_t *c)
{
	LOCALS;
L_0C054550: BLKS(0x0C054550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054552u, 1);  /* 0C054550 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054554u, 1);  /* 0C054552 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054556u, 1);  /* 0C054554 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r5;  /* 0C054556 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05455Au, 2);  /* 0C054558 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C05455A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05455Eu, 2);  /* 0C05455C mov.l Rm,@-Rn */
	r5 = r10;  /* 0C05455E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054562u, 2);  /* 0C054560 mov.l Rm,@-Rn */
	r6 = r9;  /* 0C054562 mov Rm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C054566u, 2);  /* 0C054564 mov.l @(disp,pc),Rn */
	IF(0x0C054566u); r15 -= 4; W32(r15, PR); UPD(0x0C054568u, 1);  /* 0C054566 sts.l pr,@-Rn */
	r12 = 0xC21F588u; UPD(0x0C05456Au, 1);  /* 0C054568 mov.l @(disp,pc),Rn */
	r4 = 0xC1611A0u; UPD(0x0C05456Cu, 1);  /* 0C05456A mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05456Eu, 1);  /* 0C05456C mov.l @(disp,pc),Rn */
	IF(0x0C05456Eu); { u32 t_ = r11; PR = 0x0C054572u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054572u); }  /* 0C05456E jsr @Rn */
L_0C054572: BLKS(0x0C054572u);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C054574u, 1);  /* 0C054572 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C054574 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C054576 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05457Au); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C0545A0u, 5); goto L_0C0545A0; } goto L_0C05457C; }  /* 0C054578 bf/s */
L_0C05457C: BLKS(0x0C05457Cu);
	r4 = 0xC1611C0u; UPD(0x0C05457Eu, 2);  /* 0C05457C mov.l @(disp,pc),Rn */
	r9 += 0xCu;  /* 0C05457E add #imm,Rn */
	UPD(0x0C054580u, 1);
L_0C054580: BLKS(0x0C054580u);
	r7 = 0x40C04000u; UPD(0x0C054582u, 1);  /* 0C054580 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C054582 mov Rm,Rn */
	r6 = r9;  /* 0C054584 mov Rm,Rn */
	r0 = r11;  /* 0C054586 mov Rm,Rn */
	r15 = r14;  /* 0C054588 mov Rm,Rn */
	IF(0x0C05458Au); PR = R32(r15); r15 += 4; UPD(0x0C05458Cu, 5);  /* 0C05458A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05458Eu, 1);  /* 0C05458C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C054590u, 1);  /* 0C05458E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C054592u, 1);  /* 0C054590 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054594u, 1);  /* 0C054592 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054596u, 1);  /* 0C054594 mov.l @Rm+,Rn */
	IF(0x0C054596u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C054596 jmp @Rn */
L_0C0545A0: BLKS(0x0C0545A0u);
	r5 = 0xC160694u; UPD(0x0C0545A2u, 1);  /* 0C0545A0 mov.l @(disp,pc),Rn */
	r8 = 0xC05E330u; UPD(0x0C0545A4u, 1);  /* 0C0545A2 mov.l @(disp,pc),Rn */
	r9 += 0xCu;  /* 0C0545A4 add #imm,Rn */
	r2 = 0x40C04000u; UPD(0x0C0545A8u, 2);  /* 0C0545A6 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0545A8 mov Rm,Rn */
	IF(0x0C0545AAu); r4 = R32(r0 + r5); UPD(0x0C0545ACu, 2);  /* 0C0545AA mov.l @(r0,Rm),Rn */
	r7 = r2;  /* 0C0545AC mov Rm,Rn */
	IF(0x0C0545AEu); { u32 t_ = r8; PR = 0x0C0545B2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C0545B2u); }  /* 0C0545AE jsr @Rn */
L_0C0545B2: BLKS(0x0C0545B2u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0545B4u, 1);  /* 0C0545B2 mov.b @Rm,Rn */
	r9 += 0x7u;  /* 0C0545B4 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0545B6 extu.b Rm,Rn */
	r3 = 0xC1606E0u; UPD(0x0C0545BAu, 3);  /* 0C0545B8 mov.l @(disp,pc),Rn */
	IF(0x0C0545BAu); r0 <<= 2;  /* 0C0545BA shll2 Rn */
	IF(0x0C0545BCu); r0 = R32(r0 + r3); UPD(0x0C0545BEu, 2);  /* 0C0545BC mov.l @(r0,Rm),Rn */
	r2 = 0xC1611CCu; UPD(0x0C0545C0u, 1);  /* 0C0545BE mov.l @(disp,pc),Rn */
	IF(0x0C0545C0u); r0 <<= 2;  /* 0C0545C0 shll2 Rn */
	{ IF(0x0C0545C4u); r4 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C054580u, 4); goto L_0C054580; }  /* 0C0545C2 bra */
}

/* FUN_0c0545f0 */
void f_0C0545F0(sh3_t *c)
{
	LOCALS;
L_0C0545F0: BLKS(0x0C0545F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0545F2u, 1);  /* 0C0545F0 mov.l Rm,@-Rn */
	r7 = 0x40u;  /* 0C0545F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0545F6u, 2);  /* 0C0545F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0545F8u, 1);  /* 0C0545F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0545FAu, 1);  /* 0C0545F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0545FCu, 1);  /* 0C0545FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0545FEu, 1);  /* 0C0545FC mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C0545FE exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054602u, 2);  /* 0C054600 mov.l Rm,@-Rn */
	r9 = 0xC1611D4u; UPD(0x0C054604u, 1);  /* 0C054602 mov.l @(disp,pc),Rn */
	IF(0x0C054604u); r15 -= 4; W32(r15, PR); UPD(0x0C054606u, 1);  /* 0C054604 sts.l pr,@-Rn */
	r3 = R32(r9); UPD(0x0C054608u, 1);  /* 0C054606 mov.l @Rm,Rn */
	r15 += 0xFFFFFF88u;  /* 0C054608 add #imm,Rn */
	r14 = r15;  /* 0C05460A mov Rm,Rn */
	r9 = r14;  /* 0C05460C mov Rm,Rn */
	r9 += 0x40u;  /* 0C05460E add #imm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C054612u, 5);  /* 0C054610 mov.l Rm,@(disp,Rn) */
	r7 += r14;  /* 0C054612 add Rm,Rn */
	r11 = 0xC1611D8u; UPD(0x0C054616u, 2);  /* 0C054614 mov.l @(disp,pc),Rn */
	r3 = r14;  /* 0C054616 mov Rm,Rn */
	r8 = R32(r11); UPD(0x0C05461Au, 2);  /* 0C054618 mov.l @Rm,Rn */
	r3 += 0x4Cu;  /* 0C05461A add #imm,Rn */
	r4 = 0xC1611E0u; UPD(0x0C05461Eu, 2);  /* 0C05461C mov.l @(disp,pc),Rn */
	W32(r3 + 0x4u, r8); UPD(0x0C054620u, 1);  /* 0C05461E mov.l Rm,@(disp,Rn) */
	r10 = R32(r4); UPD(0x0C054622u, 1);  /* 0C054620 mov.l @Rm,Rn */
	r2 = 0xC1611E4u; UPD(0x0C054624u, 1);  /* 0C054622 mov.l @(disp,pc),Rn */
	W32(r9 + 0x14u, r10); UPD(0x0C054626u, 1);  /* 0C054624 mov.l Rm,@(disp,Rn) */
	r0 = R32(r2); UPD(0x0C054628u, 1);  /* 0C054626 mov.l @Rm,Rn */
	r10 = r14;  /* 0C054628 mov Rm,Rn */
	r13 = 0xC1611E8u; UPD(0x0C05462Cu, 2);  /* 0C05462A mov.l @(disp,pc),Rn */
	r10 += 0x54u;  /* 0C05462C add #imm,Rn */
	W32(r10 + 0x4u, r0); UPD(0x0C054630u, 2);  /* 0C05462E mov.l Rm,@(disp,Rn) */
	r11 = R32(r13); UPD(0x0C054632u, 1);  /* 0C054630 mov.l @Rm,Rn */
	r8 = 0xC1611ECu; UPD(0x0C054634u, 1);  /* 0C054632 mov.l @(disp,pc),Rn */
	W32(r9 + 0x1Cu, r11); UPD(0x0C054636u, 1);  /* 0C054634 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C054638u, 1);  /* 0C054636 mov.l @Rm,Rn */
	r9 = 0x1u;  /* 0C054638 mov #imm,Rn */
	W32(r7 + 0x20u, r4); UPD(0x0C05463Cu, 2);  /* 0C05463A mov.l Rm,@(disp,Rn) */
	r2 = 0xC392DC2u; UPD(0x0C05463Eu, 1);  /* 0C05463C mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r5); UPD(0x0C054640u, 1);  /* 0C05463E mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C054642u, 1);  /* 0C054640 mov.b @Rm,Rn */
	W32(r7 + 0x28u, r6); UPD(0x0C054644u, 1);  /* 0C054642 mov.l Rm,@(disp,Rn) */
	r7 = r0 & 0xFF;  /* 0C054644 extu.b Rm,Rn */
	T = r9 >= r7;  /* 0C054646 cmp/hs Rm,Rn */
	IF(0x0C054648u); r4 = T;  /* 0C054648 movt Rn */
	r0 = r12;  /* 0C05464A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C05464C cmp/eq #imm,r0 */
	IF(0x0C05464Eu); r2 = T;  /* 0C05464E movt Rn */
	r4 &= r2;  /* 0C054650 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C054652 tst Rm,Rn */
	if (!T) { UPD(0x0C05466Au, 11); goto L_0C05466A; }  /* 0C054654 bf */
L_0C054656: BLKS(0x0C054656u);
	r0 = r7;  /* 0C054656 mov Rm,Rn */
	r8 = 0xC392AE4u; UPD(0x0C05465Au, 2);  /* 0C054658 mov.l @(disp,pc),Rn */
	T = r0 == 0x2u;  /* 0C05465A cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C05465Eu, 2);  /* 0C05465C mov.b @Rm,Rn */
	IF(0x0C05465Eu); r13 = T;  /* 0C05465E movt Rn */
	T = (r1 & r1) == 0;  /* 0C054660 tst Rm,Rn */
	r13 &= r2;  /* 0C054662 and Rm,Rn */
	IF(0x0C054664u); r7 = T;  /* 0C054664 movt Rn */
	T = (r13 & r7) == 0;  /* 0C054666 tst Rm,Rn */
	if (T) { UPD(0x0C054680u, 8); goto L_0C054680; }  /* 0C054668 bt */
L_0C05466A: BLKS(0x0C05466Au);
	r14 += 0x78u;  /* 0C05466A add #imm,Rn */
	UPD(0x0C05466Cu, 1);
L_0C05466C: BLKS(0x0C05466Cu);
	r15 = r14;  /* 0C05466C mov Rm,Rn */
	IF(0x0C05466Eu); PR = R32(r15); r15 += 4; UPD(0x0C054670u, 2);  /* 0C05466E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054672u, 1);  /* 0C054670 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C054674u, 1);  /* 0C054672 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C054676u, 1);  /* 0C054674 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C054678u, 1);  /* 0C054676 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05467Au, 1);  /* 0C054678 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05467Cu, 1);  /* 0C05467A mov.l @Rm+,Rn */
	IF(0x0C05467Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05467C rts */
L_0C054680: BLKS(0x0C054680u);
	r11 = 0xC050CD0u; UPD(0x0C054682u, 1);  /* 0C054680 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C054682 mov Rm,Rn */
	r13 = 0x80808000u; UPD(0x0C054686u, 2);  /* 0C054684 mov.l @(disp,pc),Rn */
	IF(0x0C054686u); r0 <<= 2;  /* 0C054686 shll2 Rn */
	IF(0x0C054688u); r4 = R32(r0 + r3); UPD(0x0C05468Au, 2);  /* 0C054688 mov.l @(r0,Rm),Rn */
	IF(0x0C05468Au); { u32 t_ = r11; PR = 0x0C05468Eu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05468Eu); }  /* 0C05468A jsr @Rn */
L_0C05468E: BLKS(0x0C05468Eu);
	r0 = r8;  /* 0C05468E mov Rm,Rn */
	IF(0x0C054690u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C054692u, 2);  /* 0C054690 mov.b @(r0,Rm),Rn */
	r1 = r5 & 0xFF;  /* 0C054692 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C054694 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x68u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0546B0u, 5); goto L_0C0546B0; } goto L_0C05469A; }  /* 0C054696 bf/s */
L_0C05469A: BLKS(0x0C05469Au);
	IF(0x0C05469Au); r12 = R32(r0 + r14); UPD(0x0C05469Cu, 2);  /* 0C05469A mov.l @(r0,Rm),Rn */
	r6 = 0xC1611DCu; UPD(0x0C05469Eu, 1);  /* 0C05469C mov.l @(disp,pc),Rn */
	r0 = 0x64u;  /* 0C05469E mov #imm,Rn */
	r4 = R32(r6); UPD(0x0C0546A2u, 2);  /* 0C0546A0 mov.l @Rm,Rn */
	r12 += 0x7u;  /* 0C0546A2 add #imm,Rn */
	IF(0x0C0546A4u); r5 = R32(r0 + r14); UPD(0x0C0546A6u, 2);  /* 0C0546A4 mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C0546A8u, 1);  /* 0C0546A6 mov.l @(disp,pc),Rn */
	IF(0x0C0546A8u); { u32 t_ = r11; PR = 0x0C0546ACu; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0546ACu); }  /* 0C0546A8 jsr @Rn */
L_0C0546AC: BLKS(0x0C0546ACu);
	{ r14 += 0x78u; /* slot add #imm,Rn */ UPD(0x0C05466Cu, 3); goto L_0C05466C; }  /* 0C0546AC bra */
L_0C0546B0: BLKS(0x0C0546B0u);
	r6 = 0x40u;  /* 0C0546B0 mov #imm,Rn */
	r6 += r14;  /* 0C0546B2 add Rm,Rn */
	r2 = R32(r6 + 0x28u); UPD(0x0C0546B6u, 3);  /* 0C0546B4 mov.l @(disp,Rm),Rn */
	T = r1 > r9;  /* 0C0546B6 cmp/hi Rm,Rn */
	r2 += 0x8u;  /* 0C0546B8 add #imm,Rn */
	IF(0x0C0546BAu); r0 = T;  /* 0C0546BA movt Rn */
	W32(r6 + 0x2Cu, r2); UPD(0x0C0546BEu, 4);  /* 0C0546BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0546BEu); r0 <<= 2;  /* 0C0546BE shll2 Rn */
	r5 = R32(r6 + 0x24u); UPD(0x0C0546C2u, 2);  /* 0C0546C0 mov.l @(disp,Rm),Rn */
	r7 = r13;  /* 0C0546C2 mov Rm,Rn */
	r6 = r2;  /* 0C0546C4 mov Rm,Rn */
	IF(0x0C0546C6u); { u32 t_ = r11; PR = 0x0C0546CAu; IF(0x0C0546C8u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0546CAu); }  /* 0C0546C6 jsr @Rn */
L_0C0546CA: BLKS(0x0C0546CAu);
	r7 = 0x40u;  /* 0C0546CA mov #imm,Rn */
	r7 += r14;  /* 0C0546CC add Rm,Rn */
	r0 = r8;  /* 0C0546CE mov Rm,Rn */
	r1 = R32(r7 + 0x28u); UPD(0x0C0546D2u, 4);  /* 0C0546D0 mov.l @(disp,Rm),Rn */
	r4 = r14;  /* 0C0546D2 mov Rm,Rn */
	IF(0x0C0546D4u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0546D6u, 2);  /* 0C0546D4 mov.b @(r0,Rm),Rn */
	r1 += 0x5u;  /* 0C0546D6 add #imm,Rn */
	r10 = 0xC0AFEB0u; UPD(0x0C0546DAu, 2);  /* 0C0546D8 mov.l @(disp,pc),Rn */
	r13 = r5 & 0xFF;  /* 0C0546DA extu.b Rm,Rn */
	W32(r7 + 0x30u, r1); UPD(0x0C0546DEu, 2);  /* 0C0546DC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0B1DCAu; UPD(0x0C0546E0u, 1);  /* 0C0546DE mov.l @(disp,pc),Rn */
	IF(0x0C0546E0u); { u32 t_ = r10; PR = 0x0C0546E4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C0546E4u); }  /* 0C0546E0 jsr @Rn */
L_0C0546E4: BLKS(0x0C0546E4u);
	r4 = 0xCu;  /* 0C0546E4 mov #imm,Rn */
	r6 = 0x40u;  /* 0C0546E6 mov #imm,Rn */
	r5 = 0xC0B1DD4u; UPD(0x0C0546EAu, 3);  /* 0C0546E8 mov.l @(disp,pc),Rn */
	IF(0x0C0546EAu); { u32 t_ = r10; PR = 0x0C0546EEu; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C0546EEu); }  /* 0C0546EA jsr @Rn */
L_0C0546EE: BLKS(0x0C0546EEu);
	r10 = 0xC0AFDF0u; UPD(0x0C0546F0u, 1);  /* 0C0546EE mov.l @(disp,pc),Rn */
	r4 = r13 & 0xFF;  /* 0C0546F0 extu.b Rm,Rn */
	IF(0x0C0546F2u); { u32 t_ = r10; PR = 0x0C0546F6u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C0546F6u); }  /* 0C0546F2 jsr @Rn */
L_0C0546F6: BLKS(0x0C0546F6u);
	r8 = r0;  /* 0C0546F6 mov Rm,Rn */
	r0 = 0x64u;  /* 0C0546F8 mov #imm,Rn */
	IF(0x0C0546FAu); r13 = R32(r0 + r14); UPD(0x0C0546FCu, 3);  /* 0C0546FA mov.l @(r0,Rm),Rn */
	r3 = 0x5u;  /* 0C0546FC mov #imm,Rn */
	r0 = 0x70u;  /* 0C0546FE mov #imm,Rn */
	IF(0x0C054700u); r9 = R32(r0 + r14); UPD(0x0C054702u, 3);  /* 0C054700 mov.l @(r0,Rm),Rn */
	IF(0x0C054702u); ARG0(0x4D3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C054702 shld Rm,Rn */
	r0 = r14;  /* 0C054704 mov Rm,Rn */
	IF(0x0C054706u); r4 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C054708u, 3);  /* 0C054706 mov.b @(r0,Rm),Rn */
	r9 += r13;  /* 0C054708 add Rm,Rn */
	r2 = 0xC21E108u; UPD(0x0C05470Cu, 2);  /* 0C05470A mov.l @(disp,pc),Rn */
	IF(0x0C05470Cu); r9 <<= 2;  /* 0C05470C shll2 Rn */
	r0 = 0x40C04000u; UPD(0x0C054710u, 2);  /* 0C05470E mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C054710 add Rm,Rn */
	r4 |= r0;  /* 0C054712 or Rm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C054716u, 3);  /* 0C054714 mov.l Rm,@(disp,Rn) */
	r5 = 0xAu;  /* 0C054716 mov #imm,Rn */
	IF(0x0C054718u); { u32 t_ = r10; PR = 0x0C05471Cu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05471Cu); }  /* 0C054718 jsr @Rn */
L_0C05471C: BLKS(0x0C05471Cu);
	T = (r0 & r0) == 0;  /* 0C05471C tst Rm,Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054726u, 4); goto L_0C054726; } goto L_0C054722; }  /* 0C05471E bt/s */
L_0C054722: BLKS(0x0C054722u);
	{ r0 = r14; /* slot mov Rm,Rn */ UPD(0x0C0548F0u, 4); goto L_0C0548F0; }  /* 0C054722 bra */
L_0C054726: BLKS(0x0C054726u);
	r4 = 0xCu;  /* 0C054726 mov #imm,Rn */
	r4 += r14;  /* 0C054728 add Rm,Rn */
	r0 = r1;  /* 0C05472A mov Rm,Rn */
	IF(0x0C05472Cu); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05472Eu, 4);  /* 0C05472C mov.b @(r0,Rm),Rn */
	r8 = 0x40C04000u; UPD(0x0C054730u, 1);  /* 0C05472E mov.l @(disp,pc),Rn */
	r1 |= r8;  /* 0C054730 or Rm,Rn */
	UPD(0x0C054732u, 1);
L_0C054732: BLKS(0x0C054732u);
	r0 = 0x70u;  /* 0C054732 mov #imm,Rn */
	IF(0x0C054734u); r2 = R32(r0 + r14); UPD(0x0C054736u, 2);  /* 0C054734 mov.l @(r0,Rm),Rn */
	r6 = r13;  /* 0C054736 mov Rm,Rn */
	r13 = 0xCu;  /* 0C054738 mov #imm,Rn */
	r0 = r11;  /* 0C05473A mov Rm,Rn */
	r13 += r14;  /* 0C05473C add Rm,Rn */
	r6 += r2;  /* 0C05473E add Rm,Rn */
	r3 = 0x40C04000u; UPD(0x0C054742u, 6);  /* 0C054740 mov.l @(disp,pc),Rn */
	IF(0x0C054742u); r6 <<= 2;  /* 0C054742 shll2 Rn */
	IF(0x0C054744u); r5 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C054746u, 2);  /* 0C054744 mov.b @(r0,Rm),Rn */
	r7 = 0x40u;  /* 0C054746 mov #imm,Rn */
	W32(r9 + 0x4u, r1); UPD(0x0C05474Au, 2);  /* 0C054748 mov.l Rm,@(disp,Rn) */
	r5 |= r3;  /* 0C05474A or Rm,Rn */
	r10 = 0xC21E108u; UPD(0x0C05474Eu, 2);  /* 0C05474C mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C05474E mov Rm,Rn */
	IF(0x0C054750u); W32(r0 + r10, r5); UPD(0x0C054752u, 2);  /* 0C054750 mov.l Rm,@(r0,Rn) */
	r9 = 0xFFFFFFFFu;  /* 0C054752 mov #imm,Rn */
	r11 = 0xC286750u; UPD(0x0C054756u, 2);  /* 0C054754 mov.l @(disp,pc),Rn */
	r7 += r14;  /* 0C054756 add Rm,Rn */
	r0 = r11;  /* 0C054758 mov Rm,Rn */
	IF(0x0C05475Au); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05475Cu, 3);  /* 0C05475A mov.b @(r0,Rm),Rn */
	r1 = 0x5Cu;  /* 0C05475C mov #imm,Rn */
	r0 = 0x1u;  /* 0C05475E mov #imm,Rn */
	T = r0 >= r4;  /* 0C054760 cmp/hs Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C054762 negc Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C054766u, 5);  /* 0C054764 mov.l @(disp,Rm),Rn */
	r1 += r14;  /* 0C054766 add Rm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C05476Au, 2);  /* 0C054768 mov.l @(disp,pc),Rn */
	IF(0x0C05476Au); r0 <<= 2;  /* 0C05476A shll2 Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C05476Eu, 2);  /* 0C05476C mov.l @(disp,Rm),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C05476E add #imm,Rn */
	IF(0x0C054770u); r4 = R32(r0 + r1); UPD(0x0C054772u, 2);  /* 0C054770 mov.l @(r0,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C054774u, 1);  /* 0C054772 mov.l @(disp,pc),Rn */
	IF(0x0C054774u); { u32 t_ = r8; PR = 0x0C054778u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054778u); }  /* 0C054774 jsr @Rn */
L_0C054778: BLKS(0x0C054778u);
	r0 = r11;  /* 0C054778 mov Rm,Rn */
	IF(0x0C05477Au); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05477Cu, 2);  /* 0C05477A mov.b @(r0,Rm),Rn */
	r4 = r14;  /* 0C05477C mov Rm,Rn */
	r13 = 0xC0AFEB0u; UPD(0x0C054780u, 2);  /* 0C05477E mov.l @(disp,pc),Rn */
	r11 = r6 & 0xFF;  /* 0C054780 extu.b Rm,Rn */
	r5 = 0xC0B1E14u; UPD(0x0C054784u, 2);  /* 0C054782 mov.l @(disp,pc),Rn */
	IF(0x0C054784u); { u32 t_ = r13; PR = 0x0C054788u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C054788u); }  /* 0C054784 jsr @Rn */
L_0C054788: BLKS(0x0C054788u);
	r8 = 0xC0AFDF0u; UPD(0x0C05478Au, 1);  /* 0C054788 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C05478A mov #imm,Rn */
	r6 = 0x40u;  /* 0C05478C mov #imm,Rn */
	r5 = 0xC0B1E1Eu; UPD(0x0C054790u, 3);  /* 0C05478E mov.l @(disp,pc),Rn */
	IF(0x0C054790u); { u32 t_ = r13; PR = 0x0C054794u; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C054794u); }  /* 0C054790 jsr @Rn */
L_0C054794: BLKS(0x0C054794u);
	r4 = r11 & 0xFF;  /* 0C054794 extu.b Rm,Rn */
	r5 = 0xAu;  /* 0C054796 mov #imm,Rn */
	IF(0x0C054798u); { u32 t_ = r8; PR = 0x0C05479Cu; r11 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05479Cu); }  /* 0C054798 jsr @Rn */
L_0C05479C: BLKS(0x0C05479Cu);
	r2 = r0;  /* 0C05479C mov Rm,Rn */
	IF(0x0C05479Eu); ARG0(0x49BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C05479E shld Rm,Rn */
	r0 = 0x70u;  /* 0C0547A0 mov #imm,Rn */
	IF(0x0C0547A2u); r11 = R32(r0 + r14); UPD(0x0C0547A4u, 4);  /* 0C0547A2 mov.l @(r0,Rm),Rn */
	r4 = r2;  /* 0C0547A4 mov Rm,Rn */
	r0 = r14;  /* 0C0547A6 mov Rm,Rn */
	IF(0x0C0547A8u); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0547AAu, 3);  /* 0C0547A8 mov.b @(r0,Rm),Rn */
	r11 += r9;  /* 0C0547AA add Rm,Rn */
	r13 = 0x40C04000u; UPD(0x0C0547AEu, 2);  /* 0C0547AC mov.l @(disp,pc),Rn */
	IF(0x0C0547AEu); r11 <<= 2;  /* 0C0547AE shll2 Rn */
	r3 |= r13;  /* 0C0547B0 or Rm,Rn */
	r11 += r10;  /* 0C0547B2 add Rm,Rn */
	W32(r11 + 0x8u, r3); UPD(0x0C0547B6u, 4);  /* 0C0547B4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0547B6u); { u32 t_ = r8; PR = 0x0C0547BAu; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C0547BAu); }  /* 0C0547B6 jsr @Rn */
L_0C0547BA: BLKS(0x0C0547BAu);
	T = (r0 & r0) == 0;  /* 0C0547BA tst Rm,Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0547C4u, 4); goto L_0C0547C4; } goto L_0C0547C0; }  /* 0C0547BC bt/s */
L_0C0547C0: BLKS(0x0C0547C0u);
	{ r0 = r14; /* slot mov Rm,Rn */ UPD(0x0C0548E0u, 4); goto L_0C0548E0; }  /* 0C0547C0 bra */
L_0C0547C4: BLKS(0x0C0547C4u);
	r8 = 0xCu;  /* 0C0547C4 mov #imm,Rn */
	r8 += r14;  /* 0C0547C6 add Rm,Rn */
	r0 = r1;  /* 0C0547C8 mov Rm,Rn */
	IF(0x0C0547CAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0547CCu, 4);  /* 0C0547CA mov.b @(r0,Rm),Rn */
	r10 = 0x40C04000u; UPD(0x0C0547CEu, 1);  /* 0C0547CC mov.l @(disp,pc),Rn */
	r1 |= r10;  /* 0C0547CE or Rm,Rn */
	UPD(0x0C0547D0u, 1);
L_0C0547D0: BLKS(0x0C0547D0u);
	r0 = 0x70u;  /* 0C0547D0 mov #imm,Rn */
	IF(0x0C0547D2u); r2 = R32(r0 + r14); UPD(0x0C0547D4u, 2);  /* 0C0547D2 mov.l @(r0,Rm),Rn */
	r3 = 0xCu;  /* 0C0547D4 mov #imm,Rn */
	W32(r11 + 0x4u, r1); UPD(0x0C0547D8u, 2);  /* 0C0547D6 mov.l Rm,@(disp,Rn) */
	r0 = r13;  /* 0C0547D8 mov Rm,Rn */
	r3 += r14;  /* 0C0547DA add Rm,Rn */
	IF(0x0C0547DCu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0547DEu, 3);  /* 0C0547DC mov.b @(r0,Rm),Rn */
	r9 += r2;  /* 0C0547DE add Rm,Rn */
	r1 = 0x40C04000u; UPD(0x0C0547E2u, 2);  /* 0C0547E0 mov.l @(disp,pc),Rn */
	IF(0x0C0547E2u); r9 <<= 2;  /* 0C0547E2 shll2 Rn */
	r0 = 0xC21E108u; UPD(0x0C0547E6u, 2);  /* 0C0547E4 mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C0547E6 or Rm,Rn */
	IF(0x0C0547E8u); W32(r0 + r9, r6); UPD(0x0C0547EAu, 2);  /* 0C0547E8 mov.l Rm,@(r0,Rn) */
	r4 = 0xFFFFFFFFu;  /* 0C0547EA mov #imm,Rn */
	r5 = 0xC392DC2u; UPD(0x0C0547EEu, 2);  /* 0C0547EC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0547F0u, 1);  /* 0C0547EE mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C0547F0 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C0547F2 negc Rm,Rn */
	r0 = r12;  /* 0C0547F4 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0547F6 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0547F8 negc Rm,Rn */
	r11 |= r9;  /* 0C0547FA or Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0547FC tst Rm,Rn */
	if (T) { UPD(0x0C0548C2u, 10); goto L_0C0548C2; }  /* 0C0547FE bt */
L_0C054800: BLKS(0x0C054800u);
	r0 = 0x40u;  /* 0C054800 mov #imm,Rn */
	r0 += r14;  /* 0C054802 add Rm,Rn */
	r5 = 0xC1611F0u; UPD(0x0C054806u, 3);  /* 0C054804 mov.l @(disp,pc),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C054808u, 1);  /* 0C054806 mov.l @(disp,Rm),Rn */
	r10 = 0xC050CD0u; UPD(0x0C05480Au, 1);  /* 0C054808 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFEu;  /* 0C05480A add #imm,Rn */
	r4 = R32(r5); UPD(0x0C05480Eu, 2);  /* 0C05480C mov.l @Rm,Rn */
	r6 = R32(r0 + 0x28u); UPD(0x0C054810u, 1);  /* 0C05480E mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C054810 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C054814u, 2);  /* 0C054812 mov.l @(disp,pc),Rn */
	IF(0x0C054814u); { u32 t_ = r10; PR = 0x0C054818u; r6 += 0x3u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054818u); }  /* 0C054814 jsr @Rn */
L_0C054818: BLKS(0x0C054818u);
	r8 = 0xC393028u; UPD(0x0C05481Au, 1);  /* 0C054818 mov.l @(disp,pc),Rn */
	r3 = 0x40u;  /* 0C05481A mov #imm,Rn */
	r3 += r14;  /* 0C05481C add Rm,Rn */
	r1 = R32(r3 + 0x28u); UPD(0x0C054820u, 3);  /* 0C05481E mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C054820 mov Rm,Rn */
	r11 = 0xC0AFEB0u; UPD(0x0C054824u, 2);  /* 0C054822 mov.l @(disp,pc),Rn */
	r1 += 0x10u;  /* 0C054824 add #imm,Rn */
	IF(0x0C054826u); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C054828u, 2);  /* 0C054826 mov.b @(r0,Rm),Rn */
	r4 = r14;  /* 0C054828 mov Rm,Rn */
	r5 = 0xC0B1E5Eu; UPD(0x0C05482Cu, 2);  /* 0C05482A mov.l @(disp,pc),Rn */
	r13 = r2 & 0xFF;  /* 0C05482C extu.b Rm,Rn */
	W32(r3 + 0x34u, r1); UPD(0x0C054830u, 2);  /* 0C05482E mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFDF0u; UPD(0x0C054832u, 1);  /* 0C054830 mov.l @(disp,pc),Rn */
	IF(0x0C054832u); { u32 t_ = r11; PR = 0x0C054836u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C054836u); }  /* 0C054832 jsr @Rn */
L_0C054836: BLKS(0x0C054836u);
	r5 = 0xC0B1E68u; UPD(0x0C054838u, 1);  /* 0C054836 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C054838 mov #imm,Rn */
	r6 = 0x40u;  /* 0C05483A mov #imm,Rn */
	IF(0x0C05483Cu); { u32 t_ = r11; PR = 0x0C054840u; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C054840u); }  /* 0C05483C jsr @Rn */
L_0C054840: BLKS(0x0C054840u);
	r4 = r13 & 0xFF;  /* 0C054840 extu.b Rm,Rn */
	r5 = 0xAu;  /* 0C054842 mov #imm,Rn */
	IF(0x0C054844u); { u32 t_ = r8; PR = 0x0C054848u; r10 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C054848u); }  /* 0C054844 jsr @Rn */
L_0C054848: BLKS(0x0C054848u);
	r11 = r9;  /* 0C054848 mov Rm,Rn */
	IF(0x0C05484Au); ARG0(0x4BADu); { s32 s_ = (s32)r10; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C05484A shld Rm,Rn */
	r6 = r0;  /* 0C05484C mov Rm,Rn */
	r0 = 0x74u;  /* 0C05484E mov #imm,Rn */
	IF(0x0C054850u); r10 = R32(r0 + r14); UPD(0x0C054852u, 5);  /* 0C054850 mov.l @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C054852 mov #imm,Rn */
	r0 = r14;  /* 0C054854 mov Rm,Rn */
	IF(0x0C054856u); r13 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C054858u, 3);  /* 0C054856 mov.b @(r0,Rm),Rn */
	r10 += r11;  /* 0C054858 add Rm,Rn */
	r4 = 0xC21E108u; UPD(0x0C05485Cu, 2);  /* 0C05485A mov.l @(disp,pc),Rn */
	IF(0x0C05485Cu); r10 <<= 2;  /* 0C05485C shll2 Rn */
	r0 = 0x40C04000u; UPD(0x0C054860u, 2);  /* 0C05485E mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C054860 add Rm,Rn */
	r13 |= r0;  /* 0C054862 or Rm,Rn */
	W32(r10 + 0x8u, r13); UPD(0x0C054866u, 3);  /* 0C054864 mov.l Rm,@(disp,Rn) */
	r4 = r6;  /* 0C054866 mov Rm,Rn */
	IF(0x0C054868u); { u32 t_ = r8; PR = 0x0C05486Cu; r13 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C05486Cu); }  /* 0C054868 jsr @Rn */
L_0C05486C: BLKS(0x0C05486Cu);
	T = (r0 & r0) == 0;  /* 0C05486C tst Rm,Rn */
	{ u32 c_ = !T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0548D0u, 4); goto L_0C0548D0; } goto L_0C054872; }  /* 0C05486E bf/s */
L_0C054872: BLKS(0x0C054872u);
	r7 = 0xCu;  /* 0C054872 mov #imm,Rn */
	r7 += r14;  /* 0C054874 add Rm,Rn */
	r0 = r1;  /* 0C054876 mov Rm,Rn */
	IF(0x0C054878u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05487Au, 5);  /* 0C054878 mov.b @(r0,Rm),Rn */
	r4 = 0x40C04000u; UPD(0x0C05487Cu, 1);  /* 0C05487A mov.l @(disp,pc),Rn */
	r1 |= r4;  /* 0C05487C or Rm,Rn */
	UPD(0x0C05487Eu, 1);
L_0C05487E: BLKS(0x0C05487Eu);
	r0 = 0x74u;  /* 0C05487E mov #imm,Rn */
	IF(0x0C054880u); r6 = R32(r0 + r14); UPD(0x0C054882u, 2);  /* 0C054880 mov.l @(r0,Rm),Rn */
	r7 = 0xCu;  /* 0C054882 mov #imm,Rn */
	r0 = r11;  /* 0C054884 mov Rm,Rn */
	r7 += r14;  /* 0C054886 add Rm,Rn */
	IF(0x0C054888u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05488Au, 4);  /* 0C054888 mov.b @(r0,Rm),Rn */
	r13 += r6;  /* 0C05488A add Rm,Rn */
	r0 = 0x40C04000u; UPD(0x0C05488Eu, 2);  /* 0C05488C mov.l @(disp,pc),Rn */
	IF(0x0C05488Eu); r13 <<= 2;  /* 0C05488E shll2 Rn */
	W32(r10 + 0x4u, r1); UPD(0x0C054892u, 2);  /* 0C054890 mov.l Rm,@(disp,Rn) */
	r4 |= r0;  /* 0C054892 or Rm,Rn */
	r5 = 0xC21E108u; UPD(0x0C054896u, 2);  /* 0C054894 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C054896 mov Rm,Rn */
	IF(0x0C054898u); W32(r0 + r5, r4); UPD(0x0C05489Au, 2);  /* 0C054898 mov.l Rm,@(r0,Rn) */
	r3 = 0x40u;  /* 0C05489A mov #imm,Rn */
	r10 = 0xC393028u; UPD(0x0C05489Eu, 2);  /* 0C05489C mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C05489E mov #imm,Rn */
	r0 = r10;  /* 0C0548A0 mov Rm,Rn */
	IF(0x0C0548A2u); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0548A4u, 3);  /* 0C0548A2 mov.b @(r0,Rm),Rn */
	r3 += r14;  /* 0C0548A4 add Rm,Rn */
	T = r2 >= r8;  /* 0C0548A6 cmp/hs Rm,Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0548A8 mov #imm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C0548ACu, 4);  /* 0C0548AA mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0548AC negc Rm,Rn */
	r12 = 0xC050CD0u; UPD(0x0C0548B0u, 2);  /* 0C0548AE mov.l @(disp,pc),Rn */
	r11 = 0x5Cu;  /* 0C0548B0 mov #imm,Rn */
	IF(0x0C0548B2u); r0 <<= 2;  /* 0C0548B2 shll2 Rn */
	r13 += 0x13u;  /* 0C0548B4 add #imm,Rn */
	r11 += r14;  /* 0C0548B6 add Rm,Rn */
	IF(0x0C0548B8u); r4 = R32(r0 + r11); UPD(0x0C0548BAu, 5);  /* 0C0548B8 mov.l @(r0,Rm),Rn */
	r5 = r9;  /* 0C0548BA mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C0548BEu, 2);  /* 0C0548BC mov.l @(disp,pc),Rn */
	IF(0x0C0548BEu); { u32 t_ = r12; PR = 0x0C0548C2u; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0548C2u); }  /* 0C0548BE jsr @Rn */
L_0C0548C2: BLKS(0x0C0548C2u);
	{ r14 += 0x78u; /* slot add #imm,Rn */ UPD(0x0C05466Cu, 3); goto L_0C05466C; }  /* 0C0548C2 bra */
L_0C0548D0: BLKS(0x0C0548D0u);
	r0 = r14;  /* 0C0548D0 mov Rm,Rn */
	IF(0x0C0548D2u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0548D4u, 2);  /* 0C0548D2 mov.b @(r0,Rm),Rn */
	r6 = 0x40C04000u; UPD(0x0C0548D6u, 1);  /* 0C0548D4 mov.l @(disp,pc),Rn */
	{ r1 |= r6; /* slot or Rm,Rn */ UPD(0x0C05487Eu, 3); goto L_0C05487E; }  /* 0C0548D6 bra */
L_0C0548E0: BLKS(0x0C0548E0u);
	IF(0x0C0548E0u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0548E2u, 1);  /* 0C0548E0 mov.b @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C0548E4u, 1);  /* 0C0548E2 mov.l @(disp,pc),Rn */
	{ r1 |= r7; /* slot or Rm,Rn */ UPD(0x0C0547D0u, 3); goto L_0C0547D0; }  /* 0C0548E4 bra */
L_0C0548F0: BLKS(0x0C0548F0u);
	IF(0x0C0548F0u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0548F2u, 1);  /* 0C0548F0 mov.b @(r0,Rm),Rn */
	r0 = 0x40C04000u; UPD(0x0C0548F4u, 1);  /* 0C0548F2 mov.l @(disp,pc),Rn */
	{ r1 |= r0; /* slot or Rm,Rn */ UPD(0x0C054732u, 3); goto L_0C054732; }  /* 0C0548F4 bra */
}

/* FUN_0c054960 */
void f_0C054960(sh3_t *c)
{
	LOCALS;
L_0C054960: BLKS(0x0C054960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054962u, 1);  /* 0C054960 mov.l Rm,@-Rn */
	r0 = 0x2u;  /* 0C054962 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054966u, 2);  /* 0C054964 mov.l Rm,@-Rn */
	r7 = 0x1u;  /* 0C054966 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05496Au, 2);  /* 0C054968 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05496Cu, 1);  /* 0C05496A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05496Eu, 1);  /* 0C05496C mov.l Rm,@-Rn */
	r11 = 0xC392DC2u; UPD(0x0C054970u, 1);  /* 0C05496E mov.l @(disp,pc),Rn */
	IF(0x0C054970u); r15 -= 4; W32(r15, PR); UPD(0x0C054972u, 1);  /* 0C054970 sts.l pr,@-Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C054974u, 1);  /* 0C054972 mov.b @Rm,Rn */
	r6 = 0xC392AE4u; UPD(0x0C054976u, 1);  /* 0C054974 mov.l @(disp,pc),Rn */
	r8 = r10 & 0xFF;  /* 0C054976 extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C054978 cmp/hs Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r9 = v_; } UPD(0x0C05497Cu, 3);  /* 0C05497A mov.b @Rm+,Rn */
	IF(0x0C05497Cu); r0 = T;  /* 0C05497C movt Rn */
	T = (r9 & r9) == 0;  /* 0C05497E tst Rm,Rn */
	IF(0x0C054980u); r3 = T;  /* 0C054980 movt Rn */
	T = r8 > r7;  /* 0C054982 cmp/hi Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C054986u, 5);  /* 0C054984 mov.b @Rm,Rn */
	IF(0x0C054986u); r4 = T;  /* 0C054986 movt Rn */
	T = (r5 & r5) == 0;  /* 0C054988 tst Rm,Rn */
	IF(0x0C05498Au); r2 = T;  /* 0C05498A movt Rn */
	r4 &= r3;  /* 0C05498C and Rm,Rn */
	r0 &= r3;  /* 0C05498E and Rm,Rn */
	r4 &= r2;  /* 0C054990 and Rm,Rn */
	r0 |= r4;  /* 0C054992 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C054994 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054A00u, 11); goto L_0C054A00; } goto L_0C05499A; }  /* 0C054996 bt/s */
L_0C05499A: BLKS(0x0C05499Au);
	r5 = 0xC21F7F9u; UPD(0x0C05499Cu, 2);  /* 0C05499A mov.l @(disp,pc),Rn */
	r10 = 0xC392D50u; UPD(0x0C05499Eu, 1);  /* 0C05499C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0549A0u, 1);  /* 0C05499E mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0549A2u, 1);  /* 0C0549A0 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0549A2 tst Rm,Rn */
	IF(0x0C0549A4u); r1 = T;  /* 0C0549A4 movt Rn */
	T = r0 == 0x1u;  /* 0C0549A6 cmp/eq #imm,r0 */
	IF(0x0C0549A8u); r4 = T;  /* 0C0549A8 movt Rn */
	T = (r1 & r4) == 0;  /* 0C0549AA tst Rm,Rn */
	if (T) { UPD(0x0C0549F0u, 8); goto L_0C0549F0; }  /* 0C0549AC bt */
L_0C0549AE: BLKS(0x0C0549AEu);
	r11 = 0xC392E24u; UPD(0x0C0549B0u, 1);  /* 0C0549AE mov.l @(disp,pc),Rn */
	W8(r11, r0); UPD(0x0C0549B2u, 1);  /* 0C0549B0 mov.b Rm,@Rn */
L_0C0549B2: BLKS(0x0C0549B2u);
	r7 = 0xC1611F4u; UPD(0x0C0549B4u, 1);  /* 0C0549B2 mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C0549B4 mov #imm,Rn */
	r9 = 0xC050CD0u; UPD(0x0C0549B8u, 2);  /* 0C0549B6 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0549B8 mov #imm,Rn */
	r8 = 0x80808000u; UPD(0x0C0549BCu, 2);  /* 0C0549BA mov.l @(disp,pc),Rn */
	r4 = R32(r7); UPD(0x0C0549BEu, 1);  /* 0C0549BC mov.l @Rm,Rn */
	IF(0x0C0549BEu); { u32 t_ = r9; PR = 0x0C0549C2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0549C2u); }  /* 0C0549BE jsr @Rn */
L_0C0549C2: BLKS(0x0C0549C2u);
	r6 = 0xC1611F8u; UPD(0x0C0549C4u, 1);  /* 0C0549C2 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0549C4 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C0549C8u, 2);  /* 0C0549C6 mov.l @Rm,Rn */
	r5 = 0x19u;  /* 0C0549C8 mov #imm,Rn */
	IF(0x0C0549CAu); { u32 t_ = r9; PR = 0x0C0549CEu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0549CEu); }  /* 0C0549CA jsr @Rn */
L_0C0549CE: BLKS(0x0C0549CEu);
	r9 = 0xC051540u; UPD(0x0C0549D0u, 1);  /* 0C0549CE mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C0549D0 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0549D4u, 2);  /* 0C0549D2 mov.b @Rm,Rn */
	IF(0x0C0549D4u); { u32 t_ = r9; PR = 0x0C0549D8u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C051540, 0x0C051540u, 0x0C0549D8u); }  /* 0C0549D4 jsr @Rn */
L_0C0549D8: BLKS(0x0C0549D8u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0549DAu, 1);  /* 0C0549D8 mov.b @Rm,Rn */
	r5 = 0x19u;  /* 0C0549DA mov #imm,Rn */
	r6 = 0x14u;  /* 0C0549DC mov #imm,Rn */
	r3 = r9;  /* 0C0549DE mov Rm,Rn */
	r15 = r14;  /* 0C0549E0 mov Rm,Rn */
	IF(0x0C0549E2u); PR = R32(r15); r15 += 4; UPD(0x0C0549E4u, 5);  /* 0C0549E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0549E6u, 1);  /* 0C0549E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0549E8u, 1);  /* 0C0549E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0549EAu, 1);  /* 0C0549E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0549ECu, 1);  /* 0C0549EA mov.l @Rm+,Rn */
	IF(0x0C0549ECu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C051540u: TAIL(f_0C051540); default: JUMPD(tv_); } }  /* 0C0549EC jmp @Rn */
L_0C0549F0: BLKS(0x0C0549F0u);
	r11 = 0xC392E24u; UPD(0x0C0549F2u, 1);  /* 0C0549F0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0549F4u); ; /* slot nop */ UPD(0x0C0549B2u, 3); goto L_0C0549B2; }  /* 0C0549F2 bra */
L_0C054A00: BLKS(0x0C054A00u);
	r15 = r14;  /* 0C054A00 mov Rm,Rn */
	IF(0x0C054A02u); PR = R32(r15); r15 += 4; UPD(0x0C054A04u, 2);  /* 0C054A02 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054A06u, 1);  /* 0C054A04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C054A08u, 1);  /* 0C054A06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054A0Au, 1);  /* 0C054A08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054A0Cu, 1);  /* 0C054A0A mov.l @Rm+,Rn */
	IF(0x0C054A0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C054A0C rts */
}

/* FUN_0c054a40 */
void f_0C054A40(sh3_t *c)
{
	LOCALS;
L_0C054A40: BLKS(0x0C054A40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054A42u, 1);  /* 0C054A40 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C054A42 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054A46u, 2);  /* 0C054A44 mov.l Rm,@-Rn */
	T = r0 == 0x4u;  /* 0C054A46 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054A4Au, 2);  /* 0C054A48 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C054A4A mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054A4Eu, 2);  /* 0C054A4C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C054A4E exts.b Rm,Rn */
	IF(0x0C054A50u); r15 -= 4; W32(r15, PR); UPD(0x0C054A52u, 2);  /* 0C054A50 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054A70u, 3); goto L_0C054A70; } UPD(0x0C054A56u, 1); goto L_0C054A56; }  /* 0C054A52 bt/s */
L_0C054A56: BLKS(0x0C054A56u);
	r15 = r14;  /* 0C054A56 mov Rm,Rn */
	IF(0x0C054A58u); PR = R32(r15); r15 += 4; UPD(0x0C054A5Au, 2);  /* 0C054A58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054A5Cu, 1);  /* 0C054A5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054A5Eu, 1);  /* 0C054A5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054A60u, 1);  /* 0C054A5E mov.l @Rm+,Rn */
	IF(0x0C054A60u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C054A60 rts */
L_0C054A70: BLKS(0x0C054A70u);
	r0 = 0x3u;  /* 0C054A70 mov #imm,Rn */
	T = r10 > r0;  /* 0C054A72 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054A56u, 5); goto L_0C054A56; } goto L_0C054A78; }  /* 0C054A74 bt/s */
L_0C054A78: BLKS(0x0C054A78u);
	r1 = r10;  /* 0C054A78 mov Rm,Rn */
	r0 = 0xC054A84u;  /* 0C054A7A mova @(disp,pc),r0 */
	IF(0x0C054A7Cu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C054A7Eu, 4);  /* 0C054A7C mov.b @(r0,Rm),Rn */
	IF(0x0C054A7Eu); { u32 tv_ = (r3 + 0x0C054A82u); u32 t_ = PHYS(tv_); IF(0x0C054A80u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C054A90u: goto L_0C054A90; case 0x0C054AB0u: goto L_0C054AB0; case 0x0C054AE0u: goto L_0C054AE0; case 0x0C054AF0u: goto L_0C054AF0; default: JUMPD(tv_); } }  /* 0C054A7E braf Rn */
L_0C054A90: BLKS(0x0C054A90u);
	r8 = 0xC055780u; UPD(0x0C054A92u, 1);  /* 0C054A90 mov.l @(disp,pc),Rn */
	IF(0x0C054A92u); { u32 t_ = r8; PR = 0x0C054A96u; IF(0x0C054A94u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055780, 0x0C055780u, 0x0C054A96u); }  /* 0C054A92 jsr @Rn */
L_0C054A96: BLKS(0x0C054A96u);
	T = (r0 & r0) == 0;  /* 0C054A96 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C054A56u, 4); goto L_0C054A56; } goto L_0C054A9C; }  /* 0C054A98 bf/s */
L_0C054A9C: BLKS(0x0C054A9Cu);
	r6 = r10;  /* 0C054A9C mov Rm,Rn */
	r6 += 0x1u;  /* 0C054A9E add #imm,Rn */
	UPD(0x0C054AA0u, 3);
L_0C054AA0: BLKS(0x0C054AA0u);
	r10 = (u32)(s32)(s8)r6;  /* 0C054AA0 exts.b Rm,Rn */
	UPD(0x0C054AA2u, 1);
L_0C054AA2: BLKS(0x0C054AA2u);
	{ r0 = r10; /* slot mov Rm,Rn */ UPD(0x0C054A56u, 3); goto L_0C054A56; }  /* 0C054AA2 bra */
L_0C054AB0: BLKS(0x0C054AB0u);
	r2 = 0xC160628u; UPD(0x0C054AB2u, 1);  /* 0C054AB0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054AB2 mov #imm,Rn */
	r9 = 0xC050CD0u; UPD(0x0C054AB6u, 2);  /* 0C054AB4 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C054AB6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054ABAu, 2);  /* 0C054AB8 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C054ABCu, 1);  /* 0C054ABA mov.l @Rm,Rn */
	IF(0x0C054ABCu); { u32 t_ = r9; PR = 0x0C054AC0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054AC0u); }  /* 0C054ABC jsr @Rn */
L_0C054AC0: BLKS(0x0C054AC0u);
	r4 = 0xC160608u; UPD(0x0C054AC2u, 1);  /* 0C054AC0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C054AC2 mov #imm,Rn */
	r6 = 0x6u;  /* 0C054AC4 mov #imm,Rn */
	IF(0x0C054AC6u); { u32 t_ = r9; PR = 0x0C054ACAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054ACAu); }  /* 0C054AC6 jsr @Rn */
L_0C054ACA: BLKS(0x0C054ACAu);
	r5 = 0xC27DE74u; UPD(0x0C054ACCu, 1);  /* 0C054ACA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C054ACEu, 1);  /* 0C054ACC mov.b @Rm,Rn */
	IF(0x0C054ACEu); T = (s32)r4 >= 0;  /* 0C054ACE cmp/pz Rn */
	if (T) { UPD(0x0C054AA2u, 4); goto L_0C054AA2; }  /* 0C054AD0 bt */
L_0C054AD2: BLKS(0x0C054AD2u);
	r6 = r10;  /* 0C054AD2 mov Rm,Rn */
	{ r6 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C054AA0u, 4); goto L_0C054AA0; }  /* 0C054AD4 bra */
L_0C054AE0: BLKS(0x0C054AE0u);
	r9 = 0xC050CD0u; UPD(0x0C054AE2u, 1);  /* 0C054AE0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054AE2 mov #imm,Rn */
	r4 = 0xC16063Cu; UPD(0x0C054AE6u, 2);  /* 0C054AE4 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C054AE8u, 1);  /* 0C054AE6 mov.l @(disp,pc),Rn */
	IF(0x0C054AE8u); { u32 t_ = r9; PR = 0x0C054AECu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054AECu); }  /* 0C054AE8 jsr @Rn */
L_0C054AEC: BLKS(0x0C054AECu);
	{ IF(0x0C054AEEu); ; /* slot nop */ UPD(0x0C054ACAu, 3); goto L_0C054ACA; }  /* 0C054AEC bra */
L_0C054AF0: BLKS(0x0C054AF0u);
	r7 = 0xC21CCA0u; UPD(0x0C054AF2u, 1);  /* 0C054AF0 mov.l @(disp,pc),Rn */
	r0 = 0x10u;  /* 0C054AF2 mov #imm,Rn */
	r3 = 0xC21F58Cu; UPD(0x0C054AF6u, 2);  /* 0C054AF4 mov.l @(disp,pc),Rn */
	r2 = 0x1Fu;  /* 0C054AF6 mov #imm,Rn */
	UPD(0x0C054AF8u, 1);
L_0C054AF8: BLKS(0x0C054AF8u);
	IF(0x0C054AF8u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C054AFAu, 1);  /* 0C054AF8 mov.b @(r0,Rm),Rn */
	r10 = r0;  /* 0C054AFA mov Rm,Rn */
	IF(0x0C054AFCu); W8(r0 + r7, r8); UPD(0x0C054AFEu, 2);  /* 0C054AFC mov.b Rm,@(r0,Rn) */
	r10 += 0x1u;  /* 0C054AFE add #imm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C054B00 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C054B02 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C054AF8u, 6); goto L_0C054AF8; }  /* 0C054B04 bf */
L_0C054B06: BLKS(0x0C054B06u);
	r9 = 0xC21CCB0u; UPD(0x0C054B08u, 1);  /* 0C054B06 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C054B0Au, 1);  /* 0C054B08 mov.b @Rm,Rn */
	r9 += 0xFFFFFFF0u;  /* 0C054B0A add #imm,Rn */
	r9 += 0x11u;  /* 0C054B0C add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r8 = v_; } UPD(0x0C054B10u, 3);  /* 0C054B0E mov.b @Rm+,Rn */
	r0 = r2 & 0xFF;  /* 0C054B10 extu.b Rm,Rn */
	r7 = 0xC21F898u; UPD(0x0C054B14u, 2);  /* 0C054B12 mov.l @(disp,pc),Rn */
	r10 = r8 & 0xFF;  /* 0C054B14 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r5 = v_; } UPD(0x0C054B18u, 2);  /* 0C054B16 mov.b @Rm+,Rn */
	W32(r7, r0); UPD(0x0C054B1Au, 1);  /* 0C054B18 mov.l Rm,@Rn */
	r4 = r5 & 0xFF;  /* 0C054B1A extu.b Rm,Rn */
	r6 = 0xC2175E4u; UPD(0x0C054B1Eu, 2);  /* 0C054B1C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C054B20u, 1);  /* 0C054B1E mov.b @Rm,Rn */
	r3 = 0xC21E100u; UPD(0x0C054B22u, 1);  /* 0C054B20 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C054B22 extu.b Rm,Rn */
	r7 = 0xC26CAD8u; UPD(0x0C054B26u, 2);  /* 0C054B24 mov.l @(disp,pc),Rn */
	W32(r6, r10); UPD(0x0C054B28u, 1);  /* 0C054B26 mov.l Rm,@Rn */
	W32(r3, r4); UPD(0x0C054B2Au, 1);  /* 0C054B28 mov.l Rm,@Rn */
	r10 = 0x0u;  /* 0C054B2A mov #imm,Rn */
	{ W32(r7, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C054AA2u, 4); goto L_0C054AA2; }  /* 0C054B2C bra */
}

/* FUN_0c054b70 */
void f_0C054B70(sh3_t *c)
{
	LOCALS;
L_0C054B70: BLKS(0x0C054B70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054B72u, 1);  /* 0C054B70 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C054B72 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054B76u, 2);  /* 0C054B74 mov.l Rm,@-Rn */
	T = r0 == 0x9u;  /* 0C054B76 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054B7Au, 2);  /* 0C054B78 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C054B7A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C054B7Eu, 2);  /* 0C054B7C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C054B80u, 1);  /* 0C054B7E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054B82u, 1);  /* 0C054B80 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C054B82 exts.b Rm,Rn */
	IF(0x0C054B84u); r15 -= 4; W32(r15, PR); UPD(0x0C054B86u, 2);  /* 0C054B84 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054BA0u, 3); goto L_0C054BA0; } UPD(0x0C054B8Au, 1); goto L_0C054B8A; }  /* 0C054B86 bt/s */
L_0C054B8A: BLKS(0x0C054B8Au);
	r15 = r14;  /* 0C054B8A mov Rm,Rn */
	IF(0x0C054B8Cu); PR = R32(r15); r15 += 4; UPD(0x0C054B8Eu, 2);  /* 0C054B8C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054B90u, 1);  /* 0C054B8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C054B92u, 1);  /* 0C054B90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C054B94u, 1);  /* 0C054B92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054B96u, 1);  /* 0C054B94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054B98u, 1);  /* 0C054B96 mov.l @Rm+,Rn */
	IF(0x0C054B98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C054B98 rts */
L_0C054BA0: BLKS(0x0C054BA0u);
	r0 = 0x4u;  /* 0C054BA0 mov #imm,Rn */
	T = r12 > r0;  /* 0C054BA2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054B8Au, 5); goto L_0C054B8A; } goto L_0C054BA8; }  /* 0C054BA4 bt/s */
L_0C054BA8: BLKS(0x0C054BA8u);
	r1 = r12;  /* 0C054BA8 mov Rm,Rn */
	r0 = 0xC054BB4u;  /* 0C054BAA mova @(disp,pc),r0 */
	r1 += r1;  /* 0C054BAC add Rm,Rn */
	IF(0x0C054BAEu); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C054BB0u, 5);  /* 0C054BAE mov.w @(r0,Rm),Rn */
	IF(0x0C054BB0u); { u32 tv_ = (r3 + 0x0C054BB4u); u32 t_ = PHYS(tv_); IF(0x0C054BB2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C054BC0u: goto L_0C054BC0; case 0x0C054C30u: goto L_0C054C30; case 0x0C054C80u: goto L_0C054C80; case 0x0C054CE0u: goto L_0C054CE0; default: JUMPD(tv_); } }  /* 0C054BB0 braf Rn */
L_0C054BC0: BLKS(0x0C054BC0u);
	r9 = 0xC050CD0u; UPD(0x0C054BC2u, 1);  /* 0C054BC0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C054BC2 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C054BC6u, 2);  /* 0C054BC4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C054BC6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054BCAu, 2);  /* 0C054BC8 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C054BCCu, 1);  /* 0C054BCA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C054BCC mov Rm,Rn */
	IF(0x0C054BCEu); { u32 t_ = r9; PR = 0x0C054BD2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054BD2u); }  /* 0C054BCE jsr @Rn */
L_0C054BD2: BLKS(0x0C054BD2u);
	r4 = R32(r10); UPD(0x0C054BD4u, 1);  /* 0C054BD2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C054BD4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054BD6 mov #imm,Rn */
	IF(0x0C054BD8u); { u32 t_ = r9; PR = 0x0C054BDCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054BDCu); }  /* 0C054BD8 jsr @Rn */
L_0C054BDC: BLKS(0x0C054BDCu);
	r4 = R32(r10); UPD(0x0C054BDEu, 1);  /* 0C054BDC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C054BDE mov #imm,Rn */
	r6 = 0x4u;  /* 0C054BE0 mov #imm,Rn */
	IF(0x0C054BE2u); { u32 t_ = r9; PR = 0x0C054BE6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054BE6u); }  /* 0C054BE2 jsr @Rn */
L_0C054BE6: BLKS(0x0C054BE6u);
	r4 = R32(r10); UPD(0x0C054BE8u, 1);  /* 0C054BE6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C054BE8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054BEA mov #imm,Rn */
	IF(0x0C054BECu); { u32 t_ = r9; PR = 0x0C054BF0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054BF0u); }  /* 0C054BEC jsr @Rn */
L_0C054BF0: BLKS(0x0C054BF0u);
	r4 = R32(r10); UPD(0x0C054BF2u, 1);  /* 0C054BF0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C054BF2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054BF4 mov #imm,Rn */
	IF(0x0C054BF6u); { u32 t_ = r9; PR = 0x0C054BFAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054BFAu); }  /* 0C054BF6 jsr @Rn */
L_0C054BFA: BLKS(0x0C054BFAu);
	r4 = R32(r11); UPD(0x0C054BFCu, 1);  /* 0C054BFA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C054BFC mov #imm,Rn */
	r6 = 0x4u;  /* 0C054BFE mov #imm,Rn */
	IF(0x0C054C00u); { u32 t_ = r9; PR = 0x0C054C04u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C04u); }  /* 0C054C00 jsr @Rn */
L_0C054C04: BLKS(0x0C054C04u);
	r2 = 0xC160628u; UPD(0x0C054C06u, 1);  /* 0C054C04 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054C06 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C054C0Au, 2);  /* 0C054C08 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C054C0A mov #imm,Rn */
	IF(0x0C054C0Cu); { u32 t_ = r9; PR = 0x0C054C10u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C10u); }  /* 0C054C0C jsr @Rn */
L_0C054C10: BLKS(0x0C054C10u);
	r4 = 0xC1611FCu; UPD(0x0C054C12u, 1);  /* 0C054C10 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C054C12 mov #imm,Rn */
	UPD(0x0C054C14u, 1);
L_0C054C14: BLKS(0x0C054C14u);
	r6 = 0x6u;  /* 0C054C14 mov #imm,Rn */
	IF(0x0C054C16u); { u32 t_ = r9; PR = 0x0C054C1Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C1Au); }  /* 0C054C16 jsr @Rn */
L_0C054C1A: BLKS(0x0C054C1Au);
	r5 = 0xC27DE74u; UPD(0x0C054C1Cu, 1);  /* 0C054C1A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C054C1Eu, 1);  /* 0C054C1C mov.b @Rm,Rn */
	IF(0x0C054C1Eu); T = (s32)r4 >= 0;  /* 0C054C1E cmp/pz Rn */
	if (T) { UPD(0x0C054C28u, 4); goto L_0C054C28; }  /* 0C054C20 bt */
L_0C054C22: BLKS(0x0C054C22u);
	r6 = r12;  /* 0C054C22 mov Rm,Rn */
	UPD(0x0C054C24u, 1);
L_0C054C24: BLKS(0x0C054C24u);
	r6 += 0x1u;  /* 0C054C24 add #imm,Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C054C26 exts.b Rm,Rn */
	UPD(0x0C054C28u, 2);
L_0C054C28: BLKS(0x0C054C28u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C054B8Au, 3); goto L_0C054B8A; }  /* 0C054C28 bra */
L_0C054C30: BLKS(0x0C054C30u);
	r9 = 0xC050CD0u; UPD(0x0C054C32u, 1);  /* 0C054C30 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C054C32 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C054C36u, 2);  /* 0C054C34 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C054C36 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054C3Au, 2);  /* 0C054C38 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C054C3Cu, 1);  /* 0C054C3A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C054C3C mov Rm,Rn */
	IF(0x0C054C3Eu); { u32 t_ = r9; PR = 0x0C054C42u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C42u); }  /* 0C054C3E jsr @Rn */
L_0C054C42: BLKS(0x0C054C42u);
	r4 = R32(r10); UPD(0x0C054C44u, 1);  /* 0C054C42 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C054C44 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C46 mov #imm,Rn */
	IF(0x0C054C48u); { u32 t_ = r9; PR = 0x0C054C4Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C4Cu); }  /* 0C054C48 jsr @Rn */
L_0C054C4C: BLKS(0x0C054C4Cu);
	r4 = R32(r10); UPD(0x0C054C4Eu, 1);  /* 0C054C4C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C054C4E mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C50 mov #imm,Rn */
	IF(0x0C054C52u); { u32 t_ = r9; PR = 0x0C054C56u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C56u); }  /* 0C054C52 jsr @Rn */
L_0C054C56: BLKS(0x0C054C56u);
	r4 = R32(r10); UPD(0x0C054C58u, 1);  /* 0C054C56 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C054C58 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C5A mov #imm,Rn */
	IF(0x0C054C5Cu); { u32 t_ = r9; PR = 0x0C054C60u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C60u); }  /* 0C054C5C jsr @Rn */
L_0C054C60: BLKS(0x0C054C60u);
	r4 = R32(r10); UPD(0x0C054C62u, 1);  /* 0C054C60 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C054C62 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C64 mov #imm,Rn */
	IF(0x0C054C66u); { u32 t_ = r9; PR = 0x0C054C6Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C6Au); }  /* 0C054C66 jsr @Rn */
L_0C054C6A: BLKS(0x0C054C6Au);
	r4 = R32(r11); UPD(0x0C054C6Cu, 1);  /* 0C054C6A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C054C6C mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C6E mov #imm,Rn */
	IF(0x0C054C70u); { u32 t_ = r9; PR = 0x0C054C74u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C74u); }  /* 0C054C70 jsr @Rn */
L_0C054C74: BLKS(0x0C054C74u);
	r4 = 0xC16063Cu; UPD(0x0C054C76u, 1);  /* 0C054C74 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C054C14u, 3); goto L_0C054C14; }  /* 0C054C76 bra */
L_0C054C80: BLKS(0x0C054C80u);
	r9 = 0xC050CD0u; UPD(0x0C054C82u, 1);  /* 0C054C80 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C054C82 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C054C86u, 2);  /* 0C054C84 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C054C86 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054C8Au, 2);  /* 0C054C88 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C054C8Cu, 1);  /* 0C054C8A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C054C8C mov Rm,Rn */
	IF(0x0C054C8Eu); { u32 t_ = r9; PR = 0x0C054C92u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C92u); }  /* 0C054C8E jsr @Rn */
L_0C054C92: BLKS(0x0C054C92u);
	r4 = R32(r10); UPD(0x0C054C94u, 1);  /* 0C054C92 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C054C94 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054C96 mov #imm,Rn */
	IF(0x0C054C98u); { u32 t_ = r9; PR = 0x0C054C9Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054C9Cu); }  /* 0C054C98 jsr @Rn */
L_0C054C9C: BLKS(0x0C054C9Cu);
	r4 = R32(r10); UPD(0x0C054C9Eu, 1);  /* 0C054C9C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C054C9E mov #imm,Rn */
	r6 = 0x4u;  /* 0C054CA0 mov #imm,Rn */
	IF(0x0C054CA2u); { u32 t_ = r9; PR = 0x0C054CA6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054CA6u); }  /* 0C054CA2 jsr @Rn */
L_0C054CA6: BLKS(0x0C054CA6u);
	r4 = R32(r10); UPD(0x0C054CA8u, 1);  /* 0C054CA6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C054CA8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054CAA mov #imm,Rn */
	IF(0x0C054CACu); { u32 t_ = r9; PR = 0x0C054CB0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054CB0u); }  /* 0C054CAC jsr @Rn */
L_0C054CB0: BLKS(0x0C054CB0u);
	r4 = R32(r10); UPD(0x0C054CB2u, 1);  /* 0C054CB0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C054CB2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054CB4 mov #imm,Rn */
	IF(0x0C054CB6u); { u32 t_ = r9; PR = 0x0C054CBAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054CBAu); }  /* 0C054CB6 jsr @Rn */
L_0C054CBA: BLKS(0x0C054CBAu);
	r4 = R32(r11); UPD(0x0C054CBCu, 1);  /* 0C054CBA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C054CBC mov #imm,Rn */
	r6 = 0x4u;  /* 0C054CBE mov #imm,Rn */
	IF(0x0C054CC0u); { u32 t_ = r9; PR = 0x0C054CC4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054CC4u); }  /* 0C054CC0 jsr @Rn */
L_0C054CC4: BLKS(0x0C054CC4u);
	r4 = 0xC161210u; UPD(0x0C054CC6u, 1);  /* 0C054CC4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054CC6 mov #imm,Rn */
	r6 = 0x6u;  /* 0C054CC8 mov #imm,Rn */
	IF(0x0C054CCAu); { u32 t_ = r9; PR = 0x0C054CCEu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054CCEu); }  /* 0C054CCA jsr @Rn */
L_0C054CCE: BLKS(0x0C054CCEu);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C054C24u, 3); goto L_0C054C24; }  /* 0C054CCE bra */
L_0C054CE0: BLKS(0x0C054CE0u);
	r9 = 0xC05A640u; UPD(0x0C054CE2u, 1);  /* 0C054CE0 mov.l @(disp,pc),Rn */
	r8 = 0xC04C23Cu; UPD(0x0C054CE4u, 1);  /* 0C054CE2 mov.l @(disp,pc),Rn */
	IF(0x0C054CE4u); { u32 t_ = r9; PR = 0x0C054CE8u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C054CE8u); }  /* 0C054CE4 jsr @Rn */
L_0C054CE8: BLKS(0x0C054CE8u);
	r7 = 0xC055B90u; UPD(0x0C054CEAu, 1);  /* 0C054CE8 mov.l @(disp,pc),Rn */
	IF(0x0C054CEAu); { u32 t_ = r7; PR = 0x0C054CEEu; IF(0x0C054CECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055B90, 0x0C055B90u, 0x0C054CEEu); }  /* 0C054CEA jsr @Rn */
L_0C054CEE: BLKS(0x0C054CEEu);
	r4 = 0xC26C918u; UPD(0x0C054CF0u, 1);  /* 0C054CEE mov.l @(disp,pc),Rn */
	r6 = 0x194u; UPD(0x0C054CF2u, 1);  /* 0C054CF0 mov.w @(disp,pc),Rn */
	IF(0x0C054CF2u); { u32 t_ = r8; PR = 0x0C054CF6u; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C054CF6u); }  /* 0C054CF2 jsr @Rn */
L_0C054CF6: BLKS(0x0C054CF6u);
	{ IF(0x0C054CF8u); ; /* slot nop */ UPD(0x0C054C28u, 3); goto L_0C054C28; }  /* 0C054CF6 bra */
}


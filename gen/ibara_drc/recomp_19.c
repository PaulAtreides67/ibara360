#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0a9460 */
void f_0C0A9460(sh3_t *c)
{
	LOCALS;
L_0C0A9460: BLKS(0x0C0A9460u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9462u, 1);  /* 0C0A9460 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9464u, 1);  /* 0C0A9462 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9466u, 1);  /* 0C0A9464 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0A9466 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A946Au, 2);  /* 0C0A9468 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0A946A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A946Eu, 2);  /* 0C0A946C mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0A946E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9472u, 2);  /* 0C0A9470 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0A9472 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9476u, 2);  /* 0C0A9474 mov.l Rm,@-Rn */
	IF(0x0C0A9476u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9478u, 1);  /* 0C0A9476 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A947Au, 1);  /* 0C0A9478 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A947A mov Rm,Rn */
	r2 += r5;  /* 0C0A947C add Rm,Rn */
	IF(0x0C0A947Eu); T = (s32)r2 >= 0;  /* 0C0A947E cmp/pz Rn */
	{ u32 c_ = T; r13 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0A9488u, 6); goto L_0C0A9488; } UPD(0x0C0A9484u, 1); goto L_0C0A9484; }  /* 0C0A9480 bt/s */
L_0C0A9484: BLKS(0x0C0A9484u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9580u, 3); goto L_0C0A9580; }  /* 0C0A9484 bra */
L_0C0A9488: BLKS(0x0C0A9488u);
	r0 = 0x980000u; UPD(0x0C0A948Au, 1);  /* 0C0A9488 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A948A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A94A8u, 4); goto L_0C0A94A8; } goto L_0C0A9490; }  /* 0C0A948C bt/s */
L_0C0A9490: BLKS(0x0C0A9490u);
	r2 = 0xC3929E0u; UPD(0x0C0A9492u, 2);  /* 0C0A9490 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0A9494u, 1);  /* 0C0A9492 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0A9496u, 1);  /* 0C0A9494 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0A9496 mov Rm,Rn */
	r2 -= r3;  /* 0C0A9498 sub Rm,Rn */
	r2 += r0;  /* 0C0A949A add Rm,Rn */
	IF(0x0C0A949Cu); T = (s32)r2 >= 0;  /* 0C0A949C cmp/pz Rn */
	if (!T) { UPD(0x0C0A9570u, 7); goto L_0C0A9570; }  /* 0C0A949E bf */
L_0C0A94A0: BLKS(0x0C0A94A0u);
	r4 = 0x700000u; UPD(0x0C0A94A2u, 1);  /* 0C0A94A0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A94A2 cmp/gt Rm,Rn */
	IF(0x0C0A94A4u); r0 = T;  /* 0C0A94A4 movt Rn */
	r0 ^= 0x1u;  /* 0C0A94A6 xor #imm,r0 */
	UPD(0x0C0A94A8u, 3);
L_0C0A94A8: BLKS(0x0C0A94A8u);
	r5 = (u32)(s32)(s8)r0;  /* 0C0A94A8 exts.b Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A94AA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A94D0u, 5); goto L_0C0A94D0; } UPD(0x0C0A94B0u, 1); goto L_0C0A94B0; }  /* 0C0A94AC bf/s */
L_0C0A94B0: BLKS(0x0C0A94B0u);
	r15 = r14;  /* 0C0A94B0 mov Rm,Rn */
	IF(0x0C0A94B2u); PR = R32(r15); r15 += 4; UPD(0x0C0A94B4u, 2);  /* 0C0A94B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A94B6u, 1);  /* 0C0A94B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A94B8u, 1);  /* 0C0A94B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A94BAu, 1);  /* 0C0A94B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A94BCu, 1);  /* 0C0A94BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A94BEu, 1);  /* 0C0A94BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A94C0u, 1);  /* 0C0A94BE mov.l @Rm+,Rn */
	IF(0x0C0A94C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A94C0 rts */
L_0C0A94D0: BLKS(0x0C0A94D0u);
	r8 = 0xC060720u; UPD(0x0C0A94D2u, 1);  /* 0C0A94D0 mov.l @(disp,pc),Rn */
	IF(0x0C0A94D2u); { u32 t_ = r8; PR = 0x0C0A94D6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A94D6u); }  /* 0C0A94D2 jsr @Rn */
L_0C0A94D6: BLKS(0x0C0A94D6u);
	T = (r0 & r0) == 0;  /* 0C0A94D6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A94B0u, 4); goto L_0C0A94B0; } goto L_0C0A94DC; }  /* 0C0A94D8 bt/s */
L_0C0A94DC: BLKS(0x0C0A94DCu);
	r6 = 0xC2755BCu; UPD(0x0C0A94DEu, 2);  /* 0C0A94DC mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C0A94DE mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A94E2u, 2);  /* 0C0A94E0 mov.w @Rm,Rn */
	r3 = 0x6u;  /* 0C0A94E2 mov #imm,Rn */
	IF(0x0C0A94E4u); MACL = r5 * r8;  /* 0C0A94E4 mul.l Rm,Rn */
	r4 = 0xC27E0FCu; UPD(0x0C0A94E8u, 4);  /* 0C0A94E6 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0A94E8 mov Rm,Rn */
	IF(0x0C0A94EAu); r8 = MACL;  /* 0C0A94EA sts macl,Rn */
	r2 = 0xD1000000u; UPD(0x0C0A94EEu, 3);  /* 0C0A94EC mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0A94EE add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0A94F2u, 2);  /* 0C0A94F0 mov.l Rm,@(disp,Rn) */
	r0 += 0x8u;  /* 0C0A94F2 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0A94F6u, 2);  /* 0C0A94F4 mov.l Rm,@Rn */
	IF(0x0C0A94F6u); r0 >>= 2;  /* 0C0A94F6 shlr2 Rn */
	r8 += 0x44u;  /* 0C0A94F8 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A94FCu, 3);  /* 0C0A94FA mov.w Rm,@Rn */
	r5 = 0x20u;  /* 0C0A94FC mov #imm,Rn */
	IF(0x0C0A94FEu); r0 >>= 2;  /* 0C0A94FE shlr2 Rn */
	r5 &= r9;  /* 0C0A9500 and Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0A9502 and #imm,r0 */
	r8 += 0xFFFFFFBCu;  /* 0C0A9504 add #imm,Rn */
	r5 |= r0;  /* 0C0A9506 or Rm,Rn */
	r9 = 0x0u;  /* 0C0A9508 mov #imm,Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C0A950Cu, 8);  /* 0C0A950A mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C0A950C mov #imm,Rn */
	W32(r8 + 0x10u, r9); UPD(0x0C0A9510u, 2);  /* 0C0A950E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9510u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0A9510 shld Rm,Rn */
	r7 = 0xC1E6ABCu; UPD(0x0C0A9514u, 2);  /* 0C0A9512 mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x34u); UPD(0x0C0A9516u, 1);  /* 0C0A9514 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A9518u, 1);  /* 0C0A9516 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x30u); UPD(0x0C0A951Au, 1);  /* 0C0A9518 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0A951Cu, 1);  /* 0C0A951A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A951Cu); r4 = R32(r0 + r5); UPD(0x0C0A951Eu, 1);  /* 0C0A951C mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r4); UPD(0x0C0A9520u, 1);  /* 0C0A951E mov.l Rm,@(disp,Rn) */
	r1 = R32(r4); UPD(0x0C0A9522u, 1);  /* 0C0A9520 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r1); UPD(0x0C0A9524u, 1);  /* 0C0A9522 mov.l Rm,@(disp,Rn) */
	r2 = R32(r4 + 0x4u); UPD(0x0C0A9526u, 1);  /* 0C0A9524 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A9528u, 1);  /* 0C0A9526 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0A9528 mov #imm,Rn */
	W32(r8 + 0x20u, r2); UPD(0x0C0A952Cu, 2);  /* 0C0A952A mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A952Eu, 1);  /* 0C0A952C mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A952E add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A9532u, 2);  /* 0C0A9530 mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A9532 add #imm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0A9536u, 2);  /* 0C0A9534 mov.l Rm,@(disp,Rn) */
	r11 = 0xC050D70u; UPD(0x0C0A9538u, 1);  /* 0C0A9536 mov.l @(disp,pc),Rn */
	IF(0x0C0A9538u); { u32 t_ = r11; PR = 0x0C0A953Cu; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A953Cu); }  /* 0C0A9538 jsr @Rn */
L_0C0A953C: BLKS(0x0C0A953Cu);
	r0 += r10;  /* 0C0A953C add Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C0A9540u, 2);  /* 0C0A953E mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A9540 add #imm,Rn */
	r10 = 0xC058030u; UPD(0x0C0A9544u, 2);  /* 0C0A9542 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0A9544 exts.w Rm,Rn */
	r4 = r11;  /* 0C0A9546 mov Rm,Rn */
	IF(0x0C0A9548u); { u32 t_ = r12; PR = 0x0C0A954Cu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A954Cu); }  /* 0C0A9548 jsr @Rn */
L_0C0A954C: BLKS(0x0C0A954Cu);
	W32(r8 + 0x30u, r0); UPD(0x0C0A954Eu, 1);  /* 0C0A954C mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0A954E mov Rm,Rn */
	IF(0x0C0A9550u); { u32 t_ = r10; PR = 0x0C0A9554u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A9554u); }  /* 0C0A9550 jsr @Rn */
L_0C0A9554: BLKS(0x0C0A9554u);
	r7 = 0x217FF00u; UPD(0x0C0A9556u, 1);  /* 0C0A9554 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C0A9558u, 1);  /* 0C0A9556 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r7); UPD(0x0C0A955Au, 1);  /* 0C0A9558 mov.l Rm,@(disp,Rn) */
	r6 = 0x808080u; UPD(0x0C0A955Cu, 1);  /* 0C0A955A mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A955C add #imm,Rn */
	W32(r8, r6); UPD(0x0C0A9560u, 2);  /* 0C0A955E mov.l Rm,@Rn */
	r8 += 0x11u;  /* 0C0A9560 add #imm,Rn */
	W8(r8, r9); UPD(0x0C0A9564u, 2);  /* 0C0A9562 mov.b Rm,@Rn */
	r9 = 0xC0AFC10u; UPD(0x0C0A9566u, 1);  /* 0C0A9564 mov.l @(disp,pc),Rn */
	IF(0x0C0A9566u); { u32 t_ = r9; PR = 0x0C0A956Au; r4 = 0x67u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A956Au); }  /* 0C0A9566 jsr @Rn */
L_0C0A956A: BLKS(0x0C0A956Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A94B0u, 3); goto L_0C0A94B0; }  /* 0C0A956A bra */
L_0C0A9570: BLKS(0x0C0A9570u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A94A0u, 3); goto L_0C0A94A0; }  /* 0C0A9570 bra */
L_0C0A9580: BLKS(0x0C0A9580u);
	{ IF(0x0C0A9582u); ; /* slot nop */ UPD(0x0C0A9488u, 3); goto L_0C0A9488; }  /* 0C0A9580 bra */
}

/* FUN_0c0a95d0 */
void f_0C0A95D0(sh3_t *c)
{
	LOCALS;
L_0C0A95D0: BLKS(0x0C0A95D0u);
	r2 = 0x54u;  /* 0C0A95D0 mov #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0A95D2 exts.w Rm,Rn */
	IF(0x0C0A95D4u); MACL = r0 * r2;  /* 0C0A95D4 mul.l Rm,Rn */
	r5 = 0xC27E0FCu; UPD(0x0C0A95D8u, 5);  /* 0C0A95D6 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0A95D8 mov #imm,Rn */
	IF(0x0C0A95DAu); r3 = MACL;  /* 0C0A95DA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A95DEu, 3);  /* 0C0A95DC mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0A95DE add Rm,Rn */
	r3 += 0x4Cu;  /* 0C0A95E0 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A95E4u, 3);  /* 0C0A95E2 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A95E4 mov Rm,Rn */
	IF(0x0C0A95E6u); MACL = r0 * r2;  /* 0C0A95E6 mul.l Rm,Rn */
	IF(0x0C0A95E8u); r7 = MACL;  /* 0C0A95E8 sts macl,Rn */
	r7 += r5;  /* 0C0A95EA add Rm,Rn */
	r2 = R32(r7); UPD(0x0C0A95EEu, 6);  /* 0C0A95EC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A95EE tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A95FEu, 4); goto L_0C0A95FE; } goto L_0C0A95F4; }  /* 0C0A95F0 bt/s */
L_0C0A95F4: BLKS(0x0C0A95F4u);
	r1 = R32(r7 + 0x4u); UPD(0x0C0A95F6u, 2);  /* 0C0A95F4 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C0A95F8u, 1);  /* 0C0A95F6 mov.l @(disp,Rm),Rn */
	T = r1 == r4;  /* 0C0A95F8 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9610u, 4); goto L_0C0A9610; } UPD(0x0C0A95FEu, 1); goto L_0C0A95FE; }  /* 0C0A95FA bt/s */
L_0C0A95FE: BLKS(0x0C0A95FEu);
	r0 = r1;  /* 0C0A95FE mov Rm,Rn */
	r15 = r14;  /* 0C0A9600 mov Rm,Rn */
	IF(0x0C0A9602u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A9602 rts */
L_0C0A9610: BLKS(0x0C0A9610u);
	r7 += 0x4Eu;  /* 0C0A9610 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A9614u, 2);  /* 0C0A9612 mov.w @Rm,Rn */
	r3 += 0x4Eu;  /* 0C0A9614 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A9618u, 2);  /* 0C0A9616 mov.w @Rm,Rn */
	T = r7 == r6;  /* 0C0A9618 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A95FEu, 4); goto L_0C0A95FE; } goto L_0C0A961E; }  /* 0C0A961A bf/s */
L_0C0A961E: BLKS(0x0C0A961Eu);
	{ r1 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A95FEu, 4); goto L_0C0A95FE; }  /* 0C0A961E bra */
}

void f_0C0A9630(sh3_t *c)
{
	LOCALS;
L_0C0A9630: BLKS(0x0C0A9630u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A9630 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A9632 mov #imm,Rn */
	IF(0x0C0A9634u); MACL = r2 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A9638u, 5);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A9638 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A963Cu, 2);  /* 0C0A963A mov.l Rm,@-Rn */
	IF(0x0C0A963Cu); r0 = MACL;  /* 0C0A963C sts macl,Rn */
	r0 += r6;  /* 0C0A963E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A9642u, 3);  /* 0C0A9640 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A9642 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A9646u, 2);  /* 0C0A9644 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A9646 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A964Au, 2);  /* 0C0A9648 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A964A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A964Eu, 2);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A9656u, 1);  /* 0C0A9654 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A9658u, 1);  /* 0C0A9656 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A965Au, 1);  /* 0C0A9658 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0A965Cu, 1);  /* 0C0A965A mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A965Eu, 1);  /* 0C0A965C mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A9660u, 1);  /* 0C0A965E mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A9664u, 1);  /* 0C0A9662 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A9666u, 1);  /* 0C0A9664 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A9668u, 1);  /* 0C0A9666 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A966Au, 1);  /* 0C0A9668 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A966A add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A966Eu, 2);  /* 0C0A966C mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A966E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9672u, 2);  /* 0C0A9670 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A9674u, 1);  /* 0C0A9672 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A9674 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A967Au, 1);  /* 0C0A9678 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A967A add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A967Eu, 2);  /* 0C0A967C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A967E mov Rm,Rn */
	IF(0x0C0A9680u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9680 rts */
}

void f_0C0A96A0(sh3_t *c)
{
	LOCALS;
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A96A0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A96A2 mov #imm,Rn */
	IF(0x0C0A96A4u); MACL = r2 * r0;  /* 0C0A96A4 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A96A8u, 5);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A96A8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A96ACu, 2);  /* 0C0A96AA mov.l Rm,@-Rn */
	IF(0x0C0A96ACu); r0 = MACL;  /* 0C0A96AC sts macl,Rn */
	r0 += r6;  /* 0C0A96AE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A96B2u, 3);  /* 0C0A96B0 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A96B2 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A96B6u, 2);  /* 0C0A96B4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A96B6 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A96BAu, 2);  /* 0C0A96B8 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A96BA mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A96BEu, 2);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A96C6u, 1);  /* 0C0A96C4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A96C8u, 1);  /* 0C0A96C6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A96CAu, 1);  /* 0C0A96C8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0A96CCu, 1);  /* 0C0A96CA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A96CEu, 1);  /* 0C0A96CC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A96D0u, 1);  /* 0C0A96CE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A96D4u, 1);  /* 0C0A96D2 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A96D6u, 1);  /* 0C0A96D4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A96D8u, 1);  /* 0C0A96D6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A96DA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A96DEu, 2);  /* 0C0A96DC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A96DE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A96E2u, 2);  /* 0C0A96E0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A96E4u, 1);  /* 0C0A96E2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A96E4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A96E8u, 2);  /* 0C0A96E6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A96EAu, 1);  /* 0C0A96E8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A96EA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A96EE mov Rm,Rn */
	IF(0x0C0A96F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A96F0 rts */
}

void f_0C0A9710(sh3_t *c)
{
	LOCALS;
L_0C0A9710: BLKS(0x0C0A9710u);
	r3 = 0x54u;  /* 0C0A9710 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A9712 exts.w Rm,Rn */
	IF(0x0C0A9714u); MACL = r4 * r3;  /* 0C0A9714 mul.l Rm,Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A9718u, 5);  /* 0C0A9716 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A971Au, 1);  /* 0C0A9718 mov.l Rm,@-Rn */
	IF(0x0C0A971Au); r3 = MACL;  /* 0C0A971A sts macl,Rn */
	r3 += r0;  /* 0C0A971C add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0A9720u, 3);  /* 0C0A971E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A9720 mov Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A9724u, 2);  /* 0C0A9722 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0A9726u, 1);  /* 0C0A9724 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x34u); UPD(0x0C0A9728u, 1);  /* 0C0A9726 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0A9728 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A972Cu, 2);  /* 0C0A972A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0A972C add Rm,Rn */
	r7 += r0;  /* 0C0A972E add Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0A9732u, 3);  /* 0C0A9730 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9732u); T = (s32)r7 >= 0;  /* 0C0A9732 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A973Cu, 4); goto L_0C0A973C; } UPD(0x0C0A9738u, 1); goto L_0C0A9738; }  /* 0C0A9734 bt/s */
L_0C0A9738: BLKS(0x0C0A9738u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A9850u, 3); goto L_0C0A9850; }  /* 0C0A9738 bra */
L_0C0A973C: BLKS(0x0C0A973Cu);
	r2 = 0xB80000u; UPD(0x0C0A973Eu, 1);  /* 0C0A973C mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0A973E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A9758u, 4); goto L_0C0A9758; }  /* 0C0A9740 bt */
L_0C0A9742: BLKS(0x0C0A9742u);
	r2 = r6;  /* 0C0A9742 mov Rm,Rn */
	r5 = 0xC3929E0u; UPD(0x0C0A9746u, 2);  /* 0C0A9744 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A9748u, 1);  /* 0C0A9746 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A974Au, 1);  /* 0C0A9748 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A974A sub Rm,Rn */
	r2 += r6;  /* 0C0A974C add Rm,Rn */
	IF(0x0C0A974Eu); T = (s32)r2 >= 0;  /* 0C0A974E cmp/pz Rn */
	if (!T) { UPD(0x0C0A9840u, 6); goto L_0C0A9840; }  /* 0C0A9750 bf */
L_0C0A9752: BLKS(0x0C0A9752u);
	r0 = 0x900000u; UPD(0x0C0A9754u, 1);  /* 0C0A9752 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A9754 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A9770u, 4); goto L_0C0A9770; }  /* 0C0A9756 bf */
L_0C0A9758: BLKS(0x0C0A9758u);
	r4 = 0x0u;  /* 0C0A9758 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0A975Cu, 2);  /* 0C0A975A mov.l Rm,@Rn */
L_0C0A975C: BLKS(0x0C0A975Cu);
	r15 = r14;  /* 0C0A975C mov Rm,Rn */
	IF(0x0C0A975Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A975E rts */
L_0C0A9770: BLKS(0x0C0A9770u);
	r2 = R32(r3 + 0x10u); UPD(0x0C0A9772u, 1);  /* 0C0A9770 mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C0A9772 mov #imm,Rn */
	T = r2 > r3;  /* 0C0A9774 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A975Cu, 5); goto L_0C0A975C; }  /* 0C0A9776 bt */
L_0C0A9778: BLKS(0x0C0A9778u);
	r0 = 0xC0A979Cu;  /* 0C0A9778 mova @(disp,pc),r0 */
	IF(0x0C0A977Au); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A977Cu, 2);  /* 0C0A977A mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C0A977C extu.b Rm,Rn */
	IF(0x0C0A977Eu); { u32 tv_ = (r6 + 0x0C0A9782u); u32 t_ = PHYS(tv_); IF(0x0C0A9780u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0A97B0u: goto L_0C0A97B0; case 0x0C0A97E0u: goto L_0C0A97E0; case 0x0C0A9800u: goto L_0C0A9800; default: JUMPD(tv_); } }  /* 0C0A977E braf Rn */
L_0C0A97B0: BLKS(0x0C0A97B0u);
	r7 = 0x54u;  /* 0C0A97B0 mov #imm,Rn */
	IF(0x0C0A97B2u); MACL = r4 * r7;  /* 0C0A97B2 mul.l Rm,Rn */
	r2 = 0xC27E0FCu; UPD(0x0C0A97B6u, 4);  /* 0C0A97B4 mov.l @(disp,pc),Rn */
	IF(0x0C0A97B6u); r3 = MACL;  /* 0C0A97B6 sts macl,Rn */
	r3 += r2;  /* 0C0A97B8 add Rm,Rn */
	r2 = r3;  /* 0C0A97BA mov Rm,Rn */
	r2 += 0x51u;  /* 0C0A97BC add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A97C0u, 5);  /* 0C0A97BE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0A97C0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0A97C2 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0A97C6u, 3);  /* 0C0A97C4 mov.b Rm,@Rn */
	T = r0 == 0x4u;  /* 0C0A97C6 cmp/eq #imm,r0 */
	UPD(0x0C0A97C8u, 1);
L_0C0A97C8: BLKS(0x0C0A97C8u);
	if (!T) { UPD(0x0C0A975Cu, 3); goto L_0C0A975C; }  /* 0C0A97C8 bf */
L_0C0A97CA: BLKS(0x0C0A97CAu);
	r7 = 0x0u;  /* 0C0A97CA mov #imm,Rn */
	W8(r2, r7); UPD(0x0C0A97CEu, 2);  /* 0C0A97CC mov.b Rm,@Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0A97D0u, 1);  /* 0C0A97CE mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0A97D0 add #imm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0A97D4u, 2);  /* 0C0A97D2 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0A7A80u; UPD(0x0C0A97D6u, 1);  /* 0C0A97D4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A97D6 mov Rm,Rn */
	IF(0x0C0A97D8u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A7A80u: TAIL(f_0C0A7A80); default: JUMPD(tv_); } }  /* 0C0A97D8 jmp @Rn */
L_0C0A97E0: BLKS(0x0C0A97E0u);
	r3 = 0x54u;  /* 0C0A97E0 mov #imm,Rn */
	IF(0x0C0A97E2u); MACL = r4 * r3;  /* 0C0A97E2 mul.l Rm,Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A97E6u, 4);  /* 0C0A97E4 mov.l @(disp,pc),Rn */
	IF(0x0C0A97E6u); r3 = MACL;  /* 0C0A97E6 sts macl,Rn */
	r3 += r0;  /* 0C0A97E8 add Rm,Rn */
	r2 = r3;  /* 0C0A97EA mov Rm,Rn */
	r2 += 0x51u;  /* 0C0A97EC add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A97F0u, 5);  /* 0C0A97EE mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0A97F0 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0A97F2 extu.b Rm,Rn */
	W8(r2, r5); UPD(0x0C0A97F6u, 3);  /* 0C0A97F4 mov.b Rm,@Rn */
	{ T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0A97C8u, 3); goto L_0C0A97C8; }  /* 0C0A97F6 bra */
L_0C0A9800: BLKS(0x0C0A9800u);
	r6 = 0x54u;  /* 0C0A9800 mov #imm,Rn */
	IF(0x0C0A9802u); MACL = r4 * r6;  /* 0C0A9802 mul.l Rm,Rn */
	r7 = 0xC27E0FCu; UPD(0x0C0A9806u, 4);  /* 0C0A9804 mov.l @(disp,pc),Rn */
	IF(0x0C0A9806u); r6 = MACL;  /* 0C0A9806 sts macl,Rn */
	r6 += r7;  /* 0C0A9808 add Rm,Rn */
	r4 = r6;  /* 0C0A980A mov Rm,Rn */
	r4 += 0x40u;  /* 0C0A980C add #imm,Rn */
	r0 = R32(r4); UPD(0x0C0A9810u, 5);  /* 0C0A980E mov.l @Rm,Rn */
	r2 = r0;  /* 0C0A9810 mov Rm,Rn */
	IF(0x0C0A9812u); r2 >>= 8;  /* 0C0A9812 shlr8 Rn */
	r5 = r2 & 0xFF;  /* 0C0A9814 extu.b Rm,Rn */
	IF(0x0C0A9816u); r5 <<= 16;  /* 0C0A9816 shll16 Rn */
	IF(0x0C0A9818u); T = r5 & 1; r5 >>= 1;  /* 0C0A9818 shlr Rn */
	r3 = 0xFFFFFF00u; UPD(0x0C0A981Cu, 6);  /* 0C0A981A mov.w @(disp,pc),Rn */
	IF(0x0C0A981Cu); r5 >>= 8;  /* 0C0A981C shlr8 Rn */
	r5 &= r3;  /* 0C0A981E and Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C0A9820 extu.b Rm,Rn */
	IF(0x0C0A9822u); r3 <<= 8;  /* 0C0A9822 shll8 Rn */
	IF(0x0C0A9824u); T = r3 & 1; r3 >>= 1;  /* 0C0A9824 shlr Rn */
	IF(0x0C0A9826u); r3 >>= 8;  /* 0C0A9826 shlr8 Rn */
	r3 |= r5;  /* 0C0A9828 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A982A tst Rm,Rn */
	{ u32 c_ = !T; W32(r4, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A975Cu, 11); goto L_0C0A975C; } UPD(0x0C0A9830u, 1); goto L_0C0A9830; }  /* 0C0A982C bf/s */
L_0C0A9830: BLKS(0x0C0A9830u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0A975Cu, 3); goto L_0C0A975C; }  /* 0C0A9830 bra */
L_0C0A9840: BLKS(0x0C0A9840u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9752u, 3); goto L_0C0A9752; }  /* 0C0A9840 bra */
L_0C0A9850: BLKS(0x0C0A9850u);
	{ IF(0x0C0A9852u); ; /* slot nop */ UPD(0x0C0A973Cu, 3); goto L_0C0A973C; }  /* 0C0A9850 bra */
}

void f_0C0A9860(sh3_t *c)
{
	LOCALS;
L_0C0A9860: BLKS(0x0C0A9860u);
	r7 = (u32)(s32)(s16)r4;  /* 0C0A9860 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C0A9862 mov #imm,Rn */
	IF(0x0C0A9864u); MACL = r7 * r2;  /* 0C0A9864 mul.l Rm,Rn */
	r3 = 0xC27E0FCu; UPD(0x0C0A9868u, 5);  /* 0C0A9866 mov.l @(disp,pc),Rn */
	r1 = 0x5u;  /* 0C0A9868 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A986Cu, 2);  /* 0C0A986A mov.l Rm,@-Rn */
	IF(0x0C0A986Cu); r4 = MACL;  /* 0C0A986C sts macl,Rn */
	r4 += r3;  /* 0C0A986E add Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0A9872u, 3);  /* 0C0A9870 mov.l @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C0A9872 mov #imm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0A9876u, 2);  /* 0C0A9874 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A9876 mov Rm,Rn */
	W32(r4, r6); UPD(0x0C0A987Au, 2);  /* 0C0A9878 mov.l Rm,@Rn */
	IF(0x0C0A987Au); r0 <<= 2;  /* 0C0A987A shll2 Rn */
	W32(r4 + 0x4u, r1); UPD(0x0C0A987Eu, 2);  /* 0C0A987C mov.l Rm,@(disp,Rn) */
	r5 = 0xC1E6C58u; UPD(0x0C0A9880u, 1);  /* 0C0A987E mov.l @(disp,pc),Rn */
	IF(0x0C0A9880u); r6 = R32(r0 + r5); UPD(0x0C0A9882u, 1);  /* 0C0A9880 mov.l @(r0,Rm),Rn */
	r5 = 0x0u;  /* 0C0A9882 mov #imm,Rn */
	W32(r4 + 0x8u, r6); UPD(0x0C0A9886u, 2);  /* 0C0A9884 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x10u, r5); UPD(0x0C0A9888u, 1);  /* 0C0A9886 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9888u); ARG0(0x463Du); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0A9888 shld Rm,Rn */
	r7 = 0xC1E6ABCu; UPD(0x0C0A988Cu, 2);  /* 0C0A988A mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C0A988Eu, 1);  /* 0C0A988C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0A9890u, 1);  /* 0C0A988E mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x28u); UPD(0x0C0A9892u, 1);  /* 0C0A9890 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0A9894u, 1);  /* 0C0A9892 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9894u); r1 = R32(r0 + r6); UPD(0x0C0A9896u, 1);  /* 0C0A9894 mov.l @(r0,Rm),Rn */
	W32(r4 + 0x18u, r1); UPD(0x0C0A9898u, 1);  /* 0C0A9896 mov.l Rm,@(disp,Rn) */
	r2 = R32(r1); UPD(0x0C0A989Au, 1);  /* 0C0A9898 mov.l @Rm,Rn */
	W32(r4 + 0x1Cu, r2); UPD(0x0C0A989Cu, 1);  /* 0C0A989A mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A989Eu, 1);  /* 0C0A989C mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A98A0u, 1);  /* 0C0A989E mov.l @(disp,pc),Rn */
	W32(r4 + 0x20u, r7); UPD(0x0C0A98A2u, 1);  /* 0C0A98A0 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A98A4u, 1);  /* 0C0A98A2 mov.w @Rm,Rn */
	r4 += 0x4Eu;  /* 0C0A98A4 add #imm,Rn */
	W16(r4, r3); UPD(0x0C0A98A8u, 2);  /* 0C0A98A6 mov.w Rm,@Rn */
	r4 += 0xFFFFFFF6u;  /* 0C0A98A8 add #imm,Rn */
	W16(r4, r5); UPD(0x0C0A98ACu, 2);  /* 0C0A98AA mov.w Rm,@Rn */
	r1 = 0x207C0C0u; UPD(0x0C0A98AEu, 1);  /* 0C0A98AC mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFBCu;  /* 0C0A98AE add #imm,Rn */
	W32(r4 + 0x3Cu, r1); UPD(0x0C0A98B2u, 2);  /* 0C0A98B0 mov.l Rm,@(disp,Rn) */
	r0 = 0x808080u; UPD(0x0C0A98B4u, 1);  /* 0C0A98B2 mov.l @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0A98B4 add #imm,Rn */
	W32(r4, r0); UPD(0x0C0A98B8u, 2);  /* 0C0A98B6 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A98B8 mov Rm,Rn */
	IF(0x0C0A98BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A98BA rts */
}

/* FUN_0c0a98e0 */
void f_0C0A98E0(sh3_t *c)
{
	LOCALS;
L_0C0A98E0: BLKS(0x0C0A98E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98E2u, 1);  /* 0C0A98E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98E4u, 1);  /* 0C0A98E2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0A98E4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98E8u, 2);  /* 0C0A98E6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0A98E8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98ECu, 2);  /* 0C0A98EA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98EEu, 1);  /* 0C0A98EC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98F0u, 1);  /* 0C0A98EE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98F2u, 1);  /* 0C0A98F0 mov.l Rm,@-Rn */
	r10 = 0xC27E0FCu; UPD(0x0C0A98F4u, 1);  /* 0C0A98F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A98F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A98F6u, 1);  /* 0C0A98F4 sts.l pr,@-Rn */
	r13 = 0xC2175E8u; UPD(0x0C0A98F8u, 1);  /* 0C0A98F6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A98F8 mov Rm,Rn */
	r12 = 0xC062A70u; UPD(0x0C0A98FCu, 2);  /* 0C0A98FA mov.l @(disp,pc),Rn */
	r11 = 0xC393044u; UPD(0x0C0A98FEu, 1);  /* 0C0A98FC mov.l @(disp,pc),Rn */
	IF(0x0C0A98FEu); ;  /* 0C0A98FE nop */
	UPD(0x0C0A9900u, 1);
L_0C0A9900: BLKS(0x0C0A9900u);
	r7 = r8;  /* 0C0A9900 mov Rm,Rn */
	r7 += r10;  /* 0C0A9902 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0A9906u, 3);  /* 0C0A9904 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0A9908u, 1);  /* 0C0A9906 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0A9908 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9930u, 4); goto L_0C0A9930; } UPD(0x0C0A990Eu, 1); goto L_0C0A990E; }  /* 0C0A990A bf/s */
L_0C0A990E: BLKS(0x0C0A990Eu);
	r5 = r9;  /* 0C0A990E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0A9910 add #imm,Rn */
	r4 = 0xFFu; UPD(0x0C0A9914u, 3);  /* 0C0A9912 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0A9914 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C0A9916 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9900u, 5); goto L_0C0A9900; } goto L_0C0A991C; }  /* 0C0A9918 bf/s */
L_0C0A991C: BLKS(0x0C0A991Cu);
	r15 = r14;  /* 0C0A991C mov Rm,Rn */
	IF(0x0C0A991Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A9920u, 3);  /* 0C0A991E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9922u, 1);  /* 0C0A9920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A9924u, 1);  /* 0C0A9922 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9926u, 1);  /* 0C0A9924 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9928u, 1);  /* 0C0A9926 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A992Au, 1);  /* 0C0A9928 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A992Cu, 1);  /* 0C0A992A mov.l @Rm+,Rn */
	IF(0x0C0A992Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A992C rts */
L_0C0A9930: BLKS(0x0C0A9930u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C0A9932u, 1);  /* 0C0A9930 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A9932 add #imm,Rn */
	W32(r13, r3); UPD(0x0C0A9936u, 2);  /* 0C0A9934 mov.l Rm,@Rn */
	r2 = R32(r7 + 0x24u); UPD(0x0C0A9938u, 1);  /* 0C0A9936 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0A993Au, 1);  /* 0C0A9938 mov.l Rm,@Rn */
	W32(r11, r2); UPD(0x0C0A993Cu, 1);  /* 0C0A993A mov.l Rm,@Rn */
	r4 = R32(r7 + 0x3Cu); UPD(0x0C0A993Eu, 1);  /* 0C0A993C mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C0A9940u, 1);  /* 0C0A993E mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0A9942u, 1);  /* 0C0A9940 mov.l @(disp,Rm),Rn */
	r7 += 0x40u;  /* 0C0A9942 add #imm,Rn */
	IF(0x0C0A9944u); { u32 t_ = r12; PR = 0x0C0A9948u; r7 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0A9948u); }  /* 0C0A9944 jsr @Rn */
L_0C0A9948: BLKS(0x0C0A9948u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0A990Eu, 3); goto L_0C0A990E; }  /* 0C0A9948 bra */
}

/* FUN_0c0a9a40 */
void f_0C0A9A40(sh3_t *c)
{
	LOCALS;
L_0C0A9A40: BLKS(0x0C0A9A40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A42u, 1);  /* 0C0A9A40 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0A9A42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A46u, 2);  /* 0C0A9A44 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0A9A46 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A4Au, 2);  /* 0C0A9A48 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0A9A4A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A4Eu, 2);  /* 0C0A9A4C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A50u, 1);  /* 0C0A9A4E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A52u, 1);  /* 0C0A9A50 mov.l Rm,@-Rn */
	r0 = 0xC286742u; UPD(0x0C0A9A54u, 1);  /* 0C0A9A52 mov.l @(disp,pc),Rn */
	IF(0x0C0A9A54u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9A56u, 1);  /* 0C0A9A54 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0A9A56 mov Rm,Rn */
	r10 = 0xC27E0FCu; UPD(0x0C0A9A5Au, 2);  /* 0C0A9A58 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9A5A mov Rm,Rn */
	r12 = 0xC1E6B38u; UPD(0x0C0A9A5Eu, 2);  /* 0C0A9A5C mov.l @(disp,pc),Rn */
	W16(r0, r2); UPD(0x0C0A9A60u, 1);  /* 0C0A9A5E mov.w Rm,@Rn */
L_0C0A9A60: BLKS(0x0C0A9A60u);
	r2 = r8;  /* 0C0A9A60 mov Rm,Rn */
	r2 += r10;  /* 0C0A9A62 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0A9A66u, 3);  /* 0C0A9A64 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A9A66 tst Rm,Rn */
	if (!T) { UPD(0x0C0A9A90u, 4); goto L_0C0A9A90; }  /* 0C0A9A68 bf */
L_0C0A9A6A: BLKS(0x0C0A9A6Au);
	r6 = r9;  /* 0C0A9A6A mov Rm,Rn */
	UPD(0x0C0A9A6Cu, 1);
L_0C0A9A6C: BLKS(0x0C0A9A6Cu);
	r6 += 0x1u;  /* 0C0A9A6C add #imm,Rn */
	r5 = 0xFFu; UPD(0x0C0A9A70u, 2);  /* 0C0A9A6E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0A9A70 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C0A9A72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9A60u, 5); goto L_0C0A9A60; } goto L_0C0A9A78; }  /* 0C0A9A74 bf/s */
L_0C0A9A78: BLKS(0x0C0A9A78u);
	r15 = r14;  /* 0C0A9A78 mov Rm,Rn */
	IF(0x0C0A9A7Au); PR = R32(r15); r15 += 4; UPD(0x0C0A9A7Cu, 3);  /* 0C0A9A7A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9A7Eu, 1);  /* 0C0A9A7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9A80u, 1);  /* 0C0A9A7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9A82u, 1);  /* 0C0A9A80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9A84u, 1);  /* 0C0A9A82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9A86u, 1);  /* 0C0A9A84 mov.l @Rm+,Rn */
	IF(0x0C0A9A86u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9A86 rts */
L_0C0A9A90: BLKS(0x0C0A9A90u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0A9A92u, 1);  /* 0C0A9A90 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0A9A94u, 1);  /* 0C0A9A92 mov.w @Rm,Rn */
	IF(0x0C0A9A94u); r0 <<= 2;  /* 0C0A9A94 shll2 Rn */
	r4 += 0x1u;  /* 0C0A9A96 add #imm,Rn */
	IF(0x0C0A9A98u); r3 = R32(r0 + r12); UPD(0x0C0A9A9Au, 3);  /* 0C0A9A98 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C0A9A9Cu, 1);  /* 0C0A9A9A mov.w Rm,@Rn */
	IF(0x0C0A9A9Cu); { u32 t_ = r3; PR = 0x0C0A9AA0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A9AA0u); }  /* 0C0A9A9C jsr @Rn */
L_0C0A9AA0: BLKS(0x0C0A9AA0u);
	{ r6 = r9; /* slot mov Rm,Rn */ UPD(0x0C0A9A6Cu, 3); goto L_0C0A9A6C; }  /* 0C0A9AA0 bra */
}

/* FUN_0c0a9bb0 */
void f_0C0A9BB0(sh3_t *c)
{
	LOCALS;
L_0C0A9BB0: BLKS(0x0C0A9BB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BB2u, 1);  /* 0C0A9BB0 mov.l Rm,@-Rn */
	r0 = 0xFu;  /* 0C0A9BB2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BB6u, 2);  /* 0C0A9BB4 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0A9BB6 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BBAu, 2);  /* 0C0A9BB8 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s8)r6;  /* 0C0A9BBA exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BBEu, 2);  /* 0C0A9BBC mov.l Rm,@-Rn */
	r10 = 0xFFFFFFEBu;  /* 0C0A9BBE mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BC2u, 2);  /* 0C0A9BC0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0A9BC2 mov #imm,Rn */
	r12 = r5;  /* 0C0A9BC4 mov Rm,Rn */
	r5 = 0xFEA00000u; UPD(0x0C0A9BC8u, 3);  /* 0C0A9BC6 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0A9BC8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9BCCu, 2);  /* 0C0A9BCA mov.l Rm,@-Rn */
	r5 += r12;  /* 0C0A9BCC add Rm,Rn */
	IF(0x0C0A9BCEu); r15 -= 4; W32(r15, PR); UPD(0x0C0A9BD0u, 2);  /* 0C0A9BCE sts.l pr,@-Rn */
	IF(0x0C0A9BD0u); ARG0(0x45ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0A9BD0 shad Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0A9BD4u, 2);  /* 0C0A9BD2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9BD4 mov Rm,Rn */
	r11 = 0xC221068u; UPD(0x0C0A9BD8u, 2);  /* 0C0A9BD6 mov.l @(disp,pc),Rn */
	r5 &= r0;  /* 0C0A9BD8 and Rm,Rn */
	r3 = 0x0u;  /* 0C0A9BDA mov #imm,Rn */
	UPD(0x0C0A9BDCu, 2);
L_0C0A9BDC: BLKS(0x0C0A9BDCu);
	r2 = r3;  /* 0C0A9BDC mov Rm,Rn */
	r2 += r9;  /* 0C0A9BDE add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0A9BE2u, 3);  /* 0C0A9BE0 mov.l @Rm,Rn */
	r1 = 0xFFFFFFE3u;  /* 0C0A9BE2 mov #imm,Rn */
	IF(0x0C0A9BE4u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0A9BE4 shad Rm,Rn */
	r2 += 0x42u;  /* 0C0A9BE6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A9BEAu, 4);  /* 0C0A9BE8 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0A9BEA and #imm,r0 */
	r1 = r1 & 0xFF;  /* 0C0A9BEC extu.b Rm,Rn */
	T = (s32)r1 > (s32)r4;  /* 0C0A9BEE cmp/gt Rm,Rn */
	IF(0x0C0A9BF0u); r1 = T;  /* 0C0A9BF0 movt Rn */
	r0 &= r1;  /* 0C0A9BF2 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A9BF4 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9C14u, 9); goto L_0C0A9C14; } goto L_0C0A9BFA; }  /* 0C0A9BF6 bt/s */
L_0C0A9BFA: BLKS(0x0C0A9BFAu);
	r0 = R32(r2 + 0x8u); UPD(0x0C0A9BFCu, 2);  /* 0C0A9BFA mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0A9BFC add Rm,Rn */
	IF(0x0C0A9BFEu); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0A9BFE shad Rm,Rn */
	r0 &= 0xFu;  /* 0C0A9C00 and #imm,r0 */
	r2 = 0x4u;  /* 0C0A9C02 mov #imm,Rn */
	r0 += r6;  /* 0C0A9C04 add Rm,Rn */
	IF(0x0C0A9C06u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A9C06 shld Rm,Rn */
	r0 += r5;  /* 0C0A9C08 add Rm,Rn */
	IF(0x0C0A9C0Au); r0 <<= 2;  /* 0C0A9C0A shll2 Rn */
	IF(0x0C0A9C0Cu); r2 = R32(r0 + r11); UPD(0x0C0A9C0Eu, 9);  /* 0C0A9C0C mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0A9C0E tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9C26u, 4); goto L_0C0A9C26; } UPD(0x0C0A9C14u, 1); goto L_0C0A9C14; }  /* 0C0A9C10 bf/s */
L_0C0A9C14: BLKS(0x0C0A9C14u);
	r2 = r7;  /* 0C0A9C14 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0A9C16 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0A9C18 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0A9C1A mov #imm,Rn */
	r6 += 0x10u;  /* 0C0A9C1C add #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0A9C1E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9BDCu, 9); goto L_0C0A9BDC; } goto L_0C0A9C24; }  /* 0C0A9C20 bf/s */
L_0C0A9C24: BLKS(0x0C0A9C24u);
	r1 = 0x1u;  /* 0C0A9C24 mov #imm,Rn */
	UPD(0x0C0A9C26u, 2);
L_0C0A9C26: BLKS(0x0C0A9C26u);
	r3 = (u32)(s32)(s8)r1;  /* 0C0A9C26 exts.b Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A9C28 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9C7Eu, 5); goto L_0C0A9C7E; } goto L_0C0A9C2E; }  /* 0C0A9C2A bt/s */
L_0C0A9C2E: BLKS(0x0C0A9C2Eu);
	r4 = 0x5FFFFFu; UPD(0x0C0A9C30u, 2);  /* 0C0A9C2E mov.l @(disp,pc),Rn */
	T = (s32)r8 > (s32)r4;  /* 0C0A9C30 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9C7Cu, 4); goto L_0C0A9C7C; } goto L_0C0A9C36; }  /* 0C0A9C32 bf/s */
L_0C0A9C36: BLKS(0x0C0A9C36u);
	r4 = 0xC283794u; UPD(0x0C0A9C38u, 2);  /* 0C0A9C36 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0A9C38 mov #imm,Rn */
	r7 = 0x0u;  /* 0C0A9C3A mov #imm,Rn */
	UPD(0x0C0A9C3Cu, 2);
L_0C0A9C3C: BLKS(0x0C0A9C3Cu);
	r3 = r7;  /* 0C0A9C3C mov Rm,Rn */
	r3 += r4;  /* 0C0A9C3E add Rm,Rn */
	r5 = R32(r3); UPD(0x0C0A9C42u, 3);  /* 0C0A9C40 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A9C42 tst Rm,Rn */
	if (T) { UPD(0x0C0A9C6Au, 4); goto L_0C0A9C6A; }  /* 0C0A9C44 bt */
L_0C0A9C46: BLKS(0x0C0A9C46u);
	r2 = R32(r3 + 0x10u); UPD(0x0C0A9C48u, 1);  /* 0C0A9C46 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0A9C48 mov Rm,Rn */
	r0 -= r2;  /* 0C0A9C4A sub Rm,Rn */
	r1 = (r0 >> 16) | (r0 << 16);  /* 0C0A9C4C swap.w Rm,Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C0A9C50u, 4);  /* 0C0A9C4E mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C0A9C50 exts.w Rm,Rn */
	IF(0x0C0A9C52u); MACL = r5 * r5;  /* 0C0A9C52 mul.l Rm,Rn */
	r10 = r12;  /* 0C0A9C54 mov Rm,Rn */
	r10 -= r11;  /* 0C0A9C56 sub Rm,Rn */
	r3 = (r10 >> 16) | (r10 << 16);  /* 0C0A9C58 swap.w Rm,Rn */
	IF(0x0C0A9C5Au); r9 = MACL;  /* 0C0A9C5A sts macl,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C0A9C5C exts.w Rm,Rn */
	IF(0x0C0A9C5Eu); MACL = r0 * r0;  /* 0C0A9C5E mul.l Rm,Rn */
	r10 = 0x2400u; UPD(0x0C0A9C62u, 11);  /* 0C0A9C60 mov.w @(disp,pc),Rn */
	IF(0x0C0A9C62u); r11 = MACL;  /* 0C0A9C62 sts macl,Rn */
	r9 += r11;  /* 0C0A9C64 add Rm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C0A9C66 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A9C90u, 6); goto L_0C0A9C90; }  /* 0C0A9C68 bt */
L_0C0A9C6A: BLKS(0x0C0A9C6Au);
	r3 = r6;  /* 0C0A9C6A mov Rm,Rn */
	r6 = 0x280u; UPD(0x0C0A9C6Eu, 2);  /* 0C0A9C6C mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0A9C6E add #imm,Rn */
	r7 += r6;  /* 0C0A9C70 add Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0A9C72 exts.w Rm,Rn */
	r5 = 0x1u;  /* 0C0A9C74 mov #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0A9C76 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A9C3Cu, 8); goto L_0C0A9C3C; }  /* 0C0A9C78 bf */
L_0C0A9C7A: BLKS(0x0C0A9C7Au);
	r0 = 0x0u;  /* 0C0A9C7A mov #imm,Rn */
	UPD(0x0C0A9C7Cu, 1);
L_0C0A9C7C: BLKS(0x0C0A9C7Cu);
	r0 ^= 0x1u;  /* 0C0A9C7C xor #imm,r0 */
	UPD(0x0C0A9C7Eu, 1);
L_0C0A9C7E: BLKS(0x0C0A9C7Eu);
	r15 = r14;  /* 0C0A9C7E mov Rm,Rn */
	IF(0x0C0A9C80u); PR = R32(r15); r15 += 4; UPD(0x0C0A9C82u, 2);  /* 0C0A9C80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9C84u, 1);  /* 0C0A9C82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9C86u, 1);  /* 0C0A9C84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9C88u, 1);  /* 0C0A9C86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9C8Au, 1);  /* 0C0A9C88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9C8Cu, 1);  /* 0C0A9C8A mov.l @Rm+,Rn */
	IF(0x0C0A9C8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9C8C rts */
L_0C0A9C90: BLKS(0x0C0A9C90u);
	r8 = 0xC060350u; UPD(0x0C0A9C92u, 1);  /* 0C0A9C90 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C0A9C94u, 1);  /* 0C0A9C92 mov.w @(disp,pc),Rn */
	IF(0x0C0A9C94u); { u32 t_ = r8; PR = 0x0C0A9C98u; IF(0x0C0A9C96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0A9C98u); }  /* 0C0A9C94 jsr @Rn */
L_0C0A9C98: BLKS(0x0C0A9C98u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A9C7Cu, 3); goto L_0C0A9C7C; }  /* 0C0A9C98 bra */
}

/* FUN_0c0a9cc0 */
void f_0C0A9CC0(sh3_t *c)
{
	LOCALS;
L_0C0A9CC0: BLKS(0x0C0A9CC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9CC2u, 1);  /* 0C0A9CC0 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C0A9CC2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9CC6u, 2);  /* 0C0A9CC4 mov.l Rm,@-Rn */
	r0 = 0x5FFFFFu; UPD(0x0C0A9CC8u, 1);  /* 0C0A9CC6 mov.l @(disp,pc),Rn */
	IF(0x0C0A9CC8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9CCAu, 1);  /* 0C0A9CC8 sts.l pr,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0A9CCA cmp/gt Rm,Rn */
	r14 = r15;  /* 0C0A9CCC mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9D1Au, 5); goto L_0C0A9D1A; } goto L_0C0A9CD2; }  /* 0C0A9CCE bf/s */
L_0C0A9CD2: BLKS(0x0C0A9CD2u);
	r8 = 0xC283794u; UPD(0x0C0A9CD4u, 2);  /* 0C0A9CD2 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0A9CD4 mov #imm,Rn */
	r7 = 0x0u;  /* 0C0A9CD6 mov #imm,Rn */
	UPD(0x0C0A9CD8u, 2);
L_0C0A9CD8: BLKS(0x0C0A9CD8u);
	r3 = r7;  /* 0C0A9CD8 mov Rm,Rn */
	r3 += r8;  /* 0C0A9CDA add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0A9CDEu, 3);  /* 0C0A9CDC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A9CDE tst Rm,Rn */
	if (T) { UPD(0x0C0A9D08u, 4); goto L_0C0A9D08; }  /* 0C0A9CE0 bt */
L_0C0A9CE2: BLKS(0x0C0A9CE2u);
	r1 = R32(r3 + 0x10u); UPD(0x0C0A9CE4u, 1);  /* 0C0A9CE2 mov.l @(disp,Rm),Rn */
	r2 = r4;  /* 0C0A9CE4 mov Rm,Rn */
	r2 -= r1;  /* 0C0A9CE6 sub Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0A9CE8 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C0A9CEA exts.w Rm,Rn */
	r1 = R32(r3 + 0x14u); UPD(0x0C0A9CEEu, 5);  /* 0C0A9CEC mov.l @(disp,Rm),Rn */
	MACL = (u32)((s32)(s16)r6 * (s32)(s16)r6);  /* 0C0A9CEE muls.w Rm,Rn */
	r3 = r5;  /* 0C0A9CF0 mov Rm,Rn */
	r3 -= r1;  /* 0C0A9CF2 sub Rm,Rn */
	r3 = (r3 >> 16) | (r3 << 16);  /* 0C0A9CF4 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C0A9CF6 exts.w Rm,Rn */
	IF(0x0C0A9CF8u); r3 = MACL;  /* 0C0A9CF8 sts macl,Rn */
	IF(0x0C0A9CFAu); MACL = r2 * r2;  /* 0C0A9CFA mul.l Rm,Rn */
	IF(0x0C0A9CFCu); r2 = MACL;  /* 0C0A9CFC sts macl,Rn */
	IF(0x0C0A9CFEu); MACL = r1 * r1;  /* 0C0A9CFE mul.l Rm,Rn */
	IF(0x0C0A9D00u); r1 = MACL;  /* 0C0A9D00 sts macl,Rn */
	r2 += r1;  /* 0C0A9D02 add Rm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C0A9D04 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A9D30u, 18); goto L_0C0A9D30; }  /* 0C0A9D06 bt */
L_0C0A9D08: BLKS(0x0C0A9D08u);
	r3 = r0;  /* 0C0A9D08 mov Rm,Rn */
	r0 = 0x280u; UPD(0x0C0A9D0Cu, 2);  /* 0C0A9D0A mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0A9D0C add #imm,Rn */
	r7 += r0;  /* 0C0A9D0E add Rm,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C0A9D10 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C0A9D12 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0A9D14 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A9CD8u, 8); goto L_0C0A9CD8; }  /* 0C0A9D16 bf */
L_0C0A9D18: BLKS(0x0C0A9D18u);
	r0 = 0x0u;  /* 0C0A9D18 mov #imm,Rn */
	UPD(0x0C0A9D1Au, 1);
L_0C0A9D1A: BLKS(0x0C0A9D1Au);
	r15 = r14;  /* 0C0A9D1A mov Rm,Rn */
	IF(0x0C0A9D1Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A9D1Eu, 2);  /* 0C0A9D1C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9D20u, 1);  /* 0C0A9D1E mov.l @Rm+,Rn */
	IF(0x0C0A9D20u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9D20 rts */
L_0C0A9D30: BLKS(0x0C0A9D30u);
	r8 = 0xC060350u; UPD(0x0C0A9D32u, 1);  /* 0C0A9D30 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C0A9D34u, 1);  /* 0C0A9D32 mov.w @(disp,pc),Rn */
	IF(0x0C0A9D34u); { u32 t_ = r8; PR = 0x0C0A9D38u; IF(0x0C0A9D36u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0A9D38u); }  /* 0C0A9D34 jsr @Rn */
L_0C0A9D38: BLKS(0x0C0A9D38u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A9D1Au, 3); goto L_0C0A9D1A; }  /* 0C0A9D38 bra */
}

/* FUN_0c0a9d50 */
void f_0C0A9D50(sh3_t *c)
{
	LOCALS;
L_0C0A9D50: BLKS(0x0C0A9D50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D52u, 1);  /* 0C0A9D50 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0A9D52 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D56u, 2);  /* 0C0A9D54 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0A9D56 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D5Au, 2);  /* 0C0A9D58 mov.l Rm,@-Rn */
	r4 = r5;  /* 0C0A9D5A mov Rm,Rn */
	r0 = 0xFEA00000u; UPD(0x0C0A9D5Eu, 2);  /* 0C0A9D5C mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFEBu;  /* 0C0A9D5E mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D62u, 2);  /* 0C0A9D60 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C0A9D62 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D66u, 2);  /* 0C0A9D64 mov.l Rm,@-Rn */
	IF(0x0C0A9D66u); ARG0(0x44ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0A9D66 shad Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0A9D6Au, 2);  /* 0C0A9D68 mov.l @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C0A9D6A mov #imm,Rn */
	r11 = 0xC221068u; UPD(0x0C0A9D6Eu, 2);  /* 0C0A9D6C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9D6E mov Rm,Rn */
	r7 = 0x0u;  /* 0C0A9D70 mov #imm,Rn */
	r4 &= r0;  /* 0C0A9D72 and Rm,Rn */
	r5 = 0x0u;  /* 0C0A9D74 mov #imm,Rn */
	r3 = 0x0u;  /* 0C0A9D76 mov #imm,Rn */
	UPD(0x0C0A9D78u, 5);
L_0C0A9D78: BLKS(0x0C0A9D78u);
	r2 = r3;  /* 0C0A9D78 mov Rm,Rn */
	r2 += r9;  /* 0C0A9D7A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0A9D7Eu, 3);  /* 0C0A9D7C mov.l @Rm,Rn */
	r1 = 0xFFFFFFE3u;  /* 0C0A9D7E mov #imm,Rn */
	IF(0x0C0A9D80u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0A9D80 shad Rm,Rn */
	r2 += 0x42u;  /* 0C0A9D82 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A9D86u, 4);  /* 0C0A9D84 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0A9D86 and #imm,r0 */
	r1 = r1 & 0xFF;  /* 0C0A9D88 extu.b Rm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C0A9D8A cmp/gt Rm,Rn */
	IF(0x0C0A9D8Cu); r1 = T;  /* 0C0A9D8C movt Rn */
	r0 &= r1;  /* 0C0A9D8E and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A9D90 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9DB0u, 9); goto L_0C0A9DB0; } goto L_0C0A9D96; }  /* 0C0A9D92 bt/s */
L_0C0A9D96: BLKS(0x0C0A9D96u);
	r0 = R32(r2 + 0x8u); UPD(0x0C0A9D98u, 2);  /* 0C0A9D96 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0A9D98 add Rm,Rn */
	IF(0x0C0A9D9Au); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0A9D9A shad Rm,Rn */
	r0 &= 0xFu;  /* 0C0A9D9C and #imm,r0 */
	r2 = 0x4u;  /* 0C0A9D9E mov #imm,Rn */
	r0 += r5;  /* 0C0A9DA0 add Rm,Rn */
	IF(0x0C0A9DA2u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A9DA2 shld Rm,Rn */
	r0 += r4;  /* 0C0A9DA4 add Rm,Rn */
	IF(0x0C0A9DA6u); r0 <<= 2;  /* 0C0A9DA6 shll2 Rn */
	IF(0x0C0A9DA8u); r2 = R32(r0 + r11); UPD(0x0C0A9DAAu, 9);  /* 0C0A9DA8 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0A9DAA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9DC2u, 4); goto L_0C0A9DC2; } UPD(0x0C0A9DB0u, 1); goto L_0C0A9DB0; }  /* 0C0A9DAC bf/s */
L_0C0A9DB0: BLKS(0x0C0A9DB0u);
	r2 = r7;  /* 0C0A9DB0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0A9DB2 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0A9DB4 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0A9DB6 mov #imm,Rn */
	r5 += 0x10u;  /* 0C0A9DB8 add #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0A9DBA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9D78u, 9); goto L_0C0A9D78; } goto L_0C0A9DC0; }  /* 0C0A9DBC bf/s */
L_0C0A9DC0: BLKS(0x0C0A9DC0u);
	r0 = 0x1u;  /* 0C0A9DC0 mov #imm,Rn */
	UPD(0x0C0A9DC2u, 2);
L_0C0A9DC2: BLKS(0x0C0A9DC2u);
	r15 = r14;  /* 0C0A9DC2 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9DC6u, 2);  /* 0C0A9DC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9DC8u, 1);  /* 0C0A9DC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9DCAu, 1);  /* 0C0A9DC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9DCCu, 1);  /* 0C0A9DCA mov.l @Rm+,Rn */
	IF(0x0C0A9DCCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9DCC rts */
}

/* FUN_0c0a9de0 */
void f_0C0A9DE0(sh3_t *c)
{
	LOCALS;
L_0C0A9DE0: BLKS(0x0C0A9DE0u);
	r0 = 0xFF580000u; UPD(0x0C0A9DE2u, 1);  /* 0C0A9DE0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DE4u, 1);  /* 0C0A9DE2 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C0A9DE4 add Rm,Rn */
	IF(0x0C0A9DE6u); T = (s32)r4 >= 0;  /* 0C0A9DE6 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9E20u, 5); goto L_0C0A9E20; } UPD(0x0C0A9DECu, 1); goto L_0C0A9DEC; }  /* 0C0A9DE8 bf/s */
L_0C0A9DEC: BLKS(0x0C0A9DECu);
	r0 = 0x980000u; UPD(0x0C0A9DEEu, 1);  /* 0C0A9DEC mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0A9DEE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9E0Au, 4); goto L_0C0A9E0A; } goto L_0C0A9DF4; }  /* 0C0A9DF0 bt/s */
L_0C0A9DF4: BLKS(0x0C0A9DF4u);
	r4 = 0xC3929E0u; UPD(0x0C0A9DF6u, 2);  /* 0C0A9DF4 mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C0A9DF8u, 1);  /* 0C0A9DF6 mov.l @Rm,Rn */
	r2 = 0xFF880000u; UPD(0x0C0A9DFAu, 1);  /* 0C0A9DF8 mov.l @(disp,pc),Rn */
	r5 -= r3;  /* 0C0A9DFA sub Rm,Rn */
	r5 += r2;  /* 0C0A9DFC add Rm,Rn */
	IF(0x0C0A9DFEu); T = (s32)r5 >= 0;  /* 0C0A9DFE cmp/pz Rn */
	if (!T) { UPD(0x0C0A9E10u, 6); goto L_0C0A9E10; }  /* 0C0A9E00 bf */
L_0C0A9E02: BLKS(0x0C0A9E02u);
	r6 = 0x700000u; UPD(0x0C0A9E04u, 1);  /* 0C0A9E02 mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r6;  /* 0C0A9E04 cmp/gt Rm,Rn */
	IF(0x0C0A9E06u); r0 = T;  /* 0C0A9E06 movt Rn */
	r0 ^= 0x1u;  /* 0C0A9E08 xor #imm,r0 */
	UPD(0x0C0A9E0Au, 3);
L_0C0A9E0A: BLKS(0x0C0A9E0Au);
	r15 = r14;  /* 0C0A9E0A mov Rm,Rn */
	IF(0x0C0A9E0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9E0C rts */
L_0C0A9E10: BLKS(0x0C0A9E10u);
	{ r5 = 0u - r5; /* slot neg Rm,Rn */ UPD(0x0C0A9E02u, 3); goto L_0C0A9E02; }  /* 0C0A9E10 bra */
L_0C0A9E20: BLKS(0x0C0A9E20u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C0A9DECu, 3); goto L_0C0A9DEC; }  /* 0C0A9E20 bra */
}

/* FUN_0c0a9e40 */
void f_0C0A9E40(sh3_t *c)
{
	LOCALS;
L_0C0A9E40: BLKS(0x0C0A9E40u);
	r2 = 0xB4u; UPD(0x0C0A9E42u, 1);  /* 0C0A9E40 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0A9E42 exts.w Rm,Rn */
	IF(0x0C0A9E44u); MACL = r3 * r2;  /* 0C0A9E44 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A9E48u, 4);  /* 0C0A9E46 mov.l @(disp,pc),Rn */
	r5 = r5 & 0xFFFF;  /* 0C0A9E48 extu.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9E4Cu, 2);  /* 0C0A9E4A mov.l Rm,@-Rn */
	IF(0x0C0A9E4Cu); r3 = MACL;  /* 0C0A9E4C sts macl,Rn */
	r3 += r0;  /* 0C0A9E4E add Rm,Rn */
	r0 = 0x100u; UPD(0x0C0A9E52u, 3);  /* 0C0A9E50 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9E52 mov Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A9E56u, 2);  /* 0C0A9E54 mov.l @Rm,Rn */
	r6 = r6 & 0xFFFF;  /* 0C0A9E56 extu.w Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C0A9E58 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9E84u, 5); goto L_0C0A9E84; } goto L_0C0A9E5E; }  /* 0C0A9E5A bt/s */
L_0C0A9E5E: BLKS(0x0C0A9E5Eu);
	r7 = 0x9Bu; UPD(0x0C0A9E60u, 2);  /* 0C0A9E5E mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0A9E60 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A9E64u, 2);  /* 0C0A9E62 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0A9E64 add #imm,Rn */
	W8(r7, r1); UPD(0x0C0A9E68u, 2);  /* 0C0A9E66 mov.b Rm,@Rn */
	r4 = r1 & 0xFF;  /* 0C0A9E68 extu.b Rm,Rn */
	r3 = 0xC27DFF8u; UPD(0x0C0A9E6Cu, 2);  /* 0C0A9E6A mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C0A9E6Eu, 1);  /* 0C0A9E6C mov.l @Rm,Rn */
	IF(0x0C0A9E6Eu); r0 >>= 16;  /* 0C0A9E6E shlr16 Rn */
	IF(0x0C0A9E70u); MACL = r5 * r0;  /* 0C0A9E70 mul.l Rm,Rn */
	IF(0x0C0A9E72u); r5 = MACL;  /* 0C0A9E72 sts macl,Rn */
	IF(0x0C0A9E74u); r5 >>= 8;  /* 0C0A9E74 shlr8 Rn */
	r6 += r5;  /* 0C0A9E76 add Rm,Rn */
	T = r4 >= r6;  /* 0C0A9E78 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9E84u, 10); goto L_0C0A9E84; } goto L_0C0A9E7E; }  /* 0C0A9E7A bf/s */
L_0C0A9E7E: BLKS(0x0C0A9E7Eu);
	r6 = 0x0u;  /* 0C0A9E7E mov #imm,Rn */
	W8(r7, r6); UPD(0x0C0A9E82u, 3);  /* 0C0A9E80 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0A9E82 mov #imm,Rn */
	UPD(0x0C0A9E84u, 1);
L_0C0A9E84: BLKS(0x0C0A9E84u);
	r15 = r14;  /* 0C0A9E84 mov Rm,Rn */
	IF(0x0C0A9E86u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9E86 rts */
}

/* FUN_0c0a9ea0 */
void f_0C0A9EA0(sh3_t *c)
{
	LOCALS;
L_0C0A9EA0: BLKS(0x0C0A9EA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EA2u, 1);  /* 0C0A9EA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EA4u, 1);  /* 0C0A9EA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EA6u, 1);  /* 0C0A9EA4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0A9EA6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EAAu, 2);  /* 0C0A9EA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EACu, 1);  /* 0C0A9EAA mov.l Rm,@-Rn */
	r11 = 0x54u;  /* 0C0A9EAC mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9EB0u, 2);  /* 0C0A9EAE mov.l Rm,@-Rn */
	IF(0x0C0A9EB0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9EB2u, 1);  /* 0C0A9EB0 sts.l pr,@-Rn */
	r12 = 0xC27E0FCu; UPD(0x0C0A9EB4u, 1);  /* 0C0A9EB2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9EB4 mov Rm,Rn */
	r10 = 0xC0A95D0u; UPD(0x0C0A9EB8u, 2);  /* 0C0A9EB6 mov.l @(disp,pc),Rn */
L_0C0A9EB8: BLKS(0x0C0A9EB8u);
	IF(0x0C0A9EB8u); MACL = r9 * r11;  /* 0C0A9EB8 mul.l Rm,Rn */
	r0 = 0x4000u; UPD(0x0C0A9EBCu, 3);  /* 0C0A9EBA mov.w @(disp,pc),Rn */
	IF(0x0C0A9EBCu); r8 = MACL;  /* 0C0A9EBC sts macl,Rn */
	r8 += r12;  /* 0C0A9EBE add Rm,Rn */
	r2 = R32(r8); UPD(0x0C0A9EC2u, 3);  /* 0C0A9EC0 mov.l @Rm,Rn */
	r2 &= r0;  /* 0C0A9EC2 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A9EC4 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0A9EC8u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0A9F00u, 5); goto L_0C0A9F00; } goto L_0C0A9ECA; }  /* 0C0A9EC6 bt/s */
L_0C0A9ECA: BLKS(0x0C0A9ECAu);
	IF(0x0C0A9ECAu); { u32 t_ = r10; PR = 0x0C0A9ECEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A95D0, 0x0C0A95D0u, 0x0C0A9ECEu); }  /* 0C0A9ECA jsr @Rn */
L_0C0A9ECE: BLKS(0x0C0A9ECEu);
	IF(0x0C0A9ECEu); T = (s32)r0 >= 0;  /* 0C0A9ECE cmp/pz Rn */
	if (!T) { UPD(0x0C0A9EE0u, 4); goto L_0C0A9EE0; }  /* 0C0A9ED0 bf */
L_0C0A9ED2: BLKS(0x0C0A9ED2u);
	r8 += 0x4Cu;  /* 0C0A9ED2 add #imm,Rn */
	{ r9 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(0x0C0A9EB8u, 4); goto L_0C0A9EB8; }  /* 0C0A9ED4 bra */
L_0C0A9EE0: BLKS(0x0C0A9EE0u);
	r0 = 0x0u;  /* 0C0A9EE0 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0A9EE4u, 2);  /* 0C0A9EE2 mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C0A9EE4 mov #imm,Rn */
	UPD(0x0C0A9EE6u, 1);
L_0C0A9EE6: BLKS(0x0C0A9EE6u);
	r15 = r14;  /* 0C0A9EE6 mov Rm,Rn */
	IF(0x0C0A9EE8u); PR = R32(r15); r15 += 4; UPD(0x0C0A9EEAu, 2);  /* 0C0A9EE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9EECu, 1);  /* 0C0A9EEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9EEEu, 1);  /* 0C0A9EEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9EF0u, 1);  /* 0C0A9EEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9EF2u, 1);  /* 0C0A9EF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9EF4u, 1);  /* 0C0A9EF2 mov.l @Rm+,Rn */
	IF(0x0C0A9EF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9EF4 rts */
L_0C0A9F00: BLKS(0x0C0A9F00u);
	r15 += 0xFFFFFFF8u;  /* 0C0A9F00 add #imm,Rn */
	r10 = 0xC27E0FCu; UPD(0x0C0A9F04u, 2);  /* 0C0A9F02 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0A9F04 mov #imm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C0A9F08u, 2);  /* 0C0A9F06 mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C0A9F08 add Rm,Rn */
	W32(r15, r2); UPD(0x0C0A9F0Cu, 2);  /* 0C0A9F0A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C0A9F0C mov #imm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A9F10u, 2);  /* 0C0A9F0E mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x28u); UPD(0x0C0A9F12u, 1);  /* 0C0A9F10 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9F12u); { u32 t_ = r8; PR = 0x0C0A9F16u; r6 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C0A9F16u); }  /* 0C0A9F12 jsr @Rn */
L_0C0A9F16: BLKS(0x0C0A9F16u);
	r0 = R32(r10 + 0x4u); UPD(0x0C0A9F18u, 1);  /* 0C0A9F16 mov.l @(disp,Rm),Rn */
	r15 += 0x8u;  /* 0C0A9F18 add #imm,Rn */
	r3 = 0xC1E6C18u; UPD(0x0C0A9F1Cu, 2);  /* 0C0A9F1A mov.l @(disp,pc),Rn */
	IF(0x0C0A9F1Cu); r0 <<= 2;  /* 0C0A9F1C shll2 Rn */
	IF(0x0C0A9F1Eu); r2 = R32(r0 + r3); UPD(0x0C0A9F20u, 2);  /* 0C0A9F1E mov.l @(r0,Rm),Rn */
	IF(0x0C0A9F20u); { u32 t_ = r2; PR = 0x0C0A9F24u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A9F24u); }  /* 0C0A9F20 jsr @Rn */
L_0C0A9F24: BLKS(0x0C0A9F24u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A9EE6u, 3); goto L_0C0A9EE6; }  /* 0C0A9F24 bra */
}

void f_0C0A9F40(sh3_t *c)
{
	LOCALS;
L_0C0A9F40: BLKS(0x0C0A9F40u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A9F40 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A9F42 mov #imm,Rn */
	IF(0x0C0A9F44u); MACL = r2 * r0;  /* 0C0A9F44 mul.l Rm,Rn */
	r5 = 0xC27E0FCu; UPD(0x0C0A9F48u, 5);  /* 0C0A9F46 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C0A9F48 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9F4Cu, 2);  /* 0C0A9F4A mov.l Rm,@-Rn */
	IF(0x0C0A9F4Cu); r0 = MACL;  /* 0C0A9F4C sts macl,Rn */
	r0 += r5;  /* 0C0A9F4E add Rm,Rn */
	W32(r0 + 0x4u, r4); UPD(0x0C0A9F52u, 3);  /* 0C0A9F50 mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C0A9F52 mov Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C0A9F56u, 2);  /* 0C0A9F54 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A9F56 mov #imm,Rn */
	W32(r0, r1); UPD(0x0C0A9F5Au, 2);  /* 0C0A9F58 mov.l Rm,@Rn */
	W32(r0 + 0x10u, r4); UPD(0x0C0A9F5Cu, 1);  /* 0C0A9F5A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r4); UPD(0x0C0A9F5Eu, 1);  /* 0C0A9F5C mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A9F60u, 1);  /* 0C0A9F5E mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A9F62u, 1);  /* 0C0A9F60 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A9F64u, 1);  /* 0C0A9F62 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A9F66u, 1);  /* 0C0A9F64 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A9F68u, 1);  /* 0C0A9F66 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6); UPD(0x0C0A9F6Au, 1);  /* 0C0A9F68 mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A9F6Cu, 1);  /* 0C0A9F6A mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A9F6Eu, 1);  /* 0C0A9F6C mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A9F70u, 1);  /* 0C0A9F6E mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A9F72u, 1);  /* 0C0A9F70 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A9F74u, 1);  /* 0C0A9F72 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A9F76u, 1);  /* 0C0A9F74 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A9F78u, 1);  /* 0C0A9F76 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A9F78 add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A9F7Cu, 2);  /* 0C0A9F7A mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A9F7C add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9F80u, 2);  /* 0C0A9F7E mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A9F82u, 1);  /* 0C0A9F80 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A9F82 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A9F86u, 2);  /* 0C0A9F84 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A9F88u, 1);  /* 0C0A9F86 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A9F88 add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A9F8Cu, 2);  /* 0C0A9F8A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9F8C mov Rm,Rn */
	IF(0x0C0A9F8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9F8E rts */
}

void f_0C0A9FB0(sh3_t *c)
{
	LOCALS;
L_0C0A9FB0: BLKS(0x0C0A9FB0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A9FB0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A9FB2 mov #imm,Rn */
	IF(0x0C0A9FB4u); MACL = r2 * r0;  /* 0C0A9FB4 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A9FB8u, 5);  /* 0C0A9FB6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A9FB8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9FBCu, 2);  /* 0C0A9FBA mov.l Rm,@-Rn */
	IF(0x0C0A9FBCu); r0 = MACL;  /* 0C0A9FBC sts macl,Rn */
	r0 += r6;  /* 0C0A9FBE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A9FC2u, 3);  /* 0C0A9FC0 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A9FC2 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A9FC6u, 2);  /* 0C0A9FC4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A9FC6 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A9FCAu, 2);  /* 0C0A9FC8 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A9FCA mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A9FCEu, 2);  /* 0C0A9FCC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A9FD0u, 1);  /* 0C0A9FCE mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A9FD2u, 1);  /* 0C0A9FD0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A9FD4u, 1);  /* 0C0A9FD2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A9FD6u, 1);  /* 0C0A9FD4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A9FD8u, 1);  /* 0C0A9FD6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A9FDAu, 1);  /* 0C0A9FD8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0A9FDCu, 1);  /* 0C0A9FDA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A9FDEu, 1);  /* 0C0A9FDC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A9FE0u, 1);  /* 0C0A9FDE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A9FE2u, 1);  /* 0C0A9FE0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A9FE4u, 1);  /* 0C0A9FE2 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A9FE6u, 1);  /* 0C0A9FE4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A9FE8u, 1);  /* 0C0A9FE6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A9FEAu, 1);  /* 0C0A9FE8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A9FEA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A9FEEu, 2);  /* 0C0A9FEC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A9FEE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9FF2u, 2);  /* 0C0A9FF0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A9FF4u, 1);  /* 0C0A9FF2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A9FF4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A9FF8u, 2);  /* 0C0A9FF6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A9FFAu, 1);  /* 0C0A9FF8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A9FFA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A9FFEu, 2);  /* 0C0A9FFC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9FFE mov Rm,Rn */
	IF(0x0C0AA000u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA000 rts */
}

void f_0C0AA020(sh3_t *c)
{
	LOCALS;
L_0C0AA020: BLKS(0x0C0AA020u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA020 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C0AA022 mov #imm,Rn */
	IF(0x0C0AA024u); MACL = r4 * r2;  /* 0C0AA024 mul.l Rm,Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0AA028u, 5);  /* 0C0AA026 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA02Au, 1);  /* 0C0AA028 mov.l Rm,@-Rn */
	IF(0x0C0AA02Au); r7 = MACL;  /* 0C0AA02A sts macl,Rn */
	r7 += r0;  /* 0C0AA02C add Rm,Rn */
	r6 = R32(r7 + 0x10u); UPD(0x0C0AA030u, 3);  /* 0C0AA02E mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C0AA030 mov #imm,Rn */
	T = (s32)r6 > (s32)r0;  /* 0C0AA032 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA044u, 5); goto L_0C0AA044; } goto L_0C0AA038; }  /* 0C0AA034 bf/s */
L_0C0AA038: BLKS(0x0C0AA038u);
	r5 = r7;  /* 0C0AA038 mov Rm,Rn */
	r5 += 0x40u;  /* 0C0AA03A add #imm,Rn */
	r1 = R32(r5); UPD(0x0C0AA03Eu, 4);  /* 0C0AA03C mov.l @Rm,Rn */
	r0 = 0xFFF8F8F9u; UPD(0x0C0AA040u, 1);  /* 0C0AA03E mov.l @(disp,pc),Rn */
	r1 += r0;  /* 0C0AA040 add Rm,Rn */
	W32(r5, r1); UPD(0x0C0AA044u, 2);  /* 0C0AA042 mov.l Rm,@Rn */
L_0C0AA044: BLKS(0x0C0AA044u);
	r2 = r7;  /* 0C0AA044 mov Rm,Rn */
	r2 += 0x44u;  /* 0C0AA046 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AA04Au, 3);  /* 0C0AA048 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C0AA04A add #imm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C0AA04C extu.w Rm,Rn */
	T = r0 == 0x2u;  /* 0C0AA04E cmp/eq #imm,r0 */
	{ u32 c_ = T; W16(r2, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0AA060u, 6); goto L_0C0AA060; } UPD(0x0C0AA054u, 1); goto L_0C0AA054; }  /* 0C0AA050 bt/s */
L_0C0AA054: BLKS(0x0C0AA054u);
	r15 = r14;  /* 0C0AA054 mov Rm,Rn */
	IF(0x0C0AA056u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA056 rts */
L_0C0AA060: BLKS(0x0C0AA060u);
	r0 = r6;  /* 0C0AA060 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AA062 add #imm,Rn */
	r5 = 0x0u;  /* 0C0AA064 mov #imm,Rn */
	W16(r2, r5); UPD(0x0C0AA068u, 4);  /* 0C0AA066 mov.w Rm,@Rn */
	T = r0 == 0x10u;  /* 0C0AA068 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r7 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA080u, 4); goto L_0C0AA080; } UPD(0x0C0AA06Eu, 1); goto L_0C0AA06E; }  /* 0C0AA06A bt/s */
L_0C0AA06E: BLKS(0x0C0AA06Eu);
	r7 = 0xC0A7A80u; UPD(0x0C0AA070u, 1);  /* 0C0AA06E mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AA070 mov Rm,Rn */
	IF(0x0C0AA072u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A7A80u: TAIL(f_0C0A7A80); default: JUMPD(tv_); } }  /* 0C0AA072 jmp @Rn */
L_0C0AA080: BLKS(0x0C0AA080u);
	r6 = 0x0u;  /* 0C0AA080 mov #imm,Rn */
	{ W32(r7, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0AA06Eu, 4); goto L_0C0AA06E; }  /* 0C0AA082 bra */
}

void f_0C0AA0A0(sh3_t *c)
{
	LOCALS;
L_0C0AA0A0: BLKS(0x0C0AA0A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA0A2u, 1);  /* 0C0AA0A0 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0AA0A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA0A6u, 2);  /* 0C0AA0A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA0A8u, 1);  /* 0C0AA0A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA0AAu, 1);  /* 0C0AA0A8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA0ACu, 1);  /* 0C0AA0AA mov.l Rm,@-Rn */
	r8 = 0xC0AA550u; UPD(0x0C0AA0AEu, 1);  /* 0C0AA0AC mov.l @(disp,pc),Rn */
	IF(0x0C0AA0AEu); r15 -= 4; W32(r15, PR); UPD(0x0C0AA0B0u, 1);  /* 0C0AA0AE sts.l pr,@-Rn */
	IF(0x0C0AA0B0u); { u32 t_ = r8; PR = 0x0C0AA0B4u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AA0B4u); }  /* 0C0AA0B0 jsr @Rn */
L_0C0AA0B4: BLKS(0x0C0AA0B4u);
	T = (r0 & r0) == 0;  /* 0C0AA0B4 tst Rm,Rn */
	if (!T) { UPD(0x0C0AA0D0u, 4); goto L_0C0AA0D0; }  /* 0C0AA0B6 bf */
L_0C0AA0B8: BLKS(0x0C0AA0B8u);
	r0 = 0x1u;  /* 0C0AA0B8 mov #imm,Rn */
	r15 = r14;  /* 0C0AA0BA mov Rm,Rn */
	IF(0x0C0AA0BCu); PR = R32(r15); r15 += 4; UPD(0x0C0AA0BEu, 3);  /* 0C0AA0BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA0C0u, 1);  /* 0C0AA0BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AA0C2u, 1);  /* 0C0AA0C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA0C4u, 1);  /* 0C0AA0C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA0C6u, 1);  /* 0C0AA0C4 mov.l @Rm+,Rn */
	IF(0x0C0AA0C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA0C6 rts */
L_0C0AA0D0: BLKS(0x0C0AA0D0u);
	r9 = 0xC2755BCu; UPD(0x0C0AA0D2u, 1);  /* 0C0AA0D0 mov.l @(disp,pc),Rn */
	r8 = 0x38u;  /* 0C0AA0D2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AA0D6u, 2);  /* 0C0AA0D4 mov.w @Rm,Rn */
	r10 = 0x1Du;  /* 0C0AA0D6 mov #imm,Rn */
	IF(0x0C0AA0D8u); MACL = r4 * r8;  /* 0C0AA0D8 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA0DCu, 4);  /* 0C0AA0DA mov.l @(disp,pc),Rn */
	IF(0x0C0AA0DCu); r8 = MACL;  /* 0C0AA0DC sts macl,Rn */
	r11 = 0xC0000000u; UPD(0x0C0AA0E0u, 2);  /* 0C0AA0DE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0AA0E0 add Rm,Rn */
	W32(r8, r11); UPD(0x0C0AA0E4u, 2);  /* 0C0AA0E2 mov.l Rm,@Rn */
	r11 = 0xC050D70u; UPD(0x0C0AA0E6u, 1);  /* 0C0AA0E4 mov.l @(disp,pc),Rn */
	IF(0x0C0AA0E6u); { u32 t_ = r11; PR = 0x0C0AA0EAu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA0EAu); }  /* 0C0AA0E6 jsr @Rn */
L_0C0AA0EA: BLKS(0x0C0AA0EAu);
	W32(r8 + 0x4u, r10); UPD(0x0C0AA0ECu, 1);  /* 0C0AA0EA mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0AA0EC add #imm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0AA0F0u, 2);  /* 0C0AA0EE mov.l Rm,@(disp,Rn) */
	IF(0x0C0AA0F0u); { u32 t_ = r11; PR = 0x0C0AA0F4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA0F4u); }  /* 0C0AA0F0 jsr @Rn */
L_0C0AA0F4: BLKS(0x0C0AA0F4u);
	r10 = (u32)(s32)(s16)r0;  /* 0C0AA0F4 exts.w Rm,Rn */
	r9 = r10;  /* 0C0AA0F6 mov Rm,Rn */
	r3 = 0xC1ECCF8u; UPD(0x0C0AA0FAu, 3);  /* 0C0AA0F8 mov.l @(disp,pc),Rn */
	IF(0x0C0AA0FAu); r9 <<= 2;  /* 0C0AA0FA shll2 Rn */
	r0 = r9;  /* 0C0AA0FC mov Rm,Rn */
	IF(0x0C0AA0FEu); r2 = R32(r0 + r3); UPD(0x0C0AA100u, 3);  /* 0C0AA0FE mov.l @(r0,Rm),Rn */
	r0 = R32(r8 + 0x20u); UPD(0x0C0AA102u, 1);  /* 0C0AA100 mov.l @(disp,Rm),Rn */
	r0 += 0x8u;  /* 0C0AA102 add #imm,Rn */
	IF(0x0C0AA104u); r0 >>= 2;  /* 0C0AA104 shlr2 Rn */
	r7 = 0xFFF80000u; UPD(0x0C0AA108u, 3);  /* 0C0AA106 mov.l @(disp,pc),Rn */
	IF(0x0C0AA108u); r0 >>= 2;  /* 0C0AA108 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0AA10A and #imm,r0 */
	W32(r8 + 0x8u, r2); UPD(0x0C0AA10Eu, 3);  /* 0C0AA10C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r7); UPD(0x0C0AA110u, 1);  /* 0C0AA10E mov.l Rm,@(disp,Rn) */
	r4 = 0x140u; UPD(0x0C0AA112u, 1);  /* 0C0AA110 mov.w @(disp,pc),Rn */
	IF(0x0C0AA112u); { u32 t_ = r11; PR = 0x0C0AA116u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA116u); }  /* 0C0AA112 jsr @Rn */
L_0C0AA116: BLKS(0x0C0AA116u);
	r6 = 0x160u; UPD(0x0C0AA118u, 1);  /* 0C0AA116 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0AA118 add Rm,Rn */
	IF(0x0C0AA11Au); r0 <<= 16;  /* 0C0AA11A shll16 Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0AA11Eu, 3);  /* 0C0AA11C mov.l Rm,@(disp,Rn) */
	r5 = 0xC1ECD08u; UPD(0x0C0AA120u, 1);  /* 0C0AA11E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0AA120 mov Rm,Rn */
	IF(0x0C0AA122u); r9 = R32(r0 + r5); UPD(0x0C0AA124u, 2);  /* 0C0AA122 mov.l @(r0,Rm),Rn */
	IF(0x0C0AA124u); { u32 t_ = r11; PR = 0x0C0AA128u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA128u); }  /* 0C0AA124 jsr @Rn */
L_0C0AA128: BLKS(0x0C0AA128u);
	r9 += r0;  /* 0C0AA128 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AA12Cu, 2);  /* 0C0AA12A mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0AA12C mov Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0AA130u, 2);  /* 0C0AA12E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AA130u); { u32 t_ = r0; PR = 0x0C0AA134u; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AA134u); }  /* 0C0AA130 jsr @Rn */
L_0C0AA134: BLKS(0x0C0AA134u);
	r5 = r9;  /* 0C0AA134 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0AA138u, 2);  /* 0C0AA136 mov.l @(disp,pc),Rn */
	r4 = R32(r8 + 0x20u); UPD(0x0C0AA13Au, 1);  /* 0C0AA138 mov.l @(disp,Rm),Rn */
	IF(0x0C0AA13Au); { u32 t_ = r9; PR = 0x0C0AA13Eu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AA13Eu); }  /* 0C0AA13A jsr @Rn */
L_0C0AA13E: BLKS(0x0C0AA13Eu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C0AA140u, 1);  /* 0C0AA13E mov.l Rm,@(disp,Rn) */
	r4 = 0xC1ECCF4u; UPD(0x0C0AA142u, 1);  /* 0C0AA140 mov.l @(disp,pc),Rn */
	r8 += 0x33u;  /* 0C0AA142 add #imm,Rn */
	r0 = r4;  /* 0C0AA144 mov Rm,Rn */
	IF(0x0C0AA146u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0AA148u, 3);  /* 0C0AA146 mov.b @(r0,Rm),Rn */
	r4 = 0x4u;  /* 0C0AA148 mov #imm,Rn */
	W8(r8, r3); UPD(0x0C0AA14Cu, 2);  /* 0C0AA14A mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C0AA14C mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0AA150u, 2);  /* 0C0AA14E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0AA150 add #imm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0AA154u, 2);  /* 0C0AA152 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0AA156u, 1);  /* 0C0AA154 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0AA156 add #imm,Rn */
	IF(0x0C0AA158u); { u32 t_ = r11; PR = 0x0C0AA15Cu; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA15Cu); }  /* 0C0AA158 jsr @Rn */
L_0C0AA15C: BLKS(0x0C0AA15Cu);
	r8 += 0x1u;  /* 0C0AA15C add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0AA0B8u, 4); goto L_0C0AA0B8; }  /* 0C0AA15E bra */
}

void f_0C0AA1A0(sh3_t *c)
{
	LOCALS;
L_0C0AA1A0: BLKS(0x0C0AA1A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA1A2u, 1);  /* 0C0AA1A0 mov.l Rm,@-Rn */
	r3 = 0x38u;  /* 0C0AA1A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA1A6u, 2);  /* 0C0AA1A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA1A8u, 1);  /* 0C0AA1A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA1AAu, 1);  /* 0C0AA1A8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AA1AA exts.w Rm,Rn */
	IF(0x0C0AA1ACu); MACL = r11 * r3;  /* 0C0AA1AC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA1B0u, 4);  /* 0C0AA1AE mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA1B2u, 1);  /* 0C0AA1B0 mov.l @(disp,pc),Rn */
	IF(0x0C0AA1B2u); r10 = MACL;  /* 0C0AA1B2 sts macl,Rn */
	IF(0x0C0AA1B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA1B6u, 2);  /* 0C0AA1B4 sts.l pr,@-Rn */
	r10 += r0;  /* 0C0AA1B6 add Rm,Rn */
	r10 += 0x22u;  /* 0C0AA1B8 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AA1BCu, 3);  /* 0C0AA1BA mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AA1BC mov Rm,Rn */
	r10 += 0xFFFFFFDEu;  /* 0C0AA1BE add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C0AA1C2u, 3);  /* 0C0AA1C0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0AA1C2 mov Rm,Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C0AA1C6u, 2);  /* 0C0AA1C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0AA1C6u); { u32 t_ = r0; PR = 0x0C0AA1CAu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AA1CAu); }  /* 0C0AA1C6 jsr @Rn */
L_0C0AA1CA: BLKS(0x0C0AA1CAu);
	r5 = r8;  /* 0C0AA1CA mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0AA1CEu, 2);  /* 0C0AA1CC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0AA1CE mov Rm,Rn */
	IF(0x0C0AA1D0u); { u32 t_ = r8; PR = 0x0C0AA1D4u; W32(r10 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AA1D4u); }  /* 0C0AA1D0 jsr @Rn */
L_0C0AA1D4: BLKS(0x0C0AA1D4u);
	r4 = R32(r10 + 0x10u); UPD(0x0C0AA1D6u, 1);  /* 0C0AA1D4 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x14u); UPD(0x0C0AA1D8u, 1);  /* 0C0AA1D6 mov.l @(disp,Rm),Rn */
	r2 = R32(r10 + 0x18u); UPD(0x0C0AA1DAu, 1);  /* 0C0AA1D8 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0AA1DA add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0AA1DEu, 2);  /* 0C0AA1DC mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0AA1DE add Rm,Rn */
	r3 += r4;  /* 0C0AA1E0 add Rm,Rn */
	W32(r10 + 0x1Cu, r0); UPD(0x0C0AA1E4u, 3);  /* 0C0AA1E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AA1E4u); T = (s32)r3 >= 0;  /* 0C0AA1E4 cmp/pz Rn */
	W32(r10 + 0x10u, r4); UPD(0x0C0AA1E8u, 2);  /* 0C0AA1E6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r10 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA290u, 3); goto L_0C0AA290; } UPD(0x0C0AA1ECu, 1); goto L_0C0AA1EC; }  /* 0C0AA1E8 bf/s */
L_0C0AA1EC: BLKS(0x0C0AA1ECu);
	r4 = 0xAC0000u; UPD(0x0C0AA1EEu, 1);  /* 0C0AA1EC mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0AA1EE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA208u, 4); goto L_0C0AA208; }  /* 0C0AA1F0 bt */
L_0C0AA1F2: BLKS(0x0C0AA1F2u);
	r2 = r7;  /* 0C0AA1F2 mov Rm,Rn */
	r9 = 0xC3929E0u; UPD(0x0C0AA1F6u, 2);  /* 0C0AA1F4 mov.l @(disp,pc),Rn */
	r6 = R32(r9); UPD(0x0C0AA1F8u, 1);  /* 0C0AA1F6 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0AA1FAu, 1);  /* 0C0AA1F8 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0AA1FA sub Rm,Rn */
	r2 += r5;  /* 0C0AA1FC add Rm,Rn */
	IF(0x0C0AA1FEu); T = (s32)r2 >= 0;  /* 0C0AA1FE cmp/pz Rn */
	if (!T) { UPD(0x0C0AA280u, 6); goto L_0C0AA280; }  /* 0C0AA200 bf */
L_0C0AA202: BLKS(0x0C0AA202u);
	r7 = 0x840000u; UPD(0x0C0AA204u, 1);  /* 0C0AA202 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0AA204 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA220u, 4); goto L_0C0AA220; }  /* 0C0AA206 bf */
L_0C0AA208: BLKS(0x0C0AA208u);
	r11 = 0x0u;  /* 0C0AA208 mov #imm,Rn */
	W32(r10, r11); UPD(0x0C0AA20Cu, 2);  /* 0C0AA20A mov.l Rm,@Rn */
L_0C0AA20C: BLKS(0x0C0AA20Cu);
	r15 = r14;  /* 0C0AA20C mov Rm,Rn */
	IF(0x0C0AA20Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AA210u, 2);  /* 0C0AA20E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA212u, 1);  /* 0C0AA210 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AA214u, 1);  /* 0C0AA212 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA216u, 1);  /* 0C0AA214 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA218u, 1);  /* 0C0AA216 mov.l @Rm+,Rn */
	IF(0x0C0AA218u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA218 rts */
L_0C0AA220: BLKS(0x0C0AA220u);
	r7 = r10;  /* 0C0AA220 mov Rm,Rn */
	r10 += 0x31u;  /* 0C0AA222 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AA226u, 3);  /* 0C0AA224 mov.b @Rm,Rn */
	r7 += 0x30u;  /* 0C0AA226 add #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C0AA228 extu.b Rm,Rn */
	r0 = r3;  /* 0C0AA22A mov Rm,Rn */
	r4 = 0xC1ECD20u; UPD(0x0C0AA22Eu, 4);  /* 0C0AA22C mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFCFu;  /* 0C0AA22E add #imm,Rn */
	IF(0x0C0AA230u); r0 <<= 2;  /* 0C0AA230 shll2 Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C0AA234u, 3);  /* 0C0AA232 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0AA234 tst Rm,Rn */
	IF(0x0C0AA236u); r2 = R32(r0 + r4); UPD(0x0C0AA238u, 2);  /* 0C0AA236 mov.l @(r0,Rm),Rn */
	r8 += r2;  /* 0C0AA238 add Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x24u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA25Cu, 4); goto L_0C0AA25C; } UPD(0x0C0AA23Eu, 1); goto L_0C0AA23E; }  /* 0C0AA23A bt/s */
L_0C0AA23E: BLKS(0x0C0AA23Eu);
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AA240u, 1);  /* 0C0AA23E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0AA240 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C0AA242 extu.b Rm,Rn */
	T = r5 > r3;  /* 0C0AA244 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AA25Cu, 6); goto L_0C0AA25C; } UPD(0x0C0AA24Au, 1); goto L_0C0AA24A; }  /* 0C0AA246 bf/s */
L_0C0AA24A: BLKS(0x0C0AA24Au);
	r0 = R32(r10 + 0x8u); UPD(0x0C0AA24Cu, 1);  /* 0C0AA24A mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFCu;  /* 0C0AA24C mov #imm,Rn */
	r3 &= r0;  /* 0C0AA24E and Rm,Rn */
	r0 += 0x1u;  /* 0C0AA250 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0AA252 and #imm,r0 */
	r9 = 0x0u;  /* 0C0AA254 mov #imm,Rn */
	r3 |= r0;  /* 0C0AA256 or Rm,Rn */
	W8(r7, r9); UPD(0x0C0AA25Au, 7);  /* 0C0AA258 mov.b Rm,@Rn */
	W32(r10 + 0x8u, r3); UPD(0x0C0AA25Cu, 1);  /* 0C0AA25A mov.l Rm,@(disp,Rn) */
L_0C0AA25C: BLKS(0x0C0AA25Cu);
	r9 = 0xC050D70u; UPD(0x0C0AA25Eu, 1);  /* 0C0AA25C mov.l @(disp,pc),Rn */
	r4 = 0x3E8u; UPD(0x0C0AA260u, 1);  /* 0C0AA25E mov.w @(disp,pc),Rn */
	IF(0x0C0AA260u); { u32 t_ = r9; PR = 0x0C0AA264u; r10 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA264u); }  /* 0C0AA260 jsr @Rn */
L_0C0AA264: BLKS(0x0C0AA264u);
	T = (s32)r0 > (s32)r10;  /* 0C0AA264 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA20Cu, 4); goto L_0C0AA20C; }  /* 0C0AA266 bt */
L_0C0AA268: BLKS(0x0C0AA268u);
	r8 = 0x38u;  /* 0C0AA268 mov #imm,Rn */
	IF(0x0C0AA26Au); MACL = r11 * r8;  /* 0C0AA26A mul.l Rm,Rn */
	r7 = 0xC275E4Du; UPD(0x0C0AA26Eu, 4);  /* 0C0AA26C mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0AA26E mov #imm,Rn */
	IF(0x0C0AA270u); r11 = MACL;  /* 0C0AA270 sts macl,Rn */
	IF(0x0C0AA272u); { u32 t_ = r9; PR = 0x0C0AA276u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AA276u); }  /* 0C0AA272 jsr @Rn */
L_0C0AA276: BLKS(0x0C0AA276u);
	{ W8(r11, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0AA20Cu, 3); goto L_0C0AA20C; }  /* 0C0AA276 bra */
L_0C0AA280: BLKS(0x0C0AA280u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AA202u, 3); goto L_0C0AA202; }  /* 0C0AA280 bra */
L_0C0AA290: BLKS(0x0C0AA290u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AA1ECu, 3); goto L_0C0AA1EC; }  /* 0C0AA290 bra */
}

void f_0C0AA2D0(sh3_t *c)
{
	LOCALS;
L_0C0AA2D0: BLKS(0x0C0AA2D0u);
	r0 = 0x38u;  /* 0C0AA2D0 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA2D2 exts.w Rm,Rn */
	IF(0x0C0AA2D4u); MACL = r4 * r0;  /* 0C0AA2D4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA2D8u, 5);  /* 0C0AA2D6 mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA2DAu, 1);  /* 0C0AA2D8 mov.l @(disp,pc),Rn */
	IF(0x0C0AA2DAu); r3 = MACL;  /* 0C0AA2DA sts macl,Rn */
	r3 += r0;  /* 0C0AA2DC add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0AA2E0u, 3);  /* 0C0AA2DE mov.l @(disp,Rm),Rn */
	IF(0x0C0AA2E0u); T = (s32)r1 >= 0;  /* 0C0AA2E0 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA2EAu, 4); goto L_0C0AA2EA; } goto L_0C0AA2E6; }  /* 0C0AA2E2 bt/s */
L_0C0AA2E6: BLKS(0x0C0AA2E6u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0AA450u, 4); goto L_0C0AA450; }  /* 0C0AA2E6 bra */
L_0C0AA2EA: BLKS(0x0C0AA2EAu);
	r6 = 0xFFFFFFFCu;  /* 0C0AA2EA mov #imm,Rn */
	UPD(0x0C0AA2ECu, 1);
L_0C0AA2EC: BLKS(0x0C0AA2ECu);
	IF(0x0C0AA2ECu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AA2EC shad Rm,Rn */
	r7 = 0xFu;  /* 0C0AA2EE mov #imm,Rn */
	IF(0x0C0AA2F0u); MACL = r1 * r7;  /* 0C0AA2F0 mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0AA2F4u, 5);  /* 0C0AA2F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AA2F4u); r0 = MACL;  /* 0C0AA2F4 sts macl,Rn */
	IF(0x0C0AA2F6u); T = (s32)r1 >= 0;  /* 0C0AA2F6 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA300u, 5); goto L_0C0AA300; } UPD(0x0C0AA2FCu, 1); goto L_0C0AA2FC; }  /* 0C0AA2F8 bt/s */
L_0C0AA2FC: BLKS(0x0C0AA2FCu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0AA440u, 3); goto L_0C0AA440; }  /* 0C0AA2FC bra */
L_0C0AA300: BLKS(0x0C0AA300u);
	IF(0x0C0AA300u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AA300 shad Rm,Rn */
	UPD(0x0C0AA302u, 1);
L_0C0AA302: BLKS(0x0C0AA302u);
	IF(0x0C0AA302u); MACL = r1 * r7;  /* 0C0AA302 mul.l Rm,Rn */
	r2 = 0xC220C2Cu; UPD(0x0C0AA306u, 3);  /* 0C0AA304 mov.l @(disp,pc),Rn */
	IF(0x0C0AA306u); r5 = MACL;  /* 0C0AA306 sts macl,Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0AA30Au, 2);  /* 0C0AA308 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0AA30Cu, 1);  /* 0C0AA30A mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0AA30Eu, 1);  /* 0C0AA30C mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0AA30E sub Rm,Rn */
	IF(0x0C0AA310u); T = (s32)r1 >= 0;  /* 0C0AA310 cmp/pz Rn */
	if (T) { UPD(0x0C0AA31Au, 5); goto L_0C0AA31A; }  /* 0C0AA312 bt */
L_0C0AA314: BLKS(0x0C0AA314u);
	r1 += 0xFu;  /* 0C0AA314 add #imm,Rn */
	{ IF(0x0C0AA318u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0AA31Cu, 4); goto L_0C0AA31C; }  /* 0C0AA316 bra */
L_0C0AA31A: BLKS(0x0C0AA31Au);
	IF(0x0C0AA31Au); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0AA31A shad Rm,Rn */
	UPD(0x0C0AA31Cu, 1);
L_0C0AA31C: BLKS(0x0C0AA31Cu);
	IF(0x0C0AA31Cu); MACL = r1 * r7;  /* 0C0AA31C mul.l Rm,Rn */
	IF(0x0C0AA31Eu); r6 = MACL;  /* 0C0AA31E sts macl,Rn */
	r6 += r2;  /* 0C0AA320 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0AA324u, 5);  /* 0C0AA322 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0AA326u, 1);  /* 0C0AA324 mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C0AA326 add Rm,Rn */
	r2 -= r6;  /* 0C0AA328 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AA32Cu, 3);  /* 0C0AA32A mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0AA32Eu, 1);  /* 0C0AA32C mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0AA32E add Rm,Rn */
	r7 += r2;  /* 0C0AA330 add Rm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0AA334u, 3);  /* 0C0AA332 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AA334u); T = (s32)r7 >= 0;  /* 0C0AA334 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA430u, 4); goto L_0C0AA430; } UPD(0x0C0AA33Au, 1); goto L_0C0AA33A; }  /* 0C0AA336 bf/s */
L_0C0AA33A: BLKS(0x0C0AA33Au);
	r5 = 0xA80000u; UPD(0x0C0AA33Cu, 1);  /* 0C0AA33A mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AA33C cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA35Au, 4); goto L_0C0AA35A; } goto L_0C0AA342; }  /* 0C0AA33E bt/s */
L_0C0AA342: BLKS(0x0C0AA342u);
	r2 = 0xC3929E0u; UPD(0x0C0AA344u, 2);  /* 0C0AA342 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0AA346u, 1);  /* 0C0AA344 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0AA348u, 1);  /* 0C0AA346 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0AA348 mov Rm,Rn */
	r2 -= r0;  /* 0C0AA34A sub Rm,Rn */
	r2 += r7;  /* 0C0AA34C add Rm,Rn */
	IF(0x0C0AA34Eu); T = (s32)r2 >= 0;  /* 0C0AA34E cmp/pz Rn */
	if (!T) { UPD(0x0C0AA420u, 7); goto L_0C0AA420; }  /* 0C0AA350 bf */
L_0C0AA352: BLKS(0x0C0AA352u);
	r6 = 0x800000u; UPD(0x0C0AA354u, 1);  /* 0C0AA352 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0AA354 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA370u, 4); goto L_0C0AA370; } UPD(0x0C0AA35Au, 1); goto L_0C0AA35A; }  /* 0C0AA356 bf/s */
L_0C0AA35A: BLKS(0x0C0AA35Au);
	W32(r3, r1); UPD(0x0C0AA35Cu, 1);  /* 0C0AA35A mov.l Rm,@Rn */
L_0C0AA35C: BLKS(0x0C0AA35Cu);
	r15 = r14;  /* 0C0AA35C mov Rm,Rn */
	IF(0x0C0AA35Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA35E rts */
L_0C0AA370: BLKS(0x0C0AA370u);
	r7 = r3;  /* 0C0AA370 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0AA372 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AA376u, 3);  /* 0C0AA374 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0AA376 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AA37Au, 2);  /* 0C0AA378 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0AA37A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AA37C extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0AA37E extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0AA382u, 4);  /* 0C0AA380 mov.b Rm,@Rn */
	T = r0 == r5;  /* 0C0AA382 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA400u, 4); goto L_0C0AA400; } UPD(0x0C0AA388u, 1); goto L_0C0AA388; }  /* 0C0AA384 bt/s */
L_0C0AA388: BLKS(0x0C0AA388u);
	r3 = 0x38u;  /* 0C0AA388 mov #imm,Rn */
	IF(0x0C0AA38Au); MACL = r4 * r3;  /* 0C0AA38A mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0AA38Eu, 4);  /* 0C0AA38C mov.l @(disp,pc),Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AA390u, 1);  /* 0C0AA38E mov.l @(disp,pc),Rn */
	IF(0x0C0AA390u); r3 = MACL;  /* 0C0AA390 sts macl,Rn */
	r3 += r4;  /* 0C0AA392 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AA396u, 3);  /* 0C0AA394 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0AA396 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA3F0u, 4); goto L_0C0AA3F0; } goto L_0C0AA39C; }  /* 0C0AA398 bf/s */
L_0C0AA39C: BLKS(0x0C0AA39Cu);
	r1 += 0x30u;  /* 0C0AA39C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AA3A0u, 3);  /* 0C0AA39E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0AA3A0 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0AA3A2 extu.b Rm,Rn */
	W8(r1, r6); UPD(0x0C0AA3A6u, 3);  /* 0C0AA3A4 mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0AA3A6 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0AA3AAu, 2);  /* 0C0AA3A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0AA3AAu); r6 = T;  /* 0C0AA3AA movt Rn */
	IF(0x0C0AA3ACu); T = (s32)r2 >= 0;  /* 0C0AA3AC cmp/pz Rn */
	if (!T) { UPD(0x0C0AA3E0u, 5); goto L_0C0AA3E0; }  /* 0C0AA3AE bf */
L_0C0AA3B0: BLKS(0x0C0AA3B0u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0AA3B2u, 1);  /* 0C0AA3B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0AA3B2u); T = (s32)r1 >= 0;  /* 0C0AA3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C0AA3D0u, 4); goto L_0C0AA3D0; }  /* 0C0AA3B4 bf */
L_0C0AA3B6: BLKS(0x0C0AA3B6u);
	r4 = 0xFFFFu; UPD(0x0C0AA3B8u, 1);  /* 0C0AA3B6 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0AA3B8 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0AA3BA cmp/ge Rm,Rn */
	IF(0x0C0AA3BCu); r2 = T;  /* 0C0AA3BC movt Rn */
	r6 |= r2;  /* 0C0AA3BE or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AA3C0 tst Rm,Rn */
	if (T) { UPD(0x0C0AA35Cu, 8); goto L_0C0AA35C; }  /* 0C0AA3C2 bt */
L_0C0AA3C4: BLKS(0x0C0AA3C4u);
	r7 |= r5;  /* 0C0AA3C4 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AA35Cu, 4); goto L_0C0AA35C; }  /* 0C0AA3C6 bra */
L_0C0AA3D0: BLKS(0x0C0AA3D0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AA3B6u, 3); goto L_0C0AA3B6; }  /* 0C0AA3D0 bra */
L_0C0AA3E0: BLKS(0x0C0AA3E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AA3B0u, 3); goto L_0C0AA3B0; }  /* 0C0AA3E0 bra */
L_0C0AA3F0: BLKS(0x0C0AA3F0u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0AA3F2u, 1);  /* 0C0AA3F0 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0AA3F2 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0AA3F4 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AA3F6 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA35Au, 6); goto L_0C0AA35A; } UPD(0x0C0AA3FCu, 1); goto L_0C0AA3FC; }  /* 0C0AA3F8 bt/s */
L_0C0AA3FC: BLKS(0x0C0AA3FCu);
	{ IF(0x0C0AA3FEu); ; /* slot nop */ UPD(0x0C0AA35Cu, 3); goto L_0C0AA35C; }  /* 0C0AA3FC bra */
L_0C0AA400: BLKS(0x0C0AA400u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AA402u, 1);  /* 0C0AA400 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0AA402 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0AA404 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0AA408u, 3);  /* 0C0AA406 mov.b Rm,@Rn */
	T = r0 == 0xFu;  /* 0C0AA408 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AA388u, 4); goto L_0C0AA388; } UPD(0x0C0AA40Eu, 1); goto L_0C0AA40E; }  /* 0C0AA40A bf/s */
L_0C0AA40E: BLKS(0x0C0AA40Eu);
	r7 = 0x0u;  /* 0C0AA40E mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AA388u, 4); goto L_0C0AA388; }  /* 0C0AA410 bra */
L_0C0AA420: BLKS(0x0C0AA420u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AA352u, 3); goto L_0C0AA352; }  /* 0C0AA420 bra */
L_0C0AA430: BLKS(0x0C0AA430u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AA33Au, 3); goto L_0C0AA33A; }  /* 0C0AA430 bra */
L_0C0AA440: BLKS(0x0C0AA440u);
	{ IF(0x0C0AA442u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0AA302u, 3); goto L_0C0AA302; }  /* 0C0AA440 bra */
L_0C0AA450: BLKS(0x0C0AA450u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0AA2ECu, 3); goto L_0C0AA2EC; }  /* 0C0AA450 bra */
}

void f_0C0AA480(sh3_t *c)
{
	LOCALS;
L_0C0AA480: BLKS(0x0C0AA480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA482u, 1);  /* 0C0AA480 mov.l Rm,@-Rn */
	r5 = 0x7u;  /* 0C0AA482 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA486u, 2);  /* 0C0AA484 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA488u, 1);  /* 0C0AA486 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA48Au, 1);  /* 0C0AA488 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA48Cu, 1);  /* 0C0AA48A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA48Eu, 1);  /* 0C0AA48C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA490u, 1);  /* 0C0AA48E mov.l Rm,@-Rn */
	r3 = 0xC2859A0u; UPD(0x0C0AA492u, 1);  /* 0C0AA490 mov.l @(disp,pc),Rn */
	IF(0x0C0AA492u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA494u, 1);  /* 0C0AA492 sts.l pr,@-Rn */
	r4 = R32(r3); UPD(0x0C0AA496u, 1);  /* 0C0AA494 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AA496 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r10 = v_; } UPD(0x0C0AA49Au, 2);  /* 0C0AA498 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r11 = v_; } UPD(0x0C0AA49Cu, 1);  /* 0C0AA49A mov.w @Rm+,Rn */
	IF(0x0C0AA49Cu); r10 <<= 16;  /* 0C0AA49C shll16 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r9 = v_; } UPD(0x0C0AA4A0u, 2);  /* 0C0AA49E mov.w @Rm+,Rn */
	IF(0x0C0AA4A0u); r11 <<= 16;  /* 0C0AA4A0 shll16 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C0AA4A4u, 2);  /* 0C0AA4A2 mov.w @Rm+,Rn */
	IF(0x0C0AA4A4u); r9 <<= 16;  /* 0C0AA4A4 shll16 Rn */
	r5 &= r2;  /* 0C0AA4A6 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r8 = v_; } UPD(0x0C0AA4AAu, 3);  /* 0C0AA4A8 mov.w @Rm+,Rn */
	IF(0x0C0AA4AAu); r5 <<= 2;  /* 0C0AA4AA shll2 Rn */
	r1 = 0xC1EE9B8u; UPD(0x0C0AA4AEu, 2);  /* 0C0AA4AC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AA4AE mov Rm,Rn */
	IF(0x0C0AA4B0u); r12 = R32(r0 + r1); UPD(0x0C0AA4B2u, 2);  /* 0C0AA4B0 mov.l @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0AA4B2 tst Rm,Rn */
	{ u32 c_ = T; W32(r3, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AA518u, 4); goto L_0C0AA518; } UPD(0x0C0AA4B8u, 1); goto L_0C0AA4B8; }  /* 0C0AA4B4 bt/s */
L_0C0AA4B8: BLKS(0x0C0AA4B8u);
	r13 = r3;  /* 0C0AA4B8 mov Rm,Rn */
	IF(0x0C0AA4BAu); ;  /* 0C0AA4BA nop */
	UPD(0x0C0AA4BCu, 2);
L_0C0AA4BC: BLKS(0x0C0AA4BCu);
	r0 = 0xC0AA550u; UPD(0x0C0AA4BEu, 1);  /* 0C0AA4BC mov.l @(disp,pc),Rn */
	IF(0x0C0AA4BEu); { u32 t_ = r0; PR = 0x0C0AA4C2u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AA4C2u); }  /* 0C0AA4BE jsr @Rn */
L_0C0AA4C2: BLKS(0x0C0AA4C2u);
	T = (r0 & r0) == 0;  /* 0C0AA4C2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA51Au, 4); goto L_0C0AA51A; } goto L_0C0AA4C8; }  /* 0C0AA4C4 bt/s */
L_0C0AA4C8: BLKS(0x0C0AA4C8u);
	r5 = 0xC2755BCu; UPD(0x0C0AA4CAu, 2);  /* 0C0AA4C8 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AA4CA mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AA4CEu, 2);  /* 0C0AA4CC mov.w @Rm,Rn */
	r0 = 0x22u;  /* 0C0AA4CE mov #imm,Rn */
	IF(0x0C0AA4D0u); MACL = r7 * r6;  /* 0C0AA4D0 mul.l Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AA4D4u, 4);  /* 0C0AA4D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AA4D4u); T = (s32)r8 >= 0;  /* 0C0AA4D4 cmp/pz Rn */
	IF(0x0C0AA4D6u); r2 = MACL;  /* 0C0AA4D6 sts macl,Rn */
	r2 += r4;  /* 0C0AA4D8 add Rm,Rn */
	r3 = 0xC0000000u; UPD(0x0C0AA4DCu, 4);  /* 0C0AA4DA mov.l @(disp,pc),Rn */
	W32(r2 + 0x4u, r0); UPD(0x0C0AA4DEu, 1);  /* 0C0AA4DC mov.l Rm,@(disp,Rn) */
	W32(r2, r3); UPD(0x0C0AA4E0u, 1);  /* 0C0AA4DE mov.l Rm,@Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA530u, 3); goto L_0C0AA530; } UPD(0x0C0AA4E4u, 1); goto L_0C0AA4E4; }  /* 0C0AA4E0 bf/s */
L_0C0AA4E4: BLKS(0x0C0AA4E4u);
	IF(0x0C0AA4E4u); r0 >>= 2;  /* 0C0AA4E4 shlr2 Rn */
	IF(0x0C0AA4E6u); r0 >>= 2;  /* 0C0AA4E6 shlr2 Rn */
	r4 = 0xFu;  /* 0C0AA4E8 mov #imm,Rn */
	r0 &= 0xFu;  /* 0C0AA4EA and #imm,r0 */
	r8 &= r4;  /* 0C0AA4EC and Rm,Rn */
	W32(r2 + 0x8u, r0); UPD(0x0C0AA4F0u, 6);  /* 0C0AA4EE mov.l Rm,@(disp,Rn) */
	W32(r2 + 0xCu, r8); UPD(0x0C0AA4F2u, 1);  /* 0C0AA4F0 mov.l Rm,@(disp,Rn) */
	r0 = 0x17u;  /* 0C0AA4F2 mov #imm,Rn */
	W32(r2 + 0x1Cu, r9); UPD(0x0C0AA4F6u, 2);  /* 0C0AA4F4 mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C0AA4F6 mov #imm,Rn */
	W32(r2 + 0x14u, r9); UPD(0x0C0AA4FAu, 2);  /* 0C0AA4F8 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r10); UPD(0x0C0AA4FCu, 1);  /* 0C0AA4FA mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x10u, r10); UPD(0x0C0AA4FEu, 1);  /* 0C0AA4FC mov.l Rm,@(disp,Rn) */
	r2 += 0x33u;  /* 0C0AA4FE add #imm,Rn */
	W8(r2, r0); UPD(0x0C0AA502u, 2);  /* 0C0AA500 mov.b Rm,@Rn */
	r2 += 0xFFFFFFCDu;  /* 0C0AA502 add #imm,Rn */
	W32(r2 + 0x28u, r8); UPD(0x0C0AA506u, 2);  /* 0C0AA504 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x2Cu, r12); UPD(0x0C0AA508u, 1);  /* 0C0AA506 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x20u, r11); UPD(0x0C0AA50Au, 1);  /* 0C0AA508 mov.l Rm,@(disp,Rn) */
	r2 = R32(r13); UPD(0x0C0AA50Cu, 1);  /* 0C0AA50A mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C0AA50Eu, 1);  /* 0C0AA50C mov.w @Rm+,Rn */
	r3 = 0x80000u; UPD(0x0C0AA510u, 1);  /* 0C0AA50E mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C0AA510 tst Rm,Rn */
	W32(r13, r2); UPD(0x0C0AA514u, 2);  /* 0C0AA512 mov.l Rm,@Rn */
	{ u32 c_ = !T; r9 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AA4BCu, 3); goto L_0C0AA4BC; } UPD(0x0C0AA518u, 1); goto L_0C0AA518; }  /* 0C0AA514 bf/s */
L_0C0AA518: BLKS(0x0C0AA518u);
	r0 = 0x1u;  /* 0C0AA518 mov #imm,Rn */
	UPD(0x0C0AA51Au, 1);
L_0C0AA51A: BLKS(0x0C0AA51Au);
	r15 = r14;  /* 0C0AA51A mov Rm,Rn */
	IF(0x0C0AA51Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AA51Eu, 2);  /* 0C0AA51C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA520u, 1);  /* 0C0AA51E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AA522u, 1);  /* 0C0AA520 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AA524u, 1);  /* 0C0AA522 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AA526u, 1);  /* 0C0AA524 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA528u, 1);  /* 0C0AA526 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA52Au, 1);  /* 0C0AA528 mov.l @Rm+,Rn */
	IF(0x0C0AA52Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA52A rts */
L_0C0AA530: BLKS(0x0C0AA530u);
	{ r0 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0AA4E4u, 3); goto L_0C0AA4E4; }  /* 0C0AA530 bra */
}

/* FUN_0c0aa550 */
void f_0C0AA550(sh3_t *c)
{
	LOCALS;
L_0C0AA550: BLKS(0x0C0AA550u);
	r3 = 0x200u; UPD(0x0C0AA552u, 1);  /* 0C0AA550 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA552 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0AA554 cmp/gt Rm,Rn */
	IF(0x0C0AA556u); r0 = T;  /* 0C0AA556 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AA558 tst Rm,Rn */
	IF(0x0C0AA55Au); r2 = T;  /* 0C0AA55A movt Rn */
	r0 |= r2;  /* 0C0AA55C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA560u, 7);  /* 0C0AA55E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0AA560 tst Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0AA564u, 2);  /* 0C0AA562 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA564 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA5ECu, 4); goto L_0C0AA5EC; } goto L_0C0AA56A; }  /* 0C0AA566 bf/s */
L_0C0AA56A: BLKS(0x0C0AA56Au);
	r6 = 0xC275DC4u; UPD(0x0C0AA56Cu, 2);  /* 0C0AA56A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AA56Eu, 1);  /* 0C0AA56C mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0AA56E extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0AA570 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AA5A8u, 5); goto L_0C0AA5A8; } goto L_0C0AA576; }  /* 0C0AA572 bt/s */
L_0C0AA576: BLKS(0x0C0AA576u);
	r1 = 0x1FFu; UPD(0x0C0AA578u, 2);  /* 0C0AA576 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA578 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA5A8u, 4); goto L_0C0AA5A8; } goto L_0C0AA57E; }  /* 0C0AA57A bt/s */
L_0C0AA57E: BLKS(0x0C0AA57Eu);
	IF(0x0C0AA57Eu); MACL = r3 * r2;  /* 0C0AA57E mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA582u, 4);  /* 0C0AA580 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA582 mov Rm,Rn */
	IF(0x0C0AA584u); r2 = MACL;  /* 0C0AA584 sts macl,Rn */
	r2 += r0;  /* 0C0AA586 add Rm,Rn */
	UPD(0x0C0AA588u, 3);
L_0C0AA588: BLKS(0x0C0AA588u);
	r5 = R32(r2); UPD(0x0C0AA58Au, 1);  /* 0C0AA588 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AA58A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA59Eu, 4); goto L_0C0AA59E; } goto L_0C0AA590; }  /* 0C0AA58C bf/s */
L_0C0AA590: BLKS(0x0C0AA590u);
	r0 = r4;  /* 0C0AA590 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA594u, 3);  /* 0C0AA592 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0AA594 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AA596 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA598 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA610u, 6); goto L_0C0AA610; } UPD(0x0C0AA59Eu, 1); goto L_0C0AA59E; }  /* 0C0AA59A bt/s */
L_0C0AA59E: BLKS(0x0C0AA59Eu);
	r5 = r3;  /* 0C0AA59E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AA5A0 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0AA5A2 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA5A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA588u, 7); goto L_0C0AA588; }  /* 0C0AA5A6 bf */
L_0C0AA5A8: BLKS(0x0C0AA5A8u);
	r3 = 0xC393082u; UPD(0x0C0AA5AAu, 1);  /* 0C0AA5A8 mov.l @(disp,pc),Rn */
	r1 = 0x200u; UPD(0x0C0AA5ACu, 1);  /* 0C0AA5AA mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AA5AEu, 1);  /* 0C0AA5AC mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA5AE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA5EAu, 4); goto L_0C0AA5EA; }  /* 0C0AA5B0 bt */
L_0C0AA5B2: BLKS(0x0C0AA5B2u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA5B2 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA5B4 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA5B6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA5EAu, 6); goto L_0C0AA5EA; }  /* 0C0AA5B8 bt */
L_0C0AA5BA: BLKS(0x0C0AA5BAu);
	r2 = 0x38u;  /* 0C0AA5BA mov #imm,Rn */
	IF(0x0C0AA5BCu); MACL = r3 * r2;  /* 0C0AA5BC mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA5C0u, 4);  /* 0C0AA5BE mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA5C0 mov Rm,Rn */
	IF(0x0C0AA5C2u); r2 = MACL;  /* 0C0AA5C2 sts macl,Rn */
	r2 += r0;  /* 0C0AA5C4 add Rm,Rn */
	IF(0x0C0AA5C6u); ;  /* 0C0AA5C6 nop */
	UPD(0x0C0AA5C8u, 4);
L_0C0AA5C8: BLKS(0x0C0AA5C8u);
	r0 = R32(r2); UPD(0x0C0AA5CAu, 1);  /* 0C0AA5C8 mov.l @Rm,Rn */
	r0 &= 0x3u;  /* 0C0AA5CA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AA5CC tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA5E0u, 5); goto L_0C0AA5E0; } goto L_0C0AA5D2; }  /* 0C0AA5CE bt/s */
L_0C0AA5D2: BLKS(0x0C0AA5D2u);
	r5 = r4;  /* 0C0AA5D2 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA5D6u, 3);  /* 0C0AA5D4 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AA5D6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0AA5D8 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA5DA tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA600u, 6); goto L_0C0AA600; } UPD(0x0C0AA5E0u, 1); goto L_0C0AA5E0; }  /* 0C0AA5DC bt/s */
L_0C0AA5E0: BLKS(0x0C0AA5E0u);
	r0 = r3;  /* 0C0AA5E0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AA5E2 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AA5E4 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA5E6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA5C8u, 7); goto L_0C0AA5C8; }  /* 0C0AA5E8 bf */
L_0C0AA5EA: BLKS(0x0C0AA5EAu);
	r0 = 0x0u;  /* 0C0AA5EA mov #imm,Rn */
	UPD(0x0C0AA5ECu, 1);
L_0C0AA5EC: BLKS(0x0C0AA5ECu);
	r15 = r14;  /* 0C0AA5EC mov Rm,Rn */
	IF(0x0C0AA5EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA5EE rts */
L_0C0AA600: BLKS(0x0C0AA600u);
	r4 = 0x200u; UPD(0x0C0AA602u, 1);  /* 0C0AA600 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AA602 add #imm,Rn */
	r0 = 0xC275DC4u; UPD(0x0C0AA606u, 2);  /* 0C0AA604 mov.l @(disp,pc),Rn */
	r1 = 0xC393082u; UPD(0x0C0AA608u, 1);  /* 0C0AA606 mov.l @(disp,pc),Rn */
	W16(r0, r4); UPD(0x0C0AA60Au, 1);  /* 0C0AA608 mov.w Rm,@Rn */
L_0C0AA60A: BLKS(0x0C0AA60Au);
	W16(r1, r3); UPD(0x0C0AA60Cu, 1);  /* 0C0AA60A mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AA5ECu, 3); goto L_0C0AA5EC; }  /* 0C0AA60C bra */
L_0C0AA610: BLKS(0x0C0AA610u);
	r1 = 0xC275DC4u; UPD(0x0C0AA612u, 1);  /* 0C0AA610 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AA60Au, 3); goto L_0C0AA60A; }  /* 0C0AA612 bra */
}

/* FUN_0c0aa630 */
void f_0C0AA630(sh3_t *c)
{
	LOCALS;
L_0C0AA630: BLKS(0x0C0AA630u);
	r3 = 0x200u; UPD(0x0C0AA632u, 1);  /* 0C0AA630 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA632 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0AA634 cmp/gt Rm,Rn */
	IF(0x0C0AA636u); r0 = T;  /* 0C0AA636 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AA638 tst Rm,Rn */
	IF(0x0C0AA63Au); r2 = T;  /* 0C0AA63A movt Rn */
	r0 |= r2;  /* 0C0AA63C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA640u, 7);  /* 0C0AA63E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0AA640 tst Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0AA644u, 2);  /* 0C0AA642 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA644 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA6CCu, 4); goto L_0C0AA6CC; } goto L_0C0AA64A; }  /* 0C0AA646 bf/s */
L_0C0AA64A: BLKS(0x0C0AA64Au);
	r6 = 0xC275DC4u; UPD(0x0C0AA64Cu, 2);  /* 0C0AA64A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AA64Eu, 1);  /* 0C0AA64C mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0AA64E extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0AA650 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AA688u, 5); goto L_0C0AA688; } goto L_0C0AA656; }  /* 0C0AA652 bt/s */
L_0C0AA656: BLKS(0x0C0AA656u);
	r1 = 0x1FFu; UPD(0x0C0AA658u, 2);  /* 0C0AA656 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA658 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA688u, 4); goto L_0C0AA688; } goto L_0C0AA65E; }  /* 0C0AA65A bt/s */
L_0C0AA65E: BLKS(0x0C0AA65Eu);
	IF(0x0C0AA65Eu); MACL = r3 * r2;  /* 0C0AA65E mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA662u, 4);  /* 0C0AA660 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA662 mov Rm,Rn */
	IF(0x0C0AA664u); r2 = MACL;  /* 0C0AA664 sts macl,Rn */
	r2 += r0;  /* 0C0AA666 add Rm,Rn */
	UPD(0x0C0AA668u, 3);
L_0C0AA668: BLKS(0x0C0AA668u);
	r5 = R32(r2); UPD(0x0C0AA66Au, 1);  /* 0C0AA668 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AA66A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA67Eu, 4); goto L_0C0AA67E; } goto L_0C0AA670; }  /* 0C0AA66C bf/s */
L_0C0AA670: BLKS(0x0C0AA670u);
	r0 = r4;  /* 0C0AA670 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA674u, 3);  /* 0C0AA672 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0AA674 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AA676 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA678 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA6F0u, 6); goto L_0C0AA6F0; } UPD(0x0C0AA67Eu, 1); goto L_0C0AA67E; }  /* 0C0AA67A bt/s */
L_0C0AA67E: BLKS(0x0C0AA67Eu);
	r5 = r3;  /* 0C0AA67E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AA680 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0AA682 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA684 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA668u, 7); goto L_0C0AA668; }  /* 0C0AA686 bf */
L_0C0AA688: BLKS(0x0C0AA688u);
	r3 = 0xC275440u; UPD(0x0C0AA68Au, 1);  /* 0C0AA688 mov.l @(disp,pc),Rn */
	r1 = 0x200u; UPD(0x0C0AA68Cu, 1);  /* 0C0AA68A mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AA68Eu, 1);  /* 0C0AA68C mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA68E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA6CAu, 4); goto L_0C0AA6CA; }  /* 0C0AA690 bt */
L_0C0AA692: BLKS(0x0C0AA692u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA692 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA694 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA696 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA6CAu, 6); goto L_0C0AA6CA; }  /* 0C0AA698 bt */
L_0C0AA69A: BLKS(0x0C0AA69Au);
	r2 = 0x38u;  /* 0C0AA69A mov #imm,Rn */
	IF(0x0C0AA69Cu); MACL = r3 * r2;  /* 0C0AA69C mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA6A0u, 4);  /* 0C0AA69E mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA6A0 mov Rm,Rn */
	IF(0x0C0AA6A2u); r2 = MACL;  /* 0C0AA6A2 sts macl,Rn */
	r2 += r0;  /* 0C0AA6A4 add Rm,Rn */
	IF(0x0C0AA6A6u); ;  /* 0C0AA6A6 nop */
	UPD(0x0C0AA6A8u, 4);
L_0C0AA6A8: BLKS(0x0C0AA6A8u);
	r0 = R32(r2); UPD(0x0C0AA6AAu, 1);  /* 0C0AA6A8 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0AA6AA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AA6AC tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA6C0u, 5); goto L_0C0AA6C0; } goto L_0C0AA6B2; }  /* 0C0AA6AE bt/s */
L_0C0AA6B2: BLKS(0x0C0AA6B2u);
	r5 = r4;  /* 0C0AA6B2 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA6B6u, 3);  /* 0C0AA6B4 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AA6B6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0AA6B8 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA6BA tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA6E0u, 6); goto L_0C0AA6E0; } UPD(0x0C0AA6C0u, 1); goto L_0C0AA6C0; }  /* 0C0AA6BC bt/s */
L_0C0AA6C0: BLKS(0x0C0AA6C0u);
	r0 = r3;  /* 0C0AA6C0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AA6C2 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AA6C4 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA6C6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA6A8u, 7); goto L_0C0AA6A8; }  /* 0C0AA6C8 bf */
L_0C0AA6CA: BLKS(0x0C0AA6CAu);
	r0 = 0x0u;  /* 0C0AA6CA mov #imm,Rn */
	UPD(0x0C0AA6CCu, 1);
L_0C0AA6CC: BLKS(0x0C0AA6CCu);
	r15 = r14;  /* 0C0AA6CC mov Rm,Rn */
	IF(0x0C0AA6CEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA6CE rts */
L_0C0AA6E0: BLKS(0x0C0AA6E0u);
	r4 = 0x200u; UPD(0x0C0AA6E2u, 1);  /* 0C0AA6E0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AA6E2 add #imm,Rn */
	r0 = 0xC275DC4u; UPD(0x0C0AA6E6u, 2);  /* 0C0AA6E4 mov.l @(disp,pc),Rn */
	r1 = 0xC275440u; UPD(0x0C0AA6E8u, 1);  /* 0C0AA6E6 mov.l @(disp,pc),Rn */
	W16(r0, r4); UPD(0x0C0AA6EAu, 1);  /* 0C0AA6E8 mov.w Rm,@Rn */
L_0C0AA6EA: BLKS(0x0C0AA6EAu);
	W16(r1, r3); UPD(0x0C0AA6ECu, 1);  /* 0C0AA6EA mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AA6CCu, 3); goto L_0C0AA6CC; }  /* 0C0AA6EC bra */
L_0C0AA6F0: BLKS(0x0C0AA6F0u);
	r1 = 0xC275DC4u; UPD(0x0C0AA6F2u, 1);  /* 0C0AA6F0 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AA6EAu, 3); goto L_0C0AA6EA; }  /* 0C0AA6F2 bra */
}

/* FUN_0c0aa710 */
void f_0C0AA710(sh3_t *c)
{
	LOCALS;
L_0C0AA710: BLKS(0x0C0AA710u);
	r3 = 0x200u; UPD(0x0C0AA712u, 1);  /* 0C0AA710 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA712 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0AA714 cmp/gt Rm,Rn */
	IF(0x0C0AA716u); r0 = T;  /* 0C0AA716 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AA718 tst Rm,Rn */
	IF(0x0C0AA71Au); r2 = T;  /* 0C0AA71A movt Rn */
	r0 |= r2;  /* 0C0AA71C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA720u, 7);  /* 0C0AA71E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0AA720 tst Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0AA724u, 2);  /* 0C0AA722 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA724 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA76Au, 4); goto L_0C0AA76A; } goto L_0C0AA72A; }  /* 0C0AA726 bf/s */
L_0C0AA72A: BLKS(0x0C0AA72Au);
	r6 = 0xC275DC4u; UPD(0x0C0AA72Cu, 2);  /* 0C0AA72A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AA72Eu, 1);  /* 0C0AA72C mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0AA72E extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0AA730 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA768u, 5); goto L_0C0AA768; }  /* 0C0AA732 bt */
L_0C0AA734: BLKS(0x0C0AA734u);
	r2 = (u32)(s32)(s16)r2;  /* 0C0AA734 exts.w Rm,Rn */
	r1 = 0x1FFu; UPD(0x0C0AA738u, 2);  /* 0C0AA736 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0AA738 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA768u, 4); goto L_0C0AA768; }  /* 0C0AA73A bt */
L_0C0AA73C: BLKS(0x0C0AA73Cu);
	r3 = 0x38u;  /* 0C0AA73C mov #imm,Rn */
	IF(0x0C0AA73Eu); MACL = r2 * r3;  /* 0C0AA73E mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA742u, 4);  /* 0C0AA740 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA742 mov Rm,Rn */
	IF(0x0C0AA744u); r3 = MACL;  /* 0C0AA744 sts macl,Rn */
	r3 += r0;  /* 0C0AA746 add Rm,Rn */
	UPD(0x0C0AA748u, 3);
L_0C0AA748: BLKS(0x0C0AA748u);
	r5 = R32(r3); UPD(0x0C0AA74Au, 1);  /* 0C0AA748 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AA74A tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA75Eu, 4); goto L_0C0AA75E; } goto L_0C0AA750; }  /* 0C0AA74C bf/s */
L_0C0AA750: BLKS(0x0C0AA750u);
	r0 = r4;  /* 0C0AA750 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C0AA754u, 3);  /* 0C0AA752 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0AA754 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AA756 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA758 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA770u, 6); goto L_0C0AA770; } UPD(0x0C0AA75Eu, 1); goto L_0C0AA75E; }  /* 0C0AA75A bt/s */
L_0C0AA75E: BLKS(0x0C0AA75Eu);
	r5 = r2;  /* 0C0AA75E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AA760 add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C0AA762 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0AA764 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA748u, 7); goto L_0C0AA748; }  /* 0C0AA766 bf */
L_0C0AA768: BLKS(0x0C0AA768u);
	r0 = 0x0u;  /* 0C0AA768 mov #imm,Rn */
	UPD(0x0C0AA76Au, 1);
L_0C0AA76A: BLKS(0x0C0AA76Au);
	r15 = r14;  /* 0C0AA76A mov Rm,Rn */
	IF(0x0C0AA76Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA76C rts */
L_0C0AA770: BLKS(0x0C0AA770u);
	r0 = 0xC275DC4u; UPD(0x0C0AA772u, 1);  /* 0C0AA770 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0AA772 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AA776u, 2);  /* 0C0AA774 mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AA76Au, 3); goto L_0C0AA76A; }  /* 0C0AA776 bra */
}

/* FUN_0c0aa790 */
void f_0C0AA790(sh3_t *c)
{
	LOCALS;
L_0C0AA790: BLKS(0x0C0AA790u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0AA790 exts.w Rm,Rn */
	r0 = 0x40u;  /* 0C0AA792 mov #imm,Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0AA794 cmp/gt Rm,Rn */
	IF(0x0C0AA796u); r0 = T;  /* 0C0AA796 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AA798 tst Rm,Rn */
	IF(0x0C0AA79Au); r2 = T;  /* 0C0AA79A movt Rn */
	r0 |= r2;  /* 0C0AA79C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA7A0u, 8);  /* 0C0AA79E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0AA7A0 tst Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C0AA7A4u, 2);  /* 0C0AA7A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA7A4 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA82Cu, 4); goto L_0C0AA82C; } goto L_0C0AA7AA; }  /* 0C0AA7A6 bf/s */
L_0C0AA7AA: BLKS(0x0C0AA7AAu);
	r3 = 0xC26C8C6u; UPD(0x0C0AA7ACu, 2);  /* 0C0AA7AA mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0AA7AEu, 1);  /* 0C0AA7AC mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AA7B0u, 1);  /* 0C0AA7AE mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA7B0 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA7E8u, 4); goto L_0C0AA7E8; }  /* 0C0AA7B2 bt */
L_0C0AA7B4: BLKS(0x0C0AA7B4u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA7B4 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA7B6 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA7B8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AA7E8u, 6); goto L_0C0AA7E8; } goto L_0C0AA7BE; }  /* 0C0AA7BA bt/s */
L_0C0AA7BE: BLKS(0x0C0AA7BEu);
	IF(0x0C0AA7BEu); MACL = r3 * r2;  /* 0C0AA7BE mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA7C2u, 4);  /* 0C0AA7C0 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA7C2 mov Rm,Rn */
	IF(0x0C0AA7C4u); r2 = MACL;  /* 0C0AA7C4 sts macl,Rn */
	r2 += r0;  /* 0C0AA7C6 add Rm,Rn */
	UPD(0x0C0AA7C8u, 3);
L_0C0AA7C8: BLKS(0x0C0AA7C8u);
	r5 = R32(r2); UPD(0x0C0AA7CAu, 1);  /* 0C0AA7C8 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AA7CA tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA7DEu, 4); goto L_0C0AA7DE; } goto L_0C0AA7D0; }  /* 0C0AA7CC bf/s */
L_0C0AA7D0: BLKS(0x0C0AA7D0u);
	r0 = r4;  /* 0C0AA7D0 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA7D4u, 3);  /* 0C0AA7D2 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0AA7D4 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AA7D6 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA7D8 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA850u, 6); goto L_0C0AA850; } UPD(0x0C0AA7DEu, 1); goto L_0C0AA7DE; }  /* 0C0AA7DA bt/s */
L_0C0AA7DE: BLKS(0x0C0AA7DEu);
	r5 = r3;  /* 0C0AA7DE mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AA7E0 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0AA7E2 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA7E4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA7C8u, 7); goto L_0C0AA7C8; }  /* 0C0AA7E6 bf */
L_0C0AA7E8: BLKS(0x0C0AA7E8u);
	r6 = 0xC28628Au; UPD(0x0C0AA7EAu, 1);  /* 0C0AA7E8 mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0AA7ECu, 1);  /* 0C0AA7EA mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AA7EEu, 1);  /* 0C0AA7EC mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0AA7EE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AA82Au, 4); goto L_0C0AA82A; }  /* 0C0AA7F0 bt */
L_0C0AA7F2: BLKS(0x0C0AA7F2u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0AA7F2 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AA7F4 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0AA7F6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AA82Au, 6); goto L_0C0AA82A; }  /* 0C0AA7F8 bt */
L_0C0AA7FA: BLKS(0x0C0AA7FAu);
	r2 = 0x38u;  /* 0C0AA7FA mov #imm,Rn */
	IF(0x0C0AA7FCu); MACL = r3 * r2;  /* 0C0AA7FC mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AA800u, 4);  /* 0C0AA7FE mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0AA800 mov Rm,Rn */
	IF(0x0C0AA802u); r2 = MACL;  /* 0C0AA802 sts macl,Rn */
	r2 += r0;  /* 0C0AA804 add Rm,Rn */
	IF(0x0C0AA806u); ;  /* 0C0AA806 nop */
	UPD(0x0C0AA808u, 4);
L_0C0AA808: BLKS(0x0C0AA808u);
	r0 = R32(r2); UPD(0x0C0AA80Au, 1);  /* 0C0AA808 mov.l @Rm,Rn */
	r0 &= 0x3u;  /* 0C0AA80A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AA80C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA820u, 5); goto L_0C0AA820; } goto L_0C0AA812; }  /* 0C0AA80E bt/s */
L_0C0AA812: BLKS(0x0C0AA812u);
	r5 = r4;  /* 0C0AA812 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0AA816u, 3);  /* 0C0AA814 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AA816 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0AA818 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AA81A tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AA840u, 6); goto L_0C0AA840; } UPD(0x0C0AA820u, 1); goto L_0C0AA820; }  /* 0C0AA81C bt/s */
L_0C0AA820: BLKS(0x0C0AA820u);
	r0 = r3;  /* 0C0AA820 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AA822 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AA824 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0AA826 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AA808u, 7); goto L_0C0AA808; }  /* 0C0AA828 bf */
L_0C0AA82A: BLKS(0x0C0AA82Au);
	r0 = 0x0u;  /* 0C0AA82A mov #imm,Rn */
	UPD(0x0C0AA82Cu, 1);
L_0C0AA82C: BLKS(0x0C0AA82Cu);
	r15 = r14;  /* 0C0AA82C mov Rm,Rn */
	IF(0x0C0AA82Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AA82E rts */
L_0C0AA840: BLKS(0x0C0AA840u);
	r5 = 0x240u; UPD(0x0C0AA842u, 1);  /* 0C0AA840 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AA842 add #imm,Rn */
	r4 = 0xC26C8C6u; UPD(0x0C0AA846u, 2);  /* 0C0AA844 mov.l @(disp,pc),Rn */
	r1 = 0xC28628Au; UPD(0x0C0AA848u, 1);  /* 0C0AA846 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C0AA84Au, 1);  /* 0C0AA848 mov.w Rm,@Rn */
L_0C0AA84A: BLKS(0x0C0AA84Au);
	W16(r1, r3); UPD(0x0C0AA84Cu, 1);  /* 0C0AA84A mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AA82Cu, 3); goto L_0C0AA82C; }  /* 0C0AA84C bra */
L_0C0AA850: BLKS(0x0C0AA850u);
	r1 = 0xC26C8C6u; UPD(0x0C0AA852u, 1);  /* 0C0AA850 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AA84Au, 3); goto L_0C0AA84A; }  /* 0C0AA852 bra */
}

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


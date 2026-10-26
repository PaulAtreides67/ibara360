#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0bce80 */
void blk_f_0C0BCE80(sh3_t *c)
{
	LOCALS;
L_0C0BCE80: BLKS(0x0C0BCE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE82u, 1);  /* 0C0BCE80 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0BCE82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE86u, 2);  /* 0C0BCE84 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s8)r7;  /* 0C0BCE86 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE8Au, 2);  /* 0C0BCE88 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BCE8A mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE8Eu, 2);  /* 0C0BCE8C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE90u, 1);  /* 0C0BCE8E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE92u, 1);  /* 0C0BCE90 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCE94u, 1);  /* 0C0BCE92 mov.l Rm,@-Rn */
	IF(0x0C0BCE94u); r15 -= 4; W32(r15, PR); UPD(0x0C0BCE96u, 1);  /* 0C0BCE94 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0BCE96 add #imm,Rn */
	r14 = r15;  /* 0C0BCE98 mov Rm,Rn */
	r3 += r14;  /* 0C0BCE9A add Rm,Rn */
	r4 = R32(r3 + 0x8u); UPD(0x0C0BCE9Eu, 4);  /* 0C0BCE9C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0BCE9E exts.w Rm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0BCEA2u, 2);  /* 0C0BCEA0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0BCEA4u, 1);  /* 0C0BCEA2 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C0BCEA6u, 1);  /* 0C0BCEA4 mov.l Rm,@(disp,Rn) */
	r8 = R32(r3 + 0x0u); UPD(0x0C0BCEA8u, 1);  /* 0C0BCEA6 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BCEA8 exts.w Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BCEACu, 2);  /* 0C0BCEAA mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s8)r8;  /* 0C0BCEAC exts.b Rm,Rn */
	r2 = 0xFF400000u; UPD(0x0C0BCEB0u, 2);  /* 0C0BCEAE mov.l @(disp,pc),Rn */
	r6 = R32(r3 + 0x4u); UPD(0x0C0BCEB2u, 1);  /* 0C0BCEB0 mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C0BCEB2 add Rm,Rn */
	W32(r14, r5); UPD(0x0C0BCEB6u, 2);  /* 0C0BCEB4 mov.l Rm,@Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C0BCEB6 exts.w Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0BCEBAu, 2);  /* 0C0BCEB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BCEBAu); T = (s32)r2 >= 0;  /* 0C0BCEBA cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BCEC4u, 4); goto L_0C0BCEC4; } UPD(0x0C0BCEC0u, 1); goto L_0C0BCEC0; }  /* 0C0BCEBC bt/s */
L_0C0BCEC0: BLKS(0x0C0BCEC0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BD020u, 3); goto L_0C0BD020; }  /* 0C0BCEC0 bra */
L_0C0BCEC4: BLKS(0x0C0BCEC4u);
	r5 = 0xC00000u; UPD(0x0C0BCEC6u, 1);  /* 0C0BCEC4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0BCEC6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCEDCu, 4); goto L_0C0BCEDC; }  /* 0C0BCEC8 bt */
L_0C0BCECA: BLKS(0x0C0BCECAu);
	r10 = R32(r14 + 0x4u); UPD(0x0C0BCECCu, 1);  /* 0C0BCECA mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C0BCECEu, 1);  /* 0C0BCECC mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C0BCECE add Rm,Rn */
	IF(0x0C0BCED0u); T = (s32)r2 >= 0;  /* 0C0BCED0 cmp/pz Rn */
	if (T) { UPD(0x0C0BCED6u, 5); goto L_0C0BCED6; }  /* 0C0BCED2 bt */
L_0C0BCED4: BLKS(0x0C0BCED4u);
	r2 = 0u - r2;  /* 0C0BCED4 neg Rm,Rn */
	UPD(0x0C0BCED6u, 1);
L_0C0BCED6: BLKS(0x0C0BCED6u);
	r12 = 0xA00000u; UPD(0x0C0BCED8u, 1);  /* 0C0BCED6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r12;  /* 0C0BCED8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCF00u, 4); goto L_0C0BCF00; }  /* 0C0BCEDA bf */
L_0C0BCEDC: BLKS(0x0C0BCEDCu);
	r14 += 0x20u;  /* 0C0BCEDC add #imm,Rn */
	UPD(0x0C0BCEDEu, 1);
L_0C0BCEDE: BLKS(0x0C0BCEDEu);
	r15 = r14;  /* 0C0BCEDE mov Rm,Rn */
	IF(0x0C0BCEE0u); PR = R32(r15); r15 += 4; UPD(0x0C0BCEE2u, 2);  /* 0C0BCEE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BCEE4u, 1);  /* 0C0BCEE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BCEE6u, 1);  /* 0C0BCEE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BCEE8u, 1);  /* 0C0BCEE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BCEEAu, 1);  /* 0C0BCEE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BCEECu, 1);  /* 0C0BCEEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BCEEEu, 1);  /* 0C0BCEEC mov.l @Rm+,Rn */
	IF(0x0C0BCEEEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BCEEE rts */
L_0C0BCF00: BLKS(0x0C0BCF00u);
	r8 = 0xC0C2360u; UPD(0x0C0BCF02u, 1);  /* 0C0BCF00 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0BCF02 mov Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BCF06u, 2);  /* 0C0BCF04 mov.l @(disp,pc),Rn */
	IF(0x0C0BCF06u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0BCF06 rotl Rn */
	IF(0x0C0BCF08u); r13 = T;  /* 0C0BCF08 movt Rn */
	IF(0x0C0BCF0Au); { u32 t_ = r8; PR = 0x0C0BCF0Eu; W32(r14 + 0x18u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCF0Eu); }  /* 0C0BCF0A jsr @Rn */
L_0C0BCF0E: BLKS(0x0C0BCF0Eu);
	IF(0x0C0BCF0Eu); MACL = r11 * r0;  /* 0C0BCF0E mul.l Rm,Rn */
	r13 += r11;  /* 0C0BCF10 add Rm,Rn */
	IF(0x0C0BCF12u); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C0BCF12 shar Rn */
	IF(0x0C0BCF14u); r3 = MACL;  /* 0C0BCF14 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BCF16 swap.w Rm,Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C0BCF18 exts.w Rm,Rn */
	r13 += r11;  /* 0C0BCF1A add Rm,Rn */
	r13 += 0x1u;  /* 0C0BCF1C add #imm,Rn */
	r8 = 0xC0BCD20u; UPD(0x0C0BCF20u, 10);  /* 0C0BCF1E mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r13;  /* 0C0BCF20 exts.w Rm,Rn */
	IF(0x0C0BCF22u); ;  /* 0C0BCF22 nop */
	UPD(0x0C0BCF24u, 2);
L_0C0BCF24: BLKS(0x0C0BCF24u);
	IF(0x0C0BCF24u); { u32 t_ = r8; PR = 0x0C0BCF28u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCD20, 0x0C0BCD20u, 0x0C0BCF28u); }  /* 0C0BCF24 jsr @Rn */
L_0C0BCF28: BLKS(0x0C0BCF28u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0BCF28 exts.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BCF2A tst Rm,Rn */
	{ u32 c_ = !T; r7 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BCF50u, 5); goto L_0C0BCF50; } goto L_0C0BCF30; }  /* 0C0BCF2C bf/s */
L_0C0BCF30: BLKS(0x0C0BCF30u);
	IF(0x0C0BCF30u); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C0BCF30 rotl Rn */
	IF(0x0C0BCF32u); r6 = T;  /* 0C0BCF32 movt Rn */
	r11 += r6;  /* 0C0BCF34 add Rm,Rn */
	IF(0x0C0BCF36u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BCF36 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BCF38 tst Rm,Rn */
	if (!T) { UPD(0x0C0BCF24u, 9); goto L_0C0BCF24; }  /* 0C0BCF3A bf */
L_0C0BCF3C: BLKS(0x0C0BCF3Cu);
	r14 += 0x20u;  /* 0C0BCF3C add #imm,Rn */
	{ IF(0x0C0BCF40u); ; /* slot nop */ UPD(0x0C0BCEDEu, 4); goto L_0C0BCEDE; }  /* 0C0BCF3E bra */
L_0C0BCF50: BLKS(0x0C0BCF50u);
	r12 = 0x0u;  /* 0C0BCF50 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BCF52 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BCEDCu, 5); goto L_0C0BCEDC; }  /* 0C0BCF54 bt */
L_0C0BCF56: BLKS(0x0C0BCF56u);
	r0 = r9;  /* 0C0BCF56 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0BCF58 and #imm,r0 */
	r13 = 0xC0C2360u; UPD(0x0C0BCF5Cu, 3);  /* 0C0BCF5A mov.l @(disp,pc),Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C0BCF5Eu, 1);  /* 0C0BCF5C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BCF5Eu); ;  /* 0C0BCF5E nop */
	UPD(0x0C0BCF60u, 1);
L_0C0BCF60: BLKS(0x0C0BCF60u);
	r6 = R32(r14 + 0x18u); UPD(0x0C0BCF62u, 1);  /* 0C0BCF60 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BCF62 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r10 = v_; } UPD(0x0C0BCF66u, 2);  /* 0C0BCF64 mov.w @Rm+,Rn */
	r3 = 0x1Eu;  /* 0C0BCF66 mov #imm,Rn */
	IF(0x0C0BCF68u); MACL = r10 * r8;  /* 0C0BCF68 mul.l Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0BCF6Cu, 4);  /* 0C0BCF6A mov.l @(disp,Rm),Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BCF6Eu, 1);  /* 0C0BCF6C mov.l @(disp,pc),Rn */
	IF(0x0C0BCF6Eu); r8 = MACL;  /* 0C0BCF6E sts macl,Rn */
	r2 = 0xC0000002u; UPD(0x0C0BCF72u, 2);  /* 0C0BCF70 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BCF72 add Rm,Rn */
	r2 |= r1;  /* 0C0BCF74 or Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0BCF78u, 3);  /* 0C0BCF76 mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C0BCF7Au, 1);  /* 0C0BCF78 mov.l Rm,@Rn */
	IF(0x0C0BCF7Au); { u32 t_ = r13; PR = 0x0C0BCF7Eu; W32(r14 + 0x18u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCF7Eu); }  /* 0C0BCF7A jsr @Rn */
L_0C0BCF7E: BLKS(0x0C0BCF7Eu);
	r0 &= 0x7u;  /* 0C0BCF7E and #imm,r0 */
	IF(0x0C0BCF80u); { u32 t_ = r13; PR = 0x0C0BCF84u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCF84u); }  /* 0C0BCF80 jsr @Rn */
L_0C0BCF84: BLKS(0x0C0BCF84u);
	r5 = R32(r14); UPD(0x0C0BCF86u, 1);  /* 0C0BCF84 mov.l @Rm,Rn */
	r0 &= 0x7u;  /* 0C0BCF86 and #imm,r0 */
	r9 = R32(r14 + 0x4u); UPD(0x0C0BCF8Au, 2);  /* 0C0BCF88 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BCF8A mov Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C0BCF8Eu, 2);  /* 0C0BCF8C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r9); UPD(0x0C0BCF90u, 1);  /* 0C0BCF8E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BCF90u); { u32 t_ = r13; PR = 0x0C0BCF94u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCF94u); }  /* 0C0BCF90 jsr @Rn */
L_0C0BCF94: BLKS(0x0C0BCF94u);
	r7 = 0x1FFu; UPD(0x0C0BCF96u, 1);  /* 0C0BCF94 mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C0BCF98u, 1);  /* 0C0BCF96 mov.l @(disp,Rm),Rn */
	r7 &= r0;  /* 0C0BCF98 and Rm,Rn */
	IF(0x0C0BCF9Au); MACL = r7 * r4;  /* 0C0BCF9A mul.l Rm,Rn */
	r0 = 0xFFFFFFF7u;  /* 0C0BCF9C mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0BCFA0u, 5);  /* 0C0BCF9E mov.l @(disp,Rm),Rn */
	IF(0x0C0BCFA0u); r10 = MACL;  /* 0C0BCFA0 sts macl,Rn */
	IF(0x0C0BCFA2u); ARG0(0x4A0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0BCFA2 shad Rm,Rn */
	r2 = r4;  /* 0C0BCFA4 mov Rm,Rn */
	IF(0x0C0BCFA6u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0BCFA6 shar Rn */
	r10 += r6;  /* 0C0BCFA8 add Rm,Rn */
	r10 -= r2;  /* 0C0BCFAA sub Rm,Rn */
	IF(0x0C0BCFACu); { u32 t_ = r13; PR = 0x0C0BCFB0u; r9 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 8); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCFB0u); }  /* 0C0BCFAC jsr @Rn */
L_0C0BCFB0: BLKS(0x0C0BCFB0u);
	r3 = 0x7FFu; UPD(0x0C0BCFB2u, 1);  /* 0C0BCFB0 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BCFB2 mov Rm,Rn */
	r5 = 0x200u; UPD(0x0C0BCFB6u, 2);  /* 0C0BCFB4 mov.w @(disp,pc),Rn */
	r10 &= r3;  /* 0C0BCFB6 and Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BCFBAu, 2);  /* 0C0BCFB8 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C0BCFBA add Rm,Rn */
	r4 = r9;  /* 0C0BCFBC mov Rm,Rn */
	IF(0x0C0BCFBEu); { u32 t_ = r0; PR = 0x0C0BCFC2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BCFC2u); }  /* 0C0BCFBE jsr @Rn */
L_0C0BCFC2: BLKS(0x0C0BCFC2u);
	r4 = r9;  /* 0C0BCFC2 mov Rm,Rn */
	r1 = 0x6u;  /* 0C0BCFC4 mov #imm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BCFC8u, 3);  /* 0C0BCFC6 mov.l @(disp,pc),Rn */
	IF(0x0C0BCFC8u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BCFC8 shld Rm,Rn */
	r5 = r10;  /* 0C0BCFCA mov Rm,Rn */
	IF(0x0C0BCFCCu); { u32 t_ = r9; PR = 0x0C0BCFD0u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BCFD0u); }  /* 0C0BCFCC jsr @Rn */
L_0C0BCFD0: BLKS(0x0C0BCFD0u);
	r7 = 0x6u;  /* 0C0BCFD0 mov #imm,Rn */
	IF(0x0C0BCFD2u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BCFD2 shld Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BCFD6u, 3);  /* 0C0BCFD4 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0BCFD6 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0BCFD8 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BCFDCu, 3);  /* 0C0BCFDA mov.l Rm,@(disp,Rn) */
	r4 += 0x30u;  /* 0C0BCFDC add #imm,Rn */
	r8 += 0x31u;  /* 0C0BCFDE add #imm,Rn */
	W8(r8, r0); UPD(0x0C0BCFE2u, 3);  /* 0C0BCFE0 mov.b Rm,@Rn */
	r6 = 0x0u;  /* 0C0BCFE2 mov #imm,Rn */
	IF(0x0C0BCFE4u); { u32 t_ = r13; PR = 0x0C0BCFE8u; W8(r4, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BCFE8u); }  /* 0C0BCFE4 jsr @Rn */
L_0C0BCFE8: BLKS(0x0C0BCFE8u);
	r8 += 0x1u;  /* 0C0BCFE8 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0BCFEA and #imm,r0 */
	W8(r8, r0); UPD(0x0C0BCFEEu, 3);  /* 0C0BCFEC mov.b Rm,@Rn */
	r9 = r12;  /* 0C0BCFEE mov Rm,Rn */
	r0 = 0xBu;  /* 0C0BCFF0 mov #imm,Rn */
	IF(0x0C0BCFF2u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BCFF4u, 3);  /* 0C0BCFF2 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0BCFF4 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BCFF8u, 2);  /* 0C0BCFF6 mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0BCFF8 mov #imm,Rn */
	IF(0x0C0BCFFAu); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BCFFCu, 2);  /* 0C0BCFFA mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0BCFFC add #imm,Rn */
	{ u32 v_ = r3; r8 -= 1; W8(r8, v_); } UPD(0x0C0BD000u, 2);  /* 0C0BCFFE mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0BD000 exts.w Rm,Rn */
	r10 = 0x1104FFFFu; UPD(0x0C0BD004u, 2);  /* 0C0BD002 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD004 add #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0BD008u, 2);  /* 0C0BD006 mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD008 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0BD00Cu, 2);  /* 0C0BD00A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BCF60u, 3); goto L_0C0BCF60; } UPD(0x0C0BD010u, 1); goto L_0C0BD010; }  /* 0C0BD00C bf/s */
L_0C0BD010: BLKS(0x0C0BD010u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C0BCEDEu, 3); goto L_0C0BCEDE; }  /* 0C0BD010 bra */
L_0C0BD020: BLKS(0x0C0BD020u);
	{ IF(0x0C0BD022u); ; /* slot nop */ UPD(0x0C0BCEC4u, 3); goto L_0C0BCEC4; }  /* 0C0BD020 bra */
}

/* FUN_0c0bd060 */
void blk_f_0C0BD060(sh3_t *c)
{
	LOCALS;
L_0C0BD060: BLKS(0x0C0BD060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD062u, 1);  /* 0C0BD060 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD064u, 1);  /* 0C0BD062 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD066u, 1);  /* 0C0BD064 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BD066 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD06Au, 2);  /* 0C0BD068 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0BD06A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD06Eu, 2);  /* 0C0BD06C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD070u, 1);  /* 0C0BD06E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD072u, 1);  /* 0C0BD070 mov.l Rm,@-Rn */
	IF(0x0C0BD072u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD074u, 1);  /* 0C0BD072 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BD074 add #imm,Rn */
	r14 = r15;  /* 0C0BD076 mov Rm,Rn */
	W32(r14, r5); UPD(0x0C0BD07Au, 3);  /* 0C0BD078 mov.l Rm,@Rn */
	r5 = R32(r14 + 0x3Cu); UPD(0x0C0BD07Cu, 1);  /* 0C0BD07A mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BD07Eu, 1);  /* 0C0BD07C mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r5;  /* 0C0BD07E exts.w Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C0BD082u, 2);  /* 0C0BD080 mov.l @(disp,Rm),Rn */
	r1 = r12;  /* 0C0BD082 mov Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C0BD086u, 2);  /* 0C0BD084 mov.l @(disp,pc),Rn */
	IF(0x0C0BD086u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BD086 rotl Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C0BD08Au, 2);  /* 0C0BD088 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)r7;  /* 0C0BD08A exts.b Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BD08Eu, 2);  /* 0C0BD08C mov.l @(disp,pc),Rn */
	IF(0x0C0BD08Eu); r10 = T;  /* 0C0BD08E movt Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C0BD092u, 2);  /* 0C0BD090 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0BD092 add Rm,Rn */
	IF(0x0C0BD094u); { u32 t_ = r8; PR = 0x0C0BD098u; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD098u); }  /* 0C0BD094 jsr @Rn */
L_0C0BD098: BLKS(0x0C0BD098u);
	IF(0x0C0BD098u); MACL = r12 * r0;  /* 0C0BD098 mul.l Rm,Rn */
	IF(0x0C0BD09Au); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0BD09A shar Rn */
	r8 = 0xC0BCAE0u; UPD(0x0C0BD09Eu, 4);  /* 0C0BD09C mov.l @(disp,pc),Rn */
	IF(0x0C0BD09Eu); r3 = MACL;  /* 0C0BD09E sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BD0A0 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BD0A2 exts.w Rm,Rn */
	r10 += r0;  /* 0C0BD0A4 add Rm,Rn */
	r10 += 0x1u;  /* 0C0BD0A6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0BD0A8 exts.w Rm,Rn */
	IF(0x0C0BD0AAu); ;  /* 0C0BD0AA nop */
	UPD(0x0C0BD0ACu, 7);
L_0C0BD0AC: BLKS(0x0C0BD0ACu);
	IF(0x0C0BD0ACu); { u32 t_ = r8; PR = 0x0C0BD0B0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCAE0, 0x0C0BCAE0u, 0x0C0BD0B0u); }  /* 0C0BD0AC jsr @Rn */
L_0C0BD0B0: BLKS(0x0C0BD0B0u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0BD0B0 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BD0B2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD0E0u, 5); goto L_0C0BD0E0; } goto L_0C0BD0B8; }  /* 0C0BD0B4 bf/s */
L_0C0BD0B8: BLKS(0x0C0BD0B8u);
	IF(0x0C0BD0B8u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0BD0B8 rotl Rn */
	IF(0x0C0BD0BAu); r13 = T;  /* 0C0BD0BA movt Rn */
	r11 += r13;  /* 0C0BD0BC add Rm,Rn */
	IF(0x0C0BD0BEu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BD0BE shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BD0C0 tst Rm,Rn */
	if (!T) { UPD(0x0C0BD0ACu, 9); goto L_0C0BD0AC; }  /* 0C0BD0C2 bf */
L_0C0BD0C4: BLKS(0x0C0BD0C4u);
	r14 += 0x18u;  /* 0C0BD0C4 add #imm,Rn */
	UPD(0x0C0BD0C6u, 1);
L_0C0BD0C6: BLKS(0x0C0BD0C6u);
	r15 = r14;  /* 0C0BD0C6 mov Rm,Rn */
	IF(0x0C0BD0C8u); PR = R32(r15); r15 += 4; UPD(0x0C0BD0CAu, 2);  /* 0C0BD0C8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD0CCu, 1);  /* 0C0BD0CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD0CEu, 1);  /* 0C0BD0CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD0D0u, 1);  /* 0C0BD0CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD0D2u, 1);  /* 0C0BD0D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD0D4u, 1);  /* 0C0BD0D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD0D6u, 1);  /* 0C0BD0D4 mov.l @Rm+,Rn */
	IF(0x0C0BD0D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD0D6 rts */
L_0C0BD0E0: BLKS(0x0C0BD0E0u);
	r12 = 0x0u;  /* 0C0BD0E0 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD0E2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BD0C4u, 5); goto L_0C0BD0C4; }  /* 0C0BD0E4 bt */
L_0C0BD0E6: BLKS(0x0C0BD0E6u);
	r0 = r9;  /* 0C0BD0E6 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0BD0E8 and #imm,r0 */
	r13 = 0xC0C2360u; UPD(0x0C0BD0ECu, 3);  /* 0C0BD0EA mov.l @(disp,pc),Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0BD0EEu, 1);  /* 0C0BD0EC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD0EEu); ;  /* 0C0BD0EE nop */
	UPD(0x0C0BD0F0u, 1);
L_0C0BD0F0: BLKS(0x0C0BD0F0u);
	r3 = R32(r14 + 0x10u); UPD(0x0C0BD0F2u, 1);  /* 0C0BD0F0 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BD0F2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0BD0F6u, 2);  /* 0C0BD0F4 mov.w @Rm+,Rn */
	r5 = 0x16u;  /* 0C0BD0F6 mov #imm,Rn */
	IF(0x0C0BD0F8u); MACL = r0 * r8;  /* 0C0BD0F8 mul.l Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0BD0FCu, 4);  /* 0C0BD0FA mov.l @(disp,Rm),Rn */
	r4 = 0x18u;  /* 0C0BD0FC mov #imm,Rn */
	r9 = 0xC28F65Cu; UPD(0x0C0BD100u, 2);  /* 0C0BD0FE mov.l @(disp,pc),Rn */
	IF(0x0C0BD100u); r8 = MACL;  /* 0C0BD100 sts macl,Rn */
	r10 = 0xC062780u; UPD(0x0C0BD104u, 2);  /* 0C0BD102 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0BD104 add Rm,Rn */
	r6 = 0xC0000002u; UPD(0x0C0BD108u, 2);  /* 0C0BD106 mov.l @(disp,pc),Rn */
	r6 |= r7;  /* 0C0BD108 or Rm,Rn */
	W32(r8, r6); UPD(0x0C0BD10Cu, 2);  /* 0C0BD10A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0BD10Eu, 1);  /* 0C0BD10C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD10Eu); { u32 t_ = r10; PR = 0x0C0BD112u; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BD112u); }  /* 0C0BD10E jsr @Rn */
L_0C0BD112: BLKS(0x0C0BD112u);
	IF(0x0C0BD112u); { u32 t_ = r13; PR = 0x0C0BD116u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD116u); }  /* 0C0BD112 jsr @Rn */
L_0C0BD116: BLKS(0x0C0BD116u);
	r1 = R32(r14); UPD(0x0C0BD118u, 1);  /* 0C0BD116 mov.l @Rm,Rn */
	r0 &= 0x7u;  /* 0C0BD118 and #imm,r0 */
	r4 = R32(r14 + 0x4u); UPD(0x0C0BD11Cu, 2);  /* 0C0BD11A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r1); UPD(0x0C0BD11Eu, 1);  /* 0C0BD11C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r4); UPD(0x0C0BD120u, 1);  /* 0C0BD11E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD120u); { u32 t_ = r13; PR = 0x0C0BD124u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD124u); }  /* 0C0BD120 jsr @Rn */
L_0C0BD124: BLKS(0x0C0BD124u);
	r3 = 0x1FFu; UPD(0x0C0BD126u, 1);  /* 0C0BD124 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BD126 mov Rm,Rn */
	IF(0x0C0BD128u); { u32 t_ = r13; PR = 0x0C0BD12Cu; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD12Cu); }  /* 0C0BD128 jsr @Rn */
L_0C0BD12C: BLKS(0x0C0BD12Cu);
	r2 = 0x7FFu; UPD(0x0C0BD12Eu, 1);  /* 0C0BD12C mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0BD12E mov Rm,Rn */
	r0 = 0x200u; UPD(0x0C0BD132u, 2);  /* 0C0BD130 mov.w @(disp,pc),Rn */
	r9 &= r2;  /* 0C0BD132 and Rm,Rn */
	r9 += r0;  /* 0C0BD134 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BD138u, 3);  /* 0C0BD136 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BD138 mov Rm,Rn */
	IF(0x0C0BD13Au); { u32 t_ = r0; PR = 0x0C0BD13Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BD13Eu); }  /* 0C0BD13A jsr @Rn */
L_0C0BD13E: BLKS(0x0C0BD13Eu);
	r5 = r9;  /* 0C0BD13E mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BD142u, 2);  /* 0C0BD140 mov.l @(disp,pc),Rn */
	IF(0x0C0BD142u); r0 <<= 8;  /* 0C0BD142 shll8 Rn */
	r4 = r10;  /* 0C0BD144 mov Rm,Rn */
	IF(0x0C0BD146u); { u32 t_ = r9; PR = 0x0C0BD14Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BD14Au); }  /* 0C0BD146 jsr @Rn */
L_0C0BD14A: BLKS(0x0C0BD14Au);
	IF(0x0C0BD14Au); r0 <<= 8;  /* 0C0BD14A shll8 Rn */
	r10 = 0x0u;  /* 0C0BD14C mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BD150u, 3);  /* 0C0BD14E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0BD150 mov Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0BD154u, 2);  /* 0C0BD152 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0BD154 add #imm,Rn */
	r8 += 0x31u;  /* 0C0BD156 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0BD15Au, 3);  /* 0C0BD158 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C0BD15A mov #imm,Rn */
	IF(0x0C0BD15Cu); { u32 t_ = r13; PR = 0x0C0BD160u; W8(r6, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD160u); }  /* 0C0BD15C jsr @Rn */
L_0C0BD160: BLKS(0x0C0BD160u);
	r8 += 0x1u;  /* 0C0BD160 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0BD162 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0BD166u, 3);  /* 0C0BD164 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0BD166 mov Rm,Rn */
	r0 = 0xBu;  /* 0C0BD168 mov #imm,Rn */
	IF(0x0C0BD16Au); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD16Cu, 3);  /* 0C0BD16A mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0BD16C add #imm,Rn */
	W8(r8, r5); UPD(0x0C0BD170u, 2);  /* 0C0BD16E mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0BD170 mov #imm,Rn */
	IF(0x0C0BD172u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD174u, 2);  /* 0C0BD172 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0BD174 add #imm,Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0BD178u, 2);  /* 0C0BD176 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0BD178 exts.w Rm,Rn */
	r4 = 0x1104FFFFu; UPD(0x0C0BD17Cu, 2);  /* 0C0BD17A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD17C add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0BD180u, 2);  /* 0C0BD17E mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD180 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0BD184u, 2);  /* 0C0BD182 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD0F0u, 3); goto L_0C0BD0F0; } UPD(0x0C0BD188u, 1); goto L_0C0BD188; }  /* 0C0BD184 bf/s */
L_0C0BD188: BLKS(0x0C0BD188u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0BD0C6u, 3); goto L_0C0BD0C6; }  /* 0C0BD188 bra */
}

/* FUN_0c0bd1c0 */
void blk_f_0C0BD1C0(sh3_t *c)
{
	LOCALS;
L_0C0BD1C0: BLKS(0x0C0BD1C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1C2u, 1);  /* 0C0BD1C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1C4u, 1);  /* 0C0BD1C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1C6u, 1);  /* 0C0BD1C4 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BD1C6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1CAu, 2);  /* 0C0BD1C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1CCu, 1);  /* 0C0BD1CA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1CEu, 1);  /* 0C0BD1CC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD1D0u, 1);  /* 0C0BD1CE mov.l Rm,@-Rn */
	IF(0x0C0BD1D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD1D2u, 1);  /* 0C0BD1D0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0BD1D2 add #imm,Rn */
	r14 = r15;  /* 0C0BD1D4 mov Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BD1D8u, 3);  /* 0C0BD1D6 mov.l Rm,@(disp,Rn) */
	r13 = R32(r14 + 0x3Cu); UPD(0x0C0BD1DAu, 1);  /* 0C0BD1D8 mov.l @(disp,Rm),Rn */
	r6 = 0x40u;  /* 0C0BD1DA mov #imm,Rn */
	W32(r14, r5); UPD(0x0C0BD1DEu, 2);  /* 0C0BD1DC mov.l Rm,@Rn */
	r6 += r14;  /* 0C0BD1DE add Rm,Rn */
	r11 = (u32)(s32)(s8)r13;  /* 0C0BD1E0 exts.b Rm,Rn */
	W32(r14 + 0xCu, r11); UPD(0x0C0BD1E4u, 3);  /* 0C0BD1E2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BD1E6u, 1);  /* 0C0BD1E4 mov.l @(disp,Rm),Rn */
	r10 = R32(r6 + 0x0u); UPD(0x0C0BD1E8u, 1);  /* 0C0BD1E6 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0BD1E8 exts.w Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C0BD1ECu, 2);  /* 0C0BD1EA mov.l Rm,@(disp,Rn) */
	r1 = r12;  /* 0C0BD1EC mov Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C0BD1F0u, 2);  /* 0C0BD1EE mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)r10;  /* 0C0BD1F0 exts.b Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BD1F4u, 2);  /* 0C0BD1F2 mov.l @(disp,pc),Rn */
	IF(0x0C0BD1F4u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BD1F4 rotl Rn */
	IF(0x0C0BD1F6u); r10 = T;  /* 0C0BD1F6 movt Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C0BD1FAu, 3);  /* 0C0BD1F8 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0BD1FA add Rm,Rn */
	IF(0x0C0BD1FCu); { u32 t_ = r8; PR = 0x0C0BD200u; W32(r14 + 0x14u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD200u); }  /* 0C0BD1FC jsr @Rn */
L_0C0BD200: BLKS(0x0C0BD200u);
	IF(0x0C0BD200u); MACL = r12 * r0;  /* 0C0BD200 mul.l Rm,Rn */
	IF(0x0C0BD202u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0BD202 shar Rn */
	r8 = 0xC0BCAE0u; UPD(0x0C0BD206u, 4);  /* 0C0BD204 mov.l @(disp,pc),Rn */
	IF(0x0C0BD206u); r3 = MACL;  /* 0C0BD206 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BD208 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BD20A exts.w Rm,Rn */
	r10 += r0;  /* 0C0BD20C add Rm,Rn */
	r10 += 0x1u;  /* 0C0BD20E add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0BD210 exts.w Rm,Rn */
	IF(0x0C0BD212u); ;  /* 0C0BD212 nop */
	UPD(0x0C0BD214u, 7);
L_0C0BD214: BLKS(0x0C0BD214u);
	IF(0x0C0BD214u); { u32 t_ = r8; PR = 0x0C0BD218u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCAE0, 0x0C0BCAE0u, 0x0C0BD218u); }  /* 0C0BD214 jsr @Rn */
L_0C0BD218: BLKS(0x0C0BD218u);
	r3 = (u32)(s32)(s16)r0;  /* 0C0BD218 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BD21A tst Rm,Rn */
	{ u32 c_ = !T; r2 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD250u, 5); goto L_0C0BD250; } goto L_0C0BD220; }  /* 0C0BD21C bf/s */
L_0C0BD220: BLKS(0x0C0BD220u);
	IF(0x0C0BD220u); T = r2 >> 31; r2 = (r2 << 1) | T;  /* 0C0BD220 rotl Rn */
	IF(0x0C0BD222u); r0 = T;  /* 0C0BD222 movt Rn */
	r11 += r0;  /* 0C0BD224 add Rm,Rn */
	IF(0x0C0BD226u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BD226 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BD228 tst Rm,Rn */
	if (!T) { UPD(0x0C0BD214u, 9); goto L_0C0BD214; }  /* 0C0BD22A bf */
L_0C0BD22C: BLKS(0x0C0BD22Cu);
	r14 += 0x1Cu;  /* 0C0BD22C add #imm,Rn */
	UPD(0x0C0BD22Eu, 1);
L_0C0BD22E: BLKS(0x0C0BD22Eu);
	r15 = r14;  /* 0C0BD22E mov Rm,Rn */
	IF(0x0C0BD230u); PR = R32(r15); r15 += 4; UPD(0x0C0BD232u, 2);  /* 0C0BD230 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD234u, 1);  /* 0C0BD232 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD236u, 1);  /* 0C0BD234 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD238u, 1);  /* 0C0BD236 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD23Au, 1);  /* 0C0BD238 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD23Cu, 1);  /* 0C0BD23A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD23Eu, 1);  /* 0C0BD23C mov.l @Rm+,Rn */
	IF(0x0C0BD23Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD23E rts */
L_0C0BD250: BLKS(0x0C0BD250u);
	r12 = 0x0u;  /* 0C0BD250 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD252 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BD22Cu, 5); goto L_0C0BD22C; }  /* 0C0BD254 bt */
L_0C0BD256: BLKS(0x0C0BD256u);
	r0 = r9;  /* 0C0BD256 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0BD258 and #imm,r0 */
	r13 = 0xC0C2360u; UPD(0x0C0BD25Cu, 3);  /* 0C0BD25A mov.l @(disp,pc),Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C0BD25Eu, 1);  /* 0C0BD25C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD25Eu); ;  /* 0C0BD25E nop */
	UPD(0x0C0BD260u, 1);
L_0C0BD260: BLKS(0x0C0BD260u);
	r3 = R32(r14 + 0x14u); UPD(0x0C0BD262u, 1);  /* 0C0BD260 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BD262 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0BD266u, 2);  /* 0C0BD264 mov.w @Rm+,Rn */
	IF(0x0C0BD266u); MACL = r0 * r8;  /* 0C0BD266 mul.l Rm,Rn */
	r2 = 0xC28F65Cu; UPD(0x0C0BD26Au, 3);  /* 0C0BD268 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C0BD26Cu, 1);  /* 0C0BD26A mov.l @(disp,Rm),Rn */
	IF(0x0C0BD26Cu); r8 = MACL;  /* 0C0BD26C sts macl,Rn */
	r7 = 0xC0000002u; UPD(0x0C0BD270u, 2);  /* 0C0BD26E mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C0BD270 add Rm,Rn */
	r1 = R32(r14); UPD(0x0C0BD274u, 2);  /* 0C0BD272 mov.l @Rm,Rn */
	r7 |= r9;  /* 0C0BD274 or Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C0BD278u, 2);  /* 0C0BD276 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r1); UPD(0x0C0BD27Au, 1);  /* 0C0BD278 mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C0BD27Cu, 1);  /* 0C0BD27A mov.l Rm,@Rn */
	IF(0x0C0BD27Cu); { u32 t_ = r13; PR = 0x0C0BD280u; W32(r14 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD280u); }  /* 0C0BD27C jsr @Rn */
L_0C0BD280: BLKS(0x0C0BD280u);
	r0 &= 0x7u;  /* 0C0BD280 and #imm,r0 */
	r4 = 0xCu;  /* 0C0BD282 mov #imm,Rn */
	IF(0x0C0BD284u); { u32 t_ = r10; PR = 0x0C0BD288u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BD288u); }  /* 0C0BD284 jsr @Rn */
L_0C0BD288: BLKS(0x0C0BD288u);
	r6 = R32(r14 + 0x4u); UPD(0x0C0BD28Au, 1);  /* 0C0BD288 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0BD28Cu, 1);  /* 0C0BD28A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0BD28Eu, 1);  /* 0C0BD28C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r5); UPD(0x0C0BD290u, 1);  /* 0C0BD28E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD290u); { u32 t_ = r13; PR = 0x0C0BD294u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD294u); }  /* 0C0BD290 jsr @Rn */
L_0C0BD294: BLKS(0x0C0BD294u);
	r4 = 0x1FFu; UPD(0x0C0BD296u, 1);  /* 0C0BD294 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BD296 mov Rm,Rn */
	IF(0x0C0BD298u); { u32 t_ = r13; PR = 0x0C0BD29Cu; r10 &= r4; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD29Cu); }  /* 0C0BD298 jsr @Rn */
L_0C0BD29C: BLKS(0x0C0BD29Cu);
	r3 = 0x3FFu; UPD(0x0C0BD29Eu, 1);  /* 0C0BD29C mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0BD29E mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0BD2A2u, 2);  /* 0C0BD2A0 mov.w @(disp,pc),Rn */
	r9 &= r3;  /* 0C0BD2A2 and Rm,Rn */
	r9 += r0;  /* 0C0BD2A4 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BD2A8u, 3);  /* 0C0BD2A6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BD2A8 mov Rm,Rn */
	IF(0x0C0BD2AAu); { u32 t_ = r0; PR = 0x0C0BD2AEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BD2AEu); }  /* 0C0BD2AA jsr @Rn */
L_0C0BD2AE: BLKS(0x0C0BD2AEu);
	r5 = r9;  /* 0C0BD2AE mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BD2B2u, 2);  /* 0C0BD2B0 mov.l @(disp,pc),Rn */
	IF(0x0C0BD2B2u); r0 <<= 8;  /* 0C0BD2B2 shll8 Rn */
	r4 = r10;  /* 0C0BD2B4 mov Rm,Rn */
	IF(0x0C0BD2B6u); { u32 t_ = r9; PR = 0x0C0BD2BAu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BD2BAu); }  /* 0C0BD2B6 jsr @Rn */
L_0C0BD2BA: BLKS(0x0C0BD2BAu);
	r2 = 0x0u;  /* 0C0BD2BA mov #imm,Rn */
	IF(0x0C0BD2BCu); r0 <<= 8;  /* 0C0BD2BC shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BD2C0u, 3);  /* 0C0BD2BE mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C0BD2C0 mov Rm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BD2C4u, 2);  /* 0C0BD2C2 mov.l Rm,@(disp,Rn) */
	r7 += 0x30u;  /* 0C0BD2C4 add #imm,Rn */
	r8 += 0x31u;  /* 0C0BD2C6 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BD2CAu, 3);  /* 0C0BD2C8 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C0BD2CA mov #imm,Rn */
	IF(0x0C0BD2CCu); { u32 t_ = r13; PR = 0x0C0BD2D0u; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD2D0u); }  /* 0C0BD2CC jsr @Rn */
L_0C0BD2D0: BLKS(0x0C0BD2D0u);
	r8 += 0x1u;  /* 0C0BD2D0 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0BD2D2 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0BD2D6u, 3);  /* 0C0BD2D4 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0BD2D6 mov Rm,Rn */
	r0 = 0xFu;  /* 0C0BD2D8 mov #imm,Rn */
	IF(0x0C0BD2DAu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD2DCu, 3);  /* 0C0BD2DA mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0BD2DC add #imm,Rn */
	W8(r8, r1); UPD(0x0C0BD2E0u, 2);  /* 0C0BD2DE mov.b Rm,@Rn */
	r0 = 0x13u;  /* 0C0BD2E0 mov #imm,Rn */
	IF(0x0C0BD2E2u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD2E4u, 2);  /* 0C0BD2E2 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0BD2E4 add #imm,Rn */
	{ u32 v_ = r6; r8 -= 1; W8(r8, v_); } UPD(0x0C0BD2E8u, 2);  /* 0C0BD2E6 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0BD2E8 exts.w Rm,Rn */
	r5 = 0x1104FFFFu; UPD(0x0C0BD2ECu, 2);  /* 0C0BD2EA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD2EC add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0BD2F0u, 2);  /* 0C0BD2EE mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD2F0 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0BD2F4u, 2);  /* 0C0BD2F2 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD260u, 3); goto L_0C0BD260; } UPD(0x0C0BD2F8u, 1); goto L_0C0BD2F8; }  /* 0C0BD2F4 bf/s */
L_0C0BD2F8: BLKS(0x0C0BD2F8u);
	{ r14 += 0x1Cu; /* slot add #imm,Rn */ UPD(0x0C0BD22Eu, 3); goto L_0C0BD22E; }  /* 0C0BD2F8 bra */
}

/* FUN_0c0bd330 */
void blk_f_0C0BD330(sh3_t *c)
{
	LOCALS;
L_0C0BD330: BLKS(0x0C0BD330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD332u, 1);  /* 0C0BD330 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD334u, 1);  /* 0C0BD332 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD336u, 1);  /* 0C0BD334 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BD336 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD33Au, 2);  /* 0C0BD338 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0BD33A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD33Eu, 2);  /* 0C0BD33C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD340u, 1);  /* 0C0BD33E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD342u, 1);  /* 0C0BD340 mov.l Rm,@-Rn */
	IF(0x0C0BD342u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD344u, 1);  /* 0C0BD342 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BD344 add #imm,Rn */
	r14 = r15;  /* 0C0BD346 mov Rm,Rn */
	W32(r14, r5); UPD(0x0C0BD34Au, 3);  /* 0C0BD348 mov.l Rm,@Rn */
	r5 = R32(r14 + 0x3Cu); UPD(0x0C0BD34Cu, 1);  /* 0C0BD34A mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BD34Eu, 1);  /* 0C0BD34C mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r5;  /* 0C0BD34E exts.w Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C0BD352u, 2);  /* 0C0BD350 mov.l @(disp,Rm),Rn */
	r1 = r12;  /* 0C0BD352 mov Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C0BD356u, 2);  /* 0C0BD354 mov.l @(disp,pc),Rn */
	IF(0x0C0BD356u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BD356 rotl Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C0BD35Au, 2);  /* 0C0BD358 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)r7;  /* 0C0BD35A exts.b Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BD35Eu, 2);  /* 0C0BD35C mov.l @(disp,pc),Rn */
	IF(0x0C0BD35Eu); r10 = T;  /* 0C0BD35E movt Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C0BD362u, 2);  /* 0C0BD360 mov.l Rm,@(disp,Rn) */
	r10 += r12;  /* 0C0BD362 add Rm,Rn */
	IF(0x0C0BD364u); { u32 t_ = r8; PR = 0x0C0BD368u; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD368u); }  /* 0C0BD364 jsr @Rn */
L_0C0BD368: BLKS(0x0C0BD368u);
	IF(0x0C0BD368u); MACL = r12 * r0;  /* 0C0BD368 mul.l Rm,Rn */
	IF(0x0C0BD36Au); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0BD36A shar Rn */
	r8 = 0xC0BCAE0u; UPD(0x0C0BD36Eu, 4);  /* 0C0BD36C mov.l @(disp,pc),Rn */
	IF(0x0C0BD36Eu); r3 = MACL;  /* 0C0BD36E sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BD370 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BD372 exts.w Rm,Rn */
	r10 += r0;  /* 0C0BD374 add Rm,Rn */
	r10 += 0x1u;  /* 0C0BD376 add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0BD378 exts.w Rm,Rn */
	IF(0x0C0BD37Au); ;  /* 0C0BD37A nop */
	UPD(0x0C0BD37Cu, 7);
L_0C0BD37C: BLKS(0x0C0BD37Cu);
	IF(0x0C0BD37Cu); { u32 t_ = r8; PR = 0x0C0BD380u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCAE0, 0x0C0BCAE0u, 0x0C0BD380u); }  /* 0C0BD37C jsr @Rn */
L_0C0BD380: BLKS(0x0C0BD380u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0BD380 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BD382 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD3B0u, 5); goto L_0C0BD3B0; } goto L_0C0BD388; }  /* 0C0BD384 bf/s */
L_0C0BD388: BLKS(0x0C0BD388u);
	IF(0x0C0BD388u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0BD388 rotl Rn */
	IF(0x0C0BD38Au); r13 = T;  /* 0C0BD38A movt Rn */
	r11 += r13;  /* 0C0BD38C add Rm,Rn */
	IF(0x0C0BD38Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BD38E shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BD390 tst Rm,Rn */
	if (!T) { UPD(0x0C0BD37Cu, 9); goto L_0C0BD37C; }  /* 0C0BD392 bf */
L_0C0BD394: BLKS(0x0C0BD394u);
	r14 += 0x18u;  /* 0C0BD394 add #imm,Rn */
	UPD(0x0C0BD396u, 1);
L_0C0BD396: BLKS(0x0C0BD396u);
	r15 = r14;  /* 0C0BD396 mov Rm,Rn */
	IF(0x0C0BD398u); PR = R32(r15); r15 += 4; UPD(0x0C0BD39Au, 2);  /* 0C0BD398 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD39Cu, 1);  /* 0C0BD39A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD39Eu, 1);  /* 0C0BD39C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD3A0u, 1);  /* 0C0BD39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD3A2u, 1);  /* 0C0BD3A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD3A4u, 1);  /* 0C0BD3A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD3A6u, 1);  /* 0C0BD3A4 mov.l @Rm+,Rn */
	IF(0x0C0BD3A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD3A6 rts */
L_0C0BD3B0: BLKS(0x0C0BD3B0u);
	r12 = 0x0u;  /* 0C0BD3B0 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD3B2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BD394u, 5); goto L_0C0BD394; }  /* 0C0BD3B4 bt */
L_0C0BD3B6: BLKS(0x0C0BD3B6u);
	r0 = r9;  /* 0C0BD3B6 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0BD3B8 and #imm,r0 */
	r13 = 0xC0C2360u; UPD(0x0C0BD3BCu, 3);  /* 0C0BD3BA mov.l @(disp,pc),Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0BD3BEu, 1);  /* 0C0BD3BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD3BEu); ;  /* 0C0BD3BE nop */
	UPD(0x0C0BD3C0u, 1);
L_0C0BD3C0: BLKS(0x0C0BD3C0u);
	r3 = R32(r14 + 0x10u); UPD(0x0C0BD3C2u, 1);  /* 0C0BD3C0 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BD3C2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0BD3C6u, 2);  /* 0C0BD3C4 mov.w @Rm+,Rn */
	r5 = 0x20u;  /* 0C0BD3C6 mov #imm,Rn */
	IF(0x0C0BD3C8u); MACL = r0 * r8;  /* 0C0BD3C8 mul.l Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0BD3CCu, 4);  /* 0C0BD3CA mov.l @(disp,Rm),Rn */
	r9 = 0xC28F65Cu; UPD(0x0C0BD3CEu, 1);  /* 0C0BD3CC mov.l @(disp,pc),Rn */
	IF(0x0C0BD3CEu); r8 = MACL;  /* 0C0BD3CE sts macl,Rn */
	r6 = 0xC0000002u; UPD(0x0C0BD3D2u, 2);  /* 0C0BD3D0 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0BD3D2 add Rm,Rn */
	r6 |= r7;  /* 0C0BD3D4 or Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C0BD3D8u, 3);  /* 0C0BD3D6 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C0BD3DAu, 1);  /* 0C0BD3D8 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0BD3DCu, 1);  /* 0C0BD3DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD3DCu); { u32 t_ = r13; PR = 0x0C0BD3E0u; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD3E0u); }  /* 0C0BD3DC jsr @Rn */
L_0C0BD3E0: BLKS(0x0C0BD3E0u);
	r0 &= 0x7u;  /* 0C0BD3E0 and #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C0BD3E4u, 2);  /* 0C0BD3E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD3E4u); { u32 t_ = r10; PR = 0x0C0BD3E8u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BD3E8u); }  /* 0C0BD3E4 jsr @Rn */
L_0C0BD3E8: BLKS(0x0C0BD3E8u);
	r1 = R32(r14); UPD(0x0C0BD3EAu, 1);  /* 0C0BD3E8 mov.l @Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0BD3ECu, 1);  /* 0C0BD3EA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r1); UPD(0x0C0BD3EEu, 1);  /* 0C0BD3EC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r4); UPD(0x0C0BD3F0u, 1);  /* 0C0BD3EE mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD3F0u); { u32 t_ = r13; PR = 0x0C0BD3F4u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD3F4u); }  /* 0C0BD3F0 jsr @Rn */
L_0C0BD3F4: BLKS(0x0C0BD3F4u);
	r3 = 0x1FFu; UPD(0x0C0BD3F6u, 1);  /* 0C0BD3F4 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BD3F6 mov Rm,Rn */
	IF(0x0C0BD3F8u); { u32 t_ = r13; PR = 0x0C0BD3FCu; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD3FCu); }  /* 0C0BD3F8 jsr @Rn */
L_0C0BD3FC: BLKS(0x0C0BD3FCu);
	r2 = 0x3FFu; UPD(0x0C0BD3FEu, 1);  /* 0C0BD3FC mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0BD3FE mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0BD402u, 2);  /* 0C0BD400 mov.w @(disp,pc),Rn */
	r9 &= r2;  /* 0C0BD402 and Rm,Rn */
	r9 += r0;  /* 0C0BD404 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BD408u, 3);  /* 0C0BD406 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BD408 mov Rm,Rn */
	IF(0x0C0BD40Au); { u32 t_ = r0; PR = 0x0C0BD40Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BD40Eu); }  /* 0C0BD40A jsr @Rn */
L_0C0BD40E: BLKS(0x0C0BD40Eu);
	r5 = r9;  /* 0C0BD40E mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BD412u, 2);  /* 0C0BD410 mov.l @(disp,pc),Rn */
	IF(0x0C0BD412u); r0 <<= 8;  /* 0C0BD412 shll8 Rn */
	r4 = r10;  /* 0C0BD414 mov Rm,Rn */
	IF(0x0C0BD416u); { u32 t_ = r9; PR = 0x0C0BD41Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BD41Au); }  /* 0C0BD416 jsr @Rn */
L_0C0BD41A: BLKS(0x0C0BD41Au);
	IF(0x0C0BD41Au); r0 <<= 8;  /* 0C0BD41A shll8 Rn */
	r10 = 0x0u;  /* 0C0BD41C mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BD420u, 3);  /* 0C0BD41E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0BD420 mov Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0BD424u, 2);  /* 0C0BD422 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0BD424 add #imm,Rn */
	r8 += 0x31u;  /* 0C0BD426 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0BD42Au, 3);  /* 0C0BD428 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C0BD42A mov #imm,Rn */
	IF(0x0C0BD42Cu); { u32 t_ = r13; PR = 0x0C0BD430u; W8(r6, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD430u); }  /* 0C0BD42C jsr @Rn */
L_0C0BD430: BLKS(0x0C0BD430u);
	r8 += 0x1u;  /* 0C0BD430 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0BD432 and #imm,r0 */
	W8(r8, r0); UPD(0x0C0BD436u, 3);  /* 0C0BD434 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0BD436 mov Rm,Rn */
	r0 = 0xBu;  /* 0C0BD438 mov #imm,Rn */
	IF(0x0C0BD43Au); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD43Cu, 3);  /* 0C0BD43A mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0BD43C add #imm,Rn */
	W8(r8, r5); UPD(0x0C0BD440u, 2);  /* 0C0BD43E mov.b Rm,@Rn */
	r0 = 0xFu;  /* 0C0BD440 mov #imm,Rn */
	IF(0x0C0BD442u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD444u, 2);  /* 0C0BD442 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0BD444 add #imm,Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0BD448u, 2);  /* 0C0BD446 mov.b Rm,@-Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C0BD448 exts.w Rm,Rn */
	r4 = 0x1104FFFFu; UPD(0x0C0BD44Cu, 2);  /* 0C0BD44A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD44C add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0BD450u, 2);  /* 0C0BD44E mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD450 cmp/ge Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0BD454u, 2);  /* 0C0BD452 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD3C0u, 3); goto L_0C0BD3C0; } UPD(0x0C0BD458u, 1); goto L_0C0BD458; }  /* 0C0BD454 bf/s */
L_0C0BD458: BLKS(0x0C0BD458u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0BD396u, 3); goto L_0C0BD396; }  /* 0C0BD458 bra */
}

/* FUN_0c0bd490 */
void blk_f_0C0BD490(sh3_t *c)
{
	LOCALS;
L_0C0BD490: BLKS(0x0C0BD490u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD492u, 1);  /* 0C0BD490 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD494u, 1);  /* 0C0BD492 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD496u, 1);  /* 0C0BD494 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD498u, 1);  /* 0C0BD496 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BD498 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD49Cu, 2);  /* 0C0BD49A mov.l Rm,@-Rn */
	r1 = r10;  /* 0C0BD49C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD4A0u, 2);  /* 0C0BD49E mov.l Rm,@-Rn */
	IF(0x0C0BD4A0u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BD4A0 rotl Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD4A4u, 2);  /* 0C0BD4A2 mov.l Rm,@-Rn */
	IF(0x0C0BD4A4u); r9 = T;  /* 0C0BD4A4 movt Rn */
	IF(0x0C0BD4A6u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD4A8u, 2);  /* 0C0BD4A6 sts.l pr,@-Rn */
	r9 += r10;  /* 0C0BD4A8 add Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0BD4AA add #imm,Rn */
	r14 = r15;  /* 0C0BD4AC mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0BD4B0u, 4);  /* 0C0BD4AE mov.l Rm,@Rn */
	IF(0x0C0BD4B0u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0BD4B0 shar Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BD4B4u, 2);  /* 0C0BD4B2 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C2360u; UPD(0x0C0BD4B6u, 1);  /* 0C0BD4B4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r6;  /* 0C0BD4B6 exts.b Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BD4BAu, 2);  /* 0C0BD4B8 mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0BD4BCu, 1);  /* 0C0BD4BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD4BCu); { u32 t_ = r8; PR = 0x0C0BD4C0u; W32(r14 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD4C0u); }  /* 0C0BD4BC jsr @Rn */
L_0C0BD4C0: BLKS(0x0C0BD4C0u);
	IF(0x0C0BD4C0u); MACL = r10 * r0;  /* 0C0BD4C0 mul.l Rm,Rn */
	r8 = 0xC0BCBC0u; UPD(0x0C0BD4C4u, 3);  /* 0C0BD4C2 mov.l @(disp,pc),Rn */
	IF(0x0C0BD4C4u); r3 = MACL;  /* 0C0BD4C4 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BD4C6 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BD4C8 exts.w Rm,Rn */
	r9 += r0;  /* 0C0BD4CA add Rm,Rn */
	r9 += 0x1u;  /* 0C0BD4CC add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0BD4CE exts.w Rm,Rn */
	UPD(0x0C0BD4D0u, 6);
L_0C0BD4D0: BLKS(0x0C0BD4D0u);
	IF(0x0C0BD4D0u); { u32 t_ = r8; PR = 0x0C0BD4D4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCBC0, 0x0C0BCBC0u, 0x0C0BD4D4u); }  /* 0C0BD4D0 jsr @Rn */
L_0C0BD4D4: BLKS(0x0C0BD4D4u);
	r9 = (u32)(s32)(s16)r0;  /* 0C0BD4D4 exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BD4D6 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD500u, 5); goto L_0C0BD500; } goto L_0C0BD4DC; }  /* 0C0BD4D8 bf/s */
L_0C0BD4DC: BLKS(0x0C0BD4DCu);
	IF(0x0C0BD4DCu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C0BD4DC rotl Rn */
	IF(0x0C0BD4DEu); r6 = T;  /* 0C0BD4DE movt Rn */
	r11 += r6;  /* 0C0BD4E0 add Rm,Rn */
	IF(0x0C0BD4E2u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BD4E2 shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BD4E4 tst Rm,Rn */
	if (!T) { UPD(0x0C0BD4D0u, 9); goto L_0C0BD4D0; }  /* 0C0BD4E6 bf */
L_0C0BD4E8: BLKS(0x0C0BD4E8u);
	r14 += 0x10u;  /* 0C0BD4E8 add #imm,Rn */
	UPD(0x0C0BD4EAu, 1);
L_0C0BD4EA: BLKS(0x0C0BD4EAu);
	r15 = r14;  /* 0C0BD4EA mov Rm,Rn */
	IF(0x0C0BD4ECu); PR = R32(r15); r15 += 4; UPD(0x0C0BD4EEu, 2);  /* 0C0BD4EC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD4F0u, 1);  /* 0C0BD4EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD4F2u, 1);  /* 0C0BD4F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD4F4u, 1);  /* 0C0BD4F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD4F6u, 1);  /* 0C0BD4F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD4F8u, 1);  /* 0C0BD4F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD4FAu, 1);  /* 0C0BD4F8 mov.l @Rm+,Rn */
	IF(0x0C0BD4FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD4FA rts */
L_0C0BD500: BLKS(0x0C0BD500u);
	r12 = 0x0u;  /* 0C0BD500 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD502 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BD4E8u, 5); goto L_0C0BD4E8; }  /* 0C0BD504 bt */
L_0C0BD506: BLKS(0x0C0BD506u);
	r13 = 0xC0C2360u; UPD(0x0C0BD508u, 1);  /* 0C0BD506 mov.l @(disp,pc),Rn */
L_0C0BD508: BLKS(0x0C0BD508u);
	r5 = R32(r14 + 0xCu); UPD(0x0C0BD50Au, 1);  /* 0C0BD508 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BD50A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r9 = v_; } UPD(0x0C0BD50Eu, 2);  /* 0C0BD50C mov.w @Rm+,Rn */
	r3 = 0x17u;  /* 0C0BD50E mov #imm,Rn */
	IF(0x0C0BD510u); MACL = r9 * r8;  /* 0C0BD510 mul.l Rm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BD514u, 4);  /* 0C0BD512 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0BD514 mov #imm,Rn */
	IF(0x0C0BD516u); r8 = MACL;  /* 0C0BD516 sts macl,Rn */
	r10 = 0xC0000001u; UPD(0x0C0BD51Au, 3);  /* 0C0BD518 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BD51A add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0BD51Eu, 2);  /* 0C0BD51C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r2); UPD(0x0C0BD520u, 1);  /* 0C0BD51E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r5); UPD(0x0C0BD522u, 1);  /* 0C0BD520 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD522u); { u32 t_ = r13; PR = 0x0C0BD526u; W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD526u); }  /* 0C0BD522 jsr @Rn */
L_0C0BD526: BLKS(0x0C0BD526u);
	r0 &= 0xFu;  /* 0C0BD526 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0BD52Au, 2);  /* 0C0BD528 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0BD52Cu, 1);  /* 0C0BD52A mov.l @(disp,Rm),Rn */
	r0 = R32(r14); UPD(0x0C0BD52Eu, 1);  /* 0C0BD52C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0BD530u, 1);  /* 0C0BD52E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD530u); { u32 t_ = r13; PR = 0x0C0BD534u; W32(r8 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD534u); }  /* 0C0BD530 jsr @Rn */
L_0C0BD534: BLKS(0x0C0BD534u);
	r6 = 0x1FFu; UPD(0x0C0BD536u, 1);  /* 0C0BD534 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BD536 mov Rm,Rn */
	r10 &= r6;  /* 0C0BD538 and Rm,Rn */
	IF(0x0C0BD53Au); { u32 t_ = r13; PR = 0x0C0BD53Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD53Eu); }  /* 0C0BD53A jsr @Rn */
L_0C0BD53E: BLKS(0x0C0BD53Eu);
	r5 = 0x3FFu; UPD(0x0C0BD540u, 1);  /* 0C0BD53E mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C0BD540 mov Rm,Rn */
	r9 &= r5;  /* 0C0BD542 and Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BD546u, 3);  /* 0C0BD544 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0BD546 add #imm,Rn */
	r9 += r5;  /* 0C0BD548 add Rm,Rn */
	r4 = r10;  /* 0C0BD54A mov Rm,Rn */
	IF(0x0C0BD54Cu); { u32 t_ = r0; PR = 0x0C0BD550u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BD550u); }  /* 0C0BD54C jsr @Rn */
L_0C0BD550: BLKS(0x0C0BD550u);
	r5 = r9;  /* 0C0BD550 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BD554u, 2);  /* 0C0BD552 mov.l @(disp,pc),Rn */
	IF(0x0C0BD554u); r0 <<= 8;  /* 0C0BD554 shll8 Rn */
	r4 = r10;  /* 0C0BD556 mov Rm,Rn */
	IF(0x0C0BD558u); { u32 t_ = r9; PR = 0x0C0BD55Cu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BD55Cu); }  /* 0C0BD558 jsr @Rn */
L_0C0BD55C: BLKS(0x0C0BD55Cu);
	IF(0x0C0BD55Cu); r0 <<= 8;  /* 0C0BD55C shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BD560u, 2);  /* 0C0BD55E mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0BD560 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0BD562 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0BD566u, 3);  /* 0C0BD564 mov.b Rm,@Rn */
	r0 = 0xBu;  /* 0C0BD566 mov #imm,Rn */
	IF(0x0C0BD568u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD56Au, 2);  /* 0C0BD568 mov.b @(r0,Rm),Rn */
	r8 += 0x3u;  /* 0C0BD56A add #imm,Rn */
	W8(r8, r10); UPD(0x0C0BD56Eu, 2);  /* 0C0BD56C mov.b Rm,@Rn */
	r0 = r12;  /* 0C0BD56E mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C0BD572u, 2);  /* 0C0BD570 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD572 add #imm,Rn */
	r3 = 0x0u;  /* 0C0BD574 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BD576 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BD578 exts.w Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BD57Cu, 5);  /* 0C0BD57A mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD57C cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD508u, 4); goto L_0C0BD508; } UPD(0x0C0BD582u, 1); goto L_0C0BD582; }  /* 0C0BD57E bf/s */
L_0C0BD582: BLKS(0x0C0BD582u);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0BD4EAu, 3); goto L_0C0BD4EA; }  /* 0C0BD582 bra */
}

/* FUN_0c0bd5b0 */
void blk_f_0C0BD5B0(sh3_t *c)
{
	LOCALS;
L_0C0BD5B0: BLKS(0x0C0BD5B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5B2u, 1);  /* 0C0BD5B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5B4u, 1);  /* 0C0BD5B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5B6u, 1);  /* 0C0BD5B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5B8u, 1);  /* 0C0BD5B6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BD5B8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5BCu, 2);  /* 0C0BD5BA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0BD5BC exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5C0u, 2);  /* 0C0BD5BE mov.l Rm,@-Rn */
	r1 = r10;  /* 0C0BD5C0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD5C4u, 2);  /* 0C0BD5C2 mov.l Rm,@-Rn */
	IF(0x0C0BD5C4u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BD5C4 rotl Rn */
	IF(0x0C0BD5C6u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD5C8u, 2);  /* 0C0BD5C6 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BD5C8 add #imm,Rn */
	r14 = r15;  /* 0C0BD5CA mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0BD5CEu, 3);  /* 0C0BD5CC mov.l Rm,@Rn */
	r9 = R32(r14 + 0x38u); UPD(0x0C0BD5D0u, 1);  /* 0C0BD5CE mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BD5D2u, 1);  /* 0C0BD5D0 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)r9;  /* 0C0BD5D2 exts.w Rm,Rn */
	r6 = R32(r14 + 0x3Cu); UPD(0x0C0BD5D6u, 2);  /* 0C0BD5D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0BD5D6u); r9 = T;  /* 0C0BD5D6 movt Rn */
	r8 = 0xC0C2360u; UPD(0x0C0BD5DAu, 2);  /* 0C0BD5D8 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C0BD5DA exts.w Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C0BD5DEu, 2);  /* 0C0BD5DC mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C0BD5DE add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C0BD5E2u, 2);  /* 0C0BD5E0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD5E2u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0BD5E2 shar Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0BD5E6u, 2);  /* 0C0BD5E4 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r5); UPD(0x0C0BD5E8u, 1);  /* 0C0BD5E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD5E8u); { u32 t_ = r8; PR = 0x0C0BD5ECu; W32(r14 + 0x14u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD5ECu); }  /* 0C0BD5E8 jsr @Rn */
L_0C0BD5EC: BLKS(0x0C0BD5ECu);
	IF(0x0C0BD5ECu); MACL = r10 * r0;  /* 0C0BD5EC mul.l Rm,Rn */
	r8 = 0xC0BCBC0u; UPD(0x0C0BD5F0u, 3);  /* 0C0BD5EE mov.l @(disp,pc),Rn */
	IF(0x0C0BD5F0u); r3 = MACL;  /* 0C0BD5F0 sts macl,Rn */
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0BD5F2 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0BD5F4 exts.w Rm,Rn */
	r9 += r0;  /* 0C0BD5F6 add Rm,Rn */
	r9 += 0x1u;  /* 0C0BD5F8 add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0BD5FA exts.w Rm,Rn */
	UPD(0x0C0BD5FCu, 6);
L_0C0BD5FC: BLKS(0x0C0BD5FCu);
	IF(0x0C0BD5FCu); { u32 t_ = r8; PR = 0x0C0BD600u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCBC0, 0x0C0BCBC0u, 0x0C0BD600u); }  /* 0C0BD5FC jsr @Rn */
L_0C0BD600: BLKS(0x0C0BD600u);
	r2 = (u32)(s32)(s16)r0;  /* 0C0BD600 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BD602 tst Rm,Rn */
	{ u32 c_ = !T; r13 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD630u, 5); goto L_0C0BD630; } goto L_0C0BD608; }  /* 0C0BD604 bf/s */
L_0C0BD608: BLKS(0x0C0BD608u);
	IF(0x0C0BD608u); T = r13 >> 31; r13 = (r13 << 1) | T;  /* 0C0BD608 rotl Rn */
	IF(0x0C0BD60Au); r12 = T;  /* 0C0BD60A movt Rn */
	r11 += r12;  /* 0C0BD60C add Rm,Rn */
	IF(0x0C0BD60Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BD60E shar Rn */
	T = (r11 & r11) == 0;  /* 0C0BD610 tst Rm,Rn */
	if (!T) { UPD(0x0C0BD5FCu, 9); goto L_0C0BD5FC; }  /* 0C0BD612 bf */
L_0C0BD614: BLKS(0x0C0BD614u);
	r14 += 0x18u;  /* 0C0BD614 add #imm,Rn */
	UPD(0x0C0BD616u, 1);
L_0C0BD616: BLKS(0x0C0BD616u);
	r15 = r14;  /* 0C0BD616 mov Rm,Rn */
	IF(0x0C0BD618u); PR = R32(r15); r15 += 4; UPD(0x0C0BD61Au, 2);  /* 0C0BD618 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD61Cu, 1);  /* 0C0BD61A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD61Eu, 1);  /* 0C0BD61C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD620u, 1);  /* 0C0BD61E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD622u, 1);  /* 0C0BD620 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD624u, 1);  /* 0C0BD622 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD626u, 1);  /* 0C0BD624 mov.l @Rm+,Rn */
	IF(0x0C0BD626u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD626 rts */
L_0C0BD630: BLKS(0x0C0BD630u);
	r12 = 0x0u;  /* 0C0BD630 mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD632 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BD614u, 5); goto L_0C0BD614; }  /* 0C0BD634 bt */
L_0C0BD636: BLKS(0x0C0BD636u);
	r13 = 0xC0C2360u; UPD(0x0C0BD638u, 1);  /* 0C0BD636 mov.l @(disp,pc),Rn */
L_0C0BD638: BLKS(0x0C0BD638u);
	r3 = R32(r14 + 0x14u); UPD(0x0C0BD63Au, 1);  /* 0C0BD638 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BD63A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C0BD63Eu, 2);  /* 0C0BD63C mov.w @Rm+,Rn */
	r5 = 0x0u;  /* 0C0BD63E mov #imm,Rn */
	IF(0x0C0BD640u); MACL = r10 * r8;  /* 0C0BD640 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BD644u, 4);  /* 0C0BD642 mov.l @(disp,pc),Rn */
	r6 = 0x17u;  /* 0C0BD644 mov #imm,Rn */
	IF(0x0C0BD646u); r8 = MACL;  /* 0C0BD646 sts macl,Rn */
	r7 = 0xC0000001u; UPD(0x0C0BD64Au, 3);  /* 0C0BD648 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0BD64A add Rm,Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C0BD64Eu, 2);  /* 0C0BD64C mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C0BD650u, 1);  /* 0C0BD64E mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0BD652u, 1);  /* 0C0BD650 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD652u); { u32 t_ = r13; PR = 0x0C0BD656u; W32(r14 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD656u); }  /* 0C0BD652 jsr @Rn */
L_0C0BD656: BLKS(0x0C0BD656u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0BD658u, 1);  /* 0C0BD656 mov.l @(disp,Rm),Rn */
	r0 &= 0xFu;  /* 0C0BD658 and #imm,r0 */
	r9 = R32(r14); UPD(0x0C0BD65Cu, 2);  /* 0C0BD65A mov.l @Rm,Rn */
	r4 = r10;  /* 0C0BD65C mov Rm,Rn */
	W32(r8 + 0x14u, r1); UPD(0x0C0BD660u, 2);  /* 0C0BD65E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r9); UPD(0x0C0BD662u, 1);  /* 0C0BD660 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD662u); { u32 t_ = r13; PR = 0x0C0BD666u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD666u); }  /* 0C0BD662 jsr @Rn */
L_0C0BD666: BLKS(0x0C0BD666u);
	r4 = 0x1FFu; UPD(0x0C0BD668u, 1);  /* 0C0BD666 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFF7u;  /* 0C0BD668 mov #imm,Rn */
	r4 &= r0;  /* 0C0BD66A and Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0BD66Eu, 3);  /* 0C0BD66C mov.l @(disp,Rm),Rn */
	IF(0x0C0BD66Eu); MACL = r4 * r0;  /* 0C0BD66E mul.l Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0BD672u, 3);  /* 0C0BD670 mov.l @(disp,Rm),Rn */
	r7 = r0;  /* 0C0BD672 mov Rm,Rn */
	IF(0x0C0BD674u); r6 = MACL;  /* 0C0BD674 sts macl,Rn */
	IF(0x0C0BD676u); ARG0(0x463Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C0BD676 shad Rm,Rn */
	IF(0x0C0BD678u); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C0BD678 shar Rn */
	r6 += r2;  /* 0C0BD67A add Rm,Rn */
	r6 -= r7;  /* 0C0BD67C sub Rm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0BD67E exts.w Rm,Rn */
	IF(0x0C0BD680u); { u32 t_ = r13; PR = 0x0C0BD684u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 9); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD684u); }  /* 0C0BD680 jsr @Rn */
L_0C0BD684: BLKS(0x0C0BD684u);
	r5 = 0x3FFu; UPD(0x0C0BD686u, 1);  /* 0C0BD684 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BD686 mov Rm,Rn */
	r10 &= r5;  /* 0C0BD688 and Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BD68Cu, 3);  /* 0C0BD68A mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0BD68C add #imm,Rn */
	r10 += r5;  /* 0C0BD68E add Rm,Rn */
	r4 = r9;  /* 0C0BD690 mov Rm,Rn */
	IF(0x0C0BD692u); { u32 t_ = r0; PR = 0x0C0BD696u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BD696u); }  /* 0C0BD692 jsr @Rn */
L_0C0BD696: BLKS(0x0C0BD696u);
	r4 = r9;  /* 0C0BD696 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BD69Au, 2);  /* 0C0BD698 mov.l @(disp,pc),Rn */
	IF(0x0C0BD69Au); r0 <<= 8;  /* 0C0BD69A shll8 Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0BD69Eu, 2);  /* 0C0BD69C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD69Eu); { u32 t_ = r9; PR = 0x0C0BD6A2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BD6A2u); }  /* 0C0BD69E jsr @Rn */
L_0C0BD6A2: BLKS(0x0C0BD6A2u);
	IF(0x0C0BD6A2u); r0 <<= 8;  /* 0C0BD6A2 shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BD6A6u, 2);  /* 0C0BD6A4 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0BD6A6 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0BD6A8 add #imm,Rn */
	W8(r8, r1); UPD(0x0C0BD6ACu, 3);  /* 0C0BD6AA mov.b Rm,@Rn */
	r0 = 0xBu;  /* 0C0BD6AC mov #imm,Rn */
	IF(0x0C0BD6AEu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD6B0u, 2);  /* 0C0BD6AE mov.b @(r0,Rm),Rn */
	r8 += 0x3u;  /* 0C0BD6B0 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0BD6B4u, 2);  /* 0C0BD6B2 mov.b Rm,@Rn */
	r0 = r12;  /* 0C0BD6B4 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C0BD6B8u, 2);  /* 0C0BD6B6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BD6B8 add #imm,Rn */
	r10 = 0x0u;  /* 0C0BD6BA mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BD6BC add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BD6BE exts.w Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0BD6C2u, 5);  /* 0C0BD6C0 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0BD6C2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD638u, 4); goto L_0C0BD638; } UPD(0x0C0BD6C8u, 1); goto L_0C0BD6C8; }  /* 0C0BD6C4 bf/s */
L_0C0BD6C8: BLKS(0x0C0BD6C8u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C0BD616u, 3); goto L_0C0BD616; }  /* 0C0BD6C8 bra */
}

/* FUN_0c0bd6f0 */
void blk_f_0C0BD6F0(sh3_t *c)
{
	LOCALS;
L_0C0BD6F0: BLKS(0x0C0BD6F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD6F2u, 1);  /* 0C0BD6F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD6F4u, 1);  /* 0C0BD6F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD6F6u, 1);  /* 0C0BD6F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD6F8u, 1);  /* 0C0BD6F6 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BD6F8 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD6FCu, 2);  /* 0C0BD6FA mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0BD6FC mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD700u, 2);  /* 0C0BD6FE mov.l Rm,@-Rn */
	r12 = r7;  /* 0C0BD700 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD704u, 2);  /* 0C0BD702 mov.l Rm,@-Rn */
	IF(0x0C0BD704u); r15 -= 4; W32(r15, PR); UPD(0x0C0BD706u, 1);  /* 0C0BD704 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0BD706 add #imm,Rn */
	r14 = r15;  /* 0C0BD708 mov Rm,Rn */
	r3 = R32(r14 + 0x2Cu); UPD(0x0C0BD70Cu, 3);  /* 0C0BD70A mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x30u); UPD(0x0C0BD70Eu, 1);  /* 0C0BD70C mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)r3;  /* 0C0BD70E exts.b Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0BD712u, 2);  /* 0C0BD710 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s8)r0;  /* 0C0BD712 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BD716u, 2);  /* 0C0BD714 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BD716 mov Rm,Rn */
	IF(0x0C0BD718u); r0 <<= 2;  /* 0C0BD718 shll2 Rn */
	IF(0x0C0BD71Au); r3 = R32(r0 + r2); UPD(0x0C0BD71Cu, 3);  /* 0C0BD71A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BD71Eu, 1);  /* 0C0BD71C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BD71E add Rm,Rn */
	IF(0x0C0BD720u); T = (s32)r2 >= 0;  /* 0C0BD720 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BD72Au, 5); goto L_0C0BD72A; } UPD(0x0C0BD726u, 1); goto L_0C0BD726; }  /* 0C0BD722 bt/s */
L_0C0BD726: BLKS(0x0C0BD726u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BD830u, 3); goto L_0C0BD830; }  /* 0C0BD726 bra */
L_0C0BD72A: BLKS(0x0C0BD72Au);
	r4 = 0xA00000u; UPD(0x0C0BD72Cu, 1);  /* 0C0BD72A mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0BD72C add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0BD72E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD74Cu, 5); goto L_0C0BD74C; } goto L_0C0BD734; }  /* 0C0BD730 bt/s */
L_0C0BD734: BLKS(0x0C0BD734u);
	r7 = 0xC3C4048u; UPD(0x0C0BD736u, 2);  /* 0C0BD734 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BD736 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0BD73Au, 2);  /* 0C0BD738 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BD73Cu, 1);  /* 0C0BD73A mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BD73C sub Rm,Rn */
	r2 += r5;  /* 0C0BD73E add Rm,Rn */
	IF(0x0C0BD740u); T = (s32)r2 >= 0;  /* 0C0BD740 cmp/pz Rn */
	if (!T) { UPD(0x0C0BD820u, 6); goto L_0C0BD820; }  /* 0C0BD742 bf */
L_0C0BD744: BLKS(0x0C0BD744u);
	r8 = 0x780000u; UPD(0x0C0BD746u, 1);  /* 0C0BD744 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0BD746 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BD748 cmp/ge Rm,Rn */
	IF(0x0C0BD74Au); r1 = T;  /* 0C0BD74A movt Rn */
	UPD(0x0C0BD74Cu, 3);
L_0C0BD74C: BLKS(0x0C0BD74Cu);
	r9 = (u32)(s32)(s16)r1;  /* 0C0BD74C exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BD74E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD770u, 5); goto L_0C0BD770; } UPD(0x0C0BD754u, 1); goto L_0C0BD754; }  /* 0C0BD750 bt/s */
L_0C0BD754: BLKS(0x0C0BD754u);
	r14 += 0xCu;  /* 0C0BD754 add #imm,Rn */
	r15 = r14;  /* 0C0BD756 mov Rm,Rn */
	IF(0x0C0BD758u); PR = R32(r15); r15 += 4; UPD(0x0C0BD75Au, 3);  /* 0C0BD758 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BD75Cu, 1);  /* 0C0BD75A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BD75Eu, 1);  /* 0C0BD75C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BD760u, 1);  /* 0C0BD75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BD762u, 1);  /* 0C0BD760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BD764u, 1);  /* 0C0BD762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BD766u, 1);  /* 0C0BD764 mov.l @Rm+,Rn */
	IF(0x0C0BD766u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BD766 rts */
L_0C0BD770: BLKS(0x0C0BD770u);
	r0 = 0xC0C2360u; UPD(0x0C0BD772u, 1);  /* 0C0BD770 mov.l @(disp,pc),Rn */
	r8 = 0xC1FFF40u; UPD(0x0C0BD774u, 1);  /* 0C0BD772 mov.l @(disp,pc),Rn */
	IF(0x0C0BD774u); { u32 t_ = r0; PR = 0x0C0BD778u; IF(0x0C0BD776u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BD778u); }  /* 0C0BD774 jsr @Rn */
L_0C0BD778: BLKS(0x0C0BD778u);
	r3 = r10;  /* 0C0BD778 mov Rm,Rn */
	r3 += r3;  /* 0C0BD77A add Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0BD77Eu, 3);  /* 0C0BD77C mov.l Rm,@(disp,Rn) */
	r0 &= 0x1u;  /* 0C0BD77E and #imm,r0 */
	r8 += r3;  /* 0C0BD780 add Rm,Rn */
	IF(0x0C0BD782u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0BD784u, 3);  /* 0C0BD782 mov.b @(r0,Rm),Rn */
	r0 = 0x3Fu;  /* 0C0BD784 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C0BD786 extu.b Rm,Rn */
	T = r4 > r0;  /* 0C0BD788 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BD810u, 6); goto L_0C0BD810; }  /* 0C0BD78A bt */
L_0C0BD78C: BLKS(0x0C0BD78Cu);
	r8 = 0xC0BCA00u; UPD(0x0C0BD78Eu, 1);  /* 0C0BD78C mov.l @(disp,pc),Rn */
	IF(0x0C0BD78Eu); { u32 t_ = r8; PR = 0x0C0BD792u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BD792u); }  /* 0C0BD78E jsr @Rn */
L_0C0BD792: BLKS(0x0C0BD792u);
	T = (r0 & r0) == 0;  /* 0C0BD792 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD754u, 4); goto L_0C0BD754; } goto L_0C0BD798; }  /* 0C0BD794 bt/s */
L_0C0BD798: BLKS(0x0C0BD798u);
	r2 = 0xC28EDFCu; UPD(0x0C0BD79Au, 2);  /* 0C0BD798 mov.l @(disp,pc),Rn */
	r0 = 0x38u;  /* 0C0BD79A mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BD79Eu, 2);  /* 0C0BD79C mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BD79E add #imm,Rn */
	IF(0x0C0BD7A0u); MACL = r4 * r0;  /* 0C0BD7A0 mul.l Rm,Rn */
	r1 = 0xC28F65Cu; UPD(0x0C0BD7A4u, 4);  /* 0C0BD7A2 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0BD7A6u, 1);  /* 0C0BD7A4 mov.l @Rm,Rn */
	IF(0x0C0BD7A6u); r6 = MACL;  /* 0C0BD7A6 sts macl,Rn */
	r8 = 0xC0000000u; UPD(0x0C0BD7AAu, 2);  /* 0C0BD7A8 mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0BD7AA and #imm,r0 */
	r6 += r1;  /* 0C0BD7AC add Rm,Rn */
	r0 |= r8;  /* 0C0BD7AE or Rm,Rn */
	W32(r6, r0); UPD(0x0C0BD7B2u, 4);  /* 0C0BD7B0 mov.l Rm,@Rn */
	W32(r6 + 0x4u, r10); UPD(0x0C0BD7B4u, 1);  /* 0C0BD7B2 mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0BD7B4 mov #imm,Rn */
	W32(r6 + 0xCu, r9); UPD(0x0C0BD7B8u, 2);  /* 0C0BD7B6 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x8u, r9); UPD(0x0C0BD7BAu, 1);  /* 0C0BD7B8 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x1Cu, r9); UPD(0x0C0BD7BCu, 1);  /* 0C0BD7BA mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x18u, r9); UPD(0x0C0BD7BEu, 1);  /* 0C0BD7BC mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x10u, r11); UPD(0x0C0BD7C0u, 1);  /* 0C0BD7BE mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x14u, r12); UPD(0x0C0BD7C2u, 1);  /* 0C0BD7C0 mov.l Rm,@(disp,Rn) */
	r6 += 0x30u;  /* 0C0BD7C2 add #imm,Rn */
	W8(r6, r9); UPD(0x0C0BD7C6u, 2);  /* 0C0BD7C4 mov.b Rm,@Rn */
	IF(0x0C0BD7C6u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BD7C8u, 1);  /* 0C0BD7C6 mov.b @(r0,Rm),Rn */
	r6 += 0x4u;  /* 0C0BD7C8 add #imm,Rn */
	W8(r6, r3); UPD(0x0C0BD7CCu, 2);  /* 0C0BD7CA mov.b Rm,@Rn */
	{ u32 v_ = r13; r6 -= 1; W8(r6, v_); } UPD(0x0C0BD7CEu, 1);  /* 0C0BD7CC mov.b Rm,@-Rn */
	r7 = 0x808080u; UPD(0x0C0BD7D0u, 1);  /* 0C0BD7CE mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFCDu;  /* 0C0BD7D0 add #imm,Rn */
	W32(r6 + 0x28u, r9); UPD(0x0C0BD7D4u, 2);  /* 0C0BD7D2 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x2Cu, r7); UPD(0x0C0BD7D6u, 1);  /* 0C0BD7D4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x8u); UPD(0x0C0BD7D8u, 1);  /* 0C0BD7D6 mov.l @(disp,Rm),Rn */
	r6 = r12;  /* 0C0BD7D8 mov Rm,Rn */
	r10 = 0xC1FFECCu; UPD(0x0C0BD7DCu, 2);  /* 0C0BD7DA mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C0BD7DEu, 1);  /* 0C0BD7DC mov.l Rm,@Rn */
	r10 += r5;  /* 0C0BD7DE add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0BD7E2u, 2);  /* 0C0BD7E0 mov.w @Rm,Rn */
	r5 = r11;  /* 0C0BD7E2 mov Rm,Rn */
	r0 = 0xC0BD060u; UPD(0x0C0BD7E6u, 2);  /* 0C0BD7E4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0BD7E8u, 1);  /* 0C0BD7E6 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0BD7EAu, 1);  /* 0C0BD7E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0BD7EAu); { u32 t_ = r0; PR = 0x0C0BD7EEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD060, 0x0C0BD060u, 0x0C0BD7EEu); }  /* 0C0BD7EA jsr @Rn */
L_0C0BD7EE: BLKS(0x0C0BD7EEu);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0BD7F0u, 1);  /* 0C0BD7EE mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0BD7F0 add #imm,Rn */
	r9 = 0xC0BD490u; UPD(0x0C0BD7F4u, 2);  /* 0C0BD7F2 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0BD7F4 add Rm,Rn */
	r7 = (u32)(s32)(s16)r1;  /* 0C0BD7F6 exts.w Rm,Rn */
	r4 = r11;  /* 0C0BD7F8 mov Rm,Rn */
	r5 = r12;  /* 0C0BD7FA mov Rm,Rn */
	IF(0x0C0BD7FCu); { u32 t_ = r9; PR = 0x0C0BD800u; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C0BD800u); }  /* 0C0BD7FC jsr @Rn */
L_0C0BD800: BLKS(0x0C0BD800u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BD754u, 3); goto L_0C0BD754; }  /* 0C0BD800 bra */
L_0C0BD810: BLKS(0x0C0BD810u);
	r8 = 0xC0C2110u; UPD(0x0C0BD812u, 1);  /* 0C0BD810 mov.l @(disp,pc),Rn */
	IF(0x0C0BD812u); { u32 t_ = r8; PR = 0x0C0BD816u; IF(0x0C0BD814u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BD816u); }  /* 0C0BD812 jsr @Rn */
L_0C0BD816: BLKS(0x0C0BD816u);
	{ IF(0x0C0BD818u); ; /* slot nop */ UPD(0x0C0BD78Cu, 3); goto L_0C0BD78C; }  /* 0C0BD816 bra */
L_0C0BD820: BLKS(0x0C0BD820u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BD744u, 3); goto L_0C0BD744; }  /* 0C0BD820 bra */
L_0C0BD830: BLKS(0x0C0BD830u);
	{ IF(0x0C0BD832u); ; /* slot nop */ UPD(0x0C0BD72Au, 3); goto L_0C0BD72A; }  /* 0C0BD830 bra */
}

void blk_f_0C0BD880(sh3_t *c)
{
	LOCALS;
L_0C0BD880: BLKS(0x0C0BD880u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0BD880 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0BD882 mov #imm,Rn */
	IF(0x0C0BD884u); MACL = r4 * r3;  /* 0C0BD884 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BD888u, 5);  /* 0C0BD886 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BD88Au, 1);  /* 0C0BD888 mov.l Rm,@-Rn */
	IF(0x0C0BD88Au); r2 = MACL;  /* 0C0BD88A sts macl,Rn */
	r0 += r2;  /* 0C0BD88C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0BD890u, 3);  /* 0C0BD88E mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0BD890 mov #imm,Rn */
	T = r2 > r0;  /* 0C0BD892 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BD950u, 5); goto L_0C0BD950; } goto L_0C0BD898; }  /* 0C0BD894 bt/s */
L_0C0BD898: BLKS(0x0C0BD898u);
	r0 = 0xC0BD8A8u;  /* 0C0BD898 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0BD89A add Rm,Rn */
	IF(0x0C0BD89Cu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0BD89Eu, 4);  /* 0C0BD89C mov.w @(r0,Rm),Rn */
	IF(0x0C0BD89Eu); { u32 tv_ = (r5 + 0x0C0BD8A2u); u32 t_ = PHYS(tv_); IF(0x0C0BD8A0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0BD8C0u: goto L_0C0BD8C0; case 0x0C0BD8F0u: goto L_0C0BD8F0; case 0x0C0BD960u: goto L_0C0BD960; case 0x0C0BD9F0u: goto L_0C0BD9F0; case 0x0C0BDA00u: goto L_0C0BDA00; case 0x0C0BDA10u: goto L_0C0BDA10; default: JUMPD(tv_); } }  /* 0C0BD89E braf Rn */
L_0C0BD8C0: BLKS(0x0C0BD8C0u);
	r0 = 0x38u;  /* 0C0BD8C0 mov #imm,Rn */
	IF(0x0C0BD8C2u); MACL = r4 * r0;  /* 0C0BD8C2 mul.l Rm,Rn */
	r6 = 0xC28F65Cu; UPD(0x0C0BD8C6u, 4);  /* 0C0BD8C4 mov.l @(disp,pc),Rn */
	IF(0x0C0BD8C6u); r3 = MACL;  /* 0C0BD8C6 sts macl,Rn */
	r3 += r6;  /* 0C0BD8C8 add Rm,Rn */
	r7 = R32(r3 + 0x18u); UPD(0x0C0BD8CCu, 3);  /* 0C0BD8CA mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C0BD8CEu, 1);  /* 0C0BD8CC mov.w @(disp,pc),Rn */
	IF(0x0C0BD8CEu); MACL = r7 * r6;  /* 0C0BD8CE mul.l Rm,Rn */
	IF(0x0C0BD8D0u); r2 = MACL;  /* 0C0BD8D0 sts macl,Rn */
	IF(0x0C0BD8D2u); T = (s32)r2 >= 0;  /* 0C0BD8D2 cmp/pz Rn */
	{ u32 c_ = T; r7 = 0xFFFFFFF8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD8DEu, 7); goto L_0C0BD8DE; } goto L_0C0BD8D8; }  /* 0C0BD8D4 bt/s */
L_0C0BD8D8: BLKS(0x0C0BD8D8u);
	{ IF(0x0C0BD8DAu); ; /* slot nop */ UPD(0x0C0BD9E0u, 4); goto L_0C0BD9E0; }  /* 0C0BD8D8 bra */
L_0C0BD8DC: BLKS(0x0C0BD8DCu);
	r7 = 0xFFFFFFF8u;  /* 0C0BD8DC mov #imm,Rn */
	UPD(0x0C0BD8DEu, 1);
L_0C0BD8DE: BLKS(0x0C0BD8DEu);
	IF(0x0C0BD8DEu); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0BD8DE shad Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C0BD8E2u, 2);  /* 0C0BD8E0 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0BD8E4u, 1);  /* 0C0BD8E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BD8E4u); MACL = r2 * r6;  /* 0C0BD8E4 mul.l Rm,Rn */
	IF(0x0C0BD8E6u); r2 = MACL;  /* 0C0BD8E6 sts macl,Rn */
	IF(0x0C0BD8E8u); T = (s32)r2 >= 0;  /* 0C0BD8E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0BD9D0u, 7); goto L_0C0BD9D0; }  /* 0C0BD8EA bf */
L_0C0BD8EC: BLKS(0x0C0BD8ECu);
	IF(0x0C0BD8ECu); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0BD8EC shad Rm,Rn */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0BD8F0u, 2);  /* 0C0BD8EE mov.l Rm,@(disp,Rn) */
L_0C0BD8F0: BLKS(0x0C0BD8F0u);
	r2 = 0x38u;  /* 0C0BD8F0 mov #imm,Rn */
	IF(0x0C0BD8F2u); MACL = r4 * r2;  /* 0C0BD8F2 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BD8F6u, 4);  /* 0C0BD8F4 mov.l @(disp,pc),Rn */
	IF(0x0C0BD8F6u); r6 = MACL;  /* 0C0BD8F6 sts macl,Rn */
	r6 += r0;  /* 0C0BD8F8 add Rm,Rn */
	r5 = R32(r6 + 0x10u); UPD(0x0C0BD8FCu, 3);  /* 0C0BD8FA mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x18u); UPD(0x0C0BD8FEu, 1);  /* 0C0BD8FC mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C0BD8FE add Rm,Rn */
	r7 = R32(r6 + 0x14u); UPD(0x0C0BD902u, 2);  /* 0C0BD900 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x1Cu); UPD(0x0C0BD904u, 1);  /* 0C0BD902 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x4u); UPD(0x0C0BD906u, 1);  /* 0C0BD904 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0BD906 add Rm,Rn */
	W32(r6 + 0x10u, r5); UPD(0x0C0BD90Au, 2);  /* 0C0BD908 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BD90Au); r0 <<= 2;  /* 0C0BD90A shll2 Rn */
	W32(r6 + 0x14u, r7); UPD(0x0C0BD90Eu, 2);  /* 0C0BD90C mov.l Rm,@(disp,Rn) */
	r3 = 0xC1FFEF0u; UPD(0x0C0BD910u, 1);  /* 0C0BD90E mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BD912u, 1);  /* 0C0BD910 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BD912 add Rm,Rn */
	IF(0x0C0BD914u); T = (s32)r2 >= 0;  /* 0C0BD914 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0BD918u); r6 = R32(r0 + r3); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0BD9C0u, 5); goto L_0C0BD9C0; } UPD(0x0C0BD91Au, 1); goto L_0C0BD91A; }  /* 0C0BD916 bf/s */
L_0C0BD91A: BLKS(0x0C0BD91Au);
	r5 = 0xA00000u; UPD(0x0C0BD91Cu, 1);  /* 0C0BD91A mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0BD91C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BD91E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD93Cu, 5); goto L_0C0BD93C; } goto L_0C0BD924; }  /* 0C0BD920 bt/s */
L_0C0BD924: BLKS(0x0C0BD924u);
	r2 = 0xC3C4048u; UPD(0x0C0BD926u, 2);  /* 0C0BD924 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BD928u, 1);  /* 0C0BD926 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BD92Au, 1);  /* 0C0BD928 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0BD92A mov Rm,Rn */
	r2 -= r0;  /* 0C0BD92C sub Rm,Rn */
	r2 += r3;  /* 0C0BD92E add Rm,Rn */
	IF(0x0C0BD930u); T = (s32)r2 >= 0;  /* 0C0BD930 cmp/pz Rn */
	if (!T) { UPD(0x0C0BD9B0u, 7); goto L_0C0BD9B0; }  /* 0C0BD932 bf */
L_0C0BD934: BLKS(0x0C0BD934u);
	r7 = 0x780000u; UPD(0x0C0BD936u, 1);  /* 0C0BD934 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0BD936 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0BD938 cmp/ge Rm,Rn */
	IF(0x0C0BD93Au); r1 = T;  /* 0C0BD93A movt Rn */
	UPD(0x0C0BD93Cu, 3);
L_0C0BD93C: BLKS(0x0C0BD93Cu);
	r6 = (u32)(s32)(s16)r1;  /* 0C0BD93C exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BD93E tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BD960u, 5); goto L_0C0BD960; } goto L_0C0BD944; }  /* 0C0BD940 bt/s */
L_0C0BD944: BLKS(0x0C0BD944u);
	IF(0x0C0BD944u); MACL = r4 * r3;  /* 0C0BD944 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C0BD946 mov #imm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BD94Au, 5);  /* 0C0BD948 mov.l @(disp,pc),Rn */
	IF(0x0C0BD94Au); r0 = MACL;  /* 0C0BD94A sts macl,Rn */
	IF(0x0C0BD94Cu); W32(r0 + r4, r5); UPD(0x0C0BD94Eu, 2);  /* 0C0BD94C mov.l Rm,@(r0,Rn) */
	IF(0x0C0BD94Eu); ;  /* 0C0BD94E nop */
	UPD(0x0C0BD950u, 1);
L_0C0BD950: BLKS(0x0C0BD950u);
	r15 = r14;  /* 0C0BD950 mov Rm,Rn */
	IF(0x0C0BD952u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BD952 rts */
L_0C0BD960: BLKS(0x0C0BD960u);
	r2 = 0x38u;  /* 0C0BD960 mov #imm,Rn */
	IF(0x0C0BD962u); MACL = r4 * r2;  /* 0C0BD962 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BD966u, 4);  /* 0C0BD964 mov.l @(disp,pc),Rn */
	IF(0x0C0BD966u); r3 = MACL;  /* 0C0BD966 sts macl,Rn */
	r3 += r0;  /* 0C0BD968 add Rm,Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C0BD96Cu, 3);  /* 0C0BD96A mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0BD96C tst Rm,Rn */
	if (T) { UPD(0x0C0BD976u, 4); goto L_0C0BD976; }  /* 0C0BD96E bt */
L_0C0BD970: BLKS(0x0C0BD970u);
	r7 = 0xFFFFF1F2u; UPD(0x0C0BD972u, 1);  /* 0C0BD970 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0BD972 add Rm,Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0BD976u, 2);  /* 0C0BD974 mov.l Rm,@(disp,Rn) */
L_0C0BD976: BLKS(0x0C0BD976u);
	r2 = r3;  /* 0C0BD976 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0BD978 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BD97Cu, 3);  /* 0C0BD97A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BD97C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0BD97E extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BD980 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BD950u, 6); goto L_0C0BD950; } UPD(0x0C0BD986u, 1); goto L_0C0BD986; }  /* 0C0BD982 bf/s */
L_0C0BD986: BLKS(0x0C0BD986u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BD988u, 1);  /* 0C0BD986 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C0BD988 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BD98A add #imm,Rn */
	W8(r2, r6); UPD(0x0C0BD98Eu, 3);  /* 0C0BD98C mov.b Rm,@Rn */
	T = r0 == 0xAu;  /* 0C0BD98E cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BD9A0u, 4); goto L_0C0BD9A0; } UPD(0x0C0BD994u, 1); goto L_0C0BD994; }  /* 0C0BD990 bt/s */
L_0C0BD994: BLKS(0x0C0BD994u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BD996u, 1);  /* 0C0BD994 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0BD996 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0BD950u, 4); goto L_0C0BD950; }  /* 0C0BD998 bf */
L_0C0BD99A: BLKS(0x0C0BD99Au);
	r5 = 0x0u;  /* 0C0BD99A mov #imm,Rn */
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C0BD950u, 4); goto L_0C0BD950; }  /* 0C0BD99C bra */
L_0C0BD9A0: BLKS(0x0C0BD9A0u);
	r4 = 0x204FFFFu; UPD(0x0C0BD9A2u, 1);  /* 0C0BD9A0 mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BD994u, 3); goto L_0C0BD994; }  /* 0C0BD9A2 bra */
L_0C0BD9B0: BLKS(0x0C0BD9B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BD934u, 3); goto L_0C0BD934; }  /* 0C0BD9B0 bra */
L_0C0BD9C0: BLKS(0x0C0BD9C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BD91Au, 3); goto L_0C0BD91A; }  /* 0C0BD9C0 bra */
L_0C0BD9D0: BLKS(0x0C0BD9D0u);
	r6 = 0xFFu; UPD(0x0C0BD9D2u, 1);  /* 0C0BD9D0 mov.w @(disp,pc),Rn */
	{ r2 += r6; /* slot add Rm,Rn */ UPD(0x0C0BD8ECu, 3); goto L_0C0BD8EC; }  /* 0C0BD9D2 bra */
L_0C0BD9E0: BLKS(0x0C0BD9E0u);
	r5 = 0xFFu; UPD(0x0C0BD9E2u, 1);  /* 0C0BD9E0 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0BD8DCu, 3); goto L_0C0BD8DC; }  /* 0C0BD9E2 bra */
L_0C0BD9F0: BLKS(0x0C0BD9F0u);
	r1 = 0xC0BE3F0u; UPD(0x0C0BD9F2u, 1);  /* 0C0BD9F0 mov.l @(disp,pc),Rn */
L_0C0BD9F2: BLKS(0x0C0BD9F2u);
	r15 = r14;  /* 0C0BD9F2 mov Rm,Rn */
	IF(0x0C0BD9F4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0BE3F0u: goto L_0C0BE3F0; case 0x0C0BF1A0u: goto L_0C0BF1A0; default: JUMPD(tv_); } }  /* 0C0BD9F4 jmp @Rn */
L_0C0BDA00: BLKS(0x0C0BDA00u);
	r1 = 0xC0BE680u; UPD(0x0C0BDA02u, 1);  /* 0C0BDA00 mov.l @(disp,pc),Rn */
	{ IF(0x0C0BDA04u); ; /* slot nop */ UPD(0x0C0BD9F2u, 3); goto L_0C0BD9F2; }  /* 0C0BDA02 bra */
L_0C0BDA10: BLKS(0x0C0BDA10u);
	r1 = 0xC0BF1A0u; UPD(0x0C0BDA12u, 1);  /* 0C0BDA10 mov.l @(disp,pc),Rn */
	{ IF(0x0C0BDA14u); ; /* slot nop */ UPD(0x0C0BD9F2u, 3); goto L_0C0BD9F2; }  /* 0C0BDA12 bra */
L_0C0BE3F0: BLKS(0x0C0BE3F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE3F2u, 1);  /* 0C0BE3F0 mov.l Rm,@-Rn */
	r7 = 0x38u;  /* 0C0BE3F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE3F6u, 2);  /* 0C0BE3F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE3F8u, 1);  /* 0C0BE3F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE3FAu, 1);  /* 0C0BE3F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE3FCu, 1);  /* 0C0BE3FA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0BE3FC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE400u, 2);  /* 0C0BE3FE mov.l Rm,@-Rn */
	IF(0x0C0BE400u); MACL = r11 * r7;  /* 0C0BE400 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE404u, 3);  /* 0C0BE402 mov.l Rm,@-Rn */
	r6 = 0xC28F65Cu; UPD(0x0C0BE406u, 1);  /* 0C0BE404 mov.l @(disp,pc),Rn */
	IF(0x0C0BE406u); r12 = MACL;  /* 0C0BE406 sts macl,Rn */
	IF(0x0C0BE408u); r15 -= 4; W32(r15, PR); UPD(0x0C0BE40Au, 2);  /* 0C0BE408 sts.l pr,@-Rn */
	r12 += r6;  /* 0C0BE40A add Rm,Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0BE40Eu, 2);  /* 0C0BE40C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BE40E add #imm,Rn */
	r5 = 0xC1FFF68u; UPD(0x0C0BE412u, 2);  /* 0C0BE410 mov.l @(disp,pc),Rn */
	IF(0x0C0BE412u); r0 <<= 2;  /* 0C0BE412 shll2 Rn */
	IF(0x0C0BE414u); r9 = R32(r0 + r5); UPD(0x0C0BE416u, 2);  /* 0C0BE414 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0BE416 mov Rm,Rn */
	r0 = R32(r12 + 0x20u); UPD(0x0C0BE41Au, 2);  /* 0C0BE418 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0BE41A mov Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C0BE41Eu, 2);  /* 0C0BE41C mov.l @(disp,Rm),Rn */
	r13 = 0xC069B20u; UPD(0x0C0BE420u, 1);  /* 0C0BE41E mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C0BE420 add Rm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0BE422 exts.w Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0BE426u, 3);  /* 0C0BE424 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BE426 mov Rm,Rn */
	IF(0x0C0BE428u); { u32 t_ = r13; PR = 0x0C0BE42Cu; W32(r12 + 0x20u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BE42Cu); }  /* 0C0BE428 jsr @Rn */
L_0C0BE42C: BLKS(0x0C0BE42Cu);
	IF(0x0C0BE42Cu); r0 <<= 2;  /* 0C0BE42C shll2 Rn */
	r4 = r10;  /* 0C0BE42E mov Rm,Rn */
	W32(r12 + 0x18u, r0); UPD(0x0C0BE432u, 3);  /* 0C0BE430 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE432u); { u32 t_ = r8; PR = 0x0C0BE436u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BE436u); }  /* 0C0BE432 jsr @Rn */
L_0C0BE436: BLKS(0x0C0BE436u);
	IF(0x0C0BE436u); r0 <<= 2;  /* 0C0BE436 shll2 Rn */
	r7 = R32(r12 + 0x14u); UPD(0x0C0BE43Au, 2);  /* 0C0BE438 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x1Cu, r0); UPD(0x0C0BE43Cu, 1);  /* 0C0BE43A mov.l Rm,@(disp,Rn) */
	r7 += r0;  /* 0C0BE43C add Rm,Rn */
	r4 = R32(r12 + 0x10u); UPD(0x0C0BE440u, 2);  /* 0C0BE43E mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x18u); UPD(0x0C0BE442u, 1);  /* 0C0BE440 mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0BE444u, 1);  /* 0C0BE442 mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C0BE444 add Rm,Rn */
	W32(r12 + 0x10u, r4); UPD(0x0C0BE448u, 2);  /* 0C0BE446 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE448u); r0 <<= 2;  /* 0C0BE448 shll2 Rn */
	W32(r12 + 0x14u, r7); UPD(0x0C0BE44Cu, 2);  /* 0C0BE44A mov.l Rm,@(disp,Rn) */
	r2 = 0xC1FFEF0u; UPD(0x0C0BE44Eu, 1);  /* 0C0BE44C mov.l @(disp,pc),Rn */
	r3 = 0xFF600000u; UPD(0x0C0BE450u, 1);  /* 0C0BE44E mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0BE450 add Rm,Rn */
	IF(0x0C0BE452u); T = (s32)r3 >= 0;  /* 0C0BE452 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0BE456u); r6 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0BE45Cu, 5); goto L_0C0BE45C; } UPD(0x0C0BE458u, 1); goto L_0C0BE458; }  /* 0C0BE454 bt/s */
L_0C0BE458: BLKS(0x0C0BE458u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0BE630u, 3); goto L_0C0BE630; }  /* 0C0BE458 bra */
L_0C0BE45C: BLKS(0x0C0BE45Cu);
	r2 = 0xA00000u; UPD(0x0C0BE45Eu, 1);  /* 0C0BE45C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BE45E add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0BE460 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE480u, 5); goto L_0C0BE480; } goto L_0C0BE466; }  /* 0C0BE462 bt/s */
L_0C0BE466: BLKS(0x0C0BE466u);
	r8 = 0xC3C4048u; UPD(0x0C0BE468u, 2);  /* 0C0BE466 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0BE468 mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C0BE46Cu, 2);  /* 0C0BE46A mov.l @Rm,Rn */
	r12 = 0xFF880000u; UPD(0x0C0BE46Eu, 1);  /* 0C0BE46C mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C0BE46E sub Rm,Rn */
	r2 += r12;  /* 0C0BE470 add Rm,Rn */
	IF(0x0C0BE472u); T = (s32)r2 >= 0;  /* 0C0BE472 cmp/pz Rn */
	if (T) { UPD(0x0C0BE478u, 6); goto L_0C0BE478; }  /* 0C0BE474 bt */
L_0C0BE476: BLKS(0x0C0BE476u);
	r2 = 0u - r2;  /* 0C0BE476 neg Rm,Rn */
	UPD(0x0C0BE478u, 1);
L_0C0BE478: BLKS(0x0C0BE478u);
	r9 = 0x780000u; UPD(0x0C0BE47Au, 1);  /* 0C0BE478 mov.l @(disp,pc),Rn */
	r6 += r9;  /* 0C0BE47A add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0BE47C cmp/ge Rm,Rn */
	IF(0x0C0BE47Eu); r1 = T;  /* 0C0BE47E movt Rn */
	UPD(0x0C0BE480u, 3);
L_0C0BE480: BLKS(0x0C0BE480u);
	r9 = (u32)(s32)(s16)r1;  /* 0C0BE480 exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BE482 tst Rm,Rn */
	{ u32 c_ = T; r13 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE4B0u, 5); goto L_0C0BE4B0; } goto L_0C0BE488; }  /* 0C0BE484 bt/s */
L_0C0BE488: BLKS(0x0C0BE488u);
	IF(0x0C0BE488u); MACL = r11 * r13;  /* 0C0BE488 mul.l Rm,Rn */
	r10 = 0x0u;  /* 0C0BE48A mov #imm,Rn */
	r11 = 0xC28F65Cu; UPD(0x0C0BE48Eu, 5);  /* 0C0BE48C mov.l @(disp,pc),Rn */
	IF(0x0C0BE48Eu); r0 = MACL;  /* 0C0BE48E sts macl,Rn */
	IF(0x0C0BE490u); W32(r0 + r11, r10); UPD(0x0C0BE492u, 2);  /* 0C0BE490 mov.l Rm,@(r0,Rn) */
L_0C0BE492: BLKS(0x0C0BE492u);
	r14 += 0x8u;  /* 0C0BE492 add #imm,Rn */
	UPD(0x0C0BE494u, 1);
L_0C0BE494: BLKS(0x0C0BE494u);
	r15 = r14;  /* 0C0BE494 mov Rm,Rn */
	IF(0x0C0BE496u); PR = R32(r15); r15 += 4; UPD(0x0C0BE498u, 2);  /* 0C0BE496 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BE49Au, 1);  /* 0C0BE498 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BE49Cu, 1);  /* 0C0BE49A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BE49Eu, 1);  /* 0C0BE49C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BE4A0u, 1);  /* 0C0BE49E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BE4A2u, 1);  /* 0C0BE4A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BE4A4u, 1);  /* 0C0BE4A2 mov.l @Rm+,Rn */
	IF(0x0C0BE4A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BE4A4 rts */
L_0C0BE4B0: BLKS(0x0C0BE4B0u);
	r4 = 0x38u;  /* 0C0BE4B0 mov #imm,Rn */
	IF(0x0C0BE4B2u); MACL = r11 * r4;  /* 0C0BE4B2 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE4B6u, 4);  /* 0C0BE4B4 mov.l @(disp,pc),Rn */
	r6 = 0x40u;  /* 0C0BE4B6 mov #imm,Rn */
	r12 = 0xC0BC020u; UPD(0x0C0BE4BAu, 2);  /* 0C0BE4B8 mov.l @(disp,pc),Rn */
	IF(0x0C0BE4BAu); r8 = MACL;  /* 0C0BE4BA sts macl,Rn */
	r8 += r0;  /* 0C0BE4BC add Rm,Rn */
	r4 = R32(r8 + 0x10u); UPD(0x0C0BE4C0u, 3);  /* 0C0BE4BE mov.l @(disp,Rm),Rn */
	IF(0x0C0BE4C0u); { u32 t_ = r12; PR = 0x0C0BE4C4u; r5 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC020, 0x0C0BC020u, 0x0C0BE4C4u); }  /* 0C0BE4C0 jsr @Rn */
L_0C0BE4C4: BLKS(0x0C0BE4C4u);
	T = (r0 & r0) == 0;  /* 0C0BE4C4 tst Rm,Rn */
	if (T) { UPD(0x0C0BE4D0u, 4); goto L_0C0BE4D0; }  /* 0C0BE4C6 bt */
L_0C0BE4C8: BLKS(0x0C0BE4C8u);
	W32(r8, r9); UPD(0x0C0BE4CAu, 1);  /* 0C0BE4C8 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BE494u, 3); goto L_0C0BE494; }  /* 0C0BE4CA bra */
L_0C0BE4D0: BLKS(0x0C0BE4D0u);
	r9 = R32(r8 + 0x4u); UPD(0x0C0BE4D2u, 1);  /* 0C0BE4D0 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x10u); UPD(0x0C0BE4D4u, 1);  /* 0C0BE4D2 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C0BE4D4 mov Rm,Rn */
	r10 = R32(r8); UPD(0x0C0BE4D8u, 2);  /* 0C0BE4D6 mov.l @Rm,Rn */
	IF(0x0C0BE4D8u); r0 <<= 2;  /* 0C0BE4D8 shll2 Rn */
	r13 = R32(r8 + 0x14u); UPD(0x0C0BE4DCu, 2);  /* 0C0BE4DA mov.l @(disp,Rm),Rn */
	r8 += 0x34u;  /* 0C0BE4DC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0BE4E0u, 2);  /* 0C0BE4DE mov.b @Rm,Rn */
	W32(r14, r6); UPD(0x0C0BE4E2u, 1);  /* 0C0BE4E0 mov.l Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0BE4E2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0BE4E6u, 2);  /* 0C0BE4E4 mov.b @Rm,Rn */
	r5 = 0xC1FFEF0u; UPD(0x0C0BE4E8u, 1);  /* 0C0BE4E6 mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BE4EAu, 1);  /* 0C0BE4E8 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0BE4ECu, 1);  /* 0C0BE4EA mov.l Rm,@(disp,Rn) */
	r2 += r12;  /* 0C0BE4EC add Rm,Rn */
	IF(0x0C0BE4EEu); T = (s32)r2 >= 0;  /* 0C0BE4EE cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0BE4F2u); r3 = R32(r0 + r5); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0BE4F8u, 5); goto L_0C0BE4F8; } UPD(0x0C0BE4F4u, 1); goto L_0C0BE4F4; }  /* 0C0BE4F0 bt/s */
L_0C0BE4F4: BLKS(0x0C0BE4F4u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE620u, 3); goto L_0C0BE620; }  /* 0C0BE4F4 bra */
L_0C0BE4F8: BLKS(0x0C0BE4F8u);
	r7 = 0xA00000u; UPD(0x0C0BE4FAu, 1);  /* 0C0BE4F8 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C0BE4FA add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C0BE4FC cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE51Cu, 5); goto L_0C0BE51C; } goto L_0C0BE502; }  /* 0C0BE4FE bt/s */
L_0C0BE502: BLKS(0x0C0BE502u);
	r2 = 0xC3C4048u; UPD(0x0C0BE504u, 2);  /* 0C0BE502 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BE506u, 1);  /* 0C0BE504 mov.l @Rm,Rn */
	r8 = 0xFF880000u; UPD(0x0C0BE508u, 1);  /* 0C0BE506 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BE508 mov Rm,Rn */
	r2 -= r0;  /* 0C0BE50A sub Rm,Rn */
	r2 += r8;  /* 0C0BE50C add Rm,Rn */
	IF(0x0C0BE50Eu); T = (s32)r2 >= 0;  /* 0C0BE50E cmp/pz Rn */
	if (T) { UPD(0x0C0BE514u, 7); goto L_0C0BE514; }  /* 0C0BE510 bt */
L_0C0BE512: BLKS(0x0C0BE512u);
	r2 = 0u - r2;  /* 0C0BE512 neg Rm,Rn */
	UPD(0x0C0BE514u, 1);
L_0C0BE514: BLKS(0x0C0BE514u);
	r4 = 0x780000u; UPD(0x0C0BE516u, 1);  /* 0C0BE514 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0BE516 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BE518 cmp/ge Rm,Rn */
	IF(0x0C0BE51Au); r1 = T;  /* 0C0BE51A movt Rn */
	UPD(0x0C0BE51Cu, 3);
L_0C0BE51C: BLKS(0x0C0BE51Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BE51C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BE51E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE5A0u, 5); goto L_0C0BE5A0; } UPD(0x0C0BE524u, 1); goto L_0C0BE524; }  /* 0C0BE520 bt/s */
L_0C0BE524: BLKS(0x0C0BE524u);
	r2 = (u32)(s32)(s16)r1;  /* 0C0BE524 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BE526 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE540u, 5); goto L_0C0BE540; } goto L_0C0BE52C; }  /* 0C0BE528 bf/s */
L_0C0BE52C: BLKS(0x0C0BE52Cu);
	IF(0x0C0BE52Cu); MACL = r11 * r8;  /* 0C0BE52C mul.l Rm,Rn */
	r11 = 0xC28F65Cu; UPD(0x0C0BE530u, 4);  /* 0C0BE52E mov.l @(disp,pc),Rn */
	IF(0x0C0BE530u); r0 = MACL;  /* 0C0BE530 sts macl,Rn */
	{ IF(0x0C0BE534u); W32(r0 + r11, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0BE492u, 4); goto L_0C0BE492; }  /* 0C0BE532 bra */
L_0C0BE540: BLKS(0x0C0BE540u);
	r0 = 0x38u;  /* 0C0BE540 mov #imm,Rn */
	IF(0x0C0BE542u); MACL = r11 * r0;  /* 0C0BE542 mul.l Rm,Rn */
	r7 = 0xC28F65Cu; UPD(0x0C0BE546u, 4);  /* 0C0BE544 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0BE546 mov #imm,Rn */
	IF(0x0C0BE548u); r9 = MACL;  /* 0C0BE548 sts macl,Rn */
	r9 += r7;  /* 0C0BE54A add Rm,Rn */
	r9 += 0x30u;  /* 0C0BE54C add #imm,Rn */
	W8(r9, r12); UPD(0x0C0BE550u, 5);  /* 0C0BE54E mov.b Rm,@Rn */
	r9 += 0xFFFFFFD0u;  /* 0C0BE550 add #imm,Rn */
	r2 = r9;  /* 0C0BE552 mov Rm,Rn */
	r2 += 0x31u;  /* 0C0BE554 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BE558u, 4);  /* 0C0BE556 mov.b @Rm,Rn */
	r3 = 0xFFu; UPD(0x0C0BE55Au, 1);  /* 0C0BE558 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0BE55A add #imm,Rn */
	r10 = r13 & 0xFF;  /* 0C0BE55C extu.b Rm,Rn */
	T = r10 == r3;  /* 0C0BE55E cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE590u, 6); goto L_0C0BE590; } UPD(0x0C0BE564u, 1); goto L_0C0BE564; }  /* 0C0BE560 bt/s */
L_0C0BE564: BLKS(0x0C0BE564u);
	r2 += 0x1u;  /* 0C0BE564 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BE568u, 2);  /* 0C0BE566 mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0BE568 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0BE56A extu.b Rm,Rn */
	T = r4 == r3;  /* 0C0BE56C cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE492u, 6); goto L_0C0BE492; } UPD(0x0C0BE572u, 1); goto L_0C0BE572; }  /* 0C0BE56E bf/s */
L_0C0BE572: BLKS(0x0C0BE572u);
	r10 = 0xC0C2360u; UPD(0x0C0BE574u, 1);  /* 0C0BE572 mov.l @(disp,pc),Rn */
	IF(0x0C0BE574u); { u32 t_ = r10; PR = 0x0C0BE578u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE578u); }  /* 0C0BE574 jsr @Rn */
L_0C0BE578: BLKS(0x0C0BE578u);
	r3 = R32(r9 + 0x20u); UPD(0x0C0BE57Au, 1);  /* 0C0BE578 mov.l @(disp,Rm),Rn */
	r1 = r0 & 0xFF;  /* 0C0BE57A extu.b Rm,Rn */
	r3 += r1;  /* 0C0BE57C add Rm,Rn */
	r3 += 0xFFFFFF80u;  /* 0C0BE57E add #imm,Rn */
	IF(0x0C0BE580u); { u32 t_ = r10; PR = 0x0C0BE584u; W32(r9 + 0x20u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE584u); }  /* 0C0BE580 jsr @Rn */
L_0C0BE584: BLKS(0x0C0BE584u);
	r0 &= 0x3Fu;  /* 0C0BE584 and #imm,r0 */
	r0 += 0xFFFFFFE0u;  /* 0C0BE586 add #imm,Rn */
	{ W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BE492u, 5); goto L_0C0BE492; }  /* 0C0BE588 bra */
L_0C0BE590: BLKS(0x0C0BE590u);
	r6 = 0x0u;  /* 0C0BE590 mov #imm,Rn */
	{ W32(r9, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0BE492u, 4); goto L_0C0BE492; }  /* 0C0BE592 bra */
L_0C0BE5A0: BLKS(0x0C0BE5A0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BE5A2u, 1);  /* 0C0BE5A0 mov.l @(disp,pc),Rn */
	IF(0x0C0BE5A2u); { u32 t_ = r0; PR = 0x0C0BE5A6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BE5A6u); }  /* 0C0BE5A2 jsr @Rn */
L_0C0BE5A6: BLKS(0x0C0BE5A6u);
	T = (r0 & r0) == 0;  /* 0C0BE5A6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE524u, 4); goto L_0C0BE524; } goto L_0C0BE5AC; }  /* 0C0BE5A8 bt/s */
L_0C0BE5AC: BLKS(0x0C0BE5ACu);
	r2 = 0xC28EDFCu; UPD(0x0C0BE5AEu, 2);  /* 0C0BE5AC mov.l @(disp,pc),Rn */
	r5 = 0x38u;  /* 0C0BE5AE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BE5B2u, 2);  /* 0C0BE5B0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BE5B2 mov #imm,Rn */
	IF(0x0C0BE5B4u); MACL = r6 * r5;  /* 0C0BE5B4 mul.l Rm,Rn */
	r3 = 0xC28F65Cu; UPD(0x0C0BE5B8u, 4);  /* 0C0BE5B6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0BE5B8 and Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0BE5BCu, 2);  /* 0C0BE5BA mov.l @(disp,pc),Rn */
	IF(0x0C0BE5BCu); r5 = MACL;  /* 0C0BE5BC sts macl,Rn */
	r5 += r3;  /* 0C0BE5BE add Rm,Rn */
	r10 |= r0;  /* 0C0BE5C0 or Rm,Rn */
	W32(r5, r10); UPD(0x0C0BE5C4u, 4);  /* 0C0BE5C2 mov.l Rm,@Rn */
	r0 = 0x3u;  /* 0C0BE5C4 mov #imm,Rn */
	W32(r5 + 0x4u, r9); UPD(0x0C0BE5C8u, 2);  /* 0C0BE5C6 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x10u, r12); UPD(0x0C0BE5CAu, 1);  /* 0C0BE5C8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BE5CA add Rm,Rn */
	W32(r5 + 0x14u, r13); UPD(0x0C0BE5CEu, 2);  /* 0C0BE5CC mov.l Rm,@(disp,Rn) */
	W32(r5 + 0xCu, r8); UPD(0x0C0BE5D0u, 1);  /* 0C0BE5CE mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x8u, r8); UPD(0x0C0BE5D2u, 1);  /* 0C0BE5D0 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x1Cu, r8); UPD(0x0C0BE5D4u, 1);  /* 0C0BE5D2 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r8); UPD(0x0C0BE5D6u, 1);  /* 0C0BE5D4 mov.l Rm,@(disp,Rn) */
	r5 += 0x30u;  /* 0C0BE5D6 add #imm,Rn */
	W8(r5, r8); UPD(0x0C0BE5DAu, 2);  /* 0C0BE5D8 mov.b Rm,@Rn */
	IF(0x0C0BE5DAu); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BE5DCu, 1);  /* 0C0BE5DA mov.b @(r0,Rm),Rn */
	r5 += 0x4u;  /* 0C0BE5DC add #imm,Rn */
	W8(r5, r7); UPD(0x0C0BE5E0u, 2);  /* 0C0BE5DE mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BE5E0 mov #imm,Rn */
	IF(0x0C0BE5E2u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BE5E4u, 2);  /* 0C0BE5E2 mov.b @(r0,Rm),Rn */
	r12 = 0xC0C2360u; UPD(0x0C0BE5E6u, 1);  /* 0C0BE5E4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r6; r5 -= 1; W8(r5, v_); } UPD(0x0C0BE5E8u, 1);  /* 0C0BE5E6 mov.b Rm,@-Rn */
	r1 = 0x808080u; UPD(0x0C0BE5EAu, 1);  /* 0C0BE5E8 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFCDu;  /* 0C0BE5EA add #imm,Rn */
	r13 = 0xC1FFF40u; UPD(0x0C0BE5EEu, 2);  /* 0C0BE5EC mov.l @(disp,pc),Rn */
	W32(r5 + 0x28u, r8); UPD(0x0C0BE5F0u, 1);  /* 0C0BE5EE mov.l Rm,@(disp,Rn) */
	r9 += r13;  /* 0C0BE5F0 add Rm,Rn */
	IF(0x0C0BE5F2u); { u32 t_ = r12; PR = 0x0C0BE5F6u; W32(r5 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE5F6u); }  /* 0C0BE5F2 jsr @Rn */
L_0C0BE5F6: BLKS(0x0C0BE5F6u);
	r0 &= 0x1u;  /* 0C0BE5F6 and #imm,r0 */
	IF(0x0C0BE5F8u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0BE5FAu, 2);  /* 0C0BE5F8 mov.b @(r0,Rm),Rn */
	r3 = 0x3Fu;  /* 0C0BE5FA mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0BE5FC extu.b Rm,Rn */
	T = r4 > r3;  /* 0C0BE5FE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BE610u, 6); goto L_0C0BE610; }  /* 0C0BE600 bt */
L_0C0BE602: BLKS(0x0C0BE602u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BE524u, 3); goto L_0C0BE524; }  /* 0C0BE602 bra */
L_0C0BE610: BLKS(0x0C0BE610u);
	r9 = 0xC0C2110u; UPD(0x0C0BE612u, 1);  /* 0C0BE610 mov.l @(disp,pc),Rn */
	IF(0x0C0BE612u); { u32 t_ = r9; PR = 0x0C0BE616u; IF(0x0C0BE614u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BE616u); }  /* 0C0BE612 jsr @Rn */
L_0C0BE616: BLKS(0x0C0BE616u);
	{ IF(0x0C0BE618u); ; /* slot nop */ UPD(0x0C0BE602u, 3); goto L_0C0BE602; }  /* 0C0BE616 bra */
L_0C0BE620: BLKS(0x0C0BE620u);
	{ IF(0x0C0BE622u); ; /* slot nop */ UPD(0x0C0BE4F8u, 3); goto L_0C0BE4F8; }  /* 0C0BE620 bra */
L_0C0BE630: BLKS(0x0C0BE630u);
	{ IF(0x0C0BE632u); ; /* slot nop */ UPD(0x0C0BE45Cu, 3); goto L_0C0BE45C; }  /* 0C0BE630 bra */
L_0C0BF1A0: BLKS(0x0C0BF1A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1A2u, 1);  /* 0C0BF1A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1A4u, 1);  /* 0C0BF1A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1A6u, 1);  /* 0C0BF1A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0BF1A6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1AAu, 2);  /* 0C0BF1A8 mov.l Rm,@-Rn */
	r4 = 0x38u;  /* 0C0BF1AA mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1AEu, 2);  /* 0C0BF1AC mov.l Rm,@-Rn */
	IF(0x0C0BF1AEu); MACL = r9 * r4;  /* 0C0BF1AE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1B2u, 3);  /* 0C0BF1B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF1B4u, 1);  /* 0C0BF1B2 mov.l Rm,@-Rn */
	IF(0x0C0BF1B4u); r5 = MACL;  /* 0C0BF1B4 sts macl,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BF1B8u, 2);  /* 0C0BF1B6 mov.l @(disp,pc),Rn */
	IF(0x0C0BF1B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BF1BAu, 1);  /* 0C0BF1B8 sts.l pr,@-Rn */
	r5 += r0;  /* 0C0BF1BA add Rm,Rn */
	r1 = R32(r5 + 0x18u); UPD(0x0C0BF1BEu, 2);  /* 0C0BF1BC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BF1BE add #imm,Rn */
	r4 = R32(r5 + 0x10u); UPD(0x0C0BF1C2u, 2);  /* 0C0BF1C0 mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x14u); UPD(0x0C0BF1C4u, 1);  /* 0C0BF1C2 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0BF1C4 add Rm,Rn */
	r3 = 0xFFFFE000u; UPD(0x0C0BF1C8u, 2);  /* 0C0BF1C6 mov.w @(disp,pc),Rn */
	r7 = R32(r5 + 0x1Cu); UPD(0x0C0BF1CAu, 1);  /* 0C0BF1C8 mov.l @(disp,Rm),Rn */
	r1 += r3;  /* 0C0BF1CA add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0BF1CEu, 2);  /* 0C0BF1CC mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0BF1CE add Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BF1D2u, 2);  /* 0C0BF1D0 mov.l @(disp,pc),Rn */
	IF(0x0C0BF1D2u); r0 <<= 2;  /* 0C0BF1D2 shll2 Rn */
	W32(r5 + 0x10u, r4); UPD(0x0C0BF1D6u, 2);  /* 0C0BF1D4 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x14u, r6); UPD(0x0C0BF1D8u, 1);  /* 0C0BF1D6 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r1); UPD(0x0C0BF1DAu, 1);  /* 0C0BF1D8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF1DAu); r3 = R32(r0 + r2); UPD(0x0C0BF1DCu, 1);  /* 0C0BF1DA mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BF1DEu, 1);  /* 0C0BF1DC mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0BF1DE add Rm,Rn */
	IF(0x0C0BF1E0u); T = (s32)r2 >= 0;  /* 0C0BF1E0 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF1EAu, 5); goto L_0C0BF1EA; } goto L_0C0BF1E6; }  /* 0C0BF1E2 bt/s */
L_0C0BF1E6: BLKS(0x0C0BF1E6u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BF3D0u, 4); goto L_0C0BF3D0; }  /* 0C0BF1E6 bra */
L_0C0BF1EA: BLKS(0x0C0BF1EAu);
	r8 = 0xA00000u; UPD(0x0C0BF1ECu, 1);  /* 0C0BF1EA mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0BF1EC add Rm,Rn */
	T = (s32)r2 >= (s32)r8;  /* 0C0BF1EE cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF20Eu, 5); goto L_0C0BF20E; } goto L_0C0BF1F4; }  /* 0C0BF1F0 bt/s */
L_0C0BF1F4: BLKS(0x0C0BF1F4u);
	r11 = 0xC3C4048u; UPD(0x0C0BF1F6u, 2);  /* 0C0BF1F4 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BF1F6 mov Rm,Rn */
	r10 = R32(r11); UPD(0x0C0BF1FAu, 2);  /* 0C0BF1F8 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BF1FCu, 1);  /* 0C0BF1FA mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C0BF1FC sub Rm,Rn */
	r2 += r6;  /* 0C0BF1FE add Rm,Rn */
	IF(0x0C0BF200u); T = (s32)r2 >= 0;  /* 0C0BF200 cmp/pz Rn */
	if (T) { UPD(0x0C0BF206u, 6); goto L_0C0BF206; }  /* 0C0BF202 bt */
L_0C0BF204: BLKS(0x0C0BF204u);
	r2 = 0u - r2;  /* 0C0BF204 neg Rm,Rn */
	UPD(0x0C0BF206u, 1);
L_0C0BF206: BLKS(0x0C0BF206u);
	r12 = 0x780000u; UPD(0x0C0BF208u, 1);  /* 0C0BF206 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0BF208 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BF20A cmp/ge Rm,Rn */
	IF(0x0C0BF20Cu); r1 = T;  /* 0C0BF20C movt Rn */
	UPD(0x0C0BF20Eu, 3);
L_0C0BF20E: BLKS(0x0C0BF20Eu);
	r6 = (u32)(s32)(s16)r1;  /* 0C0BF20E exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BF210 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF240u, 5); goto L_0C0BF240; } goto L_0C0BF216; }  /* 0C0BF212 bt/s */
L_0C0BF216: BLKS(0x0C0BF216u);
	IF(0x0C0BF216u); MACL = r9 * r2;  /* 0C0BF216 mul.l Rm,Rn */
	r13 = 0x0u;  /* 0C0BF218 mov #imm,Rn */
	r9 = 0xC28F65Cu; UPD(0x0C0BF21Cu, 5);  /* 0C0BF21A mov.l @(disp,pc),Rn */
	IF(0x0C0BF21Cu); r0 = MACL;  /* 0C0BF21C sts macl,Rn */
	IF(0x0C0BF21Eu); W32(r0 + r9, r13); UPD(0x0C0BF220u, 2);  /* 0C0BF21E mov.l Rm,@(r0,Rn) */
L_0C0BF220: BLKS(0x0C0BF220u);
	r14 += 0x8u;  /* 0C0BF220 add #imm,Rn */
	r15 = r14;  /* 0C0BF222 mov Rm,Rn */
	IF(0x0C0BF224u); PR = R32(r15); r15 += 4; UPD(0x0C0BF226u, 3);  /* 0C0BF224 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF228u, 1);  /* 0C0BF226 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BF22Au, 1);  /* 0C0BF228 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BF22Cu, 1);  /* 0C0BF22A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BF22Eu, 1);  /* 0C0BF22C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF230u, 1);  /* 0C0BF22E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF232u, 1);  /* 0C0BF230 mov.l @Rm+,Rn */
	IF(0x0C0BF232u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF232 rts */
L_0C0BF240: BLKS(0x0C0BF240u);
	r3 = 0x38u;  /* 0C0BF240 mov #imm,Rn */
	IF(0x0C0BF242u); MACL = r9 * r3;  /* 0C0BF242 mul.l Rm,Rn */
	r7 = 0xC28F65Cu; UPD(0x0C0BF246u, 4);  /* 0C0BF244 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0BF246 mov #imm,Rn */
	IF(0x0C0BF248u); r3 = MACL;  /* 0C0BF248 sts macl,Rn */
	r3 += r7;  /* 0C0BF24A add Rm,Rn */
	r7 = r3;  /* 0C0BF24C mov Rm,Rn */
	r7 += 0x30u;  /* 0C0BF24E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BF252u, 6);  /* 0C0BF250 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0BF252 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0BF254 extu.b Rm,Rn */
	T = r0 > r5;  /* 0C0BF256 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BF220u, 6); goto L_0C0BF220; } UPD(0x0C0BF25Cu, 1); goto L_0C0BF25C; }  /* 0C0BF258 bf/s */
L_0C0BF25C: BLKS(0x0C0BF25Cu);
	r10 = R32(r3 + 0x4u); UPD(0x0C0BF25Eu, 1);  /* 0C0BF25C mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x10u); UPD(0x0C0BF260u, 1);  /* 0C0BF25E mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0BF260 mov Rm,Rn */
	r11 = R32(r3); UPD(0x0C0BF264u, 2);  /* 0C0BF262 mov.l @Rm,Rn */
	IF(0x0C0BF264u); r0 <<= 2;  /* 0C0BF264 shll2 Rn */
	r13 = R32(r3 + 0x14u); UPD(0x0C0BF268u, 2);  /* 0C0BF266 mov.l @(disp,Rm),Rn */
	W8(r7, r6); UPD(0x0C0BF26Au, 1);  /* 0C0BF268 mov.b Rm,@Rn */
	r3 += 0x34u;  /* 0C0BF26A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BF26Eu, 2);  /* 0C0BF26C mov.b @Rm,Rn */
	W32(r14, r6); UPD(0x0C0BF270u, 1);  /* 0C0BF26E mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0BF270 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BF274u, 2);  /* 0C0BF272 mov.b @Rm,Rn */
	r8 = 0xC1FFEF0u; UPD(0x0C0BF276u, 1);  /* 0C0BF274 mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BF278u, 1);  /* 0C0BF276 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0BF27Au, 1);  /* 0C0BF278 mov.l Rm,@(disp,Rn) */
	r2 += r12;  /* 0C0BF27A add Rm,Rn */
	IF(0x0C0BF27Cu); T = (s32)r2 >= 0;  /* 0C0BF27C cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0BF280u); r3 = R32(r0 + r8); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0BF370u, 5); goto L_0C0BF370; } UPD(0x0C0BF282u, 1); goto L_0C0BF282; }  /* 0C0BF27E bf/s */
L_0C0BF282: BLKS(0x0C0BF282u);
	r5 = 0xA00000u; UPD(0x0C0BF284u, 1);  /* 0C0BF282 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BF284 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BF286 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF2A4u, 5); goto L_0C0BF2A4; } goto L_0C0BF28C; }  /* 0C0BF288 bt/s */
L_0C0BF28C: BLKS(0x0C0BF28Cu);
	r2 = 0xC3C4048u; UPD(0x0C0BF28Eu, 2);  /* 0C0BF28C mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0BF290u, 1);  /* 0C0BF28E mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0BF292u, 1);  /* 0C0BF290 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BF292 mov Rm,Rn */
	r2 -= r4;  /* 0C0BF294 sub Rm,Rn */
	r2 += r0;  /* 0C0BF296 add Rm,Rn */
	IF(0x0C0BF298u); T = (s32)r2 >= 0;  /* 0C0BF298 cmp/pz Rn */
	if (!T) { UPD(0x0C0BF360u, 7); goto L_0C0BF360; }  /* 0C0BF29A bf */
L_0C0BF29C: BLKS(0x0C0BF29Cu);
	r7 = 0x780000u; UPD(0x0C0BF29Eu, 1);  /* 0C0BF29C mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C0BF29E add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BF2A0 cmp/ge Rm,Rn */
	IF(0x0C0BF2A2u); r1 = T;  /* 0C0BF2A2 movt Rn */
	UPD(0x0C0BF2A4u, 3);
L_0C0BF2A4: BLKS(0x0C0BF2A4u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BF2A4 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BF2A6 tst Rm,Rn */
	if (T) { UPD(0x0C0BF2F0u, 5); goto L_0C0BF2F0; }  /* 0C0BF2A8 bt */
L_0C0BF2AA: BLKS(0x0C0BF2AAu);
	r12 = 0x38u;  /* 0C0BF2AA mov #imm,Rn */
	UPD(0x0C0BF2ACu, 1);
L_0C0BF2AC: BLKS(0x0C0BF2ACu);
	IF(0x0C0BF2ACu); MACL = r9 * r12;  /* 0C0BF2AC mul.l Rm,Rn */
	UPD(0x0C0BF2AEu, 2);
L_0C0BF2AE: BLKS(0x0C0BF2AEu);
	r11 = 0xC28F65Cu; UPD(0x0C0BF2B0u, 1);  /* 0C0BF2AE mov.l @(disp,pc),Rn */
	IF(0x0C0BF2B0u); r3 = MACL;  /* 0C0BF2B0 sts macl,Rn */
	r3 += r11;  /* 0C0BF2B2 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0BF2B6u, 3);  /* 0C0BF2B4 mov.l @(disp,Rm),Rn */
	r9 = 0x1u;  /* 0C0BF2B6 mov #imm,Rn */
	r0 &= 0xFu;  /* 0C0BF2B8 and #imm,r0 */
	T = (s32)r0 > (s32)r9;  /* 0C0BF2BA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BF220u, 6); goto L_0C0BF220; }  /* 0C0BF2BC bf */
L_0C0BF2BE: BLKS(0x0C0BF2BEu);
	r8 = 0x0u;  /* 0C0BF2BE mov #imm,Rn */
	r5 = 0xC239484u; UPD(0x0C0BF2C2u, 2);  /* 0C0BF2C0 mov.l @(disp,pc),Rn */
	W32(r5, r8); UPD(0x0C0BF2C4u, 1);  /* 0C0BF2C2 mov.l Rm,@Rn */
	r3 += 0x33u;  /* 0C0BF2C4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BF2C8u, 2);  /* 0C0BF2C6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BF2C8 add #imm,Rn */
	r6 = 0x10000u; UPD(0x0C0BF2CCu, 2);  /* 0C0BF2CA mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BF2CC add #imm,Rn */
	r13 = 0xC07CD80u; UPD(0x0C0BF2D0u, 2);  /* 0C0BF2CE mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0BF2D0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0BF2D4u, 2);  /* 0C0BF2D2 mov.l Rm,@Rn */
	r4 = 0x7u;  /* 0C0BF2D4 mov #imm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0BF2D8u, 2);  /* 0C0BF2D6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r3 + 0x10u); UPD(0x0C0BF2DAu, 1);  /* 0C0BF2D8 mov.l @(disp,Rm),Rn */
	IF(0x0C0BF2DAu); { u32 t_ = r13; PR = 0x0C0BF2DEu; r6 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0BF2DEu); }  /* 0C0BF2DA jsr @Rn */
L_0C0BF2DE: BLKS(0x0C0BF2DEu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BF220u, 3); goto L_0C0BF220; }  /* 0C0BF2DE bra */
L_0C0BF2F0: BLKS(0x0C0BF2F0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BF2F2u, 1);  /* 0C0BF2F0 mov.l @(disp,pc),Rn */
	IF(0x0C0BF2F2u); { u32 t_ = r0; PR = 0x0C0BF2F6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BF2F6u); }  /* 0C0BF2F2 jsr @Rn */
L_0C0BF2F6: BLKS(0x0C0BF2F6u);
	T = (r0 & r0) == 0;  /* 0C0BF2F6 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF2AAu, 4); goto L_0C0BF2AA; } goto L_0C0BF2FC; }  /* 0C0BF2F8 bt/s */
L_0C0BF2FC: BLKS(0x0C0BF2FCu);
	r2 = 0xC28EDFCu; UPD(0x0C0BF2FEu, 2);  /* 0C0BF2FC mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BF300u, 1);  /* 0C0BF2FE mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0BF300 mov #imm,Rn */
	IF(0x0C0BF302u); MACL = r3 * r7;  /* 0C0BF302 mul.l Rm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BF306u, 4);  /* 0C0BF304 mov.l @(disp,pc),Rn */
	r11 &= r0;  /* 0C0BF306 and Rm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0BF30Au, 2);  /* 0C0BF308 mov.l @(disp,pc),Rn */
	IF(0x0C0BF30Au); r3 = MACL;  /* 0C0BF30A sts macl,Rn */
	r3 += r4;  /* 0C0BF30C add Rm,Rn */
	r11 |= r5;  /* 0C0BF30E or Rm,Rn */
	W32(r3, r11); UPD(0x0C0BF312u, 4);  /* 0C0BF310 mov.l Rm,@Rn */
	r0 = 0x3u;  /* 0C0BF312 mov #imm,Rn */
	W32(r3 + 0x4u, r10); UPD(0x0C0BF316u, 2);  /* 0C0BF314 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0BF318u, 1);  /* 0C0BF316 mov.l Rm,@(disp,Rn) */
	r10 += r10;  /* 0C0BF318 add Rm,Rn */
	W32(r3 + 0x8u, r8); UPD(0x0C0BF31Cu, 2);  /* 0C0BF31A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r12); UPD(0x0C0BF31Eu, 1);  /* 0C0BF31C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r13); UPD(0x0C0BF320u, 1);  /* 0C0BF31E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0BF322u, 1);  /* 0C0BF320 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0BF324u, 1);  /* 0C0BF322 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BF324 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BF328u, 2);  /* 0C0BF326 mov.b Rm,@Rn */
	IF(0x0C0BF328u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BF32Au, 1);  /* 0C0BF328 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BF32A add #imm,Rn */
	W8(r3, r6); UPD(0x0C0BF32Eu, 2);  /* 0C0BF32C mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BF32E mov #imm,Rn */
	IF(0x0C0BF330u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BF332u, 2);  /* 0C0BF330 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r1; r3 -= 1; W8(r3, v_); } UPD(0x0C0BF334u, 1);  /* 0C0BF332 mov.b Rm,@-Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BF334 add #imm,Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0BF338u, 2);  /* 0C0BF336 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0C2360u; UPD(0x0C0BF33Au, 1);  /* 0C0BF338 mov.l @(disp,pc),Rn */
	r8 = 0x808080u; UPD(0x0C0BF33Cu, 1);  /* 0C0BF33A mov.l @(disp,pc),Rn */
	r12 = 0xC1FFF40u; UPD(0x0C0BF33Eu, 1);  /* 0C0BF33C mov.l @(disp,pc),Rn */
	IF(0x0C0BF33Eu); { u32 t_ = r13; PR = 0x0C0BF342u; W32(r3 + 0x2Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BF342u); }  /* 0C0BF33E jsr @Rn */
L_0C0BF342: BLKS(0x0C0BF342u);
	r10 += r12;  /* 0C0BF342 add Rm,Rn */
	r0 &= 0x1u;  /* 0C0BF344 and #imm,r0 */
	IF(0x0C0BF346u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0BF348u, 3);  /* 0C0BF346 mov.b @(r0,Rm),Rn */
	r10 = 0x3Fu;  /* 0C0BF348 mov #imm,Rn */
	r4 = r11 & 0xFF;  /* 0C0BF34A extu.b Rm,Rn */
	T = r4 > r10;  /* 0C0BF34C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r12 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF2ACu, 6); goto L_0C0BF2AC; } goto L_0C0BF352; }  /* 0C0BF34E bf/s */
L_0C0BF352: BLKS(0x0C0BF352u);
	r10 = 0xC0C2110u; UPD(0x0C0BF354u, 2);  /* 0C0BF352 mov.l @(disp,pc),Rn */
	IF(0x0C0BF354u); { u32 t_ = r10; PR = 0x0C0BF358u; IF(0x0C0BF356u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BF358u); }  /* 0C0BF354 jsr @Rn */
L_0C0BF358: BLKS(0x0C0BF358u);
	{ IF(0x0C0BF35Au); MACL = r9 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C0BF2AEu, 4); goto L_0C0BF2AE; }  /* 0C0BF358 bra */
L_0C0BF360: BLKS(0x0C0BF360u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BF29Cu, 3); goto L_0C0BF29C; }  /* 0C0BF360 bra */
L_0C0BF370: BLKS(0x0C0BF370u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BF282u, 3); goto L_0C0BF282; }  /* 0C0BF370 bra */
L_0C0BF3D0: BLKS(0x0C0BF3D0u);
	{ IF(0x0C0BF3D2u); ; /* slot nop */ UPD(0x0C0BF1EAu, 3); goto L_0C0BF1EA; }  /* 0C0BF3D0 bra */
}

void blk_f_0C0BDC00(sh3_t *c)
{
	LOCALS;
L_0C0BDC00: BLKS(0x0C0BDC00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC02u, 1);  /* 0C0BDC00 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0BDC02 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC06u, 2);  /* 0C0BDC04 mov.l Rm,@-Rn */
	r0 = 0x38u;  /* 0C0BDC06 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC0Au, 2);  /* 0C0BDC08 mov.l Rm,@-Rn */
	IF(0x0C0BDC0Au); MACL = r1 * r0;  /* 0C0BDC0A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC0Eu, 3);  /* 0C0BDC0C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC10u, 1);  /* 0C0BDC0E mov.l Rm,@-Rn */
	IF(0x0C0BDC10u); r3 = MACL;  /* 0C0BDC10 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDC14u, 2);  /* 0C0BDC12 mov.l Rm,@-Rn */
	IF(0x0C0BDC14u); r2 = MACL;  /* 0C0BDC14 sts macl,Rn */
	r8 = 0xC28F65Cu; UPD(0x0C0BDC18u, 2);  /* 0C0BDC16 mov.l @(disp,pc),Rn */
	IF(0x0C0BDC18u); r15 -= 4; W32(r15, PR); UPD(0x0C0BDC1Au, 1);  /* 0C0BDC18 sts.l pr,@-Rn */
	r3 += r8;  /* 0C0BDC1A add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0BDC1Eu, 2);  /* 0C0BDC1C mov.l @(disp,Rm),Rn */
	IF(0x0C0BDC1Eu); T = (s32)r1 >= 0;  /* 0C0BDC1E cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BDC28u, 4); goto L_0C0BDC28; } goto L_0C0BDC24; }  /* 0C0BDC20 bt/s */
L_0C0BDC24: BLKS(0x0C0BDC24u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BDE90u, 4); goto L_0C0BDE90; }  /* 0C0BDC24 bra */
L_0C0BDC28: BLKS(0x0C0BDC28u);
	r6 = 0xFFFFFFFCu;  /* 0C0BDC28 mov #imm,Rn */
	UPD(0x0C0BDC2Au, 1);
L_0C0BDC2A: BLKS(0x0C0BDC2Au);
	IF(0x0C0BDC2Au); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BDC2A shad Rm,Rn */
	r7 = 0xFu;  /* 0C0BDC2C mov #imm,Rn */
	IF(0x0C0BDC2Eu); MACL = r1 * r7;  /* 0C0BDC2E mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BDC32u, 5);  /* 0C0BDC30 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDC32u); r0 = MACL;  /* 0C0BDC32 sts macl,Rn */
	IF(0x0C0BDC34u); T = (s32)r1 >= 0;  /* 0C0BDC34 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDC3Eu, 5); goto L_0C0BDC3E; } UPD(0x0C0BDC3Au, 1); goto L_0C0BDC3A; }  /* 0C0BDC36 bt/s */
L_0C0BDC3A: BLKS(0x0C0BDC3Au);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BDE80u, 3); goto L_0C0BDE80; }  /* 0C0BDC3A bra */
L_0C0BDC3E: BLKS(0x0C0BDC3Eu);
	IF(0x0C0BDC3Eu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BDC3E shad Rm,Rn */
	UPD(0x0C0BDC40u, 1);
L_0C0BDC40: BLKS(0x0C0BDC40u);
	IF(0x0C0BDC40u); MACL = r1 * r7;  /* 0C0BDC40 mul.l Rm,Rn */
	r5 = r2;  /* 0C0BDC42 mov Rm,Rn */
	r2 = 0xC23945Cu; UPD(0x0C0BDC46u, 4);  /* 0C0BDC44 mov.l @(disp,pc),Rn */
	IF(0x0C0BDC46u); r4 = MACL;  /* 0C0BDC46 sts macl,Rn */
	W32(r3 + 0x1Cu, r4); UPD(0x0C0BDC4Au, 2);  /* 0C0BDC48 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0BDC4Cu, 1);  /* 0C0BDC4A mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0BDC4Eu, 1);  /* 0C0BDC4C mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0BDC4E sub Rm,Rn */
	IF(0x0C0BDC50u); T = (s32)r1 >= 0;  /* 0C0BDC50 cmp/pz Rn */
	if (T) { UPD(0x0C0BDC5Au, 5); goto L_0C0BDC5A; }  /* 0C0BDC52 bt */
L_0C0BDC54: BLKS(0x0C0BDC54u);
	r1 += 0xFu;  /* 0C0BDC54 add #imm,Rn */
	{ IF(0x0C0BDC58u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BDC5Cu, 4); goto L_0C0BDC5C; }  /* 0C0BDC56 bra */
L_0C0BDC5A: BLKS(0x0C0BDC5Au);
	IF(0x0C0BDC5Au); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BDC5A shad Rm,Rn */
	UPD(0x0C0BDC5Cu, 1);
L_0C0BDC5C: BLKS(0x0C0BDC5Cu);
	IF(0x0C0BDC5Cu); MACL = r1 * r7;  /* 0C0BDC5C mul.l Rm,Rn */
	r9 = R32(r3 + 0x10u); UPD(0x0C0BDC60u, 3);  /* 0C0BDC5E mov.l @(disp,Rm),Rn */
	IF(0x0C0BDC60u); r6 = MACL;  /* 0C0BDC60 sts macl,Rn */
	r6 += r2;  /* 0C0BDC62 add Rm,Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0BDC66u, 3);  /* 0C0BDC64 mov.l Rm,@(disp,Rn) */
	r9 += r0;  /* 0C0BDC66 add Rm,Rn */
	r9 -= r6;  /* 0C0BDC68 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BDC6Cu, 3);  /* 0C0BDC6A mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0BDC6Eu, 1);  /* 0C0BDC6C mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0BDC6E add Rm,Rn */
	r7 += r9;  /* 0C0BDC70 add Rm,Rn */
	W32(r3 + 0x10u, r9); UPD(0x0C0BDC74u, 3);  /* 0C0BDC72 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BDC74u); T = (s32)r7 >= 0;  /* 0C0BDC74 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDC7Eu, 4); goto L_0C0BDC7E; } UPD(0x0C0BDC7Au, 1); goto L_0C0BDC7A; }  /* 0C0BDC76 bt/s */
L_0C0BDC7A: BLKS(0x0C0BDC7Au);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BDE70u, 3); goto L_0C0BDE70; }  /* 0C0BDC7A bra */
L_0C0BDC7E: BLKS(0x0C0BDC7Eu);
	r0 = 0xA80000u; UPD(0x0C0BDC80u, 1);  /* 0C0BDC7E mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0BDC80 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BDCA0u, 4); goto L_0C0BDCA0; } goto L_0C0BDC86; }  /* 0C0BDC82 bt/s */
L_0C0BDC86: BLKS(0x0C0BDC86u);
	r10 = 0xC3C4048u; UPD(0x0C0BDC88u, 2);  /* 0C0BDC86 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BDC88 mov Rm,Rn */
	r7 = R32(r10); UPD(0x0C0BDC8Cu, 2);  /* 0C0BDC8A mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BDC8Eu, 1);  /* 0C0BDC8C mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BDC8E sub Rm,Rn */
	r2 += r4;  /* 0C0BDC90 add Rm,Rn */
	IF(0x0C0BDC92u); T = (s32)r2 >= 0;  /* 0C0BDC92 cmp/pz Rn */
	if (T) { UPD(0x0C0BDC98u, 6); goto L_0C0BDC98; }  /* 0C0BDC94 bt */
L_0C0BDC96: BLKS(0x0C0BDC96u);
	r2 = 0u - r2;  /* 0C0BDC96 neg Rm,Rn */
	UPD(0x0C0BDC98u, 1);
L_0C0BDC98: BLKS(0x0C0BDC98u);
	r11 = 0x800000u; UPD(0x0C0BDC9Au, 1);  /* 0C0BDC98 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C0BDC9A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BDCC0u, 4); goto L_0C0BDCC0; } UPD(0x0C0BDCA0u, 1); goto L_0C0BDCA0; }  /* 0C0BDC9C bf/s */
L_0C0BDCA0: BLKS(0x0C0BDCA0u);
	W32(r3, r1); UPD(0x0C0BDCA2u, 1);  /* 0C0BDCA0 mov.l Rm,@Rn */
L_0C0BDCA2: BLKS(0x0C0BDCA2u);
	r15 = r14;  /* 0C0BDCA2 mov Rm,Rn */
	IF(0x0C0BDCA4u); PR = R32(r15); r15 += 4; UPD(0x0C0BDCA6u, 2);  /* 0C0BDCA4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BDCA8u, 1);  /* 0C0BDCA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BDCAAu, 1);  /* 0C0BDCA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BDCACu, 1);  /* 0C0BDCAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BDCAEu, 1);  /* 0C0BDCAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BDCB0u, 1);  /* 0C0BDCAE mov.l @Rm+,Rn */
	IF(0x0C0BDCB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BDCB0 rts */
L_0C0BDCC0: BLKS(0x0C0BDCC0u);
	r7 = r3;  /* 0C0BDCC0 mov Rm,Rn */
	r6 = r3;  /* 0C0BDCC2 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0BDCC4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BDCC8u, 4);  /* 0C0BDCC6 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0BDCC8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BDCCCu, 2);  /* 0C0BDCCA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BDCCC add #imm,Rn */
	r9 = r1 & 0xFF;  /* 0C0BDCCE extu.b Rm,Rn */
	r12 = r0 & 0xFF;  /* 0C0BDCD0 extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0BDCD4u, 4);  /* 0C0BDCD2 mov.b Rm,@Rn */
	r6 += 0x30u;  /* 0C0BDCD4 add #imm,Rn */
	T = r9 == r12;  /* 0C0BDCD6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BDCE0u, 5); goto L_0C0BDCE0; } goto L_0C0BDCDC; }  /* 0C0BDCD8 bf/s */
L_0C0BDCDC: BLKS(0x0C0BDCDCu);
	{ r0 = R32(r3 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0BDE60u, 4); goto L_0C0BDE60; }  /* 0C0BDCDC bra */
L_0C0BDCE0: BLKS(0x0C0BDCE0u);
	r2 = R32(r3 + 0x28u); UPD(0x0C0BDCE2u, 1);  /* 0C0BDCE0 mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C0BDCE4u, 1);  /* 0C0BDCE2 mov.l @(disp,pc),Rn */
	T = (r2 & r4) == 0;  /* 0C0BDCE4 tst Rm,Rn */
	if (T) { UPD(0x0C0BDCECu, 4); goto L_0C0BDCEC; }  /* 0C0BDCE6 bt */
L_0C0BDCE8: BLKS(0x0C0BDCE8u);
	{ IF(0x0C0BDCEAu); ; /* slot nop */ UPD(0x0C0BDE40u, 3); goto L_0C0BDE40; }  /* 0C0BDCE8 bra */
L_0C0BDCEC: BLKS(0x0C0BDCECu);
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0BDCEEu, 1);  /* 0C0BDCEC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0BDCEE add #imm,Rn */
	W8(r6, r7); UPD(0x0C0BDCF2u, 2);  /* 0C0BDCF0 mov.b Rm,@Rn */
	r6 = r7 & 0xFF;  /* 0C0BDCF2 extu.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BDCF4 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0BDCF8u, 3);  /* 0C0BDCF6 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDCF8u); r7 = T;  /* 0C0BDCF8 movt Rn */
	IF(0x0C0BDCFAu); T = (s32)r2 >= 0;  /* 0C0BDCFA cmp/pz Rn */
	if (T) { UPD(0x0C0BDD04u, 5); goto L_0C0BDD04; }  /* 0C0BDCFC bt */
L_0C0BDCFE: BLKS(0x0C0BDCFEu);
	r2 = 0u - r2;  /* 0C0BDCFE neg Rm,Rn */
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C0BDD06u, 4); goto L_0C0BDD06; }  /* 0C0BDD00 bra */
L_0C0BDD04: BLKS(0x0C0BDD04u);
	r3 = r8;  /* 0C0BDD04 mov Rm,Rn */
	UPD(0x0C0BDD06u, 1);
L_0C0BDD06: BLKS(0x0C0BDD06u);
	r3 += r5;  /* 0C0BDD06 add Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BDD0Au, 2);  /* 0C0BDD08 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDD0Au); T = (s32)r1 >= 0;  /* 0C0BDD0A cmp/pz Rn */
	if (T) { UPD(0x0C0BDD10u, 4); goto L_0C0BDD10; }  /* 0C0BDD0C bt */
L_0C0BDD0E: BLKS(0x0C0BDD0Eu);
	r1 = 0u - r1;  /* 0C0BDD0E neg Rm,Rn */
	UPD(0x0C0BDD10u, 1);
L_0C0BDD10: BLKS(0x0C0BDD10u);
	r8 = 0xFFFFu; UPD(0x0C0BDD12u, 1);  /* 0C0BDD10 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0BDD12 add Rm,Rn */
	T = (s32)r8 >= (s32)r2;  /* 0C0BDD14 cmp/ge Rm,Rn */
	IF(0x0C0BDD16u); r5 = T;  /* 0C0BDD16 movt Rn */
	r7 |= r5;  /* 0C0BDD18 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BDD1A tst Rm,Rn */
	if (T) { UPD(0x0C0BDD2Au, 8); goto L_0C0BDD2A; }  /* 0C0BDD1C bt */
L_0C0BDD1E: BLKS(0x0C0BDD1Eu);
	r10 = R32(r3 + 0x28u); UPD(0x0C0BDD20u, 1);  /* 0C0BDD1E mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0BDD22u, 1);  /* 0C0BDD20 mov.l @Rm,Rn */
	r10 |= r4;  /* 0C0BDD22 or Rm,Rn */
	r0 |= 0x1u;  /* 0C0BDD24 or #imm,r0 */
	W32(r3 + 0x28u, r10); UPD(0x0C0BDD28u, 3);  /* 0C0BDD26 mov.l Rm,@(disp,Rn) */
	W32(r3, r0); UPD(0x0C0BDD2Au, 1);  /* 0C0BDD28 mov.l Rm,@Rn */
L_0C0BDD2A: BLKS(0x0C0BDD2Au);
	r11 = R32(r3 + 0x8u); UPD(0x0C0BDD2Cu, 1);  /* 0C0BDD2A mov.l @(disp,Rm),Rn */
	r4 = 0x13u;  /* 0C0BDD2C mov #imm,Rn */
	T = (s32)r11 > (s32)r4;  /* 0C0BDD2E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BDCA2u, 5); goto L_0C0BDCA2; }  /* 0C0BDD30 bf */
L_0C0BDD32: BLKS(0x0C0BDD32u);
	r1 = r3;  /* 0C0BDD32 mov Rm,Rn */
	r1 += 0x30u;  /* 0C0BDD34 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BDD38u, 3);  /* 0C0BDD36 mov.b @Rm,Rn */
	r2 = 0x3u;  /* 0C0BDD38 mov #imm,Rn */
	r2 &= r12;  /* 0C0BDD3A and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BDD3C tst Rm,Rn */
	if (!T) { UPD(0x0C0BDCA2u, 6); goto L_0C0BDCA2; }  /* 0C0BDD3E bf */
L_0C0BDD40: BLKS(0x0C0BDD40u);
	r1 += 0x2u;  /* 0C0BDD40 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BDD44u, 2);  /* 0C0BDD42 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0BDD44 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BDD46 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0BDD80u, 5); goto L_0C0BDD80; } goto L_0C0BDD4C; }  /* 0C0BDD48 bt/s */
L_0C0BDD4C: BLKS(0x0C0BDD4Cu);
	if (!T) { UPD(0x0C0BDCA2u, 4); goto L_0C0BDCA2; }  /* 0C0BDD4C bf */
L_0C0BDD4E: BLKS(0x0C0BDD4Eu);
	r15 += 0xFFFFFFECu;  /* 0C0BDD4E add #imm,Rn */
	W32(r15, r2); UPD(0x0C0BDD52u, 2);  /* 0C0BDD50 mov.l Rm,@Rn */
	r12 = r3;  /* 0C0BDD52 mov Rm,Rn */
	r12 += 0x33u;  /* 0C0BDD54 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0BDD58u, 3);  /* 0C0BDD56 mov.b @Rm,Rn */
	r5 = 0x0u;  /* 0C0BDD58 mov #imm,Rn */
	r10 = 0x808080u; UPD(0x0C0BDD5Cu, 2);  /* 0C0BDD5A mov.l @(disp,pc),Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C0BDD5Eu, 1);  /* 0C0BDD5C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0BDD60u, 1);  /* 0C0BDD5E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r2); UPD(0x0C0BDD62u, 1);  /* 0C0BDD60 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r2); UPD(0x0C0BDD64u, 1);  /* 0C0BDD62 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r10); UPD(0x0C0BDD66u, 1);  /* 0C0BDD64 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0BDD68u, 1);  /* 0C0BDD66 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0BDD6Au, 1);  /* 0C0BDD68 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDD6Au); { u32 t_ = r9; PR = 0x0C0BDD6Eu; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0BDD6Eu); }  /* 0C0BDD6A jsr @Rn */
L_0C0BDD6E: BLKS(0x0C0BDD6Eu);
	r15 += 0x14u;  /* 0C0BDD6E add #imm,Rn */
	UPD(0x0C0BDD70u, 1);
L_0C0BDD70: BLKS(0x0C0BDD70u);
	{ IF(0x0C0BDD72u); ; /* slot nop */ UPD(0x0C0BDCA2u, 3); goto L_0C0BDCA2; }  /* 0C0BDD70 bra */
L_0C0BDD80: BLKS(0x0C0BDD80u);
	r2 = r3;  /* 0C0BDD80 mov Rm,Rn */
	r2 += 0x33u;  /* 0C0BDD82 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BDD86u, 3);  /* 0C0BDD84 mov.b @Rm,Rn */
	r10 = R32(r3 + 0x10u); UPD(0x0C0BDD88u, 1);  /* 0C0BDD86 mov.l @(disp,Rm),Rn */
	r9 = R32(r3); UPD(0x0C0BDD8Au, 1);  /* 0C0BDD88 mov.l @Rm,Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C0BDD8Cu, 1);  /* 0C0BDD8A mov.l @(disp,Rm),Rn */
	r0 = 0xC1FFEF0u; UPD(0x0C0BDD8Eu, 1);  /* 0C0BDD8C mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BDD90u, 1);  /* 0C0BDD8E mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C0BDD90 add Rm,Rn */
	IF(0x0C0BDD92u); T = (s32)r2 >= 0;  /* 0C0BDD92 cmp/pz Rn */
	{ u32 c_ = !T; r3 = R32(r0); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0BDE30u, 5); goto L_0C0BDE30; } UPD(0x0C0BDD98u, 1); goto L_0C0BDD98; }  /* 0C0BDD94 bf/s */
L_0C0BDD98: BLKS(0x0C0BDD98u);
	r6 = 0xA00000u; UPD(0x0C0BDD9Au, 1);  /* 0C0BDD98 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0BDD9A add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0BDD9C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BDDBAu, 5); goto L_0C0BDDBA; } goto L_0C0BDDA2; }  /* 0C0BDD9E bt/s */
L_0C0BDDA2: BLKS(0x0C0BDDA2u);
	r8 = 0xC3C4048u; UPD(0x0C0BDDA4u, 2);  /* 0C0BDDA2 mov.l @(disp,pc),Rn */
	r2 = r11;  /* 0C0BDDA4 mov Rm,Rn */
	r5 = R32(r8); UPD(0x0C0BDDA8u, 2);  /* 0C0BDDA6 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0BDDAAu, 1);  /* 0C0BDDA8 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BDDAA sub Rm,Rn */
	r2 += r7;  /* 0C0BDDAC add Rm,Rn */
	IF(0x0C0BDDAEu); T = (s32)r2 >= 0;  /* 0C0BDDAE cmp/pz Rn */
	if (!T) { UPD(0x0C0BDE20u, 6); goto L_0C0BDE20; }  /* 0C0BDDB0 bf */
L_0C0BDDB2: BLKS(0x0C0BDDB2u);
	r4 = 0x780000u; UPD(0x0C0BDDB4u, 1);  /* 0C0BDDB2 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0BDDB4 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BDDB6 cmp/ge Rm,Rn */
	IF(0x0C0BDDB8u); r1 = T;  /* 0C0BDDB8 movt Rn */
	UPD(0x0C0BDDBAu, 3);
L_0C0BDDBA: BLKS(0x0C0BDDBAu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BDDBA exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BDDBC tst Rm,Rn */
	if (!T) { UPD(0x0C0BDD70u, 5); goto L_0C0BDD70; }  /* 0C0BDDBE bf */
L_0C0BDDC0: BLKS(0x0C0BDDC0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BDDC2u, 1);  /* 0C0BDDC0 mov.l @(disp,pc),Rn */
	IF(0x0C0BDDC2u); { u32 t_ = r0; PR = 0x0C0BDDC6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BDDC6u); }  /* 0C0BDDC2 jsr @Rn */
L_0C0BDDC6: BLKS(0x0C0BDDC6u);
	T = (r0 & r0) == 0;  /* 0C0BDDC6 tst Rm,Rn */
	if (T) { UPD(0x0C0BDD70u, 4); goto L_0C0BDD70; }  /* 0C0BDDC8 bt */
L_0C0BDDCA: BLKS(0x0C0BDDCAu);
	r4 = 0x38u;  /* 0C0BDDCA mov #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0BDDCEu, 2);  /* 0C0BDDCC mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BDDD0u, 1);  /* 0C0BDDCE mov.w @Rm,Rn */
	r7 = 0x10u;  /* 0C0BDDD0 mov #imm,Rn */
	IF(0x0C0BDDD2u); MACL = r3 * r4;  /* 0C0BDDD2 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BDDD6u, 4);  /* 0C0BDDD4 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0BDDD6 and Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0BDDDAu, 2);  /* 0C0BDDD8 mov.l @(disp,pc),Rn */
	IF(0x0C0BDDDAu); r0 = MACL;  /* 0C0BDDDA sts macl,Rn */
	r0 += r5;  /* 0C0BDDDC add Rm,Rn */
	r9 |= r6;  /* 0C0BDDDE or Rm,Rn */
	r2 = 0x0u;  /* 0C0BDDE0 mov #imm,Rn */
	W32(r0, r9); UPD(0x0C0BDDE4u, 5);  /* 0C0BDDE2 mov.l Rm,@Rn */
	W32(r0 + 0x10u, r10); UPD(0x0C0BDDE6u, 1);  /* 0C0BDDE4 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x14u, r11); UPD(0x0C0BDDE8u, 1);  /* 0C0BDDE6 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r2); UPD(0x0C0BDDEAu, 1);  /* 0C0BDDE8 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r8); UPD(0x0C0BDDECu, 1);  /* 0C0BDDEA mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r8); UPD(0x0C0BDDEEu, 1);  /* 0C0BDDEC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x1Cu, r8); UPD(0x0C0BDDF0u, 1);  /* 0C0BDDEE mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x18u, r8); UPD(0x0C0BDDF2u, 1);  /* 0C0BDDF0 mov.l Rm,@(disp,Rn) */
	r0 += 0x30u;  /* 0C0BDDF2 add #imm,Rn */
	W8(r0, r8); UPD(0x0C0BDDF6u, 2);  /* 0C0BDDF4 mov.b Rm,@Rn */
	r0 += 0x4u;  /* 0C0BDDF6 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0BDDFAu, 2);  /* 0C0BDDF8 mov.b Rm,@Rn */
	{ u32 v_ = r12; r0 -= 1; W8(r0, v_); } UPD(0x0C0BDDFCu, 1);  /* 0C0BDDFA mov.b Rm,@-Rn */
	r11 = 0xC0C2360u; UPD(0x0C0BDDFEu, 1);  /* 0C0BDDFC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFCDu;  /* 0C0BDDFE add #imm,Rn */
	r12 = 0x808080u; UPD(0x0C0BDE02u, 2);  /* 0C0BDE00 mov.l @(disp,pc),Rn */
	W32(r0 + 0x28u, r8); UPD(0x0C0BDE04u, 1);  /* 0C0BDE02 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BDE04u); { u32 t_ = r11; PR = 0x0C0BDE08u; W32(r0 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BDE08u); }  /* 0C0BDE04 jsr @Rn */
L_0C0BDE08: BLKS(0x0C0BDE08u);
	r10 = 0xC1FFF40u; UPD(0x0C0BDE0Au, 1);  /* 0C0BDE08 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0BDE0A and #imm,r0 */
	IF(0x0C0BDE0Cu); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0BDE0Eu, 2);  /* 0C0BDE0C mov.b @(r0,Rm),Rn */
	r3 = 0x3Fu;  /* 0C0BDE0E mov #imm,Rn */
	r4 = r9 & 0xFF;  /* 0C0BDE10 extu.b Rm,Rn */
	T = r4 > r3;  /* 0C0BDE12 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0BDD70u, 6); goto L_0C0BDD70; }  /* 0C0BDE14 bf */
L_0C0BDE16: BLKS(0x0C0BDE16u);
	r8 = 0xC0C2110u; UPD(0x0C0BDE18u, 1);  /* 0C0BDE16 mov.l @(disp,pc),Rn */
	IF(0x0C0BDE18u); { u32 t_ = r8; PR = 0x0C0BDE1Cu; IF(0x0C0BDE1Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BDE1Cu); }  /* 0C0BDE18 jsr @Rn */
L_0C0BDE1C: BLKS(0x0C0BDE1Cu);
	{ IF(0x0C0BDE1Eu); ; /* slot nop */ UPD(0x0C0BDCA2u, 3); goto L_0C0BDCA2; }  /* 0C0BDE1C bra */
L_0C0BDE20: BLKS(0x0C0BDE20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BDDB2u, 3); goto L_0C0BDDB2; }  /* 0C0BDE20 bra */
L_0C0BDE30: BLKS(0x0C0BDE30u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BDD98u, 3); goto L_0C0BDD98; }  /* 0C0BDE30 bra */
L_0C0BDE40: BLKS(0x0C0BDE40u);
	r6 = 0xFFFFFAFBu; UPD(0x0C0BDE42u, 1);  /* 0C0BDE40 mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C0BDE42 add Rm,Rn */
	r1 = r6 & 0xFFFF;  /* 0C0BDE44 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BDE46 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDE50u, 6); goto L_0C0BDE50; } UPD(0x0C0BDE4Cu, 1); goto L_0C0BDE4C; }  /* 0C0BDE48 bf/s */
L_0C0BDE4C: BLKS(0x0C0BDE4Cu);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0BDCA2u, 3); goto L_0C0BDCA2; }  /* 0C0BDE4C bra */
L_0C0BDE50: BLKS(0x0C0BDE50u);
	{ IF(0x0C0BDE52u); ; /* slot nop */ UPD(0x0C0BDCA2u, 3); goto L_0C0BDCA2; }  /* 0C0BDE50 bra */
L_0C0BDE60: BLKS(0x0C0BDE60u);
	r2 = 0x0u;  /* 0C0BDE60 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BDE62 add #imm,Rn */
	r0 &= 0x7u;  /* 0C0BDE64 and #imm,r0 */
	W8(r7, r2); UPD(0x0C0BDE68u, 4);  /* 0C0BDE66 mov.b Rm,@Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BDCE0u, 3); goto L_0C0BDCE0; }  /* 0C0BDE68 bra */
L_0C0BDE70: BLKS(0x0C0BDE70u);
	{ IF(0x0C0BDE72u); ; /* slot nop */ UPD(0x0C0BDC7Eu, 3); goto L_0C0BDC7E; }  /* 0C0BDE70 bra */
L_0C0BDE80: BLKS(0x0C0BDE80u);
	{ IF(0x0C0BDE82u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BDC40u, 3); goto L_0C0BDC40; }  /* 0C0BDE80 bra */
L_0C0BDE90: BLKS(0x0C0BDE90u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0BDC2Au, 3); goto L_0C0BDC2A; }  /* 0C0BDE90 bra */
}

void blk_f_0C0BDEF0(sh3_t *c)
{
	LOCALS;
L_0C0BDEF0: BLKS(0x0C0BDEF0u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0BDEF0 exts.w Rm,Rn */
	r2 = 0x38u;  /* 0C0BDEF2 mov #imm,Rn */
	IF(0x0C0BDEF4u); MACL = r4 * r2;  /* 0C0BDEF4 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BDEF8u, 5);  /* 0C0BDEF6 mov.l @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C0BDEF8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BDEFCu, 2);  /* 0C0BDEFA mov.l Rm,@-Rn */
	IF(0x0C0BDEFCu); r3 = MACL;  /* 0C0BDEFC sts macl,Rn */
	r3 += r0;  /* 0C0BDEFE add Rm,Rn */
	r0 = R32(r3 + 0x18u); UPD(0x0C0BDF02u, 3);  /* 0C0BDF00 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDF02u); MACL = r0 * r6;  /* 0C0BDF02 mul.l Rm,Rn */
	IF(0x0C0BDF04u); r1 = MACL;  /* 0C0BDF04 sts macl,Rn */
	IF(0x0C0BDF06u); T = (s32)r1 >= 0;  /* 0C0BDF06 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BDF10u, 7); goto L_0C0BDF10; } goto L_0C0BDF0C; }  /* 0C0BDF08 bt/s */
L_0C0BDF0C: BLKS(0x0C0BDF0Cu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BE070u, 4); goto L_0C0BE070; }  /* 0C0BDF0C bra */
L_0C0BDF10: BLKS(0x0C0BDF10u);
	r5 = R32(r3 + 0x1Cu); UPD(0x0C0BDF12u, 1);  /* 0C0BDF10 mov.l @(disp,Rm),Rn */
L_0C0BDF12: BLKS(0x0C0BDF12u);
	r0 = r1;  /* 0C0BDF12 mov Rm,Rn */
	r7 = 0xFFFFFFFCu;  /* 0C0BDF14 mov #imm,Rn */
	IF(0x0C0BDF16u); MACL = r5 * r6;  /* 0C0BDF16 mul.l Rm,Rn */
	IF(0x0C0BDF18u); ARG0(0x407Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0BDF18 shad Rm,Rn */
	IF(0x0C0BDF1Au); r1 = MACL;  /* 0C0BDF1A sts macl,Rn */
	IF(0x0C0BDF1Cu); T = (s32)r1 >= 0;  /* 0C0BDF1C cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDF26u, 10); goto L_0C0BDF26; } UPD(0x0C0BDF22u, 1); goto L_0C0BDF22; }  /* 0C0BDF1E bt/s */
L_0C0BDF22: BLKS(0x0C0BDF22u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BE060u, 3); goto L_0C0BE060; }  /* 0C0BDF22 bra */
L_0C0BDF26: BLKS(0x0C0BDF26u);
	r5 = r1;  /* 0C0BDF26 mov Rm,Rn */
	UPD(0x0C0BDF28u, 1);
L_0C0BDF28: BLKS(0x0C0BDF28u);
	IF(0x0C0BDF28u); ARG0(0x457Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0BDF28 shad Rm,Rn */
	r2 = 0xC23945Cu; UPD(0x0C0BDF2Cu, 2);  /* 0C0BDF2A mov.l @(disp,pc),Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0BDF2Eu, 1);  /* 0C0BDF2C mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0BDF30u, 1);  /* 0C0BDF2E mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0BDF32u, 1);  /* 0C0BDF30 mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0BDF32 sub Rm,Rn */
	IF(0x0C0BDF34u); MACL = r1 * r6;  /* 0C0BDF34 mul.l Rm,Rn */
	IF(0x0C0BDF36u); r1 = MACL;  /* 0C0BDF36 sts macl,Rn */
	IF(0x0C0BDF38u); T = (s32)r1 >= 0;  /* 0C0BDF38 cmp/pz Rn */
	if (T) { UPD(0x0C0BDF42u, 8); goto L_0C0BDF42; }  /* 0C0BDF3A bt */
L_0C0BDF3C: BLKS(0x0C0BDF3Cu);
	r1 += 0xFu;  /* 0C0BDF3C add #imm,Rn */
	{ IF(0x0C0BDF40u); ARG0(0x417Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BDF44u, 4); goto L_0C0BDF44; }  /* 0C0BDF3E bra */
L_0C0BDF42: BLKS(0x0C0BDF42u);
	IF(0x0C0BDF42u); ARG0(0x417Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BDF42 shad Rm,Rn */
	UPD(0x0C0BDF44u, 1);
L_0C0BDF44: BLKS(0x0C0BDF44u);
	r1 += r2;  /* 0C0BDF44 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0BDF48u, 2);  /* 0C0BDF46 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BDF4Au, 1);  /* 0C0BDF48 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0BDF4A add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BDF4Eu, 2);  /* 0C0BDF4C mov.l @(disp,pc),Rn */
	r2 -= r1;  /* 0C0BDF4E sub Rm,Rn */
	r6 += r5;  /* 0C0BDF50 add Rm,Rn */
	r7 += r2;  /* 0C0BDF52 add Rm,Rn */
	W32(r3 + 0x24u, r1); UPD(0x0C0BDF56u, 4);  /* 0C0BDF54 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BDF56u); T = (s32)r7 >= 0;  /* 0C0BDF56 cmp/pz Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0BDF5Au, 2);  /* 0C0BDF58 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE050u, 3); goto L_0C0BE050; } UPD(0x0C0BDF5Eu, 1); goto L_0C0BDF5E; }  /* 0C0BDF5A bf/s */
L_0C0BDF5E: BLKS(0x0C0BDF5Eu);
	r0 = 0xA80000u; UPD(0x0C0BDF60u, 1);  /* 0C0BDF5E mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0BDF60 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BDF7Eu, 4); goto L_0C0BDF7E; } goto L_0C0BDF66; }  /* 0C0BDF62 bt/s */
L_0C0BDF66: BLKS(0x0C0BDF66u);
	r5 = 0xC3C4048u; UPD(0x0C0BDF68u, 2);  /* 0C0BDF66 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BDF68 mov Rm,Rn */
	r7 = R32(r5); UPD(0x0C0BDF6Cu, 2);  /* 0C0BDF6A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BDF6Eu, 1);  /* 0C0BDF6C mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BDF6E sub Rm,Rn */
	r2 += r6;  /* 0C0BDF70 add Rm,Rn */
	IF(0x0C0BDF72u); T = (s32)r2 >= 0;  /* 0C0BDF72 cmp/pz Rn */
	if (!T) { UPD(0x0C0BE040u, 6); goto L_0C0BE040; }  /* 0C0BDF74 bf */
L_0C0BDF76: BLKS(0x0C0BDF76u);
	r0 = 0x800000u; UPD(0x0C0BDF78u, 1);  /* 0C0BDF76 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BDF78 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BDF90u, 4); goto L_0C0BDF90; } UPD(0x0C0BDF7Eu, 1); goto L_0C0BDF7E; }  /* 0C0BDF7A bf/s */
L_0C0BDF7E: BLKS(0x0C0BDF7Eu);
	W32(r3, r1); UPD(0x0C0BDF80u, 1);  /* 0C0BDF7E mov.l Rm,@Rn */
L_0C0BDF80: BLKS(0x0C0BDF80u);
	r15 = r14;  /* 0C0BDF80 mov Rm,Rn */
	IF(0x0C0BDF82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BDF82 rts */
L_0C0BDF90: BLKS(0x0C0BDF90u);
	r7 = r3;  /* 0C0BDF90 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0BDF92 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BDF96u, 3);  /* 0C0BDF94 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0BDF96 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BDF9Au, 2);  /* 0C0BDF98 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BDF9A add #imm,Rn */
	r5 = r1 & 0xFF;  /* 0C0BDF9C extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0BDF9E extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0BDFA2u, 4);  /* 0C0BDFA0 mov.b Rm,@Rn */
	T = r5 == r6;  /* 0C0BDFA2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BE020u, 4); goto L_0C0BE020; } UPD(0x0C0BDFA8u, 1); goto L_0C0BDFA8; }  /* 0C0BDFA4 bt/s */
L_0C0BDFA8: BLKS(0x0C0BDFA8u);
	r3 = 0x38u;  /* 0C0BDFA8 mov #imm,Rn */
	IF(0x0C0BDFAAu); MACL = r4 * r3;  /* 0C0BDFAA mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0BDFAEu, 4);  /* 0C0BDFAC mov.l @(disp,pc),Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BDFB0u, 1);  /* 0C0BDFAE mov.l @(disp,pc),Rn */
	IF(0x0C0BDFB0u); r3 = MACL;  /* 0C0BDFB0 sts macl,Rn */
	r3 += r4;  /* 0C0BDFB2 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0BDFB6u, 3);  /* 0C0BDFB4 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0BDFB6 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BE010u, 4); goto L_0C0BE010; } goto L_0C0BDFBC; }  /* 0C0BDFB8 bf/s */
L_0C0BDFBC: BLKS(0x0C0BDFBCu);
	r1 += 0x30u;  /* 0C0BDFBC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BDFC0u, 3);  /* 0C0BDFBE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0BDFC0 add #imm,Rn */
	r6 = r0 & 0xFF;  /* 0C0BDFC2 extu.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BDFC4 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0BDFC8u, 4);  /* 0C0BDFC6 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDFC8u); r6 = T;  /* 0C0BDFC8 movt Rn */
	IF(0x0C0BDFCAu); T = (s32)r2 >= 0;  /* 0C0BDFCA cmp/pz Rn */
	{ u32 c_ = !T; W8(r1, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE000u, 5); goto L_0C0BE000; } UPD(0x0C0BDFD0u, 1); goto L_0C0BDFD0; }  /* 0C0BDFCC bf/s */
L_0C0BDFD0: BLKS(0x0C0BDFD0u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BDFD2u, 1);  /* 0C0BDFD0 mov.l @(disp,Rm),Rn */
	IF(0x0C0BDFD2u); T = (s32)r1 >= 0;  /* 0C0BDFD2 cmp/pz Rn */
	if (!T) { UPD(0x0C0BDFF0u, 4); goto L_0C0BDFF0; }  /* 0C0BDFD4 bf */
L_0C0BDFD6: BLKS(0x0C0BDFD6u);
	r4 = 0xFFFFu; UPD(0x0C0BDFD8u, 1);  /* 0C0BDFD6 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0BDFD8 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0BDFDA cmp/ge Rm,Rn */
	IF(0x0C0BDFDCu); r2 = T;  /* 0C0BDFDC movt Rn */
	r6 |= r2;  /* 0C0BDFDE or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BDFE0 tst Rm,Rn */
	if (T) { UPD(0x0C0BDF80u, 8); goto L_0C0BDF80; }  /* 0C0BDFE2 bt */
L_0C0BDFE4: BLKS(0x0C0BDFE4u);
	r7 |= r5;  /* 0C0BDFE4 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BDF80u, 4); goto L_0C0BDF80; }  /* 0C0BDFE6 bra */
L_0C0BDFF0: BLKS(0x0C0BDFF0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0BDFD6u, 3); goto L_0C0BDFD6; }  /* 0C0BDFF0 bra */
L_0C0BE000: BLKS(0x0C0BE000u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BDFD0u, 3); goto L_0C0BDFD0; }  /* 0C0BE000 bra */
L_0C0BE010: BLKS(0x0C0BE010u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0BE012u, 1);  /* 0C0BE010 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0BE012 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0BE014 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BE016 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDF7Eu, 6); goto L_0C0BDF7E; } UPD(0x0C0BE01Cu, 1); goto L_0C0BE01C; }  /* 0C0BE018 bt/s */
L_0C0BE01C: BLKS(0x0C0BE01Cu);
	{ IF(0x0C0BE01Eu); ; /* slot nop */ UPD(0x0C0BDF80u, 3); goto L_0C0BDF80; }  /* 0C0BE01C bra */
L_0C0BE020: BLKS(0x0C0BE020u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BE022u, 1);  /* 0C0BE020 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0BE022 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BE024 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0BE028u, 3);  /* 0C0BE026 mov.b Rm,@Rn */
	T = r0 == 0xCu;  /* 0C0BE028 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BDFA8u, 4); goto L_0C0BDFA8; } UPD(0x0C0BE02Eu, 1); goto L_0C0BE02E; }  /* 0C0BE02A bf/s */
L_0C0BE02E: BLKS(0x0C0BE02Eu);
	r7 = 0x0u;  /* 0C0BE02E mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BDFA8u, 4); goto L_0C0BDFA8; }  /* 0C0BE030 bra */
L_0C0BE040: BLKS(0x0C0BE040u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BDF76u, 3); goto L_0C0BDF76; }  /* 0C0BE040 bra */
L_0C0BE050: BLKS(0x0C0BE050u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BDF5Eu, 3); goto L_0C0BDF5E; }  /* 0C0BE050 bra */
L_0C0BE060: BLKS(0x0C0BE060u);
	{ r5 = r1; /* slot mov Rm,Rn */ UPD(0x0C0BDF28u, 3); goto L_0C0BDF28; }  /* 0C0BE060 bra */
L_0C0BE070: BLKS(0x0C0BE070u);
	{ r5 = R32(r3 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0BDF12u, 3); goto L_0C0BDF12; }  /* 0C0BE070 bra */
}

void blk_f_0C0BE0A0(sh3_t *c)
{
	LOCALS;
L_0C0BE0A0: BLKS(0x0C0BE0A0u);
	r0 = 0x38u;  /* 0C0BE0A0 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BE0A2 exts.w Rm,Rn */
	IF(0x0C0BE0A4u); MACL = r4 * r0;  /* 0C0BE0A4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE0A8u, 5);  /* 0C0BE0A6 mov.l Rm,@-Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE0AAu, 1);  /* 0C0BE0A8 mov.l @(disp,pc),Rn */
	IF(0x0C0BE0AAu); r3 = MACL;  /* 0C0BE0AA sts macl,Rn */
	r3 += r0;  /* 0C0BE0AC add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0BE0B0u, 3);  /* 0C0BE0AE mov.l @(disp,Rm),Rn */
	IF(0x0C0BE0B0u); T = (s32)r1 >= 0;  /* 0C0BE0B0 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BE0BAu, 4); goto L_0C0BE0BA; } goto L_0C0BE0B6; }  /* 0C0BE0B2 bt/s */
L_0C0BE0B6: BLKS(0x0C0BE0B6u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BE220u, 4); goto L_0C0BE220; }  /* 0C0BE0B6 bra */
L_0C0BE0BA: BLKS(0x0C0BE0BAu);
	r6 = 0xFFFFFFFCu;  /* 0C0BE0BA mov #imm,Rn */
	UPD(0x0C0BE0BCu, 1);
L_0C0BE0BC: BLKS(0x0C0BE0BCu);
	IF(0x0C0BE0BCu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BE0BC shad Rm,Rn */
	r7 = 0xFu;  /* 0C0BE0BE mov #imm,Rn */
	IF(0x0C0BE0C0u); MACL = r1 * r7;  /* 0C0BE0C0 mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BE0C4u, 5);  /* 0C0BE0C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BE0C4u); r0 = MACL;  /* 0C0BE0C4 sts macl,Rn */
	IF(0x0C0BE0C6u); T = (s32)r1 >= 0;  /* 0C0BE0C6 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE0D0u, 5); goto L_0C0BE0D0; } UPD(0x0C0BE0CCu, 1); goto L_0C0BE0CC; }  /* 0C0BE0C8 bt/s */
L_0C0BE0CC: BLKS(0x0C0BE0CCu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BE210u, 3); goto L_0C0BE210; }  /* 0C0BE0CC bra */
L_0C0BE0D0: BLKS(0x0C0BE0D0u);
	IF(0x0C0BE0D0u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BE0D0 shad Rm,Rn */
	UPD(0x0C0BE0D2u, 1);
L_0C0BE0D2: BLKS(0x0C0BE0D2u);
	IF(0x0C0BE0D2u); MACL = r1 * r7;  /* 0C0BE0D2 mul.l Rm,Rn */
	r2 = 0xC23945Cu; UPD(0x0C0BE0D6u, 3);  /* 0C0BE0D4 mov.l @(disp,pc),Rn */
	IF(0x0C0BE0D6u); r5 = MACL;  /* 0C0BE0D6 sts macl,Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0BE0DAu, 2);  /* 0C0BE0D8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0BE0DCu, 1);  /* 0C0BE0DA mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0BE0DEu, 1);  /* 0C0BE0DC mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0BE0DE sub Rm,Rn */
	IF(0x0C0BE0E0u); T = (s32)r1 >= 0;  /* 0C0BE0E0 cmp/pz Rn */
	if (T) { UPD(0x0C0BE0EAu, 5); goto L_0C0BE0EA; }  /* 0C0BE0E2 bt */
L_0C0BE0E4: BLKS(0x0C0BE0E4u);
	r1 += 0xFu;  /* 0C0BE0E4 add #imm,Rn */
	{ IF(0x0C0BE0E8u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BE0ECu, 4); goto L_0C0BE0EC; }  /* 0C0BE0E6 bra */
L_0C0BE0EA: BLKS(0x0C0BE0EAu);
	IF(0x0C0BE0EAu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BE0EA shad Rm,Rn */
	UPD(0x0C0BE0ECu, 1);
L_0C0BE0EC: BLKS(0x0C0BE0ECu);
	IF(0x0C0BE0ECu); MACL = r1 * r7;  /* 0C0BE0EC mul.l Rm,Rn */
	IF(0x0C0BE0EEu); r6 = MACL;  /* 0C0BE0EE sts macl,Rn */
	r6 += r2;  /* 0C0BE0F0 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0BE0F4u, 5);  /* 0C0BE0F2 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0BE0F6u, 1);  /* 0C0BE0F4 mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C0BE0F6 add Rm,Rn */
	r2 -= r6;  /* 0C0BE0F8 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BE0FCu, 3);  /* 0C0BE0FA mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0BE0FEu, 1);  /* 0C0BE0FC mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0BE0FE add Rm,Rn */
	r7 += r2;  /* 0C0BE100 add Rm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0BE104u, 3);  /* 0C0BE102 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE104u); T = (s32)r7 >= 0;  /* 0C0BE104 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE200u, 4); goto L_0C0BE200; } UPD(0x0C0BE10Au, 1); goto L_0C0BE10A; }  /* 0C0BE106 bf/s */
L_0C0BE10A: BLKS(0x0C0BE10Au);
	r5 = 0xA80000u; UPD(0x0C0BE10Cu, 1);  /* 0C0BE10A mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0BE10C cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE12Au, 4); goto L_0C0BE12A; } goto L_0C0BE112; }  /* 0C0BE10E bt/s */
L_0C0BE112: BLKS(0x0C0BE112u);
	r2 = 0xC3C4048u; UPD(0x0C0BE114u, 2);  /* 0C0BE112 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BE116u, 1);  /* 0C0BE114 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0BE118u, 1);  /* 0C0BE116 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BE118 mov Rm,Rn */
	r2 -= r0;  /* 0C0BE11A sub Rm,Rn */
	r2 += r7;  /* 0C0BE11C add Rm,Rn */
	IF(0x0C0BE11Eu); T = (s32)r2 >= 0;  /* 0C0BE11E cmp/pz Rn */
	if (!T) { UPD(0x0C0BE1F0u, 7); goto L_0C0BE1F0; }  /* 0C0BE120 bf */
L_0C0BE122: BLKS(0x0C0BE122u);
	r6 = 0x800000u; UPD(0x0C0BE124u, 1);  /* 0C0BE122 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BE124 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE140u, 4); goto L_0C0BE140; } UPD(0x0C0BE12Au, 1); goto L_0C0BE12A; }  /* 0C0BE126 bf/s */
L_0C0BE12A: BLKS(0x0C0BE12Au);
	W32(r3, r1); UPD(0x0C0BE12Cu, 1);  /* 0C0BE12A mov.l Rm,@Rn */
L_0C0BE12C: BLKS(0x0C0BE12Cu);
	r15 = r14;  /* 0C0BE12C mov Rm,Rn */
	IF(0x0C0BE12Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BE12E rts */
L_0C0BE140: BLKS(0x0C0BE140u);
	r7 = r3;  /* 0C0BE140 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0BE142 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BE146u, 3);  /* 0C0BE144 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0BE146 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BE14Au, 2);  /* 0C0BE148 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BE14A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0BE14C extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0BE14E extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0BE152u, 4);  /* 0C0BE150 mov.b Rm,@Rn */
	T = r0 == r5;  /* 0C0BE152 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BE1D0u, 4); goto L_0C0BE1D0; } UPD(0x0C0BE158u, 1); goto L_0C0BE158; }  /* 0C0BE154 bt/s */
L_0C0BE158: BLKS(0x0C0BE158u);
	r3 = 0x38u;  /* 0C0BE158 mov #imm,Rn */
	IF(0x0C0BE15Au); MACL = r4 * r3;  /* 0C0BE15A mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0BE15Eu, 4);  /* 0C0BE15C mov.l @(disp,pc),Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BE160u, 1);  /* 0C0BE15E mov.l @(disp,pc),Rn */
	IF(0x0C0BE160u); r3 = MACL;  /* 0C0BE160 sts macl,Rn */
	r3 += r4;  /* 0C0BE162 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0BE166u, 3);  /* 0C0BE164 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0BE166 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BE1C0u, 4); goto L_0C0BE1C0; } goto L_0C0BE16C; }  /* 0C0BE168 bf/s */
L_0C0BE16C: BLKS(0x0C0BE16Cu);
	r1 += 0x30u;  /* 0C0BE16C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BE170u, 3);  /* 0C0BE16E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0BE170 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0BE172 extu.b Rm,Rn */
	W8(r1, r6); UPD(0x0C0BE176u, 3);  /* 0C0BE174 mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BE176 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0BE17Au, 2);  /* 0C0BE178 mov.l @(disp,Rm),Rn */
	IF(0x0C0BE17Au); r6 = T;  /* 0C0BE17A movt Rn */
	IF(0x0C0BE17Cu); T = (s32)r2 >= 0;  /* 0C0BE17C cmp/pz Rn */
	if (!T) { UPD(0x0C0BE1B0u, 5); goto L_0C0BE1B0; }  /* 0C0BE17E bf */
L_0C0BE180: BLKS(0x0C0BE180u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BE182u, 1);  /* 0C0BE180 mov.l @(disp,Rm),Rn */
	IF(0x0C0BE182u); T = (s32)r1 >= 0;  /* 0C0BE182 cmp/pz Rn */
	if (!T) { UPD(0x0C0BE1A0u, 4); goto L_0C0BE1A0; }  /* 0C0BE184 bf */
L_0C0BE186: BLKS(0x0C0BE186u);
	r4 = 0xFFFFu; UPD(0x0C0BE188u, 1);  /* 0C0BE186 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0BE188 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0BE18A cmp/ge Rm,Rn */
	IF(0x0C0BE18Cu); r2 = T;  /* 0C0BE18C movt Rn */
	r6 |= r2;  /* 0C0BE18E or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BE190 tst Rm,Rn */
	if (T) { UPD(0x0C0BE12Cu, 8); goto L_0C0BE12C; }  /* 0C0BE192 bt */
L_0C0BE194: BLKS(0x0C0BE194u);
	r7 |= r5;  /* 0C0BE194 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BE12Cu, 4); goto L_0C0BE12C; }  /* 0C0BE196 bra */
L_0C0BE1A0: BLKS(0x0C0BE1A0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0BE186u, 3); goto L_0C0BE186; }  /* 0C0BE1A0 bra */
L_0C0BE1B0: BLKS(0x0C0BE1B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE180u, 3); goto L_0C0BE180; }  /* 0C0BE1B0 bra */
L_0C0BE1C0: BLKS(0x0C0BE1C0u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0BE1C2u, 1);  /* 0C0BE1C0 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0BE1C2 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0BE1C4 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BE1C6 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE12Au, 6); goto L_0C0BE12A; } UPD(0x0C0BE1CCu, 1); goto L_0C0BE1CC; }  /* 0C0BE1C8 bt/s */
L_0C0BE1CC: BLKS(0x0C0BE1CCu);
	{ IF(0x0C0BE1CEu); ; /* slot nop */ UPD(0x0C0BE12Cu, 3); goto L_0C0BE12C; }  /* 0C0BE1CC bra */
L_0C0BE1D0: BLKS(0x0C0BE1D0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BE1D2u, 1);  /* 0C0BE1D0 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0BE1D2 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BE1D4 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0BE1D8u, 3);  /* 0C0BE1D6 mov.b Rm,@Rn */
	T = r0 == 0x8u;  /* 0C0BE1D8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE158u, 4); goto L_0C0BE158; } UPD(0x0C0BE1DEu, 1); goto L_0C0BE1DE; }  /* 0C0BE1DA bf/s */
L_0C0BE1DE: BLKS(0x0C0BE1DEu);
	r7 = 0x0u;  /* 0C0BE1DE mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BE158u, 4); goto L_0C0BE158; }  /* 0C0BE1E0 bra */
L_0C0BE1F0: BLKS(0x0C0BE1F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE122u, 3); goto L_0C0BE122; }  /* 0C0BE1F0 bra */
L_0C0BE200: BLKS(0x0C0BE200u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BE10Au, 3); goto L_0C0BE10A; }  /* 0C0BE200 bra */
L_0C0BE210: BLKS(0x0C0BE210u);
	{ IF(0x0C0BE212u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BE0D2u, 3); goto L_0C0BE0D2; }  /* 0C0BE210 bra */
L_0C0BE220: BLKS(0x0C0BE220u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0BE0BCu, 3); goto L_0C0BE0BC; }  /* 0C0BE220 bra */
}

void blk_f_0C0BE250(sh3_t *c)
{
	LOCALS;
L_0C0BE250: BLKS(0x0C0BE250u);
	r0 = 0x38u;  /* 0C0BE250 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BE252 exts.w Rm,Rn */
	IF(0x0C0BE254u); MACL = r4 * r0;  /* 0C0BE254 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE258u, 5);  /* 0C0BE256 mov.l Rm,@-Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE25Au, 1);  /* 0C0BE258 mov.l @(disp,pc),Rn */
	IF(0x0C0BE25Au); r2 = MACL;  /* 0C0BE25A sts macl,Rn */
	r2 += r0;  /* 0C0BE25C add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C0BE260u, 3);  /* 0C0BE25E mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C0BE260 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0BE262 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BE2F2u, 5); goto L_0C0BE2F2; } goto L_0C0BE268; }  /* 0C0BE264 bt/s */
L_0C0BE268: BLKS(0x0C0BE268u);
	r5 = 0x1u;  /* 0C0BE268 mov #imm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0BE26A cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0BE2D0u, 6); goto L_0C0BE2D0; } goto L_0C0BE270; }  /* 0C0BE26C bt/s */
L_0C0BE270: BLKS(0x0C0BE270u);
	T = (r3 & r3) == 0;  /* 0C0BE270 tst Rm,Rn */
	if (T) { UPD(0x0C0BE280u, 5); goto L_0C0BE280; }  /* 0C0BE272 bt */
L_0C0BE274: BLKS(0x0C0BE274u);
	r15 = r14;  /* 0C0BE274 mov Rm,Rn */
	IF(0x0C0BE276u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BE276 rts */
L_0C0BE280: BLKS(0x0C0BE280u);
	r7 = R32(r2 + 0x28u); UPD(0x0C0BE282u, 1);  /* 0C0BE280 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0BE282 tst Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BE290u, 4); goto L_0C0BE290; } goto L_0C0BE288; }  /* 0C0BE284 bt/s */
L_0C0BE288: BLKS(0x0C0BE288u);
	r4 = 0xFFFFF1F2u; UPD(0x0C0BE28Au, 2);  /* 0C0BE288 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C0BE28A add Rm,Rn */
	W32(r2 + 0x28u, r7); UPD(0x0C0BE28Eu, 2);  /* 0C0BE28C mov.l Rm,@(disp,Rn) */
	r1 = r2;  /* 0C0BE28E mov Rm,Rn */
	UPD(0x0C0BE290u, 1);
L_0C0BE290: BLKS(0x0C0BE290u);
	r1 += 0x30u;  /* 0C0BE290 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BE294u, 2);  /* 0C0BE292 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0BE294 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0BE296 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BE298 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE274u, 6); goto L_0C0BE274; } UPD(0x0C0BE29Eu, 1); goto L_0C0BE29E; }  /* 0C0BE29A bf/s */
L_0C0BE29E: BLKS(0x0C0BE29Eu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0BE2A0u, 1);  /* 0C0BE29E mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0BE2A0 add #imm,Rn */
	W8(r1, r3); UPD(0x0C0BE2A4u, 2);  /* 0C0BE2A2 mov.b Rm,@Rn */
	T = r0 == 0xAu;  /* 0C0BE2A4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BE2C0u, 4); goto L_0C0BE2C0; } UPD(0x0C0BE2AAu, 1); goto L_0C0BE2AA; }  /* 0C0BE2A6 bt/s */
L_0C0BE2AA: BLKS(0x0C0BE2AAu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0BE2ACu, 1);  /* 0C0BE2AA mov.l @(disp,Rm),Rn */
L_0C0BE2AC: BLKS(0x0C0BE2ACu);
	T = r0 == 0x10u;  /* 0C0BE2AC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0BE274u, 4); goto L_0C0BE274; }  /* 0C0BE2AE bf */
L_0C0BE2B0: BLKS(0x0C0BE2B0u);
	W32(r2, r3); UPD(0x0C0BE2B2u, 1);  /* 0C0BE2B0 mov.l Rm,@Rn */
	{ IF(0x0C0BE2B4u); ; /* slot nop */ UPD(0x0C0BE274u, 3); goto L_0C0BE274; }  /* 0C0BE2B2 bra */
L_0C0BE2C0: BLKS(0x0C0BE2C0u);
	r5 = 0x204FFFFu; UPD(0x0C0BE2C2u, 1);  /* 0C0BE2C0 mov.l @(disp,pc),Rn */
	{ W32(r2 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BE2AAu, 3); goto L_0C0BE2AA; }  /* 0C0BE2C2 bra */
L_0C0BE2D0: BLKS(0x0C0BE2D0u);
	if (!T) { UPD(0x0C0BE274u, 3); goto L_0C0BE274; }  /* 0C0BE2D0 bf */
L_0C0BE2D2: BLKS(0x0C0BE2D2u);
	r3 = R32(r2 + 0x18u); UPD(0x0C0BE2D4u, 1);  /* 0C0BE2D2 mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C0BE2D6u, 1);  /* 0C0BE2D4 mov.w @(disp,pc),Rn */
	IF(0x0C0BE2D6u); MACL = r3 * r6;  /* 0C0BE2D6 mul.l Rm,Rn */
	IF(0x0C0BE2D8u); r3 = MACL;  /* 0C0BE2D8 sts macl,Rn */
	IF(0x0C0BE2DAu); T = (s32)r3 >= 0;  /* 0C0BE2DA cmp/pz Rn */
	if (!T) { UPD(0x0C0BE3C0u, 7); goto L_0C0BE3C0; }  /* 0C0BE2DC bf */
L_0C0BE2DE: BLKS(0x0C0BE2DEu);
	r7 = 0xFFFFFFF8u;  /* 0C0BE2DE mov #imm,Rn */
	r0 = R32(r2 + 0x1Cu); UPD(0x0C0BE2E2u, 2);  /* 0C0BE2E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0BE2E2u); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0BE2E2 shad Rm,Rn */
	IF(0x0C0BE2E4u); MACL = r0 * r6;  /* 0C0BE2E4 mul.l Rm,Rn */
	W32(r2 + 0x18u, r3); UPD(0x0C0BE2E8u, 4);  /* 0C0BE2E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE2E8u); r3 = MACL;  /* 0C0BE2E8 sts macl,Rn */
	IF(0x0C0BE2EAu); T = (s32)r3 >= 0;  /* 0C0BE2EA cmp/pz Rn */
	if (!T) { UPD(0x0C0BE3B0u, 5); goto L_0C0BE3B0; }  /* 0C0BE2EC bf */
L_0C0BE2EE: BLKS(0x0C0BE2EEu);
	IF(0x0C0BE2EEu); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0BE2EE shad Rm,Rn */
	W32(r2 + 0x1Cu, r3); UPD(0x0C0BE2F2u, 2);  /* 0C0BE2F0 mov.l Rm,@(disp,Rn) */
L_0C0BE2F2: BLKS(0x0C0BE2F2u);
	r6 = 0x38u;  /* 0C0BE2F2 mov #imm,Rn */
	IF(0x0C0BE2F4u); MACL = r4 * r6;  /* 0C0BE2F4 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE2F8u, 4);  /* 0C0BE2F6 mov.l @(disp,pc),Rn */
	IF(0x0C0BE2F8u); r3 = MACL;  /* 0C0BE2F8 sts macl,Rn */
	r3 += r0;  /* 0C0BE2FA add Rm,Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0BE2FEu, 3);  /* 0C0BE2FC mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x18u); UPD(0x0C0BE300u, 1);  /* 0C0BE2FE mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C0BE300 add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0BE304u, 2);  /* 0C0BE302 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BE306u, 1);  /* 0C0BE304 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0BE308u, 1);  /* 0C0BE306 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0BE308 add Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BE30Cu, 2);  /* 0C0BE30A mov.l @(disp,pc),Rn */
	IF(0x0C0BE30Cu); r0 <<= 2;  /* 0C0BE30C shll2 Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0BE310u, 2);  /* 0C0BE30E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r7); UPD(0x0C0BE312u, 1);  /* 0C0BE310 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE312u); r6 = R32(r0 + r2); UPD(0x0C0BE314u, 1);  /* 0C0BE312 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BE316u, 1);  /* 0C0BE314 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BE316 add Rm,Rn */
	IF(0x0C0BE318u); T = (s32)r2 >= 0;  /* 0C0BE318 cmp/pz Rn */
	if (!T) { UPD(0x0C0BE3A0u, 5); goto L_0C0BE3A0; }  /* 0C0BE31A bf */
L_0C0BE31C: BLKS(0x0C0BE31Cu);
	r5 = 0xA00000u; UPD(0x0C0BE31Eu, 1);  /* 0C0BE31C mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0BE31E add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BE320 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE33Eu, 5); goto L_0C0BE33E; } goto L_0C0BE326; }  /* 0C0BE322 bt/s */
L_0C0BE326: BLKS(0x0C0BE326u);
	r2 = 0xC3C4048u; UPD(0x0C0BE328u, 2);  /* 0C0BE326 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BE32Au, 1);  /* 0C0BE328 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BE32Cu, 1);  /* 0C0BE32A mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0BE32C mov Rm,Rn */
	r2 -= r0;  /* 0C0BE32E sub Rm,Rn */
	r2 += r3;  /* 0C0BE330 add Rm,Rn */
	IF(0x0C0BE332u); T = (s32)r2 >= 0;  /* 0C0BE332 cmp/pz Rn */
	if (!T) { UPD(0x0C0BE390u, 7); goto L_0C0BE390; }  /* 0C0BE334 bf */
L_0C0BE336: BLKS(0x0C0BE336u);
	r7 = 0x780000u; UPD(0x0C0BE338u, 1);  /* 0C0BE336 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0BE338 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0BE33A cmp/ge Rm,Rn */
	IF(0x0C0BE33Cu); r1 = T;  /* 0C0BE33C movt Rn */
	UPD(0x0C0BE33Eu, 3);
L_0C0BE33E: BLKS(0x0C0BE33Eu);
	r3 = (u32)(s32)(s16)r1;  /* 0C0BE33E exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BE340 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE360u, 5); goto L_0C0BE360; } goto L_0C0BE346; }  /* 0C0BE342 bt/s */
L_0C0BE346: BLKS(0x0C0BE346u);
	IF(0x0C0BE346u); MACL = r4 * r5;  /* 0C0BE346 mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C0BE348 mov #imm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BE34Cu, 5);  /* 0C0BE34A mov.l @(disp,pc),Rn */
	IF(0x0C0BE34Cu); r0 = MACL;  /* 0C0BE34C sts macl,Rn */
	IF(0x0C0BE34Eu); W32(r0 + r4, r6); UPD(0x0C0BE350u, 2);  /* 0C0BE34E mov.l Rm,@(r0,Rn) */
L_0C0BE350: BLKS(0x0C0BE350u);
	{ IF(0x0C0BE352u); ; /* slot nop */ UPD(0x0C0BE274u, 3); goto L_0C0BE274; }  /* 0C0BE350 bra */
L_0C0BE360: BLKS(0x0C0BE360u);
	r2 = 0x38u;  /* 0C0BE360 mov #imm,Rn */
	IF(0x0C0BE362u); MACL = r4 * r2;  /* 0C0BE362 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE366u, 4);  /* 0C0BE364 mov.l @(disp,pc),Rn */
	IF(0x0C0BE366u); r2 = MACL;  /* 0C0BE366 sts macl,Rn */
	r2 += r0;  /* 0C0BE368 add Rm,Rn */
	r1 = r2;  /* 0C0BE36A mov Rm,Rn */
	r1 += 0x30u;  /* 0C0BE36C add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BE370u, 5);  /* 0C0BE36E mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0BE370 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0BE372 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BE374 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE350u, 6); goto L_0C0BE350; } UPD(0x0C0BE37Au, 1); goto L_0C0BE37A; }  /* 0C0BE376 bf/s */
L_0C0BE37A: BLKS(0x0C0BE37Au);
	r0 = R32(r2 + 0xCu); UPD(0x0C0BE37Cu, 1);  /* 0C0BE37A mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0BE37C add #imm,Rn */
	W8(r1, r3); UPD(0x0C0BE380u, 2);  /* 0C0BE37E mov.b Rm,@Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BE2ACu, 3); goto L_0C0BE2AC; }  /* 0C0BE380 bra */
L_0C0BE390: BLKS(0x0C0BE390u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE336u, 3); goto L_0C0BE336; }  /* 0C0BE390 bra */
L_0C0BE3A0: BLKS(0x0C0BE3A0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE31Cu, 3); goto L_0C0BE31C; }  /* 0C0BE3A0 bra */
L_0C0BE3B0: BLKS(0x0C0BE3B0u);
	r6 = 0xFFu; UPD(0x0C0BE3B2u, 1);  /* 0C0BE3B0 mov.w @(disp,pc),Rn */
	{ r3 += r6; /* slot add Rm,Rn */ UPD(0x0C0BE2EEu, 3); goto L_0C0BE2EE; }  /* 0C0BE3B2 bra */
L_0C0BE3C0: BLKS(0x0C0BE3C0u);
	r7 = 0xFFu; UPD(0x0C0BE3C2u, 1);  /* 0C0BE3C0 mov.w @(disp,pc),Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C0BE2DEu, 3); goto L_0C0BE2DE; }  /* 0C0BE3C2 bra */
}

void blk_f_0C0BE680(sh3_t *c)
{
	LOCALS;
L_0C0BE680: BLKS(0x0C0BE680u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE682u, 1);  /* 0C0BE680 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE684u, 1);  /* 0C0BE682 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE686u, 1);  /* 0C0BE684 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE688u, 1);  /* 0C0BE686 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE68Au, 1);  /* 0C0BE688 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE68Cu, 1);  /* 0C0BE68A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE68Eu, 1);  /* 0C0BE68C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0BE68E exts.w Rm,Rn */
	IF(0x0C0BE690u); r15 -= 4; W32(r15, PR); UPD(0x0C0BE692u, 2);  /* 0C0BE690 sts.l pr,@-Rn */
	r8 = 0xC0C2360u; UPD(0x0C0BE694u, 1);  /* 0C0BE692 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BE694 add #imm,Rn */
	IF(0x0C0BE696u); { u32 t_ = r8; PR = 0x0C0BE69Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE69Au); }  /* 0C0BE696 jsr @Rn */
L_0C0BE69A: BLKS(0x0C0BE69Au);
	r6 = 0x38u;  /* 0C0BE69A mov #imm,Rn */
	IF(0x0C0BE69Cu); MACL = r13 * r6;  /* 0C0BE69C mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BE6A0u, 4);  /* 0C0BE69E mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0BE6A0 exts.w Rm,Rn */
	IF(0x0C0BE6A2u); r8 = MACL;  /* 0C0BE6A2 sts macl,Rn */
	r8 += r5;  /* 0C0BE6A4 add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0BE6A8u, 4);  /* 0C0BE6A6 mov.l @(disp,Rm),Rn */
	r4 = 0x7u;  /* 0C0BE6A8 mov #imm,Rn */
	r11 = 0xC062780u; UPD(0x0C0BE6ACu, 2);  /* 0C0BE6AA mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C0BE6AC and Rm,Rn */
	r2 = 0xC1FFFA8u; UPD(0x0C0BE6B0u, 2);  /* 0C0BE6AE mov.l @(disp,pc),Rn */
	IF(0x0C0BE6B0u); r0 <<= 2;  /* 0C0BE6B0 shll2 Rn */
	IF(0x0C0BE6B2u); { u32 t_ = r11; PR = 0x0C0BE6B6u; IF(0x0C0BE6B4u); r4 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BE6B6u); }  /* 0C0BE6B2 jsr @Rn */
L_0C0BE6B6: BLKS(0x0C0BE6B6u);
	r3 = 0xFu;  /* 0C0BE6B6 mov #imm,Rn */
	r9 = r0;  /* 0C0BE6B8 mov Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C0BE6BCu, 3);  /* 0C0BE6BA mov.l @(disp,pc),Rn */
	IF(0x0C0BE6BCu); ARG0(0x493Du); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0BE6BC shld Rm,Rn */
	r4 = r10;  /* 0C0BE6BE mov Rm,Rn */
	IF(0x0C0BE6C0u); { u32 t_ = r12; PR = 0x0C0BE6C4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BE6C4u); }  /* 0C0BE6C0 jsr @Rn */
L_0C0BE6C4: BLKS(0x0C0BE6C4u);
	r5 = r9;  /* 0C0BE6C4 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BE6C8u, 2);  /* 0C0BE6C6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BE6C8 mov Rm,Rn */
	r12 = R32(r8 + 0x10u); UPD(0x0C0BE6CCu, 2);  /* 0C0BE6CA mov.l @(disp,Rm),Rn */
	IF(0x0C0BE6CCu); { u32 t_ = r9; PR = 0x0C0BE6D0u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BE6D0u); }  /* 0C0BE6CC jsr @Rn */
L_0C0BE6D0: BLKS(0x0C0BE6D0u);
	r10 = R32(r8 + 0x14u); UPD(0x0C0BE6D2u, 1);  /* 0C0BE6D0 mov.l @(disp,Rm),Rn */
	r9 = 0x8u;  /* 0C0BE6D2 mov #imm,Rn */
	r10 += r0;  /* 0C0BE6D4 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0BE6D8u, 3);  /* 0C0BE6D6 mov.l @Rm,Rn */
	W32(r14, r0); UPD(0x0C0BE6DAu, 1);  /* 0C0BE6D8 mov.l Rm,@Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0BE6DCu, 1);  /* 0C0BE6DA mov.l @(disp,Rm),Rn */
	r9 &= r0;  /* 0C0BE6DC and Rm,Rn */
	r0 &= 0x7u;  /* 0C0BE6DE and #imm,r0 */
	r0 += 0x1u;  /* 0C0BE6E0 add #imm,Rn */
	IF(0x0C0BE6E2u); { u32 t_ = r11; PR = 0x0C0BE6E6u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BE6E6u); }  /* 0C0BE6E2 jsr @Rn */
L_0C0BE6E6: BLKS(0x0C0BE6E6u);
	r9 |= r0;  /* 0C0BE6E6 or Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BE6EAu, 2);  /* 0C0BE6E8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0BE6EA mov Rm,Rn */
	r8 += 0x34u;  /* 0C0BE6EC add #imm,Rn */
	IF(0x0C0BE6EEu); r0 <<= 2;  /* 0C0BE6EE shll2 Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0BE6F2u, 4);  /* 0C0BE6F0 mov.b @Rm,Rn */
	IF(0x0C0BE6F2u); r3 = R32(r0 + r2); UPD(0x0C0BE6F4u, 1);  /* 0C0BE6F2 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0BE6F4 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0BE6F8u, 2);  /* 0C0BE6F6 mov.l Rm,@(disp,Rn) */
	r2 = 0xFF600000u; UPD(0x0C0BE6FAu, 1);  /* 0C0BE6F8 mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C0BE6FA add Rm,Rn */
	IF(0x0C0BE6FCu); T = (s32)r2 >= 0;  /* 0C0BE6FC cmp/pz Rn */
	{ u32 c_ = T; r11 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ if (c_) { UPD(0x0C0BE706u, 5); goto L_0C0BE706; } UPD(0x0C0BE702u, 1); goto L_0C0BE702; }  /* 0C0BE6FE bt/s */
L_0C0BE702: BLKS(0x0C0BE702u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE810u, 3); goto L_0C0BE810; }  /* 0C0BE702 bra */
L_0C0BE706: BLKS(0x0C0BE706u);
	r0 = 0xA00000u; UPD(0x0C0BE708u, 1);  /* 0C0BE706 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C0BE708 add Rm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0BE70A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE728u, 5); goto L_0C0BE728; } goto L_0C0BE710; }  /* 0C0BE70C bt/s */
L_0C0BE710: BLKS(0x0C0BE710u);
	r2 = 0xC3C4048u; UPD(0x0C0BE712u, 2);  /* 0C0BE710 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0BE714u, 1);  /* 0C0BE712 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BE716u, 1);  /* 0C0BE714 mov.l @(disp,pc),Rn */
	r2 = r10;  /* 0C0BE716 mov Rm,Rn */
	r2 -= r5;  /* 0C0BE718 sub Rm,Rn */
	r2 += r4;  /* 0C0BE71A add Rm,Rn */
	IF(0x0C0BE71Cu); T = (s32)r2 >= 0;  /* 0C0BE71C cmp/pz Rn */
	if (!T) { UPD(0x0C0BE800u, 7); goto L_0C0BE800; }  /* 0C0BE71E bf */
L_0C0BE720: BLKS(0x0C0BE720u);
	r6 = 0x780000u; UPD(0x0C0BE722u, 1);  /* 0C0BE720 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0BE722 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BE724 cmp/ge Rm,Rn */
	IF(0x0C0BE726u); r1 = T;  /* 0C0BE726 movt Rn */
	UPD(0x0C0BE728u, 3);
L_0C0BE728: BLKS(0x0C0BE728u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BE728 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BE72A tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE780u, 5); goto L_0C0BE780; } UPD(0x0C0BE730u, 1); goto L_0C0BE730; }  /* 0C0BE72C bt/s */
L_0C0BE730: BLKS(0x0C0BE730u);
	r2 = (u32)(s32)(s16)r1;  /* 0C0BE730 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BE732 tst Rm,Rn */
	{ u32 c_ = !T; r10 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE760u, 5); goto L_0C0BE760; } goto L_0C0BE738; }  /* 0C0BE734 bf/s */
L_0C0BE738: BLKS(0x0C0BE738u);
	IF(0x0C0BE738u); MACL = r13 * r10;  /* 0C0BE738 mul.l Rm,Rn */
	r13 = 0xC28F65Cu; UPD(0x0C0BE73Cu, 4);  /* 0C0BE73A mov.l @(disp,pc),Rn */
	IF(0x0C0BE73Cu); r0 = MACL;  /* 0C0BE73C sts macl,Rn */
	IF(0x0C0BE73Eu); W32(r0 + r13, r2); UPD(0x0C0BE740u, 2);  /* 0C0BE73E mov.l Rm,@(r0,Rn) */
L_0C0BE740: BLKS(0x0C0BE740u);
	r14 += 0x8u;  /* 0C0BE740 add #imm,Rn */
	r15 = r14;  /* 0C0BE742 mov Rm,Rn */
	IF(0x0C0BE744u); PR = R32(r15); r15 += 4; UPD(0x0C0BE746u, 3);  /* 0C0BE744 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BE748u, 1);  /* 0C0BE746 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BE74Au, 1);  /* 0C0BE748 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BE74Cu, 1);  /* 0C0BE74A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BE74Eu, 1);  /* 0C0BE74C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BE750u, 1);  /* 0C0BE74E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BE752u, 1);  /* 0C0BE750 mov.l @Rm+,Rn */
	IF(0x0C0BE752u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BE752 rts */
L_0C0BE760: BLKS(0x0C0BE760u);
	r3 = 0x38u;  /* 0C0BE760 mov #imm,Rn */
	IF(0x0C0BE762u); MACL = r13 * r3;  /* 0C0BE762 mul.l Rm,Rn */
	r8 = 0xC28F65Cu; UPD(0x0C0BE766u, 4);  /* 0C0BE764 mov.l @(disp,pc),Rn */
	IF(0x0C0BE766u); r3 = MACL;  /* 0C0BE766 sts macl,Rn */
	r3 += r8;  /* 0C0BE768 add Rm,Rn */
	r12 = r3;  /* 0C0BE76A mov Rm,Rn */
	r12 += 0x30u;  /* 0C0BE76C add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0BE770u, 5);  /* 0C0BE76E mov.b @Rm,Rn */
	r11 += 0xFFFFFFFFu;  /* 0C0BE770 add #imm,Rn */
	r1 = r11 & 0xFF;  /* 0C0BE772 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BE774 tst Rm,Rn */
	{ u32 c_ = !T; W8(r12, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BE740u, 6); goto L_0C0BE740; } UPD(0x0C0BE77Au, 1); goto L_0C0BE77A; }  /* 0C0BE776 bf/s */
L_0C0BE77A: BLKS(0x0C0BE77Au);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0BE740u, 3); goto L_0C0BE740; }  /* 0C0BE77A bra */
L_0C0BE780: BLKS(0x0C0BE780u);
	r0 = 0xC0BCA00u; UPD(0x0C0BE782u, 1);  /* 0C0BE780 mov.l @(disp,pc),Rn */
	IF(0x0C0BE782u); { u32 t_ = r0; PR = 0x0C0BE786u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BE786u); }  /* 0C0BE782 jsr @Rn */
L_0C0BE786: BLKS(0x0C0BE786u);
	T = (r0 & r0) == 0;  /* 0C0BE786 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE730u, 4); goto L_0C0BE730; } goto L_0C0BE78C; }  /* 0C0BE788 bt/s */
L_0C0BE78C: BLKS(0x0C0BE78Cu);
	r2 = 0xC28EDFCu; UPD(0x0C0BE78Eu, 2);  /* 0C0BE78C mov.l @(disp,pc),Rn */
	r5 = 0x38u;  /* 0C0BE78E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BE792u, 2);  /* 0C0BE790 mov.w @Rm,Rn */
	IF(0x0C0BE792u); MACL = r6 * r5;  /* 0C0BE792 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BE796u, 3);  /* 0C0BE794 mov.l @(disp,pc),Rn */
	IF(0x0C0BE796u); r3 = MACL;  /* 0C0BE796 sts macl,Rn */
	r3 += r0;  /* 0C0BE798 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0BE79Cu, 3);  /* 0C0BE79A mov.l @Rm,Rn */
	r4 = 0xC0000000u; UPD(0x0C0BE79Eu, 1);  /* 0C0BE79C mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0BE79E and #imm,r0 */
	r0 |= r4;  /* 0C0BE7A0 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0BE7A4u, 3);  /* 0C0BE7A2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0BE7A6u, 1);  /* 0C0BE7A4 mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0BE7A6 mov #imm,Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0BE7AAu, 2);  /* 0C0BE7A8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BE7AA add Rm,Rn */
	W32(r3 + 0x8u, r8); UPD(0x0C0BE7AEu, 2);  /* 0C0BE7AC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r12); UPD(0x0C0BE7B0u, 1);  /* 0C0BE7AE mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r10); UPD(0x0C0BE7B2u, 1);  /* 0C0BE7B0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0BE7B4u, 1);  /* 0C0BE7B2 mov.l Rm,@(disp,Rn) */
	r10 = 0x3Fu;  /* 0C0BE7B4 mov #imm,Rn */
	W32(r3 + 0x18u, r8); UPD(0x0C0BE7B8u, 2);  /* 0C0BE7B6 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BE7B8 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BE7BCu, 2);  /* 0C0BE7BA mov.b Rm,@Rn */
	IF(0x0C0BE7BCu); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BE7BEu, 1);  /* 0C0BE7BC mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BE7BE add #imm,Rn */
	W8(r3, r7); UPD(0x0C0BE7C2u, 2);  /* 0C0BE7C0 mov.b Rm,@Rn */
	{ u32 v_ = r11; r3 -= 1; W8(r3, v_); } UPD(0x0C0BE7C4u, 1);  /* 0C0BE7C2 mov.b Rm,@-Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BE7C4 add #imm,Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0BE7C8u, 2);  /* 0C0BE7C6 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C2360u; UPD(0x0C0BE7CAu, 1);  /* 0C0BE7C8 mov.l @(disp,pc),Rn */
	r1 = 0x808080u; UPD(0x0C0BE7CCu, 1);  /* 0C0BE7CA mov.l @(disp,pc),Rn */
	r12 = 0xC1FFF40u; UPD(0x0C0BE7CEu, 1);  /* 0C0BE7CC mov.l @(disp,pc),Rn */
	IF(0x0C0BE7CEu); { u32 t_ = r8; PR = 0x0C0BE7D2u; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE7D2u); }  /* 0C0BE7CE jsr @Rn */
L_0C0BE7D2: BLKS(0x0C0BE7D2u);
	r0 &= 0x1u;  /* 0C0BE7D2 and #imm,r0 */
	r9 += r12;  /* 0C0BE7D4 add Rm,Rn */
	IF(0x0C0BE7D6u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0BE7D8u, 3);  /* 0C0BE7D6 mov.b @(r0,Rm),Rn */
	r4 = r11 & 0xFF;  /* 0C0BE7D8 extu.b Rm,Rn */
	T = r4 > r10;  /* 0C0BE7DA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BE7F0u, 5); goto L_0C0BE7F0; }  /* 0C0BE7DC bt */
L_0C0BE7DE: BLKS(0x0C0BE7DEu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BE730u, 3); goto L_0C0BE730; }  /* 0C0BE7DE bra */
L_0C0BE7F0: BLKS(0x0C0BE7F0u);
	r9 = 0xC0C2110u; UPD(0x0C0BE7F2u, 1);  /* 0C0BE7F0 mov.l @(disp,pc),Rn */
	IF(0x0C0BE7F2u); { u32 t_ = r9; PR = 0x0C0BE7F6u; IF(0x0C0BE7F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BE7F6u); }  /* 0C0BE7F2 jsr @Rn */
L_0C0BE7F6: BLKS(0x0C0BE7F6u);
	{ IF(0x0C0BE7F8u); ; /* slot nop */ UPD(0x0C0BE7DEu, 3); goto L_0C0BE7DE; }  /* 0C0BE7F6 bra */
L_0C0BE800: BLKS(0x0C0BE800u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE720u, 3); goto L_0C0BE720; }  /* 0C0BE800 bra */
L_0C0BE810: BLKS(0x0C0BE810u);
	{ IF(0x0C0BE812u); ; /* slot nop */ UPD(0x0C0BE706u, 3); goto L_0C0BE706; }  /* 0C0BE810 bra */
}

/* FUN_0c0be860 */
void blk_f_0C0BE860(sh3_t *c)
{
	LOCALS;
L_0C0BE860: BLKS(0x0C0BE860u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE862u, 1);  /* 0C0BE860 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE864u, 1);  /* 0C0BE862 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE866u, 1);  /* 0C0BE864 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BE866 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE86Au, 2);  /* 0C0BE868 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0BE86A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE86Eu, 2);  /* 0C0BE86C mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0BE86E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE872u, 2);  /* 0C0BE870 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0BE872 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE876u, 2);  /* 0C0BE874 mov.l Rm,@-Rn */
	IF(0x0C0BE876u); r12 <<= 2;  /* 0C0BE876 shll2 Rn */
	IF(0x0C0BE878u); r15 -= 4; W32(r15, PR); UPD(0x0C0BE87Au, 2);  /* 0C0BE878 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BE87A add #imm,Rn */
	r14 = r15;  /* 0C0BE87C mov Rm,Rn */
	r3 = R32(r14 + 0x28u); UPD(0x0C0BE880u, 3);  /* 0C0BE87E mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)r3;  /* 0C0BE880 exts.b Rm,Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0BE884u, 2);  /* 0C0BE882 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0BE886u, 1);  /* 0C0BE884 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s8)r0;  /* 0C0BE886 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BE88Au, 2);  /* 0C0BE888 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BE88A mov Rm,Rn */
	IF(0x0C0BE88Cu); r3 = R32(r0 + r2); UPD(0x0C0BE88Eu, 2);  /* 0C0BE88C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BE890u, 1);  /* 0C0BE88E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BE890 add Rm,Rn */
	IF(0x0C0BE892u); T = (s32)r2 >= 0;  /* 0C0BE892 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BE89Cu, 5); goto L_0C0BE89C; } UPD(0x0C0BE898u, 1); goto L_0C0BE898; }  /* 0C0BE894 bt/s */
L_0C0BE898: BLKS(0x0C0BE898u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE9A0u, 3); goto L_0C0BE9A0; }  /* 0C0BE898 bra */
L_0C0BE89C: BLKS(0x0C0BE89Cu);
	r4 = 0xA00000u; UPD(0x0C0BE89Eu, 1);  /* 0C0BE89C mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0BE89E add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0BE8A0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE8BEu, 5); goto L_0C0BE8BE; } goto L_0C0BE8A6; }  /* 0C0BE8A2 bt/s */
L_0C0BE8A6: BLKS(0x0C0BE8A6u);
	r7 = 0xC3C4048u; UPD(0x0C0BE8A8u, 2);  /* 0C0BE8A6 mov.l @(disp,pc),Rn */
	r2 = r11;  /* 0C0BE8A8 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0BE8ACu, 2);  /* 0C0BE8AA mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BE8AEu, 1);  /* 0C0BE8AC mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BE8AE sub Rm,Rn */
	r2 += r5;  /* 0C0BE8B0 add Rm,Rn */
	IF(0x0C0BE8B2u); T = (s32)r2 >= 0;  /* 0C0BE8B2 cmp/pz Rn */
	if (!T) { UPD(0x0C0BE990u, 6); goto L_0C0BE990; }  /* 0C0BE8B4 bf */
L_0C0BE8B6: BLKS(0x0C0BE8B6u);
	r8 = 0x780000u; UPD(0x0C0BE8B8u, 1);  /* 0C0BE8B6 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0BE8B8 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BE8BA cmp/ge Rm,Rn */
	IF(0x0C0BE8BCu); r1 = T;  /* 0C0BE8BC movt Rn */
	UPD(0x0C0BE8BEu, 3);
L_0C0BE8BE: BLKS(0x0C0BE8BEu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BE8BE exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BE8C0 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE8E0u, 5); goto L_0C0BE8E0; } UPD(0x0C0BE8C6u, 1); goto L_0C0BE8C6; }  /* 0C0BE8C2 bt/s */
L_0C0BE8C6: BLKS(0x0C0BE8C6u);
	r14 += 0x8u;  /* 0C0BE8C6 add #imm,Rn */
	r15 = r14;  /* 0C0BE8C8 mov Rm,Rn */
	IF(0x0C0BE8CAu); PR = R32(r15); r15 += 4; UPD(0x0C0BE8CCu, 3);  /* 0C0BE8CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BE8CEu, 1);  /* 0C0BE8CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BE8D0u, 1);  /* 0C0BE8CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BE8D2u, 1);  /* 0C0BE8D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BE8D4u, 1);  /* 0C0BE8D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BE8D6u, 1);  /* 0C0BE8D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BE8D8u, 1);  /* 0C0BE8D6 mov.l @Rm+,Rn */
	IF(0x0C0BE8D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BE8D8 rts */
L_0C0BE8E0: BLKS(0x0C0BE8E0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BE8E2u, 1);  /* 0C0BE8E0 mov.l @(disp,pc),Rn */
	IF(0x0C0BE8E2u); { u32 t_ = r0; PR = 0x0C0BE8E6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BE8E6u); }  /* 0C0BE8E2 jsr @Rn */
L_0C0BE8E6: BLKS(0x0C0BE8E6u);
	T = (r0 & r0) == 0;  /* 0C0BE8E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BE8C6u, 4); goto L_0C0BE8C6; } goto L_0C0BE8EC; }  /* 0C0BE8E8 bt/s */
L_0C0BE8EC: BLKS(0x0C0BE8ECu);
	r0 = 0xC28EDFCu; UPD(0x0C0BE8EEu, 2);  /* 0C0BE8EC mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0BE8EE mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BE8F2u, 2);  /* 0C0BE8F0 mov.w @Rm,Rn */
	r4 = 0x1u;  /* 0C0BE8F2 mov #imm,Rn */
	IF(0x0C0BE8F4u); MACL = r7 * r3;  /* 0C0BE8F4 mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C0BE8F8u, 4);  /* 0C0BE8F6 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BE8F8 add #imm,Rn */
	r6 = 0xC28F65Cu; UPD(0x0C0BE8FCu, 2);  /* 0C0BE8FA mov.l @(disp,pc),Rn */
	IF(0x0C0BE8FCu); r3 = MACL;  /* 0C0BE8FC sts macl,Rn */
	r5 = 0xC0000000u; UPD(0x0C0BE900u, 2);  /* 0C0BE8FE mov.l @(disp,pc),Rn */
	r0 &= 0x10u;  /* 0C0BE900 and #imm,r0 */
	r3 += r6;  /* 0C0BE902 add Rm,Rn */
	r0 |= r5;  /* 0C0BE904 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0BE908u, 4);  /* 0C0BE906 mov.l Rm,@Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C0BE90Au, 1);  /* 0C0BE908 mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x34u); UPD(0x0C0BE90Cu, 1);  /* 0C0BE90A mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0BE90Eu, 1);  /* 0C0BE90C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r4); UPD(0x0C0BE910u, 1);  /* 0C0BE90E mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BE910 add Rm,Rn */
	W32(r3 + 0x10u, r10); UPD(0x0C0BE914u, 2);  /* 0C0BE912 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r11); UPD(0x0C0BE916u, 1);  /* 0C0BE914 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r2); UPD(0x0C0BE918u, 1);  /* 0C0BE916 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r0); UPD(0x0C0BE91Au, 1);  /* 0C0BE918 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0BE91Cu, 1);  /* 0C0BE91A mov.l Rm,@(disp,Rn) */
	r0 = 0x7u;  /* 0C0BE91C mov #imm,Rn */
	r3 += 0x30u;  /* 0C0BE91E add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BE922u, 3);  /* 0C0BE920 mov.b Rm,@Rn */
	IF(0x0C0BE922u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BE924u, 1);  /* 0C0BE922 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BE924 add #imm,Rn */
	W8(r3, r7); UPD(0x0C0BE928u, 2);  /* 0C0BE926 mov.b Rm,@Rn */
	r0 = r12;  /* 0C0BE928 mov Rm,Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0BE92Cu, 2);  /* 0C0BE92A mov.b Rm,@-Rn */
	r6 = 0xC1FFFC8u; UPD(0x0C0BE92Eu, 1);  /* 0C0BE92C mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BE92E add #imm,Rn */
	IF(0x0C0BE930u); r5 = R32(r0 + r6); UPD(0x0C0BE932u, 2);  /* 0C0BE930 mov.l @(r0,Rm),Rn */
	r4 = 0x808080u; UPD(0x0C0BE934u, 1);  /* 0C0BE932 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0BE934 mov Rm,Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0BE938u, 2);  /* 0C0BE936 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x2Cu, r4); UPD(0x0C0BE93Au, 1);  /* 0C0BE938 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C0BE93A mov Rm,Rn */
	r12 = 0xC1FFECCu; UPD(0x0C0BE93Eu, 2);  /* 0C0BE93C mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C0BE940u, 1);  /* 0C0BE93E mov.l Rm,@Rn */
	r12 += r9;  /* 0C0BE940 add Rm,Rn */
	r0 = 0xC0BD060u; UPD(0x0C0BE944u, 2);  /* 0C0BE942 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C0BE946u, 1);  /* 0C0BE944 mov.w @Rm,Rn */
	r4 = R32(r14); UPD(0x0C0BE948u, 1);  /* 0C0BE946 mov.l @Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0BE94Au, 1);  /* 0C0BE948 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BE94Au); { u32 t_ = r0; PR = 0x0C0BE94Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD060, 0x0C0BD060u, 0x0C0BE94Eu); }  /* 0C0BE94A jsr @Rn */
L_0C0BE94E: BLKS(0x0C0BE94Eu);
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C0BE950u, 1);  /* 0C0BE94E mov.w @Rm,Rn */
	r6 = r13;  /* 0C0BE950 mov Rm,Rn */
	r13 = 0xC0BD490u; UPD(0x0C0BE954u, 2);  /* 0C0BE952 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0BE954 add Rm,Rn */
	r12 = 0xC0C2360u; UPD(0x0C0BE958u, 2);  /* 0C0BE956 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BE958 mov Rm,Rn */
	r4 = r10;  /* 0C0BE95A mov Rm,Rn */
	r15 += 0x8u;  /* 0C0BE95C add #imm,Rn */
	r11 = 0xC1FFF40u; UPD(0x0C0BE960u, 4);  /* 0C0BE95E mov.l @(disp,pc),Rn */
	IF(0x0C0BE960u); { u32 t_ = r13; PR = 0x0C0BE964u; r7 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C0BE964u); }  /* 0C0BE960 jsr @Rn */
L_0C0BE964: BLKS(0x0C0BE964u);
	IF(0x0C0BE964u); { u32 t_ = r12; PR = 0x0C0BE968u; r11 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BE968u); }  /* 0C0BE964 jsr @Rn */
L_0C0BE968: BLKS(0x0C0BE968u);
	r0 &= 0x1u;  /* 0C0BE968 and #imm,r0 */
	IF(0x0C0BE96Au); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0BE96Cu, 2);  /* 0C0BE96A mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0BE96C mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0BE96E extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0BE970 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BE980u, 6); goto L_0C0BE980; }  /* 0C0BE972 bt */
L_0C0BE974: BLKS(0x0C0BE974u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BE8C6u, 3); goto L_0C0BE8C6; }  /* 0C0BE974 bra */
L_0C0BE980: BLKS(0x0C0BE980u);
	r8 = 0xC0C2110u; UPD(0x0C0BE982u, 1);  /* 0C0BE980 mov.l @(disp,pc),Rn */
	IF(0x0C0BE982u); { u32 t_ = r8; PR = 0x0C0BE986u; IF(0x0C0BE984u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BE986u); }  /* 0C0BE982 jsr @Rn */
L_0C0BE986: BLKS(0x0C0BE986u);
	{ IF(0x0C0BE988u); ; /* slot nop */ UPD(0x0C0BE974u, 3); goto L_0C0BE974; }  /* 0C0BE986 bra */
L_0C0BE990: BLKS(0x0C0BE990u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BE8B6u, 3); goto L_0C0BE8B6; }  /* 0C0BE990 bra */
L_0C0BE9A0: BLKS(0x0C0BE9A0u);
	{ IF(0x0C0BE9A2u); ; /* slot nop */ UPD(0x0C0BE89Cu, 3); goto L_0C0BE89C; }  /* 0C0BE9A0 bra */
}

/* FUN_0c0be9f0 */
void blk_f_0C0BE9F0(sh3_t *c)
{
	LOCALS;
L_0C0BE9F0: BLKS(0x0C0BE9F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE9F2u, 1);  /* 0C0BE9F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE9F4u, 1);  /* 0C0BE9F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE9F6u, 1);  /* 0C0BE9F4 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BE9F6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE9FAu, 2);  /* 0C0BE9F8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0BE9FA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BE9FEu, 2);  /* 0C0BE9FC mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0BE9FE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEA02u, 2);  /* 0C0BEA00 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0BEA02 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEA06u, 2);  /* 0C0BEA04 mov.l Rm,@-Rn */
	IF(0x0C0BEA06u); r12 <<= 2;  /* 0C0BEA06 shll2 Rn */
	IF(0x0C0BEA08u); r15 -= 4; W32(r15, PR); UPD(0x0C0BEA0Au, 2);  /* 0C0BEA08 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BEA0A add #imm,Rn */
	r14 = r15;  /* 0C0BEA0C mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0BEA10u, 3);  /* 0C0BEA0E mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0BEA12u, 1);  /* 0C0BEA10 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BEA12 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BEA14 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BEA18u, 3);  /* 0C0BEA16 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1FFEF0u; UPD(0x0C0BEA1Au, 1);  /* 0C0BEA18 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BEA1A mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BEA1Eu, 2);  /* 0C0BEA1C mov.l Rm,@Rn */
	IF(0x0C0BEA1Eu); r3 = R32(r0 + r2); UPD(0x0C0BEA20u, 1);  /* 0C0BEA1E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BEA22u, 1);  /* 0C0BEA20 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BEA22 add Rm,Rn */
	IF(0x0C0BEA24u); T = (s32)r2 >= 0;  /* 0C0BEA24 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BEB10u, 5); goto L_0C0BEB10; } UPD(0x0C0BEA2Au, 1); goto L_0C0BEA2A; }  /* 0C0BEA26 bf/s */
L_0C0BEA2A: BLKS(0x0C0BEA2Au);
	r5 = 0xA00000u; UPD(0x0C0BEA2Cu, 1);  /* 0C0BEA2A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BEA2C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BEA2E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEA4Cu, 5); goto L_0C0BEA4C; } goto L_0C0BEA34; }  /* 0C0BEA30 bt/s */
L_0C0BEA34: BLKS(0x0C0BEA34u);
	r8 = 0xC3C4048u; UPD(0x0C0BEA36u, 2);  /* 0C0BEA34 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BEA36 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0BEA3Au, 2);  /* 0C0BEA38 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BEA3Cu, 1);  /* 0C0BEA3A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BEA3C sub Rm,Rn */
	r2 += r6;  /* 0C0BEA3E add Rm,Rn */
	IF(0x0C0BEA40u); T = (s32)r2 >= 0;  /* 0C0BEA40 cmp/pz Rn */
	if (!T) { UPD(0x0C0BEB00u, 6); goto L_0C0BEB00; }  /* 0C0BEA42 bf */
L_0C0BEA44: BLKS(0x0C0BEA44u);
	r0 = 0x780000u; UPD(0x0C0BEA46u, 1);  /* 0C0BEA44 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0BEA46 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BEA48 cmp/ge Rm,Rn */
	IF(0x0C0BEA4Au); r1 = T;  /* 0C0BEA4A movt Rn */
	UPD(0x0C0BEA4Cu, 3);
L_0C0BEA4C: BLKS(0x0C0BEA4Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BEA4C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BEA4E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEA70u, 5); goto L_0C0BEA70; } UPD(0x0C0BEA54u, 1); goto L_0C0BEA54; }  /* 0C0BEA50 bt/s */
L_0C0BEA54: BLKS(0x0C0BEA54u);
	r14 += 0x8u;  /* 0C0BEA54 add #imm,Rn */
	UPD(0x0C0BEA56u, 1);
L_0C0BEA56: BLKS(0x0C0BEA56u);
	r15 = r14;  /* 0C0BEA56 mov Rm,Rn */
	IF(0x0C0BEA58u); PR = R32(r15); r15 += 4; UPD(0x0C0BEA5Au, 2);  /* 0C0BEA58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BEA5Cu, 1);  /* 0C0BEA5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BEA5Eu, 1);  /* 0C0BEA5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BEA60u, 1);  /* 0C0BEA5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BEA62u, 1);  /* 0C0BEA60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BEA64u, 1);  /* 0C0BEA62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BEA66u, 1);  /* 0C0BEA64 mov.l @Rm+,Rn */
	IF(0x0C0BEA66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BEA66 rts */
L_0C0BEA70: BLKS(0x0C0BEA70u);
	r0 = 0xC0BCA00u; UPD(0x0C0BEA72u, 1);  /* 0C0BEA70 mov.l @(disp,pc),Rn */
	IF(0x0C0BEA72u); { u32 t_ = r0; PR = 0x0C0BEA76u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BEA76u); }  /* 0C0BEA72 jsr @Rn */
L_0C0BEA76: BLKS(0x0C0BEA76u);
	T = (r0 & r0) == 0;  /* 0C0BEA76 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEA54u, 4); goto L_0C0BEA54; } goto L_0C0BEA7C; }  /* 0C0BEA78 bt/s */
L_0C0BEA7C: BLKS(0x0C0BEA7Cu);
	r7 = 0xC28EDFCu; UPD(0x0C0BEA7Eu, 2);  /* 0C0BEA7C mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0BEA7E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BEA82u, 2);  /* 0C0BEA80 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BEA82 mov #imm,Rn */
	IF(0x0C0BEA84u); MACL = r6 * r3;  /* 0C0BEA84 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BEA88u, 4);  /* 0C0BEA86 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0BEA88 and Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0BEA8Cu, 2);  /* 0C0BEA8A mov.l @(disp,pc),Rn */
	IF(0x0C0BEA8Cu); r3 = MACL;  /* 0C0BEA8C sts macl,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0BEA90u, 2);  /* 0C0BEA8E mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0BEA90 add Rm,Rn */
	r6 = R32(r14 + 0x34u); UPD(0x0C0BEA94u, 2);  /* 0C0BEA92 mov.l @(disp,Rm),Rn */
	r2 |= r10;  /* 0C0BEA94 or Rm,Rn */
	r0 = 0x1u;  /* 0C0BEA96 mov #imm,Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0BEA9Au, 3);  /* 0C0BEA98 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r0); UPD(0x0C0BEA9Cu, 1);  /* 0C0BEA9A mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BEA9C add Rm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0BEAA0u, 2);  /* 0C0BEA9E mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0BEAA0 mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0BEAA4u, 2);  /* 0C0BEAA2 mov.l Rm,@(disp,Rn) */
	W32(r3, r2); UPD(0x0C0BEAA6u, 1);  /* 0C0BEAA4 mov.l Rm,@Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0BEAA8u, 1);  /* 0C0BEAA6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r7); UPD(0x0C0BEAAAu, 1);  /* 0C0BEAA8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C0BEAACu, 1);  /* 0C0BEAAA mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BEAAC add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BEAB0u, 2);  /* 0C0BEAAE mov.b Rm,@Rn */
	IF(0x0C0BEAB0u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEAB2u, 1);  /* 0C0BEAB0 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BEAB2 add #imm,Rn */
	W8(r3, r1); UPD(0x0C0BEAB6u, 2);  /* 0C0BEAB4 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BEAB6 mov #imm,Rn */
	IF(0x0C0BEAB8u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEABAu, 2);  /* 0C0BEAB8 mov.b @(r0,Rm),Rn */
	r4 = 0xC200010u; UPD(0x0C0BEABCu, 1);  /* 0C0BEABA mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BEABC mov Rm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C0BEAC0u, 2);  /* 0C0BEABE mov.b Rm,@-Rn */
	r12 = 0xC0C2360u; UPD(0x0C0BEAC2u, 1);  /* 0C0BEAC0 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BEAC2 add #imm,Rn */
	IF(0x0C0BEAC4u); r2 = R32(r0 + r4); UPD(0x0C0BEAC6u, 2);  /* 0C0BEAC4 mov.l @(r0,Rm),Rn */
	r13 = 0x808080u; UPD(0x0C0BEAC8u, 1);  /* 0C0BEAC6 mov.l @(disp,pc),Rn */
	r11 = 0xC1FFF40u; UPD(0x0C0BEACAu, 1);  /* 0C0BEAC8 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0BEACCu, 1);  /* 0C0BEACA mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0BEACC add Rm,Rn */
	IF(0x0C0BEACEu); { u32 t_ = r12; PR = 0x0C0BEAD2u; W32(r3 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BEAD2u); }  /* 0C0BEACE jsr @Rn */
L_0C0BEAD2: BLKS(0x0C0BEAD2u);
	r0 &= 0x1u;  /* 0C0BEAD2 and #imm,r0 */
	IF(0x0C0BEAD4u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0BEAD6u, 2);  /* 0C0BEAD4 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0BEAD6 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0BEAD8 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0BEADA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BEAF0u, 6); goto L_0C0BEAF0; }  /* 0C0BEADC bt */
L_0C0BEADE: BLKS(0x0C0BEADEu);
	r0 = 0x1u;  /* 0C0BEADE mov #imm,Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BEA56u, 4); goto L_0C0BEA56; }  /* 0C0BEAE0 bra */
L_0C0BEAF0: BLKS(0x0C0BEAF0u);
	r8 = 0xC0C2110u; UPD(0x0C0BEAF2u, 1);  /* 0C0BEAF0 mov.l @(disp,pc),Rn */
	IF(0x0C0BEAF2u); { u32 t_ = r8; PR = 0x0C0BEAF6u; IF(0x0C0BEAF4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BEAF6u); }  /* 0C0BEAF2 jsr @Rn */
L_0C0BEAF6: BLKS(0x0C0BEAF6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BEA54u, 3); goto L_0C0BEA54; }  /* 0C0BEAF6 bra */
L_0C0BEB00: BLKS(0x0C0BEB00u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEA44u, 3); goto L_0C0BEA44; }  /* 0C0BEB00 bra */
L_0C0BEB10: BLKS(0x0C0BEB10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEA2Au, 3); goto L_0C0BEA2A; }  /* 0C0BEB10 bra */
}

/* FUN_0c0beb50 */
void blk_f_0C0BEB50(sh3_t *c)
{
	LOCALS;
L_0C0BEB50: BLKS(0x0C0BEB50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB52u, 1);  /* 0C0BEB50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB54u, 1);  /* 0C0BEB52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB56u, 1);  /* 0C0BEB54 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BEB56 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB5Au, 2);  /* 0C0BEB58 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0BEB5A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB5Eu, 2);  /* 0C0BEB5C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0BEB5E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB62u, 2);  /* 0C0BEB60 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0BEB62 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEB66u, 2);  /* 0C0BEB64 mov.l Rm,@-Rn */
	IF(0x0C0BEB66u); r12 <<= 2;  /* 0C0BEB66 shll2 Rn */
	IF(0x0C0BEB68u); r15 -= 4; W32(r15, PR); UPD(0x0C0BEB6Au, 2);  /* 0C0BEB68 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BEB6A add #imm,Rn */
	r14 = r15;  /* 0C0BEB6C mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0BEB70u, 3);  /* 0C0BEB6E mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0BEB72u, 1);  /* 0C0BEB70 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BEB72 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BEB74 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BEB78u, 3);  /* 0C0BEB76 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1FFEF0u; UPD(0x0C0BEB7Au, 1);  /* 0C0BEB78 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BEB7A mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BEB7Eu, 2);  /* 0C0BEB7C mov.l Rm,@Rn */
	IF(0x0C0BEB7Eu); r3 = R32(r0 + r2); UPD(0x0C0BEB80u, 1);  /* 0C0BEB7E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BEB82u, 1);  /* 0C0BEB80 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BEB82 add Rm,Rn */
	IF(0x0C0BEB84u); T = (s32)r2 >= 0;  /* 0C0BEB84 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BEC70u, 5); goto L_0C0BEC70; } UPD(0x0C0BEB8Au, 1); goto L_0C0BEB8A; }  /* 0C0BEB86 bf/s */
L_0C0BEB8A: BLKS(0x0C0BEB8Au);
	r5 = 0xA00000u; UPD(0x0C0BEB8Cu, 1);  /* 0C0BEB8A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BEB8C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BEB8E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEBACu, 5); goto L_0C0BEBAC; } goto L_0C0BEB94; }  /* 0C0BEB90 bt/s */
L_0C0BEB94: BLKS(0x0C0BEB94u);
	r8 = 0xC3C4048u; UPD(0x0C0BEB96u, 2);  /* 0C0BEB94 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BEB96 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0BEB9Au, 2);  /* 0C0BEB98 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BEB9Cu, 1);  /* 0C0BEB9A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BEB9C sub Rm,Rn */
	r2 += r6;  /* 0C0BEB9E add Rm,Rn */
	IF(0x0C0BEBA0u); T = (s32)r2 >= 0;  /* 0C0BEBA0 cmp/pz Rn */
	if (!T) { UPD(0x0C0BEC60u, 6); goto L_0C0BEC60; }  /* 0C0BEBA2 bf */
L_0C0BEBA4: BLKS(0x0C0BEBA4u);
	r0 = 0x780000u; UPD(0x0C0BEBA6u, 1);  /* 0C0BEBA4 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0BEBA6 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BEBA8 cmp/ge Rm,Rn */
	IF(0x0C0BEBAAu); r1 = T;  /* 0C0BEBAA movt Rn */
	UPD(0x0C0BEBACu, 3);
L_0C0BEBAC: BLKS(0x0C0BEBACu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BEBAC exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BEBAE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEBD0u, 5); goto L_0C0BEBD0; } UPD(0x0C0BEBB4u, 1); goto L_0C0BEBB4; }  /* 0C0BEBB0 bt/s */
L_0C0BEBB4: BLKS(0x0C0BEBB4u);
	r14 += 0x8u;  /* 0C0BEBB4 add #imm,Rn */
	UPD(0x0C0BEBB6u, 1);
L_0C0BEBB6: BLKS(0x0C0BEBB6u);
	r15 = r14;  /* 0C0BEBB6 mov Rm,Rn */
	IF(0x0C0BEBB8u); PR = R32(r15); r15 += 4; UPD(0x0C0BEBBAu, 2);  /* 0C0BEBB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BEBBCu, 1);  /* 0C0BEBBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BEBBEu, 1);  /* 0C0BEBBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BEBC0u, 1);  /* 0C0BEBBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BEBC2u, 1);  /* 0C0BEBC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BEBC4u, 1);  /* 0C0BEBC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BEBC6u, 1);  /* 0C0BEBC4 mov.l @Rm+,Rn */
	IF(0x0C0BEBC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BEBC6 rts */
L_0C0BEBD0: BLKS(0x0C0BEBD0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BEBD2u, 1);  /* 0C0BEBD0 mov.l @(disp,pc),Rn */
	IF(0x0C0BEBD2u); { u32 t_ = r0; PR = 0x0C0BEBD6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BEBD6u); }  /* 0C0BEBD2 jsr @Rn */
L_0C0BEBD6: BLKS(0x0C0BEBD6u);
	T = (r0 & r0) == 0;  /* 0C0BEBD6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEBB4u, 4); goto L_0C0BEBB4; } goto L_0C0BEBDC; }  /* 0C0BEBD8 bt/s */
L_0C0BEBDC: BLKS(0x0C0BEBDCu);
	r7 = 0xC28EDFCu; UPD(0x0C0BEBDEu, 2);  /* 0C0BEBDC mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0BEBDE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BEBE2u, 2);  /* 0C0BEBE0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BEBE2 mov #imm,Rn */
	IF(0x0C0BEBE4u); MACL = r6 * r3;  /* 0C0BEBE4 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BEBE8u, 4);  /* 0C0BEBE6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0BEBE8 and Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0BEBECu, 2);  /* 0C0BEBEA mov.l @(disp,pc),Rn */
	IF(0x0C0BEBECu); r3 = MACL;  /* 0C0BEBEC sts macl,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0BEBF0u, 2);  /* 0C0BEBEE mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0BEBF0 add Rm,Rn */
	r6 = R32(r14 + 0x34u); UPD(0x0C0BEBF4u, 2);  /* 0C0BEBF2 mov.l @(disp,Rm),Rn */
	r2 |= r10;  /* 0C0BEBF4 or Rm,Rn */
	r0 = 0x2u;  /* 0C0BEBF6 mov #imm,Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0BEBFAu, 3);  /* 0C0BEBF8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r0); UPD(0x0C0BEBFCu, 1);  /* 0C0BEBFA mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BEBFC add Rm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0BEC00u, 2);  /* 0C0BEBFE mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0BEC00 mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0BEC04u, 2);  /* 0C0BEC02 mov.l Rm,@(disp,Rn) */
	W32(r3, r2); UPD(0x0C0BEC06u, 1);  /* 0C0BEC04 mov.l Rm,@Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0BEC08u, 1);  /* 0C0BEC06 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r7); UPD(0x0C0BEC0Au, 1);  /* 0C0BEC08 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C0BEC0Cu, 1);  /* 0C0BEC0A mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BEC0C add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BEC10u, 2);  /* 0C0BEC0E mov.b Rm,@Rn */
	IF(0x0C0BEC10u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEC12u, 1);  /* 0C0BEC10 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BEC12 add #imm,Rn */
	W8(r3, r1); UPD(0x0C0BEC16u, 2);  /* 0C0BEC14 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BEC16 mov #imm,Rn */
	IF(0x0C0BEC18u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEC1Au, 2);  /* 0C0BEC18 mov.b @(r0,Rm),Rn */
	r4 = 0xC200058u; UPD(0x0C0BEC1Cu, 1);  /* 0C0BEC1A mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BEC1C mov Rm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C0BEC20u, 2);  /* 0C0BEC1E mov.b Rm,@-Rn */
	r12 = 0xC0C2360u; UPD(0x0C0BEC22u, 1);  /* 0C0BEC20 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BEC22 add #imm,Rn */
	IF(0x0C0BEC24u); r2 = R32(r0 + r4); UPD(0x0C0BEC26u, 2);  /* 0C0BEC24 mov.l @(r0,Rm),Rn */
	r13 = 0x808080u; UPD(0x0C0BEC28u, 1);  /* 0C0BEC26 mov.l @(disp,pc),Rn */
	r11 = 0xC1FFF40u; UPD(0x0C0BEC2Au, 1);  /* 0C0BEC28 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0BEC2Cu, 1);  /* 0C0BEC2A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0BEC2C add Rm,Rn */
	IF(0x0C0BEC2Eu); { u32 t_ = r12; PR = 0x0C0BEC32u; W32(r3 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BEC32u); }  /* 0C0BEC2E jsr @Rn */
L_0C0BEC32: BLKS(0x0C0BEC32u);
	r0 &= 0x1u;  /* 0C0BEC32 and #imm,r0 */
	IF(0x0C0BEC34u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0BEC36u, 2);  /* 0C0BEC34 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0BEC36 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0BEC38 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0BEC3A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BEC50u, 6); goto L_0C0BEC50; }  /* 0C0BEC3C bt */
L_0C0BEC3E: BLKS(0x0C0BEC3Eu);
	r0 = 0x1u;  /* 0C0BEC3E mov #imm,Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BEBB6u, 4); goto L_0C0BEBB6; }  /* 0C0BEC40 bra */
L_0C0BEC50: BLKS(0x0C0BEC50u);
	r8 = 0xC0C2110u; UPD(0x0C0BEC52u, 1);  /* 0C0BEC50 mov.l @(disp,pc),Rn */
	IF(0x0C0BEC52u); { u32 t_ = r8; PR = 0x0C0BEC56u; IF(0x0C0BEC54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BEC56u); }  /* 0C0BEC52 jsr @Rn */
L_0C0BEC56: BLKS(0x0C0BEC56u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BEBB4u, 3); goto L_0C0BEBB4; }  /* 0C0BEC56 bra */
L_0C0BEC60: BLKS(0x0C0BEC60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEBA4u, 3); goto L_0C0BEBA4; }  /* 0C0BEC60 bra */
L_0C0BEC70: BLKS(0x0C0BEC70u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEB8Au, 3); goto L_0C0BEB8A; }  /* 0C0BEC70 bra */
}

/* FUN_0c0becb0 */
void blk_f_0C0BECB0(sh3_t *c)
{
	LOCALS;
L_0C0BECB0: BLKS(0x0C0BECB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECB2u, 1);  /* 0C0BECB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECB4u, 1);  /* 0C0BECB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECB6u, 1);  /* 0C0BECB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECB8u, 1);  /* 0C0BECB6 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BECB8 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECBCu, 2);  /* 0C0BECBA mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0BECBC mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECC0u, 2);  /* 0C0BECBE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BECC2u, 1);  /* 0C0BECC0 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0BECC2 mov Rm,Rn */
	IF(0x0C0BECC4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BECC6u, 2);  /* 0C0BECC4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BECC6 add #imm,Rn */
	r14 = r15;  /* 0C0BECC8 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0BECCCu, 3);  /* 0C0BECCA mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0BECCEu, 1);  /* 0C0BECCC mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BECCE exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BECD2u, 2);  /* 0C0BECD0 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BECD2 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BECD6u, 2);  /* 0C0BECD4 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BECD6 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BECDAu, 2);  /* 0C0BECD8 mov.l Rm,@Rn */
	IF(0x0C0BECDAu); r0 <<= 2;  /* 0C0BECDA shll2 Rn */
	IF(0x0C0BECDCu); r3 = R32(r0 + r2); UPD(0x0C0BECDEu, 2);  /* 0C0BECDC mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BECE0u, 1);  /* 0C0BECDE mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BECE0 add Rm,Rn */
	IF(0x0C0BECE2u); T = (s32)r2 >= 0;  /* 0C0BECE2 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BEDD0u, 5); goto L_0C0BEDD0; } UPD(0x0C0BECE8u, 1); goto L_0C0BECE8; }  /* 0C0BECE4 bf/s */
L_0C0BECE8: BLKS(0x0C0BECE8u);
	r5 = 0xA00000u; UPD(0x0C0BECEAu, 1);  /* 0C0BECE8 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BECEA add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BECEC cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BED0Au, 5); goto L_0C0BED0A; } goto L_0C0BECF2; }  /* 0C0BECEE bt/s */
L_0C0BECF2: BLKS(0x0C0BECF2u);
	r8 = 0xC3C4048u; UPD(0x0C0BECF4u, 2);  /* 0C0BECF2 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BECF4 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0BECF8u, 2);  /* 0C0BECF6 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BECFAu, 1);  /* 0C0BECF8 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BECFA sub Rm,Rn */
	r2 += r6;  /* 0C0BECFC add Rm,Rn */
	IF(0x0C0BECFEu); T = (s32)r2 >= 0;  /* 0C0BECFE cmp/pz Rn */
	if (!T) { UPD(0x0C0BEDC0u, 6); goto L_0C0BEDC0; }  /* 0C0BED00 bf */
L_0C0BED02: BLKS(0x0C0BED02u);
	r9 = 0x780000u; UPD(0x0C0BED04u, 1);  /* 0C0BED02 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0BED04 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BED06 cmp/ge Rm,Rn */
	IF(0x0C0BED08u); r1 = T;  /* 0C0BED08 movt Rn */
	UPD(0x0C0BED0Au, 3);
L_0C0BED0A: BLKS(0x0C0BED0Au);
	r9 = (u32)(s32)(s16)r1;  /* 0C0BED0A exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BED0C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BED30u, 5); goto L_0C0BED30; } UPD(0x0C0BED12u, 1); goto L_0C0BED12; }  /* 0C0BED0E bt/s */
L_0C0BED12: BLKS(0x0C0BED12u);
	r14 += 0x8u;  /* 0C0BED12 add #imm,Rn */
	r15 = r14;  /* 0C0BED14 mov Rm,Rn */
	IF(0x0C0BED16u); PR = R32(r15); r15 += 4; UPD(0x0C0BED18u, 3);  /* 0C0BED16 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BED1Au, 1);  /* 0C0BED18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BED1Cu, 1);  /* 0C0BED1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BED1Eu, 1);  /* 0C0BED1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BED20u, 1);  /* 0C0BED1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BED22u, 1);  /* 0C0BED20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BED24u, 1);  /* 0C0BED22 mov.l @Rm+,Rn */
	IF(0x0C0BED24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BED24 rts */
L_0C0BED30: BLKS(0x0C0BED30u);
	r8 = 0xC0BD6F0u; UPD(0x0C0BED32u, 1);  /* 0C0BED30 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BED32 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0BED36u, 2);  /* 0C0BED34 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0BED36 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BED3Au, 2);  /* 0C0BED38 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C0BED3A mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0BED3Eu, 2);  /* 0C0BED3C mov.l Rm,@Rn */
	r6 = r11;  /* 0C0BED3E mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0BED42u, 2);  /* 0C0BED40 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BED42u); { u32 t_ = r8; PR = 0x0C0BED46u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0BED46u); }  /* 0C0BED42 jsr @Rn */
L_0C0BED46: BLKS(0x0C0BED46u);
	r8 = 0xC0BCA00u; UPD(0x0C0BED48u, 1);  /* 0C0BED46 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0BED48 add #imm,Rn */
	IF(0x0C0BED4Au); { u32 t_ = r8; PR = 0x0C0BED4Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BED4Eu); }  /* 0C0BED4A jsr @Rn */
L_0C0BED4E: BLKS(0x0C0BED4Eu);
	T = (r0 & r0) == 0;  /* 0C0BED4E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BED12u, 4); goto L_0C0BED12; } goto L_0C0BED54; }  /* 0C0BED50 bt/s */
L_0C0BED54: BLKS(0x0C0BED54u);
	r8 = 0xC28EDFCu; UPD(0x0C0BED56u, 2);  /* 0C0BED54 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0BED56 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BED5Au, 2);  /* 0C0BED58 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BED5A mov #imm,Rn */
	IF(0x0C0BED5Cu); MACL = r7 * r6;  /* 0C0BED5C mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BED60u, 4);  /* 0C0BED5E mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0BED60 and Rm,Rn */
	IF(0x0C0BED62u); r8 = MACL;  /* 0C0BED62 sts macl,Rn */
	r3 = 0x80000000u; UPD(0x0C0BED66u, 3);  /* 0C0BED64 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0BED66 add Rm,Rn */
	r3 |= r13;  /* 0C0BED68 or Rm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C0BED6Cu, 3);  /* 0C0BED6A mov.l Rm,@(disp,Rn) */
	r13 = 0x3u;  /* 0C0BED6C mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0BED70u, 2);  /* 0C0BED6E mov.l Rm,@Rn */
	r10 = 0xC0C2360u; UPD(0x0C0BED72u, 1);  /* 0C0BED70 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BED74u, 1);  /* 0C0BED72 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r12); UPD(0x0C0BED76u, 1);  /* 0C0BED74 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r13); UPD(0x0C0BED78u, 1);  /* 0C0BED76 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C0BED7Au, 1);  /* 0C0BED78 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0BED7A add #imm,Rn */
	IF(0x0C0BED7Cu); { u32 t_ = r10; PR = 0x0C0BED80u; W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BED80u); }  /* 0C0BED7C jsr @Rn */
L_0C0BED80: BLKS(0x0C0BED80u);
	r0 &= 0x7u;  /* 0C0BED80 and #imm,r0 */
	r8 += 0x1u;  /* 0C0BED82 add #imm,Rn */
	r0 += 0x8u;  /* 0C0BED84 add #imm,Rn */
	IF(0x0C0BED86u); { u32 t_ = r10; PR = 0x0C0BED8Au; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BED8Au); }  /* 0C0BED86 jsr @Rn */
L_0C0BED8A: BLKS(0x0C0BED8Au);
	r0 &= 0xFu;  /* 0C0BED8A and #imm,r0 */
	r8 += 0x1u;  /* 0C0BED8C add #imm,Rn */
	r0 += 0x4u;  /* 0C0BED8E add #imm,Rn */
	W8(r8, r0); UPD(0x0C0BED92u, 4);  /* 0C0BED90 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0BED92 mov #imm,Rn */
	IF(0x0C0BED94u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BED96u, 2);  /* 0C0BED94 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0BED96 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0BED9Au, 2);  /* 0C0BED98 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BED9A mov #imm,Rn */
	IF(0x0C0BED9Cu); r11 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BED9Eu, 2);  /* 0C0BED9C mov.b @(r0,Rm),Rn */
	IF(0x0C0BED9Eu); { u32 t_ = r10; PR = 0x0C0BEDA2u; { u32 v_ = r11; r8 -= 1; W8(r8, v_); } /* slot mov.b Rm,@-Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BEDA2u); }  /* 0C0BED9E jsr @Rn */
L_0C0BEDA2: BLKS(0x0C0BEDA2u);
	r8 += 0xFFFFFFCDu;  /* 0C0BEDA2 add #imm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0BEDA6u, 2);  /* 0C0BEDA4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BEDA6u); { u32 t_ = r10; PR = 0x0C0BEDAAu; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BEDAAu); }  /* 0C0BEDA6 jsr @Rn */
L_0C0BEDAA: BLKS(0x0C0BEDAAu);
	r0 &= 0x3Fu;  /* 0C0BEDAA and #imm,r0 */
	r0 += 0xFFFFFFE0u;  /* 0C0BEDAC add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BEDB0u, 3);  /* 0C0BEDAE mov.l Rm,@(disp,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BED12u, 3); goto L_0C0BED12; }  /* 0C0BEDB0 bra */
L_0C0BEDC0: BLKS(0x0C0BEDC0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BED02u, 3); goto L_0C0BED02; }  /* 0C0BEDC0 bra */
L_0C0BEDD0: BLKS(0x0C0BEDD0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BECE8u, 3); goto L_0C0BECE8; }  /* 0C0BEDD0 bra */
}

/* FUN_0c0bee10 */
void blk_f_0C0BEE10(sh3_t *c)
{
	LOCALS;
L_0C0BEE10: BLKS(0x0C0BEE10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE12u, 1);  /* 0C0BEE10 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFCu;  /* 0C0BEE12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE16u, 2);  /* 0C0BEE14 mov.l Rm,@-Rn */
	r0 &= r4;  /* 0C0BEE16 and Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE1Au, 2);  /* 0C0BEE18 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BEE1A mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE1Eu, 2);  /* 0C0BEE1C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE20u, 1);  /* 0C0BEE1E mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BEE20 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE24u, 2);  /* 0C0BEE22 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C0BEE24 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEE28u, 2);  /* 0C0BEE26 mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0BEE28 mov Rm,Rn */
	IF(0x0C0BEE2Au); r15 -= 4; W32(r15, PR); UPD(0x0C0BEE2Cu, 2);  /* 0C0BEE2A sts.l pr,@-Rn */
	r3 = 0xC2000A0u; UPD(0x0C0BEE2Eu, 1);  /* 0C0BEE2C mov.l @(disp,pc),Rn */
	IF(0x0C0BEE2Eu); r2 = R32(r0 + r3); UPD(0x0C0BEE30u, 1);  /* 0C0BEE2E mov.l @(r0,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0BEE32u, 1);  /* 0C0BEE30 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C0BEE32 add Rm,Rn */
	IF(0x0C0BEE34u); T = (s32)r3 >= 0;  /* 0C0BEE34 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BEEC0u, 5); goto L_0C0BEEC0; } UPD(0x0C0BEE3Au, 1); goto L_0C0BEE3A; }  /* 0C0BEE36 bf/s */
L_0C0BEE3A: BLKS(0x0C0BEE3Au);
	r0 = 0xA00000u; UPD(0x0C0BEE3Cu, 1);  /* 0C0BEE3A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0BEE3C add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0BEE3E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BEE54u, 5); goto L_0C0BEE54; }  /* 0C0BEE40 bt */
L_0C0BEE42: BLKS(0x0C0BEE42u);
	r3 = 0x4Cu;  /* 0C0BEE42 mov #imm,Rn */
	IF(0x0C0BEE44u); MACL = r12 * r3;  /* 0C0BEE44 mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0BEE48u, 4);  /* 0C0BEE46 mov.l @(disp,pc),Rn */
	IF(0x0C0BEE48u); r10 = MACL;  /* 0C0BEE48 sts macl,Rn */
	r10 += r2;  /* 0C0BEE4A add Rm,Rn */
	r0 = R32(r10); UPD(0x0C0BEE4Eu, 3);  /* 0C0BEE4C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0BEE4E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BEE50 tst Rm,Rn */
	if (!T) { UPD(0x0C0BEE70u, 5); goto L_0C0BEE70; }  /* 0C0BEE52 bf */
L_0C0BEE54: BLKS(0x0C0BEE54u);
	r15 = r14;  /* 0C0BEE54 mov Rm,Rn */
	IF(0x0C0BEE56u); PR = R32(r15); r15 += 4; UPD(0x0C0BEE58u, 2);  /* 0C0BEE56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BEE5Au, 1);  /* 0C0BEE58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BEE5Cu, 1);  /* 0C0BEE5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BEE5Eu, 1);  /* 0C0BEE5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BEE60u, 1);  /* 0C0BEE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BEE62u, 1);  /* 0C0BEE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BEE64u, 1);  /* 0C0BEE62 mov.l @Rm+,Rn */
	IF(0x0C0BEE64u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BEE64 rts */
L_0C0BEE70: BLKS(0x0C0BEE70u);
	r8 = 0xC0BCC40u; UPD(0x0C0BEE72u, 1);  /* 0C0BEE70 mov.l @(disp,pc),Rn */
	IF(0x0C0BEE72u); { u32 t_ = r8; PR = 0x0C0BEE76u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCC40, 0x0C0BCC40u, 0x0C0BEE76u); }  /* 0C0BEE72 jsr @Rn */
L_0C0BEE76: BLKS(0x0C0BEE76u);
	T = (r0 & r0) == 0;  /* 0C0BEE76 tst Rm,Rn */
	if (T) { UPD(0x0C0BEE54u, 4); goto L_0C0BEE54; }  /* 0C0BEE78 bt */
L_0C0BEE7A: BLKS(0x0C0BEE7Au);
	r8 = 0x38u;  /* 0C0BEE7A mov #imm,Rn */
	r5 = 0xC28EDFCu; UPD(0x0C0BEE7Eu, 2);  /* 0C0BEE7C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0BEE80u, 1);  /* 0C0BEE7E mov.w @Rm,Rn */
	r0 = 0x18u;  /* 0C0BEE80 mov #imm,Rn */
	IF(0x0C0BEE82u); MACL = r4 * r8;  /* 0C0BEE82 mul.l Rm,Rn */
	r3 = 0xC28F65Cu; UPD(0x0C0BEE86u, 4);  /* 0C0BEE84 mov.l @(disp,pc),Rn */
	r10 += 0x42u;  /* 0C0BEE86 add #imm,Rn */
	IF(0x0C0BEE88u); r8 = MACL;  /* 0C0BEE88 sts macl,Rn */
	r8 += r3;  /* 0C0BEE8A add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0BEE8Eu, 4);  /* 0C0BEE8C mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C0BEE8E mov #imm,Rn */
	r0 = 0xC062780u; UPD(0x0C0BEE92u, 2);  /* 0C0BEE90 mov.l @(disp,pc),Rn */
	r2 = 0xC0000010u; UPD(0x0C0BEE94u, 1);  /* 0C0BEE92 mov.l @(disp,pc),Rn */
	IF(0x0C0BEE94u); { u32 t_ = r0; PR = 0x0C0BEE98u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BEE98u); }  /* 0C0BEE94 jsr @Rn */
L_0C0BEE98: BLKS(0x0C0BEE98u);
	r7 = 0x0u;  /* 0C0BEE98 mov #imm,Rn */
	r9 += r0;  /* 0C0BEE9A add Rm,Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C0BEE9Eu, 3);  /* 0C0BEE9C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r7); UPD(0x0C0BEEA0u, 1);  /* 0C0BEE9E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r11); UPD(0x0C0BEEA2u, 1);  /* 0C0BEEA0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r13); UPD(0x0C0BEEA4u, 1);  /* 0C0BEEA2 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0BEEA4 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0BEEA8u, 2);  /* 0C0BEEA6 mov.b Rm,@Rn */
	r8 += 0x4u;  /* 0C0BEEA8 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0BEEACu, 2);  /* 0C0BEEAA mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C0BEEAEu, 1);  /* 0C0BEEAC mov.b @Rm,Rn */
	{ u32 v_ = r6; r8 -= 1; W8(r8, v_); } UPD(0x0C0BEEB0u, 1);  /* 0C0BEEAE mov.b Rm,@-Rn */
	r5 = 0xFFFFu; UPD(0x0C0BEEB2u, 1);  /* 0C0BEEB0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BEEB2 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0BEEB6u, 2);  /* 0C0BEEB4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0BEEB8u, 1);  /* 0C0BEEB6 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BEE54u, 3); goto L_0C0BEE54; }  /* 0C0BEEB8 bra */
L_0C0BEEC0: BLKS(0x0C0BEEC0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0BEE3Au, 3); goto L_0C0BEE3A; }  /* 0C0BEEC0 bra */
}

/* FUN_0c0beef0 */
void blk_f_0C0BEEF0(sh3_t *c)
{
	LOCALS;
L_0C0BEEF0: BLKS(0x0C0BEEF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEEF2u, 1);  /* 0C0BEEF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEEF4u, 1);  /* 0C0BEEF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEEF6u, 1);  /* 0C0BEEF4 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BEEF6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEEFAu, 2);  /* 0C0BEEF8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEEFCu, 1);  /* 0C0BEEFA mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BEEFC mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEF00u, 2);  /* 0C0BEEFE mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BEF00 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BEF04u, 2);  /* 0C0BEF02 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C0BEF04 mov Rm,Rn */
	IF(0x0C0BEF06u); r15 -= 4; W32(r15, PR); UPD(0x0C0BEF08u, 2);  /* 0C0BEF06 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BEF08 add #imm,Rn */
	r14 = r15;  /* 0C0BEF0A mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0BEF0Eu, 3);  /* 0C0BEF0C mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0BEF10u, 1);  /* 0C0BEF0E mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BEF10 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BEF14u, 2);  /* 0C0BEF12 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BEF14 exts.b Rm,Rn */
	r2 = 0xC2000B8u; UPD(0x0C0BEF18u, 2);  /* 0C0BEF16 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BEF18 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BEF1Cu, 2);  /* 0C0BEF1A mov.l Rm,@Rn */
	IF(0x0C0BEF1Cu); r0 <<= 2;  /* 0C0BEF1C shll2 Rn */
	IF(0x0C0BEF1Eu); r3 = R32(r0 + r2); UPD(0x0C0BEF20u, 2);  /* 0C0BEF1E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BEF22u, 1);  /* 0C0BEF20 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BEF22 add Rm,Rn */
	IF(0x0C0BEF24u); T = (s32)r2 >= 0;  /* 0C0BEF24 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0BEFE0u, 5); goto L_0C0BEFE0; } UPD(0x0C0BEF2Au, 1); goto L_0C0BEF2A; }  /* 0C0BEF26 bf/s */
L_0C0BEF2A: BLKS(0x0C0BEF2Au);
	r5 = 0xA00000u; UPD(0x0C0BEF2Cu, 1);  /* 0C0BEF2A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BEF2C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BEF2E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEF4Cu, 5); goto L_0C0BEF4C; } goto L_0C0BEF34; }  /* 0C0BEF30 bt/s */
L_0C0BEF34: BLKS(0x0C0BEF34u);
	r8 = 0xC3C4048u; UPD(0x0C0BEF36u, 2);  /* 0C0BEF34 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BEF36 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0BEF3Au, 2);  /* 0C0BEF38 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BEF3Cu, 1);  /* 0C0BEF3A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BEF3C sub Rm,Rn */
	r2 += r6;  /* 0C0BEF3E add Rm,Rn */
	IF(0x0C0BEF40u); T = (s32)r2 >= 0;  /* 0C0BEF40 cmp/pz Rn */
	if (!T) { UPD(0x0C0BEFD0u, 6); goto L_0C0BEFD0; }  /* 0C0BEF42 bf */
L_0C0BEF44: BLKS(0x0C0BEF44u);
	r0 = 0x780000u; UPD(0x0C0BEF46u, 1);  /* 0C0BEF44 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0BEF46 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BEF48 cmp/ge Rm,Rn */
	IF(0x0C0BEF4Au); r1 = T;  /* 0C0BEF4A movt Rn */
	UPD(0x0C0BEF4Cu, 3);
L_0C0BEF4C: BLKS(0x0C0BEF4Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BEF4C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BEF4E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEF70u, 5); goto L_0C0BEF70; } UPD(0x0C0BEF54u, 1); goto L_0C0BEF54; }  /* 0C0BEF50 bt/s */
L_0C0BEF54: BLKS(0x0C0BEF54u);
	r14 += 0x8u;  /* 0C0BEF54 add #imm,Rn */
	r15 = r14;  /* 0C0BEF56 mov Rm,Rn */
	IF(0x0C0BEF58u); PR = R32(r15); r15 += 4; UPD(0x0C0BEF5Au, 3);  /* 0C0BEF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BEF5Cu, 1);  /* 0C0BEF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BEF5Eu, 1);  /* 0C0BEF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BEF60u, 1);  /* 0C0BEF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BEF62u, 1);  /* 0C0BEF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BEF64u, 1);  /* 0C0BEF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BEF66u, 1);  /* 0C0BEF64 mov.l @Rm+,Rn */
	IF(0x0C0BEF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BEF66 rts */
L_0C0BEF70: BLKS(0x0C0BEF70u);
	r0 = 0xC0BCA00u; UPD(0x0C0BEF72u, 1);  /* 0C0BEF70 mov.l @(disp,pc),Rn */
	IF(0x0C0BEF72u); { u32 t_ = r0; PR = 0x0C0BEF76u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BEF76u); }  /* 0C0BEF72 jsr @Rn */
L_0C0BEF76: BLKS(0x0C0BEF76u);
	T = (r0 & r0) == 0;  /* 0C0BEF76 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BEF54u, 4); goto L_0C0BEF54; } goto L_0C0BEF7C; }  /* 0C0BEF78 bt/s */
L_0C0BEF7C: BLKS(0x0C0BEF7Cu);
	r2 = 0xC28EDFCu; UPD(0x0C0BEF7Eu, 2);  /* 0C0BEF7C mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0BEF7E mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BEF82u, 2);  /* 0C0BEF80 mov.w @Rm,Rn */
	r7 = 0x10u;  /* 0C0BEF82 mov #imm,Rn */
	IF(0x0C0BEF84u); MACL = r4 * r3;  /* 0C0BEF84 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BEF88u, 4);  /* 0C0BEF86 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0BEF88 and Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0BEF8Cu, 2);  /* 0C0BEF8A mov.l @(disp,pc),Rn */
	IF(0x0C0BEF8Cu); r3 = MACL;  /* 0C0BEF8C sts macl,Rn */
	r4 = R32(r14 + 0x30u); UPD(0x0C0BEF90u, 2);  /* 0C0BEF8E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0BEF90 add Rm,Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0BEF94u, 2);  /* 0C0BEF92 mov.l @(disp,Rm),Rn */
	r6 |= r9;  /* 0C0BEF94 or Rm,Rn */
	r5 = 0x15u;  /* 0C0BEF96 mov #imm,Rn */
	W32(r3 + 0x8u, r11); UPD(0x0C0BEF9Au, 3);  /* 0C0BEF98 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0BEF9A mov #imm,Rn */
	W32(r3 + 0x10u, r12); UPD(0x0C0BEF9Eu, 2);  /* 0C0BEF9C mov.l Rm,@(disp,Rn) */
	r9 = 0xFFFFFFFCu;  /* 0C0BEF9E mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0BEFA2u, 2);  /* 0C0BEFA0 mov.l Rm,@(disp,Rn) */
	W32(r3, r6); UPD(0x0C0BEFA4u, 1);  /* 0C0BEFA2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C0BEFA6u, 1);  /* 0C0BEFA4 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0BEFA8u, 1);  /* 0C0BEFA6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r4); UPD(0x0C0BEFAAu, 1);  /* 0C0BEFA8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0BEFACu, 1);  /* 0C0BEFAA mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BEFAC add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BEFB0u, 2);  /* 0C0BEFAE mov.b Rm,@Rn */
	IF(0x0C0BEFB0u); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEFB2u, 1);  /* 0C0BEFB0 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0BEFB2 add #imm,Rn */
	W8(r3, r13); UPD(0x0C0BEFB6u, 2);  /* 0C0BEFB4 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BEFB6 mov #imm,Rn */
	IF(0x0C0BEFB8u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BEFBAu, 2);  /* 0C0BEFB8 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r12; r3 -= 1; W8(r3, v_); } UPD(0x0C0BEFBCu, 1);  /* 0C0BEFBA mov.b Rm,@-Rn */
	r0 = 0x1u;  /* 0C0BEFBC mov #imm,Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BEFBE add #imm,Rn */
	W32(r3 + 0x2Cu, r10); UPD(0x0C0BEFC2u, 3);  /* 0C0BEFC0 mov.l Rm,@(disp,Rn) */
	r11 = 0x207C0C0u; UPD(0x0C0BEFC4u, 1);  /* 0C0BEFC2 mov.l @(disp,pc),Rn */
	IF(0x0C0BEFC4u); ARG0(0x4A9Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0BEFC4 shad Rm,Rn */
	W32(r3 + 0x28u, r11); UPD(0x0C0BEFC8u, 2);  /* 0C0BEFC6 mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BEF54u, 3); goto L_0C0BEF54; }  /* 0C0BEFC8 bra */
L_0C0BEFD0: BLKS(0x0C0BEFD0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEF44u, 3); goto L_0C0BEF44; }  /* 0C0BEFD0 bra */
L_0C0BEFE0: BLKS(0x0C0BEFE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BEF2Au, 3); goto L_0C0BEF2A; }  /* 0C0BEFE0 bra */
}

/* FUN_0c0bf010 */
void blk_f_0C0BF010(sh3_t *c)
{
	LOCALS;
L_0C0BF010: BLKS(0x0C0BF010u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF012u, 1);  /* 0C0BF010 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF014u, 1);  /* 0C0BF012 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BF014 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF018u, 2);  /* 0C0BF016 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF01Au, 1);  /* 0C0BF018 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF01Cu, 1);  /* 0C0BF01A mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BF01C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF020u, 2);  /* 0C0BF01E mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BF020 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF024u, 2);  /* 0C0BF022 mov.l Rm,@-Rn */
	IF(0x0C0BF024u); r15 -= 4; W32(r15, PR); UPD(0x0C0BF026u, 1);  /* 0C0BF024 sts.l pr,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0BF026 add #imm,Rn */
	r14 = r15;  /* 0C0BF028 mov Rm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0BF02Cu, 3);  /* 0C0BF02A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x34u); UPD(0x0C0BF02Eu, 1);  /* 0C0BF02C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BF02E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BF032u, 2);  /* 0C0BF030 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BF032 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BF036u, 2);  /* 0C0BF034 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BF036 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BF03Au, 2);  /* 0C0BF038 mov.l Rm,@Rn */
	IF(0x0C0BF03Au); r0 <<= 2;  /* 0C0BF03A shll2 Rn */
	IF(0x0C0BF03Cu); r3 = R32(r0 + r2); UPD(0x0C0BF03Eu, 2);  /* 0C0BF03C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BF040u, 1);  /* 0C0BF03E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BF040 add Rm,Rn */
	IF(0x0C0BF042u); T = (s32)r2 >= 0;  /* 0C0BF042 cmp/pz Rn */
	{ u32 c_ = T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF04Cu, 5); goto L_0C0BF04C; } goto L_0C0BF048; }  /* 0C0BF044 bt/s */
L_0C0BF048: BLKS(0x0C0BF048u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BF150u, 4); goto L_0C0BF150; }  /* 0C0BF048 bra */
L_0C0BF04C: BLKS(0x0C0BF04Cu);
	r5 = 0xA00000u; UPD(0x0C0BF04Eu, 1);  /* 0C0BF04C mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BF04E add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BF050 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF070u, 5); goto L_0C0BF070; } goto L_0C0BF056; }  /* 0C0BF052 bt/s */
L_0C0BF056: BLKS(0x0C0BF056u);
	r9 = 0xC3C4048u; UPD(0x0C0BF058u, 2);  /* 0C0BF056 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0BF058 mov Rm,Rn */
	r7 = R32(r9); UPD(0x0C0BF05Cu, 2);  /* 0C0BF05A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BF05Eu, 1);  /* 0C0BF05C mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BF05E sub Rm,Rn */
	r2 += r6;  /* 0C0BF060 add Rm,Rn */
	IF(0x0C0BF062u); T = (s32)r2 >= 0;  /* 0C0BF062 cmp/pz Rn */
	if (T) { UPD(0x0C0BF068u, 6); goto L_0C0BF068; }  /* 0C0BF064 bt */
L_0C0BF066: BLKS(0x0C0BF066u);
	r2 = 0u - r2;  /* 0C0BF066 neg Rm,Rn */
	UPD(0x0C0BF068u, 1);
L_0C0BF068: BLKS(0x0C0BF068u);
	r10 = 0x780000u; UPD(0x0C0BF06Au, 1);  /* 0C0BF068 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0BF06A add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BF06C cmp/ge Rm,Rn */
	IF(0x0C0BF06Eu); r1 = T;  /* 0C0BF06E movt Rn */
	UPD(0x0C0BF070u, 3);
L_0C0BF070: BLKS(0x0C0BF070u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0BF070 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BF072 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF090u, 5); goto L_0C0BF090; } UPD(0x0C0BF078u, 1); goto L_0C0BF078; }  /* 0C0BF074 bt/s */
L_0C0BF078: BLKS(0x0C0BF078u);
	r14 += 0x14u;  /* 0C0BF078 add #imm,Rn */
	UPD(0x0C0BF07Au, 1);
L_0C0BF07A: BLKS(0x0C0BF07Au);
	r15 = r14;  /* 0C0BF07A mov Rm,Rn */
	IF(0x0C0BF07Cu); PR = R32(r15); r15 += 4; UPD(0x0C0BF07Eu, 2);  /* 0C0BF07C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF080u, 1);  /* 0C0BF07E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BF082u, 1);  /* 0C0BF080 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BF084u, 1);  /* 0C0BF082 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BF086u, 1);  /* 0C0BF084 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF088u, 1);  /* 0C0BF086 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF08Au, 1);  /* 0C0BF088 mov.l @Rm+,Rn */
	IF(0x0C0BF08Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF08A rts */
L_0C0BF090: BLKS(0x0C0BF090u);
	r5 = R32(r14); UPD(0x0C0BF092u, 1);  /* 0C0BF090 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BF092 add #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0BF096u, 2);  /* 0C0BF094 mov.l @(disp,Rm),Rn */
	r6 = r12;  /* 0C0BF096 mov Rm,Rn */
	r10 = 0xC0BD6F0u; UPD(0x0C0BF09Au, 2);  /* 0C0BF098 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0BF09A mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0BF09Eu, 2);  /* 0C0BF09C mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0BF0A0u, 1);  /* 0C0BF09E mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0BF0A0 mov Rm,Rn */
	IF(0x0C0BF0A2u); { u32 t_ = r10; PR = 0x0C0BF0A6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0BF0A6u); }  /* 0C0BF0A2 jsr @Rn */
L_0C0BF0A6: BLKS(0x0C0BF0A6u);
	r0 = 0x7u;  /* 0C0BF0A6 mov #imm,Rn */
	r3 = 0xC2000E0u; UPD(0x0C0BF0AAu, 2);  /* 0C0BF0A8 mov.l @(disp,pc),Rn */
	r0 &= r11;  /* 0C0BF0AA and Rm,Rn */
	IF(0x0C0BF0ACu); r0 <<= 2;  /* 0C0BF0AC shll2 Rn */
	r9 = 0xC0BCA00u; UPD(0x0C0BF0B0u, 3);  /* 0C0BF0AE mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0BF0B0 add #imm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C0BF0B4u, 2);  /* 0C0BF0B2 mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0BF0B4 mov #imm,Rn */
	IF(0x0C0BF0B6u); r2 = R32(r0 + r3); UPD(0x0C0BF0B8u, 2);  /* 0C0BF0B6 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0BF0BAu, 1);  /* 0C0BF0B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF0BAu); { u32 t_ = r9; PR = 0x0C0BF0BEu; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BF0BEu); }  /* 0C0BF0BA jsr @Rn */
L_0C0BF0BE: BLKS(0x0C0BF0BEu);
	T = (r0 & r0) == 0;  /* 0C0BF0BE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF078u, 4); goto L_0C0BF078; } goto L_0C0BF0C4; }  /* 0C0BF0C0 bt/s */
L_0C0BF0C4: BLKS(0x0C0BF0C4u);
	r0 = r8;  /* 0C0BF0C4 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0BF0C6 and #imm,r0 */
	r9 = 0x80u; UPD(0x0C0BF0CAu, 4);  /* 0C0BF0C8 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0BF0CA mov #imm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C0BF0CEu, 2);  /* 0C0BF0CC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF0CEu); ;  /* 0C0BF0CE nop */
	UPD(0x0C0BF0D0u, 1);
L_0C0BF0D0: BLKS(0x0C0BF0D0u);
	r6 = R32(r14 + 0x8u); UPD(0x0C0BF0D2u, 1);  /* 0C0BF0D0 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0BF0D2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0BF0D6u, 2);  /* 0C0BF0D4 mov.w @Rm+,Rn */
	r2 = 0x0u;  /* 0C0BF0D6 mov #imm,Rn */
	IF(0x0C0BF0D8u); MACL = r5 * r8;  /* 0C0BF0D8 mul.l Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0BF0DCu, 4);  /* 0C0BF0DA mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0BF0DC mov #imm,Rn */
	r7 = 0xC069B20u; UPD(0x0C0BF0E0u, 2);  /* 0C0BF0DE mov.l @(disp,pc),Rn */
	IF(0x0C0BF0E0u); r8 = MACL;  /* 0C0BF0E0 sts macl,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BF0E4u, 2);  /* 0C0BF0E2 mov.l @(disp,pc),Rn */
	r3 = 0x80000000u; UPD(0x0C0BF0E6u, 1);  /* 0C0BF0E4 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BF0E6 add Rm,Rn */
	r3 |= r1;  /* 0C0BF0E8 or Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C0BF0ECu, 3);  /* 0C0BF0EA mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0BF0EC mov Rm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C0BF0F0u, 2);  /* 0C0BF0EE mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0BF0F2u, 1);  /* 0C0BF0F0 mov.l Rm,@Rn */
	W32(r8 + 0x20u, r9); UPD(0x0C0BF0F4u, 1);  /* 0C0BF0F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r11); UPD(0x0C0BF0F6u, 1);  /* 0C0BF0F4 mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C0BF0F6 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BF0FAu, 2);  /* 0C0BF0F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF0FAu); { u32 t_ = r7; PR = 0x0C0BF0FEu; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BF0FEu); }  /* 0C0BF0FA jsr @Rn */
L_0C0BF0FE: BLKS(0x0C0BF0FEu);
	r6 = 0xC069AF0u; UPD(0x0C0BF100u, 1);  /* 0C0BF0FE mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0BF100 add Rm,Rn */
	r4 = R32(r8 + 0x20u); UPD(0x0C0BF104u, 2);  /* 0C0BF102 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r0); UPD(0x0C0BF106u, 1);  /* 0C0BF104 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF106u); { u32 t_ = r6; PR = 0x0C0BF10Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BF10Au); }  /* 0C0BF106 jsr @Rn */
L_0C0BF10A: BLKS(0x0C0BF10Au);
	r0 += r13;  /* 0C0BF10A add Rm,Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BF10Eu, 2);  /* 0C0BF10C mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0BF10E mov #imm,Rn */
	r8 += 0x30u;  /* 0C0BF110 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0BF114u, 3);  /* 0C0BF112 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0BF114 mov #imm,Rn */
	IF(0x0C0BF116u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BF118u, 2);  /* 0C0BF116 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BF118 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0BF11Cu, 2);  /* 0C0BF11A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BF11C mov #imm,Rn */
	IF(0x0C0BF11Eu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BF120u, 2);  /* 0C0BF11E mov.b @(r0,Rm),Rn */
	r3 = 0xC069B20u; UPD(0x0C0BF122u, 1);  /* 0C0BF120 mov.l @(disp,pc),Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0BF124u, 1);  /* 0C0BF122 mov.b Rm,@-Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BF124 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C0BF128u, 2);  /* 0C0BF126 mov.l @(disp,pc),Rn */
	IF(0x0C0BF128u); { u32 t_ = r3; PR = 0x0C0BF12Cu; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BF12Cu); }  /* 0C0BF128 jsr @Rn */
L_0C0BF12C: BLKS(0x0C0BF12Cu);
	r2 = 0x20000u; UPD(0x0C0BF12Eu, 1);  /* 0C0BF12C mov.l @(disp,pc),Rn */
	r7 = 0xC069AF0u; UPD(0x0C0BF130u, 1);  /* 0C0BF12E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0BF130 add Rm,Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0BF134u, 2);  /* 0C0BF132 mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C0BF136u, 1);  /* 0C0BF134 mov.l @(disp,pc),Rn */
	IF(0x0C0BF136u); { u32 t_ = r7; PR = 0x0C0BF13Au; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BF13Au); }  /* 0C0BF136 jsr @Rn */
L_0C0BF13A: BLKS(0x0C0BF13Au);
	r6 = r10;  /* 0C0BF13A mov Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BF13Eu, 2);  /* 0C0BF13C mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C0BF13E add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0BF140 exts.w Rm,Rn */
	r8 = 0x1Fu;  /* 0C0BF142 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C0BF144 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF0D0u, 7); goto L_0C0BF0D0; } goto L_0C0BF14A; }  /* 0C0BF146 bf/s */
L_0C0BF14A: BLKS(0x0C0BF14Au);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0BF07Au, 4); goto L_0C0BF07A; }  /* 0C0BF14A bra */
L_0C0BF150: BLKS(0x0C0BF150u);
	{ IF(0x0C0BF152u); ; /* slot nop */ UPD(0x0C0BF04Cu, 3); goto L_0C0BF04C; }  /* 0C0BF150 bra */
}

void blk_f_0C0BF3E0(sh3_t *c)
{
	LOCALS;
L_0C0BF3E0: BLKS(0x0C0BF3E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF3E2u, 1);  /* 0C0BF3E0 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0BF3E2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF3E6u, 2);  /* 0C0BF3E4 mov.l Rm,@-Rn */
	r0 = 0xC2B1811u; UPD(0x0C0BF3E8u, 1);  /* 0C0BF3E6 mov.l @(disp,pc),Rn */
	IF(0x0C0BF3E8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BF3EAu, 1);  /* 0C0BF3E8 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BF3ECu, 1);  /* 0C0BF3EA mov.b @Rm,Rn */
	r0 = 0xC0BCA00u; UPD(0x0C0BF3EEu, 1);  /* 0C0BF3EC mov.l @(disp,pc),Rn */
	IF(0x0C0BF3EEu); { u32 t_ = r0; PR = 0x0C0BF3F2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BF3F2u); }  /* 0C0BF3EE jsr @Rn */
L_0C0BF3F2: BLKS(0x0C0BF3F2u);
	T = (r0 & r0) == 0;  /* 0C0BF3F2 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF470u, 4); goto L_0C0BF470; } goto L_0C0BF3F8; }  /* 0C0BF3F4 bt/s */
L_0C0BF3F8: BLKS(0x0C0BF3F8u);
	r7 = 0xC28EDFCu; UPD(0x0C0BF3FAu, 2);  /* 0C0BF3F8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BF3FCu, 1);  /* 0C0BF3FA mov.w @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0BF3FC mov #imm,Rn */
	IF(0x0C0BF3FEu); MACL = r0 * r4;  /* 0C0BF3FE mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BF402u, 4);  /* 0C0BF400 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0BF402 mov #imm,Rn */
	IF(0x0C0BF404u); r4 = MACL;  /* 0C0BF404 sts macl,Rn */
	r4 += r5;  /* 0C0BF406 add Rm,Rn */
	r6 = 0xC0000010u; UPD(0x0C0BF40Au, 4);  /* 0C0BF408 mov.l @(disp,pc),Rn */
	IF(0x0C0BF40Au); MACL = r8 * r7;  /* 0C0BF40A mul.l Rm,Rn */
	W32(r4 + 0x4u, r3); UPD(0x0C0BF40Eu, 3);  /* 0C0BF40C mov.l Rm,@(disp,Rn) */
	W32(r4, r6); UPD(0x0C0BF410u, 1);  /* 0C0BF40E mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C0BF410 mov #imm,Rn */
	r2 = 0xC237C08u; UPD(0x0C0BF414u, 2);  /* 0C0BF412 mov.l @(disp,pc),Rn */
	IF(0x0C0BF414u); r7 = MACL;  /* 0C0BF414 sts macl,Rn */
	r5 = 0xC286318u; UPD(0x0C0BF418u, 2);  /* 0C0BF416 mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r3); UPD(0x0C0BF41Au, 1);  /* 0C0BF418 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0BF41A add Rm,Rn */
	W32(r4 + 0x8u, r3); UPD(0x0C0BF41Eu, 2);  /* 0C0BF41C mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BF420u, 1);  /* 0C0BF41E mov.w @Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0BF422u, 1);  /* 0C0BF420 mov.l @(disp,Rm),Rn */
	IF(0x0C0BF422u); r6 <<= 16;  /* 0C0BF422 shll16 Rn */
	r6 -= r2;  /* 0C0BF424 sub Rm,Rn */
	W32(r4 + 0x10u, r6); UPD(0x0C0BF428u, 3);  /* 0C0BF426 mov.l Rm,@(disp,Rn) */
	r7 += 0x42u;  /* 0C0BF428 add #imm,Rn */
	r5 = 0xC3C43C6u; UPD(0x0C0BF42Cu, 2);  /* 0C0BF42A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0BF42Eu, 1);  /* 0C0BF42C mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0BF430u, 1);  /* 0C0BF42E mov.w @(disp,pc),Rn */
	IF(0x0C0BF430u); r6 <<= 16;  /* 0C0BF430 shll16 Rn */
	W32(r4 + 0x14u, r6); UPD(0x0C0BF434u, 2);  /* 0C0BF432 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF434u); MACL = r0 * r2;  /* 0C0BF434 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0BF438u, 3);  /* 0C0BF436 mov.l @(disp,pc),Rn */
	W32(r4 + 0x1Cu, r3); UPD(0x0C0BF43Au, 1);  /* 0C0BF438 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BF43Au); r5 = MACL;  /* 0C0BF43A sts macl,Rn */
	W32(r4 + 0x18u, r3); UPD(0x0C0BF43Eu, 2);  /* 0C0BF43C mov.l Rm,@(disp,Rn) */
	r6 += r5;  /* 0C0BF43E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0BF442u, 2);  /* 0C0BF440 mov.w @(disp,pc),Rn */
	IF(0x0C0BF442u); W8(r0 + r6, r8); UPD(0x0C0BF444u, 1);  /* 0C0BF442 mov.b Rm,@(r0,Rn) */
	r0 = r4;  /* 0C0BF444 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BF448u, 2);  /* 0C0BF446 mov.b @Rm,Rn */
	r4 += 0x33u;  /* 0C0BF448 add #imm,Rn */
	W8(r4, r6); UPD(0x0C0BF44Cu, 2);  /* 0C0BF44A mov.b Rm,@Rn */
	r0 += 0x30u;  /* 0C0BF44C add #imm,Rn */
	r4 += 0xFFFFFFCDu;  /* 0C0BF44E add #imm,Rn */
	W8(r0, r3); UPD(0x0C0BF452u, 3);  /* 0C0BF450 mov.b Rm,@Rn */
	W32(r4 + 0x28u, r3); UPD(0x0C0BF454u, 1);  /* 0C0BF452 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C43C4u; UPD(0x0C0BF456u, 1);  /* 0C0BF454 mov.l @(disp,pc),Rn */
	r3 = 0xC29D736u; UPD(0x0C0BF458u, 1);  /* 0C0BF456 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BF45Au, 1);  /* 0C0BF458 mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BF45Cu, 1);  /* 0C0BF45A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0BF45C extu.b Rm,Rn */
	r6 = 0xC3C4171u; UPD(0x0C0BF460u, 2);  /* 0C0BF45E mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C0BF460 extu.b Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0BF464u, 2);  /* 0C0BF462 mov.b @Rm,Rn */
	IF(0x0C0BF464u); r0 <<= 16;  /* 0C0BF464 shll16 Rn */
	IF(0x0C0BF466u); r7 <<= 8;  /* 0C0BF466 shll8 Rn */
	r0 |= r7;  /* 0C0BF468 or Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C0BF46A extu.b Rm,Rn */
	r0 |= r3;  /* 0C0BF46C or Rm,Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0BF470u, 6);  /* 0C0BF46E mov.l Rm,@(disp,Rn) */
L_0C0BF470: BLKS(0x0C0BF470u);
	r0 = 0x1u;  /* 0C0BF470 mov #imm,Rn */
	r15 = r14;  /* 0C0BF472 mov Rm,Rn */
	IF(0x0C0BF474u); PR = R32(r15); r15 += 4; UPD(0x0C0BF476u, 3);  /* 0C0BF474 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF478u, 1);  /* 0C0BF476 mov.l @Rm+,Rn */
	IF(0x0C0BF478u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF478 rts */
}

void blk_f_0C0BF4B0(sh3_t *c)
{
	LOCALS;
L_0C0BF4B0: BLKS(0x0C0BF4B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF4B2u, 1);  /* 0C0BF4B0 mov.l Rm,@-Rn */
	r2 = 0x38u;  /* 0C0BF4B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF4B6u, 2);  /* 0C0BF4B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF4B8u, 1);  /* 0C0BF4B6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0BF4B8 exts.w Rm,Rn */
	IF(0x0C0BF4BAu); MACL = r10 * r2;  /* 0C0BF4BA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF4BEu, 4);  /* 0C0BF4BC mov.l Rm,@-Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BF4C0u, 1);  /* 0C0BF4BE mov.l @(disp,pc),Rn */
	IF(0x0C0BF4C0u); r8 = MACL;  /* 0C0BF4C0 sts macl,Rn */
	IF(0x0C0BF4C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0BF4C4u, 2);  /* 0C0BF4C2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0BF4C4 add Rm,Rn */
	r8 += 0x34u;  /* 0C0BF4C6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0BF4CAu, 3);  /* 0C0BF4C8 mov.b @Rm,Rn */
	r0 = 0x8u;  /* 0C0BF4CA mov #imm,Rn */
	r14 = r15;  /* 0C0BF4CC mov Rm,Rn */
	T = r1 > r0;  /* 0C0BF4CE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF4D8u, 6); goto L_0C0BF4D8; } goto L_0C0BF4D4; }  /* 0C0BF4D0 bf/s */
L_0C0BF4D4: BLKS(0x0C0BF4D4u);
	r3 = 0x0u;  /* 0C0BF4D4 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0BF4D8u, 3);  /* 0C0BF4D6 mov.l Rm,@Rn */
L_0C0BF4D8: BLKS(0x0C0BF4D8u);
	r9 = R32(r8 + 0xCu); UPD(0x0C0BF4DAu, 1);  /* 0C0BF4D8 mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0BF4DA tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF540u, 4); goto L_0C0BF540; } goto L_0C0BF4E0; }  /* 0C0BF4DC bt/s */
L_0C0BF4E0: BLKS(0x0C0BF4E0u);
	r2 += 0x30u;  /* 0C0BF4E0 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BF4E4u, 3);  /* 0C0BF4E2 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0BF4E4 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0BF4E6 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0BF4E8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BF530u, 6); goto L_0C0BF530; } UPD(0x0C0BF4EEu, 1); goto L_0C0BF4EE; }  /* 0C0BF4EA bt/s */
L_0C0BF4EE: BLKS(0x0C0BF4EEu);
	r3 = 0x38u;  /* 0C0BF4EE mov #imm,Rn */
	IF(0x0C0BF4F0u); MACL = r10 * r3;  /* 0C0BF4F0 mul.l Rm,Rn */
	r2 = 0xC3C43C4u; UPD(0x0C0BF4F4u, 4);  /* 0C0BF4F2 mov.l @(disp,pc),Rn */
	r7 = 0xC29D736u; UPD(0x0C0BF4F6u, 1);  /* 0C0BF4F4 mov.l @(disp,pc),Rn */
	IF(0x0C0BF4F6u); r9 = MACL;  /* 0C0BF4F6 sts macl,Rn */
	r8 = 0xC28F65Cu; UPD(0x0C0BF4FAu, 2);  /* 0C0BF4F8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BF4FCu, 1);  /* 0C0BF4FA mov.b @Rm,Rn */
	r8 += r9;  /* 0C0BF4FC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BF500u, 2);  /* 0C0BF4FE mov.b @Rm,Rn */
	r9 = r0 & 0xFF;  /* 0C0BF500 extu.b Rm,Rn */
	r4 = 0xC3C4171u; UPD(0x0C0BF504u, 2);  /* 0C0BF502 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0BF504 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0BF508u, 2);  /* 0C0BF506 mov.b @Rm,Rn */
	IF(0x0C0BF508u); r5 <<= 8;  /* 0C0BF508 shll8 Rn */
	IF(0x0C0BF50Au); r9 <<= 16;  /* 0C0BF50A shll16 Rn */
	r9 |= r5;  /* 0C0BF50C or Rm,Rn */
	r10 = r3 & 0xFF;  /* 0C0BF50E extu.b Rm,Rn */
	r9 |= r10;  /* 0C0BF510 or Rm,Rn */
	W32(r8 + 0x2Cu, r9); UPD(0x0C0BF514u, 6);  /* 0C0BF512 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0BF514 mov Rm,Rn */
	IF(0x0C0BF516u); PR = R32(r15); r15 += 4; UPD(0x0C0BF518u, 2);  /* 0C0BF516 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF51Au, 1);  /* 0C0BF518 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF51Cu, 1);  /* 0C0BF51A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF51Eu, 1);  /* 0C0BF51C mov.l @Rm+,Rn */
	IF(0x0C0BF51Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF51E rts */
L_0C0BF530: BLKS(0x0C0BF530u);
	r9 += 0x1u;  /* 0C0BF530 add #imm,Rn */
	r7 = 0x3u;  /* 0C0BF532 mov #imm,Rn */
	r0 = 0x0u;  /* 0C0BF534 mov #imm,Rn */
	r9 &= r7;  /* 0C0BF536 and Rm,Rn */
	W8(r2, r0); UPD(0x0C0BF53Au, 5);  /* 0C0BF538 mov.b Rm,@Rn */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BF4EEu, 3); goto L_0C0BF4EE; }  /* 0C0BF53A bra */
L_0C0BF540: BLKS(0x0C0BF540u);
	r0 = 0xC0C2360u; UPD(0x0C0BF542u, 1);  /* 0C0BF540 mov.l @(disp,pc),Rn */
	IF(0x0C0BF542u); { u32 t_ = r0; PR = 0x0C0BF546u; IF(0x0C0BF544u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BF546u); }  /* 0C0BF542 jsr @Rn */
L_0C0BF546: BLKS(0x0C0BF546u);
	r4 = 0x100u; UPD(0x0C0BF548u, 1);  /* 0C0BF546 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0BF548 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BF4EEu, 4); goto L_0C0BF4EE; }  /* 0C0BF54A bt */
L_0C0BF54C: BLKS(0x0C0BF54Cu);
	r8 += 0x30u;  /* 0C0BF54C add #imm,Rn */
	W8(r8, r9); UPD(0x0C0BF550u, 2);  /* 0C0BF54E mov.b Rm,@Rn */
	r8 += 0xFFFFFFD0u;  /* 0C0BF550 add #imm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0BF554u, 2);  /* 0C0BF552 mov.l @(disp,Rm),Rn */
	r5 += 0x1u;  /* 0C0BF554 add #imm,Rn */
	{ W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BF4EEu, 4); goto L_0C0BF4EE; }  /* 0C0BF556 bra */
}

void blk_f_0C0BF570(sh3_t *c)
{
	LOCALS;
L_0C0BF570: BLKS(0x0C0BF570u);
	r2 = 0x38u;  /* 0C0BF570 mov #imm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0BF572 exts.w Rm,Rn */
	IF(0x0C0BF574u); MACL = r1 * r2;  /* 0C0BF574 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BF578u, 5);  /* 0C0BF576 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF57Au, 1);  /* 0C0BF578 mov.l Rm,@-Rn */
	IF(0x0C0BF57Au); r3 = MACL;  /* 0C0BF57A sts macl,Rn */
	r3 += r0;  /* 0C0BF57C add Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0BF580u, 3);  /* 0C0BF57E mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x20u); UPD(0x0C0BF582u, 1);  /* 0C0BF580 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0BF582 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF58Eu, 4); goto L_0C0BF58E; } goto L_0C0BF588; }  /* 0C0BF584 bt/s */
L_0C0BF588: BLKS(0x0C0BF588u);
	r4 = 0x8000u; UPD(0x0C0BF58Au, 2);  /* 0C0BF588 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0BF58A add Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C0BF58Eu, 2);  /* 0C0BF58C mov.l Rm,@(disp,Rn) */
L_0C0BF58E: BLKS(0x0C0BF58Eu);
	r6 = R32(r3 + 0x10u); UPD(0x0C0BF590u, 1);  /* 0C0BF58E mov.l @(disp,Rm),Rn */
	r5 = 0x147FFFFu; UPD(0x0C0BF592u, 1);  /* 0C0BF590 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0BF592 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BF5A0u, 4); goto L_0C0BF5A0; } goto L_0C0BF598; }  /* 0C0BF594 bf/s */
L_0C0BF598: BLKS(0x0C0BF598u);
	W32(r3, r7); UPD(0x0C0BF59Au, 2);  /* 0C0BF598 mov.l Rm,@Rn */
L_0C0BF59A: BLKS(0x0C0BF59Au);
	r15 = r14;  /* 0C0BF59A mov Rm,Rn */
	IF(0x0C0BF59Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BF59C rts */
L_0C0BF5A0: BLKS(0x0C0BF5A0u);
	r5 = R32(r3 + 0x18u); UPD(0x0C0BF5A2u, 1);  /* 0C0BF5A0 mov.l @(disp,Rm),Rn */
	r2 = 0xC3C4048u; UPD(0x0C0BF5A4u, 1);  /* 0C0BF5A2 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0BF5A6u, 1);  /* 0C0BF5A4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3 + 0x1Cu); UPD(0x0C0BF5A8u, 1);  /* 0C0BF5A6 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C0BF5AAu, 1);  /* 0C0BF5A8 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0BF5AA add Rm,Rn */
	{ W32(r3 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BF59Au, 4); goto L_0C0BF59A; }  /* 0C0BF5AC bra */
}

/* FUN_0c0bf5c0 */
void blk_f_0C0BF5C0(sh3_t *c)
{
	LOCALS;
L_0C0BF5C0: BLKS(0x0C0BF5C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF5C2u, 1);  /* 0C0BF5C0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0BF5C2 mov #imm,Rn */
	r3 = 0x23Fu; UPD(0x0C0BF5C6u, 2);  /* 0C0BF5C4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0BF5C6 mov Rm,Rn */
	r2 = 0xC28F65Cu; UPD(0x0C0BF5CAu, 2);  /* 0C0BF5C8 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0BF5CA mov #imm,Rn */
	UPD(0x0C0BF5CCu, 1);
L_0C0BF5CC: BLKS(0x0C0BF5CCu);
	W32(r2, r7); UPD(0x0C0BF5CEu, 1);  /* 0C0BF5CC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C0BF5CE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0BF5D0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0BF5D2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF5CCu, 6); goto L_0C0BF5CC; } goto L_0C0BF5D8; }  /* 0C0BF5D4 bf/s */
L_0C0BF5D8: BLKS(0x0C0BF5D8u);
	r15 = r14;  /* 0C0BF5D8 mov Rm,Rn */
	IF(0x0C0BF5DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0BF5DA rts */
}

/* FUN_0c0bf5f0 */
void blk_f_0C0BF5F0(sh3_t *c)
{
	LOCALS;
L_0C0BF5F0: BLKS(0x0C0BF5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF5F2u, 1);  /* 0C0BF5F0 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0BF5F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF5F6u, 2);  /* 0C0BF5F4 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0BF5F6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF5FAu, 2);  /* 0C0BF5F8 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BF5FA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF5FEu, 2);  /* 0C0BF5FC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF600u, 1);  /* 0C0BF5FE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF602u, 1);  /* 0C0BF600 mov.l Rm,@-Rn */
	r0 = 0xC28610Eu; UPD(0x0C0BF604u, 1);  /* 0C0BF602 mov.l @(disp,pc),Rn */
	IF(0x0C0BF604u); r15 -= 4; W32(r15, PR); UPD(0x0C0BF606u, 1);  /* 0C0BF604 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0BF606 mov Rm,Rn */
	r2 = 0xC29CF82u; UPD(0x0C0BF60Au, 2);  /* 0C0BF608 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BF60A mov Rm,Rn */
	r10 = 0xC28F65Cu; UPD(0x0C0BF60Eu, 2);  /* 0C0BF60C mov.l @(disp,pc),Rn */
	r12 = 0xC1FFE40u; UPD(0x0C0BF610u, 1);  /* 0C0BF60E mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C0BF612u, 1);  /* 0C0BF610 mov.w Rm,@Rn */
	W16(r0, r3); UPD(0x0C0BF614u, 1);  /* 0C0BF612 mov.w Rm,@Rn */
L_0C0BF614: BLKS(0x0C0BF614u);
	r2 = r9;  /* 0C0BF614 mov Rm,Rn */
	r2 += r10;  /* 0C0BF616 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BF61Au, 3);  /* 0C0BF618 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BF61A tst Rm,Rn */
	if (!T) { UPD(0x0C0BF690u, 4); goto L_0C0BF690; }  /* 0C0BF61C bf */
L_0C0BF61E: BLKS(0x0C0BF61Eu);
	r7 = r8;  /* 0C0BF61E mov Rm,Rn */
	UPD(0x0C0BF620u, 1);
L_0C0BF620: BLKS(0x0C0BF620u);
	r7 += 0x1u;  /* 0C0BF620 add #imm,Rn */
	r6 = 0x1FFu; UPD(0x0C0BF624u, 2);  /* 0C0BF622 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0BF624 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0BF626 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF614u, 5); goto L_0C0BF614; } goto L_0C0BF62C; }  /* 0C0BF628 bf/s */
L_0C0BF62C: BLKS(0x0C0BF62Cu);
	r8 = 0x200u; UPD(0x0C0BF62Eu, 2);  /* 0C0BF62C mov.w @(disp,pc),Rn */
	r10 = 0xC28F65Cu; UPD(0x0C0BF630u, 1);  /* 0C0BF62E mov.l @(disp,pc),Rn */
	r11 = 0xC29CF82u; UPD(0x0C0BF632u, 1);  /* 0C0BF630 mov.l @(disp,pc),Rn */
	r12 = 0xC1FFE40u; UPD(0x0C0BF634u, 1);  /* 0C0BF632 mov.l @(disp,pc),Rn */
	r9 = 0x7000u; UPD(0x0C0BF636u, 1);  /* 0C0BF634 mov.w @(disp,pc),Rn */
	IF(0x0C0BF636u); ;  /* 0C0BF636 nop */
	UPD(0x0C0BF638u, 1);
L_0C0BF638: BLKS(0x0C0BF638u);
	r2 = r9;  /* 0C0BF638 mov Rm,Rn */
	r2 += r10;  /* 0C0BF63A add Rm,Rn */
	r3 = R32(r2); UPD(0x0C0BF63Eu, 3);  /* 0C0BF63C mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BF63E tst Rm,Rn */
	if (!T) { UPD(0x0C0BF670u, 4); goto L_0C0BF670; }  /* 0C0BF640 bf */
L_0C0BF642: BLKS(0x0C0BF642u);
	r4 = r8;  /* 0C0BF642 mov Rm,Rn */
	UPD(0x0C0BF644u, 1);
L_0C0BF644: BLKS(0x0C0BF644u);
	r4 += 0x1u;  /* 0C0BF644 add #imm,Rn */
	r5 = 0x23Fu; UPD(0x0C0BF648u, 2);  /* 0C0BF646 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0BF648 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C0BF64A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF638u, 5); goto L_0C0BF638; } goto L_0C0BF650; }  /* 0C0BF64C bf/s */
L_0C0BF650: BLKS(0x0C0BF650u);
	r15 = r14;  /* 0C0BF650 mov Rm,Rn */
	IF(0x0C0BF652u); PR = R32(r15); r15 += 4; UPD(0x0C0BF654u, 3);  /* 0C0BF652 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF656u, 1);  /* 0C0BF654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BF658u, 1);  /* 0C0BF656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BF65Au, 1);  /* 0C0BF658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF65Cu, 1);  /* 0C0BF65A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF65Eu, 1);  /* 0C0BF65C mov.l @Rm+,Rn */
	IF(0x0C0BF65Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF65E rts */
L_0C0BF670: BLKS(0x0C0BF670u);
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C0BF672u, 1);  /* 0C0BF670 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0BF672 add #imm,Rn */
	W16(r11, r0); UPD(0x0C0BF676u, 2);  /* 0C0BF674 mov.w Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0BF678u, 1);  /* 0C0BF676 mov.l @(disp,Rm),Rn */
	IF(0x0C0BF678u); r0 <<= 2;  /* 0C0BF678 shll2 Rn */
	IF(0x0C0BF67Au); r2 = R32(r0 + r12); UPD(0x0C0BF67Cu, 2);  /* 0C0BF67A mov.l @(r0,Rm),Rn */
	IF(0x0C0BF67Cu); { u32 t_ = r2; PR = 0x0C0BF680u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0BF680u); }  /* 0C0BF67C jsr @Rn */
L_0C0BF680: BLKS(0x0C0BF680u);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0BF644u, 3); goto L_0C0BF644; }  /* 0C0BF680 bra */
L_0C0BF690: BLKS(0x0C0BF690u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0BF692u, 1);  /* 0C0BF690 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0BF694u, 1);  /* 0C0BF692 mov.w @Rm,Rn */
	IF(0x0C0BF694u); r0 <<= 2;  /* 0C0BF694 shll2 Rn */
	r4 += 0x1u;  /* 0C0BF696 add #imm,Rn */
	IF(0x0C0BF698u); r5 = R32(r0 + r12); UPD(0x0C0BF69Au, 3);  /* 0C0BF698 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C0BF69Cu, 1);  /* 0C0BF69A mov.w Rm,@Rn */
	IF(0x0C0BF69Cu); { u32 t_ = r5; PR = 0x0C0BF6A0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0BF6A0u); }  /* 0C0BF69C jsr @Rn */
L_0C0BF6A0: BLKS(0x0C0BF6A0u);
	{ r7 = r8; /* slot mov Rm,Rn */ UPD(0x0C0BF620u, 3); goto L_0C0BF620; }  /* 0C0BF6A0 bra */
}

/* FUN_0c0bf6c0 */
void blk_f_0C0BF6C0(sh3_t *c)
{
	LOCALS;
L_0C0BF6C0: BLKS(0x0C0BF6C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF6C2u, 1);  /* 0C0BF6C0 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C0BF6C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF6C6u, 2);  /* 0C0BF6C4 mov.l Rm,@-Rn */
	r7 = 0xC28F65Cu; UPD(0x0C0BF6C8u, 1);  /* 0C0BF6C6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF6CAu, 1);  /* 0C0BF6C8 mov.l Rm,@-Rn */
	r4 = 0x40000000u; UPD(0x0C0BF6CCu, 1);  /* 0C0BF6CA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BF6CC mov Rm,Rn */
	r9 = 0xC29E93Eu; UPD(0x0C0BF6D0u, 2);  /* 0C0BF6CE mov.l @(disp,pc),Rn */
	r8 = 0xC28EDBCu; UPD(0x0C0BF6D2u, 1);  /* 0C0BF6D0 mov.l @(disp,pc),Rn */
	r5 = 0x1FFu; UPD(0x0C0BF6D4u, 1);  /* 0C0BF6D2 mov.w @(disp,pc),Rn */
L_0C0BF6D4: BLKS(0x0C0BF6D4u);
	r0 = R32(r7); UPD(0x0C0BF6D6u, 1);  /* 0C0BF6D4 mov.l @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C0BF6D6 tst Rm,Rn */
	if (T) { UPD(0x0C0BF6F8u, 4); goto L_0C0BF6F8; }  /* 0C0BF6D8 bt */
L_0C0BF6DA: BLKS(0x0C0BF6DAu);
	r7 += 0x33u;  /* 0C0BF6DA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BF6DEu, 2);  /* 0C0BF6DC mov.b @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0BF6DE and #imm,r0 */
	r0 += r0;  /* 0C0BF6E0 add Rm,Rn */
	r3 = r0;  /* 0C0BF6E2 mov Rm,Rn */
	r3 += r8;  /* 0C0BF6E4 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BF6E8u, 5);  /* 0C0BF6E6 mov.w @Rm,Rn */
	IF(0x0C0BF6E8u); r0 <<= 8;  /* 0C0BF6E8 shll8 Rn */
	r2 = r1 & 0xFFFF;  /* 0C0BF6EA extu.w Rm,Rn */
	r0 += r2;  /* 0C0BF6EC add Rm,Rn */
	r0 += r0;  /* 0C0BF6EE add Rm,Rn */
	r1 += 0x1u;  /* 0C0BF6F0 add #imm,Rn */
	IF(0x0C0BF6F2u); W16(r0 + r9, r6); UPD(0x0C0BF6F4u, 6);  /* 0C0BF6F2 mov.w Rm,@(r0,Rn) */
	r7 += 0xFFFFFFCDu;  /* 0C0BF6F4 add #imm,Rn */
	W16(r3, r1); UPD(0x0C0BF6F8u, 2);  /* 0C0BF6F6 mov.w Rm,@Rn */
L_0C0BF6F8: BLKS(0x0C0BF6F8u);
	r6 += 0x1u;  /* 0C0BF6F8 add #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0BF6FA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF6D4u, 5); goto L_0C0BF6D4; } goto L_0C0BF700; }  /* 0C0BF6FC bf/s */
L_0C0BF700: BLKS(0x0C0BF700u);
	r15 = r14;  /* 0C0BF700 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF704u, 3);  /* 0C0BF702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF706u, 1);  /* 0C0BF704 mov.l @Rm+,Rn */
	IF(0x0C0BF706u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF706 rts */
}

/* FUN_0c0bf720 */
void blk_f_0C0BF720(sh3_t *c)
{
	LOCALS;
L_0C0BF720: BLKS(0x0C0BF720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF722u, 1);  /* 0C0BF720 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C0BF722 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF726u, 2);  /* 0C0BF724 mov.l Rm,@-Rn */
	r5 = 0x3Fu;  /* 0C0BF726 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF72Au, 2);  /* 0C0BF728 mov.l Rm,@-Rn */
	r7 = 0xC29665Cu; UPD(0x0C0BF72Cu, 1);  /* 0C0BF72A mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF72Eu, 1);  /* 0C0BF72C mov.l Rm,@-Rn */
	r4 = 0x40000000u; UPD(0x0C0BF730u, 1);  /* 0C0BF72E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BF730 mov Rm,Rn */
	r9 = 0xC3C43DEu; UPD(0x0C0BF734u, 2);  /* 0C0BF732 mov.l @(disp,pc),Rn */
	r8 = 0xC2975F8u; UPD(0x0C0BF736u, 1);  /* 0C0BF734 mov.l @(disp,pc),Rn */
	IF(0x0C0BF736u); ;  /* 0C0BF736 nop */
	UPD(0x0C0BF738u, 1);
L_0C0BF738: BLKS(0x0C0BF738u);
	r0 = R32(r7); UPD(0x0C0BF73Au, 1);  /* 0C0BF738 mov.l @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C0BF73A tst Rm,Rn */
	if (T) { UPD(0x0C0BF75Eu, 4); goto L_0C0BF75E; }  /* 0C0BF73C bt */
L_0C0BF73E: BLKS(0x0C0BF73Eu);
	r7 += 0x33u;  /* 0C0BF73E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BF742u, 2);  /* 0C0BF740 mov.b @Rm,Rn */
	r10 = 0x5u;  /* 0C0BF742 mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C0BF744 and #imm,r0 */
	r0 += r0;  /* 0C0BF746 add Rm,Rn */
	r3 = r0;  /* 0C0BF748 mov Rm,Rn */
	r3 += r8;  /* 0C0BF74A add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BF74Eu, 6);  /* 0C0BF74C mov.w @Rm,Rn */
	IF(0x0C0BF74Eu); ARG0(0x40ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BF74E shld Rm,Rn */
	r2 = r1 & 0xFFFF;  /* 0C0BF750 extu.w Rm,Rn */
	r0 += r2;  /* 0C0BF752 add Rm,Rn */
	r0 += r0;  /* 0C0BF754 add Rm,Rn */
	r1 += 0x1u;  /* 0C0BF756 add #imm,Rn */
	IF(0x0C0BF758u); W16(r0 + r9, r6); UPD(0x0C0BF75Au, 6);  /* 0C0BF758 mov.w Rm,@(r0,Rn) */
	r7 += 0xFFFFFFCDu;  /* 0C0BF75A add #imm,Rn */
	W16(r3, r1); UPD(0x0C0BF75Eu, 2);  /* 0C0BF75C mov.w Rm,@Rn */
L_0C0BF75E: BLKS(0x0C0BF75Eu);
	r6 += 0x1u;  /* 0C0BF75E add #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0BF760 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF738u, 5); goto L_0C0BF738; } goto L_0C0BF766; }  /* 0C0BF762 bf/s */
L_0C0BF766: BLKS(0x0C0BF766u);
	r15 = r14;  /* 0C0BF766 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF76Au, 3);  /* 0C0BF768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF76Cu, 1);  /* 0C0BF76A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF76Eu, 1);  /* 0C0BF76C mov.l @Rm+,Rn */
	IF(0x0C0BF76Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF76E rts */
}

/* FUN_0c0bf790 */
void blk_f_0C0BF790(sh3_t *c)
{
	LOCALS;
L_0C0BF790: BLKS(0x0C0BF790u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF792u, 1);  /* 0C0BF790 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r4;  /* 0C0BF792 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF796u, 2);  /* 0C0BF794 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C0BF796 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF79Au, 2);  /* 0C0BF798 mov.l Rm,@-Rn */
	r1 = 0xAu;  /* 0C0BF79A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF79Eu, 2);  /* 0C0BF79C mov.l Rm,@-Rn */
	IF(0x0C0BF79Eu); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BF79E shld Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF7A2u, 2);  /* 0C0BF7A0 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BF7A2 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF7A6u, 2);  /* 0C0BF7A4 mov.l Rm,@-Rn */
	r10 += r10;  /* 0C0BF7A6 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF7AAu, 2);  /* 0C0BF7A8 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BF7AA mov #imm,Rn */
	r0 = 0xC29E93Eu; UPD(0x0C0BF7AEu, 2);  /* 0C0BF7AC mov.l @(disp,pc),Rn */
	IF(0x0C0BF7AEu); r15 -= 4; W32(r15, PR); UPD(0x0C0BF7B0u, 1);  /* 0C0BF7AE sts.l pr,@-Rn */
	r8 += r0;  /* 0C0BF7B0 add Rm,Rn */
	r3 = 0xC28EDBCu; UPD(0x0C0BF7B4u, 2);  /* 0C0BF7B2 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0BF7B4 mov Rm,Rn */
	IF(0x0C0BF7B6u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0BF7B8u, 2);  /* 0C0BF7B6 mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0BF7B8 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0BF7BA cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF816u, 5); goto L_0C0BF816; } goto L_0C0BF7C0; }  /* 0C0BF7BC bt/s */
L_0C0BF7C0: BLKS(0x0C0BF7C0u);
	r13 = 0xC1FFD24u; UPD(0x0C0BF7C2u, 2);  /* 0C0BF7C0 mov.l @(disp,pc),Rn */
	r12 = 0xC2289E8u; UPD(0x0C0BF7C4u, 1);  /* 0C0BF7C2 mov.l @(disp,pc),Rn */
	r11 = 0xC073B10u; UPD(0x0C0BF7C6u, 1);  /* 0C0BF7C4 mov.l @(disp,pc),Rn */
	IF(0x0C0BF7C6u); ;  /* 0C0BF7C6 nop */
	UPD(0x0C0BF7C8u, 1);
L_0C0BF7C8: BLKS(0x0C0BF7C8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r6 = v_; } UPD(0x0C0BF7CAu, 1);  /* 0C0BF7C8 mov.w @Rm+,Rn */
	r4 = 0x38u;  /* 0C0BF7CA mov #imm,Rn */
	MACL = (u32)(u16)r6 * (u32)(u16)r4;  /* 0C0BF7CC mulu.w Rm,Rn */
	r3 = 0xC28F65Cu; UPD(0x0C0BF7D0u, 4);  /* 0C0BF7CE mov.l @(disp,pc),Rn */
	IF(0x0C0BF7D0u); r2 = MACL;  /* 0C0BF7D0 sts macl,Rn */
	r2 += r3;  /* 0C0BF7D2 add Rm,Rn */
	r5 = R32(r2 + 0x4u); UPD(0x0C0BF7D6u, 3);  /* 0C0BF7D4 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0BF7D6 mov #imm,Rn */
	IF(0x0C0BF7D8u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BF7D8 shld Rm,Rn */
	r5 += r13;  /* 0C0BF7DA add Rm,Rn */
	r7 = R32(r5 + 0x4u); UPD(0x0C0BF7DEu, 4);  /* 0C0BF7DC mov.l @(disp,Rm),Rn */
	r6 = 0x4u;  /* 0C0BF7DE mov #imm,Rn */
	r0 = 0xC3C86B0u; UPD(0x0C0BF7E2u, 2);  /* 0C0BF7E0 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C0BF7E2 mov #imm,Rn */
	W32(r0, r7); UPD(0x0C0BF7E6u, 2);  /* 0C0BF7E4 mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BF7E6 add #imm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C0BF7EAu, 2);  /* 0C0BF7E8 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C0BF7EA add #imm,Rn */
	r4 = R32(r5); UPD(0x0C0BF7EEu, 2);  /* 0C0BF7EC mov.l @Rm,Rn */
	IF(0x0C0BF7EEu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BF7EE shld Rm,Rn */
	IF(0x0C0BF7F0u); r5 = R32(r0 + r4); UPD(0x0C0BF7F2u, 2);  /* 0C0BF7F0 mov.l @(r0,Rm),Rn */
	r0 = R32(r2 + 0xCu); UPD(0x0C0BF7F4u, 1);  /* 0C0BF7F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BF7F4u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BF7F4 shld Rm,Rn */
	IF(0x0C0BF7F6u); r3 = R32(r0 + r5); UPD(0x0C0BF7F8u, 2);  /* 0C0BF7F6 mov.l @(r0,Rm),Rn */
	W32(r12, r3); UPD(0x0C0BF7FAu, 1);  /* 0C0BF7F8 mov.l Rm,@Rn */
	r4 = R32(r2 + 0x28u); UPD(0x0C0BF7FCu, 1);  /* 0C0BF7FA mov.l @(disp,Rm),Rn */
	r6 = R32(r2 + 0x14u); UPD(0x0C0BF7FEu, 1);  /* 0C0BF7FC mov.l @(disp,Rm),Rn */
	r7 = R32(r2 + 0x2Cu); UPD(0x0C0BF800u, 1);  /* 0C0BF7FE mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x10u); UPD(0x0C0BF802u, 1);  /* 0C0BF800 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0BF802 mov #imm,Rn */
	IF(0x0C0BF804u); { u32 t_ = r11; PR = 0x0C0BF808u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0BF808u); }  /* 0C0BF804 jsr @Rn */
L_0C0BF808: BLKS(0x0C0BF808u);
	r7 = 0xC28EDBCu; UPD(0x0C0BF80Au, 1);  /* 0C0BF808 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0BF80A mov Rm,Rn */
	IF(0x0C0BF80Cu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0BF80Eu, 2);  /* 0C0BF80C mov.w @(r0,Rm),Rn */
	r4 = r6 & 0xFFFF;  /* 0C0BF80E extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r4;  /* 0C0BF810 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF7C8u, 5); goto L_0C0BF7C8; } UPD(0x0C0BF816u, 1); goto L_0C0BF816; }  /* 0C0BF812 bf/s */
L_0C0BF816: BLKS(0x0C0BF816u);
	r15 = r14;  /* 0C0BF816 mov Rm,Rn */
	IF(0x0C0BF818u); PR = R32(r15); r15 += 4; UPD(0x0C0BF81Au, 2);  /* 0C0BF818 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF81Cu, 1);  /* 0C0BF81A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BF81Eu, 1);  /* 0C0BF81C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BF820u, 1);  /* 0C0BF81E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BF822u, 1);  /* 0C0BF820 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF824u, 1);  /* 0C0BF822 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF826u, 1);  /* 0C0BF824 mov.l @Rm+,Rn */
	IF(0x0C0BF826u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF826 rts */
}

/* FUN_0c0bf850 */
void blk_f_0C0BF850(sh3_t *c)
{
	LOCALS;
L_0C0BF850: BLKS(0x0C0BF850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF852u, 1);  /* 0C0BF850 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r4;  /* 0C0BF852 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF856u, 2);  /* 0C0BF854 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C0BF856 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF85Au, 2);  /* 0C0BF858 mov.l Rm,@-Rn */
	r1 = 0x7u;  /* 0C0BF85A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF85Eu, 2);  /* 0C0BF85C mov.l Rm,@-Rn */
	IF(0x0C0BF85Eu); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BF85E shld Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF862u, 2);  /* 0C0BF860 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BF862 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF866u, 2);  /* 0C0BF864 mov.l Rm,@-Rn */
	r10 += r10;  /* 0C0BF866 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BF86Au, 2);  /* 0C0BF868 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BF86A mov #imm,Rn */
	r0 = 0xC3C43DEu; UPD(0x0C0BF86Eu, 2);  /* 0C0BF86C mov.l @(disp,pc),Rn */
	IF(0x0C0BF86Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0BF870u, 1);  /* 0C0BF86E sts.l pr,@-Rn */
	r8 += r0;  /* 0C0BF870 add Rm,Rn */
	r3 = 0xC2975F8u; UPD(0x0C0BF874u, 2);  /* 0C0BF872 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0BF874 mov Rm,Rn */
	IF(0x0C0BF876u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0BF878u, 2);  /* 0C0BF876 mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0BF878 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0BF87A cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BF8D6u, 5); goto L_0C0BF8D6; } goto L_0C0BF880; }  /* 0C0BF87C bt/s */
L_0C0BF880: BLKS(0x0C0BF880u);
	r13 = 0xC1FFD24u; UPD(0x0C0BF882u, 2);  /* 0C0BF880 mov.l @(disp,pc),Rn */
	r12 = 0xC2289E8u; UPD(0x0C0BF884u, 1);  /* 0C0BF882 mov.l @(disp,pc),Rn */
	r11 = 0xC073B10u; UPD(0x0C0BF886u, 1);  /* 0C0BF884 mov.l @(disp,pc),Rn */
	IF(0x0C0BF886u); ;  /* 0C0BF886 nop */
	UPD(0x0C0BF888u, 1);
L_0C0BF888: BLKS(0x0C0BF888u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r6 = v_; } UPD(0x0C0BF88Au, 1);  /* 0C0BF888 mov.w @Rm+,Rn */
	r4 = 0x38u;  /* 0C0BF88A mov #imm,Rn */
	MACL = (u32)(u16)r6 * (u32)(u16)r4;  /* 0C0BF88C mulu.w Rm,Rn */
	r3 = 0xC29665Cu; UPD(0x0C0BF890u, 4);  /* 0C0BF88E mov.l @(disp,pc),Rn */
	IF(0x0C0BF890u); r4 = MACL;  /* 0C0BF890 sts macl,Rn */
	r4 += r3;  /* 0C0BF892 add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C0BF896u, 3);  /* 0C0BF894 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0BF896 mov #imm,Rn */
	IF(0x0C0BF898u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BF898 shld Rm,Rn */
	r5 += r13;  /* 0C0BF89A add Rm,Rn */
	r2 = R32(r5 + 0x4u); UPD(0x0C0BF89Eu, 4);  /* 0C0BF89C mov.l @(disp,Rm),Rn */
	r7 = 0x4u;  /* 0C0BF89E mov #imm,Rn */
	r0 = 0xC3C86B0u; UPD(0x0C0BF8A2u, 2);  /* 0C0BF8A0 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C0BF8A2 mov #imm,Rn */
	W32(r0, r2); UPD(0x0C0BF8A6u, 2);  /* 0C0BF8A4 mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BF8A6 add #imm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0BF8AAu, 2);  /* 0C0BF8A8 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0BF8AA mov #imm,Rn */
	r6 = R32(r5); UPD(0x0C0BF8AEu, 2);  /* 0C0BF8AC mov.l @Rm,Rn */
	IF(0x0C0BF8AEu); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BF8AE shld Rm,Rn */
	IF(0x0C0BF8B0u); r5 = R32(r0 + r6); UPD(0x0C0BF8B2u, 2);  /* 0C0BF8B0 mov.l @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0BF8B2 add #imm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C0BF8B6u, 2);  /* 0C0BF8B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0BF8B6u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BF8B6 shld Rm,Rn */
	IF(0x0C0BF8B8u); r3 = R32(r0 + r5); UPD(0x0C0BF8BAu, 2);  /* 0C0BF8B8 mov.l @(r0,Rm),Rn */
	W32(r12, r3); UPD(0x0C0BF8BCu, 1);  /* 0C0BF8BA mov.l Rm,@Rn */
	r6 = R32(r4 + 0x14u); UPD(0x0C0BF8BEu, 1);  /* 0C0BF8BC mov.l @(disp,Rm),Rn */
	r7 = R32(r4 + 0x2Cu); UPD(0x0C0BF8C0u, 1);  /* 0C0BF8BE mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x10u); UPD(0x0C0BF8C2u, 1);  /* 0C0BF8C0 mov.l @(disp,Rm),Rn */
	W32(r15, r2); UPD(0x0C0BF8C4u, 1);  /* 0C0BF8C2 mov.l Rm,@Rn */
	IF(0x0C0BF8C4u); { u32 t_ = r11; PR = 0x0C0BF8C8u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0BF8C8u); }  /* 0C0BF8C4 jsr @Rn */
L_0C0BF8C8: BLKS(0x0C0BF8C8u);
	r7 = 0xC2975F8u; UPD(0x0C0BF8CAu, 1);  /* 0C0BF8C8 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0BF8CA mov Rm,Rn */
	IF(0x0C0BF8CCu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0BF8CEu, 2);  /* 0C0BF8CC mov.w @(r0,Rm),Rn */
	r4 = r6 & 0xFFFF;  /* 0C0BF8CE extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r4;  /* 0C0BF8D0 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BF888u, 5); goto L_0C0BF888; } UPD(0x0C0BF8D6u, 1); goto L_0C0BF8D6; }  /* 0C0BF8D2 bf/s */
L_0C0BF8D6: BLKS(0x0C0BF8D6u);
	r15 = r14;  /* 0C0BF8D6 mov Rm,Rn */
	IF(0x0C0BF8D8u); PR = R32(r15); r15 += 4; UPD(0x0C0BF8DAu, 2);  /* 0C0BF8D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BF8DCu, 1);  /* 0C0BF8DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BF8DEu, 1);  /* 0C0BF8DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BF8E0u, 1);  /* 0C0BF8DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BF8E2u, 1);  /* 0C0BF8E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BF8E4u, 1);  /* 0C0BF8E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BF8E6u, 1);  /* 0C0BF8E4 mov.l @Rm+,Rn */
	IF(0x0C0BF8E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BF8E6 rts */
}

/* FUN_0c0bfa40 */
void blk_f_0C0BFA40(sh3_t *c)
{
	LOCALS;
L_0C0BFA40: BLKS(0x0C0BFA40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA42u, 1);  /* 0C0BFA40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA44u, 1);  /* 0C0BFA42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA46u, 1);  /* 0C0BFA44 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BFA46 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA4Au, 2);  /* 0C0BFA48 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0BFA4A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA4Eu, 2);  /* 0C0BFA4C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0BFA4E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA52u, 2);  /* 0C0BFA50 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFA54u, 1);  /* 0C0BFA52 mov.l Rm,@-Rn */
	IF(0x0C0BFA54u); r15 -= 4; W32(r15, PR); UPD(0x0C0BFA56u, 1);  /* 0C0BFA54 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BFA56 add #imm,Rn */
	r14 = r15;  /* 0C0BFA58 mov Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0BFA5Cu, 3);  /* 0C0BFA5A mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BFA5C exts.b Rm,Rn */
	W32(r14, r0); UPD(0x0C0BFA60u, 2);  /* 0C0BFA5E mov.l Rm,@Rn */
	r3 = R32(r14 + 0x24u); UPD(0x0C0BFA62u, 1);  /* 0C0BFA60 mov.l @(disp,Rm),Rn */
	r0 = r5;  /* 0C0BFA62 mov Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BFA66u, 2);  /* 0C0BFA64 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)r3;  /* 0C0BFA66 exts.b Rm,Rn */
	IF(0x0C0BFA68u); r0 <<= 2;  /* 0C0BFA68 shll2 Rn */
	IF(0x0C0BFA6Au); r3 = R32(r0 + r2); UPD(0x0C0BFA6Cu, 3);  /* 0C0BFA6A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BFA6Eu, 1);  /* 0C0BFA6C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BFA6E add Rm,Rn */
	IF(0x0C0BFA70u); T = (s32)r2 >= 0;  /* 0C0BFA70 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BFB50u, 5); goto L_0C0BFB50; } UPD(0x0C0BFA76u, 1); goto L_0C0BFA76; }  /* 0C0BFA72 bf/s */
L_0C0BFA76: BLKS(0x0C0BFA76u);
	r4 = 0xA00000u; UPD(0x0C0BFA78u, 1);  /* 0C0BFA76 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0BFA78 add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0BFA7A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFA98u, 5); goto L_0C0BFA98; } goto L_0C0BFA80; }  /* 0C0BFA7C bt/s */
L_0C0BFA80: BLKS(0x0C0BFA80u);
	r7 = 0xC3C4048u; UPD(0x0C0BFA82u, 2);  /* 0C0BFA80 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BFA82 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0BFA86u, 2);  /* 0C0BFA84 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BFA88u, 1);  /* 0C0BFA86 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BFA88 sub Rm,Rn */
	r2 += r5;  /* 0C0BFA8A add Rm,Rn */
	IF(0x0C0BFA8Cu); T = (s32)r2 >= 0;  /* 0C0BFA8C cmp/pz Rn */
	if (!T) { UPD(0x0C0BFB40u, 6); goto L_0C0BFB40; }  /* 0C0BFA8E bf */
L_0C0BFA90: BLKS(0x0C0BFA90u);
	r8 = 0x780000u; UPD(0x0C0BFA92u, 1);  /* 0C0BFA90 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0BFA92 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BFA94 cmp/ge Rm,Rn */
	IF(0x0C0BFA96u); r1 = T;  /* 0C0BFA96 movt Rn */
	UPD(0x0C0BFA98u, 3);
L_0C0BFA98: BLKS(0x0C0BFA98u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0BFA98 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BFA9A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFAC0u, 5); goto L_0C0BFAC0; } UPD(0x0C0BFAA0u, 1); goto L_0C0BFAA0; }  /* 0C0BFA9C bt/s */
L_0C0BFAA0: BLKS(0x0C0BFAA0u);
	r14 += 0x4u;  /* 0C0BFAA0 add #imm,Rn */
	UPD(0x0C0BFAA2u, 1);
L_0C0BFAA2: BLKS(0x0C0BFAA2u);
	r15 = r14;  /* 0C0BFAA2 mov Rm,Rn */
	IF(0x0C0BFAA4u); PR = R32(r15); r15 += 4; UPD(0x0C0BFAA6u, 2);  /* 0C0BFAA4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BFAA8u, 1);  /* 0C0BFAA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BFAAAu, 1);  /* 0C0BFAA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BFAACu, 1);  /* 0C0BFAAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BFAAEu, 1);  /* 0C0BFAAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BFAB0u, 1);  /* 0C0BFAAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BFAB2u, 1);  /* 0C0BFAB0 mov.l @Rm+,Rn */
	IF(0x0C0BFAB2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BFAB2 rts */
L_0C0BFAC0: BLKS(0x0C0BFAC0u);
	r0 = 0xC0BCA00u; UPD(0x0C0BFAC2u, 1);  /* 0C0BFAC0 mov.l @(disp,pc),Rn */
	IF(0x0C0BFAC2u); { u32 t_ = r0; PR = 0x0C0BFAC6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BFAC6u); }  /* 0C0BFAC2 jsr @Rn */
L_0C0BFAC6: BLKS(0x0C0BFAC6u);
	T = (r0 & r0) == 0;  /* 0C0BFAC6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFAA0u, 4); goto L_0C0BFAA0; } goto L_0C0BFACC; }  /* 0C0BFAC8 bt/s */
L_0C0BFACC: BLKS(0x0C0BFACCu);
	r2 = 0xC28EDFCu; UPD(0x0C0BFACEu, 2);  /* 0C0BFACC mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0BFACE mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BFAD2u, 2);  /* 0C0BFAD0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BFAD2 mov #imm,Rn */
	IF(0x0C0BFAD4u); MACL = r7 * r6;  /* 0C0BFAD4 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BFAD8u, 4);  /* 0C0BFAD6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0BFAD8 and Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0BFADCu, 2);  /* 0C0BFADA mov.l @(disp,pc),Rn */
	IF(0x0C0BFADCu); r3 = MACL;  /* 0C0BFADC sts macl,Rn */
	r3 += r5;  /* 0C0BFADE add Rm,Rn */
	r0 |= r10;  /* 0C0BFAE0 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0BFAE4u, 4);  /* 0C0BFAE2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0BFAE6u, 1);  /* 0C0BFAE4 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0BFAE6 mov #imm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0BFAEAu, 2);  /* 0C0BFAE8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0BFAEA add Rm,Rn */
	W32(r3 + 0x14u, r12); UPD(0x0C0BFAEEu, 2);  /* 0C0BFAEC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0BFAF0u, 1);  /* 0C0BFAEE mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r8); UPD(0x0C0BFAF2u, 1);  /* 0C0BFAF0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0BFAF4u, 1);  /* 0C0BFAF2 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0BFAF6u, 1);  /* 0C0BFAF4 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0BFAF6 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0BFAFAu, 2);  /* 0C0BFAF8 mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0BFAFA add #imm,Rn */
	W8(r3, r13); UPD(0x0C0BFAFEu, 2);  /* 0C0BFAFC mov.b Rm,@Rn */
	IF(0x0C0BFAFEu); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BFB00u, 1);  /* 0C0BFAFE mov.b @(r0,Rm),Rn */
	r12 = 0xC0C2360u; UPD(0x0C0BFB02u, 1);  /* 0C0BFB00 mov.l @(disp,pc),Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0BFB04u, 1);  /* 0C0BFB02 mov.b Rm,@-Rn */
	r1 = 0x808080u; UPD(0x0C0BFB06u, 1);  /* 0C0BFB04 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0BFB06 add #imm,Rn */
	r11 = 0xC1FFF40u; UPD(0x0C0BFB0Au, 2);  /* 0C0BFB08 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0BFB0Cu, 1);  /* 0C0BFB0A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0BFB0C add Rm,Rn */
	IF(0x0C0BFB0Eu); { u32 t_ = r12; PR = 0x0C0BFB12u; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BFB12u); }  /* 0C0BFB0E jsr @Rn */
L_0C0BFB12: BLKS(0x0C0BFB12u);
	r0 &= 0x1u;  /* 0C0BFB12 and #imm,r0 */
	IF(0x0C0BFB14u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0BFB16u, 2);  /* 0C0BFB14 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0BFB16 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0BFB18 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0BFB1A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BFB30u, 6); goto L_0C0BFB30; }  /* 0C0BFB1C bt */
L_0C0BFB1E: BLKS(0x0C0BFB1Eu);
	r0 = 0x1u;  /* 0C0BFB1E mov #imm,Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0BFAA2u, 4); goto L_0C0BFAA2; }  /* 0C0BFB20 bra */
L_0C0BFB30: BLKS(0x0C0BFB30u);
	r8 = 0xC0C2110u; UPD(0x0C0BFB32u, 1);  /* 0C0BFB30 mov.l @(disp,pc),Rn */
	IF(0x0C0BFB32u); { u32 t_ = r8; PR = 0x0C0BFB36u; IF(0x0C0BFB34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BFB36u); }  /* 0C0BFB32 jsr @Rn */
L_0C0BFB36: BLKS(0x0C0BFB36u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BFAA0u, 3); goto L_0C0BFAA0; }  /* 0C0BFB36 bra */
L_0C0BFB40: BLKS(0x0C0BFB40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFA90u, 3); goto L_0C0BFA90; }  /* 0C0BFB40 bra */
L_0C0BFB50: BLKS(0x0C0BFB50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFA76u, 3); goto L_0C0BFA76; }  /* 0C0BFB50 bra */
}

void blk_f_0C0BFB90(sh3_t *c)
{
	LOCALS;
L_0C0BFB90: BLKS(0x0C0BFB90u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0BFB90 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0BFB92 mov #imm,Rn */
	IF(0x0C0BFB94u); MACL = r1 * r3;  /* 0C0BFB94 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BFB98u, 5);  /* 0C0BFB96 mov.l @(disp,pc),Rn */
	r0 = 0x4Cu;  /* 0C0BFB98 mov #imm,Rn */
	IF(0x0C0BFB9Au); r3 = MACL;  /* 0C0BFB9A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFB9Eu, 3);  /* 0C0BFB9C mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0BFB9E add Rm,Rn */
	r3 += 0x34u;  /* 0C0BFBA0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BFBA4u, 3);  /* 0C0BFBA2 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0BFBA4 mov Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C0BFBA6 extu.b Rm,Rn */
	IF(0x0C0BFBA8u); MACL = r2 * r0;  /* 0C0BFBA8 mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0BFBACu, 5);  /* 0C0BFBAA mov.l @(disp,pc),Rn */
	IF(0x0C0BFBACu); r0 = MACL;  /* 0C0BFBAC sts macl,Rn */
	IF(0x0C0BFBAEu); r1 = R32(r0 + r2); UPD(0x0C0BFBB0u, 2);  /* 0C0BFBAE mov.l @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0BFBB0 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BFBB8u, 4); goto L_0C0BFBB8; } goto L_0C0BFBB6; }  /* 0C0BFBB2 bf/s */
L_0C0BFBB6: BLKS(0x0C0BFBB6u);
	W32(r3, r1); UPD(0x0C0BFBB8u, 2);  /* 0C0BFBB6 mov.l Rm,@Rn */
L_0C0BFBB8: BLKS(0x0C0BFBB8u);
	r6 = r3;  /* 0C0BFBB8 mov Rm,Rn */
	r6 += 0x30u;  /* 0C0BFBBA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0BFBBEu, 3);  /* 0C0BFBBC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0BFBBE add #imm,Rn */
	W8(r6, r0); UPD(0x0C0BFBC2u, 2);  /* 0C0BFBC0 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C0BFBC2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BFBC4 tst Rm,Rn */
	if (!T) { UPD(0x0C0BFBD0u, 5); goto L_0C0BFBD0; }  /* 0C0BFBC6 bf */
L_0C0BFBC8: BLKS(0x0C0BFBC8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BFBCAu, 1);  /* 0C0BFBC8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0BFBCA add #imm,Rn */
	r0 &= 0x3u;  /* 0C0BFBCC and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0BFBD0u, 3);  /* 0C0BFBCE mov.l Rm,@(disp,Rn) */
L_0C0BFBD0: BLKS(0x0C0BFBD0u);
	r2 = 0xC3C43C4u; UPD(0x0C0BFBD2u, 1);  /* 0C0BFBD0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BFBD4u, 1);  /* 0C0BFBD2 mov.b @Rm,Rn */
	r4 = 0xC29D736u; UPD(0x0C0BFBD6u, 1);  /* 0C0BFBD4 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C0BFBD6 extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0BFBDAu, 2);  /* 0C0BFBD8 mov.b @Rm,Rn */
	IF(0x0C0BFBDAu); r7 <<= 16;  /* 0C0BFBDA shll16 Rn */
	r5 = 0xC3C4171u; UPD(0x0C0BFBDEu, 2);  /* 0C0BFBDC mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C0BFBDE extu.b Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0BFBE2u, 2);  /* 0C0BFBE0 mov.b @Rm,Rn */
	IF(0x0C0BFBE2u); r6 <<= 8;  /* 0C0BFBE2 shll8 Rn */
	r7 |= r6;  /* 0C0BFBE4 or Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0BFBE6 extu.b Rm,Rn */
	r7 |= r0;  /* 0C0BFBE8 or Rm,Rn */
	W32(r3 + 0x2Cu, r7); UPD(0x0C0BFBECu, 5);  /* 0C0BFBEA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0BFBEC mov Rm,Rn */
	IF(0x0C0BFBEEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BFBEE rts */
}

void blk_f_0C0BFC10(sh3_t *c)
{
	LOCALS;
L_0C0BFC10: BLKS(0x0C0BFC10u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0BFC10 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0BFC12 mov #imm,Rn */
	IF(0x0C0BFC14u); MACL = r1 * r3;  /* 0C0BFC14 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BFC18u, 5);  /* 0C0BFC16 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFC1Au, 1);  /* 0C0BFC18 mov.l Rm,@-Rn */
	IF(0x0C0BFC1Au); r3 = MACL;  /* 0C0BFC1A sts macl,Rn */
	r3 += r0;  /* 0C0BFC1C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0BFC20u, 3);  /* 0C0BFC1E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BFC20 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BFC24u, 2);  /* 0C0BFC22 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0BFC26u, 1);  /* 0C0BFC24 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0BFC28u, 1);  /* 0C0BFC26 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0BFC28 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BFC2Cu, 2);  /* 0C0BFC2A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0BFC2C add Rm,Rn */
	r7 += r0;  /* 0C0BFC2E add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0BFC32u, 3);  /* 0C0BFC30 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFC32u); T = (s32)r7 >= 0;  /* 0C0BFC32 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BFC70u, 4); goto L_0C0BFC70; } UPD(0x0C0BFC38u, 1); goto L_0C0BFC38; }  /* 0C0BFC34 bf/s */
L_0C0BFC38: BLKS(0x0C0BFC38u);
	r5 = 0xA00000u; UPD(0x0C0BFC3Au, 1);  /* 0C0BFC38 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0BFC3A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFC58u, 4); goto L_0C0BFC58; } goto L_0C0BFC40; }  /* 0C0BFC3C bt/s */
L_0C0BFC40: BLKS(0x0C0BFC40u);
	r2 = 0xC3C4048u; UPD(0x0C0BFC42u, 2);  /* 0C0BFC40 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0BFC44u, 1);  /* 0C0BFC42 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0BFC44 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BFC48u, 2);  /* 0C0BFC46 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BFC48 sub Rm,Rn */
	r2 += r6;  /* 0C0BFC4A add Rm,Rn */
	IF(0x0C0BFC4Cu); T = (s32)r2 >= 0;  /* 0C0BFC4C cmp/pz Rn */
	if (!T) { UPD(0x0C0BFC60u, 6); goto L_0C0BFC60; }  /* 0C0BFC4E bf */
L_0C0BFC50: BLKS(0x0C0BFC50u);
	r4 = 0x780000u; UPD(0x0C0BFC52u, 1);  /* 0C0BFC50 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BFC52 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFC5Au, 4); goto L_0C0BFC5A; } UPD(0x0C0BFC58u, 1); goto L_0C0BFC58; }  /* 0C0BFC54 bf/s */
L_0C0BFC58: BLKS(0x0C0BFC58u);
	W32(r3, r0); UPD(0x0C0BFC5Au, 1);  /* 0C0BFC58 mov.l Rm,@Rn */
L_0C0BFC5A: BLKS(0x0C0BFC5Au);
	r15 = r14;  /* 0C0BFC5A mov Rm,Rn */
	IF(0x0C0BFC5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BFC5C rts */
L_0C0BFC60: BLKS(0x0C0BFC60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFC50u, 3); goto L_0C0BFC50; }  /* 0C0BFC60 bra */
L_0C0BFC70: BLKS(0x0C0BFC70u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BFC38u, 3); goto L_0C0BFC38; }  /* 0C0BFC70 bra */
}

void blk_f_0C0BFC90(sh3_t *c)
{
	LOCALS;
L_0C0BFC90: BLKS(0x0C0BFC90u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0BFC90 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0BFC92 mov #imm,Rn */
	IF(0x0C0BFC94u); MACL = r1 * r3;  /* 0C0BFC94 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BFC98u, 5);  /* 0C0BFC96 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFC9Au, 1);  /* 0C0BFC98 mov.l Rm,@-Rn */
	IF(0x0C0BFC9Au); r3 = MACL;  /* 0C0BFC9A sts macl,Rn */
	r3 += r0;  /* 0C0BFC9C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0BFCA0u, 3);  /* 0C0BFC9E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BFCA0 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BFCA4u, 2);  /* 0C0BFCA2 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0BFCA6u, 1);  /* 0C0BFCA4 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0BFCA8u, 1);  /* 0C0BFCA6 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0BFCA8 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BFCACu, 2);  /* 0C0BFCAA mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0BFCAC add Rm,Rn */
	r7 += r0;  /* 0C0BFCAE add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0BFCB2u, 3);  /* 0C0BFCB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFCB2u); T = (s32)r7 >= 0;  /* 0C0BFCB2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BFD10u, 4); goto L_0C0BFD10; } UPD(0x0C0BFCB8u, 1); goto L_0C0BFCB8; }  /* 0C0BFCB4 bf/s */
L_0C0BFCB8: BLKS(0x0C0BFCB8u);
	r5 = 0xA00000u; UPD(0x0C0BFCBAu, 1);  /* 0C0BFCB8 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0BFCBA cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFCF2u, 4); goto L_0C0BFCF2; } goto L_0C0BFCC0; }  /* 0C0BFCBC bt/s */
L_0C0BFCC0: BLKS(0x0C0BFCC0u);
	r2 = 0xC3C4048u; UPD(0x0C0BFCC2u, 2);  /* 0C0BFCC0 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0BFCC4u, 1);  /* 0C0BFCC2 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0BFCC4 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BFCC8u, 2);  /* 0C0BFCC6 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BFCC8 sub Rm,Rn */
	r2 += r6;  /* 0C0BFCCA add Rm,Rn */
	IF(0x0C0BFCCCu); T = (s32)r2 >= 0;  /* 0C0BFCCC cmp/pz Rn */
	if (!T) { UPD(0x0C0BFD00u, 6); goto L_0C0BFD00; }  /* 0C0BFCCE bf */
L_0C0BFCD0: BLKS(0x0C0BFCD0u);
	r4 = 0x780000u; UPD(0x0C0BFCD2u, 1);  /* 0C0BFCD0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BFCD2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFCF2u, 4); goto L_0C0BFCF2; } goto L_0C0BFCD8; }  /* 0C0BFCD4 bt/s */
L_0C0BFCD8: BLKS(0x0C0BFCD8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BFCDAu, 2);  /* 0C0BFCD8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0BFCDA add #imm,Rn */
	T = r0 == 0x8u;  /* 0C0BFCDC cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BFCF0u, 5); goto L_0C0BFCF0; } UPD(0x0C0BFCE2u, 1); goto L_0C0BFCE2; }  /* 0C0BFCDE bt/s */
L_0C0BFCE2: BLKS(0x0C0BFCE2u);
	r15 = r14;  /* 0C0BFCE2 mov Rm,Rn */
	IF(0x0C0BFCE4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BFCE4 rts */
L_0C0BFCF0: BLKS(0x0C0BFCF0u);
	r0 = 0x0u;  /* 0C0BFCF0 mov #imm,Rn */
	UPD(0x0C0BFCF2u, 1);
L_0C0BFCF2: BLKS(0x0C0BFCF2u);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0BFCE2u, 3); goto L_0C0BFCE2; }  /* 0C0BFCF2 bra */
L_0C0BFD00: BLKS(0x0C0BFD00u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFCD0u, 3); goto L_0C0BFCD0; }  /* 0C0BFD00 bra */
L_0C0BFD10: BLKS(0x0C0BFD10u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BFCB8u, 3); goto L_0C0BFCB8; }  /* 0C0BFD10 bra */
}

/* FUN_0c0bfd30 */
void blk_f_0C0BFD30(sh3_t *c)
{
	LOCALS;
L_0C0BFD30: BLKS(0x0C0BFD30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD32u, 1);  /* 0C0BFD30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD34u, 1);  /* 0C0BFD32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD36u, 1);  /* 0C0BFD34 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BFD36 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD3Au, 2);  /* 0C0BFD38 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0BFD3A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD3Eu, 2);  /* 0C0BFD3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD40u, 1);  /* 0C0BFD3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFD42u, 1);  /* 0C0BFD40 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0BFD42 mov Rm,Rn */
	IF(0x0C0BFD44u); r15 -= 4; W32(r15, PR); UPD(0x0C0BFD46u, 2);  /* 0C0BFD44 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BFD46 add #imm,Rn */
	r14 = r15;  /* 0C0BFD48 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0BFD4Cu, 3);  /* 0C0BFD4A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0BFD4Eu, 1);  /* 0C0BFD4C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BFD4E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0BFD52u, 2);  /* 0C0BFD50 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BFD52 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BFD56u, 2);  /* 0C0BFD54 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BFD56 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0BFD5Au, 2);  /* 0C0BFD58 mov.l Rm,@Rn */
	IF(0x0C0BFD5Au); r0 <<= 2;  /* 0C0BFD5A shll2 Rn */
	IF(0x0C0BFD5Cu); r3 = R32(r0 + r2); UPD(0x0C0BFD5Eu, 2);  /* 0C0BFD5C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BFD60u, 1);  /* 0C0BFD5E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BFD60 add Rm,Rn */
	IF(0x0C0BFD62u); T = (s32)r2 >= 0;  /* 0C0BFD62 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BFE30u, 5); goto L_0C0BFE30; } UPD(0x0C0BFD68u, 1); goto L_0C0BFD68; }  /* 0C0BFD64 bf/s */
L_0C0BFD68: BLKS(0x0C0BFD68u);
	r5 = 0xA00000u; UPD(0x0C0BFD6Au, 1);  /* 0C0BFD68 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BFD6A add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BFD6C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFD8Au, 5); goto L_0C0BFD8A; } goto L_0C0BFD72; }  /* 0C0BFD6E bt/s */
L_0C0BFD72: BLKS(0x0C0BFD72u);
	r8 = 0xC3C4048u; UPD(0x0C0BFD74u, 2);  /* 0C0BFD72 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BFD74 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0BFD78u, 2);  /* 0C0BFD76 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BFD7Au, 1);  /* 0C0BFD78 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BFD7A sub Rm,Rn */
	r2 += r6;  /* 0C0BFD7C add Rm,Rn */
	IF(0x0C0BFD7Eu); T = (s32)r2 >= 0;  /* 0C0BFD7E cmp/pz Rn */
	if (!T) { UPD(0x0C0BFE20u, 6); goto L_0C0BFE20; }  /* 0C0BFD80 bf */
L_0C0BFD82: BLKS(0x0C0BFD82u);
	r11 = 0x780000u; UPD(0x0C0BFD84u, 1);  /* 0C0BFD82 mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C0BFD84 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BFD86 cmp/ge Rm,Rn */
	IF(0x0C0BFD88u); r1 = T;  /* 0C0BFD88 movt Rn */
	UPD(0x0C0BFD8Au, 3);
L_0C0BFD8A: BLKS(0x0C0BFD8Au);
	r11 = (u32)(s32)(s16)r1;  /* 0C0BFD8A exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0BFD8C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFDB0u, 5); goto L_0C0BFDB0; } UPD(0x0C0BFD92u, 1); goto L_0C0BFD92; }  /* 0C0BFD8E bt/s */
L_0C0BFD92: BLKS(0x0C0BFD92u);
	r14 += 0x8u;  /* 0C0BFD92 add #imm,Rn */
	r15 = r14;  /* 0C0BFD94 mov Rm,Rn */
	IF(0x0C0BFD96u); PR = R32(r15); r15 += 4; UPD(0x0C0BFD98u, 3);  /* 0C0BFD96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BFD9Au, 1);  /* 0C0BFD98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BFD9Cu, 1);  /* 0C0BFD9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BFD9Eu, 1);  /* 0C0BFD9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BFDA0u, 1);  /* 0C0BFD9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BFDA2u, 1);  /* 0C0BFDA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BFDA4u, 1);  /* 0C0BFDA2 mov.l @Rm+,Rn */
	IF(0x0C0BFDA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BFDA4 rts */
L_0C0BFDB0: BLKS(0x0C0BFDB0u);
	r8 = 0xC0BD6F0u; UPD(0x0C0BFDB2u, 1);  /* 0C0BFDB0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BFDB2 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0BFDB6u, 2);  /* 0C0BFDB4 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0BFDB6 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BFDBAu, 2);  /* 0C0BFDB8 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0BFDBA mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0BFDBEu, 2);  /* 0C0BFDBC mov.l Rm,@Rn */
	r6 = r10;  /* 0C0BFDBE mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0BFDC2u, 2);  /* 0C0BFDC0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFDC2u); { u32 t_ = r8; PR = 0x0C0BFDC6u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0BFDC6u); }  /* 0C0BFDC2 jsr @Rn */
L_0C0BFDC6: BLKS(0x0C0BFDC6u);
	r8 = 0xC0BCA00u; UPD(0x0C0BFDC8u, 1);  /* 0C0BFDC6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0BFDC8 add #imm,Rn */
	IF(0x0C0BFDCAu); { u32 t_ = r8; PR = 0x0C0BFDCEu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BFDCEu); }  /* 0C0BFDCA jsr @Rn */
L_0C0BFDCE: BLKS(0x0C0BFDCEu);
	T = (r0 & r0) == 0;  /* 0C0BFDCE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFD92u, 4); goto L_0C0BFD92; } goto L_0C0BFDD4; }  /* 0C0BFDD0 bt/s */
L_0C0BFDD4: BLKS(0x0C0BFDD4u);
	r8 = 0xC28EDFCu; UPD(0x0C0BFDD6u, 2);  /* 0C0BFDD4 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0BFDD6 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BFDDAu, 2);  /* 0C0BFDD8 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0BFDDA mov #imm,Rn */
	IF(0x0C0BFDDCu); MACL = r7 * r6;  /* 0C0BFDDC mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0BFDE0u, 4);  /* 0C0BFDDE mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0BFDE0 and Rm,Rn */
	IF(0x0C0BFDE2u); r8 = MACL;  /* 0C0BFDE2 sts macl,Rn */
	r8 += r5;  /* 0C0BFDE4 add Rm,Rn */
	W32(r8 + 0x14u, r12); UPD(0x0C0BFDE8u, 4);  /* 0C0BFDE6 mov.l Rm,@(disp,Rn) */
	r4 = 0x14u;  /* 0C0BFDE8 mov #imm,Rn */
	r3 = 0x80000000u; UPD(0x0C0BFDECu, 2);  /* 0C0BFDEA mov.l @(disp,pc),Rn */
	r12 = 0xC062780u; UPD(0x0C0BFDEEu, 1);  /* 0C0BFDEC mov.l @(disp,pc),Rn */
	r3 |= r13;  /* 0C0BFDEE or Rm,Rn */
	r13 = 0x4u;  /* 0C0BFDF0 mov #imm,Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0BFDF4u, 3);  /* 0C0BFDF2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0BFDF6u, 1);  /* 0C0BFDF4 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0BFDF8u, 1);  /* 0C0BFDF6 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C0BFDFAu, 1);  /* 0C0BFDF8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFDFAu); { u32 t_ = r12; PR = 0x0C0BFDFEu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BFDFEu); }  /* 0C0BFDFA jsr @Rn */
L_0C0BFDFE: BLKS(0x0C0BFDFEu);
	r8 += 0x30u;  /* 0C0BFDFE add #imm,Rn */
	r0 += 0x4u;  /* 0C0BFE00 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0BFE04u, 3);  /* 0C0BFE02 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0BFE04 mov #imm,Rn */
	IF(0x0C0BFE06u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BFE08u, 2);  /* 0C0BFE06 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BFE08 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0BFE0Cu, 2);  /* 0C0BFE0A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0BFE0C mov #imm,Rn */
	IF(0x0C0BFE0Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0BFE10u, 2);  /* 0C0BFE0E mov.b @(r0,Rm),Rn */
	{ u32 v_ = r9; r8 -= 1; W8(r8, v_); } UPD(0x0C0BFE12u, 1);  /* 0C0BFE10 mov.b Rm,@-Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BFD92u, 3); goto L_0C0BFD92; }  /* 0C0BFE12 bra */
L_0C0BFE20: BLKS(0x0C0BFE20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFD82u, 3); goto L_0C0BFD82; }  /* 0C0BFE20 bra */
L_0C0BFE30: BLKS(0x0C0BFE30u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFD68u, 3); goto L_0C0BFD68; }  /* 0C0BFE30 bra */
}

/* FUN_0c0bfe70 */
void blk_f_0C0BFE70(sh3_t *c)
{
	LOCALS;
L_0C0BFE70: BLKS(0x0C0BFE70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE72u, 1);  /* 0C0BFE70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE74u, 1);  /* 0C0BFE72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE76u, 1);  /* 0C0BFE74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE78u, 1);  /* 0C0BFE76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE7Au, 1);  /* 0C0BFE78 mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BFE7A mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE7Eu, 2);  /* 0C0BFE7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BFE80u, 1);  /* 0C0BFE7E mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0BFE80 mov Rm,Rn */
	IF(0x0C0BFE82u); r15 -= 4; W32(r15, PR); UPD(0x0C0BFE84u, 2);  /* 0C0BFE82 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BFE84 add #imm,Rn */
	r14 = r15;  /* 0C0BFE86 mov Rm,Rn */
	r2 = R32(r14 + 0x3Cu); UPD(0x0C0BFE8Au, 3);  /* 0C0BFE88 mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0BFE8Cu, 1);  /* 0C0BFE8A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0BFE8C exts.b Rm,Rn */
	r4 = R32(r14 + 0x38u); UPD(0x0C0BFE90u, 2);  /* 0C0BFE8E mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0BFE92u, 1);  /* 0C0BFE90 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0BFE92 exts.b Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0BFE96u, 2);  /* 0C0BFE94 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BFE96 mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0BFE9Au, 2);  /* 0C0BFE98 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFE9Au); r0 <<= 2;  /* 0C0BFE9A shll2 Rn */
	IF(0x0C0BFE9Cu); r3 = R32(r0 + r2); UPD(0x0C0BFE9Eu, 2);  /* 0C0BFE9C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BFEA0u, 1);  /* 0C0BFE9E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0BFEA0 add Rm,Rn */
	IF(0x0C0BFEA2u); T = (s32)r2 >= 0;  /* 0C0BFEA2 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BFEACu, 5); goto L_0C0BFEAC; } UPD(0x0C0BFEA8u, 1); goto L_0C0BFEA8; }  /* 0C0BFEA4 bt/s */
L_0C0BFEA8: BLKS(0x0C0BFEA8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BFFE0u, 3); goto L_0C0BFFE0; }  /* 0C0BFEA8 bra */
L_0C0BFEAC: BLKS(0x0C0BFEACu);
	r5 = 0xA00000u; UPD(0x0C0BFEAEu, 1);  /* 0C0BFEAC mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0BFEAE add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0BFEB0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFED0u, 5); goto L_0C0BFED0; } goto L_0C0BFEB6; }  /* 0C0BFEB2 bt/s */
L_0C0BFEB6: BLKS(0x0C0BFEB6u);
	r8 = 0xC3C4048u; UPD(0x0C0BFEB8u, 2);  /* 0C0BFEB6 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BFEBAu, 1);  /* 0C0BFEB8 mov.l @(disp,Rm),Rn */
	r7 = R32(r8); UPD(0x0C0BFEBCu, 1);  /* 0C0BFEBA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BFEBEu, 1);  /* 0C0BFEBC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BFEBE sub Rm,Rn */
	r2 += r6;  /* 0C0BFEC0 add Rm,Rn */
	IF(0x0C0BFEC2u); T = (s32)r2 >= 0;  /* 0C0BFEC2 cmp/pz Rn */
	if (T) { UPD(0x0C0BFEC8u, 6); goto L_0C0BFEC8; }  /* 0C0BFEC4 bt */
L_0C0BFEC6: BLKS(0x0C0BFEC6u);
	r2 = 0u - r2;  /* 0C0BFEC6 neg Rm,Rn */
	UPD(0x0C0BFEC8u, 1);
L_0C0BFEC8: BLKS(0x0C0BFEC8u);
	r9 = 0x780000u; UPD(0x0C0BFECAu, 1);  /* 0C0BFEC8 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0BFECA add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0BFECC cmp/ge Rm,Rn */
	IF(0x0C0BFECEu); r1 = T;  /* 0C0BFECE movt Rn */
	UPD(0x0C0BFED0u, 3);
L_0C0BFED0: BLKS(0x0C0BFED0u);
	r10 = (u32)(s32)(s16)r1;  /* 0C0BFED0 exts.w Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0BFED2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BFEF0u, 5); goto L_0C0BFEF0; } UPD(0x0C0BFED8u, 1); goto L_0C0BFED8; }  /* 0C0BFED4 bt/s */
L_0C0BFED8: BLKS(0x0C0BFED8u);
	r14 += 0x18u;  /* 0C0BFED8 add #imm,Rn */
	r15 = r14;  /* 0C0BFEDA mov Rm,Rn */
	IF(0x0C0BFEDCu); PR = R32(r15); r15 += 4; UPD(0x0C0BFEDEu, 3);  /* 0C0BFEDC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BFEE0u, 1);  /* 0C0BFEDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BFEE2u, 1);  /* 0C0BFEE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BFEE4u, 1);  /* 0C0BFEE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BFEE6u, 1);  /* 0C0BFEE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BFEE8u, 1);  /* 0C0BFEE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BFEEAu, 1);  /* 0C0BFEE8 mov.l @Rm+,Rn */
	IF(0x0C0BFEEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BFEEA rts */
L_0C0BFEF0: BLKS(0x0C0BFEF0u);
	r12 = 0xC0C2360u; UPD(0x0C0BFEF2u, 1);  /* 0C0BFEF0 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C0BFEF2 mov #imm,Rn */
	IF(0x0C0BFEF4u); { u32 t_ = r12; PR = 0x0C0BFEF8u; r9 &= r11; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BFEF8u); }  /* 0C0BFEF4 jsr @Rn */
L_0C0BFEF8: BLKS(0x0C0BFEF8u);
	r3 = 0x1FFu; UPD(0x0C0BFEFAu, 1);  /* 0C0BFEF8 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0BFEFA mov Rm,Rn */
	IF(0x0C0BFEFCu); { u32 t_ = r12; PR = 0x0C0BFF00u; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BFF00u); }  /* 0C0BFEFC jsr @Rn */
L_0C0BFF00: BLKS(0x0C0BFF00u);
	r0 &= 0x1Fu;  /* 0C0BFF00 and #imm,r0 */
	r0 += 0xFFFFFFF0u;  /* 0C0BFF02 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0BFF04 exts.w Rm,Rn */
	r0 = 0xC200140u; UPD(0x0C0BFF08u, 4);  /* 0C0BFF06 mov.l @(disp,pc),Rn */
	IF(0x0C0BFF08u); r9 <<= 2;  /* 0C0BFF08 shll2 Rn */
	r12 = 0xC062780u; UPD(0x0C0BFF0Cu, 2);  /* 0C0BFF0A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0BFF0C add Rm,Rn */
	r4 = R32(r9); UPD(0x0C0BFF10u, 2);  /* 0C0BFF0E mov.l @Rm,Rn */
	IF(0x0C0BFF10u); { u32 t_ = r12; PR = 0x0C0BFF14u; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BFF14u); }  /* 0C0BFF10 jsr @Rn */
L_0C0BFF14: BLKS(0x0C0BFF14u);
	r4 = R32(r9); UPD(0x0C0BFF16u, 1);  /* 0C0BFF14 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0BFF16 add Rm,Rn */
	r1 = r0;  /* 0C0BFF18 mov Rm,Rn */
	IF(0x0C0BFF1Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0BFF1A rotl Rn */
	IF(0x0C0BFF1Cu); r8 = T;  /* 0C0BFF1C movt Rn */
	IF(0x0C0BFF1Eu); { u32 t_ = r12; PR = 0x0C0BFF22u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BFF22u); }  /* 0C0BFF1E jsr @Rn */
L_0C0BFF22: BLKS(0x0C0BFF22u);
	W32(r14 + 0x14u, r0); UPD(0x0C0BFF24u, 1);  /* 0C0BFF22 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BFF24u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C0BFF24 shar Rn */
	r9 = 0x0u;  /* 0C0BFF26 mov #imm,Rn */
	UPD(0x0C0BFF28u, 2);
L_0C0BFF28: BLKS(0x0C0BFF28u);
	r12 = 0xC0C2360u; UPD(0x0C0BFF2Au, 1);  /* 0C0BFF28 mov.l @(disp,pc),Rn */
	IF(0x0C0BFF2Au); { u32 t_ = r12; PR = 0x0C0BFF2Eu; IF(0x0C0BFF2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BFF2Eu); }  /* 0C0BFF2A jsr @Rn */
L_0C0BFF2E: BLKS(0x0C0BFF2Eu);
	r0 &= 0xFu;  /* 0C0BFF2E and #imm,r0 */
	r0 += 0x4u;  /* 0C0BFF30 add #imm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0BFF32 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BFF80u, 6); goto L_0C0BFF80; }  /* 0C0BFF34 bt */
L_0C0BFF36: BLKS(0x0C0BFF36u);
	r15 += 0xFFFFFFF0u;  /* 0C0BFF36 add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C0BFF3Au, 2);  /* 0C0BFF38 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0BFF3Cu, 1);  /* 0C0BFF3A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BFF3C mov Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0BFF40u, 2);  /* 0C0BFF3E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C0BFF40 mov Rm,Rn */
	W32(r15, r3); UPD(0x0C0BFF44u, 2);  /* 0C0BFF42 mov.l Rm,@Rn */
	IF(0x0C0BFF44u); { u32 t_ = r12; PR = 0x0C0BFF48u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BFF48u); }  /* 0C0BFF44 jsr @Rn */
L_0C0BFF48: BLKS(0x0C0BFF48u);
	r7 = 0xC069AF0u; UPD(0x0C0BFF4Au, 1);  /* 0C0BFF48 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BFF4A mov Rm,Rn */
	r5 = r8;  /* 0C0BFF4C mov Rm,Rn */
	IF(0x0C0BFF4Eu); { u32 t_ = r7; PR = 0x0C0BFF52u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BFF52u); }  /* 0C0BFF4E jsr @Rn */
L_0C0BFF52: BLKS(0x0C0BFF52u);
	r2 = 0xC0BE9F0u; UPD(0x0C0BFF54u, 1);  /* 0C0BFF52 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BFF54 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0BFF58u, 2);  /* 0C0BFF56 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C0BFF58 mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C0BFF5Cu, 2);  /* 0C0BFF5A mov.l @Rm,Rn */
	IF(0x0C0BFF5Cu); { u32 t_ = r2; PR = 0x0C0BFF60u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE9F0, 0x0C0BE9F0u, 0x0C0BFF60u); }  /* 0C0BFF5C jsr @Rn */
L_0C0BFF60: BLKS(0x0C0BFF60u);
	r6 = R32(r14 + 0x10u); UPD(0x0C0BFF62u, 1);  /* 0C0BFF60 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0BFF62 mov Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C0BFF66u, 2);  /* 0C0BFF64 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C0BFF66 add Rm,Rn */
	r4 += 0x1u;  /* 0C0BFF68 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0BFF6A exts.w Rm,Rn */
	r8 += r5;  /* 0C0BFF6C add Rm,Rn */
	r15 += 0x10u;  /* 0C0BFF6E add #imm,Rn */
	{ r9 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C0BFF28u, 8); goto L_0C0BFF28; }  /* 0C0BFF70 bra */
L_0C0BFF80: BLKS(0x0C0BFF80u);
	r9 = R32(r14 + 0xCu); UPD(0x0C0BFF82u, 1);  /* 0C0BFF80 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BFF82 add #imm,Rn */
	W32(r15, r9); UPD(0x0C0BFF86u, 2);  /* 0C0BFF84 mov.l Rm,@Rn */
	r5 = r13;  /* 0C0BFF86 mov Rm,Rn */
	r9 = r11;  /* 0C0BFF88 mov Rm,Rn */
	r10 = 0xC1FFECCu; UPD(0x0C0BFF8Cu, 3);  /* 0C0BFF8A mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C0BFF8C add Rm,Rn */
	r10 += r9;  /* 0C0BFF8E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0BFF92u, 3);  /* 0C0BFF90 mov.w @Rm,Rn */
	r11 = 0x3Fu;  /* 0C0BFF92 mov #imm,Rn */
	r2 = 0xC0BD060u; UPD(0x0C0BFF96u, 2);  /* 0C0BFF94 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0BFF98u, 1);  /* 0C0BFF96 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x4u); UPD(0x0C0BFF9Au, 1);  /* 0C0BFF98 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0BFF9Cu, 1);  /* 0C0BFF9A mov.l @Rm,Rn */
	IF(0x0C0BFF9Cu); { u32 t_ = r2; PR = 0x0C0BFFA0u; r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD060, 0x0C0BD060u, 0x0C0BFFA0u); }  /* 0C0BFF9C jsr @Rn */
L_0C0BFFA0: BLKS(0x0C0BFFA0u);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0BFFA2u, 1);  /* 0C0BFFA0 mov.w @Rm,Rn */
	r4 = r13;  /* 0C0BFFA2 mov Rm,Rn */
	r8 = 0xC0BD490u; UPD(0x0C0BFFA6u, 2);  /* 0C0BFFA4 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0BFFA6 add Rm,Rn */
	r15 += 0x8u;  /* 0C0BFFA8 add #imm,Rn */
	r7 = (u32)(s32)(s16)r1;  /* 0C0BFFAA exts.w Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0BFFAEu, 4);  /* 0C0BFFAC mov.l @(disp,Rm),Rn */
	IF(0x0C0BFFAEu); { u32 t_ = r8; PR = 0x0C0BFFB2u; r6 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C0BFFB2u); }  /* 0C0BFFAE jsr @Rn */
L_0C0BFFB2: BLKS(0x0C0BFFB2u);
	r10 = 0xC1FFF40u; UPD(0x0C0BFFB4u, 1);  /* 0C0BFFB2 mov.l @(disp,pc),Rn */
	IF(0x0C0BFFB4u); { u32 t_ = r12; PR = 0x0C0BFFB8u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0BFFB8u); }  /* 0C0BFFB4 jsr @Rn */
L_0C0BFFB8: BLKS(0x0C0BFFB8u);
	r0 &= 0x1u;  /* 0C0BFFB8 and #imm,r0 */
	IF(0x0C0BFFBAu); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0BFFBCu, 2);  /* 0C0BFFBA mov.b @(r0,Rm),Rn */
	r4 = r13 & 0xFF;  /* 0C0BFFBC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0BFFBE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BFFD0u, 5); goto L_0C0BFFD0; }  /* 0C0BFFC0 bt */
L_0C0BFFC2: BLKS(0x0C0BFFC2u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BFED8u, 3); goto L_0C0BFED8; }  /* 0C0BFFC2 bra */
L_0C0BFFD0: BLKS(0x0C0BFFD0u);
	r12 = 0xC0C2110u; UPD(0x0C0BFFD2u, 1);  /* 0C0BFFD0 mov.l @(disp,pc),Rn */
	IF(0x0C0BFFD2u); { u32 t_ = r12; PR = 0x0C0BFFD6u; IF(0x0C0BFFD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BFFD6u); }  /* 0C0BFFD2 jsr @Rn */
L_0C0BFFD6: BLKS(0x0C0BFFD6u);
	{ IF(0x0C0BFFD8u); ; /* slot nop */ UPD(0x0C0BFFC2u, 3); goto L_0C0BFFC2; }  /* 0C0BFFD6 bra */
L_0C0BFFE0: BLKS(0x0C0BFFE0u);
	{ IF(0x0C0BFFE2u); ; /* slot nop */ UPD(0x0C0BFEACu, 3); goto L_0C0BFEAC; }  /* 0C0BFFE0 bra */
}

/* FUN_0c0c0030 */
void blk_f_0C0C0030(sh3_t *c)
{
	LOCALS;
L_0C0C0030: BLKS(0x0C0C0030u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0032u, 1);  /* 0C0C0030 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0C0032 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0036u, 2);  /* 0C0C0034 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0038u, 1);  /* 0C0C0036 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C003Au, 1);  /* 0C0C0038 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C003Cu, 1);  /* 0C0C003A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C003Eu, 1);  /* 0C0C003C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0040u, 1);  /* 0C0C003E mov.l Rm,@-Rn */
	IF(0x0C0C0040u); r15 -= 4; W32(r15, PR); UPD(0x0C0C0042u, 1);  /* 0C0C0040 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0C0042 add #imm,Rn */
	r14 = r15;  /* 0C0C0044 mov Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0C0048u, 3);  /* 0C0C0046 mov.l Rm,@(disp,Rn) */
	r3 += r14;  /* 0C0C0048 add Rm,Rn */
	r7 = R32(r3 + 0x0u); UPD(0x0C0C004Cu, 2);  /* 0C0C004A mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0C004Eu, 1);  /* 0C0C004C mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)r7;  /* 0C0C004E exts.b Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C0C0052u, 2);  /* 0C0C0050 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0C0052 mov Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0C0056u, 2);  /* 0C0C0054 mov.l @(disp,Rm),Rn */
	IF(0x0C0C0056u); r7 <<= 2;  /* 0C0C0056 shll2 Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0C0058 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0C005Cu, 3);  /* 0C0C005A mov.l Rm,@(disp,Rn) */
	r2 = 0xC1FFEF0u; UPD(0x0C0C005Eu, 1);  /* 0C0C005C mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C005E mov Rm,Rn */
	IF(0x0C0C0060u); r3 = R32(r0 + r2); UPD(0x0C0C0062u, 2);  /* 0C0C0060 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0C0064u, 1);  /* 0C0C0062 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C0066u, 1);  /* 0C0C0064 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0C0066 add Rm,Rn */
	IF(0x0C0C0068u); T = (s32)r2 >= 0;  /* 0C0C0068 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C0072u, 5); goto L_0C0C0072; } UPD(0x0C0C006Eu, 1); goto L_0C0C006E; }  /* 0C0C006A bt/s */
L_0C0C006E: BLKS(0x0C0C006Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0C01C0u, 3); goto L_0C0C01C0; }  /* 0C0C006E bra */
L_0C0C0072: BLKS(0x0C0C0072u);
	r5 = 0xA00000u; UPD(0x0C0C0074u, 1);  /* 0C0C0072 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0C0074 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0C0076 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C0096u, 5); goto L_0C0C0096; } goto L_0C0C007C; }  /* 0C0C0078 bt/s */
L_0C0C007C: BLKS(0x0C0C007Cu);
	r9 = 0xC3C4048u; UPD(0x0C0C007Eu, 2);  /* 0C0C007C mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C0080u, 1);  /* 0C0C007E mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0C0082u, 1);  /* 0C0C0080 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0C0084u, 1);  /* 0C0C0082 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0C0084 sub Rm,Rn */
	r2 += r6;  /* 0C0C0086 add Rm,Rn */
	IF(0x0C0C0088u); T = (s32)r2 >= 0;  /* 0C0C0088 cmp/pz Rn */
	if (T) { UPD(0x0C0C008Eu, 6); goto L_0C0C008E; }  /* 0C0C008A bt */
L_0C0C008C: BLKS(0x0C0C008Cu);
	r2 = 0u - r2;  /* 0C0C008C neg Rm,Rn */
	UPD(0x0C0C008Eu, 1);
L_0C0C008E: BLKS(0x0C0C008Eu);
	r10 = 0x780000u; UPD(0x0C0C0090u, 1);  /* 0C0C008E mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0C0090 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0C0092 cmp/ge Rm,Rn */
	IF(0x0C0C0094u); r1 = T;  /* 0C0C0094 movt Rn */
	UPD(0x0C0C0096u, 3);
L_0C0C0096: BLKS(0x0C0C0096u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0C0096 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0C0098 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C00C0u, 5); goto L_0C0C00C0; } UPD(0x0C0C009Eu, 1); goto L_0C0C009E; }  /* 0C0C009A bt/s */
L_0C0C009E: BLKS(0x0C0C009Eu);
	r14 += 0x20u;  /* 0C0C009E add #imm,Rn */
	r15 = r14;  /* 0C0C00A0 mov Rm,Rn */
	IF(0x0C0C00A2u); PR = R32(r15); r15 += 4; UPD(0x0C0C00A4u, 3);  /* 0C0C00A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C00A6u, 1);  /* 0C0C00A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C00A8u, 1);  /* 0C0C00A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C00AAu, 1);  /* 0C0C00A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C00ACu, 1);  /* 0C0C00AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C00AEu, 1);  /* 0C0C00AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C00B0u, 1);  /* 0C0C00AE mov.l @Rm+,Rn */
	IF(0x0C0C00B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C00B0 rts */
L_0C0C00C0: BLKS(0x0C0C00C0u);
	r8 = 0xC0C2360u; UPD(0x0C0C00C2u, 1);  /* 0C0C00C0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C00C2 mov Rm,Rn */
	r2 = 0xC200160u; UPD(0x0C0C00C6u, 2);  /* 0C0C00C4 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0C00C6 mov #imm,Rn */
	r13 = 0xC062780u; UPD(0x0C0C00CAu, 2);  /* 0C0C00C8 mov.l @(disp,pc),Rn */
	IF(0x0C0C00CAu); { u32 t_ = r8; PR = 0x0C0C00CEu; IF(0x0C0C00CCu); r10 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0C00CEu); }  /* 0C0C00CA jsr @Rn */
L_0C0C00CE: BLKS(0x0C0C00CEu);
	r4 = 0x3u;  /* 0C0C00CE mov #imm,Rn */
	IF(0x0C0C00D0u); { u32 t_ = r13; PR = 0x0C0C00D4u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C00D4u); }  /* 0C0C00D0 jsr @Rn */
L_0C0C00D4: BLKS(0x0C0C00D4u);
	r0 += 0x1u;  /* 0C0C00D4 add #imm,Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0C00D6 exts.w Rm,Rn */
	r4 = r10;  /* 0C0C00D8 mov Rm,Rn */
	IF(0x0C0C00DAu); { u32 t_ = r13; PR = 0x0C0C00DEu; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C00DEu); }  /* 0C0C00DA jsr @Rn */
L_0C0C00DE: BLKS(0x0C0C00DEu);
	W32(r14 + 0x18u, r12); UPD(0x0C0C00E0u, 1);  /* 0C0C00DE mov.l Rm,@(disp,Rn) */
	r13 = r0;  /* 0C0C00E0 mov Rm,Rn */
	IF(0x0C0C00E2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0C00E2 shar Rn */
	r13 += r10;  /* 0C0C00E4 add Rm,Rn */
	r12 = 0x0u;  /* 0C0C00E6 mov #imm,Rn */
	UPD(0x0C0C00E8u, 4);
L_0C0C00E8: BLKS(0x0C0C00E8u);
	r9 = 0xC069B20u; UPD(0x0C0C00EAu, 1);  /* 0C0C00E8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0C00EA mov Rm,Rn */
	IF(0x0C0C00ECu); { u32 t_ = r9; PR = 0x0C0C00F0u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C00F0u); }  /* 0C0C00EC jsr @Rn */
L_0C0C00F0: BLKS(0x0C0C00F0u);
	r7 = 0xC0C2494u; UPD(0x0C0C00F2u, 1);  /* 0C0C00F0 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C0C00F2 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0C00F6u, 2);  /* 0C0C00F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C00F6u); { u32 t_ = r7; PR = 0x0C0C00FAu; r5 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C0C00FAu); }  /* 0C0C00F6 jsr @Rn */
L_0C0C00FA: BLKS(0x0C0C00FAu);
	r9 = r0;  /* 0C0C00FA mov Rm,Rn */
	r4 = r12;  /* 0C0C00FC mov Rm,Rn */
	IF(0x0C0C00FEu); { u32 t_ = r10; PR = 0x0C0C0102u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C0102u); }  /* 0C0C00FE jsr @Rn */
L_0C0C0102: BLKS(0x0C0C0102u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0C0104u, 1);  /* 0C0C0102 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C0104 add #imm,Rn */
	r10 = r0;  /* 0C0C0106 mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C0C010Au, 3);  /* 0C0C0108 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0C010A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0C010Eu, 2);  /* 0C0C010C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0C010E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0C0112u, 2);  /* 0C0C0110 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0C0112 mov Rm,Rn */
	IF(0x0C0C0114u); { u32 t_ = r8; PR = 0x0C0C0118u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C0118u); }  /* 0C0C0114 jsr @Rn */
L_0C0C0118: BLKS(0x0C0C0118u);
	r3 = 0xC069AF0u; UPD(0x0C0C011Au, 1);  /* 0C0C0118 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0C011A mov Rm,Rn */
	r4 = r11;  /* 0C0C011C mov Rm,Rn */
	IF(0x0C0C011Eu); { u32 t_ = r3; PR = 0x0C0C0122u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C0122u); }  /* 0C0C011E jsr @Rn */
L_0C0C0122: BLKS(0x0C0C0122u);
	r1 = 0xC069AF0u; UPD(0x0C0C0124u, 1);  /* 0C0C0122 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0C0124 sub Rm,Rn */
	r5 = r9;  /* 0C0C0126 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0C012Au, 3);  /* 0C0C0128 mov.l Rm,@(disp,Rn) */
	IF(0x0C0C012Au); { u32 t_ = r1; PR = 0x0C0C012Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C012Eu); }  /* 0C0C012A jsr @Rn */
L_0C0C012E: BLKS(0x0C0C012Eu);
	r6 = 0xC069B20u; UPD(0x0C0C0130u, 1);  /* 0C0C012E mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0C0130 mov Rm,Rn */
	r4 = r11;  /* 0C0C0132 mov Rm,Rn */
	IF(0x0C0C0134u); { u32 t_ = r6; PR = 0x0C0C0138u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C0138u); }  /* 0C0C0134 jsr @Rn */
L_0C0C0138: BLKS(0x0C0C0138u);
	r9 += r0;  /* 0C0C0138 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0C013Cu, 2);  /* 0C0C013A mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BEB50u; UPD(0x0C0C013Eu, 1);  /* 0C0C013C mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C0C0140u, 1);  /* 0C0C013E mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0C0142u, 1);  /* 0C0C0140 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C0144u, 1);  /* 0C0C0142 mov.l @(disp,Rm),Rn */
	IF(0x0C0C0144u); { u32 t_ = r9; PR = 0x0C0C0148u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEB50, 0x0C0BEB50u, 0x0C0C0148u); }  /* 0C0C0144 jsr @Rn */
L_0C0C0148: BLKS(0x0C0C0148u);
	r7 = R32(r14 + 0x18u); UPD(0x0C0C014Au, 1);  /* 0C0C0148 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0C014A mov #imm,Rn */
	r7 += 0x1u;  /* 0C0C014C add #imm,Rn */
	r4 = (u32)(s32)(s16)r7;  /* 0C0C014E exts.w Rm,Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C0C0152u, 4);  /* 0C0C0150 mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x18u); UPD(0x0C0C0154u, 1);  /* 0C0C0152 mov.l @(disp,Rm),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0C0154 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C00E8u, 4); goto L_0C0C00E8; } goto L_0C0C015A; }  /* 0C0C0156 bf/s */
L_0C0C015A: BLKS(0x0C0C015Au);
	r1 = R32(r14 + 0x14u); UPD(0x0C0C015Cu, 2);  /* 0C0C015A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0C015C add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0C0160u, 2);  /* 0C0C015E mov.l @(disp,Rm),Rn */
	r11 = 0x3Fu;  /* 0C0C0160 mov #imm,Rn */
	r9 = 0xC1FFECCu; UPD(0x0C0C0164u, 2);  /* 0C0C0162 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0C0164 add Rm,Rn */
	W32(r15, r1); UPD(0x0C0C0168u, 2);  /* 0C0C0166 mov.l Rm,@Rn */
	r9 += r10;  /* 0C0C0168 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0C016Cu, 2);  /* 0C0C016A mov.w @Rm,Rn */
	r3 = 0xC0BD060u; UPD(0x0C0C016Eu, 1);  /* 0C0C016C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0C0170u, 1);  /* 0C0C016E mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0C0172u, 1);  /* 0C0C0170 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0C0174u, 1);  /* 0C0C0172 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0C0176u, 1);  /* 0C0C0174 mov.l @(disp,Rm),Rn */
	IF(0x0C0C0176u); { u32 t_ = r3; PR = 0x0C0C017Au; r7 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD060, 0x0C0BD060u, 0x0C0C017Au); }  /* 0C0C0176 jsr @Rn */
L_0C0C017A: BLKS(0x0C0C017Au);
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0C017Cu, 1);  /* 0C0C017A mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0C017C add #imm,Rn */
	r2 = 0xC0BD490u; UPD(0x0C0C0180u, 2);  /* 0C0C017E mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0C0180 add Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C0C0184u, 2);  /* 0C0C0182 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0C0184 exts.w Rm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C0C0188u, 2);  /* 0C0C0186 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0C018Au, 1);  /* 0C0C0188 mov.l @(disp,Rm),Rn */
	IF(0x0C0C018Au); { u32 t_ = r2; PR = 0x0C0C018Eu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C0C018Eu); }  /* 0C0C018A jsr @Rn */
L_0C0C018E: BLKS(0x0C0C018Eu);
	r13 = 0xC1FFF40u; UPD(0x0C0C0190u, 1);  /* 0C0C018E mov.l @(disp,pc),Rn */
	IF(0x0C0C0190u); { u32 t_ = r8; PR = 0x0C0C0194u; r13 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0C0194u); }  /* 0C0C0190 jsr @Rn */
L_0C0C0194: BLKS(0x0C0C0194u);
	r0 &= 0x1u;  /* 0C0C0194 and #imm,r0 */
	IF(0x0C0C0196u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0C0198u, 2);  /* 0C0C0196 mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0C0198 extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0C019A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C01B0u, 5); goto L_0C0C01B0; }  /* 0C0C019C bt */
L_0C0C019E: BLKS(0x0C0C019Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0C009Eu, 3); goto L_0C0C009E; }  /* 0C0C019E bra */
L_0C0C01B0: BLKS(0x0C0C01B0u);
	r11 = 0xC0C2110u; UPD(0x0C0C01B2u, 1);  /* 0C0C01B0 mov.l @(disp,pc),Rn */
	IF(0x0C0C01B2u); { u32 t_ = r11; PR = 0x0C0C01B6u; IF(0x0C0C01B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0C01B6u); }  /* 0C0C01B2 jsr @Rn */
L_0C0C01B6: BLKS(0x0C0C01B6u);
	{ IF(0x0C0C01B8u); ; /* slot nop */ UPD(0x0C0C019Eu, 3); goto L_0C0C019E; }  /* 0C0C01B6 bra */
L_0C0C01C0: BLKS(0x0C0C01C0u);
	{ IF(0x0C0C01C2u); ; /* slot nop */ UPD(0x0C0C0072u, 3); goto L_0C0C0072; }  /* 0C0C01C0 bra */
}

/* FUN_0c0c0210 */
void blk_f_0C0C0210(sh3_t *c)
{
	LOCALS;
L_0C0C0210: BLKS(0x0C0C0210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0212u, 1);  /* 0C0C0210 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0214u, 1);  /* 0C0C0212 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0216u, 1);  /* 0C0C0214 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0218u, 1);  /* 0C0C0216 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0C0218 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C021Cu, 2);  /* 0C0C021A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0C021C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0220u, 2);  /* 0C0C021E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0C0220 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0224u, 2);  /* 0C0C0222 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C0C0224 mov Rm,Rn */
	r8 = 0xC0BCA00u; UPD(0x0C0C0228u, 2);  /* 0C0C0226 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0C0228 mov #imm,Rn */
	IF(0x0C0C022Au); r15 -= 4; W32(r15, PR); UPD(0x0C0C022Cu, 2);  /* 0C0C022A sts.l pr,@-Rn */
	IF(0x0C0C022Cu); { u32 t_ = r8; PR = 0x0C0C0230u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0C0230u); }  /* 0C0C022C jsr @Rn */
L_0C0C0230: BLKS(0x0C0C0230u);
	T = (r0 & r0) == 0;  /* 0C0C0230 tst Rm,Rn */
	if (!T) { UPD(0x0C0C0250u, 4); goto L_0C0C0250; }  /* 0C0C0232 bf */
L_0C0C0234: BLKS(0x0C0C0234u);
	r15 = r14;  /* 0C0C0234 mov Rm,Rn */
	IF(0x0C0C0236u); PR = R32(r15); r15 += 4; UPD(0x0C0C0238u, 2);  /* 0C0C0236 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C023Au, 1);  /* 0C0C0238 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C023Cu, 1);  /* 0C0C023A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C023Eu, 1);  /* 0C0C023C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C0240u, 1);  /* 0C0C023E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C0242u, 1);  /* 0C0C0240 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C0244u, 1);  /* 0C0C0242 mov.l @Rm+,Rn */
	IF(0x0C0C0244u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C0244 rts */
L_0C0C0250: BLKS(0x0C0C0250u);
	r2 = 0xC28EDFCu; UPD(0x0C0C0252u, 1);  /* 0C0C0250 mov.l @(disp,pc),Rn */
	r8 = 0x38u;  /* 0C0C0252 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C0256u, 2);  /* 0C0C0254 mov.w @Rm,Rn */
	r5 = 0x1Au;  /* 0C0C0256 mov #imm,Rn */
	IF(0x0C0C0258u); MACL = r0 * r8;  /* 0C0C0258 mul.l Rm,Rn */
	r7 = 0xC28F65Cu; UPD(0x0C0C025Cu, 4);  /* 0C0C025A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0C025C mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0C0260u, 2);  /* 0C0C025E mov.l @(disp,pc),Rn */
	IF(0x0C0C0260u); r8 = MACL;  /* 0C0C0260 sts macl,Rn */
	r6 = 0xC0000000u; UPD(0x0C0C0264u, 2);  /* 0C0C0262 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0C0264 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0C0268u, 2);  /* 0C0C0266 mov.l Rm,@Rn */
	IF(0x0C0C0268u); { u32 t_ = r9; PR = 0x0C0C026Cu; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C026Cu); }  /* 0C0C0268 jsr @Rn */
L_0C0C026C: BLKS(0x0C0C026Cu);
	r4 = 0x0u;  /* 0C0C026C mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0C0270u, 2);  /* 0C0C026E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0C0272u, 1);  /* 0C0C0270 mov.l Rm,@(disp,Rn) */
	r4 = 0x3Fu;  /* 0C0C0272 mov #imm,Rn */
	W32(r8 + 0x14u, r13); UPD(0x0C0C0276u, 2);  /* 0C0C0274 mov.l Rm,@(disp,Rn) */
	IF(0x0C0C0276u); { u32 t_ = r9; PR = 0x0C0C027Au; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C027Au); }  /* 0C0C0276 jsr @Rn */
L_0C0C027A: BLKS(0x0C0C027Au);
	r10 = 0x400u; UPD(0x0C0C027Cu, 1);  /* 0C0C027A mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C0C027C add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C0C027E add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0C0280 exts.w Rm,Rn */
	IF(0x0C0C0282u); { u32 t_ = r9; PR = 0x0C0C0286u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C0286u); }  /* 0C0C0282 jsr @Rn */
L_0C0C0286: BLKS(0x0C0C0286u);
	r13 = r0;  /* 0C0C0286 mov Rm,Rn */
	r13 += r10;  /* 0C0C0288 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0C028Cu, 3);  /* 0C0C028A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0C028C mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0C0290u, 2);  /* 0C0C028E mov.l @(disp,pc),Rn */
	IF(0x0C0C0290u); { u32 t_ = r10; PR = 0x0C0C0294u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C0294u); }  /* 0C0C0290 jsr @Rn */
L_0C0C0294: BLKS(0x0C0C0294u);
	IF(0x0C0C0294u); r0 <<= 8;  /* 0C0C0294 shll8 Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0C0298u, 2);  /* 0C0C0296 mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0C0298 mov Rm,Rn */
	IF(0x0C0C029Au); { u32 t_ = r9; PR = 0x0C0C029Eu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C029Eu); }  /* 0C0C029A jsr @Rn */
L_0C0C029E: BLKS(0x0C0C029Eu);
	IF(0x0C0C029Eu); r0 <<= 8;  /* 0C0C029E shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0C02A2u, 2);  /* 0C0C02A0 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C0C02A2 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0C02A4 add #imm,Rn */
	W8(r8, r3); UPD(0x0C0C02A8u, 3);  /* 0C0C02A6 mov.b Rm,@Rn */
	r2 = 0x0u;  /* 0C0C02A8 mov #imm,Rn */
	r8 += 0x3u;  /* 0C0C02AA add #imm,Rn */
	W8(r8, r11); UPD(0x0C0C02AEu, 3);  /* 0C0C02AC mov.b Rm,@Rn */
	r0 = 0x808080u; UPD(0x0C0C02B0u, 1);  /* 0C0C02AE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0C02B0 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C0C02B4u, 2);  /* 0C0C02B2 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0C0234u, 3); goto L_0C0C0234; }  /* 0C0C02B4 bra */
}

/* FUN_0c0c02e0 */
void blk_f_0C0C02E0(sh3_t *c)
{
	LOCALS;
L_0C0C02E0: BLKS(0x0C0C02E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02E2u, 1);  /* 0C0C02E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02E4u, 1);  /* 0C0C02E2 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0C02E4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02E8u, 2);  /* 0C0C02E6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0C02E8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02ECu, 2);  /* 0C0C02EA mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0C02EC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02F0u, 2);  /* 0C0C02EE mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0C02F0 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02F4u, 2);  /* 0C0C02F2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C02F6u, 1);  /* 0C0C02F4 mov.l Rm,@-Rn */
	IF(0x0C0C02F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C02F8u, 1);  /* 0C0C02F6 sts.l pr,@-Rn */
	r14 = r15;  /* 0C0C02F8 mov Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0C02FCu, 2);  /* 0C0C02FA mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s8)r0;  /* 0C0C02FC exts.b Rm,Rn */
	r0 = R32(r14 + 0x24u); UPD(0x0C0C0300u, 2);  /* 0C0C02FE mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s8)r0;  /* 0C0C0300 exts.b Rm,Rn */
	r0 = 0xC0BCA00u; UPD(0x0C0C0304u, 2);  /* 0C0C0302 mov.l @(disp,pc),Rn */
	IF(0x0C0C0304u); { u32 t_ = r0; PR = 0x0C0C0308u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0C0308u); }  /* 0C0C0304 jsr @Rn */
L_0C0C0308: BLKS(0x0C0C0308u);
	T = (r0 & r0) == 0;  /* 0C0C0308 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C034Eu, 4); goto L_0C0C034E; } goto L_0C0C030E; }  /* 0C0C030A bt/s */
L_0C0C030E: BLKS(0x0C0C030Eu);
	r5 = 0xC28EDFCu; UPD(0x0C0C0310u, 2);  /* 0C0C030E mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0C0310 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0C0314u, 2);  /* 0C0C0312 mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0C0314 mov #imm,Rn */
	IF(0x0C0C0316u); MACL = r4 * r3;  /* 0C0C0316 mul.l Rm,Rn */
	r2 = 0xC28F65Cu; UPD(0x0C0C031Au, 4);  /* 0C0C0318 mov.l @(disp,pc),Rn */
	r8 &= r0;  /* 0C0C031A and Rm,Rn */
	r7 = 0xC0000000u; UPD(0x0C0C031Eu, 2);  /* 0C0C031C mov.l @(disp,pc),Rn */
	IF(0x0C0C031Eu); r3 = MACL;  /* 0C0C031E sts macl,Rn */
	r3 += r2;  /* 0C0C0320 add Rm,Rn */
	r5 = 0x0u;  /* 0C0C0322 mov #imm,Rn */
	r7 |= r8;  /* 0C0C0324 or Rm,Rn */
	r6 = 0x14u;  /* 0C0C0326 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0C032Au, 6);  /* 0C0C0328 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0C032A mov #imm,Rn */
	W32(r3 + 0x4u, r6); UPD(0x0C0C032Eu, 2);  /* 0C0C032C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r9); UPD(0x0C0C0330u, 1);  /* 0C0C032E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C0C0332u, 1);  /* 0C0C0330 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r10); UPD(0x0C0C0334u, 1);  /* 0C0C0332 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r11); UPD(0x0C0C0336u, 1);  /* 0C0C0334 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0C0338u, 1);  /* 0C0C0336 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r5); UPD(0x0C0C033Au, 1);  /* 0C0C0338 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0C033A add #imm,Rn */
	W8(r3, r5); UPD(0x0C0C033Eu, 2);  /* 0C0C033C mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0C033E add #imm,Rn */
	W8(r3, r12); UPD(0x0C0C0342u, 2);  /* 0C0C0340 mov.b Rm,@Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0C0344u, 1);  /* 0C0C0342 mov.b Rm,@-Rn */
	r4 = 0x207C0C0u; UPD(0x0C0C0346u, 1);  /* 0C0C0344 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0C0346 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0C034Au, 2);  /* 0C0C0348 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C0C034Cu, 1);  /* 0C0C034A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x2Cu, r2); UPD(0x0C0C034Eu, 1);  /* 0C0C034C mov.l Rm,@(disp,Rn) */
L_0C0C034E: BLKS(0x0C0C034Eu);
	r15 = r14;  /* 0C0C034E mov Rm,Rn */
	IF(0x0C0C0350u); PR = R32(r15); r15 += 4; UPD(0x0C0C0352u, 2);  /* 0C0C0350 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C0354u, 1);  /* 0C0C0352 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C0356u, 1);  /* 0C0C0354 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C0358u, 1);  /* 0C0C0356 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C035Au, 1);  /* 0C0C0358 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C035Cu, 1);  /* 0C0C035A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C035Eu, 1);  /* 0C0C035C mov.l @Rm+,Rn */
	IF(0x0C0C035Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C035E rts */
}

void blk_f_0C0C0380(sh3_t *c)
{
	LOCALS;
L_0C0C0380: BLKS(0x0C0C0380u);
	r6 = 0x38u;  /* 0C0C0380 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0C0382 exts.w Rm,Rn */
	IF(0x0C0C0384u); MACL = r4 * r6;  /* 0C0C0384 mul.l Rm,Rn */
	r5 = 0xC28F65Cu; UPD(0x0C0C0388u, 5);  /* 0C0C0386 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C038Au, 1);  /* 0C0C0388 mov.l Rm,@-Rn */
	IF(0x0C0C038Au); r3 = MACL;  /* 0C0C038A sts macl,Rn */
	r3 += r5;  /* 0C0C038C add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0C0390u, 3);  /* 0C0C038E mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x1Cu); UPD(0x0C0C0392u, 1);  /* 0C0C0390 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0C0394u, 1);  /* 0C0C0392 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0C0394 add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0C0398u, 2);  /* 0C0C0396 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0C039Au, 1);  /* 0C0C0398 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0C039A add Rm,Rn */
	r2 = 0xC2000B8u; UPD(0x0C0C039Eu, 2);  /* 0C0C039C mov.l @(disp,pc),Rn */
	IF(0x0C0C039Eu); r0 <<= 2;  /* 0C0C039E shll2 Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0C03A2u, 2);  /* 0C0C03A0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r7); UPD(0x0C0C03A4u, 1);  /* 0C0C03A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0C03A4u); r6 = R32(r0 + r2); UPD(0x0C0C03A6u, 1);  /* 0C0C03A4 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0C03A8u, 1);  /* 0C0C03A6 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0C03A8 add Rm,Rn */
	IF(0x0C0C03AAu); T = (s32)r2 >= 0;  /* 0C0C03AA cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0450u, 5); goto L_0C0C0450; } UPD(0x0C0C03B0u, 1); goto L_0C0C03B0; }  /* 0C0C03AC bf/s */
L_0C0C03B0: BLKS(0x0C0C03B0u);
	r3 = 0xA00000u; UPD(0x0C0C03B2u, 1);  /* 0C0C03B0 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0C03B2 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0C03B4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C03D2u, 5); goto L_0C0C03D2; } goto L_0C0C03BA; }  /* 0C0C03B6 bt/s */
L_0C0C03BA: BLKS(0x0C0C03BAu);
	r2 = 0xC3C4048u; UPD(0x0C0C03BCu, 2);  /* 0C0C03BA mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0C03BEu, 1);  /* 0C0C03BC mov.l @Rm,Rn */
	r2 = r7;  /* 0C0C03BE mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0C03C2u, 2);  /* 0C0C03C0 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0C03C2 sub Rm,Rn */
	r2 += r7;  /* 0C0C03C4 add Rm,Rn */
	IF(0x0C0C03C6u); T = (s32)r2 >= 0;  /* 0C0C03C6 cmp/pz Rn */
	if (!T) { UPD(0x0C0C0440u, 6); goto L_0C0C0440; }  /* 0C0C03C8 bf */
L_0C0C03CA: BLKS(0x0C0C03CAu);
	r5 = 0x780000u; UPD(0x0C0C03CCu, 1);  /* 0C0C03CA mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0C03CC add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0C03CE cmp/ge Rm,Rn */
	IF(0x0C0C03D0u); r1 = T;  /* 0C0C03D0 movt Rn */
	UPD(0x0C0C03D2u, 3);
L_0C0C03D2: BLKS(0x0C0C03D2u);
	r7 = (u32)(s32)(s16)r1;  /* 0C0C03D2 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0C03D4 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C03F0u, 5); goto L_0C0C03F0; } goto L_0C0C03DA; }  /* 0C0C03D6 bt/s */
L_0C0C03DA: BLKS(0x0C0C03DAu);
	IF(0x0C0C03DAu); MACL = r4 * r3;  /* 0C0C03DA mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C0C03DC mov #imm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0C03E0u, 5);  /* 0C0C03DE mov.l @(disp,pc),Rn */
	IF(0x0C0C03E0u); r0 = MACL;  /* 0C0C03E0 sts macl,Rn */
	IF(0x0C0C03E2u); W32(r0 + r4, r6); UPD(0x0C0C03E4u, 2);  /* 0C0C03E2 mov.l Rm,@(r0,Rn) */
L_0C0C03E4: BLKS(0x0C0C03E4u);
	r15 = r14;  /* 0C0C03E4 mov Rm,Rn */
	IF(0x0C0C03E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C03E6 rts */
L_0C0C03F0: BLKS(0x0C0C03F0u);
	r5 = 0x38u;  /* 0C0C03F0 mov #imm,Rn */
	IF(0x0C0C03F2u); MACL = r4 * r5;  /* 0C0C03F2 mul.l Rm,Rn */
	r2 = 0xC28F65Cu; UPD(0x0C0C03F6u, 4);  /* 0C0C03F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C03F6u); r3 = MACL;  /* 0C0C03F6 sts macl,Rn */
	r3 += r2;  /* 0C0C03F8 add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0C03FCu, 3);  /* 0C0C03FA mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C0C03FEu, 1);  /* 0C0C03FC mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C0C03FE sub Rm,Rn */
	W32(r3 + 0x2Cu, r0); UPD(0x0C0C0402u, 2);  /* 0C0C0400 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0xCu); UPD(0x0C0C0404u, 1);  /* 0C0C0402 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0C0404 add #imm,Rn */
	T = r0 == 0xAu;  /* 0C0C0406 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C0430u, 5); goto L_0C0C0430; } UPD(0x0C0C040Cu, 1); goto L_0C0C040C; }  /* 0C0C0408 bt/s */
L_0C0C040C: BLKS(0x0C0C040Cu);
	r4 = 0xAu;  /* 0C0C040C mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0C040E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x10u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0C0420u, 5); goto L_0C0C0420; } goto L_0C0C0414; }  /* 0C0C0410 bt/s */
L_0C0C0414: BLKS(0x0C0C0414u);
	T = r0 == 0x6u;  /* 0C0C0414 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0C03E4u, 5); goto L_0C0C03E4; }  /* 0C0C0416 bf */
L_0C0C0418: BLKS(0x0C0C0418u);
	r0 = R32(r3); UPD(0x0C0C041Au, 1);  /* 0C0C0418 mov.l @Rm,Rn */
	r0 |= 0x2u;  /* 0C0C041A or #imm,r0 */
	UPD(0x0C0C041Cu, 1);
L_0C0C041C: BLKS(0x0C0C041Cu);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0C03E4u, 3); goto L_0C0C03E4; }  /* 0C0C041C bra */
L_0C0C0420: BLKS(0x0C0C0420u);
	if (!T) { UPD(0x0C0C03E4u, 3); goto L_0C0C03E4; }  /* 0C0C0420 bf */
L_0C0C0422: BLKS(0x0C0C0422u);
	W32(r3, r7); UPD(0x0C0C0424u, 1);  /* 0C0C0422 mov.l Rm,@Rn */
	{ IF(0x0C0C0426u); ; /* slot nop */ UPD(0x0C0C03E4u, 3); goto L_0C0C03E4; }  /* 0C0C0424 bra */
L_0C0C0430: BLKS(0x0C0C0430u);
	r0 = R32(r3); UPD(0x0C0C0432u, 1);  /* 0C0C0430 mov.l @Rm,Rn */
	{ r0 |= 0x1u; /* slot or #imm,r0 */ UPD(0x0C0C041Cu, 3); goto L_0C0C041C; }  /* 0C0C0432 bra */
L_0C0C0440: BLKS(0x0C0C0440u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0C03CAu, 3); goto L_0C0C03CA; }  /* 0C0C0440 bra */
L_0C0C0450: BLKS(0x0C0C0450u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0C03B0u, 3); goto L_0C0C03B0; }  /* 0C0C0450 bra */
}

void blk_f_0C0C0470(sh3_t *c)
{
	LOCALS;
L_0C0C0470: BLKS(0x0C0C0470u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0C0470 exts.w Rm,Rn */
	r2 = 0x38u;  /* 0C0C0472 mov #imm,Rn */
	IF(0x0C0C0474u); MACL = r1 * r2;  /* 0C0C0474 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0C0478u, 5);  /* 0C0C0476 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C047Au, 1);  /* 0C0C0478 mov.l Rm,@-Rn */
	IF(0x0C0C047Au); r3 = MACL;  /* 0C0C047A sts macl,Rn */
	r3 += r0;  /* 0C0C047C add Rm,Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C0C0480u, 3);  /* 0C0C047E mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C0C0480 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0C0482 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0490u, 5); goto L_0C0C0490; } goto L_0C0C0488; }  /* 0C0C0484 bf/s */
L_0C0C0488: BLKS(0x0C0C0488u);
	r4 = R32(r3 + 0x2Cu); UPD(0x0C0C048Au, 2);  /* 0C0C0488 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFAFAFBu; UPD(0x0C0C048Cu, 1);  /* 0C0C048A mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0C048C add Rm,Rn */
	W32(r3 + 0x2Cu, r4); UPD(0x0C0C0490u, 2);  /* 0C0C048E mov.l Rm,@(disp,Rn) */
L_0C0C0490: BLKS(0x0C0C0490u);
	r2 = r3;  /* 0C0C0490 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0C0492 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C0496u, 3);  /* 0C0C0494 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0C0496 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0C0498 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0C049A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0C04B0u, 6); goto L_0C0C04B0; } UPD(0x0C0C04A0u, 1); goto L_0C0C04A0; }  /* 0C0C049C bt/s */
L_0C0C04A0: BLKS(0x0C0C04A0u);
	r15 = r14;  /* 0C0C04A0 mov Rm,Rn */
	IF(0x0C0C04A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C04A2 rts */
L_0C0C04B0: BLKS(0x0C0C04B0u);
	r0 = 0x0u;  /* 0C0C04B0 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0C04B4u, 2);  /* 0C0C04B2 mov.b Rm,@Rn */
	r0 = r7;  /* 0C0C04B4 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0C04B6 add #imm,Rn */
	T = r0 == 0x10u;  /* 0C0C04B8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C04A0u, 6); goto L_0C0C04A0; } UPD(0x0C0C04BEu, 1); goto L_0C0C04BE; }  /* 0C0C04BA bf/s */
L_0C0C04BE: BLKS(0x0C0C04BEu);
	r7 = 0x0u;  /* 0C0C04BE mov #imm,Rn */
	{ W32(r3, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0C04A0u, 4); goto L_0C0C04A0; }  /* 0C0C04C0 bra */
}


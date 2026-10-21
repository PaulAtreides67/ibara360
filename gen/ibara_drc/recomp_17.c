#include "recomp.h"
#include "recomp_funcs.h"

void f_0C0A38E0(sh3_t *c)
{
	LOCALS;
L_0C0A38E0: BLKS(0x0C0A38E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A38E2u, 1);  /* 0C0A38E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A38E4u, 1);  /* 0C0A38E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A38E4 exts.w Rm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C0A38E8u, 2);  /* 0C0A38E6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A38E8 mov Rm,Rn */
	IF(0x0C0A38EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A38ECu, 2);  /* 0C0A38EA sts.l pr,@-Rn */
	IF(0x0C0A38ECu); { u32 t_ = r3; PR = 0x0C0A38F0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A38F0u); }  /* 0C0A38EC jsr @Rn */
L_0C0A38F0: BLKS(0x0C0A38F0u);
	r4 = 0xB4u; UPD(0x0C0A38F2u, 1);  /* 0C0A38F0 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0A38F2 mov #imm,Rn */
	IF(0x0C0A38F4u); MACL = r8 * r4;  /* 0C0A38F4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A38F8u, 4);  /* 0C0A38F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A38F8u); r0 = MACL;  /* 0C0A38F8 sts macl,Rn */
	r3 += r0;  /* 0C0A38FA add Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0A38FEu, 3);  /* 0C0A38FC mov.w @(disp,pc),Rn */
	IF(0x0C0A38FEu); W8(r0 + r3, r2); UPD(0x0C0A3900u, 1);  /* 0C0A38FE mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0A3900 mov Rm,Rn */
	IF(0x0C0A3902u); PR = R32(r15); r15 += 4; UPD(0x0C0A3904u, 2);  /* 0C0A3902 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3906u, 1);  /* 0C0A3904 mov.l @Rm+,Rn */
	IF(0x0C0A3906u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3906 rts */
}

void f_0C0A39C0(sh3_t *c)
{
	LOCALS;
L_0C0A39C0: BLKS(0x0C0A39C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C2u, 1);  /* 0C0A39C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C4u, 1);  /* 0C0A39C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C6u, 1);  /* 0C0A39C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C8u, 1);  /* 0C0A39C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CAu, 1);  /* 0C0A39C8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CCu, 1);  /* 0C0A39CA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CEu, 1);  /* 0C0A39CC mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A39D0u, 1);  /* 0C0A39CE mov.l @(disp,pc),Rn */
	IF(0x0C0A39D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A39D2u, 1);  /* 0C0A39D0 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A39D4u, 1);  /* 0C0A39D2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A39D4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A39D8u, 2);  /* 0C0A39D6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A39D8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A39DCu, 2);  /* 0C0A39DA mov.l @(disp,pc),Rn */
	IF(0x0C0A39DCu); { u32 t_ = r8; PR = 0x0C0A39E0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A39E0u); }  /* 0C0A39DC jsr @Rn */
L_0C0A39E0: BLKS(0x0C0A39E0u);
	T = (r0 & r0) == 0;  /* 0C0A39E0 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3A00u, 4); goto L_0C0A3A00; }  /* 0C0A39E2 bf */
L_0C0A39E4: BLKS(0x0C0A39E4u);
	r0 = 0x1u;  /* 0C0A39E4 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A39E6 add #imm,Rn */
	r15 = r14;  /* 0C0A39E8 mov Rm,Rn */
	IF(0x0C0A39EAu); PR = R32(r15); r15 += 4; UPD(0x0C0A39ECu, 4);  /* 0C0A39EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A39EEu, 1);  /* 0C0A39EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A39F0u, 1);  /* 0C0A39EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A39F2u, 1);  /* 0C0A39F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A39F4u, 1);  /* 0C0A39F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A39F6u, 1);  /* 0C0A39F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A39F8u, 1);  /* 0C0A39F6 mov.l @Rm+,Rn */
	IF(0x0C0A39F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A39F8 rts */
L_0C0A3A00: BLKS(0x0C0A3A00u);
	r8 = 0xC0606C0u; UPD(0x0C0A3A02u, 1);  /* 0C0A3A00 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A02u); { u32 t_ = r8; PR = 0x0C0A3A06u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3A06u); }  /* 0C0A3A02 jsr @Rn */
L_0C0A3A06: BLKS(0x0C0A3A06u);
	T = (r0 & r0) == 0;  /* 0C0A3A06 tst Rm,Rn */
	if (T) { UPD(0x0C0A39E4u, 4); goto L_0C0A39E4; }  /* 0C0A3A08 bt */
L_0C0A3A0A: BLKS(0x0C0A3A0Au);
	r4 = 0x0u;  /* 0C0A3A0A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3A0Eu, 2);  /* 0C0A3A0C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3A10u, 1);  /* 0C0A3A0E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3A12u, 1);  /* 0C0A3A10 mov.w @(disp,pc),Rn */
	IF(0x0C0A3A12u); MACL = r12 * r9;  /* 0C0A3A12 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3A16u, 3);  /* 0C0A3A14 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A16u); r9 = MACL;  /* 0C0A3A16 sts macl,Rn */
	r9 += r1;  /* 0C0A3A18 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3A1Cu, 3);  /* 0C0A3A1A mov.w @Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C0A3A1Eu, 1);  /* 0C0A3A1C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0A3A1E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0A3A22u, 2);  /* 0C0A3A20 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0A3A24u, 1);  /* 0C0A3A22 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0A3A26u, 1);  /* 0C0A3A24 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0A3A28u, 1);  /* 0C0A3A26 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3A28 mov Rm,Rn */
	IF(0x0C0A3A2Au); { u32 t_ = r3; PR = 0x0C0A3A2Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3A2Eu); }  /* 0C0A3A2A jsr @Rn */
L_0C0A3A2E: BLKS(0x0C0A3A2Eu);
	r11 = 0xC061380u; UPD(0x0C0A3A30u, 1);  /* 0C0A3A2E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3A30 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0A3A34u, 2);  /* 0C0A3A32 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A34u); { u32 t_ = r11; PR = 0x0C0A3A38u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3A38u); }  /* 0C0A3A34 jsr @Rn */
L_0C0A3A38: BLKS(0x0C0A3A38u);
	r7 = 0xC0A1530u; UPD(0x0C0A3A3Au, 1);  /* 0C0A3A38 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0A3A3Cu, 1);  /* 0C0A3A3A mov.w @(disp,pc),Rn */
	IF(0x0C0A3A3Cu); { u32 t_ = r7; PR = 0x0C0A3A40u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3A40u); }  /* 0C0A3A3C jsr @Rn */
L_0C0A3A40: BLKS(0x0C0A3A40u);
	r0 = 0x8Au; UPD(0x0C0A3A42u, 1);  /* 0C0A3A40 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0A3A42 mov #imm,Rn */
	IF(0x0C0A3A44u); W16(r0 + r9, r13); UPD(0x0C0A3A46u, 2);  /* 0C0A3A44 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0A3A46 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3A48 add #imm,Rn */
	IF(0x0C0A3A4Au); W16(r0 + r9, r13); UPD(0x0C0A3A4Cu, 3);  /* 0C0A3A4A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3A4C mov #imm,Rn */
	r10 = 0x28000u; UPD(0x0C0A3A50u, 2);  /* 0C0A3A4E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3A50 add #imm,Rn */
	IF(0x0C0A3A52u); W32(r0 + r9, r10); UPD(0x0C0A3A54u, 2);  /* 0C0A3A52 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0A3A54 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0A3A58u, 2);  /* 0C0A3A56 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0A3A5Au, 1);  /* 0C0A3A58 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3A5A add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3A5C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0A3A60u, 3);  /* 0C0A3A5E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0A3A60 add Rm,Rn */
	r13 += 0x1u;  /* 0C0A3A62 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3A66u, 3);  /* 0C0A3A64 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3A68u, 1);  /* 0C0A3A66 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3A6Au, 1);  /* 0C0A3A68 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3A6Cu, 1);  /* 0C0A3A6A mov.w @(disp,pc),Rn */
	IF(0x0C0A3A6Cu); MACL = r11 * r8;  /* 0C0A3A6C mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3A70u, 3);  /* 0C0A3A6E mov.l @(disp,pc),Rn */
	IF(0x0C0A3A70u); r8 = MACL;  /* 0C0A3A70 sts macl,Rn */
	r8 += r1;  /* 0C0A3A72 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3A74 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3A78u, 4);  /* 0C0A3A76 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3A7Au, 1);  /* 0C0A3A78 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3A7A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3A7Eu, 2);  /* 0C0A3A7C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3A7E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3A82u, 2);  /* 0C0A3A80 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3A82 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3A86u, 2);  /* 0C0A3A84 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3A88u, 1);  /* 0C0A3A86 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3A88 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3A8Cu, 2);  /* 0C0A3A8A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3A8Cu); { u32 t_ = r0; PR = 0x0C0A3A90u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3A90u); }  /* 0C0A3A8C jsr @Rn */
L_0C0A3A90: BLKS(0x0C0A3A90u);
	r6 = 0xC0A1530u; UPD(0x0C0A3A92u, 1);  /* 0C0A3A90 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3A92 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3A96u, 2);  /* 0C0A3A94 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3A98u, 1);  /* 0C0A3A96 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3A9Au, 1);  /* 0C0A3A98 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3A9Au); { u32 t_ = r6; PR = 0x0C0A3A9Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3A9Eu); }  /* 0C0A3A9A jsr @Rn */
L_0C0A3A9E: BLKS(0x0C0A3A9Eu);
	r0 = 0xB0u; UPD(0x0C0A3AA0u, 1);  /* 0C0A3A9E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3AA2u, 1);  /* 0C0A3AA0 mov.b @Rm,Rn */
	IF(0x0C0A3AA2u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3AA4u, 1);  /* 0C0A3AA2 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3AA6u, 1);  /* 0C0A3AA4 mov.b Rm,@Rn */
	IF(0x0C0A3AA6u); W8(r0 + r8, r5); UPD(0x0C0A3AA8u, 1);  /* 0C0A3AA6 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3AAAu, 1);  /* 0C0A3AA8 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3AACu, 1);  /* 0C0A3AAA mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3AAC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3AB0u, 2);  /* 0C0A3AAE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3AB0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A39E4u, 4); goto L_0C0A39E4; }  /* 0C0A3AB2 bra */
}

void f_0C0A3B00(sh3_t *c)
{
	LOCALS;
L_0C0A3B00: BLKS(0x0C0A3B00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B02u, 1);  /* 0C0A3B00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B04u, 1);  /* 0C0A3B02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B06u, 1);  /* 0C0A3B04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B08u, 1);  /* 0C0A3B06 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Au, 1);  /* 0C0A3B08 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Cu, 1);  /* 0C0A3B0A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Eu, 1);  /* 0C0A3B0C mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3B10u, 1);  /* 0C0A3B0E mov.l @(disp,pc),Rn */
	IF(0x0C0A3B10u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3B12u, 1);  /* 0C0A3B10 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3B14u, 1);  /* 0C0A3B12 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A3B14 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3B18u, 2);  /* 0C0A3B16 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A3B18 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3B1Cu, 2);  /* 0C0A3B1A mov.l @(disp,pc),Rn */
	IF(0x0C0A3B1Cu); { u32 t_ = r8; PR = 0x0C0A3B20u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3B20u); }  /* 0C0A3B1C jsr @Rn */
L_0C0A3B20: BLKS(0x0C0A3B20u);
	T = (r0 & r0) == 0;  /* 0C0A3B20 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3B40u, 4); goto L_0C0A3B40; }  /* 0C0A3B22 bf */
L_0C0A3B24: BLKS(0x0C0A3B24u);
	r0 = 0x1u;  /* 0C0A3B24 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A3B26 add #imm,Rn */
	r15 = r14;  /* 0C0A3B28 mov Rm,Rn */
	IF(0x0C0A3B2Au); PR = R32(r15); r15 += 4; UPD(0x0C0A3B2Cu, 4);  /* 0C0A3B2A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3B2Eu, 1);  /* 0C0A3B2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A3B30u, 1);  /* 0C0A3B2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A3B32u, 1);  /* 0C0A3B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A3B34u, 1);  /* 0C0A3B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3B36u, 1);  /* 0C0A3B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3B38u, 1);  /* 0C0A3B36 mov.l @Rm+,Rn */
	IF(0x0C0A3B38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3B38 rts */
L_0C0A3B40: BLKS(0x0C0A3B40u);
	r8 = 0xC0606C0u; UPD(0x0C0A3B42u, 1);  /* 0C0A3B40 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B42u); { u32 t_ = r8; PR = 0x0C0A3B46u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3B46u); }  /* 0C0A3B42 jsr @Rn */
L_0C0A3B46: BLKS(0x0C0A3B46u);
	T = (r0 & r0) == 0;  /* 0C0A3B46 tst Rm,Rn */
	if (T) { UPD(0x0C0A3B24u, 4); goto L_0C0A3B24; }  /* 0C0A3B48 bt */
L_0C0A3B4A: BLKS(0x0C0A3B4Au);
	r4 = 0x0u;  /* 0C0A3B4A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3B4Eu, 2);  /* 0C0A3B4C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3B50u, 1);  /* 0C0A3B4E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3B52u, 1);  /* 0C0A3B50 mov.w @(disp,pc),Rn */
	IF(0x0C0A3B52u); MACL = r12 * r9;  /* 0C0A3B52 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3B56u, 3);  /* 0C0A3B54 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B56u); r9 = MACL;  /* 0C0A3B56 sts macl,Rn */
	r9 += r1;  /* 0C0A3B58 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3B5Cu, 3);  /* 0C0A3B5A mov.w @Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C0A3B5Eu, 1);  /* 0C0A3B5C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0A3B5E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0A3B62u, 2);  /* 0C0A3B60 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0A3B64u, 1);  /* 0C0A3B62 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0A3B66u, 1);  /* 0C0A3B64 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0A3B68u, 1);  /* 0C0A3B66 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3B68 mov Rm,Rn */
	IF(0x0C0A3B6Au); { u32 t_ = r3; PR = 0x0C0A3B6Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3B6Eu); }  /* 0C0A3B6A jsr @Rn */
L_0C0A3B6E: BLKS(0x0C0A3B6Eu);
	r11 = 0xC061380u; UPD(0x0C0A3B70u, 1);  /* 0C0A3B6E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3B70 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0A3B74u, 2);  /* 0C0A3B72 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B74u); { u32 t_ = r11; PR = 0x0C0A3B78u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3B78u); }  /* 0C0A3B74 jsr @Rn */
L_0C0A3B78: BLKS(0x0C0A3B78u);
	r7 = 0xC0A1530u; UPD(0x0C0A3B7Au, 1);  /* 0C0A3B78 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0A3B7Cu, 1);  /* 0C0A3B7A mov.w @(disp,pc),Rn */
	IF(0x0C0A3B7Cu); { u32 t_ = r7; PR = 0x0C0A3B80u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3B80u); }  /* 0C0A3B7C jsr @Rn */
L_0C0A3B80: BLKS(0x0C0A3B80u);
	r0 = 0x8Au; UPD(0x0C0A3B82u, 1);  /* 0C0A3B80 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0A3B82 mov #imm,Rn */
	IF(0x0C0A3B84u); W16(r0 + r9, r13); UPD(0x0C0A3B86u, 2);  /* 0C0A3B84 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0A3B86 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3B88 add #imm,Rn */
	IF(0x0C0A3B8Au); W16(r0 + r9, r13); UPD(0x0C0A3B8Cu, 3);  /* 0C0A3B8A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3B8C mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C0A3B90u, 2);  /* 0C0A3B8E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3B90 add #imm,Rn */
	IF(0x0C0A3B92u); W32(r0 + r9, r10); UPD(0x0C0A3B94u, 2);  /* 0C0A3B92 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0A3B94 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0A3B98u, 2);  /* 0C0A3B96 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0A3B9Au, 1);  /* 0C0A3B98 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3B9A add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3B9C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0A3BA0u, 3);  /* 0C0A3B9E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0A3BA0 add Rm,Rn */
	r13 += 0x1u;  /* 0C0A3BA2 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3BA6u, 3);  /* 0C0A3BA4 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3BA8u, 1);  /* 0C0A3BA6 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3BAAu, 1);  /* 0C0A3BA8 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3BACu, 1);  /* 0C0A3BAA mov.w @(disp,pc),Rn */
	IF(0x0C0A3BACu); MACL = r11 * r8;  /* 0C0A3BAC mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3BB0u, 3);  /* 0C0A3BAE mov.l @(disp,pc),Rn */
	IF(0x0C0A3BB0u); r8 = MACL;  /* 0C0A3BB0 sts macl,Rn */
	r8 += r1;  /* 0C0A3BB2 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3BB4 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3BB8u, 4);  /* 0C0A3BB6 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3BBAu, 1);  /* 0C0A3BB8 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3BBA add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3BBEu, 2);  /* 0C0A3BBC mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3BBE add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3BC2u, 2);  /* 0C0A3BC0 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3BC2 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3BC6u, 2);  /* 0C0A3BC4 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3BC8u, 1);  /* 0C0A3BC6 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3BC8 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3BCCu, 2);  /* 0C0A3BCA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3BCCu); { u32 t_ = r0; PR = 0x0C0A3BD0u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3BD0u); }  /* 0C0A3BCC jsr @Rn */
L_0C0A3BD0: BLKS(0x0C0A3BD0u);
	r6 = 0xC0A1530u; UPD(0x0C0A3BD2u, 1);  /* 0C0A3BD0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3BD2 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3BD6u, 2);  /* 0C0A3BD4 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3BD8u, 1);  /* 0C0A3BD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3BDAu, 1);  /* 0C0A3BD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3BDAu); { u32 t_ = r6; PR = 0x0C0A3BDEu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3BDEu); }  /* 0C0A3BDA jsr @Rn */
L_0C0A3BDE: BLKS(0x0C0A3BDEu);
	r0 = 0xB0u; UPD(0x0C0A3BE0u, 1);  /* 0C0A3BDE mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3BE2u, 1);  /* 0C0A3BE0 mov.b @Rm,Rn */
	IF(0x0C0A3BE2u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3BE4u, 1);  /* 0C0A3BE2 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3BE6u, 1);  /* 0C0A3BE4 mov.b Rm,@Rn */
	IF(0x0C0A3BE6u); W8(r0 + r8, r5); UPD(0x0C0A3BE8u, 1);  /* 0C0A3BE6 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3BEAu, 1);  /* 0C0A3BE8 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3BECu, 1);  /* 0C0A3BEA mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3BEC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3BF0u, 2);  /* 0C0A3BEE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3BF0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A3B24u, 4); goto L_0C0A3B24; }  /* 0C0A3BF2 bra */
}

void f_0C0A3C40(sh3_t *c)
{
	LOCALS;
L_0C0A3C40: BLKS(0x0C0A3C40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C42u, 1);  /* 0C0A3C40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C44u, 1);  /* 0C0A3C42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C46u, 1);  /* 0C0A3C44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C48u, 1);  /* 0C0A3C46 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Au, 1);  /* 0C0A3C48 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Cu, 1);  /* 0C0A3C4A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Eu, 1);  /* 0C0A3C4C mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3C50u, 1);  /* 0C0A3C4E mov.l @(disp,pc),Rn */
	IF(0x0C0A3C50u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3C52u, 1);  /* 0C0A3C50 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3C54u, 1);  /* 0C0A3C52 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A3C54 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3C58u, 2);  /* 0C0A3C56 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A3C58 mov Rm,Rn */
	r11 = 0x8000u; UPD(0x0C0A3C5Cu, 2);  /* 0C0A3C5A mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A3C5C extu.w Rm,Rn */
	IF(0x0C0A3C5Eu); { u32 t_ = r8; PR = 0x0C0A3C62u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3C62u); }  /* 0C0A3C5E jsr @Rn */
L_0C0A3C62: BLKS(0x0C0A3C62u);
	T = (r0 & r0) == 0;  /* 0C0A3C62 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3C80u, 4); goto L_0C0A3C80; }  /* 0C0A3C64 bf */
L_0C0A3C66: BLKS(0x0C0A3C66u);
	r0 = 0x1u;  /* 0C0A3C66 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A3C68 add #imm,Rn */
	r15 = r14;  /* 0C0A3C6A mov Rm,Rn */
	IF(0x0C0A3C6Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A3C6Eu, 4);  /* 0C0A3C6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3C70u, 1);  /* 0C0A3C6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A3C72u, 1);  /* 0C0A3C70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A3C74u, 1);  /* 0C0A3C72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A3C76u, 1);  /* 0C0A3C74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3C78u, 1);  /* 0C0A3C76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3C7Au, 1);  /* 0C0A3C78 mov.l @Rm+,Rn */
	IF(0x0C0A3C7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3C7A rts */
L_0C0A3C80: BLKS(0x0C0A3C80u);
	r8 = 0xC0606C0u; UPD(0x0C0A3C82u, 1);  /* 0C0A3C80 mov.l @(disp,pc),Rn */
	IF(0x0C0A3C82u); { u32 t_ = r8; PR = 0x0C0A3C86u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3C86u); }  /* 0C0A3C82 jsr @Rn */
L_0C0A3C86: BLKS(0x0C0A3C86u);
	T = (r0 & r0) == 0;  /* 0C0A3C86 tst Rm,Rn */
	if (T) { UPD(0x0C0A3C66u, 4); goto L_0C0A3C66; }  /* 0C0A3C88 bt */
L_0C0A3C8A: BLKS(0x0C0A3C8Au);
	r3 = 0x0u;  /* 0C0A3C8A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3C8Eu, 2);  /* 0C0A3C8C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3C90u, 1);  /* 0C0A3C8E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3C92u, 1);  /* 0C0A3C90 mov.w @(disp,pc),Rn */
	IF(0x0C0A3C92u); MACL = r12 * r9;  /* 0C0A3C92 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3C96u, 3);  /* 0C0A3C94 mov.w @Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3C98u, 1);  /* 0C0A3C96 mov.l @(disp,pc),Rn */
	IF(0x0C0A3C98u); r9 = MACL;  /* 0C0A3C98 sts macl,Rn */
	r9 += r1;  /* 0C0A3C9A add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C0A3C9C extu.w Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3CA0u, 4);  /* 0C0A3C9E mov.l @(disp,pc),Rn */
	r5 = 0xD3000104u; UPD(0x0C0A3CA2u, 1);  /* 0C0A3CA0 mov.l @(disp,pc),Rn */
	W32(r9 + 0x4u, r4); UPD(0x0C0A3CA4u, 1);  /* 0C0A3CA2 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0A3CA6u, 1);  /* 0C0A3CA4 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3CA6 mov Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0A3CAAu, 2);  /* 0C0A3CA8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3CAAu); { u32 t_ = r0; PR = 0x0C0A3CAEu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3CAEu); }  /* 0C0A3CAA jsr @Rn */
L_0C0A3CAE: BLKS(0x0C0A3CAEu);
	r10 = 0xC061380u; UPD(0x0C0A3CB0u, 1);  /* 0C0A3CAE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3CB0 mov Rm,Rn */
	r7 = 0x1700000u; UPD(0x0C0A3CB4u, 2);  /* 0C0A3CB2 mov.l @(disp,pc),Rn */
	r13 = 0xC0A1530u; UPD(0x0C0A3CB6u, 1);  /* 0C0A3CB4 mov.l @(disp,pc),Rn */
	IF(0x0C0A3CB6u); { u32 t_ = r10; PR = 0x0C0A3CBAu; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3CBAu); }  /* 0C0A3CB6 jsr @Rn */
L_0C0A3CBA: BLKS(0x0C0A3CBAu);
	IF(0x0C0A3CBAu); { u32 t_ = r13; PR = 0x0C0A3CBEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3CBEu); }  /* 0C0A3CBA jsr @Rn */
L_0C0A3CBE: BLKS(0x0C0A3CBEu);
	r10 = 0x100u; UPD(0x0C0A3CC0u, 1);  /* 0C0A3CBE mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C0A3CC0 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A3CC4u, 2);  /* 0C0A3CC2 mov.w @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0A3CC4 mov #imm,Rn */
	IF(0x0C0A3CC6u); W16(r0 + r9, r10); UPD(0x0C0A3CC8u, 2);  /* 0C0A3CC6 mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3CC8 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3CCA add #imm,Rn */
	IF(0x0C0A3CCCu); W16(r0 + r9, r10); UPD(0x0C0A3CCEu, 3);  /* 0C0A3CCC mov.w Rm,@(r0,Rn) */
	r6 = 0xACu; UPD(0x0C0A3CD0u, 1);  /* 0C0A3CCE mov.w @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3CD0 add #imm,Rn */
	r10 = 0xA8u; UPD(0x0C0A3CD4u, 2);  /* 0C0A3CD2 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3CD4 add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3CD6 add #imm,Rn */
	IF(0x0C0A3CD8u); W32(r0 + r9, r11); UPD(0x0C0A3CDAu, 3);  /* 0C0A3CD8 mov.l Rm,@(r0,Rn) */
	r13 += r10;  /* 0C0A3CDA add Rm,Rn */
	W32(r14, r6); UPD(0x0C0A3CDEu, 2);  /* 0C0A3CDC mov.l Rm,@Rn */
	r11 = 0x14u;  /* 0C0A3CDE mov #imm,Rn */
	r13 += 0x1u;  /* 0C0A3CE0 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3CE4u, 3);  /* 0C0A3CE2 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3CE6u, 1);  /* 0C0A3CE4 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3CE8u, 1);  /* 0C0A3CE6 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3CEAu, 1);  /* 0C0A3CE8 mov.w @(disp,pc),Rn */
	IF(0x0C0A3CEAu); MACL = r11 * r8;  /* 0C0A3CEA mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3CEEu, 3);  /* 0C0A3CEC mov.l @(disp,pc),Rn */
	IF(0x0C0A3CEEu); r8 = MACL;  /* 0C0A3CEE sts macl,Rn */
	r8 += r1;  /* 0C0A3CF0 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3CF2 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3CF6u, 4);  /* 0C0A3CF4 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3CF8u, 1);  /* 0C0A3CF6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3CF8 add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3CFCu, 2);  /* 0C0A3CFA mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3CFC add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3D00u, 2);  /* 0C0A3CFE mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3D00 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3D04u, 2);  /* 0C0A3D02 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3D06u, 1);  /* 0C0A3D04 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3D06 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3D0Au, 2);  /* 0C0A3D08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3D0Au); { u32 t_ = r0; PR = 0x0C0A3D0Eu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3D0Eu); }  /* 0C0A3D0A jsr @Rn */
L_0C0A3D0E: BLKS(0x0C0A3D0Eu);
	r6 = 0xC0A1530u; UPD(0x0C0A3D10u, 1);  /* 0C0A3D0E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3D10 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3D14u, 2);  /* 0C0A3D12 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3D16u, 1);  /* 0C0A3D14 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3D18u, 1);  /* 0C0A3D16 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3D18u); { u32 t_ = r6; PR = 0x0C0A3D1Cu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3D1Cu); }  /* 0C0A3D18 jsr @Rn */
L_0C0A3D1C: BLKS(0x0C0A3D1Cu);
	r0 = 0xB0u; UPD(0x0C0A3D1Eu, 1);  /* 0C0A3D1C mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3D20u, 1);  /* 0C0A3D1E mov.b @Rm,Rn */
	IF(0x0C0A3D20u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3D22u, 1);  /* 0C0A3D20 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3D24u, 1);  /* 0C0A3D22 mov.b Rm,@Rn */
	IF(0x0C0A3D24u); W8(r0 + r8, r5); UPD(0x0C0A3D26u, 1);  /* 0C0A3D24 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3D28u, 1);  /* 0C0A3D26 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3D2Au, 1);  /* 0C0A3D28 mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3D2A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3D2Eu, 2);  /* 0C0A3D2C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3D2E add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A3C66u, 4); goto L_0C0A3C66; }  /* 0C0A3D30 bra */
}

void f_0C0A3E80(sh3_t *c)
{
	LOCALS;
L_0C0A3E80: BLKS(0x0C0A3E80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E82u, 1);  /* 0C0A3E80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E84u, 1);  /* 0C0A3E82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E86u, 1);  /* 0C0A3E84 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E88u, 1);  /* 0C0A3E86 mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3E8Au, 1);  /* 0C0A3E88 mov.l @(disp,pc),Rn */
	IF(0x0C0A3E8Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A3E8Cu, 1);  /* 0C0A3E8A sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3E8Eu, 1);  /* 0C0A3E8C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A3E8E mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3E92u, 2);  /* 0C0A3E90 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3E94u, 1);  /* 0C0A3E92 mov.l @(disp,pc),Rn */
	IF(0x0C0A3E94u); { u32 t_ = r8; PR = 0x0C0A3E98u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3E98u); }  /* 0C0A3E94 jsr @Rn */
L_0C0A3E98: BLKS(0x0C0A3E98u);
	T = (r0 & r0) == 0;  /* 0C0A3E98 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3EB0u, 4); goto L_0C0A3EB0; }  /* 0C0A3E9A bf */
L_0C0A3E9C: BLKS(0x0C0A3E9Cu);
	r0 = 0x1u;  /* 0C0A3E9C mov #imm,Rn */
	r15 = r14;  /* 0C0A3E9E mov Rm,Rn */
	IF(0x0C0A3EA0u); PR = R32(r15); r15 += 4; UPD(0x0C0A3EA2u, 3);  /* 0C0A3EA0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3EA4u, 1);  /* 0C0A3EA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3EA6u, 1);  /* 0C0A3EA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3EA8u, 1);  /* 0C0A3EA6 mov.l @Rm+,Rn */
	IF(0x0C0A3EA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3EA8 rts */
L_0C0A3EB0: BLKS(0x0C0A3EB0u);
	r8 = 0xC0606C0u; UPD(0x0C0A3EB2u, 1);  /* 0C0A3EB0 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EB2u); { u32 t_ = r8; PR = 0x0C0A3EB6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3EB6u); }  /* 0C0A3EB2 jsr @Rn */
L_0C0A3EB6: BLKS(0x0C0A3EB6u);
	T = (r0 & r0) == 0;  /* 0C0A3EB6 tst Rm,Rn */
	if (T) { UPD(0x0C0A3E9Cu, 4); goto L_0C0A3E9C; }  /* 0C0A3EB8 bt */
L_0C0A3EBA: BLKS(0x0C0A3EBAu);
	r0 = 0x0u;  /* 0C0A3EBA mov #imm,Rn */
	r6 = 0xC2755BCu; UPD(0x0C0A3EBEu, 2);  /* 0C0A3EBC mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A3EC0u, 1);  /* 0C0A3EBE mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3EC2u, 1);  /* 0C0A3EC0 mov.w @(disp,pc),Rn */
	IF(0x0C0A3EC2u); MACL = r9 * r8;  /* 0C0A3EC2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A3EC6u, 3);  /* 0C0A3EC4 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EC6u); r8 = MACL;  /* 0C0A3EC6 sts macl,Rn */
	r4 = 0xD3000104u; UPD(0x0C0A3ECAu, 2);  /* 0C0A3EC8 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0A3ECA add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3ECEu, 2);  /* 0C0A3ECC mov.w @Rm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C0A3ED0u, 1);  /* 0C0A3ECE mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0A3ED0 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0A3ED4u, 2);  /* 0C0A3ED2 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3ED6u, 1);  /* 0C0A3ED4 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0A3ED6 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0A3EDAu, 2);  /* 0C0A3ED8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3EDAu); { u32 t_ = r7; PR = 0x0C0A3EDEu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3EDEu); }  /* 0C0A3EDA jsr @Rn */
L_0C0A3EDE: BLKS(0x0C0A3EDEu);
	r10 = 0xC061380u; UPD(0x0C0A3EE0u, 1);  /* 0C0A3EDE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A3EE0 mov Rm,Rn */
	r6 = 0x1600000u; UPD(0x0C0A3EE4u, 2);  /* 0C0A3EE2 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EE4u); { u32 t_ = r10; PR = 0x0C0A3EE8u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3EE8u); }  /* 0C0A3EE4 jsr @Rn */
L_0C0A3EE8: BLKS(0x0C0A3EE8u);
	r5 = 0xC0A1530u; UPD(0x0C0A3EEAu, 1);  /* 0C0A3EE8 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EEAu); { u32 t_ = r5; PR = 0x0C0A3EEEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3EEEu); }  /* 0C0A3EEA jsr @Rn */
L_0C0A3EEE: BLKS(0x0C0A3EEEu);
	r0 = 0x86u; UPD(0x0C0A3EF0u, 1);  /* 0C0A3EEE mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C0A3EF0 mov #imm,Rn */
	r4 = 0x100u; UPD(0x0C0A3EF4u, 2);  /* 0C0A3EF2 mov.w @(disp,pc),Rn */
	IF(0x0C0A3EF4u); W16(r0 + r8, r4); UPD(0x0C0A3EF6u, 1);  /* 0C0A3EF4 mov.w Rm,@(r0,Rn) */
	r3 = 0x30000u; UPD(0x0C0A3EF8u, 1);  /* 0C0A3EF6 mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3EF8 add #imm,Rn */
	IF(0x0C0A3EFAu); W32(r0 + r8, r3); UPD(0x0C0A3EFCu, 2);  /* 0C0A3EFA mov.l Rm,@(r0,Rn) */
	r0 += 0x21u;  /* 0C0A3EFC add #imm,Rn */
	IF(0x0C0A3EFEu); W8(r0 + r8, r2); UPD(0x0C0A3F00u, 2);  /* 0C0A3EFE mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A3F00 add #imm,Rn */
	{ IF(0x0C0A3F04u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A3E9Cu, 4); goto L_0C0A3E9C; }  /* 0C0A3F02 bra */
}

void f_0C0A4030(sh3_t *c)
{
	LOCALS;
L_0C0A4030: BLKS(0x0C0A4030u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4032u, 1);  /* 0C0A4030 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4034u, 1);  /* 0C0A4032 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4036u, 1);  /* 0C0A4034 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4038u, 1);  /* 0C0A4036 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A403Au, 1);  /* 0C0A4038 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A403A exts.w Rm,Rn */
	r5 = 0xC07A980u; UPD(0x0C0A403Eu, 2);  /* 0C0A403C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A403E mov Rm,Rn */
	IF(0x0C0A4040u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4042u, 2);  /* 0C0A4040 sts.l pr,@-Rn */
	IF(0x0C0A4042u); { u32 t_ = r5; PR = 0x0C0A4046u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C07A980, 0x0C07A980u, 0x0C0A4046u); }  /* 0C0A4042 jsr @Rn */
L_0C0A4046: BLKS(0x0C0A4046u);
	r3 = 0xB4u; UPD(0x0C0A4048u, 1);  /* 0C0A4046 mov.w @(disp,pc),Rn */
	IF(0x0C0A4048u); MACL = r11 * r3;  /* 0C0A4048 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A404Cu, 3);  /* 0C0A404A mov.l @(disp,pc),Rn */
	IF(0x0C0A404Cu); r9 = MACL;  /* 0C0A404C sts macl,Rn */
	r9 += r0;  /* 0C0A404E add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C0A4052u, 3);  /* 0C0A4050 mov.w @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C0A4054u, 1);  /* 0C0A4052 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0A4054 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A4058u, 2);  /* 0C0A4056 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C0A4058 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C0A405Cu, 2);  /* 0C0A405A mov.l @Rm,Rn */
	IF(0x0C0A405Cu); { u32 t_ = r0; PR = 0x0C0A4060u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A4060u); }  /* 0C0A405C jsr @Rn */
L_0C0A4060: BLKS(0x0C0A4060u);
	r5 = R32(r8); UPD(0x0C0A4062u, 1);  /* 0C0A4060 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0A4064u, 1);  /* 0C0A4062 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A4066u, 1);  /* 0C0A4064 mov.w @Rm,Rn */
	IF(0x0C0A4066u); { u32 t_ = r8; PR = 0x0C0A406Au; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A406Au); }  /* 0C0A4066 jsr @Rn */
L_0C0A406A: BLKS(0x0C0A406Au);
	r4 = R32(r9 + 0x24u); UPD(0x0C0A406Cu, 1);  /* 0C0A406A mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A406Eu, 1);  /* 0C0A406C mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0A4070u, 1);  /* 0C0A406E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0A4070 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0A4074u, 2);  /* 0C0A4072 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0A4074 add Rm,Rn */
	r3 += r4;  /* 0C0A4076 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0A407Au, 3);  /* 0C0A4078 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A407Au); T = (s32)r3 >= 0;  /* 0C0A407A cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0A407Eu, 2);  /* 0C0A407C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A4160u, 3); goto L_0C0A4160; } UPD(0x0C0A4082u, 1); goto L_0C0A4082; }  /* 0C0A407E bf/s */
L_0C0A4082: BLKS(0x0C0A4082u);
	r4 = 0xD00000u; UPD(0x0C0A4084u, 1);  /* 0C0A4082 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0A4084 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A409Eu, 4); goto L_0C0A409E; }  /* 0C0A4086 bt */
L_0C0A4088: BLKS(0x0C0A4088u);
	r2 = 0xC3929E0u; UPD(0x0C0A408Au, 1);  /* 0C0A4088 mov.l @(disp,pc),Rn */
	r8 = R32(r2); UPD(0x0C0A408Cu, 1);  /* 0C0A408A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A408Eu, 1);  /* 0C0A408C mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0A408E mov Rm,Rn */
	r2 -= r8;  /* 0C0A4090 sub Rm,Rn */
	r2 += r6;  /* 0C0A4092 add Rm,Rn */
	IF(0x0C0A4094u); T = (s32)r2 >= 0;  /* 0C0A4094 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4150u, 7); goto L_0C0A4150; }  /* 0C0A4096 bf */
L_0C0A4098: BLKS(0x0C0A4098u);
	r7 = 0xA80000u; UPD(0x0C0A409Au, 1);  /* 0C0A4098 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0A409A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A4130u, 4); goto L_0C0A4130; }  /* 0C0A409C bf */
L_0C0A409E: BLKS(0x0C0A409Eu);
	r10 = 0x0u;  /* 0C0A409E mov #imm,Rn */
	W32(r9, r10); UPD(0x0C0A40A2u, 2);  /* 0C0A40A0 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0A40A2 mov #imm,Rn */
	UPD(0x0C0A40A4u, 1);
L_0C0A40A4: BLKS(0x0C0A40A4u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0A40A4 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A40A6 tst Rm,Rn */
	if (T) { UPD(0x0C0A40C0u, 5); goto L_0C0A40C0; }  /* 0C0A40A8 bt */
L_0C0A40AA: BLKS(0x0C0A40AAu);
	r15 = r14;  /* 0C0A40AA mov Rm,Rn */
	IF(0x0C0A40ACu); PR = R32(r15); r15 += 4; UPD(0x0C0A40AEu, 2);  /* 0C0A40AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A40B0u, 1);  /* 0C0A40AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A40B2u, 1);  /* 0C0A40B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A40B4u, 1);  /* 0C0A40B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A40B6u, 1);  /* 0C0A40B4 mov.l @Rm+,Rn */
	IF(0x0C0A40B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A40B6 rts */
L_0C0A40C0: BLKS(0x0C0A40C0u);
	r8 = 0xC0A9E40u; UPD(0x0C0A40C2u, 1);  /* 0C0A40C0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A40C2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0A40C4 mov #imm,Rn */
	IF(0x0C0A40C6u); { u32 t_ = r8; PR = 0x0C0A40CAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0A40CAu); }  /* 0C0A40C6 jsr @Rn */
L_0C0A40CA: BLKS(0x0C0A40CAu);
	T = (r0 & r0) == 0;  /* 0C0A40CA tst Rm,Rn */
	if (T) { UPD(0x0C0A40AAu, 4); goto L_0C0A40AA; }  /* 0C0A40CC bt */
L_0C0A40CE: BLKS(0x0C0A40CEu);
	r7 = 0xB4u; UPD(0x0C0A40D0u, 1);  /* 0C0A40CE mov.w @(disp,pc),Rn */
	IF(0x0C0A40D0u); MACL = r11 * r7;  /* 0C0A40D0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A40D4u, 3);  /* 0C0A40D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A40D4u); r8 = MACL;  /* 0C0A40D4 sts macl,Rn */
	r8 += r2;  /* 0C0A40D6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0A40DAu, 3);  /* 0C0A40D8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A40DA mov Rm,Rn */
	IF(0x0C0A40DCu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A40DEu, 2);  /* 0C0A40DC mov.b @(r0,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C0A40E0u, 1);  /* 0C0A40DE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0A40E0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0A40E4u, 2);  /* 0C0A40E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A40E4u); { u32 t_ = r10; PR = 0x0C0A40E8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0A40E8u); }  /* 0C0A40E4 jsr @Rn */
L_0C0A40E8: BLKS(0x0C0A40E8u);
	T = (r0 & r0) == 0;  /* 0C0A40E8 tst Rm,Rn */
	if (T) { UPD(0x0C0A40AAu, 4); goto L_0C0A40AA; }  /* 0C0A40EA bt */
L_0C0A40EC: BLKS(0x0C0A40ECu);
	r4 = r11;  /* 0C0A40EC mov Rm,Rn */
	r11 = 0xC058090u; UPD(0x0C0A40F0u, 2);  /* 0C0A40EE mov.l @(disp,pc),Rn */
	r10 = 0xC057390u; UPD(0x0C0A40F2u, 1);  /* 0C0A40F0 mov.l @(disp,pc),Rn */
	IF(0x0C0A40F2u); { u32 t_ = r11; PR = 0x0C0A40F6u; IF(0x0C0A40F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C0A40F6u); }  /* 0C0A40F2 jsr @Rn */
L_0C0A40F6: BLKS(0x0C0A40F6u);
	r4 = 0x280u; UPD(0x0C0A40F8u, 1);  /* 0C0A40F6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0A40F8 exts.w Rm,Rn */
	IF(0x0C0A40FAu); MACL = r1 * r4;  /* 0C0A40FA mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0A40FEu, 4);  /* 0C0A40FC mov.l @(disp,pc),Rn */
	IF(0x0C0A40FEu); r0 = MACL;  /* 0C0A40FE sts macl,Rn */
	r0 += r5;  /* 0C0A4100 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0A4104u, 3);  /* 0C0A4102 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0A4106u, 1);  /* 0C0A4104 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0A4108u, 1);  /* 0C0A4106 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4108u); { u32 t_ = r10; PR = 0x0C0A410Cu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0A410Cu); }  /* 0C0A4108 jsr @Rn */
L_0C0A410C: BLKS(0x0C0A410Cu);
	r3 = 0x28000u; UPD(0x0C0A410Eu, 1);  /* 0C0A410C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A410E add #imm,Rn */
	r11 = 0xC0A81B0u; UPD(0x0C0A4112u, 2);  /* 0C0A4110 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C0A4112 exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4116u, 2);  /* 0C0A4114 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0A4116 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A411Au, 2);  /* 0C0A4118 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C0A411A mov Rm,Rn */
	IF(0x0C0A411Cu); { u32 t_ = r11; PR = 0x0C0A4120u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C0A4120u); }  /* 0C0A411C jsr @Rn */
L_0C0A4120: BLKS(0x0C0A4120u);
	{ IF(0x0C0A4122u); ; /* slot nop */ UPD(0x0C0A40AAu, 3); goto L_0C0A40AA; }  /* 0C0A4120 bra */
L_0C0A4130: BLKS(0x0C0A4130u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A4132u, 1);  /* 0C0A4130 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C0A4132 add #imm,Rn */
	IF(0x0C0A4134u); r0 >>= 2;  /* 0C0A4134 shlr2 Rn */
	IF(0x0C0A4136u); r0 >>= 2;  /* 0C0A4136 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A4138 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C0A413Cu, 5);  /* 0C0A413A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C0A413Eu, 1);  /* 0C0A413C mov.l @(disp,Rm),Rn */
	r5 = 0xC18DDC4u; UPD(0x0C0A4140u, 1);  /* 0C0A413E mov.l @(disp,pc),Rn */
	IF(0x0C0A4140u); r0 <<= 2;  /* 0C0A4140 shll2 Rn */
	IF(0x0C0A4142u); r3 = R32(r0 + r5); UPD(0x0C0A4144u, 2);  /* 0C0A4142 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0A4146u, 1);  /* 0C0A4144 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0A03B0u; UPD(0x0C0A4148u, 1);  /* 0C0A4146 mov.l @(disp,pc),Rn */
	IF(0x0C0A4148u); { u32 t_ = r9; PR = 0x0C0A414Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A414Cu); }  /* 0C0A4148 jsr @Rn */
L_0C0A414C: BLKS(0x0C0A414Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A40A4u, 3); goto L_0C0A40A4; }  /* 0C0A414C bra */
L_0C0A4150: BLKS(0x0C0A4150u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A4098u, 3); goto L_0C0A4098; }  /* 0C0A4150 bra */
L_0C0A4160: BLKS(0x0C0A4160u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A4082u, 3); goto L_0C0A4082; }  /* 0C0A4160 bra */
}

void f_0C0A4210(sh3_t *c)
{
	LOCALS;
L_0C0A4210: BLKS(0x0C0A4210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4212u, 1);  /* 0C0A4210 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A4212 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4216u, 2);  /* 0C0A4214 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0A4218u, 1);  /* 0C0A4216 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A421Au, 1);  /* 0C0A4218 mov.l Rm,@-Rn */
	IF(0x0C0A421Au); MACL = r1 * r5;  /* 0C0A421A mul.l Rm,Rn */
	IF(0x0C0A421Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A421Eu, 3);  /* 0C0A421C sts.l pr,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A4220u, 1);  /* 0C0A421E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A4220 mov Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4224u, 2);  /* 0C0A4222 mov.l @(disp,pc),Rn */
	IF(0x0C0A4224u); r8 = MACL;  /* 0C0A4224 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4226 add #imm,Rn */
	IF(0x0C0A4228u); { u32 t_ = r9; PR = 0x0C0A422Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A422Cu); }  /* 0C0A4228 jsr @Rn */
L_0C0A422C: BLKS(0x0C0A422Cu);
	r3 = 0x28000u; UPD(0x0C0A422Eu, 1);  /* 0C0A422C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A422E mov #imm,Rn */
	r2 = 0xC177C74u; UPD(0x0C0A4232u, 2);  /* 0C0A4230 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0A4232 mov Rm,Rn */
	r9 = 0xC0A8690u; UPD(0x0C0A4236u, 2);  /* 0C0A4234 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0A4238u, 1);  /* 0C0A4236 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A423Au, 1);  /* 0C0A4238 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A423Cu, 1);  /* 0C0A423A mov.l @(disp,Rm),Rn */
	IF(0x0C0A423Cu); { u32 t_ = r9; PR = 0x0C0A4240u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C0A4240u); }  /* 0C0A423C jsr @Rn */
L_0C0A4240: BLKS(0x0C0A4240u);
	r0 = 0x14u;  /* 0C0A4240 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4244u, 2);  /* 0C0A4242 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0A4244 mov #imm,Rn */
	r0 = 0xC0ADDE0u; UPD(0x0C0A4248u, 2);  /* 0C0A4246 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4248 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0A424Cu, 2);  /* 0C0A424A mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0A424Eu, 1);  /* 0C0A424C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A4250u, 1);  /* 0C0A424E mov.l @(disp,Rm),Rn */
	IF(0x0C0A4250u); { u32 t_ = r0; PR = 0x0C0A4254u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4254u); }  /* 0C0A4250 jsr @Rn */
L_0C0A4254: BLKS(0x0C0A4254u);
	W32(r8, r9); UPD(0x0C0A4256u, 1);  /* 0C0A4254 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A4256 mov Rm,Rn */
	IF(0x0C0A4258u); PR = R32(r15); r15 += 4; UPD(0x0C0A425Au, 2);  /* 0C0A4258 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A425Cu, 1);  /* 0C0A425A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A425Eu, 1);  /* 0C0A425C mov.l @Rm+,Rn */
	IF(0x0C0A425Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A425E rts */
}

void f_0C0A4280(sh3_t *c)
{
	LOCALS;
L_0C0A4280: BLKS(0x0C0A4280u);
	r3 = 0xB4u; UPD(0x0C0A4282u, 1);  /* 0C0A4280 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A4282 exts.w Rm,Rn */
	IF(0x0C0A4284u); MACL = r4 * r3;  /* 0C0A4284 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4288u, 4);  /* 0C0A4286 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A428Au, 1);  /* 0C0A4288 mov.l Rm,@-Rn */
	IF(0x0C0A428Au); r3 = MACL;  /* 0C0A428A sts macl,Rn */
	r3 += r0;  /* 0C0A428C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0A4290u, 3);  /* 0C0A428E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A4290 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A4294u, 2);  /* 0C0A4292 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0A4296u, 1);  /* 0C0A4294 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0A4298u, 1);  /* 0C0A4296 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0A4298 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A429Cu, 2);  /* 0C0A429A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0A429C add Rm,Rn */
	r7 += r0;  /* 0C0A429E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0A42A2u, 3);  /* 0C0A42A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A42A2u); T = (s32)r7 >= 0;  /* 0C0A42A2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A4300u, 4); goto L_0C0A4300; } UPD(0x0C0A42A8u, 1); goto L_0C0A42A8; }  /* 0C0A42A4 bf/s */
L_0C0A42A8: BLKS(0x0C0A42A8u);
	r2 = 0xA80000u; UPD(0x0C0A42AAu, 1);  /* 0C0A42A8 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0A42AA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A42C4u, 4); goto L_0C0A42C4; }  /* 0C0A42AC bt */
L_0C0A42AE: BLKS(0x0C0A42AEu);
	r2 = r6;  /* 0C0A42AE mov Rm,Rn */
	r5 = 0xC3929E0u; UPD(0x0C0A42B2u, 2);  /* 0C0A42B0 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A42B4u, 1);  /* 0C0A42B2 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A42B6u, 1);  /* 0C0A42B4 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A42B6 sub Rm,Rn */
	r2 += r6;  /* 0C0A42B8 add Rm,Rn */
	IF(0x0C0A42BAu); T = (s32)r2 >= 0;  /* 0C0A42BA cmp/pz Rn */
	if (!T) { UPD(0x0C0A42F0u, 6); goto L_0C0A42F0; }  /* 0C0A42BC bf */
L_0C0A42BE: BLKS(0x0C0A42BEu);
	r0 = 0x800000u; UPD(0x0C0A42C0u, 1);  /* 0C0A42BE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A42C0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A42D0u, 4); goto L_0C0A42D0; }  /* 0C0A42C2 bf */
L_0C0A42C4: BLKS(0x0C0A42C4u);
	r4 = 0x0u;  /* 0C0A42C4 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0A42C8u, 2);  /* 0C0A42C6 mov.l Rm,@Rn */
L_0C0A42C8: BLKS(0x0C0A42C8u);
	r15 = r14;  /* 0C0A42C8 mov Rm,Rn */
	IF(0x0C0A42CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A42CA rts */
L_0C0A42D0: BLKS(0x0C0A42D0u);
	r2 = 0x99u; UPD(0x0C0A42D2u, 1);  /* 0C0A42D0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0A42D2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A42D6u, 2);  /* 0C0A42D4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0A42D6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0A42DAu, 2);  /* 0C0A42D8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0A42DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A42DC tst Rm,Rn */
	if (T) { UPD(0x0C0A42C8u, 5); goto L_0C0A42C8; }  /* 0C0A42DE bt */
L_0C0A42E0: BLKS(0x0C0A42E0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0A42E2u, 1);  /* 0C0A42E0 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0A42E2 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0A42E4 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0A42E8u, 3);  /* 0C0A42E6 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A0380u; UPD(0x0C0A42EAu, 1);  /* 0C0A42E8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A42EA mov Rm,Rn */
	IF(0x0C0A42ECu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0A42EC jmp @Rn */
L_0C0A42F0: BLKS(0x0C0A42F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A42BEu, 3); goto L_0C0A42BE; }  /* 0C0A42F0 bra */
L_0C0A4300: BLKS(0x0C0A4300u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A42A8u, 3); goto L_0C0A42A8; }  /* 0C0A4300 bra */
}

void f_0C0A4400(sh3_t *c)
{
	LOCALS;
L_0C0A4400: BLKS(0x0C0A4400u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4402u, 1);  /* 0C0A4400 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4404u, 1);  /* 0C0A4402 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4406u, 1);  /* 0C0A4404 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4408u, 1);  /* 0C0A4406 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A440Au, 1);  /* 0C0A4408 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A440Cu, 1);  /* 0C0A440A mov.l Rm,@-Rn */
	r8 = 0xC050D70u; UPD(0x0C0A440Eu, 1);  /* 0C0A440C mov.l @(disp,pc),Rn */
	IF(0x0C0A440Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A4410u, 1);  /* 0C0A440E sts.l pr,@-Rn */
	r4 = 0xB0u; UPD(0x0C0A4412u, 1);  /* 0C0A4410 mov.w @(disp,pc),Rn */
	IF(0x0C0A4412u); { u32 t_ = r8; PR = 0x0C0A4416u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4416u); }  /* 0C0A4412 jsr @Rn */
L_0C0A4416: BLKS(0x0C0A4416u);
	r2 = 0xC3929E0u; UPD(0x0C0A4418u, 1);  /* 0C0A4416 mov.l @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C0A4418 add #imm,Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A441Cu, 2);  /* 0C0A441A mov.l @(disp,pc),Rn */
	IF(0x0C0A441Cu); r0 <<= 16;  /* 0C0A441C shll16 Rn */
	r10 = R32(r2); UPD(0x0C0A4420u, 2);  /* 0C0A441E mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C0A4420 mov #imm,Rn */
	r11 = 0x100u; UPD(0x0C0A4424u, 2);  /* 0C0A4422 mov.w @(disp,pc),Rn */
	IF(0x0C0A4424u); { u32 t_ = r8; PR = 0x0C0A4428u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A4428u); }  /* 0C0A4424 jsr @Rn */
L_0C0A4428: BLKS(0x0C0A4428u);
	r12 = 0x20000u; UPD(0x0C0A442Au, 1);  /* 0C0A4428 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0A442A tst Rm,Rn */
	if (!T) { UPD(0x0C0A4450u, 4); goto L_0C0A4450; }  /* 0C0A442C bf */
L_0C0A442E: BLKS(0x0C0A442Eu);
	r0 = 0x1u;  /* 0C0A442E mov #imm,Rn */
	r15 = r14;  /* 0C0A4430 mov Rm,Rn */
	IF(0x0C0A4432u); PR = R32(r15); r15 += 4; UPD(0x0C0A4434u, 3);  /* 0C0A4432 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4436u, 1);  /* 0C0A4434 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4438u, 1);  /* 0C0A4436 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A443Au, 1);  /* 0C0A4438 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A443Cu, 1);  /* 0C0A443A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A443Eu, 1);  /* 0C0A443C mov.l @Rm+,Rn */
	IF(0x0C0A443Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A443E rts */
L_0C0A4450: BLKS(0x0C0A4450u);
	r5 = 0xC2755BCu; UPD(0x0C0A4452u, 1);  /* 0C0A4450 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A4452 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A4456u, 2);  /* 0C0A4454 mov.w @Rm,Rn */
	r2 = 0x2Bu;  /* 0C0A4456 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0A445Au, 2);  /* 0C0A4458 mov.w @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C0A445A mov #imm,Rn */
	IF(0x0C0A445Cu); MACL = r9 * r8;  /* 0C0A445C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4460u, 4);  /* 0C0A445E mov.l @(disp,pc),Rn */
	IF(0x0C0A4460u); r8 = MACL;  /* 0C0A4460 sts macl,Rn */
	r8 += r0;  /* 0C0A4462 add Rm,Rn */
	r6 = 0xC0A02D0u; UPD(0x0C0A4466u, 3);  /* 0C0A4464 mov.l @(disp,pc),Rn */
	r3 = 0xD3000000u; UPD(0x0C0A4468u, 1);  /* 0C0A4466 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0A446Au, 1);  /* 0C0A4468 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0A446Cu, 1);  /* 0C0A446A mov.l Rm,@Rn */
	r4 = r9;  /* 0C0A446C mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A4470u, 2);  /* 0C0A446E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A4470u); { u32 t_ = r6; PR = 0x0C0A4474u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A4474u); }  /* 0C0A4470 jsr @Rn */
L_0C0A4474: BLKS(0x0C0A4474u);
	r5 = 0xC0A1530u; UPD(0x0C0A4476u, 1);  /* 0C0A4474 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A4476 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A447Au, 2);  /* 0C0A4478 mov.l @(disp,pc),Rn */
	IF(0x0C0A447Au); { u32 t_ = r5; PR = 0x0C0A447Eu; IF(0x0C0A447Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A447Eu); }  /* 0C0A447A jsr @Rn */
L_0C0A447E: BLKS(0x0C0A447Eu);
	r0 = 0x1500000u; UPD(0x0C0A4480u, 1);  /* 0C0A447E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A4480 mov Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0A4484u, 2);  /* 0C0A4482 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C0A4484 mov Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A4488u, 2);  /* 0C0A4486 mov.l Rm,@(disp,Rn) */
	r10 = 0xC058060u; UPD(0x0C0A448Au, 1);  /* 0C0A4488 mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C0A448Cu, 1);  /* 0C0A448A mov.w @(disp,pc),Rn */
	IF(0x0C0A448Cu); { u32 t_ = r10; PR = 0x0C0A4490u; IF(0x0C0A448Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A4490u); }  /* 0C0A448C jsr @Rn */
L_0C0A4490: BLKS(0x0C0A4490u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C0A4492u, 1);  /* 0C0A4490 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0A4492 mov Rm,Rn */
	IF(0x0C0A4494u); { u32 t_ = r9; PR = 0x0C0A4498u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A4498u); }  /* 0C0A4494 jsr @Rn */
L_0C0A4498: BLKS(0x0C0A4498u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A449Au, 1);  /* 0C0A4498 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C0A449A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C0A449Eu, 2);  /* 0C0A449C mov.w @(disp,pc),Rn */
	IF(0x0C0A449Eu); W8(r0 + r8, r3); UPD(0x0C0A44A0u, 1);  /* 0C0A449E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A44A0 add #imm,Rn */
	{ IF(0x0C0A44A4u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A442Eu, 4); goto L_0C0A442E; }  /* 0C0A44A2 bra */
}

void f_0C0A44E0(sh3_t *c)
{
	LOCALS;
L_0C0A44E0: BLKS(0x0C0A44E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44E2u, 1);  /* 0C0A44E0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A44E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44E6u, 2);  /* 0C0A44E4 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0A44E8u, 1);  /* 0C0A44E6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44EAu, 1);  /* 0C0A44E8 mov.l Rm,@-Rn */
	IF(0x0C0A44EAu); MACL = r1 * r5;  /* 0C0A44EA mul.l Rm,Rn */
	IF(0x0C0A44ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0A44EEu, 3);  /* 0C0A44EC sts.l pr,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A44F0u, 1);  /* 0C0A44EE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A44F0 mov Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A44F4u, 2);  /* 0C0A44F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A44F4u); r8 = MACL;  /* 0C0A44F4 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A44F6 add #imm,Rn */
	IF(0x0C0A44F8u); { u32 t_ = r9; PR = 0x0C0A44FCu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A44FCu); }  /* 0C0A44F8 jsr @Rn */
L_0C0A44FC: BLKS(0x0C0A44FCu);
	r3 = 0x28000u; UPD(0x0C0A44FEu, 1);  /* 0C0A44FC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A44FE mov #imm,Rn */
	r2 = 0xC177C74u; UPD(0x0C0A4502u, 2);  /* 0C0A4500 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0A4502 mov Rm,Rn */
	r9 = 0xC0A9060u; UPD(0x0C0A4506u, 2);  /* 0C0A4504 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0A4508u, 1);  /* 0C0A4506 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A450Au, 1);  /* 0C0A4508 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A450Cu, 1);  /* 0C0A450A mov.l @(disp,Rm),Rn */
	IF(0x0C0A450Cu); { u32 t_ = r9; PR = 0x0C0A4510u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9060, 0x0C0A9060u, 0x0C0A4510u); }  /* 0C0A450C jsr @Rn */
L_0C0A4510: BLKS(0x0C0A4510u);
	r0 = 0x14u;  /* 0C0A4510 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4514u, 2);  /* 0C0A4512 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0A4514 mov #imm,Rn */
	r0 = 0xC0ADDE0u; UPD(0x0C0A4518u, 2);  /* 0C0A4516 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4518 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0A451Cu, 2);  /* 0C0A451A mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0A451Eu, 1);  /* 0C0A451C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A4520u, 1);  /* 0C0A451E mov.l @(disp,Rm),Rn */
	IF(0x0C0A4520u); { u32 t_ = r0; PR = 0x0C0A4524u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4524u); }  /* 0C0A4520 jsr @Rn */
L_0C0A4524: BLKS(0x0C0A4524u);
	r0 = 0xC0AFC10u; UPD(0x0C0A4526u, 1);  /* 0C0A4524 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A4526 add #imm,Rn */
	IF(0x0C0A4528u); { u32 t_ = r0; PR = 0x0C0A452Cu; r4 = 0x71u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A452Cu); }  /* 0C0A4528 jsr @Rn */
L_0C0A452C: BLKS(0x0C0A452Cu);
	W32(r8, r9); UPD(0x0C0A452Eu, 1);  /* 0C0A452C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A452E mov Rm,Rn */
	IF(0x0C0A4530u); PR = R32(r15); r15 += 4; UPD(0x0C0A4532u, 2);  /* 0C0A4530 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4534u, 1);  /* 0C0A4532 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4536u, 1);  /* 0C0A4534 mov.l @Rm+,Rn */
	IF(0x0C0A4536u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4536 rts */
}

void f_0C0A4560(sh3_t *c)
{
	LOCALS;
L_0C0A4560: BLKS(0x0C0A4560u);
	r3 = 0xB4u; UPD(0x0C0A4562u, 1);  /* 0C0A4560 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A4562 exts.w Rm,Rn */
	IF(0x0C0A4564u); MACL = r4 * r3;  /* 0C0A4564 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4568u, 4);  /* 0C0A4566 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A456Au, 1);  /* 0C0A4568 mov.l Rm,@-Rn */
	IF(0x0C0A456Au); r3 = MACL;  /* 0C0A456A sts macl,Rn */
	r3 += r0;  /* 0C0A456C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0A4570u, 3);  /* 0C0A456E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A4570 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A4574u, 2);  /* 0C0A4572 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0A4576u, 1);  /* 0C0A4574 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0A4578u, 1);  /* 0C0A4576 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0A4578 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A457Cu, 2);  /* 0C0A457A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0A457C add Rm,Rn */
	r7 += r0;  /* 0C0A457E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0A4582u, 3);  /* 0C0A4580 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A4582u); T = (s32)r7 >= 0;  /* 0C0A4582 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A45E0u, 4); goto L_0C0A45E0; } UPD(0x0C0A4588u, 1); goto L_0C0A4588; }  /* 0C0A4584 bf/s */
L_0C0A4588: BLKS(0x0C0A4588u);
	r2 = 0xB80000u; UPD(0x0C0A458Au, 1);  /* 0C0A4588 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0A458A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A45A4u, 4); goto L_0C0A45A4; }  /* 0C0A458C bt */
L_0C0A458E: BLKS(0x0C0A458Eu);
	r2 = r6;  /* 0C0A458E mov Rm,Rn */
	r5 = 0xC3929E0u; UPD(0x0C0A4592u, 2);  /* 0C0A4590 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A4594u, 1);  /* 0C0A4592 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A4596u, 1);  /* 0C0A4594 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A4596 sub Rm,Rn */
	r2 += r6;  /* 0C0A4598 add Rm,Rn */
	IF(0x0C0A459Au); T = (s32)r2 >= 0;  /* 0C0A459A cmp/pz Rn */
	if (!T) { UPD(0x0C0A45D0u, 6); goto L_0C0A45D0; }  /* 0C0A459C bf */
L_0C0A459E: BLKS(0x0C0A459Eu);
	r0 = 0x900000u; UPD(0x0C0A45A0u, 1);  /* 0C0A459E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A45A0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A45B0u, 4); goto L_0C0A45B0; }  /* 0C0A45A2 bf */
L_0C0A45A4: BLKS(0x0C0A45A4u);
	r4 = 0x0u;  /* 0C0A45A4 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0A45A8u, 2);  /* 0C0A45A6 mov.l Rm,@Rn */
L_0C0A45A8: BLKS(0x0C0A45A8u);
	r15 = r14;  /* 0C0A45A8 mov Rm,Rn */
	IF(0x0C0A45AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A45AA rts */
L_0C0A45B0: BLKS(0x0C0A45B0u);
	r2 = 0x99u; UPD(0x0C0A45B2u, 1);  /* 0C0A45B0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0A45B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A45B6u, 2);  /* 0C0A45B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0A45B6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0A45BAu, 2);  /* 0C0A45B8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0A45BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A45BC tst Rm,Rn */
	if (T) { UPD(0x0C0A45A8u, 5); goto L_0C0A45A8; }  /* 0C0A45BE bt */
L_0C0A45C0: BLKS(0x0C0A45C0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0A45C2u, 1);  /* 0C0A45C0 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0A45C2 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0A45C4 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0A45C8u, 3);  /* 0C0A45C6 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A0380u; UPD(0x0C0A45CAu, 1);  /* 0C0A45C8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A45CA mov Rm,Rn */
	IF(0x0C0A45CCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0A45CC jmp @Rn */
L_0C0A45D0: BLKS(0x0C0A45D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A459Eu, 3); goto L_0C0A459E; }  /* 0C0A45D0 bra */
L_0C0A45E0: BLKS(0x0C0A45E0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A4588u, 3); goto L_0C0A4588; }  /* 0C0A45E0 bra */
}

void f_0C0A4610(sh3_t *c)
{
	LOCALS;
L_0C0A4610: BLKS(0x0C0A4610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4612u, 1);  /* 0C0A4610 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0A4614u, 1);  /* 0C0A4612 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A4614 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4618u, 2);  /* 0C0A4616 mov.l Rm,@-Rn */
	IF(0x0C0A4618u); MACL = r8 * r0;  /* 0C0A4618 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A461Cu, 3);  /* 0C0A461A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A461Eu, 1);  /* 0C0A461C mov.l Rm,@-Rn */
	IF(0x0C0A461Eu); r9 = MACL;  /* 0C0A461E sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4622u, 2);  /* 0C0A4620 mov.l @(disp,pc),Rn */
	IF(0x0C0A4622u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4624u, 1);  /* 0C0A4622 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0A4624 add Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C0A4628u, 2);  /* 0C0A4626 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0A4628 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A4660u, 4); goto L_0C0A4660; } goto L_0C0A462E; }  /* 0C0A462A bf/s */
L_0C0A462E: BLKS(0x0C0A462Eu);
	r1 = 0xFDFFFFFFu; UPD(0x0C0A4630u, 2);  /* 0C0A462E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4632u, 1);  /* 0C0A4630 mov.l @Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0A4634u, 1);  /* 0C0A4632 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C0A4634 and Rm,Rn */
	W32(r9, r4); UPD(0x0C0A4638u, 2);  /* 0C0A4636 mov.l Rm,@Rn */
	IF(0x0C0A4638u); { u32 t_ = r0; PR = 0x0C0A463Cu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A463Cu); }  /* 0C0A4638 jsr @Rn */
L_0C0A463C: BLKS(0x0C0A463Cu);
	r5 = 0xC0A03B0u; UPD(0x0C0A463Eu, 1);  /* 0C0A463C mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0A463E add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C0A4642u, 2);  /* 0C0A4640 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0A4642 mov Rm,Rn */
	IF(0x0C0A4644u); { u32 t_ = r5; PR = 0x0C0A4648u; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A4648u); }  /* 0C0A4644 jsr @Rn */
L_0C0A4648: BLKS(0x0C0A4648u);
	r3 = 0xC0A1530u; UPD(0x0C0A464Au, 1);  /* 0C0A4648 mov.l @(disp,pc),Rn */
	IF(0x0C0A464Au); { u32 t_ = r3; PR = 0x0C0A464Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A464Eu); }  /* 0C0A464A jsr @Rn */
L_0C0A464E: BLKS(0x0C0A464Eu);
	r2 = 0x207C0C0u; UPD(0x0C0A4650u, 1);  /* 0C0A464E mov.l @(disp,pc),Rn */
	W32(r9 + 0x34u, r2); UPD(0x0C0A4652u, 1);  /* 0C0A4650 mov.l Rm,@(disp,Rn) */
L_0C0A4652: BLKS(0x0C0A4652u);
	r15 = r14;  /* 0C0A4652 mov Rm,Rn */
	IF(0x0C0A4654u); PR = R32(r15); r15 += 4; UPD(0x0C0A4656u, 2);  /* 0C0A4654 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4658u, 1);  /* 0C0A4656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A465Au, 1);  /* 0C0A4658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A465Cu, 1);  /* 0C0A465A mov.l @Rm+,Rn */
	IF(0x0C0A465Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A465C rts */
L_0C0A4660: BLKS(0x0C0A4660u);
	r15 += 0xFFFFFFF8u;  /* 0C0A4660 add #imm,Rn */
	r10 = 0x0u;  /* 0C0A4662 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0A4664 mov #imm,Rn */
	r8 = 0xC0ADDE0u; UPD(0x0C0A4668u, 4);  /* 0C0A4666 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4668 mov #imm,Rn */
	W32(r15, r10); UPD(0x0C0A466Cu, 2);  /* 0C0A466A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A466Eu, 1);  /* 0C0A466C mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0A4670u, 1);  /* 0C0A466E mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4672u, 1);  /* 0C0A4670 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4672u); { u32 t_ = r8; PR = 0x0C0A4676u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4676u); }  /* 0C0A4672 jsr @Rn */
L_0C0A4676: BLKS(0x0C0A4676u);
	W32(r9, r10); UPD(0x0C0A4678u, 1);  /* 0C0A4676 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0A4652u, 3); goto L_0C0A4652; }  /* 0C0A4678 bra */
}

void f_0C0A4AF0(sh3_t *c)
{
	LOCALS;
L_0C0A4AF0: BLKS(0x0C0A4AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AF2u, 1);  /* 0C0A4AF0 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A4AF4u, 1);  /* 0C0A4AF2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A4AF4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AF8u, 2);  /* 0C0A4AF6 mov.l Rm,@-Rn */
	IF(0x0C0A4AF8u); MACL = r8 * r3;  /* 0C0A4AF8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AFCu, 3);  /* 0C0A4AFA mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4AFEu, 1);  /* 0C0A4AFC mov.l @(disp,pc),Rn */
	IF(0x0C0A4AFEu); r2 = MACL;  /* 0C0A4AFE sts macl,Rn */
	IF(0x0C0A4B00u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4B02u, 2);  /* 0C0A4B00 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A4B02 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A4B06u, 2);  /* 0C0A4B04 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0A4B06 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A4B08 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A4BA8u, 5); goto L_0C0A4BA8; } goto L_0C0A4B0E; }  /* 0C0A4B0A bt/s */
L_0C0A4B0E: BLKS(0x0C0A4B0Eu);
	r0 = 0xC0A4B20u;  /* 0C0A4B0E mova @(disp,pc),r0 */
	IF(0x0C0A4B10u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A4B12u, 3);  /* 0C0A4B10 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0A4B12 extu.b Rm,Rn */
	IF(0x0C0A4B14u); { u32 tv_ = (r4 + 0x0C0A4B18u); u32 t_ = PHYS(tv_); IF(0x0C0A4B16u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0A4B30u: goto L_0C0A4B30; case 0x0C0A4B40u: goto L_0C0A4B40; case 0x0C0A4B60u: goto L_0C0A4B60; case 0x0C0A4BC0u: goto L_0C0A4BC0; case 0x0C0A4BF0u: goto L_0C0A4BF0; default: JUMPD(tv_); } }  /* 0C0A4B14 braf Rn */
L_0C0A4B30: BLKS(0x0C0A4B30u);
	r5 = 0xC0A14C0u; UPD(0x0C0A4B32u, 1);  /* 0C0A4B30 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A4B32 mov Rm,Rn */
	r15 = r14;  /* 0C0A4B34 mov Rm,Rn */
	IF(0x0C0A4B36u); PR = R32(r15); r15 += 4; UPD(0x0C0A4B38u, 3);  /* 0C0A4B36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4B3Au, 1);  /* 0C0A4B38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4B3Cu, 1);  /* 0C0A4B3A mov.l @Rm+,Rn */
	IF(0x0C0A4B3Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C0A4B3C jmp @Rn */
L_0C0A4B40: BLKS(0x0C0A4B40u);
	r5 = 0xC194D74u; UPD(0x0C0A4B42u, 1);  /* 0C0A4B40 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A4B42 mov Rm,Rn */
	r6 = 0xC0A17E0u; UPD(0x0C0A4B46u, 2);  /* 0C0A4B44 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A4B46 mov Rm,Rn */
	IF(0x0C0A4B48u); PR = R32(r15); r15 += 4; UPD(0x0C0A4B4Au, 2);  /* 0C0A4B48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4B4Cu, 1);  /* 0C0A4B4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4B4Eu, 1);  /* 0C0A4B4C mov.l @Rm+,Rn */
	IF(0x0C0A4B4Eu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C0A4B4E jmp @Rn */
L_0C0A4B60: BLKS(0x0C0A4B60u);
	r9 = 0xB4u; UPD(0x0C0A4B62u, 1);  /* 0C0A4B60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4B62 add #imm,Rn */
	IF(0x0C0A4B64u); MACL = r8 * r9;  /* 0C0A4B64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4B68u, 4);  /* 0C0A4B66 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4B68 mov #imm,Rn */
	IF(0x0C0A4B6Au); r9 = MACL;  /* 0C0A4B6A sts macl,Rn */
	r9 += r0;  /* 0C0A4B6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A4B70u, 4);  /* 0C0A4B6E mov.w @(disp,pc),Rn */
	IF(0x0C0A4B70u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4B72u, 1);  /* 0C0A4B70 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A4B72 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4B76u, 2);  /* 0C0A4B74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4B76 add #imm,Rn */
	IF(0x0C0A4B78u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4B7Au, 2);  /* 0C0A4B78 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A4B7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A4B7Eu, 2);  /* 0C0A4B7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A4B80u, 1);  /* 0C0A4B7E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4B82u, 1);  /* 0C0A4B80 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4B84u, 1);  /* 0C0A4B82 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4B84u); { u32 t_ = r0; PR = 0x0C0A4B88u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A4B88u); }  /* 0C0A4B84 jsr @Rn */
L_0C0A4B88: BLKS(0x0C0A4B88u);
	r4 = r8;  /* 0C0A4B88 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C0A4B8Cu, 2);  /* 0C0A4B8A mov.l @(disp,pc),Rn */
	IF(0x0C0A4B8Cu); { u32 t_ = r8; PR = 0x0C0A4B90u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0A4B90u); }  /* 0C0A4B8C jsr @Rn */
L_0C0A4B90: BLKS(0x0C0A4B90u);
	IF(0x0C0A4B90u); T = (s32)r0 >= 0;  /* 0C0A4B90 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4BA4u, 4); goto L_0C0A4BA4; }  /* 0C0A4B92 bf */
L_0C0A4B94: BLKS(0x0C0A4B94u);
	r4 = 0x2u;  /* 0C0A4B94 mov #imm,Rn */
	r5 = 0xFFFE0000u; UPD(0x0C0A4B98u, 2);  /* 0C0A4B96 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0A4B9Au, 1);  /* 0C0A4B98 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C0A4B9A add Rm,Rn */
	r5 = r0;  /* 0C0A4B9C mov Rm,Rn */
	UPD(0x0C0A4B9Eu, 2);
L_0C0A4B9E: BLKS(0x0C0A4B9Eu);
	r8 = 0xC06CD90u; UPD(0x0C0A4BA0u, 1);  /* 0C0A4B9E mov.l @(disp,pc),Rn */
	IF(0x0C0A4BA0u); { u32 t_ = r8; PR = 0x0C0A4BA4u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C0A4BA4u); }  /* 0C0A4BA0 jsr @Rn */
L_0C0A4BA4: BLKS(0x0C0A4BA4u);
	r5 = 0x0u;  /* 0C0A4BA4 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C0A4BA8u, 2);  /* 0C0A4BA6 mov.l Rm,@Rn */
L_0C0A4BA8: BLKS(0x0C0A4BA8u);
	r15 = r14;  /* 0C0A4BA8 mov Rm,Rn */
	IF(0x0C0A4BAAu); PR = R32(r15); r15 += 4; UPD(0x0C0A4BACu, 2);  /* 0C0A4BAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4BAEu, 1);  /* 0C0A4BAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4BB0u, 1);  /* 0C0A4BAE mov.l @Rm+,Rn */
	IF(0x0C0A4BB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4BB0 rts */
L_0C0A4BC0: BLKS(0x0C0A4BC0u);
	r6 = 0xB4u; UPD(0x0C0A4BC2u, 1);  /* 0C0A4BC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4BC2 add #imm,Rn */
	IF(0x0C0A4BC4u); MACL = r8 * r6;  /* 0C0A4BC4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A4BC8u, 4);  /* 0C0A4BC6 mov.l @(disp,pc),Rn */
	IF(0x0C0A4BC8u); r9 = MACL;  /* 0C0A4BC8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A4BCCu, 2);  /* 0C0A4BCA mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0A4BCC add Rm,Rn */
	IF(0x0C0A4BCEu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4BD0u, 2);  /* 0C0A4BCE mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C0A4BD0 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0A4BD2 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4BD6u, 3);  /* 0C0A4BD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4BD6 add #imm,Rn */
	IF(0x0C0A4BD8u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4BDAu, 2);  /* 0C0A4BD8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0A4BDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4BDEu, 2);  /* 0C0A4BDC mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AB240u; UPD(0x0C0A4BE0u, 1);  /* 0C0A4BDE mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A4BE2u, 1);  /* 0C0A4BE0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0A4BE4u, 1);  /* 0C0A4BE2 mov.l @Rm,Rn */
	IF(0x0C0A4BE4u); { u32 t_ = r8; PR = 0x0C0A4BE8u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A4BE8u); }  /* 0C0A4BE4 jsr @Rn */
L_0C0A4BE8: BLKS(0x0C0A4BE8u);
	r7 = 0x0u;  /* 0C0A4BE8 mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0A4BECu, 2);  /* 0C0A4BEA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0A4BA8u, 3); goto L_0C0A4BA8; }  /* 0C0A4BEC bra */
L_0C0A4BF0: BLKS(0x0C0A4BF0u);
	r0 = 0xB4u; UPD(0x0C0A4BF2u, 1);  /* 0C0A4BF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4BF2 add #imm,Rn */
	IF(0x0C0A4BF4u); MACL = r8 * r0;  /* 0C0A4BF4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A4BF8u, 4);  /* 0C0A4BF6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A4BF8 mov #imm,Rn */
	IF(0x0C0A4BFAu); r9 = MACL;  /* 0C0A4BFA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A4BFEu, 3);  /* 0C0A4BFC mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C0A4BFE add Rm,Rn */
	IF(0x0C0A4C00u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4C02u, 2);  /* 0C0A4C00 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0A4C02 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A4C06u, 2);  /* 0C0A4C04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4C06 add #imm,Rn */
	IF(0x0C0A4C08u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4C0Au, 2);  /* 0C0A4C08 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A4C0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A4C0Eu, 2);  /* 0C0A4C0C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A4C10u, 1);  /* 0C0A4C0E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4C12u, 1);  /* 0C0A4C10 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4C14u, 1);  /* 0C0A4C12 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4C14u); { u32 t_ = r0; PR = 0x0C0A4C18u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A4C18u); }  /* 0C0A4C14 jsr @Rn */
L_0C0A4C18: BLKS(0x0C0A4C18u);
	r4 = r8;  /* 0C0A4C18 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C0A4C1Cu, 2);  /* 0C0A4C1A mov.l @(disp,pc),Rn */
	IF(0x0C0A4C1Cu); { u32 t_ = r8; PR = 0x0C0A4C20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0A4C20u); }  /* 0C0A4C1C jsr @Rn */
L_0C0A4C20: BLKS(0x0C0A4C20u);
	IF(0x0C0A4C20u); T = (s32)r0 >= 0;  /* 0C0A4C20 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4BA4u, 4); goto L_0C0A4BA4; }  /* 0C0A4C22 bf */
L_0C0A4C24: BLKS(0x0C0A4C24u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0A4C26u, 1);  /* 0C0A4C24 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C0A4C26 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A4B9Eu, 4); goto L_0C0A4B9E; }  /* 0C0A4C28 bra */
}

void f_0C0A4D30(sh3_t *c)
{
	LOCALS;
L_0C0A4D30: BLKS(0x0C0A4D30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D32u, 1);  /* 0C0A4D30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D34u, 1);  /* 0C0A4D32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D36u, 1);  /* 0C0A4D34 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4D36 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D3Au, 2);  /* 0C0A4D38 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4D3A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D3Eu, 2);  /* 0C0A4D3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D40u, 1);  /* 0C0A4D3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D42u, 1);  /* 0C0A4D40 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4D44u, 1);  /* 0C0A4D42 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D44u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4D46u, 1);  /* 0C0A4D44 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4D46 add #imm,Rn */
	r5 = 0xC1D98F8u; UPD(0x0C0A4D4Au, 2);  /* 0C0A4D48 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D4Au); { u32 t_ = r2; PR = 0x0C0A4D4Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4D4Eu); }  /* 0C0A4D4A jsr @Rn */
L_0C0A4D4E: BLKS(0x0C0A4D4Eu);
	r4 = 0xB4u; UPD(0x0C0A4D50u, 1);  /* 0C0A4D4E mov.w @(disp,pc),Rn */
	IF(0x0C0A4D50u); MACL = r9 * r4;  /* 0C0A4D50 mul.l Rm,Rn */
	IF(0x0C0A4D52u); r0 = MACL;  /* 0C0A4D52 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4D56u, 4);  /* 0C0A4D54 mov.l Rm,@Rn */
	IF(0x0C0A4D56u); r3 = MACL;  /* 0C0A4D56 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4D5Au, 2);  /* 0C0A4D58 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4D5A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4D5Eu, 2);  /* 0C0A4D5C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4D60u, 1);  /* 0C0A4D5E mov.l @Rm,Rn */
	IF(0x0C0A4D60u); T = (s32)r2 >= 0;  /* 0C0A4D60 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4DF0u, 4); goto L_0C0A4DF0; }  /* 0C0A4D62 bf */
L_0C0A4D64: BLKS(0x0C0A4D64u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4D64 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4D68u, 2);  /* 0C0A4D66 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4D68u); T = (s32)r2 >= 0;  /* 0C0A4D68 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4DE0u, 4); goto L_0C0A4DE0; } UPD(0x0C0A4D6Eu, 1); goto L_0C0A4D6E; }  /* 0C0A4D6A bf/s */
L_0C0A4D6E: BLKS(0x0C0A4D6Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4D70u, 1);  /* 0C0A4D6E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4D70 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4D74u, 2);  /* 0C0A4D72 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4D74 exts.w Rm,Rn */
	IF(0x0C0A4D76u); { u32 t_ = r8; PR = 0x0C0A4D7Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4D7Au); }  /* 0C0A4D76 jsr @Rn */
L_0C0A4D7A: BLKS(0x0C0A4D7Au);
	r0 += 0x3Cu;  /* 0C0A4D7A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4D7Eu, 2);  /* 0C0A4D7C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4D7E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4D82u, 2);  /* 0C0A4D80 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4D82 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4D86u, 2);  /* 0C0A4D84 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4D86 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4D88 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4D8Cu, 3);  /* 0C0A4D8A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4D8C mov #imm,Rn */
	r9 += r9;  /* 0C0A4D8E add Rm,Rn */
	r8 += r3;  /* 0C0A4D90 add Rm,Rn */
	IF(0x0C0A4D92u); ;  /* 0C0A4D92 nop */
	UPD(0x0C0A4D94u, 4);
L_0C0A4D94: BLKS(0x0C0A4D94u);
	r2 = 0xC050D70u; UPD(0x0C0A4D96u, 1);  /* 0C0A4D94 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D96u); { u32 t_ = r2; PR = 0x0C0A4D9Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4D9Au); }  /* 0C0A4D96 jsr @Rn */
L_0C0A4D9A: BLKS(0x0C0A4D9Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4D9Cu, 1);  /* 0C0A4D9A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4D9C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4DA0u, 2);  /* 0C0A4D9E mov.l @(disp,pc),Rn */
	IF(0x0C0A4DA0u); r0 <<= 16;  /* 0C0A4DA0 shll16 Rn */
	r3 += r0;  /* 0C0A4DA2 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4DA6u, 3);  /* 0C0A4DA4 mov.l Rm,@Rn */
	IF(0x0C0A4DA6u); { u32 t_ = r7; PR = 0x0C0A4DAAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4DAAu); }  /* 0C0A4DA6 jsr @Rn */
L_0C0A4DAA: BLKS(0x0C0A4DAAu);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4DACu, 1);  /* 0C0A4DAA mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4DAC sub Rm,Rn */
	IF(0x0C0A4DAEu); r0 <<= 16;  /* 0C0A4DAE shll16 Rn */
	r5 = r10;  /* 0C0A4DB0 mov Rm,Rn */
	r6 += r0;  /* 0C0A4DB2 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4DB6u, 5);  /* 0C0A4DB4 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4DB6 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4DB8 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4DBA mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4DBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4D94u, 7); goto L_0C0A4D94; } goto L_0C0A4DC2; }  /* 0C0A4DBE bf/s */
L_0C0A4DC2: BLKS(0x0C0A4DC2u);
	r14 += 0x8u;  /* 0C0A4DC2 add #imm,Rn */
	r15 = r14;  /* 0C0A4DC4 mov Rm,Rn */
	IF(0x0C0A4DC6u); PR = R32(r15); r15 += 4; UPD(0x0C0A4DC8u, 4);  /* 0C0A4DC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4DCAu, 1);  /* 0C0A4DC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4DCCu, 1);  /* 0C0A4DCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4DCEu, 1);  /* 0C0A4DCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4DD0u, 1);  /* 0C0A4DCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4DD2u, 1);  /* 0C0A4DD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4DD4u, 1);  /* 0C0A4DD2 mov.l @Rm+,Rn */
	IF(0x0C0A4DD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4DD4 rts */
L_0C0A4DE0: BLKS(0x0C0A4DE0u);
	r7 = 0xFFFFu; UPD(0x0C0A4DE2u, 1);  /* 0C0A4DE0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4D6Eu, 3); goto L_0C0A4D6E; }  /* 0C0A4DE2 bra */
L_0C0A4DF0: BLKS(0x0C0A4DF0u);
	r5 = 0xFFFFu; UPD(0x0C0A4DF2u, 1);  /* 0C0A4DF0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4D64u, 3); goto L_0C0A4D64; }  /* 0C0A4DF2 bra */
}

void f_0C0A4E10(sh3_t *c)
{
	LOCALS;
L_0C0A4E10: BLKS(0x0C0A4E10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E12u, 1);  /* 0C0A4E10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E14u, 1);  /* 0C0A4E12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E16u, 1);  /* 0C0A4E14 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4E16 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E1Au, 2);  /* 0C0A4E18 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4E1A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E1Eu, 2);  /* 0C0A4E1C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E20u, 1);  /* 0C0A4E1E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E22u, 1);  /* 0C0A4E20 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4E24u, 1);  /* 0C0A4E22 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E24u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4E26u, 1);  /* 0C0A4E24 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4E26 add #imm,Rn */
	r5 = 0xC1D9904u; UPD(0x0C0A4E2Au, 2);  /* 0C0A4E28 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E2Au); { u32 t_ = r2; PR = 0x0C0A4E2Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4E2Eu); }  /* 0C0A4E2A jsr @Rn */
L_0C0A4E2E: BLKS(0x0C0A4E2Eu);
	r4 = 0xB4u; UPD(0x0C0A4E30u, 1);  /* 0C0A4E2E mov.w @(disp,pc),Rn */
	IF(0x0C0A4E30u); MACL = r9 * r4;  /* 0C0A4E30 mul.l Rm,Rn */
	IF(0x0C0A4E32u); r0 = MACL;  /* 0C0A4E32 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4E36u, 4);  /* 0C0A4E34 mov.l Rm,@Rn */
	IF(0x0C0A4E36u); r3 = MACL;  /* 0C0A4E36 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4E3Au, 2);  /* 0C0A4E38 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4E3A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4E3Eu, 2);  /* 0C0A4E3C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4E40u, 1);  /* 0C0A4E3E mov.l @Rm,Rn */
	IF(0x0C0A4E40u); T = (s32)r2 >= 0;  /* 0C0A4E40 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4ED0u, 4); goto L_0C0A4ED0; }  /* 0C0A4E42 bf */
L_0C0A4E44: BLKS(0x0C0A4E44u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4E44 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4E48u, 2);  /* 0C0A4E46 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4E48u); T = (s32)r2 >= 0;  /* 0C0A4E48 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4EC0u, 4); goto L_0C0A4EC0; } UPD(0x0C0A4E4Eu, 1); goto L_0C0A4E4E; }  /* 0C0A4E4A bf/s */
L_0C0A4E4E: BLKS(0x0C0A4E4Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4E50u, 1);  /* 0C0A4E4E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4E50 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4E54u, 2);  /* 0C0A4E52 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4E54 exts.w Rm,Rn */
	IF(0x0C0A4E56u); { u32 t_ = r8; PR = 0x0C0A4E5Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E5Au); }  /* 0C0A4E56 jsr @Rn */
L_0C0A4E5A: BLKS(0x0C0A4E5Au);
	r0 += 0x3Cu;  /* 0C0A4E5A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4E5Eu, 2);  /* 0C0A4E5C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4E5E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4E62u, 2);  /* 0C0A4E60 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4E62 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4E66u, 2);  /* 0C0A4E64 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4E66 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4E68 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4E6Cu, 3);  /* 0C0A4E6A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4E6C mov #imm,Rn */
	r9 += r9;  /* 0C0A4E6E add Rm,Rn */
	r8 += r3;  /* 0C0A4E70 add Rm,Rn */
	IF(0x0C0A4E72u); ;  /* 0C0A4E72 nop */
	UPD(0x0C0A4E74u, 4);
L_0C0A4E74: BLKS(0x0C0A4E74u);
	r2 = 0xC050D70u; UPD(0x0C0A4E76u, 1);  /* 0C0A4E74 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E76u); { u32 t_ = r2; PR = 0x0C0A4E7Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E7Au); }  /* 0C0A4E76 jsr @Rn */
L_0C0A4E7A: BLKS(0x0C0A4E7Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4E7Cu, 1);  /* 0C0A4E7A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4E7C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4E80u, 2);  /* 0C0A4E7E mov.l @(disp,pc),Rn */
	IF(0x0C0A4E80u); r0 <<= 16;  /* 0C0A4E80 shll16 Rn */
	r3 += r0;  /* 0C0A4E82 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4E86u, 3);  /* 0C0A4E84 mov.l Rm,@Rn */
	IF(0x0C0A4E86u); { u32 t_ = r7; PR = 0x0C0A4E8Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E8Au); }  /* 0C0A4E86 jsr @Rn */
L_0C0A4E8A: BLKS(0x0C0A4E8Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4E8Cu, 1);  /* 0C0A4E8A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4E8C sub Rm,Rn */
	IF(0x0C0A4E8Eu); r0 <<= 16;  /* 0C0A4E8E shll16 Rn */
	r5 = r10;  /* 0C0A4E90 mov Rm,Rn */
	r6 += r0;  /* 0C0A4E92 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4E96u, 5);  /* 0C0A4E94 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4E96 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4E98 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4E9A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4E9C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4E74u, 7); goto L_0C0A4E74; } goto L_0C0A4EA2; }  /* 0C0A4E9E bf/s */
L_0C0A4EA2: BLKS(0x0C0A4EA2u);
	r14 += 0x8u;  /* 0C0A4EA2 add #imm,Rn */
	r15 = r14;  /* 0C0A4EA4 mov Rm,Rn */
	IF(0x0C0A4EA6u); PR = R32(r15); r15 += 4; UPD(0x0C0A4EA8u, 4);  /* 0C0A4EA6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4EAAu, 1);  /* 0C0A4EA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4EACu, 1);  /* 0C0A4EAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4EAEu, 1);  /* 0C0A4EAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4EB0u, 1);  /* 0C0A4EAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4EB2u, 1);  /* 0C0A4EB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4EB4u, 1);  /* 0C0A4EB2 mov.l @Rm+,Rn */
	IF(0x0C0A4EB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4EB4 rts */
L_0C0A4EC0: BLKS(0x0C0A4EC0u);
	r7 = 0xFFFFu; UPD(0x0C0A4EC2u, 1);  /* 0C0A4EC0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4E4Eu, 3); goto L_0C0A4E4E; }  /* 0C0A4EC2 bra */
L_0C0A4ED0: BLKS(0x0C0A4ED0u);
	r5 = 0xFFFFu; UPD(0x0C0A4ED2u, 1);  /* 0C0A4ED0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4E44u, 3); goto L_0C0A4E44; }  /* 0C0A4ED2 bra */
}

void f_0C0A4EF0(sh3_t *c)
{
	LOCALS;
L_0C0A4EF0: BLKS(0x0C0A4EF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF2u, 1);  /* 0C0A4EF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF4u, 1);  /* 0C0A4EF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF6u, 1);  /* 0C0A4EF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4EF6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EFAu, 2);  /* 0C0A4EF8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4EFA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EFEu, 2);  /* 0C0A4EFC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4F00u, 1);  /* 0C0A4EFE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4F02u, 1);  /* 0C0A4F00 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4F04u, 1);  /* 0C0A4F02 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F04u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4F06u, 1);  /* 0C0A4F04 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4F06 add #imm,Rn */
	r5 = 0xC1D99CEu; UPD(0x0C0A4F0Au, 2);  /* 0C0A4F08 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F0Au); { u32 t_ = r2; PR = 0x0C0A4F0Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4F0Eu); }  /* 0C0A4F0A jsr @Rn */
L_0C0A4F0E: BLKS(0x0C0A4F0Eu);
	r4 = 0xB4u; UPD(0x0C0A4F10u, 1);  /* 0C0A4F0E mov.w @(disp,pc),Rn */
	IF(0x0C0A4F10u); MACL = r9 * r4;  /* 0C0A4F10 mul.l Rm,Rn */
	IF(0x0C0A4F12u); r0 = MACL;  /* 0C0A4F12 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4F16u, 4);  /* 0C0A4F14 mov.l Rm,@Rn */
	IF(0x0C0A4F16u); r3 = MACL;  /* 0C0A4F16 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4F1Au, 2);  /* 0C0A4F18 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4F1A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4F1Eu, 2);  /* 0C0A4F1C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4F20u, 1);  /* 0C0A4F1E mov.l @Rm,Rn */
	IF(0x0C0A4F20u); T = (s32)r2 >= 0;  /* 0C0A4F20 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4FB0u, 4); goto L_0C0A4FB0; }  /* 0C0A4F22 bf */
L_0C0A4F24: BLKS(0x0C0A4F24u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4F24 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4F28u, 2);  /* 0C0A4F26 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4F28u); T = (s32)r2 >= 0;  /* 0C0A4F28 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4FA0u, 4); goto L_0C0A4FA0; } UPD(0x0C0A4F2Eu, 1); goto L_0C0A4F2E; }  /* 0C0A4F2A bf/s */
L_0C0A4F2E: BLKS(0x0C0A4F2Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4F30u, 1);  /* 0C0A4F2E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4F30 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4F34u, 2);  /* 0C0A4F32 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4F34 exts.w Rm,Rn */
	IF(0x0C0A4F36u); { u32 t_ = r8; PR = 0x0C0A4F3Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F3Au); }  /* 0C0A4F36 jsr @Rn */
L_0C0A4F3A: BLKS(0x0C0A4F3Au);
	r0 += 0x3Cu;  /* 0C0A4F3A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4F3Eu, 2);  /* 0C0A4F3C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4F3E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4F42u, 2);  /* 0C0A4F40 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4F42 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4F46u, 2);  /* 0C0A4F44 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4F46 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4F48 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4F4Cu, 3);  /* 0C0A4F4A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4F4C mov #imm,Rn */
	r9 += r9;  /* 0C0A4F4E add Rm,Rn */
	r8 += r3;  /* 0C0A4F50 add Rm,Rn */
	IF(0x0C0A4F52u); ;  /* 0C0A4F52 nop */
	UPD(0x0C0A4F54u, 4);
L_0C0A4F54: BLKS(0x0C0A4F54u);
	r2 = 0xC050D70u; UPD(0x0C0A4F56u, 1);  /* 0C0A4F54 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F56u); { u32 t_ = r2; PR = 0x0C0A4F5Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F5Au); }  /* 0C0A4F56 jsr @Rn */
L_0C0A4F5A: BLKS(0x0C0A4F5Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4F5Cu, 1);  /* 0C0A4F5A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4F5C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4F60u, 2);  /* 0C0A4F5E mov.l @(disp,pc),Rn */
	IF(0x0C0A4F60u); r0 <<= 16;  /* 0C0A4F60 shll16 Rn */
	r3 += r0;  /* 0C0A4F62 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4F66u, 3);  /* 0C0A4F64 mov.l Rm,@Rn */
	IF(0x0C0A4F66u); { u32 t_ = r7; PR = 0x0C0A4F6Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F6Au); }  /* 0C0A4F66 jsr @Rn */
L_0C0A4F6A: BLKS(0x0C0A4F6Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4F6Cu, 1);  /* 0C0A4F6A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4F6C sub Rm,Rn */
	IF(0x0C0A4F6Eu); r0 <<= 16;  /* 0C0A4F6E shll16 Rn */
	r5 = r10;  /* 0C0A4F70 mov Rm,Rn */
	r6 += r0;  /* 0C0A4F72 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4F76u, 5);  /* 0C0A4F74 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4F76 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4F78 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4F7A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4F7C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4F54u, 7); goto L_0C0A4F54; } goto L_0C0A4F82; }  /* 0C0A4F7E bf/s */
L_0C0A4F82: BLKS(0x0C0A4F82u);
	r14 += 0x8u;  /* 0C0A4F82 add #imm,Rn */
	r15 = r14;  /* 0C0A4F84 mov Rm,Rn */
	IF(0x0C0A4F86u); PR = R32(r15); r15 += 4; UPD(0x0C0A4F88u, 4);  /* 0C0A4F86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4F8Au, 1);  /* 0C0A4F88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4F8Cu, 1);  /* 0C0A4F8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4F8Eu, 1);  /* 0C0A4F8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4F90u, 1);  /* 0C0A4F8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4F92u, 1);  /* 0C0A4F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4F94u, 1);  /* 0C0A4F92 mov.l @Rm+,Rn */
	IF(0x0C0A4F94u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4F94 rts */
L_0C0A4FA0: BLKS(0x0C0A4FA0u);
	r7 = 0xFFFFu; UPD(0x0C0A4FA2u, 1);  /* 0C0A4FA0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4F2Eu, 3); goto L_0C0A4F2E; }  /* 0C0A4FA2 bra */
L_0C0A4FB0: BLKS(0x0C0A4FB0u);
	r5 = 0xFFFFu; UPD(0x0C0A4FB2u, 1);  /* 0C0A4FB0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4F24u, 3); goto L_0C0A4F24; }  /* 0C0A4FB2 bra */
}

void f_0C0A4FD0(sh3_t *c)
{
	LOCALS;
L_0C0A4FD0: BLKS(0x0C0A4FD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD2u, 1);  /* 0C0A4FD0 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0A4FD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD6u, 2);  /* 0C0A4FD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD8u, 1);  /* 0C0A4FD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDAu, 1);  /* 0C0A4FD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDCu, 1);  /* 0C0A4FDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDEu, 1);  /* 0C0A4FDC mov.l Rm,@-Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A4FE0u, 1);  /* 0C0A4FDE mov.l @(disp,pc),Rn */
	IF(0x0C0A4FE0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4FE2u, 1);  /* 0C0A4FE0 sts.l pr,@-Rn */
	r0 = 0xC286509u; UPD(0x0C0A4FE4u, 1);  /* 0C0A4FE2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A4FE4 mov Rm,Rn */
	IF(0x0C0A4FE6u); { u32 t_ = r8; PR = 0x0C0A4FEAu; r12 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A4FEAu); }  /* 0C0A4FE6 jsr @Rn */
L_0C0A4FEA: BLKS(0x0C0A4FEAu);
	T = (r0 & r0) == 0;  /* 0C0A4FEA tst Rm,Rn */
	if (!T) { UPD(0x0C0A5010u, 4); goto L_0C0A5010; }  /* 0C0A4FEC bf */
L_0C0A4FEE: BLKS(0x0C0A4FEEu);
	r0 = 0x1u;  /* 0C0A4FEE mov #imm,Rn */
	r15 = r14;  /* 0C0A4FF0 mov Rm,Rn */
	IF(0x0C0A4FF2u); PR = R32(r15); r15 += 4; UPD(0x0C0A4FF4u, 3);  /* 0C0A4FF2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4FF6u, 1);  /* 0C0A4FF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4FF8u, 1);  /* 0C0A4FF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4FFAu, 1);  /* 0C0A4FF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4FFCu, 1);  /* 0C0A4FFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4FFEu, 1);  /* 0C0A4FFC mov.l @Rm+,Rn */
	IF(0x0C0A4FFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4FFE rts */
L_0C0A5010: BLKS(0x0C0A5010u);
	r10 = 0xC2755BCu; UPD(0x0C0A5012u, 1);  /* 0C0A5010 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C0A5012 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A5016u, 2);  /* 0C0A5014 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A5018u, 1);  /* 0C0A5016 mov.w @(disp,pc),Rn */
	IF(0x0C0A5018u); MACL = r11 * r8;  /* 0C0A5018 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A501Cu, 3);  /* 0C0A501A mov.l @(disp,pc),Rn */
	IF(0x0C0A501Cu); r8 = MACL;  /* 0C0A501C sts macl,Rn */
	r6 = 0xC28629Eu; UPD(0x0C0A5020u, 2);  /* 0C0A501E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0A5020 add Rm,Rn */
	r9 = 0xC22C874u; UPD(0x0C0A5024u, 2);  /* 0C0A5022 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A5026u, 1);  /* 0C0A5024 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A5028u, 1);  /* 0C0A5026 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A502Au, 1);  /* 0C0A5028 mov.w @(disp,pc),Rn */
	r2 = r7 & 0xFFFF;  /* 0C0A502A extu.w Rm,Rn */
	IF(0x0C0A502Cu); W16(r0 + r8, r10); UPD(0x0C0A502Eu, 2);  /* 0C0A502C mov.w Rm,@(r0,Rn) */
	r9 = 0x4Cu;  /* 0C0A502E mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A5030 add #imm,Rn */
	IF(0x0C0A5032u); W16(r0 + r8, r10); UPD(0x0C0A5034u, 3);  /* 0C0A5032 mov.w Rm,@(r0,Rn) */
	IF(0x0C0A5034u); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0A5034 shad Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C0A5038u, 2);  /* 0C0A5036 mov.w @(disp,pc),Rn */
	r10 += 0x40u;  /* 0C0A5038 add #imm,Rn */
	r10 &= r3;  /* 0C0A503A and Rm,Rn */
	IF(0x0C0A503Cu); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0A503C shad Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A5040u, 4);  /* 0C0A503E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A5040 mov Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C0A5044u, 2);  /* 0C0A5042 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3000114u; UPD(0x0C0A5046u, 1);  /* 0C0A5044 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0A5046 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C0A504Au, 2);  /* 0C0A5048 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A504Cu, 1);  /* 0C0A504A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A504Cu); { u32 t_ = r0; PR = 0x0C0A5050u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A5050u); }  /* 0C0A504C jsr @Rn */
L_0C0A5050: BLKS(0x0C0A5050u);
	IF(0x0C0A5050u); MACL = r12 * r9;  /* 0C0A5050 mul.l Rm,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C0A5054u, 3);  /* 0C0A5052 mov.l @(disp,pc),Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0A5056u, 1);  /* 0C0A5054 mov.l @(disp,pc),Rn */
	IF(0x0C0A5056u); r9 = MACL;  /* 0C0A5056 sts macl,Rn */
	r5 = 0xC21F5E2u; UPD(0x0C0A505Au, 2);  /* 0C0A5058 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0A505A add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A505Eu, 2);  /* 0C0A505C mov.w @Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0A5060u, 1);  /* 0C0A505E mov.l @(disp,Rm),Rn */
	IF(0x0C0A5060u); r4 <<= 16;  /* 0C0A5060 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A5064u, 2);  /* 0C0A5062 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0A5064 add #imm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0A5068u, 2);  /* 0C0A5066 mov.l @(disp,pc),Rn */
	IF(0x0C0A5068u); r6 <<= 16;  /* 0C0A5068 shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A506Cu, 2);  /* 0C0A506A mov.l Rm,@(disp,Rn) */
	r6 -= r2;  /* 0C0A506C sub Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0A5070u, 2);  /* 0C0A506E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A5070u); { u32 t_ = r0; PR = 0x0C0A5074u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A5074u); }  /* 0C0A5070 jsr @Rn */
L_0C0A5074: BLKS(0x0C0A5074u);
	r0 = 0xB0u; UPD(0x0C0A5076u, 1);  /* 0C0A5074 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0A5076 mov Rm,Rn */
	IF(0x0C0A5078u); W8(r0 + r8, r12); UPD(0x0C0A507Au, 2);  /* 0C0A5078 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A507Cu, 1);  /* 0C0A507A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A507C add #imm,Rn */
	IF(0x0C0A507Eu); W8(r0 + r8, r5); UPD(0x0C0A5080u, 2);  /* 0C0A507E mov.b Rm,@(r0,Rn) */
	r6 = 0xC0A1780u; UPD(0x0C0A5082u, 1);  /* 0C0A5080 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A5082 add #imm,Rn */
	IF(0x0C0A5084u); W8(r0 + r8, r5); UPD(0x0C0A5086u, 2);  /* 0C0A5084 mov.b Rm,@(r0,Rn) */
	r7 = 0xC27DC20u; UPD(0x0C0A5088u, 1);  /* 0C0A5086 mov.l @(disp,pc),Rn */
	IF(0x0C0A5088u); { u32 t_ = r6; PR = 0x0C0A508Cu; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A508Cu); }  /* 0C0A5088 jsr @Rn */
L_0C0A508C: BLKS(0x0C0A508Cu);
	r4 = 0x8Cu; UPD(0x0C0A508Eu, 1);  /* 0C0A508C mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C0A5090u, 1);  /* 0C0A508E mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0A5090 add Rm,Rn */
	r2 = 0x90u; UPD(0x0C0A5094u, 2);  /* 0C0A5092 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0A5094 add Rm,Rn */
	r8 += r2;  /* 0C0A5096 add Rm,Rn */
	W32(r8, r10); UPD(0x0C0A509Au, 3);  /* 0C0A5098 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C0A509Cu, 1);  /* 0C0A509A mov.l Rm,@Rn */
	{ W32(r4, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0A4FEEu, 3); goto L_0C0A4FEE; }  /* 0C0A509C bra */
}

void f_0C0A50F0(sh3_t *c)
{
	LOCALS;
L_0C0A50F0: BLKS(0x0C0A50F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F2u, 1);  /* 0C0A50F0 mov.l Rm,@-Rn */
	r7 = 0x4Cu;  /* 0C0A50F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F6u, 2);  /* 0C0A50F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F8u, 1);  /* 0C0A50F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FAu, 1);  /* 0C0A50F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FCu, 1);  /* 0C0A50FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FEu, 1);  /* 0C0A50FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5100u, 1);  /* 0C0A50FE mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C0A5102u, 1);  /* 0C0A5100 mov.l @(disp,pc),Rn */
	IF(0x0C0A5102u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5104u, 1);  /* 0C0A5102 sts.l pr,@-Rn */
	r9 = 0xC286509u; UPD(0x0C0A5106u, 1);  /* 0C0A5104 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5106 mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A510Au, 2);  /* 0C0A5108 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A510Cu, 1);  /* 0C0A510A mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A510Eu, 1);  /* 0C0A510C mov.w @Rm+,Rn */
	IF(0x0C0A510Eu); MACL = r12 * r7;  /* 0C0A510E mul.l Rm,Rn */
	r8 = 0xC286274u; UPD(0x0C0A5112u, 3);  /* 0C0A5110 mov.l @(disp,pc),Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0A5114u, 1);  /* 0C0A5112 mov.l @(disp,pc),Rn */
	IF(0x0C0A5114u); r11 = MACL;  /* 0C0A5114 sts macl,Rn */
	W16(r8, r1); UPD(0x0C0A5118u, 2);  /* 0C0A5116 mov.w Rm,@Rn */
	r11 += r6;  /* 0C0A5118 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A511Cu, 2);  /* 0C0A511A mov.w @Rm+,Rn */
	r3 = R32(r11 + 0x38u); UPD(0x0C0A511Eu, 1);  /* 0C0A511C mov.l @(disp,Rm),Rn */
	IF(0x0C0A511Eu); r0 <<= 2;  /* 0C0A511E shll2 Rn */
	IF(0x0C0A5120u); r2 = R32(r0 + r3); UPD(0x0C0A5122u, 2);  /* 0C0A5120 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5124u, 1);  /* 0C0A5122 mov.w @Rm+,Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A5126u, 1);  /* 0C0A5124 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C0A5128u, 1);  /* 0C0A5126 mov.l Rm,@Rn */
	r13 = 0xC27DC20u; UPD(0x0C0A512Au, 1);  /* 0C0A5128 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A512A mov #imm,Rn */
	r9 = 0xC28629Eu; UPD(0x0C0A512Eu, 2);  /* 0C0A512C mov.l @(disp,pc),Rn */
	W32(r13, r2); UPD(0x0C0A5130u, 1);  /* 0C0A512E mov.l Rm,@Rn */
	IF(0x0C0A5130u); { u32 t_ = r8; PR = 0x0C0A5134u; W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A5134u); }  /* 0C0A5130 jsr @Rn */
L_0C0A5134: BLKS(0x0C0A5134u);
	T = (r0 & r0) == 0;  /* 0C0A5134 tst Rm,Rn */
	if (!T) { UPD(0x0C0A5150u, 4); goto L_0C0A5150; }  /* 0C0A5136 bf */
L_0C0A5138: BLKS(0x0C0A5138u);
	r0 = 0x1u;  /* 0C0A5138 mov #imm,Rn */
	r15 = r14;  /* 0C0A513A mov Rm,Rn */
	IF(0x0C0A513Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A513Eu, 3);  /* 0C0A513C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A5140u, 1);  /* 0C0A513E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A5142u, 1);  /* 0C0A5140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A5144u, 1);  /* 0C0A5142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A5146u, 1);  /* 0C0A5144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A5148u, 1);  /* 0C0A5146 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A514Au, 1);  /* 0C0A5148 mov.l @Rm+,Rn */
	IF(0x0C0A514Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A514A rts */
L_0C0A5150: BLKS(0x0C0A5150u);
	r5 = 0xC2755BCu; UPD(0x0C0A5152u, 1);  /* 0C0A5150 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C0A5152 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A5156u, 2);  /* 0C0A5154 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A5158u, 1);  /* 0C0A5156 mov.w @(disp,pc),Rn */
	r3 = 0xC22C874u; UPD(0x0C0A515Au, 1);  /* 0C0A5158 mov.l @(disp,pc),Rn */
	IF(0x0C0A515Au); MACL = r10 * r8;  /* 0C0A515A mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A515Eu, 3);  /* 0C0A515C mov.w @Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A5160u, 1);  /* 0C0A515E mov.l @(disp,pc),Rn */
	IF(0x0C0A5160u); r8 = MACL;  /* 0C0A5160 sts macl,Rn */
	r8 += r7;  /* 0C0A5162 add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0A5164 extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A5168u, 4);  /* 0C0A5166 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A516Au, 1);  /* 0C0A5168 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A516Cu, 1);  /* 0C0A516A mov.w @(disp,pc),Rn */
	IF(0x0C0A516Cu); W16(r0 + r8, r4); UPD(0x0C0A516Eu, 1);  /* 0C0A516C mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A516E add #imm,Rn */
	IF(0x0C0A5170u); W16(r0 + r8, r4); UPD(0x0C0A5172u, 2);  /* 0C0A5170 mov.w Rm,@(r0,Rn) */
	IF(0x0C0A5172u); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0A5172 shad Rm,Rn */
	r9 = 0x1FFu; UPD(0x0C0A5176u, 2);  /* 0C0A5174 mov.w @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0A5176 add #imm,Rn */
	r4 &= r9;  /* 0C0A5178 and Rm,Rn */
	IF(0x0C0A517Au); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0A517A shad Rm,Rn */
	r5 = 0xC0A02D0u; UPD(0x0C0A517Eu, 4);  /* 0C0A517C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0A517E mov #imm,Rn */
	r6 = 0xC3000114u; UPD(0x0C0A5182u, 2);  /* 0C0A5180 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A5184u, 1);  /* 0C0A5182 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C0A5186u, 1);  /* 0C0A5184 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0A5186 mov Rm,Rn */
	IF(0x0C0A5188u); { u32 t_ = r5; PR = 0x0C0A518Cu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A518Cu); }  /* 0C0A5188 jsr @Rn */
L_0C0A518C: BLKS(0x0C0A518Cu);
	r7 = 0xC21F5E2u; UPD(0x0C0A518Eu, 1);  /* 0C0A518C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0A518E mov Rm,Rn */
	r2 = 0xC392D5Eu; UPD(0x0C0A5192u, 2);  /* 0C0A5190 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A5194u, 1);  /* 0C0A5192 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A5196u, 1);  /* 0C0A5194 mov.w @Rm,Rn */
	IF(0x0C0A5196u); r3 <<= 16;  /* 0C0A5196 shll16 Rn */
	r6 = R32(r11 + 0x8u); UPD(0x0C0A519Au, 2);  /* 0C0A5198 mov.l @(disp,Rm),Rn */
	IF(0x0C0A519Au); r0 <<= 16;  /* 0C0A519A shll16 Rn */
	r5 = 0xC0A1530u; UPD(0x0C0A519Eu, 2);  /* 0C0A519C mov.l @(disp,pc),Rn */
	r3 -= r6;  /* 0C0A519E sub Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0A51A2u, 2);  /* 0C0A51A0 mov.l Rm,@(disp,Rn) */
	r11 += 0x42u;  /* 0C0A51A2 add #imm,Rn */
	IF(0x0C0A51A4u); { u32 t_ = r5; PR = 0x0C0A51A8u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A51A8u); }  /* 0C0A51A4 jsr @Rn */
L_0C0A51A8: BLKS(0x0C0A51A8u);
	r0 = 0xB0u; UPD(0x0C0A51AAu, 1);  /* 0C0A51A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A51AAu); W8(r0 + r8, r12); UPD(0x0C0A51ACu, 1);  /* 0C0A51AA mov.b Rm,@(r0,Rn) */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0A51AEu, 1);  /* 0C0A51AC mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A51AE add #imm,Rn */
	IF(0x0C0A51B0u); W8(r0 + r8, r4); UPD(0x0C0A51B2u, 2);  /* 0C0A51B0 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A51B2 add #imm,Rn */
	IF(0x0C0A51B4u); W8(r0 + r8, r4); UPD(0x0C0A51B6u, 2);  /* 0C0A51B4 mov.b Rm,@(r0,Rn) */
	r5 = R32(r13); UPD(0x0C0A51B8u, 1);  /* 0C0A51B6 mov.l @Rm,Rn */
	r4 = r10;  /* 0C0A51B8 mov Rm,Rn */
	r13 = 0xC0A1780u; UPD(0x0C0A51BCu, 2);  /* 0C0A51BA mov.l @(disp,pc),Rn */
	r10 = 0x8Cu; UPD(0x0C0A51BEu, 1);  /* 0C0A51BC mov.w @(disp,pc),Rn */
	IF(0x0C0A51BEu); { u32 t_ = r13; PR = 0x0C0A51C2u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A51C2u); }  /* 0C0A51BE jsr @Rn */
L_0C0A51C2: BLKS(0x0C0A51C2u);
	r11 = 0x94u; UPD(0x0C0A51C4u, 1);  /* 0C0A51C2 mov.w @(disp,pc),Rn */
	r12 = 0x90u; UPD(0x0C0A51C6u, 1);  /* 0C0A51C4 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C0A51C6 add Rm,Rn */
	r8 += r12;  /* 0C0A51C8 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0A51CCu, 3);  /* 0C0A51CA mov.l Rm,@Rn */
	W32(r11, r9); UPD(0x0C0A51CEu, 1);  /* 0C0A51CC mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0A5138u, 3); goto L_0C0A5138; }  /* 0C0A51CE bra */
}

void f_0C0A5220(sh3_t *c)
{
	LOCALS;
L_0C0A5220: BLKS(0x0C0A5220u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5222u, 1);  /* 0C0A5220 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5224u, 1);  /* 0C0A5222 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A5224 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5228u, 2);  /* 0C0A5226 mov.l Rm,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A522Au, 1);  /* 0C0A5228 mov.l @(disp,pc),Rn */
	IF(0x0C0A522Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A522Cu, 1);  /* 0C0A522A sts.l pr,@-Rn */
	IF(0x0C0A522Cu); { u32 t_ = r9; PR = 0x0C0A5230u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A5230u); }  /* 0C0A522C jsr @Rn */
L_0C0A5230: BLKS(0x0C0A5230u);
	r0 &= 0x3u;  /* 0C0A5230 and #imm,r0 */
	T = r0 == 0x2u;  /* 0C0A5232 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A5310u, 5); goto L_0C0A5310; } goto L_0C0A5238; }  /* 0C0A5234 bt/s */
L_0C0A5238: BLKS(0x0C0A5238u);
	T = (s32)r0 > (s32)r2;  /* 0C0A5238 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A52E0u, 5); goto L_0C0A52E0; } goto L_0C0A523E; }  /* 0C0A523A bt/s */
L_0C0A523E: BLKS(0x0C0A523Eu);
	T = r0 == 0x1u;  /* 0C0A523E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A52B0u, 5); goto L_0C0A52B0; }  /* 0C0A5240 bt */
L_0C0A5242: BLKS(0x0C0A5242u);
	r7 = 0xB4u; UPD(0x0C0A5244u, 1);  /* 0C0A5242 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5244 add #imm,Rn */
	IF(0x0C0A5246u); MACL = r8 * r7;  /* 0C0A5246 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A524Au, 4);  /* 0C0A5248 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A524Cu, 1);  /* 0C0A524A mov.w @(disp,pc),Rn */
	IF(0x0C0A524Cu); r3 = MACL;  /* 0C0A524C sts macl,Rn */
	r3 += r9;  /* 0C0A524E add Rm,Rn */
	IF(0x0C0A5250u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5252u, 3);  /* 0C0A5250 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A5252 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A5256u, 2);  /* 0C0A5254 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A5256 add #imm,Rn */
	IF(0x0C0A5258u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A525Au, 2);  /* 0C0A5258 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A525A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A525C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A5260u, 3);  /* 0C0A525E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A5262u, 1);  /* 0C0A5260 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5264u, 1);  /* 0C0A5262 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5266u, 1);  /* 0C0A5264 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A5268u, 1);  /* 0C0A5266 mov.l @(disp,Rm),Rn */
L_0C0A5268: BLKS(0x0C0A5268u);
	IF(0x0C0A5268u); { u32 t_ = r0; PR = 0x0C0A526Cu; IF(0x0C0A526Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A526Cu); }  /* 0C0A5268 jsr @Rn */
L_0C0A526C: BLKS(0x0C0A526Cu);
	r6 = 0xB4u; UPD(0x0C0A526Eu, 1);  /* 0C0A526C mov.w @(disp,pc),Rn */
	IF(0x0C0A526Eu); MACL = r8 * r6;  /* 0C0A526E mul.l Rm,Rn */
	IF(0x0C0A5270u); r8 = MACL;  /* 0C0A5270 sts macl,Rn */
	r8 += r9;  /* 0C0A5272 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C0A5276u, 5);  /* 0C0A5274 mov.l @Rm,Rn */
	r9 = 0x4000000u; UPD(0x0C0A5278u, 1);  /* 0C0A5276 mov.l @(disp,pc),Rn */
	T = (r1 & r9) == 0;  /* 0C0A5278 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A5290u, 4); goto L_0C0A5290; } goto L_0C0A527E; }  /* 0C0A527A bf/s */
L_0C0A527E: BLKS(0x0C0A527Eu);
	r0 = 0x0u;  /* 0C0A527E mov #imm,Rn */
	UPD(0x0C0A5280u, 2);
L_0C0A5280: BLKS(0x0C0A5280u);
	W32(r8, r0); UPD(0x0C0A5282u, 1);  /* 0C0A5280 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A5282 mov Rm,Rn */
	IF(0x0C0A5284u); PR = R32(r15); r15 += 4; UPD(0x0C0A5286u, 2);  /* 0C0A5284 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A5288u, 1);  /* 0C0A5286 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A528Au, 1);  /* 0C0A5288 mov.l @Rm+,Rn */
	IF(0x0C0A528Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A528A rts */
L_0C0A5290: BLKS(0x0C0A5290u);
	r0 = 0xB0u; UPD(0x0C0A5292u, 1);  /* 0C0A5290 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A5292 mov #imm,Rn */
	r9 = 0xC06CE70u; UPD(0x0C0A5296u, 2);  /* 0C0A5294 mov.l @(disp,pc),Rn */
	IF(0x0C0A5296u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A5298u, 1);  /* 0C0A5296 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A529Au, 1);  /* 0C0A5298 mov.l @(disp,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0A529A extu.b Rm,Rn */
	IF(0x0C0A529Cu); { u32 t_ = r9; PR = 0x0C0A52A0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A52A0u); }  /* 0C0A529C jsr @Rn */
L_0C0A52A0: BLKS(0x0C0A52A0u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A5280u, 3); goto L_0C0A5280; }  /* 0C0A52A0 bra */
L_0C0A52B0: BLKS(0x0C0A52B0u);
	r0 = 0xB4u; UPD(0x0C0A52B2u, 1);  /* 0C0A52B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A52B2 add #imm,Rn */
	IF(0x0C0A52B4u); MACL = r8 * r0;  /* 0C0A52B4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A52B8u, 4);  /* 0C0A52B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A52BAu, 1);  /* 0C0A52B8 mov.w @(disp,pc),Rn */
	IF(0x0C0A52BAu); r3 = MACL;  /* 0C0A52BA sts macl,Rn */
	r3 += r9;  /* 0C0A52BC add Rm,Rn */
	IF(0x0C0A52BEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52C0u, 3);  /* 0C0A52BE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A52C0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A52C4u, 2);  /* 0C0A52C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A52C4 add #imm,Rn */
	IF(0x0C0A52C6u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52C8u, 2);  /* 0C0A52C6 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A52C8 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A52CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A52CEu, 3);  /* 0C0A52CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A52D0u, 1);  /* 0C0A52CE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A52D2u, 1);  /* 0C0A52D0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A52D4u, 1);  /* 0C0A52D2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A52D4 bra */
L_0C0A52E0: BLKS(0x0C0A52E0u);
	if (!T) { UPD(0x0C0A5242u, 3); goto L_0C0A5242; }  /* 0C0A52E0 bf */
L_0C0A52E2: BLKS(0x0C0A52E2u);
	r15 += 0xFFFFFFF8u;  /* 0C0A52E2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A52E6u, 2);  /* 0C0A52E4 mov.w @(disp,pc),Rn */
	IF(0x0C0A52E6u); MACL = r8 * r5;  /* 0C0A52E6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A52EAu, 3);  /* 0C0A52E8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A52ECu, 1);  /* 0C0A52EA mov.w @(disp,pc),Rn */
	IF(0x0C0A52ECu); r3 = MACL;  /* 0C0A52EC sts macl,Rn */
	r3 += r9;  /* 0C0A52EE add Rm,Rn */
	IF(0x0C0A52F0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52F2u, 3);  /* 0C0A52F0 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A52F2 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A52F4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A52F8u, 3);  /* 0C0A52F6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A52F8 add #imm,Rn */
	IF(0x0C0A52FAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52FCu, 2);  /* 0C0A52FA mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A52FC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A5300u, 2);  /* 0C0A52FE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A5302u, 1);  /* 0C0A5300 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5304u, 1);  /* 0C0A5302 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5306u, 1);  /* 0C0A5304 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A5306 bra */
L_0C0A5310: BLKS(0x0C0A5310u);
	r6 = 0xB4u; UPD(0x0C0A5312u, 1);  /* 0C0A5310 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5312 add #imm,Rn */
	IF(0x0C0A5314u); MACL = r8 * r6;  /* 0C0A5314 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A5318u, 4);  /* 0C0A5316 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A531Au, 1);  /* 0C0A5318 mov.w @(disp,pc),Rn */
	IF(0x0C0A531Au); r3 = MACL;  /* 0C0A531A sts macl,Rn */
	r3 += r9;  /* 0C0A531C add Rm,Rn */
	IF(0x0C0A531Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5320u, 3);  /* 0C0A531E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A5320 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A5324u, 2);  /* 0C0A5322 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A5324 add #imm,Rn */
	IF(0x0C0A5326u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5328u, 2);  /* 0C0A5326 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A5328 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A532A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A532Eu, 3);  /* 0C0A532C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A5330u, 1);  /* 0C0A532E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5332u, 1);  /* 0C0A5330 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5334u, 1);  /* 0C0A5332 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A5334 bra */
}

void f_0C0A5360(sh3_t *c)
{
	LOCALS;
L_0C0A5360: BLKS(0x0C0A5360u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5362u, 1);  /* 0C0A5360 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5364u, 1);  /* 0C0A5362 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5366u, 1);  /* 0C0A5364 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A5366 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A536Au, 2);  /* 0C0A5368 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A536A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A536Eu, 2);  /* 0C0A536C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5370u, 1);  /* 0C0A536E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5372u, 1);  /* 0C0A5370 mov.l Rm,@-Rn */
	r11 = 0xC058130u; UPD(0x0C0A5374u, 1);  /* 0C0A5372 mov.l @(disp,pc),Rn */
	IF(0x0C0A5374u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5376u, 1);  /* 0C0A5374 sts.l pr,@-Rn */
	r10 = 0xC057430u; UPD(0x0C0A5378u, 1);  /* 0C0A5376 mov.l @(disp,pc),Rn */
	IF(0x0C0A5378u); { u32 t_ = r11; PR = 0x0C0A537Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0A537Cu); }  /* 0C0A5378 jsr @Rn */
L_0C0A537C: BLKS(0x0C0A537Cu);
	r5 = 0x2u;  /* 0C0A537C mov #imm,Rn */
	IF(0x0C0A537Eu); { u32 t_ = r10; PR = 0x0C0A5382u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C0A5382u); }  /* 0C0A537E jsr @Rn */
L_0C0A5382: BLKS(0x0C0A5382u);
	r4 = 0xB4u; UPD(0x0C0A5384u, 1);  /* 0C0A5382 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C0A5384 mov #imm,Rn */
	IF(0x0C0A5386u); MACL = r9 * r4;  /* 0C0A5386 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A538Au, 4);  /* 0C0A5388 mov.l @(disp,pc),Rn */
	IF(0x0C0A538Au); r13 = MACL;  /* 0C0A538A sts macl,Rn */
	r10 = 0x86u; UPD(0x0C0A538Eu, 2);  /* 0C0A538C mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C0A538E add Rm,Rn */
	r10 += r13;  /* 0C0A5390 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A5394u, 3);  /* 0C0A5392 mov.w @Rm,Rn */
	r4 = r9;  /* 0C0A5394 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0A5396 add #imm,Rn */
	IF(0x0C0A5398u); r0 >>= 2;  /* 0C0A5398 shlr2 Rn */
	IF(0x0C0A539Au); r0 >>= 2;  /* 0C0A539A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A539C and #imm,r0 */
	W32(r13 + 0xCu, r0); UPD(0x0C0A53A0u, 6);  /* 0C0A539E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A03B0u; UPD(0x0C0A53A2u, 1);  /* 0C0A53A0 mov.l @(disp,pc),Rn */
	r8 = 0xC0A9E40u; UPD(0x0C0A53A4u, 1);  /* 0C0A53A2 mov.l @(disp,pc),Rn */
	IF(0x0C0A53A4u); { u32 t_ = r0; PR = 0x0C0A53A8u; W32(r13 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A53A8u); }  /* 0C0A53A4 jsr @Rn */
L_0C0A53A8: BLKS(0x0C0A53A8u);
	r4 = r9;  /* 0C0A53A8 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C0A53AA mov #imm,Rn */
	IF(0x0C0A53ACu); { u32 t_ = r8; PR = 0x0C0A53B0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0A53B0u); }  /* 0C0A53AC jsr @Rn */
L_0C0A53B0: BLKS(0x0C0A53B0u);
	T = (r0 & r0) == 0;  /* 0C0A53B0 tst Rm,Rn */
	if (!T) { UPD(0x0C0A53D0u, 4); goto L_0C0A53D0; }  /* 0C0A53B2 bf */
L_0C0A53B4: BLKS(0x0C0A53B4u);
	r15 = r14;  /* 0C0A53B4 mov Rm,Rn */
	IF(0x0C0A53B6u); PR = R32(r15); r15 += 4; UPD(0x0C0A53B8u, 2);  /* 0C0A53B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A53BAu, 1);  /* 0C0A53B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A53BCu, 1);  /* 0C0A53BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A53BEu, 1);  /* 0C0A53BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A53C0u, 1);  /* 0C0A53BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A53C2u, 1);  /* 0C0A53C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A53C4u, 1);  /* 0C0A53C2 mov.l @Rm+,Rn */
	IF(0x0C0A53C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A53C4 rts */
L_0C0A53D0: BLKS(0x0C0A53D0u);
	r6 = 0xA9u; UPD(0x0C0A53D2u, 1);  /* 0C0A53D0 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0A53D2 mov Rm,Rn */
	IF(0x0C0A53D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A53D6u, 2);  /* 0C0A53D4 mov.b @(r0,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C0A53D8u, 1);  /* 0C0A53D6 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0A53D8 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0A53DCu, 2);  /* 0C0A53DA mov.l @(disp,Rm),Rn */
	IF(0x0C0A53DCu); { u32 t_ = r8; PR = 0x0C0A53E0u; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0A53E0u); }  /* 0C0A53DC jsr @Rn */
L_0C0A53E0: BLKS(0x0C0A53E0u);
	T = (r0 & r0) == 0;  /* 0C0A53E0 tst Rm,Rn */
	if (T) { UPD(0x0C0A53B4u, 4); goto L_0C0A53B4; }  /* 0C0A53E2 bt */
L_0C0A53E4: BLKS(0x0C0A53E4u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A53E6u, 1);  /* 0C0A53E4 mov.w @Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A53E8u, 1);  /* 0C0A53E6 mov.l @(disp,pc),Rn */
	r11 = 0xC058030u; UPD(0x0C0A53EAu, 1);  /* 0C0A53E8 mov.l @(disp,pc),Rn */
	r5 = 0xE0000u; UPD(0x0C0A53ECu, 1);  /* 0C0A53EA mov.l @(disp,pc),Rn */
	IF(0x0C0A53ECu); { u32 t_ = r10; PR = 0x0C0A53F0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A53F0u); }  /* 0C0A53EC jsr @Rn */
L_0C0A53F0: BLKS(0x0C0A53F0u);
	r8 = r0;  /* 0C0A53F0 mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0A53F4u, 2);  /* 0C0A53F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A53F4u); { u32 t_ = r11; PR = 0x0C0A53F8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A53F8u); }  /* 0C0A53F4 jsr @Rn */
L_0C0A53F8: BLKS(0x0C0A53F8u);
	r3 = 0x66666667u; UPD(0x0C0A53FAu, 1);  /* 0C0A53F8 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0A53FA sub Rm,Rn */
	IF(0x0C0A53FCu); r8 <<= 2;  /* 0C0A53FC shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0A53FE dmuls.l Rm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C0A5402u, 5);  /* 0C0A5400 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0A5402 mov Rm,Rn */
	IF(0x0C0A5404u); r2 = MACH;  /* 0C0A5404 sts mach,Rn */
	IF(0x0C0A5406u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0A5406 shar Rn */
	IF(0x0C0A5408u); T = r8 >> 31; r8 <<= 1;  /* 0C0A5408 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0A540A subc Rm,Rn */
	r2 -= r8;  /* 0C0A540C sub Rm,Rn */
	r0 = 0x60000u; UPD(0x0C0A5410u, 7);  /* 0C0A540E mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C0A5410 add Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C0A5414u, 2);  /* 0C0A5412 mov.l @(disp,pc),Rn */
	IF(0x0C0A5414u); { u32 t_ = r11; PR = 0x0C0A5418u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A5418u); }  /* 0C0A5414 jsr @Rn */
L_0C0A5418: BLKS(0x0C0A5418u);
	r11 = R32(r13 + 0x28u); UPD(0x0C0A541Au, 1);  /* 0C0A5418 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0A541A mov Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C0A541Eu, 2);  /* 0C0A541C mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C0A5420u, 1);  /* 0C0A541E mov.l @(disp,pc),Rn */
	IF(0x0C0A5420u); { u32 t_ = r13; PR = 0x0C0A5424u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A5424u); }  /* 0C0A5420 jsr @Rn */
L_0C0A5424: BLKS(0x0C0A5424u);
	r7 = 0x20000u; UPD(0x0C0A5426u, 1);  /* 0C0A5424 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A5426 add #imm,Rn */
	r12 = 0xC061D80u; UPD(0x0C0A542Au, 2);  /* 0C0A5428 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0A542A add Rm,Rn */
	W32(r15, r7); UPD(0x0C0A542Eu, 2);  /* 0C0A542C mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0A542E mov #imm,Rn */
	r5 = r10;  /* 0C0A5430 mov Rm,Rn */
	r6 = r11;  /* 0C0A5432 mov Rm,Rn */
	IF(0x0C0A5434u); { u32 t_ = r12; PR = 0x0C0A5438u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C061D80, 0x0C061D80u, 0x0C0A5438u); }  /* 0C0A5434 jsr @Rn */
L_0C0A5438: BLKS(0x0C0A5438u);
	{ IF(0x0C0A543Au); ; /* slot nop */ UPD(0x0C0A53B4u, 3); goto L_0C0A53B4; }  /* 0C0A5438 bra */
}

void f_0C0A5480(sh3_t *c)
{
	LOCALS;
L_0C0A5480: BLKS(0x0C0A5480u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5482u, 1);  /* 0C0A5480 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0A5482 mov Rm,Rn */
	r15 = r14;  /* 0C0A5484 mov Rm,Rn */
	IF(0x0C0A5486u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A5486 rts */
}

void f_0C0A5490(sh3_t *c)
{
	LOCALS;
L_0C0A5490: BLKS(0x0C0A5490u);
	r2 = 0xB4u; UPD(0x0C0A5492u, 1);  /* 0C0A5490 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A5492 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5496u, 2);  /* 0C0A5494 mov.l Rm,@-Rn */
	IF(0x0C0A5496u); MACL = r4 * r2;  /* 0C0A5496 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A549Au, 3);  /* 0C0A5498 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A549Cu, 1);  /* 0C0A549A mov.l @(disp,pc),Rn */
	IF(0x0C0A549Cu); r8 = MACL;  /* 0C0A549C sts macl,Rn */
	IF(0x0C0A549Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A54A0u, 2);  /* 0C0A549E sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A54A0 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C0A54A4u, 2);  /* 0C0A54A2 mov.l @(disp,Rm),Rn */
	r2 = 0x20u;  /* 0C0A54A4 mov #imm,Rn */
	T = (s32)r0 >= (s32)r2;  /* 0C0A54A6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A54B6u, 5); goto L_0C0A54B6; } goto L_0C0A54AC; }  /* 0C0A54A8 bf/s */
L_0C0A54AC: BLKS(0x0C0A54ACu);
	r3 = 0x21u;  /* 0C0A54AC mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0A54AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x22u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A5500u, 6); goto L_0C0A5500; } goto L_0C0A54B4; }  /* 0C0A54B0 bf/s */
L_0C0A54B4: BLKS(0x0C0A54B4u);
	if (T) { UPD(0x0C0A54D0u, 4); goto L_0C0A54D0; }  /* 0C0A54B4 bt */
L_0C0A54B6: BLKS(0x0C0A54B6u);
	r5 = 0xC0A1300u; UPD(0x0C0A54B8u, 1);  /* 0C0A54B6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A54B8 mov Rm,Rn */
	IF(0x0C0A54BAu); PR = R32(r15); r15 += 4; UPD(0x0C0A54BCu, 2);  /* 0C0A54BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A54BEu, 1);  /* 0C0A54BC mov.l @Rm+,Rn */
	IF(0x0C0A54BEu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1300u: TAIL(f_0C0A1300); default: JUMPD(tv_); } }  /* 0C0A54BE jmp @Rn */
L_0C0A54D0: BLKS(0x0C0A54D0u);
	r0 = 0xB0u; UPD(0x0C0A54D2u, 1);  /* 0C0A54D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A54D2 add #imm,Rn */
	IF(0x0C0A54D4u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A54D6u, 2);  /* 0C0A54D4 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A54D6 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A54DAu, 2);  /* 0C0A54D8 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A54DA mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0A54DEu, 2);  /* 0C0A54DC mov.w @(disp,pc),Rn */
	IF(0x0C0A54DEu); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A54E0u, 1);  /* 0C0A54DE mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0A54E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A54E4u, 2);  /* 0C0A54E2 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C0A54E4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A54E8u, 2);  /* 0C0A54E6 mov.l @Rm,Rn */
L_0C0A54E8: BLKS(0x0C0A54E8u);
	r0 = 0xC0AB240u; UPD(0x0C0A54EAu, 1);  /* 0C0A54E8 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A54ECu, 1);  /* 0C0A54EA mov.l @(disp,Rm),Rn */
	IF(0x0C0A54ECu); { u32 t_ = r0; PR = 0x0C0A54F0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A54F0u); }  /* 0C0A54EC jsr @Rn */
L_0C0A54F0: BLKS(0x0C0A54F0u);
	r0 = 0x0u;  /* 0C0A54F0 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0A54F4u, 2);  /* 0C0A54F2 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C0A54F4 add #imm,Rn */
	r15 = r14;  /* 0C0A54F6 mov Rm,Rn */
	IF(0x0C0A54F8u); PR = R32(r15); r15 += 4; UPD(0x0C0A54FAu, 3);  /* 0C0A54F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A54FCu, 1);  /* 0C0A54FA mov.l @Rm+,Rn */
	IF(0x0C0A54FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A54FC rts */
L_0C0A5500: BLKS(0x0C0A5500u);
	r0 = 0xB0u; UPD(0x0C0A5502u, 1);  /* 0C0A5500 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5502 add #imm,Rn */
	IF(0x0C0A5504u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A5506u, 2);  /* 0C0A5504 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A5506 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A5508 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A550Cu, 3);  /* 0C0A550A mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C0A550Eu, 1);  /* 0C0A550C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A550E mov Rm,Rn */
	IF(0x0C0A5510u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A5512u, 2);  /* 0C0A5510 mov.b @(r0,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C0A5512 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0A5516u, 2);  /* 0C0A5514 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0A54E8u, 3); goto L_0C0A54E8; }  /* 0C0A5516 bra */
}

void f_0C0A5530(sh3_t *c)
{
	LOCALS;
L_0C0A5530: BLKS(0x0C0A5530u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5532u, 1);  /* 0C0A5530 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0A5532 mov #imm,Rn */
	IF(0x0C0A5534u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5536u, 2);  /* 0C0A5534 sts.l pr,@-Rn */
	r2 = 0xC286509u; UPD(0x0C0A5538u, 1);  /* 0C0A5536 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5538 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A553Cu, 2);  /* 0C0A553A mov.b @Rm,Rn */
	IF(0x0C0A553Cu); MACL = r0 * r5;  /* 0C0A553C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A5540u, 3);  /* 0C0A553E mov.l @(disp,pc),Rn */
	IF(0x0C0A5540u); r7 = MACL;  /* 0C0A5540 sts macl,Rn */
	r4 += r7;  /* 0C0A5542 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0A5546u, 3);  /* 0C0A5544 mov.l @(disp,Rm),Rn */
	r4 = 0xC392D64u; UPD(0x0C0A5548u, 1);  /* 0C0A5546 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A554Au, 1);  /* 0C0A5548 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A554Cu, 1);  /* 0C0A554A mov.w @Rm+,Rn */
	IF(0x0C0A554Cu); r0 <<= 2;  /* 0C0A554C shll2 Rn */
	IF(0x0C0A554Eu); r6 = R32(r0 + r3); UPD(0x0C0A5550u, 2);  /* 0C0A554E mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5552u, 1);  /* 0C0A5550 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A5554u, 1);  /* 0C0A5552 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A5556u, 1);  /* 0C0A5554 mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A5558u, 1);  /* 0C0A5556 mov.l @(disp,pc),Rn */
	r0 = 0xC07F630u; UPD(0x0C0A555Au, 1);  /* 0C0A5558 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A555Cu, 1);  /* 0C0A555A mov.l Rm,@Rn */
	IF(0x0C0A555Cu); { u32 t_ = r0; PR = 0x0C0A5560u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C07F630, 0x0C07F630u, 0x0C0A5560u); }  /* 0C0A555C jsr @Rn */
L_0C0A5560: BLKS(0x0C0A5560u);
	r15 = r14;  /* 0C0A5560 mov Rm,Rn */
	IF(0x0C0A5562u); PR = R32(r15); r15 += 4; UPD(0x0C0A5564u, 2);  /* 0C0A5562 lds.l @Rn+,pr */
	IF(0x0C0A5564u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A5564 rts */
}

void f_0C0A5740(sh3_t *c)
{
	LOCALS;
L_0C0A5740: BLKS(0x0C0A5740u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5742u, 1);  /* 0C0A5740 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A5742 mov #imm,Rn */
	IF(0x0C0A5744u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5746u, 2);  /* 0C0A5744 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A5748u, 1);  /* 0C0A5746 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5748 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A574Cu, 2);  /* 0C0A574A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A574Eu, 1);  /* 0C0A574C mov.l @(disp,pc),Rn */
	IF(0x0C0A574Eu); MACL = r6 * r2;  /* 0C0A574E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A5752u, 3);  /* 0C0A5750 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A5754u, 1);  /* 0C0A5752 mov.l @(disp,pc),Rn */
	IF(0x0C0A5754u); r3 = MACL;  /* 0C0A5754 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5758u, 2);  /* 0C0A5756 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A575Au, 1);  /* 0C0A5758 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A575Cu, 1);  /* 0C0A575A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A575C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A5760u, 2);  /* 0C0A575E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5762u, 1);  /* 0C0A5760 mov.w @Rm+,Rn */
	IF(0x0C0A5762u); r0 <<= 2;  /* 0C0A5762 shll2 Rn */
	IF(0x0C0A5764u); r6 = R32(r0 + r7); UPD(0x0C0A5766u, 2);  /* 0C0A5764 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5768u, 1);  /* 0C0A5766 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A576Au, 1);  /* 0C0A5768 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A576Cu, 1);  /* 0C0A576A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A576Eu, 1);  /* 0C0A576C mov.l @(disp,pc),Rn */
	r0 = 0xC082750u; UPD(0x0C0A5770u, 1);  /* 0C0A576E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A5772u, 1);  /* 0C0A5770 mov.l Rm,@Rn */
	IF(0x0C0A5772u); { u32 t_ = r0; PR = 0x0C0A5776u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C082750, 0x0C082750u, 0x0C0A5776u); }  /* 0C0A5772 jsr @Rn */
L_0C0A5776: BLKS(0x0C0A5776u);
	r15 = r14;  /* 0C0A5776 mov Rm,Rn */
	IF(0x0C0A5778u); PR = R32(r15); r15 += 4; UPD(0x0C0A577Au, 2);  /* 0C0A5778 lds.l @Rn+,pr */
	IF(0x0C0A577Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A577A rts */
}

void f_0C0A59E0(sh3_t *c)
{
	LOCALS;
L_0C0A59E0: BLKS(0x0C0A59E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A59E2u, 1);  /* 0C0A59E0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A59E2 mov #imm,Rn */
	IF(0x0C0A59E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A59E6u, 2);  /* 0C0A59E4 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A59E8u, 1);  /* 0C0A59E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A59E8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A59ECu, 2);  /* 0C0A59EA mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A59EEu, 1);  /* 0C0A59EC mov.l @(disp,pc),Rn */
	IF(0x0C0A59EEu); MACL = r6 * r2;  /* 0C0A59EE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A59F2u, 3);  /* 0C0A59F0 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A59F4u, 1);  /* 0C0A59F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A59F4u); r3 = MACL;  /* 0C0A59F4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A59F8u, 2);  /* 0C0A59F6 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A59FAu, 1);  /* 0C0A59F8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A59FCu, 1);  /* 0C0A59FA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A59FC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A5A00u, 2);  /* 0C0A59FE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5A02u, 1);  /* 0C0A5A00 mov.w @Rm+,Rn */
	IF(0x0C0A5A02u); r0 <<= 2;  /* 0C0A5A02 shll2 Rn */
	IF(0x0C0A5A04u); r6 = R32(r0 + r7); UPD(0x0C0A5A06u, 2);  /* 0C0A5A04 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5A08u, 1);  /* 0C0A5A06 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A5A0Au, 1);  /* 0C0A5A08 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A5A0Cu, 1);  /* 0C0A5A0A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A5A0Eu, 1);  /* 0C0A5A0C mov.l @(disp,pc),Rn */
	r0 = 0xC083C40u; UPD(0x0C0A5A10u, 1);  /* 0C0A5A0E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A5A12u, 1);  /* 0C0A5A10 mov.l Rm,@Rn */
	IF(0x0C0A5A12u); { u32 t_ = r0; PR = 0x0C0A5A16u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C083C40, 0x0C083C40u, 0x0C0A5A16u); }  /* 0C0A5A12 jsr @Rn */
L_0C0A5A16: BLKS(0x0C0A5A16u);
	r15 = r14;  /* 0C0A5A16 mov Rm,Rn */
	IF(0x0C0A5A18u); PR = R32(r15); r15 += 4; UPD(0x0C0A5A1Au, 2);  /* 0C0A5A18 lds.l @Rn+,pr */
	IF(0x0C0A5A1Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A5A1A rts */
}

void f_0C0A5B90(sh3_t *c)
{
	LOCALS;
L_0C0A5B90: BLKS(0x0C0A5B90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5B92u, 1);  /* 0C0A5B90 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0A5B92 mov #imm,Rn */
	IF(0x0C0A5B94u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5B96u, 2);  /* 0C0A5B94 sts.l pr,@-Rn */
	r2 = 0xC286509u; UPD(0x0C0A5B98u, 1);  /* 0C0A5B96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5B98 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A5B9Cu, 2);  /* 0C0A5B9A mov.b @Rm,Rn */
	IF(0x0C0A5B9Cu); MACL = r0 * r5;  /* 0C0A5B9C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A5BA0u, 3);  /* 0C0A5B9E mov.l @(disp,pc),Rn */
	IF(0x0C0A5BA0u); r7 = MACL;  /* 0C0A5BA0 sts macl,Rn */
	r4 += r7;  /* 0C0A5BA2 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0A5BA6u, 3);  /* 0C0A5BA4 mov.l @(disp,Rm),Rn */
	r4 = 0xC392D64u; UPD(0x0C0A5BA8u, 1);  /* 0C0A5BA6 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A5BAAu, 1);  /* 0C0A5BA8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5BACu, 1);  /* 0C0A5BAA mov.w @Rm+,Rn */
	IF(0x0C0A5BACu); r0 <<= 2;  /* 0C0A5BAC shll2 Rn */
	IF(0x0C0A5BAEu); r6 = R32(r0 + r3); UPD(0x0C0A5BB0u, 2);  /* 0C0A5BAE mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5BB2u, 1);  /* 0C0A5BB0 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A5BB4u, 1);  /* 0C0A5BB2 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A5BB6u, 1);  /* 0C0A5BB4 mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A5BB8u, 1);  /* 0C0A5BB6 mov.l @(disp,pc),Rn */
	r0 = 0xC08E140u; UPD(0x0C0A5BBAu, 1);  /* 0C0A5BB8 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A5BBCu, 1);  /* 0C0A5BBA mov.l Rm,@Rn */
	IF(0x0C0A5BBCu); { u32 t_ = r0; PR = 0x0C0A5BC0u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C08E140, 0x0C08E140u, 0x0C0A5BC0u); }  /* 0C0A5BBC jsr @Rn */
L_0C0A5BC0: BLKS(0x0C0A5BC0u);
	r15 = r14;  /* 0C0A5BC0 mov Rm,Rn */
	IF(0x0C0A5BC2u); PR = R32(r15); r15 += 4; UPD(0x0C0A5BC4u, 2);  /* 0C0A5BC2 lds.l @Rn+,pr */
	IF(0x0C0A5BC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A5BC4 rts */
}

void f_0C0A6580(sh3_t *c)
{
	LOCALS;
L_0C0A6580: BLKS(0x0C0A6580u);
	r3 = 0xB4u; UPD(0x0C0A6582u, 1);  /* 0C0A6580 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A6582 exts.w Rm,Rn */
	IF(0x0C0A6584u); MACL = r4 * r3;  /* 0C0A6584 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6588u, 4);  /* 0C0A6586 mov.l Rm,@-Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A658Au, 1);  /* 0C0A6588 mov.l @(disp,pc),Rn */
	IF(0x0C0A658Au); r3 = MACL;  /* 0C0A658A sts macl,Rn */
	IF(0x0C0A658Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A658Eu, 2);  /* 0C0A658C sts.l pr,@-Rn */
	r3 += r6;  /* 0C0A658E add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0A6592u, 2);  /* 0C0A6590 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0A6594u, 1);  /* 0C0A6592 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3929E0u; UPD(0x0C0A6596u, 1);  /* 0C0A6594 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A6598u, 1);  /* 0C0A6596 mov.l @(disp,Rm),Rn */
	r2 = R32(r5); UPD(0x0C0A659Au, 1);  /* 0C0A6598 mov.l @Rm,Rn */
	r0 += r2;  /* 0C0A659A add Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0A659Eu, 2);  /* 0C0A659C mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x8u); UPD(0x0C0A65A0u, 1);  /* 0C0A659E mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C0A65A0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A65B0u, 4); goto L_0C0A65B0; } UPD(0x0C0A65A6u, 1); goto L_0C0A65A6; }  /* 0C0A65A2 bt/s */
L_0C0A65A6: BLKS(0x0C0A65A6u);
	r15 = r14;  /* 0C0A65A6 mov Rm,Rn */
	IF(0x0C0A65A8u); PR = R32(r15); r15 += 4; UPD(0x0C0A65AAu, 2);  /* 0C0A65A8 lds.l @Rn+,pr */
	IF(0x0C0A65AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A65AA rts */
L_0C0A65B0: BLKS(0x0C0A65B0u);
	r7 = 0x99u; UPD(0x0C0A65B2u, 1);  /* 0C0A65B0 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0A65B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A65B6u, 2);  /* 0C0A65B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0A65B6 add #imm,Rn */
	W8(r7, r0); UPD(0x0C0A65BAu, 2);  /* 0C0A65B8 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C0A65BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A65BC tst Rm,Rn */
	if (T) { UPD(0x0C0A65A6u, 5); goto L_0C0A65A6; }  /* 0C0A65BE bt */
L_0C0A65C0: BLKS(0x0C0A65C0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0A65C2u, 1);  /* 0C0A65C0 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C0A65C4u, 1);  /* 0C0A65C2 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0A65C4 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0A65C6 and #imm,r0 */
	IF(0x0C0A65C8u); { u32 t_ = r2; PR = 0x0C0A65CCu; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0A65CCu); }  /* 0C0A65C8 jsr @Rn */
L_0C0A65CC: BLKS(0x0C0A65CCu);
	{ IF(0x0C0A65CEu); ; /* slot nop */ UPD(0x0C0A65A6u, 3); goto L_0C0A65A6; }  /* 0C0A65CC bra */
}

/* FUN_0c0a65e0 */
void f_0C0A65E0(sh3_t *c)
{
	LOCALS;
L_0C0A65E0: BLKS(0x0C0A65E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A65E2u, 1);  /* 0C0A65E0 mov.l Rm,@-Rn */
	r4 = 0x64u;  /* 0C0A65E2 mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0A65E6u, 2);  /* 0C0A65E4 mov.l @(disp,pc),Rn */
	IF(0x0C0A65E6u); r15 -= 4; W32(r15, PR); UPD(0x0C0A65E8u, 1);  /* 0C0A65E6 sts.l pr,@-Rn */
	IF(0x0C0A65E8u); { u32 t_ = r0; PR = 0x0C0A65ECu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A65ECu); }  /* 0C0A65E8 jsr @Rn */
L_0C0A65EC: BLKS(0x0C0A65ECu);
	r2 = 0x9u;  /* 0C0A65EC mov #imm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0A65EE cmp/ge Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0A65F2u); r0 = T; /* slot movt Rn */ if (c_) { UPD(0x0C0A6610u, 5); goto L_0C0A6610; } goto L_0C0A65F4; }  /* 0C0A65F0 bf/s */
L_0C0A65F4: BLKS(0x0C0A65F4u);
	T = r0 == 0x1u;  /* 0C0A65F4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A6600u, 5); goto L_0C0A6600; }  /* 0C0A65F6 bt */
L_0C0A65F8: BLKS(0x0C0A65F8u);
	r15 = r14;  /* 0C0A65F8 mov Rm,Rn */
	IF(0x0C0A65FAu); PR = R32(r15); r15 += 4; UPD(0x0C0A65FCu, 2);  /* 0C0A65FA lds.l @Rn+,pr */
	IF(0x0C0A65FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A65FC rts */
L_0C0A6600: BLKS(0x0C0A6600u);
	r0 = 0xC09DC20u; UPD(0x0C0A6602u, 1);  /* 0C0A6600 mov.l @(disp,pc),Rn */
L_0C0A6602: BLKS(0x0C0A6602u);
	IF(0x0C0A6602u); { u32 t_ = r0; PR = 0x0C0A6606u; IF(0x0C0A6604u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A6606u); }  /* 0C0A6602 jsr @Rn */
L_0C0A6606: BLKS(0x0C0A6606u);
	{ IF(0x0C0A6608u); ; /* slot nop */ UPD(0x0C0A65F8u, 3); goto L_0C0A65F8; }  /* 0C0A6606 bra */
L_0C0A6610: BLKS(0x0C0A6610u);
	r0 = 0xC09DAE0u; UPD(0x0C0A6612u, 1);  /* 0C0A6610 mov.l @(disp,pc),Rn */
	{ IF(0x0C0A6614u); ; /* slot nop */ UPD(0x0C0A6602u, 3); goto L_0C0A6602; }  /* 0C0A6612 bra */
}

void f_0C0A6690(sh3_t *c)
{
	LOCALS;
L_0C0A6690: BLKS(0x0C0A6690u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6692u, 1);  /* 0C0A6690 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0A6692 mov #imm,Rn */
	IF(0x0C0A6694u); r15 -= 4; W32(r15, PR); UPD(0x0C0A6696u, 2);  /* 0C0A6694 sts.l pr,@-Rn */
	r2 = 0xC286509u; UPD(0x0C0A6698u, 1);  /* 0C0A6696 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6698 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A669Cu, 2);  /* 0C0A669A mov.b @Rm,Rn */
	IF(0x0C0A669Cu); MACL = r0 * r5;  /* 0C0A669C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A66A0u, 3);  /* 0C0A669E mov.l @(disp,pc),Rn */
	IF(0x0C0A66A0u); r7 = MACL;  /* 0C0A66A0 sts macl,Rn */
	r4 += r7;  /* 0C0A66A2 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0A66A6u, 3);  /* 0C0A66A4 mov.l @(disp,Rm),Rn */
	r4 = 0xC392D64u; UPD(0x0C0A66A8u, 1);  /* 0C0A66A6 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A66AAu, 1);  /* 0C0A66A8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A66ACu, 1);  /* 0C0A66AA mov.w @Rm+,Rn */
	IF(0x0C0A66ACu); r0 <<= 2;  /* 0C0A66AC shll2 Rn */
	IF(0x0C0A66AEu); r6 = R32(r0 + r3); UPD(0x0C0A66B0u, 2);  /* 0C0A66AE mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A66B2u, 1);  /* 0C0A66B0 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A66B4u, 1);  /* 0C0A66B2 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A66B6u, 1);  /* 0C0A66B4 mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A66B8u, 1);  /* 0C0A66B6 mov.l @(disp,pc),Rn */
	r0 = 0xC0A0050u; UPD(0x0C0A66BAu, 1);  /* 0C0A66B8 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A66BCu, 1);  /* 0C0A66BA mov.l Rm,@Rn */
	IF(0x0C0A66BCu); { u32 t_ = r0; PR = 0x0C0A66C0u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0050, 0x0C0A0050u, 0x0C0A66C0u); }  /* 0C0A66BC jsr @Rn */
L_0C0A66C0: BLKS(0x0C0A66C0u);
	r15 = r14;  /* 0C0A66C0 mov Rm,Rn */
	IF(0x0C0A66C2u); PR = R32(r15); r15 += 4; UPD(0x0C0A66C4u, 2);  /* 0C0A66C2 lds.l @Rn+,pr */
	IF(0x0C0A66C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A66C4 rts */
}

void f_0C0A66E0(sh3_t *c)
{
	LOCALS;
L_0C0A66E0: BLKS(0x0C0A66E0u);
	r0 = 0xB4u; UPD(0x0C0A66E2u, 1);  /* 0C0A66E0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A66E2 exts.w Rm,Rn */
	IF(0x0C0A66E4u); MACL = r1 * r0;  /* 0C0A66E4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A66E8u, 4);  /* 0C0A66E6 mov.l Rm,@-Rn */
	r2 = 0x1u;  /* 0C0A66E8 mov #imm,Rn */
	r0 = 0xC26CD7Cu; UPD(0x0C0A66ECu, 2);  /* 0C0A66EA mov.l @(disp,pc),Rn */
	IF(0x0C0A66ECu); r3 = MACL;  /* 0C0A66EC sts macl,Rn */
	IF(0x0C0A66EEu); W16(r0 + r3, r2); UPD(0x0C0A66F0u, 2);  /* 0C0A66EE mov.w Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0A66F0 mov Rm,Rn */
	r15 = r14;  /* 0C0A66F2 mov Rm,Rn */
	IF(0x0C0A66F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A66F4 rts */
}

void f_0C0A6700(sh3_t *c)
{
	LOCALS;
L_0C0A6700: BLKS(0x0C0A6700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6702u, 1);  /* 0C0A6700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6704u, 1);  /* 0C0A6702 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6706u, 1);  /* 0C0A6704 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A6706 exts.w Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C0A670Au, 2);  /* 0C0A6708 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A670A mov Rm,Rn */
	IF(0x0C0A670Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A670Eu, 2);  /* 0C0A670C sts.l pr,@-Rn */
	IF(0x0C0A670Eu); { u32 t_ = r8; PR = 0x0C0A6712u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0A6712u); }  /* 0C0A670E jsr @Rn */
L_0C0A6712: BLKS(0x0C0A6712u);
	r7 = 0xC0A1590u; UPD(0x0C0A6714u, 1);  /* 0C0A6712 mov.l @(disp,pc),Rn */
	IF(0x0C0A6714u); { u32 t_ = r7; PR = 0x0C0A6718u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C0A6718u); }  /* 0C0A6714 jsr @Rn */
L_0C0A6718: BLKS(0x0C0A6718u);
	r6 = 0xB4u; UPD(0x0C0A671Au, 1);  /* 0C0A6718 mov.w @(disp,pc),Rn */
	IF(0x0C0A671Au); MACL = r9 * r6;  /* 0C0A671A mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A671Eu, 3);  /* 0C0A671C mov.l @(disp,pc),Rn */
	IF(0x0C0A671Eu); r8 = MACL;  /* 0C0A671E sts macl,Rn */
	r8 += r5;  /* 0C0A6720 add Rm,Rn */
	r4 = 0x86u; UPD(0x0C0A6724u, 3);  /* 0C0A6722 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A6724 mov Rm,Rn */
	IF(0x0C0A6726u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0A6728u, 2);  /* 0C0A6726 mov.w @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0A6728 mov #imm,Rn */
	r2 = 0x200u; UPD(0x0C0A672Cu, 2);  /* 0C0A672A mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C0A672C mov #imm,Rn */
	r3 += r2;  /* 0C0A672E add Rm,Rn */
	IF(0x0C0A6730u); r3 >>= 8;  /* 0C0A6730 shlr8 Rn */
	IF(0x0C0A6732u); r3 >>= 2;  /* 0C0A6732 shlr2 Rn */
	r3 &= r0;  /* 0C0A6734 and Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C0A6738u, 6);  /* 0C0A6736 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AFDF0u; UPD(0x0C0A673Au, 1);  /* 0C0A6738 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0A673A add #imm,Rn */
	IF(0x0C0A673Cu); { u32 t_ = r0; PR = 0x0C0A6740u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C0A6740u); }  /* 0C0A673C jsr @Rn */
L_0C0A6740: BLKS(0x0C0A6740u);
	r8 += 0xFFFFFFB0u;  /* 0C0A6740 add #imm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C0A6744u, 2);  /* 0C0A6742 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0A6744 mov Rm,Rn */
	r0 = 0xC0A03B0u; UPD(0x0C0A6748u, 2);  /* 0C0A6746 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A6748 mov Rm,Rn */
	IF(0x0C0A674Au); PR = R32(r15); r15 += 4; UPD(0x0C0A674Cu, 2);  /* 0C0A674A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A674Eu, 1);  /* 0C0A674C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A6750u, 1);  /* 0C0A674E mov.l @Rm+,Rn */
	IF(0x0C0A6750u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); default: JUMPD(tv_); } }  /* 0C0A6750 jmp @Rn */
}

/* FUN_0c0a6770 */
void f_0C0A6770(sh3_t *c)
{
	LOCALS;
L_0C0A6770: BLKS(0x0C0A6770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6772u, 1);  /* 0C0A6770 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A6772 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6776u, 2);  /* 0C0A6774 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6778u, 1);  /* 0C0A6776 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0A6778 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A677Cu, 2);  /* 0C0A677A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0A677C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6780u, 2);  /* 0C0A677E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6782u, 1);  /* 0C0A6780 mov.l Rm,@-Rn */
	r0 = 0xC283542u; UPD(0x0C0A6784u, 1);  /* 0C0A6782 mov.l @(disp,pc),Rn */
	IF(0x0C0A6784u); r15 -= 4; W32(r15, PR); UPD(0x0C0A6786u, 1);  /* 0C0A6784 sts.l pr,@-Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A6788u, 1);  /* 0C0A6786 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6788 mov Rm,Rn */
	r12 = 0xC1D9668u; UPD(0x0C0A678Cu, 2);  /* 0C0A678A mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A678Eu, 1);  /* 0C0A678C mov.w Rm,@Rn */
	IF(0x0C0A678Eu); ;  /* 0C0A678E nop */
	UPD(0x0C0A6790u, 1);
L_0C0A6790: BLKS(0x0C0A6790u);
	r8 = r10;  /* 0C0A6790 mov Rm,Rn */
	r8 += r11;  /* 0C0A6792 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0A6796u, 3);  /* 0C0A6794 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A6796 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A67C0u, 4); goto L_0C0A67C0; } UPD(0x0C0A679Cu, 1); goto L_0C0A679C; }  /* 0C0A6798 bf/s */
L_0C0A679C: BLKS(0x0C0A679Cu);
	r7 += 0x1u;  /* 0C0A679C add #imm,Rn */
	UPD(0x0C0A679Eu, 1);
L_0C0A679E: BLKS(0x0C0A679Eu);
	r8 = 0xB4u; UPD(0x0C0A67A0u, 1);  /* 0C0A679E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0A67A0 exts.w Rm,Rn */
	r6 = 0xBFu; UPD(0x0C0A67A4u, 2);  /* 0C0A67A2 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r6;  /* 0C0A67A4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0A6790u, 4); goto L_0C0A6790; } goto L_0C0A67AA; }  /* 0C0A67A6 bf/s */
L_0C0A67AA: BLKS(0x0C0A67AAu);
	r15 = r14;  /* 0C0A67AA mov Rm,Rn */
	IF(0x0C0A67ACu); PR = R32(r15); r15 += 4; UPD(0x0C0A67AEu, 3);  /* 0C0A67AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A67B0u, 1);  /* 0C0A67AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A67B2u, 1);  /* 0C0A67B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A67B4u, 1);  /* 0C0A67B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A67B6u, 1);  /* 0C0A67B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A67B8u, 1);  /* 0C0A67B6 mov.l @Rm+,Rn */
	IF(0x0C0A67B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A67B8 rts */
L_0C0A67C0: BLKS(0x0C0A67C0u);
	r4 = 0xC283542u; UPD(0x0C0A67C2u, 1);  /* 0C0A67C0 mov.l @(disp,pc),Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0A67C4u, 1);  /* 0C0A67C2 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A67C6u, 1);  /* 0C0A67C4 mov.w @Rm,Rn */
	IF(0x0C0A67C6u); r0 <<= 2;  /* 0C0A67C6 shll2 Rn */
	r5 += 0x1u;  /* 0C0A67C8 add #imm,Rn */
	IF(0x0C0A67CAu); r2 = R32(r0 + r12); UPD(0x0C0A67CCu, 3);  /* 0C0A67CA mov.l @(r0,Rm),Rn */
	W16(r4, r5); UPD(0x0C0A67CEu, 1);  /* 0C0A67CC mov.w Rm,@Rn */
	IF(0x0C0A67CEu); { u32 t_ = r2; PR = 0x0C0A67D2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A67D2u); }  /* 0C0A67CE jsr @Rn */
L_0C0A67D2: BLKS(0x0C0A67D2u);
	r2 = R32(r8); UPD(0x0C0A67D4u, 1);  /* 0C0A67D2 mov.l @Rm,Rn */
	r3 = 0x4000u; UPD(0x0C0A67D6u, 1);  /* 0C0A67D4 mov.w @(disp,pc),Rn */
	r2 &= r3;  /* 0C0A67D6 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A67D8 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A679Cu, 5); goto L_0C0A679C; } goto L_0C0A67DE; }  /* 0C0A67DA bf/s */
L_0C0A67DE: BLKS(0x0C0A67DEu);
	r1 = 0x84u; UPD(0x0C0A67E0u, 2);  /* 0C0A67DE mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0A67E0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A67E4u, 2);  /* 0C0A67E2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A67E4 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A679Eu, 4); goto L_0C0A679E; } goto L_0C0A67EA; }  /* 0C0A67E6 bt/s */
L_0C0A67EA: BLKS(0x0C0A67EAu);
	r0 += 0xFFFFFFFFu;  /* 0C0A67EA add #imm,Rn */
	W8(r1, r0); UPD(0x0C0A67EEu, 3);  /* 0C0A67EC mov.b Rm,@Rn */
	r0 = r0 & 0xFF;  /* 0C0A67EE extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0A67F0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A679Cu, 5); goto L_0C0A679C; } goto L_0C0A67F6; }  /* 0C0A67F2 bf/s */
L_0C0A67F6: BLKS(0x0C0A67F6u);
	r8 += 0x48u;  /* 0C0A67F6 add #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0A679Cu, 5); goto L_0C0A679C; }  /* 0C0A67F8 bra */
}

/* FUN_0c0a6810 */
void f_0C0A6810(sh3_t *c)
{
	LOCALS;
L_0C0A6810: BLKS(0x0C0A6810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6812u, 1);  /* 0C0A6810 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6814u, 1);  /* 0C0A6812 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0A6814 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6818u, 2);  /* 0C0A6816 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0A6818 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A681Cu, 2);  /* 0C0A681A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0A681C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6820u, 2);  /* 0C0A681E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6822u, 1);  /* 0C0A6820 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6824u, 1);  /* 0C0A6822 mov.l Rm,@-Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A6826u, 1);  /* 0C0A6824 mov.l @(disp,pc),Rn */
	IF(0x0C0A6826u); r15 -= 4; W32(r15, PR); UPD(0x0C0A6828u, 1);  /* 0C0A6826 sts.l pr,@-Rn */
	r13 = 0xC062A70u; UPD(0x0C0A682Au, 1);  /* 0C0A6828 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A682A mov Rm,Rn */
	r12 = 0xC2175E8u; UPD(0x0C0A682Eu, 2);  /* 0C0A682C mov.l @(disp,pc),Rn */
	IF(0x0C0A682Eu); ;  /* 0C0A682E nop */
	UPD(0x0C0A6830u, 1);
L_0C0A6830: BLKS(0x0C0A6830u);
	r3 = r9;  /* 0C0A6830 mov Rm,Rn */
	r3 += r11;  /* 0C0A6832 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A6836u, 3);  /* 0C0A6834 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0A6838u, 1);  /* 0C0A6836 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0A6838 tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A684Au, 4); goto L_0C0A684A; } goto L_0C0A683E; }  /* 0C0A683A bt/s */
L_0C0A683E: BLKS(0x0C0A683Eu);
	r0 = 0xA9u; UPD(0x0C0A6840u, 2);  /* 0C0A683E mov.w @(disp,pc),Rn */
	IF(0x0C0A6840u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6842u, 1);  /* 0C0A6840 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0A6842 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C0A6844 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0A6870u, 5); goto L_0C0A6870; }  /* 0C0A6846 bt */
L_0C0A6848: BLKS(0x0C0A6848u);
	r4 = r8;  /* 0C0A6848 mov Rm,Rn */
	UPD(0x0C0A684Au, 1);
L_0C0A684A: BLKS(0x0C0A684Au);
	r8 = 0xB4u; UPD(0x0C0A684Cu, 1);  /* 0C0A684A mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0A684C add #imm,Rn */
	r9 += r8;  /* 0C0A684E add Rm,Rn */
	r3 = 0xBFu; UPD(0x0C0A6852u, 3);  /* 0C0A6850 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A6852 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C0A6854 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A6830u, 5); goto L_0C0A6830; }  /* 0C0A6856 bf */
L_0C0A6858: BLKS(0x0C0A6858u);
	r15 = r14;  /* 0C0A6858 mov Rm,Rn */
	IF(0x0C0A685Au); PR = R32(r15); r15 += 4; UPD(0x0C0A685Cu, 2);  /* 0C0A685A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A685Eu, 1);  /* 0C0A685C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A6860u, 1);  /* 0C0A685E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A6862u, 1);  /* 0C0A6860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A6864u, 1);  /* 0C0A6862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A6866u, 1);  /* 0C0A6864 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A6868u, 1);  /* 0C0A6866 mov.l @Rm+,Rn */
	IF(0x0C0A6868u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A6868 rts */
L_0C0A6870: BLKS(0x0C0A6870u);
	r0 = R32(r3 + 0x18u); UPD(0x0C0A6872u, 1);  /* 0C0A6870 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A6872 add #imm,Rn */
	W32(r12, r0); UPD(0x0C0A6876u, 2);  /* 0C0A6874 mov.l Rm,@Rn */
	r7 = 0xC393044u; UPD(0x0C0A6878u, 1);  /* 0C0A6876 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C0A687Au, 1);  /* 0C0A6878 mov.l @(disp,Rm),Rn */
	W32(r7, r1); UPD(0x0C0A687Cu, 1);  /* 0C0A687A mov.l Rm,@Rn */
	r3 += 0x48u;  /* 0C0A687C add #imm,Rn */
	r5 = R32(r3); UPD(0x0C0A6880u, 2);  /* 0C0A687E mov.l @Rm,Rn */
	r3 += 0xFFFFFFB8u;  /* 0C0A6880 add #imm,Rn */
	r7 = R32(r3 + 0x38u); UPD(0x0C0A6884u, 2);  /* 0C0A6882 mov.l @(disp,Rm),Rn */
	r3 += 0x50u;  /* 0C0A6884 add #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A6888u, 2);  /* 0C0A6886 mov.l @Rm,Rn */
	r6 = 0xFFFFFFu; UPD(0x0C0A688Au, 1);  /* 0C0A6888 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFB0u;  /* 0C0A688A add #imm,Rn */
	W32(r15, r4); UPD(0x0C0A688Eu, 2);  /* 0C0A688C mov.l Rm,@Rn */
	r5 &= r6;  /* 0C0A688E and Rm,Rn */
	r7 |= r5;  /* 0C0A6890 or Rm,Rn */
	r4 = R32(r3 + 0x34u); UPD(0x0C0A6894u, 3);  /* 0C0A6892 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0A6896u, 1);  /* 0C0A6894 mov.l @(disp,Rm),Rn */
	IF(0x0C0A6896u); { u32 t_ = r13; PR = 0x0C0A689Au; r6 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0A689Au); }  /* 0C0A6896 jsr @Rn */
L_0C0A689A: BLKS(0x0C0A689Au);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0A6848u, 3); goto L_0C0A6848; }  /* 0C0A689A bra */
}

/* FUN_0c0a68c0 */
void f_0C0A68C0(sh3_t *c)
{
	LOCALS;
L_0C0A68C0: BLKS(0x0C0A68C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68C2u, 1);  /* 0C0A68C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68C4u, 1);  /* 0C0A68C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68C6u, 1);  /* 0C0A68C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68C8u, 1);  /* 0C0A68C6 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0A68C8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68CCu, 2);  /* 0C0A68CA mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0A68CC mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68D0u, 2);  /* 0C0A68CE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A68D2u, 1);  /* 0C0A68D0 mov.l Rm,@-Rn */
	r13 = 0xC283752u; UPD(0x0C0A68D4u, 1);  /* 0C0A68D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A68D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A68D6u, 1);  /* 0C0A68D4 sts.l pr,@-Rn */
	r14 = r15;  /* 0C0A68D6 mov Rm,Rn */
	UPD(0x0C0A68D8u, 1);
L_0C0A68D8: BLKS(0x0C0A68D8u);
	r9 = 0xC26CD40u; UPD(0x0C0A68DAu, 1);  /* 0C0A68D8 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C0A68DA add Rm,Rn */
	r0 = R32(r9); UPD(0x0C0A68DEu, 2);  /* 0C0A68DC mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A68DE tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x1Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A6910u, 4); goto L_0C0A6910; } UPD(0x0C0A68E4u, 1); goto L_0C0A68E4; }  /* 0C0A68E0 bf/s */
L_0C0A68E4: BLKS(0x0C0A68E4u);
	r3 = r11;  /* 0C0A68E4 mov Rm,Rn */
	UPD(0x0C0A68E6u, 1);
L_0C0A68E6: BLKS(0x0C0A68E6u);
	r11 = 0xB4u; UPD(0x0C0A68E8u, 1);  /* 0C0A68E6 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0A68E8 add #imm,Rn */
	r10 += r11;  /* 0C0A68EA add Rm,Rn */
	r0 = 0xBFu; UPD(0x0C0A68EEu, 3);  /* 0C0A68EC mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C0A68EE exts.w Rm,Rn */
	T = (s32)r11 > (s32)r0;  /* 0C0A68F0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A68D8u, 5); goto L_0C0A68D8; }  /* 0C0A68F2 bf */
L_0C0A68F4: BLKS(0x0C0A68F4u);
	r15 = r14;  /* 0C0A68F4 mov Rm,Rn */
	IF(0x0C0A68F6u); PR = R32(r15); r15 += 4; UPD(0x0C0A68F8u, 2);  /* 0C0A68F6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A68FAu, 1);  /* 0C0A68F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A68FCu, 1);  /* 0C0A68FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A68FEu, 1);  /* 0C0A68FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A6900u, 1);  /* 0C0A68FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A6902u, 1);  /* 0C0A6900 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A6904u, 1);  /* 0C0A6902 mov.l @Rm+,Rn */
	IF(0x0C0A6904u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A6904 rts */
L_0C0A6910: BLKS(0x0C0A6910u);
	r8 = 0xA8u; UPD(0x0C0A6912u, 1);  /* 0C0A6910 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0A6912 add Rm,Rn */
	r12 = r8;  /* 0C0A6914 mov Rm,Rn */
	r12 += 0x1u;  /* 0C0A6916 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0A691Au, 4);  /* 0C0A6918 mov.b @Rm,Rn */
	r8 += 0x3u;  /* 0C0A691A add #imm,Rn */
	r3 &= r0;  /* 0C0A691C and Rm,Rn */
	r3 += r3;  /* 0C0A691E add Rm,Rn */
	r3 += r13;  /* 0C0A6920 add Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0A6922 extu.b Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A6926u, 6);  /* 0C0A6924 mov.w @Rm,Rn */
	r0 = 0xC065A70u; UPD(0x0C0A6928u, 1);  /* 0C0A6926 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0A6928 add #imm,Rn */
	W16(r3, r2); UPD(0x0C0A692Cu, 2);  /* 0C0A692A mov.w Rm,@Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0A692Eu, 1);  /* 0C0A692C mov.l @(disp,Rm),Rn */
	IF(0x0C0A692Eu); { u32 t_ = r0; PR = 0x0C0A6932u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065A70, 0x0C065A70u, 0x0C0A6932u); }  /* 0C0A692E jsr @Rn */
L_0C0A6932: BLKS(0x0C0A6932u);
	W8(r8, r0); UPD(0x0C0A6934u, 1);  /* 0C0A6932 mov.b Rm,@Rn */
	r2 = r0;  /* 0C0A6934 mov Rm,Rn */
	r1 = R32(r9); UPD(0x0C0A6938u, 2);  /* 0C0A6936 mov.l @Rm,Rn */
	r0 = r1;  /* 0C0A6938 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C0A693A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A693C tst Rm,Rn */
	{ u32 c_ = T; r3 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A68E6u, 6); goto L_0C0A68E6; } goto L_0C0A6942; }  /* 0C0A693E bt/s */
L_0C0A6942: BLKS(0x0C0A6942u);
	r4 = 0x10u;  /* 0C0A6942 mov #imm,Rn */
	r1 &= r4;  /* 0C0A6944 and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A6946 tst Rm,Rn */
	if (T) { UPD(0x0C0A6970u, 7); goto L_0C0A6970; }  /* 0C0A6948 bt */
L_0C0A694A: BLKS(0x0C0A694Au);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C0A694Cu, 1);  /* 0C0A694A mov.b @Rm,Rn */
	r0 = 0xADu; UPD(0x0C0A694Eu, 1);  /* 0C0A694C mov.w @(disp,pc),Rn */
	IF(0x0C0A694Eu); W8(r0 + r9, r5); UPD(0x0C0A6950u, 1);  /* 0C0A694E mov.b Rm,@(r0,Rn) */
L_0C0A6950: BLKS(0x0C0A6950u);
	r12 = 0xC26CD40u; UPD(0x0C0A6952u, 1);  /* 0C0A6950 mov.l @(disp,pc),Rn */
	r8 = 0x1Fu;  /* 0C0A6952 mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C0A6956u, 2);  /* 0C0A6954 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C0A6956 add Rm,Rn */
	IF(0x0C0A6958u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0A695Au, 2);  /* 0C0A6958 mov.b @(r0,Rm),Rn */
	r8 &= r9;  /* 0C0A695A and Rm,Rn */
	r8 += r8;  /* 0C0A695C add Rm,Rn */
	r1 = 0xC275DD6u; UPD(0x0C0A6960u, 3);  /* 0C0A695E mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C0A6960 mov Rm,Rn */
	r6 += r1;  /* 0C0A6962 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A6966u, 3);  /* 0C0A6964 mov.w @Rm,Rn */
	r7 += 0x1u;  /* 0C0A6966 add #imm,Rn */
	{ W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(0x0C0A68E4u, 4); goto L_0C0A68E4; }  /* 0C0A6968 bra */
L_0C0A6970: BLKS(0x0C0A6970u);
	r0 = 0xADu; UPD(0x0C0A6972u, 1);  /* 0C0A6970 mov.w @(disp,pc),Rn */
	{ IF(0x0C0A6974u); W8(r0 + r9, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A6950u, 3); goto L_0C0A6950; }  /* 0C0A6972 bra */
}

void f_0C0A6C30(sh3_t *c)
{
	LOCALS;
L_0C0A6C30: BLKS(0x0C0A6C30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6C32u, 1);  /* 0C0A6C30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6C34u, 1);  /* 0C0A6C32 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A6C34 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6C38u, 2);  /* 0C0A6C36 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A6C38 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A6C3Cu, 2);  /* 0C0A6C3A mov.l @(disp,pc),Rn */
	IF(0x0C0A6C3Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A6C3Eu, 1);  /* 0C0A6C3C sts.l pr,@-Rn */
	IF(0x0C0A6C3Eu); { u32 t_ = r9; PR = 0x0C0A6C42u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A6C42u); }  /* 0C0A6C3E jsr @Rn */
L_0C0A6C42: BLKS(0x0C0A6C42u);
	r2 = r0;  /* 0C0A6C42 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A6C44 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A6C46 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A6C50u, 6); goto L_0C0A6C50; }  /* 0C0A6C48 bf */
L_0C0A6C4A: BLKS(0x0C0A6C4Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A6C4A add #imm,Rn */
	{ IF(0x0C0A6C4Eu); ; /* slot nop */ UPD(0x0C0A6DA0u, 4); goto L_0C0A6DA0; }  /* 0C0A6C4C bra */
L_0C0A6C50: BLKS(0x0C0A6C50u);
	r0 = 0xC0A6C60u;  /* 0C0A6C50 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A6C52 add Rm,Rn */
	IF(0x0C0A6C54u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A6C56u, 3);  /* 0C0A6C54 mov.w @(r0,Rm),Rn */
	IF(0x0C0A6C56u); { u32 tv_ = (r3 + 0x0C0A6C5Au); u32 t_ = PHYS(tv_); IF(0x0C0A6C58u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A6C70u: goto L_0C0A6C70; case 0x0C0A6CD0u: goto L_0C0A6CD0; case 0x0C0A6D00u: goto L_0C0A6D00; case 0x0C0A6D40u: goto L_0C0A6D40; case 0x0C0A6D70u: goto L_0C0A6D70; default: JUMPD(tv_); } }  /* 0C0A6C56 braf Rn */
L_0C0A6C70: BLKS(0x0C0A6C70u);
	r0 = 0xB4u; UPD(0x0C0A6C72u, 1);  /* 0C0A6C70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A6C72 add #imm,Rn */
	IF(0x0C0A6C74u); MACL = r8 * r0;  /* 0C0A6C74 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6C78u, 4);  /* 0C0A6C76 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A6C7Au, 1);  /* 0C0A6C78 mov.w @(disp,pc),Rn */
	IF(0x0C0A6C7Au); r3 = MACL;  /* 0C0A6C7A sts macl,Rn */
	r3 += r9;  /* 0C0A6C7C add Rm,Rn */
	IF(0x0C0A6C7Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6C80u, 3);  /* 0C0A6C7E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A6C80 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A6C84u, 2);  /* 0C0A6C82 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6C84 add #imm,Rn */
	IF(0x0C0A6C86u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6C88u, 2);  /* 0C0A6C86 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0A6C88 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A6C8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A6C8Eu, 3);  /* 0C0A6C8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A6C90u, 1);  /* 0C0A6C8E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A6C92u, 1);  /* 0C0A6C90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6C94u, 1);  /* 0C0A6C92 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A6C96u, 1);  /* 0C0A6C94 mov.l @(disp,Rm),Rn */
	IF(0x0C0A6C96u); ;  /* 0C0A6C96 nop */
	UPD(0x0C0A6C98u, 1);
L_0C0A6C98: BLKS(0x0C0A6C98u);
	IF(0x0C0A6C98u); { u32 t_ = r0; PR = 0x0C0A6C9Cu; IF(0x0C0A6C9Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A6C9Cu); }  /* 0C0A6C98 jsr @Rn */
L_0C0A6C9C: BLKS(0x0C0A6C9Cu);
	r15 += 0x8u;  /* 0C0A6C9C add #imm,Rn */
	UPD(0x0C0A6C9Eu, 1);
L_0C0A6C9E: BLKS(0x0C0A6C9Eu);
	r4 = 0xB4u; UPD(0x0C0A6CA0u, 1);  /* 0C0A6C9E mov.w @(disp,pc),Rn */
	IF(0x0C0A6CA0u); MACL = r8 * r4;  /* 0C0A6CA0 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A6CA4u, 3);  /* 0C0A6CA2 mov.w @(disp,pc),Rn */
	IF(0x0C0A6CA4u); r8 = MACL;  /* 0C0A6CA4 sts macl,Rn */
	r8 += r9;  /* 0C0A6CA6 add Rm,Rn */
	r9 = 0xC06CB10u; UPD(0x0C0A6CAAu, 3);  /* 0C0A6CA8 mov.l @(disp,pc),Rn */
	IF(0x0C0A6CAAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A6CACu, 1);  /* 0C0A6CAA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A6CAEu, 1);  /* 0C0A6CAC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A6CAE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A6CB2u, 2);  /* 0C0A6CB0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A6CB2u); { u32 t_ = r9; PR = 0x0C0A6CB6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CB10, 0x0C06CB10u, 0x0C0A6CB6u); }  /* 0C0A6CB2 jsr @Rn */
L_0C0A6CB6: BLKS(0x0C0A6CB6u);
	r9 = 0x0u;  /* 0C0A6CB6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A6CBAu, 2);  /* 0C0A6CB8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A6CBA mov Rm,Rn */
	IF(0x0C0A6CBCu); PR = R32(r15); r15 += 4; UPD(0x0C0A6CBEu, 2);  /* 0C0A6CBC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A6CC0u, 1);  /* 0C0A6CBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A6CC2u, 1);  /* 0C0A6CC0 mov.l @Rm+,Rn */
	IF(0x0C0A6CC2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A6CC2 rts */
L_0C0A6CD0: BLKS(0x0C0A6CD0u);
	r5 = 0xB4u; UPD(0x0C0A6CD2u, 1);  /* 0C0A6CD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A6CD2 add #imm,Rn */
	IF(0x0C0A6CD4u); MACL = r8 * r5;  /* 0C0A6CD4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6CD8u, 4);  /* 0C0A6CD6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A6CDAu, 1);  /* 0C0A6CD8 mov.w @(disp,pc),Rn */
	IF(0x0C0A6CDAu); r3 = MACL;  /* 0C0A6CDA sts macl,Rn */
	r3 += r9;  /* 0C0A6CDC add Rm,Rn */
	IF(0x0C0A6CDEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6CE0u, 3);  /* 0C0A6CDE mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0A6CE0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A6CE2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A6CE6u, 3);  /* 0C0A6CE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6CE6 add #imm,Rn */
	IF(0x0C0A6CE8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6CEAu, 2);  /* 0C0A6CE8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A6CEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A6CEEu, 2);  /* 0C0A6CEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A6CF0u, 1);  /* 0C0A6CEE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A6CF2u, 1);  /* 0C0A6CF0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6CF4u, 1);  /* 0C0A6CF2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A6C98u, 3); goto L_0C0A6C98; }  /* 0C0A6CF4 bra */
L_0C0A6D00: BLKS(0x0C0A6D00u);
	r3 = 0xB4u; UPD(0x0C0A6D02u, 1);  /* 0C0A6D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A6D02 add #imm,Rn */
	IF(0x0C0A6D04u); MACL = r8 * r3;  /* 0C0A6D04 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6D08u, 4);  /* 0C0A6D06 mov.l @(disp,pc),Rn */
	IF(0x0C0A6D08u); r3 = MACL;  /* 0C0A6D08 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A6D0Cu, 2);  /* 0C0A6D0A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A6D0C add Rm,Rn */
	IF(0x0C0A6D0Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D10u, 2);  /* 0C0A6D0E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A6D10 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A6D14u, 2);  /* 0C0A6D12 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6D14 add #imm,Rn */
	IF(0x0C0A6D16u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D18u, 2);  /* 0C0A6D16 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0A6D18 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A6D1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A6D1Eu, 3);  /* 0C0A6D1C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A6D20u, 1);  /* 0C0A6D1E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A6D22u, 1);  /* 0C0A6D20 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A6D24u, 1);  /* 0C0A6D22 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A6D26u, 1);  /* 0C0A6D24 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A6D28u, 1);  /* 0C0A6D26 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A6D2Au, 1);  /* 0C0A6D28 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6D2Cu, 1);  /* 0C0A6D2A mov.l @(disp,Rm),Rn */
	IF(0x0C0A6D2Cu); { u32 t_ = r0; PR = 0x0C0A6D30u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A6D30u); }  /* 0C0A6D2C jsr @Rn */
L_0C0A6D30: BLKS(0x0C0A6D30u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A6C9Eu, 3); goto L_0C0A6C9E; }  /* 0C0A6D30 bra */
L_0C0A6D40: BLKS(0x0C0A6D40u);
	r4 = 0xB4u; UPD(0x0C0A6D42u, 1);  /* 0C0A6D40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A6D42 add #imm,Rn */
	IF(0x0C0A6D44u); MACL = r8 * r4;  /* 0C0A6D44 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6D48u, 4);  /* 0C0A6D46 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0A6D48 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A6D4Cu, 2);  /* 0C0A6D4A mov.w @(disp,pc),Rn */
	IF(0x0C0A6D4Cu); r3 = MACL;  /* 0C0A6D4C sts macl,Rn */
	r3 += r9;  /* 0C0A6D4E add Rm,Rn */
	IF(0x0C0A6D50u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D52u, 3);  /* 0C0A6D50 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A6D52 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A6D56u, 2);  /* 0C0A6D54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6D56 add #imm,Rn */
	IF(0x0C0A6D58u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D5Au, 2);  /* 0C0A6D58 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A6D5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A6D5Eu, 2);  /* 0C0A6D5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A6D60u, 1);  /* 0C0A6D5E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A6D62u, 1);  /* 0C0A6D60 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6D64u, 1);  /* 0C0A6D62 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A6C98u, 3); goto L_0C0A6C98; }  /* 0C0A6D64 bra */
L_0C0A6D70: BLKS(0x0C0A6D70u);
	r0 = 0xB4u; UPD(0x0C0A6D72u, 1);  /* 0C0A6D70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A6D72 add #imm,Rn */
	IF(0x0C0A6D74u); MACL = r8 * r0;  /* 0C0A6D74 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6D78u, 4);  /* 0C0A6D76 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A6D7Au, 1);  /* 0C0A6D78 mov.w @(disp,pc),Rn */
	IF(0x0C0A6D7Au); r3 = MACL;  /* 0C0A6D7A sts macl,Rn */
	r3 += r9;  /* 0C0A6D7C add Rm,Rn */
	IF(0x0C0A6D7Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D80u, 3);  /* 0C0A6D7E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A6D80 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A6D84u, 2);  /* 0C0A6D82 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6D84 add #imm,Rn */
	IF(0x0C0A6D86u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6D88u, 2);  /* 0C0A6D86 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A6D88 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A6D8Cu, 2);  /* 0C0A6D8A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A6D8Eu, 1);  /* 0C0A6D8C mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0A6D8E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A6D92u, 2);  /* 0C0A6D90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6D94u, 1);  /* 0C0A6D92 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A6C98u, 3); goto L_0C0A6C98; }  /* 0C0A6D94 bra */
L_0C0A6DA0: BLKS(0x0C0A6DA0u);
	r6 = 0xB4u; UPD(0x0C0A6DA2u, 1);  /* 0C0A6DA0 mov.w @(disp,pc),Rn */
	IF(0x0C0A6DA2u); MACL = r8 * r6;  /* 0C0A6DA2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A6DA6u, 3);  /* 0C0A6DA4 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A6DA8u, 1);  /* 0C0A6DA6 mov.w @(disp,pc),Rn */
	IF(0x0C0A6DA8u); r3 = MACL;  /* 0C0A6DA8 sts macl,Rn */
	r3 += r9;  /* 0C0A6DAA add Rm,Rn */
	IF(0x0C0A6DACu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6DAEu, 3);  /* 0C0A6DAC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A6DAE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A6DB2u, 2);  /* 0C0A6DB0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A6DB2 add #imm,Rn */
	IF(0x0C0A6DB4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6DB6u, 2);  /* 0C0A6DB4 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0A6DB6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A6DB8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A6DBCu, 3);  /* 0C0A6DBA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A6DBEu, 1);  /* 0C0A6DBC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A6DC0u, 1);  /* 0C0A6DBE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A6DC2u, 1);  /* 0C0A6DC0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A6C98u, 3); goto L_0C0A6C98; }  /* 0C0A6DC2 bra */
}

void f_0C0A6DF0(sh3_t *c)
{
	LOCALS;
L_0C0A6DF0: BLKS(0x0C0A6DF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6DF2u, 1);  /* 0C0A6DF0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0A6DF2 mov #imm,Rn */
	r14 = r15;  /* 0C0A6DF4 mov Rm,Rn */
	r15 = r14;  /* 0C0A6DF6 mov Rm,Rn */
	IF(0x0C0A6DF8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A6DF8 rts */
}

void f_0C0A6E00(sh3_t *c)
{
	LOCALS;
L_0C0A6E00: BLKS(0x0C0A6E00u);
	r6 = 0xB4u; UPD(0x0C0A6E02u, 1);  /* 0C0A6E00 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A6E02 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6E06u, 2);  /* 0C0A6E04 mov.l Rm,@-Rn */
	IF(0x0C0A6E06u); MACL = r1 * r6;  /* 0C0A6E06 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A6E0Au, 3);  /* 0C0A6E08 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6E0A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A6E0Eu, 2);  /* 0C0A6E0C mov.l @Rm,Rn */
	IF(0x0C0A6E0Eu); r2 = MACL;  /* 0C0A6E0E sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A6E12u, 2);  /* 0C0A6E10 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0A6E14u, 1);  /* 0C0A6E12 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0A6E14 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0A6E18u, 2);  /* 0C0A6E16 mov.w @(disp,pc),Rn */
	IF(0x0C0A6E18u); r3 <<= 8;  /* 0C0A6E18 shll8 Rn */
	IF(0x0C0A6E1Au); W32(r0 + r2, r3); UPD(0x0C0A6E1Cu, 2);  /* 0C0A6E1A mov.l Rm,@(r0,Rn) */
	r0 += 0xFFFFFFF8u;  /* 0C0A6E1C add #imm,Rn */
	IF(0x0C0A6E1Eu); W32(r0 + r2, r3); UPD(0x0C0A6E20u, 2);  /* 0C0A6E1E mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0A6E22u, 1);  /* 0C0A6E20 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6E22 mov #imm,Rn */
	r15 = r14;  /* 0C0A6E24 mov Rm,Rn */
	IF(0x0C0A6E26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A6E26 rts */
}

void f_0C0A6E40(sh3_t *c)
{
	LOCALS;
L_0C0A6E40: BLKS(0x0C0A6E40u);
	r2 = 0xB4u; UPD(0x0C0A6E42u, 1);  /* 0C0A6E40 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0A6E42 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6E46u, 2);  /* 0C0A6E44 mov.l Rm,@-Rn */
	IF(0x0C0A6E46u); MACL = r3 * r2;  /* 0C0A6E46 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A6E4Au, 3);  /* 0C0A6E48 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6E4A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A6E4Eu, 2);  /* 0C0A6E4C mov.l @Rm,Rn */
	IF(0x0C0A6E4Eu); r0 = MACL;  /* 0C0A6E4E sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A6E52u, 2);  /* 0C0A6E50 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0A6E52 add #imm,Rn */
	r6 += r0;  /* 0C0A6E54 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0A6E58u, 3);  /* 0C0A6E56 mov.b @Rm+,Rn */
	r0 = 0xAAu; UPD(0x0C0A6E5Au, 1);  /* 0C0A6E58 mov.w @(disp,pc),Rn */
	IF(0x0C0A6E5Au); W8(r0 + r6, r1); UPD(0x0C0A6E5Cu, 1);  /* 0C0A6E5A mov.b Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0A6E5Eu, 1);  /* 0C0A6E5C mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6E5E mov #imm,Rn */
	r15 = r14;  /* 0C0A6E60 mov Rm,Rn */
	IF(0x0C0A6E62u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A6E62 rts */
}

void f_0C0A6E80(sh3_t *c)
{
	LOCALS;
L_0C0A6E80: BLKS(0x0C0A6E80u);
	r3 = 0xB4u; UPD(0x0C0A6E82u, 1);  /* 0C0A6E80 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r4;  /* 0C0A6E82 exts.w Rm,Rn */
	IF(0x0C0A6E84u); MACL = r6 * r3;  /* 0C0A6E84 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A6E88u, 4);  /* 0C0A6E86 mov.l @(disp,pc),Rn */
	IF(0x0C0A6E88u); r5 = MACL;  /* 0C0A6E88 sts macl,Rn */
	r0 = 0xA8u; UPD(0x0C0A6E8Cu, 2);  /* 0C0A6E8A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0A6E8C add Rm,Rn */
	r5 += r0;  /* 0C0A6E8E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6E92u, 3);  /* 0C0A6E90 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0A6E92 add #imm,Rn */
	r0 = 0xC286734u; UPD(0x0C0A6E96u, 2);  /* 0C0A6E94 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6E96 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0A6E9Au, 2);  /* 0C0A6E98 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C0A6E9A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r1 = v_; } UPD(0x0C0A6E9Eu, 2);  /* 0C0A6E9C mov.b @Rm+,Rn */
	W8(r5, r1); UPD(0x0C0A6EA0u, 1);  /* 0C0A6E9E mov.b Rm,@Rn */
	{ u32 v_ = r1; r5 -= 1; W8(r5, v_); } UPD(0x0C0A6EA2u, 1);  /* 0C0A6EA0 mov.b Rm,@-Rn */
	W32(r0, r4); UPD(0x0C0A6EA4u, 1);  /* 0C0A6EA2 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6EA4 mov #imm,Rn */
	r15 = r14;  /* 0C0A6EA6 mov Rm,Rn */
	IF(0x0C0A6EA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A6EA8 rts */
}

void f_0C0A6EC0(sh3_t *c)
{
	LOCALS;
L_0C0A6EC0: BLKS(0x0C0A6EC0u);
	r6 = (u32)(s32)(s16)r4;  /* 0C0A6EC0 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0A6EC4u, 2);  /* 0C0A6EC2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6EC6u, 1);  /* 0C0A6EC4 mov.l Rm,@-Rn */
	IF(0x0C0A6EC6u); MACL = r6 * r0;  /* 0C0A6EC6 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A6ECAu, 3);  /* 0C0A6EC8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6ECA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A6ECEu, 2);  /* 0C0A6ECC mov.l @Rm,Rn */
	IF(0x0C0A6ECEu); r0 = MACL;  /* 0C0A6ECE sts macl,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A6ED2u, 2);  /* 0C0A6ED0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A6ED4u, 1);  /* 0C0A6ED2 mov.w @Rm+,Rn */
	r0 += r3;  /* 0C0A6ED4 add Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0A6ED8u, 2);  /* 0C0A6ED6 mov.w @(disp,pc),Rn */
	IF(0x0C0A6ED8u); W16(r0 + r2, r1); UPD(0x0C0A6EDAu, 1);  /* 0C0A6ED8 mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0A6EDA add #imm,Rn */
	IF(0x0C0A6EDCu); W16(r0 + r2, r1); UPD(0x0C0A6EDEu, 2);  /* 0C0A6EDC mov.w Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0A6EE0u, 1);  /* 0C0A6EDE mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6EE0 mov #imm,Rn */
	r15 = r14;  /* 0C0A6EE2 mov Rm,Rn */
	IF(0x0C0A6EE4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A6EE4 rts */
}


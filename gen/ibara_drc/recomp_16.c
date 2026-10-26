#include "recomp.h"
#include "recomp_funcs.h"

void f_0C08F858(sh3_t *c)
{
	LOCALS;
	goto L_0C08F858;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F858: BLKS(0x0C08F858u);
	W32(r8, r1); UPD(0x0C08F85Au, 1);  /* 0C08F858 mov.l Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F85A bra */
}

void f_0C08F892(sh3_t *c)
{
	LOCALS;
	goto L_0C08F892;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F892: BLKS(0x0C08F892u);
	W8(r9, r1); UPD(0x0C08F894u, 1);  /* 0C08F892 mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F894 bra */
}

void f_0C08F990(sh3_t *c)
{
	LOCALS;
	goto L_0C08F990;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 1);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	UPD(0x0C08F2A6u, 1);
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F52C: BLKS(0x0C08F52Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08F52C bra */
L_0C08F730: BLKS(0x0C08F730u);
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 1);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
L_0C08F764: BLKS(0x0C08F764u);
	IF(0x0C08F764u); r1 = MACL;  /* 0C08F764 sts macl,Rn */
	r1 += r2;  /* 0C08F766 add Rm,Rn */
	r4 = 0x2000000u; UPD(0x0C08F76Au, 3);  /* 0C08F768 mov.l @(disp,pc),Rn */
	W32(r1 + 0x24u, r4); UPD(0x0C08F76Cu, 1);  /* 0C08F76A mov.l Rm,@(disp,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F76C bra */
L_0C08F842: BLKS(0x0C08F842u);
	r2 = 0xA1u; UPD(0x0C08F844u, 1);  /* 0C08F842 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08F844 mov Rm,Rn */
	r3 += r1;  /* 0C08F846 add Rm,Rn */
	IF(0x0C08F848u); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08F84Au, 3);  /* 0C08F848 mov.b @(r0,Rm),Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C08F84Cu, 1);  /* 0C08F84A mov.b @Rm,Rn */
	r10 = ~r11;  /* 0C08F84C not Rm,Rn */
	r10 &= r9;  /* 0C08F84E and Rm,Rn */
	W8(r3, r10); UPD(0x0C08F852u, 3);  /* 0C08F850 mov.b Rm,@Rn */
	r1 = R32(r8); UPD(0x0C08F854u, 1);  /* 0C08F852 mov.l @Rm,Rn */
	r0 = 0x4000u; UPD(0x0C08F856u, 1);  /* 0C08F854 mov.w @(disp,pc),Rn */
	r1 |= r0;  /* 0C08F856 or Rm,Rn */
	W32(r8, r1); UPD(0x0C08F85Au, 2);  /* 0C08F858 mov.l Rm,@Rn */
L_0C08F85A: BLKS(0x0C08F85Au);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F85A bra */
L_0C08F87C: BLKS(0x0C08F87Cu);
	if (!T) { UPD(0x0C08F85Au, 3); goto L_0C08F85A; }  /* 0C08F87C bf */
L_0C08F87E: BLKS(0x0C08F87Eu);
	r2 = R32(r10 + 0xCu); UPD(0x0C08F880u, 1);  /* 0C08F87E mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C08F880 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08F884u, 2);  /* 0C08F882 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08F884 add #imm,Rn */
	IF(0x0C08F886u); W16(r0 + r10, r3); UPD(0x0C08F888u, 2);  /* 0C08F886 mov.w Rm,@(r0,Rn) */
	W32(r10 + 0xCu, r2); UPD(0x0C08F88Au, 1);  /* 0C08F888 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A0380u; UPD(0x0C08F88Cu, 1);  /* 0C08F88A mov.l @(disp,pc),Rn */
	IF(0x0C08F88Cu); { u32 t_ = r8; PR = 0x0C08F890u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08F890u); }  /* 0C08F88C jsr @Rn */
L_0C08F890: BLKS(0x0C08F890u);
	r1 = 0x0u;  /* 0C08F890 mov #imm,Rn */
	W8(r9, r1); UPD(0x0C08F894u, 2);  /* 0C08F892 mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F894 bra */
L_0C08F8E2: BLKS(0x0C08F8E2u);
	r12 = 0xC0A8690u; UPD(0x0C08F8E4u, 1);  /* 0C08F8E2 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C08F8E4 mov #imm,Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C08F8E8u, 2);  /* 0C08F8E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F8E8u); { u32 t_ = r12; PR = 0x0C08F8ECu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C08F8ECu); }  /* 0C08F8E8 jsr @Rn */
L_0C08F8EC: BLKS(0x0C08F8ECu);
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C08F8EEu, 1);  /* 0C08F8EC mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C08F8EE add #imm,Rn */
	{ W8(r9, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C08F52Cu, 4); goto L_0C08F52C; }  /* 0C08F8F0 bra */
L_0C08F936: BLKS(0x0C08F936u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C08F730u, 3); goto L_0C08F730; }  /* 0C08F936 bra */
L_0C08F990: BLKS(0x0C08F990u);
	r9 = 0xC0A03F0u; UPD(0x0C08F992u, 1);  /* 0C08F990 mov.l @(disp,pc),Rn */
	IF(0x0C08F992u); { u32 t_ = r9; PR = 0x0C08F996u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08F996u); }  /* 0C08F992 jsr @Rn */
L_0C08F996: BLKS(0x0C08F996u);
	IF(0x0C08F996u); T = (s32)r0 >= 0;  /* 0C08F996 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F9A0u, 4); goto L_0C08F9A0; } goto L_0C08F99C; }  /* 0C08F998 bt/s */
L_0C08F99C: BLKS(0x0C08F99Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 4); goto L_0C08F2A2; }  /* 0C08F99C bra */
L_0C08F9A0: BLKS(0x0C08F9A0u);
	r1 = 0xB4u; UPD(0x0C08F9A2u, 1);  /* 0C08F9A0 mov.w @(disp,pc),Rn */
	IF(0x0C08F9A2u); MACL = r0 * r1;  /* 0C08F9A2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08F9A6u, 3);  /* 0C08F9A4 mov.l @(disp,pc),Rn */
	IF(0x0C08F9A6u); r7 = MACL;  /* 0C08F9A6 sts macl,Rn */
	r7 += r2;  /* 0C08F9A8 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C08F9ACu, 3);  /* 0C08F9AA mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C08F9AC cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08F9B6u, 4); goto L_0C08F9B6; } UPD(0x0C08F9B2u, 1); goto L_0C08F9B2; }  /* 0C08F9AE bt/s */
L_0C08F9B2: BLKS(0x0C08F9B2u);
	{ IF(0x0C08F9B4u); MACL = r4 * r1; /* slot mul.l Rm,Rn */ UPD(0x0C08F764u, 4); goto L_0C08F764; }  /* 0C08F9B2 bra */
L_0C08F9B6: BLKS(0x0C08F9B6u);
	r10 = R32(r14); UPD(0x0C08F9B8u, 1);  /* 0C08F9B6 mov.l @Rm,Rn */
	IF(0x0C08F9B8u); MACL = r10 * r1;  /* 0C08F9B8 mul.l Rm,Rn */
	r12 = R32(r7 + 0x24u); UPD(0x0C08F9BCu, 3);  /* 0C08F9BA mov.l @(disp,Rm),Rn */
	IF(0x0C08F9BCu); r10 = MACL;  /* 0C08F9BC sts macl,Rn */
	r10 += r2;  /* 0C08F9BE add Rm,Rn */
	r8 = R32(r10 + 0x2Cu); UPD(0x0C08F9C2u, 3);  /* 0C08F9C0 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C08F9C4u, 1);  /* 0C08F9C2 mov.l @(disp,Rm),Rn */
	r12 += r8;  /* 0C08F9C4 add Rm,Rn */
	r0 = R32(r10 + 0x30u); UPD(0x0C08F9C8u, 2);  /* 0C08F9C6 mov.l @(disp,Rm),Rn */
	r6 = R32(r10); UPD(0x0C08F9CAu, 1);  /* 0C08F9C8 mov.l @Rm,Rn */
	r4 += r0;  /* 0C08F9CA add Rm,Rn */
	W32(r10 + 0x24u, r12); UPD(0x0C08F9CEu, 2);  /* 0C08F9CC mov.l Rm,@(disp,Rn) */
	r0 = r10;  /* 0C08F9CE mov Rm,Rn */
	r13 = 0xECFFFEFFu; UPD(0x0C08F9D2u, 2);  /* 0C08F9D0 mov.l @(disp,pc),Rn */
	r12 = r10;  /* 0C08F9D2 mov Rm,Rn */
	r3 = 0xAFu; UPD(0x0C08F9D6u, 2);  /* 0C08F9D4 mov.w @(disp,pc),Rn */
	r6 &= r13;  /* 0C08F9D6 and Rm,Rn */
	r2 = 0xA8u; UPD(0x0C08F9DAu, 2);  /* 0C08F9D8 mov.w @(disp,pc),Rn */
	IF(0x0C08F9DAu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08F9DCu, 1);  /* 0C08F9DA mov.b @(r0,Rm),Rn */
	r12 += r2;  /* 0C08F9DC add Rm,Rn */
	W32(r10, r6); UPD(0x0C08F9E0u, 2);  /* 0C08F9DE mov.l Rm,@Rn */
	r2 += r7;  /* 0C08F9E0 add Rm,Rn */
	r0 = R32(r7 + 0x38u); UPD(0x0C08F9E4u, 2);  /* 0C08F9E2 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C08F9E4 add #imm,Rn */
	r5 = R32(r7); UPD(0x0C08F9E8u, 2);  /* 0C08F9E6 mov.l @Rm,Rn */
	r12 += 0x1u;  /* 0C08F9E8 add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C08F9ECu, 2);  /* 0C08F9EA mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F9EEu, 1);  /* 0C08F9EC mov.b @Rm,Rn */
	r5 &= r1;  /* 0C08F9EE and Rm,Rn */
	W32(r10 + 0x38u, r0); UPD(0x0C08F9F2u, 2);  /* 0C08F9F0 mov.l Rm,@(disp,Rn) */
	r6 |= r5;  /* 0C08F9F2 or Rm,Rn */
	r8 += r11;  /* 0C08F9F4 add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C08F9F8u, 3);  /* 0C08F9F6 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x28u, r4); UPD(0x0C08F9FAu, 1);  /* 0C08F9F8 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C08F9FA tst Rm,Rn */
	W32(r10, r6); UPD(0x0C08F9FEu, 2);  /* 0C08F9FC mov.l Rm,@Rn */
	{ u32 c_ = T; W8(r12, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08FAC0u, 3); goto L_0C08FAC0; } UPD(0x0C08FA02u, 1); goto L_0C08FA02; }  /* 0C08F9FE bt/s */
L_0C08FA02: BLKS(0x0C08FA02u);
	T = r0 == 0x7u;  /* 0C08FA02 cmp/eq #imm,r0 */
	{ u32 c_ = T; r13 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FA50u, 4); goto L_0C08FA50; } UPD(0x0C08FA08u, 1); goto L_0C08FA08; }  /* 0C08FA04 bt/s */
L_0C08FA08: BLKS(0x0C08FA08u);
	r11 = 0xB4u; UPD(0x0C08FA0Au, 1);  /* 0C08FA08 mov.w @(disp,pc),Rn */
	IF(0x0C08FA0Au); MACL = r13 * r11;  /* 0C08FA0A mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08FA0Eu, 3);  /* 0C08FA0C mov.l @(disp,pc),Rn */
	IF(0x0C08FA0Eu); r8 = MACL;  /* 0C08FA0E sts macl,Rn */
	r2 = 0x99u; UPD(0x0C08FA12u, 2);  /* 0C08FA10 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08FA12 add Rm,Rn */
	r2 += r8;  /* 0C08FA14 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C08FA18u, 3);  /* 0C08FA16 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08FA18 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C08FA1A extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08FA1C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08FACEu, 6); goto L_0C08FACE; } UPD(0x0C08FA22u, 1); goto L_0C08FA22; }  /* 0C08FA1E bf/s */
L_0C08FA22: BLKS(0x0C08FA22u);
	r0 = 0x88u; UPD(0x0C08FA24u, 1);  /* 0C08FA22 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C08FA24 mov #imm,Rn */
	IF(0x0C08FA26u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08FA28u, 2);  /* 0C08FA26 mov.w @(r0,Rm),Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C08FA2Au, 1);  /* 0C08FA28 mov.l @(disp,Rm),Rn */
	W8(r2, r7); UPD(0x0C08FA2Cu, 1);  /* 0C08FA2A mov.b Rm,@Rn */
	r12 += r1;  /* 0C08FA2C add Rm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C08FA30u, 2);  /* 0C08FA2E mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C08FA32u, 1);  /* 0C08FA30 mov.l @Rm,Rn */
	IF(0x0C08FA32u); { u32 t_ = r0; PR = 0x0C08FA36u; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08FA36u); }  /* 0C08FA32 jsr @Rn */
L_0C08FA36: BLKS(0x0C08FA36u);
	r4 = R32(r8 + 0xCu); UPD(0x0C08FA38u, 1);  /* 0C08FA36 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C08FA38 tst Rm,Rn */
	if (!T) { UPD(0x0C08FACEu, 4); goto L_0C08FACE; }  /* 0C08FA3A bf */
L_0C08FA3C: BLKS(0x0C08FA3Cu);
	IF(0x0C08FA3Cu); MACL = r9 * r11;  /* 0C08FA3C mul.l Rm,Rn */
	r1 = 0xA6u; UPD(0x0C08FA40u, 3);  /* 0C08FA3E mov.w @(disp,pc),Rn */
	IF(0x0C08FA40u); r3 = MACL;  /* 0C08FA40 sts macl,Rn */
	{ r3 += r10; /* slot add Rm,Rn */ UPD(0x0C08F842u, 4); goto L_0C08F842; }  /* 0C08FA42 bra */
L_0C08FA50: BLKS(0x0C08FA50u);
	r8 = 0xC0A9E40u; UPD(0x0C08FA52u, 1);  /* 0C08FA50 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08FA52 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C08FA56u, 2);  /* 0C08FA54 mov.l @Rm,Rn */
	IF(0x0C08FA56u); { u32 t_ = r8; PR = 0x0C08FA5Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08FA5Au); }  /* 0C08FA56 jsr @Rn */
L_0C08FA5A: BLKS(0x0C08FA5Au);
	T = (r0 & r0) == 0;  /* 0C08FA5A tst Rm,Rn */
	if (T) { UPD(0x0C08FACEu, 4); goto L_0C08FACE; }  /* 0C08FA5C bt */
L_0C08FA5E: BLKS(0x0C08FA5Eu);
	r9 = 0x9Fu; UPD(0x0C08FA60u, 1);  /* 0C08FA5E mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C08FA60 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08FA64u, 2);  /* 0C08FA62 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08FA64 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08FA66 tst Rm,Rn */
	if (T) { UPD(0x0C08FA70u, 5); goto L_0C08FA70; }  /* 0C08FA68 bt */
L_0C08FA6A: BLKS(0x0C08FA6Au);
	T = r0 == 0x1u;  /* 0C08FA6A cmp/eq #imm,r0 */
	{ IF(0x0C08FA6Eu); ; /* slot nop */ UPD(0x0C08F87Cu, 4); goto L_0C08F87C; }  /* 0C08FA6C bra */
L_0C08FA70: BLKS(0x0C08FA70u);
	r13 = 0xC058090u; UPD(0x0C08FA72u, 1);  /* 0C08FA70 mov.l @(disp,pc),Rn */
	IF(0x0C08FA72u); { u32 t_ = r13; PR = 0x0C08FA76u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C08FA76u); }  /* 0C08FA72 jsr @Rn */
L_0C08FA76: BLKS(0x0C08FA76u);
	r7 = 0x280u; UPD(0x0C08FA78u, 1);  /* 0C08FA76 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08FA78 exts.w Rm,Rn */
	IF(0x0C08FA7Au); MACL = r1 * r7;  /* 0C08FA7A mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C08FA7Eu, 4);  /* 0C08FA7C mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C08FA80u, 1);  /* 0C08FA7E mov.l @(disp,pc),Rn */
	IF(0x0C08FA80u); r0 = MACL;  /* 0C08FA80 sts macl,Rn */
	r11 = 0xC050D70u; UPD(0x0C08FA84u, 2);  /* 0C08FA82 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C08FA84 add Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C08FA88u, 2);  /* 0C08FA86 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C08FA8Au, 1);  /* 0C08FA88 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C08FA8Cu, 1);  /* 0C08FA8A mov.l @(disp,Rm),Rn */
	IF(0x0C08FA8Cu); { u32 t_ = r8; PR = 0x0C08FA90u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C08FA90u); }  /* 0C08FA8C jsr @Rn */
L_0C08FA90: BLKS(0x0C08FA90u);
	r12 = r0;  /* 0C08FA90 mov Rm,Rn */
	IF(0x0C08FA92u); { u32 t_ = r11; PR = 0x0C08FA96u; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C08FA96u); }  /* 0C08FA92 jsr @Rn */
L_0C08FA96: BLKS(0x0C08FA96u);
	r5 = R32(r10 + 0x24u); UPD(0x0C08FA98u, 1);  /* 0C08FA96 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C08FA98 add Rm,Rn */
	r6 = 0xB0000u; UPD(0x0C08FA9Cu, 2);  /* 0C08FA9A mov.l @(disp,pc),Rn */
	r12 += 0xFFFFFFF8u;  /* 0C08FA9C add #imm,Rn */
	r8 = (u32)(s32)(s16)r12;  /* 0C08FA9E exts.w Rm,Rn */
	r5 += r6;  /* 0C08FAA0 add Rm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C08FAA4u, 4);  /* 0C08FAA2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08FAA4 add #imm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C08FAA8u, 2);  /* 0C08FAA6 mov.l Rm,@(disp,Rn) */
	r13 = 0x38000u; UPD(0x0C08FAAAu, 1);  /* 0C08FAA8 mov.l @(disp,pc),Rn */
	r4 = 0x10000u; UPD(0x0C08FAACu, 1);  /* 0C08FAAA mov.l @(disp,pc),Rn */
	r1 = 0xC17794Au; UPD(0x0C08FAAEu, 1);  /* 0C08FAAC mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C08FAAE add Rm,Rn */
	{ W32(r15, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C08F8E2u, 4); goto L_0C08F8E2; }  /* 0C08FAB0 bra */
L_0C08FAC0: BLKS(0x0C08FAC0u);
	r9 = 0xC0A9E40u; UPD(0x0C08FAC2u, 1);  /* 0C08FAC0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08FAC2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C08FAC6u, 2);  /* 0C08FAC4 mov.l @Rm,Rn */
	IF(0x0C08FAC6u); { u32 t_ = r9; PR = 0x0C08FACAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08FACAu); }  /* 0C08FAC6 jsr @Rn */
L_0C08FACA: BLKS(0x0C08FACAu);
	T = (r0 & r0) == 0;  /* 0C08FACA tst Rm,Rn */
	if (!T) { UPD(0x0C08FAD2u, 4); goto L_0C08FAD2; }  /* 0C08FACC bf */
L_0C08FACE: BLKS(0x0C08FACEu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FACE bra */
L_0C08FAD2: BLKS(0x0C08FAD2u);
	r6 = R32(r10 + 0xCu); UPD(0x0C08FAD4u, 1);  /* 0C08FAD2 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C08FAD6u, 1);  /* 0C08FAD4 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C08FAD6 add #imm,Rn */
	W32(r10 + 0xCu, r6); UPD(0x0C08FADAu, 2);  /* 0C08FAD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C08FADAu); { u32 t_ = r2; PR = 0x0C08FADEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08FADEu); }  /* 0C08FADA jsr @Rn */
L_0C08FADE: BLKS(0x0C08FADEu);
	r7 = R32(r10); UPD(0x0C08FAE0u, 1);  /* 0C08FADE mov.l @Rm,Rn */
	r3 = 0x1u;  /* 0C08FAE0 mov #imm,Rn */
	r11 = 0xFFFFBFFFu; UPD(0x0C08FAE4u, 2);  /* 0C08FAE2 mov.w @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C08FAE6u, 1);  /* 0C08FAE4 mov.w @(disp,pc),Rn */
	r7 &= r11;  /* 0C08FAE6 and Rm,Rn */
	IF(0x0C08FAE8u); W16(r0 + r10, r3); UPD(0x0C08FAEAu, 2);  /* 0C08FAE8 mov.w Rm,@(r0,Rn) */
	{ W32(r10, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08F936u, 3); goto L_0C08F936; }  /* 0C08FAEA bra */
}

void f_0C08FAF0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FAF0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08FAF0: BLKS(0x0C08FAF0u);
	r4 = R32(r14); UPD(0x0C08FAF2u, 1);  /* 0C08FAF0 mov.l @Rm,Rn */
	r0 = 0xC0A03F0u; UPD(0x0C08FAF4u, 1);  /* 0C08FAF2 mov.l @(disp,pc),Rn */
	IF(0x0C08FAF4u); { u32 t_ = r0; PR = 0x0C08FAF8u; IF(0x0C08FAF6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08FAF8u); }  /* 0C08FAF4 jsr @Rn */
L_0C08FAF8: BLKS(0x0C08FAF8u);
	IF(0x0C08FAF8u); T = (s32)r0 >= 0;  /* 0C08FAF8 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FB7Cu, 4); goto L_0C08FB7C; } UPD(0x0C08FAFEu, 1); goto L_0C08FAFE; }  /* 0C08FAFA bf/s */
L_0C08FAFE: BLKS(0x0C08FAFEu);
	r11 = 0xB4u; UPD(0x0C08FB00u, 1);  /* 0C08FAFE mov.w @(disp,pc),Rn */
	IF(0x0C08FB00u); MACL = r10 * r11;  /* 0C08FB00 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08FB04u, 3);  /* 0C08FB02 mov.l @(disp,pc),Rn */
	IF(0x0C08FB04u); r3 = MACL;  /* 0C08FB04 sts macl,Rn */
	IF(0x0C08FB06u); MACL = r0 * r11;  /* 0C08FB06 mul.l Rm,Rn */
	r3 += r7;  /* 0C08FB08 add Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C08FB0Cu, 5);  /* 0C08FB0A mov.l @(disp,Rm),Rn */
	IF(0x0C08FB0Cu); r5 = MACL;  /* 0C08FB0C sts macl,Rn */
	r5 += r7;  /* 0C08FB0E add Rm,Rn */
	r0 = R32(r5 + 0x24u); UPD(0x0C08FB12u, 3);  /* 0C08FB10 mov.l @(disp,Rm),Rn */
	r13 = R32(r5 + 0x28u); UPD(0x0C08FB14u, 1);  /* 0C08FB12 mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x2Cu); UPD(0x0C08FB16u, 1);  /* 0C08FB14 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C08FB16 add Rm,Rn */
	r0 += r12;  /* 0C08FB18 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C08FB1Cu, 3);  /* 0C08FB1A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r13); UPD(0x0C08FB1Eu, 1);  /* 0C08FB1C mov.l Rm,@(disp,Rn) */
	r1 = R32(r5 + 0x38u); UPD(0x0C08FB20u, 1);  /* 0C08FB1E mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r1); UPD(0x0C08FB22u, 1);  /* 0C08FB20 mov.l Rm,@(disp,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FB22 bra */
L_0C08FB7C: BLKS(0x0C08FB7Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 3); goto L_0C08F2A2; }  /* 0C08FB7C bra */
}

void f_0C08FB70(sh3_t *c)
{
	LOCALS;
	goto L_0C08FB70;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	UPD(0x0C08F2A6u, 1);
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F424: BLKS(0x0C08F424u);
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C08FB22: BLKS(0x0C08FB22u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FB22 bra */
L_0C08FB70: BLKS(0x0C08FB70u);
	r9 = 0xC0A05D0u; UPD(0x0C08FB72u, 1);  /* 0C08FB70 mov.l @(disp,pc),Rn */
	IF(0x0C08FB72u); { u32 t_ = r9; PR = 0x0C08FB76u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C08FB76u); }  /* 0C08FB72 jsr @Rn */
L_0C08FB76: BLKS(0x0C08FB76u);
	IF(0x0C08FB76u); T = (s32)r0 >= 0;  /* 0C08FB76 cmp/pz Rn */
	{ u32 c_ = T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FB80u, 4); goto L_0C08FB80; } UPD(0x0C08FB7Cu, 1); goto L_0C08FB7C; }  /* 0C08FB78 bt/s */
L_0C08FB7C: BLKS(0x0C08FB7Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 3); goto L_0C08F2A2; }  /* 0C08FB7C bra */
L_0C08FB80: BLKS(0x0C08FB80u);
	r7 = 0xB4u; UPD(0x0C08FB82u, 1);  /* 0C08FB80 mov.w @(disp,pc),Rn */
	IF(0x0C08FB82u); MACL = r10 * r7;  /* 0C08FB82 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08FB86u, 3);  /* 0C08FB84 mov.l @(disp,pc),Rn */
	IF(0x0C08FB86u); r10 = MACL;  /* 0C08FB86 sts macl,Rn */
	IF(0x0C08FB88u); MACL = r0 * r7;  /* 0C08FB88 mul.l Rm,Rn */
	r10 += r12;  /* 0C08FB8A add Rm,Rn */
	r11 = R32(r10); UPD(0x0C08FB8Eu, 5);  /* 0C08FB8C mov.l @Rm,Rn */
	IF(0x0C08FB8Eu); r7 = MACL;  /* 0C08FB8E sts macl,Rn */
	r7 += r12;  /* 0C08FB90 add Rm,Rn */
	r5 = 0xECFFFEFFu; UPD(0x0C08FB94u, 3);  /* 0C08FB92 mov.l @(disp,pc),Rn */
	r4 = R32(r7 + 0x38u); UPD(0x0C08FB96u, 1);  /* 0C08FB94 mov.l @(disp,Rm),Rn */
	r11 &= r5;  /* 0C08FB96 and Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C08FB9Au, 2);  /* 0C08FB98 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x2Cu); UPD(0x0C08FB9Cu, 1);  /* 0C08FB9A mov.l @(disp,Rm),Rn */
	W32(r10 + 0x38u, r4); UPD(0x0C08FB9Eu, 1);  /* 0C08FB9C mov.l Rm,@(disp,Rn) */
	r6 += r1;  /* 0C08FB9E add Rm,Rn */
	W32(r10, r11); UPD(0x0C08FBA2u, 2);  /* 0C08FBA0 mov.l Rm,@Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C08FBA4u, 1);  /* 0C08FBA2 mov.l Rm,@(disp,Rn) */
	r4 = 0x9Fu; UPD(0x0C08FBA6u, 1);  /* 0C08FBA4 mov.w @(disp,pc),Rn */
	r8 = R32(r7); UPD(0x0C08FBA8u, 1);  /* 0C08FBA6 mov.l @Rm,Rn */
	r4 += r10;  /* 0C08FBA8 add Rm,Rn */
	r0 = 0x13000100u; UPD(0x0C08FBACu, 2);  /* 0C08FBAA mov.l @(disp,pc),Rn */
	r13 = R32(r7 + 0x28u); UPD(0x0C08FBAEu, 1);  /* 0C08FBAC mov.l @(disp,Rm),Rn */
	r8 &= r0;  /* 0C08FBAE and Rm,Rn */
	r6 = R32(r10 + 0x30u); UPD(0x0C08FBB2u, 2);  /* 0C08FBB0 mov.l @(disp,Rm),Rn */
	r11 |= r8;  /* 0C08FBB2 or Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C08FBB6u, 2);  /* 0C08FBB4 mov.b @Rm,Rn */
	r13 += r6;  /* 0C08FBB6 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08FBB8 extu.b Rm,Rn */
	W32(r10 + 0x28u, r13); UPD(0x0C08FBBCu, 3);  /* 0C08FBBA mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C08FBBC cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r10, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08FC90u, 4); goto L_0C08FC90; } UPD(0x0C08FBC2u, 1); goto L_0C08FBC2; }  /* 0C08FBBE bt/s */
L_0C08FBC2: BLKS(0x0C08FBC2u);
	r9 = 0x1u;  /* 0C08FBC2 mov #imm,Rn */
	T = (s32)r0 > (s32)r9;  /* 0C08FBC4 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08FBF0u, 5); goto L_0C08FBF0; } goto L_0C08FBCA; }  /* 0C08FBC6 bt/s */
L_0C08FBCA: BLKS(0x0C08FBCAu);
	T = (r0 & r0) == 0;  /* 0C08FBCA tst Rm,Rn */
	if (!T) { UPD(0x0C08FB22u, 5); goto L_0C08FB22; }  /* 0C08FBCC bf */
L_0C08FBCE: BLKS(0x0C08FBCEu);
	r2 = 0xA0u; UPD(0x0C08FBD0u, 1);  /* 0C08FBCE mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C08FBD0 add Rm,Rn */
	r10 += r2;  /* 0C08FBD2 add Rm,Rn */
	r7 += 0x1u;  /* 0C08FBD4 add #imm,Rn */
	r10 += 0x1u;  /* 0C08FBD6 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C08FBDAu, 5);  /* 0C08FBD8 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C08FBDCu, 1);  /* 0C08FBDA mov.b @Rm,Rn */
	T = (r9 & r3) == 0;  /* 0C08FBDC tst Rm,Rn */
	if (T) { UPD(0x0C08FB22u, 4); goto L_0C08FB22; }  /* 0C08FBDE bt */
L_0C08FBE0: BLKS(0x0C08FBE0u);
	r10 = r5;  /* 0C08FBE0 mov Rm,Rn */
	r10 += 0x1u;  /* 0C08FBE2 add #imm,Rn */
	W8(r4, r10); UPD(0x0C08FBE6u, 3);  /* 0C08FBE4 mov.b Rm,@Rn */
L_0C08FBE6: BLKS(0x0C08FBE6u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FBE6 bra */
L_0C08FBF0: BLKS(0x0C08FBF0u);
	if (!T) { UPD(0x0C08FBE6u, 3); goto L_0C08FBE6; }  /* 0C08FBF0 bf */
L_0C08FBF2: BLKS(0x0C08FBF2u);
	r5 = 0x14u;  /* 0C08FBF2 mov #imm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C08FBF6u, 2);  /* 0C08FBF4 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C08FBF8u, 1);  /* 0C08FBF6 mov.l @Rm,Rn */
	IF(0x0C08FBF8u); { u32 t_ = r11; PR = 0x0C08FBFCu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08FBFCu); }  /* 0C08FBF8 jsr @Rn */
L_0C08FBFC: BLKS(0x0C08FBFCu);
	T = (r0 & r0) == 0;  /* 0C08FBFC tst Rm,Rn */
	if (T) { UPD(0x0C08FBE6u, 4); goto L_0C08FBE6; }  /* 0C08FBFE bt */
L_0C08FC00: BLKS(0x0C08FC00u);
	r0 = R32(r10 + 0x8u); UPD(0x0C08FC02u, 1);  /* 0C08FC00 mov.l @(disp,Rm),Rn */
	r3 = 0xC1C2B00u; UPD(0x0C08FC04u, 1);  /* 0C08FC02 mov.l @(disp,pc),Rn */
	IF(0x0C08FC04u); r0 <<= 2;  /* 0C08FC04 shll2 Rn */
	r12 = 0xFFFFFF6Cu; UPD(0x0C08FC08u, 2);  /* 0C08FC06 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08FC08 add Rm,Rn */
	IF(0x0C08FC0Au); r7 = R32(r0 + r12); UPD(0x0C08FC0Cu, 2);  /* 0C08FC0A mov.l @(r0,Rm),Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C08FC0Eu, 1);  /* 0C08FC0C mov.l @(disp,Rm),Rn */
	r8 = 0xC058060u; UPD(0x0C08FC10u, 1);  /* 0C08FC0E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08FC10 add Rm,Rn */
	IF(0x0C08FC12u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08FC14u, 2);  /* 0C08FC12 mov.w @(r0,Rm),Rn */
	r5 = 0x99999u; UPD(0x0C08FC16u, 1);  /* 0C08FC14 mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C08FC16 mov Rm,Rn */
	IF(0x0C08FC18u); { u32 t_ = r8; PR = 0x0C08FC1Cu; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08FC1Cu); }  /* 0C08FC18 jsr @Rn */
L_0C08FC1C: BLKS(0x0C08FC1Cu);
	r13 = R32(r10 + 0x24u); UPD(0x0C08FC1Eu, 1);  /* 0C08FC1C mov.l @(disp,Rm),Rn */
	r11 = 0xC058030u; UPD(0x0C08FC20u, 1);  /* 0C08FC1E mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C08FC20 add Rm,Rn */
	r0 = 0xFFFA0000u; UPD(0x0C08FC24u, 2);  /* 0C08FC22 mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C08FC26u, 1);  /* 0C08FC24 mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C08FC28u, 1);  /* 0C08FC26 mov.l @(disp,pc),Rn */
	IF(0x0C08FC28u); { u32 t_ = r11; PR = 0x0C08FC2Cu; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08FC2Cu); }  /* 0C08FC28 jsr @Rn */
L_0C08FC2C: BLKS(0x0C08FC2Cu);
	r6 = R32(r10 + 0x28u); UPD(0x0C08FC2Eu, 1);  /* 0C08FC2C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08FC2E add #imm,Rn */
	r6 += r0;  /* 0C08FC30 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C08FC34u, 3);  /* 0C08FC32 mov.l @(disp,Rm),Rn */
	r2 = 0xC1C2B08u; UPD(0x0C08FC36u, 1);  /* 0C08FC34 mov.l @(disp,pc),Rn */
	IF(0x0C08FC36u); r0 <<= 2;  /* 0C08FC36 shll2 Rn */
	r0 += r2;  /* 0C08FC38 add Rm,Rn */
	IF(0x0C08FC3Au); r5 = R32(r0 + r12); UPD(0x0C08FC3Cu, 3);  /* 0C08FC3A mov.l @(r0,Rm),Rn */
	r4 = 0x20000u; UPD(0x0C08FC3Eu, 1);  /* 0C08FC3C mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C08FC3E add Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C08FC42u, 2);  /* 0C08FC40 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C08FC42 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C08FC46u, 2);  /* 0C08FC44 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C08FC46 mov #imm,Rn */
	IF(0x0C08FC48u); { u32 t_ = r8; PR = 0x0C08FC4Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C08FC4Cu); }  /* 0C08FC48 jsr @Rn */
L_0C08FC4C: BLKS(0x0C08FC4Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08FC4Eu, 1);  /* 0C08FC4C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08FC4E tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FC80u, 4); goto L_0C08FC80; } goto L_0C08FC54; }  /* 0C08FC50 bt/s */
L_0C08FC54: BLKS(0x0C08FC54u);
	T = r0 == 0x8u;  /* 0C08FC54 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FC70u, 5); goto L_0C08FC70; } UPD(0x0C08FC5Au, 1); goto L_0C08FC5A; }  /* 0C08FC56 bt/s */
L_0C08FC5A: BLKS(0x0C08FC5Au);
	r4 = 0xB4u; UPD(0x0C08FC5Cu, 1);  /* 0C08FC5A mov.w @(disp,pc),Rn */
	IF(0x0C08FC5Cu); MACL = r5 * r4;  /* 0C08FC5C mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C08FC60u, 3);  /* 0C08FC5E mov.l @(disp,pc),Rn */
	IF(0x0C08FC60u); r9 = MACL;  /* 0C08FC60 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C08FC64u, 2);  /* 0C08FC62 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C08FC64 add Rm,Rn */
	r10 = R32(r9 + 0xCu); UPD(0x0C08FC68u, 2);  /* 0C08FC66 mov.l @(disp,Rm),Rn */
	IF(0x0C08FC68u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C08FC6Au, 1);  /* 0C08FC68 mov.w @(r0,Rm),Rn */
	r10 += r1;  /* 0C08FC6A add Rm,Rn */
	{ W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F424u, 4); goto L_0C08F424; }  /* 0C08FC6C bra */
L_0C08FC70: BLKS(0x0C08FC70u);
	r0 = 0x88u; UPD(0x0C08FC72u, 1);  /* 0C08FC70 mov.w @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C08FC72 mov #imm,Rn */
	r12 = 0xFFFFFFFFu;  /* 0C08FC74 mov #imm,Rn */
	W32(r10 + 0xCu, r2); UPD(0x0C08FC78u, 3);  /* 0C08FC76 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C08FC7Au); W16(r0 + r10, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08F424u, 3); goto L_0C08F424; }  /* 0C08FC78 bra */
L_0C08FC80: BLKS(0x0C08FC80u);
	r0 = 0x88u; UPD(0x0C08FC82u, 1);  /* 0C08FC80 mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r9); UPD(0x0C08FC84u, 1);  /* 0C08FC82 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C08FC86u); W16(r0 + r10, r9); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08F424u, 3); goto L_0C08F424; }  /* 0C08FC84 bra */
L_0C08FC90: BLKS(0x0C08FC90u);
	IF(0x0C08FC90u); T = (s32)r6 >= 0;  /* 0C08FC90 cmp/pz Rn */
	if (!T) { UPD(0x0C08FD20u, 4); goto L_0C08FD20; }  /* 0C08FC92 bf */
L_0C08FC94: BLKS(0x0C08FC94u);
	IF(0x0C08FC94u); T = (s32)r6 > 0;  /* 0C08FC94 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C08FC98u); T = (s32)r6 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C08FCA4u, 4); goto L_0C08FCA4; } goto L_0C08FC9A; }  /* 0C08FC96 bf/s */
L_0C08FC9A: BLKS(0x0C08FC9Au);
	r8 = 0x8000u; UPD(0x0C08FC9Cu, 2);  /* 0C08FC9A mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C08FC9C add Rm,Rn */
	W32(r10 + 0x30u, r8); UPD(0x0C08FCA0u, 2);  /* 0C08FC9E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C08FCA0 mov Rm,Rn */
	IF(0x0C08FCA2u); T = (s32)r6 >= 0;  /* 0C08FCA2 cmp/pz Rn */
	UPD(0x0C08FCA4u, 2);
L_0C08FCA4: BLKS(0x0C08FCA4u);
	{ u32 c_ = !T; r2 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08FCD0u, 3); goto L_0C08FCD0; } UPD(0x0C08FCA8u, 1); goto L_0C08FCA8; }  /* 0C08FCA4 bf/s */
L_0C08FCA8: BLKS(0x0C08FCA8u);
	r0 = 0x280000u; UPD(0x0C08FCAAu, 1);  /* 0C08FCA8 mov.l @(disp,pc),Rn */
	T = r2 == r0;  /* 0C08FCAA cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C08FBE6u, 4); goto L_0C08FBE6; }  /* 0C08FCAC bf */
L_0C08FCAE: BLKS(0x0C08FCAEu);
	r6 = r7;  /* 0C08FCAE mov Rm,Rn */
	r9 = 0xA0u; UPD(0x0C08FCB2u, 2);  /* 0C08FCB0 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C08FCB2 add Rm,Rn */
	r9 += r10;  /* 0C08FCB4 add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C08FCB8u, 3);  /* 0C08FCB6 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C08FCB8 add #imm,Rn */
	r6 += 0x1u;  /* 0C08FCBA add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08FCBEu, 3);  /* 0C08FCBC mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C08FCC0u, 1);  /* 0C08FCBE mov.b @Rm,Rn */
	r12 = ~r3;  /* 0C08FCC0 not Rm,Rn */
	IF(0x0C08FCC2u); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08FCC4u, 2);  /* 0C08FCC2 mov.b @(r0,Rm),Rn */
	r12 &= r7;  /* 0C08FCC4 and Rm,Rn */
	r13 += 0x1u;  /* 0C08FCC6 add #imm,Rn */
	W8(r6, r12); UPD(0x0C08FCCAu, 3);  /* 0C08FCC8 mov.b Rm,@Rn */
	{ IF(0x0C08FCCCu); W8(r0 + r10, r13); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08FBE0u, 3); goto L_0C08FBE0; }  /* 0C08FCCA bra */
L_0C08FCD0: BLKS(0x0C08FCD0u);
	{ r2 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C08FCA8u, 3); goto L_0C08FCA8; }  /* 0C08FCD0 bra */
L_0C08FD20: BLKS(0x0C08FD20u);
	r11 = 0xFFFF8000u; UPD(0x0C08FD22u, 1);  /* 0C08FD20 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C08FD22 add Rm,Rn */
	W32(r10 + 0x30u, r11); UPD(0x0C08FD26u, 2);  /* 0C08FD24 mov.l Rm,@(disp,Rn) */
	{ r6 = r11; /* slot mov Rm,Rn */ UPD(0x0C08FC94u, 3); goto L_0C08FC94; }  /* 0C08FD26 bra */
}

void f_0C08FD30(sh3_t *c)
{
	LOCALS;
	goto L_0C08FD30;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08FD30: BLKS(0x0C08FD30u);
	r11 = 0xC0A05D0u; UPD(0x0C08FD32u, 1);  /* 0C08FD30 mov.l @(disp,pc),Rn */
	IF(0x0C08FD32u); { u32 t_ = r11; PR = 0x0C08FD36u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C08FD36u); }  /* 0C08FD32 jsr @Rn */
L_0C08FD36: BLKS(0x0C08FD36u);
	IF(0x0C08FD36u); T = (s32)r0 >= 0;  /* 0C08FD36 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08FD40u, 4); goto L_0C08FD40; } goto L_0C08FD3C; }  /* 0C08FD38 bt/s */
L_0C08FD3C: BLKS(0x0C08FD3Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 4); goto L_0C08F2A2; }  /* 0C08FD3C bra */
L_0C08FD40: BLKS(0x0C08FD40u);
	r2 = 0xB4u; UPD(0x0C08FD42u, 1);  /* 0C08FD40 mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C08FD44u, 1);  /* 0C08FD42 mov.l @Rm,Rn */
	IF(0x0C08FD44u); MACL = r6 * r2;  /* 0C08FD44 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08FD48u, 3);  /* 0C08FD46 mov.l @(disp,pc),Rn */
	IF(0x0C08FD48u); r0 = MACL;  /* 0C08FD48 sts macl,Rn */
	r0 += r8;  /* 0C08FD4A add Rm,Rn */
	r7 = R32(r0); UPD(0x0C08FD4Eu, 3);  /* 0C08FD4C mov.l @Rm,Rn */
	IF(0x0C08FD4Eu); MACL = r9 * r2;  /* 0C08FD4E mul.l Rm,Rn */
	r13 = 0xECFFFEFFu; UPD(0x0C08FD52u, 3);  /* 0C08FD50 mov.l @(disp,pc),Rn */
	r7 &= r13;  /* 0C08FD52 and Rm,Rn */
	W32(r0, r7); UPD(0x0C08FD56u, 2);  /* 0C08FD54 mov.l Rm,@Rn */
	IF(0x0C08FD56u); r9 = MACL;  /* 0C08FD56 sts macl,Rn */
	r9 += r8;  /* 0C08FD58 add Rm,Rn */
	r10 = R32(r9); UPD(0x0C08FD5Cu, 3);  /* 0C08FD5A mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08FD5Eu, 1);  /* 0C08FD5C mov.l @(disp,pc),Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C08FD60u, 1);  /* 0C08FD5E mov.l @(disp,Rm),Rn */
	r10 &= r1;  /* 0C08FD60 and Rm,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C08FD64u, 2);  /* 0C08FD62 mov.l @(disp,Rm),Rn */
	r7 |= r10;  /* 0C08FD64 or Rm,Rn */
	r11 = R32(r0 + 0x2Cu); UPD(0x0C08FD68u, 2);  /* 0C08FD66 mov.l @(disp,Rm),Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C08FD6Au, 1);  /* 0C08FD68 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C08FD6A add Rm,Rn */
	r3 = R32(r9 + 0x38u); UPD(0x0C08FD6Eu, 2);  /* 0C08FD6C mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C08FD6E add Rm,Rn */
	W32(r0 + 0x24u, r12); UPD(0x0C08FD72u, 2);  /* 0C08FD70 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C08FD74u, 1);  /* 0C08FD72 mov.l Rm,@(disp,Rn) */
	W32(r0, r7); UPD(0x0C08FD76u, 1);  /* 0C08FD74 mov.l Rm,@Rn */
	W32(r0 + 0x38u, r3); UPD(0x0C08FD78u, 1);  /* 0C08FD76 mov.l Rm,@(disp,Rn) */
	r0 += 0x7Eu;  /* 0C08FD78 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C08FD7Cu, 2);  /* 0C08FD7A mov.w @Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C08FD7Eu, 1);  /* 0C08FD7C mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08FD7E add #imm,Rn */
	IF(0x0C08FD80u); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08FD82u, 2);  /* 0C08FD80 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C08FD82 mov #imm,Rn */
	r2 = r8 & 0xFF;  /* 0C08FD84 extu.b Rm,Rn */
	T = r2 > r0;  /* 0C08FD86 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08FE5Eu, 6); goto L_0C08FE5E; }  /* 0C08FD88 bt */
L_0C08FD8A: BLKS(0x0C08FD8Au);
	r0 = 0xC08FDACu;  /* 0C08FD8A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08FD8C add Rm,Rn */
	IF(0x0C08FD8Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08FD90u, 3);  /* 0C08FD8E mov.w @(r0,Rm),Rn */
	IF(0x0C08FD90u); { u32 tv_ = (r3 + 0x0C08FD94u); u32 t_ = PHYS(tv_); IF(0x0C08FD92u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08FD90 braf Rn */
L_0C08FE5E: BLKS(0x0C08FE5Eu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE5E bra */
}

void f_0C08FDC0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FDC0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F3A0: BLKS(0x0C08F3A0u);
	IF(0x0C08F3A0u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3A2u, 1);  /* 0C08F3A0 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C08F3A2 add #imm,Rn */
	IF(0x0C08F3A4u); W8(r0 + r8, r4); UPD(0x0C08F3A6u, 2);  /* 0C08F3A4 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3A6 bra */
L_0C08FDC0: BLKS(0x0C08FDC0u);
	r2 = 0xB4u; UPD(0x0C08FDC2u, 1);  /* 0C08FDC0 mov.w @(disp,pc),Rn */
	IF(0x0C08FDC2u); MACL = r9 * r2;  /* 0C08FDC2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08FDC6u, 3);  /* 0C08FDC4 mov.l @(disp,pc),Rn */
	IF(0x0C08FDC6u); r0 = MACL;  /* 0C08FDC6 sts macl,Rn */
	r7 = 0xA1u; UPD(0x0C08FDCAu, 2);  /* 0C08FDC8 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08FDCA add Rm,Rn */
	IF(0x0C08FDCCu); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08FDCEu, 2);  /* 0C08FDCC mov.b @(r0,Rm),Rn */
	IF(0x0C08FDCEu); T = (s32)r9 >= 0;  /* 0C08FDCE cmp/pz Rn */
	if (T) { UPD(0x0C08FE5Eu, 4); goto L_0C08FE5E; }  /* 0C08FDD0 bt */
L_0C08FDD2: BLKS(0x0C08FDD2u);
	r13 = R32(r14); UPD(0x0C08FDD4u, 1);  /* 0C08FDD2 mov.l @Rm,Rn */
	r4 = 0x6Cu;  /* 0C08FDD4 mov #imm,Rn */
	IF(0x0C08FDD6u); MACL = r13 * r2;  /* 0C08FDD6 mul.l Rm,Rn */
	r10 = 0xC0AFC10u; UPD(0x0C08FDDAu, 4);  /* 0C08FDD8 mov.l @(disp,pc),Rn */
	IF(0x0C08FDDAu); r8 = MACL;  /* 0C08FDDA sts macl,Rn */
	r8 += r3;  /* 0C08FDDC add Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C08FDE0u, 3);  /* 0C08FDDE mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C08FDE0 add #imm,Rn */
	IF(0x0C08FDE2u); { u32 t_ = r10; PR = 0x0C08FDE6u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C08FDE6u); }  /* 0C08FDE2 jsr @Rn */
L_0C08FDE6: BLKS(0x0C08FDE6u);
	r0 = 0x9Fu; UPD(0x0C08FDE8u, 1);  /* 0C08FDE6 mov.w @(disp,pc),Rn */
	{ r8 += 0xFFFFFFB0u; /* slot add #imm,Rn */ UPD(0x0C08F3A0u, 3); goto L_0C08F3A0; }  /* 0C08FDE8 bra */
L_0C08FE5E: BLKS(0x0C08FE5Eu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE5E bra */
}

void f_0C08FDF0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FDF0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F3D2: BLKS(0x0C08F3D2u);
	r0 = 0x9Fu; UPD(0x0C08F3D4u, 1);  /* 0C08F3D2 mov.w @(disp,pc),Rn */
	IF(0x0C08F3D4u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08F3D6u, 1);  /* 0C08F3D4 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C08F3D6 add #imm,Rn */
	IF(0x0C08F3D8u); W8(r0 + r7, r1); UPD(0x0C08F3DAu, 2);  /* 0C08F3D8 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3DA bra */
L_0C08FDF0: BLKS(0x0C08FDF0u);
	r5 = 0xB4u; UPD(0x0C08FDF2u, 1);  /* 0C08FDF0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C08FDF4u, 1);  /* 0C08FDF2 mov.l @Rm,Rn */
	IF(0x0C08FDF4u); MACL = r1 * r5;  /* 0C08FDF4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08FDF8u, 3);  /* 0C08FDF6 mov.l @(disp,pc),Rn */
	IF(0x0C08FDF8u); r7 = MACL;  /* 0C08FDF8 sts macl,Rn */
	r7 += r6;  /* 0C08FDFA add Rm,Rn */
	r12 = R32(r7 + 0x2Cu); UPD(0x0C08FDFEu, 3);  /* 0C08FDFC mov.l @(disp,Rm),Rn */
	r2 = 0xFFFF8000u; UPD(0x0C08FE00u, 1);  /* 0C08FDFE mov.w @(disp,pc),Rn */
	r12 += r2;  /* 0C08FE00 add Rm,Rn */
	W32(r7 + 0x2Cu, r12); UPD(0x0C08FE04u, 2);  /* 0C08FE02 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C08FE04 add #imm,Rn */
	r11 = R32(r7); UPD(0x0C08FE08u, 2);  /* 0C08FE06 mov.l @Rm,Rn */
	r8 = 0xFFE00000u; UPD(0x0C08FE0Au, 1);  /* 0C08FE08 mov.l @(disp,pc),Rn */
	r11 += r8;  /* 0C08FE0A add Rm,Rn */
	T = r11 == r12;  /* 0C08FE0C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FE5Eu, 5); goto L_0C08FE5E; } goto L_0C08FE12; }  /* 0C08FE0E bf/s */
L_0C08FE12: BLKS(0x0C08FE12u);
	IF(0x0C08FE12u); MACL = r9 * r5;  /* 0C08FE12 mul.l Rm,Rn */
	IF(0x0C08FE14u); r5 = MACL;  /* 0C08FE14 sts macl,Rn */
	r5 += r6;  /* 0C08FE16 add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C08FE1Au, 6);  /* 0C08FE18 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C08FE1A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C08FE1Eu, 2);  /* 0C08FE1C mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C08FE1E and #imm,r0 */
	{ W8(r5, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C08F3D2u, 4); goto L_0C08F3D2; }  /* 0C08FE20 bra */
L_0C08FE5E: BLKS(0x0C08FE5Eu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE5E bra */
}

void f_0C08FE30(sh3_t *c)
{
	LOCALS;
	goto L_0C08FE30;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08FE30: BLKS(0x0C08FE30u);
	r8 = 0xB4u; UPD(0x0C08FE32u, 1);  /* 0C08FE30 mov.w @(disp,pc),Rn */
	IF(0x0C08FE32u); MACL = r9 * r8;  /* 0C08FE32 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08FE36u, 3);  /* 0C08FE34 mov.l @(disp,pc),Rn */
	IF(0x0C08FE36u); r0 = MACL;  /* 0C08FE36 sts macl,Rn */
	r9 = 0xA1u; UPD(0x0C08FE3Au, 2);  /* 0C08FE38 mov.w @(disp,pc),Rn */
	r0 += r10;  /* 0C08FE3A add Rm,Rn */
	IF(0x0C08FE3Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08FE3Eu, 2);  /* 0C08FE3C mov.b @(r0,Rm),Rn */
	IF(0x0C08FE3Eu); T = (s32)r3 >= 0;  /* 0C08FE3E cmp/pz Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FE50u, 4); goto L_0C08FE50; } UPD(0x0C08FE44u, 1); goto L_0C08FE44; }  /* 0C08FE40 bf/s */
L_0C08FE44: BLKS(0x0C08FE44u);
	r13 = 0x4u;  /* 0C08FE44 mov #imm,Rn */
	IF(0x0C08FE46u); MACL = r0 * r8;  /* 0C08FE46 mul.l Rm,Rn */
	r7 = 0x9Fu; UPD(0x0C08FE4Au, 4);  /* 0C08FE48 mov.w @(disp,pc),Rn */
	IF(0x0C08FE4Au); r0 = MACL;  /* 0C08FE4A sts macl,Rn */
	r0 += r10;  /* 0C08FE4C add Rm,Rn */
	IF(0x0C08FE4Eu); W8(r0 + r7, r13); UPD(0x0C08FE50u, 3);  /* 0C08FE4E mov.b Rm,@(r0,Rn) */
L_0C08FE50: BLKS(0x0C08FE50u);
	r12 = 0xC0A9E40u; UPD(0x0C08FE52u, 1);  /* 0C08FE50 mov.l @(disp,pc),Rn */
	r5 = 0x3Cu;  /* 0C08FE52 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C08FE56u, 2);  /* 0C08FE54 mov.l @Rm,Rn */
	IF(0x0C08FE56u); { u32 t_ = r12; PR = 0x0C08FE5Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08FE5Au); }  /* 0C08FE56 jsr @Rn */
L_0C08FE5A: BLKS(0x0C08FE5Au);
	T = (r0 & r0) == 0;  /* 0C08FE5A tst Rm,Rn */
	if (!T) { UPD(0x0C08FE62u, 4); goto L_0C08FE62; }  /* 0C08FE5C bf */
L_0C08FE5E: BLKS(0x0C08FE5Eu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE5E bra */
L_0C08FE62: BLKS(0x0C08FE62u);
	r1 = R32(r14); UPD(0x0C08FE64u, 1);  /* 0C08FE62 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08FE64 add #imm,Rn */
	IF(0x0C08FE66u); MACL = r1 * r8;  /* 0C08FE66 mul.l Rm,Rn */
	r2 = 0x40000u; UPD(0x0C08FE6Au, 4);  /* 0C08FE68 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C08FE6A mov #imm,Rn */
	IF(0x0C08FE6Cu); r11 = MACL;  /* 0C08FE6C sts macl,Rn */
	r11 += r10;  /* 0C08FE6E add Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C08FE72u, 4);  /* 0C08FE70 mov.l @(disp,Rm),Rn */
	r6 = 0xFFE40000u; UPD(0x0C08FE74u, 1);  /* 0C08FE72 mov.l @(disp,pc),Rn */
	r9 = 0xC0A8E70u; UPD(0x0C08FE76u, 1);  /* 0C08FE74 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08FE76 add Rm,Rn */
	W32(r15, r2); UPD(0x0C08FE7Au, 2);  /* 0C08FE78 mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C08FE7Cu, 1);  /* 0C08FE7A mov.w @(disp,pc),Rn */
	IF(0x0C08FE7Cu); { u32 t_ = r9; PR = 0x0C08FE80u; r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C08FE80u); }  /* 0C08FE7C jsr @Rn */
L_0C08FE80: BLKS(0x0C08FE80u);
	r0 = 0x9Fu; UPD(0x0C08FE82u, 1);  /* 0C08FE80 mov.w @(disp,pc),Rn */
	r4 = R32(r11 + 0x2Cu); UPD(0x0C08FE84u, 1);  /* 0C08FE82 mov.l @(disp,Rm),Rn */
	IF(0x0C08FE84u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08FE86u, 1);  /* 0C08FE84 mov.b @(r0,Rm),Rn */
	r8 = 0xC0000u; UPD(0x0C08FE88u, 1);  /* 0C08FE86 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C08FE88 add #imm,Rn */
	r4 += r8;  /* 0C08FE8A add Rm,Rn */
	W32(r11 + 0x2Cu, r4); UPD(0x0C08FE8Eu, 3);  /* 0C08FE8C mov.l Rm,@(disp,Rn) */
	IF(0x0C08FE8Eu); W8(r0 + r11, r10); UPD(0x0C08FE90u, 1);  /* 0C08FE8E mov.b Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C08FE90 add #imm,Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 4); goto L_0C08EF56; }  /* 0C08FE92 bra */
}

void f_0C08FE92(sh3_t *c)
{
	LOCALS;
	goto L_0C08FE92;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08FE92: BLKS(0x0C08FE92u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE92 bra */
}

void f_0C08FEA0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FEA0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F3D8: BLKS(0x0C08F3D8u);
	IF(0x0C08F3D8u); W8(r0 + r7, r1); UPD(0x0C08F3DAu, 1);  /* 0C08F3D8 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3DA bra */
L_0C08FE92: BLKS(0x0C08FE92u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE92 bra */
L_0C08FEA0: BLKS(0x0C08FEA0u);
	r7 = 0xB4u; UPD(0x0C08FEA2u, 1);  /* 0C08FEA0 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C08FEA4u, 1);  /* 0C08FEA2 mov.l @Rm,Rn */
	IF(0x0C08FEA4u); MACL = r11 * r7;  /* 0C08FEA4 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08FEA8u, 3);  /* 0C08FEA6 mov.l @(disp,pc),Rn */
	IF(0x0C08FEA8u); r7 = MACL;  /* 0C08FEA8 sts macl,Rn */
	r7 += r12;  /* 0C08FEAA add Rm,Rn */
	r5 = R32(r7 + 0x2Cu); UPD(0x0C08FEAEu, 3);  /* 0C08FEAC mov.l @(disp,Rm),Rn */
	r0 = 0xFFFF8000u; UPD(0x0C08FEB0u, 1);  /* 0C08FEAE mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C08FEB0 add Rm,Rn */
	W32(r7 + 0x2Cu, r5); UPD(0x0C08FEB4u, 2);  /* 0C08FEB2 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C08FEB4 add #imm,Rn */
	r3 = R32(r7); UPD(0x0C08FEB8u, 2);  /* 0C08FEB6 mov.l @Rm,Rn */
	r13 = 0xFFE00000u; UPD(0x0C08FEBAu, 1);  /* 0C08FEB8 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C08FEBA add Rm,Rn */
	T = r3 == r5;  /* 0C08FEBC cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FE92u, 5); goto L_0C08FE92; } goto L_0C08FEC2; }  /* 0C08FEBE bf/s */
L_0C08FEC2: BLKS(0x0C08FEC2u);
	r0 = 0x9Fu; UPD(0x0C08FEC4u, 2);  /* 0C08FEC2 mov.w @(disp,pc),Rn */
	IF(0x0C08FEC4u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08FEC6u, 1);  /* 0C08FEC4 mov.b @(r0,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C08F3D8u, 3); goto L_0C08F3D8; }  /* 0C08FEC6 bra */
}

void f_0C08FED0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FED0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F582: BLKS(0x0C08F582u);
	IF(0x0C08F582u); W8(r0 + r2, r1); UPD(0x0C08F584u, 1);  /* 0C08F582 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F584 bra */
L_0C08FE92: BLKS(0x0C08FE92u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FE92 bra */
L_0C08FED0: BLKS(0x0C08FED0u);
	r7 = 0xB4u; UPD(0x0C08FED2u, 1);  /* 0C08FED0 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C08FED4u, 1);  /* 0C08FED2 mov.l @Rm,Rn */
	IF(0x0C08FED4u); MACL = r2 * r7;  /* 0C08FED4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08FED8u, 3);  /* 0C08FED6 mov.l @(disp,pc),Rn */
	IF(0x0C08FED8u); r3 = MACL;  /* 0C08FED8 sts macl,Rn */
	r3 += r6;  /* 0C08FEDA add Rm,Rn */
	r10 = R32(r3 + 0x2Cu); UPD(0x0C08FEDEu, 3);  /* 0C08FEDC mov.l @(disp,Rm),Rn */
	r8 = 0x8000u; UPD(0x0C08FEE0u, 1);  /* 0C08FEDE mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C08FEE0 add Rm,Rn */
	W32(r3 + 0x2Cu, r10); UPD(0x0C08FEE4u, 2);  /* 0C08FEE2 mov.l Rm,@(disp,Rn) */
	r3 += 0x50u;  /* 0C08FEE4 add #imm,Rn */
	r4 = R32(r3); UPD(0x0C08FEE8u, 2);  /* 0C08FEE6 mov.l @Rm,Rn */
	T = r4 == r10;  /* 0C08FEE8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FE92u, 4); goto L_0C08FE92; } goto L_0C08FEEE; }  /* 0C08FEEA bf/s */
L_0C08FEEE: BLKS(0x0C08FEEEu);
	IF(0x0C08FEEEu); MACL = r9 * r7;  /* 0C08FEEE mul.l Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C08FEF2u, 4);  /* 0C08FEF0 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C08FEF2 mov #imm,Rn */
	IF(0x0C08FEF4u); r9 = MACL;  /* 0C08FEF4 sts macl,Rn */
	r9 += r6;  /* 0C08FEF6 add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C08FEFAu, 4);  /* 0C08FEF8 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C08FEFA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08FEFEu, 2);  /* 0C08FEFC mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C08FEFE and #imm,r0 */
	W8(r9, r0); UPD(0x0C08FF02u, 2);  /* 0C08FF00 mov.b Rm,@Rn */
	{ r0 = r3; /* slot mov Rm,Rn */ UPD(0x0C08F582u, 3); goto L_0C08F582; }  /* 0C08FF02 bra */
}

void f_0C08FF10(sh3_t *c)
{
	LOCALS;
	goto L_0C08FF10;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08FAF4: BLKS(0x0C08FAF4u);
	IF(0x0C08FAF4u); { u32 t_ = r0; PR = 0x0C08FAF8u; IF(0x0C08FAF6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08FAF8u); }  /* 0C08FAF4 jsr @Rn */
L_0C08FAF8: BLKS(0x0C08FAF8u);
	IF(0x0C08FAF8u); T = (s32)r0 >= 0;  /* 0C08FAF8 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08FB7Cu, 4); goto L_0C08FB7C; } UPD(0x0C08FAFEu, 1); goto L_0C08FAFE; }  /* 0C08FAFA bf/s */
L_0C08FAFE: BLKS(0x0C08FAFEu);
	r11 = 0xB4u; UPD(0x0C08FB00u, 1);  /* 0C08FAFE mov.w @(disp,pc),Rn */
	IF(0x0C08FB00u); MACL = r10 * r11;  /* 0C08FB00 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08FB04u, 3);  /* 0C08FB02 mov.l @(disp,pc),Rn */
	IF(0x0C08FB04u); r3 = MACL;  /* 0C08FB04 sts macl,Rn */
	IF(0x0C08FB06u); MACL = r0 * r11;  /* 0C08FB06 mul.l Rm,Rn */
	r3 += r7;  /* 0C08FB08 add Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C08FB0Cu, 5);  /* 0C08FB0A mov.l @(disp,Rm),Rn */
	IF(0x0C08FB0Cu); r5 = MACL;  /* 0C08FB0C sts macl,Rn */
	r5 += r7;  /* 0C08FB0E add Rm,Rn */
	r0 = R32(r5 + 0x24u); UPD(0x0C08FB12u, 3);  /* 0C08FB10 mov.l @(disp,Rm),Rn */
	r13 = R32(r5 + 0x28u); UPD(0x0C08FB14u, 1);  /* 0C08FB12 mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x2Cu); UPD(0x0C08FB16u, 1);  /* 0C08FB14 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C08FB16 add Rm,Rn */
	r0 += r12;  /* 0C08FB18 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C08FB1Cu, 3);  /* 0C08FB1A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r13); UPD(0x0C08FB1Eu, 1);  /* 0C08FB1C mov.l Rm,@(disp,Rn) */
	r1 = R32(r5 + 0x38u); UPD(0x0C08FB20u, 1);  /* 0C08FB1E mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r1); UPD(0x0C08FB22u, 1);  /* 0C08FB20 mov.l Rm,@(disp,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FB22 bra */
L_0C08FB7C: BLKS(0x0C08FB7Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 3); goto L_0C08F2A2; }  /* 0C08FB7C bra */
L_0C08FF10: BLKS(0x0C08FF10u);
	r0 = 0xC0A0540u; UPD(0x0C08FF12u, 1);  /* 0C08FF10 mov.l @(disp,pc),Rn */
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08FAF4u, 3); goto L_0C08FAF4; }  /* 0C08FF12 bra */
}

void f_0C08FF50(sh3_t *c)
{
	LOCALS;
	goto L_0C08FF50;
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08FF50: BLKS(0x0C08FF50u);
	r8 = 0xC0A03F0u; UPD(0x0C08FF52u, 1);  /* 0C08FF50 mov.l @(disp,pc),Rn */
	IF(0x0C08FF52u); { u32 t_ = r8; PR = 0x0C08FF56u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08FF56u); }  /* 0C08FF52 jsr @Rn */
L_0C08FF56: BLKS(0x0C08FF56u);
	IF(0x0C08FF56u); T = (s32)r0 >= 0;  /* 0C08FF56 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FF60u, 4); goto L_0C08FF60; } goto L_0C08FF5C; }  /* 0C08FF58 bt/s */
L_0C08FF5C: BLKS(0x0C08FF5Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 4); goto L_0C08F2A2; }  /* 0C08FF5C bra */
L_0C08FF60: BLKS(0x0C08FF60u);
	r2 = 0xB4u; UPD(0x0C08FF62u, 1);  /* 0C08FF60 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C08FF64u, 1);  /* 0C08FF62 mov.l @Rm,Rn */
	IF(0x0C08FF64u); MACL = r7 * r2;  /* 0C08FF64 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08FF68u, 3);  /* 0C08FF66 mov.l @(disp,pc),Rn */
	IF(0x0C08FF68u); r6 = MACL;  /* 0C08FF68 sts macl,Rn */
	IF(0x0C08FF6Au); MACL = r0 * r2;  /* 0C08FF6A mul.l Rm,Rn */
	r6 += r12;  /* 0C08FF6C add Rm,Rn */
	r1 = R32(r6 + 0x2Cu); UPD(0x0C08FF70u, 5);  /* 0C08FF6E mov.l @(disp,Rm),Rn */
	IF(0x0C08FF70u); r13 = MACL;  /* 0C08FF70 sts macl,Rn */
	r13 += r12;  /* 0C08FF72 add Rm,Rn */
	r0 = R32(r13 + 0x24u); UPD(0x0C08FF76u, 3);  /* 0C08FF74 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08FF76 add Rm,Rn */
	W32(r6 + 0x24u, r0); UPD(0x0C08FF7Au, 2);  /* 0C08FF78 mov.l Rm,@(disp,Rn) */
	r0 = 0xA0u; UPD(0x0C08FF7Cu, 1);  /* 0C08FF7A mov.w @(disp,pc),Rn */
	r9 = R32(r13 + 0x28u); UPD(0x0C08FF7Eu, 1);  /* 0C08FF7C mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x30u); UPD(0x0C08FF80u, 1);  /* 0C08FF7E mov.l @(disp,Rm),Rn */
	IF(0x0C08FF80u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08FF82u, 1);  /* 0C08FF80 mov.b @(r0,Rm),Rn */
	r9 += r5;  /* 0C08FF82 add Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C08FF84 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C08FF86 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09004Au, 6); goto L_0C09004A; } UPD(0x0C08FF8Cu, 1); goto L_0C08FF8C; }  /* 0C08FF88 bt/s */
L_0C08FF8C: BLKS(0x0C08FF8Cu);
	r0 = 0xC08FF98u;  /* 0C08FF8C mova @(disp,pc),r0 */
	IF(0x0C08FF8Eu); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08FF90u, 2);  /* 0C08FF8E mov.b @(r0,Rm),Rn */
	r11 = r11 & 0xFF;  /* 0C08FF90 extu.b Rm,Rn */
	IF(0x0C08FF92u); { u32 tv_ = (r11 + 0x0C08FF96u); u32 t_ = PHYS(tv_); IF(0x0C08FF94u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08FF92 braf Rn */
L_0C09004A: BLKS(0x0C09004Au);
	r13 = 0xFFFFEF06u; UPD(0x0C09004Cu, 1);  /* 0C09004A mov.w @(disp,pc),Rn */
	IF(0x0C09004Cu); { u32 tv_ = (r13 + 0x0C090050u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09004C braf Rn */
}

void f_0C08FFA0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FFA0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F0F4: BLKS(0x0C08F0F4u);
	r2 += 0x1u;  /* 0C08F0F4 add #imm,Rn */
	IF(0x0C08F0F6u); W8(r0 + r3, r2); UPD(0x0C08F0F8u, 2);  /* 0C08F0F6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
L_0C08FFA0: BLKS(0x0C08FFA0u);
	r3 = 0xB4u; UPD(0x0C08FFA2u, 1);  /* 0C08FFA0 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C08FFA4u, 1);  /* 0C08FFA2 mov.l @Rm,Rn */
	IF(0x0C08FFA4u); MACL = r4 * r3;  /* 0C08FFA4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08FFA8u, 3);  /* 0C08FFA6 mov.l @(disp,pc),Rn */
	IF(0x0C08FFA8u); r3 = MACL;  /* 0C08FFA8 sts macl,Rn */
	r3 += r8;  /* 0C08FFAA add Rm,Rn */
	r3 += 0x50u;  /* 0C08FFAC add #imm,Rn */
	r10 = R32(r3); UPD(0x0C08FFB0u, 4);  /* 0C08FFAE mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C08FFB0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09004Au, 4); goto L_0C09004A; } goto L_0C08FFB6; }  /* 0C08FFB2 bt/s */
L_0C08FFB6: BLKS(0x0C08FFB6u);
	r0 = 0xA0u; UPD(0x0C08FFB8u, 2);  /* 0C08FFB6 mov.w @(disp,pc),Rn */
	{ IF(0x0C08FFBAu); r2 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C08F0F4u, 3); goto L_0C08F0F4; }  /* 0C08FFB8 bra */
L_0C09004A: BLKS(0x0C09004Au);
	r13 = 0xFFFFEF06u; UPD(0x0C09004Cu, 1);  /* 0C09004A mov.w @(disp,pc),Rn */
	IF(0x0C09004Cu); { u32 tv_ = (r13 + 0x0C090050u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09004C braf Rn */
}

void f_0C08FFC0(sh3_t *c)
{
	LOCALS;
	goto L_0C08FFC0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F0F4: BLKS(0x0C08F0F4u);
	r2 += 0x1u;  /* 0C08F0F4 add #imm,Rn */
	IF(0x0C08F0F6u); W8(r0 + r3, r2); UPD(0x0C08F0F8u, 2);  /* 0C08F0F6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
L_0C08FFB6: BLKS(0x0C08FFB6u);
	r0 = 0xA0u; UPD(0x0C08FFB8u, 1);  /* 0C08FFB6 mov.w @(disp,pc),Rn */
	{ IF(0x0C08FFBAu); r2 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C08F0F4u, 3); goto L_0C08F0F4; }  /* 0C08FFB8 bra */
L_0C08FFC0: BLKS(0x0C08FFC0u);
	r12 = 0xB4u; UPD(0x0C08FFC2u, 1);  /* 0C08FFC0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C08FFC4u, 1);  /* 0C08FFC2 mov.l @Rm,Rn */
	IF(0x0C08FFC4u); MACL = r1 * r12;  /* 0C08FFC4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08FFC8u, 3);  /* 0C08FFC6 mov.l @(disp,pc),Rn */
	IF(0x0C08FFC8u); r3 = MACL;  /* 0C08FFC8 sts macl,Rn */
	r3 += r0;  /* 0C08FFCA add Rm,Rn */
	r13 = r3;  /* 0C08FFCC mov Rm,Rn */
	r13 += 0x50u;  /* 0C08FFCE add #imm,Rn */
	r5 = R32(r13); UPD(0x0C08FFD2u, 5);  /* 0C08FFD0 mov.l @Rm,Rn */
	r2 = R32(r3); UPD(0x0C08FFD4u, 1);  /* 0C08FFD2 mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C08FFD4 add #imm,Rn */
	r9 = 0x1518u; UPD(0x0C08FFD8u, 2);  /* 0C08FFD6 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C08FFD8 mov Rm,Rn */
	T = (s32)r5 > (s32)r9;  /* 0C08FFDA cmp/gt Rm,Rn */
	IF(0x0C08FFDCu); r0 >>= 8;  /* 0C08FFDC shlr8 Rn */
	IF(0x0C08FFDEu); r6 = T;  /* 0C08FFDE movt Rn */
	r0 &= 0x1u;  /* 0C08FFE0 and #imm,r0 */
	r0 |= r6;  /* 0C08FFE2 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08FFE4 tst Rm,Rn */
	{ u32 c_ = T; W32(r13, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09004Au, 10); goto L_0C09004A; } UPD(0x0C08FFEAu, 1); goto L_0C08FFEA; }  /* 0C08FFE6 bt/s */
L_0C08FFEA: BLKS(0x0C08FFEAu);
	r7 = 0xFFFFFEFFu; UPD(0x0C08FFECu, 1);  /* 0C08FFEA mov.w @(disp,pc),Rn */
	r2 &= r7;  /* 0C08FFEC and Rm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08FFB6u, 4); goto L_0C08FFB6; }  /* 0C08FFEE bra */
L_0C09004A: BLKS(0x0C09004Au);
	r13 = 0xFFFFEF06u; UPD(0x0C09004Cu, 1);  /* 0C09004A mov.w @(disp,pc),Rn */
	IF(0x0C09004Cu); { u32 tv_ = (r13 + 0x0C090050u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09004C braf Rn */
}

void f_0C090000(sh3_t *c)
{
	LOCALS;
	goto L_0C090000;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F72E: BLKS(0x0C08F72Eu);
	r4 = 0x6Cu;  /* 0C08F72E mov #imm,Rn */
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 2);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
L_0C090000: BLKS(0x0C090000u);
	r3 = 0xB4u; UPD(0x0C090002u, 1);  /* 0C090000 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C090004u, 1);  /* 0C090002 mov.l @Rm,Rn */
	IF(0x0C090004u); MACL = r4 * r3;  /* 0C090004 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C090008u, 3);  /* 0C090006 mov.l @(disp,pc),Rn */
	IF(0x0C090008u); r3 = MACL;  /* 0C090008 sts macl,Rn */
	r3 += r8;  /* 0C09000A add Rm,Rn */
	r10 = R32(r3 + 0x38u); UPD(0x0C09000Eu, 3);  /* 0C09000C mov.l @(disp,Rm),Rn */
	r2 = 0x10101u; UPD(0x0C090010u, 1);  /* 0C09000E mov.l @(disp,pc),Rn */
	r11 = 0x808080u; UPD(0x0C090012u, 1);  /* 0C090010 mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C090012 add Rm,Rn */
	T = r10 == r11;  /* 0C090014 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09004Au, 5); goto L_0C09004A; } UPD(0x0C09001Au, 1); goto L_0C09001A; }  /* 0C090016 bf/s */
L_0C09001A: BLKS(0x0C09001Au);
	r0 = 0xA0u; UPD(0x0C09001Cu, 1);  /* 0C09001A mov.w @(disp,pc),Rn */
	IF(0x0C09001Cu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09001Eu, 1);  /* 0C09001C mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C09001E add #imm,Rn */
	{ IF(0x0C090022u); W8(r0 + r3, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08F72Eu, 4); goto L_0C08F72E; }  /* 0C090020 bra */
L_0C09004A: BLKS(0x0C09004Au);
	r13 = 0xFFFFEF06u; UPD(0x0C09004Cu, 1);  /* 0C09004A mov.w @(disp,pc),Rn */
	IF(0x0C09004Cu); { u32 tv_ = (r13 + 0x0C090050u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09004C braf Rn */
}

void f_0C090030(sh3_t *c)
{
	LOCALS;
	goto L_0C090030;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F0F4: BLKS(0x0C08F0F4u);
	r2 += 0x1u;  /* 0C08F0F4 add #imm,Rn */
	IF(0x0C08F0F6u); W8(r0 + r3, r2); UPD(0x0C08F0F8u, 2);  /* 0C08F0F6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
L_0C08FFB6: BLKS(0x0C08FFB6u);
	r0 = 0xA0u; UPD(0x0C08FFB8u, 1);  /* 0C08FFB6 mov.w @(disp,pc),Rn */
	{ IF(0x0C08FFBAu); r2 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C08F0F4u, 3); goto L_0C08F0F4; }  /* 0C08FFB8 bra */
L_0C090030: BLKS(0x0C090030u);
	r12 = 0xB4u; UPD(0x0C090032u, 1);  /* 0C090030 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C090034u, 1);  /* 0C090032 mov.l @Rm,Rn */
	IF(0x0C090034u); MACL = r1 * r12;  /* 0C090034 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C090038u, 3);  /* 0C090036 mov.l @(disp,pc),Rn */
	IF(0x0C090038u); r3 = MACL;  /* 0C090038 sts macl,Rn */
	r3 += r0;  /* 0C09003A add Rm,Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C09003Eu, 3);  /* 0C09003C mov.l @(disp,Rm),Rn */
	r13 = 0xFFFF8000u; UPD(0x0C090040u, 1);  /* 0C09003E mov.w @(disp,pc),Rn */
	r9 = 0x290000u; UPD(0x0C090042u, 1);  /* 0C090040 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C090042 add Rm,Rn */
	T = r5 == r9;  /* 0C090044 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090052u, 5); goto L_0C090052; } UPD(0x0C09004Au, 1); goto L_0C09004A; }  /* 0C090046 bt/s */
L_0C09004A: BLKS(0x0C09004Au);
	r13 = 0xFFFFEF06u; UPD(0x0C09004Cu, 1);  /* 0C09004A mov.w @(disp,pc),Rn */
	IF(0x0C09004Cu); { u32 tv_ = (r13 + 0x0C090050u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09004C braf Rn */
L_0C090052: BLKS(0x0C090052u);
	r7 = R32(r3); UPD(0x0C090054u, 1);  /* 0C090052 mov.l @Rm,Rn */
	r11 = 0x3000100u; UPD(0x0C090056u, 1);  /* 0C090054 mov.l @(disp,pc),Rn */
	r7 |= r11;  /* 0C090056 or Rm,Rn */
	{ W32(r3, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08FFB6u, 4); goto L_0C08FFB6; }  /* 0C090058 bra */
}

void f_0C090080(sh3_t *c)
{
	LOCALS;
	goto L_0C090080;
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C090080: BLKS(0x0C090080u);
	r10 = 0xC0A03F0u; UPD(0x0C090082u, 1);  /* 0C090080 mov.l @(disp,pc),Rn */
	IF(0x0C090082u); { u32 t_ = r10; PR = 0x0C090086u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C090086u); }  /* 0C090082 jsr @Rn */
L_0C090086: BLKS(0x0C090086u);
	IF(0x0C090086u); T = (s32)r0 >= 0;  /* 0C090086 cmp/pz Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090090u, 4); goto L_0C090090; } UPD(0x0C09008Cu, 1); goto L_0C09008C; }  /* 0C090088 bt/s */
L_0C09008C: BLKS(0x0C09008Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 3); goto L_0C08F2A2; }  /* 0C09008C bra */
L_0C090090: BLKS(0x0C090090u);
	r8 = 0xB4u; UPD(0x0C090092u, 1);  /* 0C090090 mov.w @(disp,pc),Rn */
	IF(0x0C090092u); MACL = r6 * r8;  /* 0C090092 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C090096u, 3);  /* 0C090094 mov.l @(disp,pc),Rn */
	IF(0x0C090096u); r6 = MACL;  /* 0C090096 sts macl,Rn */
	IF(0x0C090098u); MACL = r0 * r8;  /* 0C090098 mul.l Rm,Rn */
	r6 += r10;  /* 0C09009A add Rm,Rn */
	r9 = R32(r6); UPD(0x0C09009Eu, 5);  /* 0C09009C mov.l @Rm,Rn */
	IF(0x0C09009Eu); r4 = MACL;  /* 0C09009E sts macl,Rn */
	r0 = 0xECFFFEFFu; UPD(0x0C0900A2u, 2);  /* 0C0900A0 mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C0900A2 add Rm,Rn */
	r9 &= r0;  /* 0C0900A4 and Rm,Rn */
	W32(r6, r9); UPD(0x0C0900A8u, 3);  /* 0C0900A6 mov.l Rm,@Rn */
	r13 = 0x13000100u; UPD(0x0C0900AAu, 1);  /* 0C0900A8 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0900ACu, 1);  /* 0C0900AA mov.l @Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C0900AEu, 1);  /* 0C0900AC mov.l @(disp,Rm),Rn */
	r5 &= r13;  /* 0C0900AE and Rm,Rn */
	r12 = R32(r4 + 0x28u); UPD(0x0C0900B2u, 2);  /* 0C0900B0 mov.l @(disp,Rm),Rn */
	r9 |= r5;  /* 0C0900B2 or Rm,Rn */
	r11 = R32(r6 + 0x2Cu); UPD(0x0C0900B6u, 2);  /* 0C0900B4 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C0900B8u, 1);  /* 0C0900B6 mov.l @(disp,Rm),Rn */
	r7 += r11;  /* 0C0900B8 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0900BCu, 2);  /* 0C0900BA mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C0900BC add Rm,Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C0900C0u, 2);  /* 0C0900BE mov.l Rm,@(disp,Rn) */
	r4 += 0x3Cu;  /* 0C0900C0 add #imm,Rn */
	W32(r6 + 0x28u, r12); UPD(0x0C0900C4u, 2);  /* 0C0900C2 mov.l Rm,@(disp,Rn) */
	W32(r6, r9); UPD(0x0C0900C6u, 1);  /* 0C0900C4 mov.l Rm,@Rn */
	W32(r6 + 0x38u, r3); UPD(0x0C0900C8u, 1);  /* 0C0900C6 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0900CAu, 1);  /* 0C0900C8 mov.w @Rm,Rn */
	r6 += 0x3Cu;  /* 0C0900CA add #imm,Rn */
	W16(r6, r2); UPD(0x0C0900CEu, 2);  /* 0C0900CC mov.w Rm,@Rn */
	r2 = 0x99u; UPD(0x0C0900D0u, 1);  /* 0C0900CE mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFFC4u;  /* 0C0900D0 add #imm,Rn */
	r2 += r6;  /* 0C0900D2 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C0900D6u, 3);  /* 0C0900D4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0900D6 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0900D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0900DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090170u, 6); goto L_0C090170; } UPD(0x0C0900E0u, 1); goto L_0C0900E0; }  /* 0C0900DC bf/s */
L_0C0900E0: BLKS(0x0C0900E0u);
	r4 = 0x0u;  /* 0C0900E0 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0900E4u, 2);  /* 0C0900E2 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C0900E4 mov #imm,Rn */
	W32(r14 + 0x38u, r13); UPD(0x0C0900E8u, 2);  /* 0C0900E6 mov.l Rm,@(disp,Rn) */
	r10 = r6;  /* 0C0900E8 mov Rm,Rn */
	UPD(0x0C0900EAu, 1);
L_0C0900EA: BLKS(0x0C0900EAu);
	r12 = R32(r14 + 0x38u); UPD(0x0C0900ECu, 1);  /* 0C0900EA mov.l @(disp,Rm),Rn */
	r8 = r13;  /* 0C0900EC mov Rm,Rn */
	r3 = 0xC1C2B10u; UPD(0x0C0900F0u, 2);  /* 0C0900EE mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0900F0 add Rm,Rn */
	r11 = R32(r3); UPD(0x0C0900F4u, 2);  /* 0C0900F2 mov.l @Rm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C0900F6u, 1);  /* 0C0900F4 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C0900F6 add Rm,Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C0900FAu, 2);  /* 0C0900F8 mov.l @(disp,Rm),Rn */
	r2 = 0xC050D70u; UPD(0x0C0900FCu, 1);  /* 0C0900FA mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x28u); UPD(0x0C0900FEu, 1);  /* 0C0900FC mov.l @(disp,Rm),Rn */
	r11 += r4;  /* 0C0900FE add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C090102u, 2);  /* 0C090100 mov.l @(disp,pc),Rn */
	IF(0x0C090102u); { u32 t_ = r2; PR = 0x0C090106u; IF(0x0C090104u); r8 <<= 2; /* slot shll2 Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C090106u); }  /* 0C090102 jsr @Rn */
L_0C090106: BLKS(0x0C090106u);
	r7 = 0xC050D70u; UPD(0x0C090108u, 1);  /* 0C090106 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C090108 mov Rm,Rn */
	r6 = 0x10000u; UPD(0x0C09010Cu, 2);  /* 0C09010A mov.l @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C09010C mov #imm,Rn */
	r0 = 0xC1C2B42u; UPD(0x0C090110u, 2);  /* 0C09010E mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C090110 add Rm,Rn */
	IF(0x0C090112u); { u32 t_ = r7; PR = 0x0C090116u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C090116u); }  /* 0C090112 jsr @Rn */
L_0C090116: BLKS(0x0C090116u);
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C090118u, 1);  /* 0C090116 mov.w @Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C09011Au, 1);  /* 0C090118 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C09011A add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C09011C add #imm,Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C09011E exts.w Rm,Rn */
	r4 = r1;  /* 0C090120 mov Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090124u, 5);  /* 0C090122 mov.l Rm,@(disp,Rn) */
	IF(0x0C090124u); { u32 t_ = r8; PR = 0x0C090128u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C090128u); }  /* 0C090124 jsr @Rn */
L_0C090128: BLKS(0x0C090128u);
	r5 = r9;  /* 0C090128 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C09012Cu, 2);  /* 0C09012A mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C09012C mov Rm,Rn */
	IF(0x0C09012Eu); { u32 t_ = r9; PR = 0x0C090132u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C090132u); }  /* 0C09012E jsr @Rn */
L_0C090132: BLKS(0x0C090132u);
	r7 = r0;  /* 0C090132 mov Rm,Rn */
	r9 = 0xB0u; UPD(0x0C090136u, 2);  /* 0C090134 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C090136 mov Rm,Rn */
	IF(0x0C090138u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09013Au, 2);  /* 0C090138 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09013A add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C09013C extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C090140u, 3);  /* 0C09013E mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C090142u, 1);  /* 0C090140 mov.w @(disp,pc),Rn */
	IF(0x0C090142u); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C090144u, 1);  /* 0C090142 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C090144 extu.b Rm,Rn */
	r5 = 0x808080u; UPD(0x0C090148u, 2);  /* 0C090146 mov.l @(disp,pc),Rn */
	r6 = r12;  /* 0C090148 mov Rm,Rn */
	r12 = 0xC0ACA40u; UPD(0x0C09014Cu, 2);  /* 0C09014A mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r7); UPD(0x0C09014Eu, 1);  /* 0C09014C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r5); UPD(0x0C090150u, 1);  /* 0C09014E mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C090150 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C090154u, 2);  /* 0C090152 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C090154 mov #imm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C090158u, 2);  /* 0C090156 mov.l Rm,@(disp,Rn) */
	IF(0x0C090158u); { u32 t_ = r12; PR = 0x0C09015Cu; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C09015Cu); }  /* 0C090158 jsr @Rn */
L_0C09015C: BLKS(0x0C09015Cu);
	r9 = R32(r14 + 0x38u); UPD(0x0C09015Eu, 1);  /* 0C09015C mov.l @(disp,Rm),Rn */
	r3 = r13;  /* 0C09015E mov Rm,Rn */
	r3 += 0x1u;  /* 0C090160 add #imm,Rn */
	r9 += 0x8u;  /* 0C090162 add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C090164 exts.w Rm,Rn */
	r2 = 0x5u;  /* 0C090166 mov #imm,Rn */
	W32(r14 + 0x38u, r9); UPD(0x0C09016Au, 6);  /* 0C090168 mov.l Rm,@(disp,Rn) */
	T = (s32)r13 > (s32)r2;  /* 0C09016A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0900EAu, 4); goto L_0C0900EA; } UPD(0x0C090170u, 1); goto L_0C090170; }  /* 0C09016C bf/s */
L_0C090170: BLKS(0x0C090170u);
	r13 = 0xFFFFEDE0u; UPD(0x0C090172u, 1);  /* 0C090170 mov.w @(disp,pc),Rn */
	IF(0x0C090172u); { u32 tv_ = (r13 + 0x0C090176u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090172 braf Rn */
}

void f_0C090180(sh3_t *c)
{
	LOCALS;
	goto L_0C090180;
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC08E3A0u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	UPD(0x0C08F2A6u, 1);
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F41A: BLKS(0x0C08F41Au);
	r0 = 0x88u; UPD(0x0C08F41Cu, 1);  /* 0C08F41A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C08F41Eu, 1);  /* 0C08F41C mov.l @(disp,Rm),Rn */
	IF(0x0C08F41Eu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08F420u, 1);  /* 0C08F41E mov.w @(r0,Rm),Rn */
	r1 += r11;  /* 0C08F420 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 2);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C090180: BLKS(0x0C090180u);
	r10 = 0xB4u; UPD(0x0C090182u, 1);  /* 0C090180 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C090184u, 1);  /* 0C090182 mov.l @Rm,Rn */
	IF(0x0C090184u); MACL = r3 * r10;  /* 0C090184 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090188u, 3);  /* 0C090186 mov.l @(disp,pc),Rn */
	IF(0x0C090188u); r8 = MACL;  /* 0C090188 sts macl,Rn */
	r8 += r11;  /* 0C09018A add Rm,Rn */
	r8 += 0x3Cu;  /* 0C09018C add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C090190u, 4);  /* 0C09018E mov.w @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C090190 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09019Au, 4); goto L_0C09019A; } goto L_0C090196; }  /* 0C090192 bf/s */
L_0C090196: BLKS(0x0C090196u);
	{ r4 = r3; /* slot mov Rm,Rn */ UPD(0x0C0903A0u, 4); goto L_0C0903A0; }  /* 0C090196 bra */
L_0C09019A: BLKS(0x0C09019Au);
	r13 = 0xC0A0540u; UPD(0x0C09019Cu, 1);  /* 0C09019A mov.l @(disp,pc),Rn */
	IF(0x0C09019Cu); { u32 t_ = r13; PR = 0x0C0901A0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0901A0u); }  /* 0C09019C jsr @Rn */
L_0C0901A0: BLKS(0x0C0901A0u);
	IF(0x0C0901A0u); T = (s32)r0 >= 0;  /* 0C0901A0 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0901A4u); MACL = r0 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0901AAu, 5); goto L_0C0901AA; } goto L_0C0901A6; }  /* 0C0901A2 bt/s */
L_0C0901A6: BLKS(0x0C0901A6u);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 5); goto L_0C08F2A2; }  /* 0C0901A6 bra */
L_0C0901AA: BLKS(0x0C0901AAu);
	r7 = R32(r8); UPD(0x0C0901ACu, 1);  /* 0C0901AA mov.l @Rm,Rn */
	IF(0x0C0901ACu); r0 = MACL;  /* 0C0901AC sts macl,Rn */
	r0 += r11;  /* 0C0901AE add Rm,Rn */
	r11 = 0xECFFFEFFu; UPD(0x0C0901B2u, 3);  /* 0C0901B0 mov.l @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C0901B2 mov #imm,Rn */
	r7 &= r11;  /* 0C0901B4 and Rm,Rn */
	W32(r8, r7); UPD(0x0C0901B8u, 3);  /* 0C0901B6 mov.l Rm,@Rn */
	r1 = 0x13000100u; UPD(0x0C0901BAu, 1);  /* 0C0901B8 mov.l @(disp,pc),Rn */
	r3 = R32(r0); UPD(0x0C0901BCu, 1);  /* 0C0901BA mov.l @Rm,Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0901BEu, 1);  /* 0C0901BC mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C0901BE and Rm,Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C0901C2u, 2);  /* 0C0901C0 mov.l @(disp,Rm),Rn */
	r7 |= r3;  /* 0C0901C2 or Rm,Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C0901C6u, 2);  /* 0C0901C4 mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C0901C6 add Rm,Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C0901CAu, 2);  /* 0C0901C8 mov.l @(disp,Rm),Rn */
	r4 = R32(r0 + 0x38u); UPD(0x0C0901CCu, 1);  /* 0C0901CA mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C0901CC add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0901D0u, 2);  /* 0C0901CE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C0901D2u, 1);  /* 0C0901D0 mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C0901D4u, 1);  /* 0C0901D2 mov.l Rm,@Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C0901D6u, 1);  /* 0C0901D4 mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C0901D6 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C0901DAu, 2);  /* 0C0901D8 mov.w @Rm,Rn */
	r8 += 0xFFFFFF82u;  /* 0C0901DA add #imm,Rn */
	r3 = R32(r8 + 0xCu); UPD(0x0C0901DEu, 2);  /* 0C0901DC mov.l @(disp,Rm),Rn */
	T = r3 > r10;  /* 0C0901DE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0902B0u, 4); goto L_0C0902B0; }  /* 0C0901E0 bt */
L_0C0901E2: BLKS(0x0C0901E2u);
	r0 = 0xC09022Cu;  /* 0C0901E2 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0901E4 add Rm,Rn */
	IF(0x0C0901E6u); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0901E8u, 3);  /* 0C0901E6 mov.w @(r0,Rm),Rn */
	IF(0x0C0901E8u); { u32 tv_ = (r8 + 0x0C0901ECu); u32 t_ = PHYS(tv_); IF(0x0C0901EAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0901E8 braf Rn */
L_0C0902B0: BLKS(0x0C0902B0u);
	r10 = R32(r14); UPD(0x0C0902B2u, 1);  /* 0C0902B0 mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0902B4u, 1);  /* 0C0902B2 mov.w @(disp,pc),Rn */
	IF(0x0C0902B4u); MACL = r10 * r13;  /* 0C0902B4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0902B8u, 3);  /* 0C0902B6 mov.l @(disp,pc),Rn */
	IF(0x0C0902B8u); r3 = MACL;  /* 0C0902B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0902BCu, 2);  /* 0C0902BA mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0902BC add Rm,Rn */
	r2 += r3;  /* 0C0902BE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0902C2u, 3);  /* 0C0902C0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0902C2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0902C4 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0902C8u, 3);  /* 0C0902C6 mov.b Rm,@Rn */
	T = r0 == 0x2u;  /* 0C0902C8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C090322u, 4); goto L_0C090322; }  /* 0C0902CA bf */
L_0C0902CC: BLKS(0x0C0902CCu);
	r4 = 0x0u;  /* 0C0902CC mov #imm,Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C08F41Au, 4); goto L_0C08F41A; }  /* 0C0902CE bra */
L_0C090322: BLKS(0x0C090322u);
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
L_0C0903A0: BLKS(0x0C0903A0u);
	r1 = 0xC0A1700u; UPD(0x0C0903A2u, 1);  /* 0C0903A0 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFEEFEu; UPD(0x0C0903A4u, 1);  /* 0C0903A2 mov.w @(disp,pc),Rn */
	IF(0x0C0903A4u); { u32 tv_ = (r13 + 0x0C0903A8u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0903A4 braf Rn */
}

void f_0C090250(sh3_t *c)
{
	LOCALS;
	goto L_0C090250;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F730: BLKS(0x0C08F730u);
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 1);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
L_0C090250: BLKS(0x0C090250u);
	r0 = 0xB4u; UPD(0x0C090252u, 1);  /* 0C090250 mov.w @(disp,pc),Rn */
	IF(0x0C090252u); MACL = r9 * r0;  /* 0C090252 mul.l Rm,Rn */
	r3 = R32(r14); UPD(0x0C090256u, 3);  /* 0C090254 mov.l @Rm,Rn */
	IF(0x0C090256u); r7 = MACL;  /* 0C090256 sts macl,Rn */
	IF(0x0C090258u); MACL = r3 * r0;  /* 0C090258 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09025Cu, 4);  /* 0C09025A mov.l @(disp,pc),Rn */
	r11 = 0xA4u; UPD(0x0C09025Eu, 1);  /* 0C09025C mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C09025E add Rm,Rn */
	IF(0x0C090260u); r8 = MACL;  /* 0C090260 sts macl,Rn */
	r7 += r11;  /* 0C090262 add Rm,Rn */
	r8 += r4;  /* 0C090264 add Rm,Rn */
	r2 = 0xA1u; UPD(0x0C090268u, 5);  /* 0C090266 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C090268 add #imm,Rn */
	r0 = r8;  /* 0C09026A mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C09026Eu, 3);  /* 0C09026C mov.b @Rm,Rn */
	IF(0x0C09026Eu); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C090270u, 1);  /* 0C09026E mov.b @(r0,Rm),Rn */
	r10 &= r13;  /* 0C090270 and Rm,Rn */
	T = r10 == r13;  /* 0C090272 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C090322u, 5); goto L_0C090322; } goto L_0C090278; }  /* 0C090274 bf/s */
L_0C090278: BLKS(0x0C090278u);
	r7 += 0x2u;  /* 0C090278 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09027Cu, 3);  /* 0C09027A mov.b @Rm,Rn */
	r6 = 0xAu;  /* 0C09027C mov #imm,Rn */
	r12 = 0xC0A9E40u; UPD(0x0C090280u, 2);  /* 0C09027E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C090280 add Rm,Rn */
	r7 = 0xC1C2CC0u; UPD(0x0C090284u, 2);  /* 0C090282 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C090286u, 1);  /* 0C090284 mov.l @Rm,Rn */
	IF(0x0C090286u); { u32 t_ = r12; PR = 0x0C09028Au; IF(0x0C090288u); r5 = (u32)(s32)(s16)R16(r0 + r7); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09028Au); }  /* 0C090286 jsr @Rn */
L_0C09028A: BLKS(0x0C09028Au);
	T = (r0 & r0) == 0;  /* 0C09028A tst Rm,Rn */
	if (T) { UPD(0x0C090322u, 4); goto L_0C090322; }  /* 0C09028C bt */
L_0C09028E: BLKS(0x0C09028Eu);
	r6 = R32(r8 + 0xCu); UPD(0x0C090290u, 1);  /* 0C09028E mov.l @(disp,Rm),Rn */
	r9 = 0x1u;  /* 0C090290 mov #imm,Rn */
	r5 = 0xC0A0380u; UPD(0x0C090294u, 2);  /* 0C090292 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C090294 add #imm,Rn */
	r0 = 0x88u; UPD(0x0C090298u, 2);  /* 0C090296 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09029Au, 1);  /* 0C090298 mov.l @Rm,Rn */
	IF(0x0C09029Au); W16(r0 + r8, r9); UPD(0x0C09029Cu, 1);  /* 0C09029A mov.w Rm,@(r0,Rn) */
	IF(0x0C09029Cu); { u32 t_ = r5; PR = 0x0C0902A0u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0902A0u); }  /* 0C09029C jsr @Rn */
L_0C0902A0: BLKS(0x0C0902A0u);
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C08F730u, 3); goto L_0C08F730; }  /* 0C0902A0 bra */
L_0C090322: BLKS(0x0C090322u);
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
}

void f_0C0902B0(sh3_t *c)
{
	LOCALS;
	goto L_0C0902B0;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F41A: BLKS(0x0C08F41Au);
	r0 = 0x88u; UPD(0x0C08F41Cu, 1);  /* 0C08F41A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C08F41Eu, 1);  /* 0C08F41C mov.l @(disp,Rm),Rn */
	IF(0x0C08F41Eu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08F420u, 1);  /* 0C08F41E mov.w @(r0,Rm),Rn */
	r1 += r11;  /* 0C08F420 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 2);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C0902B0: BLKS(0x0C0902B0u);
	r10 = R32(r14); UPD(0x0C0902B2u, 1);  /* 0C0902B0 mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0902B4u, 1);  /* 0C0902B2 mov.w @(disp,pc),Rn */
	IF(0x0C0902B4u); MACL = r10 * r13;  /* 0C0902B4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0902B8u, 3);  /* 0C0902B6 mov.l @(disp,pc),Rn */
	IF(0x0C0902B8u); r3 = MACL;  /* 0C0902B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0902BCu, 2);  /* 0C0902BA mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0902BC add Rm,Rn */
	r2 += r3;  /* 0C0902BE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0902C2u, 3);  /* 0C0902C0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0902C2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0902C4 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0902C8u, 3);  /* 0C0902C6 mov.b Rm,@Rn */
	T = r0 == 0x2u;  /* 0C0902C8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C090322u, 4); goto L_0C090322; }  /* 0C0902CA bf */
L_0C0902CC: BLKS(0x0C0902CCu);
	r4 = 0x0u;  /* 0C0902CC mov #imm,Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C08F41Au, 4); goto L_0C08F41A; }  /* 0C0902CE bra */
L_0C090322: BLKS(0x0C090322u);
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
}

void f_0C0902CA(sh3_t *c)
{
	LOCALS;
	goto L_0C0902CA;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F41A: BLKS(0x0C08F41Au);
	r0 = 0x88u; UPD(0x0C08F41Cu, 1);  /* 0C08F41A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C08F41Eu, 1);  /* 0C08F41C mov.l @(disp,Rm),Rn */
	IF(0x0C08F41Eu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08F420u, 1);  /* 0C08F41E mov.w @(r0,Rm),Rn */
	r1 += r11;  /* 0C08F420 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 2);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C0902CA: BLKS(0x0C0902CAu);
	if (!T) { UPD(0x0C090322u, 3); goto L_0C090322; }  /* 0C0902CA bf */
L_0C0902CC: BLKS(0x0C0902CCu);
	r4 = 0x0u;  /* 0C0902CC mov #imm,Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C08F41Au, 4); goto L_0C08F41A; }  /* 0C0902CE bra */
L_0C090322: BLKS(0x0C090322u);
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
}

void f_0C0902E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0902E0;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 3);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F52C: BLKS(0x0C08F52Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08F52C bra */
L_0C0902E0: BLKS(0x0C0902E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0902E2u, 1);  /* 0C0902E0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0902E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0902E6u, 2);  /* 0C0902E4 mov.l @Rm,Rn */
	IF(0x0C0902E6u); { u32 t_ = r11; PR = 0x0C0902EAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0902EAu); }  /* 0C0902E6 jsr @Rn */
L_0C0902EA: BLKS(0x0C0902EAu);
	T = (r0 & r0) == 0;  /* 0C0902EA tst Rm,Rn */
	if (T) { UPD(0x0C090322u, 4); goto L_0C090322; }  /* 0C0902EC bt */
L_0C0902EE: BLKS(0x0C0902EEu);
	r0 = R32(r14); UPD(0x0C0902F0u, 1);  /* 0C0902EE mov.l @Rm,Rn */
	r2 = 0x1u;  /* 0C0902F0 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C0902F4u, 2);  /* 0C0902F2 mov.w @(disp,pc),Rn */
	IF(0x0C0902F4u); MACL = r0 * r12;  /* 0C0902F4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0902F8u, 3);  /* 0C0902F6 mov.l @(disp,pc),Rn */
	IF(0x0C0902F8u); r8 = MACL;  /* 0C0902F8 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C0902FCu, 2);  /* 0C0902FA mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C0902FC add Rm,Rn */
	r10 += r8;  /* 0C0902FE add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C090302u, 3);  /* 0C090300 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C090302 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C090304 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C090330u, 5); goto L_0C090330; }  /* 0C090306 bf */
L_0C090308: BLKS(0x0C090308u);
	T = r0 == 0x2u;  /* 0C090308 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C090322u, 4); goto L_0C090322; }  /* 0C09030A bf */
L_0C09030C: BLKS(0x0C09030Cu);
	r12 = R32(r8 + 0xCu); UPD(0x0C09030Eu, 1);  /* 0C09030C mov.l @(disp,Rm),Rn */
	r9 = 0xFFFFFFFFu;  /* 0C09030E mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C090312u, 2);  /* 0C090310 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFFFFu;  /* 0C090312 add #imm,Rn */
	IF(0x0C090314u); W16(r0 + r8, r9); UPD(0x0C090316u, 2);  /* 0C090314 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r12); UPD(0x0C090318u, 1);  /* 0C090316 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0A0380u; UPD(0x0C09031Au, 1);  /* 0C090318 mov.l @(disp,pc),Rn */
	IF(0x0C09031Au); { u32 t_ = r11; PR = 0x0C09031Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09031Eu); }  /* 0C09031A jsr @Rn */
L_0C09031E: BLKS(0x0C09031Eu);
	r1 = 0x0u;  /* 0C09031E mov #imm,Rn */
	W8(r10, r1); UPD(0x0C090322u, 2);  /* 0C090320 mov.b Rm,@Rn */
L_0C090322: BLKS(0x0C090322u);
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
L_0C090330: BLKS(0x0C090330u);
	r13 = 0xC058090u; UPD(0x0C090332u, 1);  /* 0C090330 mov.l @(disp,pc),Rn */
	IF(0x0C090332u); { u32 t_ = r13; PR = 0x0C090336u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090336u); }  /* 0C090332 jsr @Rn */
L_0C090336: BLKS(0x0C090336u);
	r6 = 0x280u; UPD(0x0C090338u, 1);  /* 0C090336 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C090338 exts.w Rm,Rn */
	IF(0x0C09033Au); MACL = r4 * r6;  /* 0C09033A mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C09033Eu, 4);  /* 0C09033C mov.l @(disp,pc),Rn */
	r13 = 0xC057390u; UPD(0x0C090340u, 1);  /* 0C09033E mov.l @(disp,pc),Rn */
	IF(0x0C090340u); r0 = MACL;  /* 0C090340 sts macl,Rn */
	r0 += r2;  /* 0C090342 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090346u, 3);  /* 0C090344 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090348u, 1);  /* 0C090346 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C09034Au, 1);  /* 0C090348 mov.l @(disp,Rm),Rn */
	IF(0x0C09034Au); { u32 t_ = r13; PR = 0x0C09034Eu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09034Eu); }  /* 0C09034A jsr @Rn */
L_0C09034E: BLKS(0x0C09034Eu);
	r1 = (u32)(s32)(s16)r0;  /* 0C09034E exts.w Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090352u, 2);  /* 0C090350 mov.l Rm,@(disp,Rn) */
	IF(0x0C090352u); MACL = r9 * r12;  /* 0C090352 mul.l Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C090356u, 3);  /* 0C090354 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090356 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C090358 extu.b Rm,Rn */
	r0 = r4;  /* 0C09035A mov Rm,Rn */
	r7 = 0xC1C2CC8u; UPD(0x0C09035Eu, 4);  /* 0C09035C mov.l @(disp,pc),Rn */
	IF(0x0C09035Eu); r0 <<= 2;  /* 0C09035E shll2 Rn */
	IF(0x0C090360u); r3 = R32(r0 + r7); UPD(0x0C090362u, 2);  /* 0C090360 mov.l @(r0,Rm),Rn */
	IF(0x0C090362u); r0 = MACL;  /* 0C090362 sts macl,Rn */
	r0 += r11;  /* 0C090364 add Rm,Rn */
	r11 = 0xA6u; UPD(0x0C090368u, 3);  /* 0C090366 mov.w @(disp,pc),Rn */
	IF(0x0C090368u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09036Au, 1);  /* 0C090368 mov.b @(r0,Rm),Rn */
	r6 += r6;  /* 0C09036A add Rm,Rn */
	r4 += r6;  /* 0C09036C add Rm,Rn */
	IF(0x0C09036Eu); r4 <<= 2;  /* 0C09036E shll2 Rn */
	r9 = 0xC1C2CD0u; UPD(0x0C090372u, 4);  /* 0C090370 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C090372 mov Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C090376u, 2);  /* 0C090374 mov.l @(disp,Rm),Rn */
	r6 += r6;  /* 0C090376 add Rm,Rn */
	IF(0x0C090378u); r13 = R32(r0 + r9); UPD(0x0C09037Au, 2);  /* 0C090378 mov.l @(r0,Rm),Rn */
	r5 += r3;  /* 0C09037A add Rm,Rn */
	W32(r15, r13); UPD(0x0C09037Eu, 2);  /* 0C09037C mov.l Rm,@Rn */
	r0 = r6;  /* 0C09037E mov Rm,Rn */
	r7 = 0xC1C2CB4u; UPD(0x0C090382u, 2);  /* 0C090380 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C090382 mov #imm,Rn */
	IF(0x0C090384u); r12 = R32(r0 + r7); UPD(0x0C090386u, 2);  /* 0C090384 mov.l @(r0,Rm),Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C090388u, 1);  /* 0C090386 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8850u; UPD(0x0C09038Au, 1);  /* 0C090388 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C09038Cu, 1);  /* 0C09038A mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09038Eu, 1);  /* 0C09038C mov.l @(disp,Rm),Rn */
	IF(0x0C09038Eu); { u32 t_ = r0; PR = 0x0C090392u; IF(0x0C090390u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A8850, 0x0C0A8850u, 0x0C090392u); }  /* 0C09038E jsr @Rn */
L_0C090392: BLKS(0x0C090392u);
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C090394u, 1);  /* 0C090392 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C090394 add #imm,Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08F52Cu, 4); goto L_0C08F52C; }  /* 0C090396 bra */
}

void f_0C090318(sh3_t *c)
{
	LOCALS;
L_0C090318: BLKS(0x0C090318u);
	r11 = 0xC0A0380u; UPD(0x0C09031Au, 1);  /* 0C090318 mov.l @(disp,pc),Rn */
	IF(0x0C09031Au); { u32 t_ = r11; PR = 0x0C09031Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09031Eu); }  /* 0C09031A jsr @Rn */
L_0C09031E: BLKS(0x0C09031Eu);
	r1 = 0x0u;  /* 0C09031E mov #imm,Rn */
	W8(r10, r1); UPD(0x0C090322u, 2);  /* 0C090320 mov.b Rm,@Rn */
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
}

void f_0C09038E(sh3_t *c)
{
	LOCALS;
	goto L_0C09038E;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 3);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F52C: BLKS(0x0C08F52Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08F52C bra */
L_0C09038E: BLKS(0x0C09038Eu);
	IF(0x0C09038Eu); { u32 t_ = r0; PR = 0x0C090392u; IF(0x0C090390u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C090392u); }  /* 0C09038E jsr @Rn */
L_0C090392: BLKS(0x0C090392u);
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C090394u, 1);  /* 0C090392 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C090394 add #imm,Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08F52Cu, 4); goto L_0C08F52C; }  /* 0C090396 bra */
}

void f_0C0903A0(sh3_t *c)
{
	LOCALS;
L_0C0903A0: BLKS(0x0C0903A0u);
	r1 = 0xC0A1700u; UPD(0x0C0903A2u, 1);  /* 0C0903A0 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFEEFEu; UPD(0x0C0903A4u, 1);  /* 0C0903A2 mov.w @(disp,pc),Rn */
	IF(0x0C0903A4u); { u32 tv_ = (r13 + 0x0C0903A8u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0903A4 braf Rn */
}

void f_0C0903F0(sh3_t *c)
{
	LOCALS;
	goto L_0C0903F0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08FB20: BLKS(0x0C08FB20u);
	W32(r3 + 0x38u, r1); UPD(0x0C08FB22u, 1);  /* 0C08FB20 mov.l Rm,@(disp,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08FB22 bra */
L_0C0903F0: BLKS(0x0C0903F0u);
	r13 = 0xC0A03F0u; UPD(0x0C0903F2u, 1);  /* 0C0903F0 mov.l @(disp,pc),Rn */
	IF(0x0C0903F2u); { u32 t_ = r13; PR = 0x0C0903F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0903F6u); }  /* 0C0903F2 jsr @Rn */
L_0C0903F6: BLKS(0x0C0903F6u);
	IF(0x0C0903F6u); T = (s32)r0 >= 0;  /* 0C0903F6 cmp/pz Rn */
	{ u32 c_ = !T; r12 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C09044Cu, 4); goto L_0C09044C; } UPD(0x0C0903FCu, 1); goto L_0C0903FC; }  /* 0C0903F8 bf/s */
L_0C0903FC: BLKS(0x0C0903FCu);
	r2 = 0xB4u; UPD(0x0C0903FEu, 1);  /* 0C0903FC mov.w @(disp,pc),Rn */
	IF(0x0C0903FEu); MACL = r12 * r2;  /* 0C0903FE mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090402u, 3);  /* 0C090400 mov.l @(disp,pc),Rn */
	IF(0x0C090402u); r3 = MACL;  /* 0C090402 sts macl,Rn */
	r3 += r11;  /* 0C090404 add Rm,Rn */
	r9 = R32(r3); UPD(0x0C090408u, 3);  /* 0C090406 mov.l @Rm,Rn */
	IF(0x0C090408u); MACL = r0 * r2;  /* 0C090408 mul.l Rm,Rn */
	r5 = 0xECFFFEFFu; UPD(0x0C09040Cu, 3);  /* 0C09040A mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C09040C and Rm,Rn */
	W32(r3, r9); UPD(0x0C090410u, 2);  /* 0C09040E mov.l Rm,@Rn */
	IF(0x0C090410u); r10 = MACL;  /* 0C090410 sts macl,Rn */
	r10 += r11;  /* 0C090412 add Rm,Rn */
	r8 = R32(r10); UPD(0x0C090416u, 3);  /* 0C090414 mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C090418u, 1);  /* 0C090416 mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C09041Au, 1);  /* 0C090418 mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C09041A and Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C09041Eu, 2);  /* 0C09041C mov.l @(disp,Rm),Rn */
	r9 |= r8;  /* 0C09041E or Rm,Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C090422u, 2);  /* 0C090420 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x30u); UPD(0x0C090424u, 1);  /* 0C090422 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C090424 add Rm,Rn */
	r7 += r0;  /* 0C090426 add Rm,Rn */
	r1 = R32(r10 + 0x38u); UPD(0x0C09042Au, 3);  /* 0C090428 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C09042Cu, 1);  /* 0C09042A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r7); UPD(0x0C09042Eu, 1);  /* 0C09042C mov.l Rm,@(disp,Rn) */
	{ W32(r3, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C08FB20u, 3); goto L_0C08FB20; }  /* 0C09042E bra */
L_0C09044C: BLKS(0x0C09044Cu);
	r4 = 0xFFFFEE50u; UPD(0x0C09044Eu, 1);  /* 0C09044C mov.w @(disp,pc),Rn */
	IF(0x0C09044Eu); { u32 tv_ = (r4 + 0x0C090452u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09044E braf Rn */
}

void f_0C090440(sh3_t *c)
{
	LOCALS;
	goto L_0C090440;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F730: BLKS(0x0C08F730u);
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 1);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
L_0C08F854: BLKS(0x0C08F854u);
	r0 = 0x4000u; UPD(0x0C08F856u, 1);  /* 0C08F854 mov.w @(disp,pc),Rn */
	r1 |= r0;  /* 0C08F856 or Rm,Rn */
	W32(r8, r1); UPD(0x0C08F85Au, 2);  /* 0C08F858 mov.l Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F85A bra */
L_0C08F88A: BLKS(0x0C08F88Au);
	r8 = 0xC0A0380u; UPD(0x0C08F88Cu, 1);  /* 0C08F88A mov.l @(disp,pc),Rn */
	IF(0x0C08F88Cu); { u32 t_ = r8; PR = 0x0C08F890u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08F890u); }  /* 0C08F88C jsr @Rn */
L_0C08F890: BLKS(0x0C08F890u);
	r1 = 0x0u;  /* 0C08F890 mov #imm,Rn */
	W8(r9, r1); UPD(0x0C08F894u, 2);  /* 0C08F892 mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F894 bra */
L_0C08F936: BLKS(0x0C08F936u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C08F730u, 3); goto L_0C08F730; }  /* 0C08F936 bra */
L_0C08FE90: BLKS(0x0C08FE90u);
	r15 += 0x4u;  /* 0C08FE90 add #imm,Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 4); goto L_0C08EF56; }  /* 0C08FE92 bra */
L_0C090440: BLKS(0x0C090440u);
	r10 = 0xC0A0540u; UPD(0x0C090442u, 1);  /* 0C090440 mov.l @(disp,pc),Rn */
	IF(0x0C090442u); { u32 t_ = r10; PR = 0x0C090446u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090446u); }  /* 0C090442 jsr @Rn */
L_0C090446: BLKS(0x0C090446u);
	IF(0x0C090446u); T = (s32)r0 >= 0;  /* 0C090446 cmp/pz Rn */
	{ u32 c_ = T; r8 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090454u, 4); goto L_0C090454; } UPD(0x0C09044Cu, 1); goto L_0C09044C; }  /* 0C090448 bt/s */
L_0C09044C: BLKS(0x0C09044Cu);
	r4 = 0xFFFFEE50u; UPD(0x0C09044Eu, 1);  /* 0C09044C mov.w @(disp,pc),Rn */
	IF(0x0C09044Eu); { u32 tv_ = (r4 + 0x0C090452u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09044E braf Rn */
L_0C090454: BLKS(0x0C090454u);
	r5 = 0xB4u; UPD(0x0C090456u, 1);  /* 0C090454 mov.w @(disp,pc),Rn */
	IF(0x0C090456u); MACL = r8 * r5;  /* 0C090456 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09045Au, 3);  /* 0C090458 mov.l @(disp,pc),Rn */
	IF(0x0C09045Au); r8 = MACL;  /* 0C09045A sts macl,Rn */
	IF(0x0C09045Cu); MACL = r0 * r5;  /* 0C09045C mul.l Rm,Rn */
	r8 += r6;  /* 0C09045E add Rm,Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C090462u, 5);  /* 0C090460 mov.l @(disp,Rm),Rn */
	IF(0x0C090462u); r5 = MACL;  /* 0C090462 sts macl,Rn */
	r5 += r6;  /* 0C090464 add Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C090468u, 3);  /* 0C090466 mov.l @(disp,Rm),Rn */
	r0 = 0xA8u; UPD(0x0C09046Au, 1);  /* 0C090468 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C09046A add Rm,Rn */
	r7 = r8;  /* 0C09046C mov Rm,Rn */
	r12 = R32(r8); UPD(0x0C090470u, 3);  /* 0C09046E mov.l @Rm,Rn */
	r7 += r0;  /* 0C090470 add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C090474u, 2);  /* 0C090472 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C090474 add Rm,Rn */
	r12 &= r2;  /* 0C090476 and Rm,Rn */
	r0 += 0x1u;  /* 0C090478 add #imm,Rn */
	W32(r8, r12); UPD(0x0C09047Cu, 4);  /* 0C09047A mov.l Rm,@Rn */
	r7 += 0x1u;  /* 0C09047C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C090480u, 2);  /* 0C09047E mov.b @Rm,Rn */
	r13 = 0xAFu; UPD(0x0C090482u, 1);  /* 0C090480 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C090482 mov Rm,Rn */
	r9 = R32(r5); UPD(0x0C090486u, 2);  /* 0C090484 mov.l @Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C090488u, 1);  /* 0C090486 mov.l Rm,@(disp,Rn) */
	r1 = 0x13000100u; UPD(0x0C09048Au, 1);  /* 0C090488 mov.l @(disp,pc),Rn */
	r11 = R32(r5 + 0x28u); UPD(0x0C09048Cu, 1);  /* 0C09048A mov.l @(disp,Rm),Rn */
	r9 &= r1;  /* 0C09048C and Rm,Rn */
	IF(0x0C09048Eu); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C090490u, 2);  /* 0C09048E mov.b @(r0,Rm),Rn */
	r12 |= r9;  /* 0C090490 or Rm,Rn */
	r10 = R32(r8 + 0x30u); UPD(0x0C090494u, 2);  /* 0C090492 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C090494 add Rm,Rn */
	r3 = R32(r5 + 0x38u); UPD(0x0C090498u, 2);  /* 0C090496 mov.l @(disp,Rm),Rn */
	r11 += r10;  /* 0C090498 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09049Cu, 2);  /* 0C09049A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C09049Eu, 1);  /* 0C09049C mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09049E tst Rm,Rn */
	W32(r8, r12); UPD(0x0C0904A2u, 2);  /* 0C0904A0 mov.l Rm,@Rn */
	W8(r7, r6); UPD(0x0C0904A4u, 1);  /* 0C0904A2 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r8 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0904ACu, 3); goto L_0C0904AC; } UPD(0x0C0904A8u, 1); goto L_0C0904A8; }  /* 0C0904A4 bf/s */
L_0C0904A8: BLKS(0x0C0904A8u);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0905D0u, 3); goto L_0C0905D0; }  /* 0C0904A8 bra */
L_0C0904AC: BLKS(0x0C0904ACu);
	T = r0 == 0x7u;  /* 0C0904AC cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090500u, 4); goto L_0C090500; } UPD(0x0C0904B2u, 1); goto L_0C0904B2; }  /* 0C0904AE bt/s */
L_0C0904B2: BLKS(0x0C0904B2u);
	r10 = 0xB4u; UPD(0x0C0904B4u, 1);  /* 0C0904B2 mov.w @(disp,pc),Rn */
	IF(0x0C0904B4u); MACL = r3 * r10;  /* 0C0904B4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0904B8u, 3);  /* 0C0904B6 mov.l @(disp,pc),Rn */
	IF(0x0C0904B8u); r8 = MACL;  /* 0C0904B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0904BCu, 2);  /* 0C0904BA mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C0904BC add Rm,Rn */
	r2 += r8;  /* 0C0904BE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0904C2u, 3);  /* 0C0904C0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0904C2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0904C4 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0904C6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0904ECu, 6); goto L_0C0904EC; } UPD(0x0C0904CCu, 1); goto L_0C0904CC; }  /* 0C0904C8 bf/s */
L_0C0904CC: BLKS(0x0C0904CCu);
	r0 = 0x88u; UPD(0x0C0904CEu, 1);  /* 0C0904CC mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0904CE mov #imm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0904D2u, 2);  /* 0C0904D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0904D2u); r13 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0904D4u, 1);  /* 0C0904D2 mov.w @(r0,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C0904D6u, 1);  /* 0C0904D4 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C0904D6 add Rm,Rn */
	W8(r2, r4); UPD(0x0C0904DAu, 2);  /* 0C0904D8 mov.b Rm,@Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0904DCu, 1);  /* 0C0904DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0904DCu); { u32 t_ = r6; PR = 0x0C0904E0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0904E0u); }  /* 0C0904DC jsr @Rn */
L_0C0904E0: BLKS(0x0C0904E0u);
	r7 = R32(r8 + 0xCu); UPD(0x0C0904E2u, 1);  /* 0C0904E0 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0904E2 tst Rm,Rn */
	if (!T) { UPD(0x0C0904ECu, 4); goto L_0C0904EC; }  /* 0C0904E4 bf */
L_0C0904E6: BLKS(0x0C0904E6u);
	r1 = R32(r8); UPD(0x0C0904E8u, 1);  /* 0C0904E6 mov.l @Rm,Rn */
	{ IF(0x0C0904EAu); ; /* slot nop */ UPD(0x0C08F854u, 3); goto L_0C08F854; }  /* 0C0904E8 bra */
L_0C0904EC: BLKS(0x0C0904ECu);
	r13 = 0xFFFFEA64u; UPD(0x0C0904EEu, 1);  /* 0C0904EC mov.w @(disp,pc),Rn */
	IF(0x0C0904EEu); { u32 tv_ = (r13 + 0x0C0904F2u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0904EE braf Rn */
L_0C090500: BLKS(0x0C090500u);
	r12 = 0xC0A9E40u; UPD(0x0C090502u, 1);  /* 0C090500 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C090502 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090506u, 2);  /* 0C090504 mov.l @Rm,Rn */
	IF(0x0C090506u); { u32 t_ = r12; PR = 0x0C09050Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09050Au); }  /* 0C090506 jsr @Rn */
L_0C09050A: BLKS(0x0C09050Au);
	T = (r0 & r0) == 0;  /* 0C09050A tst Rm,Rn */
	if (T) { UPD(0x0C0904ECu, 4); goto L_0C0904EC; }  /* 0C09050C bt */
L_0C09050E: BLKS(0x0C09050Eu);
	r2 = 0x2u;  /* 0C09050E mov #imm,Rn */
	r9 = 0x9Fu; UPD(0x0C090512u, 2);  /* 0C090510 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C090512 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C090516u, 2);  /* 0C090514 mov.b @Rm,Rn */
	r0 = r11 & 0xFF;  /* 0C090516 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C090518 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C090530u, 5); goto L_0C090530; }  /* 0C09051A bf */
L_0C09051C: BLKS(0x0C09051Cu);
	T = r0 == 0x3u;  /* 0C09051C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0904ECu, 4); goto L_0C0904EC; }  /* 0C09051E bf */
L_0C090520: BLKS(0x0C090520u);
	r3 = R32(r8 + 0xCu); UPD(0x0C090522u, 1);  /* 0C090520 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C090522 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C090526u, 2);  /* 0C090524 mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C090526 add #imm,Rn */
	IF(0x0C090528u); W16(r0 + r8, r7); UPD(0x0C09052Au, 2);  /* 0C090528 mov.w Rm,@(r0,Rn) */
	{ W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F88Au, 3); goto L_0C08F88A; }  /* 0C09052A bra */
L_0C090530: BLKS(0x0C090530u);
	r10 = 0xC058090u; UPD(0x0C090532u, 1);  /* 0C090530 mov.l @(disp,pc),Rn */
	IF(0x0C090532u); { u32 t_ = r10; PR = 0x0C090536u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090536u); }  /* 0C090532 jsr @Rn */
L_0C090536: BLKS(0x0C090536u);
	r2 = 0x280u; UPD(0x0C090538u, 1);  /* 0C090536 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C090538 exts.w Rm,Rn */
	IF(0x0C09053Au); MACL = r11 * r2;  /* 0C09053A mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C09053Eu, 4);  /* 0C09053C mov.l @(disp,pc),Rn */
	r12 = 0xC057390u; UPD(0x0C090540u, 1);  /* 0C09053E mov.l @(disp,pc),Rn */
	IF(0x0C090540u); r0 = MACL;  /* 0C090540 sts macl,Rn */
	r0 += r4;  /* 0C090542 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090546u, 3);  /* 0C090544 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090548u, 1);  /* 0C090546 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C09054Au, 1);  /* 0C090548 mov.l @(disp,Rm),Rn */
	IF(0x0C09054Au); { u32 t_ = r12; PR = 0x0C09054Eu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09054Eu); }  /* 0C09054A jsr @Rn */
L_0C09054E: BLKS(0x0C09054Eu);
	r5 = (u32)(s32)(s16)r0;  /* 0C09054E exts.w Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C090552u, 2);  /* 0C090550 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFFCu;  /* 0C090552 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C090556u, 2);  /* 0C090554 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C090556 mov #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C090558 extu.b Rm,Rn */
	r13 = 0xC1C2CE8u; UPD(0x0C09055Cu, 3);  /* 0C09055A mov.l @(disp,pc),Rn */
	IF(0x0C09055Cu); r0 <<= 2;  /* 0C09055C shll2 Rn */
	IF(0x0C09055Eu); r6 = R32(r0 + r13); UPD(0x0C090560u, 2);  /* 0C09055E mov.l @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C090562u, 1);  /* 0C090560 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x8u); UPD(0x0C090564u, 1);  /* 0C090562 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C090564 add Rm,Rn */
	r7 = 0xC1C2CF4u; UPD(0x0C090568u, 2);  /* 0C090566 mov.l @(disp,pc),Rn */
	IF(0x0C090568u); r3 <<= 2;  /* 0C090568 shll2 Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C09056Cu, 2);  /* 0C09056A mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C09056C add Rm,Rn */
	r0 = 0xFFFFFF44u; UPD(0x0C090570u, 2);  /* 0C09056E mov.w @(disp,pc),Rn */
	r8 = 0x20000u; UPD(0x0C090572u, 1);  /* 0C090570 mov.l @(disp,pc),Rn */
	IF(0x0C090572u); r10 = R32(r0 + r3); UPD(0x0C090574u, 1);  /* 0C090572 mov.l @(r0,Rm),Rn */
	W32(r15, r8); UPD(0x0C090576u, 1);  /* 0C090574 mov.l Rm,@Rn */
	r6 += r10;  /* 0C090576 add Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09057Au, 2);  /* 0C090578 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A8510u; UPD(0x0C09057Cu, 1);  /* 0C09057A mov.l @(disp,pc),Rn */
	IF(0x0C09057Cu); { u32 t_ = r0; PR = 0x0C090580u; IF(0x0C09057Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C090580u); }  /* 0C09057C jsr @Rn */
L_0C090580: BLKS(0x0C090580u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C090582u, 1);  /* 0C090580 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C090582 add #imm,Rn */
	{ W8(r9, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C08FE90u, 4); goto L_0C08FE90; }  /* 0C090584 bra */
L_0C0905D0: BLKS(0x0C0905D0u);
	r13 = 0xC0A9E40u; UPD(0x0C0905D2u, 1);  /* 0C0905D0 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0905D4u, 1);  /* 0C0905D2 mov.l @Rm,Rn */
	IF(0x0C0905D4u); { u32 t_ = r13; PR = 0x0C0905D8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0905D8u); }  /* 0C0905D4 jsr @Rn */
L_0C0905D8: BLKS(0x0C0905D8u);
	T = (r0 & r0) == 0;  /* 0C0905D8 tst Rm,Rn */
	if (T) { UPD(0x0C090644u, 4); goto L_0C090644; }  /* 0C0905DA bt */
L_0C0905DC: BLKS(0x0C0905DCu);
	r2 = 0x1u;  /* 0C0905DC mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0905E0u, 2);  /* 0C0905DE mov.w @(disp,pc),Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C0905E2u, 1);  /* 0C0905E0 mov.l @(disp,Rm),Rn */
	r12 = 0xC0A0380u; UPD(0x0C0905E4u, 1);  /* 0C0905E2 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C0905E4 add #imm,Rn */
	IF(0x0C0905E6u); W16(r0 + r8, r2); UPD(0x0C0905E8u, 2);  /* 0C0905E6 mov.w Rm,@(r0,Rn) */
	r4 = R32(r14); UPD(0x0C0905EAu, 1);  /* 0C0905E8 mov.l @Rm,Rn */
	IF(0x0C0905EAu); { u32 t_ = r12; PR = 0x0C0905EEu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0905EEu); }  /* 0C0905EA jsr @Rn */
L_0C0905EE: BLKS(0x0C0905EEu);
	r4 = R32(r8); UPD(0x0C0905F0u, 1);  /* 0C0905EE mov.l @Rm,Rn */
	r0 = 0xFFFFBFFFu; UPD(0x0C0905F2u, 1);  /* 0C0905F0 mov.w @(disp,pc),Rn */
	r4 &= r0;  /* 0C0905F2 and Rm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C08F936u, 4); goto L_0C08F936; }  /* 0C0905F4 bra */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
}

void f_0C090600(sh3_t *c)
{
	LOCALS;
L_0C090600: BLKS(0x0C090600u);
	r10 = 0xB4u; UPD(0x0C090602u, 1);  /* 0C090600 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C090604u, 1);  /* 0C090602 mov.l @Rm,Rn */
	IF(0x0C090604u); MACL = r13 * r10;  /* 0C090604 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090608u, 3);  /* 0C090606 mov.l @(disp,pc),Rn */
	IF(0x0C090608u); r8 = MACL;  /* 0C090608 sts macl,Rn */
	r8 += r11;  /* 0C09060A add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C09060Eu, 3);  /* 0C09060C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09060E mov Rm,Rn */
	IF(0x0C090610u); r9 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C090612u, 2);  /* 0C090610 mov.b @(r0,Rm),Rn */
	r0 = r9 & 0xFF;  /* 0C090612 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C090614 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09061Eu, 5); goto L_0C09061E; } goto L_0C09061A; }  /* 0C090616 bf/s */
L_0C09061A: BLKS(0x0C09061Au);
	{ IF(0x0C09061Cu); ; /* slot nop */ UPD(0x0C090910u, 4); goto L_0C090910; }  /* 0C09061A bra */
L_0C09061E: BLKS(0x0C09061Eu);
	{ u32 c_ = T; r3 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0906A0u, 3); goto L_0C0906A0; } UPD(0x0C090622u, 1); goto L_0C090622; }  /* 0C09061E bt/s */
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
L_0C090624: BLKS(0x0C090624u);
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C0906A0: BLKS(0x0C0906A0u);
	r0 = 0xA0u; UPD(0x0C0906A2u, 1);  /* 0C0906A0 mov.w @(disp,pc),Rn */
	IF(0x0C0906A2u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0906A4u, 1);  /* 0C0906A2 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C0906A4 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C0906A6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090766u, 5); goto L_0C090766; } UPD(0x0C0906ACu, 1); goto L_0C0906AC; }  /* 0C0906A8 bt/s */
L_0C0906AC: BLKS(0x0C0906ACu);
	r0 = 0xC0906F0u;  /* 0C0906AC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0906AE add Rm,Rn */
	IF(0x0C0906B0u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0906B2u, 3);  /* 0C0906B0 mov.w @(r0,Rm),Rn */
	IF(0x0C0906B2u); { u32 tv_ = (r8 + 0x0C0906B6u); u32 t_ = PHYS(tv_); IF(0x0C0906B4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0906B2 braf Rn */
L_0C090766: BLKS(0x0C090766u);
	r5 = 0xB4u; UPD(0x0C090768u, 1);  /* 0C090766 mov.w @(disp,pc),Rn */
	IF(0x0C090768u); MACL = r4 * r5;  /* 0C090768 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09076Cu, 3);  /* 0C09076A mov.l @(disp,pc),Rn */
	IF(0x0C09076Cu); r12 = MACL;  /* 0C09076C sts macl,Rn */
	r9 = 0x86u; UPD(0x0C090770u, 2);  /* 0C09076E mov.w @(disp,pc),Rn */
	r12 += r0;  /* 0C090770 add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C090774u, 2);  /* 0C090772 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C090774 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C090778u, 2);  /* 0C090776 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C090778 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C09077Cu, 2);  /* 0C09077A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09077Eu, 1);  /* 0C09077C mov.w @Rm,Rn */
	IF(0x0C09077Eu); { u32 t_ = r10; PR = 0x0C090782u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C090782u); }  /* 0C09077E jsr @Rn */
L_0C090782: BLKS(0x0C090782u);
	W32(r12 + 0x2Cu, r0); UPD(0x0C090784u, 1);  /* 0C090782 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C090786u, 1);  /* 0C090784 mov.w @Rm,Rn */
	IF(0x0C090786u); { u32 t_ = r13; PR = 0x0C09078Au; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09078Au); }  /* 0C090786 jsr @Rn */
L_0C09078A: BLKS(0x0C09078Au);
	r6 = R32(r12 + 0x24u); UPD(0x0C09078Cu, 1);  /* 0C09078A mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x28u); UPD(0x0C09078Eu, 1);  /* 0C09078C mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C090790u, 1);  /* 0C09078E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C090790 add Rm,Rn */
	r6 += r1;  /* 0C090792 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C090796u, 3);  /* 0C090794 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r6); UPD(0x0C090798u, 1);  /* 0C090796 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090622u, 3); goto L_0C090622; }  /* 0C090798 bra */
L_0C090910: BLKS(0x0C090910u);
	r12 = 0xC0A03F0u; UPD(0x0C090912u, 1);  /* 0C090910 mov.l @(disp,pc),Rn */
	IF(0x0C090912u); { u32 t_ = r12; PR = 0x0C090916u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C090916u); }  /* 0C090912 jsr @Rn */
L_0C090916: BLKS(0x0C090916u);
	IF(0x0C090916u); T = (s32)r0 >= 0;  /* 0C090916 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090924u, 4); goto L_0C090924; } goto L_0C09091C; }  /* 0C090918 bt/s */
L_0C09091C: BLKS(0x0C09091Cu);
	r4 = 0xFFFFE980u; UPD(0x0C09091Eu, 2);  /* 0C09091C mov.w @(disp,pc),Rn */
	IF(0x0C09091Eu); { u32 tv_ = (r4 + 0x0C090922u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09091E braf Rn */
L_0C090924: BLKS(0x0C090924u);
	IF(0x0C090924u); MACL = r0 * r10;  /* 0C090924 mul.l Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C090928u, 3);  /* 0C090926 mov.l @(disp,Rm),Rn */
	r5 = 0x4u;  /* 0C090928 mov #imm,Rn */
	IF(0x0C09092Au); r10 = MACL;  /* 0C09092A sts macl,Rn */
	r10 += r11;  /* 0C09092C add Rm,Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C090930u, 4);  /* 0C09092E mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C090930 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C090934u, 2);  /* 0C090932 mov.l Rm,@(disp,Rn) */
	r0 = 0xA0u; UPD(0x0C090936u, 1);  /* 0C090934 mov.w @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C090938u, 1);  /* 0C090936 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C09093Au, 1);  /* 0C090938 mov.l @(disp,Rm),Rn */
	IF(0x0C09093Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09093Cu, 1);  /* 0C09093A mov.b @(r0,Rm),Rn */
	r11 += r3;  /* 0C09093C add Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C09093E extu.b Rm,Rn */
	T = r2 > r5;  /* 0C090940 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x24u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09099Cu, 6); goto L_0C09099C; } UPD(0x0C090946u, 1); goto L_0C090946; }  /* 0C090942 bt/s */
L_0C090946: BLKS(0x0C090946u);
	r0 = 0xC090958u;  /* 0C090946 mova @(disp,pc),r0 */
	IF(0x0C090948u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09094Au, 2);  /* 0C090948 mov.b @(r0,Rm),Rn */
	r7 = r7 & 0xFF;  /* 0C09094A extu.b Rm,Rn */
	IF(0x0C09094Cu); { u32 tv_ = (r7 + 0x0C090950u); u32 t_ = PHYS(tv_); IF(0x0C09094Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09094C braf Rn */
L_0C09099C: BLKS(0x0C09099Cu);
	{ r3 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C090624u, 3); goto L_0C090624; }  /* 0C09099C bra */
}

void f_0C090700(sh3_t *c)
{
	LOCALS;
	goto L_0C090700;
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C090700: BLKS(0x0C090700u);
	r9 = 0xC0A0540u; UPD(0x0C090702u, 1);  /* 0C090700 mov.l @(disp,pc),Rn */
	IF(0x0C090702u); { u32 t_ = r9; PR = 0x0C090706u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090706u); }  /* 0C090702 jsr @Rn */
L_0C090706: BLKS(0x0C090706u);
	r1 = 0xB4u; UPD(0x0C090708u, 1);  /* 0C090706 mov.w @(disp,pc),Rn */
	r6 = r0;  /* 0C090708 mov Rm,Rn */
	IF(0x0C09070Au); MACL = r0 * r1;  /* 0C09070A mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09070Eu, 4);  /* 0C09070C mov.l @(disp,pc),Rn */
	IF(0x0C09070Eu); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C09070E rotl Rn */
	IF(0x0C090710u); r0 = MACL;  /* 0C090710 sts macl,Rn */
	IF(0x0C090712u); r0 = R32(r0 + r2); UPD(0x0C090714u, 3);  /* 0C090712 mov.l @(r0,Rm),Rn */
	IF(0x0C090714u); r13 = T;  /* 0C090714 movt Rn */
	IF(0x0C090716u); r0 >>= 8;  /* 0C090716 shlr8 Rn */
	r0 &= 0x1u;  /* 0C090718 and #imm,r0 */
	r0 |= r13;  /* 0C09071A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09071C tst Rm,Rn */
	{ u32 c_ = T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0907A0u, 8); goto L_0C0907A0; } UPD(0x0C090722u, 1); goto L_0C090722; }  /* 0C09071E bt/s */
L_0C090722: BLKS(0x0C090722u);
	IF(0x0C090722u); MACL = r10 * r1;  /* 0C090722 mul.l Rm,Rn */
	r4 = 0xFF000000u; UPD(0x0C090726u, 3);  /* 0C090724 mov.l @(disp,pc),Rn */
	IF(0x0C090726u); r0 = MACL;  /* 0C090726 sts macl,Rn */
	r0 += r2;  /* 0C090728 add Rm,Rn */
	r0 += 0x5Cu;  /* 0C09072A add #imm,Rn */
	W32(r0, r4); UPD(0x0C09072Eu, 4);  /* 0C09072C mov.l Rm,@Rn */
	r2 = 0x3u;  /* 0C09072E mov #imm,Rn */
	r0 += 0xFFFFFFA4u;  /* 0C090730 add #imm,Rn */
	r5 = R32(r0 + 0x28u); UPD(0x0C090734u, 3);  /* 0C090732 mov.l @(disp,Rm),Rn */
	r0 += 0x60u;  /* 0C090734 add #imm,Rn */
	W32(r0, r5); UPD(0x0C090738u, 2);  /* 0C090736 mov.l Rm,@Rn */
	r12 = 0xA0u; UPD(0x0C09073Au, 1);  /* 0C090738 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFA0u;  /* 0C09073A add #imm,Rn */
	IF(0x0C09073Cu); W8(r0 + r12, r2); UPD(0x0C09073Eu, 2);  /* 0C09073C mov.b Rm,@(r0,Rn) */
L_0C09073E: BLKS(0x0C09073Eu);
	r5 = 0xB4u; UPD(0x0C090740u, 1);  /* 0C09073E mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C090742u, 1);  /* 0C090740 mov.l @Rm,Rn */
	IF(0x0C090742u); MACL = r4 * r5;  /* 0C090742 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C090746u, 3);  /* 0C090744 mov.l @(disp,pc),Rn */
	IF(0x0C090746u); r12 = MACL;  /* 0C090746 sts macl,Rn */
	r12 += r1;  /* 0C090748 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C09074Cu, 3);  /* 0C09074A mov.w @(disp,pc),Rn */
	r9 = r12;  /* 0C09074C mov Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C090750u, 2);  /* 0C09074E mov.l @(disp,Rm),Rn */
	r8 += r12;  /* 0C090750 add Rm,Rn */
	r5 = R32(r12 + 0x28u); UPD(0x0C090754u, 2);  /* 0C090752 mov.l @(disp,Rm),Rn */
	r9 += 0x60u;  /* 0C090754 add #imm,Rn */
	r12 += 0x5Cu;  /* 0C090756 add #imm,Rn */
	r6 = R32(r12); UPD(0x0C09075Au, 3);  /* 0C090758 mov.l @Rm,Rn */
	r7 = R32(r9); UPD(0x0C09075Cu, 1);  /* 0C09075A mov.l @Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C09075Eu, 1);  /* 0C09075C mov.l @(disp,pc),Rn */
	IF(0x0C09075Eu); { u32 t_ = r9; PR = 0x0C090762u; IF(0x0C090760u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C090762u); }  /* 0C09075E jsr @Rn */
L_0C090762: BLKS(0x0C090762u);
	W16(r8, r0); UPD(0x0C090764u, 1);  /* 0C090762 mov.w Rm,@Rn */
	r4 = R32(r14); UPD(0x0C090766u, 1);  /* 0C090764 mov.l @Rm,Rn */
	r5 = 0xB4u; UPD(0x0C090768u, 1);  /* 0C090766 mov.w @(disp,pc),Rn */
	IF(0x0C090768u); MACL = r4 * r5;  /* 0C090768 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09076Cu, 3);  /* 0C09076A mov.l @(disp,pc),Rn */
	IF(0x0C09076Cu); r12 = MACL;  /* 0C09076C sts macl,Rn */
	r9 = 0x86u; UPD(0x0C090770u, 2);  /* 0C09076E mov.w @(disp,pc),Rn */
	r12 += r0;  /* 0C090770 add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C090774u, 2);  /* 0C090772 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C090774 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C090778u, 2);  /* 0C090776 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C090778 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C09077Cu, 2);  /* 0C09077A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09077Eu, 1);  /* 0C09077C mov.w @Rm,Rn */
	IF(0x0C09077Eu); { u32 t_ = r10; PR = 0x0C090782u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C090782u); }  /* 0C09077E jsr @Rn */
L_0C090782: BLKS(0x0C090782u);
	W32(r12 + 0x2Cu, r0); UPD(0x0C090784u, 1);  /* 0C090782 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C090786u, 1);  /* 0C090784 mov.w @Rm,Rn */
	IF(0x0C090786u); { u32 t_ = r13; PR = 0x0C09078Au; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09078Au); }  /* 0C090786 jsr @Rn */
L_0C09078A: BLKS(0x0C09078Au);
	r6 = R32(r12 + 0x24u); UPD(0x0C09078Cu, 1);  /* 0C09078A mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x28u); UPD(0x0C09078Eu, 1);  /* 0C09078C mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C090790u, 1);  /* 0C09078E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C090790 add Rm,Rn */
	r6 += r1;  /* 0C090792 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C090796u, 3);  /* 0C090794 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r6); UPD(0x0C090798u, 1);  /* 0C090796 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090622u, 3); goto L_0C090622; }  /* 0C090798 bra */
L_0C0907A0: BLKS(0x0C0907A0u);
	r6 = R32(r14); UPD(0x0C0907A2u, 1);  /* 0C0907A0 mov.l @Rm,Rn */
	r4 = 0x40u;  /* 0C0907A2 mov #imm,Rn */
	IF(0x0C0907A4u); MACL = r6 * r1;  /* 0C0907A4 mul.l Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C0907A8u, 4);  /* 0C0907A6 mov.l @(disp,pc),Rn */
	IF(0x0C0907A8u); r11 = MACL;  /* 0C0907A8 sts macl,Rn */
	r13 = 0xD0u; UPD(0x0C0907ACu, 2);  /* 0C0907AA mov.w @(disp,pc),Rn */
	IF(0x0C0907ACu); { u32 t_ = r8; PR = 0x0C0907B0u; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0907B0u); }  /* 0C0907AC jsr @Rn */
L_0C0907B0: BLKS(0x0C0907B0u);
	r0 += r13;  /* 0C0907B0 add Rm,Rn */
	r11 += 0x5Cu;  /* 0C0907B2 add #imm,Rn */
	IF(0x0C0907B4u); r0 <<= 16;  /* 0C0907B4 shll16 Rn */
	r4 = 0x80u; UPD(0x0C0907B8u, 4);  /* 0C0907B6 mov.w @(disp,pc),Rn */
	IF(0x0C0907B8u); { u32 t_ = r8; PR = 0x0C0907BCu; W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C0907BCu); }  /* 0C0907B8 jsr @Rn */
L_0C0907BC: BLKS(0x0C0907BCu);
	r7 = 0x1C0u; UPD(0x0C0907BEu, 1);  /* 0C0907BC mov.w @(disp,pc),Rn */
	r11 += 0xFFFFFFA4u;  /* 0C0907BE add #imm,Rn */
	r0 += r7;  /* 0C0907C0 add Rm,Rn */
	r11 += 0x60u;  /* 0C0907C2 add #imm,Rn */
	IF(0x0C0907C4u); r0 <<= 16;  /* 0C0907C4 shll16 Rn */
	W32(r11, r0); UPD(0x0C0907C8u, 5);  /* 0C0907C6 mov.l Rm,@Rn */
	r3 = 0xA0u; UPD(0x0C0907CAu, 1);  /* 0C0907C8 mov.w @(disp,pc),Rn */
	r11 += 0xFFFFFFA0u;  /* 0C0907CA add #imm,Rn */
	r11 += r3;  /* 0C0907CC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C0907D0u, 3);  /* 0C0907CE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0907D0 add #imm,Rn */
	{ W8(r11, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09073Eu, 4); goto L_0C09073E; }  /* 0C0907D2 bra */
}

void f_0C0907E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0907E0;
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C09075C: BLKS(0x0C09075Cu);
	r9 = 0xC057390u; UPD(0x0C09075Eu, 1);  /* 0C09075C mov.l @(disp,pc),Rn */
	IF(0x0C09075Eu); { u32 t_ = r9; PR = 0x0C090762u; IF(0x0C090760u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C090762u); }  /* 0C09075E jsr @Rn */
L_0C090762: BLKS(0x0C090762u);
	W16(r8, r0); UPD(0x0C090764u, 1);  /* 0C090762 mov.w Rm,@Rn */
	r4 = R32(r14); UPD(0x0C090766u, 1);  /* 0C090764 mov.l @Rm,Rn */
	r5 = 0xB4u; UPD(0x0C090768u, 1);  /* 0C090766 mov.w @(disp,pc),Rn */
	IF(0x0C090768u); MACL = r4 * r5;  /* 0C090768 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09076Cu, 3);  /* 0C09076A mov.l @(disp,pc),Rn */
	IF(0x0C09076Cu); r12 = MACL;  /* 0C09076C sts macl,Rn */
	r9 = 0x86u; UPD(0x0C090770u, 2);  /* 0C09076E mov.w @(disp,pc),Rn */
	r12 += r0;  /* 0C090770 add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C090774u, 2);  /* 0C090772 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C090774 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C090778u, 2);  /* 0C090776 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C090778 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C09077Cu, 2);  /* 0C09077A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09077Eu, 1);  /* 0C09077C mov.w @Rm,Rn */
	IF(0x0C09077Eu); { u32 t_ = r10; PR = 0x0C090782u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C090782u); }  /* 0C09077E jsr @Rn */
L_0C090782: BLKS(0x0C090782u);
	W32(r12 + 0x2Cu, r0); UPD(0x0C090784u, 1);  /* 0C090782 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C090786u, 1);  /* 0C090784 mov.w @Rm,Rn */
	IF(0x0C090786u); { u32 t_ = r13; PR = 0x0C09078Au; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09078Au); }  /* 0C090786 jsr @Rn */
L_0C09078A: BLKS(0x0C09078Au);
	r6 = R32(r12 + 0x24u); UPD(0x0C09078Cu, 1);  /* 0C09078A mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x28u); UPD(0x0C09078Eu, 1);  /* 0C09078C mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C090790u, 1);  /* 0C09078E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C090790 add Rm,Rn */
	r6 += r1;  /* 0C090792 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C090796u, 3);  /* 0C090794 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r6); UPD(0x0C090798u, 1);  /* 0C090796 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090622u, 3); goto L_0C090622; }  /* 0C090798 bra */
L_0C0907E0: BLKS(0x0C0907E0u);
	r0 = R32(r14); UPD(0x0C0907E2u, 1);  /* 0C0907E0 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C0907E4u, 1);  /* 0C0907E2 mov.w @(disp,pc),Rn */
	IF(0x0C0907E4u); MACL = r0 * r11;  /* 0C0907E4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0907E8u, 3);  /* 0C0907E6 mov.l @(disp,pc),Rn */
	IF(0x0C0907E8u); r9 = MACL;  /* 0C0907E8 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0907ECu, 2);  /* 0C0907EA mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C0907EC add Rm,Rn */
	IF(0x0C0907EEu); r2 = R32(r0 + r9); UPD(0x0C0907F0u, 2);  /* 0C0907EE mov.l @(r0,Rm),Rn */
	r10 = 0xFFFFu; UPD(0x0C0907F2u, 1);  /* 0C0907F0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C0907F2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r11 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090800u, 4); goto L_0C090800; } goto L_0C0907F8; }  /* 0C0907F4 bt/s */
L_0C0907F8: BLKS(0x0C0907F8u);
	r3 = 0x400u; UPD(0x0C0907FAu, 2);  /* 0C0907F8 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0907FA add Rm,Rn */
	IF(0x0C0907FCu); W32(r0 + r9, r2); UPD(0x0C0907FEu, 2);  /* 0C0907FC mov.l Rm,@(r0,Rn) */
	r11 = r9;  /* 0C0907FE mov Rm,Rn */
	UPD(0x0C090800u, 1);
L_0C090800: BLKS(0x0C090800u);
	r11 += 0x5Cu;  /* 0C090800 add #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C090804u, 2);  /* 0C090802 mov.l @(disp,Rm),Rn */
	r10 = r9;  /* 0C090804 mov Rm,Rn */
	r4 = R32(r11); UPD(0x0C090808u, 2);  /* 0C090806 mov.l @Rm,Rn */
	r10 += 0x60u;  /* 0C090808 add #imm,Rn */
	r6 = 0x17FFFFu; UPD(0x0C09080Cu, 2);  /* 0C09080A mov.l @(disp,pc),Rn */
	r5 -= r4;  /* 0C09080C sub Rm,Rn */
	r12 = 0x2FFFFEu; UPD(0x0C090810u, 2);  /* 0C09080E mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C090810 add Rm,Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C090814u, 2);  /* 0C090812 mov.l @(disp,Rm),Rn */
	T = r12 >= r5;  /* 0C090814 cmp/hs Rm,Rn */
	r1 = R32(r10); UPD(0x0C090818u, 2);  /* 0C090816 mov.l @Rm,Rn */
	IF(0x0C090818u); r8 = T;  /* 0C090818 movt Rn */
	r13 -= r1;  /* 0C09081A sub Rm,Rn */
	r13 += r6;  /* 0C09081C add Rm,Rn */
	T = r12 >= r13;  /* 0C09081E cmp/hs Rm,Rn */
	IF(0x0C090820u); r7 = T;  /* 0C090820 movt Rn */
	r8 &= r7;  /* 0C090822 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C090824 tst Rm,Rn */
	if (!T) { UPD(0x0C090840u, 10); goto L_0C090840; }  /* 0C090826 bf */
L_0C090828: BLKS(0x0C090828u);
	r8 = 0x86u; UPD(0x0C09082Au, 1);  /* 0C090828 mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09082Cu, 1);  /* 0C09082A mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C09082C add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C090830u, 2);  /* 0C09082E mov.l @(disp,Rm),Rn */
	r6 = R32(r11); UPD(0x0C090832u, 1);  /* 0C090830 mov.l @Rm,Rn */
	{ r7 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C09075Cu, 3); goto L_0C09075C; }  /* 0C090832 bra */
L_0C090840: BLKS(0x0C090840u);
	r0 = 0xA0u; UPD(0x0C090842u, 1);  /* 0C090840 mov.w @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C090842 mov #imm,Rn */
	IF(0x0C090844u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C090846u, 2);  /* 0C090844 mov.b @(r0,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C090848u, 1);  /* 0C090846 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C090848 add #imm,Rn */
	r13 = 0x88u; UPD(0x0C09084Cu, 2);  /* 0C09084A mov.w @(disp,pc),Rn */
	IF(0x0C09084Cu); { u32 t_ = r8; PR = 0x0C090850u; IF(0x0C09084Eu); W8(r0 + r9, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C090850u); }  /* 0C09084C jsr @Rn */
L_0C090850: BLKS(0x0C090850u);
	r13 += r9;  /* 0C090850 add Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C090852 add #imm,Rn */
	{ W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C090828u, 5); goto L_0C090828; }  /* 0C090854 bra */
}

void f_0C090860(sh3_t *c)
{
	LOCALS;
	goto L_0C090860;
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C090766: BLKS(0x0C090766u);
	r5 = 0xB4u; UPD(0x0C090768u, 1);  /* 0C090766 mov.w @(disp,pc),Rn */
	IF(0x0C090768u); MACL = r4 * r5;  /* 0C090768 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09076Cu, 3);  /* 0C09076A mov.l @(disp,pc),Rn */
	IF(0x0C09076Cu); r12 = MACL;  /* 0C09076C sts macl,Rn */
	r9 = 0x86u; UPD(0x0C090770u, 2);  /* 0C09076E mov.w @(disp,pc),Rn */
	r12 += r0;  /* 0C090770 add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C090774u, 2);  /* 0C090772 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C090774 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C090778u, 2);  /* 0C090776 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C090778 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C09077Cu, 2);  /* 0C09077A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09077Eu, 1);  /* 0C09077C mov.w @Rm,Rn */
	IF(0x0C09077Eu); { u32 t_ = r10; PR = 0x0C090782u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C090782u); }  /* 0C09077E jsr @Rn */
L_0C090782: BLKS(0x0C090782u);
	W32(r12 + 0x2Cu, r0); UPD(0x0C090784u, 1);  /* 0C090782 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C090786u, 1);  /* 0C090784 mov.w @Rm,Rn */
	IF(0x0C090786u); { u32 t_ = r13; PR = 0x0C09078Au; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09078Au); }  /* 0C090786 jsr @Rn */
L_0C09078A: BLKS(0x0C09078Au);
	r6 = R32(r12 + 0x24u); UPD(0x0C09078Cu, 1);  /* 0C09078A mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x28u); UPD(0x0C09078Eu, 1);  /* 0C09078C mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C090790u, 1);  /* 0C09078E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C090790 add Rm,Rn */
	r6 += r1;  /* 0C090792 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C090796u, 3);  /* 0C090794 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r6); UPD(0x0C090798u, 1);  /* 0C090796 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090622u, 3); goto L_0C090622; }  /* 0C090798 bra */
L_0C090860: BLKS(0x0C090860u);
	r6 = 0xB4u; UPD(0x0C090862u, 1);  /* 0C090860 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C090864u, 1);  /* 0C090862 mov.l @Rm,Rn */
	IF(0x0C090864u); MACL = r1 * r6;  /* 0C090864 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C090868u, 3);  /* 0C090866 mov.l @(disp,pc),Rn */
	IF(0x0C090868u); r6 = MACL;  /* 0C090868 sts macl,Rn */
	r6 += r0;  /* 0C09086A add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09086Eu, 3);  /* 0C09086C mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFC00u; UPD(0x0C090870u, 1);  /* 0C09086E mov.w @(disp,pc),Rn */
	IF(0x0C090870u); r10 = R32(r0 + r6); UPD(0x0C090872u, 1);  /* 0C090870 mov.l @(r0,Rm),Rn */
	r10 += r12;  /* 0C090872 add Rm,Rn */
	IF(0x0C090874u); W32(r0 + r6, r10); UPD(0x0C090876u, 2);  /* 0C090874 mov.l Rm,@(r0,Rn) */
	T = (r10 & r10) == 0;  /* 0C090876 tst Rm,Rn */
	r11 = 0x86u; UPD(0x0C09087Au, 2);  /* 0C090878 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C09087A add #imm,Rn */
	r11 += r6;  /* 0C09087C add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C090880u, 3);  /* 0C09087E mov.w @Rm,Rn */
	IF(0x0C090880u); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C090882u, 1);  /* 0C090880 mov.w @(r0,Rm),Rn */
	r3 += r7;  /* 0C090882 add Rm,Rn */
	{ u32 c_ = !T; W16(r11, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C090890u, 4); goto L_0C090890; } UPD(0x0C090888u, 1); goto L_0C090888; }  /* 0C090884 bf/s */
L_0C090888: BLKS(0x0C090888u);
	r0 += 0x18u;  /* 0C090888 add #imm,Rn */
	IF(0x0C09088Au); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09088Cu, 2);  /* 0C09088A mov.b @(r0,Rm),Rn */
	r5 += 0xFFFFFFFEu;  /* 0C09088C add #imm,Rn */
	IF(0x0C09088Eu); W8(r0 + r6, r5); UPD(0x0C090890u, 2);  /* 0C09088E mov.b Rm,@(r0,Rn) */
L_0C090890: BLKS(0x0C090890u);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C090766u, 3); goto L_0C090766; }  /* 0C090890 bra */
}

void f_0C090960(sh3_t *c)
{
	LOCALS;
	goto L_0C090960;
L_0C090624: BLKS(0x0C090624u);
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C090960: BLKS(0x0C090960u);
	r5 = 0xB4u; UPD(0x0C090962u, 1);  /* 0C090960 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFF8u;  /* 0C090962 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090966u, 2);  /* 0C090964 mov.l @Rm,Rn */
	IF(0x0C090966u); MACL = r4 * r5;  /* 0C090966 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09096Au, 3);  /* 0C090968 mov.l @(disp,pc),Rn */
	IF(0x0C09096Au); r7 = MACL;  /* 0C09096A sts macl,Rn */
	r7 += r12;  /* 0C09096C add Rm,Rn */
	r13 = r7;  /* 0C09096E mov Rm,Rn */
	r3 = R32(r7); UPD(0x0C090972u, 4);  /* 0C090970 mov.l @Rm,Rn */
	r13 += 0x50u;  /* 0C090972 add #imm,Rn */
	r9 = R32(r13); UPD(0x0C090976u, 2);  /* 0C090974 mov.l @Rm,Rn */
	r0 = r3;  /* 0C090976 mov Rm,Rn */
	r6 = 0xA8Bu; UPD(0x0C09097Au, 2);  /* 0C090978 mov.w @(disp,pc),Rn */
	IF(0x0C09097Au); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09097A shad Rm,Rn */
	r9 += 0x1u;  /* 0C09097C add #imm,Rn */
	T = (s32)r6 >= (s32)r9;  /* 0C09097E cmp/ge Rm,Rn */
	r0 ^= 0x1u;  /* 0C090980 xor #imm,r0 */
	IF(0x0C090982u); r8 = T;  /* 0C090982 movt Rn */
	r0 &= 0x1u;  /* 0C090984 and #imm,r0 */
	r0 &= r8;  /* 0C090986 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C090988 tst Rm,Rn */
	{ u32 c_ = !T; W32(r13, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0909BAu, 11); goto L_0C0909BA; } UPD(0x0C09098Eu, 1); goto L_0C09098E; }  /* 0C09098A bf/s */
L_0C09098E: BLKS(0x0C09098Eu);
	r0 = 0x100u; UPD(0x0C090990u, 1);  /* 0C09098E mov.w @(disp,pc),Rn */
	r3 |= r0;  /* 0C090990 or Rm,Rn */
	r0 = 0xA0u; UPD(0x0C090994u, 2);  /* 0C090992 mov.w @(disp,pc),Rn */
	IF(0x0C090994u); r10 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C090996u, 1);  /* 0C090994 mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C090996 add #imm,Rn */
	W32(r7, r3); UPD(0x0C09099Au, 2);  /* 0C090998 mov.l Rm,@Rn */
	IF(0x0C09099Au); W8(r0 + r7, r10); UPD(0x0C09099Cu, 1);  /* 0C09099A mov.b Rm,@(r0,Rn) */
	{ r3 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C090624u, 3); goto L_0C090624; }  /* 0C09099C bra */
L_0C0909BA: BLKS(0x0C0909BAu);
	r13 = 0xFFFFE596u; UPD(0x0C0909BCu, 1);  /* 0C0909BA mov.w @(disp,pc),Rn */
	IF(0x0C0909BCu); { u32 tv_ = (r13 + 0x0C0909C0u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0909BC braf Rn */
}

void f_0C0909A0(sh3_t *c)
{
	LOCALS;
	goto L_0C0909A0;
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C0909A0: BLKS(0x0C0909A0u);
	r9 = 0xB4u; UPD(0x0C0909A2u, 1);  /* 0C0909A0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0909A4u, 1);  /* 0C0909A2 mov.l @Rm,Rn */
	IF(0x0C0909A4u); MACL = r1 * r9;  /* 0C0909A4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0909A8u, 3);  /* 0C0909A6 mov.l @(disp,pc),Rn */
	IF(0x0C0909A8u); r3 = MACL;  /* 0C0909A8 sts macl,Rn */
	r3 += r2;  /* 0C0909AA add Rm,Rn */
	r7 = R32(r3 + 0x38u); UPD(0x0C0909AEu, 3);  /* 0C0909AC mov.l @(disp,Rm),Rn */
	r8 = 0x10101u; UPD(0x0C0909B0u, 1);  /* 0C0909AE mov.l @(disp,pc),Rn */
	r11 = 0x808080u; UPD(0x0C0909B2u, 1);  /* 0C0909B0 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C0909B2 add Rm,Rn */
	T = r7 == r11;  /* 0C0909B4 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x38u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0909C2u, 5); goto L_0C0909C2; } UPD(0x0C0909BAu, 1); goto L_0C0909BA; }  /* 0C0909B6 bt/s */
L_0C0909BA: BLKS(0x0C0909BAu);
	r13 = 0xFFFFE596u; UPD(0x0C0909BCu, 1);  /* 0C0909BA mov.w @(disp,pc),Rn */
	IF(0x0C0909BCu); { u32 tv_ = (r13 + 0x0C0909C0u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0909BC braf Rn */
L_0C0909C2: BLKS(0x0C0909C2u);
	r6 = R32(r3); UPD(0x0C0909C4u, 1);  /* 0C0909C2 mov.l @Rm,Rn */
	r13 = 0x23000000u; UPD(0x0C0909C6u, 1);  /* 0C0909C4 mov.l @(disp,pc),Rn */
	r6 |= r13;  /* 0C0909C6 or Rm,Rn */
	W32(r3, r6); UPD(0x0C0909CAu, 2);  /* 0C0909C8 mov.l Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0909CCu, 1);  /* 0C0909CA mov.w @(disp,pc),Rn */
	IF(0x0C0909CCu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0909CEu, 1);  /* 0C0909CC mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C0909CE add #imm,Rn */
	{ IF(0x0C0909D2u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C090622u, 4); goto L_0C090622; }  /* 0C0909D0 bra */
}

void f_0C0909E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0909E0;
L_0C090624: BLKS(0x0C090624u);
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C0909E0: BLKS(0x0C0909E0u);
	r10 = R32(r14); UPD(0x0C0909E2u, 1);  /* 0C0909E0 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C0909E4u, 1);  /* 0C0909E2 mov.w @(disp,pc),Rn */
	IF(0x0C0909E4u); MACL = r10 * r4;  /* 0C0909E4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0909E8u, 3);  /* 0C0909E6 mov.l @(disp,pc),Rn */
	IF(0x0C0909E8u); r2 = MACL;  /* 0C0909E8 sts macl,Rn */
	r12 = 0xA0u; UPD(0x0C0909ECu, 2);  /* 0C0909EA mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0909EC add Rm,Rn */
	r2 += r12;  /* 0C0909EE add Rm,Rn */
	r3 = r2;  /* 0C0909F0 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0909F2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0909F6u, 5);  /* 0C0909F4 mov.b @Rm,Rn */
	r0 |= 0xFu;  /* 0C0909F6 or #imm,r0 */
	W8(r3, r0); UPD(0x0C0909FAu, 2);  /* 0C0909F8 mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0909FCu, 1);  /* 0C0909FA mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0909FC add #imm,Rn */
	W8(r2, r9); UPD(0x0C090A00u, 2);  /* 0C0909FE mov.b Rm,@Rn */
	{ r3 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C090624u, 3); goto L_0C090624; }  /* 0C090A00 bra */
}

void f_0C090A10(sh3_t *c)
{
	LOCALS;
	goto L_0C090A10;
L_0C090624: BLKS(0x0C090624u);
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C0909FC: BLKS(0x0C0909FCu);
	r9 += 0x1u;  /* 0C0909FC add #imm,Rn */
	W8(r2, r9); UPD(0x0C090A00u, 2);  /* 0C0909FE mov.b Rm,@Rn */
L_0C090A00: BLKS(0x0C090A00u);
	{ r3 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C090624u, 3); goto L_0C090624; }  /* 0C090A00 bra */
L_0C090A10: BLKS(0x0C090A10u);
	r7 = 0xB4u; UPD(0x0C090A12u, 1);  /* 0C090A10 mov.w @(disp,pc),Rn */
	r8 = R32(r14); UPD(0x0C090A14u, 1);  /* 0C090A12 mov.l @Rm,Rn */
	IF(0x0C090A14u); MACL = r8 * r7;  /* 0C090A14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090A18u, 3);  /* 0C090A16 mov.l @(disp,pc),Rn */
	r0 = 0xA0u; UPD(0x0C090A1Au, 1);  /* 0C090A18 mov.w @(disp,pc),Rn */
	IF(0x0C090A1Au); r2 = MACL;  /* 0C090A1A sts macl,Rn */
	r2 += r11;  /* 0C090A1C add Rm,Rn */
	r2 += r0;  /* 0C090A1E add Rm,Rn */
	r2 += 0x1u;  /* 0C090A20 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C090A24u, 5);  /* 0C090A22 mov.b @Rm,Rn */
	r0 &= 0xFu;  /* 0C090A24 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C090A26 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C090A00u, 5); goto L_0C090A00; } goto L_0C090A2C; }  /* 0C090A28 bf/s */
L_0C090A2C: BLKS(0x0C090A2Cu);
	{ r9 = (u32)(s32)(s8)R8(r2); /* slot mov.b @Rm,Rn */ UPD(0x0C0909FCu, 4); goto L_0C0909FC; }  /* 0C090A2C bra */
}

void f_0C090A30(sh3_t *c)
{
	LOCALS;
	goto L_0C090A30;
L_0C090622: BLKS(0x0C090622u);
	r3 = R32(r14); UPD(0x0C090624u, 1);  /* 0C090622 mov.l @Rm,Rn */
	r6 = 0x5u;  /* 0C090624 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C090628u, 2);  /* 0C090626 mov.w @(disp,pc),Rn */
	IF(0x0C090628u); MACL = r3 * r12;  /* 0C090628 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09062Cu, 3);  /* 0C09062A mov.l @(disp,pc),Rn */
	IF(0x0C09062Cu); r8 = MACL;  /* 0C09062C sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C090630u, 2);  /* 0C09062E mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C090630 add Rm,Rn */
	r9 += r8;  /* 0C090632 add Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C090636u, 3);  /* 0C090634 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C090638u, 1);  /* 0C090636 mov.b @Rm,Rn */
	r7 = 0xC1C2CFCu; UPD(0x0C09063Au, 1);  /* 0C090638 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09063Cu, 1);  /* 0C09063A mov.l @Rm,Rn */
	IF(0x0C09063Cu); { u32 t_ = r11; PR = 0x0C090640u; IF(0x0C09063Eu); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090640u); }  /* 0C09063C jsr @Rn */
L_0C090640: BLKS(0x0C090640u);
	T = (r0 & r0) == 0;  /* 0C090640 tst Rm,Rn */
	if (!T) { UPD(0x0C09064Cu, 4); goto L_0C09064C; }  /* 0C090642 bf */
L_0C090644: BLKS(0x0C090644u);
	r13 = 0xFFFFE90Cu; UPD(0x0C090646u, 1);  /* 0C090644 mov.w @(disp,pc),Rn */
	IF(0x0C090646u); { u32 tv_ = (r13 + 0x0C09064Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090646 braf Rn */
L_0C09064C: BLKS(0x0C09064Cu);
	r13 = 0xC058090u; UPD(0x0C09064Eu, 1);  /* 0C09064C mov.l @(disp,pc),Rn */
	IF(0x0C09064Eu); { u32 t_ = r13; PR = 0x0C090652u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C090652u); }  /* 0C09064E jsr @Rn */
L_0C090652: BLKS(0x0C090652u);
	r4 = 0x280u; UPD(0x0C090654u, 1);  /* 0C090652 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C090654 exts.w Rm,Rn */
	IF(0x0C090656u); MACL = r7 * r4;  /* 0C090656 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09065Au, 4);  /* 0C090658 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09065Cu, 1);  /* 0C09065A mov.l @(disp,pc),Rn */
	IF(0x0C09065Cu); r12 = MACL;  /* 0C09065C sts macl,Rn */
	r12 += r5;  /* 0C09065E add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C090662u, 3);  /* 0C090660 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C090664u, 1);  /* 0C090662 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C090666u, 1);  /* 0C090664 mov.l @(disp,Rm),Rn */
	IF(0x0C090666u); { u32 t_ = r11; PR = 0x0C09066Au; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09066Au); }  /* 0C090666 jsr @Rn */
L_0C09066A: BLKS(0x0C09066Au);
	r1 = (u32)(s32)(s16)r0;  /* 0C09066A exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09066Eu, 2);  /* 0C09066C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09066E add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C090672u, 2);  /* 0C090670 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C090672 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C090676u, 2);  /* 0C090674 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C090676 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09067Au, 2);  /* 0C090678 mov.b @Rm,Rn */
	r10 = 0xC1C2D04u; UPD(0x0C09067Cu, 1);  /* 0C09067A mov.l @(disp,pc),Rn */
	IF(0x0C09067Cu); r0 <<= 2;  /* 0C09067C shll2 Rn */
	IF(0x0C09067Eu); r9 = R32(r0 + r10); UPD(0x0C090680u, 2);  /* 0C09067E mov.l @(r0,Rm),Rn */
	r6 = 0xC177A92u; UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090684u, 1);  /* 0C090682 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C090686u, 1);  /* 0C090684 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C090688u, 1);  /* 0C090686 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C09068Au, 1);  /* 0C090688 mov.l @(disp,Rm),Rn */
	IF(0x0C09068Au); { u32 t_ = r13; PR = 0x0C09068Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09068Eu); }  /* 0C09068A jsr @Rn */
L_0C09068E: BLKS(0x0C09068Eu);
	r13 = 0xFFFFEE98u; UPD(0x0C090690u, 1);  /* 0C09068E mov.w @(disp,pc),Rn */
	IF(0x0C090690u); { u32 tv_ = (r13 + 0x0C090694u); u32 t_ = PHYS(tv_); IF(0x0C090692u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090690 braf Rn */
L_0C0909CC: BLKS(0x0C0909CCu);
	IF(0x0C0909CCu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0909CEu, 1);  /* 0C0909CC mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C0909CE add #imm,Rn */
	{ IF(0x0C0909D2u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C090622u, 4); goto L_0C090622; }  /* 0C0909D0 bra */
L_0C090A30: BLKS(0x0C090A30u);
	r5 = 0xB4u; UPD(0x0C090A32u, 1);  /* 0C090A30 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C090A32 mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C090A36u, 2);  /* 0C090A34 mov.l @Rm,Rn */
	IF(0x0C090A36u); MACL = r1 * r5;  /* 0C090A36 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090A3Au, 3);  /* 0C090A38 mov.l @(disp,pc),Rn */
	IF(0x0C090A3Au); r3 = MACL;  /* 0C090A3A sts macl,Rn */
	IF(0x0C090A3Cu); MACL = r9 * r5;  /* 0C090A3C mul.l Rm,Rn */
	r3 += r12;  /* 0C090A3E add Rm,Rn */
	r4 = R32(r3); UPD(0x0C090A42u, 5);  /* 0C090A40 mov.l @Rm,Rn */
	IF(0x0C090A42u); r13 = MACL;  /* 0C090A42 sts macl,Rn */
	r0 = 0x13000000u; UPD(0x0C090A46u, 2);  /* 0C090A44 mov.l @(disp,pc),Rn */
	r13 += r12;  /* 0C090A46 add Rm,Rn */
	r4 |= r0;  /* 0C090A48 or Rm,Rn */
	r13 += 0x50u;  /* 0C090A4A add #imm,Rn */
	r6 = R32(r13); UPD(0x0C090A4Eu, 4);  /* 0C090A4C mov.l @Rm,Rn */
	r0 = 0xA0u; UPD(0x0C090A50u, 1);  /* 0C090A4E mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C090A50 add #imm,Rn */
	r10 = 0xDFFFFFFFu; UPD(0x0C090A54u, 2);  /* 0C090A52 mov.l @(disp,pc),Rn */
	IF(0x0C090A54u); W8(r0 + r3, r2); UPD(0x0C090A56u, 1);  /* 0C090A54 mov.b Rm,@(r0,Rn) */
	r4 &= r10;  /* 0C090A56 and Rm,Rn */
	W32(r3, r4); UPD(0x0C090A5Au, 2);  /* 0C090A58 mov.l Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C090A5A add #imm,Rn */
	{ W32(r13, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0909CCu, 4); goto L_0C0909CC; }  /* 0C090A5C bra */
}

void f_0C090A60(sh3_t *c)
{
	LOCALS;
L_0C090A60: BLKS(0x0C090A60u);
	r8 = 0xC0A03F0u; UPD(0x0C090A62u, 1);  /* 0C090A60 mov.l @(disp,pc),Rn */
	IF(0x0C090A62u); { u32 t_ = r8; PR = 0x0C090A66u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C090A66u); }  /* 0C090A62 jsr @Rn */
L_0C090A66: BLKS(0x0C090A66u);
	IF(0x0C090A66u); T = (s32)r0 >= 0;  /* 0C090A66 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090AFCu, 4); goto L_0C090AFC; } goto L_0C090A6C; }  /* 0C090A68 bf/s */
L_0C090A6C: BLKS(0x0C090A6Cu);
	r2 = 0xB4u; UPD(0x0C090A6Eu, 2);  /* 0C090A6C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C090A70u, 1);  /* 0C090A6E mov.l @Rm,Rn */
	IF(0x0C090A70u); MACL = r0 * r2;  /* 0C090A70 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C090A74u, 3);  /* 0C090A72 mov.l @(disp,pc),Rn */
	IF(0x0C090A74u); r0 = MACL;  /* 0C090A74 sts macl,Rn */
	IF(0x0C090A76u); MACL = r9 * r2;  /* 0C090A76 mul.l Rm,Rn */
	r0 += r10;  /* 0C090A78 add Rm,Rn */
	r4 = R32(r0); UPD(0x0C090A7Cu, 5);  /* 0C090A7A mov.l @Rm,Rn */
	IF(0x0C090A7Cu); r6 = MACL;  /* 0C090A7C sts macl,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C090A80u, 2);  /* 0C090A7E mov.w @(disp,pc),Rn */
	r6 += r10;  /* 0C090A80 add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C090A84u, 2);  /* 0C090A82 mov.l @(disp,Rm),Rn */
	r4 &= r13;  /* 0C090A84 and Rm,Rn */
	r9 = R32(r0 + 0x2Cu); UPD(0x0C090A88u, 2);  /* 0C090A86 mov.l @(disp,Rm),Rn */
	W32(r0, r4); UPD(0x0C090A8Au, 1);  /* 0C090A88 mov.l Rm,@Rn */
	r3 += r9;  /* 0C090A8A add Rm,Rn */
	r5 = 0xA8u; UPD(0x0C090A8Eu, 2);  /* 0C090A8C mov.w @(disp,pc),Rn */
	r9 = r0;  /* 0C090A8E mov Rm,Rn */
	r7 = R32(r6); UPD(0x0C090A92u, 2);  /* 0C090A90 mov.l @Rm,Rn */
	r9 += r5;  /* 0C090A92 add Rm,Rn */
	r12 = 0x100u; UPD(0x0C090A96u, 2);  /* 0C090A94 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C090A96 add Rm,Rn */
	r7 &= r12;  /* 0C090A98 and Rm,Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C090A9Cu, 3);  /* 0C090A9A mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C090A9C add #imm,Rn */
	r12 += 0xFFFFFFAFu;  /* 0C090A9E add #imm,Rn */
	r8 = R32(r6 + 0x28u); UPD(0x0C090AA2u, 3);  /* 0C090AA0 mov.l @(disp,Rm),Rn */
	r4 |= r7;  /* 0C090AA2 or Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C090AA6u, 2);  /* 0C090AA4 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C090AA6 add #imm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C090AAAu, 2);  /* 0C090AA8 mov.l @(disp,Rm),Rn */
	IF(0x0C090AAAu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C090AACu, 1);  /* 0C090AAA mov.b @(r0,Rm),Rn */
	r8 += r1;  /* 0C090AAC add Rm,Rn */
	r3 = R32(r6 + 0x38u); UPD(0x0C090AB0u, 2);  /* 0C090AAE mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C090AB0 add Rm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C090AB4u, 2);  /* 0C090AB2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r8); UPD(0x0C090AB6u, 1);  /* 0C090AB4 mov.l Rm,@(disp,Rn) */
	W32(r0, r4); UPD(0x0C090AB8u, 1);  /* 0C090AB6 mov.l Rm,@Rn */
	W8(r9, r10); UPD(0x0C090ABAu, 1);  /* 0C090AB8 mov.b Rm,@Rn */
	W32(r0 + 0x38u, r3); UPD(0x0C090ABCu, 1);  /* 0C090ABA mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFE962u; UPD(0x0C090ABEu, 1);  /* 0C090ABC mov.w @(disp,pc),Rn */
	IF(0x0C090ABEu); { u32 tv_ = (r4 + 0x0C090AC2u); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090ABE braf Rn */
L_0C090AFC: BLKS(0x0C090AFCu);
	r4 = 0xFFFFE7A0u; UPD(0x0C090AFEu, 1);  /* 0C090AFC mov.w @(disp,pc),Rn */
	IF(0x0C090AFEu); { u32 tv_ = (r4 + 0x0C090B02u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090AFE braf Rn */
}

void f_0C090AF0(sh3_t *c)
{
	LOCALS;
L_0C090AF0: BLKS(0x0C090AF0u);
	r11 = 0xC0A0540u; UPD(0x0C090AF2u, 1);  /* 0C090AF0 mov.l @(disp,pc),Rn */
	IF(0x0C090AF2u); { u32 t_ = r11; PR = 0x0C090AF6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090AF6u); }  /* 0C090AF2 jsr @Rn */
L_0C090AF6: BLKS(0x0C090AF6u);
	IF(0x0C090AF6u); T = (s32)r0 >= 0;  /* 0C090AF6 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090B04u, 4); goto L_0C090B04; } goto L_0C090AFC; }  /* 0C090AF8 bt/s */
L_0C090AFC: BLKS(0x0C090AFCu);
	r4 = 0xFFFFE7A0u; UPD(0x0C090AFEu, 2);  /* 0C090AFC mov.w @(disp,pc),Rn */
	IF(0x0C090AFEu); { u32 tv_ = (r4 + 0x0C090B02u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090AFE braf Rn */
L_0C090B04: BLKS(0x0C090B04u);
	r5 = 0xB4u; UPD(0x0C090B06u, 1);  /* 0C090B04 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C090B08u, 1);  /* 0C090B06 mov.l @Rm,Rn */
	IF(0x0C090B08u); MACL = r13 * r5;  /* 0C090B08 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C090B0Cu, 3);  /* 0C090B0A mov.l @(disp,pc),Rn */
	IF(0x0C090B0Cu); r0 = MACL;  /* 0C090B0C sts macl,Rn */
	IF(0x0C090B0Eu); MACL = r9 * r5;  /* 0C090B0E mul.l Rm,Rn */
	r0 += r7;  /* 0C090B10 add Rm,Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C090B14u, 5);  /* 0C090B12 mov.l @(disp,Rm),Rn */
	IF(0x0C090B14u); r5 = MACL;  /* 0C090B14 sts macl,Rn */
	r5 += r7;  /* 0C090B16 add Rm,Rn */
	r12 = R32(r5 + 0x24u); UPD(0x0C090B1Au, 3);  /* 0C090B18 mov.l @(disp,Rm),Rn */
	r9 = R32(r0); UPD(0x0C090B1Cu, 1);  /* 0C090B1A mov.l @Rm,Rn */
	r12 += r4;  /* 0C090B1C add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C090B20u, 2);  /* 0C090B1E mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C090B20 mov Rm,Rn */
	r3 = 0xA8u; UPD(0x0C090B24u, 2);  /* 0C090B22 mov.w @(disp,pc),Rn */
	r9 &= r2;  /* 0C090B24 and Rm,Rn */
	W32(r0, r9); UPD(0x0C090B28u, 2);  /* 0C090B26 mov.l Rm,@Rn */
	r4 += r3;  /* 0C090B28 add Rm,Rn */
	r3 += r5;  /* 0C090B2A add Rm,Rn */
	r8 = 0xAFu; UPD(0x0C090B2Eu, 3);  /* 0C090B2C mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C090B2E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C090B32u, 2);  /* 0C090B30 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C090B32 add #imm,Rn */
	W32(r0 + 0x24u, r12); UPD(0x0C090B36u, 2);  /* 0C090B34 mov.l Rm,@(disp,Rn) */
	r1 = 0x13000100u; UPD(0x0C090B38u, 1);  /* 0C090B36 mov.l @(disp,pc),Rn */
	r11 = R32(r5 + 0x28u); UPD(0x0C090B3Au, 1);  /* 0C090B38 mov.l @(disp,Rm),Rn */
	r10 &= r1;  /* 0C090B3A and Rm,Rn */
	r6 = R32(r0 + 0x30u); UPD(0x0C090B3Eu, 2);  /* 0C090B3C mov.l @(disp,Rm),Rn */
	r9 |= r10;  /* 0C090B3E or Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C090B42u, 2);  /* 0C090B40 mov.b @Rm,Rn */
	r11 += r6;  /* 0C090B42 add Rm,Rn */
	IF(0x0C090B44u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C090B46u, 2);  /* 0C090B44 mov.b @(r0,Rm),Rn */
	r6 = 0x17u;  /* 0C090B46 mov #imm,Rn */
	r12 = R32(r5 + 0x38u); UPD(0x0C090B4Au, 2);  /* 0C090B48 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C090B4A add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C090B4Eu, 2);  /* 0C090B4C mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r11); UPD(0x0C090B50u, 1);  /* 0C090B4E mov.l Rm,@(disp,Rn) */
	T = r2 > r6;  /* 0C090B50 cmp/hi Rm,Rn */
	W32(r0, r9); UPD(0x0C090B54u, 2);  /* 0C090B52 mov.l Rm,@Rn */
	W8(r4, r7); UPD(0x0C090B56u, 1);  /* 0C090B54 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r0 + 0x38u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090BF0u, 3); goto L_0C090BF0; } UPD(0x0C090B5Au, 1); goto L_0C090B5A; }  /* 0C090B56 bt/s */
L_0C090B5A: BLKS(0x0C090B5Au);
	r0 = 0xC090B7Cu;  /* 0C090B5A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C090B5C add Rm,Rn */
	IF(0x0C090B5Eu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C090B60u, 3);  /* 0C090B5E mov.w @(r0,Rm),Rn */
	IF(0x0C090B60u); { u32 tv_ = (r8 + 0x0C090B64u); u32 t_ = PHYS(tv_); IF(0x0C090B62u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090B60 braf Rn */
L_0C090BF0: BLKS(0x0C090BF0u);
	r7 = R32(r14); UPD(0x0C090BF2u, 1);  /* 0C090BF0 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C090BF4u, 1);  /* 0C090BF2 mov.w @(disp,pc),Rn */
	IF(0x0C090BF4u); MACL = r7 * r4;  /* 0C090BF4 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090BF8u, 3);  /* 0C090BF6 mov.l @(disp,pc),Rn */
	IF(0x0C090BF8u); r8 = MACL;  /* 0C090BF8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C090BFCu, 2);  /* 0C090BFA mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C090BFC add Rm,Rn */
	r2 += r8;  /* 0C090BFE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C090C02u, 3);  /* 0C090C00 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C090C02 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C090C04 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C090C06 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090C5Au, 6); goto L_0C090C5A; } UPD(0x0C090C0Cu, 1); goto L_0C090C0C; }  /* 0C090C08 bf/s */
L_0C090C0C: BLKS(0x0C090C0Cu);
	r0 = 0x0u;  /* 0C090C0C mov #imm,Rn */
	W8(r2, r0); UPD(0x0C090C10u, 2);  /* 0C090C0E mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C090C12u, 1);  /* 0C090C10 mov.w @(disp,pc),Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C090C14u, 1);  /* 0C090C12 mov.l @(disp,Rm),Rn */
	IF(0x0C090C14u); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C090C16u, 1);  /* 0C090C14 mov.w @(r0,Rm),Rn */
	r13 = 0xC0A0380u; UPD(0x0C090C18u, 1);  /* 0C090C16 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C090C18 add Rm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C090C1Cu, 2);  /* 0C090C1A mov.l Rm,@(disp,Rn) */
	IF(0x0C090C1Cu); { u32 t_ = r13; PR = 0x0C090C20u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090C20u); }  /* 0C090C1C jsr @Rn */
L_0C090C20: BLKS(0x0C090C20u);
	r5 = R32(r8 + 0xCu); UPD(0x0C090C22u, 1);  /* 0C090C20 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C090C22 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090C32u, 4); goto L_0C090C32; } UPD(0x0C090C28u, 1); goto L_0C090C28; }  /* 0C090C24 bf/s */
L_0C090C28: BLKS(0x0C090C28u);
	r3 = R32(r8); UPD(0x0C090C2Au, 1);  /* 0C090C28 mov.l @Rm,Rn */
	r11 = 0x4000u; UPD(0x0C090C2Cu, 1);  /* 0C090C2A mov.w @(disp,pc),Rn */
	r3 |= r11;  /* 0C090C2C or Rm,Rn */
	W32(r8, r3); UPD(0x0C090C30u, 2);  /* 0C090C2E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C090C32u, 1);  /* 0C090C30 mov.l @Rm,Rn */
L_0C090C32: BLKS(0x0C090C32u);
	r4 = 0xB4u; UPD(0x0C090C34u, 1);  /* 0C090C32 mov.w @(disp,pc),Rn */
	IF(0x0C090C34u); MACL = r1 * r4;  /* 0C090C34 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090C38u, 3);  /* 0C090C36 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C090C3Au, 1);  /* 0C090C38 mov.w @(disp,pc),Rn */
	IF(0x0C090C3Au); r3 = MACL;  /* 0C090C3A sts macl,Rn */
	r3 += r12;  /* 0C090C3C add Rm,Rn */
	IF(0x0C090C3Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C090C40u, 3);  /* 0C090C3E mov.b @(r0,Rm),Rn */
	r8 = 0xF0u; UPD(0x0C090C42u, 1);  /* 0C090C40 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C090C42 add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C090C44 extu.b Rm,Rn */
	T = r2 == r8;  /* 0C090C46 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C090C4Au); W8(r0 + r3, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C090C80u, 6); goto L_0C090C80; } UPD(0x0C090C4Cu, 1); goto L_0C090C4C; }  /* 0C090C48 bt/s */
L_0C090C4C: BLKS(0x0C090C4Cu);
	r10 = 0xC0A9E40u; UPD(0x0C090C4Eu, 1);  /* 0C090C4C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C090C4E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090C52u, 2);  /* 0C090C50 mov.l @Rm,Rn */
	IF(0x0C090C52u); { u32 t_ = r10; PR = 0x0C090C56u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090C56u); }  /* 0C090C52 jsr @Rn */
L_0C090C56: BLKS(0x0C090C56u);
	T = (r0 & r0) == 0;  /* 0C090C56 tst Rm,Rn */
	if (!T) { UPD(0x0C090C62u, 4); goto L_0C090C62; }  /* 0C090C58 bf */
L_0C090C5A: BLKS(0x0C090C5Au);
	r13 = 0xFFFFE2F6u; UPD(0x0C090C5Cu, 1);  /* 0C090C5A mov.w @(disp,pc),Rn */
	IF(0x0C090C5Cu); { u32 tv_ = (r13 + 0x0C090C60u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C5C braf Rn */
L_0C090C62: BLKS(0x0C090C62u);
	r3 = R32(r14); UPD(0x0C090C64u, 1);  /* 0C090C62 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C090C66u, 1);  /* 0C090C64 mov.w @(disp,pc),Rn */
	r4 = r3;  /* 0C090C66 mov Rm,Rn */
	IF(0x0C090C68u); MACL = r3 * r2;  /* 0C090C68 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C090C6Cu, 4);  /* 0C090C6A mov.l @(disp,pc),Rn */
	IF(0x0C090C6Cu); r0 = MACL;  /* 0C090C6C sts macl,Rn */
	r0 += r8;  /* 0C090C6E add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C090C72u, 3);  /* 0C090C70 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C090C72 add #imm,Rn */
	r1 = 0xFFFFE7ACu; UPD(0x0C090C76u, 2);  /* 0C090C74 mov.w @(disp,pc),Rn */
	IF(0x0C090C76u); { u32 tv_ = (r1 + 0x0C090C7Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C76 braf Rn */
L_0C090C80: BLKS(0x0C090C80u);
	r9 = 0x0u;  /* 0C090C80 mov #imm,Rn */
	IF(0x0C090C82u); W8(r0 + r3, r9); UPD(0x0C090C84u, 2);  /* 0C090C82 mov.b Rm,@(r0,Rn) */
	r13 = 0xFFFFFFFFu;  /* 0C090C84 mov #imm,Rn */
	r5 = R32(r3 + 0xCu); UPD(0x0C090C88u, 2);  /* 0C090C86 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C090C88 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C090C8Cu, 2);  /* 0C090C8A mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C090C8C add #imm,Rn */
	IF(0x0C090C8Eu); W16(r0 + r3, r13); UPD(0x0C090C90u, 2);  /* 0C090C8E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C090C92u, 1);  /* 0C090C90 mov.l Rm,@(disp,Rn) */
	IF(0x0C090C92u); { u32 t_ = r7; PR = 0x0C090C96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090C96u); }  /* 0C090C92 jsr @Rn */
L_0C090C96: BLKS(0x0C090C96u);
	{ IF(0x0C090C98u); ; /* slot nop */ UPD(0x0C090C4Cu, 3); goto L_0C090C4C; }  /* 0C090C96 bra */
}


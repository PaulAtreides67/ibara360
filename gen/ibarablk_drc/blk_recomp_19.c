#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0a8bf0 */
void blk_f_0C0A8BF0(sh3_t *c)
{
	LOCALS;
L_0C0A8BF0: BLKS(0x0C0A8BF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8BF2u, 1);  /* 0C0A8BF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8BF4u, 1);  /* 0C0A8BF2 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0A8BF4 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0A8BF8u, 2);  /* 0C0A8BF6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A8BF8 exts.w Rm,Rn */
	IF(0x0C0A8BFAu); MACL = r9 * r6;  /* 0C0A8BFA mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8BFEu, 4);  /* 0C0A8BFC mov.l Rm,@-Rn */
	r7 = r9;  /* 0C0A8BFE mov Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A8C02u, 2);  /* 0C0A8C00 mov.l @(disp,pc),Rn */
	IF(0x0C0A8C02u); r2 = MACL;  /* 0C0A8C02 sts macl,Rn */
	r10 = 0x80u; UPD(0x0C0A8C06u, 2);  /* 0C0A8C04 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0A8C06 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C0Au, 2);  /* 0C0A8C08 mov.l Rm,@-Rn */
	r2 += r10;  /* 0C0A8C0A add Rm,Rn */
	r2 += 0x2u;  /* 0C0A8C0C add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A8C10u, 3);  /* 0C0A8C0E mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A8C10 mov Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A8C12 extu.w Rm,Rn */
	IF(0x0C0A8C14u); MACL = r7 * r6;  /* 0C0A8C14 mul.l Rm,Rn */
	IF(0x0C0A8C16u); r0 = MACL;  /* 0C0A8C16 sts macl,Rn */
	UPD(0x0C0A8C18u, 5);
L_0C0A8C18: BLKS(0x0C0A8C18u);
	r0 += r5;  /* 0C0A8C18 add Rm,Rn */
	r0 += 0x7Cu;  /* 0C0A8C1A add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A8C1Eu, 3);  /* 0C0A8C1C mov.w @Rm,Rn */
	IF(0x0C0A8C1Eu); MACL = r7 * r6;  /* 0C0A8C1E mul.l Rm,Rn */
	IF(0x0C0A8C20u); r1 = MACL;  /* 0C0A8C20 sts macl,Rn */
	r1 += r5;  /* 0C0A8C22 add Rm,Rn */
	r3 = R32(r1); UPD(0x0C0A8C26u, 5);  /* 0C0A8C24 mov.l @Rm,Rn */
	r1 += r10;  /* 0C0A8C26 add Rm,Rn */
	r1 += 0x2u;  /* 0C0A8C28 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A8C2Cu, 3);  /* 0C0A8C2A mov.w @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A8C2C tst Rm,Rn */
	IF(0x0C0A8C2Eu); r2 = T;  /* 0C0A8C2E movt Rn */
	r1 = r1 & 0xFFFF;  /* 0C0A8C30 extu.w Rm,Rn */
	T = r1 == r4;  /* 0C0A8C32 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0A8C34 negc Rm,Rn */
	r1 |= r2;  /* 0C0A8C36 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A8C38 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8C7Eu, 10); goto L_0C0A8C7E; } goto L_0C0A8C3E; }  /* 0C0A8C3A bf/s */
L_0C0A8C3E: BLKS(0x0C0A8C3Eu);
	r2 = 0x4000u; UPD(0x0C0A8C40u, 2);  /* 0C0A8C3E mov.w @(disp,pc),Rn */
	T = (r3 & r2) == 0;  /* 0C0A8C40 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0A8C44u); r0 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0A8C18u, 4); goto L_0C0A8C18; } goto L_0C0A8C46; }  /* 0C0A8C42 bf/s */
L_0C0A8C46: BLKS(0x0C0A8C46u);
	r6 = 0xC286578u; UPD(0x0C0A8C48u, 2);  /* 0C0A8C46 mov.l @(disp,pc),Rn */
	IF(0x0C0A8C48u); r3 = MACL;  /* 0C0A8C48 sts macl,Rn */
	r3 += r6;  /* 0C0A8C4A add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0A8C4C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8C50u, 4);  /* 0C0A8C4E mov.w @Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C0A8C50 mov #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C0A8C52 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A8C7Eu, 5); goto L_0C0A8C7E; } goto L_0C0A8C58; }  /* 0C0A8C54 bt/s */
L_0C0A8C58: BLKS(0x0C0A8C58u);
	r7 = 0xB4u; UPD(0x0C0A8C5Au, 2);  /* 0C0A8C58 mov.w @(disp,pc),Rn */
	IF(0x0C0A8C5Au); MACL = r9 * r7;  /* 0C0A8C5A mul.l Rm,Rn */
	IF(0x0C0A8C5Cu); r7 = MACL;  /* 0C0A8C5C sts macl,Rn */
	r7 += r6;  /* 0C0A8C5E add Rm,Rn */
	r5 = R32(r7); UPD(0x0C0A8C62u, 5);  /* 0C0A8C60 mov.l @Rm,Rn */
	T = (r5 & r2) == 0;  /* 0C0A8C62 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x48u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A8C78u, 4); goto L_0C0A8C78; } goto L_0C0A8C68; }  /* 0C0A8C64 bt/s */
L_0C0A8C68: BLKS(0x0C0A8C68u);
	r9 = R32(r3); UPD(0x0C0A8C6Au, 2);  /* 0C0A8C68 mov.l @Rm,Rn */
	r8 = r7;  /* 0C0A8C6A mov Rm,Rn */
	r0 = 0x84u; UPD(0x0C0A8C6Eu, 2);  /* 0C0A8C6C mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFB8u;  /* 0C0A8C6E add #imm,Rn */
	IF(0x0C0A8C70u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A8C72u, 2);  /* 0C0A8C70 mov.b @(r0,Rm),Rn */
	r8 += 0x48u;  /* 0C0A8C72 add #imm,Rn */
	W32(r8, r9); UPD(0x0C0A8C76u, 2);  /* 0C0A8C74 mov.l Rm,@Rn */
	IF(0x0C0A8C76u); W8(r0 + r7, r6); UPD(0x0C0A8C78u, 1);  /* 0C0A8C76 mov.b Rm,@(r0,Rn) */
L_0C0A8C78: BLKS(0x0C0A8C78u);
	r3 = r7;  /* 0C0A8C78 mov Rm,Rn */
	r3 += 0x7Cu;  /* 0C0A8C7A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8C7Eu, 3);  /* 0C0A8C7C mov.w @Rm,Rn */
L_0C0A8C7E: BLKS(0x0C0A8C7Eu);
	r15 = r14;  /* 0C0A8C7E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8C82u, 2);  /* 0C0A8C80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8C84u, 1);  /* 0C0A8C82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8C86u, 1);  /* 0C0A8C84 mov.l @Rm+,Rn */
	IF(0x0C0A8C86u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8C86 rts */
}

/* FUN_0c0a8ca0 */
void blk_f_0C0A8CA0(sh3_t *c)
{
	LOCALS;
L_0C0A8CA0: BLKS(0x0C0A8CA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8CA2u, 1);  /* 0C0A8CA0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8CA4u, 1);  /* 0C0A8CA2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A8CA4 exts.w Rm,Rn */
	r0 = 0xC0A8B50u; UPD(0x0C0A8CA8u, 2);  /* 0C0A8CA6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A8CA8 mov Rm,Rn */
	IF(0x0C0A8CAAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A8CACu, 2);  /* 0C0A8CAA sts.l pr,@-Rn */
	IF(0x0C0A8CACu); { u32 t_ = r0; PR = 0x0C0A8CB0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A8CB0u); }  /* 0C0A8CAC jsr @Rn */
L_0C0A8CB0: BLKS(0x0C0A8CB0u);
	IF(0x0C0A8CB0u); T = (s32)r0 >= 0;  /* 0C0A8CB0 cmp/pz Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8D12u, 4); goto L_0C0A8D12; } goto L_0C0A8CB6; }  /* 0C0A8CB2 bf/s */
L_0C0A8CB6: BLKS(0x0C0A8CB6u);
	r6 = 0xB4u; UPD(0x0C0A8CB8u, 2);  /* 0C0A8CB6 mov.w @(disp,pc),Rn */
	IF(0x0C0A8CB8u); MACL = r8 * r6;  /* 0C0A8CB8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A8CBCu, 3);  /* 0C0A8CBA mov.l @(disp,pc),Rn */
	IF(0x0C0A8CBCu); r7 = MACL;  /* 0C0A8CBC sts macl,Rn */
	r7 += r0;  /* 0C0A8CBE add Rm,Rn */
	r4 = r7;  /* 0C0A8CC0 mov Rm,Rn */
	r7 += 0x7Eu;  /* 0C0A8CC2 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A8CC6u, 5);  /* 0C0A8CC4 mov.w @Rm,Rn */
	r4 += 0x7Cu;  /* 0C0A8CC6 add #imm,Rn */
	IF(0x0C0A8CC8u); MACL = r2 * r6;  /* 0C0A8CC8 mul.l Rm,Rn */
	r8 = 0x80u; UPD(0x0C0A8CCCu, 4);  /* 0C0A8CCA mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFF82u;  /* 0C0A8CCC add #imm,Rn */
	IF(0x0C0A8CCEu); r6 = MACL;  /* 0C0A8CCE sts macl,Rn */
	r6 += r0;  /* 0C0A8CD0 add Rm,Rn */
	r1 = r6;  /* 0C0A8CD2 mov Rm,Rn */
	r1 += r8;  /* 0C0A8CD4 add Rm,Rn */
	r5 = R32(r6); UPD(0x0C0A8CD8u, 6);  /* 0C0A8CD6 mov.l @Rm,Rn */
	r8 += r7;  /* 0C0A8CD8 add Rm,Rn */
	r1 += 0x2u;  /* 0C0A8CDA add #imm,Rn */
	r8 += 0x2u;  /* 0C0A8CDC add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A8CDE tst Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A8CE2u, 5);  /* 0C0A8CE0 mov.w @Rm,Rn */
	IF(0x0C0A8CE2u); r5 = T;  /* 0C0A8CE2 movt Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A8CE6u, 2);  /* 0C0A8CE4 mov.w @Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0A8CE6 mov #imm,Rn */
	T = r3 == r0;  /* 0C0A8CE8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0A8CEA negc Rm,Rn */
	r0 |= r5;  /* 0C0A8CEC or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A8CEE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8D12u, 8); goto L_0C0A8D12; } goto L_0C0A8CF4; }  /* 0C0A8CF0 bf/s */
L_0C0A8CF4: BLKS(0x0C0A8CF4u);
	r0 = 0x84u; UPD(0x0C0A8CF6u, 2);  /* 0C0A8CF4 mov.w @(disp,pc),Rn */
	r5 = r7;  /* 0C0A8CF6 mov Rm,Rn */
	r5 += r0;  /* 0C0A8CF8 add Rm,Rn */
	IF(0x0C0A8CFAu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A8CFCu, 3);  /* 0C0A8CFA mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A8CFEu, 1);  /* 0C0A8CFC mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C0A8CFE extu.b Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A8D00 extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C0A8D02 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0A8D10u, 6); goto L_0C0A8D10; }  /* 0C0A8D04 bt */
L_0C0A8D06: BLKS(0x0C0A8D06u);
	W8(r5, r3); UPD(0x0C0A8D08u, 1);  /* 0C0A8D06 mov.b Rm,@Rn */
	r6 += 0x48u;  /* 0C0A8D08 add #imm,Rn */
	r3 = R32(r6); UPD(0x0C0A8D0Cu, 2);  /* 0C0A8D0A mov.l @Rm,Rn */
	r7 += 0x48u;  /* 0C0A8D0C add #imm,Rn */
	W32(r7, r3); UPD(0x0C0A8D10u, 2);  /* 0C0A8D0E mov.l Rm,@Rn */
L_0C0A8D10: BLKS(0x0C0A8D10u);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A8D12u, 1);  /* 0C0A8D10 mov.w @Rm,Rn */
L_0C0A8D12: BLKS(0x0C0A8D12u);
	r15 = r14;  /* 0C0A8D12 mov Rm,Rn */
	IF(0x0C0A8D14u); PR = R32(r15); r15 += 4; UPD(0x0C0A8D16u, 2);  /* 0C0A8D14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8D18u, 1);  /* 0C0A8D16 mov.l @Rm+,Rn */
	IF(0x0C0A8D18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8D18 rts */
}

/* FUN_0c0a8d30 */
void blk_f_0C0A8D30(sh3_t *c)
{
	LOCALS;
L_0C0A8D30: BLKS(0x0C0A8D30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8D32u, 1);  /* 0C0A8D30 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8D34u, 1);  /* 0C0A8D32 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A8D34 exts.w Rm,Rn */
	r0 = 0xC0A8BF0u; UPD(0x0C0A8D38u, 2);  /* 0C0A8D36 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A8D38 mov Rm,Rn */
	IF(0x0C0A8D3Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A8D3Cu, 2);  /* 0C0A8D3A sts.l pr,@-Rn */
	IF(0x0C0A8D3Cu); { u32 t_ = r0; PR = 0x0C0A8D40u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C0A8D40u); }  /* 0C0A8D3C jsr @Rn */
L_0C0A8D40: BLKS(0x0C0A8D40u);
	IF(0x0C0A8D40u); T = (s32)r0 >= 0;  /* 0C0A8D40 cmp/pz Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8DAEu, 4); goto L_0C0A8DAE; } goto L_0C0A8D46; }  /* 0C0A8D42 bf/s */
L_0C0A8D46: BLKS(0x0C0A8D46u);
	r7 = 0xB4u; UPD(0x0C0A8D48u, 2);  /* 0C0A8D46 mov.w @(disp,pc),Rn */
	IF(0x0C0A8D48u); MACL = r8 * r7;  /* 0C0A8D48 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A8D4Cu, 3);  /* 0C0A8D4A mov.l @(disp,pc),Rn */
	IF(0x0C0A8D4Cu); r6 = MACL;  /* 0C0A8D4C sts macl,Rn */
	r6 += r5;  /* 0C0A8D4E add Rm,Rn */
	r4 = r6;  /* 0C0A8D50 mov Rm,Rn */
	r6 += 0x7Eu;  /* 0C0A8D52 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A8D56u, 5);  /* 0C0A8D54 mov.w @Rm,Rn */
	r4 += 0x7Cu;  /* 0C0A8D56 add #imm,Rn */
	IF(0x0C0A8D58u); MACL = r2 * r7;  /* 0C0A8D58 mul.l Rm,Rn */
	r8 = 0x80u; UPD(0x0C0A8D5Cu, 4);  /* 0C0A8D5A mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFF82u;  /* 0C0A8D5C add #imm,Rn */
	IF(0x0C0A8D5Eu); r7 = MACL;  /* 0C0A8D5E sts macl,Rn */
	r7 += r5;  /* 0C0A8D60 add Rm,Rn */
	r1 = r7;  /* 0C0A8D62 mov Rm,Rn */
	r1 += r8;  /* 0C0A8D64 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C0A8D68u, 6);  /* 0C0A8D66 mov.l @Rm,Rn */
	r8 += r6;  /* 0C0A8D68 add Rm,Rn */
	r8 += 0x2u;  /* 0C0A8D6A add #imm,Rn */
	r1 += 0x2u;  /* 0C0A8D6C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A8D70u, 4);  /* 0C0A8D6E mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A8D70 tst Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A8D74u, 2);  /* 0C0A8D72 mov.w @Rm,Rn */
	IF(0x0C0A8D74u); r0 = T;  /* 0C0A8D74 movt Rn */
	T = r5 == r3;  /* 0C0A8D76 cmp/eq Rm,Rn */
	r7 += 0x3Cu;  /* 0C0A8D78 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A8D7Cu, 4);  /* 0C0A8D7A mov.w @Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0A8D7C mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0A8D7E negc Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A8D80 tst Rm,Rn */
	IF(0x0C0A8D82u); r2 = T;  /* 0C0A8D82 movt Rn */
	r0 |= r5;  /* 0C0A8D84 or Rm,Rn */
	r0 |= r2;  /* 0C0A8D86 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A8D88 tst Rm,Rn */
	r7 += 0xFFFFFFC4u;  /* 0C0A8D8A add #imm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8DAEu, 11); goto L_0C0A8DAE; } goto L_0C0A8D90; }  /* 0C0A8D8C bf/s */
L_0C0A8D90: BLKS(0x0C0A8D90u);
	r0 = 0x84u; UPD(0x0C0A8D92u, 2);  /* 0C0A8D90 mov.w @(disp,pc),Rn */
	r5 = r6;  /* 0C0A8D92 mov Rm,Rn */
	r5 += r0;  /* 0C0A8D94 add Rm,Rn */
	IF(0x0C0A8D96u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A8D98u, 3);  /* 0C0A8D96 mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A8D9Au, 1);  /* 0C0A8D98 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C0A8D9A extu.b Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A8D9C extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C0A8D9E cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0A8DACu, 6); goto L_0C0A8DAC; }  /* 0C0A8DA0 bt */
L_0C0A8DA2: BLKS(0x0C0A8DA2u);
	W8(r5, r3); UPD(0x0C0A8DA4u, 1);  /* 0C0A8DA2 mov.b Rm,@Rn */
	r7 += 0x48u;  /* 0C0A8DA4 add #imm,Rn */
	r3 = R32(r7); UPD(0x0C0A8DA8u, 2);  /* 0C0A8DA6 mov.l @Rm,Rn */
	r6 += 0x48u;  /* 0C0A8DA8 add #imm,Rn */
	W32(r6, r3); UPD(0x0C0A8DACu, 2);  /* 0C0A8DAA mov.l Rm,@Rn */
L_0C0A8DAC: BLKS(0x0C0A8DACu);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A8DAEu, 1);  /* 0C0A8DAC mov.w @Rm,Rn */
L_0C0A8DAE: BLKS(0x0C0A8DAEu);
	r15 = r14;  /* 0C0A8DAE mov Rm,Rn */
	IF(0x0C0A8DB0u); PR = R32(r15); r15 += 4; UPD(0x0C0A8DB2u, 2);  /* 0C0A8DB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8DB4u, 1);  /* 0C0A8DB2 mov.l @Rm+,Rn */
	IF(0x0C0A8DB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8DB4 rts */
}

/* FUN_0c0a8dd0 */
void blk_f_0C0A8DD0(sh3_t *c)
{
	LOCALS;
L_0C0A8DD0: BLKS(0x0C0A8DD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8DD2u, 1);  /* 0C0A8DD0 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r5;  /* 0C0A8DD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8DD6u, 2);  /* 0C0A8DD4 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A8DD8u, 1);  /* 0C0A8DD6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A8DD8 exts.w Rm,Rn */
	IF(0x0C0A8DDAu); MACL = r9 * r3;  /* 0C0A8DDA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8DDEu, 4);  /* 0C0A8DDC mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0A8DE0u, 1);  /* 0C0A8DDE mov.l @(disp,pc),Rn */
	IF(0x0C0A8DE0u); r8 = MACL;  /* 0C0A8DE0 sts macl,Rn */
	IF(0x0C0A8DE2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8DE4u, 2);  /* 0C0A8DE2 sts.l pr,@-Rn */
	IF(0x0C0A8DE4u); MACL = r6 * r3;  /* 0C0A8DE4 mul.l Rm,Rn */
	r8 += r0;  /* 0C0A8DE6 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C0A8DEAu, 4);  /* 0C0A8DE8 mov.l @Rm,Rn */
	IF(0x0C0A8DEAu); r6 = MACL;  /* 0C0A8DEA sts macl,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0A8DEEu, 2);  /* 0C0A8DEC mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C0A8DEE add Rm,Rn */
	r4 &= r2;  /* 0C0A8DF0 and Rm,Rn */
	r7 = R32(r6); UPD(0x0C0A8DF4u, 3);  /* 0C0A8DF2 mov.l @Rm,Rn */
	r5 = r8;  /* 0C0A8DF4 mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C0A8DF8u, 2);  /* 0C0A8DF6 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A8DF8 mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0A8DFCu, 2);  /* 0C0A8DFA mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C0A8DFC add Rm,Rn */
	r6 += 0x1u;  /* 0C0A8DFE add #imm,Rn */
	r7 &= r0;  /* 0C0A8E00 and Rm,Rn */
	r5 += r2;  /* 0C0A8E02 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A8E06u, 5);  /* 0C0A8E04 mov.b @Rm,Rn */
	r4 |= r7;  /* 0C0A8E06 or Rm,Rn */
	r5 += 0x1u;  /* 0C0A8E08 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0A8E0Cu, 3);  /* 0C0A8E0A mov.l Rm,@Rn */
	T = (r4 & r0) == 0;  /* 0C0A8E0C tst Rm,Rn */
	{ u32 c_ = !T; W8(r5, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A8E40u, 4); goto L_0C0A8E40; } UPD(0x0C0A8E12u, 1); goto L_0C0A8E12; }  /* 0C0A8E0E bf/s */
L_0C0A8E12: BLKS(0x0C0A8E12u);
	r0 = 0xC0690D0u; UPD(0x0C0A8E14u, 1);  /* 0C0A8E12 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A8E14 mov Rm,Rn */
	IF(0x0C0A8E16u); { u32 t_ = r0; PR = 0x0C0A8E1Au; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0690D0, 0x0C0690D0u, 0x0C0A8E1Au); }  /* 0C0A8E16 jsr @Rn */
L_0C0A8E1A: BLKS(0x0C0A8E1Au);
	r0 = 0x86u; UPD(0x0C0A8E1Cu, 1);  /* 0C0A8E1A mov.w @(disp,pc),Rn */
	IF(0x0C0A8E1Cu); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0A8E1Eu, 1);  /* 0C0A8E1C mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A8E1E add #imm,Rn */
	IF(0x0C0A8E20u); r0 >>= 2;  /* 0C0A8E20 shlr2 Rn */
	IF(0x0C0A8E22u); r0 >>= 2;  /* 0C0A8E22 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A8E24 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0A8E28u, 5);  /* 0C0A8E26 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C0A8E2Au, 1);  /* 0C0A8E28 mov.l @(disp,pc),Rn */
	IF(0x0C0A8E2Au); { u32 t_ = r8; PR = 0x0C0A8E2Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0A8E2Eu); }  /* 0C0A8E2A jsr @Rn */
L_0C0A8E2E: BLKS(0x0C0A8E2Eu);
	r0 = 0x0u;  /* 0C0A8E2E mov #imm,Rn */
	UPD(0x0C0A8E30u, 1);
L_0C0A8E30: BLKS(0x0C0A8E30u);
	r15 = r14;  /* 0C0A8E30 mov Rm,Rn */
	IF(0x0C0A8E32u); PR = R32(r15); r15 += 4; UPD(0x0C0A8E34u, 2);  /* 0C0A8E32 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8E36u, 1);  /* 0C0A8E34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8E38u, 1);  /* 0C0A8E36 mov.l @Rm+,Rn */
	IF(0x0C0A8E38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8E38 rts */
L_0C0A8E40: BLKS(0x0C0A8E40u);
	r0 = 0xC069BF0u; UPD(0x0C0A8E42u, 1);  /* 0C0A8E40 mov.l @(disp,pc),Rn */
	IF(0x0C0A8E42u); { u32 t_ = r0; PR = 0x0C0A8E46u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0A8E46u); }  /* 0C0A8E42 jsr @Rn */
L_0C0A8E46: BLKS(0x0C0A8E46u);
	r0 = 0xC068F00u; UPD(0x0C0A8E48u, 1);  /* 0C0A8E46 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A8E48 mov Rm,Rn */
	IF(0x0C0A8E4Au); { u32 t_ = r0; PR = 0x0C0A8E4Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C0A8E4Eu); }  /* 0C0A8E4A jsr @Rn */
L_0C0A8E4E: BLKS(0x0C0A8E4Eu);
	r0 = 0x86u; UPD(0x0C0A8E50u, 1);  /* 0C0A8E4E mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C0A8E50 mov Rm,Rn */
	IF(0x0C0A8E52u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0A8E54u, 2);  /* 0C0A8E52 mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A8E54 add #imm,Rn */
	IF(0x0C0A8E56u); r0 >>= 2;  /* 0C0A8E56 shlr2 Rn */
	IF(0x0C0A8E58u); r0 >>= 2;  /* 0C0A8E58 shlr2 Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0A8E5Cu, 4);  /* 0C0A8E5A mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C0A8E5C and #imm,r0 */
	IF(0x0C0A8E5Eu); { u32 t_ = r9; PR = 0x0C0A8E62u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0A8E62u); }  /* 0C0A8E5E jsr @Rn */
L_0C0A8E62: BLKS(0x0C0A8E62u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A8E30u, 3); goto L_0C0A8E30; }  /* 0C0A8E62 bra */
}

/* FUN_0c0a8e90 */
void blk_f_0C0A8E90(sh3_t *c)
{
	LOCALS;
L_0C0A8E90: BLKS(0x0C0A8E90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E92u, 1);  /* 0C0A8E90 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A8E92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E96u, 2);  /* 0C0A8E94 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0A8E96 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E9Au, 2);  /* 0C0A8E98 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E9Cu, 1);  /* 0C0A8E9A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E9Eu, 1);  /* 0C0A8E9C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8EA0u, 1);  /* 0C0A8E9E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8EA2u, 1);  /* 0C0A8EA0 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0A8EA2 exts.w Rm,Rn */
	IF(0x0C0A8EA4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8EA6u, 2);  /* 0C0A8EA4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A8EA6 add #imm,Rn */
	r14 = r15;  /* 0C0A8EA8 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0A8EACu, 3);  /* 0C0A8EAA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0A8EAEu, 1);  /* 0C0A8EAC mov.l Rm,@(disp,Rn) */
	r12 = 0xC286578u; UPD(0x0C0A8EB0u, 1);  /* 0C0A8EAE mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C0A8EB2u, 1);  /* 0C0A8EB0 mov.w @(disp,pc),Rn */
	r10 = 0xC0A8B50u; UPD(0x0C0A8EB4u, 1);  /* 0C0A8EB2 mov.l @(disp,pc),Rn */
	r9 = 0x4000u; UPD(0x0C0A8EB6u, 1);  /* 0C0A8EB4 mov.w @(disp,pc),Rn */
	IF(0x0C0A8EB6u); MACL = r3 * r11;  /* 0C0A8EB6 mul.l Rm,Rn */
	UPD(0x0C0A8EB8u, 2);
L_0C0A8EB8: BLKS(0x0C0A8EB8u);
	IF(0x0C0A8EB8u); r8 = MACL;  /* 0C0A8EB8 sts macl,Rn */
	r8 += r12;  /* 0C0A8EBA add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0A8EBEu, 3);  /* 0C0A8EBC mov.l @Rm,Rn */
	T = (r0 & r9) == 0;  /* 0C0A8EBE tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0A8EC2u); r2 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0A8F00u, 4); goto L_0C0A8F00; } goto L_0C0A8EC4; }  /* 0C0A8EC0 bt/s */
L_0C0A8EC4: BLKS(0x0C0A8EC4u);
	IF(0x0C0A8EC4u); { u32 t_ = r10; PR = 0x0C0A8EC8u; r4 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A8EC8u); }  /* 0C0A8EC4 jsr @Rn */
L_0C0A8EC8: BLKS(0x0C0A8EC8u);
	IF(0x0C0A8EC8u); T = (s32)r0 >= 0;  /* 0C0A8EC8 cmp/pz Rn */
	if (!T) { UPD(0x0C0A8EE0u, 4); goto L_0C0A8EE0; }  /* 0C0A8ECA bf */
L_0C0A8ECC: BLKS(0x0C0A8ECCu);
	r3 = r0;  /* 0C0A8ECC mov Rm,Rn */
	{ IF(0x0C0A8ED0u); MACL = r3 * r11; /* slot mul.l Rm,Rn */ UPD(0x0C0A8EB8u, 5); goto L_0C0A8EB8; }  /* 0C0A8ECE bra */
L_0C0A8EE0: BLKS(0x0C0A8EE0u);
	r1 = 0x0u;  /* 0C0A8EE0 mov #imm,Rn */
	W32(r8, r1); UPD(0x0C0A8EE4u, 2);  /* 0C0A8EE2 mov.l Rm,@Rn */
L_0C0A8EE4: BLKS(0x0C0A8EE4u);
	r0 = r1;  /* 0C0A8EE4 mov Rm,Rn */
	r14 += 0x8u;  /* 0C0A8EE6 add #imm,Rn */
	r15 = r14;  /* 0C0A8EE8 mov Rm,Rn */
	IF(0x0C0A8EEAu); PR = R32(r15); r15 += 4; UPD(0x0C0A8EECu, 4);  /* 0C0A8EEA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8EEEu, 1);  /* 0C0A8EEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8EF0u, 1);  /* 0C0A8EEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8EF2u, 1);  /* 0C0A8EF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8EF4u, 1);  /* 0C0A8EF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8EF6u, 1);  /* 0C0A8EF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8EF8u, 1);  /* 0C0A8EF6 mov.l @Rm+,Rn */
	IF(0x0C0A8EF8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8EF8 rts */
L_0C0A8F00: BLKS(0x0C0A8F00u);
	r7 = 0xC286578u; UPD(0x0C0A8F02u, 1);  /* 0C0A8F00 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0A8F02 mov #imm,Rn */
	r7 += r2;  /* 0C0A8F04 add Rm,Rn */
	r2 = 0x84u; UPD(0x0C0A8F08u, 3);  /* 0C0A8F06 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0A8F08 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A8F0Cu, 2);  /* 0C0A8F0A mov.b @Rm,Rn */
	r0 = R32(r7); UPD(0x0C0A8F0Eu, 1);  /* 0C0A8F0C mov.l @Rm,Rn */
	r4 = 0x20000000u; UPD(0x0C0A8F10u, 1);  /* 0C0A8F0E mov.l @(disp,pc),Rn */
	T = (r0 & r4) == 0;  /* 0C0A8F10 tst Rm,Rn */
	{ u32 c_ = !T; r8 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0A8EE4u, 4); goto L_0C0A8EE4; } goto L_0C0A8F16; }  /* 0C0A8F12 bf/s */
L_0C0A8F16: BLKS(0x0C0A8F16u);
	T = (r8 & r8) == 0;  /* 0C0A8F16 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8F1Eu, 5); goto L_0C0A8F1E; } goto L_0C0A8F1C; }  /* 0C0A8F18 bf/s */
L_0C0A8F1C: BLKS(0x0C0A8F1Cu);
	W8(r2, r6); UPD(0x0C0A8F1Eu, 2);  /* 0C0A8F1C mov.b Rm,@Rn */
L_0C0A8F1E: BLKS(0x0C0A8F1Eu);
	r0 &= 0x8u;  /* 0C0A8F1E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A8F20 tst Rm,Rn */
	if (!T) { UPD(0x0C0A8F2Cu, 5); goto L_0C0A8F2C; }  /* 0C0A8F22 bf */
L_0C0A8F24: BLKS(0x0C0A8F24u);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A8F26u, 1);  /* 0C0A8F24 mov.b @Rm,Rn */
	T = r0 == 0x6u;  /* 0C0A8F26 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 += 0x48u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A8FE0u, 4); goto L_0C0A8FE0; } UPD(0x0C0A8F2Cu, 1); goto L_0C0A8F2C; }  /* 0C0A8F28 bt/s */
L_0C0A8F2C: BLKS(0x0C0A8F2Cu);
	r12 = 0xC234BECu; UPD(0x0C0A8F2Eu, 1);  /* 0C0A8F2C mov.l @(disp,pc),Rn */
	r7 = R32(r12); UPD(0x0C0A8F30u, 1);  /* 0C0A8F2E mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0A8F30 tst Rm,Rn */
	if (!T) { UPD(0x0C0A8F48u, 4); goto L_0C0A8F48; }  /* 0C0A8F32 bf */
L_0C0A8F34: BLKS(0x0C0A8F34u);
	r5 = 0xB4u; UPD(0x0C0A8F36u, 1);  /* 0C0A8F34 mov.w @(disp,pc),Rn */
	IF(0x0C0A8F36u); MACL = r3 * r5;  /* 0C0A8F36 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A8F3Au, 3);  /* 0C0A8F38 mov.l @(disp,pc),Rn */
	IF(0x0C0A8F3Au); r4 = MACL;  /* 0C0A8F3A sts macl,Rn */
	r0 += r4;  /* 0C0A8F3C add Rm,Rn */
	r1 = R32(r0 + 0x24u); UPD(0x0C0A8F40u, 3);  /* 0C0A8F3E mov.l @(disp,Rm),Rn */
	r13 = 0x1200000u; UPD(0x0C0A8F42u, 1);  /* 0C0A8F40 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r13;  /* 0C0A8F42 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EE4u, 4); goto L_0C0A8EE4; } UPD(0x0C0A8F48u, 1); goto L_0C0A8F48; }  /* 0C0A8F44 bt/s */
L_0C0A8F48: BLKS(0x0C0A8F48u);
	r9 = 0xB4u; UPD(0x0C0A8F4Au, 1);  /* 0C0A8F48 mov.w @(disp,pc),Rn */
	r10 = 0xEu;  /* 0C0A8F4A mov #imm,Rn */
	IF(0x0C0A8F4Cu); MACL = r3 * r9;  /* 0C0A8F4C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A8F50u, 4);  /* 0C0A8F4E mov.l @(disp,pc),Rn */
	IF(0x0C0A8F50u); r2 = MACL;  /* 0C0A8F50 sts macl,Rn */
	r2 += r6;  /* 0C0A8F52 add Rm,Rn */
	r5 = r2;  /* 0C0A8F54 mov Rm,Rn */
	r4 = R32(r2); UPD(0x0C0A8F58u, 4);  /* 0C0A8F56 mov.l @Rm,Rn */
	r5 += 0x3Cu;  /* 0C0A8F58 add #imm,Rn */
	r0 = R32(r14); UPD(0x0C0A8F5Cu, 2);  /* 0C0A8F5A mov.l @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A8F5Eu, 1);  /* 0C0A8F5C mov.w @Rm,Rn */
	r0 &= r4;  /* 0C0A8F5E and Rm,Rn */
	IF(0x0C0A8F60u); r0 >>= 8;  /* 0C0A8F60 shlr8 Rn */
	r6 = (u32)(s32)(s16)r9;  /* 0C0A8F62 exts.w Rm,Rn */
	r0 += r0;  /* 0C0A8F64 add Rm,Rn */
	T = (s32)r10 >= (s32)r6;  /* 0C0A8F66 cmp/ge Rm,Rn */
	IF(0x0C0A8F68u); r0 >>= 8;  /* 0C0A8F68 shlr8 Rn */
	IF(0x0C0A8F6Au); r7 = T;  /* 0C0A8F6A movt Rn */
	r0 &= 0x1u;  /* 0C0A8F6C and #imm,r0 */
	r7 &= r0;  /* 0C0A8F6E and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0A8F70 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EE4u, 13); goto L_0C0A8EE4; } goto L_0C0A8F76; }  /* 0C0A8F72 bf/s */
L_0C0A8F76: BLKS(0x0C0A8F76u);
	T = (r6 & r6) == 0;  /* 0C0A8F76 tst Rm,Rn */
	if (T) { UPD(0x0C0A8EE4u, 5); goto L_0C0A8EE4; }  /* 0C0A8F78 bt */
L_0C0A8F7A: BLKS(0x0C0A8F7Au);
	T = (r8 & r8) == 0;  /* 0C0A8F7A tst Rm,Rn */
	{ u32 c_ = !T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A8FD0u, 4); goto L_0C0A8FD0; } goto L_0C0A8F80; }  /* 0C0A8F7C bf/s */
L_0C0A8F80: BLKS(0x0C0A8F80u);
	r6 = r2;  /* 0C0A8F80 mov Rm,Rn */
	r6 += 0x3Eu;  /* 0C0A8F82 add #imm,Rn */
	W16(r6, r7); UPD(0x0C0A8F86u, 4);  /* 0C0A8F84 mov.w Rm,@Rn */
L_0C0A8F86: BLKS(0x0C0A8F86u);
	r8 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A8F88u, 1);  /* 0C0A8F86 mov.w @Rm,Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C0A8F8Au, 1);  /* 0C0A8F88 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C0A8F8A exts.w Rm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C0A8F8C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EE4u, 5); goto L_0C0A8EE4; } goto L_0C0A8F92; }  /* 0C0A8F8E bt/s */
L_0C0A8F92: BLKS(0x0C0A8F92u);
	r10 = 0x6u;  /* 0C0A8F92 mov #imm,Rn */
	r10 += r14;  /* 0C0A8F94 add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A8F98u, 4);  /* 0C0A8F96 mov.w @Rm,Rn */
	r0 = r9;  /* 0C0A8F98 mov Rm,Rn */
	W16(r6, r13); UPD(0x0C0A8F9Cu, 2);  /* 0C0A8F9A mov.w Rm,@Rn */
	r0 += r8;  /* 0C0A8F9C add Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C0A8FA0u, 2);  /* 0C0A8F9E mov.l @(disp,Rm),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C0A8FA0 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0A8FA2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r5, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0A8FB0u, 5); goto L_0C0A8FB0; } UPD(0x0C0A8FA8u, 1); goto L_0C0A8FA8; }  /* 0C0A8FA4 bf/s */
L_0C0A8FA8: BLKS(0x0C0A8FA8u);
	r0 -= r6;  /* 0C0A8FA8 sub Rm,Rn */
	{ W16(r5, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0A8EE4u, 4); goto L_0C0A8EE4; }  /* 0C0A8FAA bra */
L_0C0A8FB0: BLKS(0x0C0A8FB0u);
	r0 = 0x1000000u; UPD(0x0C0A8FB2u, 1);  /* 0C0A8FB0 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A8FB4u, 1);  /* 0C0A8FB2 mov.l @Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C0A8FB4 tst Rm,Rn */
	{ u32 c_ = T; W16(r5, r7); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0A8FC0u, 4); goto L_0C0A8FC0; } UPD(0x0C0A8FBAu, 1); goto L_0C0A8FBA; }  /* 0C0A8FB6 bt/s */
L_0C0A8FBA: BLKS(0x0C0A8FBAu);
	r7 = 0x4000000u; UPD(0x0C0A8FBCu, 1);  /* 0C0A8FBA mov.l @(disp,pc),Rn */
	r4 |= r7;  /* 0C0A8FBC or Rm,Rn */
	W32(r2, r4); UPD(0x0C0A8FC0u, 2);  /* 0C0A8FBE mov.l Rm,@Rn */
L_0C0A8FC0: BLKS(0x0C0A8FC0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0A8FC2u, 1);  /* 0C0A8FC0 mov.l @(disp,Rm),Rn */
	r4 = 0xC1DD81Cu; UPD(0x0C0A8FC4u, 1);  /* 0C0A8FC2 mov.l @(disp,pc),Rn */
	IF(0x0C0A8FC4u); r0 <<= 2;  /* 0C0A8FC4 shll2 Rn */
	IF(0x0C0A8FC6u); r2 = R32(r0 + r4); UPD(0x0C0A8FC8u, 2);  /* 0C0A8FC6 mov.l @(r0,Rm),Rn */
	IF(0x0C0A8FC8u); { u32 t_ = r2; PR = 0x0C0A8FCCu; r4 = r3; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A8FCCu); }  /* 0C0A8FC8 jsr @Rn */
L_0C0A8FCC: BLKS(0x0C0A8FCCu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A8EE4u, 3); goto L_0C0A8EE4; }  /* 0C0A8FCC bra */
L_0C0A8FD0: BLKS(0x0C0A8FD0u);
	{ r6 += 0x3Eu; /* slot add #imm,Rn */ UPD(0x0C0A8F86u, 3); goto L_0C0A8F86; }  /* 0C0A8FD0 bra */
L_0C0A8FE0: BLKS(0x0C0A8FE0u);
	r11 = 0x2A0u; UPD(0x0C0A8FE2u, 1);  /* 0C0A8FE0 mov.w @(disp,pc),Rn */
	IF(0x0C0A8FE2u); MACL = r13 * r11;  /* 0C0A8FE2 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C0A8FE6u, 3);  /* 0C0A8FE4 mov.l @(disp,pc),Rn */
	IF(0x0C0A8FE6u); r2 = MACL;  /* 0C0A8FE6 sts macl,Rn */
	r0 = 0x298u; UPD(0x0C0A8FEAu, 2);  /* 0C0A8FE8 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C0A8FEA add Rm,Rn */
	IF(0x0C0A8FECu); r9 = R32(r0 + r10); UPD(0x0C0A8FEEu, 2);  /* 0C0A8FEC mov.l @(r0,Rm),Rn */
	{ W32(r7, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0A8F2Cu, 3); goto L_0C0A8F2C; }  /* 0C0A8FEE bra */
}

/* FUN_0c0a9020 */
void blk_f_0C0A9020(sh3_t *c)
{
	LOCALS;
L_0C0A9020: BLKS(0x0C0A9020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9022u, 1);  /* 0C0A9020 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9024u, 1);  /* 0C0A9022 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9026u, 1);  /* 0C0A9024 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0A9026 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A902Au, 2);  /* 0C0A9028 mov.l Rm,@-Rn */
	r8 = 0xC286578u; UPD(0x0C0A902Cu, 1);  /* 0C0A902A mov.l @(disp,pc),Rn */
	IF(0x0C0A902Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A902Eu, 1);  /* 0C0A902C sts.l pr,@-Rn */
	r10 = 0xC0A8E90u; UPD(0x0C0A9030u, 1);  /* 0C0A902E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9030 mov Rm,Rn */
	IF(0x0C0A9032u); ;  /* 0C0A9032 nop */
	UPD(0x0C0A9034u, 2);
L_0C0A9034: BLKS(0x0C0A9034u);
	r0 = R32(r8); UPD(0x0C0A9036u, 1);  /* 0C0A9034 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A9036 tst Rm,Rn */
	if (T) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; }  /* 0C0A9038 bt */
L_0C0A903A: BLKS(0x0C0A903Au);
	r0 = R32(r8 + 0x4u); UPD(0x0C0A903Cu, 1);  /* 0C0A903A mov.l @(disp,Rm),Rn */
	T = r0 == 0x5u;  /* 0C0A903C cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x2Au; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A9042; }  /* 0C0A903E bt/s */
L_0C0A9042: BLKS(0x0C0A9042u);
	{ u32 c_ = T; T = r0 == 0x2Du; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A9046; }  /* 0C0A9042 bt/s */
L_0C0A9046: BLKS(0x0C0A9046u);
	{ u32 c_ = T; T = r0 == 0x33u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A904A; }  /* 0C0A9046 bt/s */
L_0C0A904A: BLKS(0x0C0A904Au);
	{ u32 c_ = T; T = r0 == 0x41u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A904E; }  /* 0C0A904A bt/s */
L_0C0A904E: BLKS(0x0C0A904Eu);
	{ u32 c_ = T; T = r0 == 0x4Au; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A9052; }  /* 0C0A904E bt/s */
L_0C0A9052: BLKS(0x0C0A9052u);
	{ u32 c_ = T; r0 += 0xFFFFFFC9u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9060u, 4); goto L_0C0A9060; } goto L_0C0A9056; }  /* 0C0A9052 bt/s */
L_0C0A9056: BLKS(0x0C0A9056u);
	r2 = 0x5u;  /* 0C0A9056 mov #imm,Rn */
	T = r0 > r2;  /* 0C0A9058 cmp/hi Rm,Rn */
	{ u32 c_ = T; r5 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A9080u, 6); goto L_0C0A9080; } goto L_0C0A905E; }  /* 0C0A905A bt/s */
L_0C0A905E: BLKS(0x0C0A905Eu);
	IF(0x0C0A905Eu); ;  /* 0C0A905E nop */
	UPD(0x0C0A9060u, 2);
L_0C0A9060: BLKS(0x0C0A9060u);
	r0 = 0xB4u; UPD(0x0C0A9062u, 1);  /* 0C0A9060 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C0A9062 add #imm,Rn */
	r8 += r0;  /* 0C0A9064 add Rm,Rn */
	r0 += 0xBu;  /* 0C0A9066 add #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C0A9068 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A9034u, 7); goto L_0C0A9034; }  /* 0C0A906A bf */
L_0C0A906C: BLKS(0x0C0A906Cu);
	r15 = r14;  /* 0C0A906C mov Rm,Rn */
	IF(0x0C0A906Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A9070u, 2);  /* 0C0A906E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9072u, 1);  /* 0C0A9070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9074u, 1);  /* 0C0A9072 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9076u, 1);  /* 0C0A9074 mov.l @Rm+,Rn */
	IF(0x0C0A9076u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9076 rts */
L_0C0A9080: BLKS(0x0C0A9080u);
	r4 = 0x0u;  /* 0C0A9080 mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C0A9084u, 2);  /* 0C0A9082 mov.w @(disp,pc),Rn */
	IF(0x0C0A9084u); { u32 t_ = r10; PR = 0x0C0A9088u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8E90, 0x0C0A8E90u, 0x0C0A9088u); }  /* 0C0A9084 jsr @Rn */
L_0C0A9088: BLKS(0x0C0A9088u);
	{ IF(0x0C0A908Au); ; /* slot nop */ UPD(0x0C0A9060u, 3); goto L_0C0A9060; }  /* 0C0A9088 bra */
}

/* FUN_0c0a90a0 */
void blk_f_0C0A90A0(sh3_t *c)
{
	LOCALS;
L_0C0A90A0: BLKS(0x0C0A90A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A90A2u, 1);  /* 0C0A90A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A90A4u, 1);  /* 0C0A90A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A90A6u, 1);  /* 0C0A90A4 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A90A8u, 1);  /* 0C0A90A6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A90A8 exts.w Rm,Rn */
	IF(0x0C0A90AAu); MACL = r10 * r2;  /* 0C0A90AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A90AEu, 4);  /* 0C0A90AC mov.l Rm,@-Rn */
	r4 = 0x8u;  /* 0C0A90AE mov #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A90B2u, 2);  /* 0C0A90B0 mov.l @(disp,pc),Rn */
	IF(0x0C0A90B2u); r8 = MACL;  /* 0C0A90B2 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A90B6u, 2);  /* 0C0A90B4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A90B6 add Rm,Rn */
	IF(0x0C0A90B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A90BAu, 2);  /* 0C0A90B8 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A90BA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A90BEu, 2);  /* 0C0A90BC mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A90BE mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A90C0 extu.b Rm,Rn */
	r0 = 0xC0BEE10u; UPD(0x0C0A90C4u, 3);  /* 0C0A90C2 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A90C6u, 1);  /* 0C0A90C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A90C6u); { u32 t_ = r0; PR = 0x0C0A90CAu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0A90CAu); }  /* 0C0A90C6 jsr @Rn */
L_0C0A90CA: BLKS(0x0C0A90CAu);
	r0 = 0xC0C2360u; UPD(0x0C0A90CCu, 1);  /* 0C0A90CA mov.l @(disp,pc),Rn */
	IF(0x0C0A90CCu); { u32 t_ = r0; PR = 0x0C0A90D0u; IF(0x0C0A90CEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0A90D0u); }  /* 0C0A90CC jsr @Rn */
L_0C0A90D0: BLKS(0x0C0A90D0u);
	r0 &= 0x3u;  /* 0C0A90D0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A90D2 tst Rm,Rn */
	if (T) { UPD(0x0C0A9130u, 5); goto L_0C0A9130; }  /* 0C0A90D4 bt */
L_0C0A90D6: BLKS(0x0C0A90D6u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A90D8u, 1);  /* 0C0A90D6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A90D8 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A90DA extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A90DEu, 3);  /* 0C0A90DC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A90DE mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A90E2u, 2);  /* 0C0A90E0 mov.w @(disp,pc),Rn */
	IF(0x0C0A90E2u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A90E4u, 1);  /* 0C0A90E2 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A90E4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A90E8u, 2);  /* 0C0A90E6 mov.l Rm,@(disp,Rn) */
	r5 = 0xBu;  /* 0C0A90E8 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A90ECu, 2);  /* 0C0A90EA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A90EEu, 1);  /* 0C0A90EC mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A90F0u, 1);  /* 0C0A90EE mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0A90F2u, 1);  /* 0C0A90F0 mov.l @(disp,pc),Rn */
L_0C0A90F2: BLKS(0x0C0A90F2u);
	IF(0x0C0A90F2u); { u32 t_ = r0; PR = 0x0C0A90F6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A90F6u); }  /* 0C0A90F2 jsr @Rn */
L_0C0A90F6: BLKS(0x0C0A90F6u);
	r6 = 0xB4u; UPD(0x0C0A90F8u, 1);  /* 0C0A90F6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A90F8 add #imm,Rn */
	IF(0x0C0A90FAu); MACL = r10 * r6;  /* 0C0A90FA mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A90FEu, 4);  /* 0C0A90FC mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A90FE mov #imm,Rn */
	IF(0x0C0A9100u); r10 = MACL;  /* 0C0A9100 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A9104u, 3);  /* 0C0A9102 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A9104 add Rm,Rn */
	r9 = 0xC07DF30u; UPD(0x0C0A9108u, 2);  /* 0C0A9106 mov.l @(disp,pc),Rn */
	IF(0x0C0A9108u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A910Au, 1);  /* 0C0A9108 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A910Cu, 1);  /* 0C0A910A mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A910C extu.b Rm,Rn */
	IF(0x0C0A910Eu); { u32 t_ = r9; PR = 0x0C0A9112u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0A9112u); }  /* 0C0A910E jsr @Rn */
L_0C0A9112: BLKS(0x0C0A9112u);
	W32(r10, r8); UPD(0x0C0A9114u, 1);  /* 0C0A9112 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9114 mov Rm,Rn */
	IF(0x0C0A9116u); PR = R32(r15); r15 += 4; UPD(0x0C0A9118u, 2);  /* 0C0A9116 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A911Au, 1);  /* 0C0A9118 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A911Cu, 1);  /* 0C0A911A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A911Eu, 1);  /* 0C0A911C mov.l @Rm+,Rn */
	IF(0x0C0A911Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A911E rts */
L_0C0A9130: BLKS(0x0C0A9130u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9132u, 1);  /* 0C0A9130 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9132 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A9134 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A9138u, 3);  /* 0C0A9136 mov.l Rm,@Rn */
	r5 = 0xBu;  /* 0C0A9138 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A913Cu, 2);  /* 0C0A913A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A913C mov Rm,Rn */
	IF(0x0C0A913Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9140u, 2);  /* 0C0A913E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A9140 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A9144u, 2);  /* 0C0A9142 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A9146u, 1);  /* 0C0A9144 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A9148u, 1);  /* 0C0A9146 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A914Au, 1);  /* 0C0A9148 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A90F2u, 3); goto L_0C0A90F2; }  /* 0C0A914A bra */
}

/* FUN_0c0a9170 */
void blk_f_0C0A9170(sh3_t *c)
{
	LOCALS;
L_0C0A9170: BLKS(0x0C0A9170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9172u, 1);  /* 0C0A9170 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9174u, 1);  /* 0C0A9172 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9176u, 1);  /* 0C0A9174 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A9178u, 1);  /* 0C0A9176 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A9178 exts.w Rm,Rn */
	IF(0x0C0A917Au); MACL = r10 * r2;  /* 0C0A917A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A917Eu, 4);  /* 0C0A917C mov.l Rm,@-Rn */
	r4 = 0xCu;  /* 0C0A917E mov #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9182u, 2);  /* 0C0A9180 mov.l @(disp,pc),Rn */
	IF(0x0C0A9182u); r8 = MACL;  /* 0C0A9182 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A9186u, 2);  /* 0C0A9184 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A9186 add Rm,Rn */
	IF(0x0C0A9188u); r15 -= 4; W32(r15, PR); UPD(0x0C0A918Au, 2);  /* 0C0A9188 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A918A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A918Eu, 2);  /* 0C0A918C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A918E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A9190 extu.b Rm,Rn */
	r0 = 0xC0BEE10u; UPD(0x0C0A9194u, 3);  /* 0C0A9192 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9196u, 1);  /* 0C0A9194 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9196u); { u32 t_ = r0; PR = 0x0C0A919Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0A919Au); }  /* 0C0A9196 jsr @Rn */
L_0C0A919A: BLKS(0x0C0A919Au);
	r0 = 0xC0C2360u; UPD(0x0C0A919Cu, 1);  /* 0C0A919A mov.l @(disp,pc),Rn */
	IF(0x0C0A919Cu); { u32 t_ = r0; PR = 0x0C0A91A0u; IF(0x0C0A919Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0A91A0u); }  /* 0C0A919C jsr @Rn */
L_0C0A91A0: BLKS(0x0C0A91A0u);
	r0 &= 0x3u;  /* 0C0A91A0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A91A2 tst Rm,Rn */
	if (T) { UPD(0x0C0A9200u, 5); goto L_0C0A9200; }  /* 0C0A91A4 bt */
L_0C0A91A6: BLKS(0x0C0A91A6u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A91A8u, 1);  /* 0C0A91A6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A91A8 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A91AA extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A91AEu, 3);  /* 0C0A91AC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A91AE mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A91B2u, 2);  /* 0C0A91B0 mov.w @(disp,pc),Rn */
	IF(0x0C0A91B2u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A91B4u, 1);  /* 0C0A91B2 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A91B4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A91B8u, 2);  /* 0C0A91B6 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0A91B8 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A91BCu, 2);  /* 0C0A91BA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A91BEu, 1);  /* 0C0A91BC mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A91C0u, 1);  /* 0C0A91BE mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0A91C2u, 1);  /* 0C0A91C0 mov.l @(disp,pc),Rn */
L_0C0A91C2: BLKS(0x0C0A91C2u);
	IF(0x0C0A91C2u); { u32 t_ = r0; PR = 0x0C0A91C6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A91C6u); }  /* 0C0A91C2 jsr @Rn */
L_0C0A91C6: BLKS(0x0C0A91C6u);
	r6 = 0xB4u; UPD(0x0C0A91C8u, 1);  /* 0C0A91C6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A91C8 add #imm,Rn */
	IF(0x0C0A91CAu); MACL = r10 * r6;  /* 0C0A91CA mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A91CEu, 4);  /* 0C0A91CC mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A91CE mov #imm,Rn */
	IF(0x0C0A91D0u); r10 = MACL;  /* 0C0A91D0 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A91D4u, 3);  /* 0C0A91D2 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A91D4 add Rm,Rn */
	r9 = 0xC07DF30u; UPD(0x0C0A91D8u, 2);  /* 0C0A91D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A91D8u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A91DAu, 1);  /* 0C0A91D8 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A91DCu, 1);  /* 0C0A91DA mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A91DC extu.b Rm,Rn */
	IF(0x0C0A91DEu); { u32 t_ = r9; PR = 0x0C0A91E2u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0A91E2u); }  /* 0C0A91DE jsr @Rn */
L_0C0A91E2: BLKS(0x0C0A91E2u);
	W32(r10, r8); UPD(0x0C0A91E4u, 1);  /* 0C0A91E2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A91E4 mov Rm,Rn */
	IF(0x0C0A91E6u); PR = R32(r15); r15 += 4; UPD(0x0C0A91E8u, 2);  /* 0C0A91E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A91EAu, 1);  /* 0C0A91E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A91ECu, 1);  /* 0C0A91EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A91EEu, 1);  /* 0C0A91EC mov.l @Rm+,Rn */
	IF(0x0C0A91EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A91EE rts */
L_0C0A9200: BLKS(0x0C0A9200u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9202u, 1);  /* 0C0A9200 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9202 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A9204 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A9208u, 3);  /* 0C0A9206 mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C0A9208 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A920Cu, 2);  /* 0C0A920A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A920C mov Rm,Rn */
	IF(0x0C0A920Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9210u, 2);  /* 0C0A920E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A9210 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A9214u, 2);  /* 0C0A9212 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A9216u, 1);  /* 0C0A9214 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A9218u, 1);  /* 0C0A9216 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A921Au, 1);  /* 0C0A9218 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A91C2u, 3); goto L_0C0A91C2; }  /* 0C0A921A bra */
}

/* FUN_0c0a9240 */
void blk_f_0C0A9240(sh3_t *c)
{
	LOCALS;
L_0C0A9240: BLKS(0x0C0A9240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9242u, 1);  /* 0C0A9240 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9244u, 1);  /* 0C0A9242 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9246u, 1);  /* 0C0A9244 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A9248u, 1);  /* 0C0A9246 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A9248 exts.w Rm,Rn */
	IF(0x0C0A924Au); MACL = r10 * r2;  /* 0C0A924A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A924Eu, 4);  /* 0C0A924C mov.l Rm,@-Rn */
	r4 = 0x10u;  /* 0C0A924E mov #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9252u, 2);  /* 0C0A9250 mov.l @(disp,pc),Rn */
	IF(0x0C0A9252u); r8 = MACL;  /* 0C0A9252 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A9256u, 2);  /* 0C0A9254 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A9256 add Rm,Rn */
	IF(0x0C0A9258u); r15 -= 4; W32(r15, PR); UPD(0x0C0A925Au, 2);  /* 0C0A9258 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A925A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A925Eu, 2);  /* 0C0A925C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A925E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A9260 extu.b Rm,Rn */
	r0 = 0xC0BEE10u; UPD(0x0C0A9264u, 3);  /* 0C0A9262 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9266u, 1);  /* 0C0A9264 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9266u); { u32 t_ = r0; PR = 0x0C0A926Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0A926Au); }  /* 0C0A9266 jsr @Rn */
L_0C0A926A: BLKS(0x0C0A926Au);
	r0 = 0xC0C2360u; UPD(0x0C0A926Cu, 1);  /* 0C0A926A mov.l @(disp,pc),Rn */
	IF(0x0C0A926Cu); { u32 t_ = r0; PR = 0x0C0A9270u; IF(0x0C0A926Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0A9270u); }  /* 0C0A926C jsr @Rn */
L_0C0A9270: BLKS(0x0C0A9270u);
	r0 &= 0x3u;  /* 0C0A9270 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A9272 tst Rm,Rn */
	if (T) { UPD(0x0C0A92D0u, 5); goto L_0C0A92D0; }  /* 0C0A9274 bt */
L_0C0A9276: BLKS(0x0C0A9276u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9278u, 1);  /* 0C0A9276 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9278 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A927A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A927Eu, 3);  /* 0C0A927C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A927E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A9282u, 2);  /* 0C0A9280 mov.w @(disp,pc),Rn */
	IF(0x0C0A9282u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A9284u, 1);  /* 0C0A9282 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A9284 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A9288u, 2);  /* 0C0A9286 mov.l Rm,@(disp,Rn) */
	r5 = 0xDu;  /* 0C0A9288 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A928Cu, 2);  /* 0C0A928A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A928Eu, 1);  /* 0C0A928C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A9290u, 1);  /* 0C0A928E mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0A9292u, 1);  /* 0C0A9290 mov.l @(disp,pc),Rn */
L_0C0A9292: BLKS(0x0C0A9292u);
	IF(0x0C0A9292u); { u32 t_ = r0; PR = 0x0C0A9296u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A9296u); }  /* 0C0A9292 jsr @Rn */
L_0C0A9296: BLKS(0x0C0A9296u);
	r6 = 0xB4u; UPD(0x0C0A9298u, 1);  /* 0C0A9296 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A9298 add #imm,Rn */
	IF(0x0C0A929Au); MACL = r10 * r6;  /* 0C0A929A mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A929Eu, 4);  /* 0C0A929C mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A929E mov #imm,Rn */
	IF(0x0C0A92A0u); r10 = MACL;  /* 0C0A92A0 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A92A4u, 3);  /* 0C0A92A2 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A92A4 add Rm,Rn */
	r9 = 0xC07DF30u; UPD(0x0C0A92A8u, 2);  /* 0C0A92A6 mov.l @(disp,pc),Rn */
	IF(0x0C0A92A8u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A92AAu, 1);  /* 0C0A92A8 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A92ACu, 1);  /* 0C0A92AA mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A92AC extu.b Rm,Rn */
	IF(0x0C0A92AEu); { u32 t_ = r9; PR = 0x0C0A92B2u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0A92B2u); }  /* 0C0A92AE jsr @Rn */
L_0C0A92B2: BLKS(0x0C0A92B2u);
	W32(r10, r8); UPD(0x0C0A92B4u, 1);  /* 0C0A92B2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A92B4 mov Rm,Rn */
	IF(0x0C0A92B6u); PR = R32(r15); r15 += 4; UPD(0x0C0A92B8u, 2);  /* 0C0A92B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A92BAu, 1);  /* 0C0A92B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A92BCu, 1);  /* 0C0A92BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A92BEu, 1);  /* 0C0A92BC mov.l @Rm+,Rn */
	IF(0x0C0A92BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A92BE rts */
L_0C0A92D0: BLKS(0x0C0A92D0u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A92D2u, 1);  /* 0C0A92D0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A92D2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A92D4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A92D8u, 3);  /* 0C0A92D6 mov.l Rm,@Rn */
	r5 = 0xDu;  /* 0C0A92D8 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A92DCu, 2);  /* 0C0A92DA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A92DC mov Rm,Rn */
	IF(0x0C0A92DEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A92E0u, 2);  /* 0C0A92DE mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A92E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A92E4u, 2);  /* 0C0A92E2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A92E6u, 1);  /* 0C0A92E4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A92E8u, 1);  /* 0C0A92E6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A92EAu, 1);  /* 0C0A92E8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9292u, 3); goto L_0C0A9292; }  /* 0C0A92EA bra */
}

/* FUN_0c0a9310 */
void blk_f_0C0A9310(sh3_t *c)
{
	LOCALS;
L_0C0A9310: BLKS(0x0C0A9310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9312u, 1);  /* 0C0A9310 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9314u, 1);  /* 0C0A9312 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9316u, 1);  /* 0C0A9314 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A9318u, 1);  /* 0C0A9316 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A9318 exts.w Rm,Rn */
	IF(0x0C0A931Au); MACL = r10 * r2;  /* 0C0A931A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A931Eu, 4);  /* 0C0A931C mov.l Rm,@-Rn */
	r4 = 0x14u;  /* 0C0A931E mov #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9322u, 2);  /* 0C0A9320 mov.l @(disp,pc),Rn */
	IF(0x0C0A9322u); r8 = MACL;  /* 0C0A9322 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A9326u, 2);  /* 0C0A9324 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A9326 add Rm,Rn */
	IF(0x0C0A9328u); r15 -= 4; W32(r15, PR); UPD(0x0C0A932Au, 2);  /* 0C0A9328 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A932A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A932Eu, 2);  /* 0C0A932C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A932E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A9330 extu.b Rm,Rn */
	r0 = 0xC0BEE10u; UPD(0x0C0A9334u, 3);  /* 0C0A9332 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9336u, 1);  /* 0C0A9334 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9336u); { u32 t_ = r0; PR = 0x0C0A933Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0A933Au); }  /* 0C0A9336 jsr @Rn */
L_0C0A933A: BLKS(0x0C0A933Au);
	r0 = 0xC0C2360u; UPD(0x0C0A933Cu, 1);  /* 0C0A933A mov.l @(disp,pc),Rn */
	IF(0x0C0A933Cu); { u32 t_ = r0; PR = 0x0C0A9340u; IF(0x0C0A933Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0A9340u); }  /* 0C0A933C jsr @Rn */
L_0C0A9340: BLKS(0x0C0A9340u);
	r0 &= 0x3u;  /* 0C0A9340 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A9342 tst Rm,Rn */
	if (T) { UPD(0x0C0A9390u, 5); goto L_0C0A9390; }  /* 0C0A9344 bt */
L_0C0A9346: BLKS(0x0C0A9346u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9348u, 1);  /* 0C0A9346 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9348 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A934A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A934Eu, 3);  /* 0C0A934C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A934E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A9352u, 2);  /* 0C0A9350 mov.w @(disp,pc),Rn */
	IF(0x0C0A9352u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A9354u, 1);  /* 0C0A9352 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A9354 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A9358u, 2);  /* 0C0A9356 mov.l Rm,@(disp,Rn) */
	r5 = 0xFu;  /* 0C0A9358 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A935Cu, 2);  /* 0C0A935A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A935Eu, 1);  /* 0C0A935C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A9360u, 1);  /* 0C0A935E mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0A9362u, 1);  /* 0C0A9360 mov.l @(disp,pc),Rn */
L_0C0A9362: BLKS(0x0C0A9362u);
	IF(0x0C0A9362u); { u32 t_ = r0; PR = 0x0C0A9366u; IF(0x0C0A9364u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A9366u); }  /* 0C0A9362 jsr @Rn */
L_0C0A9366: BLKS(0x0C0A9366u);
	r5 = 0xB4u; UPD(0x0C0A9368u, 1);  /* 0C0A9366 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A9368 add #imm,Rn */
	IF(0x0C0A936Au); MACL = r10 * r5;  /* 0C0A936A mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0A936Eu, 4);  /* 0C0A936C mov.l @(disp,pc),Rn */
	IF(0x0C0A936Eu); r0 = MACL;  /* 0C0A936E sts macl,Rn */
	r10 = 0x0u;  /* 0C0A9370 mov #imm,Rn */
	IF(0x0C0A9372u); W32(r0 + r8, r10); UPD(0x0C0A9374u, 3);  /* 0C0A9372 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0A9374 mov Rm,Rn */
	IF(0x0C0A9376u); PR = R32(r15); r15 += 4; UPD(0x0C0A9378u, 2);  /* 0C0A9376 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A937Au, 1);  /* 0C0A9378 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A937Cu, 1);  /* 0C0A937A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A937Eu, 1);  /* 0C0A937C mov.l @Rm+,Rn */
	IF(0x0C0A937Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A937E rts */
L_0C0A9390: BLKS(0x0C0A9390u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9392u, 1);  /* 0C0A9390 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9392 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A9394 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A9398u, 3);  /* 0C0A9396 mov.l Rm,@Rn */
	r5 = 0xFu;  /* 0C0A9398 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A939Cu, 2);  /* 0C0A939A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A939C mov Rm,Rn */
	IF(0x0C0A939Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A93A0u, 2);  /* 0C0A939E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A93A0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A93A4u, 2);  /* 0C0A93A2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A93A6u, 1);  /* 0C0A93A4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A93A8u, 1);  /* 0C0A93A6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A93AAu, 1);  /* 0C0A93A8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9362u, 3); goto L_0C0A9362; }  /* 0C0A93AA bra */
}

/* FUN_0c0a93d0 */
void blk_f_0C0A93D0(sh3_t *c)
{
	LOCALS;
L_0C0A93D0: BLKS(0x0C0A93D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A93D2u, 1);  /* 0C0A93D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A93D4u, 1);  /* 0C0A93D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A93D4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A93D8u, 2);  /* 0C0A93D6 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A93D8 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A93DCu, 2);  /* 0C0A93DA mov.l @(disp,pc),Rn */
	IF(0x0C0A93DCu); r15 -= 4; W32(r15, PR); UPD(0x0C0A93DEu, 1);  /* 0C0A93DC sts.l pr,@-Rn */
	IF(0x0C0A93DEu); { u32 t_ = r9; PR = 0x0C0A93E2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A93E2u); }  /* 0C0A93DE jsr @Rn */
L_0C0A93E2: BLKS(0x0C0A93E2u);
	r2 = r0;  /* 0C0A93E2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A93E4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A93E6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A93F0u, 6); goto L_0C0A93F0; }  /* 0C0A93E8 bf */
L_0C0A93EA: BLKS(0x0C0A93EAu);
	r15 += 0xFFFFFFF8u;  /* 0C0A93EA add #imm,Rn */
	{ IF(0x0C0A93EEu); ; /* slot nop */ UPD(0x0C0A9540u, 4); goto L_0C0A9540; }  /* 0C0A93EC bra */
L_0C0A93F0: BLKS(0x0C0A93F0u);
	r0 = 0xC0A9400u;  /* 0C0A93F0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A93F2 add Rm,Rn */
	IF(0x0C0A93F4u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A93F6u, 3);  /* 0C0A93F4 mov.w @(r0,Rm),Rn */
	IF(0x0C0A93F6u); { u32 tv_ = (r3 + 0x0C0A93FAu); u32 t_ = PHYS(tv_); IF(0x0C0A93F8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9410u: goto L_0C0A9410; case 0x0C0A9470u: goto L_0C0A9470; case 0x0C0A94A0u: goto L_0C0A94A0; case 0x0C0A94E0u: goto L_0C0A94E0; case 0x0C0A9510u: goto L_0C0A9510; default: JUMPD(tv_); } }  /* 0C0A93F6 braf Rn */
L_0C0A9410: BLKS(0x0C0A9410u);
	r0 = 0xB4u; UPD(0x0C0A9412u, 1);  /* 0C0A9410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9412 add #imm,Rn */
	IF(0x0C0A9414u); MACL = r8 * r0;  /* 0C0A9414 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9418u, 4);  /* 0C0A9416 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A941Au, 1);  /* 0C0A9418 mov.w @(disp,pc),Rn */
	IF(0x0C0A941Au); r3 = MACL;  /* 0C0A941A sts macl,Rn */
	r3 += r9;  /* 0C0A941C add Rm,Rn */
	IF(0x0C0A941Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9420u, 3);  /* 0C0A941E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9420 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9424u, 2);  /* 0C0A9422 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9424 add #imm,Rn */
	IF(0x0C0A9426u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9428u, 2);  /* 0C0A9426 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A9428 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A942A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A942Eu, 3);  /* 0C0A942C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0A9430u, 1);  /* 0C0A942E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9432u, 1);  /* 0C0A9430 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9434u, 1);  /* 0C0A9432 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A9436u, 1);  /* 0C0A9434 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9436u); ;  /* 0C0A9436 nop */
	UPD(0x0C0A9438u, 1);
L_0C0A9438: BLKS(0x0C0A9438u);
	IF(0x0C0A9438u); { u32 t_ = r0; PR = 0x0C0A943Cu; IF(0x0C0A943Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A943Cu); }  /* 0C0A9438 jsr @Rn */
L_0C0A943C: BLKS(0x0C0A943Cu);
	r15 += 0x8u;  /* 0C0A943C add #imm,Rn */
	UPD(0x0C0A943Eu, 1);
L_0C0A943E: BLKS(0x0C0A943Eu);
	r4 = 0xB4u; UPD(0x0C0A9440u, 1);  /* 0C0A943E mov.w @(disp,pc),Rn */
	IF(0x0C0A9440u); MACL = r8 * r4;  /* 0C0A9440 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9444u, 3);  /* 0C0A9442 mov.w @(disp,pc),Rn */
	IF(0x0C0A9444u); r8 = MACL;  /* 0C0A9444 sts macl,Rn */
	r8 += r9;  /* 0C0A9446 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A944Au, 3);  /* 0C0A9448 mov.l @(disp,pc),Rn */
	IF(0x0C0A944Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A944Cu, 1);  /* 0C0A944A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A944Eu, 1);  /* 0C0A944C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A944E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9452u, 2);  /* 0C0A9450 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9452u); { u32 t_ = r9; PR = 0x0C0A9456u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9456u); }  /* 0C0A9452 jsr @Rn */
L_0C0A9456: BLKS(0x0C0A9456u);
	r9 = 0x0u;  /* 0C0A9456 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A945Au, 2);  /* 0C0A9458 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A945A mov Rm,Rn */
	IF(0x0C0A945Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A945Eu, 2);  /* 0C0A945C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9460u, 1);  /* 0C0A945E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9462u, 1);  /* 0C0A9460 mov.l @Rm+,Rn */
	IF(0x0C0A9462u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9462 rts */
L_0C0A9470: BLKS(0x0C0A9470u);
	r5 = 0xB4u; UPD(0x0C0A9472u, 1);  /* 0C0A9470 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9472 add #imm,Rn */
	IF(0x0C0A9474u); MACL = r8 * r5;  /* 0C0A9474 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9478u, 4);  /* 0C0A9476 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A947Au, 1);  /* 0C0A9478 mov.w @(disp,pc),Rn */
	IF(0x0C0A947Au); r3 = MACL;  /* 0C0A947A sts macl,Rn */
	r3 += r9;  /* 0C0A947C add Rm,Rn */
	IF(0x0C0A947Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9480u, 3);  /* 0C0A947E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A9480 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A9482 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A9486u, 3);  /* 0C0A9484 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9486 add #imm,Rn */
	IF(0x0C0A9488u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A948Au, 2);  /* 0C0A9488 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A948A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A948Eu, 2);  /* 0C0A948C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9490u, 1);  /* 0C0A948E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9492u, 1);  /* 0C0A9490 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9494u, 1);  /* 0C0A9492 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9438u, 3); goto L_0C0A9438; }  /* 0C0A9494 bra */
L_0C0A94A0: BLKS(0x0C0A94A0u);
	r3 = 0xB4u; UPD(0x0C0A94A2u, 1);  /* 0C0A94A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A94A2 add #imm,Rn */
	IF(0x0C0A94A4u); MACL = r8 * r3;  /* 0C0A94A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A94A8u, 4);  /* 0C0A94A6 mov.l @(disp,pc),Rn */
	IF(0x0C0A94A8u); r3 = MACL;  /* 0C0A94A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A94ACu, 2);  /* 0C0A94AA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A94AC add Rm,Rn */
	IF(0x0C0A94AEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A94B0u, 2);  /* 0C0A94AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A94B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A94B4u, 2);  /* 0C0A94B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A94B4 add #imm,Rn */
	IF(0x0C0A94B6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A94B8u, 2);  /* 0C0A94B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A94B8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A94BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A94BEu, 3);  /* 0C0A94BC mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A94C0u, 1);  /* 0C0A94BE mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A94C2u, 1);  /* 0C0A94C0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A94C4u, 1);  /* 0C0A94C2 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A94C6u, 1);  /* 0C0A94C4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BE860u; UPD(0x0C0A94C8u, 1);  /* 0C0A94C6 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A94CAu, 1);  /* 0C0A94C8 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A94CCu, 1);  /* 0C0A94CA mov.l @(disp,Rm),Rn */
	IF(0x0C0A94CCu); { u32 t_ = r0; PR = 0x0C0A94D0u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A94D0u); }  /* 0C0A94CC jsr @Rn */
L_0C0A94D0: BLKS(0x0C0A94D0u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A943Eu, 3); goto L_0C0A943E; }  /* 0C0A94D0 bra */
L_0C0A94E0: BLKS(0x0C0A94E0u);
	r4 = 0xB4u; UPD(0x0C0A94E2u, 1);  /* 0C0A94E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A94E2 add #imm,Rn */
	IF(0x0C0A94E4u); MACL = r8 * r4;  /* 0C0A94E4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A94E8u, 4);  /* 0C0A94E6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A94E8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A94ECu, 2);  /* 0C0A94EA mov.w @(disp,pc),Rn */
	IF(0x0C0A94ECu); r3 = MACL;  /* 0C0A94EC sts macl,Rn */
	r3 += r9;  /* 0C0A94EE add Rm,Rn */
	IF(0x0C0A94F0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A94F2u, 3);  /* 0C0A94F0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A94F2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A94F6u, 2);  /* 0C0A94F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A94F6 add #imm,Rn */
	IF(0x0C0A94F8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A94FAu, 2);  /* 0C0A94F8 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A94FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A94FEu, 2);  /* 0C0A94FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A9500u, 1);  /* 0C0A94FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9502u, 1);  /* 0C0A9500 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9504u, 1);  /* 0C0A9502 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9438u, 3); goto L_0C0A9438; }  /* 0C0A9504 bra */
L_0C0A9510: BLKS(0x0C0A9510u);
	r0 = 0xB4u; UPD(0x0C0A9512u, 1);  /* 0C0A9510 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9512 add #imm,Rn */
	IF(0x0C0A9514u); MACL = r8 * r0;  /* 0C0A9514 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9518u, 4);  /* 0C0A9516 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A951Au, 1);  /* 0C0A9518 mov.w @(disp,pc),Rn */
	IF(0x0C0A951Au); r3 = MACL;  /* 0C0A951A sts macl,Rn */
	r3 += r9;  /* 0C0A951C add Rm,Rn */
	IF(0x0C0A951Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9520u, 3);  /* 0C0A951E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A9520 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A9524u, 2);  /* 0C0A9522 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9524 add #imm,Rn */
	IF(0x0C0A9526u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9528u, 2);  /* 0C0A9526 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9528 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A952Cu, 2);  /* 0C0A952A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A952Eu, 1);  /* 0C0A952C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A952E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A9532u, 2);  /* 0C0A9530 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9534u, 1);  /* 0C0A9532 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9438u, 3); goto L_0C0A9438; }  /* 0C0A9534 bra */
L_0C0A9540: BLKS(0x0C0A9540u);
	r6 = 0xB4u; UPD(0x0C0A9542u, 1);  /* 0C0A9540 mov.w @(disp,pc),Rn */
	IF(0x0C0A9542u); MACL = r8 * r6;  /* 0C0A9542 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9546u, 3);  /* 0C0A9544 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A9548u, 1);  /* 0C0A9546 mov.w @(disp,pc),Rn */
	IF(0x0C0A9548u); r3 = MACL;  /* 0C0A9548 sts macl,Rn */
	r3 += r9;  /* 0C0A954A add Rm,Rn */
	IF(0x0C0A954Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A954Eu, 3);  /* 0C0A954C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A954E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9552u, 2);  /* 0C0A9550 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9552 add #imm,Rn */
	IF(0x0C0A9554u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9556u, 2);  /* 0C0A9554 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A9556 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A9558 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A955Cu, 3);  /* 0C0A955A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A955Eu, 1);  /* 0C0A955C mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9560u, 1);  /* 0C0A955E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9562u, 1);  /* 0C0A9560 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9438u, 3); goto L_0C0A9438; }  /* 0C0A9562 bra */
}

void blk_f_0C0A9590(sh3_t *c)
{
	LOCALS;
L_0C0A9590: BLKS(0x0C0A9590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9592u, 1);  /* 0C0A9590 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9594u, 1);  /* 0C0A9592 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A9594 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9598u, 2);  /* 0C0A9596 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A9598 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A959Cu, 2);  /* 0C0A959A mov.l @(disp,pc),Rn */
	IF(0x0C0A959Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A959Eu, 1);  /* 0C0A959C sts.l pr,@-Rn */
	IF(0x0C0A959Eu); { u32 t_ = r9; PR = 0x0C0A95A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A95A2u); }  /* 0C0A959E jsr @Rn */
L_0C0A95A2: BLKS(0x0C0A95A2u);
	r2 = r0;  /* 0C0A95A2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A95A4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A95A6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A95D0u, 6); goto L_0C0A95D0; }  /* 0C0A95A8 bt */
L_0C0A95AA: BLKS(0x0C0A95AAu);
	r0 = 0xC0A95B8u;  /* 0C0A95AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A95AC add Rm,Rn */
	IF(0x0C0A95AEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A95B0u, 3);  /* 0C0A95AE mov.w @(r0,Rm),Rn */
	IF(0x0C0A95B0u); { u32 tv_ = (r3 + 0x0C0A95B4u); u32 t_ = PHYS(tv_); IF(0x0C0A95B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A95D0u: goto L_0C0A95D0; case 0x0C0A9630u: goto L_0C0A9630; case 0x0C0A9660u: goto L_0C0A9660; case 0x0C0A96A0u: goto L_0C0A96A0; case 0x0C0A96D0u: goto L_0C0A96D0; default: JUMPD(tv_); } }  /* 0C0A95B0 braf Rn */
L_0C0A95D0: BLKS(0x0C0A95D0u);
	r6 = 0xB4u; UPD(0x0C0A95D2u, 1);  /* 0C0A95D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A95D2 add #imm,Rn */
	IF(0x0C0A95D4u); MACL = r8 * r6;  /* 0C0A95D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A95D8u, 4);  /* 0C0A95D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A95DAu, 1);  /* 0C0A95D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A95DAu); r3 = MACL;  /* 0C0A95DA sts macl,Rn */
	r3 += r9;  /* 0C0A95DC add Rm,Rn */
	IF(0x0C0A95DEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E0u, 3);  /* 0C0A95DE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A95E0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A95E4u, 2);  /* 0C0A95E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A95E4 add #imm,Rn */
	IF(0x0C0A95E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E8u, 2);  /* 0C0A95E6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A95E8 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A95EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A95EEu, 3);  /* 0C0A95EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A95F0u, 1);  /* 0C0A95EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A95F2u, 1);  /* 0C0A95F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A95F4u, 1);  /* 0C0A95F2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A95F6u, 1);  /* 0C0A95F4 mov.l @(disp,Rm),Rn */
L_0C0A95F6: BLKS(0x0C0A95F6u);
	IF(0x0C0A95F6u); { u32 t_ = r0; PR = 0x0C0A95FAu; IF(0x0C0A95F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A95FAu); }  /* 0C0A95F6 jsr @Rn */
L_0C0A95FA: BLKS(0x0C0A95FAu);
	r15 += 0x8u;  /* 0C0A95FA add #imm,Rn */
	UPD(0x0C0A95FCu, 1);
L_0C0A95FC: BLKS(0x0C0A95FCu);
	r6 = 0xB4u; UPD(0x0C0A95FEu, 1);  /* 0C0A95FC mov.w @(disp,pc),Rn */
	IF(0x0C0A95FEu); MACL = r8 * r6;  /* 0C0A95FE mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9602u, 3);  /* 0C0A9600 mov.w @(disp,pc),Rn */
	IF(0x0C0A9602u); r8 = MACL;  /* 0C0A9602 sts macl,Rn */
	r8 += r9;  /* 0C0A9604 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A9608u, 3);  /* 0C0A9606 mov.l @(disp,pc),Rn */
	IF(0x0C0A9608u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A960Au, 1);  /* 0C0A9608 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A960Cu, 1);  /* 0C0A960A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A960C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9610u, 2);  /* 0C0A960E mov.l @(disp,Rm),Rn */
	IF(0x0C0A9610u); { u32 t_ = r9; PR = 0x0C0A9614u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9614u); }  /* 0C0A9610 jsr @Rn */
L_0C0A9614: BLKS(0x0C0A9614u);
	r9 = 0x0u;  /* 0C0A9614 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A9618u, 2);  /* 0C0A9616 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9618 mov Rm,Rn */
	IF(0x0C0A961Au); PR = R32(r15); r15 += 4; UPD(0x0C0A961Cu, 2);  /* 0C0A961A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A961Eu, 1);  /* 0C0A961C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9620u, 1);  /* 0C0A961E mov.l @Rm+,Rn */
	IF(0x0C0A9620u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9620 rts */
L_0C0A9630: BLKS(0x0C0A9630u);
	r0 = 0xB4u; UPD(0x0C0A9632u, 1);  /* 0C0A9630 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9632 add #imm,Rn */
	IF(0x0C0A9634u); MACL = r8 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9638u, 4);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A963Au, 1);  /* 0C0A9638 mov.w @(disp,pc),Rn */
	IF(0x0C0A963Au); r3 = MACL;  /* 0C0A963A sts macl,Rn */
	r3 += r9;  /* 0C0A963C add Rm,Rn */
	IF(0x0C0A963Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9640u, 3);  /* 0C0A963E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9640 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9644u, 2);  /* 0C0A9642 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9644 add #imm,Rn */
	IF(0x0C0A9646u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9648u, 2);  /* 0C0A9646 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9648 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A964A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A964Eu, 3);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A9654 bra */
L_0C0A9660: BLKS(0x0C0A9660u);
	r0 = 0xB4u; UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A9662 add #imm,Rn */
	IF(0x0C0A9664u); MACL = r8 * r0;  /* 0C0A9664 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9668u, 4);  /* 0C0A9666 mov.l @(disp,pc),Rn */
	IF(0x0C0A9668u); r3 = MACL;  /* 0C0A9668 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A966Cu, 2);  /* 0C0A966A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A966C add Rm,Rn */
	IF(0x0C0A966Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9670u, 2);  /* 0C0A966E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9670 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A9674u, 2);  /* 0C0A9672 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9674 add #imm,Rn */
	IF(0x0C0A9676u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9678 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A967A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A967Eu, 3);  /* 0C0A967C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A9680u, 1);  /* 0C0A967E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A9682u, 1);  /* 0C0A9680 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A9684u, 1);  /* 0C0A9682 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BE860u; UPD(0x0C0A9686u, 1);  /* 0C0A9684 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A9688u, 1);  /* 0C0A9686 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A968Au, 1);  /* 0C0A9688 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A968Cu, 1);  /* 0C0A968A mov.l @(disp,Rm),Rn */
	IF(0x0C0A968Cu); { u32 t_ = r0; PR = 0x0C0A9690u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A9690u); }  /* 0C0A968C jsr @Rn */
L_0C0A9690: BLKS(0x0C0A9690u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A95FCu, 3); goto L_0C0A95FC; }  /* 0C0A9690 bra */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r6 = 0xB4u; UPD(0x0C0A96A2u, 1);  /* 0C0A96A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96A2 add #imm,Rn */
	IF(0x0C0A96A4u); MACL = r8 * r6;  /* 0C0A96A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96A8u, 4);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96AAu, 1);  /* 0C0A96A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96AAu); r3 = MACL;  /* 0C0A96AA sts macl,Rn */
	r3 += r9;  /* 0C0A96AC add Rm,Rn */
	IF(0x0C0A96AEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B0u, 3);  /* 0C0A96AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A96B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A96B4u, 2);  /* 0C0A96B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96B4 add #imm,Rn */
	IF(0x0C0A96B6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B8u, 2);  /* 0C0A96B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96B8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A96BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A96BEu, 3);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96C4 bra */
L_0C0A96D0: BLKS(0x0C0A96D0u);
	r5 = 0xB4u; UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96D2 add #imm,Rn */
	IF(0x0C0A96D4u); MACL = r8 * r5;  /* 0C0A96D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96D8u, 4);  /* 0C0A96D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96DAu); r3 = MACL;  /* 0C0A96DA sts macl,Rn */
	r3 += r9;  /* 0C0A96DC add Rm,Rn */
	IF(0x0C0A96DEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96E0u, 3);  /* 0C0A96DE mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96E0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A96E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A96E6u, 3);  /* 0C0A96E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96E6 add #imm,Rn */
	IF(0x0C0A96E8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96EAu, 2);  /* 0C0A96E8 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A96EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A96F0u, 1);  /* 0C0A96EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96F2u, 1);  /* 0C0A96F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96F4u, 1);  /* 0C0A96F2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96F4 bra */
}

/* FUN_0c0a9720 */
void blk_f_0C0A9720(sh3_t *c)
{
	LOCALS;
L_0C0A9720: BLKS(0x0C0A9720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9722u, 1);  /* 0C0A9720 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9724u, 1);  /* 0C0A9722 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A9724 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9728u, 2);  /* 0C0A9726 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A9728 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A972Cu, 2);  /* 0C0A972A mov.l @(disp,pc),Rn */
	IF(0x0C0A972Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A972Eu, 1);  /* 0C0A972C sts.l pr,@-Rn */
	IF(0x0C0A972Eu); { u32 t_ = r9; PR = 0x0C0A9732u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A9732u); }  /* 0C0A972E jsr @Rn */
L_0C0A9732: BLKS(0x0C0A9732u);
	r2 = r0;  /* 0C0A9732 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A9734 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A9736 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A9760u, 6); goto L_0C0A9760; }  /* 0C0A9738 bt */
L_0C0A973A: BLKS(0x0C0A973Au);
	r0 = 0xC0A9748u;  /* 0C0A973A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A973C add Rm,Rn */
	IF(0x0C0A973Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A9740u, 3);  /* 0C0A973E mov.w @(r0,Rm),Rn */
	IF(0x0C0A9740u); { u32 tv_ = (r3 + 0x0C0A9744u); u32 t_ = PHYS(tv_); IF(0x0C0A9742u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9760u: goto L_0C0A9760; case 0x0C0A97C0u: goto L_0C0A97C0; case 0x0C0A97F0u: goto L_0C0A97F0; case 0x0C0A9830u: goto L_0C0A9830; case 0x0C0A9860u: goto L_0C0A9860; default: JUMPD(tv_); } }  /* 0C0A9740 braf Rn */
L_0C0A9760: BLKS(0x0C0A9760u);
	r6 = 0xB4u; UPD(0x0C0A9762u, 1);  /* 0C0A9760 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9762 add #imm,Rn */
	IF(0x0C0A9764u); MACL = r8 * r6;  /* 0C0A9764 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9768u, 4);  /* 0C0A9766 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A976Au, 1);  /* 0C0A9768 mov.w @(disp,pc),Rn */
	IF(0x0C0A976Au); r3 = MACL;  /* 0C0A976A sts macl,Rn */
	r3 += r9;  /* 0C0A976C add Rm,Rn */
	IF(0x0C0A976Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9770u, 3);  /* 0C0A976E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9770 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9774u, 2);  /* 0C0A9772 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9774 add #imm,Rn */
	IF(0x0C0A9776u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9778u, 2);  /* 0C0A9776 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A9778 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A977A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A977Eu, 3);  /* 0C0A977C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A9780u, 1);  /* 0C0A977E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9782u, 1);  /* 0C0A9780 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9784u, 1);  /* 0C0A9782 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A9786u, 1);  /* 0C0A9784 mov.l @(disp,Rm),Rn */
L_0C0A9786: BLKS(0x0C0A9786u);
	IF(0x0C0A9786u); { u32 t_ = r0; PR = 0x0C0A978Au; IF(0x0C0A9788u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A978Au); }  /* 0C0A9786 jsr @Rn */
L_0C0A978A: BLKS(0x0C0A978Au);
	r15 += 0x8u;  /* 0C0A978A add #imm,Rn */
	UPD(0x0C0A978Cu, 1);
L_0C0A978C: BLKS(0x0C0A978Cu);
	r6 = 0xB4u; UPD(0x0C0A978Eu, 1);  /* 0C0A978C mov.w @(disp,pc),Rn */
	IF(0x0C0A978Eu); MACL = r8 * r6;  /* 0C0A978E mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9792u, 3);  /* 0C0A9790 mov.w @(disp,pc),Rn */
	IF(0x0C0A9792u); r8 = MACL;  /* 0C0A9792 sts macl,Rn */
	r8 += r9;  /* 0C0A9794 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A9798u, 3);  /* 0C0A9796 mov.l @(disp,pc),Rn */
	IF(0x0C0A9798u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A979Au, 1);  /* 0C0A9798 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A979Cu, 1);  /* 0C0A979A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A979C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A97A0u, 2);  /* 0C0A979E mov.l @(disp,Rm),Rn */
	IF(0x0C0A97A0u); { u32 t_ = r9; PR = 0x0C0A97A4u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A97A4u); }  /* 0C0A97A0 jsr @Rn */
L_0C0A97A4: BLKS(0x0C0A97A4u);
	r9 = 0x0u;  /* 0C0A97A4 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A97A8u, 2);  /* 0C0A97A6 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A97A8 mov Rm,Rn */
	IF(0x0C0A97AAu); PR = R32(r15); r15 += 4; UPD(0x0C0A97ACu, 2);  /* 0C0A97AA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A97AEu, 1);  /* 0C0A97AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A97B0u, 1);  /* 0C0A97AE mov.l @Rm+,Rn */
	IF(0x0C0A97B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A97B0 rts */
L_0C0A97C0: BLKS(0x0C0A97C0u);
	r0 = 0xB4u; UPD(0x0C0A97C2u, 1);  /* 0C0A97C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A97C2 add #imm,Rn */
	IF(0x0C0A97C4u); MACL = r8 * r0;  /* 0C0A97C4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A97C8u, 4);  /* 0C0A97C6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A97CAu, 1);  /* 0C0A97C8 mov.w @(disp,pc),Rn */
	IF(0x0C0A97CAu); r3 = MACL;  /* 0C0A97CA sts macl,Rn */
	r3 += r9;  /* 0C0A97CC add Rm,Rn */
	IF(0x0C0A97CEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A97D0u, 3);  /* 0C0A97CE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A97D0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A97D4u, 2);  /* 0C0A97D2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A97D4 add #imm,Rn */
	IF(0x0C0A97D6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A97D8u, 2);  /* 0C0A97D6 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A97D8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A97DA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A97DEu, 3);  /* 0C0A97DC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A97E0u, 1);  /* 0C0A97DE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A97E2u, 1);  /* 0C0A97E0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A97E4u, 1);  /* 0C0A97E2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9786u, 3); goto L_0C0A9786; }  /* 0C0A97E4 bra */
L_0C0A97F0: BLKS(0x0C0A97F0u);
	r0 = 0xB4u; UPD(0x0C0A97F2u, 1);  /* 0C0A97F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A97F2 add #imm,Rn */
	IF(0x0C0A97F4u); MACL = r8 * r0;  /* 0C0A97F4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A97F8u, 4);  /* 0C0A97F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A97F8u); r3 = MACL;  /* 0C0A97F8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A97FCu, 2);  /* 0C0A97FA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A97FC add Rm,Rn */
	IF(0x0C0A97FEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9800u, 2);  /* 0C0A97FE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9800 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A9804u, 2);  /* 0C0A9802 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9804 add #imm,Rn */
	IF(0x0C0A9806u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9808u, 2);  /* 0C0A9806 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A9808 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A980A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A980Eu, 3);  /* 0C0A980C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A9810u, 1);  /* 0C0A980E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A9812u, 1);  /* 0C0A9810 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A9814u, 1);  /* 0C0A9812 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BE860u; UPD(0x0C0A9816u, 1);  /* 0C0A9814 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A9818u, 1);  /* 0C0A9816 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A981Au, 1);  /* 0C0A9818 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A981Cu, 1);  /* 0C0A981A mov.l @(disp,Rm),Rn */
	IF(0x0C0A981Cu); { u32 t_ = r0; PR = 0x0C0A9820u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A9820u); }  /* 0C0A981C jsr @Rn */
L_0C0A9820: BLKS(0x0C0A9820u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A978Cu, 3); goto L_0C0A978C; }  /* 0C0A9820 bra */
L_0C0A9830: BLKS(0x0C0A9830u);
	r6 = 0xB4u; UPD(0x0C0A9832u, 1);  /* 0C0A9830 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9832 add #imm,Rn */
	IF(0x0C0A9834u); MACL = r8 * r6;  /* 0C0A9834 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9838u, 4);  /* 0C0A9836 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A983Au, 1);  /* 0C0A9838 mov.w @(disp,pc),Rn */
	IF(0x0C0A983Au); r3 = MACL;  /* 0C0A983A sts macl,Rn */
	r3 += r9;  /* 0C0A983C add Rm,Rn */
	IF(0x0C0A983Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9840u, 3);  /* 0C0A983E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9840 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9844u, 2);  /* 0C0A9842 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9844 add #imm,Rn */
	IF(0x0C0A9846u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9848u, 2);  /* 0C0A9846 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9848 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A984A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A984Eu, 3);  /* 0C0A984C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A9850u, 1);  /* 0C0A984E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9852u, 1);  /* 0C0A9850 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9854u, 1);  /* 0C0A9852 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9786u, 3); goto L_0C0A9786; }  /* 0C0A9854 bra */
L_0C0A9860: BLKS(0x0C0A9860u);
	r5 = 0xB4u; UPD(0x0C0A9862u, 1);  /* 0C0A9860 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9862 add #imm,Rn */
	IF(0x0C0A9864u); MACL = r8 * r5;  /* 0C0A9864 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9868u, 4);  /* 0C0A9866 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A986Au, 1);  /* 0C0A9868 mov.w @(disp,pc),Rn */
	IF(0x0C0A986Au); r3 = MACL;  /* 0C0A986A sts macl,Rn */
	r3 += r9;  /* 0C0A986C add Rm,Rn */
	IF(0x0C0A986Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9870u, 3);  /* 0C0A986E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9870 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A9872 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A9876u, 3);  /* 0C0A9874 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9876 add #imm,Rn */
	IF(0x0C0A9878u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A987Au, 2);  /* 0C0A9878 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A987A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A987Eu, 2);  /* 0C0A987C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A9880u, 1);  /* 0C0A987E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9882u, 1);  /* 0C0A9880 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9884u, 1);  /* 0C0A9882 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9786u, 3); goto L_0C0A9786; }  /* 0C0A9884 bra */
}

/* FUN_0c0a98b0 */
void blk_f_0C0A98B0(sh3_t *c)
{
	LOCALS;
L_0C0A98B0: BLKS(0x0C0A98B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98B2u, 1);  /* 0C0A98B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98B4u, 1);  /* 0C0A98B2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A98B4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A98B8u, 2);  /* 0C0A98B6 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A98B8 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A98BCu, 2);  /* 0C0A98BA mov.l @(disp,pc),Rn */
	IF(0x0C0A98BCu); r15 -= 4; W32(r15, PR); UPD(0x0C0A98BEu, 1);  /* 0C0A98BC sts.l pr,@-Rn */
	IF(0x0C0A98BEu); { u32 t_ = r9; PR = 0x0C0A98C2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A98C2u); }  /* 0C0A98BE jsr @Rn */
L_0C0A98C2: BLKS(0x0C0A98C2u);
	r2 = r0;  /* 0C0A98C2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A98C4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A98C6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A98D0u, 6); goto L_0C0A98D0; }  /* 0C0A98C8 bf */
L_0C0A98CA: BLKS(0x0C0A98CAu);
	r15 += 0xFFFFFFF8u;  /* 0C0A98CA add #imm,Rn */
	{ IF(0x0C0A98CEu); ; /* slot nop */ UPD(0x0C0A9A20u, 4); goto L_0C0A9A20; }  /* 0C0A98CC bra */
L_0C0A98D0: BLKS(0x0C0A98D0u);
	r0 = 0xC0A98E0u;  /* 0C0A98D0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A98D2 add Rm,Rn */
	IF(0x0C0A98D4u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A98D6u, 3);  /* 0C0A98D4 mov.w @(r0,Rm),Rn */
	IF(0x0C0A98D6u); { u32 tv_ = (r3 + 0x0C0A98DAu); u32 t_ = PHYS(tv_); IF(0x0C0A98D8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A98F0u: goto L_0C0A98F0; case 0x0C0A9950u: goto L_0C0A9950; case 0x0C0A9980u: goto L_0C0A9980; case 0x0C0A99C0u: goto L_0C0A99C0; case 0x0C0A99F0u: goto L_0C0A99F0; default: JUMPD(tv_); } }  /* 0C0A98D6 braf Rn */
L_0C0A98F0: BLKS(0x0C0A98F0u);
	r0 = 0xB4u; UPD(0x0C0A98F2u, 1);  /* 0C0A98F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A98F2 add #imm,Rn */
	IF(0x0C0A98F4u); MACL = r8 * r0;  /* 0C0A98F4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A98F8u, 4);  /* 0C0A98F6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A98FAu, 1);  /* 0C0A98F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A98FAu); r3 = MACL;  /* 0C0A98FA sts macl,Rn */
	r3 += r9;  /* 0C0A98FC add Rm,Rn */
	IF(0x0C0A98FEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9900u, 3);  /* 0C0A98FE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9900 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9904u, 2);  /* 0C0A9902 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9904 add #imm,Rn */
	IF(0x0C0A9906u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9908u, 2);  /* 0C0A9906 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A9908 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A990A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A990Eu, 3);  /* 0C0A990C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0A9910u, 1);  /* 0C0A990E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9912u, 1);  /* 0C0A9910 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9914u, 1);  /* 0C0A9912 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A9916u, 1);  /* 0C0A9914 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9916u); ;  /* 0C0A9916 nop */
	UPD(0x0C0A9918u, 1);
L_0C0A9918: BLKS(0x0C0A9918u);
	IF(0x0C0A9918u); { u32 t_ = r0; PR = 0x0C0A991Cu; IF(0x0C0A991Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A991Cu); }  /* 0C0A9918 jsr @Rn */
L_0C0A991C: BLKS(0x0C0A991Cu);
	r15 += 0x8u;  /* 0C0A991C add #imm,Rn */
	UPD(0x0C0A991Eu, 1);
L_0C0A991E: BLKS(0x0C0A991Eu);
	r4 = 0xB4u; UPD(0x0C0A9920u, 1);  /* 0C0A991E mov.w @(disp,pc),Rn */
	IF(0x0C0A9920u); MACL = r8 * r4;  /* 0C0A9920 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9924u, 3);  /* 0C0A9922 mov.w @(disp,pc),Rn */
	IF(0x0C0A9924u); r8 = MACL;  /* 0C0A9924 sts macl,Rn */
	r8 += r9;  /* 0C0A9926 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A992Au, 3);  /* 0C0A9928 mov.l @(disp,pc),Rn */
	IF(0x0C0A992Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A992Cu, 1);  /* 0C0A992A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A992Eu, 1);  /* 0C0A992C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A992E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9932u, 2);  /* 0C0A9930 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9932u); { u32 t_ = r9; PR = 0x0C0A9936u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9936u); }  /* 0C0A9932 jsr @Rn */
L_0C0A9936: BLKS(0x0C0A9936u);
	r9 = 0x0u;  /* 0C0A9936 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A993Au, 2);  /* 0C0A9938 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A993A mov Rm,Rn */
	IF(0x0C0A993Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A993Eu, 2);  /* 0C0A993C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9940u, 1);  /* 0C0A993E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9942u, 1);  /* 0C0A9940 mov.l @Rm+,Rn */
	IF(0x0C0A9942u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9942 rts */
L_0C0A9950: BLKS(0x0C0A9950u);
	r5 = 0xB4u; UPD(0x0C0A9952u, 1);  /* 0C0A9950 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9952 add #imm,Rn */
	IF(0x0C0A9954u); MACL = r8 * r5;  /* 0C0A9954 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9958u, 4);  /* 0C0A9956 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A995Au, 1);  /* 0C0A9958 mov.w @(disp,pc),Rn */
	IF(0x0C0A995Au); r3 = MACL;  /* 0C0A995A sts macl,Rn */
	r3 += r9;  /* 0C0A995C add Rm,Rn */
	IF(0x0C0A995Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9960u, 3);  /* 0C0A995E mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A9960 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A9962 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A9966u, 3);  /* 0C0A9964 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9966 add #imm,Rn */
	IF(0x0C0A9968u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A996Au, 2);  /* 0C0A9968 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A996A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A996Eu, 2);  /* 0C0A996C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9970u, 1);  /* 0C0A996E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9972u, 1);  /* 0C0A9970 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9974u, 1);  /* 0C0A9972 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9918u, 3); goto L_0C0A9918; }  /* 0C0A9974 bra */
L_0C0A9980: BLKS(0x0C0A9980u);
	r3 = 0xB4u; UPD(0x0C0A9982u, 1);  /* 0C0A9980 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A9982 add #imm,Rn */
	IF(0x0C0A9984u); MACL = r8 * r3;  /* 0C0A9984 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9988u, 4);  /* 0C0A9986 mov.l @(disp,pc),Rn */
	IF(0x0C0A9988u); r3 = MACL;  /* 0C0A9988 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A998Cu, 2);  /* 0C0A998A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A998C add Rm,Rn */
	IF(0x0C0A998Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9990u, 2);  /* 0C0A998E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9990 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9994u, 2);  /* 0C0A9992 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9994 add #imm,Rn */
	IF(0x0C0A9996u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9998u, 2);  /* 0C0A9996 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A9998 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A999A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A999Eu, 3);  /* 0C0A999C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A99A0u, 1);  /* 0C0A999E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A99A2u, 1);  /* 0C0A99A0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A99A4u, 1);  /* 0C0A99A2 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A99A6u, 1);  /* 0C0A99A4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BE860u; UPD(0x0C0A99A8u, 1);  /* 0C0A99A6 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A99AAu, 1);  /* 0C0A99A8 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A99ACu, 1);  /* 0C0A99AA mov.l @(disp,Rm),Rn */
	IF(0x0C0A99ACu); { u32 t_ = r0; PR = 0x0C0A99B0u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A99B0u); }  /* 0C0A99AC jsr @Rn */
L_0C0A99B0: BLKS(0x0C0A99B0u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A991Eu, 3); goto L_0C0A991E; }  /* 0C0A99B0 bra */
L_0C0A99C0: BLKS(0x0C0A99C0u);
	r4 = 0xB4u; UPD(0x0C0A99C2u, 1);  /* 0C0A99C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A99C2 add #imm,Rn */
	IF(0x0C0A99C4u); MACL = r8 * r4;  /* 0C0A99C4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A99C8u, 4);  /* 0C0A99C6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0A99C8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A99CCu, 2);  /* 0C0A99CA mov.w @(disp,pc),Rn */
	IF(0x0C0A99CCu); r3 = MACL;  /* 0C0A99CC sts macl,Rn */
	r3 += r9;  /* 0C0A99CE add Rm,Rn */
	IF(0x0C0A99D0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A99D2u, 3);  /* 0C0A99D0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A99D2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A99D6u, 2);  /* 0C0A99D4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A99D6 add #imm,Rn */
	IF(0x0C0A99D8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A99DAu, 2);  /* 0C0A99D8 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A99DA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A99DEu, 2);  /* 0C0A99DC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A99E0u, 1);  /* 0C0A99DE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A99E2u, 1);  /* 0C0A99E0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A99E4u, 1);  /* 0C0A99E2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9918u, 3); goto L_0C0A9918; }  /* 0C0A99E4 bra */
L_0C0A99F0: BLKS(0x0C0A99F0u);
	r0 = 0xB4u; UPD(0x0C0A99F2u, 1);  /* 0C0A99F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A99F2 add #imm,Rn */
	IF(0x0C0A99F4u); MACL = r8 * r0;  /* 0C0A99F4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A99F8u, 4);  /* 0C0A99F6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A99FAu, 1);  /* 0C0A99F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A99FAu); r3 = MACL;  /* 0C0A99FA sts macl,Rn */
	r3 += r9;  /* 0C0A99FC add Rm,Rn */
	IF(0x0C0A99FEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9A00u, 3);  /* 0C0A99FE mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A9A00 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A9A04u, 2);  /* 0C0A9A02 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9A04 add #imm,Rn */
	IF(0x0C0A9A06u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9A08u, 2);  /* 0C0A9A06 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9A08 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A9A0Cu, 2);  /* 0C0A9A0A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A9A0Eu, 1);  /* 0C0A9A0C mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0A9A0E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A9A12u, 2);  /* 0C0A9A10 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9A14u, 1);  /* 0C0A9A12 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9918u, 3); goto L_0C0A9918; }  /* 0C0A9A14 bra */
L_0C0A9A20: BLKS(0x0C0A9A20u);
	r6 = 0xB4u; UPD(0x0C0A9A22u, 1);  /* 0C0A9A20 mov.w @(disp,pc),Rn */
	IF(0x0C0A9A22u); MACL = r8 * r6;  /* 0C0A9A22 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9A26u, 3);  /* 0C0A9A24 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A9A28u, 1);  /* 0C0A9A26 mov.w @(disp,pc),Rn */
	IF(0x0C0A9A28u); r3 = MACL;  /* 0C0A9A28 sts macl,Rn */
	r3 += r9;  /* 0C0A9A2A add Rm,Rn */
	IF(0x0C0A9A2Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9A2Eu, 3);  /* 0C0A9A2C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9A2E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9A32u, 2);  /* 0C0A9A30 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9A32 add #imm,Rn */
	IF(0x0C0A9A34u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9A36u, 2);  /* 0C0A9A34 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A9A36 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A9A38 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A9A3Cu, 3);  /* 0C0A9A3A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A9A3Eu, 1);  /* 0C0A9A3C mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9A40u, 1);  /* 0C0A9A3E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9A42u, 1);  /* 0C0A9A40 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A9918u, 3); goto L_0C0A9918; }  /* 0C0A9A42 bra */
}

/* FUN_0c0a9a70 */
void blk_f_0C0A9A70(sh3_t *c)
{
	LOCALS;
L_0C0A9A70: BLKS(0x0C0A9A70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A72u, 1);  /* 0C0A9A70 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A9A72 exts.w Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0A9A76u, 2);  /* 0C0A9A74 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A78u, 1);  /* 0C0A9A76 mov.l Rm,@-Rn */
	IF(0x0C0A9A78u); MACL = r1 * r7;  /* 0C0A9A78 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9A7Cu, 3);  /* 0C0A9A7A mov.l Rm,@-Rn */
	r6 = 0xC286578u; UPD(0x0C0A9A7Eu, 1);  /* 0C0A9A7C mov.l @(disp,pc),Rn */
	IF(0x0C0A9A7Eu); r8 = MACL;  /* 0C0A9A7E sts macl,Rn */
	IF(0x0C0A9A80u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9A82u, 2);  /* 0C0A9A80 sts.l pr,@-Rn */
	r8 += r6;  /* 0C0A9A82 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A9A86u, 2);  /* 0C0A9A84 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A9A86 mov Rm,Rn */
	IF(0x0C0A9A88u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A9A8Au, 2);  /* 0C0A9A88 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9A8A add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A9A8C extu.b Rm,Rn */
	r9 = 0xA9u; UPD(0x0C0A9A90u, 3);  /* 0C0A9A8E mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0A9A90 mov #imm,Rn */
	W32(r15, r4); UPD(0x0C0A9A94u, 2);  /* 0C0A9A92 mov.l Rm,@Rn */
	r9 += r8;  /* 0C0A9A94 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9A98u, 2);  /* 0C0A9A96 mov.b @Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0A9A9Au, 1);  /* 0C0A9A98 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C0A9A9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A9A9Eu, 2);  /* 0C0A9A9C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0A9AA0u, 1);  /* 0C0A9A9E mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A9AA2u, 1);  /* 0C0A9AA0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9AA2u); { u32 t_ = r0; PR = 0x0C0A9AA6u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0A9AA6u); }  /* 0C0A9AA2 jsr @Rn */
L_0C0A9AA6: BLKS(0x0C0A9AA6u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A9AA8u, 1);  /* 0C0A9AA6 mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C0A9AA8 mov #imm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A9AAA extu.b Rm,Rn */
	r0 = 0x20000u; UPD(0x0C0A9AAEu, 3);  /* 0C0A9AAC mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0A9AAE mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0A9AB2u, 2);  /* 0C0A9AB0 mov.l Rm,@Rn */
	r0 = 0xC07CD80u; UPD(0x0C0A9AB4u, 1);  /* 0C0A9AB2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A9AB6u, 1);  /* 0C0A9AB4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9AB8u, 1);  /* 0C0A9AB6 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9AB8u); { u32 t_ = r0; PR = 0x0C0A9ABCu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0A9ABCu); }  /* 0C0A9AB8 jsr @Rn */
L_0C0A9ABC: BLKS(0x0C0A9ABCu);
	W32(r8, r9); UPD(0x0C0A9ABEu, 1);  /* 0C0A9ABC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9ABE mov Rm,Rn */
	IF(0x0C0A9AC0u); PR = R32(r15); r15 += 4; UPD(0x0C0A9AC2u, 2);  /* 0C0A9AC0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9AC4u, 1);  /* 0C0A9AC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9AC6u, 1);  /* 0C0A9AC4 mov.l @Rm+,Rn */
	IF(0x0C0A9AC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9AC6 rts */
}

/* FUN_0c0a9ae0 */
void blk_f_0C0A9AE0(sh3_t *c)
{
	LOCALS;
L_0C0A9AE0: BLKS(0x0C0A9AE0u);
	r3 = 0xB4u; UPD(0x0C0A9AE2u, 1);  /* 0C0A9AE0 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0A9AE2 exts.w Rm,Rn */
	IF(0x0C0A9AE4u); MACL = r0 * r3;  /* 0C0A9AE4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0A9AE8u, 4);  /* 0C0A9AE6 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0A9AE8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9AECu, 2);  /* 0C0A9AEA mov.l Rm,@-Rn */
	IF(0x0C0A9AECu); r3 = MACL;  /* 0C0A9AEC sts macl,Rn */
	r3 += r7;  /* 0C0A9AEE add Rm,Rn */
	r4 = R32(r3 + 0x8u); UPD(0x0C0A9AF2u, 3);  /* 0C0A9AF0 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A9AF2 mov Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0A9AF6u, 2);  /* 0C0A9AF4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9AF6u); ARG0(0x442Du); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A9AF6 shld Rm,Rn */
	r4 += r6;  /* 0C0A9AF8 add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C0A9AFCu, 3);  /* 0C0A9AFA mov.l @(disp,Rm),Rn */
	r3 += 0x40u;  /* 0C0A9AFC add #imm,Rn */
	W32(r3, r5); UPD(0x0C0A9B00u, 2);  /* 0C0A9AFE mov.l Rm,@Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0A9B02u, 1);  /* 0C0A9B00 mov.l @(disp,Rm),Rn */
	r3 += 0x4u;  /* 0C0A9B02 add #imm,Rn */
	W32(r3, r1); UPD(0x0C0A9B06u, 2);  /* 0C0A9B04 mov.l Rm,@Rn */
	r4 += 0xEu;  /* 0C0A9B06 add #imm,Rn */
	r0 = 0xC3C4170u; UPD(0x0C0A9B0Au, 2);  /* 0C0A9B08 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A9B0Cu, 1);  /* 0C0A9B0A mov.b @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A9B0Eu, 1);  /* 0C0A9B0C mov.w @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A9B0E extu.b Rm,Rn */
	IF(0x0C0A9B10u); MACL = r7 * r0;  /* 0C0A9B10 mul.l Rm,Rn */
	IF(0x0C0A9B12u); r2 = MACL;  /* 0C0A9B12 sts macl,Rn */
	IF(0x0C0A9B14u); T = (s32)r2 >= 0;  /* 0C0A9B14 cmp/pz Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFF8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9B30u, 8); goto L_0C0A9B30; } UPD(0x0C0A9B1Au, 1); goto L_0C0A9B1A; }  /* 0C0A9B16 bf/s */
L_0C0A9B1A: BLKS(0x0C0A9B1Au);
	r4 = 0xFFFFFFFCu;  /* 0C0A9B1A mov #imm,Rn */
	IF(0x0C0A9B1Cu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0A9B1C shad Rm,Rn */
	r7 += r2;  /* 0C0A9B1E add Rm,Rn */
	W16(r3, r7); UPD(0x0C0A9B22u, 4);  /* 0C0A9B20 mov.w Rm,@Rn */
	r15 = r14;  /* 0C0A9B22 mov Rm,Rn */
	IF(0x0C0A9B24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9B24 rts */
L_0C0A9B30: BLKS(0x0C0A9B30u);
	{ r2 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0A9B1Au, 3); goto L_0C0A9B1A; }  /* 0C0A9B30 bra */
}

/* FUN_0c0a9b40 */
void blk_f_0C0A9B40(sh3_t *c)
{
	LOCALS;
L_0C0A9B40: BLKS(0x0C0A9B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9B42u, 1);  /* 0C0A9B40 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A9B42 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0A9B46u, 2);  /* 0C0A9B44 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9B48u, 1);  /* 0C0A9B46 mov.l Rm,@-Rn */
	IF(0x0C0A9B48u); MACL = r4 * r0;  /* 0C0A9B48 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9B4Cu, 3);  /* 0C0A9B4A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0A9B4Eu, 1);  /* 0C0A9B4C mov.l @(disp,pc),Rn */
	IF(0x0C0A9B4Eu); r2 = MACL;  /* 0C0A9B4E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9B52u, 2);  /* 0C0A9B50 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C0A9B52 add Rm,Rn */
	r5 = 0x8Cu; UPD(0x0C0A9B56u, 2);  /* 0C0A9B54 mov.w @(disp,pc),Rn */
	IF(0x0C0A9B56u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9B58u, 1);  /* 0C0A9B56 sts.l pr,@-Rn */
	r5 += r2;  /* 0C0A9B58 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0A9B5Cu, 2);  /* 0C0A9B5A mov.w @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A9B5Eu, 1);  /* 0C0A9B5C mov.l @Rm,Rn */
	IF(0x0C0A9B5Eu); r1 = R32(r0 + r2); UPD(0x0C0A9B60u, 1);  /* 0C0A9B5E mov.l @(r0,Rm),Rn */
	T = r7 == r1;  /* 0C0A9B60 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9B7Eu, 4); goto L_0C0A9B7E; } goto L_0C0A9B66; }  /* 0C0A9B62 bt/s */
L_0C0A9B66: BLKS(0x0C0A9B66u);
	r3 = r7;  /* 0C0A9B66 mov Rm,Rn */
	r3 -= r1;  /* 0C0A9B68 sub Rm,Rn */
	IF(0x0C0A9B6Au); T = (s32)r3 >= 0;  /* 0C0A9B6A cmp/pz Rn */
	{ u32 c_ = T; r6 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9B74u, 7); goto L_0C0A9B74; } goto L_0C0A9B70; }  /* 0C0A9B6C bt/s */
L_0C0A9B70: BLKS(0x0C0A9B70u);
	{ r6 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A9C80u, 4); goto L_0C0A9C80; }  /* 0C0A9B70 bra */
L_0C0A9B74: BLKS(0x0C0A9B74u);
	r0 = 0x90u; UPD(0x0C0A9B76u, 1);  /* 0C0A9B74 mov.w @(disp,pc),Rn */
	IF(0x0C0A9B76u); r2 = R32(r0 + r2); UPD(0x0C0A9B78u, 1);  /* 0C0A9B76 mov.l @(r0,Rm),Rn */
	T = (s32)r6 >= (s32)r2;  /* 0C0A9B78 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A9C60u, 4); goto L_0C0A9C60; }  /* 0C0A9B7A bt */
L_0C0A9B7C: BLKS(0x0C0A9B7Cu);
	W32(r5, r1); UPD(0x0C0A9B7Eu, 1);  /* 0C0A9B7C mov.l Rm,@Rn */
L_0C0A9B7E: BLKS(0x0C0A9B7Eu);
	r5 = 0xB4u; UPD(0x0C0A9B80u, 1);  /* 0C0A9B7E mov.w @(disp,pc),Rn */
	IF(0x0C0A9B80u); MACL = r4 * r5;  /* 0C0A9B80 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0A9B84u, 3);  /* 0C0A9B82 mov.l @(disp,pc),Rn */
	IF(0x0C0A9B84u); r3 = MACL;  /* 0C0A9B84 sts macl,Rn */
	r7 = 0x88u; UPD(0x0C0A9B88u, 2);  /* 0C0A9B86 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0A9B88 add Rm,Rn */
	r0 = 0x86u; UPD(0x0C0A9B8Cu, 2);  /* 0C0A9B8A mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0A9B8C add Rm,Rn */
	r7 += 0x2u;  /* 0C0A9B8E add #imm,Rn */
	r0 += r3;  /* 0C0A9B90 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A9B94u, 4);  /* 0C0A9B92 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A9B96u, 1);  /* 0C0A9B94 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0A9B96 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C0A9B98 exts.w Rm,Rn */
	T = r2 == r1;  /* 0C0A9B9A cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9BB0u, 6); goto L_0C0A9BB0; } goto L_0C0A9BA0; }  /* 0C0A9B9C bt/s */
L_0C0A9BA0: BLKS(0x0C0A9BA0u);
	r3 = r2;  /* 0C0A9BA0 mov Rm,Rn */
	r9 = 0x7FC0u; UPD(0x0C0A9BA4u, 3);  /* 0C0A9BA2 mov.w @(disp,pc),Rn */
	r3 -= r1;  /* 0C0A9BA4 sub Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A9BA8u, 2);  /* 0C0A9BA6 mov.w @Rm,Rn */
	r3 &= r9;  /* 0C0A9BA8 and Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0A9BAA cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A9C40u, 5); goto L_0C0A9C40; }  /* 0C0A9BAC bt */
L_0C0A9BAE: BLKS(0x0C0A9BAEu);
	W16(r0, r5); UPD(0x0C0A9BB0u, 1);  /* 0C0A9BAE mov.w Rm,@Rn */
L_0C0A9BB0: BLKS(0x0C0A9BB0u);
	r3 = 0xB4u; UPD(0x0C0A9BB2u, 1);  /* 0C0A9BB0 mov.w @(disp,pc),Rn */
	IF(0x0C0A9BB2u); MACL = r4 * r3;  /* 0C0A9BB2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A9BB6u, 3);  /* 0C0A9BB4 mov.l @(disp,pc),Rn */
	r1 = 0xA8u; UPD(0x0C0A9BB8u, 1);  /* 0C0A9BB6 mov.w @(disp,pc),Rn */
	IF(0x0C0A9BB8u); r0 = MACL;  /* 0C0A9BB8 sts macl,Rn */
	r0 += r6;  /* 0C0A9BBA add Rm,Rn */
	r0 += r1;  /* 0C0A9BBC add Rm,Rn */
	r7 = r0;  /* 0C0A9BBE mov Rm,Rn */
	r7 += 0x1u;  /* 0C0A9BC0 add #imm,Rn */
	r0 += 0x2u;  /* 0C0A9BC2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A9BC6u, 7);  /* 0C0A9BC4 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A9BC8u, 1);  /* 0C0A9BC6 mov.b @Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0A9BC8 extu.b Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C0A9BCA extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0A9BCC cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0A9BDAu, 6); goto L_0C0A9BDA; }  /* 0C0A9BCE bt */
L_0C0A9BD0: BLKS(0x0C0A9BD0u);
	T = r3 > r1;  /* 0C0A9BD0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A9C30u, 4); goto L_0C0A9C30; }  /* 0C0A9BD2 bf */
L_0C0A9BD4: BLKS(0x0C0A9BD4u);
	r1 = r2;  /* 0C0A9BD4 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0A9BD6 add #imm,Rn */
	UPD(0x0C0A9BD8u, 2);
L_0C0A9BD8: BLKS(0x0C0A9BD8u);
	W8(r7, r1); UPD(0x0C0A9BDAu, 1);  /* 0C0A9BD8 mov.b Rm,@Rn */
L_0C0A9BDA: BLKS(0x0C0A9BDAu);
	r8 = 0xB4u; UPD(0x0C0A9BDCu, 1);  /* 0C0A9BDA mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFAu;  /* 0C0A9BDC mov #imm,Rn */
	IF(0x0C0A9BDEu); MACL = r4 * r8;  /* 0C0A9BDE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9BE2u, 4);  /* 0C0A9BE0 mov.l @(disp,pc),Rn */
	IF(0x0C0A9BE2u); r8 = MACL;  /* 0C0A9BE2 sts macl,Rn */
	r8 += r0;  /* 0C0A9BE4 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C0A9BE8u, 3);  /* 0C0A9BE6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A9BE8 mov Rm,Rn */
	IF(0x0C0A9BEAu); r9 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0A9BECu, 2);  /* 0C0A9BEA mov.w @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C0A9BEEu, 1);  /* 0C0A9BEC mov.w @(disp,pc),Rn */
	IF(0x0C0A9BEEu); ARG0(0x497Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C0A9BEE shad Rm,Rn */
	IF(0x0C0A9BF0u); r10 = R32(r0 + r8); UPD(0x0C0A9BF2u, 2);  /* 0C0A9BF0 mov.l @(r0,Rm),Rn */
	r4 = r9;  /* 0C0A9BF2 mov Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0A9BF6u, 2);  /* 0C0A9BF4 mov.l @(disp,pc),Rn */
	IF(0x0C0A9BF6u); { u32 t_ = r0; PR = 0x0C0A9BFAu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0A9BFAu); }  /* 0C0A9BF6 jsr @Rn */
L_0C0A9BFA: BLKS(0x0C0A9BFAu);
	r4 = r9;  /* 0C0A9BFA mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0A9BFEu, 2);  /* 0C0A9BFC mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0A9BFE mov Rm,Rn */
	IF(0x0C0A9C00u); { u32 t_ = r9; PR = 0x0C0A9C04u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0A9C04u); }  /* 0C0A9C00 jsr @Rn */
L_0C0A9C04: BLKS(0x0C0A9C04u);
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9C06u, 1);  /* 0C0A9C04 mov.l @(disp,Rm),Rn */
	r2 = R32(r8 + 0x28u); UPD(0x0C0A9C08u, 1);  /* 0C0A9C06 mov.l @(disp,Rm),Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0A9C0Au, 1);  /* 0C0A9C08 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0A9C0A add Rm,Rn */
	r5 += r9;  /* 0C0A9C0C add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0A9C10u, 3);  /* 0C0A9C0E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r5); UPD(0x0C0A9C12u, 1);  /* 0C0A9C10 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r2); UPD(0x0C0A9C14u, 1);  /* 0C0A9C12 mov.l Rm,@(disp,Rn) */
	r8 += 0x50u;  /* 0C0A9C14 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A9C18u, 2);  /* 0C0A9C16 mov.l @Rm,Rn */
	r4 += r10;  /* 0C0A9C18 add Rm,Rn */
	W32(r8, r4); UPD(0x0C0A9C1Cu, 2);  /* 0C0A9C1A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9C1C mov Rm,Rn */
	IF(0x0C0A9C1Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A9C20u, 2);  /* 0C0A9C1E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9C22u, 1);  /* 0C0A9C20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9C24u, 1);  /* 0C0A9C22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9C26u, 1);  /* 0C0A9C24 mov.l @Rm+,Rn */
	IF(0x0C0A9C26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9C26 rts */
L_0C0A9C30: BLKS(0x0C0A9C30u);
	r1 = r2;  /* 0C0A9C30 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0A9BD8u, 4); goto L_0C0A9BD8; }  /* 0C0A9C32 bra */
L_0C0A9C40: BLKS(0x0C0A9C40u);
	r7 = 0x4000u; UPD(0x0C0A9C42u, 1);  /* 0C0A9C40 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r7;  /* 0C0A9C42 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9C50u, 4); goto L_0C0A9C50; } goto L_0C0A9C48; }  /* 0C0A9C44 bf/s */
L_0C0A9C48: BLKS(0x0C0A9C48u);
	r1 = r6;  /* 0C0A9C48 mov Rm,Rn */
	r1 += r2;  /* 0C0A9C4A add Rm,Rn */
	UPD(0x0C0A9C4Cu, 3);
L_0C0A9C4C: BLKS(0x0C0A9C4Cu);
	{ W16(r0, r1); /* slot mov.w Rm,@Rn */ UPD(0x0C0A9BB0u, 3); goto L_0C0A9BB0; }  /* 0C0A9C4C bra */
L_0C0A9C50: BLKS(0x0C0A9C50u);
	{ r1 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0A9C4Cu, 3); goto L_0C0A9C4C; }  /* 0C0A9C50 bra */
L_0C0A9C60: BLKS(0x0C0A9C60u);
	r6 = 0x80000000u; UPD(0x0C0A9C62u, 1);  /* 0C0A9C60 mov.l @(disp,pc),Rn */
	T = r3 > r6;  /* 0C0A9C62 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A9C70u, 4); goto L_0C0A9C70; }  /* 0C0A9C64 bf */
L_0C0A9C66: BLKS(0x0C0A9C66u);
	r7 += r2;  /* 0C0A9C66 add Rm,Rn */
	UPD(0x0C0A9C68u, 1);
L_0C0A9C68: BLKS(0x0C0A9C68u);
	{ W32(r5, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0A9B7Eu, 3); goto L_0C0A9B7E; }  /* 0C0A9C68 bra */
L_0C0A9C70: BLKS(0x0C0A9C70u);
	{ r7 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0A9C68u, 3); goto L_0C0A9C68; }  /* 0C0A9C70 bra */
L_0C0A9C80: BLKS(0x0C0A9C80u);
	{ IF(0x0C0A9C82u); ; /* slot nop */ UPD(0x0C0A9B74u, 3); goto L_0C0A9B74; }  /* 0C0A9C80 bra */
}

/* FUN_0c0a9cb0 */
void blk_f_0C0A9CB0(sh3_t *c)
{
	LOCALS;
L_0C0A9CB0: BLKS(0x0C0A9CB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9CB2u, 1);  /* 0C0A9CB0 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A9CB2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9CB6u, 2);  /* 0C0A9CB4 mov.l Rm,@-Rn */
	r6 = 0x4u;  /* 0C0A9CB6 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9CBAu, 2);  /* 0C0A9CB8 mov.l Rm,@-Rn */
	IF(0x0C0A9CBAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A9CBCu, 1);  /* 0C0A9CBA sts.l pr,@-Rn */
	r2 = 0xC0C252Eu; UPD(0x0C0A9CBEu, 1);  /* 0C0A9CBC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFF90u;  /* 0C0A9CBE add #imm,Rn */
	r14 = r15;  /* 0C0A9CC0 mov Rm,Rn */
	r5 = 0xC0C50F0u; UPD(0x0C0A9CC4u, 3);  /* 0C0A9CC2 mov.l @(disp,pc),Rn */
	IF(0x0C0A9CC4u); { u32 t_ = r2; PR = 0x0C0A9CC8u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C252E, 0x0C0C252Eu, 0x0C0A9CC8u); }  /* 0C0A9CC4 jsr @Rn */
L_0C0A9CC8: BLKS(0x0C0A9CC8u);
	r0 = 0xB4u; UPD(0x0C0A9CCAu, 1);  /* 0C0A9CC8 mov.w @(disp,pc),Rn */
	IF(0x0C0A9CCAu); MACL = r7 * r0;  /* 0C0A9CCA mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9CCEu, 3);  /* 0C0A9CCC mov.l @(disp,pc),Rn */
	IF(0x0C0A9CCEu); r2 = MACL;  /* 0C0A9CCE sts macl,Rn */
	r2 += r0;  /* 0C0A9CD0 add Rm,Rn */
	r3 = r2;  /* 0C0A9CD2 mov Rm,Rn */
	r3 += 0x54u;  /* 0C0A9CD4 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A9CD8u, 5);  /* 0C0A9CD6 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A9CD8 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A9CF0u, 4); goto L_0C0A9CF0; } goto L_0C0A9CDE; }  /* 0C0A9CDA bt/s */
L_0C0A9CDE: BLKS(0x0C0A9CDEu);
	W16(r3, r1); UPD(0x0C0A9CE0u, 2);  /* 0C0A9CDE mov.w Rm,@Rn */
L_0C0A9CE0: BLKS(0x0C0A9CE0u);
	r0 = 0x0u;  /* 0C0A9CE0 mov #imm,Rn */
	UPD(0x0C0A9CE2u, 1);
L_0C0A9CE2: BLKS(0x0C0A9CE2u);
	r14 += 0x70u;  /* 0C0A9CE2 add #imm,Rn */
	r15 = r14;  /* 0C0A9CE4 mov Rm,Rn */
	IF(0x0C0A9CE6u); PR = R32(r15); r15 += 4; UPD(0x0C0A9CE8u, 3);  /* 0C0A9CE6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9CEAu, 1);  /* 0C0A9CE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9CECu, 1);  /* 0C0A9CEA mov.l @Rm+,Rn */
	IF(0x0C0A9CECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9CEC rts */
L_0C0A9CF0: BLKS(0x0C0A9CF0u);
	r9 = r2;  /* 0C0A9CF0 mov Rm,Rn */
	r9 += 0x4Cu;  /* 0C0A9CF2 add #imm,Rn */
	r1 = R32(r9); UPD(0x0C0A9CF6u, 3);  /* 0C0A9CF4 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0A9CF6 mov #imm,Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0A9CFAu, 2);  /* 0C0A9CF8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A9CFCu, 1);  /* 0C0A9CFA mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A9CFC tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9CE2u, 4); goto L_0C0A9CE2; } UPD(0x0C0A9D02u, 1); goto L_0C0A9D02; }  /* 0C0A9CFE bt/s */
L_0C0A9D02: BLKS(0x0C0A9D02u);
	IF(0x0C0A9D02u); r2 <<= 2;  /* 0C0A9D02 shll2 Rn */
	r0 = r2;  /* 0C0A9D04 mov Rm,Rn */
	IF(0x0C0A9D06u); r3 = R32(r0 + r14); UPD(0x0C0A9D08u, 3);  /* 0C0A9D06 mov.l @(r0,Rm),Rn */
	r1 += 0x2u;  /* 0C0A9D08 add #imm,Rn */
	W32(r8, r1); UPD(0x0C0A9D0Cu, 2);  /* 0C0A9D0A mov.l Rm,@Rn */
	IF(0x0C0A9D0Cu); { u32 t_ = r3; PR = 0x0C0A9D10u; r4 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A9D10u); }  /* 0C0A9D0C jsr @Rn */
L_0C0A9D10: BLKS(0x0C0A9D10u);
	T = (r0 & r0) == 0;  /* 0C0A9D10 tst Rm,Rn */
	if (T) { UPD(0x0C0A9CE0u, 4); goto L_0C0A9CE0; }  /* 0C0A9D12 bt */
L_0C0A9D14: BLKS(0x0C0A9D14u);
	r4 = R32(r8); UPD(0x0C0A9D16u, 1);  /* 0C0A9D14 mov.l @Rm,Rn */
	{ W32(r9, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0A9CE0u, 3); goto L_0C0A9CE0; }  /* 0C0A9D16 bra */
}

/* FUN_0c0a9d30 */
void blk_f_0C0A9D30(sh3_t *c)
{
	LOCALS;
L_0C0A9D30: BLKS(0x0C0A9D30u);
	r6 = 0xB4u; UPD(0x0C0A9D32u, 1);  /* 0C0A9D30 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A9D32 exts.w Rm,Rn */
	IF(0x0C0A9D34u); MACL = r7 * r6;  /* 0C0A9D34 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A9D38u, 4);  /* 0C0A9D36 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0A9D38 mov #imm,Rn */
	IF(0x0C0A9D3Au); r0 = MACL;  /* 0C0A9D3A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D3Eu, 3);  /* 0C0A9D3C mov.l Rm,@-Rn */
	r0 += r3;  /* 0C0A9D3E add Rm,Rn */
	r0 += 0x4Cu;  /* 0C0A9D40 add #imm,Rn */
	W32(r0, r5); UPD(0x0C0A9D44u, 3);  /* 0C0A9D42 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C0A9D44 mov #imm,Rn */
	r0 += 0x8u;  /* 0C0A9D46 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0A9D4Au, 3);  /* 0C0A9D48 mov.w Rm,@Rn */
	r14 = r15;  /* 0C0A9D4A mov Rm,Rn */
	r0 += 0x4u;  /* 0C0A9D4C add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A9D50u, 3);  /* 0C0A9D4E mov.b Rm,@Rn */
	{ u32 v_ = r2; r0 -= 2; W16(r0, v_); } UPD(0x0C0A9D52u, 1);  /* 0C0A9D50 mov.w Rm,@-Rn */
	r3 = 0x94u; UPD(0x0C0A9D54u, 1);  /* 0C0A9D52 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFAAu;  /* 0C0A9D54 add #imm,Rn */
	IF(0x0C0A9D56u); W32(r0 + r3, r4); UPD(0x0C0A9D58u, 2);  /* 0C0A9D56 mov.l Rm,@(r0,Rn) */
	r3 += 0xFFFFFFF8u;  /* 0C0A9D58 add #imm,Rn */
	IF(0x0C0A9D5Au); W32(r0 + r3, r4); UPD(0x0C0A9D5Cu, 2);  /* 0C0A9D5A mov.l Rm,@(r0,Rn) */
	r3 += 0x4u;  /* 0C0A9D5C add #imm,Rn */
	IF(0x0C0A9D5Eu); W32(r0 + r3, r4); UPD(0x0C0A9D60u, 2);  /* 0C0A9D5E mov.l Rm,@(r0,Rn) */
	r3 += 0xFFFFFFF6u;  /* 0C0A9D60 add #imm,Rn */
	IF(0x0C0A9D62u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0A9D64u, 2);  /* 0C0A9D62 mov.w @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0A9D64 add #imm,Rn */
	IF(0x0C0A9D66u); W16(r0 + r3, r1); UPD(0x0C0A9D68u, 2);  /* 0C0A9D66 mov.w Rm,@(r0,Rn) */
	W32(r0 + 0x30u, r4); UPD(0x0C0A9D6Au, 1);  /* 0C0A9D68 mov.l Rm,@(disp,Rn) */
	r3 += 0x1Fu;  /* 0C0A9D6A add #imm,Rn */
	W32(r0 + 0x2Cu, r4); UPD(0x0C0A9D6Eu, 2);  /* 0C0A9D6C mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C0A9D6E add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r0 = v_; } UPD(0x0C0A9D72u, 2);  /* 0C0A9D70 mov.b @Rm+,Rn */
	W8(r3, r0); UPD(0x0C0A9D74u, 1);  /* 0C0A9D72 mov.b Rm,@Rn */
	r15 = r14;  /* 0C0A9D74 mov Rm,Rn */
	IF(0x0C0A9D76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9D76 rts */
}

/* FUN_0c0a9d90 */
void blk_f_0C0A9D90(sh3_t *c)
{
	LOCALS;
L_0C0A9D90: BLKS(0x0C0A9D90u);
	r0 = 0xB4u; UPD(0x0C0A9D92u, 1);  /* 0C0A9D90 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A9D92 exts.w Rm,Rn */
	IF(0x0C0A9D94u); MACL = r7 * r0;  /* 0C0A9D94 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A9D98u, 4);  /* 0C0A9D96 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A9D98 mov #imm,Rn */
	IF(0x0C0A9D9Au); r0 = MACL;  /* 0C0A9D9A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9D9Eu, 3);  /* 0C0A9D9C mov.l Rm,@-Rn */
	r0 += r3;  /* 0C0A9D9E add Rm,Rn */
	r0 += 0x4Cu;  /* 0C0A9DA0 add #imm,Rn */
	W32(r0, r5); UPD(0x0C0A9DA4u, 3);  /* 0C0A9DA2 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A9DA4 mov Rm,Rn */
	r0 += 0xFFFFFFB4u;  /* 0C0A9DA6 add #imm,Rn */
	r5 = r0;  /* 0C0A9DA8 mov Rm,Rn */
	r6 = r0;  /* 0C0A9DAA mov Rm,Rn */
	r0 += 0x56u;  /* 0C0A9DAC add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9DB0u, 6);  /* 0C0A9DAE mov.w Rm,@Rn */
	r5 += 0x54u;  /* 0C0A9DB0 add #imm,Rn */
	r0 += 0xFFFFFFE6u;  /* 0C0A9DB2 add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9DB6u, 3);  /* 0C0A9DB4 mov.w Rm,@Rn */
	r6 += 0x58u;  /* 0C0A9DB6 add #imm,Rn */
	r0 += 0xFFFFFFC4u;  /* 0C0A9DB8 add #imm,Rn */
	r1 = R32(r0); UPD(0x0C0A9DBCu, 3);  /* 0C0A9DBA mov.l @Rm,Rn */
	r2 = 0xECFF7FFFu; UPD(0x0C0A9DBEu, 1);  /* 0C0A9DBC mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C0A9DBE and Rm,Rn */
	W8(r6, r4); UPD(0x0C0A9DC2u, 2);  /* 0C0A9DC0 mov.b Rm,@Rn */
	W16(r5, r4); UPD(0x0C0A9DC4u, 1);  /* 0C0A9DC2 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C0A9DC6u, 1);  /* 0C0A9DC4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9DC6 mov Rm,Rn */
	IF(0x0C0A9DC8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9DC8 rts */
}

/* FUN_0c0a9de0 */
void blk_f_0C0A9DE0(sh3_t *c)
{
	LOCALS;
L_0C0A9DE0: BLKS(0x0C0A9DE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DE2u, 1);  /* 0C0A9DE0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A9DE2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DE6u, 2);  /* 0C0A9DE4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DE8u, 1);  /* 0C0A9DE6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DEAu, 1);  /* 0C0A9DE8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A9DECu, 1);  /* 0C0A9DEA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DEEu, 1);  /* 0C0A9DEC mov.l Rm,@-Rn */
	IF(0x0C0A9DEEu); MACL = r5 * r3;  /* 0C0A9DEE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DF2u, 3);  /* 0C0A9DF0 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C0A9DF4u, 1);  /* 0C0A9DF2 mov.l @(disp,pc),Rn */
	IF(0x0C0A9DF4u); r3 = MACL;  /* 0C0A9DF4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9DF8u, 2);  /* 0C0A9DF6 mov.l Rm,@-Rn */
	r3 += r2;  /* 0C0A9DF8 add Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0A9DFCu, 2);  /* 0C0A9DFA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0A9DFC add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r4 = v_; } UPD(0x0C0A9E00u, 2);  /* 0C0A9DFE mov.l @Rm+,Rn */
	r14 = r15;  /* 0C0A9E00 mov Rm,Rn */
	r0 = 0xC2B0800u; UPD(0x0C0A9E04u, 2);  /* 0C0A9E02 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C0A9E04 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0A9E08u, 2);  /* 0C0A9E06 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0A9E0Au, 1);  /* 0C0A9E08 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r0, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9E12u, 3); goto L_0C0A9E12; } UPD(0x0C0A9E0Eu, 1); goto L_0C0A9E0E; }  /* 0C0A9E0A bf/s */
L_0C0A9E0E: BLKS(0x0C0A9E0Eu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A9F1Cu, 3); goto L_0C0A9F1C; }  /* 0C0A9E0E bra */
L_0C0A9E12: BLKS(0x0C0A9E12u);
	r9 = R32(r3 + 0x28u); UPD(0x0C0A9E14u, 1);  /* 0C0A9E12 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C0A9E14 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C0A9E18u, 2);  /* 0C0A9E16 mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFFu;  /* 0C0A9E18 mov #imm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0A9E1Cu, 2);  /* 0C0A9E1A mov.l Rm,@(disp,Rn) */
	r7 += r8;  /* 0C0A9E1C add Rm,Rn */
	W32(r14 + 0xCu, r9); UPD(0x0C0A9E20u, 2);  /* 0C0A9E1E mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C0A9E20 add #imm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C0A9E24u, 2);  /* 0C0A9E22 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A9E26u, 1);  /* 0C0A9E24 mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C0A9E26 extu.b Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0A9E2Au, 2);  /* 0C0A9E28 mov.l Rm,@(disp,Rn) */
L_0C0A9E2A: BLKS(0x0C0A9E2Au);
	r5 = R32(r14 + 0x4u); UPD(0x0C0A9E2Cu, 1);  /* 0C0A9E2A mov.l @(disp,Rm),Rn */
	r4 = 0xC23DEA0u; UPD(0x0C0A9E2Eu, 1);  /* 0C0A9E2C mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r6 = v_; } UPD(0x0C0A9E30u, 1);  /* 0C0A9E2E mov.l @Rm+,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0A9E32u, 1);  /* 0C0A9E30 mov.l @(disp,Rm),Rn */
	W32(r4, r6); UPD(0x0C0A9E34u, 1);  /* 0C0A9E32 mov.l Rm,@Rn */
	{ u32 v_ = R32(r5); r5 += 4; r1 = v_; } UPD(0x0C0A9E36u, 1);  /* 0C0A9E34 mov.l @Rm+,Rn */
	r3 = R32(r2 + 0x24u); UPD(0x0C0A9E38u, 1);  /* 0C0A9E36 mov.l @(disp,Rm),Rn */
	r0 = 0xC286314u; UPD(0x0C0A9E3Au, 1);  /* 0C0A9E38 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0A9E3A add Rm,Rn */
	W32(r0, r3); UPD(0x0C0A9E3Eu, 2);  /* 0C0A9E3C mov.l Rm,@Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C0A9E40u, 1);  /* 0C0A9E3E mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r11 = v_; } UPD(0x0C0A9E42u, 1);  /* 0C0A9E40 mov.l @Rm+,Rn */
	r10 = 0xC28F600u; UPD(0x0C0A9E44u, 1);  /* 0C0A9E42 mov.l @(disp,pc),Rn */
	r11 += r13;  /* 0C0A9E44 add Rm,Rn */
	W32(r10, r11); UPD(0x0C0A9E48u, 2);  /* 0C0A9E46 mov.l Rm,@Rn */
	r10 = 0xBFu; UPD(0x0C0A9E4Au, 1);  /* 0C0A9E48 mov.w @(disp,pc),Rn */
	r11 = 0x864Cu; UPD(0x0C0A9E4Cu, 1);  /* 0C0A9E4A mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0A9E4Eu, 1);  /* 0C0A9E4C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9E4Eu); ;  /* 0C0A9E4E nop */
	UPD(0x0C0A9E50u, 1);
L_0C0A9E50: BLKS(0x0C0A9E50u);
	r3 = 0xC286578u; UPD(0x0C0A9E52u, 1);  /* 0C0A9E50 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0A9E52 mov #imm,Rn */
	r7 = 0xA8u; UPD(0x0C0A9E56u, 2);  /* 0C0A9E54 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C0A9E56 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0A9E5Au, 2);  /* 0C0A9E58 mov.l @Rm,Rn */
	r7 += r3;  /* 0C0A9E5A add Rm,Rn */
	r7 += 0x1u;  /* 0C0A9E5C add #imm,Rn */
	T = r0 == r10;  /* 0C0A9E5E cmp/eq Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A9E62u, 4);  /* 0C0A9E60 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r12, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0A9E62 negc Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0A9E66u, 2);  /* 0C0A9E64 mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C0A9E66 extu.b Rm,Rn */
	r8 = R32(r3); UPD(0x0C0A9E6Au, 2);  /* 0C0A9E68 mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C0A9E6A cmp/eq Rm,Rn */
	r5 = 0x80u; UPD(0x0C0A9E6Eu, 2);  /* 0C0A9E6C mov.w @(disp,pc),Rn */
	IF(0x0C0A9E6Eu); r8 >>= 16;  /* 0C0A9E6E shlr16 Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0A9E72u, 2);  /* 0C0A9E70 mov.l @(disp,Rm),Rn */
	IF(0x0C0A9E72u); r8 <<= 2;  /* 0C0A9E72 shll2 Rn */
	r0 += r5;  /* 0C0A9E74 add Rm,Rn */
	IF(0x0C0A9E76u); r8 >>= 16;  /* 0C0A9E76 shlr16 Rn */
	r8 &= r13;  /* 0C0A9E78 and Rm,Rn */
	r5 += r3;  /* 0C0A9E7A add Rm,Rn */
	r8 &= r9;  /* 0C0A9E7C and Rm,Rn */
	r0 += 0x2u;  /* 0C0A9E7E add #imm,Rn */
	r5 += 0x2u;  /* 0C0A9E80 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A9E84u, 9);  /* 0C0A9E82 mov.w @Rm,Rn */
	IF(0x0C0A9E84u); r2 = T;  /* 0C0A9E84 movt Rn */
	r13 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A9E88u, 2);  /* 0C0A9E86 mov.w @Rm,Rn */
	r8 &= r2;  /* 0C0A9E88 and Rm,Rn */
	T = r13 == r9;  /* 0C0A9E8A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r12, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C0A9E8C negc Rm,Rn */
	r8 &= r7;  /* 0C0A9E8E and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0A9E90 tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9F00u, 8); goto L_0C0A9F00; } goto L_0C0A9E96; }  /* 0C0A9E92 bt/s */
L_0C0A9E96: BLKS(0x0C0A9E96u);
	r0 = R32(r3 + 0x1Cu); UPD(0x0C0A9E98u, 2);  /* 0C0A9E96 mov.l @(disp,Rm),Rn */
	r5 = 0xC28EDB8u; UPD(0x0C0A9E9Au, 1);  /* 0C0A9E98 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r0); r0 += 4; r8 = v_; } UPD(0x0C0A9E9Cu, 1);  /* 0C0A9E9A mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C0A9E9C tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9EFEu, 4); goto L_0C0A9EFE; } UPD(0x0C0A9EA2u, 1); goto L_0C0A9EA2; }  /* 0C0A9E9E bt/s */
L_0C0A9EA2: BLKS(0x0C0A9EA2u);
	r9 = R32(r3 + 0x28u); UPD(0x0C0A9EA4u, 1);  /* 0C0A9EA2 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x24u); UPD(0x0C0A9EA6u, 1);  /* 0C0A9EA4 mov.l @(disp,Rm),Rn */
	r3 = 0xC286314u; UPD(0x0C0A9EA8u, 1);  /* 0C0A9EA6 mov.l @(disp,pc),Rn */
	r13 = 0xC3C4024u; UPD(0x0C0A9EAAu, 1);  /* 0C0A9EA8 mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C0A9EACu, 1);  /* 0C0A9EAA mov.l @Rm,Rn */
	r4 = 0xFFFFFFFu; UPD(0x0C0A9EAEu, 1);  /* 0C0A9EAC mov.l @(disp,pc),Rn */
	IF(0x0C0A9EAEu); ;  /* 0C0A9EAE nop */
	UPD(0x0C0A9EB0u, 1);
L_0C0A9EB0: BLKS(0x0C0A9EB0u);
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C0A9EB2u, 1);  /* 0C0A9EB0 mov.l @Rm+,Rn */
	r3 = 0xC297484u; UPD(0x0C0A9EB4u, 1);  /* 0C0A9EB2 mov.l @(disp,pc),Rn */
	W32(r3, r6); UPD(0x0C0A9EB6u, 1);  /* 0C0A9EB4 mov.l Rm,@Rn */
	{ u32 v_ = R32(r0); r0 += 4; r1 = v_; } UPD(0x0C0A9EB8u, 1);  /* 0C0A9EB6 mov.l @Rm+,Rn */
	r3 = r5;  /* 0C0A9EB8 mov Rm,Rn */
	r7 = 0xC3B1B00u; UPD(0x0C0A9EBCu, 2);  /* 0C0A9EBA mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C0A9EBC add Rm,Rn */
	W32(r7, r1); UPD(0x0C0A9EC0u, 2);  /* 0C0A9EBE mov.l Rm,@Rn */
	r3 -= r1;  /* 0C0A9EC0 sub Rm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r7 = v_; } UPD(0x0C0A9EC4u, 2);  /* 0C0A9EC2 mov.l @Rm+,Rn */
	IF(0x0C0A9EC4u); T = (s32)r3 >= 0;  /* 0C0A9EC4 cmp/pz Rn */
	r7 += r9;  /* 0C0A9EC6 add Rm,Rn */
	{ u32 c_ = !T; W32(r13, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9F50u, 5); goto L_0C0A9F50; } UPD(0x0C0A9ECCu, 1); goto L_0C0A9ECC; }  /* 0C0A9EC8 bf/s */
L_0C0A9ECC: BLKS(0x0C0A9ECCu);
	r1 = 0xC2B0800u; UPD(0x0C0A9ECEu, 1);  /* 0C0A9ECC mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0A9ED0u, 1);  /* 0C0A9ECE mov.l @Rm,Rn */
	r1 = 0xC28EDB8u; UPD(0x0C0A9ED2u, 1);  /* 0C0A9ED0 mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C0A9ED2 and Rm,Rn */
	r1 = R32(r1); UPD(0x0C0A9ED6u, 2);  /* 0C0A9ED4 mov.l @Rm,Rn */
	r1 &= r4;  /* 0C0A9ED6 and Rm,Rn */
	r2 += r1;  /* 0C0A9ED8 add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0A9EDA cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A9EF4u, 6); goto L_0C0A9EF4; }  /* 0C0A9EDC bt */
L_0C0A9EDE: BLKS(0x0C0A9EDEu);
	r3 = 0xC28F600u; UPD(0x0C0A9EE0u, 1);  /* 0C0A9EDE mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0A9EE2u, 1);  /* 0C0A9EE0 mov.l @Rm,Rn */
	r2 -= r7;  /* 0C0A9EE2 sub Rm,Rn */
	IF(0x0C0A9EE4u); T = (s32)r2 >= 0;  /* 0C0A9EE4 cmp/pz Rn */
	if (!T) { UPD(0x0C0A9F40u, 5); goto L_0C0A9F40; }  /* 0C0A9EE6 bf */
L_0C0A9EE8: BLKS(0x0C0A9EE8u);
	r3 = 0xC23DEA0u; UPD(0x0C0A9EEAu, 1);  /* 0C0A9EE8 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C0A9EECu, 1);  /* 0C0A9EEA mov.l @Rm,Rn */
	r7 += r6;  /* 0C0A9EEC add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C0A9EEE cmp/ge Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9F1Cu, 5); goto L_0C0A9F1C; } UPD(0x0C0A9EF4u, 1); goto L_0C0A9EF4; }  /* 0C0A9EF0 bf/s */
L_0C0A9EF4: BLKS(0x0C0A9EF4u);
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C0A9EF6u, 1);  /* 0C0A9EF4 mov.l @Rm+,Rn */
	r2 = 0xC28EDB8u; UPD(0x0C0A9EF8u, 1);  /* 0C0A9EF6 mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C0A9EF8 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9EB0u, 4); goto L_0C0A9EB0; } UPD(0x0C0A9EFEu, 1); goto L_0C0A9EFE; }  /* 0C0A9EFA bf/s */
L_0C0A9EFE: BLKS(0x0C0A9EFEu);
	r0 = r10;  /* 0C0A9EFE mov Rm,Rn */
	UPD(0x0C0A9F00u, 1);
L_0C0A9F00: BLKS(0x0C0A9F00u);
	r10 = 0xFFFFFF4Cu; UPD(0x0C0A9F02u, 1);  /* 0C0A9F00 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0A9F02 add #imm,Rn */
	r11 += r10;  /* 0C0A9F04 add Rm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0A9F06 exts.w Rm,Rn */
	IF(0x0C0A9F08u); T = (s32)r10 >= 0;  /* 0C0A9F08 cmp/pz Rn */
	if (T) { UPD(0x0C0A9E50u, 7); goto L_0C0A9E50; }  /* 0C0A9F0A bt */
L_0C0A9F0C: BLKS(0x0C0A9F0Cu);
	r1 = R32(r14 + 0x4u); UPD(0x0C0A9F0Eu, 1);  /* 0C0A9F0C mov.l @(disp,Rm),Rn */
	r4 = 0xC2B0800u; UPD(0x0C0A9F10u, 1);  /* 0C0A9F0E mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r1); r1 += 4; r11 = v_; } UPD(0x0C0A9F12u, 1);  /* 0C0A9F10 mov.l @Rm+,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0A9F14u, 1);  /* 0C0A9F12 mov.l Rm,@(disp,Rn) */
	T = (r11 & r11) == 0;  /* 0C0A9F14 tst Rm,Rn */
	{ u32 c_ = !T; W32(r4, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A9E2Au, 4); goto L_0C0A9E2A; } UPD(0x0C0A9F1Au, 1); goto L_0C0A9F1A; }  /* 0C0A9F16 bf/s */
L_0C0A9F1A: BLKS(0x0C0A9F1Au);
	r1 = 0x0u;  /* 0C0A9F1A mov #imm,Rn */
	UPD(0x0C0A9F1Cu, 1);
L_0C0A9F1C: BLKS(0x0C0A9F1Cu);
	r0 = r1;  /* 0C0A9F1C mov Rm,Rn */
	r14 += 0x18u;  /* 0C0A9F1E add #imm,Rn */
	r15 = r14;  /* 0C0A9F20 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A9F24u, 4);  /* 0C0A9F22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A9F26u, 1);  /* 0C0A9F24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9F28u, 1);  /* 0C0A9F26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9F2Au, 1);  /* 0C0A9F28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9F2Cu, 1);  /* 0C0A9F2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9F2Eu, 1);  /* 0C0A9F2C mov.l @Rm+,Rn */
	IF(0x0C0A9F2Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9F2E rts */
L_0C0A9F40: BLKS(0x0C0A9F40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9EE8u, 3); goto L_0C0A9EE8; }  /* 0C0A9F40 bra */
L_0C0A9F50: BLKS(0x0C0A9F50u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A9ECCu, 3); goto L_0C0A9ECC; }  /* 0C0A9F50 bra */
}

void blk_f_0C0A9F90(sh3_t *c)
{
	LOCALS;
L_0C0A9F90: BLKS(0x0C0A9F90u);
	r2 = 0xB4u; UPD(0x0C0A9F92u, 1);  /* 0C0A9F90 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A9F92 exts.w Rm,Rn */
	IF(0x0C0A9F94u); MACL = r1 * r2;  /* 0C0A9F94 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A9F98u, 4);  /* 0C0A9F96 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9F9Au, 1);  /* 0C0A9F98 mov.l Rm,@-Rn */
	IF(0x0C0A9F9Au); r3 = MACL;  /* 0C0A9F9A sts macl,Rn */
	r3 += r0;  /* 0C0A9F9C add Rm,Rn */
	r2 = R32(r3 + 0x38u); UPD(0x0C0A9FA0u, 3);  /* 0C0A9F9E mov.l @(disp,Rm),Rn */
	r0 = 0x808080u; UPD(0x0C0A9FA2u, 1);  /* 0C0A9FA0 mov.l @(disp,pc),Rn */
	T = r2 == r0;  /* 0C0A9FA2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A9FAEu, 4); goto L_0C0A9FAE; } goto L_0C0A9FA8; }  /* 0C0A9FA4 bt/s */
L_0C0A9FA8: BLKS(0x0C0A9FA8u);
	r4 = 0x10101u; UPD(0x0C0A9FAAu, 2);  /* 0C0A9FA8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0A9FAA add Rm,Rn */
	W32(r3 + 0x38u, r2); UPD(0x0C0A9FAEu, 2);  /* 0C0A9FAC mov.l Rm,@(disp,Rn) */
L_0C0A9FAE: BLKS(0x0C0A9FAEu);
	r15 = r14;  /* 0C0A9FAE mov Rm,Rn */
	IF(0x0C0A9FB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9FB0 rts */
}

void blk_f_0C0AA540(sh3_t *c)
{
	LOCALS;
L_0C0AA540: BLKS(0x0C0AA540u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA542u, 1);  /* 0C0AA540 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AA542 mov #imm,Rn */
	IF(0x0C0AA544u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA546u, 2);  /* 0C0AA544 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AA548u, 1);  /* 0C0AA546 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA548 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AA54Cu, 2);  /* 0C0AA54A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AA54Eu, 1);  /* 0C0AA54C mov.l @(disp,pc),Rn */
	IF(0x0C0AA54Eu); MACL = r6 * r2;  /* 0C0AA54E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AA552u, 3);  /* 0C0AA550 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AA554u, 1);  /* 0C0AA552 mov.l @(disp,pc),Rn */
	IF(0x0C0AA554u); r3 = MACL;  /* 0C0AA554 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA558u, 2);  /* 0C0AA556 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AA55Au, 1);  /* 0C0AA558 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AA55Cu, 1);  /* 0C0AA55A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AA55C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AA560u, 2);  /* 0C0AA55E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AA562u, 1);  /* 0C0AA560 mov.w @Rm+,Rn */
	IF(0x0C0AA562u); r0 <<= 2;  /* 0C0AA562 shll2 Rn */
	IF(0x0C0AA564u); r6 = R32(r0 + r7); UPD(0x0C0AA566u, 2);  /* 0C0AA564 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA568u, 1);  /* 0C0AA566 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AA56Au, 1);  /* 0C0AA568 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AA56Cu, 1);  /* 0C0AA56A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AA56Eu, 1);  /* 0C0AA56C mov.l @(disp,pc),Rn */
	r0 = 0xC080CB0u; UPD(0x0C0AA570u, 1);  /* 0C0AA56E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AA572u, 1);  /* 0C0AA570 mov.l Rm,@Rn */
	IF(0x0C0AA572u); { u32 t_ = r0; PR = 0x0C0AA576u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C080CB0, 0x0C080CB0u, 0x0C0AA576u); }  /* 0C0AA572 jsr @Rn */
L_0C0AA576: BLKS(0x0C0AA576u);
	r15 = r14;  /* 0C0AA576 mov Rm,Rn */
	IF(0x0C0AA578u); PR = R32(r15); r15 += 4; UPD(0x0C0AA57Au, 2);  /* 0C0AA578 lds.l @Rn+,pr */
	IF(0x0C0AA57Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA57A rts */
}

void blk_f_0C0AA5A0(sh3_t *c)
{
	LOCALS;
L_0C0AA5A0: BLKS(0x0C0AA5A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5A2u, 1);  /* 0C0AA5A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5A4u, 1);  /* 0C0AA5A2 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AA5A6u, 1);  /* 0C0AA5A4 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AA5A6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5AAu, 2);  /* 0C0AA5A8 mov.l Rm,@-Rn */
	IF(0x0C0AA5AAu); MACL = r9 * r3;  /* 0C0AA5AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5AEu, 3);  /* 0C0AA5AC mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AA5B0u, 1);  /* 0C0AA5AE mov.l @(disp,pc),Rn */
	IF(0x0C0AA5B0u); r8 = MACL;  /* 0C0AA5B0 sts macl,Rn */
	IF(0x0C0AA5B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA5B4u, 2);  /* 0C0AA5B2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0AA5B4 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0AA5B8u, 2);  /* 0C0AA5B6 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C0AA5B8 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0AA5BA add #imm,Rn */
	T = r2 > r0;  /* 0C0AA5BC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA5C6u, 6); goto L_0C0AA5C6; } goto L_0C0AA5C2; }  /* 0C0AA5BE bf/s */
L_0C0AA5C2: BLKS(0x0C0AA5C2u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0AA6C0u, 4); goto L_0C0AA6C0; }  /* 0C0AA5C2 bra */
L_0C0AA5C6: BLKS(0x0C0AA5C6u);
	r10 = 0xC0A8B50u; UPD(0x0C0AA5C8u, 1);  /* 0C0AA5C6 mov.l @(disp,pc),Rn */
	IF(0x0C0AA5C8u); { u32 t_ = r10; PR = 0x0C0AA5CCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AA5CCu); }  /* 0C0AA5C8 jsr @Rn */
L_0C0AA5CC: BLKS(0x0C0AA5CCu);
	IF(0x0C0AA5CCu); T = (s32)r0 >= 0;  /* 0C0AA5CC cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA5D6u, 4); goto L_0C0AA5D6; } goto L_0C0AA5D2; }  /* 0C0AA5CE bt/s */
L_0C0AA5D2: BLKS(0x0C0AA5D2u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AA6B0u, 4); goto L_0C0AA6B0; }  /* 0C0AA5D2 bra */
L_0C0AA5D6: BLKS(0x0C0AA5D6u);
	r0 = 0xC062780u; UPD(0x0C0AA5D8u, 1);  /* 0C0AA5D6 mov.l @(disp,pc),Rn */
	IF(0x0C0AA5D8u); { u32 t_ = r0; PR = 0x0C0AA5DCu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AA5DCu); }  /* 0C0AA5D8 jsr @Rn */
L_0C0AA5DC: BLKS(0x0C0AA5DCu);
	T = r0 == 0x2u;  /* 0C0AA5DC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA690u, 4); goto L_0C0AA690; }  /* 0C0AA5DE bt */
L_0C0AA5E0: BLKS(0x0C0AA5E0u);
	r5 = 0x2u;  /* 0C0AA5E0 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0AA5E2 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AA660u, 5); goto L_0C0AA660; } goto L_0C0AA5E8; }  /* 0C0AA5E4 bt/s */
L_0C0AA5E8: BLKS(0x0C0AA5E8u);
	T = r0 == 0x1u;  /* 0C0AA5E8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA640u, 5); goto L_0C0AA640; }  /* 0C0AA5EA bt */
L_0C0AA5EC: BLKS(0x0C0AA5ECu);
	r4 = 0xB4u; UPD(0x0C0AA5EEu, 1);  /* 0C0AA5EC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA5EE add #imm,Rn */
	IF(0x0C0AA5F0u); MACL = r9 * r4;  /* 0C0AA5F0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AA5F4u, 4);  /* 0C0AA5F2 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AA5F4 mov #imm,Rn */
	IF(0x0C0AA5F6u); r8 = MACL;  /* 0C0AA5F6 sts macl,Rn */
	r8 += r0;  /* 0C0AA5F8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA5FCu, 4);  /* 0C0AA5FA mov.w @(disp,pc),Rn */
	IF(0x0C0AA5FCu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA5FEu, 1);  /* 0C0AA5FC mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA5FE extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AA602u, 2);  /* 0C0AA600 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AA602 add #imm,Rn */
	IF(0x0C0AA604u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA606u, 2);  /* 0C0AA604 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AA606 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AA60Au, 2);  /* 0C0AA608 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AA60Cu, 1);  /* 0C0AA60A mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA60Eu, 1);  /* 0C0AA60C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA610u, 1);  /* 0C0AA60E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0AA612u, 1);  /* 0C0AA610 mov.l @(disp,Rm),Rn */
L_0C0AA612: BLKS(0x0C0AA612u);
	IF(0x0C0AA612u); { u32 t_ = r0; PR = 0x0C0AA616u; IF(0x0C0AA614u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AA616u); }  /* 0C0AA612 jsr @Rn */
L_0C0AA616: BLKS(0x0C0AA616u);
	r6 = 0xB4u; UPD(0x0C0AA618u, 1);  /* 0C0AA616 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AA618 add #imm,Rn */
	IF(0x0C0AA61Au); MACL = r10 * r6;  /* 0C0AA61A mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AA61Eu, 4);  /* 0C0AA61C mov.l @(disp,pc),Rn */
	IF(0x0C0AA61Eu); r10 = MACL;  /* 0C0AA61E sts macl,Rn */
	r10 += r8;  /* 0C0AA620 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0AA624u, 3);  /* 0C0AA622 mov.l @Rm,Rn */
	IF(0x0C0AA624u); MACL = r9 * r6;  /* 0C0AA624 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AA628u, 3);  /* 0C0AA626 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0AA628 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0AA62Cu, 2);  /* 0C0AA62A mov.l Rm,@Rn */
	IF(0x0C0AA62Cu); r0 = MACL;  /* 0C0AA62C sts macl,Rn */
	r9 = 0x0u;  /* 0C0AA62E mov #imm,Rn */
	IF(0x0C0AA630u); W32(r0 + r8, r9); UPD(0x0C0AA632u, 3);  /* 0C0AA630 mov.l Rm,@(r0,Rn) */
L_0C0AA632: BLKS(0x0C0AA632u);
	r15 = r14;  /* 0C0AA632 mov Rm,Rn */
	IF(0x0C0AA634u); PR = R32(r15); r15 += 4; UPD(0x0C0AA636u, 2);  /* 0C0AA634 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA638u, 1);  /* 0C0AA636 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA63Au, 1);  /* 0C0AA638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA63Cu, 1);  /* 0C0AA63A mov.l @Rm+,Rn */
	IF(0x0C0AA63Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA63C rts */
L_0C0AA640: BLKS(0x0C0AA640u);
	r0 = 0xB0u; UPD(0x0C0AA642u, 1);  /* 0C0AA640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA642 add #imm,Rn */
	IF(0x0C0AA644u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA646u, 2);  /* 0C0AA644 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA646 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AA64Au, 2);  /* 0C0AA648 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA64A mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0AA64Eu, 2);  /* 0C0AA64C mov.w @(disp,pc),Rn */
	IF(0x0C0AA64Eu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0AA650u, 1);  /* 0C0AA64E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AA650 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AA654u, 2);  /* 0C0AA652 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AA656u, 1);  /* 0C0AA654 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AA656 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AA65Au, 2);  /* 0C0AA658 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA65Cu, 1);  /* 0C0AA65A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA65C bra */
L_0C0AA660: BLKS(0x0C0AA660u);
	if (!T) { UPD(0x0C0AA5ECu, 3); goto L_0C0AA5EC; }  /* 0C0AA660 bf */
L_0C0AA662: BLKS(0x0C0AA662u);
	r15 += 0xFFFFFFF8u;  /* 0C0AA662 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA666u, 2);  /* 0C0AA664 mov.w @(disp,pc),Rn */
	IF(0x0C0AA666u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA668u, 1);  /* 0C0AA666 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0AA668 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0AA66Cu, 2);  /* 0C0AA66A mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C0AA66C mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C0AA670u, 2);  /* 0C0AA66E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AA670 mov Rm,Rn */
	IF(0x0C0AA672u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AA674u, 2);  /* 0C0AA672 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA674 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AA678u, 2);  /* 0C0AA676 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AA67Au, 1);  /* 0C0AA678 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA67Cu, 1);  /* 0C0AA67A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA67Eu, 1);  /* 0C0AA67C mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA67E bra */
L_0C0AA690: BLKS(0x0C0AA690u);
	r0 = 0xB0u; UPD(0x0C0AA692u, 1);  /* 0C0AA690 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA692 add #imm,Rn */
	IF(0x0C0AA694u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA696u, 2);  /* 0C0AA694 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AA696 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0AA69Au, 2);  /* 0C0AA698 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA69A mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0AA69Eu, 2);  /* 0C0AA69C mov.w @(disp,pc),Rn */
	IF(0x0C0AA69Eu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AA6A0u, 1);  /* 0C0AA69E mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0AA6A0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AA6A4u, 2);  /* 0C0AA6A2 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C0AA6A4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AA6A8u, 2);  /* 0C0AA6A6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA6AAu, 1);  /* 0C0AA6A8 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0AA6ACu, 1);  /* 0C0AA6AA mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA6AC bra */
L_0C0AA6B0: BLKS(0x0C0AA6B0u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0AA632u, 3); goto L_0C0AA632; }  /* 0C0AA6B0 bra */
L_0C0AA6C0: BLKS(0x0C0AA6C0u);
	r2 = 0xC0A9170u; UPD(0x0C0AA6C2u, 1);  /* 0C0AA6C0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AA6C2 mov Rm,Rn */
	IF(0x0C0AA6C4u); PR = R32(r15); r15 += 4; UPD(0x0C0AA6C6u, 2);  /* 0C0AA6C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA6C8u, 1);  /* 0C0AA6C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA6CAu, 1);  /* 0C0AA6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA6CCu, 1);  /* 0C0AA6CA mov.l @Rm+,Rn */
	IF(0x0C0AA6CCu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9170u: TAIL(blk_f_0C0A9170); default: JUMPD(tv_); } }  /* 0C0AA6CC jmp @Rn */
}

void blk_f_0C0AA700(sh3_t *c)
{
	LOCALS;
L_0C0AA700: BLKS(0x0C0AA700u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA702u, 1);  /* 0C0AA700 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AA702 mov #imm,Rn */
	IF(0x0C0AA704u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA706u, 2);  /* 0C0AA704 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AA708u, 1);  /* 0C0AA706 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA708 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AA70Cu, 2);  /* 0C0AA70A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AA70Eu, 1);  /* 0C0AA70C mov.l @(disp,pc),Rn */
	IF(0x0C0AA70Eu); MACL = r6 * r2;  /* 0C0AA70E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AA712u, 3);  /* 0C0AA710 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AA714u, 1);  /* 0C0AA712 mov.l @(disp,pc),Rn */
	IF(0x0C0AA714u); r3 = MACL;  /* 0C0AA714 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA718u, 2);  /* 0C0AA716 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AA71Au, 1);  /* 0C0AA718 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AA71Cu, 1);  /* 0C0AA71A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AA71C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AA720u, 2);  /* 0C0AA71E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AA722u, 1);  /* 0C0AA720 mov.w @Rm+,Rn */
	IF(0x0C0AA722u); r0 <<= 2;  /* 0C0AA722 shll2 Rn */
	IF(0x0C0AA724u); r6 = R32(r0 + r7); UPD(0x0C0AA726u, 2);  /* 0C0AA724 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA728u, 1);  /* 0C0AA726 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AA72Au, 1);  /* 0C0AA728 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AA72Cu, 1);  /* 0C0AA72A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AA72Eu, 1);  /* 0C0AA72C mov.l @(disp,pc),Rn */
	r0 = 0xC0813E0u; UPD(0x0C0AA730u, 1);  /* 0C0AA72E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AA732u, 1);  /* 0C0AA730 mov.l Rm,@Rn */
	IF(0x0C0AA732u); { u32 t_ = r0; PR = 0x0C0AA736u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0813E0, 0x0C0813E0u, 0x0C0AA736u); }  /* 0C0AA732 jsr @Rn */
L_0C0AA736: BLKS(0x0C0AA736u);
	r15 = r14;  /* 0C0AA736 mov Rm,Rn */
	IF(0x0C0AA738u); PR = R32(r15); r15 += 4; UPD(0x0C0AA73Au, 2);  /* 0C0AA738 lds.l @Rn+,pr */
	IF(0x0C0AA73Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA73A rts */
}

void blk_f_0C0AA950(sh3_t *c)
{
	LOCALS;
L_0C0AA950: BLKS(0x0C0AA950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA952u, 1);  /* 0C0AA950 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA954u, 1);  /* 0C0AA952 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AA956u, 1);  /* 0C0AA954 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AA956 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA95Au, 2);  /* 0C0AA958 mov.l Rm,@-Rn */
	IF(0x0C0AA95Au); MACL = r9 * r3;  /* 0C0AA95A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA95Eu, 3);  /* 0C0AA95C mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AA960u, 1);  /* 0C0AA95E mov.l @(disp,pc),Rn */
	IF(0x0C0AA960u); r8 = MACL;  /* 0C0AA960 sts macl,Rn */
	IF(0x0C0AA962u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA964u, 2);  /* 0C0AA962 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0AA964 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0AA968u, 2);  /* 0C0AA966 mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C0AA968 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0AA96A add #imm,Rn */
	T = r2 > r0;  /* 0C0AA96C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA976u, 6); goto L_0C0AA976; } goto L_0C0AA972; }  /* 0C0AA96E bf/s */
L_0C0AA972: BLKS(0x0C0AA972u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0AAA70u, 4); goto L_0C0AAA70; }  /* 0C0AA972 bra */
L_0C0AA976: BLKS(0x0C0AA976u);
	r10 = 0xC0A8B50u; UPD(0x0C0AA978u, 1);  /* 0C0AA976 mov.l @(disp,pc),Rn */
	IF(0x0C0AA978u); { u32 t_ = r10; PR = 0x0C0AA97Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AA97Cu); }  /* 0C0AA978 jsr @Rn */
L_0C0AA97C: BLKS(0x0C0AA97Cu);
	IF(0x0C0AA97Cu); T = (s32)r0 >= 0;  /* 0C0AA97C cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA986u, 4); goto L_0C0AA986; } goto L_0C0AA982; }  /* 0C0AA97E bt/s */
L_0C0AA982: BLKS(0x0C0AA982u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AAA60u, 4); goto L_0C0AAA60; }  /* 0C0AA982 bra */
L_0C0AA986: BLKS(0x0C0AA986u);
	r0 = 0xC062780u; UPD(0x0C0AA988u, 1);  /* 0C0AA986 mov.l @(disp,pc),Rn */
	IF(0x0C0AA988u); { u32 t_ = r0; PR = 0x0C0AA98Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AA98Cu); }  /* 0C0AA988 jsr @Rn */
L_0C0AA98C: BLKS(0x0C0AA98Cu);
	T = r0 == 0x2u;  /* 0C0AA98C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AAA40u, 4); goto L_0C0AAA40; }  /* 0C0AA98E bt */
L_0C0AA990: BLKS(0x0C0AA990u);
	r6 = 0x2u;  /* 0C0AA990 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C0AA992 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AAA10u, 5); goto L_0C0AAA10; } goto L_0C0AA998; }  /* 0C0AA994 bt/s */
L_0C0AA998: BLKS(0x0C0AA998u);
	T = r0 == 0x1u;  /* 0C0AA998 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA9F0u, 5); goto L_0C0AA9F0; }  /* 0C0AA99A bt */
L_0C0AA99C: BLKS(0x0C0AA99Cu);
	r4 = 0xB4u; UPD(0x0C0AA99Eu, 1);  /* 0C0AA99C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA99E add #imm,Rn */
	IF(0x0C0AA9A0u); MACL = r9 * r4;  /* 0C0AA9A0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AA9A4u, 4);  /* 0C0AA9A2 mov.l @(disp,pc),Rn */
	IF(0x0C0AA9A4u); r8 = MACL;  /* 0C0AA9A4 sts macl,Rn */
	r8 += r0;  /* 0C0AA9A6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA9AAu, 3);  /* 0C0AA9A8 mov.w @(disp,pc),Rn */
	IF(0x0C0AA9AAu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9ACu, 1);  /* 0C0AA9AA mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AA9AC extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AA9B0u, 2);  /* 0C0AA9AE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AA9B0 add #imm,Rn */
	IF(0x0C0AA9B2u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9B4u, 2);  /* 0C0AA9B2 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AA9B4 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AA9B6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AA9BAu, 3);  /* 0C0AA9B8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AA9BCu, 1);  /* 0C0AA9BA mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA9BEu, 1);  /* 0C0AA9BC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA9C0u, 1);  /* 0C0AA9BE mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0AA9C2u, 1);  /* 0C0AA9C0 mov.l @(disp,Rm),Rn */
L_0C0AA9C2: BLKS(0x0C0AA9C2u);
	IF(0x0C0AA9C2u); { u32 t_ = r0; PR = 0x0C0AA9C6u; IF(0x0C0AA9C4u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AA9C6u); }  /* 0C0AA9C2 jsr @Rn */
L_0C0AA9C6: BLKS(0x0C0AA9C6u);
	r5 = 0xB4u; UPD(0x0C0AA9C8u, 1);  /* 0C0AA9C6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AA9C8 add #imm,Rn */
	IF(0x0C0AA9CAu); MACL = r10 * r5;  /* 0C0AA9CA mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AA9CEu, 4);  /* 0C0AA9CC mov.l @(disp,pc),Rn */
	IF(0x0C0AA9CEu); r10 = MACL;  /* 0C0AA9CE sts macl,Rn */
	r10 += r8;  /* 0C0AA9D0 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0AA9D4u, 3);  /* 0C0AA9D2 mov.l @Rm,Rn */
	IF(0x0C0AA9D4u); MACL = r9 * r5;  /* 0C0AA9D4 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AA9D8u, 3);  /* 0C0AA9D6 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0AA9D8 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0AA9DCu, 2);  /* 0C0AA9DA mov.l Rm,@Rn */
	IF(0x0C0AA9DCu); r0 = MACL;  /* 0C0AA9DC sts macl,Rn */
	r9 = 0x0u;  /* 0C0AA9DE mov #imm,Rn */
	IF(0x0C0AA9E0u); W32(r0 + r8, r9); UPD(0x0C0AA9E2u, 3);  /* 0C0AA9E0 mov.l Rm,@(r0,Rn) */
L_0C0AA9E2: BLKS(0x0C0AA9E2u);
	r15 = r14;  /* 0C0AA9E2 mov Rm,Rn */
	IF(0x0C0AA9E4u); PR = R32(r15); r15 += 4; UPD(0x0C0AA9E6u, 2);  /* 0C0AA9E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA9E8u, 1);  /* 0C0AA9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA9EAu, 1);  /* 0C0AA9E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA9ECu, 1);  /* 0C0AA9EA mov.l @Rm+,Rn */
	IF(0x0C0AA9ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA9EC rts */
L_0C0AA9F0: BLKS(0x0C0AA9F0u);
	r0 = 0xB0u; UPD(0x0C0AA9F2u, 1);  /* 0C0AA9F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA9F2 add #imm,Rn */
	IF(0x0C0AA9F4u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9F6u, 2);  /* 0C0AA9F4 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AA9F6 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AA9FAu, 2);  /* 0C0AA9F8 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA9FA mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C0AA9FEu, 2);  /* 0C0AA9FC mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0AA9FE mov #imm,Rn */
	IF(0x0C0AAA00u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AAA02u, 2);  /* 0C0AAA00 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AAA02 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AAA06u, 2);  /* 0C0AAA04 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AAA08u, 1);  /* 0C0AAA06 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AAA0Au, 1);  /* 0C0AAA08 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA0Cu, 1);  /* 0C0AAA0A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA0C bra */
L_0C0AAA10: BLKS(0x0C0AAA10u);
	if (!T) { UPD(0x0C0AA99Cu, 3); goto L_0C0AA99C; }  /* 0C0AAA10 bf */
L_0C0AAA12: BLKS(0x0C0AAA12u);
	r15 += 0xFFFFFFF8u;  /* 0C0AAA12 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AAA16u, 2);  /* 0C0AAA14 mov.w @(disp,pc),Rn */
	IF(0x0C0AAA16u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AAA18u, 1);  /* 0C0AAA16 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AAA18 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0AAA1Cu, 2);  /* 0C0AAA1A mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C0AAA1Eu, 1);  /* 0C0AAA1C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AAA1E mov Rm,Rn */
	IF(0x0C0AAA20u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AAA22u, 2);  /* 0C0AAA20 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AAA22 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0AAA26u, 2);  /* 0C0AAA24 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AAA26 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AAA2Au, 2);  /* 0C0AAA28 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA2Cu, 1);  /* 0C0AAA2A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFD30u; UPD(0x0C0AAA2Eu, 1);  /* 0C0AAA2C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA2E bra */
L_0C0AAA40: BLKS(0x0C0AAA40u);
	r0 = 0xB0u; UPD(0x0C0AAA42u, 1);  /* 0C0AAA40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AAA42 add #imm,Rn */
	IF(0x0C0AAA44u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AAA46u, 2);  /* 0C0AAA44 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AAA46 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AAA48 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AAA4Cu, 3);  /* 0C0AAA4A mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AAA4C mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AAA50u, 2);  /* 0C0AAA4E mov.w @(disp,pc),Rn */
	IF(0x0C0AAA50u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AAA52u, 1);  /* 0C0AAA50 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0AAA52 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AAA56u, 2);  /* 0C0AAA54 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AAA58u, 1);  /* 0C0AAA56 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AAA5Au, 1);  /* 0C0AAA58 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA5Cu, 1);  /* 0C0AAA5A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA5C bra */
L_0C0AAA60: BLKS(0x0C0AAA60u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0AA9E2u, 3); goto L_0C0AA9E2; }  /* 0C0AAA60 bra */
L_0C0AAA70: BLKS(0x0C0AAA70u);
	r5 = 0xC0A9240u; UPD(0x0C0AAA72u, 1);  /* 0C0AAA70 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AAA72 mov Rm,Rn */
	IF(0x0C0AAA74u); PR = R32(r15); r15 += 4; UPD(0x0C0AAA76u, 2);  /* 0C0AAA74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAA78u, 1);  /* 0C0AAA76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAA7Au, 1);  /* 0C0AAA78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAA7Cu, 1);  /* 0C0AAA7A mov.l @Rm+,Rn */
	IF(0x0C0AAA7Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9240u: TAIL(blk_f_0C0A9240); default: JUMPD(tv_); } }  /* 0C0AAA7C jmp @Rn */
}

void blk_f_0C0AAB90(sh3_t *c)
{
	LOCALS;
L_0C0AAB90: BLKS(0x0C0AAB90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAB92u, 1);  /* 0C0AAB90 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AAB92 mov #imm,Rn */
	IF(0x0C0AAB94u); r15 -= 4; W32(r15, PR); UPD(0x0C0AAB96u, 2);  /* 0C0AAB94 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AAB98u, 1);  /* 0C0AAB96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AAB98 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AAB9Cu, 2);  /* 0C0AAB9A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AAB9Eu, 1);  /* 0C0AAB9C mov.l @(disp,pc),Rn */
	IF(0x0C0AAB9Eu); MACL = r6 * r2;  /* 0C0AAB9E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AABA2u, 3);  /* 0C0AABA0 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AABA4u, 1);  /* 0C0AABA2 mov.l @(disp,pc),Rn */
	IF(0x0C0AABA4u); r3 = MACL;  /* 0C0AABA4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AABA8u, 2);  /* 0C0AABA6 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AABAAu, 1);  /* 0C0AABA8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AABACu, 1);  /* 0C0AABAA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AABAC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AABB0u, 2);  /* 0C0AABAE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AABB2u, 1);  /* 0C0AABB0 mov.w @Rm+,Rn */
	IF(0x0C0AABB2u); r0 <<= 2;  /* 0C0AABB2 shll2 Rn */
	IF(0x0C0AABB4u); r6 = R32(r0 + r7); UPD(0x0C0AABB6u, 2);  /* 0C0AABB4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AABB8u, 1);  /* 0C0AABB6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AABBAu, 1);  /* 0C0AABB8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AABBCu, 1);  /* 0C0AABBA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AABBEu, 1);  /* 0C0AABBC mov.l @(disp,pc),Rn */
	r0 = 0xC0822C0u; UPD(0x0C0AABC0u, 1);  /* 0C0AABBE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AABC2u, 1);  /* 0C0AABC0 mov.l Rm,@Rn */
	IF(0x0C0AABC2u); { u32 t_ = r0; PR = 0x0C0AABC6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0822C0, 0x0C0822C0u, 0x0C0AABC6u); }  /* 0C0AABC2 jsr @Rn */
L_0C0AABC6: BLKS(0x0C0AABC6u);
	r15 = r14;  /* 0C0AABC6 mov Rm,Rn */
	IF(0x0C0AABC8u); PR = R32(r15); r15 += 4; UPD(0x0C0AABCAu, 2);  /* 0C0AABC8 lds.l @Rn+,pr */
	IF(0x0C0AABCAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AABCA rts */
}

void blk_f_0C0AABF0(sh3_t *c)
{
	LOCALS;
L_0C0AABF0: BLKS(0x0C0AABF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABF2u, 1);  /* 0C0AABF0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AABF2 mov #imm,Rn */
	IF(0x0C0AABF4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AABF6u, 2);  /* 0C0AABF4 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AABF8u, 1);  /* 0C0AABF6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AABF8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AABFCu, 2);  /* 0C0AABFA mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AABFEu, 1);  /* 0C0AABFC mov.l @(disp,pc),Rn */
	IF(0x0C0AABFEu); MACL = r6 * r2;  /* 0C0AABFE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AAC02u, 3);  /* 0C0AAC00 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AAC04u, 1);  /* 0C0AAC02 mov.l @(disp,pc),Rn */
	IF(0x0C0AAC04u); r3 = MACL;  /* 0C0AAC04 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AAC08u, 2);  /* 0C0AAC06 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AAC0Au, 1);  /* 0C0AAC08 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AAC0Cu, 1);  /* 0C0AAC0A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AAC0C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AAC10u, 2);  /* 0C0AAC0E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AAC12u, 1);  /* 0C0AAC10 mov.w @Rm+,Rn */
	IF(0x0C0AAC12u); r0 <<= 2;  /* 0C0AAC12 shll2 Rn */
	IF(0x0C0AAC14u); r6 = R32(r0 + r7); UPD(0x0C0AAC16u, 2);  /* 0C0AAC14 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AAC18u, 1);  /* 0C0AAC16 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AAC1Au, 1);  /* 0C0AAC18 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AAC1Cu, 1);  /* 0C0AAC1A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AAC1Eu, 1);  /* 0C0AAC1C mov.l @(disp,pc),Rn */
	r0 = 0xC0826A0u; UPD(0x0C0AAC20u, 1);  /* 0C0AAC1E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AAC22u, 1);  /* 0C0AAC20 mov.l Rm,@Rn */
	IF(0x0C0AAC22u); { u32 t_ = r0; PR = 0x0C0AAC26u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0826A0, 0x0C0826A0u, 0x0C0AAC26u); }  /* 0C0AAC22 jsr @Rn */
L_0C0AAC26: BLKS(0x0C0AAC26u);
	r15 = r14;  /* 0C0AAC26 mov Rm,Rn */
	IF(0x0C0AAC28u); PR = R32(r15); r15 += 4; UPD(0x0C0AAC2Au, 2);  /* 0C0AAC28 lds.l @Rn+,pr */
	IF(0x0C0AAC2Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAC2A rts */
}

void blk_f_0C0AB3D0(sh3_t *c)
{
	LOCALS;
L_0C0AB3D0: BLKS(0x0C0AB3D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3D2u, 1);  /* 0C0AB3D0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0AB3D4u, 1);  /* 0C0AB3D2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AB3D4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3D8u, 2);  /* 0C0AB3D6 mov.l Rm,@-Rn */
	IF(0x0C0AB3D8u); MACL = r8 * r0;  /* 0C0AB3D8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3DCu, 3);  /* 0C0AB3DA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AB3DEu, 1);  /* 0C0AB3DC mov.l @(disp,pc),Rn */
	IF(0x0C0AB3DEu); r9 = MACL;  /* 0C0AB3DE sts macl,Rn */
	IF(0x0C0AB3E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB3E2u, 2);  /* 0C0AB3E0 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0AB3E2 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0AB3E6u, 2);  /* 0C0AB3E4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0AB3E6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB3F0u, 4); goto L_0C0AB3F0; } goto L_0C0AB3EC; }  /* 0C0AB3E8 bf/s */
L_0C0AB3EC: BLKS(0x0C0AB3ECu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AB560u, 4); goto L_0C0AB560; }  /* 0C0AB3EC bra */
L_0C0AB3F0: BLKS(0x0C0AB3F0u);
	T = r0 == 0x1u;  /* 0C0AB3F0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0AB3FAu, 4); goto L_0C0AB3FA; }  /* 0C0AB3F2 bf */
L_0C0AB3F4: BLKS(0x0C0AB3F4u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB3F4 add #imm,Rn */
	{ IF(0x0C0AB3F8u); ; /* slot nop */ UPD(0x0C0AB520u, 4); goto L_0C0AB520; }  /* 0C0AB3F6 bra */
L_0C0AB3FA: BLKS(0x0C0AB3FAu);
	r9 = 0xC0A8B50u; UPD(0x0C0AB3FCu, 1);  /* 0C0AB3FA mov.l @(disp,pc),Rn */
	IF(0x0C0AB3FCu); { u32 t_ = r9; PR = 0x0C0AB400u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AB400u); }  /* 0C0AB3FC jsr @Rn */
L_0C0AB400: BLKS(0x0C0AB400u);
	IF(0x0C0AB400u); T = (s32)r0 >= 0;  /* 0C0AB400 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB40Au, 4); goto L_0C0AB40A; } goto L_0C0AB406; }  /* 0C0AB402 bt/s */
L_0C0AB406: BLKS(0x0C0AB406u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AB510u, 4); goto L_0C0AB510; }  /* 0C0AB406 bra */
L_0C0AB40A: BLKS(0x0C0AB40Au);
	r0 = 0xC062780u; UPD(0x0C0AB40Cu, 1);  /* 0C0AB40A mov.l @(disp,pc),Rn */
	IF(0x0C0AB40Cu); { u32 t_ = r0; PR = 0x0C0AB410u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AB410u); }  /* 0C0AB40C jsr @Rn */
L_0C0AB410: BLKS(0x0C0AB410u);
	T = r0 == 0x2u;  /* 0C0AB410 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB4E0u, 4); goto L_0C0AB4E0; }  /* 0C0AB412 bt */
L_0C0AB414: BLKS(0x0C0AB414u);
	r5 = 0x2u;  /* 0C0AB414 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0AB416 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AB4B0u, 5); goto L_0C0AB4B0; } goto L_0C0AB41C; }  /* 0C0AB418 bt/s */
L_0C0AB41C: BLKS(0x0C0AB41Cu);
	T = r0 == 0x1u;  /* 0C0AB41C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB480u, 5); goto L_0C0AB480; }  /* 0C0AB41E bt */
L_0C0AB420: BLKS(0x0C0AB420u);
	r5 = 0xB4u; UPD(0x0C0AB422u, 1);  /* 0C0AB420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB422 add #imm,Rn */
	IF(0x0C0AB424u); MACL = r8 * r5;  /* 0C0AB424 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB428u, 4);  /* 0C0AB426 mov.l @(disp,pc),Rn */
	IF(0x0C0AB428u); r3 = MACL;  /* 0C0AB428 sts macl,Rn */
	r3 += r0;  /* 0C0AB42A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB42Eu, 3);  /* 0C0AB42C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB42E mov #imm,Rn */
	IF(0x0C0AB430u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB432u, 2);  /* 0C0AB430 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB432 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB436u, 2);  /* 0C0AB434 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB436 add #imm,Rn */
	IF(0x0C0AB438u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB43Au, 2);  /* 0C0AB438 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB43A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB43Eu, 2);  /* 0C0AB43C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB440u, 1);  /* 0C0AB43E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB442u, 1);  /* 0C0AB440 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB444u, 1);  /* 0C0AB442 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AB446u, 1);  /* 0C0AB444 mov.l @(disp,Rm),Rn */
L_0C0AB446: BLKS(0x0C0AB446u);
	IF(0x0C0AB446u); { u32 t_ = r0; PR = 0x0C0AB44Au; IF(0x0C0AB448u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AB44Au); }  /* 0C0AB446 jsr @Rn */
L_0C0AB44A: BLKS(0x0C0AB44Au);
	r6 = 0xB4u; UPD(0x0C0AB44Cu, 1);  /* 0C0AB44A mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AB44C add #imm,Rn */
	IF(0x0C0AB44Eu); MACL = r9 * r6;  /* 0C0AB44E mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AB452u, 4);  /* 0C0AB450 mov.l @(disp,pc),Rn */
	IF(0x0C0AB452u); r9 = MACL;  /* 0C0AB452 sts macl,Rn */
	r9 += r4;  /* 0C0AB454 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C0AB458u, 3);  /* 0C0AB456 mov.l @Rm,Rn */
	IF(0x0C0AB458u); MACL = r8 * r6;  /* 0C0AB458 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AB45Cu, 3);  /* 0C0AB45A mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C0AB45C or Rm,Rn */
	W32(r9, r3); UPD(0x0C0AB460u, 2);  /* 0C0AB45E mov.l Rm,@Rn */
	IF(0x0C0AB460u); r0 = MACL;  /* 0C0AB460 sts macl,Rn */
	r8 = 0x0u;  /* 0C0AB462 mov #imm,Rn */
	IF(0x0C0AB464u); W32(r0 + r4, r8); UPD(0x0C0AB466u, 3);  /* 0C0AB464 mov.l Rm,@(r0,Rn) */
L_0C0AB466: BLKS(0x0C0AB466u);
	r15 = r14;  /* 0C0AB466 mov Rm,Rn */
	IF(0x0C0AB468u); PR = R32(r15); r15 += 4; UPD(0x0C0AB46Au, 2);  /* 0C0AB468 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB46Cu, 1);  /* 0C0AB46A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB46Eu, 1);  /* 0C0AB46C mov.l @Rm+,Rn */
	IF(0x0C0AB46Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB46E rts */
L_0C0AB480: BLKS(0x0C0AB480u);
	r5 = 0xB4u; UPD(0x0C0AB482u, 1);  /* 0C0AB480 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB482 add #imm,Rn */
	IF(0x0C0AB484u); MACL = r8 * r5;  /* 0C0AB484 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB488u, 4);  /* 0C0AB486 mov.l @(disp,pc),Rn */
	IF(0x0C0AB488u); r3 = MACL;  /* 0C0AB488 sts macl,Rn */
	r3 += r0;  /* 0C0AB48A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB48Eu, 3);  /* 0C0AB48C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB48E mov #imm,Rn */
	IF(0x0C0AB490u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB492u, 2);  /* 0C0AB490 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB492 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB496u, 2);  /* 0C0AB494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB496 add #imm,Rn */
	IF(0x0C0AB498u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB49Au, 2);  /* 0C0AB498 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB49A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB49Eu, 2);  /* 0C0AB49C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AB4A0u, 1);  /* 0C0AB49E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB4A2u, 1);  /* 0C0AB4A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB4A4u, 1);  /* 0C0AB4A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB4A4 bra */
L_0C0AB4B0: BLKS(0x0C0AB4B0u);
	if (!T) { UPD(0x0C0AB420u, 3); goto L_0C0AB420; }  /* 0C0AB4B0 bf */
L_0C0AB4B2: BLKS(0x0C0AB4B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB4B2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AB4B6u, 2);  /* 0C0AB4B4 mov.w @(disp,pc),Rn */
	IF(0x0C0AB4B6u); MACL = r8 * r5;  /* 0C0AB4B6 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB4BAu, 3);  /* 0C0AB4B8 mov.l @(disp,pc),Rn */
	IF(0x0C0AB4BAu); r3 = MACL;  /* 0C0AB4BA sts macl,Rn */
	r3 += r0;  /* 0C0AB4BC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB4C0u, 3);  /* 0C0AB4BE mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB4C0 mov #imm,Rn */
	IF(0x0C0AB4C2u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4C4u, 2);  /* 0C0AB4C2 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB4C4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB4C8u, 2);  /* 0C0AB4C6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB4C8 add #imm,Rn */
	IF(0x0C0AB4CAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4CCu, 2);  /* 0C0AB4CA mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB4CC extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB4D0u, 2);  /* 0C0AB4CE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AB4D2u, 1);  /* 0C0AB4D0 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB4D4u, 1);  /* 0C0AB4D2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB4D6u, 1);  /* 0C0AB4D4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB4D6 bra */
L_0C0AB4E0: BLKS(0x0C0AB4E0u);
	r5 = 0xB4u; UPD(0x0C0AB4E2u, 1);  /* 0C0AB4E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB4E2 add #imm,Rn */
	IF(0x0C0AB4E4u); MACL = r8 * r5;  /* 0C0AB4E4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB4E8u, 4);  /* 0C0AB4E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AB4E8u); r3 = MACL;  /* 0C0AB4E8 sts macl,Rn */
	r3 += r0;  /* 0C0AB4EA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB4EEu, 3);  /* 0C0AB4EC mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB4EE mov #imm,Rn */
	IF(0x0C0AB4F0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4F2u, 2);  /* 0C0AB4F0 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB4F2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB4F6u, 2);  /* 0C0AB4F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB4F6 add #imm,Rn */
	IF(0x0C0AB4F8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4FAu, 2);  /* 0C0AB4F8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB4FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB4FEu, 2);  /* 0C0AB4FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AB500u, 1);  /* 0C0AB4FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB502u, 1);  /* 0C0AB500 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB504u, 1);  /* 0C0AB502 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB504 bra */
L_0C0AB510: BLKS(0x0C0AB510u);
	r4 = 0xB4u; UPD(0x0C0AB512u, 1);  /* 0C0AB510 mov.w @(disp,pc),Rn */
	IF(0x0C0AB512u); MACL = r8 * r4;  /* 0C0AB512 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AB516u, 3);  /* 0C0AB514 mov.l @(disp,pc),Rn */
	IF(0x0C0AB516u); r0 = MACL;  /* 0C0AB516 sts macl,Rn */
	{ IF(0x0C0AB51Au); W32(r0 + r3, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0AB466u, 4); goto L_0C0AB466; }  /* 0C0AB518 bra */
L_0C0AB520: BLKS(0x0C0AB520u);
	r8 = 0xB0u; UPD(0x0C0AB522u, 1);  /* 0C0AB520 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AB522 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB526u, 2);  /* 0C0AB524 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AB526 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB52Au, 2);  /* 0C0AB528 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AB52A mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AB52Eu, 2);  /* 0C0AB52C mov.w @(disp,pc),Rn */
	IF(0x0C0AB52Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AB530u, 1);  /* 0C0AB52E mov.b @(r0,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB532u, 1);  /* 0C0AB530 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB532 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB536u, 2);  /* 0C0AB534 mov.l Rm,@(disp,Rn) */
	r5 = 0xBu;  /* 0C0AB536 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AB53Au, 2);  /* 0C0AB538 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB53Cu, 1);  /* 0C0AB53A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB53Cu); { u32 t_ = r0; PR = 0x0C0AB540u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AB540u); }  /* 0C0AB53C jsr @Rn */
L_0C0AB540: BLKS(0x0C0AB540u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB542u, 1);  /* 0C0AB540 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0AB542 add #imm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AB546u, 2);  /* 0C0AB544 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0AB546 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0AB548 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0AB54Cu, 3);  /* 0C0AB54A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB54Cu); { u32 t_ = r8; PR = 0x0C0AB550u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AB550u); }  /* 0C0AB54C jsr @Rn */
L_0C0AB550: BLKS(0x0C0AB550u);
	r3 = 0x0u;  /* 0C0AB550 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB466u, 4); goto L_0C0AB466; }  /* 0C0AB552 bra */
L_0C0AB560: BLKS(0x0C0AB560u);
	r2 = 0xC0A90A0u; UPD(0x0C0AB562u, 1);  /* 0C0AB560 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AB562 mov Rm,Rn */
	IF(0x0C0AB564u); PR = R32(r15); r15 += 4; UPD(0x0C0AB566u, 2);  /* 0C0AB564 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB568u, 1);  /* 0C0AB566 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB56Au, 1);  /* 0C0AB568 mov.l @Rm+,Rn */
	IF(0x0C0AB56Au); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A90A0u: TAIL(blk_f_0C0A90A0); default: JUMPD(tv_); } }  /* 0C0AB56A jmp @Rn */
}

void blk_f_0C0AB5A0(sh3_t *c)
{
	LOCALS;
L_0C0AB5A0: BLKS(0x0C0AB5A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5A2u, 1);  /* 0C0AB5A0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0AB5A4u, 1);  /* 0C0AB5A2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AB5A4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5A8u, 2);  /* 0C0AB5A6 mov.l Rm,@-Rn */
	IF(0x0C0AB5A8u); MACL = r8 * r0;  /* 0C0AB5A8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5ACu, 3);  /* 0C0AB5AA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AB5AEu, 1);  /* 0C0AB5AC mov.l @(disp,pc),Rn */
	IF(0x0C0AB5AEu); r9 = MACL;  /* 0C0AB5AE sts macl,Rn */
	IF(0x0C0AB5B0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB5B2u, 2);  /* 0C0AB5B0 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0AB5B2 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0AB5B6u, 2);  /* 0C0AB5B4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0AB5B6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB5C0u, 4); goto L_0C0AB5C0; } goto L_0C0AB5BC; }  /* 0C0AB5B8 bf/s */
L_0C0AB5BC: BLKS(0x0C0AB5BCu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AB720u, 4); goto L_0C0AB720; }  /* 0C0AB5BC bra */
L_0C0AB5C0: BLKS(0x0C0AB5C0u);
	T = r0 == 0x1u;  /* 0C0AB5C0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0AB5CAu, 4); goto L_0C0AB5CA; }  /* 0C0AB5C2 bf */
L_0C0AB5C4: BLKS(0x0C0AB5C4u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB5C4 add #imm,Rn */
	{ IF(0x0C0AB5C8u); ; /* slot nop */ UPD(0x0C0AB6E0u, 4); goto L_0C0AB6E0; }  /* 0C0AB5C6 bra */
L_0C0AB5CA: BLKS(0x0C0AB5CAu);
	r9 = 0xC062780u; UPD(0x0C0AB5CCu, 1);  /* 0C0AB5CA mov.l @(disp,pc),Rn */
	IF(0x0C0AB5CCu); { u32 t_ = r9; PR = 0x0C0AB5D0u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AB5D0u); }  /* 0C0AB5CC jsr @Rn */
L_0C0AB5D0: BLKS(0x0C0AB5D0u);
	T = r0 == 0x2u;  /* 0C0AB5D0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB6B0u, 4); goto L_0C0AB6B0; } goto L_0C0AB5D6; }  /* 0C0AB5D2 bt/s */
L_0C0AB5D6: BLKS(0x0C0AB5D6u);
	T = (s32)r0 > (s32)r2;  /* 0C0AB5D6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AB680u, 5); goto L_0C0AB680; } goto L_0C0AB5DC; }  /* 0C0AB5D8 bt/s */
L_0C0AB5DC: BLKS(0x0C0AB5DCu);
	T = r0 == 0x1u;  /* 0C0AB5DC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB650u, 5); goto L_0C0AB650; }  /* 0C0AB5DE bt */
L_0C0AB5E0: BLKS(0x0C0AB5E0u);
	r9 = 0xB4u; UPD(0x0C0AB5E2u, 1);  /* 0C0AB5E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB5E2 add #imm,Rn */
	IF(0x0C0AB5E4u); MACL = r8 * r9;  /* 0C0AB5E4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB5E8u, 4);  /* 0C0AB5E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AB5E8u); r3 = MACL;  /* 0C0AB5E8 sts macl,Rn */
	r3 += r0;  /* 0C0AB5EA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB5EEu, 3);  /* 0C0AB5EC mov.w @(disp,pc),Rn */
	IF(0x0C0AB5EEu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB5F0u, 1);  /* 0C0AB5EE mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB5F0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0AB5F4u, 2);  /* 0C0AB5F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB5F4 add #imm,Rn */
	IF(0x0C0AB5F6u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB5F8u, 2);  /* 0C0AB5F6 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB5F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB5FCu, 2);  /* 0C0AB5FA mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AB5FC mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0AB600u, 2);  /* 0C0AB5FE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB602u, 1);  /* 0C0AB600 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AB604u, 1);  /* 0C0AB602 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB606u, 1);  /* 0C0AB604 mov.l @(disp,pc),Rn */
L_0C0AB606: BLKS(0x0C0AB606u);
	r9 = 0xC0A8B50u; UPD(0x0C0AB608u, 1);  /* 0C0AB606 mov.l @(disp,pc),Rn */
	IF(0x0C0AB608u); { u32 t_ = r0; PR = 0x0C0AB60Cu; IF(0x0C0AB60Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AB60Cu); }  /* 0C0AB608 jsr @Rn */
L_0C0AB60C: BLKS(0x0C0AB60Cu);
	r15 += 0x8u;  /* 0C0AB60C add #imm,Rn */
	IF(0x0C0AB60Eu); { u32 t_ = r9; PR = 0x0C0AB612u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AB612u); }  /* 0C0AB60E jsr @Rn */
L_0C0AB612: BLKS(0x0C0AB612u);
	IF(0x0C0AB612u); T = (s32)r0 >= 0;  /* 0C0AB612 cmp/pz Rn */
	if (!T) { UPD(0x0C0AB640u, 4); goto L_0C0AB640; }  /* 0C0AB614 bf */
L_0C0AB616: BLKS(0x0C0AB616u);
	r3 = 0x0u;  /* 0C0AB616 mov #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AB61Au, 2);  /* 0C0AB618 mov.w @(disp,pc),Rn */
	IF(0x0C0AB61Au); MACL = r0 * r5;  /* 0C0AB61A mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AB61Eu, 3);  /* 0C0AB61C mov.l @(disp,pc),Rn */
	IF(0x0C0AB61Eu); r6 = MACL;  /* 0C0AB61E sts macl,Rn */
	r6 += r4;  /* 0C0AB620 add Rm,Rn */
	r9 = R32(r6); UPD(0x0C0AB624u, 3);  /* 0C0AB622 mov.l @Rm,Rn */
	IF(0x0C0AB624u); MACL = r8 * r5;  /* 0C0AB624 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AB628u, 3);  /* 0C0AB626 mov.l @(disp,pc),Rn */
	r9 |= r1;  /* 0C0AB628 or Rm,Rn */
	W32(r6, r9); UPD(0x0C0AB62Cu, 2);  /* 0C0AB62A mov.l Rm,@Rn */
	IF(0x0C0AB62Cu); r0 = MACL;  /* 0C0AB62C sts macl,Rn */
	IF(0x0C0AB62Eu); W32(r0 + r4, r3); UPD(0x0C0AB630u, 2);  /* 0C0AB62E mov.l Rm,@(r0,Rn) */
L_0C0AB630: BLKS(0x0C0AB630u);
	r15 = r14;  /* 0C0AB630 mov Rm,Rn */
	IF(0x0C0AB632u); PR = R32(r15); r15 += 4; UPD(0x0C0AB634u, 2);  /* 0C0AB632 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB636u, 1);  /* 0C0AB634 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB638u, 1);  /* 0C0AB636 mov.l @Rm+,Rn */
	IF(0x0C0AB638u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB638 rts */
L_0C0AB640: BLKS(0x0C0AB640u);
	r0 = 0xB4u; UPD(0x0C0AB642u, 1);  /* 0C0AB640 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AB642 mov #imm,Rn */
	IF(0x0C0AB644u); MACL = r8 * r0;  /* 0C0AB644 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AB648u, 4);  /* 0C0AB646 mov.l @(disp,pc),Rn */
	IF(0x0C0AB648u); r0 = MACL;  /* 0C0AB648 sts macl,Rn */
	{ IF(0x0C0AB64Cu); W32(r0 + r8, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0AB630u, 4); goto L_0C0AB630; }  /* 0C0AB64A bra */
L_0C0AB650: BLKS(0x0C0AB650u);
	r0 = 0xB4u; UPD(0x0C0AB652u, 1);  /* 0C0AB650 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB652 add #imm,Rn */
	IF(0x0C0AB654u); MACL = r8 * r0;  /* 0C0AB654 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AB658u, 4);  /* 0C0AB656 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB65Au, 1);  /* 0C0AB658 mov.w @(disp,pc),Rn */
	IF(0x0C0AB65Au); r3 = MACL;  /* 0C0AB65A sts macl,Rn */
	r3 += r7;  /* 0C0AB65C add Rm,Rn */
	IF(0x0C0AB65Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB660u, 3);  /* 0C0AB65E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AB660 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AB664u, 2);  /* 0C0AB662 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB664 add #imm,Rn */
	IF(0x0C0AB666u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB668u, 2);  /* 0C0AB666 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB668 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AB66A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AB66Eu, 3);  /* 0C0AB66C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AB670u, 1);  /* 0C0AB66E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB672u, 1);  /* 0C0AB670 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB674u, 1);  /* 0C0AB672 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB674 bra */
L_0C0AB680: BLKS(0x0C0AB680u);
	if (!T) { UPD(0x0C0AB5E0u, 3); goto L_0C0AB5E0; }  /* 0C0AB680 bf */
L_0C0AB682: BLKS(0x0C0AB682u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB682 add #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0AB686u, 2);  /* 0C0AB684 mov.w @(disp,pc),Rn */
	IF(0x0C0AB686u); MACL = r8 * r6;  /* 0C0AB686 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AB68Au, 3);  /* 0C0AB688 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB68Cu, 1);  /* 0C0AB68A mov.w @(disp,pc),Rn */
	IF(0x0C0AB68Cu); r9 = MACL;  /* 0C0AB68C sts macl,Rn */
	r9 += r5;  /* 0C0AB68E add Rm,Rn */
	IF(0x0C0AB690u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB692u, 3);  /* 0C0AB690 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB692 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AB694 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB698u, 3);  /* 0C0AB696 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB698 add #imm,Rn */
	IF(0x0C0AB69Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB69Cu, 2);  /* 0C0AB69A mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C0AB69C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AB6A0u, 2);  /* 0C0AB69E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AB6A2u, 1);  /* 0C0AB6A0 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AB6A4u, 1);  /* 0C0AB6A2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6A6u, 1);  /* 0C0AB6A4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB6A6 bra */
L_0C0AB6B0: BLKS(0x0C0AB6B0u);
	r7 = 0xB4u; UPD(0x0C0AB6B2u, 1);  /* 0C0AB6B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB6B2 add #imm,Rn */
	IF(0x0C0AB6B4u); MACL = r8 * r7;  /* 0C0AB6B4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0AB6B8u, 4);  /* 0C0AB6B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB6BAu, 1);  /* 0C0AB6B8 mov.w @(disp,pc),Rn */
	IF(0x0C0AB6BAu); r9 = MACL;  /* 0C0AB6BA sts macl,Rn */
	r9 += r6;  /* 0C0AB6BC add Rm,Rn */
	IF(0x0C0AB6BEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB6C0u, 3);  /* 0C0AB6BE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB6C0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AB6C4u, 2);  /* 0C0AB6C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB6C4 add #imm,Rn */
	IF(0x0C0AB6C6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB6C8u, 2);  /* 0C0AB6C6 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB6C8 mov #imm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AB6CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0AB6CEu, 3);  /* 0C0AB6CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AB6D0u, 1);  /* 0C0AB6CE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AB6D2u, 1);  /* 0C0AB6D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6D4u, 1);  /* 0C0AB6D2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB6D4 bra */
L_0C0AB6E0: BLKS(0x0C0AB6E0u);
	r8 = 0xB0u; UPD(0x0C0AB6E2u, 1);  /* 0C0AB6E0 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AB6E2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB6E6u, 2);  /* 0C0AB6E4 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AB6E6 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB6EAu, 2);  /* 0C0AB6E8 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AB6EA mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AB6EEu, 2);  /* 0C0AB6EC mov.w @(disp,pc),Rn */
	IF(0x0C0AB6EEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AB6F0u, 1);  /* 0C0AB6EE mov.b @(r0,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB6F2u, 1);  /* 0C0AB6F0 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB6F2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB6F6u, 2);  /* 0C0AB6F4 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AB6F6 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AB6FAu, 2);  /* 0C0AB6F8 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6FCu, 1);  /* 0C0AB6FA mov.l @(disp,Rm),Rn */
	IF(0x0C0AB6FCu); { u32 t_ = r0; PR = 0x0C0AB700u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AB700u); }  /* 0C0AB6FC jsr @Rn */
L_0C0AB700: BLKS(0x0C0AB700u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB702u, 1);  /* 0C0AB700 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0AB702 add #imm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AB706u, 2);  /* 0C0AB704 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0AB706 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0AB708 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0AB70Cu, 3);  /* 0C0AB70A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB70Cu); { u32 t_ = r8; PR = 0x0C0AB710u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AB710u); }  /* 0C0AB70C jsr @Rn */
L_0C0AB710: BLKS(0x0C0AB710u);
	r3 = 0x0u;  /* 0C0AB710 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB630u, 4); goto L_0C0AB630; }  /* 0C0AB712 bra */
L_0C0AB720: BLKS(0x0C0AB720u);
	r2 = 0xC0A9170u; UPD(0x0C0AB722u, 1);  /* 0C0AB720 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AB722 mov Rm,Rn */
	IF(0x0C0AB724u); PR = R32(r15); r15 += 4; UPD(0x0C0AB726u, 2);  /* 0C0AB724 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB728u, 1);  /* 0C0AB726 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB72Au, 1);  /* 0C0AB728 mov.l @Rm+,Rn */
	IF(0x0C0AB72Au); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9170u: TAIL(blk_f_0C0A9170); default: JUMPD(tv_); } }  /* 0C0AB72A jmp @Rn */
}

void blk_f_0C0AB760(sh3_t *c)
{
	LOCALS;
L_0C0AB760: BLKS(0x0C0AB760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB762u, 1);  /* 0C0AB760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB764u, 1);  /* 0C0AB762 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB766u, 1);  /* 0C0AB764 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB768u, 1);  /* 0C0AB766 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Au, 1);  /* 0C0AB768 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Cu, 1);  /* 0C0AB76A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Eu, 1);  /* 0C0AB76C mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB770u, 1);  /* 0C0AB76E mov.l @(disp,pc),Rn */
	IF(0x0C0AB770u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB772u, 1);  /* 0C0AB770 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0AB774u, 1);  /* 0C0AB772 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AB774 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AB778u, 2);  /* 0C0AB776 mov.w @Rm+,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0AB77Au, 1);  /* 0C0AB778 mov.l @(disp,pc),Rn */
	W16(r12, r0); UPD(0x0C0AB77Cu, 1);  /* 0C0AB77A mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AB77Eu, 1);  /* 0C0AB77C mov.w @Rm+,Rn */
	r8 = 0xC071740u; UPD(0x0C0AB780u, 1);  /* 0C0AB77E mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0AB780 and #imm,r0 */
	W32(r4, r3); UPD(0x0C0AB784u, 2);  /* 0C0AB782 mov.l Rm,@Rn */
	r13 = 0xC2B0384u; UPD(0x0C0AB786u, 1);  /* 0C0AB784 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0AB786 mov #imm,Rn */
	IF(0x0C0AB788u); { u32 t_ = r8; PR = 0x0C0AB78Cu; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AB78Cu); }  /* 0C0AB788 jsr @Rn */
L_0C0AB78C: BLKS(0x0C0AB78Cu);
	T = (r0 & r0) == 0;  /* 0C0AB78C tst Rm,Rn */
	if (!T) { UPD(0x0C0AB7B0u, 4); goto L_0C0AB7B0; }  /* 0C0AB78E bf */
L_0C0AB790: BLKS(0x0C0AB790u);
	r0 = 0x1u;  /* 0C0AB790 mov #imm,Rn */
	UPD(0x0C0AB792u, 1);
L_0C0AB792: BLKS(0x0C0AB792u);
	r15 = r14;  /* 0C0AB792 mov Rm,Rn */
	IF(0x0C0AB794u); PR = R32(r15); r15 += 4; UPD(0x0C0AB796u, 2);  /* 0C0AB794 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB798u, 1);  /* 0C0AB796 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AB79Au, 1);  /* 0C0AB798 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB79Cu, 1);  /* 0C0AB79A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB79Eu, 1);  /* 0C0AB79C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB7A0u, 1);  /* 0C0AB79E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB7A2u, 1);  /* 0C0AB7A0 mov.l @Rm+,Rn */
	IF(0x0C0AB7A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB7A2 rts */
L_0C0AB7B0: BLKS(0x0C0AB7B0u);
	r9 = 0xC2B1811u; UPD(0x0C0AB7B2u, 1);  /* 0C0AB7B0 mov.l @(disp,pc),Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0AB7B4u, 1);  /* 0C0AB7B2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AB7B6u, 1);  /* 0C0AB7B4 mov.b @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AB7B8u, 1);  /* 0C0AB7B6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AB7BAu, 1);  /* 0C0AB7B8 mov.w @Rm,Rn */
	r7 = 0xC2460ACu; UPD(0x0C0AB7BCu, 1);  /* 0C0AB7BA mov.l @(disp,pc),Rn */
	IF(0x0C0AB7BCu); MACL = r9 * r8;  /* 0C0AB7BC mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AB7C0u, 3);  /* 0C0AB7BE mov.w @Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AB7C2u, 1);  /* 0C0AB7C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AB7C2u); r8 = MACL;  /* 0C0AB7C2 sts macl,Rn */
	r8 += r3;  /* 0C0AB7C4 add Rm,Rn */
	r11 = r6 & 0xFFFF;  /* 0C0AB7C6 extu.w Rm,Rn */
	r4 = 0xC0000110u; UPD(0x0C0AB7CAu, 4);  /* 0C0AB7C8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AB7CCu, 1);  /* 0C0AB7CA mov.w @Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AB7CEu, 1);  /* 0C0AB7CC mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFFFF;  /* 0C0AB7CE extu.w Rm,Rn */
	W32(r8 + 0x4u, r11); UPD(0x0C0AB7D2u, 2);  /* 0C0AB7D0 mov.l Rm,@(disp,Rn) */
	W32(r8, r4); UPD(0x0C0AB7D4u, 1);  /* 0C0AB7D2 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0AB7D4 mov #imm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0AB7D8u, 2);  /* 0C0AB7D6 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0AB7D8 mov Rm,Rn */
	IF(0x0C0AB7DAu); { u32 t_ = r0; PR = 0x0C0AB7DEu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AB7DEu); }  /* 0C0AB7DA jsr @Rn */
L_0C0AB7DE: BLKS(0x0C0AB7DEu);
	r3 = 0xC0A9AE0u; UPD(0x0C0AB7E0u, 1);  /* 0C0AB7DE mov.l @(disp,pc),Rn */
	IF(0x0C0AB7E0u); { u32 t_ = r3; PR = 0x0C0AB7E4u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AB7E4u); }  /* 0C0AB7E0 jsr @Rn */
L_0C0AB7E4: BLKS(0x0C0AB7E4u);
	r4 = 0xC237C08u; UPD(0x0C0AB7E6u, 1);  /* 0C0AB7E4 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0AB7E6 mov #imm,Rn */
	IF(0x0C0AB7E8u); MACL = r10 * r7;  /* 0C0AB7E8 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0AB7ECu, 4);  /* 0C0AB7EA mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AB7EC add #imm,Rn */
	r6 = 0xC286318u; UPD(0x0C0AB7F0u, 2);  /* 0C0AB7EE mov.l @(disp,pc),Rn */
	IF(0x0C0AB7F0u); r4 = MACL;  /* 0C0AB7F0 sts macl,Rn */
	r0 = 0xC3C43C6u; UPD(0x0C0AB7F4u, 2);  /* 0C0AB7F2 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C0AB7F4 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AB7F8u, 2);  /* 0C0AB7F6 mov.w @Rm,Rn */
	IF(0x0C0AB7F8u); r5 <<= 16;  /* 0C0AB7F8 shll16 Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C0AB7FCu, 2);  /* 0C0AB7FA mov.l @(disp,Rm),Rn */
	IF(0x0C0AB7FCu); r3 <<= 16;  /* 0C0AB7FC shll16 Rn */
	r0 = 0xB0u; UPD(0x0C0AB800u, 2);  /* 0C0AB7FE mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0AB800 sub Rm,Rn */
	IF(0x0C0AB802u); W8(r0 + r8, r10); UPD(0x0C0AB804u, 2);  /* 0C0AB802 mov.b Rm,@(r0,Rn) */
	r4 += 0x42u;  /* 0C0AB804 add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0AB808u, 2);  /* 0C0AB806 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C0AB808 add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0AB80Cu, 2);  /* 0C0AB80A mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB80Eu, 1);  /* 0C0AB80C mov.b @Rm,Rn */
	IF(0x0C0AB80Eu); W8(r0 + r8, r10); UPD(0x0C0AB810u, 1);  /* 0C0AB80E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AB810 add #imm,Rn */
	IF(0x0C0AB812u); W8(r0 + r8, r10); UPD(0x0C0AB814u, 2);  /* 0C0AB812 mov.b Rm,@(r0,Rn) */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0AB816u, 1);  /* 0C0AB814 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AB818u, 1);  /* 0C0AB816 mov.w @Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB81Au, 1);  /* 0C0AB818 mov.l Rm,@Rn */
	r0 = r1 & 0xFFFF;  /* 0C0AB81A extu.w Rm,Rn */
	r6 = 0xC1DD95Cu; UPD(0x0C0AB81Eu, 2);  /* 0C0AB81C mov.l @(disp,pc),Rn */
	IF(0x0C0AB81Eu); r0 <<= 2;  /* 0C0AB81E shll2 Rn */
	IF(0x0C0AB820u); r5 = R32(r0 + r6); UPD(0x0C0AB822u, 2);  /* 0C0AB820 mov.l @(r0,Rm),Rn */
	r7 = 0x1u;  /* 0C0AB822 mov #imm,Rn */
	r2 = 0xC085B00u; UPD(0x0C0AB826u, 2);  /* 0C0AB824 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AB826 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AB82Au, 2);  /* 0C0AB828 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r11); UPD(0x0C0AB82Cu, 1);  /* 0C0AB82A mov.l Rm,@(disp,Rn) */
	r4 = 0xC28EDFCu; UPD(0x0C0AB82Eu, 1);  /* 0C0AB82C mov.l @(disp,pc),Rn */
	IF(0x0C0AB82Eu); { u32 t_ = r2; PR = 0x0C0AB832u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C085B00, 0x0C085B00u, 0x0C0AB832u); }  /* 0C0AB82E jsr @Rn */
L_0C0AB832: BLKS(0x0C0AB832u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AB792u, 3); goto L_0C0AB792; }  /* 0C0AB832 bra */
}

void blk_f_0C0AB880(sh3_t *c)
{
	LOCALS;
L_0C0AB880: BLKS(0x0C0AB880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB882u, 1);  /* 0C0AB880 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AB882 mov #imm,Rn */
	IF(0x0C0AB884u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB886u, 2);  /* 0C0AB884 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AB888u, 1);  /* 0C0AB886 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AB888 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB88Cu, 2);  /* 0C0AB88A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB88Eu, 1);  /* 0C0AB88C mov.l @(disp,pc),Rn */
	IF(0x0C0AB88Eu); MACL = r6 * r2;  /* 0C0AB88E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AB892u, 3);  /* 0C0AB890 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AB894u, 1);  /* 0C0AB892 mov.l @(disp,pc),Rn */
	IF(0x0C0AB894u); r3 = MACL;  /* 0C0AB894 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB898u, 2);  /* 0C0AB896 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AB89Au, 1);  /* 0C0AB898 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AB89Cu, 1);  /* 0C0AB89A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AB89C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AB8A0u, 2);  /* 0C0AB89E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AB8A2u, 1);  /* 0C0AB8A0 mov.w @Rm+,Rn */
	IF(0x0C0AB8A2u); r0 <<= 2;  /* 0C0AB8A2 shll2 Rn */
	IF(0x0C0AB8A4u); r6 = R32(r0 + r7); UPD(0x0C0AB8A6u, 2);  /* 0C0AB8A4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB8A8u, 1);  /* 0C0AB8A6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AB8AAu, 1);  /* 0C0AB8A8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AB8ACu, 1);  /* 0C0AB8AA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AB8AEu, 1);  /* 0C0AB8AC mov.l @(disp,pc),Rn */
	r0 = 0xC086720u; UPD(0x0C0AB8B0u, 1);  /* 0C0AB8AE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AB8B2u, 1);  /* 0C0AB8B0 mov.l Rm,@Rn */
	IF(0x0C0AB8B2u); { u32 t_ = r0; PR = 0x0C0AB8B6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C086720, 0x0C086720u, 0x0C0AB8B6u); }  /* 0C0AB8B2 jsr @Rn */
L_0C0AB8B6: BLKS(0x0C0AB8B6u);
	r15 = r14;  /* 0C0AB8B6 mov Rm,Rn */
	IF(0x0C0AB8B8u); PR = R32(r15); r15 += 4; UPD(0x0C0AB8BAu, 2);  /* 0C0AB8B8 lds.l @Rn+,pr */
	IF(0x0C0AB8BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB8BA rts */
}

void blk_f_0C0AB9C0(sh3_t *c)
{
	LOCALS;
L_0C0AB9C0: BLKS(0x0C0AB9C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB9C2u, 1);  /* 0C0AB9C0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AB9C2 mov #imm,Rn */
	IF(0x0C0AB9C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB9C6u, 2);  /* 0C0AB9C4 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AB9C8u, 1);  /* 0C0AB9C6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AB9C8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB9CCu, 2);  /* 0C0AB9CA mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB9CEu, 1);  /* 0C0AB9CC mov.l @(disp,pc),Rn */
	IF(0x0C0AB9CEu); MACL = r6 * r2;  /* 0C0AB9CE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AB9D2u, 3);  /* 0C0AB9D0 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AB9D4u, 1);  /* 0C0AB9D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AB9D4u); r3 = MACL;  /* 0C0AB9D4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB9D8u, 2);  /* 0C0AB9D6 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AB9DAu, 1);  /* 0C0AB9D8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AB9DCu, 1);  /* 0C0AB9DA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AB9DC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AB9E0u, 2);  /* 0C0AB9DE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AB9E2u, 1);  /* 0C0AB9E0 mov.w @Rm+,Rn */
	IF(0x0C0AB9E2u); r0 <<= 2;  /* 0C0AB9E2 shll2 Rn */
	IF(0x0C0AB9E4u); r6 = R32(r0 + r7); UPD(0x0C0AB9E6u, 2);  /* 0C0AB9E4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB9E8u, 1);  /* 0C0AB9E6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AB9EAu, 1);  /* 0C0AB9E8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AB9ECu, 1);  /* 0C0AB9EA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AB9EEu, 1);  /* 0C0AB9EC mov.l @(disp,pc),Rn */
	r0 = 0xC087330u; UPD(0x0C0AB9F0u, 1);  /* 0C0AB9EE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AB9F2u, 1);  /* 0C0AB9F0 mov.l Rm,@Rn */
	IF(0x0C0AB9F2u); { u32 t_ = r0; PR = 0x0C0AB9F6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C087330, 0x0C087330u, 0x0C0AB9F6u); }  /* 0C0AB9F2 jsr @Rn */
L_0C0AB9F6: BLKS(0x0C0AB9F6u);
	r15 = r14;  /* 0C0AB9F6 mov Rm,Rn */
	IF(0x0C0AB9F8u); PR = R32(r15); r15 += 4; UPD(0x0C0AB9FAu, 2);  /* 0C0AB9F8 lds.l @Rn+,pr */
	IF(0x0C0AB9FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB9FA rts */
}

void blk_f_0C0ABA20(sh3_t *c)
{
	LOCALS;
L_0C0ABA20: BLKS(0x0C0ABA20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA22u, 1);  /* 0C0ABA20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA24u, 1);  /* 0C0ABA22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA26u, 1);  /* 0C0ABA24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA28u, 1);  /* 0C0ABA26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA2Au, 1);  /* 0C0ABA28 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA2Cu, 1);  /* 0C0ABA2A mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ABA2Eu, 1);  /* 0C0ABA2C mov.l @(disp,pc),Rn */
	IF(0x0C0ABA2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABA30u, 1);  /* 0C0ABA2E sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0ABA32u, 1);  /* 0C0ABA30 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0ABA32 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0ABA36u, 2);  /* 0C0ABA34 mov.w @Rm+,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0ABA38u, 1);  /* 0C0ABA36 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C0ABA3Au, 1);  /* 0C0ABA38 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0ABA3Cu, 1);  /* 0C0ABA3A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABA3Eu, 1);  /* 0C0ABA3C mov.w @Rm,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0ABA40u, 1);  /* 0C0ABA3E mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0ABA40 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABA44u, 2);  /* 0C0ABA42 mov.l @(disp,pc),Rn */
	IF(0x0C0ABA44u); { u32 t_ = r8; PR = 0x0C0ABA48u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABA48u); }  /* 0C0ABA44 jsr @Rn */
L_0C0ABA48: BLKS(0x0C0ABA48u);
	T = (r0 & r0) == 0;  /* 0C0ABA48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABA60u, 4); goto L_0C0ABA60; } UPD(0x0C0ABA4Eu, 1); goto L_0C0ABA4E; }  /* 0C0ABA4A bf/s */
L_0C0ABA4E: BLKS(0x0C0ABA4Eu);
	r15 = r14;  /* 0C0ABA4E mov Rm,Rn */
	IF(0x0C0ABA50u); PR = R32(r15); r15 += 4; UPD(0x0C0ABA52u, 2);  /* 0C0ABA50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABA54u, 1);  /* 0C0ABA52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABA56u, 1);  /* 0C0ABA54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABA58u, 1);  /* 0C0ABA56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABA5Au, 1);  /* 0C0ABA58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABA5Cu, 1);  /* 0C0ABA5A mov.l @Rm+,Rn */
	IF(0x0C0ABA5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABA5C rts */
L_0C0ABA60: BLKS(0x0C0ABA60u);
	r8 = 0xC071740u; UPD(0x0C0ABA62u, 1);  /* 0C0ABA60 mov.l @(disp,pc),Rn */
	IF(0x0C0ABA62u); { u32 t_ = r8; PR = 0x0C0ABA66u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABA66u); }  /* 0C0ABA62 jsr @Rn */
L_0C0ABA66: BLKS(0x0C0ABA66u);
	T = (r0 & r0) == 0;  /* 0C0ABA66 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABA4Eu, 4); goto L_0C0ABA4E; } goto L_0C0ABA6C; }  /* 0C0ABA68 bt/s */
L_0C0ABA6C: BLKS(0x0C0ABA6Cu);
	r11 = 0xC28EDFCu; UPD(0x0C0ABA6Eu, 2);  /* 0C0ABA6C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0ABA6E mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABA72u, 2);  /* 0C0ABA70 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0ABA74u, 1);  /* 0C0ABA72 mov.w @(disp,pc),Rn */
	IF(0x0C0ABA74u); MACL = r10 * r8;  /* 0C0ABA74 mul.l Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C0ABA78u, 3);  /* 0C0ABA76 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0ABA7Au, 1);  /* 0C0ABA78 mov.w @Rm,Rn */
	IF(0x0C0ABA7Au); r8 = MACL;  /* 0C0ABA7A sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABA7Eu, 2);  /* 0C0ABA7C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0ABA7E extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ABA82u, 2);  /* 0C0ABA80 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0ABA82 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0ABA86u, 2);  /* 0C0ABA84 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABA88u, 1);  /* 0C0ABA86 mov.w @Rm,Rn */
	r12 = 0xC0A8A30u; UPD(0x0C0ABA8Au, 1);  /* 0C0ABA88 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0ABA8A extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0ABA8Eu, 2);  /* 0C0ABA8C mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0ABA90u, 1);  /* 0C0ABA8E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0ABA90 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0ABA94u, 2);  /* 0C0ABA92 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABA94u); { u32 t_ = r12; PR = 0x0C0ABA98u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABA98u); }  /* 0C0ABA94 jsr @Rn */
L_0C0ABA98: BLKS(0x0C0ABA98u);
	r3 = 0x4Cu;  /* 0C0ABA98 mov #imm,Rn */
	IF(0x0C0ABA9Au); MACL = r11 * r3;  /* 0C0ABA9A mul.l Rm,Rn */
	r2 = 0xC237C08u; UPD(0x0C0ABA9Eu, 4);  /* 0C0ABA9C mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABAA0u, 1);  /* 0C0ABA9E mov.l @(disp,pc),Rn */
	IF(0x0C0ABAA0u); r12 = MACL;  /* 0C0ABAA0 sts macl,Rn */
	r7 = 0xC3C43C6u; UPD(0x0C0ABAA4u, 2);  /* 0C0ABAA2 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0ABAA4 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABAA8u, 2);  /* 0C0ABAA6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABAA8 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0ABAACu, 2);  /* 0C0ABAAA mov.l @(disp,Rm),Rn */
	IF(0x0C0ABAACu); r9 <<= 16;  /* 0C0ABAAC shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ABAB0u, 2);  /* 0C0ABAAE mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0ABAB0 sub Rm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0ABAB4u, 2);  /* 0C0ABAB2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABAB4u); r6 <<= 16;  /* 0C0ABAB4 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0ABAB8u, 2);  /* 0C0ABAB6 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0ABAB8 add #imm,Rn */
	IF(0x0C0ABABAu); { u32 t_ = r5; PR = 0x0C0ABABEu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABABEu); }  /* 0C0ABABA jsr @Rn */
L_0C0ABABE: BLKS(0x0C0ABABEu);
	r0 = 0xB0u; UPD(0x0C0ABAC0u, 1);  /* 0C0ABABE mov.w @(disp,pc),Rn */
	IF(0x0C0ABAC0u); W8(r0 + r8, r11); UPD(0x0C0ABAC2u, 1);  /* 0C0ABAC0 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0ABAC4u, 1);  /* 0C0ABAC2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABAC4 add #imm,Rn */
	IF(0x0C0ABAC6u); W8(r0 + r8, r2); UPD(0x0C0ABAC8u, 2);  /* 0C0ABAC6 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ABAC8 add #imm,Rn */
	IF(0x0C0ABACAu); W8(r0 + r8, r2); UPD(0x0C0ABACCu, 2);  /* 0C0ABACA mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABA4Eu, 3); goto L_0C0ABA4E; }  /* 0C0ABACC bra */
}

void blk_f_0C0ABB10(sh3_t *c)
{
	LOCALS;
L_0C0ABB10: BLKS(0x0C0ABB10u);
	r2 = 0xB4u; UPD(0x0C0ABB12u, 1);  /* 0C0ABB10 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABB12 exts.w Rm,Rn */
	IF(0x0C0ABB14u); MACL = r4 * r2;  /* 0C0ABB14 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ABB18u, 4);  /* 0C0ABB16 mov.l @(disp,pc),Rn */
	IF(0x0C0ABB18u); r2 = MACL;  /* 0C0ABB18 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABB1Cu, 2);  /* 0C0ABB1A mov.l Rm,@-Rn */
	r2 += r0;  /* 0C0ABB1C add Rm,Rn */
	r2 += 0x3Cu;  /* 0C0ABB1E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABB22u, 3);  /* 0C0ABB20 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0ABB22 mov Rm,Rn */
	r1 = 0xC0A9CB0u; UPD(0x0C0ABB26u, 2);  /* 0C0ABB24 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0ABB26 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ABB36u, 4); goto L_0C0ABB36; } goto L_0C0ABB2C; }  /* 0C0ABB28 bt/s */
L_0C0ABB2C: BLKS(0x0C0ABB2Cu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0ABB2Eu, 2);  /* 0C0ABB2C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ABB2E add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C0ABB30 and #imm,r0 */
	r1 = 0xC0A8AE0u; UPD(0x0C0ABB34u, 3);  /* 0C0ABB32 mov.l @(disp,pc),Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C0ABB36u, 1);  /* 0C0ABB34 mov.l Rm,@(disp,Rn) */
L_0C0ABB36: BLKS(0x0C0ABB36u);
	r15 = r14;  /* 0C0ABB36 mov Rm,Rn */
	IF(0x0C0ABB38u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C0ABB38 jmp @Rn */
}

void blk_f_0C0ABB50(sh3_t *c)
{
	LOCALS;
L_0C0ABB50: BLKS(0x0C0ABB50u);
	r5 = 0xB4u; UPD(0x0C0ABB52u, 1);  /* 0C0ABB50 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABB52 exts.w Rm,Rn */
	IF(0x0C0ABB54u); MACL = r4 * r5;  /* 0C0ABB54 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0ABB58u, 4);  /* 0C0ABB56 mov.l @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C0ABB58 mov #imm,Rn */
	IF(0x0C0ABB5Au); r0 = MACL;  /* 0C0ABB5A sts macl,Rn */
	r3 = 0x9Cu; UPD(0x0C0ABB5Eu, 3);  /* 0C0ABB5C mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0ABB5E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABB62u, 2);  /* 0C0ABB60 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0ABB62 add Rm,Rn */
	W8(r3, r1); UPD(0x0C0ABB66u, 2);  /* 0C0ABB64 mov.b Rm,@Rn */
	r14 = r15;  /* 0C0ABB66 mov Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0ABB6Au, 2);  /* 0C0ABB68 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C0ABB6A add #imm,Rn */
	r0 = 0x3u;  /* 0C0ABB6C mov #imm,Rn */
	T = r2 > r0;  /* 0C0ABB6E cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABBC0u, 6); goto L_0C0ABBC0; } UPD(0x0C0ABB74u, 1); goto L_0C0ABB74; }  /* 0C0ABB70 bt/s */
L_0C0ABB74: BLKS(0x0C0ABB74u);
	r0 = 0xC0ABB7Cu;  /* 0C0ABB74 mova @(disp,pc),r0 */
	IF(0x0C0ABB76u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0ABB78u, 2);  /* 0C0ABB76 mov.b @(r0,Rm),Rn */
	IF(0x0C0ABB78u); { u32 tv_ = (r6 + 0x0C0ABB7Cu); u32 t_ = PHYS(tv_); IF(0x0C0ABB7Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0ABB80u: goto L_0C0ABB80; case 0x0C0ABB90u: goto L_0C0ABB90; case 0x0C0ABBA0u: goto L_0C0ABBA0; case 0x0C0ABBB0u: goto L_0C0ABBB0; default: JUMPD(tv_); } }  /* 0C0ABB78 braf Rn */
L_0C0ABB80: BLKS(0x0C0ABB80u);
	r5 = 0xC19D962u; UPD(0x0C0ABB82u, 1);  /* 0C0ABB80 mov.l @(disp,pc),Rn */
L_0C0ABB82: BLKS(0x0C0ABB82u);
	r7 = 0xC0A9D90u; UPD(0x0C0ABB84u, 1);  /* 0C0ABB82 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ABB84 mov Rm,Rn */
	IF(0x0C0ABB86u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C0ABB86 jmp @Rn */
L_0C0ABB90: BLKS(0x0C0ABB90u);
	r5 = 0xC19D9A8u; UPD(0x0C0ABB92u, 1);  /* 0C0ABB90 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABB94u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABB92 bra */
L_0C0ABBA0: BLKS(0x0C0ABBA0u);
	r5 = 0xC19D9EEu; UPD(0x0C0ABBA2u, 1);  /* 0C0ABBA0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABBA4u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABBA2 bra */
L_0C0ABBB0: BLKS(0x0C0ABBB0u);
	r5 = 0xC19DA34u; UPD(0x0C0ABBB2u, 1);  /* 0C0ABBB0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABBB4u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABBB2 bra */
L_0C0ABBC0: BLKS(0x0C0ABBC0u);
	r15 = r14;  /* 0C0ABBC0 mov Rm,Rn */
	IF(0x0C0ABBC2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ABBC2 rts */
}

void blk_f_0C0ABBF0(sh3_t *c)
{
	LOCALS;
L_0C0ABBF0: BLKS(0x0C0ABBF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF2u, 1);  /* 0C0ABBF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF4u, 1);  /* 0C0ABBF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF6u, 1);  /* 0C0ABBF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF8u, 1);  /* 0C0ABBF6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBFAu, 1);  /* 0C0ABBF8 mov.l Rm,@-Rn */
	r8 = 0xC2460ACu; UPD(0x0C0ABBFCu, 1);  /* 0C0ABBFA mov.l @(disp,pc),Rn */
	IF(0x0C0ABBFCu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABBFEu, 1);  /* 0C0ABBFC sts.l pr,@-Rn */
	r9 = 0xC069510u; UPD(0x0C0ABC00u, 1);  /* 0C0ABBFE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ABC00 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0ABC04u, 2);  /* 0C0ABC02 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABC06u, 1);  /* 0C0ABC04 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC06u); { u32 t_ = r9; PR = 0x0C0ABC0Au; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABC0Au); }  /* 0C0ABC06 jsr @Rn */
L_0C0ABC0A: BLKS(0x0C0ABC0Au);
	T = (r0 & r0) == 0;  /* 0C0ABC0A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABC20u, 4); goto L_0C0ABC20; } UPD(0x0C0ABC10u, 1); goto L_0C0ABC10; }  /* 0C0ABC0C bf/s */
L_0C0ABC10: BLKS(0x0C0ABC10u);
	r15 = r14;  /* 0C0ABC10 mov Rm,Rn */
	IF(0x0C0ABC12u); PR = R32(r15); r15 += 4; UPD(0x0C0ABC14u, 2);  /* 0C0ABC12 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABC16u, 1);  /* 0C0ABC14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABC18u, 1);  /* 0C0ABC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABC1Au, 1);  /* 0C0ABC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABC1Cu, 1);  /* 0C0ABC1A mov.l @Rm+,Rn */
	IF(0x0C0ABC1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABC1C rts */
L_0C0ABC20: BLKS(0x0C0ABC20u);
	r9 = 0xC071740u; UPD(0x0C0ABC22u, 1);  /* 0C0ABC20 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC22u); { u32 t_ = r9; PR = 0x0C0ABC26u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABC26u); }  /* 0C0ABC22 jsr @Rn */
L_0C0ABC26: BLKS(0x0C0ABC26u);
	T = (r0 & r0) == 0;  /* 0C0ABC26 tst Rm,Rn */
	if (!T) { UPD(0x0C0ABC40u, 4); goto L_0C0ABC40; }  /* 0C0ABC28 bf */
L_0C0ABC2A: BLKS(0x0C0ABC2Au);
	r0 = 0x1u;  /* 0C0ABC2A mov #imm,Rn */
	r3 = 0xC3C43CCu; UPD(0x0C0ABC2Eu, 2);  /* 0C0ABC2C mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0ABC30u, 1);  /* 0C0ABC2E mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C0ABC30 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0ABC10u, 4); goto L_0C0ABC10; }  /* 0C0ABC32 bra */
L_0C0ABC40: BLKS(0x0C0ABC40u);
	r11 = 0xC28EDFCu; UPD(0x0C0ABC42u, 1);  /* 0C0ABC40 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0ABC42 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABC46u, 2);  /* 0C0ABC44 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0ABC48u, 1);  /* 0C0ABC46 mov.w @(disp,pc),Rn */
	IF(0x0C0ABC48u); MACL = r10 * r9;  /* 0C0ABC48 mul.l Rm,Rn */
	r5 = 0xC2B1811u; UPD(0x0C0ABC4Cu, 3);  /* 0C0ABC4A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0ABC4Eu, 1);  /* 0C0ABC4C mov.w @Rm,Rn */
	IF(0x0C0ABC4Eu); r9 = MACL;  /* 0C0ABC4E sts macl,Rn */
	r4 = 0xC286578u; UPD(0x0C0ABC52u, 2);  /* 0C0ABC50 mov.l @(disp,pc),Rn */
	r2 = r6 & 0xFFFF;  /* 0C0ABC52 extu.w Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0ABC56u, 2);  /* 0C0ABC54 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C0ABC56 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C0ABC5Au, 2);  /* 0C0ABC58 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0ABC5A mov Rm,Rn */
	r7 = 0xC1000010u; UPD(0x0C0ABC5Eu, 2);  /* 0C0ABC5C mov.l @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C0ABC5E mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0ABC62u, 2);  /* 0C0ABC60 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C0ABC64u, 1);  /* 0C0ABC62 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r3); UPD(0x0C0ABC66u, 1);  /* 0C0ABC64 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABC66u); { u32 t_ = r0; PR = 0x0C0ABC6Au; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABC6Au); }  /* 0C0ABC66 jsr @Rn */
L_0C0ABC6A: BLKS(0x0C0ABC6Au);
	IF(0x0C0ABC6Au); MACL = r11 * r8;  /* 0C0ABC6A mul.l Rm,Rn */
	r5 = 0xC237C08u; UPD(0x0C0ABC6Eu, 3);  /* 0C0ABC6C mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABC70u, 1);  /* 0C0ABC6E mov.l @(disp,pc),Rn */
	IF(0x0C0ABC70u); r8 = MACL;  /* 0C0ABC70 sts macl,Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0ABC74u, 2);  /* 0C0ABC72 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0ABC74 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ABC78u, 2);  /* 0C0ABC76 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABC78 mov Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C0ABC7Cu, 2);  /* 0C0ABC7A mov.l @(disp,Rm),Rn */
	IF(0x0C0ABC7Cu); r6 <<= 16;  /* 0C0ABC7C shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABC80u, 2);  /* 0C0ABC7E mov.w @Rm,Rn */
	r6 -= r7;  /* 0C0ABC80 sub Rm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0ABC84u, 2);  /* 0C0ABC82 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC84u); r3 <<= 16;  /* 0C0ABC84 shll16 Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0ABC88u, 2);  /* 0C0ABC86 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C0ABC88 add #imm,Rn */
	IF(0x0C0ABC8Au); { u32 t_ = r0; PR = 0x0C0ABC8Eu; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABC8Eu); }  /* 0C0ABC8A jsr @Rn */
L_0C0ABC8E: BLKS(0x0C0ABC8Eu);
	r0 = 0xB0u; UPD(0x0C0ABC90u, 1);  /* 0C0ABC8E mov.w @(disp,pc),Rn */
	IF(0x0C0ABC90u); W8(r0 + r9, r11); UPD(0x0C0ABC92u, 1);  /* 0C0ABC90 mov.b Rm,@(r0,Rn) */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C0ABC94u, 1);  /* 0C0ABC92 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABC94 add #imm,Rn */
	r11 += 0x2u;  /* 0C0ABC96 add #imm,Rn */
	IF(0x0C0ABC98u); W8(r0 + r9, r11); UPD(0x0C0ABC9Au, 3);  /* 0C0ABC98 mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFBEu;  /* 0C0ABC9A add #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0ABC9C add #imm,Rn */
	IF(0x0C0ABC9Eu); W8(r0 + r9, r11); UPD(0x0C0ABCA0u, 3);  /* 0C0ABC9E mov.b Rm,@(r0,Rn) */
	r4 = 0xC3C43CCu; UPD(0x0C0ABCA2u, 1);  /* 0C0ABCA0 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0ABCA4u, 1);  /* 0C0ABCA2 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0ABCA6u, 1);  /* 0C0ABCA4 mov.w @Rm+,Rn */
	r6 = 0xC0A9D30u; UPD(0x0C0ABCA8u, 1);  /* 0C0ABCA6 mov.l @(disp,pc),Rn */
	IF(0x0C0ABCA8u); r0 <<= 2;  /* 0C0ABCA8 shll2 Rn */
	W32(r4, r5); UPD(0x0C0ABCACu, 2);  /* 0C0ABCAA mov.l Rm,@Rn */
	r7 = R32(r8 + 0x38u); UPD(0x0C0ABCAEu, 1);  /* 0C0ABCAC mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0ABCAE mov Rm,Rn */
	IF(0x0C0ABCB0u); { u32 t_ = r6; PR = 0x0C0ABCB4u; IF(0x0C0ABCB2u); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0ABCB4u); }  /* 0C0ABCB0 jsr @Rn */
L_0C0ABCB4: BLKS(0x0C0ABCB4u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABC10u, 3); goto L_0C0ABC10; }  /* 0C0ABCB4 bra */
}

void blk_f_0C0ABD00(sh3_t *c)
{
	LOCALS;
L_0C0ABD00: BLKS(0x0C0ABD00u);
	r6 = 0xB4u; UPD(0x0C0ABD02u, 1);  /* 0C0ABD00 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0ABD02 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD06u, 2);  /* 0C0ABD04 mov.l Rm,@-Rn */
	IF(0x0C0ABD06u); MACL = r1 * r6;  /* 0C0ABD06 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD0Au, 3);  /* 0C0ABD08 mov.l Rm,@-Rn */
	r5 = 0xC286578u; UPD(0x0C0ABD0Cu, 1);  /* 0C0ABD0A mov.l @(disp,pc),Rn */
	IF(0x0C0ABD0Cu); r8 = MACL;  /* 0C0ABD0C sts macl,Rn */
	IF(0x0C0ABD0Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABD10u, 2);  /* 0C0ABD0E sts.l pr,@-Rn */
	r8 += r5;  /* 0C0ABD10 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0ABD14u, 2);  /* 0C0ABD12 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0ABD14 mov Rm,Rn */
	IF(0x0C0ABD16u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0ABD18u, 2);  /* 0C0ABD16 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ABD18 add #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0ABD1A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0ABD1Eu, 3);  /* 0C0ABD1C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0ABD1E add #imm,Rn */
	IF(0x0C0ABD20u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0ABD22u, 2);  /* 0C0ABD20 mov.b @(r0,Rm),Rn */
	r5 = 0xFu;  /* 0C0ABD22 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0ABD24 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0ABD28u, 3);  /* 0C0ABD26 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0ABD2Au, 1);  /* 0C0ABD28 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0ABD2Cu, 1);  /* 0C0ABD2A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0ABD2Eu, 1);  /* 0C0ABD2C mov.l @(disp,Rm),Rn */
	IF(0x0C0ABD2Eu); { u32 t_ = r0; PR = 0x0C0ABD32u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0ABD32u); }  /* 0C0ABD2E jsr @Rn */
L_0C0ABD32: BLKS(0x0C0ABD32u);
	r0 = 0x0u;  /* 0C0ABD32 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0ABD36u, 2);  /* 0C0ABD34 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0ABD36 mov Rm,Rn */
	IF(0x0C0ABD38u); PR = R32(r15); r15 += 4; UPD(0x0C0ABD3Au, 2);  /* 0C0ABD38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABD3Cu, 1);  /* 0C0ABD3A mov.l @Rm+,Rn */
	IF(0x0C0ABD3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABD3C rts */
}

void blk_f_0C0ABD50(sh3_t *c)
{
	LOCALS;
L_0C0ABD50: BLKS(0x0C0ABD50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD52u, 1);  /* 0C0ABD50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD54u, 1);  /* 0C0ABD52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD56u, 1);  /* 0C0ABD54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD58u, 1);  /* 0C0ABD56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD5Au, 1);  /* 0C0ABD58 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD5Cu, 1);  /* 0C0ABD5A mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ABD5Eu, 1);  /* 0C0ABD5C mov.l @(disp,pc),Rn */
	IF(0x0C0ABD5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABD60u, 1);  /* 0C0ABD5E sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0ABD62u, 1);  /* 0C0ABD60 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0ABD62 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0ABD66u, 2);  /* 0C0ABD64 mov.w @Rm+,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0ABD68u, 1);  /* 0C0ABD66 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C0ABD6Au, 1);  /* 0C0ABD68 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0ABD6Cu, 1);  /* 0C0ABD6A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABD6Eu, 1);  /* 0C0ABD6C mov.w @Rm,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0ABD70u, 1);  /* 0C0ABD6E mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0ABD70 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABD74u, 2);  /* 0C0ABD72 mov.l @(disp,pc),Rn */
	IF(0x0C0ABD74u); { u32 t_ = r8; PR = 0x0C0ABD78u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABD78u); }  /* 0C0ABD74 jsr @Rn */
L_0C0ABD78: BLKS(0x0C0ABD78u);
	T = (r0 & r0) == 0;  /* 0C0ABD78 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABD90u, 4); goto L_0C0ABD90; } UPD(0x0C0ABD7Eu, 1); goto L_0C0ABD7E; }  /* 0C0ABD7A bf/s */
L_0C0ABD7E: BLKS(0x0C0ABD7Eu);
	r15 = r14;  /* 0C0ABD7E mov Rm,Rn */
	IF(0x0C0ABD80u); PR = R32(r15); r15 += 4; UPD(0x0C0ABD82u, 2);  /* 0C0ABD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABD84u, 1);  /* 0C0ABD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABD86u, 1);  /* 0C0ABD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABD88u, 1);  /* 0C0ABD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABD8Au, 1);  /* 0C0ABD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABD8Cu, 1);  /* 0C0ABD8A mov.l @Rm+,Rn */
	IF(0x0C0ABD8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABD8C rts */
L_0C0ABD90: BLKS(0x0C0ABD90u);
	r8 = 0xC071740u; UPD(0x0C0ABD92u, 1);  /* 0C0ABD90 mov.l @(disp,pc),Rn */
	IF(0x0C0ABD92u); { u32 t_ = r8; PR = 0x0C0ABD96u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABD96u); }  /* 0C0ABD92 jsr @Rn */
L_0C0ABD96: BLKS(0x0C0ABD96u);
	T = (r0 & r0) == 0;  /* 0C0ABD96 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABD7Eu, 4); goto L_0C0ABD7E; } goto L_0C0ABD9C; }  /* 0C0ABD98 bt/s */
L_0C0ABD9C: BLKS(0x0C0ABD9Cu);
	r11 = 0xC28EDFCu; UPD(0x0C0ABD9Eu, 2);  /* 0C0ABD9C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0ABD9E mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABDA2u, 2);  /* 0C0ABDA0 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0ABDA4u, 1);  /* 0C0ABDA2 mov.w @(disp,pc),Rn */
	IF(0x0C0ABDA4u); MACL = r10 * r8;  /* 0C0ABDA4 mul.l Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C0ABDA8u, 3);  /* 0C0ABDA6 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0ABDAAu, 1);  /* 0C0ABDA8 mov.w @Rm,Rn */
	IF(0x0C0ABDAAu); r8 = MACL;  /* 0C0ABDAA sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABDAEu, 2);  /* 0C0ABDAC mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0ABDAE extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ABDB2u, 2);  /* 0C0ABDB0 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0ABDB2 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0ABDB6u, 2);  /* 0C0ABDB4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABDB8u, 1);  /* 0C0ABDB6 mov.w @Rm,Rn */
	r12 = 0xC0A8A30u; UPD(0x0C0ABDBAu, 1);  /* 0C0ABDB8 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0ABDBA extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0ABDBEu, 2);  /* 0C0ABDBC mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0ABDC0u, 1);  /* 0C0ABDBE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0ABDC0 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0ABDC4u, 2);  /* 0C0ABDC2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABDC4u); { u32 t_ = r12; PR = 0x0C0ABDC8u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABDC8u); }  /* 0C0ABDC4 jsr @Rn */
L_0C0ABDC8: BLKS(0x0C0ABDC8u);
	r3 = 0x4Cu;  /* 0C0ABDC8 mov #imm,Rn */
	IF(0x0C0ABDCAu); MACL = r11 * r3;  /* 0C0ABDCA mul.l Rm,Rn */
	r2 = 0xC237C08u; UPD(0x0C0ABDCEu, 4);  /* 0C0ABDCC mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABDD0u, 1);  /* 0C0ABDCE mov.l @(disp,pc),Rn */
	IF(0x0C0ABDD0u); r12 = MACL;  /* 0C0ABDD0 sts macl,Rn */
	r7 = 0xC3C43C6u; UPD(0x0C0ABDD4u, 2);  /* 0C0ABDD2 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0ABDD4 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABDD8u, 2);  /* 0C0ABDD6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABDD8 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0ABDDCu, 2);  /* 0C0ABDDA mov.l @(disp,Rm),Rn */
	IF(0x0C0ABDDCu); r9 <<= 16;  /* 0C0ABDDC shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ABDE0u, 2);  /* 0C0ABDDE mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0ABDE0 sub Rm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0ABDE4u, 2);  /* 0C0ABDE2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABDE4u); r6 <<= 16;  /* 0C0ABDE4 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0ABDE8u, 2);  /* 0C0ABDE6 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0ABDE8 add #imm,Rn */
	IF(0x0C0ABDEAu); { u32 t_ = r5; PR = 0x0C0ABDEEu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABDEEu); }  /* 0C0ABDEA jsr @Rn */
L_0C0ABDEE: BLKS(0x0C0ABDEEu);
	r0 = 0xB0u; UPD(0x0C0ABDF0u, 1);  /* 0C0ABDEE mov.w @(disp,pc),Rn */
	IF(0x0C0ABDF0u); W8(r0 + r8, r11); UPD(0x0C0ABDF2u, 1);  /* 0C0ABDF0 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0ABDF4u, 1);  /* 0C0ABDF2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABDF4 add #imm,Rn */
	r2 += 0x2u;  /* 0C0ABDF6 add #imm,Rn */
	IF(0x0C0ABDF8u); W8(r0 + r8, r2); UPD(0x0C0ABDFAu, 3);  /* 0C0ABDF8 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ABDFA add #imm,Rn */
	IF(0x0C0ABDFCu); W8(r0 + r8, r2); UPD(0x0C0ABDFEu, 2);  /* 0C0ABDFC mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABD7Eu, 3); goto L_0C0ABD7E; }  /* 0C0ABDFE bra */
}

void blk_f_0C0ABE50(sh3_t *c)
{
	LOCALS;
L_0C0ABE50: BLKS(0x0C0ABE50u);
	r0 = 0xB4u; UPD(0x0C0ABE52u, 1);  /* 0C0ABE50 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABE52 exts.w Rm,Rn */
	IF(0x0C0ABE54u); MACL = r4 * r0;  /* 0C0ABE54 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE58u, 4);  /* 0C0ABE56 mov.l Rm,@-Rn */
	r0 = 0xC2865B4u; UPD(0x0C0ABE5Au, 1);  /* 0C0ABE58 mov.l @(disp,pc),Rn */
	IF(0x0C0ABE5Au); r3 = MACL;  /* 0C0ABE5A sts macl,Rn */
	IF(0x0C0ABE5Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABE5Eu, 2);  /* 0C0ABE5C sts.l pr,@-Rn */
	IF(0x0C0ABE5Eu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0ABE60u, 1);  /* 0C0ABE5E mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0ABE60 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABE70u, 4); goto L_0C0ABE70; } UPD(0x0C0ABE66u, 1); goto L_0C0ABE66; }  /* 0C0ABE62 bt/s */
L_0C0ABE66: BLKS(0x0C0ABE66u);
	r15 = r14;  /* 0C0ABE66 mov Rm,Rn */
	IF(0x0C0ABE68u); PR = R32(r15); r15 += 4; UPD(0x0C0ABE6Au, 2);  /* 0C0ABE68 lds.l @Rn+,pr */
	IF(0x0C0ABE6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABE6A rts */
L_0C0ABE70: BLKS(0x0C0ABE70u);
	r0 = 0xC0A9CB0u; UPD(0x0C0ABE72u, 1);  /* 0C0ABE70 mov.l @(disp,pc),Rn */
	IF(0x0C0ABE72u); { u32 t_ = r0; PR = 0x0C0ABE76u; IF(0x0C0ABE74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0ABE76u); }  /* 0C0ABE72 jsr @Rn */
L_0C0ABE76: BLKS(0x0C0ABE76u);
	{ IF(0x0C0ABE78u); ; /* slot nop */ UPD(0x0C0ABE66u, 3); goto L_0C0ABE66; }  /* 0C0ABE76 bra */
}


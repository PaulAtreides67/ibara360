#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0AFC10(sh3_t *c)
{
	LOCALS;
L_0C0AFC10: BLKS(0x0C0AFC10u);
	r0 = 0xB4u; UPD(0x0C0AFC12u, 1);  /* 0C0AFC10 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AFC12 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC16u, 2);  /* 0C0AFC14 mov.l Rm,@-Rn */
	IF(0x0C0AFC16u); MACL = r4 * r0;  /* 0C0AFC16 mul.l Rm,Rn */
	r6 = 0xC2B1A3Cu; UPD(0x0C0AFC1Au, 3);  /* 0C0AFC18 mov.l @(disp,pc),Rn */
	r3 = 0x2Du;  /* 0C0AFC1A mov #imm,Rn */
	r7 = R32(r6); UPD(0x0C0AFC1Eu, 2);  /* 0C0AFC1C mov.l @Rm,Rn */
	IF(0x0C0AFC1Eu); r0 = MACL;  /* 0C0AFC1E sts macl,Rn */
	r5 = 0xC286578u; UPD(0x0C0AFC22u, 2);  /* 0C0AFC20 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC22u); MACL = r4 * r3;  /* 0C0AFC22 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r2 = v_; } UPD(0x0C0AFC26u, 3);  /* 0C0AFC24 mov.w @Rm+,Rn */
	r0 += r5;  /* 0C0AFC26 add Rm,Rn */
	r0 += 0x56u;  /* 0C0AFC28 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AFC2Cu, 3);  /* 0C0AFC2A mov.w Rm,@Rn */
	IF(0x0C0AFC2Cu); r3 = MACL;  /* 0C0AFC2C sts macl,Rn */
	W32(r6, r7); UPD(0x0C0AFC30u, 2);  /* 0C0AFC2E mov.l Rm,@Rn */
	r0 += 0x2u;  /* 0C0AFC30 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AFC34u, 2);  /* 0C0AFC32 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0AFC34 mov Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C0AFC36 extu.b Rm,Rn */
	r3 += r6;  /* 0C0AFC38 add Rm,Rn */
	IF(0x0C0AFC3Au); r3 <<= 2;  /* 0C0AFC3A shll2 Rn */
	r3 += r5;  /* 0C0AFC3C add Rm,Rn */
	r2 += 0x1u;  /* 0C0AFC3E add #imm,Rn */
	r3 += 0x5Cu;  /* 0C0AFC40 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0AFC44u, 8);  /* 0C0AFC42 mov.b Rm,@Rn */
	W32(r3, r7); UPD(0x0C0AFC46u, 1);  /* 0C0AFC44 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AFC46 mov #imm,Rn */
	r15 = r14;  /* 0C0AFC48 mov Rm,Rn */
	IF(0x0C0AFC4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AFC4A rts */
}

void blk_f_0C0AFC60(sh3_t *c)
{
	LOCALS;
L_0C0AFC60: BLKS(0x0C0AFC60u);
	r0 = 0xB4u; UPD(0x0C0AFC62u, 1);  /* 0C0AFC60 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AFC62 exts.w Rm,Rn */
	IF(0x0C0AFC64u); MACL = r4 * r0;  /* 0C0AFC64 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AFC68u, 4);  /* 0C0AFC66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC68u); r3 = MACL;  /* 0C0AFC68 sts macl,Rn */
	r3 += r7;  /* 0C0AFC6A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC6Eu, 3);  /* 0C0AFC6C mov.l Rm,@-Rn */
	r2 = r3;  /* 0C0AFC6E mov Rm,Rn */
	r2 += 0x56u;  /* 0C0AFC70 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AFC74u, 3);  /* 0C0AFC72 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AFC74 mov Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AFC76 add #imm,Rn */
	r0 = r5 & 0xFFFF;  /* 0C0AFC78 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFC7A tst Rm,Rn */
	{ u32 c_ = !T; W16(r2, r5); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0AFC90u, 7); goto L_0C0AFC90; } UPD(0x0C0AFC80u, 1); goto L_0C0AFC80; }  /* 0C0AFC7C bf/s */
L_0C0AFC80: BLKS(0x0C0AFC80u);
	r2 += 0x2u;  /* 0C0AFC80 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFC84u, 2);  /* 0C0AFC82 mov.b @Rm,Rn */
	r0 = 0x1u;  /* 0C0AFC84 mov #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0AFC86 add #imm,Rn */
	W8(r2, r3); UPD(0x0C0AFC8Au, 3);  /* 0C0AFC88 mov.b Rm,@Rn */
L_0C0AFC8A: BLKS(0x0C0AFC8Au);
	r15 = r14;  /* 0C0AFC8A mov Rm,Rn */
	IF(0x0C0AFC8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC8C rts */
L_0C0AFC90: BLKS(0x0C0AFC90u);
	r5 = 0x2Du;  /* 0C0AFC90 mov #imm,Rn */
	r3 += 0x58u;  /* 0C0AFC92 add #imm,Rn */
	IF(0x0C0AFC94u); MACL = r4 * r5;  /* 0C0AFC94 mul.l Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC98u, 5);  /* 0C0AFC96 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C0AFC98 mov #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C0AFC9A extu.b Rm,Rn */
	IF(0x0C0AFC9Cu); r4 = MACL;  /* 0C0AFC9C sts macl,Rn */
	r4 += r6;  /* 0C0AFC9E add Rm,Rn */
	IF(0x0C0AFCA0u); r4 <<= 2;  /* 0C0AFCA0 shll2 Rn */
	r4 += r7;  /* 0C0AFCA2 add Rm,Rn */
	r4 += 0x58u;  /* 0C0AFCA4 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0AFCA8u, 8);  /* 0C0AFCA6 mov.l @Rm,Rn */
	r3 += 0xFFFFFFF4u;  /* 0C0AFCA8 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0AFC8Au, 4); goto L_0C0AFC8A; }  /* 0C0AFCAA bra */
}

/* FUN_0c0afcc0 */
void blk_f_0C0AFCC0(sh3_t *c)
{
	LOCALS;
L_0C0AFCC0: BLKS(0x0C0AFCC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC2u, 1);  /* 0C0AFCC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC4u, 1);  /* 0C0AFCC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC6u, 1);  /* 0C0AFCC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC8u, 1);  /* 0C0AFCC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCAu, 1);  /* 0C0AFCC8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCCu, 1);  /* 0C0AFCCA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCEu, 1);  /* 0C0AFCCC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C0AFCD0u, 1);  /* 0C0AFCCE mov.l @(disp,pc),Rn */
	IF(0x0C0AFCD0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFCD2u, 1);  /* 0C0AFCD0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AFCD4u, 1);  /* 0C0AFCD2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AFCD4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AFCD8u, 2);  /* 0C0AFCD6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AFCD8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AFCDCu, 2);  /* 0C0AFCDA mov.l @(disp,pc),Rn */
	IF(0x0C0AFCDCu); { u32 t_ = r8; PR = 0x0C0AFCE0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AFCE0u); }  /* 0C0AFCDC jsr @Rn */
L_0C0AFCE0: BLKS(0x0C0AFCE0u);
	T = (r0 & r0) == 0;  /* 0C0AFCE0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD00u, 4); goto L_0C0AFD00; } UPD(0x0C0AFCE6u, 1); goto L_0C0AFCE6; }  /* 0C0AFCE2 bf/s */
L_0C0AFCE6: BLKS(0x0C0AFCE6u);
	r14 += 0xCu;  /* 0C0AFCE6 add #imm,Rn */
	r15 = r14;  /* 0C0AFCE8 mov Rm,Rn */
	IF(0x0C0AFCEAu); PR = R32(r15); r15 += 4; UPD(0x0C0AFCECu, 3);  /* 0C0AFCEA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFCEEu, 1);  /* 0C0AFCEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFCF0u, 1);  /* 0C0AFCEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFCF2u, 1);  /* 0C0AFCF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFCF4u, 1);  /* 0C0AFCF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFCF6u, 1);  /* 0C0AFCF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFCF8u, 1);  /* 0C0AFCF6 mov.l @Rm+,Rn */
	IF(0x0C0AFCF8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFCF8 rts */
L_0C0AFD00: BLKS(0x0C0AFD00u);
	r8 = 0xC071740u; UPD(0x0C0AFD02u, 1);  /* 0C0AFD00 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD02u); { u32 t_ = r8; PR = 0x0C0AFD06u; r4 = 0x44u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AFD06u); }  /* 0C0AFD02 jsr @Rn */
L_0C0AFD06: BLKS(0x0C0AFD06u);
	T = (r0 & r0) == 0;  /* 0C0AFD06 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFCE6u, 4); goto L_0C0AFCE6; } goto L_0C0AFD0C; }  /* 0C0AFD08 bt/s */
L_0C0AFD0C: BLKS(0x0C0AFD0Cu);
	r5 = 0xC28EDFCu; UPD(0x0C0AFD0Eu, 2);  /* 0C0AFD0C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0AFD10u, 1);  /* 0C0AFD0E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r10 = v_; } UPD(0x0C0AFD12u, 1);  /* 0C0AFD10 mov.w @Rm+,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AFD14u, 1);  /* 0C0AFD12 mov.w @Rm,Rn */
	IF(0x0C0AFD14u); MACL = r10 * r8;  /* 0C0AFD14 mul.l Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0AFD18u, 3);  /* 0C0AFD16 mov.l Rm,@(disp,Rn) */
	r9 = r0 & 0xFFFF;  /* 0C0AFD18 extu.w Rm,Rn */
	r6 = 0xC2B1811u; UPD(0x0C0AFD1Cu, 2);  /* 0C0AFD1A mov.l @(disp,pc),Rn */
	IF(0x0C0AFD1Cu); r8 = MACL;  /* 0C0AFD1C sts macl,Rn */
	r13 = 0xC2B03A2u; UPD(0x0C0AFD20u, 2);  /* 0C0AFD1E mov.l @(disp,pc),Rn */
	r4 = 0xC286578u; UPD(0x0C0AFD22u, 1);  /* 0C0AFD20 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AFD24u, 1);  /* 0C0AFD22 mov.b @Rm,Rn */
	r8 += r4;  /* 0C0AFD24 add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AFD28u, 2);  /* 0C0AFD26 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0AFD28 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AFD2Cu, 2);  /* 0C0AFD2A mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C0AFD2C mov #imm,Rn */
	IF(0x0C0AFD2Eu); W16(r0 + r8, r12); UPD(0x0C0AFD30u, 2);  /* 0C0AFD2E mov.w Rm,@(r0,Rn) */
	r13 += r14;  /* 0C0AFD30 add Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AFD32 add #imm,Rn */
	IF(0x0C0AFD34u); W16(r0 + r8, r12); UPD(0x0C0AFD36u, 3);  /* 0C0AFD34 mov.w Rm,@(r0,Rn) */
	r11 = 0xC0A8A30u; UPD(0x0C0AFD38u, 1);  /* 0C0AFD36 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AFD38 mov #imm,Rn */
	r2 = 0xC0008014u; UPD(0x0C0AFD3Cu, 2);  /* 0C0AFD3A mov.l @(disp,pc),Rn */
	W32(r14, r3); UPD(0x0C0AFD3Eu, 1);  /* 0C0AFD3C mov.l Rm,@Rn */
	W32(r8, r2); UPD(0x0C0AFD40u, 1);  /* 0C0AFD3E mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0AFD42u, 1);  /* 0C0AFD40 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r12); UPD(0x0C0AFD44u, 1);  /* 0C0AFD42 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFD44u); { u32 t_ = r11; PR = 0x0C0AFD48u; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AFD48u); }  /* 0C0AFD44 jsr @Rn */
L_0C0AFD48: BLKS(0x0C0AFD48u);
	r1 = R32(r14); UPD(0x0C0AFD4Au, 1);  /* 0C0AFD48 mov.l @Rm,Rn */
	r5 = 0x4Cu;  /* 0C0AFD4A mov #imm,Rn */
	IF(0x0C0AFD4Cu); MACL = r1 * r5;  /* 0C0AFD4C mul.l Rm,Rn */
	r7 = 0xC237C08u; UPD(0x0C0AFD50u, 4);  /* 0C0AFD4E mov.l @(disp,pc),Rn */
	r6 = 0xC286318u; UPD(0x0C0AFD52u, 1);  /* 0C0AFD50 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD52u); r11 = MACL;  /* 0C0AFD52 sts macl,Rn */
	r11 += r6;  /* 0C0AFD54 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AFD58u, 3);  /* 0C0AFD56 mov.w @Rm,Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C0AFD5Au, 1);  /* 0C0AFD58 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFD5Au); r4 <<= 16;  /* 0C0AFD5A shll16 Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0AFD5Eu, 2);  /* 0C0AFD5C mov.l @(disp,pc),Rn */
	r4 -= r3;  /* 0C0AFD5E sub Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AFD62u, 2);  /* 0C0AFD60 mov.w @Rm,Rn */
	r11 += 0x42u;  /* 0C0AFD62 add #imm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C0AFD66u, 2);  /* 0C0AFD64 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD66u); r0 <<= 16;  /* 0C0AFD66 shll16 Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0AFD6Au, 2);  /* 0C0AFD68 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C0AFD6Cu, 1);  /* 0C0AFD6A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFD6Cu); { u32 t_ = r9; PR = 0x0C0AFD70u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AFD70u); }  /* 0C0AFD6C jsr @Rn */
L_0C0AFD70: BLKS(0x0C0AFD70u);
	r9 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AFD72u, 1);  /* 0C0AFD70 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0AFD72 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFD76u, 2);  /* 0C0AFD74 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C0AFD76 mov Rm,Rn */
	IF(0x0C0AFD78u); W8(r0 + r8, r9); UPD(0x0C0AFD7Au, 2);  /* 0C0AFD78 mov.b Rm,@(r0,Rn) */
	r9 = 0xACu; UPD(0x0C0AFD7Cu, 1);  /* 0C0AFD7A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AFD7C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AFD80u, 2);  /* 0C0AFD7E mov.b @Rm,Rn */
	r9 += r8;  /* 0C0AFD80 add Rm,Rn */
	r7 = r5;  /* 0C0AFD82 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0AFD84 add #imm,Rn */
	r9 += 0x1u;  /* 0C0AFD86 add #imm,Rn */
	r10 = 0xC0A9D30u; UPD(0x0C0AFD8Au, 5);  /* 0C0AFD88 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD8Au); W8(r0 + r8, r7); UPD(0x0C0AFD8Cu, 1);  /* 0C0AFD8A mov.b Rm,@(r0,Rn) */
	W8(r9, r5); UPD(0x0C0AFD8Eu, 1);  /* 0C0AFD8C mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C0AFD90u, 1);  /* 0C0AFD8E mov.l @(disp,pc),Rn */
	IF(0x0C0AFD90u); { u32 t_ = r10; PR = 0x0C0AFD94u; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AFD94u); }  /* 0C0AFD90 jsr @Rn */
L_0C0AFD94: BLKS(0x0C0AFD94u);
	r2 = 0xA0u; UPD(0x0C0AFD96u, 1);  /* 0C0AFD94 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C0AFD96 add Rm,Rn */
	r2 += 0x2u;  /* 0C0AFD98 add #imm,Rn */
	W8(r2, r12); UPD(0x0C0AFD9Cu, 3);  /* 0C0AFD9A mov.b Rm,@Rn */
	r1 = 0x8Cu; UPD(0x0C0AFD9Eu, 1);  /* 0C0AFD9C mov.w @(disp,pc),Rn */
	r4 = 0x94u; UPD(0x0C0AFDA0u, 1);  /* 0C0AFD9E mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0AFDA0 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C0AFDA4u, 2);  /* 0C0AFDA2 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0AFDA4 add Rm,Rn */
	{ u32 v_ = r12; r2 -= 1; W8(r2, v_); } UPD(0x0C0AFDA8u, 2);  /* 0C0AFDA6 mov.b Rm,@-Rn */
	r3 = 0x505050u; UPD(0x0C0AFDAAu, 1);  /* 0C0AFDA8 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDAAu); W32(r0 + r8, r12); UPD(0x0C0AFDACu, 1);  /* 0C0AFDAA mov.l Rm,@(r0,Rn) */
	W32(r4, r12); UPD(0x0C0AFDAEu, 1);  /* 0C0AFDAC mov.l Rm,@Rn */
	W32(r1, r12); UPD(0x0C0AFDB0u, 1);  /* 0C0AFDAE mov.l Rm,@Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C0AFDB2u, 1);  /* 0C0AFDB0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0AFDB4u, 1);  /* 0C0AFDB2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r3); UPD(0x0C0AFDB6u, 1);  /* 0C0AFDB4 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0AFDB6 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C0AFDBAu, 2);  /* 0C0AFDB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFDBAu); ;  /* 0C0AFDBA nop */
	UPD(0x0C0AFDBCu, 1);
L_0C0AFDBC: BLKS(0x0C0AFDBCu);
	r6 = R32(r14 + 0x8u); UPD(0x0C0AFDBEu, 1);  /* 0C0AFDBC mov.l @(disp,Rm),Rn */
	r8 = 0x1Cu;  /* 0C0AFDBE mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r10 = v_; } UPD(0x0C0AFDC2u, 2);  /* 0C0AFDC0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AFDC4u, 1);  /* 0C0AFDC2 mov.w @(disp,pc),Rn */
	IF(0x0C0AFDC4u); MACL = r10 * r9;  /* 0C0AFDC4 mul.l Rm,Rn */
	r0 = 0xC1E428Cu; UPD(0x0C0AFDC8u, 3);  /* 0C0AFDC6 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDC8u); r9 = MACL;  /* 0C0AFDC8 sts macl,Rn */
	IF(0x0C0AFDCAu); MACL = r12 * r8;  /* 0C0AFDCA mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFDCEu, 4);  /* 0C0AFDCC mov.l @(disp,pc),Rn */
	IF(0x0C0AFDCEu); r8 = MACL;  /* 0C0AFDCE sts macl,Rn */
	r8 += r0;  /* 0C0AFDD0 add Rm,Rn */
	r8 += 0x4u;  /* 0C0AFDD2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r2 = v_; } UPD(0x0C0AFDD6u, 4);  /* 0C0AFDD4 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C0AFDD6 add Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0AFDDAu, 2);  /* 0C0AFDD8 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0AFDDA add Rm,Rn */
	IF(0x0C0AFDDCu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AFDDEu, 2);  /* 0C0AFDDC mov.w @(r0,Rm),Rn */
	r11 = r9;  /* 0C0AFDDE mov Rm,Rn */
	r11 += 0x7Cu;  /* 0C0AFDE0 add #imm,Rn */
	W16(r11, r7); UPD(0x0C0AFDE4u, 3);  /* 0C0AFDE2 mov.w Rm,@Rn */
	r9 += 0x7Eu;  /* 0C0AFDE4 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AFDE8u, 2);  /* 0C0AFDE6 mov.w @Rm,Rn */
	r4 += r4;  /* 0C0AFDE8 add Rm,Rn */
	IF(0x0C0AFDEAu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0AFDECu, 2);  /* 0C0AFDEA mov.w @(r0,Rm),Rn */
	r8 += 0xFFFFFFFAu;  /* 0C0AFDEC add #imm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C0AFDF0u, 2);  /* 0C0AFDEE mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0AFDF0 mov #imm,Rn */
	W16(r9, r3); UPD(0x0C0AFDF4u, 2);  /* 0C0AFDF2 mov.w Rm,@Rn */
	r6 = 0xC2460ACu; UPD(0x0C0AFDF6u, 1);  /* 0C0AFDF4 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C0AFDF6 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AFDFAu, 2);  /* 0C0AFDF8 mov.w @Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AFDFA extu.w Rm,Rn */
	W32(r9 + 0x4u, r0); UPD(0x0C0AFDFEu, 2);  /* 0C0AFDFC mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C0AFE00u, 1);  /* 0C0AFDFE mov.l @Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C0AFE02u, 1);  /* 0C0AFE00 mov.l @(disp,pc),Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AFE04u, 1);  /* 0C0AFE02 mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C0AFE04 or Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C0AFE08u, 2);  /* 0C0AFE06 mov.l @(disp,Rm),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0AFE0Au, 1);  /* 0C0AFE08 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0AFE0Cu, 1);  /* 0C0AFE0A mov.l Rm,@Rn */
	r4 = r10;  /* 0C0AFE0C mov Rm,Rn */
	IF(0x0C0AFE0Eu); { u32 t_ = r0; PR = 0x0C0AFE12u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AFE12u); }  /* 0C0AFE0E jsr @Rn */
L_0C0AFE12: BLKS(0x0C0AFE12u);
	r5 = 0x86u; UPD(0x0C0AFE14u, 1);  /* 0C0AFE12 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0AFE14 mov Rm,Rn */
	r3 = 0x4000u; UPD(0x0C0AFE18u, 2);  /* 0C0AFE16 mov.w @(disp,pc),Rn */
	IF(0x0C0AFE18u); W16(r0 + r5, r3); UPD(0x0C0AFE1Au, 1);  /* 0C0AFE18 mov.w Rm,@(r0,Rn) */
	r0 = R32(r8 + 0xCu); UPD(0x0C0AFE1Cu, 1);  /* 0C0AFE1A mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x10u); UPD(0x0C0AFE1Eu, 1);  /* 0C0AFE1C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C0AFE20u, 1);  /* 0C0AFE1E mov.l Rm,@(disp,Rn) */
	r8 += 0x14u;  /* 0C0AFE20 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C0AFE24u, 2);  /* 0C0AFE22 mov.w @Rm+,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C0AFE26u, 1);  /* 0C0AFE24 mov.l @(disp,Rm),Rn */
	r2 = R32(r13 + 0x28u); UPD(0x0C0AFE28u, 1);  /* 0C0AFE26 mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C0AFE2Au, 1);  /* 0C0AFE28 mov.w @(disp,pc),Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0AFE2Cu, 1);  /* 0C0AFE2A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r2); UPD(0x0C0AFE2Eu, 1);  /* 0C0AFE2C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x30u, r7); UPD(0x0C0AFE30u, 1);  /* 0C0AFE2E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFE30u); W16(r0 + r9, r4); UPD(0x0C0AFE32u, 1);  /* 0C0AFE30 mov.w Rm,@(r0,Rn) */
	r5 = 0xA0u; UPD(0x0C0AFE34u, 1);  /* 0C0AFE32 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0AFE34 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C0AFE38u, 2);  /* 0C0AFE36 mov.b @Rm+,Rn */
	r5 += r9;  /* 0C0AFE38 add Rm,Rn */
	r5 += 0x1u;  /* 0C0AFE3A add #imm,Rn */
	W8(r5, r3); UPD(0x0C0AFE3Eu, 3);  /* 0C0AFE3C mov.b Rm,@Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C0AFE40u, 1);  /* 0C0AFE3E mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AFE40 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C0AFE44u, 2);  /* 0C0AFE42 mov.b @Rm+,Rn */
	IF(0x0C0AFE44u); { u32 t_ = r10; PR = 0x0C0AFE48u; W8(r5, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AFE48u); }  /* 0C0AFE44 jsr @Rn */
L_0C0AFE48: BLKS(0x0C0AFE48u);
	r0 = 0xB0u; UPD(0x0C0AFE4Au, 1);  /* 0C0AFE48 mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C0AFE4A mov Rm,Rn */
	IF(0x0C0AFE4Cu); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0AFE4Eu, 2);  /* 0C0AFE4C mov.b @(r0,Rm),Rn */
	r1 = 0x0u;  /* 0C0AFE4E mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AFE52u, 2);  /* 0C0AFE50 mov.w @Rm,Rn */
	IF(0x0C0AFE52u); W8(r0 + r9, r6); UPD(0x0C0AFE54u, 1);  /* 0C0AFE52 mov.b Rm,@(r0,Rn) */
	r11 = 0xB4u; UPD(0x0C0AFE56u, 1);  /* 0C0AFE54 mov.w @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AFE56 extu.w Rm,Rn */
	IF(0x0C0AFE58u); MACL = r0 * r11;  /* 0C0AFE58 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AFE5Cu, 4);  /* 0C0AFE5A mov.l @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C0AFE5Eu, 1);  /* 0C0AFE5C mov.w @(disp,pc),Rn */
	IF(0x0C0AFE5Eu); r10 = MACL;  /* 0C0AFE5E sts macl,Rn */
	r10 += r7;  /* 0C0AFE60 add Rm,Rn */
	r10 += r4;  /* 0C0AFE62 add Rm,Rn */
	r10 += 0x1u;  /* 0C0AFE64 add #imm,Rn */
	r0 = 0xACu; UPD(0x0C0AFE68u, 5);  /* 0C0AFE66 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C0AFE68 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AFE6Cu, 2);  /* 0C0AFE6A mov.b @Rm,Rn */
	r0 += r9;  /* 0C0AFE6C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AFE70u, 2);  /* 0C0AFE6E mov.b @Rm,Rn */
	r0 += 0x3u;  /* 0C0AFE70 add #imm,Rn */
	r5 += 0x1u;  /* 0C0AFE72 add #imm,Rn */
	r3 += r6;  /* 0C0AFE74 add Rm,Rn */
	W8(r0, r6); UPD(0x0C0AFE78u, 4);  /* 0C0AFE76 mov.b Rm,@Rn */
	r7 = r12;  /* 0C0AFE78 mov Rm,Rn */
	W8(r5, r3); UPD(0x0C0AFE7Cu, 2);  /* 0C0AFE7A mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C0AFE7C add #imm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0AFE80u, 2);  /* 0C0AFE7E mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C0AFE80 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFE84u, 2);  /* 0C0AFE82 mov.b @Rm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0AFE84 exts.w Rm,Rn */
	W8(r0, r4); UPD(0x0C0AFE88u, 2);  /* 0C0AFE86 mov.b Rm,@Rn */
	r10 = 0x42u;  /* 0C0AFE88 mov #imm,Rn */
	r11 = R32(r13 + 0x38u); UPD(0x0C0AFE8Cu, 2);  /* 0C0AFE8A mov.l @(disp,Rm),Rn */
	T = (s32)r12 > (s32)r10;  /* 0C0AFE8C cmp/gt Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0AFE90u, 2);  /* 0C0AFE8E mov.w @(disp,pc),Rn */
	W32(r9 + 0x38u, r11); UPD(0x0C0AFE92u, 1);  /* 0C0AFE90 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFE92u); W32(r0 + r9, r1); UPD(0x0C0AFE94u, 1);  /* 0C0AFE92 mov.l Rm,@(r0,Rn) */
	r9 += 0x50u;  /* 0C0AFE94 add #imm,Rn */
	{ u32 c_ = !T; W32(r9, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AFDBCu, 4); goto L_0C0AFDBC; } UPD(0x0C0AFE9Au, 1); goto L_0C0AFE9A; }  /* 0C0AFE96 bf/s */
L_0C0AFE9A: BLKS(0x0C0AFE9Au);
	r3 = 0xC3C4164u; UPD(0x0C0AFE9Cu, 1);  /* 0C0AFE9A mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AFE9C mov #imm,Rn */
	r10 = 0xC3C4165u; UPD(0x0C0AFEA0u, 2);  /* 0C0AFE9E mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0AFEA0 mov #imm,Rn */
	r13 = 0x340u; UPD(0x0C0AFEA4u, 2);  /* 0C0AFEA2 mov.w @(disp,pc),Rn */
	r12 = 0xC207574u; UPD(0x0C0AFEA6u, 1);  /* 0C0AFEA4 mov.l @(disp,pc),Rn */
	W8(r3, r5); UPD(0x0C0AFEA8u, 1);  /* 0C0AFEA6 mov.b Rm,@Rn */
	W8(r10, r5); UPD(0x0C0AFEAAu, 1);  /* 0C0AFEA8 mov.b Rm,@Rn */
	{ W32(r12, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0AFCE6u, 3); goto L_0C0AFCE6; }  /* 0C0AFEAA bra */
}

void blk_f_0C0AFF20(sh3_t *c)
{
	LOCALS;
L_0C0AFF20: BLKS(0x0C0AFF20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF22u, 1);  /* 0C0AFF20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF24u, 1);  /* 0C0AFF22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF26u, 1);  /* 0C0AFF24 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AFF28u, 1);  /* 0C0AFF26 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AFF28 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF2Cu, 2);  /* 0C0AFF2A mov.l Rm,@-Rn */
	IF(0x0C0AFF2Cu); MACL = r10 * r3;  /* 0C0AFF2C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF30u, 3);  /* 0C0AFF2E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AFF32u, 1);  /* 0C0AFF30 mov.l @(disp,pc),Rn */
	IF(0x0C0AFF32u); r2 = MACL;  /* 0C0AFF32 sts macl,Rn */
	IF(0x0C0AFF34u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFF36u, 2);  /* 0C0AFF34 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0AFF36 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0AFF3Au, 2);  /* 0C0AFF38 mov.l @(disp,Rm),Rn */
	r0 = 0x4Eu;  /* 0C0AFF3A mov #imm,Rn */
	T = r2 > r0;  /* 0C0AFF3C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFF46u, 5); goto L_0C0AFF46; } goto L_0C0AFF42; }  /* 0C0AFF3E bf/s */
L_0C0AFF42: BLKS(0x0C0AFF42u);
	{ IF(0x0C0AFF44u); ; /* slot nop */ UPD(0x0C0B0570u, 4); goto L_0C0B0570; }  /* 0C0AFF42 bra */
L_0C0AFF46: BLKS(0x0C0AFF46u);
	r0 = 0xC0AFF58u;  /* 0C0AFF46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0AFF48 add Rm,Rn */
	IF(0x0C0AFF4Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AFF4Cu, 3);  /* 0C0AFF4A mov.w @(r0,Rm),Rn */
	IF(0x0C0AFF4Cu); { u32 tv_ = (r4 + 0x0C0AFF50u); u32 t_ = PHYS(tv_); IF(0x0C0AFF4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B0000u: goto L_0C0B0000; case 0x0C0B0080u: goto L_0C0B0080; case 0x0C0B00C0u: goto L_0C0B00C0; case 0x0C0B0120u: goto L_0C0B0120; case 0x0C0B0140u: goto L_0C0B0140; case 0x0C0B0170u: goto L_0C0B0170; case 0x0C0B01E0u: goto L_0C0B01E0; case 0x0C0B0240u: goto L_0C0B0240; case 0x0C0B0290u: goto L_0C0B0290; case 0x0C0B0300u: goto L_0C0B0300; case 0x0C0B0330u: goto L_0C0B0330; case 0x0C0B03C0u: goto L_0C0B03C0; case 0x0C0B0400u: goto L_0C0B0400; case 0x0C0B0420u: goto L_0C0B0420; case 0x0C0B0450u: goto L_0C0B0450; case 0x0C0B04B0u: goto L_0C0B04B0; case 0x0C0B04E0u: goto L_0C0B04E0; case 0x0C0B0570u: goto L_0C0B0570; case 0x0C0B05B0u: goto L_0C0B05B0; case 0x0C0B05B6u: goto L_0C0B05B6; case 0x0C0B05E0u: goto L_0C0B05E0; case 0x0C0B0610u: goto L_0C0B0610; case 0x0C0B0640u: goto L_0C0B0640; case 0x0C0B0670u: goto L_0C0B0670; case 0x0C0B06A0u: goto L_0C0B06A0; default: JUMPD(tv_); } }  /* 0C0AFF4C braf Rn */
L_0C0B0000: BLKS(0x0C0B0000u);
	r11 = 0xC072A90u; UPD(0x0C0B0002u, 1);  /* 0C0B0000 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B0002 mov #imm,Rn */
	r9 = 0xC0A9D90u; UPD(0x0C0B0006u, 2);  /* 0C0B0004 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0B0008u, 1);  /* 0C0B0006 mov.w @(disp,pc),Rn */
	IF(0x0C0B0008u); { u32 t_ = r11; PR = 0x0C0B000Cu; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072A90, 0x0C072A90u, 0x0C0B000Cu); }  /* 0C0B0008 jsr @Rn */
L_0C0B000C: BLKS(0x0C0B000Cu);
	r5 = 0xC1E49E0u; UPD(0x0C0B000Eu, 1);  /* 0C0B000C mov.l @(disp,pc),Rn */
	IF(0x0C0B000Eu); { u32 t_ = r9; PR = 0x0C0B0012u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B0012u); }  /* 0C0B000E jsr @Rn */
L_0C0B0012: BLKS(0x0C0B0012u);
	IF(0x0C0B0012u); MACL = r10 * r8;  /* 0C0B0012 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0016u, 3);  /* 0C0B0014 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0B0016 mov #imm,Rn */
	IF(0x0C0B0018u); r7 = MACL;  /* 0C0B0018 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0B001Cu, 3);  /* 0C0B001A mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0B001C add Rm,Rn */
	IF(0x0C0B001Eu); W32(r0 + r5, r6); UPD(0x0C0B0020u, 2);  /* 0C0B001E mov.l Rm,@(r0,Rn) */
L_0C0B0020: BLKS(0x0C0B0020u);
	r4 = 0xB4u; UPD(0x0C0B0022u, 1);  /* 0C0B0020 mov.w @(disp,pc),Rn */
	IF(0x0C0B0022u); MACL = r10 * r4;  /* 0C0B0022 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0026u, 3);  /* 0C0B0024 mov.l @(disp,pc),Rn */
	IF(0x0C0B0026u); r4 = MACL;  /* 0C0B0026 sts macl,Rn */
	r4 += r3;  /* 0C0B0028 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C0B002Cu, 3);  /* 0C0B002A mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0B002C tst Rm,Rn */
	if (!T) { UPD(0x0C0B0042u, 4); goto L_0C0B0042; }  /* 0C0B002E bf */
L_0C0B0030: BLKS(0x0C0B0030u);
	r4 += 0x40u;  /* 0C0B0030 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0B0034u, 2);  /* 0C0B0032 mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C0B0036u, 1);  /* 0C0B0034 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C0B0036 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B0042u, 4); goto L_0C0B0042; }  /* 0C0B0038 bt */
L_0C0B003A: BLKS(0x0C0B003Au);
	r7 = 0xC175064u; UPD(0x0C0B003Cu, 1);  /* 0C0B003A mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0B003Eu, 1);  /* 0C0B003C mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B003E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B0060u, 4); goto L_0C0B0060; }  /* 0C0B0040 bt */
L_0C0B0042: BLKS(0x0C0B0042u);
	r15 = r14;  /* 0C0B0042 mov Rm,Rn */
	IF(0x0C0B0044u); PR = R32(r15); r15 += 4; UPD(0x0C0B0046u, 2);  /* 0C0B0044 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0048u, 1);  /* 0C0B0046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B004Au, 1);  /* 0C0B0048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B004Cu, 1);  /* 0C0B004A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B004Eu, 1);  /* 0C0B004C mov.l @Rm+,Rn */
	IF(0x0C0B004Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B004E rts */
L_0C0B0060: BLKS(0x0C0B0060u);
	r11 = 0x4u;  /* 0C0B0060 mov #imm,Rn */
	IF(0x0C0B0062u); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0B0062 shld Rm,Rn */
	r9 = 0x40000u; UPD(0x0C0B0066u, 3);  /* 0C0B0064 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C0B0068u, 1);  /* 0C0B0066 mov.l @(disp,pc),Rn */
	r4 += r9;  /* 0C0B0068 add Rm,Rn */
	r15 = r14;  /* 0C0B006A mov Rm,Rn */
	IF(0x0C0B006Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B006Eu, 3);  /* 0C0B006C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0070u, 1);  /* 0C0B006E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0072u, 1);  /* 0C0B0070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0074u, 1);  /* 0C0B0072 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0076u, 1);  /* 0C0B0074 mov.l @Rm+,Rn */
	IF(0x0C0B0076u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0B0076 jmp @Rn */
L_0C0B0080: BLKS(0x0C0B0080u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0082u, 1);  /* 0C0B0080 mov.l @(disp,pc),Rn */
	IF(0x0C0B0082u); { u32 t_ = r8; PR = 0x0C0B0086u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0086u); }  /* 0C0B0082 jsr @Rn */
L_0C0B0086: BLKS(0x0C0B0086u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0086 exts.w Rm,Rn */
	IF(0x0C0B0088u); T = (s32)r4 >= 0;  /* 0C0B0088 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00AAu, 5); goto L_0C0B00AA; }  /* 0C0B008A bf */
L_0C0B008C: BLKS(0x0C0B008Cu);
	r5 = 0xB4u; UPD(0x0C0B008Eu, 1);  /* 0C0B008C mov.w @(disp,pc),Rn */
	IF(0x0C0B008Eu); MACL = r4 * r5;  /* 0C0B008E mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B0092u, 3);  /* 0C0B0090 mov.l @(disp,pc),Rn */
	IF(0x0C0B0092u); r4 = MACL;  /* 0C0B0092 sts macl,Rn */
	r0 = 0xA7u; UPD(0x0C0B0096u, 2);  /* 0C0B0094 mov.w @(disp,pc),Rn */
	IF(0x0C0B0096u); MACL = r10 * r5;  /* 0C0B0096 mul.l Rm,Rn */
	r4 += r2;  /* 0C0B0098 add Rm,Rn */
	r4 += r0;  /* 0C0B009A add Rm,Rn */
	IF(0x0C0B009Cu); r0 = MACL;  /* 0C0B009C sts macl,Rn */
	r0 += r2;  /* 0C0B009E add Rm,Rn */
	r5 += 0xFFFFFFEDu;  /* 0C0B00A0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B00A4u, 8);  /* 0C0B00A2 mov.b @Rm,Rn */
	IF(0x0C0B00A4u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B00A6u, 1);  /* 0C0B00A4 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C0B00A6 or Rm,Rn */
	W8(r4, r3); UPD(0x0C0B00AAu, 2);  /* 0C0B00A8 mov.b Rm,@Rn */
L_0C0B00AA: BLKS(0x0C0B00AAu);
	r9 = 0xC0AEE60u; UPD(0x0C0B00ACu, 1);  /* 0C0B00AA mov.l @(disp,pc),Rn */
	IF(0x0C0B00ACu); { u32 t_ = r9; PR = 0x0C0B00B0u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEE60, 0x0C0AEE60u, 0x0C0B00B0u); }  /* 0C0B00AC jsr @Rn */
L_0C0B00B0: BLKS(0x0C0B00B0u);
	{ IF(0x0C0B00B2u); ; /* slot nop */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B00B0 bra */
L_0C0B00C0: BLKS(0x0C0B00C0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B00C2u, 1);  /* 0C0B00C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00C2u); { u32 t_ = r11; PR = 0x0C0B00C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B00C6u); }  /* 0C0B00C2 jsr @Rn */
L_0C0B00C6: BLKS(0x0C0B00C6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B00C6 exts.w Rm,Rn */
	IF(0x0C0B00C8u); T = (s32)r4 >= 0;  /* 0C0B00C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00EAu, 5); goto L_0C0B00EA; }  /* 0C0B00CA bf */
L_0C0B00CC: BLKS(0x0C0B00CCu);
	r2 = 0xB4u; UPD(0x0C0B00CEu, 1);  /* 0C0B00CC mov.w @(disp,pc),Rn */
	IF(0x0C0B00CEu); MACL = r4 * r2;  /* 0C0B00CE mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B00D2u, 3);  /* 0C0B00D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00D2u); r3 = MACL;  /* 0C0B00D2 sts macl,Rn */
	r1 = 0xA5u; UPD(0x0C0B00D6u, 2);  /* 0C0B00D4 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B00D6 add Rm,Rn */
	UPD(0x0C0B00D8u, 1);
L_0C0B00D8: BLKS(0x0C0B00D8u);
	IF(0x0C0B00D8u); MACL = r10 * r2;  /* 0C0B00D8 mul.l Rm,Rn */
	r3 += r1;  /* 0C0B00DA add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B00DEu, 4);  /* 0C0B00DC mov.b @Rm,Rn */
	IF(0x0C0B00DEu); r0 = MACL;  /* 0C0B00DE sts macl,Rn */
	r0 += r7;  /* 0C0B00E0 add Rm,Rn */
	r2 += 0xFFFFFFEDu;  /* 0C0B00E2 add #imm,Rn */
	IF(0x0C0B00E4u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B00E6u, 4);  /* 0C0B00E4 mov.b @(r0,Rm),Rn */
	r6 |= r7;  /* 0C0B00E6 or Rm,Rn */
	W8(r3, r6); UPD(0x0C0B00EAu, 2);  /* 0C0B00E8 mov.b Rm,@Rn */
L_0C0B00EA: BLKS(0x0C0B00EAu);
	r9 = 0xB4u; UPD(0x0C0B00ECu, 1);  /* 0C0B00EA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B00EC add #imm,Rn */
	IF(0x0C0B00EEu); MACL = r10 * r9;  /* 0C0B00EE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B00F2u, 4);  /* 0C0B00F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00F2u); r8 = MACL;  /* 0C0B00F2 sts macl,Rn */
	r8 += r0;  /* 0C0B00F4 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B00F8u, 3);  /* 0C0B00F6 mov.w @(disp,pc),Rn */
	IF(0x0C0B00F8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B00FAu, 1);  /* 0C0B00F8 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0B00FA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B00FEu, 2);  /* 0C0B00FC mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B00FE add #imm,Rn */
	IF(0x0C0B0100u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0102u, 2);  /* 0C0B0100 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B0102 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B0104 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B0108u, 3);  /* 0C0B0106 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B010Au, 1);  /* 0C0B0108 mov.l @Rm,Rn */
L_0C0B010A: BLKS(0x0C0B010Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B010Cu, 1);  /* 0C0B010A mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B010Eu, 1);  /* 0C0B010C mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C0B0110u, 1);  /* 0C0B010E mov.l @(disp,pc),Rn */
L_0C0B0110: BLKS(0x0C0B0110u);
	IF(0x0C0B0110u); { u32 t_ = r0; PR = 0x0C0B0114u; IF(0x0C0B0112u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B0114u); }  /* 0C0B0110 jsr @Rn */
L_0C0B0114: BLKS(0x0C0B0114u);
	r6 = 0x0u;  /* 0C0B0114 mov #imm,Rn */
	W32(r8, r6); UPD(0x0C0B0118u, 2);  /* 0C0B0116 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B0118 bra */
L_0C0B0120: BLKS(0x0C0B0120u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0122u, 1);  /* 0C0B0120 mov.l @(disp,pc),Rn */
	IF(0x0C0B0122u); { u32 t_ = r8; PR = 0x0C0B0126u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0126u); }  /* 0C0B0122 jsr @Rn */
L_0C0B0126: BLKS(0x0C0B0126u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0126 exts.w Rm,Rn */
	IF(0x0C0B0128u); T = (s32)r4 >= 0;  /* 0C0B0128 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00EAu, 5); goto L_0C0B00EA; }  /* 0C0B012A bf */
L_0C0B012C: BLKS(0x0C0B012Cu);
	r2 = 0xB4u; UPD(0x0C0B012Eu, 1);  /* 0C0B012C mov.w @(disp,pc),Rn */
	IF(0x0C0B012Eu); MACL = r4 * r2;  /* 0C0B012E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B0132u, 3);  /* 0C0B0130 mov.l @(disp,pc),Rn */
	r1 = 0xA6u; UPD(0x0C0B0134u, 1);  /* 0C0B0132 mov.w @(disp,pc),Rn */
	IF(0x0C0B0134u); r3 = MACL;  /* 0C0B0134 sts macl,Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C0B00D8u, 4); goto L_0C0B00D8; }  /* 0C0B0136 bra */
L_0C0B0140: BLKS(0x0C0B0140u);
	r8 = 0xB4u; UPD(0x0C0B0142u, 1);  /* 0C0B0140 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0142 add #imm,Rn */
	IF(0x0C0B0144u); MACL = r10 * r8;  /* 0C0B0144 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0148u, 4);  /* 0C0B0146 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0B0148 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B014Cu, 2);  /* 0C0B014A mov.w @(disp,pc),Rn */
	IF(0x0C0B014Cu); r8 = MACL;  /* 0C0B014C sts macl,Rn */
	r8 += r3;  /* 0C0B014E add Rm,Rn */
	IF(0x0C0B0150u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0152u, 3);  /* 0C0B0150 mov.b @(r0,Rm),Rn */
	r7 = r4 & 0xFF;  /* 0C0B0152 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B0156u, 2);  /* 0C0B0154 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0156 add #imm,Rn */
	IF(0x0C0B0158u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B015Au, 2);  /* 0C0B0158 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B015A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B015Eu, 2);  /* 0C0B015C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 3); goto L_0C0B010A; }  /* 0C0B015E bra */
L_0C0B0170: BLKS(0x0C0B0170u);
	r6 = 0xB4u; UPD(0x0C0B0172u, 1);  /* 0C0B0170 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0172 add #imm,Rn */
	IF(0x0C0B0174u); MACL = r10 * r6;  /* 0C0B0174 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0178u, 4);  /* 0C0B0176 mov.l @(disp,pc),Rn */
	IF(0x0C0B0178u); r8 = MACL;  /* 0C0B0178 sts macl,Rn */
	r8 += r0;  /* 0C0B017A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B017Eu, 3);  /* 0C0B017C mov.w @(disp,pc),Rn */
	IF(0x0C0B017Eu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0180u, 1);  /* 0C0B017E mov.b @(r0,Rm),Rn */
	r9 = r11 & 0xFF;  /* 0C0B0180 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C0B0184u, 2);  /* 0C0B0182 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0184 add #imm,Rn */
	IF(0x0C0B0186u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0188u, 2);  /* 0C0B0186 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0B0188 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B018Cu, 2);  /* 0C0B018A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B018Eu, 1);  /* 0C0B018C mov.l @Rm,Rn */
	r5 = 0x3u;  /* 0C0B018E mov #imm,Rn */
	UPD(0x0C0B0190u, 1);
L_0C0B0190: BLKS(0x0C0B0190u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0192u, 1);  /* 0C0B0190 mov.l @(disp,Rm),Rn */
L_0C0B0192: BLKS(0x0C0B0192u);
	r0 = 0xC0BFE70u; UPD(0x0C0B0194u, 1);  /* 0C0B0192 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B0110u, 3); goto L_0C0B0110; }  /* 0C0B0194 bra */
L_0C0B01E0: BLKS(0x0C0B01E0u);
	r8 = 0xC0A8B50u; UPD(0x0C0B01E2u, 1);  /* 0C0B01E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B01E2u); { u32 t_ = r8; PR = 0x0C0B01E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B01E6u); }  /* 0C0B01E2 jsr @Rn */
L_0C0B01E6: BLKS(0x0C0B01E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B01E6 exts.w Rm,Rn */
	IF(0x0C0B01E8u); T = (s32)r4 >= 0;  /* 0C0B01E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B01FEu, 5); goto L_0C0B01FE; }  /* 0C0B01EA bf */
L_0C0B01EC: BLKS(0x0C0B01ECu);
	r5 = 0xB4u; UPD(0x0C0B01EEu, 1);  /* 0C0B01EC mov.w @(disp,pc),Rn */
	IF(0x0C0B01EEu); MACL = r4 * r5;  /* 0C0B01EE mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B01F2u, 3);  /* 0C0B01F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B01F2u); r7 = MACL;  /* 0C0B01F2 sts macl,Rn */
	r7 += r3;  /* 0C0B01F4 add Rm,Rn */
	r4 = R32(r7); UPD(0x0C0B01F8u, 3);  /* 0C0B01F6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B01FAu, 1);  /* 0C0B01F8 mov.w @(disp,pc),Rn */
	r4 |= r1;  /* 0C0B01FA or Rm,Rn */
	W32(r7, r4); UPD(0x0C0B01FEu, 2);  /* 0C0B01FC mov.l Rm,@Rn */
L_0C0B01FE: BLKS(0x0C0B01FEu);
	r8 = 0xB4u; UPD(0x0C0B0200u, 1);  /* 0C0B01FE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0200 add #imm,Rn */
	IF(0x0C0B0202u); MACL = r10 * r8;  /* 0C0B0202 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0206u, 4);  /* 0C0B0204 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B0206 mov #imm,Rn */
	IF(0x0C0B0208u); r8 = MACL;  /* 0C0B0208 sts macl,Rn */
	r8 += r0;  /* 0C0B020A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B020Eu, 4);  /* 0C0B020C mov.w @(disp,pc),Rn */
	IF(0x0C0B020Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0210u, 1);  /* 0C0B020E mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B0210 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B0214u, 2);  /* 0C0B0212 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0214 add #imm,Rn */
	IF(0x0C0B0216u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0218u, 2);  /* 0C0B0216 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0B0218 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B021Cu, 2);  /* 0C0B021A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B021Eu, 1);  /* 0C0B021C mov.l @Rm,Rn */
L_0C0B021E: BLKS(0x0C0B021Eu);
	r9 = 0xC0BD6F0u; UPD(0x0C0B0220u, 1);  /* 0C0B021E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B0222u, 1);  /* 0C0B0220 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0222u); { u32 t_ = r9; PR = 0x0C0B0226u; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0226u); }  /* 0C0B0222 jsr @Rn */
L_0C0B0226: BLKS(0x0C0B0226u);
	r7 = 0x0u;  /* 0C0B0226 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0B022Au, 2);  /* 0C0B0228 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C0B022A add #imm,Rn */
	UPD(0x0C0B022Cu, 1);
L_0C0B022C: BLKS(0x0C0B022Cu);
	r3 = 0xC0C21F0u; UPD(0x0C0B022Eu, 1);  /* 0C0B022C mov.l @(disp,pc),Rn */
	IF(0x0C0B022Eu); { u32 t_ = r3; PR = 0x0C0B0232u; IF(0x0C0B0230u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21F0, 0x0C0C21F0u, 0x0C0B0232u); }  /* 0C0B022E jsr @Rn */
L_0C0B0232: BLKS(0x0C0B0232u);
	r6 = 0xC2B07FCu; UPD(0x0C0B0234u, 1);  /* 0C0B0232 mov.l @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C0B0234 mov #imm,Rn */
	{ W32(r6, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0020u, 4); goto L_0C0B0020; }  /* 0C0B0236 bra */
L_0C0B0240: BLKS(0x0C0B0240u);
	r9 = 0xC0A8B50u; UPD(0x0C0B0242u, 1);  /* 0C0B0240 mov.l @(disp,pc),Rn */
	IF(0x0C0B0242u); { u32 t_ = r9; PR = 0x0C0B0246u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0246u); }  /* 0C0B0242 jsr @Rn */
L_0C0B0246: BLKS(0x0C0B0246u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0246 exts.w Rm,Rn */
	IF(0x0C0B0248u); T = (s32)r4 >= 0;  /* 0C0B0248 cmp/pz Rn */
	if (!T) { UPD(0x0C0B025Eu, 5); goto L_0C0B025E; }  /* 0C0B024A bf */
L_0C0B024C: BLKS(0x0C0B024Cu);
	r5 = 0xB4u; UPD(0x0C0B024Eu, 1);  /* 0C0B024C mov.w @(disp,pc),Rn */
	IF(0x0C0B024Eu); MACL = r4 * r5;  /* 0C0B024E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0252u, 3);  /* 0C0B0250 mov.l @(disp,pc),Rn */
	IF(0x0C0B0252u); r7 = MACL;  /* 0C0B0252 sts macl,Rn */
	r7 += r3;  /* 0C0B0254 add Rm,Rn */
	r4 = R32(r7); UPD(0x0C0B0258u, 3);  /* 0C0B0256 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B025Au, 1);  /* 0C0B0258 mov.w @(disp,pc),Rn */
	r4 |= r1;  /* 0C0B025A or Rm,Rn */
	W32(r7, r4); UPD(0x0C0B025Eu, 2);  /* 0C0B025C mov.l Rm,@Rn */
L_0C0B025E: BLKS(0x0C0B025Eu);
	r8 = 0xB4u; UPD(0x0C0B0260u, 1);  /* 0C0B025E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0260 add #imm,Rn */
	IF(0x0C0B0262u); MACL = r10 * r8;  /* 0C0B0262 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0266u, 4);  /* 0C0B0264 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B0266 mov #imm,Rn */
	IF(0x0C0B0268u); r8 = MACL;  /* 0C0B0268 sts macl,Rn */
	r8 += r0;  /* 0C0B026A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B026Eu, 4);  /* 0C0B026C mov.w @(disp,pc),Rn */
	IF(0x0C0B026Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0270u, 1);  /* 0C0B026E mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C0B0270 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0274u, 2);  /* 0C0B0272 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0274 add #imm,Rn */
	IF(0x0C0B0276u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0278u, 2);  /* 0C0B0276 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0B0278 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B027Cu, 2);  /* 0C0B027A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B027Eu, 1);  /* 0C0B027C mov.l @Rm,Rn */
L_0C0B027E: BLKS(0x0C0B027Eu);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0280u, 1);  /* 0C0B027E mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B0282u, 1);  /* 0C0B0280 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B0110u, 3); goto L_0C0B0110; }  /* 0C0B0282 bra */
L_0C0B0290: BLKS(0x0C0B0290u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B0292u, 1);  /* 0C0B0290 mov.l @(disp,pc),Rn */
	IF(0x0C0B0292u); { u32 t_ = r8; PR = 0x0C0B0296u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B0296u); }  /* 0C0B0292 jsr @Rn */
L_0C0B0296: BLKS(0x0C0B0296u);
	IF(0x0C0B0296u); T = (s32)r0 >= 0;  /* 0C0B0296 cmp/pz Rn */
	if (!T) { UPD(0x0C0B02DEu, 4); goto L_0C0B02DE; }  /* 0C0B0298 bf */
L_0C0B029A: BLKS(0x0C0B029Au);
	r15 += 0xFFFFFFF8u;  /* 0C0B029A add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0B029Eu, 2);  /* 0C0B029C mov.w @(disp,pc),Rn */
	IF(0x0C0B029Eu); MACL = r10 * r8;  /* 0C0B029E mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B02A2u, 3);  /* 0C0B02A0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0B02A2 mov #imm,Rn */
	IF(0x0C0B02A4u); r0 = MACL;  /* 0C0B02A4 sts macl,Rn */
	r0 += r1;  /* 0C0B02A6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B02A8 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B02ACu, 5);  /* 0C0B02AA mov.w @Rm,Rn */
	IF(0x0C0B02ACu); MACL = r11 * r8;  /* 0C0B02AC mul.l Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0B02B0u, 3);  /* 0C0B02AE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B02B0 add #imm,Rn */
	IF(0x0C0B02B2u); r5 = MACL;  /* 0C0B02B2 sts macl,Rn */
	r5 += r1;  /* 0C0B02B4 add Rm,Rn */
	r8 += 0xFFFFFFF2u;  /* 0C0B02B6 add #imm,Rn */
	r5 += r8;  /* 0C0B02B8 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B02BCu, 6);  /* 0C0B02BA mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B02BC add #imm,Rn */
	W8(r5, r6); UPD(0x0C0B02C0u, 2);  /* 0C0B02BE mov.b Rm,@Rn */
	IF(0x0C0B02C0u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B02C2u, 1);  /* 0C0B02C0 mov.b @(r0,Rm),Rn */
	r2 = 0x20000u; UPD(0x0C0B02C4u, 1);  /* 0C0B02C2 mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C0B02C4 extu.b Rm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B02C8u, 2);  /* 0C0B02C6 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0B02C8 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C0B02CCu, 2);  /* 0C0B02CA mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B02CEu, 1);  /* 0C0B02CC mov.l Rm,@(disp,Rn) */
	r11 = 0xC175064u; UPD(0x0C0B02D0u, 1);  /* 0C0B02CE mov.l @(disp,pc),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B02D2u, 1);  /* 0C0B02D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B02D2u); { u32 t_ = r9; PR = 0x0C0B02D6u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B02D6u); }  /* 0C0B02D2 jsr @Rn */
L_0C0B02D6: BLKS(0x0C0B02D6u);
	r0 = R32(r11); UPD(0x0C0B02D8u, 1);  /* 0C0B02D6 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B02D8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B02F0u, 4); goto L_0C0B02F0; } UPD(0x0C0B02DEu, 1); goto L_0C0B02DE; }  /* 0C0B02DA bt/s */
L_0C0B02DE: BLKS(0x0C0B02DEu);
	r5 = 0xC1E4C14u; UPD(0x0C0B02E0u, 1);  /* 0C0B02DE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B02E0 mov Rm,Rn */
	UPD(0x0C0B02E2u, 1);
L_0C0B02E2: BLKS(0x0C0B02E2u);
	r9 = 0xC0A9D90u; UPD(0x0C0B02E4u, 1);  /* 0C0B02E2 mov.l @(disp,pc),Rn */
	IF(0x0C0B02E4u); { u32 t_ = r9; PR = 0x0C0B02E8u; IF(0x0C0B02E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B02E8u); }  /* 0C0B02E4 jsr @Rn */
L_0C0B02E8: BLKS(0x0C0B02E8u);
	{ IF(0x0C0B02EAu); ; /* slot nop */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B02E8 bra */
L_0C0B02F0: BLKS(0x0C0B02F0u);
	r0 = 0xC071C90u; UPD(0x0C0B02F2u, 1);  /* 0C0B02F0 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B02F4u, 1);  /* 0C0B02F2 mov.l @(disp,pc),Rn */
	IF(0x0C0B02F4u); { u32 t_ = r0; PR = 0x0C0B02F8u; IF(0x0C0B02F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B02F8u); }  /* 0C0B02F4 jsr @Rn */
L_0C0B02F8: BLKS(0x0C0B02F8u);
	{ IF(0x0C0B02FAu); ; /* slot nop */ UPD(0x0C0B02DEu, 3); goto L_0C0B02DE; }  /* 0C0B02F8 bra */
L_0C0B0300: BLKS(0x0C0B0300u);
	r6 = 0xB4u; UPD(0x0C0B0302u, 1);  /* 0C0B0300 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0302 add #imm,Rn */
	IF(0x0C0B0304u); MACL = r10 * r6;  /* 0C0B0304 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0308u, 4);  /* 0C0B0306 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B030Au, 1);  /* 0C0B0308 mov.w @(disp,pc),Rn */
	IF(0x0C0B030Au); r8 = MACL;  /* 0C0B030A sts macl,Rn */
	r8 += r5;  /* 0C0B030C add Rm,Rn */
	IF(0x0C0B030Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0310u, 3);  /* 0C0B030E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0B0310 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B0312 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0316u, 3);  /* 0C0B0314 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0316 add #imm,Rn */
	IF(0x0C0B0318u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B031Au, 2);  /* 0C0B0318 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C0B031A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B031Eu, 2);  /* 0C0B031C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B031E bra */
L_0C0B0330: BLKS(0x0C0B0330u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B0332u, 1);  /* 0C0B0330 mov.l @(disp,pc),Rn */
	IF(0x0C0B0332u); { u32 t_ = r8; PR = 0x0C0B0336u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B0336u); }  /* 0C0B0332 jsr @Rn */
L_0C0B0336: BLKS(0x0C0B0336u);
	IF(0x0C0B0336u); T = (s32)r0 >= 0;  /* 0C0B0336 cmp/pz Rn */
	if (!T) { UPD(0x0C0B035Eu, 4); goto L_0C0B035E; }  /* 0C0B0338 bf */
L_0C0B033A: BLKS(0x0C0B033Au);
	r7 = 0xB4u; UPD(0x0C0B033Cu, 1);  /* 0C0B033A mov.w @(disp,pc),Rn */
	IF(0x0C0B033Cu); MACL = r10 * r7;  /* 0C0B033C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0340u, 3);  /* 0C0B033E mov.l @(disp,pc),Rn */
	IF(0x0C0B0340u); r0 = MACL;  /* 0C0B0340 sts macl,Rn */
	r0 += r5;  /* 0C0B0342 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B0344 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B0348u, 4);  /* 0C0B0346 mov.w @Rm,Rn */
	IF(0x0C0B0348u); MACL = r2 * r7;  /* 0C0B0348 mul.l Rm,Rn */
	r3 = 0xA1u; UPD(0x0C0B034Cu, 3);  /* 0C0B034A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B034C add #imm,Rn */
	IF(0x0C0B034Eu); r11 = MACL;  /* 0C0B034E sts macl,Rn */
	r11 += r5;  /* 0C0B0350 add Rm,Rn */
	r7 += 0xFFFFFFF1u;  /* 0C0B0352 add #imm,Rn */
	r11 += r7;  /* 0C0B0354 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B0358u, 6);  /* 0C0B0356 mov.b @Rm,Rn */
	IF(0x0C0B0358u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B035Au, 1);  /* 0C0B0358 mov.b @(r0,Rm),Rn */
	r9 |= r1;  /* 0C0B035A or Rm,Rn */
	W8(r11, r9); UPD(0x0C0B035Eu, 2);  /* 0C0B035C mov.b Rm,@Rn */
L_0C0B035E: BLKS(0x0C0B035Eu);
	r8 = 0xB4u; UPD(0x0C0B0360u, 1);  /* 0C0B035E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0360 add #imm,Rn */
	IF(0x0C0B0362u); MACL = r10 * r8;  /* 0C0B0362 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B0366u, 4);  /* 0C0B0364 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0B0366 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B036Au, 2);  /* 0C0B0368 mov.w @(disp,pc),Rn */
	IF(0x0C0B036Au); r8 = MACL;  /* 0C0B036A sts macl,Rn */
	r8 += r9;  /* 0C0B036C add Rm,Rn */
	IF(0x0C0B036Eu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0370u, 3);  /* 0C0B036E mov.b @(r0,Rm),Rn */
	r6 = r11 & 0xFF;  /* 0C0B0370 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0374u, 2);  /* 0C0B0372 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0374 add #imm,Rn */
	IF(0x0C0B0376u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0378u, 2);  /* 0C0B0376 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0B0378 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B037Cu, 2);  /* 0C0B037A mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0190u, 3); goto L_0C0B0190; }  /* 0C0B037C bra */
L_0C0B03C0: BLKS(0x0C0B03C0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B03C2u, 1);  /* 0C0B03C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03C2u); { u32 t_ = r11; PR = 0x0C0B03C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B03C6u); }  /* 0C0B03C2 jsr @Rn */
L_0C0B03C6: BLKS(0x0C0B03C6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B03C6 exts.w Rm,Rn */
	IF(0x0C0B03C8u); T = (s32)r4 >= 0;  /* 0C0B03C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B03DEu, 5); goto L_0C0B03DE; }  /* 0C0B03CA bf */
L_0C0B03CC: BLKS(0x0C0B03CCu);
	r2 = 0xB4u; UPD(0x0C0B03CEu, 1);  /* 0C0B03CC mov.w @(disp,pc),Rn */
	IF(0x0C0B03CEu); MACL = r4 * r2;  /* 0C0B03CE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B03D2u, 3);  /* 0C0B03D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03D2u); r7 = MACL;  /* 0C0B03D2 sts macl,Rn */
	r7 += r5;  /* 0C0B03D4 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C0B03D8u, 3);  /* 0C0B03D6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B03DAu, 1);  /* 0C0B03D8 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0B03DA or Rm,Rn */
	W32(r7, r3); UPD(0x0C0B03DEu, 2);  /* 0C0B03DC mov.l Rm,@Rn */
L_0C0B03DE: BLKS(0x0C0B03DEu);
	r8 = 0xB4u; UPD(0x0C0B03E0u, 1);  /* 0C0B03DE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B03E0 add #imm,Rn */
	IF(0x0C0B03E2u); MACL = r10 * r8;  /* 0C0B03E2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B03E6u, 4);  /* 0C0B03E4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B03E6 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B03EAu, 2);  /* 0C0B03E8 mov.w @(disp,pc),Rn */
	IF(0x0C0B03EAu); r8 = MACL;  /* 0C0B03EA sts macl,Rn */
	r8 += r11;  /* 0C0B03EC add Rm,Rn */
	IF(0x0C0B03EEu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B03F0u, 3);  /* 0C0B03EE mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C0B03F0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B03F4u, 2);  /* 0C0B03F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B03F4 add #imm,Rn */
	IF(0x0C0B03F6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B03F8u, 2);  /* 0C0B03F6 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0B03F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B03FCu, 2);  /* 0C0B03FA mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B021Eu, 3); goto L_0C0B021E; }  /* 0C0B03FC bra */
L_0C0B0400: BLKS(0x0C0B0400u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0402u, 1);  /* 0C0B0400 mov.l @(disp,pc),Rn */
	IF(0x0C0B0402u); { u32 t_ = r8; PR = 0x0C0B0406u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0406u); }  /* 0C0B0402 jsr @Rn */
L_0C0B0406: BLKS(0x0C0B0406u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0406 exts.w Rm,Rn */
	IF(0x0C0B0408u); T = (s32)r4 >= 0;  /* 0C0B0408 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0420u, 5); goto L_0C0B0420; }  /* 0C0B040A bf */
L_0C0B040C: BLKS(0x0C0B040Cu);
	r5 = 0xB4u; UPD(0x0C0B040Eu, 1);  /* 0C0B040C mov.w @(disp,pc),Rn */
	IF(0x0C0B040Eu); MACL = r4 * r5;  /* 0C0B040E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0412u, 3);  /* 0C0B0410 mov.l @(disp,pc),Rn */
	IF(0x0C0B0412u); r6 = MACL;  /* 0C0B0412 sts macl,Rn */
	r6 += r3;  /* 0C0B0414 add Rm,Rn */
	r11 = R32(r6 + 0xCu); UPD(0x0C0B0418u, 3);  /* 0C0B0416 mov.l @(disp,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B041Au, 1);  /* 0C0B0418 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0B041A add #imm,Rn */
	IF(0x0C0B041Cu); { u32 t_ = r9; PR = 0x0C0B0420u; W32(r6 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B0420u); }  /* 0C0B041C jsr @Rn */
L_0C0B0420: BLKS(0x0C0B0420u);
	r8 = 0xB4u; UPD(0x0C0B0422u, 1);  /* 0C0B0420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0422 add #imm,Rn */
	IF(0x0C0B0424u); MACL = r10 * r8;  /* 0C0B0424 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0428u, 4);  /* 0C0B0426 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B0428 mov #imm,Rn */
	IF(0x0C0B042Au); r8 = MACL;  /* 0C0B042A sts macl,Rn */
	r8 += r0;  /* 0C0B042C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0430u, 4);  /* 0C0B042E mov.w @(disp,pc),Rn */
	IF(0x0C0B0430u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0432u, 1);  /* 0C0B0430 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0B0432 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B0436u, 2);  /* 0C0B0434 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0436 add #imm,Rn */
	IF(0x0C0B0438u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B043Au, 2);  /* 0C0B0438 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C0B043A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B043Eu, 2);  /* 0C0B043C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 3); goto L_0C0B010A; }  /* 0C0B043E bra */
L_0C0B0450: BLKS(0x0C0B0450u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0452u, 1);  /* 0C0B0450 mov.l @(disp,pc),Rn */
	IF(0x0C0B0452u); { u32 t_ = r8; PR = 0x0C0B0456u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0456u); }  /* 0C0B0452 jsr @Rn */
L_0C0B0456: BLKS(0x0C0B0456u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0456 exts.w Rm,Rn */
	IF(0x0C0B0458u); T = (s32)r4 >= 0;  /* 0C0B0458 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0474u, 5); goto L_0C0B0474; }  /* 0C0B045A bf */
L_0C0B045C: BLKS(0x0C0B045Cu);
	r11 = 0xB4u; UPD(0x0C0B045Eu, 1);  /* 0C0B045C mov.w @(disp,pc),Rn */
	IF(0x0C0B045Eu); MACL = r4 * r11;  /* 0C0B045E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0462u, 3);  /* 0C0B0460 mov.l @(disp,pc),Rn */
	IF(0x0C0B0462u); r0 = MACL;  /* 0C0B0462 sts macl,Rn */
	r7 = 0xA5u; UPD(0x0C0B0466u, 2);  /* 0C0B0464 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0B0466 add Rm,Rn */
	r0 += r7;  /* 0C0B0468 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B046Cu, 3);  /* 0C0B046A mov.b @Rm,Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B046Eu, 1);  /* 0C0B046C mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B046E add #imm,Rn */
	IF(0x0C0B0470u); { u32 t_ = r9; PR = 0x0C0B0474u; W8(r0, r2); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B0474u); }  /* 0C0B0470 jsr @Rn */
L_0C0B0474: BLKS(0x0C0B0474u);
	r8 = 0xB4u; UPD(0x0C0B0476u, 1);  /* 0C0B0474 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0476 add #imm,Rn */
	IF(0x0C0B0478u); MACL = r10 * r8;  /* 0C0B0478 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B047Cu, 4);  /* 0C0B047A mov.l @(disp,pc),Rn */
	IF(0x0C0B047Cu); r8 = MACL;  /* 0C0B047C sts macl,Rn */
	r8 += r2;  /* 0C0B047E add Rm,Rn */
	r11 = R32(r8 + 0x8u); UPD(0x0C0B0482u, 3);  /* 0C0B0480 mov.l @(disp,Rm),Rn */
	r0 = 0xC1E4C34u; UPD(0x0C0B0484u, 1);  /* 0C0B0482 mov.l @(disp,pc),Rn */
	IF(0x0C0B0484u); r11 <<= 2;  /* 0C0B0484 shll2 Rn */
	r11 += r0;  /* 0C0B0486 add Rm,Rn */
	r0 = 0xFFFFFF30u; UPD(0x0C0B048Au, 3);  /* 0C0B0488 mov.w @(disp,pc),Rn */
	IF(0x0C0B048Au); r7 = R32(r0 + r11); UPD(0x0C0B048Cu, 1);  /* 0C0B048A mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0B048Eu, 1);  /* 0C0B048C mov.w @(disp,pc),Rn */
	IF(0x0C0B048Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0490u, 1);  /* 0C0B048E mov.b @(r0,Rm),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0492u, 1);  /* 0C0B0490 mov.l @(disp,Rm),Rn */
	r5 = r9 & 0xFF;  /* 0C0B0492 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B0496u, 2);  /* 0C0B0494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0496 add #imm,Rn */
	IF(0x0C0B0498u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B049Au, 2);  /* 0C0B0498 mov.b @(r0,Rm),Rn */
	r6 += r7;  /* 0C0B049A add Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B049C extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B04A0u, 3);  /* 0C0B049E mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C0B04A0 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0192u, 4); goto L_0C0B0192; }  /* 0C0B04A2 bra */
L_0C0B04B0: BLKS(0x0C0B04B0u);
	r9 = 0xC0A8B50u; UPD(0x0C0B04B2u, 1);  /* 0C0B04B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04B2u); { u32 t_ = r9; PR = 0x0C0B04B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B04B6u); }  /* 0C0B04B2 jsr @Rn */
L_0C0B04B6: BLKS(0x0C0B04B6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B04B6 exts.w Rm,Rn */
	IF(0x0C0B04B8u); T = (s32)r4 >= 0;  /* 0C0B04B8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0420u, 5); goto L_0C0B0420; }  /* 0C0B04BA bf */
L_0C0B04BC: BLKS(0x0C0B04BCu);
	r7 = 0xB4u; UPD(0x0C0B04BEu, 1);  /* 0C0B04BC mov.w @(disp,pc),Rn */
	IF(0x0C0B04BEu); MACL = r4 * r7;  /* 0C0B04BE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B04C2u, 3);  /* 0C0B04C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04C2u); r6 = MACL;  /* 0C0B04C2 sts macl,Rn */
	r3 = 0xA5u; UPD(0x0C0B04C6u, 2);  /* 0C0B04C4 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C0B04C6 add Rm,Rn */
	r6 += r3;  /* 0C0B04C8 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B04CCu, 3);  /* 0C0B04CA mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0B04CC add #imm,Rn */
	{ W8(r6, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C0B0420u, 4); goto L_0C0B0420; }  /* 0C0B04CE bra */
L_0C0B04E0: BLKS(0x0C0B04E0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B04E2u, 1);  /* 0C0B04E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04E2u); { u32 t_ = r11; PR = 0x0C0B04E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B04E6u); }  /* 0C0B04E2 jsr @Rn */
L_0C0B04E6: BLKS(0x0C0B04E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B04E6 exts.w Rm,Rn */
	IF(0x0C0B04E8u); T = (s32)r4 >= 0;  /* 0C0B04E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0526u, 5); goto L_0C0B0526; }  /* 0C0B04EA bf */
L_0C0B04EC: BLKS(0x0C0B04ECu);
	r3 = 0xB4u; UPD(0x0C0B04EEu, 1);  /* 0C0B04EC mov.w @(disp,pc),Rn */
	IF(0x0C0B04EEu); MACL = r10 * r3;  /* 0C0B04EE mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B04F2u, 3);  /* 0C0B04F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04F2u); r0 = MACL;  /* 0C0B04F2 sts macl,Rn */
	r0 += r7;  /* 0C0B04F4 add Rm,Rn */
	r5 = R32(r0 + 0xCu); UPD(0x0C0B04F8u, 3);  /* 0C0B04F6 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0B04F8 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B04FCu); MACL = r4 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B050Cu, 5); goto L_0C0B050C; } goto L_0C0B04FE; }  /* 0C0B04FA bt/s */
L_0C0B04FE: BLKS(0x0C0B04FEu);
	r6 = 0xA5u; UPD(0x0C0B0500u, 3);  /* 0C0B04FE mov.w @(disp,pc),Rn */
	IF(0x0C0B0500u); r4 = MACL;  /* 0C0B0500 sts macl,Rn */
	r4 += r7;  /* 0C0B0502 add Rm,Rn */
	r4 += r6;  /* 0C0B0504 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B0508u, 4);  /* 0C0B0506 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B0508 add #imm,Rn */
	W8(r4, r2); UPD(0x0C0B050Cu, 2);  /* 0C0B050A mov.b Rm,@Rn */
L_0C0B050C: BLKS(0x0C0B050Cu);
	r0 += 0x7Eu;  /* 0C0B050C add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B0510u, 2);  /* 0C0B050E mov.w @Rm,Rn */
	IF(0x0C0B0510u); MACL = r11 * r3;  /* 0C0B0510 mul.l Rm,Rn */
	r9 = 0xA7u; UPD(0x0C0B0514u, 3);  /* 0C0B0512 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B0514 add #imm,Rn */
	IF(0x0C0B0516u); r8 = MACL;  /* 0C0B0516 sts macl,Rn */
	r8 += r7;  /* 0C0B0518 add Rm,Rn */
	r7 = 0xA2u; UPD(0x0C0B051Cu, 4);  /* 0C0B051A mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0B051C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B0520u, 2);  /* 0C0B051E mov.b @Rm,Rn */
	IF(0x0C0B0520u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B0522u, 1);  /* 0C0B0520 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C0B0522 or Rm,Rn */
	W8(r8, r3); UPD(0x0C0B0526u, 2);  /* 0C0B0524 mov.b Rm,@Rn */
L_0C0B0526: BLKS(0x0C0B0526u);
	r0 = 0xB4u; UPD(0x0C0B0528u, 1);  /* 0C0B0526 mov.w @(disp,pc),Rn */
	IF(0x0C0B0528u); MACL = r10 * r0;  /* 0C0B0528 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B052Cu, 3);  /* 0C0B052A mov.l @(disp,pc),Rn */
	IF(0x0C0B052Cu); r0 = MACL;  /* 0C0B052C sts macl,Rn */
	r0 += r4;  /* 0C0B052E add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C0B0532u, 3);  /* 0C0B0530 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r5 = v_; } UPD(0x0C0B0534u, 1);  /* 0C0B0532 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C0B0534 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B0570u, 4); goto L_0C0B0570; } goto L_0C0B053A; }  /* 0C0B0536 bt/s */
L_0C0B053A: BLKS(0x0C0B053Au);
	r11 = 0xA9u; UPD(0x0C0B053Cu, 2);  /* 0C0B053A mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C0B053C add Rm,Rn */
	IF(0x0C0B053Eu); ;  /* 0C0B053E nop */
	UPD(0x0C0B0540u, 2);
L_0C0B0540: BLKS(0x0C0B0540u);
	r8 += 0x4u;  /* 0C0B0540 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C0B0544u, 2);  /* 0C0B0542 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0544 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B0548u, 2);  /* 0C0B0546 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B0548 add Rm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C0B054Cu, 2);  /* 0C0B054A mov.l @Rm+,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0B054Eu, 1);  /* 0C0B054C mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0B054E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0552u, 2);  /* 0C0B0550 mov.w @(disp,pc),Rn */
	IF(0x0C0B0552u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0554u, 1);  /* 0C0B0552 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0B0554 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0558u, 2);  /* 0C0B0556 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B055Au, 1);  /* 0C0B0558 mov.b @Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B055Cu, 1);  /* 0C0B055A mov.l @(disp,pc),Rn */
	r3 = r5 & 0xFF;  /* 0C0B055C extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B0560u, 2);  /* 0C0B055E mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C0B0560 mov #imm,Rn */
	IF(0x0C0B0562u); { u32 t_ = r0; PR = 0x0C0B0566u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0566u); }  /* 0C0B0562 jsr @Rn */
L_0C0B0566: BLKS(0x0C0B0566u);
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C0B0568u, 1);  /* 0C0B0566 mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C0B0568 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0540u, 4); goto L_0C0B0540; } goto L_0C0B056E; }  /* 0C0B056A bf/s */
L_0C0B056E: BLKS(0x0C0B056Eu);
	IF(0x0C0B056Eu); ;  /* 0C0B056E nop */
	UPD(0x0C0B0570u, 2);
L_0C0B0570: BLKS(0x0C0B0570u);
	r9 = 0xB4u; UPD(0x0C0B0572u, 1);  /* 0C0B0570 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0B0572 mov #imm,Rn */
	IF(0x0C0B0574u); MACL = r10 * r9;  /* 0C0B0574 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0578u, 4);  /* 0C0B0576 mov.l @(disp,pc),Rn */
	IF(0x0C0B0578u); r0 = MACL;  /* 0C0B0578 sts macl,Rn */
	{ IF(0x0C0B057Cu); W32(r0 + r6, r8); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B0020u, 4); goto L_0C0B0020; }  /* 0C0B057A bra */
L_0C0B05B0: BLKS(0x0C0B05B0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B05B2u, 1);  /* 0C0B05B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05B2u); { u32 t_ = r11; PR = 0x0C0B05B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B05B6u); }  /* 0C0B05B2 jsr @Rn */
L_0C0B05B6: BLKS(0x0C0B05B6u);
	r7 = 0xB4u; UPD(0x0C0B05B8u, 1);  /* 0C0B05B6 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B05B8 add #imm,Rn */
	IF(0x0C0B05BAu); MACL = r10 * r7;  /* 0C0B05BA mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B05BEu, 4);  /* 0C0B05BC mov.l @(disp,pc),Rn */
	IF(0x0C0B05BEu); r8 = MACL;  /* 0C0B05BE sts macl,Rn */
	r8 += r0;  /* 0C0B05C0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B05C4u, 3);  /* 0C0B05C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B05C4u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B05C6u, 1);  /* 0C0B05C4 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0B05C6 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B05CAu, 2);  /* 0C0B05C8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B05CA add #imm,Rn */
	IF(0x0C0B05CCu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B05CEu, 2);  /* 0C0B05CC mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0B05CE extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B05D2u, 2);  /* 0C0B05D0 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C0B05D2 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 4); goto L_0C0B010A; }  /* 0C0B05D4 bra */
L_0C0B05E0: BLKS(0x0C0B05E0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B05E2u, 1);  /* 0C0B05E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05E2u); { u32 t_ = r11; PR = 0x0C0B05E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B05E6u); }  /* 0C0B05E2 jsr @Rn */
L_0C0B05E6: BLKS(0x0C0B05E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B05E6 exts.w Rm,Rn */
	IF(0x0C0B05E8u); T = (s32)r4 >= 0;  /* 0C0B05E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B05FEu, 5); goto L_0C0B05FE; }  /* 0C0B05EA bf */
L_0C0B05EC: BLKS(0x0C0B05ECu);
	r9 = 0xB4u; UPD(0x0C0B05EEu, 1);  /* 0C0B05EC mov.w @(disp,pc),Rn */
	IF(0x0C0B05EEu); MACL = r4 * r9;  /* 0C0B05EE mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B05F2u, 3);  /* 0C0B05F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05F2u); r0 = MACL;  /* 0C0B05F2 sts macl,Rn */
	r0 += r2;  /* 0C0B05F4 add Rm,Rn */
	r8 = R32(r0); UPD(0x0C0B05F8u, 3);  /* 0C0B05F6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B05FAu, 1);  /* 0C0B05F8 mov.w @(disp,pc),Rn */
	r8 |= r1;  /* 0C0B05FA or Rm,Rn */
	W32(r0, r8); UPD(0x0C0B05FEu, 2);  /* 0C0B05FC mov.l Rm,@Rn */
L_0C0B05FE: BLKS(0x0C0B05FEu);
	r11 = 0xC0AF0E0u; UPD(0x0C0B0600u, 1);  /* 0C0B05FE mov.l @(disp,pc),Rn */
	IF(0x0C0B0600u); { u32 t_ = r11; PR = 0x0C0B0604u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AF0E0, 0x0C0AF0E0u, 0x0C0B0604u); }  /* 0C0B0600 jsr @Rn */
L_0C0B0604: BLKS(0x0C0B0604u);
	{ IF(0x0C0B0606u); ; /* slot nop */ UPD(0x0C0B022Cu, 3); goto L_0C0B022C; }  /* 0C0B0604 bra */
L_0C0B0610: BLKS(0x0C0B0610u);
	r8 = 0xB4u; UPD(0x0C0B0612u, 1);  /* 0C0B0610 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0612 add #imm,Rn */
	IF(0x0C0B0614u); MACL = r10 * r8;  /* 0C0B0614 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0618u, 4);  /* 0C0B0616 mov.l @(disp,pc),Rn */
	IF(0x0C0B0618u); r8 = MACL;  /* 0C0B0618 sts macl,Rn */
	r8 += r0;  /* 0C0B061A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B061Eu, 3);  /* 0C0B061C mov.w @(disp,pc),Rn */
	IF(0x0C0B061Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0620u, 1);  /* 0C0B061E mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0B0620 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B0624u, 2);  /* 0C0B0622 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0624 add #imm,Rn */
	IF(0x0C0B0626u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0628u, 2);  /* 0C0B0626 mov.b @(r0,Rm),Rn */
	r5 = r7 & 0xFF;  /* 0C0B0628 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B062Cu, 2);  /* 0C0B062A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B062Eu, 1);  /* 0C0B062C mov.l @Rm,Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B062E bra */
L_0C0B0640: BLKS(0x0C0B0640u);
	r5 = 0xB4u; UPD(0x0C0B0642u, 1);  /* 0C0B0640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0642 add #imm,Rn */
	IF(0x0C0B0644u); MACL = r10 * r5;  /* 0C0B0644 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0648u, 4);  /* 0C0B0646 mov.l @(disp,pc),Rn */
	IF(0x0C0B0648u); r9 = MACL;  /* 0C0B0648 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B064Cu, 2);  /* 0C0B064A mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0B064C add Rm,Rn */
	IF(0x0C0B064Eu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0650u, 2);  /* 0C0B064E mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B0650 mov #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C0B0652 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0656u, 3);  /* 0C0B0654 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0656 add #imm,Rn */
	IF(0x0C0B0658u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B065Au, 2);  /* 0C0B0658 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0B065Cu, 1);  /* 0C0B065A mov.l @(disp,pc),Rn */
	r0 = r11 & 0xFF;  /* 0C0B065C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B0660u, 2);  /* 0C0B065E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B0662u, 1);  /* 0C0B0660 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B0664u, 1);  /* 0C0B0662 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0664u); { u32 t_ = r8; PR = 0x0C0B0668u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0668u); }  /* 0C0B0664 jsr @Rn */
L_0C0B0668: BLKS(0x0C0B0668u);
	r2 = 0x0u;  /* 0C0B0668 mov #imm,Rn */
	W32(r9, r2); UPD(0x0C0B066Cu, 2);  /* 0C0B066A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0420u, 3); goto L_0C0B0420; }  /* 0C0B066C bra */
L_0C0B0670: BLKS(0x0C0B0670u);
	r7 = 0xB4u; UPD(0x0C0B0672u, 1);  /* 0C0B0670 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0672 add #imm,Rn */
	IF(0x0C0B0674u); MACL = r10 * r7;  /* 0C0B0674 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0678u, 4);  /* 0C0B0676 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B067Au, 1);  /* 0C0B0678 mov.w @(disp,pc),Rn */
	IF(0x0C0B067Au); r8 = MACL;  /* 0C0B067A sts macl,Rn */
	r8 += r5;  /* 0C0B067C add Rm,Rn */
	IF(0x0C0B067Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0680u, 3);  /* 0C0B067E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B0680 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B0682 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0686u, 3);  /* 0C0B0684 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0686 add #imm,Rn */
	IF(0x0C0B0688u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B068Au, 2);  /* 0C0B0688 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B068A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B068Eu, 2);  /* 0C0B068C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B068E bra */
L_0C0B06A0: BLKS(0x0C0B06A0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0B06A2u, 1);  /* 0C0B06A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B06A2u); { u32 t_ = r11; PR = 0x0C0B06A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B06A6u); }  /* 0C0B06A2 jsr @Rn */
L_0C0B06A6: BLKS(0x0C0B06A6u);
	IF(0x0C0B06A6u); T = (s32)r0 >= 0;  /* 0C0B06A6 cmp/pz Rn */
	if (!T) { UPD(0x0C0B06F2u, 4); goto L_0C0B06F2; }  /* 0C0B06A8 bf */
L_0C0B06AA: BLKS(0x0C0B06AAu);
	r15 += 0xFFFFFFF8u;  /* 0C0B06AA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C0B06AEu, 2);  /* 0C0B06AC mov.w @(disp,pc),Rn */
	IF(0x0C0B06AEu); MACL = r10 * r7;  /* 0C0B06AE mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B06B2u, 3);  /* 0C0B06B0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B06B2 mov #imm,Rn */
	IF(0x0C0B06B4u); r0 = MACL;  /* 0C0B06B4 sts macl,Rn */
	r0 += r9;  /* 0C0B06B6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B06B8 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B06BCu, 5);  /* 0C0B06BA mov.w @Rm,Rn */
	IF(0x0C0B06BCu); MACL = r3 * r7;  /* 0C0B06BC mul.l Rm,Rn */
	r11 = 0xA1u; UPD(0x0C0B06C0u, 3);  /* 0C0B06BE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B06C0 add #imm,Rn */
	IF(0x0C0B06C2u); r6 = MACL;  /* 0C0B06C2 sts macl,Rn */
	r6 += r9;  /* 0C0B06C4 add Rm,Rn */
	r7 += 0xFFFFFFF1u;  /* 0C0B06C6 add #imm,Rn */
	r6 += r7;  /* 0C0B06C8 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B06CCu, 6);  /* 0C0B06CA mov.b @Rm,Rn */
	IF(0x0C0B06CCu); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B06CEu, 1);  /* 0C0B06CC mov.b @(r0,Rm),Rn */
	r2 = 0xA9u; UPD(0x0C0B06D0u, 1);  /* 0C0B06CE mov.w @(disp,pc),Rn */
	r8 |= r1;  /* 0C0B06D0 or Rm,Rn */
	IF(0x0C0B06D2u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B06D4u, 2);  /* 0C0B06D2 mov.b @(r0,Rm),Rn */
	W8(r6, r8); UPD(0x0C0B06D6u, 1);  /* 0C0B06D4 mov.b Rm,@Rn */
	r7 = r5 & 0xFF;  /* 0C0B06D6 extu.b Rm,Rn */
	r3 = 0x20000u; UPD(0x0C0B06DAu, 2);  /* 0C0B06D8 mov.l @(disp,pc),Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B06DCu, 1);  /* 0C0B06DA mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B06DEu, 1);  /* 0C0B06DC mov.l Rm,@(disp,Rn) */
	W32(r15, r3); UPD(0x0C0B06E0u, 1);  /* 0C0B06DE mov.l Rm,@Rn */
	r4 = 0x9u;  /* 0C0B06E0 mov #imm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B06E4u, 2);  /* 0C0B06E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B06E4u); { u32 t_ = r9; PR = 0x0C0B06E8u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B06E8u); }  /* 0C0B06E4 jsr @Rn */
L_0C0B06E8: BLKS(0x0C0B06E8u);
	r7 = 0xC175064u; UPD(0x0C0B06EAu, 1);  /* 0C0B06E8 mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0B06ECu, 1);  /* 0C0B06EA mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B06EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0710u, 4); goto L_0C0B0710; } UPD(0x0C0B06F2u, 1); goto L_0C0B06F2; }  /* 0C0B06EE bt/s */
L_0C0B06F2: BLKS(0x0C0B06F2u);
	r6 = 0xB4u; UPD(0x0C0B06F4u, 1);  /* 0C0B06F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B06F4u); MACL = r10 * r6;  /* 0C0B06F4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B06F8u, 3);  /* 0C0B06F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B06F8u); r5 = MACL;  /* 0C0B06F8 sts macl,Rn */
	r4 += r5;  /* 0C0B06FA add Rm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C0B06FEu, 3);  /* 0C0B06FC mov.l @(disp,Rm),Rn */
	r2 = 0xC1E4BCCu; UPD(0x0C0B0700u, 1);  /* 0C0B06FE mov.l @(disp,pc),Rn */
	IF(0x0C0B0700u); r0 <<= 2;  /* 0C0B0700 shll2 Rn */
	IF(0x0C0B0702u); r5 = R32(r0 + r2); UPD(0x0C0B0704u, 2);  /* 0C0B0702 mov.l @(r0,Rm),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B02E2u, 3); goto L_0C0B02E2; }  /* 0C0B0704 bra */
L_0C0B0710: BLKS(0x0C0B0710u);
	r0 = 0xC071C90u; UPD(0x0C0B0712u, 1);  /* 0C0B0710 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B0714u, 1);  /* 0C0B0712 mov.l @(disp,pc),Rn */
	IF(0x0C0B0714u); { u32 t_ = r0; PR = 0x0C0B0718u; IF(0x0C0B0716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B0718u); }  /* 0C0B0714 jsr @Rn */
L_0C0B0718: BLKS(0x0C0B0718u);
	{ IF(0x0C0B071Au); ; /* slot nop */ UPD(0x0C0B06F2u, 3); goto L_0C0B06F2; }  /* 0C0B0718 bra */
}

void blk_f_0C0B0930(sh3_t *c)
{
	LOCALS;
L_0C0B0930: BLKS(0x0C0B0930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0932u, 1);  /* 0C0B0930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0934u, 1);  /* 0C0B0932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0936u, 1);  /* 0C0B0934 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0938u, 1);  /* 0C0B0936 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B093Au, 1);  /* 0C0B0938 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B093Cu, 1);  /* 0C0B093A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0B093C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0940u, 2);  /* 0C0B093E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0B0940 exts.w Rm,Rn */
	IF(0x0C0B0942u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0944u, 2);  /* 0C0B0942 sts.l pr,@-Rn */
	r7 = 0xB4u; UPD(0x0C0B0946u, 1);  /* 0C0B0944 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B0946 add #imm,Rn */
	r14 = r15;  /* 0C0B0948 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0B094Cu, 3);  /* 0C0B094A mov.l Rm,@Rn */
	IF(0x0C0B094Cu); MACL = r12 * r7;  /* 0C0B094C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0950u, 3);  /* 0C0B094E mov.l @(disp,pc),Rn */
	IF(0x0C0B0950u); r9 = MACL;  /* 0C0B0950 sts macl,Rn */
	r9 += r6;  /* 0C0B0952 add Rm,Rn */
	r5 = 0x8Cu; UPD(0x0C0B0956u, 3);  /* 0C0B0954 mov.w @(disp,pc),Rn */
	r11 = r9;  /* 0C0B0956 mov Rm,Rn */
	r11 += r5;  /* 0C0B0958 add Rm,Rn */
	r2 = R32(r11); UPD(0x0C0B095Cu, 3);  /* 0C0B095A mov.l @Rm,Rn */
	IF(0x0C0B095Cu); T = (s32)r2 > 0;  /* 0C0B095C cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0B0960u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C0B096Cu, 4); goto L_0C0B096C; } goto L_0C0B0962; }  /* 0C0B095E bf/s */
L_0C0B0962: BLKS(0x0C0B0962u);
	r0 = 0xFFFFC000u; UPD(0x0C0B0964u, 2);  /* 0C0B0962 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0B0964 add Rm,Rn */
	W32(r11, r0); UPD(0x0C0B0968u, 2);  /* 0C0B0966 mov.l Rm,@Rn */
	r2 = r0;  /* 0C0B0968 mov Rm,Rn */
	IF(0x0C0B096Au); T = (s32)r2 >= 0;  /* 0C0B096A cmp/pz Rn */
	UPD(0x0C0B096Cu, 2);
L_0C0B096C: BLKS(0x0C0B096Cu);
	if (T) { UPD(0x0C0B0972u, 3); goto L_0C0B0972; }  /* 0C0B096C bt */
L_0C0B096E: BLKS(0x0C0B096Eu);
	{ IF(0x0C0B0970u); ; /* slot nop */ UPD(0x0C0B0A80u, 3); goto L_0C0B0A80; }  /* 0C0B096E bra */
L_0C0B0972: BLKS(0x0C0B0972u);
	r4 = R32(r9); UPD(0x0C0B0974u, 1);  /* 0C0B0972 mov.l @Rm,Rn */
	IF(0x0C0B0974u); MACL = r13 * r7;  /* 0C0B0974 mul.l Rm,Rn */
	r8 = 0xECFFFEFFu; UPD(0x0C0B0978u, 3);  /* 0C0B0976 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C0B0978 mov Rm,Rn */
	r4 &= r8;  /* 0C0B097A and Rm,Rn */
	W32(r9, r4); UPD(0x0C0B097Eu, 3);  /* 0C0B097C mov.l Rm,@Rn */
	IF(0x0C0B097Eu); r8 = MACL;  /* 0C0B097E sts macl,Rn */
	r8 += r6;  /* 0C0B0980 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C0B0984u, 3);  /* 0C0B0982 mov.l @Rm,Rn */
	r10 += r8;  /* 0C0B0984 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B0988u, 2);  /* 0C0B0986 mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0x38u); UPD(0x0C0B098Au, 1);  /* 0C0B0988 mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C0B098A and Rm,Rn */
	r4 |= r6;  /* 0C0B098C or Rm,Rn */
	r2 = R32(r10); UPD(0x0C0B0990u, 3);  /* 0C0B098E mov.l @Rm,Rn */
	W32(r9, r4); UPD(0x0C0B0992u, 1);  /* 0C0B0990 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C0B0992 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B0A00u, 4); goto L_0C0B0A00; } UPD(0x0C0B0998u, 1); goto L_0C0B0998; }  /* 0C0B0994 bf/s */
L_0C0B0998: BLKS(0x0C0B0998u);
	r2 = 0xB4u; UPD(0x0C0B099Au, 1);  /* 0C0B0998 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFFFAu;  /* 0C0B099A mov #imm,Rn */
	IF(0x0C0B099Cu); MACL = r12 * r2;  /* 0C0B099C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B09A0u, 4);  /* 0C0B099E mov.l @(disp,pc),Rn */
	IF(0x0C0B09A0u); r11 = MACL;  /* 0C0B09A0 sts macl,Rn */
	IF(0x0C0B09A2u); MACL = r13 * r2;  /* 0C0B09A2 mul.l Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0B09A6u, 4);  /* 0C0B09A4 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C0B09A6 add Rm,Rn */
	IF(0x0C0B09A8u); r10 = R32(r0 + r11); UPD(0x0C0B09AAu, 2);  /* 0C0B09A8 mov.l @(r0,Rm),Rn */
	IF(0x0C0B09AAu); r13 = MACL;  /* 0C0B09AA sts macl,Rn */
	r13 += r7;  /* 0C0B09AC add Rm,Rn */
	r3 = 0x86u; UPD(0x0C0B09B0u, 3);  /* 0C0B09AE mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0B09B0 mov Rm,Rn */
	IF(0x0C0B09B2u); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B09B4u, 2);  /* 0C0B09B2 mov.w @(r0,Rm),Rn */
	IF(0x0C0B09B4u); ARG0(0x479Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C0B09B4 shad Rm,Rn */
	r8 = R32(r13 + 0x24u); UPD(0x0C0B09B8u, 2);  /* 0C0B09B6 mov.l @(disp,Rm),Rn */
	r7 += 0x1Eu;  /* 0C0B09B8 add #imm,Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C0B09BCu, 2);  /* 0C0B09BA mov.l @(disp,Rm),Rn */
	r0 = 0x7Fu;  /* 0C0B09BC mov #imm,Rn */
	IF(0x0C0B09BEu); r7 >>= 2;  /* 0C0B09BE shlr2 Rn */
	r7 &= r0;  /* 0C0B09C0 and Rm,Rn */
	r13 += 0x50u;  /* 0C0B09C2 add #imm,Rn */
	r6 = R32(r11 + 0x2Cu); UPD(0x0C0B09C6u, 5);  /* 0C0B09C4 mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x30u); UPD(0x0C0B09C8u, 1);  /* 0C0B09C6 mov.l @(disp,Rm),Rn */
	r8 += r6;  /* 0C0B09C8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B09CCu, 2);  /* 0C0B09CA mov.w @Rm,Rn */
	r4 += r5;  /* 0C0B09CC add Rm,Rn */
	r2 = R32(r14); UPD(0x0C0B09D0u, 2);  /* 0C0B09CE mov.l @Rm,Rn */
	IF(0x0C0B09D0u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B09D0 shar Rn */
	r8 += r10;  /* 0C0B09D2 add Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C0B09D6u, 3);  /* 0C0B09D4 mov.l Rm,@(disp,Rn) */
	r7 += r2;  /* 0C0B09D6 add Rm,Rn */
	r0 &= 0x7u;  /* 0C0B09D8 and #imm,r0 */
	W32(r11 + 0x24u, r8); UPD(0x0C0B09DCu, 3);  /* 0C0B09DA mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0B09DC mov Rm,Rn */
	W32(r11 + 0x8u, r7); UPD(0x0C0B09E0u, 2);  /* 0C0B09DE mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C0B09E0 add #imm,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B09E4u, 2);  /* 0C0B09E2 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0A8B10u; UPD(0x0C0B09E6u, 1);  /* 0C0B09E4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0B09E6 mov Rm,Rn */
	IF(0x0C0B09E8u); PR = R32(r15); r15 += 4; UPD(0x0C0B09EAu, 2);  /* 0C0B09E8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B09ECu, 1);  /* 0C0B09EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B09EEu, 1);  /* 0C0B09EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B09F0u, 1);  /* 0C0B09EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B09F2u, 1);  /* 0C0B09F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B09F4u, 1);  /* 0C0B09F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B09F6u, 1);  /* 0C0B09F4 mov.l @Rm+,Rn */
	IF(0x0C0B09F6u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C0B09F6 jmp @Rn */
L_0C0B0A00: BLKS(0x0C0B0A00u);
	r0 = 0xC0C2360u; UPD(0x0C0B0A02u, 1);  /* 0C0B0A00 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A02u); { u32 t_ = r0; PR = 0x0C0B0A06u; IF(0x0C0B0A04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B0A06u); }  /* 0C0B0A02 jsr @Rn */
L_0C0B0A06: BLKS(0x0C0B0A06u);
	r5 = 0x7FFu; UPD(0x0C0B0A08u, 1);  /* 0C0B0A06 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0B0A08 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B0A60u, 4); goto L_0C0B0A60; }  /* 0C0B0A0A bf */
L_0C0B0A0C: BLKS(0x0C0B0A0Cu);
	r0 = 0x86u; UPD(0x0C0B0A0Eu, 1);  /* 0C0B0A0C mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C0B0A0E mov #imm,Rn */
	IF(0x0C0B0A10u); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B0A12u, 2);  /* 0C0B0A10 mov.w @(r0,Rm),Rn */
	r0 = R32(r10); UPD(0x0C0B0A14u, 1);  /* 0C0B0A12 mov.l @Rm,Rn */
	IF(0x0C0B0A14u); T = (s32)r0 > 0;  /* 0C0B0A14 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0B0A18u); ARG0(0x4B2Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0B0A20u, 4); goto L_0C0B0A20; } goto L_0C0B0A1A; }  /* 0C0B0A16 bf/s */
L_0C0B0A1A: BLKS(0x0C0B0A1Au);
	r10 = 0x100u; UPD(0x0C0B0A1Cu, 2);  /* 0C0B0A1A mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C0B0A1C add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0B0A1E exts.w Rm,Rn */
	UPD(0x0C0B0A20u, 2);
L_0C0B0A20: BLKS(0x0C0B0A20u);
	r10 = 0xC069B20u; UPD(0x0C0B0A22u, 1);  /* 0C0B0A20 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C0B0A24u, 1);  /* 0C0B0A22 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A24u); { u32 t_ = r10; PR = 0x0C0B0A28u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B0A28u); }  /* 0C0B0A24 jsr @Rn */
L_0C0B0A28: BLKS(0x0C0B0A28u);
	r8 = 0xC069AF0u; UPD(0x0C0B0A2Au, 1);  /* 0C0B0A28 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0B0A2A mov Rm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C0B0A2Eu, 2);  /* 0C0B0A2C mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0B0A30u, 1);  /* 0C0B0A2E mov.l @(disp,pc),Rn */
	IF(0x0C0B0A30u); { u32 t_ = r8; PR = 0x0C0B0A34u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B0A34u); }  /* 0C0B0A30 jsr @Rn */
L_0C0B0A34: BLKS(0x0C0B0A34u);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B0A36u, 1);  /* 0C0B0A34 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B0A36 add #imm,Rn */
	r6 += r0;  /* 0C0B0A38 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0A3Cu, 3);  /* 0C0B0A3A mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0B0A3C mov #imm,Rn */
	IF(0x0C0B0A3Eu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0A40u, 2);  /* 0C0B0A3E mov.b @(r0,Rm),Rn */
	r5 = 0xA9u; UPD(0x0C0B0A42u, 1);  /* 0C0B0A40 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B0A42 mov Rm,Rn */
	IF(0x0C0B0A44u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B0A46u, 2);  /* 0C0B0A44 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0B0A46 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B0A4Au, 2);  /* 0C0B0A48 mov.l Rm,@(disp,Rn) */
	r4 = r8 & 0xFF;  /* 0C0B0A4A extu.b Rm,Rn */
	r3 += 0x7Du;  /* 0C0B0A4C add #imm,Rn */
	W32(r15, r4); UPD(0x0C0B0A50u, 3);  /* 0C0B0A4E mov.l Rm,@Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C0B0A52u, 1);  /* 0C0B0A50 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C0B0A54u, 1);  /* 0C0B0A52 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B0A56u, 1);  /* 0C0B0A54 mov.l @Rm,Rn */
	r9 = 0xC0BCE80u; UPD(0x0C0B0A58u, 1);  /* 0C0B0A56 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A58u); { u32 t_ = r9; PR = 0x0C0B0A5Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCE80, 0x0C0BCE80u, 0x0C0B0A5Cu); }  /* 0C0B0A58 jsr @Rn */
L_0C0B0A5C: BLKS(0x0C0B0A5Cu);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0B0998u, 3); goto L_0C0B0998; }  /* 0C0B0A5C bra */
L_0C0B0A60: BLKS(0x0C0B0A60u);
	r0 = 0xC062780u; UPD(0x0C0B0A62u, 1);  /* 0C0B0A60 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A62u); { u32 t_ = r0; PR = 0x0C0B0A66u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B0A66u); }  /* 0C0B0A62 jsr @Rn */
L_0C0B0A66: BLKS(0x0C0B0A66u);
	r7 = R32(r11); UPD(0x0C0B0A68u, 1);  /* 0C0B0A66 mov.l @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0B0A68 add #imm,Rn */
	IF(0x0C0B0A6Au); r0 <<= 16;  /* 0C0B0A6A shll16 Rn */
	r7 += r0;  /* 0C0B0A6C add Rm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0A0Cu, 6); goto L_0C0B0A0C; }  /* 0C0B0A6E bra */
L_0C0B0A80: BLKS(0x0C0B0A80u);
	r0 = 0x4000u; UPD(0x0C0B0A82u, 1);  /* 0C0B0A80 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0B0A82 add Rm,Rn */
	{ W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0972u, 4); goto L_0C0B0972; }  /* 0C0B0A84 bra */
}

void blk_f_0C0B0AD0(sh3_t *c)
{
	LOCALS;
L_0C0B0AD0: BLKS(0x0C0B0AD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD2u, 1);  /* 0C0B0AD0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0B0AD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD6u, 2);  /* 0C0B0AD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD8u, 1);  /* 0C0B0AD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0ADAu, 1);  /* 0C0B0AD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0ADCu, 1);  /* 0C0B0ADA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0B0ADEu, 1);  /* 0C0B0ADC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AE0u, 1);  /* 0C0B0ADE mov.l Rm,@-Rn */
	IF(0x0C0B0AE0u); MACL = r1 * r3;  /* 0C0B0AE0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AE4u, 3);  /* 0C0B0AE2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B0AE6u, 1);  /* 0C0B0AE4 mov.l @(disp,pc),Rn */
	IF(0x0C0B0AE6u); r2 = MACL;  /* 0C0B0AE6 sts macl,Rn */
	IF(0x0C0B0AE8u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0AEAu, 2);  /* 0C0B0AE8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0B0AEA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0B0AEEu, 2);  /* 0C0B0AEC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFBCu;  /* 0C0B0AEE add #imm,Rn */
	r14 = r15;  /* 0C0B0AF0 mov Rm,Rn */
	r0 = 0x4Eu;  /* 0C0B0AF2 mov #imm,Rn */
	T = r2 > r0;  /* 0C0B0AF4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B0AFEu, 7); goto L_0C0B0AFE; } UPD(0x0C0B0AFAu, 1); goto L_0C0B0AFA; }  /* 0C0B0AF6 bf/s */
L_0C0B0AFA: BLKS(0x0C0B0AFAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0AFA bra */
L_0C0B0AFE: BLKS(0x0C0B0AFEu);
	r0 = 0xC0B0B10u;  /* 0C0B0AFE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B0B00 add Rm,Rn */
	IF(0x0C0B0B02u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B0B04u, 3);  /* 0C0B0B02 mov.w @(r0,Rm),Rn */
	IF(0x0C0B0B04u); { u32 tv_ = (r4 + 0x0C0B0B08u); u32 t_ = PHYS(tv_); IF(0x0C0B0B06u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0B04 braf Rn */
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
}

void blk_f_0C0B46E0(sh3_t *c)
{
	LOCALS;
L_0C0B46E0: BLKS(0x0C0B46E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46E2u, 1);  /* 0C0B46E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46E4u, 1);  /* 0C0B46E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46E6u, 1);  /* 0C0B46E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46E8u, 1);  /* 0C0B46E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46EAu, 1);  /* 0C0B46E8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46ECu, 1);  /* 0C0B46EA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B46EEu, 1);  /* 0C0B46EC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C0B46F0u, 1);  /* 0C0B46EE mov.l @(disp,pc),Rn */
	IF(0x0C0B46F0u); r15 -= 4; W32(r15, PR); UPD(0x0C0B46F2u, 1);  /* 0C0B46F0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0B46F4u, 1);  /* 0C0B46F2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0B46F4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B46F8u, 2);  /* 0C0B46F6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0B46F8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0B46FCu, 2);  /* 0C0B46FA mov.l @(disp,pc),Rn */
	IF(0x0C0B46FCu); { u32 t_ = r8; PR = 0x0C0B4700u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0B4700u); }  /* 0C0B46FC jsr @Rn */
L_0C0B4700: BLKS(0x0C0B4700u);
	T = (r0 & r0) == 0;  /* 0C0B4700 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B4720u, 4); goto L_0C0B4720; } UPD(0x0C0B4706u, 1); goto L_0C0B4706; }  /* 0C0B4702 bf/s */
L_0C0B4706: BLKS(0x0C0B4706u);
	r14 += 0xCu;  /* 0C0B4706 add #imm,Rn */
	r15 = r14;  /* 0C0B4708 mov Rm,Rn */
	IF(0x0C0B470Au); PR = R32(r15); r15 += 4; UPD(0x0C0B470Cu, 3);  /* 0C0B470A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B470Eu, 1);  /* 0C0B470C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B4710u, 1);  /* 0C0B470E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B4712u, 1);  /* 0C0B4710 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B4714u, 1);  /* 0C0B4712 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B4716u, 1);  /* 0C0B4714 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B4718u, 1);  /* 0C0B4716 mov.l @Rm+,Rn */
	IF(0x0C0B4718u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B4718 rts */
L_0C0B4720: BLKS(0x0C0B4720u);
	r8 = 0xC071740u; UPD(0x0C0B4722u, 1);  /* 0C0B4720 mov.l @(disp,pc),Rn */
	IF(0x0C0B4722u); { u32 t_ = r8; PR = 0x0C0B4726u; r4 = 0x6Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0B4726u); }  /* 0C0B4722 jsr @Rn */
L_0C0B4726: BLKS(0x0C0B4726u);
	T = (r0 & r0) == 0;  /* 0C0B4726 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B4706u, 4); goto L_0C0B4706; } goto L_0C0B472C; }  /* 0C0B4728 bt/s */
L_0C0B472C: BLKS(0x0C0B472Cu);
	r5 = 0xC28EDFCu; UPD(0x0C0B472Eu, 2);  /* 0C0B472C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0B4730u, 1);  /* 0C0B472E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r10 = v_; } UPD(0x0C0B4732u, 1);  /* 0C0B4730 mov.w @Rm+,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B4734u, 1);  /* 0C0B4732 mov.w @Rm,Rn */
	IF(0x0C0B4734u); MACL = r10 * r8;  /* 0C0B4734 mul.l Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0B4738u, 3);  /* 0C0B4736 mov.l Rm,@(disp,Rn) */
	r9 = r0 & 0xFFFF;  /* 0C0B4738 extu.w Rm,Rn */
	r6 = 0xC2B1811u; UPD(0x0C0B473Cu, 2);  /* 0C0B473A mov.l @(disp,pc),Rn */
	IF(0x0C0B473Cu); r8 = MACL;  /* 0C0B473C sts macl,Rn */
	r13 = 0xC2B03A2u; UPD(0x0C0B4740u, 2);  /* 0C0B473E mov.l @(disp,pc),Rn */
	r4 = 0xC286578u; UPD(0x0C0B4742u, 1);  /* 0C0B4740 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B4744u, 1);  /* 0C0B4742 mov.b @Rm,Rn */
	r8 += r4;  /* 0C0B4744 add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B4748u, 2);  /* 0C0B4746 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0B4748 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0B474Cu, 2);  /* 0C0B474A mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C0B474C mov #imm,Rn */
	IF(0x0C0B474Eu); W16(r0 + r8, r12); UPD(0x0C0B4750u, 2);  /* 0C0B474E mov.w Rm,@(r0,Rn) */
	r13 += r14;  /* 0C0B4750 add Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0B4752 add #imm,Rn */
	IF(0x0C0B4754u); W16(r0 + r8, r12); UPD(0x0C0B4756u, 3);  /* 0C0B4754 mov.w Rm,@(r0,Rn) */
	r11 = 0xC0A8A30u; UPD(0x0C0B4758u, 1);  /* 0C0B4756 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0B4758 mov #imm,Rn */
	r2 = 0xE0008010u; UPD(0x0C0B475Cu, 2);  /* 0C0B475A mov.l @(disp,pc),Rn */
	W32(r14, r3); UPD(0x0C0B475Eu, 1);  /* 0C0B475C mov.l Rm,@Rn */
	W32(r8, r2); UPD(0x0C0B4760u, 1);  /* 0C0B475E mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0B4762u, 1);  /* 0C0B4760 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r12); UPD(0x0C0B4764u, 1);  /* 0C0B4762 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B4764u); { u32 t_ = r11; PR = 0x0C0B4768u; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0B4768u); }  /* 0C0B4764 jsr @Rn */
L_0C0B4768: BLKS(0x0C0B4768u);
	r1 = R32(r14); UPD(0x0C0B476Au, 1);  /* 0C0B4768 mov.l @Rm,Rn */
	r5 = 0x4Cu;  /* 0C0B476A mov #imm,Rn */
	IF(0x0C0B476Cu); MACL = r1 * r5;  /* 0C0B476C mul.l Rm,Rn */
	r7 = 0xC237C08u; UPD(0x0C0B4770u, 4);  /* 0C0B476E mov.l @(disp,pc),Rn */
	r6 = 0xC286318u; UPD(0x0C0B4772u, 1);  /* 0C0B4770 mov.l @(disp,pc),Rn */
	IF(0x0C0B4772u); r11 = MACL;  /* 0C0B4772 sts macl,Rn */
	r11 += r6;  /* 0C0B4774 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0B4778u, 3);  /* 0C0B4776 mov.w @Rm,Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C0B477Au, 1);  /* 0C0B4778 mov.l @(disp,Rm),Rn */
	IF(0x0C0B477Au); r4 <<= 16;  /* 0C0B477A shll16 Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0B477Eu, 2);  /* 0C0B477C mov.l @(disp,pc),Rn */
	r4 -= r3;  /* 0C0B477E sub Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B4782u, 2);  /* 0C0B4780 mov.w @Rm,Rn */
	r11 += 0x42u;  /* 0C0B4782 add #imm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C0B4786u, 2);  /* 0C0B4784 mov.l @(disp,pc),Rn */
	IF(0x0C0B4786u); r0 <<= 16;  /* 0C0B4786 shll16 Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0B478Au, 2);  /* 0C0B4788 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C0B478Cu, 1);  /* 0C0B478A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B478Cu); { u32 t_ = r9; PR = 0x0C0B4790u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0B4790u); }  /* 0C0B478C jsr @Rn */
L_0C0B4790: BLKS(0x0C0B4790u);
	r9 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4792u, 1);  /* 0C0B4790 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0B4792 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4796u, 2);  /* 0C0B4794 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C0B4796 mov Rm,Rn */
	IF(0x0C0B4798u); W8(r0 + r8, r9); UPD(0x0C0B479Au, 2);  /* 0C0B4798 mov.b Rm,@(r0,Rn) */
	r9 = 0xACu; UPD(0x0C0B479Cu, 1);  /* 0C0B479A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B479C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B47A0u, 2);  /* 0C0B479E mov.b @Rm,Rn */
	r9 += r8;  /* 0C0B47A0 add Rm,Rn */
	r7 = r5;  /* 0C0B47A2 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0B47A4 add #imm,Rn */
	r9 += 0x1u;  /* 0C0B47A6 add #imm,Rn */
	r10 = 0xC0A9D30u; UPD(0x0C0B47AAu, 5);  /* 0C0B47A8 mov.l @(disp,pc),Rn */
	IF(0x0C0B47AAu); W8(r0 + r8, r7); UPD(0x0C0B47ACu, 1);  /* 0C0B47AA mov.b Rm,@(r0,Rn) */
	W8(r9, r5); UPD(0x0C0B47AEu, 1);  /* 0C0B47AC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C0B47B0u, 1);  /* 0C0B47AE mov.l @(disp,pc),Rn */
	IF(0x0C0B47B0u); { u32 t_ = r10; PR = 0x0C0B47B4u; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0B47B4u); }  /* 0C0B47B0 jsr @Rn */
L_0C0B47B4: BLKS(0x0C0B47B4u);
	r2 = 0xA0u; UPD(0x0C0B47B6u, 1);  /* 0C0B47B4 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C0B47B6 add Rm,Rn */
	r2 += 0x2u;  /* 0C0B47B8 add #imm,Rn */
	W8(r2, r12); UPD(0x0C0B47BCu, 3);  /* 0C0B47BA mov.b Rm,@Rn */
	r1 = 0x8Cu; UPD(0x0C0B47BEu, 1);  /* 0C0B47BC mov.w @(disp,pc),Rn */
	r4 = 0x94u; UPD(0x0C0B47C0u, 1);  /* 0C0B47BE mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0B47C0 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C0B47C4u, 2);  /* 0C0B47C2 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0B47C4 add Rm,Rn */
	{ u32 v_ = r12; r2 -= 1; W8(r2, v_); } UPD(0x0C0B47C8u, 2);  /* 0C0B47C6 mov.b Rm,@-Rn */
	r3 = 0x808080u; UPD(0x0C0B47CAu, 1);  /* 0C0B47C8 mov.l @(disp,pc),Rn */
	IF(0x0C0B47CAu); W32(r0 + r8, r12); UPD(0x0C0B47CCu, 1);  /* 0C0B47CA mov.l Rm,@(r0,Rn) */
	W32(r4, r12); UPD(0x0C0B47CEu, 1);  /* 0C0B47CC mov.l Rm,@Rn */
	W32(r1, r12); UPD(0x0C0B47D0u, 1);  /* 0C0B47CE mov.l Rm,@Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C0B47D2u, 1);  /* 0C0B47D0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0B47D4u, 1);  /* 0C0B47D2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r3); UPD(0x0C0B47D6u, 1);  /* 0C0B47D4 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0B47D6 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C0B47DAu, 2);  /* 0C0B47D8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B47DAu); ;  /* 0C0B47DA nop */
	UPD(0x0C0B47DCu, 1);
L_0C0B47DC: BLKS(0x0C0B47DCu);
	r11 = R32(r14 + 0x8u); UPD(0x0C0B47DEu, 1);  /* 0C0B47DC mov.l @(disp,Rm),Rn */
	r2 = 0x5u;  /* 0C0B47DE mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C0B47E2u, 2);  /* 0C0B47E0 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C0B47E4u, 1);  /* 0C0B47E2 mov.w @(disp,pc),Rn */
	IF(0x0C0B47E4u); MACL = r10 * r8;  /* 0C0B47E4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B47E8u, 3);  /* 0C0B47E6 mov.l @(disp,pc),Rn */
	IF(0x0C0B47E8u); r8 = MACL;  /* 0C0B47E8 sts macl,Rn */
	r8 += r9;  /* 0C0B47EA add Rm,Rn */
	r9 = r12;  /* 0C0B47EC mov Rm,Rn */
	IF(0x0C0B47EEu); ARG0(0x492Du); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0B47EE shld Rm,Rn */
	r0 = 0xC1E8708u; UPD(0x0C0B47F2u, 5);  /* 0C0B47F0 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0B47F2 add Rm,Rn */
	r9 += 0x4u;  /* 0C0B47F4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r6 = v_; } UPD(0x0C0B47F8u, 3);  /* 0C0B47F6 mov.w @Rm+,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0B47FAu, 1);  /* 0C0B47F8 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C0B47FA add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C0B47FEu, 2);  /* 0C0B47FC mov.l Rm,@(disp,Rn) */
	IF(0x0C0B47FEu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0B4800u, 1);  /* 0C0B47FE mov.w @(r0,Rm),Rn */
	r11 = r8;  /* 0C0B4800 mov Rm,Rn */
	r11 += 0x7Cu;  /* 0C0B4802 add #imm,Rn */
	W16(r11, r7); UPD(0x0C0B4806u, 3);  /* 0C0B4804 mov.w Rm,@Rn */
	r8 += 0x7Eu;  /* 0C0B4806 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B480Au, 2);  /* 0C0B4808 mov.w @Rm,Rn */
	r3 += r3;  /* 0C0B480A add Rm,Rn */
	IF(0x0C0B480Cu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B480Eu, 2);  /* 0C0B480C mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFAu;  /* 0C0B480E add #imm,Rn */
	W16(r8, r4); UPD(0x0C0B4812u, 2);  /* 0C0B4810 mov.w Rm,@Rn */
	r3 = 0x0u;  /* 0C0B4812 mov #imm,Rn */
	r2 = 0xC2460ACu; UPD(0x0C0B4816u, 2);  /* 0C0B4814 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0B4816 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B481Au, 2);  /* 0C0B4818 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0B481A mov Rm,Rn */
	r6 = r0 & 0xFFFF;  /* 0C0B481C extu.w Rm,Rn */
	r5 = R32(r9); UPD(0x0C0B4820u, 3);  /* 0C0B481E mov.l @Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C0B4822u, 1);  /* 0C0B4820 mov.l @(disp,pc),Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0B4824u, 1);  /* 0C0B4822 mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C0B4824 or Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C0B4828u, 2);  /* 0C0B4826 mov.l @(disp,Rm),Rn */
	W32(r8, r5); UPD(0x0C0B482Au, 1);  /* 0C0B4828 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0B482Cu, 1);  /* 0C0B482A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r7); UPD(0x0C0B482Eu, 1);  /* 0C0B482C mov.l Rm,@(disp,Rn) */
	IF(0x0C0B482Eu); { u32 t_ = r0; PR = 0x0C0B4832u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0B4832u); }  /* 0C0B482E jsr @Rn */
L_0C0B4832: BLKS(0x0C0B4832u);
	r4 = R32(r13 + 0x24u); UPD(0x0C0B4834u, 1);  /* 0C0B4832 mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C0B4834 mov #imm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0B4838u, 2);  /* 0C0B4836 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C0B4838 mov #imm,Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C0B483Cu, 2);  /* 0C0B483A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0B483Eu, 1);  /* 0C0B483C mov.l Rm,@(disp,Rn) */
	r9 += 0x14u;  /* 0C0B483E add #imm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0B4842u, 2);  /* 0C0B4840 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B4844u, 1);  /* 0C0B4842 mov.w @Rm,Rn */
	r0 = r8;  /* 0C0B4844 mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C0B4848u, 2);  /* 0C0B4846 mov.w @(disp,pc),Rn */
	r9 += 0x8u;  /* 0C0B4848 add #imm,Rn */
	IF(0x0C0B484Au); W16(r0 + r4, r6); UPD(0x0C0B484Cu, 2);  /* 0C0B484A mov.w Rm,@(r0,Rn) */
	r5 = R32(r13 + 0x28u); UPD(0x0C0B484Eu, 1);  /* 0C0B484C mov.l @(disp,Rm),Rn */
	r4 += 0x1Au;  /* 0C0B484E add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B4852u, 2);  /* 0C0B4850 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0B4852 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0B4856u, 2);  /* 0C0B4854 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C0B4856 add #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0B485Au, 2);  /* 0C0B4858 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B485Au); W16(r0 + r8, r7); UPD(0x0C0B485Cu, 1);  /* 0C0B485A mov.w Rm,@(r0,Rn) */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B485Eu, 1);  /* 0C0B485C mov.b @Rm,Rn */
	r8 += 0x50u;  /* 0C0B485E add #imm,Rn */
	W8(r4, r3); UPD(0x0C0B4862u, 2);  /* 0C0B4860 mov.b Rm,@Rn */
	r9 += 0xFFFFFFE4u;  /* 0C0B4862 add #imm,Rn */
	r4 += 0x2u;  /* 0C0B4864 add #imm,Rn */
	W8(r4, r1); UPD(0x0C0B4868u, 3);  /* 0C0B4866 mov.b Rm,@Rn */
	{ u32 v_ = r1; r4 -= 1; W8(r4, v_); } UPD(0x0C0B486Au, 1);  /* 0C0B4868 mov.b Rm,@-Rn */
	r4 = r10;  /* 0C0B486A mov Rm,Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C0B486Eu, 2);  /* 0C0B486C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x18u); UPD(0x0C0B4870u, 1);  /* 0C0B486E mov.l @(disp,Rm),Rn */
	IF(0x0C0B4870u); { u32 t_ = r10; PR = 0x0C0B4874u; W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0B4874u); }  /* 0C0B4870 jsr @Rn */
L_0C0B4874: BLKS(0x0C0B4874u);
	r0 = 0xB0u; UPD(0x0C0B4876u, 1);  /* 0C0B4874 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0B4876 add #imm,Rn */
	IF(0x0C0B4878u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B487Au, 2);  /* 0C0B4878 mov.b @(r0,Rm),Rn */
	r9 += 0x1Du;  /* 0C0B487A add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0B487Eu, 2);  /* 0C0B487C mov.w @Rm,Rn */
	r5 = r8;  /* 0C0B487E mov Rm,Rn */
	IF(0x0C0B4880u); W8(r0 + r8, r6); UPD(0x0C0B4882u, 2);  /* 0C0B4880 mov.b Rm,@(r0,Rn) */
	r1 = 0x0u;  /* 0C0B4882 mov #imm,Rn */
	r11 = 0xB4u; UPD(0x0C0B4886u, 2);  /* 0C0B4884 mov.w @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0B4886 extu.w Rm,Rn */
	IF(0x0C0B4888u); MACL = r0 * r11;  /* 0C0B4888 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B488Cu, 4);  /* 0C0B488A mov.l @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C0B488Eu, 1);  /* 0C0B488C mov.w @(disp,pc),Rn */
	IF(0x0C0B488Eu); r10 = MACL;  /* 0C0B488E sts macl,Rn */
	r10 += r7;  /* 0C0B4890 add Rm,Rn */
	r10 += r4;  /* 0C0B4892 add Rm,Rn */
	r10 += 0x1u;  /* 0C0B4894 add #imm,Rn */
	r0 = 0xACu; UPD(0x0C0B4898u, 5);  /* 0C0B4896 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C0B4898 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B489Cu, 2);  /* 0C0B489A mov.b @Rm,Rn */
	r0 += r8;  /* 0C0B489C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B48A0u, 2);  /* 0C0B489E mov.b @Rm,Rn */
	r0 += 0x3u;  /* 0C0B48A0 add #imm,Rn */
	r5 += 0x1u;  /* 0C0B48A2 add #imm,Rn */
	r3 += r6;  /* 0C0B48A4 add Rm,Rn */
	W8(r0, r6); UPD(0x0C0B48A8u, 4);  /* 0C0B48A6 mov.b Rm,@Rn */
	r7 = r12;  /* 0C0B48A8 mov Rm,Rn */
	W8(r5, r3); UPD(0x0C0B48ACu, 2);  /* 0C0B48AA mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C0B48AC add #imm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0B48B0u, 2);  /* 0C0B48AE mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C0B48B0 add #imm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B48B4u, 2);  /* 0C0B48B2 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0B48B4 exts.w Rm,Rn */
	W32(r8 + 0x38u, r9); UPD(0x0C0B48B8u, 2);  /* 0C0B48B6 mov.l Rm,@(disp,Rn) */
	r10 = 0x68u;  /* 0C0B48B8 mov #imm,Rn */
	r11 = 0x8Cu; UPD(0x0C0B48BCu, 2);  /* 0C0B48BA mov.w @(disp,pc),Rn */
	T = (s32)r12 > (s32)r10;  /* 0C0B48BC cmp/gt Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B48C0u, 2);  /* 0C0B48BE mov.b @Rm,Rn */
	r8 += r11;  /* 0C0B48C0 add Rm,Rn */
	W8(r0, r4); UPD(0x0C0B48C4u, 2);  /* 0C0B48C2 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r8, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B47DCu, 3); goto L_0C0B47DC; } UPD(0x0C0B48C8u, 1); goto L_0C0B48C8; }  /* 0C0B48C4 bf/s */
L_0C0B48C8: BLKS(0x0C0B48C8u);
	r10 = 0xC3C4164u; UPD(0x0C0B48CAu, 1);  /* 0C0B48C8 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0B48CA mov #imm,Rn */
	r12 = 0xC3C4165u; UPD(0x0C0B48CEu, 2);  /* 0C0B48CC mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0B48CE mov #imm,Rn */
	W8(r10, r13); UPD(0x0C0B48D2u, 2);  /* 0C0B48D0 mov.b Rm,@Rn */
	{ W8(r12, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C0B4706u, 3); goto L_0C0B4706; }  /* 0C0B48D2 bra */
}

void blk_f_0C0B4940(sh3_t *c)
{
	LOCALS;
L_0C0B4940: BLKS(0x0C0B4940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4942u, 1);  /* 0C0B4940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4944u, 1);  /* 0C0B4942 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4946u, 1);  /* 0C0B4944 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4948u, 1);  /* 0C0B4946 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B494Au, 1);  /* 0C0B4948 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0B494Cu, 1);  /* 0C0B494A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0B494C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4950u, 2);  /* 0C0B494E mov.l Rm,@-Rn */
	IF(0x0C0B4950u); MACL = r12 * r2;  /* 0C0B4950 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4954u, 3);  /* 0C0B4952 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B4956u, 1);  /* 0C0B4954 mov.l @(disp,pc),Rn */
	IF(0x0C0B4956u); r2 = MACL;  /* 0C0B4956 sts macl,Rn */
	IF(0x0C0B4958u); r15 -= 4; W32(r15, PR); UPD(0x0C0B495Au, 2);  /* 0C0B4958 sts.l pr,@-Rn */
	r2 += r0;  /* 0C0B495A add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C0B495Eu, 2);  /* 0C0B495C mov.l @(disp,Rm),Rn */
	r0 = 0x37u;  /* 0C0B495E mov #imm,Rn */
	T = r3 > r0;  /* 0C0B4960 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B496Au, 5); goto L_0C0B496A; } goto L_0C0B4966; }  /* 0C0B4962 bf/s */
L_0C0B4966: BLKS(0x0C0B4966u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0B5010u, 4); goto L_0C0B5010; }  /* 0C0B4966 bra */
L_0C0B496A: BLKS(0x0C0B496Au);
	r0 = 0xC0B497Cu;  /* 0C0B496A mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B496C add Rm,Rn */
	IF(0x0C0B496Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B4970u, 3);  /* 0C0B496E mov.w @(r0,Rm),Rn */
	IF(0x0C0B4970u); { u32 tv_ = (r4 + 0x0C0B4974u); u32 t_ = PHYS(tv_); IF(0x0C0B4972u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B49F0u: goto L_0C0B49F0; case 0x0C0B4A70u: goto L_0C0B4A70; case 0x0C0B4AB0u: goto L_0C0B4AB0; case 0x0C0B4AE0u: goto L_0C0B4AE0; case 0x0C0B4B10u: goto L_0C0B4B10; case 0x0C0B4B80u: goto L_0C0B4B80; case 0x0C0B4C40u: goto L_0C0B4C40; case 0x0C0B4C70u: goto L_0C0B4C70; case 0x0C0B4CA0u: goto L_0C0B4CA0; case 0x0C0B4CD0u: goto L_0C0B4CD0; case 0x0C0B4D00u: goto L_0C0B4D00; case 0x0C0B4D60u: goto L_0C0B4D60; case 0x0C0B4DF0u: goto L_0C0B4DF0; case 0x0C0B4E20u: goto L_0C0B4E20; case 0x0C0B4E50u: goto L_0C0B4E50; case 0x0C0B4E90u: goto L_0C0B4E90; case 0x0C0B4EC0u: goto L_0C0B4EC0; case 0x0C0B4F10u: goto L_0C0B4F10; case 0x0C0B4F80u: goto L_0C0B4F80; case 0x0C0B4FB0u: goto L_0C0B4FB0; default: JUMPD(tv_); } }  /* 0C0B4970 braf Rn */
L_0C0B49F0: BLKS(0x0C0B49F0u);
	r11 = 0xB4u; UPD(0x0C0B49F2u, 1);  /* 0C0B49F0 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C0B49F2 mov Rm,Rn */
	IF(0x0C0B49F4u); MACL = r12 * r11;  /* 0C0B49F4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B49F8u, 4);  /* 0C0B49F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B49F8u); r9 = MACL;  /* 0C0B49F8 sts macl,Rn */
	r9 += r10;  /* 0C0B49FA add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0B49FC add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B4A00u, 4);  /* 0C0B49FE mov.w @Rm,Rn */
	r8 = 0xC0A9D90u; UPD(0x0C0B4A02u, 1);  /* 0C0B4A00 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C0B4A02 tst Rm,Rn */
	IF(0x0C0B4A04u); r0 = T;  /* 0C0B4A04 movt Rn */
	r6 = 0xC1E9490u; UPD(0x0C0B4A08u, 3);  /* 0C0B4A06 mov.l @(disp,pc),Rn */
	IF(0x0C0B4A08u); r0 <<= 2;  /* 0C0B4A08 shll2 Rn */
	IF(0x0C0B4A0Au); { u32 t_ = r8; PR = 0x0C0B4A0Eu; IF(0x0C0B4A0Cu); r5 = R32(r0 + r6); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B4A0Eu); }  /* 0C0B4A0A jsr @Rn */
L_0C0B4A0E: BLKS(0x0C0B4A0Eu);
	r0 = 0x8Cu; UPD(0x0C0B4A10u, 1);  /* 0C0B4A0E mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFC4u;  /* 0C0B4A10 add #imm,Rn */
	r5 = 0x0u;  /* 0C0B4A12 mov #imm,Rn */
	IF(0x0C0B4A14u); W32(r0 + r9, r5); UPD(0x0C0B4A16u, 3);  /* 0C0B4A14 mov.l Rm,@(r0,Rn) */
	IF(0x0C0B4A16u); ;  /* 0C0B4A16 nop */
	UPD(0x0C0B4A18u, 1);
L_0C0B4A18: BLKS(0x0C0B4A18u);
	r11 = 0xB4u; UPD(0x0C0B4A1Au, 1);  /* 0C0B4A18 mov.w @(disp,pc),Rn */
	IF(0x0C0B4A1Au); MACL = r12 * r11;  /* 0C0B4A1A mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4A1Eu, 3);  /* 0C0B4A1C mov.l @(disp,pc),Rn */
	IF(0x0C0B4A1Eu); r4 = MACL;  /* 0C0B4A1E sts macl,Rn */
	r4 += r10;  /* 0C0B4A20 add Rm,Rn */
	r12 = R32(r4); UPD(0x0C0B4A24u, 3);  /* 0C0B4A22 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0B4A24 tst Rm,Rn */
	if (!T) { UPD(0x0C0B4A3Au, 4); goto L_0C0B4A3A; }  /* 0C0B4A26 bf */
L_0C0B4A28: BLKS(0x0C0B4A28u);
	r4 += 0x40u;  /* 0C0B4A28 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0B4A2Cu, 2);  /* 0C0B4A2A mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C0B4A2Eu, 1);  /* 0C0B4A2C mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C0B4A2E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B4A3Au, 4); goto L_0C0B4A3A; }  /* 0C0B4A30 bt */
L_0C0B4A32: BLKS(0x0C0B4A32u);
	r13 = 0xC175064u; UPD(0x0C0B4A34u, 1);  /* 0C0B4A32 mov.l @(disp,pc),Rn */
	r0 = R32(r13); UPD(0x0C0B4A36u, 1);  /* 0C0B4A34 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4A36 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B4A50u, 4); goto L_0C0B4A50; }  /* 0C0B4A38 bt */
L_0C0B4A3A: BLKS(0x0C0B4A3Au);
	r15 = r14;  /* 0C0B4A3A mov Rm,Rn */
	IF(0x0C0B4A3Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B4A3Eu, 2);  /* 0C0B4A3C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B4A40u, 1);  /* 0C0B4A3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B4A42u, 1);  /* 0C0B4A40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B4A44u, 1);  /* 0C0B4A42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B4A46u, 1);  /* 0C0B4A44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B4A48u, 1);  /* 0C0B4A46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B4A4Au, 1);  /* 0C0B4A48 mov.l @Rm+,Rn */
	IF(0x0C0B4A4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B4A4A rts */
L_0C0B4A50: BLKS(0x0C0B4A50u);
	r3 = 0x4u;  /* 0C0B4A50 mov #imm,Rn */
	IF(0x0C0B4A52u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0B4A52 shld Rm,Rn */
	r8 = 0x40000u; UPD(0x0C0B4A56u, 3);  /* 0C0B4A54 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C0B4A58u, 1);  /* 0C0B4A56 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C0B4A58 add Rm,Rn */
	r15 = r14;  /* 0C0B4A5A mov Rm,Rn */
	IF(0x0C0B4A5Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B4A5Eu, 3);  /* 0C0B4A5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B4A60u, 1);  /* 0C0B4A5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B4A62u, 1);  /* 0C0B4A60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B4A64u, 1);  /* 0C0B4A62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B4A66u, 1);  /* 0C0B4A64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B4A68u, 1);  /* 0C0B4A66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B4A6Au, 1);  /* 0C0B4A68 mov.l @Rm+,Rn */
	IF(0x0C0B4A6Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0B4A6A jmp @Rn */
L_0C0B4A70: BLKS(0x0C0B4A70u);
	r9 = 0xB4u; UPD(0x0C0B4A72u, 1);  /* 0C0B4A70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4A72 add #imm,Rn */
	IF(0x0C0B4A74u); MACL = r12 * r9;  /* 0C0B4A74 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4A78u, 4);  /* 0C0B4A76 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B4A78 mov #imm,Rn */
	IF(0x0C0B4A7Au); r8 = MACL;  /* 0C0B4A7A sts macl,Rn */
	r8 += r0;  /* 0C0B4A7C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4A80u, 4);  /* 0C0B4A7E mov.w @(disp,pc),Rn */
	IF(0x0C0B4A80u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4A82u, 1);  /* 0C0B4A80 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C0B4A82 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4A86u, 2);  /* 0C0B4A84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4A86 add #imm,Rn */
	IF(0x0C0B4A88u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4A8Au, 2);  /* 0C0B4A88 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0B4A8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B4A8Eu, 2);  /* 0C0B4A8C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4A90u, 1);  /* 0C0B4A8E mov.l @Rm,Rn */
L_0C0B4A90: BLKS(0x0C0B4A90u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4A92u, 1);  /* 0C0B4A90 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B4A94u, 1);  /* 0C0B4A92 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C0B4A96u, 1);  /* 0C0B4A94 mov.l @(disp,pc),Rn */
L_0C0B4A96: BLKS(0x0C0B4A96u);
	IF(0x0C0B4A96u); { u32 t_ = r0; PR = 0x0C0B4A9Au; IF(0x0C0B4A98u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B4A9Au); }  /* 0C0B4A96 jsr @Rn */
L_0C0B4A9A: BLKS(0x0C0B4A9Au);
	r7 = 0x0u;  /* 0C0B4A9A mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0B4A9Eu, 2);  /* 0C0B4A9C mov.l Rm,@Rn */
L_0C0B4A9E: BLKS(0x0C0B4A9Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B4A9E bra */
L_0C0B4AB0: BLKS(0x0C0B4AB0u);
	r8 = 0xB4u; UPD(0x0C0B4AB2u, 1);  /* 0C0B4AB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4AB2 add #imm,Rn */
	IF(0x0C0B4AB4u); MACL = r12 * r8;  /* 0C0B4AB4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B4AB8u, 4);  /* 0C0B4AB6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4ABAu, 1);  /* 0C0B4AB8 mov.w @(disp,pc),Rn */
	IF(0x0C0B4ABAu); r8 = MACL;  /* 0C0B4ABA sts macl,Rn */
	r8 += r11;  /* 0C0B4ABC add Rm,Rn */
	IF(0x0C0B4ABEu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AC0u, 3);  /* 0C0B4ABE mov.b @(r0,Rm),Rn */
	r7 = r10 & 0xFF;  /* 0C0B4AC0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B4AC4u, 2);  /* 0C0B4AC2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4AC4 add #imm,Rn */
	IF(0x0C0B4AC6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AC8u, 2);  /* 0C0B4AC6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0B4AC8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B4ACCu, 2);  /* 0C0B4ACA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4ACEu, 1);  /* 0C0B4ACC mov.l @Rm,Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4ACE bra */
L_0C0B4AE0: BLKS(0x0C0B4AE0u);
	r9 = 0xB4u; UPD(0x0C0B4AE2u, 1);  /* 0C0B4AE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4AE2 add #imm,Rn */
	IF(0x0C0B4AE4u); MACL = r12 * r9;  /* 0C0B4AE4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4AE8u, 4);  /* 0C0B4AE6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4AE8 mov #imm,Rn */
	IF(0x0C0B4AEAu); r8 = MACL;  /* 0C0B4AEA sts macl,Rn */
	r8 += r0;  /* 0C0B4AEC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4AF0u, 4);  /* 0C0B4AEE mov.w @(disp,pc),Rn */
	IF(0x0C0B4AF0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AF2u, 1);  /* 0C0B4AF0 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C0B4AF2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4AF6u, 2);  /* 0C0B4AF4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4AF6 add #imm,Rn */
	IF(0x0C0B4AF8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AFAu, 2);  /* 0C0B4AF8 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0B4AFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B4AFEu, 2);  /* 0C0B4AFC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4AFE bra */
L_0C0B4B10: BLKS(0x0C0B4B10u);
	r0 = 0xB4u; UPD(0x0C0B4B12u, 1);  /* 0C0B4B10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4B12 add #imm,Rn */
	IF(0x0C0B4B14u); MACL = r12 * r0;  /* 0C0B4B14 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B4B18u, 4);  /* 0C0B4B16 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4B18 mov #imm,Rn */
	IF(0x0C0B4B1Au); r10 = MACL;  /* 0C0B4B1A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B4B1Eu, 3);  /* 0C0B4B1C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C0B4B1E add Rm,Rn */
	IF(0x0C0B4B20u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B4B22u, 2);  /* 0C0B4B20 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4B22 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4B26u, 2);  /* 0C0B4B24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4B26 add #imm,Rn */
	IF(0x0C0B4B28u); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B4B2Au, 2);  /* 0C0B4B28 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BECB0u; UPD(0x0C0B4B2Cu, 1);  /* 0C0B4B2A mov.l @(disp,pc),Rn */
	r8 = r13 & 0xFF;  /* 0C0B4B2C extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0B4B30u, 2);  /* 0C0B4B2E mov.l Rm,@(disp,Rn) */
	r6 = R32(r10 + 0x24u); UPD(0x0C0B4B32u, 1);  /* 0C0B4B30 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C0B4B34u, 1);  /* 0C0B4B32 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4B34u); { u32 t_ = r11; PR = 0x0C0B4B38u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0B4B38u); }  /* 0C0B4B34 jsr @Rn */
L_0C0B4B38: BLKS(0x0C0B4B38u);
	r5 = 0x98u; UPD(0x0C0B4B3Au, 1);  /* 0C0B4B38 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B4B3A mov #imm,Rn */
	r5 += r10;  /* 0C0B4B3C add Rm,Rn */
	r6 = R32(r10); UPD(0x0C0B4B40u, 3);  /* 0C0B4B3E mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0B4B40 add #imm,Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C0B4B44u, 2);  /* 0C0B4B42 mov.l @(disp,pc),Rn */
	r0 = 0xA3u; UPD(0x0C0B4B46u, 1);  /* 0C0B4B44 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C0B4B46 and Rm,Rn */
	W8(r5, r1); UPD(0x0C0B4B4Au, 2);  /* 0C0B4B48 mov.b Rm,@Rn */
	W32(r10, r6); UPD(0x0C0B4B4Cu, 1);  /* 0C0B4B4A mov.l Rm,@Rn */
	IF(0x0C0B4B4Cu); W8(r0 + r10, r1); UPD(0x0C0B4B4Eu, 1);  /* 0C0B4B4C mov.b Rm,@(r0,Rn) */
	{ { u32 v_ = r1; r5 -= 1; W8(r5, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C0B4A9Eu, 3); goto L_0C0B4A9E; }  /* 0C0B4B4E bra */
L_0C0B4B80: BLKS(0x0C0B4B80u);
	r10 = 0xB4u; UPD(0x0C0B4B82u, 1);  /* 0C0B4B80 mov.w @(disp,pc),Rn */
	IF(0x0C0B4B82u); MACL = r12 * r10;  /* 0C0B4B82 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B4B86u, 3);  /* 0C0B4B84 mov.l @(disp,pc),Rn */
	IF(0x0C0B4B86u); r0 = MACL;  /* 0C0B4B86 sts macl,Rn */
	r0 += r5;  /* 0C0B4B88 add Rm,Rn */
	r10 = R32(r0 + 0x1Cu); UPD(0x0C0B4B8Cu, 3);  /* 0C0B4B8A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C0B4B8Eu, 1);  /* 0C0B4B8C mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C0B4B8E tst Rm,Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B4BE0u, 4); goto L_0C0B4BE0; } goto L_0C0B4B94; }  /* 0C0B4B90 bt/s */
L_0C0B4B94: BLKS(0x0C0B4B94u);
	r13 = 0xA9u; UPD(0x0C0B4B96u, 2);  /* 0C0B4B94 mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B4B96 add Rm,Rn */
	UPD(0x0C0B4B98u, 1);
L_0C0B4B98: BLKS(0x0C0B4B98u);
	r10 += 0x4u;  /* 0C0B4B98 add #imm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C0B4B9Cu, 2);  /* 0C0B4B9A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4B9C add #imm,Rn */
	r9 = R32(r11 + 0x24u); UPD(0x0C0B4BA0u, 2);  /* 0C0B4B9E mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0B4BA2u, 1);  /* 0C0B4BA0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C0B4BA2 add Rm,Rn */
	IF(0x0C0B4BA4u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B4BA6u, 2);  /* 0C0B4BA4 mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C0B4BA8u, 1);  /* 0C0B4BA6 mov.l @Rm+,Rn */
	r0 = r5 & 0xFF;  /* 0C0B4BA8 extu.b Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C0B4BACu, 2);  /* 0C0B4BAA mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0B4BAC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0B4BB0u, 2);  /* 0C0B4BAE mov.l Rm,@Rn */
	r8 += r6;  /* 0C0B4BB0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4BB4u, 2);  /* 0C0B4BB2 mov.b @Rm,Rn */
	r6 = r9;  /* 0C0B4BB4 mov Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0B4BB6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B4BBAu, 3);  /* 0C0B4BB8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0B4BBCu, 1);  /* 0C0B4BBA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0B4BBC mov Rm,Rn */
	IF(0x0C0B4BBEu); { u32 t_ = r0; PR = 0x0C0B4BC2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4BC2u); }  /* 0C0B4BBE jsr @Rn */
L_0C0B4BC2: BLKS(0x0C0B4BC2u);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4BC4u, 1);  /* 0C0B4BC2 mov.b @Rm,Rn */
	r6 = r8;  /* 0C0B4BC4 mov Rm,Rn */
	r4 = 0x20000u; UPD(0x0C0B4BC8u, 2);  /* 0C0B4BC6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0B4BC8 mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C0B4BCCu, 2);  /* 0C0B4BCA mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0B4BCC extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4BD0u, 2);  /* 0C0B4BCE mov.l Rm,@Rn */
	r5 = r9;  /* 0C0B4BD0 mov Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B4BD4u, 2);  /* 0C0B4BD2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B4BD4u); { u32 t_ = r8; PR = 0x0C0B4BD8u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4BD8u); }  /* 0C0B4BD4 jsr @Rn */
L_0C0B4BD8: BLKS(0x0C0B4BD8u);
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C0B4BDAu, 1);  /* 0C0B4BD8 mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C0B4BDA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4B98u, 4); goto L_0C0B4B98; } UPD(0x0C0B4BE0u, 1); goto L_0C0B4BE0; }  /* 0C0B4BDC bf/s */
L_0C0B4BE0: BLKS(0x0C0B4BE0u);
	r11 = 0xC175064u; UPD(0x0C0B4BE2u, 1);  /* 0C0B4BE0 mov.l @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C0B4BE4u, 1);  /* 0C0B4BE2 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4BE4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B4C30u, 4); goto L_0C0B4C30; }  /* 0C0B4BE6 bt */
L_0C0B4BE8: BLKS(0x0C0B4BE8u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B4BEAu, 1);  /* 0C0B4BE8 mov.l @(disp,pc),Rn */
	IF(0x0C0B4BEAu); { u32 t_ = r8; PR = 0x0C0B4BEEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B4BEEu); }  /* 0C0B4BEA jsr @Rn */
L_0C0B4BEE: BLKS(0x0C0B4BEEu);
	r7 = 0xB4u; UPD(0x0C0B4BF0u, 1);  /* 0C0B4BEE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0B4BF0 exts.w Rm,Rn */
	IF(0x0C0B4BF2u); MACL = r12 * r7;  /* 0C0B4BF2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B4BF6u, 4);  /* 0C0B4BF4 mov.l @(disp,pc),Rn */
	r1 = ~r4;  /* 0C0B4BF6 not Rm,Rn */
	IF(0x0C0B4BF8u); r3 = MACL;  /* 0C0B4BF8 sts macl,Rn */
	r3 += r6;  /* 0C0B4BFA add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0B4BFC add #imm,Rn */
	IF(0x0C0B4BFEu); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0B4BFE rotl Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B4C02u, 6);  /* 0C0B4C00 mov.w @Rm,Rn */
	IF(0x0C0B4C02u); r9 = T;  /* 0C0B4C02 movt Rn */
	T = (r2 & r2) == 0;  /* 0C0B4C04 tst Rm,Rn */
	IF(0x0C0B4C06u); r10 = T;  /* 0C0B4C06 movt Rn */
	r9 &= r10;  /* 0C0B4C08 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0B4C0A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4C20u, 8); goto L_0C0B4C20; } goto L_0C0B4C10; }  /* 0C0B4C0C bt/s */
L_0C0B4C10: BLKS(0x0C0B4C10u);
	IF(0x0C0B4C10u); MACL = r4 * r7;  /* 0C0B4C10 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0B4C14u, 4);  /* 0C0B4C12 mov.w @(disp,pc),Rn */
	IF(0x0C0B4C14u); r4 = MACL;  /* 0C0B4C14 sts macl,Rn */
	r4 += r6;  /* 0C0B4C16 add Rm,Rn */
	r4 += r0;  /* 0C0B4C18 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B4C1Cu, 4);  /* 0C0B4C1A mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B4C1C add #imm,Rn */
	W8(r4, r7); UPD(0x0C0B4C20u, 2);  /* 0C0B4C1E mov.b Rm,@Rn */
L_0C0B4C20: BLKS(0x0C0B4C20u);
	r5 = 0x0u;  /* 0C0B4C20 mov #imm,Rn */
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4C22 bra */
L_0C0B4C30: BLKS(0x0C0B4C30u);
	r13 = 0xC071C90u; UPD(0x0C0B4C32u, 1);  /* 0C0B4C30 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B4C34u, 1);  /* 0C0B4C32 mov.l @(disp,pc),Rn */
	IF(0x0C0B4C34u); { u32 t_ = r13; PR = 0x0C0B4C38u; IF(0x0C0B4C36u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B4C38u); }  /* 0C0B4C34 jsr @Rn */
L_0C0B4C38: BLKS(0x0C0B4C38u);
	{ IF(0x0C0B4C3Au); ; /* slot nop */ UPD(0x0C0B4BE8u, 3); goto L_0C0B4BE8; }  /* 0C0B4C38 bra */
L_0C0B4C40: BLKS(0x0C0B4C40u);
	r10 = 0xB4u; UPD(0x0C0B4C42u, 1);  /* 0C0B4C40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4C42 add #imm,Rn */
	IF(0x0C0B4C44u); MACL = r12 * r10;  /* 0C0B4C44 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4C48u, 4);  /* 0C0B4C46 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B4C48 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4C4Cu, 2);  /* 0C0B4C4A mov.w @(disp,pc),Rn */
	IF(0x0C0B4C4Cu); r8 = MACL;  /* 0C0B4C4C sts macl,Rn */
	r8 += r9;  /* 0C0B4C4E add Rm,Rn */
	IF(0x0C0B4C50u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C52u, 3);  /* 0C0B4C50 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4C52 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4C56u, 2);  /* 0C0B4C54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4C56 add #imm,Rn */
	IF(0x0C0B4C58u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C5Au, 2);  /* 0C0B4C58 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4C5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4C5Eu, 2);  /* 0C0B4C5C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4C60u, 1);  /* 0C0B4C5E mov.l @Rm,Rn */
L_0C0B4C60: BLKS(0x0C0B4C60u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4C62u, 1);  /* 0C0B4C60 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0B4C64u, 1);  /* 0C0B4C62 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4C64 bra */
L_0C0B4C70: BLKS(0x0C0B4C70u);
	r8 = 0xB4u; UPD(0x0C0B4C72u, 1);  /* 0C0B4C70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4C72 add #imm,Rn */
	IF(0x0C0B4C74u); MACL = r12 * r8;  /* 0C0B4C74 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4C78u, 4);  /* 0C0B4C76 mov.l @(disp,pc),Rn */
	IF(0x0C0B4C78u); r8 = MACL;  /* 0C0B4C78 sts macl,Rn */
	r8 += r0;  /* 0C0B4C7A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4C7Eu, 3);  /* 0C0B4C7C mov.w @(disp,pc),Rn */
	IF(0x0C0B4C7Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C80u, 1);  /* 0C0B4C7E mov.b @(r0,Rm),Rn */
	r7 = r5 & 0xFF;  /* 0C0B4C80 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B4C84u, 2);  /* 0C0B4C82 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4C84 add #imm,Rn */
	IF(0x0C0B4C86u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C88u, 2);  /* 0C0B4C86 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4C88 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4C8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B4C8Eu, 3);  /* 0C0B4C8C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4C90u, 1);  /* 0C0B4C8E mov.l @Rm,Rn */
L_0C0B4C90: BLKS(0x0C0B4C90u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4C92u, 1);  /* 0C0B4C90 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B4C94u, 1);  /* 0C0B4C92 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4C94 bra */
L_0C0B4CA0: BLKS(0x0C0B4CA0u);
	r10 = 0xB4u; UPD(0x0C0B4CA2u, 1);  /* 0C0B4CA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4CA2 add #imm,Rn */
	IF(0x0C0B4CA4u); MACL = r12 * r10;  /* 0C0B4CA4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4CA8u, 4);  /* 0C0B4CA6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4CA8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4CACu, 2);  /* 0C0B4CAA mov.w @(disp,pc),Rn */
	IF(0x0C0B4CACu); r8 = MACL;  /* 0C0B4CAC sts macl,Rn */
	r8 += r9;  /* 0C0B4CAE add Rm,Rn */
	IF(0x0C0B4CB0u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CB2u, 3);  /* 0C0B4CB0 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4CB2 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4CB6u, 2);  /* 0C0B4CB4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4CB6 add #imm,Rn */
	IF(0x0C0B4CB8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CBAu, 2);  /* 0C0B4CB8 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4CBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4CBEu, 2);  /* 0C0B4CBC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4CC0u, 1);  /* 0C0B4CBE mov.l @Rm,Rn */
L_0C0B4CC0: BLKS(0x0C0B4CC0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4CC2u, 1);  /* 0C0B4CC0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFD30u; UPD(0x0C0B4CC4u, 1);  /* 0C0B4CC2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4CC4 bra */
L_0C0B4CD0: BLKS(0x0C0B4CD0u);
	r4 = 0xB4u; UPD(0x0C0B4CD2u, 1);  /* 0C0B4CD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4CD2 add #imm,Rn */
	IF(0x0C0B4CD4u); MACL = r12 * r4;  /* 0C0B4CD4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B4CD8u, 4);  /* 0C0B4CD6 mov.l @(disp,pc),Rn */
	IF(0x0C0B4CD8u); r8 = MACL;  /* 0C0B4CD8 sts macl,Rn */
	r8 += r2;  /* 0C0B4CDA add Rm,Rn */
	UPD(0x0C0B4CDCu, 2);
L_0C0B4CDC: BLKS(0x0C0B4CDCu);
	r0 = 0xB0u; UPD(0x0C0B4CDEu, 1);  /* 0C0B4CDC mov.w @(disp,pc),Rn */
	IF(0x0C0B4CDEu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CE0u, 1);  /* 0C0B4CDE mov.b @(r0,Rm),Rn */
	r5 = r11 & 0xFF;  /* 0C0B4CE0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B4CE4u, 2);  /* 0C0B4CE2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4CE4 add #imm,Rn */
	IF(0x0C0B4CE6u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CE8u, 2);  /* 0C0B4CE6 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4CE8 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B4CEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B4CEEu, 3);  /* 0C0B4CEC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4CEE bra */
L_0C0B4D00: BLKS(0x0C0B4D00u);
	r8 = 0xB4u; UPD(0x0C0B4D02u, 1);  /* 0C0B4D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4D02 add #imm,Rn */
	IF(0x0C0B4D04u); MACL = r12 * r8;  /* 0C0B4D04 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4D08u, 4);  /* 0C0B4D06 mov.l @(disp,pc),Rn */
	IF(0x0C0B4D08u); r8 = MACL;  /* 0C0B4D08 sts macl,Rn */
	r8 += r0;  /* 0C0B4D0A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4D0Eu, 3);  /* 0C0B4D0C mov.w @(disp,pc),Rn */
	IF(0x0C0B4D0Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D10u, 1);  /* 0C0B4D0E mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4D10 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0B4D14u, 2);  /* 0C0B4D12 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4D14 add #imm,Rn */
	IF(0x0C0B4D16u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D18u, 2);  /* 0C0B4D16 mov.b @(r0,Rm),Rn */
	r7 = r5 & 0xFF;  /* 0C0B4D18 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B4D1Cu, 2);  /* 0C0B4D1A mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C0B4D1C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 4); goto L_0C0B4C90; }  /* 0C0B4D1E bra */
L_0C0B4D60: BLKS(0x0C0B4D60u);
	r11 = 0xC0A8B50u; UPD(0x0C0B4D62u, 1);  /* 0C0B4D60 mov.l @(disp,pc),Rn */
	IF(0x0C0B4D62u); { u32 t_ = r11; PR = 0x0C0B4D66u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B4D66u); }  /* 0C0B4D62 jsr @Rn */
L_0C0B4D66: BLKS(0x0C0B4D66u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B4D66 exts.w Rm,Rn */
	IF(0x0C0B4D68u); T = (s32)r1 >= 0;  /* 0C0B4D68 cmp/pz Rn */
	if (!T) { UPD(0x0C0B4DB4u, 5); goto L_0C0B4DB4; }  /* 0C0B4D6A bf */
L_0C0B4D6C: BLKS(0x0C0B4D6Cu);
	r15 += 0xFFFFFFF8u;  /* 0C0B4D6C add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C0B4D70u, 2);  /* 0C0B4D6E mov.w @(disp,pc),Rn */
	IF(0x0C0B4D70u); MACL = r12 * r11;  /* 0C0B4D70 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B4D74u, 3);  /* 0C0B4D72 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0B4D74 mov #imm,Rn */
	IF(0x0C0B4D76u); r0 = MACL;  /* 0C0B4D76 sts macl,Rn */
	r0 += r1;  /* 0C0B4D78 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B4D7A add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B4D7Eu, 5);  /* 0C0B4D7C mov.w @Rm,Rn */
	IF(0x0C0B4D7Eu); MACL = r13 * r11;  /* 0C0B4D7E mul.l Rm,Rn */
	r8 = 0xA1u; UPD(0x0C0B4D82u, 3);  /* 0C0B4D80 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B4D82 add #imm,Rn */
	IF(0x0C0B4D84u); r5 = MACL;  /* 0C0B4D84 sts macl,Rn */
	r5 += r1;  /* 0C0B4D86 add Rm,Rn */
	r11 += 0xFFFFFFF3u;  /* 0C0B4D88 add #imm,Rn */
	r5 += r11;  /* 0C0B4D8A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B4D8Eu, 6);  /* 0C0B4D8C mov.b @Rm,Rn */
	IF(0x0C0B4D8Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D90u, 1);  /* 0C0B4D8E mov.b @(r0,Rm),Rn */
	r7 = 0xA9u; UPD(0x0C0B4D92u, 1);  /* 0C0B4D90 mov.w @(disp,pc),Rn */
	r3 |= r6;  /* 0C0B4D92 or Rm,Rn */
	IF(0x0C0B4D94u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B4D96u, 2);  /* 0C0B4D94 mov.b @(r0,Rm),Rn */
	W8(r5, r3); UPD(0x0C0B4D98u, 1);  /* 0C0B4D96 mov.b Rm,@Rn */
	r7 = r4 & 0xFF;  /* 0C0B4D98 extu.b Rm,Rn */
	r2 = 0x20000u; UPD(0x0C0B4D9Cu, 2);  /* 0C0B4D9A mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0B4D9C mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B4DA0u, 2);  /* 0C0B4D9E mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C0B4DA2u, 1);  /* 0C0B4DA0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0B4DA4u, 1);  /* 0C0B4DA2 mov.l Rm,@(disp,Rn) */
	r13 = 0xC175064u; UPD(0x0C0B4DA6u, 1);  /* 0C0B4DA4 mov.l @(disp,pc),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B4DA8u, 1);  /* 0C0B4DA6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4DA8u); { u32 t_ = r9; PR = 0x0C0B4DACu; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4DACu); }  /* 0C0B4DA8 jsr @Rn */
L_0C0B4DAC: BLKS(0x0C0B4DACu);
	r0 = R32(r13); UPD(0x0C0B4DAEu, 1);  /* 0C0B4DAC mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4DAE cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4DE0u, 4); goto L_0C0B4DE0; } UPD(0x0C0B4DB4u, 1); goto L_0C0B4DB4; }  /* 0C0B4DB0 bt/s */
L_0C0B4DB4: BLKS(0x0C0B4DB4u);
	r5 = 0xB4u; UPD(0x0C0B4DB6u, 1);  /* 0C0B4DB4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4DB6 add #imm,Rn */
	IF(0x0C0B4DB8u); MACL = r12 * r5;  /* 0C0B4DB8 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B4DBCu, 4);  /* 0C0B4DBA mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4DBEu, 1);  /* 0C0B4DBC mov.w @(disp,pc),Rn */
	IF(0x0C0B4DBEu); r8 = MACL;  /* 0C0B4DBE sts macl,Rn */
	r8 += r7;  /* 0C0B4DC0 add Rm,Rn */
	IF(0x0C0B4DC2u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4DC4u, 3);  /* 0C0B4DC2 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0B4DC4 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4DC6 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4DCAu, 3);  /* 0C0B4DC8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4DCA add #imm,Rn */
	IF(0x0C0B4DCCu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4DCEu, 2);  /* 0C0B4DCC mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C0B4DCE extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0B4DD2u, 2);  /* 0C0B4DD0 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C60u, 3); goto L_0C0B4C60; }  /* 0C0B4DD2 bra */
L_0C0B4DE0: BLKS(0x0C0B4DE0u);
	r0 = 0xC071C90u; UPD(0x0C0B4DE2u, 1);  /* 0C0B4DE0 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B4DE4u, 1);  /* 0C0B4DE2 mov.l @(disp,pc),Rn */
	IF(0x0C0B4DE4u); { u32 t_ = r0; PR = 0x0C0B4DE8u; IF(0x0C0B4DE6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B4DE8u); }  /* 0C0B4DE4 jsr @Rn */
L_0C0B4DE8: BLKS(0x0C0B4DE8u);
	{ IF(0x0C0B4DEAu); ; /* slot nop */ UPD(0x0C0B4DB4u, 3); goto L_0C0B4DB4; }  /* 0C0B4DE8 bra */
L_0C0B4DF0: BLKS(0x0C0B4DF0u);
	r8 = 0xB4u; UPD(0x0C0B4DF2u, 1);  /* 0C0B4DF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4DF2 add #imm,Rn */
	IF(0x0C0B4DF4u); MACL = r12 * r8;  /* 0C0B4DF4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4DF8u, 4);  /* 0C0B4DF6 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B4DF8 mov #imm,Rn */
	IF(0x0C0B4DFAu); r8 = MACL;  /* 0C0B4DFA sts macl,Rn */
	r8 += r0;  /* 0C0B4DFC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4E00u, 4);  /* 0C0B4DFE mov.w @(disp,pc),Rn */
	IF(0x0C0B4E00u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E02u, 1);  /* 0C0B4E00 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4E02 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4E06u, 2);  /* 0C0B4E04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4E06 add #imm,Rn */
	IF(0x0C0B4E08u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E0Au, 2);  /* 0C0B4E08 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4E0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4E0Eu, 2);  /* 0C0B4E0C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 3); goto L_0C0B4C90; }  /* 0C0B4E0E bra */
L_0C0B4E20: BLKS(0x0C0B4E20u);
	r5 = 0xB4u; UPD(0x0C0B4E22u, 1);  /* 0C0B4E20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E22 add #imm,Rn */
	IF(0x0C0B4E24u); MACL = r12 * r5;  /* 0C0B4E24 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B4E28u, 4);  /* 0C0B4E26 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4E2Au, 1);  /* 0C0B4E28 mov.w @(disp,pc),Rn */
	IF(0x0C0B4E2Au); r8 = MACL;  /* 0C0B4E2A sts macl,Rn */
	r8 += r7;  /* 0C0B4E2C add Rm,Rn */
	IF(0x0C0B4E2Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E30u, 3);  /* 0C0B4E2E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B4E30 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4E32 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4E36u, 3);  /* 0C0B4E34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4E36 add #imm,Rn */
	IF(0x0C0B4E38u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E3Au, 2);  /* 0C0B4E38 mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C0B4E3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0B4E3Eu, 2);  /* 0C0B4E3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4E3E bra */
L_0C0B4E50: BLKS(0x0C0B4E50u);
	r11 = 0xC0A8B50u; UPD(0x0C0B4E52u, 1);  /* 0C0B4E50 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E52u); { u32 t_ = r11; PR = 0x0C0B4E56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B4E56u); }  /* 0C0B4E52 jsr @Rn */
L_0C0B4E56: BLKS(0x0C0B4E56u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B4E56 exts.w Rm,Rn */
	IF(0x0C0B4E58u); T = (s32)r4 >= 0;  /* 0C0B4E58 cmp/pz Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B4E80u, 5); goto L_0C0B4E80; } goto L_0C0B4E5E; }  /* 0C0B4E5A bf/s */
L_0C0B4E5E: BLKS(0x0C0B4E5Eu);
	r9 = 0xB4u; UPD(0x0C0B4E60u, 2);  /* 0C0B4E5E mov.w @(disp,pc),Rn */
	IF(0x0C0B4E60u); MACL = r4 * r9;  /* 0C0B4E60 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4E64u, 3);  /* 0C0B4E62 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E64u); r0 = MACL;  /* 0C0B4E64 sts macl,Rn */
	r0 += r10;  /* 0C0B4E66 add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C0B4E6Au, 3);  /* 0C0B4E68 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C0B4E6Cu, 1);  /* 0C0B4E6A mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B4E6C add #imm,Rn */
	IF(0x0C0B4E6Eu); { u32 t_ = r8; PR = 0x0C0B4E72u; W32(r0 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B4E72u); }  /* 0C0B4E6E jsr @Rn */
L_0C0B4E72: BLKS(0x0C0B4E72u);
	IF(0x0C0B4E72u); MACL = r12 * r9;  /* 0C0B4E72 mul.l Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E74 add #imm,Rn */
	IF(0x0C0B4E76u); r8 = MACL;  /* 0C0B4E76 sts macl,Rn */
	{ r8 += r10; /* slot add Rm,Rn */ UPD(0x0C0B4CDCu, 7); goto L_0C0B4CDC; }  /* 0C0B4E78 bra */
L_0C0B4E80: BLKS(0x0C0B4E80u);
	r13 = 0xB4u; UPD(0x0C0B4E82u, 1);  /* 0C0B4E80 mov.w @(disp,pc),Rn */
	IF(0x0C0B4E82u); MACL = r12 * r13;  /* 0C0B4E82 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B4E86u, 3);  /* 0C0B4E84 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E86u); r0 = MACL;  /* 0C0B4E86 sts macl,Rn */
	{ IF(0x0C0B4E8Au); W32(r0 + r3, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4E88 bra */
L_0C0B4E90: BLKS(0x0C0B4E90u);
	r8 = 0xB4u; UPD(0x0C0B4E92u, 1);  /* 0C0B4E90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E92 add #imm,Rn */
	IF(0x0C0B4E94u); MACL = r12 * r8;  /* 0C0B4E94 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4E98u, 4);  /* 0C0B4E96 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4E98 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4E9Cu, 2);  /* 0C0B4E9A mov.w @(disp,pc),Rn */
	IF(0x0C0B4E9Cu); r8 = MACL;  /* 0C0B4E9C sts macl,Rn */
	r8 += r9;  /* 0C0B4E9E add Rm,Rn */
	IF(0x0C0B4EA0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EA2u, 3);  /* 0C0B4EA0 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C0B4EA2 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0B4EA6u, 2);  /* 0C0B4EA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4EA6 add #imm,Rn */
	IF(0x0C0B4EA8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EAAu, 2);  /* 0C0B4EA8 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4EAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4EAEu, 2);  /* 0C0B4EAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4CC0u, 3); goto L_0C0B4CC0; }  /* 0C0B4EAE bra */
L_0C0B4EC0: BLKS(0x0C0B4EC0u);
	r11 = 0xB4u; UPD(0x0C0B4EC2u, 1);  /* 0C0B4EC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4EC2 add #imm,Rn */
	IF(0x0C0B4EC4u); MACL = r12 * r11;  /* 0C0B4EC4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B4EC8u, 4);  /* 0C0B4EC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4ECAu, 1);  /* 0C0B4EC8 mov.w @(disp,pc),Rn */
	IF(0x0C0B4ECAu); r8 = MACL;  /* 0C0B4ECA sts macl,Rn */
	r8 += r5;  /* 0C0B4ECC add Rm,Rn */
	IF(0x0C0B4ECEu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4ED0u, 3);  /* 0C0B4ECE mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4ED0 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B4ED2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4ED6u, 3);  /* 0C0B4ED4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4ED6 add #imm,Rn */
	IF(0x0C0B4ED8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EDAu, 2);  /* 0C0B4ED8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0B4EDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B4EDEu, 2);  /* 0C0B4EDC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C60u, 3); goto L_0C0B4C60; }  /* 0C0B4EDE bra */
L_0C0B4F10: BLKS(0x0C0B4F10u);
	r9 = 0xB4u; UPD(0x0C0B4F12u, 1);  /* 0C0B4F10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4F12 add #imm,Rn */
	IF(0x0C0B4F14u); MACL = r12 * r9;  /* 0C0B4F14 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4F18u, 4);  /* 0C0B4F16 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4F18 mov #imm,Rn */
	IF(0x0C0B4F1Au); r8 = MACL;  /* 0C0B4F1A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B4F1Eu, 3);  /* 0C0B4F1C mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0B4F1E add Rm,Rn */
	IF(0x0C0B4F20u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F22u, 2);  /* 0C0B4F20 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C0B4F22 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4F26u, 2);  /* 0C0B4F24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4F26 add #imm,Rn */
	IF(0x0C0B4F28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F2Au, 2);  /* 0C0B4F28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0B4F2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B4F2Eu, 2);  /* 0C0B4F2C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BD6F0u; UPD(0x0C0B4F30u, 1);  /* 0C0B4F2E mov.l @(disp,pc),Rn */
	r11 = 0xC0A8CA0u; UPD(0x0C0B4F32u, 1);  /* 0C0B4F30 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0B4F34u, 1);  /* 0C0B4F32 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4F36u, 1);  /* 0C0B4F34 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4F36u); { u32 t_ = r13; PR = 0x0C0B4F3Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4F3Au); }  /* 0C0B4F36 jsr @Rn */
L_0C0B4F3A: BLKS(0x0C0B4F3Au);
	r15 += 0x8u;  /* 0C0B4F3A add #imm,Rn */
	IF(0x0C0B4F3Cu); { u32 t_ = r11; PR = 0x0C0B4F40u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B4F40u); }  /* 0C0B4F3C jsr @Rn */
L_0C0B4F40: BLKS(0x0C0B4F40u);
	r8 += 0x3Cu;  /* 0C0B4F40 add #imm,Rn */
	r1 = ~r0;  /* 0C0B4F42 not Rm,Rn */
	IF(0x0C0B4F44u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0B4F44 rotl Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B4F48u, 4);  /* 0C0B4F46 mov.w @Rm,Rn */
	IF(0x0C0B4F48u); r3 = T;  /* 0C0B4F48 movt Rn */
	T = (r13 & r13) == 0;  /* 0C0B4F4A tst Rm,Rn */
	IF(0x0C0B4F4Cu); r6 = T;  /* 0C0B4F4C movt Rn */
	r3 &= r6;  /* 0C0B4F4E and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B4F50 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4F6Cu, 8); goto L_0C0B4F6C; } goto L_0C0B4F56; }  /* 0C0B4F52 bt/s */
L_0C0B4F56: BLKS(0x0C0B4F56u);
	r8 += 0x7Eu;  /* 0C0B4F56 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B4F5Au, 3);  /* 0C0B4F58 mov.w @Rm,Rn */
	IF(0x0C0B4F5Au); MACL = r6 * r9;  /* 0C0B4F5A mul.l Rm,Rn */
	r5 = 0xA5u; UPD(0x0C0B4F5Eu, 3);  /* 0C0B4F5C mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0B4F5E add #imm,Rn */
	IF(0x0C0B4F60u); r9 = MACL;  /* 0C0B4F60 sts macl,Rn */
	r9 += r10;  /* 0C0B4F62 add Rm,Rn */
	r9 += r5;  /* 0C0B4F64 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B4F68u, 5);  /* 0C0B4F66 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B4F68 add #imm,Rn */
	W8(r9, r10); UPD(0x0C0B4F6Cu, 2);  /* 0C0B4F6A mov.b Rm,@Rn */
L_0C0B4F6C: BLKS(0x0C0B4F6Cu);
	r3 = 0x0u;  /* 0C0B4F6C mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4F6E bra */
L_0C0B4F80: BLKS(0x0C0B4F80u);
	r8 = 0xB4u; UPD(0x0C0B4F82u, 1);  /* 0C0B4F80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4F82 add #imm,Rn */
	IF(0x0C0B4F84u); MACL = r12 * r8;  /* 0C0B4F84 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4F88u, 4);  /* 0C0B4F86 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0B4F88 mov #imm,Rn */
	IF(0x0C0B4F8Au); r8 = MACL;  /* 0C0B4F8A sts macl,Rn */
	r8 += r0;  /* 0C0B4F8C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4F90u, 4);  /* 0C0B4F8E mov.w @(disp,pc),Rn */
	IF(0x0C0B4F90u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F92u, 1);  /* 0C0B4F90 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4F92 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4F96u, 2);  /* 0C0B4F94 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4F96 add #imm,Rn */
	IF(0x0C0B4F98u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F9Au, 2);  /* 0C0B4F98 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4F9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B4F9Eu, 2);  /* 0C0B4F9C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 3); goto L_0C0B4C90; }  /* 0C0B4F9E bra */
L_0C0B4FB0: BLKS(0x0C0B4FB0u);
	r9 = 0xB4u; UPD(0x0C0B4FB2u, 1);  /* 0C0B4FB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4FB2 add #imm,Rn */
	IF(0x0C0B4FB4u); MACL = r12 * r9;  /* 0C0B4FB4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4FB8u, 4);  /* 0C0B4FB6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4FB8 mov #imm,Rn */
	IF(0x0C0B4FBAu); r9 = MACL;  /* 0C0B4FBA sts macl,Rn */
	r9 += r0;  /* 0C0B4FBC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4FC0u, 4);  /* 0C0B4FBE mov.w @(disp,pc),Rn */
	IF(0x0C0B4FC0u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B4FC2u, 1);  /* 0C0B4FC0 mov.b @(r0,Rm),Rn */
	r13 = 0xA9u; UPD(0x0C0B4FC4u, 1);  /* 0C0B4FC2 mov.w @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4FC4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4FC8u, 2);  /* 0C0B4FC6 mov.l Rm,@Rn */
	r13 += r9;  /* 0C0B4FC8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4FCCu, 2);  /* 0C0B4FCA mov.b @Rm,Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0B4FCEu, 1);  /* 0C0B4FCC mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C0B4FCE extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B4FD2u, 2);  /* 0C0B4FD0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B4FD4u, 1);  /* 0C0B4FD2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B4FD6u, 1);  /* 0C0B4FD4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4FD6u); { u32 t_ = r8; PR = 0x0C0B4FDAu; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4FDAu); }  /* 0C0B4FD6 jsr @Rn */
L_0C0B4FDA: BLKS(0x0C0B4FDAu);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4FDCu, 1);  /* 0C0B4FDA mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C0B4FDC mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C0B4FE0u, 2);  /* 0C0B4FDE mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0B4FE0 extu.b Rm,Rn */
	r11 = 0xC07CD80u; UPD(0x0C0B4FE4u, 2);  /* 0C0B4FE2 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0B4FE4 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0B4FE8u, 2);  /* 0C0B4FE6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0B4FEAu, 1);  /* 0C0B4FE8 mov.l Rm,@(disp,Rn) */
	r10 = 0xC175064u; UPD(0x0C0B4FECu, 1);  /* 0C0B4FEA mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B4FEEu, 1);  /* 0C0B4FEC mov.l @(disp,Rm),Rn */
	IF(0x0C0B4FEEu); { u32 t_ = r11; PR = 0x0C0B4FF2u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4FF2u); }  /* 0C0B4FEE jsr @Rn */
L_0C0B4FF2: BLKS(0x0C0B4FF2u);
	r0 = R32(r10); UPD(0x0C0B4FF4u, 1);  /* 0C0B4FF2 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4FF4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5000u, 4); goto L_0C0B5000; } UPD(0x0C0B4FFAu, 1); goto L_0C0B4FFA; }  /* 0C0B4FF6 bt/s */
L_0C0B4FFA: BLKS(0x0C0B4FFAu);
	{ W32(r9, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B4FFA bra */
L_0C0B5000: BLKS(0x0C0B5000u);
	r7 = 0xC071C90u; UPD(0x0C0B5002u, 1);  /* 0C0B5000 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B5004u, 1);  /* 0C0B5002 mov.l @(disp,pc),Rn */
	IF(0x0C0B5004u); { u32 t_ = r7; PR = 0x0C0B5008u; IF(0x0C0B5006u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B5008u); }  /* 0C0B5004 jsr @Rn */
L_0C0B5008: BLKS(0x0C0B5008u);
	{ IF(0x0C0B500Au); ; /* slot nop */ UPD(0x0C0B4FFAu, 3); goto L_0C0B4FFA; }  /* 0C0B5008 bra */
L_0C0B5010: BLKS(0x0C0B5010u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B5010 bra */
}

/* FUN_0c0b5040 */
void blk_f_0C0B5040(sh3_t *c)
{
	LOCALS;
L_0C0B5040: BLKS(0x0C0B5040u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5042u, 1);  /* 0C0B5040 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0B5044u, 1);  /* 0C0B5042 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0B5044 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5048u, 2);  /* 0C0B5046 mov.l Rm,@-Rn */
	IF(0x0C0B5048u); MACL = r8 * r2;  /* 0C0B5048 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B504Cu, 3);  /* 0C0B504A mov.l Rm,@-Rn */
	r4 = 0xC286578u; UPD(0x0C0B504Eu, 1);  /* 0C0B504C mov.l @(disp,pc),Rn */
	IF(0x0C0B504Eu); r0 = MACL;  /* 0C0B504E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5052u, 2);  /* 0C0B5050 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C0B5052 add Rm,Rn */
	IF(0x0C0B5054u); r15 -= 4; W32(r15, PR); UPD(0x0C0B5056u, 2);  /* 0C0B5054 sts.l pr,@-Rn */
	r0 = 0x9Fu; UPD(0x0C0B5058u, 1);  /* 0C0B5056 mov.w @(disp,pc),Rn */
	IF(0x0C0B5058u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B505Au, 1);  /* 0C0B5058 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C0B505A mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C0B505C extu.b Rm,Rn */
	T = r2 > r0;  /* 0C0B505E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B50C0u, 6); goto L_0C0B50C0; } goto L_0C0B5064; }  /* 0C0B5060 bt/s */
L_0C0B5064: BLKS(0x0C0B5064u);
	r0 = 0xC0B5078u;  /* 0C0B5064 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B5066 add Rm,Rn */
	IF(0x0C0B5068u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B506Au, 4);  /* 0C0B5068 mov.w @(r0,Rm),Rn */
	IF(0x0C0B506Au); { u32 tv_ = (r5 + 0x0C0B506Eu); u32 t_ = PHYS(tv_); IF(0x0C0B506Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5090u: goto L_0C0B5090; case 0x0C0B50D0u: goto L_0C0B50D0; case 0x0C0B5170u: goto L_0C0B5170; case 0x0C0B51E0u: goto L_0C0B51E0; case 0x0C0B54F0u: goto L_0C0B54F0; default: JUMPD(tv_); } }  /* 0C0B506A braf Rn */
L_0C0B5090: BLKS(0x0C0B5090u);
	r3 = 0xB4u; UPD(0x0C0B5092u, 1);  /* 0C0B5090 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B5092 mov #imm,Rn */
	IF(0x0C0B5094u); MACL = r8 * r3;  /* 0C0B5094 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5098u, 4);  /* 0C0B5096 mov.l @(disp,pc),Rn */
	IF(0x0C0B5098u); r3 = MACL;  /* 0C0B5098 sts macl,Rn */
	r3 += r0;  /* 0C0B509A add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0B509C add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B50A0u, 4);  /* 0C0B509E mov.w @Rm,Rn */
	r4 = r9;  /* 0C0B50A0 mov Rm,Rn */
	IF(0x0C0B50A2u); T = r4 >> 31; r4 = (r4 << 1) | T;  /* 0C0B50A2 rotl Rn */
	IF(0x0C0B50A4u); r10 = T;  /* 0C0B50A4 movt Rn */
	r9 += r10;  /* 0C0B50A6 add Rm,Rn */
	r8 = 0xC207564u; UPD(0x0C0B50AAu, 5);  /* 0C0B50A8 mov.l @(disp,pc),Rn */
	IF(0x0C0B50AAu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0B50AA shar Rn */
	r7 = 0xC207568u; UPD(0x0C0B50AEu, 2);  /* 0C0B50AC mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFC4u;  /* 0C0B50AE add #imm,Rn */
	r6 = 0x9Fu; UPD(0x0C0B50B2u, 2);  /* 0C0B50B0 mov.w @(disp,pc),Rn */
	W16(r8, r9); UPD(0x0C0B50B4u, 1);  /* 0C0B50B2 mov.w Rm,@Rn */
	r3 += r6;  /* 0C0B50B4 add Rm,Rn */
	W32(r7, r1); UPD(0x0C0B50B8u, 2);  /* 0C0B50B6 mov.l Rm,@Rn */
L_0C0B50B8: BLKS(0x0C0B50B8u);
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B50BAu, 1);  /* 0C0B50B8 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B50BA add #imm,Rn */
	W8(r3, r2); UPD(0x0C0B50BEu, 2);  /* 0C0B50BC mov.b Rm,@Rn */
	IF(0x0C0B50BEu); ;  /* 0C0B50BE nop */
	UPD(0x0C0B50C0u, 1);
L_0C0B50C0: BLKS(0x0C0B50C0u);
	r15 = r14;  /* 0C0B50C0 mov Rm,Rn */
	IF(0x0C0B50C2u); PR = R32(r15); r15 += 4; UPD(0x0C0B50C4u, 2);  /* 0C0B50C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B50C6u, 1);  /* 0C0B50C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B50C8u, 1);  /* 0C0B50C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B50CAu, 1);  /* 0C0B50C8 mov.l @Rm+,Rn */
	IF(0x0C0B50CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B50CA rts */
L_0C0B50D0: BLKS(0x0C0B50D0u);
	r5 = 0xB4u; UPD(0x0C0B50D2u, 1);  /* 0C0B50D0 mov.w @(disp,pc),Rn */
	IF(0x0C0B50D2u); MACL = r8 * r5;  /* 0C0B50D2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B50D6u, 3);  /* 0C0B50D4 mov.l @(disp,pc),Rn */
	IF(0x0C0B50D6u); r3 = MACL;  /* 0C0B50D6 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C0B50DAu, 2);  /* 0C0B50D8 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0B50DA add Rm,Rn */
	r7 += r3;  /* 0C0B50DC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B50E0u, 3);  /* 0C0B50DE mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0B50E0 tst Rm,Rn */
	if (!T) { UPD(0x0C0B5110u, 4); goto L_0C0B5110; }  /* 0C0B50E2 bf */
L_0C0B50E4: BLKS(0x0C0B50E4u);
	r10 = 0xC23945Cu; UPD(0x0C0B50E6u, 1);  /* 0C0B50E4 mov.l @(disp,pc),Rn */
	r9 = R32(r10); UPD(0x0C0B50E8u, 1);  /* 0C0B50E6 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0B50E8 tst Rm,Rn */
	if (!T) { UPD(0x0C0B5110u, 4); goto L_0C0B5110; }  /* 0C0B50EA bf */
L_0C0B50EC: BLKS(0x0C0B50ECu);
	r0 = R32(r3); UPD(0x0C0B50EEu, 1);  /* 0C0B50EC mov.l @Rm,Rn */
	r4 = r6;  /* 0C0B50EE mov Rm,Rn */
	r1 = 0xDFFFFFFFu; UPD(0x0C0B50F2u, 2);  /* 0C0B50F0 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B50F2 add #imm,Rn */
	r0 &= r1;  /* 0C0B50F4 and Rm,Rn */
	W32(r3, r0); UPD(0x0C0B50F8u, 3);  /* 0C0B50F6 mov.l Rm,@Rn */
	r3 = r7;  /* 0C0B50F8 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0B50FA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B50FEu, 3);  /* 0C0B50FC mov.b @Rm,Rn */
	r0 |= 0x40u;  /* 0C0B50FE or #imm,r0 */
	W8(r3, r0); UPD(0x0C0B5102u, 2);  /* 0C0B5100 mov.b Rm,@Rn */
	W8(r7, r4); UPD(0x0C0B5104u, 1);  /* 0C0B5102 mov.b Rm,@Rn */
	r2 = 0xC175064u; UPD(0x0C0B5106u, 1);  /* 0C0B5104 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0B5108u, 1);  /* 0C0B5106 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0B5108 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B5110u, 4); goto L_0C0B5110; } goto L_0C0B510E; }  /* 0C0B510A bf/s */
L_0C0B510E: BLKS(0x0C0B510Eu);
	W32(r2, r7); UPD(0x0C0B5110u, 2);  /* 0C0B510E mov.l Rm,@Rn */
L_0C0B5110: BLKS(0x0C0B5110u);
	r9 = 0xB4u; UPD(0x0C0B5112u, 1);  /* 0C0B5110 mov.w @(disp,pc),Rn */
	IF(0x0C0B5112u); MACL = r8 * r9;  /* 0C0B5112 mul.l Rm,Rn */
	r6 = 0xC207568u; UPD(0x0C0B5116u, 3);  /* 0C0B5114 mov.l @(disp,pc),Rn */
	r8 = 0xC286578u; UPD(0x0C0B5118u, 1);  /* 0C0B5116 mov.l @(disp,pc),Rn */
	IF(0x0C0B5118u); r3 = MACL;  /* 0C0B5118 sts macl,Rn */
	r3 += r8;  /* 0C0B511A add Rm,Rn */
	r8 = r3;  /* 0C0B511C mov Rm,Rn */
	r9 = 0xC207564u; UPD(0x0C0B5120u, 4);  /* 0C0B511E mov.l @(disp,pc),Rn */
	r8 += 0x3Cu;  /* 0C0B5120 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B5124u, 2);  /* 0C0B5122 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B5126u, 1);  /* 0C0B5124 mov.w @Rm,Rn */
	r5 = R32(r6); UPD(0x0C0B5128u, 1);  /* 0C0B5126 mov.l @Rm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0B5128 cmp/gt Rm,Rn */
	r10 = 0xE0Fu; UPD(0x0C0B512Cu, 2);  /* 0C0B512A mov.w @(disp,pc),Rn */
	IF(0x0C0B512Cu); r7 = T;  /* 0C0B512C movt Rn */
	r5 += 0x1u;  /* 0C0B512E add #imm,Rn */
	T = (s32)r10 >= (s32)r5;  /* 0C0B5130 cmp/ge Rm,Rn */
	IF(0x0C0B5132u); r2 = T;  /* 0C0B5132 movt Rn */
	r7 &= r2;  /* 0C0B5134 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B5136 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B50C0u, 9); goto L_0C0B50C0; } UPD(0x0C0B513Cu, 1); goto L_0C0B513C; }  /* 0C0B5138 bf/s */
L_0C0B513C: BLKS(0x0C0B513Cu);
	r0 = 0x9Fu; UPD(0x0C0B513Eu, 1);  /* 0C0B513C mov.w @(disp,pc),Rn */
	IF(0x0C0B513Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B5140u, 1);  /* 0C0B513E mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0B5140 add #imm,Rn */
	IF(0x0C0B5142u); W8(r0 + r3, r6); UPD(0x0C0B5144u, 2);  /* 0C0B5142 mov.b Rm,@(r0,Rn) */
	r5 = R32(r3); UPD(0x0C0B5146u, 1);  /* 0C0B5144 mov.l @Rm,Rn */
	r0 += 0x1u;  /* 0C0B5146 add #imm,Rn */
	r2 = 0xC0C21F0u; UPD(0x0C0B514Au, 2);  /* 0C0B5148 mov.l @(disp,pc),Rn */
	r10 = 0x20000000u; UPD(0x0C0B514Cu, 1);  /* 0C0B514A mov.l @(disp,pc),Rn */
	IF(0x0C0B514Cu); W8(r0 + r3, r7); UPD(0x0C0B514Eu, 1);  /* 0C0B514C mov.b Rm,@(r0,Rn) */
	r5 |= r10;  /* 0C0B514E or Rm,Rn */
	IF(0x0C0B5150u); { u32 t_ = r2; PR = 0x0C0B5154u; W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C21F0, 0x0C0C21F0u, 0x0C0B5154u); }  /* 0C0B5150 jsr @Rn */
L_0C0B5154: BLKS(0x0C0B5154u);
	r7 = 0xC0C2110u; UPD(0x0C0B5156u, 1);  /* 0C0B5154 mov.l @(disp,pc),Rn */
	IF(0x0C0B5156u); { u32 t_ = r7; PR = 0x0C0B515Au; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B515Au); }  /* 0C0B5156 jsr @Rn */
L_0C0B515A: BLKS(0x0C0B515Au);
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B515Cu, 1);  /* 0C0B515A mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B515Eu, 1);  /* 0C0B515C mov.w @Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0B515E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B50C0u, 4); goto L_0C0B50C0; }  /* 0C0B5160 bt */
L_0C0B5162: BLKS(0x0C0B5162u);
	r1 = 0xC2B07FCu; UPD(0x0C0B5164u, 1);  /* 0C0B5162 mov.l @(disp,pc),Rn */
	r2 = 0x10u;  /* 0C0B5164 mov #imm,Rn */
	UPD(0x0C0B5166u, 1);
L_0C0B5166: BLKS(0x0C0B5166u);
	{ W32(r1, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0B50C0u, 3); goto L_0C0B50C0; }  /* 0C0B5166 bra */
L_0C0B5170: BLKS(0x0C0B5170u);
	r9 = 0xB4u; UPD(0x0C0B5172u, 1);  /* 0C0B5170 mov.w @(disp,pc),Rn */
	IF(0x0C0B5172u); MACL = r8 * r9;  /* 0C0B5172 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5176u, 3);  /* 0C0B5174 mov.l @(disp,pc),Rn */
	IF(0x0C0B5176u); r9 = MACL;  /* 0C0B5176 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C0B517Au, 2);  /* 0C0B5178 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C0B517A add Rm,Rn */
	r10 += r9;  /* 0C0B517C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B5180u, 3);  /* 0C0B517E mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0B5180 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B5182 tst Rm,Rn */
	if (T) { UPD(0x0C0B51C0u, 5); goto L_0C0B51C0; }  /* 0C0B5184 bt */
L_0C0B5186: BLKS(0x0C0B5186u);
	T = r0 == 0x1u;  /* 0C0B5186 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B50C0u, 4); goto L_0C0B50C0; }  /* 0C0B5188 bf */
L_0C0B518A: BLKS(0x0C0B518Au);
	r0 = 0xC0A9CB0u; UPD(0x0C0B518Cu, 1);  /* 0C0B518A mov.l @(disp,pc),Rn */
	IF(0x0C0B518Cu); { u32 t_ = r0; PR = 0x0C0B5190u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0B5190u); }  /* 0C0B518C jsr @Rn */
L_0C0B5190: BLKS(0x0C0B5190u);
	r4 = r8;  /* 0C0B5190 mov Rm,Rn */
	r8 = 0xC0A9B40u; UPD(0x0C0B5194u, 2);  /* 0C0B5192 mov.l @(disp,pc),Rn */
	IF(0x0C0B5194u); { u32 t_ = r8; PR = 0x0C0B5198u; IF(0x0C0B5196u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C0B5198u); }  /* 0C0B5194 jsr @Rn */
L_0C0B5198: BLKS(0x0C0B5198u);
	r3 = R32(r9); UPD(0x0C0B519Au, 1);  /* 0C0B5198 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C0B519Cu, 1);  /* 0C0B519A mov.w @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C0B519C tst Rm,Rn */
	if (T) { UPD(0x0C0B50C0u, 4); goto L_0C0B50C0; }  /* 0C0B519E bt */
L_0C0B51A0: BLKS(0x0C0B51A0u);
	r5 = 0x0u;  /* 0C0B51A0 mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B51A4u, 2);  /* 0C0B51A2 mov.w @(disp,pc),Rn */
	IF(0x0C0B51A4u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B51A6u, 1);  /* 0C0B51A4 mov.b @(r0,Rm),Rn */
	r2 = 0xDFFFFFFFu; UPD(0x0C0B51A8u, 1);  /* 0C0B51A6 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0B51A8 add #imm,Rn */
	r3 &= r2;  /* 0C0B51AA and Rm,Rn */
	IF(0x0C0B51ACu); W8(r0 + r9, r6); UPD(0x0C0B51AEu, 3);  /* 0C0B51AC mov.b Rm,@(r0,Rn) */
	r2 = 0x0u;  /* 0C0B51AE mov #imm,Rn */
	W8(r10, r5); UPD(0x0C0B51B2u, 2);  /* 0C0B51B0 mov.b Rm,@Rn */
	r1 = 0xC207568u; UPD(0x0C0B51B4u, 1);  /* 0C0B51B2 mov.l @(disp,pc),Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0B5166u, 3); goto L_0C0B5166; }  /* 0C0B51B4 bra */
L_0C0B51C0: BLKS(0x0C0B51C0u);
	r10 += 0x1u;  /* 0C0B51C0 add #imm,Rn */
	r9 = 0xC072A90u; UPD(0x0C0B51C4u, 2);  /* 0C0B51C2 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C0B51C4 mov #imm,Rn */
	W8(r10, r0); UPD(0x0C0B51C8u, 2);  /* 0C0B51C6 mov.b Rm,@Rn */
	r5 = 0x8u;  /* 0C0B51C8 mov #imm,Rn */
	IF(0x0C0B51CAu); { u32 t_ = r9; PR = 0x0C0B51CEu; r10 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C072A90, 0x0C072A90u, 0x0C0B51CEu); }  /* 0C0B51CA jsr @Rn */
L_0C0B51CE: BLKS(0x0C0B51CEu);
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B51D0u, 1);  /* 0C0B51CE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0B51D0 add #imm,Rn */
	W8(r10, r8); UPD(0x0C0B51D4u, 2);  /* 0C0B51D2 mov.b Rm,@Rn */
L_0C0B51D4: BLKS(0x0C0B51D4u);
	{ IF(0x0C0B51D6u); ; /* slot nop */ UPD(0x0C0B50C0u, 3); goto L_0C0B50C0; }  /* 0C0B51D4 bra */
L_0C0B51E0: BLKS(0x0C0B51E0u);
	r10 = 0xC0A9CB0u; UPD(0x0C0B51E2u, 1);  /* 0C0B51E0 mov.l @(disp,pc),Rn */
	r9 = 0xC0A9B40u; UPD(0x0C0B51E4u, 1);  /* 0C0B51E2 mov.l @(disp,pc),Rn */
	IF(0x0C0B51E4u); { u32 t_ = r10; PR = 0x0C0B51E8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0B51E8u); }  /* 0C0B51E4 jsr @Rn */
L_0C0B51E8: BLKS(0x0C0B51E8u);
	IF(0x0C0B51E8u); { u32 t_ = r9; PR = 0x0C0B51ECu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C0B51ECu); }  /* 0C0B51E8 jsr @Rn */
L_0C0B51EC: BLKS(0x0C0B51ECu);
	r3 = 0xB4u; UPD(0x0C0B51EEu, 1);  /* 0C0B51EC mov.w @(disp,pc),Rn */
	IF(0x0C0B51EEu); MACL = r8 * r3;  /* 0C0B51EE mul.l Rm,Rn */
	r4 = 0xC207568u; UPD(0x0C0B51F2u, 3);  /* 0C0B51F0 mov.l @(disp,pc),Rn */
	r10 = 0xC286578u; UPD(0x0C0B51F4u, 1);  /* 0C0B51F2 mov.l @(disp,pc),Rn */
	IF(0x0C0B51F4u); r3 = MACL;  /* 0C0B51F4 sts macl,Rn */
	r0 = R32(r4); UPD(0x0C0B51F8u, 2);  /* 0C0B51F6 mov.l @Rm,Rn */
	r3 += r10;  /* 0C0B51F8 add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0B51FA add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B51FEu, 3);  /* 0C0B51FC mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0B51FE add #imm,Rn */
	W32(r4, r0); UPD(0x0C0B5202u, 2);  /* 0C0B5200 mov.l Rm,@Rn */
	T = (r7 & r7) == 0;  /* 0C0B5202 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B520Cu, 4); goto L_0C0B520C; } goto L_0C0B5208; }  /* 0C0B5204 bf/s */
L_0C0B5208: BLKS(0x0C0B5208u);
	{ IF(0x0C0B520Au); ; /* slot nop */ UPD(0x0C0B54D0u, 4); goto L_0C0B54D0; }  /* 0C0B5208 bra */
L_0C0B520C: BLKS(0x0C0B520Cu);
	r0 = 0xA0u; UPD(0x0C0B520Eu, 1);  /* 0C0B520C mov.w @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0B520E mov #imm,Rn */
	IF(0x0C0B5210u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B5212u, 2);  /* 0C0B5210 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C0B5212 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C0B5214 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B51D4u, 5); goto L_0C0B51D4; }  /* 0C0B5216 bt */
L_0C0B5218: BLKS(0x0C0B5218u);
	r0 = 0xC0B5260u;  /* 0C0B5218 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B521A add Rm,Rn */
	IF(0x0C0B521Cu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B521Eu, 3);  /* 0C0B521C mov.w @(r0,Rm),Rn */
	IF(0x0C0B521Eu); { u32 tv_ = (r3 + 0x0C0B5222u); u32 t_ = PHYS(tv_); IF(0x0C0B5220u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5280u: goto L_0C0B5280; case 0x0C0B52C0u: goto L_0C0B52C0; case 0x0C0B52F0u: goto L_0C0B52F0; case 0x0C0B5320u: goto L_0C0B5320; case 0x0C0B5350u: goto L_0C0B5350; case 0x0C0B5380u: goto L_0C0B5380; case 0x0C0B53B0u: goto L_0C0B53B0; case 0x0C0B53E0u: goto L_0C0B53E0; case 0x0C0B5420u: goto L_0C0B5420; case 0x0C0B5450u: goto L_0C0B5450; case 0x0C0B5480u: goto L_0C0B5480; default: JUMPD(tv_); } }  /* 0C0B521E braf Rn */
L_0C0B5280: BLKS(0x0C0B5280u);
	r4 = 0xB4u; UPD(0x0C0B5282u, 1);  /* 0C0B5280 mov.w @(disp,pc),Rn */
	IF(0x0C0B5282u); MACL = r8 * r4;  /* 0C0B5282 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B5286u, 3);  /* 0C0B5284 mov.l @(disp,pc),Rn */
	IF(0x0C0B5286u); r3 = MACL;  /* 0C0B5286 sts macl,Rn */
	r3 += r2;  /* 0C0B5288 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C0B528Cu, 3);  /* 0C0B528A mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B528C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5290u, 2);  /* 0C0B528E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B5290 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B5292 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B5294 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B51D4u, 6); goto L_0C0B51D4; } UPD(0x0C0B529Au, 1); goto L_0C0B529A; }  /* 0C0B5296 bf/s */
L_0C0B529A: BLKS(0x0C0B529Au);
	r0 = 0x0u;  /* 0C0B529A mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0B529Eu, 2);  /* 0C0B529C mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C0B52A0u, 1);  /* 0C0B529E mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B52A0 add Rm,Rn */
	r1 = r2;  /* 0C0B52A2 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B52A4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B52A8u, 4);  /* 0C0B52A6 mov.b @Rm,Rn */
	r0 |= 0x3u;  /* 0C0B52A8 or #imm,r0 */
	UPD(0x0C0B52AAu, 1);
L_0C0B52AA: BLKS(0x0C0B52AAu);
	W8(r1, r0); UPD(0x0C0B52ACu, 1);  /* 0C0B52AA mov.b Rm,@Rn */
L_0C0B52AC: BLKS(0x0C0B52ACu);
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B52AEu, 1);  /* 0C0B52AC mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B52AE add #imm,Rn */
	W8(r2, r9); UPD(0x0C0B52B2u, 2);  /* 0C0B52B0 mov.b Rm,@Rn */
L_0C0B52B2: BLKS(0x0C0B52B2u);
	{ IF(0x0C0B52B4u); ; /* slot nop */ UPD(0x0C0B50C0u, 3); goto L_0C0B50C0; }  /* 0C0B52B2 bra */
L_0C0B52C0: BLKS(0x0C0B52C0u);
	r5 = 0xB4u; UPD(0x0C0B52C2u, 1);  /* 0C0B52C0 mov.w @(disp,pc),Rn */
	IF(0x0C0B52C2u); MACL = r8 * r5;  /* 0C0B52C2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B52C6u, 3);  /* 0C0B52C4 mov.l @(disp,pc),Rn */
	IF(0x0C0B52C6u); r3 = MACL;  /* 0C0B52C6 sts macl,Rn */
	r3 += r7;  /* 0C0B52C8 add Rm,Rn */
	r7 = 0x99u; UPD(0x0C0B52CCu, 3);  /* 0C0B52CA mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0B52CC add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B52D0u, 2);  /* 0C0B52CE mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C0B52D2u, 1);  /* 0C0B52D0 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0B52D2 add #imm,Rn */
	r9 = r10 & 0xFF;  /* 0C0B52D4 extu.b Rm,Rn */
	T = r9 == r2;  /* 0C0B52D6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B52B2u, 6); goto L_0C0B52B2; } UPD(0x0C0B52DCu, 1); goto L_0C0B52DC; }  /* 0C0B52D8 bf/s */
L_0C0B52DC: BLKS(0x0C0B52DCu);
	r2 += 0xFFFFFFB0u;  /* 0C0B52DC add #imm,Rn */
	r2 += r3;  /* 0C0B52DE add Rm,Rn */
	r1 = r2;  /* 0C0B52E0 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B52E2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B52E6u, 5);  /* 0C0B52E4 mov.b @Rm,Rn */
	r0 &= 0xFCu;  /* 0C0B52E6 and #imm,r0 */
	UPD(0x0C0B52E8u, 1);
L_0C0B52E8: BLKS(0x0C0B52E8u);
	r3 = 0x0u;  /* 0C0B52E8 mov #imm,Rn */
	W8(r1, r0); UPD(0x0C0B52ECu, 2);  /* 0C0B52EA mov.b Rm,@Rn */
	{ W8(r7, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0B52ACu, 3); goto L_0C0B52AC; }  /* 0C0B52EC bra */
L_0C0B52F0: BLKS(0x0C0B52F0u);
	r3 = 0xB4u; UPD(0x0C0B52F2u, 1);  /* 0C0B52F0 mov.w @(disp,pc),Rn */
	IF(0x0C0B52F2u); MACL = r8 * r3;  /* 0C0B52F2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B52F6u, 3);  /* 0C0B52F4 mov.l @(disp,pc),Rn */
	IF(0x0C0B52F6u); r3 = MACL;  /* 0C0B52F6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B52FAu, 2);  /* 0C0B52F8 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0B52FA add Rm,Rn */
	r2 += r3;  /* 0C0B52FC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5300u, 3);  /* 0C0B52FE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0B5300 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0B5302 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B5304 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B52B2u, 6); goto L_0C0B52B2; } UPD(0x0C0B530Au, 1); goto L_0C0B530A; }  /* 0C0B5306 bf/s */
L_0C0B530A: BLKS(0x0C0B530Au);
	r4 = 0x0u;  /* 0C0B530A mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0B530Eu, 2);  /* 0C0B530C mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C0B5310u, 1);  /* 0C0B530E mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B5310 add Rm,Rn */
	r1 = r2;  /* 0C0B5312 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B5314 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5318u, 4);  /* 0C0B5316 mov.b @Rm,Rn */
	{ r0 |= 0xCu; /* slot or #imm,r0 */ UPD(0x0C0B52AAu, 3); goto L_0C0B52AA; }  /* 0C0B5318 bra */
L_0C0B5320: BLKS(0x0C0B5320u);
	r10 = 0xB4u; UPD(0x0C0B5322u, 1);  /* 0C0B5320 mov.w @(disp,pc),Rn */
	IF(0x0C0B5322u); MACL = r8 * r10;  /* 0C0B5322 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B5326u, 3);  /* 0C0B5324 mov.l @(disp,pc),Rn */
	IF(0x0C0B5326u); r3 = MACL;  /* 0C0B5326 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C0B532Au, 2);  /* 0C0B5328 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0B532A add Rm,Rn */
	r7 += r3;  /* 0C0B532C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B5330u, 3);  /* 0C0B532E mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B5330 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0B5334u, 2);  /* 0C0B5332 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C0B5334 extu.b Rm,Rn */
	r2 = 0xF0u; UPD(0x0C0B5338u, 2);  /* 0C0B5336 mov.w @(disp,pc),Rn */
	T = r0 == r2;  /* 0C0B5338 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B52B2u, 4); goto L_0C0B52B2; }  /* 0C0B533A bf */
L_0C0B533C: BLKS(0x0C0B533Cu);
	r2 += 0xFFFFFFB0u;  /* 0C0B533C add #imm,Rn */
	r2 += r3;  /* 0C0B533E add Rm,Rn */
	r1 = r2;  /* 0C0B5340 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B5342 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5346u, 5);  /* 0C0B5344 mov.b @Rm,Rn */
	{ r0 &= 0xF3u; /* slot and #imm,r0 */ UPD(0x0C0B52E8u, 3); goto L_0C0B52E8; }  /* 0C0B5346 bra */
L_0C0B5350: BLKS(0x0C0B5350u);
	r5 = 0xB4u; UPD(0x0C0B5352u, 1);  /* 0C0B5350 mov.w @(disp,pc),Rn */
	IF(0x0C0B5352u); MACL = r8 * r5;  /* 0C0B5352 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B5356u, 3);  /* 0C0B5354 mov.l @(disp,pc),Rn */
	IF(0x0C0B5356u); r3 = MACL;  /* 0C0B5356 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B535Au, 2);  /* 0C0B5358 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B535A add Rm,Rn */
	r2 += r3;  /* 0C0B535C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5360u, 3);  /* 0C0B535E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B5360 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B5362 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B5364 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B52B2u, 6); goto L_0C0B52B2; } UPD(0x0C0B536Au, 1); goto L_0C0B536A; }  /* 0C0B5366 bf/s */
L_0C0B536A: BLKS(0x0C0B536Au);
	r8 = 0x0u;  /* 0C0B536A mov #imm,Rn */
	W8(r2, r8); UPD(0x0C0B536Eu, 2);  /* 0C0B536C mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C0B5370u, 1);  /* 0C0B536E mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B5370 add Rm,Rn */
	r1 = r2;  /* 0C0B5372 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B5374 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5378u, 4);  /* 0C0B5376 mov.b @Rm,Rn */
	{ r0 |= 0x30u; /* slot or #imm,r0 */ UPD(0x0C0B52AAu, 3); goto L_0C0B52AA; }  /* 0C0B5378 bra */
L_0C0B5380: BLKS(0x0C0B5380u);
	r3 = 0xB4u; UPD(0x0C0B5382u, 1);  /* 0C0B5380 mov.w @(disp,pc),Rn */
	IF(0x0C0B5382u); MACL = r8 * r3;  /* 0C0B5382 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5386u, 3);  /* 0C0B5384 mov.l @(disp,pc),Rn */
	IF(0x0C0B5386u); r3 = MACL;  /* 0C0B5386 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C0B538Au, 2);  /* 0C0B5388 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0B538A add Rm,Rn */
	r7 += r3;  /* 0C0B538C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B5390u, 3);  /* 0C0B538E mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C0B5392u, 1);  /* 0C0B5390 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B5392 add #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C0B5394 extu.b Rm,Rn */
	T = r6 == r2;  /* 0C0B5396 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B546Cu, 6); goto L_0C0B546C; } UPD(0x0C0B539Cu, 1); goto L_0C0B539C; }  /* 0C0B5398 bf/s */
L_0C0B539C: BLKS(0x0C0B539Cu);
	r2 += 0xFFFFFFB0u;  /* 0C0B539C add #imm,Rn */
	r2 += r3;  /* 0C0B539E add Rm,Rn */
	r1 = r2;  /* 0C0B53A0 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B53A2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B53A6u, 5);  /* 0C0B53A4 mov.b @Rm,Rn */
	{ r0 &= 0xCFu; /* slot and #imm,r0 */ UPD(0x0C0B52E8u, 3); goto L_0C0B52E8; }  /* 0C0B53A6 bra */
L_0C0B53B0: BLKS(0x0C0B53B0u);
	r10 = 0xB4u; UPD(0x0C0B53B2u, 1);  /* 0C0B53B0 mov.w @(disp,pc),Rn */
	IF(0x0C0B53B2u); MACL = r8 * r10;  /* 0C0B53B2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B53B6u, 3);  /* 0C0B53B4 mov.l @(disp,pc),Rn */
	IF(0x0C0B53B6u); r3 = MACL;  /* 0C0B53B6 sts macl,Rn */
	r3 += r2;  /* 0C0B53B8 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C0B53BCu, 3);  /* 0C0B53BA mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B53BC add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B53C0u, 2);  /* 0C0B53BE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B53C0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C0B53C2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B53C4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B546Cu, 6); goto L_0C0B546C; } UPD(0x0C0B53CAu, 1); goto L_0C0B53CA; }  /* 0C0B53C6 bf/s */
L_0C0B53CA: BLKS(0x0C0B53CAu);
	r7 = 0x0u;  /* 0C0B53CA mov #imm,Rn */
	W8(r2, r7); UPD(0x0C0B53CEu, 2);  /* 0C0B53CC mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C0B53D0u, 1);  /* 0C0B53CE mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B53D0 add Rm,Rn */
	r1 = r2;  /* 0C0B53D2 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B53D4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B53D8u, 4);  /* 0C0B53D6 mov.b @Rm,Rn */
	{ r0 |= 0x40u; /* slot or #imm,r0 */ UPD(0x0C0B52AAu, 3); goto L_0C0B52AA; }  /* 0C0B53D8 bra */
L_0C0B53E0: BLKS(0x0C0B53E0u);
	r4 = 0xB4u; UPD(0x0C0B53E2u, 1);  /* 0C0B53E0 mov.w @(disp,pc),Rn */
	IF(0x0C0B53E2u); MACL = r8 * r4;  /* 0C0B53E2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B53E6u, 3);  /* 0C0B53E4 mov.l @(disp,pc),Rn */
	IF(0x0C0B53E6u); r3 = MACL;  /* 0C0B53E6 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C0B53EAu, 2);  /* 0C0B53E8 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0B53EA add Rm,Rn */
	r7 += r3;  /* 0C0B53EC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B53F0u, 3);  /* 0C0B53EE mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C0B53F2u, 1);  /* 0C0B53F0 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0B53F2 add #imm,Rn */
	r5 = r8 & 0xFF;  /* 0C0B53F4 extu.b Rm,Rn */
	T = r5 == r2;  /* 0C0B53F6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B546Cu, 6); goto L_0C0B546C; } UPD(0x0C0B53FCu, 1); goto L_0C0B53FC; }  /* 0C0B53F8 bf/s */
L_0C0B53FC: BLKS(0x0C0B53FCu);
	r2 += 0xFFFFFFB0u;  /* 0C0B53FC add #imm,Rn */
	r2 += r3;  /* 0C0B53FE add Rm,Rn */
	r1 = r2;  /* 0C0B5400 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B5402 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5406u, 5);  /* 0C0B5404 mov.b @Rm,Rn */
	{ r0 &= 0xBFu; /* slot and #imm,r0 */ UPD(0x0C0B52E8u, 3); goto L_0C0B52E8; }  /* 0C0B5406 bra */
L_0C0B5420: BLKS(0x0C0B5420u);
	r3 = 0xB4u; UPD(0x0C0B5422u, 1);  /* 0C0B5420 mov.w @(disp,pc),Rn */
	IF(0x0C0B5422u); MACL = r8 * r3;  /* 0C0B5422 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5426u, 3);  /* 0C0B5424 mov.l @(disp,pc),Rn */
	IF(0x0C0B5426u); r2 = MACL;  /* 0C0B5426 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C0B542Au, 2);  /* 0C0B5428 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C0B542A add Rm,Rn */
	r3 += r2;  /* 0C0B542C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B5430u, 3);  /* 0C0B542E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B5430 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B5432 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B5434 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B546Cu, 6); goto L_0C0B546C; } UPD(0x0C0B543Au, 1); goto L_0C0B543A; }  /* 0C0B5436 bf/s */
L_0C0B543A: BLKS(0x0C0B543Au);
	r5 = 0x0u;  /* 0C0B543A mov #imm,Rn */
	W8(r3, r5); UPD(0x0C0B543Eu, 2);  /* 0C0B543C mov.b Rm,@Rn */
	r7 = 0xFFFFFF80u;  /* 0C0B543E mov #imm,Rn */
	r3 = 0xA0u; UPD(0x0C0B5442u, 2);  /* 0C0B5440 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0B5442 add Rm,Rn */
	r9 = r3;  /* 0C0B5444 mov Rm,Rn */
	r9 += 0x2u;  /* 0C0B5446 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B544Au, 4);  /* 0C0B5448 mov.b @Rm,Rn */
	r10 |= r7;  /* 0C0B544A or Rm,Rn */
	{ W8(r9, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C0B50B8u, 4); goto L_0C0B50B8; }  /* 0C0B544C bra */
L_0C0B5450: BLKS(0x0C0B5450u);
	r0 = 0xB4u; UPD(0x0C0B5452u, 1);  /* 0C0B5450 mov.w @(disp,pc),Rn */
	IF(0x0C0B5452u); MACL = r8 * r0;  /* 0C0B5452 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B5456u, 3);  /* 0C0B5454 mov.l @(disp,pc),Rn */
	IF(0x0C0B5456u); r3 = MACL;  /* 0C0B5456 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C0B545Au, 2);  /* 0C0B5458 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C0B545A add Rm,Rn */
	r7 += r3;  /* 0C0B545C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B5460u, 3);  /* 0C0B545E mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C0B5462u, 1);  /* 0C0B5460 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0B5462 add #imm,Rn */
	r8 = r6 & 0xFF;  /* 0C0B5464 extu.b Rm,Rn */
	T = r8 == r2;  /* 0C0B5466 cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B5470u, 6); goto L_0C0B5470; } UPD(0x0C0B546Cu, 1); goto L_0C0B546C; }  /* 0C0B5468 bt/s */
L_0C0B546C: BLKS(0x0C0B546Cu);
	{ IF(0x0C0B546Eu); ; /* slot nop */ UPD(0x0C0B50C0u, 3); goto L_0C0B50C0; }  /* 0C0B546C bra */
L_0C0B5470: BLKS(0x0C0B5470u);
	r2 += 0xFFFFFFB0u;  /* 0C0B5470 add #imm,Rn */
	r2 += r3;  /* 0C0B5472 add Rm,Rn */
	r1 = r2;  /* 0C0B5474 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0B5476 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B547Au, 5);  /* 0C0B5478 mov.b @Rm,Rn */
	{ r0 &= 0x7Fu; /* slot and #imm,r0 */ UPD(0x0C0B52E8u, 3); goto L_0C0B52E8; }  /* 0C0B547A bra */
L_0C0B5480: BLKS(0x0C0B5480u);
	r5 = 0xB4u; UPD(0x0C0B5482u, 1);  /* 0C0B5480 mov.w @(disp,pc),Rn */
	IF(0x0C0B5482u); MACL = r8 * r5;  /* 0C0B5482 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B5486u, 3);  /* 0C0B5484 mov.l @(disp,pc),Rn */
	IF(0x0C0B5486u); r3 = MACL;  /* 0C0B5486 sts macl,Rn */
	r1 = 0x99u; UPD(0x0C0B548Au, 2);  /* 0C0B5488 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B548A add Rm,Rn */
	r1 += r3;  /* 0C0B548C add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5490u, 3);  /* 0C0B548E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B5490 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C0B5492 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B5494 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B54C0u, 6); goto L_0C0B54C0; } UPD(0x0C0B549Au, 1); goto L_0C0B549A; }  /* 0C0B5496 bf/s */
L_0C0B549A: BLKS(0x0C0B549Au);
	r7 = 0x0u;  /* 0C0B549A mov #imm,Rn */
	W8(r1, r7); UPD(0x0C0B549Eu, 2);  /* 0C0B549C mov.b Rm,@Rn */
	r2 = 0xC207568u; UPD(0x0C0B54A0u, 1);  /* 0C0B549E mov.l @(disp,pc),Rn */
	r8 = 0x1C20u; UPD(0x0C0B54A2u, 1);  /* 0C0B54A0 mov.w @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0B54A4u, 1);  /* 0C0B54A2 mov.l @Rm,Rn */
	T = (s32)r6 > (s32)r8;  /* 0C0B54A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B54BAu, 4); goto L_0C0B54BA; }  /* 0C0B54A6 bf */
L_0C0B54A8: BLKS(0x0C0B54A8u);
	r9 = 0xA2u; UPD(0x0C0B54AAu, 1);  /* 0C0B54A8 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0B54AA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B54AEu, 2);  /* 0C0B54AC mov.b @Rm,Rn */
	r0 |= 0x7Fu;  /* 0C0B54AE or #imm,r0 */
	W8(r9, r0); UPD(0x0C0B54B2u, 2);  /* 0C0B54B0 mov.b Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C0B54B4u, 1);  /* 0C0B54B2 mov.w @(disp,pc),Rn */
	IF(0x0C0B54B4u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B54B6u, 1);  /* 0C0B54B4 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B54B6 add #imm,Rn */
	IF(0x0C0B54B8u); W8(r0 + r3, r4); UPD(0x0C0B54BAu, 2);  /* 0C0B54B8 mov.b Rm,@(r0,Rn) */
L_0C0B54BA: BLKS(0x0C0B54BAu);
	r0 = 0xA0u; UPD(0x0C0B54BCu, 1);  /* 0C0B54BA mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0B54BC add Rm,Rn */
	W8(r3, r7); UPD(0x0C0B54C0u, 2);  /* 0C0B54BE mov.b Rm,@Rn */
L_0C0B54C0: BLKS(0x0C0B54C0u);
	{ IF(0x0C0B54C2u); ; /* slot nop */ UPD(0x0C0B50C0u, 3); goto L_0C0B50C0; }  /* 0C0B54C0 bra */
L_0C0B54D0: BLKS(0x0C0B54D0u);
	r0 = 0x9Fu; UPD(0x0C0B54D2u, 1);  /* 0C0B54D0 mov.w @(disp,pc),Rn */
	IF(0x0C0B54D2u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B54D4u, 1);  /* 0C0B54D2 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C0B54D4 add #imm,Rn */
	IF(0x0C0B54D6u); W8(r0 + r3, r8); UPD(0x0C0B54D8u, 2);  /* 0C0B54D6 mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C0B54D8 add #imm,Rn */
	IF(0x0C0B54DAu); W8(r0 + r3, r7); UPD(0x0C0B54DCu, 2);  /* 0C0B54DA mov.b Rm,@(r0,Rn) */
	r7 = 0xC0C21F0u; UPD(0x0C0B54DEu, 1);  /* 0C0B54DC mov.l @(disp,pc),Rn */
	IF(0x0C0B54DEu); { u32 t_ = r7; PR = 0x0C0B54E2u; IF(0x0C0B54E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21F0, 0x0C0C21F0u, 0x0C0B54E2u); }  /* 0C0B54DE jsr @Rn */
L_0C0B54E2: BLKS(0x0C0B54E2u);
	{ IF(0x0C0B54E4u); ; /* slot nop */ UPD(0x0C0B5162u, 3); goto L_0C0B5162; }  /* 0C0B54E2 bra */
L_0C0B54F0: BLKS(0x0C0B54F0u);
	r9 = 0xC0A9CB0u; UPD(0x0C0B54F2u, 1);  /* 0C0B54F0 mov.l @(disp,pc),Rn */
	r10 = 0xC286578u; UPD(0x0C0B54F4u, 1);  /* 0C0B54F2 mov.l @(disp,pc),Rn */
	IF(0x0C0B54F4u); { u32 t_ = r9; PR = 0x0C0B54F8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0B54F8u); }  /* 0C0B54F4 jsr @Rn */
L_0C0B54F8: BLKS(0x0C0B54F8u);
	r3 = 0xB4u; UPD(0x0C0B54FAu, 1);  /* 0C0B54F8 mov.w @(disp,pc),Rn */
	IF(0x0C0B54FAu); MACL = r8 * r3;  /* 0C0B54FA mul.l Rm,Rn */
	r2 = 0xA0u; UPD(0x0C0B54FEu, 3);  /* 0C0B54FC mov.w @(disp,pc),Rn */
	IF(0x0C0B54FEu); r3 = MACL;  /* 0C0B54FE sts macl,Rn */
	r3 += r10;  /* 0C0B5500 add Rm,Rn */
	r2 += r3;  /* 0C0B5502 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5506u, 4);  /* 0C0B5504 mov.b @Rm,Rn */
	r7 = r6 & 0xFF;  /* 0C0B5506 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B5508 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B5522u, 5); goto L_0C0B5522; } goto L_0C0B550E; }  /* 0C0B550A bf/s */
L_0C0B550E: BLKS(0x0C0B550Eu);
	r2 += 0x2u;  /* 0C0B550E add #imm,Rn */
	r5 += 0x1u;  /* 0C0B5510 add #imm,Rn */
	W8(r2, r7); UPD(0x0C0B5514u, 4);  /* 0C0B5512 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B5516u, 1);  /* 0C0B5514 mov.b @Rm,Rn */
	r7 = r6;  /* 0C0B5516 mov Rm,Rn */
	r0 |= 0x1u;  /* 0C0B5518 or #imm,r0 */
	r2 += 0xFFFFFFFEu;  /* 0C0B551A add #imm,Rn */
	r7 += 0x1u;  /* 0C0B551C add #imm,Rn */
	W8(r5, r0); UPD(0x0C0B5520u, 5);  /* 0C0B551E mov.b Rm,@Rn */
	W8(r2, r7); UPD(0x0C0B5522u, 1);  /* 0C0B5520 mov.b Rm,@Rn */
L_0C0B5522: BLKS(0x0C0B5522u);
	r1 = R32(r3 + 0x24u); UPD(0x0C0B5524u, 1);  /* 0C0B5522 mov.l @(disp,Rm),Rn */
	r8 = 0xFF800000u; UPD(0x0C0B5526u, 1);  /* 0C0B5524 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r8;  /* 0C0B5526 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0B54C0u, 4); goto L_0C0B54C0; }  /* 0C0B5528 bt */
L_0C0B552A: BLKS(0x0C0B552Au);
	r6 = 0x0u;  /* 0C0B552A mov #imm,Rn */
	{ W32(r3, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0B50C0u, 4); goto L_0C0B50C0; }  /* 0C0B552C bra */
}

/* FUN_0c0b5560 */
void blk_f_0C0B5560(sh3_t *c)
{
	LOCALS;
L_0C0B5560: BLKS(0x0C0B5560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5562u, 1);  /* 0C0B5560 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5564u, 1);  /* 0C0B5562 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5566u, 1);  /* 0C0B5564 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5568u, 1);  /* 0C0B5566 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B556Au, 1);  /* 0C0B5568 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0B556Cu, 1);  /* 0C0B556A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0B556C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5570u, 2);  /* 0C0B556E mov.l Rm,@-Rn */
	IF(0x0C0B5570u); MACL = r12 * r0;  /* 0C0B5570 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5574u, 3);  /* 0C0B5572 mov.l Rm,@-Rn */
	r3 = 0xC286578u; UPD(0x0C0B5576u, 1);  /* 0C0B5574 mov.l @(disp,pc),Rn */
	IF(0x0C0B5576u); r0 = MACL;  /* 0C0B5576 sts macl,Rn */
	IF(0x0C0B5578u); r15 -= 4; W32(r15, PR); UPD(0x0C0B557Au, 2);  /* 0C0B5578 sts.l pr,@-Rn */
	r0 += r3;  /* 0C0B557A add Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C0B557Eu, 2);  /* 0C0B557C mov.w @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C0B557E mov #imm,Rn */
	IF(0x0C0B5580u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B5582u, 2);  /* 0C0B5580 mov.b @(r0,Rm),Rn */
	T = r4 > r3;  /* 0C0B5582 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B558Cu, 4); goto L_0C0B558C; } goto L_0C0B5588; }  /* 0C0B5584 bf/s */
L_0C0B5588: BLKS(0x0C0B5588u);
	{ r0 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C0B5BE0u, 4); goto L_0C0B5BE0; }  /* 0C0B5588 bra */
L_0C0B558C: BLKS(0x0C0B558Cu);
	r5 = 0xC3CC310u; UPD(0x0C0B558Eu, 1);  /* 0C0B558C mov.l @(disp,pc),Rn */
	r0 += 0x3Cu;  /* 0C0B558E add #imm,Rn */
	r6 = R32(r5); UPD(0x0C0B5592u, 2);  /* 0C0B5590 mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B5594u, 1);  /* 0C0B5592 mov.w @Rm,Rn */
	r6 += r1;  /* 0C0B5594 add Rm,Rn */
	W32(r5, r6); UPD(0x0C0B5598u, 2);  /* 0C0B5596 mov.l Rm,@Rn */
L_0C0B5598: BLKS(0x0C0B5598u);
	r4 = 0xC20756Cu; UPD(0x0C0B559Au, 1);  /* 0C0B5598 mov.l @(disp,pc),Rn */
	r9 = 0x4u;  /* 0C0B559A mov #imm,Rn */
	r2 = R32(r4); UPD(0x0C0B559Eu, 2);  /* 0C0B559C mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0B55A0u, 1);  /* 0C0B559E mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B55A0 add #imm,Rn */
	IF(0x0C0B55A2u); MACL = r12 * r13;  /* 0C0B55A2 mul.l Rm,Rn */
	W32(r4, r2); UPD(0x0C0B55A6u, 4);  /* 0C0B55A4 mov.l Rm,@Rn */
	r11 = 0xC286578u; UPD(0x0C0B55A8u, 1);  /* 0C0B55A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B55A8u); r2 = MACL;  /* 0C0B55A8 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C0B55ACu, 2);  /* 0C0B55AA mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C0B55AC add Rm,Rn */
	r2 += r10;  /* 0C0B55AE add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B55B2u, 3);  /* 0C0B55B0 mov.b @Rm,Rn */
	r3 = r7 & 0xFF;  /* 0C0B55B2 extu.b Rm,Rn */
	T = r3 > r9;  /* 0C0B55B4 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B55BEu, 5); goto L_0C0B55BE; }  /* 0C0B55B6 bf */
L_0C0B55B8: BLKS(0x0C0B55B8u);
	r3 = r7;  /* 0C0B55B8 mov Rm,Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B5BD0u, 4); goto L_0C0B5BD0; }  /* 0C0B55BA bra */
L_0C0B55BE: BLKS(0x0C0B55BEu);
	r0 = 0xC0B55D8u;  /* 0C0B55BE mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B55C0 add Rm,Rn */
	IF(0x0C0B55C2u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B55C4u, 3);  /* 0C0B55C2 mov.w @(r0,Rm),Rn */
	IF(0x0C0B55C4u); { u32 tv_ = (r5 + 0x0C0B55C8u); u32 t_ = PHYS(tv_); IF(0x0C0B55C6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B55F0u: goto L_0C0B55F0; case 0x0C0B56B0u: goto L_0C0B56B0; case 0x0C0B5710u: goto L_0C0B5710; case 0x0C0B5750u: goto L_0C0B5750; case 0x0C0B5AE0u: goto L_0C0B5AE0; default: JUMPD(tv_); } }  /* 0C0B55C4 braf Rn */
L_0C0B55F0: BLKS(0x0C0B55F0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B55F2u, 1);  /* 0C0B55F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B55F2u); { u32 t_ = r8; PR = 0x0C0B55F6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B55F6u); }  /* 0C0B55F2 jsr @Rn */
L_0C0B55F6: BLKS(0x0C0B55F6u);
	r0 = (u32)(s32)(s16)r0;  /* 0C0B55F6 exts.w Rm,Rn */
	IF(0x0C0B55F8u); T = (s32)r0 >= 0;  /* 0C0B55F8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B56A0u, 5); goto L_0C0B56A0; }  /* 0C0B55FA bf */
L_0C0B55FC: BLKS(0x0C0B55FCu);
	r5 = 0xB4u; UPD(0x0C0B55FEu, 1);  /* 0C0B55FC mov.w @(disp,pc),Rn */
	IF(0x0C0B55FEu); MACL = r12 * r5;  /* 0C0B55FE mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B5602u, 3);  /* 0C0B5600 mov.l @(disp,pc),Rn */
	IF(0x0C0B5602u); r4 = MACL;  /* 0C0B5602 sts macl,Rn */
	IF(0x0C0B5604u); MACL = r0 * r5;  /* 0C0B5604 mul.l Rm,Rn */
	r4 += r8;  /* 0C0B5606 add Rm,Rn */
	r9 = R32(r4 + 0x2Cu); UPD(0x0C0B560Au, 5);  /* 0C0B5608 mov.l @(disp,Rm),Rn */
	IF(0x0C0B560Au); r0 = MACL;  /* 0C0B560A sts macl,Rn */
	r0 += r8;  /* 0C0B560C add Rm,Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C0B5610u, 3);  /* 0C0B560E mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C0B5612u, 1);  /* 0C0B5610 mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C0B5612 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C0B5616u, 2);  /* 0C0B5614 mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C0B5616 add Rm,Rn */
	W32(r4 + 0x24u, r6); UPD(0x0C0B561Au, 2);  /* 0C0B5618 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r12); UPD(0x0C0B561Cu, 1);  /* 0C0B561A mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C0B561C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B5620u, 2);  /* 0C0B561E mov.w @Rm,Rn */
	IF(0x0C0B5620u); MACL = r2 * r5;  /* 0C0B5620 mul.l Rm,Rn */
	r4 += 0xFFFFFF82u;  /* 0C0B5622 add #imm,Rn */
	r11 = 0xA0u; UPD(0x0C0B5626u, 4);  /* 0C0B5624 mov.w @(disp,pc),Rn */
	r10 = r4;  /* 0C0B5626 mov Rm,Rn */
	IF(0x0C0B5628u); r9 = MACL;  /* 0C0B5628 sts macl,Rn */
	r10 += r11;  /* 0C0B562A add Rm,Rn */
	r9 += r8;  /* 0C0B562C add Rm,Rn */
	r3 = 0xA4u; UPD(0x0C0B5630u, 5);  /* 0C0B562E mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C0B5630 add Rm,Rn */
	r12 = r11;  /* 0C0B5632 mov Rm,Rn */
	r9 += r3;  /* 0C0B5634 add Rm,Rn */
	r12 += 0x1u;  /* 0C0B5636 add #imm,Rn */
	r0 = r4;  /* 0C0B5638 mov Rm,Rn */
	r9 += 0x1u;  /* 0C0B563A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B563Eu, 7);  /* 0C0B563C mov.b @Rm,Rn */
	r0 += r3;  /* 0C0B563E add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B5642u, 2);  /* 0C0B5640 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B5642 add #imm,Rn */
	r0 += 0x1u;  /* 0C0B5644 add #imm,Rn */
	W8(r10, r13); UPD(0x0C0B5648u, 3);  /* 0C0B5646 mov.b Rm,@Rn */
	r11 += 0x2u;  /* 0C0B5648 add #imm,Rn */
	W8(r0, r6); UPD(0x0C0B564Cu, 2);  /* 0C0B564A mov.b Rm,@Rn */
	r10 += 0x1u;  /* 0C0B564C add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B5650u, 2);  /* 0C0B564E mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B5652u, 1);  /* 0C0B5650 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0B5652 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B5654 tst Rm,Rn */
	{ u32 c_ = !T; W8(r10, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B5670u, 5); goto L_0C0B5670; } UPD(0x0C0B565Au, 1); goto L_0C0B565A; }  /* 0C0B5656 bf/s */
L_0C0B565A: BLKS(0x0C0B565Au);
	IF(0x0C0B565Au); ;  /* 0C0B565A nop */
	UPD(0x0C0B565Cu, 1);
L_0C0B565C: BLKS(0x0C0B565Cu);
	r15 = r14;  /* 0C0B565C mov Rm,Rn */
	IF(0x0C0B565Eu); PR = R32(r15); r15 += 4; UPD(0x0C0B5660u, 2);  /* 0C0B565E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B5662u, 1);  /* 0C0B5660 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B5664u, 1);  /* 0C0B5662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B5666u, 1);  /* 0C0B5664 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B5668u, 1);  /* 0C0B5666 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B566Au, 1);  /* 0C0B5668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B566Cu, 1);  /* 0C0B566A mov.l @Rm+,Rn */
	IF(0x0C0B566Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B566C rts */
L_0C0B5670: BLKS(0x0C0B5670u);
	r0 = 0x9Fu; UPD(0x0C0B5672u, 1);  /* 0C0B5670 mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0B5674u, 1);  /* 0C0B5672 mov.l @Rm,Rn */
	r13 = 0xFFFFBFFFu; UPD(0x0C0B5676u, 1);  /* 0C0B5674 mov.w @(disp,pc),Rn */
	IF(0x0C0B5676u); r10 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B5678u, 1);  /* 0C0B5676 mov.b @(r0,Rm),Rn */
	r7 &= r13;  /* 0C0B5678 and Rm,Rn */
	r11 = 0x100u; UPD(0x0C0B567Cu, 2);  /* 0C0B567A mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0B567C add #imm,Rn */
	r7 |= r11;  /* 0C0B567E or Rm,Rn */
	W32(r4, r7); UPD(0x0C0B5682u, 3);  /* 0C0B5680 mov.l Rm,@Rn */
	IF(0x0C0B5682u); W8(r0 + r4, r10); UPD(0x0C0B5684u, 1);  /* 0C0B5682 mov.b Rm,@(r0,Rn) */
	r3 = 0xC0C2110u; UPD(0x0C0B5686u, 1);  /* 0C0B5684 mov.l @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C0B5686 mov #imm,Rn */
	r15 = r14;  /* 0C0B5688 mov Rm,Rn */
	IF(0x0C0B568Au); PR = R32(r15); r15 += 4; UPD(0x0C0B568Cu, 3);  /* 0C0B568A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B568Eu, 1);  /* 0C0B568C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B5690u, 1);  /* 0C0B568E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B5692u, 1);  /* 0C0B5690 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B5694u, 1);  /* 0C0B5692 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B5696u, 1);  /* 0C0B5694 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B5698u, 1);  /* 0C0B5696 mov.l @Rm+,Rn */
	IF(0x0C0B5698u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C0B5698 jmp @Rn */
L_0C0B56A0: BLKS(0x0C0B56A0u);
	r2 = 0xB4u; UPD(0x0C0B56A2u, 1);  /* 0C0B56A0 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0B56A2 mov #imm,Rn */
	IF(0x0C0B56A4u); MACL = r12 * r2;  /* 0C0B56A4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B56A8u, 4);  /* 0C0B56A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B56A8u); r0 = MACL;  /* 0C0B56A8 sts macl,Rn */
	{ IF(0x0C0B56ACu); W32(r0 + r4, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B565Cu, 4); goto L_0C0B565C; }  /* 0C0B56AA bra */
L_0C0B56B0: BLKS(0x0C0B56B0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B56B2u, 1);  /* 0C0B56B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B56B2u); { u32 t_ = r8; PR = 0x0C0B56B6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B56B6u); }  /* 0C0B56B2 jsr @Rn */
L_0C0B56B6: BLKS(0x0C0B56B6u);
	r0 = (u32)(s32)(s16)r0;  /* 0C0B56B6 exts.w Rm,Rn */
	IF(0x0C0B56B8u); T = (s32)r0 >= 0;  /* 0C0B56B8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B56A0u, 5); goto L_0C0B56A0; }  /* 0C0B56BA bf */
L_0C0B56BC: BLKS(0x0C0B56BCu);
	r7 = 0xB4u; UPD(0x0C0B56BEu, 1);  /* 0C0B56BC mov.w @(disp,pc),Rn */
	IF(0x0C0B56BEu); MACL = r12 * r7;  /* 0C0B56BE mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B56C2u, 3);  /* 0C0B56C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B56C2u); r6 = MACL;  /* 0C0B56C2 sts macl,Rn */
	IF(0x0C0B56C4u); MACL = r0 * r7;  /* 0C0B56C4 mul.l Rm,Rn */
	r6 += r3;  /* 0C0B56C6 add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C0B56CAu, 5);  /* 0C0B56C8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B56CAu); r9 = MACL;  /* 0C0B56CA sts macl,Rn */
	r9 += r3;  /* 0C0B56CC add Rm,Rn */
	r0 = R32(r9 + 0x28u); UPD(0x0C0B56D0u, 3);  /* 0C0B56CE mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0B56D0 add Rm,Rn */
	r1 = 0x99u; UPD(0x0C0B56D4u, 2);  /* 0C0B56D2 mov.w @(disp,pc),Rn */
	r11 = R32(r6 + 0x2Cu); UPD(0x0C0B56D6u, 1);  /* 0C0B56D4 mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C0B56D6 add Rm,Rn */
	r13 = 0x8000u; UPD(0x0C0B56DAu, 2);  /* 0C0B56D8 mov.l @(disp,pc),Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C0B56DCu, 1);  /* 0C0B56DA mov.l @(disp,Rm),Rn */
	r11 += r13;  /* 0C0B56DC add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B56E0u, 2);  /* 0C0B56DE mov.b @Rm,Rn */
	r10 += r11;  /* 0C0B56E0 add Rm,Rn */
	W32(r6 + 0x28u, r0); UPD(0x0C0B56E4u, 2);  /* 0C0B56E2 mov.l Rm,@(disp,Rn) */
	r12 += 0x1u;  /* 0C0B56E4 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C0B56E6 extu.b Rm,Rn */
	W32(r6 + 0x2Cu, r11); UPD(0x0C0B56EAu, 3);  /* 0C0B56E8 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x78u;  /* 0C0B56EA cmp/eq #imm,r0 */
	W32(r6 + 0x24u, r10); UPD(0x0C0B56EEu, 2);  /* 0C0B56EC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B565Cu, 3); goto L_0C0B565C; } UPD(0x0C0B56F2u, 1); goto L_0C0B56F2; }  /* 0C0B56EE bf/s */
L_0C0B56F2: BLKS(0x0C0B56F2u);
	r4 = 0xA0u; UPD(0x0C0B56F4u, 1);  /* 0C0B56F2 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0B56F4 mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B56F8u, 2);  /* 0C0B56F6 mov.w @(disp,pc),Rn */
	r4 += r6;  /* 0C0B56F8 add Rm,Rn */
	r4 += 0x1u;  /* 0C0B56FA add #imm,Rn */
	IF(0x0C0B56FCu); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0B56FEu, 3);  /* 0C0B56FC mov.b @(r0,Rm),Rn */
	W8(r4, r5); UPD(0x0C0B5700u, 1);  /* 0C0B56FE mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C0B5700 add #imm,Rn */
	r4 += 0x1u;  /* 0C0B5702 add #imm,Rn */
	W8(r1, r5); UPD(0x0C0B5706u, 3);  /* 0C0B5704 mov.b Rm,@Rn */
	W8(r4, r5); UPD(0x0C0B5708u, 1);  /* 0C0B5706 mov.b Rm,@Rn */
	{ IF(0x0C0B570Au); W8(r0 + r6, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B565Cu, 3); goto L_0C0B565C; }  /* 0C0B5708 bra */
L_0C0B5710: BLKS(0x0C0B5710u);
	r5 = 0xB4u; UPD(0x0C0B5712u, 1);  /* 0C0B5710 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0B5712 mov #imm,Rn */
	IF(0x0C0B5714u); MACL = r12 * r5;  /* 0C0B5714 mul.l Rm,Rn */
	r6 = 0xC20756Cu; UPD(0x0C0B5718u, 4);  /* 0C0B5716 mov.l @(disp,pc),Rn */
	r4 = 0xC286578u; UPD(0x0C0B571Au, 1);  /* 0C0B5718 mov.l @(disp,pc),Rn */
	IF(0x0C0B571Au); r11 = MACL;  /* 0C0B571A sts macl,Rn */
	W32(r6, r8); UPD(0x0C0B571Eu, 2);  /* 0C0B571C mov.l Rm,@Rn */
	r11 += r4;  /* 0C0B571E add Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B5722u, 2);  /* 0C0B5720 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0B5722 mov #imm,Rn */
	IF(0x0C0B5724u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B5726u, 2);  /* 0C0B5724 mov.b @(r0,Rm),Rn */
	r13 = 0xC072A90u; UPD(0x0C0B5728u, 1);  /* 0C0B5726 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0B5728 add #imm,Rn */
	IF(0x0C0B572Au); W8(r0 + r11, r3); UPD(0x0C0B572Cu, 2);  /* 0C0B572A mov.b Rm,@(r0,Rn) */
	r7 = 0xC207570u; UPD(0x0C0B572Eu, 1);  /* 0C0B572C mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C0B5730u, 1);  /* 0C0B572E mov.w @(disp,pc),Rn */
	IF(0x0C0B5730u); { u32 t_ = r13; PR = 0x0C0B5734u; W8(r7, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072A90, 0x0C072A90u, 0x0C0B5734u); }  /* 0C0B5730 jsr @Rn */
L_0C0B5734: BLKS(0x0C0B5734u);
	r0 = 0xB0u; UPD(0x0C0B5736u, 1);  /* 0C0B5734 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0B5736 mov #imm,Rn */
	IF(0x0C0B5738u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B573Au, 2);  /* 0C0B5738 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C0B573A mov #imm,Rn */
	r9 = r10 & 0xFF;  /* 0C0B573C extu.b Rm,Rn */
	IF(0x0C0B573Eu); MACL = r9 * r0;  /* 0C0B573E mul.l Rm,Rn */
	r6 = 0xC286318u; UPD(0x0C0B5742u, 5);  /* 0C0B5740 mov.l @(disp,pc),Rn */
	IF(0x0C0B5742u); r12 = MACL;  /* 0C0B5742 sts macl,Rn */
	r6 += r12;  /* 0C0B5744 add Rm,Rn */
	{ W32(r6 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B565Cu, 5); goto L_0C0B565C; }  /* 0C0B5746 bra */
L_0C0B5750: BLKS(0x0C0B5750u);
	r11 = 0xB4u; UPD(0x0C0B5752u, 1);  /* 0C0B5750 mov.w @(disp,pc),Rn */
	IF(0x0C0B5752u); MACL = r12 * r11;  /* 0C0B5752 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B5756u, 3);  /* 0C0B5754 mov.l @(disp,pc),Rn */
	IF(0x0C0B5756u); r2 = MACL;  /* 0C0B5756 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C0B575Au, 2);  /* 0C0B5758 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C0B575A add Rm,Rn */
	IF(0x0C0B575Cu); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B575Eu, 2);  /* 0C0B575C mov.b @(r0,Rm),Rn */
	r0 = 0xEu;  /* 0C0B575E mov #imm,Rn */
	r2 = r9 & 0xFF;  /* 0C0B5760 extu.b Rm,Rn */
	T = r2 > r0;  /* 0C0B5762 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B5834u, 6); goto L_0C0B5834; }  /* 0C0B5764 bt */
L_0C0B5766: BLKS(0x0C0B5766u);
	r0 = 0xC0B57A4u;  /* 0C0B5766 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B5768 add Rm,Rn */
	IF(0x0C0B576Au); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B576Cu, 3);  /* 0C0B576A mov.w @(r0,Rm),Rn */
	IF(0x0C0B576Cu); { u32 tv_ = (r13 + 0x0C0B5770u); u32 t_ = PHYS(tv_); IF(0x0C0B576Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B57D0u: goto L_0C0B57D0; case 0x0C0B5834u: goto L_0C0B5834; case 0x0C0B58B0u: goto L_0C0B58B0; case 0x0C0B5900u: goto L_0C0B5900; case 0x0C0B5920u: goto L_0C0B5920; case 0x0C0B59D0u: goto L_0C0B59D0; case 0x0C0B59FAu: goto L_0C0B59FA; case 0x0C0B5A30u: goto L_0C0B5A30; default: JUMPD(tv_); } }  /* 0C0B576C braf Rn */
L_0C0B57D0: BLKS(0x0C0B57D0u);
	r8 = 0xC0BC1B0u; UPD(0x0C0B57D2u, 1);  /* 0C0B57D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0B57D2 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0B57D4 mov #imm,Rn */
	IF(0x0C0B57D6u); { u32 t_ = r8; PR = 0x0C0B57DAu; r6 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B57DAu); }  /* 0C0B57D6 jsr @Rn */
L_0C0B57DA: BLKS(0x0C0B57DAu);
	T = (r0 & r0) == 0;  /* 0C0B57DA tst Rm,Rn */
	if (T) { UPD(0x0C0B5834u, 4); goto L_0C0B5834; }  /* 0C0B57DC bt */
L_0C0B57DE: BLKS(0x0C0B57DEu);
	r3 = 0xB4u; UPD(0x0C0B57E0u, 1);  /* 0C0B57DE mov.w @(disp,pc),Rn */
	IF(0x0C0B57E0u); MACL = r12 * r3;  /* 0C0B57E0 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B57E4u, 3);  /* 0C0B57E2 mov.l @(disp,pc),Rn */
	IF(0x0C0B57E4u); r10 = MACL;  /* 0C0B57E4 sts macl,Rn */
	r10 += r7;  /* 0C0B57E6 add Rm,Rn */
	r3 += 0xFFFFFFECu;  /* 0C0B57E8 add #imm,Rn */
	r3 += r10;  /* 0C0B57EA add Rm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0B57EEu, 5);  /* 0C0B57EC mov.l @(disp,pc),Rn */
	r13 = r3;  /* 0C0B57EE mov Rm,Rn */
	r8 = r3;  /* 0C0B57F0 mov Rm,Rn */
	r13 += 0x1u;  /* 0C0B57F2 add #imm,Rn */
	r8 += 0x3u;  /* 0C0B57F4 add #imm,Rn */
	r11 = r7;  /* 0C0B57F6 mov Rm,Rn */
	UPD(0x0C0B57F8u, 5);
L_0C0B57F8: BLKS(0x0C0B57F8u);
	IF(0x0C0B57F8u); { u32 t_ = r9; PR = 0x0C0B57FCu; IF(0x0C0B57FAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B57FCu); }  /* 0C0B57F8 jsr @Rn */
L_0C0B57FC: BLKS(0x0C0B57FCu);
	r4 = 0xFFFFFFB0u;  /* 0C0B57FC mov #imm,Rn */
	r0 &= r4;  /* 0C0B57FE and Rm,Rn */
	W8(r8, r0); UPD(0x0C0B5802u, 3);  /* 0C0B5800 mov.b Rm,@Rn */
	r0 &= 0x80u;  /* 0C0B5802 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B5804 tst Rm,Rn */
	if (T) { UPD(0x0C0B5870u, 5); goto L_0C0B5870; }  /* 0C0B5806 bt */
L_0C0B5808: BLKS(0x0C0B5808u);
	r7 = 0xB4u; UPD(0x0C0B580Au, 1);  /* 0C0B5808 mov.w @(disp,pc),Rn */
	IF(0x0C0B580Au); MACL = r12 * r7;  /* 0C0B580A mul.l Rm,Rn */
	r7 = 0xA0u; UPD(0x0C0B580Eu, 3);  /* 0C0B580C mov.w @(disp,pc),Rn */
	IF(0x0C0B580Eu); r2 = MACL;  /* 0C0B580E sts macl,Rn */
	r2 += r11;  /* 0C0B5810 add Rm,Rn */
	r2 += r7;  /* 0C0B5812 add Rm,Rn */
	r5 = r2;  /* 0C0B5814 mov Rm,Rn */
	r5 += 0x3u;  /* 0C0B5816 add #imm,Rn */
	r2 += 0x2u;  /* 0C0B5818 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B581Cu, 7);  /* 0C0B581A mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B581Eu, 1);  /* 0C0B581C mov.b @Rm,Rn */
	r0 |= r4;  /* 0C0B581E or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B5820 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B5824u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0B57F8u, 5); goto L_0C0B57F8; } goto L_0C0B5826; }  /* 0C0B5822 bt/s */
L_0C0B5826: BLKS(0x0C0B5826u);
	r9 = 0xC286578u; UPD(0x0C0B5828u, 2);  /* 0C0B5826 mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C0B5828 add Rm,Rn */
	r9 += r7;  /* 0C0B582A add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B582Eu, 3);  /* 0C0B582C mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B582E add #imm,Rn */
	W8(r9, r10); UPD(0x0C0B5832u, 2);  /* 0C0B5830 mov.b Rm,@Rn */
	IF(0x0C0B5832u); ;  /* 0C0B5832 nop */
	UPD(0x0C0B5834u, 1);
L_0C0B5834: BLKS(0x0C0B5834u);
	r7 = 0xB4u; UPD(0x0C0B5836u, 1);  /* 0C0B5834 mov.w @(disp,pc),Rn */
	IF(0x0C0B5836u); MACL = r12 * r7;  /* 0C0B5836 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B583Au, 3);  /* 0C0B5838 mov.l @(disp,pc),Rn */
	IF(0x0C0B583Au); r12 = MACL;  /* 0C0B583A sts macl,Rn */
	r13 = 0x8Cu; UPD(0x0C0B583Eu, 2);  /* 0C0B583C mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C0B583E add Rm,Rn */
	r9 = 0x86u; UPD(0x0C0B5842u, 2);  /* 0C0B5840 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C0B5842 add Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0B5846u, 2);  /* 0C0B5844 mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C0B5846 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C0B584Au, 2);  /* 0C0B5848 mov.l @Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0B584Cu, 1);  /* 0C0B584A mov.l @(disp,pc),Rn */
	IF(0x0C0B584Cu); { u32 t_ = r11; PR = 0x0C0B5850u; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B5850u); }  /* 0C0B584C jsr @Rn */
L_0C0B5850: BLKS(0x0C0B5850u);
	r5 = R32(r13); UPD(0x0C0B5852u, 1);  /* 0C0B5850 mov.l @Rm,Rn */
	W32(r12 + 0x2Cu, r0); UPD(0x0C0B5854u, 1);  /* 0C0B5852 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B5854u); { u32 t_ = r10; PR = 0x0C0B5858u; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B5858u); }  /* 0C0B5854 jsr @Rn */
L_0C0B5858: BLKS(0x0C0B5858u);
	r8 = R32(r12 + 0x24u); UPD(0x0C0B585Au, 1);  /* 0C0B5858 mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x28u); UPD(0x0C0B585Cu, 1);  /* 0C0B585A mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C0B585Eu, 1);  /* 0C0B585C mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C0B585E add Rm,Rn */
	r8 += r1;  /* 0C0B5860 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C0B5864u, 3);  /* 0C0B5862 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r8); UPD(0x0C0B5866u, 1);  /* 0C0B5864 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B565Cu, 3); goto L_0C0B565C; }  /* 0C0B5866 bra */
L_0C0B5870: BLKS(0x0C0B5870u);
	IF(0x0C0B5870u); { u32 t_ = r9; PR = 0x0C0B5874u; IF(0x0C0B5872u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B5874u); }  /* 0C0B5870 jsr @Rn */
L_0C0B5874: BLKS(0x0C0B5874u);
	r0 &= 0x40u;  /* 0C0B5874 and #imm,r0 */
	IF(0x0C0B5876u); { u32 t_ = r9; PR = 0x0C0B587Au; W8(r13, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B587Au); }  /* 0C0B5876 jsr @Rn */
L_0C0B587A: BLKS(0x0C0B587Au);
	r2 = r0;  /* 0C0B587A mov Rm,Rn */
	r5 = 0x3Fu;  /* 0C0B587C mov #imm,Rn */
	r2 &= r5;  /* 0C0B587E and Rm,Rn */
	r0 = r10;  /* 0C0B5880 mov Rm,Rn */
	r5 += 0x68u;  /* 0C0B5882 add #imm,Rn */
	IF(0x0C0B5884u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B5886u, 6);  /* 0C0B5884 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C0B5886 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0B5888 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B588A tst Rm,Rn */
	{ u32 c_ = T; W8(r8, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B5896u, 6); goto L_0C0B5896; } UPD(0x0C0B5890u, 1); goto L_0C0B5890; }  /* 0C0B588C bt/s */
L_0C0B5890: BLKS(0x0C0B5890u);
	r6 = 0x2Au;  /* 0C0B5890 mov #imm,Rn */
	r2 &= r6;  /* 0C0B5892 and Rm,Rn */
	W8(r8, r2); UPD(0x0C0B5896u, 3);  /* 0C0B5894 mov.b Rm,@Rn */
L_0C0B5896: BLKS(0x0C0B5896u);
	r0 = r1;  /* 0C0B5896 mov Rm,Rn */
	r0 &= 0x20u;  /* 0C0B5898 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B589A tst Rm,Rn */
	if (T) { UPD(0x0C0B5808u, 6); goto L_0C0B5808; }  /* 0C0B589C bt */
L_0C0B589E: BLKS(0x0C0B589Eu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B58A0u, 1);  /* 0C0B589E mov.b @Rm,Rn */
	r0 &= 0xD5u;  /* 0C0B58A0 and #imm,r0 */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B5808u, 4); goto L_0C0B5808; }  /* 0C0B58A2 bra */
L_0C0B58B0: BLKS(0x0C0B58B0u);
	r8 = 0xB4u; UPD(0x0C0B58B2u, 1);  /* 0C0B58B0 mov.w @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C0B58B2 mov #imm,Rn */
	IF(0x0C0B58B4u); MACL = r12 * r8;  /* 0C0B58B4 mul.l Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C0B58B8u, 4);  /* 0C0B58B6 mov.l @(disp,pc),Rn */
	r11 = 0xC286578u; UPD(0x0C0B58BAu, 1);  /* 0C0B58B8 mov.l @(disp,pc),Rn */
	r9 = 0xA0u; UPD(0x0C0B58BCu, 1);  /* 0C0B58BA mov.w @(disp,pc),Rn */
	IF(0x0C0B58BCu); { u32 t_ = r13; PR = 0x0C0B58C0u; IF(0x0C0B58BEu); r8 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B58C0u); }  /* 0C0B58BC jsr @Rn */
L_0C0B58C0: BLKS(0x0C0B58C0u);
	r8 += r11;  /* 0C0B58C0 add Rm,Rn */
	r11 = r8;  /* 0C0B58C2 mov Rm,Rn */
	r0 += r9;  /* 0C0B58C4 add Rm,Rn */
	r11 += 0x5Cu;  /* 0C0B58C6 add #imm,Rn */
	IF(0x0C0B58C8u); r0 <<= 16;  /* 0C0B58C8 shll16 Rn */
	W32(r11, r0); UPD(0x0C0B58CCu, 6);  /* 0C0B58CA mov.l Rm,@Rn */
	r8 += 0x60u;  /* 0C0B58CC add #imm,Rn */
	IF(0x0C0B58CEu); { u32 t_ = r13; PR = 0x0C0B58D2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B58D2u); }  /* 0C0B58CE jsr @Rn */
L_0C0B58D2: BLKS(0x0C0B58D2u);
	r2 = 0x1B0u; UPD(0x0C0B58D4u, 1);  /* 0C0B58D2 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0B58D4 add Rm,Rn */
	IF(0x0C0B58D6u); r0 <<= 16;  /* 0C0B58D6 shll16 Rn */
	W32(r8, r0); UPD(0x0C0B58DAu, 3);  /* 0C0B58D8 mov.l Rm,@Rn */
	r7 = r0;  /* 0C0B58DA mov Rm,Rn */
	r6 = R32(r11); UPD(0x0C0B58DEu, 2);  /* 0C0B58DC mov.l @Rm,Rn */
	r8 += 0xFFFFFFA0u;  /* 0C0B58DE add #imm,Rn */
	r11 = 0xC068E60u; UPD(0x0C0B58E2u, 2);  /* 0C0B58E0 mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C0B58E2 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B58E6u, 2);  /* 0C0B58E4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B58E6u); { u32 t_ = r11; PR = 0x0C0B58EAu; r4 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B58EAu); }  /* 0C0B58E6 jsr @Rn */
L_0C0B58EA: BLKS(0x0C0B58EAu);
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B58ECu, 1);  /* 0C0B58EA mov.b @Rm,Rn */
	r13 = 0x86u; UPD(0x0C0B58EEu, 1);  /* 0C0B58EC mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0B58EE add #imm,Rn */
	r13 += r8;  /* 0C0B58F0 add Rm,Rn */
	W16(r13, r0); UPD(0x0C0B58F4u, 3);  /* 0C0B58F2 mov.w Rm,@Rn */
	{ W8(r9, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B58F4 bra */
L_0C0B5900: BLKS(0x0C0B5900u);
	r0 = 0xB4u; UPD(0x0C0B5902u, 1);  /* 0C0B5900 mov.w @(disp,pc),Rn */
	IF(0x0C0B5902u); MACL = r12 * r0;  /* 0C0B5902 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B5906u, 3);  /* 0C0B5904 mov.l @(disp,pc),Rn */
	IF(0x0C0B5906u); r8 = MACL;  /* 0C0B5906 sts macl,Rn */
	r8 += r9;  /* 0C0B5908 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B590Cu, 3);  /* 0C0B590A mov.l @(disp,Rm),Rn */
	r11 = r8;  /* 0C0B590C mov Rm,Rn */
	r11 += 0x5Cu;  /* 0C0B590E add #imm,Rn */
	r10 = 0xC062780u; UPD(0x0C0B5912u, 3);  /* 0C0B5910 mov.l @(disp,pc),Rn */
	r8 += 0x60u;  /* 0C0B5912 add #imm,Rn */
	W32(r11, r4); UPD(0x0C0B5916u, 2);  /* 0C0B5914 mov.l Rm,@Rn */
	r9 = 0xA0u; UPD(0x0C0B5918u, 1);  /* 0C0B5916 mov.w @(disp,pc),Rn */
	IF(0x0C0B5918u); { u32 t_ = r10; PR = 0x0C0B591Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B591Cu); }  /* 0C0B5918 jsr @Rn */
L_0C0B591C: BLKS(0x0C0B591Cu);
	{ IF(0x0C0B591Eu); ; /* slot nop */ UPD(0x0C0B58D2u, 3); goto L_0C0B58D2; }  /* 0C0B591C bra */
L_0C0B5920: BLKS(0x0C0B5920u);
	r5 = 0xB4u; UPD(0x0C0B5922u, 1);  /* 0C0B5920 mov.w @(disp,pc),Rn */
	IF(0x0C0B5922u); MACL = r12 * r5;  /* 0C0B5922 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5926u, 3);  /* 0C0B5924 mov.l @(disp,pc),Rn */
	IF(0x0C0B5926u); r7 = MACL;  /* 0C0B5926 sts macl,Rn */
	r7 += r0;  /* 0C0B5928 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0B592Cu, 3);  /* 0C0B592A mov.w @(disp,pc),Rn */
	IF(0x0C0B592Cu); r3 = R32(r0 + r7); UPD(0x0C0B592Eu, 1);  /* 0C0B592C mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0B592E tst Rm,Rn */
	if (T) { UPD(0x0C0B5940u, 4); goto L_0C0B5940; }  /* 0C0B5930 bt */
L_0C0B5932: BLKS(0x0C0B5932u);
	r2 = 0xFFFFF800u; UPD(0x0C0B5934u, 1);  /* 0C0B5932 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0B5934 add Rm,Rn */
	{ IF(0x0C0B5938u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B5834u, 4); goto L_0C0B5834; }  /* 0C0B5936 bra */
L_0C0B5940: BLKS(0x0C0B5940u);
	r4 = 0xC207570u; UPD(0x0C0B5942u, 1);  /* 0C0B5940 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B5944u, 1);  /* 0C0B5942 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C0B5944 cmp/eq #imm,r0 */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B5960u, 4); goto L_0C0B5960; } goto L_0C0B594A; }  /* 0C0B5946 bt/s */
L_0C0B594A: BLKS(0x0C0B594Au);
	r10 += 0x1u;  /* 0C0B594A add #imm,Rn */
	W8(r4, r10); UPD(0x0C0B594Eu, 3);  /* 0C0B594C mov.b Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0B5950u, 1);  /* 0C0B594E mov.w @(disp,pc),Rn */
	IF(0x0C0B5950u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B5952u, 1);  /* 0C0B5950 mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFFEu;  /* 0C0B5952 add #imm,Rn */
	IF(0x0C0B5954u); W8(r0 + r7, r8); UPD(0x0C0B5956u, 2);  /* 0C0B5954 mov.b Rm,@(r0,Rn) */
L_0C0B5956: BLKS(0x0C0B5956u);
	{ IF(0x0C0B5958u); ; /* slot nop */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5956 bra */
L_0C0B5960: BLKS(0x0C0B5960u);
	r5 = 0xA0u; UPD(0x0C0B5962u, 1);  /* 0C0B5960 mov.w @(disp,pc),Rn */
	r13 = 0x1Du;  /* 0C0B5962 mov #imm,Rn */
	r5 += r7;  /* 0C0B5964 add Rm,Rn */
	r6 = r5;  /* 0C0B5966 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0B5968 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B596Cu, 5);  /* 0C0B596A mov.b @Rm,Rn */
	r5 += 0x3u;  /* 0C0B596C add #imm,Rn */
	r0 &= 0xBFu;  /* 0C0B596E and #imm,r0 */
	W8(r6, r0); UPD(0x0C0B5972u, 3);  /* 0C0B5970 mov.b Rm,@Rn */
	r6 = 0x98u; UPD(0x0C0B5974u, 1);  /* 0C0B5972 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C0B5974 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B5978u, 2);  /* 0C0B5976 mov.b @Rm,Rn */
	W8(r5, r3); UPD(0x0C0B597Au, 1);  /* 0C0B5978 mov.b Rm,@Rn */
	r11 += 0x1u;  /* 0C0B597A add #imm,Rn */
	r7 = r11 & 0xFF;  /* 0C0B597C extu.b Rm,Rn */
	W8(r6, r11); UPD(0x0C0B5980u, 3);  /* 0C0B597E mov.b Rm,@Rn */
	T = r7 > r13;  /* 0C0B5980 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5956u, 4); goto L_0C0B5956; } goto L_0C0B5986; }  /* 0C0B5982 bf/s */
L_0C0B5986: BLKS(0x0C0B5986u);
	r6 += 0x1u;  /* 0C0B5986 add #imm,Rn */
	W8(r6, r3); UPD(0x0C0B598Au, 3);  /* 0C0B5988 mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C0B598Cu, 1);  /* 0C0B598A mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B598Eu, 1);  /* 0C0B598C mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B598E add #imm,Rn */
	W8(r5, r3); UPD(0x0C0B5992u, 2);  /* 0C0B5990 mov.b Rm,@Rn */
L_0C0B5992: BLKS(0x0C0B5992u);
	{ IF(0x0C0B5994u); ; /* slot nop */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5992 bra */
L_0C0B59D0: BLKS(0x0C0B59D0u);
	r8 = 0xC0BC1B0u; UPD(0x0C0B59D2u, 1);  /* 0C0B59D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0B59D2 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0B59D4 mov #imm,Rn */
	IF(0x0C0B59D6u); { u32 t_ = r8; PR = 0x0C0B59DAu; r6 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B59DAu); }  /* 0C0B59D6 jsr @Rn */
L_0C0B59DA: BLKS(0x0C0B59DAu);
	T = (r0 & r0) == 0;  /* 0C0B59DA tst Rm,Rn */
	if (T) { UPD(0x0C0B5992u, 4); goto L_0C0B5992; }  /* 0C0B59DC bt */
L_0C0B59DE: BLKS(0x0C0B59DEu);
	r3 = 0xFFFFFF80u;  /* 0C0B59DE mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0B59E2u, 2);  /* 0C0B59E0 mov.w @(disp,pc),Rn */
	IF(0x0C0B59E2u); MACL = r12 * r9;  /* 0C0B59E2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B59E6u, 3);  /* 0C0B59E4 mov.l @(disp,pc),Rn */
	IF(0x0C0B59E6u); r7 = MACL;  /* 0C0B59E6 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C0B59EAu, 2);  /* 0C0B59E8 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C0B59EA add Rm,Rn */
	r7 += r10;  /* 0C0B59EC add Rm,Rn */
	r7 += 0x2u;  /* 0C0B59EE add #imm,Rn */
	W8(r7, r3); UPD(0x0C0B59F2u, 4);  /* 0C0B59F0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFEu;  /* 0C0B59F2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B59F6u, 2);  /* 0C0B59F4 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B59F6 add #imm,Rn */
	W8(r7, r6); UPD(0x0C0B59FAu, 2);  /* 0C0B59F8 mov.b Rm,@Rn */
L_0C0B59FA: BLKS(0x0C0B59FAu);
	r5 = 0xB4u; UPD(0x0C0B59FCu, 1);  /* 0C0B59FA mov.w @(disp,pc),Rn */
	IF(0x0C0B59FCu); MACL = r12 * r5;  /* 0C0B59FC mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B5A00u, 3);  /* 0C0B59FE mov.l @(disp,pc),Rn */
	IF(0x0C0B5A00u); r3 = MACL;  /* 0C0B5A00 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C0B5A04u, 2);  /* 0C0B5A02 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0B5A04 add Rm,Rn */
	r7 += r3;  /* 0C0B5A06 add Rm,Rn */
	r7 += 0x2u;  /* 0C0B5A08 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B5A0Cu, 4);  /* 0C0B5A0A mov.b @Rm,Rn */
	r0 &= 0x80u;  /* 0C0B5A0C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B5A0E tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5992u, 5); goto L_0C0B5992; } goto L_0C0B5A14; }  /* 0C0B5A10 bf/s */
L_0C0B5A14: BLKS(0x0C0B5A14u);
	r2 = 0xC20756Cu; UPD(0x0C0B5A16u, 2);  /* 0C0B5A14 mov.l @(disp,pc),Rn */
	r13 = 0x2A30u; UPD(0x0C0B5A18u, 1);  /* 0C0B5A16 mov.w @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C0B5A1Au, 1);  /* 0C0B5A18 mov.l @Rm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C0B5A1A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B5A28u, 4); goto L_0C0B5A28; }  /* 0C0B5A1C bf */
L_0C0B5A1E: BLKS(0x0C0B5A1Eu);
	r8 = 0x9Fu; UPD(0x0C0B5A20u, 1);  /* 0C0B5A1E mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0B5A20 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B5A24u, 2);  /* 0C0B5A22 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B5A24 add #imm,Rn */
	W8(r8, r6); UPD(0x0C0B5A28u, 2);  /* 0C0B5A26 mov.b Rm,@Rn */
L_0C0B5A28: BLKS(0x0C0B5A28u);
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5A28 bra */
L_0C0B5A30: BLKS(0x0C0B5A30u);
	r0 = 0xB4u; UPD(0x0C0B5A32u, 1);  /* 0C0B5A30 mov.w @(disp,pc),Rn */
	IF(0x0C0B5A32u); MACL = r12 * r0;  /* 0C0B5A32 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B5A36u, 3);  /* 0C0B5A34 mov.l @(disp,pc),Rn */
	IF(0x0C0B5A36u); r0 = MACL;  /* 0C0B5A36 sts macl,Rn */
	r0 += r3;  /* 0C0B5A38 add Rm,Rn */
	r3 = 0x8Cu; UPD(0x0C0B5A3Cu, 3);  /* 0C0B5A3A mov.w @(disp,pc),Rn */
	r6 = 0xFFFFu; UPD(0x0C0B5A3Eu, 1);  /* 0C0B5A3C mov.l @(disp,pc),Rn */
	IF(0x0C0B5A3Eu); r2 = R32(r0 + r3); UPD(0x0C0B5A40u, 1);  /* 0C0B5A3E mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0B5A40 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B5A4Au, 4); goto L_0C0B5A4A; }  /* 0C0B5A42 bt */
L_0C0B5A44: BLKS(0x0C0B5A44u);
	r4 = 0x800u; UPD(0x0C0B5A46u, 1);  /* 0C0B5A44 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C0B5A46 add Rm,Rn */
	IF(0x0C0B5A48u); W32(r0 + r3, r2); UPD(0x0C0B5A4Au, 2);  /* 0C0B5A48 mov.l Rm,@(r0,Rn) */
L_0C0B5A4A: BLKS(0x0C0B5A4Au);
	r4 = R32(r0 + 0x24u); UPD(0x0C0B5A4Cu, 1);  /* 0C0B5A4A mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0B5A4Eu, 1);  /* 0C0B5A4C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0B5A4E add Rm,Rn */
	IF(0x0C0B5A50u); T = (s32)r2 >= 0;  /* 0C0B5A50 cmp/pz Rn */
	if (!T) { UPD(0x0C0B5AD0u, 5); goto L_0C0B5AD0; }  /* 0C0B5A52 bf */
L_0C0B5A54: BLKS(0x0C0B5A54u);
	r5 = 0x1E00000u; UPD(0x0C0B5A56u, 1);  /* 0C0B5A54 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0B5A56 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B5A6Au, 4); goto L_0C0B5A6A; }  /* 0C0B5A58 bt */
L_0C0B5A5A: BLKS(0x0C0B5A5Au);
	r5 = R32(r0 + 0x28u); UPD(0x0C0B5A5Cu, 1);  /* 0C0B5A5A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C0B5A5Eu, 1);  /* 0C0B5A5C mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0B5A5E add Rm,Rn */
	IF(0x0C0B5A60u); T = (s32)r2 >= 0;  /* 0C0B5A60 cmp/pz Rn */
	if (!T) { UPD(0x0C0B5AC0u, 5); goto L_0C0B5AC0; }  /* 0C0B5A62 bf */
L_0C0B5A64: BLKS(0x0C0B5A64u);
	r7 = 0xC80000u; UPD(0x0C0B5A66u, 1);  /* 0C0B5A64 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0B5A66 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B5A80u, 4); goto L_0C0B5A80; }  /* 0C0B5A68 bf */
L_0C0B5A6A: BLKS(0x0C0B5A6Au);
	r13 = 0xA0u; UPD(0x0C0B5A6Cu, 1);  /* 0C0B5A6A mov.w @(disp,pc),Rn */
	r9 = 0x86u; UPD(0x0C0B5A6Eu, 1);  /* 0C0B5A6C mov.w @(disp,pc),Rn */
	IF(0x0C0B5A6Eu); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B5A70u, 1);  /* 0C0B5A6E mov.b @(r0,Rm),Rn */
	IF(0x0C0B5A70u); r10 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B5A72u, 1);  /* 0C0B5A70 mov.w @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0B5A72 add #imm,Rn */
	r1 = 0x100u; UPD(0x0C0B5A76u, 2);  /* 0C0B5A74 mov.w @(disp,pc),Rn */
	r10 += r1;  /* 0C0B5A76 add Rm,Rn */
	IF(0x0C0B5A78u); W8(r0 + r13, r2); UPD(0x0C0B5A7Au, 2);  /* 0C0B5A78 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C0B5A7Cu); W16(r0 + r9, r10); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5A7A bra */
L_0C0B5A80: BLKS(0x0C0B5A80u);
	r0 += 0x5Cu;  /* 0C0B5A80 add #imm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C0B5A84u, 2);  /* 0C0B5A82 mov.l @Rm+,Rn */
	r7 = r4;  /* 0C0B5A84 mov Rm,Rn */
	r3 = 0x7FFFFu; UPD(0x0C0B5A88u, 2);  /* 0C0B5A86 mov.l @(disp,pc),Rn */
	r7 -= r6;  /* 0C0B5A88 sub Rm,Rn */
	r13 = 0xFFFFEu; UPD(0x0C0B5A8Cu, 2);  /* 0C0B5A8A mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C0B5A8C add Rm,Rn */
	r9 = R32(r0); UPD(0x0C0B5A90u, 2);  /* 0C0B5A8E mov.l @Rm,Rn */
	r10 = r5;  /* 0C0B5A90 mov Rm,Rn */
	T = r13 >= r7;  /* 0C0B5A92 cmp/hs Rm,Rn */
	r10 -= r9;  /* 0C0B5A94 sub Rm,Rn */
	IF(0x0C0B5A96u); r11 = T;  /* 0C0B5A96 movt Rn */
	r10 += r3;  /* 0C0B5A98 add Rm,Rn */
	T = r13 >= r10;  /* 0C0B5A9A cmp/hs Rm,Rn */
	IF(0x0C0B5A9Cu); r8 = T;  /* 0C0B5A9C movt Rn */
	r11 &= r8;  /* 0C0B5A9E and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0B5AA0 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5AB0u, 12); goto L_0C0B5AB0; } goto L_0C0B5AA6; }  /* 0C0B5AA2 bt/s */
L_0C0B5AA6: BLKS(0x0C0B5AA6u);
	r6 = 0xA0u; UPD(0x0C0B5AA8u, 2);  /* 0C0B5AA6 mov.w @(disp,pc),Rn */
	IF(0x0C0B5AA8u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0B5AAAu, 1);  /* 0C0B5AA8 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B5AAA add #imm,Rn */
	{ IF(0x0C0B5AAEu); W8(r0 + r6, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B5834u, 4); goto L_0C0B5834; }  /* 0C0B5AAC bra */
L_0C0B5AB0: BLKS(0x0C0B5AB0u);
	r7 = r9;  /* 0C0B5AB0 mov Rm,Rn */
	r9 = 0xC068E60u; UPD(0x0C0B5AB4u, 2);  /* 0C0B5AB2 mov.l @(disp,pc),Rn */
	r11 = 0x86u; UPD(0x0C0B5AB6u, 1);  /* 0C0B5AB4 mov.w @(disp,pc),Rn */
	IF(0x0C0B5AB6u); { u32 t_ = r9; PR = 0x0C0B5ABAu; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B5ABAu); }  /* 0C0B5AB6 jsr @Rn */
L_0C0B5ABA: BLKS(0x0C0B5ABAu);
	W16(r11, r0); UPD(0x0C0B5ABCu, 1);  /* 0C0B5ABA mov.w Rm,@Rn */
L_0C0B5ABC: BLKS(0x0C0B5ABCu);
	{ IF(0x0C0B5ABEu); ; /* slot nop */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5ABC bra */
L_0C0B5AC0: BLKS(0x0C0B5AC0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B5A64u, 3); goto L_0C0B5A64; }  /* 0C0B5AC0 bra */
L_0C0B5AD0: BLKS(0x0C0B5AD0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B5A54u, 3); goto L_0C0B5A54; }  /* 0C0B5AD0 bra */
L_0C0B5AE0: BLKS(0x0C0B5AE0u);
	r3 = 0xB4u; UPD(0x0C0B5AE2u, 1);  /* 0C0B5AE0 mov.w @(disp,pc),Rn */
	IF(0x0C0B5AE2u); MACL = r12 * r3;  /* 0C0B5AE2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B5AE6u, 3);  /* 0C0B5AE4 mov.l @(disp,pc),Rn */
	IF(0x0C0B5AE6u); r3 = MACL;  /* 0C0B5AE6 sts macl,Rn */
	r6 = 0xA0u; UPD(0x0C0B5AEAu, 2);  /* 0C0B5AE8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B5AEA add Rm,Rn */
	r6 += r3;  /* 0C0B5AEC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B5AF0u, 3);  /* 0C0B5AEE mov.b @Rm,Rn */
	r5 = r7 & 0xFF;  /* 0C0B5AF0 extu.b Rm,Rn */
	r0 = r5;  /* 0C0B5AF2 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B5AF4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r10 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B5BB0u, 6); goto L_0C0B5BB0; } goto L_0C0B5AFA; }  /* 0C0B5AF6 bt/s */
L_0C0B5AFA: BLKS(0x0C0B5AFAu);
	T = (s32)r5 > (s32)r10;  /* 0C0B5AFA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B5B20u, 5); goto L_0C0B5B20; } goto L_0C0B5B00; }  /* 0C0B5AFC bt/s */
L_0C0B5B00: BLKS(0x0C0B5B00u);
	T = (r5 & r5) == 0;  /* 0C0B5B00 tst Rm,Rn */
	if (!T) { UPD(0x0C0B5ABCu, 5); goto L_0C0B5ABC; }  /* 0C0B5B02 bf */
L_0C0B5B04: BLKS(0x0C0B5B04u);
	r9 = r7;  /* 0C0B5B04 mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C0B5B08u, 2);  /* 0C0B5B06 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C0B5B08 add #imm,Rn */
	r11 = 0x100u; UPD(0x0C0B5B0Cu, 2);  /* 0C0B5B0A mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0B5B0C mov Rm,Rn */
	r4 = 0x99u; UPD(0x0C0B5B10u, 2);  /* 0C0B5B0E mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0B5B10 mov #imm,Rn */
	W8(r6, r9); UPD(0x0C0B5B14u, 2);  /* 0C0B5B12 mov.b Rm,@Rn */
	IF(0x0C0B5B14u); W16(r0 + r13, r11); UPD(0x0C0B5B16u, 1);  /* 0C0B5B14 mov.w Rm,@(r0,Rn) */
	r6 += 0x3u;  /* 0C0B5B16 add #imm,Rn */
	IF(0x0C0B5B18u); W8(r0 + r4, r5); UPD(0x0C0B5B1Au, 2);  /* 0C0B5B18 mov.b Rm,@(r0,Rn) */
L_0C0B5B1A: BLKS(0x0C0B5B1Au);
	W8(r6, r1); UPD(0x0C0B5B1Cu, 1);  /* 0C0B5B1A mov.b Rm,@Rn */
L_0C0B5B1C: BLKS(0x0C0B5B1Cu);
	{ IF(0x0C0B5B1Eu); ; /* slot nop */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5B1C bra */
L_0C0B5B20: BLKS(0x0C0B5B20u);
	if (!T) { UPD(0x0C0B5B1Cu, 3); goto L_0C0B5B1C; }  /* 0C0B5B20 bf */
L_0C0B5B22: BLKS(0x0C0B5B22u);
	r0 = 0x8Cu; UPD(0x0C0B5B24u, 1);  /* 0C0B5B22 mov.w @(disp,pc),Rn */
	r8 = 0xFFFFu; UPD(0x0C0B5B26u, 1);  /* 0C0B5B24 mov.l @(disp,pc),Rn */
	IF(0x0C0B5B26u); r2 = R32(r0 + r3); UPD(0x0C0B5B28u, 1);  /* 0C0B5B26 mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0B5B28 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B5B32u, 4); goto L_0C0B5B32; }  /* 0C0B5B2A bt */
L_0C0B5B2C: BLKS(0x0C0B5B2Cu);
	r6 = 0x800u; UPD(0x0C0B5B2Eu, 1);  /* 0C0B5B2C mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C0B5B2E add Rm,Rn */
	IF(0x0C0B5B30u); W32(r0 + r3, r2); UPD(0x0C0B5B32u, 2);  /* 0C0B5B30 mov.l Rm,@(r0,Rn) */
L_0C0B5B32: BLKS(0x0C0B5B32u);
	r10 = R32(r3 + 0x24u); UPD(0x0C0B5B34u, 1);  /* 0C0B5B32 mov.l @(disp,Rm),Rn */
	r7 = 0xFF900000u; UPD(0x0C0B5B36u, 1);  /* 0C0B5B34 mov.l @(disp,pc),Rn */
	T = (s32)r10 >= (s32)r7;  /* 0C0B5B36 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0B5B1Cu, 4); goto L_0C0B5B1C; }  /* 0C0B5B38 bt */
L_0C0B5B3A: BLKS(0x0C0B5B3Au);
	r0 = 0x0u;  /* 0C0B5B3A mov #imm,Rn */
	W32(r3, r0); UPD(0x0C0B5B3Eu, 2);  /* 0C0B5B3C mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0B5B3E mov #imm,Rn */
	r13 = 0xC3C4165u; UPD(0x0C0B5B42u, 2);  /* 0C0B5B40 mov.l @(disp,pc),Rn */
	r9 = 0xC3C4164u; UPD(0x0C0B5B44u, 1);  /* 0C0B5B42 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B5B46u, 1);  /* 0C0B5B44 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B5B48u, 1);  /* 0C0B5B46 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0B5B48 add #imm,Rn */
	r3 = 0xC175064u; UPD(0x0C0B5B4Cu, 2);  /* 0C0B5B4A mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B5B4C add #imm,Rn */
	W8(r13, r11); UPD(0x0C0B5B50u, 2);  /* 0C0B5B4E mov.b Rm,@Rn */
	W8(r9, r2); UPD(0x0C0B5B52u, 1);  /* 0C0B5B50 mov.b Rm,@Rn */
	W32(r3, r4); UPD(0x0C0B5B54u, 1);  /* 0C0B5B52 mov.l Rm,@Rn */
L_0C0B5B54: BLKS(0x0C0B5B54u);
	{ IF(0x0C0B5B56u); ; /* slot nop */ UPD(0x0C0B5834u, 3); goto L_0C0B5834; }  /* 0C0B5B54 bra */
L_0C0B5BB0: BLKS(0x0C0B5BB0u);
	r0 = 0x99u; UPD(0x0C0B5BB2u, 1);  /* 0C0B5BB0 mov.w @(disp,pc),Rn */
	IF(0x0C0B5BB2u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B5BB4u, 1);  /* 0C0B5BB2 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0B5BB4 add #imm,Rn */
	IF(0x0C0B5BB6u); W8(r0 + r3, r5); UPD(0x0C0B5BB8u, 2);  /* 0C0B5BB6 mov.b Rm,@(r0,Rn) */
	r1 = r5 & 0xFF;  /* 0C0B5BB8 extu.b Rm,Rn */
	r0 = 0x78u;  /* 0C0B5BBA mov #imm,Rn */
	T = r1 > r0;  /* 0C0B5BBC cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B5B54u, 6); goto L_0C0B5B54; }  /* 0C0B5BBE bf */
L_0C0B5BC0: BLKS(0x0C0B5BC0u);
	r1 = r7;  /* 0C0B5BC0 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B5B1Au, 4); goto L_0C0B5B1A; }  /* 0C0B5BC2 bra */
L_0C0B5BD0: BLKS(0x0C0B5BD0u);
	{ W8(r2, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0B565Cu, 3); goto L_0C0B565C; }  /* 0C0B5BD0 bra */
L_0C0B5BE0: BLKS(0x0C0B5BE0u);
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B5BE2u, 1);  /* 0C0B5BE0 mov.w @Rm,Rn */
	r7 = 0xC3CC310u; UPD(0x0C0B5BE4u, 1);  /* 0C0B5BE2 mov.l @(disp,pc),Rn */
	{ W32(r7, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0B5598u, 3); goto L_0C0B5598; }  /* 0C0B5BE4 bra */
}

void blk_f_0C0B5BF0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B5BF0;
L_0C0B4940: BLKS(0x0C0B4940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4942u, 1);  /* 0C0B4940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4944u, 1);  /* 0C0B4942 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4946u, 1);  /* 0C0B4944 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4948u, 1);  /* 0C0B4946 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B494Au, 1);  /* 0C0B4948 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0B494Cu, 1);  /* 0C0B494A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0B494C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4950u, 2);  /* 0C0B494E mov.l Rm,@-Rn */
	IF(0x0C0B4950u); MACL = r12 * r2;  /* 0C0B4950 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B4954u, 3);  /* 0C0B4952 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B4956u, 1);  /* 0C0B4954 mov.l @(disp,pc),Rn */
	IF(0x0C0B4956u); r2 = MACL;  /* 0C0B4956 sts macl,Rn */
	IF(0x0C0B4958u); r15 -= 4; W32(r15, PR); UPD(0x0C0B495Au, 2);  /* 0C0B4958 sts.l pr,@-Rn */
	r2 += r0;  /* 0C0B495A add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C0B495Eu, 2);  /* 0C0B495C mov.l @(disp,Rm),Rn */
	r0 = 0x37u;  /* 0C0B495E mov #imm,Rn */
	T = r3 > r0;  /* 0C0B4960 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B496Au, 5); goto L_0C0B496A; } goto L_0C0B4966; }  /* 0C0B4962 bf/s */
L_0C0B4966: BLKS(0x0C0B4966u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0B5010u, 4); goto L_0C0B5010; }  /* 0C0B4966 bra */
L_0C0B496A: BLKS(0x0C0B496Au);
	r0 = 0xC0B497Cu;  /* 0C0B496A mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B496C add Rm,Rn */
	IF(0x0C0B496Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B4970u, 3);  /* 0C0B496E mov.w @(r0,Rm),Rn */
	IF(0x0C0B4970u); { u32 tv_ = (r4 + 0x0C0B4974u); u32 t_ = PHYS(tv_); IF(0x0C0B4972u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B49F0u: goto L_0C0B49F0; case 0x0C0B4A70u: goto L_0C0B4A70; case 0x0C0B4AB0u: goto L_0C0B4AB0; case 0x0C0B4AE0u: goto L_0C0B4AE0; case 0x0C0B4B10u: goto L_0C0B4B10; case 0x0C0B4B80u: goto L_0C0B4B80; case 0x0C0B4C40u: goto L_0C0B4C40; case 0x0C0B4C70u: goto L_0C0B4C70; case 0x0C0B4CA0u: goto L_0C0B4CA0; case 0x0C0B4CD0u: goto L_0C0B4CD0; case 0x0C0B4D00u: goto L_0C0B4D00; case 0x0C0B4D60u: goto L_0C0B4D60; case 0x0C0B4DF0u: goto L_0C0B4DF0; case 0x0C0B4E20u: goto L_0C0B4E20; case 0x0C0B4E50u: goto L_0C0B4E50; case 0x0C0B4E90u: goto L_0C0B4E90; case 0x0C0B4EC0u: goto L_0C0B4EC0; case 0x0C0B4F10u: goto L_0C0B4F10; case 0x0C0B4F80u: goto L_0C0B4F80; case 0x0C0B4FB0u: goto L_0C0B4FB0; default: JUMPD(tv_); } }  /* 0C0B4970 braf Rn */
L_0C0B49F0: BLKS(0x0C0B49F0u);
	r11 = 0xB4u; UPD(0x0C0B49F2u, 1);  /* 0C0B49F0 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C0B49F2 mov Rm,Rn */
	IF(0x0C0B49F4u); MACL = r12 * r11;  /* 0C0B49F4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B49F8u, 4);  /* 0C0B49F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B49F8u); r9 = MACL;  /* 0C0B49F8 sts macl,Rn */
	r9 += r10;  /* 0C0B49FA add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0B49FC add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B4A00u, 4);  /* 0C0B49FE mov.w @Rm,Rn */
	r8 = 0xC0A9D90u; UPD(0x0C0B4A02u, 1);  /* 0C0B4A00 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C0B4A02 tst Rm,Rn */
	IF(0x0C0B4A04u); r0 = T;  /* 0C0B4A04 movt Rn */
	r6 = 0xC1E9490u; UPD(0x0C0B4A08u, 3);  /* 0C0B4A06 mov.l @(disp,pc),Rn */
	IF(0x0C0B4A08u); r0 <<= 2;  /* 0C0B4A08 shll2 Rn */
	IF(0x0C0B4A0Au); { u32 t_ = r8; PR = 0x0C0B4A0Eu; IF(0x0C0B4A0Cu); r5 = R32(r0 + r6); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B4A0Eu); }  /* 0C0B4A0A jsr @Rn */
L_0C0B4A0E: BLKS(0x0C0B4A0Eu);
	r0 = 0x8Cu; UPD(0x0C0B4A10u, 1);  /* 0C0B4A0E mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFC4u;  /* 0C0B4A10 add #imm,Rn */
	r5 = 0x0u;  /* 0C0B4A12 mov #imm,Rn */
	IF(0x0C0B4A14u); W32(r0 + r9, r5); UPD(0x0C0B4A16u, 3);  /* 0C0B4A14 mov.l Rm,@(r0,Rn) */
	IF(0x0C0B4A16u); ;  /* 0C0B4A16 nop */
	UPD(0x0C0B4A18u, 1);
L_0C0B4A18: BLKS(0x0C0B4A18u);
	r11 = 0xB4u; UPD(0x0C0B4A1Au, 1);  /* 0C0B4A18 mov.w @(disp,pc),Rn */
	IF(0x0C0B4A1Au); MACL = r12 * r11;  /* 0C0B4A1A mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4A1Eu, 3);  /* 0C0B4A1C mov.l @(disp,pc),Rn */
	IF(0x0C0B4A1Eu); r4 = MACL;  /* 0C0B4A1E sts macl,Rn */
	r4 += r10;  /* 0C0B4A20 add Rm,Rn */
	r12 = R32(r4); UPD(0x0C0B4A24u, 3);  /* 0C0B4A22 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0B4A24 tst Rm,Rn */
	if (!T) { UPD(0x0C0B4A3Au, 4); goto L_0C0B4A3A; }  /* 0C0B4A26 bf */
L_0C0B4A28: BLKS(0x0C0B4A28u);
	r4 += 0x40u;  /* 0C0B4A28 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0B4A2Cu, 2);  /* 0C0B4A2A mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C0B4A2Eu, 1);  /* 0C0B4A2C mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C0B4A2E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B4A3Au, 4); goto L_0C0B4A3A; }  /* 0C0B4A30 bt */
L_0C0B4A32: BLKS(0x0C0B4A32u);
	r13 = 0xC175064u; UPD(0x0C0B4A34u, 1);  /* 0C0B4A32 mov.l @(disp,pc),Rn */
	r0 = R32(r13); UPD(0x0C0B4A36u, 1);  /* 0C0B4A34 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4A36 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B4A50u, 4); goto L_0C0B4A50; }  /* 0C0B4A38 bt */
L_0C0B4A3A: BLKS(0x0C0B4A3Au);
	r15 = r14;  /* 0C0B4A3A mov Rm,Rn */
	IF(0x0C0B4A3Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B4A3Eu, 2);  /* 0C0B4A3C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B4A40u, 1);  /* 0C0B4A3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B4A42u, 1);  /* 0C0B4A40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B4A44u, 1);  /* 0C0B4A42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B4A46u, 1);  /* 0C0B4A44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B4A48u, 1);  /* 0C0B4A46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B4A4Au, 1);  /* 0C0B4A48 mov.l @Rm+,Rn */
	IF(0x0C0B4A4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B4A4A rts */
L_0C0B4A50: BLKS(0x0C0B4A50u);
	r3 = 0x4u;  /* 0C0B4A50 mov #imm,Rn */
	IF(0x0C0B4A52u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0B4A52 shld Rm,Rn */
	r8 = 0x40000u; UPD(0x0C0B4A56u, 3);  /* 0C0B4A54 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C0B4A58u, 1);  /* 0C0B4A56 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C0B4A58 add Rm,Rn */
	r15 = r14;  /* 0C0B4A5A mov Rm,Rn */
	IF(0x0C0B4A5Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B4A5Eu, 3);  /* 0C0B4A5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B4A60u, 1);  /* 0C0B4A5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B4A62u, 1);  /* 0C0B4A60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B4A64u, 1);  /* 0C0B4A62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B4A66u, 1);  /* 0C0B4A64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B4A68u, 1);  /* 0C0B4A66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B4A6Au, 1);  /* 0C0B4A68 mov.l @Rm+,Rn */
	IF(0x0C0B4A6Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0B4A6A jmp @Rn */
L_0C0B4A70: BLKS(0x0C0B4A70u);
	r9 = 0xB4u; UPD(0x0C0B4A72u, 1);  /* 0C0B4A70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4A72 add #imm,Rn */
	IF(0x0C0B4A74u); MACL = r12 * r9;  /* 0C0B4A74 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4A78u, 4);  /* 0C0B4A76 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B4A78 mov #imm,Rn */
	IF(0x0C0B4A7Au); r8 = MACL;  /* 0C0B4A7A sts macl,Rn */
	r8 += r0;  /* 0C0B4A7C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4A80u, 4);  /* 0C0B4A7E mov.w @(disp,pc),Rn */
	IF(0x0C0B4A80u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4A82u, 1);  /* 0C0B4A80 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C0B4A82 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4A86u, 2);  /* 0C0B4A84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4A86 add #imm,Rn */
	IF(0x0C0B4A88u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4A8Au, 2);  /* 0C0B4A88 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0B4A8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B4A8Eu, 2);  /* 0C0B4A8C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4A90u, 1);  /* 0C0B4A8E mov.l @Rm,Rn */
L_0C0B4A90: BLKS(0x0C0B4A90u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4A92u, 1);  /* 0C0B4A90 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B4A94u, 1);  /* 0C0B4A92 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C0B4A96u, 1);  /* 0C0B4A94 mov.l @(disp,pc),Rn */
L_0C0B4A96: BLKS(0x0C0B4A96u);
	IF(0x0C0B4A96u); { u32 t_ = r0; PR = 0x0C0B4A9Au; IF(0x0C0B4A98u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B4A9Au); }  /* 0C0B4A96 jsr @Rn */
L_0C0B4A9A: BLKS(0x0C0B4A9Au);
	r7 = 0x0u;  /* 0C0B4A9A mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0B4A9Eu, 2);  /* 0C0B4A9C mov.l Rm,@Rn */
L_0C0B4A9E: BLKS(0x0C0B4A9Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B4A9E bra */
L_0C0B4AB0: BLKS(0x0C0B4AB0u);
	r8 = 0xB4u; UPD(0x0C0B4AB2u, 1);  /* 0C0B4AB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4AB2 add #imm,Rn */
	IF(0x0C0B4AB4u); MACL = r12 * r8;  /* 0C0B4AB4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B4AB8u, 4);  /* 0C0B4AB6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4ABAu, 1);  /* 0C0B4AB8 mov.w @(disp,pc),Rn */
	IF(0x0C0B4ABAu); r8 = MACL;  /* 0C0B4ABA sts macl,Rn */
	r8 += r11;  /* 0C0B4ABC add Rm,Rn */
	IF(0x0C0B4ABEu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AC0u, 3);  /* 0C0B4ABE mov.b @(r0,Rm),Rn */
	r7 = r10 & 0xFF;  /* 0C0B4AC0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B4AC4u, 2);  /* 0C0B4AC2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4AC4 add #imm,Rn */
	IF(0x0C0B4AC6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AC8u, 2);  /* 0C0B4AC6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0B4AC8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B4ACCu, 2);  /* 0C0B4ACA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4ACEu, 1);  /* 0C0B4ACC mov.l @Rm,Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4ACE bra */
L_0C0B4AE0: BLKS(0x0C0B4AE0u);
	r9 = 0xB4u; UPD(0x0C0B4AE2u, 1);  /* 0C0B4AE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4AE2 add #imm,Rn */
	IF(0x0C0B4AE4u); MACL = r12 * r9;  /* 0C0B4AE4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4AE8u, 4);  /* 0C0B4AE6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4AE8 mov #imm,Rn */
	IF(0x0C0B4AEAu); r8 = MACL;  /* 0C0B4AEA sts macl,Rn */
	r8 += r0;  /* 0C0B4AEC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4AF0u, 4);  /* 0C0B4AEE mov.w @(disp,pc),Rn */
	IF(0x0C0B4AF0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AF2u, 1);  /* 0C0B4AF0 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C0B4AF2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4AF6u, 2);  /* 0C0B4AF4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4AF6 add #imm,Rn */
	IF(0x0C0B4AF8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4AFAu, 2);  /* 0C0B4AF8 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0B4AFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B4AFEu, 2);  /* 0C0B4AFC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4AFE bra */
L_0C0B4B10: BLKS(0x0C0B4B10u);
	r0 = 0xB4u; UPD(0x0C0B4B12u, 1);  /* 0C0B4B10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4B12 add #imm,Rn */
	IF(0x0C0B4B14u); MACL = r12 * r0;  /* 0C0B4B14 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B4B18u, 4);  /* 0C0B4B16 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4B18 mov #imm,Rn */
	IF(0x0C0B4B1Au); r10 = MACL;  /* 0C0B4B1A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B4B1Eu, 3);  /* 0C0B4B1C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C0B4B1E add Rm,Rn */
	IF(0x0C0B4B20u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B4B22u, 2);  /* 0C0B4B20 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4B22 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4B26u, 2);  /* 0C0B4B24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4B26 add #imm,Rn */
	IF(0x0C0B4B28u); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B4B2Au, 2);  /* 0C0B4B28 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BECB0u; UPD(0x0C0B4B2Cu, 1);  /* 0C0B4B2A mov.l @(disp,pc),Rn */
	r8 = r13 & 0xFF;  /* 0C0B4B2C extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0B4B30u, 2);  /* 0C0B4B2E mov.l Rm,@(disp,Rn) */
	r6 = R32(r10 + 0x24u); UPD(0x0C0B4B32u, 1);  /* 0C0B4B30 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C0B4B34u, 1);  /* 0C0B4B32 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4B34u); { u32 t_ = r11; PR = 0x0C0B4B38u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0B4B38u); }  /* 0C0B4B34 jsr @Rn */
L_0C0B4B38: BLKS(0x0C0B4B38u);
	r5 = 0x98u; UPD(0x0C0B4B3Au, 1);  /* 0C0B4B38 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B4B3A mov #imm,Rn */
	r5 += r10;  /* 0C0B4B3C add Rm,Rn */
	r6 = R32(r10); UPD(0x0C0B4B40u, 3);  /* 0C0B4B3E mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0B4B40 add #imm,Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C0B4B44u, 2);  /* 0C0B4B42 mov.l @(disp,pc),Rn */
	r0 = 0xA3u; UPD(0x0C0B4B46u, 1);  /* 0C0B4B44 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C0B4B46 and Rm,Rn */
	W8(r5, r1); UPD(0x0C0B4B4Au, 2);  /* 0C0B4B48 mov.b Rm,@Rn */
	W32(r10, r6); UPD(0x0C0B4B4Cu, 1);  /* 0C0B4B4A mov.l Rm,@Rn */
	IF(0x0C0B4B4Cu); W8(r0 + r10, r1); UPD(0x0C0B4B4Eu, 1);  /* 0C0B4B4C mov.b Rm,@(r0,Rn) */
	{ { u32 v_ = r1; r5 -= 1; W8(r5, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C0B4A9Eu, 3); goto L_0C0B4A9E; }  /* 0C0B4B4E bra */
L_0C0B4B80: BLKS(0x0C0B4B80u);
	r10 = 0xB4u; UPD(0x0C0B4B82u, 1);  /* 0C0B4B80 mov.w @(disp,pc),Rn */
	IF(0x0C0B4B82u); MACL = r12 * r10;  /* 0C0B4B82 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B4B86u, 3);  /* 0C0B4B84 mov.l @(disp,pc),Rn */
	IF(0x0C0B4B86u); r0 = MACL;  /* 0C0B4B86 sts macl,Rn */
	r0 += r5;  /* 0C0B4B88 add Rm,Rn */
	r10 = R32(r0 + 0x1Cu); UPD(0x0C0B4B8Cu, 3);  /* 0C0B4B8A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C0B4B8Eu, 1);  /* 0C0B4B8C mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C0B4B8E tst Rm,Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B4BE0u, 4); goto L_0C0B4BE0; } goto L_0C0B4B94; }  /* 0C0B4B90 bt/s */
L_0C0B4B94: BLKS(0x0C0B4B94u);
	r13 = 0xA9u; UPD(0x0C0B4B96u, 2);  /* 0C0B4B94 mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B4B96 add Rm,Rn */
	UPD(0x0C0B4B98u, 1);
L_0C0B4B98: BLKS(0x0C0B4B98u);
	r10 += 0x4u;  /* 0C0B4B98 add #imm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C0B4B9Cu, 2);  /* 0C0B4B9A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4B9C add #imm,Rn */
	r9 = R32(r11 + 0x24u); UPD(0x0C0B4BA0u, 2);  /* 0C0B4B9E mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0B4BA2u, 1);  /* 0C0B4BA0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C0B4BA2 add Rm,Rn */
	IF(0x0C0B4BA4u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B4BA6u, 2);  /* 0C0B4BA4 mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C0B4BA8u, 1);  /* 0C0B4BA6 mov.l @Rm+,Rn */
	r0 = r5 & 0xFF;  /* 0C0B4BA8 extu.b Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C0B4BACu, 2);  /* 0C0B4BAA mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0B4BAC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0B4BB0u, 2);  /* 0C0B4BAE mov.l Rm,@Rn */
	r8 += r6;  /* 0C0B4BB0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4BB4u, 2);  /* 0C0B4BB2 mov.b @Rm,Rn */
	r6 = r9;  /* 0C0B4BB4 mov Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0B4BB6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B4BBAu, 3);  /* 0C0B4BB8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0B4BBCu, 1);  /* 0C0B4BBA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0B4BBC mov Rm,Rn */
	IF(0x0C0B4BBEu); { u32 t_ = r0; PR = 0x0C0B4BC2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4BC2u); }  /* 0C0B4BBE jsr @Rn */
L_0C0B4BC2: BLKS(0x0C0B4BC2u);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4BC4u, 1);  /* 0C0B4BC2 mov.b @Rm,Rn */
	r6 = r8;  /* 0C0B4BC4 mov Rm,Rn */
	r4 = 0x20000u; UPD(0x0C0B4BC8u, 2);  /* 0C0B4BC6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0B4BC8 mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C0B4BCCu, 2);  /* 0C0B4BCA mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0B4BCC extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4BD0u, 2);  /* 0C0B4BCE mov.l Rm,@Rn */
	r5 = r9;  /* 0C0B4BD0 mov Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B4BD4u, 2);  /* 0C0B4BD2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B4BD4u); { u32 t_ = r8; PR = 0x0C0B4BD8u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4BD8u); }  /* 0C0B4BD4 jsr @Rn */
L_0C0B4BD8: BLKS(0x0C0B4BD8u);
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C0B4BDAu, 1);  /* 0C0B4BD8 mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C0B4BDA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4B98u, 4); goto L_0C0B4B98; } UPD(0x0C0B4BE0u, 1); goto L_0C0B4BE0; }  /* 0C0B4BDC bf/s */
L_0C0B4BE0: BLKS(0x0C0B4BE0u);
	r11 = 0xC175064u; UPD(0x0C0B4BE2u, 1);  /* 0C0B4BE0 mov.l @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C0B4BE4u, 1);  /* 0C0B4BE2 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4BE4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B4C30u, 4); goto L_0C0B4C30; }  /* 0C0B4BE6 bt */
L_0C0B4BE8: BLKS(0x0C0B4BE8u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B4BEAu, 1);  /* 0C0B4BE8 mov.l @(disp,pc),Rn */
	IF(0x0C0B4BEAu); { u32 t_ = r8; PR = 0x0C0B4BEEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B4BEEu); }  /* 0C0B4BEA jsr @Rn */
L_0C0B4BEE: BLKS(0x0C0B4BEEu);
	r7 = 0xB4u; UPD(0x0C0B4BF0u, 1);  /* 0C0B4BEE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0B4BF0 exts.w Rm,Rn */
	IF(0x0C0B4BF2u); MACL = r12 * r7;  /* 0C0B4BF2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B4BF6u, 4);  /* 0C0B4BF4 mov.l @(disp,pc),Rn */
	r1 = ~r4;  /* 0C0B4BF6 not Rm,Rn */
	IF(0x0C0B4BF8u); r3 = MACL;  /* 0C0B4BF8 sts macl,Rn */
	r3 += r6;  /* 0C0B4BFA add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0B4BFC add #imm,Rn */
	IF(0x0C0B4BFEu); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0B4BFE rotl Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B4C02u, 6);  /* 0C0B4C00 mov.w @Rm,Rn */
	IF(0x0C0B4C02u); r9 = T;  /* 0C0B4C02 movt Rn */
	T = (r2 & r2) == 0;  /* 0C0B4C04 tst Rm,Rn */
	IF(0x0C0B4C06u); r10 = T;  /* 0C0B4C06 movt Rn */
	r9 &= r10;  /* 0C0B4C08 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0B4C0A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4C20u, 8); goto L_0C0B4C20; } goto L_0C0B4C10; }  /* 0C0B4C0C bt/s */
L_0C0B4C10: BLKS(0x0C0B4C10u);
	IF(0x0C0B4C10u); MACL = r4 * r7;  /* 0C0B4C10 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0B4C14u, 4);  /* 0C0B4C12 mov.w @(disp,pc),Rn */
	IF(0x0C0B4C14u); r4 = MACL;  /* 0C0B4C14 sts macl,Rn */
	r4 += r6;  /* 0C0B4C16 add Rm,Rn */
	r4 += r0;  /* 0C0B4C18 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B4C1Cu, 4);  /* 0C0B4C1A mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B4C1C add #imm,Rn */
	W8(r4, r7); UPD(0x0C0B4C20u, 2);  /* 0C0B4C1E mov.b Rm,@Rn */
L_0C0B4C20: BLKS(0x0C0B4C20u);
	r5 = 0x0u;  /* 0C0B4C20 mov #imm,Rn */
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4C22 bra */
L_0C0B4C30: BLKS(0x0C0B4C30u);
	r13 = 0xC071C90u; UPD(0x0C0B4C32u, 1);  /* 0C0B4C30 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B4C34u, 1);  /* 0C0B4C32 mov.l @(disp,pc),Rn */
	IF(0x0C0B4C34u); { u32 t_ = r13; PR = 0x0C0B4C38u; IF(0x0C0B4C36u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B4C38u); }  /* 0C0B4C34 jsr @Rn */
L_0C0B4C38: BLKS(0x0C0B4C38u);
	{ IF(0x0C0B4C3Au); ; /* slot nop */ UPD(0x0C0B4BE8u, 3); goto L_0C0B4BE8; }  /* 0C0B4C38 bra */
L_0C0B4C40: BLKS(0x0C0B4C40u);
	r10 = 0xB4u; UPD(0x0C0B4C42u, 1);  /* 0C0B4C40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4C42 add #imm,Rn */
	IF(0x0C0B4C44u); MACL = r12 * r10;  /* 0C0B4C44 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4C48u, 4);  /* 0C0B4C46 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B4C48 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4C4Cu, 2);  /* 0C0B4C4A mov.w @(disp,pc),Rn */
	IF(0x0C0B4C4Cu); r8 = MACL;  /* 0C0B4C4C sts macl,Rn */
	r8 += r9;  /* 0C0B4C4E add Rm,Rn */
	IF(0x0C0B4C50u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C52u, 3);  /* 0C0B4C50 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4C52 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4C56u, 2);  /* 0C0B4C54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4C56 add #imm,Rn */
	IF(0x0C0B4C58u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C5Au, 2);  /* 0C0B4C58 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4C5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4C5Eu, 2);  /* 0C0B4C5C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4C60u, 1);  /* 0C0B4C5E mov.l @Rm,Rn */
L_0C0B4C60: BLKS(0x0C0B4C60u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4C62u, 1);  /* 0C0B4C60 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0B4C64u, 1);  /* 0C0B4C62 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4C64 bra */
L_0C0B4C70: BLKS(0x0C0B4C70u);
	r8 = 0xB4u; UPD(0x0C0B4C72u, 1);  /* 0C0B4C70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4C72 add #imm,Rn */
	IF(0x0C0B4C74u); MACL = r12 * r8;  /* 0C0B4C74 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4C78u, 4);  /* 0C0B4C76 mov.l @(disp,pc),Rn */
	IF(0x0C0B4C78u); r8 = MACL;  /* 0C0B4C78 sts macl,Rn */
	r8 += r0;  /* 0C0B4C7A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4C7Eu, 3);  /* 0C0B4C7C mov.w @(disp,pc),Rn */
	IF(0x0C0B4C7Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C80u, 1);  /* 0C0B4C7E mov.b @(r0,Rm),Rn */
	r7 = r5 & 0xFF;  /* 0C0B4C80 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B4C84u, 2);  /* 0C0B4C82 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4C84 add #imm,Rn */
	IF(0x0C0B4C86u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4C88u, 2);  /* 0C0B4C86 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4C88 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4C8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B4C8Eu, 3);  /* 0C0B4C8C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4C90u, 1);  /* 0C0B4C8E mov.l @Rm,Rn */
L_0C0B4C90: BLKS(0x0C0B4C90u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4C92u, 1);  /* 0C0B4C90 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B4C94u, 1);  /* 0C0B4C92 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4C94 bra */
L_0C0B4CA0: BLKS(0x0C0B4CA0u);
	r10 = 0xB4u; UPD(0x0C0B4CA2u, 1);  /* 0C0B4CA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4CA2 add #imm,Rn */
	IF(0x0C0B4CA4u); MACL = r12 * r10;  /* 0C0B4CA4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4CA8u, 4);  /* 0C0B4CA6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B4CA8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4CACu, 2);  /* 0C0B4CAA mov.w @(disp,pc),Rn */
	IF(0x0C0B4CACu); r8 = MACL;  /* 0C0B4CAC sts macl,Rn */
	r8 += r9;  /* 0C0B4CAE add Rm,Rn */
	IF(0x0C0B4CB0u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CB2u, 3);  /* 0C0B4CB0 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4CB2 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4CB6u, 2);  /* 0C0B4CB4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4CB6 add #imm,Rn */
	IF(0x0C0B4CB8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CBAu, 2);  /* 0C0B4CB8 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4CBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4CBEu, 2);  /* 0C0B4CBC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B4CC0u, 1);  /* 0C0B4CBE mov.l @Rm,Rn */
L_0C0B4CC0: BLKS(0x0C0B4CC0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4CC2u, 1);  /* 0C0B4CC0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFD30u; UPD(0x0C0B4CC4u, 1);  /* 0C0B4CC2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B4A96u, 3); goto L_0C0B4A96; }  /* 0C0B4CC4 bra */
L_0C0B4CD0: BLKS(0x0C0B4CD0u);
	r4 = 0xB4u; UPD(0x0C0B4CD2u, 1);  /* 0C0B4CD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4CD2 add #imm,Rn */
	IF(0x0C0B4CD4u); MACL = r12 * r4;  /* 0C0B4CD4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B4CD8u, 4);  /* 0C0B4CD6 mov.l @(disp,pc),Rn */
	IF(0x0C0B4CD8u); r8 = MACL;  /* 0C0B4CD8 sts macl,Rn */
	r8 += r2;  /* 0C0B4CDA add Rm,Rn */
	UPD(0x0C0B4CDCu, 2);
L_0C0B4CDC: BLKS(0x0C0B4CDCu);
	r0 = 0xB0u; UPD(0x0C0B4CDEu, 1);  /* 0C0B4CDC mov.w @(disp,pc),Rn */
	IF(0x0C0B4CDEu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CE0u, 1);  /* 0C0B4CDE mov.b @(r0,Rm),Rn */
	r5 = r11 & 0xFF;  /* 0C0B4CE0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B4CE4u, 2);  /* 0C0B4CE2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4CE4 add #imm,Rn */
	IF(0x0C0B4CE6u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4CE8u, 2);  /* 0C0B4CE6 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4CE8 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B4CEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B4CEEu, 3);  /* 0C0B4CEC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4CEE bra */
L_0C0B4D00: BLKS(0x0C0B4D00u);
	r8 = 0xB4u; UPD(0x0C0B4D02u, 1);  /* 0C0B4D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4D02 add #imm,Rn */
	IF(0x0C0B4D04u); MACL = r12 * r8;  /* 0C0B4D04 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4D08u, 4);  /* 0C0B4D06 mov.l @(disp,pc),Rn */
	IF(0x0C0B4D08u); r8 = MACL;  /* 0C0B4D08 sts macl,Rn */
	r8 += r0;  /* 0C0B4D0A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4D0Eu, 3);  /* 0C0B4D0C mov.w @(disp,pc),Rn */
	IF(0x0C0B4D0Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D10u, 1);  /* 0C0B4D0E mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4D10 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0B4D14u, 2);  /* 0C0B4D12 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4D14 add #imm,Rn */
	IF(0x0C0B4D16u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D18u, 2);  /* 0C0B4D16 mov.b @(r0,Rm),Rn */
	r7 = r5 & 0xFF;  /* 0C0B4D18 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B4D1Cu, 2);  /* 0C0B4D1A mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C0B4D1C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 4); goto L_0C0B4C90; }  /* 0C0B4D1E bra */
L_0C0B4D60: BLKS(0x0C0B4D60u);
	r11 = 0xC0A8B50u; UPD(0x0C0B4D62u, 1);  /* 0C0B4D60 mov.l @(disp,pc),Rn */
	IF(0x0C0B4D62u); { u32 t_ = r11; PR = 0x0C0B4D66u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B4D66u); }  /* 0C0B4D62 jsr @Rn */
L_0C0B4D66: BLKS(0x0C0B4D66u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B4D66 exts.w Rm,Rn */
	IF(0x0C0B4D68u); T = (s32)r1 >= 0;  /* 0C0B4D68 cmp/pz Rn */
	if (!T) { UPD(0x0C0B4DB4u, 5); goto L_0C0B4DB4; }  /* 0C0B4D6A bf */
L_0C0B4D6C: BLKS(0x0C0B4D6Cu);
	r15 += 0xFFFFFFF8u;  /* 0C0B4D6C add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C0B4D70u, 2);  /* 0C0B4D6E mov.w @(disp,pc),Rn */
	IF(0x0C0B4D70u); MACL = r12 * r11;  /* 0C0B4D70 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B4D74u, 3);  /* 0C0B4D72 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0B4D74 mov #imm,Rn */
	IF(0x0C0B4D76u); r0 = MACL;  /* 0C0B4D76 sts macl,Rn */
	r0 += r1;  /* 0C0B4D78 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B4D7A add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B4D7Eu, 5);  /* 0C0B4D7C mov.w @Rm,Rn */
	IF(0x0C0B4D7Eu); MACL = r13 * r11;  /* 0C0B4D7E mul.l Rm,Rn */
	r8 = 0xA1u; UPD(0x0C0B4D82u, 3);  /* 0C0B4D80 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B4D82 add #imm,Rn */
	IF(0x0C0B4D84u); r5 = MACL;  /* 0C0B4D84 sts macl,Rn */
	r5 += r1;  /* 0C0B4D86 add Rm,Rn */
	r11 += 0xFFFFFFF3u;  /* 0C0B4D88 add #imm,Rn */
	r5 += r11;  /* 0C0B4D8A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B4D8Eu, 6);  /* 0C0B4D8C mov.b @Rm,Rn */
	IF(0x0C0B4D8Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4D90u, 1);  /* 0C0B4D8E mov.b @(r0,Rm),Rn */
	r7 = 0xA9u; UPD(0x0C0B4D92u, 1);  /* 0C0B4D90 mov.w @(disp,pc),Rn */
	r3 |= r6;  /* 0C0B4D92 or Rm,Rn */
	IF(0x0C0B4D94u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B4D96u, 2);  /* 0C0B4D94 mov.b @(r0,Rm),Rn */
	W8(r5, r3); UPD(0x0C0B4D98u, 1);  /* 0C0B4D96 mov.b Rm,@Rn */
	r7 = r4 & 0xFF;  /* 0C0B4D98 extu.b Rm,Rn */
	r2 = 0x20000u; UPD(0x0C0B4D9Cu, 2);  /* 0C0B4D9A mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0B4D9C mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B4DA0u, 2);  /* 0C0B4D9E mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C0B4DA2u, 1);  /* 0C0B4DA0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0B4DA4u, 1);  /* 0C0B4DA2 mov.l Rm,@(disp,Rn) */
	r13 = 0xC175064u; UPD(0x0C0B4DA6u, 1);  /* 0C0B4DA4 mov.l @(disp,pc),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B4DA8u, 1);  /* 0C0B4DA6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4DA8u); { u32 t_ = r9; PR = 0x0C0B4DACu; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4DACu); }  /* 0C0B4DA8 jsr @Rn */
L_0C0B4DAC: BLKS(0x0C0B4DACu);
	r0 = R32(r13); UPD(0x0C0B4DAEu, 1);  /* 0C0B4DAC mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4DAE cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4DE0u, 4); goto L_0C0B4DE0; } UPD(0x0C0B4DB4u, 1); goto L_0C0B4DB4; }  /* 0C0B4DB0 bt/s */
L_0C0B4DB4: BLKS(0x0C0B4DB4u);
	r5 = 0xB4u; UPD(0x0C0B4DB6u, 1);  /* 0C0B4DB4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4DB6 add #imm,Rn */
	IF(0x0C0B4DB8u); MACL = r12 * r5;  /* 0C0B4DB8 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B4DBCu, 4);  /* 0C0B4DBA mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4DBEu, 1);  /* 0C0B4DBC mov.w @(disp,pc),Rn */
	IF(0x0C0B4DBEu); r8 = MACL;  /* 0C0B4DBE sts macl,Rn */
	r8 += r7;  /* 0C0B4DC0 add Rm,Rn */
	IF(0x0C0B4DC2u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4DC4u, 3);  /* 0C0B4DC2 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0B4DC4 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4DC6 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4DCAu, 3);  /* 0C0B4DC8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4DCA add #imm,Rn */
	IF(0x0C0B4DCCu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4DCEu, 2);  /* 0C0B4DCC mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C0B4DCE extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0B4DD2u, 2);  /* 0C0B4DD0 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C60u, 3); goto L_0C0B4C60; }  /* 0C0B4DD2 bra */
L_0C0B4DE0: BLKS(0x0C0B4DE0u);
	r0 = 0xC071C90u; UPD(0x0C0B4DE2u, 1);  /* 0C0B4DE0 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B4DE4u, 1);  /* 0C0B4DE2 mov.l @(disp,pc),Rn */
	IF(0x0C0B4DE4u); { u32 t_ = r0; PR = 0x0C0B4DE8u; IF(0x0C0B4DE6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B4DE8u); }  /* 0C0B4DE4 jsr @Rn */
L_0C0B4DE8: BLKS(0x0C0B4DE8u);
	{ IF(0x0C0B4DEAu); ; /* slot nop */ UPD(0x0C0B4DB4u, 3); goto L_0C0B4DB4; }  /* 0C0B4DE8 bra */
L_0C0B4DF0: BLKS(0x0C0B4DF0u);
	r8 = 0xB4u; UPD(0x0C0B4DF2u, 1);  /* 0C0B4DF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4DF2 add #imm,Rn */
	IF(0x0C0B4DF4u); MACL = r12 * r8;  /* 0C0B4DF4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4DF8u, 4);  /* 0C0B4DF6 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B4DF8 mov #imm,Rn */
	IF(0x0C0B4DFAu); r8 = MACL;  /* 0C0B4DFA sts macl,Rn */
	r8 += r0;  /* 0C0B4DFC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4E00u, 4);  /* 0C0B4DFE mov.w @(disp,pc),Rn */
	IF(0x0C0B4E00u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E02u, 1);  /* 0C0B4E00 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4E02 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B4E06u, 2);  /* 0C0B4E04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4E06 add #imm,Rn */
	IF(0x0C0B4E08u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E0Au, 2);  /* 0C0B4E08 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4E0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4E0Eu, 2);  /* 0C0B4E0C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 3); goto L_0C0B4C90; }  /* 0C0B4E0E bra */
L_0C0B4E20: BLKS(0x0C0B4E20u);
	r5 = 0xB4u; UPD(0x0C0B4E22u, 1);  /* 0C0B4E20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E22 add #imm,Rn */
	IF(0x0C0B4E24u); MACL = r12 * r5;  /* 0C0B4E24 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B4E28u, 4);  /* 0C0B4E26 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4E2Au, 1);  /* 0C0B4E28 mov.w @(disp,pc),Rn */
	IF(0x0C0B4E2Au); r8 = MACL;  /* 0C0B4E2A sts macl,Rn */
	r8 += r7;  /* 0C0B4E2C add Rm,Rn */
	IF(0x0C0B4E2Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E30u, 3);  /* 0C0B4E2E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B4E30 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0B4E32 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4E36u, 3);  /* 0C0B4E34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4E36 add #imm,Rn */
	IF(0x0C0B4E38u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4E3Au, 2);  /* 0C0B4E38 mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C0B4E3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0B4E3Eu, 2);  /* 0C0B4E3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4A90u, 3); goto L_0C0B4A90; }  /* 0C0B4E3E bra */
L_0C0B4E50: BLKS(0x0C0B4E50u);
	r11 = 0xC0A8B50u; UPD(0x0C0B4E52u, 1);  /* 0C0B4E50 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E52u); { u32 t_ = r11; PR = 0x0C0B4E56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B4E56u); }  /* 0C0B4E52 jsr @Rn */
L_0C0B4E56: BLKS(0x0C0B4E56u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B4E56 exts.w Rm,Rn */
	IF(0x0C0B4E58u); T = (s32)r4 >= 0;  /* 0C0B4E58 cmp/pz Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B4E80u, 5); goto L_0C0B4E80; } goto L_0C0B4E5E; }  /* 0C0B4E5A bf/s */
L_0C0B4E5E: BLKS(0x0C0B4E5Eu);
	r9 = 0xB4u; UPD(0x0C0B4E60u, 2);  /* 0C0B4E5E mov.w @(disp,pc),Rn */
	IF(0x0C0B4E60u); MACL = r4 * r9;  /* 0C0B4E60 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4E64u, 3);  /* 0C0B4E62 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E64u); r0 = MACL;  /* 0C0B4E64 sts macl,Rn */
	r0 += r10;  /* 0C0B4E66 add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C0B4E6Au, 3);  /* 0C0B4E68 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C0B4E6Cu, 1);  /* 0C0B4E6A mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B4E6C add #imm,Rn */
	IF(0x0C0B4E6Eu); { u32 t_ = r8; PR = 0x0C0B4E72u; W32(r0 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B4E72u); }  /* 0C0B4E6E jsr @Rn */
L_0C0B4E72: BLKS(0x0C0B4E72u);
	IF(0x0C0B4E72u); MACL = r12 * r9;  /* 0C0B4E72 mul.l Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E74 add #imm,Rn */
	IF(0x0C0B4E76u); r8 = MACL;  /* 0C0B4E76 sts macl,Rn */
	{ r8 += r10; /* slot add Rm,Rn */ UPD(0x0C0B4CDCu, 7); goto L_0C0B4CDC; }  /* 0C0B4E78 bra */
L_0C0B4E80: BLKS(0x0C0B4E80u);
	r13 = 0xB4u; UPD(0x0C0B4E82u, 1);  /* 0C0B4E80 mov.w @(disp,pc),Rn */
	IF(0x0C0B4E82u); MACL = r12 * r13;  /* 0C0B4E82 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B4E86u, 3);  /* 0C0B4E84 mov.l @(disp,pc),Rn */
	IF(0x0C0B4E86u); r0 = MACL;  /* 0C0B4E86 sts macl,Rn */
	{ IF(0x0C0B4E8Au); W32(r0 + r3, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4E88 bra */
L_0C0B4E90: BLKS(0x0C0B4E90u);
	r8 = 0xB4u; UPD(0x0C0B4E92u, 1);  /* 0C0B4E90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4E92 add #imm,Rn */
	IF(0x0C0B4E94u); MACL = r12 * r8;  /* 0C0B4E94 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B4E98u, 4);  /* 0C0B4E96 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4E98 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4E9Cu, 2);  /* 0C0B4E9A mov.w @(disp,pc),Rn */
	IF(0x0C0B4E9Cu); r8 = MACL;  /* 0C0B4E9C sts macl,Rn */
	r8 += r9;  /* 0C0B4E9E add Rm,Rn */
	IF(0x0C0B4EA0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EA2u, 3);  /* 0C0B4EA0 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C0B4EA2 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0B4EA6u, 2);  /* 0C0B4EA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4EA6 add #imm,Rn */
	IF(0x0C0B4EA8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EAAu, 2);  /* 0C0B4EA8 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C0B4EAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B4EAEu, 2);  /* 0C0B4EAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4CC0u, 3); goto L_0C0B4CC0; }  /* 0C0B4EAE bra */
L_0C0B4EC0: BLKS(0x0C0B4EC0u);
	r11 = 0xB4u; UPD(0x0C0B4EC2u, 1);  /* 0C0B4EC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4EC2 add #imm,Rn */
	IF(0x0C0B4EC4u); MACL = r12 * r11;  /* 0C0B4EC4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B4EC8u, 4);  /* 0C0B4EC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B4ECAu, 1);  /* 0C0B4EC8 mov.w @(disp,pc),Rn */
	IF(0x0C0B4ECAu); r8 = MACL;  /* 0C0B4ECA sts macl,Rn */
	r8 += r5;  /* 0C0B4ECC add Rm,Rn */
	IF(0x0C0B4ECEu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4ED0u, 3);  /* 0C0B4ECE mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B4ED0 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B4ED2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4ED6u, 3);  /* 0C0B4ED4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4ED6 add #imm,Rn */
	IF(0x0C0B4ED8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4EDAu, 2);  /* 0C0B4ED8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0B4EDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B4EDEu, 2);  /* 0C0B4EDC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C60u, 3); goto L_0C0B4C60; }  /* 0C0B4EDE bra */
L_0C0B4F10: BLKS(0x0C0B4F10u);
	r9 = 0xB4u; UPD(0x0C0B4F12u, 1);  /* 0C0B4F10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4F12 add #imm,Rn */
	IF(0x0C0B4F14u); MACL = r12 * r9;  /* 0C0B4F14 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B4F18u, 4);  /* 0C0B4F16 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4F18 mov #imm,Rn */
	IF(0x0C0B4F1Au); r8 = MACL;  /* 0C0B4F1A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B4F1Eu, 3);  /* 0C0B4F1C mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0B4F1E add Rm,Rn */
	IF(0x0C0B4F20u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F22u, 2);  /* 0C0B4F20 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C0B4F22 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B4F26u, 2);  /* 0C0B4F24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4F26 add #imm,Rn */
	IF(0x0C0B4F28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F2Au, 2);  /* 0C0B4F28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0B4F2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B4F2Eu, 2);  /* 0C0B4F2C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BD6F0u; UPD(0x0C0B4F30u, 1);  /* 0C0B4F2E mov.l @(disp,pc),Rn */
	r11 = 0xC0A8CA0u; UPD(0x0C0B4F32u, 1);  /* 0C0B4F30 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0B4F34u, 1);  /* 0C0B4F32 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0B4F36u, 1);  /* 0C0B4F34 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4F36u); { u32 t_ = r13; PR = 0x0C0B4F3Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4F3Au); }  /* 0C0B4F36 jsr @Rn */
L_0C0B4F3A: BLKS(0x0C0B4F3Au);
	r15 += 0x8u;  /* 0C0B4F3A add #imm,Rn */
	IF(0x0C0B4F3Cu); { u32 t_ = r11; PR = 0x0C0B4F40u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B4F40u); }  /* 0C0B4F3C jsr @Rn */
L_0C0B4F40: BLKS(0x0C0B4F40u);
	r8 += 0x3Cu;  /* 0C0B4F40 add #imm,Rn */
	r1 = ~r0;  /* 0C0B4F42 not Rm,Rn */
	IF(0x0C0B4F44u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0B4F44 rotl Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B4F48u, 4);  /* 0C0B4F46 mov.w @Rm,Rn */
	IF(0x0C0B4F48u); r3 = T;  /* 0C0B4F48 movt Rn */
	T = (r13 & r13) == 0;  /* 0C0B4F4A tst Rm,Rn */
	IF(0x0C0B4F4Cu); r6 = T;  /* 0C0B4F4C movt Rn */
	r3 &= r6;  /* 0C0B4F4E and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B4F50 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B4F6Cu, 8); goto L_0C0B4F6C; } goto L_0C0B4F56; }  /* 0C0B4F52 bt/s */
L_0C0B4F56: BLKS(0x0C0B4F56u);
	r8 += 0x7Eu;  /* 0C0B4F56 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B4F5Au, 3);  /* 0C0B4F58 mov.w @Rm,Rn */
	IF(0x0C0B4F5Au); MACL = r6 * r9;  /* 0C0B4F5A mul.l Rm,Rn */
	r5 = 0xA5u; UPD(0x0C0B4F5Eu, 3);  /* 0C0B4F5C mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0B4F5E add #imm,Rn */
	IF(0x0C0B4F60u); r9 = MACL;  /* 0C0B4F60 sts macl,Rn */
	r9 += r10;  /* 0C0B4F62 add Rm,Rn */
	r9 += r5;  /* 0C0B4F64 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B4F68u, 5);  /* 0C0B4F66 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B4F68 add #imm,Rn */
	W8(r9, r10); UPD(0x0C0B4F6Cu, 2);  /* 0C0B4F6A mov.b Rm,@Rn */
L_0C0B4F6C: BLKS(0x0C0B4F6Cu);
	r3 = 0x0u;  /* 0C0B4F6C mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 4); goto L_0C0B4A18; }  /* 0C0B4F6E bra */
L_0C0B4F80: BLKS(0x0C0B4F80u);
	r8 = 0xB4u; UPD(0x0C0B4F82u, 1);  /* 0C0B4F80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4F82 add #imm,Rn */
	IF(0x0C0B4F84u); MACL = r12 * r8;  /* 0C0B4F84 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4F88u, 4);  /* 0C0B4F86 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0B4F88 mov #imm,Rn */
	IF(0x0C0B4F8Au); r8 = MACL;  /* 0C0B4F8A sts macl,Rn */
	r8 += r0;  /* 0C0B4F8C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4F90u, 4);  /* 0C0B4F8E mov.w @(disp,pc),Rn */
	IF(0x0C0B4F90u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F92u, 1);  /* 0C0B4F90 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4F92 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4F96u, 2);  /* 0C0B4F94 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B4F96 add #imm,Rn */
	IF(0x0C0B4F98u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B4F9Au, 2);  /* 0C0B4F98 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C0B4F9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B4F9Eu, 2);  /* 0C0B4F9C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B4C90u, 3); goto L_0C0B4C90; }  /* 0C0B4F9E bra */
L_0C0B4FB0: BLKS(0x0C0B4FB0u);
	r9 = 0xB4u; UPD(0x0C0B4FB2u, 1);  /* 0C0B4FB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B4FB2 add #imm,Rn */
	IF(0x0C0B4FB4u); MACL = r12 * r9;  /* 0C0B4FB4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B4FB8u, 4);  /* 0C0B4FB6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B4FB8 mov #imm,Rn */
	IF(0x0C0B4FBAu); r9 = MACL;  /* 0C0B4FBA sts macl,Rn */
	r9 += r0;  /* 0C0B4FBC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B4FC0u, 4);  /* 0C0B4FBE mov.w @(disp,pc),Rn */
	IF(0x0C0B4FC0u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B4FC2u, 1);  /* 0C0B4FC0 mov.b @(r0,Rm),Rn */
	r13 = 0xA9u; UPD(0x0C0B4FC4u, 1);  /* 0C0B4FC2 mov.w @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C0B4FC4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B4FC8u, 2);  /* 0C0B4FC6 mov.l Rm,@Rn */
	r13 += r9;  /* 0C0B4FC8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4FCCu, 2);  /* 0C0B4FCA mov.b @Rm,Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0B4FCEu, 1);  /* 0C0B4FCC mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C0B4FCE extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B4FD2u, 2);  /* 0C0B4FD0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B4FD4u, 1);  /* 0C0B4FD2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B4FD6u, 1);  /* 0C0B4FD4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B4FD6u); { u32 t_ = r8; PR = 0x0C0B4FDAu; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B4FDAu); }  /* 0C0B4FD6 jsr @Rn */
L_0C0B4FDA: BLKS(0x0C0B4FDAu);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B4FDCu, 1);  /* 0C0B4FDA mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C0B4FDC mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C0B4FE0u, 2);  /* 0C0B4FDE mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0B4FE0 extu.b Rm,Rn */
	r11 = 0xC07CD80u; UPD(0x0C0B4FE4u, 2);  /* 0C0B4FE2 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0B4FE4 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0B4FE8u, 2);  /* 0C0B4FE6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0B4FEAu, 1);  /* 0C0B4FE8 mov.l Rm,@(disp,Rn) */
	r10 = 0xC175064u; UPD(0x0C0B4FECu, 1);  /* 0C0B4FEA mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B4FEEu, 1);  /* 0C0B4FEC mov.l @(disp,Rm),Rn */
	IF(0x0C0B4FEEu); { u32 t_ = r11; PR = 0x0C0B4FF2u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B4FF2u); }  /* 0C0B4FEE jsr @Rn */
L_0C0B4FF2: BLKS(0x0C0B4FF2u);
	r0 = R32(r10); UPD(0x0C0B4FF4u, 1);  /* 0C0B4FF2 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B4FF4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5000u, 4); goto L_0C0B5000; } UPD(0x0C0B4FFAu, 1); goto L_0C0B4FFA; }  /* 0C0B4FF6 bt/s */
L_0C0B4FFA: BLKS(0x0C0B4FFAu);
	{ W32(r9, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B4FFA bra */
L_0C0B5000: BLKS(0x0C0B5000u);
	r7 = 0xC071C90u; UPD(0x0C0B5002u, 1);  /* 0C0B5000 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B5004u, 1);  /* 0C0B5002 mov.l @(disp,pc),Rn */
	IF(0x0C0B5004u); { u32 t_ = r7; PR = 0x0C0B5008u; IF(0x0C0B5006u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B5008u); }  /* 0C0B5004 jsr @Rn */
L_0C0B5008: BLKS(0x0C0B5008u);
	{ IF(0x0C0B500Au); ; /* slot nop */ UPD(0x0C0B4FFAu, 3); goto L_0C0B4FFA; }  /* 0C0B5008 bra */
L_0C0B5010: BLKS(0x0C0B5010u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0B4A18u, 3); goto L_0C0B4A18; }  /* 0C0B5010 bra */
L_0C0B5BF0: BLKS(0x0C0B5BF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5BF2u, 1);  /* 0C0B5BF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5BF4u, 1);  /* 0C0B5BF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5BF6u, 1);  /* 0C0B5BF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5BF8u, 1);  /* 0C0B5BF6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0B5BF8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5BFCu, 2);  /* 0C0B5BFA mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0B5BFEu, 1);  /* 0C0B5BFC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5C00u, 1);  /* 0C0B5BFE mov.l Rm,@-Rn */
	IF(0x0C0B5C00u); MACL = r10 * r2;  /* 0C0B5C00 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B5C04u, 3);  /* 0C0B5C02 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B5C06u, 1);  /* 0C0B5C04 mov.l @(disp,pc),Rn */
	IF(0x0C0B5C06u); r3 = MACL;  /* 0C0B5C06 sts macl,Rn */
	IF(0x0C0B5C08u); r15 -= 4; W32(r15, PR); UPD(0x0C0B5C0Au, 2);  /* 0C0B5C08 sts.l pr,@-Rn */
	r3 += r0;  /* 0C0B5C0A add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0B5C0Eu, 2);  /* 0C0B5C0C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0B5C0E add #imm,Rn */
	r0 = 0x37u;  /* 0C0B5C10 mov #imm,Rn */
	T = r2 > r0;  /* 0C0B5C12 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B5C20u, 6); goto L_0C0B5C20; } goto L_0C0B5C18; }  /* 0C0B5C14 bf/s */
L_0C0B5C18: BLKS(0x0C0B5C18u);
	r0 = 0x24F2u; UPD(0x0C0B5C1Au, 2);  /* 0C0B5C18 mov.w @(disp,pc),Rn */
	IF(0x0C0B5C1Au); { u32 tv_ = (r0 + 0x0C0B5C1Eu); u32 t_ = PHYS(tv_); r2 = R32(r3 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B8110u: goto L_0C0B8110; default: JUMPD(tv_); } }  /* 0C0B5C1A braf Rn */
L_0C0B5C20: BLKS(0x0C0B5C20u);
	r0 = 0xC0B5C30u;  /* 0C0B5C20 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B5C22 add Rm,Rn */
	IF(0x0C0B5C24u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B5C26u, 3);  /* 0C0B5C24 mov.w @(r0,Rm),Rn */
	IF(0x0C0B5C26u); { u32 tv_ = (r3 + 0x0C0B5C2Au); u32 t_ = PHYS(tv_); IF(0x0C0B5C28u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CA0u: goto L_0C0B5CA0; case 0x0C0B5CE0u: goto L_0C0B5CE0; case 0x0C0B5F40u: goto L_0C0B5F40; case 0x0C0B61E0u: goto L_0C0B61E0; case 0x0C0B6230u: goto L_0C0B6230; case 0x0C0B6310u: goto L_0C0B6310; case 0x0C0B63A0u: goto L_0C0B63A0; case 0x0C0B63F0u: goto L_0C0B63F0; case 0x0C0B6480u: goto L_0C0B6480; case 0x0C0B6490u: goto L_0C0B6490; case 0x0C0B65D0u: goto L_0C0B65D0; case 0x0C0B6740u: goto L_0C0B6740; case 0x0C0B68A0u: goto L_0C0B68A0; case 0x0C0B6A10u: goto L_0C0B6A10; case 0x0C0B6C20u: goto L_0C0B6C20; case 0x0C0B6DD0u: goto L_0C0B6DD0; case 0x0C0B6E20u: goto L_0C0B6E20; case 0x0C0B6E70u: goto L_0C0B6E70; case 0x0C0B7010u: goto L_0C0B7010; case 0x0C0B7240u: goto L_0C0B7240; case 0x0C0B7280u: goto L_0C0B7280; case 0x0C0B73E0u: goto L_0C0B73E0; case 0x0C0B7550u: goto L_0C0B7550; case 0x0C0B7880u: goto L_0C0B7880; case 0x0C0B78E0u: goto L_0C0B78E0; case 0x0C0B7AE0u: goto L_0C0B7AE0; case 0x0C0B7C40u: goto L_0C0B7C40; case 0x0C0B7D80u: goto L_0C0B7D80; case 0x0C0B7EE0u: goto L_0C0B7EE0; case 0x0C0B7F70u: goto L_0C0B7F70; case 0x0C0B7FD0u: goto L_0C0B7FD0; default: JUMPD(tv_); } }  /* 0C0B5C26 braf Rn */
L_0C0B5CA0: BLKS(0x0C0B5CA0u);
	r7 = 0xC0B5040u; UPD(0x0C0B5CA2u, 1);  /* 0C0B5CA0 mov.l @(disp,pc),Rn */
	IF(0x0C0B5CA2u); { u32 t_ = r7; PR = 0x0C0B5CA6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0B5040, 0x0C0B5040u, 0x0C0B5CA6u); }  /* 0C0B5CA2 jsr @Rn */
L_0C0B5CA6: BLKS(0x0C0B5CA6u);
	r6 = 0xB4u; UPD(0x0C0B5CA8u, 1);  /* 0C0B5CA6 mov.w @(disp,pc),Rn */
	IF(0x0C0B5CA8u); MACL = r10 * r6;  /* 0C0B5CA8 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B5CACu, 3);  /* 0C0B5CAA mov.l @(disp,pc),Rn */
	IF(0x0C0B5CACu); r3 = MACL;  /* 0C0B5CAC sts macl,Rn */
	r3 += r5;  /* 0C0B5CAE add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C0B5CB2u, 3);  /* 0C0B5CB0 mov.l @(disp,Rm),Rn */
	r4 = 0xFF800000u; UPD(0x0C0B5CB4u, 1);  /* 0C0B5CB2 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C0B5CB4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0B5CBCu, 4); goto L_0C0B5CBC; }  /* 0C0B5CB6 bt */
L_0C0B5CB8: BLKS(0x0C0B5CB8u);
	r8 = 0x0u;  /* 0C0B5CB8 mov #imm,Rn */
	W32(r3, r8); UPD(0x0C0B5CBCu, 2);  /* 0C0B5CBA mov.l Rm,@Rn */
L_0C0B5CBC: BLKS(0x0C0B5CBCu);
	r3 += 0x3Cu;  /* 0C0B5CBC add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B5CC0u, 2);  /* 0C0B5CBE mov.w @Rm,Rn */
	r1 = 0xC3CC310u; UPD(0x0C0B5CC2u, 1);  /* 0C0B5CC0 mov.l @(disp,pc),Rn */
L_0C0B5CC2: BLKS(0x0C0B5CC2u);
	W32(r1, r2); UPD(0x0C0B5CC4u, 1);  /* 0C0B5CC2 mov.l Rm,@Rn */
L_0C0B5CC4: BLKS(0x0C0B5CC4u);
	r14 += 0x24u;  /* 0C0B5CC4 add #imm,Rn */
	UPD(0x0C0B5CC6u, 1);
L_0C0B5CC6: BLKS(0x0C0B5CC6u);
	r15 = r14;  /* 0C0B5CC6 mov Rm,Rn */
	IF(0x0C0B5CC8u); PR = R32(r15); r15 += 4; UPD(0x0C0B5CCAu, 2);  /* 0C0B5CC8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B5CCCu, 1);  /* 0C0B5CCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B5CCEu, 1);  /* 0C0B5CCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B5CD0u, 1);  /* 0C0B5CCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B5CD2u, 1);  /* 0C0B5CD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B5CD4u, 1);  /* 0C0B5CD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B5CD6u, 1);  /* 0C0B5CD4 mov.l @Rm+,Rn */
	IF(0x0C0B5CD6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B5CD6 rts */
L_0C0B5CE0: BLKS(0x0C0B5CE0u);
	r9 = 0xC0A8B50u; UPD(0x0C0B5CE2u, 1);  /* 0C0B5CE0 mov.l @(disp,pc),Rn */
	IF(0x0C0B5CE2u); { u32 t_ = r9; PR = 0x0C0B5CE6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B5CE6u); }  /* 0C0B5CE2 jsr @Rn */
L_0C0B5CE6: BLKS(0x0C0B5CE6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B5CE6 exts.w Rm,Rn */
	IF(0x0C0B5CE8u); T = (s32)r11 >= 0;  /* 0C0B5CE8 cmp/pz Rn */
	{ u32 c_ = T; r8 = 0x1Eu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B5CF2u, 5); goto L_0C0B5CF2; } goto L_0C0B5CEE; }  /* 0C0B5CEA bt/s */
L_0C0B5CEE: BLKS(0x0C0B5CEEu);
	{ IF(0x0C0B5CF0u); ; /* slot nop */ UPD(0x0C0B5EF0u, 4); goto L_0C0B5EF0; }  /* 0C0B5CEE bra */
L_0C0B5CF2: BLKS(0x0C0B5CF2u);
	r7 = 0xB4u; UPD(0x0C0B5CF4u, 1);  /* 0C0B5CF2 mov.w @(disp,pc),Rn */
	IF(0x0C0B5CF4u); MACL = r10 * r7;  /* 0C0B5CF4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B5CF8u, 3);  /* 0C0B5CF6 mov.l @(disp,pc),Rn */
	IF(0x0C0B5CF8u); r6 = MACL;  /* 0C0B5CF8 sts macl,Rn */
	IF(0x0C0B5CFAu); MACL = r11 * r7;  /* 0C0B5CFA mul.l Rm,Rn */
	r6 += r12;  /* 0C0B5CFC add Rm,Rn */
	r1 = R32(r6 + 0x2Cu); UPD(0x0C0B5D00u, 5);  /* 0C0B5CFE mov.l @(disp,Rm),Rn */
	IF(0x0C0B5D00u); r0 = MACL;  /* 0C0B5D00 sts macl,Rn */
	r0 += r12;  /* 0C0B5D02 add Rm,Rn */
	r11 = R32(r0 + 0x24u); UPD(0x0C0B5D06u, 3);  /* 0C0B5D04 mov.l @(disp,Rm),Rn */
	r13 = R32(r0 + 0x28u); UPD(0x0C0B5D08u, 1);  /* 0C0B5D06 mov.l @(disp,Rm),Rn */
	r11 += r1;  /* 0C0B5D08 add Rm,Rn */
	r4 = R32(r6 + 0x30u); UPD(0x0C0B5D0Cu, 2);  /* 0C0B5D0A mov.l @(disp,Rm),Rn */
	r13 += r4;  /* 0C0B5D0C add Rm,Rn */
	W32(r6 + 0x24u, r11); UPD(0x0C0B5D10u, 2);  /* 0C0B5D0E mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r13); UPD(0x0C0B5D12u, 1);  /* 0C0B5D10 mov.l Rm,@(disp,Rn) */
	r6 += 0x7Eu;  /* 0C0B5D12 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C0B5D16u, 2);  /* 0C0B5D14 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C0B5D16 add #imm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C0B5D1Au, 2);  /* 0C0B5D18 mov.l @(disp,Rm),Rn */
	T = r2 > r8;  /* 0C0B5D1A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B5DBAu, 4); goto L_0C0B5DBA; }  /* 0C0B5D1C bt */
L_0C0B5D1E: BLKS(0x0C0B5D1Eu);
	r0 = 0xC0B5D40u;  /* 0C0B5D1E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B5D20 add Rm,Rn */
	IF(0x0C0B5D22u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B5D24u, 3);  /* 0C0B5D22 mov.w @(r0,Rm),Rn */
	IF(0x0C0B5D24u); { u32 tv_ = (r5 + 0x0C0B5D28u); u32 t_ = PHYS(tv_); IF(0x0C0B5D26u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5D80u: goto L_0C0B5D80; case 0x0C0B5DBAu: goto L_0C0B5DBA; case 0x0C0B5E10u: goto L_0C0B5E10; case 0x0C0B5E32u: goto L_0C0B5E32; default: JUMPD(tv_); } }  /* 0C0B5D24 braf Rn */
L_0C0B5D80: BLKS(0x0C0B5D80u);
	r3 = 0xB4u; UPD(0x0C0B5D82u, 1);  /* 0C0B5D80 mov.w @(disp,pc),Rn */
	IF(0x0C0B5D82u); MACL = r11 * r3;  /* 0C0B5D82 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B5D86u, 3);  /* 0C0B5D84 mov.l @(disp,pc),Rn */
	IF(0x0C0B5D86u); r2 = MACL;  /* 0C0B5D86 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C0B5D8Au, 2);  /* 0C0B5D88 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B5D8A add Rm,Rn */
	r2 += r1;  /* 0C0B5D8C add Rm,Rn */
	r2 += 0x1u;  /* 0C0B5D8E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5D92u, 4);  /* 0C0B5D90 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0B5D92 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B5D94 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5DF0u, 5); goto L_0C0B5DF0; } goto L_0C0B5D9A; }  /* 0C0B5D96 bf/s */
L_0C0B5D9A: BLKS(0x0C0B5D9Au);
	IF(0x0C0B5D9Au); MACL = r10 * r3;  /* 0C0B5D9A mul.l Rm,Rn */
	r2 += 0x2u;  /* 0C0B5D9C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B5DA0u, 5);  /* 0C0B5D9E mov.b @Rm,Rn */
	IF(0x0C0B5DA0u); r3 = MACL;  /* 0C0B5DA0 sts macl,Rn */
	r3 += r7;  /* 0C0B5DA2 add Rm,Rn */
	r1 += r3;  /* 0C0B5DA4 add Rm,Rn */
	r1 += 0x1u;  /* 0C0B5DA6 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5DAAu, 5);  /* 0C0B5DA8 mov.b @Rm,Rn */
	T = (r6 & r8) == 0;  /* 0C0B5DAA tst Rm,Rn */
	if (T) { UPD(0x0C0B5E92u, 4); goto L_0C0B5E92; }  /* 0C0B5DAC bt */
L_0C0B5DAE: BLKS(0x0C0B5DAEu);
	r13 = 0x1u;  /* 0C0B5DAE mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B5DB2u, 2);  /* 0C0B5DB0 mov.w @(disp,pc),Rn */
	r2 = 0xC0C2110u; UPD(0x0C0B5DB4u, 1);  /* 0C0B5DB2 mov.l @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C0B5DB4 mov #imm,Rn */
	IF(0x0C0B5DB6u); { u32 t_ = r2; PR = 0x0C0B5DBAu; IF(0x0C0B5DB8u); W16(r0 + r3, r13); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B5DBAu); }  /* 0C0B5DB6 jsr @Rn */
L_0C0B5DBA: BLKS(0x0C0B5DBAu);
	r8 = 0xB4u; UPD(0x0C0B5DBCu, 1);  /* 0C0B5DBA mov.w @(disp,pc),Rn */
	IF(0x0C0B5DBCu); MACL = r10 * r8;  /* 0C0B5DBC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B5DC0u, 3);  /* 0C0B5DBE mov.l @(disp,pc),Rn */
	IF(0x0C0B5DC0u); r11 = MACL;  /* 0C0B5DC0 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0B5DC4u, 2);  /* 0C0B5DC2 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C0B5DC4 add Rm,Rn */
	r5 = R32(r11 + 0xCu); UPD(0x0C0B5DC8u, 2);  /* 0C0B5DC6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B5DC8u); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0B5DCAu, 1);  /* 0C0B5DC8 mov.w @(r0,Rm),Rn */
	r5 += r1;  /* 0C0B5DCA add Rm,Rn */
	W32(r11 + 0xCu, r5); UPD(0x0C0B5DCEu, 2);  /* 0C0B5DCC mov.l Rm,@(disp,Rn) */
L_0C0B5DCE: BLKS(0x0C0B5DCEu);
	r1 = 0xC0A8AE0u; UPD(0x0C0B5DD0u, 1);  /* 0C0B5DCE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B5DD0 mov Rm,Rn */
	UPD(0x0C0B5DD2u, 1);
L_0C0B5DD2: BLKS(0x0C0B5DD2u);
	r14 += 0x24u;  /* 0C0B5DD2 add #imm,Rn */
	UPD(0x0C0B5DD4u, 1);
L_0C0B5DD4: BLKS(0x0C0B5DD4u);
	r15 = r14;  /* 0C0B5DD4 mov Rm,Rn */
	IF(0x0C0B5DD6u); PR = R32(r15); r15 += 4; UPD(0x0C0B5DD8u, 2);  /* 0C0B5DD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B5DDAu, 1);  /* 0C0B5DD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B5DDCu, 1);  /* 0C0B5DDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B5DDEu, 1);  /* 0C0B5DDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B5DE0u, 1);  /* 0C0B5DDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B5DE2u, 1);  /* 0C0B5DE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B5DE4u, 1);  /* 0C0B5DE2 mov.l @Rm+,Rn */
	IF(0x0C0B5DE4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); case 0x0C0B4940u: goto L_0C0B4940; case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C0B5DE4 jmp @Rn */
L_0C0B5DF0: BLKS(0x0C0B5DF0u);
	IF(0x0C0B5DF0u); MACL = r10 * r3;  /* 0C0B5DF0 mul.l Rm,Rn */
	IF(0x0C0B5DF2u); r3 = MACL;  /* 0C0B5DF2 sts macl,Rn */
	r3 += r7;  /* 0C0B5DF4 add Rm,Rn */
	r9 = R32(r3 + 0x8u); UPD(0x0C0B5DF8u, 5);  /* 0C0B5DF6 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C0B5DF8 add #imm,Rn */
	W32(r3 + 0x8u, r9); UPD(0x0C0B5DFCu, 2);  /* 0C0B5DFA mov.l Rm,@(disp,Rn) */
L_0C0B5DFC: BLKS(0x0C0B5DFCu);
	r1 = 0xC0A8B10u; UPD(0x0C0B5DFEu, 1);  /* 0C0B5DFC mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B5DD2u, 3); goto L_0C0B5DD2; }  /* 0C0B5DFE bra */
L_0C0B5E10: BLKS(0x0C0B5E10u);
	r7 = 0xB4u; UPD(0x0C0B5E12u, 1);  /* 0C0B5E10 mov.w @(disp,pc),Rn */
	IF(0x0C0B5E12u); MACL = r11 * r7;  /* 0C0B5E12 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B5E16u, 3);  /* 0C0B5E14 mov.l @(disp,pc),Rn */
	IF(0x0C0B5E16u); r1 = MACL;  /* 0C0B5E16 sts macl,Rn */
	IF(0x0C0B5E18u); MACL = r10 * r7;  /* 0C0B5E18 mul.l Rm,Rn */
	r11 = 0xA0u; UPD(0x0C0B5E1Cu, 4);  /* 0C0B5E1A mov.w @(disp,pc),Rn */
	r1 += r12;  /* 0C0B5E1C add Rm,Rn */
	IF(0x0C0B5E1Eu); r3 = MACL;  /* 0C0B5E1E sts macl,Rn */
	r1 += r11;  /* 0C0B5E20 add Rm,Rn */
	r3 += r12;  /* 0C0B5E22 add Rm,Rn */
	r11 += r3;  /* 0C0B5E24 add Rm,Rn */
	r1 += 0x2u;  /* 0C0B5E26 add #imm,Rn */
	r11 += 0x1u;  /* 0C0B5E28 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B5E2Cu, 8);  /* 0C0B5E2A mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B5E2Eu, 1);  /* 0C0B5E2C mov.b @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C0B5E2E tst Rm,Rn */
	if (T) { UPD(0x0C0B5EE0u, 4); goto L_0C0B5EE0; }  /* 0C0B5E30 bt */
L_0C0B5E32: BLKS(0x0C0B5E32u);
	r13 = 0xB4u; UPD(0x0C0B5E34u, 1);  /* 0C0B5E32 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B5E34 mov Rm,Rn */
	IF(0x0C0B5E36u); MACL = r10 * r13;  /* 0C0B5E36 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B5E3Au, 4);  /* 0C0B5E38 mov.l @(disp,pc),Rn */
	IF(0x0C0B5E3Au); r5 = MACL;  /* 0C0B5E3A sts macl,Rn */
	r5 += r2;  /* 0C0B5E3C add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B5E40u, 3);  /* 0C0B5E3E mov.l @(disp,Rm),Rn */
	r6 = 0xC1E948Cu; UPD(0x0C0B5E42u, 1);  /* 0C0B5E40 mov.l @(disp,pc),Rn */
	IF(0x0C0B5E42u); r0 <<= 2;  /* 0C0B5E42 shll2 Rn */
	IF(0x0C0B5E44u); r3 = R32(r0 + r6); UPD(0x0C0B5E46u, 2);  /* 0C0B5E44 mov.l @(r0,Rm),Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C0B5E48u, 1);  /* 0C0B5E46 mov.l @(disp,pc),Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C0B5E4Au, 1);  /* 0C0B5E48 mov.l @(disp,pc),Rn */
	IF(0x0C0B5E4Au); { u32 t_ = r8; PR = 0x0C0B5E4Eu; W32(r5 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B5E4Eu); }  /* 0C0B5E4A jsr @Rn */
L_0C0B5E4E: BLKS(0x0C0B5E4Eu);
	r4 = r10;  /* 0C0B5E4E mov Rm,Rn */
	r5 = 0x4u;  /* 0C0B5E50 mov #imm,Rn */
	IF(0x0C0B5E52u); { u32 t_ = r9; PR = 0x0C0B5E56u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B5E56u); }  /* 0C0B5E52 jsr @Rn */
L_0C0B5E56: BLKS(0x0C0B5E56u);
	T = (r0 & r0) == 0;  /* 0C0B5E56 tst Rm,Rn */
	if (T) { UPD(0x0C0B5E92u, 4); goto L_0C0B5E92; }  /* 0C0B5E58 bt */
L_0C0B5E5A: BLKS(0x0C0B5E5Au);
	r4 = 0x0u;  /* 0C0B5E5A mov #imm,Rn */
	W32(r14, r4); UPD(0x0C0B5E5Eu, 2);  /* 0C0B5E5C mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C0B5E5E mov #imm,Rn */
	UPD(0x0C0B5E60u, 1);
L_0C0B5E60: BLKS(0x0C0B5E60u);
	r11 = 0xB4u; UPD(0x0C0B5E62u, 1);  /* 0C0B5E60 mov.w @(disp,pc),Rn */
	IF(0x0C0B5E62u); MACL = r10 * r11;  /* 0C0B5E62 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B5E66u, 3);  /* 0C0B5E64 mov.l @(disp,pc),Rn */
	IF(0x0C0B5E66u); r11 = MACL;  /* 0C0B5E66 sts macl,Rn */
	r11 += r9;  /* 0C0B5E68 add Rm,Rn */
	r7 = R32(r11 + 0xCu); UPD(0x0C0B5E6Cu, 3);  /* 0C0B5E6A mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C0B5E6C add Rm,Rn */
	IF(0x0C0B5E6Eu); r7 <<= 2;  /* 0C0B5E6E shll2 Rn */
	r7 += 0xFFFFFFC4u;  /* 0C0B5E70 add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0B5E72 exts.w Rm,Rn */
	r13 += 0xFFFFFFC0u;  /* 0C0B5E74 add #imm,Rn */
	r0 = 0x180u; UPD(0x0C0B5E78u, 6);  /* 0C0B5E76 mov.w @(disp,pc),Rn */
	r1 = r13 & 0xFFFF;  /* 0C0B5E78 extu.w Rm,Rn */
	T = r1 > r0;  /* 0C0B5E7A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r13 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5EA0u, 5); goto L_0C0B5EA0; } UPD(0x0C0B5E80u, 1); goto L_0C0B5E80; }  /* 0C0B5E7C bf/s */
L_0C0B5E80: BLKS(0x0C0B5E80u);
	r7 = R32(r14); UPD(0x0C0B5E82u, 1);  /* 0C0B5E80 mov.l @Rm,Rn */
	r13 = 0x7u;  /* 0C0B5E82 mov #imm,Rn */
	r7 += 0x1u;  /* 0C0B5E84 add #imm,Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0B5E86 exts.w Rm,Rn */
	W32(r14, r0); UPD(0x0C0B5E8Au, 4);  /* 0C0B5E88 mov.l Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0B5E8Cu, 1);  /* 0C0B5E8A mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r13;  /* 0C0B5E8C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B5E60u, 4); goto L_0C0B5E60; } UPD(0x0C0B5E92u, 1); goto L_0C0B5E92; }  /* 0C0B5E8E bf/s */
L_0C0B5E92: BLKS(0x0C0B5E92u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B5E92 bra */
L_0C0B5EA0: BLKS(0x0C0B5EA0u);
	r8 = 0xC069B20u; UPD(0x0C0B5EA2u, 1);  /* 0C0B5EA0 mov.l @(disp,pc),Rn */
	r5 = 0x300000u; UPD(0x0C0B5EA4u, 1);  /* 0C0B5EA2 mov.l @(disp,pc),Rn */
	IF(0x0C0B5EA4u); { u32 t_ = r8; PR = 0x0C0B5EA8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B5EA8u); }  /* 0C0B5EA4 jsr @Rn */
L_0C0B5EA8: BLKS(0x0C0B5EA8u);
	r2 = 0x66666667u; UPD(0x0C0B5EAAu, 1);  /* 0C0B5EA8 mov.l @(disp,pc),Rn */
	IF(0x0C0B5EAAu); r0 <<= 2;  /* 0C0B5EAA shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B5EAC dmuls.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C0B5EB0u, 4);  /* 0C0B5EAE mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0B5EB0 mov Rm,Rn */
	IF(0x0C0B5EB2u); r3 = MACH;  /* 0C0B5EB2 sts mach,Rn */
	IF(0x0C0B5EB4u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C0B5EB4 shar Rn */
	IF(0x0C0B5EB6u); T = r0 >> 31; r0 <<= 1;  /* 0C0B5EB6 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B5EB8 subc Rm,Rn */
	r3 -= r0;  /* 0C0B5EBA sub Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0B5EBEu, 7);  /* 0C0B5EBC mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0B5EBE add Rm,Rn */
	r5 = 0x300000u; UPD(0x0C0B5EC2u, 2);  /* 0C0B5EC0 mov.l @(disp,pc),Rn */
	IF(0x0C0B5EC2u); { u32 t_ = r9; PR = 0x0C0B5EC6u; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B5EC6u); }  /* 0C0B5EC2 jsr @Rn */
L_0C0B5EC6: BLKS(0x0C0B5EC6u);
	r6 = R32(r11 + 0x28u); UPD(0x0C0B5EC8u, 1);  /* 0C0B5EC6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B5EC8 add #imm,Rn */
	r5 = 0x38000u; UPD(0x0C0B5ECCu, 2);  /* 0C0B5ECA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B5ECC add Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C0B5ED0u, 2);  /* 0C0B5ECE mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B5ED0 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0B5ED4u, 2);  /* 0C0B5ED2 mov.l Rm,@Rn */
	r7 = r13;  /* 0C0B5ED4 mov Rm,Rn */
	IF(0x0C0B5ED6u); { u32 t_ = r8; PR = 0x0C0B5EDAu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0B5EDAu); }  /* 0C0B5ED6 jsr @Rn */
L_0C0B5EDA: BLKS(0x0C0B5EDAu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0B5E80u, 3); goto L_0C0B5E80; }  /* 0C0B5EDA bra */
L_0C0B5EE0: BLKS(0x0C0B5EE0u);
	r0 = 0x88u; UPD(0x0C0B5EE2u, 1);  /* 0C0B5EE0 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0B5EE2 mov #imm,Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0B5EE6u, 2);  /* 0C0B5EE4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B5EE6u); W16(r0 + r3, r11); UPD(0x0C0B5EE8u, 1);  /* 0C0B5EE6 mov.w Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFFu;  /* 0C0B5EE8 add #imm,Rn */
	UPD(0x0C0B5EEAu, 1);
L_0C0B5EEA: BLKS(0x0C0B5EEAu);
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5DCEu, 3); goto L_0C0B5DCE; }  /* 0C0B5EEA bra */
L_0C0B5EF0: BLKS(0x0C0B5EF0u);
	r1 = 0xC0B4940u; UPD(0x0C0B5EF2u, 1);  /* 0C0B5EF0 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B5DD2u, 3); goto L_0C0B5DD2; }  /* 0C0B5EF2 bra */
L_0C0B5F40: BLKS(0x0C0B5F40u);
	r12 = 0xC0A8CA0u; UPD(0x0C0B5F42u, 1);  /* 0C0B5F40 mov.l @(disp,pc),Rn */
	IF(0x0C0B5F42u); { u32 t_ = r12; PR = 0x0C0B5F46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B5F46u); }  /* 0C0B5F42 jsr @Rn */
L_0C0B5F46: BLKS(0x0C0B5F46u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B5F46 exts.w Rm,Rn */
	IF(0x0C0B5F48u); T = (s32)r11 >= 0;  /* 0C0B5F48 cmp/pz Rn */
	if (!T) { UPD(0x0C0B5EF0u, 5); goto L_0C0B5EF0; }  /* 0C0B5F4A bf */
L_0C0B5F4C: BLKS(0x0C0B5F4Cu);
	r13 = 0xB4u; UPD(0x0C0B5F4Eu, 1);  /* 0C0B5F4C mov.w @(disp,pc),Rn */
	IF(0x0C0B5F4Eu); MACL = r10 * r13;  /* 0C0B5F4E mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B5F52u, 3);  /* 0C0B5F50 mov.l @(disp,pc),Rn */
	IF(0x0C0B5F52u); r4 = MACL;  /* 0C0B5F52 sts macl,Rn */
	IF(0x0C0B5F54u); MACL = r11 * r13;  /* 0C0B5F54 mul.l Rm,Rn */
	r4 += r8;  /* 0C0B5F56 add Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C0B5F5Au, 5);  /* 0C0B5F58 mov.l @(disp,pc),Rn */
	IF(0x0C0B5F5Au); r3 = MACL;  /* 0C0B5F5A sts macl,Rn */
	r11 = R32(r4); UPD(0x0C0B5F5Eu, 2);  /* 0C0B5F5C mov.l @Rm,Rn */
	r3 += r8;  /* 0C0B5F5E add Rm,Rn */
	r11 &= r2;  /* 0C0B5F60 and Rm,Rn */
	W32(r4, r11); UPD(0x0C0B5F64u, 3);  /* 0C0B5F62 mov.l Rm,@Rn */
	r1 = 0x13000000u; UPD(0x0C0B5F66u, 1);  /* 0C0B5F64 mov.l @(disp,pc),Rn */
	r6 = R32(r3); UPD(0x0C0B5F68u, 1);  /* 0C0B5F66 mov.l @Rm,Rn */
	r5 = R32(r4 + 0x2Cu); UPD(0x0C0B5F6Au, 1);  /* 0C0B5F68 mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C0B5F6A and Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C0B5F6Eu, 2);  /* 0C0B5F6C mov.l @(disp,Rm),Rn */
	r11 |= r6;  /* 0C0B5F6E or Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0B5F72u, 2);  /* 0C0B5F70 mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C0B5F72 add Rm,Rn */
	r7 = R32(r4 + 0x30u); UPD(0x0C0B5F76u, 2);  /* 0C0B5F74 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C0B5F76 add Rm,Rn */
	W32(r4, r11); UPD(0x0C0B5F7Au, 2);  /* 0C0B5F78 mov.l Rm,@Rn */
	W32(r4 + 0x24u, r12); UPD(0x0C0B5F7Cu, 1);  /* 0C0B5F7A mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r0); UPD(0x0C0B5F7Eu, 1);  /* 0C0B5F7C mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C0B5F7E add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B5F82u, 2);  /* 0C0B5F80 mov.w @Rm,Rn */
	IF(0x0C0B5F82u); MACL = r11 * r13;  /* 0C0B5F82 mul.l Rm,Rn */
	IF(0x0C0B5F84u); r9 = MACL;  /* 0C0B5F84 sts macl,Rn */
	r9 += r8;  /* 0C0B5F86 add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0B5F88 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B5F8Cu, 6);  /* 0C0B5F8A mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0B5F8C tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B6084u, 4); goto L_0C0B6084; } goto L_0C0B5F92; }  /* 0C0B5F8E bt/s */
L_0C0B5F92: BLKS(0x0C0B5F92u);
	r3 = R32(r4 + 0xCu); UPD(0x0C0B5F94u, 2);  /* 0C0B5F92 mov.l @(disp,Rm),Rn */
	r4 = 0x25u;  /* 0C0B5F94 mov #imm,Rn */
	T = r3 > r4;  /* 0C0B5F96 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B6050u, 5); goto L_0C0B6050; }  /* 0C0B5F98 bt */
L_0C0B5F9A: BLKS(0x0C0B5F9Au);
	r0 = 0xC0B5FB8u;  /* 0C0B5F9A mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B5F9C add Rm,Rn */
	IF(0x0C0B5F9Eu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B5FA0u, 3);  /* 0C0B5F9E mov.w @(r0,Rm),Rn */
	IF(0x0C0B5FA0u); { u32 tv_ = (r9 + 0x0C0B5FA4u); u32 t_ = PHYS(tv_); IF(0x0C0B5FA2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6010u: goto L_0C0B6010; case 0x0C0B6050u: goto L_0C0B6050; case 0x0C0B60A0u: goto L_0C0B60A0; case 0x0C0B60BCu: goto L_0C0B60BC; default: JUMPD(tv_); } }  /* 0C0B5FA0 braf Rn */
L_0C0B6010: BLKS(0x0C0B6010u);
	r2 = 0xB4u; UPD(0x0C0B6012u, 1);  /* 0C0B6010 mov.w @(disp,pc),Rn */
	IF(0x0C0B6012u); MACL = r11 * r2;  /* 0C0B6012 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B6016u, 3);  /* 0C0B6014 mov.l @(disp,pc),Rn */
	IF(0x0C0B6016u); r0 = MACL;  /* 0C0B6016 sts macl,Rn */
	r13 = 0xA2u; UPD(0x0C0B601Au, 2);  /* 0C0B6018 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0B601A add Rm,Rn */
	IF(0x0C0B601Cu); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B601Eu, 2);  /* 0C0B601C mov.b @(r0,Rm),Rn */
	IF(0x0C0B601Eu); T = (s32)r8 >= 0;  /* 0C0B601E cmp/pz Rn */
	if (T) { UPD(0x0C0B6084u, 4); goto L_0C0B6084; }  /* 0C0B6020 bt */
L_0C0B6022: BLKS(0x0C0B6022u);
	IF(0x0C0B6022u); MACL = r10 * r2;  /* 0C0B6022 mul.l Rm,Rn */
	r4 = r10;  /* 0C0B6024 mov Rm,Rn */
	r6 = 0x1u;  /* 0C0B6026 mov #imm,Rn */
	IF(0x0C0B6028u); r0 = MACL;  /* 0C0B6028 sts macl,Rn */
	r0 += r3;  /* 0C0B602A add Rm,Rn */
	r2 += 0xFFFFFFE8u;  /* 0C0B602C add #imm,Rn */
	r3 = 0x10u;  /* 0C0B602E mov #imm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C0B6032u, 9);  /* 0C0B6030 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6032u); W8(r0 + r2, r3); UPD(0x0C0B6034u, 1);  /* 0C0B6032 mov.b Rm,@(r0,Rn) */
	r11 += 0x1u;  /* 0C0B6034 add #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B6038u, 2);  /* 0C0B6036 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFECu;  /* 0C0B6038 add #imm,Rn */
	IF(0x0C0B603Au); W16(r0 + r2, r6); UPD(0x0C0B603Cu, 2);  /* 0C0B603A mov.w Rm,@(r0,Rn) */
	IF(0x0C0B603Cu); { u32 t_ = r10; PR = 0x0C0B6040u; W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6040u); }  /* 0C0B603C jsr @Rn */
L_0C0B6040: BLKS(0x0C0B6040u);
	r4 = 0x6Cu;  /* 0C0B6040 mov #imm,Rn */
	UPD(0x0C0B6042u, 1);
L_0C0B6042: BLKS(0x0C0B6042u);
	r1 = 0xC0C2110u; UPD(0x0C0B6044u, 1);  /* 0C0B6042 mov.l @(disp,pc),Rn */
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5DD4u, 3); goto L_0C0B5DD4; }  /* 0C0B6044 bra */
L_0C0B6050: BLKS(0x0C0B6050u);
	r12 = 0xB4u; UPD(0x0C0B6052u, 1);  /* 0C0B6050 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C0B6052 mov #imm,Rn */
	IF(0x0C0B6054u); MACL = r10 * r12;  /* 0C0B6054 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B6058u, 4);  /* 0C0B6056 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B605Au, 1);  /* 0C0B6058 mov.w @(disp,pc),Rn */
	IF(0x0C0B605Au); r8 = MACL;  /* 0C0B605A sts macl,Rn */
	r8 += r9;  /* 0C0B605C add Rm,Rn */
	IF(0x0C0B605Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B6060u, 3);  /* 0C0B605E mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0B6060 add #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C0B6062 extu.b Rm,Rn */
	T = r2 > r7;  /* 0C0B6064 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B6068u); W8(r0 + r8, r5); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B6084u, 6); goto L_0C0B6084; } UPD(0x0C0B606Au, 1); goto L_0C0B606A; }  /* 0C0B6066 bf/s */
L_0C0B606A: BLKS(0x0C0B606Au);
	r6 = 0x0u;  /* 0C0B606A mov #imm,Rn */
	IF(0x0C0B606Cu); W8(r0 + r8, r6); UPD(0x0C0B606Eu, 2);  /* 0C0B606C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFEFu;  /* 0C0B606E add #imm,Rn */
	r4 = R32(r8 + 0xCu); UPD(0x0C0B6072u, 2);  /* 0C0B6070 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6072u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B6074u, 1);  /* 0C0B6072 mov.w @(r0,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B6076u, 1);  /* 0C0B6074 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0B6076 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0B607Au, 2);  /* 0C0B6078 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B607Au); { u32 t_ = r13; PR = 0x0C0B607Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B607Eu); }  /* 0C0B607A jsr @Rn */
L_0C0B607E: BLKS(0x0C0B607Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C0B6080u, 1);  /* 0C0B607E mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B6080 tst Rm,Rn */
	if (T) { UPD(0x0C0B6088u, 4); goto L_0C0B6088; }  /* 0C0B6082 bt */
L_0C0B6084: BLKS(0x0C0B6084u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6084 bra */
L_0C0B6088: BLKS(0x0C0B6088u);
	IF(0x0C0B6088u); MACL = r11 * r12;  /* 0C0B6088 mul.l Rm,Rn */
	IF(0x0C0B608Au); r12 = MACL;  /* 0C0B608A sts macl,Rn */
	r12 += r9;  /* 0C0B608C add Rm,Rn */
	r9 = 0xA2u; UPD(0x0C0B6090u, 5);  /* 0C0B608E mov.w @(disp,pc),Rn */
	r12 += r9;  /* 0C0B6090 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B6094u, 2);  /* 0C0B6092 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0B6094 and #imm,r0 */
	W8(r12, r0); UPD(0x0C0B6098u, 2);  /* 0C0B6096 mov.b Rm,@Rn */
L_0C0B6098: BLKS(0x0C0B6098u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6098 bra */
L_0C0B60A0: BLKS(0x0C0B60A0u);
	r3 = 0xB4u; UPD(0x0C0B60A2u, 1);  /* 0C0B60A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B60A2u); MACL = r10 * r3;  /* 0C0B60A2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B60A6u, 3);  /* 0C0B60A4 mov.l @(disp,pc),Rn */
	r0 = 0x9Cu; UPD(0x0C0B60A8u, 1);  /* 0C0B60A6 mov.w @(disp,pc),Rn */
	IF(0x0C0B60A8u); r3 = MACL;  /* 0C0B60A8 sts macl,Rn */
	r3 += r7;  /* 0C0B60AA add Rm,Rn */
	IF(0x0C0B60ACu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B60AEu, 3);  /* 0C0B60AC mov.b @(r0,Rm),Rn */
	r11 += 0xFFFFFFFFu;  /* 0C0B60AE add #imm,Rn */
	r8 = r11 & 0xFF;  /* 0C0B60B0 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0B60B2 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B60B6u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B60BCu, 6); goto L_0C0B60BC; } UPD(0x0C0B60B8u, 1); goto L_0C0B60B8; }  /* 0C0B60B4 bf/s */
L_0C0B60B8: BLKS(0x0C0B60B8u);
	{ IF(0x0C0B60BAu); ; /* slot nop */ UPD(0x0C0B5EE0u, 3); goto L_0C0B5EE0; }  /* 0C0B60B8 bra */
L_0C0B60BC: BLKS(0x0C0B60BCu);
	r6 = 0xB4u; UPD(0x0C0B60BEu, 1);  /* 0C0B60BC mov.w @(disp,pc),Rn */
	IF(0x0C0B60BEu); MACL = r10 * r6;  /* 0C0B60BE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B60C2u, 3);  /* 0C0B60C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B60C2u); r5 = MACL;  /* 0C0B60C2 sts macl,Rn */
	r5 += r0;  /* 0C0B60C4 add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B60C8u, 3);  /* 0C0B60C6 mov.l @(disp,Rm),Rn */
	r4 = 0xC1E94B0u; UPD(0x0C0B60CAu, 1);  /* 0C0B60C8 mov.l @(disp,pc),Rn */
	IF(0x0C0B60CAu); r0 <<= 2;  /* 0C0B60CA shll2 Rn */
	IF(0x0C0B60CCu); r2 = R32(r0 + r4); UPD(0x0C0B60CEu, 2);  /* 0C0B60CC mov.l @(r0,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B60D0u, 1);  /* 0C0B60CE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B60D0 mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B60D4u, 2);  /* 0C0B60D2 mov.l @(disp,pc),Rn */
	IF(0x0C0B60D4u); { u32 t_ = r12; PR = 0x0C0B60D8u; W32(r5 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B60D8u); }  /* 0C0B60D4 jsr @Rn */
L_0C0B60D8: BLKS(0x0C0B60D8u);
	r4 = r10;  /* 0C0B60D8 mov Rm,Rn */
	r5 = 0x7u;  /* 0C0B60DA mov #imm,Rn */
	IF(0x0C0B60DCu); { u32 t_ = r13; PR = 0x0C0B60E0u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B60E0u); }  /* 0C0B60DC jsr @Rn */
L_0C0B60E0: BLKS(0x0C0B60E0u);
	T = (r0 & r0) == 0;  /* 0C0B60E0 tst Rm,Rn */
	if (T) { UPD(0x0C0B6098u, 4); goto L_0C0B6098; }  /* 0C0B60E2 bt */
L_0C0B60E4: BLKS(0x0C0B60E4u);
	r9 = 0x0u;  /* 0C0B60E4 mov #imm,Rn */
	W32(r14, r9); UPD(0x0C0B60E8u, 2);  /* 0C0B60E6 mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C0B60E8 mov #imm,Rn */
	UPD(0x0C0B60EAu, 1);
L_0C0B60EA: BLKS(0x0C0B60EAu);
	r11 = 0xB4u; UPD(0x0C0B60ECu, 1);  /* 0C0B60EA mov.w @(disp,pc),Rn */
	IF(0x0C0B60ECu); MACL = r10 * r11;  /* 0C0B60EC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B60F0u, 3);  /* 0C0B60EE mov.l @(disp,pc),Rn */
	IF(0x0C0B60F0u); r11 = MACL;  /* 0C0B60F0 sts macl,Rn */
	r11 += r3;  /* 0C0B60F2 add Rm,Rn */
	r7 = R32(r11 + 0xCu); UPD(0x0C0B60F6u, 3);  /* 0C0B60F4 mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C0B60F6 add Rm,Rn */
	IF(0x0C0B60F8u); r7 <<= 2;  /* 0C0B60F8 shll2 Rn */
	r7 += 0xFFFFFFA8u;  /* 0C0B60FA add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0B60FC exts.w Rm,Rn */
	r13 += 0xFFFFFFD0u;  /* 0C0B60FE add #imm,Rn */
	r8 = 0x1A0u; UPD(0x0C0B6102u, 6);  /* 0C0B6100 mov.w @(disp,pc),Rn */
	r1 = r13 & 0xFFFF;  /* 0C0B6102 extu.w Rm,Rn */
	T = r1 > r8;  /* 0C0B6104 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r13 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B6120u, 5); goto L_0C0B6120; } UPD(0x0C0B610Au, 1); goto L_0C0B610A; }  /* 0C0B6106 bf/s */
L_0C0B610A: BLKS(0x0C0B610Au);
	r5 = R32(r14); UPD(0x0C0B610Cu, 1);  /* 0C0B610A mov.l @Rm,Rn */
	r7 = 0x7u;  /* 0C0B610C mov #imm,Rn */
	r5 += 0x1u;  /* 0C0B610E add #imm,Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0B6110 exts.w Rm,Rn */
	W32(r14, r9); UPD(0x0C0B6114u, 4);  /* 0C0B6112 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0B6116u, 1);  /* 0C0B6114 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r7;  /* 0C0B6116 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B60EAu, 4); goto L_0C0B60EA; } goto L_0C0B611C; }  /* 0C0B6118 bf/s */
L_0C0B611C: BLKS(0x0C0B611Cu);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 4); goto L_0C0B5CC6; }  /* 0C0B611C bra */
L_0C0B6120: BLKS(0x0C0B6120u);
	r8 = 0xC069B20u; UPD(0x0C0B6122u, 1);  /* 0C0B6120 mov.l @(disp,pc),Rn */
	r5 = 0x500000u; UPD(0x0C0B6124u, 1);  /* 0C0B6122 mov.l @(disp,pc),Rn */
	IF(0x0C0B6124u); { u32 t_ = r8; PR = 0x0C0B6128u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B6128u); }  /* 0C0B6124 jsr @Rn */
L_0C0B6128: BLKS(0x0C0B6128u);
	r2 = 0x7u;  /* 0C0B6128 mov #imm,Rn */
	IF(0x0C0B612Au); MACL = r0 * r2;  /* 0C0B612A mul.l Rm,Rn */
	r6 = 0x66666667u; UPD(0x0C0B612Eu, 4);  /* 0C0B612C mov.l @(disp,pc),Rn */
	IF(0x0C0B612Eu); r0 = MACL;  /* 0C0B612E sts macl,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B6130 dmuls.l Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C0B6134u, 4);  /* 0C0B6132 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6134u); r4 = MACH;  /* 0C0B6134 sts mach,Rn */
	IF(0x0C0B6136u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0B6136 shar Rn */
	IF(0x0C0B6138u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0B6138 shar Rn */
	IF(0x0C0B613Au); T = r0 >> 31; r0 <<= 1;  /* 0C0B613A shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B613C subc Rm,Rn */
	r4 -= r0;  /* 0C0B613E sub Rm,Rn */
	r5 += r4;  /* 0C0B6140 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0B6144u, 8);  /* 0C0B6142 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B6146u, 1);  /* 0C0B6144 mov.l Rm,@(disp,Rn) */
	r5 = 0x500000u; UPD(0x0C0B6148u, 1);  /* 0C0B6146 mov.l @(disp,pc),Rn */
	IF(0x0C0B6148u); { u32 t_ = r9; PR = 0x0C0B614Cu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B614Cu); }  /* 0C0B6148 jsr @Rn */
L_0C0B614C: BLKS(0x0C0B614Cu);
	r9 = 0xC234C04u; UPD(0x0C0B614Eu, 1);  /* 0C0B614C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B6150u, 1);  /* 0C0B614E mov.b @Rm,Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C0B6152u, 1);  /* 0C0B6150 mov.l @(disp,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0B6152 extu.b Rm,Rn */
	r3 = 0xC3C4170u; UPD(0x0C0B6156u, 2);  /* 0C0B6154 mov.l @(disp,pc),Rn */
	r1 = r7;  /* 0C0B6156 mov Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B615Au, 2);  /* 0C0B6158 mov.b @Rm,Rn */
	IF(0x0C0B615Au); r4 <<= 16;  /* 0C0B615A shll16 Rn */
	r6 = 0x40000u; UPD(0x0C0B615Eu, 2);  /* 0C0B615C mov.l @(disp,pc),Rn */
	r1 += r0;  /* 0C0B615E add Rm,Rn */
	IF(0x0C0B6160u); r4 <<= 2;  /* 0C0B6160 shll2 Rn */
	r0 = r8 & 0xFF;  /* 0C0B6162 extu.b Rm,Rn */
	r4 += r6;  /* 0C0B6164 add Rm,Rn */
	r11 = 0xC297A3Cu; UPD(0x0C0B6168u, 5);  /* 0C0B6166 mov.l @(disp,pc),Rn */
	IF(0x0C0B6168u); MACL = r0 * r4;  /* 0C0B6168 mul.l Rm,Rn */
	r7 = R32(r11); UPD(0x0C0B616Cu, 3);  /* 0C0B616A mov.l @Rm,Rn */
	IF(0x0C0B616Cu); r5 = MACL;  /* 0C0B616C sts macl,Rn */
	T = r7 >= r5;  /* 0C0B616E cmp/hs Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B6172u, 3);  /* 0C0B6170 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r7 -= r5; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C0B6178u, 3); goto L_0C0B6178; } goto L_0C0B6176; }  /* 0C0B6172 bt/s */
L_0C0B6176: BLKS(0x0C0B6176u);
	r7 = 0x0u;  /* 0C0B6176 mov #imm,Rn */
	UPD(0x0C0B6178u, 2);
L_0C0B6178: BLKS(0x0C0B6178u);
	IF(0x0C0B6178u); r7 >>= 16;  /* 0C0B6178 shlr16 Rn */
	r0 = 0xFu;  /* 0C0B617A mov #imm,Rn */
	r0 &= r7;  /* 0C0B617C and Rm,Rn */
	r11 = 0xC1E9548u; UPD(0x0C0B6180u, 4);  /* 0C0B617E mov.l @(disp,pc),Rn */
	IF(0x0C0B6180u); r0 <<= 2;  /* 0C0B6180 shll2 Rn */
	IF(0x0C0B6182u); r3 = R32(r0 + r11); UPD(0x0C0B6184u, 2);  /* 0C0B6182 mov.l @(r0,Rm),Rn */
	r7 = r13;  /* 0C0B6184 mov Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B6186 add #imm,Rn */
	r13 = 0xC0BB1A0u; UPD(0x0C0B618Au, 3);  /* 0C0B6188 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B618A mov #imm,Rn */
	W32(r15, r3); UPD(0x0C0B618Eu, 2);  /* 0C0B618C mov.l Rm,@Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0B6190u, 1);  /* 0C0B618E mov.l @(disp,Rm),Rn */
	IF(0x0C0B6190u); { u32 t_ = r13; PR = 0x0C0B6194u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0B6194u); }  /* 0C0B6190 jsr @Rn */
L_0C0B6194: BLKS(0x0C0B6194u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0B610Au, 3); goto L_0C0B610A; }  /* 0C0B6194 bra */
L_0C0B61E0: BLKS(0x0C0B61E0u);
	r0 = 0xC0A8CA0u; UPD(0x0C0B61E2u, 1);  /* 0C0B61E0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B61E2 mov Rm,Rn */
	UPD(0x0C0B61E4u, 1);
L_0C0B61E4: BLKS(0x0C0B61E4u);
	IF(0x0C0B61E4u); { u32 t_ = r0; PR = 0x0C0B61E8u; IF(0x0C0B61E6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B61E8u); }  /* 0C0B61E4 jsr @Rn */
L_0C0B61E8: BLKS(0x0C0B61E8u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B61E8 exts.w Rm,Rn */
	IF(0x0C0B61EAu); T = (s32)r11 >= 0;  /* 0C0B61EA cmp/pz Rn */
	if (T) { UPD(0x0C0B61F2u, 5); goto L_0C0B61F2; }  /* 0C0B61EC bt */
L_0C0B61EE: BLKS(0x0C0B61EEu);
	{ IF(0x0C0B61F0u); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B61EE bra */
L_0C0B61F2: BLKS(0x0C0B61F2u);
	r0 = 0xB4u; UPD(0x0C0B61F4u, 1);  /* 0C0B61F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B61F4u); MACL = r10 * r0;  /* 0C0B61F4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B61F8u, 3);  /* 0C0B61F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B61F8u); r10 = MACL;  /* 0C0B61F8 sts macl,Rn */
	r10 += r7;  /* 0C0B61FA add Rm,Rn */
	r12 = R32(r10); UPD(0x0C0B61FEu, 3);  /* 0C0B61FC mov.l @Rm,Rn */
	IF(0x0C0B61FEu); MACL = r11 * r0;  /* 0C0B61FE mul.l Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C0B6202u, 3);  /* 0C0B6200 mov.l @(disp,pc),Rn */
	r12 &= r4;  /* 0C0B6202 and Rm,Rn */
	W32(r10, r12); UPD(0x0C0B6206u, 2);  /* 0C0B6204 mov.l Rm,@Rn */
	IF(0x0C0B6206u); r8 = MACL;  /* 0C0B6206 sts macl,Rn */
	r8 += r7;  /* 0C0B6208 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C0B620Cu, 3);  /* 0C0B620A mov.l @Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C0B620Eu, 1);  /* 0C0B620C mov.l @(disp,pc),Rn */
	r13 = R32(r8 + 0x24u); UPD(0x0C0B6210u, 1);  /* 0C0B620E mov.l @(disp,Rm),Rn */
	r5 &= r3;  /* 0C0B6210 and Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B6214u, 2);  /* 0C0B6212 mov.l @(disp,Rm),Rn */
	r12 |= r5;  /* 0C0B6214 or Rm,Rn */
	r9 = R32(r10 + 0x2Cu); UPD(0x0C0B6218u, 2);  /* 0C0B6216 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0B621Au, 1);  /* 0C0B6218 mov.l @(disp,Rm),Rn */
	r13 += r9;  /* 0C0B621A add Rm,Rn */
	r6 += r1;  /* 0C0B621C add Rm,Rn */
	W32(r10 + 0x24u, r13); UPD(0x0C0B6220u, 3);  /* 0C0B621E mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r6); UPD(0x0C0B6222u, 1);  /* 0C0B6220 mov.l Rm,@(disp,Rn) */
	W32(r10, r12); UPD(0x0C0B6224u, 1);  /* 0C0B6222 mov.l Rm,@Rn */
L_0C0B6224: BLKS(0x0C0B6224u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6224 bra */
L_0C0B6230: BLKS(0x0C0B6230u);
	r4 = 0xB4u; UPD(0x0C0B6232u, 1);  /* 0C0B6230 mov.w @(disp,pc),Rn */
	IF(0x0C0B6232u); MACL = r10 * r4;  /* 0C0B6232 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B6236u, 3);  /* 0C0B6234 mov.l @(disp,pc),Rn */
	IF(0x0C0B6236u); r11 = MACL;  /* 0C0B6236 sts macl,Rn */
	r11 += r0;  /* 0C0B6238 add Rm,Rn */
	r11 += 0x3Cu;  /* 0C0B623A add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C0B623Eu, 4);  /* 0C0B623C mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0B623E tst Rm,Rn */
	{ u32 c_ = T; r11 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B6260u, 4); goto L_0C0B6260; } goto L_0C0B6244; }  /* 0C0B6240 bt/s */
L_0C0B6244: BLKS(0x0C0B6244u);
	r2 = 0xC0B5560u; UPD(0x0C0B6246u, 2);  /* 0C0B6244 mov.l @(disp,pc),Rn */
	IF(0x0C0B6246u); { u32 t_ = r2; PR = 0x0C0B624Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0B5560, 0x0C0B5560u, 0x0C0B624Au); }  /* 0C0B6246 jsr @Rn */
L_0C0B624A: BLKS(0x0C0B624Au);
	r7 = 0xC175064u; UPD(0x0C0B624Cu, 1);  /* 0C0B624A mov.l @(disp,pc),Rn */
	r10 = R32(r7); UPD(0x0C0B624Eu, 1);  /* 0C0B624C mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0B624E tst Rm,Rn */
	if (!T) { UPD(0x0C0B6224u, 4); goto L_0C0B6224; }  /* 0C0B6250 bf */
L_0C0B6252: BLKS(0x0C0B6252u);
	r8 = 0xC3CC310u; UPD(0x0C0B6254u, 1);  /* 0C0B6252 mov.l @(disp,pc),Rn */
	r1 = 0xC3CA700u; UPD(0x0C0B6256u, 1);  /* 0C0B6254 mov.l @(disp,pc),Rn */
	{ r2 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B5CC2u, 3); goto L_0C0B5CC2; }  /* 0C0B6256 bra */
L_0C0B6260: BLKS(0x0C0B6260u);
	r10 = 0xC0C2360u; UPD(0x0C0B6262u, 1);  /* 0C0B6260 mov.l @(disp,pc),Rn */
	r1 = 0x10u;  /* 0C0B6262 mov #imm,Rn */
	r4 = 0xC2B07FCu; UPD(0x0C0B6266u, 2);  /* 0C0B6264 mov.l @(disp,pc),Rn */
	r0 = 0xC3CC310u; UPD(0x0C0B6268u, 1);  /* 0C0B6266 mov.l @(disp,pc),Rn */
	r13 = 0xC069B20u; UPD(0x0C0B626Au, 1);  /* 0C0B6268 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C0B626Cu, 1);  /* 0C0B626A mov.l Rm,@Rn */
	r9 = 0x80000u; UPD(0x0C0B626Eu, 1);  /* 0C0B626C mov.l @(disp,pc),Rn */
	IF(0x0C0B626Eu); { u32 t_ = r10; PR = 0x0C0B6272u; W32(r0, r12); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B6272u); }  /* 0C0B626E jsr @Rn */
L_0C0B6272: BLKS(0x0C0B6272u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B6272 exts.w Rm,Rn */
	r4 = r8;  /* 0C0B6274 mov Rm,Rn */
	IF(0x0C0B6276u); { u32 t_ = r13; PR = 0x0C0B627Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B627Au); }  /* 0C0B6276 jsr @Rn */
L_0C0B627A: BLKS(0x0C0B627Au);
	r6 = R32(r11 + 0x24u); UPD(0x0C0B627Cu, 1);  /* 0C0B627A mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C0B627C mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0B6280u, 2);  /* 0C0B627E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B6280 add Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0B6284u, 2);  /* 0C0B6282 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B6284u); { u32 t_ = r13; PR = 0x0C0B6288u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6288u); }  /* 0C0B6284 jsr @Rn */
L_0C0B6288: BLKS(0x0C0B6288u);
	r3 = R32(r11 + 0x28u); UPD(0x0C0B628Au, 1);  /* 0C0B6288 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B628A add #imm,Rn */
	r3 += r0;  /* 0C0B628C add Rm,Rn */
	IF(0x0C0B628Eu); { u32 t_ = r10; PR = 0x0C0B6292u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B6292u); }  /* 0C0B628E jsr @Rn */
L_0C0B6292: BLKS(0x0C0B6292u);
	r10 = 0xB0u; UPD(0x0C0B6294u, 1);  /* 0C0B6292 mov.w @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0B6294 and #imm,r0 */
	r10 += r11;  /* 0C0B6296 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B629Au, 3);  /* 0C0B6298 mov.b @Rm,Rn */
	IF(0x0C0B629Au); r0 <<= 2;  /* 0C0B629A shll2 Rn */
	r9 = r5 & 0xFF;  /* 0C0B629C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C0B62A0u, 3);  /* 0C0B629E mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C0B62A2u, 1);  /* 0C0B62A0 mov.w @(disp,pc),Rn */
	r13 = 0xC1E94B8u; UPD(0x0C0B62A4u, 1);  /* 0C0B62A2 mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C0B62A4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B62A8u, 2);  /* 0C0B62A6 mov.b @Rm,Rn */
	r13 += r0;  /* 0C0B62A8 add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0B62ACu, 2);  /* 0C0B62AA mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C0B62AC extu.b Rm,Rn */
	r0 = 0xFFFA0000u; UPD(0x0C0B62B0u, 2);  /* 0C0B62AE mov.l @(disp,pc),Rn */
	r4 = 0x4000u; UPD(0x0C0B62B2u, 1);  /* 0C0B62B0 mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B62B4u, 1);  /* 0C0B62B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B62B4u); { u32 t_ = r8; PR = 0x0C0B62B8u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B62B8u); }  /* 0C0B62B4 jsr @Rn */
L_0C0B62B8: BLKS(0x0C0B62B8u);
	r4 = 0xFFFFE000u; UPD(0x0C0B62BAu, 1);  /* 0C0B62B8 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C0B62BA mov #imm,Rn */
	r0 += r4;  /* 0C0B62BC add Rm,Rn */
	IF(0x0C0B62BEu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0B62BE shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0B62C2u, 4);  /* 0C0B62C0 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13); UPD(0x0C0B62C4u, 1);  /* 0C0B62C2 mov.l @Rm,Rn */
	r13 = 0xC0BE860u; UPD(0x0C0B62C6u, 1);  /* 0C0B62C4 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C0B62C8u, 1);  /* 0C0B62C6 mov.l @(disp,Rm),Rn */
	r4 = R32(r11); UPD(0x0C0B62CAu, 1);  /* 0C0B62C8 mov.l @Rm,Rn */
	IF(0x0C0B62CAu); { u32 t_ = r13; PR = 0x0C0B62CEu; r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0B62CEu); }  /* 0C0B62CA jsr @Rn */
L_0C0B62CE: BLKS(0x0C0B62CEu);
	r0 = 0x99u; UPD(0x0C0B62D0u, 1);  /* 0C0B62CE mov.w @(disp,pc),Rn */
	r15 += 0x10u;  /* 0C0B62D0 add #imm,Rn */
	IF(0x0C0B62D2u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B62D4u, 2);  /* 0C0B62D2 mov.b @(r0,Rm),Rn */
	r5 = 0xEFu; UPD(0x0C0B62D6u, 1);  /* 0C0B62D4 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0B62D6 add #imm,Rn */
	r3 = r6 & 0xFF;  /* 0C0B62D8 extu.b Rm,Rn */
	T = r3 > r5;  /* 0C0B62DA cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B62DEu); W8(r0 + r11, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B6224u, 6); goto L_0C0B6224; } UPD(0x0C0B62E0u, 1); goto L_0C0B62E0; }  /* 0C0B62DC bf/s */
L_0C0B62E0: BLKS(0x0C0B62E0u);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B62E2u, 1);  /* 0C0B62E0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B62E2 add #imm,Rn */
	r5 = r3 & 0xFF;  /* 0C0B62E4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B62E8u, 3);  /* 0C0B62E6 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B62EAu, 1);  /* 0C0B62E8 mov.b @Rm,Rn */
	r5 = 0x7u;  /* 0C0B62EA mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0B62EC extu.b Rm,Rn */
	r10 = 0xC0BFE70u; UPD(0x0C0B62F0u, 3);  /* 0C0B62EE mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B62F2u, 1);  /* 0C0B62F0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r11); UPD(0x0C0B62F4u, 1);  /* 0C0B62F2 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C0B62F6u, 1);  /* 0C0B62F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B62F6u); { u32 t_ = r10; PR = 0x0C0B62FAu; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C0B62FAu); }  /* 0C0B62F6 jsr @Rn */
L_0C0B62FA: BLKS(0x0C0B62FAu);
	W32(r11, r12); UPD(0x0C0B62FCu, 1);  /* 0C0B62FA mov.l Rm,@Rn */
	r11 = 0xC3C4165u; UPD(0x0C0B62FEu, 1);  /* 0C0B62FC mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B6300u, 1);  /* 0C0B62FE mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C0B6300 add #imm,Rn */
	W8(r11, r12); UPD(0x0C0B6304u, 2);  /* 0C0B6302 mov.b Rm,@Rn */
L_0C0B6304: BLKS(0x0C0B6304u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B5CC4u, 3); goto L_0C0B5CC4; }  /* 0C0B6304 bra */
L_0C0B6310: BLKS(0x0C0B6310u);
	r0 = 0xC0A8D30u; UPD(0x0C0B6312u, 1);  /* 0C0B6310 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B6312 mov Rm,Rn */
	UPD(0x0C0B6314u, 1);
L_0C0B6314: BLKS(0x0C0B6314u);
	IF(0x0C0B6314u); { u32 t_ = r0; PR = 0x0C0B6318u; IF(0x0C0B6316u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B6318u); }  /* 0C0B6314 jsr @Rn */
L_0C0B6318: BLKS(0x0C0B6318u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6318 exts.w Rm,Rn */
	IF(0x0C0B631Au); T = (s32)r11 >= 0;  /* 0C0B631A cmp/pz Rn */
	if (!T) { UPD(0x0C0B63FCu, 5); goto L_0C0B63FC; }  /* 0C0B631C bf */
L_0C0B631E: BLKS(0x0C0B631Eu);
	r13 = 0xB4u; UPD(0x0C0B6320u, 1);  /* 0C0B631E mov.w @(disp,pc),Rn */
	IF(0x0C0B6320u); MACL = r10 * r13;  /* 0C0B6320 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B6324u, 3);  /* 0C0B6322 mov.l @(disp,pc),Rn */
	IF(0x0C0B6324u); r8 = MACL;  /* 0C0B6324 sts macl,Rn */
	IF(0x0C0B6326u); MACL = r11 * r13;  /* 0C0B6326 mul.l Rm,Rn */
	r8 += r12;  /* 0C0B6328 add Rm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C0B632Cu, 5);  /* 0C0B632A mov.l @(disp,Rm),Rn */
	IF(0x0C0B632Cu); r6 = MACL;  /* 0C0B632C sts macl,Rn */
	r6 += r12;  /* 0C0B632E add Rm,Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C0B6332u, 3);  /* 0C0B6330 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x28u); UPD(0x0C0B6334u, 1);  /* 0C0B6332 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x2Cu); UPD(0x0C0B6336u, 1);  /* 0C0B6334 mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C0B6336 add Rm,Rn */
	r9 += r11;  /* 0C0B6338 add Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0B633Cu, 3);  /* 0C0B633A mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5CC4u, 3); goto L_0C0B5CC4; }  /* 0C0B633C bra */
L_0C0B63A0: BLKS(0x0C0B63A0u);
	r12 = 0xC0A8B50u; UPD(0x0C0B63A2u, 1);  /* 0C0B63A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B63A2u); { u32 t_ = r12; PR = 0x0C0B63A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B63A6u); }  /* 0C0B63A2 jsr @Rn */
L_0C0B63A6: BLKS(0x0C0B63A6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B63A6 exts.w Rm,Rn */
	IF(0x0C0B63A8u); T = (s32)r11 >= 0;  /* 0C0B63A8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B63FCu, 5); goto L_0C0B63FC; }  /* 0C0B63AA bf */
L_0C0B63AC: BLKS(0x0C0B63ACu);
	r2 = 0xB4u; UPD(0x0C0B63AEu, 1);  /* 0C0B63AC mov.w @(disp,pc),Rn */
	IF(0x0C0B63AEu); MACL = r10 * r2;  /* 0C0B63AE mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B63B2u, 3);  /* 0C0B63B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B63B2u); r8 = MACL;  /* 0C0B63B2 sts macl,Rn */
	IF(0x0C0B63B4u); MACL = r11 * r2;  /* 0C0B63B4 mul.l Rm,Rn */
	r8 += r3;  /* 0C0B63B6 add Rm,Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C0B63BAu, 5);  /* 0C0B63B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B63BAu); r9 = MACL;  /* 0C0B63BA sts macl,Rn */
	r9 += r3;  /* 0C0B63BC add Rm,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C0B63C0u, 3);  /* 0C0B63BE mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B63C2u, 1);  /* 0C0B63C0 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0B63C2 add Rm,Rn */
	r13 = R32(r8 + 0x2Cu); UPD(0x0C0B63C6u, 2);  /* 0C0B63C4 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0B63C8u, 1);  /* 0C0B63C6 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C0B63C8 add Rm,Rn */
	r0 += 0x1u;  /* 0C0B63CA add #imm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0B63CEu, 3);  /* 0C0B63CC mov.l Rm,@(disp,Rn) */
	r0 &= 0xFu;  /* 0C0B63CE and #imm,r0 */
	W32(r8 + 0x28u, r4); UPD(0x0C0B63D2u, 2);  /* 0C0B63D0 mov.l Rm,@(disp,Rn) */
L_0C0B63D2: BLKS(0x0C0B63D2u);
	r12 = 0xC0A8AE0u; UPD(0x0C0B63D4u, 1);  /* 0C0B63D2 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B63D4 mov Rm,Rn */
	IF(0x0C0B63D6u); { u32 t_ = r12; PR = 0x0C0B63DAu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B63DAu); }  /* 0C0B63D6 jsr @Rn */
L_0C0B63DA: BLKS(0x0C0B63DAu);
	r10 = R32(r8); UPD(0x0C0B63DCu, 1);  /* 0C0B63DA mov.l @Rm,Rn */
	r13 = 0xECFFFFFFu; UPD(0x0C0B63DEu, 1);  /* 0C0B63DC mov.l @(disp,pc),Rn */
	r10 &= r13;  /* 0C0B63DE and Rm,Rn */
	W32(r8, r10); UPD(0x0C0B63E2u, 2);  /* 0C0B63E0 mov.l Rm,@Rn */
	r3 = R32(r9); UPD(0x0C0B63E4u, 1);  /* 0C0B63E2 mov.l @Rm,Rn */
	r9 = 0x13000000u; UPD(0x0C0B63E6u, 1);  /* 0C0B63E4 mov.l @(disp,pc),Rn */
	r3 &= r9;  /* 0C0B63E6 and Rm,Rn */
	r10 |= r3;  /* 0C0B63E8 or Rm,Rn */
	W32(r8, r10); UPD(0x0C0B63ECu, 3);  /* 0C0B63EA mov.l Rm,@Rn */
L_0C0B63EC: BLKS(0x0C0B63ECu);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B63EC bra */
L_0C0B63F0: BLKS(0x0C0B63F0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B63F2u, 1);  /* 0C0B63F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B63F2u); { u32 t_ = r8; PR = 0x0C0B63F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B63F6u); }  /* 0C0B63F2 jsr @Rn */
L_0C0B63F6: BLKS(0x0C0B63F6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B63F6 exts.w Rm,Rn */
	IF(0x0C0B63F8u); T = (s32)r11 >= 0;  /* 0C0B63F8 cmp/pz Rn */
	if (T) { UPD(0x0C0B6400u, 5); goto L_0C0B6400; }  /* 0C0B63FA bt */
L_0C0B63FC: BLKS(0x0C0B63FCu);
	{ IF(0x0C0B63FEu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B63FC bra */
L_0C0B6400: BLKS(0x0C0B6400u);
	r6 = 0xB4u; UPD(0x0C0B6402u, 1);  /* 0C0B6400 mov.w @(disp,pc),Rn */
	IF(0x0C0B6402u); MACL = r10 * r6;  /* 0C0B6402 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B6406u, 3);  /* 0C0B6404 mov.l @(disp,pc),Rn */
	IF(0x0C0B6406u); r9 = MACL;  /* 0C0B6406 sts macl,Rn */
	IF(0x0C0B6408u); MACL = r11 * r6;  /* 0C0B6408 mul.l Rm,Rn */
	r9 += r0;  /* 0C0B640A add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C0B640Eu, 5);  /* 0C0B640C mov.l @(disp,Rm),Rn */
	IF(0x0C0B640Eu); r11 = MACL;  /* 0C0B640E sts macl,Rn */
	r11 += r0;  /* 0C0B6410 add Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C0B6414u, 3);  /* 0C0B6412 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C0B6416u, 1);  /* 0C0B6414 mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C0B6416 add Rm,Rn */
	r11 += 0x50u;  /* 0C0B6418 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C0B641Cu, 3);  /* 0C0B641A mov.w @Rm,Rn */
	r4 = r10;  /* 0C0B641C mov Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0B6420u, 2);  /* 0C0B641E mov.l @(disp,Rm),Rn */
	IF(0x0C0B6420u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B6420 shar Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B6424u, 2);  /* 0C0B6422 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C0B6424 add Rm,Rn */
	r0 &= 0xFu;  /* 0C0B6426 and #imm,r0 */
	W32(r9 + 0x24u, r5); UPD(0x0C0B642Au, 3);  /* 0C0B6428 mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFB0u;  /* 0C0B642A add #imm,Rn */
	W32(r9 + 0x28u, r7); UPD(0x0C0B642Eu, 2);  /* 0C0B642C mov.l Rm,@(disp,Rn) */
	IF(0x0C0B642Eu); { u32 t_ = r12; PR = 0x0C0B6432u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6432u); }  /* 0C0B642E jsr @Rn */
L_0C0B6432: BLKS(0x0C0B6432u);
	r0 = 0x8Cu; UPD(0x0C0B6434u, 1);  /* 0C0B6432 mov.w @(disp,pc),Rn */
	IF(0x0C0B6434u); r10 = R32(r0 + r11); UPD(0x0C0B6436u, 1);  /* 0C0B6434 mov.l @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0B6436 tst Rm,Rn */
	if (T) { UPD(0x0C0B63ECu, 4); goto L_0C0B63EC; }  /* 0C0B6438 bt */
L_0C0B643A: BLKS(0x0C0B643Au);
	r12 = R32(r9 + 0x28u); UPD(0x0C0B643Cu, 1);  /* 0C0B643A mov.l @(disp,Rm),Rn */
	r0 += 0x24u;  /* 0C0B643C add #imm,Rn */
	W32(r14 + 0x8u, r12); UPD(0x0C0B6440u, 2);  /* 0C0B643E mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFF0u;  /* 0C0B6440 add #imm,Rn */
	IF(0x0C0B6442u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B6444u, 2);  /* 0C0B6442 mov.b @(r0,Rm),Rn */
	r3 = 0x3u;  /* 0C0B6444 mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C0B6448u, 2);  /* 0C0B6446 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B6448 mov Rm,Rn */
	IF(0x0C0B644Au); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B644Cu, 2);  /* 0C0B644A mov.b @(r0,Rm),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B644Eu, 1);  /* 0C0B644C mov.l @(disp,Rm),Rn */
	r2 = r8 & 0xFF;  /* 0C0B644E extu.b Rm,Rn */
	r13 = 0x100u; UPD(0x0C0B6452u, 2);  /* 0C0B6450 mov.w @(disp,pc),Rn */
	W32(r15 + 0x8u, r13); UPD(0x0C0B6454u, 1);  /* 0C0B6452 mov.l Rm,@(disp,Rn) */
	r13 += 0xFFFFFFC0u;  /* 0C0B6454 add #imm,Rn */
	r7 = 0xFFF00000u; UPD(0x0C0B6458u, 2);  /* 0C0B6456 mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C0B645Au, 1);  /* 0C0B6458 mov.l Rm,@Rn */
	r5 += r7;  /* 0C0B645A add Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B645Eu, 2);  /* 0C0B645C mov.l Rm,@(disp,Rn) */
	r7 = r11 & 0xFF;  /* 0C0B645E extu.b Rm,Rn */
	W32(r15 + 0xCu, r13); UPD(0x0C0B6462u, 2);  /* 0C0B6460 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BCE80u; UPD(0x0C0B6464u, 1);  /* 0C0B6462 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0B6466u, 1);  /* 0C0B6464 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0B6468u, 1);  /* 0C0B6466 mov.l @(disp,Rm),Rn */
L_0C0B6468: BLKS(0x0C0B6468u);
	IF(0x0C0B6468u); { u32 t_ = r0; PR = 0x0C0B646Cu; IF(0x0C0B646Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B646Cu); }  /* 0C0B6468 jsr @Rn */
L_0C0B646C: BLKS(0x0C0B646Cu);
	r15 += 0x10u;  /* 0C0B646C add #imm,Rn */
	UPD(0x0C0B646Eu, 1);
L_0C0B646E: BLKS(0x0C0B646Eu);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B646E bra */
L_0C0B6480: BLKS(0x0C0B6480u);
	r0 = 0xC0A8B50u; UPD(0x0C0B6482u, 1);  /* 0C0B6480 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B6314u, 3); goto L_0C0B6314; }  /* 0C0B6482 bra */
L_0C0B6490: BLKS(0x0C0B6490u);
	r9 = 0xC0A8B50u; UPD(0x0C0B6492u, 1);  /* 0C0B6490 mov.l @(disp,pc),Rn */
	IF(0x0C0B6492u); { u32 t_ = r9; PR = 0x0C0B6496u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B6496u); }  /* 0C0B6492 jsr @Rn */
L_0C0B6496: BLKS(0x0C0B6496u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6496 exts.w Rm,Rn */
	IF(0x0C0B6498u); T = (s32)r11 >= 0;  /* 0C0B6498 cmp/pz Rn */
	if (T) { UPD(0x0C0B64A0u, 5); goto L_0C0B64A0; }  /* 0C0B649A bt */
L_0C0B649C: BLKS(0x0C0B649Cu);
	{ IF(0x0C0B649Eu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B649C bra */
L_0C0B64A0: BLKS(0x0C0B64A0u);
	r13 = 0xB4u; UPD(0x0C0B64A2u, 1);  /* 0C0B64A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B64A2u); MACL = r10 * r13;  /* 0C0B64A2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B64A6u, 3);  /* 0C0B64A4 mov.l @(disp,pc),Rn */
	IF(0x0C0B64A6u); r5 = MACL;  /* 0C0B64A6 sts macl,Rn */
	IF(0x0C0B64A8u); MACL = r11 * r13;  /* 0C0B64A8 mul.l Rm,Rn */
	r5 += r6;  /* 0C0B64AA add Rm,Rn */
	r7 = R32(r5 + 0x2Cu); UPD(0x0C0B64AEu, 5);  /* 0C0B64AC mov.l @(disp,Rm),Rn */
	IF(0x0C0B64AEu); r3 = MACL;  /* 0C0B64AE sts macl,Rn */
	r3 += r6;  /* 0C0B64B0 add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0B64B4u, 3);  /* 0C0B64B2 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x28u); UPD(0x0C0B64B6u, 1);  /* 0C0B64B4 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C0B64B6 add Rm,Rn */
	r1 = R32(r5 + 0x30u); UPD(0x0C0B64BAu, 2);  /* 0C0B64B8 mov.l @(disp,Rm),Rn */
	r8 = R32(r5 + 0xCu); UPD(0x0C0B64BCu, 1);  /* 0C0B64BA mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0B64BC add Rm,Rn */
	W32(r5 + 0x24u, r0); UPD(0x0C0B64C0u, 2);  /* 0C0B64BE mov.l Rm,@(disp,Rn) */
	T = (r8 & r8) == 0;  /* 0C0B64C0 tst Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B6550u, 4); goto L_0C0B6550; } UPD(0x0C0B64C6u, 1); goto L_0C0B64C6; }  /* 0C0B64C2 bt/s */
L_0C0B64C6: BLKS(0x0C0B64C6u);
	r0 = r8;  /* 0C0B64C6 mov Rm,Rn */
	T = r0 == 0x8u;  /* 0C0B64C8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B64F0u, 5); goto L_0C0B64F0; } goto L_0C0B64CE; }  /* 0C0B64CA bt/s */
L_0C0B64CE: BLKS(0x0C0B64CEu);
	r6 = 0xB4u; UPD(0x0C0B64D0u, 2);  /* 0C0B64CE mov.w @(disp,pc),Rn */
	IF(0x0C0B64D0u); MACL = r10 * r6;  /* 0C0B64D0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B64D4u, 3);  /* 0C0B64D2 mov.l @(disp,pc),Rn */
	IF(0x0C0B64D4u); r3 = MACL;  /* 0C0B64D4 sts macl,Rn */
	r3 += r0;  /* 0C0B64D6 add Rm,Rn */
	r0 = 0x99u; UPD(0x0C0B64DAu, 3);  /* 0C0B64D8 mov.w @(disp,pc),Rn */
	IF(0x0C0B64DAu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B64DCu, 1);  /* 0C0B64DA mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B64DC add #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C0B64DE extu.b Rm,Rn */
	T = r9 > r7;  /* 0C0B64E0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B64E4u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B646Eu, 6); goto L_0C0B646E; } UPD(0x0C0B64E6u, 1); goto L_0C0B64E6; }  /* 0C0B64E2 bf/s */
L_0C0B64E6: BLKS(0x0C0B64E6u);
	r13 = 0x0u;  /* 0C0B64E6 mov #imm,Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0B64EAu, 2);  /* 0C0B64E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B64EAu); W8(r0 + r3, r13); UPD(0x0C0B64ECu, 1);  /* 0C0B64EA mov.b Rm,@(r0,Rn) */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B5EEAu, 3); goto L_0C0B5EEA; }  /* 0C0B64EC bra */
L_0C0B64F0: BLKS(0x0C0B64F0u);
	r0 = 0x99u; UPD(0x0C0B64F2u, 1);  /* 0C0B64F0 mov.w @(disp,pc),Rn */
	r8 = 0x2u;  /* 0C0B64F2 mov #imm,Rn */
	IF(0x0C0B64F4u); r11 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B64F6u, 2);  /* 0C0B64F4 mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C0B64F6 add #imm,Rn */
	r3 = r11 & 0xFF;  /* 0C0B64F8 extu.b Rm,Rn */
	T = r3 > r8;  /* 0C0B64FA cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B64FEu); W8(r0 + r5, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B646Eu, 6); goto L_0C0B646E; } UPD(0x0C0B6500u, 1); goto L_0C0B6500; }  /* 0C0B64FC bf/s */
L_0C0B6500: BLKS(0x0C0B6500u);
	r4 = 0x0u;  /* 0C0B6500 mov #imm,Rn */
	r12 = R32(r5 + 0x8u); UPD(0x0C0B6504u, 2);  /* 0C0B6502 mov.l @(disp,Rm),Rn */
	r2 = 0x10u;  /* 0C0B6504 mov #imm,Rn */
	IF(0x0C0B6506u); W8(r0 + r5, r4); UPD(0x0C0B6508u, 2);  /* 0C0B6506 mov.b Rm,@(r0,Rn) */
	r12 += 0x1u;  /* 0C0B6508 add #imm,Rn */
	r7 = 0x86u; UPD(0x0C0B650Cu, 2);  /* 0C0B650A mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C0B650C mov Rm,Rn */
	r9 = 0x100u; UPD(0x0C0B6510u, 2);  /* 0C0B650E mov.w @(disp,pc),Rn */
	W32(r5 + 0x8u, r12); UPD(0x0C0B6512u, 1);  /* 0C0B6510 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B6512u); W16(r0 + r7, r9); UPD(0x0C0B6514u, 1);  /* 0C0B6512 mov.w Rm,@(r0,Rn) */
	{ W32(r5 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5DFCu, 3); goto L_0C0B5DFC; }  /* 0C0B6514 bra */
L_0C0B6550: BLKS(0x0C0B6550u);
	r6 = 0x9Cu; UPD(0x0C0B6552u, 1);  /* 0C0B6550 mov.w @(disp,pc),Rn */
	r9 = r5;  /* 0C0B6552 mov Rm,Rn */
	r9 += r6;  /* 0C0B6554 add Rm,Rn */
	r9 += 0x3u;  /* 0C0B6556 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B655Au, 4);  /* 0C0B6558 mov.b @Rm,Rn */
	r1 = r2 & 0xFF;  /* 0C0B655A extu.b Rm,Rn */
	r0 = r1;  /* 0C0B655C mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B655E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B65A0u, 6); goto L_0C0B65A0; }  /* 0C0B6560 bt */
L_0C0B6562: BLKS(0x0C0B6562u);
	r2 = 0x1u;  /* 0C0B6562 mov #imm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0B6564 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B6590u, 5); goto L_0C0B6590; } goto L_0C0B656A; }  /* 0C0B6566 bt/s */
L_0C0B656A: BLKS(0x0C0B656Au);
	T = (r1 & r1) == 0;  /* 0C0B656A tst Rm,Rn */
	if (!T) { UPD(0x0C0B6586u, 5); goto L_0C0B6586; }  /* 0C0B656C bf */
L_0C0B656E: BLKS(0x0C0B656Eu);
	r3 += r6;  /* 0C0B656E add Rm,Rn */
	r3 += 0x3u;  /* 0C0B6570 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B6574u, 3);  /* 0C0B6572 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C0B6574 mov #imm,Rn */
	T = r8 > r5;  /* 0C0B6576 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B6586u, 5); goto L_0C0B6586; }  /* 0C0B6578 bf */
L_0C0B657A: BLKS(0x0C0B657Au);
	r3 = 0xC0C2110u; UPD(0x0C0B657Cu, 1);  /* 0C0B657A mov.l @(disp,pc),Rn */
	IF(0x0C0B657Cu); { u32 t_ = r3; PR = 0x0C0B6580u; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B6580u); }  /* 0C0B657C jsr @Rn */
L_0C0B6580: BLKS(0x0C0B6580u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B6582u, 1);  /* 0C0B6580 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0B6582 add #imm,Rn */
	W8(r9, r0); UPD(0x0C0B6586u, 2);  /* 0C0B6584 mov.b Rm,@Rn */
L_0C0B6586: BLKS(0x0C0B6586u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6586 bra */
L_0C0B6590: BLKS(0x0C0B6590u);
	if (!T) { UPD(0x0C0B6586u, 3); goto L_0C0B6586; }  /* 0C0B6590 bf */
L_0C0B6592: BLKS(0x0C0B6592u);
	r4 = r10;  /* 0C0B6592 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B6596u, 2);  /* 0C0B6594 mov.l @(disp,pc),Rn */
	IF(0x0C0B6596u); { u32 t_ = r12; PR = 0x0C0B659Au; W32(r5 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B659Au); }  /* 0C0B6596 jsr @Rn */
L_0C0B659A: BLKS(0x0C0B659Au);
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0B5CC4u, 3); goto L_0C0B5CC4; }  /* 0C0B659A bra */
L_0C0B65A0: BLKS(0x0C0B65A0u);
	r10 = 0xFFF60000u; UPD(0x0C0B65A2u, 1);  /* 0C0B65A0 mov.l @(disp,pc),Rn */
	T = r7 == r10;  /* 0C0B65A2 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B65B0u, 4); goto L_0C0B65B0; }  /* 0C0B65A4 bt */
L_0C0B65A6: BLKS(0x0C0B65A6u);
	r2 = 0xFFFF0000u; UPD(0x0C0B65A8u, 1);  /* 0C0B65A6 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0B65A8 add Rm,Rn */
	{ W32(r5 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5CC4u, 4); goto L_0C0B5CC4; }  /* 0C0B65AA bra */
L_0C0B65B0: BLKS(0x0C0B65B0u);
	r11 = r2;  /* 0C0B65B0 mov Rm,Rn */
	r11 += 0x1u;  /* 0C0B65B2 add #imm,Rn */
	{ W8(r9, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C0B65A6u, 5); goto L_0C0B65A6; }  /* 0C0B65B4 bra */
L_0C0B65D0: BLKS(0x0C0B65D0u);
	r13 = 0xC0A8BF0u; UPD(0x0C0B65D2u, 1);  /* 0C0B65D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B65D2u); { u32 t_ = r13; PR = 0x0C0B65D6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C0B65D6u); }  /* 0C0B65D2 jsr @Rn */
L_0C0B65D6: BLKS(0x0C0B65D6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B65D6 exts.w Rm,Rn */
	IF(0x0C0B65D8u); T = (s32)r11 >= 0;  /* 0C0B65D8 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B65E2u, 5); goto L_0C0B65E2; } goto L_0C0B65DE; }  /* 0C0B65DA bt/s */
L_0C0B65DE: BLKS(0x0C0B65DEu);
	{ IF(0x0C0B65E0u); ; /* slot nop */ UPD(0x0C0B5EF0u, 4); goto L_0C0B5EF0; }  /* 0C0B65DE bra */
L_0C0B65E2: BLKS(0x0C0B65E2u);
	r0 = 0xB4u; UPD(0x0C0B65E4u, 1);  /* 0C0B65E2 mov.w @(disp,pc),Rn */
	IF(0x0C0B65E4u); MACL = r10 * r0;  /* 0C0B65E4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B65E8u, 3);  /* 0C0B65E6 mov.l @(disp,pc),Rn */
	IF(0x0C0B65E8u); r0 = MACL;  /* 0C0B65E8 sts macl,Rn */
	r0 += r6;  /* 0C0B65EA add Rm,Rn */
	r9 = 0x9Au; UPD(0x0C0B65EEu, 3);  /* 0C0B65EC mov.w @(disp,pc),Rn */
	r8 = r0;  /* 0C0B65EE mov Rm,Rn */
	r8 += 0x50u;  /* 0C0B65F0 add #imm,Rn */
	r9 += r0;  /* 0C0B65F2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C0B65F6u, 4);  /* 0C0B65F4 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B65F6 tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B6600u, 4); goto L_0C0B6600; } UPD(0x0C0B65FCu, 1); goto L_0C0B65FC; }  /* 0C0B65F8 bf/s */
L_0C0B65FC: BLKS(0x0C0B65FCu);
	{ IF(0x0C0B65FEu); ; /* slot nop */ UPD(0x0C0B6710u, 3); goto L_0C0B6710; }  /* 0C0B65FC bra */
L_0C0B6600: BLKS(0x0C0B6600u);
	r7 = 0x8000u; UPD(0x0C0B6602u, 1);  /* 0C0B6600 mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C0B6602 mov Rm,Rn */
	r2 += r7;  /* 0C0B6604 add Rm,Rn */
	W32(r8, r2); UPD(0x0C0B6608u, 3);  /* 0C0B6606 mov.l Rm,@Rn */
	r2 = 0x0u;  /* 0C0B6608 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C0B660Cu, 2);  /* 0C0B660A mov.l Rm,@Rn */
L_0C0B660C: BLKS(0x0C0B660Cu);
	r6 = 0x86u; UPD(0x0C0B660Eu, 1);  /* 0C0B660C mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0B660E mov Rm,Rn */
	IF(0x0C0B6610u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0B6612u, 2);  /* 0C0B6610 mov.w @(r0,Rm),Rn */
	r13 = 0x100u; UPD(0x0C0B6614u, 1);  /* 0C0B6612 mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0B6616u, 1);  /* 0C0B6614 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C0B6616 add Rm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0B6618 exts.w Rm,Rn */
	r5 = 0x140000u; UPD(0x0C0B661Cu, 3);  /* 0C0B661A mov.l @(disp,pc),Rn */
	IF(0x0C0B661Cu); { u32 t_ = r8; PR = 0x0C0B6620u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B6620u); }  /* 0C0B661C jsr @Rn */
L_0C0B6620: BLKS(0x0C0B6620u);
	r4 = R32(r12 + 0x24u); UPD(0x0C0B6622u, 1);  /* 0C0B6620 mov.l @(disp,Rm),Rn */
	r8 = R32(r14); UPD(0x0C0B6624u, 1);  /* 0C0B6622 mov.l @Rm,Rn */
	r4 += r0;  /* 0C0B6624 add Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C0B6628u, 2);  /* 0C0B6626 mov.l @(disp,pc),Rn */
	IF(0x0C0B6628u); r8 <<= 2;  /* 0C0B6628 shll2 Rn */
	r0 = 0xC1E9588u; UPD(0x0C0B662Cu, 2);  /* 0C0B662A mov.l @(disp,pc),Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C0B662Eu, 1);  /* 0C0B662C mov.l Rm,@(disp,Rn) */
	r8 += r0;  /* 0C0B662E add Rm,Rn */
	r4 = r13;  /* 0C0B6630 mov Rm,Rn */
	IF(0x0C0B6632u); { u32 t_ = r7; PR = 0x0C0B6636u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6636u); }  /* 0C0B6632 jsr @Rn */
L_0C0B6636: BLKS(0x0C0B6636u);
	r2 = R32(r14 + 0x10u); UPD(0x0C0B6638u, 1);  /* 0C0B6636 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0B6638 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0B663Cu, 2);  /* 0C0B663A mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0B663C sub Rm,Rn */
	r5 = 0x140000u; UPD(0x0C0B6640u, 2);  /* 0C0B663E mov.l @(disp,pc),Rn */
	IF(0x0C0B6640u); { u32 t_ = r9; PR = 0x0C0B6644u; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6644u); }  /* 0C0B6640 jsr @Rn */
L_0C0B6644: BLKS(0x0C0B6644u);
	r1 = 0xC069B20u; UPD(0x0C0B6646u, 1);  /* 0C0B6644 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0B6646 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C0B664Au, 2);  /* 0C0B6648 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C0B664Cu, 1);  /* 0C0B664A mov.l @Rm,Rn */
	IF(0x0C0B664Cu); { u32 t_ = r1; PR = 0x0C0B6650u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B6650u); }  /* 0C0B664C jsr @Rn */
L_0C0B6650: BLKS(0x0C0B6650u);
	r9 += r0;  /* 0C0B6650 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0B6654u, 2);  /* 0C0B6652 mov.l @Rm,Rn */
	r4 = 0x1Fu;  /* 0C0B6654 mov #imm,Rn */
	r3 = 0xC1E9590u; UPD(0x0C0B6658u, 2);  /* 0C0B6656 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0B6658 add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0B665Cu, 2);  /* 0C0B665A mov.l @(disp,pc),Rn */
	IF(0x0C0B665Cu); r6 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B665Eu, 1);  /* 0C0B665C mov.w @(r0,Rm),Rn */
	IF(0x0C0B665Eu); { u32 t_ = r8; PR = 0x0C0B6662u; r13 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B6662u); }  /* 0C0B665E jsr @Rn */
L_0C0B6662: BLKS(0x0C0B6662u);
	r0 += r13;  /* 0C0B6662 add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C0B6664 add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0B6666 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B666Au, 4);  /* 0C0B6668 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0B666A add #imm,Rn */
	IF(0x0C0B666Cu); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0B666Eu, 2);  /* 0C0B666C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0B666E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B6672u, 2);  /* 0C0B6670 mov.l Rm,@Rn */
	r0 = r12;  /* 0C0B6672 mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0B6676u, 2);  /* 0C0B6674 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0B6676 mov Rm,Rn */
	IF(0x0C0B6678u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B667Au, 2);  /* 0C0B6678 mov.b @(r0,Rm),Rn */
	r3 = 0xC069B20u; UPD(0x0C0B667Cu, 1);  /* 0C0B667A mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0B667C extu.b Rm,Rn */
	r8 = 0x30000u; UPD(0x0C0B6680u, 2);  /* 0C0B667E mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0B6680 add #imm,Rn */
	r5 = r8;  /* 0C0B6682 mov Rm,Rn */
	IF(0x0C0B6684u); { u32 t_ = r3; PR = 0x0C0B6688u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B6688u); }  /* 0C0B6684 jsr @Rn */
L_0C0B6688: BLKS(0x0C0B6688u);
	r5 = r8;  /* 0C0B6688 mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0B668Cu, 2);  /* 0C0B668A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0B668C mov Rm,Rn */
	IF(0x0C0B668Eu); { u32 t_ = r8; PR = 0x0C0B6692u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6692u); }  /* 0C0B668E jsr @Rn */
L_0C0B6692: BLKS(0x0C0B6692u);
	r6 = 0x808080u; UPD(0x0C0B6694u, 1);  /* 0C0B6692 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0B6694 mov #imm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C0B6698u, 2);  /* 0C0B6696 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C0B6698 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0B669Cu, 2);  /* 0C0B669A mov.l Rm,@(disp,Rn) */
	r9 = 0x1u;  /* 0C0B669C mov #imm,Rn */
	W32(r15 + 0x10u, r6); UPD(0x0C0B66A0u, 2);  /* 0C0B669E mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C0B66A2u, 1);  /* 0C0B66A0 mov.l @Rm,Rn */
	IF(0x0C0B66A2u); { u32 t_ = r13; PR = 0x0C0B66A6u; r6 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0B66A6u); }  /* 0C0B66A2 jsr @Rn */
L_0C0B66A6: BLKS(0x0C0B66A6u);
	r5 = R32(r14); UPD(0x0C0B66A8u, 1);  /* 0C0B66A6 mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0B66A8 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0B66AA exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C0B66AEu, 3);  /* 0C0B66AC mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0B66B0u, 1);  /* 0C0B66AE mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r9;  /* 0C0B66B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B660Cu, 4); goto L_0C0B660C; } UPD(0x0C0B66B6u, 1); goto L_0C0B66B6; }  /* 0C0B66B2 bf/s */
L_0C0B66B6: BLKS(0x0C0B66B6u);
	r4 = 0xB4u; UPD(0x0C0B66B8u, 1);  /* 0C0B66B6 mov.w @(disp,pc),Rn */
	IF(0x0C0B66B8u); MACL = r10 * r4;  /* 0C0B66B8 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B66BCu, 3);  /* 0C0B66BA mov.l @(disp,pc),Rn */
	IF(0x0C0B66BCu); r9 = MACL;  /* 0C0B66BC sts macl,Rn */
	r9 += r7;  /* 0C0B66BE add Rm,Rn */
	IF(0x0C0B66C0u); MACL = r11 * r4;  /* 0C0B66C0 mul.l Rm,Rn */
	r8 = 0x86u; UPD(0x0C0B66C4u, 5);  /* 0C0B66C2 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B66C4 mov Rm,Rn */
	IF(0x0C0B66C6u); r13 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B66C8u, 2);  /* 0C0B66C6 mov.w @(r0,Rm),Rn */
	IF(0x0C0B66C8u); r12 = MACL;  /* 0C0B66C8 sts macl,Rn */
	r12 += r7;  /* 0C0B66CA add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0B66CEu, 3);  /* 0C0B66CC mov.l @(disp,pc),Rn */
	r11 = r9;  /* 0C0B66CE mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C0B66D2u, 2);  /* 0C0B66D0 mov.l @(disp,Rm),Rn */
	r11 += 0x50u;  /* 0C0B66D2 add #imm,Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0B66D6u, 2);  /* 0C0B66D4 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0B66D6 mov Rm,Rn */
	r8 += r2;  /* 0C0B66D8 add Rm,Rn */
	IF(0x0C0B66DAu); { u32 t_ = r0; PR = 0x0C0B66DEu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B66DEu); }  /* 0C0B66DA jsr @Rn */
L_0C0B66DE: BLKS(0x0C0B66DEu);
	r8 += r0;  /* 0C0B66DE add Rm,Rn */
	W32(r9 + 0x24u, r8); UPD(0x0C0B66E2u, 2);  /* 0C0B66E0 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0B66E2 mov Rm,Rn */
	r8 = R32(r12 + 0x28u); UPD(0x0C0B66E6u, 2);  /* 0C0B66E4 mov.l @(disp,Rm),Rn */
	r13 += 0x8u;  /* 0C0B66E6 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0B66EAu, 2);  /* 0C0B66E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B66EAu); r13 >>= 2;  /* 0C0B66EA shlr2 Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C0B66EEu, 2);  /* 0C0B66EC mov.l @(disp,Rm),Rn */
	IF(0x0C0B66EEu); r13 >>= 2;  /* 0C0B66EE shlr2 Rn */
	r5 = R32(r11); UPD(0x0C0B66F2u, 2);  /* 0C0B66F0 mov.l @Rm,Rn */
	r8 += r3;  /* 0C0B66F2 add Rm,Rn */
	IF(0x0C0B66F4u); { u32 t_ = r12; PR = 0x0C0B66F8u; r11 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B66F8u); }  /* 0C0B66F4 jsr @Rn */
L_0C0B66F8: BLKS(0x0C0B66F8u);
	r8 += r0;  /* 0C0B66F8 add Rm,Rn */
	r13 &= r11;  /* 0C0B66FA and Rm,Rn */
	W32(r9 + 0x28u, r8); UPD(0x0C0B66FEu, 3);  /* 0C0B66FC mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5DCEu, 3); goto L_0C0B5DCE; }  /* 0C0B66FE bra */
L_0C0B6710: BLKS(0x0C0B6710u);
	r12 = 0xC069BF0u; UPD(0x0C0B6712u, 1);  /* 0C0B6710 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C0B6714u, 1);  /* 0C0B6712 mov.l @(disp,pc),Rn */
	IF(0x0C0B6714u); { u32 t_ = r12; PR = 0x0C0B6718u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0B6718u); }  /* 0C0B6714 jsr @Rn */
L_0C0B6718: BLKS(0x0C0B6718u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B671Au, 1);  /* 0C0B6718 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B671A mov Rm,Rn */
	IF(0x0C0B671Cu); { u32 t_ = r13; PR = 0x0C0B6720u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C0B6720u); }  /* 0C0B671C jsr @Rn */
L_0C0B6720: BLKS(0x0C0B6720u);
	r4 = r10;  /* 0C0B6720 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0B6722 mov #imm,Rn */
	IF(0x0C0B6724u); { u32 t_ = r12; PR = 0x0C0B6728u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B6728u); }  /* 0C0B6724 jsr @Rn */
L_0C0B6728: BLKS(0x0C0B6728u);
	T = (r0 & r0) == 0;  /* 0C0B6728 tst Rm,Rn */
	if (T) { UPD(0x0C0B66B6u, 4); goto L_0C0B66B6; }  /* 0C0B672A bt */
L_0C0B672C: BLKS(0x0C0B672Cu);
	r3 = 0xFFF80000u; UPD(0x0C0B672Eu, 1);  /* 0C0B672C mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C0B6730u, 1);  /* 0C0B672E mov.l Rm,@Rn */
	r8 = 0x1u;  /* 0C0B6730 mov #imm,Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0B66B6u, 4); goto L_0C0B66B6; }  /* 0C0B6732 bra */
L_0C0B6740: BLKS(0x0C0B6740u);
	r9 = 0xC0A8B50u; UPD(0x0C0B6742u, 1);  /* 0C0B6740 mov.l @(disp,pc),Rn */
	IF(0x0C0B6742u); { u32 t_ = r9; PR = 0x0C0B6746u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B6746u); }  /* 0C0B6742 jsr @Rn */
L_0C0B6746: BLKS(0x0C0B6746u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6746 exts.w Rm,Rn */
	IF(0x0C0B6748u); T = (s32)r11 >= 0;  /* 0C0B6748 cmp/pz Rn */
	if (T) { UPD(0x0C0B6750u, 5); goto L_0C0B6750; }  /* 0C0B674A bt */
L_0C0B674C: BLKS(0x0C0B674Cu);
	{ IF(0x0C0B674Eu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B674C bra */
L_0C0B6750: BLKS(0x0C0B6750u);
	r13 = 0xB4u; UPD(0x0C0B6752u, 1);  /* 0C0B6750 mov.w @(disp,pc),Rn */
	IF(0x0C0B6752u); MACL = r10 * r13;  /* 0C0B6752 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B6756u, 3);  /* 0C0B6754 mov.l @(disp,pc),Rn */
	IF(0x0C0B6756u); r3 = MACL;  /* 0C0B6756 sts macl,Rn */
	IF(0x0C0B6758u); MACL = r11 * r13;  /* 0C0B6758 mul.l Rm,Rn */
	r3 += r5;  /* 0C0B675A add Rm,Rn */
	r1 = R32(r3 + 0x8u); UPD(0x0C0B675Eu, 5);  /* 0C0B675C mov.l @(disp,Rm),Rn */
	IF(0x0C0B675Eu); r7 = MACL;  /* 0C0B675E sts macl,Rn */
	r7 += r5;  /* 0C0B6760 add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0B6764u, 3);  /* 0C0B6762 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0B6764 add #imm,Rn */
	T = r1 == r0;  /* 0C0B6766 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B67D0u, 5); goto L_0C0B67D0; }  /* 0C0B6768 bt */
L_0C0B676A: BLKS(0x0C0B676Au);
	r10 = 0x2000000u; UPD(0x0C0B676Cu, 1);  /* 0C0B676A mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B5CC4u, 3); goto L_0C0B5CC4; }  /* 0C0B676C bra */
L_0C0B67D0: BLKS(0x0C0B67D0u);
	r0 = 0x84u; UPD(0x0C0B67D2u, 1);  /* 0C0B67D0 mov.w @(disp,pc),Rn */
	r8 = r3;  /* 0C0B67D2 mov Rm,Rn */
	r8 += r0;  /* 0C0B67D4 add Rm,Rn */
	r0 += r7;  /* 0C0B67D6 add Rm,Rn */
	r0 += 0x2u;  /* 0C0B67D8 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B67DCu, 5);  /* 0C0B67DA mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C0B67DC add #imm,Rn */
	r9 = 0x1FFu; UPD(0x0C0B67E0u, 2);  /* 0C0B67DE mov.w @(disp,pc),Rn */
	r4 &= r9;  /* 0C0B67E0 and Rm,Rn */
	r2 = r4;  /* 0C0B67E2 mov Rm,Rn */
	r2 += 0xFFFFFF80u;  /* 0C0B67E4 add #imm,Rn */
	r6 = 0x100u; UPD(0x0C0B67E8u, 4);  /* 0C0B67E6 mov.w @(disp,pc),Rn */
	r12 = r2 & 0xFFFF;  /* 0C0B67E8 extu.w Rm,Rn */
	W16(r8, r4); UPD(0x0C0B67ECu, 2);  /* 0C0B67EA mov.w Rm,@Rn */
	T = r12 > r6;  /* 0C0B67EC cmp/hi Rm,Rn */
	{ u32 c_ = T; r13 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B6870u, 4); goto L_0C0B6870; } goto L_0C0B67F2; }  /* 0C0B67EE bt/s */
L_0C0B67F2: BLKS(0x0C0B67F2u);
	r5 = 0xA8u; UPD(0x0C0B67F4u, 2);  /* 0C0B67F2 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C0B67F4 add Rm,Rn */
	r7 += 0x1u;  /* 0C0B67F6 add #imm,Rn */
	r3 += r5;  /* 0C0B67F8 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B67FCu, 4);  /* 0C0B67FA mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B67FC add #imm,Rn */
	UPD(0x0C0B67FEu, 1);
L_0C0B67FE: BLKS(0x0C0B67FEu);
	r9 = 0xB4u; UPD(0x0C0B6800u, 1);  /* 0C0B67FE mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0B6800 mov Rm,Rn */
	IF(0x0C0B6802u); MACL = r10 * r9;  /* 0C0B6802 mul.l Rm,Rn */
	W8(r3, r1); UPD(0x0C0B6806u, 4);  /* 0C0B6804 mov.b Rm,@Rn */
	IF(0x0C0B6806u); r7 = MACL;  /* 0C0B6806 sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0B680Au, 2);  /* 0C0B6808 mov.l @(disp,pc),Rn */
	IF(0x0C0B680Au); MACL = r11 * r9;  /* 0C0B680A mul.l Rm,Rn */
	r7 += r3;  /* 0C0B680C add Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C0B6810u, 4);  /* 0C0B680E mov.l @(disp,pc),Rn */
	r11 = r7;  /* 0C0B6810 mov Rm,Rn */
	IF(0x0C0B6812u); r9 = MACL;  /* 0C0B6812 sts macl,Rn */
	r11 += 0x50u;  /* 0C0B6814 add #imm,Rn */
	r9 += r3;  /* 0C0B6816 add Rm,Rn */
	W32(r14 + 0x14u, r7); UPD(0x0C0B681Au, 5);  /* 0C0B6818 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B681Au); { u32 t_ = r12; PR = 0x0C0B681Eu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B681Eu); }  /* 0C0B681A jsr @Rn */
L_0C0B681E: BLKS(0x0C0B681Eu);
	r6 = 0x66666667u; UPD(0x0C0B6820u, 1);  /* 0C0B681E mov.l @(disp,pc),Rn */
	IF(0x0C0B6820u); r0 <<= 2;  /* 0C0B6820 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B6822 dmuls.l Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B6826u, 4);  /* 0C0B6824 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0B6826 mov Rm,Rn */
	IF(0x0C0B6828u); r1 = MACH;  /* 0C0B6828 sts mach,Rn */
	IF(0x0C0B682Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B682A shar Rn */
	IF(0x0C0B682Cu); T = r0 >> 31; r0 <<= 1;  /* 0C0B682C shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B682E subc Rm,Rn */
	r1 -= r0;  /* 0C0B6830 sub Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0B6834u, 7);  /* 0C0B6832 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0B6834 add Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0B6838u, 2);  /* 0C0B6836 mov.l @(disp,pc),Rn */
	W32(r0 + 0x24u, r5); UPD(0x0C0B683Au, 1);  /* 0C0B6838 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B683Au); { u32 t_ = r8; PR = 0x0C0B683Eu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B683Eu); }  /* 0C0B683A jsr @Rn */
L_0C0B683E: BLKS(0x0C0B683Eu);
	r4 = R32(r9 + 0x28u); UPD(0x0C0B6840u, 1);  /* 0C0B683E mov.l @(disp,Rm),Rn */
	r12 = R32(r14 + 0x14u); UPD(0x0C0B6842u, 1);  /* 0C0B6840 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0B6842 add Rm,Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B6846u, 2);  /* 0C0B6844 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0B6848u, 1);  /* 0C0B6846 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r4); UPD(0x0C0B684Au, 1);  /* 0C0B6848 mov.l Rm,@(disp,Rn) */
	r11 = 0x98u; UPD(0x0C0B684Cu, 1);  /* 0C0B684A mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B684C mov Rm,Rn */
	IF(0x0C0B684Eu); { u32 t_ = r13; PR = 0x0C0B6852u; W32(r12 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6852u); }  /* 0C0B684E jsr @Rn */
L_0C0B6852: BLKS(0x0C0B6852u);
	r3 = R32(r14 + 0x14u); UPD(0x0C0B6854u, 1);  /* 0C0B6852 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C0B6854 add Rm,Rn */
	r9 += 0x2u;  /* 0C0B6856 add #imm,Rn */
	r3 += r11;  /* 0C0B6858 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B685Cu, 4);  /* 0C0B685A mov.b @Rm,Rn */
	r3 += 0x2u;  /* 0C0B685C add #imm,Rn */
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C0B5CC4u, 4); goto L_0C0B5CC4; }  /* 0C0B685E bra */
L_0C0B6870: BLKS(0x0C0B6870u);
	r6 = 0xA8u; UPD(0x0C0B6872u, 1);  /* 0C0B6870 mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C0B6872 add Rm,Rn */
	r7 += 0x1u;  /* 0C0B6874 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B6878u, 3);  /* 0C0B6876 mov.b @Rm,Rn */
	r3 += r6;  /* 0C0B6878 add Rm,Rn */
	r3 += 0x1u;  /* 0C0B687A add #imm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0B67FEu, 5); goto L_0C0B67FE; }  /* 0C0B687C bra */
L_0C0B68A0: BLKS(0x0C0B68A0u);
	r13 = 0xC0A8B50u; UPD(0x0C0B68A2u, 1);  /* 0C0B68A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B68A2u); { u32 t_ = r13; PR = 0x0C0B68A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B68A6u); }  /* 0C0B68A2 jsr @Rn */
L_0C0B68A6: BLKS(0x0C0B68A6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B68A6 exts.w Rm,Rn */
	IF(0x0C0B68A8u); T = (s32)r11 >= 0;  /* 0C0B68A8 cmp/pz Rn */
	if (T) { UPD(0x0C0B68B0u, 5); goto L_0C0B68B0; }  /* 0C0B68AA bt */
L_0C0B68AC: BLKS(0x0C0B68ACu);
	{ IF(0x0C0B68AEu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B68AC bra */
L_0C0B68B0: BLKS(0x0C0B68B0u);
	r2 = 0xB4u; UPD(0x0C0B68B2u, 1);  /* 0C0B68B0 mov.w @(disp,pc),Rn */
	IF(0x0C0B68B2u); MACL = r11 * r2;  /* 0C0B68B2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B68B6u, 3);  /* 0C0B68B4 mov.l @(disp,pc),Rn */
	IF(0x0C0B68B6u); r3 = MACL;  /* 0C0B68B6 sts macl,Rn */
	r3 += r6;  /* 0C0B68B8 add Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C0B68BCu, 3);  /* 0C0B68BA mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C0B68BEu, 1);  /* 0C0B68BC mov.l @(disp,pc),Rn */
	T = r7 == r4;  /* 0C0B68BE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B68C2u); MACL = r10 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B68C8u, 5); goto L_0C0B68C8; } goto L_0C0B68C4; }  /* 0C0B68C0 bf/s */
L_0C0B68C4: BLKS(0x0C0B68C4u);
	{ IF(0x0C0B68C6u); r10 = MACL; /* slot sts macl,Rn */ UPD(0x0C0B69D0u, 5); goto L_0C0B69D0; }  /* 0C0B68C4 bra */
L_0C0B68C8: BLKS(0x0C0B68C8u);
	IF(0x0C0B68C8u); MACL = r10 * r2;  /* 0C0B68C8 mul.l Rm,Rn */
	r9 = 0x84u; UPD(0x0C0B68CCu, 3);  /* 0C0B68CA mov.w @(disp,pc),Rn */
	IF(0x0C0B68CCu); r7 = MACL;  /* 0C0B68CC sts macl,Rn */
	r7 += r6;  /* 0C0B68CE add Rm,Rn */
	r6 = r7;  /* 0C0B68D0 mov Rm,Rn */
	r6 += r9;  /* 0C0B68D2 add Rm,Rn */
	r9 += r3;  /* 0C0B68D4 add Rm,Rn */
	r9 += 0x2u;  /* 0C0B68D6 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B68DAu, 7);  /* 0C0B68D8 mov.w @Rm,Rn */
	r6 += 0x2u;  /* 0C0B68DA add #imm,Rn */
	r12 = 0x1FFu; UPD(0x0C0B68DEu, 2);  /* 0C0B68DC mov.w @(disp,pc),Rn */
	r5 &= r12;  /* 0C0B68DE and Rm,Rn */
	r0 = r5;  /* 0C0B68E0 mov Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C0B68E2 add #imm,Rn */
	r8 = 0x100u; UPD(0x0C0B68E6u, 4);  /* 0C0B68E4 mov.w @(disp,pc),Rn */
	r2 = r0 & 0xFFFF;  /* 0C0B68E6 extu.w Rm,Rn */
	W16(r6, r5); UPD(0x0C0B68EAu, 2);  /* 0C0B68E8 mov.w Rm,@Rn */
	T = r2 > r8;  /* 0C0B68EA cmp/hi Rm,Rn */
	{ u32 c_ = T; r13 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B69B0u, 4); goto L_0C0B69B0; } goto L_0C0B68F0; }  /* 0C0B68EC bt/s */
L_0C0B68F0: BLKS(0x0C0B68F0u);
	r4 = 0xA8u; UPD(0x0C0B68F2u, 2);  /* 0C0B68F0 mov.w @(disp,pc),Rn */
	r2 = r7;  /* 0C0B68F2 mov Rm,Rn */
	r3 += r4;  /* 0C0B68F4 add Rm,Rn */
	r3 += 0x1u;  /* 0C0B68F6 add #imm,Rn */
	r2 += r4;  /* 0C0B68F8 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B68FCu, 5);  /* 0C0B68FA mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B68FC add #imm,Rn */
	UPD(0x0C0B68FEu, 1);
L_0C0B68FE: BLKS(0x0C0B68FEu);
	W8(r2, r1); UPD(0x0C0B6900u, 1);  /* 0C0B68FE mov.b Rm,@Rn */
	r4 = r13;  /* 0C0B6900 mov Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0B6904u, 2);  /* 0C0B6902 mov.w @(disp,pc),Rn */
	IF(0x0C0B6904u); MACL = r10 * r2;  /* 0C0B6904 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B6908u, 3);  /* 0C0B6906 mov.l @(disp,pc),Rn */
	IF(0x0C0B6908u); r12 = MACL;  /* 0C0B6908 sts macl,Rn */
	IF(0x0C0B690Au); MACL = r11 * r2;  /* 0C0B690A mul.l Rm,Rn */
	r12 += r3;  /* 0C0B690C add Rm,Rn */
	r9 = r12;  /* 0C0B690E mov Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0B6912u, 6);  /* 0C0B6910 mov.l @(disp,pc),Rn */
	IF(0x0C0B6912u); r7 = MACL;  /* 0C0B6912 sts macl,Rn */
	r7 += r3;  /* 0C0B6914 add Rm,Rn */
	r9 += 0x50u;  /* 0C0B6916 add #imm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C0B691Au, 4);  /* 0C0B6918 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B691Au); { u32 t_ = r11; PR = 0x0C0B691Eu; r5 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B691Eu); }  /* 0C0B691A jsr @Rn */
L_0C0B691E: BLKS(0x0C0B691Eu);
	r8 = 0x66666667u; UPD(0x0C0B6920u, 1);  /* 0C0B691E mov.l @(disp,pc),Rn */
	IF(0x0C0B6920u); r0 <<= 2;  /* 0C0B6920 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B6922 dmuls.l Rm,Rn */
	r4 = R32(r14 + 0x18u); UPD(0x0C0B6926u, 4);  /* 0C0B6924 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6926u); r6 = MACH;  /* 0C0B6926 sts mach,Rn */
	IF(0x0C0B6928u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0B6928 shar Rn */
	IF(0x0C0B692Au); T = r0 >> 31; r0 <<= 1;  /* 0C0B692A shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B692C subc Rm,Rn */
	r6 -= r0;  /* 0C0B692E sub Rm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C0B6932u, 6);  /* 0C0B6930 mov.l @(disp,Rm),Rn */
	r1 = 0xC069AF0u; UPD(0x0C0B6934u, 1);  /* 0C0B6932 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C0B6934 add Rm,Rn */
	r4 = r13;  /* 0C0B6936 mov Rm,Rn */
	r5 = R32(r9); UPD(0x0C0B693Au, 3);  /* 0C0B6938 mov.l @Rm,Rn */
	IF(0x0C0B693Au); { u32 t_ = r1; PR = 0x0C0B693Eu; W32(r12 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B693Eu); }  /* 0C0B693A jsr @Rn */
L_0C0B693E: BLKS(0x0C0B693Eu);
	r2 = R32(r14 + 0x18u); UPD(0x0C0B6940u, 1);  /* 0C0B693E mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B6940 mov Rm,Rn */
	r5 = R32(r2 + 0x28u); UPD(0x0C0B6944u, 2);  /* 0C0B6942 mov.l @(disp,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B6946u, 1);  /* 0C0B6944 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C0B6946 add Rm,Rn */
	r3 = R32(r2 + 0xCu); UPD(0x0C0B694Au, 2);  /* 0C0B6948 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r5); UPD(0x0C0B694Cu, 1);  /* 0C0B694A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B694Cu); { u32 t_ = r13; PR = 0x0C0B6950u; W32(r12 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6950u); }  /* 0C0B694C jsr @Rn */
L_0C0B6950: BLKS(0x0C0B6950u);
	r7 = 0x9Au; UPD(0x0C0B6952u, 1);  /* 0C0B6950 mov.w @(disp,pc),Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0B6954u, 1);  /* 0C0B6952 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6954u); r11 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B6956u, 1);  /* 0C0B6954 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0B6956 tst Rm,Rn */
	if (T) { UPD(0x0C0B69A0u, 4); goto L_0C0B69A0; }  /* 0C0B6958 bt */
L_0C0B695A: BLKS(0x0C0B695Au);
	r0 = r12;  /* 0C0B695A mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C0B695Eu, 2);  /* 0C0B695C mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0B6960u, 1);  /* 0C0B695E mov.l @(disp,pc),Rn */
	IF(0x0C0B6960u); r10 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0B6962u, 1);  /* 0C0B6960 mov.w @(r0,Rm),Rn */
	r9 = 0xC0000u; UPD(0x0C0B6964u, 1);  /* 0C0B6962 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B6964 mov Rm,Rn */
	IF(0x0C0B6966u); { u32 t_ = r8; PR = 0x0C0B696Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B696Au); }  /* 0C0B6966 jsr @Rn */
L_0C0B696A: BLKS(0x0C0B696Au);
	r6 = 0x66666667u; UPD(0x0C0B696Cu, 1);  /* 0C0B696A mov.l @(disp,pc),Rn */
	IF(0x0C0B696Cu); r0 <<= 2;  /* 0C0B696C shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B696E dmuls.l Rm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0B6972u, 4);  /* 0C0B6970 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B6972 mov Rm,Rn */
	IF(0x0C0B6974u); r1 = MACH;  /* 0C0B6974 sts mach,Rn */
	IF(0x0C0B6976u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B6976 shar Rn */
	IF(0x0C0B6978u); T = r0 >> 31; r0 <<= 1;  /* 0C0B6978 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B697A subc Rm,Rn */
	r1 -= r0;  /* 0C0B697C sub Rm,Rn */
	r5 += r1;  /* 0C0B697E add Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0B6982u, 8);  /* 0C0B6980 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B6984u, 1);  /* 0C0B6982 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B6984u); { u32 t_ = r13; PR = 0x0C0B6988u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6988u); }  /* 0C0B6984 jsr @Rn */
L_0C0B6988: BLKS(0x0C0B6988u);
	r6 = R32(r12 + 0x28u); UPD(0x0C0B698Au, 1);  /* 0C0B6988 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B698A add #imm,Rn */
	r12 = 0x30000u; UPD(0x0C0B698Eu, 2);  /* 0C0B698C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B698E add Rm,Rn */
	W32(r15, r12); UPD(0x0C0B6992u, 2);  /* 0C0B6990 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C0B6992 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0B6996u, 2);  /* 0C0B6994 mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C0B6996 mov Rm,Rn */
	r0 = 0xC0BB5F0u; UPD(0x0C0B699Au, 2);  /* 0C0B6998 mov.l @(disp,pc),Rn */
L_0C0B699A: BLKS(0x0C0B699Au);
	IF(0x0C0B699Au); { u32 t_ = r0; PR = 0x0C0B699Eu; IF(0x0C0B699Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B699Eu); }  /* 0C0B699A jsr @Rn */
L_0C0B699E: BLKS(0x0C0B699Eu);
	r15 += 0x4u;  /* 0C0B699E add #imm,Rn */
	UPD(0x0C0B69A0u, 1);
L_0C0B69A0: BLKS(0x0C0B69A0u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B69A0 bra */
L_0C0B69B0: BLKS(0x0C0B69B0u);
	r8 = 0xA8u; UPD(0x0C0B69B2u, 1);  /* 0C0B69B0 mov.w @(disp,pc),Rn */
	r2 = r7;  /* 0C0B69B2 mov Rm,Rn */
	r3 += r8;  /* 0C0B69B4 add Rm,Rn */
	r3 += 0x1u;  /* 0C0B69B6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B69BAu, 4);  /* 0C0B69B8 mov.b @Rm,Rn */
	r2 += r8;  /* 0C0B69BA add Rm,Rn */
	r2 += 0x1u;  /* 0C0B69BC add #imm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0B68FEu, 5); goto L_0C0B68FE; }  /* 0C0B69BE bra */
L_0C0B69D0: BLKS(0x0C0B69D0u);
	r10 += r6;  /* 0C0B69D0 add Rm,Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C0B69D4u, 2);  /* 0C0B69D2 mov.l Rm,@(disp,Rn) */
L_0C0B69D4: BLKS(0x0C0B69D4u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B69D4 bra */
L_0C0B6A10: BLKS(0x0C0B6A10u);
	r11 = 0xC0A8B50u; UPD(0x0C0B6A12u, 1);  /* 0C0B6A10 mov.l @(disp,pc),Rn */
	IF(0x0C0B6A12u); { u32 t_ = r11; PR = 0x0C0B6A16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B6A16u); }  /* 0C0B6A12 jsr @Rn */
L_0C0B6A16: BLKS(0x0C0B6A16u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6A16 exts.w Rm,Rn */
	IF(0x0C0B6A18u); T = (s32)r11 >= 0;  /* 0C0B6A18 cmp/pz Rn */
	if (T) { UPD(0x0C0B6A20u, 5); goto L_0C0B6A20; }  /* 0C0B6A1A bt */
L_0C0B6A1C: BLKS(0x0C0B6A1Cu);
	{ IF(0x0C0B6A1Eu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B6A1C bra */
L_0C0B6A20: BLKS(0x0C0B6A20u);
	r13 = 0xB4u; UPD(0x0C0B6A22u, 1);  /* 0C0B6A20 mov.w @(disp,pc),Rn */
	IF(0x0C0B6A22u); MACL = r10 * r13;  /* 0C0B6A22 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B6A26u, 3);  /* 0C0B6A24 mov.l @(disp,pc),Rn */
	IF(0x0C0B6A26u); r9 = MACL;  /* 0C0B6A26 sts macl,Rn */
	r9 += r12;  /* 0C0B6A28 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C0B6A2Cu, 3);  /* 0C0B6A2A mov.l @Rm,Rn */
	IF(0x0C0B6A2Cu); MACL = r11 * r13;  /* 0C0B6A2C mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C0B6A30u, 3);  /* 0C0B6A2E mov.l @(disp,pc),Rn */
	r5 &= r2;  /* 0C0B6A30 and Rm,Rn */
	W32(r9, r5); UPD(0x0C0B6A34u, 2);  /* 0C0B6A32 mov.l Rm,@Rn */
	IF(0x0C0B6A34u); r6 = MACL;  /* 0C0B6A34 sts macl,Rn */
	r6 += r12;  /* 0C0B6A36 add Rm,Rn */
	r3 = R32(r6); UPD(0x0C0B6A3Au, 3);  /* 0C0B6A38 mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C0B6A3Cu, 1);  /* 0C0B6A3A mov.l @(disp,pc),Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C0B6A3Eu, 1);  /* 0C0B6A3C mov.l @(disp,Rm),Rn */
	r3 &= r7;  /* 0C0B6A3E and Rm,Rn */
	r4 = R32(r6 + 0x24u); UPD(0x0C0B6A42u, 2);  /* 0C0B6A40 mov.l @(disp,Rm),Rn */
	r5 |= r3;  /* 0C0B6A42 or Rm,Rn */
	r8 = R32(r6 + 0x28u); UPD(0x0C0B6A46u, 2);  /* 0C0B6A44 mov.l @(disp,Rm),Rn */
	r4 += r11;  /* 0C0B6A46 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0B6A4Au, 2);  /* 0C0B6A48 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C0B6A4A add Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0B6A4Eu, 2);  /* 0C0B6A4C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r8); UPD(0x0C0B6A50u, 1);  /* 0C0B6A4E mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0B6A52u, 1);  /* 0C0B6A50 mov.l Rm,@Rn */
	r9 += 0x7Eu;  /* 0C0B6A52 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B6A56u, 2);  /* 0C0B6A54 mov.w @Rm,Rn */
	IF(0x0C0B6A56u); MACL = r11 * r13;  /* 0C0B6A56 mul.l Rm,Rn */
	IF(0x0C0B6A58u); r0 = MACL;  /* 0C0B6A58 sts macl,Rn */
	r0 += r12;  /* 0C0B6A5A add Rm,Rn */
	r0 += 0x3Cu;  /* 0C0B6A5C add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B6A60u, 6);  /* 0C0B6A5E mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B6A60 tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B6AC0u, 4); goto L_0C0B6AC0; } goto L_0C0B6A66; }  /* 0C0B6A62 bf/s */
L_0C0B6A66: BLKS(0x0C0B6A66u);
	r0 = 0x98u; UPD(0x0C0B6A68u, 2);  /* 0C0B6A66 mov.w @(disp,pc),Rn */
	r10 = 0x2u;  /* 0C0B6A68 mov #imm,Rn */
	IF(0x0C0B6A6Au); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B6A6Cu, 2);  /* 0C0B6A6A mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C0B6A6C add #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C0B6A6E extu.b Rm,Rn */
	T = r12 > r10;  /* 0C0B6A70 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B6A74u); W8(r0 + r9, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B69D4u, 6); goto L_0C0B69D4; } UPD(0x0C0B6A76u, 1); goto L_0C0B6A76; }  /* 0C0B6A72 bf/s */
L_0C0B6A76: BLKS(0x0C0B6A76u);
	r12 = 0xC0C2360u; UPD(0x0C0B6A78u, 1);  /* 0C0B6A76 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B6A78 add #imm,Rn */
	IF(0x0C0B6A7Au); { u32 t_ = r12; PR = 0x0C0B6A7Eu; IF(0x0C0B6A7Cu); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B6A7Eu); }  /* 0C0B6A7A jsr @Rn */
L_0C0B6A7E: BLKS(0x0C0B6A7Eu);
	r11 = 0xC1E95CCu; UPD(0x0C0B6A80u, 1);  /* 0C0B6A7E mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B6A80 and #imm,r0 */
	IF(0x0C0B6A82u); r0 <<= 2;  /* 0C0B6A82 shll2 Rn */
	r11 += r0;  /* 0C0B6A84 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B6A88u, 4);  /* 0C0B6A86 mov.w @(disp,pc),Rn */
	IF(0x0C0B6A88u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B6A8Au, 1);  /* 0C0B6A88 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C0B6A8A extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B6A8Eu, 2);  /* 0C0B6A8C mov.l Rm,@Rn */
	r0 = r9;  /* 0C0B6A8E mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C0B6A92u, 2);  /* 0C0B6A90 mov.w @(disp,pc),Rn */
	IF(0x0C0B6A92u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B6A94u, 1);  /* 0C0B6A92 mov.b @(r0,Rm),Rn */
	r8 = 0xC062780u; UPD(0x0C0B6A96u, 1);  /* 0C0B6A94 mov.l @(disp,pc),Rn */
	r7 = r6 & 0xFF;  /* 0C0B6A96 extu.b Rm,Rn */
	r0 = 0xFFFE0000u; UPD(0x0C0B6A9Au, 2);  /* 0C0B6A98 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B6A9Cu, 1);  /* 0C0B6A9A mov.l Rm,@(disp,Rn) */
	r4 = 0x1000u; UPD(0x0C0B6A9Eu, 1);  /* 0C0B6A9C mov.w @(disp,pc),Rn */
	IF(0x0C0B6A9Eu); { u32 t_ = r8; PR = 0x0C0B6AA2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B6AA2u); }  /* 0C0B6A9E jsr @Rn */
L_0C0B6AA2: BLKS(0x0C0B6AA2u);
	r3 = 0xFFFFF800u; UPD(0x0C0B6AA4u, 1);  /* 0C0B6AA2 mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B6AA4 mov #imm,Rn */
	r0 += r3;  /* 0C0B6AA6 add Rm,Rn */
	IF(0x0C0B6AA8u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0B6AA8 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0B6AACu, 4);  /* 0C0B6AAA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BE860u; UPD(0x0C0B6AAEu, 1);  /* 0C0B6AAC mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0B6AB0u, 1);  /* 0C0B6AAE mov.l @Rm,Rn */
	r5 = R32(r11); UPD(0x0C0B6AB2u, 1);  /* 0C0B6AB0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B6AB4u, 1);  /* 0C0B6AB2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B6468u, 3); goto L_0C0B6468; }  /* 0C0B6AB4 bra */
L_0C0B6AC0: BLKS(0x0C0B6AC0u);
	r3 = R32(r9 + 0xCu); UPD(0x0C0B6AC2u, 1);  /* 0C0B6AC0 mov.l @(disp,Rm),Rn */
	r9 = 0xEu;  /* 0C0B6AC2 mov #imm,Rn */
	T = r3 > r9;  /* 0C0B6AC4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B6B52u, 5); goto L_0C0B6B52; }  /* 0C0B6AC6 bt */
L_0C0B6AC8: BLKS(0x0C0B6AC8u);
	r0 = 0xC0B6B04u;  /* 0C0B6AC8 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B6ACA add Rm,Rn */
	IF(0x0C0B6ACCu); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B6ACEu, 3);  /* 0C0B6ACC mov.w @(r0,Rm),Rn */
	IF(0x0C0B6ACEu); { u32 tv_ = (r13 + 0x0C0B6AD2u); u32 t_ = PHYS(tv_); IF(0x0C0B6AD0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DBAu: goto L_0C0B5DBA; case 0x0C0B6B30u: goto L_0C0B6B30; case 0x0C0B6B70u: goto L_0C0B6B70; case 0x0C0B6B96u: goto L_0C0B6B96; default: JUMPD(tv_); } }  /* 0C0B6ACE braf Rn */
L_0C0B6B30: BLKS(0x0C0B6B30u);
	r3 = 0xB4u; UPD(0x0C0B6B32u, 1);  /* 0C0B6B30 mov.w @(disp,pc),Rn */
	IF(0x0C0B6B32u); MACL = r11 * r3;  /* 0C0B6B32 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B6B36u, 3);  /* 0C0B6B34 mov.l @(disp,pc),Rn */
	IF(0x0C0B6B36u); r2 = MACL;  /* 0C0B6B36 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C0B6B3Au, 2);  /* 0C0B6B38 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B6B3A add Rm,Rn */
	r2 += r1;  /* 0C0B6B3C add Rm,Rn */
	r2 += 0x1u;  /* 0C0B6B3E add #imm,Rn */
	UPD(0x0C0B6B40u, 3);
L_0C0B6B40: BLKS(0x0C0B6B40u);
	IF(0x0C0B6B40u); MACL = r10 * r3;  /* 0C0B6B40 mul.l Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B6B44u, 3);  /* 0C0B6B42 mov.b @Rm,Rn */
	IF(0x0C0B6B44u); r3 = MACL;  /* 0C0B6B44 sts macl,Rn */
	r3 += r7;  /* 0C0B6B46 add Rm,Rn */
	r1 += r3;  /* 0C0B6B48 add Rm,Rn */
	r1 += 0x1u;  /* 0C0B6B4A add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B6B4Eu, 5);  /* 0C0B6B4C mov.b @Rm,Rn */
	T = (r5 & r11) == 0;  /* 0C0B6B4E tst Rm,Rn */
	if (!T) { UPD(0x0C0B6B56u, 4); goto L_0C0B6B56; }  /* 0C0B6B50 bf */
L_0C0B6B52: BLKS(0x0C0B6B52u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6B52 bra */
L_0C0B6B56: BLKS(0x0C0B6B56u);
	r4 = r10;  /* 0C0B6B56 mov Rm,Rn */
	r8 = R32(r3 + 0xCu); UPD(0x0C0B6B5Au, 2);  /* 0C0B6B58 mov.l @(disp,Rm),Rn */
	r12 = 0x1u;  /* 0C0B6B5A mov #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B6B5Eu, 2);  /* 0C0B6B5C mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0B6B5E add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B6B62u, 2);  /* 0C0B6B60 mov.w @(disp,pc),Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0B6B64u, 1);  /* 0C0B6B62 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B6B64u); { u32 t_ = r10; PR = 0x0C0B6B68u; IF(0x0C0B6B66u); W16(r0 + r3, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6B68u); }  /* 0C0B6B64 jsr @Rn */
L_0C0B6B68: BLKS(0x0C0B6B68u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C0B6042u, 3); goto L_0C0B6042; }  /* 0C0B6B68 bra */
L_0C0B6B70: BLKS(0x0C0B6B70u);
	r12 = 0xB4u; UPD(0x0C0B6B72u, 1);  /* 0C0B6B70 mov.w @(disp,pc),Rn */
	IF(0x0C0B6B72u); MACL = r11 * r12;  /* 0C0B6B72 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B6B76u, 3);  /* 0C0B6B74 mov.l @(disp,pc),Rn */
	IF(0x0C0B6B76u); r4 = MACL;  /* 0C0B6B76 sts macl,Rn */
	IF(0x0C0B6B78u); MACL = r10 * r12;  /* 0C0B6B78 mul.l Rm,Rn */
	r6 = 0xA0u; UPD(0x0C0B6B7Cu, 4);  /* 0C0B6B7A mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C0B6B7C add Rm,Rn */
	IF(0x0C0B6B7Eu); r3 = MACL;  /* 0C0B6B7E sts macl,Rn */
	r4 += r6;  /* 0C0B6B80 add Rm,Rn */
	r3 += r2;  /* 0C0B6B82 add Rm,Rn */
	r6 += r3;  /* 0C0B6B84 add Rm,Rn */
	r4 += 0x1u;  /* 0C0B6B86 add #imm,Rn */
	r6 += 0x1u;  /* 0C0B6B88 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B6B8Cu, 8);  /* 0C0B6B8A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B6B8Eu, 1);  /* 0C0B6B8C mov.b @Rm,Rn */
	T = (r7 & r0) == 0;  /* 0C0B6B8E tst Rm,Rn */
	if (!T) { UPD(0x0C0B6B96u, 4); goto L_0C0B6B96; }  /* 0C0B6B90 bf */
L_0C0B6B92: BLKS(0x0C0B6B92u);
	{ IF(0x0C0B6B94u); ; /* slot nop */ UPD(0x0C0B5EE0u, 3); goto L_0C0B5EE0; }  /* 0C0B6B92 bra */
L_0C0B6B96: BLKS(0x0C0B6B96u);
	r8 = 0xB4u; UPD(0x0C0B6B98u, 1);  /* 0C0B6B96 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B6B98 mov Rm,Rn */
	IF(0x0C0B6B9Au); MACL = r10 * r8;  /* 0C0B6B9A mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B6B9Eu, 4);  /* 0C0B6B9C mov.l @(disp,pc),Rn */
	IF(0x0C0B6B9Eu); r12 = MACL;  /* 0C0B6B9E sts macl,Rn */
	r12 += r13;  /* 0C0B6BA0 add Rm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C0B6BA4u, 3);  /* 0C0B6BA2 mov.l @(disp,Rm),Rn */
	r7 = 0xC1E9578u; UPD(0x0C0B6BA6u, 1);  /* 0C0B6BA4 mov.l @(disp,pc),Rn */
	IF(0x0C0B6BA6u); r0 <<= 2;  /* 0C0B6BA6 shll2 Rn */
	IF(0x0C0B6BA8u); r3 = R32(r0 + r7); UPD(0x0C0B6BAAu, 2);  /* 0C0B6BA8 mov.l @(r0,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B6BACu, 1);  /* 0C0B6BAA mov.l @(disp,pc),Rn */
	IF(0x0C0B6BACu); { u32 t_ = r9; PR = 0x0C0B6BB0u; W32(r12 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6BB0u); }  /* 0C0B6BAC jsr @Rn */
L_0C0B6BB0: BLKS(0x0C0B6BB0u);
	r12 += 0x7Eu;  /* 0C0B6BB0 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r12); UPD(0x0C0B6BB4u, 2);  /* 0C0B6BB2 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0B6BB4 mov Rm,Rn */
	IF(0x0C0B6BB6u); MACL = r5 * r8;  /* 0C0B6BB6 mul.l Rm,Rn */
	r11 = 0xA5u; UPD(0x0C0B6BBAu, 4);  /* 0C0B6BB8 mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0B6BBA mov #imm,Rn */
	IF(0x0C0B6BBCu); r0 = MACL;  /* 0C0B6BBC sts macl,Rn */
	r0 += r13;  /* 0C0B6BBE add Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C0B6BC2u, 4);  /* 0C0B6BC0 mov.l @(disp,pc),Rn */
	r12 += 0xFFFFFF82u;  /* 0C0B6BC2 add #imm,Rn */
	IF(0x0C0B6BC4u); r0 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B6BC6u, 2);  /* 0C0B6BC4 mov.b @(r0,Rm),Rn */
	r13 = 0xC1E95B4u; UPD(0x0C0B6BC8u, 1);  /* 0C0B6BC6 mov.l @(disp,pc),Rn */
	IF(0x0C0B6BC8u); { u32 t_ = r9; PR = 0x0C0B6BCCu; IF(0x0C0B6BCAu); r5 = (u32)(s32)(s8)R8(r0 + r13); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B6BCCu); }  /* 0C0B6BC8 jsr @Rn */
L_0C0B6BCC: BLKS(0x0C0B6BCCu);
	T = (r0 & r0) == 0;  /* 0C0B6BCC tst Rm,Rn */
	if (T) { UPD(0x0C0B6C18u, 4); goto L_0C0B6C18; }  /* 0C0B6BCE bt */
L_0C0B6BD0: BLKS(0x0C0B6BD0u);
	r9 = 0xC069B90u; UPD(0x0C0B6BD2u, 1);  /* 0C0B6BD0 mov.l @(disp,pc),Rn */
	r13 = 0xC069C40u; UPD(0x0C0B6BD4u, 1);  /* 0C0B6BD2 mov.l @(disp,pc),Rn */
	IF(0x0C0B6BD4u); { u32 t_ = r9; PR = 0x0C0B6BD8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B6BD8u); }  /* 0C0B6BD4 jsr @Rn */
L_0C0B6BD8: BLKS(0x0C0B6BD8u);
	IF(0x0C0B6BD8u); { u32 t_ = r13; PR = 0x0C0B6BDCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069C40, 0x0C069C40u, 0x0C0B6BDCu); }  /* 0C0B6BD8 jsr @Rn */
L_0C0B6BDC: BLKS(0x0C0B6BDCu);
	r2 = 0x86u; UPD(0x0C0B6BDEu, 1);  /* 0C0B6BDC mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0B6BDE mov Rm,Rn */
	IF(0x0C0B6BE0u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B6BE2u, 2);  /* 0C0B6BE0 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B6BE2 add #imm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0B6BE6u, 2);  /* 0C0B6BE4 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFE8u;  /* 0C0B6BE6 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C0B6BEAu, 2);  /* 0C0B6BE8 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C0B6BEA add Rm,Rn */
	W32(r15, r0); UPD(0x0C0B6BEEu, 2);  /* 0C0B6BEC mov.l Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B6BF0u, 1);  /* 0C0B6BEE mov.b @Rm,Rn */
	r4 = 0xC1E95C0u; UPD(0x0C0B6BF2u, 1);  /* 0C0B6BF0 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C0B6BF2 extu.b Rm,Rn */
	IF(0x0C0B6BF4u); r0 <<= 2;  /* 0C0B6BF4 shll2 Rn */
	IF(0x0C0B6BF6u); r6 = R32(r0 + r4); UPD(0x0C0B6BF8u, 3);  /* 0C0B6BF6 mov.l @(r0,Rm),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B6BFAu, 1);  /* 0C0B6BF8 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0B6BFA mov #imm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0B6BFEu, 2);  /* 0C0B6BFC mov.l @(disp,Rm),Rn */
	r12 = 0xC0BA610u; UPD(0x0C0B6C00u, 1);  /* 0C0B6BFE mov.l @(disp,pc),Rn */
	r11 = 0xFFF00000u; UPD(0x0C0B6C02u, 1);  /* 0C0B6C00 mov.l @(disp,pc),Rn */
	IF(0x0C0B6C02u); { u32 t_ = r12; PR = 0x0C0B6C06u; r5 += r11; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA610, 0x0C0BA610u, 0x0C0B6C06u); }  /* 0C0B6C02 jsr @Rn */
L_0C0B6C06: BLKS(0x0C0B6C06u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B6C08u, 1);  /* 0C0B6C06 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0B6C08 add #imm,Rn */
	r10 += 0x1u;  /* 0C0B6C0A add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C0B6C0C extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B6C0E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B6C18u, 7); goto L_0C0B6C18; } UPD(0x0C0B6C14u, 1); goto L_0C0B6C14; }  /* 0C0B6C10 bf/s */
L_0C0B6C14: BLKS(0x0C0B6C14u);
	r5 = 0x0u;  /* 0C0B6C14 mov #imm,Rn */
	W8(r8, r5); UPD(0x0C0B6C18u, 2);  /* 0C0B6C16 mov.b Rm,@Rn */
L_0C0B6C18: BLKS(0x0C0B6C18u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C0B5CC6u, 3); goto L_0C0B5CC6; }  /* 0C0B6C18 bra */
L_0C0B6C20: BLKS(0x0C0B6C20u);
	r8 = 0xC0A8D30u; UPD(0x0C0B6C22u, 1);  /* 0C0B6C20 mov.l @(disp,pc),Rn */
	IF(0x0C0B6C22u); { u32 t_ = r8; PR = 0x0C0B6C26u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B6C26u); }  /* 0C0B6C22 jsr @Rn */
L_0C0B6C26: BLKS(0x0C0B6C26u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6C26 exts.w Rm,Rn */
	IF(0x0C0B6C28u); T = (s32)r11 >= 0;  /* 0C0B6C28 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0xEu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B6C32u, 5); goto L_0C0B6C32; } goto L_0C0B6C2E; }  /* 0C0B6C2A bt/s */
L_0C0B6C2E: BLKS(0x0C0B6C2Eu);
	{ IF(0x0C0B6C30u); ; /* slot nop */ UPD(0x0C0B5EF0u, 4); goto L_0C0B5EF0; }  /* 0C0B6C2E bra */
L_0C0B6C32: BLKS(0x0C0B6C32u);
	r2 = 0xB4u; UPD(0x0C0B6C34u, 1);  /* 0C0B6C32 mov.w @(disp,pc),Rn */
	IF(0x0C0B6C34u); MACL = r10 * r2;  /* 0C0B6C34 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B6C38u, 3);  /* 0C0B6C36 mov.l @(disp,pc),Rn */
	IF(0x0C0B6C38u); r12 = MACL;  /* 0C0B6C38 sts macl,Rn */
	IF(0x0C0B6C3Au); MACL = r11 * r2;  /* 0C0B6C3A mul.l Rm,Rn */
	r12 += r13;  /* 0C0B6C3C add Rm,Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C0B6C40u, 5);  /* 0C0B6C3E mov.l @(disp,Rm),Rn */
	IF(0x0C0B6C40u); r4 = MACL;  /* 0C0B6C40 sts macl,Rn */
	r4 += r13;  /* 0C0B6C42 add Rm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C0B6C46u, 3);  /* 0C0B6C44 mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0x28u); UPD(0x0C0B6C48u, 1);  /* 0C0B6C46 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0B6C48 add Rm,Rn */
	r7 = R32(r12 + 0x30u); UPD(0x0C0B6C4Cu, 2);  /* 0C0B6C4A mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B6C4C add Rm,Rn */
	W32(r12 + 0x24u, r0); UPD(0x0C0B6C50u, 2);  /* 0C0B6C4E mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r6); UPD(0x0C0B6C52u, 1);  /* 0C0B6C50 mov.l Rm,@(disp,Rn) */
	r12 += 0x7Eu;  /* 0C0B6C52 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C0B6C56u, 2);  /* 0C0B6C54 mov.w @Rm,Rn */
	r12 += 0xFFFFFF82u;  /* 0C0B6C56 add #imm,Rn */
	r2 = R32(r12 + 0xCu); UPD(0x0C0B6C5Au, 2);  /* 0C0B6C58 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C0B6C5A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B6CF0u, 4); goto L_0C0B6CF0; }  /* 0C0B6C5C bt */
L_0C0B6C5E: BLKS(0x0C0B6C5Eu);
	r0 = 0xC0B6CA4u;  /* 0C0B6C5E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B6C60 add Rm,Rn */
	IF(0x0C0B6C62u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B6C64u, 3);  /* 0C0B6C62 mov.w @(r0,Rm),Rn */
	IF(0x0C0B6C64u); { u32 tv_ = (r9 + 0x0C0B6C68u); u32 t_ = PHYS(tv_); IF(0x0C0B6C66u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6CD0u: goto L_0C0B6CD0; case 0x0C0B6CF0u: goto L_0C0B6CF0; case 0x0C0B6D40u: goto L_0C0B6D40; case 0x0C0B6D66u: goto L_0C0B6D66; default: JUMPD(tv_); } }  /* 0C0B6C64 braf Rn */
L_0C0B6CD0: BLKS(0x0C0B6CD0u);
	r3 = 0xB4u; UPD(0x0C0B6CD2u, 1);  /* 0C0B6CD0 mov.w @(disp,pc),Rn */
	IF(0x0C0B6CD2u); MACL = r11 * r3;  /* 0C0B6CD2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B6CD6u, 3);  /* 0C0B6CD4 mov.l @(disp,pc),Rn */
	IF(0x0C0B6CD6u); r2 = MACL;  /* 0C0B6CD6 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C0B6CDAu, 2);  /* 0C0B6CD8 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B6CDA add Rm,Rn */
	r2 += r1;  /* 0C0B6CDC add Rm,Rn */
	{ r2 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C0B6B40u, 5); goto L_0C0B6B40; }  /* 0C0B6CDE bra */
L_0C0B6CF0: BLKS(0x0C0B6CF0u);
	r7 = 0xB4u; UPD(0x0C0B6CF2u, 1);  /* 0C0B6CF0 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0B6CF2 mov #imm,Rn */
	IF(0x0C0B6CF4u); MACL = r10 * r7;  /* 0C0B6CF4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B6CF8u, 4);  /* 0C0B6CF6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B6CFAu, 1);  /* 0C0B6CF8 mov.w @(disp,pc),Rn */
	IF(0x0C0B6CFAu); r8 = MACL;  /* 0C0B6CFA sts macl,Rn */
	r8 += r6;  /* 0C0B6CFC add Rm,Rn */
	IF(0x0C0B6CFEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B6D00u, 3);  /* 0C0B6CFE mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0B6D00 add #imm,Rn */
	IF(0x0C0B6D02u); W8(r0 + r8, r3); UPD(0x0C0B6D04u, 2);  /* 0C0B6D02 mov.b Rm,@(r0,Rn) */
	r1 = r3 & 0xFF;  /* 0C0B6D04 extu.b Rm,Rn */
	UPD(0x0C0B6D06u, 1);
L_0C0B6D06: BLKS(0x0C0B6D06u);
	T = r1 > r2;  /* 0C0B6D06 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B6D2Cu, 4); goto L_0C0B6D2C; }  /* 0C0B6D08 bf */
L_0C0B6D0A: BLKS(0x0C0B6D0Au);
	r11 = 0x0u;  /* 0C0B6D0A mov #imm,Rn */
	IF(0x0C0B6D0Cu); W8(r0 + r8, r11); UPD(0x0C0B6D0Eu, 2);  /* 0C0B6D0C mov.b Rm,@(r0,Rn) */
L_0C0B6D0E: BLKS(0x0C0B6D0Eu);
	r0 = 0x88u; UPD(0x0C0B6D10u, 1);  /* 0C0B6D0E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B6D10 mov Rm,Rn */
	r11 = R32(r8 + 0xCu); UPD(0x0C0B6D14u, 2);  /* 0C0B6D12 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6D14u); r6 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B6D16u, 1);  /* 0C0B6D14 mov.w @(r0,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B6D18u, 1);  /* 0C0B6D16 mov.l @(disp,pc),Rn */
	r11 += r6;  /* 0C0B6D18 add Rm,Rn */
	IF(0x0C0B6D1Au); { u32 t_ = r12; PR = 0x0C0B6D1Eu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6D1Eu); }  /* 0C0B6D1A jsr @Rn */
L_0C0B6D1E: BLKS(0x0C0B6D1Eu);
	r10 = R32(r8 + 0xCu); UPD(0x0C0B6D20u, 1);  /* 0C0B6D1E mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0B6D20 tst Rm,Rn */
	if (!T) { UPD(0x0C0B6D2Cu, 4); goto L_0C0B6D2C; }  /* 0C0B6D22 bf */
L_0C0B6D24: BLKS(0x0C0B6D24u);
	r6 = R32(r8); UPD(0x0C0B6D26u, 1);  /* 0C0B6D24 mov.l @Rm,Rn */
L_0C0B6D26: BLKS(0x0C0B6D26u);
	r0 = 0x4000u; UPD(0x0C0B6D28u, 1);  /* 0C0B6D26 mov.w @(disp,pc),Rn */
	r6 |= r0;  /* 0C0B6D28 or Rm,Rn */
	W32(r8, r6); UPD(0x0C0B6D2Cu, 2);  /* 0C0B6D2A mov.l Rm,@Rn */
L_0C0B6D2C: BLKS(0x0C0B6D2Cu);
	r13 = 0xFFFFEF94u; UPD(0x0C0B6D2Eu, 1);  /* 0C0B6D2C mov.w @(disp,pc),Rn */
	IF(0x0C0B6D2Eu); { u32 tv_ = (r13 + 0x0C0B6D32u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B6D2E braf Rn */
L_0C0B6D40: BLKS(0x0C0B6D40u);
	r9 = 0xB4u; UPD(0x0C0B6D42u, 1);  /* 0C0B6D40 mov.w @(disp,pc),Rn */
	IF(0x0C0B6D42u); MACL = r11 * r9;  /* 0C0B6D42 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B6D46u, 3);  /* 0C0B6D44 mov.l @(disp,pc),Rn */
	IF(0x0C0B6D46u); r1 = MACL;  /* 0C0B6D46 sts macl,Rn */
	IF(0x0C0B6D48u); MACL = r10 * r9;  /* 0C0B6D48 mul.l Rm,Rn */
	r13 = 0xA0u; UPD(0x0C0B6D4Cu, 4);  /* 0C0B6D4A mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0B6D4C add Rm,Rn */
	IF(0x0C0B6D4Eu); r3 = MACL;  /* 0C0B6D4E sts macl,Rn */
	r1 += r13;  /* 0C0B6D50 add Rm,Rn */
	r3 += r2;  /* 0C0B6D52 add Rm,Rn */
	r13 += r3;  /* 0C0B6D54 add Rm,Rn */
	r1 += 0x2u;  /* 0C0B6D56 add #imm,Rn */
	r13 += 0x1u;  /* 0C0B6D58 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B6D5Cu, 8);  /* 0C0B6D5A mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B6D5Eu, 1);  /* 0C0B6D5C mov.b @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C0B6D5E tst Rm,Rn */
	if (!T) { UPD(0x0C0B6D66u, 4); goto L_0C0B6D66; }  /* 0C0B6D60 bf */
L_0C0B6D62: BLKS(0x0C0B6D62u);
	{ IF(0x0C0B6D64u); ; /* slot nop */ UPD(0x0C0B5EE0u, 3); goto L_0C0B5EE0; }  /* 0C0B6D62 bra */
L_0C0B6D66: BLKS(0x0C0B6D66u);
	r8 = 0xB4u; UPD(0x0C0B6D68u, 1);  /* 0C0B6D66 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B6D68 mov Rm,Rn */
	IF(0x0C0B6D6Au); MACL = r10 * r8;  /* 0C0B6D6A mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B6D6Eu, 4);  /* 0C0B6D6C mov.l @(disp,pc),Rn */
	IF(0x0C0B6D6Eu); r8 = MACL;  /* 0C0B6D6E sts macl,Rn */
	r8 += r6;  /* 0C0B6D70 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0B6D74u, 3);  /* 0C0B6D72 mov.l @(disp,Rm),Rn */
	r3 = 0xC1E9578u; UPD(0x0C0B6D76u, 1);  /* 0C0B6D74 mov.l @(disp,pc),Rn */
	IF(0x0C0B6D76u); r0 <<= 2;  /* 0C0B6D76 shll2 Rn */
	IF(0x0C0B6D78u); r5 = R32(r0 + r3); UPD(0x0C0B6D7Au, 2);  /* 0C0B6D78 mov.l @(r0,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B6D7Cu, 1);  /* 0C0B6D7A mov.l @(disp,pc),Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C0B6D7Eu, 1);  /* 0C0B6D7C mov.l @(disp,pc),Rn */
	IF(0x0C0B6D7Eu); { u32 t_ = r12; PR = 0x0C0B6D82u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B6D82u); }  /* 0C0B6D7E jsr @Rn */
L_0C0B6D82: BLKS(0x0C0B6D82u);
	r4 = r10;  /* 0C0B6D82 mov Rm,Rn */
	r5 = 0x10u;  /* 0C0B6D84 mov #imm,Rn */
	IF(0x0C0B6D86u); { u32 t_ = r11; PR = 0x0C0B6D8Au; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B6D8Au); }  /* 0C0B6D86 jsr @Rn */
L_0C0B6D8A: BLKS(0x0C0B6D8Au);
	T = (r0 & r0) == 0;  /* 0C0B6D8A tst Rm,Rn */
	if (T) { UPD(0x0C0B6D2Cu, 4); goto L_0C0B6D2C; }  /* 0C0B6D8C bt */
L_0C0B6D8E: BLKS(0x0C0B6D8Eu);
	r2 = R32(r8 + 0x24u); UPD(0x0C0B6D90u, 1);  /* 0C0B6D8E mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B6D90 mov Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0B6D94u, 2);  /* 0C0B6D92 mov.l Rm,@(disp,Rn) */
	r0 = 0xFFF40000u; UPD(0x0C0B6D96u, 1);  /* 0C0B6D94 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0B6D98u, 1);  /* 0C0B6D96 mov.l @(disp,Rm),Rn */
	r11 = 0xC069B90u; UPD(0x0C0B6D9Au, 1);  /* 0C0B6D98 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C0B6D9A add Rm,Rn */
	r9 = 0xC069C40u; UPD(0x0C0B6D9Eu, 2);  /* 0C0B6D9C mov.l @(disp,pc),Rn */
	IF(0x0C0B6D9Eu); { u32 t_ = r11; PR = 0x0C0B6DA2u; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B6DA2u); }  /* 0C0B6D9E jsr @Rn */
L_0C0B6DA2: BLKS(0x0C0B6DA2u);
	r13 = 0x86u; UPD(0x0C0B6DA4u, 1);  /* 0C0B6DA2 mov.w @(disp,pc),Rn */
	IF(0x0C0B6DA4u); { u32 t_ = r9; PR = 0x0C0B6DA8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069C40, 0x0C069C40u, 0x0C0B6DA8u); }  /* 0C0B6DA4 jsr @Rn */
L_0C0B6DA8: BLKS(0x0C0B6DA8u);
	r0 = r8;  /* 0C0B6DA8 mov Rm,Rn */
	IF(0x0C0B6DAAu); r7 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0B6DACu, 2);  /* 0C0B6DAA mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B6DAC add #imm,Rn */
	r4 = 0x38000u; UPD(0x0C0B6DB0u, 2);  /* 0C0B6DAE mov.l @(disp,pc),Rn */
	r10 = 0xC189CB0u; UPD(0x0C0B6DB2u, 1);  /* 0C0B6DB0 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C0B6DB4u, 1);  /* 0C0B6DB2 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0B6DB6u, 1);  /* 0C0B6DB4 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0B6DB6 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0B6DBAu, 2);  /* 0C0B6DB8 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B6DBCu, 1);  /* 0C0B6DBA mov.l @(disp,Rm),Rn */
	r0 = 0xC0BAF60u; UPD(0x0C0B6DBEu, 1);  /* 0C0B6DBC mov.l @(disp,pc),Rn */
L_0C0B6DBE: BLKS(0x0C0B6DBEu);
	IF(0x0C0B6DBEu); { u32 t_ = r0; PR = 0x0C0B6DC2u; IF(0x0C0B6DC0u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B6DC2u); }  /* 0C0B6DBE jsr @Rn */
L_0C0B6DC2: BLKS(0x0C0B6DC2u);
	{ IF(0x0C0B6DC4u); ; /* slot nop */ UPD(0x0C0B6304u, 3); goto L_0C0B6304; }  /* 0C0B6DC2 bra */
L_0C0B6DD0: BLKS(0x0C0B6DD0u);
	r12 = 0xC0A8B50u; UPD(0x0C0B6DD2u, 1);  /* 0C0B6DD0 mov.l @(disp,pc),Rn */
	IF(0x0C0B6DD2u); { u32 t_ = r12; PR = 0x0C0B6DD6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B6DD6u); }  /* 0C0B6DD2 jsr @Rn */
L_0C0B6DD6: BLKS(0x0C0B6DD6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6DD6 exts.w Rm,Rn */
	IF(0x0C0B6DD8u); T = (s32)r11 >= 0;  /* 0C0B6DD8 cmp/pz Rn */
	if (T) { UPD(0x0C0B6DE0u, 5); goto L_0C0B6DE0; }  /* 0C0B6DDA bt */
L_0C0B6DDC: BLKS(0x0C0B6DDCu);
	{ IF(0x0C0B6DDEu); ; /* slot nop */ UPD(0x0C0B5EF0u, 3); goto L_0C0B5EF0; }  /* 0C0B6DDC bra */
L_0C0B6DE0: BLKS(0x0C0B6DE0u);
	r2 = 0xB4u; UPD(0x0C0B6DE2u, 1);  /* 0C0B6DE0 mov.w @(disp,pc),Rn */
	IF(0x0C0B6DE2u); MACL = r10 * r2;  /* 0C0B6DE2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B6DE6u, 3);  /* 0C0B6DE4 mov.l @(disp,pc),Rn */
	IF(0x0C0B6DE6u); r5 = MACL;  /* 0C0B6DE6 sts macl,Rn */
	r5 += r0;  /* 0C0B6DE8 add Rm,Rn */
	r3 = R32(r5); UPD(0x0C0B6DECu, 3);  /* 0C0B6DEA mov.l @Rm,Rn */
	IF(0x0C0B6DECu); MACL = r11 * r2;  /* 0C0B6DEC mul.l Rm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C0B6DF0u, 3);  /* 0C0B6DEE mov.l @(disp,pc),Rn */
	r3 &= r6;  /* 0C0B6DF0 and Rm,Rn */
	W32(r5, r3); UPD(0x0C0B6DF4u, 2);  /* 0C0B6DF2 mov.l Rm,@Rn */
	IF(0x0C0B6DF4u); r4 = MACL;  /* 0C0B6DF4 sts macl,Rn */
	r4 += r0;  /* 0C0B6DF6 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C0B6DFAu, 3);  /* 0C0B6DF8 mov.l @Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B6DFCu, 1);  /* 0C0B6DFA mov.l @(disp,Rm),Rn */
	r1 = 0x13000000u; UPD(0x0C0B6DFEu, 1);  /* 0C0B6DFC mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0B6DFE add #imm,Rn */
	r11 = R32(r4 + 0x24u); UPD(0x0C0B6E02u, 2);  /* 0C0B6E00 mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C0B6E02 and Rm,Rn */
	r13 = R32(r4 + 0x28u); UPD(0x0C0B6E06u, 2);  /* 0C0B6E04 mov.l @(disp,Rm),Rn */
	r3 |= r8;  /* 0C0B6E06 or Rm,Rn */
	r7 = R32(r5 + 0x2Cu); UPD(0x0C0B6E0Au, 2);  /* 0C0B6E08 mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0B6E0A and #imm,r0 */
	r9 = R32(r5 + 0x30u); UPD(0x0C0B6E0Eu, 2);  /* 0C0B6E0C mov.l @(disp,Rm),Rn */
	r11 += r7;  /* 0C0B6E0E add Rm,Rn */
	r13 += r9;  /* 0C0B6E10 add Rm,Rn */
	W32(r5 + 0x24u, r11); UPD(0x0C0B6E14u, 3);  /* 0C0B6E12 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r13); UPD(0x0C0B6E16u, 1);  /* 0C0B6E14 mov.l Rm,@(disp,Rn) */
	W32(r5, r3); UPD(0x0C0B6E18u, 1);  /* 0C0B6E16 mov.l Rm,@Rn */
	r1 = 0xFFFFEFB0u; UPD(0x0C0B6E1Au, 1);  /* 0C0B6E18 mov.w @(disp,pc),Rn */
	IF(0x0C0B6E1Au); { u32 tv_ = (r1 + 0x0C0B6E1Eu); u32 t_ = PHYS(tv_); W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DCEu: goto L_0C0B5DCE; default: JUMPD(tv_); } }  /* 0C0B6E1A braf Rn */
L_0C0B6E20: BLKS(0x0C0B6E20u);
	r0 = 0xC0A8B50u; UPD(0x0C0B6E22u, 1);  /* 0C0B6E20 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B61E4u, 3); goto L_0C0B61E4; }  /* 0C0B6E22 bra */
L_0C0B6E70: BLKS(0x0C0B6E70u);
	r8 = 0xC0A8B50u; UPD(0x0C0B6E72u, 1);  /* 0C0B6E70 mov.l @(disp,pc),Rn */
	IF(0x0C0B6E72u); { u32 t_ = r8; PR = 0x0C0B6E76u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B6E76u); }  /* 0C0B6E72 jsr @Rn */
L_0C0B6E76: BLKS(0x0C0B6E76u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B6E76 exts.w Rm,Rn */
	IF(0x0C0B6E78u); T = (s32)r11 >= 0;  /* 0C0B6E78 cmp/pz Rn */
	if (T) { UPD(0x0C0B6E80u, 5); goto L_0C0B6E80; }  /* 0C0B6E7A bt */
L_0C0B6E7C: BLKS(0x0C0B6E7Cu);
	{ IF(0x0C0B6E7Eu); ; /* slot nop */ UPD(0x0C0B6FC0u, 3); goto L_0C0B6FC0; }  /* 0C0B6E7C bra */
L_0C0B6E80: BLKS(0x0C0B6E80u);
	r6 = 0xB4u; UPD(0x0C0B6E82u, 1);  /* 0C0B6E80 mov.w @(disp,pc),Rn */
	IF(0x0C0B6E82u); MACL = r10 * r6;  /* 0C0B6E82 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B6E86u, 3);  /* 0C0B6E84 mov.l @(disp,pc),Rn */
	IF(0x0C0B6E86u); r9 = MACL;  /* 0C0B6E86 sts macl,Rn */
	r9 += r5;  /* 0C0B6E88 add Rm,Rn */
	r4 = R32(r9); UPD(0x0C0B6E8Cu, 3);  /* 0C0B6E8A mov.l @Rm,Rn */
	IF(0x0C0B6E8Cu); MACL = r11 * r6;  /* 0C0B6E8C mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C0B6E90u, 3);  /* 0C0B6E8E mov.l @(disp,pc),Rn */
	r4 &= r2;  /* 0C0B6E90 and Rm,Rn */
	W32(r9, r4); UPD(0x0C0B6E94u, 2);  /* 0C0B6E92 mov.l Rm,@Rn */
	IF(0x0C0B6E94u); r0 = MACL;  /* 0C0B6E94 sts macl,Rn */
	r0 += r5;  /* 0C0B6E96 add Rm,Rn */
	r11 = R32(r0); UPD(0x0C0B6E9Au, 3);  /* 0C0B6E98 mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C0B6E9Cu, 1);  /* 0C0B6E9A mov.l @(disp,pc),Rn */
	r13 = R32(r0 + 0x24u); UPD(0x0C0B6E9Eu, 1);  /* 0C0B6E9C mov.l @(disp,Rm),Rn */
	r11 &= r7;  /* 0C0B6E9E and Rm,Rn */
	r3 = R32(r0 + 0x28u); UPD(0x0C0B6EA2u, 2);  /* 0C0B6EA0 mov.l @(disp,Rm),Rn */
	r4 |= r11;  /* 0C0B6EA2 or Rm,Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C0B6EA6u, 2);  /* 0C0B6EA4 mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0B6EA8u, 1);  /* 0C0B6EA6 mov.l @(disp,Rm),Rn */
	r13 += r12;  /* 0C0B6EA8 add Rm,Rn */
	r3 += r1;  /* 0C0B6EAA add Rm,Rn */
	W32(r9 + 0x24u, r13); UPD(0x0C0B6EAEu, 3);  /* 0C0B6EAC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r3); UPD(0x0C0B6EB0u, 1);  /* 0C0B6EAE mov.l Rm,@(disp,Rn) */
	W32(r9, r4); UPD(0x0C0B6EB2u, 1);  /* 0C0B6EB0 mov.l Rm,@Rn */
	r9 += 0x7Eu;  /* 0C0B6EB2 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B6EB6u, 2);  /* 0C0B6EB4 mov.w @Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C0B6EB6 add #imm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B6EBAu, 2);  /* 0C0B6EB8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C0B6EBA cmp/eq #imm,r0 */
	{ u32 c_ = T; r8 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B6F40u, 4); goto L_0C0B6F40; } goto L_0C0B6EC0; }  /* 0C0B6EBC bt/s */
L_0C0B6EC0: BLKS(0x0C0B6EC0u);
	T = (s32)r0 > (s32)r8;  /* 0C0B6EC0 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B6F30u, 5); goto L_0C0B6F30; } goto L_0C0B6EC6; }  /* 0C0B6EC2 bt/s */
L_0C0B6EC6: BLKS(0x0C0B6EC6u);
	T = (r0 & r0) == 0;  /* 0C0B6EC6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B6ECAu); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B6F00u, 6); goto L_0C0B6F00; } UPD(0x0C0B6ECCu, 2); goto L_0C0B6ECC; }  /* 0C0B6EC8 bt/s */
L_0C0B6ECC: BLKS(0x0C0B6ECCu);
	r3 = 0xB4u; UPD(0x0C0B6ECEu, 1);  /* 0C0B6ECC mov.w @(disp,pc),Rn */
	r9 = 0x2u;  /* 0C0B6ECE mov #imm,Rn */
	IF(0x0C0B6ED0u); MACL = r10 * r3;  /* 0C0B6ED0 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B6ED4u, 4);  /* 0C0B6ED2 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B6ED6u, 1);  /* 0C0B6ED4 mov.w @(disp,pc),Rn */
	IF(0x0C0B6ED6u); r3 = MACL;  /* 0C0B6ED6 sts macl,Rn */
	r3 += r12;  /* 0C0B6ED8 add Rm,Rn */
	IF(0x0C0B6EDAu); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B6EDCu, 3);  /* 0C0B6EDA mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C0B6EDC add #imm,Rn */
	r2 = r13 & 0xFF;  /* 0C0B6EDE extu.b Rm,Rn */
	T = r2 > r9;  /* 0C0B6EE0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B6EE4u); W8(r0 + r3, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B6F66u, 6); goto L_0C0B6F66; } UPD(0x0C0B6EE6u, 1); goto L_0C0B6EE6; }  /* 0C0B6EE2 bf/s */
L_0C0B6EE6: BLKS(0x0C0B6EE6u);
	r8 = 0x0u;  /* 0C0B6EE6 mov #imm,Rn */
	IF(0x0C0B6EE8u); W8(r0 + r3, r8); UPD(0x0C0B6EEAu, 2);  /* 0C0B6EE8 mov.b Rm,@(r0,Rn) */
L_0C0B6EEA: BLKS(0x0C0B6EEAu);
	r0 = 0x88u; UPD(0x0C0B6EECu, 1);  /* 0C0B6EEA mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0B6EEEu, 1);  /* 0C0B6EEC mov.l @(disp,Rm),Rn */
	IF(0x0C0B6EEEu); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B6EF0u, 1);  /* 0C0B6EEE mov.w @(r0,Rm),Rn */
	r4 = 0xFFFFEFF4u; UPD(0x0C0B6EF2u, 1);  /* 0C0B6EF0 mov.w @(disp,pc),Rn */
	IF(0x0C0B6EF2u); { u32 tv_ = (r4 + 0x0C0B6EF6u); u32 t_ = PHYS(tv_); r1 += r13; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EEAu: goto L_0C0B5EEA; default: JUMPD(tv_); } }  /* 0C0B6EF2 braf Rn */
L_0C0B6F00: BLKS(0x0C0B6F00u);
	r4 = 0xA0u; UPD(0x0C0B6F02u, 1);  /* 0C0B6F00 mov.w @(disp,pc),Rn */
	IF(0x0C0B6F02u); r11 = MACL;  /* 0C0B6F02 sts macl,Rn */
	r11 += r5;  /* 0C0B6F04 add Rm,Rn */
	r11 += r4;  /* 0C0B6F06 add Rm,Rn */
	r4 += r9;  /* 0C0B6F08 add Rm,Rn */
	r11 += 0x3u;  /* 0C0B6F0A add #imm,Rn */
	r4 += 0x1u;  /* 0C0B6F0C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B6F10u, 7);  /* 0C0B6F0E mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B6F12u, 1);  /* 0C0B6F10 mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C0B6F12 tst Rm,Rn */
	if (T) { UPD(0x0C0B6F66u, 4); goto L_0C0B6F66; }  /* 0C0B6F14 bt */
L_0C0B6F16: BLKS(0x0C0B6F16u);
	r0 = 0xC0C2110u; UPD(0x0C0B6F18u, 1);  /* 0C0B6F16 mov.l @(disp,pc),Rn */
	IF(0x0C0B6F18u); { u32 t_ = r0; PR = 0x0C0B6F1Cu; r4 = 0x75u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B6F1Cu); }  /* 0C0B6F18 jsr @Rn */
L_0C0B6F1C: BLKS(0x0C0B6F1Cu);
	r0 = 0x88u; UPD(0x0C0B6F1Eu, 1);  /* 0C0B6F1C mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C0B6F1E mov #imm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C0B6F22u, 2);  /* 0C0B6F20 mov.l @(disp,Rm),Rn */
	IF(0x0C0B6F22u); W16(r0 + r9, r7); UPD(0x0C0B6F24u, 1);  /* 0C0B6F22 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0B6F24 add #imm,Rn */
	UPD(0x0C0B6F26u, 1);
L_0C0B6F26: BLKS(0x0C0B6F26u);
	r4 = 0xFFFFEEA2u; UPD(0x0C0B6F28u, 1);  /* 0C0B6F26 mov.w @(disp,pc),Rn */
	IF(0x0C0B6F28u); { u32 tv_ = (r4 + 0x0C0B6F2Cu); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DCEu: goto L_0C0B5DCE; default: JUMPD(tv_); } }  /* 0C0B6F28 braf Rn */
L_0C0B6F30: BLKS(0x0C0B6F30u);
	if (T) { UPD(0x0C0B6F66u, 3); goto L_0C0B6F66; }  /* 0C0B6F30 bt */
L_0C0B6F32: BLKS(0x0C0B6F32u);
	{ IF(0x0C0B6F34u); ; /* slot nop */ UPD(0x0C0B6ECCu, 3); goto L_0C0B6ECC; }  /* 0C0B6F32 bra */
L_0C0B6F40: BLKS(0x0C0B6F40u);
	IF(0x0C0B6F40u); MACL = r11 * r6;  /* 0C0B6F40 mul.l Rm,Rn */
	r4 = 0xA0u; UPD(0x0C0B6F44u, 3);  /* 0C0B6F42 mov.w @(disp,pc),Rn */
	IF(0x0C0B6F44u); r1 = MACL;  /* 0C0B6F44 sts macl,Rn */
	r1 += r5;  /* 0C0B6F46 add Rm,Rn */
	r1 += r4;  /* 0C0B6F48 add Rm,Rn */
	r4 += r9;  /* 0C0B6F4A add Rm,Rn */
	r1 += 0x3u;  /* 0C0B6F4C add #imm,Rn */
	r4 += 0x1u;  /* 0C0B6F4E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B6F52u, 7);  /* 0C0B6F50 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B6F54u, 1);  /* 0C0B6F52 mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C0B6F54 tst Rm,Rn */
	if (T) { UPD(0x0C0B6FB0u, 4); goto L_0C0B6FB0; }  /* 0C0B6F56 bt */
L_0C0B6F58: BLKS(0x0C0B6F58u);
	r4 = r10;  /* 0C0B6F58 mov Rm,Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C0B6F5Cu, 2);  /* 0C0B6F5A mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B6F5C mov #imm,Rn */
	IF(0x0C0B6F5Eu); { u32 t_ = r10; PR = 0x0C0B6F62u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B6F62u); }  /* 0C0B6F5E jsr @Rn */
L_0C0B6F62: BLKS(0x0C0B6F62u);
	T = (r0 & r0) == 0;  /* 0C0B6F62 tst Rm,Rn */
	if (!T) { UPD(0x0C0B6F6Eu, 4); goto L_0C0B6F6E; }  /* 0C0B6F64 bf */
L_0C0B6F66: BLKS(0x0C0B6F66u);
	r13 = 0xFFFFED5Au; UPD(0x0C0B6F68u, 1);  /* 0C0B6F66 mov.w @(disp,pc),Rn */
	IF(0x0C0B6F68u); { u32 tv_ = (r13 + 0x0C0B6F6Cu); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B6F68 braf Rn */
L_0C0B6F6E: BLKS(0x0C0B6F6Eu);
	r10 = 0xC062780u; UPD(0x0C0B6F70u, 1);  /* 0C0B6F6E mov.l @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0B6F72u, 1);  /* 0C0B6F70 mov.l @(disp,pc),Rn */
	IF(0x0C0B6F72u); { u32 t_ = r10; PR = 0x0C0B6F76u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B6F76u); }  /* 0C0B6F72 jsr @Rn */
L_0C0B6F76: BLKS(0x0C0B6F76u);
	r6 = 0xFFFFFFFEu;  /* 0C0B6F76 mov #imm,Rn */
	r3 = 0xC9u; UPD(0x0C0B6F7Au, 2);  /* 0C0B6F78 mov.w @(disp,pc),Rn */
	r0 &= r6;  /* 0C0B6F7A and Rm,Rn */
	r0 += r3;  /* 0C0B6F7C add Rm,Rn */
	r11 = 0x100000u; UPD(0x0C0B6F80u, 3);  /* 0C0B6F7E mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0B6F80 exts.w Rm,Rn */
	r4 = r12;  /* 0C0B6F82 mov Rm,Rn */
	IF(0x0C0B6F84u); { u32 t_ = r8; PR = 0x0C0B6F88u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B6F88u); }  /* 0C0B6F84 jsr @Rn */
L_0C0B6F88: BLKS(0x0C0B6F88u);
	r2 = R32(r9 + 0x24u); UPD(0x0C0B6F8Au, 1);  /* 0C0B6F88 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0B6F8A mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0B6F8Eu, 2);  /* 0C0B6F8C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0B6F8E add Rm,Rn */
	r2 += r11;  /* 0C0B6F90 add Rm,Rn */
	r5 = r11;  /* 0C0B6F92 mov Rm,Rn */
	IF(0x0C0B6F94u); { u32 t_ = r13; PR = 0x0C0B6F98u; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B6F98u); }  /* 0C0B6F94 jsr @Rn */
L_0C0B6F98: BLKS(0x0C0B6F98u);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B6F9Au, 1);  /* 0C0B6F98 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B6F9A add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C0B6F9Eu, 2);  /* 0C0B6F9C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B6F9E add Rm,Rn */
	W32(r15, r7); UPD(0x0C0B6FA2u, 2);  /* 0C0B6FA0 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0B6FA2 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0B6FA6u, 2);  /* 0C0B6FA4 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BB1A0u; UPD(0x0C0B6FA8u, 1);  /* 0C0B6FA6 mov.l @(disp,pc),Rn */
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C0B699Au, 3); goto L_0C0B699A; }  /* 0C0B6FA8 bra */
L_0C0B6FB0: BLKS(0x0C0B6FB0u);
	r0 = 0x88u; UPD(0x0C0B6FB2u, 1);  /* 0C0B6FB0 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0B6FB2 mov #imm,Rn */
	IF(0x0C0B6FB4u); W16(r0 + r9, r11); UPD(0x0C0B6FB6u, 2);  /* 0C0B6FB4 mov.w Rm,@(r0,Rn) */
	{ r1 = 0x6u; /* slot mov #imm,Rn */ UPD(0x0C0B6F26u, 3); goto L_0C0B6F26; }  /* 0C0B6FB6 bra */
L_0C0B6FC0: BLKS(0x0C0B6FC0u);
	r0 = 0xB4u; UPD(0x0C0B6FC2u, 1);  /* 0C0B6FC0 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B6FC2 mov #imm,Rn */
	IF(0x0C0B6FC4u); MACL = r10 * r0;  /* 0C0B6FC4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B6FC8u, 4);  /* 0C0B6FC6 mov.l @(disp,pc),Rn */
	IF(0x0C0B6FC8u); r0 = MACL;  /* 0C0B6FC8 sts macl,Rn */
	IF(0x0C0B6FCAu); W32(r0 + r5, r4); UPD(0x0C0B6FCCu, 2);  /* 0C0B6FCA mov.l Rm,@(r0,Rn) */
L_0C0B6FCC: BLKS(0x0C0B6FCCu);
	r13 = 0xFFFFECF4u; UPD(0x0C0B6FCEu, 1);  /* 0C0B6FCC mov.w @(disp,pc),Rn */
	IF(0x0C0B6FCEu); { u32 tv_ = (r13 + 0x0C0B6FD2u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B6FCE braf Rn */
L_0C0B7010: BLKS(0x0C0B7010u);
	r11 = 0xC0A8B50u; UPD(0x0C0B7012u, 1);  /* 0C0B7010 mov.l @(disp,pc),Rn */
	IF(0x0C0B7012u); { u32 t_ = r11; PR = 0x0C0B7016u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B7016u); }  /* 0C0B7012 jsr @Rn */
L_0C0B7016: BLKS(0x0C0B7016u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7016 exts.w Rm,Rn */
	IF(0x0C0B7018u); T = (s32)r11 >= 0;  /* 0C0B7018 cmp/pz Rn */
	if (T) { UPD(0x0C0B7024u, 5); goto L_0C0B7024; }  /* 0C0B701A bt */
L_0C0B701C: BLKS(0x0C0B701Cu);
	r1 = 0xFFFFEECEu; UPD(0x0C0B701Eu, 1);  /* 0C0B701C mov.w @(disp,pc),Rn */
	IF(0x0C0B701Eu); { u32 tv_ = (r1 + 0x0C0B7022u); u32 t_ = PHYS(tv_); IF(0x0C0B7020u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B701E braf Rn */
L_0C0B7024: BLKS(0x0C0B7024u);
	r2 = 0xB4u; UPD(0x0C0B7026u, 1);  /* 0C0B7024 mov.w @(disp,pc),Rn */
	IF(0x0C0B7026u); MACL = r10 * r2;  /* 0C0B7026 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B702Au, 3);  /* 0C0B7028 mov.l @(disp,pc),Rn */
	IF(0x0C0B702Au); r0 = MACL;  /* 0C0B702A sts macl,Rn */
	r0 += r13;  /* 0C0B702C add Rm,Rn */
	r9 = R32(r0); UPD(0x0C0B7030u, 3);  /* 0C0B702E mov.l @Rm,Rn */
	IF(0x0C0B7030u); MACL = r11 * r2;  /* 0C0B7030 mul.l Rm,Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C0B7034u, 3);  /* 0C0B7032 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0B7034 and Rm,Rn */
	W32(r0, r9); UPD(0x0C0B7038u, 2);  /* 0C0B7036 mov.l Rm,@Rn */
	IF(0x0C0B7038u); r5 = MACL;  /* 0C0B7038 sts macl,Rn */
	r5 += r13;  /* 0C0B703A add Rm,Rn */
	r6 = R32(r5); UPD(0x0C0B703Eu, 3);  /* 0C0B703C mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C0B7040u, 1);  /* 0C0B703E mov.l @(disp,pc),Rn */
	r12 = R32(r0 + 0x2Cu); UPD(0x0C0B7042u, 1);  /* 0C0B7040 mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C0B7042 and Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C0B7046u, 2);  /* 0C0B7044 mov.l @(disp,Rm),Rn */
	r9 |= r6;  /* 0C0B7046 or Rm,Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C0B704Au, 2);  /* 0C0B7048 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C0B704A add Rm,Rn */
	r8 = R32(r0 + 0x30u); UPD(0x0C0B704Eu, 2);  /* 0C0B704C mov.l @(disp,Rm),Rn */
	r12 = 0x3u;  /* 0C0B704E mov #imm,Rn */
	r4 += r8;  /* 0C0B7050 add Rm,Rn */
	W32(r0 + 0x24u, r11); UPD(0x0C0B7054u, 3);  /* 0C0B7052 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C0B7056u, 1);  /* 0C0B7054 mov.l Rm,@(disp,Rn) */
	W32(r0, r9); UPD(0x0C0B7058u, 1);  /* 0C0B7056 mov.l Rm,@Rn */
	r0 += 0x7Eu;  /* 0C0B7058 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B705Cu, 2);  /* 0C0B705A mov.w @Rm,Rn */
	r3 = 0x9Fu; UPD(0x0C0B705Eu, 1);  /* 0C0B705C mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B705E add #imm,Rn */
	IF(0x0C0B7060u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B7062u, 2);  /* 0C0B7060 mov.b @(r0,Rm),Rn */
	r2 = r13 & 0xFF;  /* 0C0B7062 extu.b Rm,Rn */
	T = r2 > r12;  /* 0C0B7064 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B6FCCu, 5); goto L_0C0B6FCC; }  /* 0C0B7066 bt */
L_0C0B7068: BLKS(0x0C0B7068u);
	r0 = 0xC0B7088u;  /* 0C0B7068 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B706A add Rm,Rn */
	IF(0x0C0B706Cu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B706Eu, 3);  /* 0C0B706C mov.w @(r0,Rm),Rn */
	IF(0x0C0B706Eu); { u32 tv_ = (r3 + 0x0C0B7072u); u32 t_ = PHYS(tv_); IF(0x0C0B7070u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B7090u: goto L_0C0B7090; case 0x0C0B70E0u: goto L_0C0B70E0; case 0x0C0B7120u: goto L_0C0B7120; case 0x0C0B71D0u: goto L_0C0B71D0; default: JUMPD(tv_); } }  /* 0C0B706E braf Rn */
L_0C0B7090: BLKS(0x0C0B7090u);
	r5 = 0xB4u; UPD(0x0C0B7092u, 1);  /* 0C0B7090 mov.w @(disp,pc),Rn */
	IF(0x0C0B7092u); MACL = r11 * r5;  /* 0C0B7092 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B7096u, 3);  /* 0C0B7094 mov.l @(disp,pc),Rn */
	IF(0x0C0B7096u); r6 = MACL;  /* 0C0B7096 sts macl,Rn */
	IF(0x0C0B7098u); MACL = r10 * r5;  /* 0C0B7098 mul.l Rm,Rn */
	r9 = 0xA0u; UPD(0x0C0B709Cu, 4);  /* 0C0B709A mov.w @(disp,pc),Rn */
	r6 += r1;  /* 0C0B709C add Rm,Rn */
	IF(0x0C0B709Eu); r3 = MACL;  /* 0C0B709E sts macl,Rn */
	r6 += r9;  /* 0C0B70A0 add Rm,Rn */
	r3 += r1;  /* 0C0B70A2 add Rm,Rn */
	r9 += r3;  /* 0C0B70A4 add Rm,Rn */
	r6 += 0x3u;  /* 0C0B70A6 add #imm,Rn */
	r9 += 0x1u;  /* 0C0B70A8 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B70ACu, 8);  /* 0C0B70AA mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B70AEu, 1);  /* 0C0B70AC mov.b @Rm,Rn */
	T = (r10 & r0) == 0;  /* 0C0B70AE tst Rm,Rn */
	if (T) { UPD(0x0C0B70D8u, 4); goto L_0C0B70D8; }  /* 0C0B70B0 bt */
L_0C0B70B2: BLKS(0x0C0B70B2u);
	r12 = R32(r3 + 0x30u); UPD(0x0C0B70B4u, 1);  /* 0C0B70B2 mov.l @(disp,Rm),Rn */
	r3 += 0x50u;  /* 0C0B70B4 add #imm,Rn */
	IF(0x0C0B70B6u); T = (s32)r12 > 0;  /* 0C0B70B6 cmp/pl Rn */
	W32(r3, r12); UPD(0x0C0B70BAu, 3);  /* 0C0B70B8 mov.l Rm,@Rn */
	IF(0x0C0B70BAu); r0 = T;  /* 0C0B70BA movt Rn */
	r11 = 0xC1E961Cu; UPD(0x0C0B70BEu, 2);  /* 0C0B70BC mov.l @(disp,pc),Rn */
	IF(0x0C0B70BEu); r0 <<= 2;  /* 0C0B70BE shll2 Rn */
	r3 += 0xFFFFFFB0u;  /* 0C0B70C0 add #imm,Rn */
	IF(0x0C0B70C2u); r8 = R32(r0 + r11); UPD(0x0C0B70C4u, 3);  /* 0C0B70C2 mov.l @(r0,Rm),Rn */
	r7 = R32(r3); UPD(0x0C0B70C6u, 1);  /* 0C0B70C4 mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C0B70C8u, 1);  /* 0C0B70C6 mov.w @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C0B70CAu, 1);  /* 0C0B70C8 mov.w @(disp,pc),Rn */
	r7 &= r4;  /* 0C0B70CA and Rm,Rn */
	IF(0x0C0B70CCu); W32(r0 + r3, r8); UPD(0x0C0B70CEu, 2);  /* 0C0B70CC mov.l Rm,@(r0,Rn) */
	W32(r3, r7); UPD(0x0C0B70D0u, 1);  /* 0C0B70CE mov.l Rm,@Rn */
L_0C0B70D0: BLKS(0x0C0B70D0u);
	r0 += 0x13u;  /* 0C0B70D0 add #imm,Rn */
	IF(0x0C0B70D2u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B70D4u, 2);  /* 0C0B70D2 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0B70D4 add #imm,Rn */
	IF(0x0C0B70D6u); W8(r0 + r3, r5); UPD(0x0C0B70D8u, 2);  /* 0C0B70D6 mov.b Rm,@(r0,Rn) */
L_0C0B70D8: BLKS(0x0C0B70D8u);
	r13 = 0xFFFFEBE8u; UPD(0x0C0B70DAu, 1);  /* 0C0B70D8 mov.w @(disp,pc),Rn */
	IF(0x0C0B70DAu); { u32 tv_ = (r13 + 0x0C0B70DEu); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B70DA braf Rn */
L_0C0B70E0: BLKS(0x0C0B70E0u);
	r6 = 0xB4u; UPD(0x0C0B70E2u, 1);  /* 0C0B70E0 mov.w @(disp,pc),Rn */
	IF(0x0C0B70E2u); MACL = r10 * r6;  /* 0C0B70E2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B70E6u, 3);  /* 0C0B70E4 mov.l @(disp,pc),Rn */
	IF(0x0C0B70E6u); r7 = MACL;  /* 0C0B70E6 sts macl,Rn */
	r7 += r0;  /* 0C0B70E8 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0B70ECu, 3);  /* 0C0B70EA mov.w @(disp,pc),Rn */
	r2 = R32(r7 + 0x30u); UPD(0x0C0B70EEu, 1);  /* 0C0B70EC mov.l @(disp,Rm),Rn */
	IF(0x0C0B70EEu); r9 = R32(r0 + r7); UPD(0x0C0B70F0u, 1);  /* 0C0B70EE mov.l @(r0,Rm),Rn */
	r2 += r9;  /* 0C0B70F0 add Rm,Rn */
	IF(0x0C0B70F2u); T = (s32)r2 > 0;  /* 0C0B70F2 cmp/pl Rn */
	W32(r7 + 0x30u, r2); UPD(0x0C0B70F6u, 3);  /* 0C0B70F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B70F6u); r0 = T;  /* 0C0B70F6 movt Rn */
	r10 = 0xC1E9624u; UPD(0x0C0B70FAu, 2);  /* 0C0B70F8 mov.l @(disp,pc),Rn */
	r7 += 0x50u;  /* 0C0B70FA add #imm,Rn */
	IF(0x0C0B70FCu); r0 <<= 2;  /* 0C0B70FC shll2 Rn */
	r13 = R32(r7); UPD(0x0C0B7100u, 3);  /* 0C0B70FE mov.l @Rm,Rn */
	IF(0x0C0B7100u); r3 = R32(r0 + r10); UPD(0x0C0B7102u, 1);  /* 0C0B7100 mov.l @(r0,Rm),Rn */
	r13 += r3;  /* 0C0B7102 add Rm,Rn */
	T = r2 == r13;  /* 0C0B7104 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B70D8u, 5); goto L_0C0B70D8; } goto L_0C0B710A; }  /* 0C0B7106 bf/s */
L_0C0B710A: BLKS(0x0C0B710Au);
	r0 = 0x9Fu; UPD(0x0C0B710Cu, 2);  /* 0C0B710A mov.w @(disp,pc),Rn */
	IF(0x0C0B710Cu); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B710Eu, 1);  /* 0C0B710C mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0B710E add #imm,Rn */
	IF(0x0C0B7110u); W8(r0 + r7, r5); UPD(0x0C0B7112u, 2);  /* 0C0B7110 mov.b Rm,@(r0,Rn) */
L_0C0B7112: BLKS(0x0C0B7112u);
	r13 = 0xFFFFEBAEu; UPD(0x0C0B7114u, 1);  /* 0C0B7112 mov.w @(disp,pc),Rn */
	IF(0x0C0B7114u); { u32 tv_ = (r13 + 0x0C0B7118u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7114 braf Rn */
L_0C0B7120: BLKS(0x0C0B7120u);
	r5 = 0xB4u; UPD(0x0C0B7122u, 1);  /* 0C0B7120 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C0B7122 mov #imm,Rn */
	IF(0x0C0B7124u); MACL = r10 * r5;  /* 0C0B7124 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B7128u, 4);  /* 0C0B7126 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B712Au, 1);  /* 0C0B7128 mov.w @(disp,pc),Rn */
	IF(0x0C0B712Au); r3 = MACL;  /* 0C0B712A sts macl,Rn */
	r3 += r6;  /* 0C0B712C add Rm,Rn */
	IF(0x0C0B712Eu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B7130u, 3);  /* 0C0B712E mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C0B7130 add #imm,Rn */
	r4 = r8 & 0xFF;  /* 0C0B7132 extu.b Rm,Rn */
	T = r4 > r7;  /* 0C0B7134 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B7138u); W8(r0 + r3, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B7112u, 6); goto L_0C0B7112; } UPD(0x0C0B713Au, 1); goto L_0C0B713A; }  /* 0C0B7136 bf/s */
L_0C0B713A: BLKS(0x0C0B713Au);
	r12 = 0x0u;  /* 0C0B713A mov #imm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0B713Eu, 2);  /* 0C0B713C mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B713E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B7142u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B71A0u, 4); goto L_0C0B71A0; } UPD(0x0C0B7144u, 1); goto L_0C0B7144; }  /* 0C0B7140 bt/s */
L_0C0B7144: BLKS(0x0C0B7144u);
	IF(0x0C0B7144u); T = (s32)r2 >= 0;  /* 0C0B7144 cmp/pz Rn */
	if (!T) { UPD(0x0C0B7112u, 4); goto L_0C0B7112; }  /* 0C0B7146 bf */
L_0C0B7148: BLKS(0x0C0B7148u);
	r11 = 0x8u;  /* 0C0B7148 mov #imm,Rn */
	T = (s32)r2 > (s32)r11;  /* 0C0B714A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B7112u, 5); goto L_0C0B7112; }  /* 0C0B714C bt */
L_0C0B714E: BLKS(0x0C0B714Eu);
	r8 = 0xB4u; UPD(0x0C0B7150u, 1);  /* 0C0B714E mov.w @(disp,pc),Rn */
	IF(0x0C0B7150u); MACL = r10 * r8;  /* 0C0B7150 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B7154u, 3);  /* 0C0B7152 mov.l @(disp,pc),Rn */
	IF(0x0C0B7154u); r8 = MACL;  /* 0C0B7154 sts macl,Rn */
	r8 += r4;  /* 0C0B7156 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0B715Au, 3);  /* 0C0B7158 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B715A mov Rm,Rn */
	r7 = 0xC1E962Cu; UPD(0x0C0B715Eu, 2);  /* 0C0B715C mov.l @(disp,pc),Rn */
	IF(0x0C0B715Eu); r0 <<= 2;  /* 0C0B715E shll2 Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B7162u, 2);  /* 0C0B7160 mov.l @(disp,pc),Rn */
	IF(0x0C0B7162u); r3 = R32(r0 + r7); UPD(0x0C0B7164u, 1);  /* 0C0B7162 mov.l @(r0,Rm),Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C0B7166u, 1);  /* 0C0B7164 mov.l @(disp,pc),Rn */
	IF(0x0C0B7166u); { u32 t_ = r11; PR = 0x0C0B716Au; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B716Au); }  /* 0C0B7166 jsr @Rn */
L_0C0B716A: BLKS(0x0C0B716Au);
	r4 = r10;  /* 0C0B716A mov Rm,Rn */
	r5 = 0xAu;  /* 0C0B716C mov #imm,Rn */
	IF(0x0C0B716Eu); { u32 t_ = r12; PR = 0x0C0B7172u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B7172u); }  /* 0C0B716E jsr @Rn */
L_0C0B7172: BLKS(0x0C0B7172u);
	T = (r0 & r0) == 0;  /* 0C0B7172 tst Rm,Rn */
	if (T) { UPD(0x0C0B7112u, 4); goto L_0C0B7112; }  /* 0C0B7174 bt */
L_0C0B7176: BLKS(0x0C0B7176u);
	r0 = R32(r8 + 0x30u); UPD(0x0C0B7178u, 1);  /* 0C0B7176 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B7178 add #imm,Rn */
	IF(0x0C0B717Au); T = (s32)r0 >= 0;  /* 0C0B717A cmp/pz Rn */
	IF(0x0C0B717Cu); r0 = T;  /* 0C0B717C movt Rn */
	r0 ^= 0x1u;  /* 0C0B717E xor #imm,r0 */
	r2 = 0xC1E9624u; UPD(0x0C0B7182u, 5);  /* 0C0B7180 mov.l @(disp,pc),Rn */
	IF(0x0C0B7182u); r0 <<= 2;  /* 0C0B7182 shll2 Rn */
	IF(0x0C0B7184u); r9 = R32(r0 + r2); UPD(0x0C0B7186u, 2);  /* 0C0B7184 mov.l @(r0,Rm),Rn */
	r13 = 0x14u;  /* 0C0B7186 mov #imm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B718Au, 2);  /* 0C0B7188 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B718Cu, 1);  /* 0C0B718A mov.l @(disp,Rm),Rn */
	r10 = 0xFFF20000u; UPD(0x0C0B718Eu, 1);  /* 0C0B718C mov.l @(disp,pc),Rn */
	r5 += r9;  /* 0C0B718E add Rm,Rn */
	r6 = 0x100u; UPD(0x0C0B7192u, 2);  /* 0C0B7190 mov.w @(disp,pc),Rn */
	r4 += r10;  /* 0C0B7192 add Rm,Rn */
	r7 = 0x38000u; UPD(0x0C0B7196u, 2);  /* 0C0B7194 mov.l @(disp,pc),Rn */
	r0 = 0xC072E70u; UPD(0x0C0B7198u, 1);  /* 0C0B7196 mov.l @(disp,pc),Rn */
	{ W32(r15, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0B699Au, 3); goto L_0C0B699A; }  /* 0C0B7198 bra */
L_0C0B71A0: BLKS(0x0C0B71A0u);
	IF(0x0C0B71A0u); MACL = r11 * r5;  /* 0C0B71A0 mul.l Rm,Rn */
	r0 = 0xA0u; UPD(0x0C0B71A4u, 3);  /* 0C0B71A2 mov.w @(disp,pc),Rn */
	IF(0x0C0B71A4u); r1 = MACL;  /* 0C0B71A4 sts macl,Rn */
	r1 += r6;  /* 0C0B71A6 add Rm,Rn */
	r1 += r0;  /* 0C0B71A8 add Rm,Rn */
	r0 += r3;  /* 0C0B71AA add Rm,Rn */
	r1 += 0x3u;  /* 0C0B71AC add #imm,Rn */
	r0 += 0x1u;  /* 0C0B71AE add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B71B2u, 7);  /* 0C0B71B0 mov.b @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B71B4u, 1);  /* 0C0B71B2 mov.b @Rm,Rn */
	T = (r9 & r13) == 0;  /* 0C0B71B4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B714Eu, 4); goto L_0C0B714E; }  /* 0C0B71B6 bf */
L_0C0B71B8: BLKS(0x0C0B71B8u);
	r6 = R32(r3 + 0x30u); UPD(0x0C0B71BAu, 1);  /* 0C0B71B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B71BAu); T = (s32)r6 > 0;  /* 0C0B71BA cmp/pl Rn */
	IF(0x0C0B71BCu); r0 = T;  /* 0C0B71BC movt Rn */
	r10 = 0xC1E961Cu; UPD(0x0C0B71C0u, 3);  /* 0C0B71BE mov.l @(disp,pc),Rn */
	IF(0x0C0B71C0u); r0 <<= 2;  /* 0C0B71C0 shll2 Rn */
	IF(0x0C0B71C2u); r2 = R32(r0 + r10); UPD(0x0C0B71C4u, 2);  /* 0C0B71C2 mov.l @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C0B71C6u, 1);  /* 0C0B71C4 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B71C8u); W32(r0 + r3, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B70D0u, 3); goto L_0C0B70D0; }  /* 0C0B71C6 bra */
L_0C0B71D0: BLKS(0x0C0B71D0u);
	r3 = 0xB4u; UPD(0x0C0B71D2u, 1);  /* 0C0B71D0 mov.w @(disp,pc),Rn */
	IF(0x0C0B71D2u); MACL = r10 * r3;  /* 0C0B71D2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B71D6u, 3);  /* 0C0B71D4 mov.l @(disp,pc),Rn */
	IF(0x0C0B71D6u); r3 = MACL;  /* 0C0B71D6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0B71DAu, 2);  /* 0C0B71D8 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C0B71DA add Rm,Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0B71DEu, 2);  /* 0C0B71DC mov.l @(disp,Rm),Rn */
	IF(0x0C0B71DEu); r12 = R32(r0 + r3); UPD(0x0C0B71E0u, 1);  /* 0C0B71DE mov.l @(r0,Rm),Rn */
	r5 -= r12;  /* 0C0B71E0 sub Rm,Rn */
	W32(r3 + 0x30u, r5); UPD(0x0C0B71E4u, 2);  /* 0C0B71E2 mov.l Rm,@(disp,Rn) */
	r3 += 0x50u;  /* 0C0B71E4 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C0B71E8u, 2);  /* 0C0B71E6 mov.l @Rm,Rn */
	T = r5 == r6;  /* 0C0B71E8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B71FEu, 4); goto L_0C0B71FE; } goto L_0C0B71EE; }  /* 0C0B71EA bf/s */
L_0C0B71EE: BLKS(0x0C0B71EEu);
	r7 = R32(r3); UPD(0x0C0B71F0u, 2);  /* 0C0B71EE mov.l @Rm,Rn */
	r0 = r3;  /* 0C0B71F0 mov Rm,Rn */
	r1 = 0x4000u; UPD(0x0C0B71F4u, 2);  /* 0C0B71F2 mov.w @(disp,pc),Rn */
	r2 = 0x9Fu; UPD(0x0C0B71F6u, 1);  /* 0C0B71F4 mov.w @(disp,pc),Rn */
	r7 |= r1;  /* 0C0B71F6 or Rm,Rn */
	W32(r3, r7); UPD(0x0C0B71FAu, 2);  /* 0C0B71F8 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C0B71FA mov #imm,Rn */
	IF(0x0C0B71FCu); W8(r0 + r2, r1); UPD(0x0C0B71FEu, 2);  /* 0C0B71FC mov.b Rm,@(r0,Rn) */
L_0C0B71FE: BLKS(0x0C0B71FEu);
	r13 = 0xFFFFEAC2u; UPD(0x0C0B7200u, 1);  /* 0C0B71FE mov.w @(disp,pc),Rn */
	IF(0x0C0B7200u); { u32 tv_ = (r13 + 0x0C0B7204u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7200 braf Rn */
L_0C0B7240: BLKS(0x0C0B7240u);
	r12 = 0xC0A8B50u; UPD(0x0C0B7242u, 1);  /* 0C0B7240 mov.l @(disp,pc),Rn */
	IF(0x0C0B7242u); { u32 t_ = r12; PR = 0x0C0B7246u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B7246u); }  /* 0C0B7242 jsr @Rn */
L_0C0B7246: BLKS(0x0C0B7246u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7246 exts.w Rm,Rn */
	IF(0x0C0B7248u); T = (s32)r11 >= 0;  /* 0C0B7248 cmp/pz Rn */
	if (T) { UPD(0x0C0B7250u, 5); goto L_0C0B7250; }  /* 0C0B724A bt */
L_0C0B724C: BLKS(0x0C0B724Cu);
	{ IF(0x0C0B724Eu); ; /* slot nop */ UPD(0x0C0B6FC0u, 3); goto L_0C0B6FC0; }  /* 0C0B724C bra */
L_0C0B7250: BLKS(0x0C0B7250u);
	r2 = 0xB4u; UPD(0x0C0B7252u, 1);  /* 0C0B7250 mov.w @(disp,pc),Rn */
	IF(0x0C0B7252u); MACL = r10 * r2;  /* 0C0B7252 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B7256u, 3);  /* 0C0B7254 mov.l @(disp,pc),Rn */
	IF(0x0C0B7256u); r8 = MACL;  /* 0C0B7256 sts macl,Rn */
	IF(0x0C0B7258u); MACL = r11 * r2;  /* 0C0B7258 mul.l Rm,Rn */
	r8 += r5;  /* 0C0B725A add Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C0B725Eu, 5);  /* 0C0B725C mov.l @(disp,Rm),Rn */
	IF(0x0C0B725Eu); r9 = MACL;  /* 0C0B725E sts macl,Rn */
	r9 += r5;  /* 0C0B7260 add Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C0B7264u, 3);  /* 0C0B7262 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0B7264 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0B7268u, 2);  /* 0C0B7266 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0x28u); UPD(0x0C0B726Au, 1);  /* 0C0B7268 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x30u); UPD(0x0C0B726Cu, 1);  /* 0C0B726A mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0B726Eu, 1);  /* 0C0B726C mov.l @(disp,Rm),Rn */
	r7 += r11;  /* 0C0B726E add Rm,Rn */
	r0 += 0x1u;  /* 0C0B7270 add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C0B7274u, 3);  /* 0C0B7272 mov.l Rm,@(disp,Rn) */
	{ r0 &= 0x7u; /* slot and #imm,r0 */ UPD(0x0C0B63D2u, 3); goto L_0C0B63D2; }  /* 0C0B7274 bra */
L_0C0B7280: BLKS(0x0C0B7280u);
	r8 = 0xC0A8B50u; UPD(0x0C0B7282u, 1);  /* 0C0B7280 mov.l @(disp,pc),Rn */
	IF(0x0C0B7282u); { u32 t_ = r8; PR = 0x0C0B7286u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B7286u); }  /* 0C0B7282 jsr @Rn */
L_0C0B7286: BLKS(0x0C0B7286u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7286 exts.w Rm,Rn */
	IF(0x0C0B7288u); T = (s32)r11 >= 0;  /* 0C0B7288 cmp/pz Rn */
	if (T) { UPD(0x0C0B7294u, 5); goto L_0C0B7294; }  /* 0C0B728A bt */
L_0C0B728C: BLKS(0x0C0B728Cu);
	r1 = 0xFFFFEC5Eu; UPD(0x0C0B728Eu, 1);  /* 0C0B728C mov.w @(disp,pc),Rn */
	IF(0x0C0B728Eu); { u32 tv_ = (r1 + 0x0C0B7292u); u32 t_ = PHYS(tv_); IF(0x0C0B7290u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B728E braf Rn */
L_0C0B7294: BLKS(0x0C0B7294u);
	r3 = 0xB4u; UPD(0x0C0B7296u, 1);  /* 0C0B7294 mov.w @(disp,pc),Rn */
	r4 = 0xDu;  /* 0C0B7296 mov #imm,Rn */
	IF(0x0C0B7298u); MACL = r10 * r3;  /* 0C0B7298 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B729Cu, 4);  /* 0C0B729A mov.l @(disp,pc),Rn */
	IF(0x0C0B729Cu); r13 = MACL;  /* 0C0B729C sts macl,Rn */
	r13 += r8;  /* 0C0B729E add Rm,Rn */
	r9 = R32(r13); UPD(0x0C0B72A2u, 3);  /* 0C0B72A0 mov.l @Rm,Rn */
	IF(0x0C0B72A2u); MACL = r11 * r3;  /* 0C0B72A2 mul.l Rm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C0B72A6u, 3);  /* 0C0B72A4 mov.l @(disp,pc),Rn */
	r9 &= r6;  /* 0C0B72A6 and Rm,Rn */
	W32(r13, r9); UPD(0x0C0B72AAu, 2);  /* 0C0B72A8 mov.l Rm,@Rn */
	IF(0x0C0B72AAu); r5 = MACL;  /* 0C0B72AA sts macl,Rn */
	r5 += r8;  /* 0C0B72AC add Rm,Rn */
	r0 = R32(r5); UPD(0x0C0B72B0u, 3);  /* 0C0B72AE mov.l @Rm,Rn */
	r2 = 0x13000000u; UPD(0x0C0B72B2u, 1);  /* 0C0B72B0 mov.l @(disp,pc),Rn */
	r11 = R32(r13 + 0x30u); UPD(0x0C0B72B4u, 1);  /* 0C0B72B2 mov.l @(disp,Rm),Rn */
	r0 &= r2;  /* 0C0B72B4 and Rm,Rn */
	r7 = R32(r5 + 0x24u); UPD(0x0C0B72B8u, 2);  /* 0C0B72B6 mov.l @(disp,Rm),Rn */
	r9 |= r0;  /* 0C0B72B8 or Rm,Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C0B72BCu, 2);  /* 0C0B72BA mov.l @(disp,Rm),Rn */
	r12 = R32(r5 + 0x28u); UPD(0x0C0B72BEu, 1);  /* 0C0B72BC mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0B72BE add Rm,Rn */
	r12 += r11;  /* 0C0B72C0 add Rm,Rn */
	W32(r13 + 0x24u, r7); UPD(0x0C0B72C4u, 3);  /* 0C0B72C2 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r12); UPD(0x0C0B72C6u, 1);  /* 0C0B72C4 mov.l Rm,@(disp,Rn) */
	W32(r13, r9); UPD(0x0C0B72C8u, 1);  /* 0C0B72C6 mov.l Rm,@Rn */
	r13 += 0x7Eu;  /* 0C0B72C8 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B72CCu, 2);  /* 0C0B72CA mov.w @Rm,Rn */
	r13 += 0xFFFFFF82u;  /* 0C0B72CC add #imm,Rn */
	r2 = R32(r13 + 0xCu); UPD(0x0C0B72D0u, 2);  /* 0C0B72CE mov.l @(disp,Rm),Rn */
	T = r2 > r4;  /* 0C0B72D0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B732Eu, 4); goto L_0C0B732E; }  /* 0C0B72D2 bt */
L_0C0B72D4: BLKS(0x0C0B72D4u);
	r0 = 0xC0B72F0u;  /* 0C0B72D4 mova @(disp,pc),r0 */
	IF(0x0C0B72D6u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B72D8u, 2);  /* 0C0B72D6 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0B72D8 extu.b Rm,Rn */
	IF(0x0C0B72DAu); { u32 tv_ = (r4 + 0x0C0B72DEu); u32 t_ = PHYS(tv_); IF(0x0C0B72DCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0B7300u: goto L_0C0B7300; case 0x0C0B732Eu: goto L_0C0B732E; case 0x0C0B7350u: goto L_0C0B7350; case 0x0C0B737Au: goto L_0C0B737A; default: JUMPD(tv_); } }  /* 0C0B72DA braf Rn */
L_0C0B7300: BLKS(0x0C0B7300u);
	r6 = 0xB4u; UPD(0x0C0B7302u, 1);  /* 0C0B7300 mov.w @(disp,pc),Rn */
	IF(0x0C0B7302u); MACL = r11 * r6;  /* 0C0B7302 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7306u, 3);  /* 0C0B7304 mov.l @(disp,pc),Rn */
	IF(0x0C0B7306u); r5 = MACL;  /* 0C0B7306 sts macl,Rn */
	IF(0x0C0B7308u); MACL = r10 * r6;  /* 0C0B7308 mul.l Rm,Rn */
	r0 = 0xA0u; UPD(0x0C0B730Cu, 4);  /* 0C0B730A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0B730C add Rm,Rn */
	IF(0x0C0B730Eu); r3 = MACL;  /* 0C0B730E sts macl,Rn */
	r5 += r0;  /* 0C0B7310 add Rm,Rn */
	r3 += r2;  /* 0C0B7312 add Rm,Rn */
	r0 += r3;  /* 0C0B7314 add Rm,Rn */
	r5 += 0x3u;  /* 0C0B7316 add #imm,Rn */
	r0 += 0x1u;  /* 0C0B7318 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B731Cu, 8);  /* 0C0B731A mov.b @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B731Eu, 1);  /* 0C0B731C mov.b @Rm,Rn */
	T = (r9 & r13) == 0;  /* 0C0B731E tst Rm,Rn */
	if (T) { UPD(0x0C0B73A2u, 4); goto L_0C0B73A2; }  /* 0C0B7320 bt */
L_0C0B7322: BLKS(0x0C0B7322u);
	r11 = 0x10u;  /* 0C0B7322 mov #imm,Rn */
	r0 = 0x9Cu; UPD(0x0C0B7326u, 2);  /* 0C0B7324 mov.w @(disp,pc),Rn */
	IF(0x0C0B7326u); W8(r0 + r3, r11); UPD(0x0C0B7328u, 1);  /* 0C0B7326 mov.b Rm,@(r0,Rn) */
	r12 = 0x1u;  /* 0C0B7328 mov #imm,Rn */
	r0 += 0xFFFFFFECu;  /* 0C0B732A add #imm,Rn */
	IF(0x0C0B732Cu); W16(r0 + r3, r12); UPD(0x0C0B732Eu, 3);  /* 0C0B732C mov.w Rm,@(r0,Rn) */
L_0C0B732E: BLKS(0x0C0B732Eu);
	r3 = 0xB4u; UPD(0x0C0B7330u, 1);  /* 0C0B732E mov.w @(disp,pc),Rn */
	IF(0x0C0B7330u); MACL = r10 * r3;  /* 0C0B7330 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B7334u, 3);  /* 0C0B7332 mov.l @(disp,pc),Rn */
	IF(0x0C0B7334u); r3 = MACL;  /* 0C0B7334 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B7338u, 2);  /* 0C0B7336 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0B7338 add Rm,Rn */
	r2 += r3;  /* 0C0B733A add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B733Eu, 3);  /* 0C0B733C mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B733E add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0B7340 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B7342 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B73A2u, 6); goto L_0C0B73A2; } UPD(0x0C0B7348u, 1); goto L_0C0B7348; }  /* 0C0B7344 bf/s */
L_0C0B7348: BLKS(0x0C0B7348u);
	r4 = 0x0u;  /* 0C0B7348 mov #imm,Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C0B6EEAu, 4); goto L_0C0B6EEA; }  /* 0C0B734A bra */
L_0C0B7350: BLKS(0x0C0B7350u);
	r6 = 0xB4u; UPD(0x0C0B7352u, 1);  /* 0C0B7350 mov.w @(disp,pc),Rn */
	IF(0x0C0B7352u); MACL = r11 * r6;  /* 0C0B7352 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7356u, 3);  /* 0C0B7354 mov.l @(disp,pc),Rn */
	IF(0x0C0B7356u); r1 = MACL;  /* 0C0B7356 sts macl,Rn */
	IF(0x0C0B7358u); MACL = r10 * r6;  /* 0C0B7358 mul.l Rm,Rn */
	r5 = 0xA0u; UPD(0x0C0B735Cu, 4);  /* 0C0B735A mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0B735C add Rm,Rn */
	IF(0x0C0B735Eu); r3 = MACL;  /* 0C0B735E sts macl,Rn */
	r1 += r5;  /* 0C0B7360 add Rm,Rn */
	r3 += r2;  /* 0C0B7362 add Rm,Rn */
	r5 += r3;  /* 0C0B7364 add Rm,Rn */
	r1 += 0x3u;  /* 0C0B7366 add #imm,Rn */
	r5 += 0x1u;  /* 0C0B7368 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B736Cu, 8);  /* 0C0B736A mov.b @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B736Eu, 1);  /* 0C0B736C mov.b @Rm,Rn */
	T = (r0 & r9) == 0;  /* 0C0B736E tst Rm,Rn */
	if (!T) { UPD(0x0C0B737Au, 4); goto L_0C0B737A; }  /* 0C0B7370 bf */
L_0C0B7372: BLKS(0x0C0B7372u);
	r0 = 0xFFFFEB68u; UPD(0x0C0B7374u, 1);  /* 0C0B7372 mov.w @(disp,pc),Rn */
	IF(0x0C0B7374u); { u32 tv_ = (r0 + 0x0C0B7378u); u32 t_ = PHYS(tv_); IF(0x0C0B7376u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EE0u: goto L_0C0B5EE0; default: JUMPD(tv_); } }  /* 0C0B7374 braf Rn */
L_0C0B737A: BLKS(0x0C0B737Au);
	r8 = 0xB4u; UPD(0x0C0B737Cu, 1);  /* 0C0B737A mov.w @(disp,pc),Rn */
	IF(0x0C0B737Cu); MACL = r10 * r8;  /* 0C0B737C mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B7380u, 3);  /* 0C0B737E mov.l @(disp,pc),Rn */
	IF(0x0C0B7380u); r8 = MACL;  /* 0C0B7380 sts macl,Rn */
	r8 += r4;  /* 0C0B7382 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0B7386u, 3);  /* 0C0B7384 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B7386 mov Rm,Rn */
	r3 = 0xC1E9638u; UPD(0x0C0B738Au, 2);  /* 0C0B7388 mov.l @(disp,pc),Rn */
	IF(0x0C0B738Au); r0 <<= 2;  /* 0C0B738A shll2 Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B738Eu, 2);  /* 0C0B738C mov.l @(disp,pc),Rn */
	IF(0x0C0B738Eu); r7 = R32(r0 + r3); UPD(0x0C0B7390u, 1);  /* 0C0B738E mov.l @(r0,Rm),Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C0B7392u, 1);  /* 0C0B7390 mov.l @(disp,pc),Rn */
	IF(0x0C0B7392u); { u32 t_ = r11; PR = 0x0C0B7396u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B7396u); }  /* 0C0B7392 jsr @Rn */
L_0C0B7396: BLKS(0x0C0B7396u);
	r4 = r10;  /* 0C0B7396 mov Rm,Rn */
	r5 = 0x14u;  /* 0C0B7398 mov #imm,Rn */
	IF(0x0C0B739Au); { u32 t_ = r12; PR = 0x0C0B739Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B739Eu); }  /* 0C0B739A jsr @Rn */
L_0C0B739E: BLKS(0x0C0B739Eu);
	T = (r0 & r0) == 0;  /* 0C0B739E tst Rm,Rn */
	if (!T) { UPD(0x0C0B73AAu, 4); goto L_0C0B73AA; }  /* 0C0B73A0 bf */
L_0C0B73A2: BLKS(0x0C0B73A2u);
	r13 = 0xFFFFE91Eu; UPD(0x0C0B73A4u, 1);  /* 0C0B73A2 mov.w @(disp,pc),Rn */
	IF(0x0C0B73A4u); { u32 tv_ = (r13 + 0x0C0B73A8u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B73A4 braf Rn */
L_0C0B73AA: BLKS(0x0C0B73AAu);
	r11 = 0xC069B90u; UPD(0x0C0B73ACu, 1);  /* 0C0B73AA mov.l @(disp,pc),Rn */
	r12 = 0xC069C40u; UPD(0x0C0B73AEu, 1);  /* 0C0B73AC mov.l @(disp,pc),Rn */
	IF(0x0C0B73AEu); { u32 t_ = r11; PR = 0x0C0B73B2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B73B2u); }  /* 0C0B73AE jsr @Rn */
L_0C0B73B2: BLKS(0x0C0B73B2u);
	IF(0x0C0B73B2u); { u32 t_ = r12; PR = 0x0C0B73B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069C40, 0x0C069C40u, 0x0C0B73B6u); }  /* 0C0B73B2 jsr @Rn */
L_0C0B73B6: BLKS(0x0C0B73B6u);
	r9 = R32(r8 + 0x8u); UPD(0x0C0B73B8u, 1);  /* 0C0B73B6 mov.l @(disp,Rm),Rn */
	r2 = r8;  /* 0C0B73B8 mov Rm,Rn */
	r0 = 0x84u; UPD(0x0C0B73BCu, 2);  /* 0C0B73BA mov.w @(disp,pc),Rn */
	IF(0x0C0B73BCu); r9 <<= 2;  /* 0C0B73BC shll2 Rn */
	r5 = 0xC1E9670u; UPD(0x0C0B73C0u, 2);  /* 0C0B73BE mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0B73C0 add Rm,Rn */
	r9 += r5;  /* 0C0B73C2 add Rm,Rn */
	r9 -= r0;  /* 0C0B73C4 sub Rm,Rn */
	r2 += 0x2u;  /* 0C0B73C6 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B73CAu, 5);  /* 0C0B73C8 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B73CA add #imm,Rn */
	r13 = R32(r9); UPD(0x0C0B73CEu, 2);  /* 0C0B73CC mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C0B73CE mov #imm,Rn */
	r10 = 0xC189E08u; UPD(0x0C0B73D2u, 2);  /* 0C0B73D0 mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C0B73D4u, 1);  /* 0C0B73D2 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0B73D6u, 1);  /* 0C0B73D4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BA610u; UPD(0x0C0B73D8u, 1);  /* 0C0B73D6 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B73DAu, 1);  /* 0C0B73D8 mov.l @(disp,Rm),Rn */
	{ r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B6DBEu, 3); goto L_0C0B6DBE; }  /* 0C0B73DA bra */
L_0C0B73E0: BLKS(0x0C0B73E0u);
	r9 = 0xC0A8B50u; UPD(0x0C0B73E2u, 1);  /* 0C0B73E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B73E2u); { u32 t_ = r9; PR = 0x0C0B73E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B73E6u); }  /* 0C0B73E2 jsr @Rn */
L_0C0B73E6: BLKS(0x0C0B73E6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B73E6 exts.w Rm,Rn */
	IF(0x0C0B73E8u); T = (s32)r11 >= 0;  /* 0C0B73E8 cmp/pz Rn */
	if (T) { UPD(0x0C0B73F0u, 5); goto L_0C0B73F0; }  /* 0C0B73EA bt */
L_0C0B73EC: BLKS(0x0C0B73ECu);
	{ IF(0x0C0B73EEu); ; /* slot nop */ UPD(0x0C0B6FC0u, 3); goto L_0C0B6FC0; }  /* 0C0B73EC bra */
L_0C0B73F0: BLKS(0x0C0B73F0u);
	r7 = 0xB4u; UPD(0x0C0B73F2u, 1);  /* 0C0B73F0 mov.w @(disp,pc),Rn */
	IF(0x0C0B73F2u); MACL = r10 * r7;  /* 0C0B73F2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B73F6u, 3);  /* 0C0B73F4 mov.l @(disp,pc),Rn */
	IF(0x0C0B73F6u); r12 = MACL;  /* 0C0B73F6 sts macl,Rn */
	IF(0x0C0B73F8u); MACL = r11 * r7;  /* 0C0B73F8 mul.l Rm,Rn */
	r12 += r6;  /* 0C0B73FA add Rm,Rn */
	r3 = R32(r12 + 0x2Cu); UPD(0x0C0B73FEu, 5);  /* 0C0B73FC mov.l @(disp,Rm),Rn */
	IF(0x0C0B73FEu); r11 = MACL;  /* 0C0B73FE sts macl,Rn */
	r11 += r6;  /* 0C0B7400 add Rm,Rn */
	r8 = R32(r11 + 0x24u); UPD(0x0C0B7404u, 3);  /* 0C0B7402 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x28u); UPD(0x0C0B7406u, 1);  /* 0C0B7404 mov.l @(disp,Rm),Rn */
	r8 += r3;  /* 0C0B7406 add Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C0B740Au, 2);  /* 0C0B7408 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C0B740A add Rm,Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C0B740Eu, 2);  /* 0C0B740C mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r13); UPD(0x0C0B7410u, 1);  /* 0C0B740E mov.l Rm,@(disp,Rn) */
	r12 += 0x7Eu;  /* 0C0B7410 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C0B7414u, 2);  /* 0C0B7412 mov.w @Rm,Rn */
	r12 += 0xFFFFFF82u;  /* 0C0B7414 add #imm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C0B7418u, 2);  /* 0C0B7416 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B7418 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x7u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B7422u, 4); goto L_0C0B7422; } goto L_0C0B741E; }  /* 0C0B741A bf/s */
L_0C0B741E: BLKS(0x0C0B741Eu);
	{ IF(0x0C0B7420u); MACL = r11 * r7; /* slot mul.l Rm,Rn */ UPD(0x0C0B7520u, 5); goto L_0C0B7520; }  /* 0C0B741E bra */
L_0C0B7422: BLKS(0x0C0B7422u);
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B7470u, 3); goto L_0C0B7470; } goto L_0C0B7426; }  /* 0C0B7422 bt/s */
L_0C0B7426: BLKS(0x0C0B7426u);
	r13 = 0xB4u; UPD(0x0C0B7428u, 2);  /* 0C0B7426 mov.w @(disp,pc),Rn */
	IF(0x0C0B7428u); MACL = r10 * r13;  /* 0C0B7428 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B742Cu, 3);  /* 0C0B742A mov.l @(disp,pc),Rn */
	IF(0x0C0B742Cu); r8 = MACL;  /* 0C0B742C sts macl,Rn */
	r8 += r0;  /* 0C0B742E add Rm,Rn */
	r0 = 0x99u; UPD(0x0C0B7432u, 3);  /* 0C0B7430 mov.w @(disp,pc),Rn */
	IF(0x0C0B7432u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B7434u, 1);  /* 0C0B7432 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C0B7434 add #imm,Rn */
	IF(0x0C0B7436u); W8(r0 + r8, r12); UPD(0x0C0B7438u, 2);  /* 0C0B7436 mov.b Rm,@(r0,Rn) */
	{ r1 = r12 & 0xFF; /* slot extu.b Rm,Rn */ UPD(0x0C0B6D06u, 3); goto L_0C0B6D06; }  /* 0C0B7438 bra */
L_0C0B7470: BLKS(0x0C0B7470u);
	IF(0x0C0B7470u); MACL = r11 * r7;  /* 0C0B7470 mul.l Rm,Rn */
	r7 = 0xA0u; UPD(0x0C0B7474u, 3);  /* 0C0B7472 mov.w @(disp,pc),Rn */
	IF(0x0C0B7474u); r1 = MACL;  /* 0C0B7474 sts macl,Rn */
	r1 += r6;  /* 0C0B7476 add Rm,Rn */
	r1 += r7;  /* 0C0B7478 add Rm,Rn */
	r7 += r12;  /* 0C0B747A add Rm,Rn */
	r1 += 0x2u;  /* 0C0B747C add #imm,Rn */
	r7 += 0x1u;  /* 0C0B747E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B7482u, 7);  /* 0C0B7480 mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B7484u, 1);  /* 0C0B7482 mov.b @Rm,Rn */
	T = (r3 & r8) == 0;  /* 0C0B7484 tst Rm,Rn */
	if (T) { UPD(0x0C0B7510u, 4); goto L_0C0B7510; }  /* 0C0B7486 bt */
L_0C0B7488: BLKS(0x0C0B7488u);
	r4 = r10;  /* 0C0B7488 mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C0B748Cu, 2);  /* 0C0B748A mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0B748C mov #imm,Rn */
	IF(0x0C0B748Eu); { u32 t_ = r9; PR = 0x0C0B7492u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B7492u); }  /* 0C0B748E jsr @Rn */
L_0C0B7492: BLKS(0x0C0B7492u);
	T = (r0 & r0) == 0;  /* 0C0B7492 tst Rm,Rn */
	if (T) { UPD(0x0C0B74FAu, 4); goto L_0C0B74FA; }  /* 0C0B7494 bt */
L_0C0B7496: BLKS(0x0C0B7496u);
	r2 = R32(r12 + 0x24u); UPD(0x0C0B7498u, 1);  /* 0C0B7496 mov.l @(disp,Rm),Rn */
	r11 = 0x9Cu; UPD(0x0C0B749Au, 1);  /* 0C0B7498 mov.w @(disp,pc),Rn */
	r11 += r12;  /* 0C0B749A add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B749Eu, 2);  /* 0C0B749C mov.b @Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C0B749E extu.b Rm,Rn */
	r8 = 0xCu;  /* 0C0B74A0 mov #imm,Rn */
	IF(0x0C0B74A2u); MACL = r0 * r8;  /* 0C0B74A2 mul.l Rm,Rn */
	r13 = 0xC1E95D4u; UPD(0x0C0B74A6u, 5);  /* 0C0B74A4 mov.l @(disp,pc),Rn */
	IF(0x0C0B74A6u); r5 = MACL;  /* 0C0B74A6 sts macl,Rn */
	r5 += r13;  /* 0C0B74A8 add Rm,Rn */
	r4 = R32(r5); UPD(0x0C0B74ACu, 3);  /* 0C0B74AA mov.l @Rm,Rn */
	r7 = R32(r5 + 0x4u); UPD(0x0C0B74AEu, 1);  /* 0C0B74AC mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0B74B0u, 1);  /* 0C0B74AE mov.l @(disp,Rm),Rn */
	r2 += r4;  /* 0C0B74B0 add Rm,Rn */
	r9 = 0xC069B90u; UPD(0x0C0B74B4u, 2);  /* 0C0B74B2 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0B74B4 add Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0B74B8u, 2);  /* 0C0B74B6 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0B74B8 mov Rm,Rn */
	IF(0x0C0B74BAu); { u32 t_ = r9; PR = 0x0C0B74BEu; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B74BEu); }  /* 0C0B74BA jsr @Rn */
L_0C0B74BE: BLKS(0x0C0B74BEu);
	r9 = 0xC069C40u; UPD(0x0C0B74C0u, 1);  /* 0C0B74BE mov.l @(disp,pc),Rn */
	IF(0x0C0B74C0u); { u32 t_ = r9; PR = 0x0C0B74C4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069C40, 0x0C069C40u, 0x0C0B74C4u); }  /* 0C0B74C0 jsr @Rn */
L_0C0B74C4: BLKS(0x0C0B74C4u);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B74C6u, 1);  /* 0C0B74C4 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B74C6 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C0B74C8 extu.b Rm,Rn */
	IF(0x0C0B74CAu); MACL = r0 * r8;  /* 0C0B74CA mul.l Rm,Rn */
	r4 = 0x28000u; UPD(0x0C0B74CEu, 5);  /* 0C0B74CC mov.l @(disp,pc),Rn */
	IF(0x0C0B74CEu); r5 = MACL;  /* 0C0B74CE sts macl,Rn */
	r5 += r13;  /* 0C0B74D0 add Rm,Rn */
	r13 = 0x86u; UPD(0x0C0B74D4u, 3);  /* 0C0B74D2 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0B74D4 mov Rm,Rn */
	IF(0x0C0B74D6u); r7 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0B74D8u, 2);  /* 0C0B74D6 mov.w @(r0,Rm),Rn */
	r2 = 0xC189EB6u; UPD(0x0C0B74DAu, 1);  /* 0C0B74D8 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C0B74DCu, 1);  /* 0C0B74DA mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B74DEu, 1);  /* 0C0B74DC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BA970u; UPD(0x0C0B74E0u, 1);  /* 0C0B74DE mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x8u); UPD(0x0C0B74E2u, 1);  /* 0C0B74E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0B74E4u, 1);  /* 0C0B74E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B74E4u); { u32 t_ = r12; PR = 0x0C0B74E8u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B74E8u); }  /* 0C0B74E4 jsr @Rn */
L_0C0B74E8: BLKS(0x0C0B74E8u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B74EAu, 1);  /* 0C0B74E8 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0B74EA add #imm,Rn */
	r10 += 0x1u;  /* 0C0B74EC add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C0B74EE extu.b Rm,Rn */
	T = r0 == 0x6u;  /* 0C0B74F0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r11, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B74FAu, 7); goto L_0C0B74FA; } UPD(0x0C0B74F6u, 1); goto L_0C0B74F6; }  /* 0C0B74F2 bf/s */
L_0C0B74F6: BLKS(0x0C0B74F6u);
	r10 = 0x0u;  /* 0C0B74F6 mov #imm,Rn */
	W8(r11, r10); UPD(0x0C0B74FAu, 2);  /* 0C0B74F8 mov.b Rm,@Rn */
L_0C0B74FA: BLKS(0x0C0B74FAu);
	r13 = 0xFFFFE7C6u; UPD(0x0C0B74FCu, 1);  /* 0C0B74FA mov.w @(disp,pc),Rn */
	IF(0x0C0B74FCu); { u32 tv_ = (r13 + 0x0C0B7500u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B74FC braf Rn */
L_0C0B7510: BLKS(0x0C0B7510u);
	r0 = 0x88u; UPD(0x0C0B7512u, 1);  /* 0C0B7510 mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C0B7512 mov #imm,Rn */
	IF(0x0C0B7514u); W16(r0 + r12, r6); UPD(0x0C0B7516u, 2);  /* 0C0B7514 mov.w Rm,@(r0,Rn) */
	r1 = 0x6u;  /* 0C0B7516 mov #imm,Rn */
	UPD(0x0C0B7518u, 1);
L_0C0B7518: BLKS(0x0C0B7518u);
	r4 = 0xFFFFE8B0u; UPD(0x0C0B751Au, 1);  /* 0C0B7518 mov.w @(disp,pc),Rn */
	IF(0x0C0B751Au); { u32 tv_ = (r4 + 0x0C0B751Eu); u32 t_ = PHYS(tv_); W32(r12 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DCEu: goto L_0C0B5DCE; default: JUMPD(tv_); } }  /* 0C0B751A braf Rn */
L_0C0B7520: BLKS(0x0C0B7520u);
	r9 = 0xA0u; UPD(0x0C0B7522u, 1);  /* 0C0B7520 mov.w @(disp,pc),Rn */
	IF(0x0C0B7522u); r5 = MACL;  /* 0C0B7522 sts macl,Rn */
	r5 += r6;  /* 0C0B7524 add Rm,Rn */
	r5 += r9;  /* 0C0B7526 add Rm,Rn */
	r9 += r12;  /* 0C0B7528 add Rm,Rn */
	r5 += 0x2u;  /* 0C0B752A add #imm,Rn */
	r9 += 0x1u;  /* 0C0B752C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B7530u, 7);  /* 0C0B752E mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B7532u, 1);  /* 0C0B7530 mov.b @Rm,Rn */
	T = (r6 & r7) == 0;  /* 0C0B7532 tst Rm,Rn */
	if (T) { UPD(0x0C0B74FAu, 4); goto L_0C0B74FA; }  /* 0C0B7534 bt */
L_0C0B7536: BLKS(0x0C0B7536u);
	r4 = 0x1u;  /* 0C0B7536 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B753Au, 2);  /* 0C0B7538 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0B753A mov #imm,Rn */
	IF(0x0C0B753Cu); W16(r0 + r12, r4); UPD(0x0C0B753Eu, 2);  /* 0C0B753C mov.w Rm,@(r0,Rn) */
	W32(r12 + 0xCu, r2); UPD(0x0C0B7540u, 1);  /* 0C0B753E mov.l Rm,@(disp,Rn) */
L_0C0B7540: BLKS(0x0C0B7540u);
	r0 = 0xC0A8AE0u; UPD(0x0C0B7542u, 1);  /* 0C0B7540 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B7542 mov Rm,Rn */
	UPD(0x0C0B7544u, 1);
L_0C0B7544: BLKS(0x0C0B7544u);
	IF(0x0C0B7544u); { u32 t_ = r0; PR = 0x0C0B7548u; IF(0x0C0B7546u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B7548u); }  /* 0C0B7544 jsr @Rn */
L_0C0B7548: BLKS(0x0C0B7548u);
	r1 = 0xFFFFEAF4u; UPD(0x0C0B754Au, 1);  /* 0C0B7548 mov.w @(disp,pc),Rn */
	IF(0x0C0B754Au); { u32 tv_ = (r1 + 0x0C0B754Eu); u32 t_ = PHYS(tv_); r4 = 0x75u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6042u: goto L_0C0B6042; default: JUMPD(tv_); } }  /* 0C0B754A braf Rn */
L_0C0B7550: BLKS(0x0C0B7550u);
	r8 = 0xC0A8D30u; UPD(0x0C0B7552u, 1);  /* 0C0B7550 mov.l @(disp,pc),Rn */
	IF(0x0C0B7552u); { u32 t_ = r8; PR = 0x0C0B7556u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7556u); }  /* 0C0B7552 jsr @Rn */
L_0C0B7556: BLKS(0x0C0B7556u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7556 exts.w Rm,Rn */
	IF(0x0C0B7558u); T = (s32)r11 >= 0;  /* 0C0B7558 cmp/pz Rn */
	{ u32 c_ = T; r6 = 0x1Eu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B7566u, 5); goto L_0C0B7566; } goto L_0C0B755E; }  /* 0C0B755A bt/s */
L_0C0B755E: BLKS(0x0C0B755Eu);
	r1 = 0xFFFFE98Cu; UPD(0x0C0B7560u, 2);  /* 0C0B755E mov.w @(disp,pc),Rn */
	IF(0x0C0B7560u); { u32 tv_ = (r1 + 0x0C0B7564u); u32 t_ = PHYS(tv_); IF(0x0C0B7562u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7560 braf Rn */
L_0C0B7566: BLKS(0x0C0B7566u);
	r5 = 0xB4u; UPD(0x0C0B7568u, 1);  /* 0C0B7566 mov.w @(disp,pc),Rn */
	IF(0x0C0B7568u); MACL = r10 * r5;  /* 0C0B7568 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B756Cu, 3);  /* 0C0B756A mov.l @(disp,pc),Rn */
	IF(0x0C0B756Cu); r4 = MACL;  /* 0C0B756C sts macl,Rn */
	IF(0x0C0B756Eu); MACL = r11 * r5;  /* 0C0B756E mul.l Rm,Rn */
	r4 += r0;  /* 0C0B7570 add Rm,Rn */
	r9 = R32(r4 + 0x2Cu); UPD(0x0C0B7574u, 5);  /* 0C0B7572 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7574u); r13 = MACL;  /* 0C0B7574 sts macl,Rn */
	r13 += r0;  /* 0C0B7576 add Rm,Rn */
	r7 = R32(r13 + 0x24u); UPD(0x0C0B757Au, 3);  /* 0C0B7578 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C0B757Cu, 1);  /* 0C0B757A mov.l @(disp,Rm),Rn */
	r7 += r9;  /* 0C0B757C add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C0B7580u, 2);  /* 0C0B757E mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C0B7580 add Rm,Rn */
	W32(r4 + 0x24u, r7); UPD(0x0C0B7584u, 2);  /* 0C0B7582 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r3); UPD(0x0C0B7586u, 1);  /* 0C0B7584 mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C0B7586 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B758Au, 2);  /* 0C0B7588 mov.w @Rm,Rn */
	r4 += 0xFFFFFF82u;  /* 0C0B758A add #imm,Rn */
	r2 = R32(r4 + 0xCu); UPD(0x0C0B758Eu, 2);  /* 0C0B758C mov.l @(disp,Rm),Rn */
	T = r2 > r6;  /* 0C0B758E cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B7596u, 4); goto L_0C0B7596; }  /* 0C0B7590 bf */
L_0C0B7592: BLKS(0x0C0B7592u);
	{ IF(0x0C0B7594u); ; /* slot nop */ UPD(0x0C0B7730u, 3); goto L_0C0B7730; }  /* 0C0B7592 bra */
L_0C0B7596: BLKS(0x0C0B7596u);
	r0 = 0xC0B75D4u;  /* 0C0B7596 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B7598 add Rm,Rn */
	IF(0x0C0B759Au); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B759Cu, 3);  /* 0C0B759A mov.w @(r0,Rm),Rn */
	IF(0x0C0B759Cu); { u32 tv_ = (r12 + 0x0C0B75A0u); u32 t_ = PHYS(tv_); IF(0x0C0B759Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B7620u: goto L_0C0B7620; case 0x0C0B7650u: goto L_0C0B7650; case 0x0C0B7670u: goto L_0C0B7670; case 0x0C0B7730u: goto L_0C0B7730; case 0x0C0B77F0u: goto L_0C0B77F0; default: JUMPD(tv_); } }  /* 0C0B759C braf Rn */
L_0C0B7620: BLKS(0x0C0B7620u);
	r1 = 0xB4u; UPD(0x0C0B7622u, 1);  /* 0C0B7620 mov.w @(disp,pc),Rn */
	IF(0x0C0B7622u); MACL = r11 * r1;  /* 0C0B7622 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7626u, 3);  /* 0C0B7624 mov.l @(disp,pc),Rn */
	IF(0x0C0B7626u); r4 = MACL;  /* 0C0B7626 sts macl,Rn */
	IF(0x0C0B7628u); MACL = r10 * r1;  /* 0C0B7628 mul.l Rm,Rn */
	r6 = 0xA0u; UPD(0x0C0B762Cu, 4);  /* 0C0B762A mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C0B762C add Rm,Rn */
	IF(0x0C0B762Eu); r3 = MACL;  /* 0C0B762E sts macl,Rn */
	r4 += r6;  /* 0C0B7630 add Rm,Rn */
	r3 += r2;  /* 0C0B7632 add Rm,Rn */
	r6 += r3;  /* 0C0B7634 add Rm,Rn */
	r4 += 0x2u;  /* 0C0B7636 add #imm,Rn */
	r6 += 0x1u;  /* 0C0B7638 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B763Cu, 8);  /* 0C0B763A mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B763Eu, 1);  /* 0C0B763C mov.b @Rm,Rn */
	T = (r8 & r11) == 0;  /* 0C0B763E tst Rm,Rn */
	if (T) { UPD(0x0C0B76A0u, 4); goto L_0C0B76A0; }  /* 0C0B7640 bt */
L_0C0B7642: BLKS(0x0C0B7642u);
	r13 = R32(r3 + 0xCu); UPD(0x0C0B7644u, 1);  /* 0C0B7642 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C0B7644 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B7648u, 2);  /* 0C0B7646 mov.w @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C0B7648 add #imm,Rn */
	IF(0x0C0B764Au); W16(r0 + r3, r7); UPD(0x0C0B764Cu, 2);  /* 0C0B764A mov.w Rm,@(r0,Rn) */
	{ W32(r3 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B7540u, 3); goto L_0C0B7540; }  /* 0C0B764C bra */
L_0C0B7650: BLKS(0x0C0B7650u);
	r0 = 0xB4u; UPD(0x0C0B7652u, 1);  /* 0C0B7650 mov.w @(disp,pc),Rn */
	IF(0x0C0B7652u); MACL = r10 * r0;  /* 0C0B7652 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B7656u, 3);  /* 0C0B7654 mov.l @(disp,pc),Rn */
	IF(0x0C0B7656u); r8 = MACL;  /* 0C0B7656 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B765Au, 2);  /* 0C0B7658 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0B765A add Rm,Rn */
	r2 += r8;  /* 0C0B765C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B7660u, 3);  /* 0C0B765E mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B7660 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C0B7662 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B7664 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B76A0u, 6); goto L_0C0B76A0; } UPD(0x0C0B766Au, 1); goto L_0C0B766A; }  /* 0C0B7666 bf/s */
L_0C0B766A: BLKS(0x0C0B766Au);
	r5 = 0x0u;  /* 0C0B766A mov #imm,Rn */
	{ W8(r2, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0B6D0Eu, 4); goto L_0C0B6D0E; }  /* 0C0B766C bra */
L_0C0B7670: BLKS(0x0C0B7670u);
	r7 = 0xB4u; UPD(0x0C0B7672u, 1);  /* 0C0B7670 mov.w @(disp,pc),Rn */
	IF(0x0C0B7672u); MACL = r11 * r7;  /* 0C0B7672 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7676u, 3);  /* 0C0B7674 mov.l @(disp,pc),Rn */
	IF(0x0C0B7676u); r1 = MACL;  /* 0C0B7676 sts macl,Rn */
	IF(0x0C0B7678u); MACL = r10 * r7;  /* 0C0B7678 mul.l Rm,Rn */
	r13 = 0xA0u; UPD(0x0C0B767Cu, 4);  /* 0C0B767A mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0B767C add Rm,Rn */
	IF(0x0C0B767Eu); r12 = MACL;  /* 0C0B767E sts macl,Rn */
	r1 += r13;  /* 0C0B7680 add Rm,Rn */
	r12 += r2;  /* 0C0B7682 add Rm,Rn */
	r13 += r12;  /* 0C0B7684 add Rm,Rn */
	r1 += 0x2u;  /* 0C0B7686 add #imm,Rn */
	r13 += 0x1u;  /* 0C0B7688 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B768Cu, 8);  /* 0C0B768A mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B768Eu, 1);  /* 0C0B768C mov.b @Rm,Rn */
	T = (r4 & r8) == 0;  /* 0C0B768E tst Rm,Rn */
	if (T) { UPD(0x0C0B7720u, 4); goto L_0C0B7720; }  /* 0C0B7690 bt */
L_0C0B7692: BLKS(0x0C0B7692u);
	r4 = r10;  /* 0C0B7692 mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C0B7696u, 2);  /* 0C0B7694 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B7696 mov #imm,Rn */
	IF(0x0C0B7698u); { u32 t_ = r9; PR = 0x0C0B769Cu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B769Cu); }  /* 0C0B7698 jsr @Rn */
L_0C0B769C: BLKS(0x0C0B769Cu);
	T = (r0 & r0) == 0;  /* 0C0B769C tst Rm,Rn */
	if (!T) { UPD(0x0C0B76A8u, 4); goto L_0C0B76A8; }  /* 0C0B769E bf */
L_0C0B76A0: BLKS(0x0C0B76A0u);
	r13 = 0xFFFFE620u; UPD(0x0C0B76A2u, 1);  /* 0C0B76A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B76A2u); { u32 tv_ = (r13 + 0x0C0B76A6u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B76A2 braf Rn */
L_0C0B76A8: BLKS(0x0C0B76A8u);
	r8 = R32(r12 + 0x30u); UPD(0x0C0B76AAu, 1);  /* 0C0B76A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B76AAu); T = (s32)r8 > 0;  /* 0C0B76AA cmp/pl Rn */
	IF(0x0C0B76ACu); r0 = T;  /* 0C0B76AC movt Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0B76AE mov #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B76B0 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0B76B2 negc Rm,Rn */
	r5 = 0xC1E96C8u; UPD(0x0C0B76B6u, 6);  /* 0C0B76B4 mov.l @(disp,pc),Rn */
	IF(0x0C0B76B6u); r0 <<= 2;  /* 0C0B76B6 shll2 Rn */
	r13 = R32(r12 + 0xCu); UPD(0x0C0B76BAu, 2);  /* 0C0B76B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B76BAu); r3 = R32(r0 + r5); UPD(0x0C0B76BCu, 1);  /* 0C0B76BA mov.l @(r0,Rm),Rn */
	r13 += r13;  /* 0C0B76BC add Rm,Rn */
	r3 += r13;  /* 0C0B76BE add Rm,Rn */
	r3 += 0xFFFFFFEAu;  /* 0C0B76C0 add #imm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B76C4u, 4);  /* 0C0B76C2 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B76C6u, 1);  /* 0C0B76C4 mov.w @Rm,Rn */
	r11 = 0x200000u; UPD(0x0C0B76C8u, 1);  /* 0C0B76C6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0B76C8 mov Rm,Rn */
	IF(0x0C0B76CAu); { u32 t_ = r9; PR = 0x0C0B76CEu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B76CEu); }  /* 0C0B76CA jsr @Rn */
L_0C0B76CE: BLKS(0x0C0B76CEu);
	r5 = r11;  /* 0C0B76CE mov Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C0B76D2u, 2);  /* 0C0B76D0 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0B76D2 mov Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C0B76D6u, 2);  /* 0C0B76D4 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0B76D6 add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C0B76DAu, 2);  /* 0C0B76D8 mov.l @(disp,pc),Rn */
	IF(0x0C0B76DAu); { u32 t_ = r11; PR = 0x0C0B76DEu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B76DEu); }  /* 0C0B76DA jsr @Rn */
L_0C0B76DE: BLKS(0x0C0B76DEu);
	r7 = R32(r12 + 0x30u); UPD(0x0C0B76E0u, 1);  /* 0C0B76DE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B76E0 add #imm,Rn */
	IF(0x0C0B76E2u); T = (s32)r7 > 0;  /* 0C0B76E2 cmp/pl Rn */
	IF(0x0C0B76E4u); r2 = T;  /* 0C0B76E4 movt Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0B76E8u, 4);  /* 0C0B76E6 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B76E8 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0B76EA negc Rm,Rn */
	IF(0x0C0B76ECu); r1 <<= 2;  /* 0C0B76EC shll2 Rn */
	r6 += r0;  /* 0C0B76EE add Rm,Rn */
	r4 = 0xC1E96D0u; UPD(0x0C0B76F2u, 5);  /* 0C0B76F0 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C0B76F2 mov Rm,Rn */
	IF(0x0C0B76F4u); r8 = R32(r0 + r4); UPD(0x0C0B76F6u, 2);  /* 0C0B76F4 mov.l @(r0,Rm),Rn */
	r5 = r9;  /* 0C0B76F6 mov Rm,Rn */
	r11 = 0xC0BAD60u; UPD(0x0C0B76FAu, 2);  /* 0C0B76F8 mov.l @(disp,pc),Rn */
	r6 += r8;  /* 0C0B76FA add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C0B76FEu, 2);  /* 0C0B76FC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B76FE mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0B7702u, 2);  /* 0C0B7700 mov.l Rm,@Rn */
	IF(0x0C0B7702u); { u32 t_ = r11; PR = 0x0C0B7706u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0B7706u); }  /* 0C0B7702 jsr @Rn */
L_0C0B7706: BLKS(0x0C0B7706u);
	r0 = 0x88u; UPD(0x0C0B7708u, 1);  /* 0C0B7706 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0B7708 mov #imm,Rn */
	r1 = R32(r12 + 0xCu); UPD(0x0C0B770Cu, 2);  /* 0C0B770A mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C0B770C add #imm,Rn */
	IF(0x0C0B770Eu); W16(r0 + r12, r5); UPD(0x0C0B7710u, 2);  /* 0C0B770E mov.w Rm,@(r0,Rn) */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B7518u, 3); goto L_0C0B7518; }  /* 0C0B7710 bra */
L_0C0B7720: BLKS(0x0C0B7720u);
	r0 = 0x88u; UPD(0x0C0B7722u, 1);  /* 0C0B7720 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0B7722 mov #imm,Rn */
	r1 = R32(r12 + 0xCu); UPD(0x0C0B7726u, 2);  /* 0C0B7724 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7726u); W16(r0 + r12, r3); UPD(0x0C0B7728u, 1);  /* 0C0B7726 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0B7518u, 3); goto L_0C0B7518; }  /* 0C0B7728 bra */
L_0C0B7730: BLKS(0x0C0B7730u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B7732u, 1);  /* 0C0B7730 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B7732 mov Rm,Rn */
	r5 = 0x6u;  /* 0C0B7734 mov #imm,Rn */
	IF(0x0C0B7736u); { u32 t_ = r12; PR = 0x0C0B773Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B773Au); }  /* 0C0B7736 jsr @Rn */
L_0C0B773A: BLKS(0x0C0B773Au);
	T = (r0 & r0) == 0;  /* 0C0B773A tst Rm,Rn */
	if (T) { UPD(0x0C0B77FEu, 4); goto L_0C0B77FE; }  /* 0C0B773C bt */
L_0C0B773E: BLKS(0x0C0B773Eu);
	r9 = 0xB4u; UPD(0x0C0B7740u, 1);  /* 0C0B773E mov.w @(disp,pc),Rn */
	IF(0x0C0B7740u); MACL = r10 * r9;  /* 0C0B7740 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B7744u, 3);  /* 0C0B7742 mov.l @(disp,pc),Rn */
	IF(0x0C0B7744u); r9 = MACL;  /* 0C0B7744 sts macl,Rn */
	r9 += r3;  /* 0C0B7746 add Rm,Rn */
	r7 = R32(r9 + 0x30u); UPD(0x0C0B774Au, 3);  /* 0C0B7748 mov.l @(disp,Rm),Rn */
	IF(0x0C0B774Au); T = (s32)r7 > 0;  /* 0C0B774A cmp/pl Rn */
	IF(0x0C0B774Cu); r8 = T;  /* 0C0B774C movt Rn */
	T = (r8 & r8) == 0;  /* 0C0B774E tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0B7750 mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0B7752 negc Rm,Rn */
	r2 = 0xC1E96C8u; UPD(0x0C0B7756u, 6);  /* 0C0B7754 mov.l @(disp,pc),Rn */
	IF(0x0C0B7756u); r0 <<= 2;  /* 0C0B7756 shll2 Rn */
	r11 = R32(r9 + 0xCu); UPD(0x0C0B775Au, 2);  /* 0C0B7758 mov.l @(disp,Rm),Rn */
	IF(0x0C0B775Au); r4 = R32(r0 + r2); UPD(0x0C0B775Cu, 1);  /* 0C0B775A mov.l @(r0,Rm),Rn */
	r11 += r11;  /* 0C0B775C add Rm,Rn */
	r4 += r11;  /* 0C0B775E add Rm,Rn */
	r4 += 0xFFFFFFEAu;  /* 0C0B7760 add #imm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0B7764u, 4);  /* 0C0B7762 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B7766u, 1);  /* 0C0B7764 mov.w @Rm,Rn */
	r12 = 0x200000u; UPD(0x0C0B7768u, 1);  /* 0C0B7766 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0B7768 mov Rm,Rn */
	IF(0x0C0B776Au); { u32 t_ = r13; PR = 0x0C0B776Eu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B776Eu); }  /* 0C0B776A jsr @Rn */
L_0C0B776E: BLKS(0x0C0B776Eu);
	r5 = r12;  /* 0C0B776E mov Rm,Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C0B7772u, 2);  /* 0C0B7770 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0B7772 mov Rm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0B7776u, 2);  /* 0C0B7774 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C0B7776 add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C0B777Au, 2);  /* 0C0B7778 mov.l @(disp,pc),Rn */
	IF(0x0C0B777Au); { u32 t_ = r12; PR = 0x0C0B777Eu; r13 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B777Eu); }  /* 0C0B777A jsr @Rn */
L_0C0B777E: BLKS(0x0C0B777Eu);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B7780u, 1);  /* 0C0B777E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B7780 add #imm,Rn */
	r6 += r0;  /* 0C0B7782 add Rm,Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C0B7786u, 3);  /* 0C0B7784 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C0B7786 mov #imm,Rn */
	IF(0x0C0B7788u); T = (s32)r0 > 0;  /* 0C0B7788 cmp/pl Rn */
	IF(0x0C0B778Au); r5 = T;  /* 0C0B778A movt Rn */
	T = (r5 & r5) == 0;  /* 0C0B778C tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0B778E negc Rm,Rn */
	IF(0x0C0B7790u); r1 <<= 2;  /* 0C0B7790 shll2 Rn */
	r3 = 0xC1E96D0u; UPD(0x0C0B7794u, 7);  /* 0C0B7792 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C0B7794 mov Rm,Rn */
	IF(0x0C0B7796u); r7 = R32(r0 + r3); UPD(0x0C0B7798u, 2);  /* 0C0B7796 mov.l @(r0,Rm),Rn */
	r5 = r13;  /* 0C0B7798 mov Rm,Rn */
	r6 += r7;  /* 0C0B779A add Rm,Rn */
	r7 = r11;  /* 0C0B779C mov Rm,Rn */
	r11 = 0xC0BAD60u; UPD(0x0C0B77A0u, 4);  /* 0C0B779E mov.l @(disp,pc),Rn */
	r2 = 0x30000u; UPD(0x0C0B77A2u, 1);  /* 0C0B77A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B77A2u); { u32 t_ = r11; PR = 0x0C0B77A6u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0B77A6u); }  /* 0C0B77A2 jsr @Rn */
L_0C0B77A6: BLKS(0x0C0B77A6u);
	r0 = 0x88u; UPD(0x0C0B77A8u, 1);  /* 0C0B77A6 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0B77A8 add #imm,Rn */
	IF(0x0C0B77AAu); r4 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B77ACu, 2);  /* 0C0B77AA mov.w @(r0,Rm),Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C0B77AEu, 1);  /* 0C0B77AC mov.l @(disp,Rm),Rn */
	{ r1 += r4; /* slot add Rm,Rn */ UPD(0x0C0B6F26u, 3); goto L_0C0B6F26; }  /* 0C0B77AE bra */
L_0C0B77F0: BLKS(0x0C0B77F0u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B77F2u, 1);  /* 0C0B77F0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B77F2 mov Rm,Rn */
	r5 = 0x6u;  /* 0C0B77F4 mov #imm,Rn */
	IF(0x0C0B77F6u); { u32 t_ = r12; PR = 0x0C0B77FAu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B77FAu); }  /* 0C0B77F6 jsr @Rn */
L_0C0B77FA: BLKS(0x0C0B77FAu);
	T = (r0 & r0) == 0;  /* 0C0B77FA tst Rm,Rn */
	if (!T) { UPD(0x0C0B7806u, 4); goto L_0C0B7806; }  /* 0C0B77FC bf */
L_0C0B77FE: BLKS(0x0C0B77FEu);
	r13 = 0xFFFFE4C2u; UPD(0x0C0B7800u, 1);  /* 0C0B77FE mov.w @(disp,pc),Rn */
	IF(0x0C0B7800u); { u32 tv_ = (r13 + 0x0C0B7804u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7800 braf Rn */
L_0C0B7806: BLKS(0x0C0B7806u);
	r8 = 0xB4u; UPD(0x0C0B7808u, 1);  /* 0C0B7806 mov.w @(disp,pc),Rn */
	IF(0x0C0B7808u); MACL = r10 * r8;  /* 0C0B7808 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B780Cu, 3);  /* 0C0B780A mov.l @(disp,pc),Rn */
	IF(0x0C0B780Cu); r8 = MACL;  /* 0C0B780C sts macl,Rn */
	r8 += r2;  /* 0C0B780E add Rm,Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C0B7812u, 3);  /* 0C0B7810 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7812u); T = (s32)r0 > 0;  /* 0C0B7812 cmp/pl Rn */
	IF(0x0C0B7814u); r13 = T;  /* 0C0B7814 movt Rn */
	T = (r13 & r13) == 0;  /* 0C0B7816 tst Rm,Rn */
	r13 = 0xFFFFFFFFu;  /* 0C0B7818 mov #imm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0B781A negc Rm,Rn */
	r4 = 0xC1E96C8u; UPD(0x0C0B781Eu, 6);  /* 0C0B781C mov.l @(disp,pc),Rn */
	IF(0x0C0B781Eu); r0 <<= 2;  /* 0C0B781E shll2 Rn */
	r11 = R32(r8 + 0xCu); UPD(0x0C0B7822u, 2);  /* 0C0B7820 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7822u); r5 = R32(r0 + r4); UPD(0x0C0B7824u, 1);  /* 0C0B7822 mov.l @(r0,Rm),Rn */
	r11 += r11;  /* 0C0B7824 add Rm,Rn */
	r5 += r11;  /* 0C0B7826 add Rm,Rn */
	r5 += 0xFFFFFFEAu;  /* 0C0B7828 add #imm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B782Cu, 4);  /* 0C0B782A mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C0B782Eu, 1);  /* 0C0B782C mov.w @Rm,Rn */
	r12 = 0x200000u; UPD(0x0C0B7830u, 1);  /* 0C0B782E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0B7830 mov Rm,Rn */
	IF(0x0C0B7832u); { u32 t_ = r9; PR = 0x0C0B7836u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B7836u); }  /* 0C0B7832 jsr @Rn */
L_0C0B7836: BLKS(0x0C0B7836u);
	r5 = r12;  /* 0C0B7836 mov Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C0B783Au, 2);  /* 0C0B7838 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0B783A mov Rm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0B783Eu, 2);  /* 0C0B783C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0B783E add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C0B7842u, 2);  /* 0C0B7840 mov.l @(disp,pc),Rn */
	IF(0x0C0B7842u); { u32 t_ = r12; PR = 0x0C0B7846u; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B7846u); }  /* 0C0B7842 jsr @Rn */
L_0C0B7846: BLKS(0x0C0B7846u);
	r3 = R32(r8 + 0x30u); UPD(0x0C0B7848u, 1);  /* 0C0B7846 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B7848 add #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B784Cu, 2);  /* 0C0B784A mov.l @(disp,Rm),Rn */
	IF(0x0C0B784Cu); T = (s32)r3 > 0;  /* 0C0B784C cmp/pl Rn */
	IF(0x0C0B784Eu); r7 = T;  /* 0C0B784E movt Rn */
	r6 += r0;  /* 0C0B7850 add Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B7852 tst Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0B7854 negc Rm,Rn */
	r2 = 0xC1E96D0u; UPD(0x0C0B7858u, 6);  /* 0C0B7856 mov.l @(disp,pc),Rn */
	IF(0x0C0B7858u); r0 <<= 2;  /* 0C0B7858 shll2 Rn */
	IF(0x0C0B785Au); r4 = R32(r0 + r2); UPD(0x0C0B785Cu, 2);  /* 0C0B785A mov.l @(r0,Rm),Rn */
	r7 = r11;  /* 0C0B785C mov Rm,Rn */
	r11 = 0xC0BAD60u; UPD(0x0C0B7860u, 2);  /* 0C0B785E mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0B7860 add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C0B7864u, 2);  /* 0C0B7862 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0B7864 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C0B7868u, 2);  /* 0C0B7866 mov.l Rm,@Rn */
	IF(0x0C0B7868u); { u32 t_ = r11; PR = 0x0C0B786Cu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0B786Cu); }  /* 0C0B7868 jsr @Rn */
L_0C0B786C: BLKS(0x0C0B786Cu);
	r5 = R32(r8 + 0xCu); UPD(0x0C0B786Eu, 1);  /* 0C0B786C mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C0B786E add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B7872u, 2);  /* 0C0B7870 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0B7872 add #imm,Rn */
	IF(0x0C0B7874u); W16(r0 + r8, r13); UPD(0x0C0B7876u, 2);  /* 0C0B7874 mov.w Rm,@(r0,Rn) */
	r1 = 0xFFFFE552u; UPD(0x0C0B7878u, 1);  /* 0C0B7876 mov.w @(disp,pc),Rn */
	IF(0x0C0B7878u); { u32 tv_ = (r1 + 0x0C0B787Cu); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DCEu: goto L_0C0B5DCE; default: JUMPD(tv_); } }  /* 0C0B7878 braf Rn */
L_0C0B7880: BLKS(0x0C0B7880u);
	r12 = 0xC0A8D30u; UPD(0x0C0B7882u, 1);  /* 0C0B7880 mov.l @(disp,pc),Rn */
	IF(0x0C0B7882u); { u32 t_ = r12; PR = 0x0C0B7886u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7886u); }  /* 0C0B7882 jsr @Rn */
L_0C0B7886: BLKS(0x0C0B7886u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7886 exts.w Rm,Rn */
	IF(0x0C0B7888u); T = (s32)r11 >= 0;  /* 0C0B7888 cmp/pz Rn */
	if (!T) { UPD(0x0C0B78EEu, 5); goto L_0C0B78EE; }  /* 0C0B788A bf */
L_0C0B788C: BLKS(0x0C0B788Cu);
	r5 = 0xB4u; UPD(0x0C0B788Eu, 1);  /* 0C0B788C mov.w @(disp,pc),Rn */
	IF(0x0C0B788Eu); MACL = r10 * r5;  /* 0C0B788E mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B7892u, 3);  /* 0C0B7890 mov.l @(disp,pc),Rn */
	IF(0x0C0B7892u); r8 = MACL;  /* 0C0B7892 sts macl,Rn */
	IF(0x0C0B7894u); MACL = r11 * r5;  /* 0C0B7894 mul.l Rm,Rn */
	r8 += r9;  /* 0C0B7896 add Rm,Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0B789Au, 5);  /* 0C0B7898 mov.l @(disp,Rm),Rn */
	IF(0x0C0B789Au); r0 = MACL;  /* 0C0B789A sts macl,Rn */
	r0 += r9;  /* 0C0B789C add Rm,Rn */
	r12 = R32(r0 + 0x24u); UPD(0x0C0B78A0u, 3);  /* 0C0B789E mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C0B78A2u, 1);  /* 0C0B78A0 mov.l @(disp,Rm),Rn */
	r12 += r7;  /* 0C0B78A2 add Rm,Rn */
	r13 = R32(r8 + 0x30u); UPD(0x0C0B78A6u, 2);  /* 0C0B78A4 mov.l @(disp,Rm),Rn */
	r11 += r13;  /* 0C0B78A6 add Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0B78AAu, 2);  /* 0C0B78A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C0B78ACu, 1);  /* 0C0B78AA mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C0B78AC add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B78B0u, 2);  /* 0C0B78AE mov.w @Rm,Rn */
	IF(0x0C0B78B0u); MACL = r4 * r5;  /* 0C0B78B0 mul.l Rm,Rn */
	r6 = 0xA0u; UPD(0x0C0B78B4u, 3);  /* 0C0B78B2 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0B78B4 add #imm,Rn */
	IF(0x0C0B78B6u); r1 = MACL;  /* 0C0B78B6 sts macl,Rn */
	r1 += r9;  /* 0C0B78B8 add Rm,Rn */
	r1 += r6;  /* 0C0B78BA add Rm,Rn */
	r6 += r8;  /* 0C0B78BC add Rm,Rn */
	r1 += 0x2u;  /* 0C0B78BE add #imm,Rn */
	r6 += 0x1u;  /* 0C0B78C0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B78C4u, 8);  /* 0C0B78C2 mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B78C6u, 1);  /* 0C0B78C4 mov.b @Rm,Rn */
	T = (r3 & r7) == 0;  /* 0C0B78C6 tst Rm,Rn */
	if (T) { UPD(0x0C0B79AAu, 4); goto L_0C0B79AA; }  /* 0C0B78C8 bt */
L_0C0B78CA: BLKS(0x0C0B78CAu);
	r9 = 0xC062780u; UPD(0x0C0B78CCu, 1);  /* 0C0B78CA mov.l @(disp,pc),Rn */
	IF(0x0C0B78CCu); { u32 t_ = r9; PR = 0x0C0B78D0u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B78D0u); }  /* 0C0B78CC jsr @Rn */
L_0C0B78D0: BLKS(0x0C0B78D0u);
	r2 = R32(r8 + 0x8u); UPD(0x0C0B78D2u, 1);  /* 0C0B78D0 mov.l @(disp,Rm),Rn */
	r0 += r0;  /* 0C0B78D2 add Rm,Rn */
	r2 += r0;  /* 0C0B78D4 add Rm,Rn */
	r2 += 0x2u;  /* 0C0B78D6 add #imm,Rn */
	r0 = 0xC0A8B10u; UPD(0x0C0B78DAu, 4);  /* 0C0B78D8 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B78DA mov Rm,Rn */
	{ W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B7544u, 4); goto L_0C0B7544; }  /* 0C0B78DC bra */
L_0C0B78E0: BLKS(0x0C0B78E0u);
	r8 = 0xC0A8D30u; UPD(0x0C0B78E2u, 1);  /* 0C0B78E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B78E2u); { u32 t_ = r8; PR = 0x0C0B78E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B78E6u); }  /* 0C0B78E2 jsr @Rn */
L_0C0B78E6: BLKS(0x0C0B78E6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B78E6 exts.w Rm,Rn */
	IF(0x0C0B78E8u); T = (s32)r11 >= 0;  /* 0C0B78E8 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0xEu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B78F6u, 5); goto L_0C0B78F6; } UPD(0x0C0B78EEu, 1); goto L_0C0B78EE; }  /* 0C0B78EA bt/s */
L_0C0B78EE: BLKS(0x0C0B78EEu);
	r1 = 0xFFFFE5FCu; UPD(0x0C0B78F0u, 1);  /* 0C0B78EE mov.w @(disp,pc),Rn */
	IF(0x0C0B78F0u); { u32 tv_ = (r1 + 0x0C0B78F4u); u32 t_ = PHYS(tv_); IF(0x0C0B78F2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B78F0 braf Rn */
L_0C0B78F6: BLKS(0x0C0B78F6u);
	r12 = 0xB4u; UPD(0x0C0B78F8u, 1);  /* 0C0B78F6 mov.w @(disp,pc),Rn */
	IF(0x0C0B78F8u); MACL = r10 * r12;  /* 0C0B78F8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B78FCu, 3);  /* 0C0B78FA mov.l @(disp,pc),Rn */
	IF(0x0C0B78FCu); r6 = MACL;  /* 0C0B78FC sts macl,Rn */
	IF(0x0C0B78FEu); MACL = r11 * r12;  /* 0C0B78FE mul.l Rm,Rn */
	r6 += r0;  /* 0C0B7900 add Rm,Rn */
	r13 = R32(r6 + 0x2Cu); UPD(0x0C0B7904u, 5);  /* 0C0B7902 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7904u); r4 = MACL;  /* 0C0B7904 sts macl,Rn */
	r4 += r0;  /* 0C0B7906 add Rm,Rn */
	r11 = R32(r4 + 0x24u); UPD(0x0C0B790Au, 3);  /* 0C0B7908 mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C0B790Cu, 1);  /* 0C0B790A mov.l @(disp,Rm),Rn */
	r11 += r13;  /* 0C0B790C add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C0B7910u, 2);  /* 0C0B790E mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0B7910 add Rm,Rn */
	W32(r6 + 0x24u, r11); UPD(0x0C0B7914u, 2);  /* 0C0B7912 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r5); UPD(0x0C0B7916u, 1);  /* 0C0B7914 mov.l Rm,@(disp,Rn) */
	r6 += 0x7Eu;  /* 0C0B7916 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C0B791Au, 2);  /* 0C0B7918 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C0B791A add #imm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C0B791Eu, 2);  /* 0C0B791C mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C0B791E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B7990u, 4); goto L_0C0B7990; }  /* 0C0B7920 bt */
L_0C0B7922: BLKS(0x0C0B7922u);
	r0 = 0xC0B7968u;  /* 0C0B7922 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B7924 add Rm,Rn */
	IF(0x0C0B7926u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B7928u, 3);  /* 0C0B7926 mov.w @(r0,Rm),Rn */
	IF(0x0C0B7928u); { u32 tv_ = (r7 + 0x0C0B792Cu); u32 t_ = PHYS(tv_); IF(0x0C0B792Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B7990u: goto L_0C0B7990; case 0x0C0B79E0u: goto L_0C0B79E0; case 0x0C0B7A10u: goto L_0C0B7A10; case 0x0C0B7A3Au: goto L_0C0B7A3A; default: JUMPD(tv_); } }  /* 0C0B7928 braf Rn */
L_0C0B7990: BLKS(0x0C0B7990u);
	r8 = 0xB4u; UPD(0x0C0B7992u, 1);  /* 0C0B7990 mov.w @(disp,pc),Rn */
	r9 = 0x3u;  /* 0C0B7992 mov #imm,Rn */
	IF(0x0C0B7994u); MACL = r10 * r8;  /* 0C0B7994 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B7998u, 4);  /* 0C0B7996 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B799Au, 1);  /* 0C0B7998 mov.w @(disp,pc),Rn */
	IF(0x0C0B799Au); r8 = MACL;  /* 0C0B799A sts macl,Rn */
	r8 += r6;  /* 0C0B799C add Rm,Rn */
	IF(0x0C0B799Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B79A0u, 3);  /* 0C0B799E mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0B79A0 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C0B79A2 extu.b Rm,Rn */
	T = r2 > r9;  /* 0C0B79A4 cmp/hi Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B79A8u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B79B2u, 6); goto L_0C0B79B2; } UPD(0x0C0B79AAu, 1); goto L_0C0B79AA; }  /* 0C0B79A6 bt/s */
L_0C0B79AA: BLKS(0x0C0B79AAu);
	r13 = 0xFFFFE316u; UPD(0x0C0B79ACu, 1);  /* 0C0B79AA mov.w @(disp,pc),Rn */
	IF(0x0C0B79ACu); { u32 tv_ = (r13 + 0x0C0B79B0u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B79AC braf Rn */
L_0C0B79B2: BLKS(0x0C0B79B2u);
	r13 = 0x0u;  /* 0C0B79B2 mov #imm,Rn */
	IF(0x0C0B79B4u); W8(r0 + r8, r13); UPD(0x0C0B79B6u, 2);  /* 0C0B79B4 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFEFu;  /* 0C0B79B6 add #imm,Rn */
	r4 = R32(r8 + 0xCu); UPD(0x0C0B79BAu, 2);  /* 0C0B79B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B79BAu); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B79BCu, 1);  /* 0C0B79BA mov.w @(r0,Rm),Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B79BEu, 1);  /* 0C0B79BC mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0B79BE add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0B79C2u, 2);  /* 0C0B79C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B79C2u); { u32 t_ = r11; PR = 0x0C0B79C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B79C6u); }  /* 0C0B79C2 jsr @Rn */
L_0C0B79C6: BLKS(0x0C0B79C6u);
	r5 = R32(r8 + 0xCu); UPD(0x0C0B79C8u, 1);  /* 0C0B79C6 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0B79C8 tst Rm,Rn */
	if (!T) { UPD(0x0C0B7A62u, 4); goto L_0C0B7A62; }  /* 0C0B79CA bf */
L_0C0B79CC: BLKS(0x0C0B79CCu);
	r1 = R32(r8 + 0x8u); UPD(0x0C0B79CEu, 1);  /* 0C0B79CC mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFEu;  /* 0C0B79CE add #imm,Rn */
	UPD(0x0C0B79D0u, 1);
L_0C0B79D0: BLKS(0x0C0B79D0u);
	r4 = r10;  /* 0C0B79D0 mov Rm,Rn */
	r10 = 0xC0A8B10u; UPD(0x0C0B79D4u, 2);  /* 0C0B79D2 mov.l @(disp,pc),Rn */
	IF(0x0C0B79D4u); { u32 t_ = r10; PR = 0x0C0B79D8u; W32(r8 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0B79D8u); }  /* 0C0B79D4 jsr @Rn */
L_0C0B79D8: BLKS(0x0C0B79D8u);
	{ r6 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B6D26u, 3); goto L_0C0B6D26; }  /* 0C0B79D8 bra */
L_0C0B79E0: BLKS(0x0C0B79E0u);
	r0 = 0xB4u; UPD(0x0C0B79E2u, 1);  /* 0C0B79E0 mov.w @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C0B79E2 mov #imm,Rn */
	IF(0x0C0B79E4u); MACL = r10 * r0;  /* 0C0B79E4 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B79E8u, 4);  /* 0C0B79E6 mov.l @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C0B79E8 mov #imm,Rn */
	r12 = 0x9Cu; UPD(0x0C0B79ECu, 2);  /* 0C0B79EA mov.w @(disp,pc),Rn */
	IF(0x0C0B79ECu); r0 = MACL;  /* 0C0B79EC sts macl,Rn */
	r0 += r8;  /* 0C0B79EE add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C0B79F2u, 3);  /* 0C0B79F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B79F2u); W8(r0 + r12, r6); UPD(0x0C0B79F4u, 1);  /* 0C0B79F2 mov.b Rm,@(r0,Rn) */
	r11 += 0x1u;  /* 0C0B79F4 add #imm,Rn */
	r12 += 0xFFFFFFECu;  /* 0C0B79F6 add #imm,Rn */
	IF(0x0C0B79F8u); W16(r0 + r12, r9); UPD(0x0C0B79FAu, 3);  /* 0C0B79F8 mov.w Rm,@(r0,Rn) */
	r1 = 0xFFFFE3CEu; UPD(0x0C0B79FCu, 1);  /* 0C0B79FA mov.w @(disp,pc),Rn */
	IF(0x0C0B79FCu); { u32 tv_ = (r1 + 0x0C0B7A00u); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DCEu: goto L_0C0B5DCE; default: JUMPD(tv_); } }  /* 0C0B79FC braf Rn */
L_0C0B7A10: BLKS(0x0C0B7A10u);
	r7 = 0xB4u; UPD(0x0C0B7A12u, 1);  /* 0C0B7A10 mov.w @(disp,pc),Rn */
	IF(0x0C0B7A12u); MACL = r11 * r7;  /* 0C0B7A12 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7A16u, 3);  /* 0C0B7A14 mov.l @(disp,pc),Rn */
	IF(0x0C0B7A16u); r6 = MACL;  /* 0C0B7A16 sts macl,Rn */
	IF(0x0C0B7A18u); MACL = r10 * r7;  /* 0C0B7A18 mul.l Rm,Rn */
	r9 = 0xA0u; UPD(0x0C0B7A1Cu, 4);  /* 0C0B7A1A mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C0B7A1C add Rm,Rn */
	IF(0x0C0B7A1Eu); r3 = MACL;  /* 0C0B7A1E sts macl,Rn */
	r6 += r9;  /* 0C0B7A20 add Rm,Rn */
	r3 += r2;  /* 0C0B7A22 add Rm,Rn */
	r9 += r3;  /* 0C0B7A24 add Rm,Rn */
	r6 += 0x2u;  /* 0C0B7A26 add #imm,Rn */
	r9 += 0x1u;  /* 0C0B7A28 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B7A2Cu, 8);  /* 0C0B7A2A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B7A2Eu, 1);  /* 0C0B7A2C mov.b @Rm,Rn */
	T = (r12 & r0) == 0;  /* 0C0B7A2E tst Rm,Rn */
	if (!T) { UPD(0x0C0B7A3Au, 4); goto L_0C0B7A3A; }  /* 0C0B7A30 bf */
L_0C0B7A32: BLKS(0x0C0B7A32u);
	r0 = 0xFFFFE4A8u; UPD(0x0C0B7A34u, 1);  /* 0C0B7A32 mov.w @(disp,pc),Rn */
	IF(0x0C0B7A34u); { u32 tv_ = (r0 + 0x0C0B7A38u); u32 t_ = PHYS(tv_); IF(0x0C0B7A36u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EE0u: goto L_0C0B5EE0; default: JUMPD(tv_); } }  /* 0C0B7A34 braf Rn */
L_0C0B7A3A: BLKS(0x0C0B7A3Au);
	r11 = 0xB4u; UPD(0x0C0B7A3Cu, 1);  /* 0C0B7A3A mov.w @(disp,pc),Rn */
	IF(0x0C0B7A3Cu); MACL = r10 * r11;  /* 0C0B7A3C mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B7A40u, 3);  /* 0C0B7A3E mov.l @(disp,pc),Rn */
	IF(0x0C0B7A40u); r11 = MACL;  /* 0C0B7A40 sts macl,Rn */
	r11 += r4;  /* 0C0B7A42 add Rm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C0B7A46u, 3);  /* 0C0B7A44 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B7A46 mov Rm,Rn */
	r5 = 0xC1E96C0u; UPD(0x0C0B7A4Au, 2);  /* 0C0B7A48 mov.l @(disp,pc),Rn */
	IF(0x0C0B7A4Au); r0 <<= 2;  /* 0C0B7A4A shll2 Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B7A4Eu, 2);  /* 0C0B7A4C mov.l @(disp,pc),Rn */
	IF(0x0C0B7A4Eu); r3 = R32(r0 + r5); UPD(0x0C0B7A50u, 1);  /* 0C0B7A4E mov.l @(r0,Rm),Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C0B7A52u, 1);  /* 0C0B7A50 mov.l @(disp,pc),Rn */
	IF(0x0C0B7A52u); { u32 t_ = r13; PR = 0x0C0B7A56u; W32(r11 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B7A56u); }  /* 0C0B7A52 jsr @Rn */
L_0C0B7A56: BLKS(0x0C0B7A56u);
	r4 = r10;  /* 0C0B7A56 mov Rm,Rn */
	r5 = 0xAu;  /* 0C0B7A58 mov #imm,Rn */
	IF(0x0C0B7A5Au); { u32 t_ = r8; PR = 0x0C0B7A5Eu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B7A5Eu); }  /* 0C0B7A5A jsr @Rn */
L_0C0B7A5E: BLKS(0x0C0B7A5Eu);
	T = (r0 & r0) == 0;  /* 0C0B7A5E tst Rm,Rn */
	if (!T) { UPD(0x0C0B7A6Au, 4); goto L_0C0B7A6A; }  /* 0C0B7A60 bf */
L_0C0B7A62: BLKS(0x0C0B7A62u);
	r13 = 0xFFFFE25Eu; UPD(0x0C0B7A64u, 1);  /* 0C0B7A62 mov.w @(disp,pc),Rn */
	IF(0x0C0B7A64u); { u32 tv_ = (r13 + 0x0C0B7A68u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7A64 braf Rn */
L_0C0B7A6A: BLKS(0x0C0B7A6Au);
	r12 = 0x9Cu; UPD(0x0C0B7A6Cu, 1);  /* 0C0B7A6A mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0B7A6C mov #imm,Rn */
	r12 += r11;  /* 0C0B7A6E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B7A72u, 3);  /* 0C0B7A70 mov.b @Rm,Rn */
	r2 &= r0;  /* 0C0B7A72 and Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C0B7A76u, 2);  /* 0C0B7A74 mov.l @(disp,Rm),Rn */
	r1 = 0xC1E973Cu; UPD(0x0C0B7A78u, 1);  /* 0C0B7A76 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B7A78 and #imm,r0 */
	IF(0x0C0B7A7Au); r0 <<= 2;  /* 0C0B7A7A shll2 Rn */
	UPD(0x0C0B7A7Cu, 2);
L_0C0B7A7C: BLKS(0x0C0B7A7Cu);
	IF(0x0C0B7A7Cu); r3 = R32(r0 + r1); UPD(0x0C0B7A7Eu, 1);  /* 0C0B7A7C mov.l @(r0,Rm),Rn */
	IF(0x0C0B7A7Eu); r2 <<= 2;  /* 0C0B7A7E shll2 Rn */
	r7 = R32(r11 + 0x24u); UPD(0x0C0B7A82u, 2);  /* 0C0B7A80 mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C0B7A82 mov Rm,Rn */
	IF(0x0C0B7A84u); r13 = R32(r0 + r3); UPD(0x0C0B7A86u, 2);  /* 0C0B7A84 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0B7A88u, 1);  /* 0C0B7A86 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r13); r13 += 4; r2 = v_; } UPD(0x0C0B7A8Au, 1);  /* 0C0B7A88 mov.l @Rm+,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0B7A8Cu, 1);  /* 0C0B7A8A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r5 = v_; } UPD(0x0C0B7A8Eu, 1);  /* 0C0B7A8C mov.l @Rm+,Rn */
	r4 += r2;  /* 0C0B7A8E add Rm,Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C0B7A92u, 2);  /* 0C0B7A90 mov.l @(disp,Rm),Rn */
	r9 = 0xC069B90u; UPD(0x0C0B7A94u, 1);  /* 0C0B7A92 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C0B7A94 add Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0B7A98u, 2);  /* 0C0B7A96 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C0B7A9Au, 1);  /* 0C0B7A98 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B7A9Au); { u32 t_ = r9; PR = 0x0C0B7A9Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B7A9Eu); }  /* 0C0B7A9A jsr @Rn */
L_0C0B7A9E: BLKS(0x0C0B7A9Eu);
	r4 = r10;  /* 0C0B7A9E mov Rm,Rn */
	r10 = 0xC069C40u; UPD(0x0C0B7AA2u, 2);  /* 0C0B7AA0 mov.l @(disp,pc),Rn */
	r9 = 0xC0BA970u; UPD(0x0C0B7AA4u, 1);  /* 0C0B7AA2 mov.l @(disp,pc),Rn */
	IF(0x0C0B7AA4u); { u32 t_ = r10; PR = 0x0C0B7AA8u; IF(0x0C0B7AA6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069C40, 0x0C069C40u, 0x0C0B7AA8u); }  /* 0C0B7AA4 jsr @Rn */
L_0C0B7AA8: BLKS(0x0C0B7AA8u);
	r10 = 0x86u; UPD(0x0C0B7AAAu, 1);  /* 0C0B7AA8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B7AAA add #imm,Rn */
	r10 += r11;  /* 0C0B7AAC add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C0B7AB0u, 3);  /* 0C0B7AAE mov.w @Rm,Rn */
	r4 = 0x3u;  /* 0C0B7AB0 mov #imm,Rn */
	r6 = R32(r13); UPD(0x0C0B7AB4u, 2);  /* 0C0B7AB2 mov.l @Rm,Rn */
	r3 = 0xC18A00Au; UPD(0x0C0B7AB6u, 1);  /* 0C0B7AB4 mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C0B7AB8u, 1);  /* 0C0B7AB6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B7ABAu, 1);  /* 0C0B7AB8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x4u); UPD(0x0C0B7ABCu, 1);  /* 0C0B7ABA mov.l @(disp,Rm),Rn */
	IF(0x0C0B7ABCu); { u32 t_ = r9; PR = 0x0C0B7AC0u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B7AC0u); }  /* 0C0B7ABC jsr @Rn */
L_0C0B7AC0: BLKS(0x0C0B7AC0u);
	r2 = 0xA2u; UPD(0x0C0B7AC2u, 1);  /* 0C0B7AC0 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C0B7AC2 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B7AC6u, 2);  /* 0C0B7AC4 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0B7AC8u, 1);  /* 0C0B7AC6 mov.w @Rm,Rn */
	r7 += 0x1u;  /* 0C0B7AC8 add #imm,Rn */
	IF(0x0C0B7ACAu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B7ACCu, 2);  /* 0C0B7ACA mov.b @(r0,Rm),Rn */
	r5 += r4;  /* 0C0B7ACC add Rm,Rn */
	W8(r12, r7); UPD(0x0C0B7AD0u, 2);  /* 0C0B7ACE mov.b Rm,@Rn */
	r13 = 0xFFFFE82Eu; UPD(0x0C0B7AD2u, 1);  /* 0C0B7AD0 mov.w @(disp,pc),Rn */
	IF(0x0C0B7AD2u); { u32 tv_ = (r13 + 0x0C0B7AD6u); u32 t_ = PHYS(tv_); W16(r10, r5); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6304u: goto L_0C0B6304; default: JUMPD(tv_); } }  /* 0C0B7AD2 braf Rn */
L_0C0B7AE0: BLKS(0x0C0B7AE0u);
	r12 = 0xC0A8D30u; UPD(0x0C0B7AE2u, 1);  /* 0C0B7AE0 mov.l @(disp,pc),Rn */
	IF(0x0C0B7AE2u); { u32 t_ = r12; PR = 0x0C0B7AE6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7AE6u); }  /* 0C0B7AE2 jsr @Rn */
L_0C0B7AE6: BLKS(0x0C0B7AE6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7AE6 exts.w Rm,Rn */
	IF(0x0C0B7AE8u); T = (s32)r11 >= 0;  /* 0C0B7AE8 cmp/pz Rn */
	{ u32 c_ = T; r9 = 0x15u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B7AF6u, 5); goto L_0C0B7AF6; } goto L_0C0B7AEE; }  /* 0C0B7AEA bt/s */
L_0C0B7AEE: BLKS(0x0C0B7AEEu);
	r1 = 0xFFFFE3FCu; UPD(0x0C0B7AF0u, 2);  /* 0C0B7AEE mov.w @(disp,pc),Rn */
	IF(0x0C0B7AF0u); { u32 tv_ = (r1 + 0x0C0B7AF4u); u32 t_ = PHYS(tv_); IF(0x0C0B7AF2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7AF0 braf Rn */
L_0C0B7AF6: BLKS(0x0C0B7AF6u);
	r2 = 0xB4u; UPD(0x0C0B7AF8u, 1);  /* 0C0B7AF6 mov.w @(disp,pc),Rn */
	IF(0x0C0B7AF8u); MACL = r10 * r2;  /* 0C0B7AF8 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B7AFCu, 3);  /* 0C0B7AFA mov.l @(disp,pc),Rn */
	IF(0x0C0B7AFCu); r6 = MACL;  /* 0C0B7AFC sts macl,Rn */
	IF(0x0C0B7AFEu); MACL = r11 * r2;  /* 0C0B7AFE mul.l Rm,Rn */
	r6 += r5;  /* 0C0B7B00 add Rm,Rn */
	r3 = R32(r6 + 0x2Cu); UPD(0x0C0B7B04u, 5);  /* 0C0B7B02 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7B04u); r13 = MACL;  /* 0C0B7B04 sts macl,Rn */
	r13 += r5;  /* 0C0B7B06 add Rm,Rn */
	r7 = R32(r13 + 0x24u); UPD(0x0C0B7B0Au, 3);  /* 0C0B7B08 mov.l @(disp,Rm),Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C0B7B0Cu, 1);  /* 0C0B7B0A mov.l @(disp,Rm),Rn */
	r7 += r3;  /* 0C0B7B0C add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C0B7B10u, 2);  /* 0C0B7B0E mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C0B7B10 add Rm,Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C0B7B14u, 2);  /* 0C0B7B12 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r8); UPD(0x0C0B7B16u, 1);  /* 0C0B7B14 mov.l Rm,@(disp,Rn) */
	r6 += 0x7Eu;  /* 0C0B7B16 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C0B7B1Au, 2);  /* 0C0B7B18 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C0B7B1A add #imm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C0B7B1Eu, 2);  /* 0C0B7B1C mov.l @(disp,Rm),Rn */
	T = r2 > r9;  /* 0C0B7B1E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B7B90u, 4); goto L_0C0B7B90; }  /* 0C0B7B20 bt */
L_0C0B7B22: BLKS(0x0C0B7B22u);
	r0 = 0xC0B7B64u;  /* 0C0B7B22 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B7B24 add Rm,Rn */
	IF(0x0C0B7B26u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B7B28u, 3);  /* 0C0B7B26 mov.w @(r0,Rm),Rn */
	IF(0x0C0B7B28u); { u32 tv_ = (r4 + 0x0C0B7B2Cu); u32 t_ = PHYS(tv_); IF(0x0C0B7B2Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B79E0u: goto L_0C0B79E0; case 0x0C0B7B90u: goto L_0C0B7B90; case 0x0C0B7BD0u: goto L_0C0B7BD0; case 0x0C0B7BFAu: goto L_0C0B7BFA; default: JUMPD(tv_); } }  /* 0C0B7B28 braf Rn */
L_0C0B7B90: BLKS(0x0C0B7B90u);
	r2 = 0xB4u; UPD(0x0C0B7B92u, 1);  /* 0C0B7B90 mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C0B7B92 mov #imm,Rn */
	IF(0x0C0B7B94u); MACL = r10 * r2;  /* 0C0B7B94 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B7B98u, 4);  /* 0C0B7B96 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B7B9Au, 1);  /* 0C0B7B98 mov.w @(disp,pc),Rn */
	IF(0x0C0B7B9Au); r8 = MACL;  /* 0C0B7B9A sts macl,Rn */
	r8 += r5;  /* 0C0B7B9C add Rm,Rn */
	IF(0x0C0B7B9Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B7BA0u, 3);  /* 0C0B7B9E mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0B7BA0 add #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C0B7BA2 extu.b Rm,Rn */
	T = r7 > r13;  /* 0C0B7BA4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B7BA8u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B7C22u, 6); goto L_0C0B7C22; } UPD(0x0C0B7BAAu, 1); goto L_0C0B7BAA; }  /* 0C0B7BA6 bf/s */
L_0C0B7BAA: BLKS(0x0C0B7BAAu);
	r9 = 0x0u;  /* 0C0B7BAA mov #imm,Rn */
	IF(0x0C0B7BACu); W8(r0 + r8, r9); UPD(0x0C0B7BAEu, 2);  /* 0C0B7BAC mov.b Rm,@(r0,Rn) */
	r4 = r10;  /* 0C0B7BAE mov Rm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C0B7BB0 add #imm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C0B7BB4u, 3);  /* 0C0B7BB2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7BB4u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B7BB6u, 1);  /* 0C0B7BB4 mov.w @(r0,Rm),Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B7BB8u, 1);  /* 0C0B7BB6 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C0B7BB8 add Rm,Rn */
	IF(0x0C0B7BBAu); { u32 t_ = r11; PR = 0x0C0B7BBEu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B7BBEu); }  /* 0C0B7BBA jsr @Rn */
L_0C0B7BBE: BLKS(0x0C0B7BBEu);
	r4 = R32(r8 + 0xCu); UPD(0x0C0B7BC0u, 1);  /* 0C0B7BBE mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0B7BC0 tst Rm,Rn */
	if (!T) { UPD(0x0C0B7C22u, 4); goto L_0C0B7C22; }  /* 0C0B7BC2 bf */
L_0C0B7BC4: BLKS(0x0C0B7BC4u);
	r1 = R32(r8 + 0x8u); UPD(0x0C0B7BC6u, 1);  /* 0C0B7BC4 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(0x0C0B79D0u, 3); goto L_0C0B79D0; }  /* 0C0B7BC6 bra */
L_0C0B7BD0: BLKS(0x0C0B7BD0u);
	r7 = 0xB4u; UPD(0x0C0B7BD2u, 1);  /* 0C0B7BD0 mov.w @(disp,pc),Rn */
	IF(0x0C0B7BD2u); MACL = r11 * r7;  /* 0C0B7BD2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B7BD6u, 3);  /* 0C0B7BD4 mov.l @(disp,pc),Rn */
	IF(0x0C0B7BD6u); r4 = MACL;  /* 0C0B7BD6 sts macl,Rn */
	IF(0x0C0B7BD8u); MACL = r10 * r7;  /* 0C0B7BD8 mul.l Rm,Rn */
	r5 = 0xA0u; UPD(0x0C0B7BDCu, 4);  /* 0C0B7BDA mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C0B7BDC add Rm,Rn */
	IF(0x0C0B7BDEu); r3 = MACL;  /* 0C0B7BDE sts macl,Rn */
	r4 += r5;  /* 0C0B7BE0 add Rm,Rn */
	r3 += r2;  /* 0C0B7BE2 add Rm,Rn */
	r5 += r3;  /* 0C0B7BE4 add Rm,Rn */
	r4 += 0x2u;  /* 0C0B7BE6 add #imm,Rn */
	r5 += 0x1u;  /* 0C0B7BE8 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B7BECu, 8);  /* 0C0B7BEA mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B7BEEu, 1);  /* 0C0B7BEC mov.b @Rm,Rn */
	T = (r13 & r8) == 0;  /* 0C0B7BEE tst Rm,Rn */
	if (!T) { UPD(0x0C0B7BFAu, 4); goto L_0C0B7BFA; }  /* 0C0B7BF0 bf */
L_0C0B7BF2: BLKS(0x0C0B7BF2u);
	r0 = 0xFFFFE2E8u; UPD(0x0C0B7BF4u, 1);  /* 0C0B7BF2 mov.w @(disp,pc),Rn */
	IF(0x0C0B7BF4u); { u32 tv_ = (r0 + 0x0C0B7BF8u); u32 t_ = PHYS(tv_); IF(0x0C0B7BF6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EE0u: goto L_0C0B5EE0; default: JUMPD(tv_); } }  /* 0C0B7BF4 braf Rn */
L_0C0B7BFA: BLKS(0x0C0B7BFAu);
	r8 = 0xB4u; UPD(0x0C0B7BFCu, 1);  /* 0C0B7BFA mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B7BFC mov Rm,Rn */
	IF(0x0C0B7BFEu); MACL = r10 * r8;  /* 0C0B7BFE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B7C02u, 4);  /* 0C0B7C00 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C02u); r11 = MACL;  /* 0C0B7C02 sts macl,Rn */
	r11 += r0;  /* 0C0B7C04 add Rm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C0B7C08u, 3);  /* 0C0B7C06 mov.l @(disp,Rm),Rn */
	r6 = 0xC1E9758u; UPD(0x0C0B7C0Au, 1);  /* 0C0B7C08 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C0Au); r0 <<= 2;  /* 0C0B7C0A shll2 Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B7C0Eu, 2);  /* 0C0B7C0C mov.l @(disp,pc),Rn */
	IF(0x0C0B7C0Eu); r3 = R32(r0 + r6); UPD(0x0C0B7C10u, 1);  /* 0C0B7C0E mov.l @(r0,Rm),Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C0B7C12u, 1);  /* 0C0B7C10 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C12u); { u32 t_ = r9; PR = 0x0C0B7C16u; W32(r11 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B7C16u); }  /* 0C0B7C12 jsr @Rn */
L_0C0B7C16: BLKS(0x0C0B7C16u);
	r4 = r10;  /* 0C0B7C16 mov Rm,Rn */
	r5 = 0xAu;  /* 0C0B7C18 mov #imm,Rn */
	IF(0x0C0B7C1Au); { u32 t_ = r12; PR = 0x0C0B7C1Eu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B7C1Eu); }  /* 0C0B7C1A jsr @Rn */
L_0C0B7C1E: BLKS(0x0C0B7C1Eu);
	T = (r0 & r0) == 0;  /* 0C0B7C1E tst Rm,Rn */
	if (!T) { UPD(0x0C0B7C2Au, 4); goto L_0C0B7C2A; }  /* 0C0B7C20 bf */
L_0C0B7C22: BLKS(0x0C0B7C22u);
	r13 = 0xFFFFE09Eu; UPD(0x0C0B7C24u, 1);  /* 0C0B7C22 mov.w @(disp,pc),Rn */
	IF(0x0C0B7C24u); { u32 tv_ = (r13 + 0x0C0B7C28u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7C24 braf Rn */
L_0C0B7C2A: BLKS(0x0C0B7C2Au);
	r12 = 0x9Cu; UPD(0x0C0B7C2Cu, 1);  /* 0C0B7C2A mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0B7C2C mov #imm,Rn */
	r12 += r11;  /* 0C0B7C2E add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C0B7C32u, 3);  /* 0C0B7C30 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B7C34u, 1);  /* 0C0B7C32 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0B7C34 and #imm,r0 */
	r1 = 0xC1E9784u; UPD(0x0C0B7C38u, 2);  /* 0C0B7C36 mov.l @(disp,pc),Rn */
	r2 &= r13;  /* 0C0B7C38 and Rm,Rn */
	{ IF(0x0C0B7C3Cu); r0 <<= 2; /* slot shll2 Rn */ UPD(0x0C0B7A7Cu, 4); goto L_0C0B7A7C; }  /* 0C0B7C3A bra */
L_0C0B7C40: BLKS(0x0C0B7C40u);
	r11 = 0xC0A8D30u; UPD(0x0C0B7C42u, 1);  /* 0C0B7C40 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C42u); { u32 t_ = r11; PR = 0x0C0B7C46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7C46u); }  /* 0C0B7C42 jsr @Rn */
L_0C0B7C46: BLKS(0x0C0B7C46u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7C46 exts.w Rm,Rn */
	IF(0x0C0B7C48u); T = (s32)r11 >= 0;  /* 0C0B7C48 cmp/pz Rn */
	if (T) { UPD(0x0C0B7C54u, 5); goto L_0C0B7C54; }  /* 0C0B7C4A bt */
L_0C0B7C4C: BLKS(0x0C0B7C4Cu);
	r1 = 0xFFFFE29Eu; UPD(0x0C0B7C4Eu, 1);  /* 0C0B7C4C mov.w @(disp,pc),Rn */
	IF(0x0C0B7C4Eu); { u32 tv_ = (r1 + 0x0C0B7C52u); u32 t_ = PHYS(tv_); IF(0x0C0B7C50u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7C4E braf Rn */
L_0C0B7C54: BLKS(0x0C0B7C54u);
	r2 = 0xB4u; UPD(0x0C0B7C56u, 1);  /* 0C0B7C54 mov.w @(disp,pc),Rn */
	IF(0x0C0B7C56u); MACL = r10 * r2;  /* 0C0B7C56 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B7C5Au, 3);  /* 0C0B7C58 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C5Au); r3 = MACL;  /* 0C0B7C5A sts macl,Rn */
	IF(0x0C0B7C5Cu); MACL = r11 * r2;  /* 0C0B7C5C mul.l Rm,Rn */
	r3 += r6;  /* 0C0B7C5E add Rm,Rn */
	r1 = 0xA1u; UPD(0x0C0B7C62u, 5);  /* 0C0B7C60 mov.w @(disp,pc),Rn */
	IF(0x0C0B7C62u); r0 = MACL;  /* 0C0B7C62 sts macl,Rn */
	r0 += r6;  /* 0C0B7C64 add Rm,Rn */
	r8 = R32(r0 + 0x24u); UPD(0x0C0B7C68u, 3);  /* 0C0B7C66 mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C0B7C6Au, 1);  /* 0C0B7C68 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C0B7C6Cu, 1);  /* 0C0B7C6A mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0B7C6Eu, 1);  /* 0C0B7C6C mov.l @(disp,Rm),Rn */
	r8 += r4;  /* 0C0B7C6E add Rm,Rn */
	IF(0x0C0B7C70u); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0B7C72u, 2);  /* 0C0B7C70 mov.b @(r0,Rm),Rn */
	r12 += r5;  /* 0C0B7C72 add Rm,Rn */
	r0 &= 0x40u;  /* 0C0B7C74 and #imm,r0 */
	W32(r3 + 0x24u, r8); UPD(0x0C0B7C78u, 3);  /* 0C0B7C76 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0B7C78 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B7C82u, 4); goto L_0C0B7C82; } UPD(0x0C0B7C7Eu, 1); goto L_0C0B7C7E; }  /* 0C0B7C7A bf/s */
L_0C0B7C7E: BLKS(0x0C0B7C7Eu);
	{ r2 = r3; /* slot mov Rm,Rn */ UPD(0x0C0B7D60u, 3); goto L_0C0B7D60; }  /* 0C0B7C7E bra */
L_0C0B7C82: BLKS(0x0C0B7C82u);
	r3 += 0x50u;  /* 0C0B7C82 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C0B7C86u, 2);  /* 0C0B7C84 mov.l @Rm,Rn */
	r1 += 0x5Fu;  /* 0C0B7C86 add #imm,Rn */
	T = r2 == r1;  /* 0C0B7C88 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B7C90u, 5); goto L_0C0B7C90; } goto L_0C0B7C8E; }  /* 0C0B7C8A bt/s */
L_0C0B7C8E: BLKS(0x0C0B7C8Eu);
	W32(r3, r2); UPD(0x0C0B7C90u, 2);  /* 0C0B7C8E mov.l Rm,@Rn */
L_0C0B7C90: BLKS(0x0C0B7C90u);
	r3 = 0xB4u; UPD(0x0C0B7C92u, 1);  /* 0C0B7C90 mov.w @(disp,pc),Rn */
	IF(0x0C0B7C92u); MACL = r10 * r3;  /* 0C0B7C92 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B7C96u, 3);  /* 0C0B7C94 mov.l @(disp,pc),Rn */
	IF(0x0C0B7C96u); r2 = MACL;  /* 0C0B7C96 sts macl,Rn */
	r2 += r9;  /* 0C0B7C98 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0B7C9Cu, 3);  /* 0C0B7C9A mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C0B7C9C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B7CA0u, 2);  /* 0C0B7C9E mov.b @Rm,Rn */
	r1 = r7 & 0xFF;  /* 0C0B7CA0 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B7CA2 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B7D30u, 5); goto L_0C0B7D30; } goto L_0C0B7CA8; }  /* 0C0B7CA4 bt/s */
L_0C0B7CA8: BLKS(0x0C0B7CA8u);
	T = r0 == 0x1u;  /* 0C0B7CA8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B7D40u, 5); goto L_0C0B7D40; }  /* 0C0B7CAA bf */
L_0C0B7CAC: BLKS(0x0C0B7CACu);
	r4 = r3;  /* 0C0B7CAC mov Rm,Rn */
	r3 = 0x88u; UPD(0x0C0B7CB0u, 2);  /* 0C0B7CAE mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0B7CB0 mov #imm,Rn */
	W32(r14, r5); UPD(0x0C0B7CB4u, 2);  /* 0C0B7CB2 mov.l Rm,@Rn */
	r3 += r2;  /* 0C0B7CB4 add Rm,Rn */
	r3 += 0x2u;  /* 0C0B7CB6 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B7CBAu, 3);  /* 0C0B7CB8 mov.w @Rm,Rn */
	r3 += 0xFFFFFFFEu;  /* 0C0B7CBA add #imm,Rn */
	r6 = r5;  /* 0C0B7CBC mov Rm,Rn */
	UPD(0x0C0B7CBEu, 2);
L_0C0B7CBE: BLKS(0x0C0B7CBEu);
	IF(0x0C0B7CBEu); MACL = r10 * r4;  /* 0C0B7CBE mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0B7CC2u, 3);  /* 0C0B7CC0 mov.w @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0B7CC2 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0B7CC4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B7CC8u); r7 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0B7CD2u, 5); goto L_0C0B7CD2; } goto L_0C0B7CCA; }  /* 0C0B7CC6 bf/s */
L_0C0B7CCA: BLKS(0x0C0B7CCAu);
	r13 = r2;  /* 0C0B7CCA mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0B7CCC add #imm,Rn */
	W16(r3, r13); UPD(0x0C0B7CD0u, 4);  /* 0C0B7CCE mov.w Rm,@Rn */
	r2 = r13;  /* 0C0B7CD0 mov Rm,Rn */
	UPD(0x0C0B7CD2u, 1);
L_0C0B7CD2: BLKS(0x0C0B7CD2u);
	r9 = (u32)(s32)(s16)r2;  /* 0C0B7CD2 exts.w Rm,Rn */
	T = (s32)r9 >= (s32)r5;  /* 0C0B7CD4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B7CE2u, 5); goto L_0C0B7CE2; } UPD(0x0C0B7CDAu, 1); goto L_0C0B7CDA; }  /* 0C0B7CD6 bt/s */
L_0C0B7CDA: BLKS(0x0C0B7CDAu);
	r11 = r2;  /* 0C0B7CDA mov Rm,Rn */
	r11 += 0x1u;  /* 0C0B7CDC add #imm,Rn */
	W16(r3, r11); UPD(0x0C0B7CE0u, 3);  /* 0C0B7CDE mov.w Rm,@Rn */
	r0 = R32(r14); UPD(0x0C0B7CE2u, 1);  /* 0C0B7CE0 mov.l @Rm,Rn */
L_0C0B7CE2: BLKS(0x0C0B7CE2u);
	r1 = 0x1Fu;  /* 0C0B7CE2 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0B7CE4 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0B7CE6 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C0B7CEAu, 4);  /* 0C0B7CE8 mov.l Rm,@Rn */
	r12 = R32(r14); UPD(0x0C0B7CECu, 1);  /* 0C0B7CEA mov.l @Rm,Rn */
	T = (s32)r12 > (s32)r1;  /* 0C0B7CEC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B7CBEu, 4); goto L_0C0B7CBE; }  /* 0C0B7CEE bf */
L_0C0B7CF0: BLKS(0x0C0B7CF0u);
	r1 += 0x69u;  /* 0C0B7CF0 add #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B7CF4u, 2);  /* 0C0B7CF2 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C0B7CF4 add Rm,Rn */
	r1 += r0;  /* 0C0B7CF6 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r6 = v_; } UPD(0x0C0B7CFAu, 3);  /* 0C0B7CF8 mov.w @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C0B7CFCu, 1);  /* 0C0B7CFA mov.w @Rm,Rn */
	T = r6 == r4;  /* 0C0B7CFC cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B7D40u, 4); goto L_0C0B7D40; }  /* 0C0B7CFE bf */
L_0C0B7D00: BLKS(0x0C0B7D00u);
	r1 = 0x0u;  /* 0C0B7D00 mov #imm,Rn */
	r2 = 0x9Fu; UPD(0x0C0B7D04u, 2);  /* 0C0B7D02 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B7D06u); W8(r0 + r2, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B71FEu, 3); goto L_0C0B71FE; }  /* 0C0B7D04 bra */
L_0C0B7D30: BLKS(0x0C0B7D30u);
	r3 = 0x99u; UPD(0x0C0B7D32u, 1);  /* 0C0B7D30 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0B7D32 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B7D36u, 2);  /* 0C0B7D34 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B7D36 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C0B7D38 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C0B7D3A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B7D48u, 6); goto L_0C0B7D48; } UPD(0x0C0B7D40u, 1); goto L_0C0B7D40; }  /* 0C0B7D3C bt/s */
L_0C0B7D40: BLKS(0x0C0B7D40u);
	r13 = 0xFFFFDF80u; UPD(0x0C0B7D42u, 1);  /* 0C0B7D40 mov.w @(disp,pc),Rn */
	IF(0x0C0B7D42u); { u32 tv_ = (r13 + 0x0C0B7D46u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7D42 braf Rn */
L_0C0B7D48: BLKS(0x0C0B7D48u);
	r12 = 0xC062780u; UPD(0x0C0B7D4Au, 1);  /* 0C0B7D48 mov.l @(disp,pc),Rn */
	r11 = 0x8Au; UPD(0x0C0B7D4Cu, 1);  /* 0C0B7D4A mov.w @(disp,pc),Rn */
	W8(r3, r1); UPD(0x0C0B7D4Eu, 1);  /* 0C0B7D4C mov.b Rm,@Rn */
	r4 = 0x2000u; UPD(0x0C0B7D50u, 1);  /* 0C0B7D4E mov.w @(disp,pc),Rn */
	IF(0x0C0B7D50u); { u32 t_ = r12; PR = 0x0C0B7D54u; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B7D54u); }  /* 0C0B7D50 jsr @Rn */
L_0C0B7D54: BLKS(0x0C0B7D54u);
	r3 = 0xFFFFF000u; UPD(0x0C0B7D56u, 1);  /* 0C0B7D54 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0B7D56 add Rm,Rn */
	r13 = 0xFFFFE822u; UPD(0x0C0B7D5Au, 2);  /* 0C0B7D58 mov.w @(disp,pc),Rn */
	IF(0x0C0B7D5Au); { u32 tv_ = (r13 + 0x0C0B7D5Eu); u32 t_ = PHYS(tv_); W16(r11, r0); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6580u: goto L_0C0B6580; default: JUMPD(tv_); } }  /* 0C0B7D5A braf Rn */
L_0C0B7D60: BLKS(0x0C0B7D60u);
	r2 += 0x50u;  /* 0C0B7D60 add #imm,Rn */
	r1 = R32(r2); UPD(0x0C0B7D64u, 2);  /* 0C0B7D62 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B7D64 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B7D74u, 4); goto L_0C0B7D74; } goto L_0C0B7D6A; }  /* 0C0B7D66 bt/s */
L_0C0B7D6A: BLKS(0x0C0B7D6Au);
	T = (r1 & r1) == 0;  /* 0C0B7D6A tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B7D74u, 5); goto L_0C0B7D74; } UPD(0x0C0B7D70u, 1); goto L_0C0B7D70; }  /* 0C0B7D6C bf/s */
L_0C0B7D70: BLKS(0x0C0B7D70u);
	r13 = 0x4000000u; UPD(0x0C0B7D72u, 1);  /* 0C0B7D70 mov.l @(disp,pc),Rn */
	W32(r3 + 0x2Cu, r13); UPD(0x0C0B7D74u, 1);  /* 0C0B7D72 mov.l Rm,@(disp,Rn) */
L_0C0B7D74: BLKS(0x0C0B7D74u);
	{ IF(0x0C0B7D76u); ; /* slot nop */ UPD(0x0C0B7C90u, 3); goto L_0C0B7C90; }  /* 0C0B7D74 bra */
L_0C0B7D80: BLKS(0x0C0B7D80u);
	r8 = 0xC0A8D30u; UPD(0x0C0B7D82u, 1);  /* 0C0B7D80 mov.l @(disp,pc),Rn */
	IF(0x0C0B7D82u); { u32 t_ = r8; PR = 0x0C0B7D86u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7D86u); }  /* 0C0B7D82 jsr @Rn */
L_0C0B7D86: BLKS(0x0C0B7D86u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7D86 exts.w Rm,Rn */
	IF(0x0C0B7D88u); T = (s32)r11 >= 0;  /* 0C0B7D88 cmp/pz Rn */
	if (T) { UPD(0x0C0B7D94u, 5); goto L_0C0B7D94; }  /* 0C0B7D8A bt */
L_0C0B7D8C: BLKS(0x0C0B7D8Cu);
	r1 = 0xFFFFE15Eu; UPD(0x0C0B7D8Eu, 1);  /* 0C0B7D8C mov.w @(disp,pc),Rn */
	IF(0x0C0B7D8Eu); { u32 tv_ = (r1 + 0x0C0B7D92u); u32 t_ = PHYS(tv_); IF(0x0C0B7D90u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7D8E braf Rn */
L_0C0B7D94: BLKS(0x0C0B7D94u);
	r2 = 0xB4u; UPD(0x0C0B7D96u, 1);  /* 0C0B7D94 mov.w @(disp,pc),Rn */
	IF(0x0C0B7D96u); MACL = r10 * r2;  /* 0C0B7D96 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B7D9Au, 3);  /* 0C0B7D98 mov.l @(disp,pc),Rn */
	IF(0x0C0B7D9Au); r10 = MACL;  /* 0C0B7D9A sts macl,Rn */
	IF(0x0C0B7D9Cu); MACL = r11 * r2;  /* 0C0B7D9C mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C0B7DA0u, 4);  /* 0C0B7D9E mov.w @(disp,pc),Rn */
	r10 += r1;  /* 0C0B7DA0 add Rm,Rn */
	IF(0x0C0B7DA2u); r11 = MACL;  /* 0C0B7DA2 sts macl,Rn */
	r11 += r1;  /* 0C0B7DA4 add Rm,Rn */
	IF(0x0C0B7DA6u); r12 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0B7DA8u, 4);  /* 0C0B7DA6 mov.w @(r0,Rm),Rn */
	r5 = r10;  /* 0C0B7DA8 mov Rm,Rn */
	r5 += r0;  /* 0C0B7DAA add Rm,Rn */
	W16(r5, r12); UPD(0x0C0B7DAEu, 3);  /* 0C0B7DAC mov.w Rm,@Rn */
	r2 += 0xFFFFFFD0u;  /* 0C0B7DAE add #imm,Rn */
	r13 = r10;  /* 0C0B7DB0 mov Rm,Rn */
	r5 += 0x2u;  /* 0C0B7DB2 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C0B7DB6u, 4);  /* 0C0B7DB4 mov.w @Rm,Rn */
	r13 += r2;  /* 0C0B7DB6 add Rm,Rn */
	r2 += r11;  /* 0C0B7DB8 add Rm,Rn */
	r4 = r3;  /* 0C0B7DBA mov Rm,Rn */
	r11 += 0x50u;  /* 0C0B7DBC add #imm,Rn */
	r3 = R32(r11); UPD(0x0C0B7DC0u, 5);  /* 0C0B7DBE mov.l @Rm,Rn */
	r10 += 0x50u;  /* 0C0B7DC0 add #imm,Rn */
	W32(r10, r3); UPD(0x0C0B7DC4u, 2);  /* 0C0B7DC2 mov.l Rm,@Rn */
	r2 += 0x2u;  /* 0C0B7DC4 add #imm,Rn */
	r10 += 0xFFFFFFB0u;  /* 0C0B7DC6 add #imm,Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C0B7DCAu, 3);  /* 0C0B7DC8 mov.l @(disp,Rm),Rn */
	r13 += 0x2u;  /* 0C0B7DCA add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B7DCEu, 2);  /* 0C0B7DCC mov.w @Rm,Rn */
	IF(0x0C0B7DCEu); MACL = r7 * r3;  /* 0C0B7DCE mul.l Rm,Rn */
	r9 += r12;  /* 0C0B7DD0 add Rm,Rn */
	r4 += 0x5u;  /* 0C0B7DD2 add #imm,Rn */
	IF(0x0C0B7DD4u); r2 = MACL;  /* 0C0B7DD4 sts macl,Rn */
	W32(r14 + 0x1Cu, r13); UPD(0x0C0B7DD8u, 6);  /* 0C0B7DD6 mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFB0u;  /* 0C0B7DD8 add #imm,Rn */
	W16(r13, r9); UPD(0x0C0B7DDCu, 2);  /* 0C0B7DDA mov.w Rm,@Rn */
	IF(0x0C0B7DDCu); T = (s32)r2 >= 0;  /* 0C0B7DDC cmp/pz Rn */
	{ u32 c_ = !T; W16(r5, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0B7EB0u, 4); goto L_0C0B7EB0; } UPD(0x0C0B7DE2u, 1); goto L_0C0B7DE2; }  /* 0C0B7DDE bf/s */
L_0C0B7DE2: BLKS(0x0C0B7DE2u);
	r6 = R32(r10 + 0x30u); UPD(0x0C0B7DE4u, 1);  /* 0C0B7DE2 mov.l @(disp,Rm),Rn */
	r8 = r2;  /* 0C0B7DE4 mov Rm,Rn */
	IF(0x0C0B7DE6u); MACL = r6 * r3;  /* 0C0B7DE6 mul.l Rm,Rn */
	r7 = 0xFFFFFFF8u;  /* 0C0B7DE8 mov #imm,Rn */
	IF(0x0C0B7DEAu); r2 = MACL;  /* 0C0B7DEA sts macl,Rn */
	IF(0x0C0B7DECu); T = (s32)r2 >= 0;  /* 0C0B7DEC cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0B7DF0u); ARG0(0x487Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0B7EA0u, 9); goto L_0C0B7EA0; } UPD(0x0C0B7DF2u, 1); goto L_0C0B7DF2; }  /* 0C0B7DEE bf/s */
L_0C0B7DF2: BLKS(0x0C0B7DF2u);
	r10 += 0x7Cu;  /* 0C0B7DF2 add #imm,Rn */
	IF(0x0C0B7DF4u); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0B7DF4 shad Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0B7DF8u, 3);  /* 0C0B7DF6 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0B7DF8 exts.w Rm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C0B7DFA extu.w Rm,Rn */
	IF(0x0C0B7DFCu); r7 <<= 2;  /* 0C0B7DFC shll2 Rn */
	r7 += r7;  /* 0C0B7DFE add Rm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0B7E02u, 5);  /* 0C0B7E00 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFF84u;  /* 0C0B7E02 add #imm,Rn */
	r4 += r7;  /* 0C0B7E04 add Rm,Rn */
	IF(0x0C0B7E06u); T = (s32)r8 >= 0;  /* 0C0B7E06 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B7E90u, 6); goto L_0C0B7E90; } UPD(0x0C0B7E0Cu, 1); goto L_0C0B7E0C; }  /* 0C0B7E08 bf/s */
L_0C0B7E0C: BLKS(0x0C0B7E0Cu);
	r9 = 0xC069B20u; UPD(0x0C0B7E0Eu, 1);  /* 0C0B7E0C mov.l @(disp,pc),Rn */
	IF(0x0C0B7E0Eu); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0B7E0E shar Rn */
	IF(0x0C0B7E10u); { u32 t_ = r9; PR = 0x0C0B7E14u; IF(0x0C0B7E12u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1); /* slot shar Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B7E14u); }  /* 0C0B7E10 jsr @Rn */
L_0C0B7E14: BLKS(0x0C0B7E14u);
	r12 = R32(r11 + 0x24u); UPD(0x0C0B7E16u, 1);  /* 0C0B7E14 mov.l @(disp,Rm),Rn */
	r13 = r0;  /* 0C0B7E16 mov Rm,Rn */
	r13 += r8;  /* 0C0B7E18 add Rm,Rn */
	r12 += r8;  /* 0C0B7E1A add Rm,Rn */
	r8 = R32(r14 + 0x1Cu); UPD(0x0C0B7E1Eu, 4);  /* 0C0B7E1C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B7E20u, 1);  /* 0C0B7E1E mov.w @Rm,Rn */
	IF(0x0C0B7E20u); T = (s32)r4 >= 0;  /* 0C0B7E20 cmp/pz Rn */
	if (!T) { UPD(0x0C0B7E80u, 4); goto L_0C0B7E80; }  /* 0C0B7E22 bf */
L_0C0B7E24: BLKS(0x0C0B7E24u);
	r0 = 0xFFFFFFFAu;  /* 0C0B7E24 mov #imm,Rn */
	IF(0x0C0B7E26u); ARG0(0x440Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0B7E26 shad Rm,Rn */
	r5 = r13;  /* 0C0B7E28 mov Rm,Rn */
	IF(0x0C0B7E2Au); { u32 t_ = r9; PR = 0x0C0B7E2Eu; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B7E2Eu); }  /* 0C0B7E2A jsr @Rn */
L_0C0B7E2E: BLKS(0x0C0B7E2Eu);
	r2 = 0x66666667u; UPD(0x0C0B7E30u, 1);  /* 0C0B7E2E mov.l @(disp,pc),Rn */
	IF(0x0C0B7E30u); r0 <<= 2;  /* 0C0B7E30 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B7E32 dmuls.l Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C0B7E36u, 4);  /* 0C0B7E34 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7E36u); r9 = MACH;  /* 0C0B7E36 sts mach,Rn */
	IF(0x0C0B7E38u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0B7E38 shar Rn */
	IF(0x0C0B7E3Au); T = r0 >> 31; r0 <<= 1;  /* 0C0B7E3A shll Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C0B7E3Eu, 4);  /* 0C0B7E3C mov.l @(disp,Rm),Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B7E3E subc Rm,Rn */
	r11 = R32(r14 + 0x1Cu); UPD(0x0C0B7E42u, 2);  /* 0C0B7E40 mov.l @(disp,Rm),Rn */
	r9 -= r0;  /* 0C0B7E42 sub Rm,Rn */
	r8 += r4;  /* 0C0B7E44 add Rm,Rn */
	r12 += r9;  /* 0C0B7E46 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0B7E4Au, 4);  /* 0C0B7E48 mov.w @Rm,Rn */
	IF(0x0C0B7E4Au); T = (s32)r4 >= 0;  /* 0C0B7E4A cmp/pz Rn */
	{ u32 c_ = !T; W32(r10 + 0x24u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B7E70u, 4); goto L_0C0B7E70; } UPD(0x0C0B7E50u, 1); goto L_0C0B7E50; }  /* 0C0B7E4C bf/s */
L_0C0B7E50: BLKS(0x0C0B7E50u);
	r5 = r13;  /* 0C0B7E50 mov Rm,Rn */
	r12 = 0xFFFFFFFAu;  /* 0C0B7E52 mov #imm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0B7E56u, 3);  /* 0C0B7E54 mov.l @(disp,pc),Rn */
	IF(0x0C0B7E56u); ARG0(0x44CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0B7E56 shad Rm,Rn */
	IF(0x0C0B7E58u); { u32 t_ = r13; PR = 0x0C0B7E5Cu; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B7E5Cu); }  /* 0C0B7E58 jsr @Rn */
L_0C0B7E5C: BLKS(0x0C0B7E5Cu);
	r8 += r0;  /* 0C0B7E5C add Rm,Rn */
	r13 = 0xFFFFDE60u; UPD(0x0C0B7E60u, 2);  /* 0C0B7E5E mov.w @(disp,pc),Rn */
	IF(0x0C0B7E60u); { u32 tv_ = (r13 + 0x0C0B7E64u); u32 t_ = PHYS(tv_); W32(r10 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC4u: goto L_0C0B5CC4; default: JUMPD(tv_); } }  /* 0C0B7E60 braf Rn */
L_0C0B7E70: BLKS(0x0C0B7E70u);
	{ r4 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C0B7E50u, 3); goto L_0C0B7E50; }  /* 0C0B7E70 bra */
L_0C0B7E80: BLKS(0x0C0B7E80u);
	{ r4 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C0B7E24u, 3); goto L_0C0B7E24; }  /* 0C0B7E80 bra */
L_0C0B7E90: BLKS(0x0C0B7E90u);
	{ r5 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C0B7E0Cu, 3); goto L_0C0B7E0C; }  /* 0C0B7E90 bra */
L_0C0B7EA0: BLKS(0x0C0B7EA0u);
	r5 = 0xFFu; UPD(0x0C0B7EA2u, 1);  /* 0C0B7EA0 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0B7DF2u, 3); goto L_0C0B7DF2; }  /* 0C0B7EA2 bra */
L_0C0B7EB0: BLKS(0x0C0B7EB0u);
	r0 = 0xFFu; UPD(0x0C0B7EB2u, 1);  /* 0C0B7EB0 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C0B7DE2u, 3); goto L_0C0B7DE2; }  /* 0C0B7EB2 bra */
L_0C0B7EE0: BLKS(0x0C0B7EE0u);
	r8 = 0xC0A8D30u; UPD(0x0C0B7EE2u, 1);  /* 0C0B7EE0 mov.l @(disp,pc),Rn */
	IF(0x0C0B7EE2u); { u32 t_ = r8; PR = 0x0C0B7EE6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7EE6u); }  /* 0C0B7EE2 jsr @Rn */
L_0C0B7EE6: BLKS(0x0C0B7EE6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7EE6 exts.w Rm,Rn */
	IF(0x0C0B7EE8u); T = (s32)r11 >= 0;  /* 0C0B7EE8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B7F7Eu, 5); goto L_0C0B7F7E; }  /* 0C0B7EEA bf */
L_0C0B7EEC: BLKS(0x0C0B7EECu);
	r2 = 0xB4u; UPD(0x0C0B7EEEu, 1);  /* 0C0B7EEC mov.w @(disp,pc),Rn */
	IF(0x0C0B7EEEu); MACL = r10 * r2;  /* 0C0B7EEE mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B7EF2u, 3);  /* 0C0B7EF0 mov.l @(disp,pc),Rn */
	IF(0x0C0B7EF2u); r9 = MACL;  /* 0C0B7EF2 sts macl,Rn */
	IF(0x0C0B7EF4u); MACL = r11 * r2;  /* 0C0B7EF4 mul.l Rm,Rn */
	r9 += r13;  /* 0C0B7EF6 add Rm,Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C0B7EFAu, 5);  /* 0C0B7EF8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7EFAu); r11 = MACL;  /* 0C0B7EFA sts macl,Rn */
	r11 += r13;  /* 0C0B7EFC add Rm,Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C0B7F00u, 3);  /* 0C0B7EFE mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C0B7F02u, 1);  /* 0C0B7F00 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0B7F02 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C0B7F06u, 2);  /* 0C0B7F04 mov.l @(disp,Rm),Rn */
	r8 = 0xC069BF0u; UPD(0x0C0B7F08u, 1);  /* 0C0B7F06 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C0B7F08 add Rm,Rn */
	W32(r9 + 0x28u, r4); UPD(0x0C0B7F0Cu, 2);  /* 0C0B7F0A mov.l Rm,@(disp,Rn) */
	r11 += 0x50u;  /* 0C0B7F0C add #imm,Rn */
	r12 = 0xC068F00u; UPD(0x0C0B7F10u, 2);  /* 0C0B7F0E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B7F10 mov Rm,Rn */
	IF(0x0C0B7F12u); { u32 t_ = r8; PR = 0x0C0B7F16u; W32(r9 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0B7F16u); }  /* 0C0B7F12 jsr @Rn */
L_0C0B7F16: BLKS(0x0C0B7F16u);
	r4 = r10;  /* 0C0B7F16 mov Rm,Rn */
	IF(0x0C0B7F18u); { u32 t_ = r12; PR = 0x0C0B7F1Cu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C0B7F1Cu); }  /* 0C0B7F18 jsr @Rn */
L_0C0B7F1C: BLKS(0x0C0B7F1Cu);
	r3 = 0x86u; UPD(0x0C0B7F1Eu, 1);  /* 0C0B7F1C mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B7F1E mov Rm,Rn */
	IF(0x0C0B7F20u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B7F22u, 2);  /* 0C0B7F20 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C0B7F22 mov #imm,Rn */
	r5 += 0x8u;  /* 0C0B7F24 add #imm,Rn */
	IF(0x0C0B7F26u); r5 >>= 2;  /* 0C0B7F26 shlr2 Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B7F2Au, 4);  /* 0C0B7F28 mov.l @(disp,pc),Rn */
	IF(0x0C0B7F2Au); r5 >>= 2;  /* 0C0B7F2A shlr2 Rn */
	r5 &= r7;  /* 0C0B7F2C and Rm,Rn */
	W32(r9 + 0xCu, r5); UPD(0x0C0B7F30u, 3);  /* 0C0B7F2E mov.l Rm,@(disp,Rn) */
	IF(0x0C0B7F30u); { u32 t_ = r13; PR = 0x0C0B7F34u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B7F34u); }  /* 0C0B7F30 jsr @Rn */
L_0C0B7F34: BLKS(0x0C0B7F34u);
	r1 = R32(r11); UPD(0x0C0B7F36u, 1);  /* 0C0B7F34 mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C0B7F38u, 1);  /* 0C0B7F36 mov.w @(disp,pc),Rn */
	T = r1 == r6;  /* 0C0B7F38 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B7F5Cu, 4); goto L_0C0B7F5C; }  /* 0C0B7F3A bf */
L_0C0B7F3C: BLKS(0x0C0B7F3Cu);
	r4 = r10;  /* 0C0B7F3C mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C0B7F40u, 2);  /* 0C0B7F3E mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0B7F40 mov #imm,Rn */
	IF(0x0C0B7F42u); { u32 t_ = r11; PR = 0x0C0B7F46u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B7F46u); }  /* 0C0B7F42 jsr @Rn */
L_0C0B7F46: BLKS(0x0C0B7F46u);
	T = (r0 & r0) == 0;  /* 0C0B7F46 tst Rm,Rn */
	if (T) { UPD(0x0C0B7F5Cu, 4); goto L_0C0B7F5C; }  /* 0C0B7F48 bt */
L_0C0B7F4A: BLKS(0x0C0B7F4Au);
	r5 = R32(r9 + 0x8u); UPD(0x0C0B7F4Cu, 1);  /* 0C0B7F4A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0B7F4C mov Rm,Rn */
	r12 = 0xC0A8B10u; UPD(0x0C0B7F50u, 2);  /* 0C0B7F4E mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0B7F50 add #imm,Rn */
	IF(0x0C0B7F52u); { u32 t_ = r12; PR = 0x0C0B7F56u; W32(r9 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0B7F56u); }  /* 0C0B7F52 jsr @Rn */
L_0C0B7F56: BLKS(0x0C0B7F56u);
	r0 = 0x88u; UPD(0x0C0B7F58u, 1);  /* 0C0B7F56 mov.w @(disp,pc),Rn */
	r10 = 0x1u;  /* 0C0B7F58 mov #imm,Rn */
	IF(0x0C0B7F5Au); W16(r0 + r9, r10); UPD(0x0C0B7F5Cu, 2);  /* 0C0B7F5A mov.w Rm,@(r0,Rn) */
L_0C0B7F5C: BLKS(0x0C0B7F5Cu);
	r13 = 0xFFFFDD64u; UPD(0x0C0B7F5Eu, 1);  /* 0C0B7F5C mov.w @(disp,pc),Rn */
	IF(0x0C0B7F5Eu); { u32 tv_ = (r13 + 0x0C0B7F62u); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B7F5E braf Rn */
L_0C0B7F70: BLKS(0x0C0B7F70u);
	r9 = 0xC0A8D30u; UPD(0x0C0B7F72u, 1);  /* 0C0B7F70 mov.l @(disp,pc),Rn */
	IF(0x0C0B7F72u); { u32 t_ = r9; PR = 0x0C0B7F76u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7F76u); }  /* 0C0B7F72 jsr @Rn */
L_0C0B7F76: BLKS(0x0C0B7F76u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7F76 exts.w Rm,Rn */
	IF(0x0C0B7F78u); T = (s32)r11 >= 0;  /* 0C0B7F78 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B7F86u, 5); goto L_0C0B7F86; } UPD(0x0C0B7F7Eu, 1); goto L_0C0B7F7E; }  /* 0C0B7F7A bt/s */
L_0C0B7F7E: BLKS(0x0C0B7F7Eu);
	r1 = 0xFFFFDF6Cu; UPD(0x0C0B7F80u, 1);  /* 0C0B7F7E mov.w @(disp,pc),Rn */
	IF(0x0C0B7F80u); { u32 tv_ = (r1 + 0x0C0B7F84u); u32 t_ = PHYS(tv_); IF(0x0C0B7F82u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7F80 braf Rn */
L_0C0B7F86: BLKS(0x0C0B7F86u);
	r2 = 0xB4u; UPD(0x0C0B7F88u, 1);  /* 0C0B7F86 mov.w @(disp,pc),Rn */
	IF(0x0C0B7F88u); MACL = r10 * r2;  /* 0C0B7F88 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B7F8Cu, 3);  /* 0C0B7F8A mov.l @(disp,pc),Rn */
	IF(0x0C0B7F8Cu); r7 = MACL;  /* 0C0B7F8C sts macl,Rn */
	IF(0x0C0B7F8Eu); MACL = r11 * r2;  /* 0C0B7F8E mul.l Rm,Rn */
	r7 += r12;  /* 0C0B7F90 add Rm,Rn */
	r6 = R32(r7 + 0x30u); UPD(0x0C0B7F94u, 5);  /* 0C0B7F92 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7F94u); r13 = MACL;  /* 0C0B7F94 sts macl,Rn */
	r13 += r12;  /* 0C0B7F96 add Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C0B7F9Au, 3);  /* 0C0B7F98 mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C0B7F9A add Rm,Rn */
	W32(r7 + 0x28u, r0); UPD(0x0C0B7F9Eu, 2);  /* 0C0B7F9C mov.l Rm,@(disp,Rn) */
	r0 = 0x99u; UPD(0x0C0B7FA0u, 1);  /* 0C0B7F9E mov.w @(disp,pc),Rn */
	r11 = R32(r13 + 0x24u); UPD(0x0C0B7FA2u, 1);  /* 0C0B7FA0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7FA2u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B7FA4u, 1);  /* 0C0B7FA2 mov.b @(r0,Rm),Rn */
	r1 = R32(r7 + 0x2Cu); UPD(0x0C0B7FA6u, 1);  /* 0C0B7FA4 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C0B7FA6 add #imm,Rn */
	r11 += r1;  /* 0C0B7FA8 add Rm,Rn */
	r8 = r4 & 0xFF;  /* 0C0B7FAA extu.b Rm,Rn */
	W32(r7 + 0x24u, r11); UPD(0x0C0B7FAEu, 4);  /* 0C0B7FAC mov.l Rm,@(disp,Rn) */
	T = r8 > r3;  /* 0C0B7FAE cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B7FB2u); W8(r0 + r7, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B7F5Cu, 4); goto L_0C0B7F5C; } UPD(0x0C0B7FB4u, 1); goto L_0C0B7FB4; }  /* 0C0B7FB0 bf/s */
L_0C0B7FB4: BLKS(0x0C0B7FB4u);
	r3 = 0x0u;  /* 0C0B7FB4 mov #imm,Rn */
	IF(0x0C0B7FB6u); W8(r0 + r7, r3); UPD(0x0C0B7FB8u, 2);  /* 0C0B7FB6 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFEFu;  /* 0C0B7FB8 add #imm,Rn */
	r5 = R32(r7 + 0x8u); UPD(0x0C0B7FBCu, 2);  /* 0C0B7FBA mov.l @(disp,Rm),Rn */
	IF(0x0C0B7FBCu); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0B7FBEu, 1);  /* 0C0B7FBC mov.w @(r0,Rm),Rn */
	r5 += r9;  /* 0C0B7FBE add Rm,Rn */
	r1 = 0xFFFFDE36u; UPD(0x0C0B7FC2u, 2);  /* 0C0B7FC0 mov.w @(disp,pc),Rn */
	IF(0x0C0B7FC2u); { u32 tv_ = (r1 + 0x0C0B7FC6u); u32 t_ = PHYS(tv_); W32(r7 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5DFCu: goto L_0C0B5DFC; default: JUMPD(tv_); } }  /* 0C0B7FC2 braf Rn */
L_0C0B7FD0: BLKS(0x0C0B7FD0u);
	r8 = 0xC0A8D30u; UPD(0x0C0B7FD2u, 1);  /* 0C0B7FD0 mov.l @(disp,pc),Rn */
	IF(0x0C0B7FD2u); { u32 t_ = r8; PR = 0x0C0B7FD6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B7FD6u); }  /* 0C0B7FD2 jsr @Rn */
L_0C0B7FD6: BLKS(0x0C0B7FD6u);
	r11 = (u32)(s32)(s16)r0;  /* 0C0B7FD6 exts.w Rm,Rn */
	IF(0x0C0B7FD8u); T = (s32)r11 >= 0;  /* 0C0B7FD8 cmp/pz Rn */
	{ u32 c_ = T; r13 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B7FE6u, 5); goto L_0C0B7FE6; } goto L_0C0B7FDE; }  /* 0C0B7FDA bt/s */
L_0C0B7FDE: BLKS(0x0C0B7FDEu);
	r1 = 0xFFFFDF0Cu; UPD(0x0C0B7FE0u, 2);  /* 0C0B7FDE mov.w @(disp,pc),Rn */
	IF(0x0C0B7FE0u); { u32 tv_ = (r1 + 0x0C0B7FE4u); u32 t_ = PHYS(tv_); IF(0x0C0B7FE2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5EF0u: goto L_0C0B5EF0; default: JUMPD(tv_); } }  /* 0C0B7FE0 braf Rn */
L_0C0B7FE6: BLKS(0x0C0B7FE6u);
	r9 = 0xB4u; UPD(0x0C0B7FE8u, 1);  /* 0C0B7FE6 mov.w @(disp,pc),Rn */
	IF(0x0C0B7FE8u); MACL = r10 * r9;  /* 0C0B7FE8 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B7FECu, 3);  /* 0C0B7FEA mov.l @(disp,pc),Rn */
	IF(0x0C0B7FECu); r12 = MACL;  /* 0C0B7FEC sts macl,Rn */
	IF(0x0C0B7FEEu); MACL = r11 * r9;  /* 0C0B7FEE mul.l Rm,Rn */
	r12 += r5;  /* 0C0B7FF0 add Rm,Rn */
	r3 = R32(r12 + 0xCu); UPD(0x0C0B7FF4u, 5);  /* 0C0B7FF2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7FF4u); r9 = MACL;  /* 0C0B7FF4 sts macl,Rn */
	r9 += r5;  /* 0C0B7FF6 add Rm,Rn */
	r11 = R32(r12 + 0x2Cu); UPD(0x0C0B7FFAu, 3);  /* 0C0B7FF8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B7FFAu); ARG0(0x43DDu); { s32 s_ = (s32)r13; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0B7FFA shld Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C0B7FFEu, 2);  /* 0C0B7FFC mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C0B7FFE exts.w Rm,Rn */
	r8 += r11;  /* 0C0B8000 add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C0B8004u, 3);  /* 0C0B8002 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0B8004 mov Rm,Rn */
	r11 = 0x40000u; UPD(0x0C0B8008u, 2);  /* 0C0B8006 mov.l @(disp,pc),Rn */
	IF(0x0C0B8008u); { u32 t_ = r2; PR = 0x0C0B800Cu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B800Cu); }  /* 0C0B8008 jsr @Rn */
L_0C0B800C: BLKS(0x0C0B800Cu);
	r8 += r0;  /* 0C0B800C add Rm,Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C0B8010u, 2);  /* 0C0B800E mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0B8010 mov Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C0B8014u, 2);  /* 0C0B8012 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0B8014 mov Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C0B8018u, 2);  /* 0C0B8016 mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x30u); UPD(0x0C0B801Au, 1);  /* 0C0B8018 mov.l @(disp,Rm),Rn */
	IF(0x0C0B801Au); { u32 t_ = r1; PR = 0x0C0B801Eu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B801Eu); }  /* 0C0B801A jsr @Rn */
L_0C0B801E: BLKS(0x0C0B801Eu);
	r8 += r0;  /* 0C0B801E add Rm,Rn */
	r0 = 0x99u; UPD(0x0C0B8022u, 2);  /* 0C0B8020 mov.w @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C0B8022 mov #imm,Rn */
	IF(0x0C0B8024u); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0B8026u, 2);  /* 0C0B8024 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0B8026 add #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C0B8028 extu.b Rm,Rn */
	W32(r12 + 0x28u, r8); UPD(0x0C0B802Cu, 3);  /* 0C0B802A mov.l Rm,@(disp,Rn) */
	T = r4 > r7;  /* 0C0B802C cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B8030u); W8(r0 + r12, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B7F5Cu, 4); goto L_0C0B7F5C; } UPD(0x0C0B8032u, 1); goto L_0C0B8032; }  /* 0C0B802E bf/s */
L_0C0B8032: BLKS(0x0C0B8032u);
	r7 = 0x0u;  /* 0C0B8032 mov #imm,Rn */
	r8 = 0x9Fu; UPD(0x0C0B8036u, 2);  /* 0C0B8034 mov.w @(disp,pc),Rn */
	IF(0x0C0B8036u); W8(r0 + r12, r7); UPD(0x0C0B8038u, 1);  /* 0C0B8036 mov.b Rm,@(r0,Rn) */
	r8 += r12;  /* 0C0B8038 add Rm,Rn */
	W32(r14 + 0x20u, r8); UPD(0x0C0B803Cu, 2);  /* 0C0B803A mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B803Eu, 1);  /* 0C0B803C mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0B803E extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B8040 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B80C0u, 5); goto L_0C0B80C0; }  /* 0C0B8042 bt */
L_0C0B8044: BLKS(0x0C0B8044u);
	r4 = 0x1u;  /* 0C0B8044 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0B8046 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B80A0u, 5); goto L_0C0B80A0; } goto L_0C0B804C; }  /* 0C0B8048 bt/s */
L_0C0B804C: BLKS(0x0C0B804Cu);
	T = (r0 & r0) == 0;  /* 0C0B804C tst Rm,Rn */
	if (!T) { UPD(0x0C0B8058u, 5); goto L_0C0B8058; }  /* 0C0B804E bf */
L_0C0B8050: BLKS(0x0C0B8050u);
	r12 = r2;  /* 0C0B8050 mov Rm,Rn */
	r10 = R32(r14 + 0x20u); UPD(0x0C0B8054u, 2);  /* 0C0B8052 mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C0B8054 add #imm,Rn */
	W8(r10, r12); UPD(0x0C0B8058u, 2);  /* 0C0B8056 mov.b Rm,@Rn */
L_0C0B8058: BLKS(0x0C0B8058u);
	r13 = 0xFFFFDC68u; UPD(0x0C0B805Au, 1);  /* 0C0B8058 mov.w @(disp,pc),Rn */
	IF(0x0C0B805Au); { u32 tv_ = (r13 + 0x0C0B805Eu); u32 t_ = PHYS(tv_); r14 += 0x24u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC6u: goto L_0C0B5CC6; default: JUMPD(tv_); } }  /* 0C0B805A braf Rn */
L_0C0B80A0: BLKS(0x0C0B80A0u);
	if (!T) { UPD(0x0C0B8058u, 3); goto L_0C0B8058; }  /* 0C0B80A0 bf */
L_0C0B80A2: BLKS(0x0C0B80A2u);
	r4 = R32(r12 + 0x8u); UPD(0x0C0B80A4u, 1);  /* 0C0B80A2 mov.l @(disp,Rm),Rn */
	r13 = 0xFFFFFFFFu;  /* 0C0B80A4 mov #imm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0B80A6 add #imm,Rn */
	r8 = 0xC0A8B10u; UPD(0x0C0B80AAu, 3);  /* 0C0B80A8 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C0B80ACu, 1);  /* 0C0B80AA mov.l @(disp,Rm),Rn */
	W32(r12 + 0x8u, r4); UPD(0x0C0B80AEu, 1);  /* 0C0B80AC mov.l Rm,@(disp,Rn) */
	W8(r6, r7); UPD(0x0C0B80B0u, 1);  /* 0C0B80AE mov.b Rm,@Rn */
	IF(0x0C0B80B0u); { u32 t_ = r8; PR = 0x0C0B80B4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0B80B4u); }  /* 0C0B80B0 jsr @Rn */
L_0C0B80B4: BLKS(0x0C0B80B4u);
	r0 = 0x88u; UPD(0x0C0B80B6u, 1);  /* 0C0B80B4 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFDC08u; UPD(0x0C0B80B8u, 1);  /* 0C0B80B6 mov.w @(disp,pc),Rn */
	IF(0x0C0B80B8u); { u32 tv_ = (r11 + 0x0C0B80BCu); u32 t_ = PHYS(tv_); IF(0x0C0B80BAu); W16(r0 + r12, r13); /* slot mov.w Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC4u: goto L_0C0B5CC4; default: JUMPD(tv_); } }  /* 0C0B80B8 braf Rn */
L_0C0B80C0: BLKS(0x0C0B80C0u);
	r3 = 0xC069B20u; UPD(0x0C0B80C2u, 1);  /* 0C0B80C0 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0B80C4u, 1);  /* 0C0B80C2 mov.l @(disp,pc),Rn */
	IF(0x0C0B80C4u); { u32 t_ = r3; PR = 0x0C0B80C8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B80C8u); }  /* 0C0B80C4 jsr @Rn */
L_0C0B80C8: BLKS(0x0C0B80C8u);
	r9 = 0x66666667u; UPD(0x0C0B80CAu, 1);  /* 0C0B80C8 mov.l @(disp,pc),Rn */
	IF(0x0C0B80CAu); r0 <<= 2;  /* 0C0B80CA shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r9; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B80CC dmuls.l Rm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0B80D0u, 4);  /* 0C0B80CE mov.l @(disp,Rm),Rn */
	IF(0x0C0B80D0u); r2 = MACH;  /* 0C0B80D0 sts mach,Rn */
	IF(0x0C0B80D2u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0B80D2 shar Rn */
	IF(0x0C0B80D4u); T = r0 >> 31; r0 <<= 1;  /* 0C0B80D4 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B80D6 subc Rm,Rn */
	r2 -= r0;  /* 0C0B80D8 sub Rm,Rn */
	r5 += r2;  /* 0C0B80DA add Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C0B80DEu, 7);  /* 0C0B80DC mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B80E0u, 1);  /* 0C0B80DE mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C0B80E2u, 1);  /* 0C0B80E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B80E2u); { u32 t_ = r1; PR = 0x0C0B80E6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B80E6u); }  /* 0C0B80E2 jsr @Rn */
L_0C0B80E6: BLKS(0x0C0B80E6u);
	r6 = R32(r12 + 0x28u); UPD(0x0C0B80E8u, 1);  /* 0C0B80E6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B80E8 add #imm,Rn */
	r6 += r0;  /* 0C0B80EA add Rm,Rn */
	W32(r15, r11); UPD(0x0C0B80EEu, 3);  /* 0C0B80EC mov.l Rm,@Rn */
	r7 = r13;  /* 0C0B80EE mov Rm,Rn */
	r0 = 0xC189CB8u; UPD(0x0C0B80F2u, 2);  /* 0C0B80F0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B80F2 mov #imm,Rn */
	r11 = 0xC0BB3A0u; UPD(0x0C0B80F6u, 2);  /* 0C0B80F4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B80F8u, 1);  /* 0C0B80F6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B80F8u); { u32 t_ = r11; PR = 0x0C0B80FCu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB3A0, 0x0C0BB3A0u, 0x0C0B80FCu); }  /* 0C0B80F8 jsr @Rn */
L_0C0B80FC: BLKS(0x0C0B80FCu);
	r6 = R32(r14 + 0x20u); UPD(0x0C0B80FEu, 1);  /* 0C0B80FC mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B8100u, 1);  /* 0C0B80FE mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B8100 add #imm,Rn */
	r13 = 0xFFFFE1FCu; UPD(0x0C0B8104u, 2);  /* 0C0B8102 mov.w @(disp,pc),Rn */
	IF(0x0C0B8104u); { u32 tv_ = (r13 + 0x0C0B8108u); u32 t_ = PHYS(tv_); W8(r6, r7); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B6304u: goto L_0C0B6304; default: JUMPD(tv_); } }  /* 0C0B8104 braf Rn */
L_0C0B8110: BLKS(0x0C0B8110u);
	r0 = 0x8Cu; UPD(0x0C0B8112u, 1);  /* 0C0B8110 mov.w @(disp,pc),Rn */
	IF(0x0C0B8112u); r11 = R32(r0 + r3); UPD(0x0C0B8114u, 1);  /* 0C0B8112 mov.l @(r0,Rm),Rn */
	r9 = 0xFF800000u; UPD(0x0C0B8116u, 1);  /* 0C0B8114 mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C0B8116 add Rm,Rn */
	T = (s32)r2 >= (s32)r9;  /* 0C0B8118 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8124u, 5); goto L_0C0B8124; } UPD(0x0C0B811Eu, 1); goto L_0C0B811E; }  /* 0C0B811A bt/s */
L_0C0B811E: BLKS(0x0C0B811Eu);
	r12 = 0x2000000u; UPD(0x0C0B8120u, 1);  /* 0C0B811E mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C0B8120 add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C0B8124u, 2);  /* 0C0B8122 mov.l Rm,@(disp,Rn) */
L_0C0B8124: BLKS(0x0C0B8124u);
	r2 = R32(r3 + 0x30u); UPD(0x0C0B8126u, 1);  /* 0C0B8124 mov.l @(disp,Rm),Rn */
	r13 = 0x1800000u; UPD(0x0C0B8128u, 1);  /* 0C0B8126 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r13;  /* 0C0B8128 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B8132u, 4); goto L_0C0B8132; }  /* 0C0B812A bf */
L_0C0B812C: BLKS(0x0C0B812Cu);
	r0 = 0xFE000000u; UPD(0x0C0B812Eu, 1);  /* 0C0B812C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0B812E add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C0B8132u, 2);  /* 0C0B8130 mov.l Rm,@(disp,Rn) */
L_0C0B8132: BLKS(0x0C0B8132u);
	r6 = 0x9Fu; UPD(0x0C0B8134u, 1);  /* 0C0B8132 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0B8134 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B8138u, 2);  /* 0C0B8136 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0B8138 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B813A tst Rm,Rn */
	{ u32 c_ = T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8190u, 5); goto L_0C0B8190; } goto L_0C0B8140; }  /* 0C0B813C bt/s */
L_0C0B8140: BLKS(0x0C0B8140u);
	T = r0 == 0x1u;  /* 0C0B8140 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B8170u, 5); goto L_0C0B8170; }  /* 0C0B8142 bt */
L_0C0B8144: BLKS(0x0C0B8144u);
	r2 = 0xB4u; UPD(0x0C0B8146u, 1);  /* 0C0B8144 mov.w @(disp,pc),Rn */
	IF(0x0C0B8146u); MACL = r10 * r2;  /* 0C0B8146 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B814Au, 3);  /* 0C0B8148 mov.l @(disp,pc),Rn */
	IF(0x0C0B814Au); r10 = MACL;  /* 0C0B814A sts macl,Rn */
	r10 += r7;  /* 0C0B814C add Rm,Rn */
	r0 = R32(r10 + 0x2Cu); UPD(0x0C0B8150u, 3);  /* 0C0B814E mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C0B8150 add #imm,Rn */
	r4 = R32(r10); UPD(0x0C0B8154u, 2);  /* 0C0B8152 mov.l @Rm,Rn */
	r10 += 0xFFFFFFB0u;  /* 0C0B8154 add #imm,Rn */
	r0 += r4;  /* 0C0B8156 add Rm,Rn */
	W32(r10 + 0x24u, r0); UPD(0x0C0B815Au, 3);  /* 0C0B8158 mov.l Rm,@(disp,Rn) */
	r13 = 0xC3C4048u; UPD(0x0C0B815Cu, 1);  /* 0C0B815A mov.l @(disp,pc),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0B815Eu, 1);  /* 0C0B815C mov.l @(disp,Rm),Rn */
	r12 = R32(r13); UPD(0x0C0B8160u, 1);  /* 0C0B815E mov.l @Rm,Rn */
	r1 += r12;  /* 0C0B8160 add Rm,Rn */
	r13 = 0xFFFFDB5Cu; UPD(0x0C0B8164u, 2);  /* 0C0B8162 mov.w @(disp,pc),Rn */
	IF(0x0C0B8164u); { u32 tv_ = (r13 + 0x0C0B8168u); u32 t_ = PHYS(tv_); W32(r10 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B5CC4u: goto L_0C0B5CC4; default: JUMPD(tv_); } }  /* 0C0B8164 braf Rn */
L_0C0B8170: BLKS(0x0C0B8170u);
	r7 = R32(r3 + 0x34u); UPD(0x0C0B8172u, 1);  /* 0C0B8170 mov.l @(disp,Rm),Rn */
	r6 = 0xFF00u; UPD(0x0C0B8174u, 1);  /* 0C0B8172 mov.l @(disp,pc),Rn */
	r5 = 0x400u; UPD(0x0C0B8176u, 1);  /* 0C0B8174 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C0B8176 and Rm,Rn */
	T = r6 > r5;  /* 0C0B8178 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8180u, 5); goto L_0C0B8180; }  /* 0C0B817A bt */
L_0C0B817C: BLKS(0x0C0B817Cu);
	r9 = 0x0u;  /* 0C0B817C mov #imm,Rn */
	W32(r3, r9); UPD(0x0C0B8180u, 2);  /* 0C0B817E mov.l Rm,@Rn */
L_0C0B8180: BLKS(0x0C0B8180u);
	r11 = 0xFFFFFBFCu; UPD(0x0C0B8182u, 1);  /* 0C0B8180 mov.w @(disp,pc),Rn */
	r7 += r11;  /* 0C0B8182 add Rm,Rn */
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8144u, 4); goto L_0C0B8144; }  /* 0C0B8184 bra */
L_0C0B8190: BLKS(0x0C0B8190u);
	r7 += 0x50u;  /* 0C0B8190 add #imm,Rn */
	r4 = R32(r7); UPD(0x0C0B8194u, 2);  /* 0C0B8192 mov.l @Rm,Rn */
	r1 = 0xF0u; UPD(0x0C0B8196u, 1);  /* 0C0B8194 mov.w @(disp,pc),Rn */
	IF(0x0C0B8196u); MACL = r4 * r1;  /* 0C0B8196 mul.l Rm,Rn */
	IF(0x0C0B8198u); r2 = MACL;  /* 0C0B8198 sts macl,Rn */
	IF(0x0C0B819Au); T = (s32)r2 >= 0;  /* 0C0B819A cmp/pz Rn */
	{ u32 c_ = !T; r1 += 0xFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B81C0u, 7); goto L_0C0B81C0; } UPD(0x0C0B81A0u, 1); goto L_0C0B81A0; }  /* 0C0B819C bf/s */
L_0C0B81A0: BLKS(0x0C0B81A0u);
	r8 = 0xFFFFFFF8u;  /* 0C0B81A0 mov #imm,Rn */
	IF(0x0C0B81A2u); ARG0(0x428Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0B81A2 shad Rm,Rn */
	W32(r7, r2); UPD(0x0C0B81A6u, 3);  /* 0C0B81A4 mov.l Rm,@Rn */
	r7 = 0x98u; UPD(0x0C0B81A8u, 1);  /* 0C0B81A6 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0B81A8 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B81ACu, 2);  /* 0C0B81AA mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B81AC add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0B81AE extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C0B81B0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r7, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B8144u, 6); goto L_0C0B8144; } UPD(0x0C0B81B6u, 1); goto L_0C0B81B6; }  /* 0C0B81B2 bf/s */
L_0C0B81B6: BLKS(0x0C0B81B6u);
	r3 = r5;  /* 0C0B81B6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0B81B8 add #imm,Rn */
	{ W8(r6, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0B8144u, 5); goto L_0C0B8144; }  /* 0C0B81BA bra */
L_0C0B81C0: BLKS(0x0C0B81C0u);
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C0B81A0u, 3); goto L_0C0B81A0; }  /* 0C0B81C0 bra */
}

void blk_f_0C0B8210(sh3_t *c)
{
	LOCALS;
L_0C0B8210: BLKS(0x0C0B8210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B8212u, 1);  /* 0C0B8210 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B8214u, 1);  /* 0C0B8212 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B8216u, 1);  /* 0C0B8214 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B8218u, 1);  /* 0C0B8216 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B821Au, 1);  /* 0C0B8218 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B821Cu, 1);  /* 0C0B821A mov.l Rm,@-Rn */
	r10 = 0xB4u; UPD(0x0C0B821Eu, 1);  /* 0C0B821C mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0B821E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B8222u, 2);  /* 0C0B8220 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r13 * (s32)(s16)r10);  /* 0C0B8222 muls.w Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B8226u, 3);  /* 0C0B8224 mov.l @(disp,pc),Rn */
	IF(0x0C0B8226u); r11 = MACL;  /* 0C0B8226 sts macl,Rn */
	IF(0x0C0B8228u); r15 -= 4; W32(r15, PR); UPD(0x0C0B822Au, 2);  /* 0C0B8228 sts.l pr,@-Rn */
	r11 += r9;  /* 0C0B822A add Rm,Rn */
	r7 = R32(r11 + 0x8u); UPD(0x0C0B822Eu, 2);  /* 0C0B822C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B822E add #imm,Rn */
	r0 = r7;  /* 0C0B8230 mov Rm,Rn */
	T = r0 == 0x4Bu;  /* 0C0B8232 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8240u, 6); goto L_0C0B8240; } goto L_0C0B8238; }  /* 0C0B8234 bf/s */
L_0C0B8238: BLKS(0x0C0B8238u);
	r6 = 0x1242u; UPD(0x0C0B823Au, 2);  /* 0C0B8238 mov.w @(disp,pc),Rn */
	IF(0x0C0B823Au); { u32 tv_ = (r6 + 0x0C0B823Eu); u32 t_ = PHYS(tv_); IF(0x0C0B823Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9480u: goto L_0C0B9480; default: JUMPD(tv_); } }  /* 0C0B823A braf Rn */
L_0C0B8240: BLKS(0x0C0B8240u);
	r0 = R32(r11 + 0x2Cu); UPD(0x0C0B8242u, 1);  /* 0C0B8240 mov.l @(disp,Rm),Rn */
	r5 = 0xC0u; UPD(0x0C0B8244u, 1);  /* 0C0B8242 mov.w @(disp,pc),Rn */
	IF(0x0C0B8244u); MACL = r0 * r5;  /* 0C0B8244 mul.l Rm,Rn */
	IF(0x0C0B8246u); r2 = MACL;  /* 0C0B8246 sts macl,Rn */
	IF(0x0C0B8248u); T = (s32)r2 >= 0;  /* 0C0B8248 cmp/pz Rn */
	{ u32 c_ = T; r6 = 0xFFFFFFF8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8258u, 7); goto L_0C0B8258; } goto L_0C0B824E; }  /* 0C0B824A bt/s */
L_0C0B824E: BLKS(0x0C0B824Eu);
	r0 = 0x121Cu; UPD(0x0C0B8250u, 2);  /* 0C0B824E mov.w @(disp,pc),Rn */
	IF(0x0C0B8250u); { u32 tv_ = (r0 + 0x0C0B8254u); u32 t_ = PHYS(tv_); IF(0x0C0B8252u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9470u: goto L_0C0B9470; default: JUMPD(tv_); } }  /* 0C0B8250 braf Rn */
L_0C0B8256: BLKS(0x0C0B8256u);
	r6 = 0xFFFFFFF8u;  /* 0C0B8256 mov #imm,Rn */
	UPD(0x0C0B8258u, 1);
L_0C0B8258: BLKS(0x0C0B8258u);
	r4 = r2;  /* 0C0B8258 mov Rm,Rn */
	IF(0x0C0B825Au); ARG0(0x446Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0B825A shad Rm,Rn */
	r8 = 0xFFFFu; UPD(0x0C0B825Eu, 3);  /* 0C0B825C mov.l @(disp,pc),Rn */
	W32(r11 + 0x2Cu, r4); UPD(0x0C0B8260u, 1);  /* 0C0B825E mov.l Rm,@(disp,Rn) */
	r3 = 0x1FFFEu; UPD(0x0C0B8262u, 1);  /* 0C0B8260 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C0B8262 add Rm,Rn */
	T = r4 > r3;  /* 0C0B8264 cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B826Cu, 5); goto L_0C0B826C; } goto L_0C0B826A; }  /* 0C0B8266 bt/s */
L_0C0B826A: BLKS(0x0C0B826Au);
	W32(r11 + 0x2Cu, r2); UPD(0x0C0B826Cu, 2);  /* 0C0B826A mov.l Rm,@(disp,Rn) */
L_0C0B826C: BLKS(0x0C0B826Cu);
	r12 = R32(r11 + 0x30u); UPD(0x0C0B826Eu, 1);  /* 0C0B826C mov.l @(disp,Rm),Rn */
	IF(0x0C0B826Eu); MACL = r12 * r5;  /* 0C0B826E mul.l Rm,Rn */
	IF(0x0C0B8270u); r2 = MACL;  /* 0C0B8270 sts macl,Rn */
	IF(0x0C0B8272u); T = (s32)r2 >= 0;  /* 0C0B8272 cmp/pz Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8282u, 7); goto L_0C0B8282; } goto L_0C0B8278; }  /* 0C0B8274 bt/s */
L_0C0B8278: BLKS(0x0C0B8278u);
	r5 = 0x11E2u; UPD(0x0C0B827Au, 2);  /* 0C0B8278 mov.w @(disp,pc),Rn */
	IF(0x0C0B827Au); { u32 tv_ = (r5 + 0x0C0B827Eu); u32 t_ = PHYS(tv_); IF(0x0C0B827Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9460u: goto L_0C0B9460; default: JUMPD(tv_); } }  /* 0C0B827A braf Rn */
L_0C0B8280: BLKS(0x0C0B8280u);
	r0 = r2;  /* 0C0B8280 mov Rm,Rn */
	UPD(0x0C0B8282u, 1);
L_0C0B8282: BLKS(0x0C0B8282u);
	IF(0x0C0B8282u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B8282 shad Rm,Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C0B8286u, 2);  /* 0C0B8284 mov.l Rm,@(disp,Rn) */
	r0 += r8;  /* 0C0B8286 add Rm,Rn */
	T = r0 > r3;  /* 0C0B8288 cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8290u, 5); goto L_0C0B8290; } goto L_0C0B828E; }  /* 0C0B828A bt/s */
L_0C0B828E: BLKS(0x0C0B828Eu);
	W32(r11 + 0x30u, r3); UPD(0x0C0B8290u, 2);  /* 0C0B828E mov.l Rm,@(disp,Rn) */
L_0C0B8290: BLKS(0x0C0B8290u);
	r11 += 0x40u;  /* 0C0B8290 add #imm,Rn */
	r12 = r11;  /* 0C0B8292 mov Rm,Rn */
	r11 += 0xFFFFFFC0u;  /* 0C0B8294 add #imm,Rn */
	r5 = R32(r12 + 0x1Cu); UPD(0x0C0B8298u, 4);  /* 0C0B8296 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0B8298 tst Rm,Rn */
	r1 = R32(r11 + 0x2Cu); UPD(0x0C0B829Cu, 2);  /* 0C0B829A mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0B829C add Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C0B82A0u, 2);  /* 0C0B829E mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C4048u; UPD(0x0C0B82A2u, 1);  /* 0C0B82A0 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x20u); UPD(0x0C0B82A4u, 1);  /* 0C0B82A2 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x30u); UPD(0x0C0B82A6u, 1);  /* 0C0B82A4 mov.l @(disp,Rm),Rn */
	r4 = R32(r2); UPD(0x0C0B82A8u, 1);  /* 0C0B82A6 mov.l @Rm,Rn */
	r6 += r3;  /* 0C0B82A8 add Rm,Rn */
	r6 += r4;  /* 0C0B82AA add Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B82B4u, 5); goto L_0C0B82B4; } UPD(0x0C0B82B0u, 1); goto L_0C0B82B0; }  /* 0C0B82AC bt/s */
L_0C0B82B0: BLKS(0x0C0B82B0u);
	{ IF(0x0C0B82B2u); ; /* slot nop */ UPD(0x0C0B85C0u, 3); goto L_0C0B85C0; }  /* 0C0B82B0 bra */
L_0C0B82B4: BLKS(0x0C0B82B4u);
	r2 = 0x9Fu; UPD(0x0C0B82B6u, 1);  /* 0C0B82B4 mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C0B82B6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B82BAu, 2);  /* 0C0B82B8 mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B82BA extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B82BC cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8390u, 5); goto L_0C0B8390; } goto L_0C0B82C2; }  /* 0C0B82BE bt/s */
L_0C0B82C2: BLKS(0x0C0B82C2u);
	T = (s32)r0 > (s32)r6;  /* 0C0B82C2 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B8330u, 5); goto L_0C0B8330; } goto L_0C0B82C8; }  /* 0C0B82C4 bt/s */
L_0C0B82C8: BLKS(0x0C0B82C8u);
	T = (r0 & r0) == 0;  /* 0C0B82C8 tst Rm,Rn */
	if (T) { UPD(0x0C0B82F0u, 5); goto L_0C0B82F0; }  /* 0C0B82CA bt */
L_0C0B82CC: BLKS(0x0C0B82CCu);
	r14 += 0x8u;  /* 0C0B82CC add #imm,Rn */
	UPD(0x0C0B82CEu, 1);
L_0C0B82CE: BLKS(0x0C0B82CEu);
	r15 = r14;  /* 0C0B82CE mov Rm,Rn */
	IF(0x0C0B82D0u); PR = R32(r15); r15 += 4; UPD(0x0C0B82D2u, 2);  /* 0C0B82D0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B82D4u, 1);  /* 0C0B82D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B82D6u, 1);  /* 0C0B82D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B82D8u, 1);  /* 0C0B82D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B82DAu, 1);  /* 0C0B82D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B82DCu, 1);  /* 0C0B82DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B82DEu, 1);  /* 0C0B82DC mov.l @Rm+,Rn */
	IF(0x0C0B82DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B82DE rts */
L_0C0B82F0: BLKS(0x0C0B82F0u);
	r9 = (r3 >> 16) | (r3 << 16);  /* 0C0B82F0 swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r9;  /* 0C0B82F2 exts.w Rm,Rn */
	r7 += 0x1u;  /* 0C0B82F4 add #imm,Rn */
	T = r7 > r6;  /* 0C0B82F6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B82FEu, 7); goto L_0C0B82FE; } goto L_0C0B82FC; }  /* 0C0B82F8 bt/s */
L_0C0B82FC: BLKS(0x0C0B82FCu);
	W8(r2, r1); UPD(0x0C0B82FEu, 2);  /* 0C0B82FC mov.b Rm,@Rn */
L_0C0B82FE: BLKS(0x0C0B82FEu);
	r3 = 0xC239494u; UPD(0x0C0B8300u, 1);  /* 0C0B82FE mov.l @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C0B8300 mov #imm,Rn */
	W32(r3, r11); UPD(0x0C0B8304u, 2);  /* 0C0B8302 mov.l Rm,@Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0B8306u, 1);  /* 0C0B8304 mov.l @(disp,pc),Rn */
	r11 += 0x7Du;  /* 0C0B8306 add #imm,Rn */
	r10 = 0xC28EC78u; UPD(0x0C0B830Au, 2);  /* 0C0B8308 mov.l @(disp,pc),Rn */
	r8 = R32(r2); UPD(0x0C0B830Cu, 1);  /* 0C0B830A mov.l @Rm,Rn */
	W32(r10 + 0x4u, r11); UPD(0x0C0B830Eu, 1);  /* 0C0B830C mov.l Rm,@(disp,Rn) */
	T = (r8 & r8) == 0;  /* 0C0B830E tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8318u, 4); goto L_0C0B8318; } UPD(0x0C0B8314u, 1); goto L_0C0B8314; }  /* 0C0B8310 bf/s */
L_0C0B8314: BLKS(0x0C0B8314u);
	r13 = 0x2u;  /* 0C0B8314 mov #imm,Rn */
	W32(r3, r13); UPD(0x0C0B8318u, 2);  /* 0C0B8316 mov.l Rm,@Rn */
L_0C0B8318: BLKS(0x0C0B8318u);
	r0 = 0x2A0u; UPD(0x0C0B831Au, 1);  /* 0C0B8318 mov.w @(disp,pc),Rn */
	IF(0x0C0B831Au); r12 = R32(r0 + r2); UPD(0x0C0B831Cu, 1);  /* 0C0B831A mov.l @(r0,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C0B831C tst Rm,Rn */
	if (!T) { UPD(0x0C0B82CCu, 4); goto L_0C0B82CC; }  /* 0C0B831E bf */
L_0C0B8320: BLKS(0x0C0B8320u);
	r0 = R32(r3); UPD(0x0C0B8322u, 1);  /* 0C0B8320 mov.l @Rm,Rn */
	r0 += 0xFFFFFFFEu;  /* 0C0B8322 add #imm,Rn */
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0B82CCu, 4); goto L_0C0B82CC; }  /* 0C0B8324 bra */
L_0C0B8330: BLKS(0x0C0B8330u);
	if (!T) { UPD(0x0C0B82CCu, 3); goto L_0C0B82CC; }  /* 0C0B8330 bf */
L_0C0B8332: BLKS(0x0C0B8332u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8334u, 1);  /* 0C0B8332 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C0B8334 mov Rm,Rn */
	r6 = 0x807u; UPD(0x0C0B8338u, 2);  /* 0C0B8336 mov.w @(disp,pc),Rn */
	r4 &= r3;  /* 0C0B8338 and Rm,Rn */
	T = r4 > r6;  /* 0C0B833A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8350u, 5); goto L_0C0B8350; }  /* 0C0B833C bt */
L_0C0B833E: BLKS(0x0C0B833Eu);
	W32(r11, r7); UPD(0x0C0B8340u, 1);  /* 0C0B833E mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8340 bra */
L_0C0B8350: BLKS(0x0C0B8350u);
	r1 = 0xFFFFF7F8u; UPD(0x0C0B8352u, 1);  /* 0C0B8350 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C0B8352 add Rm,Rn */
	UPD(0x0C0B8354u, 1);
L_0C0B8354: BLKS(0x0C0B8354u);
	W32(r11 + 0x34u, r3); UPD(0x0C0B8356u, 1);  /* 0C0B8354 mov.l Rm,@(disp,Rn) */
L_0C0B8356: BLKS(0x0C0B8356u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8356 bra */
L_0C0B8390: BLKS(0x0C0B8390u);
	r2 = 0xC238014u; UPD(0x0C0B8392u, 1);  /* 0C0B8390 mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C0B8394u, 1);  /* 0C0B8392 mov.l @Rm,Rn */
	IF(0x0C0B8394u); T = (s32)r1 > 0;  /* 0C0B8394 cmp/pl Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B839Eu, 4); goto L_0C0B839E; } goto L_0C0B839A; }  /* 0C0B8396 bt/s */
L_0C0B839A: BLKS(0x0C0B839Au);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0B8570u, 4); goto L_0C0B8570; }  /* 0C0B839A bra */
L_0C0B839E: BLKS(0x0C0B839Eu);
	r1 += 0xFFFFFFFFu;  /* 0C0B839E add #imm,Rn */
	W32(r2, r1); UPD(0x0C0B83A2u, 2);  /* 0C0B83A0 mov.l Rm,@Rn */
L_0C0B83A2: BLKS(0x0C0B83A2u);
	r13 = 0x0u;  /* 0C0B83A2 mov #imm,Rn */
	UPD(0x0C0B83A4u, 1);
L_0C0B83A4: BLKS(0x0C0B83A4u);
	r9 = 0xC29D1D8u; UPD(0x0C0B83A6u, 1);  /* 0C0B83A4 mov.l @(disp,pc),Rn */
	r9 += r13;  /* 0C0B83A6 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C0B83AAu, 2);  /* 0C0B83A8 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B83AA tst Rm,Rn */
	{ u32 c_ = T; r7 = 0u - r8; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C0B83BEu, 4); goto L_0C0B83BE; } goto L_0C0B83B0; }  /* 0C0B83AC bt/s */
L_0C0B83B0: BLKS(0x0C0B83B0u);
	r6 = 0xC239494u; UPD(0x0C0B83B2u, 2);  /* 0C0B83B0 mov.l @(disp,pc),Rn */
	r0 = R32(r6); UPD(0x0C0B83B4u, 1);  /* 0C0B83B2 mov.l @Rm,Rn */
	IF(0x0C0B83B4u); ARG0(0x407Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B83B4 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C0B83B6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B83B8 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B83C2u, 6); goto L_0C0B83C2; } UPD(0x0C0B83BEu, 1); goto L_0C0B83BE; }  /* 0C0B83BA bf/s */
L_0C0B83BE: BLKS(0x0C0B83BEu);
	{ r12 = r8; /* slot mov Rm,Rn */ UPD(0x0C0B8530u, 3); goto L_0C0B8530; }  /* 0C0B83BE bra */
L_0C0B83C2: BLKS(0x0C0B83C2u);
	IF(0x0C0B83C2u); r1 <<= 2;  /* 0C0B83C2 shll2 Rn */
	r10 = r1;  /* 0C0B83C4 mov Rm,Rn */
	r10 += r11;  /* 0C0B83C6 add Rm,Rn */
	r10 += 0x6Cu;  /* 0C0B83C8 add #imm,Rn */
	r0 = R32(r10); UPD(0x0C0B83CCu, 5);  /* 0C0B83CA mov.l @Rm,Rn */
	r12 = r1;  /* 0C0B83CC mov Rm,Rn */
	W32(r14, r1); UPD(0x0C0B83D0u, 2);  /* 0C0B83CE mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0B83D0 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFF94u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B84B0u, 4); goto L_0C0B84B0; } goto L_0C0B83D6; }  /* 0C0B83D2 bf/s */
L_0C0B83D6: BLKS(0x0C0B83D6u);
	r2 = r10;  /* 0C0B83D6 mov Rm,Rn */
	r2 += 0x64u;  /* 0C0B83D8 add #imm,Rn */
	r4 = R32(r2); UPD(0x0C0B83DCu, 4);  /* 0C0B83DA mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0B83DC tst Rm,Rn */
	if (!T) { UPD(0x0C0B83F4u, 4); goto L_0C0B83F4; }  /* 0C0B83DE bf */
L_0C0B83E0: BLKS(0x0C0B83E0u);
	r0 = R32(r9 + 0x4u); UPD(0x0C0B83E2u, 1);  /* 0C0B83E0 mov.l @(disp,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B83E2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B83E4 tst Rm,Rn */
	if (T) { UPD(0x0C0B84A0u, 5); goto L_0C0B84A0; }  /* 0C0B83E6 bt */
L_0C0B83E8: BLKS(0x0C0B83E8u);
	r0 = 0x24Eu; UPD(0x0C0B83EAu, 1);  /* 0C0B83E8 mov.w @(disp,pc),Rn */
	IF(0x0C0B83EAu); r0 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B83ECu, 1);  /* 0C0B83EA mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B83EC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B83EE tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8490u, 5); goto L_0C0B8490; } UPD(0x0C0B83F4u, 1); goto L_0C0B83F4; }  /* 0C0B83F0 bf/s */
L_0C0B83F4: BLKS(0x0C0B83F4u);
	r5 = 0xC29D1D8u; UPD(0x0C0B83F6u, 1);  /* 0C0B83F4 mov.l @(disp,pc),Rn */
	r0 = 0x24Eu; UPD(0x0C0B83F8u, 1);  /* 0C0B83F6 mov.w @(disp,pc),Rn */
	r5 += r13;  /* 0C0B83F8 add Rm,Rn */
	IF(0x0C0B83FAu); r0 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C0B83FCu, 2);  /* 0C0B83FA mov.w @(r0,Rm),Rn */
	r0 &= 0xF0u;  /* 0C0B83FC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B83FE tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8470u, 5); goto L_0C0B8470; } UPD(0x0C0B8404u, 1); goto L_0C0B8404; }  /* 0C0B8400 bf/s */
L_0C0B8404: BLKS(0x0C0B8404u);
	r3 = 0xC28EC78u; UPD(0x0C0B8406u, 1);  /* 0C0B8404 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0B8406 mov Rm,Rn */
	r2 += r3;  /* 0C0B8408 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0B840Cu, 3);  /* 0C0B840A mov.l @Rm,Rn */
	r7 = 0x80u; UPD(0x0C0B840Eu, 1);  /* 0C0B840C mov.w @(disp,pc),Rn */
	T = r1 == r7;  /* 0C0B840E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B8416u, 4); goto L_0C0B8416; }  /* 0C0B8410 bt */
L_0C0B8412: BLKS(0x0C0B8412u);
	r1 += 0xFFFFFFFCu;  /* 0C0B8412 add #imm,Rn */
	W32(r2, r1); UPD(0x0C0B8416u, 2);  /* 0C0B8414 mov.l Rm,@Rn */
L_0C0B8416: BLKS(0x0C0B8416u);
	r9 = 0x2A0u; UPD(0x0C0B8418u, 1);  /* 0C0B8416 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0B8418 add #imm,Rn */
	r12 = 0x1u;  /* 0C0B841A mov #imm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0B841C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += r9; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0B83A4u, 6); goto L_0C0B83A4; } goto L_0C0B8422; }  /* 0C0B841E bf/s */
L_0C0B8422: BLKS(0x0C0B8422u);
	r13 = 0xC239494u; UPD(0x0C0B8424u, 2);  /* 0C0B8422 mov.l @(disp,pc),Rn */
	r8 = R32(r13); UPD(0x0C0B8426u, 1);  /* 0C0B8424 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0B8426 tst Rm,Rn */
	if (!T) { UPD(0x0C0B8356u, 4); goto L_0C0B8356; }  /* 0C0B8428 bf */
L_0C0B842A: BLKS(0x0C0B842Au);
	r2 = R32(r3); UPD(0x0C0B842Cu, 1);  /* 0C0B842A mov.l @Rm,Rn */
	T = r2 == r7;  /* 0C0B842C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B8356u, 4); goto L_0C0B8356; }  /* 0C0B842E bf */
L_0C0B8430: BLKS(0x0C0B8430u);
	r10 = R32(r3 + 0x4u); UPD(0x0C0B8432u, 1);  /* 0C0B8430 mov.l @(disp,Rm),Rn */
	T = r10 == r2;  /* 0C0B8432 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B8356u, 4); goto L_0C0B8356; }  /* 0C0B8434 bf */
L_0C0B8436: BLKS(0x0C0B8436u);
	r5 = 0x10u;  /* 0C0B8436 mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B843Au, 2);  /* 0C0B8438 mov.w @(disp,pc),Rn */
	IF(0x0C0B843Au); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B843Cu, 1);  /* 0C0B843A mov.b @(r0,Rm),Rn */
	r12 = 0xC072A90u; UPD(0x0C0B843Eu, 1);  /* 0C0B843C mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C0B843E add #imm,Rn */
	r4 = 0x200u; UPD(0x0C0B8442u, 2);  /* 0C0B8440 mov.w @(disp,pc),Rn */
	IF(0x0C0B8442u); { u32 t_ = r12; PR = 0x0C0B8446u; IF(0x0C0B8444u); W8(r0 + r11, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C072A90, 0x0C072A90u, 0x0C0B8446u); }  /* 0C0B8442 jsr @Rn */
L_0C0B8446: BLKS(0x0C0B8446u);
	r2 = 0xC3C86ACu; UPD(0x0C0B8448u, 1);  /* 0C0B8446 mov.l @(disp,pc),Rn */
	W32(r2, r8); UPD(0x0C0B844Au, 1);  /* 0C0B8448 mov.l Rm,@Rn */
	r11 = 0xC06D5A0u; UPD(0x0C0B844Cu, 1);  /* 0C0B844A mov.l @(disp,pc),Rn */
	r8 = 0xC062000u; UPD(0x0C0B844Eu, 1);  /* 0C0B844C mov.l @(disp,pc),Rn */
	IF(0x0C0B844Eu); { u32 t_ = r11; PR = 0x0C0B8452u; IF(0x0C0B8450u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D5A0, 0x0C06D5A0u, 0x0C0B8452u); }  /* 0C0B844E jsr @Rn */
L_0C0B8452: BLKS(0x0C0B8452u);
	IF(0x0C0B8452u); { u32 t_ = r8; PR = 0x0C0B8456u; IF(0x0C0B8454u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C0B8456u); }  /* 0C0B8452 jsr @Rn */
L_0C0B8456: BLKS(0x0C0B8456u);
	r3 = r11;  /* 0C0B8456 mov Rm,Rn */
	r14 += 0x8u;  /* 0C0B8458 add #imm,Rn */
	r15 = r14;  /* 0C0B845A mov Rm,Rn */
	IF(0x0C0B845Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B845Eu, 4);  /* 0C0B845C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B8460u, 1);  /* 0C0B845E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B8462u, 1);  /* 0C0B8460 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B8464u, 1);  /* 0C0B8462 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B8466u, 1);  /* 0C0B8464 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B8468u, 1);  /* 0C0B8466 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B846Au, 1);  /* 0C0B8468 mov.l @Rm+,Rn */
	IF(0x0C0B846Au); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06D5A0u: TAIL(blk_f_0C06D5A0); default: JUMPD(tv_); } }  /* 0C0B846A jmp @Rn */
L_0C0B8470: BLKS(0x0C0B8470u);
	r10 = R32(r14); UPD(0x0C0B8472u, 1);  /* 0C0B8470 mov.l @Rm,Rn */
	r10 += r11;  /* 0C0B8472 add Rm,Rn */
	r10 += 0x6Cu;  /* 0C0B8474 add #imm,Rn */
	W32(r10, r3); UPD(0x0C0B8478u, 3);  /* 0C0B8476 mov.l Rm,@Rn */
L_0C0B8478: BLKS(0x0C0B8478u);
	r0 = 0xC0C22E0u; UPD(0x0C0B847Au, 1);  /* 0C0B8478 mov.l @(disp,pc),Rn */
	r4 = 0x5Fu;  /* 0C0B847A mov #imm,Rn */
	IF(0x0C0B847Cu); { u32 t_ = r0; PR = 0x0C0B8480u; r5 = 0x24u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C0B8480u); }  /* 0C0B847C jsr @Rn */
L_0C0B8480: BLKS(0x0C0B8480u);
	{ IF(0x0C0B8482u); ; /* slot nop */ UPD(0x0C0B8404u, 3); goto L_0C0B8404; }  /* 0C0B8480 bra */
L_0C0B8490: BLKS(0x0C0B8490u);
	r9 = 0xC0C22E0u; UPD(0x0C0B8492u, 1);  /* 0C0B8490 mov.l @(disp,pc),Rn */
	r4 = 0x63u;  /* 0C0B8492 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B8496u, 2);  /* 0C0B8494 mov.l Rm,@Rn */
	IF(0x0C0B8496u); { u32 t_ = r9; PR = 0x0C0B849Au; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C0B849Au); }  /* 0C0B8496 jsr @Rn */
L_0C0B849A: BLKS(0x0C0B849Au);
	{ IF(0x0C0B849Cu); ; /* slot nop */ UPD(0x0C0B83F4u, 3); goto L_0C0B83F4; }  /* 0C0B849A bra */
L_0C0B84A0: BLKS(0x0C0B84A0u);
	r0 = 0x24Eu; UPD(0x0C0B84A2u, 1);  /* 0C0B84A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B84A2u); r0 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B84A4u, 1);  /* 0C0B84A2 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C0B84A4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B84A6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B83F4u, 5); goto L_0C0B83F4; } goto L_0C0B84AC; }  /* 0C0B84A8 bt/s */
L_0C0B84AC: BLKS(0x0C0B84ACu);
	{ IF(0x0C0B84AEu); ; /* slot nop */ UPD(0x0C0B8490u, 4); goto L_0C0B8490; }  /* 0C0B84AC bra */
L_0C0B84B0: BLKS(0x0C0B84B0u);
	r2 = 0x24Eu; UPD(0x0C0B84B2u, 1);  /* 0C0B84B0 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0B84B2 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B84B6u, 2);  /* 0C0B84B4 mov.w @Rm,Rn */
	r0 = r1;  /* 0C0B84B6 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0B84B8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B84BA tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8510u, 6); goto L_0C0B8510; } UPD(0x0C0B84C0u, 1); goto L_0C0B84C0; }  /* 0C0B84BC bf/s */
L_0C0B84C0: BLKS(0x0C0B84C0u);
	r0 = r1;  /* 0C0B84C0 mov Rm,Rn */
	r0 &= 0x2u;  /* 0C0B84C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B84C4 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B84F0u, 6); goto L_0C0B84F0; } UPD(0x0C0B84CAu, 1); goto L_0C0B84CA; }  /* 0C0B84C6 bf/s */
L_0C0B84CA: BLKS(0x0C0B84CAu);
	r0 = r1;  /* 0C0B84CA mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C0B84CC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B84CE tst Rm,Rn */
	if (T) { UPD(0x0C0B8404u, 6); goto L_0C0B8404; }  /* 0C0B84D0 bt */
L_0C0B84D2: BLKS(0x0C0B84D2u);
	r10 += 0x64u;  /* 0C0B84D2 add #imm,Rn */
	r4 = 0xC239494u; UPD(0x0C0B84D6u, 2);  /* 0C0B84D4 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C0B84D6 mov #imm,Rn */
	r1 = 0x1u;  /* 0C0B84D8 mov #imm,Rn */
	W32(r10, r6); UPD(0x0C0B84DCu, 3);  /* 0C0B84DA mov.l Rm,@Rn */
	IF(0x0C0B84DCu); ARG0(0x418Du); { s32 s_ = (s32)r8; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B84DC shld Rm,Rn */
	r5 = R32(r4); UPD(0x0C0B84E0u, 2);  /* 0C0B84DE mov.l @Rm,Rn */
	r0 = r12;  /* 0C0B84E0 mov Rm,Rn */
	r10 = 0xC28EC78u; UPD(0x0C0B84E4u, 2);  /* 0C0B84E2 mov.l @(disp,pc),Rn */
	r5 -= r1;  /* 0C0B84E4 sub Rm,Rn */
	r7 = 0x100u; UPD(0x0C0B84E8u, 2);  /* 0C0B84E6 mov.w @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C0B84EAu, 1);  /* 0C0B84E8 mov.l Rm,@Rn */
	{ IF(0x0C0B84ECu); W32(r0 + r10, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B8478u, 3); goto L_0C0B8478; }  /* 0C0B84EA bra */
L_0C0B84F0: BLKS(0x0C0B84F0u);
	r3 = R32(r9 + 0x4u); UPD(0x0C0B84F2u, 1);  /* 0C0B84F0 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C0B84F2 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C0B84F4 and #imm,r0 */
	r0 += 0x1u;  /* 0C0B84F6 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0B84F8 and #imm,r0 */
	r3 &= r2;  /* 0C0B84FA and Rm,Rn */
	r3 |= r0;  /* 0C0B84FC or Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C0B8500u, 7);  /* 0C0B84FE mov.l Rm,@(disp,Rn) */
	r4 = 0x63u;  /* 0C0B8500 mov #imm,Rn */
	r9 = 0xC0C22E0u; UPD(0x0C0B8504u, 2);  /* 0C0B8502 mov.l @(disp,pc),Rn */
	IF(0x0C0B8504u); { u32 t_ = r9; PR = 0x0C0B8508u; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C0B8508u); }  /* 0C0B8504 jsr @Rn */
L_0C0B8508: BLKS(0x0C0B8508u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0B850Au, 1);  /* 0C0B8508 mov.l @(disp,Rm),Rn */
	{ r1 = (u32)(s32)(s16)R16(r0); /* slot mov.w @Rm,Rn */ UPD(0x0C0B84CAu, 3); goto L_0C0B84CA; }  /* 0C0B850A bra */
L_0C0B8510: BLKS(0x0C0B8510u);
	r4 = R32(r9 + 0x4u); UPD(0x0C0B8512u, 1);  /* 0C0B8510 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFFFCu;  /* 0C0B8512 mov #imm,Rn */
	r0 = r4;  /* 0C0B8514 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C0B8516 and #imm,r0 */
	r0 += 0xFFFFFFFFu;  /* 0C0B8518 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0B851A and #imm,r0 */
	r4 &= r5;  /* 0C0B851C and Rm,Rn */
	r4 |= r0;  /* 0C0B851E or Rm,Rn */
	r6 = 0xC0C22E0u; UPD(0x0C0B8522u, 8);  /* 0C0B8520 mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C0B8522 mov #imm,Rn */
	W32(r9 + 0x4u, r4); UPD(0x0C0B8526u, 2);  /* 0C0B8524 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B8526u); { u32 t_ = r6; PR = 0x0C0B852Au; r4 = 0x63u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C0B852Au); }  /* 0C0B8526 jsr @Rn */
L_0C0B852A: BLKS(0x0C0B852Au);
	r7 = R32(r14 + 0x4u); UPD(0x0C0B852Cu, 1);  /* 0C0B852A mov.l @(disp,Rm),Rn */
	{ r1 = (u32)(s32)(s16)R16(r7); /* slot mov.w @Rm,Rn */ UPD(0x0C0B84C0u, 3); goto L_0C0B84C0; }  /* 0C0B852C bra */
L_0C0B8530: BLKS(0x0C0B8530u);
	{ IF(0x0C0B8532u); r12 <<= 2; /* slot shll2 Rn */ UPD(0x0C0B8404u, 3); goto L_0C0B8404; }  /* 0C0B8530 bra */
L_0C0B8570: BLKS(0x0C0B8570u);
	r7 = 0xC29D1D8u; UPD(0x0C0B8572u, 1);  /* 0C0B8570 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0B8572 mov #imm,Rn */
	r3 += 0x64u;  /* 0C0B8574 add #imm,Rn */
	IF(0x0C0B8576u); ;  /* 0C0B8576 nop */
	UPD(0x0C0B8578u, 3);
L_0C0B8578: BLKS(0x0C0B8578u);
	r6 = R32(r7); UPD(0x0C0B857Au, 1);  /* 0C0B8578 mov.l @Rm,Rn */
	r4 = 0x2A0u; UPD(0x0C0B857Cu, 1);  /* 0C0B857A mov.w @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C0B857C tst Rm,Rn */
	{ u32 c_ = T; r7 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0B85A8u, 4); goto L_0C0B85A8; } goto L_0C0B8582; }  /* 0C0B857E bt/s */
L_0C0B8582: BLKS(0x0C0B8582u);
	r6 = 0xC239494u; UPD(0x0C0B8584u, 2);  /* 0C0B8582 mov.l @(disp,pc),Rn */
	r5 = 0u - r8;  /* 0C0B8584 neg Rm,Rn */
	r2 = R32(r6); UPD(0x0C0B8588u, 2);  /* 0C0B8586 mov.l @Rm,Rn */
	r0 = r2;  /* 0C0B8588 mov Rm,Rn */
	IF(0x0C0B858Au); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B858A shad Rm,Rn */
	r0 &= 0x1u;  /* 0C0B858C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B858E tst Rm,Rn */
	{ u32 c_ = T; r13 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B85A8u, 7); goto L_0C0B85A8; } goto L_0C0B8594; }  /* 0C0B8590 bt/s */
L_0C0B8594: BLKS(0x0C0B8594u);
	IF(0x0C0B8594u); ARG0(0x4D8Du); { s32 s_ = (s32)r8; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0B8594 shld Rm,Rn */
	r2 -= r13;  /* 0C0B8596 sub Rm,Rn */
	W32(r6, r2); UPD(0x0C0B859Au, 4);  /* 0C0B8598 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0B859A mov Rm,Rn */
	r9 = 0xC28EC78u; UPD(0x0C0B859Eu, 2);  /* 0C0B859C mov.l @(disp,pc),Rn */
	IF(0x0C0B859Eu); r0 <<= 2;  /* 0C0B859E shll2 Rn */
	r2 = 0x100u; UPD(0x0C0B85A2u, 2);  /* 0C0B85A0 mov.w @(disp,pc),Rn */
	r10 = 0x2u;  /* 0C0B85A2 mov #imm,Rn */
	W32(r3, r10); UPD(0x0C0B85A6u, 2);  /* 0C0B85A4 mov.l Rm,@Rn */
	IF(0x0C0B85A6u); W32(r0 + r9, r2); UPD(0x0C0B85A8u, 1);  /* 0C0B85A6 mov.l Rm,@(r0,Rn) */
L_0C0B85A8: BLKS(0x0C0B85A8u);
	r8 += 0x1u;  /* 0C0B85A8 add #imm,Rn */
	r12 = 0x1u;  /* 0C0B85AA mov #imm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0B85AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B8578u, 6); goto L_0C0B8578; } goto L_0C0B85B2; }  /* 0C0B85AE bf/s */
L_0C0B85B2: BLKS(0x0C0B85B2u);
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0B83A2u, 4); goto L_0C0B83A2; }  /* 0C0B85B2 bra */
L_0C0B85C0: BLKS(0x0C0B85C0u);
	r0 = 0xC0A8B50u; UPD(0x0C0B85C2u, 1);  /* 0C0B85C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B85C2u); { u32 t_ = r0; PR = 0x0C0B85C6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B85C6u); }  /* 0C0B85C2 jsr @Rn */
L_0C0B85C6: BLKS(0x0C0B85C6u);
	r0 = (u32)(s32)(s16)r0;  /* 0C0B85C6 exts.w Rm,Rn */
	IF(0x0C0B85C8u); T = (s32)r0 >= 0;  /* 0C0B85C8 cmp/pz Rn */
	if (T) { UPD(0x0C0B85D2u, 5); goto L_0C0B85D2; }  /* 0C0B85CA bt */
L_0C0B85CC: BLKS(0x0C0B85CCu);
	r1 = 0x0u;  /* 0C0B85CC mov #imm,Rn */
	{ W32(r11, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0B8A08u, 4); goto L_0C0B8A08; }  /* 0C0B85CE bra */
L_0C0B85D2: BLKS(0x0C0B85D2u);
	MACL = (u32)((s32)(s16)r0 * (s32)(s16)r10);  /* 0C0B85D2 muls.w Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B85D6u, 3);  /* 0C0B85D4 mov.w @(disp,pc),Rn */
	IF(0x0C0B85D6u); r3 = MACL;  /* 0C0B85D6 sts macl,Rn */
	r3 += r9;  /* 0C0B85D8 add Rm,Rn */
	IF(0x0C0B85DAu); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B85DCu, 3);  /* 0C0B85DA mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0B85DC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 = 0x49u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B85E6u, 4); goto L_0C0B85E6; } goto L_0C0B85E2; }  /* 0C0B85DE bf/s */
L_0C0B85E2: BLKS(0x0C0B85E2u);
	{ r2 = R32(r11 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B9440u, 4); goto L_0C0B9440; }  /* 0C0B85E2 bra */
L_0C0B85E6: BLKS(0x0C0B85E6u);
	r7 = R32(r11 + 0x8u); UPD(0x0C0B85E8u, 1);  /* 0C0B85E6 mov.l @(disp,Rm),Rn */
	r2 = r7;  /* 0C0B85E8 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B85EA add #imm,Rn */
	T = r2 > r9;  /* 0C0B85EC cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B85F6u, 6); goto L_0C0B85F6; }  /* 0C0B85EE bf */
L_0C0B85F0: BLKS(0x0C0B85F0u);
	r14 += 0x8u;  /* 0C0B85F0 add #imm,Rn */
	{ IF(0x0C0B85F4u); ; /* slot nop */ UPD(0x0C0B82CEu, 4); goto L_0C0B82CE; }  /* 0C0B85F2 bra */
L_0C0B85F6: BLKS(0x0C0B85F6u);
	r0 = 0xC0B8618u;  /* 0C0B85F6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B85F8 add Rm,Rn */
	IF(0x0C0B85FAu); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B85FCu, 3);  /* 0C0B85FA mov.w @(r0,Rm),Rn */
	IF(0x0C0B85FCu); { u32 tv_ = (r10 + 0x0C0B8600u); u32 t_ = PHYS(tv_); IF(0x0C0B85FEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B82CCu: goto L_0C0B82CC; case 0x0C0B86B0u: goto L_0C0B86B0; case 0x0C0B86F0u: goto L_0C0B86F0; case 0x0C0B8760u: goto L_0C0B8760; case 0x0C0B87A0u: goto L_0C0B87A0; case 0x0C0B88E0u: goto L_0C0B88E0; case 0x0C0B8920u: goto L_0C0B8920; case 0x0C0B89B0u: goto L_0C0B89B0; case 0x0C0B8A50u: goto L_0C0B8A50; case 0x0C0B8AA0u: goto L_0C0B8AA0; case 0x0C0B8B40u: goto L_0C0B8B40; case 0x0C0B8B80u: goto L_0C0B8B80; case 0x0C0B8BA0u: goto L_0C0B8BA0; case 0x0C0B8C80u: goto L_0C0B8C80; case 0x0C0B8F40u: goto L_0C0B8F40; case 0x0C0B8FA0u: goto L_0C0B8FA0; case 0x0C0B8FD0u: goto L_0C0B8FD0; case 0x0C0B9150u: goto L_0C0B9150; case 0x0C0B9220u: goto L_0C0B9220; case 0x0C0B9270u: goto L_0C0B9270; case 0x0C0B92C0u: goto L_0C0B92C0; case 0x0C0B9360u: goto L_0C0B9360; case 0x0C0B93B0u: goto L_0C0B93B0; case 0x0C0B93F0u: goto L_0C0B93F0; case 0x0C0B9420u: goto L_0C0B9420; default: JUMPD(tv_); } }  /* 0C0B85FC braf Rn */
L_0C0B86B0: BLKS(0x0C0B86B0u);
	r13 = 0xC2B039Cu; UPD(0x0C0B86B2u, 1);  /* 0C0B86B0 mov.l @(disp,pc),Rn */
	r1 = R32(r13); UPD(0x0C0B86B4u, 1);  /* 0C0B86B2 mov.l @Rm,Rn */
	r3 = R32(r11 + 0x34u); UPD(0x0C0B86B6u, 1);  /* 0C0B86B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B86B6u); r1 <<= 2;  /* 0C0B86B6 shll2 Rn */
	r8 = 0xFFFF0000u; UPD(0x0C0B86BAu, 2);  /* 0C0B86B8 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0B86BA add Rm,Rn */
	r3 &= r8;  /* 0C0B86BC and Rm,Rn */
	UPD(0x0C0B86BEu, 2);
L_0C0B86BE: BLKS(0x0C0B86BEu);
	r8 = r1 & 0xFF;  /* 0C0B86BE extu.b Rm,Rn */
	r2 = r8;  /* 0C0B86C0 mov Rm,Rn */
	IF(0x0C0B86C2u); r2 <<= 8;  /* 0C0B86C2 shll8 Rn */
	r5 = 0xFFFF7F80u; UPD(0x0C0B86C6u, 4);  /* 0C0B86C4 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C0B86C6 add Rm,Rn */
	r2 += r5;  /* 0C0B86C8 add Rm,Rn */
	IF(0x0C0B86CAu); T = (s32)r2 >= 0;  /* 0C0B86CA cmp/pz Rn */
	if (!T) { UPD(0x0C0B86E0u, 6); goto L_0C0B86E0; }  /* 0C0B86CC bf */
L_0C0B86CE: BLKS(0x0C0B86CEu);
	r0 = 0x7F7Fu; UPD(0x0C0B86D0u, 1);  /* 0C0B86CE mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C0B86D0 add Rm,Rn */
	{ r3 |= r2; /* slot or Rm,Rn */ UPD(0x0C0B8354u, 4); goto L_0C0B8354; }  /* 0C0B86D2 bra */
L_0C0B86E0: BLKS(0x0C0B86E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B86CEu, 3); goto L_0C0B86CE; }  /* 0C0B86E0 bra */
L_0C0B86F0: BLKS(0x0C0B86F0u);
	r4 = 0xC238014u; UPD(0x0C0B86F2u, 1);  /* 0C0B86F0 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFFFFBu;  /* 0C0B86F2 mov #imm,Rn */
	r2 = R32(r4); UPD(0x0C0B86F6u, 2);  /* 0C0B86F4 mov.l @Rm,Rn */
	r6 = 0x88888889u; UPD(0x0C0B86F8u, 1);  /* 0C0B86F6 mov.l @(disp,pc),Rn */
	r8 = r2;  /* 0C0B86F8 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r2 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B86FA dmuls.l Rm,Rn */
	r3 = r2;  /* 0C0B86FC mov Rm,Rn */
	IF(0x0C0B86FEu); T = r3 >> 31; r3 <<= 1;  /* 0C0B86FE shll Rn */
	IF(0x0C0B8700u); r7 = MACH;  /* 0C0B8700 sts mach,Rn */
	r8 += r7;  /* 0C0B8702 add Rm,Rn */
	IF(0x0C0B8704u); ARG0(0x48CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0B8704 shad Rm,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0B8706 subc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B8708 tst Rm,Rn */
	{ u32 c_ = T; r8 -= r3; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C0B8710u, 13); goto L_0C0B8710; } goto L_0C0B870E; }  /* 0C0B870A bt/s */
L_0C0B870E: BLKS(0x0C0B870Eu);
	r8 += 0x1u;  /* 0C0B870E add #imm,Rn */
	UPD(0x0C0B8710u, 2);
L_0C0B8710: BLKS(0x0C0B8710u);
	r2 = 0x66666667u; UPD(0x0C0B8712u, 1);  /* 0C0B8710 mov.l @(disp,pc),Rn */
	r9 = 0xAu;  /* 0C0B8712 mov #imm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B8714 dmuls.l Rm,Rn */
	IF(0x0C0B8716u); r5 = MACH;  /* 0C0B8716 sts mach,Rn */
	IF(0x0C0B8718u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0B8718 shar Rn */
	IF(0x0C0B871Au); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0B871A shar Rn */
	IF(0x0C0B871Cu); T = r8 >> 31; r8 <<= 1;  /* 0C0B871C shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0B871E subc Rm,Rn */
	r5 -= r8;  /* 0C0B8720 sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r5 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B8722 dmuls.l Rm,Rn */
	r1 = r5;  /* 0C0B8724 mov Rm,Rn */
	IF(0x0C0B8726u); r10 = MACH;  /* 0C0B8726 sts mach,Rn */
	IF(0x0C0B8728u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0B8728 shar Rn */
	IF(0x0C0B872Au); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0B872A shar Rn */
	IF(0x0C0B872Cu); T = r1 >> 31; r1 <<= 1;  /* 0C0B872C shll Rn */
	{ u32 a_ = r1, t_ = a_ - r1, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0B872E subc Rm,Rn */
	r10 -= r1;  /* 0C0B8730 sub Rm,Rn */
	IF(0x0C0B8732u); MACL = r10 * r9;  /* 0C0B8732 mul.l Rm,Rn */
	IF(0x0C0B8734u); r0 = MACL;  /* 0C0B8734 sts macl,Rn */
	r5 -= r0;  /* 0C0B8736 sub Rm,Rn */
	W32(r11 + 0xCu, r5); UPD(0x0C0B873Au, 23);  /* 0C0B8738 mov.l Rm,@(disp,Rn) */
L_0C0B873A: BLKS(0x0C0B873Au);
	r6 = 0xC0A8AE0u; UPD(0x0C0B873Cu, 1);  /* 0C0B873A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0B873C mov Rm,Rn */
	r14 += 0x8u;  /* 0C0B873E add #imm,Rn */
	r15 = r14;  /* 0C0B8740 mov Rm,Rn */
	IF(0x0C0B8742u); PR = R32(r15); r15 += 4; UPD(0x0C0B8744u, 4);  /* 0C0B8742 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B8746u, 1);  /* 0C0B8744 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B8748u, 1);  /* 0C0B8746 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B874Au, 1);  /* 0C0B8748 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B874Cu, 1);  /* 0C0B874A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B874Eu, 1);  /* 0C0B874C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B8750u, 1);  /* 0C0B874E mov.l @Rm+,Rn */
	IF(0x0C0B8750u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0B8750 jmp @Rn */
L_0C0B8760: BLKS(0x0C0B8760u);
	r4 = 0xC238014u; UPD(0x0C0B8762u, 1);  /* 0C0B8760 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFBu;  /* 0C0B8762 mov #imm,Rn */
	r12 = R32(r4); UPD(0x0C0B8766u, 2);  /* 0C0B8764 mov.l @Rm,Rn */
	r8 = 0x88888889u; UPD(0x0C0B8768u, 1);  /* 0C0B8766 mov.l @(disp,pc),Rn */
	r3 = r12;  /* 0C0B8768 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B876A dmuls.l Rm,Rn */
	IF(0x0C0B876Cu); T = r3 >> 31; r3 <<= 1;  /* 0C0B876C shll Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0B876E subc Rm,Rn */
	IF(0x0C0B8770u); r6 = MACH;  /* 0C0B8770 sts mach,Rn */
	r8 = r12;  /* 0C0B8772 mov Rm,Rn */
	r8 += r6;  /* 0C0B8774 add Rm,Rn */
	IF(0x0C0B8776u); ARG0(0x487Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0B8776 shad Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0B8778 tst Rm,Rn */
	{ u32 c_ = T; r8 -= r3; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C0B8780u, 13); goto L_0C0B8780; } goto L_0C0B877E; }  /* 0C0B877A bt/s */
L_0C0B877E: BLKS(0x0C0B877Eu);
	r8 += 0x1u;  /* 0C0B877E add #imm,Rn */
	UPD(0x0C0B8780u, 2);
L_0C0B8780: BLKS(0x0C0B8780u);
	r2 = 0x66666667u; UPD(0x0C0B8782u, 1);  /* 0C0B8780 mov.l @(disp,pc),Rn */
	r10 = r8;  /* 0C0B8782 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B8784 dmuls.l Rm,Rn */
	r0 = 0xAu;  /* 0C0B8786 mov #imm,Rn */
	IF(0x0C0B8788u); r9 = MACH;  /* 0C0B8788 sts mach,Rn */
	IF(0x0C0B878Au); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0B878A shar Rn */
	IF(0x0C0B878Cu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0B878C shar Rn */
	IF(0x0C0B878Eu); T = r10 >> 31; r10 <<= 1;  /* 0C0B878E shll Rn */
	{ u32 a_ = r10, t_ = a_ - r10, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r10 = r_; }  /* 0C0B8790 subc Rm,Rn */
	r9 -= r10;  /* 0C0B8792 sub Rm,Rn */
	IF(0x0C0B8794u); MACL = r9 * r0;  /* 0C0B8794 mul.l Rm,Rn */
	IF(0x0C0B8796u); r5 = MACL;  /* 0C0B8796 sts macl,Rn */
	r8 -= r5;  /* 0C0B8798 sub Rm,Rn */
	{ W32(r11 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B873Au, 17); goto L_0C0B873A; }  /* 0C0B879A bra */
L_0C0B87A0: BLKS(0x0C0B87A0u);
	r7 += 0xFFFFFFFBu;  /* 0C0B87A0 add #imm,Rn */
	r5 = 0x1u;  /* 0C0B87A2 mov #imm,Rn */
	r8 = 0x2A0u; UPD(0x0C0B87A6u, 3);  /* 0C0B87A4 mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C0B87A6 and Rm,Rn */
	IF(0x0C0B87A8u); MACL = r5 * r8;  /* 0C0B87A8 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C0B87ACu, 4);  /* 0C0B87AA mov.l @(disp,pc),Rn */
	IF(0x0C0B87ACu); r0 = MACL;  /* 0C0B87AC sts macl,Rn */
	IF(0x0C0B87AEu); r12 = R32(r0 + r6); UPD(0x0C0B87B0u, 2);  /* 0C0B87AE mov.l @(r0,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C0B87B0 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B88A0u, 4); goto L_0C0B88A0; } goto L_0C0B87B6; }  /* 0C0B87B2 bt/s */
L_0C0B87B6: BLKS(0x0C0B87B6u);
	r9 = 0xC239494u; UPD(0x0C0B87B8u, 2);  /* 0C0B87B6 mov.l @(disp,pc),Rn */
	r4 = 0u - r5;  /* 0C0B87B8 neg Rm,Rn */
	r0 = R32(r9); UPD(0x0C0B87BCu, 2);  /* 0C0B87BA mov.l @Rm,Rn */
	IF(0x0C0B87BCu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B87BC shad Rm,Rn */
	r0 &= 0x1u;  /* 0C0B87BE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B87C0 tst Rm,Rn */
	{ u32 c_ = T; r6 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B88A2u, 6); goto L_0C0B88A2; } goto L_0C0B87C6; }  /* 0C0B87C2 bt/s */
L_0C0B87C6: BLKS(0x0C0B87C6u);
	r10 = R32(r11); UPD(0x0C0B87C8u, 2);  /* 0C0B87C6 mov.l @Rm,Rn */
	r0 = 0x6u;  /* 0C0B87C8 mov #imm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B87CCu, 2);  /* 0C0B87CA mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0B87CC cmp/gt Rm,Rn */
	r10 |= r1;  /* 0C0B87CE or Rm,Rn */
	{ u32 c_ = T; W32(r11, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8840u, 5); goto L_0C0B8840; } UPD(0x0C0B87D4u, 1); goto L_0C0B87D4; }  /* 0C0B87D0 bt/s */
L_0C0B87D4: BLKS(0x0C0B87D4u);
	r6 = R32(r11 + 0x34u); UPD(0x0C0B87D6u, 1);  /* 0C0B87D4 mov.l @(disp,Rm),Rn */
	r12 = 0x7C7Bu; UPD(0x0C0B87D8u, 1);  /* 0C0B87D6 mov.w @(disp,pc),Rn */
	r8 = r6 & 0xFFFF;  /* 0C0B87D8 extu.w Rm,Rn */
	r1 = 0x404u; UPD(0x0C0B87DCu, 2);  /* 0C0B87DA mov.w @(disp,pc),Rn */
	T = r8 > r12;  /* 0C0B87DC cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8830u, 4); goto L_0C0B8830; }  /* 0C0B87DE bf */
L_0C0B87E0: BLKS(0x0C0B87E0u);
	r2 = 0x7F7Fu; UPD(0x0C0B87E2u, 1);  /* 0C0B87E0 mov.w @(disp,pc),Rn */
	r6 |= r2;  /* 0C0B87E2 or Rm,Rn */
	UPD(0x0C0B87E4u, 1);
L_0C0B87E4: BLKS(0x0C0B87E4u);
	W32(r11 + 0x34u, r6); UPD(0x0C0B87E6u, 1);  /* 0C0B87E4 mov.l Rm,@(disp,Rn) */
L_0C0B87E6: BLKS(0x0C0B87E6u);
	r0 = 0x8u;  /* 0C0B87E6 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0B87E8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B8812u, 5); goto L_0C0B8812; }  /* 0C0B87EA bf */
L_0C0B87EC: BLKS(0x0C0B87ECu);
	IF(0x0C0B87ECu); r5 <<= 2;  /* 0C0B87EC shll2 Rn */
	r5 += r3;  /* 0C0B87EE add Rm,Rn */
	r5 += 0x6Cu;  /* 0C0B87F0 add #imm,Rn */
	r3 = R32(r5); UPD(0x0C0B87F4u, 4);  /* 0C0B87F2 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B87F4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8820u, 4); goto L_0C0B8820; } UPD(0x0C0B87FAu, 1); goto L_0C0B87FA; }  /* 0C0B87F6 bf/s */
L_0C0B87FA: BLKS(0x0C0B87FAu);
	r6 = 0x404040u; UPD(0x0C0B87FCu, 1);  /* 0C0B87FA mov.l @(disp,pc),Rn */
	r5 = 0xC2B039Cu; UPD(0x0C0B87FEu, 1);  /* 0C0B87FC mov.l @(disp,pc),Rn */
	W32(r11 + 0x38u, r6); UPD(0x0C0B8800u, 1);  /* 0C0B87FE mov.l Rm,@(disp,Rn) */
	r0 = R32(r5); UPD(0x0C0B8802u, 1);  /* 0C0B8800 mov.l @Rm,Rn */
	IF(0x0C0B8802u); r0 >>= 2;  /* 0C0B8802 shlr2 Rn */
	IF(0x0C0B8804u); T = r0 & 1; r0 >>= 1;  /* 0C0B8804 shlr Rn */
	IF(0x0C0B8806u); r0 >>= 2;  /* 0C0B8806 shlr2 Rn */
	r0 &= 0x1u;  /* 0C0B8808 and #imm,r0 */
	r1 = 0x808080u; UPD(0x0C0B880Cu, 5);  /* 0C0B880A mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0B880C tst Rm,Rn */
	if (T) { UPD(0x0C0B8812u, 4); goto L_0C0B8812; }  /* 0C0B880E bt */
L_0C0B8810: BLKS(0x0C0B8810u);
	W32(r11 + 0x38u, r1); UPD(0x0C0B8812u, 1);  /* 0C0B8810 mov.l Rm,@(disp,Rn) */
L_0C0B8812: BLKS(0x0C0B8812u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8812 bra */
L_0C0B8820: BLKS(0x0C0B8820u);
	r13 = 0xC0A8AE0u; UPD(0x0C0B8822u, 1);  /* 0C0B8820 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C0B8822 mov #imm,Rn */
	IF(0x0C0B8824u); { u32 t_ = r13; PR = 0x0C0B8828u; W32(r11 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B8828u); }  /* 0C0B8824 jsr @Rn */
L_0C0B8828: BLKS(0x0C0B8828u);
	{ IF(0x0C0B882Au); ; /* slot nop */ UPD(0x0C0B87FAu, 3); goto L_0C0B87FA; }  /* 0C0B8828 bra */
L_0C0B8830: BLKS(0x0C0B8830u);
	{ r6 += r1; /* slot add Rm,Rn */ UPD(0x0C0B87E4u, 3); goto L_0C0B87E4; }  /* 0C0B8830 bra */
L_0C0B8840: BLKS(0x0C0B8840u);
	r6 = R32(r11 + 0x34u); UPD(0x0C0B8842u, 1);  /* 0C0B8840 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFu; UPD(0x0C0B8844u, 1);  /* 0C0B8842 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0B8844 mov Rm,Rn */
	r9 = 0xF8F7u; UPD(0x0C0B8848u, 2);  /* 0C0B8846 mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C0B8848 and Rm,Rn */
	r1 = 0x808u; UPD(0x0C0B884Cu, 2);  /* 0C0B884A mov.w @(disp,pc),Rn */
	T = r0 > r9;  /* 0C0B884C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8830u, 4); goto L_0C0B8830; }  /* 0C0B884E bf */
L_0C0B8850: BLKS(0x0C0B8850u);
	r6 |= r4;  /* 0C0B8850 or Rm,Rn */
	{ W32(r11 + 0x34u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B87E6u, 4); goto L_0C0B87E6; }  /* 0C0B8852 bra */
L_0C0B88A0: BLKS(0x0C0B88A0u);
	r6 = 0x6u;  /* 0C0B88A0 mov #imm,Rn */
	UPD(0x0C0B88A2u, 1);
L_0C0B88A2: BLKS(0x0C0B88A2u);
	T = (s32)r7 > (s32)r6;  /* 0C0B88A2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B88D0u, 4); goto L_0C0B88D0; }  /* 0C0B88A4 bt */
L_0C0B88A6: BLKS(0x0C0B88A6u);
	r6 = R32(r11 + 0x34u); UPD(0x0C0B88A8u, 1);  /* 0C0B88A6 mov.l @(disp,Rm),Rn */
	r4 = 0x808u; UPD(0x0C0B88AAu, 1);  /* 0C0B88A8 mov.w @(disp,pc),Rn */
	r10 = r6 & 0xFFFF;  /* 0C0B88AA extu.w Rm,Rn */
	r1 = 0xFFFFFBFCu; UPD(0x0C0B88AEu, 2);  /* 0C0B88AC mov.w @(disp,pc),Rn */
	T = r10 > r4;  /* 0C0B88AE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8830u, 4); goto L_0C0B8830; }  /* 0C0B88B0 bt */
L_0C0B88B2: BLKS(0x0C0B88B2u);
	r8 = R32(r11); UPD(0x0C0B88B4u, 1);  /* 0C0B88B2 mov.l @Rm,Rn */
	r2 = 0xFFFF0000u; UPD(0x0C0B88B6u, 1);  /* 0C0B88B4 mov.l @(disp,pc),Rn */
	r9 = 0xBFFFFFFFu; UPD(0x0C0B88B8u, 1);  /* 0C0B88B6 mov.l @(disp,pc),Rn */
	r6 &= r2;  /* 0C0B88B8 and Rm,Rn */
	r8 &= r9;  /* 0C0B88BA and Rm,Rn */
	W32(r11 + 0x34u, r6); UPD(0x0C0B88BEu, 3);  /* 0C0B88BC mov.l Rm,@(disp,Rn) */
	{ W32(r11, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0B87E6u, 3); goto L_0C0B87E6; }  /* 0C0B88BE bra */
L_0C0B88D0: BLKS(0x0C0B88D0u);
	r6 = R32(r11 + 0x34u); UPD(0x0C0B88D2u, 1);  /* 0C0B88D0 mov.l @(disp,Rm),Rn */
	r12 = 0x1010u; UPD(0x0C0B88D4u, 1);  /* 0C0B88D2 mov.w @(disp,pc),Rn */
	r1 = r6 & 0xFFFF;  /* 0C0B88D4 extu.w Rm,Rn */
	T = r1 > r12;  /* 0C0B88D6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B88B2u, 5); goto L_0C0B88B2; }  /* 0C0B88D8 bf */
L_0C0B88DA: BLKS(0x0C0B88DAu);
	r1 = 0xFFFFF7F8u; UPD(0x0C0B88DCu, 1);  /* 0C0B88DA mov.w @(disp,pc),Rn */
	{ IF(0x0C0B88DEu); ; /* slot nop */ UPD(0x0C0B8830u, 3); goto L_0C0B8830; }  /* 0C0B88DC bra */
L_0C0B88E0: BLKS(0x0C0B88E0u);
	r8 = 0x2A0u; UPD(0x0C0B88E2u, 1);  /* 0C0B88E0 mov.w @(disp,pc),Rn */
	IF(0x0C0B88E2u); MACL = r7 * r8;  /* 0C0B88E2 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C0B88E6u, 3);  /* 0C0B88E4 mov.l @(disp,pc),Rn */
	IF(0x0C0B88E6u); r12 = MACL;  /* 0C0B88E6 sts macl,Rn */
	r0 = 0xFFFFE320u; UPD(0x0C0B88EAu, 2);  /* 0C0B88E8 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C0B88EA add Rm,Rn */
	IF(0x0C0B88ECu); r4 = R32(r0 + r10); UPD(0x0C0B88EEu, 2);  /* 0C0B88EC mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0B88EE tst Rm,Rn */
	if (T) { UPD(0x0C0B8910u, 4); goto L_0C0B8910; }  /* 0C0B88F0 bt */
L_0C0B88F2: BLKS(0x0C0B88F2u);
	r2 = R32(r11 + 0x38u); UPD(0x0C0B88F4u, 1);  /* 0C0B88F2 mov.l @(disp,Rm),Rn */
	r9 = 0x80807Fu; UPD(0x0C0B88F6u, 1);  /* 0C0B88F4 mov.l @(disp,pc),Rn */
	r1 = 0x40404u; UPD(0x0C0B88F8u, 1);  /* 0C0B88F6 mov.l @(disp,pc),Rn */
	T = r2 > r9;  /* 0C0B88F8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8812u, 4); goto L_0C0B8812; }  /* 0C0B88FA bt */
L_0C0B88FC: BLKS(0x0C0B88FCu);
	r2 += r1;  /* 0C0B88FC add Rm,Rn */
	UPD(0x0C0B88FEu, 1);
L_0C0B88FE: BLKS(0x0C0B88FEu);
	W32(r11 + 0x38u, r2); UPD(0x0C0B8900u, 1);  /* 0C0B88FE mov.l Rm,@(disp,Rn) */
L_0C0B8900: BLKS(0x0C0B8900u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8900 bra */
L_0C0B8910: BLKS(0x0C0B8910u);
	r1 = 0x404040u; UPD(0x0C0B8912u, 1);  /* 0C0B8910 mov.l @(disp,pc),Rn */
	{ W32(r11 + 0x38u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8812u, 3); goto L_0C0B8812; }  /* 0C0B8912 bra */
L_0C0B8920: BLKS(0x0C0B8920u);
	r5 = r7;  /* 0C0B8920 mov Rm,Rn */
	r5 += 0xFFFFFFEBu;  /* 0C0B8922 add #imm,Rn */
	r9 = 0x1u;  /* 0C0B8924 mov #imm,Rn */
	r4 = 0x2A0u; UPD(0x0C0B8928u, 4);  /* 0C0B8926 mov.w @(disp,pc),Rn */
	r5 &= r9;  /* 0C0B8928 and Rm,Rn */
	IF(0x0C0B892Au); MACL = r5 * r4;  /* 0C0B892A mul.l Rm,Rn */
	r8 = 0xC29D1D8u; UPD(0x0C0B892Eu, 4);  /* 0C0B892C mov.l @(disp,pc),Rn */
	IF(0x0C0B892Eu); r0 = MACL;  /* 0C0B892E sts macl,Rn */
	IF(0x0C0B8930u); r2 = R32(r0 + r8); UPD(0x0C0B8932u, 2);  /* 0C0B8930 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B8932 tst Rm,Rn */
	if (T) { UPD(0x0C0B8990u, 4); goto L_0C0B8990; }  /* 0C0B8934 bt */
L_0C0B8936: BLKS(0x0C0B8936u);
	r10 = r5;  /* 0C0B8936 mov Rm,Rn */
	IF(0x0C0B8938u); r10 <<= 2;  /* 0C0B8938 shll2 Rn */
	r10 += r3;  /* 0C0B893A add Rm,Rn */
	r10 += 0x6Cu;  /* 0C0B893C add #imm,Rn */
	r0 = R32(r10); UPD(0x0C0B8940u, 5);  /* 0C0B893E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B8940 tst Rm,Rn */
	if (T) { UPD(0x0C0B8990u, 4); goto L_0C0B8990; }  /* 0C0B8942 bt */
L_0C0B8944: BLKS(0x0C0B8944u);
	r3 = R32(r11); UPD(0x0C0B8946u, 1);  /* 0C0B8944 mov.l @Rm,Rn */
	r7 = 0x40000000u; UPD(0x0C0B8948u, 1);  /* 0C0B8946 mov.l @(disp,pc),Rn */
	r3 |= r7;  /* 0C0B8948 or Rm,Rn */
	W32(r11, r3); UPD(0x0C0B894Cu, 2);  /* 0C0B894A mov.l Rm,@Rn */
	r3 = R32(r11 + 0x34u); UPD(0x0C0B894Eu, 1);  /* 0C0B894C mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFu; UPD(0x0C0B8950u, 1);  /* 0C0B894E mov.l @(disp,pc),Rn */
	r1 = r3;  /* 0C0B8950 mov Rm,Rn */
	r6 = 0xEFEFu; UPD(0x0C0B8954u, 2);  /* 0C0B8952 mov.l @(disp,pc),Rn */
	r1 &= r7;  /* 0C0B8954 and Rm,Rn */
	T = r1 > r6;  /* 0C0B8956 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8980u, 5); goto L_0C0B8980; }  /* 0C0B8958 bt */
L_0C0B895A: BLKS(0x0C0B895Au);
	r12 = 0x1010u; UPD(0x0C0B895Cu, 1);  /* 0C0B895A mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C0B895C add Rm,Rn */
	UPD(0x0C0B895Eu, 1);
L_0C0B895E: BLKS(0x0C0B895Eu);
	r4 = 0x2A0u; UPD(0x0C0B8960u, 1);  /* 0C0B895E mov.w @(disp,pc),Rn */
	IF(0x0C0B8960u); MACL = r5 * r4;  /* 0C0B8960 mul.l Rm,Rn */
	r8 = 0xC29D1D8u; UPD(0x0C0B8964u, 3);  /* 0C0B8962 mov.l @(disp,pc),Rn */
	W32(r11 + 0x34u, r3); UPD(0x0C0B8966u, 1);  /* 0C0B8964 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B8966u); r2 = MACL;  /* 0C0B8966 sts macl,Rn */
	r8 += r2;  /* 0C0B8968 add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0B896Cu, 3);  /* 0C0B896A mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0xCu); UPD(0x0C0B896Eu, 1);  /* 0C0B896C mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0B896E and #imm,r0 */
	T = r5 == r0;  /* 0C0B8970 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B8900u, 5); goto L_0C0B8900; }  /* 0C0B8972 bt */
L_0C0B8974: BLKS(0x0C0B8974u);
	W32(r11 + 0xCu, r0); UPD(0x0C0B8976u, 1);  /* 0C0B8974 mov.l Rm,@(disp,Rn) */
	r9 = R32(r11 + 0x34u); UPD(0x0C0B8978u, 1);  /* 0C0B8976 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFF0000u; UPD(0x0C0B897Au, 1);  /* 0C0B8978 mov.l @(disp,pc),Rn */
	r9 &= r0;  /* 0C0B897A and Rm,Rn */
	{ W32(r11 + 0x34u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B873Au, 4); goto L_0C0B873A; }  /* 0C0B897C bra */
L_0C0B8980: BLKS(0x0C0B8980u);
	{ r3 |= r7; /* slot or Rm,Rn */ UPD(0x0C0B895Eu, 3); goto L_0C0B895E; }  /* 0C0B8980 bra */
L_0C0B8990: BLKS(0x0C0B8990u);
	r10 = R32(r11); UPD(0x0C0B8992u, 1);  /* 0C0B8990 mov.l @Rm,Rn */
L_0C0B8992: BLKS(0x0C0B8992u);
	r3 = 0xBFFFFFFFu; UPD(0x0C0B8994u, 1);  /* 0C0B8992 mov.l @(disp,pc),Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C0B8996u, 1);  /* 0C0B8994 mov.l @(disp,Rm),Rn */
	r10 &= r3;  /* 0C0B8996 and Rm,Rn */
	r0 = 0xFFFF0000u; UPD(0x0C0B899Au, 2);  /* 0C0B8998 mov.l @(disp,pc),Rn */
	W32(r11, r10); UPD(0x0C0B899Cu, 1);  /* 0C0B899A mov.l Rm,@Rn */
	r1 &= r0;  /* 0C0B899C and Rm,Rn */
	UPD(0x0C0B899Eu, 1);
L_0C0B899E: BLKS(0x0C0B899Eu);
	W32(r11 + 0x34u, r1); UPD(0x0C0B89A0u, 1);  /* 0C0B899E mov.l Rm,@(disp,Rn) */
L_0C0B89A0: BLKS(0x0C0B89A0u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B89A0 bra */
L_0C0B89B0: BLKS(0x0C0B89B0u);
	r0 = 0x9Fu; UPD(0x0C0B89B2u, 1);  /* 0C0B89B0 mov.w @(disp,pc),Rn */
	IF(0x0C0B89B2u); r13 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B89B4u, 1);  /* 0C0B89B2 mov.b @(r0,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C0B89B4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B89A0u, 4); goto L_0C0B89A0; }  /* 0C0B89B6 bf */
L_0C0B89B8: BLKS(0x0C0B89B8u);
	r2 = 0xC29D1D8u; UPD(0x0C0B89BAu, 1);  /* 0C0B89B8 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0B89BCu, 1);  /* 0C0B89BA mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0B89BC tst Rm,Rn */
	if (T) { UPD(0x0C0B8A00u, 4); goto L_0C0B8A00; }  /* 0C0B89BE bt */
L_0C0B89C0: BLKS(0x0C0B89C0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0B89C2u, 1);  /* 0C0B89C0 mov.l @(disp,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B89C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B89C4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8A10u, 5); goto L_0C0B8A10; } goto L_0C0B89CA; }  /* 0C0B89C6 bf/s */
L_0C0B89CA: BLKS(0x0C0B89CAu);
	r0 = r7;  /* 0C0B89CA mov Rm,Rn */
	T = r0 == 0x1Bu;  /* 0C0B89CC cmp/eq #imm,r0 */
	UPD(0x0C0B89CEu, 3);
L_0C0B89CE: BLKS(0x0C0B89CEu);
	if (T) { UPD(0x0C0B8A00u, 3); goto L_0C0B8A00; }  /* 0C0B89CE bt */
L_0C0B89D0: BLKS(0x0C0B89D0u);
	r7 = R32(r11); UPD(0x0C0B89D2u, 1);  /* 0C0B89D0 mov.l @Rm,Rn */
	r8 = r3;  /* 0C0B89D2 mov Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C0B89D6u, 2);  /* 0C0B89D4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0B89D6 add #imm,Rn */
	r7 |= r4;  /* 0C0B89D8 or Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C0B89DCu, 3);  /* 0C0B89DA mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0B89DC tst Rm,Rn */
	{ u32 c_ = T; W32(r11, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B89A0u, 4); goto L_0C0B89A0; } UPD(0x0C0B89E2u, 1); goto L_0C0B89E2; }  /* 0C0B89DE bt/s */
L_0C0B89E2: BLKS(0x0C0B89E2u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B89E4u, 1);  /* 0C0B89E2 mov.l @(disp,Rm),Rn */
	r1 = 0x100Fu; UPD(0x0C0B89E6u, 1);  /* 0C0B89E4 mov.w @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0B89E6 extu.w Rm,Rn */
	UPD(0x0C0B89E8u, 1);
L_0C0B89E8: BLKS(0x0C0B89E8u);
	T = r2 > r1;  /* 0C0B89E8 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B89F0u, 4); goto L_0C0B89F0; }  /* 0C0B89EA bf */
L_0C0B89EC: BLKS(0x0C0B89ECu);
	{ IF(0x0C0B89EEu); ; /* slot nop */ UPD(0x0C0B8350u, 3); goto L_0C0B8350; }  /* 0C0B89EC bra */
L_0C0B89F0: BLKS(0x0C0B89F0u);
	r2 = 0xBFFFFFFFu; UPD(0x0C0B89F2u, 1);  /* 0C0B89F0 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0B89F2 mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B89F6u, 2);  /* 0C0B89F4 mov.w @(disp,pc),Rn */
	r7 &= r2;  /* 0C0B89F6 and Rm,Rn */
	IF(0x0C0B89F8u); W8(r0 + r11, r13); UPD(0x0C0B89FAu, 2);  /* 0C0B89F8 mov.b Rm,@(r0,Rn) */
	r1 = 0x0u;  /* 0C0B89FA mov #imm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0B899Eu, 4); goto L_0C0B899E; }  /* 0C0B89FC bra */
L_0C0B8A00: BLKS(0x0C0B8A00u);
	r1 = R32(r11); UPD(0x0C0B8A02u, 1);  /* 0C0B8A00 mov.l @Rm,Rn */
L_0C0B8A02: BLKS(0x0C0B8A02u);
	r5 = 0xBFFFFFFFu; UPD(0x0C0B8A04u, 1);  /* 0C0B8A02 mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C0B8A04 and Rm,Rn */
	UPD(0x0C0B8A06u, 1);
L_0C0B8A06: BLKS(0x0C0B8A06u);
	W32(r11, r1); UPD(0x0C0B8A08u, 1);  /* 0C0B8A06 mov.l Rm,@Rn */
L_0C0B8A08: BLKS(0x0C0B8A08u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8A08 bra */
L_0C0B8A10: BLKS(0x0C0B8A10u);
	{ T = r0 == 0x1Fu; /* slot cmp/eq #imm,r0 */ UPD(0x0C0B89CEu, 3); goto L_0C0B89CE; }  /* 0C0B8A10 bra */
L_0C0B8A50: BLKS(0x0C0B8A50u);
	r0 = 0x9Fu; UPD(0x0C0B8A52u, 1);  /* 0C0B8A50 mov.w @(disp,pc),Rn */
	IF(0x0C0B8A52u); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B8A54u, 1);  /* 0C0B8A52 mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0B8A54 tst Rm,Rn */
	if (!T) { UPD(0x0C0B8A08u, 4); goto L_0C0B8A08; }  /* 0C0B8A56 bf */
L_0C0B8A58: BLKS(0x0C0B8A58u);
	r2 = 0xC29D454u; UPD(0x0C0B8A5Au, 1);  /* 0C0B8A58 mov.l @(disp,pc),Rn */
	r0 = R32(r2 + 0x24u); UPD(0x0C0B8A5Cu, 1);  /* 0C0B8A5A mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B8A5C tst Rm,Rn */
	if (T) { UPD(0x0C0B8A00u, 4); goto L_0C0B8A00; }  /* 0C0B8A5E bt */
L_0C0B8A60: BLKS(0x0C0B8A60u);
	r0 = R32(r2 + 0x28u); UPD(0x0C0B8A62u, 1);  /* 0C0B8A60 mov.l @(disp,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B8A62 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B8A64 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8A90u, 5); goto L_0C0B8A90; } goto L_0C0B8A6A; }  /* 0C0B8A66 bf/s */
L_0C0B8A6A: BLKS(0x0C0B8A6Au);
	r0 = r7;  /* 0C0B8A6A mov Rm,Rn */
	T = r0 == 0x1Cu;  /* 0C0B8A6C cmp/eq #imm,r0 */
	UPD(0x0C0B8A6Eu, 3);
L_0C0B8A6E: BLKS(0x0C0B8A6Eu);
	if (T) { UPD(0x0C0B8A00u, 3); goto L_0C0B8A00; }  /* 0C0B8A6E bt */
L_0C0B8A70: BLKS(0x0C0B8A70u);
	r7 = R32(r11); UPD(0x0C0B8A72u, 1);  /* 0C0B8A70 mov.l @Rm,Rn */
	r12 = r3;  /* 0C0B8A72 mov Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0B8A76u, 2);  /* 0C0B8A74 mov.l @(disp,pc),Rn */
	r12 += 0x40u;  /* 0C0B8A76 add #imm,Rn */
	r7 |= r6;  /* 0C0B8A78 or Rm,Rn */
	r10 = R32(r12 + 0x30u); UPD(0x0C0B8A7Cu, 3);  /* 0C0B8A7A mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0B8A7C tst Rm,Rn */
	{ u32 c_ = T; W32(r11, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8A08u, 4); goto L_0C0B8A08; } UPD(0x0C0B8A82u, 1); goto L_0C0B8A82; }  /* 0C0B8A7E bt/s */
L_0C0B8A82: BLKS(0x0C0B8A82u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8A84u, 1);  /* 0C0B8A82 mov.l @(disp,Rm),Rn */
	r1 = 0x807u; UPD(0x0C0B8A86u, 1);  /* 0C0B8A84 mov.w @(disp,pc),Rn */
	{ r2 = r3 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(0x0C0B89E8u, 3); goto L_0C0B89E8; }  /* 0C0B8A86 bra */
L_0C0B8A90: BLKS(0x0C0B8A90u);
	{ T = r0 == 0x20u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0B8A6Eu, 3); goto L_0C0B8A6E; }  /* 0C0B8A90 bra */
L_0C0B8AA0: BLKS(0x0C0B8AA0u);
	r1 = 0xC29D1D8u; UPD(0x0C0B8AA2u, 1);  /* 0C0B8AA0 mov.l @(disp,pc),Rn */
	r0 = R32(r1 + 0x4u); UPD(0x0C0B8AA4u, 1);  /* 0C0B8AA2 mov.l @(disp,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B8AA4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B8AA6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8B30u, 5); goto L_0C0B8B30; } goto L_0C0B8AAC; }  /* 0C0B8AA8 bf/s */
L_0C0B8AAC: BLKS(0x0C0B8AACu);
	r0 = r7;  /* 0C0B8AAC mov Rm,Rn */
	T = r0 == 0x1Du;  /* 0C0B8AAE cmp/eq #imm,r0 */
	UPD(0x0C0B8AB0u, 3);
L_0C0B8AB0: BLKS(0x0C0B8AB0u);
	if (T) { UPD(0x0C0B8A00u, 3); goto L_0C0B8A00; }  /* 0C0B8AB0 bt */
L_0C0B8AB2: BLKS(0x0C0B8AB2u);
	r5 = 0xC29D1D8u; UPD(0x0C0B8AB4u, 1);  /* 0C0B8AB2 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0B8AB6u, 1);  /* 0C0B8AB4 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B8AB6 tst Rm,Rn */
	{ u32 c_ = T; r8 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8B10u, 4); goto L_0C0B8B10; } goto L_0C0B8ABC; }  /* 0C0B8AB8 bt/s */
L_0C0B8ABC: BLKS(0x0C0B8ABCu);
	r8 += 0x40u;  /* 0C0B8ABC add #imm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C0B8AC0u, 3);  /* 0C0B8ABE mov.l @(disp,Rm),Rn */
L_0C0B8AC0: BLKS(0x0C0B8AC0u);
	T = (r1 & r1) == 0;  /* 0C0B8AC0 tst Rm,Rn */
	if (!T) { UPD(0x0C0B8B10u, 4); goto L_0C0B8B10; }  /* 0C0B8AC2 bf */
L_0C0B8AC4: BLKS(0x0C0B8AC4u);
	r13 = R32(r11); UPD(0x0C0B8AC6u, 1);  /* 0C0B8AC4 mov.l @Rm,Rn */
	r3 = 0xFFFFFFFBu;  /* 0C0B8AC6 mov #imm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B8ACAu, 2);  /* 0C0B8AC8 mov.l @(disp,pc),Rn */
	r13 |= r1;  /* 0C0B8ACA or Rm,Rn */
	W32(r11, r13); UPD(0x0C0B8ACEu, 2);  /* 0C0B8ACC mov.l Rm,@Rn */
	r2 = 0xC2B039Cu; UPD(0x0C0B8AD0u, 1);  /* 0C0B8ACE mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0B8AD2u, 1);  /* 0C0B8AD0 mov.l @Rm,Rn */
	IF(0x0C0B8AD2u); r6 <<= 2;  /* 0C0B8AD2 shll2 Rn */
	r0 = r6 & 0xFF;  /* 0C0B8AD4 extu.b Rm,Rn */
	IF(0x0C0B8AD6u); r0 <<= 2;  /* 0C0B8AD6 shll2 Rn */
	r12 = 0xC0C4468u; UPD(0x0C0B8ADAu, 4);  /* 0C0B8AD8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0B8ADA add Rm,Rn */
	IF(0x0C0B8ADCu); r8 = R32(r0 + r12); UPD(0x0C0B8ADEu, 2);  /* 0C0B8ADC mov.l @(r0,Rm),Rn */
	IF(0x0C0B8ADEu); ARG0(0x483Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0B8ADE shad Rm,Rn */
	IF(0x0C0B8AE0u); T = (s32)r8 >= 0;  /* 0C0B8AE0 cmp/pz Rn */
	if (!T) { UPD(0x0C0B8B00u, 5); goto L_0C0B8B00; }  /* 0C0B8AE2 bf */
L_0C0B8AE4: BLKS(0x0C0B8AE4u);
	r8 += 0x40u;  /* 0C0B8AE4 add #imm,Rn */
	UPD(0x0C0B8AE6u, 1);
L_0C0B8AE6: BLKS(0x0C0B8AE6u);
	r1 = 0xFFu; UPD(0x0C0B8AE8u, 1);  /* 0C0B8AE6 mov.w @(disp,pc),Rn */
	T = (s32)r8 > (s32)r1;  /* 0C0B8AE8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B8AEEu, 4); goto L_0C0B8AEE; }  /* 0C0B8AEA bf */
L_0C0B8AEC: BLKS(0x0C0B8AECu);
	r8 = r1;  /* 0C0B8AEC mov Rm,Rn */
	UPD(0x0C0B8AEEu, 1);
L_0C0B8AEE: BLKS(0x0C0B8AEEu);
	r1 = R32(r11 + 0x34u); UPD(0x0C0B8AF0u, 1);  /* 0C0B8AEE mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0B8AF0 mov Rm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C0B8AF4u, 2);  /* 0C0B8AF2 mov.l @(disp,pc),Rn */
	IF(0x0C0B8AF4u); r0 <<= 8;  /* 0C0B8AF4 shll8 Rn */
	r1 &= r5;  /* 0C0B8AF6 and Rm,Rn */
	r1 |= r0;  /* 0C0B8AF8 or Rm,Rn */
	{ r1 |= r8; /* slot or Rm,Rn */ UPD(0x0C0B899Eu, 6); goto L_0C0B899E; }  /* 0C0B8AFA bra */
L_0C0B8B00: BLKS(0x0C0B8B00u);
	{ r8 = 0u - r8; /* slot neg Rm,Rn */ UPD(0x0C0B8AE4u, 3); goto L_0C0B8AE4; }  /* 0C0B8B00 bra */
L_0C0B8B10: BLKS(0x0C0B8B10u);
	r2 = R32(r11 + 0x34u); UPD(0x0C0B8B12u, 1);  /* 0C0B8B10 mov.l @(disp,Rm),Rn */
	r3 = 0x808u; UPD(0x0C0B8B14u, 1);  /* 0C0B8B12 mov.w @(disp,pc),Rn */
	r7 = r2 & 0xFFFF;  /* 0C0B8B14 extu.w Rm,Rn */
	T = r7 > r3;  /* 0C0B8B16 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8B52u, 5); goto L_0C0B8B52; }  /* 0C0B8B18 bf */
L_0C0B8B1A: BLKS(0x0C0B8B1Au);
	r2 -= r3;  /* 0C0B8B1A sub Rm,Rn */
	W32(r11 + 0x34u, r2); UPD(0x0C0B8B1Eu, 2);  /* 0C0B8B1C mov.l Rm,@(disp,Rn) */
L_0C0B8B1E: BLKS(0x0C0B8B1Eu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8B1E bra */
L_0C0B8B30: BLKS(0x0C0B8B30u);
	{ T = r0 == 0x21u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0B8AB0u, 3); goto L_0C0B8AB0; }  /* 0C0B8B30 bra */
L_0C0B8B40: BLKS(0x0C0B8B40u);
	r4 = 0xC29D454u; UPD(0x0C0B8B42u, 1);  /* 0C0B8B40 mov.l @(disp,pc),Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C0B8B44u, 1);  /* 0C0B8B42 mov.l @(disp,Rm),Rn */
	r0 &= 0x4u;  /* 0C0B8B44 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B8B46 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8B70u, 5); goto L_0C0B8B70; } goto L_0C0B8B4C; }  /* 0C0B8B48 bf/s */
L_0C0B8B4C: BLKS(0x0C0B8B4Cu);
	r0 = r7;  /* 0C0B8B4C mov Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0B8B4E cmp/eq #imm,r0 */
	UPD(0x0C0B8B50u, 3);
L_0C0B8B50: BLKS(0x0C0B8B50u);
	if (!T) { UPD(0x0C0B8B56u, 3); goto L_0C0B8B56; }  /* 0C0B8B50 bf */
L_0C0B8B52: BLKS(0x0C0B8B52u);
	{ r1 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C0B8A02u, 3); goto L_0C0B8A02; }  /* 0C0B8B52 bra */
L_0C0B8B56: BLKS(0x0C0B8B56u);
	r0 = 0xC29D454u; UPD(0x0C0B8B58u, 1);  /* 0C0B8B56 mov.l @(disp,pc),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C0B8B5Au, 1);  /* 0C0B8B58 mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0B8B5A tst Rm,Rn */
	{ u32 c_ = T; r10 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8B10u, 4); goto L_0C0B8B10; } goto L_0C0B8B60; }  /* 0C0B8B5C bt/s */
L_0C0B8B60: BLKS(0x0C0B8B60u);
	r10 += 0x40u;  /* 0C0B8B60 add #imm,Rn */
	{ r1 = R32(r10 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B8AC0u, 5); goto L_0C0B8AC0; }  /* 0C0B8B62 bra */
L_0C0B8B70: BLKS(0x0C0B8B70u);
	{ T = r0 == 0x22u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0B8B50u, 3); goto L_0C0B8B50; }  /* 0C0B8B70 bra */
L_0C0B8B80: BLKS(0x0C0B8B80u);
	r0 = 0x2A0u; UPD(0x0C0B8B82u, 1);  /* 0C0B8B80 mov.w @(disp,pc),Rn */
	IF(0x0C0B8B82u); MACL = r7 * r0;  /* 0C0B8B82 mul.l Rm,Rn */
	r13 = 0xC29D1D8u; UPD(0x0C0B8B86u, 3);  /* 0C0B8B84 mov.l @(disp,pc),Rn */
	IF(0x0C0B8B86u); r2 = MACL;  /* 0C0B8B86 sts macl,Rn */
	r0 = 0xFFFFA420u; UPD(0x0C0B8B8Au, 2);  /* 0C0B8B88 mov.w @(disp,pc),Rn */
	r13 += r2;  /* 0C0B8B8A add Rm,Rn */
	IF(0x0C0B8B8Cu); r3 = R32(r0 + r13); UPD(0x0C0B8B8Eu, 2);  /* 0C0B8B8C mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0B8B8E tst Rm,Rn */
	if (T) { UPD(0x0C0B8B1Eu, 4); goto L_0C0B8B1E; }  /* 0C0B8B90 bt */
L_0C0B8B92: BLKS(0x0C0B8B92u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0B8A06u, 3); goto L_0C0B8A06; }  /* 0C0B8B92 bra */
L_0C0B8BA0: BLKS(0x0C0B8BA0u);
	r7 += 0xFFFFFFDBu;  /* 0C0B8BA0 add #imm,Rn */
	r5 = 0x1u;  /* 0C0B8BA2 mov #imm,Rn */
	r9 = 0x2A0u; UPD(0x0C0B8BA6u, 3);  /* 0C0B8BA4 mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C0B8BA6 and Rm,Rn */
	IF(0x0C0B8BA8u); MACL = r5 * r9;  /* 0C0B8BA8 mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C0B8BACu, 4);  /* 0C0B8BAA mov.l @(disp,pc),Rn */
	IF(0x0C0B8BACu); r0 = MACL;  /* 0C0B8BAC sts macl,Rn */
	IF(0x0C0B8BAEu); r8 = R32(r0 + r4); UPD(0x0C0B8BB0u, 2);  /* 0C0B8BAE mov.l @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0B8BB0 tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x25u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B8BBAu, 4); goto L_0C0B8BBA; } goto L_0C0B8BB6; }  /* 0C0B8BB2 bf/s */
L_0C0B8BB6: BLKS(0x0C0B8BB6u);
	{ r10 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C0B8992u, 4); goto L_0C0B8992; }  /* 0C0B8BB6 bra */
L_0C0B8BBA: BLKS(0x0C0B8BBAu);
	r6 = r5;  /* 0C0B8BBA mov Rm,Rn */
	IF(0x0C0B8BBCu); r6 <<= 2;  /* 0C0B8BBC shll2 Rn */
	r8 = R32(r11); UPD(0x0C0B8BC0u, 3);  /* 0C0B8BBE mov.l @Rm,Rn */
	r6 += r3;  /* 0C0B8BC0 add Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B8BC4u, 2);  /* 0C0B8BC2 mov.l @(disp,pc),Rn */
	r6 += 0x6Cu;  /* 0C0B8BC4 add #imm,Rn */
	r8 |= r1;  /* 0C0B8BC6 or Rm,Rn */
	r12 = R32(r6); UPD(0x0C0B8BCAu, 3);  /* 0C0B8BC8 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0B8BCA tst Rm,Rn */
	{ u32 c_ = T; W32(r11, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8C10u, 4); goto L_0C0B8C10; } UPD(0x0C0B8BD0u, 1); goto L_0C0B8BD0; }  /* 0C0B8BCC bt/s */
L_0C0B8BD0: BLKS(0x0C0B8BD0u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8BD2u, 1);  /* 0C0B8BD0 mov.l @(disp,Rm),Rn */
	r13 = 0x100Fu; UPD(0x0C0B8BD4u, 1);  /* 0C0B8BD2 mov.w @(disp,pc),Rn */
	r7 = r3 & 0xFFFF;  /* 0C0B8BD4 extu.w Rm,Rn */
	r1 = 0xFFFFEFF0u; UPD(0x0C0B8BD8u, 2);  /* 0C0B8BD6 mov.w @(disp,pc),Rn */
	T = r7 > r13;  /* 0C0B8BD8 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8BE2u, 4); goto L_0C0B8BE2; }  /* 0C0B8BDA bf */
L_0C0B8BDC: BLKS(0x0C0B8BDCu);
	r3 += r1;  /* 0C0B8BDC add Rm,Rn */
	{ W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8356u, 4); goto L_0C0B8356; }  /* 0C0B8BDE bra */
L_0C0B8BE2: BLKS(0x0C0B8BE2u);
	{ IF(0x0C0B8BE4u); ; /* slot nop */ UPD(0x0C0B8B92u, 3); goto L_0C0B8B92; }  /* 0C0B8BE2 bra */
L_0C0B8C10: BLKS(0x0C0B8C10u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8C12u, 1);  /* 0C0B8C10 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFu; UPD(0x0C0B8C14u, 1);  /* 0C0B8C12 mov.l @(disp,pc),Rn */
	r9 = r3;  /* 0C0B8C14 mov Rm,Rn */
	r4 = 0xF7F7u; UPD(0x0C0B8C18u, 2);  /* 0C0B8C16 mov.l @(disp,pc),Rn */
	r9 &= r6;  /* 0C0B8C18 and Rm,Rn */
	T = r9 > r4;  /* 0C0B8C1A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8C70u, 5); goto L_0C0B8C70; }  /* 0C0B8C1C bf */
L_0C0B8C1E: BLKS(0x0C0B8C1Eu);
	r3 |= r6;  /* 0C0B8C1E or Rm,Rn */
	UPD(0x0C0B8C20u, 1);
L_0C0B8C20: BLKS(0x0C0B8C20u);
	r0 = 0x26u;  /* 0C0B8C20 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0B8C22 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8C48u, 5); goto L_0C0B8C48; } UPD(0x0C0B8C28u, 1); goto L_0C0B8C28; }  /* 0C0B8C24 bf/s */
L_0C0B8C28: BLKS(0x0C0B8C28u);
	r8 = 0x2A0u; UPD(0x0C0B8C2Au, 1);  /* 0C0B8C28 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0B8C2A mov Rm,Rn */
	IF(0x0C0B8C2Cu); MACL = r5 * r8;  /* 0C0B8C2C mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C0B8C30u, 4);  /* 0C0B8C2E mov.l @(disp,pc),Rn */
	IF(0x0C0B8C30u); r6 = MACL;  /* 0C0B8C30 sts macl,Rn */
	r3 += r6;  /* 0C0B8C32 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0B8C36u, 3);  /* 0C0B8C34 mov.l @(disp,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B8C38u, 1);  /* 0C0B8C36 mov.l @(disp,pc),Rn */
	IF(0x0C0B8C38u); r0 >>= 2;  /* 0C0B8C38 shlr2 Rn */
	r0 &= 0x1u;  /* 0C0B8C3A and #imm,r0 */
	IF(0x0C0B8C3Cu); { u32 t_ = r12; PR = 0x0C0B8C40u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B8C40u); }  /* 0C0B8C3C jsr @Rn */
L_0C0B8C40: BLKS(0x0C0B8C40u);
	r10 = R32(r11 + 0x8u); UPD(0x0C0B8C42u, 1);  /* 0C0B8C40 mov.l @(disp,Rm),Rn */
	r5 = 0x28u;  /* 0C0B8C42 mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C0B8C44 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B8C4Cu, 5); goto L_0C0B8C4C; }  /* 0C0B8C46 bt */
L_0C0B8C48: BLKS(0x0C0B8C48u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B8C48 bra */
L_0C0B8C4C: BLKS(0x0C0B8C4Cu);
	r9 = 0xC2B039Cu; UPD(0x0C0B8C4Eu, 1);  /* 0C0B8C4C mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C0B8C4E mov #imm,Rn */
	r0 = R32(r9); UPD(0x0C0B8C52u, 2);  /* 0C0B8C50 mov.l @Rm,Rn */
	r13 = 0xFFFFFFF9u;  /* 0C0B8C52 mov #imm,Rn */
	r0 &= r4;  /* 0C0B8C54 and Rm,Rn */
	IF(0x0C0B8C56u); r0 <<= 8;  /* 0C0B8C56 shll8 Rn */
	r7 = 0xC0C4468u; UPD(0x0C0B8C5Au, 4);  /* 0C0B8C58 mov.l @(disp,pc),Rn */
	IF(0x0C0B8C5Au); r0 >>= 2;  /* 0C0B8C5A shlr2 Rn */
	IF(0x0C0B8C5Cu); r8 = R32(r0 + r7); UPD(0x0C0B8C5Eu, 2);  /* 0C0B8C5C mov.l @(r0,Rm),Rn */
	r1 = 0xC0u; UPD(0x0C0B8C60u, 1);  /* 0C0B8C5E mov.w @(disp,pc),Rn */
	IF(0x0C0B8C60u); ARG0(0x48DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0B8C60 shad Rm,Rn */
	UPD(0x0C0B8C62u, 1);
L_0C0B8C62: BLKS(0x0C0B8C62u);
	{ r8 += r1; /* slot add Rm,Rn */ UPD(0x0C0B8AE6u, 3); goto L_0C0B8AE6; }  /* 0C0B8C62 bra */
L_0C0B8C70: BLKS(0x0C0B8C70u);
	r2 = 0x808u; UPD(0x0C0B8C72u, 1);  /* 0C0B8C70 mov.w @(disp,pc),Rn */
	{ r3 += r2; /* slot add Rm,Rn */ UPD(0x0C0B8C20u, 3); goto L_0C0B8C20; }  /* 0C0B8C72 bra */
L_0C0B8C80: BLKS(0x0C0B8C80u);
	r0 = r7;  /* 0C0B8C80 mov Rm,Rn */
	T = r0 == 0x14u;  /* 0C0B8C82 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B8C8Cu, 5); goto L_0C0B8C8C; } goto L_0C0B8C88; }  /* 0C0B8C84 bf/s */
L_0C0B8C88: BLKS(0x0C0B8C88u);
	{ r5 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0B8F30u, 4); goto L_0C0B8F30; }  /* 0C0B8C88 bra */
L_0C0B8C8C: BLKS(0x0C0B8C8Cu);
	r0 = r7;  /* 0C0B8C8C mov Rm,Rn */
	UPD(0x0C0B8C8Eu, 1);
L_0C0B8C8E: BLKS(0x0C0B8C8Eu);
	T = r0 == 0x1Au;  /* 0C0B8C8E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B8C98u, 4); goto L_0C0B8C98; }  /* 0C0B8C90 bf */
L_0C0B8C92: BLKS(0x0C0B8C92u);
	r5 = 0x1u;  /* 0C0B8C92 mov #imm,Rn */
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C0B8C9Au, 4); goto L_0C0B8C9A; }  /* 0C0B8C94 bra */
L_0C0B8C98: BLKS(0x0C0B8C98u);
	r0 = r7;  /* 0C0B8C98 mov Rm,Rn */
	UPD(0x0C0B8C9Au, 1);
L_0C0B8C9A: BLKS(0x0C0B8C9Au);
	T = r0 == 0x12u;  /* 0C0B8C9A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B8CA4u, 4); goto L_0C0B8CA4; }  /* 0C0B8C9C bf */
L_0C0B8C9E: BLKS(0x0C0B8C9Eu);
	r5 = 0x1u;  /* 0C0B8C9E mov #imm,Rn */
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C0B8CA6u, 4); goto L_0C0B8CA6; }  /* 0C0B8CA0 bra */
L_0C0B8CA4: BLKS(0x0C0B8CA4u);
	r0 = r7;  /* 0C0B8CA4 mov Rm,Rn */
	UPD(0x0C0B8CA6u, 1);
L_0C0B8CA6: BLKS(0x0C0B8CA6u);
	T = r0 == 0x2Eu;  /* 0C0B8CA6 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B8CACu, 4); goto L_0C0B8CAC; }  /* 0C0B8CA8 bf */
L_0C0B8CAA: BLKS(0x0C0B8CAAu);
	r5 = 0x1u;  /* 0C0B8CAA mov #imm,Rn */
	UPD(0x0C0B8CACu, 1);
L_0C0B8CAC: BLKS(0x0C0B8CACu);
	r6 = 0x2A0u; UPD(0x0C0B8CAEu, 1);  /* 0C0B8CAC mov.w @(disp,pc),Rn */
	IF(0x0C0B8CAEu); MACL = r5 * r6;  /* 0C0B8CAE mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C0B8CB2u, 3);  /* 0C0B8CB0 mov.l @(disp,pc),Rn */
	IF(0x0C0B8CB2u); r6 = MACL;  /* 0C0B8CB2 sts macl,Rn */
	r6 += r10;  /* 0C0B8CB4 add Rm,Rn */
	r4 = R32(r6); UPD(0x0C0B8CB8u, 3);  /* 0C0B8CB6 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0B8CB8 tst Rm,Rn */
	if (!T) { UPD(0x0C0B8CC2u, 4); goto L_0C0B8CC2; }  /* 0C0B8CBA bf */
L_0C0B8CBC: BLKS(0x0C0B8CBCu);
	r1 = R32(r11); UPD(0x0C0B8CBEu, 1);  /* 0C0B8CBC mov.l @Rm,Rn */
	{ IF(0x0C0B8CC0u); ; /* slot nop */ UPD(0x0C0B8A02u, 3); goto L_0C0B8A02; }  /* 0C0B8CBE bra */
L_0C0B8CC2: BLKS(0x0C0B8CC2u);
	r8 = r7;  /* 0C0B8CC2 mov Rm,Rn */
	r8 += 0xFFFFFFE7u;  /* 0C0B8CC4 add #imm,Rn */
	r4 = 0x1u;  /* 0C0B8CC6 mov #imm,Rn */
	T = r8 > r4;  /* 0C0B8CC8 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8CD2u, 7); goto L_0C0B8CD2; }  /* 0C0B8CCA bf */
L_0C0B8CCC: BLKS(0x0C0B8CCCu);
	r9 = r5;  /* 0C0B8CCC mov Rm,Rn */
	{ r2 = r3; /* slot mov Rm,Rn */ UPD(0x0C0B8E30u, 4); goto L_0C0B8E30; }  /* 0C0B8CCE bra */
L_0C0B8CD2: BLKS(0x0C0B8CD2u);
	r6 = 0x9Fu; UPD(0x0C0B8CD4u, 1);  /* 0C0B8CD2 mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C0B8CD4 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B8CD8u, 2);  /* 0C0B8CD6 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C0B8CD8 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B8CDA cmp/eq #imm,r0 */
	{ u32 c_ = T; T = (s32)r0 > (s32)r4; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C0B8DB0u, 5); goto L_0C0B8DB0; } goto L_0C0B8CE0; }  /* 0C0B8CDC bt/s */
L_0C0B8CE0: BLKS(0x0C0B8CE0u);
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B8D80u, 4); goto L_0C0B8D80; } goto L_0C0B8CE4; }  /* 0C0B8CE0 bt/s */
L_0C0B8CE4: BLKS(0x0C0B8CE4u);
	T = (r0 & r0) == 0;  /* 0C0B8CE4 tst Rm,Rn */
	if (T) { UPD(0x0C0B8D70u, 5); goto L_0C0B8D70; }  /* 0C0B8CE6 bt */
L_0C0B8CE8: BLKS(0x0C0B8CE8u);
	r7 = r5;  /* 0C0B8CE8 mov Rm,Rn */
	UPD(0x0C0B8CEAu, 1);
L_0C0B8CEA: BLKS(0x0C0B8CEAu);
	IF(0x0C0B8CEAu); r7 <<= 2;  /* 0C0B8CEA shll2 Rn */
	r7 += r3;  /* 0C0B8CEC add Rm,Rn */
	r7 += 0x64u;  /* 0C0B8CEE add #imm,Rn */
	r3 = R32(r7); UPD(0x0C0B8CF2u, 4);  /* 0C0B8CF0 mov.l @Rm,Rn */
	r0 = r3;  /* 0C0B8CF2 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B8CF4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B8D40u, 5); goto L_0C0B8D40; }  /* 0C0B8CF6 bt */
L_0C0B8CF8: BLKS(0x0C0B8CF8u);
	T = (r3 & r3) == 0;  /* 0C0B8CF8 tst Rm,Rn */
	if (T) { UPD(0x0C0B8D24u, 4); goto L_0C0B8D24; }  /* 0C0B8CFA bt */
L_0C0B8CFC: BLKS(0x0C0B8CFCu);
	r8 = 0x1u;  /* 0C0B8CFC mov #imm,Rn */
	r10 = 0x2A0u; UPD(0x0C0B8D00u, 2);  /* 0C0B8CFE mov.w @(disp,pc),Rn */
	r0 = 0x9Fu; UPD(0x0C0B8D02u, 1);  /* 0C0B8D00 mov.w @(disp,pc),Rn */
	IF(0x0C0B8D02u); MACL = r5 * r10;  /* 0C0B8D02 mul.l Rm,Rn */
	IF(0x0C0B8D04u); W8(r0 + r11, r8); UPD(0x0C0B8D06u, 3);  /* 0C0B8D04 mov.b Rm,@(r0,Rn) */
	r4 = 0xC29D1D8u; UPD(0x0C0B8D08u, 1);  /* 0C0B8D06 mov.l @(disp,pc),Rn */
	IF(0x0C0B8D08u); r0 = MACL;  /* 0C0B8D08 sts macl,Rn */
	r4 += r0;  /* 0C0B8D0A add Rm,Rn */
	r0 = R32(r4 + 0x4u); UPD(0x0C0B8D0Eu, 3);  /* 0C0B8D0C mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0B8D0E mov #imm,Rn */
	r9 = R32(r11 + 0x34u); UPD(0x0C0B8D12u, 2);  /* 0C0B8D10 mov.l @(disp,Rm),Rn */
	IF(0x0C0B8D12u); r0 >>= 2;  /* 0C0B8D12 shlr2 Rn */
	r1 = 0xFFFFu; UPD(0x0C0B8D16u, 2);  /* 0C0B8D14 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B8D16 and #imm,r0 */
	W32(r12 + 0x24u, r3); UPD(0x0C0B8D1Au, 2);  /* 0C0B8D18 mov.l Rm,@(disp,Rn) */
	r0 ^= 0x1u;  /* 0C0B8D1A xor #imm,r0 */
	r9 |= r1;  /* 0C0B8D1C or Rm,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B8D20u, 3);  /* 0C0B8D1E mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x34u, r9); UPD(0x0C0B8D22u, 1);  /* 0C0B8D20 mov.l Rm,@(disp,Rn) */
	W32(r7, r5); UPD(0x0C0B8D24u, 1);  /* 0C0B8D22 mov.l Rm,@Rn */
L_0C0B8D24: BLKS(0x0C0B8D24u);
	r2 = R32(r12 + 0x24u); UPD(0x0C0B8D26u, 1);  /* 0C0B8D24 mov.l @(disp,Rm),Rn */
	r12 = 0x12u;  /* 0C0B8D26 mov #imm,Rn */
	IF(0x0C0B8D28u); ARG0(0x42CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0B8D28 shld Rm,Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C0B8D2Cu, 3);  /* 0C0B8D2A mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B8D2C add Rm,Rn */
	UPD(0x0C0B8D2Eu, 1);
L_0C0B8D2E: BLKS(0x0C0B8D2Eu);
	{ W32(r11 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B873Au, 3); goto L_0C0B873A; }  /* 0C0B8D2E bra */
L_0C0B8D40: BLKS(0x0C0B8D40u);
	r6 = 0x2A0u; UPD(0x0C0B8D42u, 1);  /* 0C0B8D40 mov.w @(disp,pc),Rn */
	IF(0x0C0B8D42u); MACL = r5 * r6;  /* 0C0B8D42 mul.l Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C0B8D46u, 3);  /* 0C0B8D44 mov.w @(disp,pc),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C0B8D48u, 1);  /* 0C0B8D46 mov.l @(disp,pc),Rn */
	IF(0x0C0B8D48u); r2 = MACL;  /* 0C0B8D48 sts macl,Rn */
	IF(0x0C0B8D4Au); W8(r0 + r11, r3); UPD(0x0C0B8D4Cu, 2);  /* 0C0B8D4A mov.b Rm,@(r0,Rn) */
	r8 += r2;  /* 0C0B8D4C add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0B8D50u, 2);  /* 0C0B8D4E mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0B8D50 mov #imm,Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C0B8D54u, 2);  /* 0C0B8D52 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B8D54u); r0 >>= 2;  /* 0C0B8D54 shlr2 Rn */
	r10 = 0x207F8F8u; UPD(0x0C0B8D58u, 2);  /* 0C0B8D56 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B8D58 and #imm,r0 */
	r4 = 0xFFFFFFu; UPD(0x0C0B8D5Cu, 2);  /* 0C0B8D5A mov.l @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C0B8D5Eu, 1);  /* 0C0B8D5C mov.l Rm,@Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B8D60u, 1);  /* 0C0B8D5E mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C0B8D60 mov #imm,Rn */
	W32(r11 + 0x34u, r10); UPD(0x0C0B8D64u, 2);  /* 0C0B8D62 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x38u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8CF8u, 3); goto L_0C0B8CF8; }  /* 0C0B8D64 bra */
L_0C0B8D70: BLKS(0x0C0B8D70u);
	r9 = R32(r11); UPD(0x0C0B8D72u, 1);  /* 0C0B8D70 mov.l @Rm,Rn */
	r1 = 0xBFFFFFFFu; UPD(0x0C0B8D74u, 1);  /* 0C0B8D72 mov.l @(disp,pc),Rn */
	r9 &= r1;  /* 0C0B8D74 and Rm,Rn */
	{ W32(r11, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0B8CE8u, 4); goto L_0C0B8CE8; }  /* 0C0B8D76 bra */
L_0C0B8D80: BLKS(0x0C0B8D80u);
	{ u32 c_ = !T; r7 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8CEAu, 3); goto L_0C0B8CEA; } goto L_0C0B8D84; }  /* 0C0B8D80 bf/s */
L_0C0B8D84: BLKS(0x0C0B8D84u);
	r7 = R32(r11); UPD(0x0C0B8D86u, 2);  /* 0C0B8D84 mov.l @Rm,Rn */
	r9 = 0x40000000u; UPD(0x0C0B8D88u, 1);  /* 0C0B8D86 mov.l @(disp,pc),Rn */
	r2 = R32(r11 + 0x34u); UPD(0x0C0B8D8Au, 1);  /* 0C0B8D88 mov.l @(disp,Rm),Rn */
	r7 |= r9;  /* 0C0B8D8A or Rm,Rn */
	r1 = r2 & 0xFFFF;  /* 0C0B8D8C extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B8D8E tst Rm,Rn */
	{ u32 c_ = T; W32(r11, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8DA0u, 6); goto L_0C0B8DA0; } UPD(0x0C0B8D94u, 1); goto L_0C0B8D94; }  /* 0C0B8D90 bt/s */
L_0C0B8D94: BLKS(0x0C0B8D94u);
	r7 = 0xFFFFF7F8u; UPD(0x0C0B8D96u, 1);  /* 0C0B8D94 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B8D96 add Rm,Rn */
	{ W32(r11 + 0x34u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8CE8u, 4); goto L_0C0B8CE8; }  /* 0C0B8D98 bra */
L_0C0B8DA0: BLKS(0x0C0B8DA0u);
	r0 = 0xBFFFFFFFu; UPD(0x0C0B8DA2u, 1);  /* 0C0B8DA0 mov.l @(disp,pc),Rn */
	r7 &= r0;  /* 0C0B8DA2 and Rm,Rn */
	W8(r6, r1); UPD(0x0C0B8DA6u, 2);  /* 0C0B8DA4 mov.b Rm,@Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0B8CE8u, 3); goto L_0C0B8CE8; }  /* 0C0B8DA6 bra */
L_0C0B8DB0: BLKS(0x0C0B8DB0u);
	r10 = R32(r11); UPD(0x0C0B8DB2u, 1);  /* 0C0B8DB0 mov.l @Rm,Rn */
	r8 = 0x40000000u; UPD(0x0C0B8DB4u, 1);  /* 0C0B8DB2 mov.l @(disp,pc),Rn */
	r7 = R32(r11 + 0x34u); UPD(0x0C0B8DB6u, 1);  /* 0C0B8DB4 mov.l @(disp,Rm),Rn */
	r10 |= r8;  /* 0C0B8DB6 or Rm,Rn */
	r0 = 0x201Fu; UPD(0x0C0B8DBAu, 2);  /* 0C0B8DB8 mov.w @(disp,pc),Rn */
	r4 = r7 & 0xFFFF;  /* 0C0B8DBA extu.w Rm,Rn */
	T = r4 > r0;  /* 0C0B8DBC cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r11, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B8E10u, 5); goto L_0C0B8E10; } UPD(0x0C0B8DC2u, 1); goto L_0C0B8DC2; }  /* 0C0B8DBE bt/s */
L_0C0B8DC2: BLKS(0x0C0B8DC2u);
	r2 = 0x0u;  /* 0C0B8DC2 mov #imm,Rn */
	W8(r6, r2); UPD(0x0C0B8DC6u, 2);  /* 0C0B8DC4 mov.b Rm,@Rn */
	r1 = 0x0u;  /* 0C0B8DC6 mov #imm,Rn */
	W32(r12 + 0x24u, r1); UPD(0x0C0B8DCAu, 2);  /* 0C0B8DC8 mov.l Rm,@(disp,Rn) */
L_0C0B8DCA: BLKS(0x0C0B8DCAu);
	{ r7 = r5; /* slot mov Rm,Rn */ UPD(0x0C0B8CEAu, 3); goto L_0C0B8CEA; }  /* 0C0B8DCA bra */
L_0C0B8E10: BLKS(0x0C0B8E10u);
	r6 = 0xFFFFDFE0u; UPD(0x0C0B8E12u, 1);  /* 0C0B8E10 mov.w @(disp,pc),Rn */
	r1 = R32(r12 + 0x24u); UPD(0x0C0B8E14u, 1);  /* 0C0B8E12 mov.l @(disp,Rm),Rn */
	r7 += r6;  /* 0C0B8E14 add Rm,Rn */
	IF(0x0C0B8E16u); T = (s32)r1 > 0;  /* 0C0B8E16 cmp/pl Rn */
	{ u32 c_ = !T; W32(r11 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8E20u, 5); goto L_0C0B8E20; } UPD(0x0C0B8E1Cu, 1); goto L_0C0B8E1C; }  /* 0C0B8E18 bf/s */
L_0C0B8E1C: BLKS(0x0C0B8E1Cu);
	r1 += 0x1u;  /* 0C0B8E1C add #imm,Rn */
	W32(r12 + 0x24u, r1); UPD(0x0C0B8E20u, 2);  /* 0C0B8E1E mov.l Rm,@(disp,Rn) */
L_0C0B8E20: BLKS(0x0C0B8E20u);
	IF(0x0C0B8E20u); T = (s32)r1 >= 0;  /* 0C0B8E20 cmp/pz Rn */
	if (T) { UPD(0x0C0B8DCAu, 4); goto L_0C0B8DCA; }  /* 0C0B8E22 bt */
L_0C0B8E24: BLKS(0x0C0B8E24u);
	r1 += 0xFFFFFFFFu;  /* 0C0B8E24 add #imm,Rn */
	{ W32(r12 + 0x24u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8DCAu, 4); goto L_0C0B8DCA; }  /* 0C0B8E26 bra */
L_0C0B8E30: BLKS(0x0C0B8E30u);
	IF(0x0C0B8E30u); r9 <<= 2;  /* 0C0B8E30 shll2 Rn */
	r2 += r9;  /* 0C0B8E32 add Rm,Rn */
	r2 += 0x64u;  /* 0C0B8E34 add #imm,Rn */
	r3 = R32(r2); UPD(0x0C0B8E38u, 4);  /* 0C0B8E36 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B8E38 tst Rm,Rn */
	{ u32 c_ = T; r8 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8E64u, 4); goto L_0C0B8E64; } goto L_0C0B8E3E; }  /* 0C0B8E3A bt/s */
L_0C0B8E3E: BLKS(0x0C0B8E3Eu);
	r0 = r3;  /* 0C0B8E3E mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B8E40 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B8E62u, 6); goto L_0C0B8E62; }  /* 0C0B8E42 bt */
L_0C0B8E44: BLKS(0x0C0B8E44u);
	r10 = R32(r11 + 0x34u); UPD(0x0C0B8E46u, 1);  /* 0C0B8E44 mov.l @(disp,Rm),Rn */
	r0 = r7;  /* 0C0B8E46 mov Rm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C0B8E4Au, 2);  /* 0C0B8E48 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFEDu;  /* 0C0B8E4A add #imm,Rn */
	r10 &= r1;  /* 0C0B8E4C and Rm,Rn */
	T = r0 > r4;  /* 0C0B8E4E cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x34u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8E5Au, 6); goto L_0C0B8E5A; } UPD(0x0C0B8E54u, 1); goto L_0C0B8E54; }  /* 0C0B8E50 bt/s */
L_0C0B8E54: BLKS(0x0C0B8E54u);
	r0 = R32(r6 + 0x4u); UPD(0x0C0B8E56u, 1);  /* 0C0B8E54 mov.l @(disp,Rm),Rn */
	r0 ^= 0x4u;  /* 0C0B8E56 xor #imm,r0 */
	W32(r6 + 0x4u, r0); UPD(0x0C0B8E5Au, 2);  /* 0C0B8E58 mov.l Rm,@(disp,Rn) */
L_0C0B8E5A: BLKS(0x0C0B8E5Au);
	r6 = 0xAu;  /* 0C0B8E5A mov #imm,Rn */
	IF(0x0C0B8E5Cu); MACL = r3 * r6;  /* 0C0B8E5C mul.l Rm,Rn */
	IF(0x0C0B8E5Eu); r3 = MACL;  /* 0C0B8E5E sts macl,Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C0B8E62u, 5);  /* 0C0B8E60 mov.l Rm,@(disp,Rn) */
L_0C0B8E62: BLKS(0x0C0B8E62u);
	r8 = r7;  /* 0C0B8E62 mov Rm,Rn */
	UPD(0x0C0B8E64u, 1);
L_0C0B8E64: BLKS(0x0C0B8E64u);
	r8 += 0xFFFFFFEFu;  /* 0C0B8E64 add #imm,Rn */
	r4 = 0x1u;  /* 0C0B8E66 mov #imm,Rn */
	T = r8 > r4;  /* 0C0B8E68 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B8EE0u, 6); goto L_0C0B8EE0; }  /* 0C0B8E6A bt */
L_0C0B8E6C: BLKS(0x0C0B8E6Cu);
	r2 = R32(r11 + 0x34u); UPD(0x0C0B8E6Eu, 1);  /* 0C0B8E6C mov.l @(disp,Rm),Rn */
	r1 = 0xC0BFu; UPD(0x0C0B8E70u, 1);  /* 0C0B8E6E mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C0B8E70 extu.w Rm,Rn */
	T = r3 > r1;  /* 0C0B8E72 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B8E8Au, 5); goto L_0C0B8E8A; } goto L_0C0B8E78; }  /* 0C0B8E74 bt/s */
L_0C0B8E78: BLKS(0x0C0B8E78u);
	r8 = 0x1010u; UPD(0x0C0B8E7Au, 2);  /* 0C0B8E78 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0B8E7A add Rm,Rn */
	T = (s32)r8 > (s32)r1;  /* 0C0B8E7C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B8E82u, 5); goto L_0C0B8E82; }  /* 0C0B8E7E bf */
L_0C0B8E80: BLKS(0x0C0B8E80u);
	r8 = r1;  /* 0C0B8E80 mov Rm,Rn */
	UPD(0x0C0B8E82u, 1);
L_0C0B8E82: BLKS(0x0C0B8E82u);
	r9 = 0xFFFF0000u; UPD(0x0C0B8E84u, 1);  /* 0C0B8E82 mov.l @(disp,pc),Rn */
	r2 &= r9;  /* 0C0B8E84 and Rm,Rn */
	r2 |= r8;  /* 0C0B8E86 or Rm,Rn */
	W32(r11 + 0x34u, r2); UPD(0x0C0B8E8Au, 3);  /* 0C0B8E88 mov.l Rm,@(disp,Rn) */
L_0C0B8E8A: BLKS(0x0C0B8E8Au);
	r10 = 0x2A0u; UPD(0x0C0B8E8Cu, 1);  /* 0C0B8E8A mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFD3u;  /* 0C0B8E8C add #imm,Rn */
	r3 = R32(r11); UPD(0x0C0B8E90u, 2);  /* 0C0B8E8E mov.l @Rm,Rn */
	IF(0x0C0B8E90u); MACL = r5 * r10;  /* 0C0B8E90 mul.l Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B8E94u, 3);  /* 0C0B8E92 mov.l @(disp,pc),Rn */
	r9 = 0xC29D1D8u; UPD(0x0C0B8E96u, 1);  /* 0C0B8E94 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C0B8E96 or Rm,Rn */
	IF(0x0C0B8E98u); r0 = MACL;  /* 0C0B8E98 sts macl,Rn */
	W32(r11, r3); UPD(0x0C0B8E9Cu, 3);  /* 0C0B8E9A mov.l Rm,@Rn */
	r9 += r0;  /* 0C0B8E9C add Rm,Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C0B8EA0u, 2);  /* 0C0B8E9E mov.l @(disp,Rm),Rn */
	r5 = 0x1u;  /* 0C0B8EA0 mov #imm,Rn */
	IF(0x0C0B8EA2u); r0 >>= 2;  /* 0C0B8EA2 shlr2 Rn */
	r0 &= 0x1u;  /* 0C0B8EA4 and #imm,r0 */
	T = r7 > r5;  /* 0C0B8EA6 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B8EB0u, 7); goto L_0C0B8EB0; } UPD(0x0C0B8EACu, 1); goto L_0C0B8EAC; }  /* 0C0B8EA8 bt/s */
L_0C0B8EAC: BLKS(0x0C0B8EACu);
	{ IF(0x0C0B8EAEu); ; /* slot nop */ UPD(0x0C0B873Au, 3); goto L_0C0B873A; }  /* 0C0B8EAC bra */
L_0C0B8EB0: BLKS(0x0C0B8EB0u);
	r2 = R32(r12 + 0x24u); UPD(0x0C0B8EB2u, 1);  /* 0C0B8EB0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B8EB2u); T = (s32)r2 >= 0;  /* 0C0B8EB2 cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8ED0u, 4); goto L_0C0B8ED0; } UPD(0x0C0B8EB8u, 1); goto L_0C0B8EB8; }  /* 0C0B8EB4 bf/s */
L_0C0B8EB8: BLKS(0x0C0B8EB8u);
	IF(0x0C0B8EB8u); T = (s32)r2 > 0;  /* 0C0B8EB8 cmp/pl Rn */
	{ u32 c_ = !T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8EC4u, 4); goto L_0C0B8EC4; } goto L_0C0B8EBE; }  /* 0C0B8EBA bf/s */
L_0C0B8EBE: BLKS(0x0C0B8EBEu);
	r6 += 0xFFFFFFFFu;  /* 0C0B8EBE add #imm,Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C0B8EC2u, 3);  /* 0C0B8EC0 mov.l Rm,@(disp,Rn) */
	r2 = r6;  /* 0C0B8EC2 mov Rm,Rn */
	UPD(0x0C0B8EC4u, 1);
L_0C0B8EC4: BLKS(0x0C0B8EC4u);
	r12 = 0x12u;  /* 0C0B8EC4 mov #imm,Rn */
	IF(0x0C0B8EC6u); ARG0(0x42CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0B8EC6 shld Rm,Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C0B8ECAu, 3);  /* 0C0B8EC8 mov.l @(disp,Rm),Rn */
	{ r1 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0B8D2Eu, 3); goto L_0C0B8D2E; }  /* 0C0B8ECA bra */
L_0C0B8ED0: BLKS(0x0C0B8ED0u);
	r7 += 0x1u;  /* 0C0B8ED0 add #imm,Rn */
	W32(r12 + 0x24u, r7); UPD(0x0C0B8ED4u, 2);  /* 0C0B8ED2 mov.l Rm,@(disp,Rn) */
	{ r2 = r7; /* slot mov Rm,Rn */ UPD(0x0C0B8EB8u, 3); goto L_0C0B8EB8; }  /* 0C0B8ED4 bra */
L_0C0B8EE0: BLKS(0x0C0B8EE0u);
	r2 = R32(r11 + 0x34u); UPD(0x0C0B8EE2u, 1);  /* 0C0B8EE0 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFu; UPD(0x0C0B8EE4u, 1);  /* 0C0B8EE2 mov.l @(disp,pc),Rn */
	r3 = r2;  /* 0C0B8EE4 mov Rm,Rn */
	r0 = 0xFFFEu; UPD(0x0C0B8EE8u, 2);  /* 0C0B8EE6 mov.l @(disp,pc),Rn */
	r3 &= r6;  /* 0C0B8EE8 and Rm,Rn */
	T = r3 > r0;  /* 0C0B8EEA cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8F04u, 5); goto L_0C0B8F04; } goto L_0C0B8EF0; }  /* 0C0B8EEC bt/s */
L_0C0B8EF0: BLKS(0x0C0B8EF0u);
	r8 = 0x1010u; UPD(0x0C0B8EF2u, 2);  /* 0C0B8EF0 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0B8EF2 add Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0B8EF4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B8EFAu, 5); goto L_0C0B8EFA; }  /* 0C0B8EF6 bf */
L_0C0B8EF8: BLKS(0x0C0B8EF8u);
	r8 = r6;  /* 0C0B8EF8 mov Rm,Rn */
	UPD(0x0C0B8EFAu, 1);
L_0C0B8EFA: BLKS(0x0C0B8EFAu);
	r10 = 0xFFFF0000u; UPD(0x0C0B8EFCu, 1);  /* 0C0B8EFA mov.l @(disp,pc),Rn */
	r2 &= r10;  /* 0C0B8EFC and Rm,Rn */
	r2 |= r8;  /* 0C0B8EFE or Rm,Rn */
	W32(r11 + 0x34u, r2); UPD(0x0C0B8F02u, 3);  /* 0C0B8F00 mov.l Rm,@(disp,Rn) */
	r1 = r7;  /* 0C0B8F02 mov Rm,Rn */
	UPD(0x0C0B8F04u, 1);
L_0C0B8F04: BLKS(0x0C0B8F04u);
	r1 += 0xFFFFFFEDu;  /* 0C0B8F04 add #imm,Rn */
	r3 = 0x1u;  /* 0C0B8F06 mov #imm,Rn */
	T = r1 > r3;  /* 0C0B8F08 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B8E8Au, 6); goto L_0C0B8E8A; } goto L_0C0B8F0E; }  /* 0C0B8F0A bt/s */
L_0C0B8F0E: BLKS(0x0C0B8F0Eu);
	r8 = 0xC28EC78u; UPD(0x0C0B8F10u, 2);  /* 0C0B8F0E mov.l @(disp,pc),Rn */
	IF(0x0C0B8F10u); r2 = R32(r0 + r8); UPD(0x0C0B8F12u, 1);  /* 0C0B8F10 mov.l @(r0,Rm),Rn */
	r6 = r2;  /* 0C0B8F12 mov Rm,Rn */
	r4 = r2;  /* 0C0B8F14 mov Rm,Rn */
	IF(0x0C0B8F16u); r6 <<= 16;  /* 0C0B8F16 shll16 Rn */
	IF(0x0C0B8F18u); r4 <<= 8;  /* 0C0B8F18 shll8 Rn */
	r6 |= r4;  /* 0C0B8F1A or Rm,Rn */
	r6 |= r2;  /* 0C0B8F1C or Rm,Rn */
	{ W32(r11 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B8E8Au, 9); goto L_0C0B8E8A; }  /* 0C0B8F1E bra */
L_0C0B8F30: BLKS(0x0C0B8F30u);
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C0B8C8Eu, 3); goto L_0C0B8C8E; }  /* 0C0B8F30 bra */
L_0C0B8F40: BLKS(0x0C0B8F40u);
	r5 = 0xC2B039Cu; UPD(0x0C0B8F42u, 1);  /* 0C0B8F40 mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C0B8F44u, 1);  /* 0C0B8F42 mov.l @Rm,Rn */
	r13 = 0x10101u; UPD(0x0C0B8F46u, 1);  /* 0C0B8F44 mov.l @(disp,pc),Rn */
	IF(0x0C0B8F46u); r0 <<= 2;  /* 0C0B8F46 shll2 Rn */
	r2 = r0 & 0xFF;  /* 0C0B8F48 extu.b Rm,Rn */
	IF(0x0C0B8F4Au); MACL = r2 * r13;  /* 0C0B8F4A mul.l Rm,Rn */
	r3 = 0xFF7F7F80u; UPD(0x0C0B8F4Eu, 5);  /* 0C0B8F4C mov.l @(disp,pc),Rn */
	IF(0x0C0B8F4Eu); r2 = MACL;  /* 0C0B8F4E sts macl,Rn */
	r2 += r3;  /* 0C0B8F50 add Rm,Rn */
	IF(0x0C0B8F52u); T = (s32)r2 >= 0;  /* 0C0B8F52 cmp/pz Rn */
	if (!T) { UPD(0x0C0B8F60u, 6); goto L_0C0B8F60; }  /* 0C0B8F54 bf */
L_0C0B8F56: BLKS(0x0C0B8F56u);
	r1 = 0x7F7F7Fu; UPD(0x0C0B8F58u, 1);  /* 0C0B8F56 mov.l @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C0B88FEu, 3); goto L_0C0B88FE; }  /* 0C0B8F58 bra */
L_0C0B8F60: BLKS(0x0C0B8F60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B8F56u, 3); goto L_0C0B8F56; }  /* 0C0B8F60 bra */
L_0C0B8FA0: BLKS(0x0C0B8FA0u);
	r6 = 0x2A0u; UPD(0x0C0B8FA2u, 1);  /* 0C0B8FA0 mov.w @(disp,pc),Rn */
	IF(0x0C0B8FA2u); MACL = r7 * r6;  /* 0C0B8FA2 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0B8FA6u, 3);  /* 0C0B8FA4 mov.l @(disp,pc),Rn */
	IF(0x0C0B8FA6u); r7 = MACL;  /* 0C0B8FA6 sts macl,Rn */
	r0 = 0xFFFF7F60u; UPD(0x0C0B8FAAu, 2);  /* 0C0B8FA8 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0B8FAA add Rm,Rn */
	IF(0x0C0B8FACu); r1 = R32(r0 + r5); UPD(0x0C0B8FAEu, 2);  /* 0C0B8FAC mov.l @(r0,Rm),Rn */
L_0C0B8FAE: BLKS(0x0C0B8FAEu);
	T = (r1 & r1) == 0;  /* 0C0B8FAE tst Rm,Rn */
	if (!T) { UPD(0x0C0B8FB8u, 4); goto L_0C0B8FB8; }  /* 0C0B8FB0 bf */
L_0C0B8FB2: BLKS(0x0C0B8FB2u);
	r14 += 0x8u;  /* 0C0B8FB2 add #imm,Rn */
	{ IF(0x0C0B8FB6u); ; /* slot nop */ UPD(0x0C0B82CEu, 4); goto L_0C0B82CE; }  /* 0C0B8FB4 bra */
L_0C0B8FB8: BLKS(0x0C0B8FB8u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8FBAu, 1);  /* 0C0B8FB8 mov.l @(disp,Rm),Rn */
	r9 = 0x807u; UPD(0x0C0B8FBCu, 1);  /* 0C0B8FBA mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFFFF;  /* 0C0B8FBC extu.w Rm,Rn */
	T = r1 > r9;  /* 0C0B8FBE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B8FC6u, 5); goto L_0C0B8FC6; }  /* 0C0B8FC0 bf */
L_0C0B8FC2: BLKS(0x0C0B8FC2u);
	{ IF(0x0C0B8FC4u); ; /* slot nop */ UPD(0x0C0B8350u, 3); goto L_0C0B8350; }  /* 0C0B8FC2 bra */
L_0C0B8FC6: BLKS(0x0C0B8FC6u);
	{ IF(0x0C0B8FC8u); ; /* slot nop */ UPD(0x0C0B8B92u, 3); goto L_0C0B8B92; }  /* 0C0B8FC6 bra */
L_0C0B8FD0: BLKS(0x0C0B8FD0u);
	r4 = 0xC29D1D8u; UPD(0x0C0B8FD2u, 1);  /* 0C0B8FD0 mov.l @(disp,pc),Rn */
	r10 = R32(r4); UPD(0x0C0B8FD4u, 1);  /* 0C0B8FD2 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0B8FD4 tst Rm,Rn */
	if (T) { UPD(0x0C0B8FE2u, 4); goto L_0C0B8FE2; }  /* 0C0B8FD6 bt */
L_0C0B8FD8: BLKS(0x0C0B8FD8u);
	r12 = r3;  /* 0C0B8FD8 mov Rm,Rn */
	r12 += 0x40u;  /* 0C0B8FDA add #imm,Rn */
	r6 = R32(r12 + 0x2Cu); UPD(0x0C0B8FDEu, 3);  /* 0C0B8FDC mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C0B8FDE tst Rm,Rn */
	if (!T) { UPD(0x0C0B8FE6u, 4); goto L_0C0B8FE6; }  /* 0C0B8FE0 bf */
L_0C0B8FE2: BLKS(0x0C0B8FE2u);
	{ r10 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C0B8992u, 3); goto L_0C0B8992; }  /* 0C0B8FE2 bra */
L_0C0B8FE6: BLKS(0x0C0B8FE6u);
	r3 = R32(r11); UPD(0x0C0B8FE8u, 1);  /* 0C0B8FE6 mov.l @Rm,Rn */
	r0 = r7;  /* 0C0B8FE8 mov Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B8FECu, 2);  /* 0C0B8FEA mov.l @(disp,pc),Rn */
	T = r0 == 0x3Du;  /* 0C0B8FEC cmp/eq #imm,r0 */
	r3 |= r1;  /* 0C0B8FEE or Rm,Rn */
	{ u32 c_ = T; W32(r11, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B90C0u, 5); goto L_0C0B90C0; } UPD(0x0C0B8FF4u, 1); goto L_0C0B8FF4; }  /* 0C0B8FF0 bt/s */
L_0C0B8FF4: BLKS(0x0C0B8FF4u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B8FF6u, 1);  /* 0C0B8FF4 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFu; UPD(0x0C0B8FF8u, 1);  /* 0C0B8FF6 mov.l @(disp,pc),Rn */
	r1 = r3;  /* 0C0B8FF8 mov Rm,Rn */
	r5 = 0xF7F7u; UPD(0x0C0B8FFCu, 2);  /* 0C0B8FFA mov.l @(disp,pc),Rn */
	r1 &= r6;  /* 0C0B8FFC and Rm,Rn */
	T = r1 > r5;  /* 0C0B8FFE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B90B0u, 5); goto L_0C0B90B0; }  /* 0C0B9000 bt */
L_0C0B9002: BLKS(0x0C0B9002u);
	r8 = 0x808u; UPD(0x0C0B9004u, 1);  /* 0C0B9002 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0B9004 add Rm,Rn */
	UPD(0x0C0B9006u, 1);
L_0C0B9006: BLKS(0x0C0B9006u);
	r0 = r7;  /* 0C0B9006 mov Rm,Rn */
	T = r0 == 0x3Bu;  /* 0C0B9008 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B9080u, 5); goto L_0C0B9080; } UPD(0x0C0B900Eu, 1); goto L_0C0B900E; }  /* 0C0B900A bt/s */
L_0C0B900E: BLKS(0x0C0B900Eu);
	r2 = r7;  /* 0C0B900E mov Rm,Rn */
	r2 += 0xFFFFFFCDu;  /* 0C0B9010 add #imm,Rn */
	W32(r11 + 0xCu, r2); UPD(0x0C0B9014u, 3);  /* 0C0B9012 mov.l Rm,@(disp,Rn) */
	r3 = 0xC29D1D8u; UPD(0x0C0B9016u, 1);  /* 0C0B9014 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0B9018u, 1);  /* 0C0B9016 mov.l @(disp,Rm),Rn */
	r0 &= 0x3u;  /* 0C0B9018 and #imm,r0 */
	T = r0 == r2;  /* 0C0B901A cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9060u, 5); goto L_0C0B9060; } goto L_0C0B9020; }  /* 0C0B901C bt/s */
L_0C0B9020: BLKS(0x0C0B9020u);
	r8 = 0xC239494u; UPD(0x0C0B9022u, 2);  /* 0C0B9020 mov.l @(disp,pc),Rn */
	r2 |= r0;  /* 0C0B9022 or Rm,Rn */
	r0 = R32(r8); UPD(0x0C0B9026u, 2);  /* 0C0B9024 mov.l @Rm,Rn */
	W32(r11 + 0xCu, r2); UPD(0x0C0B9028u, 1);  /* 0C0B9026 mov.l Rm,@(disp,Rn) */
	r0 &= 0x1u;  /* 0C0B9028 and #imm,r0 */
	UPD(0x0C0B902Au, 1);
L_0C0B902A: BLKS(0x0C0B902Au);
	T = (r0 & r0) == 0;  /* 0C0B902A tst Rm,Rn */
	if (!T) { UPD(0x0C0B903Eu, 4); goto L_0C0B903E; }  /* 0C0B902C bf */
L_0C0B902E: BLKS(0x0C0B902Eu);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B9030u, 1);  /* 0C0B902E mov.l @(disp,Rm),Rn */
	r10 = 0x100Fu; UPD(0x0C0B9032u, 1);  /* 0C0B9030 mov.w @(disp,pc),Rn */
	r12 = r3 & 0xFFFF;  /* 0C0B9032 extu.w Rm,Rn */
	T = r12 > r10;  /* 0C0B9034 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B9050u, 5); goto L_0C0B9050; }  /* 0C0B9036 bf */
L_0C0B9038: BLKS(0x0C0B9038u);
	r7 = 0xFFFFEFF0u; UPD(0x0C0B903Au, 1);  /* 0C0B9038 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B903A add Rm,Rn */
	W32(r11 + 0x34u, r3); UPD(0x0C0B903Eu, 2);  /* 0C0B903C mov.l Rm,@(disp,Rn) */
L_0C0B903E: BLKS(0x0C0B903Eu);
	{ IF(0x0C0B9040u); ; /* slot nop */ UPD(0x0C0B873Au, 3); goto L_0C0B873A; }  /* 0C0B903E bra */
L_0C0B9050: BLKS(0x0C0B9050u);
	W32(r11, r0); UPD(0x0C0B9052u, 1);  /* 0C0B9050 mov.l Rm,@Rn */
L_0C0B9052: BLKS(0x0C0B9052u);
	{ IF(0x0C0B9054u); ; /* slot nop */ UPD(0x0C0B873Au, 3); goto L_0C0B873A; }  /* 0C0B9052 bra */
L_0C0B9060: BLKS(0x0C0B9060u);
	r5 = 0xC239494u; UPD(0x0C0B9062u, 1);  /* 0C0B9060 mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C0B9064u, 1);  /* 0C0B9062 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0B9064 and #imm,r0 */
	UPD(0x0C0B9066u, 1);
L_0C0B9066: BLKS(0x0C0B9066u);
	T = (r0 & r0) == 0;  /* 0C0B9066 tst Rm,Rn */
	if (T) { UPD(0x0C0B9052u, 4); goto L_0C0B9052; }  /* 0C0B9068 bt */
L_0C0B906A: BLKS(0x0C0B906Au);
	r1 = R32(r11 + 0x28u); UPD(0x0C0B906Cu, 1);  /* 0C0B906A mov.l @(disp,Rm),Rn */
	r2 = 0xFFFC0000u; UPD(0x0C0B906Eu, 1);  /* 0C0B906C mov.l @(disp,pc),Rn */
	{ r1 += r2; /* slot add Rm,Rn */ UPD(0x0C0B8D2Eu, 3); goto L_0C0B8D2E; }  /* 0C0B906E bra */
L_0C0B9080: BLKS(0x0C0B9080u);
	r12 = 0xC29D1D8u; UPD(0x0C0B9082u, 1);  /* 0C0B9080 mov.l @(disp,pc),Rn */
	r2 = 0xAu;  /* 0C0B9082 mov #imm,Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0B9086u, 2);  /* 0C0B9084 mov.l @(disp,Rm),Rn */
	r0 &= 0x3u;  /* 0C0B9086 and #imm,r0 */
	IF(0x0C0B9088u); MACL = r0 * r2;  /* 0C0B9088 mul.l Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C0B908Cu, 4);  /* 0C0B908A mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C0B908Eu, 1);  /* 0C0B908C mov.l @(disp,Rm),Rn */
	IF(0x0C0B908Eu); r6 = MACL;  /* 0C0B908E sts macl,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B9092u, 2);  /* 0C0B9090 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9092u); r6 <<= 16;  /* 0C0B9092 shll16 Rn */
	r9 = 0xFFFC0000u; UPD(0x0C0B9096u, 2);  /* 0C0B9094 mov.l @(disp,pc),Rn */
	r10 -= r6;  /* 0C0B9096 sub Rm,Rn */
	r7 = 0xC239494u; UPD(0x0C0B909Au, 2);  /* 0C0B9098 mov.l @(disp,pc),Rn */
	r4 += r9;  /* 0C0B909A add Rm,Rn */
	r0 = R32(r7); UPD(0x0C0B909Eu, 2);  /* 0C0B909C mov.l @Rm,Rn */
	W32(r11 + 0x24u, r10); UPD(0x0C0B90A0u, 1);  /* 0C0B909E mov.l Rm,@(disp,Rn) */
	r0 &= 0x1u;  /* 0C0B90A0 and #imm,r0 */
	W32(r11 + 0x28u, r4); UPD(0x0C0B90A4u, 2);  /* 0C0B90A2 mov.l Rm,@(disp,Rn) */
L_0C0B90A4: BLKS(0x0C0B90A4u);
	T = (r0 & r0) == 0;  /* 0C0B90A4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B9052u, 4); goto L_0C0B9052; }  /* 0C0B90A6 bf */
L_0C0B90A8: BLKS(0x0C0B90A8u);
	W32(r11, r0); UPD(0x0C0B90AAu, 1);  /* 0C0B90A8 mov.l Rm,@Rn */
	{ IF(0x0C0B90ACu); ; /* slot nop */ UPD(0x0C0B9052u, 3); goto L_0C0B9052; }  /* 0C0B90AA bra */
L_0C0B90B0: BLKS(0x0C0B90B0u);
	{ r3 |= r6; /* slot or Rm,Rn */ UPD(0x0C0B9006u, 3); goto L_0C0B9006; }  /* 0C0B90B0 bra */
L_0C0B90C0: BLKS(0x0C0B90C0u);
	r0 = R32(r4 + 0x4u); UPD(0x0C0B90C2u, 1);  /* 0C0B90C0 mov.l @(disp,Rm),Rn */
	r10 = 0xAu;  /* 0C0B90C2 mov #imm,Rn */
	r0 &= 0x3u;  /* 0C0B90C4 and #imm,r0 */
	IF(0x0C0B90C6u); MACL = r0 * r10;  /* 0C0B90C6 mul.l Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C0B90CAu, 5);  /* 0C0B90C8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B90CAu); r9 = MACL;  /* 0C0B90CA sts macl,Rn */
	IF(0x0C0B90CCu); r9 <<= 16;  /* 0C0B90CC shll16 Rn */
	r4 -= r9;  /* 0C0B90CE sub Rm,Rn */
	W32(r11 + 0x24u, r4); UPD(0x0C0B90D2u, 4);  /* 0C0B90D0 mov.l Rm,@(disp,Rn) */
	r8 = 0xC2B039Cu; UPD(0x0C0B90D4u, 1);  /* 0C0B90D2 mov.l @(disp,pc),Rn */
	r5 = R32(r8); UPD(0x0C0B90D6u, 1);  /* 0C0B90D4 mov.l @Rm,Rn */
	r2 = 0xFFFF0000u; UPD(0x0C0B90D8u, 1);  /* 0C0B90D6 mov.l @(disp,pc),Rn */
	IF(0x0C0B90D8u); r5 <<= 2;  /* 0C0B90D8 shll2 Rn */
	r3 = R32(r11 + 0x34u); UPD(0x0C0B90DCu, 2);  /* 0C0B90DA mov.l @(disp,Rm),Rn */
	r7 = r5 & 0xFF;  /* 0C0B90DC extu.b Rm,Rn */
	r3 &= r2;  /* 0C0B90DE and Rm,Rn */
	r2 = r7;  /* 0C0B90E0 mov Rm,Rn */
	IF(0x0C0B90E2u); r2 <<= 8;  /* 0C0B90E2 shll8 Rn */
	r13 = 0xFFFF7F80u; UPD(0x0C0B90E6u, 5);  /* 0C0B90E4 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0B90E6 add Rm,Rn */
	r2 += r13;  /* 0C0B90E8 add Rm,Rn */
	IF(0x0C0B90EAu); T = (s32)r2 >= 0;  /* 0C0B90EA cmp/pz Rn */
	if (!T) { UPD(0x0C0B9110u, 6); goto L_0C0B9110; }  /* 0C0B90EC bf */
L_0C0B90EE: BLKS(0x0C0B90EEu);
	r0 = 0x7F7Fu; UPD(0x0C0B90F0u, 1);  /* 0C0B90EE mov.w @(disp,pc),Rn */
	r6 = 0xC239494u; UPD(0x0C0B90F2u, 1);  /* 0C0B90F0 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0B90F2 add Rm,Rn */
	r0 = R32(r6); UPD(0x0C0B90F6u, 2);  /* 0C0B90F4 mov.l @Rm,Rn */
	r3 |= r2;  /* 0C0B90F6 or Rm,Rn */
	r0 &= 0x1u;  /* 0C0B90F8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B90FA tst Rm,Rn */
	{ u32 c_ = !T; W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B9108u, 6); goto L_0C0B9108; } UPD(0x0C0B9100u, 1); goto L_0C0B9100; }  /* 0C0B90FC bf/s */
L_0C0B9100: BLKS(0x0C0B9100u);
	r12 = R32(r11 + 0x28u); UPD(0x0C0B9102u, 1);  /* 0C0B9100 mov.l @(disp,Rm),Rn */
	r3 = 0x40000u; UPD(0x0C0B9104u, 1);  /* 0C0B9102 mov.l @(disp,pc),Rn */
	r12 += r3;  /* 0C0B9104 add Rm,Rn */
	W32(r11 + 0x28u, r12); UPD(0x0C0B9108u, 2);  /* 0C0B9106 mov.l Rm,@(disp,Rn) */
L_0C0B9108: BLKS(0x0C0B9108u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B82CEu, 3); goto L_0C0B82CE; }  /* 0C0B9108 bra */
L_0C0B9110: BLKS(0x0C0B9110u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B90EEu, 3); goto L_0C0B90EE; }  /* 0C0B9110 bra */
L_0C0B9150: BLKS(0x0C0B9150u);
	r6 = 0xC29D454u; UPD(0x0C0B9152u, 1);  /* 0C0B9150 mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0x24u); UPD(0x0C0B9154u, 1);  /* 0C0B9152 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0B9154 tst Rm,Rn */
	if (T) { UPD(0x0C0B9162u, 4); goto L_0C0B9162; }  /* 0C0B9156 bt */
L_0C0B9158: BLKS(0x0C0B9158u);
	r10 = r3;  /* 0C0B9158 mov Rm,Rn */
	r10 += 0x40u;  /* 0C0B915A add #imm,Rn */
	r9 = R32(r10 + 0x30u); UPD(0x0C0B915Eu, 3);  /* 0C0B915C mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0B915E tst Rm,Rn */
	if (!T) { UPD(0x0C0B9166u, 4); goto L_0C0B9166; }  /* 0C0B9160 bf */
L_0C0B9162: BLKS(0x0C0B9162u);
	{ r1 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C0B8A02u, 3); goto L_0C0B8A02; }  /* 0C0B9162 bra */
L_0C0B9166: BLKS(0x0C0B9166u);
	r12 = R32(r11); UPD(0x0C0B9168u, 1);  /* 0C0B9166 mov.l @Rm,Rn */
	r0 = r7;  /* 0C0B9168 mov Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B916Cu, 2);  /* 0C0B916A mov.l @(disp,pc),Rn */
	T = r0 == 0x3Eu;  /* 0C0B916C cmp/eq #imm,r0 */
	r12 |= r1;  /* 0C0B916E or Rm,Rn */
	{ u32 c_ = T; W32(r11, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B9200u, 5); goto L_0C0B9200; } UPD(0x0C0B9174u, 1); goto L_0C0B9174; }  /* 0C0B9170 bt/s */
L_0C0B9174: BLKS(0x0C0B9174u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B9176u, 1);  /* 0C0B9174 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFu; UPD(0x0C0B9178u, 1);  /* 0C0B9176 mov.l @(disp,pc),Rn */
	r9 = r3;  /* 0C0B9178 mov Rm,Rn */
	r4 = 0xF7F7u; UPD(0x0C0B917Cu, 2);  /* 0C0B917A mov.l @(disp,pc),Rn */
	r9 &= r6;  /* 0C0B917C and Rm,Rn */
	T = r9 > r4;  /* 0C0B917E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B91F0u, 5); goto L_0C0B91F0; }  /* 0C0B9180 bt */
L_0C0B9182: BLKS(0x0C0B9182u);
	r10 = 0x808u; UPD(0x0C0B9184u, 1);  /* 0C0B9182 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C0B9184 add Rm,Rn */
	UPD(0x0C0B9186u, 1);
L_0C0B9186: BLKS(0x0C0B9186u);
	r0 = r7;  /* 0C0B9186 mov Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C0B9188 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B91C0u, 5); goto L_0C0B91C0; } UPD(0x0C0B918Eu, 1); goto L_0C0B918E; }  /* 0C0B918A bt/s */
L_0C0B918E: BLKS(0x0C0B918Eu);
	r2 = r7;  /* 0C0B918E mov Rm,Rn */
	r2 += 0xFFFFFFC9u;  /* 0C0B9190 add #imm,Rn */
	W32(r11 + 0xCu, r2); UPD(0x0C0B9194u, 3);  /* 0C0B9192 mov.l Rm,@(disp,Rn) */
	r8 = 0xC29D454u; UPD(0x0C0B9196u, 1);  /* 0C0B9194 mov.l @(disp,pc),Rn */
	r0 = R32(r8 + 0x28u); UPD(0x0C0B9198u, 1);  /* 0C0B9196 mov.l @(disp,Rm),Rn */
	r0 &= 0x3u;  /* 0C0B9198 and #imm,r0 */
	T = r0 == r2;  /* 0C0B919A cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B91B0u, 5); goto L_0C0B91B0; }  /* 0C0B919C bt */
L_0C0B919E: BLKS(0x0C0B919Eu);
	r0 = 0x4u;  /* 0C0B919E mov #imm,Rn */
	r9 = 0xC239494u; UPD(0x0C0B91A2u, 2);  /* 0C0B91A0 mov.l @(disp,pc),Rn */
	r2 |= r0;  /* 0C0B91A2 or Rm,Rn */
	r0 = R32(r9); UPD(0x0C0B91A6u, 2);  /* 0C0B91A4 mov.l @Rm,Rn */
	W32(r11 + 0xCu, r2); UPD(0x0C0B91A8u, 1);  /* 0C0B91A6 mov.l Rm,@(disp,Rn) */
	{ r0 &= 0x2u; /* slot and #imm,r0 */ UPD(0x0C0B902Au, 3); goto L_0C0B902A; }  /* 0C0B91A8 bra */
L_0C0B91B0: BLKS(0x0C0B91B0u);
	r4 = 0xC239494u; UPD(0x0C0B91B2u, 1);  /* 0C0B91B0 mov.l @(disp,pc),Rn */
	r0 = R32(r4); UPD(0x0C0B91B4u, 1);  /* 0C0B91B2 mov.l @Rm,Rn */
	{ r0 &= 0x2u; /* slot and #imm,r0 */ UPD(0x0C0B9066u, 3); goto L_0C0B9066; }  /* 0C0B91B4 bra */
L_0C0B91C0: BLKS(0x0C0B91C0u);
	r5 = 0xC29D454u; UPD(0x0C0B91C2u, 1);  /* 0C0B91C0 mov.l @(disp,pc),Rn */
	r2 = 0xAu;  /* 0C0B91C2 mov #imm,Rn */
	r0 = R32(r5 + 0x28u); UPD(0x0C0B91C6u, 2);  /* 0C0B91C4 mov.l @(disp,Rm),Rn */
	r0 &= 0x3u;  /* 0C0B91C6 and #imm,r0 */
	IF(0x0C0B91C8u); MACL = r0 * r2;  /* 0C0B91C8 mul.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C0B91CCu, 4);  /* 0C0B91CA mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C0B91CEu, 1);  /* 0C0B91CC mov.l @(disp,Rm),Rn */
	IF(0x0C0B91CEu); r3 = MACL;  /* 0C0B91CE sts macl,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B91D2u, 2);  /* 0C0B91D0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B91D2u); r3 <<= 16;  /* 0C0B91D2 shll16 Rn */
	r1 = 0xFFFC0000u; UPD(0x0C0B91D6u, 2);  /* 0C0B91D4 mov.l @(disp,pc),Rn */
	r6 -= r3;  /* 0C0B91D6 sub Rm,Rn */
	r12 = 0xC239494u; UPD(0x0C0B91DAu, 2);  /* 0C0B91D8 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C0B91DA add Rm,Rn */
	r0 = R32(r12); UPD(0x0C0B91DEu, 2);  /* 0C0B91DC mov.l @Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C0B91E0u, 1);  /* 0C0B91DE mov.l Rm,@(disp,Rn) */
	r0 &= 0x2u;  /* 0C0B91E0 and #imm,r0 */
	{ W32(r11 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B90A4u, 4); goto L_0C0B90A4; }  /* 0C0B91E2 bra */
L_0C0B91F0: BLKS(0x0C0B91F0u);
	{ r3 |= r6; /* slot or Rm,Rn */ UPD(0x0C0B9186u, 3); goto L_0C0B9186; }  /* 0C0B91F0 bra */
L_0C0B9200: BLKS(0x0C0B9200u);
	r0 = R32(r6 + 0x28u); UPD(0x0C0B9202u, 1);  /* 0C0B9200 mov.l @(disp,Rm),Rn */
	r2 = 0xAu;  /* 0C0B9202 mov #imm,Rn */
	r0 &= 0x3u;  /* 0C0B9204 and #imm,r0 */
	IF(0x0C0B9206u); MACL = r0 * r2;  /* 0C0B9206 mul.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C0B920Au, 5);  /* 0C0B9208 mov.l @(disp,Rm),Rn */
	IF(0x0C0B920Au); r3 = MACL;  /* 0C0B920A sts macl,Rn */
	IF(0x0C0B920Cu); r3 <<= 16;  /* 0C0B920C shll16 Rn */
	r6 -= r3;  /* 0C0B920E sub Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C0B9212u, 4);  /* 0C0B9210 mov.l Rm,@(disp,Rn) */
	r13 = 0xC2B039Cu; UPD(0x0C0B9214u, 1);  /* 0C0B9212 mov.l @(disp,pc),Rn */
	r3 = R32(r11 + 0x34u); UPD(0x0C0B9216u, 1);  /* 0C0B9214 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFF0000u; UPD(0x0C0B9218u, 1);  /* 0C0B9216 mov.l @(disp,pc),Rn */
	r1 = R32(r13); UPD(0x0C0B921Au, 1);  /* 0C0B9218 mov.l @Rm,Rn */
	r3 &= r7;  /* 0C0B921A and Rm,Rn */
	{ IF(0x0C0B921Eu); r1 <<= 2; /* slot shll2 Rn */ UPD(0x0C0B86BEu, 4); goto L_0C0B86BE; }  /* 0C0B921C bra */
L_0C0B9220: BLKS(0x0C0B9220u);
	r12 = 0xC29D1D8u; UPD(0x0C0B9222u, 1);  /* 0C0B9220 mov.l @(disp,pc),Rn */
	r10 = 0x7u;  /* 0C0B9222 mov #imm,Rn */
	r0 = R32(r12 + 0x4u); UPD(0x0C0B9226u, 2);  /* 0C0B9224 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFFFFF4u;  /* 0C0B9226 mov #imm,Rn */
	r0 &= r10;  /* 0C0B9228 and Rm,Rn */
	r5 = 0xC1740D0u; UPD(0x0C0B922Cu, 3);  /* 0C0B922A mov.l @(disp,pc),Rn */
	IF(0x0C0B922Cu); r0 <<= 2;  /* 0C0B922C shll2 Rn */
	IF(0x0C0B922Eu); r4 = R32(r0 + r5); UPD(0x0C0B9230u, 2);  /* 0C0B922E mov.l @(r0,Rm),Rn */
	r1 = 0x4u;  /* 0C0B9230 mov #imm,Rn */
	IF(0x0C0B9232u); ARG0(0x449Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0B9232 shad Rm,Rn */
	r8 = 0u - r4;  /* 0C0B9234 neg Rm,Rn */
	r8 += 0x40u;  /* 0C0B9236 add #imm,Rn */
	IF(0x0C0B9238u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0B9238 shld Rm,Rn */
	r0 = 0x88888889u; UPD(0x0C0B923Cu, 6);  /* 0C0B923A mov.l @(disp,pc),Rn */
	r13 = 0xFFFFFFFCu;  /* 0C0B923C mov #imm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B923E dmuls.l Rm,Rn */
	r6 = 0x99u; UPD(0x0C0B9242u, 4);  /* 0C0B9240 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0B9242 mov Rm,Rn */
	IF(0x0C0B9244u); r7 = MACH;  /* 0C0B9244 sts mach,Rn */
	r6 += r11;  /* 0C0B9246 add Rm,Rn */
	r0 += r7;  /* 0C0B9248 add Rm,Rn */
	IF(0x0C0B924Au); T = r8 >> 31; r8 <<= 1;  /* 0C0B924A shll Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B924Eu, 6);  /* 0C0B924C mov.b @Rm,Rn */
	IF(0x0C0B924Eu); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B924E shad Rm,Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0B9250 subc Rm,Rn */
	r0 -= r8;  /* 0C0B9252 sub Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0B9254 extu.b Rm,Rn */
	r0 -= r3;  /* 0C0B9256 sub Rm,Rn */
	IF(0x0C0B9258u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B9258 shar Rn */
	IF(0x0C0B925Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B925A shar Rn */
	r0 |= 0x1u;  /* 0C0B925C or #imm,r0 */
	r0 += r2;  /* 0C0B925E add Rm,Rn */
	W8(r6, r0); UPD(0x0C0B9262u, 10);  /* 0C0B9260 mov.b Rm,@Rn */
	r11 = 0x700u; UPD(0x0C0B9264u, 1);  /* 0C0B9262 mov.w @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C0B9264 extu.b Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0B9266 add #imm,Rn */
	r1 = 0xC1E9C3Au; UPD(0x0C0B926Au, 3);  /* 0C0B9268 mov.l @(disp,pc),Rn */
	r0 |= r11;  /* 0C0B926A or Rm,Rn */
	UPD(0x0C0B926Cu, 1);
L_0C0B926C: BLKS(0x0C0B926Cu);
	{ W16(r1, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0B82CCu, 3); goto L_0C0B82CC; }  /* 0C0B926C bra */
L_0C0B9270: BLKS(0x0C0B9270u);
	r12 = 0xC29D454u; UPD(0x0C0B9272u, 1);  /* 0C0B9270 mov.l @(disp,pc),Rn */
	r10 = 0x7u;  /* 0C0B9272 mov #imm,Rn */
	r0 = R32(r12 + 0x28u); UPD(0x0C0B9276u, 2);  /* 0C0B9274 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFFFFF4u;  /* 0C0B9276 mov #imm,Rn */
	r0 &= r10;  /* 0C0B9278 and Rm,Rn */
	r5 = 0xC1740D0u; UPD(0x0C0B927Cu, 3);  /* 0C0B927A mov.l @(disp,pc),Rn */
	IF(0x0C0B927Cu); r0 <<= 2;  /* 0C0B927C shll2 Rn */
	IF(0x0C0B927Eu); r4 = R32(r0 + r5); UPD(0x0C0B9280u, 2);  /* 0C0B927E mov.l @(r0,Rm),Rn */
	r1 = 0x4u;  /* 0C0B9280 mov #imm,Rn */
	IF(0x0C0B9282u); ARG0(0x449Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0B9282 shad Rm,Rn */
	r8 = 0u - r4;  /* 0C0B9284 neg Rm,Rn */
	r8 += 0x40u;  /* 0C0B9286 add #imm,Rn */
	IF(0x0C0B9288u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0B9288 shld Rm,Rn */
	r0 = 0x88888889u; UPD(0x0C0B928Cu, 6);  /* 0C0B928A mov.l @(disp,pc),Rn */
	r13 = 0xFFFFFFFCu;  /* 0C0B928C mov #imm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B928E dmuls.l Rm,Rn */
	r6 = 0x99u; UPD(0x0C0B9292u, 4);  /* 0C0B9290 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0B9292 mov Rm,Rn */
	IF(0x0C0B9294u); r7 = MACH;  /* 0C0B9294 sts mach,Rn */
	r6 += r11;  /* 0C0B9296 add Rm,Rn */
	r0 += r7;  /* 0C0B9298 add Rm,Rn */
	IF(0x0C0B929Au); T = r8 >> 31; r8 <<= 1;  /* 0C0B929A shll Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B929Eu, 6);  /* 0C0B929C mov.b @Rm,Rn */
	IF(0x0C0B929Eu); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B929E shad Rm,Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0B92A0 subc Rm,Rn */
	r0 -= r8;  /* 0C0B92A2 sub Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0B92A4 extu.b Rm,Rn */
	r0 -= r3;  /* 0C0B92A6 sub Rm,Rn */
	IF(0x0C0B92A8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92A8 shar Rn */
	IF(0x0C0B92AAu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92AA shar Rn */
	r0 |= 0x1u;  /* 0C0B92AC or #imm,r0 */
	r0 += r2;  /* 0C0B92AE add Rm,Rn */
	W8(r6, r0); UPD(0x0C0B92B2u, 10);  /* 0C0B92B0 mov.b Rm,@Rn */
	r11 = 0x700u; UPD(0x0C0B92B4u, 1);  /* 0C0B92B2 mov.w @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C0B92B4 extu.b Rm,Rn */
	r1 = 0xC1E9C4Eu; UPD(0x0C0B92B8u, 2);  /* 0C0B92B6 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0B92B8 add #imm,Rn */
	{ r0 |= r11; /* slot or Rm,Rn */ UPD(0x0C0B926Cu, 4); goto L_0C0B926C; }  /* 0C0B92BA bra */
L_0C0B92C0: BLKS(0x0C0B92C0u);
	r10 = 0xC29D1D8u; UPD(0x0C0B92C2u, 1);  /* 0C0B92C0 mov.l @(disp,pc),Rn */
	r1 = 0x7u;  /* 0C0B92C2 mov #imm,Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C0B92C6u, 2);  /* 0C0B92C4 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFFFFF4u;  /* 0C0B92C6 mov #imm,Rn */
	r0 &= r1;  /* 0C0B92C8 and Rm,Rn */
	r5 = 0xC1740D0u; UPD(0x0C0B92CCu, 3);  /* 0C0B92CA mov.l @(disp,pc),Rn */
	IF(0x0C0B92CCu); r0 <<= 2;  /* 0C0B92CC shll2 Rn */
	IF(0x0C0B92CEu); r6 = R32(r0 + r5); UPD(0x0C0B92D0u, 2);  /* 0C0B92CE mov.l @(r0,Rm),Rn */
	r4 = 0x4u;  /* 0C0B92D0 mov #imm,Rn */
	IF(0x0C0B92D2u); ARG0(0x469Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C0B92D2 shad Rm,Rn */
	r7 = 0xFFFFFE00u; UPD(0x0C0B92D6u, 3);  /* 0C0B92D4 mov.w @(disp,pc),Rn */
	IF(0x0C0B92D6u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0B92D6 shld Rm,Rn */
	r13 = 0x2AAAAAABu; UPD(0x0C0B92DAu, 2);  /* 0C0B92D8 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0B92DA add Rm,Rn */
	{ s64 r_ = (s64)(s32)r6 * (s64)(s32)r13; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B92DC dmuls.l Rm,Rn */
	r12 = 0x99u; UPD(0x0C0B92E0u, 4);  /* 0C0B92DE mov.w @(disp,pc),Rn */
	IF(0x0C0B92E0u); r0 = MACH;  /* 0C0B92E0 sts mach,Rn */
	IF(0x0C0B92E2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92E2 shar Rn */
	r12 += r11;  /* 0C0B92E4 add Rm,Rn */
	IF(0x0C0B92E6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92E6 shar Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B92EAu, 5);  /* 0C0B92E8 mov.b @Rm,Rn */
	IF(0x0C0B92EAu); T = r6 >> 31; r6 <<= 1;  /* 0C0B92EA shll Rn */
	{ u32 a_ = r6, t_ = a_ - r6, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r6 = r_; }  /* 0C0B92EC subc Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0B92EE extu.b Rm,Rn */
	r0 -= r6;  /* 0C0B92F0 sub Rm,Rn */
	r0 -= r3;  /* 0C0B92F2 sub Rm,Rn */
	IF(0x0C0B92F4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92F4 shar Rn */
	IF(0x0C0B92F6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B92F6 shar Rn */
	r0 |= 0x1u;  /* 0C0B92F8 or #imm,r0 */
	r0 += r2;  /* 0C0B92FA add Rm,Rn */
	r10 = r0 & 0xFF;  /* 0C0B92FC extu.b Rm,Rn */
	r2 = r10;  /* 0C0B92FE mov Rm,Rn */
	r11 = 0x700u; UPD(0x0C0B9302u, 12);  /* 0C0B9300 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B9302 add #imm,Rn */
	W8(r12, r0); UPD(0x0C0B9306u, 2);  /* 0C0B9304 mov.b Rm,@Rn */
	r2 |= r11;  /* 0C0B9306 or Rm,Rn */
	r1 = 0xC1E9C44u; UPD(0x0C0B930Au, 2);  /* 0C0B9308 mov.l @(disp,pc),Rn */
L_0C0B930A: BLKS(0x0C0B930Au);
	W16(r1, r2); UPD(0x0C0B930Cu, 1);  /* 0C0B930A mov.w Rm,@Rn */
L_0C0B930C: BLKS(0x0C0B930Cu);
	r13 = 0xFFFFEFBCu; UPD(0x0C0B930Eu, 1);  /* 0C0B930C mov.w @(disp,pc),Rn */
	IF(0x0C0B930Eu); { u32 tv_ = (r13 + 0x0C0B9312u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B82CEu: goto L_0C0B82CE; default: JUMPD(tv_); } }  /* 0C0B930E braf Rn */
L_0C0B9360: BLKS(0x0C0B9360u);
	r12 = 0xC29D454u; UPD(0x0C0B9362u, 1);  /* 0C0B9360 mov.l @(disp,pc),Rn */
	r10 = 0x7u;  /* 0C0B9362 mov #imm,Rn */
	r0 = R32(r12 + 0x28u); UPD(0x0C0B9366u, 2);  /* 0C0B9364 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFFFFF4u;  /* 0C0B9366 mov #imm,Rn */
	r0 &= r10;  /* 0C0B9368 and Rm,Rn */
	r5 = 0xC1740D0u; UPD(0x0C0B936Cu, 3);  /* 0C0B936A mov.l @(disp,pc),Rn */
	IF(0x0C0B936Cu); r0 <<= 2;  /* 0C0B936C shll2 Rn */
	IF(0x0C0B936Eu); r6 = R32(r0 + r5); UPD(0x0C0B9370u, 2);  /* 0C0B936E mov.l @(r0,Rm),Rn */
	r4 = 0x4u;  /* 0C0B9370 mov #imm,Rn */
	IF(0x0C0B9372u); ARG0(0x469Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C0B9372 shad Rm,Rn */
	r7 = 0xFFFFFE00u; UPD(0x0C0B9376u, 3);  /* 0C0B9374 mov.w @(disp,pc),Rn */
	IF(0x0C0B9376u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0B9376 shld Rm,Rn */
	r13 = 0x2AAAAAABu; UPD(0x0C0B937Au, 2);  /* 0C0B9378 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0B937A add Rm,Rn */
	{ s64 r_ = (s64)(s32)r6 * (s64)(s32)r13; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B937C dmuls.l Rm,Rn */
	r12 = 0x99u; UPD(0x0C0B9380u, 4);  /* 0C0B937E mov.w @(disp,pc),Rn */
	IF(0x0C0B9380u); r0 = MACH;  /* 0C0B9380 sts mach,Rn */
	IF(0x0C0B9382u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B9382 shar Rn */
	r12 += r11;  /* 0C0B9384 add Rm,Rn */
	IF(0x0C0B9386u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B9386 shar Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B938Au, 5);  /* 0C0B9388 mov.b @Rm,Rn */
	IF(0x0C0B938Au); T = r6 >> 31; r6 <<= 1;  /* 0C0B938A shll Rn */
	{ u32 a_ = r6, t_ = a_ - r6, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r6 = r_; }  /* 0C0B938C subc Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0B938E extu.b Rm,Rn */
	r0 -= r6;  /* 0C0B9390 sub Rm,Rn */
	r0 -= r3;  /* 0C0B9392 sub Rm,Rn */
	IF(0x0C0B9394u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B9394 shar Rn */
	IF(0x0C0B9396u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B9396 shar Rn */
	r0 |= 0x1u;  /* 0C0B9398 or #imm,r0 */
	r0 += r2;  /* 0C0B939A add Rm,Rn */
	W8(r12, r0); UPD(0x0C0B939Eu, 10);  /* 0C0B939C mov.b Rm,@Rn */
	r11 = r0 & 0xFF;  /* 0C0B939E extu.b Rm,Rn */
	r2 = r11;  /* 0C0B93A0 mov Rm,Rn */
	r0 = 0x700u; UPD(0x0C0B93A4u, 3);  /* 0C0B93A2 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B93A4 add #imm,Rn */
	r1 = 0xC1E9C58u; UPD(0x0C0B93A8u, 2);  /* 0C0B93A6 mov.l @(disp,pc),Rn */
	{ r2 |= r0; /* slot or Rm,Rn */ UPD(0x0C0B930Au, 3); goto L_0C0B930A; }  /* 0C0B93A8 bra */
L_0C0B93B0: BLKS(0x0C0B93B0u);
	r3 = 0xC29D1D8u; UPD(0x0C0B93B2u, 1);  /* 0C0B93B0 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0B93B4u, 1);  /* 0C0B93B2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B93B4 tst Rm,Rn */
	if (T) { UPD(0x0C0B944Au, 4); goto L_0C0B944A; }  /* 0C0B93B6 bt */
L_0C0B93B8: BLKS(0x0C0B93B8u);
	r5 = R32(r11); UPD(0x0C0B93BAu, 1);  /* 0C0B93B8 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0B93BA mov Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0B93BEu, 2);  /* 0C0B93BC mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C0B93BE or Rm,Rn */
	W32(r11, r5); UPD(0x0C0B93C2u, 2);  /* 0C0B93C0 mov.l Rm,@Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B93C4u, 1);  /* 0C0B93C2 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0B93C6u, 1);  /* 0C0B93C4 mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0B93C6 and #imm,r0 */
	IF(0x0C0B93C8u); { u32 t_ = r13; PR = 0x0C0B93CCu; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B93CCu); }  /* 0C0B93C8 jsr @Rn */
L_0C0B93CC: BLKS(0x0C0B93CCu);
	r0 = R32(r11 + 0x8u); UPD(0x0C0B93CEu, 1);  /* 0C0B93CC mov.l @(disp,Rm),Rn */
	T = r0 == 0x47u;  /* 0C0B93CE cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B930Cu, 4); goto L_0C0B930C; }  /* 0C0B93D0 bf */
L_0C0B93D2: BLKS(0x0C0B93D2u);
	r3 = 0x1Fu;  /* 0C0B93D2 mov #imm,Rn */
	r8 = 0xC2B039Cu; UPD(0x0C0B93D6u, 2);  /* 0C0B93D4 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C0B93D8u, 1);  /* 0C0B93D6 mov.l @Rm,Rn */
	r0 &= r3;  /* 0C0B93D8 and Rm,Rn */
	UPD(0x0C0B93DAu, 1);
L_0C0B93DA: BLKS(0x0C0B93DAu);
	IF(0x0C0B93DAu); r0 <<= 8;  /* 0C0B93DA shll8 Rn */
	r2 = 0xC0C4468u; UPD(0x0C0B93DEu, 2);  /* 0C0B93DC mov.l @(disp,pc),Rn */
	IF(0x0C0B93DEu); r0 >>= 2;  /* 0C0B93DE shlr2 Rn */
	IF(0x0C0B93E0u); r8 = R32(r0 + r2); UPD(0x0C0B93E2u, 2);  /* 0C0B93E0 mov.l @(r0,Rm),Rn */
	r6 = 0xFFFFFFF9u;  /* 0C0B93E2 mov #imm,Rn */
	r1 = 0xE0u; UPD(0x0C0B93E6u, 2);  /* 0C0B93E4 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B93E8u); ARG0(0x486Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0B8C62u, 3); goto L_0C0B8C62; }  /* 0C0B93E6 bra */
L_0C0B93F0: BLKS(0x0C0B93F0u);
	r3 = 0xC29D454u; UPD(0x0C0B93F2u, 1);  /* 0C0B93F0 mov.l @(disp,pc),Rn */
	r4 = R32(r3 + 0x24u); UPD(0x0C0B93F4u, 1);  /* 0C0B93F2 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0B93F4 tst Rm,Rn */
	if (T) { UPD(0x0C0B944Au, 4); goto L_0C0B944A; }  /* 0C0B93F6 bt */
L_0C0B93F8: BLKS(0x0C0B93F8u);
	r0 = R32(r11); UPD(0x0C0B93FAu, 1);  /* 0C0B93F8 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0B93FA mov Rm,Rn */
	r10 = 0x40000000u; UPD(0x0C0B93FEu, 2);  /* 0C0B93FC mov.l @(disp,pc),Rn */
	r0 |= r10;  /* 0C0B93FE or Rm,Rn */
	W32(r11, r0); UPD(0x0C0B9402u, 2);  /* 0C0B9400 mov.l Rm,@Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B9404u, 1);  /* 0C0B9402 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0B9406u, 1);  /* 0C0B9404 mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0B9406 and #imm,r0 */
	IF(0x0C0B9408u); { u32 t_ = r9; PR = 0x0C0B940Cu; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B940Cu); }  /* 0C0B9408 jsr @Rn */
L_0C0B940C: BLKS(0x0C0B940Cu);
	r0 = R32(r11 + 0x8u); UPD(0x0C0B940Eu, 1);  /* 0C0B940C mov.l @(disp,Rm),Rn */
	T = r0 == 0x48u;  /* 0C0B940E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B94BEu, 4); goto L_0C0B94BE; }  /* 0C0B9410 bf */
L_0C0B9412: BLKS(0x0C0B9412u);
	r12 = 0x1Fu;  /* 0C0B9412 mov #imm,Rn */
	r7 = 0xC2B039Cu; UPD(0x0C0B9416u, 2);  /* 0C0B9414 mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0B9418u, 1);  /* 0C0B9416 mov.l @Rm,Rn */
	{ r0 &= r12; /* slot and Rm,Rn */ UPD(0x0C0B93DAu, 3); goto L_0C0B93DA; }  /* 0C0B9418 bra */
L_0C0B9420: BLKS(0x0C0B9420u);
	r8 = 0x2A0u; UPD(0x0C0B9422u, 1);  /* 0C0B9420 mov.w @(disp,pc),Rn */
	IF(0x0C0B9422u); MACL = r7 * r8;  /* 0C0B9422 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C0B9426u, 3);  /* 0C0B9424 mov.l @(disp,pc),Rn */
	IF(0x0C0B9426u); r12 = MACL;  /* 0C0B9426 sts macl,Rn */
	r0 = 0xFFFF4060u; UPD(0x0C0B942Au, 2);  /* 0C0B9428 mov.l @(disp,pc),Rn */
	r10 += r12;  /* 0C0B942A add Rm,Rn */
	IF(0x0C0B942Cu); r4 = R32(r0 + r10); UPD(0x0C0B942Eu, 2);  /* 0C0B942C mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0B942E tst Rm,Rn */
	if (T) { UPD(0x0C0B94BEu, 4); goto L_0C0B94BE; }  /* 0C0B9430 bt */
L_0C0B9432: BLKS(0x0C0B9432u);
	IF(0x0C0B9432u); r7 <<= 2;  /* 0C0B9432 shll2 Rn */
	r0 = 0xFFFFFF48u; UPD(0x0C0B9436u, 2);  /* 0C0B9434 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0B9436 add Rm,Rn */
	{ IF(0x0C0B943Au); r1 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C0B8FAEu, 4); goto L_0C0B8FAE; }  /* 0C0B9438 bra */
L_0C0B9440: BLKS(0x0C0B9440u);
	r0 = 0xFFFF0000u; UPD(0x0C0B9442u, 1);  /* 0C0B9440 mov.l @(disp,pc),Rn */
	r5 = 0x2040000u; UPD(0x0C0B9444u, 1);  /* 0C0B9442 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C0B9444 and Rm,Rn */
	T = r2 == r5;  /* 0C0B9446 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B944Eu, 5); goto L_0C0B944E; }  /* 0C0B9448 bt */
L_0C0B944A: BLKS(0x0C0B944Au);
	{ r1 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C0B8A02u, 3); goto L_0C0B8A02; }  /* 0C0B944A bra */
L_0C0B944E: BLKS(0x0C0B944Eu);
	r1 = R32(r3 + 0x34u); UPD(0x0C0B9450u, 1);  /* 0C0B944E mov.l @(disp,Rm),Rn */
	r1 &= r8;  /* 0C0B9450 and Rm,Rn */
	{ r1 |= r2; /* slot or Rm,Rn */ UPD(0x0C0B899Eu, 4); goto L_0C0B899E; }  /* 0C0B9452 bra */
L_0C0B9460: BLKS(0x0C0B9460u);
	r5 = 0xFFu; UPD(0x0C0B9462u, 1);  /* 0C0B9460 mov.w @(disp,pc),Rn */
	r0 = 0xFFFFEE18u; UPD(0x0C0B9464u, 1);  /* 0C0B9462 mov.w @(disp,pc),Rn */
	IF(0x0C0B9464u); { u32 tv_ = (r0 + 0x0C0B9468u); u32 t_ = PHYS(tv_); r2 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B8280u: goto L_0C0B8280; default: JUMPD(tv_); } }  /* 0C0B9464 braf Rn */
L_0C0B9470: BLKS(0x0C0B9470u);
	r0 = 0xFFu; UPD(0x0C0B9472u, 1);  /* 0C0B9470 mov.w @(disp,pc),Rn */
	r6 = 0xFFFFEDDEu; UPD(0x0C0B9474u, 1);  /* 0C0B9472 mov.w @(disp,pc),Rn */
	IF(0x0C0B9474u); { u32 tv_ = (r6 + 0x0C0B9478u); u32 t_ = PHYS(tv_); r2 += r0; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B8256u: goto L_0C0B8256; default: JUMPD(tv_); } }  /* 0C0B9474 braf Rn */
L_0C0B9480: BLKS(0x0C0B9480u);
	r6 = 0x9Fu; UPD(0x0C0B9482u, 1);  /* 0C0B9480 mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C0B9482 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B9486u, 2);  /* 0C0B9484 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C0B9486 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B9488 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9550u, 5); goto L_0C0B9550; } goto L_0C0B948E; }  /* 0C0B948A bt/s */
L_0C0B948E: BLKS(0x0C0B948Eu);
	T = (s32)r0 > (s32)r2;  /* 0C0B948E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B9520u, 5); goto L_0C0B9520; } goto L_0C0B9494; }  /* 0C0B9490 bt/s */
L_0C0B9494: BLKS(0x0C0B9494u);
	r3 = r11;  /* 0C0B9494 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B9496 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B94ACu, 6); goto L_0C0B94AC; } goto L_0C0B949C; }  /* 0C0B9498 bf/s */
L_0C0B949C: BLKS(0x0C0B949Cu);
	r3 = r11;  /* 0C0B949C mov Rm,Rn */
	r3 += 0x40u;  /* 0C0B949E add #imm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0B94A2u, 4);  /* 0C0B94A0 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B94A2 tst Rm,Rn */
	if (!T) { UPD(0x0C0B94D0u, 4); goto L_0C0B94D0; }  /* 0C0B94A4 bf */
L_0C0B94A6: BLKS(0x0C0B94A6u);
	r8 = r7;  /* 0C0B94A6 mov Rm,Rn */
	r8 += 0x1u;  /* 0C0B94A8 add #imm,Rn */
	W8(r6, r8); UPD(0x0C0B94ACu, 3);  /* 0C0B94AA mov.b Rm,@Rn */
L_0C0B94AC: BLKS(0x0C0B94ACu);
	r5 = R32(r11 + 0x2Cu); UPD(0x0C0B94AEu, 1);  /* 0C0B94AC mov.l @(disp,Rm),Rn */
	r9 = 0xC3C4048u; UPD(0x0C0B94B0u, 1);  /* 0C0B94AE mov.l @(disp,pc),Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C0B94B2u, 1);  /* 0C0B94B0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r11 + 0x30u); UPD(0x0C0B94B4u, 1);  /* 0C0B94B2 mov.l @(disp,Rm),Rn */
	r13 = R32(r9); UPD(0x0C0B94B6u, 1);  /* 0C0B94B4 mov.l @Rm,Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C0B94B8u, 1);  /* 0C0B94B6 mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C0B94B8 add Rm,Rn */
	r13 += r4;  /* 0C0B94BA add Rm,Rn */
	W32(r11 + 0x28u, r13); UPD(0x0C0B94BEu, 3);  /* 0C0B94BC mov.l Rm,@(disp,Rn) */
L_0C0B94BE: BLKS(0x0C0B94BEu);
	r13 = 0xFFFFEE0Au; UPD(0x0C0B94C0u, 1);  /* 0C0B94BE mov.w @(disp,pc),Rn */
	IF(0x0C0B94C0u); { u32 tv_ = (r13 + 0x0C0B94C4u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B82CEu: goto L_0C0B82CE; default: JUMPD(tv_); } }  /* 0C0B94C0 braf Rn */
L_0C0B94D0: BLKS(0x0C0B94D0u);
	r6 = 0xFFF40000u; UPD(0x0C0B94D2u, 1);  /* 0C0B94D0 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0B94D2 add Rm,Rn */
	{ W32(r3 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B94ACu, 4); goto L_0C0B94AC; }  /* 0C0B94D4 bra */
L_0C0B9520: BLKS(0x0C0B9520u);
	r3 = r11;  /* 0C0B9520 mov Rm,Rn */
	{ u32 c_ = !T; r3 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B94ACu, 4); goto L_0C0B94AC; } goto L_0C0B9526; }  /* 0C0B9522 bf/s */
L_0C0B9526: BLKS(0x0C0B9526u);
	r3 = R32(r11 + 0x34u); UPD(0x0C0B9528u, 2);  /* 0C0B9526 mov.l @(disp,Rm),Rn */
	r2 = 0xFF00u; UPD(0x0C0B952Au, 1);  /* 0C0B9528 mov.l @(disp,pc),Rn */
	r7 = 0x807u; UPD(0x0C0B952Cu, 1);  /* 0C0B952A mov.w @(disp,pc),Rn */
	r2 &= r3;  /* 0C0B952C and Rm,Rn */
	T = r2 > r7;  /* 0C0B952E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B9540u, 5); goto L_0C0B9540; }  /* 0C0B9530 bt */
L_0C0B9532: BLKS(0x0C0B9532u);
	r8 = 0x0u;  /* 0C0B9532 mov #imm,Rn */
	W32(r11, r8); UPD(0x0C0B9536u, 2);  /* 0C0B9534 mov.l Rm,@Rn */
L_0C0B9536: BLKS(0x0C0B9536u);
	r3 = r11;  /* 0C0B9536 mov Rm,Rn */
	{ r3 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C0B94ACu, 4); goto L_0C0B94AC; }  /* 0C0B9538 bra */
L_0C0B9540: BLKS(0x0C0B9540u);
	r6 = 0xFFFFF7F8u; UPD(0x0C0B9542u, 1);  /* 0C0B9540 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0B9542 add Rm,Rn */
	{ W32(r11 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9536u, 4); goto L_0C0B9536; }  /* 0C0B9544 bra */
L_0C0B9550: BLKS(0x0C0B9550u);
	r0 = 0x99u; UPD(0x0C0B9552u, 1);  /* 0C0B9550 mov.w @(disp,pc),Rn */
	r3 = 0x3Bu;  /* 0C0B9552 mov #imm,Rn */
	IF(0x0C0B9554u); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B9556u, 2);  /* 0C0B9554 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B9556 add #imm,Rn */
	r13 = r4 & 0xFF;  /* 0C0B9558 extu.b Rm,Rn */
	T = r13 > r3;  /* 0C0B955A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B955Eu); W8(r0 + r11, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B9536u, 6); goto L_0C0B9536; } UPD(0x0C0B9560u, 1); goto L_0C0B9560; }  /* 0C0B955C bf/s */
L_0C0B9560: BLKS(0x0C0B9560u);
	r10 = 0x0u;  /* 0C0B9560 mov #imm,Rn */
	IF(0x0C0B9562u); W8(r0 + r11, r10); UPD(0x0C0B9564u, 2);  /* 0C0B9562 mov.b Rm,@(r0,Rn) */
	r0 += 0x4u;  /* 0C0B9564 add #imm,Rn */
	IF(0x0C0B9566u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B9568u, 2);  /* 0C0B9566 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0B9568 add #imm,Rn */
	IF(0x0C0B956Au); W8(r0 + r11, r5); UPD(0x0C0B956Cu, 2);  /* 0C0B956A mov.b Rm,@(r0,Rn) */
	r9 = r5 & 0xFF;  /* 0C0B956C extu.b Rm,Rn */
	r0 = 0x7u;  /* 0C0B956E mov #imm,Rn */
	T = r9 > r0;  /* 0C0B9570 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B9536u, 6); goto L_0C0B9536; }  /* 0C0B9572 bf */
L_0C0B9574: BLKS(0x0C0B9574u);
	r12 = r7;  /* 0C0B9574 mov Rm,Rn */
	r12 += 0x1u;  /* 0C0B9576 add #imm,Rn */
	{ W8(r6, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C0B9536u, 5); goto L_0C0B9536; }  /* 0C0B9578 bra */
}

void blk_f_0C0B9590(sh3_t *c)
{
	LOCALS;
L_0C0B9590: BLKS(0x0C0B9590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9592u, 1);  /* 0C0B9590 mov.l Rm,@-Rn */
	r4 = 0x48u;  /* 0C0B9592 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9596u, 2);  /* 0C0B9594 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9598u, 1);  /* 0C0B9596 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B959Au, 1);  /* 0C0B9598 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B959Cu, 1);  /* 0C0B959A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B959Eu, 1);  /* 0C0B959C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B95A0u, 1);  /* 0C0B959E mov.l Rm,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0B95A2u, 1);  /* 0C0B95A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B95A2u); r15 -= 4; W32(r15, PR); UPD(0x0C0B95A4u, 1);  /* 0C0B95A2 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C0B95A6u, 1);  /* 0C0B95A4 mov.l @(disp,pc),Rn */
	IF(0x0C0B95A6u); { u32 t_ = r8; PR = 0x0C0B95AAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0B95AAu); }  /* 0C0B95A6 jsr @Rn */
L_0C0B95AA: BLKS(0x0C0B95AAu);
	T = (r0 & r0) == 0;  /* 0C0B95AA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B95D0u, 4); goto L_0C0B95D0; } UPD(0x0C0B95B0u, 1); goto L_0C0B95B0; }  /* 0C0B95AC bf/s */
L_0C0B95B0: BLKS(0x0C0B95B0u);
	r15 = r14;  /* 0C0B95B0 mov Rm,Rn */
	IF(0x0C0B95B2u); PR = R32(r15); r15 += 4; UPD(0x0C0B95B4u, 2);  /* 0C0B95B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B95B6u, 1);  /* 0C0B95B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B95B8u, 1);  /* 0C0B95B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B95BAu, 1);  /* 0C0B95B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B95BCu, 1);  /* 0C0B95BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B95BEu, 1);  /* 0C0B95BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B95C0u, 1);  /* 0C0B95BE mov.l @Rm+,Rn */
	IF(0x0C0B95C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B95C0 rts */
L_0C0B95D0: BLKS(0x0C0B95D0u);
	r8 = 0xC071740u; UPD(0x0C0B95D2u, 1);  /* 0C0B95D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B95D2u); { u32 t_ = r8; PR = 0x0C0B95D6u; r4 = 0x4Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0B95D6u); }  /* 0C0B95D2 jsr @Rn */
L_0C0B95D6: BLKS(0x0C0B95D6u);
	T = (r0 & r0) == 0;  /* 0C0B95D6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B95B0u, 4); goto L_0C0B95B0; } goto L_0C0B95DC; }  /* 0C0B95D8 bt/s */
L_0C0B95DC: BLKS(0x0C0B95DCu);
	r13 = 0xC28EDFCu; UPD(0x0C0B95DEu, 2);  /* 0C0B95DC mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0B95DE mov #imm,Rn */
	r9 = 0xC1EA698u; UPD(0x0C0B95E2u, 2);  /* 0C0B95E0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0B95E2 mov #imm,Rn */
	r12 = r13;  /* 0C0B95E4 mov Rm,Rn */
	IF(0x0C0B95E6u); ;  /* 0C0B95E6 nop */
	UPD(0x0C0B95E8u, 3);
L_0C0B95E8: BLKS(0x0C0B95E8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r4 = v_; } UPD(0x0C0B95EAu, 1);  /* 0C0B95E8 mov.w @Rm+,Rn */
	r0 = 0x48u;  /* 0C0B95EA mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0B95EEu, 2);  /* 0C0B95EC mov.w @(disp,pc),Rn */
	IF(0x0C0B95EEu); MACL = r4 * r6;  /* 0C0B95EE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B95F2u, 3);  /* 0C0B95F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B95F2u); r8 = MACL;  /* 0C0B95F2 sts macl,Rn */
	r3 = 0xC0000000u; UPD(0x0C0B95F6u, 2);  /* 0C0B95F4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0B95F6 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0B95FAu, 2);  /* 0C0B95F8 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B95FCu, 1);  /* 0C0B95FA mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C0B95FC add #imm,Rn */
	W16(r8, r2); UPD(0x0C0B9600u, 2);  /* 0C0B95FE mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C0B9600 add #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0B9604u, 2);  /* 0C0B9602 mov.l Rm,@(disp,Rn) */
	r0 = R32(r9); UPD(0x0C0B9606u, 1);  /* 0C0B9604 mov.l @Rm,Rn */
	T = r0 == 0xCu;  /* 0C0B9606 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x49u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9690u, 4); goto L_0C0B9690; } UPD(0x0C0B960Cu, 1); goto L_0C0B960C; }  /* 0C0B9608 bt/s */
L_0C0B960C: BLKS(0x0C0B960Cu);
	W32(r8 + 0x8u, r0); UPD(0x0C0B960Eu, 1);  /* 0C0B960C mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C0B960E add #imm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0B9612u, 2);  /* 0C0B9610 mov.l @(disp,pc),Rn */
	IF(0x0C0B9612u); { u32 t_ = r0; PR = 0x0C0B9616u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0B9616u); }  /* 0C0B9612 jsr @Rn */
L_0C0B9616: BLKS(0x0C0B9616u);
	r3 = R32(r9 + 0x4u); UPD(0x0C0B9618u, 1);  /* 0C0B9616 mov.l @(disp,Rm),Rn */
	r8 += 0x5Cu;  /* 0C0B9618 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0B961Cu, 2);  /* 0C0B961A mov.l Rm,@Rn */
	r8 += 0xFFFFFFA4u;  /* 0C0B961C add #imm,Rn */
	r4 = R32(r9 + 0x8u); UPD(0x0C0B9620u, 2);  /* 0C0B961E mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C0B9620 mov Rm,Rn */
	r7 += 0x60u;  /* 0C0B9622 add #imm,Rn */
	W32(r7, r4); UPD(0x0C0B9626u, 3);  /* 0C0B9624 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0B9626 mov Rm,Rn */
	r8 += 0x68u;  /* 0C0B9628 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0B962Cu, 3);  /* 0C0B962A mov.l Rm,@Rn */
	r0 += 0x64u;  /* 0C0B962C add #imm,Rn */
	W32(r0, r10); UPD(0x0C0B9630u, 2);  /* 0C0B962E mov.l Rm,@Rn */
	r8 += 0xFFFFFF98u;  /* 0C0B9630 add #imm,Rn */
	r8 += 0x70u;  /* 0C0B9632 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0B9636u, 3);  /* 0C0B9634 mov.l Rm,@Rn */
	r0 += 0x8u;  /* 0C0B9636 add #imm,Rn */
	r2 = 0x2000000u; UPD(0x0C0B963Au, 2);  /* 0C0B9638 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF90u;  /* 0C0B963A add #imm,Rn */
	W32(r0, r10); UPD(0x0C0B963Eu, 2);  /* 0C0B963C mov.l Rm,@Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0B9640u, 1);  /* 0C0B963E mov.l Rm,@(disp,Rn) */
	r6 = 0xC3C4048u; UPD(0x0C0B9642u, 1);  /* 0C0B9640 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C0B9644u, 1);  /* 0C0B9642 mov.l @Rm,Rn */
	r5 = R32(r6); UPD(0x0C0B9646u, 1);  /* 0C0B9644 mov.l @Rm,Rn */
	r7 = 0x17u;  /* 0C0B9646 mov #imm,Rn */
	r3 += r5;  /* 0C0B9648 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0B964Cu, 3);  /* 0C0B964A mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0xCu); UPD(0x0C0B964Eu, 1);  /* 0C0B964C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C0B9650u, 1);  /* 0C0B964E mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x10u); UPD(0x0C0B9652u, 1);  /* 0C0B9650 mov.l @(disp,Rm),Rn */
	r4 = 0x4Au;  /* 0C0B9652 mov #imm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0B9656u, 2);  /* 0C0B9654 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 > (s32)r4;  /* 0C0B9656 cmp/gt Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0B965Au, 2);  /* 0C0B9658 mov.w @(disp,pc),Rn */
	IF(0x0C0B965Au); W8(r0 + r8, r7); UPD(0x0C0B965Cu, 1);  /* 0C0B965A mov.b Rm,@(r0,Rn) */
	r6 = R32(r9 + 0x14u); UPD(0x0C0B965Eu, 1);  /* 0C0B965C mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFF2u;  /* 0C0B965E add #imm,Rn */
	W32(r8 + 0x34u, r6); UPD(0x0C0B9662u, 2);  /* 0C0B9660 mov.l Rm,@(disp,Rn) */
	r9 += 0x18u;  /* 0C0B9662 add #imm,Rn */
	r8 += 0x50u;  /* 0C0B9664 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0B9668u, 3);  /* 0C0B9666 mov.l Rm,@Rn */
	r5 = 0x808080u; UPD(0x0C0B966Au, 1);  /* 0C0B9668 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0B966A add #imm,Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C0B966Eu, 2);  /* 0C0B966C mov.l Rm,@(disp,Rn) */
	r3 = 0xC23E0A6u; UPD(0x0C0B9670u, 1);  /* 0C0B966E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B9672u, 1);  /* 0C0B9670 mov.b @Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B9674u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B95E8u, 3); goto L_0C0B95E8; } UPD(0x0C0B9676u, 1); goto L_0C0B9676; }  /* 0C0B9672 bf/s */
L_0C0B9676: BLKS(0x0C0B9676u);
	r10 = 0xC0C21A0u; UPD(0x0C0B9678u, 1);  /* 0C0B9676 mov.l @(disp,pc),Rn */
	r9 = 0xC238014u; UPD(0x0C0B967Au, 1);  /* 0C0B9678 mov.l @(disp,pc),Rn */
	IF(0x0C0B967Au); { u32 t_ = r10; PR = 0x0C0B967Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C0B967Eu); }  /* 0C0B967A jsr @Rn */
L_0C0B967E: BLKS(0x0C0B967Eu);
	r1 = 0xE10u; UPD(0x0C0B9680u, 1);  /* 0C0B967E mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0B9680 mov #imm,Rn */
	{ W32(r9, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0B95B0u, 4); goto L_0C0B95B0; }  /* 0C0B9682 bra */
L_0C0B9690: BLKS(0x0C0B9690u);
	{ W32(r8 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B960Cu, 3); goto L_0C0B960C; }  /* 0C0B9690 bra */
}

void blk_f_0C0B96E0(sh3_t *c)
{
	LOCALS;
L_0C0B96E0: BLKS(0x0C0B96E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B96E2u, 1);  /* 0C0B96E0 mov.l Rm,@-Rn */
	r4 = 0x48u;  /* 0C0B96E2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B96E6u, 2);  /* 0C0B96E4 mov.l Rm,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0B96E8u, 1);  /* 0C0B96E6 mov.l @(disp,pc),Rn */
	IF(0x0C0B96E8u); r15 -= 4; W32(r15, PR); UPD(0x0C0B96EAu, 1);  /* 0C0B96E8 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C0B96ECu, 1);  /* 0C0B96EA mov.l @(disp,pc),Rn */
	IF(0x0C0B96ECu); { u32 t_ = r8; PR = 0x0C0B96F0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0B96F0u); }  /* 0C0B96EC jsr @Rn */
L_0C0B96F0: BLKS(0x0C0B96F0u);
	T = (r0 & r0) == 0;  /* 0C0B96F0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9700u, 4); goto L_0C0B9700; } UPD(0x0C0B96F6u, 1); goto L_0C0B96F6; }  /* 0C0B96F2 bf/s */
L_0C0B96F6: BLKS(0x0C0B96F6u);
	r15 = r14;  /* 0C0B96F6 mov Rm,Rn */
	IF(0x0C0B96F8u); PR = R32(r15); r15 += 4; UPD(0x0C0B96FAu, 2);  /* 0C0B96F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B96FCu, 1);  /* 0C0B96FA mov.l @Rm+,Rn */
	IF(0x0C0B96FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B96FC rts */
L_0C0B9700: BLKS(0x0C0B9700u);
	r8 = 0xC071740u; UPD(0x0C0B9702u, 1);  /* 0C0B9700 mov.l @(disp,pc),Rn */
	IF(0x0C0B9702u); { u32 t_ = r8; PR = 0x0C0B9706u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0B9706u); }  /* 0C0B9702 jsr @Rn */
L_0C0B9706: BLKS(0x0C0B9706u);
	T = (r0 & r0) == 0;  /* 0C0B9706 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B96F6u, 4); goto L_0C0B96F6; } goto L_0C0B970C; }  /* 0C0B9708 bt/s */
L_0C0B970C: BLKS(0x0C0B970Cu);
	r4 = 0xC2ABAA4u; UPD(0x0C0B970Eu, 2);  /* 0C0B970C mov.l @(disp,pc),Rn */
	r3 = 0x4Bu;  /* 0C0B970E mov #imm,Rn */
	r2 = R32(r4); UPD(0x0C0B9712u, 2);  /* 0C0B9710 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C0B9714u, 1);  /* 0C0B9712 mov.w @Rm+,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0B9716u, 1);  /* 0C0B9714 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B9716 and #imm,r0 */
	W32(r4, r2); UPD(0x0C0B971Au, 2);  /* 0C0B9718 mov.l Rm,@Rn */
	r0 += 0x48u;  /* 0C0B971A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0B971Eu, 2);  /* 0C0B971C mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C0B971E mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0B9722u, 2);  /* 0C0B9720 mov.w @(disp,pc),Rn */
	IF(0x0C0B9722u); MACL = r4 * r8;  /* 0C0B9722 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B9726u, 3);  /* 0C0B9724 mov.l @(disp,pc),Rn */
	IF(0x0C0B9726u); r8 = MACL;  /* 0C0B9726 sts macl,Rn */
	r8 += r6;  /* 0C0B9728 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0B972Cu, 3);  /* 0C0B972A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8A30u; UPD(0x0C0B972Eu, 1);  /* 0C0B972C mov.l @(disp,pc),Rn */
	r5 = 0xC0000000u; UPD(0x0C0B9730u, 1);  /* 0C0B972E mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C0B9732u, 1);  /* 0C0B9730 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0B9734u, 1);  /* 0C0B9732 mov.l Rm,@Rn */
	IF(0x0C0B9734u); { u32 t_ = r0; PR = 0x0C0B9738u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0B9738u); }  /* 0C0B9734 jsr @Rn */
L_0C0B9738: BLKS(0x0C0B9738u);
	r0 = 0xA00000u; UPD(0x0C0B973Au, 1);  /* 0C0B9738 mov.l @(disp,pc),Rn */
	r3 = 0x17u;  /* 0C0B973A mov #imm,Rn */
	r6 = 0xC00000u; UPD(0x0C0B973Eu, 2);  /* 0C0B973C mov.l @(disp,pc),Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C0B9740u, 1);  /* 0C0B973E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r6); UPD(0x0C0B9742u, 1);  /* 0C0B9740 mov.l Rm,@(disp,Rn) */
	r5 = 0xF00000u; UPD(0x0C0B9744u, 1);  /* 0C0B9742 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0B9744 add #imm,Rn */
	W32(r8, r5); UPD(0x0C0B9748u, 2);  /* 0C0B9746 mov.l Rm,@Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0B9748 add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0B974Cu, 2);  /* 0C0B974A mov.l Rm,@(disp,Rn) */
	r7 = 0xC3C4048u; UPD(0x0C0B974Eu, 1);  /* 0C0B974C mov.l @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C0B9750u, 1);  /* 0C0B974E mov.w @(disp,pc),Rn */
	r4 = R32(r7); UPD(0x0C0B9752u, 1);  /* 0C0B9750 mov.l @Rm,Rn */
	IF(0x0C0B9752u); W8(r0 + r8, r3); UPD(0x0C0B9754u, 1);  /* 0C0B9752 mov.b Rm,@(r0,Rn) */
	r4 += r6;  /* 0C0B9754 add Rm,Rn */
	r0 = 0x808080u; UPD(0x0C0B9758u, 2);  /* 0C0B9756 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0B9758 add Rm,Rn */
	r2 = 0x204FFFFu; UPD(0x0C0B975Cu, 2);  /* 0C0B975A mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C0B975Eu, 1);  /* 0C0B975C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C0B9760u, 1);  /* 0C0B975E mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C0B9760 mov #imm,Rn */
	{ W32(r8 + 0x34u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B96F6u, 4); goto L_0C0B96F6; }  /* 0C0B9762 bra */
}

void blk_f_0C0B97B0(sh3_t *c)
{
	LOCALS;
L_0C0B97B0: BLKS(0x0C0B97B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B97B2u, 1);  /* 0C0B97B0 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0B97B2 mov #imm,Rn */
	IF(0x0C0B97B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0B97B6u, 2);  /* 0C0B97B4 sts.l pr,@-Rn */
	r2 = 0xC2B1811u; UPD(0x0C0B97B8u, 1);  /* 0C0B97B6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0B97B8 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B97BCu, 2);  /* 0C0B97BA mov.b @Rm,Rn */
	IF(0x0C0B97BCu); MACL = r0 * r5;  /* 0C0B97BC mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0B97C0u, 3);  /* 0C0B97BE mov.l @(disp,pc),Rn */
	IF(0x0C0B97C0u); r7 = MACL;  /* 0C0B97C0 sts macl,Rn */
	r4 += r7;  /* 0C0B97C2 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0B97C6u, 3);  /* 0C0B97C4 mov.l @(disp,Rm),Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0B97C8u, 1);  /* 0C0B97C6 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0B97CAu, 1);  /* 0C0B97C8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0B97CCu, 1);  /* 0C0B97CA mov.w @Rm+,Rn */
	IF(0x0C0B97CCu); r0 <<= 2;  /* 0C0B97CC shll2 Rn */
	IF(0x0C0B97CEu); r6 = R32(r0 + r3); UPD(0x0C0B97D0u, 2);  /* 0C0B97CE mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0B97D2u, 1);  /* 0C0B97D0 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0B97D4u, 1);  /* 0C0B97D2 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0B97D6u, 1);  /* 0C0B97D4 mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0B97D8u, 1);  /* 0C0B97D6 mov.l @(disp,pc),Rn */
	r0 = 0xC0AFCC0u; UPD(0x0C0B97DAu, 1);  /* 0C0B97D8 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0B97DCu, 1);  /* 0C0B97DA mov.l Rm,@Rn */
	IF(0x0C0B97DCu); { u32 t_ = r0; PR = 0x0C0B97E0u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AFCC0, 0x0C0AFCC0u, 0x0C0B97E0u); }  /* 0C0B97DC jsr @Rn */
L_0C0B97E0: BLKS(0x0C0B97E0u);
	r15 = r14;  /* 0C0B97E0 mov Rm,Rn */
	IF(0x0C0B97E2u); PR = R32(r15); r15 += 4; UPD(0x0C0B97E4u, 2);  /* 0C0B97E2 lds.l @Rn+,pr */
	IF(0x0C0B97E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B97E4 rts */
}

void blk_f_0C0B9B80(sh3_t *c)
{
	LOCALS;
L_0C0B9B80: BLKS(0x0C0B9B80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B82u, 1);  /* 0C0B9B80 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0B9B82 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B86u, 2);  /* 0C0B9B84 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0B9B86 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B8Au, 2);  /* 0C0B9B88 mov.l Rm,@-Rn */
	IF(0x0C0B9B8Au); MACL = r4 * r3;  /* 0C0B9B8A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B8Eu, 3);  /* 0C0B9B8C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B90u, 1);  /* 0C0B9B8E mov.l Rm,@-Rn */
	IF(0x0C0B9B90u); r2 = MACL;  /* 0C0B9B90 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B94u, 2);  /* 0C0B9B92 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9B96u, 1);  /* 0C0B9B94 mov.l Rm,@-Rn */
	r0 = 0xC297B40u; UPD(0x0C0B9B98u, 1);  /* 0C0B9B96 mov.l @(disp,pc),Rn */
	IF(0x0C0B9B98u); r15 -= 4; W32(r15, PR); UPD(0x0C0B9B9Au, 1);  /* 0C0B9B98 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0B9B9A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0B9B9Eu, 2);  /* 0C0B9B9C mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B9B9E add #imm,Rn */
	r0 = 0x9u;  /* 0C0B9BA0 mov #imm,Rn */
	T = r2 > r0;  /* 0C0B9BA2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B9BECu, 6); goto L_0C0B9BEC; } goto L_0C0B9BA8; }  /* 0C0B9BA4 bt/s */
L_0C0B9BA8: BLKS(0x0C0B9BA8u);
	r0 = 0xC0B9BB8u;  /* 0C0B9BA8 mova @(disp,pc),r0 */
	IF(0x0C0B9BAAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B9BACu, 3);  /* 0C0B9BAA mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C0B9BAC extu.b Rm,Rn */
	IF(0x0C0B9BAEu); { u32 tv_ = (r5 + 0x0C0B9BB2u); u32 t_ = PHYS(tv_); IF(0x0C0B9BB0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0B9BD0u: goto L_0C0B9BD0; case 0x0C0B9C10u: goto L_0C0B9C10; case 0x0C0B9CA0u: goto L_0C0B9CA0; default: JUMPD(tv_); } }  /* 0C0B9BAE braf Rn */
L_0C0B9BD0: BLKS(0x0C0B9BD0u);
	r9 = 0x54u;  /* 0C0B9BD0 mov #imm,Rn */
	IF(0x0C0B9BD2u); MACL = r4 * r9;  /* 0C0B9BD2 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0B9BD6u, 4);  /* 0C0B9BD4 mov.l @(disp,pc),Rn */
	IF(0x0C0B9BD6u); r9 = MACL;  /* 0C0B9BD6 sts macl,Rn */
	r9 += r8;  /* 0C0B9BD8 add Rm,Rn */
	r7 = r9;  /* 0C0B9BDA mov Rm,Rn */
	r7 += 0x50u;  /* 0C0B9BDC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B9BE0u, 5);  /* 0C0B9BDE mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B9BE0 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0B9BE2 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B9BE4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B9C00u, 6); goto L_0C0B9C00; } UPD(0x0C0B9BEAu, 1); goto L_0C0B9BEA; }  /* 0C0B9BE6 bt/s */
L_0C0B9BEA: BLKS(0x0C0B9BEAu);
	IF(0x0C0B9BEAu); ;  /* 0C0B9BEA nop */
	UPD(0x0C0B9BECu, 1);
L_0C0B9BEC: BLKS(0x0C0B9BECu);
	r15 = r14;  /* 0C0B9BEC mov Rm,Rn */
	IF(0x0C0B9BEEu); PR = R32(r15); r15 += 4; UPD(0x0C0B9BF0u, 2);  /* 0C0B9BEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B9BF2u, 1);  /* 0C0B9BF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B9BF4u, 1);  /* 0C0B9BF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B9BF6u, 1);  /* 0C0B9BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B9BF8u, 1);  /* 0C0B9BF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B9BFAu, 1);  /* 0C0B9BF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B9BFCu, 1);  /* 0C0B9BFA mov.l @Rm+,Rn */
	IF(0x0C0B9BFCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B9BFC rts */
L_0C0B9C00: BLKS(0x0C0B9C00u);
	r11 = 0xC0B9E20u; UPD(0x0C0B9C02u, 1);  /* 0C0B9C00 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0B9C02 mov #imm,Rn */
	r12 = R32(r9 + 0xCu); UPD(0x0C0B9C06u, 2);  /* 0C0B9C04 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x10u, r10); UPD(0x0C0B9C08u, 1);  /* 0C0B9C06 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9C08u); { u32 t_ = r11; PR = 0x0C0B9C0Cu; W32(r9 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0B9C0Cu); }  /* 0C0B9C08 jsr @Rn */
L_0C0B9C0C: BLKS(0x0C0B9C0Cu);
	{ W32(r9 + 0x3Cu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9BECu, 3); goto L_0C0B9BEC; }  /* 0C0B9C0C bra */
L_0C0B9C10: BLKS(0x0C0B9C10u);
	r3 = 0x54u;  /* 0C0B9C10 mov #imm,Rn */
	IF(0x0C0B9C12u); MACL = r4 * r3;  /* 0C0B9C12 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0B9C16u, 4);  /* 0C0B9C14 mov.l @(disp,pc),Rn */
	IF(0x0C0B9C16u); r3 = MACL;  /* 0C0B9C16 sts macl,Rn */
	r3 += r5;  /* 0C0B9C18 add Rm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C0B9C1Cu, 3);  /* 0C0B9C1A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0B9C1Eu, 1);  /* 0C0B9C1C mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0B9C20u, 1);  /* 0C0B9C1E mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x34u); UPD(0x0C0B9C22u, 1);  /* 0C0B9C20 mov.l @(disp,Rm),Rn */
	r13 += r2;  /* 0C0B9C22 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0B9C26u, 2);  /* 0C0B9C24 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B9C26 add Rm,Rn */
	r7 += r13;  /* 0C0B9C28 add Rm,Rn */
	W32(r3 + 0x28u, r13); UPD(0x0C0B9C2Cu, 3);  /* 0C0B9C2A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9C2Cu); T = (s32)r7 >= 0;  /* 0C0B9C2C cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B9C90u, 4); goto L_0C0B9C90; } UPD(0x0C0B9C32u, 1); goto L_0C0B9C32; }  /* 0C0B9C2E bf/s */
L_0C0B9C32: BLKS(0x0C0B9C32u);
	r8 = 0xB00000u; UPD(0x0C0B9C34u, 1);  /* 0C0B9C32 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C0B9C34 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B9C4Eu, 4); goto L_0C0B9C4E; }  /* 0C0B9C36 bt */
L_0C0B9C38: BLKS(0x0C0B9C38u);
	r2 = r6;  /* 0C0B9C38 mov Rm,Rn */
	r9 = 0xC3C4048u; UPD(0x0C0B9C3Cu, 2);  /* 0C0B9C3A mov.l @(disp,pc),Rn */
	r7 = R32(r9); UPD(0x0C0B9C3Eu, 1);  /* 0C0B9C3C mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0B9C40u, 1);  /* 0C0B9C3E mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0B9C40 sub Rm,Rn */
	r2 += r6;  /* 0C0B9C42 add Rm,Rn */
	IF(0x0C0B9C44u); T = (s32)r2 >= 0;  /* 0C0B9C44 cmp/pz Rn */
	if (!T) { UPD(0x0C0B9C80u, 6); goto L_0C0B9C80; }  /* 0C0B9C46 bf */
L_0C0B9C48: BLKS(0x0C0B9C48u);
	r10 = 0x880000u; UPD(0x0C0B9C4Au, 1);  /* 0C0B9C48 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C0B9C4A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B9C60u, 4); goto L_0C0B9C60; }  /* 0C0B9C4C bf */
L_0C0B9C4E: BLKS(0x0C0B9C4Eu);
	r4 = 0x0u;  /* 0C0B9C4E mov #imm,Rn */
	{ W32(r3, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0B9BECu, 4); goto L_0C0B9BEC; }  /* 0C0B9C50 bra */
L_0C0B9C60: BLKS(0x0C0B9C60u);
	r0 = R32(r3 + 0x10u); UPD(0x0C0B9C62u, 1);  /* 0C0B9C60 mov.l @(disp,Rm),Rn */
	r12 = 0xC1F489Cu; UPD(0x0C0B9C64u, 1);  /* 0C0B9C62 mov.l @(disp,pc),Rn */
	IF(0x0C0B9C64u); r0 <<= 2;  /* 0C0B9C64 shll2 Rn */
	IF(0x0C0B9C66u); r11 = R32(r0 + r12); UPD(0x0C0B9C68u, 2);  /* 0C0B9C66 mov.l @(r0,Rm),Rn */
	r0 = 0xC0B9DF0u; UPD(0x0C0B9C6Au, 1);  /* 0C0B9C68 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0B9C6Cu, 1);  /* 0C0B9C6A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0B9C6C mov Rm,Rn */
	IF(0x0C0B9C6Eu); PR = R32(r15); r15 += 4; UPD(0x0C0B9C70u, 2);  /* 0C0B9C6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B9C72u, 1);  /* 0C0B9C70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B9C74u, 1);  /* 0C0B9C72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B9C76u, 1);  /* 0C0B9C74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B9C78u, 1);  /* 0C0B9C76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B9C7Au, 1);  /* 0C0B9C78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B9C7Cu, 1);  /* 0C0B9C7A mov.l @Rm+,Rn */
	IF(0x0C0B9C7Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0B9DF0u: TAIL(blk_f_0C0B9DF0); default: JUMPD(tv_); } }  /* 0C0B9C7C jmp @Rn */
L_0C0B9C80: BLKS(0x0C0B9C80u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9C48u, 3); goto L_0C0B9C48; }  /* 0C0B9C80 bra */
L_0C0B9C90: BLKS(0x0C0B9C90u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0B9C32u, 3); goto L_0C0B9C32; }  /* 0C0B9C90 bra */
L_0C0B9CA0: BLKS(0x0C0B9CA0u);
	r13 = 0x54u;  /* 0C0B9CA0 mov #imm,Rn */
	IF(0x0C0B9CA2u); MACL = r4 * r13;  /* 0C0B9CA2 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0B9CA6u, 4);  /* 0C0B9CA4 mov.l @(disp,pc),Rn */
	IF(0x0C0B9CA6u); r13 = MACL;  /* 0C0B9CA6 sts macl,Rn */
	r13 += r8;  /* 0C0B9CA8 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C0B9CACu, 3);  /* 0C0B9CAA mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x30u); UPD(0x0C0B9CAEu, 1);  /* 0C0B9CAC mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x2Cu); UPD(0x0C0B9CB0u, 1);  /* 0C0B9CAE mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C0B9CB0 add Rm,Rn */
	r2 = R32(r13 + 0x34u); UPD(0x0C0B9CB4u, 2);  /* 0C0B9CB2 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0B9CB6u, 1);  /* 0C0B9CB4 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0B9CB6 add Rm,Rn */
	r3 += r5;  /* 0C0B9CB8 add Rm,Rn */
	W32(r13 + 0x28u, r5); UPD(0x0C0B9CBCu, 3);  /* 0C0B9CBA mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9CBCu); T = (s32)r3 >= 0;  /* 0C0B9CBC cmp/pz Rn */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B9DA0u, 4); goto L_0C0B9DA0; } UPD(0x0C0B9CC2u, 1); goto L_0C0B9CC2; }  /* 0C0B9CBE bf/s */
L_0C0B9CC2: BLKS(0x0C0B9CC2u);
	r6 = 0xB00000u; UPD(0x0C0B9CC4u, 1);  /* 0C0B9CC2 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0B9CC4 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B9CDEu, 4); goto L_0C0B9CDE; }  /* 0C0B9CC6 bt */
L_0C0B9CC8: BLKS(0x0C0B9CC8u);
	r2 = r7;  /* 0C0B9CC8 mov Rm,Rn */
	r10 = 0xC3C4048u; UPD(0x0C0B9CCCu, 2);  /* 0C0B9CCA mov.l @(disp,pc),Rn */
	r9 = R32(r10); UPD(0x0C0B9CCEu, 1);  /* 0C0B9CCC mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0B9CD0u, 1);  /* 0C0B9CCE mov.l @(disp,pc),Rn */
	r2 -= r9;  /* 0C0B9CD0 sub Rm,Rn */
	r2 += r7;  /* 0C0B9CD2 add Rm,Rn */
	IF(0x0C0B9CD4u); T = (s32)r2 >= 0;  /* 0C0B9CD4 cmp/pz Rn */
	if (!T) { UPD(0x0C0B9D90u, 6); goto L_0C0B9D90; }  /* 0C0B9CD6 bf */
L_0C0B9CD8: BLKS(0x0C0B9CD8u);
	r0 = 0x880000u; UPD(0x0C0B9CDAu, 1);  /* 0C0B9CD8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0B9CDA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B9CF0u, 4); goto L_0C0B9CF0; }  /* 0C0B9CDC bf */
L_0C0B9CDE: BLKS(0x0C0B9CDEu);
	r4 = 0x0u;  /* 0C0B9CDE mov #imm,Rn */
	W32(r13, r4); UPD(0x0C0B9CE2u, 2);  /* 0C0B9CE0 mov.l Rm,@Rn */
L_0C0B9CE2: BLKS(0x0C0B9CE2u);
	{ IF(0x0C0B9CE4u); ; /* slot nop */ UPD(0x0C0B9BECu, 3); goto L_0C0B9BEC; }  /* 0C0B9CE2 bra */
L_0C0B9CF0: BLKS(0x0C0B9CF0u);
	r0 = R32(r13 + 0x10u); UPD(0x0C0B9CF2u, 1);  /* 0C0B9CF0 mov.l @(disp,Rm),Rn */
	r6 = 0xC1F489Cu; UPD(0x0C0B9CF4u, 1);  /* 0C0B9CF2 mov.l @(disp,pc),Rn */
	IF(0x0C0B9CF4u); r0 <<= 2;  /* 0C0B9CF4 shll2 Rn */
	IF(0x0C0B9CF6u); r3 = R32(r0 + r6); UPD(0x0C0B9CF8u, 2);  /* 0C0B9CF6 mov.l @(r0,Rm),Rn */
	r11 = 0xC0B9DF0u; UPD(0x0C0B9CFAu, 1);  /* 0C0B9CF8 mov.l @(disp,pc),Rn */
	IF(0x0C0B9CFAu); { u32 t_ = r11; PR = 0x0C0B9CFEu; W32(r13 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0B9DF0, 0x0C0B9DF0u, 0x0C0B9CFEu); }  /* 0C0B9CFA jsr @Rn */
L_0C0B9CFE: BLKS(0x0C0B9CFEu);
	r3 = r13;  /* 0C0B9CFE mov Rm,Rn */
	r3 += 0x51u;  /* 0C0B9D00 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B9D04u, 3);  /* 0C0B9D02 mov.b @Rm,Rn */
	r11 = r13;  /* 0C0B9D04 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0B9D06 add #imm,Rn */
	r2 += 0x1u;  /* 0C0B9D08 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0B9D0Cu, 4);  /* 0C0B9D0A mov.l @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0B9D0C extu.b Rm,Rn */
	W8(r3, r2); UPD(0x0C0B9D10u, 2);  /* 0C0B9D0E mov.b Rm,@Rn */
	IF(0x0C0B9D10u); r0 >>= 16;  /* 0C0B9D10 shlr16 Rn */
	r8 = 0xC1F48B4u; UPD(0x0C0B9D14u, 2);  /* 0C0B9D12 mov.l @(disp,pc),Rn */
	IF(0x0C0B9D14u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B9D16u, 1);  /* 0C0B9D14 mov.b @(r0,Rm),Rn */
	T = (s32)r5 >= (s32)r12;  /* 0C0B9D16 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0B9CE2u, 4); goto L_0C0B9CE2; }  /* 0C0B9D18 bf */
L_0C0B9D1A: BLKS(0x0C0B9D1Au);
	r13 += 0x44u;  /* 0C0B9D1A add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B9D1Eu, 2);  /* 0C0B9D1C mov.w @Rm,Rn */
	r6 = 0x0u;  /* 0C0B9D1E mov #imm,Rn */
	r1 = 0x100u; UPD(0x0C0B9D22u, 2);  /* 0C0B9D20 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0B9D22 add #imm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0B9D26u, 2);  /* 0C0B9D24 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0B9D26 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0B9D2Au, 2);  /* 0C0B9D28 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0B9D2A exts.w Rm,Rn */
	IF(0x0C0B9D2Cu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0B9D2C shar Rn */
	W8(r3, r6); UPD(0x0C0B9D30u, 3);  /* 0C0B9D2E mov.b Rm,@Rn */
	r4 = r12;  /* 0C0B9D30 mov Rm,Rn */
	IF(0x0C0B9D32u); { u32 t_ = r10; PR = 0x0C0B9D36u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B9D36u); }  /* 0C0B9D32 jsr @Rn */
L_0C0B9D36: BLKS(0x0C0B9D36u);
	r5 = r9;  /* 0C0B9D36 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0B9D3Au, 2);  /* 0C0B9D38 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0B9D3A mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0B9D3Eu, 2);  /* 0C0B9D3C mov.l @(disp,Rm),Rn */
	r8 = 0xC062780u; UPD(0x0C0B9D40u, 1);  /* 0C0B9D3E mov.l @(disp,pc),Rn */
	IF(0x0C0B9D40u); { u32 t_ = r9; PR = 0x0C0B9D44u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B9D44u); }  /* 0C0B9D40 jsr @Rn */
L_0C0B9D44: BLKS(0x0C0B9D44u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0B9D46u, 1);  /* 0C0B9D44 mov.l @(disp,Rm),Rn */
	r4 = 0x7Fu;  /* 0C0B9D46 mov #imm,Rn */
	IF(0x0C0B9D48u); { u32 t_ = r8; PR = 0x0C0B9D4Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B9D4Cu); }  /* 0C0B9D48 jsr @Rn */
L_0C0B9D4C: BLKS(0x0C0B9D4Cu);
	r8 = R32(r11); UPD(0x0C0B9D4Eu, 1);  /* 0C0B9D4C mov.l @Rm,Rn */
	r0 += r12;  /* 0C0B9D4E add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0B9D50 add #imm,Rn */
	r2 = 0xC069B20u; UPD(0x0C0B9D54u, 3);  /* 0C0B9D52 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFC0u;  /* 0C0B9D54 add #imm,Rn */
	r4 = 0x0u;  /* 0C0B9D56 mov #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0B9D58 exts.w Rm,Rn */
	W32(r15, r4); UPD(0x0C0B9D5Cu, 4);  /* 0C0B9D5A mov.l Rm,@Rn */
	IF(0x0C0B9D5Cu); r8 >>= 2;  /* 0C0B9D5C shlr2 Rn */
	r0 = 0x14u;  /* 0C0B9D5E mov #imm,Rn */
	r4 = r12;  /* 0C0B9D60 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B9D64u, 4);  /* 0C0B9D62 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9D64u); { u32 t_ = r2; PR = 0x0C0B9D68u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B9D68u); }  /* 0C0B9D64 jsr @Rn */
L_0C0B9D68: BLKS(0x0C0B9D68u);
	r4 = r12;  /* 0C0B9D68 mov Rm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0B9D6Cu, 2);  /* 0C0B9D6A mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0B9D6C mov Rm,Rn */
	IF(0x0C0B9D6Eu); { u32 t_ = r12; PR = 0x0C0B9D72u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B9D72u); }  /* 0C0B9D6E jsr @Rn */
L_0C0B9D72: BLKS(0x0C0B9D72u);
	r7 = 0x80C080u; UPD(0x0C0B9D74u, 1);  /* 0C0B9D72 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0B9D74 mov #imm,Rn */
	W32(r15 + 0x10u, r7); UPD(0x0C0B9D78u, 2);  /* 0C0B9D76 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C0B9D78 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0B9D7Cu, 2);  /* 0C0B9D7A mov.l Rm,@(disp,Rn) */
	r4 = R32(r13); UPD(0x0C0B9D7Eu, 1);  /* 0C0B9D7C mov.l @Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C0B9D80u, 1);  /* 0C0B9D7E mov.l @(disp,pc),Rn */
	IF(0x0C0B9D80u); { u32 t_ = r13; PR = 0x0C0B9D84u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0B9D84u); }  /* 0C0B9D80 jsr @Rn */
L_0C0B9D84: BLKS(0x0C0B9D84u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0B9BECu, 3); goto L_0C0B9BEC; }  /* 0C0B9D84 bra */
L_0C0B9D90: BLKS(0x0C0B9D90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9CD8u, 3); goto L_0C0B9CD8; }  /* 0C0B9D90 bra */
L_0C0B9DA0: BLKS(0x0C0B9DA0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0B9CC2u, 3); goto L_0C0B9CC2; }  /* 0C0B9DA0 bra */
}

/* FUN_0c0b9df0 */
void blk_f_0C0B9DF0(sh3_t *c)
{
	LOCALS;
L_0C0B9DF0: BLKS(0x0C0B9DF0u);
	r7 = (u32)(s32)(s16)r4;  /* 0C0B9DF0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0B9DF2 mov #imm,Rn */
	IF(0x0C0B9DF4u); MACL = r7 * r0;  /* 0C0B9DF4 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0B9DF8u, 5);  /* 0C0B9DF6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0B9DF8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9DFCu, 2);  /* 0C0B9DFA mov.l Rm,@-Rn */
	IF(0x0C0B9DFCu); r0 = MACL;  /* 0C0B9DFC sts macl,Rn */
	r0 += r6;  /* 0C0B9DFE add Rm,Rn */
	r3 = R32(r0 + 0x10u); UPD(0x0C0B9E02u, 3);  /* 0C0B9E00 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0B9E02 mov Rm,Rn */
	r4 = R32(r0 + 0x18u); UPD(0x0C0B9E06u, 2);  /* 0C0B9E04 mov.l @(disp,Rm),Rn */
	IF(0x0C0B9E06u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0B9E06 shld Rm,Rn */
	r3 += r4;  /* 0C0B9E08 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0B9E0Cu, 3);  /* 0C0B9E0A mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r1); UPD(0x0C0B9E0Eu, 1);  /* 0C0B9E0C mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C0B9E10u, 1);  /* 0C0B9E0E mov.l @(disp,Rm),Rn */
	W32(r0 + 0x20u, r2); UPD(0x0C0B9E12u, 1);  /* 0C0B9E10 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0B9E12 mov Rm,Rn */
	IF(0x0C0B9E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0B9E14 rts */
}

/* FUN_0c0b9e20 */
void blk_f_0C0B9E20(sh3_t *c)
{
	LOCALS;
L_0C0B9E20: BLKS(0x0C0B9E20u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0B9E20 exts.w Rm,Rn */
	r3 = 0x54u;  /* 0C0B9E22 mov #imm,Rn */
	IF(0x0C0B9E24u); MACL = r1 * r3;  /* 0C0B9E24 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0B9E28u, 5);  /* 0C0B9E26 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C0B9E28 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9E2Cu, 2);  /* 0C0B9E2A mov.l Rm,@-Rn */
	IF(0x0C0B9E2Cu); r4 = MACL;  /* 0C0B9E2C sts macl,Rn */
	r4 += r0;  /* 0C0B9E2E add Rm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0B9E32u, 3);  /* 0C0B9E30 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0B9E32 mov #imm,Rn */
	IF(0x0C0B9E34u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0B9E34 shld Rm,Rn */
	r6 = R32(r4 + 0x14u); UPD(0x0C0B9E38u, 3);  /* 0C0B9E36 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0B9E38 mov Rm,Rn */
	r3 = R32(r4 + 0x10u); UPD(0x0C0B9E3Cu, 2);  /* 0C0B9E3A mov.l @(disp,Rm),Rn */
	IF(0x0C0B9E3Cu); r5 = R32(r0 + r6); UPD(0x0C0B9E3Eu, 1);  /* 0C0B9E3C mov.l @(r0,Rm),Rn */
	IF(0x0C0B9E3Eu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0B9E3E shld Rm,Rn */
	W32(r4 + 0x18u, r5); UPD(0x0C0B9E42u, 2);  /* 0C0B9E40 mov.l Rm,@(disp,Rn) */
	r3 += r5;  /* 0C0B9E42 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0B9E46u, 2);  /* 0C0B9E44 mov.l @Rm,Rn */
	W32(r4 + 0x1Cu, r1); UPD(0x0C0B9E48u, 1);  /* 0C0B9E46 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C0B9E4Au, 1);  /* 0C0B9E48 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0B9E4Cu, 1);  /* 0C0B9E4A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0B9E4C mov Rm,Rn */
	IF(0x0C0B9E4Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0B9E4E rts */
}

void blk_f_0C0B9E60(sh3_t *c)
{
	LOCALS;
L_0C0B9E60: BLKS(0x0C0B9E60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9E62u, 1);  /* 0C0B9E60 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0B9E62 exts.w Rm,Rn */
	r3 = 0x54u;  /* 0C0B9E64 mov #imm,Rn */
	IF(0x0C0B9E66u); MACL = r4 * r3;  /* 0C0B9E66 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9E6Au, 5);  /* 0C0B9E68 mov.l Rm,@-Rn */
	r0 = 0xC297B40u; UPD(0x0C0B9E6Cu, 1);  /* 0C0B9E6A mov.l @(disp,pc),Rn */
	IF(0x0C0B9E6Cu); r8 = MACL;  /* 0C0B9E6C sts macl,Rn */
	IF(0x0C0B9E6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0B9E70u, 2);  /* 0C0B9E6E sts.l pr,@-Rn */
	r8 += r0;  /* 0C0B9E70 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0B9E74u, 2);  /* 0C0B9E72 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C0B9E74 mov #imm,Rn */
	r2 += 0xFFFFFFFBu;  /* 0C0B9E76 add #imm,Rn */
	T = r2 > r0;  /* 0C0B9E78 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B9EF0u, 6); goto L_0C0B9EF0; } goto L_0C0B9E7E; }  /* 0C0B9E7A bf/s */
L_0C0B9E7E: BLKS(0x0C0B9E7Eu);
	r4 = R32(r8 + 0x28u); UPD(0x0C0B9E80u, 2);  /* 0C0B9E7E mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C0B9E82u, 1);  /* 0C0B9E80 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C0B9E84u, 1);  /* 0C0B9E82 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x34u); UPD(0x0C0B9E86u, 1);  /* 0C0B9E84 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C0B9E86 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C0B9E8Au, 2);  /* 0C0B9E88 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0B9E8A add Rm,Rn */
	r2 += r4;  /* 0C0B9E8C add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0B9E90u, 3);  /* 0C0B9E8E mov.l Rm,@(disp,Rn) */
	IF(0x0C0B9E90u); T = (s32)r2 >= 0;  /* 0C0B9E90 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B9EE0u, 4); goto L_0C0B9EE0; } UPD(0x0C0B9E96u, 1); goto L_0C0B9E96; }  /* 0C0B9E92 bf/s */
L_0C0B9E96: BLKS(0x0C0B9E96u);
	r6 = 0xA80000u; UPD(0x0C0B9E98u, 1);  /* 0C0B9E96 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0B9E98 cmp/gt Rm,Rn */
	{ u32 c_ = T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9EB6u, 4); goto L_0C0B9EB6; } goto L_0C0B9E9E; }  /* 0C0B9E9A bt/s */
L_0C0B9E9E: BLKS(0x0C0B9E9Eu);
	r2 = 0xC3C4048u; UPD(0x0C0B9EA0u, 2);  /* 0C0B9E9E mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0B9EA2u, 1);  /* 0C0B9EA0 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0B9EA4u, 1);  /* 0C0B9EA2 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0B9EA4 mov Rm,Rn */
	r2 -= r0;  /* 0C0B9EA6 sub Rm,Rn */
	r2 += r7;  /* 0C0B9EA8 add Rm,Rn */
	IF(0x0C0B9EAAu); T = (s32)r2 >= 0;  /* 0C0B9EAA cmp/pz Rn */
	if (!T) { UPD(0x0C0B9ED0u, 7); goto L_0C0B9ED0; }  /* 0C0B9EAC bf */
L_0C0B9EAE: BLKS(0x0C0B9EAEu);
	r3 = 0x800000u; UPD(0x0C0B9EB0u, 1);  /* 0C0B9EAE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0B9EB0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B9EB8u, 4); goto L_0C0B9EB8; }  /* 0C0B9EB2 bf */
L_0C0B9EB4: BLKS(0x0C0B9EB4u);
	r4 = 0x0u;  /* 0C0B9EB4 mov #imm,Rn */
	UPD(0x0C0B9EB6u, 1);
L_0C0B9EB6: BLKS(0x0C0B9EB6u);
	W32(r8, r4); UPD(0x0C0B9EB8u, 1);  /* 0C0B9EB6 mov.l Rm,@Rn */
L_0C0B9EB8: BLKS(0x0C0B9EB8u);
	r15 = r14;  /* 0C0B9EB8 mov Rm,Rn */
	IF(0x0C0B9EBAu); PR = R32(r15); r15 += 4; UPD(0x0C0B9EBCu, 2);  /* 0C0B9EBA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B9EBEu, 1);  /* 0C0B9EBC mov.l @Rm+,Rn */
	IF(0x0C0B9EBEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B9EBE rts */
L_0C0B9ED0: BLKS(0x0C0B9ED0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9EAEu, 3); goto L_0C0B9EAE; }  /* 0C0B9ED0 bra */
L_0C0B9EE0: BLKS(0x0C0B9EE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9E96u, 3); goto L_0C0B9E96; }  /* 0C0B9EE0 bra */
L_0C0B9EF0: BLKS(0x0C0B9EF0u);
	r6 = r8;  /* 0C0B9EF0 mov Rm,Rn */
	r6 += 0x50u;  /* 0C0B9EF2 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B9EF6u, 3);  /* 0C0B9EF4 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0B9EF6 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0B9EF8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B9EFA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B9EB8u, 6); goto L_0C0B9EB8; } UPD(0x0C0B9F00u, 1); goto L_0C0B9F00; }  /* 0C0B9EFC bf/s */
L_0C0B9F00: BLKS(0x0C0B9F00u);
	r0 = 0xC0B9E20u; UPD(0x0C0B9F02u, 1);  /* 0C0B9F00 mov.l @(disp,pc),Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C0B9F04u, 1);  /* 0C0B9F02 mov.l @(disp,Rm),Rn */
	IF(0x0C0B9F04u); { u32 t_ = r0; PR = 0x0C0B9F08u; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0B9F08u); }  /* 0C0B9F04 jsr @Rn */
L_0C0B9F08: BLKS(0x0C0B9F08u);
	r7 = 0x0u;  /* 0C0B9F08 mov #imm,Rn */
	{ W32(r8 + 0x3Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9EB8u, 4); goto L_0C0B9EB8; }  /* 0C0B9F0A bra */
}

void blk_f_0C0B9F30(sh3_t *c)
{
	LOCALS;
L_0C0B9F30: BLKS(0x0C0B9F30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F32u, 1);  /* 0C0B9F30 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0B9F32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F36u, 2);  /* 0C0B9F34 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0B9F36 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F3Au, 2);  /* 0C0B9F38 mov.l Rm,@-Rn */
	IF(0x0C0B9F3Au); MACL = r8 * r3;  /* 0C0B9F3A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F3Eu, 3);  /* 0C0B9F3C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F40u, 1);  /* 0C0B9F3E mov.l Rm,@-Rn */
	IF(0x0C0B9F40u); r2 = MACL;  /* 0C0B9F40 sts macl,Rn */
	r0 = 0xC297B40u; UPD(0x0C0B9F44u, 2);  /* 0C0B9F42 mov.l @(disp,pc),Rn */
	IF(0x0C0B9F44u); r15 -= 4; W32(r15, PR); UPD(0x0C0B9F46u, 1);  /* 0C0B9F44 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0B9F46 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0B9F4Au, 2);  /* 0C0B9F48 mov.l @(disp,Rm),Rn */
	r0 = 0x13u;  /* 0C0B9F4A mov #imm,Rn */
	T = r2 > r0;  /* 0C0B9F4C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B9FD4u, 5); goto L_0C0B9FD4; } goto L_0C0B9F52; }  /* 0C0B9F4E bt/s */
L_0C0B9F52: BLKS(0x0C0B9F52u);
	r0 = 0xC0B9F60u;  /* 0C0B9F52 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B9F54 add Rm,Rn */
	IF(0x0C0B9F56u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B9F58u, 4);  /* 0C0B9F56 mov.w @(r0,Rm),Rn */
	IF(0x0C0B9F58u); { u32 tv_ = (r4 + 0x0C0B9F5Cu); u32 t_ = PHYS(tv_); IF(0x0C0B9F5Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9F90u: goto L_0C0B9F90; case 0x0C0BA010u: goto L_0C0BA010; case 0x0C0BA080u: goto L_0C0BA080; default: JUMPD(tv_); } }  /* 0C0B9F58 braf Rn */
L_0C0B9F90: BLKS(0x0C0B9F90u);
	r9 = 0x54u;  /* 0C0B9F90 mov #imm,Rn */
	IF(0x0C0B9F92u); MACL = r8 * r9;  /* 0C0B9F92 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0B9F96u, 4);  /* 0C0B9F94 mov.l @(disp,pc),Rn */
	IF(0x0C0B9F96u); r3 = MACL;  /* 0C0B9F96 sts macl,Rn */
	r3 += r8;  /* 0C0B9F98 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0B9F9Cu, 3);  /* 0C0B9F9A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x30u); UPD(0x0C0B9F9Eu, 1);  /* 0C0B9F9C mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0B9F9E add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0B9FA2u, 2);  /* 0C0B9FA0 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x34u); UPD(0x0C0B9FA4u, 1);  /* 0C0B9FA2 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B9FA4 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0B9FA8u, 2);  /* 0C0B9FA6 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0B9FAAu, 1);  /* 0C0B9FA8 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0B9FAA add Rm,Rn */
	IF(0x0C0B9FACu); T = (s32)r7 >= 0;  /* 0C0B9FAC cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA000u, 5); goto L_0C0BA000; } UPD(0x0C0B9FB2u, 1); goto L_0C0B9FB2; }  /* 0C0B9FAE bf/s */
L_0C0B9FB2: BLKS(0x0C0B9FB2u);
	r10 = 0xC00000u; UPD(0x0C0B9FB4u, 1);  /* 0C0B9FB2 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0B9FB4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9FD2u, 4); goto L_0C0B9FD2; } goto L_0C0B9FBA; }  /* 0C0B9FB6 bt/s */
L_0C0B9FBA: BLKS(0x0C0B9FBAu);
	r2 = 0xC3C4048u; UPD(0x0C0B9FBCu, 2);  /* 0C0B9FBA mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0B9FBEu, 1);  /* 0C0B9FBC mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0B9FC0u, 1);  /* 0C0B9FBE mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0B9FC0 mov Rm,Rn */
	r2 -= r0;  /* 0C0B9FC2 sub Rm,Rn */
	r2 += r11;  /* 0C0B9FC4 add Rm,Rn */
	IF(0x0C0B9FC6u); T = (s32)r2 >= 0;  /* 0C0B9FC6 cmp/pz Rn */
	if (!T) { UPD(0x0C0B9FF0u, 7); goto L_0C0B9FF0; }  /* 0C0B9FC8 bf */
L_0C0B9FCA: BLKS(0x0C0B9FCAu);
	r4 = 0x980000u; UPD(0x0C0B9FCCu, 1);  /* 0C0B9FCA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0B9FCC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B9FD4u, 4); goto L_0C0B9FD4; }  /* 0C0B9FCE bf */
L_0C0B9FD0: BLKS(0x0C0B9FD0u);
	r5 = 0x0u;  /* 0C0B9FD0 mov #imm,Rn */
	UPD(0x0C0B9FD2u, 1);
L_0C0B9FD2: BLKS(0x0C0B9FD2u);
	W32(r3, r5); UPD(0x0C0B9FD4u, 1);  /* 0C0B9FD2 mov.l Rm,@Rn */
L_0C0B9FD4: BLKS(0x0C0B9FD4u);
	r15 = r14;  /* 0C0B9FD4 mov Rm,Rn */
	IF(0x0C0B9FD6u); PR = R32(r15); r15 += 4; UPD(0x0C0B9FD8u, 2);  /* 0C0B9FD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B9FDAu, 1);  /* 0C0B9FD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B9FDCu, 1);  /* 0C0B9FDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B9FDEu, 1);  /* 0C0B9FDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B9FE0u, 1);  /* 0C0B9FDE mov.l @Rm+,Rn */
	IF(0x0C0B9FE0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B9FE0 rts */
L_0C0B9FF0: BLKS(0x0C0B9FF0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9FCAu, 3); goto L_0C0B9FCA; }  /* 0C0B9FF0 bra */
L_0C0BA000: BLKS(0x0C0BA000u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0B9FB2u, 3); goto L_0C0B9FB2; }  /* 0C0BA000 bra */
L_0C0BA010: BLKS(0x0C0BA010u);
	r9 = 0xC0BB920u; UPD(0x0C0BA012u, 1);  /* 0C0BA010 mov.l @(disp,pc),Rn */
	IF(0x0C0BA012u); { u32 t_ = r9; PR = 0x0C0BA016u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA016u); }  /* 0C0BA012 jsr @Rn */
L_0C0BA016: BLKS(0x0C0BA016u);
	IF(0x0C0BA016u); T = (s32)r0 >= 0;  /* 0C0BA016 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA060u, 4); goto L_0C0BA060; } goto L_0C0BA01C; }  /* 0C0BA018 bf/s */
L_0C0BA01C: BLKS(0x0C0BA01Cu);
	IF(0x0C0BA01Cu); MACL = r8 * r2;  /* 0C0BA01C mul.l Rm,Rn */
	r11 = 0xC297B40u; UPD(0x0C0BA020u, 4);  /* 0C0BA01E mov.l @(disp,pc),Rn */
	IF(0x0C0BA020u); r9 = MACL;  /* 0C0BA020 sts macl,Rn */
	IF(0x0C0BA022u); MACL = r0 * r2;  /* 0C0BA022 mul.l Rm,Rn */
	r9 += r11;  /* 0C0BA024 add Rm,Rn */
	r9 += 0x44u;  /* 0C0BA026 add #imm,Rn */
	IF(0x0C0BA028u); r8 = MACL;  /* 0C0BA028 sts macl,Rn */
	r8 += r11;  /* 0C0BA02A add Rm,Rn */
	r8 += 0x44u;  /* 0C0BA02C add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BA030u, 9);  /* 0C0BA02E mov.w @Rm,Rn */
	W16(r9, r10); UPD(0x0C0BA032u, 1);  /* 0C0BA030 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA032 mov Rm,Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0BA034 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BA038u, 3);  /* 0C0BA036 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA038 add #imm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C0BA03Cu, 2);  /* 0C0BA03A mov.l @(disp,Rm),Rn */
	IF(0x0C0BA03Cu); { u32 t_ = r0; PR = 0x0C0BA040u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA040u); }  /* 0C0BA03C jsr @Rn */
L_0C0BA040: BLKS(0x0C0BA040u);
	r4 = r10;  /* 0C0BA040 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0BA044u, 2);  /* 0C0BA042 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0BA044 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0BA048u, 2);  /* 0C0BA046 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0BA048 add Rm,Rn */
	IF(0x0C0BA04Au); { u32 t_ = r10; PR = 0x0C0BA04Eu; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA04Eu); }  /* 0C0BA04A jsr @Rn */
L_0C0BA04E: BLKS(0x0C0BA04Eu);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0BA050u, 1);  /* 0C0BA04E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0BA050 add Rm,Rn */
	{ W32(r9 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9FD4u, 4); goto L_0C0B9FD4; }  /* 0C0BA052 bra */
L_0C0BA060: BLKS(0x0C0BA060u);
	r3 = 0xC0BB980u; UPD(0x0C0BA062u, 1);  /* 0C0BA060 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA062 mov Rm,Rn */
	r15 = r14;  /* 0C0BA064 mov Rm,Rn */
	IF(0x0C0BA066u); PR = R32(r15); r15 += 4; UPD(0x0C0BA068u, 3);  /* 0C0BA066 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA06Au, 1);  /* 0C0BA068 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA06Cu, 1);  /* 0C0BA06A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA06Eu, 1);  /* 0C0BA06C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA070u, 1);  /* 0C0BA06E mov.l @Rm+,Rn */
	IF(0x0C0BA070u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB980u: goto L_0C0BB980; default: JUMPD(tv_); } }  /* 0C0BA070 jmp @Rn */
L_0C0BA080: BLKS(0x0C0BA080u);
	r9 = 0x54u;  /* 0C0BA080 mov #imm,Rn */
	IF(0x0C0BA082u); MACL = r8 * r9;  /* 0C0BA082 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BA086u, 4);  /* 0C0BA084 mov.l @(disp,pc),Rn */
	IF(0x0C0BA086u); r9 = MACL;  /* 0C0BA086 sts macl,Rn */
	r9 += r5;  /* 0C0BA088 add Rm,Rn */
	r0 = r9;  /* 0C0BA08A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0BA08C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BA090u, 5);  /* 0C0BA08E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0BA090 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0BA094u, 2);  /* 0C0BA092 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0BA094 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BA096 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B9FD4u, 5); goto L_0C0B9FD4; }  /* 0C0BA098 bf */
L_0C0BA09A: BLKS(0x0C0BA09Au);
	r4 = r8;  /* 0C0BA09A mov Rm,Rn */
	r3 = 0xC0B9E20u; UPD(0x0C0BA09Eu, 2);  /* 0C0BA09C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0BA0A0u, 1);  /* 0C0BA09E mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C0BA0A0 mov #imm,Rn */
	IF(0x0C0BA0A2u); { u32 t_ = r3; PR = 0x0C0BA0A6u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0BA0A6u); }  /* 0C0BA0A2 jsr @Rn */
L_0C0BA0A6: BLKS(0x0C0BA0A6u);
	{ W32(r9 + 0x3Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9FD4u, 3); goto L_0C0B9FD4; }  /* 0C0BA0A6 bra */
L_0C0BB980: BLKS(0x0C0BB980u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB980 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB982 mov #imm,Rn */
	IF(0x0C0BB984u); MACL = r2 * r0;  /* 0C0BB984 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB988u, 5);  /* 0C0BB986 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0BB988 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB98Cu, 2);  /* 0C0BB98A mov.l Rm,@-Rn */
	IF(0x0C0BB98Cu); r0 = MACL;  /* 0C0BB98C sts macl,Rn */
	r0 += r6;  /* 0C0BB98E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BB992u, 3);  /* 0C0BB990 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BB992 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BB996u, 2);  /* 0C0BB994 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BB996 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BB99Au, 2);  /* 0C0BB998 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BB99A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BB99Eu, 2);  /* 0C0BB99C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BB9A0u, 1);  /* 0C0BB99E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BB9A2u, 1);  /* 0C0BB9A0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BB9A4u, 1);  /* 0C0BB9A2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BB9A6u, 1);  /* 0C0BB9A4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BB9A8u, 1);  /* 0C0BB9A6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BB9AAu, 1);  /* 0C0BB9A8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0BB9ACu, 1);  /* 0C0BB9AA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BB9AEu, 1);  /* 0C0BB9AC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BB9B0u, 1);  /* 0C0BB9AE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BB9B2u, 1);  /* 0C0BB9B0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BB9B4u, 1);  /* 0C0BB9B2 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB9B6u, 1);  /* 0C0BB9B4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BB9B8u, 1);  /* 0C0BB9B6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB9BAu, 1);  /* 0C0BB9B8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BB9BA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BB9BEu, 2);  /* 0C0BB9BC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BB9BE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BB9C2u, 2);  /* 0C0BB9C0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BB9C4u, 1);  /* 0C0BB9C2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BB9C4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BB9C8u, 2);  /* 0C0BB9C6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BB9CAu, 1);  /* 0C0BB9C8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BB9CA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BB9CEu, 2);  /* 0C0BB9CC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BB9CE mov Rm,Rn */
	IF(0x0C0BB9D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BB9D0 rts */
}

void blk_f_0C0BA0E0(sh3_t *c)
{
	LOCALS;
L_0C0BA0E0: BLKS(0x0C0BA0E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0E2u, 1);  /* 0C0BA0E0 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0BA0E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0E6u, 2);  /* 0C0BA0E4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0BA0E6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0EAu, 2);  /* 0C0BA0E8 mov.l Rm,@-Rn */
	IF(0x0C0BA0EAu); MACL = r8 * r3;  /* 0C0BA0EA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0EEu, 3);  /* 0C0BA0EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0F0u, 1);  /* 0C0BA0EE mov.l Rm,@-Rn */
	IF(0x0C0BA0F0u); r2 = MACL;  /* 0C0BA0F0 sts macl,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BA0F4u, 2);  /* 0C0BA0F2 mov.l @(disp,pc),Rn */
	IF(0x0C0BA0F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA0F6u, 1);  /* 0C0BA0F4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0BA0F6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0BA0FAu, 2);  /* 0C0BA0F8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Bu;  /* 0C0BA0FA mov #imm,Rn */
	T = r2 > r0;  /* 0C0BA0FC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BA194u, 5); goto L_0C0BA194; } goto L_0C0BA102; }  /* 0C0BA0FE bt/s */
L_0C0BA102: BLKS(0x0C0BA102u);
	r0 = 0xC0BA110u;  /* 0C0BA102 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0BA104 add Rm,Rn */
	IF(0x0C0BA106u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0BA108u, 4);  /* 0C0BA106 mov.w @(r0,Rm),Rn */
	IF(0x0C0BA108u); { u32 tv_ = (r4 + 0x0C0BA10Cu); u32 t_ = PHYS(tv_); IF(0x0C0BA10Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0BA150u: goto L_0C0BA150; case 0x0C0BA1D0u: goto L_0C0BA1D0; case 0x0C0BA240u: goto L_0C0BA240; default: JUMPD(tv_); } }  /* 0C0BA108 braf Rn */
L_0C0BA150: BLKS(0x0C0BA150u);
	r9 = 0x54u;  /* 0C0BA150 mov #imm,Rn */
	IF(0x0C0BA152u); MACL = r8 * r9;  /* 0C0BA152 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0BA156u, 4);  /* 0C0BA154 mov.l @(disp,pc),Rn */
	IF(0x0C0BA156u); r3 = MACL;  /* 0C0BA156 sts macl,Rn */
	r3 += r8;  /* 0C0BA158 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0BA15Cu, 3);  /* 0C0BA15A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x30u); UPD(0x0C0BA15Eu, 1);  /* 0C0BA15C mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0BA15E add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0BA162u, 2);  /* 0C0BA160 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x34u); UPD(0x0C0BA164u, 1);  /* 0C0BA162 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0BA164 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BA168u, 2);  /* 0C0BA166 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0BA16Au, 1);  /* 0C0BA168 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0BA16A add Rm,Rn */
	IF(0x0C0BA16Cu); T = (s32)r7 >= 0;  /* 0C0BA16C cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA1C0u, 5); goto L_0C0BA1C0; } UPD(0x0C0BA172u, 1); goto L_0C0BA172; }  /* 0C0BA16E bf/s */
L_0C0BA172: BLKS(0x0C0BA172u);
	r10 = 0xD00000u; UPD(0x0C0BA174u, 1);  /* 0C0BA172 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0BA174 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA192u, 4); goto L_0C0BA192; } goto L_0C0BA17A; }  /* 0C0BA176 bt/s */
L_0C0BA17A: BLKS(0x0C0BA17Au);
	r2 = 0xC3C4048u; UPD(0x0C0BA17Cu, 2);  /* 0C0BA17A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA17Eu, 1);  /* 0C0BA17C mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0BA180u, 1);  /* 0C0BA17E mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BA180 mov Rm,Rn */
	r2 -= r0;  /* 0C0BA182 sub Rm,Rn */
	r2 += r11;  /* 0C0BA184 add Rm,Rn */
	IF(0x0C0BA186u); T = (s32)r2 >= 0;  /* 0C0BA186 cmp/pz Rn */
	if (!T) { UPD(0x0C0BA1B0u, 7); goto L_0C0BA1B0; }  /* 0C0BA188 bf */
L_0C0BA18A: BLKS(0x0C0BA18Au);
	r4 = 0xA80000u; UPD(0x0C0BA18Cu, 1);  /* 0C0BA18A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA18C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BA194u, 4); goto L_0C0BA194; }  /* 0C0BA18E bf */
L_0C0BA190: BLKS(0x0C0BA190u);
	r5 = 0x0u;  /* 0C0BA190 mov #imm,Rn */
	UPD(0x0C0BA192u, 1);
L_0C0BA192: BLKS(0x0C0BA192u);
	W32(r3, r5); UPD(0x0C0BA194u, 1);  /* 0C0BA192 mov.l Rm,@Rn */
L_0C0BA194: BLKS(0x0C0BA194u);
	r15 = r14;  /* 0C0BA194 mov Rm,Rn */
	IF(0x0C0BA196u); PR = R32(r15); r15 += 4; UPD(0x0C0BA198u, 2);  /* 0C0BA196 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA19Au, 1);  /* 0C0BA198 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA19Cu, 1);  /* 0C0BA19A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA19Eu, 1);  /* 0C0BA19C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA1A0u, 1);  /* 0C0BA19E mov.l @Rm+,Rn */
	IF(0x0C0BA1A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA1A0 rts */
L_0C0BA1B0: BLKS(0x0C0BA1B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA18Au, 3); goto L_0C0BA18A; }  /* 0C0BA1B0 bra */
L_0C0BA1C0: BLKS(0x0C0BA1C0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BA172u, 3); goto L_0C0BA172; }  /* 0C0BA1C0 bra */
L_0C0BA1D0: BLKS(0x0C0BA1D0u);
	r9 = 0xC0BB920u; UPD(0x0C0BA1D2u, 1);  /* 0C0BA1D0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA1D2u); { u32 t_ = r9; PR = 0x0C0BA1D6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA1D6u); }  /* 0C0BA1D2 jsr @Rn */
L_0C0BA1D6: BLKS(0x0C0BA1D6u);
	IF(0x0C0BA1D6u); T = (s32)r0 >= 0;  /* 0C0BA1D6 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA220u, 4); goto L_0C0BA220; } goto L_0C0BA1DC; }  /* 0C0BA1D8 bf/s */
L_0C0BA1DC: BLKS(0x0C0BA1DCu);
	IF(0x0C0BA1DCu); MACL = r8 * r2;  /* 0C0BA1DC mul.l Rm,Rn */
	r11 = 0xC297B40u; UPD(0x0C0BA1E0u, 4);  /* 0C0BA1DE mov.l @(disp,pc),Rn */
	IF(0x0C0BA1E0u); r9 = MACL;  /* 0C0BA1E0 sts macl,Rn */
	IF(0x0C0BA1E2u); MACL = r0 * r2;  /* 0C0BA1E2 mul.l Rm,Rn */
	r9 += r11;  /* 0C0BA1E4 add Rm,Rn */
	r9 += 0x44u;  /* 0C0BA1E6 add #imm,Rn */
	IF(0x0C0BA1E8u); r8 = MACL;  /* 0C0BA1E8 sts macl,Rn */
	r8 += r11;  /* 0C0BA1EA add Rm,Rn */
	r8 += 0x44u;  /* 0C0BA1EC add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BA1F0u, 9);  /* 0C0BA1EE mov.w @Rm,Rn */
	W16(r9, r10); UPD(0x0C0BA1F2u, 1);  /* 0C0BA1F0 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA1F2 mov Rm,Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0BA1F4 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BA1F8u, 3);  /* 0C0BA1F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA1F8 add #imm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C0BA1FCu, 2);  /* 0C0BA1FA mov.l @(disp,Rm),Rn */
	IF(0x0C0BA1FCu); { u32 t_ = r0; PR = 0x0C0BA200u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA200u); }  /* 0C0BA1FC jsr @Rn */
L_0C0BA200: BLKS(0x0C0BA200u);
	r4 = r10;  /* 0C0BA200 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0BA204u, 2);  /* 0C0BA202 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0BA204 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0BA208u, 2);  /* 0C0BA206 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0BA208 add Rm,Rn */
	IF(0x0C0BA20Au); { u32 t_ = r10; PR = 0x0C0BA20Eu; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA20Eu); }  /* 0C0BA20A jsr @Rn */
L_0C0BA20E: BLKS(0x0C0BA20Eu);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0BA210u, 1);  /* 0C0BA20E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0BA210 add Rm,Rn */
	{ W32(r9 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA194u, 4); goto L_0C0BA194; }  /* 0C0BA212 bra */
L_0C0BA220: BLKS(0x0C0BA220u);
	r3 = 0xC0BB9F0u; UPD(0x0C0BA222u, 1);  /* 0C0BA220 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA222 mov Rm,Rn */
	r15 = r14;  /* 0C0BA224 mov Rm,Rn */
	IF(0x0C0BA226u); PR = R32(r15); r15 += 4; UPD(0x0C0BA228u, 3);  /* 0C0BA226 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA22Au, 1);  /* 0C0BA228 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA22Cu, 1);  /* 0C0BA22A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA22Eu, 1);  /* 0C0BA22C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA230u, 1);  /* 0C0BA22E mov.l @Rm+,Rn */
	IF(0x0C0BA230u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB9F0u: TAIL(blk_f_0C0BB9F0); default: JUMPD(tv_); } }  /* 0C0BA230 jmp @Rn */
L_0C0BA240: BLKS(0x0C0BA240u);
	r9 = 0x54u;  /* 0C0BA240 mov #imm,Rn */
	IF(0x0C0BA242u); MACL = r8 * r9;  /* 0C0BA242 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BA246u, 4);  /* 0C0BA244 mov.l @(disp,pc),Rn */
	IF(0x0C0BA246u); r9 = MACL;  /* 0C0BA246 sts macl,Rn */
	r9 += r5;  /* 0C0BA248 add Rm,Rn */
	r0 = r9;  /* 0C0BA24A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0BA24C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BA250u, 5);  /* 0C0BA24E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0BA250 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0BA254u, 2);  /* 0C0BA252 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0BA254 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BA256 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0BA194u, 5); goto L_0C0BA194; }  /* 0C0BA258 bf */
L_0C0BA25A: BLKS(0x0C0BA25Au);
	r4 = r8;  /* 0C0BA25A mov Rm,Rn */
	r3 = 0xC0B9E20u; UPD(0x0C0BA25Eu, 2);  /* 0C0BA25C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0BA260u, 1);  /* 0C0BA25E mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C0BA260 mov #imm,Rn */
	IF(0x0C0BA262u); { u32 t_ = r3; PR = 0x0C0BA266u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0BA266u); }  /* 0C0BA262 jsr @Rn */
L_0C0BA266: BLKS(0x0C0BA266u);
	{ W32(r9 + 0x3Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA194u, 3); goto L_0C0BA194; }  /* 0C0BA266 bra */
}

void blk_f_0C0BA2A0(sh3_t *c)
{
	LOCALS;
L_0C0BA2A0: BLKS(0x0C0BA2A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A2u, 1);  /* 0C0BA2A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A4u, 1);  /* 0C0BA2A2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0BA2A4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A8u, 2);  /* 0C0BA2A6 mov.l Rm,@-Rn */
	r9 = 0x54u;  /* 0C0BA2A8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2ACu, 2);  /* 0C0BA2AA mov.l Rm,@-Rn */
	IF(0x0C0BA2ACu); MACL = r8 * r9;  /* 0C0BA2AC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B0u, 3);  /* 0C0BA2AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B2u, 1);  /* 0C0BA2B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B4u, 1);  /* 0C0BA2B2 mov.l Rm,@-Rn */
	IF(0x0C0BA2B4u); r13 = MACL;  /* 0C0BA2B4 sts macl,Rn */
	r10 = 0xC297B40u; UPD(0x0C0BA2B8u, 2);  /* 0C0BA2B6 mov.l @(disp,pc),Rn */
	IF(0x0C0BA2B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA2BAu, 1);  /* 0C0BA2B8 sts.l pr,@-Rn */
	r13 += r10;  /* 0C0BA2BA add Rm,Rn */
	r0 = R32(r13 + 0x8u); UPD(0x0C0BA2BEu, 2);  /* 0C0BA2BC mov.l @(disp,Rm),Rn */
	IF(0x0C0BA2BEu); T = (s32)r0 >= 0;  /* 0C0BA2BE cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; } goto L_0C0BA2C4; }  /* 0C0BA2C0 bf/s */
L_0C0BA2C4: BLKS(0x0C0BA2C4u);
	r2 = 0x2u;  /* 0C0BA2C4 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0BA2C6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0BA2D0u, 6); goto L_0C0BA2D0; } goto L_0C0BA2CC; }  /* 0C0BA2C8 bt/s */
L_0C0BA2CC: BLKS(0x0C0BA2CCu);
	{ IF(0x0C0BA2CEu); ; /* slot nop */ UPD(0x0C0BA3E0u, 4); goto L_0C0BA3E0; }  /* 0C0BA2CC bra */
L_0C0BA2D0: BLKS(0x0C0BA2D0u);
	if (T) { UPD(0x0C0BA2F0u, 3); goto L_0C0BA2F0; }  /* 0C0BA2D0 bt */
L_0C0BA2D2: BLKS(0x0C0BA2D2u);
	r15 = r14;  /* 0C0BA2D2 mov Rm,Rn */
	IF(0x0C0BA2D4u); PR = R32(r15); r15 += 4; UPD(0x0C0BA2D6u, 2);  /* 0C0BA2D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA2D8u, 1);  /* 0C0BA2D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA2DAu, 1);  /* 0C0BA2D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA2DCu, 1);  /* 0C0BA2DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA2DEu, 1);  /* 0C0BA2DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA2E0u, 1);  /* 0C0BA2DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA2E2u, 1);  /* 0C0BA2E0 mov.l @Rm+,Rn */
	IF(0x0C0BA2E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA2E2 rts */
L_0C0BA2F0: BLKS(0x0C0BA2F0u);
	r0 = R32(r13 + 0x28u); UPD(0x0C0BA2F2u, 1);  /* 0C0BA2F0 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x30u); UPD(0x0C0BA2F4u, 1);  /* 0C0BA2F2 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0BA2F4 add Rm,Rn */
	r3 = R32(r13 + 0x2Cu); UPD(0x0C0BA2F8u, 2);  /* 0C0BA2F6 mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x34u); UPD(0x0C0BA2FAu, 1);  /* 0C0BA2F8 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BA2FCu, 1);  /* 0C0BA2FA mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0BA2FC add Rm,Rn */
	r2 += r0;  /* 0C0BA2FE add Rm,Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C0BA302u, 3);  /* 0C0BA300 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA302u); T = (s32)r2 >= 0;  /* 0C0BA302 cmp/pz Rn */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA3D0u, 4); goto L_0C0BA3D0; } UPD(0x0C0BA308u, 1); goto L_0C0BA308; }  /* 0C0BA304 bf/s */
L_0C0BA308: BLKS(0x0C0BA308u);
	r4 = 0xE00000u; UPD(0x0C0BA30Au, 1);  /* 0C0BA308 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA30A cmp/gt Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA328u, 4); goto L_0C0BA328; } goto L_0C0BA310; }  /* 0C0BA30C bt/s */
L_0C0BA310: BLKS(0x0C0BA310u);
	r2 = 0xC3C4048u; UPD(0x0C0BA312u, 2);  /* 0C0BA310 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0BA314u, 1);  /* 0C0BA312 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BA316u, 1);  /* 0C0BA314 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0BA316 mov Rm,Rn */
	r2 -= r6;  /* 0C0BA318 sub Rm,Rn */
	r2 += r5;  /* 0C0BA31A add Rm,Rn */
	IF(0x0C0BA31Cu); T = (s32)r2 >= 0;  /* 0C0BA31C cmp/pz Rn */
	if (!T) { UPD(0x0C0BA3C0u, 7); goto L_0C0BA3C0; }  /* 0C0BA31E bf */
L_0C0BA320: BLKS(0x0C0BA320u);
	r7 = 0xB80000u; UPD(0x0C0BA322u, 1);  /* 0C0BA320 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BA322 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA330u, 4); goto L_0C0BA330; } UPD(0x0C0BA328u, 1); goto L_0C0BA328; }  /* 0C0BA324 bf/s */
L_0C0BA328: BLKS(0x0C0BA328u);
	{ W32(r13, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0BA2D2u, 3); goto L_0C0BA2D2; }  /* 0C0BA328 bra */
L_0C0BA330: BLKS(0x0C0BA330u);
	r3 = r13;  /* 0C0BA330 mov Rm,Rn */
	r3 += 0x51u;  /* 0C0BA332 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BA336u, 3);  /* 0C0BA334 mov.b @Rm,Rn */
	r11 = r13;  /* 0C0BA336 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0BA338 add #imm,Rn */
	r4 += 0x1u;  /* 0C0BA33A add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0BA33Eu, 4);  /* 0C0BA33C mov.l @Rm,Rn */
	r10 = r4 & 0xFF;  /* 0C0BA33E extu.b Rm,Rn */
	W8(r3, r4); UPD(0x0C0BA342u, 2);  /* 0C0BA340 mov.b Rm,@Rn */
	IF(0x0C0BA342u); r0 >>= 16;  /* 0C0BA342 shlr16 Rn */
	r12 = 0xC1F7EC4u; UPD(0x0C0BA346u, 2);  /* 0C0BA344 mov.l @(disp,pc),Rn */
	IF(0x0C0BA346u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0BA348u, 1);  /* 0C0BA346 mov.b @(r0,Rm),Rn */
	T = (s32)r10 >= (s32)r9;  /* 0C0BA348 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; }  /* 0C0BA34A bf */
L_0C0BA34C: BLKS(0x0C0BA34Cu);
	r13 += 0x44u;  /* 0C0BA34C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C0BA350u, 2);  /* 0C0BA34E mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C0BA350 mov #imm,Rn */
	r1 = 0x100u; UPD(0x0C0BA354u, 2);  /* 0C0BA352 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0BA354 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0BA358u, 2);  /* 0C0BA356 mov.b Rm,@Rn */
	r4 += r1;  /* 0C0BA358 add Rm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0BA35Cu, 2);  /* 0C0BA35A mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0BA35C exts.w Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0BA360u, 2);  /* 0C0BA35E mov.l @(disp,pc),Rn */
	IF(0x0C0BA360u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0BA360 shar Rn */
	r4 = r12;  /* 0C0BA362 mov Rm,Rn */
	IF(0x0C0BA364u); { u32 t_ = r10; PR = 0x0C0BA368u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA368u); }  /* 0C0BA364 jsr @Rn */
L_0C0BA368: BLKS(0x0C0BA368u);
	r7 = 0xC069AF0u; UPD(0x0C0BA36Au, 1);  /* 0C0BA368 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0BA36A mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0BA36Eu, 2);  /* 0C0BA36C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0BA36E mov Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0BA372u, 2);  /* 0C0BA370 mov.l @(disp,pc),Rn */
	IF(0x0C0BA372u); { u32 t_ = r7; PR = 0x0C0BA376u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA376u); }  /* 0C0BA372 jsr @Rn */
L_0C0BA376: BLKS(0x0C0BA376u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0BA378u, 1);  /* 0C0BA376 mov.l @(disp,Rm),Rn */
	r4 = 0x3Fu;  /* 0C0BA378 mov #imm,Rn */
	IF(0x0C0BA37Au); { u32 t_ = r8; PR = 0x0C0BA37Eu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA37Eu); }  /* 0C0BA37A jsr @Rn */
L_0C0BA37E: BLKS(0x0C0BA37Eu);
	r8 = R32(r11); UPD(0x0C0BA380u, 1);  /* 0C0BA37E mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0BA380 add #imm,Rn */
	r6 = 0xC069B20u; UPD(0x0C0BA384u, 2);  /* 0C0BA382 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0BA384 add Rm,Rn */
	r5 = 0x14u;  /* 0C0BA386 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0BA38Au, 3);  /* 0C0BA388 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0BA38A add #imm,Rn */
	r2 = 0x0u;  /* 0C0BA38C mov #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BA38E exts.w Rm,Rn */
	IF(0x0C0BA390u); r8 >>= 2;  /* 0C0BA390 shlr2 Rn */
	W32(r15, r2); UPD(0x0C0BA394u, 5);  /* 0C0BA392 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0BA394 mov Rm,Rn */
	IF(0x0C0BA396u); { u32 t_ = r6; PR = 0x0C0BA39Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA39Au); }  /* 0C0BA396 jsr @Rn */
L_0C0BA39A: BLKS(0x0C0BA39Au);
	r3 = 0xC069AF0u; UPD(0x0C0BA39Cu, 1);  /* 0C0BA39A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0BA39C mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0BA3A0u, 2);  /* 0C0BA39E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA3A0u); { u32 t_ = r3; PR = 0x0C0BA3A4u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA3A4u); }  /* 0C0BA3A0 jsr @Rn */
L_0C0BA3A4: BLKS(0x0C0BA3A4u);
	W32(r15 + 0xCu, r0); UPD(0x0C0BA3A6u, 1);  /* 0C0BA3A4 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0BA3A6 mov #imm,Rn */
	r0 = 0x8000u; UPD(0x0C0BA3AAu, 2);  /* 0C0BA3A8 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C0BA3AA mov Rm,Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C0BA3AEu, 2);  /* 0C0BA3AC mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C0BA3AE mov Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C0BA3B2u, 2);  /* 0C0BA3B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA3B2u); { u32 t_ = r11; PR = 0x0C0BA3B6u; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0BA3B6u); }  /* 0C0BA3B2 jsr @Rn */
L_0C0BA3B6: BLKS(0x0C0BA3B6u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0BA2D2u, 3); goto L_0C0BA2D2; }  /* 0C0BA3B6 bra */
L_0C0BA3C0: BLKS(0x0C0BA3C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA320u, 3); goto L_0C0BA320; }  /* 0C0BA3C0 bra */
L_0C0BA3D0: BLKS(0x0C0BA3D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA308u, 3); goto L_0C0BA308; }  /* 0C0BA3D0 bra */
L_0C0BA3E0: BLKS(0x0C0BA3E0u);
	r11 = 0xC0BB920u; UPD(0x0C0BA3E2u, 1);  /* 0C0BA3E0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA3E2u); { u32 t_ = r11; PR = 0x0C0BA3E6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA3E6u); }  /* 0C0BA3E2 jsr @Rn */
L_0C0BA3E6: BLKS(0x0C0BA3E6u);
	IF(0x0C0BA3E6u); T = (s32)r0 >= 0;  /* 0C0BA3E6 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0BA3EAu); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0BA420u, 5); goto L_0C0BA420; } goto L_0C0BA3EC; }  /* 0C0BA3E8 bf/s */
L_0C0BA3EC: BLKS(0x0C0BA3ECu);
	r13 += 0x44u;  /* 0C0BA3EC add #imm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0BA3F0u, 4);  /* 0C0BA3EE mov.l @(disp,pc),Rn */
	IF(0x0C0BA3F0u); r12 = MACL;  /* 0C0BA3F0 sts macl,Rn */
	r12 += r10;  /* 0C0BA3F2 add Rm,Rn */
	r12 += 0x44u;  /* 0C0BA3F4 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C0BA3F8u, 4);  /* 0C0BA3F6 mov.w @Rm,Rn */
	W16(r13, r10); UPD(0x0C0BA3FAu, 1);  /* 0C0BA3F8 mov.w Rm,@Rn */
	r12 += 0xFFFFFFBCu;  /* 0C0BA3FA add #imm,Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0BA3FC add #imm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BA400u, 3);  /* 0C0BA3FE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BA400 mov Rm,Rn */
	r11 = R32(r13 + 0x38u); UPD(0x0C0BA404u, 2);  /* 0C0BA402 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA404u); { u32 t_ = r9; PR = 0x0C0BA408u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA408u); }  /* 0C0BA404 jsr @Rn */
L_0C0BA408: BLKS(0x0C0BA408u);
	r6 = R32(r12 + 0x28u); UPD(0x0C0BA40Au, 1);  /* 0C0BA408 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BA40A mov Rm,Rn */
	r6 += r0;  /* 0C0BA40C add Rm,Rn */
	W32(r13 + 0x28u, r6); UPD(0x0C0BA410u, 3);  /* 0C0BA40E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA410u); { u32 t_ = r8; PR = 0x0C0BA414u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA414u); }  /* 0C0BA410 jsr @Rn */
L_0C0BA414: BLKS(0x0C0BA414u);
	r3 = R32(r12 + 0x2Cu); UPD(0x0C0BA416u, 1);  /* 0C0BA414 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0BA416 add Rm,Rn */
	{ W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; }  /* 0C0BA418 bra */
L_0C0BA420: BLKS(0x0C0BA420u);
	r0 = 0xC0BB9F0u; UPD(0x0C0BA422u, 1);  /* 0C0BA420 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA422 mov Rm,Rn */
	r15 = r14;  /* 0C0BA424 mov Rm,Rn */
	IF(0x0C0BA426u); PR = R32(r15); r15 += 4; UPD(0x0C0BA428u, 3);  /* 0C0BA426 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA42Au, 1);  /* 0C0BA428 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA42Cu, 1);  /* 0C0BA42A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA42Eu, 1);  /* 0C0BA42C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA430u, 1);  /* 0C0BA42E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA432u, 1);  /* 0C0BA430 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA434u, 1);  /* 0C0BA432 mov.l @Rm+,Rn */
	IF(0x0C0BA434u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB9F0u: TAIL(blk_f_0C0BB9F0); default: JUMPD(tv_); } }  /* 0C0BA434 jmp @Rn */
}

/* FUN_0c0ba480 */
void blk_f_0C0BA480(sh3_t *c)
{
	LOCALS;
L_0C0BA480: BLKS(0x0C0BA480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA482u, 1);  /* 0C0BA480 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA484u, 1);  /* 0C0BA482 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA486u, 1);  /* 0C0BA484 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BA486 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA48Au, 2);  /* 0C0BA488 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BA48A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA48Eu, 2);  /* 0C0BA48C mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BA48E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA492u, 2);  /* 0C0BA490 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BA492 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA496u, 2);  /* 0C0BA494 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BA498u, 1);  /* 0C0BA496 mov.l @(disp,pc),Rn */
	IF(0x0C0BA498u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA49Au, 1);  /* 0C0BA498 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BA49Cu, 1);  /* 0C0BA49A mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BA49C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BA49E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D0u, 5); goto L_0C0BA4D0; } goto L_0C0BA4A4; }  /* 0C0BA4A0 bf/s */
L_0C0BA4A4: BLKS(0x0C0BA4A4u);
	r2 = 0xFF580000u; UPD(0x0C0BA4A6u, 2);  /* 0C0BA4A4 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BA4A6 add Rm,Rn */
	IF(0x0C0BA4A8u); T = (s32)r2 >= 0;  /* 0C0BA4A8 cmp/pz Rn */
	if (T) { UPD(0x0C0BA4AEu, 5); goto L_0C0BA4AE; }  /* 0C0BA4AA bt */
L_0C0BA4AC: BLKS(0x0C0BA4ACu);
	r2 = 0u - r2;  /* 0C0BA4AC neg Rm,Rn */
	UPD(0x0C0BA4AEu, 1);
L_0C0BA4AE: BLKS(0x0C0BA4AEu);
	r0 = 0x980000u; UPD(0x0C0BA4B0u, 1);  /* 0C0BA4AE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BA4B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D0u, 4); goto L_0C0BA4D0; } goto L_0C0BA4B6; }  /* 0C0BA4B2 bt/s */
L_0C0BA4B6: BLKS(0x0C0BA4B6u);
	r5 = 0xC3C4048u; UPD(0x0C0BA4B8u, 2);  /* 0C0BA4B6 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BA4B8 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BA4BCu, 2);  /* 0C0BA4BA mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BA4BEu, 1);  /* 0C0BA4BC mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BA4BE sub Rm,Rn */
	r2 += r3;  /* 0C0BA4C0 add Rm,Rn */
	IF(0x0C0BA4C2u); T = (s32)r2 >= 0;  /* 0C0BA4C2 cmp/pz Rn */
	if (T) { UPD(0x0C0BA4C8u, 6); goto L_0C0BA4C8; }  /* 0C0BA4C4 bt */
L_0C0BA4C6: BLKS(0x0C0BA4C6u);
	r2 = 0u - r2;  /* 0C0BA4C6 neg Rm,Rn */
	UPD(0x0C0BA4C8u, 1);
L_0C0BA4C8: BLKS(0x0C0BA4C8u);
	r6 = 0x700000u; UPD(0x0C0BA4CAu, 1);  /* 0C0BA4C8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BA4CA cmp/gt Rm,Rn */
	IF(0x0C0BA4CCu); r0 = T;  /* 0C0BA4CC movt Rn */
	r0 ^= 0x1u;  /* 0C0BA4CE xor #imm,r0 */
	UPD(0x0C0BA4D0u, 3);
L_0C0BA4D0: BLKS(0x0C0BA4D0u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BA4D0 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BA4D2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4F0u, 5); goto L_0C0BA4F0; } UPD(0x0C0BA4D8u, 1); goto L_0C0BA4D8; }  /* 0C0BA4D4 bf/s */
L_0C0BA4D8: BLKS(0x0C0BA4D8u);
	r15 = r14;  /* 0C0BA4D8 mov Rm,Rn */
	IF(0x0C0BA4DAu); PR = R32(r15); r15 += 4; UPD(0x0C0BA4DCu, 2);  /* 0C0BA4DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA4DEu, 1);  /* 0C0BA4DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA4E0u, 1);  /* 0C0BA4DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA4E2u, 1);  /* 0C0BA4E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA4E4u, 1);  /* 0C0BA4E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA4E6u, 1);  /* 0C0BA4E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA4E8u, 1);  /* 0C0BA4E6 mov.l @Rm+,Rn */
	IF(0x0C0BA4E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA4E8 rts */
L_0C0BA4F0: BLKS(0x0C0BA4F0u);
	r8 = 0xC0717A0u; UPD(0x0C0BA4F2u, 1);  /* 0C0BA4F0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA4F2u); { u32 t_ = r8; PR = 0x0C0BA4F6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA4F6u); }  /* 0C0BA4F2 jsr @Rn */
L_0C0BA4F6: BLKS(0x0C0BA4F6u);
	T = (r0 & r0) == 0;  /* 0C0BA4F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D8u, 4); goto L_0C0BA4D8; } goto L_0C0BA4FC; }  /* 0C0BA4F8 bt/s */
L_0C0BA4FC: BLKS(0x0C0BA4FCu);
	r13 = 0x4u;  /* 0C0BA4FC mov #imm,Rn */
	T = (s32)r9 > (s32)r13;  /* 0C0BA4FE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA5B0u, 6); goto L_0C0BA5B0; }  /* 0C0BA500 bt */
L_0C0BA502: BLKS(0x0C0BA502u);
	r2 = 0xC234BECu; UPD(0x0C0BA504u, 1);  /* 0C0BA502 mov.l @(disp,pc),Rn */
	r13 = R32(r2); UPD(0x0C0BA506u, 1);  /* 0C0BA504 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BA506 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D8u, 4); goto L_0C0BA4D8; } goto L_0C0BA50C; }  /* 0C0BA508 bf/s */
L_0C0BA50C: BLKS(0x0C0BA50Cu);
	r2 = 0xC28EDFCu; UPD(0x0C0BA50Eu, 2);  /* 0C0BA50C mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C0BA50E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BA512u, 2);  /* 0C0BA510 mov.w @Rm,Rn */
	IF(0x0C0BA512u); MACL = r6 * r8;  /* 0C0BA512 mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA516u, 3);  /* 0C0BA514 mov.l @(disp,pc),Rn */
	IF(0x0C0BA516u); r8 = MACL;  /* 0C0BA516 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA51Au, 2);  /* 0C0BA518 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA51A add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA51Eu, 2);  /* 0C0BA51C mov.l Rm,@Rn */
	r5 = 0xC1EADA4u; UPD(0x0C0BA520u, 1);  /* 0C0BA51E mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C0BA522u, 1);  /* 0C0BA520 mov.l @Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0BA524u, 1);  /* 0C0BA522 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C0BA526u, 1);  /* 0C0BA524 mov.l @(disp,pc),Rn */
	IF(0x0C0BA526u); { u32 t_ = r0; PR = 0x0C0BA52Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA52Au); }  /* 0C0BA526 jsr @Rn */
L_0C0BA52A: BLKS(0x0C0BA52Au);
	r0 += 0x5u;  /* 0C0BA52A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA52Eu, 2);  /* 0C0BA52C mov.l Rm,@(disp,Rn) */
	r7 = 0x3u;  /* 0C0BA52E mov #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0BA532u, 2);  /* 0C0BA530 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BA532 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BA534 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BA538u, 3);  /* 0C0BA536 mov.w Rm,@Rn */
	r9 = 0x3Fu;  /* 0C0BA538 mov #imm,Rn */
	r10 += 0x4u;  /* 0C0BA53A add #imm,Rn */
	r5 = r10;  /* 0C0BA53C mov Rm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA53E add #imm,Rn */
	IF(0x0C0BA540u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA540 shar Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BA544u, 6);  /* 0C0BA542 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA544u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA544 shar Rn */
	IF(0x0C0BA546u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA546 shar Rn */
	r5 &= r9;  /* 0C0BA548 and Rm,Rn */
	IF(0x0C0BA54Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BA54A shld Rm,Rn */
	r6 = 0xC1F7E08u; UPD(0x0C0BA54Eu, 5);  /* 0C0BA54C mov.l @(disp,pc),Rn */
	IF(0x0C0BA54Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA54E shld Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C0BA552u, 2);  /* 0C0BA550 mov.l Rm,@(disp,Rn) */
	r4 += r6;  /* 0C0BA552 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BA556u, 2);  /* 0C0BA554 mov.l @(disp,Rm),Rn */
	r9 = 0x3u;  /* 0C0BA556 mov #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA55Au, 2);  /* 0C0BA558 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA55Au); ARG0(0x459Du); { s32 s_ = (s32)r9; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BA55A shld Rm,Rn */
	r3 = R32(r4); UPD(0x0C0BA55Eu, 2);  /* 0C0BA55C mov.l @Rm,Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0BA55E add #imm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BA562u, 2);  /* 0C0BA560 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA562u); r7 = R32(r0 + r3); UPD(0x0C0BA564u, 1);  /* 0C0BA562 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BA566u, 1);  /* 0C0BA564 mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BA566 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C0BA56Au, 2);  /* 0C0BA568 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0BA56Cu, 1);  /* 0C0BA56A mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0BA56Eu, 1);  /* 0C0BA56C mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BA570u, 1);  /* 0C0BA56E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BA572u, 1);  /* 0C0BA570 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BA574u, 1);  /* 0C0BA572 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA574 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0BA578u, 2);  /* 0C0BA576 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA578 mov Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA57A add #imm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0BA57Eu, 3);  /* 0C0BA57C mov.l Rm,@(disp,Rn) */
	r11 = 0xC069B20u; UPD(0x0C0BA580u, 1);  /* 0C0BA57E mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA582u, 1);  /* 0C0BA580 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BA584u, 1);  /* 0C0BA582 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA584u); { u32 t_ = r11; PR = 0x0C0BA588u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA588u); }  /* 0C0BA584 jsr @Rn */
L_0C0BA588: BLKS(0x0C0BA588u);
	r4 = r10;  /* 0C0BA588 mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA58Cu, 2);  /* 0C0BA58A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA58Cu); { u32 t_ = r9; PR = 0x0C0BA590u; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA590u); }  /* 0C0BA58C jsr @Rn */
L_0C0BA590: BLKS(0x0C0BA590u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA592u, 1);  /* 0C0BA590 mov.l Rm,@(disp,Rn) */
	r4 = 0x69u;  /* 0C0BA592 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BA594 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0BA598u, 3);  /* 0C0BA596 mov.b Rm,@Rn */
	r12 = 0x207C0C0u; UPD(0x0C0BA59Au, 1);  /* 0C0BA598 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA59A add #imm,Rn */
	W32(r8 + 0x3Cu, r12); UPD(0x0C0BA59Eu, 2);  /* 0C0BA59C mov.l Rm,@(disp,Rn) */
	r10 = 0xC0C2110u; UPD(0x0C0BA5A0u, 1);  /* 0C0BA59E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA5A0 add #imm,Rn */
	r11 = 0x808080u; UPD(0x0C0BA5A4u, 2);  /* 0C0BA5A2 mov.l @(disp,pc),Rn */
	IF(0x0C0BA5A4u); { u32 t_ = r10; PR = 0x0C0BA5A8u; W32(r8, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA5A8u); }  /* 0C0BA5A4 jsr @Rn */
L_0C0BA5A8: BLKS(0x0C0BA5A8u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA4D8u, 3); goto L_0C0BA4D8; }  /* 0C0BA5A8 bra */
L_0C0BA5B0: BLKS(0x0C0BA5B0u);
	r9 = 0xC062780u; UPD(0x0C0BA5B2u, 1);  /* 0C0BA5B0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA5B2u); { u32 t_ = r9; PR = 0x0C0BA5B6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA5B6u); }  /* 0C0BA5B2 jsr @Rn */
L_0C0BA5B6: BLKS(0x0C0BA5B6u);
	{ r9 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA502u, 3); goto L_0C0BA502; }  /* 0C0BA5B6 bra */
}

/* FUN_0c0ba610 */
void blk_f_0C0BA610(sh3_t *c)
{
	LOCALS;
L_0C0BA610: BLKS(0x0C0BA610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA612u, 1);  /* 0C0BA610 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0BA612 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA616u, 2);  /* 0C0BA614 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA618u, 1);  /* 0C0BA616 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA61Au, 1);  /* 0C0BA618 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA61Cu, 1);  /* 0C0BA61A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BA61C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA620u, 2);  /* 0C0BA61E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA622u, 1);  /* 0C0BA620 mov.l Rm,@-Rn */
	IF(0x0C0BA622u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA624u, 1);  /* 0C0BA622 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0BA624 add #imm,Rn */
	r14 = r15;  /* 0C0BA626 mov Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BA62Au, 3);  /* 0C0BA628 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2B07FCu; UPD(0x0C0BA62Cu, 1);  /* 0C0BA62A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA62Eu, 1);  /* 0C0BA62C mov.l @Rm,Rn */
	W32(r14, r5); UPD(0x0C0BA630u, 1);  /* 0C0BA62E mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BA630 tst Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BA634u, 2);  /* 0C0BA632 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C0BA634 mov #imm,Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0BA668u, 4); goto L_0C0BA668; } UPD(0x0C0BA63Au, 1); goto L_0C0BA63A; }  /* 0C0BA636 bf/s */
L_0C0BA63A: BLKS(0x0C0BA63Au);
	r2 = 0xFF580000u; UPD(0x0C0BA63Cu, 1);  /* 0C0BA63A mov.l @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0BA63Eu, 1);  /* 0C0BA63C mov.l @Rm,Rn */
	r2 += r3;  /* 0C0BA63E add Rm,Rn */
	IF(0x0C0BA640u); T = (s32)r2 >= 0;  /* 0C0BA640 cmp/pz Rn */
	if (T) { UPD(0x0C0BA646u, 5); goto L_0C0BA646; }  /* 0C0BA642 bt */
L_0C0BA644: BLKS(0x0C0BA644u);
	r2 = 0u - r2;  /* 0C0BA644 neg Rm,Rn */
	UPD(0x0C0BA646u, 1);
L_0C0BA646: BLKS(0x0C0BA646u);
	r4 = 0x980000u; UPD(0x0C0BA648u, 1);  /* 0C0BA646 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA648 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA668u, 4); goto L_0C0BA668; } goto L_0C0BA64E; }  /* 0C0BA64A bt/s */
L_0C0BA64E: BLKS(0x0C0BA64Eu);
	r7 = 0xC3C4048u; UPD(0x0C0BA650u, 2);  /* 0C0BA64E mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BA652u, 1);  /* 0C0BA650 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BA654u, 1);  /* 0C0BA652 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BA656u, 1);  /* 0C0BA654 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BA656 sub Rm,Rn */
	r2 += r5;  /* 0C0BA658 add Rm,Rn */
	IF(0x0C0BA65Au); T = (s32)r2 >= 0;  /* 0C0BA65A cmp/pz Rn */
	if (T) { UPD(0x0C0BA660u, 6); goto L_0C0BA660; }  /* 0C0BA65C bt */
L_0C0BA65E: BLKS(0x0C0BA65Eu);
	r2 = 0u - r2;  /* 0C0BA65E neg Rm,Rn */
	UPD(0x0C0BA660u, 1);
L_0C0BA660: BLKS(0x0C0BA660u);
	r8 = 0x700000u; UPD(0x0C0BA662u, 1);  /* 0C0BA660 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0BA662 cmp/gt Rm,Rn */
	IF(0x0C0BA664u); r0 = T;  /* 0C0BA664 movt Rn */
	r0 ^= 0x1u;  /* 0C0BA666 xor #imm,r0 */
	UPD(0x0C0BA668u, 3);
L_0C0BA668: BLKS(0x0C0BA668u);
	r9 = (u32)(s32)(s8)r0;  /* 0C0BA668 exts.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BA66A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA690u, 5); goto L_0C0BA690; } UPD(0x0C0BA670u, 1); goto L_0C0BA670; }  /* 0C0BA66C bf/s */
L_0C0BA670: BLKS(0x0C0BA670u);
	r14 += 0x10u;  /* 0C0BA670 add #imm,Rn */
	r15 = r14;  /* 0C0BA672 mov Rm,Rn */
	IF(0x0C0BA674u); PR = R32(r15); r15 += 4; UPD(0x0C0BA676u, 3);  /* 0C0BA674 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA678u, 1);  /* 0C0BA676 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA67Au, 1);  /* 0C0BA678 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA67Cu, 1);  /* 0C0BA67A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA67Eu, 1);  /* 0C0BA67C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA680u, 1);  /* 0C0BA67E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA682u, 1);  /* 0C0BA680 mov.l @Rm+,Rn */
	IF(0x0C0BA682u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA682 rts */
L_0C0BA690: BLKS(0x0C0BA690u);
	r13 = 0xC0717A0u; UPD(0x0C0BA692u, 1);  /* 0C0BA690 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r12 = v_; } UPD(0x0C0BA694u, 1);  /* 0C0BA692 mov.w @Rm+,Rn */
	IF(0x0C0BA694u); { u32 t_ = r13; PR = 0x0C0BA698u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA698u); }  /* 0C0BA694 jsr @Rn */
L_0C0BA698: BLKS(0x0C0BA698u);
	T = (r0 & r0) == 0;  /* 0C0BA698 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA670u, 4); goto L_0C0BA670; } goto L_0C0BA69E; }  /* 0C0BA69A bt/s */
L_0C0BA69E: BLKS(0x0C0BA69Eu);
	r2 = 0x4u;  /* 0C0BA69E mov #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0BA6A0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA780u, 6); goto L_0C0BA780; }  /* 0C0BA6A2 bt */
L_0C0BA6A4: BLKS(0x0C0BA6A4u);
	r3 = 0xC234BECu; UPD(0x0C0BA6A6u, 1);  /* 0C0BA6A4 mov.l @(disp,pc),Rn */
	r1 = 0xC28EDFCu; UPD(0x0C0BA6A8u, 1);  /* 0C0BA6A6 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C0BA6AAu, 1);  /* 0C0BA6A8 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0BA6ACu, 1);  /* 0C0BA6AA mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0BA6AC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA670u, 4); goto L_0C0BA670; } goto L_0C0BA6B2; }  /* 0C0BA6AE bf/s */
L_0C0BA6B2: BLKS(0x0C0BA6B2u);
	r13 = 0x0u;  /* 0C0BA6B2 mov #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BA6B4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BA770u, 6); goto L_0C0BA770; }  /* 0C0BA6B6 bt */
L_0C0BA6B8: BLKS(0x0C0BA6B8u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BA6BAu, 1);  /* 0C0BA6B8 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BA6BA mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r6 = v_; } UPD(0x0C0BA6BEu, 2);  /* 0C0BA6BC mov.w @Rm+,Rn */
	IF(0x0C0BA6BEu); MACL = r6 * r8;  /* 0C0BA6BE mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA6C2u, 3);  /* 0C0BA6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA6C2u); r8 = MACL;  /* 0C0BA6C2 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA6C6u, 2);  /* 0C0BA6C4 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA6C6 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA6CAu, 2);  /* 0C0BA6C8 mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BA6CA mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r5 = v_; } UPD(0x0C0BA6CEu, 2);  /* 0C0BA6CC mov.w @Rm+,Rn */
	r7 = 0xC297490u; UPD(0x0C0BA6D0u, 1);  /* 0C0BA6CE mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C0BA6D2u, 1);  /* 0C0BA6D0 mov.l @(disp,Rm),Rn */
	r0 = 0x1FFu; UPD(0x0C0BA6D4u, 1);  /* 0C0BA6D2 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0BA6D4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BA6D8u, 2);  /* 0C0BA6D6 mov.b @Rm,Rn */
	r9 &= r0;  /* 0C0BA6D8 and Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0BA6DA extu.b Rm,Rn */
	r5 = 0xC1EADA4u; UPD(0x0C0BA6DEu, 3);  /* 0C0BA6DC mov.l @(disp,pc),Rn */
	IF(0x0C0BA6DEu); r0 <<= 2;  /* 0C0BA6DE shll2 Rn */
	r0 += r5;  /* 0C0BA6E0 add Rm,Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C0BA6E4u, 3);  /* 0C0BA6E2 mov.l @(disp,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C0BA6E6u, 1);  /* 0C0BA6E4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0BA6E8u, 1);  /* 0C0BA6E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA6E8u); { u32 t_ = r0; PR = 0x0C0BA6ECu; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA6ECu); }  /* 0C0BA6E8 jsr @Rn */
L_0C0BA6EC: BLKS(0x0C0BA6ECu);
	r0 += 0x5u;  /* 0C0BA6EC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA6F0u, 2);  /* 0C0BA6EE mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C0BA6F0 mov Rm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0BA6F4u, 2);  /* 0C0BA6F2 mov.l Rm,@(disp,Rn) */
	r6 += 0x4u;  /* 0C0BA6F4 add #imm,Rn */
	r8 += 0x44u;  /* 0C0BA6F6 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BA6FAu, 3);  /* 0C0BA6F8 mov.w Rm,@Rn */
	IF(0x0C0BA6FAu); r6 >>= 2;  /* 0C0BA6FA shlr2 Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA6FC add #imm,Rn */
	r5 = R32(r8 + 0x4u); UPD(0x0C0BA700u, 3);  /* 0C0BA6FE mov.l @(disp,Rm),Rn */
	IF(0x0C0BA700u); T = r6 & 1; r6 >>= 1;  /* 0C0BA700 shlr Rn */
	r4 = 0x3Fu;  /* 0C0BA702 mov #imm,Rn */
	r3 = 0x3u;  /* 0C0BA704 mov #imm,Rn */
	r6 &= r4;  /* 0C0BA706 and Rm,Rn */
	IF(0x0C0BA708u); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BA708 shld Rm,Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BA70Cu, 6);  /* 0C0BA70A mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C0BA70C mov #imm,Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0BA710u, 2);  /* 0C0BA70E mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BA710 add Rm,Rn */
	r2 = R32(r5 + 0x4u); UPD(0x0C0BA714u, 2);  /* 0C0BA712 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA714u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA714 shld Rm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA718u, 2);  /* 0C0BA716 mov.l Rm,@(disp,Rn) */
	r4 = R32(r5); UPD(0x0C0BA71Au, 1);  /* 0C0BA718 mov.l @Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0BA71Cu, 1);  /* 0C0BA71A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA71Cu); r3 = R32(r0 + r4); UPD(0x0C0BA71Eu, 1);  /* 0C0BA71C mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BA71E mov #imm,Rn */
	IF(0x0C0BA720u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BA720 shld Rm,Rn */
	W32(r8 + 0x18u, r3); UPD(0x0C0BA724u, 3);  /* 0C0BA722 mov.l Rm,@(disp,Rn) */
	r6 += r3;  /* 0C0BA724 add Rm,Rn */
	r7 = R32(r6); UPD(0x0C0BA728u, 2);  /* 0C0BA726 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BA72Au, 1);  /* 0C0BA728 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BA72Cu, 1);  /* 0C0BA72A mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BA72Eu, 1);  /* 0C0BA72C mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BA730u, 1);  /* 0C0BA72E mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BA732u, 1);  /* 0C0BA730 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA732 add #imm,Rn */
	W16(r8, r3); UPD(0x0C0BA736u, 2);  /* 0C0BA734 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0BA736 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BA73Au, 2);  /* 0C0BA738 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA73A add #imm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C0BA73Eu, 2);  /* 0C0BA73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC069B20u; UPD(0x0C0BA740u, 1);  /* 0C0BA73E mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0BA742u, 1);  /* 0C0BA740 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C0BA744u, 1);  /* 0C0BA742 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA744u); { u32 t_ = r0; PR = 0x0C0BA748u; W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA748u); }  /* 0C0BA744 jsr @Rn */
L_0C0BA748: BLKS(0x0C0BA748u);
	r4 = r9;  /* 0C0BA748 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA74Cu, 2);  /* 0C0BA74A mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA74Eu, 1);  /* 0C0BA74C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA74Eu); { u32 t_ = r9; PR = 0x0C0BA752u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA752u); }  /* 0C0BA74E jsr @Rn */
L_0C0BA752: BLKS(0x0C0BA752u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA754u, 1);  /* 0C0BA752 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C0BA754 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BA756 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0BA75Au, 3);  /* 0C0BA758 mov.b Rm,@Rn */
	r4 = r13;  /* 0C0BA75A mov Rm,Rn */
	r6 = 0x207C0C0u; UPD(0x0C0BA75Eu, 2);  /* 0C0BA75C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA75E add #imm,Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C0BA762u, 2);  /* 0C0BA760 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C0BA762 add #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0BA766u, 2);  /* 0C0BA764 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA766 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0BA768 exts.w Rm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BA76A cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BA6B8u, 6); goto L_0C0BA6B8; } UPD(0x0C0BA770u, 1); goto L_0C0BA770; }  /* 0C0BA76C bf/s */
L_0C0BA770: BLKS(0x0C0BA770u);
	r10 = 0xC0C2110u; UPD(0x0C0BA772u, 1);  /* 0C0BA770 mov.l @(disp,pc),Rn */
	IF(0x0C0BA772u); { u32 t_ = r10; PR = 0x0C0BA776u; r4 = 0x69u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA776u); }  /* 0C0BA772 jsr @Rn */
L_0C0BA776: BLKS(0x0C0BA776u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA670u, 3); goto L_0C0BA670; }  /* 0C0BA776 bra */
L_0C0BA780: BLKS(0x0C0BA780u);
	r11 = 0xC062780u; UPD(0x0C0BA782u, 1);  /* 0C0BA780 mov.l @(disp,pc),Rn */
	IF(0x0C0BA782u); { u32 t_ = r11; PR = 0x0C0BA786u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA786u); }  /* 0C0BA782 jsr @Rn */
L_0C0BA786: BLKS(0x0C0BA786u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA6A4u, 3); goto L_0C0BA6A4; }  /* 0C0BA786 bra */
}

/* FUN_0c0ba7f0 */
void blk_f_0C0BA7F0(sh3_t *c)
{
	LOCALS;
L_0C0BA7F0: BLKS(0x0C0BA7F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F2u, 1);  /* 0C0BA7F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F4u, 1);  /* 0C0BA7F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F6u, 1);  /* 0C0BA7F4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BA7F6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7FAu, 2);  /* 0C0BA7F8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0BA7FA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7FEu, 2);  /* 0C0BA7FC mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BA7FE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA802u, 2);  /* 0C0BA800 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BA802 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA806u, 2);  /* 0C0BA804 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BA808u, 1);  /* 0C0BA806 mov.l @(disp,pc),Rn */
	IF(0x0C0BA808u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA80Au, 1);  /* 0C0BA808 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BA80Cu, 1);  /* 0C0BA80A mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BA80C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BA80E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA840u, 5); goto L_0C0BA840; } goto L_0C0BA814; }  /* 0C0BA810 bf/s */
L_0C0BA814: BLKS(0x0C0BA814u);
	r2 = 0xFF580000u; UPD(0x0C0BA816u, 2);  /* 0C0BA814 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BA816 add Rm,Rn */
	IF(0x0C0BA818u); T = (s32)r2 >= 0;  /* 0C0BA818 cmp/pz Rn */
	if (T) { UPD(0x0C0BA81Eu, 5); goto L_0C0BA81E; }  /* 0C0BA81A bt */
L_0C0BA81C: BLKS(0x0C0BA81Cu);
	r2 = 0u - r2;  /* 0C0BA81C neg Rm,Rn */
	UPD(0x0C0BA81Eu, 1);
L_0C0BA81E: BLKS(0x0C0BA81Eu);
	r0 = 0x980000u; UPD(0x0C0BA820u, 1);  /* 0C0BA81E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BA820 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA840u, 4); goto L_0C0BA840; } goto L_0C0BA826; }  /* 0C0BA822 bt/s */
L_0C0BA826: BLKS(0x0C0BA826u);
	r5 = 0xC3C4048u; UPD(0x0C0BA828u, 2);  /* 0C0BA826 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BA828 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BA82Cu, 2);  /* 0C0BA82A mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BA82Eu, 1);  /* 0C0BA82C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BA82E sub Rm,Rn */
	r2 += r3;  /* 0C0BA830 add Rm,Rn */
	IF(0x0C0BA832u); T = (s32)r2 >= 0;  /* 0C0BA832 cmp/pz Rn */
	if (T) { UPD(0x0C0BA838u, 6); goto L_0C0BA838; }  /* 0C0BA834 bt */
L_0C0BA836: BLKS(0x0C0BA836u);
	r2 = 0u - r2;  /* 0C0BA836 neg Rm,Rn */
	UPD(0x0C0BA838u, 1);
L_0C0BA838: BLKS(0x0C0BA838u);
	r6 = 0x700000u; UPD(0x0C0BA83Au, 1);  /* 0C0BA838 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BA83A cmp/gt Rm,Rn */
	IF(0x0C0BA83Cu); r0 = T;  /* 0C0BA83C movt Rn */
	r0 ^= 0x1u;  /* 0C0BA83E xor #imm,r0 */
	UPD(0x0C0BA840u, 3);
L_0C0BA840: BLKS(0x0C0BA840u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BA840 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BA842 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA860u, 5); goto L_0C0BA860; } UPD(0x0C0BA848u, 1); goto L_0C0BA848; }  /* 0C0BA844 bf/s */
L_0C0BA848: BLKS(0x0C0BA848u);
	r15 = r14;  /* 0C0BA848 mov Rm,Rn */
	IF(0x0C0BA84Au); PR = R32(r15); r15 += 4; UPD(0x0C0BA84Cu, 2);  /* 0C0BA84A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA84Eu, 1);  /* 0C0BA84C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA850u, 1);  /* 0C0BA84E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA852u, 1);  /* 0C0BA850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA854u, 1);  /* 0C0BA852 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA856u, 1);  /* 0C0BA854 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA858u, 1);  /* 0C0BA856 mov.l @Rm+,Rn */
	IF(0x0C0BA858u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA858 rts */
L_0C0BA860: BLKS(0x0C0BA860u);
	r8 = 0xC0717A0u; UPD(0x0C0BA862u, 1);  /* 0C0BA860 mov.l @(disp,pc),Rn */
	IF(0x0C0BA862u); { u32 t_ = r8; PR = 0x0C0BA866u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA866u); }  /* 0C0BA862 jsr @Rn */
L_0C0BA866: BLKS(0x0C0BA866u);
	T = (r0 & r0) == 0;  /* 0C0BA866 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA848u, 4); goto L_0C0BA848; } goto L_0C0BA86C; }  /* 0C0BA868 bt/s */
L_0C0BA86C: BLKS(0x0C0BA86Cu);
	r13 = 0x6u;  /* 0C0BA86C mov #imm,Rn */
	T = (s32)r10 > (s32)r13;  /* 0C0BA86E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA910u, 6); goto L_0C0BA910; }  /* 0C0BA870 bt */
L_0C0BA872: BLKS(0x0C0BA872u);
	r0 = 0xC234BECu; UPD(0x0C0BA874u, 1);  /* 0C0BA872 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BA876u, 1);  /* 0C0BA874 mov.l @(disp,pc),Rn */
	r13 = R32(r0); UPD(0x0C0BA878u, 1);  /* 0C0BA876 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BA87Au, 1);  /* 0C0BA878 mov.w @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BA87A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA848u, 4); goto L_0C0BA848; } goto L_0C0BA880; }  /* 0C0BA87C bf/s */
L_0C0BA880: BLKS(0x0C0BA880u);
	r8 = 0x54u;  /* 0C0BA880 mov #imm,Rn */
	IF(0x0C0BA882u); MACL = r2 * r8;  /* 0C0BA882 mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA886u, 5);  /* 0C0BA884 mov.l @(disp,pc),Rn */
	IF(0x0C0BA886u); r8 = MACL;  /* 0C0BA886 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA88Au, 2);  /* 0C0BA888 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA88A add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA88Eu, 2);  /* 0C0BA88C mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BA88E mov #imm,Rn */
	r0 = 0xC1EADE0u; UPD(0x0C0BA892u, 2);  /* 0C0BA890 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C0BA894u, 1);  /* 0C0BA892 mov.l @Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0BA896u, 1);  /* 0C0BA894 mov.l @(disp,pc),Rn */
	IF(0x0C0BA896u); { u32 t_ = r0; PR = 0x0C0BA89Au; W32(r8 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA89Au); }  /* 0C0BA896 jsr @Rn */
L_0C0BA89A: BLKS(0x0C0BA89Au);
	r0 += 0x7u;  /* 0C0BA89A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA89Eu, 2);  /* 0C0BA89C mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BA89E mov #imm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C0BA8A2u, 2);  /* 0C0BA8A0 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BA8A2 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BA8A4 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BA8A8u, 3);  /* 0C0BA8A6 mov.w Rm,@Rn */
	IF(0x0C0BA8A8u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA8A8 shld Rm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA8AA add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BA8AEu, 3);  /* 0C0BA8AC mov.l @(disp,Rm),Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BA8B0u, 1);  /* 0C0BA8AE mov.l @(disp,pc),Rn */
	IF(0x0C0BA8B0u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BA8B0 shld Rm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0BA8B4u, 2);  /* 0C0BA8B2 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BA8B4 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BA8B8u, 2);  /* 0C0BA8B6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA8BAu, 1);  /* 0C0BA8B8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BA8BCu, 1);  /* 0C0BA8BA mov.l @Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BA8BEu, 1);  /* 0C0BA8BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8BEu); r7 = R32(r0 + r3); UPD(0x0C0BA8C0u, 1);  /* 0C0BA8BE mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BA8C2u, 1);  /* 0C0BA8C0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7); UPD(0x0C0BA8C4u, 1);  /* 0C0BA8C2 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BA8C6u, 1);  /* 0C0BA8C4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x4u); UPD(0x0C0BA8C8u, 1);  /* 0C0BA8C6 mov.l @(disp,Rm),Rn */
	r5 = 0xC2380C4u; UPD(0x0C0BA8CAu, 1);  /* 0C0BA8C8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r6); UPD(0x0C0BA8CCu, 1);  /* 0C0BA8CA mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0BA8CEu, 1);  /* 0C0BA8CC mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA8CE add #imm,Rn */
	W16(r8, r4); UPD(0x0C0BA8D2u, 2);  /* 0C0BA8D0 mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA8D2 add #imm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0BA8D6u, 2);  /* 0C0BA8D4 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0BA8D6 mov Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0BA8DAu, 2);  /* 0C0BA8D8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0BA8DCu, 1);  /* 0C0BA8DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8DCu); { u32 t_ = r11; PR = 0x0C0BA8E0u; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA8E0u); }  /* 0C0BA8DC jsr @Rn */
L_0C0BA8E0: BLKS(0x0C0BA8E0u);
	r4 = r9;  /* 0C0BA8E0 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA8E4u, 2);  /* 0C0BA8E2 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA8E6u, 1);  /* 0C0BA8E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8E6u); { u32 t_ = r9; PR = 0x0C0BA8EAu; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA8EAu); }  /* 0C0BA8E6 jsr @Rn */
L_0C0BA8EA: BLKS(0x0C0BA8EAu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA8ECu, 1);  /* 0C0BA8EA mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x20u); UPD(0x0C0BA8EEu, 1);  /* 0C0BA8EC mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BA8EE add #imm,Rn */
	W32(r8, r1); UPD(0x0C0BA8F2u, 2);  /* 0C0BA8F0 mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0BA8F2 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0BA8F6u, 2);  /* 0C0BA8F4 mov.b Rm,@Rn */
	r2 = 0x207C0C0u; UPD(0x0C0BA8F8u, 1);  /* 0C0BA8F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA8F8 add #imm,Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C0BA8FCu, 2);  /* 0C0BA8FA mov.l Rm,@(disp,Rn) */
	r12 = 0x808080u; UPD(0x0C0BA8FEu, 1);  /* 0C0BA8FC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA8FE add #imm,Rn */
	r11 = 0xC1F7ED8u; UPD(0x0C0BA902u, 2);  /* 0C0BA900 mov.l @(disp,pc),Rn */
	r9 = 0xC0C2110u; UPD(0x0C0BA904u, 1);  /* 0C0BA902 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0BA904 mov Rm,Rn */
	W32(r8, r12); UPD(0x0C0BA908u, 2);  /* 0C0BA906 mov.l Rm,@Rn */
	IF(0x0C0BA908u); { u32 t_ = r9; PR = 0x0C0BA90Cu; IF(0x0C0BA90Au); r4 = (u32)(s32)(s8)R8(r0 + r10); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA90Cu); }  /* 0C0BA908 jsr @Rn */
L_0C0BA90C: BLKS(0x0C0BA90Cu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA848u, 3); goto L_0C0BA848; }  /* 0C0BA90C bra */
L_0C0BA910: BLKS(0x0C0BA910u);
	r10 = 0xC062780u; UPD(0x0C0BA912u, 1);  /* 0C0BA910 mov.l @(disp,pc),Rn */
	IF(0x0C0BA912u); { u32 t_ = r10; PR = 0x0C0BA916u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA916u); }  /* 0C0BA912 jsr @Rn */
L_0C0BA916: BLKS(0x0C0BA916u);
	{ r10 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA872u, 3); goto L_0C0BA872; }  /* 0C0BA916 bra */
}

/* FUN_0c0ba970 */
void blk_f_0C0BA970(sh3_t *c)
{
	LOCALS;
L_0C0BA970: BLKS(0x0C0BA970u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA972u, 1);  /* 0C0BA970 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0BA972 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA976u, 2);  /* 0C0BA974 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA978u, 1);  /* 0C0BA976 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA97Au, 1);  /* 0C0BA978 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA97Cu, 1);  /* 0C0BA97A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BA97C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA980u, 2);  /* 0C0BA97E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA982u, 1);  /* 0C0BA980 mov.l Rm,@-Rn */
	IF(0x0C0BA982u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA984u, 1);  /* 0C0BA982 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0BA984 add #imm,Rn */
	r14 = r15;  /* 0C0BA986 mov Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BA98Au, 3);  /* 0C0BA988 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2B07FCu; UPD(0x0C0BA98Cu, 1);  /* 0C0BA98A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA98Eu, 1);  /* 0C0BA98C mov.l @Rm,Rn */
	W32(r14, r5); UPD(0x0C0BA990u, 1);  /* 0C0BA98E mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BA990 tst Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BA994u, 2);  /* 0C0BA992 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C0BA994 mov #imm,Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0BA9C8u, 4); goto L_0C0BA9C8; } UPD(0x0C0BA99Au, 1); goto L_0C0BA99A; }  /* 0C0BA996 bf/s */
L_0C0BA99A: BLKS(0x0C0BA99Au);
	r2 = 0xFF580000u; UPD(0x0C0BA99Cu, 1);  /* 0C0BA99A mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0BA99Eu, 1);  /* 0C0BA99C mov.l @Rm,Rn */
	r2 += r1;  /* 0C0BA99E add Rm,Rn */
	IF(0x0C0BA9A0u); T = (s32)r2 >= 0;  /* 0C0BA9A0 cmp/pz Rn */
	if (T) { UPD(0x0C0BA9A6u, 5); goto L_0C0BA9A6; }  /* 0C0BA9A2 bt */
L_0C0BA9A4: BLKS(0x0C0BA9A4u);
	r2 = 0u - r2;  /* 0C0BA9A4 neg Rm,Rn */
	UPD(0x0C0BA9A6u, 1);
L_0C0BA9A6: BLKS(0x0C0BA9A6u);
	r3 = 0x980000u; UPD(0x0C0BA9A8u, 1);  /* 0C0BA9A6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0BA9A8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9C8u, 4); goto L_0C0BA9C8; } goto L_0C0BA9AE; }  /* 0C0BA9AA bt/s */
L_0C0BA9AE: BLKS(0x0C0BA9AEu);
	r6 = 0xC3C4048u; UPD(0x0C0BA9B0u, 2);  /* 0C0BA9AE mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BA9B2u, 1);  /* 0C0BA9B0 mov.l @(disp,Rm),Rn */
	r5 = R32(r6); UPD(0x0C0BA9B4u, 1);  /* 0C0BA9B2 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BA9B6u, 1);  /* 0C0BA9B4 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BA9B6 sub Rm,Rn */
	r2 += r4;  /* 0C0BA9B8 add Rm,Rn */
	IF(0x0C0BA9BAu); T = (s32)r2 >= 0;  /* 0C0BA9BA cmp/pz Rn */
	if (T) { UPD(0x0C0BA9C0u, 6); goto L_0C0BA9C0; }  /* 0C0BA9BC bt */
L_0C0BA9BE: BLKS(0x0C0BA9BEu);
	r2 = 0u - r2;  /* 0C0BA9BE neg Rm,Rn */
	UPD(0x0C0BA9C0u, 1);
L_0C0BA9C0: BLKS(0x0C0BA9C0u);
	r7 = 0x700000u; UPD(0x0C0BA9C2u, 1);  /* 0C0BA9C0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BA9C2 cmp/gt Rm,Rn */
	IF(0x0C0BA9C4u); r0 = T;  /* 0C0BA9C4 movt Rn */
	r0 ^= 0x1u;  /* 0C0BA9C6 xor #imm,r0 */
	UPD(0x0C0BA9C8u, 3);
L_0C0BA9C8: BLKS(0x0C0BA9C8u);
	r8 = (u32)(s32)(s8)r0;  /* 0C0BA9C8 exts.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BA9CA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9F0u, 5); goto L_0C0BA9F0; } UPD(0x0C0BA9D0u, 1); goto L_0C0BA9D0; }  /* 0C0BA9CC bf/s */
L_0C0BA9D0: BLKS(0x0C0BA9D0u);
	r14 += 0x10u;  /* 0C0BA9D0 add #imm,Rn */
	r15 = r14;  /* 0C0BA9D2 mov Rm,Rn */
	IF(0x0C0BA9D4u); PR = R32(r15); r15 += 4; UPD(0x0C0BA9D6u, 3);  /* 0C0BA9D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA9D8u, 1);  /* 0C0BA9D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA9DAu, 1);  /* 0C0BA9D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA9DCu, 1);  /* 0C0BA9DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA9DEu, 1);  /* 0C0BA9DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA9E0u, 1);  /* 0C0BA9DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA9E2u, 1);  /* 0C0BA9E0 mov.l @Rm+,Rn */
	IF(0x0C0BA9E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA9E2 rts */
L_0C0BA9F0: BLKS(0x0C0BA9F0u);
	r9 = 0xC0717A0u; UPD(0x0C0BA9F2u, 1);  /* 0C0BA9F0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r12 = v_; } UPD(0x0C0BA9F4u, 1);  /* 0C0BA9F2 mov.w @Rm+,Rn */
	IF(0x0C0BA9F4u); { u32 t_ = r9; PR = 0x0C0BA9F8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA9F8u); }  /* 0C0BA9F4 jsr @Rn */
L_0C0BA9F8: BLKS(0x0C0BA9F8u);
	T = (r0 & r0) == 0;  /* 0C0BA9F8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9D0u, 4); goto L_0C0BA9D0; } goto L_0C0BA9FE; }  /* 0C0BA9FA bt/s */
L_0C0BA9FE: BLKS(0x0C0BA9FEu);
	r13 = 0x6u;  /* 0C0BA9FE mov #imm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C0BAA00 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BAAE0u, 6); goto L_0C0BAAE0; }  /* 0C0BAA02 bt */
L_0C0BAA04: BLKS(0x0C0BAA04u);
	r0 = 0xC234BECu; UPD(0x0C0BAA06u, 1);  /* 0C0BAA04 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BAA08u, 1);  /* 0C0BAA06 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0BAA0Au, 1);  /* 0C0BAA08 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r3); UPD(0x0C0BAA0Cu, 1);  /* 0C0BAA0A mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAA0C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9D0u, 4); goto L_0C0BA9D0; } goto L_0C0BAA12; }  /* 0C0BAA0E bf/s */
L_0C0BAA12: BLKS(0x0C0BAA12u);
	r13 = 0x0u;  /* 0C0BAA12 mov #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BAA14 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BAAC4u, 6); goto L_0C0BAAC4; }  /* 0C0BAA16 bt */
L_0C0BAA18: BLKS(0x0C0BAA18u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BAA1Au, 1);  /* 0C0BAA18 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAA1A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r0 = v_; } UPD(0x0C0BAA1Eu, 2);  /* 0C0BAA1C mov.w @Rm+,Rn */
	IF(0x0C0BAA1Eu); MACL = r0 * r8;  /* 0C0BAA1E mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BAA22u, 3);  /* 0C0BAA20 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA22u); r8 = MACL;  /* 0C0BAA22 sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0BAA26u, 2);  /* 0C0BAA24 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0BAA26 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BAA2Au, 2);  /* 0C0BAA28 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0BAA2Cu, 1);  /* 0C0BAA2A mov.w @Rm+,Rn */
	r5 = 0xC297490u; UPD(0x0C0BAA2Eu, 1);  /* 0C0BAA2C mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0BAA30u, 1);  /* 0C0BAA2E mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0BAA32u, 1);  /* 0C0BAA30 mov.b @Rm,Rn */
	r3 += r9;  /* 0C0BAA32 add Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0BAA34 exts.w Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0BAA36 extu.b Rm,Rn */
	r4 = 0xC1EADE0u; UPD(0x0C0BAA3Au, 4);  /* 0C0BAA38 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA3Au); r3 <<= 2;  /* 0C0BAA3A shll2 Rn */
	r3 += r4;  /* 0C0BAA3C add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0BAA40u, 3);  /* 0C0BAA3E mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C0BAA40 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0BAA44u, 2);  /* 0C0BAA42 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C0BAA46u, 1);  /* 0C0BAA44 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA46u); { u32 t_ = r0; PR = 0x0C0BAA4Au; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAA4Au); }  /* 0C0BAA46 jsr @Rn */
L_0C0BAA4A: BLKS(0x0C0BAA4Au);
	r0 += 0x7u;  /* 0C0BAA4A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BAA4Eu, 2);  /* 0C0BAA4C mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BAA4E mov #imm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0BAA52u, 2);  /* 0C0BAA50 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C0BAA52 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BAA54 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BAA58u, 3);  /* 0C0BAA56 mov.w Rm,@Rn */
	r1 = 0x4u;  /* 0C0BAA58 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BAA5A add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BAA5Eu, 3);  /* 0C0BAA5C mov.l @(disp,Rm),Rn */
	IF(0x0C0BAA5Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BAA5E shld Rm,Rn */
	IF(0x0C0BAA60u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BAA60 shld Rm,Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BAA64u, 3);  /* 0C0BAA62 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r7); UPD(0x0C0BAA66u, 1);  /* 0C0BAA64 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BAA66 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BAA6Au, 2);  /* 0C0BAA68 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BAA6Cu, 1);  /* 0C0BAA6A mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BAA6Eu, 1);  /* 0C0BAA6C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BAA70u, 1);  /* 0C0BAA6E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA70u); r6 = R32(r0 + r3); UPD(0x0C0BAA72u, 1);  /* 0C0BAA70 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0BAA74u, 1);  /* 0C0BAA72 mov.l Rm,@(disp,Rn) */
	r7 = R32(r6); UPD(0x0C0BAA76u, 1);  /* 0C0BAA74 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BAA78u, 1);  /* 0C0BAA76 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BAA7Au, 1);  /* 0C0BAA78 mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BAA7Cu, 1);  /* 0C0BAA7A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BAA7Eu, 1);  /* 0C0BAA7C mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BAA80u, 1);  /* 0C0BAA7E mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAA80 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0BAA84u, 2);  /* 0C0BAA82 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0BAA84 mov Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BAA88u, 2);  /* 0C0BAA86 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAA88 add #imm,Rn */
	r3 = R32(r14); UPD(0x0C0BAA8Cu, 2);  /* 0C0BAA8A mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAA8Eu, 1);  /* 0C0BAA8C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BAA90u, 1);  /* 0C0BAA8E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0BAA92u, 1);  /* 0C0BAA90 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA92u); { u32 t_ = r0; PR = 0x0C0BAA96u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAA96u); }  /* 0C0BAA92 jsr @Rn */
L_0C0BAA96: BLKS(0x0C0BAA96u);
	r4 = r9;  /* 0C0BAA96 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BAA9Au, 2);  /* 0C0BAA98 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BAA9Cu, 1);  /* 0C0BAA9A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA9Cu); { u32 t_ = r9; PR = 0x0C0BAAA0u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAAA0u); }  /* 0C0BAA9C jsr @Rn */
L_0C0BAAA0: BLKS(0x0C0BAAA0u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BAAA2u, 1);  /* 0C0BAAA0 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0BAAA2 mov #imm,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0BAAA6u, 2);  /* 0C0BAAA4 mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BAAA6 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0BAAAAu, 2);  /* 0C0BAAA8 mov.l Rm,@Rn */
	r4 = r13;  /* 0C0BAAAA mov Rm,Rn */
	r8 += 0x8u;  /* 0C0BAAAC add #imm,Rn */
	W8(r8, r1); UPD(0x0C0BAAB0u, 3);  /* 0C0BAAAE mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C0BAAB0 add #imm,Rn */
	r6 = 0x207C0C0u; UPD(0x0C0BAAB4u, 2);  /* 0C0BAAB2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BAAB4 add #imm,Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C0BAAB8u, 2);  /* 0C0BAAB6 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s16)r4;  /* 0C0BAAB8 exts.w Rm,Rn */
	r5 = 0x808080u; UPD(0x0C0BAABCu, 2);  /* 0C0BAABA mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BAABC add #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BAABE cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BAA18u, 5); goto L_0C0BAA18; } UPD(0x0C0BAAC4u, 1); goto L_0C0BAAC4; }  /* 0C0BAAC0 bf/s */
L_0C0BAAC4: BLKS(0x0C0BAAC4u);
	r12 = 0xC1F7ED8u; UPD(0x0C0BAAC6u, 1);  /* 0C0BAAC4 mov.l @(disp,pc),Rn */
	r10 = 0xC0C2110u; UPD(0x0C0BAAC8u, 1);  /* 0C0BAAC6 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BAAC8 mov Rm,Rn */
	IF(0x0C0BAACAu); { u32 t_ = r10; PR = 0x0C0BAACEu; IF(0x0C0BAACCu); r4 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BAACEu); }  /* 0C0BAACA jsr @Rn */
L_0C0BAACE: BLKS(0x0C0BAACEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA9D0u, 3); goto L_0C0BA9D0; }  /* 0C0BAACE bra */
L_0C0BAAE0: BLKS(0x0C0BAAE0u);
	r11 = 0xC062780u; UPD(0x0C0BAAE2u, 1);  /* 0C0BAAE0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAAE2u); { u32 t_ = r11; PR = 0x0C0BAAE6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAAE6u); }  /* 0C0BAAE2 jsr @Rn */
L_0C0BAAE6: BLKS(0x0C0BAAE6u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BAA04u, 3); goto L_0C0BAA04; }  /* 0C0BAAE6 bra */
}

/* FUN_0c0bab50 */
void blk_f_0C0BAB50(sh3_t *c)
{
	LOCALS;
L_0C0BAB50: BLKS(0x0C0BAB50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB52u, 1);  /* 0C0BAB50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB54u, 1);  /* 0C0BAB52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB56u, 1);  /* 0C0BAB54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB58u, 1);  /* 0C0BAB56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Au, 1);  /* 0C0BAB58 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Cu, 1);  /* 0C0BAB5A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Eu, 1);  /* 0C0BAB5C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0BAB5E exts.w Rm,Rn */
	IF(0x0C0BAB60u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAB62u, 2);  /* 0C0BAB60 sts.l pr,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BAB64u, 1);  /* 0C0BAB62 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BAB64 add #imm,Rn */
	r0 = R32(r2); UPD(0x0C0BAB68u, 2);  /* 0C0BAB66 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BAB68 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BAB6A tst Rm,Rn */
	W32(r14, r4); UPD(0x0C0BAB6Eu, 3);  /* 0C0BAB6C mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C0BAB6E mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BAB72u, 2);  /* 0C0BAB70 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BABA4u, 3); goto L_0C0BABA4; } UPD(0x0C0BAB76u, 1); goto L_0C0BAB76; }  /* 0C0BAB72 bf/s */
L_0C0BAB76: BLKS(0x0C0BAB76u);
	r2 = 0xFF580000u; UPD(0x0C0BAB78u, 1);  /* 0C0BAB76 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BAB7Au, 1);  /* 0C0BAB78 mov.l @(disp,Rm),Rn */
	r2 += r1;  /* 0C0BAB7A add Rm,Rn */
	IF(0x0C0BAB7Cu); T = (s32)r2 >= 0;  /* 0C0BAB7C cmp/pz Rn */
	if (T) { UPD(0x0C0BAB82u, 5); goto L_0C0BAB82; }  /* 0C0BAB7E bt */
L_0C0BAB80: BLKS(0x0C0BAB80u);
	r2 = 0u - r2;  /* 0C0BAB80 neg Rm,Rn */
	UPD(0x0C0BAB82u, 1);
L_0C0BAB82: BLKS(0x0C0BAB82u);
	r0 = 0x980000u; UPD(0x0C0BAB84u, 1);  /* 0C0BAB82 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAB84 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABA4u, 4); goto L_0C0BABA4; } goto L_0C0BAB8A; }  /* 0C0BAB86 bt/s */
L_0C0BAB8A: BLKS(0x0C0BAB8Au);
	r5 = 0xC3C4048u; UPD(0x0C0BAB8Cu, 2);  /* 0C0BAB8A mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0BAB8Eu, 1);  /* 0C0BAB8C mov.l @(disp,Rm),Rn */
	r4 = R32(r5); UPD(0x0C0BAB90u, 1);  /* 0C0BAB8E mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BAB92u, 1);  /* 0C0BAB90 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BAB92 sub Rm,Rn */
	r2 += r3;  /* 0C0BAB94 add Rm,Rn */
	IF(0x0C0BAB96u); T = (s32)r2 >= 0;  /* 0C0BAB96 cmp/pz Rn */
	if (T) { UPD(0x0C0BAB9Cu, 6); goto L_0C0BAB9C; }  /* 0C0BAB98 bt */
L_0C0BAB9A: BLKS(0x0C0BAB9Au);
	r2 = 0u - r2;  /* 0C0BAB9A neg Rm,Rn */
	UPD(0x0C0BAB9Cu, 1);
L_0C0BAB9C: BLKS(0x0C0BAB9Cu);
	r6 = 0x700000u; UPD(0x0C0BAB9Eu, 1);  /* 0C0BAB9C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BAB9E cmp/gt Rm,Rn */
	IF(0x0C0BABA0u); r0 = T;  /* 0C0BABA0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BABA2 xor #imm,r0 */
	UPD(0x0C0BABA4u, 3);
L_0C0BABA4: BLKS(0x0C0BABA4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BABA4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BABA6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABD0u, 5); goto L_0C0BABD0; } UPD(0x0C0BABACu, 1); goto L_0C0BABAC; }  /* 0C0BABA8 bf/s */
L_0C0BABAC: BLKS(0x0C0BABACu);
	r14 += 0x18u;  /* 0C0BABAC add #imm,Rn */
	r15 = r14;  /* 0C0BABAE mov Rm,Rn */
	IF(0x0C0BABB0u); PR = R32(r15); r15 += 4; UPD(0x0C0BABB2u, 3);  /* 0C0BABB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BABB4u, 1);  /* 0C0BABB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BABB6u, 1);  /* 0C0BABB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BABB8u, 1);  /* 0C0BABB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BABBAu, 1);  /* 0C0BABB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BABBCu, 1);  /* 0C0BABBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BABBEu, 1);  /* 0C0BABBC mov.l @Rm+,Rn */
	IF(0x0C0BABBEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BABBE rts */
L_0C0BABD0: BLKS(0x0C0BABD0u);
	r10 = R32(r14 + 0x3Cu); UPD(0x0C0BABD2u, 1);  /* 0C0BABD0 mov.l @(disp,Rm),Rn */
	r8 = 0xC0717A0u; UPD(0x0C0BABD4u, 1);  /* 0C0BABD2 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0BABD6u, 1);  /* 0C0BABD4 mov.w @Rm+,Rn */
	W32(r14 + 0x3Cu, r10); UPD(0x0C0BABD8u, 1);  /* 0C0BABD6 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0BABD8 mov Rm,Rn */
	IF(0x0C0BABDAu); { u32 t_ = r8; PR = 0x0C0BABDEu; W32(r14 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BABDEu); }  /* 0C0BABDA jsr @Rn */
L_0C0BABDE: BLKS(0x0C0BABDEu);
	T = (r0 & r0) == 0;  /* 0C0BABDE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABACu, 4); goto L_0C0BABAC; } goto L_0C0BABE4; }  /* 0C0BABE0 bt/s */
L_0C0BABE4: BLKS(0x0C0BABE4u);
	r12 = R32(r14); UPD(0x0C0BABE6u, 2);  /* 0C0BABE4 mov.l @Rm,Rn */
	r11 = 0x6u;  /* 0C0BABE6 mov #imm,Rn */
	T = (s32)r12 > (s32)r11;  /* 0C0BABE8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BABF0u, 5); goto L_0C0BABF0; }  /* 0C0BABEA bf */
L_0C0BABEC: BLKS(0x0C0BABECu);
	{ IF(0x0C0BABEEu); ; /* slot nop */ UPD(0x0C0BAD00u, 3); goto L_0C0BAD00; }  /* 0C0BABEC bra */
L_0C0BABF0: BLKS(0x0C0BABF0u);
	r0 = 0xC234BECu; UPD(0x0C0BABF2u, 1);  /* 0C0BABF0 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BABF4u, 1);  /* 0C0BABF2 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0BABF6u, 1);  /* 0C0BABF4 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r3); UPD(0x0C0BABF8u, 1);  /* 0C0BABF6 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BABF8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABACu, 4); goto L_0C0BABAC; } goto L_0C0BABFE; }  /* 0C0BABFA bf/s */
L_0C0BABFE: BLKS(0x0C0BABFEu);
	r4 = 0x0u;  /* 0C0BABFE mov #imm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0BAC02u, 3);  /* 0C0BAC00 mov.l @(disp,Rm),Rn */
	T = (s32)r4 >= (s32)r1;  /* 0C0BAC02 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BACECu, 4); goto L_0C0BACEC; } UPD(0x0C0BAC08u, 1); goto L_0C0BAC08; }  /* 0C0BAC04 bt/s */
L_0C0BAC08: BLKS(0x0C0BAC08u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0BAC0Au, 1);  /* 0C0BAC08 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAC0A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r4 = v_; } UPD(0x0C0BAC0Eu, 2);  /* 0C0BAC0C mov.w @Rm+,Rn */
	r12 = 0x3u;  /* 0C0BAC0E mov #imm,Rn */
	IF(0x0C0BAC10u); MACL = r4 * r8;  /* 0C0BAC10 mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BAC14u, 4);  /* 0C0BAC12 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0BAC14 mov #imm,Rn */
	IF(0x0C0BAC16u); r8 = MACL;  /* 0C0BAC16 sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0BAC1Au, 3);  /* 0C0BAC18 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0BAC1A add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BAC1Eu, 2);  /* 0C0BAC1C mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BAC1E mov #imm,Rn */
	r2 = 0xC1EADE0u; UPD(0x0C0BAC22u, 2);  /* 0C0BAC20 mov.l @(disp,pc),Rn */
	r9 = 0xC062780u; UPD(0x0C0BAC24u, 1);  /* 0C0BAC22 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BAC26u, 1);  /* 0C0BAC24 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0BAC28u, 1);  /* 0C0BAC26 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC28u); { u32 t_ = r9; PR = 0x0C0BAC2Cu; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAC2Cu); }  /* 0C0BAC28 jsr @Rn */
L_0C0BAC2C: BLKS(0x0C0BAC2Cu);
	r3 = R32(r14); UPD(0x0C0BAC2Eu, 1);  /* 0C0BAC2C mov.l @Rm,Rn */
	r0 += 0x7u;  /* 0C0BAC2E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BAC32u, 2);  /* 0C0BAC30 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BAC32 mov #imm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C0BAC36u, 2);  /* 0C0BAC34 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC36u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BAC36 shld Rm,Rn */
	r8 += 0x44u;  /* 0C0BAC38 add #imm,Rn */
	W16(r8, r13); UPD(0x0C0BAC3Cu, 3);  /* 0C0BAC3A mov.w Rm,@Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BAC3C add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BAC40u, 2);  /* 0C0BAC3E mov.l @(disp,Rm),Rn */
	r10 = 0xC1F7E08u; UPD(0x0C0BAC42u, 1);  /* 0C0BAC40 mov.l @(disp,pc),Rn */
	IF(0x0C0BAC42u); ARG0(0x44CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BAC42 shld Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BAC46u, 2);  /* 0C0BAC44 mov.l Rm,@(disp,Rn) */
	r4 += r10;  /* 0C0BAC46 add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C0BAC4Au, 2);  /* 0C0BAC48 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0BAC4Cu, 1);  /* 0C0BAC4A mov.l Rm,@(disp,Rn) */
	r9 = R32(r4); UPD(0x0C0BAC4Eu, 1);  /* 0C0BAC4C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r9); UPD(0x0C0BAC50u, 1);  /* 0C0BAC4E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC50u); r6 = R32(r0 + r9); UPD(0x0C0BAC52u, 1);  /* 0C0BAC50 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0BAC54u, 1);  /* 0C0BAC52 mov.l Rm,@(disp,Rn) */
	r7 = R32(r6); UPD(0x0C0BAC56u, 1);  /* 0C0BAC54 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BAC58u, 1);  /* 0C0BAC56 mov.l Rm,@(disp,Rn) */
	r2 = R32(r6 + 0x4u); UPD(0x0C0BAC5Au, 1);  /* 0C0BAC58 mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BAC5Cu, 1);  /* 0C0BAC5A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r2); UPD(0x0C0BAC5Eu, 1);  /* 0C0BAC5C mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BAC60u, 1);  /* 0C0BAC5E mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAC60 add #imm,Rn */
	W16(r8, r11); UPD(0x0C0BAC64u, 2);  /* 0C0BAC62 mov.w Rm,@Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0BAC66u, 1);  /* 0C0BAC64 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAC66 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C0BAC6Au, 2);  /* 0C0BAC68 mov.w @Rm+,Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C0BAC6Cu, 1);  /* 0C0BAC6A mov.l @(disp,Rm),Rn */
	IF(0x0C0BAC6Cu); r5 <<= 8;  /* 0C0BAC6C shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r0 = v_; } UPD(0x0C0BAC70u, 2);  /* 0C0BAC6E mov.w @Rm+,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0BAC70 exts.w Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BAC74u, 2);  /* 0C0BAC72 mov.l @(disp,pc),Rn */
	IF(0x0C0BAC74u); r0 <<= 8;  /* 0C0BAC74 shll8 Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C0BAC78u, 2);  /* 0C0BAC76 mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x8u); UPD(0x0C0BAC7Au, 1);  /* 0C0BAC78 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BAC7A exts.w Rm,Rn */
	W32(r14 + 0x3Cu, r4); UPD(0x0C0BAC7Eu, 2);  /* 0C0BAC7C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r10); UPD(0x0C0BAC80u, 1);  /* 0C0BAC7E mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0BAC80 mov Rm,Rn */
	IF(0x0C0BAC82u); { u32 t_ = r9; PR = 0x0C0BAC86u; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAC86u); }  /* 0C0BAC82 jsr @Rn */
L_0C0BAC86: BLKS(0x0C0BAC86u);
	r7 = 0xC069B20u; UPD(0x0C0BAC88u, 1);  /* 0C0BAC86 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BAC88 mov Rm,Rn */
	r10 = r0;  /* 0C0BAC8A mov Rm,Rn */
	IF(0x0C0BAC8Cu); { u32 t_ = r7; PR = 0x0C0BAC90u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAC90u); }  /* 0C0BAC8C jsr @Rn */
L_0C0BAC90: BLKS(0x0C0BAC90u);
	r6 = 0xC069AF0u; UPD(0x0C0BAC92u, 1);  /* 0C0BAC90 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0BAC92 mov Rm,Rn */
	r9 = r0;  /* 0C0BAC94 mov Rm,Rn */
	IF(0x0C0BAC96u); { u32 t_ = r6; PR = 0x0C0BAC9Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAC9Au); }  /* 0C0BAC96 jsr @Rn */
L_0C0BAC9A: BLKS(0x0C0BAC9Au);
	r1 = 0xC069AF0u; UPD(0x0C0BAC9Cu, 1);  /* 0C0BAC9A mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C0BAC9C sub Rm,Rn */
	IF(0x0C0BAC9Eu); r9 <<= 2;  /* 0C0BAC9E shll2 Rn */
	r10 += r9;  /* 0C0BACA0 add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C0BACA4u, 4);  /* 0C0BACA2 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0BACA4 mov Rm,Rn */
	IF(0x0C0BACA6u); { u32 t_ = r1; PR = 0x0C0BACAAu; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BACAAu); }  /* 0C0BACA6 jsr @Rn */
L_0C0BACAA: BLKS(0x0C0BACAAu);
	r2 = 0xC069AF0u; UPD(0x0C0BACACu, 1);  /* 0C0BACAA mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BACAC mov Rm,Rn */
	r10 = r0;  /* 0C0BACAE mov Rm,Rn */
	IF(0x0C0BACB0u); { u32 t_ = r2; PR = 0x0C0BACB4u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BACB4u); }  /* 0C0BACB0 jsr @Rn */
L_0C0BACB4: BLKS(0x0C0BACB4u);
	r3 = 0xC069B20u; UPD(0x0C0BACB6u, 1);  /* 0C0BACB4 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0BACB6 mov Rm,Rn */
	r11 = r0;  /* 0C0BACB8 mov Rm,Rn */
	IF(0x0C0BACBAu); { u32 t_ = r3; PR = 0x0C0BACBEu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BACBEu); }  /* 0C0BACBA jsr @Rn */
L_0C0BACBE: BLKS(0x0C0BACBEu);
	r11 += r0;  /* 0C0BACBE add Rm,Rn */
	IF(0x0C0BACC0u); r11 <<= 2;  /* 0C0BACC0 shll2 Rn */
	r10 += r11;  /* 0C0BACC2 add Rm,Rn */
	W32(r8 + 0x34u, r10); UPD(0x0C0BACC6u, 4);  /* 0C0BACC4 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C0BACC6 mov #imm,Rn */
	r12 = R32(r14 + 0x38u); UPD(0x0C0BACCAu, 2);  /* 0C0BACC8 mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BACCA add #imm,Rn */
	W32(r8, r12); UPD(0x0C0BACCEu, 2);  /* 0C0BACCC mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0BACCE add #imm,Rn */
	W8(r8, r11); UPD(0x0C0BACD2u, 2);  /* 0C0BACD0 mov.b Rm,@Rn */
	r10 = 0x207C0C0u; UPD(0x0C0BACD4u, 1);  /* 0C0BACD2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BACD4 add #imm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C0BACD8u, 2);  /* 0C0BACD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C0BACDAu, 1);  /* 0C0BACD8 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C0BACDA add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C0BACDEu, 2);  /* 0C0BACDC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C0BACDE exts.w Rm,Rn */
	r8 += 0x40u;  /* 0C0BACE0 add #imm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0BACE4u, 3);  /* 0C0BACE2 mov.l @(disp,Rm),Rn */
	W32(r8, r9); UPD(0x0C0BACE6u, 1);  /* 0C0BACE4 mov.l Rm,@Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C0BACE6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAC08u, 4); goto L_0C0BAC08; } UPD(0x0C0BACECu, 1); goto L_0C0BACEC; }  /* 0C0BACE8 bf/s */
L_0C0BACEC: BLKS(0x0C0BACECu);
	r13 = 0xC0C2110u; UPD(0x0C0BACEEu, 1);  /* 0C0BACEC mov.l @(disp,pc),Rn */
	r5 = 0xC1F7ED8u; UPD(0x0C0BACF0u, 1);  /* 0C0BACEE mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0BACF2u, 1);  /* 0C0BACF0 mov.l @Rm,Rn */
	IF(0x0C0BACF2u); { u32 t_ = r13; PR = 0x0C0BACF6u; IF(0x0C0BACF4u); r4 = (u32)(s32)(s8)R8(r0 + r5); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BACF6u); }  /* 0C0BACF2 jsr @Rn */
L_0C0BACF6: BLKS(0x0C0BACF6u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BABACu, 3); goto L_0C0BABAC; }  /* 0C0BACF6 bra */
L_0C0BAD00: BLKS(0x0C0BAD00u);
	r8 = 0xC062780u; UPD(0x0C0BAD02u, 1);  /* 0C0BAD00 mov.l @(disp,pc),Rn */
	IF(0x0C0BAD02u); { u32 t_ = r8; PR = 0x0C0BAD06u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAD06u); }  /* 0C0BAD02 jsr @Rn */
L_0C0BAD06: BLKS(0x0C0BAD06u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0BABF0u, 3); goto L_0C0BABF0; }  /* 0C0BAD06 bra */
}

/* FUN_0c0bad60 */
void blk_f_0C0BAD60(sh3_t *c)
{
	LOCALS;
L_0C0BAD60: BLKS(0x0C0BAD60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD62u, 1);  /* 0C0BAD60 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BAD62 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD66u, 2);  /* 0C0BAD64 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BAD66 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD6Au, 2);  /* 0C0BAD68 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD6Cu, 1);  /* 0C0BAD6A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BAD6C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD70u, 2);  /* 0C0BAD6E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD72u, 1);  /* 0C0BAD70 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0BAD72 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD76u, 2);  /* 0C0BAD74 mov.l Rm,@-Rn */
	IF(0x0C0BAD76u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAD78u, 1);  /* 0C0BAD76 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BAD7Au, 1);  /* 0C0BAD78 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0BAD7A add #imm,Rn */
	r14 = r15;  /* 0C0BAD7C mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BAD80u, 3);  /* 0C0BAD7E mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BAD82u, 1);  /* 0C0BAD80 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAD82 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BADB4u, 4); goto L_0C0BADB4; } UPD(0x0C0BAD88u, 1); goto L_0C0BAD88; }  /* 0C0BAD84 bf/s */
L_0C0BAD88: BLKS(0x0C0BAD88u);
	r2 = 0xFF580000u; UPD(0x0C0BAD8Au, 1);  /* 0C0BAD88 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BAD8A add Rm,Rn */
	IF(0x0C0BAD8Cu); T = (s32)r2 >= 0;  /* 0C0BAD8C cmp/pz Rn */
	if (T) { UPD(0x0C0BAD92u, 5); goto L_0C0BAD92; }  /* 0C0BAD8E bt */
L_0C0BAD90: BLKS(0x0C0BAD90u);
	r2 = 0u - r2;  /* 0C0BAD90 neg Rm,Rn */
	UPD(0x0C0BAD92u, 1);
L_0C0BAD92: BLKS(0x0C0BAD92u);
	r0 = 0x980000u; UPD(0x0C0BAD94u, 1);  /* 0C0BAD92 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAD94 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADB4u, 4); goto L_0C0BADB4; } goto L_0C0BAD9A; }  /* 0C0BAD96 bt/s */
L_0C0BAD9A: BLKS(0x0C0BAD9Au);
	r2 = 0xC3C4048u; UPD(0x0C0BAD9Cu, 2);  /* 0C0BAD9A mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0BAD9Eu, 1);  /* 0C0BAD9C mov.l @Rm,Rn */
	r2 = R32(r14); UPD(0x0C0BADA0u, 1);  /* 0C0BAD9E mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BADA2u, 1);  /* 0C0BADA0 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BADA2 sub Rm,Rn */
	r2 += r4;  /* 0C0BADA4 add Rm,Rn */
	IF(0x0C0BADA6u); T = (s32)r2 >= 0;  /* 0C0BADA6 cmp/pz Rn */
	if (T) { UPD(0x0C0BADACu, 6); goto L_0C0BADAC; }  /* 0C0BADA8 bt */
L_0C0BADAA: BLKS(0x0C0BADAAu);
	r2 = 0u - r2;  /* 0C0BADAA neg Rm,Rn */
	UPD(0x0C0BADACu, 1);
L_0C0BADAC: BLKS(0x0C0BADACu);
	r6 = 0x700000u; UPD(0x0C0BADAEu, 1);  /* 0C0BADAC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BADAE cmp/gt Rm,Rn */
	IF(0x0C0BADB0u); r0 = T;  /* 0C0BADB0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BADB2 xor #imm,r0 */
	UPD(0x0C0BADB4u, 3);
L_0C0BADB4: BLKS(0x0C0BADB4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BADB4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BADB6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADE0u, 5); goto L_0C0BADE0; } UPD(0x0C0BADBCu, 1); goto L_0C0BADBC; }  /* 0C0BADB8 bf/s */
L_0C0BADBC: BLKS(0x0C0BADBCu);
	r14 += 0x20u;  /* 0C0BADBC add #imm,Rn */
	r15 = r14;  /* 0C0BADBE mov Rm,Rn */
	IF(0x0C0BADC0u); PR = R32(r15); r15 += 4; UPD(0x0C0BADC2u, 3);  /* 0C0BADC0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BADC4u, 1);  /* 0C0BADC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BADC6u, 1);  /* 0C0BADC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BADC8u, 1);  /* 0C0BADC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BADCAu, 1);  /* 0C0BADC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BADCCu, 1);  /* 0C0BADCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BADCEu, 1);  /* 0C0BADCC mov.l @Rm+,Rn */
	IF(0x0C0BADCEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BADCE rts */
L_0C0BADE0: BLKS(0x0C0BADE0u);
	r9 = 0xC0717A0u; UPD(0x0C0BADE2u, 1);  /* 0C0BADE0 mov.l @(disp,pc),Rn */
	IF(0x0C0BADE2u); { u32 t_ = r9; PR = 0x0C0BADE6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BADE6u); }  /* 0C0BADE2 jsr @Rn */
L_0C0BADE6: BLKS(0x0C0BADE6u);
	T = (r0 & r0) == 0;  /* 0C0BADE6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADBCu, 4); goto L_0C0BADBC; } goto L_0C0BADEC; }  /* 0C0BADE8 bt/s */
L_0C0BADEC: BLKS(0x0C0BADECu);
	r11 = 0x7u;  /* 0C0BADEC mov #imm,Rn */
	T = (s32)r8 > (s32)r11;  /* 0C0BADEE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BADF6u, 6); goto L_0C0BADF6; }  /* 0C0BADF0 bf */
L_0C0BADF2: BLKS(0x0C0BADF2u);
	{ IF(0x0C0BADF4u); ; /* slot nop */ UPD(0x0C0BAF00u, 3); goto L_0C0BAF00; }  /* 0C0BADF2 bra */
L_0C0BADF6: BLKS(0x0C0BADF6u);
	r9 = 0xC062780u; UPD(0x0C0BADF8u, 1);  /* 0C0BADF6 mov.l @(disp,pc),Rn */
L_0C0BADF8: BLKS(0x0C0BADF8u);
	r13 = 0xC28EDFCu; UPD(0x0C0BADFAu, 1);  /* 0C0BADF8 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BADFA mov #imm,Rn */
	IF(0x0C0BADFCu); { u32 t_ = r9; PR = 0x0C0BAE00u; W32(r14 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAE00u); }  /* 0C0BADFC jsr @Rn */
L_0C0BAE00: BLKS(0x0C0BAE00u);
	r13 = r0;  /* 0C0BAE00 mov Rm,Rn */
	r0 = 0xC234BECu; UPD(0x0C0BAE04u, 2);  /* 0C0BAE02 mov.l @(disp,pc),Rn */
	r13 += 0x10u;  /* 0C0BAE04 add #imm,Rn */
	r3 = R32(r0); UPD(0x0C0BAE08u, 2);  /* 0C0BAE06 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BAE08 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADBCu, 4); goto L_0C0BADBC; } goto L_0C0BAE0E; }  /* 0C0BAE0A bf/s */
L_0C0BAE0E: BLKS(0x0C0BAE0Eu);
	r10 += 0x4u;  /* 0C0BAE0E add #imm,Rn */
	r11 = r10;  /* 0C0BAE10 mov Rm,Rn */
	r6 = r8;  /* 0C0BAE12 mov Rm,Rn */
	IF(0x0C0BAE14u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE14 shar Rn */
	IF(0x0C0BAE16u); r8 <<= 2;  /* 0C0BAE16 shll2 Rn */
	IF(0x0C0BAE18u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE18 shar Rn */
	W32(r14 + 0x1Cu, r8); UPD(0x0C0BAE1Cu, 8);  /* 0C0BAE1A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAE1Cu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE1C shar Rn */
	r4 = 0x3Fu;  /* 0C0BAE1E mov #imm,Rn */
	r11 &= r4;  /* 0C0BAE20 and Rm,Rn */
	r5 = r13;  /* 0C0BAE22 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0BAE24 mov #imm,Rn */
	r1 = r11;  /* 0C0BAE26 mov Rm,Rn */
	r8 = 0x3u;  /* 0C0BAE28 mov #imm,Rn */
	IF(0x0C0BAE2Au); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BAE2A shld Rm,Rn */
	IF(0x0C0BAE2Cu); ARG0(0x418Du); { s32 s_ = (s32)r8; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0BAE2C shld Rm,Rn */
	r7 = 0x1u;  /* 0C0BAE2E mov #imm,Rn */
	r6 += r6;  /* 0C0BAE30 add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0BAE34u, 12);  /* 0C0BAE32 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BAE34 add #imm,Rn */
	W32(r14 + 0x18u, r6); UPD(0x0C0BAE38u, 2);  /* 0C0BAE36 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r5); UPD(0x0C0BAE3Au, 1);  /* 0C0BAE38 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r1); UPD(0x0C0BAE3Cu, 1);  /* 0C0BAE3A mov.l Rm,@(disp,Rn) */
L_0C0BAE3C: BLKS(0x0C0BAE3Cu);
	r5 = R32(r14 + 0xCu); UPD(0x0C0BAE3Eu, 1);  /* 0C0BAE3C mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAE3E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r9 = v_; } UPD(0x0C0BAE42u, 2);  /* 0C0BAE40 mov.w @Rm+,Rn */
	IF(0x0C0BAE42u); MACL = r9 * r8;  /* 0C0BAE42 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BAE46u, 3);  /* 0C0BAE44 mov.l @(disp,pc),Rn */
	IF(0x0C0BAE46u); r8 = MACL;  /* 0C0BAE46 sts macl,Rn */
	r8 += r0;  /* 0C0BAE48 add Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BAE4Cu, 3);  /* 0C0BAE4A mov.l @(disp,Rm),Rn */
	r4 = 0xC1F7F00u; UPD(0x0C0BAE4Eu, 1);  /* 0C0BAE4C mov.l @(disp,pc),Rn */
	IF(0x0C0BAE4Eu); r0 <<= 2;  /* 0C0BAE4E shll2 Rn */
	IF(0x0C0BAE50u); r7 = R32(r0 + r4); UPD(0x0C0BAE52u, 2);  /* 0C0BAE50 mov.l @(r0,Rm),Rn */
	r3 = 0xC1EADB8u; UPD(0x0C0BAE54u, 1);  /* 0C0BAE52 mov.l @(disp,pc),Rn */
	r0 = 0x40u;  /* 0C0BAE54 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0BAE58u, 2);  /* 0C0BAE56 mov.l Rm,@Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAE5Au, 1);  /* 0C0BAE58 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C0BAE5Cu, 1);  /* 0C0BAE5A mov.l @(disp,Rm),Rn */
	r7 = R32(r3); UPD(0x0C0BAE5Eu, 1);  /* 0C0BAE5C mov.l @Rm,Rn */
	r6 += r2;  /* 0C0BAE5E add Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0BAE62u, 2);  /* 0C0BAE60 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r13); UPD(0x0C0BAE64u, 1);  /* 0C0BAE62 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C0BAE66u, 1);  /* 0C0BAE64 mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0BAE66 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BAE6Au, 2);  /* 0C0BAE68 mov.w Rm,@Rn */
	IF(0x0C0BAE6Au); r1 = R32(r0 + r14); UPD(0x0C0BAE6Cu, 1);  /* 0C0BAE6A mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BAE6C add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0BAE70u, 2);  /* 0C0BAE6E mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C0BAE72u, 1);  /* 0C0BAE70 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0BAE74u, 1);  /* 0C0BAE72 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BAE74 add #imm,Rn */
	r5 = 0xC1F7EE0u; UPD(0x0C0BAE78u, 2);  /* 0C0BAE76 mov.l @(disp,pc),Rn */
	IF(0x0C0BAE78u); r4 = R32(r0 + r5); UPD(0x0C0BAE7Au, 1);  /* 0C0BAE78 mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BAE7A mov #imm,Rn */
	IF(0x0C0BAE7Cu); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0BAE7C shld Rm,Rn */
	r3 = 0xC1F7E08u; UPD(0x0C0BAE80u, 3);  /* 0C0BAE7E mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C0BAE82u, 1);  /* 0C0BAE80 mov.l Rm,@(disp,Rn) */
	r7 += r3;  /* 0C0BAE82 add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BAE86u, 2);  /* 0C0BAE84 mov.l Rm,@(disp,Rn) */
	r2 = R32(r7 + 0x4u); UPD(0x0C0BAE88u, 1);  /* 0C0BAE86 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BAE8Au, 1);  /* 0C0BAE88 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7); UPD(0x0C0BAE8Cu, 1);  /* 0C0BAE8A mov.l @Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0BAE8Eu, 1);  /* 0C0BAE8C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r6); UPD(0x0C0BAE90u, 1);  /* 0C0BAE8E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAE90u); r5 = R32(r0 + r6); UPD(0x0C0BAE92u, 1);  /* 0C0BAE90 mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0BAE94u, 1);  /* 0C0BAE92 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0BAE96u, 1);  /* 0C0BAE94 mov.l Rm,@(disp,Rn) */
	r0 += r5;  /* 0C0BAE96 add Rm,Rn */
	r4 = R32(r0); UPD(0x0C0BAE9Au, 2);  /* 0C0BAE98 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r4); UPD(0x0C0BAE9Cu, 1);  /* 0C0BAE9A mov.l Rm,@(disp,Rn) */
	r3 = R32(r0 + 0x4u); UPD(0x0C0BAE9Eu, 1);  /* 0C0BAE9C mov.l @(disp,Rm),Rn */
	r7 = 0xC2380C4u; UPD(0x0C0BAEA0u, 1);  /* 0C0BAE9E mov.l @(disp,pc),Rn */
	r0 = 0x40u;  /* 0C0BAEA0 mov #imm,Rn */
	W32(r8 + 0x20u, r3); UPD(0x0C0BAEA4u, 2);  /* 0C0BAEA2 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BAEA6u, 1);  /* 0C0BAEA4 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAEA6 add #imm,Rn */
	W16(r8, r6); UPD(0x0C0BAEAAu, 2);  /* 0C0BAEA8 mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAEAA add #imm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C0BAEAEu, 2);  /* 0C0BAEAC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14); UPD(0x0C0BAEB0u, 1);  /* 0C0BAEAE mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0BAEB2u, 1);  /* 0C0BAEB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAEB2u); r5 = R32(r0 + r14); UPD(0x0C0BAEB4u, 1);  /* 0C0BAEB2 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BAEB6u, 1);  /* 0C0BAEB4 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEB6u); { u32 t_ = r0; PR = 0x0C0BAEBAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAEBAu); }  /* 0C0BAEB6 jsr @Rn */
L_0C0BAEBA: BLKS(0x0C0BAEBAu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BAEBCu, 1);  /* 0C0BAEBA mov.l Rm,@(disp,Rn) */
	r0 = 0x40u;  /* 0C0BAEBC mov #imm,Rn */
	IF(0x0C0BAEBEu); r5 = R32(r0 + r14); UPD(0x0C0BAEC0u, 2);  /* 0C0BAEBE mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BAEC2u, 1);  /* 0C0BAEC0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEC2u); { u32 t_ = r0; PR = 0x0C0BAEC6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAEC6u); }  /* 0C0BAEC2 jsr @Rn */
L_0C0BAEC6: BLKS(0x0C0BAEC6u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BAEC8u, 1);  /* 0C0BAEC6 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0BAEC8 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BAECA add #imm,Rn */
	W8(r8, r5); UPD(0x0C0BAECEu, 3);  /* 0C0BAECC mov.b Rm,@Rn */
	r4 = 0x207C0C0u; UPD(0x0C0BAED0u, 1);  /* 0C0BAECE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BAED0 add #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C0BAED4u, 2);  /* 0C0BAED2 mov.l Rm,@(disp,Rn) */
	r0 = 0x808080u; UPD(0x0C0BAED6u, 1);  /* 0C0BAED4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BAED6 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BAEDAu, 2);  /* 0C0BAED8 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0BAEDA mov #imm,Rn */
	IF(0x0C0BAEDCu); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BAEDEu, 2);  /* 0C0BAEDC mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BAEDE add #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0BAEE2u, 2);  /* 0C0BAEE0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C0BAEE4u, 1);  /* 0C0BAEE2 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFFFu;  /* 0C0BAEE4 add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0BAEE6 exts.w Rm,Rn */
	W16(r8, r1); UPD(0x0C0BAEEAu, 3);  /* 0C0BAEE8 mov.w Rm,@Rn */
	IF(0x0C0BAEEAu); T = (s32)r9 >= 0;  /* 0C0BAEEA cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAE3Cu, 4); goto L_0C0BAE3C; } UPD(0x0C0BAEF0u, 1); goto L_0C0BAEF0; }  /* 0C0BAEEC bt/s */
L_0C0BAEF0: BLKS(0x0C0BAEF0u);
	r10 = 0xC0C2110u; UPD(0x0C0BAEF2u, 1);  /* 0C0BAEF0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEF2u); { u32 t_ = r10; PR = 0x0C0BAEF6u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BAEF6u); }  /* 0C0BAEF2 jsr @Rn */
L_0C0BAEF6: BLKS(0x0C0BAEF6u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BADBCu, 3); goto L_0C0BADBC; }  /* 0C0BAEF6 bra */
L_0C0BAF00: BLKS(0x0C0BAF00u);
	r9 = 0xC062780u; UPD(0x0C0BAF02u, 1);  /* 0C0BAF00 mov.l @(disp,pc),Rn */
	IF(0x0C0BAF02u); { u32 t_ = r9; PR = 0x0C0BAF06u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAF06u); }  /* 0C0BAF02 jsr @Rn */
L_0C0BAF06: BLKS(0x0C0BAF06u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BADF8u, 3); goto L_0C0BADF8; }  /* 0C0BAF06 bra */
}

/* FUN_0c0baf60 */
void blk_f_0C0BAF60(sh3_t *c)
{
	LOCALS;
L_0C0BAF60: BLKS(0x0C0BAF60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF62u, 1);  /* 0C0BAF60 mov.l Rm,@-Rn */
	r2 = 0x40u;  /* 0C0BAF62 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF66u, 2);  /* 0C0BAF64 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BAF66 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF6Au, 2);  /* 0C0BAF68 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0BAF6A exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF6Eu, 2);  /* 0C0BAF6C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BAF6E mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF72u, 2);  /* 0C0BAF70 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF74u, 1);  /* 0C0BAF72 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF76u, 1);  /* 0C0BAF74 mov.l Rm,@-Rn */
	IF(0x0C0BAF76u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAF78u, 1);  /* 0C0BAF76 sts.l pr,@-Rn */
	r15 += 0xFFFFFFD0u;  /* 0C0BAF78 add #imm,Rn */
	r14 = r15;  /* 0C0BAF7A mov Rm,Rn */
	r2 += r14;  /* 0C0BAF7C add Rm,Rn */
	r13 = R32(r2 + 0x14u); UPD(0x0C0BAF80u, 4);  /* 0C0BAF7E mov.l @(disp,Rm),Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BAF82u, 1);  /* 0C0BAF80 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0BAF84u, 1);  /* 0C0BAF82 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0BAF86u, 1);  /* 0C0BAF84 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAF86 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0BAF8Au, 2);  /* 0C0BAF88 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BAF8Cu, 1);  /* 0C0BAF8A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAFBEu, 3); goto L_0C0BAFBE; } UPD(0x0C0BAF90u, 1); goto L_0C0BAF90; }  /* 0C0BAF8C bf/s */
L_0C0BAF90: BLKS(0x0C0BAF90u);
	r2 = 0xFF580000u; UPD(0x0C0BAF92u, 1);  /* 0C0BAF90 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0BAF94u, 1);  /* 0C0BAF92 mov.l @Rm,Rn */
	r2 += r4;  /* 0C0BAF94 add Rm,Rn */
	IF(0x0C0BAF96u); T = (s32)r2 >= 0;  /* 0C0BAF96 cmp/pz Rn */
	if (T) { UPD(0x0C0BAF9Cu, 5); goto L_0C0BAF9C; }  /* 0C0BAF98 bt */
L_0C0BAF9A: BLKS(0x0C0BAF9Au);
	r2 = 0u - r2;  /* 0C0BAF9A neg Rm,Rn */
	UPD(0x0C0BAF9Cu, 1);
L_0C0BAF9C: BLKS(0x0C0BAF9Cu);
	r0 = 0x980000u; UPD(0x0C0BAF9Eu, 1);  /* 0C0BAF9C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAF9E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFBEu, 4); goto L_0C0BAFBE; } goto L_0C0BAFA4; }  /* 0C0BAFA0 bt/s */
L_0C0BAFA4: BLKS(0x0C0BAFA4u);
	r7 = 0xC3C4048u; UPD(0x0C0BAFA6u, 2);  /* 0C0BAFA4 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAFA8u, 1);  /* 0C0BAFA6 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BAFAAu, 1);  /* 0C0BAFA8 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BAFACu, 1);  /* 0C0BAFAA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BAFAC sub Rm,Rn */
	r2 += r5;  /* 0C0BAFAE add Rm,Rn */
	IF(0x0C0BAFB0u); T = (s32)r2 >= 0;  /* 0C0BAFB0 cmp/pz Rn */
	if (T) { UPD(0x0C0BAFB6u, 6); goto L_0C0BAFB6; }  /* 0C0BAFB2 bt */
L_0C0BAFB4: BLKS(0x0C0BAFB4u);
	r2 = 0u - r2;  /* 0C0BAFB4 neg Rm,Rn */
	UPD(0x0C0BAFB6u, 1);
L_0C0BAFB6: BLKS(0x0C0BAFB6u);
	r9 = 0x700000u; UPD(0x0C0BAFB8u, 1);  /* 0C0BAFB6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C0BAFB8 cmp/gt Rm,Rn */
	IF(0x0C0BAFBAu); r0 = T;  /* 0C0BAFBA movt Rn */
	r0 ^= 0x1u;  /* 0C0BAFBC xor #imm,r0 */
	UPD(0x0C0BAFBEu, 3);
L_0C0BAFBE: BLKS(0x0C0BAFBEu);
	r10 = (u32)(s32)(s8)r0;  /* 0C0BAFBE exts.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0BAFC0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFE0u, 5); goto L_0C0BAFE0; } UPD(0x0C0BAFC6u, 1); goto L_0C0BAFC6; }  /* 0C0BAFC2 bf/s */
L_0C0BAFC6: BLKS(0x0C0BAFC6u);
	r14 += 0x30u;  /* 0C0BAFC6 add #imm,Rn */
	r15 = r14;  /* 0C0BAFC8 mov Rm,Rn */
	IF(0x0C0BAFCAu); PR = R32(r15); r15 += 4; UPD(0x0C0BAFCCu, 3);  /* 0C0BAFCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BAFCEu, 1);  /* 0C0BAFCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BAFD0u, 1);  /* 0C0BAFCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BAFD2u, 1);  /* 0C0BAFD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BAFD4u, 1);  /* 0C0BAFD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BAFD6u, 1);  /* 0C0BAFD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BAFD8u, 1);  /* 0C0BAFD6 mov.l @Rm+,Rn */
	IF(0x0C0BAFD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BAFD8 rts */
L_0C0BAFE0: BLKS(0x0C0BAFE0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BAFE2u, 1);  /* 0C0BAFE0 mov.w @Rm+,Rn */
	r11 = 0xC0717A0u; UPD(0x0C0BAFE4u, 1);  /* 0C0BAFE2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0BAFE4 mov Rm,Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C0BAFE8u, 2);  /* 0C0BAFE6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAFE8u); { u32 t_ = r11; PR = 0x0C0BAFECu; r4 += r4; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BAFECu); }  /* 0C0BAFE8 jsr @Rn */
L_0C0BAFEC: BLKS(0x0C0BAFECu);
	T = (r0 & r0) == 0;  /* 0C0BAFEC tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFC6u, 4); goto L_0C0BAFC6; } goto L_0C0BAFF2; }  /* 0C0BAFEE bt/s */
L_0C0BAFF2: BLKS(0x0C0BAFF2u);
	r3 = 0x7u;  /* 0C0BAFF2 mov #imm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C0BAFF4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BAFFCu, 6); goto L_0C0BAFFC; }  /* 0C0BAFF6 bf */
L_0C0BAFF8: BLKS(0x0C0BAFF8u);
	{ IF(0x0C0BAFFAu); ; /* slot nop */ UPD(0x0C0BB130u, 3); goto L_0C0BB130; }  /* 0C0BAFF8 bra */
L_0C0BAFFC: BLKS(0x0C0BAFFCu);
	r9 = 0xC062780u; UPD(0x0C0BAFFEu, 1);  /* 0C0BAFFC mov.l @(disp,pc),Rn */
L_0C0BAFFE: BLKS(0x0C0BAFFEu);
	r1 = 0xC28EDFCu; UPD(0x0C0BB000u, 1);  /* 0C0BAFFE mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB000 mov #imm,Rn */
	IF(0x0C0BB002u); { u32 t_ = r9; PR = 0x0C0BB006u; W32(r14 + 0x18u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB006u); }  /* 0C0BB002 jsr @Rn */
L_0C0BB006: BLKS(0x0C0BB006u);
	r4 = 0xC234BECu; UPD(0x0C0BB008u, 1);  /* 0C0BB006 mov.l @(disp,pc),Rn */
	r0 += 0x10u;  /* 0C0BB008 add #imm,Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C0BB00Cu, 2);  /* 0C0BB00A mov.l Rm,@(disp,Rn) */
	r2 = R32(r4); UPD(0x0C0BB00Eu, 1);  /* 0C0BB00C mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BB00E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFC6u, 4); goto L_0C0BAFC6; } goto L_0C0BB014; }  /* 0C0BB010 bf/s */
L_0C0BB014: BLKS(0x0C0BB014u);
	r5 = 0x0u;  /* 0C0BB014 mov #imm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0BB018u, 3);  /* 0C0BB016 mov.l @(disp,Rm),Rn */
	T = (s32)r5 >= (s32)r0;  /* 0C0BB018 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB022u, 4); goto L_0C0BB022; } UPD(0x0C0BB01Eu, 1); goto L_0C0BB01E; }  /* 0C0BB01A bf/s */
L_0C0BB01E: BLKS(0x0C0BB01Eu);
	{ IF(0x0C0BB020u); ; /* slot nop */ UPD(0x0C0BB120u, 3); goto L_0C0BB120; }  /* 0C0BB01E bra */
L_0C0BB022: BLKS(0x0C0BB022u);
	r7 = r8;  /* 0C0BB022 mov Rm,Rn */
	IF(0x0C0BB024u); r8 <<= 2;  /* 0C0BB024 shll2 Rn */
	W32(r14 + 0x2Cu, r8); UPD(0x0C0BB028u, 3);  /* 0C0BB026 mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C0BB028 mov #imm,Rn */
	r8 = R32(r14 + 0x1Cu); UPD(0x0C0BB02Cu, 2);  /* 0C0BB02A mov.l @(disp,Rm),Rn */
	r7 += r7;  /* 0C0BB02C add Rm,Rn */
	IF(0x0C0BB02Eu); ARG0(0x486Du); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BB02E shld Rm,Rn */
	W32(r14 + 0x28u, r7); UPD(0x0C0BB032u, 3);  /* 0C0BB030 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x24u, r8); UPD(0x0C0BB034u, 1);  /* 0C0BB032 mov.l Rm,@(disp,Rn) */
L_0C0BB034: BLKS(0x0C0BB034u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB036u, 1);  /* 0C0BB034 mov.w @Rm+,Rn */
	r2 = 0x3Fu;  /* 0C0BB036 mov #imm,Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C0BB03Au, 2);  /* 0C0BB038 mov.l @(disp,Rm),Rn */
	r3 = 0x3u;  /* 0C0BB03A mov #imm,Rn */
	r11 = 0x1FFu; UPD(0x0C0BB03Eu, 2);  /* 0C0BB03C mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C0BB03E add Rm,Rn */
	r10 &= r11;  /* 0C0BB040 and Rm,Rn */
	r12 = r10;  /* 0C0BB042 mov Rm,Rn */
	r12 += 0x4u;  /* 0C0BB044 add #imm,Rn */
	IF(0x0C0BB046u); r12 >>= 2;  /* 0C0BB046 shlr2 Rn */
	IF(0x0C0BB048u); T = r12 & 1; r12 >>= 1;  /* 0C0BB048 shlr Rn */
	r12 &= r2;  /* 0C0BB04A and Rm,Rn */
	r9 = r12;  /* 0C0BB04C mov Rm,Rn */
	IF(0x0C0BB04Eu); ARG0(0x493Du); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0BB04E shld Rm,Rn */
	W32(r14 + 0x20u, r9); UPD(0x0C0BB052u, 10);  /* 0C0BB050 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C0BB052 mov #imm,Rn */
	UPD(0x0C0BB054u, 1);
L_0C0BB054: BLKS(0x0C0BB054u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0BB056u, 1);  /* 0C0BB054 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB056 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB05Au, 2);  /* 0C0BB058 mov.w @Rm+,Rn */
	r0 = r11;  /* 0C0BB05A mov Rm,Rn */
	IF(0x0C0BB05Cu); MACL = r9 * r8;  /* 0C0BB05C mul.l Rm,Rn */
	r3 = 0xC1F7F00u; UPD(0x0C0BB060u, 4);  /* 0C0BB05E mov.l @(disp,pc),Rn */
	IF(0x0C0BB060u); r0 <<= 2;  /* 0C0BB060 shll2 Rn */
	r2 = 0xC297B40u; UPD(0x0C0BB064u, 2);  /* 0C0BB062 mov.l @(disp,pc),Rn */
	IF(0x0C0BB064u); r8 = MACL;  /* 0C0BB064 sts macl,Rn */
	IF(0x0C0BB066u); r7 = R32(r0 + r3); UPD(0x0C0BB068u, 2);  /* 0C0BB066 mov.l @(r0,Rm),Rn */
	r8 += r2;  /* 0C0BB068 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0BB06Cu, 2);  /* 0C0BB06A mov.l Rm,@Rn */
	r6 = 0xC297490u; UPD(0x0C0BB06Eu, 1);  /* 0C0BB06C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0BB070u, 1);  /* 0C0BB06E mov.b @Rm,Rn */
	r4 = 0xC1EADB8u; UPD(0x0C0BB072u, 1);  /* 0C0BB070 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C0BB072 extu.b Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0BB076u, 2);  /* 0C0BB074 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB076u); r0 <<= 2;  /* 0C0BB076 shll2 Rn */
	r0 += r4;  /* 0C0BB078 add Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0BB07Cu, 3);  /* 0C0BB07A mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0BB07C mov #imm,Rn */
	r4 = R32(r0 + 0x4u); UPD(0x0C0BB080u, 2);  /* 0C0BB07E mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C0BB080 add Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0BB084u, 2);  /* 0C0BB082 mov.l @(disp,Rm),Rn */
	r0 = 0x50u;  /* 0C0BB084 mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C0BB088u, 2);  /* 0C0BB086 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r4); UPD(0x0C0BB08Au, 1);  /* 0C0BB088 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r2); UPD(0x0C0BB08Cu, 1);  /* 0C0BB08A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB08Cu); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB08C shld Rm,Rn */
	r8 += 0x44u;  /* 0C0BB08E add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB092u, 3);  /* 0C0BB090 mov.w Rm,@Rn */
	IF(0x0C0BB092u); r3 = R32(r0 + r14); UPD(0x0C0BB094u, 1);  /* 0C0BB092 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB094 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB098u, 2);  /* 0C0BB096 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0BB09Au, 1);  /* 0C0BB098 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB09A add #imm,Rn */
	r7 = 0xC1F7EE0u; UPD(0x0C0BB09Eu, 2);  /* 0C0BB09C mov.l @(disp,pc),Rn */
	IF(0x0C0BB09Eu); r6 = R32(r0 + r7); UPD(0x0C0BB0A0u, 1);  /* 0C0BB09E mov.l @(r0,Rm),Rn */
	r0 = 0xC1F7E08u; UPD(0x0C0BB0A2u, 1);  /* 0C0BB0A0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C0BB0A4u, 1);  /* 0C0BB0A2 mov.l Rm,@(disp,Rn) */
	r4 += r0;  /* 0C0BB0A4 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB0A8u, 2);  /* 0C0BB0A6 mov.l Rm,@(disp,Rn) */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BB0AAu, 1);  /* 0C0BB0A8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BB0ACu, 1);  /* 0C0BB0AA mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BB0AEu, 1);  /* 0C0BB0AC mov.l @Rm,Rn */
	r0 = R32(r14 + 0x24u); UPD(0x0C0BB0B0u, 1);  /* 0C0BB0AE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BB0B2u, 1);  /* 0C0BB0B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB0B2u); r7 = R32(r0 + r3); UPD(0x0C0BB0B4u, 1);  /* 0C0BB0B2 mov.l @(r0,Rm),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BB0B6u, 1);  /* 0C0BB0B4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BB0B8u, 1);  /* 0C0BB0B6 mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BB0B8 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C0BB0BCu, 2);  /* 0C0BB0BA mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0BB0BEu, 1);  /* 0C0BB0BC mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0BB0C0u, 1);  /* 0C0BB0BE mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BB0C2u, 1);  /* 0C0BB0C0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0BB0C4u, 1);  /* 0C0BB0C2 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BB0C6u, 1);  /* 0C0BB0C4 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB0C6 add #imm,Rn */
	W16(r8, r2); UPD(0x0C0BB0CAu, 2);  /* 0C0BB0C8 mov.w Rm,@Rn */
	r0 = 0x50u;  /* 0C0BB0CA mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0BB0CEu, 2);  /* 0C0BB0CC mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB0CE add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BB0D2u, 2);  /* 0C0BB0D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0BB0D4u, 1);  /* 0C0BB0D2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C0BB0D6u, 1);  /* 0C0BB0D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB0D6u); r5 = R32(r0 + r14); UPD(0x0C0BB0D8u, 1);  /* 0C0BB0D6 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB0DAu, 1);  /* 0C0BB0D8 mov.l @(disp,pc),Rn */
	IF(0x0C0BB0DAu); { u32 t_ = r0; PR = 0x0C0BB0DEu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB0DEu); }  /* 0C0BB0DA jsr @Rn */
L_0C0BB0DE: BLKS(0x0C0BB0DEu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB0E0u, 1);  /* 0C0BB0DE mov.l Rm,@(disp,Rn) */
	r0 = 0x50u;  /* 0C0BB0E0 mov #imm,Rn */
	IF(0x0C0BB0E2u); r5 = R32(r0 + r14); UPD(0x0C0BB0E4u, 2);  /* 0C0BB0E2 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB0E6u, 1);  /* 0C0BB0E4 mov.l @(disp,pc),Rn */
	IF(0x0C0BB0E6u); { u32 t_ = r0; PR = 0x0C0BB0EAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB0EAu); }  /* 0C0BB0E6 jsr @Rn */
L_0C0BB0EA: BLKS(0x0C0BB0EAu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB0ECu, 1);  /* 0C0BB0EA mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C0BB0EC mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB0EE add #imm,Rn */
	W8(r8, r6); UPD(0x0C0BB0F2u, 3);  /* 0C0BB0F0 mov.b Rm,@Rn */
	r4 = r11;  /* 0C0BB0F2 mov Rm,Rn */
	r5 = 0x207C0C0u; UPD(0x0C0BB0F6u, 2);  /* 0C0BB0F4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB0F6 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C0BB0FAu, 2);  /* 0C0BB0F8 mov.l Rm,@(disp,Rn) */
	r4 += 0xFFFFFFFFu;  /* 0C0BB0FA add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0BB0FEu, 2);  /* 0C0BB0FC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB0FE add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BB102u, 2);  /* 0C0BB100 mov.l Rm,@Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0BB102 exts.w Rm,Rn */
	r0 = 0x16u;  /* 0C0BB104 mov #imm,Rn */
	IF(0x0C0BB106u); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB108u, 3);  /* 0C0BB106 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB108 add #imm,Rn */
	W16(r8, r1); UPD(0x0C0BB10Cu, 2);  /* 0C0BB10A mov.w Rm,@Rn */
	IF(0x0C0BB10Cu); T = (s32)r11 >= 0;  /* 0C0BB10C cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB054u, 4); goto L_0C0BB054; } UPD(0x0C0BB112u, 1); goto L_0C0BB112; }  /* 0C0BB10E bt/s */
L_0C0BB112: BLKS(0x0C0BB112u);
	r11 = R32(r14 + 0x10u); UPD(0x0C0BB114u, 1);  /* 0C0BB112 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C0BB114 add #imm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C0BB116 exts.w Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C0BB11Au, 3);  /* 0C0BB118 mov.l @(disp,Rm),Rn */
	T = (s32)r9 >= (s32)r10;  /* 0C0BB11A cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB034u, 4); goto L_0C0BB034; } UPD(0x0C0BB120u, 1); goto L_0C0BB120; }  /* 0C0BB11C bf/s */
L_0C0BB120: BLKS(0x0C0BB120u);
	r13 = 0xC0C2110u; UPD(0x0C0BB122u, 1);  /* 0C0BB120 mov.l @(disp,pc),Rn */
	IF(0x0C0BB122u); { u32 t_ = r13; PR = 0x0C0BB126u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB126u); }  /* 0C0BB122 jsr @Rn */
L_0C0BB126: BLKS(0x0C0BB126u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BAFC6u, 3); goto L_0C0BAFC6; }  /* 0C0BB126 bra */
L_0C0BB130: BLKS(0x0C0BB130u);
	r9 = 0xC062780u; UPD(0x0C0BB132u, 1);  /* 0C0BB130 mov.l @(disp,pc),Rn */
	IF(0x0C0BB132u); { u32 t_ = r9; PR = 0x0C0BB136u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB136u); }  /* 0C0BB132 jsr @Rn */
L_0C0BB136: BLKS(0x0C0BB136u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BAFFEu, 3); goto L_0C0BAFFE; }  /* 0C0BB136 bra */
}

/* FUN_0c0bb1a0 */
void blk_f_0C0BB1A0(sh3_t *c)
{
	LOCALS;
L_0C0BB1A0: BLKS(0x0C0BB1A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A2u, 1);  /* 0C0BB1A0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB1A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A6u, 2);  /* 0C0BB1A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A8u, 1);  /* 0C0BB1A6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BB1A8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1ACu, 2);  /* 0C0BB1AA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BB1AC exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B0u, 2);  /* 0C0BB1AE mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB1B0 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B4u, 2);  /* 0C0BB1B2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B6u, 1);  /* 0C0BB1B4 mov.l Rm,@-Rn */
	IF(0x0C0BB1B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB1B8u, 1);  /* 0C0BB1B6 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB1BAu, 1);  /* 0C0BB1B8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0BB1BA add #imm,Rn */
	r14 = r15;  /* 0C0BB1BC mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB1C0u, 3);  /* 0C0BB1BE mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BB1C2u, 1);  /* 0C0BB1C0 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB1C2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BB1F4u, 4); goto L_0C0BB1F4; } UPD(0x0C0BB1C8u, 1); goto L_0C0BB1C8; }  /* 0C0BB1C4 bf/s */
L_0C0BB1C8: BLKS(0x0C0BB1C8u);
	r2 = 0xFF580000u; UPD(0x0C0BB1CAu, 1);  /* 0C0BB1C8 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BB1CA add Rm,Rn */
	IF(0x0C0BB1CCu); T = (s32)r2 >= 0;  /* 0C0BB1CC cmp/pz Rn */
	if (T) { UPD(0x0C0BB1D2u, 5); goto L_0C0BB1D2; }  /* 0C0BB1CE bt */
L_0C0BB1D0: BLKS(0x0C0BB1D0u);
	r2 = 0u - r2;  /* 0C0BB1D0 neg Rm,Rn */
	UPD(0x0C0BB1D2u, 1);
L_0C0BB1D2: BLKS(0x0C0BB1D2u);
	r0 = 0x980000u; UPD(0x0C0BB1D4u, 1);  /* 0C0BB1D2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BB1D4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB1F4u, 4); goto L_0C0BB1F4; } goto L_0C0BB1DA; }  /* 0C0BB1D6 bt/s */
L_0C0BB1DA: BLKS(0x0C0BB1DAu);
	r2 = 0xC3C4048u; UPD(0x0C0BB1DCu, 2);  /* 0C0BB1DA mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0BB1DEu, 1);  /* 0C0BB1DC mov.l @Rm,Rn */
	r2 = R32(r14); UPD(0x0C0BB1E0u, 1);  /* 0C0BB1DE mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BB1E2u, 1);  /* 0C0BB1E0 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BB1E2 sub Rm,Rn */
	r2 += r4;  /* 0C0BB1E4 add Rm,Rn */
	IF(0x0C0BB1E6u); T = (s32)r2 >= 0;  /* 0C0BB1E6 cmp/pz Rn */
	if (T) { UPD(0x0C0BB1ECu, 6); goto L_0C0BB1EC; }  /* 0C0BB1E8 bt */
L_0C0BB1EA: BLKS(0x0C0BB1EAu);
	r2 = 0u - r2;  /* 0C0BB1EA neg Rm,Rn */
	UPD(0x0C0BB1ECu, 1);
L_0C0BB1EC: BLKS(0x0C0BB1ECu);
	r6 = 0x700000u; UPD(0x0C0BB1EEu, 1);  /* 0C0BB1EC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BB1EE cmp/gt Rm,Rn */
	IF(0x0C0BB1F0u); r0 = T;  /* 0C0BB1F0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BB1F2 xor #imm,r0 */
	UPD(0x0C0BB1F4u, 3);
L_0C0BB1F4: BLKS(0x0C0BB1F4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BB1F4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BB1F6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB220u, 5); goto L_0C0BB220; } UPD(0x0C0BB1FCu, 1); goto L_0C0BB1FC; }  /* 0C0BB1F8 bf/s */
L_0C0BB1FC: BLKS(0x0C0BB1FCu);
	r14 += 0x24u;  /* 0C0BB1FC add #imm,Rn */
	r15 = r14;  /* 0C0BB1FE mov Rm,Rn */
	IF(0x0C0BB200u); PR = R32(r15); r15 += 4; UPD(0x0C0BB202u, 3);  /* 0C0BB200 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB204u, 1);  /* 0C0BB202 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB206u, 1);  /* 0C0BB204 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB208u, 1);  /* 0C0BB206 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB20Au, 1);  /* 0C0BB208 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB20Cu, 1);  /* 0C0BB20A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB20Eu, 1);  /* 0C0BB20C mov.l @Rm+,Rn */
	IF(0x0C0BB20Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB20E rts */
L_0C0BB220: BLKS(0x0C0BB220u);
	r8 = 0xC0717A0u; UPD(0x0C0BB222u, 1);  /* 0C0BB220 mov.l @(disp,pc),Rn */
	IF(0x0C0BB222u); { u32 t_ = r8; PR = 0x0C0BB226u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB226u); }  /* 0C0BB222 jsr @Rn */
L_0C0BB226: BLKS(0x0C0BB226u);
	T = (r0 & r0) == 0;  /* 0C0BB226 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB1FCu, 4); goto L_0C0BB1FC; } goto L_0C0BB22C; }  /* 0C0BB228 bt/s */
L_0C0BB22C: BLKS(0x0C0BB22Cu);
	r12 = 0x7u;  /* 0C0BB22C mov #imm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C0BB22E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB236u, 6); goto L_0C0BB236; }  /* 0C0BB230 bf */
L_0C0BB232: BLKS(0x0C0BB232u);
	{ IF(0x0C0BB234u); ; /* slot nop */ UPD(0x0C0BB340u, 3); goto L_0C0BB340; }  /* 0C0BB232 bra */
L_0C0BB236: BLKS(0x0C0BB236u);
	r8 = 0xC062780u; UPD(0x0C0BB238u, 1);  /* 0C0BB236 mov.l @(disp,pc),Rn */
L_0C0BB238: BLKS(0x0C0BB238u);
	r0 = 0xC28EDFCu; UPD(0x0C0BB23Au, 1);  /* 0C0BB238 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB23A mov #imm,Rn */
	IF(0x0C0BB23Cu); { u32 t_ = r8; PR = 0x0C0BB240u; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB240u); }  /* 0C0BB23C jsr @Rn */
L_0C0BB240: BLKS(0x0C0BB240u);
	r3 = 0xC234BECu; UPD(0x0C0BB242u, 1);  /* 0C0BB240 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C0BB242 mov Rm,Rn */
	r1 += 0x18u;  /* 0C0BB244 add #imm,Rn */
	r13 = R32(r3); UPD(0x0C0BB248u, 3);  /* 0C0BB246 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0BB248 mov #imm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB24A tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB1FCu, 5); goto L_0C0BB1FC; } UPD(0x0C0BB250u, 1); goto L_0C0BB250; }  /* 0C0BB24C bf/s */
L_0C0BB250: BLKS(0x0C0BB250u);
	r12 = r11;  /* 0C0BB250 mov Rm,Rn */
	r12 += r12;  /* 0C0BB252 add Rm,Rn */
	W32(r14 + 0x1Cu, r12); UPD(0x0C0BB256u, 3);  /* 0C0BB254 mov.l Rm,@(disp,Rn) */
	r10 += 0x4u;  /* 0C0BB256 add #imm,Rn */
	r12 = r10;  /* 0C0BB258 mov Rm,Rn */
	IF(0x0C0BB25Au); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25A shar Rn */
	IF(0x0C0BB25Cu); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25C shar Rn */
	IF(0x0C0BB25Eu); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25E shar Rn */
	r2 = 0x3Fu;  /* 0C0BB260 mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0BB264u, 7);  /* 0C0BB262 mov.l @(disp,Rm),Rn */
	r12 &= r2;  /* 0C0BB264 and Rm,Rn */
	r7 = 0x4u;  /* 0C0BB266 mov #imm,Rn */
	r4 = r12;  /* 0C0BB268 mov Rm,Rn */
	r5 = 0x3u;  /* 0C0BB26A mov #imm,Rn */
	r8 = r11;  /* 0C0BB26C mov Rm,Rn */
	IF(0x0C0BB26Eu); ARG0(0x467Du); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BB26E shld Rm,Rn */
	IF(0x0C0BB270u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB270 shld Rm,Rn */
	IF(0x0C0BB272u); r8 <<= 2;  /* 0C0BB272 shll2 Rn */
	W32(r14 + 0x20u, r8); UPD(0x0C0BB276u, 9);  /* 0C0BB274 mov.l Rm,@(disp,Rn) */
	r13 = 0x2u;  /* 0C0BB276 mov #imm,Rn */
	W32(r14 + 0x18u, r6); UPD(0x0C0BB27Au, 2);  /* 0C0BB278 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BB27A add #imm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0BB27Eu, 2);  /* 0C0BB27C mov.l Rm,@(disp,Rn) */
L_0C0BB27E: BLKS(0x0C0BB27Eu);
	r2 = R32(r14 + 0xCu); UPD(0x0C0BB280u, 1);  /* 0C0BB27E mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB280 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0BB284u, 2);  /* 0C0BB282 mov.w @Rm+,Rn */
	IF(0x0C0BB284u); MACL = r6 * r8;  /* 0C0BB284 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB288u, 3);  /* 0C0BB286 mov.l @(disp,pc),Rn */
	IF(0x0C0BB288u); r8 = MACL;  /* 0C0BB288 sts macl,Rn */
	r8 += r0;  /* 0C0BB28A add Rm,Rn */
	r0 = r13;  /* 0C0BB28C mov Rm,Rn */
	r5 = 0xC1F7F08u; UPD(0x0C0BB290u, 4);  /* 0C0BB28E mov.l @(disp,pc),Rn */
	IF(0x0C0BB290u); r0 <<= 2;  /* 0C0BB290 shll2 Rn */
	IF(0x0C0BB292u); r7 = R32(r0 + r5); UPD(0x0C0BB294u, 2);  /* 0C0BB292 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BB296u, 1);  /* 0C0BB294 mov.l Rm,@(disp,Rn) */
	r0 = 0x44u;  /* 0C0BB296 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0BB29Au, 2);  /* 0C0BB298 mov.l Rm,@Rn */
	r4 = 0xC1EADCCu; UPD(0x0C0BB29Cu, 1);  /* 0C0BB29A mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x1Cu); UPD(0x0C0BB29Eu, 1);  /* 0C0BB29C mov.l @(disp,Rm),Rn */
	r7 = R32(r4); UPD(0x0C0BB2A0u, 1);  /* 0C0BB29E mov.l @Rm,Rn */
	r6 += r11;  /* 0C0BB2A0 add Rm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C0BB2A4u, 2);  /* 0C0BB2A2 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C0BB2A4 add Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0BB2A8u, 2);  /* 0C0BB2A6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r3); UPD(0x0C0BB2AAu, 1);  /* 0C0BB2A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C0BB2ACu, 1);  /* 0C0BB2AA mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0BB2AC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB2B0u, 2);  /* 0C0BB2AE mov.w Rm,@Rn */
	IF(0x0C0BB2B0u); r1 = R32(r0 + r14); UPD(0x0C0BB2B2u, 1);  /* 0C0BB2B0 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB2B2 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0BB2B6u, 2);  /* 0C0BB2B4 mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C0BB2B8u, 1);  /* 0C0BB2B6 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0BB2BAu, 1);  /* 0C0BB2B8 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB2BA add #imm,Rn */
	r2 = 0xC1F7F14u; UPD(0x0C0BB2BEu, 2);  /* 0C0BB2BC mov.l @(disp,pc),Rn */
	IF(0x0C0BB2BEu); r5 = R32(r0 + r2); UPD(0x0C0BB2C0u, 1);  /* 0C0BB2BE mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BB2C0 mov #imm,Rn */
	IF(0x0C0BB2C2u); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0BB2C2 shld Rm,Rn */
	r4 = 0xC1F7E08u; UPD(0x0C0BB2C6u, 3);  /* 0C0BB2C4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C0BB2C8u, 1);  /* 0C0BB2C6 mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C0BB2C8 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB2CCu, 2);  /* 0C0BB2CA mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0x4u); UPD(0x0C0BB2CEu, 1);  /* 0C0BB2CC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C0BB2D0u, 1);  /* 0C0BB2CE mov.l Rm,@(disp,Rn) */
	r6 = R32(r7); UPD(0x0C0BB2D2u, 1);  /* 0C0BB2D0 mov.l @Rm,Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0BB2D4u, 1);  /* 0C0BB2D2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r6); UPD(0x0C0BB2D6u, 1);  /* 0C0BB2D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB2D6u); r2 = R32(r0 + r6); UPD(0x0C0BB2D8u, 1);  /* 0C0BB2D6 mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0BB2DAu, 1);  /* 0C0BB2D8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0BB2DCu, 1);  /* 0C0BB2DA mov.l Rm,@(disp,Rn) */
	r0 += r2;  /* 0C0BB2DC add Rm,Rn */
	r5 = R32(r0); UPD(0x0C0BB2E0u, 2);  /* 0C0BB2DE mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r5); UPD(0x0C0BB2E2u, 1);  /* 0C0BB2E0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r0 + 0x4u); UPD(0x0C0BB2E4u, 1);  /* 0C0BB2E2 mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BB2E6u, 1);  /* 0C0BB2E4 mov.l @(disp,pc),Rn */
	r0 = 0x44u;  /* 0C0BB2E6 mov #imm,Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BB2EAu, 2);  /* 0C0BB2E8 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB2ECu, 1);  /* 0C0BB2EA mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB2EC add #imm,Rn */
	W16(r8, r7); UPD(0x0C0BB2F0u, 2);  /* 0C0BB2EE mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB2F0 add #imm,Rn */
	W32(r8 + 0x28u, r9); UPD(0x0C0BB2F4u, 2);  /* 0C0BB2F2 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0BB2F6u, 1);  /* 0C0BB2F4 mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0BB2F8u, 1);  /* 0C0BB2F6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB2F8u); r5 = R32(r0 + r14); UPD(0x0C0BB2FAu, 1);  /* 0C0BB2F8 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB2FCu, 1);  /* 0C0BB2FA mov.l @(disp,pc),Rn */
	IF(0x0C0BB2FCu); { u32 t_ = r0; PR = 0x0C0BB300u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB300u); }  /* 0C0BB2FC jsr @Rn */
L_0C0BB300: BLKS(0x0C0BB300u);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB302u, 1);  /* 0C0BB300 mov.l Rm,@(disp,Rn) */
	r0 = 0x44u;  /* 0C0BB302 mov #imm,Rn */
	IF(0x0C0BB304u); r5 = R32(r0 + r14); UPD(0x0C0BB306u, 2);  /* 0C0BB304 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB308u, 1);  /* 0C0BB306 mov.l @(disp,pc),Rn */
	IF(0x0C0BB308u); { u32 t_ = r0; PR = 0x0C0BB30Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB30Cu); }  /* 0C0BB308 jsr @Rn */
L_0C0BB30C: BLKS(0x0C0BB30Cu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB30Eu, 1);  /* 0C0BB30C mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0BB30E mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB310 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BB314u, 3);  /* 0C0BB312 mov.b Rm,@Rn */
	r3 = r13;  /* 0C0BB314 mov Rm,Rn */
	r5 = 0x207C0C0u; UPD(0x0C0BB318u, 2);  /* 0C0BB316 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB318 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C0BB31Cu, 2);  /* 0C0BB31A mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFFFu;  /* 0C0BB31C add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0BB320u, 2);  /* 0C0BB31E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB320 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BB324u, 2);  /* 0C0BB322 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C0BB324 exts.w Rm,Rn */
	r0 = 0xAu;  /* 0C0BB326 mov #imm,Rn */
	IF(0x0C0BB328u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB32Au, 3);  /* 0C0BB328 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB32A add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BB32Eu, 2);  /* 0C0BB32C mov.l @(disp,Rm),Rn */
	IF(0x0C0BB32Eu); T = (s32)r13 >= 0;  /* 0C0BB32E cmp/pz Rn */
	W16(r8, r4); UPD(0x0C0BB332u, 2);  /* 0C0BB330 mov.w Rm,@Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB27Eu, 3); goto L_0C0BB27E; } UPD(0x0C0BB336u, 1); goto L_0C0BB336; }  /* 0C0BB332 bt/s */
L_0C0BB336: BLKS(0x0C0BB336u);
	r9 = 0xC0C2110u; UPD(0x0C0BB338u, 1);  /* 0C0BB336 mov.l @(disp,pc),Rn */
	IF(0x0C0BB338u); { u32 t_ = r9; PR = 0x0C0BB33Cu; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB33Cu); }  /* 0C0BB338 jsr @Rn */
L_0C0BB33C: BLKS(0x0C0BB33Cu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB1FCu, 3); goto L_0C0BB1FC; }  /* 0C0BB33C bra */
L_0C0BB340: BLKS(0x0C0BB340u);
	r8 = 0xC062780u; UPD(0x0C0BB342u, 1);  /* 0C0BB340 mov.l @(disp,pc),Rn */
	IF(0x0C0BB342u); { u32 t_ = r8; PR = 0x0C0BB346u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB346u); }  /* 0C0BB342 jsr @Rn */
L_0C0BB346: BLKS(0x0C0BB346u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BB238u, 3); goto L_0C0BB238; }  /* 0C0BB346 bra */
}

/* FUN_0c0bb3a0 */
void blk_f_0C0BB3A0(sh3_t *c)
{
	LOCALS;
L_0C0BB3A0: BLKS(0x0C0BB3A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3A2u, 1);  /* 0C0BB3A0 mov.l Rm,@-Rn */
	r2 = 0x40u;  /* 0C0BB3A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3A6u, 2);  /* 0C0BB3A4 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB3A6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3AAu, 2);  /* 0C0BB3A8 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0BB3AA exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3AEu, 2);  /* 0C0BB3AC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B0u, 1);  /* 0C0BB3AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B2u, 1);  /* 0C0BB3B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B4u, 1);  /* 0C0BB3B2 mov.l Rm,@-Rn */
	IF(0x0C0BB3B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB3B6u, 1);  /* 0C0BB3B4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFCCu;  /* 0C0BB3B6 add #imm,Rn */
	r14 = r15;  /* 0C0BB3B8 mov Rm,Rn */
	r2 += r14;  /* 0C0BB3BA add Rm,Rn */
	r13 = R32(r2 + 0x18u); UPD(0x0C0BB3BEu, 4);  /* 0C0BB3BC mov.l @(disp,Rm),Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB3C0u, 1);  /* 0C0BB3BE mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0BB3C2u, 1);  /* 0C0BB3C0 mov.l @Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C0BB3C4u, 1);  /* 0C0BB3C2 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB3C4 tst Rm,Rn */
	W32(r14, r4); UPD(0x0C0BB3C8u, 2);  /* 0C0BB3C6 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BB3CAu, 1);  /* 0C0BB3C8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0BB3CCu, 1);  /* 0C0BB3CA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB3FEu, 3); goto L_0C0BB3FE; } UPD(0x0C0BB3D0u, 1); goto L_0C0BB3D0; }  /* 0C0BB3CC bf/s */
L_0C0BB3D0: BLKS(0x0C0BB3D0u);
	r2 = 0xFF580000u; UPD(0x0C0BB3D2u, 1);  /* 0C0BB3D0 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BB3D4u, 1);  /* 0C0BB3D2 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0BB3D4 add Rm,Rn */
	IF(0x0C0BB3D6u); T = (s32)r2 >= 0;  /* 0C0BB3D6 cmp/pz Rn */
	if (T) { UPD(0x0C0BB3DCu, 5); goto L_0C0BB3DC; }  /* 0C0BB3D8 bt */
L_0C0BB3DA: BLKS(0x0C0BB3DAu);
	r2 = 0u - r2;  /* 0C0BB3DA neg Rm,Rn */
	UPD(0x0C0BB3DCu, 1);
L_0C0BB3DC: BLKS(0x0C0BB3DCu);
	r4 = 0x980000u; UPD(0x0C0BB3DEu, 1);  /* 0C0BB3DC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BB3DE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB3FEu, 4); goto L_0C0BB3FE; } goto L_0C0BB3E4; }  /* 0C0BB3E0 bt/s */
L_0C0BB3E4: BLKS(0x0C0BB3E4u);
	r7 = 0xC3C4048u; UPD(0x0C0BB3E6u, 2);  /* 0C0BB3E4 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0BB3E8u, 1);  /* 0C0BB3E6 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BB3EAu, 1);  /* 0C0BB3E8 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BB3ECu, 1);  /* 0C0BB3EA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BB3EC sub Rm,Rn */
	r2 += r5;  /* 0C0BB3EE add Rm,Rn */
	IF(0x0C0BB3F0u); T = (s32)r2 >= 0;  /* 0C0BB3F0 cmp/pz Rn */
	if (T) { UPD(0x0C0BB3F6u, 6); goto L_0C0BB3F6; }  /* 0C0BB3F2 bt */
L_0C0BB3F4: BLKS(0x0C0BB3F4u);
	r2 = 0u - r2;  /* 0C0BB3F4 neg Rm,Rn */
	UPD(0x0C0BB3F6u, 1);
L_0C0BB3F6: BLKS(0x0C0BB3F6u);
	r8 = 0x700000u; UPD(0x0C0BB3F8u, 1);  /* 0C0BB3F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0BB3F8 cmp/gt Rm,Rn */
	IF(0x0C0BB3FAu); r0 = T;  /* 0C0BB3FA movt Rn */
	r0 ^= 0x1u;  /* 0C0BB3FC xor #imm,r0 */
	UPD(0x0C0BB3FEu, 3);
L_0C0BB3FE: BLKS(0x0C0BB3FEu);
	r9 = (u32)(s32)(s8)r0;  /* 0C0BB3FE exts.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BB400 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB420u, 5); goto L_0C0BB420; } UPD(0x0C0BB406u, 1); goto L_0C0BB406; }  /* 0C0BB402 bf/s */
L_0C0BB406: BLKS(0x0C0BB406u);
	r14 += 0x34u;  /* 0C0BB406 add #imm,Rn */
	r15 = r14;  /* 0C0BB408 mov Rm,Rn */
	IF(0x0C0BB40Au); PR = R32(r15); r15 += 4; UPD(0x0C0BB40Cu, 3);  /* 0C0BB40A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB40Eu, 1);  /* 0C0BB40C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB410u, 1);  /* 0C0BB40E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB412u, 1);  /* 0C0BB410 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB414u, 1);  /* 0C0BB412 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB416u, 1);  /* 0C0BB414 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB418u, 1);  /* 0C0BB416 mov.l @Rm+,Rn */
	IF(0x0C0BB418u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB418 rts */
L_0C0BB420: BLKS(0x0C0BB420u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB422u, 1);  /* 0C0BB420 mov.w @Rm+,Rn */
	r11 = 0x3u;  /* 0C0BB422 mov #imm,Rn */
	r10 = 0xC0717A0u; UPD(0x0C0BB426u, 2);  /* 0C0BB424 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r12 * (s32)(s16)r11);  /* 0C0BB426 muls.w Rm,Rn */
	W32(r14 + 0x10u, r12); UPD(0x0C0BB42Au, 3);  /* 0C0BB428 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB42Au); { u32 t_ = r10; PR = 0x0C0BB42Eu; IF(0x0C0BB42Cu); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB42Eu); }  /* 0C0BB42A jsr @Rn */
L_0C0BB42E: BLKS(0x0C0BB42Eu);
	T = (r0 & r0) == 0;  /* 0C0BB42E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB406u, 4); goto L_0C0BB406; } goto L_0C0BB434; }  /* 0C0BB430 bt/s */
L_0C0BB434: BLKS(0x0C0BB434u);
	r1 = R32(r14); UPD(0x0C0BB436u, 2);  /* 0C0BB434 mov.l @Rm,Rn */
	r2 = 0x7u;  /* 0C0BB436 mov #imm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0BB438 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB440u, 5); goto L_0C0BB440; }  /* 0C0BB43A bf */
L_0C0BB43C: BLKS(0x0C0BB43Cu);
	{ IF(0x0C0BB43Eu); ; /* slot nop */ UPD(0x0C0BB580u, 3); goto L_0C0BB580; }  /* 0C0BB43C bra */
L_0C0BB440: BLKS(0x0C0BB440u);
	r8 = 0xC062780u; UPD(0x0C0BB442u, 1);  /* 0C0BB440 mov.l @(disp,pc),Rn */
L_0C0BB442: BLKS(0x0C0BB442u);
	r5 = 0xC28EDFCu; UPD(0x0C0BB444u, 1);  /* 0C0BB442 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB444 mov #imm,Rn */
	IF(0x0C0BB446u); { u32 t_ = r8; PR = 0x0C0BB44Au; W32(r14 + 0x1Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB44Au); }  /* 0C0BB446 jsr @Rn */
L_0C0BB44A: BLKS(0x0C0BB44Au);
	r4 = r0;  /* 0C0BB44A mov Rm,Rn */
	r0 = 0xC234BECu; UPD(0x0C0BB44Eu, 2);  /* 0C0BB44C mov.l @(disp,pc),Rn */
	r4 += 0x18u;  /* 0C0BB44E add #imm,Rn */
	r3 = R32(r0); UPD(0x0C0BB452u, 2);  /* 0C0BB450 mov.l @Rm,Rn */
	W32(r14 + 0x20u, r4); UPD(0x0C0BB454u, 1);  /* 0C0BB452 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C0BB454 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB406u, 4); goto L_0C0BB406; } goto L_0C0BB45A; }  /* 0C0BB456 bf/s */
L_0C0BB45A: BLKS(0x0C0BB45Au);
	r7 = 0x0u;  /* 0C0BB45A mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0BB45Eu, 3);  /* 0C0BB45C mov.l @(disp,Rm),Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C0BB45E cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB468u, 4); goto L_0C0BB468; } UPD(0x0C0BB464u, 1); goto L_0C0BB464; }  /* 0C0BB460 bf/s */
L_0C0BB464: BLKS(0x0C0BB464u);
	{ IF(0x0C0BB466u); ; /* slot nop */ UPD(0x0C0BB56Eu, 3); goto L_0C0BB56E; }  /* 0C0BB464 bra */
L_0C0BB468: BLKS(0x0C0BB468u);
	r8 = R32(r14 + 0x20u); UPD(0x0C0BB46Au, 1);  /* 0C0BB468 mov.l @(disp,Rm),Rn */
	r9 = 0x4u;  /* 0C0BB46A mov #imm,Rn */
	r11 = R32(r14); UPD(0x0C0BB46Eu, 2);  /* 0C0BB46C mov.l @Rm,Rn */
	IF(0x0C0BB46Eu); ARG0(0x489Du); { s32 s_ = (s32)r9; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BB46E shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C0BB472u, 2);  /* 0C0BB470 mov.l @Rm,Rn */
	r11 += r11;  /* 0C0BB472 add Rm,Rn */
	IF(0x0C0BB474u); r10 <<= 2;  /* 0C0BB474 shll2 Rn */
	W32(r14 + 0x2Cu, r11); UPD(0x0C0BB478u, 3);  /* 0C0BB476 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x30u, r10); UPD(0x0C0BB47Au, 1);  /* 0C0BB478 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x28u, r8); UPD(0x0C0BB47Cu, 1);  /* 0C0BB47A mov.l Rm,@(disp,Rn) */
L_0C0BB47C: BLKS(0x0C0BB47Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB47Eu, 1);  /* 0C0BB47C mov.w @Rm+,Rn */
	r3 = 0x3Fu;  /* 0C0BB47E mov #imm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C0BB482u, 2);  /* 0C0BB480 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0BB482 mov #imm,Rn */
	r12 += r4;  /* 0C0BB484 add Rm,Rn */
	r10 = (u32)(s32)(s16)r12;  /* 0C0BB486 exts.w Rm,Rn */
	r10 += 0x4u;  /* 0C0BB488 add #imm,Rn */
	r11 = r10;  /* 0C0BB48A mov Rm,Rn */
	IF(0x0C0BB48Cu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB48C shar Rn */
	IF(0x0C0BB48Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB48E shar Rn */
	IF(0x0C0BB490u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB490 shar Rn */
	r11 &= r3;  /* 0C0BB492 and Rm,Rn */
	r1 = r11;  /* 0C0BB494 mov Rm,Rn */
	IF(0x0C0BB496u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0BB496 shld Rm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0BB49Au, 12);  /* 0C0BB498 mov.l Rm,@(disp,Rn) */
	r12 = 0x2u;  /* 0C0BB49A mov #imm,Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0BB49C add #imm,Rn */
	UPD(0x0C0BB49Eu, 2);
L_0C0BB49E: BLKS(0x0C0BB49Eu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0BB4A0u, 1);  /* 0C0BB49E mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB4A0 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB4A4u, 2);  /* 0C0BB4A2 mov.w @Rm+,Rn */
	IF(0x0C0BB4A4u); MACL = r9 * r8;  /* 0C0BB4A4 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB4A8u, 3);  /* 0C0BB4A6 mov.l @(disp,pc),Rn */
	IF(0x0C0BB4A8u); r8 = MACL;  /* 0C0BB4A8 sts macl,Rn */
	r8 += r0;  /* 0C0BB4AA add Rm,Rn */
	r0 = r12;  /* 0C0BB4AC mov Rm,Rn */
	r5 = 0xC1F7F08u; UPD(0x0C0BB4B0u, 4);  /* 0C0BB4AE mov.l @(disp,pc),Rn */
	IF(0x0C0BB4B0u); r0 <<= 2;  /* 0C0BB4B0 shll2 Rn */
	IF(0x0C0BB4B2u); r3 = R32(r0 + r5); UPD(0x0C0BB4B4u, 2);  /* 0C0BB4B2 mov.l @(r0,Rm),Rn */
	r2 = 0xC297490u; UPD(0x0C0BB4B6u, 1);  /* 0C0BB4B4 mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C0BB4B8u, 1);  /* 0C0BB4B6 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BB4BAu, 1);  /* 0C0BB4B8 mov.b @Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0BB4BCu, 1);  /* 0C0BB4BA mov.l Rm,@(disp,Rn) */
	r6 = r7 & 0xFF;  /* 0C0BB4BC extu.b Rm,Rn */
	r4 = 0xC1EADCCu; UPD(0x0C0BB4C0u, 2);  /* 0C0BB4BE mov.l @(disp,pc),Rn */
	IF(0x0C0BB4C0u); r6 <<= 2;  /* 0C0BB4C0 shll2 Rn */
	r1 = R32(r14); UPD(0x0C0BB4C4u, 2);  /* 0C0BB4C2 mov.l @Rm,Rn */
	r6 += r4;  /* 0C0BB4C4 add Rm,Rn */
	r5 = R32(r14 + 0x2Cu); UPD(0x0C0BB4C8u, 2);  /* 0C0BB4C6 mov.l @(disp,Rm),Rn */
	r4 = R32(r6 + 0x4u); UPD(0x0C0BB4CAu, 1);  /* 0C0BB4C8 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0BB4CA add Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0BB4CEu, 2);  /* 0C0BB4CC mov.l @(disp,Rm),Rn */
	r5 += r12;  /* 0C0BB4CE add Rm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C0BB4D2u, 2);  /* 0C0BB4D0 mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BB4D2 mov #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BB4D6u, 2);  /* 0C0BB4D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB4D6u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB4D6 shld Rm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0BB4DAu, 2);  /* 0C0BB4D8 mov.l Rm,@(disp,Rn) */
	r0 = 0x54u;  /* 0C0BB4DA mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BB4DC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB4E0u, 3);  /* 0C0BB4DE mov.w Rm,@Rn */
	IF(0x0C0BB4E0u); r3 = R32(r0 + r14); UPD(0x0C0BB4E2u, 1);  /* 0C0BB4E0 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB4E2 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB4E6u, 2);  /* 0C0BB4E4 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x30u); UPD(0x0C0BB4E8u, 1);  /* 0C0BB4E6 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB4E8 add #imm,Rn */
	r2 = 0xC1F7F14u; UPD(0x0C0BB4ECu, 2);  /* 0C0BB4EA mov.l @(disp,pc),Rn */
	IF(0x0C0BB4ECu); r7 = R32(r0 + r2); UPD(0x0C0BB4EEu, 1);  /* 0C0BB4EC mov.l @(r0,Rm),Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BB4F0u, 1);  /* 0C0BB4EE mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C0BB4F2u, 1);  /* 0C0BB4F0 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BB4F2 add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BB4F6u, 2);  /* 0C0BB4F4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x4u); UPD(0x0C0BB4F8u, 1);  /* 0C0BB4F6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB4FAu, 1);  /* 0C0BB4F8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BB4FCu, 1);  /* 0C0BB4FA mov.l @Rm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C0BB4FEu, 1);  /* 0C0BB4FC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BB500u, 1);  /* 0C0BB4FE mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB500u); r2 = R32(r0 + r3); UPD(0x0C0BB502u, 1);  /* 0C0BB500 mov.l @(r0,Rm),Rn */
	r6 = R32(r14 + 0x24u); UPD(0x0C0BB504u, 1);  /* 0C0BB502 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0BB506u, 1);  /* 0C0BB504 mov.l Rm,@(disp,Rn) */
	r6 += r2;  /* 0C0BB506 add Rm,Rn */
	r7 = R32(r6); UPD(0x0C0BB50Au, 2);  /* 0C0BB508 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BB50Cu, 1);  /* 0C0BB50A mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BB50Eu, 1);  /* 0C0BB50C mov.l @(disp,Rm),Rn */
	r0 = 0xC2380C4u; UPD(0x0C0BB510u, 1);  /* 0C0BB50E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BB512u, 1);  /* 0C0BB510 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BB514u, 1);  /* 0C0BB512 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB514 add #imm,Rn */
	W16(r8, r4); UPD(0x0C0BB518u, 2);  /* 0C0BB516 mov.w Rm,@Rn */
	r0 = 0x54u;  /* 0C0BB518 mov #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0BB51Cu, 2);  /* 0C0BB51A mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u; UPD(0x0C0BB51Eu, 1);  /* 0C0BB51C add #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0BB520u, 1);  /* 0C0BB51E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BB522u, 1);  /* 0C0BB520 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0BB524u, 1);  /* 0C0BB522 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB524u); r5 = R32(r0 + r14); UPD(0x0C0BB526u, 1);  /* 0C0BB524 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB528u, 1);  /* 0C0BB526 mov.l @(disp,pc),Rn */
	IF(0x0C0BB528u); { u32 t_ = r0; PR = 0x0C0BB52Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB52Cu); }  /* 0C0BB528 jsr @Rn */
L_0C0BB52C: BLKS(0x0C0BB52Cu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB52Eu, 1);  /* 0C0BB52C mov.l Rm,@(disp,Rn) */
	r0 = 0x54u;  /* 0C0BB52E mov #imm,Rn */
	IF(0x0C0BB530u); r5 = R32(r0 + r14); UPD(0x0C0BB532u, 2);  /* 0C0BB530 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB534u, 1);  /* 0C0BB532 mov.l @(disp,pc),Rn */
	IF(0x0C0BB534u); { u32 t_ = r0; PR = 0x0C0BB538u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB538u); }  /* 0C0BB534 jsr @Rn */
L_0C0BB538: BLKS(0x0C0BB538u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB53Au, 1);  /* 0C0BB538 mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0BB53A mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB53C add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BB540u, 3);  /* 0C0BB53E mov.b Rm,@Rn */
	r0 = 0x1Au;  /* 0C0BB540 mov #imm,Rn */
	r7 = 0x207C0C0u; UPD(0x0C0BB544u, 2);  /* 0C0BB542 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB544 add #imm,Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C0BB548u, 2);  /* 0C0BB546 mov.l Rm,@(disp,Rn) */
	r6 = 0x808080u; UPD(0x0C0BB54Au, 1);  /* 0C0BB548 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB54A add #imm,Rn */
	IF(0x0C0BB54Cu); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB54Eu, 2);  /* 0C0BB54C mov.w @(r0,Rm),Rn */
	W32(r8, r6); UPD(0x0C0BB550u, 1);  /* 0C0BB54E mov.l Rm,@Rn */
	r0 = r12;  /* 0C0BB550 mov Rm,Rn */
	r8 += 0xCu;  /* 0C0BB552 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BB554 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BB556 exts.w Rm,Rn */
	W16(r8, r5); UPD(0x0C0BB55Au, 5);  /* 0C0BB558 mov.w Rm,@Rn */
	IF(0x0C0BB55Au); T = (s32)r12 >= 0;  /* 0C0BB55A cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x18u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB49Eu, 4); goto L_0C0BB49E; } UPD(0x0C0BB560u, 1); goto L_0C0BB560; }  /* 0C0BB55C bt/s */
L_0C0BB560: BLKS(0x0C0BB560u);
	r11 = R32(r14 + 0x14u); UPD(0x0C0BB562u, 1);  /* 0C0BB560 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C0BB562 add #imm,Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0BB564 exts.w Rm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C0BB568u, 3);  /* 0C0BB566 mov.l @(disp,Rm),Rn */
	T = (s32)r10 >= (s32)r9;  /* 0C0BB568 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x14u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB47Cu, 4); goto L_0C0BB47C; } UPD(0x0C0BB56Eu, 1); goto L_0C0BB56E; }  /* 0C0BB56A bf/s */
L_0C0BB56E: BLKS(0x0C0BB56Eu);
	r13 = 0xC0C2110u; UPD(0x0C0BB570u, 1);  /* 0C0BB56E mov.l @(disp,pc),Rn */
	IF(0x0C0BB570u); { u32 t_ = r13; PR = 0x0C0BB574u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB574u); }  /* 0C0BB570 jsr @Rn */
L_0C0BB574: BLKS(0x0C0BB574u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB406u, 3); goto L_0C0BB406; }  /* 0C0BB574 bra */
L_0C0BB580: BLKS(0x0C0BB580u);
	r8 = 0xC062780u; UPD(0x0C0BB582u, 1);  /* 0C0BB580 mov.l @(disp,pc),Rn */
	IF(0x0C0BB582u); { u32 t_ = r8; PR = 0x0C0BB586u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB586u); }  /* 0C0BB582 jsr @Rn */
L_0C0BB586: BLKS(0x0C0BB586u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0BB442u, 3); goto L_0C0BB442; }  /* 0C0BB586 bra */
}

/* FUN_0c0bb5f0 */
void blk_f_0C0BB5F0(sh3_t *c)
{
	LOCALS;
L_0C0BB5F0: BLKS(0x0C0BB5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F2u, 1);  /* 0C0BB5F0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB5F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F6u, 2);  /* 0C0BB5F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F8u, 1);  /* 0C0BB5F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5FAu, 1);  /* 0C0BB5F8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BB5FA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5FEu, 2);  /* 0C0BB5FC mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB5FE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB602u, 2);  /* 0C0BB600 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB604u, 1);  /* 0C0BB602 mov.l Rm,@-Rn */
	IF(0x0C0BB604u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB606u, 1);  /* 0C0BB604 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB608u, 1);  /* 0C0BB606 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0BB608 add #imm,Rn */
	r14 = r15;  /* 0C0BB60A mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB60Eu, 3);  /* 0C0BB60C mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BB610u, 1);  /* 0C0BB60E mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB610 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0BB614u, 2);  /* 0C0BB612 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB646u, 3); goto L_0C0BB646; } UPD(0x0C0BB618u, 1); goto L_0C0BB618; }  /* 0C0BB614 bf/s */
L_0C0BB618: BLKS(0x0C0BB618u);
	r2 = 0xFF580000u; UPD(0x0C0BB61Au, 1);  /* 0C0BB618 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0BB61Cu, 1);  /* 0C0BB61A mov.l @Rm,Rn */
	r2 += r0;  /* 0C0BB61C add Rm,Rn */
	IF(0x0C0BB61Eu); T = (s32)r2 >= 0;  /* 0C0BB61E cmp/pz Rn */
	if (T) { UPD(0x0C0BB624u, 5); goto L_0C0BB624; }  /* 0C0BB620 bt */
L_0C0BB622: BLKS(0x0C0BB622u);
	r2 = 0u - r2;  /* 0C0BB622 neg Rm,Rn */
	UPD(0x0C0BB624u, 1);
L_0C0BB624: BLKS(0x0C0BB624u);
	r4 = 0x980000u; UPD(0x0C0BB626u, 1);  /* 0C0BB624 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BB626 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB646u, 4); goto L_0C0BB646; } goto L_0C0BB62C; }  /* 0C0BB628 bt/s */
L_0C0BB62C: BLKS(0x0C0BB62Cu);
	r2 = 0xC3C4048u; UPD(0x0C0BB62Eu, 2);  /* 0C0BB62C mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0BB630u, 1);  /* 0C0BB62E mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BB632u, 1);  /* 0C0BB630 mov.l @(disp,Rm),Rn */
	r5 = 0xFF880000u; UPD(0x0C0BB634u, 1);  /* 0C0BB632 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BB634 sub Rm,Rn */
	r2 += r5;  /* 0C0BB636 add Rm,Rn */
	IF(0x0C0BB638u); T = (s32)r2 >= 0;  /* 0C0BB638 cmp/pz Rn */
	if (T) { UPD(0x0C0BB63Eu, 6); goto L_0C0BB63E; }  /* 0C0BB63A bt */
L_0C0BB63C: BLKS(0x0C0BB63Cu);
	r2 = 0u - r2;  /* 0C0BB63C neg Rm,Rn */
	UPD(0x0C0BB63Eu, 1);
L_0C0BB63E: BLKS(0x0C0BB63Eu);
	r7 = 0x700000u; UPD(0x0C0BB640u, 1);  /* 0C0BB63E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BB640 cmp/gt Rm,Rn */
	IF(0x0C0BB642u); r0 = T;  /* 0C0BB642 movt Rn */
	r0 ^= 0x1u;  /* 0C0BB644 xor #imm,r0 */
	UPD(0x0C0BB646u, 3);
L_0C0BB646: BLKS(0x0C0BB646u);
	r8 = (u32)(s32)(s8)r0;  /* 0C0BB646 exts.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BB648 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB670u, 5); goto L_0C0BB670; } UPD(0x0C0BB64Eu, 1); goto L_0C0BB64E; }  /* 0C0BB64A bf/s */
L_0C0BB64E: BLKS(0x0C0BB64Eu);
	r14 += 0x1Cu;  /* 0C0BB64E add #imm,Rn */
	r15 = r14;  /* 0C0BB650 mov Rm,Rn */
	IF(0x0C0BB652u); PR = R32(r15); r15 += 4; UPD(0x0C0BB654u, 3);  /* 0C0BB652 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB656u, 1);  /* 0C0BB654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB658u, 1);  /* 0C0BB656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB65Au, 1);  /* 0C0BB658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB65Cu, 1);  /* 0C0BB65A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB65Eu, 1);  /* 0C0BB65C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB660u, 1);  /* 0C0BB65E mov.l @Rm+,Rn */
	IF(0x0C0BB660u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB660 rts */
L_0C0BB670: BLKS(0x0C0BB670u);
	r9 = 0xC0717A0u; UPD(0x0C0BB672u, 1);  /* 0C0BB670 mov.l @(disp,pc),Rn */
	IF(0x0C0BB672u); { u32 t_ = r9; PR = 0x0C0BB676u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB676u); }  /* 0C0BB672 jsr @Rn */
L_0C0BB676: BLKS(0x0C0BB676u);
	T = (r0 & r0) == 0;  /* 0C0BB676 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB64Eu, 4); goto L_0C0BB64E; } goto L_0C0BB67C; }  /* 0C0BB678 bt/s */
L_0C0BB67C: BLKS(0x0C0BB67Cu);
	r12 = 0x1u;  /* 0C0BB67C mov #imm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C0BB67E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB684u, 6); goto L_0C0BB684; }  /* 0C0BB680 bf */
L_0C0BB682: BLKS(0x0C0BB682u);
	r11 = 0x0u;  /* 0C0BB682 mov #imm,Rn */
	UPD(0x0C0BB684u, 1);
L_0C0BB684: BLKS(0x0C0BB684u);
	r3 = 0xC234BECu; UPD(0x0C0BB686u, 1);  /* 0C0BB684 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0BB686 mov #imm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C0BB68Au, 2);  /* 0C0BB688 mov.l @(disp,pc),Rn */
	r13 = R32(r3); UPD(0x0C0BB68Cu, 1);  /* 0C0BB68A mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB68C tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB64Eu, 4); goto L_0C0BB64E; } UPD(0x0C0BB692u, 1); goto L_0C0BB692; }  /* 0C0BB68E bf/s */
L_0C0BB692: BLKS(0x0C0BB692u);
	r10 += 0x4u;  /* 0C0BB692 add #imm,Rn */
	r12 = r10;  /* 0C0BB694 mov Rm,Rn */
	IF(0x0C0BB696u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB696 shar Rn */
	IF(0x0C0BB698u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB698 shar Rn */
	IF(0x0C0BB69Au); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB69A shar Rn */
	r4 = 0x3Fu;  /* 0C0BB69C mov #imm,Rn */
	r12 &= r4;  /* 0C0BB69E and Rm,Rn */
	r13 = 0x3u;  /* 0C0BB6A0 mov #imm,Rn */
	r0 = r12;  /* 0C0BB6A2 mov Rm,Rn */
	r6 = r11;  /* 0C0BB6A4 mov Rm,Rn */
	r5 = r11;  /* 0C0BB6A6 mov Rm,Rn */
	IF(0x0C0BB6A8u); ARG0(0x40DDu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BB6A8 shld Rm,Rn */
	r6 += r6;  /* 0C0BB6AA add Rm,Rn */
	IF(0x0C0BB6ACu); r5 <<= 2;  /* 0C0BB6AC shll2 Rn */
	W32(r14 + 0x14u, r6); UPD(0x0C0BB6B0u, 15);  /* 0C0BB6AE mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BB6B0 add #imm,Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C0BB6B4u, 2);  /* 0C0BB6B2 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C0BB6B6u, 1);  /* 0C0BB6B4 mov.l Rm,@(disp,Rn) */
L_0C0BB6B6: BLKS(0x0C0BB6B6u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BB6B8u, 1);  /* 0C0BB6B6 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB6B8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB6BCu, 2);  /* 0C0BB6BA mov.w @Rm+,Rn */
	r5 = 0x3u;  /* 0C0BB6BC mov #imm,Rn */
	IF(0x0C0BB6BEu); MACL = r9 * r8;  /* 0C0BB6BE mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB6C2u, 4);  /* 0C0BB6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0BB6C2u); r8 = MACL;  /* 0C0BB6C2 sts macl,Rn */
	r8 += r0;  /* 0C0BB6C4 add Rm,Rn */
	r0 = r13;  /* 0C0BB6C6 mov Rm,Rn */
	r7 = 0xC1F7F34u; UPD(0x0C0BB6CAu, 4);  /* 0C0BB6C8 mov.l @(disp,pc),Rn */
	IF(0x0C0BB6CAu); r0 <<= 2;  /* 0C0BB6CA shll2 Rn */
	IF(0x0C0BB6CCu); r6 = R32(r0 + r7); UPD(0x0C0BB6CEu, 2);  /* 0C0BB6CC mov.l @(r0,Rm),Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0BB6D0u, 1);  /* 0C0BB6CE mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x14u); UPD(0x0C0BB6D2u, 1);  /* 0C0BB6D0 mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C0BB6D2 add Rm,Rn */
	r5 += r13;  /* 0C0BB6D4 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BB6D8u, 3);  /* 0C0BB6D6 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C0BB6DAu, 1);  /* 0C0BB6D8 mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C0BB6DA mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BB6DC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB6E0u, 3);  /* 0C0BB6DE mov.w Rm,@Rn */
	IF(0x0C0BB6E0u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BB6E0 shld Rm,Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0BB6E4u, 2);  /* 0C0BB6E2 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB6E4 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0BB6E8u, 2);  /* 0C0BB6E6 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0BB6EAu, 1);  /* 0C0BB6E8 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB6EA add #imm,Rn */
	r2 = 0xC1F7F44u; UPD(0x0C0BB6EEu, 2);  /* 0C0BB6EC mov.l @(disp,pc),Rn */
	IF(0x0C0BB6EEu); r3 = R32(r0 + r2); UPD(0x0C0BB6F0u, 1);  /* 0C0BB6EE mov.l @(r0,Rm),Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BB6F2u, 1);  /* 0C0BB6F0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C0BB6F4u, 1);  /* 0C0BB6F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB6F6u, 1);  /* 0C0BB6F4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x1Cu); UPD(0x0C0BB6F8u, 1);  /* 0C0BB6F6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB6FAu, 1);  /* 0C0BB6F8 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x18u); UPD(0x0C0BB6FCu, 1);  /* 0C0BB6FA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BB6FEu, 1);  /* 0C0BB6FC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB6FEu); r4 = R32(r0 + r5); UPD(0x0C0BB700u, 1);  /* 0C0BB6FE mov.l @(r0,Rm),Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C0BB702u, 1);  /* 0C0BB700 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r4); UPD(0x0C0BB704u, 1);  /* 0C0BB702 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0BB704 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB708u, 2);  /* 0C0BB706 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r2); UPD(0x0C0BB70Au, 1);  /* 0C0BB708 mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x4u); UPD(0x0C0BB70Cu, 1);  /* 0C0BB70A mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB70Eu, 1);  /* 0C0BB70C mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r7); UPD(0x0C0BB710u, 1);  /* 0C0BB70E mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB712u, 1);  /* 0C0BB710 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB712 add #imm,Rn */
	W16(r8, r5); UPD(0x0C0BB716u, 2);  /* 0C0BB714 mov.w Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0BB718u, 1);  /* 0C0BB716 mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB718 add #imm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0BB71Cu, 2);  /* 0C0BB71A mov.l Rm,@(disp,Rn) */
	r0 = 0xC069B20u; UPD(0x0C0BB71Eu, 1);  /* 0C0BB71C mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0BB720u, 1);  /* 0C0BB71E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BB722u, 1);  /* 0C0BB720 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BB722 mov Rm,Rn */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0BB726u, 2);  /* 0C0BB724 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB726u); { u32 t_ = r0; PR = 0x0C0BB72Au; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB72Au); }  /* 0C0BB726 jsr @Rn */
L_0C0BB72A: BLKS(0x0C0BB72Au);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB72Cu, 1);  /* 0C0BB72A mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0BB72C mov Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB730u, 2);  /* 0C0BB72E mov.l @(disp,pc),Rn */
	IF(0x0C0BB730u); { u32 t_ = r0; PR = 0x0C0BB734u; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB734u); }  /* 0C0BB730 jsr @Rn */
L_0C0BB734: BLKS(0x0C0BB734u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB736u, 1);  /* 0C0BB734 mov.l Rm,@(disp,Rn) */
	r2 = r13;  /* 0C0BB736 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0BB738 mov #imm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C0BB73Cu, 3);  /* 0C0BB73A mov.l Rm,@(disp,Rn) */
	r2 += 0xFFFFFFFFu;  /* 0C0BB73C add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0BB740u, 2);  /* 0C0BB73E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB740 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB744u, 2);  /* 0C0BB742 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0BB744 mov #imm,Rn */
	IF(0x0C0BB746u); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB748u, 2);  /* 0C0BB746 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB748 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C0BB74A exts.w Rm,Rn */
	W16(r8, r7); UPD(0x0C0BB74Eu, 3);  /* 0C0BB74C mov.w Rm,@Rn */
	IF(0x0C0BB74Eu); T = (s32)r13 >= 0;  /* 0C0BB74E cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB6B6u, 4); goto L_0C0BB6B6; } UPD(0x0C0BB754u, 1); goto L_0C0BB754; }  /* 0C0BB750 bt/s */
L_0C0BB754: BLKS(0x0C0BB754u);
	r10 = 0xC0C2110u; UPD(0x0C0BB756u, 1);  /* 0C0BB754 mov.l @(disp,pc),Rn */
	IF(0x0C0BB756u); { u32 t_ = r10; PR = 0x0C0BB75Au; r4 = 0x6Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB75Au); }  /* 0C0BB756 jsr @Rn */
L_0C0BB75A: BLKS(0x0C0BB75Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB64Eu, 3); goto L_0C0BB64E; }  /* 0C0BB75A bra */
}

/* FUN_0c0bb7b0 */
void blk_f_0C0BB7B0(sh3_t *c)
{
	LOCALS;
L_0C0BB7B0: BLKS(0x0C0BB7B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B2u, 1);  /* 0C0BB7B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B4u, 1);  /* 0C0BB7B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B6u, 1);  /* 0C0BB7B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BB7B6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7BAu, 2);  /* 0C0BB7B8 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BB7BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7BEu, 2);  /* 0C0BB7BC mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB7BE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7C2u, 2);  /* 0C0BB7C0 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BB7C2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7C6u, 2);  /* 0C0BB7C4 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BB7C8u, 1);  /* 0C0BB7C6 mov.l @(disp,pc),Rn */
	IF(0x0C0BB7C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB7CAu, 1);  /* 0C0BB7C8 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BB7CCu, 1);  /* 0C0BB7CA mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BB7CC mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BB7CE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB7FEu, 5); goto L_0C0BB7FE; } goto L_0C0BB7D4; }  /* 0C0BB7D0 bf/s */
L_0C0BB7D4: BLKS(0x0C0BB7D4u);
	r2 = 0xFF580000u; UPD(0x0C0BB7D6u, 2);  /* 0C0BB7D4 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BB7D6 add Rm,Rn */
	IF(0x0C0BB7D8u); T = (s32)r2 >= 0;  /* 0C0BB7D8 cmp/pz Rn */
	if (T) { UPD(0x0C0BB7DEu, 5); goto L_0C0BB7DE; }  /* 0C0BB7DA bt */
L_0C0BB7DC: BLKS(0x0C0BB7DCu);
	r2 = 0u - r2;  /* 0C0BB7DC neg Rm,Rn */
	UPD(0x0C0BB7DEu, 1);
L_0C0BB7DE: BLKS(0x0C0BB7DEu);
	r0 = 0x980000u; UPD(0x0C0BB7E0u, 1);  /* 0C0BB7DE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BB7E0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB7FEu, 4); goto L_0C0BB7FE; } goto L_0C0BB7E6; }  /* 0C0BB7E2 bt/s */
L_0C0BB7E6: BLKS(0x0C0BB7E6u);
	r5 = 0xC3C4048u; UPD(0x0C0BB7E8u, 2);  /* 0C0BB7E6 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BB7E8 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BB7ECu, 2);  /* 0C0BB7EA mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BB7EEu, 1);  /* 0C0BB7EC mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BB7EE sub Rm,Rn */
	r2 += r3;  /* 0C0BB7F0 add Rm,Rn */
	IF(0x0C0BB7F2u); T = (s32)r2 >= 0;  /* 0C0BB7F2 cmp/pz Rn */
	if (!T) { UPD(0x0C0BB8D0u, 6); goto L_0C0BB8D0; }  /* 0C0BB7F4 bf */
L_0C0BB7F6: BLKS(0x0C0BB7F6u);
	r6 = 0x700000u; UPD(0x0C0BB7F8u, 1);  /* 0C0BB7F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BB7F8 cmp/gt Rm,Rn */
	IF(0x0C0BB7FAu); r0 = T;  /* 0C0BB7FA movt Rn */
	r0 ^= 0x1u;  /* 0C0BB7FC xor #imm,r0 */
	UPD(0x0C0BB7FEu, 3);
L_0C0BB7FE: BLKS(0x0C0BB7FEu);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BB7FE exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BB800 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB820u, 5); goto L_0C0BB820; } UPD(0x0C0BB806u, 1); goto L_0C0BB806; }  /* 0C0BB802 bf/s */
L_0C0BB806: BLKS(0x0C0BB806u);
	r15 = r14;  /* 0C0BB806 mov Rm,Rn */
	IF(0x0C0BB808u); PR = R32(r15); r15 += 4; UPD(0x0C0BB80Au, 2);  /* 0C0BB808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB80Cu, 1);  /* 0C0BB80A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB80Eu, 1);  /* 0C0BB80C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB810u, 1);  /* 0C0BB80E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB812u, 1);  /* 0C0BB810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB814u, 1);  /* 0C0BB812 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB816u, 1);  /* 0C0BB814 mov.l @Rm+,Rn */
	IF(0x0C0BB816u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB816 rts */
L_0C0BB820: BLKS(0x0C0BB820u);
	r8 = 0xC0717A0u; UPD(0x0C0BB822u, 1);  /* 0C0BB820 mov.l @(disp,pc),Rn */
	IF(0x0C0BB822u); { u32 t_ = r8; PR = 0x0C0BB826u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB826u); }  /* 0C0BB822 jsr @Rn */
L_0C0BB826: BLKS(0x0C0BB826u);
	T = (r0 & r0) == 0;  /* 0C0BB826 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB806u, 4); goto L_0C0BB806; } goto L_0C0BB82C; }  /* 0C0BB828 bt/s */
L_0C0BB82C: BLKS(0x0C0BB82Cu);
	r13 = 0xC28EDFCu; UPD(0x0C0BB82Eu, 2);  /* 0C0BB82C mov.l @(disp,pc),Rn */
	r0 = 0xC234BECu; UPD(0x0C0BB830u, 1);  /* 0C0BB82E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0BB832u, 1);  /* 0C0BB830 mov.w @Rm,Rn */
	r13 = R32(r0); UPD(0x0C0BB834u, 1);  /* 0C0BB832 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB834 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB806u, 4); goto L_0C0BB806; } goto L_0C0BB83A; }  /* 0C0BB836 bf/s */
L_0C0BB83A: BLKS(0x0C0BB83Au);
	r8 = 0x54u;  /* 0C0BB83A mov #imm,Rn */
	IF(0x0C0BB83Cu); MACL = r2 * r8;  /* 0C0BB83C mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BB840u, 5);  /* 0C0BB83E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0BB840 mov Rm,Rn */
	IF(0x0C0BB842u); r8 = MACL;  /* 0C0BB842 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BB846u, 3);  /* 0C0BB844 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BB846 add Rm,Rn */
	r2 = 0x6u;  /* 0C0BB848 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB84Cu, 3);  /* 0C0BB84A mov.l Rm,@Rn */
	r0 += 0x8u;  /* 0C0BB84C add #imm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0BB850u, 2);  /* 0C0BB84E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB850u); r0 >>= 2;  /* 0C0BB850 shlr2 Rn */
	r8 += 0x44u;  /* 0C0BB852 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BB856u, 3);  /* 0C0BB854 mov.w Rm,@Rn */
	r6 = 0x20u;  /* 0C0BB856 mov #imm,Rn */
	IF(0x0C0BB858u); r0 >>= 2;  /* 0C0BB858 shlr2 Rn */
	r6 &= r11;  /* 0C0BB85A and Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0BB85C and #imm,r0 */
	r8 += 0xFFFFFFBCu;  /* 0C0BB85E add #imm,Rn */
	r6 |= r0;  /* 0C0BB860 or Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0BB864u, 7);  /* 0C0BB862 mov.l Rm,@(disp,Rn) */
	r7 = 0x4u;  /* 0C0BB864 mov #imm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0BB868u, 2);  /* 0C0BB866 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB868u); ARG0(0x467Du); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BB868 shld Rm,Rn */
	r11 = 0xC1F7E08u; UPD(0x0C0BB86Cu, 2);  /* 0C0BB86A mov.l @(disp,pc),Rn */
	r0 = R32(r11 + 0x34u); UPD(0x0C0BB86Eu, 1);  /* 0C0BB86C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB870u, 1);  /* 0C0BB86E mov.l Rm,@(disp,Rn) */
	r0 = R32(r11 + 0x30u); UPD(0x0C0BB872u, 1);  /* 0C0BB870 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BB874u, 1);  /* 0C0BB872 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB874u); r5 = R32(r0 + r6); UPD(0x0C0BB876u, 1);  /* 0C0BB874 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0BB878u, 1);  /* 0C0BB876 mov.l Rm,@(disp,Rn) */
	r1 = R32(r5); UPD(0x0C0BB87Au, 1);  /* 0C0BB878 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r1); UPD(0x0C0BB87Cu, 1);  /* 0C0BB87A mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0BB87Eu, 1);  /* 0C0BB87C mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BB880u, 1);  /* 0C0BB87E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BB882u, 1);  /* 0C0BB880 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB884u, 1);  /* 0C0BB882 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB884 add #imm,Rn */
	W16(r8, r2); UPD(0x0C0BB888u, 2);  /* 0C0BB886 mov.w Rm,@Rn */
	r4 = 0x7u;  /* 0C0BB888 mov #imm,Rn */
	r11 = 0xC062780u; UPD(0x0C0BB88Cu, 2);  /* 0C0BB88A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB88C add #imm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0BB890u, 2);  /* 0C0BB88E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB890u); { u32 t_ = r11; PR = 0x0C0BB894u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB894u); }  /* 0C0BB890 jsr @Rn */
L_0C0BB894: BLKS(0x0C0BB894u);
	r0 += r9;  /* 0C0BB894 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BB898u, 2);  /* 0C0BB896 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0BB898 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0BB89Cu, 2);  /* 0C0BB89A mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0BB89C exts.w Rm,Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BB8A0u, 2);  /* 0C0BB89E mov.l @(disp,Rm),Rn */
	r11 = 0x217FF00u; UPD(0x0C0BB8A2u, 1);  /* 0C0BB8A0 mov.l @(disp,pc),Rn */
	IF(0x0C0BB8A2u); { u32 t_ = r9; PR = 0x0C0BB8A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB8A6u); }  /* 0C0BB8A2 jsr @Rn */
L_0C0BB8A6: BLKS(0x0C0BB8A6u);
	r4 = r10;  /* 0C0BB8A6 mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BB8AAu, 2);  /* 0C0BB8A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB8AAu); { u32 t_ = r12; PR = 0x0C0BB8AEu; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB8AEu); }  /* 0C0BB8AA jsr @Rn */
L_0C0BB8AE: BLKS(0x0C0BB8AEu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB8B0u, 1);  /* 0C0BB8AE mov.l Rm,@(disp,Rn) */
	r4 = 0x67u;  /* 0C0BB8B0 mov #imm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C0BB8B4u, 2);  /* 0C0BB8B2 mov.l Rm,@(disp,Rn) */
	r10 = 0x808080u; UPD(0x0C0BB8B6u, 1);  /* 0C0BB8B4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB8B6 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0BB8BAu, 2);  /* 0C0BB8B8 mov.l Rm,@Rn */
	r9 = 0xC0C2110u; UPD(0x0C0BB8BCu, 1);  /* 0C0BB8BA mov.l @(disp,pc),Rn */
	r8 += 0x11u;  /* 0C0BB8BC add #imm,Rn */
	IF(0x0C0BB8BEu); { u32 t_ = r9; PR = 0x0C0BB8C2u; W8(r8, r13); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB8C2u); }  /* 0C0BB8BE jsr @Rn */
L_0C0BB8C2: BLKS(0x0C0BB8C2u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB806u, 3); goto L_0C0BB806; }  /* 0C0BB8C2 bra */
L_0C0BB8D0: BLKS(0x0C0BB8D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BB7F6u, 3); goto L_0C0BB7F6; }  /* 0C0BB8D0 bra */
}

/* FUN_0c0bb920 */
void blk_f_0C0BB920(sh3_t *c)
{
	LOCALS;
L_0C0BB920: BLKS(0x0C0BB920u);
	r2 = 0x54u;  /* 0C0BB920 mov #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0BB922 exts.w Rm,Rn */
	IF(0x0C0BB924u); MACL = r0 * r2;  /* 0C0BB924 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BB928u, 5);  /* 0C0BB926 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0BB928 mov #imm,Rn */
	IF(0x0C0BB92Au); r3 = MACL;  /* 0C0BB92A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB92Eu, 3);  /* 0C0BB92C mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0BB92E add Rm,Rn */
	r3 += 0x4Cu;  /* 0C0BB930 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB934u, 3);  /* 0C0BB932 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0BB934 mov Rm,Rn */
	IF(0x0C0BB936u); MACL = r0 * r2;  /* 0C0BB936 mul.l Rm,Rn */
	IF(0x0C0BB938u); r7 = MACL;  /* 0C0BB938 sts macl,Rn */
	r7 += r5;  /* 0C0BB93A add Rm,Rn */
	r2 = R32(r7); UPD(0x0C0BB93Eu, 6);  /* 0C0BB93C mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BB93E tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; } goto L_0C0BB944; }  /* 0C0BB940 bt/s */
L_0C0BB944: BLKS(0x0C0BB944u);
	r1 = R32(r7 + 0x4u); UPD(0x0C0BB946u, 2);  /* 0C0BB944 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C0BB948u, 1);  /* 0C0BB946 mov.l @(disp,Rm),Rn */
	T = r1 == r4;  /* 0C0BB948 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB960u, 4); goto L_0C0BB960; } UPD(0x0C0BB94Eu, 1); goto L_0C0BB94E; }  /* 0C0BB94A bt/s */
L_0C0BB94E: BLKS(0x0C0BB94Eu);
	r0 = r1;  /* 0C0BB94E mov Rm,Rn */
	r15 = r14;  /* 0C0BB950 mov Rm,Rn */
	IF(0x0C0BB952u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0BB952 rts */
L_0C0BB960: BLKS(0x0C0BB960u);
	r7 += 0x4Eu;  /* 0C0BB960 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BB964u, 2);  /* 0C0BB962 mov.w @Rm,Rn */
	r3 += 0x4Eu;  /* 0C0BB964 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB968u, 2);  /* 0C0BB966 mov.w @Rm,Rn */
	T = r7 == r6;  /* 0C0BB968 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; } goto L_0C0BB96E; }  /* 0C0BB96A bf/s */
L_0C0BB96E: BLKS(0x0C0BB96Eu);
	{ r1 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; }  /* 0C0BB96E bra */
}

void blk_f_0C0BB980(sh3_t *c)
{
	LOCALS;
L_0C0BB980: BLKS(0x0C0BB980u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB980 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB982 mov #imm,Rn */
	IF(0x0C0BB984u); MACL = r2 * r0;  /* 0C0BB984 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB988u, 5);  /* 0C0BB986 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0BB988 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB98Cu, 2);  /* 0C0BB98A mov.l Rm,@-Rn */
	IF(0x0C0BB98Cu); r0 = MACL;  /* 0C0BB98C sts macl,Rn */
	r0 += r6;  /* 0C0BB98E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BB992u, 3);  /* 0C0BB990 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BB992 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BB996u, 2);  /* 0C0BB994 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BB996 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BB99Au, 2);  /* 0C0BB998 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BB99A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BB99Eu, 2);  /* 0C0BB99C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BB9A0u, 1);  /* 0C0BB99E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BB9A2u, 1);  /* 0C0BB9A0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BB9A4u, 1);  /* 0C0BB9A2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BB9A6u, 1);  /* 0C0BB9A4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BB9A8u, 1);  /* 0C0BB9A6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BB9AAu, 1);  /* 0C0BB9A8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0BB9ACu, 1);  /* 0C0BB9AA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BB9AEu, 1);  /* 0C0BB9AC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BB9B0u, 1);  /* 0C0BB9AE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BB9B2u, 1);  /* 0C0BB9B0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BB9B4u, 1);  /* 0C0BB9B2 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB9B6u, 1);  /* 0C0BB9B4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BB9B8u, 1);  /* 0C0BB9B6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB9BAu, 1);  /* 0C0BB9B8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BB9BA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BB9BEu, 2);  /* 0C0BB9BC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BB9BE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BB9C2u, 2);  /* 0C0BB9C0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BB9C4u, 1);  /* 0C0BB9C2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BB9C4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BB9C8u, 2);  /* 0C0BB9C6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BB9CAu, 1);  /* 0C0BB9C8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BB9CA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BB9CEu, 2);  /* 0C0BB9CC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BB9CE mov Rm,Rn */
	IF(0x0C0BB9D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BB9D0 rts */
}

/* FUN_0c0bb9f0 */
void blk_f_0C0BB9F0(sh3_t *c)
{
	LOCALS;
L_0C0BB9F0: BLKS(0x0C0BB9F0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB9F0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB9F2 mov #imm,Rn */
	IF(0x0C0BB9F4u); MACL = r2 * r0;  /* 0C0BB9F4 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB9F8u, 5);  /* 0C0BB9F6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0BB9F8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB9FCu, 2);  /* 0C0BB9FA mov.l Rm,@-Rn */
	IF(0x0C0BB9FCu); r0 = MACL;  /* 0C0BB9FC sts macl,Rn */
	r0 += r6;  /* 0C0BB9FE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BBA02u, 3);  /* 0C0BBA00 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BBA02 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BBA06u, 2);  /* 0C0BBA04 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BBA06 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BBA0Au, 2);  /* 0C0BBA08 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BBA0A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BBA0Eu, 2);  /* 0C0BBA0C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BBA10u, 1);  /* 0C0BBA0E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BBA12u, 1);  /* 0C0BBA10 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BBA14u, 1);  /* 0C0BBA12 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BBA16u, 1);  /* 0C0BBA14 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BBA18u, 1);  /* 0C0BBA16 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BBA1Au, 1);  /* 0C0BBA18 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0BBA1Cu, 1);  /* 0C0BBA1A mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BBA1Eu, 1);  /* 0C0BBA1C mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BBA20u, 1);  /* 0C0BBA1E mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BBA22u, 1);  /* 0C0BBA20 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BBA24u, 1);  /* 0C0BBA22 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BBA26u, 1);  /* 0C0BBA24 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BBA28u, 1);  /* 0C0BBA26 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BBA2Au, 1);  /* 0C0BBA28 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BBA2A add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BBA2Eu, 2);  /* 0C0BBA2C mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BBA2E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BBA32u, 2);  /* 0C0BBA30 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BBA34u, 1);  /* 0C0BBA32 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BBA34 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BBA38u, 2);  /* 0C0BBA36 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BBA3Au, 1);  /* 0C0BBA38 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BBA3A add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BBA3Eu, 2);  /* 0C0BBA3C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BBA3E mov Rm,Rn */
	IF(0x0C0BBA40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBA40 rts */
}

void blk_f_0C0BBA60(sh3_t *c)
{
	LOCALS;
L_0C0BBA60: BLKS(0x0C0BBA60u);
	r3 = 0x54u;  /* 0C0BBA60 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BBA62 exts.w Rm,Rn */
	IF(0x0C0BBA64u); MACL = r4 * r3;  /* 0C0BBA64 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BBA68u, 5);  /* 0C0BBA66 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBA6Au, 1);  /* 0C0BBA68 mov.l Rm,@-Rn */
	IF(0x0C0BBA6Au); r3 = MACL;  /* 0C0BBA6A sts macl,Rn */
	r3 += r0;  /* 0C0BBA6C add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0BBA70u, 3);  /* 0C0BBA6E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BBA70 mov Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0BBA74u, 2);  /* 0C0BBA72 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0BBA76u, 1);  /* 0C0BBA74 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x34u); UPD(0x0C0BBA78u, 1);  /* 0C0BBA76 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0BBA78 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BBA7Cu, 2);  /* 0C0BBA7A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0BBA7C add Rm,Rn */
	r7 += r0;  /* 0C0BBA7E add Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0BBA82u, 3);  /* 0C0BBA80 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBA82u); T = (s32)r7 >= 0;  /* 0C0BBA82 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BBA8Cu, 4); goto L_0C0BBA8C; } UPD(0x0C0BBA88u, 1); goto L_0C0BBA88; }  /* 0C0BBA84 bt/s */
L_0C0BBA88: BLKS(0x0C0BBA88u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BBBA0u, 3); goto L_0C0BBBA0; }  /* 0C0BBA88 bra */
L_0C0BBA8C: BLKS(0x0C0BBA8Cu);
	r2 = 0xB80000u; UPD(0x0C0BBA8Eu, 1);  /* 0C0BBA8C mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0BBA8E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BBAA8u, 4); goto L_0C0BBAA8; }  /* 0C0BBA90 bt */
L_0C0BBA92: BLKS(0x0C0BBA92u);
	r2 = r6;  /* 0C0BBA92 mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0BBA96u, 2);  /* 0C0BBA94 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0BBA98u, 1);  /* 0C0BBA96 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BBA9Au, 1);  /* 0C0BBA98 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BBA9A sub Rm,Rn */
	r2 += r6;  /* 0C0BBA9C add Rm,Rn */
	IF(0x0C0BBA9Eu); T = (s32)r2 >= 0;  /* 0C0BBA9E cmp/pz Rn */
	if (!T) { UPD(0x0C0BBB90u, 6); goto L_0C0BBB90; }  /* 0C0BBAA0 bf */
L_0C0BBAA2: BLKS(0x0C0BBAA2u);
	r0 = 0x900000u; UPD(0x0C0BBAA4u, 1);  /* 0C0BBAA2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BBAA4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BBAC0u, 4); goto L_0C0BBAC0; }  /* 0C0BBAA6 bf */
L_0C0BBAA8: BLKS(0x0C0BBAA8u);
	r4 = 0x0u;  /* 0C0BBAA8 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0BBAACu, 2);  /* 0C0BBAAA mov.l Rm,@Rn */
L_0C0BBAAC: BLKS(0x0C0BBAACu);
	r15 = r14;  /* 0C0BBAAC mov Rm,Rn */
	IF(0x0C0BBAAEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBAAE rts */
L_0C0BBAC0: BLKS(0x0C0BBAC0u);
	r2 = R32(r3 + 0x10u); UPD(0x0C0BBAC2u, 1);  /* 0C0BBAC0 mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C0BBAC2 mov #imm,Rn */
	T = r2 > r3;  /* 0C0BBAC4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BBAACu, 5); goto L_0C0BBAAC; }  /* 0C0BBAC6 bt */
L_0C0BBAC8: BLKS(0x0C0BBAC8u);
	r0 = 0xC0BBAECu;  /* 0C0BBAC8 mova @(disp,pc),r0 */
	IF(0x0C0BBACAu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0BBACCu, 2);  /* 0C0BBACA mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C0BBACC extu.b Rm,Rn */
	IF(0x0C0BBACEu); { u32 tv_ = (r6 + 0x0C0BBAD2u); u32 t_ = PHYS(tv_); IF(0x0C0BBAD0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0BBB00u: goto L_0C0BBB00; case 0x0C0BBB30u: goto L_0C0BBB30; case 0x0C0BBB50u: goto L_0C0BBB50; default: JUMPD(tv_); } }  /* 0C0BBACE braf Rn */
L_0C0BBB00: BLKS(0x0C0BBB00u);
	r7 = 0x54u;  /* 0C0BBB00 mov #imm,Rn */
	IF(0x0C0BBB02u); MACL = r4 * r7;  /* 0C0BBB02 mul.l Rm,Rn */
	r2 = 0xC297B40u; UPD(0x0C0BBB06u, 4);  /* 0C0BBB04 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB06u); r3 = MACL;  /* 0C0BBB06 sts macl,Rn */
	r3 += r2;  /* 0C0BBB08 add Rm,Rn */
	r2 = r3;  /* 0C0BBB0A mov Rm,Rn */
	r2 += 0x51u;  /* 0C0BBB0C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BBB10u, 5);  /* 0C0BBB0E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BBB10 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0BBB12 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0BBB16u, 3);  /* 0C0BBB14 mov.b Rm,@Rn */
	T = r0 == 0x4u;  /* 0C0BBB16 cmp/eq #imm,r0 */
	UPD(0x0C0BBB18u, 1);
L_0C0BBB18: BLKS(0x0C0BBB18u);
	if (!T) { UPD(0x0C0BBAACu, 3); goto L_0C0BBAAC; }  /* 0C0BBB18 bf */
L_0C0BBB1A: BLKS(0x0C0BBB1Au);
	r7 = 0x0u;  /* 0C0BBB1A mov #imm,Rn */
	W8(r2, r7); UPD(0x0C0BBB1Eu, 2);  /* 0C0BBB1C mov.b Rm,@Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0BBB20u, 1);  /* 0C0BBB1E mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0BBB20 add #imm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0BBB24u, 2);  /* 0C0BBB22 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0B9DF0u; UPD(0x0C0BBB26u, 1);  /* 0C0BBB24 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0BBB26 mov Rm,Rn */
	IF(0x0C0BBB28u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9DF0u: TAIL(blk_f_0C0B9DF0); default: JUMPD(tv_); } }  /* 0C0BBB28 jmp @Rn */
L_0C0BBB30: BLKS(0x0C0BBB30u);
	r3 = 0x54u;  /* 0C0BBB30 mov #imm,Rn */
	IF(0x0C0BBB32u); MACL = r4 * r3;  /* 0C0BBB32 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BBB36u, 4);  /* 0C0BBB34 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB36u); r3 = MACL;  /* 0C0BBB36 sts macl,Rn */
	r3 += r0;  /* 0C0BBB38 add Rm,Rn */
	r2 = r3;  /* 0C0BBB3A mov Rm,Rn */
	r2 += 0x51u;  /* 0C0BBB3C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BBB40u, 5);  /* 0C0BBB3E mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0BBB40 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0BBB42 extu.b Rm,Rn */
	W8(r2, r5); UPD(0x0C0BBB46u, 3);  /* 0C0BBB44 mov.b Rm,@Rn */
	{ T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0BBB18u, 3); goto L_0C0BBB18; }  /* 0C0BBB46 bra */
L_0C0BBB50: BLKS(0x0C0BBB50u);
	r6 = 0x54u;  /* 0C0BBB50 mov #imm,Rn */
	IF(0x0C0BBB52u); MACL = r4 * r6;  /* 0C0BBB52 mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BBB56u, 4);  /* 0C0BBB54 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB56u); r6 = MACL;  /* 0C0BBB56 sts macl,Rn */
	r6 += r7;  /* 0C0BBB58 add Rm,Rn */
	r4 = r6;  /* 0C0BBB5A mov Rm,Rn */
	r4 += 0x40u;  /* 0C0BBB5C add #imm,Rn */
	r0 = R32(r4); UPD(0x0C0BBB60u, 5);  /* 0C0BBB5E mov.l @Rm,Rn */
	r2 = r0;  /* 0C0BBB60 mov Rm,Rn */
	IF(0x0C0BBB62u); r2 >>= 8;  /* 0C0BBB62 shlr8 Rn */
	r5 = r2 & 0xFF;  /* 0C0BBB64 extu.b Rm,Rn */
	IF(0x0C0BBB66u); r5 <<= 16;  /* 0C0BBB66 shll16 Rn */
	IF(0x0C0BBB68u); T = r5 & 1; r5 >>= 1;  /* 0C0BBB68 shlr Rn */
	r3 = 0xFFFFFF00u; UPD(0x0C0BBB6Cu, 6);  /* 0C0BBB6A mov.w @(disp,pc),Rn */
	IF(0x0C0BBB6Cu); r5 >>= 8;  /* 0C0BBB6C shlr8 Rn */
	r5 &= r3;  /* 0C0BBB6E and Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C0BBB70 extu.b Rm,Rn */
	IF(0x0C0BBB72u); r3 <<= 8;  /* 0C0BBB72 shll8 Rn */
	IF(0x0C0BBB74u); T = r3 & 1; r3 >>= 1;  /* 0C0BBB74 shlr Rn */
	IF(0x0C0BBB76u); r3 >>= 8;  /* 0C0BBB76 shlr8 Rn */
	r3 |= r5;  /* 0C0BBB78 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BBB7A tst Rm,Rn */
	{ u32 c_ = !T; W32(r4, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BBAACu, 11); goto L_0C0BBAAC; } UPD(0x0C0BBB80u, 1); goto L_0C0BBB80; }  /* 0C0BBB7C bf/s */
L_0C0BBB80: BLKS(0x0C0BBB80u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0BBAACu, 3); goto L_0C0BBAAC; }  /* 0C0BBB80 bra */
L_0C0BBB90: BLKS(0x0C0BBB90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BBAA2u, 3); goto L_0C0BBAA2; }  /* 0C0BBB90 bra */
L_0C0BBBA0: BLKS(0x0C0BBBA0u);
	{ IF(0x0C0BBBA2u); ; /* slot nop */ UPD(0x0C0BBA8Cu, 3); goto L_0C0BBA8C; }  /* 0C0BBBA0 bra */
}

void blk_f_0C0BBBB0(sh3_t *c)
{
	LOCALS;
L_0C0BBBB0: BLKS(0x0C0BBBB0u);
	r7 = (u32)(s32)(s16)r4;  /* 0C0BBBB0 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C0BBBB2 mov #imm,Rn */
	IF(0x0C0BBBB4u); MACL = r7 * r2;  /* 0C0BBBB4 mul.l Rm,Rn */
	r3 = 0xC297B40u; UPD(0x0C0BBBB8u, 5);  /* 0C0BBBB6 mov.l @(disp,pc),Rn */
	r1 = 0x5u;  /* 0C0BBBB8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBBBCu, 2);  /* 0C0BBBBA mov.l Rm,@-Rn */
	IF(0x0C0BBBBCu); r4 = MACL;  /* 0C0BBBBC sts macl,Rn */
	r4 += r3;  /* 0C0BBBBE add Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0BBBC2u, 3);  /* 0C0BBBC0 mov.l @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C0BBBC2 mov #imm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C0BBBC6u, 2);  /* 0C0BBBC4 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BBBC6 mov Rm,Rn */
	W32(r4, r6); UPD(0x0C0BBBCAu, 2);  /* 0C0BBBC8 mov.l Rm,@Rn */
	IF(0x0C0BBBCAu); r0 <<= 2;  /* 0C0BBBCA shll2 Rn */
	W32(r4 + 0x4u, r1); UPD(0x0C0BBBCEu, 2);  /* 0C0BBBCC mov.l Rm,@(disp,Rn) */
	r5 = 0xC1F7FA4u; UPD(0x0C0BBBD0u, 1);  /* 0C0BBBCE mov.l @(disp,pc),Rn */
	IF(0x0C0BBBD0u); r6 = R32(r0 + r5); UPD(0x0C0BBBD2u, 1);  /* 0C0BBBD0 mov.l @(r0,Rm),Rn */
	r5 = 0x0u;  /* 0C0BBBD2 mov #imm,Rn */
	W32(r4 + 0x8u, r6); UPD(0x0C0BBBD6u, 2);  /* 0C0BBBD4 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x10u, r5); UPD(0x0C0BBBD8u, 1);  /* 0C0BBBD6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBBD8u); ARG0(0x463Du); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BBBD8 shld Rm,Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BBBDCu, 2);  /* 0C0BBBDA mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C0BBBDEu, 1);  /* 0C0BBBDC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0BBBE0u, 1);  /* 0C0BBBDE mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x28u); UPD(0x0C0BBBE2u, 1);  /* 0C0BBBE0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0BBBE4u, 1);  /* 0C0BBBE2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBBE4u); r1 = R32(r0 + r6); UPD(0x0C0BBBE6u, 1);  /* 0C0BBBE4 mov.l @(r0,Rm),Rn */
	W32(r4 + 0x18u, r1); UPD(0x0C0BBBE8u, 1);  /* 0C0BBBE6 mov.l Rm,@(disp,Rn) */
	r2 = R32(r1); UPD(0x0C0BBBEAu, 1);  /* 0C0BBBE8 mov.l @Rm,Rn */
	W32(r4 + 0x1Cu, r2); UPD(0x0C0BBBECu, 1);  /* 0C0BBBEA mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BBBEEu, 1);  /* 0C0BBBEC mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BBBF0u, 1);  /* 0C0BBBEE mov.l @(disp,pc),Rn */
	W32(r4 + 0x20u, r7); UPD(0x0C0BBBF2u, 1);  /* 0C0BBBF0 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BBBF4u, 1);  /* 0C0BBBF2 mov.w @Rm,Rn */
	r4 += 0x4Eu;  /* 0C0BBBF4 add #imm,Rn */
	W16(r4, r3); UPD(0x0C0BBBF8u, 2);  /* 0C0BBBF6 mov.w Rm,@Rn */
	r4 += 0xFFFFFFF6u;  /* 0C0BBBF8 add #imm,Rn */
	W16(r4, r5); UPD(0x0C0BBBFCu, 2);  /* 0C0BBBFA mov.w Rm,@Rn */
	r1 = 0x207C0C0u; UPD(0x0C0BBBFEu, 1);  /* 0C0BBBFC mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFBCu;  /* 0C0BBBFE add #imm,Rn */
	W32(r4 + 0x3Cu, r1); UPD(0x0C0BBC02u, 2);  /* 0C0BBC00 mov.l Rm,@(disp,Rn) */
	r0 = 0x808080u; UPD(0x0C0BBC04u, 1);  /* 0C0BBC02 mov.l @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0BBC04 add #imm,Rn */
	W32(r4, r0); UPD(0x0C0BBC08u, 2);  /* 0C0BBC06 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BBC08 mov Rm,Rn */
	IF(0x0C0BBC0Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBC0A rts */
}

/* FUN_0c0bbc30 */
void blk_f_0C0BBC30(sh3_t *c)
{
	LOCALS;
L_0C0BBC30: BLKS(0x0C0BBC30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC32u, 1);  /* 0C0BBC30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC34u, 1);  /* 0C0BBC32 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0BBC34 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC38u, 2);  /* 0C0BBC36 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BBC38 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC3Cu, 2);  /* 0C0BBC3A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC3Eu, 1);  /* 0C0BBC3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC40u, 1);  /* 0C0BBC3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC42u, 1);  /* 0C0BBC40 mov.l Rm,@-Rn */
	r10 = 0xC297B40u; UPD(0x0C0BBC44u, 1);  /* 0C0BBC42 mov.l @(disp,pc),Rn */
	IF(0x0C0BBC44u); r15 -= 4; W32(r15, PR); UPD(0x0C0BBC46u, 1);  /* 0C0BBC44 sts.l pr,@-Rn */
	r13 = 0xC2289E8u; UPD(0x0C0BBC48u, 1);  /* 0C0BBC46 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BBC48 mov Rm,Rn */
	r12 = 0xC073B10u; UPD(0x0C0BBC4Cu, 2);  /* 0C0BBC4A mov.l @(disp,pc),Rn */
	r11 = 0xC3C86B0u; UPD(0x0C0BBC4Eu, 1);  /* 0C0BBC4C mov.l @(disp,pc),Rn */
	IF(0x0C0BBC4Eu); ;  /* 0C0BBC4E nop */
	UPD(0x0C0BBC50u, 1);
L_0C0BBC50: BLKS(0x0C0BBC50u);
	r7 = r8;  /* 0C0BBC50 mov Rm,Rn */
	r7 += r10;  /* 0C0BBC52 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0BBC56u, 3);  /* 0C0BBC54 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0BBC58u, 1);  /* 0C0BBC56 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0BBC58 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BBC80u, 4); goto L_0C0BBC80; } UPD(0x0C0BBC5Eu, 1); goto L_0C0BBC5E; }  /* 0C0BBC5A bf/s */
L_0C0BBC5E: BLKS(0x0C0BBC5Eu);
	r5 = r9;  /* 0C0BBC5E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BBC60 add #imm,Rn */
	r4 = 0xFFu; UPD(0x0C0BBC64u, 3);  /* 0C0BBC62 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0BBC64 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C0BBC66 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBC50u, 5); goto L_0C0BBC50; } goto L_0C0BBC6C; }  /* 0C0BBC68 bf/s */
L_0C0BBC6C: BLKS(0x0C0BBC6Cu);
	r15 = r14;  /* 0C0BBC6C mov Rm,Rn */
	IF(0x0C0BBC6Eu); PR = R32(r15); r15 += 4; UPD(0x0C0BBC70u, 3);  /* 0C0BBC6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BBC72u, 1);  /* 0C0BBC70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BBC74u, 1);  /* 0C0BBC72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BBC76u, 1);  /* 0C0BBC74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BBC78u, 1);  /* 0C0BBC76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BBC7Au, 1);  /* 0C0BBC78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BBC7Cu, 1);  /* 0C0BBC7A mov.l @Rm+,Rn */
	IF(0x0C0BBC7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BBC7C rts */
L_0C0BBC80: BLKS(0x0C0BBC80u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C0BBC82u, 1);  /* 0C0BBC80 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BBC82 add #imm,Rn */
	W32(r13, r3); UPD(0x0C0BBC86u, 2);  /* 0C0BBC84 mov.l Rm,@Rn */
	r2 = R32(r7 + 0x24u); UPD(0x0C0BBC88u, 1);  /* 0C0BBC86 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0BBC8Au, 1);  /* 0C0BBC88 mov.l Rm,@Rn */
	W32(r11, r2); UPD(0x0C0BBC8Cu, 1);  /* 0C0BBC8A mov.l Rm,@Rn */
	r4 = R32(r7 + 0x3Cu); UPD(0x0C0BBC8Eu, 1);  /* 0C0BBC8C mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C0BBC90u, 1);  /* 0C0BBC8E mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0BBC92u, 1);  /* 0C0BBC90 mov.l @(disp,Rm),Rn */
	r7 += 0x40u;  /* 0C0BBC92 add #imm,Rn */
	IF(0x0C0BBC94u); { u32 t_ = r12; PR = 0x0C0BBC98u; r7 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0BBC98u); }  /* 0C0BBC94 jsr @Rn */
L_0C0BBC98: BLKS(0x0C0BBC98u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0BBC5Eu, 3); goto L_0C0BBC5E; }  /* 0C0BBC98 bra */
}

/* FUN_0c0bbd90 */
void blk_f_0C0BBD90(sh3_t *c)
{
	LOCALS;
L_0C0BBD90: BLKS(0x0C0BBD90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD92u, 1);  /* 0C0BBD90 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0BBD92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD96u, 2);  /* 0C0BBD94 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0BBD96 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD9Au, 2);  /* 0C0BBD98 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BBD9A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD9Eu, 2);  /* 0C0BBD9C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBDA0u, 1);  /* 0C0BBD9E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBDA2u, 1);  /* 0C0BBDA0 mov.l Rm,@-Rn */
	r0 = 0xC2B1A4Au; UPD(0x0C0BBDA4u, 1);  /* 0C0BBDA2 mov.l @(disp,pc),Rn */
	IF(0x0C0BBDA4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BBDA6u, 1);  /* 0C0BBDA4 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0BBDA6 mov Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BBDAAu, 2);  /* 0C0BBDA8 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0BBDAA mov Rm,Rn */
	r4 = 0xC2974C6u; UPD(0x0C0BBDAEu, 2);  /* 0C0BBDAC mov.l @(disp,pc),Rn */
	r10 = 0xC297B40u; UPD(0x0C0BBDB0u, 1);  /* 0C0BBDAE mov.l @(disp,pc),Rn */
	r12 = 0xC1F7E84u; UPD(0x0C0BBDB2u, 1);  /* 0C0BBDB0 mov.l @(disp,pc),Rn */
	W16(r4, r1); UPD(0x0C0BBDB4u, 1);  /* 0C0BBDB2 mov.w Rm,@Rn */
	W16(r0, r2); UPD(0x0C0BBDB6u, 1);  /* 0C0BBDB4 mov.w Rm,@Rn */
	IF(0x0C0BBDB6u); ;  /* 0C0BBDB6 nop */
	UPD(0x0C0BBDB8u, 1);
L_0C0BBDB8: BLKS(0x0C0BBDB8u);
	r2 = r8;  /* 0C0BBDB8 mov Rm,Rn */
	r2 += r10;  /* 0C0BBDBA add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BBDBEu, 3);  /* 0C0BBDBC mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BBDBE tst Rm,Rn */
	if (!T) { UPD(0x0C0BBDF0u, 4); goto L_0C0BBDF0; }  /* 0C0BBDC0 bf */
L_0C0BBDC2: BLKS(0x0C0BBDC2u);
	r7 = r9;  /* 0C0BBDC2 mov Rm,Rn */
	UPD(0x0C0BBDC4u, 1);
L_0C0BBDC4: BLKS(0x0C0BBDC4u);
	r7 += 0x1u;  /* 0C0BBDC4 add #imm,Rn */
	r6 = 0xFFu; UPD(0x0C0BBDC8u, 2);  /* 0C0BBDC6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BBDC8 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C0BBDCA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBDB8u, 5); goto L_0C0BBDB8; } goto L_0C0BBDD0; }  /* 0C0BBDCC bf/s */
L_0C0BBDD0: BLKS(0x0C0BBDD0u);
	r15 = r14;  /* 0C0BBDD0 mov Rm,Rn */
	IF(0x0C0BBDD2u); PR = R32(r15); r15 += 4; UPD(0x0C0BBDD4u, 3);  /* 0C0BBDD2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BBDD6u, 1);  /* 0C0BBDD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BBDD8u, 1);  /* 0C0BBDD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BBDDAu, 1);  /* 0C0BBDD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BBDDCu, 1);  /* 0C0BBDDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BBDDEu, 1);  /* 0C0BBDDC mov.l @Rm+,Rn */
	IF(0x0C0BBDDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BBDDE rts */
L_0C0BBDF0: BLKS(0x0C0BBDF0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0BBDF2u, 1);  /* 0C0BBDF0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0BBDF2 mov Rm,Rn */
	IF(0x0C0BBDF4u); r0 <<= 2;  /* 0C0BBDF4 shll2 Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C0BBDF8u, 3);  /* 0C0BBDF6 mov.w @Rm,Rn */
	IF(0x0C0BBDF8u); r3 = R32(r0 + r12); UPD(0x0C0BBDFAu, 1);  /* 0C0BBDF8 mov.l @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0BBDFA add #imm,Rn */
	IF(0x0C0BBDFCu); { u32 t_ = r3; PR = 0x0C0BBE00u; W16(r11, r5); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLD(t_, 0x0C0BBE00u); }  /* 0C0BBDFC jsr @Rn */
L_0C0BBE00: BLKS(0x0C0BBE00u);
	{ r7 = r9; /* slot mov Rm,Rn */ UPD(0x0C0BBDC4u, 3); goto L_0C0BBDC4; }  /* 0C0BBE00 bra */
}


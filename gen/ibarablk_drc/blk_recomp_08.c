#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C072AC0(sh3_t *c)
{
	LOCALS;
L_0C072AC0: BLKS(0x0C072AC0u);
	r2 = 0xC2ABAA4u; UPD(0x0C072AC2u, 1);  /* 0C072AC0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072AC4u, 1);  /* 0C072AC2 mov.l Rm,@-Rn */
	r5 = R32(r2); UPD(0x0C072AC6u, 1);  /* 0C072AC4 mov.l @Rm,Rn */
	r14 = r15;  /* 0C072AC6 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C072ACAu, 2);  /* 0C072AC8 mov.w @Rm+,Rn */
	r0 = 0xC22E2A4u; UPD(0x0C072ACCu, 1);  /* 0C072ACA mov.l @(disp,pc),Rn */
	IF(0x0C072ACCu); r3 <<= 8;  /* 0C072ACC shll8 Rn */
	W32(r0, r3); UPD(0x0C072AD0u, 2);  /* 0C072ACE mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r4 = v_; } UPD(0x0C072AD2u, 1);  /* 0C072AD0 mov.w @Rm+,Rn */
	r0 = 0xC239454u; UPD(0x0C072AD4u, 1);  /* 0C072AD2 mov.l @(disp,pc),Rn */
	IF(0x0C072AD4u); r4 <<= 8;  /* 0C072AD4 shll8 Rn */
	W32(r0, r4); UPD(0x0C072AD8u, 2);  /* 0C072AD6 mov.l Rm,@Rn */
	W32(r2, r5); UPD(0x0C072ADAu, 1);  /* 0C072AD8 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C072ADA mov #imm,Rn */
	r15 = r14;  /* 0C072ADC mov Rm,Rn */
	IF(0x0C072ADEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C072ADE rts */
}

void blk_f_0C072AF0(sh3_t *c)
{
	LOCALS;
L_0C072AF0: BLKS(0x0C072AF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072AF2u, 1);  /* 0C072AF0 mov.l Rm,@-Rn */
	r0 = 0xC22E2A4u; UPD(0x0C072AF4u, 1);  /* 0C072AF2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C072AF4 mov Rm,Rn */
	r3 = R32(r0); UPD(0x0C072AF8u, 2);  /* 0C072AF6 mov.l @Rm,Rn */
	r2 = 0xC23945Cu; UPD(0x0C072AFAu, 1);  /* 0C072AF8 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C072AFCu, 1);  /* 0C072AFA mov.l @Rm,Rn */
	T = r3 == r0;  /* 0C072AFC cmp/eq Rm,Rn */
	IF(0x0C072AFEu); r0 = T;  /* 0C072AFE movt Rn */
	r15 = r14;  /* 0C072B00 mov Rm,Rn */
	IF(0x0C072B02u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C072B02 rts */
}

void blk_f_0C072B10(sh3_t *c)
{
	LOCALS;
L_0C072B10: BLKS(0x0C072B10u);
	r2 = 0xC3C4165u; UPD(0x0C072B12u, 1);  /* 0C072B10 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C072B14u, 1);  /* 0C072B12 mov.b @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072B16u, 1);  /* 0C072B14 mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C072B16 tst Rm,Rn */
	r14 = r15;  /* 0C072B18 mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072B24u, 5); goto L_0C072B24; } goto L_0C072B1E; }  /* 0C072B1A bt/s */
L_0C072B1E: BLKS(0x0C072B1Eu);
	r0 = 0x0u;  /* 0C072B1E mov #imm,Rn */
	W8(r2, r0); UPD(0x0C072B22u, 3);  /* 0C072B20 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C072B22 mov #imm,Rn */
	UPD(0x0C072B24u, 1);
L_0C072B24: BLKS(0x0C072B24u);
	r15 = r14;  /* 0C072B24 mov Rm,Rn */
	IF(0x0C072B26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C072B26 rts */
}

void blk_f_0C072B30(sh3_t *c)
{
	LOCALS;
L_0C072B30: BLKS(0x0C072B30u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072B32u, 1);  /* 0C072B30 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C072B32 mov #imm,Rn */
	IF(0x0C072B34u); r15 -= 4; W32(r15, PR); UPD(0x0C072B36u, 2);  /* 0C072B34 sts.l pr,@-Rn */
	r0 = 0xC2ABAA4u; UPD(0x0C072B38u, 1);  /* 0C072B36 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C072B3Au, 1);  /* 0C072B38 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C072B3Cu, 1);  /* 0C072B3A mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C072B3Eu, 1);  /* 0C072B3C mov.l Rm,@Rn */
	r0 = 0xC06A0D0u; UPD(0x0C072B40u, 1);  /* 0C072B3E mov.l @(disp,pc),Rn */
	IF(0x0C072B40u); { u32 t_ = r0; PR = 0x0C072B44u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A0D0, 0x0C06A0D0u, 0x0C072B44u); }  /* 0C072B40 jsr @Rn */
L_0C072B44: BLKS(0x0C072B44u);
	r0 = (u32)(s32)(s16)r0;  /* 0C072B44 exts.w Rm,Rn */
	r15 = r14;  /* 0C072B46 mov Rm,Rn */
	IF(0x0C072B48u); PR = R32(r15); r15 += 4; UPD(0x0C072B4Au, 3);  /* 0C072B48 lds.l @Rn+,pr */
	IF(0x0C072B4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072B4A rts */
}

void blk_f_0C072B60(sh3_t *c)
{
	LOCALS;
L_0C072B60: BLKS(0x0C072B60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072B62u, 1);  /* 0C072B60 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C072B62 mov #imm,Rn */
	IF(0x0C072B64u); r15 -= 4; W32(r15, PR); UPD(0x0C072B66u, 2);  /* 0C072B64 sts.l pr,@-Rn */
	r0 = 0xC2ABAA4u; UPD(0x0C072B68u, 1);  /* 0C072B66 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C072B6Au, 1);  /* 0C072B68 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C072B6Cu, 1);  /* 0C072B6A mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C072B6Eu, 1);  /* 0C072B6C mov.l Rm,@Rn */
	r0 = 0xC06A0D0u; UPD(0x0C072B70u, 1);  /* 0C072B6E mov.l @(disp,pc),Rn */
	IF(0x0C072B70u); { u32 t_ = r0; PR = 0x0C072B74u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A0D0, 0x0C06A0D0u, 0x0C072B74u); }  /* 0C072B70 jsr @Rn */
L_0C072B74: BLKS(0x0C072B74u);
	r0 = (u32)(s32)(s16)r0;  /* 0C072B74 exts.w Rm,Rn */
	r15 = r14;  /* 0C072B76 mov Rm,Rn */
	IF(0x0C072B78u); PR = R32(r15); r15 += 4; UPD(0x0C072B7Au, 3);  /* 0C072B78 lds.l @Rn+,pr */
	IF(0x0C072B7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072B7A rts */
}

/* FUN_0c072c90 */
void blk_f_0C072C90(sh3_t *c)
{
	LOCALS;
L_0C072C90: BLKS(0x0C072C90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072C92u, 1);  /* 0C072C90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072C94u, 1);  /* 0C072C92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C072C96u, 1);  /* 0C072C94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C072C98u, 1);  /* 0C072C96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072C9Au, 1);  /* 0C072C98 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C072C9A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072C9Eu, 2);  /* 0C072C9C mov.l Rm,@-Rn */
	r12 = r4;  /* 0C072C9E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072CA2u, 2);  /* 0C072CA0 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C072CA2 mov Rm,Rn */
	IF(0x0C072CA4u); r15 -= 4; W32(r15, PR); UPD(0x0C072CA6u, 2);  /* 0C072CA4 sts.l pr,@-Rn */
	r4 = 0x1u;  /* 0C072CA6 mov #imm,Rn */
	r8 = 0xC071740u; UPD(0x0C072CAAu, 2);  /* 0C072CA8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072CAA add #imm,Rn */
	r14 = r15;  /* 0C072CAC mov Rm,Rn */
	IF(0x0C072CAEu); { u32 t_ = r8; PR = 0x0C072CB2u; W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C072CB2u); }  /* 0C072CAE jsr @Rn */
L_0C072CB2: BLKS(0x0C072CB2u);
	T = (r0 & r0) == 0;  /* 0C072CB2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072CD0u, 4); goto L_0C072CD0; } UPD(0x0C072CB8u, 1); goto L_0C072CB8; }  /* 0C072CB4 bf/s */
L_0C072CB8: BLKS(0x0C072CB8u);
	r14 += 0x4u;  /* 0C072CB8 add #imm,Rn */
	r15 = r14;  /* 0C072CBA mov Rm,Rn */
	IF(0x0C072CBCu); PR = R32(r15); r15 += 4; UPD(0x0C072CBEu, 3);  /* 0C072CBC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072CC0u, 1);  /* 0C072CBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072CC2u, 1);  /* 0C072CC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072CC4u, 1);  /* 0C072CC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072CC6u, 1);  /* 0C072CC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072CC8u, 1);  /* 0C072CC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072CCAu, 1);  /* 0C072CC8 mov.l @Rm+,Rn */
	IF(0x0C072CCAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072CCA rts */
L_0C072CD0: BLKS(0x0C072CD0u);
	r4 = 0xC28EDFCu; UPD(0x0C072CD2u, 1);  /* 0C072CD0 mov.l @(disp,pc),Rn */
	r0 = 0x8u;  /* 0C072CD2 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r4); UPD(0x0C072CD6u, 2);  /* 0C072CD4 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C072CD8u, 1);  /* 0C072CD6 mov.w @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C072CD8 mov #imm,Rn */
	IF(0x0C072CDAu); MACL = r10 * r8;  /* 0C072CDA mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C072CDEu, 4);  /* 0C072CDC mov.l @(disp,pc),Rn */
	r9 = 0xC062780u; UPD(0x0C072CE0u, 1);  /* 0C072CDE mov.l @(disp,pc),Rn */
	IF(0x0C072CE0u); r8 = MACL;  /* 0C072CE0 sts macl,Rn */
	r2 = 0xC0000000u; UPD(0x0C072CE4u, 2);  /* 0C072CE2 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C072CE4 add Rm,Rn */
	W32(r8, r2); UPD(0x0C072CE8u, 2);  /* 0C072CE6 mov.l Rm,@Rn */
	IF(0x0C072CE8u); { u32 t_ = r9; PR = 0x0C072CECu; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C072CECu); }  /* 0C072CE8 jsr @Rn */
L_0C072CEC: BLKS(0x0C072CECu);
	r0 += 0x18u;  /* 0C072CEC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C072CF0u, 2);  /* 0C072CEE mov.l Rm,@(disp,Rn) */
	r9 = r11;  /* 0C072CF0 mov Rm,Rn */
	r9 += 0x8u;  /* 0C072CF2 add #imm,Rn */
	r0 = r9;  /* 0C072CF4 mov Rm,Rn */
	IF(0x0C072CF6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C072CF6 shar Rn */
	IF(0x0C072CF8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C072CF8 shar Rn */
	IF(0x0C072CFAu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C072CFA shar Rn */
	r0 &= 0x3Fu;  /* 0C072CFC and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C072D00u, 8);  /* 0C072CFE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C072D00 mov Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C072D04u, 2);  /* 0C072D02 mov.l @(disp,pc),Rn */
	IF(0x0C072D04u); r9 >>= 2;  /* 0C072D04 shlr2 Rn */
	IF(0x0C072D06u); { u32 t_ = r0; PR = 0x0C072D0Au; IF(0x0C072D08u); r9 >>= 2; /* slot shlr2 Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C072D0Au); }  /* 0C072D06 jsr @Rn */
L_0C072D0A: BLKS(0x0C072D0Au);
	r4 = r10;  /* 0C072D0A mov Rm,Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C072D0Eu, 2);  /* 0C072D0C mov.l @(disp,pc),Rn */
	IF(0x0C072D0Eu); { u32 t_ = r10; PR = 0x0C072D12u; IF(0x0C072D10u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C072D12u); }  /* 0C072D0E jsr @Rn */
L_0C072D12: BLKS(0x0C072D12u);
	r0 = r12;  /* 0C072D12 mov Rm,Rn */
	r0 &= 0x7u;  /* 0C072D14 and #imm,r0 */
	r5 = 0xA0u; UPD(0x0C072D18u, 3);  /* 0C072D16 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C072D18 mov Rm,Rn */
	r5 += r8;  /* 0C072D1A add Rm,Rn */
	r7 += r7;  /* 0C072D1C add Rm,Rn */
	r7 += r0;  /* 0C072D1E add Rm,Rn */
	r5 += 0x1u;  /* 0C072D20 add #imm,Rn */
	W8(r5, r7); UPD(0x0C072D24u, 6);  /* 0C072D22 mov.b Rm,@Rn */
	r6 = 0x1Fu;  /* 0C072D24 mov #imm,Rn */
	r9 &= r6;  /* 0C072D26 and Rm,Rn */
	r5 += 0x1u;  /* 0C072D28 add #imm,Rn */
	W8(r5, r9); UPD(0x0C072D2Cu, 4);  /* 0C072D2A mov.b Rm,@Rn */
	r4 = R32(r14); UPD(0x0C072D2Eu, 1);  /* 0C072D2C mov.l @Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C072D30u, 1);  /* 0C072D2E mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C072D32u, 1);  /* 0C072D30 mov.l Rm,@(disp,Rn) */
	r0 = 0x86u; UPD(0x0C072D34u, 1);  /* 0C072D32 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C072D34 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C072D38u, 2);  /* 0C072D36 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x24u); UPD(0x0C072D3Au, 1);  /* 0C072D38 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C072D3Cu, 1);  /* 0C072D3A mov.l Rm,@(disp,Rn) */
	IF(0x0C072D3Cu); { u32 t_ = r10; PR = 0x0C072D40u; IF(0x0C072D3Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C072D40u); }  /* 0C072D3C jsr @Rn */
L_0C072D40: BLKS(0x0C072D40u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C072D42u, 1);  /* 0C072D40 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C072D42 mov Rm,Rn */
	IF(0x0C072D44u); { u32 t_ = r9; PR = 0x0C072D48u; r5 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C072D48u); }  /* 0C072D44 jsr @Rn */
L_0C072D48: BLKS(0x0C072D48u);
	W32(r8 + 0x30u, r0); UPD(0x0C072D4Au, 1);  /* 0C072D48 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C072D4A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C072D4Eu, 2);  /* 0C072D4C mov.w @(disp,pc),Rn */
	IF(0x0C072D4Eu); W8(r0 + r8, r3); UPD(0x0C072D50u, 1);  /* 0C072D4E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C072D50 add #imm,Rn */
	IF(0x0C072D52u); W8(r0 + r8, r3); UPD(0x0C072D54u, 2);  /* 0C072D52 mov.b Rm,@(r0,Rn) */
	r2 = 0x207C0C0u; UPD(0x0C072D56u, 1);  /* 0C072D54 mov.l @(disp,pc),Rn */
	r0 = 0x808080u; UPD(0x0C072D58u, 1);  /* 0C072D56 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r2); UPD(0x0C072D5Au, 1);  /* 0C072D58 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C072D5Cu, 1);  /* 0C072D5A mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C2110u; UPD(0x0C072D5Eu, 1);  /* 0C072D5C mov.l @(disp,pc),Rn */
	IF(0x0C072D5Eu); { u32 t_ = r8; PR = 0x0C072D62u; r4 = 0x66u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C072D62u); }  /* 0C072D5E jsr @Rn */
L_0C072D62: BLKS(0x0C072D62u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C072CB8u, 3); goto L_0C072CB8; }  /* 0C072D62 bra */
}

/* FUN_0c072e70 */
void blk_f_0C072E70(sh3_t *c)
{
	LOCALS;
L_0C072E70: BLKS(0x0C072E70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072E72u, 1);  /* 0C072E70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072E74u, 1);  /* 0C072E72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C072E76u, 1);  /* 0C072E74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C072E78u, 1);  /* 0C072E76 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C072E78 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072E7Cu, 2);  /* 0C072E7A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C072E7C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072E80u, 2);  /* 0C072E7E mov.l Rm,@-Rn */
	r12 = r5;  /* 0C072E80 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072E84u, 2);  /* 0C072E82 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C072E84 mov Rm,Rn */
	IF(0x0C072E86u); r15 -= 4; W32(r15, PR); UPD(0x0C072E88u, 2);  /* 0C072E86 sts.l pr,@-Rn */
	r4 = 0x1u;  /* 0C072E88 mov #imm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072E8A add #imm,Rn */
	r14 = r15;  /* 0C072E8C mov Rm,Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C072E90u, 4);  /* 0C072E8E mov.l @(disp,Rm),Rn */
	r8 = 0xC071740u; UPD(0x0C072E92u, 1);  /* 0C072E90 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C072E92 exts.b Rm,Rn */
	IF(0x0C072E94u); { u32 t_ = r8; PR = 0x0C072E98u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C072E98u); }  /* 0C072E94 jsr @Rn */
L_0C072E98: BLKS(0x0C072E98u);
	T = (r0 & r0) == 0;  /* 0C072E98 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072EC0u, 4); goto L_0C072EC0; } UPD(0x0C072E9Eu, 1); goto L_0C072E9E; }  /* 0C072E9A bf/s */
L_0C072E9E: BLKS(0x0C072E9Eu);
	r14 += 0x4u;  /* 0C072E9E add #imm,Rn */
	r15 = r14;  /* 0C072EA0 mov Rm,Rn */
	IF(0x0C072EA2u); PR = R32(r15); r15 += 4; UPD(0x0C072EA4u, 3);  /* 0C072EA2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072EA6u, 1);  /* 0C072EA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072EA8u, 1);  /* 0C072EA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072EAAu, 1);  /* 0C072EA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072EACu, 1);  /* 0C072EAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072EAEu, 1);  /* 0C072EAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072EB0u, 1);  /* 0C072EAE mov.l @Rm+,Rn */
	IF(0x0C072EB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072EB0 rts */
L_0C072EC0: BLKS(0x0C072EC0u);
	r4 = 0xC28EDFCu; UPD(0x0C072EC2u, 1);  /* 0C072EC0 mov.l @(disp,pc),Rn */
	r0 = 0x17u;  /* 0C072EC2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C072EC6u, 2);  /* 0C072EC4 mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C072EC6 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C072ECAu, 2);  /* 0C072EC8 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C072ECA mov Rm,Rn */
	IF(0x0C072ECCu); MACL = r9 * r8;  /* 0C072ECC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C072ED0u, 4);  /* 0C072ECE mov.l @(disp,pc),Rn */
	IF(0x0C072ED0u); r8 = MACL;  /* 0C072ED0 sts macl,Rn */
	r8 += r3;  /* 0C072ED2 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C072ED6u, 3);  /* 0C072ED4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8A30u; UPD(0x0C072ED8u, 1);  /* 0C072ED6 mov.l @(disp,pc),Rn */
	r2 = 0xD3000000u; UPD(0x0C072EDAu, 1);  /* 0C072ED8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C072EDCu, 1);  /* 0C072EDA mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C072EDEu, 1);  /* 0C072EDC mov.l Rm,@Rn */
	IF(0x0C072EDEu); { u32 t_ = r0; PR = 0x0C072EE2u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C072EE2u); }  /* 0C072EDE jsr @Rn */
L_0C072EE2: BLKS(0x0C072EE2u);
	r4 = r9;  /* 0C072EE2 mov Rm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C072EE6u, 2);  /* 0C072EE4 mov.l @(disp,pc),Rn */
	IF(0x0C072EE6u); { u32 t_ = r9; PR = 0x0C072EEAu; IF(0x0C072EE8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C072EEAu); }  /* 0C072EE6 jsr @Rn */
L_0C072EEA: BLKS(0x0C072EEAu);
	W32(r8 + 0x24u, r11); UPD(0x0C072EECu, 1);  /* 0C072EEA mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C072EEC mov Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C072EF0u, 2);  /* 0C072EEE mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C072EF0 mov Rm,Rn */
	r0 = 0x86u; UPD(0x0C072EF4u, 2);  /* 0C072EF2 mov.w @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C072EF6u, 1);  /* 0C072EF4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C072EF8u, 1);  /* 0C072EF6 mov.l Rm,@(disp,Rn) */
	IF(0x0C072EF8u); { u32 t_ = r11; PR = 0x0C072EFCu; IF(0x0C072EFAu); W16(r0 + r8, r10); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C072EFCu); }  /* 0C072EF8 jsr @Rn */
L_0C072EFC: BLKS(0x0C072EFCu);
	W32(r8 + 0x2Cu, r0); UPD(0x0C072EFEu, 1);  /* 0C072EFC mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C072EFE mov Rm,Rn */
	IF(0x0C072F00u); { u32 t_ = r9; PR = 0x0C072F04u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C072F04u); }  /* 0C072F00 jsr @Rn */
L_0C072F04: BLKS(0x0C072F04u);
	W32(r8 + 0x30u, r0); UPD(0x0C072F06u, 1);  /* 0C072F04 mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C072F06 mov #imm,Rn */
	r6 += r14;  /* 0C072F08 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C072F0Cu, 3);  /* 0C072F0A mov.b @Rm,Rn */
	r4 = 0x3u;  /* 0C072F0C mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C072F10u, 2);  /* 0C072F0E mov.w @(disp,pc),Rn */
	r4 += r14;  /* 0C072F10 add Rm,Rn */
	IF(0x0C072F12u); W8(r0 + r8, r5); UPD(0x0C072F14u, 2);  /* 0C072F12 mov.b Rm,@(r0,Rn) */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C072F16u, 1);  /* 0C072F14 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C072F16 add #imm,Rn */
	IF(0x0C072F18u); W8(r0 + r8, r3); UPD(0x0C072F1Au, 2);  /* 0C072F18 mov.b Rm,@(r0,Rn) */
	r8 = 0xC0C2110u; UPD(0x0C072F1Cu, 1);  /* 0C072F1A mov.l @(disp,pc),Rn */
	IF(0x0C072F1Cu); { u32 t_ = r8; PR = 0x0C072F20u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C072F20u); }  /* 0C072F1C jsr @Rn */
L_0C072F20: BLKS(0x0C072F20u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C072E9Eu, 3); goto L_0C072E9E; }  /* 0C072F20 bra */
}

void blk_f_0C072F50(sh3_t *c)
{
	LOCALS;
L_0C072F50: BLKS(0x0C072F50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072F52u, 1);  /* 0C072F50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072F54u, 1);  /* 0C072F52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C072F56u, 1);  /* 0C072F54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C072F58u, 1);  /* 0C072F56 mov.l Rm,@-Rn */
	r2 = 0x9C0u; UPD(0x0C072F5Au, 1);  /* 0C072F58 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C072F5A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072F5Eu, 2);  /* 0C072F5C mov.l Rm,@-Rn */
	IF(0x0C072F5Eu); MACL = r11 * r2;  /* 0C072F5E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072F62u, 3);  /* 0C072F60 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C072F62 exts.w Rm,Rn */
	r0 = 0x340u; UPD(0x0C072F66u, 2);  /* 0C072F64 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C072F66 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072F6Au, 2);  /* 0C072F68 mov.l Rm,@-Rn */
	IF(0x0C072F6Au); r6 = MACL;  /* 0C072F6A sts macl,Rn */
	IF(0x0C072F6Cu); MACL = r13 * r0;  /* 0C072F6C mul.l Rm,Rn */
	IF(0x0C072F6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C072F70u, 4);  /* 0C072F6E sts.l pr,@-Rn */
	r3 = r6;  /* 0C072F70 mov Rm,Rn */
	IF(0x0C072F72u); r5 = MACL;  /* 0C072F72 sts macl,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072F74 add #imm,Rn */
	r0 = 0x34u;  /* 0C072F76 mov #imm,Rn */
	r14 = r15;  /* 0C072F78 mov Rm,Rn */
	IF(0x0C072F7Au); MACL = r12 * r0;  /* 0C072F7A mul.l Rm,Rn */
	W32(r14, r7); UPD(0x0C072F7Eu, 8);  /* 0C072F7C mov.l Rm,@Rn */
	r3 += r5;  /* 0C072F7E add Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C072F82u, 2);  /* 0C072F80 mov.l @(disp,pc),Rn */
	IF(0x0C072F82u); r7 = MACL;  /* 0C072F82 sts macl,Rn */
	r3 += r7;  /* 0C072F84 add Rm,Rn */
	r3 += r4;  /* 0C072F86 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C072F8Au, 4);  /* 0C072F88 mov.l @Rm,Rn */
	r10 = 0x800000u; UPD(0x0C072F8Cu, 1);  /* 0C072F8A mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C072F8C and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C072F8E tst Rm,Rn */
	if (T) { UPD(0x0C073020u, 5); goto L_0C073020; }  /* 0C072F90 bt */
L_0C072F92: BLKS(0x0C072F92u);
	r2 = r6;  /* 0C072F92 mov Rm,Rn */
	r2 += r7;  /* 0C072F94 add Rm,Rn */
	r2 += r5;  /* 0C072F96 add Rm,Rn */
	r2 += r4;  /* 0C072F98 add Rm,Rn */
	r3 = R32(r2 + 0x20u); UPD(0x0C072F9Cu, 5);  /* 0C072F9A mov.l @(disp,Rm),Rn */
	r1 = 0x4000u; UPD(0x0C072F9Eu, 1);  /* 0C072F9C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C072F9E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C072FB4u, 4); goto L_0C072FB4; }  /* 0C072FA0 bf */
L_0C072FA2: BLKS(0x0C072FA2u);
	r4 = r3;  /* 0C072FA2 mov Rm,Rn */
	r4 -= r1;  /* 0C072FA4 sub Rm,Rn */
	IF(0x0C072FA6u); T = (s32)r4 >= 0;  /* 0C072FA6 cmp/pz Rn */
	{ u32 c_ = !T; r1 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073010u, 6); goto L_0C073010; } UPD(0x0C072FACu, 1); goto L_0C072FAC; }  /* 0C072FA8 bf/s */
L_0C072FAC: BLKS(0x0C072FACu);
	IF(0x0C072FACu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C072FAC shar Rn */
	IF(0x0C072FAEu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C072FAE shar Rn */
	r3 -= r1;  /* 0C072FB0 sub Rm,Rn */
	W32(r2 + 0x20u, r3); UPD(0x0C072FB4u, 4);  /* 0C072FB2 mov.l Rm,@(disp,Rn) */
L_0C072FB4: BLKS(0x0C072FB4u);
	r8 = 0x9C0u; UPD(0x0C072FB6u, 1);  /* 0C072FB4 mov.w @(disp,pc),Rn */
	r0 = 0x34u;  /* 0C072FB6 mov #imm,Rn */
	IF(0x0C072FB8u); MACL = r11 * r8;  /* 0C072FB8 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C072FBCu, 4);  /* 0C072FBA mov.w @(disp,pc),Rn */
	IF(0x0C072FBCu); r8 = MACL;  /* 0C072FBC sts macl,Rn */
	IF(0x0C072FBEu); MACL = r12 * r0;  /* 0C072FBE mul.l Rm,Rn */
	r5 = 0xC2380D0u; UPD(0x0C072FC2u, 4);  /* 0C072FC0 mov.l @(disp,pc),Rn */
	IF(0x0C072FC2u); r11 = MACL;  /* 0C072FC2 sts macl,Rn */
	IF(0x0C072FC4u); MACL = r13 * r7;  /* 0C072FC4 mul.l Rm,Rn */
	r8 += r11;  /* 0C072FC6 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C072FCAu, 5);  /* 0C072FC8 mov.l @(disp,pc),Rn */
	IF(0x0C072FCAu); r6 = MACL;  /* 0C072FCA sts macl,Rn */
	r8 += r6;  /* 0C072FCC add Rm,Rn */
	r8 += r5;  /* 0C072FCE add Rm,Rn */
	r10 = r8;  /* 0C072FD0 mov Rm,Rn */
	r10 += 0x2Cu;  /* 0C072FD2 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C072FD6u, 6);  /* 0C072FD4 mov.w @Rm,Rn */
	r5 = R32(r8 + 0x20u); UPD(0x0C072FD8u, 1);  /* 0C072FD6 mov.l @(disp,Rm),Rn */
	IF(0x0C072FD8u); { u32 t_ = r9; PR = 0x0C072FDCu; r4 = r3 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C072FDCu); }  /* 0C072FD8 jsr @Rn */
L_0C072FDC: BLKS(0x0C072FDCu);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C072FDEu, 1);  /* 0C072FDC mov.w @Rm,Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C072FE0u, 1);  /* 0C072FDE mov.l Rm,@(disp,Rn) */
	r4 = r1 & 0xFFFF;  /* 0C072FE0 extu.w Rm,Rn */
	r5 = R32(r8 + 0x20u); UPD(0x0C072FE4u, 2);  /* 0C072FE2 mov.l @(disp,Rm),Rn */
L_0C072FE4: BLKS(0x0C072FE4u);
	r10 = 0xC069AF0u; UPD(0x0C072FE6u, 1);  /* 0C072FE4 mov.l @(disp,pc),Rn */
	IF(0x0C072FE6u); { u32 t_ = r10; PR = 0x0C072FEAu; IF(0x0C072FE8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C072FEAu); }  /* 0C072FE6 jsr @Rn */
L_0C072FEA: BLKS(0x0C072FEAu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C072FECu, 1);  /* 0C072FEA mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C072FEC add #imm,Rn */
	r15 = r14;  /* 0C072FEE mov Rm,Rn */
	IF(0x0C072FF0u); PR = R32(r15); r15 += 4; UPD(0x0C072FF2u, 3);  /* 0C072FF0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072FF4u, 1);  /* 0C072FF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072FF6u, 1);  /* 0C072FF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072FF8u, 1);  /* 0C072FF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072FFAu, 1);  /* 0C072FF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072FFCu, 1);  /* 0C072FFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072FFEu, 1);  /* 0C072FFC mov.l @Rm+,Rn */
	IF(0x0C072FFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072FFE rts */
L_0C073010: BLKS(0x0C073010u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C072FACu, 3); goto L_0C072FAC; }  /* 0C073010 bra */
L_0C073020: BLKS(0x0C073020u);
	r9 = 0xF7FFFFFFu; UPD(0x0C073022u, 1);  /* 0C073020 mov.l @(disp,pc),Rn */
	r2 &= r9;  /* 0C073022 and Rm,Rn */
	r9 = r6;  /* 0C073024 mov Rm,Rn */
	r9 += r7;  /* 0C073026 add Rm,Rn */
	r9 += r5;  /* 0C073028 add Rm,Rn */
	r9 += r4;  /* 0C07302A add Rm,Rn */
	r8 = R32(r9 + 0x8u); UPD(0x0C07302Eu, 6);  /* 0C07302C mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C07302E mov #imm,Rn */
	r0 = 0xC062780u; UPD(0x0C073032u, 2);  /* 0C073030 mov.l @(disp,pc),Rn */
	IF(0x0C073032u); r8 <<= 2;  /* 0C073032 shll2 Rn */
	r5 = 0xC17E24Cu; UPD(0x0C073036u, 2);  /* 0C073034 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C073038u, 1);  /* 0C073036 mov.l Rm,@Rn */
	r8 += r5;  /* 0C073038 add Rm,Rn */
	IF(0x0C07303Au); { u32 t_ = r0; PR = 0x0C07303Eu; W32(r9 + 0x4u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07303Eu); }  /* 0C07303A jsr @Rn */
L_0C07303E: BLKS(0x0C07303Eu);
	r3 = R32(r8); UPD(0x0C073040u, 1);  /* 0C07303E mov.l @Rm,Rn */
	r2 = r9;  /* 0C073040 mov Rm,Rn */
	r2 += 0x30u;  /* 0C073042 add #imm,Rn */
	W8(r2, r10); UPD(0x0C073046u, 3);  /* 0C073044 mov.b Rm,@Rn */
	r3 += r0;  /* 0C073046 add Rm,Rn */
	r4 = 0x20000000u; UPD(0x0C07304Au, 2);  /* 0C073048 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C07304Cu, 1);  /* 0C07304A mov.l @Rm,Rn */
	W32(r9 + 0x8u, r3); UPD(0x0C07304Eu, 1);  /* 0C07304C mov.l Rm,@(disp,Rn) */
	T = (r1 & r4) == 0;  /* 0C07304E tst Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073090u, 4); goto L_0C073090; } UPD(0x0C073054u, 1); goto L_0C073054; }  /* 0C073050 bf/s */
L_0C073054: BLKS(0x0C073054u);
	r6 = r9;  /* 0C073054 mov Rm,Rn */
	r6 += 0x2Cu;  /* 0C073056 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C07305Au, 3);  /* 0C073058 mov.w @Rm,Rn */
	r9 = R32(r9 + 0x20u); UPD(0x0C07305Cu, 1);  /* 0C07305A mov.l @(disp,Rm),Rn */
L_0C07305C: BLKS(0x0C07305Cu);
	r8 = 0x9C0u; UPD(0x0C07305Eu, 1);  /* 0C07305C mov.w @(disp,pc),Rn */
	r2 = 0x34u;  /* 0C07305E mov #imm,Rn */
	IF(0x0C073060u); MACL = r11 * r8;  /* 0C073060 mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C073064u, 4);  /* 0C073062 mov.w @(disp,pc),Rn */
	IF(0x0C073064u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C073064 shar Rn */
	IF(0x0C073066u); r8 = MACL;  /* 0C073066 sts macl,Rn */
	IF(0x0C073068u); MACL = r12 * r2;  /* 0C073068 mul.l Rm,Rn */
	IF(0x0C07306Au); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C07306A shar Rn */
	r5 = r9;  /* 0C07306C mov Rm,Rn */
	IF(0x0C07306Eu); r4 = MACL;  /* 0C07306E sts macl,Rn */
	IF(0x0C073070u); MACL = r13 * r0;  /* 0C073070 mul.l Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C073074u, 10);  /* 0C073072 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C073074 add Rm,Rn */
	IF(0x0C073076u); r11 = MACL;  /* 0C073076 sts macl,Rn */
	r13 = 0xC2380D0u; UPD(0x0C07307Au, 3);  /* 0C073078 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C07307A add Rm,Rn */
	r4 = r10;  /* 0C07307C mov Rm,Rn */
	IF(0x0C07307Eu); { u32 t_ = r12; PR = 0x0C073082u; r8 += r13; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073082u); }  /* 0C07307E jsr @Rn */
L_0C073082: BLKS(0x0C073082u);
	W32(r8 + 0x18u, r0); UPD(0x0C073084u, 1);  /* 0C073082 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C073084 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C072FE4u, 4); goto L_0C072FE4; }  /* 0C073086 bra */
L_0C073090: BLKS(0x0C073090u);
	r7 = r9;  /* 0C073090 mov Rm,Rn */
	r7 += 0x2Cu;  /* 0C073092 add #imm,Rn */
	r9 = R32(r9 + 0x20u); UPD(0x0C073096u, 3);  /* 0C073094 mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C073098u, 1);  /* 0C073096 mov.w @Rm,Rn */
	{ IF(0x0C07309Au); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(0x0C07305Cu, 3); goto L_0C07305C; }  /* 0C073098 bra */
}

/* FUN_0c073260 */
void blk_f_0C073260(sh3_t *c)
{
	LOCALS;
	goto L_0C073260;
L_0C0730D0: BLKS(0x0C0730D0u);
	r6 = r5;  /* 0C0730D0 mov Rm,Rn */
	r5 = 0x2A0u; UPD(0x0C0730D4u, 2);  /* 0C0730D2 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0730D4 exts.w Rm,Rn */
	IF(0x0C0730D6u); MACL = r0 * r5;  /* 0C0730D6 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0730DAu, 4);  /* 0C0730D8 mov.l Rm,@-Rn */
	r1 = 0x7u;  /* 0C0730DA mov #imm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C0730DEu, 2);  /* 0C0730DC mov.l @(disp,pc),Rn */
	IF(0x0C0730DEu); r7 = MACL;  /* 0C0730DE sts macl,Rn */
	IF(0x0C0730E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0730E2u, 2);  /* 0C0730E0 sts.l pr,@-Rn */
	r7 += r4;  /* 0C0730E2 add Rm,Rn */
	r2 = R32(r7 + 0x14u); UPD(0x0C0730E6u, 2);  /* 0C0730E4 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C0730E6 add Rm,Rn */
	W32(r7 + 0x14u, r2); UPD(0x0C0730EAu, 2);  /* 0C0730E8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0x8u); UPD(0x0C0730ECu, 1);  /* 0C0730EA mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C0730EC mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0730EE add #imm,Rn */
	T = r2 > r1;  /* 0C0730F0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0730FAu, 6); goto L_0C0730FA; } goto L_0C0730F6; }  /* 0C0730F2 bt/s */
L_0C0730F6: BLKS(0x0C0730F6u);
	r3 += 0x1u;  /* 0C0730F6 add #imm,Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C0730FAu, 3);  /* 0C0730F8 mov.l Rm,@(disp,Rn) */
L_0C0730FA: BLKS(0x0C0730FAu);
	r2 = 0xC3C4048u; UPD(0x0C0730FCu, 1);  /* 0C0730FA mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0730FEu, 1);  /* 0C0730FC mov.l @Rm,Rn */
	r2 = 0xE00000u; UPD(0x0C073100u, 1);  /* 0C0730FE mov.l @(disp,pc),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C073102u, 1);  /* 0C073100 mov.l @(disp,Rm),Rn */
	r2 += r3;  /* 0C073102 add Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C073104 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07310Au, 5); goto L_0C07310A; }  /* 0C073106 bf */
L_0C073108: BLKS(0x0C073108u);
	W32(r7 + 0x14u, r2); UPD(0x0C07310Au, 1);  /* 0C073108 mov.l Rm,@(disp,Rn) */
L_0C07310A: BLKS(0x0C07310Au);
	r1 = 0xC17E284u; UPD(0x0C07310Cu, 1);  /* 0C07310A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07310C add Rm,Rn */
	IF(0x0C07310Eu); r2 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C073110u, 2);  /* 0C07310E mov.w @(r0,Rm),Rn */
	IF(0x0C073110u); MACL = r2 * r5;  /* 0C073110 mul.l Rm,Rn */
	IF(0x0C073112u); r2 = MACL;  /* 0C073112 sts macl,Rn */
	r2 += r4;  /* 0C073114 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C073118u, 5);  /* 0C073116 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C073118 tst Rm,Rn */
	if (T) { UPD(0x0C073128u, 4); goto L_0C073128; }  /* 0C07311A bt */
L_0C07311C: BLKS(0x0C07311Cu);
	r4 = R32(r2 + 0x14u); UPD(0x0C07311Eu, 1);  /* 0C07311C mov.l @(disp,Rm),Rn */
	r1 = 0xFFF00000u; UPD(0x0C073120u, 1);  /* 0C07311E mov.l @(disp,pc),Rn */
	r4 -= r3;  /* 0C073120 sub Rm,Rn */
	r4 += r1;  /* 0C073122 add Rm,Rn */
	T = (s32)r4 >= (s32)r6;  /* 0C073124 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07315Eu, 6); goto L_0C07315E; }  /* 0C073126 bf */
L_0C073128: BLKS(0x0C073128u);
	r5 = R32(r7 + 0x14u); UPD(0x0C07312Au, 1);  /* 0C073128 mov.l @(disp,Rm),Rn */
	r7 = (r5 >> 16) | (r5 << 16);  /* 0C07312A swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C07312C exts.w Rm,Rn */
	r7 = 0x290u; UPD(0x0C073130u, 3);  /* 0C07312E mov.w @(disp,pc),Rn */
	T = r5 == r7;  /* 0C073130 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07314Eu, 4); goto L_0C07314E; } goto L_0C073136; }  /* 0C073132 bt/s */
L_0C073136: BLKS(0x0C073136u);
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C073136 swap.w Rm,Rn */
	r0 = 0xFFFFFE50u; UPD(0x0C07313Au, 3);  /* 0C073138 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C07313A exts.w Rm,Rn */
	r3 += r0;  /* 0C07313C add Rm,Rn */
	r5 -= r7;  /* 0C07313E sub Rm,Rn */
	IF(0x0C073140u); MACL = r6 * r3;  /* 0C073140 mul.l Rm,Rn */
	r7 = 0xC0C2494u; UPD(0x0C073144u, 6);  /* 0C073142 mov.l @(disp,pc),Rn */
	IF(0x0C073144u); { u32 t_ = r7; PR = 0x0C073148u; IF(0x0C073146u); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C073148u); }  /* 0C073144 jsr @Rn */
L_0C073148: BLKS(0x0C073148u);
	T = (s32)r0 > (s32)r6;  /* 0C073148 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07314Eu, 4); goto L_0C07314E; }  /* 0C07314A bf */
L_0C07314C: BLKS(0x0C07314Cu);
	r0 = r6;  /* 0C07314C mov Rm,Rn */
	UPD(0x0C07314Eu, 1);
L_0C07314E: BLKS(0x0C07314Eu);
	r2 = 0xC3C4048u; UPD(0x0C073150u, 1);  /* 0C07314E mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C073152u, 1);  /* 0C073150 mov.l @Rm,Rn */
	r3 = 0x1B00000u; UPD(0x0C073154u, 1);  /* 0C073152 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073154 add Rm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C073156 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07315Eu, 5); goto L_0C07315E; } UPD(0x0C07315Cu, 1); goto L_0C07315C; }  /* 0C073158 bf/s */
L_0C07315C: BLKS(0x0C07315Cu);
	W32(r2, r3); UPD(0x0C07315Eu, 1);  /* 0C07315C mov.l Rm,@Rn */
L_0C07315E: BLKS(0x0C07315Eu);
	r15 = r14;  /* 0C07315E mov Rm,Rn */
	IF(0x0C073160u); PR = R32(r15); r15 += 4; UPD(0x0C073162u, 2);  /* 0C073160 lds.l @Rn+,pr */
	IF(0x0C073162u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073162 rts */
L_0C073190: BLKS(0x0C073190u);
	r6 = r5;  /* 0C073190 mov Rm,Rn */
	r5 = 0x2A0u; UPD(0x0C073194u, 2);  /* 0C073192 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C073194 exts.w Rm,Rn */
	IF(0x0C073196u); MACL = r0 * r5;  /* 0C073196 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07319Au, 4);  /* 0C073198 mov.l Rm,@-Rn */
	r1 = 0x7u;  /* 0C07319A mov #imm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C07319Eu, 2);  /* 0C07319C mov.l @(disp,pc),Rn */
	IF(0x0C07319Eu); r7 = MACL;  /* 0C07319E sts macl,Rn */
	IF(0x0C0731A0u); r15 -= 4; W32(r15, PR); UPD(0x0C0731A2u, 2);  /* 0C0731A0 sts.l pr,@-Rn */
	r7 += r4;  /* 0C0731A2 add Rm,Rn */
	r2 = R32(r7 + 0x14u); UPD(0x0C0731A6u, 2);  /* 0C0731A4 mov.l @(disp,Rm),Rn */
	r2 -= r6;  /* 0C0731A6 sub Rm,Rn */
	W32(r7 + 0x14u, r2); UPD(0x0C0731AAu, 2);  /* 0C0731A8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0x8u); UPD(0x0C0731ACu, 1);  /* 0C0731AA mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C0731AC mov Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C0731AE add #imm,Rn */
	T = r2 > r1;  /* 0C0731B0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0731BAu, 6); goto L_0C0731BA; } goto L_0C0731B6; }  /* 0C0731B2 bt/s */
L_0C0731B6: BLKS(0x0C0731B6u);
	r3 += 0xFFFFFFFFu;  /* 0C0731B6 add #imm,Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C0731BAu, 3);  /* 0C0731B8 mov.l Rm,@(disp,Rn) */
L_0C0731BA: BLKS(0x0C0731BAu);
	r2 = 0xC3C4048u; UPD(0x0C0731BCu, 1);  /* 0C0731BA mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0731BEu, 1);  /* 0C0731BC mov.l @Rm,Rn */
	r2 = 0x100000u; UPD(0x0C0731C0u, 1);  /* 0C0731BE mov.l @(disp,pc),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C0731C2u, 1);  /* 0C0731C0 mov.l @(disp,Rm),Rn */
	r2 += r3;  /* 0C0731C2 add Rm,Rn */
	T = (s32)r1 >= (s32)r2;  /* 0C0731C4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0731CAu, 5); goto L_0C0731CA; }  /* 0C0731C6 bt */
L_0C0731C8: BLKS(0x0C0731C8u);
	W32(r7 + 0x14u, r2); UPD(0x0C0731CAu, 1);  /* 0C0731C8 mov.l Rm,@(disp,Rn) */
L_0C0731CA: BLKS(0x0C0731CAu);
	r1 = 0xC17E284u; UPD(0x0C0731CCu, 1);  /* 0C0731CA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0731CC add Rm,Rn */
	IF(0x0C0731CEu); r2 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C0731D0u, 2);  /* 0C0731CE mov.w @(r0,Rm),Rn */
	IF(0x0C0731D0u); MACL = r2 * r5;  /* 0C0731D0 mul.l Rm,Rn */
	IF(0x0C0731D2u); r2 = MACL;  /* 0C0731D2 sts macl,Rn */
	r2 += r4;  /* 0C0731D4 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0731D8u, 5);  /* 0C0731D6 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0731D8 tst Rm,Rn */
	if (T) { UPD(0x0C0731ECu, 4); goto L_0C0731EC; }  /* 0C0731DA bt */
L_0C0731DC: BLKS(0x0C0731DCu);
	r0 = R32(r2 + 0x14u); UPD(0x0C0731DEu, 1);  /* 0C0731DC mov.l @(disp,Rm),Rn */
	r5 = r3;  /* 0C0731DE mov Rm,Rn */
	r5 -= r0;  /* 0C0731E0 sub Rm,Rn */
	r1 = 0xE00000u; UPD(0x0C0731E4u, 3);  /* 0C0731E2 mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C0731E4 mov Rm,Rn */
	r4 += r1;  /* 0C0731E6 add Rm,Rn */
	T = (s32)r4 >= (s32)r6;  /* 0C0731E8 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C073224u, 6); goto L_0C073224; }  /* 0C0731EA bf */
L_0C0731EC: BLKS(0x0C0731ECu);
	r2 = R32(r7 + 0x14u); UPD(0x0C0731EEu, 1);  /* 0C0731EC mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0731EE swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C0731F0 exts.w Rm,Rn */
	r7 = 0x170u; UPD(0x0C0731F4u, 3);  /* 0C0731F2 mov.w @(disp,pc),Rn */
	T = r5 == r7;  /* 0C0731F4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073212u, 4); goto L_0C073212; } goto L_0C0731FA; }  /* 0C0731F6 bt/s */
L_0C0731FA: BLKS(0x0C0731FAu);
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C0731FA swap.w Rm,Rn */
	r4 = 0xFFFFFEA0u; UPD(0x0C0731FEu, 3);  /* 0C0731FC mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0731FE exts.w Rm,Rn */
	r3 += r4;  /* 0C073200 add Rm,Rn */
	r5 -= r7;  /* 0C073202 sub Rm,Rn */
	IF(0x0C073204u); MACL = r6 * r3;  /* 0C073204 mul.l Rm,Rn */
	r7 = 0xC0C2494u; UPD(0x0C073208u, 6);  /* 0C073206 mov.l @(disp,pc),Rn */
	IF(0x0C073208u); { u32 t_ = r7; PR = 0x0C07320Cu; IF(0x0C07320Au); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C07320Cu); }  /* 0C073208 jsr @Rn */
L_0C07320C: BLKS(0x0C07320Cu);
	T = (s32)r0 > (s32)r6;  /* 0C07320C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C073212u, 4); goto L_0C073212; }  /* 0C07320E bf */
L_0C073210: BLKS(0x0C073210u);
	r0 = r6;  /* 0C073210 mov Rm,Rn */
	UPD(0x0C073212u, 1);
L_0C073212: BLKS(0x0C073212u);
	r3 = 0xC3C4048u; UPD(0x0C073214u, 1);  /* 0C073212 mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C073216u, 1);  /* 0C073214 mov.l @Rm,Rn */
	r6 = 0x15FFFFFu; UPD(0x0C073218u, 1);  /* 0C073216 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C073218 sub Rm,Rn */
	T = (s32)r5 > (s32)r6;  /* 0C07321A cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073224u, 5); goto L_0C073224; } UPD(0x0C073220u, 1); goto L_0C073220; }  /* 0C07321C bt/s */
L_0C073220: BLKS(0x0C073220u);
	r7 = 0x1600000u; UPD(0x0C073222u, 1);  /* 0C073220 mov.l @(disp,pc),Rn */
	W32(r3, r7); UPD(0x0C073224u, 1);  /* 0C073222 mov.l Rm,@Rn */
L_0C073224: BLKS(0x0C073224u);
	r15 = r14;  /* 0C073224 mov Rm,Rn */
	IF(0x0C073226u); PR = R32(r15); r15 += 4; UPD(0x0C073228u, 2);  /* 0C073226 lds.l @Rn+,pr */
	IF(0x0C073228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073228 rts */
L_0C073260: BLKS(0x0C073260u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073262u, 1);  /* 0C073260 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073264u, 1);  /* 0C073262 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C073264 exts.w Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C073268u, 2);  /* 0C073266 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07326Au, 1);  /* 0C073268 mov.l Rm,@-Rn */
	IF(0x0C07326Au); MACL = r8 * r0;  /* 0C07326A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07326Eu, 3);  /* 0C07326C mov.l Rm,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C073270u, 1);  /* 0C07326E mov.l @(disp,pc),Rn */
	IF(0x0C073270u); r0 = MACL;  /* 0C073270 sts macl,Rn */
	IF(0x0C073272u); r15 -= 4; W32(r15, PR); UPD(0x0C073274u, 2);  /* 0C073272 sts.l pr,@-Rn */
	r0 += r2;  /* 0C073274 add Rm,Rn */
	r1 = 0x270u; UPD(0x0C073278u, 2);  /* 0C073276 mov.w @(disp,pc),Rn */
	r5 = R32(r0 + 0x18u); UPD(0x0C07327Au, 1);  /* 0C073278 mov.l @(disp,Rm),Rn */
	r1 += r0;  /* 0C07327A add Rm,Rn */
	r9 = R32(r0 + 0x1Cu); UPD(0x0C07327Eu, 2);  /* 0C07327C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C073280u, 1);  /* 0C07327E mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C073280 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07328Au, 4); goto L_0C07328A; } goto L_0C073286; }  /* 0C073282 bf/s */
L_0C073286: BLKS(0x0C073286u);
	{ r0 = r1; /* slot mov Rm,Rn */ UPD(0x0C073490u, 4); goto L_0C073490; }  /* 0C073286 bra */
L_0C07328A: BLKS(0x0C07328Au);
	r0 = r1;  /* 0C07328A mov Rm,Rn */
	r0 += 0x1u;  /* 0C07328C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C073290u, 3);  /* 0C07328E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C073290 tst Rm,Rn */
	if (T) { UPD(0x0C073298u, 4); goto L_0C073298; }  /* 0C073292 bt */
L_0C073294: BLKS(0x0C073294u);
	r1 += 0xFFFFFFFFu;  /* 0C073294 add #imm,Rn */
	UPD(0x0C073296u, 1);
L_0C073296: BLKS(0x0C073296u);
	W8(r0, r1); UPD(0x0C073298u, 1);  /* 0C073296 mov.b Rm,@Rn */
L_0C073298: BLKS(0x0C073298u);
	r10 = 0x2A0u; UPD(0x0C07329Au, 1);  /* 0C073298 mov.w @(disp,pc),Rn */
	IF(0x0C07329Au); MACL = r8 * r10;  /* 0C07329A mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C07329Eu, 3);  /* 0C07329C mov.l @(disp,pc),Rn */
	IF(0x0C07329Eu); r4 = MACL;  /* 0C07329E sts macl,Rn */
	r6 = 0x271u; UPD(0x0C0732A2u, 2);  /* 0C0732A0 mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C0732A2 add Rm,Rn */
	r0 = r4;  /* 0C0732A4 mov Rm,Rn */
	IF(0x0C0732A6u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0732A8u, 3);  /* 0C0732A6 mov.b @(r0,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C0732A8 extu.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0732AA tst Rm,Rn */
	if (T) { UPD(0x0C0732D8u, 5); goto L_0C0732D8; }  /* 0C0732AC bt */
L_0C0732AE: BLKS(0x0C0732AEu);
	IF(0x0C0732AEu); MACL = r5 * r6;  /* 0C0732AE mul.l Rm,Rn */
	r0 = 0x66666667u; UPD(0x0C0732B2u, 3);  /* 0C0732B0 mov.l @(disp,pc),Rn */
	IF(0x0C0732B2u); r10 = MACL;  /* 0C0732B2 sts macl,Rn */
	{ s64 r_ = (s64)(s32)r10 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0732B4 dmuls.l Rm,Rn */
	IF(0x0C0732B6u); MACL = r9 * r6;  /* 0C0732B6 mul.l Rm,Rn */
	IF(0x0C0732B8u); r7 = MACH;  /* 0C0732B8 sts mach,Rn */
	IF(0x0C0732BAu); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C0732BA shar Rn */
	IF(0x0C0732BCu); r1 = MACL;  /* 0C0732BC sts macl,Rn */
	{ s64 r_ = (s64)(s32)r1 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0732BE dmuls.l Rm,Rn */
	IF(0x0C0732C0u); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C0732C0 shar Rn */
	IF(0x0C0732C2u); T = r10 >> 31; r10 <<= 1;  /* 0C0732C2 shll Rn */
	{ u32 a_ = r10, t_ = a_ - r10, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r10 = r_; }  /* 0C0732C4 subc Rm,Rn */
	IF(0x0C0732C6u); r2 = MACH;  /* 0C0732C6 sts mach,Rn */
	IF(0x0C0732C8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0732C8 shar Rn */
	IF(0x0C0732CAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0732CA shar Rn */
	IF(0x0C0732CCu); T = r1 >> 31; r1 <<= 1;  /* 0C0732CC shll Rn */
	{ u32 a_ = r1, t_ = a_ - r1, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0732CE subc Rm,Rn */
	r7 -= r10;  /* 0C0732D0 sub Rm,Rn */
	r2 -= r1;  /* 0C0732D2 sub Rm,Rn */
	r5 -= r7;  /* 0C0732D4 sub Rm,Rn */
	r9 -= r2;  /* 0C0732D6 sub Rm,Rn */
	UPD(0x0C0732D8u, 22);
L_0C0732D8: BLKS(0x0C0732D8u);
	r0 = 0x24Cu; UPD(0x0C0732DAu, 1);  /* 0C0732D8 mov.w @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C0732DA mov #imm,Rn */
	IF(0x0C0732DCu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0732DEu, 2);  /* 0C0732DC mov.w @(r0,Rm),Rn */
	r2 &= r3;  /* 0C0732DE and Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0732E0 add #imm,Rn */
	r4 = 0x9u;  /* 0C0732E2 mov #imm,Rn */
	T = r2 > r4;  /* 0C0732E4 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0732ECu, 7); goto L_0C0732EC; }  /* 0C0732E6 bf */
L_0C0732E8: BLKS(0x0C0732E8u);
	{ IF(0x0C0732EAu); ; /* slot nop */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C0732E8 bra */
L_0C0732EC: BLKS(0x0C0732ECu);
	r0 = 0xC073308u;  /* 0C0732EC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0732EE add Rm,Rn */
	IF(0x0C0732F0u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0732F2u, 3);  /* 0C0732F0 mov.w @(r0,Rm),Rn */
	IF(0x0C0732F2u); { u32 tv_ = (r6 + 0x0C0732F6u); u32 t_ = PHYS(tv_); IF(0x0C0732F4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C073320u: goto L_0C073320; case 0x0C073350u: goto L_0C073350; case 0x0C073370u: goto L_0C073370; case 0x0C073390u: goto L_0C073390; case 0x0C0733C0u: goto L_0C0733C0; case 0x0C0733F0u: goto L_0C0733F0; case 0x0C073420u: goto L_0C073420; case 0x0C073430u: goto L_0C073430; case 0x0C073460u: goto L_0C073460; default: JUMPD(tv_); } }  /* 0C0732F2 braf Rn */
L_0C073320: BLKS(0x0C073320u);
	r2 = 0x2A0u; UPD(0x0C073322u, 1);  /* 0C073320 mov.w @(disp,pc),Rn */
	IF(0x0C073322u); MACL = r8 * r2;  /* 0C073322 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C073326u, 3);  /* 0C073324 mov.l @(disp,pc),Rn */
	IF(0x0C073326u); r2 = MACL;  /* 0C073326 sts macl,Rn */
	r2 += r9;  /* 0C073328 add Rm,Rn */
	r8 = R32(r2 + 0x10u); UPD(0x0C07332Cu, 3);  /* 0C07332A mov.l @(disp,Rm),Rn */
	r3 = 0x1300000u; UPD(0x0C07332Eu, 1);  /* 0C07332C mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07332E add Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C073330 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2 + 0x10u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073338u, 5); goto L_0C073338; } UPD(0x0C073336u, 1); goto L_0C073336; }  /* 0C073332 bf/s */
L_0C073336: BLKS(0x0C073336u);
	W32(r2 + 0x10u, r3); UPD(0x0C073338u, 1);  /* 0C073336 mov.l Rm,@(disp,Rn) */
L_0C073338: BLKS(0x0C073338u);
	r15 = r14;  /* 0C073338 mov Rm,Rn */
	IF(0x0C07333Au); PR = R32(r15); r15 += 4; UPD(0x0C07333Cu, 2);  /* 0C07333A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07333Eu, 1);  /* 0C07333C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073340u, 1);  /* 0C07333E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073342u, 1);  /* 0C073340 mov.l @Rm+,Rn */
	IF(0x0C073342u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073342 rts */
L_0C073350: BLKS(0x0C073350u);
	r10 = 0x2A0u; UPD(0x0C073352u, 1);  /* 0C073350 mov.w @(disp,pc),Rn */
	IF(0x0C073352u); MACL = r8 * r10;  /* 0C073352 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C073356u, 3);  /* 0C073354 mov.l @(disp,pc),Rn */
	IF(0x0C073356u); r3 = MACL;  /* 0C073356 sts macl,Rn */
	r3 += r7;  /* 0C073358 add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C07335Cu, 3);  /* 0C07335A mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C07335C sub Rm,Rn */
	r5 = 0xFFFFFu; UPD(0x0C073360u, 2);  /* 0C07335E mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r5;  /* 0C073360 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073338u, 4); goto L_0C073338; } UPD(0x0C073366u, 1); goto L_0C073366; }  /* 0C073362 bt/s */
L_0C073366: BLKS(0x0C073366u);
	r4 = 0x100000u; UPD(0x0C073368u, 1);  /* 0C073366 mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C073338u, 3); goto L_0C073338; }  /* 0C073368 bra */
L_0C073370: BLKS(0x0C073370u);
	r4 = r8;  /* 0C073370 mov Rm,Rn */
	r5 = r9;  /* 0C073372 mov Rm,Rn */
	UPD(0x0C073374u, 2);
L_0C073374: BLKS(0x0C073374u);
	r1 = 0xC073190u; UPD(0x0C073376u, 1);  /* 0C073374 mov.l @(disp,pc),Rn */
L_0C073376: BLKS(0x0C073376u);
	r15 = r14;  /* 0C073376 mov Rm,Rn */
	IF(0x0C073378u); PR = R32(r15); r15 += 4; UPD(0x0C07337Au, 2);  /* 0C073378 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07337Cu, 1);  /* 0C07337A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07337Eu, 1);  /* 0C07337C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073380u, 1);  /* 0C07337E mov.l @Rm+,Rn */
	IF(0x0C073380u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0730D0u: goto L_0C0730D0; case 0x0C073190u: goto L_0C073190; default: JUMPD(tv_); } }  /* 0C073380 jmp @Rn */
L_0C073390: BLKS(0x0C073390u);
	r10 = 0xC069B20u; UPD(0x0C073392u, 1);  /* 0C073390 mov.l @(disp,pc),Rn */
	IF(0x0C073392u); { u32 t_ = r10; PR = 0x0C073396u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073396u); }  /* 0C073392 jsr @Rn */
L_0C073396: BLKS(0x0C073396u);
	r4 = 0x2A0u; UPD(0x0C073398u, 1);  /* 0C073396 mov.w @(disp,pc),Rn */
	IF(0x0C073398u); MACL = r8 * r4;  /* 0C073398 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C07339Cu, 3);  /* 0C07339A mov.l @(disp,pc),Rn */
	IF(0x0C07339Cu); r2 = MACL;  /* 0C07339C sts macl,Rn */
	r2 += r7;  /* 0C07339E add Rm,Rn */
	r5 = R32(r2 + 0x10u); UPD(0x0C0733A2u, 3);  /* 0C0733A0 mov.l @(disp,Rm),Rn */
	r3 = 0x1300000u; UPD(0x0C0733A4u, 1);  /* 0C0733A2 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C0733A4 add Rm,Rn */
	T = (s32)r5 > (s32)r3;  /* 0C0733A6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0733AEu, 5); goto L_0C0733AE; } UPD(0x0C0733ACu, 1); goto L_0C0733AC; }  /* 0C0733A8 bf/s */
L_0C0733AC: BLKS(0x0C0733ACu);
	W32(r2 + 0x10u, r3); UPD(0x0C0733AEu, 1);  /* 0C0733AC mov.l Rm,@(disp,Rn) */
L_0C0733AE: BLKS(0x0C0733AEu);
	r4 = 0x40u;  /* 0C0733AE mov #imm,Rn */
	IF(0x0C0733B0u); { u32 t_ = r10; PR = 0x0C0733B4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0733B4u); }  /* 0C0733B0 jsr @Rn */
L_0C0733B4: BLKS(0x0C0733B4u);
	r4 = r8;  /* 0C0733B4 mov Rm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C073374u, 4); goto L_0C073374; }  /* 0C0733B6 bra */
L_0C0733C0: BLKS(0x0C0733C0u);
	r10 = 0xC069B20u; UPD(0x0C0733C2u, 1);  /* 0C0733C0 mov.l @(disp,pc),Rn */
	IF(0x0C0733C2u); { u32 t_ = r10; PR = 0x0C0733C6u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0733C6u); }  /* 0C0733C2 jsr @Rn */
L_0C0733C6: BLKS(0x0C0733C6u);
	r2 = 0x2A0u; UPD(0x0C0733C8u, 1);  /* 0C0733C6 mov.w @(disp,pc),Rn */
	IF(0x0C0733C8u); MACL = r8 * r2;  /* 0C0733C8 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C0733CCu, 3);  /* 0C0733CA mov.l @(disp,pc),Rn */
	IF(0x0C0733CCu); r3 = MACL;  /* 0C0733CC sts macl,Rn */
	r3 += r6;  /* 0C0733CE add Rm,Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C0733D2u, 3);  /* 0C0733D0 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFu; UPD(0x0C0733D4u, 1);  /* 0C0733D2 mov.l @(disp,pc),Rn */
	r4 -= r0;  /* 0C0733D4 sub Rm,Rn */
	T = (s32)r4 > (s32)r7;  /* 0C0733D6 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0733AEu, 5); goto L_0C0733AE; } UPD(0x0C0733DCu, 1); goto L_0C0733DC; }  /* 0C0733D8 bt/s */
L_0C0733DC: BLKS(0x0C0733DCu);
	r0 = 0x100000u; UPD(0x0C0733DEu, 1);  /* 0C0733DC mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0733AEu, 3); goto L_0C0733AE; }  /* 0C0733DE bra */
L_0C0733F0: BLKS(0x0C0733F0u);
	r10 = 0x2A0u; UPD(0x0C0733F2u, 1);  /* 0C0733F0 mov.w @(disp,pc),Rn */
	IF(0x0C0733F2u); MACL = r8 * r10;  /* 0C0733F2 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C0733F6u, 3);  /* 0C0733F4 mov.l @(disp,pc),Rn */
	IF(0x0C0733F6u); r3 = MACL;  /* 0C0733F6 sts macl,Rn */
	r3 += r9;  /* 0C0733F8 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0733FCu, 3);  /* 0C0733FA mov.l @(disp,Rm),Rn */
	r8 = 0x9u;  /* 0C0733FC mov #imm,Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0733FE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C073338u, 5); goto L_0C073338; }  /* 0C073400 bt */
L_0C073402: BLKS(0x0C073402u);
	r5 = 0x4u;  /* 0C073402 mov #imm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C073404 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C073410u, 5); goto L_0C073410; }  /* 0C073406 bt */
L_0C073408: BLKS(0x0C073408u);
	r2 += 0x1u;  /* 0C073408 add #imm,Rn */
	UPD(0x0C07340Au, 1);
L_0C07340A: BLKS(0x0C07340Au);
	{ W32(r3 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C073338u, 3); goto L_0C073338; }  /* 0C07340A bra */
L_0C073410: BLKS(0x0C073410u);
	r7 = 0x5u;  /* 0C073410 mov #imm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C073412 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C073338u, 5); goto L_0C073338; }  /* 0C073414 bf */
L_0C073416: BLKS(0x0C073416u);
	r2 += 0xFFFFFFFFu;  /* 0C073416 add #imm,Rn */
	{ IF(0x0C07341Au); ; /* slot nop */ UPD(0x0C07340Au, 4); goto L_0C07340A; }  /* 0C073418 bra */
L_0C073420: BLKS(0x0C073420u);
	r4 = r8;  /* 0C073420 mov Rm,Rn */
	r5 = r9;  /* 0C073422 mov Rm,Rn */
	UPD(0x0C073424u, 2);
L_0C073424: BLKS(0x0C073424u);
	r1 = 0xC0730D0u; UPD(0x0C073426u, 1);  /* 0C073424 mov.l @(disp,pc),Rn */
	{ IF(0x0C073428u); ; /* slot nop */ UPD(0x0C073376u, 3); goto L_0C073376; }  /* 0C073426 bra */
L_0C073430: BLKS(0x0C073430u);
	r10 = 0xC069B20u; UPD(0x0C073432u, 1);  /* 0C073430 mov.l @(disp,pc),Rn */
	IF(0x0C073432u); { u32 t_ = r10; PR = 0x0C073436u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073436u); }  /* 0C073432 jsr @Rn */
L_0C073436: BLKS(0x0C073436u);
	r2 = 0x2A0u; UPD(0x0C073438u, 1);  /* 0C073436 mov.w @(disp,pc),Rn */
	IF(0x0C073438u); MACL = r8 * r2;  /* 0C073438 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07343Cu, 3);  /* 0C07343A mov.l @(disp,pc),Rn */
	IF(0x0C07343Cu); r2 = MACL;  /* 0C07343C sts macl,Rn */
	r2 += r3;  /* 0C07343E add Rm,Rn */
	r6 = R32(r2 + 0x10u); UPD(0x0C073442u, 3);  /* 0C073440 mov.l @(disp,Rm),Rn */
	r3 = 0x1300000u; UPD(0x0C073444u, 1);  /* 0C073442 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073444 add Rm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C073446 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2 + 0x10u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07344Eu, 5); goto L_0C07344E; } UPD(0x0C07344Cu, 1); goto L_0C07344C; }  /* 0C073448 bf/s */
L_0C07344C: BLKS(0x0C07344Cu);
	W32(r2 + 0x10u, r3); UPD(0x0C07344Eu, 1);  /* 0C07344C mov.l Rm,@(disp,Rn) */
L_0C07344E: BLKS(0x0C07344Eu);
	r4 = 0x40u;  /* 0C07344E mov #imm,Rn */
	IF(0x0C073450u); { u32 t_ = r10; PR = 0x0C073454u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073454u); }  /* 0C073450 jsr @Rn */
L_0C073454: BLKS(0x0C073454u);
	r4 = r8;  /* 0C073454 mov Rm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C073424u, 4); goto L_0C073424; }  /* 0C073456 bra */
L_0C073460: BLKS(0x0C073460u);
	r10 = 0xC069B20u; UPD(0x0C073462u, 1);  /* 0C073460 mov.l @(disp,pc),Rn */
	IF(0x0C073462u); { u32 t_ = r10; PR = 0x0C073466u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073466u); }  /* 0C073462 jsr @Rn */
L_0C073466: BLKS(0x0C073466u);
	r3 = 0x2A0u; UPD(0x0C073468u, 1);  /* 0C073466 mov.w @(disp,pc),Rn */
	IF(0x0C073468u); MACL = r8 * r3;  /* 0C073468 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C07346Cu, 3);  /* 0C07346A mov.l @(disp,pc),Rn */
	IF(0x0C07346Cu); r3 = MACL;  /* 0C07346C sts macl,Rn */
	r3 += r2;  /* 0C07346E add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C073472u, 3);  /* 0C073470 mov.l @(disp,Rm),Rn */
	r6 -= r0;  /* 0C073472 sub Rm,Rn */
	r0 = 0xFFFFFu; UPD(0x0C073476u, 2);  /* 0C073474 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r0;  /* 0C073476 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x10u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07344Eu, 4); goto L_0C07344E; } UPD(0x0C07347Cu, 1); goto L_0C07347C; }  /* 0C073478 bt/s */
L_0C07347C: BLKS(0x0C07347Cu);
	r5 = 0x100000u; UPD(0x0C07347Eu, 1);  /* 0C07347C mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07344Eu, 3); goto L_0C07344E; }  /* 0C07347E bra */
L_0C073490: BLKS(0x0C073490u);
	r0 += 0x1u;  /* 0C073490 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C073494u, 2);  /* 0C073492 mov.b @Rm,Rn */
	r4 = 0x3u;  /* 0C073494 mov #imm,Rn */
	T = r3 > r4;  /* 0C073496 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07349Eu, 5); goto L_0C07349E; }  /* 0C073498 bf */
L_0C07349A: BLKS(0x0C07349Au);
	{ IF(0x0C07349Cu); ; /* slot nop */ UPD(0x0C073298u, 3); goto L_0C073298; }  /* 0C07349A bra */
L_0C07349E: BLKS(0x0C07349Eu);
	r1 = r3;  /* 0C07349E mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C073296u, 4); goto L_0C073296; }  /* 0C0734A0 bra */
}

/* FUN_0c0734d0 */
void blk_f_0C0734D0(sh3_t *c)
{
	LOCALS;
L_0C0734D0: BLKS(0x0C0734D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0734D2u, 1);  /* 0C0734D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0734D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0734D6u, 2);  /* 0C0734D4 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C0734D6 mov #imm,Rn */
	r3 = 0x2A0u; UPD(0x0C0734DAu, 2);  /* 0C0734D8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0734DCu, 1);  /* 0C0734DA mov.l Rm,@-Rn */
	IF(0x0C0734DCu); MACL = r4 * r3;  /* 0C0734DC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0734E0u, 3);  /* 0C0734DE mov.l Rm,@-Rn */
	r0 = 0xC29D1D8u; UPD(0x0C0734E2u, 1);  /* 0C0734E0 mov.l @(disp,pc),Rn */
	IF(0x0C0734E2u); r3 = MACL;  /* 0C0734E2 sts macl,Rn */
	IF(0x0C0734E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0734E6u, 2);  /* 0C0734E4 sts.l pr,@-Rn */
	r3 += r0;  /* 0C0734E6 add Rm,Rn */
	r5 = 0x25Fu; UPD(0x0C0734EAu, 2);  /* 0C0734E8 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0734EA mov Rm,Rn */
	IF(0x0C0734ECu); W8(r0 + r5, r6); UPD(0x0C0734EEu, 2);  /* 0C0734EC mov.b Rm,@(r0,Rn) */
	r2 = 0xC3C86ACu; UPD(0x0C0734F0u, 1);  /* 0C0734EE mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0734F2u, 1);  /* 0C0734F0 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0734F2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073570u, 4); goto L_0C073570; } goto L_0C0734F8; }  /* 0C0734F4 bf/s */
L_0C0734F8: BLKS(0x0C0734F8u);
	r0 = 0x24Cu; UPD(0x0C0734FAu, 2);  /* 0C0734F8 mov.w @(disp,pc),Rn */
	r1 = 0x10u;  /* 0C0734FA mov #imm,Rn */
	IF(0x0C0734FCu); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0734FEu, 2);  /* 0C0734FC mov.w @(r0,Rm),Rn */
	r1 &= r7;  /* 0C0734FE and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C073500 tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0735E0u, 5); goto L_0C0735E0; } goto L_0C073506; }  /* 0C073502 bt/s */
L_0C073506: BLKS(0x0C073506u);
	r0 = 0x270u; UPD(0x0C073508u, 2);  /* 0C073506 mov.w @(disp,pc),Rn */
	IF(0x0C073508u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07350Au, 1);  /* 0C073508 mov.b @(r0,Rm),Rn */
	T = r2 > r8;  /* 0C07350A cmp/hi Rm,Rn */
	{ u32 c_ = T; r9 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073514u, 4); goto L_0C073514; } goto L_0C073510; }  /* 0C07350C bt/s */
L_0C073510: BLKS(0x0C073510u);
	r9 += 0x1u;  /* 0C073510 add #imm,Rn */
	IF(0x0C073512u); W8(r0 + r3, r9); UPD(0x0C073514u, 3);  /* 0C073512 mov.b Rm,@(r0,Rn) */
L_0C073514: BLKS(0x0C073514u);
	r5 = 0x2A0u; UPD(0x0C073516u, 1);  /* 0C073514 mov.w @(disp,pc),Rn */
	r10 = 0x7u;  /* 0C073516 mov #imm,Rn */
	IF(0x0C073518u); MACL = r4 * r5;  /* 0C073518 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C07351Cu, 4);  /* 0C07351A mov.l @(disp,pc),Rn */
	IF(0x0C07351Cu); r3 = MACL;  /* 0C07351C sts macl,Rn */
	r0 = 0x270u; UPD(0x0C073520u, 2);  /* 0C07351E mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C073520 add Rm,Rn */
	IF(0x0C073522u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C073524u, 2);  /* 0C073522 mov.b @(r0,Rm),Rn */
	T = r1 > r10;  /* 0C073524 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFF2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C073534u, 4); goto L_0C073534; } goto L_0C07352A; }  /* 0C073526 bt/s */
L_0C07352A: BLKS(0x0C07352Au);
	IF(0x0C07352Au); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07352Cu, 2);  /* 0C07352A mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C07352C tst Rm,Rn */
	if (T) { UPD(0x0C073534u, 4); goto L_0C073534; }  /* 0C07352E bt */
L_0C073530: BLKS(0x0C073530u);
	r1 += 0xFFFFFFFFu;  /* 0C073530 add #imm,Rn */
	IF(0x0C073532u); W8(r0 + r3, r1); UPD(0x0C073534u, 2);  /* 0C073532 mov.b Rm,@(r0,Rn) */
L_0C073534: BLKS(0x0C073534u);
	r0 = 0x2A0u; UPD(0x0C073536u, 1);  /* 0C073534 mov.w @(disp,pc),Rn */
	IF(0x0C073536u); MACL = r4 * r0;  /* 0C073536 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C07353Au, 3);  /* 0C073538 mov.l @(disp,pc),Rn */
	IF(0x0C07353Au); r3 = MACL;  /* 0C07353A sts macl,Rn */
	r1 = 0x24Cu; UPD(0x0C07353Eu, 2);  /* 0C07353C mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C07353E add Rm,Rn */
	r1 += r3;  /* 0C073540 add Rm,Rn */
	r1 += 0x2u;  /* 0C073542 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C073546u, 4);  /* 0C073544 mov.w @Rm,Rn */
	r0 &= 0x10u;  /* 0C073546 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C073548 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C073560u, 5); goto L_0C073560; } goto L_0C07354E; }  /* 0C07354A bf/s */
L_0C07354E: BLKS(0x0C07354Eu);
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C073550u, 2);  /* 0C07354E mov.w @Rm,Rn */
	r0 &= 0x40u;  /* 0C073550 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C073552 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0735A0u, 5); goto L_0C0735A0; } goto L_0C073558; }  /* 0C073554 bt/s */
L_0C073558: BLKS(0x0C073558u);
	r0 = 0x270u; UPD(0x0C07355Au, 2);  /* 0C073558 mov.w @(disp,pc),Rn */
	IF(0x0C07355Au); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07355Cu, 1);  /* 0C07355A mov.b @(r0,Rm),Rn */
	T = r8 > r7;  /* 0C07355C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0735A0u, 4); goto L_0C0735A0; }  /* 0C07355E bt */
L_0C073560: BLKS(0x0C073560u);
	r9 = 0x260u; UPD(0x0C073562u, 1);  /* 0C073560 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C073562 add Rm,Rn */
	r10 = r9;  /* 0C073564 mov Rm,Rn */
	r10 += 0x2u;  /* 0C073566 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07356Au, 4);  /* 0C073568 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C07356A extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07356C tst Rm,Rn */
	if (T) { UPD(0x0C073580u, 5); goto L_0C073580; }  /* 0C07356E bt */
L_0C073570: BLKS(0x0C073570u);
	r15 = r14;  /* 0C073570 mov Rm,Rn */
	IF(0x0C073572u); PR = R32(r15); r15 += 4; UPD(0x0C073574u, 2);  /* 0C073572 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C073576u, 1);  /* 0C073574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073578u, 1);  /* 0C073576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07357Au, 1);  /* 0C073578 mov.l @Rm+,Rn */
	IF(0x0C07357Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07357A rts */
L_0C073580: BLKS(0x0C073580u);
	r0 = r3;  /* 0C073580 mov Rm,Rn */
	r3 = 0xC073830u; UPD(0x0C073584u, 2);  /* 0C073582 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C073584 mov #imm,Rn */
	r5 = 0x25Fu; UPD(0x0C073588u, 2);  /* 0C073586 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C073588 add #imm,Rn */
	IF(0x0C07358Au); { u32 t_ = r3; PR = 0x0C07358Eu; IF(0x0C07358Cu); W8(r0 + r5, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C073830, 0x0C073830u, 0x0C07358Eu); }  /* 0C07358A jsr @Rn */
L_0C07358E: BLKS(0x0C07358Eu);
	W8(r9, r8); UPD(0x0C073590u, 1);  /* 0C07358E mov.b Rm,@Rn */
	r4 = 0x2u;  /* 0C073590 mov #imm,Rn */
	{ u32 v_ = r8; r9 -= 1; W8(r9, v_); } UPD(0x0C073594u, 2);  /* 0C073592 mov.b Rm,@-Rn */
	{ W8(r10, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C073570u, 3); goto L_0C073570; }  /* 0C073594 bra */
L_0C0735A0: BLKS(0x0C0735A0u);
	r10 = 0x2A0u; UPD(0x0C0735A2u, 1);  /* 0C0735A0 mov.w @(disp,pc),Rn */
	IF(0x0C0735A2u); MACL = r4 * r10;  /* 0C0735A2 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C0735A6u, 3);  /* 0C0735A4 mov.l @(disp,pc),Rn */
	IF(0x0C0735A6u); r2 = MACL;  /* 0C0735A6 sts macl,Rn */
	r0 = 0x270u; UPD(0x0C0735AAu, 2);  /* 0C0735A8 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0735AA add Rm,Rn */
	IF(0x0C0735ACu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0735AEu, 2);  /* 0C0735AC mov.b @(r0,Rm),Rn */
	T = r0 == 0x8u;  /* 0C0735AE cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C073570u, 4); goto L_0C073570; }  /* 0C0735B0 bf */
L_0C0735B2: BLKS(0x0C0735B2u);
	r0 = 0x24Cu; UPD(0x0C0735B4u, 1);  /* 0C0735B2 mov.w @(disp,pc),Rn */
	IF(0x0C0735B4u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0735B6u, 1);  /* 0C0735B4 mov.w @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C0735B6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0735B8 tst Rm,Rn */
	if (T) { UPD(0x0C073570u, 5); goto L_0C073570; }  /* 0C0735BA bt */
L_0C0735BC: BLKS(0x0C0735BCu);
	r3 = 0x1u;  /* 0C0735BC mov #imm,Rn */
	r8 = 0x261u; UPD(0x0C0735C0u, 2);  /* 0C0735BE mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C0735C0 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C0735C4u, 2);  /* 0C0735C2 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0735C4 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0735C6 extu.b Rm,Rn */
	T = r0 > r3;  /* 0C0735C8 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r8, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C073570u, 6); goto L_0C073570; } UPD(0x0C0735CEu, 1); goto L_0C0735CE; }  /* 0C0735CA bf/s */
L_0C0735CE: BLKS(0x0C0735CEu);
	r5 = 0x25Fu; UPD(0x0C0735D0u, 1);  /* 0C0735CE mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C0735D0 mov Rm,Rn */
	IF(0x0C0735D2u); W8(r0 + r5, r3); UPD(0x0C0735D4u, 2);  /* 0C0735D2 mov.b Rm,@(r0,Rn) */
	r3 = 0xC073830u; UPD(0x0C0735D6u, 1);  /* 0C0735D4 mov.l @(disp,pc),Rn */
	IF(0x0C0735D6u); { u32 t_ = r3; PR = 0x0C0735DAu; IF(0x0C0735D8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C073830, 0x0C073830u, 0x0C0735DAu); }  /* 0C0735D6 jsr @Rn */
L_0C0735DA: BLKS(0x0C0735DAu);
	r2 = 0x0u;  /* 0C0735DA mov #imm,Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C073570u, 4); goto L_0C073570; }  /* 0C0735DC bra */
L_0C0735E0: BLKS(0x0C0735E0u);
	r0 = 0x270u; UPD(0x0C0735E2u, 1);  /* 0C0735E0 mov.w @(disp,pc),Rn */
	{ IF(0x0C0735E4u); W8(r0 + r3, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C073514u, 3); goto L_0C073514; }  /* 0C0735E2 bra */
}

/* FUN_0c073600 */
void blk_f_0C073600(sh3_t *c)
{
	LOCALS;
L_0C073600: BLKS(0x0C073600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073602u, 1);  /* 0C073600 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073604u, 1);  /* 0C073602 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C073606u, 1);  /* 0C073604 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C073606 exts.w Rm,Rn */
	IF(0x0C073608u); MACL = r9 * r2;  /* 0C073608 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07360Cu, 4);  /* 0C07360A mov.l Rm,@-Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07360Eu, 1);  /* 0C07360C mov.l @(disp,pc),Rn */
	IF(0x0C07360Eu); r3 = MACL;  /* 0C07360E sts macl,Rn */
	r7 = 0x268u; UPD(0x0C073612u, 2);  /* 0C073610 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C073612 add Rm,Rn */
	IF(0x0C073614u); r15 -= 4; W32(r15, PR); UPD(0x0C073616u, 2);  /* 0C073614 sts.l pr,@-Rn */
	r7 += r3;  /* 0C073616 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C07361Au, 2);  /* 0C073618 mov.b @Rm,Rn */
	r0 = 0xFu;  /* 0C07361A mov #imm,Rn */
	T = r6 > r0;  /* 0C07361C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073678u, 5); goto L_0C073678; } goto L_0C073622; }  /* 0C07361E bt/s */
L_0C073622: BLKS(0x0C073622u);
	r0 = 0x25Cu; UPD(0x0C073624u, 2);  /* 0C073622 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C073624 add Rm,Rn */
	r8 = r0;  /* 0C073626 mov Rm,Rn */
	r8 += 0x2u;  /* 0C073628 add #imm,Rn */
	r0 += 0x1u;  /* 0C07362A add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C07362Eu, 5);  /* 0C07362C mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C073630u, 1);  /* 0C07362E mov.b @Rm,Rn */
	r4 |= r5;  /* 0C073630 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C073632 tst Rm,Rn */
	if (T) { UPD(0x0C073678u, 5); goto L_0C073678; }  /* 0C073634 bt */
L_0C073636: BLKS(0x0C073636u);
	r0 = 0x24Cu; UPD(0x0C073638u, 1);  /* 0C073636 mov.w @(disp,pc),Rn */
	IF(0x0C073638u); r0 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07363Au, 1);  /* 0C073638 mov.w @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C07363A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07363C tst Rm,Rn */
	{ u32 c_ = !T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073646u, 5); goto L_0C073646; } goto L_0C073642; }  /* 0C07363E bf/s */
L_0C073642: BLKS(0x0C073642u);
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C073800u, 4); goto L_0C073800; }  /* 0C073642 bra */
L_0C073646: BLKS(0x0C073646u);
	r3 += 0x1u;  /* 0C073646 add #imm,Rn */
	W8(r7, r3); UPD(0x0C07364Au, 2);  /* 0C073648 mov.b Rm,@Rn */
L_0C07364A: BLKS(0x0C07364Au);
	r7 = 0x2A0u; UPD(0x0C07364Cu, 1);  /* 0C07364A mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFBu;  /* 0C07364C mov #imm,Rn */
	IF(0x0C07364Eu); MACL = r9 * r7;  /* 0C07364E mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C073652u, 4);  /* 0C073650 mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C073652 mov #imm,Rn */
	IF(0x0C073654u); r7 = MACL;  /* 0C073654 sts macl,Rn */
	r7 += r0;  /* 0C073656 add Rm,Rn */
	r4 = 0x252u; UPD(0x0C07365Au, 4);  /* 0C073658 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C07365A mov Rm,Rn */
	IF(0x0C07365Cu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07365Eu, 2);  /* 0C07365C mov.w @(r0,Rm),Rn */
	r8 = 0x1u;  /* 0C07365E mov #imm,Rn */
	r0 = 0x268u; UPD(0x0C073662u, 2);  /* 0C073660 mov.w @(disp,pc),Rn */
	IF(0x0C073662u); ARG0(0x436Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C073662 shad Rm,Rn */
	IF(0x0C073664u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C073666u, 2);  /* 0C073664 mov.b @(r0,Rm),Rn */
	r6 = 0x1u;  /* 0C073666 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C073668 extu.b Rm,Rn */
	T = r5 >= r4;  /* 0C07366A cmp/hs Rm,Rn */
	r6 ^= r3;  /* 0C07366C xor Rm,Rn */
	IF(0x0C07366Eu); r5 = T;  /* 0C07366E movt Rn */
	r6 &= r8;  /* 0C073670 and Rm,Rn */
	r6 &= r5;  /* 0C073672 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C073674 tst Rm,Rn */
	if (T) { UPD(0x0C07367Cu, 11); goto L_0C07367C; }  /* 0C073676 bt */
L_0C073678: BLKS(0x0C073678u);
	{ IF(0x0C07367Au); ; /* slot nop */ UPD(0x0C0737A0u, 3); goto L_0C0737A0; }  /* 0C073678 bra */
L_0C07367C: BLKS(0x0C07367Cu);
	r8 = 0x286u; UPD(0x0C07367Eu, 1);  /* 0C07367C mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C07367E mov #imm,Rn */
	r0 = r7;  /* 0C073680 mov Rm,Rn */
	IF(0x0C073682u); W8(r0 + r8, r2); UPD(0x0C073684u, 3);  /* 0C073682 mov.b Rm,@(r0,Rn) */
	r0 = 0x25Cu; UPD(0x0C073686u, 1);  /* 0C073684 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C073686 add Rm,Rn */
	r4 = r0;  /* 0C073688 mov Rm,Rn */
	r4 += 0x1u;  /* 0C07368A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C07368Eu, 4);  /* 0C07368C mov.b @Rm,Rn */
	r8 = r1 & 0xFF;  /* 0C07368E extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C073690 tst Rm,Rn */
	IF(0x0C073692u); r2 = T;  /* 0C073692 movt Rn */
	r5 |= r2;  /* 0C073694 or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C073696 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07369Au); T = (s32)r2 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C0736A0u, 8); goto L_0C0736A0; } goto L_0C07369C; }  /* 0C073698 bf/s */
L_0C07369C: BLKS(0x0C07369Cu);
	{ r3 = r0; /* slot mov Rm,Rn */ UPD(0x0C0737D0u, 4); goto L_0C0737D0; }  /* 0C07369C bra */
L_0C0736A0: BLKS(0x0C0736A0u);
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0736A8u, 3); goto L_0C0736A8; } goto L_0C0736A4; }  /* 0C0736A0 bf/s */
L_0C0736A4: BLKS(0x0C0736A4u);
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0737C0u, 4); goto L_0C0737C0; }  /* 0C0736A4 bra */
L_0C0736A8: BLKS(0x0C0736A8u);
	r3 += 0x2u;  /* 0C0736A8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0736ACu, 2);  /* 0C0736AA mov.b @Rm,Rn */
	T = r0 == 0x28u;  /* 0C0736AC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0736B6u, 4); goto L_0C0736B6; } goto L_0C0736B2; }  /* 0C0736AE bf/s */
L_0C0736B2: BLKS(0x0C0736B2u);
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C0737B0u, 4); goto L_0C0737B0; }  /* 0C0736B2 bra */
L_0C0736B6: BLKS(0x0C0736B6u);
	W8(r4, r1); UPD(0x0C0736B8u, 1);  /* 0C0736B6 mov.b Rm,@Rn */
L_0C0736B8: BLKS(0x0C0736B8u);
	r4 = 0x2A0u; UPD(0x0C0736BAu, 1);  /* 0C0736B8 mov.w @(disp,pc),Rn */
	r3 = 0x28u;  /* 0C0736BA mov #imm,Rn */
	IF(0x0C0736BCu); MACL = r9 * r4;  /* 0C0736BC mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0736C0u, 4);  /* 0C0736BE mov.l @(disp,pc),Rn */
	IF(0x0C0736C0u); r6 = MACL;  /* 0C0736C0 sts macl,Rn */
	r0 = 0x266u; UPD(0x0C0736C4u, 2);  /* 0C0736C2 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C0736C4 add Rm,Rn */
	IF(0x0C0736C6u); W8(r0 + r5, r3); UPD(0x0C0736C8u, 2);  /* 0C0736C6 mov.b Rm,@(r0,Rn) */
L_0C0736C8: BLKS(0x0C0736C8u);
	r8 = 0x2A0u; UPD(0x0C0736CAu, 1);  /* 0C0736C8 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0736CA mov #imm,Rn */
	IF(0x0C0736CCu); MACL = r9 * r8;  /* 0C0736CC mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0736D0u, 4);  /* 0C0736CE mov.l @(disp,pc),Rn */
	IF(0x0C0736D0u); r8 = MACL;  /* 0C0736D0 sts macl,Rn */
	r0 = 0x268u; UPD(0x0C0736D4u, 2);  /* 0C0736D2 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0736D4 add Rm,Rn */
	IF(0x0C0736D6u); W8(r0 + r8, r4); UPD(0x0C0736D8u, 2);  /* 0C0736D6 mov.b Rm,@(r0,Rn) */
	r0 = 0xC07B620u; UPD(0x0C0736DAu, 1);  /* 0C0736D8 mov.l @(disp,pc),Rn */
	IF(0x0C0736DAu); { u32 t_ = r0; PR = 0x0C0736DEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C0736DEu); }  /* 0C0736DA jsr @Rn */
L_0C0736DE: BLKS(0x0C0736DEu);
	r6 = 0xC17E288u; UPD(0x0C0736E0u, 1);  /* 0C0736DE mov.l @(disp,pc),Rn */
	r7 = 0xC0C2110u; UPD(0x0C0736E2u, 1);  /* 0C0736E0 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0736E2 mov Rm,Rn */
	IF(0x0C0736E4u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0736E6u, 2);  /* 0C0736E4 mov.b @(r0,Rm),Rn */
	IF(0x0C0736E6u); { u32 t_ = r7; PR = 0x0C0736EAu; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0736EAu); }  /* 0C0736E6 jsr @Rn */
L_0C0736EA: BLKS(0x0C0736EAu);
	r2 = R32(r8 + 0x4u); UPD(0x0C0736ECu, 1);  /* 0C0736EA mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C0736EC mov #imm,Rn */
	r2 &= r0;  /* 0C0736EE and Rm,Rn */
	T = r2 > r0;  /* 0C0736F0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0737A0u, 6); goto L_0C0737A0; }  /* 0C0736F2 bt */
L_0C0736F4: BLKS(0x0C0736F4u);
	r0 = 0xC07371Cu;  /* 0C0736F4 mova @(disp,pc),r0 */
	IF(0x0C0736F6u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0736F8u, 2);  /* 0C0736F6 mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C0736F8 extu.b Rm,Rn */
	IF(0x0C0736FAu); { u32 tv_ = (r3 + 0x0C0736FEu); u32 t_ = PHYS(tv_); IF(0x0C0736FCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0736FA braf Rn */
L_0C073734: BLKS(0x0C073734u);
	r15 = r14;  /* 0C073734 mov Rm,Rn */
	IF(0x0C073736u); PR = R32(r15); r15 += 4; UPD(0x0C073738u, 2);  /* 0C073736 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07373Au, 1);  /* 0C073738 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07373Cu, 1);  /* 0C07373A mov.l @Rm+,Rn */
	IF(0x0C07373Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B620u: TAIL(blk_f_0C07B620); default: JUMPD(tv_); } }  /* 0C07373C jmp @Rn */
L_0C0737A0: BLKS(0x0C0737A0u);
	r15 = r14;  /* 0C0737A0 mov Rm,Rn */
	IF(0x0C0737A2u); PR = R32(r15); r15 += 4; UPD(0x0C0737A4u, 2);  /* 0C0737A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0737A6u, 1);  /* 0C0737A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0737A8u, 1);  /* 0C0737A6 mov.l @Rm+,Rn */
	IF(0x0C0737A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0737A8 rts */
L_0C0737B0: BLKS(0x0C0737B0u);
	{ IF(0x0C0737B2u); ; /* slot nop */ UPD(0x0C0736B8u, 3); goto L_0C0736B8; }  /* 0C0737B0 bra */
L_0C0737C0: BLKS(0x0C0737C0u);
	r5 += 0x2u;  /* 0C0737C0 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C0737C4u, 2);  /* 0C0737C2 mov.b @Rm,Rn */
	r0 = r7;  /* 0C0737C4 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C0737C8u, 2);  /* 0C0737C6 mov.w @(disp,pc),Rn */
	W8(r5, r8); UPD(0x0C0737CAu, 1);  /* 0C0737C8 mov.b Rm,@Rn */
	{ IF(0x0C0737CCu); W8(r0 + r3, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0736C8u, 3); goto L_0C0736C8; }  /* 0C0737CA bra */
L_0C0737D0: BLKS(0x0C0737D0u);
	r3 += 0x2u;  /* 0C0737D0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0737D4u, 2);  /* 0C0737D2 mov.b @Rm,Rn */
	T = r0 == 0x28u;  /* 0C0737D4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0737F0u, 4); goto L_0C0737F0; } goto L_0C0737DA; }  /* 0C0737D6 bt/s */
L_0C0737DA: BLKS(0x0C0737DAu);
	W8(r4, r1); UPD(0x0C0737DCu, 2);  /* 0C0737DA mov.b Rm,@Rn */
L_0C0737DC: BLKS(0x0C0737DCu);
	r8 = 0xC078E40u; UPD(0x0C0737DEu, 1);  /* 0C0737DC mov.l @(disp,pc),Rn */
	IF(0x0C0737DEu); { u32 t_ = r8; PR = 0x0C0737E2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C078E40, 0x0C078E40u, 0x0C0737E2u); }  /* 0C0737DE jsr @Rn */
L_0C0737E2: BLKS(0x0C0737E2u);
	r1 = 0xC07B620u; UPD(0x0C0737E4u, 1);  /* 0C0737E2 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C073734u, 3); goto L_0C073734; }  /* 0C0737E4 bra */
L_0C0737F0: BLKS(0x0C0737F0u);
	{ W8(r3, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0737DCu, 3); goto L_0C0737DC; }  /* 0C0737F0 bra */
L_0C073800: BLKS(0x0C073800u);
	{ IF(0x0C073802u); ; /* slot nop */ UPD(0x0C07364Au, 3); goto L_0C07364A; }  /* 0C073800 bra */
}

void blk_f_0C073730(sh3_t *c)
{
	LOCALS;
L_0C073730: BLKS(0x0C073730u);
	r1 = 0xC07A7B0u; UPD(0x0C073732u, 1);  /* 0C073730 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C073732 mov Rm,Rn */
	r15 = r14;  /* 0C073734 mov Rm,Rn */
	IF(0x0C073736u); PR = R32(r15); r15 += 4; UPD(0x0C073738u, 3);  /* 0C073736 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07373Au, 1);  /* 0C073738 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07373Cu, 1);  /* 0C07373A mov.l @Rm+,Rn */
	IF(0x0C07373Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B620u: TAIL(blk_f_0C07B620); default: JUMPD(tv_); } }  /* 0C07373C jmp @Rn */
}

void blk_f_0C073750(sh3_t *c)
{
	LOCALS;
	goto L_0C073750;
L_0C073734: BLKS(0x0C073734u);
	r15 = r14;  /* 0C073734 mov Rm,Rn */
	IF(0x0C073736u); PR = R32(r15); r15 += 4; UPD(0x0C073738u, 2);  /* 0C073736 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07373Au, 1);  /* 0C073738 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07373Cu, 1);  /* 0C07373A mov.l @Rm+,Rn */
	IF(0x0C07373Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B620u: TAIL(blk_f_0C07B620); default: JUMPD(tv_); } }  /* 0C07373C jmp @Rn */
L_0C073750: BLKS(0x0C073750u);
	r1 = 0xC07AA90u; UPD(0x0C073752u, 1);  /* 0C073750 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C073734u, 3); goto L_0C073734; }  /* 0C073752 bra */
}

void blk_f_0C073770(sh3_t *c)
{
	LOCALS;
	goto L_0C073770;
L_0C073734: BLKS(0x0C073734u);
	r15 = r14;  /* 0C073734 mov Rm,Rn */
	IF(0x0C073736u); PR = R32(r15); r15 += 4; UPD(0x0C073738u, 2);  /* 0C073736 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07373Au, 1);  /* 0C073738 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07373Cu, 1);  /* 0C07373A mov.l @Rm+,Rn */
	IF(0x0C07373Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B620u: TAIL(blk_f_0C07B620); default: JUMPD(tv_); } }  /* 0C07373C jmp @Rn */
L_0C073770: BLKS(0x0C073770u);
	r1 = 0xC07A410u; UPD(0x0C073772u, 1);  /* 0C073770 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C073734u, 3); goto L_0C073734; }  /* 0C073772 bra */
}

/* FUN_0c073830 */
void blk_f_0C073830(sh3_t *c)
{
	LOCALS;
L_0C073830: BLKS(0x0C073830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073832u, 1);  /* 0C073830 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073834u, 1);  /* 0C073832 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C073836u, 1);  /* 0C073834 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C073838u, 1);  /* 0C073836 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07383Au, 1);  /* 0C073838 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07383Cu, 1);  /* 0C07383A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07383Eu, 1);  /* 0C07383C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07383E exts.w Rm,Rn */
	IF(0x0C073840u); r15 -= 4; W32(r15, PR); UPD(0x0C073842u, 2);  /* 0C073840 sts.l pr,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C073844u, 1);  /* 0C073842 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C073844 add #imm,Rn */
	r0 = R32(r2); UPD(0x0C073848u, 2);  /* 0C073846 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C073848 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073858u, 4); goto L_0C073858; } goto L_0C07384E; }  /* 0C07384A bt/s */
L_0C07384E: BLKS(0x0C07384Eu);
	r0 = 0x2A0u; UPD(0x0C073850u, 2);  /* 0C07384E mov.w @(disp,pc),Rn */
	IF(0x0C073850u); r3 = R32(r0 + r2); UPD(0x0C073852u, 1);  /* 0C073850 mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C073852 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073870u, 4); goto L_0C073870; } UPD(0x0C073858u, 1); goto L_0C073858; }  /* 0C073854 bf/s */
L_0C073858: BLKS(0x0C073858u);
	r5 = 0x2A0u; UPD(0x0C07385Au, 1);  /* 0C073858 mov.w @(disp,pc),Rn */
	IF(0x0C07385Au); MACL = r13 * r5;  /* 0C07385A mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C07385Eu, 3);  /* 0C07385C mov.l @(disp,pc),Rn */
	r0 = 0x270u; UPD(0x0C073860u, 1);  /* 0C07385E mov.w @(disp,pc),Rn */
	IF(0x0C073860u); r2 = MACL;  /* 0C073860 sts macl,Rn */
	r4 += r2;  /* 0C073862 add Rm,Rn */
	IF(0x0C073864u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C073866u, 3);  /* 0C073864 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C073866 mov #imm,Rn */
	T = r1 > r0;  /* 0C073868 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0x20u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073870u, 5); goto L_0C073870; } goto L_0C07386E; }  /* 0C07386A bt/s */
L_0C07386E: BLKS(0x0C07386Eu);
	r6 = 0x10u;  /* 0C07386E mov #imm,Rn */
	UPD(0x0C073870u, 2);
L_0C073870: BLKS(0x0C073870u);
	r8 = 0x2A0u; UPD(0x0C073872u, 1);  /* 0C073870 mov.w @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C073872 mov #imm,Rn */
	IF(0x0C073874u); MACL = r13 * r8;  /* 0C073874 mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C073878u, 4);  /* 0C073876 mov.l @(disp,pc),Rn */
	IF(0x0C073878u); r8 = MACL;  /* 0C073878 sts macl,Rn */
	r8 += r0;  /* 0C07387A add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C07387Eu, 3);  /* 0C07387C mov.l @(disp,Rm),Rn */
	r3 = 0xC17F388u; UPD(0x0C073880u, 1);  /* 0C07387E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C073880 and Rm,Rn */
	IF(0x0C073882u); r0 <<= 2;  /* 0C073882 shll2 Rn */
	IF(0x0C073884u); r10 = R32(r0 + r3); UPD(0x0C073886u, 3);  /* 0C073884 mov.l @(r0,Rm),Rn */
	r4 = r13;  /* 0C073886 mov Rm,Rn */
	r12 = 0x25Bu; UPD(0x0C07388Au, 2);  /* 0C073888 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07388A mov Rm,Rn */
	IF(0x0C07388Cu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07388Eu, 2);  /* 0C07388C mov.b @(r0,Rm),Rn */
	r0 = r11 & 0xFF;  /* 0C07388E extu.b Rm,Rn */
	IF(0x0C073890u); r0 <<= 2;  /* 0C073890 shll2 Rn */
	IF(0x0C073892u); r11 = R32(r0 + r10); UPD(0x0C073894u, 3);  /* 0C073892 mov.l @(r0,Rm),Rn */
	r9 = 0xC071850u; UPD(0x0C073896u, 1);  /* 0C073894 mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C073896 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r7 = v_; } UPD(0x0C07389Au, 2);  /* 0C073898 mov.w @Rm+,Rn */
	W32(r14, r7); UPD(0x0C07389Cu, 1);  /* 0C07389A mov.l Rm,@Rn */
	IF(0x0C07389Cu); { u32 t_ = r9; PR = 0x0C0738A0u; r5 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071850, 0x0C071850u, 0x0C0738A0u); }  /* 0C07389C jsr @Rn */
L_0C0738A0: BLKS(0x0C0738A0u);
	T = (r0 & r0) == 0;  /* 0C0738A0 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073980u, 4); goto L_0C073980; } goto L_0C0738A6; }  /* 0C0738A2 bt/s */
L_0C0738A6: BLKS(0x0C0738A6u);
	r5 = 0xC28EDFCu; UPD(0x0C0738A8u, 2);  /* 0C0738A6 mov.l @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C0738AAu, 1);  /* 0C0738A8 mov.l @Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0738ACu, 1);  /* 0C0738AA mov.l Rm,@(disp,Rn) */
	T = (s32)r1 >= (s32)r6;  /* 0C0738AC cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073948u, 4); goto L_0C073948; } UPD(0x0C0738B2u, 1); goto L_0C0738B2; }  /* 0C0738AE bt/s */
L_0C0738B2: BLKS(0x0C0738B2u);
	r12 = r8;  /* 0C0738B2 mov Rm,Rn */
	UPD(0x0C0738B4u, 1);
L_0C0738B4: BLKS(0x0C0738B4u);
	r10 = 0x680u; UPD(0x0C0738B6u, 1);  /* 0C0738B4 mov.w @(disp,pc),Rn */
	r7 = 0x34u;  /* 0C0738B6 mov #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0738BAu, 2);  /* 0C0738B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0738BAu); MACL = r13 * r10;  /* 0C0738BA mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r4 = v_; } UPD(0x0C0738BEu, 3);  /* 0C0738BC mov.w @Rm+,Rn */
	IF(0x0C0738BEu); r10 = MACL;  /* 0C0738BE sts macl,Rn */
	IF(0x0C0738C0u); MACL = r4 * r7;  /* 0C0738C0 mul.l Rm,Rn */
	r6 = 0xC2A6D9Cu; UPD(0x0C0738C4u, 4);  /* 0C0738C2 mov.l @(disp,pc),Rn */
	IF(0x0C0738C4u); r5 = MACL;  /* 0C0738C4 sts macl,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r3 = v_; } UPD(0x0C0738C8u, 2);  /* 0C0738C6 mov.l @Rm+,Rn */
	r10 += r5;  /* 0C0738C8 add Rm,Rn */
	r10 += r6;  /* 0C0738CA add Rm,Rn */
	W32(r10, r3); UPD(0x0C0738CEu, 3);  /* 0C0738CC mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0738CE mov #imm,Rn */
	W32(r10 + 0x4u, r13); UPD(0x0C0738D2u, 2);  /* 0C0738D0 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C0738D4u, 1);  /* 0C0738D2 mov.l @Rm+,Rn */
	r8 = 0xC062780u; UPD(0x0C0738D6u, 1);  /* 0C0738D4 mov.l @(disp,pc),Rn */
	W32(r10 + 0x8u, r2); UPD(0x0C0738D8u, 1);  /* 0C0738D6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r1); UPD(0x0C0738DAu, 1);  /* 0C0738D8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0738DAu); { u32 t_ = r8; PR = 0x0C0738DEu; { u32 v_ = R32(r11); r11 += 4; r9 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0738DEu); }  /* 0C0738DA jsr @Rn */
L_0C0738DE: BLKS(0x0C0738DEu);
	r3 = r0;  /* 0C0738DE mov Rm,Rn */
	r3 += r9;  /* 0C0738E0 add Rm,Rn */
	W32(r10 + 0xCu, r3); UPD(0x0C0738E4u, 3);  /* 0C0738E2 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C0738E6u, 1);  /* 0C0738E4 mov.l @Rm+,Rn */
	r4 = R32(r12 + 0x10u); UPD(0x0C0738E8u, 1);  /* 0C0738E6 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0738E8 add Rm,Rn */
	W32(r10 + 0x10u, r4); UPD(0x0C0738ECu, 2);  /* 0C0738EA mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C0738EEu, 1);  /* 0C0738EC mov.l @Rm+,Rn */
	r9 = R32(r12 + 0x14u); UPD(0x0C0738F0u, 1);  /* 0C0738EE mov.l @(disp,Rm),Rn */
	r9 += r7;  /* 0C0738F0 add Rm,Rn */
	W32(r10 + 0x14u, r9); UPD(0x0C0738F4u, 2);  /* 0C0738F2 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C0738F6u, 1);  /* 0C0738F4 mov.l @Rm+,Rn */
	r0 = 0x270u; UPD(0x0C0738F8u, 1);  /* 0C0738F6 mov.w @(disp,pc),Rn */
	W32(r10 + 0x20u, r9); UPD(0x0C0738FAu, 1);  /* 0C0738F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0738FAu); r0 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0738FCu, 1);  /* 0C0738FA mov.b @(r0,Rm),Rn */
	T = r0 == 0x8u;  /* 0C0738FC cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073970u, 4); goto L_0C073970; } UPD(0x0C073902u, 1); goto L_0C073902; }  /* 0C0738FE bt/s */
L_0C073902: BLKS(0x0C073902u);
	r5 = 0x66666667u; UPD(0x0C073904u, 1);  /* 0C073902 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C073904 add Rm,Rn */
	{ s64 r_ = (s64)(s32)r3 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C073906 dmuls.l Rm,Rn */
	r0 = 0xC17E28Eu; UPD(0x0C07390Au, 4);  /* 0C073908 mov.l @(disp,pc),Rn */
	r10 += 0x2Cu;  /* 0C07390A add #imm,Rn */
	IF(0x0C07390Cu); r6 = MACH;  /* 0C07390C sts mach,Rn */
	IF(0x0C07390Eu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C07390E shar Rn */
	IF(0x0C073910u); T = r3 >> 31; r3 <<= 1;  /* 0C073910 shll Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C073912 subc Rm,Rn */
	r6 -= r3;  /* 0C073914 sub Rm,Rn */
	r6 += r6;  /* 0C073916 add Rm,Rn */
	IF(0x0C073918u); r8 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07391Au, 8);  /* 0C073918 mov.w @(r0,Rm),Rn */
	r5 = r9;  /* 0C07391A mov Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C07391Eu, 2);  /* 0C07391C mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07391E mov Rm,Rn */
	IF(0x0C073920u); { u32 t_ = r0; PR = 0x0C073924u; W16(r10, r8); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C073924u); }  /* 0C073920 jsr @Rn */
L_0C073924: BLKS(0x0C073924u);
	r5 = r9;  /* 0C073924 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C073928u, 2);  /* 0C073926 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFD4u;  /* 0C073928 add #imm,Rn */
	r4 = r8;  /* 0C07392A mov Rm,Rn */
	IF(0x0C07392Cu); { u32 t_ = r9; PR = 0x0C073930u; W32(r10 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C073930u); }  /* 0C07392C jsr @Rn */
L_0C073930: BLKS(0x0C073930u);
	r8 = R32(r14 + 0x8u); UPD(0x0C073932u, 1);  /* 0C073930 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C073932 mov #imm,Rn */
	W32(r10 + 0x1Cu, r0); UPD(0x0C073936u, 2);  /* 0C073934 mov.l Rm,@(disp,Rn) */
	r8 += 0x1u;  /* 0C073936 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C07393Au, 2);  /* 0C073938 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C07393A exts.w Rm,Rn */
	r0 = R32(r14); UPD(0x0C07393Eu, 2);  /* 0C07393C mov.l @Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C073940u, 1);  /* 0C07393E mov.l Rm,@(disp,Rn) */
	T = (s32)r9 >= (s32)r0;  /* 0C073940 cmp/ge Rm,Rn */
	W32(r10 + 0x28u, r2); UPD(0x0C073944u, 2);  /* 0C073942 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0738B4u, 3); goto L_0C0738B4; } UPD(0x0C073948u, 1); goto L_0C073948; }  /* 0C073944 bf/s */
L_0C073948: BLKS(0x0C073948u);
	r12 = 0xC17E28Cu; UPD(0x0C07394Au, 1);  /* 0C073948 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07394A mov Rm,Rn */
	r0 = r12;  /* 0C07394C mov Rm,Rn */
	IF(0x0C07394Eu); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C073950u, 3);  /* 0C07394E mov.b @(r0,Rm),Rn */
	r14 += 0xCu;  /* 0C073950 add #imm,Rn */
	r7 = 0xC0C2020u; UPD(0x0C073954u, 2);  /* 0C073952 mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C073954 extu.b Rm,Rn */
	r15 = r14;  /* 0C073956 mov Rm,Rn */
	IF(0x0C073958u); PR = R32(r15); r15 += 4; UPD(0x0C07395Au, 3);  /* 0C073958 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07395Cu, 1);  /* 0C07395A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07395Eu, 1);  /* 0C07395C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C073960u, 1);  /* 0C07395E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C073962u, 1);  /* 0C073960 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073964u, 1);  /* 0C073962 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073966u, 1);  /* 0C073964 mov.l @Rm+,Rn */
	IF(0x0C073966u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C073966 jmp @Rn */
L_0C073970: BLKS(0x0C073970u);
	r7 = r9;  /* 0C073970 mov Rm,Rn */
	{ IF(0x0C073974u); T = r7 & 1; r7 = (u32)((s32)r7 >> 1); /* slot shar Rn */ UPD(0x0C073902u, 4); goto L_0C073902; }  /* 0C073972 bra */
L_0C073980: BLKS(0x0C073980u);
	r14 += 0xCu;  /* 0C073980 add #imm,Rn */
	r15 = r14;  /* 0C073982 mov Rm,Rn */
	IF(0x0C073984u); PR = R32(r15); r15 += 4; UPD(0x0C073986u, 3);  /* 0C073984 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C073988u, 1);  /* 0C073986 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07398Au, 1);  /* 0C073988 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07398Cu, 1);  /* 0C07398A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07398Eu, 1);  /* 0C07398C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073990u, 1);  /* 0C07398E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073992u, 1);  /* 0C073990 mov.l @Rm+,Rn */
	IF(0x0C073992u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073992 rts */
}

/* FUN_0c0739e0 */
void blk_f_0C0739E0(sh3_t *c)
{
	LOCALS;
L_0C0739E0: BLKS(0x0C0739E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0739E2u, 1);  /* 0C0739E0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0739E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0739E6u, 2);  /* 0C0739E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0739E8u, 1);  /* 0C0739E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0739EAu, 1);  /* 0C0739E8 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0739EA mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0739EEu, 2);  /* 0C0739EC mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0739EE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0739F2u, 2);  /* 0C0739F0 mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C0739F2 mov #imm,Rn */
	IF(0x0C0739F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0739F6u, 2);  /* 0C0739F4 sts.l pr,@-Rn */
	r0 = 0xC3C542Cu; UPD(0x0C0739F8u, 1);  /* 0C0739F6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0739F8 mov Rm,Rn */
	W16(r0, r1); UPD(0x0C0739FCu, 2);  /* 0C0739FA mov.w Rm,@Rn */
L_0C0739FC: BLKS(0x0C0739FCu);
	r9 = 0xC29D1D8u; UPD(0x0C0739FEu, 1);  /* 0C0739FC mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C0739FE mov Rm,Rn */
	r8 += r9;  /* 0C073A00 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C073A04u, 3);  /* 0C073A02 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C073A04 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073AD0u, 4); goto L_0C073AD0; } UPD(0x0C073A0Au, 1); goto L_0C073A0A; }  /* 0C073A06 bf/s */
L_0C073A0A: BLKS(0x0C073A0Au);
	T = (r1 & r1) == 0;  /* 0C073A0A tst Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073A86u, 4); goto L_0C073A86; } goto L_0C073A10; }  /* 0C073A0C bt/s */
L_0C073A10: BLKS(0x0C073A10u);
	r0 = 0xC3C542Cu; UPD(0x0C073A12u, 2);  /* 0C073A10 mov.l @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C073A12 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C073A16u, 2);  /* 0C073A14 mov.w @Rm,Rn */
	r5 += 0x1u;  /* 0C073A16 add #imm,Rn */
	W16(r0, r5); UPD(0x0C073A1Au, 2);  /* 0C073A18 mov.w Rm,@Rn */
	r0 = r12;  /* 0C073A1A mov Rm,Rn */
	IF(0x0C073A1Cu); r0 <<= 2;  /* 0C073A1C shll2 Rn */
	r0 += r9;  /* 0C073A1E add Rm,Rn */
	r2 = 0x22Cu; UPD(0x0C073A22u, 4);  /* 0C073A20 mov.w @(disp,pc),Rn */
	r0 += 0x8u;  /* 0C073A22 add #imm,Rn */
	r2 += r0;  /* 0C073A24 add Rm,Rn */
	UPD(0x0C073A26u, 2);
L_0C073A26: BLKS(0x0C073A26u);
	r7 = R32(r2); UPD(0x0C073A28u, 1);  /* 0C073A26 mov.l @Rm,Rn */
	r6 = r3;  /* 0C073A28 mov Rm,Rn */
	W32(r2 + 0x4u, r7); UPD(0x0C073A2Cu, 2);  /* 0C073A2A mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFFFu;  /* 0C073A2C add #imm,Rn */
	r7 = 0x23Cu; UPD(0x0C073A30u, 2);  /* 0C073A2E mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C073A30 exts.w Rm,Rn */
	IF(0x0C073A32u); r8 = R32(r0 + r7); UPD(0x0C073A34u, 2);  /* 0C073A32 mov.l @(r0,Rm),Rn */
	IF(0x0C073A34u); T = (s32)r3 >= 0;  /* 0C073A34 cmp/pz Rn */
	W32(r2 + 0x14u, r8); UPD(0x0C073A38u, 2);  /* 0C073A36 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C073A38 add #imm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C073A26u, 4); goto L_0C073A26; } goto L_0C073A3E; }  /* 0C073A3A bt/s */
L_0C073A3E: BLKS(0x0C073A3Eu);
	r3 = 0xC29D1D8u; UPD(0x0C073A40u, 2);  /* 0C073A3E mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C073A40 add Rm,Rn */
	r0 = 0x22Cu; UPD(0x0C073A44u, 2);  /* 0C073A42 mov.w @(disp,pc),Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C073A46u, 1);  /* 0C073A44 mov.l @(disp,Rm),Rn */
	IF(0x0C073A46u); W32(r0 + r3, r4); UPD(0x0C073A48u, 1);  /* 0C073A46 mov.l Rm,@(r0,Rn) */
	r2 = R32(r3 + 0x14u); UPD(0x0C073A4Au, 1);  /* 0C073A48 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C073A4A mov Rm,Rn */
	IF(0x0C073A4Cu); W32(r0 + r7, r2); UPD(0x0C073A4Eu, 2);  /* 0C073A4C mov.l Rm,@(r0,Rn) */
	r7 += 0x58u;  /* 0C073A4E add #imm,Rn */
	r0 = 0x290u; UPD(0x0C073A52u, 2);  /* 0C073A50 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C073A52 add Rm,Rn */
	IF(0x0C073A54u); r9 = R32(r0 + r3); UPD(0x0C073A56u, 2);  /* 0C073A54 mov.l @(r0,Rm),Rn */
	r2 = R32(r7); UPD(0x0C073A58u, 1);  /* 0C073A56 mov.l @Rm,Rn */
	T = r9 >= r2;  /* 0C073A58 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C073A70u, 4); goto L_0C073A70; }  /* 0C073A5A bf */
L_0C073A5C: BLKS(0x0C073A5Cu);
	r0 += 0xFFFFFFCAu;  /* 0C073A5C add #imm,Rn */
	r8 = 0xC2B181Cu; UPD(0x0C073A60u, 2);  /* 0C073A5E mov.l @(disp,pc),Rn */
	r6 = R32(r8); UPD(0x0C073A62u, 1);  /* 0C073A60 mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C073A62 mov #imm,Rn */
	r2 += r6;  /* 0C073A64 add Rm,Rn */
	W32(r7, r2); UPD(0x0C073A68u, 3);  /* 0C073A66 mov.l Rm,@Rn */
	IF(0x0C073A68u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C073A6Au, 1);  /* 0C073A68 mov.b @(r0,Rm),Rn */
	T = r2 > r5;  /* 0C073A6A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073AB0u, 4); goto L_0C073AB0; } UPD(0x0C073A70u, 1); goto L_0C073A70; }  /* 0C073A6C bf/s */
L_0C073A70: BLKS(0x0C073A70u);
	r2 = 0xC29D1D8u; UPD(0x0C073A72u, 1);  /* 0C073A70 mov.l @(disp,pc),Rn */
	r9 = 0x272u; UPD(0x0C073A74u, 1);  /* 0C073A72 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C073A74 add Rm,Rn */
	r2 += r9;  /* 0C073A76 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C073A7Au, 3);  /* 0C073A78 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C073A7A tst Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073A86u, 4); goto L_0C073A86; } goto L_0C073A80; }  /* 0C073A7C bt/s */
L_0C073A80: BLKS(0x0C073A80u);
	r1 += 0xFFFFFFFFu;  /* 0C073A80 add #imm,Rn */
	W8(r2, r1); UPD(0x0C073A84u, 3);  /* 0C073A82 mov.b Rm,@Rn */
	r4 = r11;  /* 0C073A84 mov Rm,Rn */
	UPD(0x0C073A86u, 1);
L_0C073A86: BLKS(0x0C073A86u);
	r11 = 0xA8u; UPD(0x0C073A88u, 1);  /* 0C073A86 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C073A88 add #imm,Rn */
	r5 = 0x2A0u; UPD(0x0C073A8Cu, 2);  /* 0C073A8A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C073A8C add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C073A8E exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C073A90 mov #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C073A92 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0739FCu, 7); goto L_0C0739FC; } goto L_0C073A98; }  /* 0C073A94 bf/s */
L_0C073A98: BLKS(0x0C073A98u);
	r15 = r14;  /* 0C073A98 mov Rm,Rn */
	IF(0x0C073A9Au); PR = R32(r15); r15 += 4; UPD(0x0C073A9Cu, 3);  /* 0C073A9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C073A9Eu, 1);  /* 0C073A9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C073AA0u, 1);  /* 0C073A9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C073AA2u, 1);  /* 0C073AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073AA4u, 1);  /* 0C073AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073AA6u, 1);  /* 0C073AA4 mov.l @Rm+,Rn */
	IF(0x0C073AA6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073AA6 rts */
L_0C073AB0: BLKS(0x0C073AB0u);
	r7 += 0x1u;  /* 0C073AB0 add #imm,Rn */
	IF(0x0C073AB2u); W8(r0 + r3, r7); UPD(0x0C073AB4u, 2);  /* 0C073AB2 mov.b Rm,@(r0,Rn) */
	r4 = r11;  /* 0C073AB4 mov Rm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C073AB8u, 2);  /* 0C073AB6 mov.l @(disp,pc),Rn */
	IF(0x0C073AB8u); { u32 t_ = r0; PR = 0x0C073ABCu; r5 = 0x62u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C073ABCu); }  /* 0C073AB8 jsr @Rn */
L_0C073ABC: BLKS(0x0C073ABCu);
	r3 = 0xC0C2020u; UPD(0x0C073ABEu, 1);  /* 0C073ABC mov.l @(disp,pc),Rn */
	r5 = 0x9Bu; UPD(0x0C073AC0u, 1);  /* 0C073ABE mov.w @(disp,pc),Rn */
	IF(0x0C073AC0u); { u32 t_ = r3; PR = 0x0C073AC4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C073AC4u); }  /* 0C073AC0 jsr @Rn */
L_0C073AC4: BLKS(0x0C073AC4u);
	{ IF(0x0C073AC6u); ; /* slot nop */ UPD(0x0C073A70u, 3); goto L_0C073A70; }  /* 0C073AC4 bra */
L_0C073AD0: BLKS(0x0C073AD0u);
	r0 = R32(r8 + 0x4u); UPD(0x0C073AD2u, 1);  /* 0C073AD0 mov.l @(disp,Rm),Rn */
	r0 &= r4;  /* 0C073AD2 and Rm,Rn */
	r3 = 0xC17E1FCu; UPD(0x0C073AD6u, 2);  /* 0C073AD4 mov.l @(disp,pc),Rn */
	IF(0x0C073AD6u); r0 <<= 2;  /* 0C073AD6 shll2 Rn */
	IF(0x0C073AD8u); r2 = R32(r0 + r3); UPD(0x0C073ADAu, 2);  /* 0C073AD8 mov.l @(r0,Rm),Rn */
	IF(0x0C073ADAu); { u32 t_ = r2; PR = 0x0C073ADEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C073ADEu); }  /* 0C073ADA jsr @Rn */
L_0C073ADE: BLKS(0x0C073ADEu);
	{ r1 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C073A0Au, 3); goto L_0C073A0A; }  /* 0C073ADE bra */
}

/* FUN_0c073b10 */
void blk_f_0C073B10(sh3_t *c)
{
	LOCALS;
L_0C073B10: BLKS(0x0C073B10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073B12u, 1);  /* 0C073B10 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C073B12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073B16u, 2);  /* 0C073B14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C073B18u, 1);  /* 0C073B16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C073B1Au, 1);  /* 0C073B18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C073B1Cu, 1);  /* 0C073B1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C073B1Eu, 1);  /* 0C073B1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C073B20u, 1);  /* 0C073B1E mov.l Rm,@-Rn */
	r15 += 0xFFFFFFC8u;  /* 0C073B20 add #imm,Rn */
	r14 = r15;  /* 0C073B22 mov Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C073B26u, 3);  /* 0C073B24 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2289E8u; UPD(0x0C073B28u, 1);  /* 0C073B26 mov.l @(disp,pc),Rn */
	r6 = 0xC20750Cu; UPD(0x0C073B2Au, 1);  /* 0C073B28 mov.l @(disp,pc),Rn */
	r9 = R32(r2); UPD(0x0C073B2Cu, 1);  /* 0C073B2A mov.l @Rm,Rn */
	r13 = 0x3FFFFFFFu; UPD(0x0C073B2Eu, 1);  /* 0C073B2C mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C073B30u, 1);  /* 0C073B2E mov.b Rm,@Rn */
	r9 &= r13;  /* 0C073B30 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r6 = v_; } UPD(0x0C073B34u, 2);  /* 0C073B32 mov.w @Rm+,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C073B36u, 1);  /* 0C073B34 mov.l Rm,@(disp,Rn) */
	r3 = r6;  /* 0C073B36 mov Rm,Rn */
	r0 = 0xC3C415Cu; UPD(0x0C073B3Au, 2);  /* 0C073B38 mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFF3u;  /* 0C073B3A mov #imm,Rn */
	W32(r14, r4); UPD(0x0C073B3Eu, 2);  /* 0C073B3C mov.l Rm,@Rn */
	IF(0x0C073B3Eu); ARG0(0x435Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C073B3E shad Rm,Rn */
	r4 = 0xC207504u; UPD(0x0C073B42u, 2);  /* 0C073B40 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C073B42 mov Rm,Rn */
	r8 = R32(r0); UPD(0x0C073B46u, 2);  /* 0C073B44 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C073B46 tst Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C073B4Au, 2);  /* 0C073B48 mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C073B4A mov #imm,Rn */
	r12 = 0xC3C86B0u; UPD(0x0C073B4Eu, 2);  /* 0C073B4C mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C073B4E mov #imm,Rn */
	W32(r4, r9); UPD(0x0C073B52u, 2);  /* 0C073B50 mov.l Rm,@Rn */
	r2 ^= r0;  /* 0C073B52 xor Rm,Rn */
	r11 = R32(r12); UPD(0x0C073B56u, 2);  /* 0C073B54 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C073B56 negc Rm,Rn */
	r10 = 0xC207508u; UPD(0x0C073B5Au, 2);  /* 0C073B58 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C073B5A and Rm,Rn */
	r4 &= r2;  /* 0C073B5C and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C073B5E tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073B68u, 6); goto L_0C073B68; } UPD(0x0C073B64u, 1); goto L_0C073B64; }  /* 0C073B60 bf/s */
L_0C073B64: BLKS(0x0C073B64u);
	{ IF(0x0C073B66u); ; /* slot nop */ UPD(0x0C073D50u, 3); goto L_0C073D50; }  /* 0C073B64 bra */
L_0C073B68: BLKS(0x0C073B68u);
	r10 = 0xC29D738u; UPD(0x0C073B6Au, 1);  /* 0C073B68 mov.l @(disp,pc),Rn */
	r13 = r6 & 0xFF;  /* 0C073B6A extu.b Rm,Rn */
	r2 = 0xC207508u; UPD(0x0C073B6Eu, 2);  /* 0C073B6C mov.l @(disp,pc),Rn */
	r13 += r13;  /* 0C073B6E add Rm,Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C073B72u, 2);  /* 0C073B70 mov.l @(disp,Rm),Rn */
	r4 = R32(r10); UPD(0x0C073B74u, 1);  /* 0C073B72 mov.l @Rm,Rn */
	r12 = R32(r2); UPD(0x0C073B76u, 1);  /* 0C073B74 mov.l @Rm,Rn */
	r4 += r9;  /* 0C073B76 add Rm,Rn */
	r5 = (r4 >> 16) | (r4 << 16);  /* 0C073B78 swap.w Rm,Rn */
	r12 += r13;  /* 0C073B7A add Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C073B7C exts.w Rm,Rn */
	r12 += 0xFFFFFFFEu;  /* 0C073B7E add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C073B82u, 6);  /* 0C073B80 mov.w @Rm,Rn */
	r7 = 0xC3C4174u; UPD(0x0C073B84u, 1);  /* 0C073B82 mov.l @(disp,pc),Rn */
	r5 = 0xC2A6940u; UPD(0x0C073B86u, 1);  /* 0C073B84 mov.l @(disp,pc),Rn */
	r3 = 0xFFFFu; UPD(0x0C073B88u, 1);  /* 0C073B86 mov.l @(disp,pc),Rn */
	W32(r7, r11); UPD(0x0C073B8Au, 1);  /* 0C073B88 mov.l Rm,@Rn */
	T = (r9 & r3) == 0;  /* 0C073B8A tst Rm,Rn */
	{ u32 c_ = T; W16(r5, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C073B94u, 4); goto L_0C073B94; } UPD(0x0C073B90u, 1); goto L_0C073B90; }  /* 0C073B8C bt/s */
L_0C073B90: BLKS(0x0C073B90u);
	r1 += 0x1u;  /* 0C073B90 add #imm,Rn */
	W16(r5, r1); UPD(0x0C073B94u, 2);  /* 0C073B92 mov.w Rm,@Rn */
L_0C073B94: BLKS(0x0C073B94u);
	r10 = 0xC3C4048u; UPD(0x0C073B96u, 1);  /* 0C073B94 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C073B96 mov Rm,Rn */
	r11 = R32(r10); UPD(0x0C073B9Au, 2);  /* 0C073B98 mov.l @Rm,Rn */
	r0 += 0x2u;  /* 0C073B9A add #imm,Rn */
	r12 = 0xFFFF0000u; UPD(0x0C073B9Eu, 2);  /* 0C073B9C mov.l @(disp,pc),Rn */
	r13 = 0xC29D72Eu; UPD(0x0C073BA0u, 1);  /* 0C073B9E mov.l @(disp,pc),Rn */
	r11 &= r12;  /* 0C073BA0 and Rm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C073BA4u, 2);  /* 0C073BA2 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C073BA6u, 1);  /* 0C073BA4 mov.w @Rm,Rn */
	r9 -= r11;  /* 0C073BA6 sub Rm,Rn */
	r3 = 0xC238018u; UPD(0x0C073BAAu, 2);  /* 0C073BA8 mov.l @(disp,pc),Rn */
	IF(0x0C073BAAu); r9 >>= 16;  /* 0C073BAA shlr16 Rn */
	r9 += r5;  /* 0C073BAC add Rm,Rn */
	W16(r3, r9); UPD(0x0C073BB0u, 3);  /* 0C073BAE mov.w Rm,@Rn */
	r13 = 0xFFFFFFF8u;  /* 0C073BB0 mov #imm,Rn */
	r5 = 0xC207504u; UPD(0x0C073BB4u, 2);  /* 0C073BB2 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C073BB6u, 1);  /* 0C073BB4 mov.l @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C073BB8u, 1);  /* 0C073BB6 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C073BBAu, 1);  /* 0C073BB8 mov.w @Rm,Rn */
	IF(0x0C073BBAu); r11 <<= 2;  /* 0C073BBA shll2 Rn */
	r7 = 0xC29D93Cu; UPD(0x0C073BBEu, 2);  /* 0C073BBC mov.l @(disp,pc),Rn */
	IF(0x0C073BBEu); ARG0(0x44DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C073BBE shad Rm,Rn */
	r11 += r7;  /* 0C073BC0 add Rm,Rn */
	W32(r14 + 0x18u, r9); UPD(0x0C073BC4u, 3);  /* 0C073BC2 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C073BC6u, 1);  /* 0C073BC4 mov.w @Rm,Rn */
	r9 = r4 & 0xFF;  /* 0C073BC6 extu.b Rm,Rn */
	r10 = 0xC233718u; UPD(0x0C073BCAu, 2);  /* 0C073BC8 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C073BCA add Rm,Rn */
	W16(r10, r9); UPD(0x0C073BCEu, 2);  /* 0C073BCC mov.w Rm,@Rn */
	r11 += 0x2u;  /* 0C073BCE add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r12 = v_; } UPD(0x0C073BD2u, 2);  /* 0C073BD0 mov.w @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C073BD4u, 1);  /* 0C073BD2 mov.w @Rm,Rn */
	r10 = r12 & 0xFF;  /* 0C073BD4 extu.b Rm,Rn */
	r0 = 0xC2B1820u; UPD(0x0C073BD8u, 2);  /* 0C073BD6 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C073BD8 add Rm,Rn */
	W16(r0, r10); UPD(0x0C073BDCu, 2);  /* 0C073BDA mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C073BDEu, 1);  /* 0C073BDC mov.w @Rm,Rn */
	r2 = 0xC228BF6u; UPD(0x0C073BE0u, 1);  /* 0C073BDE mov.l @(disp,pc),Rn */
	IF(0x0C073BE0u); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C073BE0 shad Rm,Rn */
	r7 = 0x80u; UPD(0x0C073BE4u, 2);  /* 0C073BE2 mov.w @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C073BE6u, 1);  /* 0C073BE4 mov.l Rm,@Rn */
	r7 &= r0;  /* 0C073BE6 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C073BE8 tst Rm,Rn */
	{ u32 c_ = T; W16(r2, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C073BF6u, 5); goto L_0C073BF6; } UPD(0x0C073BEEu, 1); goto L_0C073BEE; }  /* 0C073BEA bt/s */
L_0C073BEE: BLKS(0x0C073BEEu);
	r7 = 0xFFFFFF00u; UPD(0x0C073BF0u, 1);  /* 0C073BEE mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C073BF0 mov Rm,Rn */
	r4 |= r7;  /* 0C073BF2 or Rm,Rn */
	W16(r2, r4); UPD(0x0C073BF6u, 3);  /* 0C073BF4 mov.w Rm,@Rn */
L_0C073BF6: BLKS(0x0C073BF6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r11 = v_; } UPD(0x0C073BF8u, 1);  /* 0C073BF6 mov.w @Rm+,Rn */
	r4 = 0xC2B0398u; UPD(0x0C073BFAu, 1);  /* 0C073BF8 mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C073BFA extu.b Rm,Rn */
	r0 = 0x80u; UPD(0x0C073BFEu, 2);  /* 0C073BFC mov.w @(disp,pc),Rn */
	W16(r4, r7); UPD(0x0C073C00u, 1);  /* 0C073BFE mov.w Rm,@Rn */
	r0 &= r7;  /* 0C073C00 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C073C02 tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073C0Eu, 5); goto L_0C073C0E; } UPD(0x0C073C08u, 1); goto L_0C073C08; }  /* 0C073C04 bt/s */
L_0C073C08: BLKS(0x0C073C08u);
	r12 = 0xFFFFFF00u; UPD(0x0C073C0Au, 1);  /* 0C073C08 mov.w @(disp,pc),Rn */
	r7 |= r12;  /* 0C073C0A or Rm,Rn */
	W16(r4, r7); UPD(0x0C073C0Eu, 2);  /* 0C073C0C mov.w Rm,@Rn */
L_0C073C0E: BLKS(0x0C073C0Eu);
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C073C10u, 1);  /* 0C073C0E mov.w @Rm,Rn */
	IF(0x0C073C10u); ARG0(0x4CDCu); { s32 s_ = (s32)r13; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = (u32)((s32)r12 >> 31); else r12 = (u32)((s32)r12 >> ((~s_ & 31) + 1)); }  /* 0C073C10 shad Rm,Rn */
	r11 = 0xC28EDAEu; UPD(0x0C073C14u, 2);  /* 0C073C12 mov.l @(disp,pc),Rn */
	r7 = r12 & 0xFF;  /* 0C073C14 extu.b Rm,Rn */
	W16(r11, r7); UPD(0x0C073C18u, 2);  /* 0C073C16 mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C073C1Au, 1);  /* 0C073C18 mov.w @Rm+,Rn */
	r12 = 0xC2B1A24u; UPD(0x0C073C1Cu, 1);  /* 0C073C1A mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C073C1C extu.b Rm,Rn */
	W32(r5, r3); UPD(0x0C073C20u, 2);  /* 0C073C1E mov.l Rm,@Rn */
	W16(r12, r11); UPD(0x0C073C22u, 1);  /* 0C073C20 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C073C22 exts.w Rm,Rn */
	r0 = r3;  /* 0C073C24 mov Rm,Rn */
	r12 = 0xC22E020u; UPD(0x0C073C28u, 3);  /* 0C073C26 mov.l @(disp,pc),Rn */
	IF(0x0C073C28u); r0 <<= 16;  /* 0C073C28 shll16 Rn */
	r5 = (u32)(s32)(s16)r10;  /* 0C073C2A exts.w Rm,Rn */
	r0 |= r5;  /* 0C073C2C or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C073C30u, 4);  /* 0C073C2E mov.w @Rm,Rn */
	W32(r12, r0); UPD(0x0C073C32u, 1);  /* 0C073C30 mov.l Rm,@Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C073C34u, 1);  /* 0C073C32 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C073C36u, 1);  /* 0C073C34 mov.w @Rm,Rn */
	IF(0x0C073C36u); r1 <<= 16;  /* 0C073C36 shll16 Rn */
	W32(r14 + 0x20u, r0); UPD(0x0C073C3Au, 2);  /* 0C073C38 mov.l Rm,@(disp,Rn) */
	r1 |= r0;  /* 0C073C3A or Rm,Rn */
	r0 = r7;  /* 0C073C3C mov Rm,Rn */
	IF(0x0C073C3Eu); r0 <<= 16;  /* 0C073C3E shll16 Rn */
	W32(r14 + 0x24u, r0); UPD(0x0C073C42u, 4);  /* 0C073C40 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3C4158u; UPD(0x0C073C44u, 1);  /* 0C073C42 mov.l @(disp,pc),Rn */
	r0 |= r11;  /* 0C073C44 or Rm,Rn */
	W32(r4, r0); UPD(0x0C073C48u, 2);  /* 0C073C46 mov.l Rm,@Rn */
	r2 = 0xC2289E8u; UPD(0x0C073C4Au, 1);  /* 0C073C48 mov.l @(disp,pc),Rn */
	W32(r14 + 0x2Cu, r0); UPD(0x0C073C4Cu, 1);  /* 0C073C4A mov.l Rm,@(disp,Rn) */
	r4 = R32(r2); UPD(0x0C073C4Eu, 1);  /* 0C073C4C mov.l @Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C073C50u, 1);  /* 0C073C4E mov.l @(disp,pc),Rn */
	r12 = 0xC2B1814u; UPD(0x0C073C52u, 1);  /* 0C073C50 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C073C52 and Rm,Rn */
	r0 = (r4 >> 16) | (r4 << 16);  /* 0C073C54 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C073C56 exts.w Rm,Rn */
	W32(r12, r1); UPD(0x0C073C5Au, 4);  /* 0C073C58 mov.l Rm,@Rn */
	r6 ^= r2;  /* 0C073C5A xor Rm,Rn */
	r1 = r6;  /* 0C073C5C mov Rm,Rn */
	IF(0x0C073C5Eu); r1 >>= 8;  /* 0C073C5E shlr8 Rn */
	IF(0x0C073C60u); T = r1 & 1; r1 >>= 1;  /* 0C073C60 shlr Rn */
	r0 = r1;  /* 0C073C62 mov Rm,Rn */
	r4 = 0xC28610Cu; UPD(0x0C073C66u, 6);  /* 0C073C64 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C073C66 and #imm,r0 */
	W16(r4, r0); UPD(0x0C073C6Au, 2);  /* 0C073C68 mov.w Rm,@Rn */
	r2 = 0xCu;  /* 0C073C6A mov #imm,Rn */
	W32(r14 + 0x30u, r0); UPD(0x0C073C6Eu, 2);  /* 0C073C6C mov.l Rm,@(disp,Rn) */
	r12 = r7;  /* 0C073C6E mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C073C72u, 2);  /* 0C073C70 mov.w @(disp,pc),Rn */
	r0 &= r6;  /* 0C073C72 and Rm,Rn */
	IF(0x0C073C74u); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C073C74 shad Rm,Rn */
	r13 = 0xC234BF4u; UPD(0x0C073C78u, 3);  /* 0C073C76 mov.l @(disp,pc),Rn */
	r4 = 0xC000u; UPD(0x0C073C7Au, 1);  /* 0C073C78 mov.l @(disp,pc),Rn */
	W16(r13, r0); UPD(0x0C073C7Cu, 1);  /* 0C073C7A mov.w Rm,@Rn */
	r4 &= r6;  /* 0C073C7C and Rm,Rn */
	W32(r14 + 0x34u, r0); UPD(0x0C073C80u, 2);  /* 0C073C7E mov.l Rm,@(disp,Rn) */
	r13 = r4;  /* 0C073C80 mov Rm,Rn */
	r1 = R32(r14); UPD(0x0C073C84u, 2);  /* 0C073C82 mov.l @Rm,Rn */
	IF(0x0C073C84u); ARG0(0x4D2Du); { s32 s_ = (s32)r2; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C073C84 shld Rm,Rn */
	r0 = 0x2FFFFFFu; UPD(0x0C073C88u, 2);  /* 0C073C86 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C073C88 mov Rm,Rn */
	r0 &= r1;  /* 0C073C8A and Rm,Rn */
	r6 = 0x11000000u; UPD(0x0C073C8Eu, 3);  /* 0C073C8C mov.l @(disp,pc),Rn */
	r13 |= r0;  /* 0C073C8E or Rm,Rn */
	r13 |= r6;  /* 0C073C90 or Rm,Rn */
	r0 = 0xC232308u; UPD(0x0C073C94u, 3);  /* 0C073C92 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C073C94 add Rm,Rn */
	r6 = 0xFFE0u; UPD(0x0C073C98u, 2);  /* 0C073C96 mov.l @(disp,pc),Rn */
	W32(r0, r13); UPD(0x0C073C9Au, 1);  /* 0C073C98 mov.l Rm,@Rn */
	r3 &= r6;  /* 0C073C9A and Rm,Rn */
	r2 &= r6;  /* 0C073C9C and Rm,Rn */
	T = r2 == r3;  /* 0C073C9E cmp/eq Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C073CA0 mov #imm,Rn */
	r0 = r9;  /* 0C073CA2 mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C073CA4 negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C073CA6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C073CA8 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C073CAA negc Rm,Rn */
	T = (r1 & r9) == 0;  /* 0C073CAC tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073CB6u, 13); goto L_0C073CB6; } UPD(0x0C073CB2u, 1); goto L_0C073CB2; }  /* 0C073CAE bf/s */
L_0C073CB2: BLKS(0x0C073CB2u);
	{ r1 = R32(r14 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074470u, 3); goto L_0C074470; }  /* 0C073CB2 bra */
L_0C073CB6: BLKS(0x0C073CB6u);
	r2 = r5;  /* 0C073CB6 mov Rm,Rn */
	r5 += r11;  /* 0C073CB8 add Rm,Rn */
	r5 &= r6;  /* 0C073CBA and Rm,Rn */
	r2 &= r6;  /* 0C073CBC and Rm,Rn */
	T = r2 == r5;  /* 0C073CBE cmp/eq Rm,Rn */
	r6 = 0x1Fu;  /* 0C073CC0 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C073CC2 negc Rm,Rn */
	r6 &= r10;  /* 0C073CC4 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C073CC6 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C073CC8 negc Rm,Rn */
	T = (r1 & r5) == 0;  /* 0C073CCA tst Rm,Rn */
	{ u32 c_ = !T; r9 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073CD4u, 14); goto L_0C073CD4; } goto L_0C073CD0; }  /* 0C073CCC bf/s */
L_0C073CD0: BLKS(0x0C073CD0u);
	{ r3 = 0u - r0; /* slot neg Rm,Rn */ UPD(0x0C074200u, 4); goto L_0C074200; }  /* 0C073CD0 bra */
L_0C073CD4: BLKS(0x0C073CD4u);
	r12 = 0u - r0;  /* 0C073CD4 neg Rm,Rn */
	r12 += 0x1Fu;  /* 0C073CD6 add #imm,Rn */
	r0 = 0u - r6;  /* 0C073CD8 neg Rm,Rn */
	r7 -= r12;  /* 0C073CDA sub Rm,Rn */
	r10 = 0xC29D734u; UPD(0x0C073CDEu, 5);  /* 0C073CDC mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C073CDE add #imm,Rn */
	r11 = 0xC2B03A0u; UPD(0x0C073CE2u, 2);  /* 0C073CE0 mov.l @(disp,pc),Rn */
	r0 += 0x1Fu;  /* 0C073CE2 add #imm,Rn */
	r6 = 0xC28EDB0u; UPD(0x0C073CE6u, 2);  /* 0C073CE4 mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C073CE6 sub Rm,Rn */
	W16(r10, r7); UPD(0x0C073CEAu, 2);  /* 0C073CE8 mov.w Rm,@Rn */
	r2 = (u32)(s32)(s16)r12;  /* 0C073CEA exts.w Rm,Rn */
	W16(r11, r12); UPD(0x0C073CEEu, 2);  /* 0C073CEC mov.w Rm,@Rn */
	r10 = r0;  /* 0C073CEE mov Rm,Rn */
	W16(r6, r0); UPD(0x0C073CF2u, 2);  /* 0C073CF0 mov.w Rm,@Rn */
	r5 = r2;  /* 0C073CF2 mov Rm,Rn */
	r3 = 0xC3C544Cu; UPD(0x0C073CF6u, 2);  /* 0C073CF4 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C073CF6 mov Rm,Rn */
	r11 = 0xC22E2A8u; UPD(0x0C073CFAu, 2);  /* 0C073CF8 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C073CFA add #imm,Rn */
	r12 = 0xC2B1A44u; UPD(0x0C073CFEu, 2);  /* 0C073CFC mov.l @(disp,pc),Rn */
	IF(0x0C073CFEu); r5 <<= 16;  /* 0C073CFE shll16 Rn */
	IF(0x0C073D00u); r0 <<= 16;  /* 0C073D00 shll16 Rn */
	r1 = 0x4000u; UPD(0x0C073D04u, 3);  /* 0C073D02 mov.w @(disp,pc),Rn */
	W16(r3, r9); UPD(0x0C073D06u, 1);  /* 0C073D04 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C073D06 cmp/eq Rm,Rn */
	W32(r11, r5); UPD(0x0C073D0Au, 2);  /* 0C073D08 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r12, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073D12u, 3); goto L_0C073D12; } UPD(0x0C073D0Eu, 1); goto L_0C073D0E; }  /* 0C073D0A bf/s */
L_0C073D0E: BLKS(0x0C073D0Eu);
	{ r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0740E0u, 3); goto L_0C0740E0; }  /* 0C073D0E bra */
L_0C073D12: BLKS(0x0C073D12u);
	T = (s32)r4 > (s32)r1;  /* 0C073D12 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C073D1Cu, 4); goto L_0C073D1C; } goto L_0C073D18; }  /* 0C073D14 bf/s */
L_0C073D18: BLKS(0x0C073D18u);
	{ IF(0x0C073D1Au); ; /* slot nop */ UPD(0x0C073F00u, 4); goto L_0C073F00; }  /* 0C073D18 bra */
L_0C073D1C: BLKS(0x0C073D1Cu);
	{ u32 c_ = !T; r0 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073D24u, 3); goto L_0C073D24; } goto L_0C073D20; }  /* 0C073D1C bf/s */
L_0C073D20: BLKS(0x0C073D20u);
	{ r7 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C073E20u, 4); goto L_0C073E20; }  /* 0C073D20 bra */
L_0C073D24: BLKS(0x0C073D24u);
	r4 = 0xC20750Cu; UPD(0x0C073D26u, 1);  /* 0C073D24 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFFF3u;  /* 0C073D26 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C073D2Au, 2);  /* 0C073D28 mov.b @Rm,Rn */
	r10 = 0xFFFFFFFFu;  /* 0C073D2A mov #imm,Rn */
	r3 = 0xC207504u; UPD(0x0C073D2Eu, 2);  /* 0C073D2C mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C073D2E add #imm,Rn */
	r2 = R32(r3); UPD(0x0C073D32u, 2);  /* 0C073D30 mov.l @Rm,Rn */
	W8(r4, r7); UPD(0x0C073D34u, 1);  /* 0C073D32 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C073D36u, 1);  /* 0C073D34 mov.w @Rm+,Rn */
	r12 = r6;  /* 0C073D36 mov Rm,Rn */
	IF(0x0C073D38u); ARG0(0x4C0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = (u32)((s32)r12 >> 31); else r12 = (u32)((s32)r12 >> ((~s_ & 31) + 1)); }  /* 0C073D38 shad Rm,Rn */
	r0 = r12;  /* 0C073D3A mov Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C073D3C tst Rm,Rn */
	r0 ^= 0x1u;  /* 0C073D3E xor #imm,r0 */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r13 = r_; }  /* 0C073D40 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C073D42 and #imm,r0 */
	r13 &= r0;  /* 0C073D44 and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C073D46 tst Rm,Rn */
	{ u32 c_ = T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073D50u, 12); goto L_0C073D50; } UPD(0x0C073D4Cu, 1); goto L_0C073D4C; }  /* 0C073D48 bt/s */
L_0C073D4C: BLKS(0x0C073D4Cu);
	{ IF(0x0C073D4Eu); ; /* slot nop */ UPD(0x0C073B68u, 3); goto L_0C073B68; }  /* 0C073D4C bra */
L_0C073D50: BLKS(0x0C073D50u);
	r9 = 0xF0000000u; UPD(0x0C073D52u, 1);  /* 0C073D50 mov.l @(disp,pc),Rn */
	r14 += 0x38u;  /* 0C073D52 add #imm,Rn */
	r11 = 0xC3C415Cu; UPD(0x0C073D56u, 2);  /* 0C073D54 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C073D58u, 1);  /* 0C073D56 mov.l Rm,@Rn */
	W32(r11, r8); UPD(0x0C073D5Au, 1);  /* 0C073D58 mov.l Rm,@Rn */
	r15 = r14;  /* 0C073D5A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C073D5Eu, 2);  /* 0C073D5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C073D60u, 1);  /* 0C073D5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C073D62u, 1);  /* 0C073D60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C073D64u, 1);  /* 0C073D62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073D66u, 1);  /* 0C073D64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073D68u, 1);  /* 0C073D66 mov.l @Rm+,Rn */
	IF(0x0C073D68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073D68 rts */
L_0C073E20: BLKS(0x0C073E20u);
	r3 = 0xC2A6940u; UPD(0x0C073E22u, 1);  /* 0C073E20 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C073E24u, 1);  /* 0C073E22 mov.w @Rm,Rn */
	IF(0x0C073E24u); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C073E26u, 1);  /* 0C073E24 mov.w @(r0,Rm),Rn */
	r1 += r7;  /* 0C073E26 add Rm,Rn */
	r4 = 0xC3C4010u; UPD(0x0C073E2Au, 2);  /* 0C073E28 mov.l @(disp,pc),Rn */
	IF(0x0C073E2Au); r1 <<= 16;  /* 0C073E2A shll16 Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C073E2Eu, 2);  /* 0C073E2C mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C073E2E exts.w Rm,Rn */
	r3 = 0xC2B07B4u; UPD(0x0C073E32u, 2);  /* 0C073E30 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C073E32 add Rm,Rn */
	W32(r4, r1); UPD(0x0C073E36u, 2);  /* 0C073E34 mov.l Rm,@Rn */
	W32(r3, r2); UPD(0x0C073E38u, 1);  /* 0C073E36 mov.l Rm,@Rn */
	r1 += r5;  /* 0C073E38 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C073E3Cu, 2);  /* 0C073E3A mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C073E3C add Rm,Rn */
	r0 = 0xC3B1AFCu; UPD(0x0C073E40u, 2);  /* 0C073E3E mov.l @(disp,pc),Rn */
	r1 += r6;  /* 0C073E40 add Rm,Rn */
	r5 = 0xC2A6D8Cu; UPD(0x0C073E44u, 2);  /* 0C073E42 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C073E44 add #imm,Rn */
	W32(r0, r1); UPD(0x0C073E48u, 2);  /* 0C073E46 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C073E4Au, 1);  /* 0C073E48 mov.l Rm,@Rn */
	r1 = 0xC22E020u; UPD(0x0C073E4Cu, 1);  /* 0C073E4A mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C073E4Eu, 1);  /* 0C073E4C mov.l Rm,@Rn */
	r10 = R32(r1); UPD(0x0C073E50u, 1);  /* 0C073E4E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E50 add #imm,Rn */
	W32(r8, r10); UPD(0x0C073E54u, 2);  /* 0C073E52 mov.l Rm,@Rn */
	r13 = R32(r4); UPD(0x0C073E56u, 1);  /* 0C073E54 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E56 add #imm,Rn */
	r4 = R32(r3); UPD(0x0C073E5Au, 2);  /* 0C073E58 mov.l @Rm,Rn */
	r13 |= r4;  /* 0C073E5A or Rm,Rn */
	W32(r8, r13); UPD(0x0C073E5Eu, 2);  /* 0C073E5C mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C073E60u, 1);  /* 0C073E5E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E60 add #imm,Rn */
	r5 |= r7;  /* 0C073E62 or Rm,Rn */
	W32(r8, r5); UPD(0x0C073E66u, 3);  /* 0C073E64 mov.l Rm,@Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C073E68u, 1);  /* 0C073E66 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C073E68 add #imm,Rn */
	W32(r8, r4); UPD(0x0C073E6Cu, 2);  /* 0C073E6A mov.l Rm,@Rn */
	r5 = 0xC232308u; UPD(0x0C073E6Eu, 1);  /* 0C073E6C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073E6E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C073E72u, 2);  /* 0C073E70 mov.l @Rm,Rn */
	W32(r8, r10); UPD(0x0C073E74u, 1);  /* 0C073E72 mov.l Rm,@Rn */
	r10 = 0xC22E020u; UPD(0x0C073E76u, 1);  /* 0C073E74 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073E76 add #imm,Rn */
	r13 = R32(r10); UPD(0x0C073E7Au, 2);  /* 0C073E78 mov.l @Rm,Rn */
	r1 = R32(r11); UPD(0x0C073E7Cu, 1);  /* 0C073E7A mov.l @Rm,Rn */
	r13 += r1;  /* 0C073E7C add Rm,Rn */
	r13 += r6;  /* 0C073E7E add Rm,Rn */
	W32(r8, r13); UPD(0x0C073E82u, 3);  /* 0C073E80 mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C073E84u, 1);  /* 0C073E82 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E84 add #imm,Rn */
	r6 = R32(r0); UPD(0x0C073E88u, 2);  /* 0C073E86 mov.l @Rm,Rn */
	r6 |= r1;  /* 0C073E88 or Rm,Rn */
	W32(r8, r6); UPD(0x0C073E8Cu, 2);  /* 0C073E8A mov.l Rm,@Rn */
	r13 = R32(r12); UPD(0x0C073E8Eu, 1);  /* 0C073E8C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E8E add #imm,Rn */
	r13 |= r7;  /* 0C073E90 or Rm,Rn */
	W32(r8, r13); UPD(0x0C073E94u, 3);  /* 0C073E92 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C073E94 add #imm,Rn */
	W32(r8, r4); UPD(0x0C073E98u, 2);  /* 0C073E96 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C073E9Au, 1);  /* 0C073E98 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073E9A add #imm,Rn */
	W32(r8, r3); UPD(0x0C073E9Eu, 2);  /* 0C073E9C mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C073EA0u, 1);  /* 0C073E9E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073EA0 add #imm,Rn */
	r0 += r7;  /* 0C073EA2 add Rm,Rn */
	r0 += 0x1u;  /* 0C073EA4 add #imm,Rn */
	W32(r8, r0); UPD(0x0C073EA8u, 4);  /* 0C073EA6 mov.l Rm,@Rn */
	r6 = 0xC3C4010u; UPD(0x0C073EAAu, 1);  /* 0C073EA8 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073EAA add #imm,Rn */
	r2 = 0xC2A6D8Cu; UPD(0x0C073EAEu, 2);  /* 0C073EAC mov.l @(disp,pc),Rn */
	r13 = R32(r6); UPD(0x0C073EB0u, 1);  /* 0C073EAE mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C073EB2u, 1);  /* 0C073EB0 mov.l @Rm,Rn */
	r13 |= r1;  /* 0C073EB2 or Rm,Rn */
	W32(r8, r13); UPD(0x0C073EB6u, 2);  /* 0C073EB4 mov.l Rm,@Rn */
	r3 = R32(r11); UPD(0x0C073EB8u, 1);  /* 0C073EB6 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C073EB8 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C073EBA add #imm,Rn */
	r3 |= r13;  /* 0C073EBC or Rm,Rn */
	W32(r8, r3); UPD(0x0C073EC0u, 4);  /* 0C073EBE mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C073EC0 add #imm,Rn */
	W32(r8, r4); UPD(0x0C073EC4u, 2);  /* 0C073EC2 mov.l Rm,@Rn */
	r9 = R32(r5); UPD(0x0C073EC6u, 1);  /* 0C073EC4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073EC6 add #imm,Rn */
	W32(r8, r9); UPD(0x0C073ECAu, 2);  /* 0C073EC8 mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C073ECCu, 1);  /* 0C073ECA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073ECC add #imm,Rn */
	r6 = R32(r11); UPD(0x0C073ED0u, 2);  /* 0C073ECE mov.l @Rm,Rn */
	r10 = 0x10001u; UPD(0x0C073ED2u, 1);  /* 0C073ED0 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C073ED2 add Rm,Rn */
	r0 += r7;  /* 0C073ED4 add Rm,Rn */
	r0 += r10;  /* 0C073ED6 add Rm,Rn */
	W32(r8, r0); UPD(0x0C073EDAu, 4);  /* 0C073ED8 mov.l Rm,@Rn */
	r2 = 0xC3B1AFCu; UPD(0x0C073EDCu, 1);  /* 0C073EDA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073EDC add #imm,Rn */
	r1 = 0xC2A6D8Cu; UPD(0x0C073EE0u, 2);  /* 0C073EDE mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C073EE2u, 1);  /* 0C073EE0 mov.l @Rm,Rn */
	r4 = R32(r1); UPD(0x0C073EE4u, 1);  /* 0C073EE2 mov.l @Rm,Rn */
	r3 |= r4;  /* 0C073EE4 or Rm,Rn */
	W32(r8, r3); UPD(0x0C073EE8u, 2);  /* 0C073EE6 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C073EEAu, 1);  /* 0C073EE8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073EEA add #imm,Rn */
	r9 |= r13;  /* 0C073EEC or Rm,Rn */
	W32(r8, r9); UPD(0x0C073EF0u, 3);  /* 0C073EEE mov.l Rm,@Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C073EF2u, 1);  /* 0C073EF0 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C073EF2 add #imm,Rn */
	UPD(0x0C073EF4u, 1);
L_0C073EF4: BLKS(0x0C073EF4u);
	W32(r8, r6); UPD(0x0C073EF6u, 1);  /* 0C073EF4 mov.l Rm,@Rn */
	IF(0x0C073EF6u); ;  /* 0C073EF6 nop */
	UPD(0x0C073EF8u, 1);
L_0C073EF8: BLKS(0x0C073EF8u);
	r8 += 0x4u;  /* 0C073EF8 add #imm,Rn */
	UPD(0x0C073EFAu, 1);
L_0C073EFA: BLKS(0x0C073EFAu);
	{ IF(0x0C073EFCu); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C073EFA bra */
L_0C073F00: BLKS(0x0C073F00u);
	r7 = 0x8000u; UPD(0x0C073F02u, 1);  /* 0C073F00 mov.l @(disp,pc),Rn */
	T = r4 == r7;  /* 0C073F02 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C073F0Cu, 4); goto L_0C073F0C; }  /* 0C073F04 bf */
L_0C073F06: BLKS(0x0C073F06u);
	r4 = R32(r14 + 0x1Cu); UPD(0x0C073F08u, 1);  /* 0C073F06 mov.l @(disp,Rm),Rn */
	{ r4 += r2; /* slot add Rm,Rn */ UPD(0x0C074000u, 3); goto L_0C074000; }  /* 0C073F08 bra */
L_0C073F0C: BLKS(0x0C073F0Cu);
	r5 = 0xC000u; UPD(0x0C073F0Eu, 1);  /* 0C073F0C mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C073F0E cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C073EFAu, 4); goto L_0C073EFA; } goto L_0C073F14; }  /* 0C073F10 bf/s */
L_0C073F14: BLKS(0x0C073F14u);
	r1 = 0xC2A6940u; UPD(0x0C073F16u, 2);  /* 0C073F14 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x1Cu); UPD(0x0C073F18u, 1);  /* 0C073F16 mov.l @(disp,Rm),Rn */
	r6 += r14;  /* 0C073F18 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C073F1Cu, 2);  /* 0C073F1A mov.w @Rm,Rn */
	r7 += r2;  /* 0C073F1C add Rm,Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C073F20u, 2);  /* 0C073F1E mov.l @(disp,Rm),Rn */
	r3 -= r7;  /* 0C073F20 sub Rm,Rn */
	r3 -= r2;  /* 0C073F22 sub Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C073F26u, 3);  /* 0C073F24 mov.w @Rm,Rn */
	r1 = 0x36u;  /* 0C073F26 mov #imm,Rn */
	r6 = (u32)(s32)(s16)r10;  /* 0C073F28 exts.w Rm,Rn */
	r10 = R32(r14 + 0x20u); UPD(0x0C073F2Cu, 3);  /* 0C073F2A mov.l @(disp,Rm),Rn */
	r1 += r14;  /* 0C073F2C add Rm,Rn */
	r5 = 0xC3B1AFCu; UPD(0x0C073F30u, 2);  /* 0C073F2E mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C073F30 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C073F34u, 2);  /* 0C073F32 mov.w @Rm,Rn */
	r10 += r6;  /* 0C073F34 add Rm,Rn */
	IF(0x0C073F36u); r3 <<= 16;  /* 0C073F36 shll16 Rn */
	W32(r5, r3); UPD(0x0C073F3Au, 3);  /* 0C073F38 mov.l Rm,@Rn */
	r2 -= r10;  /* 0C073F3A sub Rm,Rn */
	r2 -= r4;  /* 0C073F3C sub Rm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C073F40u, 3);  /* 0C073F3E mov.l @(disp,pc),Rn */
	r3 -= r0;  /* 0C073F40 sub Rm,Rn */
	r7 = 0xC2A6D8Cu; UPD(0x0C073F44u, 2);  /* 0C073F42 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C073F44 add Rm,Rn */
	r4 = 0xC239460u; UPD(0x0C073F48u, 2);  /* 0C073F46 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C073F48 add #imm,Rn */
	W32(r7, r2); UPD(0x0C073F4Cu, 2);  /* 0C073F4A mov.l Rm,@Rn */
	r9 = (u32)(s32)(s16)r9;  /* 0C073F4C exts.w Rm,Rn */
	W32(r4, r3); UPD(0x0C073F50u, 2);  /* 0C073F4E mov.l Rm,@Rn */
	r2 -= r9;  /* 0C073F50 sub Rm,Rn */
	r3 = 0xC3C5434u; UPD(0x0C073F54u, 2);  /* 0C073F52 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C073F54 add #imm,Rn */
	W32(r3, r2); UPD(0x0C073F58u, 2);  /* 0C073F56 mov.l Rm,@Rn */
	r10 = 0xC22E020u; UPD(0x0C073F5Au, 1);  /* 0C073F58 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C073F5Cu, 1);  /* 0C073F5A mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C073F5Eu, 1);  /* 0C073F5C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F5E add #imm,Rn */
	W32(r8, r0); UPD(0x0C073F62u, 2);  /* 0C073F60 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C073F64u, 1);  /* 0C073F62 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F64 add #imm,Rn */
	r13 = R32(r5); UPD(0x0C073F68u, 2);  /* 0C073F66 mov.l @Rm,Rn */
	r13 |= r1;  /* 0C073F68 or Rm,Rn */
	W32(r8, r13); UPD(0x0C073F6Cu, 2);  /* 0C073F6A mov.l Rm,@Rn */
	r10 = R32(r11); UPD(0x0C073F6Eu, 1);  /* 0C073F6C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F6E add #imm,Rn */
	r10 |= r6;  /* 0C073F70 or Rm,Rn */
	W32(r8, r10); UPD(0x0C073F74u, 3);  /* 0C073F72 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C073F76u, 1);  /* 0C073F74 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C073F76 add #imm,Rn */
	W32(r8, r10); UPD(0x0C073F7Au, 2);  /* 0C073F78 mov.l Rm,@Rn */
	r13 = 0xC232308u; UPD(0x0C073F7Cu, 1);  /* 0C073F7A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073F7C add #imm,Rn */
	r0 = R32(r13); UPD(0x0C073F80u, 2);  /* 0C073F7E mov.l @Rm,Rn */
	r2 = 0xC22E020u; UPD(0x0C073F82u, 1);  /* 0C073F80 mov.l @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C073F84u, 1);  /* 0C073F82 mov.l Rm,@Rn */
	r0 = R32(r2); UPD(0x0C073F86u, 1);  /* 0C073F84 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F86 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C073F8Au, 2);  /* 0C073F88 mov.l @Rm,Rn */
	r0 += r2; UPD(0x0C073F8Cu, 1);  /* 0C073F8A add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C073F8Eu, 1);  /* 0C073F8C mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C073F8E add Rm,Rn */
	W32(r8, r0); UPD(0x0C073F92u, 2);  /* 0C073F90 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C073F94u, 1);  /* 0C073F92 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F94 add #imm,Rn */
	r0 = R32(r4); UPD(0x0C073F98u, 2);  /* 0C073F96 mov.l @Rm,Rn */
	r0 |= r1;  /* 0C073F98 or Rm,Rn */
	W32(r8, r0); UPD(0x0C073F9Cu, 2);  /* 0C073F9A mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C073F9Eu, 1);  /* 0C073F9C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073F9E add #imm,Rn */
	r7 |= r6;  /* 0C073FA0 or Rm,Rn */
	W32(r8, r7); UPD(0x0C073FA4u, 3);  /* 0C073FA2 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C073FA4 add #imm,Rn */
	W32(r8, r10); UPD(0x0C073FA8u, 2);  /* 0C073FA6 mov.l Rm,@Rn */
	r2 = R32(r13); UPD(0x0C073FAAu, 1);  /* 0C073FA8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FAA add #imm,Rn */
	W32(r8, r2); UPD(0x0C073FAEu, 2);  /* 0C073FAC mov.l Rm,@Rn */
	r1 = 0xC22E020u; UPD(0x0C073FB0u, 1);  /* 0C073FAE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073FB0 add #imm,Rn */
	r0 = R32(r1); UPD(0x0C073FB4u, 2);  /* 0C073FB2 mov.l @Rm,Rn */
	r0 += r6;  /* 0C073FB4 add Rm,Rn */
	r0 += 0x1u;  /* 0C073FB6 add #imm,Rn */
	W32(r8, r0); UPD(0x0C073FBAu, 3);  /* 0C073FB8 mov.l Rm,@Rn */
	r7 = R32(r5); UPD(0x0C073FBCu, 1);  /* 0C073FBA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FBC add #imm,Rn */
	r5 = R32(r3); UPD(0x0C073FC0u, 2);  /* 0C073FBE mov.l @Rm,Rn */
	r7 |= r5;  /* 0C073FC0 or Rm,Rn */
	W32(r8, r7); UPD(0x0C073FC4u, 2);  /* 0C073FC2 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C073FC6u, 1);  /* 0C073FC4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FC6 add #imm,Rn */
	r0 |= r9;  /* 0C073FC8 or Rm,Rn */
	W32(r8, r0); UPD(0x0C073FCCu, 3);  /* 0C073FCA mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C073FCC add #imm,Rn */
	W32(r8, r10); UPD(0x0C073FD0u, 2);  /* 0C073FCE mov.l Rm,@Rn */
	r2 = R32(r13); UPD(0x0C073FD2u, 1);  /* 0C073FD0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FD2 add #imm,Rn */
	W32(r8, r2); UPD(0x0C073FD6u, 2);  /* 0C073FD4 mov.l Rm,@Rn */
	r1 = 0xC22E020u; UPD(0x0C073FD8u, 1);  /* 0C073FD6 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C073FD8 add #imm,Rn */
	r13 = R32(r1); UPD(0x0C073FDCu, 2);  /* 0C073FDA mov.l @Rm,Rn */
	r7 = R32(r11); UPD(0x0C073FDEu, 1);  /* 0C073FDC mov.l @Rm,Rn */
	r5 = 0x10001u; UPD(0x0C073FE0u, 1);  /* 0C073FDE mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C073FE0 add Rm,Rn */
	r13 += r6;  /* 0C073FE2 add Rm,Rn */
	r13 += r5;  /* 0C073FE4 add Rm,Rn */
	W32(r8, r13); UPD(0x0C073FE8u, 4);  /* 0C073FE6 mov.l Rm,@Rn */
	r11 = R32(r4); UPD(0x0C073FEAu, 1);  /* 0C073FE8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FEA add #imm,Rn */
	r6 = R32(r3); UPD(0x0C073FEEu, 2);  /* 0C073FEC mov.l @Rm,Rn */
	r11 |= r6;  /* 0C073FEE or Rm,Rn */
	W32(r8, r11); UPD(0x0C073FF2u, 2);  /* 0C073FF0 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C073FF4u, 1);  /* 0C073FF2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C073FF4 add #imm,Rn */
	r1 |= r9;  /* 0C073FF6 or Rm,Rn */
	UPD(0x0C073FF8u, 2);
L_0C073FF8: BLKS(0x0C073FF8u);
	W32(r8, r1); UPD(0x0C073FFAu, 1);  /* 0C073FF8 mov.l Rm,@Rn */
L_0C073FFA: BLKS(0x0C073FFAu);
	r8 += 0x4u;  /* 0C073FFA add #imm,Rn */
	UPD(0x0C073FFCu, 1);
L_0C073FFC: BLKS(0x0C073FFCu);
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 3); goto L_0C073EF8; }  /* 0C073FFC bra */
L_0C074000: BLKS(0x0C074000u);
	r6 = 0xC2A6940u; UPD(0x0C074002u, 1);  /* 0C074000 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r6); UPD(0x0C074004u, 1);  /* 0C074002 mov.w @Rm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C074006u, 1);  /* 0C074004 mov.l @(disp,Rm),Rn */
	r1 -= r4;  /* 0C074006 sub Rm,Rn */
	r1 -= r5;  /* 0C074008 sub Rm,Rn */
	r5 = 0xC3B1AFCu; UPD(0x0C07400Cu, 3);  /* 0C07400A mov.l @(disp,pc),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C07400C add #imm,Rn */
	IF(0x0C07400Eu); r1 <<= 16;  /* 0C07400E shll16 Rn */
	W32(r5, r1); UPD(0x0C074012u, 3);  /* 0C074010 mov.l Rm,@Rn */
	r7 = 0xFFFF0000u; UPD(0x0C074014u, 1);  /* 0C074012 mov.l @(disp,pc),Rn */
	r1 -= r0;  /* 0C074014 sub Rm,Rn */
	r3 = 0xC239460u; UPD(0x0C074018u, 2);  /* 0C074016 mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C074018 add Rm,Rn */
	W32(r3, r1); UPD(0x0C07401Cu, 2);  /* 0C07401A mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C07401C mov #imm,Rn */
	IF(0x0C07401Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074020u, 2);  /* 0C07401E mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C074020 exts.w Rm,Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C074024u, 2);  /* 0C074022 mov.l @(disp,Rm),Rn */
	r3 = 0xC2B07B4u; UPD(0x0C074026u, 1);  /* 0C074024 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C074026 add Rm,Rn */
	W32(r3, r4); UPD(0x0C07402Au, 2);  /* 0C074028 mov.l Rm,@Rn */
	r6 = 0xC2A6D8Cu; UPD(0x0C07402Cu, 1);  /* 0C07402A mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C07402C add Rm,Rn */
	r4 += 0x1u;  /* 0C07402E add #imm,Rn */
	W32(r6, r4); UPD(0x0C074032u, 3);  /* 0C074030 mov.l Rm,@Rn */
	W32(r8, r13); UPD(0x0C074034u, 1);  /* 0C074032 mov.l Rm,@Rn */
	r4 = 0xC22E020u; UPD(0x0C074036u, 1);  /* 0C074034 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074036 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C07403Au, 2);  /* 0C074038 mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C07403Cu, 1);  /* 0C07403A mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C07403Eu, 1);  /* 0C07403C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07403E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C074042u, 2);  /* 0C074040 mov.l @Rm,Rn */
	r10 |= r1;  /* 0C074042 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074046u, 2);  /* 0C074044 mov.l Rm,@Rn */
	r13 = R32(r11); UPD(0x0C074048u, 1);  /* 0C074046 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074048 add #imm,Rn */
	r13 |= r7;  /* 0C07404A or Rm,Rn */
	W32(r8, r13); UPD(0x0C07404Eu, 3);  /* 0C07404C mov.l Rm,@Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C074050u, 1);  /* 0C07404E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074050 add #imm,Rn */
	W32(r8, r13); UPD(0x0C074054u, 2);  /* 0C074052 mov.l Rm,@Rn */
	r10 = 0xC232308u; UPD(0x0C074056u, 1);  /* 0C074054 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074056 add #imm,Rn */
	r0 = R32(r10); UPD(0x0C07405Au, 2);  /* 0C074058 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C07405Cu, 1);  /* 0C07405A mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C07405Eu, 1);  /* 0C07405C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07405E add #imm,Rn */
	r0 = R32(r4); UPD(0x0C074062u, 2);  /* 0C074060 mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C074064u, 1);  /* 0C074062 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C074064 add Rm,Rn */
	r0 += r2;  /* 0C074066 add Rm,Rn */
	W32(r8, r0); UPD(0x0C07406Au, 3);  /* 0C074068 mov.l Rm,@Rn */
	r0 = 0xC239460u; UPD(0x0C07406Cu, 1);  /* 0C07406A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07406C add #imm,Rn */
	r1 = R32(r3); UPD(0x0C074070u, 2);  /* 0C07406E mov.l @Rm,Rn */
	r5 = R32(r0); UPD(0x0C074072u, 1);  /* 0C074070 mov.l @Rm,Rn */
	r5 |= r1;  /* 0C074072 or Rm,Rn */
	W32(r8, r5); UPD(0x0C074076u, 2);  /* 0C074074 mov.l Rm,@Rn */
	r3 = R32(r12); UPD(0x0C074078u, 1);  /* 0C074076 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074078 add #imm,Rn */
	r3 |= r7;  /* 0C07407A or Rm,Rn */
	W32(r8, r3); UPD(0x0C07407Eu, 3);  /* 0C07407C mov.l Rm,@Rn */
	r8 += 0x4u; UPD(0x0C074080u, 1);  /* 0C07407E add #imm,Rn */
	W32(r8, r13); UPD(0x0C074082u, 1);  /* 0C074080 mov.l Rm,@Rn */
	r5 = R32(r10); UPD(0x0C074084u, 1);  /* 0C074082 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074084 add #imm,Rn */
	W32(r8, r5); UPD(0x0C074088u, 2);  /* 0C074086 mov.l Rm,@Rn */
	r2 = R32(r4); UPD(0x0C07408Au, 1);  /* 0C074088 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07408A add #imm,Rn */
	r2 += r7;  /* 0C07408C add Rm,Rn */
	r2 += 0x1u;  /* 0C07408E add #imm,Rn */
	W32(r8, r2); UPD(0x0C074092u, 4);  /* 0C074090 mov.l Rm,@Rn */
	r3 = 0xC3B1AFCu; UPD(0x0C074094u, 1);  /* 0C074092 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074094 add #imm,Rn */
	r5 = R32(r3); UPD(0x0C074098u, 2);  /* 0C074096 mov.l @Rm,Rn */
	r1 = R32(r6); UPD(0x0C07409Au, 1);  /* 0C074098 mov.l @Rm,Rn */
	r5 |= r1;  /* 0C07409A or Rm,Rn */
	W32(r8, r5); UPD(0x0C07409Eu, 2);  /* 0C07409C mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)r9;  /* 0C07409E exts.w Rm,Rn */
	r9 = R32(r11); UPD(0x0C0740A2u, 2);  /* 0C0740A0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0740A2 add #imm,Rn */
	r9 |= r5;  /* 0C0740A4 or Rm,Rn */
	W32(r8, r9); UPD(0x0C0740A8u, 3);  /* 0C0740A6 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0740A8 add #imm,Rn */
	W32(r8, r13); UPD(0x0C0740ACu, 2);  /* 0C0740AA mov.l Rm,@Rn */
	r2 = R32(r10); UPD(0x0C0740AEu, 1);  /* 0C0740AC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0740AE add #imm,Rn */
	W32(r8, r2); UPD(0x0C0740B2u, 2);  /* 0C0740B0 mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C0740B4u, 1);  /* 0C0740B2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0740B4 add #imm,Rn */
	r3 = R32(r11); UPD(0x0C0740B8u, 2);  /* 0C0740B6 mov.l @Rm,Rn */
	r1 = 0x10001u; UPD(0x0C0740BAu, 1);  /* 0C0740B8 mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C0740BA add Rm,Rn */
	r10 += r7;  /* 0C0740BC add Rm,Rn */
	r10 += r1;  /* 0C0740BE add Rm,Rn */
	W32(r8, r10); UPD(0x0C0740C2u, 4);  /* 0C0740C0 mov.l Rm,@Rn */
	r9 = R32(r0); UPD(0x0C0740C4u, 1);  /* 0C0740C2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0740C4 add #imm,Rn */
	r4 = R32(r6); UPD(0x0C0740C8u, 2);  /* 0C0740C6 mov.l @Rm,Rn */
	r9 |= r4;  /* 0C0740C8 or Rm,Rn */
	W32(r8, r9); UPD(0x0C0740CCu, 2);  /* 0C0740CA mov.l Rm,@Rn */
	r11 = R32(r12); UPD(0x0C0740CEu, 1);  /* 0C0740CC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0740CE add #imm,Rn */
	r11 |= r5;  /* 0C0740D0 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0740D4u, 3);  /* 0C0740D2 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0740D4 add #imm,Rn */
	{ W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 4); goto L_0C073EF8; }  /* 0C0740D6 bra */
L_0C0740E0: BLKS(0x0C0740E0u);
	r2 = 0xC2A6940u; UPD(0x0C0740E2u, 1);  /* 0C0740E0 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C0740E4u, 1);  /* 0C0740E2 mov.w @Rm,Rn */
	r6 = 0xC3C4010u; UPD(0x0C0740E6u, 1);  /* 0C0740E4 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C0740E6 add Rm,Rn */
	IF(0x0C0740E8u); r7 <<= 16;  /* 0C0740E8 shll16 Rn */
	W32(r6, r7); UPD(0x0C0740ECu, 3);  /* 0C0740EA mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C0740EC mov #imm,Rn */
	r1 = 0x10000u; UPD(0x0C0740F0u, 2);  /* 0C0740EE mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C0740F0 add Rm,Rn */
	r3 = 0xC3B1AFCu; UPD(0x0C0740F4u, 2);  /* 0C0740F2 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C0740F4 add Rm,Rn */
	W32(r3, r7); UPD(0x0C0740F8u, 2);  /* 0C0740F6 mov.l Rm,@Rn */
	IF(0x0C0740F8u); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0740FAu, 1);  /* 0C0740F8 mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C0740FA exts.w Rm,Rn */
	r4 = R32(r14 + 0x20u); UPD(0x0C0740FEu, 2);  /* 0C0740FC mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C0740FE mov #imm,Rn */
	IF(0x0C074100u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074102u, 2);  /* 0C074100 mov.w @(r0,Rm),Rn */
	r4 += r7;  /* 0C074102 add Rm,Rn */
	r1 -= r4;  /* 0C074104 sub Rm,Rn */
	r3 = 0xC2A6D8Cu; UPD(0x0C074108u, 3);  /* 0C074106 mov.l @(disp,pc),Rn */
	r1 -= r5;  /* 0C074108 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C07410A add #imm,Rn */
	W32(r3, r1); UPD(0x0C07410Eu, 3);  /* 0C07410C mov.l Rm,@Rn */
	r4 = (u32)(s32)(s16)r9;  /* 0C07410E exts.w Rm,Rn */
	r5 = 0xC3C5434u; UPD(0x0C074112u, 2);  /* 0C074110 mov.l @(disp,pc),Rn */
	r1 -= r4;  /* 0C074112 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C074114 add #imm,Rn */
	W32(r5, r1); UPD(0x0C074118u, 3);  /* 0C074116 mov.l Rm,@Rn */
	r9 = 0xC22E020u; UPD(0x0C07411Au, 1);  /* 0C074118 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C07411Cu, 1);  /* 0C07411A mov.l Rm,@Rn */
	r2 = R32(r9); UPD(0x0C07411Eu, 1);  /* 0C07411C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07411E add #imm,Rn */
	W32(r8, r2); UPD(0x0C074122u, 2);  /* 0C074120 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C074124u, 1);  /* 0C074122 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074124 add #imm,Rn */
	r10 = R32(r6); UPD(0x0C074128u, 2);  /* 0C074126 mov.l @Rm,Rn */
	r10 |= r13;  /* 0C074128 or Rm,Rn */
	W32(r8, r10); UPD(0x0C07412Cu, 2);  /* 0C07412A mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C07412Eu, 1);  /* 0C07412C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07412E add #imm,Rn */
	r0 |= r7;  /* 0C074130 or Rm,Rn */
	W32(r8, r0); UPD(0x0C074134u, 3);  /* 0C074132 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C074136u, 1);  /* 0C074134 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074136 add #imm,Rn */
	W32(r8, r10); UPD(0x0C07413Au, 2);  /* 0C074138 mov.l Rm,@Rn */
	r0 = 0xC232308u; UPD(0x0C07413Cu, 1);  /* 0C07413A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07413C add #imm,Rn */
	r2 = R32(r0); UPD(0x0C074140u, 2);  /* 0C07413E mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C074142u, 1);  /* 0C074140 mov.l Rm,@Rn */
	r13 = R32(r9); UPD(0x0C074144u, 1);  /* 0C074142 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074144 add #imm,Rn */
	r1 = R32(r11); UPD(0x0C074148u, 2);  /* 0C074146 mov.l @Rm,Rn */
	r9 = 0x10000u; UPD(0x0C07414Au, 1);  /* 0C074148 mov.l @(disp,pc),Rn */
	r13 += r1;  /* 0C07414A add Rm,Rn */
	r13 += r9;  /* 0C07414C add Rm,Rn */
	W32(r8, r13); UPD(0x0C074150u, 3);  /* 0C07414E mov.l Rm,@Rn */
	r13 = 0xC3B1AFCu; UPD(0x0C074152u, 1);  /* 0C074150 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074152 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C074156u, 2);  /* 0C074154 mov.l @Rm,Rn */
	r9 = R32(r13); UPD(0x0C074158u, 1);  /* 0C074156 mov.l @Rm,Rn */
	r9 |= r1;  /* 0C074158 or Rm,Rn */
	W32(r8, r9); UPD(0x0C07415Cu, 2);  /* 0C07415A mov.l Rm,@Rn */
	r3 = R32(r12); UPD(0x0C07415Eu, 1);  /* 0C07415C mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C074160u, 1);  /* 0C07415E add #imm,Rn */
	r3 |= r7;  /* 0C074160 or Rm,Rn */
	W32(r8, r3); UPD(0x0C074164u, 2);  /* 0C074162 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C074164 add #imm,Rn */
	W32(r8, r10); UPD(0x0C074168u, 2);  /* 0C074166 mov.l Rm,@Rn */
	r9 = R32(r0); UPD(0x0C07416Au, 1);  /* 0C074168 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07416A add #imm,Rn */
	W32(r8, r9); UPD(0x0C07416Eu, 2);  /* 0C07416C mov.l Rm,@Rn */
	r9 = 0xC22E020u; UPD(0x0C074170u, 1);  /* 0C07416E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074170 add #imm,Rn */
	r2 = R32(r9); UPD(0x0C074174u, 2);  /* 0C074172 mov.l @Rm,Rn */
	r2 += r7;  /* 0C074174 add Rm,Rn */
	r2 += 0x1u;  /* 0C074176 add #imm,Rn */
	W32(r8, r2); UPD(0x0C07417Au, 3);  /* 0C074178 mov.l Rm,@Rn */
	r10 = R32(r6); UPD(0x0C07417Cu, 1);  /* 0C07417A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07417C add #imm,Rn */
	r1 = R32(r5); UPD(0x0C074180u, 2);  /* 0C07417E mov.l @Rm,Rn */
	r10 |= r1;  /* 0C074180 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074184u, 2);  /* 0C074182 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C074186u, 1);  /* 0C074184 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074186 add #imm,Rn */
	r0 |= r4;  /* 0C074188 or Rm,Rn */
	W32(r8, r0); UPD(0x0C07418Cu, 3);  /* 0C07418A mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C07418Eu, 1);  /* 0C07418C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07418E add #imm,Rn */
	W32(r8, r0); UPD(0x0C074192u, 2);  /* 0C074190 mov.l Rm,@Rn */
	r3 = 0xC232308u; UPD(0x0C074194u, 1);  /* 0C074192 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074194 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C074198u, 2);  /* 0C074196 mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C07419Au, 1);  /* 0C074198 mov.l Rm,@Rn */
	r1 = R32(r11); UPD(0x0C07419Cu, 1);  /* 0C07419A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07419C add #imm,Rn */
	r3 = R32(r9); UPD(0x0C0741A0u, 2);  /* 0C07419E mov.l @Rm,Rn */
	r10 = 0x10001u; UPD(0x0C0741A2u, 1);  /* 0C0741A0 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0741A2 add Rm,Rn */
	r3 += r7;  /* 0C0741A4 add Rm,Rn */
	r3 += r10;  /* 0C0741A6 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0741AAu, 4);  /* 0C0741A8 mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C0741ACu, 1);  /* 0C0741AA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0741AC add #imm,Rn */
	r9 = R32(r5); UPD(0x0C0741B0u, 2);  /* 0C0741AE mov.l @Rm,Rn */
	r11 |= r9;  /* 0C0741B0 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0741B4u, 2);  /* 0C0741B2 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C0741B6u, 1);  /* 0C0741B4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0741B6 add #imm,Rn */
	r1 |= r4;  /* 0C0741B8 or Rm,Rn */
	UPD(0x0C0741BAu, 2);
L_0C0741BA: BLKS(0x0C0741BAu);
	W32(r8, r1); UPD(0x0C0741BCu, 1);  /* 0C0741BA mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C0741BC add #imm,Rn */
	UPD(0x0C0741BEu, 1);
L_0C0741BE: BLKS(0x0C0741BEu);
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 3); goto L_0C073EF8; }  /* 0C0741BE bra */
L_0C074200: BLKS(0x0C074200u);
	r3 += 0x1Fu;  /* 0C074200 add #imm,Rn */
	r9 = 0xC2B03A0u; UPD(0x0C074204u, 2);  /* 0C074202 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C074204 mov Rm,Rn */
	r0 -= r3;  /* 0C074206 sub Rm,Rn */
	r12 = 0xC29D734u; UPD(0x0C07420Au, 3);  /* 0C074208 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C07420A add #imm,Rn */
	W16(r9, r3); UPD(0x0C07420Eu, 2);  /* 0C07420C mov.w Rm,@Rn */
	r1 = 0x4000u; UPD(0x0C074210u, 1);  /* 0C07420E mov.w @(disp,pc),Rn */
	r9 = r3;  /* 0C074210 mov Rm,Rn */
	T = r4 == r1;  /* 0C074212 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W16(r12, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C07421Cu, 5); goto L_0C07421C; } UPD(0x0C074218u, 1); goto L_0C074218; }  /* 0C074214 bf/s */
L_0C074218: BLKS(0x0C074218u);
	{ r1 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C0743F0u, 3); goto L_0C0743F0; }  /* 0C074218 bra */
L_0C07421C: BLKS(0x0C07421Cu);
	T = (s32)r4 > (s32)r1;  /* 0C07421C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0742A0u, 4); goto L_0C0742A0; } goto L_0C074222; }  /* 0C07421E bt/s */
L_0C074222: BLKS(0x0C074222u);
	{ u32 c_ = !T; r2 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0742B0u, 4); goto L_0C0742B0; } goto L_0C074226; }  /* 0C074222 bf/s */
L_0C074226: BLKS(0x0C074226u);
	r5 = 0xC2A6940u; UPD(0x0C074228u, 2);  /* 0C074226 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C07422Au, 1);  /* 0C074228 mov.w @Rm,Rn */
	r2 += r14;  /* 0C07422A add Rm,Rn */
	r3 = R32(r14 + 0x1Cu); UPD(0x0C07422Eu, 2);  /* 0C07422C mov.l @(disp,Rm),Rn */
	r6 = r9;  /* 0C07422E mov Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C074232u, 2);  /* 0C074230 mov.w @Rm,Rn */
	r12 += r3;  /* 0C074232 add Rm,Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C074236u, 2);  /* 0C074234 mov.l @(disp,Rm),Rn */
	IF(0x0C074236u); r12 <<= 16;  /* 0C074236 shll16 Rn */
	r11 = 0xC232310u; UPD(0x0C07423Au, 2);  /* 0C074238 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C07423A add Rm,Rn */
	r12 |= r7;  /* 0C07423C or Rm,Rn */
	W32(r11, r12); UPD(0x0C074240u, 3);  /* 0C07423E mov.l Rm,@Rn */
	IF(0x0C074240u); r6 <<= 16;  /* 0C074240 shll16 Rn */
	r12 = 0xC22E2A8u; UPD(0x0C074244u, 2);  /* 0C074242 mov.l @(disp,pc),Rn */
	IF(0x0C074244u); r0 <<= 16;  /* 0C074244 shll16 Rn */
	W32(r12, r6); UPD(0x0C074248u, 2);  /* 0C074246 mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C07424Au, 1);  /* 0C074248 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C07424Cu, 1);  /* 0C07424A mov.l Rm,@Rn */
	r4 = R32(r3); UPD(0x0C07424Eu, 1);  /* 0C07424C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07424E add #imm,Rn */
	W32(r8, r4); UPD(0x0C074252u, 2);  /* 0C074250 mov.l Rm,@Rn */
	r13 = R32(r11); UPD(0x0C074254u, 1);  /* 0C074252 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074254 add #imm,Rn */
	W32(r8, r13); UPD(0x0C074258u, 2);  /* 0C074256 mov.l Rm,@Rn */
	r13 = R32(r14 + 0x28u); UPD(0x0C07425Au, 1);  /* 0C074258 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07425A add #imm,Rn */
	r10 = R32(r12); UPD(0x0C07425Eu, 2);  /* 0C07425C mov.l @Rm,Rn */
	r0 |= r13;  /* 0C07425E or Rm,Rn */
	r10 |= r13;  /* 0C074260 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074264u, 3);  /* 0C074262 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C074266u, 1);  /* 0C074264 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074266 add #imm,Rn */
	W32(r8, r10); UPD(0x0C07426Au, 2);  /* 0C074268 mov.l Rm,@Rn */
	r5 = 0xC232308u; UPD(0x0C07426Cu, 1);  /* 0C07426A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07426C add #imm,Rn */
	r9 = R32(r5); UPD(0x0C074270u, 2);  /* 0C07426E mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C074272u, 1);  /* 0C074270 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C074274u, 1);  /* 0C074272 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074274 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C074278u, 2);  /* 0C074276 mov.l @Rm,Rn */
	r1 = 0x10000u; UPD(0x0C07427Au, 1);  /* 0C074278 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C07427A add Rm,Rn */
	r7 += r1;  /* 0C07427C add Rm,Rn */
	W32(r8, r7); UPD(0x0C074280u, 3);  /* 0C07427E mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C074282u, 1);  /* 0C074280 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074282 add #imm,Rn */
	r6 = R32(r12); UPD(0x0C074286u, 2);  /* 0C074284 mov.l @Rm,Rn */
	r4 += r6;  /* 0C074286 add Rm,Rn */
	r4 += r1;  /* 0C074288 add Rm,Rn */
	W32(r8, r4); UPD(0x0C07428Cu, 3);  /* 0C07428A mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C07428C add #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C073FFAu, 4); goto L_0C073FFA; }  /* 0C07428E bra */
L_0C0742A0: BLKS(0x0C0742A0u);
	r11 = 0x8000u; UPD(0x0C0742A2u, 1);  /* 0C0742A0 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C0742A2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074340u, 4); goto L_0C074340; } goto L_0C0742A8; }  /* 0C0742A4 bt/s */
L_0C0742A8: BLKS(0x0C0742A8u);
	r5 = 0xC000u; UPD(0x0C0742AAu, 2);  /* 0C0742A8 mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C0742AA cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0742B4u, 4); goto L_0C0742B4; } UPD(0x0C0742B0u, 1); goto L_0C0742B0; }  /* 0C0742AC bt/s */
L_0C0742B0: BLKS(0x0C0742B0u);
	{ IF(0x0C0742B2u); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C0742B0 bra */
L_0C0742B4: BLKS(0x0C0742B4u);
	r6 = 0xC2A6940u; UPD(0x0C0742B6u, 1);  /* 0C0742B4 mov.l @(disp,pc),Rn */
	r5 += r14;  /* 0C0742B6 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0742BAu, 2);  /* 0C0742B8 mov.w @Rm,Rn */
	r2 = 0x36u;  /* 0C0742BA mov #imm,Rn */
	r11 = R32(r14 + 0x20u); UPD(0x0C0742BEu, 2);  /* 0C0742BC mov.l @(disp,Rm),Rn */
	r2 += r14;  /* 0C0742BE add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C0742C2u, 2);  /* 0C0742C0 mov.w @Rm,Rn */
	r4 -= r11;  /* 0C0742C2 sub Rm,Rn */
	r10 = R32(r14 + 0x30u); UPD(0x0C0742C6u, 2);  /* 0C0742C4 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0742C6 exts.w Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0742CAu, 2);  /* 0C0742C8 mov.l @(disp,Rm),Rn */
	r7 -= r10;  /* 0C0742CA sub Rm,Rn */
	r11 = R32(r14 + 0x28u); UPD(0x0C0742CEu, 2);  /* 0C0742CC mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C0742CE add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0742D2u, 2);  /* 0C0742D0 mov.w @Rm,Rn */
	r7 -= r1;  /* 0C0742D2 sub Rm,Rn */
	r4 -= r11;  /* 0C0742D4 sub Rm,Rn */
	r4 -= r3;  /* 0C0742D6 sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C0742D8 add #imm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0742DA add #imm,Rn */
	IF(0x0C0742DCu); r7 <<= 16;  /* 0C0742DC shll16 Rn */
	r7 |= r4;  /* 0C0742DE or Rm,Rn */
	r12 = 0xC232310u; UPD(0x0C0742E2u, 8);  /* 0C0742E0 mov.l @(disp,pc),Rn */
	IF(0x0C0742E2u); r6 <<= 16;  /* 0C0742E2 shll16 Rn */
	r4 = 0xC22E2A8u; UPD(0x0C0742E6u, 2);  /* 0C0742E4 mov.l @(disp,pc),Rn */
	IF(0x0C0742E6u); r0 <<= 16;  /* 0C0742E6 shll16 Rn */
	r5 = 0xC2B1A44u; UPD(0x0C0742EAu, 2);  /* 0C0742E8 mov.l @(disp,pc),Rn */
	W32(r12, r7); UPD(0x0C0742ECu, 1);  /* 0C0742EA mov.l Rm,@Rn */
	W32(r4, r6); UPD(0x0C0742EEu, 1);  /* 0C0742EC mov.l Rm,@Rn */
	W32(r5, r0); UPD(0x0C0742F0u, 1);  /* 0C0742EE mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C0742F2u, 1);  /* 0C0742F0 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C0742F4u, 1);  /* 0C0742F2 mov.l Rm,@Rn */
	r0 = R32(r3); UPD(0x0C0742F6u, 1);  /* 0C0742F4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0742F6 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0742FAu, 2);  /* 0C0742F8 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C0742FCu, 1);  /* 0C0742FA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0742FC add #imm,Rn */
	W32(r8, r9); UPD(0x0C074300u, 2);  /* 0C0742FE mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C074302u, 1);  /* 0C074300 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074302 add #imm,Rn */
	r10 |= r11;  /* 0C074304 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074308u, 3);  /* 0C074306 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C07430Au, 1);  /* 0C074308 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07430A add #imm,Rn */
	W32(r8, r10); UPD(0x0C07430Eu, 2);  /* 0C07430C mov.l Rm,@Rn */
	r1 = 0xC232308u; UPD(0x0C074310u, 1);  /* 0C07430E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074310 add #imm,Rn */
	r2 = R32(r1); UPD(0x0C074314u, 2);  /* 0C074312 mov.l @Rm,Rn */
	W32(r8, r2); UPD(0x0C074316u, 1);  /* 0C074314 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C074318u, 1);  /* 0C074316 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074318 add #imm,Rn */
	r7 = R32(r4); UPD(0x0C07431Cu, 2);  /* 0C07431A mov.l @Rm,Rn */
	r0 = 0x10000u; UPD(0x0C07431Eu, 1);  /* 0C07431C mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C07431E add Rm,Rn */
	r13 += r0;  /* 0C074320 add Rm,Rn */
	W32(r8, r13); UPD(0x0C074324u, 3);  /* 0C074322 mov.l Rm,@Rn */
	r9 = R32(r12); UPD(0x0C074326u, 1);  /* 0C074324 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074326 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C07432Au, 2);  /* 0C074328 mov.l @Rm,Rn */
	r9 -= r6;  /* 0C07432A sub Rm,Rn */
	r9 -= r0;  /* 0C07432C sub Rm,Rn */
	W32(r8, r9); UPD(0x0C074330u, 3);  /* 0C07432E mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C074332u, 1);  /* 0C074330 mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C074334u, 1);  /* 0C074332 add #imm,Rn */
	{ r1 |= r11; /* slot or Rm,Rn */ UPD(0x0C073FF8u, 3); goto L_0C073FF8; }  /* 0C074334 bra */
L_0C074340: BLKS(0x0C074340u);
	r2 = 0xC2A6940u; UPD(0x0C074342u, 1);  /* 0C074340 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r3;  /* 0C074342 exts.w Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C074346u, 2);  /* 0C074344 mov.w @Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C074348u, 1);  /* 0C074346 mov.l @(disp,Rm),Rn */
	r9 += r14;  /* 0C074348 add Rm,Rn */
	r5 -= r1;  /* 0C07434A sub Rm,Rn */
	r3 = R32(r14 + 0x30u); UPD(0x0C07434Eu, 3);  /* 0C07434C mov.l @(disp,Rm),Rn */
	r5 -= r4;  /* 0C07434E sub Rm,Rn */
	r5 -= r3;  /* 0C074350 sub Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C074354u, 3);  /* 0C074352 mov.w @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C074354 add #imm,Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C074358u, 2);  /* 0C074356 mov.l @(disp,Rm),Rn */
	IF(0x0C074358u); r5 <<= 16;  /* 0C074358 shll16 Rn */
	r12 = 0xC232310u; UPD(0x0C07435Cu, 2);  /* 0C07435A mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C07435C add Rm,Rn */
	r5 |= r6;  /* 0C07435E or Rm,Rn */
	W32(r12, r5); UPD(0x0C074362u, 3);  /* 0C074360 mov.l Rm,@Rn */
	IF(0x0C074362u); r4 <<= 16;  /* 0C074362 shll16 Rn */
	r5 = 0xC22E2A8u; UPD(0x0C074366u, 2);  /* 0C074364 mov.l @(disp,pc),Rn */
	IF(0x0C074366u); r0 <<= 16;  /* 0C074366 shll16 Rn */
	r9 = 0xC2B1A44u; UPD(0x0C07436Au, 2);  /* 0C074368 mov.l @(disp,pc),Rn */
	W32(r5, r4); UPD(0x0C07436Cu, 1);  /* 0C07436A mov.l Rm,@Rn */
	W32(r9, r0); UPD(0x0C07436Eu, 1);  /* 0C07436C mov.l Rm,@Rn */
	r7 = 0xC22E020u; UPD(0x0C074370u, 1);  /* 0C07436E mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C074372u, 1);  /* 0C074370 mov.l Rm,@Rn */
	r10 = R32(r7); UPD(0x0C074374u, 1);  /* 0C074372 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074374 add #imm,Rn */
	W32(r8, r10); UPD(0x0C074378u, 2);  /* 0C074376 mov.l Rm,@Rn */
	r11 = R32(r12); UPD(0x0C07437Au, 1);  /* 0C074378 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07437A add #imm,Rn */
	W32(r8, r11); UPD(0x0C07437Eu, 2);  /* 0C07437C mov.l Rm,@Rn */
	r11 = R32(r14 + 0x28u); UPD(0x0C074380u, 1);  /* 0C07437E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074380 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C074384u, 2);  /* 0C074382 mov.l @Rm,Rn */
	r0 |= r11;  /* 0C074384 or Rm,Rn */
	W32(r8, r0); UPD(0x0C074388u, 2);  /* 0C074386 mov.l Rm,@Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C07438Au, 1);  /* 0C074388 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07438A add #imm,Rn */
	W32(r8, r2); UPD(0x0C07438Eu, 2);  /* 0C07438C mov.l Rm,@Rn */
	r1 = 0xC232308u; UPD(0x0C074390u, 1);  /* 0C07438E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074390 add #imm,Rn */
	r3 = R32(r1); UPD(0x0C074394u, 2);  /* 0C074392 mov.l @Rm,Rn */
	W32(r8, r3); UPD(0x0C074396u, 1);  /* 0C074394 mov.l Rm,@Rn */
	r4 = R32(r7); UPD(0x0C074398u, 1);  /* 0C074396 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074398 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C07439Cu, 2);  /* 0C07439A mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C07439Eu, 1);  /* 0C07439C mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C07439E add Rm,Rn */
	r4 += r10;  /* 0C0743A0 add Rm,Rn */
	W32(r8, r4); UPD(0x0C0743A4u, 3);  /* 0C0743A2 mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C0743A6u, 1);  /* 0C0743A4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0743A6 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C0743AAu, 2);  /* 0C0743A8 mov.l @Rm,Rn */
	r0 -= r13;  /* 0C0743AA sub Rm,Rn */
	r0 -= r10;  /* 0C0743AC sub Rm,Rn */
	W32(r8, r0); UPD(0x0C0743B0u, 3);  /* 0C0743AE mov.l Rm,@Rn */
	r1 = R32(r9); UPD(0x0C0743B2u, 1);  /* 0C0743B0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0743B2 add #imm,Rn */
	r1 |= r11;  /* 0C0743B4 or Rm,Rn */
	UPD(0x0C0743B6u, 2);
L_0C0743B6: BLKS(0x0C0743B6u);
	W32(r8, r1); UPD(0x0C0743B8u, 1);  /* 0C0743B6 mov.l Rm,@Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0743BAu, 1);  /* 0C0743B8 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0743BA add #imm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 4); goto L_0C073EF8; }  /* 0C0743BC bra */
L_0C0743F0: BLKS(0x0C0743F0u);
	r1 += r14;  /* 0C0743F0 add Rm,Rn */
	r12 = 0xC2A6940u; UPD(0x0C0743F4u, 2);  /* 0C0743F2 mov.l @(disp,pc),Rn */
	r7 = 0x36u;  /* 0C0743F4 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C0743F8u, 2);  /* 0C0743F6 mov.w @Rm,Rn */
	r7 += r14;  /* 0C0743F8 add Rm,Rn */
	r3 = R32(r14 + 0x20u); UPD(0x0C0743FCu, 2);  /* 0C0743FA mov.l @(disp,Rm),Rn */
	IF(0x0C0743FCu); r0 <<= 16;  /* 0C0743FC shll16 Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C074400u, 2);  /* 0C0743FE mov.l @(disp,Rm),Rn */
	r5 -= r3;  /* 0C074400 sub Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C074404u, 2);  /* 0C074402 mov.w @Rm,Rn */
	r5 -= r4;  /* 0C074404 sub Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C074408u, 2);  /* 0C074406 mov.w @Rm,Rn */
	r5 -= r10;  /* 0C074408 sub Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C07440Cu, 2);  /* 0C07440A mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C07440C add #imm,Rn */
	r11 += r2;  /* 0C07440E add Rm,Rn */
	IF(0x0C074410u); r11 <<= 16;  /* 0C074410 shll16 Rn */
	r11 |= r5;  /* 0C074412 or Rm,Rn */
	r5 = 0xC22E2A8u; UPD(0x0C074416u, 5);  /* 0C074414 mov.l @(disp,pc),Rn */
	r12 = r9;  /* 0C074416 mov Rm,Rn */
	IF(0x0C074418u); r12 <<= 16;  /* 0C074418 shll16 Rn */
	W32(r5, r12); UPD(0x0C07441Cu, 3);  /* 0C07441A mov.l Rm,@Rn */
	r6 = 0xC232310u; UPD(0x0C07441Eu, 1);  /* 0C07441C mov.l @(disp,pc),Rn */
	r12 = 0xC2B1A44u; UPD(0x0C074420u, 1);  /* 0C07441E mov.l @(disp,pc),Rn */
	W32(r6, r11); UPD(0x0C074422u, 1);  /* 0C074420 mov.l Rm,@Rn */
	W32(r12, r0); UPD(0x0C074424u, 1);  /* 0C074422 mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C074426u, 1);  /* 0C074424 mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C074428u, 1);  /* 0C074426 mov.l Rm,@Rn */
	r13 = R32(r3); UPD(0x0C07442Au, 1);  /* 0C074428 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07442A add #imm,Rn */
	W32(r8, r13); UPD(0x0C07442Eu, 2);  /* 0C07442C mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C074430u, 1);  /* 0C07442E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074430 add #imm,Rn */
	W32(r8, r2); UPD(0x0C074434u, 2);  /* 0C074432 mov.l Rm,@Rn */
	r13 = R32(r14 + 0x28u); UPD(0x0C074436u, 1);  /* 0C074434 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074436 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C07443Au, 2);  /* 0C074438 mov.l @Rm,Rn */
	r0 |= r13;  /* 0C07443A or Rm,Rn */
	W32(r8, r0); UPD(0x0C07443Eu, 2);  /* 0C07443C mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C074440u, 1);  /* 0C07443E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074440 add #imm,Rn */
	W32(r8, r0); UPD(0x0C074444u, 2);  /* 0C074442 mov.l Rm,@Rn */
	r1 = 0xC232308u; UPD(0x0C074446u, 1);  /* 0C074444 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074446 add #imm,Rn */
	r11 = R32(r1); UPD(0x0C07444Au, 2);  /* 0C074448 mov.l @Rm,Rn */
	W32(r8, r11); UPD(0x0C07444Cu, 1);  /* 0C07444A mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C07444Eu, 1);  /* 0C07444C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07444E add #imm,Rn */
	r9 = R32(r5); UPD(0x0C074452u, 2);  /* 0C074450 mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C074454u, 1);  /* 0C074452 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C074454 add Rm,Rn */
	r7 += r10;  /* 0C074456 add Rm,Rn */
	W32(r8, r7); UPD(0x0C07445Au, 3);  /* 0C074458 mov.l Rm,@Rn */
	r11 = R32(r6); UPD(0x0C07445Cu, 1);  /* 0C07445A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07445C add #imm,Rn */
	r4 = R32(r5); UPD(0x0C074460u, 2);  /* 0C07445E mov.l @Rm,Rn */
	r11 += r4;  /* 0C074460 add Rm,Rn */
	r11 += r10;  /* 0C074462 add Rm,Rn */
	W32(r8, r11); UPD(0x0C074466u, 3);  /* 0C074464 mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C074468u, 1);  /* 0C074466 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074468 add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C0741BAu, 4); goto L_0C0741BA; }  /* 0C07446A bra */
L_0C074470: BLKS(0x0C074470u);
	r0 = r5;  /* 0C074470 mov Rm,Rn */
	r5 += r1;  /* 0C074472 add Rm,Rn */
	r0 &= r6;  /* 0C074474 and Rm,Rn */
	r5 &= r6;  /* 0C074476 and Rm,Rn */
	T = r0 == r5;  /* 0C074478 cmp/eq Rm,Rn */
	r0 = r10;  /* 0C07447A mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C07447C negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07447E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C074480 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C074482 negc Rm,Rn */
	T = (r7 & r9) == 0;  /* 0C074484 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r0; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C07448Eu, 14); goto L_0C07448E; } goto L_0C07448A; }  /* 0C074486 bf/s */
L_0C07448A: BLKS(0x0C07448Au);
	{ IF(0x0C07448Cu); ; /* slot nop */ UPD(0x0C074770u, 4); goto L_0C074770; }  /* 0C07448A bra */
L_0C07448E: BLKS(0x0C07448Eu);
	r10 = 0xC28EDB0u; UPD(0x0C074490u, 1);  /* 0C07448E mov.l @(disp,pc),Rn */
	r5 += 0x1Fu;  /* 0C074490 add #imm,Rn */
	W16(r10, r5); UPD(0x0C074494u, 2);  /* 0C074492 mov.w Rm,@Rn */
	r0 = r11;  /* 0C074494 mov Rm,Rn */
	r0 -= r5;  /* 0C074496 sub Rm,Rn */
	r7 = r5;  /* 0C074498 mov Rm,Rn */
	r3 = 0xC3C544Cu; UPD(0x0C07449Cu, 4);  /* 0C07449A mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C07449C add #imm,Rn */
	r5 = 0xC29D720u; UPD(0x0C0744A0u, 2);  /* 0C07449E mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C0744A2u, 1);  /* 0C0744A0 mov.l @(disp,Rm),Rn */
	r1 = 0x4000u; UPD(0x0C0744A4u, 1);  /* 0C0744A2 mov.w @(disp,pc),Rn */
	W16(r3, r0); UPD(0x0C0744A6u, 1);  /* 0C0744A4 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C0744A6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r5, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0744B0u, 4); goto L_0C0744B0; } UPD(0x0C0744ACu, 1); goto L_0C0744AC; }  /* 0C0744A8 bf/s */
L_0C0744AC: BLKS(0x0C0744ACu);
	{ r10 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C074750u, 3); goto L_0C074750; }  /* 0C0744AC bra */
L_0C0744B0: BLKS(0x0C0744B0u);
	T = (s32)r4 > (s32)r1;  /* 0C0744B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0744BAu, 4); goto L_0C0744BA; } goto L_0C0744B6; }  /* 0C0744B2 bf/s */
L_0C0744B6: BLKS(0x0C0744B6u);
	{ IF(0x0C0744B8u); ; /* slot nop */ UPD(0x0C074650u, 4); goto L_0C074650; }  /* 0C0744B6 bra */
L_0C0744BA: BLKS(0x0C0744BAu);
	{ u32 c_ = !T; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C074598u, 3); goto L_0C074598; } UPD(0x0C0744BEu, 1); goto L_0C0744BE; }  /* 0C0744BA bf/s */
L_0C0744BE: BLKS(0x0C0744BEu);
	r2 = 0xFF000000u; UPD(0x0C0744C0u, 1);  /* 0C0744BE mov.l @(disp,pc),Rn */
	r12 = 0x1000000u; UPD(0x0C0744C2u, 1);  /* 0C0744C0 mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C0744C2 and Rm,Rn */
	T = r2 == r12;  /* 0C0744C4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r12 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0745A0u, 5); goto L_0C0745A0; } UPD(0x0C0744CAu, 1); goto L_0C0744CA; }  /* 0C0744C6 bt/s */
L_0C0744CA: BLKS(0x0C0744CAu);
	r6 = 0x2000000u; UPD(0x0C0744CCu, 1);  /* 0C0744CA mov.l @(disp,pc),Rn */
	T = r2 == r6;  /* 0C0744CC cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074530u, 4); goto L_0C074530; } goto L_0C0744D2; }  /* 0C0744CE bt/s */
L_0C0744D2: BLKS(0x0C0744D2u);
	r1 = 0xC2A6940u; UPD(0x0C0744D4u, 2);  /* 0C0744D2 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C0744D6u, 1);  /* 0C0744D4 mov.w @Rm,Rn */
	r9 += r14;  /* 0C0744D6 add Rm,Rn */
	r10 = R32(r14 + 0x1Cu); UPD(0x0C0744DAu, 2);  /* 0C0744D8 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0744DCu, 1);  /* 0C0744DA mov.w @Rm,Rn */
	r11 += r10;  /* 0C0744DC add Rm,Rn */
	r3 = R32(r14 + 0x20u); UPD(0x0C0744E0u, 2);  /* 0C0744DE mov.l @(disp,Rm),Rn */
	IF(0x0C0744E0u); r11 <<= 16;  /* 0C0744E0 shll16 Rn */
	r12 = 0xC232310u; UPD(0x0C0744E4u, 2);  /* 0C0744E2 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C0744E4 add Rm,Rn */
	r11 |= r2;  /* 0C0744E6 or Rm,Rn */
	W32(r12, r11); UPD(0x0C0744EAu, 3);  /* 0C0744E8 mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C0744ECu, 1);  /* 0C0744EA mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C0744EC exts.w Rm,Rn */
	W32(r8, r13); UPD(0x0C0744F0u, 2);  /* 0C0744EE mov.l Rm,@Rn */
	r6 = R32(r3); UPD(0x0C0744F2u, 1);  /* 0C0744F0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0744F2 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0744F6u, 2);  /* 0C0744F4 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0744F6 exts.w Rm,Rn */
	r4 = R32(r12); UPD(0x0C0744FAu, 2);  /* 0C0744F8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0744FA add #imm,Rn */
	W32(r8, r4); UPD(0x0C0744FEu, 2);  /* 0C0744FC mov.l Rm,@Rn */
	r10 = R32(r5); UPD(0x0C074500u, 1);  /* 0C0744FE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074500 add #imm,Rn */
	r10 |= r11;  /* 0C074502 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074506u, 3);  /* 0C074504 mov.l Rm,@Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C074508u, 1);  /* 0C074506 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074508 add #imm,Rn */
	W32(r8, r10); UPD(0x0C07450Cu, 2);  /* 0C07450A mov.l Rm,@Rn */
	r1 = 0xC232308u; UPD(0x0C07450Eu, 1);  /* 0C07450C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07450E add #imm,Rn */
	r9 = R32(r1); UPD(0x0C074512u, 2);  /* 0C074510 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C074514u, 1);  /* 0C074512 mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C074516u, 1);  /* 0C074514 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074516 add #imm,Rn */
	r2 += r11;  /* 0C074518 add Rm,Rn */
	r2 += 0x1u;  /* 0C07451A add #imm,Rn */
	W32(r8, r2); UPD(0x0C07451Eu, 4);  /* 0C07451C mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C074520u, 1);  /* 0C07451E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074520 add #imm,Rn */
	r7 += r11;  /* 0C074522 add Rm,Rn */
	r7 += 0x1u;  /* 0C074524 add #imm,Rn */
	W32(r8, r7); UPD(0x0C074528u, 4);  /* 0C074526 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C07452Au, 1);  /* 0C074528 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07452A add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C073FF8u, 4); goto L_0C073FF8; }  /* 0C07452C bra */
L_0C074530: BLKS(0x0C074530u);
	r10 = 0xC2A6940u; UPD(0x0C074532u, 1);  /* 0C074530 mov.l @(disp,pc),Rn */
	r13 = 0xC228BF6u; UPD(0x0C074534u, 1);  /* 0C074532 mov.l @(disp,pc),Rn */
	r11 = 0xC238018u; UPD(0x0C074536u, 1);  /* 0C074534 mov.l @(disp,pc),Rn */
	r4 = 0xC2B0398u; UPD(0x0C074538u, 1);  /* 0C074536 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C07453Au, 1);  /* 0C074538 mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C07453Cu, 1);  /* 0C07453A mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C07453Eu, 1);  /* 0C07453C mov.w @Rm,Rn */
	r7 += r9;  /* 0C07453E add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r4); UPD(0x0C074542u, 2);  /* 0C074540 mov.w @Rm,Rn */
	IF(0x0C074542u); r7 <<= 16;  /* 0C074542 shll16 Rn */
	r6 += r12;  /* 0C074544 add Rm,Rn */
	r5 = 0xC3C4158u; UPD(0x0C074548u, 3);  /* 0C074546 mov.l @(disp,pc),Rn */
	r7 |= r6;  /* 0C074548 or Rm,Rn */
	r2 = 0xC2B1A24u; UPD(0x0C07454Cu, 2);  /* 0C07454A mov.l @(disp,pc),Rn */
	r3 = 0xFFFF0000u; UPD(0x0C07454Eu, 1);  /* 0C07454C mov.l @(disp,pc),Rn */
	r6 = R32(r5); UPD(0x0C074550u, 1);  /* 0C07454E mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C074552u, 1);  /* 0C074550 mov.w @Rm,Rn */
	r6 &= r3;  /* 0C074552 and Rm,Rn */
	IF(0x0C074554u); T = (s32)r1 >= 0;  /* 0C074554 cmp/pz Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074598u, 5); goto L_0C074598; } goto L_0C07455A; }  /* 0C074556 bf/s */
L_0C07455A: BLKS(0x0C07455Au);
	r0 = 0xC232308u; UPD(0x0C07455Cu, 2);  /* 0C07455A mov.l @(disp,pc),Rn */
	r5 = r1;  /* 0C07455C mov Rm,Rn */
	r4 = 0xC22E020u; UPD(0x0C074560u, 2);  /* 0C07455E mov.l @(disp,pc),Rn */
L_0C074560: BLKS(0x0C074560u);
	r10 = 0x40u;  /* 0C074560 mov #imm,Rn */
	r10 += r14;  /* 0C074562 add Rm,Rn */
	r2 = R32(r10 + 0x14u); UPD(0x0C074566u, 3);  /* 0C074564 mov.l @(disp,Rm),Rn */
	r11 = r7;  /* 0C074566 mov Rm,Rn */
	r9 = R32(r0); UPD(0x0C07456Au, 2);  /* 0C074568 mov.l @Rm,Rn */
	r2 += 0x4u;  /* 0C07456A add #imm,Rn */
	W32(r10 + 0x14u, r2); UPD(0x0C07456Eu, 2);  /* 0C07456C mov.l Rm,@(disp,Rn) */
	r11 += r3;  /* 0C07456E add Rm,Rn */
	W32(r8, r9); UPD(0x0C074572u, 2);  /* 0C074570 mov.l Rm,@Rn */
	r2 += 0xFFFFFFFCu;  /* 0C074572 add #imm,Rn */
	{ u32 v_ = R32(r2); r2 += 4; r1 = v_; } UPD(0x0C074576u, 2);  /* 0C074574 mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C074576 add #imm,Rn */
	r13 = R32(r4); UPD(0x0C07457Au, 2);  /* 0C074578 mov.l @Rm,Rn */
	r2 = r3;  /* 0C07457A mov Rm,Rn */
	r13 += r1;  /* 0C07457C add Rm,Rn */
	W32(r8, r13); UPD(0x0C074580u, 3);  /* 0C07457E mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C074580 add #imm,Rn */
	r8 += 0x4u;  /* 0C074582 add #imm,Rn */
	W32(r8, r11); UPD(0x0C074586u, 3);  /* 0C074584 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C074586 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C074588 add #imm,Rn */
	W32(r8, r6); UPD(0x0C07458Cu, 3);  /* 0C07458A mov.l Rm,@Rn */
	T = (s32)r5 >= (s32)r3;  /* 0C07458C cmp/ge Rm,Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C074590u, 2);  /* 0C07458E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074590 add #imm,Rn */
	W32(r8, r12); UPD(0x0C074594u, 2);  /* 0C074592 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074560u, 3); goto L_0C074560; } UPD(0x0C074598u, 1); goto L_0C074598; }  /* 0C074594 bt/s */
L_0C074598: BLKS(0x0C074598u);
	{ IF(0x0C07459Au); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C074598 bra */
L_0C0745A0: BLKS(0x0C0745A0u);
	r4 = 0xC2A6940u; UPD(0x0C0745A2u, 1);  /* 0C0745A0 mov.l @(disp,pc),Rn */
	r0 = 0x1Au;  /* 0C0745A2 mov #imm,Rn */
	IF(0x0C0745A4u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0745A6u, 2);  /* 0C0745A4 mov.w @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C0745A6 mov #imm,Rn */
	r5 = R32(r14 + 0x2Cu); UPD(0x0C0745AAu, 2);  /* 0C0745A8 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFF0000u; UPD(0x0C0745ACu, 1);  /* 0C0745AA mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C0745AEu, 1);  /* 0C0745AC mov.w @Rm,Rn */
	r6 &= r5;  /* 0C0745AE and Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0745B2u, 2);  /* 0C0745B0 mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C0745B2 add Rm,Rn */
	r4 = 0xC232308u; UPD(0x0C0745B6u, 2);  /* 0C0745B4 mov.l @(disp,pc),Rn */
	IF(0x0C0745B6u); r7 <<= 16;  /* 0C0745B6 shll16 Rn */
	r2 = 0xC22E020u; UPD(0x0C0745BAu, 2);  /* 0C0745B8 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C0745BA add Rm,Rn */
	r5 = R32(r14 + 0x28u); UPD(0x0C0745BEu, 2);  /* 0C0745BC mov.l @(disp,Rm),Rn */
	r7 |= r13;  /* 0C0745BE or Rm,Rn */
	UPD(0x0C0745C0u, 1);
L_0C0745C0: BLKS(0x0C0745C0u);
	r0 = R32(r4); UPD(0x0C0745C2u, 1);  /* 0C0745C0 mov.l @Rm,Rn */
	r11 = r3;  /* 0C0745C2 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C0745C6u, 2);  /* 0C0745C4 mov.l Rm,@Rn */
	r11 += 0x1u;  /* 0C0745C6 add #imm,Rn */
	r0 = 0x54u;  /* 0C0745C8 mov #imm,Rn */
	IF(0x0C0745CAu); r1 = R32(r0 + r14); UPD(0x0C0745CCu, 3);  /* 0C0745CA mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0745CC add #imm,Rn */
	r10 = R32(r2); UPD(0x0C0745D0u, 2);  /* 0C0745CE mov.l @Rm,Rn */
	r1 += 0x4u;  /* 0C0745D0 add #imm,Rn */
	r10 += r3;  /* 0C0745D2 add Rm,Rn */
	IF(0x0C0745D4u); W32(r0 + r14, r1); UPD(0x0C0745D6u, 3);  /* 0C0745D4 mov.l Rm,@(r0,Rn) */
	W32(r8, r10); UPD(0x0C0745D8u, 1);  /* 0C0745D6 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C0745D8 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r13 = v_; } UPD(0x0C0745DCu, 2);  /* 0C0745DA mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C0745DC add #imm,Rn */
	r13 += r7;  /* 0C0745DE add Rm,Rn */
	r13 += r3;  /* 0C0745E0 add Rm,Rn */
	W32(r8, r13); UPD(0x0C0745E4u, 4);  /* 0C0745E2 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r11;  /* 0C0745E4 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C0745E6 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0745EAu, 3);  /* 0C0745E8 mov.l Rm,@Rn */
	T = (s32)r5 >= (s32)r3;  /* 0C0745EA cmp/ge Rm,Rn */
	r9 = R32(r14 + 0xCu); UPD(0x0C0745EEu, 2);  /* 0C0745EC mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0745EE add #imm,Rn */
	W32(r8, r9); UPD(0x0C0745F2u, 2);  /* 0C0745F0 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0745C0u, 3); goto L_0C0745C0; } UPD(0x0C0745F6u, 1); goto L_0C0745F6; }  /* 0C0745F2 bt/s */
L_0C0745F6: BLKS(0x0C0745F6u);
	{ IF(0x0C0745F8u); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C0745F6 bra */
L_0C074650: BLKS(0x0C074650u);
	r11 = 0x8000u; UPD(0x0C074652u, 1);  /* 0C074650 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C074652 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0746D0u, 4); goto L_0C0746D0; }  /* 0C074654 bt */
L_0C074656: BLKS(0x0C074656u);
	r9 = 0xC000u; UPD(0x0C074658u, 1);  /* 0C074656 mov.l @(disp,pc),Rn */
	T = r4 == r9;  /* 0C074658 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0745F6u, 4); goto L_0C0745F6; } goto L_0C07465E; }  /* 0C07465A bf/s */
L_0C07465E: BLKS(0x0C07465Eu);
	r10 = 0xC2A6940u; UPD(0x0C074660u, 2);  /* 0C07465E mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C074662u, 1);  /* 0C074660 mov.w @Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C074664u, 1);  /* 0C074662 mov.l @(disp,Rm),Rn */
	r3 -= r2;  /* 0C074664 sub Rm,Rn */
	r3 -= r12;  /* 0C074666 sub Rm,Rn */
	r12 = 0x1Au;  /* 0C074668 mov #imm,Rn */
	r11 = R32(r14 + 0x30u); UPD(0x0C07466Cu, 4);  /* 0C07466A mov.l @(disp,Rm),Rn */
	r12 += r14;  /* 0C07466C add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C074670u, 2);  /* 0C07466E mov.w @Rm,Rn */
	r3 -= r11;  /* 0C074670 sub Rm,Rn */
	r9 = R32(r14 + 0x20u); UPD(0x0C074674u, 2);  /* 0C074672 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C074674 add #imm,Rn */
	r6 = 0xC232310u; UPD(0x0C074678u, 2);  /* 0C074676 mov.l @(disp,pc),Rn */
	r1 -= r9;  /* 0C074678 sub Rm,Rn */
	IF(0x0C07467Au); r3 <<= 16;  /* 0C07467A shll16 Rn */
	r1 -= r7;  /* 0C07467C sub Rm,Rn */
	UPD(0x0C07467Eu, 3);
L_0C07467E: BLKS(0x0C07467Eu);
	r12 = 0x36u;  /* 0C07467E mov #imm,Rn */
	r12 += r14;  /* 0C074680 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C074684u, 3);  /* 0C074682 mov.w @Rm,Rn */
	r1 -= r4;  /* 0C074684 sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C074686 add #imm,Rn */
	r3 |= r1;  /* 0C074688 or Rm,Rn */
	W32(r6, r3); UPD(0x0C07468Cu, 4);  /* 0C07468A mov.l Rm,@Rn */
	r4 = 0xC22E020u; UPD(0x0C07468Eu, 1);  /* 0C07468C mov.l @(disp,pc),Rn */
	W32(r8, r13); UPD(0x0C074690u, 1);  /* 0C07468E mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C074692u, 1);  /* 0C074690 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074692 add #imm,Rn */
	W32(r8, r10); UPD(0x0C074696u, 2);  /* 0C074694 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C074696 exts.w Rm,Rn */
	r2 = R32(r6); UPD(0x0C07469Au, 2);  /* 0C074698 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07469A add #imm,Rn */
	W32(r8, r2); UPD(0x0C07469Eu, 2);  /* 0C07469C mov.l Rm,@Rn */
	r11 = R32(r5); UPD(0x0C0746A0u, 1);  /* 0C07469E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0746A0 add #imm,Rn */
	r11 |= r7;  /* 0C0746A2 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0746A6u, 3);  /* 0C0746A4 mov.l Rm,@Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C0746A8u, 1);  /* 0C0746A6 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0746A8 add #imm,Rn */
	W32(r8, r12); UPD(0x0C0746ACu, 2);  /* 0C0746AA mov.l Rm,@Rn */
	r1 = 0xC232308u; UPD(0x0C0746AEu, 1);  /* 0C0746AC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0746AE add #imm,Rn */
	r9 = R32(r1); UPD(0x0C0746B2u, 2);  /* 0C0746B0 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C0746B4u, 1);  /* 0C0746B2 mov.l Rm,@Rn */
	r3 = R32(r4); UPD(0x0C0746B6u, 1);  /* 0C0746B4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0746B6 add #imm,Rn */
	r3 += r7;  /* 0C0746B8 add Rm,Rn */
	r3 += 0x1u;  /* 0C0746BA add #imm,Rn */
	W32(r8, r3); UPD(0x0C0746BEu, 4);  /* 0C0746BC mov.l Rm,@Rn */
	r7 = R32(r6); UPD(0x0C0746C0u, 1);  /* 0C0746BE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0746C0 add #imm,Rn */
	r7 -= r13;  /* 0C0746C2 sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C0746C4 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0746C8u, 4);  /* 0C0746C6 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C0746CAu, 1);  /* 0C0746C8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0746CA add #imm,Rn */
	{ r1 |= r13; /* slot or Rm,Rn */ UPD(0x0C0743B6u, 4); goto L_0C0743B6; }  /* 0C0746CC bra */
L_0C0746D0: BLKS(0x0C0746D0u);
	r11 = 0xC2A6940u; UPD(0x0C0746D2u, 1);  /* 0C0746D0 mov.l @(disp,pc),Rn */
	r3 = 0xC228BF6u; UPD(0x0C0746D4u, 1);  /* 0C0746D2 mov.l @(disp,pc),Rn */
	r0 = 0xC28EDAEu; UPD(0x0C0746D6u, 1);  /* 0C0746D4 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C0746D8u, 1);  /* 0C0746D6 mov.w @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C0746DAu, 1);  /* 0C0746D8 mov.w @Rm,Rn */
	r4 = 0xC28610Cu; UPD(0x0C0746DCu, 1);  /* 0C0746DA mov.l @(disp,pc),Rn */
	r5 -= r12;  /* 0C0746DC sub Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0746E0u, 2);  /* 0C0746DE mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C0746E2u, 1);  /* 0C0746E0 mov.w @Rm,Rn */
	r5 -= r7;  /* 0C0746E2 sub Rm,Rn */
	r10 = 0xC238018u; UPD(0x0C0746E6u, 2);  /* 0C0746E4 mov.l @(disp,pc),Rn */
	r5 -= r9;  /* 0C0746E6 sub Rm,Rn */
	r2 = 0xC2B0398u; UPD(0x0C0746EAu, 2);  /* 0C0746E8 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0746EA add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0746EEu, 2);  /* 0C0746EC mov.w @Rm,Rn */
	IF(0x0C0746EEu); r5 <<= 16;  /* 0C0746EE shll16 Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0746F2u, 2);  /* 0C0746F0 mov.w @Rm,Rn */
	r13 = 0xC232310u; UPD(0x0C0746F4u, 1);  /* 0C0746F2 mov.l @(disp,pc),Rn */
	r11 += r6;  /* 0C0746F4 add Rm,Rn */
	r9 = 0xC232308u; UPD(0x0C0746F8u, 2);  /* 0C0746F6 mov.l @(disp,pc),Rn */
	r5 |= r11;  /* 0C0746F8 or Rm,Rn */
	W32(r13, r5); UPD(0x0C0746FCu, 2);  /* 0C0746FA mov.l Rm,@Rn */
	r3 = R32(r9); UPD(0x0C0746FEu, 1);  /* 0C0746FC mov.l @Rm,Rn */
	r2 = 0xC22E020u; UPD(0x0C074700u, 1);  /* 0C0746FE mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C074702u, 1);  /* 0C074700 mov.l Rm,@Rn */
	r12 = R32(r2); UPD(0x0C074704u, 1);  /* 0C074702 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074704 add #imm,Rn */
	W32(r8, r12); UPD(0x0C074708u, 2);  /* 0C074706 mov.l Rm,@Rn */
	r0 = R32(r13); UPD(0x0C07470Au, 1);  /* 0C074708 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07470A add #imm,Rn */
	W32(r8, r0); UPD(0x0C07470Eu, 2);  /* 0C07470C mov.l Rm,@Rn */
	r12 = 0xC29D720u; UPD(0x0C074710u, 1);  /* 0C07470E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074710 add #imm,Rn */
	r7 = 0xC28EDB0u; UPD(0x0C074714u, 2);  /* 0C074712 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C074716u, 1);  /* 0C074714 mov.l @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r7); UPD(0x0C074718u, 1);  /* 0C074716 mov.w @Rm,Rn */
	r4 |= r11;  /* 0C074718 or Rm,Rn */
	W32(r8, r4); UPD(0x0C07471Cu, 2);  /* 0C07471A mov.l Rm,@Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C07471Eu, 1);  /* 0C07471C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07471E add #imm,Rn */
	W32(r8, r4); UPD(0x0C074722u, 2);  /* 0C074720 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C074724u, 1);  /* 0C074722 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074724 add #imm,Rn */
	W32(r8, r10); UPD(0x0C074728u, 2);  /* 0C074726 mov.l Rm,@Rn */
	r6 = R32(r2); UPD(0x0C07472Au, 1);  /* 0C074728 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07472A add #imm,Rn */
	r6 += r11;  /* 0C07472C add Rm,Rn */
	r6 += 0x1u;  /* 0C07472E add #imm,Rn */
	W32(r8, r6); UPD(0x0C074732u, 4);  /* 0C074730 mov.l Rm,@Rn */
	r5 = R32(r13); UPD(0x0C074734u, 1);  /* 0C074732 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074734 add #imm,Rn */
	r5 += r11;  /* 0C074736 add Rm,Rn */
	r5 += 0x1u;  /* 0C074738 add #imm,Rn */
	W32(r8, r5); UPD(0x0C07473Cu, 4);  /* 0C07473A mov.l Rm,@Rn */
	r3 = 0xC3C544Cu; UPD(0x0C07473Eu, 1);  /* 0C07473C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07473E add #imm,Rn */
	r7 = R32(r12); UPD(0x0C074742u, 2);  /* 0C074740 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C074744u, 1);  /* 0C074742 mov.w @Rm,Rn */
	r7 |= r0;  /* 0C074744 or Rm,Rn */
	W32(r8, r7); UPD(0x0C074748u, 2);  /* 0C074746 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C074748 add #imm,Rn */
	UPD(0x0C07474Au, 1);
L_0C07474A: BLKS(0x0C07474Au);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 3); goto L_0C073EF8; }  /* 0C07474A bra */
L_0C074750: BLKS(0x0C074750u);
	r4 = 0xC2A6940u; UPD(0x0C074752u, 1);  /* 0C074750 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C074754u, 1);  /* 0C074752 mov.l @(disp,Rm),Rn */
	r10 += r14;  /* 0C074754 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C074758u, 2);  /* 0C074756 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C074758 exts.w Rm,Rn */
	r3 += r1;  /* 0C07475A add Rm,Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C07475Eu, 3);  /* 0C07475C mov.l @(disp,Rm),Rn */
	IF(0x0C07475Eu); r3 <<= 16;  /* 0C07475E shll16 Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C074762u, 2);  /* 0C074760 mov.w @Rm,Rn */
	r2 += r7;  /* 0C074762 add Rm,Rn */
	r6 = 0xC232310u; UPD(0x0C074766u, 2);  /* 0C074764 mov.l @(disp,pc),Rn */
	{ r1 -= r2; /* slot sub Rm,Rn */ UPD(0x0C07467Eu, 3); goto L_0C07467E; }  /* 0C074766 bra */
L_0C074770: BLKS(0x0C074770u);
	r1 = 0x4000u; UPD(0x0C074772u, 1);  /* 0C074770 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C074772 cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = (s32)r4 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C07477Cu, 4); goto L_0C07477C; } goto L_0C074778; }  /* 0C074774 bf/s */
L_0C074778: BLKS(0x0C074778u);
	{ r0 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C074B90u, 4); goto L_0C074B90; }  /* 0C074778 bra */
L_0C07477C: BLKS(0x0C07477Cu);
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C074784u, 3); goto L_0C074784; } goto L_0C074780; }  /* 0C07477C bf/s */
L_0C074780: BLKS(0x0C074780u);
	{ IF(0x0C074782u); ; /* slot nop */ UPD(0x0C074AF0u, 4); goto L_0C074AF0; }  /* 0C074780 bra */
L_0C074784: BLKS(0x0C074784u);
	{ u32 c_ = !T; r13 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C074846u, 3); goto L_0C074846; } UPD(0x0C074788u, 1); goto L_0C074788; }  /* 0C074784 bf/s */
L_0C074788: BLKS(0x0C074788u);
	r2 = 0xFF000000u; UPD(0x0C07478Au, 1);  /* 0C074788 mov.l @(disp,pc),Rn */
	r1 = 0x2000000u; UPD(0x0C07478Cu, 1);  /* 0C07478A mov.l @(disp,pc),Rn */
	r2 &= r13;  /* 0C07478C and Rm,Rn */
	T = r2 == r1;  /* 0C07478E cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = r2 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C074798u, 5); goto L_0C074798; } goto L_0C074794; }  /* 0C074790 bf/s */
L_0C074794: BLKS(0x0C074794u);
	{ IF(0x0C074796u); ; /* slot nop */ UPD(0x0C074A80u, 4); goto L_0C074A80; }  /* 0C074794 bra */
L_0C074798: BLKS(0x0C074798u);
	{ u32 c_ = T; T = (r2 & r2) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C074850u, 3); goto L_0C074850; } goto L_0C07479C; }  /* 0C074798 bt/s */
L_0C07479C: BLKS(0x0C07479Cu);
	if (T) { UPD(0x0C0747A6u, 4); goto L_0C0747A6; }  /* 0C07479C bt */
L_0C07479E: BLKS(0x0C07479Eu);
	r7 = 0x1000000u; UPD(0x0C0747A0u, 1);  /* 0C07479E mov.l @(disp,pc),Rn */
	T = r2 == r7;  /* 0C0747A0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0747F0u, 4); goto L_0C0747F0; } UPD(0x0C0747A6u, 1); goto L_0C0747A6; }  /* 0C0747A2 bt/s */
L_0C0747A6: BLKS(0x0C0747A6u);
	r10 = 0xC232308u; UPD(0x0C0747A8u, 1);  /* 0C0747A6 mov.l @(disp,pc),Rn */
	r2 = R32(r10); UPD(0x0C0747AAu, 1);  /* 0C0747A8 mov.l @Rm,Rn */
	r11 = 0xC22E020u; UPD(0x0C0747ACu, 1);  /* 0C0747AA mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C0747AEu, 1);  /* 0C0747AC mov.l Rm,@Rn */
	r3 = 0xC2A6940u; UPD(0x0C0747B0u, 1);  /* 0C0747AE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0747B0 add #imm,Rn */
	r7 = 0xC228BF6u; UPD(0x0C0747B4u, 2);  /* 0C0747B2 mov.l @(disp,pc),Rn */
	r0 = 0xC238018u; UPD(0x0C0747B6u, 1);  /* 0C0747B4 mov.l @(disp,pc),Rn */
	r6 = 0xC2B0398u; UPD(0x0C0747B8u, 1);  /* 0C0747B6 mov.l @(disp,pc),Rn */
	r9 = R32(r11); UPD(0x0C0747BAu, 1);  /* 0C0747B8 mov.l @Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C0747BCu, 1);  /* 0C0747BA mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r7); UPD(0x0C0747BEu, 1);  /* 0C0747BC mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C0747C0u, 1);  /* 0C0747BE mov.w @Rm,Rn */
	r10 += r13;  /* 0C0747C0 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0747C4u, 2);  /* 0C0747C2 mov.w @Rm,Rn */
	IF(0x0C0747C4u); r10 <<= 16;  /* 0C0747C4 shll16 Rn */
	W32(r8, r9); UPD(0x0C0747C8u, 2);  /* 0C0747C6 mov.l Rm,@Rn */
	r12 += r5;  /* 0C0747C8 add Rm,Rn */
	r4 = r12 & 0xFFFF;  /* 0C0747CA extu.w Rm,Rn */
	r8 += 0x4u;  /* 0C0747CC add #imm,Rn */
	r10 |= r4;  /* 0C0747CE or Rm,Rn */
	W32(r8, r10); UPD(0x0C0747D2u, 5);  /* 0C0747D0 mov.l Rm,@Rn */
	r2 = 0xC3C4158u; UPD(0x0C0747D4u, 1);  /* 0C0747D2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0747D4 add #imm,Rn */
	r11 = R32(r2); UPD(0x0C0747D8u, 2);  /* 0C0747D6 mov.l @Rm,Rn */
	W32(r8, r11); UPD(0x0C0747DAu, 1);  /* 0C0747D8 mov.l Rm,@Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0747DCu, 1);  /* 0C0747DA mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0747DC add #imm,Rn */
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C073EF8u, 4); goto L_0C073EF8; }  /* 0C0747DE bra */
L_0C0747F0: BLKS(0x0C0747F0u);
	r13 = 0xC2A6940u; UPD(0x0C0747F2u, 1);  /* 0C0747F0 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0747F4u, 1);  /* 0C0747F2 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r13); UPD(0x0C0747F6u, 1);  /* 0C0747F4 mov.w @Rm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0747F8u, 1);  /* 0C0747F6 mov.l @(disp,Rm),Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C0747FAu, 1);  /* 0C0747F8 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C0747FA add Rm,Rn */
	r12 += r5;  /* 0C0747FC add Rm,Rn */
	r4 = r12 & 0xFFFF;  /* 0C0747FE extu.w Rm,Rn */
	IF(0x0C074800u); r6 <<= 16;  /* 0C074800 shll16 Rn */
	r6 |= r4;  /* 0C074802 or Rm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C074806u, 6);  /* 0C074804 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C074808u, 1);  /* 0C074806 mov.l @(disp,Rm),Rn */
	r4 = 0xC232308u; UPD(0x0C07480Au, 1);  /* 0C074808 mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C07480A and Rm,Rn */
	r2 = 0xC22E020u; UPD(0x0C07480Eu, 2);  /* 0C07480C mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x28u); UPD(0x0C074810u, 1);  /* 0C07480E mov.l @(disp,Rm),Rn */
L_0C074810: BLKS(0x0C074810u);
	r0 = R32(r4); UPD(0x0C074812u, 1);  /* 0C074810 mov.l @Rm,Rn */
	r9 = r7;  /* 0C074812 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C074816u, 2);  /* 0C074814 mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C074816 add #imm,Rn */
	r0 = 0x54u;  /* 0C074818 mov #imm,Rn */
	IF(0x0C07481Au); r1 = R32(r0 + r14); UPD(0x0C07481Cu, 3);  /* 0C07481A mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C07481C add #imm,Rn */
	r10 = R32(r2); UPD(0x0C074820u, 2);  /* 0C07481E mov.l @Rm,Rn */
	r1 += 0x4u;  /* 0C074820 add #imm,Rn */
	r10 += r7;  /* 0C074822 add Rm,Rn */
	IF(0x0C074824u); W32(r0 + r14, r1); UPD(0x0C074826u, 3);  /* 0C074824 mov.l Rm,@(r0,Rn) */
	W32(r8, r10); UPD(0x0C074828u, 1);  /* 0C074826 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C074828 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r12 = v_; } UPD(0x0C07482Cu, 2);  /* 0C07482A mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C07482C add #imm,Rn */
	r12 += r6;  /* 0C07482E add Rm,Rn */
	r12 += r7;  /* 0C074830 add Rm,Rn */
	W32(r8, r12); UPD(0x0C074834u, 4);  /* 0C074832 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r9;  /* 0C074834 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C074836 add #imm,Rn */
	W32(r8, r5); UPD(0x0C07483Au, 3);  /* 0C074838 mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C07483A cmp/ge Rm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C07483Eu, 2);  /* 0C07483C mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07483E add #imm,Rn */
	W32(r8, r11); UPD(0x0C074842u, 2);  /* 0C074840 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074810u, 3); goto L_0C074810; } UPD(0x0C074846u, 1); goto L_0C074846; }  /* 0C074842 bt/s */
L_0C074846: BLKS(0x0C074846u);
	{ IF(0x0C074848u); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C074846 bra */
L_0C074850: BLKS(0x0C074850u);
	r1 = 0x4000000u; UPD(0x0C074852u, 1);  /* 0C074850 mov.l @(disp,pc),Rn */
	T = r2 == r1;  /* 0C074852 cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = r2 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C07485Cu, 4); goto L_0C07485C; } goto L_0C074858; }  /* 0C074854 bf/s */
L_0C074858: BLKS(0x0C074858u);
	{ IF(0x0C07485Au); ; /* slot nop */ UPD(0x0C074A00u, 4); goto L_0C074A00; }  /* 0C074858 bra */
L_0C07485C: BLKS(0x0C07485Cu);
	if (T) { UPD(0x0C074940u, 3); goto L_0C074940; }  /* 0C07485C bt */
L_0C07485E: BLKS(0x0C07485Eu);
	r3 = 0x3000000u; UPD(0x0C074860u, 1);  /* 0C07485E mov.l @(disp,pc),Rn */
	T = r2 == r3;  /* 0C074860 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0747A6u, 4); goto L_0C0747A6; }  /* 0C074862 bf */
L_0C074864: BLKS(0x0C074864u);
	r10 = 0xC228BF6u; UPD(0x0C074866u, 1);  /* 0C074864 mov.l @(disp,pc),Rn */
	r2 = 0xC2A6940u; UPD(0x0C074868u, 1);  /* 0C074866 mov.l @(disp,pc),Rn */
	r11 = 0xC238018u; UPD(0x0C07486Au, 1);  /* 0C074868 mov.l @(disp,pc),Rn */
	r9 = 0xC2B0398u; UPD(0x0C07486Cu, 1);  /* 0C07486A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C07486Eu, 1);  /* 0C07486C mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C074870u, 1);  /* 0C07486E mov.w @Rm,Rn */
	r10 = 0x0u;  /* 0C074870 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C074874u, 2);  /* 0C074872 mov.w @Rm,Rn */
	r6 += r12;  /* 0C074874 add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C074878u, 2);  /* 0C074876 mov.w @Rm,Rn */
	IF(0x0C074878u); r6 <<= 16;  /* 0C074878 shll16 Rn */
	r4 = 0xFFFFu; UPD(0x0C07487Cu, 2);  /* 0C07487A mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C07487C add Rm,Rn */
	r5 &= r4;  /* 0C07487E and Rm,Rn */
	r0 = 0xC3C4158u; UPD(0x0C074882u, 3);  /* 0C074880 mov.l @(disp,pc),Rn */
	r6 |= r5;  /* 0C074882 or Rm,Rn */
	r3 = 0xC28EDAEu; UPD(0x0C074886u, 2);  /* 0C074884 mov.l @(disp,pc),Rn */
	r5 = R32(r0); UPD(0x0C074888u, 1);  /* 0C074886 mov.l @Rm,Rn */
	r7 = 0x30000u; UPD(0x0C07488Au, 1);  /* 0C074888 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C07488A and Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C07488Eu, 2);  /* 0C07488C mov.w @Rm,Rn */
	IF(0x0C07488Eu); T = (s32)r1 >= 0;  /* 0C07488E cmp/pz Rn */
	{ u32 c_ = !T; r5 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C074846u, 4); goto L_0C074846; } goto L_0C074894; }  /* 0C074890 bf/s */
L_0C074894: BLKS(0x0C074894u);
	r7 = 0xC232308u; UPD(0x0C074896u, 2);  /* 0C074894 mov.l @(disp,pc),Rn */
	r3 = r1;  /* 0C074896 mov Rm,Rn */
	r4 = 0xC22E020u; UPD(0x0C07489Au, 2);  /* 0C074898 mov.l @(disp,pc),Rn */
L_0C07489A: BLKS(0x0C07489Au);
	r0 = R32(r7); UPD(0x0C07489Cu, 1);  /* 0C07489A mov.l @Rm,Rn */
	r12 = 0x40u;  /* 0C07489C mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0748A0u, 2);  /* 0C07489E mov.l Rm,@Rn */
	r12 += r14;  /* 0C0748A0 add Rm,Rn */
	r1 = R32(r12 + 0x14u); UPD(0x0C0748A4u, 2);  /* 0C0748A2 mov.l @(disp,Rm),Rn */
	r11 = r10;  /* 0C0748A4 mov Rm,Rn */
	r2 = R32(r4); UPD(0x0C0748A8u, 2);  /* 0C0748A6 mov.l @Rm,Rn */
	IF(0x0C0748A8u); r11 <<= 16;  /* 0C0748A8 shll16 Rn */
	r1 += 0x4u;  /* 0C0748AA add #imm,Rn */
	r8 += 0x4u;  /* 0C0748AC add #imm,Rn */
	r2 += r11;  /* 0C0748AE add Rm,Rn */
	W32(r12 + 0x14u, r1); UPD(0x0C0748B2u, 5);  /* 0C0748B0 mov.l Rm,@(disp,Rn) */
	r0 = r10;  /* 0C0748B2 mov Rm,Rn */
	W32(r8, r2); UPD(0x0C0748B6u, 2);  /* 0C0748B4 mov.l Rm,@Rn */
	r1 += 0xFFFFFFFCu;  /* 0C0748B6 add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r9 = v_; } UPD(0x0C0748BAu, 2);  /* 0C0748B8 mov.l @Rm+,Rn */
	r8 += 0x4u;  /* 0C0748BA add #imm,Rn */
	r9 += r6;  /* 0C0748BC add Rm,Rn */
	r9 += r11;  /* 0C0748BE add Rm,Rn */
	W32(r8, r9); UPD(0x0C0748C2u, 4);  /* 0C0748C0 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0748C2 add #imm,Rn */
	r8 += 0x4u;  /* 0C0748C4 add #imm,Rn */
	W32(r8, r5); UPD(0x0C0748C8u, 3);  /* 0C0748C6 mov.l Rm,@Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0748C8 exts.w Rm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C0748CCu, 2);  /* 0C0748CA mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0748CC add #imm,Rn */
	W32(r8, r13); UPD(0x0C0748D0u, 2);  /* 0C0748CE mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r10;  /* 0C0748D0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07489Au, 4); goto L_0C07489A; } goto L_0C0748D6; }  /* 0C0748D2 bt/s */
L_0C0748D6: BLKS(0x0C0748D6u);
	{ IF(0x0C0748D8u); ; /* slot nop */ UPD(0x0C073D24u, 4); goto L_0C073D24; }  /* 0C0748D6 bra */
L_0C074940: BLKS(0x0C074940u);
	r9 = 0x5000000u; UPD(0x0C074942u, 1);  /* 0C074940 mov.l @(disp,pc),Rn */
	T = r2 == r9;  /* 0C074942 cmp/eq Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07494Cu, 4); goto L_0C07494C; } goto L_0C074948; }  /* 0C074944 bt/s */
L_0C074948: BLKS(0x0C074948u);
	{ IF(0x0C07494Au); ; /* slot nop */ UPD(0x0C0747A6u, 4); goto L_0C0747A6; }  /* 0C074948 bra */
L_0C07494C: BLKS(0x0C07494Cu);
	r6 = 0xC0000000u; UPD(0x0C07494Eu, 1);  /* 0C07494C mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C074950u, 1);  /* 0C07494E mov.l Rm,@Rn */
	r9 = 0x10000000u; UPD(0x0C074952u, 1);  /* 0C074950 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074952 add #imm,Rn */
	r0 = 0xC22E020u; UPD(0x0C074956u, 2);  /* 0C074954 mov.l @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C074956 mov #imm,Rn */
	r11 = 0x5000000u; UPD(0x0C07495Au, 2);  /* 0C074958 mov.l @(disp,pc),Rn */
	r4 = 0x1F000Fu; UPD(0x0C07495Cu, 1);  /* 0C07495A mov.l @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C07495Eu, 1);  /* 0C07495C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07495E mov #imm,Rn */
	UPD(0x0C074960u, 1);
L_0C074960: BLKS(0x0C074960u);
	r3 = r11;  /* 0C074960 mov Rm,Rn */
	r2 = 0x0u;  /* 0C074962 mov #imm,Rn */
	UPD(0x0C074964u, 2);
L_0C074964: BLKS(0x0C074964u);
	W32(r8, r9); UPD(0x0C074966u, 1);  /* 0C074964 mov.l Rm,@Rn */
	r13 = r3;  /* 0C074966 mov Rm,Rn */
	r12 = R32(r0); UPD(0x0C07496Au, 2);  /* 0C074968 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07496A add #imm,Rn */
	W32(r8, r12); UPD(0x0C07496Eu, 2);  /* 0C07496C mov.l Rm,@Rn */
	r13 |= r2;  /* 0C07496E or Rm,Rn */
	r8 += 0x4u;  /* 0C074970 add #imm,Rn */
	W32(r8, r13); UPD(0x0C074974u, 3);  /* 0C074972 mov.l Rm,@Rn */
	r12 = r7;  /* 0C074974 mov Rm,Rn */
	r8 += 0x4u;  /* 0C074976 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07497Au, 3);  /* 0C074978 mov.l Rm,@Rn */
	r12 += 0x1u;  /* 0C07497A add #imm,Rn */
	r8 += 0x4u;  /* 0C07497C add #imm,Rn */
	W32(r8, r5); UPD(0x0C074980u, 3);  /* 0C07497E mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r12;  /* 0C074980 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C074982 add #imm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C074984 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074964u, 6); goto L_0C074964; } goto L_0C07498A; }  /* 0C074986 bf/s */
L_0C07498A: BLKS(0x0C07498Au);
	r3 = r10;  /* 0C07498A mov Rm,Rn */
	r10 = 0x200000u; UPD(0x0C07498Eu, 3);  /* 0C07498C mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C07498E add #imm,Rn */
	r11 += r10;  /* 0C074990 add Rm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C074992 exts.w Rm,Rn */
	r7 = 0x7u;  /* 0C074994 mov #imm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C074996 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074960u, 8); goto L_0C074960; } goto L_0C07499C; }  /* 0C074998 bf/s */
L_0C07499C: BLKS(0x0C07499Cu);
	r13 = 0xFFFFu; UPD(0x0C07499Eu, 2);  /* 0C07499C mov.l @(disp,pc),Rn */
	r12 = R32(r14); UPD(0x0C0749A0u, 1);  /* 0C07499E mov.l @Rm,Rn */
	r1 = 0x13040000u; UPD(0x0C0749A2u, 1);  /* 0C0749A0 mov.l @(disp,pc),Rn */
	r12 &= r13;  /* 0C0749A2 and Rm,Rn */
	r12 |= r1;  /* 0C0749A4 or Rm,Rn */
	W32(r8, r12); UPD(0x0C0749A8u, 3);  /* 0C0749A6 mov.l Rm,@Rn */
	r5 = 0xC22E020u; UPD(0x0C0749AAu, 1);  /* 0C0749A8 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749AA add #imm,Rn */
	r0 = R32(r5); UPD(0x0C0749AEu, 2);  /* 0C0749AC mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C0749B0u, 1);  /* 0C0749AE mov.l Rm,@Rn */
	r4 = 0x5000000u; UPD(0x0C0749B2u, 1);  /* 0C0749B0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749B2 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0749B6u, 2);  /* 0C0749B4 mov.l Rm,@Rn */
	r0 = 0xC3C4158u; UPD(0x0C0749B8u, 1);  /* 0C0749B6 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749B8 add #imm,Rn */
	r6 = R32(r0); UPD(0x0C0749BCu, 2);  /* 0C0749BA mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C0749BEu, 1);  /* 0C0749BC mov.l Rm,@Rn */
	r6 = 0x808080u; UPD(0x0C0749C0u, 1);  /* 0C0749BE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749C0 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0749C4u, 2);  /* 0C0749C2 mov.l Rm,@Rn */
	r9 = 0xC0000001u; UPD(0x0C0749C6u, 1);  /* 0C0749C4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749C6 add #imm,Rn */
	W32(r8, r9); UPD(0x0C0749CAu, 2);  /* 0C0749C8 mov.l Rm,@Rn */
	r11 = 0x13010080u; UPD(0x0C0749CCu, 1);  /* 0C0749CA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749CC add #imm,Rn */
	W32(r8, r11); UPD(0x0C0749D0u, 2);  /* 0C0749CE mov.l Rm,@Rn */
	r10 = 0xC2A6940u; UPD(0x0C0749D2u, 1);  /* 0C0749D0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0749D2 add #imm,Rn */
	r3 = 0xC228BF6u; UPD(0x0C0749D6u, 2);  /* 0C0749D4 mov.l @(disp,pc),Rn */
	r12 = 0xC238018u; UPD(0x0C0749D8u, 1);  /* 0C0749D6 mov.l @(disp,pc),Rn */
	r2 = 0xC2B0398u; UPD(0x0C0749DAu, 1);  /* 0C0749D8 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0749DCu, 1);  /* 0C0749DA mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0749DEu, 1);  /* 0C0749DC mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r12); UPD(0x0C0749E0u, 1);  /* 0C0749DE mov.w @Rm,Rn */
	r11 += r7;  /* 0C0749E0 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0749E4u, 2);  /* 0C0749E2 mov.w @Rm,Rn */
	IF(0x0C0749E4u); r11 <<= 16;  /* 0C0749E4 shll16 Rn */
	W32(r8, r4); UPD(0x0C0749E8u, 2);  /* 0C0749E6 mov.l Rm,@Rn */
	r9 += r5;  /* 0C0749E8 add Rm,Rn */
	r9 &= r13;  /* 0C0749EA and Rm,Rn */
	r8 += 0x4u;  /* 0C0749EC add #imm,Rn */
	r11 |= r9;  /* 0C0749EE or Rm,Rn */
	W32(r8, r11); UPD(0x0C0749F2u, 5);  /* 0C0749F0 mov.l Rm,@Rn */
	r4 = R32(r0); UPD(0x0C0749F4u, 1);  /* 0C0749F2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0749F4 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0749F8u, 2);  /* 0C0749F6 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C073EF4u, 3); goto L_0C073EF4; }  /* 0C0749F8 bra */
L_0C074A00: BLKS(0x0C074A00u);
	r0 = 0xC2A6940u; UPD(0x0C074A02u, 1);  /* 0C074A00 mov.l @(disp,pc),Rn */
	r2 = 0xC228BF6u; UPD(0x0C074A04u, 1);  /* 0C074A02 mov.l @(disp,pc),Rn */
	r11 = 0xC238018u; UPD(0x0C074A06u, 1);  /* 0C074A04 mov.l @(disp,pc),Rn */
	r9 = 0xC2B0398u; UPD(0x0C074A08u, 1);  /* 0C074A06 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C074A0Au, 1);  /* 0C074A08 mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C074A0Cu, 1);  /* 0C074A0A mov.w @Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C074A0Eu, 1);  /* 0C074A0C mov.w @Rm,Rn */
	r6 += r12;  /* 0C074A0E add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C074A12u, 2);  /* 0C074A10 mov.w @Rm,Rn */
	IF(0x0C074A12u); r6 <<= 16;  /* 0C074A12 shll16 Rn */
	r10 += r13;  /* 0C074A14 add Rm,Rn */
	r5 = r10 & 0xFFFF;  /* 0C074A16 extu.w Rm,Rn */
	r4 = 0xC3C4158u; UPD(0x0C074A1Au, 4);  /* 0C074A18 mov.l @(disp,pc),Rn */
	r6 |= r5;  /* 0C074A1A or Rm,Rn */
	r3 = 0xC2B1A24u; UPD(0x0C074A1Eu, 2);  /* 0C074A1C mov.l @(disp,pc),Rn */
	r7 = 0xFFFF0000u; UPD(0x0C074A20u, 1);  /* 0C074A1E mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C074A22u, 1);  /* 0C074A20 mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C074A24u, 1);  /* 0C074A22 mov.w @Rm,Rn */
	r5 &= r7;  /* 0C074A24 and Rm,Rn */
	IF(0x0C074A26u); T = (s32)r1 >= 0;  /* 0C074A26 cmp/pz Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074A7Cu, 5); goto L_0C074A7C; } goto L_0C074A2C; }  /* 0C074A28 bf/s */
L_0C074A2C: BLKS(0x0C074A2Cu);
	r0 = 0xC232308u; UPD(0x0C074A2Eu, 2);  /* 0C074A2C mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C074A2E mov Rm,Rn */
	UPD(0x0C074A30u, 1);
L_0C074A30: BLKS(0x0C074A30u);
	r13 = 0x40u;  /* 0C074A30 mov #imm,Rn */
	r13 += r14;  /* 0C074A32 add Rm,Rn */
	r1 = R32(r13 + 0x14u); UPD(0x0C074A36u, 3);  /* 0C074A34 mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C074A36 add #imm,Rn */
	W32(r13 + 0x14u, r1); UPD(0x0C074A3Au, 2);  /* 0C074A38 mov.l Rm,@(disp,Rn) */
	r1 += 0xFFFFFFFCu;  /* 0C074A3A add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r10 = v_; } UPD(0x0C074A3Eu, 2);  /* 0C074A3C mov.l @Rm+,Rn */
	r2 = r10 & 0xFF;  /* 0C074A3E extu.b Rm,Rn */
	r11 = R32(r0); UPD(0x0C074A42u, 2);  /* 0C074A40 mov.l @Rm,Rn */
	r3 = r2;  /* 0C074A42 mov Rm,Rn */
	r9 = 0xFFFF0000u; UPD(0x0C074A46u, 2);  /* 0C074A44 mov.l @(disp,pc),Rn */
	IF(0x0C074A46u); r3 <<= 8;  /* 0C074A46 shll8 Rn */
	r11 &= r9;  /* 0C074A48 and Rm,Rn */
	r3 += r2;  /* 0C074A4A add Rm,Rn */
	r12 = 0x2040000u; UPD(0x0C074A4Eu, 4);  /* 0C074A4C mov.l @(disp,pc),Rn */
	r11 |= r3;  /* 0C074A4E or Rm,Rn */
	r11 |= r12;  /* 0C074A50 or Rm,Rn */
	W32(r8, r11); UPD(0x0C074A54u, 3);  /* 0C074A52 mov.l Rm,@Rn */
	r10 = r6;  /* 0C074A54 mov Rm,Rn */
	r9 = 0xC22E020u; UPD(0x0C074A58u, 2);  /* 0C074A56 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074A58 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C074A5Cu, 2);  /* 0C074A5A mov.l @Rm,Rn */
	r10 += r7;  /* 0C074A5C add Rm,Rn */
	r13 += r7;  /* 0C074A5E add Rm,Rn */
	W32(r8, r13); UPD(0x0C074A62u, 3);  /* 0C074A60 mov.l Rm,@Rn */
	r3 = r7;  /* 0C074A62 mov Rm,Rn */
	r8 += 0x4u;  /* 0C074A64 add #imm,Rn */
	W32(r8, r10); UPD(0x0C074A68u, 3);  /* 0C074A66 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C074A68 add #imm,Rn */
	r8 += 0x4u;  /* 0C074A6A add #imm,Rn */
	W32(r8, r5); UPD(0x0C074A6Eu, 3);  /* 0C074A6C mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r3;  /* 0C074A6E exts.w Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C074A72u, 2);  /* 0C074A70 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074A72 add #imm,Rn */
	W32(r8, r1); UPD(0x0C074A76u, 2);  /* 0C074A74 mov.l Rm,@Rn */
	T = (s32)r4 >= (s32)r7;  /* 0C074A76 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074A30u, 4); goto L_0C074A30; } UPD(0x0C074A7Cu, 1); goto L_0C074A7C; }  /* 0C074A78 bt/s */
L_0C074A7C: BLKS(0x0C074A7Cu);
	{ IF(0x0C074A7Eu); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C074A7C bra */
L_0C074A80: BLKS(0x0C074A80u);
	r11 = 0xC238018u; UPD(0x0C074A82u, 1);  /* 0C074A80 mov.l @(disp,pc),Rn */
	r9 = 0xC2B0398u; UPD(0x0C074A84u, 1);  /* 0C074A82 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C074A86u, 1);  /* 0C074A84 mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C074A88u, 1);  /* 0C074A86 mov.w @Rm,Rn */
	r0 = 0xC2A6940u; UPD(0x0C074A8Au, 1);  /* 0C074A88 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C074A8A add Rm,Rn */
	r10 = 0xC228BF6u; UPD(0x0C074A8Eu, 2);  /* 0C074A8C mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C074A8E extu.w Rm,Rn */
	r2 = 0xC3C4158u; UPD(0x0C074A92u, 2);  /* 0C074A90 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C074A94u, 1);  /* 0C074A92 mov.w @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C074A96u, 1);  /* 0C074A94 mov.w @Rm,Rn */
	r3 = 0xC2B1A24u; UPD(0x0C074A98u, 1);  /* 0C074A96 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C074A98 add Rm,Rn */
	r7 = 0xFFFF0000u; UPD(0x0C074A9Cu, 2);  /* 0C074A9A mov.l @(disp,pc),Rn */
	IF(0x0C074A9Cu); r6 <<= 16;  /* 0C074A9C shll16 Rn */
	r5 = R32(r2); UPD(0x0C074AA0u, 2);  /* 0C074A9E mov.l @Rm,Rn */
	r6 |= r4;  /* 0C074AA0 or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C074AA4u, 2);  /* 0C074AA2 mov.w @Rm,Rn */
	r5 &= r7;  /* 0C074AA4 and Rm,Rn */
	IF(0x0C074AA6u); T = (s32)r1 >= 0;  /* 0C074AA6 cmp/pz Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074A7Cu, 5); goto L_0C074A7C; } goto L_0C074AAC; }  /* 0C074AA8 bf/s */
L_0C074AAC: BLKS(0x0C074AACu);
	r0 = 0xC232308u; UPD(0x0C074AAEu, 2);  /* 0C074AAC mov.l @(disp,pc),Rn */
	r3 = r1;  /* 0C074AAE mov Rm,Rn */
	r4 = 0xC22E020u; UPD(0x0C074AB2u, 2);  /* 0C074AB0 mov.l @(disp,pc),Rn */
	IF(0x0C074AB2u); ;  /* 0C074AB2 nop */
	UPD(0x0C074AB4u, 1);
L_0C074AB4: BLKS(0x0C074AB4u);
	r10 = 0x40u;  /* 0C074AB4 mov #imm,Rn */
	r10 += r14;  /* 0C074AB6 add Rm,Rn */
	r12 = R32(r10 + 0x14u); UPD(0x0C074ABAu, 3);  /* 0C074AB8 mov.l @(disp,Rm),Rn */
	r9 = r6;  /* 0C074ABA mov Rm,Rn */
	r2 = R32(r0); UPD(0x0C074ABEu, 2);  /* 0C074ABC mov.l @Rm,Rn */
	r12 += 0x4u;  /* 0C074ABE add #imm,Rn */
	W32(r10 + 0x14u, r12); UPD(0x0C074AC2u, 2);  /* 0C074AC0 mov.l Rm,@(disp,Rn) */
	r9 += r7;  /* 0C074AC2 add Rm,Rn */
	W32(r8, r2); UPD(0x0C074AC6u, 2);  /* 0C074AC4 mov.l Rm,@Rn */
	r12 += 0xFFFFFFFCu;  /* 0C074AC6 add #imm,Rn */
	r11 = R32(r4); UPD(0x0C074ACAu, 2);  /* 0C074AC8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074ACA add #imm,Rn */
	{ u32 v_ = R32(r12); r12 += 4; r1 = v_; } UPD(0x0C074ACEu, 2);  /* 0C074ACC mov.l @Rm+,Rn */
	r2 = r7;  /* 0C074ACE mov Rm,Rn */
	r11 += r1;  /* 0C074AD0 add Rm,Rn */
	W32(r8, r11); UPD(0x0C074AD4u, 3);  /* 0C074AD2 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C074AD4 add #imm,Rn */
	r8 += 0x4u;  /* 0C074AD6 add #imm,Rn */
	W32(r8, r9); UPD(0x0C074ADAu, 3);  /* 0C074AD8 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C074ADA exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C074ADC add #imm,Rn */
	W32(r8, r5); UPD(0x0C074AE0u, 3);  /* 0C074ADE mov.l Rm,@Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C074AE0 cmp/ge Rm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C074AE4u, 2);  /* 0C074AE2 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074AE4 add #imm,Rn */
	W32(r8, r13); UPD(0x0C074AE8u, 2);  /* 0C074AE6 mov.l Rm,@Rn */
	{ u32 c_ = T; r8 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074AB4u, 3); goto L_0C074AB4; } UPD(0x0C074AECu, 1); goto L_0C074AEC; }  /* 0C074AE8 bt/s */
L_0C074AEC: BLKS(0x0C074AECu);
	{ IF(0x0C074AEEu); ; /* slot nop */ UPD(0x0C073D24u, 3); goto L_0C073D24; }  /* 0C074AEC bra */
L_0C074AF0: BLKS(0x0C074AF0u);
	r6 = 0x8000u; UPD(0x0C074AF2u, 1);  /* 0C074AF0 mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C074AF2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x1Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C074B50u, 4); goto L_0C074B50; } goto L_0C074AF8; }  /* 0C074AF4 bt/s */
L_0C074AF8: BLKS(0x0C074AF8u);
	r0 = 0xC000u; UPD(0x0C074AFAu, 2);  /* 0C074AF8 mov.l @(disp,pc),Rn */
	T = r4 == r0;  /* 0C074AFA cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C074AECu, 4); goto L_0C074AEC; }  /* 0C074AFC bf */
L_0C074AFE: BLKS(0x0C074AFEu);
	W32(r8, r13); UPD(0x0C074B00u, 1);  /* 0C074AFE mov.l Rm,@Rn */
	r0 = 0x1Au;  /* 0C074B00 mov #imm,Rn */
	r9 = 0xC2A6940u; UPD(0x0C074B04u, 2);  /* 0C074B02 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074B04 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C074B08u, 2);  /* 0C074B06 mov.w @Rm,Rn */
	r11 = R32(r14 + 0x1Cu); UPD(0x0C074B0Au, 1);  /* 0C074B08 mov.l @(disp,Rm),Rn */
	r13 -= r11;  /* 0C074B0A sub Rm,Rn */
	r13 -= r12;  /* 0C074B0C sub Rm,Rn */
	IF(0x0C074B0Eu); r12 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074B10u, 3);  /* 0C074B0E mov.w @(r0,Rm),Rn */
	r4 = R32(r14 + 0x20u); UPD(0x0C074B12u, 1);  /* 0C074B10 mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C074B12 mov #imm,Rn */
	r5 = 0xC22E020u; UPD(0x0C074B16u, 2);  /* 0C074B14 mov.l @(disp,pc),Rn */
	r12 -= r4;  /* 0C074B16 sub Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C074B1Au, 2);  /* 0C074B18 mov.l @(disp,Rm),Rn */
	IF(0x0C074B1Au); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074B1Cu, 1);  /* 0C074B1A mov.w @(r0,Rm),Rn */
	r12 -= r2;  /* 0C074B1C sub Rm,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C074B20u, 2);  /* 0C074B1E mov.l @(disp,Rm),Rn */
	r12 -= r3;  /* 0C074B20 sub Rm,Rn */
	r6 = R32(r5); UPD(0x0C074B24u, 2);  /* 0C074B22 mov.l @Rm,Rn */
	r13 -= r7;  /* 0C074B24 sub Rm,Rn */
	r10 = 0xFFFFu; UPD(0x0C074B28u, 2);  /* 0C074B26 mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C074B28 add #imm,Rn */
	W32(r8, r6); UPD(0x0C074B2Cu, 2);  /* 0C074B2A mov.l Rm,@Rn */
	r12 += 0xFFFFFFFFu;  /* 0C074B2C add #imm,Rn */
	IF(0x0C074B2Eu); r13 <<= 16;  /* 0C074B2E shll16 Rn */
	r12 &= r10;  /* 0C074B30 and Rm,Rn */
	r8 += 0x4u;  /* 0C074B32 add #imm,Rn */
	r13 |= r12;  /* 0C074B34 or Rm,Rn */
	W32(r8, r13); UPD(0x0C074B38u, 6);  /* 0C074B36 mov.l Rm,@Rn */
	r1 = 0xC3C4158u; UPD(0x0C074B3Au, 1);  /* 0C074B38 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074B3A add #imm,Rn */
	r0 = R32(r1); UPD(0x0C074B3Eu, 2);  /* 0C074B3C mov.l @Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C074B40u, 1);  /* 0C074B3E mov.l @(disp,Rm),Rn */
	W32(r8, r0); UPD(0x0C074B42u, 1);  /* 0C074B40 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07474Au, 3); goto L_0C07474A; }  /* 0C074B42 bra */
L_0C074B50: BLKS(0x0C074B50u);
	r6 = 0xC2A6940u; UPD(0x0C074B52u, 1);  /* 0C074B50 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C074B54u, 1);  /* 0C074B52 mov.w @Rm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C074B56u, 1);  /* 0C074B54 mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C074B58u, 1);  /* 0C074B56 mov.l Rm,@Rn */
	r10 -= r9;  /* 0C074B58 sub Rm,Rn */
	r1 = 0xC22E020u; UPD(0x0C074B5Cu, 2);  /* 0C074B5A mov.l @(disp,pc),Rn */
	r10 -= r12;  /* 0C074B5C sub Rm,Rn */
	r11 = R32(r14 + 0x30u); UPD(0x0C074B60u, 2);  /* 0C074B5E mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C074B60 add #imm,Rn */
	r5 = R32(r1); UPD(0x0C074B64u, 2);  /* 0C074B62 mov.l @Rm,Rn */
	r10 -= r11;  /* 0C074B64 sub Rm,Rn */
	IF(0x0C074B66u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074B68u, 2);  /* 0C074B66 mov.w @(r0,Rm),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C074B68 add #imm,Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C074B6Cu, 2);  /* 0C074B6A mov.l @(disp,Rm),Rn */
	IF(0x0C074B6Cu); r10 <<= 16;  /* 0C074B6C shll16 Rn */
	r4 = 0xFFFFu; UPD(0x0C074B70u, 2);  /* 0C074B6E mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C074B70 add Rm,Rn */
	W32(r8, r5); UPD(0x0C074B74u, 2);  /* 0C074B72 mov.l Rm,@Rn */
	r3 &= r4;  /* 0C074B74 and Rm,Rn */
	r8 += 0x4u;  /* 0C074B76 add #imm,Rn */
	r10 |= r3;  /* 0C074B78 or Rm,Rn */
	W32(r8, r10); UPD(0x0C074B7Cu, 4);  /* 0C074B7A mov.l Rm,@Rn */
	r2 = 0xC3C4158u; UPD(0x0C074B7Eu, 1);  /* 0C074B7C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074B7E add #imm,Rn */
	r13 = R32(r2); UPD(0x0C074B82u, 2);  /* 0C074B80 mov.l @Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C074B84u, 1);  /* 0C074B82 mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C074B86u, 1);  /* 0C074B84 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C073FFCu, 3); goto L_0C073FFC; }  /* 0C074B86 bra */
L_0C074B90: BLKS(0x0C074B90u);
	IF(0x0C074B90u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074B92u, 1);  /* 0C074B90 mov.w @(r0,Rm),Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C074B94u, 1);  /* 0C074B92 mov.l @(disp,Rm),Rn */
	r0 = 0x36u;  /* 0C074B94 mov #imm,Rn */
	W32(r8, r13); UPD(0x0C074B98u, 2);  /* 0C074B96 mov.l Rm,@Rn */
	r10 -= r7;  /* 0C074B98 sub Rm,Rn */
	r5 = 0xC22E020u; UPD(0x0C074B9Cu, 2);  /* 0C074B9A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074B9C add #imm,Rn */
	r9 = 0xC2A6940u; UPD(0x0C074BA0u, 2);  /* 0C074B9E mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C074BA2u, 1);  /* 0C074BA0 mov.l @(disp,Rm),Rn */
	IF(0x0C074BA2u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074BA4u, 1);  /* 0C074BA2 mov.w @(r0,Rm),Rn */
	r10 -= r4;  /* 0C074BA4 sub Rm,Rn */
	r6 = R32(r5); UPD(0x0C074BA8u, 2);  /* 0C074BA6 mov.l @Rm,Rn */
	r10 -= r3;  /* 0C074BA8 sub Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C074BACu, 2);  /* 0C074BAA mov.w @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C074BAC add #imm,Rn */
	r11 = R32(r14 + 0x1Cu); UPD(0x0C074BB0u, 2);  /* 0C074BAE mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFu; UPD(0x0C074BB2u, 1);  /* 0C074BB0 mov.l @(disp,pc),Rn */
	r13 += r11;  /* 0C074BB2 add Rm,Rn */
	W32(r8, r6); UPD(0x0C074BB6u, 2);  /* 0C074BB4 mov.l Rm,@Rn */
	IF(0x0C074BB6u); r13 <<= 16;  /* 0C074BB6 shll16 Rn */
	r10 &= r2;  /* 0C074BB8 and Rm,Rn */
	r8 += 0x4u;  /* 0C074BBA add #imm,Rn */
	r13 |= r10;  /* 0C074BBC or Rm,Rn */
	W32(r8, r13); UPD(0x0C074BC0u, 5);  /* 0C074BBE mov.l Rm,@Rn */
	r12 = 0xC3C4158u; UPD(0x0C074BC2u, 1);  /* 0C074BC0 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074BC2 add #imm,Rn */
	r0 = R32(r12); UPD(0x0C074BC6u, 2);  /* 0C074BC4 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C074BC8u, 1);  /* 0C074BC6 mov.l Rm,@Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C074BCAu, 1);  /* 0C074BC8 mov.l @(disp,Rm),Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0741BEu, 3); goto L_0C0741BE; }  /* 0C074BCA bra */
}

/* FUN_0c074c30 */
void blk_f_0C074C30(sh3_t *c)
{
	LOCALS;
L_0C074C30: BLKS(0x0C074C30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074C32u, 1);  /* 0C074C30 mov.l Rm,@-Rn */
	r0 = r6 & 0xFF;  /* 0C074C32 extu.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074C36u, 2);  /* 0C074C34 mov.l Rm,@-Rn */
	r2 = 0x18u;  /* 0C074C36 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074C3Au, 2);  /* 0C074C38 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s8)r7;  /* 0C074C3A exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C074C3Eu, 2);  /* 0C074C3C mov.l Rm,@-Rn */
	T = r0 > r2;  /* 0C074C3E cmp/hi Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C074C42u, 2);  /* 0C074C40 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C074C44u, 1);  /* 0C074C42 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074C46u, 1);  /* 0C074C44 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C074C46 add #imm,Rn */
	r14 = r15;  /* 0C074C48 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C074C4Cu, 3);  /* 0C074C4A mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C074C54u, 3); goto L_0C074C54; } UPD(0x0C074C50u, 1); goto L_0C074C50; }  /* 0C074C4C bf/s */
L_0C074C50: BLKS(0x0C074C50u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C074F7Au, 3); goto L_0C074F7A; }  /* 0C074C50 bra */
L_0C074C54: BLKS(0x0C074C54u);
	r13 = 0xC2289E8u; UPD(0x0C074C56u, 1);  /* 0C074C54 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C074C56 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C074C5Au, 2);  /* 0C074C58 mov.l @Rm,Rn */
	r12 = 0x3FFFFFFFu; UPD(0x0C074C5Cu, 1);  /* 0C074C5A mov.l @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C074C5Eu, 1);  /* 0C074C5C mov.l @Rm,Rn */
	r5 &= r12;  /* 0C074C5E and Rm,Rn */
	r11 = 0xC3C86B0u; UPD(0x0C074C62u, 2);  /* 0C074C60 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFFFF8u;  /* 0C074C62 mov #imm,Rn */
	r10 = R32(r11); UPD(0x0C074C66u, 2);  /* 0C074C64 mov.l @Rm,Rn */
	IF(0x0C074C66u); ARG0(0x46CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C074C66 shad Rm,Rn */
	r9 = 0xC20751Cu; UPD(0x0C074C6Au, 2);  /* 0C074C68 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C074C6Cu, 1);  /* 0C074C6A mov.l Rm,@Rn */
	W32(r9, r10); UPD(0x0C074C6Eu, 1);  /* 0C074C6C mov.l Rm,@Rn */
	r3 = 0xC17F3ACu; UPD(0x0C074C70u, 1);  /* 0C074C6E mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C074C72u, 1);  /* 0C074C70 mov.l @Rm,Rn */
	IF(0x0C074C72u); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C074C74u, 1);  /* 0C074C72 mov.w @(r0,Rm),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C074C76u, 1);  /* 0C074C74 mov.l @(disp,Rm),Rn */
	IF(0x0C074C76u); MACL = r1 * r10;  /* 0C074C76 mul.l Rm,Rn */
	r13 = 0xFE000000u; UPD(0x0C074C7Au, 3);  /* 0C074C78 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C074C7A add Rm,Rn */
	r11 += r13;  /* 0C074C7C add Rm,Rn */
	IF(0x0C074C7Eu); ARG0(0x4BCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C074C7E shad Rm,Rn */
	IF(0x0C074C80u); r2 = MACL;  /* 0C074C80 sts macl,Rn */
	IF(0x0C074C82u); MACL = r11 * r10;  /* 0C074C82 mul.l Rm,Rn */
	W32(r14, r2); UPD(0x0C074C86u, 7);  /* 0C074C84 mov.l Rm,@Rn */
	r9 = 0x2000000u; UPD(0x0C074C88u, 1);  /* 0C074C86 mov.l @(disp,pc),Rn */
	IF(0x0C074C88u); r6 = MACL;  /* 0C074C88 sts macl,Rn */
	r3 = 0xC17F3EFu; UPD(0x0C074C8Cu, 2);  /* 0C074C8A mov.l @(disp,pc),Rn */
	r6 += r9;  /* 0C074C8C add Rm,Rn */
	IF(0x0C074C8Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074C90u, 2);  /* 0C074C8E mov.b @(r0,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C074C92u, 1);  /* 0C074C90 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3C415Cu; UPD(0x0C074C94u, 1);  /* 0C074C92 mov.l @(disp,pc),Rn */
	r6 = r2 & 0xFF;  /* 0C074C94 extu.b Rm,Rn */
	r0 = 0xFFu; UPD(0x0C074C98u, 2);  /* 0C074C96 mov.w @(disp,pc),Rn */
	r8 = R32(r4); UPD(0x0C074C9Au, 1);  /* 0C074C98 mov.l @Rm,Rn */
	r0 -= r6;  /* 0C074C9A sub Rm,Rn */
	IF(0x0C074C9Cu); MACL = r0 * r7;  /* 0C074C9C mul.l Rm,Rn */
	r4 = 0xC207518u; UPD(0x0C074CA0u, 4);  /* 0C074C9E mov.l @(disp,pc),Rn */
	IF(0x0C074CA0u); r2 = MACL;  /* 0C074CA0 sts macl,Rn */
	IF(0x0C074CA2u); T = (s32)r2 >= 0;  /* 0C074CA2 cmp/pz Rn */
	{ u32 c_ = T; W32(r4, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C074CACu, 5); goto L_0C074CAC; } UPD(0x0C074CA8u, 1); goto L_0C074CA8; }  /* 0C074CA4 bt/s */
L_0C074CA8: BLKS(0x0C074CA8u);
	{ r2 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C075970u, 3); goto L_0C075970; }  /* 0C074CA8 bra */
L_0C074CAC: BLKS(0x0C074CACu);
	r11 = 0xFFFFFFFAu;  /* 0C074CAC mov #imm,Rn */
	UPD(0x0C074CAEu, 1);
L_0C074CAE: BLKS(0x0C074CAEu);
	IF(0x0C074CAEu); ARG0(0x42BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C074CAE shad Rm,Rn */
	r7 = 0xC207520u; UPD(0x0C074CB2u, 2);  /* 0C074CB0 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C074CB2 add Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C074CB4 extu.b Rm,Rn */
	r1 = 0x0u;  /* 0C074CB6 mov #imm,Rn */
	W8(r7, r1); UPD(0x0C074CBAu, 4);  /* 0C074CB8 mov.b Rm,@Rn */
	r3 = r10;  /* 0C074CBA mov Rm,Rn */
	r6 = r10;  /* 0C074CBC mov Rm,Rn */
	IF(0x0C074CBEu); r3 <<= 16;  /* 0C074CBE shll16 Rn */
	IF(0x0C074CC0u); r6 <<= 8;  /* 0C074CC0 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C074CC4u, 5);  /* 0C074CC2 mov.w @Rm+,Rn */
	r3 |= r6;  /* 0C074CC4 or Rm,Rn */
	r9 = 0xC207510u; UPD(0x0C074CC8u, 2);  /* 0C074CC6 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C074CC8 or Rm,Rn */
	r7 = 0xC207514u; UPD(0x0C074CCCu, 2);  /* 0C074CCA mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C074CCC tst Rm,Rn */
	W32(r9, r3); UPD(0x0C074CD0u, 2);  /* 0C074CCE mov.l Rm,@Rn */
	W32(r7, r0); UPD(0x0C074CD2u, 1);  /* 0C074CD0 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r4, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C074CDCu, 3); goto L_0C074CDC; } UPD(0x0C074CD6u, 1); goto L_0C074CD6; }  /* 0C074CD2 bf/s */
L_0C074CD6: BLKS(0x0C074CD6u);
	{ IF(0x0C074CD8u); ; /* slot nop */ UPD(0x0C074F70u, 3); goto L_0C074F70; }  /* 0C074CD6 bra */
L_0C074CDC: BLKS(0x0C074CDCu);
	r4 = R32(r7); UPD(0x0C074CDEu, 1);  /* 0C074CDC mov.l @Rm,Rn */
L_0C074CDE: BLKS(0x0C074CDEu);
	r5 = 0x2000u; UPD(0x0C074CE0u, 1);  /* 0C074CDE mov.w @(disp,pc),Rn */
	T = (r4 & r5) == 0;  /* 0C074CE0 tst Rm,Rn */
	if (!T) { UPD(0x0C074CE8u, 4); goto L_0C074CE8; }  /* 0C074CE2 bf */
L_0C074CE4: BLKS(0x0C074CE4u);
	{ IF(0x0C074CE6u); ; /* slot nop */ UPD(0x0C075960u, 3); goto L_0C075960; }  /* 0C074CE4 bra */
L_0C074CE8: BLKS(0x0C074CE8u);
	r11 = 0xC20751Cu; UPD(0x0C074CEAu, 1);  /* 0C074CE8 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C074CEA extu.b Rm,Rn */
	r9 = 0xC29D738u; UPD(0x0C074CEEu, 2);  /* 0C074CEC mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C074CEE add Rm,Rn */
	r10 = R32(r11); UPD(0x0C074CF2u, 2);  /* 0C074CF0 mov.l @Rm,Rn */
	r12 = R32(r14); UPD(0x0C074CF4u, 1);  /* 0C074CF2 mov.l @Rm,Rn */
	r10 += r6;  /* 0C074CF4 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C074CF8u, 2);  /* 0C074CF6 mov.l @Rm,Rn */
	r10 += 0xFFFFFFFEu;  /* 0C074CF8 add #imm,Rn */
	r0 += r12;  /* 0C074CFA add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C074CFEu, 3);  /* 0C074CFC mov.w @Rm,Rn */
	r13 = (r0 >> 16) | (r0 << 16);  /* 0C074CFE swap.w Rm,Rn */
	r7 = 0xC3C4174u; UPD(0x0C074D02u, 2);  /* 0C074D00 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r13;  /* 0C074D02 exts.w Rm,Rn */
	r5 = 0xC2A6940u; UPD(0x0C074D06u, 2);  /* 0C074D04 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFu; UPD(0x0C074D08u, 1);  /* 0C074D06 mov.l @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C074D0Au, 1);  /* 0C074D08 mov.l Rm,@Rn */
	T = (r12 & r2) == 0;  /* 0C074D0A tst Rm,Rn */
	{ u32 c_ = T; W16(r5, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C074D14u, 4); goto L_0C074D14; } UPD(0x0C074D10u, 1); goto L_0C074D10; }  /* 0C074D0C bt/s */
L_0C074D10: BLKS(0x0C074D10u);
	r1 += 0x1u;  /* 0C074D10 add #imm,Rn */
	W16(r5, r1); UPD(0x0C074D14u, 2);  /* 0C074D12 mov.w Rm,@Rn */
L_0C074D14: BLKS(0x0C074D14u);
	r13 = 0xC3C4048u; UPD(0x0C074D16u, 1);  /* 0C074D14 mov.l @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C074D18u, 1);  /* 0C074D16 mov.l @(disp,Rm),Rn */
	r2 = R32(r13); UPD(0x0C074D1Au, 1);  /* 0C074D18 mov.l @Rm,Rn */
	r11 -= r2;  /* 0C074D1A sub Rm,Rn */
	r0 = (r11 >> 16) | (r11 << 16);  /* 0C074D1C swap.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C074D20u, 3);  /* 0C074D1E mov.l Rm,@(disp,Rn) */
	r2 = r7;  /* 0C074D20 mov Rm,Rn */
	r0 = 0xAu;  /* 0C074D22 mov #imm,Rn */
	IF(0x0C074D24u); r6 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074D26u, 3);  /* 0C074D24 mov.w @(r0,Rm),Rn */
	r2 += 0x2u;  /* 0C074D26 add #imm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C074D2Au, 2);  /* 0C074D28 mov.l Rm,@(disp,Rn) */
	r3 = 0xC29D72Eu; UPD(0x0C074D2Cu, 1);  /* 0C074D2A mov.l @(disp,pc),Rn */
	r12 = R32(r14 + 0x8u); UPD(0x0C074D2Eu, 1);  /* 0C074D2C mov.l @(disp,Rm),Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C074D30u, 1);  /* 0C074D2E mov.w @Rm,Rn */
	r5 = 0xC238018u; UPD(0x0C074D32u, 1);  /* 0C074D30 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C074D32 add Rm,Rn */
	W16(r5, r12); UPD(0x0C074D36u, 2);  /* 0C074D34 mov.w Rm,@Rn */
	r5 = 0xC207518u; UPD(0x0C074D38u, 1);  /* 0C074D36 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C074D3Au, 1);  /* 0C074D38 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C074D3Cu, 1);  /* 0C074D3A mov.w @Rm,Rn */
	W32(r14 + 0x8u, r12); UPD(0x0C074D3Eu, 1);  /* 0C074D3C mov.l Rm,@(disp,Rn) */
	IF(0x0C074D3Eu); r0 <<= 2;  /* 0C074D3E shll2 Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C074D42u, 2);  /* 0C074D40 mov.w @Rm,Rn */
	r12 = 0xFFFFFFF8u;  /* 0C074D42 mov #imm,Rn */
	r7 = 0xC29D93Cu; UPD(0x0C074D46u, 2);  /* 0C074D44 mov.l @(disp,pc),Rn */
	IF(0x0C074D46u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C074D46 shad Rm,Rn */
	r0 += r7;  /* 0C074D48 add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C074D4Cu, 3);  /* 0C074D4A mov.w @Rm,Rn */
	r9 = r13 & 0xFF;  /* 0C074D4C extu.b Rm,Rn */
	r10 = 0xC233718u; UPD(0x0C074D50u, 2);  /* 0C074D4E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C074D50 add Rm,Rn */
	W16(r10, r9); UPD(0x0C074D54u, 2);  /* 0C074D52 mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C074D54 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r6 = v_; } UPD(0x0C074D58u, 2);  /* 0C074D56 mov.w @Rm+,Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C074D5Au, 1);  /* 0C074D58 mov.w @Rm,Rn */
	r10 = r6 & 0xFF;  /* 0C074D5A extu.b Rm,Rn */
	r2 = 0xC2B1820u; UPD(0x0C074D5Eu, 2);  /* 0C074D5C mov.l @(disp,pc),Rn */
	r10 += r13;  /* 0C074D5E add Rm,Rn */
	W16(r2, r10); UPD(0x0C074D62u, 2);  /* 0C074D60 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C074D64u, 1);  /* 0C074D62 mov.w @Rm,Rn */
	r2 = 0xC228BF6u; UPD(0x0C074D66u, 1);  /* 0C074D64 mov.l @(disp,pc),Rn */
	IF(0x0C074D66u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C074D66 shad Rm,Rn */
	r7 = 0x80u; UPD(0x0C074D6Au, 2);  /* 0C074D68 mov.w @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C074D6Cu, 1);  /* 0C074D6A mov.l Rm,@Rn */
	r7 &= r0;  /* 0C074D6C and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C074D6E tst Rm,Rn */
	{ u32 c_ = T; W16(r2, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C074D7Cu, 5); goto L_0C074D7C; } UPD(0x0C074D74u, 1); goto L_0C074D74; }  /* 0C074D70 bt/s */
L_0C074D74: BLKS(0x0C074D74u);
	r7 = 0xFFFFFF00u; UPD(0x0C074D76u, 1);  /* 0C074D74 mov.w @(disp,pc),Rn */
	r6 = r0;  /* 0C074D76 mov Rm,Rn */
	r6 |= r7;  /* 0C074D78 or Rm,Rn */
	W16(r2, r6); UPD(0x0C074D7Cu, 3);  /* 0C074D7A mov.w Rm,@Rn */
L_0C074D7C: BLKS(0x0C074D7Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r11 = v_; } UPD(0x0C074D7Eu, 1);  /* 0C074D7C mov.w @Rm+,Rn */
	r6 = 0xC2B0398u; UPD(0x0C074D80u, 1);  /* 0C074D7E mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C074D80 extu.b Rm,Rn */
	r0 = 0x80u; UPD(0x0C074D84u, 2);  /* 0C074D82 mov.w @(disp,pc),Rn */
	W16(r6, r7); UPD(0x0C074D86u, 1);  /* 0C074D84 mov.w Rm,@Rn */
	r0 &= r7;  /* 0C074D86 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C074D88 tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C074D94u, 5); goto L_0C074D94; } UPD(0x0C074D8Eu, 1); goto L_0C074D8E; }  /* 0C074D8A bt/s */
L_0C074D8E: BLKS(0x0C074D8Eu);
	r13 = 0xFFFFFF00u; UPD(0x0C074D90u, 1);  /* 0C074D8E mov.w @(disp,pc),Rn */
	r7 |= r13;  /* 0C074D90 or Rm,Rn */
	W16(r6, r7); UPD(0x0C074D94u, 2);  /* 0C074D92 mov.w Rm,@Rn */
L_0C074D94: BLKS(0x0C074D94u);
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C074D96u, 1);  /* 0C074D94 mov.w @Rm,Rn */
	IF(0x0C074D96u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C074D96 shad Rm,Rn */
	r11 = 0xC28EDAEu; UPD(0x0C074D9Au, 2);  /* 0C074D98 mov.l @(disp,pc),Rn */
	r7 = r13 & 0xFF;  /* 0C074D9A extu.b Rm,Rn */
	W16(r11, r7); UPD(0x0C074D9Eu, 2);  /* 0C074D9C mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C074DA0u, 1);  /* 0C074D9E mov.w @Rm+,Rn */
	r13 = 0xC2B1A24u; UPD(0x0C074DA2u, 1);  /* 0C074DA0 mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C074DA2 extu.b Rm,Rn */
	W32(r5, r3); UPD(0x0C074DA6u, 2);  /* 0C074DA4 mov.l Rm,@Rn */
	W16(r13, r11); UPD(0x0C074DA8u, 1);  /* 0C074DA6 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C074DA8 exts.w Rm,Rn */
	r0 = r3;  /* 0C074DAA mov Rm,Rn */
	r13 = 0xC22E020u; UPD(0x0C074DAEu, 3);  /* 0C074DAC mov.l @(disp,pc),Rn */
	IF(0x0C074DAEu); r0 <<= 16;  /* 0C074DAE shll16 Rn */
	r5 = (u32)(s32)(s16)r10;  /* 0C074DB0 exts.w Rm,Rn */
	r0 |= r5;  /* 0C074DB2 or Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C074DB6u, 4);  /* 0C074DB4 mov.w @Rm,Rn */
	W32(r13, r0); UPD(0x0C074DB8u, 1);  /* 0C074DB6 mov.l Rm,@Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C074DBAu, 1);  /* 0C074DB8 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C074DBCu, 1);  /* 0C074DBA mov.w @Rm,Rn */
	IF(0x0C074DBCu); r1 <<= 16;  /* 0C074DBC shll16 Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C074DC0u, 2);  /* 0C074DBE mov.l Rm,@(disp,Rn) */
	r1 |= r0;  /* 0C074DC0 or Rm,Rn */
	r0 = r7;  /* 0C074DC2 mov Rm,Rn */
	IF(0x0C074DC4u); r0 <<= 16;  /* 0C074DC4 shll16 Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C074DC8u, 4);  /* 0C074DC6 mov.l Rm,@(disp,Rn) */
	r6 = 0xC3C4158u; UPD(0x0C074DCAu, 1);  /* 0C074DC8 mov.l @(disp,pc),Rn */
	r0 |= r11;  /* 0C074DCA or Rm,Rn */
	W32(r6, r0); UPD(0x0C074DCEu, 2);  /* 0C074DCC mov.l Rm,@Rn */
	r2 = 0xC2289E8u; UPD(0x0C074DD0u, 1);  /* 0C074DCE mov.l @(disp,pc),Rn */
	r0 = 0xC0000000u; UPD(0x0C074DD2u, 1);  /* 0C074DD0 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C074DD4u, 1);  /* 0C074DD2 mov.l @Rm,Rn */
	r13 = 0xC2B1814u; UPD(0x0C074DD6u, 1);  /* 0C074DD4 mov.l @(disp,pc),Rn */
	r6 &= r0;  /* 0C074DD6 and Rm,Rn */
	r0 = (r6 >> 16) | (r6 << 16);  /* 0C074DD8 swap.w Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C074DDA exts.w Rm,Rn */
	W32(r13, r1); UPD(0x0C074DDEu, 4);  /* 0C074DDC mov.l Rm,@Rn */
	r0 = r4;  /* 0C074DDE mov Rm,Rn */
	r0 ^= r6;  /* 0C074DE0 xor Rm,Rn */
	r1 = 0x200u; UPD(0x0C074DE4u, 3);  /* 0C074DE2 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFF9u;  /* 0C074DE4 mov #imm,Rn */
	r6 = 0x100u; UPD(0x0C074DE8u, 2);  /* 0C074DE6 mov.w @(disp,pc),Rn */
	r1 &= r0;  /* 0C074DE8 and Rm,Rn */
	r2 = 0xC207514u; UPD(0x0C074DECu, 2);  /* 0C074DEA mov.l @(disp,pc),Rn */
	IF(0x0C074DECu); ARG0(0x41CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C074DEC shad Rm,Rn */
	r6 &= r0;  /* 0C074DEE and Rm,Rn */
	W32(r14 + 0x20u, r6); UPD(0x0C074DF2u, 3);  /* 0C074DF0 mov.l Rm,@(disp,Rn) */
	r13 = r7;  /* 0C074DF2 mov Rm,Rn */
	W32(r2, r0); UPD(0x0C074DF6u, 2);  /* 0C074DF4 mov.l Rm,@Rn */
	r12 = 0xC28610Cu; UPD(0x0C074DF8u, 1);  /* 0C074DF6 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C074DFAu, 1);  /* 0C074DF8 mov.l @(disp,Rm),Rn */
	W16(r12, r1); UPD(0x0C074DFCu, 1);  /* 0C074DFA mov.w Rm,@Rn */
	IF(0x0C074DFCu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C074DFC shad Rm,Rn */
	r12 = 0xC234BF4u; UPD(0x0C074E00u, 2);  /* 0C074DFE mov.l @(disp,pc),Rn */
	r4 = 0xC000u; UPD(0x0C074E02u, 1);  /* 0C074E00 mov.l @(disp,pc),Rn */
	W16(r12, r2); UPD(0x0C074E04u, 1);  /* 0C074E02 mov.w Rm,@Rn */
	r4 &= r0;  /* 0C074E04 and Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C074E08u, 2);  /* 0C074E06 mov.l Rm,@(disp,Rn) */
	r12 = r4;  /* 0C074E08 mov Rm,Rn */
	r1 = 0xCu;  /* 0C074E0A mov #imm,Rn */
	IF(0x0C074E0Cu); ARG0(0x4C1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C074E0C shld Rm,Rn */
	r0 = 0x13010080u; UPD(0x0C074E10u, 4);  /* 0C074E0E mov.l @(disp,pc),Rn */
	r6 = 0xC232308u; UPD(0x0C074E12u, 1);  /* 0C074E10 mov.l @(disp,pc),Rn */
	r12 |= r0; UPD(0x0C074E14u, 1);  /* 0C074E12 or Rm,Rn */
	W32(r14 + 0x20u, r2); UPD(0x0C074E16u, 1);  /* 0C074E14 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C074E16 mov Rm,Rn */
	W32(r6, r12); UPD(0x0C074E1Au, 2);  /* 0C074E18 mov.l Rm,@Rn */
	r2 = r3;  /* 0C074E1A mov Rm,Rn */
	r6 = 0xFFE0u; UPD(0x0C074E1Eu, 2);  /* 0C074E1C mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C074E1E add Rm,Rn */
	r3 &= r6;  /* 0C074E20 and Rm,Rn */
	r2 &= r6;  /* 0C074E22 and Rm,Rn */
	T = r2 == r3;  /* 0C074E24 cmp/eq Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C074E26 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C074E28 negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C074E2A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C074E2C tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C074E2E negc Rm,Rn */
	T = (r1 & r9) == 0;  /* 0C074E30 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x18u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C074E3Au, 13); goto L_0C074E3A; } UPD(0x0C074E36u, 1); goto L_0C074E36; }  /* 0C074E32 bf/s */
L_0C074E36: BLKS(0x0C074E36u);
	{ r9 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075670u, 3); goto L_0C075670; }  /* 0C074E36 bra */
L_0C074E3A: BLKS(0x0C074E3Au);
	r13 = r5;  /* 0C074E3A mov Rm,Rn */
	r5 += r11;  /* 0C074E3C add Rm,Rn */
	r5 &= r6;  /* 0C074E3E and Rm,Rn */
	r13 &= r6;  /* 0C074E40 and Rm,Rn */
	T = r13 == r5;  /* 0C074E42 cmp/eq Rm,Rn */
	r6 = 0x1Fu;  /* 0C074E44 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C074E46 negc Rm,Rn */
	r6 &= r10;  /* 0C074E48 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C074E4A tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C074E4C negc Rm,Rn */
	T = (r9 & r5) == 0;  /* 0C074E4E tst Rm,Rn */
	if (!T) { UPD(0x0C074E58u, 14); goto L_0C074E58; }  /* 0C074E50 bf */
L_0C074E52: BLKS(0x0C074E52u);
	r11 = 0u - r0;  /* 0C074E52 neg Rm,Rn */
	{ r11 += 0x1Fu; /* slot add #imm,Rn */ UPD(0x0C0753C0u, 4); goto L_0C0753C0; }  /* 0C074E54 bra */
L_0C074E58: BLKS(0x0C074E58u);
	r5 = 0u - r0;  /* 0C074E58 neg Rm,Rn */
	r9 = 0xC2B03A0u; UPD(0x0C074E5Cu, 2);  /* 0C074E5A mov.l @(disp,pc),Rn */
	r0 = 0u - r6;  /* 0C074E5C neg Rm,Rn */
	r2 = 0xC28EDB0u; UPD(0x0C074E60u, 2);  /* 0C074E5E mov.l @(disp,pc),Rn */
	r5 += 0x1Fu;  /* 0C074E60 add #imm,Rn */
	r0 += 0x1Fu;  /* 0C074E62 add #imm,Rn */
	W16(r9, r5); UPD(0x0C074E66u, 3);  /* 0C074E64 mov.w Rm,@Rn */
	r7 -= r5;  /* 0C074E66 sub Rm,Rn */
	W16(r2, r0); UPD(0x0C074E6Au, 2);  /* 0C074E68 mov.w Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C074E6A add #imm,Rn */
	r10 = 0xC29D734u; UPD(0x0C074E6Eu, 2);  /* 0C074E6C mov.l @(disp,pc),Rn */
	r9 = r11;  /* 0C074E6E mov Rm,Rn */
	{ r2 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ UPD(0x0C074F20u, 4); goto L_0C074F20; }  /* 0C074E70 bra */
L_0C074F20: BLKS(0x0C074F20u);
	r9 -= r0;  /* 0C074F20 sub Rm,Rn */
	r3 = 0xC3C544Cu; UPD(0x0C074F24u, 2);  /* 0C074F22 mov.l @(disp,pc),Rn */
	r6 = r2;  /* 0C074F24 mov Rm,Rn */
	r11 = 0xC22E2A8u; UPD(0x0C074F28u, 2);  /* 0C074F26 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C074F28 mov Rm,Rn */
	r13 = 0xC2B1A44u; UPD(0x0C074F2Cu, 2);  /* 0C074F2A mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C074F2C add #imm,Rn */
	W16(r10, r7); UPD(0x0C074F30u, 2);  /* 0C074F2E mov.w Rm,@Rn */
	IF(0x0C074F30u); r6 <<= 16;  /* 0C074F30 shll16 Rn */
	IF(0x0C074F32u); r5 <<= 16;  /* 0C074F32 shll16 Rn */
	r1 = 0x4000u; UPD(0x0C074F36u, 3);  /* 0C074F34 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C074F36 mov Rm,Rn */
	W16(r3, r9); UPD(0x0C074F3Au, 2);  /* 0C074F38 mov.w Rm,@Rn */
	T = r4 == r1;  /* 0C074F3A cmp/eq Rm,Rn */
	W32(r11, r6); UPD(0x0C074F3Eu, 2);  /* 0C074F3C mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r13, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C074F46u, 3); goto L_0C074F46; } UPD(0x0C074F42u, 1); goto L_0C074F42; }  /* 0C074F3E bf/s */
L_0C074F42: BLKS(0x0C074F42u);
	{ r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0752D0u, 3); goto L_0C0752D0; }  /* 0C074F42 bra */
L_0C074F46: BLKS(0x0C074F46u);
	T = (s32)r4 > (s32)r1;  /* 0C074F46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C074F50u, 4); goto L_0C074F50; } goto L_0C074F4C; }  /* 0C074F48 bf/s */
L_0C074F4C: BLKS(0x0C074F4Cu);
	{ IF(0x0C074F4Eu); ; /* slot nop */ UPD(0x0C0750D0u, 4); goto L_0C0750D0; }  /* 0C074F4C bra */
L_0C074F50: BLKS(0x0C074F50u);
	{ u32 c_ = T; r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C074F90u, 3); goto L_0C074F90; } UPD(0x0C074F54u, 1); goto L_0C074F54; }  /* 0C074F50 bt/s */
L_0C074F54: BLKS(0x0C074F54u);
	r10 = 0xC207520u; UPD(0x0C074F56u, 1);  /* 0C074F54 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C074F58u, 1);  /* 0C074F56 mov.b @Rm,Rn */
	r13 = 0xC207518u; UPD(0x0C074F5Au, 1);  /* 0C074F58 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C074F5A add #imm,Rn */
	W8(r10, r7); UPD(0x0C074F5Eu, 2);  /* 0C074F5C mov.b Rm,@Rn */
	r2 = R32(r13); UPD(0x0C074F60u, 1);  /* 0C074F5E mov.l @Rm,Rn */
	r7 = 0xC207514u; UPD(0x0C074F62u, 1);  /* 0C074F60 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C074F64u, 1);  /* 0C074F62 mov.w @Rm+,Rn */
	W32(r7, r4); UPD(0x0C074F66u, 1);  /* 0C074F64 mov.l Rm,@Rn */
	T = (r4 & r4) == 0;  /* 0C074F66 tst Rm,Rn */
	{ u32 c_ = T; W32(r13, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C074F70u, 4); goto L_0C074F70; } UPD(0x0C074F6Cu, 1); goto L_0C074F6C; }  /* 0C074F68 bt/s */
L_0C074F6C: BLKS(0x0C074F6Cu);
	{ r4 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C074CDEu, 3); goto L_0C074CDE; }  /* 0C074F6C bra */
L_0C074F70: BLKS(0x0C074F70u);
	r5 = 0xF0000000u; UPD(0x0C074F72u, 1);  /* 0C074F70 mov.l @(disp,pc),Rn */
	r6 = 0xC3C415Cu; UPD(0x0C074F74u, 1);  /* 0C074F72 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C074F76u, 1);  /* 0C074F74 mov.l Rm,@Rn */
	W32(r6, r8); UPD(0x0C074F78u, 1);  /* 0C074F76 mov.l Rm,@Rn */
	r14 += 0x24u;  /* 0C074F78 add #imm,Rn */
	UPD(0x0C074F7Au, 1);
L_0C074F7A: BLKS(0x0C074F7Au);
	r15 = r14;  /* 0C074F7A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C074F7Eu, 2);  /* 0C074F7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C074F80u, 1);  /* 0C074F7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C074F82u, 1);  /* 0C074F80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074F84u, 1);  /* 0C074F82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074F86u, 1);  /* 0C074F84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074F88u, 1);  /* 0C074F86 mov.l @Rm+,Rn */
	IF(0x0C074F88u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074F88 rts */
L_0C074F90: BLKS(0x0C074F90u);
	r5 = 0xC2A6940u; UPD(0x0C074F92u, 1);  /* 0C074F90 mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C074F92 mov #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C074F96u, 2);  /* 0C074F94 mov.w @Rm,Rn */
	r3 = 0xC3C4010u; UPD(0x0C074F98u, 1);  /* 0C074F96 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C074F98 add Rm,Rn */
	IF(0x0C074F9Au); r1 <<= 16;  /* 0C074F9A shll16 Rn */
	W32(r3, r1); UPD(0x0C074F9Eu, 3);  /* 0C074F9C mov.l Rm,@Rn */
	IF(0x0C074F9Eu); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C074FA0u, 1);  /* 0C074F9E mov.w @(r0,Rm),Rn */
	r1 += r6;  /* 0C074FA0 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C074FA4u, 2);  /* 0C074FA2 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C074FA6u, 1);  /* 0C074FA4 mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C074FA6 add Rm,Rn */
	r7 = 0xC3B1AFCu; UPD(0x0C074FAAu, 2);  /* 0C074FA8 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C074FAA add Rm,Rn */
	r3 = 0xC2B07B4u; UPD(0x0C074FAEu, 2);  /* 0C074FAC mov.l @(disp,pc),Rn */
	W32(r7, r1); UPD(0x0C074FB0u, 1);  /* 0C074FAE mov.l Rm,@Rn */
	W32(r3, r2); UPD(0x0C074FB2u, 1);  /* 0C074FB0 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C074FB2 exts.w Rm,Rn */
	r1 = 0xC2A6D8Cu; UPD(0x0C074FB6u, 2);  /* 0C074FB4 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C074FB6 add Rm,Rn */
	r2 += 0x1u;  /* 0C074FB8 add #imm,Rn */
	W32(r1, r2); UPD(0x0C074FBCu, 3);  /* 0C074FBA mov.l Rm,@Rn */
	r10 = 0xC22E020u; UPD(0x0C074FBEu, 1);  /* 0C074FBC mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C074FC0u, 1);  /* 0C074FBE mov.l Rm,@Rn */
	r4 = R32(r10); UPD(0x0C074FC2u, 1);  /* 0C074FC0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074FC2 add #imm,Rn */
	W32(r8, r4); UPD(0x0C074FC6u, 2);  /* 0C074FC4 mov.l Rm,@Rn */
	r5 = 0xC3C4010u; UPD(0x0C074FC8u, 1);  /* 0C074FC6 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074FC8 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C074FCCu, 2);  /* 0C074FCA mov.l @Rm,Rn */
	r0 = R32(r5); UPD(0x0C074FCEu, 1);  /* 0C074FCC mov.l @Rm,Rn */
	r0 |= r1;  /* 0C074FCE or Rm,Rn */
	W32(r8, r0); UPD(0x0C074FD2u, 2);  /* 0C074FD0 mov.l Rm,@Rn */
	r12 = R32(r11); UPD(0x0C074FD4u, 1);  /* 0C074FD2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074FD4 add #imm,Rn */
	r12 |= r7;  /* 0C074FD6 or Rm,Rn */
	W32(r8, r12); UPD(0x0C074FDAu, 3);  /* 0C074FD8 mov.l Rm,@Rn */
	r12 = 0xC207510u; UPD(0x0C074FDCu, 1);  /* 0C074FDA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074FDC add #imm,Rn */
	r10 = R32(r12); UPD(0x0C074FE0u, 2);  /* 0C074FDE mov.l @Rm,Rn */
	W32(r8, r10); UPD(0x0C074FE2u, 1);  /* 0C074FE0 mov.l Rm,@Rn */
	r10 = 0xC232308u; UPD(0x0C074FE4u, 1);  /* 0C074FE2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074FE4 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C074FE8u, 2);  /* 0C074FE6 mov.l @Rm,Rn */
	r5 = 0xC22E020u; UPD(0x0C074FEAu, 1);  /* 0C074FE8 mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C074FECu, 1);  /* 0C074FEA mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C074FEEu, 1);  /* 0C074FEC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C074FEE add #imm,Rn */
	r0 = R32(r5); UPD(0x0C074FF2u, 2);  /* 0C074FF0 mov.l @Rm,Rn */
	r0 += r4;  /* 0C074FF2 add Rm,Rn */
	r0 += r6;  /* 0C074FF4 add Rm,Rn */
	W32(r8, r0); UPD(0x0C074FF8u, 3);  /* 0C074FF6 mov.l Rm,@Rn */
	r2 = 0xC3B1AFCu; UPD(0x0C074FFAu, 1);  /* 0C074FF8 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C074FFA add #imm,Rn */
	r1 = R32(r3); UPD(0x0C074FFEu, 2);  /* 0C074FFC mov.l @Rm,Rn */
	r5 = R32(r2); UPD(0x0C075000u, 1);  /* 0C074FFE mov.l @Rm,Rn */
	r5 |= r1;  /* 0C075000 or Rm,Rn */
	W32(r8, r5); UPD(0x0C075004u, 2);  /* 0C075002 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C075006u, 1);  /* 0C075004 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075006 add #imm,Rn */
	r4 |= r7;  /* 0C075008 or Rm,Rn */
	W32(r8, r4); UPD(0x0C07500Cu, 3);  /* 0C07500A mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C07500Eu, 1);  /* 0C07500C mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C075010u, 1);  /* 0C07500E add #imm,Rn */
	W32(r8, r0); UPD(0x0C075012u, 1);  /* 0C075010 mov.l Rm,@Rn */
	r6 = R32(r10); UPD(0x0C075014u, 1);  /* 0C075012 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075014 add #imm,Rn */
	W32(r8, r6); UPD(0x0C075018u, 2);  /* 0C075016 mov.l Rm,@Rn */
	r0 = 0xC22E020u; UPD(0x0C07501Au, 1);  /* 0C075018 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07501A add #imm,Rn */
	r2 = R32(r0); UPD(0x0C07501Eu, 2);  /* 0C07501C mov.l @Rm,Rn */
	r2 += r7;  /* 0C07501E add Rm,Rn */
	r2 += 0x1u;  /* 0C075020 add #imm,Rn */
	W32(r8, r2); UPD(0x0C075024u, 3);  /* 0C075022 mov.l Rm,@Rn */
	r3 = 0xC3C4010u; UPD(0x0C075026u, 1);  /* 0C075024 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075026 add #imm,Rn */
	r12 = R32(r3); UPD(0x0C07502Au, 2);  /* 0C075028 mov.l @Rm,Rn */
	r3 = 0xC2A6D8Cu; UPD(0x0C07502Cu, 1);  /* 0C07502A mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C07502Eu, 1);  /* 0C07502C mov.l @Rm,Rn */
	r12 |= r5;  /* 0C07502E or Rm,Rn */
	W32(r8, r12); UPD(0x0C075032u, 2);  /* 0C075030 mov.l Rm,@Rn */
	r10 = R32(r11); UPD(0x0C075034u, 1);  /* 0C075032 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C075034 exts.w Rm,Rn */
	r8 += 0x4u;  /* 0C075036 add #imm,Rn */
	r10 |= r12;  /* 0C075038 or Rm,Rn */
	W32(r8, r10); UPD(0x0C07503Cu, 4);  /* 0C07503A mov.l Rm,@Rn */
	r1 = 0xC207510u; UPD(0x0C07503Eu, 1);  /* 0C07503C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07503E add #imm,Rn */
	r4 = R32(r1); UPD(0x0C075042u, 2);  /* 0C075040 mov.l @Rm,Rn */
	r6 = 0xC232308u; UPD(0x0C075044u, 1);  /* 0C075042 mov.l @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C075046u, 1);  /* 0C075044 mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C075048u, 1);  /* 0C075046 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075048 add #imm,Rn */
	W32(r8, r2); UPD(0x0C07504Cu, 2);  /* 0C07504A mov.l Rm,@Rn */
	r10 = R32(r0); UPD(0x0C07504Eu, 1);  /* 0C07504C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07504E add #imm,Rn */
	r9 = R32(r11); UPD(0x0C075052u, 2);  /* 0C075050 mov.l @Rm,Rn */
	r5 = 0x10001u; UPD(0x0C075054u, 1);  /* 0C075052 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C075054 add Rm,Rn */
	r10 += r7;  /* 0C075056 add Rm,Rn */
	r10 += r5;  /* 0C075058 add Rm,Rn */
	W32(r8, r10); UPD(0x0C07505Cu, 4);  /* 0C07505A mov.l Rm,@Rn */
	r0 = 0xC3B1AFCu; UPD(0x0C07505Eu, 1);  /* 0C07505C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07505E add #imm,Rn */
	r11 = R32(r0); UPD(0x0C075062u, 2);  /* 0C075060 mov.l @Rm,Rn */
	r1 = R32(r3); UPD(0x0C075064u, 1);  /* 0C075062 mov.l @Rm,Rn */
	r11 |= r1;  /* 0C075064 or Rm,Rn */
	W32(r8, r11); UPD(0x0C075068u, 2);  /* 0C075066 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C07506Au, 1);  /* 0C075068 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07506A add #imm,Rn */
	r4 |= r12;  /* 0C07506C or Rm,Rn */
	W32(r8, r4); UPD(0x0C075070u, 3);  /* 0C07506E mov.l Rm,@Rn */
	r6 = 0xC207510u; UPD(0x0C075072u, 1);  /* 0C075070 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075072 add #imm,Rn */
	UPD(0x0C075074u, 1);
L_0C075074: BLKS(0x0C075074u);
	r1 = R32(r6); UPD(0x0C075076u, 1);  /* 0C075074 mov.l @Rm,Rn */
L_0C075076: BLKS(0x0C075076u);
	W32(r8, r1); UPD(0x0C075078u, 1);  /* 0C075076 mov.l Rm,@Rn */
	r8 += 0x4u;  /* 0C075078 add #imm,Rn */
	UPD(0x0C07507Au, 1);
L_0C07507A: BLKS(0x0C07507Au);
	{ IF(0x0C07507Cu); ; /* slot nop */ UPD(0x0C074F54u, 3); goto L_0C074F54; }  /* 0C07507A bra */
L_0C0750D0: BLKS(0x0C0750D0u);
	r7 = 0x8000u; UPD(0x0C0750D2u, 1);  /* 0C0750D0 mov.l @(disp,pc),Rn */
	T = r4 == r7;  /* 0C0750D2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0750DCu, 4); goto L_0C0750DC; }  /* 0C0750D4 bf */
L_0C0750D6: BLKS(0x0C0750D6u);
	r4 = R32(r14 + 0xCu); UPD(0x0C0750D8u, 1);  /* 0C0750D6 mov.l @(disp,Rm),Rn */
	{ r4 += r2; /* slot add Rm,Rn */ UPD(0x0C0751E0u, 3); goto L_0C0751E0; }  /* 0C0750D8 bra */
L_0C0750DC: BLKS(0x0C0750DCu);
	r6 = 0xC000u; UPD(0x0C0750DEu, 1);  /* 0C0750DC mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C0750DE cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07507Au, 4); goto L_0C07507A; }  /* 0C0750E0 bf */
L_0C0750E2: BLKS(0x0C0750E2u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0750E4u, 1);  /* 0C0750E2 mov.l @(disp,Rm),Rn */
	r0 = 0xC2A6940u; UPD(0x0C0750E6u, 1);  /* 0C0750E4 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0750E8u, 1);  /* 0C0750E6 mov.w @Rm,Rn */
	r0 = 0x1Eu;  /* 0C0750E8 mov #imm,Rn */
	IF(0x0C0750EAu); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0750ECu, 2);  /* 0C0750EA mov.w @(r0,Rm),Rn */
	r1 += r2;  /* 0C0750EC add Rm,Rn */
	r3 -= r1;  /* 0C0750EE sub Rm,Rn */
	r3 -= r7;  /* 0C0750F0 sub Rm,Rn */
	r6 = 0xC3B1AFCu; UPD(0x0C0750F4u, 4);  /* 0C0750F2 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0750F4 add #imm,Rn */
	IF(0x0C0750F6u); r3 <<= 16;  /* 0C0750F6 shll16 Rn */
	W32(r6, r3); UPD(0x0C0750FAu, 3);  /* 0C0750F8 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0750FA mov #imm,Rn */
	r6 = (u32)(s32)(s16)r10;  /* 0C0750FC exts.w Rm,Rn */
	IF(0x0C0750FEu); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075100u, 3);  /* 0C0750FE mov.w @(r0,Rm),Rn */
	r3 -= r5;  /* 0C075100 sub Rm,Rn */
	r10 = R32(r14 + 0x10u); UPD(0x0C075104u, 2);  /* 0C075102 mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C075104 mov #imm,Rn */
	IF(0x0C075106u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075108u, 2);  /* 0C075106 mov.w @(r0,Rm),Rn */
	r10 += r6;  /* 0C075108 add Rm,Rn */
	r2 -= r10;  /* 0C07510A sub Rm,Rn */
	r7 = 0xC2A6D8Cu; UPD(0x0C07510Eu, 3);  /* 0C07510C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C07510E sub Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C075110 add #imm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C075114u, 3);  /* 0C075112 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r9;  /* 0C075114 exts.w Rm,Rn */
	W32(r7, r2); UPD(0x0C075118u, 2);  /* 0C075116 mov.l Rm,@Rn */
	r3 += r5;  /* 0C075118 add Rm,Rn */
	r4 = 0xC239460u; UPD(0x0C07511Cu, 2);  /* 0C07511A mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C07511C sub Rm,Rn */
	r5 = 0xC3C5434u; UPD(0x0C075120u, 2);  /* 0C07511E mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C075120 add #imm,Rn */
	W32(r4, r3); UPD(0x0C075124u, 2);  /* 0C075122 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C075126u, 1);  /* 0C075124 mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C075128u, 1);  /* 0C075126 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C07512Au, 1);  /* 0C075128 mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C07512Cu, 1);  /* 0C07512A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07512C add #imm,Rn */
	W32(r8, r2); UPD(0x0C075130u, 2);  /* 0C07512E mov.l Rm,@Rn */
	r0 = 0xC3B1AFCu; UPD(0x0C075132u, 1);  /* 0C075130 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075132 add #imm,Rn */
	r1 = R32(r7); UPD(0x0C075136u, 2);  /* 0C075134 mov.l @Rm,Rn */
	r12 = R32(r0); UPD(0x0C075138u, 1);  /* 0C075136 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C075138 or Rm,Rn */
	W32(r8, r12); UPD(0x0C07513Cu, 2);  /* 0C07513A mov.l Rm,@Rn */
	r3 = R32(r11); UPD(0x0C07513Eu, 1);  /* 0C07513C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07513E add #imm,Rn */
	r3 |= r6;  /* 0C075140 or Rm,Rn */
	W32(r8, r3); UPD(0x0C075144u, 3);  /* 0C075142 mov.l Rm,@Rn */
	r3 = 0xC207510u; UPD(0x0C075146u, 1);  /* 0C075144 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075146 add #imm,Rn */
	r0 = R32(r3); UPD(0x0C07514Au, 2);  /* 0C075148 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C07514Cu, 1);  /* 0C07514A mov.l Rm,@Rn */
	r0 = 0xC232308u; UPD(0x0C07514Eu, 1);  /* 0C07514C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07514E add #imm,Rn */
	r12 = R32(r0); UPD(0x0C075152u, 2);  /* 0C075150 mov.l @Rm,Rn */
	r2 = 0xC22E020u; UPD(0x0C075154u, 1);  /* 0C075152 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C075156u, 1);  /* 0C075154 mov.l Rm,@Rn */
	r12 = R32(r2); UPD(0x0C075158u, 1);  /* 0C075156 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075158 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C07515Cu, 2);  /* 0C07515A mov.l @Rm,Rn */
	r12 += r2;  /* 0C07515C add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C075160u, 2);  /* 0C07515E mov.l @(disp,pc),Rn */
	r12 += r2;  /* 0C075160 add Rm,Rn */
	W32(r8, r12); UPD(0x0C075164u, 2);  /* 0C075162 mov.l Rm,@Rn */
	r1 = R32(r7); UPD(0x0C075166u, 1);  /* 0C075164 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075166 add #imm,Rn */
	r12 = R32(r4); UPD(0x0C07516Au, 2);  /* 0C075168 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C07516A or Rm,Rn */
	W32(r8, r12); UPD(0x0C07516Eu, 2);  /* 0C07516C mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C075170u, 1);  /* 0C07516E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075170 add #imm,Rn */
	r12 |= r6;  /* 0C075172 or Rm,Rn */
	W32(r8, r12); UPD(0x0C075176u, 3);  /* 0C075174 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C075178u, 1);  /* 0C075176 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075178 add #imm,Rn */
	W32(r8, r7); UPD(0x0C07517Cu, 2);  /* 0C07517A mov.l Rm,@Rn */
	r2 = R32(r0); UPD(0x0C07517Eu, 1);  /* 0C07517C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07517E add #imm,Rn */
	W32(r8, r2); UPD(0x0C075182u, 2);  /* 0C075180 mov.l Rm,@Rn */
	r12 = 0xC22E020u; UPD(0x0C075184u, 1);  /* 0C075182 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075184 add #imm,Rn */
	r7 = R32(r12); UPD(0x0C075188u, 2);  /* 0C075186 mov.l @Rm,Rn */
	r7 += r6;  /* 0C075188 add Rm,Rn */
	r7 += 0x1u;  /* 0C07518A add #imm,Rn */
	W32(r8, r7); UPD(0x0C07518Eu, 3);  /* 0C07518C mov.l Rm,@Rn */
	r2 = 0xC3B1AFCu; UPD(0x0C075190u, 1);  /* 0C07518E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075190 add #imm,Rn */
	r12 = R32(r2); UPD(0x0C075194u, 2);  /* 0C075192 mov.l @Rm,Rn */
	r1 = R32(r5); UPD(0x0C075196u, 1);  /* 0C075194 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C075196 or Rm,Rn */
	W32(r8, r12); UPD(0x0C07519Au, 2);  /* 0C075198 mov.l Rm,@Rn */
	r2 = R32(r11); UPD(0x0C07519Cu, 1);  /* 0C07519A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07519C add #imm,Rn */
	r2 |= r10;  /* 0C07519E or Rm,Rn */
	W32(r8, r2); UPD(0x0C0751A2u, 3);  /* 0C0751A0 mov.l Rm,@Rn */
	r7 = R32(r3); UPD(0x0C0751A4u, 1);  /* 0C0751A2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0751A4 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0751A8u, 2);  /* 0C0751A6 mov.l Rm,@Rn */
	r12 = R32(r0); UPD(0x0C0751AAu, 1);  /* 0C0751A8 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0751AA add #imm,Rn */
	W32(r8, r12); UPD(0x0C0751AEu, 2);  /* 0C0751AC mov.l Rm,@Rn */
	r2 = 0xC22E020u; UPD(0x0C0751B0u, 1);  /* 0C0751AE mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0751B0 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0751B4u, 2);  /* 0C0751B2 mov.l @Rm,Rn */
	r7 = R32(r2); UPD(0x0C0751B6u, 1);  /* 0C0751B4 mov.l @Rm,Rn */
	r7 += r0;  /* 0C0751B6 add Rm,Rn */
	r7 += r6;  /* 0C0751B8 add Rm,Rn */
	r6 = 0x10001u; UPD(0x0C0751BCu, 3);  /* 0C0751BA mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C0751BC add Rm,Rn */
	W32(r8, r7); UPD(0x0C0751C0u, 2);  /* 0C0751BE mov.l Rm,@Rn */
	r11 = R32(r4); UPD(0x0C0751C2u, 1);  /* 0C0751C0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0751C2 add #imm,Rn */
	r12 = R32(r5); UPD(0x0C0751C6u, 2);  /* 0C0751C4 mov.l @Rm,Rn */
	r11 |= r12;  /* 0C0751C6 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0751CAu, 2);  /* 0C0751C8 mov.l Rm,@Rn */
	r1 = R32(r13); UPD(0x0C0751CCu, 1);  /* 0C0751CA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0751CC add #imm,Rn */
	r1 |= r10;  /* 0C0751CE or Rm,Rn */
	UPD(0x0C0751D0u, 2);
L_0C0751D0: BLKS(0x0C0751D0u);
	W32(r8, r1); UPD(0x0C0751D2u, 1);  /* 0C0751D0 mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C0751D4u, 1);  /* 0C0751D2 mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C075076u, 3); goto L_0C075076; }  /* 0C0751D4 bra */
L_0C0751E0: BLKS(0x0C0751E0u);
	r0 = 0xC2A6940u; UPD(0x0C0751E2u, 1);  /* 0C0751E0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0751E4u, 1);  /* 0C0751E2 mov.w @Rm,Rn */
	r0 = 0x1Eu;  /* 0C0751E4 mov #imm,Rn */
	IF(0x0C0751E6u); r6 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0751E8u, 2);  /* 0C0751E6 mov.w @(r0,Rm),Rn */
	r3 -= r4;  /* 0C0751E8 sub Rm,Rn */
	r3 -= r6;  /* 0C0751EA sub Rm,Rn */
	r6 = 0xC3B1AFCu; UPD(0x0C0751EEu, 3);  /* 0C0751EC mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0751EE add #imm,Rn */
	IF(0x0C0751F0u); r3 <<= 16;  /* 0C0751F0 shll16 Rn */
	W32(r6, r3); UPD(0x0C0751F4u, 3);  /* 0C0751F2 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0751F4 mov #imm,Rn */
	r1 = 0xFFFF0000u; UPD(0x0C0751F8u, 2);  /* 0C0751F6 mov.l @(disp,pc),Rn */
	r3 -= r5;  /* 0C0751F8 sub Rm,Rn */
	r7 = 0xC239460u; UPD(0x0C0751FCu, 2);  /* 0C0751FA mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0751FC add Rm,Rn */
	IF(0x0C0751FEu); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075200u, 2);  /* 0C0751FE mov.w @(r0,Rm),Rn */
	W32(r7, r3); UPD(0x0C075202u, 1);  /* 0C075200 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C075204u, 1);  /* 0C075202 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C075204 exts.w Rm,Rn */
	r3 = 0xC2B07B4u; UPD(0x0C075208u, 2);  /* 0C075206 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C075208 add Rm,Rn */
	W32(r3, r5); UPD(0x0C07520Cu, 2);  /* 0C07520A mov.l Rm,@Rn */
	r2 = 0xC2A6D8Cu; UPD(0x0C07520Eu, 1);  /* 0C07520C mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C07520E add Rm,Rn */
	r5 += 0x1u;  /* 0C075210 add #imm,Rn */
	W32(r2, r5); UPD(0x0C075214u, 3);  /* 0C075212 mov.l Rm,@Rn */
	r4 = 0xC22E020u; UPD(0x0C075216u, 1);  /* 0C075214 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C075218u, 1);  /* 0C075216 mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C07521Au, 1);  /* 0C075218 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07521A add #imm,Rn */
	W32(r8, r10); UPD(0x0C07521Eu, 2);  /* 0C07521C mov.l Rm,@Rn */
	r1 = R32(r3); UPD(0x0C075220u, 1);  /* 0C07521E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075220 add #imm,Rn */
	r12 = R32(r6); UPD(0x0C075224u, 2);  /* 0C075222 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C075224 or Rm,Rn */
	W32(r8, r12); UPD(0x0C075228u, 2);  /* 0C075226 mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C07522Au, 1);  /* 0C075228 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07522A add #imm,Rn */
	r5 |= r7;  /* 0C07522C or Rm,Rn */
	W32(r8, r5); UPD(0x0C075230u, 3);  /* 0C07522E mov.l Rm,@Rn */
	r5 = 0xC207510u; UPD(0x0C075232u, 1);  /* 0C075230 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075232 add #imm,Rn */
	r6 = R32(r5); UPD(0x0C075236u, 2);  /* 0C075234 mov.l @Rm,Rn */
	W32(r8, r6); UPD(0x0C075238u, 1);  /* 0C075236 mov.l Rm,@Rn */
	r6 = 0xC232308u; UPD(0x0C07523Au, 1);  /* 0C075238 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07523A add #imm,Rn */
	r0 = R32(r6); UPD(0x0C07523Eu, 2);  /* 0C07523C mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C075240u, 1);  /* 0C07523E mov.l Rm,@Rn */
	r0 = 0xC22E020u; UPD(0x0C075242u, 1);  /* 0C075240 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075242 add #imm,Rn */
	r4 = R32(r11); UPD(0x0C075246u, 2);  /* 0C075244 mov.l @Rm,Rn */
	r10 = R32(r0); UPD(0x0C075248u, 1);  /* 0C075246 mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C07524Au, 1);  /* 0C075248 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C07524A add Rm,Rn */
	r10 += r2;  /* 0C07524C add Rm,Rn */
	W32(r8, r10); UPD(0x0C075250u, 3);  /* 0C07524E mov.l Rm,@Rn */
	r10 = 0xC239460u; UPD(0x0C075252u, 1);  /* 0C075250 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075252 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C075256u, 2);  /* 0C075254 mov.l @Rm,Rn */
	r12 = R32(r10); UPD(0x0C075258u, 1);  /* 0C075256 mov.l @Rm,Rn */
	r12 |= r1;  /* 0C075258 or Rm,Rn */
	W32(r8, r12); UPD(0x0C07525Cu, 2);  /* 0C07525A mov.l Rm,@Rn */
	r3 = R32(r13); UPD(0x0C07525Eu, 1);  /* 0C07525C mov.l @Rm,Rn */
	r8 += 0x4u; UPD(0x0C075260u, 1);  /* 0C07525E add #imm,Rn */
	r3 |= r7;  /* 0C075260 or Rm,Rn */
	W32(r8, r3); UPD(0x0C075264u, 2);  /* 0C075262 mov.l Rm,@Rn */
	r4 = R32(r5); UPD(0x0C075266u, 1);  /* 0C075264 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075266 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07526Au, 2);  /* 0C075268 mov.l Rm,@Rn */
	r12 = R32(r6); UPD(0x0C07526Cu, 1);  /* 0C07526A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07526C add #imm,Rn */
	W32(r8, r12); UPD(0x0C075270u, 2);  /* 0C07526E mov.l Rm,@Rn */
	r2 = R32(r0); UPD(0x0C075272u, 1);  /* 0C075270 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075272 add #imm,Rn */
	r2 += r7;  /* 0C075274 add Rm,Rn */
	r2 += 0x1u;  /* 0C075276 add #imm,Rn */
	W32(r8, r2); UPD(0x0C07527Au, 4);  /* 0C075278 mov.l Rm,@Rn */
	r3 = 0xC3B1AFCu; UPD(0x0C07527Cu, 1);  /* 0C07527A mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07527C add #imm,Rn */
	r1 = 0xC2A6D8Cu; UPD(0x0C075280u, 2);  /* 0C07527E mov.l @(disp,pc),Rn */
	r12 = R32(r3); UPD(0x0C075282u, 1);  /* 0C075280 mov.l @Rm,Rn */
	r4 = R32(r1); UPD(0x0C075284u, 1);  /* 0C075282 mov.l @Rm,Rn */
	r12 |= r4;  /* 0C075284 or Rm,Rn */
	W32(r8, r12); UPD(0x0C075288u, 2);  /* 0C075286 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C075288 exts.w Rm,Rn */
	r9 = R32(r11); UPD(0x0C07528Cu, 2);  /* 0C07528A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07528C add #imm,Rn */
	r9 |= r12;  /* 0C07528E or Rm,Rn */
	W32(r8, r9); UPD(0x0C075292u, 3);  /* 0C075290 mov.l Rm,@Rn */
	r2 = R32(r5); UPD(0x0C075294u, 1);  /* 0C075292 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075294 add #imm,Rn */
	W32(r8, r2); UPD(0x0C075298u, 2);  /* 0C075296 mov.l Rm,@Rn */
	r3 = R32(r6); UPD(0x0C07529Au, 1);  /* 0C075298 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07529A add #imm,Rn */
	W32(r8, r3); UPD(0x0C07529Eu, 2);  /* 0C07529C mov.l Rm,@Rn */
	r4 = R32(r0); UPD(0x0C0752A0u, 1);  /* 0C07529E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0752A0 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0752A4u, 2);  /* 0C0752A2 mov.l @Rm,Rn */
	r1 = 0x10001u; UPD(0x0C0752A6u, 1);  /* 0C0752A4 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C0752A6 add Rm,Rn */
	r4 += r7;  /* 0C0752A8 add Rm,Rn */
	r4 += r1;  /* 0C0752AA add Rm,Rn */
	W32(r8, r4); UPD(0x0C0752AEu, 4);  /* 0C0752AC mov.l Rm,@Rn */
	r9 = R32(r10); UPD(0x0C0752B0u, 1);  /* 0C0752AE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0752B0 add #imm,Rn */
	r10 = 0xC2A6D8Cu; UPD(0x0C0752B4u, 2);  /* 0C0752B2 mov.l @(disp,pc),Rn */
	r6 = R32(r10); UPD(0x0C0752B6u, 1);  /* 0C0752B4 mov.l @Rm,Rn */
	r9 |= r6;  /* 0C0752B6 or Rm,Rn */
	W32(r8, r9); UPD(0x0C0752BAu, 2);  /* 0C0752B8 mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C0752BCu, 1);  /* 0C0752BA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0752BC add #imm,Rn */
	r11 |= r12;  /* 0C0752BE or Rm,Rn */
	W32(r8, r11); UPD(0x0C0752C2u, 3);  /* 0C0752C0 mov.l Rm,@Rn */
	r5 = 0xC207510u; UPD(0x0C0752C4u, 1);  /* 0C0752C2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0752C4 add #imm,Rn */
	UPD(0x0C0752C6u, 1);
L_0C0752C6: BLKS(0x0C0752C6u);
	{ r1 = R32(r5); /* slot mov.l @Rm,Rn */ UPD(0x0C075076u, 3); goto L_0C075076; }  /* 0C0752C6 bra */
L_0C0752D0: BLKS(0x0C0752D0u);
	r1 = 0xC2A6940u; UPD(0x0C0752D2u, 1);  /* 0C0752D0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C0752D4u, 1);  /* 0C0752D2 mov.w @Rm,Rn */
	r0 = 0xC3C4010u; UPD(0x0C0752D6u, 1);  /* 0C0752D4 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C0752D6 add Rm,Rn */
	IF(0x0C0752D8u); r5 <<= 16;  /* 0C0752D8 shll16 Rn */
	W32(r0, r5); UPD(0x0C0752DCu, 3);  /* 0C0752DA mov.l Rm,@Rn */
	r5 += r6;  /* 0C0752DC add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C0752E0u, 2);  /* 0C0752DE mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C0752E0 mov #imm,Rn */
	r7 = 0xC3B1AFCu; UPD(0x0C0752E4u, 2);  /* 0C0752E2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0752E4 add Rm,Rn */
	W32(r7, r5); UPD(0x0C0752E8u, 2);  /* 0C0752E6 mov.l Rm,@Rn */
	IF(0x0C0752E8u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0752EAu, 1);  /* 0C0752E8 mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C0752EA exts.w Rm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C0752EEu, 2);  /* 0C0752EC mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C0752EE mov #imm,Rn */
	IF(0x0C0752F0u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0752F2u, 2);  /* 0C0752F0 mov.w @(r0,Rm),Rn */
	r4 += r7;  /* 0C0752F2 add Rm,Rn */
	r3 -= r4;  /* 0C0752F4 sub Rm,Rn */
	r5 = 0xC2A6D8Cu; UPD(0x0C0752F8u, 3);  /* 0C0752F6 mov.l @(disp,pc),Rn */
	r3 -= r10;  /* 0C0752F8 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0752FA add #imm,Rn */
	W32(r5, r3); UPD(0x0C0752FEu, 3);  /* 0C0752FC mov.l Rm,@Rn */
	r10 = (u32)(s32)(s16)r9;  /* 0C0752FE exts.w Rm,Rn */
	r4 = 0xC3C5434u; UPD(0x0C075302u, 2);  /* 0C075300 mov.l @(disp,pc),Rn */
	r3 -= r10;  /* 0C075302 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C075304 add #imm,Rn */
	W32(r4, r3); UPD(0x0C075308u, 3);  /* 0C075306 mov.l Rm,@Rn */
	r1 = 0xC22E020u; UPD(0x0C07530Au, 1);  /* 0C075308 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C07530Cu, 1);  /* 0C07530A mov.l Rm,@Rn */
	r3 = R32(r1); UPD(0x0C07530Eu, 1);  /* 0C07530C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07530E add #imm,Rn */
	W32(r8, r3); UPD(0x0C075312u, 2);  /* 0C075310 mov.l Rm,@Rn */
	r2 = 0xC3C4010u; UPD(0x0C075314u, 1);  /* 0C075312 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075314 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C075318u, 2);  /* 0C075316 mov.l @Rm,Rn */
	r12 = R32(r2); UPD(0x0C07531Au, 1);  /* 0C075318 mov.l @Rm,Rn */
	r12 |= r0;  /* 0C07531A or Rm,Rn */
	W32(r8, r12); UPD(0x0C07531Eu, 2);  /* 0C07531C mov.l Rm,@Rn */
	r6 = R32(r11); UPD(0x0C075320u, 1);  /* 0C07531E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075320 add #imm,Rn */
	r6 |= r7;  /* 0C075322 or Rm,Rn */
	W32(r8, r6); UPD(0x0C075326u, 3);  /* 0C075324 mov.l Rm,@Rn */
	r6 = 0xC207510u; UPD(0x0C075328u, 1);  /* 0C075326 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075328 add #imm,Rn */
	r9 = R32(r6); UPD(0x0C07532Cu, 2);  /* 0C07532A mov.l @Rm,Rn */
	r1 = 0xC232308u; UPD(0x0C07532Eu, 1);  /* 0C07532C mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C075330u, 1);  /* 0C07532E mov.l Rm,@Rn */
	r3 = R32(r1); UPD(0x0C075332u, 1);  /* 0C075330 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075332 add #imm,Rn */
	W32(r8, r3); UPD(0x0C075336u, 2);  /* 0C075334 mov.l Rm,@Rn */
	r0 = 0xC22E020u; UPD(0x0C075338u, 1);  /* 0C075336 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075338 add #imm,Rn */
	r12 = R32(r11); UPD(0x0C07533Cu, 2);  /* 0C07533A mov.l @Rm,Rn */
	r9 = R32(r0); UPD(0x0C07533Eu, 1);  /* 0C07533C mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C075340u, 1);  /* 0C07533E mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C075340 add Rm,Rn */
	r9 += r2;  /* 0C075342 add Rm,Rn */
	W32(r8, r9); UPD(0x0C075346u, 3);  /* 0C075344 mov.l Rm,@Rn */
	r3 = 0xC3B1AFCu; UPD(0x0C075348u, 1);  /* 0C075346 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075348 add #imm,Rn */
	r1 = R32(r5); UPD(0x0C07534Cu, 2);  /* 0C07534A mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C07534Eu, 1);  /* 0C07534C mov.l @Rm,Rn */
	r0 |= r1; UPD(0x0C075350u, 1);  /* 0C07534E or Rm,Rn */
	W32(r8, r0); UPD(0x0C075352u, 1);  /* 0C075350 mov.l Rm,@Rn */
	r5 = R32(r13); UPD(0x0C075354u, 1);  /* 0C075352 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075354 add #imm,Rn */
	r5 |= r7;  /* 0C075356 or Rm,Rn */
	W32(r8, r5); UPD(0x0C07535Au, 3);  /* 0C075358 mov.l Rm,@Rn */
	r12 = R32(r6); UPD(0x0C07535Cu, 1);  /* 0C07535A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07535C add #imm,Rn */
	W32(r8, r12); UPD(0x0C075360u, 2);  /* 0C07535E mov.l Rm,@Rn */
	r12 = 0xC232308u; UPD(0x0C075362u, 1);  /* 0C075360 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075362 add #imm,Rn */
	r9 = R32(r12); UPD(0x0C075366u, 2);  /* 0C075364 mov.l @Rm,Rn */
	W32(r8, r9); UPD(0x0C075368u, 1);  /* 0C075366 mov.l Rm,@Rn */
	r9 = 0xC22E020u; UPD(0x0C07536Au, 1);  /* 0C075368 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07536A add #imm,Rn */
	r2 = R32(r9); UPD(0x0C07536Eu, 2);  /* 0C07536C mov.l @Rm,Rn */
	r2 += r7;  /* 0C07536E add Rm,Rn */
	r2 += 0x1u;  /* 0C075370 add #imm,Rn */
	W32(r8, r2); UPD(0x0C075374u, 3);  /* 0C075372 mov.l Rm,@Rn */
	r0 = 0xC3C4010u; UPD(0x0C075376u, 1);  /* 0C075374 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075376 add #imm,Rn */
	r3 = R32(r0); UPD(0x0C07537Au, 2);  /* 0C075378 mov.l @Rm,Rn */
	r1 = R32(r4); UPD(0x0C07537Cu, 1);  /* 0C07537A mov.l @Rm,Rn */
	r3 |= r1;  /* 0C07537C or Rm,Rn */
	W32(r8, r3); UPD(0x0C075380u, 2);  /* 0C07537E mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C075382u, 1);  /* 0C075380 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075382 add #imm,Rn */
	r5 |= r10;  /* 0C075384 or Rm,Rn */
	W32(r8, r5); UPD(0x0C075388u, 3);  /* 0C075386 mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C07538Au, 1);  /* 0C075388 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07538A add #imm,Rn */
	W32(r8, r2); UPD(0x0C07538Eu, 2);  /* 0C07538C mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C075390u, 1);  /* 0C07538E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075390 add #imm,Rn */
	W32(r8, r0); UPD(0x0C075394u, 2);  /* 0C075392 mov.l Rm,@Rn */
	r5 = R32(r9); UPD(0x0C075396u, 1);  /* 0C075394 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075396 add #imm,Rn */
	r3 = R32(r11); UPD(0x0C07539Au, 2);  /* 0C075398 mov.l @Rm,Rn */
	r5 += r3;  /* 0C07539A add Rm,Rn */
	r5 += r7;  /* 0C07539C add Rm,Rn */
	r7 = 0x10001u; UPD(0x0C0753A0u, 3);  /* 0C07539E mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0753A0 add Rm,Rn */
	W32(r8, r5); UPD(0x0C0753A4u, 2);  /* 0C0753A2 mov.l Rm,@Rn */
	r2 = 0xC3B1AFCu; UPD(0x0C0753A6u, 1);  /* 0C0753A4 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0753A6 add #imm,Rn */
	r9 = R32(r2); UPD(0x0C0753AAu, 2);  /* 0C0753A8 mov.l @Rm,Rn */
	r12 = R32(r4); UPD(0x0C0753ACu, 1);  /* 0C0753AA mov.l @Rm,Rn */
	r9 |= r12;  /* 0C0753AC or Rm,Rn */
	W32(r8, r9); UPD(0x0C0753B0u, 2);  /* 0C0753AE mov.l Rm,@Rn */
	r11 = R32(r13); UPD(0x0C0753B2u, 1);  /* 0C0753B0 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0753B2 add #imm,Rn */
	r11 |= r10;  /* 0C0753B4 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0753B8u, 3);  /* 0C0753B6 mov.l Rm,@Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C075074u, 3); goto L_0C075074; }  /* 0C0753B8 bra */
L_0C0753C0: BLKS(0x0C0753C0u);
	r9 = 0xC2B03A0u; UPD(0x0C0753C2u, 1);  /* 0C0753C0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0753C2 mov Rm,Rn */
	r0 -= r11;  /* 0C0753C4 sub Rm,Rn */
	r13 = 0xC29D734u; UPD(0x0C0753C8u, 3);  /* 0C0753C6 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0753C8 add #imm,Rn */
	W16(r9, r11); UPD(0x0C0753CCu, 2);  /* 0C0753CA mov.w Rm,@Rn */
	r1 = 0x4000u; UPD(0x0C0753CEu, 1);  /* 0C0753CC mov.w @(disp,pc),Rn */
	r9 = r11;  /* 0C0753CE mov Rm,Rn */
	T = r4 == r1;  /* 0C0753D0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W16(r13, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0753DAu, 5); goto L_0C0753DA; } UPD(0x0C0753D6u, 1); goto L_0C0753D6; }  /* 0C0753D2 bf/s */
L_0C0753D6: BLKS(0x0C0753D6u);
	{ r1 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C0755F0u, 3); goto L_0C0755F0; }  /* 0C0753D6 bra */
L_0C0753DA: BLKS(0x0C0753DAu);
	T = (s32)r4 > (s32)r1;  /* 0C0753DA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0754B0u, 4); goto L_0C0754B0; } goto L_0C0753E0; }  /* 0C0753DC bt/s */
L_0C0753E0: BLKS(0x0C0753E0u);
	{ u32 c_ = !T; r4 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0754C0u, 4); goto L_0C0754C0; } goto L_0C0753E4; }  /* 0C0753E0 bf/s */
L_0C0753E4: BLKS(0x0C0753E4u);
	r10 = 0xC2A6940u; UPD(0x0C0753E6u, 2);  /* 0C0753E4 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C0753E8u, 1);  /* 0C0753E6 mov.w @Rm,Rn */
	r4 += r14;  /* 0C0753E8 add Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0753ECu, 2);  /* 0C0753EA mov.l @(disp,Rm),Rn */
	r3 = r9;  /* 0C0753EC mov Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0753F0u, 2);  /* 0C0753EE mov.w @Rm,Rn */
	r13 += r5;  /* 0C0753F0 add Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0753F4u, 2);  /* 0C0753F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0753F4u); r13 <<= 16;  /* 0C0753F4 shll16 Rn */
	r11 = 0xC232310u; UPD(0x0C0753F8u, 2);  /* 0C0753F6 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0753F8 add Rm,Rn */
	r13 |= r2;  /* 0C0753FA or Rm,Rn */
	W32(r11, r13); UPD(0x0C0753FEu, 3);  /* 0C0753FC mov.l Rm,@Rn */
	IF(0x0C0753FEu); r3 <<= 16;  /* 0C0753FE shll16 Rn */
	r13 = 0xC22E2A8u; UPD(0x0C075402u, 2);  /* 0C075400 mov.l @(disp,pc),Rn */
	IF(0x0C075402u); r0 <<= 16;  /* 0C075402 shll16 Rn */
	W32(r13, r3); UPD(0x0C075406u, 2);  /* 0C075404 mov.l Rm,@Rn */
	W32(r8, r12); UPD(0x0C075408u, 1);  /* 0C075406 mov.l Rm,@Rn */
	r12 = 0xC22E020u; UPD(0x0C07540Au, 1);  /* 0C075408 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07540A add #imm,Rn */
	r7 = R32(r12); UPD(0x0C07540Eu, 2);  /* 0C07540C mov.l @Rm,Rn */
	W32(r8, r7); UPD(0x0C075410u, 1);  /* 0C07540E mov.l Rm,@Rn */
	r6 = R32(r11); UPD(0x0C075412u, 1);  /* 0C075410 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075412 add #imm,Rn */
	W32(r8, r6); UPD(0x0C075416u, 2);  /* 0C075414 mov.l Rm,@Rn */
	r10 = R32(r14 + 0x18u); UPD(0x0C075418u, 1);  /* 0C075416 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C075418 add #imm,Rn */
	r5 = R32(r13); UPD(0x0C07541Cu, 2);  /* 0C07541A mov.l @Rm,Rn */
	r5 |= r10;  /* 0C07541C or Rm,Rn */
	W32(r8, r5); UPD(0x0C075420u, 2);  /* 0C07541E mov.l Rm,@Rn */
	r5 = 0xC207510u; UPD(0x0C075422u, 1);  /* 0C075420 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075422 add #imm,Rn */
	r4 = R32(r5); UPD(0x0C075426u, 2);  /* 0C075424 mov.l @Rm,Rn */
	r1 = 0xC232308u; UPD(0x0C075428u, 1);  /* 0C075426 mov.l @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C07542Au, 1);  /* 0C075428 mov.l Rm,@Rn */
	r2 = R32(r1); UPD(0x0C07542Cu, 1);  /* 0C07542A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07542C add #imm,Rn */
	W32(r8, r2); UPD(0x0C075430u, 2);  /* 0C07542E mov.l Rm,@Rn */
	r7 = R32(r12); UPD(0x0C075432u, 1);  /* 0C075430 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075432 add #imm,Rn */
	r9 = R32(r13); UPD(0x0C075436u, 2);  /* 0C075434 mov.l @Rm,Rn */
	r10 = 0x10000u; UPD(0x0C075438u, 1);  /* 0C075436 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C075438 add Rm,Rn */
	r7 += r10;  /* 0C07543A add Rm,Rn */
	W32(r8, r7); UPD(0x0C07543Eu, 3);  /* 0C07543C mov.l Rm,@Rn */
	r4 = R32(r11); UPD(0x0C075440u, 1);  /* 0C07543E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075440 add #imm,Rn */
	r6 = R32(r13); UPD(0x0C075444u, 2);  /* 0C075442 mov.l @Rm,Rn */
	r4 += r6;  /* 0C075444 add Rm,Rn */
	r4 += r10;  /* 0C075446 add Rm,Rn */
	W32(r8, r4); UPD(0x0C07544Au, 3);  /* 0C075448 mov.l Rm,@Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C07544Cu, 1);  /* 0C07544A mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C07544C add #imm,Rn */
	r0 |= r12;  /* 0C07544E or Rm,Rn */
	W32(r8, r0); UPD(0x0C075452u, 3);  /* 0C075450 mov.l Rm,@Rn */
L_0C075452: BLKS(0x0C075452u);
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0752C6u, 3); goto L_0C0752C6; }  /* 0C075452 bra */
L_0C0754B0: BLKS(0x0C0754B0u);
	r2 = 0x8000u; UPD(0x0C0754B2u, 1);  /* 0C0754B0 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C0754B2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r11 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075560u, 4); goto L_0C075560; } UPD(0x0C0754B8u, 1); goto L_0C0754B8; }  /* 0C0754B4 bt/s */
L_0C0754B8: BLKS(0x0C0754B8u);
	r3 = 0xC000u; UPD(0x0C0754BAu, 1);  /* 0C0754B8 mov.l @(disp,pc),Rn */
	T = r4 == r3;  /* 0C0754BA cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0754C4u, 4); goto L_0C0754C4; } UPD(0x0C0754C0u, 1); goto L_0C0754C0; }  /* 0C0754BC bt/s */
L_0C0754C0: BLKS(0x0C0754C0u);
	{ IF(0x0C0754C2u); ; /* slot nop */ UPD(0x0C074F54u, 3); goto L_0C074F54; }  /* 0C0754C0 bra */
L_0C0754C4: BLKS(0x0C0754C4u);
	r11 = 0x1Eu;  /* 0C0754C4 mov #imm,Rn */
	r11 += r14;  /* 0C0754C6 add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C0754CAu, 3);  /* 0C0754C8 mov.w @Rm,Rn */
	r6 = 0xC2A6940u; UPD(0x0C0754CCu, 1);  /* 0C0754CA mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0754CC exts.w Rm,Rn */
	r5 += r14;  /* 0C0754CE add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C0754D2u, 3);  /* 0C0754D0 mov.w @Rm,Rn */
	r3 = 0x22u;  /* 0C0754D2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0754D6u, 2);  /* 0C0754D4 mov.w @Rm,Rn */
	r3 += r14;  /* 0C0754D6 add Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0754DAu, 2);  /* 0C0754D8 mov.l @(disp,Rm),Rn */
	r7 -= r13;  /* 0C0754DA sub Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0754DEu, 2);  /* 0C0754DC mov.l @(disp,Rm),Rn */
	r9 -= r1;  /* 0C0754DE sub Rm,Rn */
	r4 = R32(r14 + 0x18u); UPD(0x0C0754E2u, 2);  /* 0C0754E0 mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C0754E2 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C0754E6u, 2);  /* 0C0754E4 mov.w @Rm,Rn */
	r7 -= r2;  /* 0C0754E6 sub Rm,Rn */
	r9 -= r4;  /* 0C0754E8 sub Rm,Rn */
	r9 -= r6;  /* 0C0754EA sub Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C0754EC add #imm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0754EE add #imm,Rn */
	IF(0x0C0754F0u); r7 <<= 16;  /* 0C0754F0 shll16 Rn */
	r7 |= r9;  /* 0C0754F2 or Rm,Rn */
	r10 = 0xC232310u; UPD(0x0C0754F6u, 8);  /* 0C0754F4 mov.l @(disp,pc),Rn */
	IF(0x0C0754F6u); r11 <<= 16;  /* 0C0754F6 shll16 Rn */
	r6 = 0xC22E2A8u; UPD(0x0C0754FAu, 2);  /* 0C0754F8 mov.l @(disp,pc),Rn */
	IF(0x0C0754FAu); r0 <<= 16;  /* 0C0754FA shll16 Rn */
	r9 = 0xC2B1A44u; UPD(0x0C0754FEu, 2);  /* 0C0754FC mov.l @(disp,pc),Rn */
	W32(r10, r7); UPD(0x0C075500u, 1);  /* 0C0754FE mov.l Rm,@Rn */
	W32(r6, r11); UPD(0x0C075502u, 1);  /* 0C075500 mov.l Rm,@Rn */
	W32(r9, r0); UPD(0x0C075504u, 1);  /* 0C075502 mov.l Rm,@Rn */
	r13 = 0xC22E020u; UPD(0x0C075506u, 1);  /* 0C075504 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C075508u, 1);  /* 0C075506 mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C07550Au, 1);  /* 0C075508 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07550A add #imm,Rn */
	W32(r8, r12); UPD(0x0C07550Eu, 2);  /* 0C07550C mov.l Rm,@Rn */
	r11 = R32(r10); UPD(0x0C075510u, 1);  /* 0C07550E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075510 add #imm,Rn */
	W32(r8, r11); UPD(0x0C075514u, 2);  /* 0C075512 mov.l Rm,@Rn */
	r11 = R32(r14 + 0x18u); UPD(0x0C075516u, 1);  /* 0C075514 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C075516 add #imm,Rn */
	r5 = R32(r6); UPD(0x0C07551Au, 2);  /* 0C075518 mov.l @Rm,Rn */
	r5 |= r11;  /* 0C07551A or Rm,Rn */
	W32(r8, r5); UPD(0x0C07551Eu, 2);  /* 0C07551C mov.l Rm,@Rn */
	r5 = 0xC207510u; UPD(0x0C075520u, 1);  /* 0C07551E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075520 add #imm,Rn */
	r2 = R32(r5); UPD(0x0C075524u, 2);  /* 0C075522 mov.l @Rm,Rn */
	r1 = 0xC232308u; UPD(0x0C075526u, 1);  /* 0C075524 mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C075528u, 1);  /* 0C075526 mov.l Rm,@Rn */
	r0 = R32(r1); UPD(0x0C07552Au, 1);  /* 0C075528 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07552A add #imm,Rn */
	W32(r8, r0); UPD(0x0C07552Eu, 2);  /* 0C07552C mov.l Rm,@Rn */
	r3 = 0xC22E020u; UPD(0x0C075530u, 1);  /* 0C07552E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075530 add #imm,Rn */
	r7 = R32(r3); UPD(0x0C075534u, 2);  /* 0C075532 mov.l @Rm,Rn */
	r4 = R32(r6); UPD(0x0C075536u, 1);  /* 0C075534 mov.l @Rm,Rn */
	r12 = 0x10000u; UPD(0x0C075538u, 1);  /* 0C075536 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C075538 add Rm,Rn */
	r7 += r12;  /* 0C07553A add Rm,Rn */
	W32(r8, r7); UPD(0x0C07553Eu, 3);  /* 0C07553C mov.l Rm,@Rn */
	r0 = R32(r10); UPD(0x0C075540u, 1);  /* 0C07553E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075540 add #imm,Rn */
	r13 = R32(r9); UPD(0x0C075544u, 2);  /* 0C075542 mov.l @Rm,Rn */
	r0 -= r13;  /* 0C075544 sub Rm,Rn */
	r0 -= r12;  /* 0C075546 sub Rm,Rn */
	W32(r8, r0); UPD(0x0C07554Au, 3);  /* 0C075548 mov.l Rm,@Rn */
	r1 = R32(r9); UPD(0x0C07554Cu, 1);  /* 0C07554A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07554C add #imm,Rn */
	r1 |= r11;  /* 0C07554E or Rm,Rn */
	UPD(0x0C075550u, 2);
L_0C075550: BLKS(0x0C075550u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C075452u, 3); goto L_0C075452; }  /* 0C075550 bra */
L_0C075560: BLKS(0x0C075560u);
	r6 = 0xC2A6940u; UPD(0x0C075562u, 1);  /* 0C075560 mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C075562 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C075566u, 2);  /* 0C075564 mov.w @Rm,Rn */
	r4 += r14;  /* 0C075566 add Rm,Rn */
	r1 = 0x1Eu;  /* 0C075568 mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07556Cu, 3);  /* 0C07556A mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C07556C exts.w Rm,Rn */
	r5 -= r11;  /* 0C07556E sub Rm,Rn */
	r1 += r14;  /* 0C075570 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r1); UPD(0x0C075574u, 4);  /* 0C075572 mov.w @Rm,Rn */
	r5 -= r13;  /* 0C075574 sub Rm,Rn */
	r4 = 0xC22E2A8u; UPD(0x0C075578u, 2);  /* 0C075576 mov.l @(disp,pc),Rn */
	IF(0x0C075578u); r13 <<= 16;  /* 0C075578 shll16 Rn */
	W32(r4, r13); UPD(0x0C07557Cu, 2);  /* 0C07557A mov.l Rm,@Rn */
	r5 -= r9;  /* 0C07557C sub Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C075580u, 2);  /* 0C07557E mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C075580 add #imm,Rn */
	r10 = 0xC232310u; UPD(0x0C075584u, 2);  /* 0C075582 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C075584 add Rm,Rn */
	r13 = 0xC2B1A44u; UPD(0x0C075588u, 2);  /* 0C075586 mov.l @(disp,pc),Rn */
	IF(0x0C075588u); r5 <<= 16;  /* 0C075588 shll16 Rn */
	r5 |= r3;  /* 0C07558A or Rm,Rn */
	IF(0x0C07558Cu); r0 <<= 16;  /* 0C07558C shll16 Rn */
	W32(r10, r5); UPD(0x0C075590u, 4);  /* 0C07558E mov.l Rm,@Rn */
	W32(r13, r0); UPD(0x0C075592u, 1);  /* 0C075590 mov.l Rm,@Rn */
	r5 = 0xC22E020u; UPD(0x0C075594u, 1);  /* 0C075592 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C075596u, 1);  /* 0C075594 mov.l Rm,@Rn */
	r7 = R32(r5); UPD(0x0C075598u, 1);  /* 0C075596 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075598 add #imm,Rn */
	W32(r8, r7); UPD(0x0C07559Cu, 2);  /* 0C07559A mov.l Rm,@Rn */
	r6 = R32(r10); UPD(0x0C07559Eu, 1);  /* 0C07559C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07559E add #imm,Rn */
	W32(r8, r6); UPD(0x0C0755A2u, 2);  /* 0C0755A0 mov.l Rm,@Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C0755A4u, 1);  /* 0C0755A2 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0755A4 add #imm,Rn */
	r11 = R32(r4); UPD(0x0C0755A8u, 2);  /* 0C0755A6 mov.l @Rm,Rn */
	r11 |= r12;  /* 0C0755A8 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0755ACu, 2);  /* 0C0755AA mov.l Rm,@Rn */
	r11 = 0xC207510u; UPD(0x0C0755AEu, 1);  /* 0C0755AC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0755AE add #imm,Rn */
	r9 = R32(r11); UPD(0x0C0755B2u, 2);  /* 0C0755B0 mov.l @Rm,Rn */
	r1 = 0xC232308u; UPD(0x0C0755B4u, 1);  /* 0C0755B2 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C0755B6u, 1);  /* 0C0755B4 mov.l Rm,@Rn */
	r0 = R32(r1); UPD(0x0C0755B8u, 1);  /* 0C0755B6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0755B8 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0755BCu, 2);  /* 0C0755BA mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C0755BEu, 1);  /* 0C0755BC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0755BE add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0755C2u, 2);  /* 0C0755C0 mov.l @Rm,Rn */
	r6 = 0x10000u; UPD(0x0C0755C4u, 1);  /* 0C0755C2 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0755C4 add Rm,Rn */
	r3 += r6;  /* 0C0755C6 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0755CAu, 3);  /* 0C0755C8 mov.l Rm,@Rn */
	r12 = R32(r10); UPD(0x0C0755CCu, 1);  /* 0C0755CA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0755CC add #imm,Rn */
	r7 = R32(r13); UPD(0x0C0755D0u, 2);  /* 0C0755CE mov.l @Rm,Rn */
	r12 -= r7;  /* 0C0755D0 sub Rm,Rn */
	r12 -= r6;  /* 0C0755D2 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C0755D6u, 3);  /* 0C0755D4 mov.l Rm,@Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C0755D8u, 1);  /* 0C0755D6 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0755D8 add #imm,Rn */
	r0 = R32(r13); UPD(0x0C0755DCu, 2);  /* 0C0755DA mov.l @Rm,Rn */
	r0 |= r9;  /* 0C0755DC or Rm,Rn */
	W32(r8, r0); UPD(0x0C0755E0u, 2);  /* 0C0755DE mov.l Rm,@Rn */
	r1 = R32(r11); UPD(0x0C0755E2u, 1);  /* 0C0755E0 mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C075076u, 3); goto L_0C075076; }  /* 0C0755E2 bra */
L_0C0755F0: BLKS(0x0C0755F0u);
	r5 = 0xC2A6940u; UPD(0x0C0755F2u, 1);  /* 0C0755F0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0755F4u, 1);  /* 0C0755F2 mov.w @Rm,Rn */
	r1 += r14;  /* 0C0755F4 add Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0755F8u, 2);  /* 0C0755F6 mov.l @(disp,Rm),Rn */
	r2 = 0x22u;  /* 0C0755F8 mov #imm,Rn */
	r10 += r6;  /* 0C0755FA add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C0755FEu, 3);  /* 0C0755FC mov.w @Rm,Rn */
	r2 += r14;  /* 0C0755FE add Rm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C075602u, 2);  /* 0C075600 mov.l @(disp,Rm),Rn */
	r13 = r9;  /* 0C075602 mov Rm,Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C075606u, 2);  /* 0C075604 mov.l @(disp,Rm),Rn */
	r3 -= r7;  /* 0C075606 sub Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C07560Au, 2);  /* 0C075608 mov.w @Rm,Rn */
	r3 -= r6;  /* 0C07560A sub Rm,Rn */
	r3 -= r4;  /* 0C07560C sub Rm,Rn */
	r4 = 0xC22E2A8u; UPD(0x0C075610u, 3);  /* 0C07560E mov.l @(disp,pc),Rn */
	IF(0x0C075610u); r13 <<= 16;  /* 0C075610 shll16 Rn */
	W32(r4, r13); UPD(0x0C075614u, 2);  /* 0C075612 mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C075614 add #imm,Rn */
	r11 = 0xC232310u; UPD(0x0C075618u, 2);  /* 0C075616 mov.l @(disp,pc),Rn */
	IF(0x0C075618u); r10 <<= 16;  /* 0C075618 shll16 Rn */
	r13 = 0xC2B1A44u; UPD(0x0C07561Cu, 2);  /* 0C07561A mov.l @(disp,pc),Rn */
	r10 |= r3;  /* 0C07561C or Rm,Rn */
	IF(0x0C07561Eu); r0 <<= 16;  /* 0C07561E shll16 Rn */
	W32(r11, r10); UPD(0x0C075622u, 3);  /* 0C075620 mov.l Rm,@Rn */
	W32(r13, r0); UPD(0x0C075624u, 1);  /* 0C075622 mov.l Rm,@Rn */
	r9 = 0xC22E020u; UPD(0x0C075626u, 1);  /* 0C075624 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C075628u, 1);  /* 0C075626 mov.l Rm,@Rn */
	r12 = R32(r9); UPD(0x0C07562Au, 1);  /* 0C075628 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07562A add #imm,Rn */
	W32(r8, r12); UPD(0x0C07562Eu, 2);  /* 0C07562C mov.l Rm,@Rn */
	r5 = R32(r11); UPD(0x0C075630u, 1);  /* 0C07562E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075630 add #imm,Rn */
	W32(r8, r5); UPD(0x0C075634u, 2);  /* 0C075632 mov.l Rm,@Rn */
	r0 = R32(r4); UPD(0x0C075636u, 1);  /* 0C075634 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075636 add #imm,Rn */
	r0 |= r6;  /* 0C075638 or Rm,Rn */
	W32(r8, r0); UPD(0x0C07563Cu, 3);  /* 0C07563A mov.l Rm,@Rn */
	r5 = 0xC207510u; UPD(0x0C07563Eu, 1);  /* 0C07563C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07563E add #imm,Rn */
	r10 = R32(r5); UPD(0x0C075642u, 2);  /* 0C075640 mov.l @Rm,Rn */
	r1 = 0xC232308u; UPD(0x0C075644u, 1);  /* 0C075642 mov.l @(disp,pc),Rn */
	W32(r8, r10); UPD(0x0C075646u, 1);  /* 0C075644 mov.l Rm,@Rn */
	r6 = R32(r1); UPD(0x0C075648u, 1);  /* 0C075646 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075648 add #imm,Rn */
	W32(r8, r6); UPD(0x0C07564Cu, 2);  /* 0C07564A mov.l Rm,@Rn */
	r7 = R32(r9); UPD(0x0C07564Eu, 1);  /* 0C07564C mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07564E add #imm,Rn */
	r2 = R32(r4); UPD(0x0C075652u, 2);  /* 0C075650 mov.l @Rm,Rn */
	r12 = 0x10000u; UPD(0x0C075654u, 1);  /* 0C075652 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C075654 add Rm,Rn */
	r7 += r12;  /* 0C075656 add Rm,Rn */
	W32(r8, r7); UPD(0x0C07565Au, 3);  /* 0C075658 mov.l Rm,@Rn */
	r0 = R32(r11); UPD(0x0C07565Cu, 1);  /* 0C07565A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07565C add #imm,Rn */
	r3 = R32(r4); UPD(0x0C075660u, 2);  /* 0C07565E mov.l @Rm,Rn */
	r0 += r3;  /* 0C075660 add Rm,Rn */
	r0 += r12;  /* 0C075662 add Rm,Rn */
	W32(r8, r0); UPD(0x0C075666u, 3);  /* 0C075664 mov.l Rm,@Rn */
	r10 = R32(r14 + 0x18u); UPD(0x0C075668u, 1);  /* 0C075666 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C075668 add #imm,Rn */
	r1 = R32(r13); UPD(0x0C07566Cu, 2);  /* 0C07566A mov.l @Rm,Rn */
	{ r1 |= r10; /* slot or Rm,Rn */ UPD(0x0C075550u, 3); goto L_0C075550; }  /* 0C07566C bra */
L_0C075670: BLKS(0x0C075670u);
	r0 = r5;  /* 0C075670 mov Rm,Rn */
	r5 += r9;  /* 0C075672 add Rm,Rn */
	r0 &= r6;  /* 0C075674 and Rm,Rn */
	r5 &= r6;  /* 0C075676 and Rm,Rn */
	T = r0 == r5;  /* 0C075678 cmp/eq Rm,Rn */
	r0 = r10;  /* 0C07567A mov Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C07567C negc Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07567E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C075680 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C075682 negc Rm,Rn */
	T = (r7 & r10) == 0;  /* 0C075684 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0u - r0; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C07568Eu, 14); goto L_0C07568E; } goto L_0C07568A; }  /* 0C075686 bf/s */
L_0C07568A: BLKS(0x0C07568Au);
	{ IF(0x0C07568Cu); ; /* slot nop */ UPD(0x0C075830u, 4); goto L_0C075830; }  /* 0C07568A bra */
L_0C07568E: BLKS(0x0C07568Eu);
	r6 += 0x1Fu;  /* 0C07568E add #imm,Rn */
	r0 = r11;  /* 0C075690 mov Rm,Rn */
	r5 = 0xC3C544Cu; UPD(0x0C075694u, 3);  /* 0C075692 mov.l @(disp,pc),Rn */
	r0 -= r6;  /* 0C075694 sub Rm,Rn */
	r1 = 0xC28EDB0u; UPD(0x0C075698u, 2);  /* 0C075696 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C075698 add #imm,Rn */
	W16(r5, r0); UPD(0x0C07569Cu, 2);  /* 0C07569A mov.w Rm,@Rn */
	r7 = r6;  /* 0C07569C mov Rm,Rn */
	W16(r1, r6); UPD(0x0C0756A0u, 2);  /* 0C07569E mov.w Rm,@Rn */
	r5 = 0xC29D720u; UPD(0x0C0756A2u, 1);  /* 0C0756A0 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C0756A4u, 1);  /* 0C0756A2 mov.l @(disp,Rm),Rn */
	r1 = 0x4000u; UPD(0x0C0756A6u, 1);  /* 0C0756A4 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C0756A6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r5, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0756B0u, 4); goto L_0C0756B0; } UPD(0x0C0756ACu, 1); goto L_0C0756AC; }  /* 0C0756A8 bf/s */
L_0C0756AC: BLKS(0x0C0756ACu);
	{ r2 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C0757E0u, 3); goto L_0C0757E0; }  /* 0C0756AC bra */
L_0C0756B0: BLKS(0x0C0756B0u);
	T = (s32)r4 > (s32)r1;  /* 0C0756B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C075730u, 4); goto L_0C075730; } goto L_0C0756B6; }  /* 0C0756B2 bt/s */
L_0C0756B6: BLKS(0x0C0756B6u);
	{ u32 c_ = !T; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075740u, 4); goto L_0C075740; } UPD(0x0C0756BAu, 1); goto L_0C0756BA; }  /* 0C0756B6 bf/s */
L_0C0756BA: BLKS(0x0C0756BAu);
	r13 = 0xC2A6940u; UPD(0x0C0756BCu, 1);  /* 0C0756BA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0756BEu, 1);  /* 0C0756BC mov.w @Rm,Rn */
	r3 = 0xC232310u; UPD(0x0C0756C0u, 1);  /* 0C0756BE mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0756C0 add Rm,Rn */
	UPD(0x0C0756C2u, 1);
L_0C0756C2: BLKS(0x0C0756C2u);
	r9 = 0xAu;  /* 0C0756C2 mov #imm,Rn */
	r9 += r14;  /* 0C0756C4 add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C0756C8u, 3);  /* 0C0756C6 mov.w @Rm,Rn */
	IF(0x0C0756C8u); r2 <<= 16;  /* 0C0756C8 shll16 Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0756CCu, 2);  /* 0C0756CA mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C0756CC add Rm,Rn */
	r2 |= r10;  /* 0C0756CE or Rm,Rn */
	W32(r3, r2); UPD(0x0C0756D2u, 3);  /* 0C0756D0 mov.l Rm,@Rn */
	r13 = 0xC22E020u; UPD(0x0C0756D4u, 1);  /* 0C0756D2 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C0756D6u, 1);  /* 0C0756D4 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C0756D8u, 1);  /* 0C0756D6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0756D8 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0756DCu, 2);  /* 0C0756DA mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0756DC exts.w Rm,Rn */
	r12 = R32(r3); UPD(0x0C0756E0u, 2);  /* 0C0756DE mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0756E0 add #imm,Rn */
	W32(r8, r12); UPD(0x0C0756E4u, 2);  /* 0C0756E2 mov.l Rm,@Rn */
	r11 = R32(r5); UPD(0x0C0756E6u, 1);  /* 0C0756E4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0756E6 add #imm,Rn */
	r11 |= r13;  /* 0C0756E8 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0756ECu, 3);  /* 0C0756EA mov.l Rm,@Rn */
	r12 = 0xC207510u; UPD(0x0C0756EEu, 1);  /* 0C0756EC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0756EE add #imm,Rn */
	r6 = R32(r12); UPD(0x0C0756F2u, 2);  /* 0C0756F0 mov.l @Rm,Rn */
	r9 = 0xC232308u; UPD(0x0C0756F4u, 1);  /* 0C0756F2 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C0756F6u, 1);  /* 0C0756F4 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C0756F8u, 1);  /* 0C0756F6 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0756F8 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0756FCu, 2);  /* 0C0756FA mov.l Rm,@Rn */
	r1 = 0xC22E020u; UPD(0x0C0756FEu, 1);  /* 0C0756FC mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0756FE add #imm,Rn */
	r2 = R32(r1); UPD(0x0C075702u, 2);  /* 0C075700 mov.l @Rm,Rn */
	r2 += r13;  /* 0C075702 add Rm,Rn */
	r2 += 0x1u;  /* 0C075704 add #imm,Rn */
	W32(r8, r2); UPD(0x0C075708u, 3);  /* 0C075706 mov.l Rm,@Rn */
	r4 = R32(r3); UPD(0x0C07570Au, 1);  /* 0C075708 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07570A add #imm,Rn */
	r4 += r13;  /* 0C07570C add Rm,Rn */
	r4 += 0x1u;  /* 0C07570E add #imm,Rn */
	W32(r8, r4); UPD(0x0C075712u, 4);  /* 0C075710 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C075712 exts.w Rm,Rn */
	r7 = R32(r5); UPD(0x0C075716u, 2);  /* 0C075714 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075716 add #imm,Rn */
	r7 |= r3;  /* 0C075718 or Rm,Rn */
	W32(r8, r7); UPD(0x0C07571Cu, 3);  /* 0C07571A mov.l Rm,@Rn */
	r1 = R32(r12); UPD(0x0C07571Eu, 1);  /* 0C07571C mov.l @Rm,Rn */
	{ r8 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C075076u, 3); goto L_0C075076; }  /* 0C07571E bra */
L_0C075730: BLKS(0x0C075730u);
	r2 = 0x8000u; UPD(0x0C075732u, 1);  /* 0C075730 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C075732 cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = 0x1Eu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0757C0u, 4); goto L_0C0757C0; } goto L_0C075738; }  /* 0C075734 bt/s */
L_0C075738: BLKS(0x0C075738u);
	r11 = 0xC000u; UPD(0x0C07573Au, 2);  /* 0C075738 mov.l @(disp,pc),Rn */
	T = r4 == r11;  /* 0C07573A cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075744u, 4); goto L_0C075744; } UPD(0x0C075740u, 1); goto L_0C075740; }  /* 0C07573C bt/s */
L_0C075740: BLKS(0x0C075740u);
	{ IF(0x0C075742u); ; /* slot nop */ UPD(0x0C074F54u, 3); goto L_0C074F54; }  /* 0C075740 bra */
L_0C075744: BLKS(0x0C075744u);
	r4 = 0xC2A6940u; UPD(0x0C075746u, 1);  /* 0C075744 mov.l @(disp,pc),Rn */
	r1 = 0x1Eu;  /* 0C075746 mov #imm,Rn */
	r1 += r14;  /* 0C075748 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07574Cu, 3);  /* 0C07574A mov.w @Rm,Rn */
	r9 = 0xAu;  /* 0C07574C mov #imm,Rn */
	r9 += r14;  /* 0C07574E add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C075752u, 3);  /* 0C075750 mov.w @Rm,Rn */
	r3 -= r2;  /* 0C075752 sub Rm,Rn */
	r3 -= r13;  /* 0C075754 sub Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r9); UPD(0x0C075758u, 3);  /* 0C075756 mov.w @Rm,Rn */
	r3 -= r11;  /* 0C075758 sub Rm,Rn */
	r10 = R32(r14 + 0x10u); UPD(0x0C07575Cu, 2);  /* 0C07575A mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C07575C add #imm,Rn */
	r6 = 0xC232310u; UPD(0x0C075760u, 2);  /* 0C07575E mov.l @(disp,pc),Rn */
	r1 -= r10;  /* 0C075760 sub Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C075762 exts.w Rm,Rn */
	IF(0x0C075764u); r3 <<= 16;  /* 0C075764 shll16 Rn */
	r1 -= r7;  /* 0C075766 sub Rm,Rn */
	UPD(0x0C075768u, 4);
L_0C075768: BLKS(0x0C075768u);
	r10 = 0x22u;  /* 0C075768 mov #imm,Rn */
	r10 += r14;  /* 0C07576A add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C07576Eu, 3);  /* 0C07576C mov.w @Rm,Rn */
	r1 -= r13;  /* 0C07576E sub Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C075770 add #imm,Rn */
	r3 |= r1;  /* 0C075772 or Rm,Rn */
	W32(r6, r3); UPD(0x0C075776u, 4);  /* 0C075774 mov.l Rm,@Rn */
	r13 = 0xC22E020u; UPD(0x0C075778u, 1);  /* 0C075776 mov.l @(disp,pc),Rn */
	W32(r8, r12); UPD(0x0C07577Au, 1);  /* 0C075778 mov.l Rm,@Rn */
	r4 = R32(r13); UPD(0x0C07577Cu, 1);  /* 0C07577A mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07577C add #imm,Rn */
	W32(r8, r4); UPD(0x0C075780u, 2);  /* 0C07577E mov.l Rm,@Rn */
	r2 = R32(r6); UPD(0x0C075782u, 1);  /* 0C075780 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075782 add #imm,Rn */
	W32(r8, r2); UPD(0x0C075786u, 2);  /* 0C075784 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C075788u, 1);  /* 0C075786 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C075788 add #imm,Rn */
	r3 |= r7;  /* 0C07578A or Rm,Rn */
	W32(r8, r3); UPD(0x0C07578Eu, 3);  /* 0C07578C mov.l Rm,@Rn */
	r3 = 0xC207510u; UPD(0x0C075790u, 1);  /* 0C07578E mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075790 add #imm,Rn */
	r11 = R32(r3); UPD(0x0C075794u, 2);  /* 0C075792 mov.l @Rm,Rn */
	r9 = 0xC232308u; UPD(0x0C075796u, 1);  /* 0C075794 mov.l @(disp,pc),Rn */
	W32(r8, r11); UPD(0x0C075798u, 1);  /* 0C075796 mov.l Rm,@Rn */
	r10 = R32(r9); UPD(0x0C07579Au, 1);  /* 0C075798 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C07579A add #imm,Rn */
	W32(r8, r10); UPD(0x0C07579Eu, 2);  /* 0C07579C mov.l Rm,@Rn */
	r12 = R32(r13); UPD(0x0C0757A0u, 1);  /* 0C07579E mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0757A0 add #imm,Rn */
	r12 += r7;  /* 0C0757A2 add Rm,Rn */
	r12 += 0x1u;  /* 0C0757A4 add #imm,Rn */
	W32(r8, r12); UPD(0x0C0757A8u, 4);  /* 0C0757A6 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0757A8 exts.w Rm,Rn */
	r0 = R32(r6); UPD(0x0C0757ACu, 2);  /* 0C0757AA mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0757AC add #imm,Rn */
	r0 -= r7;  /* 0C0757AE sub Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0757B0 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0757B4u, 4);  /* 0C0757B2 mov.l Rm,@Rn */
	r1 = R32(r5); UPD(0x0C0757B6u, 1);  /* 0C0757B4 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0757B6 add #imm,Rn */
	{ r1 |= r7; /* slot or Rm,Rn */ UPD(0x0C0751D0u, 4); goto L_0C0751D0; }  /* 0C0757B8 bra */
L_0C0757C0: BLKS(0x0C0757C0u);
	r11 = 0xC2A6940u; UPD(0x0C0757C2u, 1);  /* 0C0757C0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0757C4u, 1);  /* 0C0757C2 mov.w @Rm,Rn */
	r9 += r14;  /* 0C0757C4 add Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0757C8u, 2);  /* 0C0757C6 mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C0757CAu, 1);  /* 0C0757C8 mov.w @Rm,Rn */
	r2 -= r6;  /* 0C0757CA sub Rm,Rn */
	r2 -= r13;  /* 0C0757CC sub Rm,Rn */
	r3 = 0xC232310u; UPD(0x0C0757D0u, 3);  /* 0C0757CE mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C0757D0 sub Rm,Rn */
	{ r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0756C2u, 4); goto L_0C0756C2; }  /* 0C0757D2 bra */
L_0C0757E0: BLKS(0x0C0757E0u);
	r13 = 0xC2A6940u; UPD(0x0C0757E2u, 1);  /* 0C0757E0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C0757E4u, 1);  /* 0C0757E2 mov.w @Rm,Rn */
	r2 += r14;  /* 0C0757E4 add Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C0757E8u, 2);  /* 0C0757E6 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C0757E8 exts.w Rm,Rn */
	r11 = R32(r14 + 0x10u); UPD(0x0C0757ECu, 2);  /* 0C0757EA mov.l @(disp,Rm),Rn */
	r3 += r4;  /* 0C0757EC add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0757F0u, 2);  /* 0C0757EE mov.w @Rm,Rn */
	r11 += r7;  /* 0C0757F0 add Rm,Rn */
	r6 = 0xC232310u; UPD(0x0C0757F4u, 2);  /* 0C0757F2 mov.l @(disp,pc),Rn */
	IF(0x0C0757F4u); r3 <<= 16;  /* 0C0757F4 shll16 Rn */
	{ r1 -= r11; /* slot sub Rm,Rn */ UPD(0x0C075768u, 4); goto L_0C075768; }  /* 0C0757F6 bra */
L_0C075830: BLKS(0x0C075830u);
	r1 = 0x4000u; UPD(0x0C075832u, 1);  /* 0C075830 mov.w @(disp,pc),Rn */
	T = r4 == r1;  /* 0C075832 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = (s32)r4 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C075920u, 4); goto L_0C075920; } goto L_0C075838; }  /* 0C075834 bt/s */
L_0C075838: BLKS(0x0C075838u);
	{ u32 c_ = T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C075880u, 4); goto L_0C075880; } goto L_0C07583C; }  /* 0C075838 bt/s */
L_0C07583C: BLKS(0x0C07583Cu);
	if (!T) { UPD(0x0C07588Eu, 4); goto L_0C07588E; }  /* 0C07583C bf */
L_0C07583E: BLKS(0x0C07583Eu);
	r0 = 0xAu;  /* 0C07583E mov #imm,Rn */
	W32(r8, r12); UPD(0x0C075842u, 2);  /* 0C075840 mov.l Rm,@Rn */
	IF(0x0C075842u); r9 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075844u, 1);  /* 0C075842 mov.w @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C075844 add #imm,Rn */
	r4 = 0xC22E020u; UPD(0x0C075848u, 2);  /* 0C075846 mov.l @(disp,pc),Rn */
	r3 = 0xC2A6940u; UPD(0x0C07584Au, 1);  /* 0C075848 mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C07584Cu, 1);  /* 0C07584A mov.l @Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C07584Eu, 1);  /* 0C07584C mov.w @Rm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C075850u, 1);  /* 0C07584E mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C075852u, 1);  /* 0C075850 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C075852 add Rm,Rn */
	r1 = 0xFFFFu; UPD(0x0C075856u, 2);  /* 0C075854 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C075856 add Rm,Rn */
	W32(r8, r2); UPD(0x0C07585Au, 2);  /* 0C075858 mov.l Rm,@Rn */
	r9 &= r1;  /* 0C07585A and Rm,Rn */
	IF(0x0C07585Cu); r12 <<= 16;  /* 0C07585C shll16 Rn */
	r8 += 0x4u;  /* 0C07585E add #imm,Rn */
	r12 |= r9;  /* 0C075860 or Rm,Rn */
	W32(r8, r12); UPD(0x0C075864u, 5);  /* 0C075862 mov.l Rm,@Rn */
	r7 = 0xC3C4158u; UPD(0x0C075866u, 1);  /* 0C075864 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075866 add #imm,Rn */
	r1 = R32(r7); UPD(0x0C07586Au, 2);  /* 0C075868 mov.l @Rm,Rn */
L_0C07586A: BLKS(0x0C07586Au);
	W32(r8, r1); UPD(0x0C07586Cu, 1);  /* 0C07586A mov.l Rm,@Rn */
	r0 = 0xC207510u; UPD(0x0C07586Eu, 1);  /* 0C07586C mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C07586E add #imm,Rn */
	{ r1 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(0x0C075076u, 4); goto L_0C075076; }  /* 0C075870 bra */
L_0C075880: BLKS(0x0C075880u);
	r5 = 0x8000u; UPD(0x0C075882u, 1);  /* 0C075880 mov.l @(disp,pc),Rn */
	T = r4 == r5;  /* 0C075882 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0758E0u, 4); goto L_0C0758E0; }  /* 0C075884 bt */
L_0C075886: BLKS(0x0C075886u);
	r6 = 0xC000u; UPD(0x0C075888u, 1);  /* 0C075886 mov.l @(disp,pc),Rn */
	T = r4 == r6;  /* 0C075888 cmp/eq Rm,Rn */
	{ u32 c_ = T; r10 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075892u, 4); goto L_0C075892; } UPD(0x0C07588Eu, 1); goto L_0C07588E; }  /* 0C07588A bt/s */
L_0C07588E: BLKS(0x0C07588Eu);
	{ IF(0x0C075890u); ; /* slot nop */ UPD(0x0C074F54u, 3); goto L_0C074F54; }  /* 0C07588E bra */
L_0C075892: BLKS(0x0C075892u);
	r0 = 0x1Eu;  /* 0C075892 mov #imm,Rn */
	IF(0x0C075894u); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075896u, 2);  /* 0C075894 mov.w @(r0,Rm),Rn */
	r5 = 0xC2A6940u; UPD(0x0C075898u, 1);  /* 0C075896 mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C075898 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C07589Cu, 2);  /* 0C07589A mov.w @Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C07589Eu, 1);  /* 0C07589C mov.l @(disp,Rm),Rn */
	IF(0x0C07589Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0758A0u, 1);  /* 0C07589E mov.w @(r0,Rm),Rn */
	r11 -= r6;  /* 0C0758A0 sub Rm,Rn */
	r11 -= r13;  /* 0C0758A2 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C0758A6u, 3);  /* 0C0758A4 mov.l Rm,@Rn */
	r0 = 0x22u;  /* 0C0758A6 mov #imm,Rn */
	r9 = 0xC22E020u; UPD(0x0C0758AAu, 2);  /* 0C0758A8 mov.l @(disp,pc),Rn */
	r4 -= r10;  /* 0C0758AA sub Rm,Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C0758AEu, 2);  /* 0C0758AC mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0758AE add #imm,Rn */
	IF(0x0C0758B0u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0758B2u, 2);  /* 0C0758B0 mov.w @(r0,Rm),Rn */
	r4 -= r2;  /* 0C0758B2 sub Rm,Rn */
	r12 = R32(r9); UPD(0x0C0758B6u, 2);  /* 0C0758B4 mov.l @Rm,Rn */
	r11 -= r7;  /* 0C0758B6 sub Rm,Rn */
	r4 -= r13;  /* 0C0758B8 sub Rm,Rn */
	W32(r8, r12); UPD(0x0C0758BCu, 3);  /* 0C0758BA mov.l Rm,@Rn */
	r11 += 0xFFFFFFFFu;  /* 0C0758BC add #imm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0758BE add #imm,Rn */
	IF(0x0C0758C0u); r11 <<= 16;  /* 0C0758C0 shll16 Rn */
	r3 = r4 & 0xFFFF;  /* 0C0758C2 extu.w Rm,Rn */
	r8 += 0x4u;  /* 0C0758C4 add #imm,Rn */
	r11 |= r3;  /* 0C0758C6 or Rm,Rn */
	W32(r8, r11); UPD(0x0C0758CAu, 7);  /* 0C0758C8 mov.l Rm,@Rn */
	r0 = 0xC3C4158u; UPD(0x0C0758CCu, 1);  /* 0C0758CA mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0758CC add #imm,Rn */
	{ r1 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(0x0C07586Au, 4); goto L_0C07586A; }  /* 0C0758CE bra */
L_0C0758E0: BLKS(0x0C0758E0u);
	W32(r8, r12); UPD(0x0C0758E2u, 1);  /* 0C0758E0 mov.l Rm,@Rn */
	r11 = 0xC22E020u; UPD(0x0C0758E4u, 1);  /* 0C0758E2 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C0758E4 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0758E8u, 2);  /* 0C0758E6 mov.l @Rm,Rn */
	W32(r8, r0); UPD(0x0C0758EAu, 1);  /* 0C0758E8 mov.l Rm,@Rn */
	r1 = 0xC2A6940u; UPD(0x0C0758ECu, 1);  /* 0C0758EA mov.l @(disp,pc),Rn */
	r0 = 0x1Eu;  /* 0C0758EC mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r1); UPD(0x0C0758F0u, 2);  /* 0C0758EE mov.w @Rm,Rn */
	r8 += 0x4u;  /* 0C0758F0 add #imm,Rn */
	IF(0x0C0758F2u); r12 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0758F4u, 2);  /* 0C0758F2 mov.w @(r0,Rm),Rn */
	r9 = R32(r14 + 0xCu); UPD(0x0C0758F6u, 1);  /* 0C0758F4 mov.l @(disp,Rm),Rn */
	r0 = 0xAu;  /* 0C0758F6 mov #imm,Rn */
	r10 -= r9;  /* 0C0758F8 sub Rm,Rn */
	r10 -= r13;  /* 0C0758FA sub Rm,Rn */
	IF(0x0C0758FCu); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0758FEu, 4);  /* 0C0758FC mov.w @(r0,Rm),Rn */
	r10 -= r12;  /* 0C0758FE sub Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C075902u, 2);  /* 0C075900 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C075902 add #imm,Rn */
	r5 = 0xFFFFu; UPD(0x0C075906u, 2);  /* 0C075904 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C075906 add Rm,Rn */
	IF(0x0C075908u); r10 <<= 16;  /* 0C075908 shll16 Rn */
	r7 &= r5;  /* 0C07590A and Rm,Rn */
	r10 |= r7;  /* 0C07590C or Rm,Rn */
	W32(r8, r10); UPD(0x0C075910u, 5);  /* 0C07590E mov.l Rm,@Rn */
	r13 = 0xC3C4158u; UPD(0x0C075912u, 1);  /* 0C075910 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075912 add #imm,Rn */
	{ r1 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(0x0C07586Au, 4); goto L_0C07586A; }  /* 0C075914 bra */
L_0C075920: BLKS(0x0C075920u);
	r0 = 0xAu;  /* 0C075920 mov #imm,Rn */
	W32(r8, r12); UPD(0x0C075924u, 2);  /* 0C075922 mov.l Rm,@Rn */
	IF(0x0C075924u); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075926u, 1);  /* 0C075924 mov.w @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C075926 add #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C07592Au, 2);  /* 0C075928 mov.l @(disp,Rm),Rn */
	r0 = 0x22u;  /* 0C07592A mov #imm,Rn */
	r1 = 0xC22E020u; UPD(0x0C07592Eu, 2);  /* 0C07592C mov.l @(disp,pc),Rn */
	r13 -= r6;  /* 0C07592E sub Rm,Rn */
	r12 = 0xC2A6940u; UPD(0x0C075932u, 2);  /* 0C075930 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x18u); UPD(0x0C075934u, 1);  /* 0C075932 mov.l @(disp,Rm),Rn */
	IF(0x0C075934u); r10 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C075936u, 1);  /* 0C075934 mov.w @(r0,Rm),Rn */
	r13 -= r7;  /* 0C075936 sub Rm,Rn */
	r9 = R32(r1); UPD(0x0C07593Au, 2);  /* 0C075938 mov.l @Rm,Rn */
	r13 -= r10;  /* 0C07593A sub Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C07593Eu, 2);  /* 0C07593C mov.w @Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07593E add #imm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C075942u, 2);  /* 0C075940 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFu; UPD(0x0C075944u, 1);  /* 0C075942 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C075944 add Rm,Rn */
	W32(r8, r9); UPD(0x0C075948u, 2);  /* 0C075946 mov.l Rm,@Rn */
	IF(0x0C075948u); r4 <<= 16;  /* 0C075948 shll16 Rn */
	r13 &= r2;  /* 0C07594A and Rm,Rn */
	r8 += 0x4u;  /* 0C07594C add #imm,Rn */
	r4 |= r13;  /* 0C07594E or Rm,Rn */
	W32(r8, r4); UPD(0x0C075952u, 5);  /* 0C075950 mov.l Rm,@Rn */
	r3 = 0xC3C4158u; UPD(0x0C075954u, 1);  /* 0C075952 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C075954 add #imm,Rn */
	{ r1 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(0x0C07586Au, 4); goto L_0C07586A; }  /* 0C075956 bra */
L_0C075960: BLKS(0x0C075960u);
	r11 = 0xC207518u; UPD(0x0C075962u, 1);  /* 0C075960 mov.l @(disp,pc),Rn */
	r3 = R32(r11); UPD(0x0C075964u, 1);  /* 0C075962 mov.l @Rm,Rn */
	r3 += 0x6u;  /* 0C075964 add #imm,Rn */
	{ W32(r11, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C074F54u, 4); goto L_0C074F54; }  /* 0C075966 bra */
L_0C075970: BLKS(0x0C075970u);
	{ r11 = 0xFFFFFFFAu; /* slot mov #imm,Rn */ UPD(0x0C074CAEu, 3); goto L_0C074CAE; }  /* 0C075970 bra */
}

/* FUN_0c0759a0 */
void blk_f_0C0759A0(sh3_t *c)
{
	LOCALS;
L_0C0759A0: BLKS(0x0C0759A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0759A2u, 1);  /* 0C0759A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0759A4u, 1);  /* 0C0759A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0759A6u, 1);  /* 0C0759A4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0759A8u, 1);  /* 0C0759A6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0759A8 exts.b Rm,Rn */
	IF(0x0C0759AAu); r15 -= 4; W32(r15, PR); UPD(0x0C0759ACu, 2);  /* 0C0759AA sts.l pr,@-Rn */
	T = (r10 & r10) == 0;  /* 0C0759AC tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0759E0u, 4); goto L_0C0759E0; } goto L_0C0759B2; }  /* 0C0759AE bt/s */
L_0C0759B2: BLKS(0x0C0759B2u);
	r9 = 0x0u;  /* 0C0759B2 mov #imm,Rn */
	r8 = 0x0u;  /* 0C0759B4 mov #imm,Rn */
	IF(0x0C0759B6u); ;  /* 0C0759B6 nop */
	UPD(0x0C0759B8u, 4);
L_0C0759B8: BLKS(0x0C0759B8u);
	r3 = 0xC29D1D8u; UPD(0x0C0759BAu, 1);  /* 0C0759B8 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0759BA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0759BEu, 2);  /* 0C0759BC mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0759C0u, 1);  /* 0C0759BE mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0759C0 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0759D2u, 4); goto L_0C0759D2; } goto L_0C0759C6; }  /* 0C0759C2 bt/s */
L_0C0759C6: BLKS(0x0C0759C6u);
	r0 = 0x28Bu; UPD(0x0C0759C8u, 2);  /* 0C0759C6 mov.w @(disp,pc),Rn */
	IF(0x0C0759C8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0759CAu, 1);  /* 0C0759C8 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0759CA extu.b Rm,Rn */
	T = r2 == r10;  /* 0C0759CC cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0759F0u, 5); goto L_0C0759F0; } UPD(0x0C0759D2u, 1); goto L_0C0759D2; }  /* 0C0759CE bt/s */
L_0C0759D2: BLKS(0x0C0759D2u);
	r9 = 0x2A0u; UPD(0x0C0759D4u, 1);  /* 0C0759D2 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0759D4 add #imm,Rn */
	r8 += r9;  /* 0C0759D6 add Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0759D8 exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C0759DA mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C0759DC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0759B8u, 8); goto L_0C0759B8; }  /* 0C0759DE bf */
L_0C0759E0: BLKS(0x0C0759E0u);
	r15 = r14;  /* 0C0759E0 mov Rm,Rn */
	IF(0x0C0759E2u); PR = R32(r15); r15 += 4; UPD(0x0C0759E4u, 2);  /* 0C0759E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0759E6u, 1);  /* 0C0759E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0759E8u, 1);  /* 0C0759E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0759EAu, 1);  /* 0C0759E8 mov.l @Rm+,Rn */
	IF(0x0C0759EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0759EA rts */
L_0C0759F0: BLKS(0x0C0759F0u);
	r7 = 0x28Cu; UPD(0x0C0759F2u, 1);  /* 0C0759F0 mov.w @(disp,pc),Rn */
	r0 = 0x2u;  /* 0C0759F2 mov #imm,Rn */
	r7 += r3;  /* 0C0759F4 add Rm,Rn */
	r7 += 0x1u;  /* 0C0759F6 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C0759FAu, 4);  /* 0C0759F8 mov.b @Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C0759FA extu.b Rm,Rn */
	r3 -= r2;  /* 0C0759FC sub Rm,Rn */
	r3 += 0x1u;  /* 0C0759FE add #imm,Rn */
	T = r3 > r0;  /* 0C075A00 cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075A70u, 7); goto L_0C075A70; } goto L_0C075A06; }  /* 0C075A02 bt/s */
L_0C075A06: BLKS(0x0C075A06u);
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C075A08u, 2);  /* 0C075A06 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C075A08 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075A60u, 4); goto L_0C075A60; } UPD(0x0C075A0Eu, 1); goto L_0C075A0E; }  /* 0C075A0A bf/s */
L_0C075A0E: BLKS(0x0C075A0Eu);
	r3 = 0xC29D1D8u; UPD(0x0C075A10u, 1);  /* 0C075A0E mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C075A10 mov #imm,Rn */
	r3 += r8;  /* 0C075A12 add Rm,Rn */
	r2 = 0x28Bu; UPD(0x0C075A16u, 3);  /* 0C075A14 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C075A16 mov Rm,Rn */
	IF(0x0C075A18u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C075A1Au, 2);  /* 0C075A18 mov.b @(r0,Rm),Rn */
	r4 = 0x28Cu; UPD(0x0C075A1Cu, 1);  /* 0C075A1A mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C075A1C mov #imm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C075A20u, 2);  /* 0C075A1E mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C075A20 add Rm,Rn */
	r4 += 0x1u;  /* 0C075A22 add #imm,Rn */
	IF(0x0C075A24u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C075A24 shld Rm,Rn */
	r7 = 0xC17E12Cu; UPD(0x0C075A28u, 4);  /* 0C075A26 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C075A28 mov #imm,Rn */
	W8(r4, r5); UPD(0x0C075A2Cu, 2);  /* 0C075A2A mov.b Rm,@Rn */
	r0 += r7;  /* 0C075A2C add Rm,Rn */
	r7 = R32(r0); UPD(0x0C075A30u, 2);  /* 0C075A2E mov.l @Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C075A30 add #imm,Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C075A34u, 2);  /* 0C075A32 mov.l @(disp,Rm),Rn */
	r0 = 0xC3C86B0u; UPD(0x0C075A36u, 1);  /* 0C075A34 mov.l @(disp,pc),Rn */
	W32(r0, r6); UPD(0x0C075A38u, 1);  /* 0C075A36 mov.l Rm,@Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C075A3Au, 1);  /* 0C075A38 mov.l @(disp,Rm),Rn */
	IF(0x0C075A3Au); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C075A3A shld Rm,Rn */
	IF(0x0C075A3Cu); r6 = R32(r0 + r7); UPD(0x0C075A3Eu, 2);  /* 0C075A3C mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C075A40u, 1);  /* 0C075A3E mov.l @(disp,Rm),Rn */
	r7 = 0u - r5;  /* 0C075A40 neg Rm,Rn */
	IF(0x0C075A42u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C075A42 shld Rm,Rn */
	IF(0x0C075A44u); r1 = R32(r0 + r6); UPD(0x0C075A46u, 3);  /* 0C075A44 mov.l @(r0,Rm),Rn */
	r7 += 0x14u;  /* 0C075A46 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C075A4Au, 2);  /* 0C075A48 mov.l @(disp,pc),Rn */
	W32(r6, r1); UPD(0x0C075A4Cu, 1);  /* 0C075A4A mov.l Rm,@Rn */
	r2 = 0xC074C30u; UPD(0x0C075A4Eu, 1);  /* 0C075A4C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C075A4E extu.b Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C075A52u, 2);  /* 0C075A50 mov.b @Rm,Rn */
	r5 = R32(r3 + 0x14u); UPD(0x0C075A54u, 1);  /* 0C075A52 mov.l @(disp,Rm),Rn */
	IF(0x0C075A54u); { u32 t_ = r2; PR = 0x0C075A58u; r4 = R32(r3 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C075A58u); }  /* 0C075A54 jsr @Rn */
L_0C075A58: BLKS(0x0C075A58u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0759D2u, 3); goto L_0C0759D2; }  /* 0C075A58 bra */
L_0C075A60: BLKS(0x0C075A60u);
	{ W8(r7, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C075A0Eu, 3); goto L_0C075A0E; }  /* 0C075A60 bra */
L_0C075A70: BLKS(0x0C075A70u);
	{ r1 = 0x40u; /* slot mov #imm,Rn */ UPD(0x0C075A60u, 3); goto L_0C075A60; }  /* 0C075A70 bra */
}

void blk_f_0C075AA0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C075B0C);
L_0C075AA0: BLKS(0x0C075AA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075AA2u, 1);  /* 0C075AA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075AA4u, 1);  /* 0C075AA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075AA6u, 1);  /* 0C075AA4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C075AA6 exts.w Rm,Rn */
	r10 = 0x2A0u; UPD(0x0C075AAAu, 2);  /* 0C075AA8 mov.w @(disp,pc),Rn */
	IF(0x0C075AAAu); MACL = r9 * r10;  /* 0C075AAA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C075AAEu, 3);  /* 0C075AAC mov.l Rm,@-Rn */
	r0 = 0xC29D1D8u; UPD(0x0C075AB0u, 1);  /* 0C075AAE mov.l @(disp,pc),Rn */
	IF(0x0C075AB0u); r8 = MACL;  /* 0C075AB0 sts macl,Rn */
	r1 = 0x288u; UPD(0x0C075AB4u, 2);  /* 0C075AB2 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C075AB4 add Rm,Rn */
	IF(0x0C075AB6u); r15 -= 4; W32(r15, PR); UPD(0x0C075AB8u, 2);  /* 0C075AB6 sts.l pr,@-Rn */
	r1 += r8;  /* 0C075AB8 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C075ABCu, 2);  /* 0C075ABA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C075ABC tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075AD4u, 4); goto L_0C075AD4; } goto L_0C075AC2; }  /* 0C075ABE bt/s */
L_0C075AC2: BLKS(0x0C075AC2u);
	r0 += 0xFFFFFFFFu;  /* 0C075AC2 add #imm,Rn */
	W8(r1, r0); UPD(0x0C075AC6u, 3);  /* 0C075AC4 mov.b Rm,@Rn */
	r4 = 0x2u;  /* 0C075AC6 mov #imm,Rn */
	r0 &= r4;  /* 0C075AC8 and Rm,Rn */
	r3 = 0xC17F4F4u; UPD(0x0C075ACCu, 3);  /* 0C075ACA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C075ACC add Rm,Rn */
	IF(0x0C075ACEu); r2 = R32(r0 + r3); UPD(0x0C075AD0u, 2);  /* 0C075ACE mov.l @(r0,Rm),Rn */
	r0 = 0x29Cu; UPD(0x0C075AD2u, 1);  /* 0C075AD0 mov.w @(disp,pc),Rn */
	IF(0x0C075AD2u); W32(r0 + r8, r2); UPD(0x0C075AD4u, 1);  /* 0C075AD2 mov.l Rm,@(r0,Rn) */
L_0C075AD4: BLKS(0x0C075AD4u);
	r0 = R32(r8 + 0xCu); UPD(0x0C075AD6u, 1);  /* 0C075AD4 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C075AD6 mov Rm,Rn */
	r7 = 0xC073260u; UPD(0x0C075ADAu, 2);  /* 0C075AD8 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C075ADA add #imm,Rn */
	r0 &= 0x3u;  /* 0C075ADC and #imm,r0 */
	IF(0x0C075ADEu); { u32 t_ = r7; PR = 0x0C075AE2u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C073260, 0x0C073260u, 0x0C075AE2u); }  /* 0C075ADE jsr @Rn */
L_0C075AE2: BLKS(0x0C075AE2u);
	r0 = 0xC0734D0u; UPD(0x0C075AE4u, 1);  /* 0C075AE2 mov.l @(disp,pc),Rn */
	IF(0x0C075AE4u); { u32 t_ = r0; PR = 0x0C075AE8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0734D0, 0x0C0734D0u, 0x0C075AE8u); }  /* 0C075AE4 jsr @Rn */
L_0C075AE8: BLKS(0x0C075AE8u);
	r6 = 0x24Eu; UPD(0x0C075AEAu, 1);  /* 0C075AE8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C075AEA mov Rm,Rn */
	IF(0x0C075AECu); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C075AEEu, 2);  /* 0C075AEC mov.w @(r0,Rm),Rn */
	r0 = r5;  /* 0C075AEE mov Rm,Rn */
	r0 &= 0x80u;  /* 0C075AF0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C075AF2 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C075BACu, 6); goto L_0C075BAC; } goto L_0C075AF8; }  /* 0C075AF4 bt/s */
L_0C075AF8: BLKS(0x0C075AF8u);
	r2 = 0xC297498u; UPD(0x0C075AFAu, 2);  /* 0C075AF8 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C075AFCu, 1);  /* 0C075AFA mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C075AFC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075BACu, 4); goto L_0C075BAC; } goto L_0C075B02; }  /* 0C075AFE bf/s */
L_0C075B02: BLKS(0x0C075B02u);
	r5 = 0x26Fu; UPD(0x0C075B04u, 2);  /* 0C075B02 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C075B04 add Rm,Rn */
	r7 = 0xC17F4FCu; UPD(0x0C075B08u, 2);  /* 0C075B06 mov.l @(disp,pc),Rn */
	r3 = 0xC22E028u; UPD(0x0C075B0Au, 1);  /* 0C075B08 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C075B0Cu, 1);  /* 0C075B0A mov.b @Rm,Rn */
L_0C075B0C: BLKS(0x0C075B0Cu);
	SPIN_SAVE(0C075B0C);
	r10 = (u32)(s32)(s8)r2;  /* 0C075B0C exts.b Rm,Rn */
	IF(0x0C075B0Eu); r10 <<= 2;  /* 0C075B0E shll2 Rn */
	r10 += r7;  /* 0C075B10 add Rm,Rn */
	r10 += 0x3u;  /* 0C075B12 add #imm,Rn */
	r2 = (u32)(s32)(s8)RS8(0C075B0C, r10); UPD(0x0C075B16u, 5);  /* 0C075B14 mov.b @Rm,Rn */
	IF(0x0C075B16u); MACL = r9 * r6;  /* 0C075B16 mul.l Rm,Rn */
	r0 = r2;  /* 0C075B18 mov Rm,Rn */
	IF(0x0C075B1Au); r0 <<= 2;  /* 0C075B1A shll2 Rn */
	IF(0x0C075B1Cu); r8 = RS32(0C075B0C, r0 + r3); UPD(0x0C075B1Eu, 5);  /* 0C075B1C mov.l @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C075B1E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C075B22u); r4 = MACL; /* slot sts macl,Rn */ if (c_) { SPIN_FFD(0C075B0C, 14); UPD(0x0C075B0Cu, 4); goto L_0C075B0C; } goto L_0C075B24; }  /* 0C075B20 bt/s */
L_0C075B24: BLKS(0x0C075B24u);
	r6 = 0x90u; UPD(0x0C075B26u, 2);  /* 0C075B24 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C075B26 mov #imm,Rn */
	IF(0x0C075B28u); MACL = r9 * r6;  /* 0C075B28 mul.l Rm,Rn */
	W8(r5, r2); UPD(0x0C075B2Cu, 4);  /* 0C075B2A mov.b Rm,@Rn */
	r10 = 0xC29D1D8u; UPD(0x0C075B2Eu, 1);  /* 0C075B2C mov.l @(disp,pc),Rn */
	IF(0x0C075B2Eu); r3 = MACL;  /* 0C075B2E sts macl,Rn */
	r6 = 0xC29D444u; UPD(0x0C075B32u, 2);  /* 0C075B30 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C075B32 add Rm,Rn */
	r0 = 0x26Fu; UPD(0x0C075B36u, 2);  /* 0C075B34 mov.w @(disp,pc),Rn */
	r6 += r4;  /* 0C075B36 add Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C075B3Au, 2);  /* 0C075B38 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C075B3A mov #imm,Rn */
	IF(0x0C075B3Cu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C075B3Eu, 2);  /* 0C075B3C mov.b @(r0,Rm),Rn */
	r3 += r2;  /* 0C075B3E add Rm,Rn */
	r2 = r4;  /* 0C075B40 mov Rm,Rn */
	r8 = 0x2A0u; UPD(0x0C075B44u, 3);  /* 0C075B42 mov.w @(disp,pc),Rn */
	r2 += r2;  /* 0C075B44 add Rm,Rn */
	r0 = r4;  /* 0C075B46 mov Rm,Rn */
	r2 |= r9;  /* 0C075B48 or Rm,Rn */
	r0 += r0;  /* 0C075B4A add Rm,Rn */
	UPD(0x0C075B4Cu, 4);
L_0C075B4C: BLKS(0x0C075B4Cu);
	W32(r3 + 0x10u, r2); UPD(0x0C075B4Eu, 1);  /* 0C075B4C mov.l Rm,@(disp,Rn) */
	IF(0x0C075B4Eu); MACL = r9 * r8;  /* 0C075B4E mul.l Rm,Rn */
	W32(r3 + 0x4u, r2); UPD(0x0C075B52u, 3);  /* 0C075B50 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C075B52 add #imm,Rn */
	W8(r6, r0); UPD(0x0C075B56u, 2);  /* 0C075B54 mov.b Rm,@Rn */
	r10 = 0x2u;  /* 0C075B56 mov #imm,Rn */
	W32(r3 + 0xCu, r7); UPD(0x0C075B5Au, 2);  /* 0C075B58 mov.l Rm,@(disp,Rn) */
	IF(0x0C075B5Au); r4 = MACL;  /* 0C075B5A sts macl,Rn */
	W32(r3 + 0x8u, r7); UPD(0x0C075B5Eu, 2);  /* 0C075B5C mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C075B5E add #imm,Rn */
	r3 += 0x2Bu;  /* 0C075B60 add #imm,Rn */
	W8(r3, r7); UPD(0x0C075B64u, 3);  /* 0C075B62 mov.b Rm,@Rn */
	T = (s32)r5 > (s32)r10;  /* 0C075B64 cmp/gt Rm,Rn */
	{ u32 v_ = r7; r3 -= 1; W8(r3, v_); } UPD(0x0C075B68u, 2);  /* 0C075B66 mov.b Rm,@-Rn */
	{ u32 c_ = !T; r3 += 0x6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075B4Cu, 3); goto L_0C075B4C; } goto L_0C075B6C; }  /* 0C075B68 bf/s */
L_0C075B6C: BLKS(0x0C075B6Cu);
	r0 = 0xC29D1D8u; UPD(0x0C075B6Eu, 2);  /* 0C075B6C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C075B6E mov #imm,Rn */
	r3 = 0x26Fu; UPD(0x0C075B72u, 2);  /* 0C075B70 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C075B72 add Rm,Rn */
	IF(0x0C075B74u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075B76u, 2);  /* 0C075B74 mov.b @(r0,Rm),Rn */
	r6 = 0x2u;  /* 0C075B76 mov #imm,Rn */
	r3 = 0x269u; UPD(0x0C075B7Au, 2);  /* 0C075B78 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C075B7A add Rm,Rn */
	r0 = 0xCu;  /* 0C075B7C mov #imm,Rn */
	IF(0x0C075B7Eu); MACL = r4 * r0;  /* 0C075B7E mul.l Rm,Rn */
	r8 = 0xC17F51Bu; UPD(0x0C075B82u, 5);  /* 0C075B80 mov.l @(disp,pc),Rn */
	r5 = 0x2A0u; UPD(0x0C075B84u, 1);  /* 0C075B82 mov.w @(disp,pc),Rn */
	IF(0x0C075B84u); r2 = MACL;  /* 0C075B84 sts macl,Rn */
	r2 += r8;  /* 0C075B86 add Rm,Rn */
	UPD(0x0C075B88u, 2);
L_0C075B88: BLKS(0x0C075B88u);
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C075B8Au, 1);  /* 0C075B88 mov.b @Rm,Rn */
	IF(0x0C075B8Au); MACL = r9 * r5;  /* 0C075B8A mul.l Rm,Rn */
	W8(r3, r10); UPD(0x0C075B8Eu, 3);  /* 0C075B8C mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C075B8E add #imm,Rn */
	IF(0x0C075B90u); r8 = MACL;  /* 0C075B90 sts macl,Rn */
	r2 += 0x4u;  /* 0C075B92 add #imm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C075B94 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075B88u, 7); goto L_0C075B88; } goto L_0C075B9A; }  /* 0C075B96 bf/s */
L_0C075B9A: BLKS(0x0C075B9Au);
	r2 = 0xC0C22E0u; UPD(0x0C075B9Cu, 2);  /* 0C075B9A mov.l @(disp,pc),Rn */
	r5 = 0x40u;  /* 0C075B9C mov #imm,Rn */
	IF(0x0C075B9Eu); { u32 t_ = r2; PR = 0x0C075BA2u; r4 = 0x4Au; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C075BA2u); }  /* 0C075B9E jsr @Rn */
L_0C075BA2: BLKS(0x0C075BA2u);
	r5 = 0xC29D1D8u; UPD(0x0C075BA4u, 1);  /* 0C075BA2 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C075BA4 mov #imm,Rn */
	r0 = 0x272u; UPD(0x0C075BA8u, 2);  /* 0C075BA6 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C075BA8 add Rm,Rn */
	IF(0x0C075BAAu); W8(r0 + r5, r7); UPD(0x0C075BACu, 2);  /* 0C075BAA mov.b Rm,@(r0,Rn) */
L_0C075BAC: BLKS(0x0C075BACu);
	r6 = 0xC073600u; UPD(0x0C075BAEu, 1);  /* 0C075BAC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C075BAE mov Rm,Rn */
	r15 = r14;  /* 0C075BB0 mov Rm,Rn */
	IF(0x0C075BB2u); PR = R32(r15); r15 += 4; UPD(0x0C075BB4u, 3);  /* 0C075BB2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075BB6u, 1);  /* 0C075BB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075BB8u, 1);  /* 0C075BB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075BBAu, 1);  /* 0C075BB8 mov.l @Rm+,Rn */
	IF(0x0C075BBAu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C073600u: TAIL(blk_f_0C073600); default: JUMPD(tv_); } }  /* 0C075BBA jmp @Rn */
}

/* FUN_0c075c00 */
void blk_f_0C075C00(sh3_t *c)
{
	LOCALS;
L_0C075C00: BLKS(0x0C075C00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075C02u, 1);  /* 0C075C00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075C04u, 1);  /* 0C075C02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075C06u, 1);  /* 0C075C04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C075C08u, 1);  /* 0C075C06 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C075C0Au, 1);  /* 0C075C08 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C075C0A exts.w Rm,Rn */
	r9 = 0x2A0u; UPD(0x0C075C0Eu, 2);  /* 0C075C0C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C075C10u, 1);  /* 0C075C0E mov.l Rm,@-Rn */
	IF(0x0C075C10u); MACL = r11 * r9;  /* 0C075C10 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C075C14u, 3);  /* 0C075C12 mov.l Rm,@-Rn */
	r10 = 0xC29D1D8u; UPD(0x0C075C16u, 1);  /* 0C075C14 mov.l @(disp,pc),Rn */
	IF(0x0C075C16u); r0 = MACL;  /* 0C075C16 sts macl,Rn */
	IF(0x0C075C18u); r15 -= 4; W32(r15, PR); UPD(0x0C075C1Au, 2);  /* 0C075C18 sts.l pr,@-Rn */
	r0 += r10;  /* 0C075C1A add Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C075C1Eu, 2);  /* 0C075C1C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075C1E add #imm,Rn */
	r13 = R32(r0 + 0x14u); UPD(0x0C075C22u, 2);  /* 0C075C20 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C075C22 mov Rm,Rn */
	r0 = 0x173FFFFu; UPD(0x0C075C26u, 2);  /* 0C075C24 mov.l @(disp,pc),Rn */
	T = (s32)r13 > (s32)r0;  /* 0C075C26 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C075C2Eu, 4); goto L_0C075C2E; } UPD(0x0C075C2Cu, 1); goto L_0C075C2C; }  /* 0C075C28 bt/s */
L_0C075C2C: BLKS(0x0C075C2Cu);
	r13 = 0x1740000u; UPD(0x0C075C2Eu, 1);  /* 0C075C2C mov.l @(disp,pc),Rn */
L_0C075C2E: BLKS(0x0C075C2Eu);
	r1 = 0x28C0000u; UPD(0x0C075C30u, 1);  /* 0C075C2E mov.l @(disp,pc),Rn */
	T = (s32)r13 > (s32)r1;  /* 0C075C30 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C075C36u, 4); goto L_0C075C36; }  /* 0C075C32 bf */
L_0C075C34: BLKS(0x0C075C34u);
	r13 = r1;  /* 0C075C34 mov Rm,Rn */
	UPD(0x0C075C36u, 1);
L_0C075C36: BLKS(0x0C075C36u);
	r12 = 0xC062780u; UPD(0x0C075C38u, 1);  /* 0C075C36 mov.l @(disp,pc),Rn */
	r4 = 0x20000u; UPD(0x0C075C3Au, 1);  /* 0C075C38 mov.l @(disp,pc),Rn */
	IF(0x0C075C3Au); { u32 t_ = r12; PR = 0x0C075C3Eu; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075C3Eu); }  /* 0C075C3A jsr @Rn */
L_0C075C3E: BLKS(0x0C075C3Eu);
	r5 = 0x58000u; UPD(0x0C075C40u, 1);  /* 0C075C3E mov.l @(disp,pc),Rn */
	r4 = 0x180u; UPD(0x0C075C42u, 1);  /* 0C075C40 mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C075C42 add Rm,Rn */
	IF(0x0C075C44u); { u32 t_ = r12; PR = 0x0C075C48u; W32(r15, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075C48u); }  /* 0C075C44 jsr @Rn */
L_0C075C48: BLKS(0x0C075C48u);
	r4 = 0xFFFFFF40u; UPD(0x0C075C4Au, 1);  /* 0C075C48 mov.w @(disp,pc),Rn */
	r6 = r13;  /* 0C075C4A mov Rm,Rn */
	r3 = 0xC07CD80u; UPD(0x0C075C4Eu, 2);  /* 0C075C4C mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C075C4E add Rm,Rn */
	IF(0x0C075C50u); r0 <<= 8;  /* 0C075C50 shll8 Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C075C54u, 3);  /* 0C075C52 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C075C54 mov #imm,Rn */
	r5 = R32(r14); UPD(0x0C075C58u, 2);  /* 0C075C56 mov.l @Rm,Rn */
	IF(0x0C075C58u); { u32 t_ = r3; PR = 0x0C075C5Cu; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C075C5Cu); }  /* 0C075C58 jsr @Rn */
L_0C075C5C: BLKS(0x0C075C5Cu);
	r0 = r11;  /* 0C075C5C mov Rm,Rn */
	r0 ^= 0x1u;  /* 0C075C5E xor #imm,r0 */
	IF(0x0C075C60u); MACL = r0 * r9;  /* 0C075C60 mul.l Rm,Rn */
	r12 = 0x0u;  /* 0C075C62 mov #imm,Rn */
	IF(0x0C075C64u); r0 = MACL;  /* 0C075C64 sts macl,Rn */
	IF(0x0C075C66u); r2 = R32(r0 + r10); UPD(0x0C075C68u, 7);  /* 0C075C66 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C075C68 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075CD8u, 4); goto L_0C075CD8; } goto L_0C075C6E; }  /* 0C075C6A bf/s */
L_0C075C6E: BLKS(0x0C075C6Eu);
	r9 = 0x0u;  /* 0C075C6E mov #imm,Rn */
	r10 = 0x0u;  /* 0C075C70 mov #imm,Rn */
	IF(0x0C075C72u); ;  /* 0C075C72 nop */
	UPD(0x0C075C74u, 4);
L_0C075C74: BLKS(0x0C075C74u);
	r0 = r9;  /* 0C075C74 mov Rm,Rn */
	r7 = 0xC22E028u; UPD(0x0C075C78u, 2);  /* 0C075C76 mov.l @(disp,pc),Rn */
	IF(0x0C075C78u); r0 <<= 2;  /* 0C075C78 shll2 Rn */
	IF(0x0C075C7Au); r6 = R32(r0 + r7); UPD(0x0C075C7Cu, 2);  /* 0C075C7A mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C075C7C tst Rm,Rn */
	{ u32 c_ = T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075CCCu, 4); goto L_0C075CCC; } goto L_0C075C82; }  /* 0C075C7E bt/s */
L_0C075C82: BLKS(0x0C075C82u);
	r2 = 0x2A0u; UPD(0x0C075C84u, 2);  /* 0C075C82 mov.w @(disp,pc),Rn */
	IF(0x0C075C84u); MACL = r11 * r2;  /* 0C075C84 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C075C88u, 3);  /* 0C075C86 mov.l @(disp,pc),Rn */
	IF(0x0C075C88u); r0 = MACL;  /* 0C075C88 sts macl,Rn */
	r1 = 0x26Cu; UPD(0x0C075C8Cu, 2);  /* 0C075C8A mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C075C8C add Rm,Rn */
	r0 += r1;  /* 0C075C8E add Rm,Rn */
	r0 += 0x3u;  /* 0C075C90 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C075C94u, 4);  /* 0C075C92 mov.b @Rm,Rn */
	T = r8 == r9;  /* 0C075C94 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075CCCu, 4); goto L_0C075CCC; } goto L_0C075C9A; }  /* 0C075C96 bt/s */
L_0C075C9A: BLKS(0x0C075C9Au);
	r7 = 0xC062780u; UPD(0x0C075C9Cu, 2);  /* 0C075C9A mov.l @(disp,pc),Rn */
	r4 = 0x20000u; UPD(0x0C075C9Eu, 1);  /* 0C075C9C mov.l @(disp,pc),Rn */
	IF(0x0C075C9Eu); { u32 t_ = r7; PR = 0x0C075CA2u; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075CA2u); }  /* 0C075C9E jsr @Rn */
L_0C075CA2: BLKS(0x0C075CA2u);
	r5 = 0xC062780u; UPD(0x0C075CA4u, 1);  /* 0C075CA2 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C075CA4 add #imm,Rn */
	r6 = 0x58000u; UPD(0x0C075CA8u, 2);  /* 0C075CA6 mov.l @(disp,pc),Rn */
	r4 = 0x180u; UPD(0x0C075CAAu, 1);  /* 0C075CA8 mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C075CAA add Rm,Rn */
	IF(0x0C075CACu); { u32 t_ = r5; PR = 0x0C075CB0u; W32(r15, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075CB0u); }  /* 0C075CAC jsr @Rn */
L_0C075CB0: BLKS(0x0C075CB0u);
	r4 = 0xFFFFFF40u; UPD(0x0C075CB2u, 1);  /* 0C075CB0 mov.w @(disp,pc),Rn */
	r6 = r13;  /* 0C075CB2 mov Rm,Rn */
	r0 += r4;  /* 0C075CB4 add Rm,Rn */
	IF(0x0C075CB6u); r0 <<= 8;  /* 0C075CB6 shll8 Rn */
	r8 = 0xC17F56Cu; UPD(0x0C075CBAu, 4);  /* 0C075CB8 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C075CBA mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C075CBEu, 2);  /* 0C075CBC mov.l Rm,@(disp,Rn) */
	r8 += r10;  /* 0C075CBE add Rm,Rn */
	r4 = R32(r8); UPD(0x0C075CC2u, 2);  /* 0C075CC0 mov.l @Rm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C075CC4u, 1);  /* 0C075CC2 mov.l @(disp,pc),Rn */
	IF(0x0C075CC4u); { u32 t_ = r8; PR = 0x0C075CC8u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C075CC8u); }  /* 0C075CC4 jsr @Rn */
L_0C075CC8: BLKS(0x0C075CC8u);
	r15 += 0x8u;  /* 0C075CC8 add #imm,Rn */
	r3 = r9;  /* 0C075CCA mov Rm,Rn */
	UPD(0x0C075CCCu, 2);
L_0C075CCC: BLKS(0x0C075CCCu);
	r3 += 0x1u;  /* 0C075CCC add #imm,Rn */
	r9 = (u32)(s32)(s8)r3;  /* 0C075CCE exts.b Rm,Rn */
	r0 = 0x6u;  /* 0C075CD0 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C075CD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075C74u, 7); goto L_0C075C74; } UPD(0x0C075CD8u, 1); goto L_0C075CD8; }  /* 0C075CD4 bf/s */
L_0C075CD8: BLKS(0x0C075CD8u);
	T = (r12 & r12) == 0;  /* 0C075CD8 tst Rm,Rn */
	if (T) { UPD(0x0C075D60u, 4); goto L_0C075D60; }  /* 0C075CDA bt */
L_0C075CDC: BLKS(0x0C075CDCu);
	r5 = 0x2A0u; UPD(0x0C075CDEu, 1);  /* 0C075CDC mov.w @(disp,pc),Rn */
	IF(0x0C075CDEu); MACL = r11 * r5;  /* 0C075CDE mul.l Rm,Rn */
	r8 = 0xC29D1D8u; UPD(0x0C075CE2u, 3);  /* 0C075CE0 mov.l @(disp,pc),Rn */
	IF(0x0C075CE2u); r4 = MACL;  /* 0C075CE2 sts macl,Rn */
	r0 = 0x25Au; UPD(0x0C075CE6u, 2);  /* 0C075CE4 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C075CE6 add Rm,Rn */
	IF(0x0C075CE8u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C075CEAu, 2);  /* 0C075CE8 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C075CEA tst Rm,Rn */
	if (T) { UPD(0x0C075D10u, 4); goto L_0C075D10; }  /* 0C075CEC bt */
L_0C075CEE: BLKS(0x0C075CEEu);
	r14 += 0x4u;  /* 0C075CEE add #imm,Rn */
	UPD(0x0C075CF0u, 1);
L_0C075CF0: BLKS(0x0C075CF0u);
	r15 = r14;  /* 0C075CF0 mov Rm,Rn */
	IF(0x0C075CF2u); PR = R32(r15); r15 += 4; UPD(0x0C075CF4u, 2);  /* 0C075CF2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075CF6u, 1);  /* 0C075CF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075CF8u, 1);  /* 0C075CF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075CFAu, 1);  /* 0C075CF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075CFCu, 1);  /* 0C075CFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075CFEu, 1);  /* 0C075CFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075D00u, 1);  /* 0C075CFE mov.l @Rm+,Rn */
	IF(0x0C075D00u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C075D00 rts */
L_0C075D10: BLKS(0x0C075D10u);
	r8 = 0xC062780u; UPD(0x0C075D12u, 1);  /* 0C075D10 mov.l @(disp,pc),Rn */
	r11 = 0x58000u; UPD(0x0C075D14u, 1);  /* 0C075D12 mov.l @(disp,pc),Rn */
	r4 = 0x20000u; UPD(0x0C075D16u, 1);  /* 0C075D14 mov.l @(disp,pc),Rn */
	IF(0x0C075D16u); { u32 t_ = r8; PR = 0x0C075D1Au; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D1Au); }  /* 0C075D16 jsr @Rn */
L_0C075D1A: BLKS(0x0C075D1Au);
	r10 = 0x180u; UPD(0x0C075D1Cu, 1);  /* 0C075D1A mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C075D1C add Rm,Rn */
	r9 = 0xFFFFFF40u; UPD(0x0C075D20u, 2);  /* 0C075D1E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C075D20 mov Rm,Rn */
	IF(0x0C075D22u); { u32 t_ = r8; PR = 0x0C075D26u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D26u); }  /* 0C075D22 jsr @Rn */
L_0C075D26: BLKS(0x0C075D26u);
	r12 = 0xC07CD80u; UPD(0x0C075D28u, 1);  /* 0C075D26 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C075D28 add Rm,Rn */
	IF(0x0C075D2Au); r0 <<= 8;  /* 0C075D2A shll8 Rn */
	r5 = R32(r14); UPD(0x0C075D2Eu, 3);  /* 0C075D2C mov.l @Rm,Rn */
	r6 = r13;  /* 0C075D2E mov Rm,Rn */
	r7 = 0x14u;  /* 0C075D30 mov #imm,Rn */
	r4 = 0x4u;  /* 0C075D32 mov #imm,Rn */
	IF(0x0C075D34u); { u32 t_ = r12; PR = 0x0C075D38u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C075D38u); }  /* 0C075D34 jsr @Rn */
L_0C075D38: BLKS(0x0C075D38u);
	r4 = 0x20000u; UPD(0x0C075D3Au, 1);  /* 0C075D38 mov.l @(disp,pc),Rn */
	IF(0x0C075D3Au); { u32 t_ = r8; PR = 0x0C075D3Eu; IF(0x0C075D3Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D3Eu); }  /* 0C075D3A jsr @Rn */
L_0C075D3E: BLKS(0x0C075D3Eu);
	r0 += r11;  /* 0C075D3E add Rm,Rn */
	r4 = r10;  /* 0C075D40 mov Rm,Rn */
	IF(0x0C075D42u); { u32 t_ = r8; PR = 0x0C075D46u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D46u); }  /* 0C075D42 jsr @Rn */
L_0C075D46: BLKS(0x0C075D46u);
	r0 += r9;  /* 0C075D46 add Rm,Rn */
	IF(0x0C075D48u); r0 <<= 8;  /* 0C075D48 shll8 Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C075D4Cu, 3);  /* 0C075D4A mov.l Rm,@(disp,Rn) */
	r4 = 0x5u;  /* 0C075D4C mov #imm,Rn */
	r5 = R32(r14); UPD(0x0C075D50u, 2);  /* 0C075D4E mov.l @Rm,Rn */
	r6 = r13;  /* 0C075D50 mov Rm,Rn */
	IF(0x0C075D52u); { u32 t_ = r12; PR = 0x0C075D56u; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C075D56u); }  /* 0C075D52 jsr @Rn */
L_0C075D56: BLKS(0x0C075D56u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C075CF0u, 3); goto L_0C075CF0; }  /* 0C075D56 bra */
L_0C075D60: BLKS(0x0C075D60u);
	r12 = 0xC062780u; UPD(0x0C075D62u, 1);  /* 0C075D60 mov.l @(disp,pc),Rn */
	r4 = 0x20000u; UPD(0x0C075D64u, 1);  /* 0C075D62 mov.l @(disp,pc),Rn */
	IF(0x0C075D64u); { u32 t_ = r12; PR = 0x0C075D68u; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D68u); }  /* 0C075D64 jsr @Rn */
L_0C075D68: BLKS(0x0C075D68u);
	r2 = 0x58000u; UPD(0x0C075D6Au, 1);  /* 0C075D68 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFF40u; UPD(0x0C075D6Cu, 1);  /* 0C075D6A mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C075D6C add Rm,Rn */
	r4 = 0x180u; UPD(0x0C075D70u, 2);  /* 0C075D6E mov.w @(disp,pc),Rn */
	IF(0x0C075D70u); { u32 t_ = r12; PR = 0x0C075D74u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C075D74u); }  /* 0C075D70 jsr @Rn */
L_0C075D74: BLKS(0x0C075D74u);
	r0 += r10;  /* 0C075D74 add Rm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C075D78u, 2);  /* 0C075D76 mov.l @(disp,pc),Rn */
	IF(0x0C075D78u); r0 <<= 8;  /* 0C075D78 shll8 Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C075D7Cu, 2);  /* 0C075D7A mov.l Rm,@(disp,Rn) */
	r4 = 0xDu;  /* 0C075D7C mov #imm,Rn */
	r5 = R32(r14); UPD(0x0C075D80u, 2);  /* 0C075D7E mov.l @Rm,Rn */
	r6 = r13;  /* 0C075D80 mov Rm,Rn */
	IF(0x0C075D82u); { u32 t_ = r9; PR = 0x0C075D86u; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C075D86u); }  /* 0C075D82 jsr @Rn */
L_0C075D86: BLKS(0x0C075D86u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C075CDCu, 3); goto L_0C075CDC; }  /* 0C075D86 bra */
}

/* FUN_0c075dc0 */
void blk_f_0C075DC0(sh3_t *c)
{
	LOCALS;
L_0C075DC0: BLKS(0x0C075DC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075DC2u, 1);  /* 0C075DC0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C075DC2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075DC6u, 2);  /* 0C075DC4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075DC8u, 1);  /* 0C075DC6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C075DCAu, 1);  /* 0C075DC8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C075DCCu, 1);  /* 0C075DCA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C075DCEu, 1);  /* 0C075DCC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C075DD0u, 1);  /* 0C075DCE mov.l Rm,@-Rn */
	IF(0x0C075DD0u); r15 -= 4; W32(r15, PR); UPD(0x0C075DD2u, 1);  /* 0C075DD0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C075DD2 add #imm,Rn */
	r14 = r15;  /* 0C075DD4 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C075DD8u, 3);  /* 0C075DD6 mov.l Rm,@Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C075DDAu, 1);  /* 0C075DD8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r1); UPD(0x0C075DDCu, 1);  /* 0C075DDA mov.l Rm,@(disp,Rn) */
L_0C075DDC: BLKS(0x0C075DDCu);
	r0 = R32(r14); UPD(0x0C075DDEu, 1);  /* 0C075DDC mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C075DDE mov #imm,Rn */
	r0 += r0;  /* 0C075DE0 add Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C075DE4u, 3);  /* 0C075DE2 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C075DE4 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C075DE8u, 2);  /* 0C075DE6 mov.l @(disp,Rm),Rn */
	r3 = 0xC28EDAAu; UPD(0x0C075DEAu, 1);  /* 0C075DE8 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C075DEA mov Rm,Rn */
	r1 = 0xC28F612u; UPD(0x0C075DEEu, 2);  /* 0C075DEC mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C075DEE add Rm,Rn */
	r8 = 0xC2A6D9Cu; UPD(0x0C075DF2u, 2);  /* 0C075DF0 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C075DF4u, 1);  /* 0C075DF2 mov.l @(disp,Rm),Rn */
	IF(0x0C075DF4u); W16(r0 + r1, r4); UPD(0x0C075DF6u, 1);  /* 0C075DF4 mov.w Rm,@(r0,Rn) */
	r8 += r2;  /* 0C075DF6 add Rm,Rn */
	IF(0x0C075DF8u); W16(r0 + r3, r4); UPD(0x0C075DFAu, 2);  /* 0C075DF8 mov.w Rm,@(r0,Rn) */
	IF(0x0C075DFAu); ;  /* 0C075DFA nop */
	UPD(0x0C075DFCu, 1);
L_0C075DFC: BLKS(0x0C075DFCu);
	r5 = R32(r8); UPD(0x0C075DFEu, 1);  /* 0C075DFC mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C075DFE tst Rm,Rn */
	{ u32 c_ = T; r3 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075E08u, 4); goto L_0C075E08; } goto L_0C075E04; }  /* 0C075E00 bt/s */
L_0C075E04: BLKS(0x0C075E04u);
	{ r0 = R32(r8 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075F20u, 4); goto L_0C075F20; }  /* 0C075E04 bra */
L_0C075E08: BLKS(0x0C075E08u);
	r3 += 0x1u;  /* 0C075E08 add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C075E0A exts.w Rm,Rn */
	r13 = 0x1Fu;  /* 0C075E0C mov #imm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C075E0E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075DFCu, 7); goto L_0C075DFC; } goto L_0C075E14; }  /* 0C075E10 bf/s */
L_0C075E14: BLKS(0x0C075E14u);
	r7 = 0x0u;  /* 0C075E14 mov #imm,Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C075E18u, 3);  /* 0C075E16 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C075E1Au, 1);  /* 0C075E18 mov.l Rm,@(disp,Rn) */
	r12 = R32(r14 + 0x8u); UPD(0x0C075E1Cu, 1);  /* 0C075E1A mov.l @(disp,Rm),Rn */
L_0C075E1C: BLKS(0x0C075E1Cu);
	r11 = 0x0u;  /* 0C075E1C mov #imm,Rn */
	r9 = r12;  /* 0C075E1E mov Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C075E22u, 3);  /* 0C075E20 mov.l @(disp,pc),Rn */
	r9 += r13;  /* 0C075E22 add Rm,Rn */
	r9 += r8;  /* 0C075E24 add Rm,Rn */
	r10 = 0x0u;  /* 0C075E26 mov #imm,Rn */
	UPD(0x0C075E28u, 3);
L_0C075E28: BLKS(0x0C075E28u);
	r8 = r13;  /* 0C075E28 mov Rm,Rn */
	r8 += r12;  /* 0C075E2A add Rm,Rn */
	r1 = 0xC2380D0u; UPD(0x0C075E2Eu, 3);  /* 0C075E2C mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C075E2E add Rm,Rn */
	r8 += r1;  /* 0C075E30 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C075E34u, 3);  /* 0C075E32 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C075E34 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075EA0u, 4); goto L_0C075EA0; } UPD(0x0C075E3Au, 1); goto L_0C075E3A; }  /* 0C075E36 bf/s */
L_0C075E3A: BLKS(0x0C075E3Au);
	r6 = r11;  /* 0C075E3A mov Rm,Rn */
	UPD(0x0C075E3Cu, 1);
L_0C075E3C: BLKS(0x0C075E3Cu);
	r6 += 0x1u;  /* 0C075E3C add #imm,Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C075E3E exts.w Rm,Rn */
	r8 = 0xFu;  /* 0C075E40 mov #imm,Rn */
	r9 += 0x34u;  /* 0C075E42 add #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C075E44 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075E28u, 8); goto L_0C075E28; } goto L_0C075E4A; }  /* 0C075E46 bf/s */
L_0C075E4A: BLKS(0x0C075E4Au);
	r11 = r7;  /* 0C075E4A mov Rm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C075E4Eu, 3);  /* 0C075E4C mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C075E4E add #imm,Rn */
	r10 = 0x340u; UPD(0x0C075E52u, 2);  /* 0C075E50 mov.w @(disp,pc),Rn */
	r9 = 0x2u;  /* 0C075E52 mov #imm,Rn */
	r7 += r10;  /* 0C075E54 add Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C075E58u, 3);  /* 0C075E56 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)r11;  /* 0C075E58 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r9;  /* 0C075E5A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075E1Cu, 5); goto L_0C075E1C; } UPD(0x0C075E60u, 1); goto L_0C075E60; }  /* 0C075E5C bf/s */
L_0C075E60: BLKS(0x0C075E60u);
	r4 = R32(r14); UPD(0x0C075E62u, 1);  /* 0C075E60 mov.l @Rm,Rn */
	r12 = 0x1u;  /* 0C075E62 mov #imm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C075E66u, 2);  /* 0C075E64 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C075E66 add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C075E6Au, 2);  /* 0C075E68 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C075E6A exts.w Rm,Rn */
	r2 = 0x9C0u; UPD(0x0C075E6Eu, 2);  /* 0C075E6C mov.w @(disp,pc),Rn */
	T = (s32)r13 > (s32)r12;  /* 0C075E6E cmp/gt Rm,Rn */
	r3 = 0x680u; UPD(0x0C075E72u, 2);  /* 0C075E70 mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C075E72 add Rm,Rn */
	r0 += r3;  /* 0C075E74 add Rm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C075E78u, 3);  /* 0C075E76 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C075E7Au, 1);  /* 0C075E78 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14, r13); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C075DDCu, 3); goto L_0C075DDC; } UPD(0x0C075E7Eu, 1); goto L_0C075E7E; }  /* 0C075E7A bf/s */
L_0C075E7E: BLKS(0x0C075E7Eu);
	r14 += 0x18u;  /* 0C075E7E add #imm,Rn */
	r15 = r14;  /* 0C075E80 mov Rm,Rn */
	IF(0x0C075E82u); PR = R32(r15); r15 += 4; UPD(0x0C075E84u, 3);  /* 0C075E82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075E86u, 1);  /* 0C075E84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075E88u, 1);  /* 0C075E86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075E8Au, 1);  /* 0C075E88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075E8Cu, 1);  /* 0C075E8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075E8Eu, 1);  /* 0C075E8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075E90u, 1);  /* 0C075E8E mov.l @Rm+,Rn */
	IF(0x0C075E90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C075E90 rts */
L_0C075EA0: BLKS(0x0C075EA0u);
	r5 = r7;  /* 0C075EA0 mov Rm,Rn */
	r4 = 0xC28F612u; UPD(0x0C075EA4u, 2);  /* 0C075EA2 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C075EA4 mov Rm,Rn */
	r4 += r1;  /* 0C075EA6 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C075EAAu, 3);  /* 0C075EA8 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C075EAA add #imm,Rn */
	W16(r4, r0); UPD(0x0C075EAEu, 2);  /* 0C075EAC mov.w Rm,@Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C075EB0u, 1);  /* 0C075EAE mov.l @(disp,Rm),Rn */
	r0 = 0xC17F5B0u; UPD(0x0C075EB2u, 1);  /* 0C075EB0 mov.l @(disp,pc),Rn */
	IF(0x0C075EB2u); r2 <<= 2;  /* 0C075EB2 shll2 Rn */
	IF(0x0C075EB4u); r3 = R32(r0 + r2); UPD(0x0C075EB6u, 2);  /* 0C075EB4 mov.l @(r0,Rm),Rn */
	r4 = R32(r14); UPD(0x0C075EB8u, 1);  /* 0C075EB6 mov.l @Rm,Rn */
	IF(0x0C075EB8u); { u32 t_ = r3; PR = 0x0C075EBCu; W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C075EBCu); }  /* 0C075EB8 jsr @Rn */
L_0C075EBC: BLKS(0x0C075EBCu);
	r4 = R32(r9 + 0x10u); UPD(0x0C075EBEu, 1);  /* 0C075EBC mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x14u); UPD(0x0C075EC0u, 1);  /* 0C075EBE mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C075EC2u, 1);  /* 0C075EC0 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x1Cu); UPD(0x0C075EC4u, 1);  /* 0C075EC2 mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C075EC4 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C075EC8u, 2);  /* 0C075EC6 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C075EC8 add Rm,Rn */
	r2 += r4;  /* 0C075ECA add Rm,Rn */
	W32(r9 + 0x10u, r4); UPD(0x0C075ECEu, 3);  /* 0C075ECC mov.l Rm,@(disp,Rn) */
	IF(0x0C075ECEu); T = (s32)r2 >= 0;  /* 0C075ECE cmp/pz Rn */
	W32(r9 + 0x14u, r0); UPD(0x0C075ED2u, 2);  /* 0C075ED0 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; r7 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C075F10u, 3); goto L_0C075F10; } UPD(0x0C075ED6u, 1); goto L_0C075ED6; }  /* 0C075ED2 bf/s */
L_0C075ED6: BLKS(0x0C075ED6u);
	r5 = 0xB00000u; UPD(0x0C075ED8u, 1);  /* 0C075ED6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C075ED8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C075EE0u, 4); goto L_0C075EE0; } goto L_0C075EDE; }  /* 0C075EDA bf/s */
L_0C075EDE: BLKS(0x0C075EDEu);
	W32(r8, r6); UPD(0x0C075EE0u, 2);  /* 0C075EDE mov.l Rm,@Rn */
L_0C075EE0: BLKS(0x0C075EE0u);
	r0 = 0xC3C4048u; UPD(0x0C075EE2u, 1);  /* 0C075EE0 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x14u); UPD(0x0C075EE4u, 1);  /* 0C075EE2 mov.l @(disp,Rm),Rn */
	r4 = R32(r0); UPD(0x0C075EE6u, 1);  /* 0C075EE4 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C075EE8u, 1);  /* 0C075EE6 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C075EE8 sub Rm,Rn */
	r2 += r3;  /* 0C075EEA add Rm,Rn */
	IF(0x0C075EECu); T = (s32)r2 >= 0;  /* 0C075EEC cmp/pz Rn */
	if (!T) { UPD(0x0C075F00u, 6); goto L_0C075F00; }  /* 0C075EEE bf */
L_0C075EF0: BLKS(0x0C075EF0u);
	r5 = 0x880000u; UPD(0x0C075EF2u, 1);  /* 0C075EF0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C075EF2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075E3Cu, 4); goto L_0C075E3C; } goto L_0C075EF8; }  /* 0C075EF4 bf/s */
L_0C075EF8: BLKS(0x0C075EF8u);
	r2 = 0x0u;  /* 0C075EF8 mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C075E3Au, 5); goto L_0C075E3A; }  /* 0C075EFA bra */
L_0C075F00: BLKS(0x0C075F00u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C075EF0u, 3); goto L_0C075EF0; }  /* 0C075F00 bra */
L_0C075F10: BLKS(0x0C075F10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C075ED6u, 3); goto L_0C075ED6; }  /* 0C075F10 bra */
L_0C075F20: BLKS(0x0C075F20u);
	r5 = r11;  /* 0C075F20 mov Rm,Rn */
	r3 = 0xC17F5A4u; UPD(0x0C075F24u, 2);  /* 0C075F22 mov.l @(disp,pc),Rn */
	IF(0x0C075F24u); r0 <<= 2;  /* 0C075F24 shll2 Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C075F28u, 2);  /* 0C075F26 mov.w @Rm,Rn */
	IF(0x0C075F28u); r13 = R32(r0 + r3); UPD(0x0C075F2Au, 1);  /* 0C075F28 mov.l @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C075F2A add #imm,Rn */
	W16(r9, r2); UPD(0x0C075F2Eu, 2);  /* 0C075F2C mov.w Rm,@Rn */
	IF(0x0C075F2Eu); { u32 t_ = r13; PR = 0x0C075F32u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C075F32u); }  /* 0C075F2E jsr @Rn */
L_0C075F32: BLKS(0x0C075F32u);
	r6 = R32(r8 + 0x10u); UPD(0x0C075F34u, 1);  /* 0C075F32 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C075F36u, 1);  /* 0C075F34 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x18u); UPD(0x0C075F38u, 1);  /* 0C075F36 mov.l @(disp,Rm),Rn */
	r10 = R32(r8 + 0x1Cu); UPD(0x0C075F3Au, 1);  /* 0C075F38 mov.l @(disp,Rm),Rn */
	r6 += r12;  /* 0C075F3A add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C075F3Eu, 2);  /* 0C075F3C mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C075F3E add Rm,Rn */
	r2 += r6;  /* 0C075F40 add Rm,Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C075F44u, 3);  /* 0C075F42 mov.l Rm,@(disp,Rn) */
	IF(0x0C075F44u); T = (s32)r2 >= 0;  /* 0C075F44 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C075F90u, 4); goto L_0C075F90; } UPD(0x0C075F4Au, 1); goto L_0C075F4A; }  /* 0C075F46 bf/s */
L_0C075F4A: BLKS(0x0C075F4Au);
	r4 = 0xB00000u; UPD(0x0C075F4Cu, 1);  /* 0C075F4A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C075F4C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C075F54u, 4); goto L_0C075F54; } goto L_0C075F52; }  /* 0C075F4E bf/s */
L_0C075F52: BLKS(0x0C075F52u);
	W32(r8, r0); UPD(0x0C075F54u, 2);  /* 0C075F52 mov.l Rm,@Rn */
L_0C075F54: BLKS(0x0C075F54u);
	r7 = 0xC3C4048u; UPD(0x0C075F56u, 1);  /* 0C075F54 mov.l @(disp,pc),Rn */
	r2 = R32(r8 + 0x14u); UPD(0x0C075F58u, 1);  /* 0C075F56 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C075F5Au, 1);  /* 0C075F58 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C075F5Cu, 1);  /* 0C075F5A mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C075F5C sub Rm,Rn */
	r2 += r5;  /* 0C075F5E add Rm,Rn */
	IF(0x0C075F60u); T = (s32)r2 >= 0;  /* 0C075F60 cmp/pz Rn */
	if (!T) { UPD(0x0C075F80u, 6); goto L_0C075F80; }  /* 0C075F62 bf */
L_0C075F64: BLKS(0x0C075F64u);
	r10 = 0x880000u; UPD(0x0C075F66u, 1);  /* 0C075F64 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C075F66 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C075F6Eu, 4); goto L_0C075F6E; } goto L_0C075F6C; }  /* 0C075F68 bf/s */
L_0C075F6C: BLKS(0x0C075F6Cu);
	W32(r8, r12); UPD(0x0C075F6Eu, 2);  /* 0C075F6C mov.l Rm,@Rn */
L_0C075F6E: BLKS(0x0C075F6Eu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C075E08u, 3); goto L_0C075E08; }  /* 0C075F6E bra */
L_0C075F80: BLKS(0x0C075F80u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C075F64u, 3); goto L_0C075F64; }  /* 0C075F80 bra */
L_0C075F90: BLKS(0x0C075F90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C075F4Au, 3); goto L_0C075F4A; }  /* 0C075F90 bra */
}

/* FUN_0c075fd0 */
void blk_f_0C075FD0(sh3_t *c)
{
	LOCALS;
L_0C075FD0: BLKS(0x0C075FD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075FD2u, 1);  /* 0C075FD0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C075FD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075FD6u, 2);  /* 0C075FD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075FD8u, 1);  /* 0C075FD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C075FDAu, 1);  /* 0C075FD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C075FDCu, 1);  /* 0C075FDA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C075FDEu, 1);  /* 0C075FDC mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C075FDE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C075FE2u, 2);  /* 0C075FE0 mov.l Rm,@-Rn */
	IF(0x0C075FE2u); r15 -= 4; W32(r15, PR); UPD(0x0C075FE4u, 1);  /* 0C075FE2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075FE4 add #imm,Rn */
	r14 = r15;  /* 0C075FE6 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C075FEAu, 3);  /* 0C075FE8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C075FECu, 1);  /* 0C075FEA mov.l Rm,@(disp,Rn) */
L_0C075FEC: BLKS(0x0C075FECu);
	r13 = 0x0u;  /* 0C075FEC mov #imm,Rn */
	r11 = 0x0u;  /* 0C075FEE mov #imm,Rn */
	UPD(0x0C075FF0u, 2);
L_0C075FF0: BLKS(0x0C075FF0u);
	r8 = r12;  /* 0C075FF0 mov Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C075FF4u, 2);  /* 0C075FF2 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C075FF4 add Rm,Rn */
	r10 = 0x0u;  /* 0C075FF6 mov #imm,Rn */
	r9 = 0x0u;  /* 0C075FF8 mov #imm,Rn */
	r8 += r0;  /* 0C075FFA add Rm,Rn */
	UPD(0x0C075FFCu, 4);
L_0C075FFC: BLKS(0x0C075FFCu);
	r3 = r12;  /* 0C075FFC mov Rm,Rn */
	r3 += r11;  /* 0C075FFE add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C076002u, 3);  /* 0C076000 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C076002 add Rm,Rn */
	IF(0x0C076004u); r2 = R32(r0 + r3); UPD(0x0C076006u, 2);  /* 0C076004 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C076006 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0760D0u, 4); goto L_0C0760D0; } UPD(0x0C07600Cu, 1); goto L_0C07600C; }  /* 0C076008 bf/s */
L_0C07600C: BLKS(0x0C07600Cu);
	r3 = r10;  /* 0C07600C mov Rm,Rn */
	r3 += 0x1u;  /* 0C07600E add #imm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C076010 exts.w Rm,Rn */
	r7 = 0xFu;  /* 0C076012 mov #imm,Rn */
	r8 += 0x34u;  /* 0C076014 add #imm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C076016 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C075FFCu, 9); goto L_0C075FFC; } goto L_0C07601C; }  /* 0C076018 bf/s */
L_0C07601C: BLKS(0x0C07601Cu);
	r9 = r13;  /* 0C07601C mov Rm,Rn */
	r9 += 0x1u;  /* 0C07601E add #imm,Rn */
	r10 = 0x340u; UPD(0x0C076022u, 4);  /* 0C076020 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C076022 exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C076024 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C076026 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r10; /* slot add Rm,Rn */ if (c_) { UPD(0x0C075FF0u, 6); goto L_0C075FF0; } goto L_0C07602C; }  /* 0C076028 bf/s */
L_0C07602C: BLKS(0x0C07602Cu);
	r9 = 0xC2A6D9Cu; UPD(0x0C07602Eu, 2);  /* 0C07602C mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07602E mov #imm,Rn */
	r13 = 0xC17E1B0u; UPD(0x0C076032u, 2);  /* 0C076030 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C076032 mov #imm,Rn */
	r11 = 0xC3C86B0u; UPD(0x0C076036u, 2);  /* 0C076034 mov.l @(disp,pc),Rn */
	IF(0x0C076036u); ;  /* 0C076036 nop */
	UPD(0x0C076038u, 1);
L_0C076038: BLKS(0x0C076038u);
	r3 = R32(r14 + 0x4u); UPD(0x0C07603Au, 1);  /* 0C076038 mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C07603A add Rm,Rn */
	r3 += r9;  /* 0C07603C add Rm,Rn */
	r0 = R32(r3); UPD(0x0C076040u, 3);  /* 0C07603E mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C076042u, 1);  /* 0C076040 mov.l @(disp,pc),Rn */
	T = (r0 & r4) == 0;  /* 0C076042 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076090u, 4); goto L_0C076090; } UPD(0x0C076048u, 1); goto L_0C076048; }  /* 0C076044 bf/s */
L_0C076048: BLKS(0x0C076048u);
	r4 = r10;  /* 0C076048 mov Rm,Rn */
	r4 += 0x1u;  /* 0C07604A add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07604C exts.w Rm,Rn */
	r3 = 0x1Fu;  /* 0C07604E mov #imm,Rn */
	T = (s32)r10 > (s32)r3;  /* 0C076050 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076038u, 8); goto L_0C076038; } goto L_0C076056; }  /* 0C076052 bf/s */
L_0C076056: BLKS(0x0C076056u);
	r8 = R32(r14); UPD(0x0C076058u, 2);  /* 0C076056 mov.l @Rm,Rn */
	r11 = 0x1u;  /* 0C076058 mov #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C07605Cu, 2);  /* 0C07605A mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C07605C add #imm,Rn */
	r5 = 0x680u; UPD(0x0C076060u, 2);  /* 0C07605E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C076060 exts.w Rm,Rn */
	r10 += r5;  /* 0C076062 add Rm,Rn */
	r9 = 0x9C0u; UPD(0x0C076066u, 3);  /* 0C076064 mov.w @(disp,pc),Rn */
	T = (s32)r13 > (s32)r11;  /* 0C076066 cmp/gt Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C07606Au, 2);  /* 0C076068 mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C07606A add Rm,Rn */
	{ u32 c_ = !T; W32(r14, r13); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C075FECu, 4); goto L_0C075FEC; } UPD(0x0C076070u, 1); goto L_0C076070; }  /* 0C07606C bf/s */
L_0C076070: BLKS(0x0C076070u);
	r14 += 0x8u;  /* 0C076070 add #imm,Rn */
	r15 = r14;  /* 0C076072 mov Rm,Rn */
	IF(0x0C076074u); PR = R32(r15); r15 += 4; UPD(0x0C076076u, 3);  /* 0C076074 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076078u, 1);  /* 0C076076 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07607Au, 1);  /* 0C076078 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07607Cu, 1);  /* 0C07607A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07607Eu, 1);  /* 0C07607C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076080u, 1);  /* 0C07607E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076082u, 1);  /* 0C076080 mov.l @Rm+,Rn */
	IF(0x0C076082u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076082 rts */
L_0C076090: BLKS(0x0C076090u);
	r7 = R32(r3 + 0x4u); UPD(0x0C076092u, 1);  /* 0C076090 mov.l @(disp,Rm),Rn */
	IF(0x0C076092u); ARG0(0x471Du); { s32 s_ = (s32)r1; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C076092 shld Rm,Rn */
	r7 += r13;  /* 0C076094 add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C076098u, 3);  /* 0C076096 mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C076098 mov #imm,Rn */
	W32(r11, r0); UPD(0x0C07609Cu, 2);  /* 0C07609A mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C07609C mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0760A0u, 2);  /* 0C07609E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0760A0 add #imm,Rn */
	r6 = R32(r7); UPD(0x0C0760A4u, 2);  /* 0C0760A2 mov.l @Rm,Rn */
	IF(0x0C0760A4u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0760A4 shld Rm,Rn */
	IF(0x0C0760A6u); r4 = R32(r0 + r6); UPD(0x0C0760A8u, 2);  /* 0C0760A6 mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C0760AAu, 1);  /* 0C0760A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0760AAu); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0760AA shld Rm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C0760AEu, 2);  /* 0C0760AC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0760AE mov #imm,Rn */
	IF(0x0C0760B0u); r7 = R32(r0 + r4); UPD(0x0C0760B2u, 2);  /* 0C0760B0 mov.l @(r0,Rm),Rn */
	W32(r6, r7); UPD(0x0C0760B4u, 1);  /* 0C0760B2 mov.l Rm,@Rn */
	r2 = 0xC073B10u; UPD(0x0C0760B6u, 1);  /* 0C0760B4 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C0760B8u, 1);  /* 0C0760B6 mov.l Rm,@Rn */
	r4 = R32(r3 + 0x24u); UPD(0x0C0760BAu, 1);  /* 0C0760B8 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0760BCu, 1);  /* 0C0760BA mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0760BEu, 1);  /* 0C0760BC mov.l @(disp,Rm),Rn */
	IF(0x0C0760BEu); { u32 t_ = r2; PR = 0x0C0760C2u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0760C2u); }  /* 0C0760BE jsr @Rn */
L_0C0760C2: BLKS(0x0C0760C2u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C076048u, 3); goto L_0C076048; }  /* 0C0760C2 bra */
L_0C0760D0: BLKS(0x0C0760D0u);
	r5 = R32(r8 + 0x4u); UPD(0x0C0760D2u, 1);  /* 0C0760D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0760D2u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0760D2 shld Rm,Rn */
	r6 = 0xC17E1B0u; UPD(0x0C0760D6u, 2);  /* 0C0760D4 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0760D6 mov #imm,Rn */
	r5 += r6;  /* 0C0760D8 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0760DCu, 3);  /* 0C0760DA mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C0760DC mov #imm,Rn */
	r4 = 0xC3C86B0u; UPD(0x0C0760E0u, 2);  /* 0C0760DE mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0760E0 add #imm,Rn */
	W32(r4, r0); UPD(0x0C0760E4u, 2);  /* 0C0760E2 mov.l Rm,@Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C0760E6u, 1);  /* 0C0760E4 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0760E6 mov #imm,Rn */
	r3 = R32(r5); UPD(0x0C0760EAu, 2);  /* 0C0760E8 mov.l @Rm,Rn */
	IF(0x0C0760EAu); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0760EA shld Rm,Rn */
	IF(0x0C0760ECu); r1 = R32(r0 + r3); UPD(0x0C0760EEu, 2);  /* 0C0760EC mov.l @(r0,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0760F0u, 1);  /* 0C0760EE mov.l @(disp,Rm),Rn */
	IF(0x0C0760F0u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0760F0 shld Rm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C0760F4u, 2);  /* 0C0760F2 mov.l @(disp,pc),Rn */
	IF(0x0C0760F4u); r6 = R32(r0 + r1); UPD(0x0C0760F6u, 1);  /* 0C0760F4 mov.l @(r0,Rm),Rn */
	W32(r5, r6); UPD(0x0C0760F8u, 1);  /* 0C0760F6 mov.l Rm,@Rn */
	r0 = 0xC073B10u; UPD(0x0C0760FAu, 1);  /* 0C0760F8 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C0760FCu, 1);  /* 0C0760FA mov.l Rm,@Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0760FEu, 1);  /* 0C0760FC mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C076100u, 1);  /* 0C0760FE mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x14u); UPD(0x0C076102u, 1);  /* 0C076100 mov.l @(disp,Rm),Rn */
	IF(0x0C076102u); { u32 t_ = r0; PR = 0x0C076106u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C076106u); }  /* 0C076102 jsr @Rn */
L_0C076106: BLKS(0x0C076106u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07600Cu, 3); goto L_0C07600C; }  /* 0C076106 bra */
}

void blk_f_0C076130(sh3_t *c)
{
	LOCALS;
L_0C076130: BLKS(0x0C076130u);
	r3 = 0x680u; UPD(0x0C076132u, 1);  /* 0C076130 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C076132 exts.w Rm,Rn */
	IF(0x0C076134u); MACL = r1 * r3;  /* 0C076134 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C076136 exts.w Rm,Rn */
	r6 = 0x34u;  /* 0C076138 mov #imm,Rn */
	IF(0x0C07613Au); r3 = MACL;  /* 0C07613A sts macl,Rn */
	IF(0x0C07613Cu); MACL = r7 * r6;  /* 0C07613C mul.l Rm,Rn */
	r0 = 0xC2A6D9Cu; UPD(0x0C076140u, 9);  /* 0C07613E mov.l @(disp,pc),Rn */
	IF(0x0C076140u); r4 = MACL;  /* 0C076140 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076144u, 2);  /* 0C076142 mov.l Rm,@-Rn */
	r3 += r4;  /* 0C076144 add Rm,Rn */
	r3 += r0;  /* 0C076146 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C07614Au, 3);  /* 0C076148 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07614A mov #imm,Rn */
	r2 += 0xFFFFFFF6u;  /* 0C07614C add #imm,Rn */
	T = r2 > r0;  /* 0C07614E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076190u, 6); goto L_0C076190; } goto L_0C076154; }  /* 0C076150 bt/s */
L_0C076154: BLKS(0x0C076154u);
	r2 = r3;  /* 0C076154 mov Rm,Rn */
	r2 += 0x30u;  /* 0C076156 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C07615Au, 4);  /* 0C076158 mov.b @Rm,Rn */
	r1 = 0x1u;  /* 0C07615A mov #imm,Rn */
	r5 += 0x1u;  /* 0C07615C add #imm,Rn */
	r1 &= r5;  /* 0C07615E and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C076160 tst Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076170u, 7); goto L_0C076170; } UPD(0x0C076166u, 1); goto L_0C076166; }  /* 0C076162 bf/s */
L_0C076166: BLKS(0x0C076166u);
	r0 = R32(r3 + 0xCu); UPD(0x0C076168u, 1);  /* 0C076166 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C076168 add #imm,Rn */
	T = r0 == 0x8u;  /* 0C07616A cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C076180u, 5); goto L_0C076180; } UPD(0x0C076170u, 1); goto L_0C076170; }  /* 0C07616C bt/s */
L_0C076170: BLKS(0x0C076170u);
	r15 = r14;  /* 0C076170 mov Rm,Rn */
	IF(0x0C076172u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C076172 rts */
L_0C076180: BLKS(0x0C076180u);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C076170u, 3); goto L_0C076170; }  /* 0C076180 bra */
L_0C076190: BLKS(0x0C076190u);
	r2 = R32(r3 + 0xCu); UPD(0x0C076192u, 1);  /* 0C076190 mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C076192 mov #imm,Rn */
	r0 = r2;  /* 0C076194 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C076196 and #imm,r0 */
	T = (s32)r0 > (s32)r4;  /* 0C076198 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076170u, 7); goto L_0C076170; }  /* 0C07619A bt */
L_0C07619C: BLKS(0x0C07619Cu);
	IF(0x0C07619Cu); r2 <<= 2;  /* 0C07619C shll2 Rn */
	r5 = 0xC17F5D8u; UPD(0x0C0761A0u, 2);  /* 0C07619E mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0761A0 mov Rm,Rn */
	IF(0x0C0761A2u); r7 = R32(r0 + r5); UPD(0x0C0761A4u, 2);  /* 0C0761A2 mov.l @(r0,Rm),Rn */
	r6 = 0x0u;  /* 0C0761A4 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0761A8u, 2);  /* 0C0761A6 mov.l @(disp,pc),Rn */
	W32(r3 + 0xCu, r7); UPD(0x0C0761AAu, 1);  /* 0C0761A8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x24u, r6); UPD(0x0C0761ACu, 1);  /* 0C0761AA mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C076170u, 3); goto L_0C076170; }  /* 0C0761AC bra */
}

void blk_f_0C0761C0(sh3_t *c)
{
	LOCALS;
L_0C0761C0: BLKS(0x0C0761C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C2u, 1);  /* 0C0761C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C4u, 1);  /* 0C0761C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C6u, 1);  /* 0C0761C4 mov.l Rm,@-Rn */
	r9 = 0x34u;  /* 0C0761C6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CAu, 2);  /* 0C0761C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0761CA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CEu, 2);  /* 0C0761CC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0761CE exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D2u, 2);  /* 0C0761D0 mov.l Rm,@-Rn */
	r12 = 0x9C0u; UPD(0x0C0761D4u, 1);  /* 0C0761D2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D6u, 1);  /* 0C0761D4 mov.l Rm,@-Rn */
	IF(0x0C0761D6u); MACL = r11 * r12;  /* 0C0761D6 mul.l Rm,Rn */
	IF(0x0C0761D8u); r15 -= 4; W32(r15, PR); UPD(0x0C0761DAu, 3);  /* 0C0761D8 sts.l pr,@-Rn */
	IF(0x0C0761DAu); r12 = MACL;  /* 0C0761DA sts macl,Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0761DC add #imm,Rn */
	r14 = r15;  /* 0C0761DE mov Rm,Rn */
	IF(0x0C0761E0u); MACL = r10 * r9;  /* 0C0761E0 mul.l Rm,Rn */
	W32(r14, r7); UPD(0x0C0761E4u, 6);  /* 0C0761E2 mov.l Rm,@Rn */
	r6 = 0x340u; UPD(0x0C0761E6u, 1);  /* 0C0761E4 mov.w @(disp,pc),Rn */
	IF(0x0C0761E6u); r8 = MACL;  /* 0C0761E6 sts macl,Rn */
	IF(0x0C0761E8u); r9 = MACL;  /* 0C0761E8 sts macl,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0761EA exts.w Rm,Rn */
	IF(0x0C0761ECu); MACL = r7 * r6;  /* 0C0761EC mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C0761F0u, 6);  /* 0C0761EE mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C0761F0 add Rm,Rn */
	IF(0x0C0761F2u); r2 = MACL;  /* 0C0761F2 sts macl,Rn */
	r9 += r2;  /* 0C0761F4 add Rm,Rn */
	r9 += r3;  /* 0C0761F6 add Rm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C0761FAu, 5);  /* 0C0761F8 mov.l Rm,@(disp,Rn) */
	r3 = r9;  /* 0C0761FA mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0761FEu, 2);  /* 0C0761FC mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0761FE add #imm,Rn */
	r13 = R32(r9 + 0x20u); UPD(0x0C076202u, 2);  /* 0C076200 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C076204u, 1);  /* 0C076202 mov.b @Rm,Rn */
	r0 = (r13 >> 16) | (r13 << 16);  /* 0C076204 swap.w Rm,Rn */
	r4 += 0x1u;  /* 0C076206 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C076208 exts.w Rm,Rn */
	W8(r3, r4); UPD(0x0C07620Cu, 4);  /* 0C07620A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C07620C extu.b Rm,Rn */
	r0 = 0xC17F74Cu; UPD(0x0C076210u, 2);  /* 0C07620E mov.l @(disp,pc),Rn */
	IF(0x0C076210u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076212u, 1);  /* 0C076210 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C076212 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076230u, 4); goto L_0C076230; }  /* 0C076214 bt */
L_0C076216: BLKS(0x0C076216u);
	r14 += 0x20u;  /* 0C076216 add #imm,Rn */
	UPD(0x0C076218u, 1);
L_0C076218: BLKS(0x0C076218u);
	r15 = r14;  /* 0C076218 mov Rm,Rn */
	IF(0x0C07621Au); PR = R32(r15); r15 += 4; UPD(0x0C07621Cu, 2);  /* 0C07621A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07621Eu, 1);  /* 0C07621C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076220u, 1);  /* 0C07621E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076222u, 1);  /* 0C076220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076224u, 1);  /* 0C076222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076226u, 1);  /* 0C076224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076228u, 1);  /* 0C076226 mov.l @Rm+,Rn */
	IF(0x0C076228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076228 rts */
L_0C076230: BLKS(0x0C076230u);
	r9 += 0x2Cu;  /* 0C076230 add #imm,Rn */
	r7 = 0x100u; UPD(0x0C076234u, 2);  /* 0C076232 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C076234 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C076238u, 2);  /* 0C076236 mov.w @Rm,Rn */
	W8(r3, r10); UPD(0x0C07623Au, 1);  /* 0C076238 mov.b Rm,@Rn */
	r4 += r7;  /* 0C07623A add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C07623Eu, 2);  /* 0C07623C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07623E exts.w Rm,Rn */
	r5 = R32(r14); UPD(0x0C076242u, 2);  /* 0C076240 mov.l @Rm,Rn */
	r9 += 0xFFFFFFD4u;  /* 0C076242 add #imm,Rn */
	r4 = r0;  /* 0C076244 mov Rm,Rn */
	IF(0x0C076246u); { u32 t_ = r2; PR = 0x0C07624Au; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07624Au); }  /* 0C076246 jsr @Rn */
L_0C07624A: BLKS(0x0C07624Au);
	r5 = R32(r9 + 0x10u); UPD(0x0C07624Cu, 1);  /* 0C07624A mov.l @(disp,Rm),Rn */
	r6 = 0xC069AF0u; UPD(0x0C07624Eu, 1);  /* 0C07624C mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C07624E add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C076252u, 2);  /* 0C076250 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C076254u, 1);  /* 0C076252 mov.l @(disp,Rm),Rn */
	IF(0x0C076254u); { u32 t_ = r6; PR = 0x0C076258u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076258u); }  /* 0C076254 jsr @Rn */
L_0C076258: BLKS(0x0C076258u);
	r3 = 0xC0C2360u; UPD(0x0C07625Au, 1);  /* 0C076258 mov.l @(disp,pc),Rn */
	r1 = R32(r9 + 0x14u); UPD(0x0C07625Cu, 1);  /* 0C07625A mov.l @(disp,Rm),Rn */
	r1 += r0;  /* 0C07625C add Rm,Rn */
	IF(0x0C07625Eu); { u32 t_ = r3; PR = 0x0C076262u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076262u); }  /* 0C07625E jsr @Rn */
L_0C076262: BLKS(0x0C076262u);
	r10 = R32(r14 + 0x4u); UPD(0x0C076264u, 1);  /* 0C076262 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C076264 and #imm,r0 */
	r0 += r10;  /* 0C076266 add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C076268 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C07626A exts.w Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C07626Eu, 5);  /* 0C07626C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07626E add #imm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C076272u, 2);  /* 0C076270 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C076272 mov #imm,Rn */
	r1 = 0xC069B20u; UPD(0x0C076276u, 2);  /* 0C076274 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C076276 mov #imm,Rn */
	r0 = r13;  /* 0C076278 mov Rm,Rn */
	r12 += r7;  /* 0C07627A add Rm,Rn */
	r6 = 0xC2380D0u; UPD(0x0C07627Eu, 4);  /* 0C07627C mov.l @(disp,pc),Rn */
	IF(0x0C07627Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07627E shar Rn */
	W32(r15, r4); UPD(0x0C076282u, 2);  /* 0C076280 mov.l Rm,@Rn */
	r12 += r2;  /* 0C076282 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C076286u, 2);  /* 0C076284 mov.l Rm,@(disp,Rn) */
	IF(0x0C076286u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C076286 shar Rn */
	r12 += r6;  /* 0C076288 add Rm,Rn */
	r4 = r10;  /* 0C07628A mov Rm,Rn */
	r5 = r0;  /* 0C07628C mov Rm,Rn */
	IF(0x0C07628Eu); { u32 t_ = r1; PR = 0x0C076292u; W32(r14 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076292u); }  /* 0C07628E jsr @Rn */
L_0C076292: BLKS(0x0C076292u);
	r3 = 0xC069AF0u; UPD(0x0C076294u, 1);  /* 0C076292 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C076294 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C076298u, 2);  /* 0C076296 mov.l Rm,@(disp,Rn) */
	IF(0x0C076298u); { u32 t_ = r3; PR = 0x0C07629Cu; r5 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07629Cu); }  /* 0C076298 jsr @Rn */
L_0C07629C: BLKS(0x0C07629Cu);
	r7 = r11;  /* 0C07629C mov Rm,Rn */
	r10 = 0xC17F740u; UPD(0x0C0762A0u, 2);  /* 0C07629E mov.l @(disp,pc),Rn */
	IF(0x0C0762A0u); r7 <<= 2;  /* 0C0762A0 shll2 Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0762A4u, 2);  /* 0C0762A2 mov.l Rm,@(disp,Rn) */
	r7 += r10;  /* 0C0762A4 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C0762A8u, 2);  /* 0C0762A6 mov.l @Rm,Rn */
	r5 = 0x1u;  /* 0C0762A8 mov #imm,Rn */
	r2 = 0xC0BEEF0u; UPD(0x0C0762ACu, 2);  /* 0C0762AA mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C0762AC add Rm,Rn */
	W32(r15 + 0x10u, r6); UPD(0x0C0762B0u, 2);  /* 0C0762AE mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r7); UPD(0x0C0762B2u, 1);  /* 0C0762B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C0762B4u, 1);  /* 0C0762B2 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0762B6u, 1);  /* 0C0762B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0762B6u); { u32 t_ = r2; PR = 0x0C0762BAu; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0762BAu); }  /* 0C0762B6 jsr @Rn */
L_0C0762BA: BLKS(0x0C0762BAu);
	r3 = 0xC17F748u; UPD(0x0C0762BCu, 1);  /* 0C0762BA mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0762BC mov Rm,Rn */
	IF(0x0C0762BEu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0762C0u, 2);  /* 0C0762BE mov.w @(r0,Rm),Rn */
	r0 = 0x2A0u; UPD(0x0C0762C2u, 1);  /* 0C0762C0 mov.w @(disp,pc),Rn */
	IF(0x0C0762C2u); MACL = r4 * r0;  /* 0C0762C2 mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C0762C6u, 3);  /* 0C0762C4 mov.l @(disp,pc),Rn */
	IF(0x0C0762C6u); r0 = MACL;  /* 0C0762C6 sts macl,Rn */
	IF(0x0C0762C8u); r5 = R32(r0 + r11); UPD(0x0C0762CAu, 2);  /* 0C0762C8 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0762CA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076216u, 4); goto L_0C076216; } goto L_0C0762D0; }  /* 0C0762CC bf/s */
L_0C0762D0: BLKS(0x0C0762D0u);
	r0 = 0xC17F74Cu; UPD(0x0C0762D2u, 2);  /* 0C0762D0 mov.l @(disp,pc),Rn */
	IF(0x0C0762D2u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0762D4u, 1);  /* 0C0762D2 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0762D4 tst Rm,Rn */
	if (!T) { UPD(0x0C076216u, 4); goto L_0C076216; }  /* 0C0762D6 bf */
L_0C0762D8: BLKS(0x0C0762D8u);
	r3 = r13;  /* 0C0762D8 mov Rm,Rn */
	IF(0x0C0762DAu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C0762DA rotl Rn */
	IF(0x0C0762DCu); r10 = T;  /* 0C0762DC movt Rn */
	r10 += r13;  /* 0C0762DE add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0762E2u, 5);  /* 0C0762E0 mov.l @Rm,Rn */
	IF(0x0C0762E2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0762E2 shar Rn */
	r13 = 0xC069B20u; UPD(0x0C0762E6u, 2);  /* 0C0762E4 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0762E6 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762EAu, 2);  /* 0C0762E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0762EAu); { u32 t_ = r13; PR = 0x0C0762EEu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0762EEu); }  /* 0C0762EA jsr @Rn */
L_0C0762EE: BLKS(0x0C0762EEu);
	r7 = 0xC069AF0u; UPD(0x0C0762F0u, 1);  /* 0C0762EE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0762F0 mov Rm,Rn */
	r8 = R32(r9 + 0x10u); UPD(0x0C0762F4u, 2);  /* 0C0762F2 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762F6u, 1);  /* 0C0762F4 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0762F6 add Rm,Rn */
	IF(0x0C0762F8u); { u32 t_ = r7; PR = 0x0C0762FCu; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0762FCu); }  /* 0C0762F8 jsr @Rn */
L_0C0762FC: BLKS(0x0C0762FCu);
	r4 = R32(r9 + 0x14u); UPD(0x0C0762FEu, 1);  /* 0C0762FC mov.l @(disp,Rm),Rn */
	r5 = 0xC0C2360u; UPD(0x0C076300u, 1);  /* 0C0762FE mov.l @(disp,pc),Rn */
	r2 = r4;  /* 0C076300 mov Rm,Rn */
	r2 += r0;  /* 0C076302 add Rm,Rn */
	IF(0x0C076304u); { u32 t_ = r5; PR = 0x0C076308u; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076308u); }  /* 0C076304 jsr @Rn */
L_0C076308: BLKS(0x0C076308u);
	r6 = R32(r14 + 0x4u); UPD(0x0C07630Au, 1);  /* 0C076308 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C07630A and #imm,r0 */
	r6 += r0;  /* 0C07630C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C07630E add #imm,Rn */
	r6 += 0xFFFFFFF0u;  /* 0C076310 add #imm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C076314u, 5);  /* 0C076312 mov.l Rm,@(disp,Rn) */
	r0 = 0x6u;  /* 0C076314 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C076318u, 2);  /* 0C076316 mov.l Rm,@Rn */
	r1 = 0x14u;  /* 0C076318 mov #imm,Rn */
	r3 = 0xC069B20u; UPD(0x0C07631Cu, 2);  /* 0C07631A mov.l @(disp,pc),Rn */
	IF(0x0C07631Cu); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07631Eu, 1);  /* 0C07631C mov.w @(r0,Rm),Rn */
	r11 = 0xC069AF0u; UPD(0x0C076320u, 1);  /* 0C07631E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076320 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C076324u, 2);  /* 0C076322 mov.l @(disp,Rm),Rn */
	IF(0x0C076324u); { u32 t_ = r3; PR = 0x0C076328u; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076328u); }  /* 0C076324 jsr @Rn */
L_0C076328: BLKS(0x0C076328u);
	r4 = r13;  /* 0C076328 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C07632Cu, 2);  /* 0C07632A mov.l @(disp,Rm),Rn */
	IF(0x0C07632Cu); { u32 t_ = r11; PR = 0x0C076330u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076330u); }  /* 0C07632C jsr @Rn */
L_0C076330: BLKS(0x0C076330u);
	W32(r15 + 0xCu, r0); UPD(0x0C076332u, 1);  /* 0C076330 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C076332 mov #imm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C076336u, 2);  /* 0C076334 mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C076338u, 1);  /* 0C076336 mov.l @Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C07633Au, 1);  /* 0C076338 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r8); UPD(0x0C07633Cu, 1);  /* 0C07633A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x8u); UPD(0x0C07633Eu, 1);  /* 0C07633C mov.l @(disp,Rm),Rn */
	r4 = R32(r12); UPD(0x0C076340u, 1);  /* 0C07633E mov.l @Rm,Rn */
	IF(0x0C076340u); { u32 t_ = r13; PR = 0x0C076344u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C076344u); }  /* 0C076340 jsr @Rn */
L_0C076344: BLKS(0x0C076344u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C076218u, 3); goto L_0C076218; }  /* 0C076344 bra */
}

void blk_f_0C076380(sh3_t *c)
{
	LOCALS;
	goto L_0C076380;
L_0C0761C0: BLKS(0x0C0761C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C2u, 1);  /* 0C0761C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C4u, 1);  /* 0C0761C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C6u, 1);  /* 0C0761C4 mov.l Rm,@-Rn */
	r9 = 0x34u;  /* 0C0761C6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CAu, 2);  /* 0C0761C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0761CA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CEu, 2);  /* 0C0761CC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0761CE exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D2u, 2);  /* 0C0761D0 mov.l Rm,@-Rn */
	r12 = 0x9C0u; UPD(0x0C0761D4u, 1);  /* 0C0761D2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D6u, 1);  /* 0C0761D4 mov.l Rm,@-Rn */
	IF(0x0C0761D6u); MACL = r11 * r12;  /* 0C0761D6 mul.l Rm,Rn */
	IF(0x0C0761D8u); r15 -= 4; W32(r15, PR); UPD(0x0C0761DAu, 3);  /* 0C0761D8 sts.l pr,@-Rn */
	IF(0x0C0761DAu); r12 = MACL;  /* 0C0761DA sts macl,Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0761DC add #imm,Rn */
	r14 = r15;  /* 0C0761DE mov Rm,Rn */
	IF(0x0C0761E0u); MACL = r10 * r9;  /* 0C0761E0 mul.l Rm,Rn */
	W32(r14, r7); UPD(0x0C0761E4u, 6);  /* 0C0761E2 mov.l Rm,@Rn */
	r6 = 0x340u; UPD(0x0C0761E6u, 1);  /* 0C0761E4 mov.w @(disp,pc),Rn */
	IF(0x0C0761E6u); r8 = MACL;  /* 0C0761E6 sts macl,Rn */
	IF(0x0C0761E8u); r9 = MACL;  /* 0C0761E8 sts macl,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0761EA exts.w Rm,Rn */
	IF(0x0C0761ECu); MACL = r7 * r6;  /* 0C0761EC mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C0761F0u, 6);  /* 0C0761EE mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C0761F0 add Rm,Rn */
	IF(0x0C0761F2u); r2 = MACL;  /* 0C0761F2 sts macl,Rn */
	r9 += r2;  /* 0C0761F4 add Rm,Rn */
	r9 += r3;  /* 0C0761F6 add Rm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C0761FAu, 5);  /* 0C0761F8 mov.l Rm,@(disp,Rn) */
	r3 = r9;  /* 0C0761FA mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0761FEu, 2);  /* 0C0761FC mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0761FE add #imm,Rn */
	r13 = R32(r9 + 0x20u); UPD(0x0C076202u, 2);  /* 0C076200 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C076204u, 1);  /* 0C076202 mov.b @Rm,Rn */
	r0 = (r13 >> 16) | (r13 << 16);  /* 0C076204 swap.w Rm,Rn */
	r4 += 0x1u;  /* 0C076206 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C076208 exts.w Rm,Rn */
	W8(r3, r4); UPD(0x0C07620Cu, 4);  /* 0C07620A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C07620C extu.b Rm,Rn */
	r0 = 0xC17F74Cu; UPD(0x0C076210u, 2);  /* 0C07620E mov.l @(disp,pc),Rn */
	IF(0x0C076210u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076212u, 1);  /* 0C076210 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C076212 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076230u, 4); goto L_0C076230; }  /* 0C076214 bt */
L_0C076216: BLKS(0x0C076216u);
	r14 += 0x20u;  /* 0C076216 add #imm,Rn */
	UPD(0x0C076218u, 1);
L_0C076218: BLKS(0x0C076218u);
	r15 = r14;  /* 0C076218 mov Rm,Rn */
	IF(0x0C07621Au); PR = R32(r15); r15 += 4; UPD(0x0C07621Cu, 2);  /* 0C07621A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07621Eu, 1);  /* 0C07621C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076220u, 1);  /* 0C07621E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076222u, 1);  /* 0C076220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076224u, 1);  /* 0C076222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076226u, 1);  /* 0C076224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076228u, 1);  /* 0C076226 mov.l @Rm+,Rn */
	IF(0x0C076228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076228 rts */
L_0C076230: BLKS(0x0C076230u);
	r9 += 0x2Cu;  /* 0C076230 add #imm,Rn */
	r7 = 0x100u; UPD(0x0C076234u, 2);  /* 0C076232 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C076234 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C076238u, 2);  /* 0C076236 mov.w @Rm,Rn */
	W8(r3, r10); UPD(0x0C07623Au, 1);  /* 0C076238 mov.b Rm,@Rn */
	r4 += r7;  /* 0C07623A add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C07623Eu, 2);  /* 0C07623C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07623E exts.w Rm,Rn */
	r5 = R32(r14); UPD(0x0C076242u, 2);  /* 0C076240 mov.l @Rm,Rn */
	r9 += 0xFFFFFFD4u;  /* 0C076242 add #imm,Rn */
	r4 = r0;  /* 0C076244 mov Rm,Rn */
	IF(0x0C076246u); { u32 t_ = r2; PR = 0x0C07624Au; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07624Au); }  /* 0C076246 jsr @Rn */
L_0C07624A: BLKS(0x0C07624Au);
	r5 = R32(r9 + 0x10u); UPD(0x0C07624Cu, 1);  /* 0C07624A mov.l @(disp,Rm),Rn */
	r6 = 0xC069AF0u; UPD(0x0C07624Eu, 1);  /* 0C07624C mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C07624E add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C076252u, 2);  /* 0C076250 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C076254u, 1);  /* 0C076252 mov.l @(disp,Rm),Rn */
	IF(0x0C076254u); { u32 t_ = r6; PR = 0x0C076258u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076258u); }  /* 0C076254 jsr @Rn */
L_0C076258: BLKS(0x0C076258u);
	r3 = 0xC0C2360u; UPD(0x0C07625Au, 1);  /* 0C076258 mov.l @(disp,pc),Rn */
	r1 = R32(r9 + 0x14u); UPD(0x0C07625Cu, 1);  /* 0C07625A mov.l @(disp,Rm),Rn */
	r1 += r0;  /* 0C07625C add Rm,Rn */
	IF(0x0C07625Eu); { u32 t_ = r3; PR = 0x0C076262u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076262u); }  /* 0C07625E jsr @Rn */
L_0C076262: BLKS(0x0C076262u);
	r10 = R32(r14 + 0x4u); UPD(0x0C076264u, 1);  /* 0C076262 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C076264 and #imm,r0 */
	r0 += r10;  /* 0C076266 add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C076268 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C07626A exts.w Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C07626Eu, 5);  /* 0C07626C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07626E add #imm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C076272u, 2);  /* 0C076270 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C076272 mov #imm,Rn */
	r1 = 0xC069B20u; UPD(0x0C076276u, 2);  /* 0C076274 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C076276 mov #imm,Rn */
	r0 = r13;  /* 0C076278 mov Rm,Rn */
	r12 += r7;  /* 0C07627A add Rm,Rn */
	r6 = 0xC2380D0u; UPD(0x0C07627Eu, 4);  /* 0C07627C mov.l @(disp,pc),Rn */
	IF(0x0C07627Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07627E shar Rn */
	W32(r15, r4); UPD(0x0C076282u, 2);  /* 0C076280 mov.l Rm,@Rn */
	r12 += r2;  /* 0C076282 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C076286u, 2);  /* 0C076284 mov.l Rm,@(disp,Rn) */
	IF(0x0C076286u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C076286 shar Rn */
	r12 += r6;  /* 0C076288 add Rm,Rn */
	r4 = r10;  /* 0C07628A mov Rm,Rn */
	r5 = r0;  /* 0C07628C mov Rm,Rn */
	IF(0x0C07628Eu); { u32 t_ = r1; PR = 0x0C076292u; W32(r14 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076292u); }  /* 0C07628E jsr @Rn */
L_0C076292: BLKS(0x0C076292u);
	r3 = 0xC069AF0u; UPD(0x0C076294u, 1);  /* 0C076292 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C076294 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C076298u, 2);  /* 0C076296 mov.l Rm,@(disp,Rn) */
	IF(0x0C076298u); { u32 t_ = r3; PR = 0x0C07629Cu; r5 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07629Cu); }  /* 0C076298 jsr @Rn */
L_0C07629C: BLKS(0x0C07629Cu);
	r7 = r11;  /* 0C07629C mov Rm,Rn */
	r10 = 0xC17F740u; UPD(0x0C0762A0u, 2);  /* 0C07629E mov.l @(disp,pc),Rn */
	IF(0x0C0762A0u); r7 <<= 2;  /* 0C0762A0 shll2 Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0762A4u, 2);  /* 0C0762A2 mov.l Rm,@(disp,Rn) */
	r7 += r10;  /* 0C0762A4 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C0762A8u, 2);  /* 0C0762A6 mov.l @Rm,Rn */
	r5 = 0x1u;  /* 0C0762A8 mov #imm,Rn */
	r2 = 0xC0BEEF0u; UPD(0x0C0762ACu, 2);  /* 0C0762AA mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C0762AC add Rm,Rn */
	W32(r15 + 0x10u, r6); UPD(0x0C0762B0u, 2);  /* 0C0762AE mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r7); UPD(0x0C0762B2u, 1);  /* 0C0762B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C0762B4u, 1);  /* 0C0762B2 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0762B6u, 1);  /* 0C0762B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0762B6u); { u32 t_ = r2; PR = 0x0C0762BAu; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0762BAu); }  /* 0C0762B6 jsr @Rn */
L_0C0762BA: BLKS(0x0C0762BAu);
	r3 = 0xC17F748u; UPD(0x0C0762BCu, 1);  /* 0C0762BA mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0762BC mov Rm,Rn */
	IF(0x0C0762BEu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0762C0u, 2);  /* 0C0762BE mov.w @(r0,Rm),Rn */
	r0 = 0x2A0u; UPD(0x0C0762C2u, 1);  /* 0C0762C0 mov.w @(disp,pc),Rn */
	IF(0x0C0762C2u); MACL = r4 * r0;  /* 0C0762C2 mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C0762C6u, 3);  /* 0C0762C4 mov.l @(disp,pc),Rn */
	IF(0x0C0762C6u); r0 = MACL;  /* 0C0762C6 sts macl,Rn */
	IF(0x0C0762C8u); r5 = R32(r0 + r11); UPD(0x0C0762CAu, 2);  /* 0C0762C8 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0762CA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076216u, 4); goto L_0C076216; } goto L_0C0762D0; }  /* 0C0762CC bf/s */
L_0C0762D0: BLKS(0x0C0762D0u);
	r0 = 0xC17F74Cu; UPD(0x0C0762D2u, 2);  /* 0C0762D0 mov.l @(disp,pc),Rn */
	IF(0x0C0762D2u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0762D4u, 1);  /* 0C0762D2 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0762D4 tst Rm,Rn */
	if (!T) { UPD(0x0C076216u, 4); goto L_0C076216; }  /* 0C0762D6 bf */
L_0C0762D8: BLKS(0x0C0762D8u);
	r3 = r13;  /* 0C0762D8 mov Rm,Rn */
	IF(0x0C0762DAu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C0762DA rotl Rn */
	IF(0x0C0762DCu); r10 = T;  /* 0C0762DC movt Rn */
	r10 += r13;  /* 0C0762DE add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0762E2u, 5);  /* 0C0762E0 mov.l @Rm,Rn */
	IF(0x0C0762E2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0762E2 shar Rn */
	r13 = 0xC069B20u; UPD(0x0C0762E6u, 2);  /* 0C0762E4 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0762E6 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762EAu, 2);  /* 0C0762E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0762EAu); { u32 t_ = r13; PR = 0x0C0762EEu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0762EEu); }  /* 0C0762EA jsr @Rn */
L_0C0762EE: BLKS(0x0C0762EEu);
	r7 = 0xC069AF0u; UPD(0x0C0762F0u, 1);  /* 0C0762EE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0762F0 mov Rm,Rn */
	r8 = R32(r9 + 0x10u); UPD(0x0C0762F4u, 2);  /* 0C0762F2 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762F6u, 1);  /* 0C0762F4 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0762F6 add Rm,Rn */
	IF(0x0C0762F8u); { u32 t_ = r7; PR = 0x0C0762FCu; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0762FCu); }  /* 0C0762F8 jsr @Rn */
L_0C0762FC: BLKS(0x0C0762FCu);
	r4 = R32(r9 + 0x14u); UPD(0x0C0762FEu, 1);  /* 0C0762FC mov.l @(disp,Rm),Rn */
	r5 = 0xC0C2360u; UPD(0x0C076300u, 1);  /* 0C0762FE mov.l @(disp,pc),Rn */
	r2 = r4;  /* 0C076300 mov Rm,Rn */
	r2 += r0;  /* 0C076302 add Rm,Rn */
	IF(0x0C076304u); { u32 t_ = r5; PR = 0x0C076308u; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076308u); }  /* 0C076304 jsr @Rn */
L_0C076308: BLKS(0x0C076308u);
	r6 = R32(r14 + 0x4u); UPD(0x0C07630Au, 1);  /* 0C076308 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C07630A and #imm,r0 */
	r6 += r0;  /* 0C07630C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C07630E add #imm,Rn */
	r6 += 0xFFFFFFF0u;  /* 0C076310 add #imm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C076314u, 5);  /* 0C076312 mov.l Rm,@(disp,Rn) */
	r0 = 0x6u;  /* 0C076314 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C076318u, 2);  /* 0C076316 mov.l Rm,@Rn */
	r1 = 0x14u;  /* 0C076318 mov #imm,Rn */
	r3 = 0xC069B20u; UPD(0x0C07631Cu, 2);  /* 0C07631A mov.l @(disp,pc),Rn */
	IF(0x0C07631Cu); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07631Eu, 1);  /* 0C07631C mov.w @(r0,Rm),Rn */
	r11 = 0xC069AF0u; UPD(0x0C076320u, 1);  /* 0C07631E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076320 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C076324u, 2);  /* 0C076322 mov.l @(disp,Rm),Rn */
	IF(0x0C076324u); { u32 t_ = r3; PR = 0x0C076328u; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076328u); }  /* 0C076324 jsr @Rn */
L_0C076328: BLKS(0x0C076328u);
	r4 = r13;  /* 0C076328 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C07632Cu, 2);  /* 0C07632A mov.l @(disp,Rm),Rn */
	IF(0x0C07632Cu); { u32 t_ = r11; PR = 0x0C076330u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076330u); }  /* 0C07632C jsr @Rn */
L_0C076330: BLKS(0x0C076330u);
	W32(r15 + 0xCu, r0); UPD(0x0C076332u, 1);  /* 0C076330 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C076332 mov #imm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C076336u, 2);  /* 0C076334 mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C076338u, 1);  /* 0C076336 mov.l @Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C07633Au, 1);  /* 0C076338 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r8); UPD(0x0C07633Cu, 1);  /* 0C07633A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x8u); UPD(0x0C07633Eu, 1);  /* 0C07633C mov.l @(disp,Rm),Rn */
	r4 = R32(r12); UPD(0x0C076340u, 1);  /* 0C07633E mov.l @Rm,Rn */
	IF(0x0C076340u); { u32 t_ = r13; PR = 0x0C076344u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C076344u); }  /* 0C076340 jsr @Rn */
L_0C076344: BLKS(0x0C076344u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C076218u, 3); goto L_0C076218; }  /* 0C076344 bra */
L_0C076380: BLKS(0x0C076380u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076382u, 1);  /* 0C076380 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076384u, 1);  /* 0C076382 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076386u, 1);  /* 0C076384 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076388u, 1);  /* 0C076386 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07638Au, 1);  /* 0C076388 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07638A exts.w Rm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07638C exts.w Rm,Rn */
	r5 = 0x9C0u; UPD(0x0C076390u, 3);  /* 0C07638E mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C076390 mov #imm,Rn */
	IF(0x0C076392u); MACL = r11 * r5;  /* 0C076392 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076396u, 4);  /* 0C076394 mov.l Rm,@-Rn */
	IF(0x0C076396u); r9 = MACL;  /* 0C076396 sts macl,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C076398 exts.w Rm,Rn */
	IF(0x0C07639Au); MACL = r13 * r4;  /* 0C07639A mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C07639Eu, 5);  /* 0C07639C mov.w @(disp,pc),Rn */
	IF(0x0C07639Eu); r3 = MACL;  /* 0C07639E sts macl,Rn */
	IF(0x0C0763A0u); MACL = r12 * r2;  /* 0C0763A0 mul.l Rm,Rn */
	r9 += r3;  /* 0C0763A2 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0763A6u, 5);  /* 0C0763A4 mov.l Rm,@-Rn */
	IF(0x0C0763A6u); r0 = MACL;  /* 0C0763A6 sts macl,Rn */
	r9 += r0;  /* 0C0763A8 add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C0763ACu, 3);  /* 0C0763AA mov.l @(disp,pc),Rn */
	IF(0x0C0763ACu); r15 -= 4; W32(r15, PR); UPD(0x0C0763AEu, 1);  /* 0C0763AC sts.l pr,@-Rn */
	r9 += r0;  /* 0C0763AE add Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0763B2u, 2);  /* 0C0763B0 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0763B2 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0763CCu, 4); goto L_0C0763CC; } goto L_0C0763B8; }  /* 0C0763B4 bt/s */
L_0C0763B8: BLKS(0x0C0763B8u);
	IF(0x0C0763B8u); T = (s32)r2 >= 0;  /* 0C0763B8 cmp/pz Rn */
	{ u32 c_ = !T; r6 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076420u, 5); goto L_0C076420; } goto L_0C0763BE; }  /* 0C0763BA bf/s */
L_0C0763BE: BLKS(0x0C0763BEu);
	T = (s32)r2 > (s32)r6;  /* 0C0763BE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076420u, 5); goto L_0C076420; }  /* 0C0763C0 bt */
L_0C0763C2: BLKS(0x0C0763C2u);
	r8 = 0x0u;  /* 0C0763C2 mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C0763C6u, 2);  /* 0C0763C4 mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r8); UPD(0x0C0763C8u, 1);  /* 0C0763C6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r8); UPD(0x0C0763CAu, 1);  /* 0C0763C8 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r7); UPD(0x0C0763CCu, 1);  /* 0C0763CA mov.l Rm,@(disp,Rn) */
L_0C0763CC: BLKS(0x0C0763CCu);
	r10 = R32(r9 + 0x20u); UPD(0x0C0763CEu, 1);  /* 0C0763CC mov.l @(disp,Rm),Rn */
	r0 = 0x7FFFFu; UPD(0x0C0763D0u, 1);  /* 0C0763CE mov.l @(disp,pc),Rn */
	T = (s32)r10 > (s32)r0;  /* 0C0763D0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0763DCu, 4); goto L_0C0763DC; }  /* 0C0763D2 bt */
L_0C0763D4: BLKS(0x0C0763D4u);
	r2 = 0x4000u; UPD(0x0C0763D6u, 1);  /* 0C0763D4 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C0763D6 add Rm,Rn */
	W32(r9 + 0x20u, r2); UPD(0x0C0763DAu, 2);  /* 0C0763D8 mov.l Rm,@(disp,Rn) */
	r10 = r2;  /* 0C0763DA mov Rm,Rn */
	UPD(0x0C0763DCu, 1);
L_0C0763DC: BLKS(0x0C0763DCu);
	r9 += 0x2Cu;  /* 0C0763DC add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0763E0u, 2);  /* 0C0763DE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0763E0 mov Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C0763E4u, 2);  /* 0C0763E2 mov.w @Rm,Rn */
	IF(0x0C0763E4u); { u32 t_ = r0; PR = 0x0C0763E8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0763E8u); }  /* 0C0763E4 jsr @Rn */
L_0C0763E8: BLKS(0x0C0763E8u);
	r4 = r8;  /* 0C0763E8 mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0763ECu, 2);  /* 0C0763EA mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C0763EC add #imm,Rn */
	r5 = r10;  /* 0C0763EE mov Rm,Rn */
	IF(0x0C0763F0u); { u32 t_ = r8; PR = 0x0C0763F4u; W32(r9 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0763F4u); }  /* 0C0763F0 jsr @Rn */
L_0C0763F4: BLKS(0x0C0763F4u);
	r10 = R32(r9 + 0x20u); UPD(0x0C0763F6u, 1);  /* 0C0763F4 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0763F6 mov Rm,Rn */
	r7 = 0xC0000u; UPD(0x0C0763FAu, 2);  /* 0C0763F8 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0763FA mov Rm,Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C0763FEu, 2);  /* 0C0763FC mov.l Rm,@(disp,Rn) */
	r7 -= r10;  /* 0C0763FE sub Rm,Rn */
	r3 = 0xC0761C0u; UPD(0x0C076402u, 2);  /* 0C076400 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C076402 mov Rm,Rn */
	r15 = r14;  /* 0C076404 mov Rm,Rn */
	IF(0x0C076406u); PR = R32(r15); r15 += 4; UPD(0x0C076408u, 3);  /* 0C076406 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07640Au, 1);  /* 0C076408 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07640Cu, 1);  /* 0C07640A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07640Eu, 1);  /* 0C07640C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076410u, 1);  /* 0C07640E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076412u, 1);  /* 0C076410 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076414u, 1);  /* 0C076412 mov.l @Rm+,Rn */
	IF(0x0C076414u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0761C0u: goto L_0C0761C0; default: JUMPD(tv_); } }  /* 0C076414 jmp @Rn */
L_0C076420: BLKS(0x0C076420u);
	r15 = r14;  /* 0C076420 mov Rm,Rn */
	IF(0x0C076422u); PR = R32(r15); r15 += 4; UPD(0x0C076424u, 2);  /* 0C076422 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076426u, 1);  /* 0C076424 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076428u, 1);  /* 0C076426 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07642Au, 1);  /* 0C076428 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07642Cu, 1);  /* 0C07642A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07642Eu, 1);  /* 0C07642C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076430u, 1);  /* 0C07642E mov.l @Rm+,Rn */
	IF(0x0C076430u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076430 rts */
}

void blk_f_0C076460(sh3_t *c)
{
	LOCALS;
L_0C076460: BLKS(0x0C076460u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076462u, 1);  /* 0C076460 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076464u, 1);  /* 0C076462 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076466u, 1);  /* 0C076464 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076468u, 1);  /* 0C076466 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C076468 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07646Cu, 2);  /* 0C07646A mov.l Rm,@-Rn */
	r6 = 0x34u;  /* 0C07646C mov #imm,Rn */
	r7 = 0x9C0u; UPD(0x0C076470u, 2);  /* 0C07646E mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C076470 exts.w Rm,Rn */
	IF(0x0C076472u); MACL = r12 * r7;  /* 0C076472 mul.l Rm,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C076474 exts.w Rm,Rn */
	r4 = 0x340u; UPD(0x0C076478u, 5);  /* 0C076476 mov.w @(disp,pc),Rn */
	IF(0x0C076478u); r3 = MACL;  /* 0C076478 sts macl,Rn */
	IF(0x0C07647Au); MACL = r10 * r6;  /* 0C07647A mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07647Eu, 4);  /* 0C07647C mov.l Rm,@-Rn */
	IF(0x0C07647Eu); r5 = MACL;  /* 0C07647E sts macl,Rn */
	IF(0x0C076480u); MACL = r11 * r4;  /* 0C076480 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076484u, 4);  /* 0C076482 mov.l Rm,@-Rn */
	r3 += r5;  /* 0C076484 add Rm,Rn */
	IF(0x0C076486u); r2 = MACL;  /* 0C076486 sts macl,Rn */
	r0 = 0xC2380D0u; UPD(0x0C07648Au, 3);  /* 0C076488 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C07648A add Rm,Rn */
	IF(0x0C07648Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07648Eu, 2);  /* 0C07648C sts.l pr,@-Rn */
	r0 += r3;  /* 0C07648E add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C076492u, 2);  /* 0C076490 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C076492 add #imm,Rn */
	r0 = 0x5u;  /* 0C076494 mov #imm,Rn */
	T = r2 > r0;  /* 0C076496 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0764A0u, 6); goto L_0C0764A0; } goto L_0C07649C; }  /* 0C076498 bf/s */
L_0C07649C: BLKS(0x0C07649Cu);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0765D8u, 4); goto L_0C0765D8; }  /* 0C07649C bra */
L_0C0764A0: BLKS(0x0C0764A0u);
	r0 = 0xC0764B4u;  /* 0C0764A0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0764A2 add Rm,Rn */
	IF(0x0C0764A4u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0764A6u, 3);  /* 0C0764A4 mov.w @(r0,Rm),Rn */
	IF(0x0C0764A6u); { u32 tv_ = (r8 + 0x0C0764AAu); u32 t_ = PHYS(tv_); IF(0x0C0764A8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0764C0u: goto L_0C0764C0; case 0x0C0764E4u: goto L_0C0764E4; case 0x0C076630u: goto L_0C076630; default: JUMPD(tv_); } }  /* 0C0764A6 braf Rn */
L_0C0764C0: BLKS(0x0C0764C0u);
	r7 = 0x9C0u; UPD(0x0C0764C2u, 1);  /* 0C0764C0 mov.w @(disp,pc),Rn */
	r6 = 0x34u;  /* 0C0764C2 mov #imm,Rn */
	IF(0x0C0764C4u); MACL = r12 * r7;  /* 0C0764C4 mul.l Rm,Rn */
	r4 = 0x340u; UPD(0x0C0764C8u, 4);  /* 0C0764C6 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0764C8 mov #imm,Rn */
	IF(0x0C0764CAu); r9 = MACL;  /* 0C0764CA sts macl,Rn */
	IF(0x0C0764CCu); MACL = r10 * r6;  /* 0C0764CC mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C0764D0u, 5);  /* 0C0764CE mov.l @(disp,pc),Rn */
	IF(0x0C0764D0u); r5 = MACL;  /* 0C0764D0 sts macl,Rn */
	IF(0x0C0764D2u); MACL = r11 * r4;  /* 0C0764D2 mul.l Rm,Rn */
	r9 += r5;  /* 0C0764D4 add Rm,Rn */
	r13 = 0x808080u; UPD(0x0C0764D8u, 5);  /* 0C0764D6 mov.l @(disp,pc),Rn */
	IF(0x0C0764D8u); r2 = MACL;  /* 0C0764D8 sts macl,Rn */
	r9 += r2;  /* 0C0764DA add Rm,Rn */
	r9 += r3;  /* 0C0764DC add Rm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C0764E0u, 4);  /* 0C0764DE mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r0); UPD(0x0C0764E2u, 1);  /* 0C0764E0 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r13); UPD(0x0C0764E4u, 1);  /* 0C0764E2 mov.l Rm,@(disp,Rn) */
L_0C0764E4: BLKS(0x0C0764E4u);
	r7 = 0x9C0u; UPD(0x0C0764E6u, 1);  /* 0C0764E4 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C0764E6 mov #imm,Rn */
	IF(0x0C0764E8u); MACL = r12 * r7;  /* 0C0764E8 mul.l Rm,Rn */
	r9 = 0x340u; UPD(0x0C0764ECu, 4);  /* 0C0764EA mov.w @(disp,pc),Rn */
	IF(0x0C0764ECu); r6 = MACL;  /* 0C0764EC sts macl,Rn */
	IF(0x0C0764EEu); MACL = r10 * r8;  /* 0C0764EE mul.l Rm,Rn */
	W32(r14, r6); UPD(0x0C0764F2u, 4);  /* 0C0764F0 mov.l Rm,@Rn */
	IF(0x0C0764F2u); r5 = MACL;  /* 0C0764F2 sts macl,Rn */
	IF(0x0C0764F4u); MACL = r11 * r9;  /* 0C0764F4 mul.l Rm,Rn */
	r8 = R32(r14); UPD(0x0C0764F8u, 4);  /* 0C0764F6 mov.l @Rm,Rn */
	IF(0x0C0764F8u); r9 = MACL;  /* 0C0764F8 sts macl,Rn */
	r2 = 0xC2380D0u; UPD(0x0C0764FCu, 2);  /* 0C0764FA mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0764FC add Rm,Rn */
	r8 += r9;  /* 0C0764FE add Rm,Rn */
	r8 += r2;  /* 0C076500 add Rm,Rn */
	r0 = R32(r8 + 0x20u); UPD(0x0C076504u, 4);  /* 0C076502 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFF000u; UPD(0x0C076506u, 1);  /* 0C076504 mov.w @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C076508u, 1);  /* 0C076506 mov.l Rm,@(disp,Rn) */
	r0 += r4;  /* 0C076508 add Rm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C07650Cu, 2);  /* 0C07650A mov.l Rm,@(disp,Rn) */
	r3 = r0;  /* 0C07650C mov Rm,Rn */
	r5 = r0;  /* 0C07650E mov Rm,Rn */
	r8 += 0x2Cu;  /* 0C076510 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C076514u, 4);  /* 0C076512 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C076516u, 1);  /* 0C076514 mov.w @Rm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C076518u, 1);  /* 0C076516 mov.l Rm,@(disp,Rn) */
	IF(0x0C076518u); { u32 t_ = r0; PR = 0x0C07651Cu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07651Cu); }  /* 0C076518 jsr @Rn */
L_0C07651C: BLKS(0x0C07651Cu);
	r4 = r13;  /* 0C07651C mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C076520u, 2);  /* 0C07651E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C076520 add #imm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C076524u, 2);  /* 0C076522 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C076526u, 1);  /* 0C076524 mov.l Rm,@(disp,Rn) */
	IF(0x0C076526u); { u32 t_ = r13; PR = 0x0C07652Au; r5 = r1; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07652Au); }  /* 0C076526 jsr @Rn */
L_0C07652A: BLKS(0x0C07652Au);
	r13 = R32(r8 + 0x20u); UPD(0x0C07652Cu, 1);  /* 0C07652A mov.l @(disp,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C07652C tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x1Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C076538u, 4); goto L_0C076538; } UPD(0x0C076532u, 1); goto L_0C076532; }  /* 0C07652E bf/s */
L_0C076532: BLKS(0x0C076532u);
	r7 = R32(r8 + 0x24u); UPD(0x0C076534u, 1);  /* 0C076532 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C076534 tst Rm,Rn */
	if (T) { UPD(0x0C0765F0u, 4); goto L_0C0765F0; }  /* 0C076536 bt */
L_0C076538: BLKS(0x0C076538u);
	r9 = 0x9C0u; UPD(0x0C07653Au, 1);  /* 0C076538 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C07653A mov #imm,Rn */
	IF(0x0C07653Cu); MACL = r12 * r9;  /* 0C07653C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C076540u, 4);  /* 0C07653E mov.w @(disp,pc),Rn */
	IF(0x0C076540u); r9 = MACL;  /* 0C076540 sts macl,Rn */
	IF(0x0C076542u); MACL = r10 * r8;  /* 0C076542 mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C076546u, 4);  /* 0C076544 mov.l @(disp,pc),Rn */
	IF(0x0C076546u); r12 <<= 2;  /* 0C076546 shll2 Rn */
	IF(0x0C076548u); r4 = MACL;  /* 0C076548 sts macl,Rn */
	IF(0x0C07654Au); r8 = MACL;  /* 0C07654A sts macl,Rn */
	IF(0x0C07654Cu); MACL = r11 * r0;  /* 0C07654C mul.l Rm,Rn */
	r8 += r9;  /* 0C07654E add Rm,Rn */
	r13 = 0x100u; UPD(0x0C076552u, 7);  /* 0C076550 mov.w @(disp,pc),Rn */
	IF(0x0C076552u); r6 = MACL;  /* 0C076552 sts macl,Rn */
	r8 += r6;  /* 0C076554 add Rm,Rn */
	r8 += r3;  /* 0C076556 add Rm,Rn */
	r8 += 0x2Cu;  /* 0C076558 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07655Cu, 5);  /* 0C07655A mov.w @Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C07655Eu, 1);  /* 0C07655C mov.l @(disp,pc),Rn */
	r7 += r13;  /* 0C07655E add Rm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C076562u, 2);  /* 0C076560 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s16)r7;  /* 0C076562 exts.w Rm,Rn */
	r10 = 0x80000u; UPD(0x0C076566u, 2);  /* 0C076564 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076566 mov Rm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C07656Au, 2);  /* 0C076568 mov.l Rm,@(disp,Rn) */
	IF(0x0C07656Au); { u32 t_ = r11; PR = 0x0C07656Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07656Eu); }  /* 0C07656A jsr @Rn */
L_0C07656E: BLKS(0x0C07656Eu);
	r5 = r10;  /* 0C07656E mov Rm,Rn */
	r8 += 0xFFFFFFD4u;  /* 0C076570 add #imm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C076574u, 3);  /* 0C076572 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076574 mov Rm,Rn */
	r11 = R32(r8 + 0x10u); UPD(0x0C076578u, 2);  /* 0C076576 mov.l @(disp,Rm),Rn */
	IF(0x0C076578u); { u32 t_ = r10; PR = 0x0C07657Cu; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07657Cu); }  /* 0C076578 jsr @Rn */
L_0C07657C: BLKS(0x0C07657Cu);
	r10 = R32(r8 + 0x14u); UPD(0x0C07657Eu, 1);  /* 0C07657C mov.l @(disp,Rm),Rn */
	r10 += r0;  /* 0C07657E add Rm,Rn */
	r0 = 0xC0C2360u; UPD(0x0C076582u, 2);  /* 0C076580 mov.l @(disp,pc),Rn */
	IF(0x0C076582u); { u32 t_ = r0; PR = 0x0C076586u; IF(0x0C076584u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076586u); }  /* 0C076582 jsr @Rn */
L_0C076586: BLKS(0x0C076586u);
	r6 = R32(r8 + 0x20u); UPD(0x0C076588u, 1);  /* 0C076586 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C076588 and #imm,r0 */
	r5 = R32(r14 + 0xCu); UPD(0x0C07658Cu, 2);  /* 0C07658A mov.l @(disp,Rm),Rn */
	r0 += r13;  /* 0C07658C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C07658E add #imm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C076592u, 3);  /* 0C076590 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C076592 add #imm,Rn */
	r3 = 0xC069B20u; UPD(0x0C076596u, 2);  /* 0C076594 mov.l @(disp,pc),Rn */
	IF(0x0C076596u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C076596 shar Rn */
	r4 = 0x0u;  /* 0C076598 mov #imm,Rn */
	IF(0x0C07659Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C07659A shar Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C07659C exts.w Rm,Rn */
	r1 = 0xC2380D0u; UPD(0x0C0765A0u, 5);  /* 0C07659E mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C0765A0 add Rm,Rn */
	W32(r15, r4); UPD(0x0C0765A4u, 2);  /* 0C0765A2 mov.l Rm,@Rn */
	r9 += r2;  /* 0C0765A4 add Rm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C0765A8u, 2);  /* 0C0765A6 mov.l Rm,@(disp,Rn) */
	r0 = 0x14u;  /* 0C0765A8 mov #imm,Rn */
	r9 += r1;  /* 0C0765AA add Rm,Rn */
	r4 = r13;  /* 0C0765AC mov Rm,Rn */
	r5 = r6;  /* 0C0765AE mov Rm,Rn */
	IF(0x0C0765B0u); { u32 t_ = r3; PR = 0x0C0765B4u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0765B4u); }  /* 0C0765B0 jsr @Rn */
L_0C0765B4: BLKS(0x0C0765B4u);
	r6 = 0xC069AF0u; UPD(0x0C0765B6u, 1);  /* 0C0765B4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0765B6 mov Rm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C0765BAu, 2);  /* 0C0765B8 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0765BCu, 1);  /* 0C0765BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0765BCu); { u32 t_ = r6; PR = 0x0C0765C0u; r5 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0765C0u); }  /* 0C0765BC jsr @Rn */
L_0C0765C0: BLKS(0x0C0765C0u);
	W32(r15 + 0xCu, r0); UPD(0x0C0765C2u, 1);  /* 0C0765C0 mov.l Rm,@(disp,Rn) */
	r7 = r10;  /* 0C0765C2 mov Rm,Rn */
	r8 = 0xC17F740u; UPD(0x0C0765C6u, 2);  /* 0C0765C4 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0765C6 mov Rm,Rn */
	IF(0x0C0765C8u); r12 = R32(r0 + r8); UPD(0x0C0765CAu, 2);  /* 0C0765C8 mov.l @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0765CA mov #imm,Rn */
	W32(r15 + 0x10u, r12); UPD(0x0C0765CEu, 2);  /* 0C0765CC mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C0765CE mov Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C0765D2u, 2);  /* 0C0765D0 mov.l @(disp,pc),Rn */
	IF(0x0C0765D2u); { u32 t_ = r10; PR = 0x0C0765D6u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0765D6u); }  /* 0C0765D2 jsr @Rn */
L_0C0765D6: BLKS(0x0C0765D6u);
	r14 += 0x14u;  /* 0C0765D6 add #imm,Rn */
	UPD(0x0C0765D8u, 1);
L_0C0765D8: BLKS(0x0C0765D8u);
	r15 = r14;  /* 0C0765D8 mov Rm,Rn */
	IF(0x0C0765DAu); PR = R32(r15); r15 += 4; UPD(0x0C0765DCu, 2);  /* 0C0765DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0765DEu, 1);  /* 0C0765DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0765E0u, 1);  /* 0C0765DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0765E2u, 1);  /* 0C0765E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0765E4u, 1);  /* 0C0765E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0765E6u, 1);  /* 0C0765E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0765E8u, 1);  /* 0C0765E6 mov.l @Rm+,Rn */
	IF(0x0C0765E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0765E8 rts */
L_0C0765F0: BLKS(0x0C0765F0u);
	r4 = R32(r14); UPD(0x0C0765F2u, 1);  /* 0C0765F0 mov.l @Rm,Rn */
	r0 = 0x5u;  /* 0C0765F2 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0765F6u, 2);  /* 0C0765F4 mov.l @(disp,Rm),Rn */
	r4 += r9;  /* 0C0765F6 add Rm,Rn */
	r9 = 0xC2380D0u; UPD(0x0C0765FAu, 2);  /* 0C0765F8 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0765FA add Rm,Rn */
	r4 += r9;  /* 0C0765FC add Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C076600u, 3);  /* 0C0765FE mov.l Rm,@(disp,Rn) */
	r5 = 0x57u;  /* 0C076600 mov #imm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C076604u, 2);  /* 0C076602 mov.l Rm,@(disp,Rn) */
	r1 = R32(r4); UPD(0x0C076606u, 1);  /* 0C076604 mov.l @Rm,Rn */
	r8 += 0x30u;  /* 0C076606 add #imm,Rn */
	r2 = 0x800000u; UPD(0x0C07660Au, 2);  /* 0C076608 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C07660Cu, 1);  /* 0C07660A mov.b Rm,@Rn */
	r1 |= r2;  /* 0C07660C or Rm,Rn */
	r13 = 0xC0C20A0u; UPD(0x0C076610u, 2);  /* 0C07660E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD0u;  /* 0C076610 add #imm,Rn */
	W32(r4, r1); UPD(0x0C076614u, 2);  /* 0C076612 mov.l Rm,@Rn */
	r3 = 0x204B0B0u; UPD(0x0C076616u, 1);  /* 0C076614 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076616 mov Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C07661Au, 2);  /* 0C076618 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x18u, r7); UPD(0x0C07661Cu, 1);  /* 0C07661A mov.l Rm,@(disp,Rn) */
	IF(0x0C07661Cu); { u32 t_ = r13; PR = 0x0C076620u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C076620u); }  /* 0C07661C jsr @Rn */
L_0C076620: BLKS(0x0C076620u);
	{ IF(0x0C076622u); ; /* slot nop */ UPD(0x0C076538u, 3); goto L_0C076538; }  /* 0C076620 bra */
L_0C076630: BLKS(0x0C076630u);
	r7 = 0x9C0u; UPD(0x0C076632u, 1);  /* 0C076630 mov.w @(disp,pc),Rn */
	r5 = 0x34u;  /* 0C076632 mov #imm,Rn */
	IF(0x0C076634u); MACL = r12 * r7;  /* 0C076634 mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C076638u, 4);  /* 0C076636 mov.w @(disp,pc),Rn */
	IF(0x0C076638u); r8 = MACL;  /* 0C076638 sts macl,Rn */
	IF(0x0C07663Au); MACL = r10 * r5;  /* 0C07663A mul.l Rm,Rn */
	r7 = r8;  /* 0C07663C mov Rm,Rn */
	r9 = 0xC2380D0u; UPD(0x0C076640u, 5);  /* 0C07663E mov.l @(disp,pc),Rn */
	IF(0x0C076640u); r4 = MACL;  /* 0C076640 sts macl,Rn */
	IF(0x0C076642u); MACL = r11 * r2;  /* 0C076642 mul.l Rm,Rn */
	r7 += r4;  /* 0C076644 add Rm,Rn */
	r12 = 0x1u;  /* 0C076646 mov #imm,Rn */
	IF(0x0C076648u); r5 = MACL;  /* 0C076648 sts macl,Rn */
	r7 += r5;  /* 0C07664A add Rm,Rn */
	r7 += r9;  /* 0C07664C add Rm,Rn */
	r6 = R32(r7 + 0xCu); UPD(0x0C076650u, 9);  /* 0C07664E mov.l @(disp,Rm),Rn */
	r1 = r6;  /* 0C076650 mov Rm,Rn */
	r1 += 0xFFFFFFF2u;  /* 0C076652 add #imm,Rn */
	T = r1 > r12;  /* 0C076654 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0766B0u, 6); goto L_0C0766B0; } goto L_0C07665A; }  /* 0C076656 bf/s */
L_0C07665A: BLKS(0x0C07665Au);
	r2 += 0x30u;  /* 0C07665A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C07665Eu, 3);  /* 0C07665C mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C07665E add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C076660 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C076662 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0765D6u, 6); goto L_0C0765D6; } UPD(0x0C076668u, 1); goto L_0C076668; }  /* 0C076664 bf/s */
L_0C076668: BLKS(0x0C076668u);
	r11 = 0x0u;  /* 0C076668 mov #imm,Rn */
	r6 += 0x1u;  /* 0C07666A add #imm,Rn */
	W8(r2, r11); UPD(0x0C07666Eu, 3);  /* 0C07666C mov.b Rm,@Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C076670u, 1);  /* 0C07666E mov.l Rm,@(disp,Rn) */
L_0C076670: BLKS(0x0C076670u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0765D8u, 3); goto L_0C0765D8; }  /* 0C076670 bra */
L_0C0766B0: BLKS(0x0C0766B0u);
	r0 = R32(r7 + 0x24u); UPD(0x0C0766B2u, 1);  /* 0C0766B0 mov.l @(disp,Rm),Rn */
	r2 = 0xFE00u; UPD(0x0C0766B4u, 1);  /* 0C0766B2 mov.l @(disp,pc),Rn */
	r11 = 0xC0u; UPD(0x0C0766B6u, 1);  /* 0C0766B4 mov.w @(disp,pc),Rn */
	r2 &= r0;  /* 0C0766B6 and Rm,Rn */
	IF(0x0C0766B8u); MACL = r2 * r11;  /* 0C0766B8 mul.l Rm,Rn */
	r0 &= 0xFEu;  /* 0C0766BA and #imm,r0 */
	r12 = 0xFF00u; UPD(0x0C0766BEu, 5);  /* 0C0766BC mov.l @(disp,pc),Rn */
	IF(0x0C0766BEu); r10 = MACL;  /* 0C0766BE sts macl,Rn */
	IF(0x0C0766C0u); MACL = r0 * r11;  /* 0C0766C0 mul.l Rm,Rn */
	r2 = r7;  /* 0C0766C2 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0766C4 add #imm,Rn */
	IF(0x0C0766C6u); r1 = MACL;  /* 0C0766C6 sts macl,Rn */
	IF(0x0C0766C8u); r10 >>= 8;  /* 0C0766C8 shlr8 Rn */
	IF(0x0C0766CAu); r1 >>= 8;  /* 0C0766CA shlr8 Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0766CEu, 9);  /* 0C0766CC mov.b @Rm,Rn */
	r12 &= r10;  /* 0C0766CE and Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0766D0 extu.b Rm,Rn */
	r3 = 0x2040000u; UPD(0x0C0766D4u, 3);  /* 0C0766D2 mov.l @(disp,pc),Rn */
	r0 |= r12;  /* 0C0766D4 or Rm,Rn */
	r3 |= r0;  /* 0C0766D6 or Rm,Rn */
	r13 += 0x1u;  /* 0C0766D8 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C0766DA extu.b Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C0766DEu, 5);  /* 0C0766DC mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C0766DE cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076670u, 4); goto L_0C076670; } UPD(0x0C0766E4u, 1); goto L_0C0766E4; }  /* 0C0766E0 bf/s */
L_0C0766E4: BLKS(0x0C0766E4u);
	r0 = r6;  /* 0C0766E4 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0766E6 add #imm,Rn */
	r13 = 0x0u;  /* 0C0766E8 mov #imm,Rn */
	W8(r2, r13); UPD(0x0C0766ECu, 4);  /* 0C0766EA mov.b Rm,@Rn */
	T = r0 == 0x10u;  /* 0C0766EC cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C076670u, 4); goto L_0C076670; } UPD(0x0C0766F2u, 1); goto L_0C0766F2; }  /* 0C0766EE bf/s */
L_0C0766F2: BLKS(0x0C0766F2u);
	r0 = r8;  /* 0C0766F2 mov Rm,Rn */
	r0 += r5;  /* 0C0766F4 add Rm,Rn */
	r0 += r4;  /* 0C0766F6 add Rm,Rn */
	r6 = 0x0u;  /* 0C0766F8 mov #imm,Rn */
	{ IF(0x0C0766FCu); W32(r0 + r9, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0765D6u, 7); goto L_0C0765D6; }  /* 0C0766FA bra */
}

void blk_f_0C076710(sh3_t *c)
{
	LOCALS;
L_0C076710: BLKS(0x0C076710u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076712u, 1);  /* 0C076710 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C076712 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076716u, 2);  /* 0C076714 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s16)r6;  /* 0C076716 exts.w Rm,Rn */
	r9 = 0x9C0u; UPD(0x0C07671Au, 2);  /* 0C076718 mov.w @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C07671A mov #imm,Rn */
	IF(0x0C07671Cu); MACL = r1 * r9;  /* 0C07671C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C076720u, 4);  /* 0C07671E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C076720 exts.w Rm,Rn */
	IF(0x0C076722u); r9 = MACL;  /* 0C076722 sts macl,Rn */
	IF(0x0C076724u); MACL = r7 * r3;  /* 0C076724 mul.l Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C076728u, 5);  /* 0C076726 mov.l @(disp,pc),Rn */
	IF(0x0C076728u); r4 = MACL;  /* 0C076728 sts macl,Rn */
	IF(0x0C07672Au); MACL = r2 * r0;  /* 0C07672A mul.l Rm,Rn */
	r7 = r9;  /* 0C07672C mov Rm,Rn */
	r7 += r4;  /* 0C07672E add Rm,Rn */
	IF(0x0C076730u); r6 = MACL;  /* 0C076730 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076734u, 7);  /* 0C076732 mov.l Rm,@-Rn */
	r7 += r6;  /* 0C076734 add Rm,Rn */
	r7 += r8;  /* 0C076736 add Rm,Rn */
	r1 = R32(r7 + 0x8u); UPD(0x0C07673Au, 3);  /* 0C076738 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C07673A mov #imm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C07673C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076760u, 5); goto L_0C076760; } goto L_0C076742; }  /* 0C07673E bf/s */
L_0C076742: BLKS(0x0C076742u);
	r5 = R32(r7 + 0xCu); UPD(0x0C076744u, 2);  /* 0C076742 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C076744 mov #imm,Rn */
	W32(r7 + 0x8u, r5); UPD(0x0C076748u, 2);  /* 0C076746 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r4); UPD(0x0C07674Au, 1);  /* 0C076748 mov.l Rm,@(disp,Rn) */
L_0C07674A: BLKS(0x0C07674Au);
	r15 = r14;  /* 0C07674A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07674Eu, 2);  /* 0C07674C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076750u, 1);  /* 0C07674E mov.l @Rm+,Rn */
	IF(0x0C076750u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076750 rts */
L_0C076760: BLKS(0x0C076760u);
	r3 = R32(r7 + 0xCu); UPD(0x0C076762u, 1);  /* 0C076760 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C076762 mov Rm,Rn */
	T = r0 == 0xFu;  /* 0C076764 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076790u, 5); goto L_0C076790; } goto L_0C07676A; }  /* 0C076766 bt/s */
L_0C07676A: BLKS(0x0C07676Au);
	r2 += 0x30u;  /* 0C07676A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C07676Eu, 3);  /* 0C07676C mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C07676E add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C076770 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C076772 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07674Au, 6); goto L_0C07674A; } UPD(0x0C076778u, 1); goto L_0C076778; }  /* 0C076774 bf/s */
L_0C076778: BLKS(0x0C076778u);
	r8 = 0x0u;  /* 0C076778 mov #imm,Rn */
	r3 += 0x1u;  /* 0C07677A add #imm,Rn */
	W8(r2, r8); UPD(0x0C07677Eu, 3);  /* 0C07677C mov.b Rm,@Rn */
	{ W32(r7 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07674Au, 3); goto L_0C07674A; }  /* 0C07677E bra */
L_0C076790: BLKS(0x0C076790u);
	r2 = R32(r7 + 0x28u); UPD(0x0C076792u, 1);  /* 0C076790 mov.l @(disp,Rm),Rn */
	r0 = 0xFF00u; UPD(0x0C076794u, 1);  /* 0C076792 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF00u; UPD(0x0C076796u, 1);  /* 0C076794 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C076796 and Rm,Rn */
	IF(0x0C076798u); r0 >>= 2;  /* 0C076798 shlr2 Rn */
	r0 &= r1;  /* 0C07679A and Rm,Rn */
	r1 = r2 & 0xFF;  /* 0C07679C extu.b Rm,Rn */
	IF(0x0C07679Eu); r1 >>= 2;  /* 0C07679E shlr2 Rn */
	r1 |= r0;  /* 0C0767A0 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0767A2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07674Au, 10); goto L_0C07674A; } UPD(0x0C0767A8u, 1); goto L_0C0767A8; }  /* 0C0767A4 bf/s */
L_0C0767A8: BLKS(0x0C0767A8u);
	r0 = r9;  /* 0C0767A8 mov Rm,Rn */
	r0 += r6;  /* 0C0767AA add Rm,Rn */
	r0 += r4;  /* 0C0767AC add Rm,Rn */
	{ IF(0x0C0767B0u); W32(r0 + r8, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07674Au, 6); goto L_0C07674A; }  /* 0C0767AE bra */
}

void blk_f_0C0767C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0767C0;
L_0C0761C0: BLKS(0x0C0761C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C2u, 1);  /* 0C0761C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C4u, 1);  /* 0C0761C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0761C6u, 1);  /* 0C0761C4 mov.l Rm,@-Rn */
	r9 = 0x34u;  /* 0C0761C6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CAu, 2);  /* 0C0761C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0761CA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0761CEu, 2);  /* 0C0761CC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0761CE exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D2u, 2);  /* 0C0761D0 mov.l Rm,@-Rn */
	r12 = 0x9C0u; UPD(0x0C0761D4u, 1);  /* 0C0761D2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0761D6u, 1);  /* 0C0761D4 mov.l Rm,@-Rn */
	IF(0x0C0761D6u); MACL = r11 * r12;  /* 0C0761D6 mul.l Rm,Rn */
	IF(0x0C0761D8u); r15 -= 4; W32(r15, PR); UPD(0x0C0761DAu, 3);  /* 0C0761D8 sts.l pr,@-Rn */
	IF(0x0C0761DAu); r12 = MACL;  /* 0C0761DA sts macl,Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0761DC add #imm,Rn */
	r14 = r15;  /* 0C0761DE mov Rm,Rn */
	IF(0x0C0761E0u); MACL = r10 * r9;  /* 0C0761E0 mul.l Rm,Rn */
	W32(r14, r7); UPD(0x0C0761E4u, 6);  /* 0C0761E2 mov.l Rm,@Rn */
	r6 = 0x340u; UPD(0x0C0761E6u, 1);  /* 0C0761E4 mov.w @(disp,pc),Rn */
	IF(0x0C0761E6u); r8 = MACL;  /* 0C0761E6 sts macl,Rn */
	IF(0x0C0761E8u); r9 = MACL;  /* 0C0761E8 sts macl,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0761EA exts.w Rm,Rn */
	IF(0x0C0761ECu); MACL = r7 * r6;  /* 0C0761EC mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C0761F0u, 6);  /* 0C0761EE mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C0761F0 add Rm,Rn */
	IF(0x0C0761F2u); r2 = MACL;  /* 0C0761F2 sts macl,Rn */
	r9 += r2;  /* 0C0761F4 add Rm,Rn */
	r9 += r3;  /* 0C0761F6 add Rm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C0761FAu, 5);  /* 0C0761F8 mov.l Rm,@(disp,Rn) */
	r3 = r9;  /* 0C0761FA mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0761FEu, 2);  /* 0C0761FC mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0761FE add #imm,Rn */
	r13 = R32(r9 + 0x20u); UPD(0x0C076202u, 2);  /* 0C076200 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C076204u, 1);  /* 0C076202 mov.b @Rm,Rn */
	r0 = (r13 >> 16) | (r13 << 16);  /* 0C076204 swap.w Rm,Rn */
	r4 += 0x1u;  /* 0C076206 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C076208 exts.w Rm,Rn */
	W8(r3, r4); UPD(0x0C07620Cu, 4);  /* 0C07620A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C07620C extu.b Rm,Rn */
	r0 = 0xC17F74Cu; UPD(0x0C076210u, 2);  /* 0C07620E mov.l @(disp,pc),Rn */
	IF(0x0C076210u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076212u, 1);  /* 0C076210 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C076212 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076230u, 4); goto L_0C076230; }  /* 0C076214 bt */
L_0C076216: BLKS(0x0C076216u);
	r14 += 0x20u;  /* 0C076216 add #imm,Rn */
	UPD(0x0C076218u, 1);
L_0C076218: BLKS(0x0C076218u);
	r15 = r14;  /* 0C076218 mov Rm,Rn */
	IF(0x0C07621Au); PR = R32(r15); r15 += 4; UPD(0x0C07621Cu, 2);  /* 0C07621A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07621Eu, 1);  /* 0C07621C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076220u, 1);  /* 0C07621E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076222u, 1);  /* 0C076220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076224u, 1);  /* 0C076222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076226u, 1);  /* 0C076224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076228u, 1);  /* 0C076226 mov.l @Rm+,Rn */
	IF(0x0C076228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076228 rts */
L_0C076230: BLKS(0x0C076230u);
	r9 += 0x2Cu;  /* 0C076230 add #imm,Rn */
	r7 = 0x100u; UPD(0x0C076234u, 2);  /* 0C076232 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C076234 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C076238u, 2);  /* 0C076236 mov.w @Rm,Rn */
	W8(r3, r10); UPD(0x0C07623Au, 1);  /* 0C076238 mov.b Rm,@Rn */
	r4 += r7;  /* 0C07623A add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C07623Eu, 2);  /* 0C07623C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07623E exts.w Rm,Rn */
	r5 = R32(r14); UPD(0x0C076242u, 2);  /* 0C076240 mov.l @Rm,Rn */
	r9 += 0xFFFFFFD4u;  /* 0C076242 add #imm,Rn */
	r4 = r0;  /* 0C076244 mov Rm,Rn */
	IF(0x0C076246u); { u32 t_ = r2; PR = 0x0C07624Au; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07624Au); }  /* 0C076246 jsr @Rn */
L_0C07624A: BLKS(0x0C07624Au);
	r5 = R32(r9 + 0x10u); UPD(0x0C07624Cu, 1);  /* 0C07624A mov.l @(disp,Rm),Rn */
	r6 = 0xC069AF0u; UPD(0x0C07624Eu, 1);  /* 0C07624C mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C07624E add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C076252u, 2);  /* 0C076250 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C076254u, 1);  /* 0C076252 mov.l @(disp,Rm),Rn */
	IF(0x0C076254u); { u32 t_ = r6; PR = 0x0C076258u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076258u); }  /* 0C076254 jsr @Rn */
L_0C076258: BLKS(0x0C076258u);
	r3 = 0xC0C2360u; UPD(0x0C07625Au, 1);  /* 0C076258 mov.l @(disp,pc),Rn */
	r1 = R32(r9 + 0x14u); UPD(0x0C07625Cu, 1);  /* 0C07625A mov.l @(disp,Rm),Rn */
	r1 += r0;  /* 0C07625C add Rm,Rn */
	IF(0x0C07625Eu); { u32 t_ = r3; PR = 0x0C076262u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076262u); }  /* 0C07625E jsr @Rn */
L_0C076262: BLKS(0x0C076262u);
	r10 = R32(r14 + 0x4u); UPD(0x0C076264u, 1);  /* 0C076262 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C076264 and #imm,r0 */
	r0 += r10;  /* 0C076266 add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C076268 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C07626A exts.w Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C07626Eu, 5);  /* 0C07626C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07626E add #imm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C076272u, 2);  /* 0C076270 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C076272 mov #imm,Rn */
	r1 = 0xC069B20u; UPD(0x0C076276u, 2);  /* 0C076274 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C076276 mov #imm,Rn */
	r0 = r13;  /* 0C076278 mov Rm,Rn */
	r12 += r7;  /* 0C07627A add Rm,Rn */
	r6 = 0xC2380D0u; UPD(0x0C07627Eu, 4);  /* 0C07627C mov.l @(disp,pc),Rn */
	IF(0x0C07627Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07627E shar Rn */
	W32(r15, r4); UPD(0x0C076282u, 2);  /* 0C076280 mov.l Rm,@Rn */
	r12 += r2;  /* 0C076282 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C076286u, 2);  /* 0C076284 mov.l Rm,@(disp,Rn) */
	IF(0x0C076286u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C076286 shar Rn */
	r12 += r6;  /* 0C076288 add Rm,Rn */
	r4 = r10;  /* 0C07628A mov Rm,Rn */
	r5 = r0;  /* 0C07628C mov Rm,Rn */
	IF(0x0C07628Eu); { u32 t_ = r1; PR = 0x0C076292u; W32(r14 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076292u); }  /* 0C07628E jsr @Rn */
L_0C076292: BLKS(0x0C076292u);
	r3 = 0xC069AF0u; UPD(0x0C076294u, 1);  /* 0C076292 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C076294 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C076298u, 2);  /* 0C076296 mov.l Rm,@(disp,Rn) */
	IF(0x0C076298u); { u32 t_ = r3; PR = 0x0C07629Cu; r5 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07629Cu); }  /* 0C076298 jsr @Rn */
L_0C07629C: BLKS(0x0C07629Cu);
	r7 = r11;  /* 0C07629C mov Rm,Rn */
	r10 = 0xC17F740u; UPD(0x0C0762A0u, 2);  /* 0C07629E mov.l @(disp,pc),Rn */
	IF(0x0C0762A0u); r7 <<= 2;  /* 0C0762A0 shll2 Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0762A4u, 2);  /* 0C0762A2 mov.l Rm,@(disp,Rn) */
	r7 += r10;  /* 0C0762A4 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C0762A8u, 2);  /* 0C0762A6 mov.l @Rm,Rn */
	r5 = 0x1u;  /* 0C0762A8 mov #imm,Rn */
	r2 = 0xC0BEEF0u; UPD(0x0C0762ACu, 2);  /* 0C0762AA mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C0762AC add Rm,Rn */
	W32(r15 + 0x10u, r6); UPD(0x0C0762B0u, 2);  /* 0C0762AE mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r7); UPD(0x0C0762B2u, 1);  /* 0C0762B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C0762B4u, 1);  /* 0C0762B2 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0762B6u, 1);  /* 0C0762B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0762B6u); { u32 t_ = r2; PR = 0x0C0762BAu; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0762BAu); }  /* 0C0762B6 jsr @Rn */
L_0C0762BA: BLKS(0x0C0762BAu);
	r3 = 0xC17F748u; UPD(0x0C0762BCu, 1);  /* 0C0762BA mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0762BC mov Rm,Rn */
	IF(0x0C0762BEu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0762C0u, 2);  /* 0C0762BE mov.w @(r0,Rm),Rn */
	r0 = 0x2A0u; UPD(0x0C0762C2u, 1);  /* 0C0762C0 mov.w @(disp,pc),Rn */
	IF(0x0C0762C2u); MACL = r4 * r0;  /* 0C0762C2 mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C0762C6u, 3);  /* 0C0762C4 mov.l @(disp,pc),Rn */
	IF(0x0C0762C6u); r0 = MACL;  /* 0C0762C6 sts macl,Rn */
	IF(0x0C0762C8u); r5 = R32(r0 + r11); UPD(0x0C0762CAu, 2);  /* 0C0762C8 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0762CA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076216u, 4); goto L_0C076216; } goto L_0C0762D0; }  /* 0C0762CC bf/s */
L_0C0762D0: BLKS(0x0C0762D0u);
	r0 = 0xC17F74Cu; UPD(0x0C0762D2u, 2);  /* 0C0762D0 mov.l @(disp,pc),Rn */
	IF(0x0C0762D2u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0762D4u, 1);  /* 0C0762D2 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0762D4 tst Rm,Rn */
	if (!T) { UPD(0x0C076216u, 4); goto L_0C076216; }  /* 0C0762D6 bf */
L_0C0762D8: BLKS(0x0C0762D8u);
	r3 = r13;  /* 0C0762D8 mov Rm,Rn */
	IF(0x0C0762DAu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C0762DA rotl Rn */
	IF(0x0C0762DCu); r10 = T;  /* 0C0762DC movt Rn */
	r10 += r13;  /* 0C0762DE add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0762E2u, 5);  /* 0C0762E0 mov.l @Rm,Rn */
	IF(0x0C0762E2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0762E2 shar Rn */
	r13 = 0xC069B20u; UPD(0x0C0762E6u, 2);  /* 0C0762E4 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0762E6 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762EAu, 2);  /* 0C0762E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0762EAu); { u32 t_ = r13; PR = 0x0C0762EEu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0762EEu); }  /* 0C0762EA jsr @Rn */
L_0C0762EE: BLKS(0x0C0762EEu);
	r7 = 0xC069AF0u; UPD(0x0C0762F0u, 1);  /* 0C0762EE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0762F0 mov Rm,Rn */
	r8 = R32(r9 + 0x10u); UPD(0x0C0762F4u, 2);  /* 0C0762F2 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0762F6u, 1);  /* 0C0762F4 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0762F6 add Rm,Rn */
	IF(0x0C0762F8u); { u32 t_ = r7; PR = 0x0C0762FCu; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0762FCu); }  /* 0C0762F8 jsr @Rn */
L_0C0762FC: BLKS(0x0C0762FCu);
	r4 = R32(r9 + 0x14u); UPD(0x0C0762FEu, 1);  /* 0C0762FC mov.l @(disp,Rm),Rn */
	r5 = 0xC0C2360u; UPD(0x0C076300u, 1);  /* 0C0762FE mov.l @(disp,pc),Rn */
	r2 = r4;  /* 0C076300 mov Rm,Rn */
	r2 += r0;  /* 0C076302 add Rm,Rn */
	IF(0x0C076304u); { u32 t_ = r5; PR = 0x0C076308u; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C076308u); }  /* 0C076304 jsr @Rn */
L_0C076308: BLKS(0x0C076308u);
	r6 = R32(r14 + 0x4u); UPD(0x0C07630Au, 1);  /* 0C076308 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C07630A and #imm,r0 */
	r6 += r0;  /* 0C07630C add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C07630E add #imm,Rn */
	r6 += 0xFFFFFFF0u;  /* 0C076310 add #imm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C076314u, 5);  /* 0C076312 mov.l Rm,@(disp,Rn) */
	r0 = 0x6u;  /* 0C076314 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C076318u, 2);  /* 0C076316 mov.l Rm,@Rn */
	r1 = 0x14u;  /* 0C076318 mov #imm,Rn */
	r3 = 0xC069B20u; UPD(0x0C07631Cu, 2);  /* 0C07631A mov.l @(disp,pc),Rn */
	IF(0x0C07631Cu); r13 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07631Eu, 1);  /* 0C07631C mov.w @(r0,Rm),Rn */
	r11 = 0xC069AF0u; UPD(0x0C076320u, 1);  /* 0C07631E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076320 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C076324u, 2);  /* 0C076322 mov.l @(disp,Rm),Rn */
	IF(0x0C076324u); { u32 t_ = r3; PR = 0x0C076328u; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C076328u); }  /* 0C076324 jsr @Rn */
L_0C076328: BLKS(0x0C076328u);
	r4 = r13;  /* 0C076328 mov Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C07632Cu, 2);  /* 0C07632A mov.l @(disp,Rm),Rn */
	IF(0x0C07632Cu); { u32 t_ = r11; PR = 0x0C076330u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C076330u); }  /* 0C07632C jsr @Rn */
L_0C076330: BLKS(0x0C076330u);
	W32(r15 + 0xCu, r0); UPD(0x0C076332u, 1);  /* 0C076330 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C076332 mov #imm,Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C076336u, 2);  /* 0C076334 mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C076338u, 1);  /* 0C076336 mov.l @Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C07633Au, 1);  /* 0C076338 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r8); UPD(0x0C07633Cu, 1);  /* 0C07633A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x8u); UPD(0x0C07633Eu, 1);  /* 0C07633C mov.l @(disp,Rm),Rn */
	r4 = R32(r12); UPD(0x0C076340u, 1);  /* 0C07633E mov.l @Rm,Rn */
	IF(0x0C076340u); { u32 t_ = r13; PR = 0x0C076344u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C076344u); }  /* 0C076340 jsr @Rn */
L_0C076344: BLKS(0x0C076344u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C076218u, 3); goto L_0C076218; }  /* 0C076344 bra */
L_0C0767C0: BLKS(0x0C0767C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0767C2u, 1);  /* 0C0767C0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0767C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0767C6u, 2);  /* 0C0767C4 mov.l Rm,@-Rn */
	r3 = 0x34u;  /* 0C0767C6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0767CAu, 2);  /* 0C0767C8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0767CCu, 1);  /* 0C0767CA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0767CEu, 1);  /* 0C0767CC mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0767CE exts.w Rm,Rn */
	r5 = 0x9C0u; UPD(0x0C0767D2u, 2);  /* 0C0767D0 mov.w @(disp,pc),Rn */
	IF(0x0C0767D2u); MACL = r1 * r5;  /* 0C0767D2 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0767D6u, 3);  /* 0C0767D4 mov.l Rm,@-Rn */
	IF(0x0C0767D6u); r10 = MACL;  /* 0C0767D6 sts macl,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C0767D8 exts.w Rm,Rn */
	IF(0x0C0767DAu); MACL = r13 * r3;  /* 0C0767DA mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C0767DEu, 5);  /* 0C0767DC mov.w @(disp,pc),Rn */
	IF(0x0C0767DEu); r9 = MACL;  /* 0C0767DE sts macl,Rn */
	IF(0x0C0767E0u); MACL = r12 * r2;  /* 0C0767E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0767E4u, 4);  /* 0C0767E2 mov.l Rm,@-Rn */
	r9 += r10;  /* 0C0767E4 add Rm,Rn */
	IF(0x0C0767E6u); r0 = MACL;  /* 0C0767E6 sts macl,Rn */
	r9 += r0;  /* 0C0767E8 add Rm,Rn */
	IF(0x0C0767EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0767ECu, 4);  /* 0C0767EA sts.l pr,@-Rn */
	r0 = 0xC2380D0u; UPD(0x0C0767EEu, 1);  /* 0C0767EC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0767EE add #imm,Rn */
	r9 += r0;  /* 0C0767F0 add Rm,Rn */
	r14 = r15;  /* 0C0767F2 mov Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0767F6u, 4);  /* 0C0767F4 mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C0767F8u, 1);  /* 0C0767F6 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C0767F8 tst Rm,Rn */
	{ u32 c_ = T; r11 = R32(r9 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C076816u, 4); goto L_0C076816; } UPD(0x0C0767FEu, 1); goto L_0C0767FE; }  /* 0C0767FA bt/s */
L_0C0767FE: BLKS(0x0C0767FEu);
	IF(0x0C0767FEu); T = (s32)r2 >= 0;  /* 0C0767FE cmp/pz Rn */
	{ u32 c_ = !T; r4 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07680Au, 4); goto L_0C07680A; } goto L_0C076804; }  /* 0C076800 bf/s */
L_0C076804: BLKS(0x0C076804u);
	T = (s32)r2 > (s32)r4;  /* 0C076804 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07680Eu, 5); goto L_0C07680E; } UPD(0x0C07680Au, 1); goto L_0C07680A; }  /* 0C076806 bf/s */
L_0C07680A: BLKS(0x0C07680Au);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076970u, 3); goto L_0C076970; }  /* 0C07680A bra */
L_0C07680E: BLKS(0x0C07680Eu);
	r6 = 0x808080u; UPD(0x0C076810u, 1);  /* 0C07680E mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r7); UPD(0x0C076812u, 1);  /* 0C076810 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x24u, r7); UPD(0x0C076814u, 1);  /* 0C076812 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C076816u, 1);  /* 0C076814 mov.l Rm,@(disp,Rn) */
L_0C076816: BLKS(0x0C076816u);
	r8 = r9;  /* 0C076816 mov Rm,Rn */
	r8 += 0x2Cu;  /* 0C076818 add #imm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C07681Cu, 3);  /* 0C07681A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0769D0u; UPD(0x0C07681Eu, 1);  /* 0C07681C mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C07681E mov Rm,Rn */
	r8 += 0x2Eu;  /* 0C076820 add #imm,Rn */
	IF(0x0C076822u); { u32 t_ = r0; PR = 0x0C076826u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0769D0, 0x0C0769D0u, 0x0C076826u); }  /* 0C076822 jsr @Rn */
L_0C076826: BLKS(0x0C076826u);
	r1 = 0xBFu; UPD(0x0C076828u, 1);  /* 0C076826 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C076828 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r1;  /* 0C07682A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r8, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C076870u, 5); goto L_0C076870; } UPD(0x0C076830u, 1); goto L_0C076830; }  /* 0C07682C bf/s */
L_0C076830: BLKS(0x0C076830u);
	r0 = R32(r14); UPD(0x0C076832u, 1);  /* 0C076830 mov.l @Rm,Rn */
	r5 = 0x34u;  /* 0C076832 mov #imm,Rn */
	r4 = 0x9C0u; UPD(0x0C076836u, 2);  /* 0C076834 mov.w @(disp,pc),Rn */
	IF(0x0C076836u); MACL = r0 * r4;  /* 0C076836 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C07683Au, 3);  /* 0C076838 mov.w @(disp,pc),Rn */
	IF(0x0C07683Au); r11 = MACL;  /* 0C07683A sts macl,Rn */
	IF(0x0C07683Cu); MACL = r13 * r5;  /* 0C07683C mul.l Rm,Rn */
	r10 = 0xC2380D0u; UPD(0x0C076840u, 4);  /* 0C07683E mov.l @(disp,pc),Rn */
	IF(0x0C076840u); r3 = MACL;  /* 0C076840 sts macl,Rn */
	IF(0x0C076842u); MACL = r12 * r7;  /* 0C076842 mul.l Rm,Rn */
	r11 += r3;  /* 0C076844 add Rm,Rn */
	r4 = R32(r14); UPD(0x0C076848u, 5);  /* 0C076846 mov.l @Rm,Rn */
	IF(0x0C076848u); r9 = MACL;  /* 0C076848 sts macl,Rn */
	r11 += r9;  /* 0C07684A add Rm,Rn */
	r10 += r11;  /* 0C07684C add Rm,Rn */
	r6 = R32(r10 + 0x20u); UPD(0x0C076850u, 4);  /* 0C07684E mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C076850 mov Rm,Rn */
	r7 = 0xE0000u; UPD(0x0C076854u, 2);  /* 0C076852 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C076854 add #imm,Rn */
	r7 -= r6;  /* 0C076856 sub Rm,Rn */
	r2 = 0xC0761C0u; UPD(0x0C07685Au, 3);  /* 0C076858 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C07685A mov Rm,Rn */
	r15 = r14;  /* 0C07685C mov Rm,Rn */
	IF(0x0C07685Eu); PR = R32(r15); r15 += 4; UPD(0x0C076860u, 3);  /* 0C07685E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076862u, 1);  /* 0C076860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076864u, 1);  /* 0C076862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076866u, 1);  /* 0C076864 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076868u, 1);  /* 0C076866 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07686Au, 1);  /* 0C076868 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07686Cu, 1);  /* 0C07686A mov.l @Rm+,Rn */
	IF(0x0C07686Cu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0761C0u: goto L_0C0761C0; default: JUMPD(tv_); } }  /* 0C07686C jmp @Rn */
L_0C076870: BLKS(0x0C076870u);
	r1 += 0xFFFFFFF5u;  /* 0C076870 add #imm,Rn */
	IF(0x0C076872u); MACL = r4 * r1;  /* 0C076872 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C076876u, 4);  /* 0C076874 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C076878u, 1);  /* 0C076876 mov.l @(disp,pc),Rn */
	IF(0x0C076878u); r0 = MACL;  /* 0C076878 sts macl,Rn */
	r0 += r6;  /* 0C07687A add Rm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C07687Eu, 3);  /* 0C07687C mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C076880u, 1);  /* 0C07687E mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C076882u, 1);  /* 0C076880 mov.l @(disp,Rm),Rn */
	IF(0x0C076882u); { u32 t_ = r8; PR = 0x0C076886u; r7 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C076886u); }  /* 0C076882 jsr @Rn */
L_0C076886: BLKS(0x0C076886u);
	r9 = R32(r14 + 0x4u); UPD(0x0C076888u, 1);  /* 0C076886 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C076888 exts.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C07688Cu, 2);  /* 0C07688A mov.w @Rm,Rn */
	r6 = r9;  /* 0C07688C mov Rm,Rn */
	r5 = 0x100u; UPD(0x0C076890u, 2);  /* 0C07688E mov.w @(disp,pc),Rn */
	r0 -= r4;  /* 0C076890 sub Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C076894u, 2);  /* 0C076892 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C076894 add Rm,Rn */
	r2 = 0xFFFFFF03u; UPD(0x0C076898u, 2);  /* 0C076896 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C076898 and Rm,Rn */
	r5 = 0x100u; UPD(0x0C07689Cu, 2);  /* 0C07689A mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C07689C add Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C0768A0u, 2);  /* 0C07689E mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0768A0 mov #imm,Rn */
	r7 = r2 & 0xFFFF;  /* 0C0768A2 extu.w Rm,Rn */
	r4 = r10;  /* 0C0768A4 mov Rm,Rn */
	r10 = 0x6u;  /* 0C0768A6 mov #imm,Rn */
	UPD(0x0C0768A8u, 4);
L_0C0768A8: BLKS(0x0C0768A8u);
	T = r7 > r10;  /* 0C0768A8 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (s32)r0 > (s32)r5; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C076920u, 4); goto L_0C076920; } goto L_0C0768AE; }  /* 0C0768AA bt/s */
L_0C0768AE: BLKS(0x0C0768AEu);
	r9 = 0x5FFFFu; UPD(0x0C0768B0u, 2);  /* 0C0768AE mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C0768B2u, 1);  /* 0C0768B0 mov.w @(disp,pc),Rn */
	T = (s32)r11 > (s32)r9;  /* 0C0768B2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C076910u, 4); goto L_0C076910; }  /* 0C0768B4 bf */
L_0C0768B6: BLKS(0x0C0768B6u);
	r9 = r3;  /* 0C0768B6 mov Rm,Rn */
	UPD(0x0C0768B8u, 1);
L_0C0768B8: BLKS(0x0C0768B8u);
	r9 += 0x1u;  /* 0C0768B8 add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C0768BA exts.w Rm,Rn */
	r2 = 0x5u;  /* 0C0768BC mov #imm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C0768BE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0768A8u, 7); goto L_0C0768A8; } goto L_0C0768C4; }  /* 0C0768C0 bf/s */
L_0C0768C4: BLKS(0x0C0768C4u);
	r1 = R32(r14); UPD(0x0C0768C6u, 2);  /* 0C0768C4 mov.l @Rm,Rn */
	r0 = 0x34u;  /* 0C0768C6 mov #imm,Rn */
	r8 = 0x9C0u; UPD(0x0C0768CAu, 2);  /* 0C0768C8 mov.w @(disp,pc),Rn */
	IF(0x0C0768CAu); MACL = r1 * r8;  /* 0C0768CA mul.l Rm,Rn */
	r5 = 0x340u; UPD(0x0C0768CEu, 3);  /* 0C0768CC mov.w @(disp,pc),Rn */
	IF(0x0C0768CEu); r8 = MACL;  /* 0C0768CE sts macl,Rn */
	IF(0x0C0768D0u); MACL = r13 * r0;  /* 0C0768D0 mul.l Rm,Rn */
	r7 = 0xC2380D0u; UPD(0x0C0768D4u, 4);  /* 0C0768D2 mov.l @(disp,pc),Rn */
	IF(0x0C0768D4u); r4 = MACL;  /* 0C0768D4 sts macl,Rn */
	IF(0x0C0768D6u); MACL = r12 * r5;  /* 0C0768D6 mul.l Rm,Rn */
	r8 += r4;  /* 0C0768D8 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0768DCu, 5);  /* 0C0768DA mov.l @(disp,pc),Rn */
	IF(0x0C0768DCu); r3 = MACL;  /* 0C0768DC sts macl,Rn */
	r8 += r3;  /* 0C0768DE add Rm,Rn */
	r8 += r7;  /* 0C0768E0 add Rm,Rn */
	r10 = r8;  /* 0C0768E2 mov Rm,Rn */
	r10 += 0x2Cu;  /* 0C0768E4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0768E8u, 6);  /* 0C0768E6 mov.w @Rm,Rn */
	r5 = r11;  /* 0C0768E8 mov Rm,Rn */
	r4 = r9;  /* 0C0768EA mov Rm,Rn */
	IF(0x0C0768ECu); { u32 t_ = r0; PR = 0x0C0768F0u; W32(r8 + 0x20u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0768F0u); }  /* 0C0768EC jsr @Rn */
L_0C0768F0: BLKS(0x0C0768F0u);
	r4 = r9;  /* 0C0768F0 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0768F4u, 2);  /* 0C0768F2 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0768F4 mov Rm,Rn */
	IF(0x0C0768F6u); { u32 t_ = r9; PR = 0x0C0768FAu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0768FAu); }  /* 0C0768F6 jsr @Rn */
L_0C0768FA: BLKS(0x0C0768FAu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C0768FCu, 1);  /* 0C0768FA mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0768FEu, 1);  /* 0C0768FC mov.w @Rm,Rn */
	r0 = r11 & 0xFFFF;  /* 0C0768FE extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C076900 add #imm,Rn */
	IF(0x0C076902u); r0 >>= 2;  /* 0C076902 shlr2 Rn */
	IF(0x0C076904u); T = r0 & 1; r0 >>= 1;  /* 0C076904 shlr Rn */
	r0 &= 0x3Fu;  /* 0C076906 and #imm,r0 */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C076830u, 8); goto L_0C076830; }  /* 0C076908 bra */
L_0C076910: BLKS(0x0C076910u);
	{ r11 += r1; /* slot add Rm,Rn */ UPD(0x0C0768B6u, 3); goto L_0C0768B6; }  /* 0C076910 bra */
L_0C076920: BLKS(0x0C076920u);
	if (!T) { UPD(0x0C076940u, 3); goto L_0C076940; }  /* 0C076920 bf */
L_0C076922: BLKS(0x0C076922u);
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C076924u, 1);  /* 0C076922 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C076924 add #imm,Rn */
	W16(r6, r2); UPD(0x0C076928u, 2);  /* 0C076926 mov.w Rm,@Rn */
L_0C076928: BLKS(0x0C076928u);
	r10 = 0x20000u; UPD(0x0C07692Au, 1);  /* 0C076928 mov.l @(disp,pc),Rn */
	T = (s32)r11 > (s32)r10;  /* 0C07692A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0768B8u, 4); goto L_0C0768B8; } goto L_0C076930; }  /* 0C07692C bf/s */
L_0C076930: BLKS(0x0C076930u);
	r1 = 0xFFFFF000u; UPD(0x0C076932u, 2);  /* 0C076930 mov.w @(disp,pc),Rn */
	{ r11 += r1; /* slot add Rm,Rn */ UPD(0x0C0768B8u, 3); goto L_0C0768B8; }  /* 0C076932 bra */
L_0C076940: BLKS(0x0C076940u);
	r10 = 0xFFu; UPD(0x0C076942u, 1);  /* 0C076940 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r10;  /* 0C076942 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0768B8u, 4); goto L_0C0768B8; } goto L_0C076948; }  /* 0C076944 bt/s */
L_0C076948: BLKS(0x0C076948u);
	r9 = 0x34u;  /* 0C076948 mov #imm,Rn */
	IF(0x0C07694Au); MACL = r13 * r9;  /* 0C07694A mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C07694Eu, 5);  /* 0C07694C mov.w @(disp,pc),Rn */
	IF(0x0C07694Eu); r9 = MACL;  /* 0C07694E sts macl,Rn */
	IF(0x0C076950u); MACL = r12 * r2;  /* 0C076950 mul.l Rm,Rn */
	r9 += r4;  /* 0C076952 add Rm,Rn */
	IF(0x0C076954u); r10 = MACL;  /* 0C076954 sts macl,Rn */
	r9 += r10;  /* 0C076956 add Rm,Rn */
	r9 += r8;  /* 0C076958 add Rm,Rn */
	r9 += 0x2Cu;  /* 0C07695A add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C07695Eu, 9);  /* 0C07695C mov.w @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07695E add #imm,Rn */
	{ W16(r9, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C076928u, 4); goto L_0C076928; }  /* 0C076960 bra */
L_0C076970: BLKS(0x0C076970u);
	r15 = r14;  /* 0C076970 mov Rm,Rn */
	IF(0x0C076972u); PR = R32(r15); r15 += 4; UPD(0x0C076974u, 2);  /* 0C076972 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076976u, 1);  /* 0C076974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076978u, 1);  /* 0C076976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07697Au, 1);  /* 0C076978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07697Cu, 1);  /* 0C07697A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07697Eu, 1);  /* 0C07697C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076980u, 1);  /* 0C07697E mov.l @Rm+,Rn */
	IF(0x0C076980u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076980 rts */
}

/* FUN_0c0769d0 */
void blk_f_0C0769D0(sh3_t *c)
{
	LOCALS;
L_0C0769D0: BLKS(0x0C0769D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0769D2u, 1);  /* 0C0769D0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0769D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0769D6u, 2);  /* 0C0769D4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0769D8u, 1);  /* 0C0769D6 mov.l Rm,@-Rn */
	r1 = 0xBFu; UPD(0x0C0769DAu, 1);  /* 0C0769D8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0769DCu, 1);  /* 0C0769DA mov.l Rm,@-Rn */
	T = (s32)r0 > (s32)r1;  /* 0C0769DC cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076AC0u, 4); goto L_0C076AC0; } goto L_0C0769E2; }  /* 0C0769DE bt/s */
L_0C0769E2: BLKS(0x0C0769E2u);
	r1 += 0xFFFFFFF5u;  /* 0C0769E2 add #imm,Rn */
	IF(0x0C0769E4u); MACL = r0 * r1;  /* 0C0769E4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0769E8u, 5);  /* 0C0769E6 mov.l @(disp,pc),Rn */
	IF(0x0C0769E8u); r7 = MACL;  /* 0C0769E8 sts macl,Rn */
	r7 += r9;  /* 0C0769EA add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0769EEu, 3);  /* 0C0769EC mov.l @Rm,Rn */
	r3 = 0x2000000u; UPD(0x0C0769F0u, 1);  /* 0C0769EE mov.l @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C0769F0 tst Rm,Rn */
	if (T) { UPD(0x0C076A26u, 4); goto L_0C076A26; }  /* 0C0769F2 bt */
L_0C0769F4: BLKS(0x0C0769F4u);
	r8 = 0xA8u; UPD(0x0C0769F6u, 1);  /* 0C0769F4 mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C0769F6 add Rm,Rn */
	r2 = r8;  /* 0C0769F8 mov Rm,Rn */
	r2 += 0x3u;  /* 0C0769FA add #imm,Rn */
	r8 += 0x1u;  /* 0C0769FC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C076A00u, 5);  /* 0C0769FE mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C076A02u, 1);  /* 0C076A00 mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C076A02 extu.b Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C076A04 extu.b Rm,Rn */
	T = r4 >= r3;  /* 0C076A06 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C076A26u, 6); goto L_0C076A26; }  /* 0C076A08 bf */
L_0C076A0A: BLKS(0x0C076A0Au);
	r3 = R32(r7 + 0x24u); UPD(0x0C076A0Cu, 1);  /* 0C076A0A mov.l @(disp,Rm),Rn */
	r1 = 0xFFF7FFFFu; UPD(0x0C076A0Eu, 1);  /* 0C076A0C mov.l @(disp,pc),Rn */
	r10 = 0x12FFFFEu; UPD(0x0C076A10u, 1);  /* 0C076A0E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C076A10 add Rm,Rn */
	T = r3 > r10;  /* 0C076A12 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C076A26u, 5); goto L_0C076A26; }  /* 0C076A14 bt */
L_0C076A16: BLKS(0x0C076A16u);
	r4 = R32(r7 + 0x28u); UPD(0x0C076A18u, 1);  /* 0C076A16 mov.l @(disp,Rm),Rn */
	r6 = 0xC3C4048u; UPD(0x0C076A1Au, 1);  /* 0C076A18 mov.l @(disp,pc),Rn */
	r5 = R32(r6); UPD(0x0C076A1Cu, 1);  /* 0C076A1A mov.l @Rm,Rn */
	r7 = 0xEFFFFEu; UPD(0x0C076A1Eu, 1);  /* 0C076A1C mov.l @(disp,pc),Rn */
	r4 -= r5;  /* 0C076A1E sub Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C076A20 add #imm,Rn */
	T = r4 > r7;  /* 0C076A22 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C076A8Cu, 6); goto L_0C076A8C; }  /* 0C076A24 bf */
L_0C076A26: BLKS(0x0C076A26u);
	r6 = 0xC17F75Eu; UPD(0x0C076A28u, 1);  /* 0C076A26 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C076A28 mov #imm,Rn */
	r8 = 0xC0u; UPD(0x0C076A2Cu, 2);  /* 0C076A2A mov.w @(disp,pc),Rn */
	r4 = 0xBFu; UPD(0x0C076A2Eu, 1);  /* 0C076A2C mov.w @(disp,pc),Rn */
	r10 = 0xC3C4048u; UPD(0x0C076A30u, 1);  /* 0C076A2E mov.l @(disp,pc),Rn */
L_0C076A30: BLKS(0x0C076A30u);
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C076A32u, 1);  /* 0C076A30 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C076A32 add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C076A34 exts.w Rm,Rn */
	T = r2 == r8;  /* 0C076A36 cmp/eq Rm,Rn */
	{ u32 c_ = T; W16(r6, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C076AB0u, 6); goto L_0C076AB0; } UPD(0x0C076A3Cu, 1); goto L_0C076A3C; }  /* 0C076A38 bt/s */
L_0C076A3C: BLKS(0x0C076A3Cu);
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C076A3Eu, 1);  /* 0C076A3C mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C076A40u, 1);  /* 0C076A3E mov.w @(disp,pc),Rn */
	IF(0x0C076A40u); MACL = r5 * r2;  /* 0C076A40 mul.l Rm,Rn */
	r3 = 0x2000000u; UPD(0x0C076A44u, 3);  /* 0C076A42 mov.l @(disp,pc),Rn */
	IF(0x0C076A44u); r7 = MACL;  /* 0C076A44 sts macl,Rn */
	r7 += r9;  /* 0C076A46 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C076A4Au, 3);  /* 0C076A48 mov.l @Rm,Rn */
	T = (r1 & r3) == 0;  /* 0C076A4A tst Rm,Rn */
	if (T) { UPD(0x0C076A80u, 4); goto L_0C076A80; }  /* 0C076A4C bt */
L_0C076A4E: BLKS(0x0C076A4Eu);
	r1 = 0xA8u; UPD(0x0C076A50u, 1);  /* 0C076A4E mov.w @(disp,pc),Rn */
	r1 += r7;  /* 0C076A50 add Rm,Rn */
	r3 = r1;  /* 0C076A52 mov Rm,Rn */
	r1 += 0x1u;  /* 0C076A54 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C076A58u, 4);  /* 0C076A56 mov.b @Rm,Rn */
	r3 += 0x3u;  /* 0C076A58 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C076A5Cu, 2);  /* 0C076A5A mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C076A5C extu.b Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C076A5E extu.b Rm,Rn */
	T = r2 >= r3;  /* 0C076A60 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C076A80u, 6); goto L_0C076A80; }  /* 0C076A62 bf */
L_0C076A64: BLKS(0x0C076A64u);
	r1 = R32(r7 + 0x24u); UPD(0x0C076A66u, 1);  /* 0C076A64 mov.l @(disp,Rm),Rn */
	r3 = 0xFFF7FFFFu; UPD(0x0C076A68u, 1);  /* 0C076A66 mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C076A68 add Rm,Rn */
	r3 = 0x12FFFFEu; UPD(0x0C076A6Cu, 2);  /* 0C076A6A mov.l @(disp,pc),Rn */
	T = r1 > r3;  /* 0C076A6C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C076A80u, 4); goto L_0C076A80; }  /* 0C076A6E bt */
L_0C076A70: BLKS(0x0C076A70u);
	r3 = R32(r7 + 0x28u); UPD(0x0C076A72u, 1);  /* 0C076A70 mov.l @(disp,Rm),Rn */
	r1 = R32(r10); UPD(0x0C076A74u, 1);  /* 0C076A72 mov.l @Rm,Rn */
	r7 = 0xEFFFFEu; UPD(0x0C076A76u, 1);  /* 0C076A74 mov.l @(disp,pc),Rn */
	r3 -= r1;  /* 0C076A76 sub Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C076A78 add #imm,Rn */
	T = r3 > r7;  /* 0C076A7A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C076AA0u, 6); goto L_0C076AA0; }  /* 0C076A7C bf */
L_0C076A7E: BLKS(0x0C076A7Eu);
	IF(0x0C076A7Eu); ;  /* 0C076A7E nop */
	UPD(0x0C076A80u, 1);
L_0C076A80: BLKS(0x0C076A80u);
	r5 = r0;  /* 0C076A80 mov Rm,Rn */
	r5 += 0x1u;  /* 0C076A82 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C076A84 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C076A86 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C076A30u, 7); goto L_0C076A30; }  /* 0C076A88 bf */
L_0C076A8A: BLKS(0x0C076A8Au);
	r0 = 0xC0u; UPD(0x0C076A8Cu, 1);  /* 0C076A8A mov.w @(disp,pc),Rn */
L_0C076A8C: BLKS(0x0C076A8Cu);
	r15 = r14;  /* 0C076A8C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076A90u, 2);  /* 0C076A8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076A92u, 1);  /* 0C076A90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076A94u, 1);  /* 0C076A92 mov.l @Rm+,Rn */
	IF(0x0C076A94u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076A94 rts */
L_0C076AA0: BLKS(0x0C076AA0u);
	{ r0 = r5; /* slot mov Rm,Rn */ UPD(0x0C076A8Cu, 3); goto L_0C076A8C; }  /* 0C076AA0 bra */
L_0C076AB0: BLKS(0x0C076AB0u);
	r7 = 0x0u;  /* 0C076AB0 mov #imm,Rn */
	{ W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(0x0C076A3Cu, 4); goto L_0C076A3C; }  /* 0C076AB2 bra */
L_0C076AC0: BLKS(0x0C076AC0u);
	r9 = 0xC286578u; UPD(0x0C076AC2u, 1);  /* 0C076AC0 mov.l @(disp,pc),Rn */
	{ IF(0x0C076AC4u); ; /* slot nop */ UPD(0x0C076A26u, 3); goto L_0C076A26; }  /* 0C076AC2 bra */
}

/* FUN_0c076af0 */
void blk_f_0C076AF0(sh3_t *c)
{
	LOCALS;
L_0C076AF0: BLKS(0x0C076AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076AF2u, 1);  /* 0C076AF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076AF4u, 1);  /* 0C076AF2 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C076AF4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076AF8u, 2);  /* 0C076AF6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C076AF8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076AFCu, 2);  /* 0C076AFA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C076AFEu, 1);  /* 0C076AFC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C076AFE exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076B02u, 2);  /* 0C076B00 mov.l Rm,@-Rn */
	r2 = 0xFF600000u; UPD(0x0C076B04u, 1);  /* 0C076B02 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076B06u, 1);  /* 0C076B04 mov.l Rm,@-Rn */
	r2 += r4;  /* 0C076B06 add Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076B08 add #imm,Rn */
	IF(0x0C076B0Au); T = (s32)r2 >= 0;  /* 0C076B0A cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076B14u, 6); goto L_0C076B14; } goto L_0C076B10; }  /* 0C076B0C bt/s */
L_0C076B10: BLKS(0x0C076B10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C076C70u, 4); goto L_0C076C70; }  /* 0C076B10 bra */
L_0C076B14: BLKS(0x0C076B14u);
	r0 = 0xE00000u; UPD(0x0C076B16u, 1);  /* 0C076B14 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C076B16 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076BE2u, 4); goto L_0C076BE2; } goto L_0C076B1C; }  /* 0C076B18 bt/s */
L_0C076B1C: BLKS(0x0C076B1Cu);
	r3 = 0xFE000000u; UPD(0x0C076B1Eu, 2);  /* 0C076B1C mov.l @(disp,pc),Rn */
	r2 = r9;  /* 0C076B1E mov Rm,Rn */
	r2 += r3;  /* 0C076B20 add Rm,Rn */
	IF(0x0C076B22u); T = (s32)r2 >= 0;  /* 0C076B22 cmp/pz Rn */
	if (T) { UPD(0x0C076B28u, 6); goto L_0C076B28; }  /* 0C076B24 bt */
L_0C076B26: BLKS(0x0C076B26u);
	r2 = 0u - r2;  /* 0C076B26 neg Rm,Rn */
	UPD(0x0C076B28u, 1);
L_0C076B28: BLKS(0x0C076B28u);
	r0 = 0xC80000u; UPD(0x0C076B2Au, 1);  /* 0C076B28 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C076B2A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076BE2u, 4); goto L_0C076BE2; } goto L_0C076B30; }  /* 0C076B2C bt/s */
L_0C076B30: BLKS(0x0C076B30u);
	r6 = 0xC3C53E8u; UPD(0x0C076B32u, 2);  /* 0C076B30 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C076B32 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C076B36u, 2);  /* 0C076B34 mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C076B36 mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C076B38 extu.b Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C076B3A cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C076BE0u, 6); goto L_0C076BE0; } UPD(0x0C076B40u, 1); goto L_0C076B40; }  /* 0C076B3C bt/s */
L_0C076B40: BLKS(0x0C076B40u);
	r7 = 0xFFFFFFF8u;  /* 0C076B40 mov #imm,Rn */
	r10 = r8;  /* 0C076B42 mov Rm,Rn */
	IF(0x0C076B44u); ARG0(0x4A7Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C076B44 shad Rm,Rn */
	r13 = r3;  /* 0C076B46 mov Rm,Rn */
	r13 += r9;  /* 0C076B48 add Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C076B4Cu, 6);  /* 0C076B4A mov.l Rm,@(disp,Rn) */
	IF(0x0C076B4Cu); ARG0(0x4D7Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C076B4C shad Rm,Rn */
	IF(0x0C076B4Eu); ;  /* 0C076B4E nop */
	UPD(0x0C076B50u, 2);
L_0C076B50: BLKS(0x0C076B50u);
	r2 = 0xC3C8694u; UPD(0x0C076B52u, 1);  /* 0C076B50 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C076B52 mov Rm,Rn */
	IF(0x0C076B54u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C076B56u, 2);  /* 0C076B54 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C076B56 mov #imm,Rn */
	IF(0x0C076B58u); MACL = r5 * r0;  /* 0C076B58 mul.l Rm,Rn */
	r12 = 0xC286318u; UPD(0x0C076B5Cu, 4);  /* 0C076B5A mov.l @(disp,pc),Rn */
	IF(0x0C076B5Cu); r6 = MACL;  /* 0C076B5C sts macl,Rn */
	r6 += r12;  /* 0C076B5E add Rm,Rn */
	r2 = R32(r6); UPD(0x0C076B62u, 3);  /* 0C076B60 mov.l @Rm,Rn */
	r3 = 0x40000000u; UPD(0x0C076B64u, 1);  /* 0C076B62 mov.l @(disp,pc),Rn */
	T = (r2 & r3) == 0;  /* 0C076B64 tst Rm,Rn */
	if (T) { UPD(0x0C076BD0u, 4); goto L_0C076BD0; }  /* 0C076B66 bt */
L_0C076B68: BLKS(0x0C076B68u);
	r7 = 0x20000000u; UPD(0x0C076B6Au, 1);  /* 0C076B68 mov.l @(disp,pc),Rn */
	T = (r2 & r7) == 0;  /* 0C076B6A tst Rm,Rn */
	{ u32 c_ = T; r6 += 0x42u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076BD0u, 4); goto L_0C076BD0; } goto L_0C076B70; }  /* 0C076B6C bt/s */
L_0C076B70: BLKS(0x0C076B70u);
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C076B72u, 2);  /* 0C076B70 mov.b @Rm,Rn */
	r12 = r10 & 0xFF;  /* 0C076B72 extu.b Rm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C076B74 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076C30u, 5); goto L_0C076C30; } goto L_0C076B7A; }  /* 0C076B76 bf/s */
L_0C076B7A: BLKS(0x0C076B7Au);
	r1 = r11;  /* 0C076B7A mov Rm,Rn */
	r1 -= r10;  /* 0C076B7C sub Rm,Rn */
	r3 = (u32)(s32)(s8)r1;  /* 0C076B7E exts.b Rm,Rn */
	r0 = r3;  /* 0C076B80 mov Rm,Rn */
	r7 = 0xC17F3ACu; UPD(0x0C076B84u, 6);  /* 0C076B82 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C076B84 add Rm,Rn */
	IF(0x0C076B86u); r2 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C076B88u, 2);  /* 0C076B86 mov.w @(r0,Rm),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C076B8Au, 1);  /* 0C076B88 mov.l @(disp,Rm),Rn */
	IF(0x0C076B8Au); MACL = r7 * r2;  /* 0C076B8A mul.l Rm,Rn */
	r1 = 0x2000000u; UPD(0x0C076B8Eu, 3);  /* 0C076B8C mov.l @(disp,pc),Rn */
	IF(0x0C076B8Eu); r7 = MACL;  /* 0C076B8E sts macl,Rn */
	IF(0x0C076B90u); MACL = r13 * r2;  /* 0C076B90 mul.l Rm,Rn */
	IF(0x0C076B92u); r0 = MACL;  /* 0C076B92 sts macl,Rn */
	r1 += r0;  /* 0C076B94 add Rm,Rn */
	r0 = R32(r6 + 0x8u); UPD(0x0C076B98u, 6);  /* 0C076B96 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C076B98 add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C076B9A swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C076B9C exts.w Rm,Rn */
	r0 -= r3;  /* 0C076B9E sub Rm,Rn */
	r6 = 0xFFFFFFFBu;  /* 0C076BA0 mov #imm,Rn */
	IF(0x0C076BA2u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C076BA2 shad Rm,Rn */
	r7 = 0x4u;  /* 0C076BA4 mov #imm,Rn */
	IF(0x0C076BA6u); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C076BA6 shld Rm,Rn */
	r0 &= 0xFu;  /* 0C076BA8 and #imm,r0 */
	r5 += r0;  /* 0C076BAA add Rm,Rn */
	r0 = (r1 >> 16) | (r1 << 16);  /* 0C076BAC swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C076BAE exts.w Rm,Rn */
	r6 = 0xFFFFFEA0u; UPD(0x0C076BB2u, 13);  /* 0C076BB0 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C076BB2 add Rm,Rn */
	r7 += r6;  /* 0C076BB4 add Rm,Rn */
	r2 = 0xFFFFFFFBu;  /* 0C076BB6 mov #imm,Rn */
	IF(0x0C076BB8u); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C076BB8 shad Rm,Rn */
	r3 = 0x4u;  /* 0C076BBA mov #imm,Rn */
	r0 = 0xFu;  /* 0C076BBC mov #imm,Rn */
	IF(0x0C076BBEu); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C076BBE shld Rm,Rn */
	r7 &= r0;  /* 0C076BC0 and Rm,Rn */
	r5 += r7;  /* 0C076BC2 add Rm,Rn */
	r0 = 0xC3C86F0u; UPD(0x0C076BC6u, 10);  /* 0C076BC4 mov.l @(disp,pc),Rn */
	IF(0x0C076BC6u); r5 <<= 2;  /* 0C076BC6 shll2 Rn */
	IF(0x0C076BC8u); r6 = R32(r0 + r5); UPD(0x0C076BCAu, 2);  /* 0C076BC8 mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C076BCA tst Rm,Rn */
	if (!T) { UPD(0x0C076C00u, 4); goto L_0C076C00; }  /* 0C076BCC bf */
L_0C076BCE: BLKS(0x0C076BCEu);
	IF(0x0C076BCEu); ; UPD(0x0C076BD0u, 1);  /* 0C076BCE nop */
L_0C076BD0: BLKS(0x0C076BD0u);
	r12 = 0xC3C53E8u; UPD(0x0C076BD2u, 1);  /* 0C076BD0 mov.l @(disp,pc),Rn */
	r3 = r4;  /* 0C076BD2 mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C076BD6u, 2);  /* 0C076BD4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C076BD6 add #imm,Rn */
	r4 = (u32)(s32)(s8)r3;  /* 0C076BD8 exts.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C076BDA extu.b Rm,Rn */
	T = (s32)r4 >= (s32)r5;  /* 0C076BDC cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C076B50u, 7); goto L_0C076B50; }  /* 0C076BDE bf */
L_0C076BE0: BLKS(0x0C076BE0u);
	r0 = 0x0u;  /* 0C076BE0 mov #imm,Rn */
	UPD(0x0C076BE2u, 1);
L_0C076BE2: BLKS(0x0C076BE2u);
	r14 += 0x8u;  /* 0C076BE2 add #imm,Rn */
	r15 = r14;  /* 0C076BE4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076BE8u, 3);  /* 0C076BE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076BEAu, 1);  /* 0C076BE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076BECu, 1);  /* 0C076BEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076BEEu, 1);  /* 0C076BEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076BF0u, 1);  /* 0C076BEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076BF2u, 1);  /* 0C076BF0 mov.l @Rm+,Rn */
	IF(0x0C076BF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076BF2 rts */
L_0C076C00: BLKS(0x0C076C00u);
	r4 = R32(r14); UPD(0x0C076C02u, 1);  /* 0C076C00 mov.l @Rm,Rn */
	T = (s32)r4 >= (s32)r12;  /* 0C076C02 cmp/ge Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C076C0Eu, 4); goto L_0C076C0E; } UPD(0x0C076C08u, 1); goto L_0C076C08; }  /* 0C076C04 bt/s */
L_0C076C08: BLKS(0x0C076C08u);
	r8 = (u32)(s32)(s8)r10;  /* 0C076C08 exts.b Rm,Rn */
	W32(r14, r8); UPD(0x0C076C0Cu, 2);  /* 0C076C0A mov.l Rm,@Rn */
	r5 = R32(r14); UPD(0x0C076C0Eu, 1);  /* 0C076C0C mov.l @Rm,Rn */
L_0C076C0E: BLKS(0x0C076C0Eu);
	r13 = 0xFFFFFFFFu;  /* 0C076C0E mov #imm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C076C10 cmp/gt Rm,Rn */
	r0 = R32(r14); UPD(0x0C076C14u, 3);  /* 0C076C12 mov.l @Rm,Rn */
	IF(0x0C076C14u); r11 = T;  /* 0C076C14 movt Rn */
	T = (r0 & r0) == 0;  /* 0C076C16 tst Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C076C18 negc Rm,Rn */
	r9 &= r11;  /* 0C076C1A and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C076C1C tst Rm,Rn */
	if (T) { UPD(0x0C076BE2u, 8); goto L_0C076BE2; }  /* 0C076C1E bt */
L_0C076C20: BLKS(0x0C076C20u);
	r12 = r0;  /* 0C076C20 mov Rm,Rn */
	r12 += 0x1u;  /* 0C076C22 add #imm,Rn */
	r10 = (u32)(s32)(s8)r12;  /* 0C076C24 exts.b Rm,Rn */
	W32(r14, r10); UPD(0x0C076C28u, 4);  /* 0C076C26 mov.l Rm,@Rn */
L_0C076C28: BLKS(0x0C076C28u);
	{ r0 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C076BE2u, 3); goto L_0C076BE2; }  /* 0C076C28 bra */
L_0C076C30: BLKS(0x0C076C30u);
	r0 = R32(r6 + 0x8u); UPD(0x0C076C32u, 1);  /* 0C076C30 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFEBu;  /* 0C076C32 mov #imm,Rn */
	r0 += r8;  /* 0C076C34 add Rm,Rn */
	r6 = 0x4u;  /* 0C076C36 mov #imm,Rn */
	IF(0x0C076C38u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C076C38 shad Rm,Rn */
	IF(0x0C076C3Au); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C076C3A shld Rm,Rn */
	r0 &= 0xFu;  /* 0C076C3C and #imm,r0 */
	r5 += r0;  /* 0C076C3E add Rm,Rn */
	r0 = 0xFEA00000u; UPD(0x0C076C42u, 8);  /* 0C076C40 mov.l @(disp,pc),Rn */
	IF(0x0C076C42u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C076C42 shld Rm,Rn */
	r0 += r9;  /* 0C076C44 add Rm,Rn */
	IF(0x0C076C46u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C076C46 shad Rm,Rn */
	r0 &= 0xFu;  /* 0C076C48 and #imm,r0 */
	r5 += r0;  /* 0C076C4A add Rm,Rn */
	r0 = 0xC3C86F0u; UPD(0x0C076C4Eu, 6);  /* 0C076C4C mov.l @(disp,pc),Rn */
	IF(0x0C076C4Eu); r5 <<= 2;  /* 0C076C4E shll2 Rn */
	IF(0x0C076C50u); r3 = R32(r0 + r5); UPD(0x0C076C52u, 2);  /* 0C076C50 mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C076C52 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C076BD0u, 4); goto L_0C076BD0; } UPD(0x0C076C58u, 1); goto L_0C076C58; }  /* 0C076C54 bt/s */
L_0C076C58: BLKS(0x0C076C58u);
	T = (s32)r0 >= (s32)r12;  /* 0C076C58 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C076BE2u, 4); goto L_0C076BE2; }  /* 0C076C5A bt */
L_0C076C5C: BLKS(0x0C076C5Cu);
	r7 = (u32)(s32)(s8)r10;  /* 0C076C5C exts.b Rm,Rn */
	{ W32(r14, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C076C28u, 4); goto L_0C076C28; }  /* 0C076C5E bra */
L_0C076C70: BLKS(0x0C076C70u);
	{ IF(0x0C076C72u); ; /* slot nop */ UPD(0x0C076B14u, 3); goto L_0C076B14; }  /* 0C076C70 bra */
}

/* FUN_0c076cb0 */
void blk_f_0C076CB0(sh3_t *c)
{
	LOCALS;
L_0C076CB0: BLKS(0x0C076CB0u);
	r0 = 0x9C0u; UPD(0x0C076CB2u, 1);  /* 0C076CB0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C076CB2 exts.w Rm,Rn */
	IF(0x0C076CB4u); MACL = r4 * r0;  /* 0C076CB4 mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C076CB6 exts.w Rm,Rn */
	r2 = 0x34u;  /* 0C076CB8 mov #imm,Rn */
	IF(0x0C076CBAu); r0 = MACL;  /* 0C076CBA sts macl,Rn */
	IF(0x0C076CBCu); MACL = r6 * r2;  /* 0C076CBC mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C076CBE exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076CC2u, 10);  /* 0C076CC0 mov.l Rm,@-Rn */
	IF(0x0C076CC2u); r2 = MACL;  /* 0C076CC2 sts macl,Rn */
	r0 += r2;  /* 0C076CC4 add Rm,Rn */
	r2 = 0x340u; UPD(0x0C076CC8u, 3);  /* 0C076CC6 mov.w @(disp,pc),Rn */
	IF(0x0C076CC8u); MACL = r5 * r2;  /* 0C076CC8 mul.l Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C076CCCu, 3);  /* 0C076CCA mov.l @(disp,pc),Rn */
	IF(0x0C076CCCu); r2 = MACL;  /* 0C076CCC sts macl,Rn */
	IF(0x0C076CCEu); r15 -= 4; W32(r15, PR); UPD(0x0C076CD0u, 2);  /* 0C076CCE sts.l pr,@-Rn */
	r0 += r2;  /* 0C076CD0 add Rm,Rn */
	r3 += r0;  /* 0C076CD2 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C076CD6u, 3);  /* 0C076CD4 mov.l @(disp,Rm),Rn */
	r3 = 0xC17E21Cu; UPD(0x0C076CD8u, 1);  /* 0C076CD6 mov.l @(disp,pc),Rn */
	IF(0x0C076CD8u); r0 <<= 2;  /* 0C076CD8 shll2 Rn */
	IF(0x0C076CDAu); r2 = R32(r0 + r3); UPD(0x0C076CDCu, 2);  /* 0C076CDA mov.l @(r0,Rm),Rn */
	IF(0x0C076CDCu); { u32 t_ = r2; PR = 0x0C076CE0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C076CE0u); }  /* 0C076CDC jsr @Rn */
L_0C076CE0: BLKS(0x0C076CE0u);
	r15 = r14;  /* 0C076CE0 mov Rm,Rn */
	IF(0x0C076CE2u); PR = R32(r15); r15 += 4; UPD(0x0C076CE4u, 2);  /* 0C076CE2 lds.l @Rn+,pr */
	IF(0x0C076CE4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076CE4 rts */
}

void blk_f_0C076D00(sh3_t *c)
{
	LOCALS;
L_0C076D00: BLKS(0x0C076D00u);
	r0 = 0x9C0u; UPD(0x0C076D02u, 1);  /* 0C076D00 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C076D02 exts.w Rm,Rn */
	IF(0x0C076D04u); MACL = r4 * r0;  /* 0C076D04 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C076D06 exts.w Rm,Rn */
	r2 = 0x34u;  /* 0C076D08 mov #imm,Rn */
	IF(0x0C076D0Au); r0 = MACL;  /* 0C076D0A sts macl,Rn */
	IF(0x0C076D0Cu); MACL = r3 * r2;  /* 0C076D0C mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C076D0E exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076D12u, 10);  /* 0C076D10 mov.l Rm,@-Rn */
	IF(0x0C076D12u); r3 = MACL;  /* 0C076D12 sts macl,Rn */
	r2 = 0x340u; UPD(0x0C076D16u, 2);  /* 0C076D14 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C076D16 mov Rm,Rn */
	IF(0x0C076D18u); MACL = r5 * r2;  /* 0C076D18 mul.l Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C076D1Cu, 4);  /* 0C076D1A mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C076D1C add Rm,Rn */
	IF(0x0C076D1Eu); r2 = MACL;  /* 0C076D1E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076D22u, 3);  /* 0C076D20 mov.l Rm,@-Rn */
	r7 += r2;  /* 0C076D22 add Rm,Rn */
	r7 += r8;  /* 0C076D24 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C076D28u, 3);  /* 0C076D26 mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C076D28 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076D40u, 4); goto L_0C076D40; } goto L_0C076D2E; }  /* 0C076D2A bt/s */
L_0C076D2E: BLKS(0x0C076D2Eu);
	r15 = r14;  /* 0C076D2E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076D32u, 3);  /* 0C076D30 mov.l @Rm+,Rn */
	IF(0x0C076D32u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076D32 rts */
L_0C076D40: BLKS(0x0C076D40u);
	r5 = r0;  /* 0C076D40 mov Rm,Rn */
	r5 += r2;  /* 0C076D42 add Rm,Rn */
	r5 += r3;  /* 0C076D44 add Rm,Rn */
	r5 += r8;  /* 0C076D46 add Rm,Rn */
	r8 = 0x5u;  /* 0C076D48 mov #imm,Rn */
	r1 = R32(r5); UPD(0x0C076D4Cu, 6);  /* 0C076D4A mov.l @Rm,Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C076D4Eu, 1);  /* 0C076D4C mov.l Rm,@(disp,Rn) */
	r2 = 0x800000u; UPD(0x0C076D50u, 1);  /* 0C076D4E mov.l @(disp,pc),Rn */
	W32(r7 + 0x8u, r8); UPD(0x0C076D52u, 1);  /* 0C076D50 mov.l Rm,@(disp,Rn) */
	r1 |= r2;  /* 0C076D52 or Rm,Rn */
	r7 += 0x30u;  /* 0C076D54 add #imm,Rn */
	W8(r7, r6); UPD(0x0C076D58u, 3);  /* 0C076D56 mov.b Rm,@Rn */
	W32(r5, r1); UPD(0x0C076D5Au, 1);  /* 0C076D58 mov.l Rm,@Rn */
	r7 += 0xFFFFFFD0u;  /* 0C076D5A add #imm,Rn */
	r5 = 0x204B0B0u; UPD(0x0C076D5Eu, 2);  /* 0C076D5C mov.l @(disp,pc),Rn */
	W32(r7 + 0x1Cu, r6); UPD(0x0C076D60u, 1);  /* 0C076D5E mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x18u, r6); UPD(0x0C076D62u, 1);  /* 0C076D60 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x24u, r5); UPD(0x0C076D64u, 1);  /* 0C076D62 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0C20A0u; UPD(0x0C076D66u, 1);  /* 0C076D64 mov.l @(disp,pc),Rn */
	r5 = 0x57u;  /* 0C076D66 mov #imm,Rn */
	r15 = r14;  /* 0C076D68 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076D6Cu, 3);  /* 0C076D6A mov.l @Rm+,Rn */
	IF(0x0C076D6Cu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C076D6C jmp @Rn */
}

void blk_f_0C076D90(sh3_t *c)
{
	LOCALS;
L_0C076D90: BLKS(0x0C076D90u);
	r0 = 0x9C0u; UPD(0x0C076D92u, 1);  /* 0C076D90 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C076D92 exts.w Rm,Rn */
	IF(0x0C076D94u); MACL = r1 * r0;  /* 0C076D94 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C076D96 exts.w Rm,Rn */
	r3 = 0x34u;  /* 0C076D98 mov #imm,Rn */
	IF(0x0C076D9Au); r0 = MACL;  /* 0C076D9A sts macl,Rn */
	IF(0x0C076D9Cu); MACL = r2 * r3;  /* 0C076D9C mul.l Rm,Rn */
	r6 = 0x340u; UPD(0x0C076DA0u, 9);  /* 0C076D9E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C076DA0 exts.w Rm,Rn */
	IF(0x0C076DA2u); r2 = MACL;  /* 0C076DA2 sts macl,Rn */
	IF(0x0C076DA4u); MACL = r7 * r6;  /* 0C076DA4 mul.l Rm,Rn */
	r0 += r2;  /* 0C076DA6 add Rm,Rn */
	r3 = 0xC2380D0u; UPD(0x0C076DAAu, 6);  /* 0C076DA8 mov.l @(disp,pc),Rn */
	IF(0x0C076DAAu); r4 = MACL;  /* 0C076DAA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076DAEu, 2);  /* 0C076DAC mov.l Rm,@-Rn */
	r0 += r4;  /* 0C076DAE add Rm,Rn */
	r0 += r3;  /* 0C076DB0 add Rm,Rn */
	r2 = 0x0u;  /* 0C076DB2 mov #imm,Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C076DB6u, 4);  /* 0C076DB4 mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C076DB6 mov Rm,Rn */
	W32(r0 + 0x18u, r2); UPD(0x0C076DBAu, 2);  /* 0C076DB8 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C076DBA mov Rm,Rn */
	IF(0x0C076DBCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C076DBC rts */
}

/* FUN_0c076ef0 */
void blk_f_0C076EF0(sh3_t *c)
{
	LOCALS;
L_0C076EF0: BLKS(0x0C076EF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076EF2u, 1);  /* 0C076EF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076EF4u, 1);  /* 0C076EF2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C076EF4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076EF8u, 2);  /* 0C076EF6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C076EF8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076EFCu, 2);  /* 0C076EFA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C076EFEu, 1);  /* 0C076EFC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076F00u, 1);  /* 0C076EFE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076F02u, 1);  /* 0C076F00 mov.l Rm,@-Rn */
	r10 = 0xC29D1D8u; UPD(0x0C076F04u, 1);  /* 0C076F02 mov.l @(disp,pc),Rn */
	IF(0x0C076F04u); r15 -= 4; W32(r15, PR); UPD(0x0C076F06u, 1);  /* 0C076F04 sts.l pr,@-Rn */
	r13 = 0xC2289E8u; UPD(0x0C076F08u, 1);  /* 0C076F06 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C076F08 mov Rm,Rn */
	r12 = 0xC3C86B0u; UPD(0x0C076F0Cu, 2);  /* 0C076F0A mov.l @(disp,pc),Rn */
	r11 = 0xC073B10u; UPD(0x0C076F0Eu, 1);  /* 0C076F0C mov.l @(disp,pc),Rn */
	IF(0x0C076F0Eu); ;  /* 0C076F0E nop */
	UPD(0x0C076F10u, 1);
L_0C076F10: BLKS(0x0C076F10u);
	r3 = r9;  /* 0C076F10 mov Rm,Rn */
	r3 += r10;  /* 0C076F12 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C076F16u, 3);  /* 0C076F14 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C076F18u, 1);  /* 0C076F16 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C076F18 tst Rm,Rn */
	if (!T) { UPD(0x0C076F40u, 4); goto L_0C076F40; }  /* 0C076F1A bf */
L_0C076F1C: BLKS(0x0C076F1Cu);
	r6 = r8;  /* 0C076F1C mov Rm,Rn */
	UPD(0x0C076F1Eu, 1);
L_0C076F1E: BLKS(0x0C076F1Eu);
	r8 = 0x2A0u; UPD(0x0C076F20u, 1);  /* 0C076F1E mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C076F20 add #imm,Rn */
	r9 += r8;  /* 0C076F22 add Rm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C076F24 exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C076F26 mov #imm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C076F28 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C076F10u, 8); goto L_0C076F10; }  /* 0C076F2A bf */
L_0C076F2C: BLKS(0x0C076F2Cu);
	r15 = r14;  /* 0C076F2C mov Rm,Rn */
	IF(0x0C076F2Eu); PR = R32(r15); r15 += 4; UPD(0x0C076F30u, 2);  /* 0C076F2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076F32u, 1);  /* 0C076F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076F34u, 1);  /* 0C076F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076F36u, 1);  /* 0C076F34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076F38u, 1);  /* 0C076F36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076F3Au, 1);  /* 0C076F38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076F3Cu, 1);  /* 0C076F3A mov.l @Rm+,Rn */
	IF(0x0C076F3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076F3C rts */
L_0C076F40: BLKS(0x0C076F40u);
	r4 = R32(r3 + 0x4u); UPD(0x0C076F42u, 1);  /* 0C076F40 mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C076F42 mov #imm,Rn */
	IF(0x0C076F44u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C076F44 shld Rm,Rn */
	r1 = 0xC17E12Cu; UPD(0x0C076F48u, 3);  /* 0C076F46 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C076F48 mov #imm,Rn */
	r4 += r1;  /* 0C076F4A add Rm,Rn */
	r0 = R32(r4 + 0x4u); UPD(0x0C076F4Eu, 3);  /* 0C076F4C mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C076F4E mov #imm,Rn */
	W32(r12, r0); UPD(0x0C076F52u, 2);  /* 0C076F50 mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C076F52 add #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C076F56u, 2);  /* 0C076F54 mov.l @(disp,Rm),Rn */
	r7 = R32(r4); UPD(0x0C076F58u, 1);  /* 0C076F56 mov.l @Rm,Rn */
	IF(0x0C076F58u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C076F58 shld Rm,Rn */
	IF(0x0C076F5Au); r5 = R32(r0 + r7); UPD(0x0C076F5Cu, 2);  /* 0C076F5A mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C076F5Eu, 1);  /* 0C076F5C mov.l @(disp,Rm),Rn */
	IF(0x0C076F5Eu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C076F5E shld Rm,Rn */
	IF(0x0C076F60u); r4 = R32(r0 + r5); UPD(0x0C076F62u, 2);  /* 0C076F60 mov.l @(r0,Rm),Rn */
	r0 = 0x0u;  /* 0C076F62 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C076F66u, 2);  /* 0C076F64 mov.l Rm,@Rn */
	W32(r13, r4); UPD(0x0C076F68u, 1);  /* 0C076F66 mov.l Rm,@Rn */
	r0 = 0x29Cu; UPD(0x0C076F6Au, 1);  /* 0C076F68 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C076F6A mov #imm,Rn */
	IF(0x0C076F6Cu); r7 = R32(r0 + r3); UPD(0x0C076F6Eu, 2);  /* 0C076F6C mov.l @(r0,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C076F70u, 1);  /* 0C076F6E mov.l @(disp,Rm),Rn */
	IF(0x0C076F70u); { u32 t_ = r11; PR = 0x0C076F74u; r6 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C076F74u); }  /* 0C076F70 jsr @Rn */
L_0C076F74: BLKS(0x0C076F74u);
	r0 = 0xC071110u; UPD(0x0C076F76u, 1);  /* 0C076F74 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C076F76 add #imm,Rn */
	IF(0x0C076F78u); { u32 t_ = r0; PR = 0x0C076F7Cu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071110, 0x0C071110u, 0x0C076F7Cu); }  /* 0C076F78 jsr @Rn */
L_0C076F7C: BLKS(0x0C076F7Cu);
	{ r6 = r8; /* slot mov Rm,Rn */ UPD(0x0C076F1Eu, 3); goto L_0C076F1E; }  /* 0C076F7C bra */
}

/* FUN_0c076fa0 */
void blk_f_0C076FA0(sh3_t *c)
{
	LOCALS;
L_0C076FA0: BLKS(0x0C076FA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076FA2u, 1);  /* 0C076FA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076FA4u, 1);  /* 0C076FA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076FA6u, 1);  /* 0C076FA4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C076FA6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076FAAu, 2);  /* 0C076FA8 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C076FAA mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C076FAEu, 2);  /* 0C076FAC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076FB0u, 1);  /* 0C076FAE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076FB2u, 1);  /* 0C076FB0 mov.l Rm,@-Rn */
	r11 = 0xC29D1D8u; UPD(0x0C076FB4u, 1);  /* 0C076FB2 mov.l @(disp,pc),Rn */
	IF(0x0C076FB4u); r15 -= 4; W32(r15, PR); UPD(0x0C076FB6u, 1);  /* 0C076FB4 sts.l pr,@-Rn */
	r12 = 0xC076AF0u; UPD(0x0C076FB8u, 1);  /* 0C076FB6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C076FB8 mov Rm,Rn */
	r13 = 0xC238070u; UPD(0x0C076FBCu, 2);  /* 0C076FBA mov.l @(disp,pc),Rn */
L_0C076FBC: BLKS(0x0C076FBCu);
	r3 = r9;  /* 0C076FBC mov Rm,Rn */
	r3 += r11;  /* 0C076FBE add Rm,Rn */
	r1 = R32(r3); UPD(0x0C076FC2u, 3);  /* 0C076FC0 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C076FC4u, 1);  /* 0C076FC2 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C076FC4 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076FF0u, 4); goto L_0C076FF0; } UPD(0x0C076FCAu, 1); goto L_0C076FCA; }  /* 0C076FC6 bf/s */
L_0C076FCA: BLKS(0x0C076FCAu);
	r5 = r10;  /* 0C076FCA mov Rm,Rn */
	r5 += 0x1u;  /* 0C076FCC add #imm,Rn */
	r6 = 0x2A0u; UPD(0x0C076FD0u, 3);  /* 0C076FCE mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C076FD0 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C076FD2 mov #imm,Rn */
	T = (s32)r10 > (s32)r4;  /* 0C076FD4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C076FBCu, 6); goto L_0C076FBC; } goto L_0C076FDA; }  /* 0C076FD6 bf/s */
L_0C076FDA: BLKS(0x0C076FDAu);
	r15 = r14;  /* 0C076FDA mov Rm,Rn */
	IF(0x0C076FDCu); PR = R32(r15); r15 += 4; UPD(0x0C076FDEu, 3);  /* 0C076FDC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076FE0u, 1);  /* 0C076FDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076FE2u, 1);  /* 0C076FE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076FE4u, 1);  /* 0C076FE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076FE6u, 1);  /* 0C076FE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076FE8u, 1);  /* 0C076FE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076FEAu, 1);  /* 0C076FE8 mov.l @Rm+,Rn */
	IF(0x0C076FEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076FEA rts */
L_0C076FF0: BLKS(0x0C076FF0u);
	r8 = 0x28Bu; UPD(0x0C076FF2u, 1);  /* 0C076FF0 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C076FF2 add Rm,Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C076FF6u, 2);  /* 0C076FF4 mov.l @(disp,Rm),Rn */
	IF(0x0C076FF6u); { u32 t_ = r12; PR = 0x0C076FFAu; r5 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C076FFAu); }  /* 0C076FF6 jsr @Rn */
L_0C076FFA: BLKS(0x0C076FFAu);
	r2 = r0 & 0xFF;  /* 0C076FFA extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C076FFC tst Rm,Rn */
	{ u32 c_ = T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076FCAu, 5); goto L_0C076FCA; } UPD(0x0C077002u, 1); goto L_0C077002; }  /* 0C076FFE bt/s */
L_0C077002: BLKS(0x0C077002u);
	r3 = 0x1Fu;  /* 0C077002 mov #imm,Rn */
	r3 &= r0;  /* 0C077004 and Rm,Rn */
	r3 += r3;  /* 0C077006 add Rm,Rn */
	r3 += r13;  /* 0C077008 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C07700Cu, 5);  /* 0C07700A mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C07700C add #imm,Rn */
	{ W16(r3, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C076FCAu, 4); goto L_0C076FCA; }  /* 0C07700E bra */
}

void blk_f_0C077030(sh3_t *c)
{
	LOCALS;
L_0C077030: BLKS(0x0C077030u);
	r2 = 0x2A0u; UPD(0x0C077032u, 1);  /* 0C077030 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C077032 exts.w Rm,Rn */
	IF(0x0C077034u); MACL = r4 * r2;  /* 0C077034 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077038u, 4);  /* 0C077036 mov.l Rm,@-Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07703Au, 1);  /* 0C077038 mov.l @(disp,pc),Rn */
	IF(0x0C07703Au); r0 = MACL;  /* 0C07703A sts macl,Rn */
	IF(0x0C07703Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07703Eu, 2);  /* 0C07703C sts.l pr,@-Rn */
	r5 += r0;  /* 0C07703E add Rm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C077042u, 2);  /* 0C077040 mov.l @(disp,Rm),Rn */
	r3 = 0xC17F46Cu; UPD(0x0C077044u, 1);  /* 0C077042 mov.l @(disp,pc),Rn */
	IF(0x0C077044u); r0 <<= 2;  /* 0C077044 shll2 Rn */
	IF(0x0C077046u); r2 = R32(r0 + r3); UPD(0x0C077048u, 2);  /* 0C077046 mov.l @(r0,Rm),Rn */
	IF(0x0C077048u); { u32 t_ = r2; PR = 0x0C07704Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07704Cu); }  /* 0C077048 jsr @Rn */
L_0C07704C: BLKS(0x0C07704Cu);
	r15 = r14;  /* 0C07704C mov Rm,Rn */
	IF(0x0C07704Eu); PR = R32(r15); r15 += 4; UPD(0x0C077050u, 2);  /* 0C07704E lds.l @Rn+,pr */
	IF(0x0C077050u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077050 rts */
}

void blk_f_0C077060(sh3_t *c)
{
	LOCALS;
L_0C077060: BLKS(0x0C077060u);
	r2 = 0x2A0u; UPD(0x0C077062u, 1);  /* 0C077060 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C077062 exts.w Rm,Rn */
	IF(0x0C077064u); MACL = r4 * r2;  /* 0C077064 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077068u, 4);  /* 0C077066 mov.l Rm,@-Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07706Au, 1);  /* 0C077068 mov.l @(disp,pc),Rn */
	IF(0x0C07706Au); r0 = MACL;  /* 0C07706A sts macl,Rn */
	IF(0x0C07706Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07706Eu, 2);  /* 0C07706C sts.l pr,@-Rn */
	r5 += r0;  /* 0C07706E add Rm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C077072u, 2);  /* 0C077070 mov.l @(disp,Rm),Rn */
	r3 = 0xC17F46Cu; UPD(0x0C077074u, 1);  /* 0C077072 mov.l @(disp,pc),Rn */
	IF(0x0C077074u); r0 <<= 2;  /* 0C077074 shll2 Rn */
	IF(0x0C077076u); r2 = R32(r0 + r3); UPD(0x0C077078u, 2);  /* 0C077076 mov.l @(r0,Rm),Rn */
	IF(0x0C077078u); { u32 t_ = r2; PR = 0x0C07707Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07707Cu); }  /* 0C077078 jsr @Rn */
L_0C07707C: BLKS(0x0C07707Cu);
	r15 = r14;  /* 0C07707C mov Rm,Rn */
	IF(0x0C07707Eu); PR = R32(r15); r15 += 4; UPD(0x0C077080u, 2);  /* 0C07707E lds.l @Rn+,pr */
	IF(0x0C077080u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077080 rts */
}

void blk_f_0C077090(sh3_t *c)
{
	LOCALS;
L_0C077090: BLKS(0x0C077090u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077092u, 1);  /* 0C077090 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C077092 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077096u, 2);  /* 0C077094 mov.l Rm,@-Rn */
	r2 = 0xC3C86ACu; UPD(0x0C077098u, 1);  /* 0C077096 mov.l @(disp,pc),Rn */
	IF(0x0C077098u); r15 -= 4; W32(r15, PR); UPD(0x0C07709Au, 1);  /* 0C077098 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C07709Cu, 1);  /* 0C07709A mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07709C tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0770EEu, 4); goto L_0C0770EE; } goto L_0C0770A2; }  /* 0C07709E bf/s */
L_0C0770A2: BLKS(0x0C0770A2u);
	r8 = 0x2A0u; UPD(0x0C0770A4u, 2);  /* 0C0770A2 mov.w @(disp,pc),Rn */
	IF(0x0C0770A4u); MACL = r4 * r8;  /* 0C0770A4 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0770A8u, 3);  /* 0C0770A6 mov.l @(disp,pc),Rn */
	IF(0x0C0770A8u); r8 = MACL;  /* 0C0770A8 sts macl,Rn */
	r8 += r5;  /* 0C0770AA add Rm,Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C0770AEu, 3);  /* 0C0770AC mov.l @(disp,Rm),Rn */
	r0 = 0x20000u; UPD(0x0C0770B0u, 1);  /* 0C0770AE mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C0770B0 add Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C0770B4u, 2);  /* 0C0770B2 mov.l Rm,@(disp,Rn) */
	r0 = r4;  /* 0C0770B4 mov Rm,Rn */
	r2 = 0xC3C4048u; UPD(0x0C0770B8u, 2);  /* 0C0770B6 mov.l @(disp,pc),Rn */
	IF(0x0C0770B8u); r0 <<= 2;  /* 0C0770B8 shll2 Rn */
	r7 = 0xC17F760u; UPD(0x0C0770BCu, 2);  /* 0C0770BA mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0770BEu, 1);  /* 0C0770BC mov.l @Rm,Rn */
	IF(0x0C0770BEu); r6 = R32(r0 + r7); UPD(0x0C0770C0u, 1);  /* 0C0770BE mov.l @(r0,Rm),Rn */
	r0 = 0x400000u; UPD(0x0C0770C2u, 1);  /* 0C0770C0 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0770C2 add Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C0770C4 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077100u, 5); goto L_0C077100; } UPD(0x0C0770CAu, 1); goto L_0C0770CA; }  /* 0C0770C6 bt/s */
L_0C0770CA: BLKS(0x0C0770CAu);
	r1 = 0x288u; UPD(0x0C0770CCu, 1);  /* 0C0770CA mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0770CC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0770D0u, 2);  /* 0C0770CE mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0770D0 tst Rm,Rn */
	if (T) { UPD(0x0C0770E6u, 4); goto L_0C0770E6; }  /* 0C0770D2 bt */
L_0C0770D4: BLKS(0x0C0770D4u);
	r0 += 0xFFFFFFFFu;  /* 0C0770D4 add #imm,Rn */
	W8(r1, r0); UPD(0x0C0770D8u, 2);  /* 0C0770D6 mov.b Rm,@Rn */
	r7 = 0x2u;  /* 0C0770D8 mov #imm,Rn */
	r0 &= r7;  /* 0C0770DA and Rm,Rn */
	r6 = 0xC17F4F4u; UPD(0x0C0770DEu, 3);  /* 0C0770DC mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0770DE add Rm,Rn */
	IF(0x0C0770E0u); r4 = R32(r0 + r6); UPD(0x0C0770E2u, 2);  /* 0C0770E0 mov.l @(r0,Rm),Rn */
	r0 = 0x29Cu; UPD(0x0C0770E4u, 1);  /* 0C0770E2 mov.w @(disp,pc),Rn */
	IF(0x0C0770E4u); W32(r0 + r8, r4); UPD(0x0C0770E6u, 1);  /* 0C0770E4 mov.l Rm,@(r0,Rn) */
L_0C0770E6: BLKS(0x0C0770E6u);
	r0 = R32(r8 + 0xCu); UPD(0x0C0770E8u, 1);  /* 0C0770E6 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0770E8 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0770EA and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0770EEu, 3);  /* 0C0770EC mov.l Rm,@(disp,Rn) */
L_0C0770EE: BLKS(0x0C0770EEu);
	r15 = r14;  /* 0C0770EE mov Rm,Rn */
	IF(0x0C0770F0u); PR = R32(r15); r15 += 4; UPD(0x0C0770F2u, 2);  /* 0C0770F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0770F4u, 1);  /* 0C0770F2 mov.l @Rm+,Rn */
	IF(0x0C0770F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0770F4 rts */
L_0C077100: BLKS(0x0C077100u);
	r0 = 0xC07E0A0u; UPD(0x0C077102u, 1);  /* 0C077100 mov.l @(disp,pc),Rn */
	r3 = 0x5u;  /* 0C077102 mov #imm,Rn */
	IF(0x0C077104u); { u32 t_ = r0; PR = 0x0C077108u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07E0A0, 0x0C07E0A0u, 0x0C077108u); }  /* 0C077104 jsr @Rn */
L_0C077108: BLKS(0x0C077108u);
	{ IF(0x0C07710Au); ; /* slot nop */ UPD(0x0C0770CAu, 3); goto L_0C0770CA; }  /* 0C077108 bra */
}

/* FUN_0c077140 */
void blk_f_0C077140(sh3_t *c)
{
	LOCALS;
L_0C077140: BLKS(0x0C077140u);
	r5 = 0x2A0u; UPD(0x0C077142u, 1);  /* 0C077140 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C077142 mov #imm,Rn */
	IF(0x0C077144u); MACL = r4 * r5;  /* 0C077144 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C077148u, 4);  /* 0C077146 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C077148 mov #imm,Rn */
	IF(0x0C07714Au); r0 = MACL;  /* 0C07714A sts macl,Rn */
	r0 += r3;  /* 0C07714C add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077150u, 4);  /* 0C07714E mov.l Rm,@-Rn */
	r2 = 0x26Fu; UPD(0x0C077152u, 1);  /* 0C077150 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C077152 mov Rm,Rn */
	r3 = 0x269u; UPD(0x0C077156u, 2);  /* 0C077154 mov.w @(disp,pc),Rn */
	IF(0x0C077156u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C077158u, 1);  /* 0C077156 mov.b @(r0,Rm),Rn */
	r3 += r0;  /* 0C077158 add Rm,Rn */
	r0 = 0xCu;  /* 0C07715A mov #imm,Rn */
	IF(0x0C07715Cu); MACL = r4 * r0;  /* 0C07715C mul.l Rm,Rn */
	r0 = 0xC17F51Bu; UPD(0x0C077160u, 5);  /* 0C07715E mov.l @(disp,pc),Rn */
	IF(0x0C077160u); r2 = MACL;  /* 0C077160 sts macl,Rn */
	r2 += r0;  /* 0C077162 add Rm,Rn */
	UPD(0x0C077164u, 2);
L_0C077164: BLKS(0x0C077164u);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C077166u, 1);  /* 0C077164 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C077166 add #imm,Rn */
	W8(r3, r0); UPD(0x0C07716Au, 2);  /* 0C077168 mov.b Rm,@Rn */
	r2 += 0x4u;  /* 0C07716A add #imm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C07716C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077164u, 5); goto L_0C077164; } goto L_0C077172; }  /* 0C07716E bf/s */
L_0C077172: BLKS(0x0C077172u);
	r15 = r14;  /* 0C077172 mov Rm,Rn */
	IF(0x0C077174u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C077174 rts */
}


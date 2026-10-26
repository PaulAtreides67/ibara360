#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0B0D60(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0D60;
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
L_0C0B0CD8: BLKS(0x0C0B0CD8u);
	W8(r2, r13); UPD(0x0C0B0CDAu, 1);  /* 0C0B0CD8 mov.b Rm,@Rn */
L_0C0B0CDA: BLKS(0x0C0B0CDAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0CDA bra */
L_0C0B0CF8: BLKS(0x0C0B0CF8u);
	if (!T) { UPD(0x0C0B0CDAu, 3); goto L_0C0B0CDA; }  /* 0C0B0CF8 bf */
L_0C0B0CFA: BLKS(0x0C0B0CFAu);
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CFCu, 1);  /* 0C0B0CFA mov.b @Rm,Rn */
	{ r13 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B0CD8u, 3); goto L_0C0B0CD8; }  /* 0C0B0CFC bra */
L_0C0B0D60: BLKS(0x0C0B0D60u);
	r4 = 0xB4u; UPD(0x0C0B0D62u, 1);  /* 0C0B0D60 mov.w @(disp,pc),Rn */
	r8 = R32(r14); UPD(0x0C0B0D64u, 1);  /* 0C0B0D62 mov.l @Rm,Rn */
	IF(0x0C0B0D64u); MACL = r8 * r4;  /* 0C0B0D64 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0D68u, 3);  /* 0C0B0D66 mov.l @(disp,pc),Rn */
	IF(0x0C0B0D68u); r2 = MACL;  /* 0C0B0D68 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C0B0D6Cu, 2);  /* 0C0B0D6A mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C0B0D6C add Rm,Rn */
	r2 += r10;  /* 0C0B0D6E add Rm,Rn */
	r2 += 0x2u;  /* 0C0B0D70 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0D74u, 4);  /* 0C0B0D72 mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C0B0D74 and #imm,r0 */
	r2 += 0xFFFFFFFEu;  /* 0C0B0D76 add #imm,Rn */
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C0B0CF8u, 5); goto L_0C0B0CF8; }  /* 0C0B0D78 bra */
}

void blk_f_0C0B0D80(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0D80;
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
L_0C0B0D2C: BLKS(0x0C0B0D2Cu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0D2C bra */
L_0C0B0D80: BLKS(0x0C0B0D80u);
	r9 = R32(r14); UPD(0x0C0B0D82u, 1);  /* 0C0B0D80 mov.l @Rm,Rn */
	r5 = 0xB4u; UPD(0x0C0B0D84u, 1);  /* 0C0B0D82 mov.w @(disp,pc),Rn */
	IF(0x0C0B0D84u); MACL = r9 * r5;  /* 0C0B0D84 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0D88u, 3);  /* 0C0B0D86 mov.l @(disp,pc),Rn */
	IF(0x0C0B0D88u); r3 = MACL;  /* 0C0B0D88 sts macl,Rn */
	r3 += r0;  /* 0C0B0D8A add Rm,Rn */
	r0 = 0x99u; UPD(0x0C0B0D8Eu, 3);  /* 0C0B0D8C mov.w @(disp,pc),Rn */
	IF(0x0C0B0D8Eu); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B0D90u, 1);  /* 0C0B0D8E mov.b @(r0,Rm),Rn */
	r11 = 0xF0u; UPD(0x0C0B0D92u, 1);  /* 0C0B0D90 mov.w @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C0B0D92 add #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C0B0D94 extu.b Rm,Rn */
	T = r12 == r11;  /* 0C0B0D96 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B0D9Au); W8(r0 + r3, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B0D2Cu, 6); goto L_0C0B0D2C; } UPD(0x0C0B0D9Cu, 1); goto L_0C0B0D9C; }  /* 0C0B0D98 bf/s */
L_0C0B0D9C: BLKS(0x0C0B0D9Cu);
	r10 = 0x0u;  /* 0C0B0D9C mov #imm,Rn */
	IF(0x0C0B0D9Eu); W8(r0 + r3, r10); UPD(0x0C0B0DA0u, 2);  /* 0C0B0D9E mov.b Rm,@(r0,Rn) */
	r0 += 0x7u;  /* 0C0B0DA0 add #imm,Rn */
	IF(0x0C0B0DA2u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B0DA4u, 2);  /* 0C0B0DA2 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B0DA4 add #imm,Rn */
	IF(0x0C0B0DA6u); W8(r0 + r3, r4); UPD(0x0C0B0DA8u, 2);  /* 0C0B0DA6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DA8 bra */
}

void blk_f_0C0B0DA4(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0DA4;
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
L_0C0B0DA4: BLKS(0x0C0B0DA4u);
	r4 += 0x1u;  /* 0C0B0DA4 add #imm,Rn */
	IF(0x0C0B0DA6u); W8(r0 + r3, r4); UPD(0x0C0B0DA8u, 2);  /* 0C0B0DA6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DA8 bra */
}

void blk_f_0C0B0DB0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0DB0;
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
L_0C0B0CD4: BLKS(0x0C0B0CD4u);
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CD6u, 1);  /* 0C0B0CD4 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C0B0CD6 add #imm,Rn */
	W8(r2, r13); UPD(0x0C0B0CDAu, 2);  /* 0C0B0CD8 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0CDA bra */
L_0C0B0DB0: BLKS(0x0C0B0DB0u);
	r1 = R32(r14); UPD(0x0C0B0DB2u, 1);  /* 0C0B0DB0 mov.l @Rm,Rn */
	r12 = 0xB4u; UPD(0x0C0B0DB4u, 1);  /* 0C0B0DB2 mov.w @(disp,pc),Rn */
	IF(0x0C0B0DB4u); MACL = r1 * r12;  /* 0C0B0DB4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0DB8u, 3);  /* 0C0B0DB6 mov.l @(disp,pc),Rn */
	IF(0x0C0B0DB8u); r2 = MACL;  /* 0C0B0DB8 sts macl,Rn */
	r11 = 0xA0u; UPD(0x0C0B0DBCu, 2);  /* 0C0B0DBA mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B0DBC add Rm,Rn */
	r2 += r11;  /* 0C0B0DBE add Rm,Rn */
	r7 = r2;  /* 0C0B0DC0 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0B0DC2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B0DC6u, 5);  /* 0C0B0DC4 mov.b @Rm,Rn */
	r0 &= 0xBFu;  /* 0C0B0DC6 and #imm,r0 */
	W8(r7, r0); UPD(0x0C0B0DCAu, 2);  /* 0C0B0DC8 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C0B0DCA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B0DCEu, 2);  /* 0C0B0DCC mov.b @Rm,Rn */
	r0 |= 0x20u;  /* 0C0B0DCE or #imm,r0 */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B0CD4u, 4); goto L_0C0B0CD4; }  /* 0C0B0DD0 bra */
}

void blk_f_0C0B0DE0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0DE0;
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
L_0C0B0DA8: BLKS(0x0C0B0DA8u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DA8 bra */
L_0C0B0DE0: BLKS(0x0C0B0DE0u);
	r2 = 0xB4u; UPD(0x0C0B0DE2u, 1);  /* 0C0B0DE0 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C0B0DE4u, 1);  /* 0C0B0DE2 mov.l @Rm,Rn */
	IF(0x0C0B0DE4u); MACL = r9 * r2;  /* 0C0B0DE4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0DE8u, 3);  /* 0C0B0DE6 mov.l @(disp,pc),Rn */
	r0 = 0xA0u; UPD(0x0C0B0DEAu, 1);  /* 0C0B0DE8 mov.w @(disp,pc),Rn */
	IF(0x0C0B0DEAu); r2 = MACL;  /* 0C0B0DEA sts macl,Rn */
	r2 += r5;  /* 0C0B0DEC add Rm,Rn */
	r2 += r0;  /* 0C0B0DEE add Rm,Rn */
	r2 += 0x2u;  /* 0C0B0DF0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0DF4u, 5);  /* 0C0B0DF2 mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C0B0DF4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B0DF6 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0DA8u, 5); goto L_0C0B0DA8; } goto L_0C0B0DFC; }  /* 0C0B0DF8 bf/s */
L_0C0B0DFC: BLKS(0x0C0B0DFCu);
	W8(r2, r0); UPD(0x0C0B0DFEu, 2);  /* 0C0B0DFC mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DFE bra */
}

void blk_f_0C0B0E34(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0E34;
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
L_0C0B0E34: BLKS(0x0C0B0E34u);
	W8(r8, r1); UPD(0x0C0B0E36u, 1);  /* 0C0B0E34 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0E36 bra */
}

void blk_f_0C0B0F10(sh3_t *c)
{
	LOCALS;
L_0C0B0F10: BLKS(0x0C0B0F10u);
	r10 = 0xC0A8CA0u; UPD(0x0C0B0F12u, 1);  /* 0C0B0F10 mov.l @(disp,pc),Rn */
	IF(0x0C0B0F12u); { u32 t_ = r10; PR = 0x0C0B0F16u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B0F16u); }  /* 0C0B0F12 jsr @Rn */
L_0C0B0F16: BLKS(0x0C0B0F16u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B0F16 exts.w Rm,Rn */
	IF(0x0C0B0F18u); T = (s32)r8 >= 0;  /* 0C0B0F18 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0F40u, 5); goto L_0C0B0F40; }  /* 0C0B0F1A bf */
L_0C0B0F1C: BLKS(0x0C0B0F1Cu);
	r4 = R32(r14); UPD(0x0C0B0F1Eu, 1);  /* 0C0B0F1C mov.l @Rm,Rn */
	r5 = r8;  /* 0C0B0F1E mov Rm,Rn */
	r6 = 0x1u;  /* 0C0B0F20 mov #imm,Rn */
	r7 = 0xC0B0930u; UPD(0x0C0B0F24u, 3);  /* 0C0B0F22 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F24 add #imm,Rn */
	r15 = r14;  /* 0C0B0F26 mov Rm,Rn */
	IF(0x0C0B0F28u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F2Au, 3);  /* 0C0B0F28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F2Cu, 1);  /* 0C0B0F2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F2Eu, 1);  /* 0C0B0F2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F30u, 1);  /* 0C0B0F2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F32u, 1);  /* 0C0B0F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F34u, 1);  /* 0C0B0F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F36u, 1);  /* 0C0B0F34 mov.l @Rm+,Rn */
	IF(0x0C0B0F36u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F36 jmp @Rn */
L_0C0B0F40: BLKS(0x0C0B0F40u);
	r4 = R32(r14); UPD(0x0C0B0F42u, 1);  /* 0C0B0F40 mov.l @Rm,Rn */
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
}

void blk_f_0C0B0F42(sh3_t *c)
{
	LOCALS;
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
}

void blk_f_0C0B0F44(sh3_t *c)
{
	LOCALS;
L_0C0B0F44: BLKS(0x0C0B0F44u);
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
}

void blk_f_0C0B0F46(sh3_t *c)
{
	LOCALS;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
}

void blk_f_0C0B0F60(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0F60;
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
L_0C0B0F0A: BLKS(0x0C0B0F0Au);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0F0A bra */
L_0C0B0F40: BLKS(0x0C0B0F40u);
	r4 = R32(r14); UPD(0x0C0B0F42u, 1);  /* 0C0B0F40 mov.l @Rm,Rn */
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B0F60: BLKS(0x0C0B0F60u);
	r11 = 0xC0A8BF0u; UPD(0x0C0B0F62u, 1);  /* 0C0B0F60 mov.l @(disp,pc),Rn */
	IF(0x0C0B0F62u); { u32 t_ = r11; PR = 0x0C0B0F66u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C0B0F66u); }  /* 0C0B0F62 jsr @Rn */
L_0C0B0F66: BLKS(0x0C0B0F66u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B0F66 exts.w Rm,Rn */
	IF(0x0C0B0F68u); T = (s32)r8 >= 0;  /* 0C0B0F68 cmp/pz Rn */
	{ u32 c_ = !T; r12 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B0F40u, 5); goto L_0C0B0F40; } UPD(0x0C0B0F6Eu, 1); goto L_0C0B0F6E; }  /* 0C0B0F6A bf/s */
L_0C0B0F6E: BLKS(0x0C0B0F6Eu);
	r3 = 0xB4u; UPD(0x0C0B0F70u, 1);  /* 0C0B0F6E mov.w @(disp,pc),Rn */
	IF(0x0C0B0F70u); MACL = r12 * r3;  /* 0C0B0F70 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B0F74u, 3);  /* 0C0B0F72 mov.l @(disp,pc),Rn */
	IF(0x0C0B0F74u); r0 = MACL;  /* 0C0B0F74 sts macl,Rn */
	r0 += r4;  /* 0C0B0F76 add Rm,Rn */
	r12 = R32(r0); UPD(0x0C0B0F7Au, 3);  /* 0C0B0F78 mov.l @Rm,Rn */
	IF(0x0C0B0F7Au); MACL = r8 * r3;  /* 0C0B0F7A mul.l Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0B0F7Eu, 3);  /* 0C0B0F7C mov.w @(disp,pc),Rn */
	r12 &= r2;  /* 0C0B0F7E and Rm,Rn */
	W32(r0, r12); UPD(0x0C0B0F82u, 2);  /* 0C0B0F80 mov.l Rm,@Rn */
	IF(0x0C0B0F82u); r5 = MACL;  /* 0C0B0F82 sts macl,Rn */
	r5 += r4;  /* 0C0B0F84 add Rm,Rn */
	r13 = R32(r5); UPD(0x0C0B0F88u, 3);  /* 0C0B0F86 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B0F8Au, 1);  /* 0C0B0F88 mov.w @(disp,pc),Rn */
	r3 = 0x9Fu; UPD(0x0C0B0F8Cu, 1);  /* 0C0B0F8A mov.w @(disp,pc),Rn */
	r13 &= r1;  /* 0C0B0F8C and Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C0B0F90u, 2);  /* 0C0B0F8E mov.l @(disp,Rm),Rn */
	r12 |= r13;  /* 0C0B0F90 or Rm,Rn */
	r6 = R32(r0 + 0x2Cu); UPD(0x0C0B0F94u, 2);  /* 0C0B0F92 mov.l @(disp,Rm),Rn */
	r10 = R32(r5 + 0x28u); UPD(0x0C0B0F96u, 1);  /* 0C0B0F94 mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C0B0F96 add Rm,Rn */
	r7 = R32(r0 + 0x30u); UPD(0x0C0B0F9Au, 2);  /* 0C0B0F98 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0B0F9A mov #imm,Rn */
	r9 = R32(r5 + 0x38u); UPD(0x0C0B0F9Eu, 2);  /* 0C0B0F9C mov.l @(disp,Rm),Rn */
	r10 += r7;  /* 0C0B0F9E add Rm,Rn */
	IF(0x0C0B0FA0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B0FA2u, 2);  /* 0C0B0FA0 mov.b @(r0,Rm),Rn */
	W32(r0 + 0x24u, r11); UPD(0x0C0B0FA4u, 1);  /* 0C0B0FA2 mov.l Rm,@(disp,Rn) */
	r2 = r4 & 0xFF;  /* 0C0B0FA4 extu.b Rm,Rn */
	W32(r0 + 0x28u, r10); UPD(0x0C0B0FA8u, 2);  /* 0C0B0FA6 mov.l Rm,@(disp,Rn) */
	T = r2 > r6;  /* 0C0B0FA8 cmp/hi Rm,Rn */
	W32(r0 + 0x38u, r9); UPD(0x0C0B0FACu, 2);  /* 0C0B0FAA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r0, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B0F0Au, 3); goto L_0C0B0F0A; } UPD(0x0C0B0FB0u, 1); goto L_0C0B0FB0; }  /* 0C0B0FAC bt/s */
L_0C0B0FB0: BLKS(0x0C0B0FB0u);
	r0 = 0xC0B1004u;  /* 0C0B0FB0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B0FB2 add Rm,Rn */
	IF(0x0C0B0FB4u); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B0FB6u, 3);  /* 0C0B0FB4 mov.w @(r0,Rm),Rn */
	IF(0x0C0B0FB6u); { u32 tv_ = (r13 + 0x0C0B0FBAu); u32 t_ = PHYS(tv_); IF(0x0C0B0FB8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0FB6 braf Rn */
}

void blk_f_0C0B1010(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1010;
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
L_0C0B1010: BLKS(0x0C0B1010u);
	r2 = 0xB4u; UPD(0x0C0B1012u, 1);  /* 0C0B1010 mov.w @(disp,pc),Rn */
	IF(0x0C0B1012u); MACL = r8 * r2;  /* 0C0B1012 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B1016u, 3);  /* 0C0B1014 mov.l @(disp,pc),Rn */
	IF(0x0C0B1016u); r0 = MACL;  /* 0C0B1016 sts macl,Rn */
	r5 = 0xA1u; UPD(0x0C0B101Au, 2);  /* 0C0B1018 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0B101A add Rm,Rn */
	IF(0x0C0B101Cu); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B101Eu, 2);  /* 0C0B101C mov.b @(r0,Rm),Rn */
	IF(0x0C0B101Eu); T = (s32)r8 >= 0;  /* 0C0B101E cmp/pz Rn */
	if (T) { UPD(0x0C0B1046u, 4); goto L_0C0B1046; }  /* 0C0B1020 bt */
L_0C0B1022: BLKS(0x0C0B1022u);
	r10 = R32(r14); UPD(0x0C0B1024u, 1);  /* 0C0B1022 mov.l @Rm,Rn */
	r4 = 0x6Cu;  /* 0C0B1024 mov #imm,Rn */
	IF(0x0C0B1026u); MACL = r10 * r2;  /* 0C0B1026 mul.l Rm,Rn */
	r0 = 0xC0C2110u; UPD(0x0C0B102Au, 4);  /* 0C0B1028 mov.l @(disp,pc),Rn */
	IF(0x0C0B102Au); r8 = MACL;  /* 0C0B102A sts macl,Rn */
	r8 += r3;  /* 0C0B102C add Rm,Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0B1030u, 3);  /* 0C0B102E mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C0B1030 add #imm,Rn */
	IF(0x0C0B1032u); { u32 t_ = r0; PR = 0x0C0B1036u; W32(r8, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B1036u); }  /* 0C0B1032 jsr @Rn */
L_0C0B1036: BLKS(0x0C0B1036u);
	r0 = 0x88u; UPD(0x0C0B1038u, 1);  /* 0C0B1036 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0B1038 add #imm,Rn */
	r2 = 0x1u;  /* 0C0B103A mov #imm,Rn */
	IF(0x0C0B103Cu); W16(r0 + r8, r2); UPD(0x0C0B103Eu, 3);  /* 0C0B103C mov.w Rm,@(r0,Rn) */
	r0 += 0x17u;  /* 0C0B103E add #imm,Rn */
	IF(0x0C0B1040u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B1042u, 2);  /* 0C0B1040 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B1042 add #imm,Rn */
	IF(0x0C0B1044u); W8(r0 + r8, r4); UPD(0x0C0B1046u, 2);  /* 0C0B1044 mov.b Rm,@(r0,Rn) */
L_0C0B1046: BLKS(0x0C0B1046u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1046 bra */
}

void blk_f_0C0B1050(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1050;
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
L_0C0B1046: BLKS(0x0C0B1046u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1046 bra */
L_0C0B1050: BLKS(0x0C0B1050u);
	r7 = 0xB4u; UPD(0x0C0B1052u, 1);  /* 0C0B1050 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B1054u, 1);  /* 0C0B1052 mov.l @Rm,Rn */
	IF(0x0C0B1054u); MACL = r1 * r7;  /* 0C0B1054 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B1058u, 3);  /* 0C0B1056 mov.l @(disp,pc),Rn */
	IF(0x0C0B1058u); r7 = MACL;  /* 0C0B1058 sts macl,Rn */
	r7 += r12;  /* 0C0B105A add Rm,Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0B105Eu, 3);  /* 0C0B105C mov.l @(disp,Rm),Rn */
	r3 = 0x8000u; UPD(0x0C0B1060u, 1);  /* 0C0B105E mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0B1060 add Rm,Rn */
	W32(r7 + 0x2Cu, r6); UPD(0x0C0B1064u, 2);  /* 0C0B1062 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C0B1064 add #imm,Rn */
	r11 = R32(r7); UPD(0x0C0B1068u, 2);  /* 0C0B1066 mov.l @Rm,Rn */
	r4 = 0x80000u; UPD(0x0C0B106Au, 1);  /* 0C0B1068 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C0B106A add Rm,Rn */
	T = r6 == r11;  /* 0C0B106C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1046u, 5); goto L_0C0B1046; } goto L_0C0B1072; }  /* 0C0B106E bf/s */
L_0C0B1072: BLKS(0x0C0B1072u);
	r0 = 0x9Fu; UPD(0x0C0B1074u, 2);  /* 0C0B1072 mov.w @(disp,pc),Rn */
	IF(0x0C0B1074u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1076u, 1);  /* 0C0B1074 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1076 add #imm,Rn */
	IF(0x0C0B1078u); W8(r0 + r7, r1); UPD(0x0C0B107Au, 2);  /* 0C0B1078 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B107A bra */
}

void blk_f_0C0B1074(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1074;
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
L_0C0B1074: BLKS(0x0C0B1074u);
	IF(0x0C0B1074u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1076u, 1);  /* 0C0B1074 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1076 add #imm,Rn */
	IF(0x0C0B1078u); W8(r0 + r7, r1); UPD(0x0C0B107Au, 2);  /* 0C0B1078 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B107A bra */
}

void blk_f_0C0B1080(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1080;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	UPD(0x0C0B0BFEu, 1);
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
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B107A: BLKS(0x0C0B107Au);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B107A bra */
L_0C0B1080: BLKS(0x0C0B1080u);
	r10 = 0xB4u; UPD(0x0C0B1082u, 1);  /* 0C0B1080 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B1084u, 1);  /* 0C0B1082 mov.l @Rm,Rn */
	IF(0x0C0B1084u); MACL = r2 * r10;  /* 0C0B1084 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B1088u, 3);  /* 0C0B1086 mov.l @(disp,pc),Rn */
	IF(0x0C0B1088u); r5 = MACL;  /* 0C0B1088 sts macl,Rn */
	r5 += r9;  /* 0C0B108A add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B108Eu, 3);  /* 0C0B108C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B108E tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1098u, 4); goto L_0C0B1098; } UPD(0x0C0B1094u, 1); goto L_0C0B1094; }  /* 0C0B1090 bf/s */
L_0C0B1094: BLKS(0x0C0B1094u);
	{ r0 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B1250u, 3); goto L_0C0B1250; }  /* 0C0B1094 bra */
L_0C0B1098: BLKS(0x0C0B1098u);
	T = r0 == 0x9u;  /* 0C0B1098 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B10F0u, 4); goto L_0C0B10F0; } UPD(0x0C0B109Eu, 1); goto L_0C0B109E; }  /* 0C0B109A bt/s */
L_0C0B109E: BLKS(0x0C0B109Eu);
	r3 = 0xB4u; UPD(0x0C0B10A0u, 1);  /* 0C0B109E mov.w @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C0B10A0 mov #imm,Rn */
	r7 = R32(r14); UPD(0x0C0B10A4u, 2);  /* 0C0B10A2 mov.l @Rm,Rn */
	IF(0x0C0B10A4u); MACL = r7 * r3;  /* 0C0B10A4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B10A8u, 3);  /* 0C0B10A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B10A8u); r3 = MACL;  /* 0C0B10A8 sts macl,Rn */
	r3 += r0;  /* 0C0B10AA add Rm,Rn */
	r0 = 0x99u; UPD(0x0C0B10AEu, 3);  /* 0C0B10AC mov.w @(disp,pc),Rn */
	IF(0x0C0B10AEu); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B10B0u, 1);  /* 0C0B10AE mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C0B10B0 add #imm,Rn */
	r4 = r12 & 0xFF;  /* 0C0B10B2 extu.b Rm,Rn */
	T = r4 > r6;  /* 0C0B10B4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0B10B8u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B107Au, 6); goto L_0C0B107A; } UPD(0x0C0B10BAu, 1); goto L_0C0B10BA; }  /* 0C0B10B6 bf/s */
L_0C0B10BA: BLKS(0x0C0B10BAu);
	r13 = 0x0u;  /* 0C0B10BA mov #imm,Rn */
	IF(0x0C0B10BCu); W8(r0 + r3, r13); UPD(0x0C0B10BEu, 2);  /* 0C0B10BC mov.b Rm,@(r0,Rn) */
	r0 = 0x88u; UPD(0x0C0B10C0u, 1);  /* 0C0B10BE mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0B10C2u, 1);  /* 0C0B10C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B10C2u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B10C4u, 1);  /* 0C0B10C2 mov.w @(r0,Rm),Rn */
	r1 += r4;  /* 0C0B10C4 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0B10C8u, 2);  /* 0C0B10C6 mov.l Rm,@(disp,Rn) */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
L_0C0B10F0: BLKS(0x0C0B10F0u);
	r11 = 0xC0BC1B0u; UPD(0x0C0B10F2u, 1);  /* 0C0B10F0 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0B10F2 mov #imm,Rn */
	IF(0x0C0B10F4u); { u32 t_ = r11; PR = 0x0C0B10F8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B10F8u); }  /* 0C0B10F4 jsr @Rn */
L_0C0B10F8: BLKS(0x0C0B10F8u);
	T = (r0 & r0) == 0;  /* 0C0B10F8 tst Rm,Rn */
	if (T) { UPD(0x0C0B107Au, 4); goto L_0C0B107A; }  /* 0C0B10FA bt */
L_0C0B10FC: BLKS(0x0C0B10FCu);
	IF(0x0C0B10FCu); MACL = r8 * r10;  /* 0C0B10FC mul.l Rm,Rn */
	r5 = 0xA1u; UPD(0x0C0B1100u, 3);  /* 0C0B10FE mov.w @(disp,pc),Rn */
	IF(0x0C0B1100u); r0 = MACL;  /* 0C0B1100 sts macl,Rn */
	r0 += r9;  /* 0C0B1102 add Rm,Rn */
	IF(0x0C0B1104u); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B1106u, 3);  /* 0C0B1104 mov.b @(r0,Rm),Rn */
	IF(0x0C0B1106u); T = r0 >> 31; r0 <<= 1;  /* 0C0B1106 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0B1108 subc Rm,Rn */
	r0 += 0x1u;  /* 0C0B110A add #imm,Rn */
	T = r0 == 0x1u;  /* 0C0B110C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B1116u, 7); goto L_0C0B1116; }  /* 0C0B110E bf */
L_0C0B1110: BLKS(0x0C0B1110u);
	r0 = R32(r14 + 0x8u); UPD(0x0C0B1112u, 1);  /* 0C0B1110 mov.l @(disp,Rm),Rn */
	{ r6 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(0x0C0B1240u, 3); goto L_0C0B1240; }  /* 0C0B1112 bra */
L_0C0B1116: BLKS(0x0C0B1116u);
	r1 = R32(r14 + 0x8u); UPD(0x0C0B1118u, 1);  /* 0C0B1116 mov.l @(disp,Rm),Rn */
	r9 = 0x9Cu; UPD(0x0C0B111Au, 1);  /* 0C0B1118 mov.w @(disp,pc),Rn */
	r9 += r1;  /* 0C0B111A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B111Eu, 2);  /* 0C0B111C mov.b @Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C0B1120u, 1);  /* 0C0B111E mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B1120 add #imm,Rn */
	W8(r9, r4); UPD(0x0C0B1124u, 2);  /* 0C0B1122 mov.b Rm,@Rn */
	IF(0x0C0B1124u); { u32 t_ = r11; PR = 0x0C0B1128u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B1128u); }  /* 0C0B1124 jsr @Rn */
L_0C0B1128: BLKS(0x0C0B1128u);
	r5 = R32(r14 + 0x8u); UPD(0x0C0B112Au, 1);  /* 0C0B1128 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0B112A exts.w Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C0B112Eu, 2);  /* 0C0B112C mov.l @(disp,Rm),Rn */
	r10 = 0x60000u; UPD(0x0C0B1130u, 1);  /* 0C0B112E mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B1132u, 1);  /* 0C0B1130 mov.b @Rm,Rn */
	r11 += r10;  /* 0C0B1132 add Rm,Rn */
	r10 = 0xC1E4C48u; UPD(0x0C0B1136u, 2);  /* 0C0B1134 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B1136 and #imm,r0 */
	r7 = 0x2A0u; UPD(0x0C0B113Au, 2);  /* 0C0B1138 mov.w @(disp,pc),Rn */
	IF(0x0C0B113Au); r0 <<= 2;  /* 0C0B113A shll2 Rn */
	IF(0x0C0B113Cu); MACL = r12 * r7;  /* 0C0B113C mul.l Rm,Rn */
	IF(0x0C0B113Eu); r2 = R32(r0 + r10); UPD(0x0C0B1140u, 4);  /* 0C0B113E mov.l @(r0,Rm),Rn */
	r4 = r11;  /* 0C0B1140 mov Rm,Rn */
	r13 = R32(r14 + 0x8u); UPD(0x0C0B1144u, 2);  /* 0C0B1142 mov.l @(disp,Rm),Rn */
	IF(0x0C0B1144u); r3 = MACL;  /* 0C0B1144 sts macl,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C0B1148u, 2);  /* 0C0B1146 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C0B114Au, 1);  /* 0C0B1148 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0B114A add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C0B114Eu, 2);  /* 0C0B114C mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0B1150u, 1);  /* 0C0B114E mov.l @(disp,Rm),Rn */
	r5 += r2;  /* 0C0B1150 add Rm,Rn */
	IF(0x0C0B1152u); { u32 t_ = r8; PR = 0x0C0B1156u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B1156u); }  /* 0C0B1152 jsr @Rn */
L_0C0B1156: BLKS(0x0C0B1156u);
	r6 = (u32)(s32)(s16)r0;  /* 0C0B1156 exts.w Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0B115Au, 2);  /* 0C0B1158 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C0B115A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B115Eu, 2);  /* 0C0B115C mov.b @Rm,Rn */
	r5 = r11;  /* 0C0B115E mov Rm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C0B1162u, 2);  /* 0C0B1160 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B1162 and #imm,r0 */
	IF(0x0C0B1164u); r0 <<= 2;  /* 0C0B1164 shll2 Rn */
	IF(0x0C0B1166u); r13 = R32(r0 + r10); UPD(0x0C0B1168u, 3);  /* 0C0B1166 mov.l @(r0,Rm),Rn */
	r6 = R32(r4 + 0x28u); UPD(0x0C0B116Au, 1);  /* 0C0B1168 mov.l @(disp,Rm),Rn */
	r12 = 0x1C000u; UPD(0x0C0B116Cu, 1);  /* 0C0B116A mov.l @(disp,pc),Rn */
	r6 += r13;  /* 0C0B116C add Rm,Rn */
	W32(r15, r12); UPD(0x0C0B1170u, 2);  /* 0C0B116E mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0B1170 mov #imm,Rn */
	r13 = 0xC189E48u; UPD(0x0C0B1174u, 2);  /* 0C0B1172 mov.l @(disp,pc),Rn */
	r12 = 0xC0BA970u; UPD(0x0C0B1176u, 1);  /* 0C0B1174 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B1178u, 1);  /* 0C0B1176 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1178u); { u32 t_ = r12; PR = 0x0C0B117Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B117Cu); }  /* 0C0B1178 jsr @Rn */
L_0C0B117C: BLKS(0x0C0B117Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B117Eu, 1);  /* 0C0B117C mov.b @Rm,Rn */
	r5 = r11;  /* 0C0B117E mov Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B1182u, 2);  /* 0C0B1180 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B1182 and #imm,r0 */
	IF(0x0C0B1184u); r0 <<= 2;  /* 0C0B1184 shll2 Rn */
	r6 = R32(r1 + 0x28u); UPD(0x0C0B1188u, 3);  /* 0C0B1186 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C0B1188 mov #imm,Rn */
	IF(0x0C0B118Au); r8 = R32(r0 + r10); UPD(0x0C0B118Cu, 2);  /* 0C0B118A mov.l @(r0,Rm),Rn */
	r2 = 0x24000u; UPD(0x0C0B118Eu, 1);  /* 0C0B118C mov.l @(disp,pc),Rn */
	r6 += r8;  /* 0C0B118E add Rm,Rn */
	W32(r15, r2); UPD(0x0C0B1192u, 2);  /* 0C0B1190 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B1194u, 1);  /* 0C0B1192 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1194u); { u32 t_ = r12; PR = 0x0C0B1198u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B1198u); }  /* 0C0B1194 jsr @Rn */
L_0C0B1198: BLKS(0x0C0B1198u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B119Au, 1);  /* 0C0B1198 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C0B119A mov #imm,Rn */
	r0 &= 0x1u;  /* 0C0B119C and #imm,r0 */
	IF(0x0C0B119Eu); r0 <<= 2;  /* 0C0B119E shll2 Rn */
	IF(0x0C0B11A0u); r7 = R32(r0 + r10); UPD(0x0C0B11A2u, 4);  /* 0C0B11A0 mov.l @(r0,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0B11A4u, 1);  /* 0C0B11A2 mov.l @(disp,Rm),Rn */
	r0 = 0x28000u; UPD(0x0C0B11A6u, 1);  /* 0C0B11A4 mov.l @(disp,pc),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C0B11A8u, 1);  /* 0C0B11A6 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0B11AAu, 1);  /* 0C0B11A8 mov.l Rm,@Rn */
	r6 += r7;  /* 0C0B11AA add Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B11AEu, 2);  /* 0C0B11AC mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0B11AE mov Rm,Rn */
	IF(0x0C0B11B0u); { u32 t_ = r12; PR = 0x0C0B11B4u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B11B4u); }  /* 0C0B11B0 jsr @Rn */
L_0C0B11B4: BLKS(0x0C0B11B4u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B11B6u, 1);  /* 0C0B11B4 mov.b @Rm,Rn */
	r5 = r11;  /* 0C0B11B6 mov Rm,Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0B11BAu, 2);  /* 0C0B11B8 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B11BA and #imm,r0 */
	IF(0x0C0B11BCu); r0 <<= 2;  /* 0C0B11BC shll2 Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0B11C0u, 3);  /* 0C0B11BE mov.l @(disp,Rm),Rn */
	IF(0x0C0B11C0u); r4 = R32(r0 + r10); UPD(0x0C0B11C2u, 1);  /* 0C0B11C0 mov.l @(r0,Rm),Rn */
	r8 = 0x2C000u; UPD(0x0C0B11C4u, 1);  /* 0C0B11C2 mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0B11C4 add Rm,Rn */
	W32(r15, r8); UPD(0x0C0B11C8u, 2);  /* 0C0B11C6 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0B11C8 mov #imm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B11CCu, 2);  /* 0C0B11CA mov.l Rm,@(disp,Rn) */
	IF(0x0C0B11CCu); { u32 t_ = r12; PR = 0x0C0B11D0u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B11D0u); }  /* 0C0B11CC jsr @Rn */
L_0C0B11D0: BLKS(0x0C0B11D0u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B11D2u, 1);  /* 0C0B11D0 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C0B11D2 mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B11D6u, 2);  /* 0C0B11D4 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B11D6 and #imm,r0 */
	IF(0x0C0B11D8u); r0 <<= 2;  /* 0C0B11D8 shll2 Rn */
	IF(0x0C0B11DAu); r2 = R32(r0 + r10); UPD(0x0C0B11DCu, 3);  /* 0C0B11DA mov.l @(r0,Rm),Rn */
	r6 = R32(r1 + 0x28u); UPD(0x0C0B11DEu, 1);  /* 0C0B11DC mov.l @(disp,Rm),Rn */
	r5 = 0x34000u; UPD(0x0C0B11E0u, 1);  /* 0C0B11DE mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0B11E0 add Rm,Rn */
	W32(r15, r5); UPD(0x0C0B11E4u, 2);  /* 0C0B11E2 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B11E6u, 1);  /* 0C0B11E4 mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0B11E6 mov Rm,Rn */
	IF(0x0C0B11E8u); { u32 t_ = r12; PR = 0x0C0B11ECu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B11ECu); }  /* 0C0B11E8 jsr @Rn */
L_0C0B11EC: BLKS(0x0C0B11ECu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B11EEu, 1);  /* 0C0B11EC mov.b @Rm,Rn */
	r5 = r11;  /* 0C0B11EE mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0B11F0 and #imm,r0 */
	IF(0x0C0B11F2u); r0 <<= 2;  /* 0C0B11F2 shll2 Rn */
	IF(0x0C0B11F4u); r3 = R32(r0 + r10); UPD(0x0C0B11F6u, 4);  /* 0C0B11F4 mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0B11F8u, 1);  /* 0C0B11F6 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C0B11FAu, 1);  /* 0C0B11F8 mov.l @(disp,Rm),Rn */
	r0 += 0x8u;  /* 0C0B11FA add #imm,Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C0B11FEu, 2);  /* 0C0B11FC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0B1200u, 1);  /* 0C0B11FE mov.l Rm,@(disp,Rn) */
	r6 += r3;  /* 0C0B1200 add Rm,Rn */
	r4 = 0x38000u; UPD(0x0C0B1204u, 2);  /* 0C0B1202 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0B1204 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0B1208u, 2);  /* 0C0B1206 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0B120Au, 1);  /* 0C0B1208 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B120Au); { u32 t_ = r12; PR = 0x0C0B120Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B120Eu); }  /* 0C0B120A jsr @Rn */
L_0C0B120E: BLKS(0x0C0B120Eu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B1210u, 1);  /* 0C0B120E mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C0B1210 mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C0B1214u, 2);  /* 0C0B1212 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B1214 and #imm,r0 */
	IF(0x0C0B1216u); r0 <<= 2;  /* 0C0B1216 shll2 Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C0B121Au, 3);  /* 0C0B1218 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0B121A mov Rm,Rn */
	IF(0x0C0B121Cu); r8 = R32(r0 + r10); UPD(0x0C0B121Eu, 2);  /* 0C0B121C mov.l @(r0,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B1220u, 1);  /* 0C0B121E mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C0B1220 add Rm,Rn */
	r2 = 0x38000u; UPD(0x0C0B1224u, 2);  /* 0C0B1222 mov.l @(disp,pc),Rn */
	r1 += 0xFFFFFFF0u;  /* 0C0B1224 add #imm,Rn */
	W32(r15, r2); UPD(0x0C0B1228u, 2);  /* 0C0B1226 mov.l Rm,@Rn */
	r7 = r1;  /* 0C0B1228 mov Rm,Rn */
	IF(0x0C0B122Au); { u32 t_ = r12; PR = 0x0C0B122Eu; W32(r15 + 0x4u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLD(t_, 0x0C0B122Eu); }  /* 0C0B122A jsr @Rn */
L_0C0B122E: BLKS(0x0C0B122Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0BFCu, 3); goto L_0C0B0BFC; }  /* 0C0B122E bra */
L_0C0B1240: BLKS(0x0C0B1240u);
	r9 = 0x88u; UPD(0x0C0B1242u, 1);  /* 0C0B1240 mov.w @(disp,pc),Rn */
	r1 = R32(r0 + 0xCu); UPD(0x0C0B1244u, 1);  /* 0C0B1242 mov.l @(disp,Rm),Rn */
	IF(0x0C0B1244u); W16(r0 + r9, r6); UPD(0x0C0B1246u, 1);  /* 0C0B1244 mov.w Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFFu;  /* 0C0B1246 add #imm,Rn */
	{ W32(r0 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B10C8u, 4); goto L_0C0B10C8; }  /* 0C0B1248 bra */
L_0C0B1250: BLKS(0x0C0B1250u);
	r9 = 0x88u; UPD(0x0C0B1252u, 1);  /* 0C0B1250 mov.w @(disp,pc),Rn */
	IF(0x0C0B1252u); r8 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B1254u, 1);  /* 0C0B1252 mov.w @(r0,Rm),Rn */
	IF(0x0C0B1254u); T = (s32)r8 >= 0;  /* 0C0B1254 cmp/pz Rn */
	if (!T) { UPD(0x0C0B125Cu, 4); goto L_0C0B125C; }  /* 0C0B1256 bf */
L_0C0B1258: BLKS(0x0C0B1258u);
	{ IF(0x0C0B125Au); ; /* slot nop */ UPD(0x0C0B109Eu, 3); goto L_0C0B109E; }  /* 0C0B1258 bra */
L_0C0B125C: BLKS(0x0C0B125Cu);
	r10 = 0x9Fu; UPD(0x0C0B125Eu, 1);  /* 0C0B125C mov.w @(disp,pc),Rn */
	IF(0x0C0B125Eu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B1260u, 1);  /* 0C0B125E mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C0B1260 add #imm,Rn */
	IF(0x0C0B1262u); W8(r0 + r10, r11); UPD(0x0C0B1264u, 2);  /* 0C0B1262 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1264 bra */
}

void blk_f_0C0B10BE(sh3_t *c)
{
	LOCALS;
	goto L_0C0B10BE;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10BE: BLKS(0x0C0B10BEu);
	r0 = 0x88u; UPD(0x0C0B10C0u, 1);  /* 0C0B10BE mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0B10C2u, 1);  /* 0C0B10C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B10C2u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B10C4u, 1);  /* 0C0B10C2 mov.w @(r0,Rm),Rn */
	r1 += r4;  /* 0C0B10C4 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0B10C8u, 2);  /* 0C0B10C6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
}

void blk_f_0C0B10C6(sh3_t *c)
{
	LOCALS;
	goto L_0C0B10C6;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C6: BLKS(0x0C0B10C6u);
	W32(r3 + 0xCu, r1); UPD(0x0C0B10C8u, 1);  /* 0C0B10C6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
}

void blk_f_0C0B10C8(sh3_t *c)
{
	LOCALS;
	goto L_0C0B10C8;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
}

void blk_f_0C0B10CA(sh3_t *c)
{
	LOCALS;
	goto L_0C0B10CA;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10CA: BLKS(0x0C0B10CAu);
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
}

void blk_f_0C0B122E(sh3_t *c)
{
	LOCALS;
	goto L_0C0B122E;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 3);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B122E: BLKS(0x0C0B122Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0BFCu, 3); goto L_0C0B0BFC; }  /* 0C0B122E bra */
}

void blk_f_0C0B1248(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1248;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
L_0C0B1248: BLKS(0x0C0B1248u);
	{ W32(r0 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B10C8u, 3); goto L_0C0B10C8; }  /* 0C0B1248 bra */
}

void blk_f_0C0B1270(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1270;
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
L_0C0B1264: BLKS(0x0C0B1264u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1264 bra */
L_0C0B1270: BLKS(0x0C0B1270u);
	r0 = 0xB4u; UPD(0x0C0B1272u, 1);  /* 0C0B1270 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C0B1274u, 1);  /* 0C0B1272 mov.l @Rm,Rn */
	IF(0x0C0B1274u); MACL = r13 * r0;  /* 0C0B1274 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B1278u, 3);  /* 0C0B1276 mov.l @(disp,pc),Rn */
	IF(0x0C0B1278u); r0 = MACL;  /* 0C0B1278 sts macl,Rn */
	r0 += r12;  /* 0C0B127A add Rm,Rn */
	r3 = R32(r0 + 0x2Cu); UPD(0x0C0B127Eu, 3);  /* 0C0B127C mov.l @(disp,Rm),Rn */
	r7 = 0xFFFF8000u; UPD(0x0C0B1280u, 1);  /* 0C0B127E mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B1280 add Rm,Rn */
	W32(r0 + 0x2Cu, r3); UPD(0x0C0B1284u, 2);  /* 0C0B1282 mov.l Rm,@(disp,Rn) */
	r0 += 0x50u;  /* 0C0B1284 add #imm,Rn */
	r8 = R32(r0); UPD(0x0C0B1288u, 2);  /* 0C0B1286 mov.l @Rm,Rn */
	T = r3 == r8;  /* 0C0B1288 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1264u, 4); goto L_0C0B1264; } goto L_0C0B128E; }  /* 0C0B128A bf/s */
L_0C0B128E: BLKS(0x0C0B128Eu);
	r2 = 0x9Fu; UPD(0x0C0B1290u, 2);  /* 0C0B128E mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B1290 mov #imm,Rn */
	IF(0x0C0B1292u); W8(r0 + r2, r1); UPD(0x0C0B1294u, 2);  /* 0C0B1292 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1294 bra */
}

void blk_f_0C0B12F0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B12F0;
L_0C0B0F22: BLKS(0x0C0B0F22u);
	r7 = 0xC0B0930u; UPD(0x0C0B0F24u, 1);  /* 0C0B0F22 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F24 add #imm,Rn */
	r15 = r14;  /* 0C0B0F26 mov Rm,Rn */
	IF(0x0C0B0F28u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F2Au, 3);  /* 0C0B0F28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F2Cu, 1);  /* 0C0B0F2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F2Eu, 1);  /* 0C0B0F2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F30u, 1);  /* 0C0B0F2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F32u, 1);  /* 0C0B0F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F34u, 1);  /* 0C0B0F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F36u, 1);  /* 0C0B0F34 mov.l @Rm+,Rn */
	IF(0x0C0B0F36u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F36 jmp @Rn */
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B12F0: BLKS(0x0C0B12F0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B12F2u, 1);  /* 0C0B12F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B12F2u); { u32 t_ = r8; PR = 0x0C0B12F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B12F6u); }  /* 0C0B12F2 jsr @Rn */
L_0C0B12F6: BLKS(0x0C0B12F6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B12F6 exts.w Rm,Rn */
	IF(0x0C0B12F8u); T = (s32)r8 >= 0;  /* 0C0B12F8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B131Eu, 5); goto L_0C0B131E; }  /* 0C0B12FA bf */
L_0C0B12FC: BLKS(0x0C0B12FCu);
	r4 = R32(r14); UPD(0x0C0B12FEu, 1);  /* 0C0B12FC mov.l @Rm,Rn */
	r5 = r8;  /* 0C0B12FE mov Rm,Rn */
	{ r6 = 0x11u; /* slot mov #imm,Rn */ UPD(0x0C0B0F22u, 4); goto L_0C0B0F22; }  /* 0C0B1300 bra */
L_0C0B131E: BLKS(0x0C0B131Eu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B131E bra */
}

void blk_f_0C0B1310(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1310;
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
L_0C0B0DFC: BLKS(0x0C0B0DFCu);
	W8(r2, r0); UPD(0x0C0B0DFEu, 1);  /* 0C0B0DFC mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DFE bra */
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	UPD(0x0C0B0F46u, 1);
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
L_0C0B1294: BLKS(0x0C0B1294u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1294 bra */
L_0C0B1310: BLKS(0x0C0B1310u);
	r10 = 0xC0A8D30u; UPD(0x0C0B1312u, 1);  /* 0C0B1310 mov.l @(disp,pc),Rn */
	IF(0x0C0B1312u); { u32 t_ = r10; PR = 0x0C0B1316u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B1316u); }  /* 0C0B1312 jsr @Rn */
L_0C0B1316: BLKS(0x0C0B1316u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1316 exts.w Rm,Rn */
	IF(0x0C0B1318u); T = (s32)r8 >= 0;  /* 0C0B1318 cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1322u, 5); goto L_0C0B1322; } UPD(0x0C0B131Eu, 1); goto L_0C0B131E; }  /* 0C0B131A bt/s */
L_0C0B131E: BLKS(0x0C0B131Eu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B131E bra */
L_0C0B1322: BLKS(0x0C0B1322u);
	r7 = 0xB4u; UPD(0x0C0B1324u, 1);  /* 0C0B1322 mov.w @(disp,pc),Rn */
	IF(0x0C0B1324u); MACL = r9 * r7;  /* 0C0B1324 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B1328u, 3);  /* 0C0B1326 mov.l @(disp,pc),Rn */
	IF(0x0C0B1328u); r9 = MACL;  /* 0C0B1328 sts macl,Rn */
	r9 += r13;  /* 0C0B132A add Rm,Rn */
	r5 = R32(r9); UPD(0x0C0B132Eu, 3);  /* 0C0B132C mov.l @Rm,Rn */
	IF(0x0C0B132Eu); MACL = r8 * r7;  /* 0C0B132E mul.l Rm,Rn */
	r6 = 0xECFFFEFFu; UPD(0x0C0B1332u, 3);  /* 0C0B1330 mov.l @(disp,pc),Rn */
	r5 &= r6;  /* 0C0B1332 and Rm,Rn */
	W32(r9, r5); UPD(0x0C0B1336u, 2);  /* 0C0B1334 mov.l Rm,@Rn */
	IF(0x0C0B1336u); r7 = MACL;  /* 0C0B1336 sts macl,Rn */
	r7 += r13;  /* 0C0B1338 add Rm,Rn */
	r12 = R32(r7 + 0x24u); UPD(0x0C0B133Cu, 3);  /* 0C0B133A mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x2Cu); UPD(0x0C0B133Eu, 1);  /* 0C0B133C mov.l @(disp,Rm),Rn */
	r11 = R32(r7); UPD(0x0C0B1340u, 1);  /* 0C0B133E mov.l @Rm,Rn */
	r12 += r0;  /* 0C0B1340 add Rm,Rn */
	r4 = 0x13000100u; UPD(0x0C0B1344u, 2);  /* 0C0B1342 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C0B1346u, 1);  /* 0C0B1344 mov.l @(disp,Rm),Rn */
	r11 &= r4;  /* 0C0B1346 and Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0B134Au, 2);  /* 0C0B1348 mov.l @(disp,Rm),Rn */
	r5 |= r11;  /* 0C0B134A or Rm,Rn */
	r2 = R32(r7 + 0x38u); UPD(0x0C0B134Eu, 2);  /* 0C0B134C mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C0B134E add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B1352u, 2);  /* 0C0B1350 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r12); UPD(0x0C0B1354u, 1);  /* 0C0B1352 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0B1354 tst Rm,Rn */
	W32(r9 + 0x28u, r3); UPD(0x0C0B1358u, 2);  /* 0C0B1356 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0B135Au, 1);  /* 0C0B1358 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r9 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1420u, 3); goto L_0C0B1420; } UPD(0x0C0B135Eu, 1); goto L_0C0B135E; }  /* 0C0B135A bt/s */
L_0C0B135E: BLKS(0x0C0B135Eu);
	T = r0 == 0x10u;  /* 0C0B135E cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B13C0u, 4); goto L_0C0B13C0; } UPD(0x0C0B1364u, 1); goto L_0C0B1364; }  /* 0C0B1360 bt/s */
L_0C0B1364: BLKS(0x0C0B1364u);
	r10 = 0xB4u; UPD(0x0C0B1366u, 1);  /* 0C0B1364 mov.w @(disp,pc),Rn */
	IF(0x0C0B1366u); MACL = r0 * r10;  /* 0C0B1366 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B136Au, 3);  /* 0C0B1368 mov.l @(disp,pc),Rn */
	IF(0x0C0B136Au); r9 = MACL;  /* 0C0B136A sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B136Eu, 2);  /* 0C0B136C mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C0B136E add Rm,Rn */
	r2 += r9;  /* 0C0B1370 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B1374u, 3);  /* 0C0B1372 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B1374 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C0B1376 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B1378 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B1294u, 6); goto L_0C0B1294; } UPD(0x0C0B137Eu, 1); goto L_0C0B137E; }  /* 0C0B137A bf/s */
L_0C0B137E: BLKS(0x0C0B137Eu);
	r0 = 0x88u; UPD(0x0C0B1380u, 1);  /* 0C0B137E mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0B1380 mov #imm,Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0B1384u, 2);  /* 0C0B1382 mov.l @(disp,Rm),Rn */
	IF(0x0C0B1384u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B1386u, 1);  /* 0C0B1384 mov.w @(r0,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B1388u, 1);  /* 0C0B1386 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C0B1388 add Rm,Rn */
	W8(r2, r5); UPD(0x0C0B138Cu, 2);  /* 0C0B138A mov.b Rm,@Rn */
	W32(r9 + 0xCu, r7); UPD(0x0C0B138Eu, 1);  /* 0C0B138C mov.l Rm,@(disp,Rn) */
	IF(0x0C0B138Eu); { u32 t_ = r13; PR = 0x0C0B1392u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B1392u); }  /* 0C0B138E jsr @Rn */
L_0C0B1392: BLKS(0x0C0B1392u);
	r0 = R32(r9 + 0xCu); UPD(0x0C0B1394u, 1);  /* 0C0B1392 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0B1394 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B13ACu, 4); goto L_0C0B13AC; }  /* 0C0B1396 bt */
L_0C0B1398: BLKS(0x0C0B1398u);
	T = (r0 & r0) == 0;  /* 0C0B1398 tst Rm,Rn */
	if (!T) { UPD(0x0C0B1414u, 4); goto L_0C0B1414; }  /* 0C0B139A bf */
L_0C0B139C: BLKS(0x0C0B139Cu);
	r12 = R32(r9); UPD(0x0C0B139Eu, 1);  /* 0C0B139C mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0B13A0u, 1);  /* 0C0B139E mov.w @(disp,pc),Rn */
	IF(0x0C0B13A0u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B13A2u, 1);  /* 0C0B13A0 mov.b @(r0,Rm),Rn */
	r4 = 0x4000u; UPD(0x0C0B13A4u, 1);  /* 0C0B13A2 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B13A4 add #imm,Rn */
	r12 |= r4;  /* 0C0B13A6 or Rm,Rn */
	W32(r9, r12); UPD(0x0C0B13AAu, 3);  /* 0C0B13A8 mov.l Rm,@Rn */
	IF(0x0C0B13AAu); W8(r0 + r9, r2); UPD(0x0C0B13ACu, 1);  /* 0C0B13AA mov.b Rm,@(r0,Rn) */
L_0C0B13AC: BLKS(0x0C0B13ACu);
	IF(0x0C0B13ACu); MACL = r8 * r10;  /* 0C0B13AC mul.l Rm,Rn */
	r9 = 0xA2u; UPD(0x0C0B13B0u, 3);  /* 0C0B13AE mov.w @(disp,pc),Rn */
	IF(0x0C0B13B0u); r2 = MACL;  /* 0C0B13B0 sts macl,Rn */
	r2 += r11;  /* 0C0B13B2 add Rm,Rn */
	r2 += r9;  /* 0C0B13B4 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B13B8u, 4);  /* 0C0B13B6 mov.b @Rm,Rn */
	{ r0 &= 0xBFu; /* slot and #imm,r0 */ UPD(0x0C0B0DFCu, 3); goto L_0C0B0DFC; }  /* 0C0B13B8 bra */
L_0C0B13C0: BLKS(0x0C0B13C0u);
	r6 = 0x9Fu; UPD(0x0C0B13C2u, 1);  /* 0C0B13C0 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0B13C2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B13C6u, 2);  /* 0C0B13C4 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0B13C6 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B13C8 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B1400u, 5); goto L_0C0B1400; } goto L_0C0B13CE; }  /* 0C0B13CA bt/s */
L_0C0B13CE: BLKS(0x0C0B13CEu);
	if (!T) { UPD(0x0C0B1414u, 4); goto L_0C0B1414; }  /* 0C0B13CE bf */
L_0C0B13D0: BLKS(0x0C0B13D0u);
	r13 = 0xA4u; UPD(0x0C0B13D2u, 1);  /* 0C0B13D0 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C0B13D2 add Rm,Rn */
	r13 += 0x1u;  /* 0C0B13D4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r3 = v_; } UPD(0x0C0B13D8u, 3);  /* 0C0B13D6 mov.b @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C0B13D8 tst Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0B13DA mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B13DEu, 3);  /* 0C0B13DC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0B13DE negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B13E0 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C0B13E2 negc Rm,Rn */
	r2 |= r11;  /* 0C0B13E4 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B13E6 tst Rm,Rn */
	if (!T) { UPD(0x0C0B1414u, 8); goto L_0C0B1414; }  /* 0C0B13E8 bf */
L_0C0B13EA: BLKS(0x0C0B13EAu);
	r1 = 0xFu;  /* 0C0B13EA mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B13EEu, 2);  /* 0C0B13EC mov.w @(disp,pc),Rn */
	W8(r6, r2); UPD(0x0C0B13F0u, 1);  /* 0C0B13EE mov.b Rm,@Rn */
	IF(0x0C0B13F0u); W16(r0 + r9, r3); UPD(0x0C0B13F2u, 1);  /* 0C0B13F0 mov.w Rm,@(r0,Rn) */
	{ W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B10C8u, 3); goto L_0C0B10C8; }  /* 0C0B13F2 bra */
L_0C0B1400: BLKS(0x0C0B1400u);
	r10 = 0xA1u; UPD(0x0C0B1402u, 1);  /* 0C0B1400 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0B1402 mov Rm,Rn */
	IF(0x0C0B1404u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B1406u, 2);  /* 0C0B1404 mov.b @(r0,Rm),Rn */
	r0 = r8;  /* 0C0B1406 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C0B1408 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B140A tst Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B1414u, 6); goto L_0C0B1414; } goto L_0C0B1410; }  /* 0C0B140C bf/s */
L_0C0B1410: BLKS(0x0C0B1410u);
	r1 += 0x1u;  /* 0C0B1410 add #imm,Rn */
	W8(r6, r1); UPD(0x0C0B1414u, 3);  /* 0C0B1412 mov.b Rm,@Rn */
L_0C0B1414: BLKS(0x0C0B1414u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1414 bra */
L_0C0B1420: BLKS(0x0C0B1420u);
	r10 = 0xA1u; UPD(0x0C0B1422u, 1);  /* 0C0B1420 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0B1422 mov Rm,Rn */
	IF(0x0C0B1424u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B1426u, 2);  /* 0C0B1424 mov.b @(r0,Rm),Rn */
	r0 = r8;  /* 0C0B1426 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C0B1428 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B142A tst Rm,Rn */
	if (T) { UPD(0x0C0B1414u, 6); goto L_0C0B1414; }  /* 0C0B142C bt */
L_0C0B142E: BLKS(0x0C0B142Eu);
	r4 = 0x1u;  /* 0C0B142E mov #imm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B1432u, 2);  /* 0C0B1430 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C0B1432 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B1436u, 2);  /* 0C0B1434 mov.w @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0B1438u, 1);  /* 0C0B1436 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1438u); W16(r0 + r9, r6); UPD(0x0C0B143Au, 1);  /* 0C0B1438 mov.w Rm,@(r0,Rn) */
	IF(0x0C0B143Au); { u32 t_ = r12; PR = 0x0C0B143Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B143Eu); }  /* 0C0B143A jsr @Rn */
L_0C0B143E: BLKS(0x0C0B143Eu);
	r0 = 0xA9u; UPD(0x0C0B1440u, 1);  /* 0C0B143E mov.w @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C0B1442u, 1);  /* 0C0B1440 mov.l @Rm,Rn */
	IF(0x0C0B1442u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B1444u, 1);  /* 0C0B1442 mov.b @(r0,Rm),Rn */
	r11 = 0xFFFFBFFFu; UPD(0x0C0B1446u, 1);  /* 0C0B1444 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B1446 add #imm,Rn */
	r5 &= r11;  /* 0C0B1448 and Rm,Rn */
	W32(r9, r5); UPD(0x0C0B144Cu, 3);  /* 0C0B144A mov.l Rm,@Rn */
	IF(0x0C0B144Cu); W8(r0 + r9, r2); UPD(0x0C0B144Eu, 1);  /* 0C0B144C mov.b Rm,@(r0,Rn) */
	r4 = 0x6Cu;  /* 0C0B144E mov #imm,Rn */
	r1 = 0xC0C2110u; UPD(0x0C0B1452u, 2);  /* 0C0B1450 mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B1452 bra */
}

void blk_f_0C0B13F2(sh3_t *c)
{
	LOCALS;
	goto L_0C0B13F2;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
L_0C0B13F2: BLKS(0x0C0B13F2u);
	{ W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B10C8u, 3); goto L_0C0B10C8; }  /* 0C0B13F2 bra */
}

void blk_f_0C0B1410(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1410;
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
L_0C0B1410: BLKS(0x0C0B1410u);
	r1 += 0x1u;  /* 0C0B1410 add #imm,Rn */
	W8(r6, r1); UPD(0x0C0B1414u, 2);  /* 0C0B1412 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1414 bra */
}

void blk_f_0C0B1450(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1450;
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B1450: BLKS(0x0C0B1450u);
	r1 = 0xC0C2110u; UPD(0x0C0B1452u, 1);  /* 0C0B1450 mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B1452 bra */
}

void blk_f_0C0B1460(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1460;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	UPD(0x0C0B0BFEu, 1);
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
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	UPD(0x0C0B0F46u, 1);
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B122E: BLKS(0x0C0B122Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0BFCu, 3); goto L_0C0B0BFC; }  /* 0C0B122E bra */
L_0C0B1450: BLKS(0x0C0B1450u);
	r1 = 0xC0C2110u; UPD(0x0C0B1452u, 1);  /* 0C0B1450 mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B1452 bra */
L_0C0B1460: BLKS(0x0C0B1460u);
	r12 = 0xC0A8B50u; UPD(0x0C0B1462u, 1);  /* 0C0B1460 mov.l @(disp,pc),Rn */
	IF(0x0C0B1462u); { u32 t_ = r12; PR = 0x0C0B1466u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B1466u); }  /* 0C0B1462 jsr @Rn */
L_0C0B1466: BLKS(0x0C0B1466u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1466 exts.w Rm,Rn */
	IF(0x0C0B1468u); T = (s32)r8 >= 0;  /* 0C0B1468 cmp/pz Rn */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1472u, 5); goto L_0C0B1472; } UPD(0x0C0B146Eu, 1); goto L_0C0B146E; }  /* 0C0B146A bt/s */
L_0C0B146E: BLKS(0x0C0B146Eu);
	{ IF(0x0C0B1470u); ; /* slot nop */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B146E bra */
L_0C0B1472: BLKS(0x0C0B1472u);
	r1 = 0xB4u; UPD(0x0C0B1474u, 1);  /* 0C0B1472 mov.w @(disp,pc),Rn */
	IF(0x0C0B1474u); MACL = r8 * r1;  /* 0C0B1474 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B1478u, 3);  /* 0C0B1476 mov.l @(disp,pc),Rn */
	IF(0x0C0B1478u); r9 = MACL;  /* 0C0B1478 sts macl,Rn */
	r9 += r2;  /* 0C0B147A add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B147Eu, 3);  /* 0C0B147C mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0B147E cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B14D0u, 4); goto L_0C0B14D0; } UPD(0x0C0B1484u, 1); goto L_0C0B1484; }  /* 0C0B1480 bt/s */
L_0C0B1484: BLKS(0x0C0B1484u);
	IF(0x0C0B1484u); MACL = r7 * r1;  /* 0C0B1484 mul.l Rm,Rn */
	IF(0x0C0B1486u); r1 = MACL;  /* 0C0B1486 sts macl,Rn */
	r1 += r2;  /* 0C0B1488 add Rm,Rn */
	r4 = 0x2000000u; UPD(0x0C0B148Cu, 5);  /* 0C0B148A mov.l @(disp,pc),Rn */
	W32(r1 + 0x24u, r4); UPD(0x0C0B148Eu, 1);  /* 0C0B148C mov.l Rm,@(disp,Rn) */
L_0C0B148E: BLKS(0x0C0B148Eu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B148E bra */
L_0C0B14D0: BLKS(0x0C0B14D0u);
	r10 = R32(r14); UPD(0x0C0B14D2u, 1);  /* 0C0B14D0 mov.l @Rm,Rn */
	IF(0x0C0B14D2u); MACL = r10 * r1;  /* 0C0B14D2 mul.l Rm,Rn */
	r3 = 0xECFFFEFFu; UPD(0x0C0B14D6u, 3);  /* 0C0B14D4 mov.l @(disp,pc),Rn */
	IF(0x0C0B14D6u); r10 = MACL;  /* 0C0B14D6 sts macl,Rn */
	r10 += r2;  /* 0C0B14D8 add Rm,Rn */
	r0 = R32(r10); UPD(0x0C0B14DCu, 3);  /* 0C0B14DA mov.l @Rm,Rn */
	r0 &= r3;  /* 0C0B14DC and Rm,Rn */
	W32(r10, r0); UPD(0x0C0B14E0u, 2);  /* 0C0B14DE mov.l Rm,@Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C0B14E2u, 1);  /* 0C0B14E0 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C0B14E4u, 1);  /* 0C0B14E2 mov.l @(disp,Rm),Rn */
	r13 = R32(r9); UPD(0x0C0B14E6u, 1);  /* 0C0B14E4 mov.l @Rm,Rn */
	r7 += r5;  /* 0C0B14E6 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B14EAu, 2);  /* 0C0B14E8 mov.l @(disp,pc),Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C0B14ECu, 1);  /* 0C0B14EA mov.l Rm,@(disp,Rn) */
	r13 &= r1;  /* 0C0B14EC and Rm,Rn */
	r2 = 0xA8u; UPD(0x0C0B14F0u, 2);  /* 0C0B14EE mov.w @(disp,pc),Rn */
	r0 |= r13;  /* 0C0B14F0 or Rm,Rn */
	r7 = r10;  /* 0C0B14F2 mov Rm,Rn */
	r7 += r2;  /* 0C0B14F4 add Rm,Rn */
	W32(r10, r0); UPD(0x0C0B14F8u, 4);  /* 0C0B14F6 mov.l Rm,@Rn */
	r2 += r9;  /* 0C0B14F8 add Rm,Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C0B14FCu, 2);  /* 0C0B14FA mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0B14FC mov Rm,Rn */
	r6 = R32(r10 + 0x30u); UPD(0x0C0B1500u, 2);  /* 0C0B14FE mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0B1500 add #imm,Rn */
	r11 = 0xAFu; UPD(0x0C0B1504u, 2);  /* 0C0B1502 mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C0B1504 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B1508u, 2);  /* 0C0B1506 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B1508 add #imm,Rn */
	IF(0x0C0B150Au); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B150Cu, 2);  /* 0C0B150A mov.b @(r0,Rm),Rn */
	r6 = R32(r9 + 0x38u); UPD(0x0C0B150Eu, 1);  /* 0C0B150C mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C0B150E add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0B1512u, 2);  /* 0C0B1510 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x28u, r12); UPD(0x0C0B1514u, 1);  /* 0C0B1512 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0B1514 tst Rm,Rn */
	W8(r7, r5); UPD(0x0C0B1518u, 2);  /* 0C0B1516 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r10 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1520u, 3); goto L_0C0B1520; } UPD(0x0C0B151Cu, 1); goto L_0C0B151C; }  /* 0C0B1518 bf/s */
L_0C0B151C: BLKS(0x0C0B151Cu);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0B1620u, 3); goto L_0C0B1620; }  /* 0C0B151C bra */
L_0C0B1520: BLKS(0x0C0B1520u);
	T = r0 == 0x7u;  /* 0C0B1520 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1580u, 4); goto L_0C0B1580; } UPD(0x0C0B1526u, 1); goto L_0C0B1526; }  /* 0C0B1522 bt/s */
L_0C0B1526: BLKS(0x0C0B1526u);
	r11 = 0xB4u; UPD(0x0C0B1528u, 1);  /* 0C0B1526 mov.w @(disp,pc),Rn */
	IF(0x0C0B1528u); MACL = r7 * r11;  /* 0C0B1528 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B152Cu, 3);  /* 0C0B152A mov.l @(disp,pc),Rn */
	IF(0x0C0B152Cu); r9 = MACL;  /* 0C0B152C sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B1530u, 2);  /* 0C0B152E mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0B1530 add Rm,Rn */
	r2 += r9;  /* 0C0B1532 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B1536u, 3);  /* 0C0B1534 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B1536 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0B1538 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B153A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B148Eu, 6); goto L_0C0B148E; } UPD(0x0C0B1540u, 1); goto L_0C0B1540; }  /* 0C0B153C bf/s */
L_0C0B1540: BLKS(0x0C0B1540u);
	r0 = 0x0u;  /* 0C0B1540 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0B1544u, 2);  /* 0C0B1542 mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C0B1546u, 1);  /* 0C0B1544 mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C0B1548u, 1);  /* 0C0B1546 mov.l @(disp,Rm),Rn */
	IF(0x0C0B1548u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B154Au, 1);  /* 0C0B1548 mov.w @(r0,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B154Cu, 1);  /* 0C0B154A mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0B154C add Rm,Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0B1550u, 2);  /* 0C0B154E mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1550u); { u32 t_ = r13; PR = 0x0C0B1554u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B1554u); }  /* 0C0B1550 jsr @Rn */
L_0C0B1554: BLKS(0x0C0B1554u);
	r5 = R32(r9 + 0xCu); UPD(0x0C0B1556u, 1);  /* 0C0B1554 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0B1556 tst Rm,Rn */
	if (!T) { UPD(0x0C0B148Eu, 4); goto L_0C0B148E; }  /* 0C0B1558 bf */
L_0C0B155A: BLKS(0x0C0B155Au);
	IF(0x0C0B155Au); MACL = r8 * r11;  /* 0C0B155A mul.l Rm,Rn */
	r1 = 0xA5u; UPD(0x0C0B155Eu, 3);  /* 0C0B155C mov.w @(disp,pc),Rn */
	IF(0x0C0B155Eu); r3 = MACL;  /* 0C0B155E sts macl,Rn */
	r3 += r10;  /* 0C0B1560 add Rm,Rn */
	r13 = 0xA1u; UPD(0x0C0B1564u, 3);  /* 0C0B1562 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B1564 mov Rm,Rn */
	r3 += r1;  /* 0C0B1566 add Rm,Rn */
	IF(0x0C0B1568u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B156Au, 3);  /* 0C0B1568 mov.b @(r0,Rm),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B156Cu, 1);  /* 0C0B156A mov.b @Rm,Rn */
	r11 = ~r7;  /* 0C0B156C not Rm,Rn */
	r11 &= r8;  /* 0C0B156E and Rm,Rn */
	r1 = R32(r9); UPD(0x0C0B1572u, 3);  /* 0C0B1570 mov.l @Rm,Rn */
	r10 = 0x4000u; UPD(0x0C0B1574u, 1);  /* 0C0B1572 mov.w @(disp,pc),Rn */
	W8(r3, r11); UPD(0x0C0B1576u, 1);  /* 0C0B1574 mov.b Rm,@Rn */
	r1 |= r10;  /* 0C0B1576 or Rm,Rn */
	W32(r9, r1); UPD(0x0C0B157Au, 2);  /* 0C0B1578 mov.l Rm,@Rn */
L_0C0B157A: BLKS(0x0C0B157Au);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B157A bra */
L_0C0B1580: BLKS(0x0C0B1580u);
	r8 = 0xC0BC1B0u; UPD(0x0C0B1582u, 1);  /* 0C0B1580 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B1582 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B1586u, 2);  /* 0C0B1584 mov.l @Rm,Rn */
	IF(0x0C0B1586u); { u32 t_ = r8; PR = 0x0C0B158Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B158Au); }  /* 0C0B1586 jsr @Rn */
L_0C0B158A: BLKS(0x0C0B158Au);
	T = (r0 & r0) == 0;  /* 0C0B158A tst Rm,Rn */
	if (T) { UPD(0x0C0B157Au, 4); goto L_0C0B157A; }  /* 0C0B158C bt */
L_0C0B158E: BLKS(0x0C0B158Eu);
	r9 = 0x9Fu; UPD(0x0C0B1590u, 1);  /* 0C0B158E mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0B1590 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B1594u, 2);  /* 0C0B1592 mov.b @Rm,Rn */
	r0 = r11 & 0xFF;  /* 0C0B1594 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B1596 tst Rm,Rn */
	if (T) { UPD(0x0C0B15C0u, 5); goto L_0C0B15C0; }  /* 0C0B1598 bt */
L_0C0B159A: BLKS(0x0C0B159Au);
	T = r0 == 0x1u;  /* 0C0B159A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B157Au, 4); goto L_0C0B157A; }  /* 0C0B159C bf */
L_0C0B159E: BLKS(0x0C0B159Eu);
	r2 = R32(r10 + 0xCu); UPD(0x0C0B15A0u, 1);  /* 0C0B159E mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0B15A0 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B15A4u, 2);  /* 0C0B15A2 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B15A4 add #imm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B15A8u, 2);  /* 0C0B15A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B15A8u); W16(r0 + r10, r3); UPD(0x0C0B15AAu, 1);  /* 0C0B15A8 mov.w Rm,@(r0,Rn) */
	W32(r10 + 0xCu, r2); UPD(0x0C0B15ACu, 1);  /* 0C0B15AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0B15AEu, 1);  /* 0C0B15AC mov.l @Rm,Rn */
	IF(0x0C0B15AEu); { u32 t_ = r11; PR = 0x0C0B15B2u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B15B2u); }  /* 0C0B15AE jsr @Rn */
L_0C0B15B2: BLKS(0x0C0B15B2u);
	W8(r9, r10); UPD(0x0C0B15B4u, 1);  /* 0C0B15B2 mov.b Rm,@Rn */
L_0C0B15B4: BLKS(0x0C0B15B4u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B15B4 bra */
L_0C0B15C0: BLKS(0x0C0B15C0u);
	r13 = 0xC069B50u; UPD(0x0C0B15C2u, 1);  /* 0C0B15C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B15C2u); { u32 t_ = r13; PR = 0x0C0B15C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B15C6u); }  /* 0C0B15C2 jsr @Rn */
L_0C0B15C6: BLKS(0x0C0B15C6u);
	r4 = 0x2A0u; UPD(0x0C0B15C8u, 1);  /* 0C0B15C6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0B15C8 exts.w Rm,Rn */
	IF(0x0C0B15CAu); MACL = r1 * r4;  /* 0C0B15CA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0B15CEu, 4);  /* 0C0B15CC mov.l @(disp,pc),Rn */
	r12 = 0xC068E60u; UPD(0x0C0B15D0u, 1);  /* 0C0B15CE mov.l @(disp,pc),Rn */
	IF(0x0C0B15D0u); r0 = MACL;  /* 0C0B15D0 sts macl,Rn */
	r8 = 0xC062780u; UPD(0x0C0B15D4u, 2);  /* 0C0B15D2 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C0B15D4 add Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0B15D8u, 2);  /* 0C0B15D6 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0B15DAu, 1);  /* 0C0B15D8 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0B15DCu, 1);  /* 0C0B15DA mov.l @(disp,Rm),Rn */
	IF(0x0C0B15DCu); { u32 t_ = r12; PR = 0x0C0B15E0u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B15E0u); }  /* 0C0B15DC jsr @Rn */
L_0C0B15E0: BLKS(0x0C0B15E0u);
	r11 = r0;  /* 0C0B15E0 mov Rm,Rn */
	IF(0x0C0B15E2u); { u32 t_ = r8; PR = 0x0C0B15E6u; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B15E6u); }  /* 0C0B15E2 jsr @Rn */
L_0C0B15E6: BLKS(0x0C0B15E6u);
	r5 = R32(r10 + 0x24u); UPD(0x0C0B15E8u, 1);  /* 0C0B15E6 mov.l @(disp,Rm),Rn */
	r11 += r0;  /* 0C0B15E8 add Rm,Rn */
	r6 = 0xFFFC0000u; UPD(0x0C0B15ECu, 2);  /* 0C0B15EA mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFF8u;  /* 0C0B15EC add #imm,Rn */
	r2 = (u32)(s32)(s16)r11;  /* 0C0B15EE exts.w Rm,Rn */
	r5 += r6;  /* 0C0B15F0 add Rm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0B15F4u, 4);  /* 0C0B15F2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B15F4 add #imm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0B15F8u, 2);  /* 0C0B15F6 mov.l Rm,@(disp,Rn) */
	r4 = 0x1u;  /* 0C0B15F8 mov #imm,Rn */
	r7 = 0x28000u; UPD(0x0C0B15FCu, 2);  /* 0C0B15FA mov.l @(disp,pc),Rn */
	r12 = 0xC0BA970u; UPD(0x0C0B15FEu, 1);  /* 0C0B15FC mov.l @(disp,pc),Rn */
	W32(r15, r7); UPD(0x0C0B1600u, 1);  /* 0C0B15FE mov.l Rm,@Rn */
	r3 = 0xC189CA8u; UPD(0x0C0B1602u, 1);  /* 0C0B1600 mov.l @(disp,pc),Rn */
	r7 = r2;  /* 0C0B1602 mov Rm,Rn */
	r13 = 0x10000u; UPD(0x0C0B1606u, 2);  /* 0C0B1604 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B1608u, 1);  /* 0C0B1606 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1608u); { u32 t_ = r12; PR = 0x0C0B160Cu; r6 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B160Cu); }  /* 0C0B1608 jsr @Rn */
L_0C0B160C: BLKS(0x0C0B160Cu);
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B160Eu, 1);  /* 0C0B160C mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B160E add #imm,Rn */
	{ W8(r9, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C0B122Eu, 4); goto L_0C0B122E; }  /* 0C0B1610 bra */
L_0C0B1620: BLKS(0x0C0B1620u);
	r8 = 0xC0BC1B0u; UPD(0x0C0B1622u, 1);  /* 0C0B1620 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B1624u, 1);  /* 0C0B1622 mov.l @Rm,Rn */
	IF(0x0C0B1624u); { u32 t_ = r8; PR = 0x0C0B1628u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B1628u); }  /* 0C0B1624 jsr @Rn */
L_0C0B1628: BLKS(0x0C0B1628u);
	T = (r0 & r0) == 0;  /* 0C0B1628 tst Rm,Rn */
	if (T) { UPD(0x0C0B15B4u, 4); goto L_0C0B15B4; }  /* 0C0B162A bt */
L_0C0B162C: BLKS(0x0C0B162Cu);
	r3 = R32(r10 + 0xCu); UPD(0x0C0B162Eu, 1);  /* 0C0B162C mov.l @(disp,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B1630u, 1);  /* 0C0B162E mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0B1630 add #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B1634u, 2);  /* 0C0B1632 mov.l @Rm,Rn */
	IF(0x0C0B1634u); { u32 t_ = r12; PR = 0x0C0B1638u; W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B1638u); }  /* 0C0B1634 jsr @Rn */
L_0C0B1638: BLKS(0x0C0B1638u);
	r0 = 0x88u; UPD(0x0C0B163Au, 1);  /* 0C0B1638 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0B163A mov #imm,Rn */
	IF(0x0C0B163Cu); W16(r0 + r10, r2); UPD(0x0C0B163Eu, 2);  /* 0C0B163C mov.w Rm,@(r0,Rn) */
	r1 = 0xFFFFBFFFu; UPD(0x0C0B1640u, 1);  /* 0C0B163E mov.w @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C0B1642u, 1);  /* 0C0B1640 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C0B1642 and Rm,Rn */
	W32(r10, r0); UPD(0x0C0B1646u, 2);  /* 0C0B1644 mov.l Rm,@Rn */
	r4 = 0xA5u; UPD(0x0C0B1648u, 1);  /* 0C0B1646 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0B1648 mov Rm,Rn */
	r13 = 0xA1u; UPD(0x0C0B164Cu, 2);  /* 0C0B164A mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C0B164C add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B1650u, 2);  /* 0C0B164E mov.b @Rm,Rn */
	IF(0x0C0B1650u); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B1652u, 1);  /* 0C0B1650 mov.b @(r0,Rm),Rn */
	r9 |= r11;  /* 0C0B1652 or Rm,Rn */
	W8(r4, r9); UPD(0x0C0B1656u, 2);  /* 0C0B1654 mov.b Rm,@Rn */
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C0B1450u, 3); goto L_0C0B1450; }  /* 0C0B1656 bra */
}

void blk_f_0C0B1578(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1578;
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
L_0C0B1578: BLKS(0x0C0B1578u);
	W32(r9, r1); UPD(0x0C0B157Au, 1);  /* 0C0B1578 mov.l Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B157A bra */
}

void blk_f_0C0B16B0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B16B0;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	UPD(0x0C0B0BFEu, 1);
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
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	UPD(0x0C0B0F46u, 1);
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B122E: BLKS(0x0C0B122Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0BFCu, 3); goto L_0C0B0BFC; }  /* 0C0B122E bra */
L_0C0B1450: BLKS(0x0C0B1450u);
	r1 = 0xC0C2110u; UPD(0x0C0B1452u, 1);  /* 0C0B1450 mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B1452 bra */
L_0C0B1486: BLKS(0x0C0B1486u);
	IF(0x0C0B1486u); r1 = MACL;  /* 0C0B1486 sts macl,Rn */
	r1 += r2;  /* 0C0B1488 add Rm,Rn */
	r4 = 0x2000000u; UPD(0x0C0B148Cu, 3);  /* 0C0B148A mov.l @(disp,pc),Rn */
	W32(r1 + 0x24u, r4); UPD(0x0C0B148Eu, 1);  /* 0C0B148C mov.l Rm,@(disp,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B148E bra */
L_0C0B1562: BLKS(0x0C0B1562u);
	r13 = 0xA1u; UPD(0x0C0B1564u, 1);  /* 0C0B1562 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B1564 mov Rm,Rn */
	r3 += r1;  /* 0C0B1566 add Rm,Rn */
	IF(0x0C0B1568u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B156Au, 3);  /* 0C0B1568 mov.b @(r0,Rm),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B156Cu, 1);  /* 0C0B156A mov.b @Rm,Rn */
	r11 = ~r7;  /* 0C0B156C not Rm,Rn */
	r11 &= r8;  /* 0C0B156E and Rm,Rn */
	r1 = R32(r9); UPD(0x0C0B1572u, 3);  /* 0C0B1570 mov.l @Rm,Rn */
	r10 = 0x4000u; UPD(0x0C0B1574u, 1);  /* 0C0B1572 mov.w @(disp,pc),Rn */
	W8(r3, r11); UPD(0x0C0B1576u, 1);  /* 0C0B1574 mov.b Rm,@Rn */
	r1 |= r10;  /* 0C0B1576 or Rm,Rn */
	W32(r9, r1); UPD(0x0C0B157Au, 2);  /* 0C0B1578 mov.l Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B157A bra */
L_0C0B1656: BLKS(0x0C0B1656u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C0B1450u, 3); goto L_0C0B1450; }  /* 0C0B1656 bra */
L_0C0B16B0: BLKS(0x0C0B16B0u);
	r9 = 0xC0A8B50u; UPD(0x0C0B16B2u, 1);  /* 0C0B16B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B16B2u); { u32 t_ = r9; PR = 0x0C0B16B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B16B6u); }  /* 0C0B16B2 jsr @Rn */
L_0C0B16B6: BLKS(0x0C0B16B6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B16B6 exts.w Rm,Rn */
	IF(0x0C0B16B8u); T = (s32)r8 >= 0;  /* 0C0B16B8 cmp/pz Rn */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B16C2u, 5); goto L_0C0B16C2; } UPD(0x0C0B16BEu, 1); goto L_0C0B16BE; }  /* 0C0B16BA bt/s */
L_0C0B16BE: BLKS(0x0C0B16BEu);
	{ IF(0x0C0B16C0u); ; /* slot nop */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B16BE bra */
L_0C0B16C2: BLKS(0x0C0B16C2u);
	r1 = 0xB4u; UPD(0x0C0B16C4u, 1);  /* 0C0B16C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B16C4u); MACL = r8 * r1;  /* 0C0B16C4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B16C8u, 3);  /* 0C0B16C6 mov.l @(disp,pc),Rn */
	IF(0x0C0B16C8u); r7 = MACL;  /* 0C0B16C8 sts macl,Rn */
	r7 += r2;  /* 0C0B16CA add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0B16CEu, 3);  /* 0C0B16CC mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0B16CE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B16D8u, 4); goto L_0C0B16D8; }  /* 0C0B16D0 bt */
L_0C0B16D2: BLKS(0x0C0B16D2u);
	r7 = R32(r14); UPD(0x0C0B16D4u, 1);  /* 0C0B16D2 mov.l @Rm,Rn */
	{ IF(0x0C0B16D6u); MACL = r7 * r1; /* slot mul.l Rm,Rn */ UPD(0x0C0B1486u, 4); goto L_0C0B1486; }  /* 0C0B16D4 bra */
L_0C0B16D8: BLKS(0x0C0B16D8u);
	r9 = R32(r14); UPD(0x0C0B16DAu, 1);  /* 0C0B16D8 mov.l @Rm,Rn */
	IF(0x0C0B16DAu); MACL = r9 * r1;  /* 0C0B16DA mul.l Rm,Rn */
	r12 = R32(r7 + 0x24u); UPD(0x0C0B16DEu, 3);  /* 0C0B16DC mov.l @(disp,Rm),Rn */
	IF(0x0C0B16DEu); r9 = MACL;  /* 0C0B16DE sts macl,Rn */
	r9 += r2;  /* 0C0B16E0 add Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C0B16E4u, 3);  /* 0C0B16E2 mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C0B16E4 add Rm,Rn */
	W32(r9 + 0x24u, r12); UPD(0x0C0B16E8u, 2);  /* 0C0B16E6 mov.l Rm,@(disp,Rn) */
	r0 = 0xA8u; UPD(0x0C0B16EAu, 1);  /* 0C0B16E8 mov.w @(disp,pc),Rn */
	r12 = r9;  /* 0C0B16EA mov Rm,Rn */
	r10 = R32(r9); UPD(0x0C0B16EEu, 2);  /* 0C0B16EC mov.l @Rm,Rn */
	r12 += r0;  /* 0C0B16EE add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C0B16F2u, 2);  /* 0C0B16F0 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C0B16F2 add Rm,Rn */
	r10 &= r2;  /* 0C0B16F4 and Rm,Rn */
	r0 += 0x1u;  /* 0C0B16F6 add #imm,Rn */
	W32(r9, r10); UPD(0x0C0B16FAu, 4);  /* 0C0B16F8 mov.l Rm,@Rn */
	r12 += 0x1u;  /* 0C0B16FA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B16FEu, 2);  /* 0C0B16FC mov.b @Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C0B1700u, 1);  /* 0C0B16FE mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C0B1700 mov Rm,Rn */
	r6 = R32(r9 + 0x30u); UPD(0x0C0B1704u, 2);  /* 0C0B1702 mov.l @(disp,Rm),Rn */
	r13 = 0xAFu; UPD(0x0C0B1706u, 1);  /* 0C0B1704 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0B1706 add Rm,Rn */
	r11 = R32(r7); UPD(0x0C0B170Au, 2);  /* 0C0B1708 mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B170Cu, 1);  /* 0C0B170A mov.l @(disp,pc),Rn */
	IF(0x0C0B170Cu); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B170Eu, 1);  /* 0C0B170C mov.b @(r0,Rm),Rn */
	r11 &= r1;  /* 0C0B170E and Rm,Rn */
	r6 = R32(r7 + 0x38u); UPD(0x0C0B1712u, 2);  /* 0C0B1710 mov.l @(disp,Rm),Rn */
	r10 |= r11;  /* 0C0B1712 or Rm,Rn */
	r5 += r4;  /* 0C0B1714 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B1718u, 3);  /* 0C0B1716 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r3); UPD(0x0C0B171Au, 1);  /* 0C0B1718 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0B171A tst Rm,Rn */
	W32(r9, r10); UPD(0x0C0B171Eu, 2);  /* 0C0B171C mov.l Rm,@Rn */
	W8(r12, r5); UPD(0x0C0B1720u, 1);  /* 0C0B171E mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r9 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1728u, 3); goto L_0C0B1728; } UPD(0x0C0B1724u, 1); goto L_0C0B1724; }  /* 0C0B1720 bf/s */
L_0C0B1724: BLKS(0x0C0B1724u);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0B1810u, 3); goto L_0C0B1810; }  /* 0C0B1724 bra */
L_0C0B1728: BLKS(0x0C0B1728u);
	T = r0 == 0x7u;  /* 0C0B1728 cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1770u, 4); goto L_0C0B1770; } UPD(0x0C0B172Eu, 1); goto L_0C0B172E; }  /* 0C0B172A bt/s */
L_0C0B172E: BLKS(0x0C0B172Eu);
	r11 = 0xB4u; UPD(0x0C0B1730u, 1);  /* 0C0B172E mov.w @(disp,pc),Rn */
	IF(0x0C0B1730u); MACL = r0 * r11;  /* 0C0B1730 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B1734u, 3);  /* 0C0B1732 mov.l @(disp,pc),Rn */
	IF(0x0C0B1734u); r9 = MACL;  /* 0C0B1734 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B1738u, 2);  /* 0C0B1736 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0B1738 add Rm,Rn */
	r2 += r9;  /* 0C0B173A add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B173Eu, 3);  /* 0C0B173C mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B173E add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B1740 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0B1742 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B17A4u, 6); goto L_0C0B17A4; } UPD(0x0C0B1748u, 1); goto L_0C0B1748; }  /* 0C0B1744 bf/s */
L_0C0B1748: BLKS(0x0C0B1748u);
	r0 = 0x88u; UPD(0x0C0B174Au, 1);  /* 0C0B1748 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0B174A mov #imm,Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C0B174Eu, 2);  /* 0C0B174C mov.l @(disp,Rm),Rn */
	IF(0x0C0B174Eu); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0B1750u, 1);  /* 0C0B174E mov.w @(r0,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B1752u, 1);  /* 0C0B1750 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0B1752 add Rm,Rn */
	W8(r2, r5); UPD(0x0C0B1756u, 2);  /* 0C0B1754 mov.b Rm,@Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0B1758u, 1);  /* 0C0B1756 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1758u); { u32 t_ = r12; PR = 0x0C0B175Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B175Cu); }  /* 0C0B1758 jsr @Rn */
L_0C0B175C: BLKS(0x0C0B175Cu);
	r2 = R32(r9 + 0xCu); UPD(0x0C0B175Eu, 1);  /* 0C0B175C mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B175E tst Rm,Rn */
	if (!T) { UPD(0x0C0B17A4u, 4); goto L_0C0B17A4; }  /* 0C0B1760 bf */
L_0C0B1762: BLKS(0x0C0B1762u);
	IF(0x0C0B1762u); MACL = r8 * r11;  /* 0C0B1762 mul.l Rm,Rn */
	r1 = 0xA6u; UPD(0x0C0B1766u, 3);  /* 0C0B1764 mov.w @(disp,pc),Rn */
	IF(0x0C0B1766u); r3 = MACL;  /* 0C0B1766 sts macl,Rn */
	{ r3 += r10; /* slot add Rm,Rn */ UPD(0x0C0B1562u, 4); goto L_0C0B1562; }  /* 0C0B1768 bra */
L_0C0B1770: BLKS(0x0C0B1770u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B1772u, 1);  /* 0C0B1770 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B1772 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B1776u, 2);  /* 0C0B1774 mov.l @Rm,Rn */
	IF(0x0C0B1776u); { u32 t_ = r12; PR = 0x0C0B177Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B177Au); }  /* 0C0B1776 jsr @Rn */
L_0C0B177A: BLKS(0x0C0B177Au);
	T = (r0 & r0) == 0;  /* 0C0B177A tst Rm,Rn */
	if (T) { UPD(0x0C0B17A4u, 4); goto L_0C0B17A4; }  /* 0C0B177C bt */
L_0C0B177E: BLKS(0x0C0B177Eu);
	r10 = 0x9Fu; UPD(0x0C0B1780u, 1);  /* 0C0B177E mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0B1780 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B1784u, 2);  /* 0C0B1782 mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0B1784 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B1786 tst Rm,Rn */
	if (T) { UPD(0x0C0B17B0u, 5); goto L_0C0B17B0; }  /* 0C0B1788 bt */
L_0C0B178A: BLKS(0x0C0B178Au);
	T = r0 == 0x1u;  /* 0C0B178A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B17A4u, 4); goto L_0C0B17A4; }  /* 0C0B178C bf */
L_0C0B178E: BLKS(0x0C0B178Eu);
	r4 = 0xFFFFFFFFu;  /* 0C0B178E mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B1792u, 2);  /* 0C0B1790 mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0B1794u, 1);  /* 0C0B1792 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C0B1796u, 1);  /* 0C0B1794 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B1796 add #imm,Rn */
	IF(0x0C0B1798u); W16(r0 + r9, r4); UPD(0x0C0B179Au, 2);  /* 0C0B1798 mov.w Rm,@(r0,Rn) */
	W32(r9 + 0xCu, r2); UPD(0x0C0B179Cu, 1);  /* 0C0B179A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B179Cu); { u32 t_ = r8; PR = 0x0C0B17A0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B17A0u); }  /* 0C0B179C jsr @Rn */
L_0C0B17A0: BLKS(0x0C0B17A0u);
	r1 = 0x0u;  /* 0C0B17A0 mov #imm,Rn */
	W8(r10, r1); UPD(0x0C0B17A4u, 2);  /* 0C0B17A2 mov.b Rm,@Rn */
L_0C0B17A4: BLKS(0x0C0B17A4u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B17A4 bra */
L_0C0B17B0: BLKS(0x0C0B17B0u);
	r11 = 0xC069B50u; UPD(0x0C0B17B2u, 1);  /* 0C0B17B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B17B2u); { u32 t_ = r11; PR = 0x0C0B17B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B17B6u); }  /* 0C0B17B2 jsr @Rn */
L_0C0B17B6: BLKS(0x0C0B17B6u);
	r7 = 0x2A0u; UPD(0x0C0B17B8u, 1);  /* 0C0B17B6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0B17B8 exts.w Rm,Rn */
	IF(0x0C0B17BAu); MACL = r1 * r7;  /* 0C0B17BA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0B17BEu, 4);  /* 0C0B17BC mov.l @(disp,pc),Rn */
	r13 = 0xC068E60u; UPD(0x0C0B17C0u, 1);  /* 0C0B17BE mov.l @(disp,pc),Rn */
	IF(0x0C0B17C0u); r12 = MACL;  /* 0C0B17C0 sts macl,Rn */
	r8 = 0xC062780u; UPD(0x0C0B17C4u, 2);  /* 0C0B17C2 mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C0B17C4 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0B17C8u, 2);  /* 0C0B17C6 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0B17CAu, 1);  /* 0C0B17C8 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C0B17CCu, 1);  /* 0C0B17CA mov.l @(disp,Rm),Rn */
	IF(0x0C0B17CCu); { u32 t_ = r13; PR = 0x0C0B17D0u; r7 = R32(r12 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B17D0u); }  /* 0C0B17CC jsr @Rn */
L_0C0B17D0: BLKS(0x0C0B17D0u);
	r11 = r0;  /* 0C0B17D0 mov Rm,Rn */
	IF(0x0C0B17D2u); { u32 t_ = r8; PR = 0x0C0B17D6u; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B17D6u); }  /* 0C0B17D2 jsr @Rn */
L_0C0B17D6: BLKS(0x0C0B17D6u);
	r5 = R32(r9 + 0x24u); UPD(0x0C0B17D8u, 1);  /* 0C0B17D6 mov.l @(disp,Rm),Rn */
	r11 += r0;  /* 0C0B17D8 add Rm,Rn */
	r6 = 0xB0000u; UPD(0x0C0B17DCu, 2);  /* 0C0B17DA mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFF8u;  /* 0C0B17DC add #imm,Rn */
	r5 += r6;  /* 0C0B17DE add Rm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C0B17E2u, 3);  /* 0C0B17E0 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r11;  /* 0C0B17E2 exts.w Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0B17E6u, 2);  /* 0C0B17E4 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C0B17E6 add #imm,Rn */
	r2 = 0x38000u; UPD(0x0C0B17EAu, 2);  /* 0C0B17E8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B17EA mov #imm,Rn */
	r9 = 0xC189CE0u; UPD(0x0C0B17EEu, 2);  /* 0C0B17EC mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0B17EE mov Rm,Rn */
	r3 = 0x10000u; UPD(0x0C0B17F2u, 2);  /* 0C0B17F0 mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C0B17F4u, 1);  /* 0C0B17F2 mov.l Rm,@Rn */
	r6 += r3;  /* 0C0B17F4 add Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0B17F8u, 2);  /* 0C0B17F6 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BA970u; UPD(0x0C0B17FAu, 1);  /* 0C0B17F8 mov.l @(disp,pc),Rn */
	IF(0x0C0B17FAu); { u32 t_ = r12; PR = 0x0C0B17FEu; IF(0x0C0B17FCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B17FEu); }  /* 0C0B17FA jsr @Rn */
L_0C0B17FE: BLKS(0x0C0B17FEu);
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B1800u, 1);  /* 0C0B17FE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B1800 add #imm,Rn */
	{ W8(r10, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C0B122Eu, 4); goto L_0C0B122E; }  /* 0C0B1802 bra */
L_0C0B1810: BLKS(0x0C0B1810u);
	r8 = 0xC0BC1B0u; UPD(0x0C0B1812u, 1);  /* 0C0B1810 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B1814u, 1);  /* 0C0B1812 mov.l @Rm,Rn */
	IF(0x0C0B1814u); { u32 t_ = r8; PR = 0x0C0B1818u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B1818u); }  /* 0C0B1814 jsr @Rn */
L_0C0B1818: BLKS(0x0C0B1818u);
	T = (r0 & r0) == 0;  /* 0C0B1818 tst Rm,Rn */
	if (T) { UPD(0x0C0B17A4u, 4); goto L_0C0B17A4; }  /* 0C0B181A bt */
L_0C0B181C: BLKS(0x0C0B181Cu);
	r4 = R32(r9 + 0xCu); UPD(0x0C0B181Eu, 1);  /* 0C0B181C mov.l @(disp,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B1820u, 1);  /* 0C0B181E mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B1820 add #imm,Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0B1824u, 2);  /* 0C0B1822 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1824u); { u32 t_ = r13; PR = 0x0C0B1828u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B1828u); }  /* 0C0B1824 jsr @Rn */
L_0C0B1828: BLKS(0x0C0B1828u);
	r0 = 0x88u; UPD(0x0C0B182Au, 1);  /* 0C0B1828 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C0B182A mov #imm,Rn */
	IF(0x0C0B182Cu); W16(r0 + r9, r7); UPD(0x0C0B182Eu, 2);  /* 0C0B182C mov.w Rm,@(r0,Rn) */
	r0 = R32(r9); UPD(0x0C0B1830u, 1);  /* 0C0B182E mov.l @Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C0B1832u, 1);  /* 0C0B1830 mov.w @(disp,pc),Rn */
	r0 &= r1;  /* 0C0B1832 and Rm,Rn */
	{ W32(r9, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0B1656u, 4); goto L_0C0B1656; }  /* 0C0B1834 bra */
}

void blk_f_0C0B178C(sh3_t *c)
{
	LOCALS;
	goto L_0C0B178C;
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
L_0C0B178C: BLKS(0x0C0B178Cu);
	if (!T) { UPD(0x0C0B17A4u, 3); goto L_0C0B17A4; }  /* 0C0B178C bf */
L_0C0B178E: BLKS(0x0C0B178Eu);
	r4 = 0xFFFFFFFFu;  /* 0C0B178E mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B1792u, 2);  /* 0C0B1790 mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0B1794u, 1);  /* 0C0B1792 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C0B1796u, 1);  /* 0C0B1794 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B1796 add #imm,Rn */
	IF(0x0C0B1798u); W16(r0 + r9, r4); UPD(0x0C0B179Au, 2);  /* 0C0B1798 mov.w Rm,@(r0,Rn) */
	W32(r9 + 0xCu, r2); UPD(0x0C0B179Cu, 1);  /* 0C0B179A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B179Cu); { u32 t_ = r8; PR = 0x0C0B17A0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B17A0u); }  /* 0C0B179C jsr @Rn */
L_0C0B17A0: BLKS(0x0C0B17A0u);
	r1 = 0x0u;  /* 0C0B17A0 mov #imm,Rn */
	W8(r10, r1); UPD(0x0C0B17A4u, 2);  /* 0C0B17A2 mov.b Rm,@Rn */
L_0C0B17A4: BLKS(0x0C0B17A4u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B17A4 bra */
}

void blk_f_0C0B17A2(sh3_t *c)
{
	LOCALS;
	goto L_0C0B17A2;
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
L_0C0B17A2: BLKS(0x0C0B17A2u);
	W8(r10, r1); UPD(0x0C0B17A4u, 1);  /* 0C0B17A2 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B17A4 bra */
}

void blk_f_0C0B17F8(sh3_t *c)
{
	LOCALS;
	goto L_0C0B17F8;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 3);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B122E: BLKS(0x0C0B122Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0BFCu, 3); goto L_0C0B0BFC; }  /* 0C0B122E bra */
L_0C0B17F8: BLKS(0x0C0B17F8u);
	r12 = 0xC0BA970u; UPD(0x0C0B17FAu, 1);  /* 0C0B17F8 mov.l @(disp,pc),Rn */
	IF(0x0C0B17FAu); { u32 t_ = r12; PR = 0x0C0B17FEu; IF(0x0C0B17FCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B17FEu); }  /* 0C0B17FA jsr @Rn */
L_0C0B17FE: BLKS(0x0C0B17FEu);
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B1800u, 1);  /* 0C0B17FE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B1800 add #imm,Rn */
	{ W8(r10, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C0B122Eu, 4); goto L_0C0B122E; }  /* 0C0B1802 bra */
}

void blk_f_0C0B1890(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1890;
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
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B1890: BLKS(0x0C0B1890u);
	r4 = R32(r14); UPD(0x0C0B1892u, 1);  /* 0C0B1890 mov.l @Rm,Rn */
	r0 = 0xC0A8B50u; UPD(0x0C0B1894u, 1);  /* 0C0B1892 mov.l @(disp,pc),Rn */
	IF(0x0C0B1894u); { u32 t_ = r0; PR = 0x0C0B1898u; IF(0x0C0B1896u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B1898u); }  /* 0C0B1894 jsr @Rn */
L_0C0B1898: BLKS(0x0C0B1898u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1898 exts.w Rm,Rn */
	IF(0x0C0B189Au); T = (s32)r8 >= 0;  /* 0C0B189A cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B18DEu, 5); goto L_0C0B18DE; } UPD(0x0C0B18A0u, 1); goto L_0C0B18A0; }  /* 0C0B189C bf/s */
L_0C0B18A0: BLKS(0x0C0B18A0u);
	r9 = 0xB4u; UPD(0x0C0B18A2u, 1);  /* 0C0B18A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B18A2u); MACL = r10 * r9;  /* 0C0B18A2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B18A6u, 3);  /* 0C0B18A4 mov.l @(disp,pc),Rn */
	IF(0x0C0B18A6u); r3 = MACL;  /* 0C0B18A6 sts macl,Rn */
	IF(0x0C0B18A8u); MACL = r8 * r9;  /* 0C0B18A8 mul.l Rm,Rn */
	r3 += r7;  /* 0C0B18AA add Rm,Rn */
	r11 = R32(r3 + 0x2Cu); UPD(0x0C0B18AEu, 5);  /* 0C0B18AC mov.l @(disp,Rm),Rn */
	IF(0x0C0B18AEu); r5 = MACL;  /* 0C0B18AE sts macl,Rn */
	r5 += r7;  /* 0C0B18B0 add Rm,Rn */
	r0 = R32(r5 + 0x24u); UPD(0x0C0B18B4u, 3);  /* 0C0B18B2 mov.l @(disp,Rm),Rn */
	r12 = R32(r5 + 0x28u); UPD(0x0C0B18B6u, 1);  /* 0C0B18B4 mov.l @(disp,Rm),Rn */
	r0 += r11;  /* 0C0B18B6 add Rm,Rn */
	r4 = R32(r3 + 0x30u); UPD(0x0C0B18BAu, 2);  /* 0C0B18B8 mov.l @(disp,Rm),Rn */
	r12 += r4;  /* 0C0B18BA add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0B18BEu, 2);  /* 0C0B18BC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r12); UPD(0x0C0B18C0u, 1);  /* 0C0B18BE mov.l Rm,@(disp,Rn) */
	r1 = R32(r5 + 0x38u); UPD(0x0C0B18C2u, 1);  /* 0C0B18C0 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r1); UPD(0x0C0B18C4u, 1);  /* 0C0B18C2 mov.l Rm,@(disp,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B18C4 bra */
L_0C0B18DE: BLKS(0x0C0B18DEu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B18DE bra */
}

void blk_f_0C0B18D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B18D0;
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
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	UPD(0x0C0B0F46u, 1);
L_0C0B0F46: BLKS(0x0C0B0F46u);
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 2);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B10C8: BLKS(0x0C0B10C8u);
	r4 = R32(r14); UPD(0x0C0B10CAu, 1);  /* 0C0B10C8 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0B10CCu, 1);  /* 0C0B10CA mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B10CC bra */
L_0C0B18C4: BLKS(0x0C0B18C4u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B18C4 bra */
L_0C0B18D0: BLKS(0x0C0B18D0u);
	r10 = 0xC0A8D30u; UPD(0x0C0B18D2u, 1);  /* 0C0B18D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B18D2u); { u32 t_ = r10; PR = 0x0C0B18D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B18D6u); }  /* 0C0B18D2 jsr @Rn */
L_0C0B18D6: BLKS(0x0C0B18D6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B18D6 exts.w Rm,Rn */
	IF(0x0C0B18D8u); T = (s32)r8 >= 0;  /* 0C0B18D8 cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B18E2u, 5); goto L_0C0B18E2; } UPD(0x0C0B18DEu, 1); goto L_0C0B18DE; }  /* 0C0B18DA bt/s */
L_0C0B18DE: BLKS(0x0C0B18DEu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B18DE bra */
L_0C0B18E2: BLKS(0x0C0B18E2u);
	r7 = 0xB4u; UPD(0x0C0B18E4u, 1);  /* 0C0B18E2 mov.w @(disp,pc),Rn */
	IF(0x0C0B18E4u); MACL = r9 * r7;  /* 0C0B18E4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B18E8u, 3);  /* 0C0B18E6 mov.l @(disp,pc),Rn */
	IF(0x0C0B18E8u); r9 = MACL;  /* 0C0B18E8 sts macl,Rn */
	IF(0x0C0B18EAu); MACL = r8 * r7;  /* 0C0B18EA mul.l Rm,Rn */
	r9 += r5;  /* 0C0B18EC add Rm,Rn */
	r0 = R32(r9); UPD(0x0C0B18F0u, 5);  /* 0C0B18EE mov.l @Rm,Rn */
	IF(0x0C0B18F0u); r7 = MACL;  /* 0C0B18F0 sts macl,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C0B18F4u, 2);  /* 0C0B18F2 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C0B18F4 add Rm,Rn */
	r0 &= r2;  /* 0C0B18F6 and Rm,Rn */
	r4 = R32(r7 + 0x38u); UPD(0x0C0B18FAu, 3);  /* 0C0B18F8 mov.l @(disp,Rm),Rn */
	W32(r9, r0); UPD(0x0C0B18FCu, 1);  /* 0C0B18FA mov.l Rm,@Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C0B18FEu, 1);  /* 0C0B18FC mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C0B1900u, 1);  /* 0C0B18FE mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r4); UPD(0x0C0B1902u, 1);  /* 0C0B1900 mov.l Rm,@(disp,Rn) */
	r6 += r12;  /* 0C0B1902 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C0B1906u, 2);  /* 0C0B1904 mov.l @Rm,Rn */
	r8 = 0x13000100u; UPD(0x0C0B1908u, 1);  /* 0C0B1906 mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0B190Au, 1);  /* 0C0B1908 mov.l Rm,@(disp,Rn) */
	r3 &= r8;  /* 0C0B190A and Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C0B190Eu, 2);  /* 0C0B190C mov.w @(disp,pc),Rn */
	r0 |= r3;  /* 0C0B190E or Rm,Rn */
	r13 = R32(r7 + 0x28u); UPD(0x0C0B1912u, 2);  /* 0C0B1910 mov.l @(disp,Rm),Rn */
	r4 += r9;  /* 0C0B1912 add Rm,Rn */
	r6 = R32(r9 + 0x30u); UPD(0x0C0B1916u, 2);  /* 0C0B1914 mov.l @(disp,Rm),Rn */
	W32(r9, r0); UPD(0x0C0B1918u, 1);  /* 0C0B1916 mov.l Rm,@Rn */
	r13 += r6;  /* 0C0B1918 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B191Cu, 2);  /* 0C0B191A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0B191C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B191E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r9 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1928u, 5); goto L_0C0B1928; } UPD(0x0C0B1924u, 1); goto L_0C0B1924; }  /* 0C0B1920 bf/s */
L_0C0B1924: BLKS(0x0C0B1924u);
	{ IF(0x0C0B1926u); T = (s32)r6 >= 0; /* slot cmp/pz Rn */ UPD(0x0C0B1A30u, 3); goto L_0C0B1A30; }  /* 0C0B1924 bra */
L_0C0B1928: BLKS(0x0C0B1928u);
	r10 = 0x1u;  /* 0C0B1928 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C0B192A cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B1950u, 5); goto L_0C0B1950; } goto L_0C0B1930; }  /* 0C0B192C bt/s */
L_0C0B1930: BLKS(0x0C0B1930u);
	T = (r0 & r0) == 0;  /* 0C0B1930 tst Rm,Rn */
	if (!T) { UPD(0x0C0B18C4u, 5); goto L_0C0B18C4; }  /* 0C0B1932 bf */
L_0C0B1934: BLKS(0x0C0B1934u);
	r10 = 0xA0u; UPD(0x0C0B1936u, 1);  /* 0C0B1934 mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C0B1936 add Rm,Rn */
	r9 += r10;  /* 0C0B1938 add Rm,Rn */
	r7 += 0x1u;  /* 0C0B193A add #imm,Rn */
	r9 += 0x1u;  /* 0C0B193C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B1940u, 5);  /* 0C0B193E mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B1942u, 1);  /* 0C0B1940 mov.b @Rm,Rn */
	T = (r1 & r11) == 0;  /* 0C0B1942 tst Rm,Rn */
	if (T) { UPD(0x0C0B18C4u, 4); goto L_0C0B18C4; }  /* 0C0B1944 bt */
L_0C0B1946: BLKS(0x0C0B1946u);
	r9 = r5;  /* 0C0B1946 mov Rm,Rn */
	r9 += 0x1u;  /* 0C0B1948 add #imm,Rn */
	W8(r4, r9); UPD(0x0C0B194Cu, 3);  /* 0C0B194A mov.b Rm,@Rn */
L_0C0B194C: BLKS(0x0C0B194Cu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B194C bra */
L_0C0B1950: BLKS(0x0C0B1950u);
	if (!T) { UPD(0x0C0B194Cu, 3); goto L_0C0B194C; }  /* 0C0B1950 bf */
L_0C0B1952: BLKS(0x0C0B1952u);
	r5 = 0x14u;  /* 0C0B1952 mov #imm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C0B1956u, 2);  /* 0C0B1954 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B1958u, 1);  /* 0C0B1956 mov.l @Rm,Rn */
	IF(0x0C0B1958u); { u32 t_ = r8; PR = 0x0C0B195Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B195Cu); }  /* 0C0B1958 jsr @Rn */
L_0C0B195C: BLKS(0x0C0B195Cu);
	T = (r0 & r0) == 0;  /* 0C0B195C tst Rm,Rn */
	if (T) { UPD(0x0C0B194Cu, 4); goto L_0C0B194C; }  /* 0C0B195E bt */
L_0C0B1960: BLKS(0x0C0B1960u);
	r0 = R32(r9 + 0x8u); UPD(0x0C0B1962u, 1);  /* 0C0B1960 mov.l @(disp,Rm),Rn */
	r7 = 0xC1E4C74u; UPD(0x0C0B1964u, 1);  /* 0C0B1962 mov.l @(disp,pc),Rn */
	IF(0x0C0B1964u); r0 <<= 2;  /* 0C0B1964 shll2 Rn */
	r11 = 0xFFFFFF6Cu; UPD(0x0C0B1968u, 2);  /* 0C0B1966 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C0B1968 add Rm,Rn */
	IF(0x0C0B196Au); r6 = R32(r0 + r11); UPD(0x0C0B196Cu, 2);  /* 0C0B196A mov.l @(r0,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B196Eu, 1);  /* 0C0B196C mov.l @(disp,Rm),Rn */
	r13 = 0xC069B20u; UPD(0x0C0B1970u, 1);  /* 0C0B196E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0B1970 add Rm,Rn */
	IF(0x0C0B1972u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0B1974u, 2);  /* 0C0B1972 mov.w @(r0,Rm),Rn */
	r5 = 0x99999u; UPD(0x0C0B1976u, 1);  /* 0C0B1974 mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C0B1976 mov Rm,Rn */
	IF(0x0C0B1978u); { u32 t_ = r13; PR = 0x0C0B197Cu; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B197Cu); }  /* 0C0B1978 jsr @Rn */
L_0C0B197C: BLKS(0x0C0B197Cu);
	r12 = R32(r9 + 0x24u); UPD(0x0C0B197Eu, 1);  /* 0C0B197C mov.l @(disp,Rm),Rn */
	r8 = 0xC069AF0u; UPD(0x0C0B1980u, 1);  /* 0C0B197E mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C0B1980 add Rm,Rn */
	r0 = 0xFFFA0000u; UPD(0x0C0B1984u, 2);  /* 0C0B1982 mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0B1986u, 1);  /* 0C0B1984 mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0B1988u, 1);  /* 0C0B1986 mov.l @(disp,pc),Rn */
	IF(0x0C0B1988u); { u32 t_ = r8; PR = 0x0C0B198Cu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B198Cu); }  /* 0C0B1988 jsr @Rn */
L_0C0B198C: BLKS(0x0C0B198Cu);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B198Eu, 1);  /* 0C0B198C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B198E add #imm,Rn */
	r6 += r0;  /* 0C0B1990 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0B1994u, 3);  /* 0C0B1992 mov.l @(disp,Rm),Rn */
	r3 = 0xC1E4C7Cu; UPD(0x0C0B1996u, 1);  /* 0C0B1994 mov.l @(disp,pc),Rn */
	IF(0x0C0B1996u); r0 <<= 2;  /* 0C0B1996 shll2 Rn */
	r0 += r3;  /* 0C0B1998 add Rm,Rn */
	IF(0x0C0B199Au); r5 = R32(r0 + r11); UPD(0x0C0B199Cu, 3);  /* 0C0B199A mov.l @(r0,Rm),Rn */
	r4 = 0x20000u; UPD(0x0C0B199Eu, 1);  /* 0C0B199C mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0B199E add Rm,Rn */
	r13 = 0xC0BA480u; UPD(0x0C0B19A2u, 2);  /* 0C0B19A0 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0B19A2 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0B19A6u, 2);  /* 0C0B19A4 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0B19A6 mov #imm,Rn */
	IF(0x0C0B19A8u); { u32 t_ = r13; PR = 0x0C0B19ACu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0B19ACu); }  /* 0C0B19A8 jsr @Rn */
L_0C0B19AC: BLKS(0x0C0B19ACu);
	r0 = R32(r9 + 0xCu); UPD(0x0C0B19AEu, 1);  /* 0C0B19AC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B19AE tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B19E0u, 4); goto L_0C0B19E0; } goto L_0C0B19B4; }  /* 0C0B19B0 bt/s */
L_0C0B19B4: BLKS(0x0C0B19B4u);
	T = r0 == 0x8u;  /* 0C0B19B4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B19D0u, 5); goto L_0C0B19D0; } UPD(0x0C0B19BAu, 1); goto L_0C0B19BA; }  /* 0C0B19B6 bt/s */
L_0C0B19BA: BLKS(0x0C0B19BAu);
	r4 = 0xB4u; UPD(0x0C0B19BCu, 1);  /* 0C0B19BA mov.w @(disp,pc),Rn */
	IF(0x0C0B19BCu); MACL = r5 * r4;  /* 0C0B19BC mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B19C0u, 3);  /* 0C0B19BE mov.l @(disp,pc),Rn */
	IF(0x0C0B19C0u); r10 = MACL;  /* 0C0B19C0 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0B19C4u, 2);  /* 0C0B19C2 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C0B19C4 add Rm,Rn */
	r9 = R32(r10 + 0xCu); UPD(0x0C0B19C8u, 2);  /* 0C0B19C6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B19C8u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0B19CAu, 1);  /* 0C0B19C8 mov.w @(r0,Rm),Rn */
	r9 += r1;  /* 0C0B19CA add Rm,Rn */
	{ W32(r10 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B10C8u, 4); goto L_0C0B10C8; }  /* 0C0B19CC bra */
L_0C0B19D0: BLKS(0x0C0B19D0u);
	r0 = 0x88u; UPD(0x0C0B19D2u, 1);  /* 0C0B19D0 mov.w @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C0B19D2 mov #imm,Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0B19D4 mov #imm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0B19D8u, 3);  /* 0C0B19D6 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B19DAu); W16(r0 + r9, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C0B10C8u, 3); goto L_0C0B10C8; }  /* 0C0B19D8 bra */
L_0C0B19E0: BLKS(0x0C0B19E0u);
	r0 = 0x88u; UPD(0x0C0B19E2u, 1);  /* 0C0B19E0 mov.w @(disp,pc),Rn */
	W32(r9 + 0xCu, r10); UPD(0x0C0B19E4u, 1);  /* 0C0B19E2 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B19E6u); W16(r0 + r9, r10); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C0B10C8u, 3); goto L_0C0B10C8; }  /* 0C0B19E4 bra */
L_0C0B1A30: BLKS(0x0C0B1A30u);
	if (!T) { UPD(0x0C0B1A80u, 3); goto L_0C0B1A80; }  /* 0C0B1A30 bf */
L_0C0B1A32: BLKS(0x0C0B1A32u);
	IF(0x0C0B1A32u); T = (s32)r6 > 0;  /* 0C0B1A32 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0B1A36u); T = (s32)r6 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C0B1A42u, 4); goto L_0C0B1A42; } goto L_0C0B1A38; }  /* 0C0B1A34 bf/s */
L_0C0B1A38: BLKS(0x0C0B1A38u);
	r3 = 0x8000u; UPD(0x0C0B1A3Au, 2);  /* 0C0B1A38 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0B1A3A add Rm,Rn */
	W32(r9 + 0x30u, r3); UPD(0x0C0B1A3Eu, 2);  /* 0C0B1A3C mov.l Rm,@(disp,Rn) */
	r6 = r3;  /* 0C0B1A3E mov Rm,Rn */
	IF(0x0C0B1A40u); T = (s32)r6 >= 0;  /* 0C0B1A40 cmp/pz Rn */
	UPD(0x0C0B1A42u, 2);
L_0C0B1A42: BLKS(0x0C0B1A42u);
	{ u32 c_ = !T; r2 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B1A70u, 3); goto L_0C0B1A70; } UPD(0x0C0B1A46u, 1); goto L_0C0B1A46; }  /* 0C0B1A42 bf/s */
L_0C0B1A46: BLKS(0x0C0B1A46u);
	r8 = 0x280000u; UPD(0x0C0B1A48u, 1);  /* 0C0B1A46 mov.l @(disp,pc),Rn */
	T = r2 == r8;  /* 0C0B1A48 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B1AEAu, 4); goto L_0C0B1AEA; }  /* 0C0B1A4A bf */
L_0C0B1A4C: BLKS(0x0C0B1A4Cu);
	r13 = r7;  /* 0C0B1A4C mov Rm,Rn */
	r11 = 0xA0u; UPD(0x0C0B1A50u, 2);  /* 0C0B1A4E mov.w @(disp,pc),Rn */
	r13 += r11;  /* 0C0B1A50 add Rm,Rn */
	r11 += r9;  /* 0C0B1A52 add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0B1A56u, 3);  /* 0C0B1A54 mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0B1A56 add #imm,Rn */
	r13 += 0x1u;  /* 0C0B1A58 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B1A5Cu, 3);  /* 0C0B1A5A mov.b @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B1A5Eu, 1);  /* 0C0B1A5C mov.b @Rm,Rn */
	r6 = ~r7;  /* 0C0B1A5E not Rm,Rn */
	IF(0x0C0B1A60u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B1A62u, 2);  /* 0C0B1A60 mov.b @(r0,Rm),Rn */
	r6 &= r12;  /* 0C0B1A62 and Rm,Rn */
	r2 += 0x1u;  /* 0C0B1A64 add #imm,Rn */
	W8(r13, r6); UPD(0x0C0B1A68u, 3);  /* 0C0B1A66 mov.b Rm,@Rn */
	{ IF(0x0C0B1A6Au); W8(r0 + r9, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B1946u, 3); goto L_0C0B1946; }  /* 0C0B1A68 bra */
L_0C0B1A70: BLKS(0x0C0B1A70u);
	{ r2 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0B1A46u, 3); goto L_0C0B1A46; }  /* 0C0B1A70 bra */
L_0C0B1A80: BLKS(0x0C0B1A80u);
	r0 = 0xFFFF8000u; UPD(0x0C0B1A82u, 1);  /* 0C0B1A80 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0B1A82 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0B1A86u, 2);  /* 0C0B1A84 mov.l Rm,@(disp,Rn) */
	{ r6 = r0; /* slot mov Rm,Rn */ UPD(0x0C0B1A32u, 3); goto L_0C0B1A32; }  /* 0C0B1A86 bra */
L_0C0B1AEA: BLKS(0x0C0B1AEAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1AEA bra */
}

void blk_f_0C0B1A90(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1A90;
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
L_0C0B0F42: BLKS(0x0C0B0F42u);
	r1 = 0xC0AFF20u; UPD(0x0C0B0F44u, 1);  /* 0C0B0F42 mov.l @(disp,pc),Rn */
	r14 += 0x44u;  /* 0C0B0F44 add #imm,Rn */
	r15 = r14;  /* 0C0B0F46 mov Rm,Rn */
	IF(0x0C0B0F48u); PR = R32(r15); r15 += 4; UPD(0x0C0B0F4Au, 3);  /* 0C0B0F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0F4Cu, 1);  /* 0C0B0F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0F4Eu, 1);  /* 0C0B0F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0F50u, 1);  /* 0C0B0F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0F56u, 1);  /* 0C0B0F54 mov.l @Rm+,Rn */
	IF(0x0C0B0F56u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0F56 jmp @Rn */
L_0C0B1A90: BLKS(0x0C0B1A90u);
	r8 = 0xC0A8D30u; UPD(0x0C0B1A92u, 1);  /* 0C0B1A90 mov.l @(disp,pc),Rn */
	IF(0x0C0B1A92u); { u32 t_ = r8; PR = 0x0C0B1A96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0B1A96u); }  /* 0C0B1A92 jsr @Rn */
L_0C0B1A96: BLKS(0x0C0B1A96u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1A96 exts.w Rm,Rn */
	IF(0x0C0B1A98u); T = (s32)r8 >= 0;  /* 0C0B1A98 cmp/pz Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1AA2u, 5); goto L_0C0B1AA2; } UPD(0x0C0B1A9Eu, 1); goto L_0C0B1A9E; }  /* 0C0B1A9A bt/s */
L_0C0B1A9E: BLKS(0x0C0B1A9Eu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B1A9E bra */
L_0C0B1AA2: BLKS(0x0C0B1AA2u);
	r2 = 0xB4u; UPD(0x0C0B1AA4u, 1);  /* 0C0B1AA2 mov.w @(disp,pc),Rn */
	IF(0x0C0B1AA4u); MACL = r6 * r2;  /* 0C0B1AA4 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B1AA8u, 3);  /* 0C0B1AA6 mov.l @(disp,pc),Rn */
	IF(0x0C0B1AA8u); r0 = MACL;  /* 0C0B1AA8 sts macl,Rn */
	r0 += r13;  /* 0C0B1AAA add Rm,Rn */
	r7 = R32(r0); UPD(0x0C0B1AAEu, 3);  /* 0C0B1AAC mov.l @Rm,Rn */
	IF(0x0C0B1AAEu); MACL = r8 * r2;  /* 0C0B1AAE mul.l Rm,Rn */
	r12 = 0xECFFFEFFu; UPD(0x0C0B1AB2u, 3);  /* 0C0B1AB0 mov.l @(disp,pc),Rn */
	r7 &= r12;  /* 0C0B1AB2 and Rm,Rn */
	W32(r0, r7); UPD(0x0C0B1AB6u, 2);  /* 0C0B1AB4 mov.l Rm,@Rn */
	IF(0x0C0B1AB6u); r10 = MACL;  /* 0C0B1AB6 sts macl,Rn */
	r10 += r13;  /* 0C0B1AB8 add Rm,Rn */
	r9 = R32(r10); UPD(0x0C0B1ABCu, 3);  /* 0C0B1ABA mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B1ABEu, 1);  /* 0C0B1ABC mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0B1AC0u, 1);  /* 0C0B1ABE mov.l @(disp,Rm),Rn */
	r9 &= r1;  /* 0C0B1AC0 and Rm,Rn */
	r3 = R32(r0 + 0x2Cu); UPD(0x0C0B1AC4u, 2);  /* 0C0B1AC2 mov.l @(disp,Rm),Rn */
	r7 |= r9;  /* 0C0B1AC4 or Rm,Rn */
	r4 = R32(r10 + 0x28u); UPD(0x0C0B1AC8u, 2);  /* 0C0B1AC6 mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C0B1AC8 add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C0B1ACCu, 2);  /* 0C0B1ACA mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x38u); UPD(0x0C0B1ACEu, 1);  /* 0C0B1ACC mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C0B1ACE add Rm,Rn */
	W32(r0 + 0x24u, r11); UPD(0x0C0B1AD2u, 2);  /* 0C0B1AD0 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C0B1AD4u, 1);  /* 0C0B1AD2 mov.l Rm,@(disp,Rn) */
	W32(r0, r7); UPD(0x0C0B1AD6u, 1);  /* 0C0B1AD4 mov.l Rm,@Rn */
	W32(r0 + 0x38u, r6); UPD(0x0C0B1AD8u, 1);  /* 0C0B1AD6 mov.l Rm,@(disp,Rn) */
	r0 += 0x7Eu;  /* 0C0B1AD8 add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B1ADCu, 2);  /* 0C0B1ADA mov.w @Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C0B1ADEu, 1);  /* 0C0B1ADC mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B1ADE add #imm,Rn */
	IF(0x0C0B1AE0u); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B1AE2u, 2);  /* 0C0B1AE0 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C0B1AE2 mov #imm,Rn */
	r2 = r13 & 0xFF;  /* 0C0B1AE4 extu.b Rm,Rn */
	T = r2 > r0;  /* 0C0B1AE6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B1AEEu, 6); goto L_0C0B1AEE; }  /* 0C0B1AE8 bf */
L_0C0B1AEA: BLKS(0x0C0B1AEAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1AEA bra */
L_0C0B1AEE: BLKS(0x0C0B1AEEu);
	r0 = 0xC0B1B1Cu;  /* 0C0B1AEE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B1AF0 add Rm,Rn */
	IF(0x0C0B1AF2u); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B1AF4u, 3);  /* 0C0B1AF2 mov.w @(r0,Rm),Rn */
	IF(0x0C0B1AF4u); { u32 tv_ = (r10 + 0x0C0B1AF8u); u32 t_ = PHYS(tv_); IF(0x0C0B1AF6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1AF4 braf Rn */
}

void blk_f_0C0B1B30(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1B30;
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
L_0C0B1040: BLKS(0x0C0B1040u);
	IF(0x0C0B1040u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B1042u, 1);  /* 0C0B1040 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B1042 add #imm,Rn */
	IF(0x0C0B1044u); W8(r0 + r8, r4); UPD(0x0C0B1046u, 2);  /* 0C0B1044 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1046 bra */
L_0C0B1B30: BLKS(0x0C0B1B30u);
	r2 = 0xB4u; UPD(0x0C0B1B32u, 1);  /* 0C0B1B30 mov.w @(disp,pc),Rn */
	IF(0x0C0B1B32u); MACL = r8 * r2;  /* 0C0B1B32 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B1B36u, 3);  /* 0C0B1B34 mov.l @(disp,pc),Rn */
	IF(0x0C0B1B36u); r0 = MACL;  /* 0C0B1B36 sts macl,Rn */
	r7 = 0xA1u; UPD(0x0C0B1B3Au, 2);  /* 0C0B1B38 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0B1B3A add Rm,Rn */
	IF(0x0C0B1B3Cu); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1B3Eu, 2);  /* 0C0B1B3C mov.b @(r0,Rm),Rn */
	IF(0x0C0B1B3Eu); T = (s32)r8 >= 0;  /* 0C0B1B3E cmp/pz Rn */
	if (T) { UPD(0x0C0B1BFEu, 4); goto L_0C0B1BFE; }  /* 0C0B1B40 bt */
L_0C0B1B42: BLKS(0x0C0B1B42u);
	r12 = R32(r14); UPD(0x0C0B1B44u, 1);  /* 0C0B1B42 mov.l @Rm,Rn */
	r4 = 0x6Cu;  /* 0C0B1B44 mov #imm,Rn */
	IF(0x0C0B1B46u); MACL = r12 * r2;  /* 0C0B1B46 mul.l Rm,Rn */
	r0 = 0xC0C2110u; UPD(0x0C0B1B4Au, 4);  /* 0C0B1B48 mov.l @(disp,pc),Rn */
	IF(0x0C0B1B4Au); r8 = MACL;  /* 0C0B1B4A sts macl,Rn */
	r8 += r3;  /* 0C0B1B4C add Rm,Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0B1B50u, 3);  /* 0C0B1B4E mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C0B1B50 add #imm,Rn */
	IF(0x0C0B1B52u); { u32 t_ = r0; PR = 0x0C0B1B56u; W32(r8, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0B1B56u); }  /* 0C0B1B52 jsr @Rn */
L_0C0B1B56: BLKS(0x0C0B1B56u);
	r0 = 0x9Fu; UPD(0x0C0B1B58u, 1);  /* 0C0B1B56 mov.w @(disp,pc),Rn */
	{ r8 += 0xFFFFFFB0u; /* slot add #imm,Rn */ UPD(0x0C0B1040u, 3); goto L_0C0B1040; }  /* 0C0B1B58 bra */
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
}

void blk_f_0C0B1B60(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1B60;
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
L_0C0B1072: BLKS(0x0C0B1072u);
	r0 = 0x9Fu; UPD(0x0C0B1074u, 1);  /* 0C0B1072 mov.w @(disp,pc),Rn */
	IF(0x0C0B1074u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1076u, 1);  /* 0C0B1074 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1076 add #imm,Rn */
	IF(0x0C0B1078u); W8(r0 + r7, r1); UPD(0x0C0B107Au, 2);  /* 0C0B1078 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B107A bra */
L_0C0B1B60: BLKS(0x0C0B1B60u);
	r5 = 0xB4u; UPD(0x0C0B1B62u, 1);  /* 0C0B1B60 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B1B64u, 1);  /* 0C0B1B62 mov.l @Rm,Rn */
	IF(0x0C0B1B64u); MACL = r1 * r5;  /* 0C0B1B64 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B1B68u, 3);  /* 0C0B1B66 mov.l @(disp,pc),Rn */
	IF(0x0C0B1B68u); r7 = MACL;  /* 0C0B1B68 sts macl,Rn */
	r7 += r6;  /* 0C0B1B6A add Rm,Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C0B1B6Eu, 3);  /* 0C0B1B6C mov.l @(disp,Rm),Rn */
	r2 = 0xFFFF8000u; UPD(0x0C0B1B70u, 1);  /* 0C0B1B6E mov.w @(disp,pc),Rn */
	r11 += r2;  /* 0C0B1B70 add Rm,Rn */
	W32(r7 + 0x2Cu, r11); UPD(0x0C0B1B74u, 2);  /* 0C0B1B72 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C0B1B74 add #imm,Rn */
	r3 = R32(r7); UPD(0x0C0B1B78u, 2);  /* 0C0B1B76 mov.l @Rm,Rn */
	r13 = 0xFFE00000u; UPD(0x0C0B1B7Au, 1);  /* 0C0B1B78 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C0B1B7A add Rm,Rn */
	T = r3 == r11;  /* 0C0B1B7C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1BFEu, 5); goto L_0C0B1BFE; } goto L_0C0B1B82; }  /* 0C0B1B7E bf/s */
L_0C0B1B82: BLKS(0x0C0B1B82u);
	IF(0x0C0B1B82u); MACL = r8 * r5;  /* 0C0B1B82 mul.l Rm,Rn */
	IF(0x0C0B1B84u); r5 = MACL;  /* 0C0B1B84 sts macl,Rn */
	r5 += r6;  /* 0C0B1B86 add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C0B1B8Au, 6);  /* 0C0B1B88 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C0B1B8A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B1B8Eu, 2);  /* 0C0B1B8C mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0B1B8E and #imm,r0 */
	{ W8(r5, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B1072u, 4); goto L_0C0B1072; }  /* 0C0B1B90 bra */
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
}

void blk_f_0C0B1BA0(sh3_t *c)
{
	LOCALS;
L_0C0B1BA0: BLKS(0x0C0B1BA0u);
	r9 = 0xB4u; UPD(0x0C0B1BA2u, 1);  /* 0C0B1BA0 mov.w @(disp,pc),Rn */
	IF(0x0C0B1BA2u); MACL = r8 * r9;  /* 0C0B1BA2 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B1BA6u, 3);  /* 0C0B1BA4 mov.l @(disp,pc),Rn */
	IF(0x0C0B1BA6u); r0 = MACL;  /* 0C0B1BA6 sts macl,Rn */
	r7 = 0xA1u; UPD(0x0C0B1BAAu, 2);  /* 0C0B1BA8 mov.w @(disp,pc),Rn */
	r0 += r10;  /* 0C0B1BAA add Rm,Rn */
	IF(0x0C0B1BACu); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1BAEu, 2);  /* 0C0B1BAC mov.b @(r0,Rm),Rn */
	IF(0x0C0B1BAEu); T = (s32)r8 >= 0;  /* 0C0B1BAE cmp/pz Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1BC0u, 4); goto L_0C0B1BC0; } UPD(0x0C0B1BB4u, 1); goto L_0C0B1BB4; }  /* 0C0B1BB0 bf/s */
L_0C0B1BB4: BLKS(0x0C0B1BB4u);
	r4 = 0x4u;  /* 0C0B1BB4 mov #imm,Rn */
	IF(0x0C0B1BB6u); MACL = r0 * r9;  /* 0C0B1BB6 mul.l Rm,Rn */
	r12 = 0x9Fu; UPD(0x0C0B1BBAu, 4);  /* 0C0B1BB8 mov.w @(disp,pc),Rn */
	IF(0x0C0B1BBAu); r0 = MACL;  /* 0C0B1BBA sts macl,Rn */
	r0 += r10;  /* 0C0B1BBC add Rm,Rn */
	IF(0x0C0B1BBEu); W8(r0 + r12, r4); UPD(0x0C0B1BC0u, 3);  /* 0C0B1BBE mov.b Rm,@(r0,Rn) */
L_0C0B1BC0: BLKS(0x0C0B1BC0u);
	r11 = 0xC0BC1B0u; UPD(0x0C0B1BC2u, 1);  /* 0C0B1BC0 mov.l @(disp,pc),Rn */
	r5 = 0x32u;  /* 0C0B1BC2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B1BC6u, 2);  /* 0C0B1BC4 mov.l @Rm,Rn */
	IF(0x0C0B1BC6u); { u32 t_ = r11; PR = 0x0C0B1BCAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B1BCAu); }  /* 0C0B1BC6 jsr @Rn */
L_0C0B1BCA: BLKS(0x0C0B1BCAu);
	T = (r0 & r0) == 0;  /* 0C0B1BCA tst Rm,Rn */
	if (T) { UPD(0x0C0B1BFEu, 4); goto L_0C0B1BFE; }  /* 0C0B1BCC bt */
L_0C0B1BCE: BLKS(0x0C0B1BCEu);
	r1 = R32(r14); UPD(0x0C0B1BD0u, 1);  /* 0C0B1BCE mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B1BD0 add #imm,Rn */
	IF(0x0C0B1BD2u); MACL = r1 * r9;  /* 0C0B1BD2 mul.l Rm,Rn */
	r2 = 0x40000u; UPD(0x0C0B1BD6u, 4);  /* 0C0B1BD4 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B1BD6 mov #imm,Rn */
	IF(0x0C0B1BD8u); r9 = MACL;  /* 0C0B1BD8 sts macl,Rn */
	r9 += r10;  /* 0C0B1BDA add Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B1BDEu, 4);  /* 0C0B1BDC mov.l @(disp,Rm),Rn */
	r6 = 0xFFE40000u; UPD(0x0C0B1BE0u, 1);  /* 0C0B1BDE mov.l @(disp,pc),Rn */
	r8 = 0xC0BB1A0u; UPD(0x0C0B1BE2u, 1);  /* 0C0B1BE0 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0B1BE2 add Rm,Rn */
	W32(r15, r2); UPD(0x0C0B1BE6u, 2);  /* 0C0B1BE4 mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C0B1BE8u, 1);  /* 0C0B1BE6 mov.w @(disp,pc),Rn */
	IF(0x0C0B1BE8u); { u32 t_ = r8; PR = 0x0C0B1BECu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0B1BECu); }  /* 0C0B1BE8 jsr @Rn */
L_0C0B1BEC: BLKS(0x0C0B1BECu);
	r0 = 0x9Fu; UPD(0x0C0B1BEEu, 1);  /* 0C0B1BEC mov.w @(disp,pc),Rn */
	r3 = R32(r9 + 0x2Cu); UPD(0x0C0B1BF0u, 1);  /* 0C0B1BEE mov.l @(disp,Rm),Rn */
	IF(0x0C0B1BF0u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B1BF2u, 1);  /* 0C0B1BF0 mov.b @(r0,Rm),Rn */
	r13 = 0xC0000u; UPD(0x0C0B1BF4u, 1);  /* 0C0B1BF2 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0B1BF4 add #imm,Rn */
	r3 += r13;  /* 0C0B1BF6 add Rm,Rn */
	W32(r9 + 0x2Cu, r3); UPD(0x0C0B1BFAu, 3);  /* 0C0B1BF8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1BFAu); W8(r0 + r9, r10); UPD(0x0C0B1BFCu, 1);  /* 0C0B1BFA mov.b Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C0B1BFC add #imm,Rn */
	UPD(0x0C0B1BFEu, 1);
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
}

void blk_f_0C0B1BFC(sh3_t *c)
{
	LOCALS;
L_0C0B1BFC: BLKS(0x0C0B1BFCu);
	r15 += 0x4u;  /* 0C0B1BFC add #imm,Rn */
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 2);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
}


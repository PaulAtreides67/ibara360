#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0A7D60(sh3_t *c)
{
	LOCALS;
L_0C0A7D60: BLKS(0x0C0A7D60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D62u, 1);  /* 0C0A7D60 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0A7D64u, 1);  /* 0C0A7D62 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A7D64 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D68u, 2);  /* 0C0A7D66 mov.l Rm,@-Rn */
	IF(0x0C0A7D68u); MACL = r8 * r0;  /* 0C0A7D68 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D6Cu, 3);  /* 0C0A7D6A mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C0A7D6Eu, 1);  /* 0C0A7D6C mov.l @(disp,pc),Rn */
	IF(0x0C0A7D6Eu); r0 = MACL;  /* 0C0A7D6E sts macl,Rn */
	IF(0x0C0A7D70u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7D72u, 2);  /* 0C0A7D70 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A7D72 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A7D76u, 2);  /* 0C0A7D74 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0A7D76 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7D80u, 4); goto L_0C0A7D80; } goto L_0C0A7D7C; }  /* 0C0A7D78 bf/s */
L_0C0A7D7C: BLKS(0x0C0A7D7Cu);
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C0A7EA0u, 4); goto L_0C0A7EA0; }  /* 0C0A7D7C bra */
L_0C0A7D80: BLKS(0x0C0A7D80u);
	IF(0x0C0A7D80u); T = (s32)r2 >= 0;  /* 0C0A7D80 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7E0Cu, 4); goto L_0C0A7E0C; }  /* 0C0A7D82 bf */
L_0C0A7D84: BLKS(0x0C0A7D84u);
	r3 = 0x4u;  /* 0C0A7D84 mov #imm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0A7D86 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A7E0Cu, 5); goto L_0C0A7E0C; }  /* 0C0A7D88 bt */
L_0C0A7D8A: BLKS(0x0C0A7D8Au);
	r9 = 0xC0A8B50u; UPD(0x0C0A7D8Cu, 1);  /* 0C0A7D8A mov.l @(disp,pc),Rn */
	IF(0x0C0A7D8Cu); { u32 t_ = r9; PR = 0x0C0A7D90u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A7D90u); }  /* 0C0A7D8C jsr @Rn */
L_0C0A7D90: BLKS(0x0C0A7D90u);
	IF(0x0C0A7D90u); T = (s32)r0 >= 0;  /* 0C0A7D90 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7E90u, 4); goto L_0C0A7E90; } goto L_0C0A7D96; }  /* 0C0A7D92 bf/s */
L_0C0A7D96: BLKS(0x0C0A7D96u);
	r2 = 0xB4u; UPD(0x0C0A7D98u, 2);  /* 0C0A7D96 mov.w @(disp,pc),Rn */
	IF(0x0C0A7D98u); MACL = r8 * r2;  /* 0C0A7D98 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A7D9Cu, 3);  /* 0C0A7D9A mov.l @(disp,pc),Rn */
	IF(0x0C0A7D9Cu); r7 = MACL;  /* 0C0A7D9C sts macl,Rn */
	IF(0x0C0A7D9Eu); MACL = r9 * r2;  /* 0C0A7D9E mul.l Rm,Rn */
	r7 += r0;  /* 0C0A7DA0 add Rm,Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0A7DA4u, 5);  /* 0C0A7DA2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7DA4u); r5 = MACL;  /* 0C0A7DA4 sts macl,Rn */
	r5 += r0;  /* 0C0A7DA6 add Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C0A7DAAu, 3);  /* 0C0A7DA8 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C0A7DACu, 1);  /* 0C0A7DAA mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C0A7DAC add Rm,Rn */
	r1 = R32(r7 + 0x30u); UPD(0x0C0A7DB0u, 2);  /* 0C0A7DAE mov.l @(disp,Rm),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0A7DB2u, 1);  /* 0C0A7DB0 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0A7DB2 add Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C0A7DB6u, 2);  /* 0C0A7DB4 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C0A7DB6 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r7 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7E70u, 4); goto L_0C0A7E70; } UPD(0x0C0A7DBCu, 1); goto L_0C0A7DBC; }  /* 0C0A7DB8 bt/s */
L_0C0A7DBC: BLKS(0x0C0A7DBCu);
	T = r0 == 0x4u;  /* 0C0A7DBC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A7E50u, 4); goto L_0C0A7E50; }  /* 0C0A7DBE bt */
L_0C0A7DC0: BLKS(0x0C0A7DC0u);
	r0 = 0xB4u; UPD(0x0C0A7DC2u, 1);  /* 0C0A7DC0 mov.w @(disp,pc),Rn */
	IF(0x0C0A7DC2u); MACL = r9 * r0;  /* 0C0A7DC2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A7DC6u, 3);  /* 0C0A7DC4 mov.l @(disp,pc),Rn */
	IF(0x0C0A7DC6u); r6 = MACL;  /* 0C0A7DC6 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C0A7DCAu, 2);  /* 0C0A7DC8 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0A7DCA add Rm,Rn */
	IF(0x0C0A7DCCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A7DCEu, 2);  /* 0C0A7DCC mov.b @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C0A7DCE mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C0A7DD0 extu.b Rm,Rn */
	T = r2 > r9;  /* 0C0A7DD2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A7E0Cu, 6); goto L_0C0A7E0C; }  /* 0C0A7DD4 bt */
L_0C0A7DD6: BLKS(0x0C0A7DD6u);
	r0 = 0xC0A7DE0u;  /* 0C0A7DD6 mova @(disp,pc),r0 */
	IF(0x0C0A7DD8u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A7DDAu, 2);  /* 0C0A7DD8 mov.b @(r0,Rm),Rn */
	IF(0x0C0A7DDAu); { u32 tv_ = (r4 + 0x0C0A7DDEu); u32 t_ = PHYS(tv_); IF(0x0C0A7DDCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0A7DDA braf Rn */
L_0C0A7E0C: BLKS(0x0C0A7E0Cu);
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 2);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7E50: BLKS(0x0C0A7E50u);
	r0 = 0xC23E0A6u; UPD(0x0C0A7E52u, 1);  /* 0C0A7E50 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7E54u, 1);  /* 0C0A7E52 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A7E54 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7DC0u, 4); goto L_0C0A7DC0; } goto L_0C0A7E5A; }  /* 0C0A7E56 bt/s */
L_0C0A7E5A: BLKS(0x0C0A7E5Au);
	r4 = 0xA1u; UPD(0x0C0A7E5Cu, 2);  /* 0C0A7E5A mov.w @(disp,pc),Rn */
	IF(0x0C0A7E5Cu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A7E5Eu, 1);  /* 0C0A7E5C mov.b @(r0,Rm),Rn */
	W32(r7 + 0xCu, r2); UPD(0x0C0A7E60u, 1);  /* 0C0A7E5E mov.l Rm,@(disp,Rn) */
L_0C0A7E60: BLKS(0x0C0A7E60u);
	r7 = 0xC0A8AE0u; UPD(0x0C0A7E62u, 1);  /* 0C0A7E60 mov.l @(disp,pc),Rn */
	IF(0x0C0A7E62u); { u32 t_ = r7; PR = 0x0C0A7E66u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0A7E66u); }  /* 0C0A7E62 jsr @Rn */
L_0C0A7E66: BLKS(0x0C0A7E66u);
	{ IF(0x0C0A7E68u); ; /* slot nop */ UPD(0x0C0A7DC0u, 3); goto L_0C0A7DC0; }  /* 0C0A7E66 bra */
L_0C0A7E70: BLKS(0x0C0A7E70u);
	r3 = 0xC3C4170u; UPD(0x0C0A7E72u, 1);  /* 0C0A7E70 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A7E72 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A7E76u, 2);  /* 0C0A7E74 mov.b @Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C0A7E76 extu.b Rm,Rn */
	T = r2 > r4;  /* 0C0A7E78 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A7DC0u, 5); goto L_0C0A7DC0; } goto L_0C0A7E7E; }  /* 0C0A7E7A bf/s */
L_0C0A7E7E: BLKS(0x0C0A7E7Eu);
	{ W32(r7 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A7E60u, 4); goto L_0C0A7E60; }  /* 0C0A7E7E bra */
L_0C0A7E90: BLKS(0x0C0A7E90u);
	r0 = 0xB4u; UPD(0x0C0A7E92u, 1);  /* 0C0A7E90 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0A7E92 mov #imm,Rn */
	IF(0x0C0A7E94u); MACL = r8 * r0;  /* 0C0A7E94 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A7E98u, 4);  /* 0C0A7E96 mov.l @(disp,pc),Rn */
	IF(0x0C0A7E98u); r0 = MACL;  /* 0C0A7E98 sts macl,Rn */
	{ IF(0x0C0A7E9Cu); W32(r0 + r6, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0A7E0Cu, 4); goto L_0C0A7E0C; }  /* 0C0A7E9A bra */
L_0C0A7EA0: BLKS(0x0C0A7EA0u);
	r9 = 0xC3C4048u; UPD(0x0C0A7EA2u, 1);  /* 0C0A7EA0 mov.l @(disp,pc),Rn */
	r2 = 0x9Fu; UPD(0x0C0A7EA4u, 1);  /* 0C0A7EA2 mov.w @(disp,pc),Rn */
	r7 = R32(r9); UPD(0x0C0A7EA6u, 1);  /* 0C0A7EA4 mov.l @Rm,Rn */
	r6 = R32(r0 + 0x30u); UPD(0x0C0A7EA8u, 1);  /* 0C0A7EA6 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7EA8u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A7EAAu, 1);  /* 0C0A7EA8 mov.b @(r0,Rm),Rn */
	r6 += r7;  /* 0C0A7EAA add Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C0A7EAC extu.b Rm,Rn */
	T = r2 > r4;  /* 0C0A7EAE cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7E0Cu, 6); goto L_0C0A7E0C; } UPD(0x0C0A7EB4u, 1); goto L_0C0A7EB4; }  /* 0C0A7EB0 bt/s */
L_0C0A7EB4: BLKS(0x0C0A7EB4u);
	r0 = 0xC0A7EC0u;  /* 0C0A7EB4 mova @(disp,pc),r0 */
	IF(0x0C0A7EB6u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A7EB8u, 2);  /* 0C0A7EB6 mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C0A7EB8 extu.b Rm,Rn */
	IF(0x0C0A7EBAu); { u32 tv_ = (r3 + 0x0C0A7EBEu); u32 t_ = PHYS(tv_); IF(0x0C0A7EBCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0A7EBA braf Rn */
}

void blk_f_0C0A7DF0(sh3_t *c)
{
	LOCALS;
L_0C0A7DF0: BLKS(0x0C0A7DF0u);
	r7 = 0xB4u; UPD(0x0C0A7DF2u, 1);  /* 0C0A7DF0 mov.w @(disp,pc),Rn */
	IF(0x0C0A7DF2u); MACL = r8 * r7;  /* 0C0A7DF2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0A7DF6u, 3);  /* 0C0A7DF4 mov.l @(disp,pc),Rn */
	IF(0x0C0A7DF6u); r7 = MACL;  /* 0C0A7DF6 sts macl,Rn */
	r7 += r2;  /* 0C0A7DF8 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C0A7DFCu, 3);  /* 0C0A7DFA mov.l @(disp,Rm),Rn */
	r8 = 0xF7u; UPD(0x0C0A7DFEu, 1);  /* 0C0A7DFC mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFF;  /* 0C0A7DFE extu.b Rm,Rn */
	T = r1 > r8;  /* 0C0A7E00 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A7E20u, 5); goto L_0C0A7E20; }  /* 0C0A7E02 bf */
L_0C0A7E04: BLKS(0x0C0A7E04u);
	r9 = 0xFFFFu; UPD(0x0C0A7E06u, 1);  /* 0C0A7E04 mov.l @(disp,pc),Rn */
	r3 |= r9;  /* 0C0A7E06 or Rm,Rn */
	UPD(0x0C0A7E08u, 1);
L_0C0A7E08: BLKS(0x0C0A7E08u);
	W32(r7 + 0x34u, r3); UPD(0x0C0A7E0Au, 1);  /* 0C0A7E08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7E0Au); ;  /* 0C0A7E0A nop */
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 3);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7E20: BLKS(0x0C0A7E20u);
	r1 = 0x808u; UPD(0x0C0A7E22u, 1);  /* 0C0A7E20 mov.w @(disp,pc),Rn */
	IF(0x0C0A7E22u); ;  /* 0C0A7E22 nop */
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C0A7E08u, 4); goto L_0C0A7E08; }  /* 0C0A7E24 bra */
}

void blk_f_0C0A7E0C(sh3_t *c)
{
	LOCALS;
L_0C0A7E0C: BLKS(0x0C0A7E0Cu);
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 2);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
}

void blk_f_0C0A7E30(sh3_t *c)
{
	LOCALS;
	goto L_0C0A7E30;
L_0C0A7E08: BLKS(0x0C0A7E08u);
	W32(r7 + 0x34u, r3); UPD(0x0C0A7E0Au, 1);  /* 0C0A7E08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7E0Au); ;  /* 0C0A7E0A nop */
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 3);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7E30: BLKS(0x0C0A7E30u);
	r0 = 0xB4u; UPD(0x0C0A7E32u, 1);  /* 0C0A7E30 mov.w @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C0A7E32 mov #imm,Rn */
	IF(0x0C0A7E34u); MACL = r8 * r0;  /* 0C0A7E34 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A7E38u, 4);  /* 0C0A7E36 mov.l @(disp,pc),Rn */
	IF(0x0C0A7E38u); r7 = MACL;  /* 0C0A7E38 sts macl,Rn */
	r7 += r3;  /* 0C0A7E3A add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C0A7E3Eu, 3);  /* 0C0A7E3C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C0A7E3E extu.b Rm,Rn */
	T = r6 > r5;  /* 0C0A7E40 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A7E48u, 5); goto L_0C0A7E48; }  /* 0C0A7E42 bt */
L_0C0A7E44: BLKS(0x0C0A7E44u);
	r4 = 0x0u;  /* 0C0A7E44 mov #imm,Rn */
	W32(r7, r4); UPD(0x0C0A7E48u, 2);  /* 0C0A7E46 mov.l Rm,@Rn */
L_0C0A7E48: BLKS(0x0C0A7E48u);
	r1 = 0xFFFFF7F8u; UPD(0x0C0A7E4Au, 1);  /* 0C0A7E48 mov.w @(disp,pc),Rn */
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C0A7E08u, 3); goto L_0C0A7E08; }  /* 0C0A7E4A bra */
}

void blk_f_0C0A7ED0(sh3_t *c)
{
	LOCALS;
	goto L_0C0A7ED0;
L_0C0A7E08: BLKS(0x0C0A7E08u);
	W32(r7 + 0x34u, r3); UPD(0x0C0A7E0Au, 1);  /* 0C0A7E08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7E0Au); ;  /* 0C0A7E0A nop */
	UPD(0x0C0A7E0Cu, 1);
L_0C0A7E0C: BLKS(0x0C0A7E0Cu);
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 2);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7E24: BLKS(0x0C0A7E24u);
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C0A7E08u, 3); goto L_0C0A7E08; }  /* 0C0A7E24 bra */
L_0C0A7ED0: BLKS(0x0C0A7ED0u);
	r4 = 0xB4u; UPD(0x0C0A7ED2u, 1);  /* 0C0A7ED0 mov.w @(disp,pc),Rn */
	IF(0x0C0A7ED2u); MACL = r8 * r4;  /* 0C0A7ED2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A7ED6u, 3);  /* 0C0A7ED4 mov.l @(disp,pc),Rn */
	IF(0x0C0A7ED6u); r7 = MACL;  /* 0C0A7ED6 sts macl,Rn */
	r7 += r0;  /* 0C0A7ED8 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C0A7EDCu, 3);  /* 0C0A7EDA mov.l @(disp,Rm),Rn */
	r1 = 0x9Fu; UPD(0x0C0A7EDEu, 1);  /* 0C0A7EDC mov.w @(disp,pc),Rn */
	r8 = r3 & 0xFF;  /* 0C0A7EDE extu.b Rm,Rn */
	T = r8 > r1;  /* 0C0A7EE0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A7F00u, 5); goto L_0C0A7F00; }  /* 0C0A7EE2 bf */
L_0C0A7EE4: BLKS(0x0C0A7EE4u);
	r5 = r1;  /* 0C0A7EE4 mov Rm,Rn */
	r5 += r7;  /* 0C0A7EE6 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A7EEAu, 3);  /* 0C0A7EE8 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0A7EEA add #imm,Rn */
	W8(r5, r2); UPD(0x0C0A7EEEu, 2);  /* 0C0A7EEC mov.b Rm,@Rn */
	{ IF(0x0C0A7EF0u); ; /* slot nop */ UPD(0x0C0A7E0Cu, 3); goto L_0C0A7E0C; }  /* 0C0A7EEE bra */
L_0C0A7F00: BLKS(0x0C0A7F00u);
	r1 = 0x505u; UPD(0x0C0A7F02u, 1);  /* 0C0A7F00 mov.w @(disp,pc),Rn */
	{ IF(0x0C0A7F04u); ; /* slot nop */ UPD(0x0C0A7E24u, 3); goto L_0C0A7E24; }  /* 0C0A7F02 bra */
}

void blk_f_0C0A7F30(sh3_t *c)
{
	LOCALS;
	goto L_0C0A7F30;
L_0C0A7E0C: BLKS(0x0C0A7E0Cu);
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 2);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7EEE: BLKS(0x0C0A7EEEu);
	{ IF(0x0C0A7EF0u); ; /* slot nop */ UPD(0x0C0A7E0Cu, 3); goto L_0C0A7E0C; }  /* 0C0A7EEE bra */
L_0C0A7F30: BLKS(0x0C0A7F30u);
	r7 = 0xB4u; UPD(0x0C0A7F32u, 1);  /* 0C0A7F30 mov.w @(disp,pc),Rn */
	IF(0x0C0A7F32u); MACL = r8 * r7;  /* 0C0A7F32 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A7F36u, 3);  /* 0C0A7F34 mov.l @(disp,pc),Rn */
	IF(0x0C0A7F36u); r3 = MACL;  /* 0C0A7F36 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0A7F3Au, 2);  /* 0C0A7F38 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C0A7F3A add Rm,Rn */
	r2 += r3;  /* 0C0A7F3C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A7F40u, 3);  /* 0C0A7F3E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0A7F40 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0A7F42 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0A7F44 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A7EEEu, 6); goto L_0C0A7EEE; } UPD(0x0C0A7F4Au, 1); goto L_0C0A7F4A; }  /* 0C0A7F46 bf/s */
L_0C0A7F4A: BLKS(0x0C0A7F4Au);
	r0 = 0x9Fu; UPD(0x0C0A7F4Cu, 1);  /* 0C0A7F4A mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0A7F4C mov #imm,Rn */
	IF(0x0C0A7F4Eu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A7F50u, 2);  /* 0C0A7F4E mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0A7F50 add #imm,Rn */
	W8(r2, r8); UPD(0x0C0A7F54u, 2);  /* 0C0A7F52 mov.b Rm,@Rn */
	{ IF(0x0C0A7F56u); W8(r0 + r3, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A7E0Cu, 3); goto L_0C0A7E0C; }  /* 0C0A7F54 bra */
}

void blk_f_0C0A7F60(sh3_t *c)
{
	LOCALS;
	goto L_0C0A7F60;
L_0C0A7E08: BLKS(0x0C0A7E08u);
	W32(r7 + 0x34u, r3); UPD(0x0C0A7E0Au, 1);  /* 0C0A7E08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7E0Au); ;  /* 0C0A7E0A nop */
	r15 = r14;  /* 0C0A7E0C mov Rm,Rn */
	IF(0x0C0A7E0Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7E10u, 3);  /* 0C0A7E0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E14u, 1);  /* 0C0A7E12 mov.l @Rm+,Rn */
	IF(0x0C0A7E14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E14 rts */
L_0C0A7E24: BLKS(0x0C0A7E24u);
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C0A7E08u, 3); goto L_0C0A7E08; }  /* 0C0A7E24 bra */
L_0C0A7F60: BLKS(0x0C0A7F60u);
	r5 = 0xB4u; UPD(0x0C0A7F62u, 1);  /* 0C0A7F60 mov.w @(disp,pc),Rn */
	r0 = 0x5u;  /* 0C0A7F62 mov #imm,Rn */
	IF(0x0C0A7F64u); MACL = r8 * r5;  /* 0C0A7F64 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A7F68u, 4);  /* 0C0A7F66 mov.l @(disp,pc),Rn */
	IF(0x0C0A7F68u); r7 = MACL;  /* 0C0A7F68 sts macl,Rn */
	r7 += r3;  /* 0C0A7F6A add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C0A7F6Eu, 3);  /* 0C0A7F6C mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C0A7F6E extu.b Rm,Rn */
	T = r4 > r0;  /* 0C0A7F70 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A7F78u, 5); goto L_0C0A7F78; }  /* 0C0A7F72 bt */
L_0C0A7F74: BLKS(0x0C0A7F74u);
	r2 = 0x0u;  /* 0C0A7F74 mov #imm,Rn */
	W32(r7, r2); UPD(0x0C0A7F78u, 2);  /* 0C0A7F76 mov.l Rm,@Rn */
L_0C0A7F78: BLKS(0x0C0A7F78u);
	r1 = 0xFFFFFAFBu; UPD(0x0C0A7F7Au, 1);  /* 0C0A7F78 mov.w @(disp,pc),Rn */
	{ IF(0x0C0A7F7Cu); ; /* slot nop */ UPD(0x0C0A7E24u, 3); goto L_0C0A7E24; }  /* 0C0A7F7A bra */
}

/* FUN_0c0a7f90 */
void blk_f_0C0A7F90(sh3_t *c)
{
	LOCALS;
L_0C0A7F90: BLKS(0x0C0A7F90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F92u, 1);  /* 0C0A7F90 mov.l Rm,@-Rn */
	r4 = 0x4Cu;  /* 0C0A7F92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F96u, 2);  /* 0C0A7F94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F98u, 1);  /* 0C0A7F96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F9Au, 1);  /* 0C0A7F98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F9Cu, 1);  /* 0C0A7F9A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7F9Eu, 1);  /* 0C0A7F9C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FA0u, 1);  /* 0C0A7F9E mov.l Rm,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0A7FA2u, 1);  /* 0C0A7FA0 mov.l @(disp,pc),Rn */
	IF(0x0C0A7FA2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7FA4u, 1);  /* 0C0A7FA2 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C0A7FA6u, 1);  /* 0C0A7FA4 mov.l @(disp,pc),Rn */
	IF(0x0C0A7FA6u); { u32 t_ = r8; PR = 0x0C0A7FAAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0A7FAAu); }  /* 0C0A7FA6 jsr @Rn */
L_0C0A7FAA: BLKS(0x0C0A7FAAu);
	T = (r0 & r0) == 0;  /* 0C0A7FAA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7FD0u, 4); goto L_0C0A7FD0; } UPD(0x0C0A7FB0u, 1); goto L_0C0A7FB0; }  /* 0C0A7FAC bf/s */
L_0C0A7FB0: BLKS(0x0C0A7FB0u);
	r15 = r14;  /* 0C0A7FB0 mov Rm,Rn */
	IF(0x0C0A7FB2u); PR = R32(r15); r15 += 4; UPD(0x0C0A7FB4u, 2);  /* 0C0A7FB2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7FB6u, 1);  /* 0C0A7FB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7FB8u, 1);  /* 0C0A7FB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7FBAu, 1);  /* 0C0A7FB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7FBCu, 1);  /* 0C0A7FBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A7FBEu, 1);  /* 0C0A7FBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7FC0u, 1);  /* 0C0A7FBE mov.l @Rm+,Rn */
	IF(0x0C0A7FC0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7FC0 rts */
L_0C0A7FD0: BLKS(0x0C0A7FD0u);
	r8 = 0xC071740u; UPD(0x0C0A7FD2u, 1);  /* 0C0A7FD0 mov.l @(disp,pc),Rn */
	r13 = 0xC28EDFCu; UPD(0x0C0A7FD4u, 1);  /* 0C0A7FD2 mov.l @(disp,pc),Rn */
	IF(0x0C0A7FD4u); { u32 t_ = r8; PR = 0x0C0A7FD8u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0A7FD8u); }  /* 0C0A7FD4 jsr @Rn */
L_0C0A7FD8: BLKS(0x0C0A7FD8u);
	T = (r0 & r0) == 0;  /* 0C0A7FD8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7FB0u, 4); goto L_0C0A7FB0; } goto L_0C0A7FDE; }  /* 0C0A7FDA bt/s */
L_0C0A7FDE: BLKS(0x0C0A7FDEu);
	r9 = 0xC1DC8F4u; UPD(0x0C0A7FE0u, 2);  /* 0C0A7FDE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0A7FE0 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C0A7FE4u, 2);  /* 0C0A7FE2 mov.w @(disp,pc),Rn */
	r11 = r13;  /* 0C0A7FE4 mov Rm,Rn */
	IF(0x0C0A7FE6u); ;  /* 0C0A7FE6 nop */
	UPD(0x0C0A7FE8u, 2);
L_0C0A7FE8: BLKS(0x0C0A7FE8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C0A7FEAu, 1);  /* 0C0A7FE8 mov.w @Rm+,Rn */
	r3 = 0x4Cu;  /* 0C0A7FEA mov #imm,Rn */
	IF(0x0C0A7FECu); MACL = r4 * r12;  /* 0C0A7FEC mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0A7FF0u, 4);  /* 0C0A7FEE mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0A7FF0 mov #imm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0A7FF4u, 2);  /* 0C0A7FF2 mov.l @(disp,pc),Rn */
	IF(0x0C0A7FF4u); r8 = MACL;  /* 0C0A7FF4 sts macl,Rn */
	r8 += r7;  /* 0C0A7FF6 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0A7FFAu, 3);  /* 0C0A7FF8 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A7FFCu, 1);  /* 0C0A7FFA mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A7FFC add #imm,Rn */
	W16(r8, r5); UPD(0x0C0A8000u, 2);  /* 0C0A7FFE mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A8000 add #imm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0A8004u, 2);  /* 0C0A8002 mov.l Rm,@(disp,Rn) */
	r7 = 0xC0A8A30u; UPD(0x0C0A8006u, 1);  /* 0C0A8004 mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C0A8008u, 1);  /* 0C0A8006 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0A800Au, 1);  /* 0C0A8008 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A800Au); { u32 t_ = r7; PR = 0x0C0A800Eu; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A800Eu); }  /* 0C0A800A jsr @Rn */
L_0C0A800E: BLKS(0x0C0A800Eu);
	r6 = R32(r9 + 0x4u); UPD(0x0C0A8010u, 1);  /* 0C0A800E mov.l @(disp,Rm),Rn */
	r2 = 0x17u;  /* 0C0A8010 mov #imm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0A8014u, 2);  /* 0C0A8012 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x8u); UPD(0x0C0A8016u, 1);  /* 0C0A8014 mov.l @(disp,Rm),Rn */
	r5 = 0xC3C4048u; UPD(0x0C0A8018u, 1);  /* 0C0A8016 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C0A801Au, 1);  /* 0C0A8018 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r6); UPD(0x0C0A801Cu, 1);  /* 0C0A801A mov.l Rm,@(disp,Rn) */
	r3 = R32(r5); UPD(0x0C0A801Eu, 1);  /* 0C0A801C mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A8020u, 1);  /* 0C0A801E mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C0A8020 add Rm,Rn */
	IF(0x0C0A8022u); W8(r0 + r8, r2); UPD(0x0C0A8024u, 2);  /* 0C0A8022 mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C0A8026u, 1);  /* 0C0A8024 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C0A8026 mov Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0A802Au, 2);  /* 0C0A8028 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0A802A add #imm,Rn */
	r7 = 0x808080u; UPD(0x0C0A802Eu, 2);  /* 0C0A802C mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0A802E exts.w Rm,Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C0A8032u, 2);  /* 0C0A8030 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r7); UPD(0x0C0A8034u, 1);  /* 0C0A8032 mov.l Rm,@(disp,Rn) */
	r6 = 0xC23E0A6u; UPD(0x0C0A8036u, 1);  /* 0C0A8034 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A8038u, 1);  /* 0C0A8036 mov.b @Rm,Rn */
	r4 = 0xC1DBA64u; UPD(0x0C0A803Au, 1);  /* 0C0A8038 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C0A803A extu.b Rm,Rn */
	IF(0x0C0A803Cu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A803Eu, 2);  /* 0C0A803C mov.b @(r0,Rm),Rn */
	r0 = 0xA1u; UPD(0x0C0A8040u, 1);  /* 0C0A803E mov.w @(disp,pc),Rn */
	IF(0x0C0A8040u); W8(r0 + r8, r3); UPD(0x0C0A8042u, 1);  /* 0C0A8040 mov.b Rm,@(r0,Rn) */
	r0 = 0x4u;  /* 0C0A8042 mov #imm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C0A8044 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A7FE8u, 5); goto L_0C0A7FE8; } goto L_0C0A804A; }  /* 0C0A8046 bf/s */
L_0C0A804A: BLKS(0x0C0A804Au);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A7FB0u, 4); goto L_0C0A7FB0; }  /* 0C0A804A bra */
}

/* FUN_0c0a8090 */
void blk_f_0C0A8090(sh3_t *c)
{
	LOCALS;
L_0C0A8090: BLKS(0x0C0A8090u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8092u, 1);  /* 0C0A8090 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0A8092 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8096u, 2);  /* 0C0A8094 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8098u, 1);  /* 0C0A8096 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A809Au, 1);  /* 0C0A8098 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0A809A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A809Eu, 2);  /* 0C0A809C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A80A0u, 1);  /* 0C0A809E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A80A2u, 1);  /* 0C0A80A0 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0A80A2 exts.w Rm,Rn */
	IF(0x0C0A80A4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A80A6u, 2);  /* 0C0A80A4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0A80A6 add #imm,Rn */
	r14 = r15;  /* 0C0A80A8 mov Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0A80ACu, 3);  /* 0C0A80AA mov.l Rm,@(disp,Rn) */
	r3 += r14;  /* 0C0A80AC add Rm,Rn */
	r6 = R32(r3 + 0x0u); UPD(0x0C0A80B0u, 2);  /* 0C0A80AE mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C0A80B2u, 1);  /* 0C0A80B0 mov.l @(disp,Rm),Rn */
	W32(r14, r5); UPD(0x0C0A80B4u, 1);  /* 0C0A80B2 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0A80B4 exts.w Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0A80B8u, 2);  /* 0C0A80B6 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s8)r6;  /* 0C0A80B8 exts.b Rm,Rn */
	r8 = 0xC071740u; UPD(0x0C0A80BCu, 2);  /* 0C0A80BA mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0A80BC exts.w Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0A80C0u, 2);  /* 0C0A80BE mov.l Rm,@(disp,Rn) */
	r4 = 0x2u;  /* 0C0A80C0 mov #imm,Rn */
	IF(0x0C0A80C2u); { u32 t_ = r8; PR = 0x0C0A80C6u; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0A80C6u); }  /* 0C0A80C2 jsr @Rn */
L_0C0A80C6: BLKS(0x0C0A80C6u);
	T = (r0 & r0) == 0;  /* 0C0A80C6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A80F0u, 4); goto L_0C0A80F0; } UPD(0x0C0A80CCu, 1); goto L_0C0A80CC; }  /* 0C0A80C8 bf/s */
L_0C0A80CC: BLKS(0x0C0A80CCu);
	r14 += 0x20u;  /* 0C0A80CC add #imm,Rn */
	r15 = r14;  /* 0C0A80CE mov Rm,Rn */
	IF(0x0C0A80D0u); PR = R32(r15); r15 += 4; UPD(0x0C0A80D2u, 3);  /* 0C0A80D0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A80D4u, 1);  /* 0C0A80D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A80D6u, 1);  /* 0C0A80D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A80D8u, 1);  /* 0C0A80D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A80DAu, 1);  /* 0C0A80D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A80DCu, 1);  /* 0C0A80DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A80DEu, 1);  /* 0C0A80DC mov.l @Rm+,Rn */
	IF(0x0C0A80DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A80DE rts */
L_0C0A80F0: BLKS(0x0C0A80F0u);
	r8 = 0xC28EDFCu; UPD(0x0C0A80F2u, 1);  /* 0C0A80F0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0A80F2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r11 = v_; } UPD(0x0C0A80F6u, 2);  /* 0C0A80F4 mov.w @Rm+,Rn */
	r3 = 0x4Fu;  /* 0C0A80F6 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0A80FAu, 2);  /* 0C0A80F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A80FAu); MACL = r11 * r9;  /* 0C0A80FA mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A80FEu, 3);  /* 0C0A80FC mov.l @(disp,pc),Rn */
	IF(0x0C0A80FEu); r9 = MACL;  /* 0C0A80FE sts macl,Rn */
	r4 = 0xC0000000u; UPD(0x0C0A8102u, 2);  /* 0C0A8100 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C0A8102 add Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0A8106u, 2);  /* 0C0A8104 mov.l @(disp,pc),Rn */
	W32(r9, r4); UPD(0x0C0A8108u, 1);  /* 0C0A8106 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C0A810Au, 1);  /* 0C0A8108 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0A810A mov Rm,Rn */
	W32(r9 + 0xCu, r1); UPD(0x0C0A810Eu, 2);  /* 0C0A810C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A810Eu); { u32 t_ = r0; PR = 0x0C0A8112u; W32(r9 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A8112u); }  /* 0C0A810E jsr @Rn */
L_0C0A8112: BLKS(0x0C0A8112u);
	W32(r9 + 0x24u, r10); UPD(0x0C0A8114u, 1);  /* 0C0A8112 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0A8114 mov Rm,Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C0A8118u, 2);  /* 0C0A8116 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0A811Au, 1);  /* 0C0A8118 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C0A811Cu, 1);  /* 0C0A811A mov.w @(disp,pc),Rn */
	r10 = 0x1C000u; UPD(0x0C0A811Eu, 1);  /* 0C0A811C mov.l @(disp,pc),Rn */
	W32(r9 + 0x28u, r7); UPD(0x0C0A8120u, 1);  /* 0C0A811E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8120u); { u32 t_ = r6; PR = 0x0C0A8124u; IF(0x0C0A8122u); W32(r0 + r9, r10); /* slot mov.l Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0A8124u); }  /* 0C0A8120 jsr @Rn */
L_0C0A8124: BLKS(0x0C0A8124u);
	r5 = 0xA8u; UPD(0x0C0A8126u, 1);  /* 0C0A8124 mov.w @(disp,pc),Rn */
	r0 = 0xBu;  /* 0C0A8126 mov #imm,Rn */
	r4 = 0xACu; UPD(0x0C0A812Au, 2);  /* 0C0A8128 mov.w @(disp,pc),Rn */
	r5 += r9;  /* 0C0A812A add Rm,Rn */
	r4 += r9;  /* 0C0A812C add Rm,Rn */
	r4 += 0x1u;  /* 0C0A812E add #imm,Rn */
	r5 += 0x1u;  /* 0C0A8130 add #imm,Rn */
	W32(r14 + 0x10u, r5); UPD(0x0C0A8134u, 5);  /* 0C0A8132 mov.l Rm,@(disp,Rn) */
	r1 = 0x6u;  /* 0C0A8134 mov #imm,Rn */
	IF(0x0C0A8136u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0A8138u, 2);  /* 0C0A8136 mov.b @(r0,Rm),Rn */
	IF(0x0C0A8138u); ARG0(0x4C1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C0A8138 shld Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0A813Cu, 2);  /* 0C0A813A mov.l Rm,@(disp,Rn) */
	r0 = 0xBu;  /* 0C0A813C mov #imm,Rn */
	W8(r4, r2); UPD(0x0C0A8140u, 2);  /* 0C0A813E mov.b Rm,@Rn */
	r7 = 0xEu;  /* 0C0A8140 mov #imm,Rn */
	IF(0x0C0A8142u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0A8144u, 2);  /* 0C0A8142 mov.b @(r0,Rm),Rn */
	r7 += r14;  /* 0C0A8144 add Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0A8148u, 2);  /* 0C0A8146 mov.l @(disp,Rm),Rn */
	W8(r0, r3); UPD(0x0C0A814Au, 1);  /* 0C0A8148 mov.b Rm,@Rn */
	r0 = 0x86u; UPD(0x0C0A814Cu, 1);  /* 0C0A814A mov.w @(disp,pc),Rn */
	r5 = 0xB4u; UPD(0x0C0A814Eu, 1);  /* 0C0A814C mov.w @(disp,pc),Rn */
	IF(0x0C0A814Eu); W16(r0 + r9, r12); UPD(0x0C0A8150u, 1);  /* 0C0A814E mov.w Rm,@(r0,Rn) */
	IF(0x0C0A8150u); MACL = r13 * r5;  /* 0C0A8150 mul.l Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A8154u, 3);  /* 0C0A8152 mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C0A8154 add #imm,Rn */
	IF(0x0C0A8156u); W16(r0 + r9, r10); UPD(0x0C0A8158u, 2);  /* 0C0A8156 mov.w Rm,@(r0,Rn) */
	IF(0x0C0A8158u); r4 = MACL;  /* 0C0A8158 sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C0A815Cu, 2);  /* 0C0A815A mov.l @(disp,pc),Rn */
	r9 += 0x7Cu;  /* 0C0A815C add #imm,Rn */
	W16(r9, r13); UPD(0x0C0A8160u, 2);  /* 0C0A815E mov.w Rm,@Rn */
	r5 += 0xFFFFFFCCu;  /* 0C0A8160 add #imm,Rn */
	r4 += r6;  /* 0C0A8162 add Rm,Rn */
	r4 += r5;  /* 0C0A8164 add Rm,Rn */
	r10 = 0x80u; UPD(0x0C0A8168u, 4);  /* 0C0A8166 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFF84u;  /* 0C0A8168 add #imm,Rn */
	r4 += 0x2u;  /* 0C0A816A add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A816Eu, 3);  /* 0C0A816C mov.w @Rm,Rn */
	r10 += r9;  /* 0C0A816E add Rm,Rn */
	r10 += 0x2u;  /* 0C0A8170 add #imm,Rn */
	W16(r10, r13); UPD(0x0C0A8174u, 3);  /* 0C0A8172 mov.w Rm,@Rn */
	r12 = 0xB4u; UPD(0x0C0A8176u, 1);  /* 0C0A8174 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A8178u, 1);  /* 0C0A8176 mov.w @Rm,Rn */
	IF(0x0C0A8178u); MACL = r13 * r12;  /* 0C0A8178 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0A817Cu, 3);  /* 0C0A817A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0A817C mov Rm,Rn */
	IF(0x0C0A817Eu); r12 = MACL;  /* 0C0A817E sts macl,Rn */
	r12 += r3;  /* 0C0A8180 add Rm,Rn */
	r12 += 0x7Cu;  /* 0C0A8182 add #imm,Rn */
	W16(r12, r11); UPD(0x0C0A8186u, 5);  /* 0C0A8184 mov.w Rm,@Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C0A8188u, 1);  /* 0C0A8186 mov.l @(disp,Rm),Rn */
	r12 += 0xFFFFFF84u;  /* 0C0A8188 add #imm,Rn */
	W32(r12 + 0x4u, r0); UPD(0x0C0A818Cu, 2);  /* 0C0A818A mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C0A818C mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C0A8190u, 2);  /* 0C0A818E mov.l @Rm,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C0A8192u, 1);  /* 0C0A8190 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0A8192 and #imm,r0 */
	r2 = 0xD300C100u; UPD(0x0C0A8196u, 2);  /* 0C0A8194 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0A8196 add #imm,Rn */
	W32(r12, r2); UPD(0x0C0A819Au, 2);  /* 0C0A8198 mov.l Rm,@Rn */
	W32(r12 + 0x8u, r0); UPD(0x0C0A819Cu, 1);  /* 0C0A819A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A819Cu); { u32 t_ = r1; PR = 0x0C0A81A0u; W32(r12 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A81A0u); }  /* 0C0A819C jsr @Rn */
L_0C0A81A0: BLKS(0x0C0A81A0u);
	r6 = 0xC0A9AE0u; UPD(0x0C0A81A2u, 1);  /* 0C0A81A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0A81A2 mov Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C0A81A6u, 2);  /* 0C0A81A4 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C0A81A8u, 1);  /* 0C0A81A6 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x24u, r7); UPD(0x0C0A81AAu, 1);  /* 0C0A81A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A81AAu); { u32 t_ = r6; PR = 0x0C0A81AEu; W32(r12 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0A81AEu); }  /* 0C0A81AA jsr @Rn */
L_0C0A81AE: BLKS(0x0C0A81AEu);
	r5 = 0xA8u; UPD(0x0C0A81B0u, 1);  /* 0C0A81AE mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0A81B0 mov #imm,Rn */
	r5 += r12;  /* 0C0A81B2 add Rm,Rn */
	r5 += 0x1u;  /* 0C0A81B4 add #imm,Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C0A81B8u, 4);  /* 0C0A81B6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x10u); UPD(0x0C0A81BAu, 1);  /* 0C0A81B8 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C0A81BCu, 1);  /* 0C0A81BA mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A81BEu, 1);  /* 0C0A81BC mov.b @Rm,Rn */
	r0 = 0xACu; UPD(0x0C0A81C0u, 1);  /* 0C0A81BE mov.w @(disp,pc),Rn */
	r4 = 0x7Au;  /* 0C0A81C0 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C0A81C4u, 2);  /* 0C0A81C2 mov.b Rm,@Rn */
	r0 += r12;  /* 0C0A81C4 add Rm,Rn */
	r0 += 0x1u;  /* 0C0A81C6 add #imm,Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C0A81CAu, 3);  /* 0C0A81C8 mov.l Rm,@(disp,Rn) */
	r13 = R32(r14 + 0x14u); UPD(0x0C0A81CCu, 1);  /* 0C0A81CA mov.l @(disp,Rm),Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C0A81CEu, 1);  /* 0C0A81CC mov.l @(disp,Rm),Rn */
	r0 = 0x9Bu; UPD(0x0C0A81D0u, 1);  /* 0C0A81CE mov.w @(disp,pc),Rn */
	IF(0x0C0A81D0u); W8(r0 + r12, r1); UPD(0x0C0A81D2u, 1);  /* 0C0A81D0 mov.b Rm,@(r0,Rn) */
	r8 = 0xC0C2110u; UPD(0x0C0A81D4u, 1);  /* 0C0A81D2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFE5u;  /* 0C0A81D4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A81D8u, 2);  /* 0C0A81D6 mov.b @Rm,Rn */
	r12 += r0;  /* 0C0A81D8 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A81DCu, 2);  /* 0C0A81DA mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C0A81DC add #imm,Rn */
	W8(r9, r11); UPD(0x0C0A81E0u, 2);  /* 0C0A81DE mov.b Rm,@Rn */
	IF(0x0C0A81E0u); { u32 t_ = r8; PR = 0x0C0A81E4u; W16(r12, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0A81E4u); }  /* 0C0A81E0 jsr @Rn */
L_0C0A81E4: BLKS(0x0C0A81E4u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A80CCu, 3); goto L_0C0A80CC; }  /* 0C0A81E4 bra */
}

void blk_f_0C0A8220(sh3_t *c)
{
	LOCALS;
L_0C0A8220: BLKS(0x0C0A8220u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8222u, 1);  /* 0C0A8220 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C0A8222 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8226u, 2);  /* 0C0A8224 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8228u, 1);  /* 0C0A8226 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A822Au, 1);  /* 0C0A8228 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A822Cu, 1);  /* 0C0A822A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A822Eu, 1);  /* 0C0A822C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8230u, 1);  /* 0C0A822E mov.l Rm,@-Rn */
	r8 = 0xC071740u; UPD(0x0C0A8232u, 1);  /* 0C0A8230 mov.l @(disp,pc),Rn */
	IF(0x0C0A8232u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8234u, 1);  /* 0C0A8232 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A8234 add #imm,Rn */
	IF(0x0C0A8236u); { u32 t_ = r8; PR = 0x0C0A823Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0A823Au); }  /* 0C0A8236 jsr @Rn */
L_0C0A823A: BLKS(0x0C0A823Au);
	T = (r0 & r0) == 0;  /* 0C0A823A tst Rm,Rn */
	if (!T) { UPD(0x0C0A8260u, 4); goto L_0C0A8260; }  /* 0C0A823C bf */
L_0C0A823E: BLKS(0x0C0A823Eu);
	r0 = 0x1u;  /* 0C0A823E mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A8240 add #imm,Rn */
	r15 = r14;  /* 0C0A8242 mov Rm,Rn */
	IF(0x0C0A8244u); PR = R32(r15); r15 += 4; UPD(0x0C0A8246u, 4);  /* 0C0A8244 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8248u, 1);  /* 0C0A8246 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A824Au, 1);  /* 0C0A8248 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A824Cu, 1);  /* 0C0A824A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A824Eu, 1);  /* 0C0A824C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8250u, 1);  /* 0C0A824E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8252u, 1);  /* 0C0A8250 mov.l @Rm+,Rn */
	IF(0x0C0A8252u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8252 rts */
L_0C0A8260: BLKS(0x0C0A8260u);
	r8 = 0xC28EDFCu; UPD(0x0C0A8262u, 1);  /* 0C0A8260 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0A8262 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A8266u, 2);  /* 0C0A8264 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A8268u, 1);  /* 0C0A8266 mov.w @(disp,pc),Rn */
	r4 = 0xC2460ACu; UPD(0x0C0A826Au, 1);  /* 0C0A8268 mov.l @(disp,pc),Rn */
	IF(0x0C0A826Au); MACL = r12 * r9;  /* 0C0A826A mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A826Eu, 3);  /* 0C0A826C mov.w @Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A8270u, 1);  /* 0C0A826E mov.l @(disp,pc),Rn */
	IF(0x0C0A8270u); r9 = MACL;  /* 0C0A8270 sts macl,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C0A8274u, 2);  /* 0C0A8272 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C0A8274 add Rm,Rn */
	r5 = 0xD3000100u; UPD(0x0C0A8278u, 2);  /* 0C0A8276 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C0A8278 extu.w Rm,Rn */
	W32(r9, r5); UPD(0x0C0A827Cu, 2);  /* 0C0A827A mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A827C mov Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C0A8280u, 2);  /* 0C0A827E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r0); UPD(0x0C0A8282u, 1);  /* 0C0A8280 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8282u); { u32 t_ = r1; PR = 0x0C0A8286u; W32(r9 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A8286u); }  /* 0C0A8282 jsr @Rn */
L_0C0A8286: BLKS(0x0C0A8286u);
	r11 = 0xC0722E0u; UPD(0x0C0A8288u, 1);  /* 0C0A8286 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A8288 mov Rm,Rn */
	r7 = 0x1500000u; UPD(0x0C0A828Cu, 2);  /* 0C0A828A mov.l @(disp,pc),Rn */
	r13 = 0xC0A9AE0u; UPD(0x0C0A828Eu, 1);  /* 0C0A828C mov.l @(disp,pc),Rn */
	IF(0x0C0A828Eu); { u32 t_ = r11; PR = 0x0C0A8292u; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0A8292u); }  /* 0C0A828E jsr @Rn */
L_0C0A8292: BLKS(0x0C0A8292u);
	IF(0x0C0A8292u); { u32 t_ = r13; PR = 0x0C0A8296u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0A8296u); }  /* 0C0A8292 jsr @Rn */
L_0C0A8296: BLKS(0x0C0A8296u);
	r0 = 0x8Cu; UPD(0x0C0A8298u, 1);  /* 0C0A8296 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0A8298 mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C0A829Cu, 2);  /* 0C0A829A mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0A829C mov #imm,Rn */
	IF(0x0C0A829Eu); W32(r0 + r9, r10); UPD(0x0C0A82A0u, 2);  /* 0C0A829E mov.l Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A82A0 mov #imm,Rn */
	r13 = 0xA8u; UPD(0x0C0A82A4u, 2);  /* 0C0A82A2 mov.w @(disp,pc),Rn */
	r10 = 0xACu; UPD(0x0C0A82A6u, 1);  /* 0C0A82A4 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C0A82A6 add Rm,Rn */
	r10 += r9;  /* 0C0A82A8 add Rm,Rn */
	r13 += 0x1u;  /* 0C0A82AA add #imm,Rn */
	r10 += 0x1u;  /* 0C0A82AC add #imm,Rn */
	W8(r10, r11); UPD(0x0C0A82B0u, 5);  /* 0C0A82AE mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A82B2u, 1);  /* 0C0A82B0 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A82B4u, 1);  /* 0C0A82B2 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A82B6u, 1);  /* 0C0A82B4 mov.w @(disp,pc),Rn */
	IF(0x0C0A82B6u); MACL = r11 * r8;  /* 0C0A82B6 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A82BAu, 3);  /* 0C0A82B8 mov.l @(disp,pc),Rn */
	IF(0x0C0A82BAu); r8 = MACL;  /* 0C0A82BA sts macl,Rn */
	r8 += r6;  /* 0C0A82BC add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A82BE add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A82C2u, 4);  /* 0C0A82C0 mov.w Rm,@Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C0A82C4u, 1);  /* 0C0A82C2 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A82C4 add #imm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0A82C8u, 2);  /* 0C0A82C6 mov.l @(disp,pc),Rn */
	r5 = 0xC0000000u; UPD(0x0C0A82CAu, 1);  /* 0C0A82C8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C0A82CCu, 1);  /* 0C0A82CA mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A82CEu, 1);  /* 0C0A82CC mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A82CE mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C0A82D2u, 2);  /* 0C0A82D0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A82D2u); { u32 t_ = r0; PR = 0x0C0A82D6u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A82D6u); }  /* 0C0A82D2 jsr @Rn */
L_0C0A82D6: BLKS(0x0C0A82D6u);
	r1 = 0xC0A9AE0u; UPD(0x0C0A82D8u, 1);  /* 0C0A82D6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A82D8 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A82DCu, 2);  /* 0C0A82DA mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A82DEu, 1);  /* 0C0A82DC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A82E0u, 1);  /* 0C0A82DE mov.l Rm,@(disp,Rn) */
	IF(0x0C0A82E0u); { u32 t_ = r1; PR = 0x0C0A82E4u; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0A82E4u); }  /* 0C0A82E0 jsr @Rn */
L_0C0A82E4: BLKS(0x0C0A82E4u);
	r0 = 0xB0u; UPD(0x0C0A82E6u, 1);  /* 0C0A82E4 mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C0A82E8u, 1);  /* 0C0A82E6 mov.w @(disp,pc),Rn */
	IF(0x0C0A82E8u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A82EAu, 1);  /* 0C0A82E8 mov.b @(r0,Rm),Rn */
	r5 += r8;  /* 0C0A82EA add Rm,Rn */
	IF(0x0C0A82ECu); W8(r0 + r8, r6); UPD(0x0C0A82EEu, 2);  /* 0C0A82EC mov.b Rm,@(r0,Rn) */
	r5 += 0x1u;  /* 0C0A82EE add #imm,Rn */
	W32(r14, r5); UPD(0x0C0A82F2u, 2);  /* 0C0A82F0 mov.l Rm,@Rn */
	r2 = 0xACu; UPD(0x0C0A82F4u, 1);  /* 0C0A82F2 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0A82F6u, 1);  /* 0C0A82F4 mov.l @Rm,Rn */
	r8 += r2;  /* 0C0A82F6 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A82FAu, 2);  /* 0C0A82F8 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A82FA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0A82FEu, 2);  /* 0C0A82FC mov.b @Rm,Rn */
	W8(r3, r4); UPD(0x0C0A8300u, 1);  /* 0C0A82FE mov.b Rm,@Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0A823Eu, 3); goto L_0C0A823E; }  /* 0C0A8300 bra */
}

void blk_f_0C0A8340(sh3_t *c)
{
	LOCALS;
L_0C0A8340: BLKS(0x0C0A8340u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8342u, 1);  /* 0C0A8340 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8344u, 1);  /* 0C0A8342 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8346u, 1);  /* 0C0A8344 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8348u, 1);  /* 0C0A8346 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A834Au, 1);  /* 0C0A8348 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A834Cu, 1);  /* 0C0A834A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0A834C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8350u, 2);  /* 0C0A834E mov.l Rm,@-Rn */
	IF(0x0C0A8350u); MACL = r12 * r3;  /* 0C0A8350 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8354u, 3);  /* 0C0A8352 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0A8356u, 1);  /* 0C0A8354 mov.l @(disp,pc),Rn */
	IF(0x0C0A8356u); r2 = MACL;  /* 0C0A8356 sts macl,Rn */
	IF(0x0C0A8358u); r15 -= 4; W32(r15, PR); UPD(0x0C0A835Au, 2);  /* 0C0A8358 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A835A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A835Eu, 2);  /* 0C0A835C mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C0A835E mov #imm,Rn */
	T = r2 > r0;  /* 0C0A8360 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A8438u, 5); goto L_0C0A8438; } goto L_0C0A8366; }  /* 0C0A8362 bt/s */
L_0C0A8366: BLKS(0x0C0A8366u);
	r0 = 0xC0A8378u;  /* 0C0A8366 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A8368 add Rm,Rn */
	IF(0x0C0A836Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A836Cu, 4);  /* 0C0A836A mov.w @(r0,Rm),Rn */
	IF(0x0C0A836Cu); { u32 tv_ = (r4 + 0x0C0A8370u); u32 t_ = PHYS(tv_); IF(0x0C0A836Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8390u: goto L_0C0A8390; case 0x0C0A84A0u: goto L_0C0A84A0; case 0x0C0A85E0u: goto L_0C0A85E0; case 0x0C0A8650u: goto L_0C0A8650; case 0x0C0A86C0u: goto L_0C0A86C0; default: JUMPD(tv_); } }  /* 0C0A836C braf Rn */
L_0C0A8390: BLKS(0x0C0A8390u);
	r8 = 0xC0A8B50u; UPD(0x0C0A8392u, 1);  /* 0C0A8390 mov.l @(disp,pc),Rn */
	IF(0x0C0A8392u); { u32 t_ = r8; PR = 0x0C0A8396u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A8396u); }  /* 0C0A8392 jsr @Rn */
L_0C0A8396: BLKS(0x0C0A8396u);
	IF(0x0C0A8396u); T = (s32)r0 >= 0;  /* 0C0A8396 cmp/pz Rn */
	if (!T) { UPD(0x0C0A83B2u, 4); goto L_0C0A83B2; }  /* 0C0A8398 bf */
L_0C0A839A: BLKS(0x0C0A839Au);
	r9 = 0xB4u; UPD(0x0C0A839Cu, 1);  /* 0C0A839A mov.w @(disp,pc),Rn */
	IF(0x0C0A839Cu); MACL = r12 * r9;  /* 0C0A839C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0A83A0u, 3);  /* 0C0A839E mov.l @(disp,pc),Rn */
	IF(0x0C0A83A0u); r7 = MACL;  /* 0C0A83A0 sts macl,Rn */
	IF(0x0C0A83A2u); MACL = r0 * r9;  /* 0C0A83A2 mul.l Rm,Rn */
	IF(0x0C0A83A4u); r0 = MACL;  /* 0C0A83A4 sts macl,Rn */
	r0 += r5;  /* 0C0A83A6 add Rm,Rn */
	r9 += 0xFFFFFFD2u;  /* 0C0A83A8 add #imm,Rn */
	IF(0x0C0A83AAu); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0A83ACu, 7);  /* 0C0A83AA mov.w @(r0,Rm),Rn */
	r5 += r7;  /* 0C0A83AC add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A83B0u, 2);  /* 0C0A83AE mov.w @(disp,pc),Rn */
	IF(0x0C0A83B0u); W16(r0 + r5, r6); UPD(0x0C0A83B2u, 1);  /* 0C0A83B0 mov.w Rm,@(r0,Rn) */
L_0C0A83B2: BLKS(0x0C0A83B2u);
	r11 = 0xB4u; UPD(0x0C0A83B4u, 1);  /* 0C0A83B2 mov.w @(disp,pc),Rn */
	IF(0x0C0A83B4u); MACL = r12 * r11;  /* 0C0A83B4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0A83B8u, 3);  /* 0C0A83B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A83B8u); r9 = MACL;  /* 0C0A83B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0A83BCu, 2);  /* 0C0A83BA mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0A83BC add Rm,Rn */
	r2 += r9;  /* 0C0A83BE add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A83C2u, 3);  /* 0C0A83C0 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0A83C2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A83DAu, 4); goto L_0C0A83DA; } goto L_0C0A83C8; }  /* 0C0A83C4 bt/s */
L_0C0A83C8: BLKS(0x0C0A83C8u);
	r13 = 0x86u; UPD(0x0C0A83CAu, 2);  /* 0C0A83C8 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0A83CA add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A83CEu, 2);  /* 0C0A83CC mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C0A83CE add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A83D2u, 2);  /* 0C0A83D0 mov.w @Rm,Rn */
	IF(0x0C0A83D2u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0A83D4u, 1);  /* 0C0A83D2 mov.w @(r0,Rm),Rn */
	r3 += r1;  /* 0C0A83D4 add Rm,Rn */
	W8(r2, r4); UPD(0x0C0A83D8u, 2);  /* 0C0A83D6 mov.b Rm,@Rn */
	W16(r13, r3); UPD(0x0C0A83DAu, 1);  /* 0C0A83D8 mov.w Rm,@Rn */
L_0C0A83DA: BLKS(0x0C0A83DAu);
	r10 = 0x8Cu; UPD(0x0C0A83DCu, 1);  /* 0C0A83DA mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0A83DC mov Rm,Rn */
	r10 += r9;  /* 0C0A83DE add Rm,Rn */
	r5 = R32(r10); UPD(0x0C0A83E2u, 3);  /* 0C0A83E0 mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C0A83E4u, 1);  /* 0C0A83E2 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C0A83E4 add Rm,Rn */
	r6 += 0xFFFFFF86u;  /* 0C0A83E6 add #imm,Rn */
	IF(0x0C0A83E8u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0A83EAu, 3);  /* 0C0A83E8 mov.w @(r0,Rm),Rn */
	r11 = 0xC069B20u; UPD(0x0C0A83ECu, 1);  /* 0C0A83EA mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFFFAu;  /* 0C0A83EC mov #imm,Rn */
	IF(0x0C0A83EEu); ARG0(0x4D0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C0A83EE shad Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0A83F2u, 3);  /* 0C0A83F0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0A83F2 mov Rm,Rn */
	IF(0x0C0A83F4u); { u32 t_ = r11; PR = 0x0C0A83F8u; W32(r10, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0A83F8u); }  /* 0C0A83F4 jsr @Rn */
L_0C0A83F8: BLKS(0x0C0A83F8u);
	W32(r9 + 0x2Cu, r0); UPD(0x0C0A83FAu, 1);  /* 0C0A83F8 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0A83FA mov Rm,Rn */
	IF(0x0C0A83FCu); { u32 t_ = r8; PR = 0x0C0A8400u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0A8400u); }  /* 0C0A83FC jsr @Rn */
L_0C0A8400: BLKS(0x0C0A8400u);
	r7 = R32(r9 + 0x24u); UPD(0x0C0A8402u, 1);  /* 0C0A8400 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0A8404u, 1);  /* 0C0A8402 mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C0A8406u, 1);  /* 0C0A8404 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C0A8406 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C0A840Au, 2);  /* 0C0A8408 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A840A add Rm,Rn */
	r2 += r7;  /* 0C0A840C add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0A8410u, 3);  /* 0C0A840E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8410u); T = (s32)r2 >= 0;  /* 0C0A8410 cmp/pz Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C0A8414u, 2);  /* 0C0A8412 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8490u, 3); goto L_0C0A8490; } UPD(0x0C0A8418u, 1); goto L_0C0A8418; }  /* 0C0A8414 bf/s */
L_0C0A8418: BLKS(0x0C0A8418u);
	r5 = 0xB80000u; UPD(0x0C0A841Au, 1);  /* 0C0A8418 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A841A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A8434u, 4); goto L_0C0A8434; }  /* 0C0A841C bt */
L_0C0A841E: BLKS(0x0C0A841Eu);
	r2 = 0xC3C4048u; UPD(0x0C0A8420u, 1);  /* 0C0A841E mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A8422u, 1);  /* 0C0A8420 mov.l @Rm,Rn */
	r2 = r3;  /* 0C0A8422 mov Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0A8426u, 2);  /* 0C0A8424 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A8426 sub Rm,Rn */
	r2 += r3;  /* 0C0A8428 add Rm,Rn */
	IF(0x0C0A842Au); T = (s32)r2 >= 0;  /* 0C0A842A cmp/pz Rn */
	if (!T) { UPD(0x0C0A8480u, 6); goto L_0C0A8480; }  /* 0C0A842C bf */
L_0C0A842E: BLKS(0x0C0A842Eu);
	r8 = 0x900000u; UPD(0x0C0A8430u, 1);  /* 0C0A842E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0A8430 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A8450u, 4); goto L_0C0A8450; }  /* 0C0A8432 bf */
L_0C0A8434: BLKS(0x0C0A8434u);
	r12 = 0x0u;  /* 0C0A8434 mov #imm,Rn */
	W32(r9, r12); UPD(0x0C0A8438u, 2);  /* 0C0A8436 mov.l Rm,@Rn */
L_0C0A8438: BLKS(0x0C0A8438u);
	r15 = r14;  /* 0C0A8438 mov Rm,Rn */
	IF(0x0C0A843Au); PR = R32(r15); r15 += 4; UPD(0x0C0A843Cu, 2);  /* 0C0A843A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A843Eu, 1);  /* 0C0A843C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8440u, 1);  /* 0C0A843E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8442u, 1);  /* 0C0A8440 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8444u, 1);  /* 0C0A8442 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8446u, 1);  /* 0C0A8444 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8448u, 1);  /* 0C0A8446 mov.l @Rm+,Rn */
	IF(0x0C0A8448u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8448 rts */
L_0C0A8450: BLKS(0x0C0A8450u);
	r10 = 0x3FFFFFu; UPD(0x0C0A8452u, 1);  /* 0C0A8450 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0A8452 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A845Cu, 4); goto L_0C0A845C; }  /* 0C0A8454 bt */
L_0C0A8456: BLKS(0x0C0A8456u);
	r7 = 0x0u;  /* 0C0A8456 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A845Au, 2);  /* 0C0A8458 mov.w @(disp,pc),Rn */
	IF(0x0C0A845Au); W16(r0 + r9, r7); UPD(0x0C0A845Cu, 1);  /* 0C0A845A mov.w Rm,@(r0,Rn) */
L_0C0A845C: BLKS(0x0C0A845Cu);
	r0 = R32(r9 + 0xCu); UPD(0x0C0A845Eu, 1);  /* 0C0A845C mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C0A845E add #imm,Rn */
	r0 &= 0x7u;  /* 0C0A8460 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C0A8464u, 3);  /* 0C0A8462 mov.l Rm,@(disp,Rn) */
L_0C0A8464: BLKS(0x0C0A8464u);
	r7 = 0xC0A8AE0u; UPD(0x0C0A8466u, 1);  /* 0C0A8464 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A8466 mov Rm,Rn */
	r15 = r14;  /* 0C0A8468 mov Rm,Rn */
	IF(0x0C0A846Au); PR = R32(r15); r15 += 4; UPD(0x0C0A846Cu, 3);  /* 0C0A846A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A846Eu, 1);  /* 0C0A846C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8470u, 1);  /* 0C0A846E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8472u, 1);  /* 0C0A8470 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8474u, 1);  /* 0C0A8472 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8476u, 1);  /* 0C0A8474 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8478u, 1);  /* 0C0A8476 mov.l @Rm+,Rn */
	IF(0x0C0A8478u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0A8478 jmp @Rn */
L_0C0A8480: BLKS(0x0C0A8480u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A842Eu, 3); goto L_0C0A842E; }  /* 0C0A8480 bra */
L_0C0A8490: BLKS(0x0C0A8490u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8418u, 3); goto L_0C0A8418; }  /* 0C0A8490 bra */
L_0C0A84A0: BLKS(0x0C0A84A0u);
	r9 = 0xC0A8B50u; UPD(0x0C0A84A2u, 1);  /* 0C0A84A0 mov.l @(disp,pc),Rn */
	IF(0x0C0A84A2u); { u32 t_ = r9; PR = 0x0C0A84A6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A84A6u); }  /* 0C0A84A2 jsr @Rn */
L_0C0A84A6: BLKS(0x0C0A84A6u);
	IF(0x0C0A84A6u); T = (s32)r0 >= 0;  /* 0C0A84A6 cmp/pz Rn */
	if (T) { UPD(0x0C0A84AEu, 4); goto L_0C0A84AE; }  /* 0C0A84A8 bt */
L_0C0A84AA: BLKS(0x0C0A84AAu);
	{ IF(0x0C0A84ACu); ; /* slot nop */ UPD(0x0C0A85D0u, 3); goto L_0C0A85D0; }  /* 0C0A84AA bra */
L_0C0A84AE: BLKS(0x0C0A84AEu);
	r5 = 0xB4u; UPD(0x0C0A84B0u, 1);  /* 0C0A84AE mov.w @(disp,pc),Rn */
	IF(0x0C0A84B0u); MACL = r12 * r5;  /* 0C0A84B0 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A84B4u, 3);  /* 0C0A84B2 mov.l @(disp,pc),Rn */
	IF(0x0C0A84B4u); r10 = MACL;  /* 0C0A84B4 sts macl,Rn */
	IF(0x0C0A84B6u); MACL = r0 * r5;  /* 0C0A84B6 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C0A84BAu, 4);  /* 0C0A84B8 mov.l @(disp,pc),Rn */
	r10 += r6;  /* 0C0A84BA add Rm,Rn */
	IF(0x0C0A84BCu); r11 = MACL;  /* 0C0A84BC sts macl,Rn */
	r11 += r6;  /* 0C0A84BE add Rm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C0A84C2u, 4);  /* 0C0A84C0 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0A84C2 add Rm,Rn */
	W32(r10 + 0x24u, r0); UPD(0x0C0A84C6u, 2);  /* 0C0A84C4 mov.l Rm,@(disp,Rn) */
	r13 = R32(r11 + 0x28u); UPD(0x0C0A84C8u, 1);  /* 0C0A84C6 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0A84CAu, 1);  /* 0C0A84C8 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0A84CA tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A85A0u, 4); goto L_0C0A85A0; } UPD(0x0C0A84D0u, 1); goto L_0C0A84D0; }  /* 0C0A84CC bt/s */
L_0C0A84D0: BLKS(0x0C0A84D0u);
	T = r0 == 0x7u;  /* 0C0A84D0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A84F0u, 4); goto L_0C0A84F0; }  /* 0C0A84D2 bt */
L_0C0A84D4: BLKS(0x0C0A84D4u);
	r0 = 0xB4u; UPD(0x0C0A84D6u, 1);  /* 0C0A84D4 mov.w @(disp,pc),Rn */
	IF(0x0C0A84D6u); MACL = r12 * r0;  /* 0C0A84D6 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0A84DAu, 3);  /* 0C0A84D8 mov.l @(disp,pc),Rn */
	IF(0x0C0A84DAu); r13 = MACL;  /* 0C0A84DA sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0A84DEu, 2);  /* 0C0A84DC mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C0A84DE add Rm,Rn */
	r9 = R32(r13 + 0xCu); UPD(0x0C0A84E2u, 2);  /* 0C0A84E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A84E2u); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0A84E4u, 1);  /* 0C0A84E2 mov.w @(r0,Rm),Rn */
	r9 += r1;  /* 0C0A84E4 add Rm,Rn */
	{ W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A8464u, 4); goto L_0C0A8464; }  /* 0C0A84E6 bra */
L_0C0A84F0: BLKS(0x0C0A84F0u);
	r11 = 0xC069B50u; UPD(0x0C0A84F2u, 1);  /* 0C0A84F0 mov.l @(disp,pc),Rn */
	r13 = 0xC068E60u; UPD(0x0C0A84F4u, 1);  /* 0C0A84F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A84F4u); { u32 t_ = r11; PR = 0x0C0A84F8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0A84F8u); }  /* 0C0A84F4 jsr @Rn */
L_0C0A84F8: BLKS(0x0C0A84F8u);
	r2 = 0x2A0u; UPD(0x0C0A84FAu, 1);  /* 0C0A84F8 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0A84FA exts.w Rm,Rn */
	IF(0x0C0A84FCu); MACL = r7 * r2;  /* 0C0A84FC mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C0A8500u, 4);  /* 0C0A84FE mov.l @(disp,pc),Rn */
	IF(0x0C0A8500u); r0 = MACL;  /* 0C0A8500 sts macl,Rn */
	r0 += r4;  /* 0C0A8502 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0A8506u, 3);  /* 0C0A8504 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0A8508u, 1);  /* 0C0A8506 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x14u); UPD(0x0C0A850Au, 1);  /* 0C0A8508 mov.l @(disp,Rm),Rn */
	IF(0x0C0A850Au); { u32 t_ = r13; PR = 0x0C0A850Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0A850Eu); }  /* 0C0A850A jsr @Rn */
L_0C0A850E: BLKS(0x0C0A850Eu);
	r8 = 0xC062780u; UPD(0x0C0A8510u, 1);  /* 0C0A850E mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A8510 exts.w Rm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0A8514u, 2);  /* 0C0A8512 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A8514 add #imm,Rn */
	r3 = 0x40000u; UPD(0x0C0A8518u, 2);  /* 0C0A8516 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C0A851Au, 1);  /* 0C0A8518 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C0A851A add Rm,Rn */
	IF(0x0C0A851Cu); { u32 t_ = r8; PR = 0x0C0A8520u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A8520u); }  /* 0C0A851C jsr @Rn */
L_0C0A8520: BLKS(0x0C0A8520u);
	r0 += r9;  /* 0C0A8520 add Rm,Rn */
	W32(r15, r0); UPD(0x0C0A8524u, 2);  /* 0C0A8522 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0A8524 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0A8528u, 2);  /* 0C0A8526 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0A8528 mov Rm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C0A852Cu, 2);  /* 0C0A852A mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0A852C mov Rm,Rn */
	UPD(0x0C0A852Eu, 1);
L_0C0A852E: BLKS(0x0C0A852Eu);
	IF(0x0C0A852Eu); { u32 t_ = r0; PR = 0x0C0A8532u; IF(0x0C0A8530u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A8532u); }  /* 0C0A852E jsr @Rn */
L_0C0A8532: BLKS(0x0C0A8532u);
	r4 = R32(r10 + 0xCu); UPD(0x0C0A8534u, 1);  /* 0C0A8532 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0A8534 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A8538u, 2);  /* 0C0A8536 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0A8538 add #imm,Rn */
	IF(0x0C0A853Au); W16(r0 + r10, r2); UPD(0x0C0A853Cu, 2);  /* 0C0A853A mov.w Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C0A853C add #imm,Rn */
	{ W32(r10 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A8464u, 4); goto L_0C0A8464; }  /* 0C0A853E bra */
L_0C0A85A0: BLKS(0x0C0A85A0u);
	r11 = 0xC0BC1B0u; UPD(0x0C0A85A2u, 1);  /* 0C0A85A0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A85A2 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0A85A4 mov #imm,Rn */
	IF(0x0C0A85A6u); { u32 t_ = r11; PR = 0x0C0A85AAu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0A85AAu); }  /* 0C0A85A6 jsr @Rn */
L_0C0A85AA: BLKS(0x0C0A85AAu);
	T = (r0 & r0) == 0;  /* 0C0A85AA tst Rm,Rn */
	if (T) { UPD(0x0C0A85DCu, 4); goto L_0C0A85DC; }  /* 0C0A85AC bt */
L_0C0A85AE: BLKS(0x0C0A85AEu);
	r0 = r10;  /* 0C0A85AE mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0A85B2u, 2);  /* 0C0A85B0 mov.w @(disp,pc),Rn */
	r9 = 0xC0BBF10u; UPD(0x0C0A85B4u, 1);  /* 0C0A85B2 mov.l @(disp,pc),Rn */
	IF(0x0C0A85B4u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A85B6u, 1);  /* 0C0A85B4 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0A85B8u, 1);  /* 0C0A85B6 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C0A85B8 extu.b Rm,Rn */
	IF(0x0C0A85BAu); { u32 t_ = r9; PR = 0x0C0A85BEu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0A85BEu); }  /* 0C0A85BA jsr @Rn */
L_0C0A85BE: BLKS(0x0C0A85BEu);
	T = (r0 & r0) == 0;  /* 0C0A85BE tst Rm,Rn */
	if (T) { UPD(0x0C0A85DCu, 4); goto L_0C0A85DC; }  /* 0C0A85C0 bt */
L_0C0A85C2: BLKS(0x0C0A85C2u);
	r2 = 0x1u;  /* 0C0A85C2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A85C6u, 2);  /* 0C0A85C4 mov.w @(disp,pc),Rn */
	IF(0x0C0A85C6u); W16(r0 + r10, r2); UPD(0x0C0A85C8u, 1);  /* 0C0A85C6 mov.w Rm,@(r0,Rn) */
L_0C0A85C8: BLKS(0x0C0A85C8u);
	{ IF(0x0C0A85CAu); ; /* slot nop */ UPD(0x0C0A84D4u, 3); goto L_0C0A84D4; }  /* 0C0A85C8 bra */
L_0C0A85D0: BLKS(0x0C0A85D0u);
	r8 = 0xB4u; UPD(0x0C0A85D2u, 1);  /* 0C0A85D0 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0A85D2 mov #imm,Rn */
	IF(0x0C0A85D4u); MACL = r12 * r8;  /* 0C0A85D4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0A85D8u, 4);  /* 0C0A85D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A85D8u); r0 = MACL;  /* 0C0A85D8 sts macl,Rn */
	IF(0x0C0A85DAu); W32(r0 + r12, r9); UPD(0x0C0A85DCu, 2);  /* 0C0A85DA mov.l Rm,@(r0,Rn) */
L_0C0A85DC: BLKS(0x0C0A85DCu);
	{ IF(0x0C0A85DEu); ; /* slot nop */ UPD(0x0C0A8438u, 3); goto L_0C0A8438; }  /* 0C0A85DC bra */
L_0C0A85E0: BLKS(0x0C0A85E0u);
	r10 = 0xC0A8B50u; UPD(0x0C0A85E2u, 1);  /* 0C0A85E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A85E2u); { u32 t_ = r10; PR = 0x0C0A85E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A85E6u); }  /* 0C0A85E2 jsr @Rn */
L_0C0A85E6: BLKS(0x0C0A85E6u);
	IF(0x0C0A85E6u); T = (s32)r0 >= 0;  /* 0C0A85E6 cmp/pz Rn */
	if (!T) { UPD(0x0C0A85D0u, 4); goto L_0C0A85D0; }  /* 0C0A85E8 bf */
L_0C0A85EA: BLKS(0x0C0A85EAu);
	r3 = 0xB4u; UPD(0x0C0A85ECu, 1);  /* 0C0A85EA mov.w @(disp,pc),Rn */
	IF(0x0C0A85ECu); MACL = r12 * r3;  /* 0C0A85EC mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0A85F0u, 3);  /* 0C0A85EE mov.l @(disp,pc),Rn */
	IF(0x0C0A85F0u); r10 = MACL;  /* 0C0A85F0 sts macl,Rn */
	IF(0x0C0A85F2u); MACL = r0 * r3;  /* 0C0A85F2 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C0A85F6u, 4);  /* 0C0A85F4 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A85F6 add Rm,Rn */
	IF(0x0C0A85F8u); r5 = MACL;  /* 0C0A85F8 sts macl,Rn */
	r5 += r8;  /* 0C0A85FA add Rm,Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C0A85FEu, 4);  /* 0C0A85FC mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C0A8600u, 1);  /* 0C0A85FE mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C0A8600 add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0A8604u, 2);  /* 0C0A8602 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C0A8606u, 1);  /* 0C0A8604 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0A8606 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A85A0u, 4); goto L_0C0A85A0; } UPD(0x0C0A860Cu, 1); goto L_0C0A860C; }  /* 0C0A8608 bt/s */
L_0C0A860C: BLKS(0x0C0A860Cu);
	T = r0 == 0x7u;  /* 0C0A860C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A85C8u, 4); goto L_0C0A85C8; }  /* 0C0A860E bf */
L_0C0A8610: BLKS(0x0C0A8610u);
	r11 = 0xC069B50u; UPD(0x0C0A8612u, 1);  /* 0C0A8610 mov.l @(disp,pc),Rn */
	r13 = 0xC068E60u; UPD(0x0C0A8614u, 1);  /* 0C0A8612 mov.l @(disp,pc),Rn */
	IF(0x0C0A8614u); { u32 t_ = r11; PR = 0x0C0A8618u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0A8618u); }  /* 0C0A8614 jsr @Rn */
L_0C0A8618: BLKS(0x0C0A8618u);
	r2 = 0x2A0u; UPD(0x0C0A861Au, 1);  /* 0C0A8618 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0A861A exts.w Rm,Rn */
	IF(0x0C0A861Cu); MACL = r7 * r2;  /* 0C0A861C mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C0A8620u, 4);  /* 0C0A861E mov.l @(disp,pc),Rn */
	IF(0x0C0A8620u); r3 = MACL;  /* 0C0A8620 sts macl,Rn */
	r3 += r4;  /* 0C0A8622 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0A8626u, 3);  /* 0C0A8624 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0A8628u, 1);  /* 0C0A8626 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0A862Au, 1);  /* 0C0A8628 mov.l @(disp,Rm),Rn */
	IF(0x0C0A862Au); { u32 t_ = r13; PR = 0x0C0A862Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0A862Eu); }  /* 0C0A862A jsr @Rn */
L_0C0A862E: BLKS(0x0C0A862Eu);
	r13 = (u32)(s32)(s16)r0;  /* 0C0A862E exts.w Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0A8632u, 2);  /* 0C0A8630 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A8632 add #imm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0A8636u, 2);  /* 0C0A8634 mov.l @(disp,Rm),Rn */
	r0 = 0x40000u; UPD(0x0C0A8638u, 1);  /* 0C0A8636 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C0A863Au, 1);  /* 0C0A8638 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0A863A add Rm,Rn */
	IF(0x0C0A863Cu); { u32 t_ = r8; PR = 0x0C0A8640u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A8640u); }  /* 0C0A863C jsr @Rn */
L_0C0A8640: BLKS(0x0C0A8640u);
	r0 += r9;  /* 0C0A8640 add Rm,Rn */
	W32(r15, r0); UPD(0x0C0A8644u, 2);  /* 0C0A8642 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0A8644 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0A8648u, 2);  /* 0C0A8646 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0A8648 mov Rm,Rn */
	r0 = 0xC0BA7F0u; UPD(0x0C0A864Cu, 2);  /* 0C0A864A mov.l @(disp,pc),Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C0A852Eu, 3); goto L_0C0A852E; }  /* 0C0A864C bra */
L_0C0A8650: BLKS(0x0C0A8650u);
	r10 = 0xC0A8B50u; UPD(0x0C0A8652u, 1);  /* 0C0A8650 mov.l @(disp,pc),Rn */
	IF(0x0C0A8652u); { u32 t_ = r10; PR = 0x0C0A8656u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A8656u); }  /* 0C0A8652 jsr @Rn */
L_0C0A8656: BLKS(0x0C0A8656u);
	IF(0x0C0A8656u); T = (s32)r0 >= 0;  /* 0C0A8656 cmp/pz Rn */
	if (!T) { UPD(0x0C0A85D0u, 4); goto L_0C0A85D0; }  /* 0C0A8658 bf */
L_0C0A865A: BLKS(0x0C0A865Au);
	r13 = 0xB4u; UPD(0x0C0A865Cu, 1);  /* 0C0A865A mov.w @(disp,pc),Rn */
	IF(0x0C0A865Cu); MACL = r12 * r13;  /* 0C0A865C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0A8660u, 3);  /* 0C0A865E mov.l @(disp,pc),Rn */
	IF(0x0C0A8660u); r10 = MACL;  /* 0C0A8660 sts macl,Rn */
	IF(0x0C0A8662u); MACL = r0 * r13;  /* 0C0A8662 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C0A8666u, 4);  /* 0C0A8664 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A8666 add Rm,Rn */
	IF(0x0C0A8668u); r5 = MACL;  /* 0C0A8668 sts macl,Rn */
	r5 += r8;  /* 0C0A866A add Rm,Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C0A866Eu, 4);  /* 0C0A866C mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C0A8670u, 1);  /* 0C0A866E mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C0A8670 add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0A8674u, 2);  /* 0C0A8672 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C0A8676u, 1);  /* 0C0A8674 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0A8676 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A85A0u, 4); goto L_0C0A85A0; } UPD(0x0C0A867Cu, 1); goto L_0C0A867C; }  /* 0C0A8678 bt/s */
L_0C0A867C: BLKS(0x0C0A867Cu);
	T = r0 == 0x7u;  /* 0C0A867C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A85C8u, 4); goto L_0C0A85C8; }  /* 0C0A867E bf */
L_0C0A8680: BLKS(0x0C0A8680u);
	r11 = 0xC069B50u; UPD(0x0C0A8682u, 1);  /* 0C0A8680 mov.l @(disp,pc),Rn */
	r13 = 0xC068E60u; UPD(0x0C0A8684u, 1);  /* 0C0A8682 mov.l @(disp,pc),Rn */
	IF(0x0C0A8684u); { u32 t_ = r11; PR = 0x0C0A8688u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0A8688u); }  /* 0C0A8684 jsr @Rn */
L_0C0A8688: BLKS(0x0C0A8688u);
	r6 = 0x2A0u; UPD(0x0C0A868Au, 1);  /* 0C0A8688 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0A868A exts.w Rm,Rn */
	IF(0x0C0A868Cu); MACL = r5 * r6;  /* 0C0A868C mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0A8690u, 4);  /* 0C0A868E mov.l @(disp,pc),Rn */
	IF(0x0C0A8690u); r3 = MACL;  /* 0C0A8690 sts macl,Rn */
	r3 += r7;  /* 0C0A8692 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0A8696u, 3);  /* 0C0A8694 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0A8698u, 1);  /* 0C0A8696 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0A869Au, 1);  /* 0C0A8698 mov.l @(disp,Rm),Rn */
	IF(0x0C0A869Au); { u32 t_ = r13; PR = 0x0C0A869Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0A869Eu); }  /* 0C0A869A jsr @Rn */
L_0C0A869E: BLKS(0x0C0A869Eu);
	r13 = (u32)(s32)(s16)r0;  /* 0C0A869E exts.w Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0A86A2u, 2);  /* 0C0A86A0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A86A2 add #imm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0A86A6u, 2);  /* 0C0A86A4 mov.l @(disp,Rm),Rn */
	r0 = 0x40000u; UPD(0x0C0A86A8u, 1);  /* 0C0A86A6 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C0A86AAu, 1);  /* 0C0A86A8 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0A86AA add Rm,Rn */
	IF(0x0C0A86ACu); { u32 t_ = r8; PR = 0x0C0A86B0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A86B0u); }  /* 0C0A86AC jsr @Rn */
L_0C0A86B0: BLKS(0x0C0A86B0u);
	r0 += r9;  /* 0C0A86B0 add Rm,Rn */
	W32(r15, r0); UPD(0x0C0A86B4u, 2);  /* 0C0A86B2 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C0A86B4 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0A86B8u, 2);  /* 0C0A86B6 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0A86B8 mov Rm,Rn */
	r0 = 0xC072C90u; UPD(0x0C0A86BCu, 2);  /* 0C0A86BA mov.l @(disp,pc),Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C0A852Eu, 3); goto L_0C0A852E; }  /* 0C0A86BC bra */
L_0C0A86C0: BLKS(0x0C0A86C0u);
	r10 = 0xC0A8B50u; UPD(0x0C0A86C2u, 1);  /* 0C0A86C0 mov.l @(disp,pc),Rn */
	IF(0x0C0A86C2u); { u32 t_ = r10; PR = 0x0C0A86C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0A86C6u); }  /* 0C0A86C2 jsr @Rn */
L_0C0A86C6: BLKS(0x0C0A86C6u);
	IF(0x0C0A86C6u); T = (s32)r0 >= 0;  /* 0C0A86C6 cmp/pz Rn */
	if (T) { UPD(0x0C0A86CEu, 4); goto L_0C0A86CE; }  /* 0C0A86C8 bt */
L_0C0A86CA: BLKS(0x0C0A86CAu);
	{ IF(0x0C0A86CCu); ; /* slot nop */ UPD(0x0C0A85D0u, 3); goto L_0C0A85D0; }  /* 0C0A86CA bra */
L_0C0A86CE: BLKS(0x0C0A86CEu);
	r3 = 0xB4u; UPD(0x0C0A86D0u, 1);  /* 0C0A86CE mov.w @(disp,pc),Rn */
	IF(0x0C0A86D0u); MACL = r12 * r3;  /* 0C0A86D0 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A86D4u, 3);  /* 0C0A86D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A86D4u); r13 = MACL;  /* 0C0A86D4 sts macl,Rn */
	IF(0x0C0A86D6u); MACL = r0 * r3;  /* 0C0A86D6 mul.l Rm,Rn */
	r13 += r6;  /* 0C0A86D8 add Rm,Rn */
	r7 = 0xD0000u; UPD(0x0C0A86DCu, 5);  /* 0C0A86DA mov.l @(disp,pc),Rn */
	IF(0x0C0A86DCu); r3 = MACL;  /* 0C0A86DC sts macl,Rn */
	r3 += r6;  /* 0C0A86DE add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0A86E2u, 3);  /* 0C0A86E0 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0A86E4u, 1);  /* 0C0A86E2 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C0A86E6u, 1);  /* 0C0A86E4 mov.l Rm,@(disp,Rn) */
	r2 += r7;  /* 0C0A86E6 add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C0A86EAu, 2);  /* 0C0A86E8 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0A86EA tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8780u, 4); goto L_0C0A8780; } UPD(0x0C0A86F0u, 1); goto L_0C0A86F0; }  /* 0C0A86EC bt/s */
L_0C0A86F0: BLKS(0x0C0A86F0u);
	T = r0 == 0x7u;  /* 0C0A86F0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A87A8u, 4); goto L_0C0A87A8; }  /* 0C0A86F2 bf */
L_0C0A86F4: BLKS(0x0C0A86F4u);
	r15 += 0xFFFFFFFCu;  /* 0C0A86F4 add #imm,Rn */
	r11 = 0x88u; UPD(0x0C0A86F8u, 2);  /* 0C0A86F6 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C0A86F8 add Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0A86FCu, 2);  /* 0C0A86FA mov.l @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C0A86FC add #imm,Rn */
	r8 = 0x18000u; UPD(0x0C0A8700u, 2);  /* 0C0A86FE mov.l @(disp,pc),Rn */
	r9 = 0x40000u; UPD(0x0C0A8702u, 1);  /* 0C0A8700 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A8702 mov Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8706u, 2);  /* 0C0A8704 mov.w @Rm,Rn */
	IF(0x0C0A8706u); { u32 t_ = r0; PR = 0x0C0A870Au; r9 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A870Au); }  /* 0C0A8706 jsr @Rn */
L_0C0A870A: BLKS(0x0C0A870Au);
	r7 = r10;  /* 0C0A870A mov Rm,Rn */
	r0 += r8;  /* 0C0A870C add Rm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C0A8710u, 3);  /* 0C0A870E mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A8710 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0A8714u, 2);  /* 0C0A8712 mov.l Rm,@Rn */
	r5 = r9;  /* 0C0A8714 mov Rm,Rn */
	IF(0x0C0A8716u); { u32 t_ = r10; PR = 0x0C0A871Au; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0A871Au); }  /* 0C0A8716 jsr @Rn */
L_0C0A871A: BLKS(0x0C0A871Au);
	r4 = r12;  /* 0C0A871A mov Rm,Rn */
	r6 = R32(r13 + 0xCu); UPD(0x0C0A871Eu, 2);  /* 0C0A871C mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0A871E mov #imm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0A8722u, 2);  /* 0C0A8720 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C0A8722 mov Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C0A8724 add #imm,Rn */
	IF(0x0C0A8726u); W16(r0 + r11, r3); UPD(0x0C0A8728u, 3);  /* 0C0A8726 mov.w Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C0A8728 add #imm,Rn */
	IF(0x0C0A872Au); { u32 t_ = r12; PR = 0x0C0A872Eu; W32(r13 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0A872Eu); }  /* 0C0A872A jsr @Rn */
L_0C0A872E: BLKS(0x0C0A872Eu);
	{ IF(0x0C0A8730u); ; /* slot nop */ UPD(0x0C0A8438u, 3); goto L_0C0A8438; }  /* 0C0A872E bra */
L_0C0A8780: BLKS(0x0C0A8780u);
	r11 = 0xC0BC1B0u; UPD(0x0C0A8782u, 1);  /* 0C0A8780 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A8782 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0A8784 mov #imm,Rn */
	IF(0x0C0A8786u); { u32 t_ = r11; PR = 0x0C0A878Au; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0A878Au); }  /* 0C0A8786 jsr @Rn */
L_0C0A878A: BLKS(0x0C0A878Au);
	T = (r0 & r0) == 0;  /* 0C0A878A tst Rm,Rn */
	if (T) { UPD(0x0C0A872Eu, 4); goto L_0C0A872E; }  /* 0C0A878C bt */
L_0C0A878E: BLKS(0x0C0A878Eu);
	r0 = r13;  /* 0C0A878E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0A8792u, 2);  /* 0C0A8790 mov.w @(disp,pc),Rn */
	IF(0x0C0A8792u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A8794u, 1);  /* 0C0A8792 mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C0A8796u, 1);  /* 0C0A8794 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0A8796 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0A879Au, 2);  /* 0C0A8798 mov.l @(disp,Rm),Rn */
	IF(0x0C0A879Au); { u32 t_ = r10; PR = 0x0C0A879Eu; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0A879Eu); }  /* 0C0A879A jsr @Rn */
L_0C0A879E: BLKS(0x0C0A879Eu);
	T = (r0 & r0) == 0;  /* 0C0A879E tst Rm,Rn */
	if (T) { UPD(0x0C0A872Eu, 4); goto L_0C0A872E; }  /* 0C0A87A0 bt */
L_0C0A87A2: BLKS(0x0C0A87A2u);
	r2 = 0x1u;  /* 0C0A87A2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A87A6u, 2);  /* 0C0A87A4 mov.w @(disp,pc),Rn */
	IF(0x0C0A87A6u); W16(r0 + r13, r2); UPD(0x0C0A87A8u, 1);  /* 0C0A87A6 mov.w Rm,@(r0,Rn) */
L_0C0A87A8: BLKS(0x0C0A87A8u);
	{ IF(0x0C0A87AAu); ; /* slot nop */ UPD(0x0C0A84D4u, 3); goto L_0C0A84D4; }  /* 0C0A87A8 bra */
}

/* FUN_0c0a87c0 */
void blk_f_0C0A87C0(sh3_t *c)
{
	LOCALS;
L_0C0A87C0: BLKS(0x0C0A87C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87C2u, 1);  /* 0C0A87C0 mov.l Rm,@-Rn */
	r6 = 0x4Cu;  /* 0C0A87C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87C6u, 2);  /* 0C0A87C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87C8u, 1);  /* 0C0A87C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87CAu, 1);  /* 0C0A87C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87CCu, 1);  /* 0C0A87CA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A87CEu, 1);  /* 0C0A87CC mov.l Rm,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0A87D0u, 1);  /* 0C0A87CE mov.l @(disp,pc),Rn */
	IF(0x0C0A87D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A87D2u, 1);  /* 0C0A87D0 sts.l pr,@-Rn */
	r12 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A87D4u, 1);  /* 0C0A87D2 mov.b @Rm,Rn */
	IF(0x0C0A87D4u); MACL = r12 * r6;  /* 0C0A87D4 mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C0A87D8u, 3);  /* 0C0A87D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A87D8u); r6 = MACL;  /* 0C0A87D8 sts macl,Rn */
	r8 = 0xC237C08u; UPD(0x0C0A87DCu, 2);  /* 0C0A87DA mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0A87DC add Rm,Rn */
	r7 = R32(r6 + 0x8u); UPD(0x0C0A87E0u, 2);  /* 0C0A87DE mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A87E2u, 1);  /* 0C0A87E0 mov.w @Rm,Rn */
	r2 = (r7 >> 16) | (r7 << 16);  /* 0C0A87E2 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0A87E4 exts.w Rm,Rn */
	r11 = r4;  /* 0C0A87E6 mov Rm,Rn */
	r11 -= r0;  /* 0C0A87E8 sub Rm,Rn */
	r9 = 0x14Eu; UPD(0x0C0A87ECu, 5);  /* 0C0A87EA mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C0A87EC mov Rm,Rn */
	r5 += 0x7u;  /* 0C0A87EE add #imm,Rn */
	r10 = 0xC3C43C6u; UPD(0x0C0A87F2u, 3);  /* 0C0A87F0 mov.l @(disp,pc),Rn */
	T = r9 >= r5;  /* 0C0A87F2 cmp/hs Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A87F6u, 2);  /* 0C0A87F4 mov.w @Rm,Rn */
	IF(0x0C0A87F6u); r0 = T;  /* 0C0A87F6 movt Rn */
	r3 = 0xFFFFFEA7u; UPD(0x0C0A87FAu, 2);  /* 0C0A87F8 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0A87FA add Rm,Rn */
	r8 = r3 & 0xFFFF;  /* 0C0A87FC extu.w Rm,Rn */
	T = r9 >= r8;  /* 0C0A87FE cmp/hs Rm,Rn */
	IF(0x0C0A8800u); r2 = T;  /* 0C0A8800 movt Rn */
	r0 &= r2;  /* 0C0A8802 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A8804 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A8820u, 9); goto L_0C0A8820; } goto L_0C0A880A; }  /* 0C0A8806 bt/s */
L_0C0A880A: BLKS(0x0C0A880Au);
	r6 += 0x42u;  /* 0C0A880A add #imm,Rn */
	r9 = 0xC0BC0B0u; UPD(0x0C0A880Eu, 3);  /* 0C0A880C mov.l @(disp,pc),Rn */
	IF(0x0C0A880Eu); r4 <<= 16;  /* 0C0A880E shll16 Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A8812u, 2);  /* 0C0A8810 mov.b @Rm,Rn */
	r4 -= r7;  /* 0C0A8812 sub Rm,Rn */
	IF(0x0C0A8814u); r5 <<= 16;  /* 0C0A8814 shll16 Rn */
	IF(0x0C0A8816u); { u32 t_ = r9; PR = 0x0C0A881Au; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C0A881Au); }  /* 0C0A8816 jsr @Rn */
L_0C0A881A: BLKS(0x0C0A881Au);
	T = (r0 & r0) == 0;  /* 0C0A881A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8832u, 4); goto L_0C0A8832; } UPD(0x0C0A8820u, 1); goto L_0C0A8820; }  /* 0C0A881C bt/s */
L_0C0A8820: BLKS(0x0C0A8820u);
	r9 = 0xC2460ACu; UPD(0x0C0A8822u, 1);  /* 0C0A8820 mov.l @(disp,pc),Rn */
	r10 = 0xC069510u; UPD(0x0C0A8824u, 1);  /* 0C0A8822 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A8826u, 1);  /* 0C0A8824 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A8828u, 1);  /* 0C0A8826 mov.l @(disp,pc),Rn */
	IF(0x0C0A8828u); { u32 t_ = r10; PR = 0x0C0A882Cu; r4 = r3 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0A882Cu); }  /* 0C0A8828 jsr @Rn */
L_0C0A882C: BLKS(0x0C0A882Cu);
	T = (r0 & r0) == 0;  /* 0C0A882C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8850u, 4); goto L_0C0A8850; } UPD(0x0C0A8832u, 1); goto L_0C0A8832; }  /* 0C0A882E bf/s */
L_0C0A8832: BLKS(0x0C0A8832u);
	r15 = r14;  /* 0C0A8832 mov Rm,Rn */
	IF(0x0C0A8834u); PR = R32(r15); r15 += 4; UPD(0x0C0A8836u, 2);  /* 0C0A8834 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8838u, 1);  /* 0C0A8836 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A883Au, 1);  /* 0C0A8838 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A883Cu, 1);  /* 0C0A883A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A883Eu, 1);  /* 0C0A883C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8840u, 1);  /* 0C0A883E mov.l @Rm+,Rn */
	IF(0x0C0A8840u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8840 rts */
L_0C0A8850: BLKS(0x0C0A8850u);
	r11 = 0xC071740u; UPD(0x0C0A8852u, 1);  /* 0C0A8850 mov.l @(disp,pc),Rn */
	IF(0x0C0A8852u); { u32 t_ = r11; PR = 0x0C0A8856u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0A8856u); }  /* 0C0A8852 jsr @Rn */
L_0C0A8856: BLKS(0x0C0A8856u);
	T = (r0 & r0) == 0;  /* 0C0A8856 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8832u, 4); goto L_0C0A8832; } goto L_0C0A885C; }  /* 0C0A8858 bt/s */
L_0C0A885C: BLKS(0x0C0A885Cu);
	r3 = 0xC28EDFCu; UPD(0x0C0A885Eu, 2);  /* 0C0A885C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0A8860u, 1);  /* 0C0A885E mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8862u, 1);  /* 0C0A8860 mov.w @Rm,Rn */
	IF(0x0C0A8862u); MACL = r11 * r8;  /* 0C0A8862 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A8866u, 3);  /* 0C0A8864 mov.w @Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A8868u, 1);  /* 0C0A8866 mov.l @(disp,pc),Rn */
	IF(0x0C0A8868u); r8 = MACL;  /* 0C0A8868 sts macl,Rn */
	r8 += r6;  /* 0C0A886A add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0A886C extu.w Rm,Rn */
	r5 = 0xC2B03A2u; UPD(0x0C0A8870u, 4);  /* 0C0A886E mov.l @(disp,pc),Rn */
	r9 = 0x4Cu;  /* 0C0A8870 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A8874u, 2);  /* 0C0A8872 mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A8876u, 1);  /* 0C0A8874 mov.w @Rm,Rn */
	r0 = r8;  /* 0C0A8876 mov Rm,Rn */
	r4 = 0x8Au; UPD(0x0C0A887Au, 2);  /* 0C0A8878 mov.w @(disp,pc),Rn */
	IF(0x0C0A887Au); W16(r0 + r4, r10); UPD(0x0C0A887Cu, 1);  /* 0C0A887A mov.w Rm,@(r0,Rn) */
	r4 += 0xFFFFFFFCu;  /* 0C0A887C add #imm,Rn */
	IF(0x0C0A887Eu); W16(r0 + r4, r10); UPD(0x0C0A8880u, 2);  /* 0C0A887E mov.w Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0A8880 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0A8882 add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0A8886u, 3);  /* 0C0A8884 mov.l @(disp,pc),Rn */
	IF(0x0C0A8886u); r0 >>= 2;  /* 0C0A8886 shlr2 Rn */
	r7 = 0xC1000014u; UPD(0x0C0A888Au, 2);  /* 0C0A8888 mov.l @(disp,pc),Rn */
	IF(0x0C0A888Au); r0 >>= 2;  /* 0C0A888A shlr2 Rn */
	r10 = 0x0u;  /* 0C0A888C mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C0A888E and #imm,r0 */
	W32(r8, r7); UPD(0x0C0A8892u, 4);  /* 0C0A8890 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A8892 mov Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A8896u, 2);  /* 0C0A8894 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8896u); { u32 t_ = r3; PR = 0x0C0A889Au; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0A889Au); }  /* 0C0A8896 jsr @Rn */
L_0C0A889A: BLKS(0x0C0A889Au);
	IF(0x0C0A889Au); MACL = r12 * r9;  /* 0C0A889A mul.l Rm,Rn */
	r6 = 0xC237C08u; UPD(0x0C0A889Eu, 3);  /* 0C0A889C mov.l @(disp,pc),Rn */
	r7 = 0xC286318u; UPD(0x0C0A88A0u, 1);  /* 0C0A889E mov.l @(disp,pc),Rn */
	IF(0x0C0A88A0u); r9 = MACL;  /* 0C0A88A0 sts macl,Rn */
	r5 = 0xC3C43C6u; UPD(0x0C0A88A4u, 2);  /* 0C0A88A2 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0A88A4 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A88A8u, 2);  /* 0C0A88A6 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A88AAu, 1);  /* 0C0A88A8 mov.w @Rm,Rn */
	IF(0x0C0A88AAu); r0 <<= 16;  /* 0C0A88AA shll16 Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0A88AEu, 2);  /* 0C0A88AC mov.l @(disp,Rm),Rn */
	IF(0x0C0A88AEu); r4 <<= 16;  /* 0C0A88AE shll16 Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C0A88B2u, 2);  /* 0C0A88B0 mov.l @(disp,pc),Rn */
	r0 -= r2;  /* 0C0A88B2 sub Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A88B6u, 2);  /* 0C0A88B4 mov.l Rm,@(disp,Rn) */
	r9 += 0x42u;  /* 0C0A88B6 add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A88BAu, 2);  /* 0C0A88B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A88BAu); { u32 t_ = r3; PR = 0x0C0A88BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0A88BEu); }  /* 0C0A88BA jsr @Rn */
L_0C0A88BE: BLKS(0x0C0A88BEu);
	r0 = 0xB0u; UPD(0x0C0A88C0u, 1);  /* 0C0A88BE mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0A88C0 mov Rm,Rn */
	IF(0x0C0A88C2u); W8(r0 + r8, r12); UPD(0x0C0A88C4u, 2);  /* 0C0A88C2 mov.b Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A88C6u, 1);  /* 0C0A88C4 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A88C6 add #imm,Rn */
	IF(0x0C0A88C8u); W8(r0 + r8, r6); UPD(0x0C0A88CAu, 2);  /* 0C0A88C8 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A88CA add #imm,Rn */
	IF(0x0C0A88CCu); W8(r0 + r8, r6); UPD(0x0C0A88CEu, 2);  /* 0C0A88CC mov.b Rm,@(r0,Rn) */
	r7 = 0xC297460u; UPD(0x0C0A88D0u, 1);  /* 0C0A88CE mov.l @(disp,pc),Rn */
	r2 = 0xC0A9D30u; UPD(0x0C0A88D2u, 1);  /* 0C0A88D0 mov.l @(disp,pc),Rn */
	IF(0x0C0A88D2u); { u32 t_ = r2; PR = 0x0C0A88D6u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0A88D6u); }  /* 0C0A88D2 jsr @Rn */
L_0C0A88D6: BLKS(0x0C0A88D6u);
	r12 = 0x8Cu; UPD(0x0C0A88D8u, 1);  /* 0C0A88D6 mov.w @(disp,pc),Rn */
	r5 = 0x94u; UPD(0x0C0A88DAu, 1);  /* 0C0A88D8 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C0A88DA add Rm,Rn */
	r0 = 0x90u; UPD(0x0C0A88DEu, 2);  /* 0C0A88DC mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C0A88DE add Rm,Rn */
	r0 += r8;  /* 0C0A88E0 add Rm,Rn */
	r8 += 0x50u;  /* 0C0A88E2 add #imm,Rn */
	W32(r0, r10); UPD(0x0C0A88E6u, 4);  /* 0C0A88E4 mov.l Rm,@Rn */
	W32(r8, r10); UPD(0x0C0A88E8u, 1);  /* 0C0A88E6 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A88E8 mov #imm,Rn */
	W32(r5, r10); UPD(0x0C0A88ECu, 2);  /* 0C0A88EA mov.l Rm,@Rn */
	{ W32(r12, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0A8832u, 3); goto L_0C0A8832; }  /* 0C0A88EC bra */
}

/* FUN_0c0a8950 */
void blk_f_0C0A8950(sh3_t *c)
{
	LOCALS;
L_0C0A8950: BLKS(0x0C0A8950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8952u, 1);  /* 0C0A8950 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s8)r4;  /* 0C0A8952 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8956u, 2);  /* 0C0A8954 mov.l Rm,@-Rn */
	T = (r4 & r4) == 0;  /* 0C0A8956 tst Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A895Au, 2);  /* 0C0A8958 mov.l Rm,@-Rn */
	r0 = 0x180u; UPD(0x0C0A895Cu, 1);  /* 0C0A895A mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A895Eu, 1);  /* 0C0A895C mov.l Rm,@-Rn */
	IF(0x0C0A895Eu); MACL = r4 * r0;  /* 0C0A895E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8962u, 3);  /* 0C0A8960 mov.l Rm,@-Rn */
	r0 = 0xC234C06u; UPD(0x0C0A8964u, 1);  /* 0C0A8962 mov.l @(disp,pc),Rn */
	IF(0x0C0A8964u); r8 = MACL;  /* 0C0A8964 sts macl,Rn */
	IF(0x0C0A8966u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8968u, 2);  /* 0C0A8966 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A8968 add Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A89EEu, 4); goto L_0C0A89EE; } goto L_0C0A896E; }  /* 0C0A896A bt/s */
L_0C0A896E: BLKS(0x0C0A896Eu);
	r10 = r4;  /* 0C0A896E mov Rm,Rn */
	r10 += r10;  /* 0C0A8970 add Rm,Rn */
	r4 = 0xC28F616u; UPD(0x0C0A8974u, 4);  /* 0C0A8972 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0A8974 mov Rm,Rn */
	IF(0x0C0A8976u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0A8978u, 2);  /* 0C0A8976 mov.w @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C0A8978 mov #imm,Rn */
	r2 = r3 & 0xFFFF;  /* 0C0A897A extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r2;  /* 0C0A897C cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A89EEu, 6); goto L_0C0A89EE; }  /* 0C0A897E bt */
L_0C0A8980: BLKS(0x0C0A8980u);
	r11 = 0xC074C30u; UPD(0x0C0A8982u, 1);  /* 0C0A8980 mov.l @(disp,pc),Rn */
	IF(0x0C0A8982u); ;  /* 0C0A8982 nop */
	UPD(0x0C0A8984u, 1);
L_0C0A8984: BLKS(0x0C0A8984u);
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A8986u, 1);  /* 0C0A8984 mov.w @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0A8988u, 1);  /* 0C0A8986 mov.w @(disp,pc),Rn */
	MACL = (u32)(u16)r5 * (u32)(u16)r7;  /* 0C0A8988 mulu.w Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A898Cu, 3);  /* 0C0A898A mov.l @(disp,pc),Rn */
	IF(0x0C0A898Cu); r7 = MACL;  /* 0C0A898C sts macl,Rn */
	r7 += r0;  /* 0C0A898E add Rm,Rn */
	r0 = 0xAEu; UPD(0x0C0A8992u, 3);  /* 0C0A8990 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A8992 mov #imm,Rn */
	IF(0x0C0A8994u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A8996u, 2);  /* 0C0A8994 mov.b @(r0,Rm),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0A8996 add #imm,Rn */
	IF(0x0C0A8998u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A899Au, 2);  /* 0C0A8998 mov.b @(r0,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C0A899A extu.b Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C0A899C extu.b Rm,Rn */
	r6 -= r3;  /* 0C0A899E sub Rm,Rn */
	r6 += 0x1u;  /* 0C0A89A0 add #imm,Rn */
	T = r6 > r5;  /* 0C0A89A2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = 0x40u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8A00u, 8); goto L_0C0A8A00; } goto L_0C0A89A8; }  /* 0C0A89A4 bt/s */
L_0C0A89A8: BLKS(0x0C0A89A8u);
	r0 += 0xFFFFFFFFu;  /* 0C0A89A8 add #imm,Rn */
	IF(0x0C0A89AAu); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A89ACu, 3);  /* 0C0A89AA mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0A89AC tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A89B4u, 4); goto L_0C0A89B4; } goto L_0C0A89B2; }  /* 0C0A89AE bt/s */
L_0C0A89B2: BLKS(0x0C0A89B2u);
	IF(0x0C0A89B2u); W8(r0 + r7, r1); UPD(0x0C0A89B4u, 2);  /* 0C0A89B2 mov.b Rm,@(r0,Rn) */
L_0C0A89B4: BLKS(0x0C0A89B4u);
	r0 = 0xADu; UPD(0x0C0A89B6u, 1);  /* 0C0A89B4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C0A89B6 add #imm,Rn */
	IF(0x0C0A89B8u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A89BAu, 2);  /* 0C0A89B8 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0A89BA add #imm,Rn */
	r0 += 0x1u;  /* 0C0A89BC add #imm,Rn */
	IF(0x0C0A89BEu); W8(r0 + r7, r3); UPD(0x0C0A89C0u, 3);  /* 0C0A89BE mov.b Rm,@(r0,Rn) */
	r2 = r3 & 0xFF;  /* 0C0A89C0 extu.b Rm,Rn */
	r1 = R32(r7 + 0x18u); UPD(0x0C0A89C4u, 2);  /* 0C0A89C2 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFBu;  /* 0C0A89C4 add #imm,Rn */
	r4 = 0xC2289E8u; UPD(0x0C0A89C8u, 2);  /* 0C0A89C6 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C0A89CAu, 1);  /* 0C0A89C8 mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C0A89CCu, 1);  /* 0C0A89CA mov.l @(disp,pc),Rn */
	r6 = R32(r7 + 0x20u); UPD(0x0C0A89CEu, 1);  /* 0C0A89CC mov.l @(disp,Rm),Rn */
	W32(r5, r6); UPD(0x0C0A89D0u, 1);  /* 0C0A89CE mov.l Rm,@Rn */
	IF(0x0C0A89D0u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A89D2u, 1);  /* 0C0A89D0 mov.b @(r0,Rm),Rn */
	r0 += 0x3u;  /* 0C0A89D2 add #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C0A89D4 extu.b Rm,Rn */
	r4 = R32(r7 + 0x24u); UPD(0x0C0A89D8u, 3);  /* 0C0A89D6 mov.l @(disp,Rm),Rn */
	r6 -= r2;  /* 0C0A89D8 sub Rm,Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C0A89DCu, 2);  /* 0C0A89DA mov.l @(disp,Rm),Rn */
	IF(0x0C0A89DCu); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A89DEu, 1);  /* 0C0A89DC mov.b @(r0,Rm),Rn */
	IF(0x0C0A89DEu); { u32 t_ = r11; PR = 0x0C0A89E2u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C0A89E2u); }  /* 0C0A89DE jsr @Rn */
L_0C0A89E2: BLKS(0x0C0A89E2u);
	r4 = 0xC28F616u; UPD(0x0C0A89E4u, 1);  /* 0C0A89E2 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0A89E4 mov Rm,Rn */
	IF(0x0C0A89E6u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0A89E8u, 2);  /* 0C0A89E6 mov.w @(r0,Rm),Rn */
	r6 = r3 & 0xFFFF;  /* 0C0A89E8 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r6;  /* 0C0A89EA cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0A8984u, 5); goto L_0C0A8984; }  /* 0C0A89EC bf */
L_0C0A89EE: BLKS(0x0C0A89EEu);
	r15 = r14;  /* 0C0A89EE mov Rm,Rn */
	IF(0x0C0A89F0u); PR = R32(r15); r15 += 4; UPD(0x0C0A89F2u, 2);  /* 0C0A89F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A89F4u, 1);  /* 0C0A89F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A89F6u, 1);  /* 0C0A89F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A89F8u, 1);  /* 0C0A89F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A89FAu, 1);  /* 0C0A89F8 mov.l @Rm+,Rn */
	IF(0x0C0A89FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A89FA rts */
L_0C0A8A00: BLKS(0x0C0A8A00u);
	r0 = 0xACu; UPD(0x0C0A8A02u, 1);  /* 0C0A8A00 mov.w @(disp,pc),Rn */
	{ IF(0x0C0A8A04u); W8(r0 + r7, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A89B4u, 3); goto L_0C0A89B4; }  /* 0C0A8A02 bra */
}

/* FUN_0c0a8a30 */
void blk_f_0C0A8A30(sh3_t *c)
{
	LOCALS;
L_0C0A8A30: BLKS(0x0C0A8A30u);
	r5 = 0xB4u; UPD(0x0C0A8A32u, 1);  /* 0C0A8A30 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A8A32 exts.w Rm,Rn */
	IF(0x0C0A8A34u); MACL = r7 * r5;  /* 0C0A8A34 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A8A38u, 4);  /* 0C0A8A36 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C0A8A38 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A3Cu, 2);  /* 0C0A8A3A mov.l Rm,@-Rn */
	IF(0x0C0A8A3Cu); r5 = MACL;  /* 0C0A8A3C sts macl,Rn */
	r5 += r0;  /* 0C0A8A3E add Rm,Rn */
	r6 = R32(r5 + 0x4u); UPD(0x0C0A8A42u, 3);  /* 0C0A8A40 mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C0A8A42 mov #imm,Rn */
	IF(0x0C0A8A44u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0A8A44 shld Rm,Rn */
	r4 = 0xC1DD458u; UPD(0x0C0A8A48u, 3);  /* 0C0A8A46 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A8A48 mov Rm,Rn */
	r6 += r4;  /* 0C0A8A4A add Rm,Rn */
	r2 = R32(r6 + 0x4u); UPD(0x0C0A8A4Eu, 3);  /* 0C0A8A4C mov.l @(disp,Rm),Rn */
	W32(r5 + 0x20u, r2); UPD(0x0C0A8A50u, 1);  /* 0C0A8A4E mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0A8A52u, 1);  /* 0C0A8A50 mov.l @(disp,Rm),Rn */
	r7 = R32(r6); UPD(0x0C0A8A54u, 1);  /* 0C0A8A52 mov.l @Rm,Rn */
	IF(0x0C0A8A54u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A8A54 shld Rm,Rn */
	W32(r5 + 0x10u, r7); UPD(0x0C0A8A58u, 2);  /* 0C0A8A56 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8A58u); r4 = R32(r0 + r7); UPD(0x0C0A8A5Au, 1);  /* 0C0A8A58 mov.l @(r0,Rm),Rn */
	r6 = R32(r5 + 0xCu); UPD(0x0C0A8A5Cu, 1);  /* 0C0A8A5A mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C0A8A5C mov #imm,Rn */
	IF(0x0C0A8A5Eu); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0A8A5E shld Rm,Rn */
	W32(r5 + 0x14u, r4); UPD(0x0C0A8A62u, 3);  /* 0C0A8A60 mov.l Rm,@(disp,Rn) */
	r6 += r4;  /* 0C0A8A62 add Rm,Rn */
	r3 = 0xC2289ECu; UPD(0x0C0A8A66u, 2);  /* 0C0A8A64 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0A8A66 mov Rm,Rn */
	r1 = R32(r6); UPD(0x0C0A8A6Au, 2);  /* 0C0A8A68 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8A6Cu, 1);  /* 0C0A8A6A mov.w @Rm,Rn */
	r7 = 0x82u; UPD(0x0C0A8A6Eu, 1);  /* 0C0A8A6C mov.w @(disp,pc),Rn */
	W32(r5 + 0x18u, r1); UPD(0x0C0A8A70u, 1);  /* 0C0A8A6E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8A70u); W16(r0 + r7, r4); UPD(0x0C0A8A72u, 1);  /* 0C0A8A70 mov.w Rm,@(r0,Rn) */
	r2 = R32(r6 + 0x4u); UPD(0x0C0A8A74u, 1);  /* 0C0A8A72 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0A8A74 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0A8A78u, 2);  /* 0C0A8A76 mov.l @(disp,pc),Rn */
	W32(r5 + 0x38u, r0); UPD(0x0C0A8A7Au, 1);  /* 0C0A8A78 mov.l Rm,@(disp,Rn) */
	r0 = 0x84u; UPD(0x0C0A8A7Cu, 1);  /* 0C0A8A7A mov.w @(disp,pc),Rn */
	W32(r5 + 0x1Cu, r2); UPD(0x0C0A8A7Eu, 1);  /* 0C0A8A7C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8A7Eu); W8(r0 + r5, r4); UPD(0x0C0A8A80u, 1);  /* 0C0A8A7E mov.b Rm,@(r0,Rn) */
	r2 = 0x40u;  /* 0C0A8A80 mov #imm,Rn */
	W32(r5 + 0x34u, r4); UPD(0x0C0A8A84u, 2);  /* 0C0A8A82 mov.l Rm,@(disp,Rn) */
	r0 += 0x28u;  /* 0C0A8A84 add #imm,Rn */
	r5 += 0x48u;  /* 0C0A8A86 add #imm,Rn */
	W32(r5, r4); UPD(0x0C0A8A8Au, 3);  /* 0C0A8A88 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB8u;  /* 0C0A8A8A add #imm,Rn */
	IF(0x0C0A8A8Cu); W8(r0 + r5, r2); UPD(0x0C0A8A8Eu, 2);  /* 0C0A8A8C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFF4u;  /* 0C0A8A8E add #imm,Rn */
	IF(0x0C0A8A90u); W8(r0 + r5, r4); UPD(0x0C0A8A92u, 2);  /* 0C0A8A90 mov.b Rm,@(r0,Rn) */
	r3 = 0x9Cu; UPD(0x0C0A8A94u, 1);  /* 0C0A8A92 mov.w @(disp,pc),Rn */
	r0 = 0xA4u; UPD(0x0C0A8A96u, 1);  /* 0C0A8A94 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0A8A96 add Rm,Rn */
	r3 += 0x1u;  /* 0C0A8A98 add #imm,Rn */
	r0 += r5;  /* 0C0A8A9A add Rm,Rn */
	r6 = 0x98u; UPD(0x0C0A8A9Eu, 4);  /* 0C0A8A9C mov.w @(disp,pc),Rn */
	r0 += 0x3u;  /* 0C0A8A9E add #imm,Rn */
	W8(r3, r4); UPD(0x0C0A8AA2u, 2);  /* 0C0A8AA0 mov.b Rm,@Rn */
	r6 += r5;  /* 0C0A8AA2 add Rm,Rn */
	W8(r0, r4); UPD(0x0C0A8AA6u, 2);  /* 0C0A8AA4 mov.b Rm,@Rn */
	r6 += 0x2u;  /* 0C0A8AA6 add #imm,Rn */
	{ u32 v_ = r4; r3 -= 1; W8(r3, v_); } UPD(0x0C0A8AAAu, 2);  /* 0C0A8AA8 mov.b Rm,@-Rn */
	r1 = 0xA8u; UPD(0x0C0A8AACu, 1);  /* 0C0A8AAA mov.w @(disp,pc),Rn */
	r3 += 0x3u;  /* 0C0A8AAC add #imm,Rn */
	W8(r6, r4); UPD(0x0C0A8AB0u, 2);  /* 0C0A8AAE mov.b Rm,@Rn */
	r5 += r1;  /* 0C0A8AB0 add Rm,Rn */
	{ u32 v_ = r4; r0 -= 1; W8(r0, v_); } UPD(0x0C0A8AB4u, 2);  /* 0C0A8AB2 mov.b Rm,@-Rn */
	{ u32 v_ = r4; r6 -= 1; W8(r6, v_); } UPD(0x0C0A8AB6u, 1);  /* 0C0A8AB4 mov.b Rm,@-Rn */
	W8(r3, r4); UPD(0x0C0A8AB8u, 1);  /* 0C0A8AB6 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C0A8ABAu, 1);  /* 0C0A8AB8 mov.b Rm,@Rn */
	{ u32 v_ = r4; r0 -= 1; W8(r0, v_); } UPD(0x0C0A8ABCu, 1);  /* 0C0A8ABA mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0A8ABC mov Rm,Rn */
	IF(0x0C0A8ABEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A8ABE rts */
}

/* FUN_0c0a8ae0 */
void blk_f_0C0A8AE0(sh3_t *c)
{
	LOCALS;
L_0C0A8AE0: BLKS(0x0C0A8AE0u);
	r0 = 0xB4u; UPD(0x0C0A8AE2u, 1);  /* 0C0A8AE0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A8AE2 exts.w Rm,Rn */
	IF(0x0C0A8AE4u); MACL = r7 * r0;  /* 0C0A8AE4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0A8AE8u, 4);  /* 0C0A8AE6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A8AE8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8AECu, 2);  /* 0C0A8AEA mov.l Rm,@-Rn */
	IF(0x0C0A8AECu); r0 = MACL;  /* 0C0A8AEC sts macl,Rn */
	r0 += r6;  /* 0C0A8AEE add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C0A8AF2u, 3);  /* 0C0A8AF0 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A8AF2 mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C0A8AF6u, 2);  /* 0C0A8AF4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A8AF6u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A8AF6 shld Rm,Rn */
	r3 += r4;  /* 0C0A8AF8 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A8AFCu, 3);  /* 0C0A8AFA mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A8AFEu, 1);  /* 0C0A8AFC mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A8B00u, 1);  /* 0C0A8AFE mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C0A8B02u, 1);  /* 0C0A8B00 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A8B02 mov Rm,Rn */
	IF(0x0C0A8B04u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A8B04 rts */
}

/* FUN_0c0a8b10 */
void blk_f_0C0A8B10(sh3_t *c)
{
	LOCALS;
L_0C0A8B10: BLKS(0x0C0A8B10u);
	r3 = 0xB4u; UPD(0x0C0A8B12u, 1);  /* 0C0A8B10 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A8B12 exts.w Rm,Rn */
	IF(0x0C0A8B14u); MACL = r1 * r3;  /* 0C0A8B14 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0A8B18u, 4);  /* 0C0A8B16 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C0A8B18 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B1Cu, 2);  /* 0C0A8B1A mov.l Rm,@-Rn */
	IF(0x0C0A8B1Cu); r4 = MACL;  /* 0C0A8B1C sts macl,Rn */
	r4 += r0;  /* 0C0A8B1E add Rm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0A8B22u, 3);  /* 0C0A8B20 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0A8B22 mov #imm,Rn */
	IF(0x0C0A8B24u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A8B24 shld Rm,Rn */
	r6 = R32(r4 + 0x10u); UPD(0x0C0A8B28u, 3);  /* 0C0A8B26 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A8B28 mov Rm,Rn */
	r3 = R32(r4 + 0xCu); UPD(0x0C0A8B2Cu, 2);  /* 0C0A8B2A mov.l @(disp,Rm),Rn */
	IF(0x0C0A8B2Cu); r5 = R32(r0 + r6); UPD(0x0C0A8B2Eu, 1);  /* 0C0A8B2C mov.l @(r0,Rm),Rn */
	IF(0x0C0A8B2Eu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A8B2E shld Rm,Rn */
	W32(r4 + 0x14u, r5); UPD(0x0C0A8B32u, 2);  /* 0C0A8B30 mov.l Rm,@(disp,Rn) */
	r3 += r5;  /* 0C0A8B32 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A8B36u, 2);  /* 0C0A8B34 mov.l @Rm,Rn */
	W32(r4 + 0x18u, r1); UPD(0x0C0A8B38u, 1);  /* 0C0A8B36 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C0A8B3Au, 1);  /* 0C0A8B38 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0A8B3Cu, 1);  /* 0C0A8B3A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A8B3C mov Rm,Rn */
	IF(0x0C0A8B3Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A8B3E rts */
}

/* FUN_0c0a8b50 */
void blk_f_0C0A8B50(sh3_t *c)
{
	LOCALS;
L_0C0A8B50: BLKS(0x0C0A8B50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B52u, 1);  /* 0C0A8B50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B54u, 1);  /* 0C0A8B52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B56u, 1);  /* 0C0A8B54 mov.l Rm,@-Rn */
	r9 = 0xFFFFFFFFu;  /* 0C0A8B56 mov #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A8B5Au, 2);  /* 0C0A8B58 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A8B5A exts.w Rm,Rn */
	IF(0x0C0A8B5Cu); MACL = r10 * r5;  /* 0C0A8B5C mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B60u, 4);  /* 0C0A8B5E mov.l Rm,@-Rn */
	r3 = r10;  /* 0C0A8B60 mov Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0A8B64u, 2);  /* 0C0A8B62 mov.l @(disp,pc),Rn */
	IF(0x0C0A8B64u); r2 = MACL;  /* 0C0A8B64 sts macl,Rn */
	r11 = 0x80u; UPD(0x0C0A8B68u, 2);  /* 0C0A8B66 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C0A8B68 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8B6Cu, 2);  /* 0C0A8B6A mov.l Rm,@-Rn */
	r2 += r11;  /* 0C0A8B6C add Rm,Rn */
	r2 += 0x2u;  /* 0C0A8B6E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A8B72u, 3);  /* 0C0A8B70 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A8B72 mov Rm,Rn */
	r8 = r0 & 0xFFFF;  /* 0C0A8B74 extu.w Rm,Rn */
	IF(0x0C0A8B76u); MACL = r3 * r5;  /* 0C0A8B76 mul.l Rm,Rn */
	IF(0x0C0A8B78u); r6 = MACL;  /* 0C0A8B78 sts macl,Rn */
	UPD(0x0C0A8B7Au, 5);
L_0C0A8B7A: BLKS(0x0C0A8B7Au);
	r6 += r4;  /* 0C0A8B7A add Rm,Rn */
	r6 += 0x7Cu;  /* 0C0A8B7C add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A8B80u, 3);  /* 0C0A8B7E mov.w @Rm,Rn */
	IF(0x0C0A8B80u); MACL = r3 * r5;  /* 0C0A8B80 mul.l Rm,Rn */
	IF(0x0C0A8B82u); r0 = MACL;  /* 0C0A8B82 sts macl,Rn */
	r0 += r4;  /* 0C0A8B84 add Rm,Rn */
	r7 = R32(r0); UPD(0x0C0A8B88u, 5);  /* 0C0A8B86 mov.l @Rm,Rn */
	IF(0x0C0A8B88u); r6 = MACL;  /* 0C0A8B88 sts macl,Rn */
	r0 += r11;  /* 0C0A8B8A add Rm,Rn */
	r0 += 0x2u;  /* 0C0A8B8C add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A8B90u, 4);  /* 0C0A8B8E mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0A8B90 tst Rm,Rn */
	IF(0x0C0A8B92u); r2 = T;  /* 0C0A8B92 movt Rn */
	r0 = r1 & 0xFFFF;  /* 0C0A8B94 extu.w Rm,Rn */
	T = r0 == r8;  /* 0C0A8B96 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0A8B98 negc Rm,Rn */
	r0 |= r2;  /* 0C0A8B9A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A8B9C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8BD4u, 10); goto L_0C0A8BD4; } goto L_0C0A8BA2; }  /* 0C0A8B9E bf/s */
L_0C0A8BA2: BLKS(0x0C0A8BA2u);
	r2 = 0x4000u; UPD(0x0C0A8BA4u, 2);  /* 0C0A8BA2 mov.w @(disp,pc),Rn */
	T = (r7 & r2) == 0;  /* 0C0A8BA4 tst Rm,Rn */
	if (!T) { UPD(0x0C0A8B7Au, 4); goto L_0C0A8B7A; }  /* 0C0A8BA6 bf */
L_0C0A8BA8: BLKS(0x0C0A8BA8u);
	r3 = 0xB4u; UPD(0x0C0A8BAAu, 1);  /* 0C0A8BA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A8BAAu); MACL = r10 * r3;  /* 0C0A8BAA mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0A8BAEu, 3);  /* 0C0A8BAC mov.l @(disp,pc),Rn */
	IF(0x0C0A8BAEu); r3 = MACL;  /* 0C0A8BAE sts macl,Rn */
	r3 += r7;  /* 0C0A8BB0 add Rm,Rn */
	r4 = R32(r3); UPD(0x0C0A8BB4u, 3);  /* 0C0A8BB2 mov.l @Rm,Rn */
	T = (r4 & r2) == 0;  /* 0C0A8BB4 tst Rm,Rn */
	if (T) { UPD(0x0C0A8BD0u, 4); goto L_0C0A8BD0; }  /* 0C0A8BB6 bt */
L_0C0A8BB8: BLKS(0x0C0A8BB8u);
	r0 = r6;  /* 0C0A8BB8 mov Rm,Rn */
	r0 += r7;  /* 0C0A8BBA add Rm,Rn */
	r0 += 0x48u;  /* 0C0A8BBC add #imm,Rn */
	r8 = R32(r0); UPD(0x0C0A8BC0u, 4);  /* 0C0A8BBE mov.l @Rm,Rn */
	r3 += 0x48u;  /* 0C0A8BC0 add #imm,Rn */
	r5 = 0x84u; UPD(0x0C0A8BC4u, 2);  /* 0C0A8BC2 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFB8u;  /* 0C0A8BC4 add #imm,Rn */
	W32(r3, r8); UPD(0x0C0A8BC8u, 2);  /* 0C0A8BC6 mov.l Rm,@Rn */
	IF(0x0C0A8BC8u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A8BCAu, 1);  /* 0C0A8BC8 mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFB8u;  /* 0C0A8BCA add #imm,Rn */
	r0 = r3;  /* 0C0A8BCC mov Rm,Rn */
	IF(0x0C0A8BCEu); W8(r0 + r5, r7); UPD(0x0C0A8BD0u, 3);  /* 0C0A8BCE mov.b Rm,@(r0,Rn) */
L_0C0A8BD0: BLKS(0x0C0A8BD0u);
	r3 += 0x7Cu;  /* 0C0A8BD0 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8BD4u, 2);  /* 0C0A8BD2 mov.w @Rm,Rn */
L_0C0A8BD4: BLKS(0x0C0A8BD4u);
	r15 = r14;  /* 0C0A8BD4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8BD8u, 2);  /* 0C0A8BD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8BDAu, 1);  /* 0C0A8BD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8BDCu, 1);  /* 0C0A8BDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8BDEu, 1);  /* 0C0A8BDC mov.l @Rm+,Rn */
	IF(0x0C0A8BDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8BDE rts */
}

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


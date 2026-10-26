#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0B1BFE(sh3_t *c)
{
	LOCALS;
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
}

void blk_f_0C0B1C10(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1C10;
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
L_0C0B1078: BLKS(0x0C0B1078u);
	IF(0x0C0B1078u); W8(r0 + r7, r1); UPD(0x0C0B107Au, 1);  /* 0C0B1078 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B107A bra */
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
L_0C0B1C10: BLKS(0x0C0B1C10u);
	r7 = 0xB4u; UPD(0x0C0B1C12u, 1);  /* 0C0B1C10 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C0B1C14u, 1);  /* 0C0B1C12 mov.l @Rm,Rn */
	IF(0x0C0B1C14u); MACL = r9 * r7;  /* 0C0B1C14 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B1C18u, 3);  /* 0C0B1C16 mov.l @(disp,pc),Rn */
	IF(0x0C0B1C18u); r7 = MACL;  /* 0C0B1C18 sts macl,Rn */
	r7 += r11;  /* 0C0B1C1A add Rm,Rn */
	r5 = R32(r7 + 0x2Cu); UPD(0x0C0B1C1Eu, 3);  /* 0C0B1C1C mov.l @(disp,Rm),Rn */
	r0 = 0xFFFF8000u; UPD(0x0C0B1C20u, 1);  /* 0C0B1C1E mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C0B1C20 add Rm,Rn */
	W32(r7 + 0x2Cu, r5); UPD(0x0C0B1C24u, 2);  /* 0C0B1C22 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C0B1C24 add #imm,Rn */
	r12 = R32(r7); UPD(0x0C0B1C28u, 2);  /* 0C0B1C26 mov.l @Rm,Rn */
	r4 = 0xFFE00000u; UPD(0x0C0B1C2Au, 1);  /* 0C0B1C28 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0B1C2A add Rm,Rn */
	T = r12 == r5;  /* 0C0B1C2C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1BFEu, 5); goto L_0C0B1BFE; } goto L_0C0B1C32; }  /* 0C0B1C2E bf/s */
L_0C0B1C32: BLKS(0x0C0B1C32u);
	r0 = 0x9Fu; UPD(0x0C0B1C34u, 2);  /* 0C0B1C32 mov.w @(disp,pc),Rn */
	IF(0x0C0B1C34u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B1C36u, 1);  /* 0C0B1C34 mov.b @(r0,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0B1078u, 3); goto L_0C0B1078; }  /* 0C0B1C36 bra */
}

void blk_f_0C0B1C40(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1C40;
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
L_0C0B1292: BLKS(0x0C0B1292u);
	IF(0x0C0B1292u); W8(r0 + r2, r1); UPD(0x0C0B1294u, 1);  /* 0C0B1292 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B1294 bra */
L_0C0B1BFE: BLKS(0x0C0B1BFEu);
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 1);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
L_0C0B1C40: BLKS(0x0C0B1C40u);
	r7 = 0xB4u; UPD(0x0C0B1C42u, 1);  /* 0C0B1C40 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B1C44u, 1);  /* 0C0B1C42 mov.l @Rm,Rn */
	IF(0x0C0B1C44u); MACL = r2 * r7;  /* 0C0B1C44 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B1C48u, 3);  /* 0C0B1C46 mov.l @(disp,pc),Rn */
	IF(0x0C0B1C48u); r3 = MACL;  /* 0C0B1C48 sts macl,Rn */
	r3 += r6;  /* 0C0B1C4A add Rm,Rn */
	r10 = R32(r3 + 0x2Cu); UPD(0x0C0B1C4Eu, 3);  /* 0C0B1C4C mov.l @(disp,Rm),Rn */
	r1 = 0x8000u; UPD(0x0C0B1C50u, 1);  /* 0C0B1C4E mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C0B1C50 add Rm,Rn */
	W32(r3 + 0x2Cu, r10); UPD(0x0C0B1C54u, 2);  /* 0C0B1C52 mov.l Rm,@(disp,Rn) */
	r3 += 0x50u;  /* 0C0B1C54 add #imm,Rn */
	r13 = R32(r3); UPD(0x0C0B1C58u, 2);  /* 0C0B1C56 mov.l @Rm,Rn */
	T = r13 == r10;  /* 0C0B1C58 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1BFEu, 4); goto L_0C0B1BFE; } goto L_0C0B1C5E; }  /* 0C0B1C5A bf/s */
L_0C0B1C5E: BLKS(0x0C0B1C5Eu);
	IF(0x0C0B1C5Eu); MACL = r8 * r7;  /* 0C0B1C5E mul.l Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C0B1C62u, 4);  /* 0C0B1C60 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B1C62 mov #imm,Rn */
	IF(0x0C0B1C64u); r8 = MACL;  /* 0C0B1C64 sts macl,Rn */
	r8 += r6;  /* 0C0B1C66 add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C0B1C6Au, 4);  /* 0C0B1C68 mov.w @(disp,pc),Rn */
	r8 += r6;  /* 0C0B1C6A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B1C6Eu, 2);  /* 0C0B1C6C mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0B1C6E and #imm,r0 */
	W8(r8, r0); UPD(0x0C0B1C72u, 2);  /* 0C0B1C70 mov.b Rm,@Rn */
	{ r0 = r3; /* slot mov Rm,Rn */ UPD(0x0C0B1292u, 3); goto L_0C0B1292; }  /* 0C0B1C72 bra */
}

void blk_f_0C0B1C80(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1C80;
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
L_0C0B1894: BLKS(0x0C0B1894u);
	IF(0x0C0B1894u); { u32 t_ = r0; PR = 0x0C0B1898u; IF(0x0C0B1896u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B1898u); }  /* 0C0B1894 jsr @Rn */
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
L_0C0B1C80: BLKS(0x0C0B1C80u);
	r0 = 0xC0A8CA0u; UPD(0x0C0B1C82u, 1);  /* 0C0B1C80 mov.l @(disp,pc),Rn */
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B1894u, 3); goto L_0C0B1894; }  /* 0C0B1C82 bra */
}

void blk_f_0C0B1CC0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1CC0;
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
L_0C0B1CC0: BLKS(0x0C0B1CC0u);
	r13 = 0xC0A8B50u; UPD(0x0C0B1CC2u, 1);  /* 0C0B1CC0 mov.l @(disp,pc),Rn */
	IF(0x0C0B1CC2u); { u32 t_ = r13; PR = 0x0C0B1CC6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B1CC6u); }  /* 0C0B1CC2 jsr @Rn */
L_0C0B1CC6: BLKS(0x0C0B1CC6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1CC6 exts.w Rm,Rn */
	IF(0x0C0B1CC8u); T = (s32)r8 >= 0;  /* 0C0B1CC8 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B1CD2u, 5); goto L_0C0B1CD2; } goto L_0C0B1CCE; }  /* 0C0B1CCA bt/s */
L_0C0B1CCE: BLKS(0x0C0B1CCEu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 4); goto L_0C0B0F42; }  /* 0C0B1CCE bra */
L_0C0B1CD2: BLKS(0x0C0B1CD2u);
	r9 = 0xB4u; UPD(0x0C0B1CD4u, 1);  /* 0C0B1CD2 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B1CD6u, 1);  /* 0C0B1CD4 mov.l @Rm,Rn */
	IF(0x0C0B1CD6u); MACL = r2 * r9;  /* 0C0B1CD6 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B1CDAu, 3);  /* 0C0B1CD8 mov.l @(disp,pc),Rn */
	IF(0x0C0B1CDAu); r12 = MACL;  /* 0C0B1CDA sts macl,Rn */
	IF(0x0C0B1CDCu); MACL = r8 * r9;  /* 0C0B1CDC mul.l Rm,Rn */
	r12 += r11;  /* 0C0B1CDE add Rm,Rn */
	r12 += 0x3Cu;  /* 0C0B1CE0 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r12); UPD(0x0C0B1CE4u, 6);  /* 0C0B1CE2 mov.w @Rm,Rn */
	IF(0x0C0B1CE4u); r4 = MACL;  /* 0C0B1CE4 sts macl,Rn */
	r7 = 0xC3CC310u; UPD(0x0C0B1CE8u, 2);  /* 0C0B1CE6 mov.l @(disp,pc),Rn */
	r12 += 0xFFFFFFC4u;  /* 0C0B1CE8 add #imm,Rn */
	r4 += r11;  /* 0C0B1CEA add Rm,Rn */
	r10 = R32(r7); UPD(0x0C0B1CEEu, 3);  /* 0C0B1CEC mov.l @Rm,Rn */
	r5 = R32(r4 + 0x24u); UPD(0x0C0B1CF0u, 1);  /* 0C0B1CEE mov.l @(disp,Rm),Rn */
	r10 += r13;  /* 0C0B1CF0 add Rm,Rn */
	r0 = R32(r12 + 0x2Cu); UPD(0x0C0B1CF4u, 2);  /* 0C0B1CF2 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C0B1CF4 add Rm,Rn */
	W32(r7, r10); UPD(0x0C0B1CF8u, 2);  /* 0C0B1CF6 mov.l Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0B1CFAu, 1);  /* 0C0B1CF8 mov.w @(disp,pc),Rn */
	r6 = R32(r4 + 0x28u); UPD(0x0C0B1CFCu, 1);  /* 0C0B1CFA mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C0B1CFEu, 1);  /* 0C0B1CFC mov.l @(disp,Rm),Rn */
	IF(0x0C0B1CFEu); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0B1D00u, 1);  /* 0C0B1CFE mov.b @(r0,Rm),Rn */
	r6 += r1;  /* 0C0B1D00 add Rm,Rn */
	r2 = r8 & 0xFF;  /* 0C0B1D02 extu.b Rm,Rn */
	W32(r12 + 0x24u, r5); UPD(0x0C0B1D06u, 3);  /* 0C0B1D04 mov.l Rm,@(disp,Rn) */
	T = r2 > r3;  /* 0C0B1D06 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1DCAu, 4); goto L_0C0B1DCA; } UPD(0x0C0B1D0Cu, 1); goto L_0C0B1D0C; }  /* 0C0B1D08 bt/s */
L_0C0B1D0C: BLKS(0x0C0B1D0Cu);
	r0 = 0xC0B1D18u;  /* 0C0B1D0C mova @(disp,pc),r0 */
	IF(0x0C0B1D0Eu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B1D10u, 2);  /* 0C0B1D0E mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C0B1D10 extu.b Rm,Rn */
	IF(0x0C0B1D12u); { u32 tv_ = (r3 + 0x0C0B1D16u); u32 t_ = PHYS(tv_); IF(0x0C0B1D14u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1D12 braf Rn */
L_0C0B1DCA: BLKS(0x0C0B1DCAu);
	r13 = 0xFFFFEE2Eu; UPD(0x0C0B1DCCu, 1);  /* 0C0B1DCA mov.w @(disp,pc),Rn */
	IF(0x0C0B1DCCu); { u32 tv_ = (r13 + 0x0C0B1DD0u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1DCC braf Rn */
}

void blk_f_0C0B1D20(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1D20;
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
L_0C0B1D20: BLKS(0x0C0B1D20u);
	r6 = 0xB4u; UPD(0x0C0B1D22u, 1);  /* 0C0B1D20 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B1D24u, 1);  /* 0C0B1D22 mov.l @Rm,Rn */
	IF(0x0C0B1D24u); MACL = r1 * r6;  /* 0C0B1D24 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B1D28u, 3);  /* 0C0B1D26 mov.l @(disp,pc),Rn */
	IF(0x0C0B1D28u); r3 = MACL;  /* 0C0B1D28 sts macl,Rn */
	r3 += r12;  /* 0C0B1D2A add Rm,Rn */
	r3 += 0x50u;  /* 0C0B1D2C add #imm,Rn */
	r8 = R32(r3); UPD(0x0C0B1D30u, 4);  /* 0C0B1D2E mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0B1D30 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1DCAu, 4); goto L_0C0B1DCA; } goto L_0C0B1D36; }  /* 0C0B1D32 bt/s */
L_0C0B1D36: BLKS(0x0C0B1D36u);
	r0 = 0xA0u; UPD(0x0C0B1D38u, 2);  /* 0C0B1D36 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B1D3Au); r4 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C0B0DA4u, 3); goto L_0C0B0DA4; }  /* 0C0B1D38 bra */
L_0C0B1DCA: BLKS(0x0C0B1DCAu);
	r13 = 0xFFFFEE2Eu; UPD(0x0C0B1DCCu, 1);  /* 0C0B1DCA mov.w @(disp,pc),Rn */
	IF(0x0C0B1DCCu); { u32 tv_ = (r13 + 0x0C0B1DD0u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1DCC braf Rn */
}

void blk_f_0C0B1D40(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1D40;
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
L_0C0B1D36: BLKS(0x0C0B1D36u);
	r0 = 0xA0u; UPD(0x0C0B1D38u, 1);  /* 0C0B1D36 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B1D3Au); r4 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C0B0DA4u, 3); goto L_0C0B0DA4; }  /* 0C0B1D38 bra */
L_0C0B1D40: BLKS(0x0C0B1D40u);
	r7 = 0xB4u; UPD(0x0C0B1D42u, 1);  /* 0C0B1D40 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C0B1D44u, 1);  /* 0C0B1D42 mov.l @Rm,Rn */
	IF(0x0C0B1D44u); MACL = r10 * r7;  /* 0C0B1D44 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B1D48u, 3);  /* 0C0B1D46 mov.l @(disp,pc),Rn */
	IF(0x0C0B1D48u); r3 = MACL;  /* 0C0B1D48 sts macl,Rn */
	r3 += r9;  /* 0C0B1D4A add Rm,Rn */
	r11 = r3;  /* 0C0B1D4C mov Rm,Rn */
	r11 += 0x50u;  /* 0C0B1D4E add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0B1D52u, 5);  /* 0C0B1D50 mov.l @Rm,Rn */
	r5 = 0x1518u; UPD(0x0C0B1D54u, 1);  /* 0C0B1D52 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0B1D54 add #imm,Rn */
	W32(r11, r0); UPD(0x0C0B1D58u, 2);  /* 0C0B1D56 mov.l Rm,@Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0B1D58 cmp/gt Rm,Rn */
	r2 = R32(r3); UPD(0x0C0B1D5Cu, 2);  /* 0C0B1D5A mov.l @Rm,Rn */
	IF(0x0C0B1D5Cu); r4 = T;  /* 0C0B1D5C movt Rn */
	r0 = r2;  /* 0C0B1D5E mov Rm,Rn */
	IF(0x0C0B1D60u); r0 >>= 8;  /* 0C0B1D60 shlr8 Rn */
	r0 &= 0x1u;  /* 0C0B1D62 and #imm,r0 */
	r0 |= r4;  /* 0C0B1D64 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B1D66 tst Rm,Rn */
	if (T) { UPD(0x0C0B1DCAu, 9); goto L_0C0B1DCA; }  /* 0C0B1D68 bt */
L_0C0B1D6A: BLKS(0x0C0B1D6Au);
	r13 = 0xFFFFFEFFu; UPD(0x0C0B1D6Cu, 1);  /* 0C0B1D6A mov.w @(disp,pc),Rn */
	r2 &= r13;  /* 0C0B1D6C and Rm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0B1D36u, 4); goto L_0C0B1D36; }  /* 0C0B1D6E bra */
L_0C0B1DCA: BLKS(0x0C0B1DCAu);
	r13 = 0xFFFFEE2Eu; UPD(0x0C0B1DCCu, 1);  /* 0C0B1DCA mov.w @(disp,pc),Rn */
	IF(0x0C0B1DCCu); { u32 tv_ = (r13 + 0x0C0B1DD0u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1DCC braf Rn */
}

void blk_f_0C0B1D80(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1D80;
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
L_0C0B144E: BLKS(0x0C0B144Eu);
	r4 = 0x6Cu;  /* 0C0B144E mov #imm,Rn */
	r1 = 0xC0C2110u; UPD(0x0C0B1452u, 2);  /* 0C0B1450 mov.l @(disp,pc),Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0F46u, 3); goto L_0C0B0F46; }  /* 0C0B1452 bra */
L_0C0B1D80: BLKS(0x0C0B1D80u);
	r3 = 0xB4u; UPD(0x0C0B1D82u, 1);  /* 0C0B1D80 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B1D84u, 1);  /* 0C0B1D82 mov.l @Rm,Rn */
	IF(0x0C0B1D84u); MACL = r1 * r3;  /* 0C0B1D84 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B1D88u, 3);  /* 0C0B1D86 mov.l @(disp,pc),Rn */
	IF(0x0C0B1D88u); r3 = MACL;  /* 0C0B1D88 sts macl,Rn */
	r3 += r6;  /* 0C0B1D8A add Rm,Rn */
	r12 = R32(r3 + 0x38u); UPD(0x0C0B1D8Eu, 3);  /* 0C0B1D8C mov.l @(disp,Rm),Rn */
	r2 = 0x10101u; UPD(0x0C0B1D90u, 1);  /* 0C0B1D8E mov.l @(disp,pc),Rn */
	r8 = 0x808080u; UPD(0x0C0B1D92u, 1);  /* 0C0B1D90 mov.l @(disp,pc),Rn */
	r12 += r2;  /* 0C0B1D92 add Rm,Rn */
	T = r12 == r8;  /* 0C0B1D94 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1DCAu, 5); goto L_0C0B1DCA; } UPD(0x0C0B1D9Au, 1); goto L_0C0B1D9A; }  /* 0C0B1D96 bf/s */
L_0C0B1D9A: BLKS(0x0C0B1D9Au);
	r0 = 0xA0u; UPD(0x0C0B1D9Cu, 1);  /* 0C0B1D9A mov.w @(disp,pc),Rn */
	IF(0x0C0B1D9Cu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B1D9Eu, 1);  /* 0C0B1D9C mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B1D9E add #imm,Rn */
	{ IF(0x0C0B1DA2u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B144Eu, 4); goto L_0C0B144E; }  /* 0C0B1DA0 bra */
L_0C0B1DCA: BLKS(0x0C0B1DCAu);
	r13 = 0xFFFFEE2Eu; UPD(0x0C0B1DCCu, 1);  /* 0C0B1DCA mov.w @(disp,pc),Rn */
	IF(0x0C0B1DCCu); { u32 tv_ = (r13 + 0x0C0B1DD0u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1DCC braf Rn */
}

void blk_f_0C0B1DB0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1DB0;
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
L_0C0B1D36: BLKS(0x0C0B1D36u);
	r0 = 0xA0u; UPD(0x0C0B1D38u, 1);  /* 0C0B1D36 mov.w @(disp,pc),Rn */
	{ IF(0x0C0B1D3Au); r4 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C0B0DA4u, 3); goto L_0C0B0DA4; }  /* 0C0B1D38 bra */
L_0C0B1DB0: BLKS(0x0C0B1DB0u);
	r7 = 0xB4u; UPD(0x0C0B1DB2u, 1);  /* 0C0B1DB0 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C0B1DB4u, 1);  /* 0C0B1DB2 mov.l @Rm,Rn */
	IF(0x0C0B1DB4u); MACL = r10 * r7;  /* 0C0B1DB4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B1DB8u, 3);  /* 0C0B1DB6 mov.l @(disp,pc),Rn */
	IF(0x0C0B1DB8u); r3 = MACL;  /* 0C0B1DB8 sts macl,Rn */
	r3 += r9;  /* 0C0B1DBA add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0B1DBEu, 3);  /* 0C0B1DBC mov.l @(disp,Rm),Rn */
	r11 = 0xFFFF8000u; UPD(0x0C0B1DC0u, 1);  /* 0C0B1DBE mov.w @(disp,pc),Rn */
	r5 = 0x290000u; UPD(0x0C0B1DC2u, 1);  /* 0C0B1DC0 mov.l @(disp,pc),Rn */
	r0 += r11;  /* 0C0B1DC2 add Rm,Rn */
	T = r0 == r5;  /* 0C0B1DC4 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B1DD2u, 5); goto L_0C0B1DD2; } UPD(0x0C0B1DCAu, 1); goto L_0C0B1DCA; }  /* 0C0B1DC6 bt/s */
L_0C0B1DCA: BLKS(0x0C0B1DCAu);
	r13 = 0xFFFFEE2Eu; UPD(0x0C0B1DCCu, 1);  /* 0C0B1DCA mov.w @(disp,pc),Rn */
	IF(0x0C0B1DCCu); { u32 tv_ = (r13 + 0x0C0B1DD0u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1DCC braf Rn */
L_0C0B1DD2: BLKS(0x0C0B1DD2u);
	r13 = R32(r3); UPD(0x0C0B1DD4u, 1);  /* 0C0B1DD2 mov.l @Rm,Rn */
	r8 = 0x3000100u; UPD(0x0C0B1DD6u, 1);  /* 0C0B1DD4 mov.l @(disp,pc),Rn */
	r13 |= r8;  /* 0C0B1DD6 or Rm,Rn */
	{ W32(r3, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0B1D36u, 4); goto L_0C0B1D36; }  /* 0C0B1DD8 bra */
}

void blk_f_0C0B1E10(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1E10;
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
L_0C0B1E10: BLKS(0x0C0B1E10u);
	r12 = 0xC0A8B50u; UPD(0x0C0B1E12u, 1);  /* 0C0B1E10 mov.l @(disp,pc),Rn */
	IF(0x0C0B1E12u); { u32 t_ = r12; PR = 0x0C0B1E16u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B1E16u); }  /* 0C0B1E12 jsr @Rn */
L_0C0B1E16: BLKS(0x0C0B1E16u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1E16 exts.w Rm,Rn */
	IF(0x0C0B1E18u); T = (s32)r8 >= 0;  /* 0C0B1E18 cmp/pz Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B1E22u, 5); goto L_0C0B1E22; } UPD(0x0C0B1E1Eu, 1); goto L_0C0B1E1E; }  /* 0C0B1E1A bt/s */
L_0C0B1E1E: BLKS(0x0C0B1E1Eu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0F42u, 3); goto L_0C0B0F42; }  /* 0C0B1E1E bra */
L_0C0B1E22: BLKS(0x0C0B1E22u);
	r2 = 0xB4u; UPD(0x0C0B1E24u, 1);  /* 0C0B1E22 mov.w @(disp,pc),Rn */
	IF(0x0C0B1E24u); MACL = r6 * r2;  /* 0C0B1E24 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B1E28u, 3);  /* 0C0B1E26 mov.l @(disp,pc),Rn */
	IF(0x0C0B1E28u); r6 = MACL;  /* 0C0B1E28 sts macl,Rn */
	r6 += r12;  /* 0C0B1E2A add Rm,Rn */
	r0 = R32(r6); UPD(0x0C0B1E2Eu, 3);  /* 0C0B1E2C mov.l @Rm,Rn */
	IF(0x0C0B1E2Eu); MACL = r8 * r2;  /* 0C0B1E2E mul.l Rm,Rn */
	r9 = 0xECFFFEFFu; UPD(0x0C0B1E32u, 3);  /* 0C0B1E30 mov.l @(disp,pc),Rn */
	r0 &= r9;  /* 0C0B1E32 and Rm,Rn */
	W32(r6, r0); UPD(0x0C0B1E36u, 2);  /* 0C0B1E34 mov.l Rm,@Rn */
	IF(0x0C0B1E36u); r4 = MACL;  /* 0C0B1E36 sts macl,Rn */
	r4 += r12;  /* 0C0B1E38 add Rm,Rn */
	r11 = R32(r4); UPD(0x0C0B1E3Cu, 3);  /* 0C0B1E3A mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B1E3Eu, 1);  /* 0C0B1E3C mov.l @(disp,pc),Rn */
	r13 = R32(r4 + 0x24u); UPD(0x0C0B1E40u, 1);  /* 0C0B1E3E mov.l @(disp,Rm),Rn */
	r11 &= r1;  /* 0C0B1E40 and Rm,Rn */
	r7 = R32(r4 + 0x28u); UPD(0x0C0B1E44u, 2);  /* 0C0B1E42 mov.l @(disp,Rm),Rn */
	r0 |= r11;  /* 0C0B1E44 or Rm,Rn */
	r8 = R32(r6 + 0x2Cu); UPD(0x0C0B1E48u, 2);  /* 0C0B1E46 mov.l @(disp,Rm),Rn */
	r10 = R32(r6 + 0x30u); UPD(0x0C0B1E4Au, 1);  /* 0C0B1E48 mov.l @(disp,Rm),Rn */
	r13 += r8;  /* 0C0B1E4A add Rm,Rn */
	r5 = R32(r4 + 0x38u); UPD(0x0C0B1E4Eu, 2);  /* 0C0B1E4C mov.l @(disp,Rm),Rn */
	r7 += r10;  /* 0C0B1E4E add Rm,Rn */
	W32(r6, r0); UPD(0x0C0B1E52u, 2);  /* 0C0B1E50 mov.l Rm,@Rn */
	r4 += 0x3Cu;  /* 0C0B1E52 add #imm,Rn */
	W32(r6 + 0x24u, r13); UPD(0x0C0B1E56u, 2);  /* 0C0B1E54 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r7); UPD(0x0C0B1E58u, 1);  /* 0C0B1E56 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x38u, r5); UPD(0x0C0B1E5Au, 1);  /* 0C0B1E58 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B1E5Cu, 1);  /* 0C0B1E5A mov.w @Rm,Rn */
	r6 += 0x3Cu;  /* 0C0B1E5C add #imm,Rn */
	W16(r6, r2); UPD(0x0C0B1E60u, 2);  /* 0C0B1E5E mov.w Rm,@Rn */
	r2 = 0x99u; UPD(0x0C0B1E62u, 1);  /* 0C0B1E60 mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFFC4u;  /* 0C0B1E62 add #imm,Rn */
	r2 += r6;  /* 0C0B1E64 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B1E68u, 3);  /* 0C0B1E66 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B1E68 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C0B1E6A extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0B1E6C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B1F02u, 6); goto L_0C0B1F02; } UPD(0x0C0B1E72u, 1); goto L_0C0B1E72; }  /* 0C0B1E6E bf/s */
L_0C0B1E72: BLKS(0x0C0B1E72u);
	r3 = 0x0u;  /* 0C0B1E72 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C0B1E76u, 2);  /* 0C0B1E74 mov.b Rm,@Rn */
	r12 = 0x0u;  /* 0C0B1E76 mov #imm,Rn */
	W32(r14 + 0x3Cu, r12); UPD(0x0C0B1E7Au, 2);  /* 0C0B1E78 mov.l Rm,@(disp,Rn) */
	r10 = r6;  /* 0C0B1E7A mov Rm,Rn */
	UPD(0x0C0B1E7Cu, 1);
L_0C0B1E7C: BLKS(0x0C0B1E7Cu);
	r13 = R32(r14 + 0x3Cu); UPD(0x0C0B1E7Eu, 1);  /* 0C0B1E7C mov.l @(disp,Rm),Rn */
	r8 = r12;  /* 0C0B1E7E mov Rm,Rn */
	r5 = 0xC1E4C84u; UPD(0x0C0B1E82u, 2);  /* 0C0B1E80 mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C0B1E82 add Rm,Rn */
	r11 = R32(r5); UPD(0x0C0B1E86u, 2);  /* 0C0B1E84 mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C0B1E88u, 1);  /* 0C0B1E86 mov.l @(disp,Rm),Rn */
	r13 += r11;  /* 0C0B1E88 add Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0B1E8Cu, 2);  /* 0C0B1E8A mov.l @(disp,Rm),Rn */
	r3 = 0xC062780u; UPD(0x0C0B1E8Eu, 1);  /* 0C0B1E8C mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x28u); UPD(0x0C0B1E90u, 1);  /* 0C0B1E8E mov.l @(disp,Rm),Rn */
	r11 += r4;  /* 0C0B1E90 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C0B1E94u, 2);  /* 0C0B1E92 mov.l @(disp,pc),Rn */
	IF(0x0C0B1E94u); { u32 t_ = r3; PR = 0x0C0B1E98u; IF(0x0C0B1E96u); r8 <<= 2; /* slot shll2 Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B1E98u); }  /* 0C0B1E94 jsr @Rn */
L_0C0B1E98: BLKS(0x0C0B1E98u);
	r6 = 0xC062780u; UPD(0x0C0B1E9Au, 1);  /* 0C0B1E98 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0B1E9A mov Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0B1E9Eu, 2);  /* 0C0B1E9C mov.l @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C0B1E9E mov #imm,Rn */
	r0 = 0xC1E4CB6u; UPD(0x0C0B1EA2u, 2);  /* 0C0B1EA0 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C0B1EA2 add Rm,Rn */
	IF(0x0C0B1EA4u); { u32 t_ = r6; PR = 0x0C0B1EA8u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B1EA8u); }  /* 0C0B1EA4 jsr @Rn */
L_0C0B1EA8: BLKS(0x0C0B1EA8u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B1EAAu, 1);  /* 0C0B1EA8 mov.w @Rm,Rn */
	r5 = r9;  /* 0C0B1EAA mov Rm,Rn */
	r0 += r7;  /* 0C0B1EAC add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C0B1EB0u, 3);  /* 0C0B1EAE mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF8u;  /* 0C0B1EB0 add #imm,Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0B1EB2 exts.w Rm,Rn */
	r4 = r1;  /* 0C0B1EB4 mov Rm,Rn */
	IF(0x0C0B1EB6u); { u32 t_ = r8; PR = 0x0C0B1EBAu; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B1EBAu); }  /* 0C0B1EB6 jsr @Rn */
L_0C0B1EBA: BLKS(0x0C0B1EBAu);
	r5 = r9;  /* 0C0B1EBA mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0B1EBEu, 2);  /* 0C0B1EBC mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0B1EBE mov Rm,Rn */
	IF(0x0C0B1EC0u); { u32 t_ = r9; PR = 0x0C0B1EC4u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B1EC4u); }  /* 0C0B1EC0 jsr @Rn */
L_0C0B1EC4: BLKS(0x0C0B1EC4u);
	r7 = r0;  /* 0C0B1EC4 mov Rm,Rn */
	r9 = 0xB0u; UPD(0x0C0B1EC8u, 2);  /* 0C0B1EC6 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0B1EC8 mov Rm,Rn */
	IF(0x0C0B1ECAu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B1ECCu, 2);  /* 0C0B1ECA mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0B1ECC add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0B1ECE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B1ED2u, 3);  /* 0C0B1ED0 mov.l Rm,@Rn */
	r5 = 0x7u;  /* 0C0B1ED2 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0B1ED6u, 2);  /* 0C0B1ED4 mov.w @(disp,pc),Rn */
	IF(0x0C0B1ED6u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B1ED8u, 1);  /* 0C0B1ED6 mov.b @(r0,Rm),Rn */
	W32(r15 + 0xCu, r7); UPD(0x0C0B1EDAu, 1);  /* 0C0B1ED8 mov.l Rm,@(disp,Rn) */
	r2 = r6 & 0xFF;  /* 0C0B1EDA extu.b Rm,Rn */
	r7 = r11;  /* 0C0B1EDC mov Rm,Rn */
	r9 = 0x808080u; UPD(0x0C0B1EE0u, 3);  /* 0C0B1EDE mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C0B1EE0 mov Rm,Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C0B1EE4u, 2);  /* 0C0B1EE2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B1EE6u, 1);  /* 0C0B1EE4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r8); UPD(0x0C0B1EE8u, 1);  /* 0C0B1EE6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r9); UPD(0x0C0B1EEAu, 1);  /* 0C0B1EE8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B1EEAu); { u32 t_ = r11; PR = 0x0C0B1EEEu; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0B1EEEu); }  /* 0C0B1EEA jsr @Rn */
L_0C0B1EEE: BLKS(0x0C0B1EEEu);
	r0 = R32(r14 + 0x3Cu); UPD(0x0C0B1EF0u, 1);  /* 0C0B1EEE mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C0B1EF0 mov Rm,Rn */
	r5 += 0x1u;  /* 0C0B1EF2 add #imm,Rn */
	r0 += 0x8u;  /* 0C0B1EF4 add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0B1EF6 exts.w Rm,Rn */
	r4 = 0x5u;  /* 0C0B1EF8 mov #imm,Rn */
	W32(r14 + 0x3Cu, r0); UPD(0x0C0B1EFCu, 6);  /* 0C0B1EFA mov.l Rm,@(disp,Rn) */
	T = (s32)r12 > (s32)r4;  /* 0C0B1EFC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1E7Cu, 4); goto L_0C0B1E7C; } UPD(0x0C0B1F02u, 1); goto L_0C0B1F02; }  /* 0C0B1EFE bf/s */
L_0C0B1F02: BLKS(0x0C0B1F02u);
	r13 = 0xFFFFECF6u; UPD(0x0C0B1F04u, 1);  /* 0C0B1F02 mov.w @(disp,pc),Rn */
	IF(0x0C0B1F04u); { u32 tv_ = (r13 + 0x0C0B1F08u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1F04 braf Rn */
}

void blk_f_0C0B1F10(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1F10;
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
L_0C0B1F10: BLKS(0x0C0B1F10u);
	r10 = 0xB4u; UPD(0x0C0B1F12u, 1);  /* 0C0B1F10 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0B1F14u, 1);  /* 0C0B1F12 mov.l @Rm,Rn */
	IF(0x0C0B1F14u); MACL = r3 * r10;  /* 0C0B1F14 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B1F18u, 3);  /* 0C0B1F16 mov.l @(disp,pc),Rn */
	IF(0x0C0B1F18u); r9 = MACL;  /* 0C0B1F18 sts macl,Rn */
	r9 += r11;  /* 0C0B1F1A add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0B1F1C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B1F20u, 4);  /* 0C0B1F1E mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0B1F20 tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B1F2Au, 4); goto L_0C0B1F2A; } goto L_0C0B1F26; }  /* 0C0B1F22 bf/s */
L_0C0B1F26: BLKS(0x0C0B1F26u);
	{ r4 = r3; /* slot mov Rm,Rn */ UPD(0x0C0B2140u, 4); goto L_0C0B2140; }  /* 0C0B1F26 bra */
L_0C0B1F2A: BLKS(0x0C0B1F2Au);
	r13 = 0xC0A8CA0u; UPD(0x0C0B1F2Cu, 1);  /* 0C0B1F2A mov.l @(disp,pc),Rn */
	IF(0x0C0B1F2Cu); { u32 t_ = r13; PR = 0x0C0B1F30u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B1F30u); }  /* 0C0B1F2C jsr @Rn */
L_0C0B1F30: BLKS(0x0C0B1F30u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B1F30 exts.w Rm,Rn */
	IF(0x0C0B1F32u); T = (s32)r8 >= 0;  /* 0C0B1F32 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0B1F36u); MACL = r8 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B1F40u, 6); goto L_0C0B1F40; } goto L_0C0B1F38; }  /* 0C0B1F34 bt/s */
L_0C0B1F38: BLKS(0x0C0B1F38u);
	r4 = 0xFFFFF004u; UPD(0x0C0B1F3Au, 3);  /* 0C0B1F38 mov.w @(disp,pc),Rn */
	IF(0x0C0B1F3Au); { u32 tv_ = (r4 + 0x0C0B1F3Eu); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1F3A braf Rn */
L_0C0B1F40: BLKS(0x0C0B1F40u);
	r7 = R32(r9); UPD(0x0C0B1F42u, 1);  /* 0C0B1F40 mov.l @Rm,Rn */
	IF(0x0C0B1F42u); r6 = MACL;  /* 0C0B1F42 sts macl,Rn */
	r6 += r11;  /* 0C0B1F44 add Rm,Rn */
	r11 = 0xECFFFEFFu; UPD(0x0C0B1F48u, 3);  /* 0C0B1F46 mov.l @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C0B1F48 mov #imm,Rn */
	r7 &= r11;  /* 0C0B1F4A and Rm,Rn */
	W32(r9, r7); UPD(0x0C0B1F4Eu, 3);  /* 0C0B1F4C mov.l Rm,@Rn */
	r1 = 0x13000100u; UPD(0x0C0B1F50u, 1);  /* 0C0B1F4E mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C0B1F52u, 1);  /* 0C0B1F50 mov.l @Rm,Rn */
	r8 = R32(r9 + 0x30u); UPD(0x0C0B1F54u, 1);  /* 0C0B1F52 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C0B1F54 and Rm,Rn */
	r4 = R32(r6 + 0x24u); UPD(0x0C0B1F58u, 2);  /* 0C0B1F56 mov.l @(disp,Rm),Rn */
	r7 |= r3;  /* 0C0B1F58 or Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C0B1F5Cu, 2);  /* 0C0B1F5A mov.l @(disp,Rm),Rn */
	r12 = R32(r6 + 0x28u); UPD(0x0C0B1F5Eu, 1);  /* 0C0B1F5C mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C0B1F5E add Rm,Rn */
	r0 = R32(r6 + 0x38u); UPD(0x0C0B1F62u, 2);  /* 0C0B1F60 mov.l @(disp,Rm),Rn */
	r12 += r8;  /* 0C0B1F62 add Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0B1F66u, 2);  /* 0C0B1F64 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r12); UPD(0x0C0B1F68u, 1);  /* 0C0B1F66 mov.l Rm,@(disp,Rn) */
	W32(r9, r7); UPD(0x0C0B1F6Au, 1);  /* 0C0B1F68 mov.l Rm,@Rn */
	W32(r9 + 0x38u, r0); UPD(0x0C0B1F6Cu, 1);  /* 0C0B1F6A mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C0B1F6C add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B1F70u, 2);  /* 0C0B1F6E mov.w @Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C0B1F70 add #imm,Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C0B1F74u, 2);  /* 0C0B1F72 mov.l @(disp,Rm),Rn */
	T = r3 > r10;  /* 0C0B1F74 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B2050u, 4); goto L_0C0B2050; }  /* 0C0B1F76 bt */
L_0C0B1F78: BLKS(0x0C0B1F78u);
	r0 = 0xC0B1FC4u;  /* 0C0B1F78 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0B1F7A add Rm,Rn */
	IF(0x0C0B1F7Cu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B1F7Eu, 3);  /* 0C0B1F7C mov.w @(r0,Rm),Rn */
	IF(0x0C0B1F7Eu); { u32 tv_ = (r9 + 0x0C0B1F82u); u32 t_ = PHYS(tv_); IF(0x0C0B1F80u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1F7E braf Rn */
L_0C0B2050: BLKS(0x0C0B2050u);
	r10 = R32(r14); UPD(0x0C0B2052u, 1);  /* 0C0B2050 mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0B2054u, 1);  /* 0C0B2052 mov.w @(disp,pc),Rn */
	IF(0x0C0B2054u); MACL = r10 * r13;  /* 0C0B2054 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B2058u, 3);  /* 0C0B2056 mov.l @(disp,pc),Rn */
	IF(0x0C0B2058u); r3 = MACL;  /* 0C0B2058 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B205Cu, 2);  /* 0C0B205A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0B205C add Rm,Rn */
	r2 += r3;  /* 0C0B205E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2062u, 3);  /* 0C0B2060 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B2062 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B2064 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0B2068u, 3);  /* 0C0B2066 mov.b Rm,@Rn */
	T = r0 == 0x2u;  /* 0C0B2068 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B20C2u, 4); goto L_0C0B20C2; }  /* 0C0B206A bf */
L_0C0B206C: BLKS(0x0C0B206Cu);
	r0 = 0x0u;  /* 0C0B206C mov #imm,Rn */
	{ W8(r2, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B10BEu, 4); goto L_0C0B10BE; }  /* 0C0B206E bra */
L_0C0B20C2: BLKS(0x0C0B20C2u);
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
L_0C0B2140: BLKS(0x0C0B2140u);
	r1 = 0xC0A9CB0u; UPD(0x0C0B2142u, 1);  /* 0C0B2140 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFEDFEu; UPD(0x0C0B2144u, 1);  /* 0C0B2142 mov.w @(disp,pc),Rn */
	IF(0x0C0B2144u); { u32 tv_ = (r13 + 0x0C0B2148u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2144 braf Rn */
}

void blk_f_0C0B1FF0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B1FF0;
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
L_0C0B1FF0: BLKS(0x0C0B1FF0u);
	r6 = 0xB4u; UPD(0x0C0B1FF2u, 1);  /* 0C0B1FF0 mov.w @(disp,pc),Rn */
	IF(0x0C0B1FF2u); MACL = r8 * r6;  /* 0C0B1FF2 mul.l Rm,Rn */
	r3 = R32(r14); UPD(0x0C0B1FF6u, 3);  /* 0C0B1FF4 mov.l @Rm,Rn */
	IF(0x0C0B1FF6u); r7 = MACL;  /* 0C0B1FF6 sts macl,Rn */
	IF(0x0C0B1FF8u); MACL = r3 * r6;  /* 0C0B1FF8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B1FFCu, 4);  /* 0C0B1FFA mov.l @(disp,pc),Rn */
	r11 = 0xA4u; UPD(0x0C0B1FFEu, 1);  /* 0C0B1FFC mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C0B1FFE add Rm,Rn */
	IF(0x0C0B2000u); r8 = MACL;  /* 0C0B2000 sts macl,Rn */
	r7 += r11;  /* 0C0B2002 add Rm,Rn */
	r8 += r0;  /* 0C0B2004 add Rm,Rn */
	r2 = 0xA1u; UPD(0x0C0B2008u, 5);  /* 0C0B2006 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C0B2008 add #imm,Rn */
	r0 = r8;  /* 0C0B200A mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B200Eu, 3);  /* 0C0B200C mov.b @Rm,Rn */
	IF(0x0C0B200Eu); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B2010u, 1);  /* 0C0B200E mov.b @(r0,Rm),Rn */
	r10 &= r13;  /* 0C0B2010 and Rm,Rn */
	T = r10 == r13;  /* 0C0B2012 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B20C2u, 5); goto L_0C0B20C2; } goto L_0C0B2018; }  /* 0C0B2014 bf/s */
L_0C0B2018: BLKS(0x0C0B2018u);
	r7 += 0x2u;  /* 0C0B2018 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B201Cu, 3);  /* 0C0B201A mov.b @Rm,Rn */
	r6 = 0xAu;  /* 0C0B201C mov #imm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C0B2020u, 2);  /* 0C0B201E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0B2020 add Rm,Rn */
	r7 = 0xC1E4E34u; UPD(0x0C0B2024u, 2);  /* 0C0B2022 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2026u, 1);  /* 0C0B2024 mov.l @Rm,Rn */
	IF(0x0C0B2026u); { u32 t_ = r12; PR = 0x0C0B202Au; IF(0x0C0B2028u); r5 = (u32)(s32)(s16)R16(r0 + r7); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B202Au); }  /* 0C0B2026 jsr @Rn */
L_0C0B202A: BLKS(0x0C0B202Au);
	T = (r0 & r0) == 0;  /* 0C0B202A tst Rm,Rn */
	if (T) { UPD(0x0C0B20C2u, 4); goto L_0C0B20C2; }  /* 0C0B202C bt */
L_0C0B202E: BLKS(0x0C0B202Eu);
	r4 = R32(r8 + 0xCu); UPD(0x0C0B2030u, 1);  /* 0C0B202E mov.l @(disp,Rm),Rn */
	r5 = 0x1u;  /* 0C0B2030 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B2034u, 2);  /* 0C0B2032 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B2034 add #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0B2038u, 2);  /* 0C0B2036 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2038u); W16(r0 + r8, r5); UPD(0x0C0B203Au, 1);  /* 0C0B2038 mov.w Rm,@(r0,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C0B203Cu, 1);  /* 0C0B203A mov.l @(disp,pc),Rn */
	IF(0x0C0B203Cu); { u32 t_ = r8; PR = 0x0C0B2040u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2040u); }  /* 0C0B203C jsr @Rn */
L_0C0B2040: BLKS(0x0C0B2040u);
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C0B1450u, 3); goto L_0C0B1450; }  /* 0C0B2040 bra */
L_0C0B20C2: BLKS(0x0C0B20C2u);
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
}

void blk_f_0C0B2050(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2050;
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
L_0C0B2050: BLKS(0x0C0B2050u);
	r10 = R32(r14); UPD(0x0C0B2052u, 1);  /* 0C0B2050 mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0B2054u, 1);  /* 0C0B2052 mov.w @(disp,pc),Rn */
	IF(0x0C0B2054u); MACL = r10 * r13;  /* 0C0B2054 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B2058u, 3);  /* 0C0B2056 mov.l @(disp,pc),Rn */
	IF(0x0C0B2058u); r3 = MACL;  /* 0C0B2058 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B205Cu, 2);  /* 0C0B205A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0B205C add Rm,Rn */
	r2 += r3;  /* 0C0B205E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2062u, 3);  /* 0C0B2060 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B2062 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B2064 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0B2068u, 3);  /* 0C0B2066 mov.b Rm,@Rn */
	T = r0 == 0x2u;  /* 0C0B2068 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B20C2u, 4); goto L_0C0B20C2; }  /* 0C0B206A bf */
L_0C0B206C: BLKS(0x0C0B206Cu);
	r0 = 0x0u;  /* 0C0B206C mov #imm,Rn */
	{ W8(r2, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B10BEu, 4); goto L_0C0B10BE; }  /* 0C0B206E bra */
L_0C0B20C2: BLKS(0x0C0B20C2u);
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
}

void blk_f_0C0B206A(sh3_t *c)
{
	LOCALS;
	goto L_0C0B206A;
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
L_0C0B206A: BLKS(0x0C0B206Au);
	if (!T) { UPD(0x0C0B20C2u, 3); goto L_0C0B20C2; }  /* 0C0B206A bf */
L_0C0B206C: BLKS(0x0C0B206Cu);
	r0 = 0x0u;  /* 0C0B206C mov #imm,Rn */
	{ W8(r2, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B10BEu, 4); goto L_0C0B10BE; }  /* 0C0B206E bra */
L_0C0B20C2: BLKS(0x0C0B20C2u);
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
}

void blk_f_0C0B2080(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2080;
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
L_0C0B2080: BLKS(0x0C0B2080u);
	r11 = 0xC0BC1B0u; UPD(0x0C0B2082u, 1);  /* 0C0B2080 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B2082 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B2086u, 2);  /* 0C0B2084 mov.l @Rm,Rn */
	IF(0x0C0B2086u); { u32 t_ = r11; PR = 0x0C0B208Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B208Au); }  /* 0C0B2086 jsr @Rn */
L_0C0B208A: BLKS(0x0C0B208Au);
	T = (r0 & r0) == 0;  /* 0C0B208A tst Rm,Rn */
	if (T) { UPD(0x0C0B20C2u, 4); goto L_0C0B20C2; }  /* 0C0B208C bt */
L_0C0B208E: BLKS(0x0C0B208Eu);
	r2 = 0x1u;  /* 0C0B208E mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C0B2092u, 2);  /* 0C0B2090 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C0B2094u, 1);  /* 0C0B2092 mov.l @Rm,Rn */
	IF(0x0C0B2094u); MACL = r7 * r12;  /* 0C0B2094 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B2098u, 3);  /* 0C0B2096 mov.l @(disp,pc),Rn */
	IF(0x0C0B2098u); r10 = MACL;  /* 0C0B2098 sts macl,Rn */
	r11 = 0x9Fu; UPD(0x0C0B209Cu, 2);  /* 0C0B209A mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0B209C add Rm,Rn */
	r11 += r10;  /* 0C0B209E add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B20A2u, 3);  /* 0C0B20A0 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C0B20A2 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0B20A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B20D0u, 5); goto L_0C0B20D0; }  /* 0C0B20A6 bf */
L_0C0B20A8: BLKS(0x0C0B20A8u);
	T = r0 == 0x2u;  /* 0C0B20A8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B20C2u, 4); goto L_0C0B20C2; }  /* 0C0B20AA bf */
L_0C0B20AC: BLKS(0x0C0B20ACu);
	r12 = R32(r10 + 0xCu); UPD(0x0C0B20AEu, 1);  /* 0C0B20AC mov.l @(disp,Rm),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0B20AE mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B20B2u, 2);  /* 0C0B20B0 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFFFFu;  /* 0C0B20B2 add #imm,Rn */
	IF(0x0C0B20B4u); W16(r0 + r10, r8); UPD(0x0C0B20B6u, 2);  /* 0C0B20B4 mov.w Rm,@(r0,Rn) */
	W32(r10 + 0xCu, r12); UPD(0x0C0B20B8u, 1);  /* 0C0B20B6 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0A8AE0u; UPD(0x0C0B20BAu, 1);  /* 0C0B20B8 mov.l @(disp,pc),Rn */
	IF(0x0C0B20BAu); { u32 t_ = r10; PR = 0x0C0B20BEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B20BEu); }  /* 0C0B20BA jsr @Rn */
L_0C0B20BE: BLKS(0x0C0B20BEu);
	r1 = 0x0u;  /* 0C0B20BE mov #imm,Rn */
	W8(r11, r1); UPD(0x0C0B20C2u, 2);  /* 0C0B20C0 mov.b Rm,@Rn */
L_0C0B20C2: BLKS(0x0C0B20C2u);
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
L_0C0B20D0: BLKS(0x0C0B20D0u);
	r13 = 0xC069B50u; UPD(0x0C0B20D2u, 1);  /* 0C0B20D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B20D2u); { u32 t_ = r13; PR = 0x0C0B20D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B20D6u); }  /* 0C0B20D2 jsr @Rn */
L_0C0B20D6: BLKS(0x0C0B20D6u);
	r6 = 0x2A0u; UPD(0x0C0B20D8u, 1);  /* 0C0B20D6 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0B20D8 exts.w Rm,Rn */
	IF(0x0C0B20DAu); MACL = r7 * r6;  /* 0C0B20DA mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0B20DEu, 4);  /* 0C0B20DC mov.l @(disp,pc),Rn */
	r13 = 0xC068E60u; UPD(0x0C0B20E0u, 1);  /* 0C0B20DE mov.l @(disp,pc),Rn */
	IF(0x0C0B20E0u); r0 = MACL;  /* 0C0B20E0 sts macl,Rn */
	r0 += r2;  /* 0C0B20E2 add Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0B20E6u, 3);  /* 0C0B20E4 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0B20E8u, 1);  /* 0C0B20E6 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0B20EAu, 1);  /* 0C0B20E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B20EAu); { u32 t_ = r13; PR = 0x0C0B20EEu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B20EEu); }  /* 0C0B20EA jsr @Rn */
L_0C0B20EE: BLKS(0x0C0B20EEu);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B20EE exts.w Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B20F2u, 2);  /* 0C0B20F0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B20F2u); MACL = r8 * r12;  /* 0C0B20F2 mul.l Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B20F6u, 3);  /* 0C0B20F4 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B20F6 add #imm,Rn */
	r6 = r5 & 0xFF;  /* 0C0B20F8 extu.b Rm,Rn */
	r0 = r6;  /* 0C0B20FA mov Rm,Rn */
	r4 = 0xC1E4E3Cu; UPD(0x0C0B20FEu, 4);  /* 0C0B20FC mov.l @(disp,pc),Rn */
	IF(0x0C0B20FEu); r0 <<= 2;  /* 0C0B20FE shll2 Rn */
	IF(0x0C0B2100u); r3 = R32(r0 + r4); UPD(0x0C0B2102u, 2);  /* 0C0B2100 mov.l @(r0,Rm),Rn */
	r7 = 0xA6u; UPD(0x0C0B2104u, 1);  /* 0C0B2102 mov.w @(disp,pc),Rn */
	IF(0x0C0B2104u); r0 = MACL;  /* 0C0B2104 sts macl,Rn */
	r0 += r9;  /* 0C0B2106 add Rm,Rn */
	IF(0x0C0B2108u); r13 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B210Au, 3);  /* 0C0B2108 mov.b @(r0,Rm),Rn */
	r13 += r13;  /* 0C0B210A add Rm,Rn */
	r6 += r13;  /* 0C0B210C add Rm,Rn */
	IF(0x0C0B210Eu); r6 <<= 2;  /* 0C0B210E shll2 Rn */
	r9 = 0xC1E4E44u; UPD(0x0C0B2112u, 4);  /* 0C0B2110 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0B2112 mov Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0B2116u, 2);  /* 0C0B2114 mov.l @(disp,Rm),Rn */
	r13 += r13;  /* 0C0B2116 add Rm,Rn */
	IF(0x0C0B2118u); r2 = R32(r0 + r9); UPD(0x0C0B211Au, 2);  /* 0C0B2118 mov.l @(r0,Rm),Rn */
	r5 += r3;  /* 0C0B211A add Rm,Rn */
	W32(r15, r2); UPD(0x0C0B211Eu, 2);  /* 0C0B211C mov.l Rm,@Rn */
	r0 = r13;  /* 0C0B211E mov Rm,Rn */
	r4 = 0xC1E4E28u; UPD(0x0C0B2122u, 2);  /* 0C0B2120 mov.l @(disp,pc),Rn */
	IF(0x0C0B2122u); r8 = R32(r0 + r4); UPD(0x0C0B2124u, 1);  /* 0C0B2122 mov.l @(r0,Rm),Rn */
	r12 = 0xC0BAB50u; UPD(0x0C0B2126u, 1);  /* 0C0B2124 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C0B2126 mov #imm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0B212Au, 2);  /* 0C0B2128 mov.l Rm,@(disp,Rn) */
	r6 = R32(r10 + 0x28u); UPD(0x0C0B212Cu, 1);  /* 0C0B212A mov.l @(disp,Rm),Rn */
	IF(0x0C0B212Cu); { u32 t_ = r12; PR = 0x0C0B2130u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAB50, 0x0C0BAB50u, 0x0C0B2130u); }  /* 0C0B212C jsr @Rn */
L_0C0B2130: BLKS(0x0C0B2130u);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B2132u, 1);  /* 0C0B2130 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B2132 add #imm,Rn */
	{ W8(r11, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0B122Eu, 4); goto L_0C0B122E; }  /* 0C0B2134 bra */
}

void blk_f_0C0B20C0(sh3_t *c)
{
	LOCALS;
L_0C0B20C0: BLKS(0x0C0B20C0u);
	W8(r11, r1); UPD(0x0C0B20C2u, 1);  /* 0C0B20C0 mov.b Rm,@Rn */
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
}

void blk_f_0C0B2140(sh3_t *c)
{
	LOCALS;
L_0C0B2140: BLKS(0x0C0B2140u);
	r1 = 0xC0A9CB0u; UPD(0x0C0B2142u, 1);  /* 0C0B2140 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFEDFEu; UPD(0x0C0B2144u, 1);  /* 0C0B2142 mov.w @(disp,pc),Rn */
	IF(0x0C0B2144u); { u32 tv_ = (r13 + 0x0C0B2148u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2144 braf Rn */
}

void blk_f_0C0B2190(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2190;
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
L_0C0B18C2: BLKS(0x0C0B18C2u);
	W32(r3 + 0x38u, r1); UPD(0x0C0B18C4u, 1);  /* 0C0B18C2 mov.l Rm,@(disp,Rn) */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B18C4 bra */
L_0C0B2190: BLKS(0x0C0B2190u);
	r10 = 0xC0A8B50u; UPD(0x0C0B2192u, 1);  /* 0C0B2190 mov.l @(disp,pc),Rn */
	IF(0x0C0B2192u); { u32 t_ = r10; PR = 0x0C0B2196u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B2196u); }  /* 0C0B2192 jsr @Rn */
L_0C0B2196: BLKS(0x0C0B2196u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2196 exts.w Rm,Rn */
	IF(0x0C0B2198u); T = (s32)r8 >= 0;  /* 0C0B2198 cmp/pz Rn */
	{ u32 c_ = !T; r13 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B21EEu, 5); goto L_0C0B21EE; } UPD(0x0C0B219Eu, 1); goto L_0C0B219E; }  /* 0C0B219A bf/s */
L_0C0B219E: BLKS(0x0C0B219Eu);
	r2 = 0xB4u; UPD(0x0C0B21A0u, 1);  /* 0C0B219E mov.w @(disp,pc),Rn */
	IF(0x0C0B21A0u); MACL = r13 * r2;  /* 0C0B21A0 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B21A4u, 3);  /* 0C0B21A2 mov.l @(disp,pc),Rn */
	IF(0x0C0B21A4u); r3 = MACL;  /* 0C0B21A4 sts macl,Rn */
	r3 += r11;  /* 0C0B21A6 add Rm,Rn */
	r9 = R32(r3); UPD(0x0C0B21AAu, 3);  /* 0C0B21A8 mov.l @Rm,Rn */
	IF(0x0C0B21AAu); MACL = r8 * r2;  /* 0C0B21AA mul.l Rm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C0B21AEu, 3);  /* 0C0B21AC mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0B21AE and Rm,Rn */
	W32(r3, r9); UPD(0x0C0B21B2u, 2);  /* 0C0B21B0 mov.l Rm,@Rn */
	IF(0x0C0B21B2u); r12 = MACL;  /* 0C0B21B2 sts macl,Rn */
	r12 += r11;  /* 0C0B21B4 add Rm,Rn */
	r8 = R32(r12); UPD(0x0C0B21B8u, 3);  /* 0C0B21B6 mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B21BAu, 1);  /* 0C0B21B8 mov.l @(disp,pc),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C0B21BCu, 1);  /* 0C0B21BA mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C0B21BC and Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0B21C0u, 2);  /* 0C0B21BE mov.l @(disp,Rm),Rn */
	r9 |= r8;  /* 0C0B21C0 or Rm,Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0B21C4u, 2);  /* 0C0B21C2 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x30u); UPD(0x0C0B21C6u, 1);  /* 0C0B21C4 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C0B21C6 add Rm,Rn */
	r6 += r0;  /* 0C0B21C8 add Rm,Rn */
	r1 = R32(r12 + 0x38u); UPD(0x0C0B21CCu, 3);  /* 0C0B21CA mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r4); UPD(0x0C0B21CEu, 1);  /* 0C0B21CC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r6); UPD(0x0C0B21D0u, 1);  /* 0C0B21CE mov.l Rm,@(disp,Rn) */
	{ W32(r3, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0B18C2u, 3); goto L_0C0B18C2; }  /* 0C0B21D0 bra */
L_0C0B21EE: BLKS(0x0C0B21EEu);
	r4 = 0xFFFFED4Eu; UPD(0x0C0B21F0u, 1);  /* 0C0B21EE mov.w @(disp,pc),Rn */
	IF(0x0C0B21F0u); { u32 tv_ = (r4 + 0x0C0B21F4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B21F0 braf Rn */
}

void blk_f_0C0B21E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B21E0;
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
L_0C0B1656: BLKS(0x0C0B1656u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C0B1450u, 3); goto L_0C0B1450; }  /* 0C0B1656 bra */
L_0C0B1830: BLKS(0x0C0B1830u);
	r1 = 0xFFFFBFFFu; UPD(0x0C0B1832u, 1);  /* 0C0B1830 mov.w @(disp,pc),Rn */
	r0 &= r1;  /* 0C0B1832 and Rm,Rn */
	{ W32(r9, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0B1656u, 4); goto L_0C0B1656; }  /* 0C0B1834 bra */
L_0C0B1BFC: BLKS(0x0C0B1BFCu);
	r15 += 0x4u;  /* 0C0B1BFC add #imm,Rn */
	r13 = 0xFFFFEFFAu; UPD(0x0C0B1C00u, 2);  /* 0C0B1BFE mov.w @(disp,pc),Rn */
	IF(0x0C0B1C00u); { u32 tv_ = (r13 + 0x0C0B1C04u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B1C00 braf Rn */
L_0C0B21E0: BLKS(0x0C0B21E0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0B21E2u, 1);  /* 0C0B21E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B21E2u); { u32 t_ = r11; PR = 0x0C0B21E6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B21E6u); }  /* 0C0B21E2 jsr @Rn */
L_0C0B21E6: BLKS(0x0C0B21E6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B21E6 exts.w Rm,Rn */
	IF(0x0C0B21E8u); T = (s32)r8 >= 0;  /* 0C0B21E8 cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B21F6u, 5); goto L_0C0B21F6; } UPD(0x0C0B21EEu, 1); goto L_0C0B21EE; }  /* 0C0B21EA bt/s */
L_0C0B21EE: BLKS(0x0C0B21EEu);
	r4 = 0xFFFFED4Eu; UPD(0x0C0B21F0u, 1);  /* 0C0B21EE mov.w @(disp,pc),Rn */
	IF(0x0C0B21F0u); { u32 tv_ = (r4 + 0x0C0B21F4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B21F0 braf Rn */
L_0C0B21F6: BLKS(0x0C0B21F6u);
	r4 = 0xB4u; UPD(0x0C0B21F8u, 1);  /* 0C0B21F6 mov.w @(disp,pc),Rn */
	IF(0x0C0B21F8u); MACL = r9 * r4;  /* 0C0B21F8 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B21FCu, 3);  /* 0C0B21FA mov.l @(disp,pc),Rn */
	IF(0x0C0B21FCu); r9 = MACL;  /* 0C0B21FC sts macl,Rn */
	IF(0x0C0B21FEu); MACL = r8 * r4;  /* 0C0B21FE mul.l Rm,Rn */
	r9 += r6;  /* 0C0B2200 add Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C0B2204u, 5);  /* 0C0B2202 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2204u); r4 = MACL;  /* 0C0B2204 sts macl,Rn */
	r4 += r6;  /* 0C0B2206 add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C0B220Au, 3);  /* 0C0B2208 mov.l @(disp,Rm),Rn */
	r0 = 0xA8u; UPD(0x0C0B220Cu, 1);  /* 0C0B220A mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0B220C add Rm,Rn */
	r5 = r9;  /* 0C0B220E mov Rm,Rn */
	r10 = R32(r9); UPD(0x0C0B2212u, 3);  /* 0C0B2210 mov.l @Rm,Rn */
	r5 += r0;  /* 0C0B2212 add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C0B2216u, 2);  /* 0C0B2214 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C0B2216 add Rm,Rn */
	r10 &= r2;  /* 0C0B2218 and Rm,Rn */
	r0 += 0x1u;  /* 0C0B221A add #imm,Rn */
	W32(r9, r10); UPD(0x0C0B221Eu, 4);  /* 0C0B221C mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C0B221E add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B2222u, 2);  /* 0C0B2220 mov.b @Rm,Rn */
	r13 = 0xAFu; UPD(0x0C0B2224u, 1);  /* 0C0B2222 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B2224 mov Rm,Rn */
	r12 = R32(r4); UPD(0x0C0B2228u, 2);  /* 0C0B2226 mov.l @Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C0B222Au, 1);  /* 0C0B2228 mov.l Rm,@(disp,Rn) */
	r1 = 0x13000100u; UPD(0x0C0B222Cu, 1);  /* 0C0B222A mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C0B222Eu, 1);  /* 0C0B222C mov.l @(disp,Rm),Rn */
	r12 &= r1;  /* 0C0B222E and Rm,Rn */
	IF(0x0C0B2230u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0B2232u, 2);  /* 0C0B2230 mov.b @(r0,Rm),Rn */
	r10 |= r12;  /* 0C0B2232 or Rm,Rn */
	r11 = R32(r9 + 0x30u); UPD(0x0C0B2236u, 2);  /* 0C0B2234 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B2236 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0B223Au, 2);  /* 0C0B2238 mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C0B223A add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B223Eu, 2);  /* 0C0B223C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r8); UPD(0x0C0B2240u, 1);  /* 0C0B223E mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0B2240 tst Rm,Rn */
	W32(r9, r10); UPD(0x0C0B2244u, 2);  /* 0C0B2242 mov.l Rm,@Rn */
	W8(r5, r6); UPD(0x0C0B2246u, 1);  /* 0C0B2244 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r9 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B224Eu, 3); goto L_0C0B224E; } UPD(0x0C0B224Au, 1); goto L_0C0B224A; }  /* 0C0B2246 bf/s */
L_0C0B224A: BLKS(0x0C0B224Au);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0B2380u, 3); goto L_0C0B2380; }  /* 0C0B224A bra */
L_0C0B224E: BLKS(0x0C0B224Eu);
	T = r0 == 0x7u;  /* 0C0B224E cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B22A0u, 4); goto L_0C0B22A0; } UPD(0x0C0B2254u, 1); goto L_0C0B2254; }  /* 0C0B2250 bt/s */
L_0C0B2254: BLKS(0x0C0B2254u);
	r8 = 0xB4u; UPD(0x0C0B2256u, 1);  /* 0C0B2254 mov.w @(disp,pc),Rn */
	IF(0x0C0B2256u); MACL = r3 * r8;  /* 0C0B2256 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B225Au, 3);  /* 0C0B2258 mov.l @(disp,pc),Rn */
	IF(0x0C0B225Au); r8 = MACL;  /* 0C0B225A sts macl,Rn */
	r8 += r2;  /* 0C0B225C add Rm,Rn */
	r2 = 0x99u; UPD(0x0C0B2260u, 3);  /* 0C0B225E mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C0B2260 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2264u, 2);  /* 0C0B2262 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0B2264 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C0B2266 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B2268 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2290u, 6); goto L_0C0B2290; } UPD(0x0C0B226Eu, 1); goto L_0C0B226E; }  /* 0C0B226A bf/s */
L_0C0B226E: BLKS(0x0C0B226Eu);
	r0 = 0x88u; UPD(0x0C0B2270u, 1);  /* 0C0B226E mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0B2270 mov #imm,Rn */
	IF(0x0C0B2272u); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B2274u, 2);  /* 0C0B2272 mov.w @(r0,Rm),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C0B2276u, 1);  /* 0C0B2274 mov.l @(disp,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B2278u, 1);  /* 0C0B2276 mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0B2278 add Rm,Rn */
	W8(r2, r13); UPD(0x0C0B227Cu, 2);  /* 0C0B227A mov.b Rm,@Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C0B227Eu, 1);  /* 0C0B227C mov.l Rm,@(disp,Rn) */
	IF(0x0C0B227Eu); { u32 t_ = r9; PR = 0x0C0B2282u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2282u); }  /* 0C0B227E jsr @Rn */
L_0C0B2282: BLKS(0x0C0B2282u);
	r5 = R32(r8 + 0xCu); UPD(0x0C0B2284u, 1);  /* 0C0B2282 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0B2284 tst Rm,Rn */
	if (!T) { UPD(0x0C0B2290u, 4); goto L_0C0B2290; }  /* 0C0B2286 bf */
L_0C0B2288: BLKS(0x0C0B2288u);
	r1 = R32(r8); UPD(0x0C0B228Au, 1);  /* 0C0B2288 mov.l @Rm,Rn */
	r10 = 0x4000u; UPD(0x0C0B228Cu, 1);  /* 0C0B228A mov.w @(disp,pc),Rn */
	r1 |= r10;  /* 0C0B228C or Rm,Rn */
	W32(r8, r1); UPD(0x0C0B2290u, 2);  /* 0C0B228E mov.l Rm,@Rn */
L_0C0B2290: BLKS(0x0C0B2290u);
	r13 = 0xFFFFE968u; UPD(0x0C0B2292u, 1);  /* 0C0B2290 mov.w @(disp,pc),Rn */
	IF(0x0C0B2292u); { u32 tv_ = (r13 + 0x0C0B2296u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2292 braf Rn */
L_0C0B22A0: BLKS(0x0C0B22A0u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B22A2u, 1);  /* 0C0B22A0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0B22A2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B22A6u, 2);  /* 0C0B22A4 mov.l @Rm,Rn */
	IF(0x0C0B22A6u); { u32 t_ = r12; PR = 0x0C0B22AAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B22AAu); }  /* 0C0B22A6 jsr @Rn */
L_0C0B22AA: BLKS(0x0C0B22AAu);
	T = (r0 & r0) == 0;  /* 0C0B22AA tst Rm,Rn */
	if (T) { UPD(0x0C0B2290u, 4); goto L_0C0B2290; }  /* 0C0B22AC bt */
L_0C0B22AE: BLKS(0x0C0B22AEu);
	r7 = 0x2u;  /* 0C0B22AE mov #imm,Rn */
	r8 = 0x9Fu; UPD(0x0C0B22B2u, 2);  /* 0C0B22B0 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0B22B2 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B22B6u, 2);  /* 0C0B22B4 mov.b @Rm,Rn */
	r0 = r11 & 0xFF;  /* 0C0B22B6 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C0B22B8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B22E0u, 5); goto L_0C0B22E0; }  /* 0C0B22BA bf */
L_0C0B22BC: BLKS(0x0C0B22BCu);
	T = r0 == 0x3u;  /* 0C0B22BC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B2290u, 4); goto L_0C0B2290; }  /* 0C0B22BE bf */
L_0C0B22C0: BLKS(0x0C0B22C0u);
	r2 = R32(r9 + 0xCu); UPD(0x0C0B22C2u, 1);  /* 0C0B22C0 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C0B22C2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B22C6u, 2);  /* 0C0B22C4 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B22C6 add #imm,Rn */
	IF(0x0C0B22C8u); W16(r0 + r9, r4); UPD(0x0C0B22CAu, 2);  /* 0C0B22C8 mov.w Rm,@(r0,Rn) */
	W32(r9 + 0xCu, r2); UPD(0x0C0B22CCu, 1);  /* 0C0B22CA mov.l Rm,@(disp,Rn) */
	r9 = 0xC0A8AE0u; UPD(0x0C0B22CEu, 1);  /* 0C0B22CC mov.l @(disp,pc),Rn */
	IF(0x0C0B22CEu); { u32 t_ = r9; PR = 0x0C0B22D2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B22D2u); }  /* 0C0B22CE jsr @Rn */
L_0C0B22D2: BLKS(0x0C0B22D2u);
	r13 = 0xFFFFEB5Cu; UPD(0x0C0B22D4u, 1);  /* 0C0B22D2 mov.w @(disp,pc),Rn */
	IF(0x0C0B22D4u); { u32 tv_ = (r13 + 0x0C0B22D8u); u32 t_ = PHYS(tv_); r1 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B22D4 braf Rn */
L_0C0B22E0: BLKS(0x0C0B22E0u);
	r13 = 0xC069B50u; UPD(0x0C0B22E2u, 1);  /* 0C0B22E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B22E2u); { u32 t_ = r13; PR = 0x0C0B22E6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B22E6u); }  /* 0C0B22E2 jsr @Rn */
L_0C0B22E6: BLKS(0x0C0B22E6u);
	r3 = (u32)(s32)(s16)r0;  /* 0C0B22E6 exts.w Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C0B22EAu, 2);  /* 0C0B22E8 mov.w @(disp,pc),Rn */
	IF(0x0C0B22EAu); MACL = r3 * r0;  /* 0C0B22EA mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B22EEu, 3);  /* 0C0B22EC mov.l @(disp,pc),Rn */
	r12 = 0xC068E60u; UPD(0x0C0B22F0u, 1);  /* 0C0B22EE mov.l @(disp,pc),Rn */
	IF(0x0C0B22F0u); r11 = MACL;  /* 0C0B22F0 sts macl,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0B22F4u, 2);  /* 0C0B22F2 mov.l @(disp,Rm),Rn */
	r11 += r7;  /* 0C0B22F4 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0B22F8u, 2);  /* 0C0B22F6 mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x10u); UPD(0x0C0B22FAu, 1);  /* 0C0B22F8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B22FAu); { u32 t_ = r12; PR = 0x0C0B22FEu; r7 = R32(r11 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B22FEu); }  /* 0C0B22FA jsr @Rn */
L_0C0B22FE: BLKS(0x0C0B22FEu);
	r5 = (u32)(s32)(s16)r0;  /* 0C0B22FE exts.w Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B2302u, 2);  /* 0C0B2300 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFFCu;  /* 0C0B2302 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B2306u, 2);  /* 0C0B2304 mov.b @Rm,Rn */
	r10 = 0xC1E4E5Cu; UPD(0x0C0B2308u, 1);  /* 0C0B2306 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C0B2308 extu.b Rm,Rn */
	r4 = R32(r9 + 0x8u); UPD(0x0C0B230Cu, 2);  /* 0C0B230A mov.l @(disp,Rm),Rn */
	IF(0x0C0B230Cu); r0 <<= 2;  /* 0C0B230C shll2 Rn */
	IF(0x0C0B230Eu); r13 = R32(r0 + r10); UPD(0x0C0B2310u, 2);  /* 0C0B230E mov.l @(r0,Rm),Rn */
	IF(0x0C0B2310u); r4 <<= 2;  /* 0C0B2310 shll2 Rn */
	r6 = 0xC1E4E68u; UPD(0x0C0B2314u, 2);  /* 0C0B2312 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFF44u; UPD(0x0C0B2316u, 1);  /* 0C0B2314 mov.w @(disp,pc),Rn */
	r4 += r6;  /* 0C0B2316 add Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0B231Au, 2);  /* 0C0B2318 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C0B231Cu, 1);  /* 0C0B231A mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C0B231C add Rm,Rn */
	IF(0x0C0B231Eu); r3 = R32(r0 + r4); UPD(0x0C0B2320u, 2);  /* 0C0B231E mov.l @(r0,Rm),Rn */
	r2 = 0x20000u; UPD(0x0C0B2322u, 1);  /* 0C0B2320 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0B2322 add Rm,Rn */
	r9 = 0xC0BA7F0u; UPD(0x0C0B2326u, 2);  /* 0C0B2324 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B2326 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C0B232Au, 2);  /* 0C0B2328 mov.l Rm,@Rn */
	IF(0x0C0B232Au); { u32 t_ = r9; PR = 0x0C0B232Eu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C0B232Eu); }  /* 0C0B232A jsr @Rn */
L_0C0B232E: BLKS(0x0C0B232Eu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B2330u, 1);  /* 0C0B232E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0B2330 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B1BFCu, 4); goto L_0C0B1BFC; }  /* 0C0B2332 bra */
L_0C0B2380: BLKS(0x0C0B2380u);
	r13 = 0xC0BC1B0u; UPD(0x0C0B2382u, 1);  /* 0C0B2380 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2384u, 1);  /* 0C0B2382 mov.l @Rm,Rn */
	IF(0x0C0B2384u); { u32 t_ = r13; PR = 0x0C0B2388u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B2388u); }  /* 0C0B2384 jsr @Rn */
L_0C0B2388: BLKS(0x0C0B2388u);
	T = (r0 & r0) == 0;  /* 0C0B2388 tst Rm,Rn */
	if (T) { UPD(0x0C0B2402u, 4); goto L_0C0B2402; }  /* 0C0B238A bt */
L_0C0B238C: BLKS(0x0C0B238Cu);
	r7 = R32(r9 + 0xCu); UPD(0x0C0B238Eu, 1);  /* 0C0B238C mov.l @(disp,Rm),Rn */
	r12 = 0x1u;  /* 0C0B238E mov #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B2392u, 2);  /* 0C0B2390 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C0B2392 add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B2396u, 2);  /* 0C0B2394 mov.w @(disp,pc),Rn */
	W32(r9 + 0xCu, r7); UPD(0x0C0B2398u, 1);  /* 0C0B2396 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2398u); W16(r0 + r9, r12); UPD(0x0C0B239Au, 1);  /* 0C0B2398 mov.w Rm,@(r0,Rn) */
	IF(0x0C0B239Au); { u32 t_ = r10; PR = 0x0C0B239Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B239Eu); }  /* 0C0B239A jsr @Rn */
L_0C0B239E: BLKS(0x0C0B239Eu);
	{ r0 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(0x0C0B1830u, 3); goto L_0C0B1830; }  /* 0C0B239E bra */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
}

void blk_f_0C0B23B0(sh3_t *c)
{
	LOCALS;
L_0C0B23B0: BLKS(0x0C0B23B0u);
	r10 = 0xB4u; UPD(0x0C0B23B2u, 1);  /* 0C0B23B0 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C0B23B4u, 1);  /* 0C0B23B2 mov.l @Rm,Rn */
	IF(0x0C0B23B4u); MACL = r7 * r10;  /* 0C0B23B4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B23B8u, 3);  /* 0C0B23B6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23B8u); r9 = MACL;  /* 0C0B23B8 sts macl,Rn */
	r5 = 0xC3CC310u; UPD(0x0C0B23BCu, 2);  /* 0C0B23BA mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C0B23BC add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0B23BE add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B23C2u, 3);  /* 0C0B23C0 mov.w @Rm,Rn */
	r12 = R32(r5); UPD(0x0C0B23C4u, 1);  /* 0C0B23C2 mov.l @Rm,Rn */
	r9 += 0xFFFFFFC4u;  /* 0C0B23C4 add #imm,Rn */
	r12 += r1;  /* 0C0B23C6 add Rm,Rn */
	W32(r5, r12); UPD(0x0C0B23CAu, 3);  /* 0C0B23C8 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0B23CA mov Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C0B23CEu, 2);  /* 0C0B23CC mov.w @(disp,pc),Rn */
	IF(0x0C0B23CEu); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0B23D0u, 1);  /* 0C0B23CE mov.b @(r0,Rm),Rn */
	r0 = r8 & 0xFF;  /* 0C0B23D0 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B23D2 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B23DCu, 5); goto L_0C0B23DC; } goto L_0C0B23D8; }  /* 0C0B23D4 bf/s */
L_0C0B23D8: BLKS(0x0C0B23D8u);
	{ IF(0x0C0B23DAu); ; /* slot nop */ UPD(0x0C0B26D0u, 4); goto L_0C0B26D0; }  /* 0C0B23D8 bra */
L_0C0B23DC: BLKS(0x0C0B23DCu);
	{ u32 c_ = T; r3 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B2460u, 3); goto L_0C0B2460; } UPD(0x0C0B23E0u, 1); goto L_0C0B23E0; }  /* 0C0B23DC bt/s */
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B2460: BLKS(0x0C0B2460u);
	r0 = 0xA0u; UPD(0x0C0B2462u, 1);  /* 0C0B2460 mov.w @(disp,pc),Rn */
	IF(0x0C0B2462u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B2464u, 1);  /* 0C0B2462 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C0B2464 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C0B2466 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B2524u, 5); goto L_0C0B2524; }  /* 0C0B2468 bt */
L_0C0B246A: BLKS(0x0C0B246Au);
	r0 = 0xC0B24B0u;  /* 0C0B246A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B246C add Rm,Rn */
	IF(0x0C0B246Eu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B2470u, 3);  /* 0C0B246E mov.w @(r0,Rm),Rn */
	IF(0x0C0B2470u); { u32 tv_ = (r5 + 0x0C0B2474u); u32 t_ = PHYS(tv_); IF(0x0C0B2472u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2470 braf Rn */
L_0C0B2524: BLKS(0x0C0B2524u);
	r7 = 0xB4u; UPD(0x0C0B2526u, 1);  /* 0C0B2524 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C0B2528u, 1);  /* 0C0B2526 mov.l @Rm,Rn */
	IF(0x0C0B2528u); MACL = r11 * r7;  /* 0C0B2528 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B252Cu, 3);  /* 0C0B252A mov.l @(disp,pc),Rn */
	IF(0x0C0B252Cu); r13 = MACL;  /* 0C0B252C sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0B2530u, 2);  /* 0C0B252E mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B2530 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C0B2534u, 2);  /* 0C0B2532 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0B2534 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B2538u, 2);  /* 0C0B2536 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0B2538 add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0B253Cu, 2);  /* 0C0B253A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B253Eu, 1);  /* 0C0B253C mov.w @Rm,Rn */
	IF(0x0C0B253Eu); { u32 t_ = r9; PR = 0x0C0B2542u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B2542u); }  /* 0C0B253E jsr @Rn */
L_0C0B2542: BLKS(0x0C0B2542u);
	W32(r13 + 0x2Cu, r0); UPD(0x0C0B2544u, 1);  /* 0C0B2542 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2546u, 1);  /* 0C0B2544 mov.w @Rm,Rn */
	IF(0x0C0B2546u); { u32 t_ = r10; PR = 0x0C0B254Au; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B254Au); }  /* 0C0B2546 jsr @Rn */
L_0C0B254A: BLKS(0x0C0B254Au);
	r6 = R32(r13 + 0x24u); UPD(0x0C0B254Cu, 1);  /* 0C0B254A mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C0B254Eu, 1);  /* 0C0B254C mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C0B2550u, 1);  /* 0C0B254E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0B2550 add Rm,Rn */
	r6 += r1;  /* 0C0B2552 add Rm,Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C0B2556u, 3);  /* 0C0B2554 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x24u, r6); UPD(0x0C0B2558u, 1);  /* 0C0B2556 mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B2558 bra */
L_0C0B26D0: BLKS(0x0C0B26D0u);
	r13 = 0xC0A8B50u; UPD(0x0C0B26D2u, 1);  /* 0C0B26D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B26D2u); { u32 t_ = r13; PR = 0x0C0B26D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B26D6u); }  /* 0C0B26D2 jsr @Rn */
L_0C0B26D6: BLKS(0x0C0B26D6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B26D6 exts.w Rm,Rn */
	IF(0x0C0B26D8u); T = (s32)r8 >= 0;  /* 0C0B26D8 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0B26DCu); MACL = r8 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B26E6u, 6); goto L_0C0B26E6; } goto L_0C0B26DE; }  /* 0C0B26DA bt/s */
L_0C0B26DE: BLKS(0x0C0B26DEu);
	r4 = 0xFFFFE85Eu; UPD(0x0C0B26E0u, 3);  /* 0C0B26DE mov.w @(disp,pc),Rn */
	IF(0x0C0B26E0u); { u32 tv_ = (r4 + 0x0C0B26E4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B26E0 braf Rn */
L_0C0B26E6: BLKS(0x0C0B26E6u);
	r3 = R32(r9 + 0x30u); UPD(0x0C0B26E8u, 1);  /* 0C0B26E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B26E8u); r4 = MACL;  /* 0C0B26E8 sts macl,Rn */
	r4 += r11;  /* 0C0B26EA add Rm,Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C0B26EEu, 3);  /* 0C0B26EC mov.l @(disp,Rm),Rn */
	r10 = 0x4u;  /* 0C0B26EE mov #imm,Rn */
	r0 += r3;  /* 0C0B26F0 add Rm,Rn */
	W32(r9 + 0x28u, r0); UPD(0x0C0B26F4u, 3);  /* 0C0B26F2 mov.l Rm,@(disp,Rn) */
	r0 = 0xA0u; UPD(0x0C0B26F6u, 1);  /* 0C0B26F4 mov.w @(disp,pc),Rn */
	r6 = R32(r4 + 0x24u); UPD(0x0C0B26F8u, 1);  /* 0C0B26F6 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C0B26FAu, 1);  /* 0C0B26F8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B26FAu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B26FCu, 1);  /* 0C0B26FA mov.b @(r0,Rm),Rn */
	r6 += r5;  /* 0C0B26FC add Rm,Rn */
	r2 = r11 & 0xFF;  /* 0C0B26FE extu.b Rm,Rn */
	T = r2 > r10;  /* 0C0B2700 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B275Cu, 6); goto L_0C0B275C; } UPD(0x0C0B2706u, 1); goto L_0C0B2706; }  /* 0C0B2702 bt/s */
L_0C0B2706: BLKS(0x0C0B2706u);
	r0 = 0xC0B2718u;  /* 0C0B2706 mova @(disp,pc),r0 */
	IF(0x0C0B2708u); r9 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B270Au, 2);  /* 0C0B2708 mov.b @(r0,Rm),Rn */
	r9 = r9 & 0xFF;  /* 0C0B270A extu.b Rm,Rn */
	IF(0x0C0B270Cu); { u32 tv_ = (r9 + 0x0C0B2710u); u32 t_ = PHYS(tv_); IF(0x0C0B270Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B270C braf Rn */
L_0C0B275C: BLKS(0x0C0B275Cu);
	{ IF(0x0C0B275Eu); ; /* slot nop */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B275C bra */
}

void blk_f_0C0B24C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B24C0;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B24C0: BLKS(0x0C0B24C0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B24C2u, 1);  /* 0C0B24C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B24C2u); { u32 t_ = r8; PR = 0x0C0B24C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B24C6u); }  /* 0C0B24C2 jsr @Rn */
L_0C0B24C6: BLKS(0x0C0B24C6u);
	r1 = 0xB4u; UPD(0x0C0B24C8u, 1);  /* 0C0B24C6 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0B24C8 exts.w Rm,Rn */
	IF(0x0C0B24CAu); MACL = r12 * r1;  /* 0C0B24CA mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B24CEu, 4);  /* 0C0B24CC mov.l @(disp,pc),Rn */
	IF(0x0C0B24CEu); r0 = MACL;  /* 0C0B24CE sts macl,Rn */
	IF(0x0C0B24D0u); r0 = R32(r0 + r2); UPD(0x0C0B24D2u, 2);  /* 0C0B24D0 mov.l @(r0,Rm),Rn */
	IF(0x0C0B24D2u); T = r12 >> 31; r12 = (r12 << 1) | T;  /* 0C0B24D2 rotl Rn */
	IF(0x0C0B24D4u); r0 >>= 8;  /* 0C0B24D4 shlr8 Rn */
	IF(0x0C0B24D6u); r9 = T;  /* 0C0B24D6 movt Rn */
	r0 &= 0x1u;  /* 0C0B24D8 and #imm,r0 */
	r9 |= r0;  /* 0C0B24DA or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0B24DC tst Rm,Rn */
	{ u32 c_ = T; r11 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B2560u, 9); goto L_0C0B2560; } UPD(0x0C0B24E2u, 1); goto L_0C0B24E2; }  /* 0C0B24DE bt/s */
L_0C0B24E2: BLKS(0x0C0B24E2u);
	IF(0x0C0B24E2u); MACL = r11 * r1;  /* 0C0B24E2 mul.l Rm,Rn */
	r7 = 0xFF000000u; UPD(0x0C0B24E6u, 3);  /* 0C0B24E4 mov.l @(disp,pc),Rn */
	IF(0x0C0B24E6u); r0 = MACL;  /* 0C0B24E6 sts macl,Rn */
	r0 += r2;  /* 0C0B24E8 add Rm,Rn */
	r0 += 0x5Cu;  /* 0C0B24EA add #imm,Rn */
	W32(r0, r7); UPD(0x0C0B24EEu, 4);  /* 0C0B24EC mov.l Rm,@Rn */
	r2 = 0x3u;  /* 0C0B24EE mov #imm,Rn */
	r0 += 0xFFFFFFA4u;  /* 0C0B24F0 add #imm,Rn */
	r10 = R32(r0 + 0x28u); UPD(0x0C0B24F4u, 3);  /* 0C0B24F2 mov.l @(disp,Rm),Rn */
	r0 += 0x60u;  /* 0C0B24F4 add #imm,Rn */
	W32(r0, r10); UPD(0x0C0B24F8u, 2);  /* 0C0B24F6 mov.l Rm,@Rn */
	r13 = 0xA0u; UPD(0x0C0B24FAu, 1);  /* 0C0B24F8 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFA0u;  /* 0C0B24FA add #imm,Rn */
	IF(0x0C0B24FCu); W8(r0 + r13, r2); UPD(0x0C0B24FEu, 2);  /* 0C0B24FC mov.b Rm,@(r0,Rn) */
L_0C0B24FE: BLKS(0x0C0B24FEu);
	r7 = R32(r14); UPD(0x0C0B2500u, 1);  /* 0C0B24FE mov.l @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C0B2502u, 1);  /* 0C0B2500 mov.w @(disp,pc),Rn */
	IF(0x0C0B2502u); MACL = r7 * r10;  /* 0C0B2502 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B2506u, 3);  /* 0C0B2504 mov.l @(disp,pc),Rn */
	IF(0x0C0B2506u); r13 = MACL;  /* 0C0B2506 sts macl,Rn */
	r13 += r1;  /* 0C0B2508 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C0B250Cu, 3);  /* 0C0B250A mov.w @(disp,pc),Rn */
	r9 = r13;  /* 0C0B250C mov Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0B2510u, 2);  /* 0C0B250E mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C0B2510 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C0B2514u, 2);  /* 0C0B2512 mov.l @(disp,Rm),Rn */
	r9 += 0x60u;  /* 0C0B2514 add #imm,Rn */
	r13 += 0x5Cu;  /* 0C0B2516 add #imm,Rn */
	r6 = R32(r13); UPD(0x0C0B251Au, 3);  /* 0C0B2518 mov.l @Rm,Rn */
	r7 = R32(r9); UPD(0x0C0B251Cu, 1);  /* 0C0B251A mov.l @Rm,Rn */
	r9 = 0xC068E60u; UPD(0x0C0B251Eu, 1);  /* 0C0B251C mov.l @(disp,pc),Rn */
	IF(0x0C0B251Eu); { u32 t_ = r9; PR = 0x0C0B2522u; IF(0x0C0B2520u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2522u); }  /* 0C0B251E jsr @Rn */
L_0C0B2522: BLKS(0x0C0B2522u);
	W16(r8, r0); UPD(0x0C0B2524u, 1);  /* 0C0B2522 mov.w Rm,@Rn */
	r7 = 0xB4u; UPD(0x0C0B2526u, 1);  /* 0C0B2524 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C0B2528u, 1);  /* 0C0B2526 mov.l @Rm,Rn */
	IF(0x0C0B2528u); MACL = r11 * r7;  /* 0C0B2528 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B252Cu, 3);  /* 0C0B252A mov.l @(disp,pc),Rn */
	IF(0x0C0B252Cu); r13 = MACL;  /* 0C0B252C sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0B2530u, 2);  /* 0C0B252E mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B2530 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C0B2534u, 2);  /* 0C0B2532 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0B2534 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B2538u, 2);  /* 0C0B2536 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0B2538 add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0B253Cu, 2);  /* 0C0B253A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B253Eu, 1);  /* 0C0B253C mov.w @Rm,Rn */
	IF(0x0C0B253Eu); { u32 t_ = r9; PR = 0x0C0B2542u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B2542u); }  /* 0C0B253E jsr @Rn */
L_0C0B2542: BLKS(0x0C0B2542u);
	W32(r13 + 0x2Cu, r0); UPD(0x0C0B2544u, 1);  /* 0C0B2542 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2546u, 1);  /* 0C0B2544 mov.w @Rm,Rn */
	IF(0x0C0B2546u); { u32 t_ = r10; PR = 0x0C0B254Au; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B254Au); }  /* 0C0B2546 jsr @Rn */
L_0C0B254A: BLKS(0x0C0B254Au);
	r6 = R32(r13 + 0x24u); UPD(0x0C0B254Cu, 1);  /* 0C0B254A mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C0B254Eu, 1);  /* 0C0B254C mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C0B2550u, 1);  /* 0C0B254E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0B2550 add Rm,Rn */
	r6 += r1;  /* 0C0B2552 add Rm,Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C0B2556u, 3);  /* 0C0B2554 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x24u, r6); UPD(0x0C0B2558u, 1);  /* 0C0B2556 mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B2558 bra */
L_0C0B2560: BLKS(0x0C0B2560u);
	r5 = R32(r14); UPD(0x0C0B2562u, 1);  /* 0C0B2560 mov.l @Rm,Rn */
	r4 = 0x40u;  /* 0C0B2562 mov #imm,Rn */
	IF(0x0C0B2564u); MACL = r5 * r1;  /* 0C0B2564 mul.l Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0B2568u, 4);  /* 0C0B2566 mov.l @(disp,pc),Rn */
	IF(0x0C0B2568u); r12 = MACL;  /* 0C0B2568 sts macl,Rn */
	IF(0x0C0B256Au); { u32 t_ = r8; PR = 0x0C0B256Eu; r12 += r2; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B256Eu); }  /* 0C0B256A jsr @Rn */
L_0C0B256E: BLKS(0x0C0B256Eu);
	r6 = 0xD0u; UPD(0x0C0B2570u, 1);  /* 0C0B256E mov.w @(disp,pc),Rn */
	r12 += 0x5Cu;  /* 0C0B2570 add #imm,Rn */
	r0 += r6;  /* 0C0B2572 add Rm,Rn */
	IF(0x0C0B2574u); r0 <<= 16;  /* 0C0B2574 shll16 Rn */
	r4 = 0x80u; UPD(0x0C0B2578u, 4);  /* 0C0B2576 mov.w @(disp,pc),Rn */
	IF(0x0C0B2578u); { u32 t_ = r8; PR = 0x0C0B257Cu; W32(r12, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B257Cu); }  /* 0C0B2578 jsr @Rn */
L_0C0B257C: BLKS(0x0C0B257Cu);
	r3 = 0x1C0u; UPD(0x0C0B257Eu, 1);  /* 0C0B257C mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFFA4u;  /* 0C0B257E add #imm,Rn */
	r0 += r3;  /* 0C0B2580 add Rm,Rn */
	r12 += 0x60u;  /* 0C0B2582 add #imm,Rn */
	IF(0x0C0B2584u); r0 <<= 16;  /* 0C0B2584 shll16 Rn */
	W32(r12, r0); UPD(0x0C0B2588u, 5);  /* 0C0B2586 mov.l Rm,@Rn */
	r4 = 0xA0u; UPD(0x0C0B258Au, 1);  /* 0C0B2588 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFFA0u;  /* 0C0B258A add #imm,Rn */
	r12 += r4;  /* 0C0B258C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B2590u, 3);  /* 0C0B258E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0B2590 add #imm,Rn */
	{ W8(r12, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B24FEu, 4); goto L_0C0B24FE; }  /* 0C0B2592 bra */
}

void blk_f_0C0B25A0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B25A0;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B251C: BLKS(0x0C0B251Cu);
	r9 = 0xC068E60u; UPD(0x0C0B251Eu, 1);  /* 0C0B251C mov.l @(disp,pc),Rn */
	IF(0x0C0B251Eu); { u32 t_ = r9; PR = 0x0C0B2522u; IF(0x0C0B2520u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2522u); }  /* 0C0B251E jsr @Rn */
L_0C0B2522: BLKS(0x0C0B2522u);
	W16(r8, r0); UPD(0x0C0B2524u, 1);  /* 0C0B2522 mov.w Rm,@Rn */
	r7 = 0xB4u; UPD(0x0C0B2526u, 1);  /* 0C0B2524 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C0B2528u, 1);  /* 0C0B2526 mov.l @Rm,Rn */
	IF(0x0C0B2528u); MACL = r11 * r7;  /* 0C0B2528 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B252Cu, 3);  /* 0C0B252A mov.l @(disp,pc),Rn */
	IF(0x0C0B252Cu); r13 = MACL;  /* 0C0B252C sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0B2530u, 2);  /* 0C0B252E mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B2530 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C0B2534u, 2);  /* 0C0B2532 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0B2534 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B2538u, 2);  /* 0C0B2536 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0B2538 add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0B253Cu, 2);  /* 0C0B253A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B253Eu, 1);  /* 0C0B253C mov.w @Rm,Rn */
	IF(0x0C0B253Eu); { u32 t_ = r9; PR = 0x0C0B2542u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B2542u); }  /* 0C0B253E jsr @Rn */
L_0C0B2542: BLKS(0x0C0B2542u);
	W32(r13 + 0x2Cu, r0); UPD(0x0C0B2544u, 1);  /* 0C0B2542 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2546u, 1);  /* 0C0B2544 mov.w @Rm,Rn */
	IF(0x0C0B2546u); { u32 t_ = r10; PR = 0x0C0B254Au; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B254Au); }  /* 0C0B2546 jsr @Rn */
L_0C0B254A: BLKS(0x0C0B254Au);
	r6 = R32(r13 + 0x24u); UPD(0x0C0B254Cu, 1);  /* 0C0B254A mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C0B254Eu, 1);  /* 0C0B254C mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C0B2550u, 1);  /* 0C0B254E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0B2550 add Rm,Rn */
	r6 += r1;  /* 0C0B2552 add Rm,Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C0B2556u, 3);  /* 0C0B2554 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x24u, r6); UPD(0x0C0B2558u, 1);  /* 0C0B2556 mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B2558 bra */
L_0C0B25A0: BLKS(0x0C0B25A0u);
	r0 = R32(r14); UPD(0x0C0B25A2u, 1);  /* 0C0B25A0 mov.l @Rm,Rn */
	r12 = 0xB4u; UPD(0x0C0B25A4u, 1);  /* 0C0B25A2 mov.w @(disp,pc),Rn */
	IF(0x0C0B25A4u); MACL = r0 * r12;  /* 0C0B25A4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B25A8u, 3);  /* 0C0B25A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B25A8u); r9 = MACL;  /* 0C0B25A8 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0B25ACu, 2);  /* 0C0B25AA mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C0B25AC add Rm,Rn */
	IF(0x0C0B25AEu); r2 = R32(r0 + r9); UPD(0x0C0B25B0u, 2);  /* 0C0B25AE mov.l @(r0,Rm),Rn */
	r11 = 0xFFFFu; UPD(0x0C0B25B2u, 1);  /* 0C0B25B0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C0B25B2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r11 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B25C0u, 4); goto L_0C0B25C0; } goto L_0C0B25B8; }  /* 0C0B25B4 bt/s */
L_0C0B25B8: BLKS(0x0C0B25B8u);
	r4 = 0x400u; UPD(0x0C0B25BAu, 2);  /* 0C0B25B8 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C0B25BA add Rm,Rn */
	IF(0x0C0B25BCu); W32(r0 + r9, r2); UPD(0x0C0B25BEu, 2);  /* 0C0B25BC mov.l Rm,@(r0,Rn) */
	r11 = r9;  /* 0C0B25BE mov Rm,Rn */
	UPD(0x0C0B25C0u, 1);
L_0C0B25C0: BLKS(0x0C0B25C0u);
	r11 += 0x5Cu;  /* 0C0B25C0 add #imm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C0B25C4u, 2);  /* 0C0B25C2 mov.l @(disp,Rm),Rn */
	r7 = R32(r11); UPD(0x0C0B25C6u, 1);  /* 0C0B25C4 mov.l @Rm,Rn */
	r6 = 0x17FFFFu; UPD(0x0C0B25C8u, 1);  /* 0C0B25C6 mov.l @(disp,pc),Rn */
	r10 -= r7;  /* 0C0B25C8 sub Rm,Rn */
	r13 = 0x2FFFFEu; UPD(0x0C0B25CCu, 2);  /* 0C0B25CA mov.l @(disp,pc),Rn */
	r10 += r6;  /* 0C0B25CC add Rm,Rn */
	T = r13 >= r10;  /* 0C0B25CE cmp/hs Rm,Rn */
	r10 = r9;  /* 0C0B25D0 mov Rm,Rn */
	r10 += 0x60u;  /* 0C0B25D2 add #imm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0B25D6u, 5);  /* 0C0B25D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B25D6u); r8 = T;  /* 0C0B25D6 movt Rn */
	r1 = R32(r10); UPD(0x0C0B25DAu, 2);  /* 0C0B25D8 mov.l @Rm,Rn */
	r5 -= r1;  /* 0C0B25DA sub Rm,Rn */
	r5 += r6;  /* 0C0B25DC add Rm,Rn */
	T = r13 >= r5;  /* 0C0B25DE cmp/hs Rm,Rn */
	IF(0x0C0B25E0u); r3 = T;  /* 0C0B25E0 movt Rn */
	r8 &= r3;  /* 0C0B25E2 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0B25E4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B2600u, 9); goto L_0C0B2600; }  /* 0C0B25E6 bf */
L_0C0B25E8: BLKS(0x0C0B25E8u);
	r8 = 0x86u; UPD(0x0C0B25EAu, 1);  /* 0C0B25E8 mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0B25ECu, 1);  /* 0C0B25EA mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C0B25EC add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0B25F0u, 2);  /* 0C0B25EE mov.l @(disp,Rm),Rn */
	r6 = R32(r11); UPD(0x0C0B25F2u, 1);  /* 0C0B25F0 mov.l @Rm,Rn */
	{ r7 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C0B251Cu, 3); goto L_0C0B251C; }  /* 0C0B25F2 bra */
L_0C0B2600: BLKS(0x0C0B2600u);
	r0 = 0xA0u; UPD(0x0C0B2602u, 1);  /* 0C0B2600 mov.w @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0B2602 mov #imm,Rn */
	IF(0x0C0B2604u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B2606u, 2);  /* 0C0B2604 mov.b @(r0,Rm),Rn */
	r8 = 0xC062780u; UPD(0x0C0B2608u, 1);  /* 0C0B2606 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B2608 add #imm,Rn */
	r12 = 0x88u; UPD(0x0C0B260Cu, 2);  /* 0C0B260A mov.w @(disp,pc),Rn */
	IF(0x0C0B260Cu); { u32 t_ = r8; PR = 0x0C0B2610u; IF(0x0C0B260Eu); W8(r0 + r9, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B2610u); }  /* 0C0B260C jsr @Rn */
L_0C0B2610: BLKS(0x0C0B2610u);
	r12 += r9;  /* 0C0B2610 add Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0B2612 add #imm,Rn */
	{ W16(r12, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0B25E8u, 5); goto L_0C0B25E8; }  /* 0C0B2614 bra */
}

void blk_f_0C0B2620(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2620;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B2524: BLKS(0x0C0B2524u);
	r7 = 0xB4u; UPD(0x0C0B2526u, 1);  /* 0C0B2524 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C0B2528u, 1);  /* 0C0B2526 mov.l @Rm,Rn */
	IF(0x0C0B2528u); MACL = r11 * r7;  /* 0C0B2528 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B252Cu, 3);  /* 0C0B252A mov.l @(disp,pc),Rn */
	IF(0x0C0B252Cu); r13 = MACL;  /* 0C0B252C sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0B2530u, 2);  /* 0C0B252E mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C0B2530 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C0B2534u, 2);  /* 0C0B2532 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0B2534 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B2538u, 2);  /* 0C0B2536 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0B2538 add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0B253Cu, 2);  /* 0C0B253A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B253Eu, 1);  /* 0C0B253C mov.w @Rm,Rn */
	IF(0x0C0B253Eu); { u32 t_ = r9; PR = 0x0C0B2542u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B2542u); }  /* 0C0B253E jsr @Rn */
L_0C0B2542: BLKS(0x0C0B2542u);
	W32(r13 + 0x2Cu, r0); UPD(0x0C0B2544u, 1);  /* 0C0B2542 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2546u, 1);  /* 0C0B2544 mov.w @Rm,Rn */
	IF(0x0C0B2546u); { u32 t_ = r10; PR = 0x0C0B254Au; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B254Au); }  /* 0C0B2546 jsr @Rn */
L_0C0B254A: BLKS(0x0C0B254Au);
	r6 = R32(r13 + 0x24u); UPD(0x0C0B254Cu, 1);  /* 0C0B254A mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C0B254Eu, 1);  /* 0C0B254C mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C0B2550u, 1);  /* 0C0B254E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0B2550 add Rm,Rn */
	r6 += r1;  /* 0C0B2552 add Rm,Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C0B2556u, 3);  /* 0C0B2554 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x24u, r6); UPD(0x0C0B2558u, 1);  /* 0C0B2556 mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B2558 bra */
L_0C0B2620: BLKS(0x0C0B2620u);
	r6 = 0xB4u; UPD(0x0C0B2622u, 1);  /* 0C0B2620 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B2624u, 1);  /* 0C0B2622 mov.l @Rm,Rn */
	IF(0x0C0B2624u); MACL = r1 * r6;  /* 0C0B2624 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B2628u, 3);  /* 0C0B2626 mov.l @(disp,pc),Rn */
	IF(0x0C0B2628u); r6 = MACL;  /* 0C0B2628 sts macl,Rn */
	r6 += r0;  /* 0C0B262A add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0B262Eu, 3);  /* 0C0B262C mov.w @(disp,pc),Rn */
	r13 = 0xFFFFFC00u; UPD(0x0C0B2630u, 1);  /* 0C0B262E mov.w @(disp,pc),Rn */
	IF(0x0C0B2630u); r11 = R32(r0 + r6); UPD(0x0C0B2632u, 1);  /* 0C0B2630 mov.l @(r0,Rm),Rn */
	r11 += r13;  /* 0C0B2632 add Rm,Rn */
	IF(0x0C0B2634u); W32(r0 + r6, r11); UPD(0x0C0B2636u, 2);  /* 0C0B2634 mov.l Rm,@(r0,Rn) */
	T = (r11 & r11) == 0;  /* 0C0B2636 tst Rm,Rn */
	r4 = 0x86u; UPD(0x0C0B263Au, 2);  /* 0C0B2638 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0B263A add #imm,Rn */
	r4 += r6;  /* 0C0B263C add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0B2640u, 3);  /* 0C0B263E mov.w @Rm,Rn */
	IF(0x0C0B2640u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0B2642u, 1);  /* 0C0B2640 mov.w @(r0,Rm),Rn */
	r3 += r5;  /* 0C0B2642 add Rm,Rn */
	{ u32 c_ = !T; W16(r4, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0B2650u, 4); goto L_0C0B2650; } UPD(0x0C0B2648u, 1); goto L_0C0B2648; }  /* 0C0B2644 bf/s */
L_0C0B2648: BLKS(0x0C0B2648u);
	r0 += 0x18u;  /* 0C0B2648 add #imm,Rn */
	IF(0x0C0B264Au); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0B264Cu, 2);  /* 0C0B264A mov.b @(r0,Rm),Rn */
	r10 += 0xFFFFFFFEu;  /* 0C0B264C add #imm,Rn */
	IF(0x0C0B264Eu); W8(r0 + r6, r10); UPD(0x0C0B2650u, 2);  /* 0C0B264E mov.b Rm,@(r0,Rn) */
L_0C0B2650: BLKS(0x0C0B2650u);
	{ IF(0x0C0B2652u); ; /* slot nop */ UPD(0x0C0B2524u, 3); goto L_0C0B2524; }  /* 0C0B2650 bra */
}

void blk_f_0C0B2720(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2720;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B2720: BLKS(0x0C0B2720u);
	r7 = 0xB4u; UPD(0x0C0B2722u, 1);  /* 0C0B2720 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFF8u;  /* 0C0B2722 mov #imm,Rn */
	r11 = R32(r14); UPD(0x0C0B2726u, 2);  /* 0C0B2724 mov.l @Rm,Rn */
	IF(0x0C0B2726u); MACL = r11 * r7;  /* 0C0B2726 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B272Au, 3);  /* 0C0B2728 mov.l @(disp,pc),Rn */
	IF(0x0C0B272Au); r7 = MACL;  /* 0C0B272A sts macl,Rn */
	r7 += r10;  /* 0C0B272C add Rm,Rn */
	r13 = r7;  /* 0C0B272E mov Rm,Rn */
	r3 = R32(r7); UPD(0x0C0B2732u, 4);  /* 0C0B2730 mov.l @Rm,Rn */
	r13 += 0x50u;  /* 0C0B2732 add #imm,Rn */
	r12 = R32(r13); UPD(0x0C0B2736u, 2);  /* 0C0B2734 mov.l @Rm,Rn */
	r0 = r3;  /* 0C0B2736 mov Rm,Rn */
	r1 = 0xA8Bu; UPD(0x0C0B273Au, 2);  /* 0C0B2738 mov.w @(disp,pc),Rn */
	IF(0x0C0B273Au); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B273A shad Rm,Rn */
	r12 += 0x1u;  /* 0C0B273C add #imm,Rn */
	T = (s32)r1 >= (s32)r12;  /* 0C0B273E cmp/ge Rm,Rn */
	r0 ^= 0x1u;  /* 0C0B2740 xor #imm,r0 */
	IF(0x0C0B2742u); r8 = T;  /* 0C0B2742 movt Rn */
	r0 &= 0x1u;  /* 0C0B2744 and #imm,r0 */
	r0 &= r8;  /* 0C0B2746 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B2748 tst Rm,Rn */
	{ u32 c_ = !T; W32(r13, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B277Au, 11); goto L_0C0B277A; } UPD(0x0C0B274Eu, 1); goto L_0C0B274E; }  /* 0C0B274A bf/s */
L_0C0B274E: BLKS(0x0C0B274Eu);
	r0 = 0x100u; UPD(0x0C0B2750u, 1);  /* 0C0B274E mov.w @(disp,pc),Rn */
	r3 |= r0;  /* 0C0B2750 or Rm,Rn */
	r0 = 0xA0u; UPD(0x0C0B2754u, 2);  /* 0C0B2752 mov.w @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C0B2756u, 1);  /* 0C0B2754 mov.l Rm,@Rn */
	IF(0x0C0B2756u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B2758u, 1);  /* 0C0B2756 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0B2758 add #imm,Rn */
	IF(0x0C0B275Au); W8(r0 + r7, r3); UPD(0x0C0B275Cu, 2);  /* 0C0B275A mov.b Rm,@(r0,Rn) */
	{ IF(0x0C0B275Eu); ; /* slot nop */ UPD(0x0C0B23E0u, 3); goto L_0C0B23E0; }  /* 0C0B275C bra */
L_0C0B277A: BLKS(0x0C0B277Au);
	r13 = 0xFFFFE47Eu; UPD(0x0C0B277Cu, 1);  /* 0C0B277A mov.w @(disp,pc),Rn */
	IF(0x0C0B277Cu); { u32 tv_ = (r13 + 0x0C0B2780u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B277C braf Rn */
}

void blk_f_0C0B2760(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2760;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B2760: BLKS(0x0C0B2760u);
	r8 = 0xB4u; UPD(0x0C0B2762u, 1);  /* 0C0B2760 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B2764u, 1);  /* 0C0B2762 mov.l @Rm,Rn */
	IF(0x0C0B2764u); MACL = r2 * r8;  /* 0C0B2764 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B2768u, 3);  /* 0C0B2766 mov.l @(disp,pc),Rn */
	IF(0x0C0B2768u); r3 = MACL;  /* 0C0B2768 sts macl,Rn */
	r3 += r9;  /* 0C0B276A add Rm,Rn */
	r6 = R32(r3 + 0x38u); UPD(0x0C0B276Eu, 3);  /* 0C0B276C mov.l @(disp,Rm),Rn */
	r5 = 0x10101u; UPD(0x0C0B2770u, 1);  /* 0C0B276E mov.l @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C0B2772u, 1);  /* 0C0B2770 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0B2772 add Rm,Rn */
	T = r6 == r4;  /* 0C0B2774 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2782u, 5); goto L_0C0B2782; } UPD(0x0C0B277Au, 1); goto L_0C0B277A; }  /* 0C0B2776 bt/s */
L_0C0B277A: BLKS(0x0C0B277Au);
	r13 = 0xFFFFE47Eu; UPD(0x0C0B277Cu, 1);  /* 0C0B277A mov.w @(disp,pc),Rn */
	IF(0x0C0B277Cu); { u32 tv_ = (r13 + 0x0C0B2780u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B277C braf Rn */
L_0C0B2782: BLKS(0x0C0B2782u);
	r12 = R32(r3); UPD(0x0C0B2784u, 1);  /* 0C0B2782 mov.l @Rm,Rn */
	r1 = 0x23000000u; UPD(0x0C0B2786u, 1);  /* 0C0B2784 mov.l @(disp,pc),Rn */
	r12 |= r1;  /* 0C0B2786 or Rm,Rn */
	W32(r3, r12); UPD(0x0C0B278Au, 2);  /* 0C0B2788 mov.l Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0B278Cu, 1);  /* 0C0B278A mov.w @(disp,pc),Rn */
	IF(0x0C0B278Cu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B278Eu, 1);  /* 0C0B278C mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B278E add #imm,Rn */
	{ IF(0x0C0B2792u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B23E0u, 4); goto L_0C0B23E0; }  /* 0C0B2790 bra */
}

void blk_f_0C0B27A0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B27A0;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B27A0: BLKS(0x0C0B27A0u);
	r3 = R32(r14); UPD(0x0C0B27A2u, 1);  /* 0C0B27A0 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C0B27A4u, 1);  /* 0C0B27A2 mov.w @(disp,pc),Rn */
	IF(0x0C0B27A4u); MACL = r3 * r11;  /* 0C0B27A4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B27A8u, 3);  /* 0C0B27A6 mov.l @(disp,pc),Rn */
	IF(0x0C0B27A8u); r2 = MACL;  /* 0C0B27A8 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C0B27ACu, 2);  /* 0C0B27AA mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B27AC add Rm,Rn */
	r2 += r10;  /* 0C0B27AE add Rm,Rn */
	r13 = r2;  /* 0C0B27B0 mov Rm,Rn */
	r13 += 0x1u;  /* 0C0B27B2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B27B6u, 5);  /* 0C0B27B4 mov.b @Rm,Rn */
	r0 |= 0xFu;  /* 0C0B27B6 or #imm,r0 */
	W8(r13, r0); UPD(0x0C0B27BAu, 2);  /* 0C0B27B8 mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B27BCu, 1);  /* 0C0B27BA mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B27BC add #imm,Rn */
	{ W8(r2, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C0B23E0u, 4); goto L_0C0B23E0; }  /* 0C0B27BE bra */
}

void blk_f_0C0B27D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B27D0;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B27BA: BLKS(0x0C0B27BAu);
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B27BCu, 1);  /* 0C0B27BA mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0B27BC add #imm,Rn */
	{ W8(r2, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C0B23E0u, 4); goto L_0C0B23E0; }  /* 0C0B27BE bra */
L_0C0B27D0: BLKS(0x0C0B27D0u);
	r6 = 0xB4u; UPD(0x0C0B27D2u, 1);  /* 0C0B27D0 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C0B27D4u, 1);  /* 0C0B27D2 mov.l @Rm,Rn */
	IF(0x0C0B27D4u); MACL = r5 * r6;  /* 0C0B27D4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B27D8u, 3);  /* 0C0B27D6 mov.l @(disp,pc),Rn */
	IF(0x0C0B27D8u); r2 = MACL;  /* 0C0B27D8 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C0B27DCu, 2);  /* 0C0B27DA mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C0B27DC add Rm,Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C0B27BAu, 4); goto L_0C0B27BA; }  /* 0C0B27DE bra */
}

void blk_f_0C0B27F0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B27F0;
L_0C0B23E0: BLKS(0x0C0B23E0u);
	r2 = 0xB4u; UPD(0x0C0B23E2u, 1);  /* 0C0B23E0 mov.w @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0B23E2 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0B23E6u, 2);  /* 0C0B23E4 mov.l @Rm,Rn */
	IF(0x0C0B23E6u); MACL = r3 * r2;  /* 0C0B23E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B23EAu, 3);  /* 0C0B23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B23EAu); r8 = MACL;  /* 0C0B23EA sts macl,Rn */
	r9 = 0xA5u; UPD(0x0C0B23EEu, 2);  /* 0C0B23EC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B23EE add Rm,Rn */
	r9 += r8;  /* 0C0B23F0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B23F4u, 3);  /* 0C0B23F2 mov.b @Rm,Rn */
	r4 = 0xC1E4E70u; UPD(0x0C0B23F6u, 1);  /* 0C0B23F4 mov.l @(disp,pc),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B23F8u, 1);  /* 0C0B23F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B23F8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B23FAu, 1);  /* 0C0B23F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B23FAu); { u32 t_ = r13; PR = 0x0C0B23FEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B23FEu); }  /* 0C0B23FA jsr @Rn */
L_0C0B23FE: BLKS(0x0C0B23FEu);
	T = (r0 & r0) == 0;  /* 0C0B23FE tst Rm,Rn */
	if (!T) { UPD(0x0C0B240Au, 4); goto L_0C0B240A; }  /* 0C0B2400 bf */
L_0C0B2402: BLKS(0x0C0B2402u);
	r13 = 0xFFFFE7F6u; UPD(0x0C0B2404u, 1);  /* 0C0B2402 mov.w @(disp,pc),Rn */
	IF(0x0C0B2404u); { u32 tv_ = (r13 + 0x0C0B2408u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2404 braf Rn */
L_0C0B240A: BLKS(0x0C0B240Au);
	r10 = 0xC069B50u; UPD(0x0C0B240Cu, 1);  /* 0C0B240A mov.l @(disp,pc),Rn */
	IF(0x0C0B240Cu); { u32 t_ = r10; PR = 0x0C0B2410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0B2410u); }  /* 0C0B240C jsr @Rn */
L_0C0B2410: BLKS(0x0C0B2410u);
	r4 = 0x2A0u; UPD(0x0C0B2412u, 1);  /* 0C0B2410 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0B2412 exts.w Rm,Rn */
	IF(0x0C0B2414u); MACL = r5 * r4;  /* 0C0B2414 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0B2418u, 4);  /* 0C0B2416 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0B241Au, 1);  /* 0C0B2418 mov.l @(disp,pc),Rn */
	IF(0x0C0B241Au); r13 = MACL;  /* 0C0B241A sts macl,Rn */
	r13 += r7;  /* 0C0B241C add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0B2420u, 3);  /* 0C0B241E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0B2422u, 1);  /* 0C0B2420 mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x10u); UPD(0x0C0B2424u, 1);  /* 0C0B2422 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2424u); { u32 t_ = r11; PR = 0x0C0B2428u; r7 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0B2428u); }  /* 0C0B2424 jsr @Rn */
L_0C0B2428: BLKS(0x0C0B2428u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B2428 exts.w Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0B242Cu, 2);  /* 0C0B242A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B242C add #imm,Rn */
	r0 = 0x100000u; UPD(0x0C0B2430u, 2);  /* 0C0B242E mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0B2430 mov #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B2434u, 2);  /* 0C0B2432 mov.l Rm,@(disp,Rn) */
	r5 += r0;  /* 0C0B2434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2438u, 2);  /* 0C0B2436 mov.b @Rm,Rn */
	r9 = 0xC1E4E78u; UPD(0x0C0B243Au, 1);  /* 0C0B2438 mov.l @(disp,pc),Rn */
	IF(0x0C0B243Au); r0 <<= 2;  /* 0C0B243A shll2 Rn */
	IF(0x0C0B243Cu); r12 = R32(r0 + r9); UPD(0x0C0B243Eu, 2);  /* 0C0B243C mov.l @(r0,Rm),Rn */
	r6 = 0xC189E28u; UPD(0x0C0B2440u, 1);  /* 0C0B243E mov.l @(disp,pc),Rn */
	r10 = 0xC0BA970u; UPD(0x0C0B2442u, 1);  /* 0C0B2440 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C0B2444u, 1);  /* 0C0B2442 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0B2446u, 1);  /* 0C0B2444 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x28u); UPD(0x0C0B2448u, 1);  /* 0C0B2446 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2448u); { u32 t_ = r10; PR = 0x0C0B244Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B244Cu); }  /* 0C0B2448 jsr @Rn */
L_0C0B244C: BLKS(0x0C0B244Cu);
	r13 = 0xFFFFEDDCu; UPD(0x0C0B244Eu, 1);  /* 0C0B244C mov.w @(disp,pc),Rn */
	IF(0x0C0B244Eu); { u32 tv_ = (r13 + 0x0C0B2452u); u32 t_ = PHYS(tv_); IF(0x0C0B2450u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B244E braf Rn */
L_0C0B278C: BLKS(0x0C0B278Cu);
	IF(0x0C0B278Cu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B278Eu, 1);  /* 0C0B278C mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0B278E add #imm,Rn */
	{ IF(0x0C0B2792u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0B23E0u, 4); goto L_0C0B23E0; }  /* 0C0B2790 bra */
L_0C0B27F0: BLKS(0x0C0B27F0u);
	r10 = 0xB4u; UPD(0x0C0B27F2u, 1);  /* 0C0B27F0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B27F4u, 1);  /* 0C0B27F2 mov.l @Rm,Rn */
	IF(0x0C0B27F4u); MACL = r1 * r10;  /* 0C0B27F4 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B27F8u, 3);  /* 0C0B27F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B27F8u); r3 = MACL;  /* 0C0B27F8 sts macl,Rn */
	IF(0x0C0B27FAu); MACL = r8 * r10;  /* 0C0B27FA mul.l Rm,Rn */
	r3 += r13;  /* 0C0B27FC add Rm,Rn */
	r7 = R32(r3); UPD(0x0C0B2800u, 5);  /* 0C0B27FE mov.l @Rm,Rn */
	IF(0x0C0B2800u); r12 = MACL;  /* 0C0B2800 sts macl,Rn */
	r0 = 0x13000000u; UPD(0x0C0B2804u, 2);  /* 0C0B2802 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0B2804 add Rm,Rn */
	r7 |= r0;  /* 0C0B2806 or Rm,Rn */
	r12 += 0x50u;  /* 0C0B2808 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C0B280Cu, 4);  /* 0C0B280A mov.l @Rm,Rn */
	r8 = 0x0u;  /* 0C0B280C mov #imm,Rn */
	r0 = 0xA0u; UPD(0x0C0B2810u, 2);  /* 0C0B280E mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B2810 add #imm,Rn */
	r11 = 0xDFFFFFFFu; UPD(0x0C0B2814u, 2);  /* 0C0B2812 mov.l @(disp,pc),Rn */
	IF(0x0C0B2814u); W8(r0 + r3, r8); UPD(0x0C0B2816u, 1);  /* 0C0B2814 mov.b Rm,@(r0,Rn) */
	r7 &= r11;  /* 0C0B2816 and Rm,Rn */
	W32(r3, r7); UPD(0x0C0B281Au, 2);  /* 0C0B2818 mov.l Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0B281A add #imm,Rn */
	{ W32(r12, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0B278Cu, 4); goto L_0C0B278C; }  /* 0C0B281C bra */
}

void blk_f_0C0B2820(sh3_t *c)
{
	LOCALS;
L_0C0B2820: BLKS(0x0C0B2820u);
	r8 = 0xC0A8B50u; UPD(0x0C0B2822u, 1);  /* 0C0B2820 mov.l @(disp,pc),Rn */
	IF(0x0C0B2822u); { u32 t_ = r8; PR = 0x0C0B2826u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B2826u); }  /* 0C0B2822 jsr @Rn */
L_0C0B2826: BLKS(0x0C0B2826u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2826 exts.w Rm,Rn */
	IF(0x0C0B2828u); T = (s32)r8 >= 0;  /* 0C0B2828 cmp/pz Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B28BEu, 5); goto L_0C0B28BE; } UPD(0x0C0B282Eu, 1); goto L_0C0B282E; }  /* 0C0B282A bf/s */
L_0C0B282E: BLKS(0x0C0B282Eu);
	r6 = 0xB4u; UPD(0x0C0B2830u, 1);  /* 0C0B282E mov.w @(disp,pc),Rn */
	IF(0x0C0B2830u); MACL = r0 * r6;  /* 0C0B2830 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B2834u, 3);  /* 0C0B2832 mov.l @(disp,pc),Rn */
	IF(0x0C0B2834u); r0 = MACL;  /* 0C0B2834 sts macl,Rn */
	IF(0x0C0B2836u); MACL = r8 * r6;  /* 0C0B2836 mul.l Rm,Rn */
	r0 += r9;  /* 0C0B2838 add Rm,Rn */
	r7 = R32(r0); UPD(0x0C0B283Cu, 5);  /* 0C0B283A mov.l @Rm,Rn */
	IF(0x0C0B283Cu); r6 = MACL;  /* 0C0B283C sts macl,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C0B2840u, 2);  /* 0C0B283E mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0B2840 add Rm,Rn */
	r8 = R32(r6 + 0x24u); UPD(0x0C0B2844u, 2);  /* 0C0B2842 mov.l @(disp,Rm),Rn */
	r7 &= r5;  /* 0C0B2844 and Rm,Rn */
	r12 = R32(r0 + 0x2Cu); UPD(0x0C0B2848u, 2);  /* 0C0B2846 mov.l @(disp,Rm),Rn */
	W32(r0, r7); UPD(0x0C0B284Au, 1);  /* 0C0B2848 mov.l Rm,@Rn */
	r8 += r12;  /* 0C0B284A add Rm,Rn */
	r13 = 0xA8u; UPD(0x0C0B284Eu, 2);  /* 0C0B284C mov.w @(disp,pc),Rn */
	r12 = r0;  /* 0C0B284E mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C0B2852u, 2);  /* 0C0B2850 mov.l @Rm,Rn */
	r12 += r13;  /* 0C0B2852 add Rm,Rn */
	r11 = 0x100u; UPD(0x0C0B2856u, 2);  /* 0C0B2854 mov.w @(disp,pc),Rn */
	r13 += r6;  /* 0C0B2856 add Rm,Rn */
	r4 &= r11;  /* 0C0B2858 and Rm,Rn */
	r10 = R32(r6 + 0x28u); UPD(0x0C0B285Cu, 3);  /* 0C0B285A mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C0B285C add #imm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C0B2860u, 2);  /* 0C0B285E mov.l @(disp,Rm),Rn */
	r11 += 0xFFFFFFAFu;  /* 0C0B2860 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0B2864u, 2);  /* 0C0B2862 mov.b @Rm,Rn */
	r10 += r1;  /* 0C0B2864 add Rm,Rn */
	IF(0x0C0B2866u); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B2868u, 2);  /* 0C0B2866 mov.b @(r0,Rm),Rn */
	r7 |= r4;  /* 0C0B2868 or Rm,Rn */
	r2 = R32(r6 + 0x38u); UPD(0x0C0B286Cu, 2);  /* 0C0B286A mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C0B286C add #imm,Rn */
	r3 += r9;  /* 0C0B286E add Rm,Rn */
	r1 = R32(r6 + 0xCu); UPD(0x0C0B2872u, 3);  /* 0C0B2870 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C0B2874u, 1);  /* 0C0B2872 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r10); UPD(0x0C0B2876u, 1);  /* 0C0B2874 mov.l Rm,@(disp,Rn) */
	W32(r0, r7); UPD(0x0C0B2878u, 1);  /* 0C0B2876 mov.l Rm,@Rn */
	W8(r12, r3); UPD(0x0C0B287Au, 1);  /* 0C0B2878 mov.b Rm,@Rn */
	r4 = 0xFFFFE9C8u; UPD(0x0C0B287Cu, 1);  /* 0C0B287A mov.w @(disp,pc),Rn */
	IF(0x0C0B287Cu); { u32 tv_ = (r4 + 0x0C0B2880u); u32 t_ = PHYS(tv_); W32(r0 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B287C braf Rn */
L_0C0B28BE: BLKS(0x0C0B28BEu);
	r4 = 0xFFFFE67Eu; UPD(0x0C0B28C0u, 1);  /* 0C0B28BE mov.w @(disp,pc),Rn */
	IF(0x0C0B28C0u); { u32 tv_ = (r4 + 0x0C0B28C4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B28C0 braf Rn */
}

void blk_f_0C0B28B0(sh3_t *c)
{
	LOCALS;
L_0C0B28B0: BLKS(0x0C0B28B0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0B28B2u, 1);  /* 0C0B28B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B28B2u); { u32 t_ = r11; PR = 0x0C0B28B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B28B6u); }  /* 0C0B28B2 jsr @Rn */
L_0C0B28B6: BLKS(0x0C0B28B6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B28B6 exts.w Rm,Rn */
	IF(0x0C0B28B8u); T = (s32)r8 >= 0;  /* 0C0B28B8 cmp/pz Rn */
	{ u32 c_ = T; r13 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B28C6u, 5); goto L_0C0B28C6; } UPD(0x0C0B28BEu, 1); goto L_0C0B28BE; }  /* 0C0B28BA bt/s */
L_0C0B28BE: BLKS(0x0C0B28BEu);
	r4 = 0xFFFFE67Eu; UPD(0x0C0B28C0u, 1);  /* 0C0B28BE mov.w @(disp,pc),Rn */
	IF(0x0C0B28C0u); { u32 tv_ = (r4 + 0x0C0B28C4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B28C0 braf Rn */
L_0C0B28C6: BLKS(0x0C0B28C6u);
	r2 = 0xB4u; UPD(0x0C0B28C8u, 1);  /* 0C0B28C6 mov.w @(disp,pc),Rn */
	IF(0x0C0B28C8u); MACL = r13 * r2;  /* 0C0B28C8 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B28CCu, 3);  /* 0C0B28CA mov.l @(disp,pc),Rn */
	IF(0x0C0B28CCu); r0 = MACL;  /* 0C0B28CC sts macl,Rn */
	IF(0x0C0B28CEu); MACL = r8 * r2;  /* 0C0B28CE mul.l Rm,Rn */
	r0 += r5;  /* 0C0B28D0 add Rm,Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C0B28D4u, 5);  /* 0C0B28D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B28D4u); r13 = MACL;  /* 0C0B28D4 sts macl,Rn */
	r13 += r5;  /* 0C0B28D6 add Rm,Rn */
	r7 = R32(r13 + 0x24u); UPD(0x0C0B28DAu, 3);  /* 0C0B28D8 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C0B28DA add Rm,Rn */
	r12 = R32(r0); UPD(0x0C0B28DEu, 2);  /* 0C0B28DC mov.l @Rm,Rn */
	W32(r0 + 0x24u, r7); UPD(0x0C0B28E0u, 1);  /* 0C0B28DE mov.l Rm,@(disp,Rn) */
	r6 = 0xECFFFEFFu; UPD(0x0C0B28E2u, 1);  /* 0C0B28E0 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0B28E2 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C0B28E6u, 2);  /* 0C0B28E4 mov.w @(disp,pc),Rn */
	r12 &= r6;  /* 0C0B28E6 and Rm,Rn */
	W32(r0, r12); UPD(0x0C0B28EAu, 2);  /* 0C0B28E8 mov.l Rm,@Rn */
	r7 += r8;  /* 0C0B28EA add Rm,Rn */
	r2 = R32(r13 + 0x38u); UPD(0x0C0B28EEu, 2);  /* 0C0B28EC mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C0B28EE add Rm,Rn */
	r10 = 0xAFu; UPD(0x0C0B28F2u, 2);  /* 0C0B28F0 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0B28F2 add #imm,Rn */
	r9 = R32(r13); UPD(0x0C0B28F6u, 2);  /* 0C0B28F4 mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C0B28F6 add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B28FAu, 2);  /* 0C0B28F8 mov.l @(disp,pc),Rn */
	r11 = R32(r13 + 0x28u); UPD(0x0C0B28FCu, 1);  /* 0C0B28FA mov.l @(disp,Rm),Rn */
	r9 &= r1;  /* 0C0B28FC and Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C0B2900u, 2);  /* 0C0B28FE mov.l @(disp,Rm),Rn */
	r12 |= r9;  /* 0C0B2900 or Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B2904u, 2);  /* 0C0B2902 mov.b @Rm,Rn */
	r11 += r3;  /* 0C0B2904 add Rm,Rn */
	IF(0x0C0B2906u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B2908u, 2);  /* 0C0B2906 mov.b @(r0,Rm),Rn */
	r3 = 0x17u;  /* 0C0B2908 mov #imm,Rn */
	W32(r0 + 0x38u, r2); UPD(0x0C0B290Cu, 2);  /* 0C0B290A mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0B290C add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C0B2910u, 2);  /* 0C0B290E mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r11); UPD(0x0C0B2912u, 1);  /* 0C0B2910 mov.l Rm,@(disp,Rn) */
	T = r2 > r3;  /* 0C0B2912 cmp/hi Rm,Rn */
	W32(r0, r12); UPD(0x0C0B2916u, 2);  /* 0C0B2914 mov.l Rm,@Rn */
	{ u32 c_ = T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B29B0u, 3); goto L_0C0B29B0; } UPD(0x0C0B291Au, 1); goto L_0C0B291A; }  /* 0C0B2916 bt/s */
L_0C0B291A: BLKS(0x0C0B291Au);
	r0 = 0xC0B293Cu;  /* 0C0B291A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B291C add Rm,Rn */
	IF(0x0C0B291Eu); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B2920u, 3);  /* 0C0B291E mov.w @(r0,Rm),Rn */
	IF(0x0C0B2920u); { u32 tv_ = (r10 + 0x0C0B2924u); u32 t_ = PHYS(tv_); IF(0x0C0B2922u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2920 braf Rn */
L_0C0B29B0: BLKS(0x0C0B29B0u);
	r8 = 0xB4u; UPD(0x0C0B29B2u, 1);  /* 0C0B29B0 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C0B29B4u, 1);  /* 0C0B29B2 mov.l @Rm,Rn */
	IF(0x0C0B29B4u); MACL = r13 * r8;  /* 0C0B29B4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B29B8u, 3);  /* 0C0B29B6 mov.l @(disp,pc),Rn */
	IF(0x0C0B29B8u); r8 = MACL;  /* 0C0B29B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B29BCu, 2);  /* 0C0B29BA mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B29BC add Rm,Rn */
	r2 += r8;  /* 0C0B29BE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B29C2u, 3);  /* 0C0B29C0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B29C2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B29C4 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B29C6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2A1Au, 6); goto L_0C0B2A1A; } UPD(0x0C0B29CCu, 1); goto L_0C0B29CC; }  /* 0C0B29C8 bf/s */
L_0C0B29CC: BLKS(0x0C0B29CCu);
	r0 = 0x0u;  /* 0C0B29CC mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0B29D0u, 2);  /* 0C0B29CE mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C0B29D2u, 1);  /* 0C0B29D0 mov.w @(disp,pc),Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C0B29D4u, 1);  /* 0C0B29D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B29D4u); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B29D6u, 1);  /* 0C0B29D4 mov.w @(r0,Rm),Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B29D8u, 1);  /* 0C0B29D6 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C0B29D8 add Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C0B29DCu, 2);  /* 0C0B29DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0B29DCu); { u32 t_ = r10; PR = 0x0C0B29E0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B29E0u); }  /* 0C0B29DC jsr @Rn */
L_0C0B29E0: BLKS(0x0C0B29E0u);
	r2 = R32(r8 + 0xCu); UPD(0x0C0B29E2u, 1);  /* 0C0B29E0 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B29E2 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B29F2u, 4); goto L_0C0B29F2; } UPD(0x0C0B29E8u, 1); goto L_0C0B29E8; }  /* 0C0B29E4 bf/s */
L_0C0B29E8: BLKS(0x0C0B29E8u);
	r11 = R32(r8); UPD(0x0C0B29EAu, 1);  /* 0C0B29E8 mov.l @Rm,Rn */
	r6 = 0x4000u; UPD(0x0C0B29ECu, 1);  /* 0C0B29EA mov.w @(disp,pc),Rn */
	r11 |= r6;  /* 0C0B29EC or Rm,Rn */
	W32(r8, r11); UPD(0x0C0B29F0u, 2);  /* 0C0B29EE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0B29F2u, 1);  /* 0C0B29F0 mov.l @Rm,Rn */
L_0C0B29F2: BLKS(0x0C0B29F2u);
	r13 = 0xB4u; UPD(0x0C0B29F4u, 1);  /* 0C0B29F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B29F4u); MACL = r1 * r13;  /* 0C0B29F4 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B29F8u, 3);  /* 0C0B29F6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B29FAu, 1);  /* 0C0B29F8 mov.w @(disp,pc),Rn */
	IF(0x0C0B29FAu); r3 = MACL;  /* 0C0B29FA sts macl,Rn */
	r3 += r8;  /* 0C0B29FC add Rm,Rn */
	IF(0x0C0B29FEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B2A00u, 3);  /* 0C0B29FE mov.b @(r0,Rm),Rn */
	r7 = 0xF0u; UPD(0x0C0B2A02u, 1);  /* 0C0B2A00 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0B2A02 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0B2A04 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0B2A06 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B2A0Au); W8(r0 + r3, r5); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B2A40u, 6); goto L_0C0B2A40; } UPD(0x0C0B2A0Cu, 1); goto L_0C0B2A0C; }  /* 0C0B2A08 bt/s */
L_0C0B2A0C: BLKS(0x0C0B2A0Cu);
	r11 = 0xC0BC1B0u; UPD(0x0C0B2A0Eu, 1);  /* 0C0B2A0C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0B2A0E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B2A12u, 2);  /* 0C0B2A10 mov.l @Rm,Rn */
	IF(0x0C0B2A12u); { u32 t_ = r11; PR = 0x0C0B2A16u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B2A16u); }  /* 0C0B2A12 jsr @Rn */
L_0C0B2A16: BLKS(0x0C0B2A16u);
	T = (r0 & r0) == 0;  /* 0C0B2A16 tst Rm,Rn */
	if (!T) { UPD(0x0C0B2A22u, 4); goto L_0C0B2A22; }  /* 0C0B2A18 bf */
L_0C0B2A1A: BLKS(0x0C0B2A1Au);
	r13 = 0xFFFFE1DEu; UPD(0x0C0B2A1Cu, 1);  /* 0C0B2A1A mov.w @(disp,pc),Rn */
	IF(0x0C0B2A1Cu); { u32 tv_ = (r13 + 0x0C0B2A20u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A1C braf Rn */
L_0C0B2A22: BLKS(0x0C0B2A22u);
	r4 = 0xB4u; UPD(0x0C0B2A24u, 1);  /* 0C0B2A22 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0B2A26u, 1);  /* 0C0B2A24 mov.l @Rm,Rn */
	IF(0x0C0B2A26u); MACL = r3 * r4;  /* 0C0B2A26 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B2A2Au, 3);  /* 0C0B2A28 mov.l @(disp,pc),Rn */
	IF(0x0C0B2A2Au); r0 = MACL;  /* 0C0B2A2A sts macl,Rn */
	r0 += r7;  /* 0C0B2A2C add Rm,Rn */
	r6 = R32(r0 + 0xCu); UPD(0x0C0B2A30u, 3);  /* 0C0B2A2E mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0B2A30 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0B2A32 add #imm,Rn */
	r1 = 0xFFFFE690u; UPD(0x0C0B2A36u, 3);  /* 0C0B2A34 mov.w @(disp,pc),Rn */
	IF(0x0C0B2A36u); { u32 tv_ = (r1 + 0x0C0B2A3Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A36 braf Rn */
L_0C0B2A40: BLKS(0x0C0B2A40u);
	r9 = 0x0u;  /* 0C0B2A40 mov #imm,Rn */
	IF(0x0C0B2A42u); W8(r0 + r3, r9); UPD(0x0C0B2A44u, 2);  /* 0C0B2A42 mov.b Rm,@(r0,Rn) */
	r12 = 0xFFFFFFFFu;  /* 0C0B2A44 mov #imm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0B2A48u, 2);  /* 0C0B2A46 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C0B2A48 add #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B2A4Cu, 2);  /* 0C0B2A4A mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B2A4C add #imm,Rn */
	IF(0x0C0B2A4Eu); W16(r0 + r3, r12); UPD(0x0C0B2A50u, 2);  /* 0C0B2A4E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r2); UPD(0x0C0B2A52u, 1);  /* 0C0B2A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2A52u); { u32 t_ = r10; PR = 0x0C0B2A56u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2A56u); }  /* 0C0B2A52 jsr @Rn */
L_0C0B2A56: BLKS(0x0C0B2A56u);
	{ IF(0x0C0B2A58u); ; /* slot nop */ UPD(0x0C0B2A0Cu, 3); goto L_0C0B2A0C; }  /* 0C0B2A56 bra */
}

void blk_f_0C0B2970(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2970;
L_0C0B228E: BLKS(0x0C0B228Eu);
	W32(r8, r1); UPD(0x0C0B2290u, 1);  /* 0C0B228E mov.l Rm,@Rn */
	r13 = 0xFFFFE968u; UPD(0x0C0B2292u, 1);  /* 0C0B2290 mov.w @(disp,pc),Rn */
	IF(0x0C0B2292u); { u32 tv_ = (r13 + 0x0C0B2296u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2292 braf Rn */
L_0C0B2970: BLKS(0x0C0B2970u);
	r12 = 0xC0BC1B0u; UPD(0x0C0B2972u, 1);  /* 0C0B2970 mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C0B2972 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0B2976u, 2);  /* 0C0B2974 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2978u, 1);  /* 0C0B2976 mov.l @Rm,Rn */
	IF(0x0C0B2978u); { u32 t_ = r12; PR = 0x0C0B297Cu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B297Cu); }  /* 0C0B2978 jsr @Rn */
L_0C0B297C: BLKS(0x0C0B297Cu);
	T = (r0 & r0) == 0;  /* 0C0B297C tst Rm,Rn */
	if (T) { UPD(0x0C0B2A1Au, 4); goto L_0C0B2A1A; }  /* 0C0B297E bt */
L_0C0B2980: BLKS(0x0C0B2980u);
	r4 = R32(r14); UPD(0x0C0B2982u, 1);  /* 0C0B2980 mov.l @Rm,Rn */
	r3 = 0x1u;  /* 0C0B2982 mov #imm,Rn */
	IF(0x0C0B2984u); MACL = r4 * r8;  /* 0C0B2984 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B2988u, 4);  /* 0C0B2986 mov.l @(disp,pc),Rn */
	IF(0x0C0B2988u); r8 = MACL;  /* 0C0B2988 sts macl,Rn */
	r8 += r7;  /* 0C0B298A add Rm,Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C0B298Eu, 3);  /* 0C0B298C mov.l @(disp,Rm),Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0B2990u, 1);  /* 0C0B298E mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0B2990 add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B2994u, 2);  /* 0C0B2992 mov.w @(disp,pc),Rn */
	r9 = 0xC0C2110u; UPD(0x0C0B2996u, 1);  /* 0C0B2994 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2998u, 1);  /* 0C0B2996 mov.l @Rm,Rn */
	IF(0x0C0B2998u); W16(r0 + r8, r3); UPD(0x0C0B299Au, 1);  /* 0C0B2998 mov.w Rm,@(r0,Rn) */
	IF(0x0C0B299Au); { u32 t_ = r11; PR = 0x0C0B299Eu; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B299Eu); }  /* 0C0B299A jsr @Rn */
L_0C0B299E: BLKS(0x0C0B299Eu);
	IF(0x0C0B299Eu); { u32 t_ = r9; PR = 0x0C0B29A2u; r4 = 0x73u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B29A2u); }  /* 0C0B299E jsr @Rn */
L_0C0B29A2: BLKS(0x0C0B29A2u);
	r1 = R32(r8); UPD(0x0C0B29A4u, 1);  /* 0C0B29A2 mov.l @Rm,Rn */
	r0 = 0xFFFFBFFFu; UPD(0x0C0B29A6u, 1);  /* 0C0B29A4 mov.w @(disp,pc),Rn */
	{ r1 &= r0; /* slot and Rm,Rn */ UPD(0x0C0B228Eu, 3); goto L_0C0B228E; }  /* 0C0B29A6 bra */
L_0C0B2A1A: BLKS(0x0C0B2A1Au);
	r13 = 0xFFFFE1DEu; UPD(0x0C0B2A1Cu, 1);  /* 0C0B2A1A mov.w @(disp,pc),Rn */
	IF(0x0C0B2A1Cu); { u32 tv_ = (r13 + 0x0C0B2A20u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A1C braf Rn */
}

void blk_f_0C0B29B0(sh3_t *c)
{
	LOCALS;
L_0C0B29B0: BLKS(0x0C0B29B0u);
	r8 = 0xB4u; UPD(0x0C0B29B2u, 1);  /* 0C0B29B0 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C0B29B4u, 1);  /* 0C0B29B2 mov.l @Rm,Rn */
	IF(0x0C0B29B4u); MACL = r13 * r8;  /* 0C0B29B4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B29B8u, 3);  /* 0C0B29B6 mov.l @(disp,pc),Rn */
	IF(0x0C0B29B8u); r8 = MACL;  /* 0C0B29B8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B29BCu, 2);  /* 0C0B29BA mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0B29BC add Rm,Rn */
	r2 += r8;  /* 0C0B29BE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B29C2u, 3);  /* 0C0B29C0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B29C2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B29C4 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B29C6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2A1Au, 6); goto L_0C0B2A1A; } UPD(0x0C0B29CCu, 1); goto L_0C0B29CC; }  /* 0C0B29C8 bf/s */
L_0C0B29CC: BLKS(0x0C0B29CCu);
	r0 = 0x0u;  /* 0C0B29CC mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0B29D0u, 2);  /* 0C0B29CE mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C0B29D2u, 1);  /* 0C0B29D0 mov.w @(disp,pc),Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C0B29D4u, 1);  /* 0C0B29D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B29D4u); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B29D6u, 1);  /* 0C0B29D4 mov.w @(r0,Rm),Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B29D8u, 1);  /* 0C0B29D6 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C0B29D8 add Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C0B29DCu, 2);  /* 0C0B29DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0B29DCu); { u32 t_ = r10; PR = 0x0C0B29E0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B29E0u); }  /* 0C0B29DC jsr @Rn */
L_0C0B29E0: BLKS(0x0C0B29E0u);
	r2 = R32(r8 + 0xCu); UPD(0x0C0B29E2u, 1);  /* 0C0B29E0 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0B29E2 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B29F2u, 4); goto L_0C0B29F2; } UPD(0x0C0B29E8u, 1); goto L_0C0B29E8; }  /* 0C0B29E4 bf/s */
L_0C0B29E8: BLKS(0x0C0B29E8u);
	r11 = R32(r8); UPD(0x0C0B29EAu, 1);  /* 0C0B29E8 mov.l @Rm,Rn */
	r6 = 0x4000u; UPD(0x0C0B29ECu, 1);  /* 0C0B29EA mov.w @(disp,pc),Rn */
	r11 |= r6;  /* 0C0B29EC or Rm,Rn */
	W32(r8, r11); UPD(0x0C0B29F0u, 2);  /* 0C0B29EE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0B29F2u, 1);  /* 0C0B29F0 mov.l @Rm,Rn */
L_0C0B29F2: BLKS(0x0C0B29F2u);
	r13 = 0xB4u; UPD(0x0C0B29F4u, 1);  /* 0C0B29F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B29F4u); MACL = r1 * r13;  /* 0C0B29F4 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B29F8u, 3);  /* 0C0B29F6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B29FAu, 1);  /* 0C0B29F8 mov.w @(disp,pc),Rn */
	IF(0x0C0B29FAu); r3 = MACL;  /* 0C0B29FA sts macl,Rn */
	r3 += r8;  /* 0C0B29FC add Rm,Rn */
	IF(0x0C0B29FEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B2A00u, 3);  /* 0C0B29FE mov.b @(r0,Rm),Rn */
	r7 = 0xF0u; UPD(0x0C0B2A02u, 1);  /* 0C0B2A00 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0B2A02 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0B2A04 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0B2A06 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B2A0Au); W8(r0 + r3, r5); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B2A40u, 6); goto L_0C0B2A40; } UPD(0x0C0B2A0Cu, 1); goto L_0C0B2A0C; }  /* 0C0B2A08 bt/s */
L_0C0B2A0C: BLKS(0x0C0B2A0Cu);
	r11 = 0xC0BC1B0u; UPD(0x0C0B2A0Eu, 1);  /* 0C0B2A0C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0B2A0E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B2A12u, 2);  /* 0C0B2A10 mov.l @Rm,Rn */
	IF(0x0C0B2A12u); { u32 t_ = r11; PR = 0x0C0B2A16u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B2A16u); }  /* 0C0B2A12 jsr @Rn */
L_0C0B2A16: BLKS(0x0C0B2A16u);
	T = (r0 & r0) == 0;  /* 0C0B2A16 tst Rm,Rn */
	if (!T) { UPD(0x0C0B2A22u, 4); goto L_0C0B2A22; }  /* 0C0B2A18 bf */
L_0C0B2A1A: BLKS(0x0C0B2A1Au);
	r13 = 0xFFFFE1DEu; UPD(0x0C0B2A1Cu, 1);  /* 0C0B2A1A mov.w @(disp,pc),Rn */
	IF(0x0C0B2A1Cu); { u32 tv_ = (r13 + 0x0C0B2A20u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A1C braf Rn */
L_0C0B2A22: BLKS(0x0C0B2A22u);
	r4 = 0xB4u; UPD(0x0C0B2A24u, 1);  /* 0C0B2A22 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0B2A26u, 1);  /* 0C0B2A24 mov.l @Rm,Rn */
	IF(0x0C0B2A26u); MACL = r3 * r4;  /* 0C0B2A26 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B2A2Au, 3);  /* 0C0B2A28 mov.l @(disp,pc),Rn */
	IF(0x0C0B2A2Au); r0 = MACL;  /* 0C0B2A2A sts macl,Rn */
	r0 += r7;  /* 0C0B2A2C add Rm,Rn */
	r6 = R32(r0 + 0xCu); UPD(0x0C0B2A30u, 3);  /* 0C0B2A2E mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0B2A30 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0B2A32 add #imm,Rn */
	r1 = 0xFFFFE690u; UPD(0x0C0B2A36u, 3);  /* 0C0B2A34 mov.w @(disp,pc),Rn */
	IF(0x0C0B2A36u); { u32 tv_ = (r1 + 0x0C0B2A3Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A36 braf Rn */
L_0C0B2A40: BLKS(0x0C0B2A40u);
	r9 = 0x0u;  /* 0C0B2A40 mov #imm,Rn */
	IF(0x0C0B2A42u); W8(r0 + r3, r9); UPD(0x0C0B2A44u, 2);  /* 0C0B2A42 mov.b Rm,@(r0,Rn) */
	r12 = 0xFFFFFFFFu;  /* 0C0B2A44 mov #imm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0B2A48u, 2);  /* 0C0B2A46 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C0B2A48 add #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B2A4Cu, 2);  /* 0C0B2A4A mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B2A4C add #imm,Rn */
	IF(0x0C0B2A4Eu); W16(r0 + r3, r12); UPD(0x0C0B2A50u, 2);  /* 0C0B2A4E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r2); UPD(0x0C0B2A52u, 1);  /* 0C0B2A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2A52u); { u32 t_ = r10; PR = 0x0C0B2A56u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2A56u); }  /* 0C0B2A52 jsr @Rn */
L_0C0B2A56: BLKS(0x0C0B2A56u);
	{ IF(0x0C0B2A58u); ; /* slot nop */ UPD(0x0C0B2A0Cu, 3); goto L_0C0B2A0C; }  /* 0C0B2A56 bra */
}

void blk_f_0C0B29F0(sh3_t *c)
{
	LOCALS;
L_0C0B29F0: BLKS(0x0C0B29F0u);
	r1 = R32(r14); UPD(0x0C0B29F2u, 1);  /* 0C0B29F0 mov.l @Rm,Rn */
	r13 = 0xB4u; UPD(0x0C0B29F4u, 1);  /* 0C0B29F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B29F4u); MACL = r1 * r13;  /* 0C0B29F4 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0B29F8u, 3);  /* 0C0B29F6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0B29FAu, 1);  /* 0C0B29F8 mov.w @(disp,pc),Rn */
	IF(0x0C0B29FAu); r3 = MACL;  /* 0C0B29FA sts macl,Rn */
	r3 += r8;  /* 0C0B29FC add Rm,Rn */
	IF(0x0C0B29FEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B2A00u, 3);  /* 0C0B29FE mov.b @(r0,Rm),Rn */
	r7 = 0xF0u; UPD(0x0C0B2A02u, 1);  /* 0C0B2A00 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0B2A02 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0B2A04 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0B2A06 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B2A0Au); W8(r0 + r3, r5); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0B2A40u, 6); goto L_0C0B2A40; } UPD(0x0C0B2A0Cu, 1); goto L_0C0B2A0C; }  /* 0C0B2A08 bt/s */
L_0C0B2A0C: BLKS(0x0C0B2A0Cu);
	r11 = 0xC0BC1B0u; UPD(0x0C0B2A0Eu, 1);  /* 0C0B2A0C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C0B2A0E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B2A12u, 2);  /* 0C0B2A10 mov.l @Rm,Rn */
	IF(0x0C0B2A12u); { u32 t_ = r11; PR = 0x0C0B2A16u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B2A16u); }  /* 0C0B2A12 jsr @Rn */
L_0C0B2A16: BLKS(0x0C0B2A16u);
	T = (r0 & r0) == 0;  /* 0C0B2A16 tst Rm,Rn */
	if (!T) { UPD(0x0C0B2A22u, 4); goto L_0C0B2A22; }  /* 0C0B2A18 bf */
L_0C0B2A1A: BLKS(0x0C0B2A1Au);
	r13 = 0xFFFFE1DEu; UPD(0x0C0B2A1Cu, 1);  /* 0C0B2A1A mov.w @(disp,pc),Rn */
	IF(0x0C0B2A1Cu); { u32 tv_ = (r13 + 0x0C0B2A20u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A1C braf Rn */
L_0C0B2A22: BLKS(0x0C0B2A22u);
	r4 = 0xB4u; UPD(0x0C0B2A24u, 1);  /* 0C0B2A22 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0B2A26u, 1);  /* 0C0B2A24 mov.l @Rm,Rn */
	IF(0x0C0B2A26u); MACL = r3 * r4;  /* 0C0B2A26 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B2A2Au, 3);  /* 0C0B2A28 mov.l @(disp,pc),Rn */
	IF(0x0C0B2A2Au); r0 = MACL;  /* 0C0B2A2A sts macl,Rn */
	r0 += r7;  /* 0C0B2A2C add Rm,Rn */
	r6 = R32(r0 + 0xCu); UPD(0x0C0B2A30u, 3);  /* 0C0B2A2E mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0B2A30 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0B2A32 add #imm,Rn */
	r1 = 0xFFFFE690u; UPD(0x0C0B2A36u, 3);  /* 0C0B2A34 mov.w @(disp,pc),Rn */
	IF(0x0C0B2A36u); { u32 tv_ = (r1 + 0x0C0B2A3Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A36 braf Rn */
L_0C0B2A40: BLKS(0x0C0B2A40u);
	r9 = 0x0u;  /* 0C0B2A40 mov #imm,Rn */
	IF(0x0C0B2A42u); W8(r0 + r3, r9); UPD(0x0C0B2A44u, 2);  /* 0C0B2A42 mov.b Rm,@(r0,Rn) */
	r12 = 0xFFFFFFFFu;  /* 0C0B2A44 mov #imm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0B2A48u, 2);  /* 0C0B2A46 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C0B2A48 add #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B2A4Cu, 2);  /* 0C0B2A4A mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B2A4C add #imm,Rn */
	IF(0x0C0B2A4Eu); W16(r0 + r3, r12); UPD(0x0C0B2A50u, 2);  /* 0C0B2A4E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r2); UPD(0x0C0B2A52u, 1);  /* 0C0B2A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2A52u); { u32 t_ = r10; PR = 0x0C0B2A56u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2A56u); }  /* 0C0B2A52 jsr @Rn */
L_0C0B2A56: BLKS(0x0C0B2A56u);
	{ IF(0x0C0B2A58u); ; /* slot nop */ UPD(0x0C0B2A0Cu, 3); goto L_0C0B2A0C; }  /* 0C0B2A56 bra */
}

void blk_f_0C0B2A22(sh3_t *c)
{
	LOCALS;
L_0C0B2A22: BLKS(0x0C0B2A22u);
	r4 = 0xB4u; UPD(0x0C0B2A24u, 1);  /* 0C0B2A22 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0B2A26u, 1);  /* 0C0B2A24 mov.l @Rm,Rn */
	IF(0x0C0B2A26u); MACL = r3 * r4;  /* 0C0B2A26 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B2A2Au, 3);  /* 0C0B2A28 mov.l @(disp,pc),Rn */
	IF(0x0C0B2A2Au); r0 = MACL;  /* 0C0B2A2A sts macl,Rn */
	r0 += r7;  /* 0C0B2A2C add Rm,Rn */
	r6 = R32(r0 + 0xCu); UPD(0x0C0B2A30u, 3);  /* 0C0B2A2E mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0B2A30 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0B2A32 add #imm,Rn */
	r1 = 0xFFFFE690u; UPD(0x0C0B2A36u, 3);  /* 0C0B2A34 mov.w @(disp,pc),Rn */
	IF(0x0C0B2A36u); { u32 tv_ = (r1 + 0x0C0B2A3Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A36 braf Rn */
}

void blk_f_0C0B2A60(sh3_t *c)
{
	LOCALS;
L_0C0B2A60: BLKS(0x0C0B2A60u);
	r1 = R32(r14); UPD(0x0C0B2A62u, 1);  /* 0C0B2A60 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B2A62 add #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0B2A66u, 2);  /* 0C0B2A64 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0B2A66 mov #imm,Rn */
	IF(0x0C0B2A68u); MACL = r1 * r9;  /* 0C0B2A68 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B2A6Cu, 4);  /* 0C0B2A6A mov.l @(disp,pc),Rn */
	IF(0x0C0B2A6Cu); r13 = MACL;  /* 0C0B2A6C sts macl,Rn */
	r13 += r12;  /* 0C0B2A6E add Rm,Rn */
	r5 = R32(r13 + 0x24u); UPD(0x0C0B2A72u, 3);  /* 0C0B2A70 mov.l @(disp,Rm),Rn */
	r10 = 0x38000u; UPD(0x0C0B2A74u, 1);  /* 0C0B2A72 mov.l @(disp,pc),Rn */
	r8 = 0xC0BB1A0u; UPD(0x0C0B2A76u, 1);  /* 0C0B2A74 mov.l @(disp,pc),Rn */
	W32(r15, r10); UPD(0x0C0B2A78u, 1);  /* 0C0B2A76 mov.l Rm,@Rn */
	r2 = 0xFFD80000u; UPD(0x0C0B2A7Au, 1);  /* 0C0B2A78 mov.l @(disp,pc),Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C0B2A7Cu, 1);  /* 0C0B2A7A mov.l @(disp,Rm),Rn */
	r7 = 0x100u; UPD(0x0C0B2A7Eu, 1);  /* 0C0B2A7C mov.w @(disp,pc),Rn */
	IF(0x0C0B2A7Eu); { u32 t_ = r8; PR = 0x0C0B2A82u; r5 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0B2A82u); }  /* 0C0B2A7E jsr @Rn */
L_0C0B2A82: BLKS(0x0C0B2A82u);
	r5 = 0x10u;  /* 0C0B2A82 mov #imm,Rn */
	W32(r13 + 0xCu, r5); UPD(0x0C0B2A86u, 2);  /* 0C0B2A84 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFE63Cu; UPD(0x0C0B2A88u, 1);  /* 0C0B2A86 mov.w @(disp,pc),Rn */
	IF(0x0C0B2A88u); { u32 tv_ = (r4 + 0x0C0B2A8Cu); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2A88 braf Rn */
}

void blk_f_0C0B2AC0(sh3_t *c)
{
	LOCALS;
L_0C0B2AC0: BLKS(0x0C0B2AC0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0B2AC2u, 1);  /* 0C0B2AC0 mov.l @(disp,pc),Rn */
	IF(0x0C0B2AC2u); { u32 t_ = r11; PR = 0x0C0B2AC6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B2AC6u); }  /* 0C0B2AC2 jsr @Rn */
L_0C0B2AC6: BLKS(0x0C0B2AC6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2AC6 exts.w Rm,Rn */
	IF(0x0C0B2AC8u); T = (s32)r8 >= 0;  /* 0C0B2AC8 cmp/pz Rn */
	if (T) { UPD(0x0C0B2AD4u, 5); goto L_0C0B2AD4; }  /* 0C0B2ACA bt */
L_0C0B2ACC: BLKS(0x0C0B2ACCu);
	r4 = 0xFFFFE470u; UPD(0x0C0B2ACEu, 1);  /* 0C0B2ACC mov.w @(disp,pc),Rn */
	IF(0x0C0B2ACEu); { u32 tv_ = (r4 + 0x0C0B2AD2u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2ACE braf Rn */
L_0C0B2AD4: BLKS(0x0C0B2AD4u);
	r7 = 0xB4u; UPD(0x0C0B2AD6u, 1);  /* 0C0B2AD4 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2AD8u, 1);  /* 0C0B2AD6 mov.l @Rm,Rn */
	IF(0x0C0B2AD8u); MACL = r4 * r7;  /* 0C0B2AD8 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B2ADCu, 3);  /* 0C0B2ADA mov.l @(disp,pc),Rn */
	IF(0x0C0B2ADCu); r9 = MACL;  /* 0C0B2ADC sts macl,Rn */
	r9 += r6;  /* 0C0B2ADE add Rm,Rn */
	r13 = R32(r9); UPD(0x0C0B2AE2u, 3);  /* 0C0B2AE0 mov.l @Rm,Rn */
	IF(0x0C0B2AE2u); MACL = r8 * r7;  /* 0C0B2AE2 mul.l Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C0B2AE6u, 3);  /* 0C0B2AE4 mov.l @(disp,pc),Rn */
	r13 &= r2;  /* 0C0B2AE6 and Rm,Rn */
	W32(r9, r13); UPD(0x0C0B2AEAu, 2);  /* 0C0B2AE8 mov.l Rm,@Rn */
	IF(0x0C0B2AEAu); r7 = MACL;  /* 0C0B2AEA sts macl,Rn */
	r7 += r6;  /* 0C0B2AEC add Rm,Rn */
	r3 = R32(r7); UPD(0x0C0B2AF0u, 3);  /* 0C0B2AEE mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B2AF2u, 1);  /* 0C0B2AF0 mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C0B2AF2 and Rm,Rn */
	r13 |= r3;  /* 0C0B2AF4 or Rm,Rn */
	W32(r9, r13); UPD(0x0C0B2AF8u, 3);  /* 0C0B2AF6 mov.l Rm,@Rn */
	r0 = 0xA8u; UPD(0x0C0B2AFAu, 1);  /* 0C0B2AF8 mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C0B2AFA mov Rm,Rn */
	r13 += r0;  /* 0C0B2AFC add Rm,Rn */
	r0 += r7;  /* 0C0B2AFE add Rm,Rn */
	r0 += 0x1u;  /* 0C0B2B00 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B2B04u, 5);  /* 0C0B2B02 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C0B2B04 add #imm,Rn */
	r12 = 0xAFu; UPD(0x0C0B2B08u, 2);  /* 0C0B2B06 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B2B08 mov Rm,Rn */
	IF(0x0C0B2B0Au); r10 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0B2B0Cu, 2);  /* 0C0B2B0A mov.b @(r0,Rm),Rn */
	r8 += r10;  /* 0C0B2B0C add Rm,Rn */
	r10 = 0x9Fu; UPD(0x0C0B2B10u, 2);  /* 0C0B2B0E mov.w @(disp,pc),Rn */
	W8(r13, r8); UPD(0x0C0B2B12u, 1);  /* 0C0B2B10 mov.b Rm,@Rn */
	r10 += r9;  /* 0C0B2B12 add Rm,Rn */
	r5 = R32(r7 + 0x24u); UPD(0x0C0B2B16u, 2);  /* 0C0B2B14 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C0B2B18u, 1);  /* 0C0B2B16 mov.l @(disp,Rm),Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C0B2B1Au, 1);  /* 0C0B2B18 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x30u); UPD(0x0C0B2B1Cu, 1);  /* 0C0B2B1A mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C0B2B1C add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C0B2B20u, 2);  /* 0C0B2B1E mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C0B2B20 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B2B24u, 2);  /* 0C0B2B22 mov.b @Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C0B2B26u, 1);  /* 0C0B2B24 mov.l Rm,@(disp,Rn) */
	r0 = r8 & 0xFF;  /* 0C0B2B26 extu.b Rm,Rn */
	W32(r9 + 0x28u, r6); UPD(0x0C0B2B2Au, 2);  /* 0C0B2B28 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C0B2B2A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r9 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2B34u, 4); goto L_0C0B2B34; } UPD(0x0C0B2B30u, 1); goto L_0C0B2B30; }  /* 0C0B2B2C bf/s */
L_0C0B2B30: BLKS(0x0C0B2B30u);
	{ IF(0x0C0B2B32u); T = (s32)r4 >= 0; /* slot cmp/pz Rn */ UPD(0x0C0B2C50u, 3); goto L_0C0B2C50; }  /* 0C0B2B30 bra */
L_0C0B2B34: BLKS(0x0C0B2B34u);
	r11 = 0x1u;  /* 0C0B2B34 mov #imm,Rn */
	T = (s32)r0 > (s32)r11;  /* 0C0B2B36 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B2B60u, 5); goto L_0C0B2B60; } goto L_0C0B2B3C; }  /* 0C0B2B38 bt/s */
L_0C0B2B3C: BLKS(0x0C0B2B3Cu);
	T = (r0 & r0) == 0;  /* 0C0B2B3C tst Rm,Rn */
	if (!T) { UPD(0x0C0B2BB0u, 5); goto L_0C0B2BB0; }  /* 0C0B2B3E bf */
L_0C0B2B40: BLKS(0x0C0B2B40u);
	r12 = 0xA0u; UPD(0x0C0B2B42u, 1);  /* 0C0B2B40 mov.w @(disp,pc),Rn */
	r7 += r12;  /* 0C0B2B42 add Rm,Rn */
	r9 += r12;  /* 0C0B2B44 add Rm,Rn */
	r7 += 0x1u;  /* 0C0B2B46 add #imm,Rn */
	r9 += 0x1u;  /* 0C0B2B48 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B2B4Cu, 5);  /* 0C0B2B4A mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2B4Eu, 1);  /* 0C0B2B4C mov.b @Rm,Rn */
	T = (r11 & r5) == 0;  /* 0C0B2B4E tst Rm,Rn */
	if (T) { UPD(0x0C0B2BB0u, 4); goto L_0C0B2BB0; }  /* 0C0B2B50 bt */
L_0C0B2B52: BLKS(0x0C0B2B52u);
	r1 = r8;  /* 0C0B2B52 mov Rm,Rn */
	r13 = 0xFFFFEC48u; UPD(0x0C0B2B56u, 2);  /* 0C0B2B54 mov.w @(disp,pc),Rn */
	IF(0x0C0B2B56u); { u32 tv_ = (r13 + 0x0C0B2B5Au); u32 t_ = PHYS(tv_); r1 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2B56 braf Rn */
L_0C0B2B60: BLKS(0x0C0B2B60u);
	if (!T) { UPD(0x0C0B2BB0u, 3); goto L_0C0B2BB0; }  /* 0C0B2B60 bf */
L_0C0B2B62: BLKS(0x0C0B2B62u);
	r0 = r9;  /* 0C0B2B62 mov Rm,Rn */
	r10 = 0xA5u; UPD(0x0C0B2B66u, 2);  /* 0C0B2B64 mov.w @(disp,pc),Rn */
	IF(0x0C0B2B66u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0B2B68u, 1);  /* 0C0B2B66 mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0B2B68 tst Rm,Rn */
	if (T) { UPD(0x0C0B2BB0u, 4); goto L_0C0B2BB0; }  /* 0C0B2B6A bt */
L_0C0B2B6C: BLKS(0x0C0B2B6Cu);
	r0 = R32(r9 + 0xCu); UPD(0x0C0B2B6Eu, 1);  /* 0C0B2B6C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B2B6E tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x6u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B2BF0u, 4); goto L_0C0B2BF0; } goto L_0C0B2B74; }  /* 0C0B2B70 bt/s */
L_0C0B2B74: BLKS(0x0C0B2B74u);
	if (T) { UPD(0x0C0B2BA0u, 4); goto L_0C0B2BA0; }  /* 0C0B2B74 bt */
L_0C0B2B76: BLKS(0x0C0B2B76u);
	r6 = R32(r14); UPD(0x0C0B2B78u, 1);  /* 0C0B2B76 mov.l @Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0B2B7Au, 1);  /* 0C0B2B78 mov.w @(disp,pc),Rn */
	IF(0x0C0B2B7Au); MACL = r6 * r3;  /* 0C0B2B7A mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B2B7Eu, 3);  /* 0C0B2B7C mov.l @(disp,pc),Rn */
	IF(0x0C0B2B7Eu); r3 = MACL;  /* 0C0B2B7E sts macl,Rn */
	r9 = 0x99u; UPD(0x0C0B2B82u, 2);  /* 0C0B2B80 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0B2B82 add Rm,Rn */
	r9 += r3;  /* 0C0B2B84 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B2B88u, 3);  /* 0C0B2B86 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0B2B88 add #imm,Rn */
	W8(r9, r0); UPD(0x0C0B2B8Cu, 2);  /* 0C0B2B8A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0B2B8C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B2B8E tst Rm,Rn */
	if (!T) { UPD(0x0C0B2BB0u, 5); goto L_0C0B2BB0; }  /* 0C0B2B90 bf */
L_0C0B2B92: BLKS(0x0C0B2B92u);
	r0 = 0xFFFFE526u; UPD(0x0C0B2B94u, 1);  /* 0C0B2B92 mov.w @(disp,pc),Rn */
	IF(0x0C0B2B94u); { u32 tv_ = (r0 + 0x0C0B2B98u); u32 t_ = PHYS(tv_); IF(0x0C0B2B96u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2B94 braf Rn */
L_0C0B2BA0: BLKS(0x0C0B2BA0u);
	r2 = 0x99u; UPD(0x0C0B2BA2u, 1);  /* 0C0B2BA0 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0B2BA2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2BA6u, 2);  /* 0C0B2BA4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0B2BA6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0B2BAAu, 2);  /* 0C0B2BA8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0B2BAA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B2BAC tst Rm,Rn */
	if (T) { UPD(0x0C0B2BB8u, 5); goto L_0C0B2BB8; }  /* 0C0B2BAE bt */
L_0C0B2BB0: BLKS(0x0C0B2BB0u);
	r13 = 0xFFFFE048u; UPD(0x0C0B2BB2u, 1);  /* 0C0B2BB0 mov.w @(disp,pc),Rn */
	IF(0x0C0B2BB2u); { u32 tv_ = (r13 + 0x0C0B2BB6u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2BB2 braf Rn */
L_0C0B2BB8: BLKS(0x0C0B2BB8u);
	r13 = R32(r9 + 0x8u); UPD(0x0C0B2BBAu, 1);  /* 0C0B2BB8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B2BBA add #imm,Rn */
	r0 = 0xC1E4E8Cu; UPD(0x0C0B2BBEu, 2);  /* 0C0B2BBC mov.l @(disp,pc),Rn */
	IF(0x0C0B2BBEu); r13 <<= 2;  /* 0C0B2BBE shll2 Rn */
	r13 += r0;  /* 0C0B2BC0 add Rm,Rn */
	r0 = 0xFFFFFF30u; UPD(0x0C0B2BC4u, 3);  /* 0C0B2BC2 mov.w @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0B2BC4 mov #imm,Rn */
	r11 = 0xC0BA970u; UPD(0x0C0B2BC8u, 2);  /* 0C0B2BC6 mov.l @(disp,pc),Rn */
	IF(0x0C0B2BC8u); r10 = R32(r0 + r13); UPD(0x0C0B2BCAu, 1);  /* 0C0B2BC8 mov.l @(r0,Rm),Rn */
	r3 = 0xFFF30000u; UPD(0x0C0B2BCCu, 1);  /* 0C0B2BCA mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C0B2BCC add Rm,Rn */
	r8 = 0x30000u; UPD(0x0C0B2BD0u, 2);  /* 0C0B2BCE mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0B2BD0 add Rm,Rn */
	r12 = 0xC189DE8u; UPD(0x0C0B2BD4u, 2);  /* 0C0B2BD2 mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C0B2BD6u, 1);  /* 0C0B2BD4 mov.w @(disp,pc),Rn */
	W32(r15, r8); UPD(0x0C0B2BD8u, 1);  /* 0C0B2BD6 mov.l Rm,@Rn */
	IF(0x0C0B2BD8u); { u32 t_ = r11; PR = 0x0C0B2BDCu; W32(r15 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0B2BDCu); }  /* 0C0B2BD8 jsr @Rn */
L_0C0B2BDC: BLKS(0x0C0B2BDCu);
	r7 = R32(r9 + 0xCu); UPD(0x0C0B2BDEu, 1);  /* 0C0B2BDC mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C0B2BDE mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0B2BE2u, 2);  /* 0C0B2BE0 mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C0B2BE2 add #imm,Rn */
	IF(0x0C0B2BE4u); W16(r0 + r9, r5); UPD(0x0C0B2BE6u, 2);  /* 0C0B2BE4 mov.w Rm,@(r0,Rn) */
	r15 += 0x8u;  /* 0C0B2BE6 add #imm,Rn */
	r4 = 0xFFFFE4DAu; UPD(0x0C0B2BEAu, 2);  /* 0C0B2BE8 mov.w @(disp,pc),Rn */
	IF(0x0C0B2BEAu); { u32 tv_ = (r4 + 0x0C0B2BEEu); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2BEA braf Rn */
L_0C0B2BF0: BLKS(0x0C0B2BF0u);
	r13 = 0xC0BC1B0u; UPD(0x0C0B2BF2u, 1);  /* 0C0B2BF0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0B2BF2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0B2BF6u, 2);  /* 0C0B2BF4 mov.l @Rm,Rn */
	IF(0x0C0B2BF6u); { u32 t_ = r13; PR = 0x0C0B2BFAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B2BFAu); }  /* 0C0B2BF6 jsr @Rn */
L_0C0B2BFA: BLKS(0x0C0B2BFAu);
	T = (r0 & r0) == 0;  /* 0C0B2BFA tst Rm,Rn */
	if (T) { UPD(0x0C0B2C68u, 4); goto L_0C0B2C68; }  /* 0C0B2BFC bt */
L_0C0B2BFE: BLKS(0x0C0B2BFEu);
	r1 = R32(r9 + 0xCu); UPD(0x0C0B2C00u, 1);  /* 0C0B2BFE mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C0B2C02u, 1);  /* 0C0B2C00 mov.w @(disp,pc),Rn */
	IF(0x0C0B2C02u); W16(r0 + r9, r11); UPD(0x0C0B2C04u, 1);  /* 0C0B2C02 mov.w Rm,@(r0,Rn) */
	r4 = 0xFFFFE7E8u; UPD(0x0C0B2C06u, 1);  /* 0C0B2C04 mov.w @(disp,pc),Rn */
	IF(0x0C0B2C06u); { u32 tv_ = (r4 + 0x0C0B2C0Au); u32 t_ = PHYS(tv_); r1 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2C06 braf Rn */
L_0C0B2C50: BLKS(0x0C0B2C50u);
	if (!T) { UPD(0x0C0B2C90u, 3); goto L_0C0B2C90; }  /* 0C0B2C50 bf */
L_0C0B2C52: BLKS(0x0C0B2C52u);
	IF(0x0C0B2C52u); T = (s32)r4 > 0;  /* 0C0B2C52 cmp/pl Rn */
	if (!T) { UPD(0x0C0B2C5Cu, 4); goto L_0C0B2C5C; }  /* 0C0B2C54 bf */
L_0C0B2C56: BLKS(0x0C0B2C56u);
	r13 = 0x8000u; UPD(0x0C0B2C58u, 1);  /* 0C0B2C56 mov.l @(disp,pc),Rn */
	r13 += r4;  /* 0C0B2C58 add Rm,Rn */
	W32(r9 + 0x30u, r13); UPD(0x0C0B2C5Cu, 2);  /* 0C0B2C5A mov.l Rm,@(disp,Rn) */
L_0C0B2C5C: BLKS(0x0C0B2C5Cu);
	r2 = 0xFFFFE000u; UPD(0x0C0B2C5Eu, 1);  /* 0C0B2C5C mov.w @(disp,pc),Rn */
	r3 = 0xB0000u; UPD(0x0C0B2C60u, 1);  /* 0C0B2C5E mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C0B2C60 add Rm,Rn */
	T = r2 == r3;  /* 0C0B2C62 cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2C70u, 5); goto L_0C0B2C70; } UPD(0x0C0B2C68u, 1); goto L_0C0B2C68; }  /* 0C0B2C64 bt/s */
L_0C0B2C68: BLKS(0x0C0B2C68u);
	r13 = 0xFFFFDF90u; UPD(0x0C0B2C6Au, 1);  /* 0C0B2C68 mov.w @(disp,pc),Rn */
	IF(0x0C0B2C6Au); { u32 tv_ = (r13 + 0x0C0B2C6Eu); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2C6A braf Rn */
L_0C0B2C70: BLKS(0x0C0B2C70u);
	r12 = 0xA0u; UPD(0x0C0B2C72u, 1);  /* 0C0B2C70 mov.w @(disp,pc),Rn */
	r4 = r7;  /* 0C0B2C72 mov Rm,Rn */
	r4 += r12;  /* 0C0B2C74 add Rm,Rn */
	r12 += r9;  /* 0C0B2C76 add Rm,Rn */
	r12 += 0x1u;  /* 0C0B2C78 add #imm,Rn */
	r4 += 0x1u;  /* 0C0B2C7A add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B2C7Eu, 6);  /* 0C0B2C7C mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B2C80u, 1);  /* 0C0B2C7E mov.b @Rm,Rn */
	r7 = ~r11;  /* 0C0B2C80 not Rm,Rn */
	r6 = R32(r9); UPD(0x0C0B2C84u, 2);  /* 0C0B2C82 mov.l @Rm,Rn */
	r7 &= r5;  /* 0C0B2C84 and Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C0B2C88u, 2);  /* 0C0B2C86 mov.w @(disp,pc),Rn */
	r6 &= r1;  /* 0C0B2C88 and Rm,Rn */
	W8(r4, r7); UPD(0x0C0B2C8Cu, 2);  /* 0C0B2C8A mov.b Rm,@Rn */
	{ W32(r9, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0B2B52u, 3); goto L_0C0B2B52; }  /* 0C0B2C8C bra */
L_0C0B2C90: BLKS(0x0C0B2C90u);
	r0 = 0xFFFF8000u; UPD(0x0C0B2C92u, 1);  /* 0C0B2C90 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C0B2C92 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0B2C96u, 2);  /* 0C0B2C94 mov.l Rm,@(disp,Rn) */
	{ r4 = r0; /* slot mov Rm,Rn */ UPD(0x0C0B2C52u, 3); goto L_0C0B2C52; }  /* 0C0B2C96 bra */
}

void blk_f_0C0B2CA0(sh3_t *c)
{
	LOCALS;
L_0C0B2CA0: BLKS(0x0C0B2CA0u);
	r9 = 0xC0A8CA0u; UPD(0x0C0B2CA2u, 1);  /* 0C0B2CA0 mov.l @(disp,pc),Rn */
	IF(0x0C0B2CA2u); { u32 t_ = r9; PR = 0x0C0B2CA6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B2CA6u); }  /* 0C0B2CA2 jsr @Rn */
L_0C0B2CA6: BLKS(0x0C0B2CA6u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2CA6 exts.w Rm,Rn */
	IF(0x0C0B2CA8u); T = (s32)r8 >= 0;  /* 0C0B2CA8 cmp/pz Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B2CB6u, 5); goto L_0C0B2CB6; } UPD(0x0C0B2CAEu, 1); goto L_0C0B2CAE; }  /* 0C0B2CAA bt/s */
L_0C0B2CAE: BLKS(0x0C0B2CAEu);
	r4 = 0xFFFFE28Eu; UPD(0x0C0B2CB0u, 1);  /* 0C0B2CAE mov.w @(disp,pc),Rn */
	IF(0x0C0B2CB0u); { u32 tv_ = (r4 + 0x0C0B2CB4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2CB0 braf Rn */
L_0C0B2CB6: BLKS(0x0C0B2CB6u);
	r5 = 0xB4u; UPD(0x0C0B2CB8u, 1);  /* 0C0B2CB6 mov.w @(disp,pc),Rn */
	IF(0x0C0B2CB8u); MACL = r6 * r5;  /* 0C0B2CB8 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C0B2CBCu, 3);  /* 0C0B2CBA mov.l @(disp,pc),Rn */
	IF(0x0C0B2CBCu); r6 = MACL;  /* 0C0B2CBC sts macl,Rn */
	IF(0x0C0B2CBEu); MACL = r8 * r5;  /* 0C0B2CBE mul.l Rm,Rn */
	r6 += r12;  /* 0C0B2CC0 add Rm,Rn */
	r13 = R32(r6); UPD(0x0C0B2CC4u, 5);  /* 0C0B2CC2 mov.l @Rm,Rn */
	IF(0x0C0B2CC4u); r5 = MACL;  /* 0C0B2CC4 sts macl,Rn */
	r5 += r12;  /* 0C0B2CC6 add Rm,Rn */
	r3 = 0xECFFBEFFu; UPD(0x0C0B2CCAu, 3);  /* 0C0B2CC8 mov.l @(disp,pc),Rn */
	r7 = R32(r5 + 0x24u); UPD(0x0C0B2CCCu, 1);  /* 0C0B2CCA mov.l @(disp,Rm),Rn */
	r13 &= r3;  /* 0C0B2CCC and Rm,Rn */
	r11 = R32(r6 + 0x2Cu); UPD(0x0C0B2CD0u, 2);  /* 0C0B2CCE mov.l @(disp,Rm),Rn */
	W32(r6, r13); UPD(0x0C0B2CD2u, 1);  /* 0C0B2CD0 mov.l Rm,@Rn */
	r7 += r11;  /* 0C0B2CD2 add Rm,Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C0B2CD6u, 2);  /* 0C0B2CD4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5); UPD(0x0C0B2CD8u, 1);  /* 0C0B2CD6 mov.l @Rm,Rn */
	r7 = r6;  /* 0C0B2CD8 mov Rm,Rn */
	r10 = 0xA8u; UPD(0x0C0B2CDCu, 2);  /* 0C0B2CDA mov.w @(disp,pc),Rn */
	r1 = 0x13004100u; UPD(0x0C0B2CDEu, 1);  /* 0C0B2CDC mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C0B2CDE add Rm,Rn */
	r0 &= r1;  /* 0C0B2CE0 and Rm,Rn */
	r13 |= r0;  /* 0C0B2CE2 or Rm,Rn */
	r10 += r5;  /* 0C0B2CE4 add Rm,Rn */
	r8 = 0xAFu; UPD(0x0C0B2CE8u, 5);  /* 0C0B2CE6 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0B2CE8 add #imm,Rn */
	r0 = r6;  /* 0C0B2CEA mov Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B2CEEu, 3);  /* 0C0B2CEC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0B2CEE add #imm,Rn */
	IF(0x0C0B2CF0u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B2CF2u, 2);  /* 0C0B2CF0 mov.b @(r0,Rm),Rn */
	r9 = R32(r5 + 0x28u); UPD(0x0C0B2CF4u, 1);  /* 0C0B2CF2 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C0B2CF4 add Rm,Rn */
	r4 = R32(r6 + 0x30u); UPD(0x0C0B2CF8u, 2);  /* 0C0B2CF6 mov.l @(disp,Rm),Rn */
	W32(r6, r13); UPD(0x0C0B2CFAu, 1);  /* 0C0B2CF8 mov.l Rm,@Rn */
	r9 += r4;  /* 0C0B2CFA add Rm,Rn */
	W8(r7, r11); UPD(0x0C0B2CFEu, 2);  /* 0C0B2CFC mov.b Rm,@Rn */
	r2 = R32(r5 + 0x38u); UPD(0x0C0B2D00u, 1);  /* 0C0B2CFE mov.l @(disp,Rm),Rn */
	r7 = R32(r5); UPD(0x0C0B2D02u, 1);  /* 0C0B2D00 mov.l @Rm,Rn */
	r4 = 0x4000u; UPD(0x0C0B2D04u, 1);  /* 0C0B2D02 mov.w @(disp,pc),Rn */
	W32(r6 + 0x28u, r9); UPD(0x0C0B2D06u, 1);  /* 0C0B2D04 mov.l Rm,@(disp,Rn) */
	r7 &= r4;  /* 0C0B2D06 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B2D08 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2D20u, 5); goto L_0C0B2D20; } UPD(0x0C0B2D0Eu, 1); goto L_0C0B2D0E; }  /* 0C0B2D0A bt/s */
L_0C0B2D0E: BLKS(0x0C0B2D0Eu);
	r0 = 0x98u; UPD(0x0C0B2D10u, 1);  /* 0C0B2D0E mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0B2D10 mov #imm,Rn */
	r13 = 0xFFFFDEE4u; UPD(0x0C0B2D14u, 2);  /* 0C0B2D12 mov.w @(disp,pc),Rn */
	IF(0x0C0B2D14u); { u32 tv_ = (r13 + 0x0C0B2D18u); u32 t_ = PHYS(tv_); IF(0x0C0B2D16u); W8(r0 + r6, r2); /* slot mov.b Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2D14 braf Rn */
L_0C0B2D20: BLKS(0x0C0B2D20u);
	r5 = 0x98u; UPD(0x0C0B2D22u, 1);  /* 0C0B2D20 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C0B2D22 add Rm,Rn */
	r2 = r5;  /* 0C0B2D24 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0B2D26 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2D2Au, 4);  /* 0C0B2D28 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B2D2Cu, 1);  /* 0C0B2D2A mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0B2D2C add #imm,Rn */
	r8 = r10 & 0xFF;  /* 0C0B2D2E extu.b Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C0B2D30 extu.b Rm,Rn */
	T = r8 > r3;  /* 0C0B2D32 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r2, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2D50u, 7); goto L_0C0B2D50; } UPD(0x0C0B2D38u, 1); goto L_0C0B2D38; }  /* 0C0B2D34 bf/s */
L_0C0B2D38: BLKS(0x0C0B2D38u);
	r0 = R32(r6 + 0xCu); UPD(0x0C0B2D3Au, 1);  /* 0C0B2D38 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0B2D3A add #imm,Rn */
	W8(r2, r7); UPD(0x0C0B2D3Eu, 2);  /* 0C0B2D3C mov.b Rm,@Rn */
	T = r0 == 0x8u;  /* 0C0B2D3E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2D50u, 4); goto L_0C0B2D50; } UPD(0x0C0B2D44u, 1); goto L_0C0B2D44; }  /* 0C0B2D40 bf/s */
L_0C0B2D44: BLKS(0x0C0B2D44u);
	T = (r3 & r3) == 0;  /* 0C0B2D44 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2D50u, 4); goto L_0C0B2D50; } UPD(0x0C0B2D4Au, 1); goto L_0C0B2D4A; }  /* 0C0B2D46 bt/s */
L_0C0B2D4A: BLKS(0x0C0B2D4Au);
	r13 = r4;  /* 0C0B2D4A mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0B2D4C add #imm,Rn */
	W8(r5, r13); UPD(0x0C0B2D50u, 3);  /* 0C0B2D4E mov.b Rm,@Rn */
L_0C0B2D50: BLKS(0x0C0B2D50u);
	r4 = 0xFFFFE374u; UPD(0x0C0B2D52u, 1);  /* 0C0B2D50 mov.w @(disp,pc),Rn */
	IF(0x0C0B2D52u); { u32 tv_ = (r4 + 0x0C0B2D56u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2D52 braf Rn */
}

void blk_f_0C0B2D90(sh3_t *c)
{
	LOCALS;
L_0C0B2D90: BLKS(0x0C0B2D90u);
	r9 = 0xC0A8CA0u; UPD(0x0C0B2D92u, 1);  /* 0C0B2D90 mov.l @(disp,pc),Rn */
	IF(0x0C0B2D92u); { u32 t_ = r9; PR = 0x0C0B2D96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B2D96u); }  /* 0C0B2D92 jsr @Rn */
L_0C0B2D96: BLKS(0x0C0B2D96u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2D96 exts.w Rm,Rn */
	IF(0x0C0B2D98u); T = (s32)r8 >= 0;  /* 0C0B2D98 cmp/pz Rn */
	if (!T) { UPD(0x0C0B2DAEu, 5); goto L_0C0B2DAE; }  /* 0C0B2D9A bf */
L_0C0B2D9C: BLKS(0x0C0B2D9Cu);
	r2 = 0xB4u; UPD(0x0C0B2D9Eu, 1);  /* 0C0B2D9C mov.w @(disp,pc),Rn */
	IF(0x0C0B2D9Eu); MACL = r8 * r2;  /* 0C0B2D9E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B2DA2u, 3);  /* 0C0B2DA0 mov.l @(disp,pc),Rn */
	IF(0x0C0B2DA2u); r7 = MACL;  /* 0C0B2DA2 sts macl,Rn */
	r7 += r3;  /* 0C0B2DA4 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0B2DA8u, 3);  /* 0C0B2DA6 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B2DA8 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B2DB6u, 4); goto L_0C0B2DB6; } UPD(0x0C0B2DAEu, 1); goto L_0C0B2DAE; }  /* 0C0B2DAA bt/s */
L_0C0B2DAE: BLKS(0x0C0B2DAEu);
	r4 = 0xFFFFE18Eu; UPD(0x0C0B2DB0u, 1);  /* 0C0B2DAE mov.w @(disp,pc),Rn */
	IF(0x0C0B2DB0u); { u32 tv_ = (r4 + 0x0C0B2DB4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2DB0 braf Rn */
L_0C0B2DB6: BLKS(0x0C0B2DB6u);
	IF(0x0C0B2DB6u); MACL = r0 * r2;  /* 0C0B2DB6 mul.l Rm,Rn */
	r4 = R32(r7 + 0x24u); UPD(0x0C0B2DBAu, 3);  /* 0C0B2DB8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2DBAu); r0 = MACL;  /* 0C0B2DBA sts macl,Rn */
	r0 += r3;  /* 0C0B2DBC add Rm,Rn */
	r11 = R32(r0 + 0x2Cu); UPD(0x0C0B2DC0u, 3);  /* 0C0B2DBE mov.l @(disp,Rm),Rn */
	r4 += r11;  /* 0C0B2DC0 add Rm,Rn */
	r10 = R32(r0); UPD(0x0C0B2DC4u, 2);  /* 0C0B2DC2 mov.l @Rm,Rn */
	W32(r0 + 0x24u, r4); UPD(0x0C0B2DC6u, 1);  /* 0C0B2DC4 mov.l Rm,@(disp,Rn) */
	r2 = 0xECFFFEFFu; UPD(0x0C0B2DC8u, 1);  /* 0C0B2DC6 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C0B2DC8 mov Rm,Rn */
	r6 = 0xA8u; UPD(0x0C0B2DCCu, 2);  /* 0C0B2DCA mov.w @(disp,pc),Rn */
	r10 &= r2;  /* 0C0B2DCC and Rm,Rn */
	W32(r0, r10); UPD(0x0C0B2DD0u, 2);  /* 0C0B2DCE mov.l Rm,@Rn */
	r4 += r6;  /* 0C0B2DD0 add Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C0B2DD4u, 2);  /* 0C0B2DD2 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B2DD4 add Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C0B2DD8u, 2);  /* 0C0B2DD6 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C0B2DD8 add #imm,Rn */
	r5 = 0xAFu; UPD(0x0C0B2DDCu, 2);  /* 0C0B2DDA mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0B2DDC add Rm,Rn */
	r13 = R32(r7); UPD(0x0C0B2DE0u, 2);  /* 0C0B2DDE mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C0B2DE0 add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B2DE4u, 2);  /* 0C0B2DE2 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B2DE6u, 1);  /* 0C0B2DE4 mov.b @Rm,Rn */
	r13 &= r1;  /* 0C0B2DE6 and Rm,Rn */
	IF(0x0C0B2DE8u); r12 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B2DEAu, 2);  /* 0C0B2DE8 mov.b @(r0,Rm),Rn */
	r10 |= r13;  /* 0C0B2DEA or Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C0B2DEEu, 2);  /* 0C0B2DEC mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C0B2DEE add Rm,Rn */
	r1 = R32(r0 + 0xCu); UPD(0x0C0B2DF2u, 2);  /* 0C0B2DF0 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r9); UPD(0x0C0B2DF4u, 1);  /* 0C0B2DF2 mov.l Rm,@(disp,Rn) */
	T = (r1 & r1) == 0;  /* 0C0B2DF4 tst Rm,Rn */
	W32(r0, r10); UPD(0x0C0B2DF8u, 2);  /* 0C0B2DF6 mov.l Rm,@Rn */
	W8(r4, r11); UPD(0x0C0B2DFAu, 1);  /* 0C0B2DF8 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r0 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B2E60u, 3); goto L_0C0B2E60; } UPD(0x0C0B2DFEu, 1); goto L_0C0B2DFE; }  /* 0C0B2DFA bt/s */
L_0C0B2DFE: BLKS(0x0C0B2DFEu);
	r0 = r1;  /* 0C0B2DFE mov Rm,Rn */
	T = r0 == 0x10u;  /* 0C0B2E00 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B2EC6u, 5); goto L_0C0B2EC6; }  /* 0C0B2E02 bt */
L_0C0B2E04: BLKS(0x0C0B2E04u);
	r13 = R32(r14); UPD(0x0C0B2E06u, 1);  /* 0C0B2E04 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C0B2E08u, 1);  /* 0C0B2E06 mov.w @(disp,pc),Rn */
	IF(0x0C0B2E08u); MACL = r13 * r11;  /* 0C0B2E08 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0B2E0Cu, 3);  /* 0C0B2E0A mov.l @(disp,pc),Rn */
	IF(0x0C0B2E0Cu); r9 = MACL;  /* 0C0B2E0C sts macl,Rn */
	r2 = 0x99u; UPD(0x0C0B2E10u, 2);  /* 0C0B2E0E mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0B2E10 add Rm,Rn */
	r2 += r9;  /* 0C0B2E12 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2E16u, 3);  /* 0C0B2E14 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B2E16 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0B2E18 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B2E1A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2EC6u, 6); goto L_0C0B2EC6; } UPD(0x0C0B2E20u, 1); goto L_0C0B2E20; }  /* 0C0B2E1C bf/s */
L_0C0B2E20: BLKS(0x0C0B2E20u);
	r3 = 0x0u;  /* 0C0B2E20 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C0B2E24u, 2);  /* 0C0B2E22 mov.b Rm,@Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B2E26u, 1);  /* 0C0B2E24 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0B2E28u, 1);  /* 0C0B2E26 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0B2E28 add #imm,Rn */
	W32(r9 + 0xCu, r2); UPD(0x0C0B2E2Cu, 2);  /* 0C0B2E2A mov.l Rm,@(disp,Rn) */
	IF(0x0C0B2E2Cu); { u32 t_ = r12; PR = 0x0C0B2E30u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2E30u); }  /* 0C0B2E2C jsr @Rn */
L_0C0B2E30: BLKS(0x0C0B2E30u);
	r0 = R32(r9 + 0xCu); UPD(0x0C0B2E32u, 1);  /* 0C0B2E30 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0B2E32 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B2EC6u, 4); goto L_0C0B2EC6; }  /* 0C0B2E34 bf */
L_0C0B2E36: BLKS(0x0C0B2E36u);
	IF(0x0C0B2E36u); MACL = r8 * r11;  /* 0C0B2E36 mul.l Rm,Rn */
	r1 = R32(r9); UPD(0x0C0B2E3Au, 3);  /* 0C0B2E38 mov.l @Rm,Rn */
	IF(0x0C0B2E3Au); r11 = MACL;  /* 0C0B2E3A sts macl,Rn */
	r11 += r10;  /* 0C0B2E3C add Rm,Rn */
	r10 = 0xA0u; UPD(0x0C0B2E40u, 3);  /* 0C0B2E3E mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C0B2E40 add Rm,Rn */
	r10 += r9;  /* 0C0B2E42 add Rm,Rn */
	r10 += 0x1u;  /* 0C0B2E44 add #imm,Rn */
	r11 += 0x1u;  /* 0C0B2E46 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B2E4Au, 5);  /* 0C0B2E48 mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B2E4Cu, 1);  /* 0C0B2E4A mov.b @Rm,Rn */
	r0 = ~r8;  /* 0C0B2E4C not Rm,Rn */
	r0 &= r7;  /* 0C0B2E4E and Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C0B2E52u, 3);  /* 0C0B2E50 mov.w @(disp,pc),Rn */
	W8(r11, r0); UPD(0x0C0B2E54u, 1);  /* 0C0B2E52 mov.b Rm,@Rn */
	r13 = 0xFFFFE71Eu; UPD(0x0C0B2E56u, 1);  /* 0C0B2E54 mov.w @(disp,pc),Rn */
	IF(0x0C0B2E56u); { u32 tv_ = (r13 + 0x0C0B2E5Au); u32 t_ = PHYS(tv_); r1 &= r4; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2E56 braf Rn */
L_0C0B2E60: BLKS(0x0C0B2E60u);
	r12 = 0xA0u; UPD(0x0C0B2E62u, 1);  /* 0C0B2E60 mov.w @(disp,pc),Rn */
	r7 += r12;  /* 0C0B2E62 add Rm,Rn */
	r7 += 0x1u;  /* 0C0B2E64 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B2E68u, 3);  /* 0C0B2E66 mov.b @Rm,Rn */
	r12 += r0;  /* 0C0B2E68 add Rm,Rn */
	r12 += 0x1u;  /* 0C0B2E6A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B2E6Eu, 3);  /* 0C0B2E6C mov.b @Rm,Rn */
	T = (r8 & r7) == 0;  /* 0C0B2E6E tst Rm,Rn */
	if (T) { UPD(0x0C0B2EC6u, 4); goto L_0C0B2EC6; }  /* 0C0B2E70 bt */
L_0C0B2E72: BLKS(0x0C0B2E72u);
	r5 = 0x1u;  /* 0C0B2E72 mov #imm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B2E76u, 2);  /* 0C0B2E74 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B2E78u, 1);  /* 0C0B2E76 mov.l @Rm,Rn */
	IF(0x0C0B2E78u); { u32 t_ = r10; PR = 0x0C0B2E7Cu; W32(r0 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2E7Cu); }  /* 0C0B2E78 jsr @Rn */
L_0C0B2E7C: BLKS(0x0C0B2E7Cu);
	r1 = 0xFFFFE5CEu; UPD(0x0C0B2E7Eu, 1);  /* 0C0B2E7C mov.w @(disp,pc),Rn */
	IF(0x0C0B2E7Eu); { u32 tv_ = (r1 + 0x0C0B2E82u); u32 t_ = PHYS(tv_); r4 = 0x72u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2E7E braf Rn */
L_0C0B2EC6: BLKS(0x0C0B2EC6u);
	r13 = 0xFFFFDD32u; UPD(0x0C0B2EC8u, 1);  /* 0C0B2EC6 mov.w @(disp,pc),Rn */
	IF(0x0C0B2EC8u); { u32 tv_ = (r13 + 0x0C0B2ECCu); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2EC8 braf Rn */
}

void blk_f_0C0B2E90(sh3_t *c)
{
	LOCALS;
	goto L_0C0B2E90;
L_0C0B20C0: BLKS(0x0C0B20C0u);
	W8(r11, r1); UPD(0x0C0B20C2u, 1);  /* 0C0B20C0 mov.b Rm,@Rn */
	r13 = 0xFFFFEB36u; UPD(0x0C0B20C4u, 1);  /* 0C0B20C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B20C4u); { u32 tv_ = (r13 + 0x0C0B20C8u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B20C4 braf Rn */
L_0C0B2E90: BLKS(0x0C0B2E90u);
	r9 = 0xC0A8CA0u; UPD(0x0C0B2E92u, 1);  /* 0C0B2E90 mov.l @(disp,pc),Rn */
	IF(0x0C0B2E92u); { u32 t_ = r9; PR = 0x0C0B2E96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B2E96u); }  /* 0C0B2E92 jsr @Rn */
L_0C0B2E96: BLKS(0x0C0B2E96u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B2E96 exts.w Rm,Rn */
	IF(0x0C0B2E98u); T = (s32)r8 >= 0;  /* 0C0B2E98 cmp/pz Rn */
	if (T) { UPD(0x0C0B2EA4u, 5); goto L_0C0B2EA4; }  /* 0C0B2E9A bt */
L_0C0B2E9C: BLKS(0x0C0B2E9Cu);
	r4 = 0xFFFFE0A0u; UPD(0x0C0B2E9Eu, 1);  /* 0C0B2E9C mov.w @(disp,pc),Rn */
	IF(0x0C0B2E9Eu); { u32 tv_ = (r4 + 0x0C0B2EA2u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2E9E braf Rn */
L_0C0B2EA4: BLKS(0x0C0B2EA4u);
	r1 = 0xB4u; UPD(0x0C0B2EA6u, 1);  /* 0C0B2EA4 mov.w @(disp,pc),Rn */
	IF(0x0C0B2EA6u); MACL = r8 * r1;  /* 0C0B2EA6 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B2EAAu, 3);  /* 0C0B2EA8 mov.l @(disp,pc),Rn */
	IF(0x0C0B2EAAu); r9 = MACL;  /* 0C0B2EAA sts macl,Rn */
	r9 += r2;  /* 0C0B2EAC add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0B2EB0u, 3);  /* 0C0B2EAE mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0B2EB0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B2F00u, 4); goto L_0C0B2F00; } UPD(0x0C0B2EB6u, 1); goto L_0C0B2EB6; }  /* 0C0B2EB2 bt/s */
L_0C0B2EB6: BLKS(0x0C0B2EB6u);
	IF(0x0C0B2EB6u); MACL = r6 * r1;  /* 0C0B2EB6 mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0B2EBAu, 3);  /* 0C0B2EB8 mov.l @(disp,pc),Rn */
	IF(0x0C0B2EBAu); r0 = MACL;  /* 0C0B2EBA sts macl,Rn */
	r0 += r2;  /* 0C0B2EBC add Rm,Rn */
	W32(r0 + 0x24u, r5); UPD(0x0C0B2EC0u, 3);  /* 0C0B2EBE mov.l Rm,@(disp,Rn) */
	r2 = 0x86u; UPD(0x0C0B2EC2u, 1);  /* 0C0B2EC0 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C0B2EC4u, 1);  /* 0C0B2EC2 mov.w @(disp,pc),Rn */
	IF(0x0C0B2EC4u); W16(r0 + r2, r1); UPD(0x0C0B2EC6u, 1);  /* 0C0B2EC4 mov.w Rm,@(r0,Rn) */
L_0C0B2EC6: BLKS(0x0C0B2EC6u);
	r13 = 0xFFFFDD32u; UPD(0x0C0B2EC8u, 1);  /* 0C0B2EC6 mov.w @(disp,pc),Rn */
	IF(0x0C0B2EC8u); { u32 tv_ = (r13 + 0x0C0B2ECCu); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2EC8 braf Rn */
L_0C0B2F00: BLKS(0x0C0B2F00u);
	r10 = R32(r14); UPD(0x0C0B2F02u, 1);  /* 0C0B2F00 mov.l @Rm,Rn */
	IF(0x0C0B2F02u); MACL = r10 * r1;  /* 0C0B2F02 mul.l Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0B2F06u, 3);  /* 0C0B2F04 mov.l @(disp,Rm),Rn */
	IF(0x0C0B2F06u); r10 = MACL;  /* 0C0B2F06 sts macl,Rn */
	r10 += r2;  /* 0C0B2F08 add Rm,Rn */
	r3 = R32(r10 + 0x2Cu); UPD(0x0C0B2F0Cu, 3);  /* 0C0B2F0A mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C0B2F0C add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C0B2F10u, 2);  /* 0C0B2F0E mov.l Rm,@(disp,Rn) */
	r0 = 0xA8u; UPD(0x0C0B2F12u, 1);  /* 0C0B2F10 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0B2F12 mov Rm,Rn */
	r4 += r0;  /* 0C0B2F14 add Rm,Rn */
	r0 += r9;  /* 0C0B2F16 add Rm,Rn */
	r5 = R32(r10); UPD(0x0C0B2F1Au, 4);  /* 0C0B2F18 mov.l @Rm,Rn */
	r0 += 0x1u;  /* 0C0B2F1A add #imm,Rn */
	r13 = 0xECFFFEFFu; UPD(0x0C0B2F1Eu, 2);  /* 0C0B2F1C mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0B2F1E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B2F22u, 2);  /* 0C0B2F20 mov.b @Rm,Rn */
	r5 &= r13;  /* 0C0B2F22 and Rm,Rn */
	r8 = 0xAFu; UPD(0x0C0B2F26u, 2);  /* 0C0B2F24 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0B2F26 mov Rm,Rn */
	W32(r10, r5); UPD(0x0C0B2F2Au, 2);  /* 0C0B2F28 mov.l Rm,@Rn */
	r13 = 0x7Fu;  /* 0C0B2F2A mov #imm,Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C0B2F2Eu, 2);  /* 0C0B2F2C mov.l @(disp,Rm),Rn */
	r11 = R32(r10 + 0x30u); UPD(0x0C0B2F30u, 1);  /* 0C0B2F2E mov.l @(disp,Rm),Rn */
	IF(0x0C0B2F30u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B2F32u, 1);  /* 0C0B2F30 mov.b @(r0,Rm),Rn */
	r12 += r11;  /* 0C0B2F32 add Rm,Rn */
	r6 = R32(r9); UPD(0x0C0B2F36u, 2);  /* 0C0B2F34 mov.l @Rm,Rn */
	r3 += r7;  /* 0C0B2F36 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B2F3Au, 2);  /* 0C0B2F38 mov.l @(disp,pc),Rn */
	W32(r10 + 0x28u, r12); UPD(0x0C0B2F3Cu, 1);  /* 0C0B2F3A mov.l Rm,@(disp,Rn) */
	r6 &= r1;  /* 0C0B2F3C and Rm,Rn */
	W8(r4, r3); UPD(0x0C0B2F40u, 2);  /* 0C0B2F3E mov.b Rm,@Rn */
	r5 |= r6;  /* 0C0B2F40 or Rm,Rn */
	r11 = 0xC069BF0u; UPD(0x0C0B2F44u, 2);  /* 0C0B2F42 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x38u); UPD(0x0C0B2F46u, 1);  /* 0C0B2F44 mov.l @(disp,Rm),Rn */
	r12 = 0xC068F00u; UPD(0x0C0B2F48u, 1);  /* 0C0B2F46 mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C0B2F4Au, 1);  /* 0C0B2F48 mov.l Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0B2F4Cu, 1);  /* 0C0B2F4A mov.l @Rm,Rn */
	r8 = 0x86u; UPD(0x0C0B2F4Eu, 1);  /* 0C0B2F4C mov.w @(disp,pc),Rn */
	IF(0x0C0B2F4Eu); { u32 t_ = r11; PR = 0x0C0B2F52u; W32(r10 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0B2F52u); }  /* 0C0B2F4E jsr @Rn */
L_0C0B2F52: BLKS(0x0C0B2F52u);
	r4 = R32(r14); UPD(0x0C0B2F54u, 1);  /* 0C0B2F52 mov.l @Rm,Rn */
	r5 = 0x2u;  /* 0C0B2F54 mov #imm,Rn */
	IF(0x0C0B2F56u); { u32 t_ = r12; PR = 0x0C0B2F5Au; r8 += r10; /* slot add Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B2F5Au); }  /* 0C0B2F56 jsr @Rn */
L_0C0B2F5A: BLKS(0x0C0B2F5Au);
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2F5Cu, 1);  /* 0C0B2F5A mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r13;  /* 0C0B2F5C cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0B2F66u, 4); goto L_0C0B2F66; }  /* 0C0B2F5E bt */
L_0C0B2F60: BLKS(0x0C0B2F60u);
	r7 = 0x80u; UPD(0x0C0B2F62u, 1);  /* 0C0B2F60 mov.w @(disp,pc),Rn */
	W16(r8, r7); UPD(0x0C0B2F64u, 1);  /* 0C0B2F62 mov.w Rm,@Rn */
	r2 = r7;  /* 0C0B2F64 mov Rm,Rn */
	UPD(0x0C0B2F66u, 1);
L_0C0B2F66: BLKS(0x0C0B2F66u);
	r7 = 0x180u; UPD(0x0C0B2F68u, 1);  /* 0C0B2F66 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0B2F68 exts.w Rm,Rn */
	r3 = (u32)(s32)(s16)r7;  /* 0C0B2F6A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0B2F6C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0B2F78u, 6); goto L_0C0B2F78; } goto L_0C0B2F72; }  /* 0C0B2F6E bf/s */
L_0C0B2F72: BLKS(0x0C0B2F72u);
	W16(r8, r3); UPD(0x0C0B2F74u, 2);  /* 0C0B2F72 mov.w Rm,@Rn */
	r2 = r7;  /* 0C0B2F74 mov Rm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C0B2F76 exts.w Rm,Rn */
	UPD(0x0C0B2F78u, 2);
L_0C0B2F78: BLKS(0x0C0B2F78u);
	r6 = 0xFFFFFFFCu;  /* 0C0B2F78 mov #imm,Rn */
	r5 += 0xFFFFFF88u;  /* 0C0B2F7A add #imm,Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C0B2F7Eu, 3);  /* 0C0B2F7C mov.l @(disp,pc),Rn */
	IF(0x0C0B2F7Eu); ARG0(0x456Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0B2F7E shad Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C0B2F82u, 2);  /* 0C0B2F80 mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r5); UPD(0x0C0B2F84u, 1);  /* 0C0B2F82 mov.l Rm,@(disp,Rn) */
	r11 += r10;  /* 0C0B2F84 add Rm,Rn */
	IF(0x0C0B2F86u); { u32 t_ = r13; PR = 0x0C0B2F8Au; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B2F8Au); }  /* 0C0B2F86 jsr @Rn */
L_0C0B2F8A: BLKS(0x0C0B2F8Au);
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B2F8Cu, 1);  /* 0C0B2F8A mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B2F8C tst Rm,Rn */
	{ u32 c_ = T; r2 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B2FF0u, 4); goto L_0C0B2FF0; } goto L_0C0B2F92; }  /* 0C0B2F8E bt/s */
L_0C0B2F92: BLKS(0x0C0B2F92u);
	r2 += 0x1u;  /* 0C0B2F92 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B2F96u, 3);  /* 0C0B2F94 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0B2F96 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B2F98 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0B2F9A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B2EC6u, 6); goto L_0C0B2EC6; } UPD(0x0C0B2FA0u, 1); goto L_0C0B2FA0; }  /* 0C0B2F9C bf/s */
L_0C0B2FA0: BLKS(0x0C0B2FA0u);
	r7 = 0x0u;  /* 0C0B2FA0 mov #imm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0B2FA4u, 2);  /* 0C0B2FA2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B2FA6u, 1);  /* 0C0B2FA4 mov.w @Rm,Rn */
	W8(r2, r7); UPD(0x0C0B2FA8u, 1);  /* 0C0B2FA6 mov.b Rm,@Rn */
	r4 = r3;  /* 0C0B2FA8 mov Rm,Rn */
	r5 = 0xE6666u; UPD(0x0C0B2FACu, 2);  /* 0C0B2FAA mov.l @(disp,pc),Rn */
	IF(0x0C0B2FACu); { u32 t_ = r9; PR = 0x0C0B2FB0u; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B2FB0u); }  /* 0C0B2FAC jsr @Rn */
L_0C0B2FB0: BLKS(0x0C0B2FB0u);
	r13 = 0xC069AF0u; UPD(0x0C0B2FB2u, 1);  /* 0C0B2FB0 mov.l @(disp,pc),Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C0B2FB4u, 1);  /* 0C0B2FB2 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0B2FB6u, 1);  /* 0C0B2FB4 mov.l @(disp,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C0B2FB8u, 1);  /* 0C0B2FB6 mov.l @(disp,pc),Rn */
	IF(0x0C0B2FB8u); { u32 t_ = r13; PR = 0x0C0B2FBCu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B2FBCu); }  /* 0C0B2FB8 jsr @Rn */
L_0C0B2FBC: BLKS(0x0C0B2FBCu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0B2FBEu, 1);  /* 0C0B2FBC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B2FBE add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C0B2FC2u, 2);  /* 0C0B2FC0 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B2FC2 add Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C0B2FC6u, 2);  /* 0C0B2FC4 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0B2FC6 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0B2FCAu, 2);  /* 0C0B2FC8 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0B2FCA mov #imm,Rn */
	IF(0x0C0B2FCCu); { u32 t_ = r8; PR = 0x0C0B2FD0u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0B2FD0u); }  /* 0C0B2FCC jsr @Rn */
L_0C0B2FD0: BLKS(0x0C0B2FD0u);
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B2FD2u, 1);  /* 0C0B2FD0 mov.b @Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0B2FD2 add #imm,Rn */
	W8(r11, r9); UPD(0x0C0B2FD6u, 2);  /* 0C0B2FD4 mov.b Rm,@Rn */
	r11 = r9 & 0xFF;  /* 0C0B2FD6 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0B2FD8 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B300Cu, 5); goto L_0C0B300C; } goto L_0C0B2FDE; }  /* 0C0B2FDA bf/s */
L_0C0B2FDE: BLKS(0x0C0B2FDEu);
	r1 = 0xC069B90u; UPD(0x0C0B2FE0u, 2);  /* 0C0B2FDE mov.l @(disp,pc),Rn */
	r13 = 0xFFFFDF5Eu; UPD(0x0C0B2FE2u, 1);  /* 0C0B2FE0 mov.w @(disp,pc),Rn */
	IF(0x0C0B2FE2u); { u32 tv_ = (r13 + 0x0C0B2FE6u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B2FE2 braf Rn */
L_0C0B2FF0: BLKS(0x0C0B2FF0u);
	r3 = 0xA5u; UPD(0x0C0B2FF2u, 1);  /* 0C0B2FF0 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B2FF2 mov Rm,Rn */
	IF(0x0C0B2FF4u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B2FF6u, 2);  /* 0C0B2FF4 mov.b @(r0,Rm),Rn */
	r6 = 0xAu;  /* 0C0B2FF6 mov #imm,Rn */
	r0 = r4;  /* 0C0B2FF8 mov Rm,Rn */
	r12 = 0xC1E4E94u; UPD(0x0C0B2FFCu, 3);  /* 0C0B2FFA mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0B2FFC and #imm,r0 */
	r9 = 0xC0BC1B0u; UPD(0x0C0B3000u, 2);  /* 0C0B2FFE mov.l @(disp,pc),Rn */
	IF(0x0C0B3000u); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0B3002u, 1);  /* 0C0B3000 mov.b @(r0,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0B3004u, 1);  /* 0C0B3002 mov.l @Rm,Rn */
	IF(0x0C0B3004u); { u32 t_ = r9; PR = 0x0C0B3008u; r5 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B3008u); }  /* 0C0B3004 jsr @Rn */
L_0C0B3008: BLKS(0x0C0B3008u);
	T = (r0 & r0) == 0;  /* 0C0B3008 tst Rm,Rn */
	if (!T) { UPD(0x0C0B3014u, 4); goto L_0C0B3014; }  /* 0C0B300A bf */
L_0C0B300C: BLKS(0x0C0B300Cu);
	r13 = 0xFFFFDBECu; UPD(0x0C0B300Eu, 1);  /* 0C0B300C mov.w @(disp,pc),Rn */
	IF(0x0C0B300Eu); { u32 tv_ = (r13 + 0x0C0B3012u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B300E braf Rn */
L_0C0B3014: BLKS(0x0C0B3014u);
	r2 = 0xC3C4170u; UPD(0x0C0B3016u, 1);  /* 0C0B3014 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFEBu;  /* 0C0B3016 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B301Au, 2);  /* 0C0B3018 mov.b @Rm,Rn */
	r5 = 0xC297A3Cu; UPD(0x0C0B301Cu, 1);  /* 0C0B301A mov.l @(disp,pc),Rn */
	r13 = r6 & 0xFF;  /* 0C0B301C extu.b Rm,Rn */
	r10 = R32(r5); UPD(0x0C0B3020u, 2);  /* 0C0B301E mov.l @Rm,Rn */
	r0 = 0u - r13;  /* 0C0B3020 neg Rm,Rn */
	IF(0x0C0B3022u); ARG0(0x4A0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0B3022 shld Rm,Rn */
	IF(0x0C0B3024u); ARG0(0x4A7Du); { s32 s_ = (s32)r7; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0B3024 shld Rm,Rn */
	r1 = 0u - r10;  /* 0C0B3026 neg Rm,Rn */
	{ r1 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0B20C0u, 7); goto L_0C0B20C0; }  /* 0C0B3028 bra */
}

void blk_f_0C0B3080(sh3_t *c)
{
	LOCALS;
L_0C0B3080: BLKS(0x0C0B3080u);
	r10 = 0xC0A8CA0u; UPD(0x0C0B3082u, 1);  /* 0C0B3080 mov.l @(disp,pc),Rn */
	IF(0x0C0B3082u); { u32 t_ = r10; PR = 0x0C0B3086u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B3086u); }  /* 0C0B3082 jsr @Rn */
L_0C0B3086: BLKS(0x0C0B3086u);
	r8 = (u32)(s32)(s16)r0;  /* 0C0B3086 exts.w Rm,Rn */
	IF(0x0C0B3088u); T = (s32)r8 >= 0;  /* 0C0B3088 cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0B3096u, 5); goto L_0C0B3096; } UPD(0x0C0B308Eu, 1); goto L_0C0B308E; }  /* 0C0B308A bt/s */
L_0C0B308E: BLKS(0x0C0B308Eu);
	r4 = 0xFFFFDEAEu; UPD(0x0C0B3090u, 1);  /* 0C0B308E mov.w @(disp,pc),Rn */
	IF(0x0C0B3090u); { u32 tv_ = (r4 + 0x0C0B3094u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B3090 braf Rn */
L_0C0B3096: BLKS(0x0C0B3096u);
	r12 = 0xB4u; UPD(0x0C0B3098u, 1);  /* 0C0B3096 mov.w @(disp,pc),Rn */
	IF(0x0C0B3098u); MACL = r9 * r12;  /* 0C0B3098 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B309Cu, 3);  /* 0C0B309A mov.l @(disp,pc),Rn */
	IF(0x0C0B309Cu); r9 = MACL;  /* 0C0B309C sts macl,Rn */
	IF(0x0C0B309Eu); MACL = r8 * r12;  /* 0C0B309E mul.l Rm,Rn */
	r9 += r11;  /* 0C0B30A0 add Rm,Rn */
	r7 = R32(r9 + 0x2Cu); UPD(0x0C0B30A4u, 5);  /* 0C0B30A2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B30A4u); r13 = MACL;  /* 0C0B30A4 sts macl,Rn */
	r13 += r11;  /* 0C0B30A6 add Rm,Rn */
	r3 = R32(r13 + 0x24u); UPD(0x0C0B30AAu, 3);  /* 0C0B30A8 mov.l @(disp,Rm),Rn */
	r6 = R32(r9); UPD(0x0C0B30ACu, 1);  /* 0C0B30AA mov.l @Rm,Rn */
	r3 += r7;  /* 0C0B30AC add Rm,Rn */
	r4 = 0xFCFFFEFFu; UPD(0x0C0B30B0u, 2);  /* 0C0B30AE mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C0B30B2u, 1);  /* 0C0B30B0 mov.l Rm,@(disp,Rn) */
	r6 &= r4;  /* 0C0B30B2 and Rm,Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C0B30B6u, 2);  /* 0C0B30B4 mov.l @(disp,Rm),Rn */
	r3 = r9;  /* 0C0B30B6 mov Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0B30BAu, 2);  /* 0C0B30B8 mov.l @(disp,Rm),Rn */
	W32(r9, r6); UPD(0x0C0B30BCu, 1);  /* 0C0B30BA mov.l Rm,@Rn */
	r8 += r1;  /* 0C0B30BC add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C0B30C0u, 2);  /* 0C0B30BE mov.w @(disp,pc),Rn */
	W32(r9 + 0x28u, r8); UPD(0x0C0B30C2u, 1);  /* 0C0B30C0 mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C0B30C2 add Rm,Rn */
	r4 = R32(r13); UPD(0x0C0B30C6u, 2);  /* 0C0B30C4 mov.l @Rm,Rn */
	r0 += r13;  /* 0C0B30C6 add Rm,Rn */
	r2 = 0x3000100u; UPD(0x0C0B30CAu, 2);  /* 0C0B30C8 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0B30CA add #imm,Rn */
	r4 &= r2;  /* 0C0B30CC and Rm,Rn */
	r8 = R32(r13 + 0x38u); UPD(0x0C0B30D0u, 3);  /* 0C0B30CE mov.l @(disp,Rm),Rn */
	r4 |= r6;  /* 0C0B30D0 or Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B30D4u, 2);  /* 0C0B30D2 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B30D4 add #imm,Rn */
	W32(r9, r4); UPD(0x0C0B30D8u, 2);  /* 0C0B30D6 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0B30D8 mov Rm,Rn */
	W32(r9 + 0x38u, r8); UPD(0x0C0B30DCu, 2);  /* 0C0B30DA mov.l Rm,@(disp,Rn) */
	r5 = 0xAFu; UPD(0x0C0B30DEu, 1);  /* 0C0B30DC mov.w @(disp,pc),Rn */
	r9 += 0x7Eu;  /* 0C0B30DE add #imm,Rn */
	IF(0x0C0B30E0u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B30E2u, 2);  /* 0C0B30E0 mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0B30E4u, 1);  /* 0C0B30E2 mov.w @Rm,Rn */
	r7 += r10;  /* 0C0B30E4 add Rm,Rn */
	IF(0x0C0B30E6u); MACL = r2 * r12;  /* 0C0B30E6 mul.l Rm,Rn */
	W8(r3, r7); UPD(0x0C0B30EAu, 4);  /* 0C0B30E8 mov.b Rm,@Rn */
	r9 += 0xFFFFFF82u;  /* 0C0B30EA add #imm,Rn */
	IF(0x0C0B30ECu); r0 = MACL;  /* 0C0B30EC sts macl,Rn */
	r3 = 0xA0u; UPD(0x0C0B30F0u, 3);  /* 0C0B30EE mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C0B30F0 add Rm,Rn */
	r6 = 0xA7u; UPD(0x0C0B30F4u, 2);  /* 0C0B30F2 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0B30F4 add Rm,Rn */
	IF(0x0C0B30F6u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0B30F8u, 2);  /* 0C0B30F6 mov.b @(r0,Rm),Rn */
	r3 += 0x2u;  /* 0C0B30F8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B30FCu, 2);  /* 0C0B30FA mov.b @Rm,Rn */
	T = (r5 & r0) == 0;  /* 0C0B30FC tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B314Au, 4); goto L_0C0B314A; } goto L_0C0B3102; }  /* 0C0B30FE bt/s */
L_0C0B3102: BLKS(0x0C0B3102u);
	r11 = 0x100u; UPD(0x0C0B3104u, 2);  /* 0C0B3102 mov.w @(disp,pc),Rn */
	T = (r4 & r11) == 0;  /* 0C0B3104 tst Rm,Rn */
	if (T) { UPD(0x0C0B314Au, 4); goto L_0C0B314A; }  /* 0C0B3106 bt */
L_0C0B3108: BLKS(0x0C0B3108u);
	r10 = 0x9Cu; UPD(0x0C0B310Au, 1);  /* 0C0B3108 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0B310A add Rm,Rn */
	r11 = r10;  /* 0C0B310C mov Rm,Rn */
	r11 += 0x3u;  /* 0C0B310E add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B3112u, 4);  /* 0C0B3110 mov.b @Rm,Rn */
	r0 = r12 & 0xFF;  /* 0C0B3112 extu.b Rm,Rn */
	T = (r0 & r0) == 0; UPD(0x0C0B3116u, 2);  /* 0C0B3114 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B31A0u, 3); goto L_0C0B31A0; } goto L_0C0B311A; }  /* 0C0B3116 bt/s */
L_0C0B311A: BLKS(0x0C0B311Au);
	if (!T) { UPD(0x0C0B314Au, 4); goto L_0C0B314A; }  /* 0C0B311A bf */
L_0C0B311C: BLKS(0x0C0B311Cu);
	r3 += 0x1u;  /* 0C0B311C add #imm,Rn */
	r8 = 0x86u; UPD(0x0C0B3120u, 2);  /* 0C0B311E mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0B3120 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B3124u, 2);  /* 0C0B3122 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B3126u, 1);  /* 0C0B3124 mov.w @Rm,Rn */
	r2 += r4;  /* 0C0B3126 add Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0B3128 exts.w Rm,Rn */
	r0 += 0x8u;  /* 0C0B312A add #imm,Rn */
	IF(0x0C0B312Cu); r0 >>= 2;  /* 0C0B312C shlr2 Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0B3130u, 5);  /* 0C0B312E mov.l @(disp,pc),Rn */
	IF(0x0C0B3130u); r0 >>= 2;  /* 0C0B3130 shlr2 Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B3134u, 2);  /* 0C0B3132 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C0B3134 and #imm,r0 */
	r4 = R32(r14); UPD(0x0C0B3138u, 2);  /* 0C0B3136 mov.l @Rm,Rn */
	W16(r8, r2); UPD(0x0C0B313Au, 1);  /* 0C0B3138 mov.w Rm,@Rn */
	IF(0x0C0B313Au); { u32 t_ = r12; PR = 0x0C0B313Eu; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B313Eu); }  /* 0C0B313A jsr @Rn */
L_0C0B313E: BLKS(0x0C0B313Eu);
	r4 = R32(r14); UPD(0x0C0B3140u, 1);  /* 0C0B313E mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C0B3140 mov #imm,Rn */
	IF(0x0C0B3142u); { u32 t_ = r13; PR = 0x0C0B3146u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B3146u); }  /* 0C0B3142 jsr @Rn */
L_0C0B3146: BLKS(0x0C0B3146u);
	T = (r0 & r0) == 0;  /* 0C0B3146 tst Rm,Rn */
	if (!T) { UPD(0x0C0B3152u, 4); goto L_0C0B3152; }  /* 0C0B3148 bf */
L_0C0B314A: BLKS(0x0C0B314Au);
	r13 = 0xFFFFDAAEu; UPD(0x0C0B314Cu, 1);  /* 0C0B314A mov.w @(disp,pc),Rn */
	IF(0x0C0B314Cu); { u32 tv_ = (r13 + 0x0C0B3150u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B314C braf Rn */
L_0C0B3152: BLKS(0x0C0B3152u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B3154u, 1);  /* 0C0B3152 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C0B3154 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B3190u, 4); goto L_0C0B3190; }  /* 0C0B3156 bt */
L_0C0B3158: BLKS(0x0C0B3158u);
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B315Au, 1);  /* 0C0B3158 mov.w @Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0B315Cu, 1);  /* 0C0B315A mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C0B315Eu, 1);  /* 0C0B315C mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C0B315E mov Rm,Rn */
	IF(0x0C0B3160u); { u32 t_ = r13; PR = 0x0C0B3164u; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B3164u); }  /* 0C0B3160 jsr @Rn */
L_0C0B3164: BLKS(0x0C0B3164u);
	r8 = 0xC069AF0u; UPD(0x0C0B3166u, 1);  /* 0C0B3164 mov.l @(disp,pc),Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0B3168u, 1);  /* 0C0B3166 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0B316Au, 1);  /* 0C0B3168 mov.l @(disp,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C0B316Cu, 1);  /* 0C0B316A mov.l @(disp,pc),Rn */
	IF(0x0C0B316Cu); { u32 t_ = r8; PR = 0x0C0B3170u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B3170u); }  /* 0C0B316C jsr @Rn */
L_0C0B3170: BLKS(0x0C0B3170u);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B3172u, 1);  /* 0C0B3170 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B3172 add #imm,Rn */
	r7 = 0x20000u; UPD(0x0C0B3176u, 2);  /* 0C0B3174 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0B3176 add Rm,Rn */
	r9 = 0xC0BA480u; UPD(0x0C0B317Au, 2);  /* 0C0B3178 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0B317A mov #imm,Rn */
	W32(r15, r7); UPD(0x0C0B317Eu, 2);  /* 0C0B317C mov.l Rm,@Rn */
	r5 = r11;  /* 0C0B317E mov Rm,Rn */
	IF(0x0C0B3180u); { u32 t_ = r9; PR = 0x0C0B3184u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0B3184u); }  /* 0C0B3180 jsr @Rn */
L_0C0B3184: BLKS(0x0C0B3184u);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0B3186u, 1);  /* 0C0B3184 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0B3186 add #imm,Rn */
	r13 = 0xFFFFEA6Eu; UPD(0x0C0B318Au, 2);  /* 0C0B3188 mov.w @(disp,pc),Rn */
	IF(0x0C0B318Au); { u32 tv_ = (r13 + 0x0C0B318Eu); u32 t_ = PHYS(tv_); W8(r10, r3); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B318A braf Rn */
L_0C0B3190: BLKS(0x0C0B3190u);
	r12 = 0xC069B90u; UPD(0x0C0B3192u, 1);  /* 0C0B3190 mov.l @(disp,pc),Rn */
	IF(0x0C0B3192u); { u32 t_ = r12; PR = 0x0C0B3196u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B3196u); }  /* 0C0B3192 jsr @Rn */
L_0C0B3196: BLKS(0x0C0B3196u);
	r1 = 0x0u;  /* 0C0B3196 mov #imm,Rn */
	r13 = 0xFFFFE604u; UPD(0x0C0B319Au, 2);  /* 0C0B3198 mov.w @(disp,pc),Rn */
	IF(0x0C0B319Au); { u32 tv_ = (r13 + 0x0C0B319Eu); u32 t_ = PHYS(tv_); W8(r11, r1); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B319A braf Rn */
L_0C0B31A0: BLKS(0x0C0B31A0u);
	r12 = 0xC069BF0u; UPD(0x0C0B31A2u, 1);  /* 0C0B31A0 mov.l @(disp,pc),Rn */
	r8 = 0xC068F00u; UPD(0x0C0B31A4u, 1);  /* 0C0B31A2 mov.l @(disp,pc),Rn */
	IF(0x0C0B31A4u); { u32 t_ = r12; PR = 0x0C0B31A8u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0B31A8u); }  /* 0C0B31A4 jsr @Rn */
L_0C0B31A8: BLKS(0x0C0B31A8u);
	r4 = R32(r14); UPD(0x0C0B31AAu, 1);  /* 0C0B31A8 mov.l @Rm,Rn */
	IF(0x0C0B31AAu); { u32 t_ = r8; PR = 0x0C0B31AEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B31AEu); }  /* 0C0B31AA jsr @Rn */
L_0C0B31AE: BLKS(0x0C0B31AEu);
	r6 = 0x86u; UPD(0x0C0B31B0u, 1);  /* 0C0B31AE mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B31B0 mov Rm,Rn */
	IF(0x0C0B31B2u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0B31B4u, 2);  /* 0C0B31B2 mov.w @(r0,Rm),Rn */
	r5 += 0x8u;  /* 0C0B31B4 add #imm,Rn */
	IF(0x0C0B31B6u); r5 >>= 2;  /* 0C0B31B6 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C0B31B8 mov #imm,Rn */
	IF(0x0C0B31BAu); r5 >>= 2;  /* 0C0B31BA shlr2 Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C0B31BEu, 5);  /* 0C0B31BC mov.l @(disp,pc),Rn */
	r5 &= r0;  /* 0C0B31BE and Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C0B31C2u, 2);  /* 0C0B31C0 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r5); UPD(0x0C0B31C4u, 1);  /* 0C0B31C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B31C4u); { u32 t_ = r10; PR = 0x0C0B31C8u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B31C8u); }  /* 0C0B31C4 jsr @Rn */
L_0C0B31C8: BLKS(0x0C0B31C8u);
	r4 = R32(r14); UPD(0x0C0B31CAu, 1);  /* 0C0B31C8 mov.l @Rm,Rn */
	r5 = 0x5Au;  /* 0C0B31CA mov #imm,Rn */
	IF(0x0C0B31CCu); { u32 t_ = r13; PR = 0x0C0B31D0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0B31D0u); }  /* 0C0B31CC jsr @Rn */
L_0C0B31D0: BLKS(0x0C0B31D0u);
	T = (r0 & r0) == 0;  /* 0C0B31D0 tst Rm,Rn */
	if (T) { UPD(0x0C0B32A0u, 4); goto L_0C0B32A0; }  /* 0C0B31D2 bt */
L_0C0B31D4: BLKS(0x0C0B31D4u);
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B31D6u, 1);  /* 0C0B31D4 mov.b @Rm,Rn */
	r13 = 0xFFFFEEE4u; UPD(0x0C0B31D8u, 1);  /* 0C0B31D6 mov.w @(disp,pc),Rn */
	IF(0x0C0B31D8u); { u32 tv_ = (r13 + 0x0C0B31DCu); u32 t_ = PHYS(tv_); r1 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B31D8 braf Rn */
L_0C0B32A0: BLKS(0x0C0B32A0u);
	r13 = 0xFFFFD958u; UPD(0x0C0B32A2u, 1);  /* 0C0B32A0 mov.w @(disp,pc),Rn */
	IF(0x0C0B32A2u); { u32 tv_ = (r13 + 0x0C0B32A6u); u32 t_ = PHYS(tv_); r14 += 0x44u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B32A2 braf Rn */
}


#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C08CC50(sh3_t *c)
{
	LOCALS;
L_0C08CC50: BLKS(0x0C08CC50u);
	r5 = 0xC0A9A70u; UPD(0x0C08CC52u, 1);  /* 0C08CC50 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08CC52 mov Rm,Rn */
	r15 = r14;  /* 0C08CC54 mov Rm,Rn */
	IF(0x0C08CC56u); PR = R32(r15); r15 += 4; UPD(0x0C08CC58u, 3);  /* 0C08CC56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CC5Au, 1);  /* 0C08CC58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CC5Cu, 1);  /* 0C08CC5A mov.l @Rm+,Rn */
	IF(0x0C08CC5Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C08CC5C jmp @Rn */
}

void blk_f_0C08CC60(sh3_t *c)
{
	LOCALS;
L_0C08CC60: BLKS(0x0C08CC60u);
	r9 = 0xB4u; UPD(0x0C08CC62u, 1);  /* 0C08CC60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CC62 add #imm,Rn */
	IF(0x0C08CC64u); MACL = r8 * r9;  /* 0C08CC64 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08CC68u, 4);  /* 0C08CC66 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08CC68 mov #imm,Rn */
	IF(0x0C08CC6Au); r9 = MACL;  /* 0C08CC6A sts macl,Rn */
	r9 += r0;  /* 0C08CC6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08CC70u, 4);  /* 0C08CC6E mov.w @(disp,pc),Rn */
	IF(0x0C08CC70u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CC72u, 1);  /* 0C08CC70 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C08CC72 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08CC76u, 2);  /* 0C08CC74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CC76 add #imm,Rn */
	IF(0x0C08CC78u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CC7Au, 2);  /* 0C08CC78 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08CC7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08CC7Eu, 2);  /* 0C08CC7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08CC80u, 1);  /* 0C08CC7E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08CC82u, 1);  /* 0C08CC80 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08CC84u, 1);  /* 0C08CC82 mov.l @(disp,Rm),Rn */
	IF(0x0C08CC84u); { u32 t_ = r0; PR = 0x0C08CC88u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08CC88u); }  /* 0C08CC84 jsr @Rn */
L_0C08CC88: BLKS(0x0C08CC88u);
	r4 = r8;  /* 0C08CC88 mov Rm,Rn */
	r8 = 0xC0A8CA0u; UPD(0x0C08CC8Cu, 2);  /* 0C08CC8A mov.l @(disp,pc),Rn */
	IF(0x0C08CC8Cu); { u32 t_ = r8; PR = 0x0C08CC90u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08CC90u); }  /* 0C08CC8C jsr @Rn */
L_0C08CC90: BLKS(0x0C08CC90u);
	IF(0x0C08CC90u); T = (s32)r0 >= 0;  /* 0C08CC90 cmp/pz Rn */
	if (!T) { UPD(0x0C08CCC0u, 4); goto L_0C08CCC0; }  /* 0C08CC92 bf */
L_0C08CC94: BLKS(0x0C08CC94u);
	r15 += 0xFFFFFFF8u;  /* 0C08CC94 add #imm,Rn */
	r4 = 0x0u;  /* 0C08CC96 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C08CC9Au, 3);  /* 0C08CC98 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08CC9Cu, 1);  /* 0C08CC9A mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C08CC9Eu, 1);  /* 0C08CC9C mov.l Rm,@Rn */
	r4 = 0x8u;  /* 0C08CC9E mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C08CCA2u, 2);  /* 0C08CCA0 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C08CCA2 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C08CCA6u, 2);  /* 0C08CCA4 mov.l @(disp,Rm),Rn */
	IF(0x0C08CCA6u); { u32 t_ = r8; PR = 0x0C08CCAAu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08CCAAu); }  /* 0C08CCA6 jsr @Rn */
L_0C08CCAA: BLKS(0x0C08CCAAu);
	r15 += 0x8u;  /* 0C08CCAA add #imm,Rn */
	UPD(0x0C08CCACu, 1);
L_0C08CCAC: BLKS(0x0C08CCACu);
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 2);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CCC0: BLKS(0x0C08CCC0u);
	r7 = 0x0u;  /* 0C08CCC0 mov #imm,Rn */
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCACu, 4); goto L_0C08CCAC; }  /* 0C08CCC2 bra */
}

void blk_f_0C08CCD0(sh3_t *c)
{
	LOCALS;
	goto L_0C08CCD0;
L_0C08CCA0: BLKS(0x0C08CCA0u);
	r8 = 0xC07CD80u; UPD(0x0C08CCA2u, 1);  /* 0C08CCA0 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C08CCA2 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C08CCA6u, 2);  /* 0C08CCA4 mov.l @(disp,Rm),Rn */
	IF(0x0C08CCA6u); { u32 t_ = r8; PR = 0x0C08CCAAu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08CCAAu); }  /* 0C08CCA6 jsr @Rn */
L_0C08CCAA: BLKS(0x0C08CCAAu);
	r15 += 0x8u;  /* 0C08CCAA add #imm,Rn */
	UPD(0x0C08CCACu, 1);
L_0C08CCAC: BLKS(0x0C08CCACu);
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 2);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CCC0: BLKS(0x0C08CCC0u);
	r7 = 0x0u;  /* 0C08CCC0 mov #imm,Rn */
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCACu, 4); goto L_0C08CCAC; }  /* 0C08CCC2 bra */
L_0C08CCD0: BLKS(0x0C08CCD0u);
	r9 = 0xB4u; UPD(0x0C08CCD2u, 1);  /* 0C08CCD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CCD2 add #imm,Rn */
	IF(0x0C08CCD4u); MACL = r8 * r9;  /* 0C08CCD4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08CCD8u, 4);  /* 0C08CCD6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08CCD8 mov #imm,Rn */
	IF(0x0C08CCDAu); r9 = MACL;  /* 0C08CCDA sts macl,Rn */
	r9 += r0;  /* 0C08CCDC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08CCE0u, 4);  /* 0C08CCDE mov.w @(disp,pc),Rn */
	IF(0x0C08CCE0u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CCE2u, 1);  /* 0C08CCE0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C08CCE2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08CCE6u, 2);  /* 0C08CCE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CCE6 add #imm,Rn */
	IF(0x0C08CCE8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CCEAu, 2);  /* 0C08CCE8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08CCEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08CCEEu, 2);  /* 0C08CCEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08CCF0u, 1);  /* 0C08CCEE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08CCF2u, 1);  /* 0C08CCF0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08CCF4u, 1);  /* 0C08CCF2 mov.l @(disp,Rm),Rn */
	IF(0x0C08CCF4u); { u32 t_ = r0; PR = 0x0C08CCF8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08CCF8u); }  /* 0C08CCF4 jsr @Rn */
L_0C08CCF8: BLKS(0x0C08CCF8u);
	r4 = r8;  /* 0C08CCF8 mov Rm,Rn */
	r8 = 0xC0A8CA0u; UPD(0x0C08CCFCu, 2);  /* 0C08CCFA mov.l @(disp,pc),Rn */
	IF(0x0C08CCFCu); { u32 t_ = r8; PR = 0x0C08CD00u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08CD00u); }  /* 0C08CCFC jsr @Rn */
L_0C08CD00: BLKS(0x0C08CD00u);
	IF(0x0C08CD00u); T = (s32)r0 >= 0;  /* 0C08CD00 cmp/pz Rn */
	if (!T) { UPD(0x0C08CCC0u, 4); goto L_0C08CCC0; }  /* 0C08CD02 bf */
L_0C08CD04: BLKS(0x0C08CD04u);
	r15 += 0xFFFFFFF8u;  /* 0C08CD04 add #imm,Rn */
	r4 = 0x0u;  /* 0C08CD06 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C08CD0Au, 3);  /* 0C08CD08 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08CD0Cu, 1);  /* 0C08CD0A mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C08CD0Eu, 1);  /* 0C08CD0C mov.l Rm,@Rn */
	{ r4 = 0xBu; /* slot mov #imm,Rn */ UPD(0x0C08CCA0u, 3); goto L_0C08CCA0; }  /* 0C08CD0E bra */
}

void blk_f_0C08CD20(sh3_t *c)
{
	LOCALS;
	goto L_0C08CD20;
L_0C08CCAA: BLKS(0x0C08CCAAu);
	r15 += 0x8u;  /* 0C08CCAA add #imm,Rn */
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 3);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CD20: BLKS(0x0C08CD20u);
	r9 = 0xB4u; UPD(0x0C08CD22u, 1);  /* 0C08CD20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CD22 add #imm,Rn */
	IF(0x0C08CD24u); MACL = r8 * r9;  /* 0C08CD24 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08CD28u, 4);  /* 0C08CD26 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08CD28 mov #imm,Rn */
	IF(0x0C08CD2Au); r8 = MACL;  /* 0C08CD2A sts macl,Rn */
	r8 += r0;  /* 0C08CD2C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08CD30u, 4);  /* 0C08CD2E mov.w @(disp,pc),Rn */
	IF(0x0C08CD30u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD32u, 1);  /* 0C08CD30 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C08CD32 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08CD36u, 2);  /* 0C08CD34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CD36 add #imm,Rn */
	IF(0x0C08CD38u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD3Au, 2);  /* 0C08CD38 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08CD3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08CD3Eu, 2);  /* 0C08CD3C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C08CD40u, 1);  /* 0C08CD3E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08CD42u, 1);  /* 0C08CD40 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08CD44u, 1);  /* 0C08CD42 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08CD46u, 1);  /* 0C08CD44 mov.l @(disp,Rm),Rn */
	IF(0x0C08CD46u); { u32 t_ = r0; PR = 0x0C08CD4Au; IF(0x0C08CD48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFD30, 0x0C0BFD30u, 0x0C08CD4Au); }  /* 0C08CD46 jsr @Rn */
L_0C08CD4A: BLKS(0x0C08CD4Au);
	r2 = 0x0u;  /* 0C08CD4A mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCAAu, 4); goto L_0C08CCAA; }  /* 0C08CD4C bra */
}

void blk_f_0C08CD50(sh3_t *c)
{
	LOCALS;
	goto L_0C08CD50;
L_0C08CCAA: BLKS(0x0C08CCAAu);
	r15 += 0x8u;  /* 0C08CCAA add #imm,Rn */
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 3);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CD46: BLKS(0x0C08CD46u);
	IF(0x0C08CD46u); { u32 t_ = r0; PR = 0x0C08CD4Au; IF(0x0C08CD48u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08CD4Au); }  /* 0C08CD46 jsr @Rn */
L_0C08CD4A: BLKS(0x0C08CD4Au);
	r2 = 0x0u;  /* 0C08CD4A mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCAAu, 4); goto L_0C08CCAA; }  /* 0C08CD4C bra */
L_0C08CD50: BLKS(0x0C08CD50u);
	r3 = 0xB4u; UPD(0x0C08CD52u, 1);  /* 0C08CD50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CD52 add #imm,Rn */
	IF(0x0C08CD54u); MACL = r8 * r3;  /* 0C08CD54 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08CD58u, 4);  /* 0C08CD56 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08CD5Au, 1);  /* 0C08CD58 mov.w @(disp,pc),Rn */
	IF(0x0C08CD5Au); r8 = MACL;  /* 0C08CD5A sts macl,Rn */
	r8 += r2;  /* 0C08CD5C add Rm,Rn */
	IF(0x0C08CD5Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD60u, 3);  /* 0C08CD5E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08CD60 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08CD64u, 2);  /* 0C08CD62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CD64 add #imm,Rn */
	IF(0x0C08CD66u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD68u, 2);  /* 0C08CD66 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08CD68 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08CD6Cu, 2);  /* 0C08CD6A mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C08CD6C mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C08CD70u, 2);  /* 0C08CD6E mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08CD72u, 1);  /* 0C08CD70 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08CD74u, 1);  /* 0C08CD72 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08CD46u, 3); goto L_0C08CD46; }  /* 0C08CD74 bra */
}

void blk_f_0C08CD80(sh3_t *c)
{
	LOCALS;
	goto L_0C08CD80;
L_0C08CCAA: BLKS(0x0C08CCAAu);
	r15 += 0x8u;  /* 0C08CCAA add #imm,Rn */
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 3);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CD46: BLKS(0x0C08CD46u);
	IF(0x0C08CD46u); { u32 t_ = r0; PR = 0x0C08CD4Au; IF(0x0C08CD48u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08CD4Au); }  /* 0C08CD46 jsr @Rn */
L_0C08CD4A: BLKS(0x0C08CD4Au);
	r2 = 0x0u;  /* 0C08CD4A mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCAAu, 4); goto L_0C08CCAA; }  /* 0C08CD4C bra */
L_0C08CD70: BLKS(0x0C08CD70u);
	r6 = R32(r8 + 0x24u); UPD(0x0C08CD72u, 1);  /* 0C08CD70 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08CD74u, 1);  /* 0C08CD72 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08CD46u, 3); goto L_0C08CD46; }  /* 0C08CD74 bra */
L_0C08CD80: BLKS(0x0C08CD80u);
	r7 = 0xB4u; UPD(0x0C08CD82u, 1);  /* 0C08CD80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CD82 add #imm,Rn */
	IF(0x0C08CD84u); MACL = r8 * r7;  /* 0C08CD84 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08CD88u, 4);  /* 0C08CD86 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08CD8Au, 1);  /* 0C08CD88 mov.w @(disp,pc),Rn */
	IF(0x0C08CD8Au); r8 = MACL;  /* 0C08CD8A sts macl,Rn */
	r8 += r6;  /* 0C08CD8C add Rm,Rn */
	IF(0x0C08CD8Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD90u, 3);  /* 0C08CD8E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08CD90 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08CD94u, 2);  /* 0C08CD92 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CD94 add #imm,Rn */
	IF(0x0C08CD96u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CD98u, 2);  /* 0C08CD96 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C08CD98 mov #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08CD9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08CD9Eu, 3);  /* 0C08CD9C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08CD70u, 3); goto L_0C08CD70; }  /* 0C08CD9E bra */
}

void blk_f_0C08CDB0(sh3_t *c)
{
	LOCALS;
	goto L_0C08CDB0;
L_0C08CCAC: BLKS(0x0C08CCACu);
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 2);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CCC2: BLKS(0x0C08CCC2u);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08CCACu, 3); goto L_0C08CCAC; }  /* 0C08CCC2 bra */
L_0C08CDB0: BLKS(0x0C08CDB0u);
	r9 = 0xB4u; UPD(0x0C08CDB2u, 1);  /* 0C08CDB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CDB2 add #imm,Rn */
	IF(0x0C08CDB4u); MACL = r8 * r9;  /* 0C08CDB4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08CDB8u, 4);  /* 0C08CDB6 mov.l @(disp,pc),Rn */
	IF(0x0C08CDB8u); r9 = MACL;  /* 0C08CDB8 sts macl,Rn */
	r9 += r0;  /* 0C08CDBA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08CDBEu, 3);  /* 0C08CDBC mov.w @(disp,pc),Rn */
	IF(0x0C08CDBEu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CDC0u, 1);  /* 0C08CDBE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08CDC0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08CDC4u, 2);  /* 0C08CDC2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08CDC4 add #imm,Rn */
	IF(0x0C08CDC6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CDC8u, 2);  /* 0C08CDC6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C08CDC8 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C08CDCA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08CDCEu, 3);  /* 0C08CDCC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08CDD0u, 1);  /* 0C08CDCE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08CDD2u, 1);  /* 0C08CDD0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08CDD4u, 1);  /* 0C08CDD2 mov.l @(disp,Rm),Rn */
	IF(0x0C08CDD4u); { u32 t_ = r0; PR = 0x0C08CDD8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08CDD8u); }  /* 0C08CDD4 jsr @Rn */
L_0C08CDD8: BLKS(0x0C08CDD8u);
	r4 = r8;  /* 0C08CDD8 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08CDDCu, 2);  /* 0C08CDDA mov.l @(disp,pc),Rn */
	IF(0x0C08CDDCu); { u32 t_ = r8; PR = 0x0C08CDE0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08CDE0u); }  /* 0C08CDDC jsr @Rn */
L_0C08CDE0: BLKS(0x0C08CDE0u);
	IF(0x0C08CDE0u); T = (s32)r0 >= 0;  /* 0C08CDE0 cmp/pz Rn */
	if (!T) { UPD(0x0C08CDF0u, 4); goto L_0C08CDF0; }  /* 0C08CDE2 bf */
L_0C08CDE4: BLKS(0x0C08CDE4u);
	r4 = 0xEu;  /* 0C08CDE4 mov #imm,Rn */
	r8 = 0xC07DE60u; UPD(0x0C08CDE8u, 2);  /* 0C08CDE6 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C08CDE8 mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08CDECu, 2);  /* 0C08CDEA mov.l @(disp,Rm),Rn */
	IF(0x0C08CDECu); { u32 t_ = r8; PR = 0x0C08CDF0u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08CDF0u); }  /* 0C08CDEC jsr @Rn */
L_0C08CDF0: BLKS(0x0C08CDF0u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08CCC2u, 3); goto L_0C08CCC2; }  /* 0C08CDF0 bra */
}

void blk_f_0C08CE20(sh3_t *c)
{
	LOCALS;
	goto L_0C08CE20;
L_0C08CC00: BLKS(0x0C08CC00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC02u, 1);  /* 0C08CC00 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08CC04u, 1);  /* 0C08CC02 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08CC04 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC08u, 2);  /* 0C08CC06 mov.l Rm,@-Rn */
	IF(0x0C08CC08u); MACL = r8 * r3;  /* 0C08CC08 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC0Cu, 3);  /* 0C08CC0A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08CC0Eu, 1);  /* 0C08CC0C mov.l @(disp,pc),Rn */
	IF(0x0C08CC0Eu); r2 = MACL;  /* 0C08CC0E sts macl,Rn */
	IF(0x0C08CC10u); r15 -= 4; W32(r15, PR); UPD(0x0C08CC12u, 2);  /* 0C08CC10 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08CC12 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08CC16u, 2);  /* 0C08CC14 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C08CC16 mov #imm,Rn */
	T = r2 > r0;  /* 0C08CC18 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08CCACu, 5); goto L_0C08CCAC; } goto L_0C08CC1E; }  /* 0C08CC1A bt/s */
L_0C08CC1E: BLKS(0x0C08CC1Eu);
	r0 = 0xC08CC30u;  /* 0C08CC1E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08CC20 add Rm,Rn */
	IF(0x0C08CC22u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08CC24u, 4);  /* 0C08CC22 mov.w @(r0,Rm),Rn */
	IF(0x0C08CC24u); { u32 tv_ = (r4 + 0x0C08CC28u); u32 t_ = PHYS(tv_); IF(0x0C08CC26u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08CC24 braf Rn */
L_0C08CCAC: BLKS(0x0C08CCACu);
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 2);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
L_0C08CE20: BLKS(0x0C08CE20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE22u, 1);  /* 0C08CE20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE24u, 1);  /* 0C08CE22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08CE24 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE28u, 2);  /* 0C08CE26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE2Au, 1);  /* 0C08CE28 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE2Cu, 1);  /* 0C08CE2A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08CE2Eu, 1);  /* 0C08CE2C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE30u, 1);  /* 0C08CE2E mov.l Rm,@-Rn */
	IF(0x0C08CE30u); MACL = r8 * r3;  /* 0C08CE30 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08CE34u, 3);  /* 0C08CE32 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08CE36u, 1);  /* 0C08CE34 mov.l @(disp,pc),Rn */
	IF(0x0C08CE36u); r2 = MACL;  /* 0C08CE36 sts macl,Rn */
	IF(0x0C08CE38u); r15 -= 4; W32(r15, PR); UPD(0x0C08CE3Au, 2);  /* 0C08CE38 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08CE3A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08CE3Eu, 2);  /* 0C08CE3C mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C08CE3E mov #imm,Rn */
	T = r2 > r0;  /* 0C08CE40 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08CE98u, 5); goto L_0C08CE98; } goto L_0C08CE46; }  /* 0C08CE42 bt/s */
L_0C08CE46: BLKS(0x0C08CE46u);
	r0 = 0xC08CE58u;  /* 0C08CE46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08CE48 add Rm,Rn */
	IF(0x0C08CE4Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08CE4Cu, 4);  /* 0C08CE4A mov.w @(r0,Rm),Rn */
	IF(0x0C08CE4Cu); { u32 tv_ = (r4 + 0x0C08CE50u); u32 t_ = PHYS(tv_); IF(0x0C08CE4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08CE70u: goto L_0C08CE70; case 0x0C08CF10u: goto L_0C08CF10; case 0x0C08CF60u: goto L_0C08CF60; case 0x0C08CFA0u: goto L_0C08CFA0; case 0x0C08D020u: goto L_0C08D020; case 0x0C08D0E0u: goto L_0C08D0E0; case 0x0C08D210u: goto L_0C08D210; default: JUMPD(tv_); } }  /* 0C08CE4C braf Rn */
L_0C08CE70: BLKS(0x0C08CE70u);
	r9 = 0xC0A9CB0u; UPD(0x0C08CE72u, 1);  /* 0C08CE70 mov.l @(disp,pc),Rn */
	IF(0x0C08CE72u); { u32 t_ = r9; PR = 0x0C08CE76u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08CE76u); }  /* 0C08CE72 jsr @Rn */
L_0C08CE76: BLKS(0x0C08CE76u);
	r7 = 0xC0A9B40u; UPD(0x0C08CE78u, 1);  /* 0C08CE76 mov.l @(disp,pc),Rn */
	IF(0x0C08CE78u); { u32 t_ = r7; PR = 0x0C08CE7Cu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08CE7Cu); }  /* 0C08CE78 jsr @Rn */
L_0C08CE7C: BLKS(0x0C08CE7Cu);
	r6 = 0xB4u; UPD(0x0C08CE7Eu, 1);  /* 0C08CE7C mov.w @(disp,pc),Rn */
	IF(0x0C08CE7Eu); MACL = r8 * r6;  /* 0C08CE7E mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08CE82u, 3);  /* 0C08CE80 mov.l @(disp,pc),Rn */
	IF(0x0C08CE82u); r2 = MACL;  /* 0C08CE82 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C08CE86u, 2);  /* 0C08CE84 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C08CE86 add Rm,Rn */
	r3 += r2;  /* 0C08CE88 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C08CE8Cu, 3);  /* 0C08CE8A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C08CE8C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08CE8E extu.b Rm,Rn */
	T = r0 == 0xCu;  /* 0C08CE90 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CEB0u, 6); goto L_0C08CEB0; } UPD(0x0C08CE96u, 1); goto L_0C08CE96; }  /* 0C08CE92 bt/s */
L_0C08CE96: BLKS(0x0C08CE96u);
	IF(0x0C08CE96u); ;  /* 0C08CE96 nop */
	UPD(0x0C08CE98u, 1);
L_0C08CE98: BLKS(0x0C08CE98u);
	r15 = r14;  /* 0C08CE98 mov Rm,Rn */
	IF(0x0C08CE9Au); PR = R32(r15); r15 += 4; UPD(0x0C08CE9Cu, 2);  /* 0C08CE9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CE9Eu, 1);  /* 0C08CE9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08CEA0u, 1);  /* 0C08CE9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08CEA2u, 1);  /* 0C08CEA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08CEA4u, 1);  /* 0C08CEA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08CEA6u, 1);  /* 0C08CEA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CEA8u, 1);  /* 0C08CEA6 mov.l @Rm+,Rn */
	IF(0x0C08CEA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CEA8 rts */
L_0C08CEB0: BLKS(0x0C08CEB0u);
	r8 = 0x0u;  /* 0C08CEB0 mov #imm,Rn */
	W8(r3, r8); UPD(0x0C08CEB4u, 2);  /* 0C08CEB2 mov.b Rm,@Rn */
	r11 = 0x0u;  /* 0C08CEB4 mov #imm,Rn */
	r10 = 0xC1A4014u; UPD(0x0C08CEB8u, 2);  /* 0C08CEB6 mov.l @(disp,pc),Rn */
	r8 = r2;  /* 0C08CEB8 mov Rm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C08CEBCu, 2);  /* 0C08CEBA mov.l @(disp,pc),Rn */
L_0C08CEBC: BLKS(0x0C08CEBCu);
	r0 = r11;  /* 0C08CEBC mov Rm,Rn */
	r5 = 0xC1A3FFCu; UPD(0x0C08CEC0u, 2);  /* 0C08CEBE mov.l @(disp,pc),Rn */
	IF(0x0C08CEC0u); r0 <<= 2;  /* 0C08CEC0 shll2 Rn */
	IF(0x0C08CEC2u); r7 = R32(r0 + r5); UPD(0x0C08CEC4u, 2);  /* 0C08CEC2 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08CEC4 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08CEC8u, 2);  /* 0C08CEC6 mov.l @(disp,Rm),Rn */
	r0 = r11;  /* 0C08CEC8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08CECA and #imm,r0 */
	IF(0x0C08CECCu); r0 <<= 2;  /* 0C08CECC shll2 Rn */
	r6 += r7;  /* 0C08CECE add Rm,Rn */
	IF(0x0C08CED0u); r3 = R32(r0 + r10); UPD(0x0C08CED2u, 5);  /* 0C08CED0 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08CED4u, 1);  /* 0C08CED2 mov.l @(disp,Rm),Rn */
	r4 = 0xC1A401Cu; UPD(0x0C08CED6u, 1);  /* 0C08CED4 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C08CED6 add Rm,Rn */
	IF(0x0C08CED8u); r3 = R32(r0 + r4); UPD(0x0C08CEDAu, 2);  /* 0C08CED8 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08CEDCu, 1);  /* 0C08CEDA mov.w @(disp,pc),Rn */
	IF(0x0C08CEDCu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CEDEu, 1);  /* 0C08CEDC mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C08CEDE extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C08CEE2u, 2);  /* 0C08CEE0 mov.l Rm,@Rn */
	r0 = r8;  /* 0C08CEE2 mov Rm,Rn */
	r12 = 0xA9u; UPD(0x0C08CEE6u, 2);  /* 0C08CEE4 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C08CEE6 mov #imm,Rn */
	IF(0x0C08CEE8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08CEEAu, 2);  /* 0C08CEE8 mov.b @(r0,Rm),Rn */
	r13 = r11;  /* 0C08CEEA mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C08CEEEu, 2);  /* 0C08CEEC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C08CEEE extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08CEF2u, 2);  /* 0C08CEF0 mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C08CEF2 add #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C08CEF6u, 2);  /* 0C08CEF4 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C08CEF6 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C08CEFAu, 2);  /* 0C08CEF8 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)r13;  /* 0C08CEFA exts.w Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C08CEFEu, 2);  /* 0C08CEFC mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C08CEFE mov #imm,Rn */
	IF(0x0C08CF00u); { u32 t_ = r9; PR = 0x0C08CF04u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08CF04u); }  /* 0C08CF00 jsr @Rn */
L_0C08CF04: BLKS(0x0C08CF04u);
	T = (s32)r11 > (s32)r12;  /* 0C08CF04 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08CEBCu, 4); goto L_0C08CEBC; } goto L_0C08CF0A; }  /* 0C08CF06 bf/s */
L_0C08CF0A: BLKS(0x0C08CF0Au);
	{ IF(0x0C08CF0Cu); ; /* slot nop */ UPD(0x0C08CE98u, 4); goto L_0C08CE98; }  /* 0C08CF0A bra */
L_0C08CF10: BLKS(0x0C08CF10u);
	r10 = 0xC0A8CA0u; UPD(0x0C08CF12u, 1);  /* 0C08CF10 mov.l @(disp,pc),Rn */
	IF(0x0C08CF12u); { u32 t_ = r10; PR = 0x0C08CF16u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08CF16u); }  /* 0C08CF12 jsr @Rn */
L_0C08CF16: BLKS(0x0C08CF16u);
	IF(0x0C08CF16u); T = (s32)r0 >= 0;  /* 0C08CF16 cmp/pz Rn */
	if (!T) { UPD(0x0C08CF40u, 4); goto L_0C08CF40; }  /* 0C08CF18 bf */
L_0C08CF1A: BLKS(0x0C08CF1Au);
	r13 = 0xB4u; UPD(0x0C08CF1Cu, 1);  /* 0C08CF1A mov.w @(disp,pc),Rn */
	IF(0x0C08CF1Cu); MACL = r8 * r13;  /* 0C08CF1C mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C08CF20u, 3);  /* 0C08CF1E mov.l @(disp,pc),Rn */
	IF(0x0C08CF20u); r11 = MACL;  /* 0C08CF20 sts macl,Rn */
	IF(0x0C08CF22u); MACL = r0 * r13;  /* 0C08CF22 mul.l Rm,Rn */
	r11 += r12;  /* 0C08CF24 add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C08CF28u, 5);  /* 0C08CF26 mov.l @(disp,Rm),Rn */
	IF(0x0C08CF28u); r9 = MACL;  /* 0C08CF28 sts macl,Rn */
	r9 += r12;  /* 0C08CF2A add Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C08CF2Eu, 3);  /* 0C08CF2C mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C08CF30u, 1);  /* 0C08CF2E mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C08CF32u, 1);  /* 0C08CF30 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C08CF32 add Rm,Rn */
	r8 += r0;  /* 0C08CF34 add Rm,Rn */
	W32(r11 + 0x24u, r8); UPD(0x0C08CF38u, 3);  /* 0C08CF36 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08CE98u, 3); goto L_0C08CE98; }  /* 0C08CF38 bra */
L_0C08CF40: BLKS(0x0C08CF40u);
	r1 = 0xC08CC00u; UPD(0x0C08CF42u, 1);  /* 0C08CF40 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08CF42 mov Rm,Rn */
	UPD(0x0C08CF44u, 1);
L_0C08CF44: BLKS(0x0C08CF44u);
	r15 = r14;  /* 0C08CF44 mov Rm,Rn */
	IF(0x0C08CF46u); PR = R32(r15); r15 += 4; UPD(0x0C08CF48u, 2);  /* 0C08CF46 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CF4Au, 1);  /* 0C08CF48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08CF4Cu, 1);  /* 0C08CF4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08CF4Eu, 1);  /* 0C08CF4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08CF50u, 1);  /* 0C08CF4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08CF52u, 1);  /* 0C08CF50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CF54u, 1);  /* 0C08CF52 mov.l @Rm+,Rn */
	IF(0x0C08CF54u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08CC00u: goto L_0C08CC00; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08CF54 jmp @Rn */
L_0C08CF60: BLKS(0x0C08CF60u);
	r10 = 0xC0A8CA0u; UPD(0x0C08CF62u, 1);  /* 0C08CF60 mov.l @(disp,pc),Rn */
	IF(0x0C08CF62u); { u32 t_ = r10; PR = 0x0C08CF66u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08CF66u); }  /* 0C08CF62 jsr @Rn */
L_0C08CF66: BLKS(0x0C08CF66u);
	IF(0x0C08CF66u); T = (s32)r0 >= 0;  /* 0C08CF66 cmp/pz Rn */
	if (!T) { UPD(0x0C08CF40u, 4); goto L_0C08CF40; }  /* 0C08CF68 bf */
L_0C08CF6A: BLKS(0x0C08CF6Au);
	r2 = 0xB4u; UPD(0x0C08CF6Cu, 1);  /* 0C08CF6A mov.w @(disp,pc),Rn */
	IF(0x0C08CF6Cu); MACL = r0 * r2;  /* 0C08CF6C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08CF70u, 3);  /* 0C08CF6E mov.l @(disp,pc),Rn */
	IF(0x0C08CF70u); r7 = MACL;  /* 0C08CF70 sts macl,Rn */
	r7 += r6;  /* 0C08CF72 add Rm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C08CF76u, 3);  /* 0C08CF74 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C08CF76 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08CF7Au); MACL = r8 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08CF40u, 5); goto L_0C08CF40; } goto L_0C08CF7C; }  /* 0C08CF78 bf/s */
L_0C08CF7C: BLKS(0x0C08CF7Cu);
	r11 = R32(r7 + 0x24u); UPD(0x0C08CF7Eu, 3);  /* 0C08CF7C mov.l @(disp,Rm),Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C08CF80u, 1);  /* 0C08CF7E mov.l @(disp,Rm),Rn */
	IF(0x0C08CF80u); r5 = MACL;  /* 0C08CF80 sts macl,Rn */
	r5 += r6;  /* 0C08CF82 add Rm,Rn */
	r6 = R32(r5 + 0x2Cu); UPD(0x0C08CF86u, 3);  /* 0C08CF84 mov.l @(disp,Rm),Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C08CF88u, 1);  /* 0C08CF86 mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C08CF88 add Rm,Rn */
	r3 += r7;  /* 0C08CF8A add Rm,Rn */
	W32(r5 + 0x24u, r11); UPD(0x0C08CF8Eu, 3);  /* 0C08CF8C mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r3); UPD(0x0C08CF90u, 1);  /* 0C08CF8E mov.l Rm,@(disp,Rn) */
L_0C08CF90: BLKS(0x0C08CF90u);
	{ IF(0x0C08CF92u); ; /* slot nop */ UPD(0x0C08CE98u, 3); goto L_0C08CE98; }  /* 0C08CF90 bra */
L_0C08CFA0: BLKS(0x0C08CFA0u);
	r9 = 0xC0A8CA0u; UPD(0x0C08CFA2u, 1);  /* 0C08CFA0 mov.l @(disp,pc),Rn */
	IF(0x0C08CFA2u); { u32 t_ = r9; PR = 0x0C08CFA6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08CFA6u); }  /* 0C08CFA2 jsr @Rn */
L_0C08CFA6: BLKS(0x0C08CFA6u);
	IF(0x0C08CFA6u); T = (s32)r0 >= 0;  /* 0C08CFA6 cmp/pz Rn */
	if (!T) { UPD(0x0C08CF40u, 4); goto L_0C08CF40; }  /* 0C08CFA8 bf */
L_0C08CFAA: BLKS(0x0C08CFAAu);
	r2 = 0xB4u; UPD(0x0C08CFACu, 1);  /* 0C08CFAA mov.w @(disp,pc),Rn */
	IF(0x0C08CFACu); MACL = r0 * r2;  /* 0C08CFAC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08CFB0u, 3);  /* 0C08CFAE mov.l @(disp,pc),Rn */
	IF(0x0C08CFB0u); r7 = MACL;  /* 0C08CFB0 sts macl,Rn */
	r7 += r6;  /* 0C08CFB2 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C08CFB6u, 3);  /* 0C08CFB4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08CFB6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08CFBAu); MACL = r8 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08CF40u, 5); goto L_0C08CF40; } goto L_0C08CFBC; }  /* 0C08CFB8 bf/s */
L_0C08CFBC: BLKS(0x0C08CFBCu);
	r4 = R32(r7 + 0x24u); UPD(0x0C08CFBEu, 3);  /* 0C08CFBC mov.l @(disp,Rm),Rn */
	IF(0x0C08CFBEu); r12 = MACL;  /* 0C08CFBE sts macl,Rn */
	r12 += r6;  /* 0C08CFC0 add Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C08CFC4u, 3);  /* 0C08CFC2 mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C08CFC6u, 1);  /* 0C08CFC4 mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C08CFC8u, 1);  /* 0C08CFC6 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C08CFC8 add Rm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C08CFCCu, 2);  /* 0C08CFCA mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C08CFCC add Rm,Rn */
	W32(r12 + 0x24u, r4); UPD(0x0C08CFD0u, 2);  /* 0C08CFCE mov.l Rm,@(disp,Rn) */
	IF(0x0C08CFD0u); r0 <<= 2;  /* 0C08CFD0 shll2 Rn */
	W32(r12 + 0x28u, r10); UPD(0x0C08CFD4u, 2);  /* 0C08CFD2 mov.l Rm,@(disp,Rn) */
	r13 = 0xC1A4024u; UPD(0x0C08CFD6u, 1);  /* 0C08CFD4 mov.l @(disp,pc),Rn */
	IF(0x0C08CFD6u); r2 = R32(r0 + r13); UPD(0x0C08CFD8u, 1);  /* 0C08CFD6 mov.l @(r0,Rm),Rn */
	W32(r12 + 0xCu, r2); UPD(0x0C08CFDAu, 1);  /* 0C08CFD8 mov.l Rm,@(disp,Rn) */
L_0C08CFDA: BLKS(0x0C08CFDAu);
	r1 = 0xC0A8AE0u; UPD(0x0C08CFDCu, 1);  /* 0C08CFDA mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08CF44u, 3); goto L_0C08CF44; }  /* 0C08CFDC bra */
L_0C08D020: BLKS(0x0C08D020u);
	r11 = 0xC0A8CA0u; UPD(0x0C08D022u, 1);  /* 0C08D020 mov.l @(disp,pc),Rn */
	IF(0x0C08D022u); { u32 t_ = r11; PR = 0x0C08D026u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08D026u); }  /* 0C08D022 jsr @Rn */
L_0C08D026: BLKS(0x0C08D026u);
	IF(0x0C08D026u); T = (s32)r0 >= 0;  /* 0C08D026 cmp/pz Rn */
	if (!T) { UPD(0x0C08CF40u, 4); goto L_0C08CF40; }  /* 0C08D028 bf */
L_0C08D02A: BLKS(0x0C08D02Au);
	r2 = 0xB4u; UPD(0x0C08D02Cu, 1);  /* 0C08D02A mov.w @(disp,pc),Rn */
	IF(0x0C08D02Cu); MACL = r8 * r2;  /* 0C08D02C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08D030u, 3);  /* 0C08D02E mov.l @(disp,pc),Rn */
	IF(0x0C08D030u); r9 = MACL;  /* 0C08D030 sts macl,Rn */
	r9 += r5;  /* 0C08D032 add Rm,Rn */
	r6 = R32(r9); UPD(0x0C08D036u, 3);  /* 0C08D034 mov.l @Rm,Rn */
	IF(0x0C08D036u); MACL = r0 * r2;  /* 0C08D036 mul.l Rm,Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C08D03Au, 3);  /* 0C08D038 mov.w @(disp,pc),Rn */
	r6 &= r12;  /* 0C08D03A and Rm,Rn */
	W32(r9, r6); UPD(0x0C08D03Eu, 2);  /* 0C08D03C mov.l Rm,@Rn */
	IF(0x0C08D03Eu); r0 = MACL;  /* 0C08D03E sts macl,Rn */
	r0 += r5;  /* 0C08D040 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C08D044u, 3);  /* 0C08D042 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08D046u, 1);  /* 0C08D044 mov.w @(disp,pc),Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C08D048u, 1);  /* 0C08D046 mov.l @(disp,Rm),Rn */
	r3 &= r7;  /* 0C08D048 and Rm,Rn */
	r13 = R32(r0 + 0x28u); UPD(0x0C08D04Cu, 2);  /* 0C08D04A mov.l @(disp,Rm),Rn */
	r6 |= r3;  /* 0C08D04C or Rm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C08D050u, 2);  /* 0C08D04E mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x30u); UPD(0x0C08D052u, 1);  /* 0C08D050 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C08D052 add Rm,Rn */
	r13 += r10;  /* 0C08D054 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C08D058u, 3);  /* 0C08D056 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C08D05Au, 1);  /* 0C08D058 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C08D05A tst Rm,Rn */
	W32(r9 + 0x28u, r13); UPD(0x0C08D05Eu, 2);  /* 0C08D05C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08D0C0u, 3); goto L_0C08D0C0; } UPD(0x0C08D062u, 1); goto L_0C08D062; }  /* 0C08D05E bt/s */
L_0C08D062: BLKS(0x0C08D062u);
	T = r0 == 0x7u;  /* 0C08D062 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08D090u, 4); goto L_0C08D090; }  /* 0C08D064 bt */
L_0C08D066: BLKS(0x0C08D066u);
	r7 = 0xB4u; UPD(0x0C08D068u, 1);  /* 0C08D066 mov.w @(disp,pc),Rn */
	IF(0x0C08D068u); MACL = r8 * r7;  /* 0C08D068 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08D06Cu, 3);  /* 0C08D06A mov.l @(disp,pc),Rn */
	IF(0x0C08D06Cu); r2 = MACL;  /* 0C08D06C sts macl,Rn */
	r2 += r3;  /* 0C08D06E add Rm,Rn */
	r3 = 0x99u; UPD(0x0C08D072u, 3);  /* 0C08D070 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08D072 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C08D076u, 2);  /* 0C08D074 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C08D076 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08D078 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C08D07A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CF90u, 6); goto L_0C08CF90; } UPD(0x0C08D080u, 1); goto L_0C08D080; }  /* 0C08D07C bf/s */
L_0C08D080: BLKS(0x0C08D080u);
	r0 = R32(r2 + 0xCu); UPD(0x0C08D082u, 1);  /* 0C08D080 mov.l @(disp,Rm),Rn */
	r12 = 0x0u;  /* 0C08D082 mov #imm,Rn */
	r0 += 0x1u;  /* 0C08D084 add #imm,Rn */
	W8(r3, r12); UPD(0x0C08D088u, 3);  /* 0C08D086 mov.b Rm,@Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08CFDAu, 3); goto L_0C08CFDA; }  /* 0C08D088 bra */
L_0C08D090: BLKS(0x0C08D090u);
	r2 = 0x99u; UPD(0x0C08D092u, 1);  /* 0C08D090 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C08D092 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C08D096u, 2);  /* 0C08D094 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C08D096 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C08D098 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C08D09A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D176u, 6); goto L_0C08D176; } UPD(0x0C08D0A0u, 1); goto L_0C08D0A0; }  /* 0C08D09C bf/s */
L_0C08D0A0: BLKS(0x0C08D0A0u);
	r4 = R32(r9 + 0x8u); UPD(0x0C08D0A2u, 1);  /* 0C08D0A0 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C08D0A2 mov #imm,Rn */
	r4 += 0x1u;  /* 0C08D0A4 add #imm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C08D0A8u, 3);  /* 0C08D0A6 mov.l Rm,@(disp,Rn) */
	r10 = 0x10u;  /* 0C08D0A8 mov #imm,Rn */
	W8(r2, r5); UPD(0x0C08D0ACu, 2);  /* 0C08D0AA mov.b Rm,@Rn */
	r4 = r8;  /* 0C08D0AC mov Rm,Rn */
	r1 = 0xC0A8B10u; UPD(0x0C08D0B0u, 2);  /* 0C08D0AE mov.l @(disp,pc),Rn */
	{ W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08CF44u, 3); goto L_0C08CF44; }  /* 0C08D0B0 bra */
L_0C08D0C0: BLKS(0x0C08D0C0u);
	r11 = 0xC0BC1B0u; UPD(0x0C08D0C2u, 1);  /* 0C08D0C0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08D0C2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08D0C4 mov #imm,Rn */
	IF(0x0C08D0C6u); { u32 t_ = r11; PR = 0x0C08D0CAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08D0CAu); }  /* 0C08D0C6 jsr @Rn */
L_0C08D0CA: BLKS(0x0C08D0CAu);
	T = (r0 & r0) == 0;  /* 0C08D0CA tst Rm,Rn */
	if (T) { UPD(0x0C08D176u, 4); goto L_0C08D176; }  /* 0C08D0CC bt */
L_0C08D0CE: BLKS(0x0C08D0CEu);
	r6 = R32(r9 + 0xCu); UPD(0x0C08D0D0u, 1);  /* 0C08D0CE mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C08D0D0 add #imm,Rn */
	{ W32(r9 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08CFDAu, 4); goto L_0C08CFDA; }  /* 0C08D0D2 bra */
L_0C08D0E0: BLKS(0x0C08D0E0u);
	r11 = 0xC0A8CA0u; UPD(0x0C08D0E2u, 1);  /* 0C08D0E0 mov.l @(disp,pc),Rn */
	IF(0x0C08D0E2u); { u32 t_ = r11; PR = 0x0C08D0E6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08D0E6u); }  /* 0C08D0E2 jsr @Rn */
L_0C08D0E6: BLKS(0x0C08D0E6u);
	IF(0x0C08D0E6u); T = (s32)r0 >= 0;  /* 0C08D0E6 cmp/pz Rn */
	if (T) { UPD(0x0C08D0EEu, 4); goto L_0C08D0EE; }  /* 0C08D0E8 bt */
L_0C08D0EA: BLKS(0x0C08D0EAu);
	{ IF(0x0C08D0ECu); ; /* slot nop */ UPD(0x0C08CF40u, 3); goto L_0C08CF40; }  /* 0C08D0EA bra */
L_0C08D0EE: BLKS(0x0C08D0EEu);
	r5 = 0xB4u; UPD(0x0C08D0F0u, 1);  /* 0C08D0EE mov.w @(disp,pc),Rn */
	IF(0x0C08D0F0u); MACL = r8 * r5;  /* 0C08D0F0 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08D0F4u, 3);  /* 0C08D0F2 mov.l @(disp,pc),Rn */
	IF(0x0C08D0F4u); r11 = MACL;  /* 0C08D0F4 sts macl,Rn */
	IF(0x0C08D0F6u); MACL = r0 * r5;  /* 0C08D0F6 mul.l Rm,Rn */
	r11 += r4;  /* 0C08D0F8 add Rm,Rn */
	r6 = R32(r11); UPD(0x0C08D0FCu, 5);  /* 0C08D0FA mov.l @Rm,Rn */
	IF(0x0C08D0FCu); r3 = MACL;  /* 0C08D0FC sts macl,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C08D100u, 2);  /* 0C08D0FE mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C08D100 add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C08D104u, 2);  /* 0C08D102 mov.l @(disp,Rm),Rn */
	r6 &= r7;  /* 0C08D104 and Rm,Rn */
	r12 = R32(r11 + 0x30u); UPD(0x0C08D108u, 2);  /* 0C08D106 mov.l @(disp,Rm),Rn */
	W32(r11, r6); UPD(0x0C08D10Au, 1);  /* 0C08D108 mov.l Rm,@Rn */
	r0 += r12;  /* 0C08D10A add Rm,Rn */
	r9 = R32(r3); UPD(0x0C08D10Eu, 2);  /* 0C08D10C mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08D110u, 1);  /* 0C08D10E mov.w @(disp,pc),Rn */
	r12 = 0x9Cu; UPD(0x0C08D112u, 1);  /* 0C08D110 mov.w @(disp,pc),Rn */
	r9 &= r1;  /* 0C08D112 and Rm,Rn */
	r13 = R32(r3 + 0x24u); UPD(0x0C08D116u, 2);  /* 0C08D114 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C08D116 add Rm,Rn */
	r10 = R32(r11 + 0x2Cu); UPD(0x0C08D11Au, 2);  /* 0C08D118 mov.l @(disp,Rm),Rn */
	r6 |= r9;  /* 0C08D11A or Rm,Rn */
	r13 += r10;  /* 0C08D11C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C08D120u, 3);  /* 0C08D11E mov.b @Rm,Rn */
	W32(r11 + 0x24u, r13); UPD(0x0C08D122u, 1);  /* 0C08D120 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C08D122 tst Rm,Rn */
	W32(r11 + 0x28u, r0); UPD(0x0C08D126u, 2);  /* 0C08D124 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08D180u, 3); goto L_0C08D180; } UPD(0x0C08D12Au, 1); goto L_0C08D12A; }  /* 0C08D126 bf/s */
L_0C08D12A: BLKS(0x0C08D12Au);
	r10 = 0xC069BF0u; UPD(0x0C08D12Cu, 1);  /* 0C08D12A mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C08D12Eu, 1);  /* 0C08D12C mov.l @(disp,pc),Rn */
	IF(0x0C08D12Eu); { u32 t_ = r10; PR = 0x0C08D132u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08D132u); }  /* 0C08D12E jsr @Rn */
L_0C08D132: BLKS(0x0C08D132u);
	r4 = r8;  /* 0C08D132 mov Rm,Rn */
	IF(0x0C08D134u); { u32 t_ = r13; PR = 0x0C08D138u; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08D138u); }  /* 0C08D134 jsr @Rn */
L_0C08D138: BLKS(0x0C08D138u);
	r3 = 0x86u; UPD(0x0C08D13Au, 1);  /* 0C08D138 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C08D13A mov Rm,Rn */
	IF(0x0C08D13Cu); r6 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08D13Eu, 2);  /* 0C08D13C mov.w @(r0,Rm),Rn */
	r9 = 0x1Fu;  /* 0C08D13E mov #imm,Rn */
	r6 += 0x8u;  /* 0C08D140 add #imm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C08D144u, 3);  /* 0C08D142 mov.l @(disp,pc),Rn */
	IF(0x0C08D144u); r6 >>= 2;  /* 0C08D144 shlr2 Rn */
	IF(0x0C08D146u); r6 >>= 2;  /* 0C08D146 shlr2 Rn */
	r6 &= r9;  /* 0C08D148 and Rm,Rn */
	r4 = r8;  /* 0C08D14A mov Rm,Rn */
	IF(0x0C08D14Cu); { u32 t_ = r2; PR = 0x0C08D150u; W32(r11 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08D150u); }  /* 0C08D14C jsr @Rn */
L_0C08D150: BLKS(0x0C08D150u);
	r4 = r8;  /* 0C08D150 mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C08D154u, 2);  /* 0C08D152 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08D154 mov #imm,Rn */
	IF(0x0C08D156u); { u32 t_ = r8; PR = 0x0C08D15Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08D15Au); }  /* 0C08D156 jsr @Rn */
L_0C08D15A: BLKS(0x0C08D15Au);
	T = (r0 & r0) == 0;  /* 0C08D15A tst Rm,Rn */
	if (T) { UPD(0x0C08D176u, 4); goto L_0C08D176; }  /* 0C08D15C bt */
L_0C08D15E: BLKS(0x0C08D15Eu);
	r0 = r11;  /* 0C08D15E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C08D162u, 2);  /* 0C08D160 mov.w @(disp,pc),Rn */
	IF(0x0C08D162u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08D164u, 1);  /* 0C08D162 mov.b @(r0,Rm),Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C08D166u, 1);  /* 0C08D164 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08D168u, 1);  /* 0C08D166 mov.l @(disp,Rm),Rn */
	r11 = 0xC0BBF10u; UPD(0x0C08D16Au, 1);  /* 0C08D168 mov.l @(disp,pc),Rn */
	IF(0x0C08D16Au); { u32 t_ = r11; PR = 0x0C08D16Eu; r6 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08D16Eu); }  /* 0C08D16A jsr @Rn */
L_0C08D16E: BLKS(0x0C08D16Eu);
	T = (r0 & r0) == 0;  /* 0C08D16E tst Rm,Rn */
	if (T) { UPD(0x0C08D176u, 4); goto L_0C08D176; }  /* 0C08D170 bt */
L_0C08D172: BLKS(0x0C08D172u);
	r0 = 0x4u;  /* 0C08D172 mov #imm,Rn */
	W8(r12, r0); UPD(0x0C08D176u, 2);  /* 0C08D174 mov.b Rm,@Rn */
L_0C08D176: BLKS(0x0C08D176u);
	{ IF(0x0C08D178u); ; /* slot nop */ UPD(0x0C08CE98u, 3); goto L_0C08CE98; }  /* 0C08D176 bra */
L_0C08D180: BLKS(0x0C08D180u);
	r4 = r8;  /* 0C08D180 mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C08D184u, 2);  /* 0C08D182 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08D184 mov #imm,Rn */
	IF(0x0C08D186u); { u32 t_ = r8; PR = 0x0C08D18Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08D18Au); }  /* 0C08D186 jsr @Rn */
L_0C08D18A: BLKS(0x0C08D18Au);
	T = (r0 & r0) == 0;  /* 0C08D18A tst Rm,Rn */
	if (T) { UPD(0x0C08D176u, 4); goto L_0C08D176; }  /* 0C08D18C bt */
L_0C08D18E: BLKS(0x0C08D18Eu);
	r0 = r11;  /* 0C08D18E mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C08D192u, 2);  /* 0C08D190 mov.w @(disp,pc),Rn */
	r10 = 0xC069B20u; UPD(0x0C08D194u, 1);  /* 0C08D192 mov.l @(disp,pc),Rn */
	IF(0x0C08D194u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08D196u, 1);  /* 0C08D194 mov.w @(r0,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C08D198u, 1);  /* 0C08D196 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08D198 mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08D19Cu, 2);  /* 0C08D19A mov.l @(disp,pc),Rn */
	IF(0x0C08D19Cu); { u32 t_ = r10; PR = 0x0C08D1A0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08D1A0u); }  /* 0C08D19C jsr @Rn */
L_0C08D1A0: BLKS(0x0C08D1A0u);
	r10 = R32(r11 + 0x24u); UPD(0x0C08D1A2u, 1);  /* 0C08D1A0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C08D1A2 mov Rm,Rn */
	r10 += r0;  /* 0C08D1A4 add Rm,Rn */
	r9 = 0xC0BA480u; UPD(0x0C08D1A8u, 3);  /* 0C08D1A6 mov.l @(disp,pc),Rn */
	IF(0x0C08D1A8u); { u32 t_ = r8; PR = 0x0C08D1ACu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08D1ACu); }  /* 0C08D1A8 jsr @Rn */
L_0C08D1AC: BLKS(0x0C08D1ACu);
	r6 = R32(r11 + 0x28u); UPD(0x0C08D1AEu, 1);  /* 0C08D1AC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D1AE add #imm,Rn */
	r2 = 0x20000u; UPD(0x0C08D1B2u, 2);  /* 0C08D1B0 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C08D1B2 mov Rm,Rn */
	W32(r15, r2); UPD(0x0C08D1B6u, 2);  /* 0C08D1B4 mov.l Rm,@Rn */
	r6 += r0;  /* 0C08D1B6 add Rm,Rn */
	r4 = 0x1u;  /* 0C08D1B8 mov #imm,Rn */
	IF(0x0C08D1BAu); { u32 t_ = r9; PR = 0x0C08D1BEu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08D1BEu); }  /* 0C08D1BA jsr @Rn */
L_0C08D1BE: BLKS(0x0C08D1BEu);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C08D1C0u, 1);  /* 0C08D1BE mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C08D1C0 add #imm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C08D1C2 add #imm,Rn */
	W8(r12, r5); UPD(0x0C08D1C6u, 3);  /* 0C08D1C4 mov.b Rm,@Rn */
L_0C08D1C6: BLKS(0x0C08D1C6u);
	{ IF(0x0C08D1C8u); ; /* slot nop */ UPD(0x0C08CE98u, 3); goto L_0C08CE98; }  /* 0C08D1C6 bra */
L_0C08D210: BLKS(0x0C08D210u);
	r12 = 0xC0A8CA0u; UPD(0x0C08D212u, 1);  /* 0C08D210 mov.l @(disp,pc),Rn */
	IF(0x0C08D212u); { u32 t_ = r12; PR = 0x0C08D216u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08D216u); }  /* 0C08D212 jsr @Rn */
L_0C08D216: BLKS(0x0C08D216u);
	IF(0x0C08D216u); T = (s32)r0 >= 0;  /* 0C08D216 cmp/pz Rn */
	if (T) { UPD(0x0C08D21Eu, 4); goto L_0C08D21E; }  /* 0C08D218 bt */
L_0C08D21A: BLKS(0x0C08D21Au);
	{ IF(0x0C08D21Cu); ; /* slot nop */ UPD(0x0C08CF40u, 3); goto L_0C08CF40; }  /* 0C08D21A bra */
L_0C08D21E: BLKS(0x0C08D21Eu);
	r2 = 0xB4u; UPD(0x0C08D220u, 1);  /* 0C08D21E mov.w @(disp,pc),Rn */
	IF(0x0C08D220u); MACL = r8 * r2;  /* 0C08D220 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C08D224u, 3);  /* 0C08D222 mov.l @(disp,pc),Rn */
	IF(0x0C08D224u); r9 = MACL;  /* 0C08D224 sts macl,Rn */
	r9 += r13;  /* 0C08D226 add Rm,Rn */
	IF(0x0C08D228u); MACL = r0 * r2;  /* 0C08D228 mul.l Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C08D22Cu, 5);  /* 0C08D22A mov.w @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08D22Eu, 1);  /* 0C08D22C mov.l @Rm,Rn */
	IF(0x0C08D22Eu); r5 = MACL;  /* 0C08D22E sts macl,Rn */
	r4 &= r7;  /* 0C08D230 and Rm,Rn */
	W32(r9, r4); UPD(0x0C08D234u, 3);  /* 0C08D232 mov.l Rm,@Rn */
	r5 += r13;  /* 0C08D234 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C08D238u, 2);  /* 0C08D236 mov.w @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C08D23Au, 1);  /* 0C08D238 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C08D23A and Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C08D23Eu, 2);  /* 0C08D23C mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C08D23E or Rm,Rn */
	r3 = R32(r9 + 0x2Cu); UPD(0x0C08D242u, 2);  /* 0C08D240 mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C08D244u, 1);  /* 0C08D242 mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C08D244 add Rm,Rn */
	r12 = R32(r9 + 0x30u); UPD(0x0C08D248u, 2);  /* 0C08D246 mov.l @(disp,Rm),Rn */
	r10 = 0xC069BF0u; UPD(0x0C08D24Au, 1);  /* 0C08D248 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C08D24A add Rm,Rn */
	W32(r9, r4); UPD(0x0C08D24Eu, 2);  /* 0C08D24C mov.l Rm,@Rn */
	W32(r9 + 0x28u, r6); UPD(0x0C08D250u, 1);  /* 0C08D24E mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C08D250 mov Rm,Rn */
	IF(0x0C08D252u); { u32 t_ = r10; PR = 0x0C08D256u; W32(r9 + 0x24u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08D256u); }  /* 0C08D252 jsr @Rn */
L_0C08D256: BLKS(0x0C08D256u);
	r13 = 0xC068F00u; UPD(0x0C08D258u, 1);  /* 0C08D256 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C08D258 mov #imm,Rn */
	r10 = 0x86u; UPD(0x0C08D25Cu, 2);  /* 0C08D25A mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C08D25C mov Rm,Rn */
	IF(0x0C08D25Eu); { u32 t_ = r13; PR = 0x0C08D262u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08D262u); }  /* 0C08D25E jsr @Rn */
L_0C08D262: BLKS(0x0C08D262u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08D264u, 1);  /* 0C08D262 mov.w @Rm,Rn */
	r4 = r8;  /* 0C08D264 mov Rm,Rn */
	r0 += 0x4u;  /* 0C08D266 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C08D26Au, 3);  /* 0C08D268 mov.l @(disp,pc),Rn */
	IF(0x0C08D26Au); r0 >>= 2;  /* 0C08D26A shlr2 Rn */
	IF(0x0C08D26Cu); T = r0 & 1; r0 >>= 1;  /* 0C08D26C shlr Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C08D270u, 3);  /* 0C08D26E mov.l @(disp,pc),Rn */
	r0 &= 0x3Fu;  /* 0C08D270 and #imm,r0 */
	IF(0x0C08D272u); { u32 t_ = r3; PR = 0x0C08D276u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08D276u); }  /* 0C08D272 jsr @Rn */
L_0C08D276: BLKS(0x0C08D276u);
	r4 = r8;  /* 0C08D276 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08D278 mov #imm,Rn */
	IF(0x0C08D27Au); { u32 t_ = r11; PR = 0x0C08D27Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08D27Eu); }  /* 0C08D27A jsr @Rn */
L_0C08D27E: BLKS(0x0C08D27Eu);
	T = (r0 & r0) == 0;  /* 0C08D27E tst Rm,Rn */
	if (T) { UPD(0x0C08D1C6u, 4); goto L_0C08D1C6; }  /* 0C08D280 bt */
L_0C08D282: BLKS(0x0C08D282u);
	r11 = 0x0u;  /* 0C08D282 mov #imm,Rn */
	r13 = 0x100000u; UPD(0x0C08D286u, 2);  /* 0C08D284 mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C08D286 mov Rm,Rn */
	r12 = r10;  /* 0C08D288 mov Rm,Rn */
	IF(0x0C08D28Au); ;  /* 0C08D28A nop */
	UPD(0x0C08D28Cu, 3);
L_0C08D28C: BLKS(0x0C08D28Cu);
	r7 = 0xC1A403Cu; UPD(0x0C08D28Eu, 1);  /* 0C08D28C mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C08D28E mov Rm,Rn */
	r0 += r0;  /* 0C08D290 add Rm,Rn */
	IF(0x0C08D292u); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08D294u, 3);  /* 0C08D292 mov.w @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r12); UPD(0x0C08D296u, 1);  /* 0C08D294 mov.w @Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C08D298u, 1);  /* 0C08D296 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C08D298 add Rm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C08D29A exts.w Rm,Rn */
	r4 = r10;  /* 0C08D29C mov Rm,Rn */
	IF(0x0C08D29Eu); { u32 t_ = r9; PR = 0x0C08D2A2u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08D2A2u); }  /* 0C08D29E jsr @Rn */
L_0C08D2A2: BLKS(0x0C08D2A2u);
	r9 = R32(r8 + 0x24u); UPD(0x0C08D2A4u, 1);  /* 0C08D2A2 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C08D2A4 mov Rm,Rn */
	r9 += r0;  /* 0C08D2A6 add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C08D2AAu, 3);  /* 0C08D2A8 mov.l @(disp,pc),Rn */
	IF(0x0C08D2AAu); { u32 t_ = r0; PR = 0x0C08D2AEu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08D2AEu); }  /* 0C08D2AA jsr @Rn */
L_0C08D2AE: BLKS(0x0C08D2AEu);
	r6 = R32(r8 + 0x28u); UPD(0x0C08D2B0u, 1);  /* 0C08D2AE mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C08D2B0 mov Rm,Rn */
	r4 = 0x30000u; UPD(0x0C08D2B4u, 2);  /* 0C08D2B2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D2B4 add #imm,Rn */
	r9 = 0xC0BB1A0u; UPD(0x0C08D2B8u, 2);  /* 0C08D2B6 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C08D2B8 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C08D2BCu, 2);  /* 0C08D2BA mov.l Rm,@Rn */
	r10 = r11;  /* 0C08D2BC mov Rm,Rn */
	r6 += r0;  /* 0C08D2BE add Rm,Rn */
	r4 = 0x2u;  /* 0C08D2C0 mov #imm,Rn */
	IF(0x0C08D2C2u); { u32 t_ = r9; PR = 0x0C08D2C6u; r10 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C08D2C6u); }  /* 0C08D2C2 jsr @Rn */
L_0C08D2C6: BLKS(0x0C08D2C6u);
	r11 = (u32)(s32)(s16)r10;  /* 0C08D2C6 exts.w Rm,Rn */
	r9 = 0x6u;  /* 0C08D2C8 mov #imm,Rn */
	T = (s32)r11 > (s32)r9;  /* 0C08D2CA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D28Cu, 6); goto L_0C08D28C; } goto L_0C08D2D0; }  /* 0C08D2CC bf/s */
L_0C08D2D0: BLKS(0x0C08D2D0u);
	{ IF(0x0C08D2D2u); ; /* slot nop */ UPD(0x0C08CE98u, 4); goto L_0C08CE98; }  /* 0C08D2D0 bra */
}

/* FUN_0c08d310 */
void blk_f_0C08D310(sh3_t *c)
{
	LOCALS;
L_0C08D310: BLKS(0x0C08D310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08D312u, 1);  /* 0C08D310 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08D314u, 1);  /* 0C08D312 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08D316u, 1);  /* 0C08D314 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C08D316 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08D31Au, 2);  /* 0C08D318 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C08D31A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08D31Eu, 2);  /* 0C08D31C mov.l Rm,@-Rn */
	r11 = r4;  /* 0C08D31E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08D322u, 2);  /* 0C08D320 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C08D322 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08D326u, 2);  /* 0C08D324 mov.l Rm,@-Rn */
	IF(0x0C08D326u); r15 -= 4; W32(r15, PR); UPD(0x0C08D328u, 1);  /* 0C08D326 sts.l pr,@-Rn */
	r8 = 0xC0BC140u; UPD(0x0C08D32Au, 1);  /* 0C08D328 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D32A add #imm,Rn */
	r14 = r15;  /* 0C08D32C mov Rm,Rn */
	IF(0x0C08D32Eu); { u32 t_ = r8; PR = 0x0C08D332u; r13 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC140, 0x0C0BC140u, 0x0C08D332u); }  /* 0C08D32E jsr @Rn */
L_0C08D332: BLKS(0x0C08D332u);
	T = (r0 & r0) == 0;  /* 0C08D332 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D350u, 4); goto L_0C08D350; } UPD(0x0C08D338u, 1); goto L_0C08D338; }  /* 0C08D334 bf/s */
L_0C08D338: BLKS(0x0C08D338u);
	r14 += 0x4u;  /* 0C08D338 add #imm,Rn */
	r15 = r14;  /* 0C08D33A mov Rm,Rn */
	IF(0x0C08D33Cu); PR = R32(r15); r15 += 4; UPD(0x0C08D33Eu, 3);  /* 0C08D33C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D340u, 1);  /* 0C08D33E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08D342u, 1);  /* 0C08D340 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08D344u, 1);  /* 0C08D342 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08D346u, 1);  /* 0C08D344 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08D348u, 1);  /* 0C08D346 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D34Au, 1);  /* 0C08D348 mov.l @Rm+,Rn */
	IF(0x0C08D34Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08D34A rts */
L_0C08D350: BLKS(0x0C08D350u);
	r8 = 0xC071740u; UPD(0x0C08D352u, 1);  /* 0C08D350 mov.l @(disp,pc),Rn */
	IF(0x0C08D352u); { u32 t_ = r8; PR = 0x0C08D356u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08D356u); }  /* 0C08D352 jsr @Rn */
L_0C08D356: BLKS(0x0C08D356u);
	T = (r0 & r0) == 0;  /* 0C08D356 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D338u, 4); goto L_0C08D338; } goto L_0C08D35C; }  /* 0C08D358 bt/s */
L_0C08D35C: BLKS(0x0C08D35Cu);
	r3 = 0xC28EDFCu; UPD(0x0C08D35Eu, 2);  /* 0C08D35C mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08D35E mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C08D362u, 2);  /* 0C08D360 mov.w @Rm,Rn */
	r6 = 0x4u;  /* 0C08D362 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C08D366u, 2);  /* 0C08D364 mov.l Rm,@Rn */
	r8 = 0xB4u; UPD(0x0C08D368u, 1);  /* 0C08D366 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C08D36Au, 1);  /* 0C08D368 mov.l @Rm,Rn */
	IF(0x0C08D36Au); MACL = r5 * r8;  /* 0C08D36A mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08D36Eu, 3);  /* 0C08D36C mov.l @(disp,pc),Rn */
	IF(0x0C08D36Eu); r8 = MACL;  /* 0C08D36E sts macl,Rn */
	r8 += r0;  /* 0C08D370 add Rm,Rn */
	r0 = r10;  /* 0C08D372 mov Rm,Rn */
	r0 += 0x8u;  /* 0C08D374 add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08D378u, 5);  /* 0C08D376 mov.l @(disp,pc),Rn */
	IF(0x0C08D378u); r0 >>= 2;  /* 0C08D378 shlr2 Rn */
	r7 = 0xD3000000u; UPD(0x0C08D37Cu, 2);  /* 0C08D37A mov.l @(disp,pc),Rn */
	IF(0x0C08D37Cu); r0 >>= 2;  /* 0C08D37C shlr2 Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C08D380u, 2);  /* 0C08D37E mov.l Rm,@(disp,Rn) */
	r0 &= 0x1Fu;  /* 0C08D380 and #imm,r0 */
	W32(r8, r7); UPD(0x0C08D384u, 2);  /* 0C08D382 mov.l Rm,@Rn */
	r4 = r5;  /* 0C08D384 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08D388u, 2);  /* 0C08D386 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D388u); { u32 t_ = r3; PR = 0x0C08D38Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08D38Cu); }  /* 0C08D388 jsr @Rn */
L_0C08D38C: BLKS(0x0C08D38Cu);
	r2 = 0xC0A9AE0u; UPD(0x0C08D38Eu, 1);  /* 0C08D38C mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C08D390u, 1);  /* 0C08D38E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C08D392u, 1);  /* 0C08D390 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D392u); { u32 t_ = r2; PR = 0x0C08D396u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08D396u); }  /* 0C08D392 jsr @Rn */
L_0C08D396: BLKS(0x0C08D396u);
	r0 = 0x86u; UPD(0x0C08D398u, 1);  /* 0C08D396 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C08D398 mov Rm,Rn */
	IF(0x0C08D39Au); W16(r0 + r8, r10); UPD(0x0C08D39Cu, 2);  /* 0C08D39A mov.w Rm,@(r0,Rn) */
	r5 = r13;  /* 0C08D39C mov Rm,Rn */
	r0 += 0x6u;  /* 0C08D39E add #imm,Rn */
	IF(0x0C08D3A0u); W32(r0 + r8, r13); UPD(0x0C08D3A2u, 3);  /* 0C08D3A0 mov.l Rm,@(r0,Rn) */
	r11 = 0xC069B20u; UPD(0x0C08D3A4u, 1);  /* 0C08D3A2 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08D3A4 add #imm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C08D3A8u, 2);  /* 0C08D3A6 mov.l @(disp,Rm),Rn */
	IF(0x0C08D3A8u); { u32 t_ = r11; PR = 0x0C08D3ACu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08D3ACu); }  /* 0C08D3A8 jsr @Rn */
L_0C08D3AC: BLKS(0x0C08D3ACu);
	r4 = r10;  /* 0C08D3AC mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C08D3B0u, 2);  /* 0C08D3AE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08D3B0 add #imm,Rn */
	r5 = r13;  /* 0C08D3B2 mov Rm,Rn */
	IF(0x0C08D3B4u); { u32 t_ = r10; PR = 0x0C08D3B8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08D3B8u); }  /* 0C08D3B4 jsr @Rn */
L_0C08D3B8: BLKS(0x0C08D3B8u);
	W32(r8 + 0x30u, r0); UPD(0x0C08D3BAu, 1);  /* 0C08D3B8 mov.l Rm,@(disp,Rn) */
	r0 = 0xADu; UPD(0x0C08D3BCu, 1);  /* 0C08D3BA mov.w @(disp,pc),Rn */
	IF(0x0C08D3BCu); W8(r0 + r8, r9); UPD(0x0C08D3BEu, 1);  /* 0C08D3BC mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08D3BE add #imm,Rn */
	IF(0x0C08D3C0u); W8(r0 + r8, r9); UPD(0x0C08D3C2u, 2);  /* 0C08D3C0 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0C2110u; UPD(0x0C08D3C4u, 1);  /* 0C08D3C2 mov.l @(disp,pc),Rn */
	IF(0x0C08D3C4u); { u32 t_ = r9; PR = 0x0C08D3C8u; r4 = 0x7Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C08D3C8u); }  /* 0C08D3C4 jsr @Rn */
L_0C08D3C8: BLKS(0x0C08D3C8u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08D338u, 3); goto L_0C08D338; }  /* 0C08D3C8 bra */
}

/* FUN_0c08d670 */
void blk_f_0C08D670(sh3_t *c)
{
	LOCALS;
L_0C08D670: BLKS(0x0C08D670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08D672u, 1);  /* 0C08D670 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08D674u, 1);  /* 0C08D672 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08D676u, 1);  /* 0C08D674 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C08D676 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08D67Au, 2);  /* 0C08D678 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C08D67A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08D67Eu, 2);  /* 0C08D67C mov.l Rm,@-Rn */
	r11 = r4;  /* 0C08D67E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08D682u, 2);  /* 0C08D680 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C08D682 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08D686u, 2);  /* 0C08D684 mov.l Rm,@-Rn */
	IF(0x0C08D686u); r15 -= 4; W32(r15, PR); UPD(0x0C08D688u, 1);  /* 0C08D686 sts.l pr,@-Rn */
	r8 = 0xC0BC140u; UPD(0x0C08D68Au, 1);  /* 0C08D688 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D68A add #imm,Rn */
	r14 = r15;  /* 0C08D68C mov Rm,Rn */
	IF(0x0C08D68Eu); { u32 t_ = r8; PR = 0x0C08D692u; r13 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC140, 0x0C0BC140u, 0x0C08D692u); }  /* 0C08D68E jsr @Rn */
L_0C08D692: BLKS(0x0C08D692u);
	T = (r0 & r0) == 0;  /* 0C08D692 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D6B0u, 4); goto L_0C08D6B0; } UPD(0x0C08D698u, 1); goto L_0C08D698; }  /* 0C08D694 bf/s */
L_0C08D698: BLKS(0x0C08D698u);
	r14 += 0x4u;  /* 0C08D698 add #imm,Rn */
	r15 = r14;  /* 0C08D69A mov Rm,Rn */
	IF(0x0C08D69Cu); PR = R32(r15); r15 += 4; UPD(0x0C08D69Eu, 3);  /* 0C08D69C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D6A0u, 1);  /* 0C08D69E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08D6A2u, 1);  /* 0C08D6A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08D6A4u, 1);  /* 0C08D6A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08D6A6u, 1);  /* 0C08D6A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08D6A8u, 1);  /* 0C08D6A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D6AAu, 1);  /* 0C08D6A8 mov.l @Rm+,Rn */
	IF(0x0C08D6AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08D6AA rts */
L_0C08D6B0: BLKS(0x0C08D6B0u);
	r8 = 0xC071740u; UPD(0x0C08D6B2u, 1);  /* 0C08D6B0 mov.l @(disp,pc),Rn */
	IF(0x0C08D6B2u); { u32 t_ = r8; PR = 0x0C08D6B6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08D6B6u); }  /* 0C08D6B2 jsr @Rn */
L_0C08D6B6: BLKS(0x0C08D6B6u);
	T = (r0 & r0) == 0;  /* 0C08D6B6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D698u, 4); goto L_0C08D698; } goto L_0C08D6BC; }  /* 0C08D6B8 bt/s */
L_0C08D6BC: BLKS(0x0C08D6BCu);
	r3 = 0xC28EDFCu; UPD(0x0C08D6BEu, 2);  /* 0C08D6BC mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08D6BE mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C08D6C2u, 2);  /* 0C08D6C0 mov.w @Rm,Rn */
	r6 = 0x15u;  /* 0C08D6C2 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C08D6C6u, 2);  /* 0C08D6C4 mov.l Rm,@Rn */
	r8 = 0xB4u; UPD(0x0C08D6C8u, 1);  /* 0C08D6C6 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C08D6CAu, 1);  /* 0C08D6C8 mov.l @Rm,Rn */
	IF(0x0C08D6CAu); MACL = r5 * r8;  /* 0C08D6CA mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08D6CEu, 3);  /* 0C08D6CC mov.l @(disp,pc),Rn */
	IF(0x0C08D6CEu); r8 = MACL;  /* 0C08D6CE sts macl,Rn */
	r8 += r0;  /* 0C08D6D0 add Rm,Rn */
	r0 = r10;  /* 0C08D6D2 mov Rm,Rn */
	r0 += 0x8u;  /* 0C08D6D4 add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08D6D8u, 5);  /* 0C08D6D6 mov.l @(disp,pc),Rn */
	IF(0x0C08D6D8u); r0 >>= 2;  /* 0C08D6D8 shlr2 Rn */
	r7 = 0xD3000000u; UPD(0x0C08D6DCu, 2);  /* 0C08D6DA mov.l @(disp,pc),Rn */
	IF(0x0C08D6DCu); r0 >>= 2;  /* 0C08D6DC shlr2 Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08D6E0u, 2);  /* 0C08D6DE mov.l Rm,@(disp,Rn) */
	r0 &= 0x1Fu;  /* 0C08D6E0 and #imm,r0 */
	W32(r8, r7); UPD(0x0C08D6E4u, 2);  /* 0C08D6E2 mov.l Rm,@Rn */
	r4 = r5;  /* 0C08D6E4 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08D6E8u, 2);  /* 0C08D6E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D6E8u); { u32 t_ = r3; PR = 0x0C08D6ECu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08D6ECu); }  /* 0C08D6E8 jsr @Rn */
L_0C08D6EC: BLKS(0x0C08D6ECu);
	r2 = 0xC0A9AE0u; UPD(0x0C08D6EEu, 1);  /* 0C08D6EC mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C08D6F0u, 1);  /* 0C08D6EE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C08D6F2u, 1);  /* 0C08D6F0 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D6F2u); { u32 t_ = r2; PR = 0x0C08D6F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08D6F6u); }  /* 0C08D6F2 jsr @Rn */
L_0C08D6F6: BLKS(0x0C08D6F6u);
	r0 = 0x86u; UPD(0x0C08D6F8u, 1);  /* 0C08D6F6 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C08D6F8 mov Rm,Rn */
	IF(0x0C08D6FAu); W16(r0 + r8, r10); UPD(0x0C08D6FCu, 2);  /* 0C08D6FA mov.w Rm,@(r0,Rn) */
	r5 = r13;  /* 0C08D6FC mov Rm,Rn */
	r0 += 0x6u;  /* 0C08D6FE add #imm,Rn */
	IF(0x0C08D700u); W32(r0 + r8, r13); UPD(0x0C08D702u, 3);  /* 0C08D700 mov.l Rm,@(r0,Rn) */
	r11 = 0xC069B20u; UPD(0x0C08D704u, 1);  /* 0C08D702 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08D704 add #imm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C08D708u, 2);  /* 0C08D706 mov.l @(disp,Rm),Rn */
	IF(0x0C08D708u); { u32 t_ = r11; PR = 0x0C08D70Cu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08D70Cu); }  /* 0C08D708 jsr @Rn */
L_0C08D70C: BLKS(0x0C08D70Cu);
	r4 = r10;  /* 0C08D70C mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C08D710u, 2);  /* 0C08D70E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08D710 add #imm,Rn */
	r5 = r13;  /* 0C08D712 mov Rm,Rn */
	IF(0x0C08D714u); { u32 t_ = r10; PR = 0x0C08D718u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08D718u); }  /* 0C08D714 jsr @Rn */
L_0C08D718: BLKS(0x0C08D718u);
	W32(r8 + 0x30u, r0); UPD(0x0C08D71Au, 1);  /* 0C08D718 mov.l Rm,@(disp,Rn) */
	r0 = 0xADu; UPD(0x0C08D71Cu, 1);  /* 0C08D71A mov.w @(disp,pc),Rn */
	IF(0x0C08D71Cu); W8(r0 + r8, r9); UPD(0x0C08D71Eu, 1);  /* 0C08D71C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08D71E add #imm,Rn */
	IF(0x0C08D720u); W8(r0 + r8, r9); UPD(0x0C08D722u, 2);  /* 0C08D720 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0C2110u; UPD(0x0C08D724u, 1);  /* 0C08D722 mov.l @(disp,pc),Rn */
	IF(0x0C08D724u); { u32 t_ = r9; PR = 0x0C08D728u; r4 = 0x7Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C08D728u); }  /* 0C08D724 jsr @Rn */
L_0C08D728: BLKS(0x0C08D728u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08D698u, 3); goto L_0C08D698; }  /* 0C08D728 bra */
}

void blk_f_0C08D760(sh3_t *c)
{
	LOCALS;
L_0C08D760: BLKS(0x0C08D760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08D762u, 1);  /* 0C08D760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08D764u, 1);  /* 0C08D762 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08D766u, 1);  /* 0C08D764 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08D768u, 1);  /* 0C08D766 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08D76Au, 1);  /* 0C08D768 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08D76A exts.w Rm,Rn */
	IF(0x0C08D76Cu); MACL = r11 * r0;  /* 0C08D76C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08D770u, 4);  /* 0C08D76E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08D772u, 1);  /* 0C08D770 mov.l @(disp,pc),Rn */
	IF(0x0C08D772u); r8 = MACL;  /* 0C08D772 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C08D776u, 2);  /* 0C08D774 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C08D776 add Rm,Rn */
	IF(0x0C08D778u); r15 -= 4; W32(r15, PR); UPD(0x0C08D77Au, 2);  /* 0C08D778 sts.l pr,@-Rn */
	r2 += r8;  /* 0C08D77A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08D77Eu, 2);  /* 0C08D77C mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08D77E cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D7ECu, 4); goto L_0C08D7EC; } goto L_0C08D784; }  /* 0C08D780 bt/s */
L_0C08D784: BLKS(0x0C08D784u);
	r9 = 0xC069BF0u; UPD(0x0C08D786u, 2);  /* 0C08D784 mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C08D786 mov Rm,Rn */
	r6 += 0x1u;  /* 0C08D788 add #imm,Rn */
	W8(r2, r6); UPD(0x0C08D78Cu, 3);  /* 0C08D78A mov.b Rm,@Rn */
	IF(0x0C08D78Cu); { u32 t_ = r9; PR = 0x0C08D790u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08D790u); }  /* 0C08D78C jsr @Rn */
L_0C08D790: BLKS(0x0C08D790u);
	r5 = 0x2A0u; UPD(0x0C08D792u, 1);  /* 0C08D790 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08D792 exts.w Rm,Rn */
	IF(0x0C08D794u); MACL = r1 * r5;  /* 0C08D794 mul.l Rm,Rn */
	r9 = 0x86u; UPD(0x0C08D798u, 4);  /* 0C08D796 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08D79Au, 1);  /* 0C08D798 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08D79A add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08D79Eu, 2);  /* 0C08D79C mov.l @(disp,Rm),Rn */
	IF(0x0C08D79Eu); r3 = MACL;  /* 0C08D79E sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C08D7A2u, 2);  /* 0C08D7A0 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C08D7A4u, 1);  /* 0C08D7A2 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C08D7A4 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08D7A8u, 2);  /* 0C08D7A6 mov.l @(disp,Rm),Rn */
	IF(0x0C08D7A8u); { u32 t_ = r8; PR = 0x0C08D7ACu; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08D7ACu); }  /* 0C08D7A8 jsr @Rn */
L_0C08D7AC: BLKS(0x0C08D7ACu);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08D7AEu, 1);  /* 0C08D7AC mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C08D7B0u, 1);  /* 0C08D7AE mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C08D7B0 mov Rm,Rn */
	r2 -= r0;  /* 0C08D7B2 sub Rm,Rn */
	r2 &= r4;  /* 0C08D7B4 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08D7B6 tst Rm,Rn */
	if (T) { UPD(0x0C08D7ECu, 7); goto L_0C08D7EC; }  /* 0C08D7B8 bt */
L_0C08D7BA: BLKS(0x0C08D7BAu);
	r7 = 0x100u; UPD(0x0C08D7BCu, 1);  /* 0C08D7BA mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08D7BC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D8A0u, 4); goto L_0C08D8A0; } goto L_0C08D7C2; }  /* 0C08D7BE bf/s */
L_0C08D7C2: BLKS(0x0C08D7C2u);
	r1 = r3;  /* 0C08D7C2 mov Rm,Rn */
	r1 += 0x4u;  /* 0C08D7C4 add #imm,Rn */
	UPD(0x0C08D7C6u, 3);
L_0C08D7C6: BLKS(0x0C08D7C6u);
	r4 = 0xB4u; UPD(0x0C08D7C8u, 1);  /* 0C08D7C6 mov.w @(disp,pc),Rn */
	IF(0x0C08D7C8u); MACL = r11 * r4;  /* 0C08D7C8 mul.l Rm,Rn */
	W16(r9, r1); UPD(0x0C08D7CCu, 3);  /* 0C08D7CA mov.w Rm,@Rn */
	r0 = 0xC286578u; UPD(0x0C08D7CEu, 1);  /* 0C08D7CC mov.l @(disp,pc),Rn */
	IF(0x0C08D7CEu); r9 = MACL;  /* 0C08D7CE sts macl,Rn */
	r9 += r0;  /* 0C08D7D0 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C08D7D4u, 3);  /* 0C08D7D2 mov.w @(disp,pc),Rn */
	r0 = 0xC069B20u; UPD(0x0C08D7D6u, 1);  /* 0C08D7D4 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C08D7D6 add Rm,Rn */
	r10 = 0x30000u; UPD(0x0C08D7DAu, 2);  /* 0C08D7D8 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08D7DCu, 1);  /* 0C08D7DA mov.w @Rm,Rn */
	IF(0x0C08D7DCu); { u32 t_ = r0; PR = 0x0C08D7E0u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08D7E0u); }  /* 0C08D7DC jsr @Rn */
L_0C08D7E0: BLKS(0x0C08D7E0u);
	r5 = r10;  /* 0C08D7E0 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C08D7E4u, 2);  /* 0C08D7E2 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C08D7E6u, 1);  /* 0C08D7E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D7E6u); { u32 t_ = r10; PR = 0x0C08D7EAu; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08D7EAu); }  /* 0C08D7E6 jsr @Rn */
L_0C08D7EA: BLKS(0x0C08D7EAu);
	W32(r9 + 0x30u, r0); UPD(0x0C08D7ECu, 1);  /* 0C08D7EA mov.l Rm,@(disp,Rn) */
L_0C08D7EC: BLKS(0x0C08D7ECu);
	r3 = 0xB4u; UPD(0x0C08D7EEu, 1);  /* 0C08D7EC mov.w @(disp,pc),Rn */
	IF(0x0C08D7EEu); MACL = r11 * r3;  /* 0C08D7EE mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08D7F2u, 3);  /* 0C08D7F0 mov.l @(disp,pc),Rn */
	IF(0x0C08D7F2u); r3 = MACL;  /* 0C08D7F2 sts macl,Rn */
	r3 += r9;  /* 0C08D7F4 add Rm,Rn */
	r8 = R32(r3 + 0x24u); UPD(0x0C08D7F8u, 3);  /* 0C08D7F6 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C08D7FAu, 1);  /* 0C08D7F8 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C08D7FCu, 1);  /* 0C08D7FA mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C08D7FEu, 1);  /* 0C08D7FC mov.l @(disp,Rm),Rn */
	r8 += r5;  /* 0C08D7FE add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C08D802u, 2);  /* 0C08D800 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C08D802 add Rm,Rn */
	r7 += r8;  /* 0C08D804 add Rm,Rn */
	W32(r3 + 0x24u, r8); UPD(0x0C08D808u, 3);  /* 0C08D806 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D808u); T = (s32)r7 >= 0;  /* 0C08D808 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D890u, 4); goto L_0C08D890; } UPD(0x0C08D80Eu, 1); goto L_0C08D80E; }  /* 0C08D80A bf/s */
L_0C08D80E: BLKS(0x0C08D80Eu);
	r10 = 0xAC0000u; UPD(0x0C08D810u, 1);  /* 0C08D80E mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C08D810 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08D82Au, 4); goto L_0C08D82A; }  /* 0C08D812 bt */
L_0C08D814: BLKS(0x0C08D814u);
	r2 = r6;  /* 0C08D814 mov Rm,Rn */
	r0 = 0xC3C4048u; UPD(0x0C08D818u, 2);  /* 0C08D816 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C08D81Au, 1);  /* 0C08D818 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C08D81Cu, 1);  /* 0C08D81A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C08D81C sub Rm,Rn */
	r2 += r6;  /* 0C08D81E add Rm,Rn */
	IF(0x0C08D820u); T = (s32)r2 >= 0;  /* 0C08D820 cmp/pz Rn */
	if (!T) { UPD(0x0C08D880u, 6); goto L_0C08D880; }  /* 0C08D822 bf */
L_0C08D824: BLKS(0x0C08D824u);
	r4 = 0x840000u; UPD(0x0C08D826u, 1);  /* 0C08D824 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C08D826 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08D840u, 4); goto L_0C08D840; }  /* 0C08D828 bf */
L_0C08D82A: BLKS(0x0C08D82Au);
	r11 = 0x0u;  /* 0C08D82A mov #imm,Rn */
	W32(r3, r11); UPD(0x0C08D82Eu, 2);  /* 0C08D82C mov.l Rm,@Rn */
	r15 = r14;  /* 0C08D82E mov Rm,Rn */
	IF(0x0C08D830u); PR = R32(r15); r15 += 4; UPD(0x0C08D832u, 2);  /* 0C08D830 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D834u, 1);  /* 0C08D832 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08D836u, 1);  /* 0C08D834 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08D838u, 1);  /* 0C08D836 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D83Au, 1);  /* 0C08D838 mov.l @Rm+,Rn */
	IF(0x0C08D83Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08D83A rts */
L_0C08D840: BLKS(0x0C08D840u);
	r2 = 0x86u; UPD(0x0C08D842u, 1);  /* 0C08D840 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C08D842 mov Rm,Rn */
	r8 = 0x98u; UPD(0x0C08D846u, 2);  /* 0C08D844 mov.w @(disp,pc),Rn */
	r9 = 0x1Fu;  /* 0C08D846 mov #imm,Rn */
	IF(0x0C08D848u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08D84Au, 2);  /* 0C08D848 mov.w @(r0,Rm),Rn */
	r8 += r3;  /* 0C08D84A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08D84Eu, 2);  /* 0C08D84C mov.b @Rm,Rn */
	r5 += 0x8u;  /* 0C08D84E add #imm,Rn */
	r0 += 0x1u;  /* 0C08D850 add #imm,Rn */
	IF(0x0C08D852u); r5 >>= 2;  /* 0C08D852 shlr2 Rn */
	IF(0x0C08D854u); r5 >>= 2;  /* 0C08D854 shlr2 Rn */
	W8(r8, r0); UPD(0x0C08D858u, 5);  /* 0C08D856 mov.b Rm,@Rn */
	r5 &= r9;  /* 0C08D858 and Rm,Rn */
	r0 &= 0x1u;  /* 0C08D85A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08D85C tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D86Cu, 6); goto L_0C08D86C; } UPD(0x0C08D862u, 1); goto L_0C08D862; }  /* 0C08D85E bt/s */
L_0C08D862: BLKS(0x0C08D862u);
	r0 = R32(r3 + 0xCu); UPD(0x0C08D864u, 1);  /* 0C08D862 mov.l @(disp,Rm),Rn */
	r6 = 0xC1A4B58u; UPD(0x0C08D866u, 1);  /* 0C08D864 mov.l @(disp,pc),Rn */
	IF(0x0C08D866u); r0 <<= 2;  /* 0C08D866 shll2 Rn */
	IF(0x0C08D868u); r10 = R32(r0 + r6); UPD(0x0C08D86Au, 2);  /* 0C08D868 mov.l @(r0,Rm),Rn */
	W32(r3 + 0xCu, r10); UPD(0x0C08D86Cu, 1);  /* 0C08D86A mov.l Rm,@(disp,Rn) */
L_0C08D86C: BLKS(0x0C08D86Cu);
	r3 = 0xC0A8B10u; UPD(0x0C08D86Eu, 1);  /* 0C08D86C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08D86E mov Rm,Rn */
	r15 = r14;  /* 0C08D870 mov Rm,Rn */
	IF(0x0C08D872u); PR = R32(r15); r15 += 4; UPD(0x0C08D874u, 3);  /* 0C08D872 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D876u, 1);  /* 0C08D874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08D878u, 1);  /* 0C08D876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08D87Au, 1);  /* 0C08D878 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D87Cu, 1);  /* 0C08D87A mov.l @Rm+,Rn */
	IF(0x0C08D87Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C08D87C jmp @Rn */
L_0C08D880: BLKS(0x0C08D880u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08D824u, 3); goto L_0C08D824; }  /* 0C08D880 bra */
L_0C08D890: BLKS(0x0C08D890u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C08D80Eu, 3); goto L_0C08D80E; }  /* 0C08D890 bra */
L_0C08D8A0: BLKS(0x0C08D8A0u);
	{ r1 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(0x0C08D7C6u, 3); goto L_0C08D7C6; }  /* 0C08D8A0 bra */
}

void blk_f_0C08D8F0(sh3_t *c)
{
	LOCALS;
L_0C08D8F0: BLKS(0x0C08D8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08D8F2u, 1);  /* 0C08D8F0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08D8F2 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C08D8F6u, 2);  /* 0C08D8F4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08D8F8u, 1);  /* 0C08D8F6 mov.l Rm,@-Rn */
	IF(0x0C08D8F8u); MACL = r4 * r0;  /* 0C08D8F8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08D8FCu, 3);  /* 0C08D8FA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08D8FEu, 1);  /* 0C08D8FC mov.l @(disp,pc),Rn */
	IF(0x0C08D8FEu); r8 = MACL;  /* 0C08D8FE sts macl,Rn */
	IF(0x0C08D900u); r15 -= 4; W32(r15, PR); UPD(0x0C08D902u, 2);  /* 0C08D900 sts.l pr,@-Rn */
	r8 += r0;  /* 0C08D902 add Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C08D906u, 2);  /* 0C08D904 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C08D906 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D9A0u, 4); goto L_0C08D9A0; } goto L_0C08D90C; }  /* 0C08D908 bf/s */
L_0C08D90C: BLKS(0x0C08D90Cu);
	r5 = R32(r8 + 0x24u); UPD(0x0C08D90Eu, 2);  /* 0C08D90C mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C08D910u, 1);  /* 0C08D90E mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C08D910 add Rm,Rn */
	r3 = R32(r8 + 0x28u); UPD(0x0C08D914u, 2);  /* 0C08D912 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08D916u, 1);  /* 0C08D914 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C08D918u, 1);  /* 0C08D916 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C08D918 add Rm,Rn */
	r2 += r5;  /* 0C08D91A add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08D91Eu, 3);  /* 0C08D91C mov.l Rm,@(disp,Rn) */
	IF(0x0C08D91Eu); T = (s32)r2 >= 0;  /* 0C08D91E cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D990u, 4); goto L_0C08D990; } UPD(0x0C08D924u, 1); goto L_0C08D924; }  /* 0C08D920 bf/s */
L_0C08D924: BLKS(0x0C08D924u);
	r6 = 0xA80000u; UPD(0x0C08D926u, 1);  /* 0C08D924 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C08D926 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08D940u, 4); goto L_0C08D940; }  /* 0C08D928 bt */
L_0C08D92A: BLKS(0x0C08D92Au);
	r2 = 0xC3C4048u; UPD(0x0C08D92Cu, 1);  /* 0C08D92A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C08D92Eu, 1);  /* 0C08D92C mov.l @Rm,Rn */
	r9 = 0xFF880000u; UPD(0x0C08D930u, 1);  /* 0C08D92E mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C08D930 mov Rm,Rn */
	r2 -= r0;  /* 0C08D932 sub Rm,Rn */
	r2 += r9;  /* 0C08D934 add Rm,Rn */
	IF(0x0C08D936u); T = (s32)r2 >= 0;  /* 0C08D936 cmp/pz Rn */
	if (!T) { UPD(0x0C08D980u, 7); goto L_0C08D980; }  /* 0C08D938 bf */
L_0C08D93A: BLKS(0x0C08D93Au);
	r5 = 0x800000u; UPD(0x0C08D93Cu, 1);  /* 0C08D93A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08D93C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08D950u, 4); goto L_0C08D950; }  /* 0C08D93E bf */
L_0C08D940: BLKS(0x0C08D940u);
	W32(r8, r7); UPD(0x0C08D942u, 1);  /* 0C08D940 mov.l Rm,@Rn */
L_0C08D942: BLKS(0x0C08D942u);
	r15 = r14;  /* 0C08D942 mov Rm,Rn */
	IF(0x0C08D944u); PR = R32(r15); r15 += 4; UPD(0x0C08D946u, 2);  /* 0C08D944 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D948u, 1);  /* 0C08D946 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D94Au, 1);  /* 0C08D948 mov.l @Rm+,Rn */
	IF(0x0C08D94Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08D94A rts */
L_0C08D950: BLKS(0x0C08D950u);
	r7 = 0x99u; UPD(0x0C08D952u, 1);  /* 0C08D950 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08D952 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C08D956u, 2);  /* 0C08D954 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08D956 add #imm,Rn */
	W8(r7, r0); UPD(0x0C08D95Au, 2);  /* 0C08D958 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C08D95A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08D95C tst Rm,Rn */
	if (T) { UPD(0x0C08D942u, 5); goto L_0C08D942; }  /* 0C08D95E bt */
L_0C08D960: BLKS(0x0C08D960u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08D962u, 1);  /* 0C08D960 mov.l @(disp,Rm),Rn */
	r9 = 0xC1A593Cu; UPD(0x0C08D964u, 1);  /* 0C08D962 mov.l @(disp,pc),Rn */
	IF(0x0C08D964u); r0 <<= 2;  /* 0C08D964 shll2 Rn */
	IF(0x0C08D966u); r6 = R32(r0 + r9); UPD(0x0C08D968u, 2);  /* 0C08D966 mov.l @(r0,Rm),Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C08D96Au, 1);  /* 0C08D968 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C08D96Cu, 1);  /* 0C08D96A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C08D96C mov Rm,Rn */
	IF(0x0C08D96Eu); PR = R32(r15); r15 += 4; UPD(0x0C08D970u, 2);  /* 0C08D96E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08D972u, 1);  /* 0C08D970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08D974u, 1);  /* 0C08D972 mov.l @Rm+,Rn */
	IF(0x0C08D974u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08D974 jmp @Rn */
L_0C08D980: BLKS(0x0C08D980u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08D93Au, 3); goto L_0C08D93A; }  /* 0C08D980 bra */
L_0C08D990: BLKS(0x0C08D990u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08D924u, 3); goto L_0C08D924; }  /* 0C08D990 bra */
L_0C08D9A0: BLKS(0x0C08D9A0u);
	r0 = 0x99u; UPD(0x0C08D9A2u, 1);  /* 0C08D9A0 mov.w @(disp,pc),Rn */
	r9 = 0x3u;  /* 0C08D9A2 mov #imm,Rn */
	r0 += r8;  /* 0C08D9A4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C08D9A8u, 3);  /* 0C08D9A6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C08D9A8 add #imm,Rn */
	r9 &= r2;  /* 0C08D9AA and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08D9AC tst Rm,Rn */
	{ u32 c_ = !T; W8(r0, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D942u, 6); goto L_0C08D942; } UPD(0x0C08D9B2u, 1); goto L_0C08D9B2; }  /* 0C08D9AE bf/s */
L_0C08D9B2: BLKS(0x0C08D9B2u);
	r7 = R32(r8 + 0xCu); UPD(0x0C08D9B4u, 1);  /* 0C08D9B2 mov.l @(disp,Rm),Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C08D9B6u, 1);  /* 0C08D9B4 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C08D9B6 add #imm,Rn */
	IF(0x0C08D9B8u); { u32 t_ = r5; PR = 0x0C08D9BCu; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08D9BCu); }  /* 0C08D9B8 jsr @Rn */
L_0C08D9BC: BLKS(0x0C08D9BCu);
	r0 = R32(r8 + 0xCu); UPD(0x0C08D9BEu, 1);  /* 0C08D9BC mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C08D9BE cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08D942u, 4); goto L_0C08D942; }  /* 0C08D9C0 bf */
L_0C08D9C2: BLKS(0x0C08D9C2u);
	W32(r8, r9); UPD(0x0C08D9C4u, 1);  /* 0C08D9C2 mov.l Rm,@Rn */
	{ IF(0x0C08D9C6u); ; /* slot nop */ UPD(0x0C08D942u, 3); goto L_0C08D942; }  /* 0C08D9C4 bra */
}

void blk_f_0C08D9F0(sh3_t *c)
{
	LOCALS;
L_0C08D9F0: BLKS(0x0C08D9F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9F2u, 1);  /* 0C08D9F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9F4u, 1);  /* 0C08D9F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9F6u, 1);  /* 0C08D9F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9F8u, 1);  /* 0C08D9F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9FAu, 1);  /* 0C08D9F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9FCu, 1);  /* 0C08D9FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08D9FEu, 1);  /* 0C08D9FC mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08DA00u, 1);  /* 0C08D9FE mov.l @(disp,pc),Rn */
	IF(0x0C08DA00u); r15 -= 4; W32(r15, PR); UPD(0x0C08DA02u, 1);  /* 0C08DA00 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08DA04u, 1);  /* 0C08DA02 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08DA04 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C08DA08u, 2);  /* 0C08DA06 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08DA08 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08DA0Cu, 2);  /* 0C08DA0A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C08DA0Eu, 1);  /* 0C08DA0C mov.l @Rm,Rn */
	IF(0x0C08DA0Eu); r0 <<= 2;  /* 0C08DA0E shll2 Rn */
	IF(0x0C08DA10u); r6 = R32(r0 + r7); UPD(0x0C08DA12u, 2);  /* 0C08DA10 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C08DA14u, 1);  /* 0C08DA12 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C08DA16u, 1);  /* 0C08DA14 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08DA18u, 1);  /* 0C08DA16 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08DA1Au, 1);  /* 0C08DA18 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C08DA1Cu, 1);  /* 0C08DA1A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08DA1Eu, 1);  /* 0C08DA1C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08DA20u, 1);  /* 0C08DA1E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C08DA22u, 1);  /* 0C08DA20 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08DA22 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08DA26u, 2);  /* 0C08DA24 mov.l @(disp,pc),Rn */
	IF(0x0C08DA26u); { u32 t_ = r8; PR = 0x0C08DA2Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08DA2Au); }  /* 0C08DA26 jsr @Rn */
L_0C08DA2A: BLKS(0x0C08DA2Au);
	T = (r0 & r0) == 0;  /* 0C08DA2A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DA50u, 4); goto L_0C08DA50; } UPD(0x0C08DA30u, 1); goto L_0C08DA30; }  /* 0C08DA2C bf/s */
L_0C08DA30: BLKS(0x0C08DA30u);
	r14 += 0xCu;  /* 0C08DA30 add #imm,Rn */
	UPD(0x0C08DA32u, 1);
L_0C08DA32: BLKS(0x0C08DA32u);
	r15 = r14;  /* 0C08DA32 mov Rm,Rn */
	IF(0x0C08DA34u); PR = R32(r15); r15 += 4; UPD(0x0C08DA36u, 2);  /* 0C08DA34 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08DA38u, 1);  /* 0C08DA36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08DA3Au, 1);  /* 0C08DA38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08DA3Cu, 1);  /* 0C08DA3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08DA3Eu, 1);  /* 0C08DA3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08DA40u, 1);  /* 0C08DA3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08DA42u, 1);  /* 0C08DA40 mov.l @Rm+,Rn */
	IF(0x0C08DA42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08DA42 rts */
L_0C08DA50: BLKS(0x0C08DA50u);
	r10 = 0xC071740u; UPD(0x0C08DA52u, 1);  /* 0C08DA50 mov.l @(disp,pc),Rn */
	IF(0x0C08DA52u); { u32 t_ = r10; PR = 0x0C08DA56u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08DA56u); }  /* 0C08DA52 jsr @Rn */
L_0C08DA56: BLKS(0x0C08DA56u);
	T = (r0 & r0) == 0;  /* 0C08DA56 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DA30u, 4); goto L_0C08DA30; } goto L_0C08DA5C; }  /* 0C08DA58 bt/s */
L_0C08DA5C: BLKS(0x0C08DA5Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08DA5Eu, 2);  /* 0C08DA5C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08DA60u, 1);  /* 0C08DA5E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08DA62u, 1);  /* 0C08DA60 mov.w @Rm+,Rn */
	IF(0x0C08DA62u); MACL = r10 * r8;  /* 0C08DA62 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08DA66u, 3);  /* 0C08DA64 mov.l @(disp,pc),Rn */
	IF(0x0C08DA66u); r8 = MACL;  /* 0C08DA66 sts macl,Rn */
	r0 = 0xD3000100u; UPD(0x0C08DA6Au, 2);  /* 0C08DA68 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08DA6A add Rm,Rn */
	W32(r8, r0); UPD(0x0C08DA6Eu, 2);  /* 0C08DA6C mov.l Rm,@Rn */
	r4 = r10;  /* 0C08DA6E mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08DA72u, 2);  /* 0C08DA70 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C08DA74u, 1);  /* 0C08DA72 mov.w @Rm,Rn */
	r13 = r6 & 0xFFFF;  /* 0C08DA74 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08DA78u, 2);  /* 0C08DA76 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08DA78 mov #imm,Rn */
	IF(0x0C08DA7Au); W16(r0 + r8, r7); UPD(0x0C08DA7Cu, 2);  /* 0C08DA7A mov.w Rm,@(r0,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08DA7Eu, 1);  /* 0C08DA7C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08DA7E add #imm,Rn */
	IF(0x0C08DA80u); W16(r0 + r8, r7); UPD(0x0C08DA82u, 2);  /* 0C08DA80 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r13); UPD(0x0C08DA84u, 1);  /* 0C08DA82 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r11); UPD(0x0C08DA86u, 1);  /* 0C08DA84 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DA86u); { u32 t_ = r5; PR = 0x0C08DA8Au; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08DA8Au); }  /* 0C08DA86 jsr @Rn */
L_0C08DA8A: BLKS(0x0C08DA8Au);
	r9 = 0xC0722E0u; UPD(0x0C08DA8Cu, 1);  /* 0C08DA8A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08DA8C mov Rm,Rn */
	r2 = 0x1700000u; UPD(0x0C08DA90u, 2);  /* 0C08DA8E mov.l @(disp,pc),Rn */
	IF(0x0C08DA90u); { u32 t_ = r9; PR = 0x0C08DA94u; W32(r8 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08DA94u); }  /* 0C08DA90 jsr @Rn */
L_0C08DA94: BLKS(0x0C08DA94u);
	r3 = 0xC0A9AE0u; UPD(0x0C08DA96u, 1);  /* 0C08DA94 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9D30u; UPD(0x0C08DA98u, 1);  /* 0C08DA96 mov.l @(disp,pc),Rn */
	IF(0x0C08DA98u); { u32 t_ = r3; PR = 0x0C08DA9Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08DA9Cu); }  /* 0C08DA98 jsr @Rn */
L_0C08DA9C: BLKS(0x0C08DA9Cu);
	r0 = 0xADu; UPD(0x0C08DA9Eu, 1);  /* 0C08DA9C mov.w @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C08DA9E mov #imm,Rn */
	r6 = 0xA8u; UPD(0x0C08DAA2u, 2);  /* 0C08DAA0 mov.w @(disp,pc),Rn */
	IF(0x0C08DAA2u); W8(r0 + r8, r11); UPD(0x0C08DAA4u, 1);  /* 0C08DAA2 mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C08DAA4 add Rm,Rn */
	r6 += 0x1u;  /* 0C08DAA6 add #imm,Rn */
	W8(r6, r4); UPD(0x0C08DAAAu, 3);  /* 0C08DAA8 mov.b Rm,@Rn */
	r0 = 0xC297460u; UPD(0x0C08DAACu, 1);  /* 0C08DAAA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08DAAC mov Rm,Rn */
	r5 = R32(r0); UPD(0x0C08DAB0u, 2);  /* 0C08DAAE mov.l @Rm,Rn */
	IF(0x0C08DAB0u); { u32 t_ = r13; PR = 0x0C08DAB4u; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08DAB4u); }  /* 0C08DAB0 jsr @Rn */
L_0C08DAB4: BLKS(0x0C08DAB4u);
	r0 = 0x94u; UPD(0x0C08DAB6u, 1);  /* 0C08DAB4 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C08DAB6 mov Rm,Rn */
	IF(0x0C08DAB8u); W32(r0 + r8, r11); UPD(0x0C08DABAu, 2);  /* 0C08DAB8 mov.l Rm,@(r0,Rn) */
	r9 = 0x8Cu; UPD(0x0C08DABCu, 1);  /* 0C08DABA mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08DABC add #imm,Rn */
	r9 += r8;  /* 0C08DABE add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08DAC2u, 3);  /* 0C08DAC0 mov.l @(disp,Rm),Rn */
	W32(r9, r11); UPD(0x0C08DAC4u, 1);  /* 0C08DAC2 mov.l Rm,@Rn */
	IF(0x0C08DAC4u); W32(r0 + r8, r11); UPD(0x0C08DAC6u, 1);  /* 0C08DAC4 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C08DAC8u, 1);  /* 0C08DAC6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C08DACAu, 1);  /* 0C08DAC8 mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C08DACCu, 1);  /* 0C08DACA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08DACEu, 1);  /* 0C08DACC mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08DACE mov #imm,Rn */
	UPD(0x0C08DAD0u, 1);
L_0C08DAD0: BLKS(0x0C08DAD0u);
	r9 = 0xC1A7064u; UPD(0x0C08DAD2u, 1);  /* 0C08DAD0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08DAD4u, 1);  /* 0C08DAD2 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08DAD4 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08DAD8u, 2);  /* 0C08DAD6 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C08DAD8 add #imm,Rn */
	IF(0x0C08DADAu); MACL = r10 * r8;  /* 0C08DADA mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08DADEu, 4);  /* 0C08DADC mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C08DADE add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C08DAE2u, 2);  /* 0C08DAE0 mov.l @(disp,pc),Rn */
	IF(0x0C08DAE2u); r8 = MACL;  /* 0C08DAE2 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08DAE6u, 2);  /* 0C08DAE4 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C08DAE6 add Rm,Rn */
	IF(0x0C08DAE8u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08DAEAu, 2);  /* 0C08DAE8 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C08DAEA add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08DAEC add #imm,Rn */
	W16(r8, r5); UPD(0x0C08DAF0u, 3);  /* 0C08DAEE mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08DAF0 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C08DAF4u, 2);  /* 0C08DAF2 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08DAF4 add #imm,Rn */
	W16(r8, r2); UPD(0x0C08DAF8u, 2);  /* 0C08DAF6 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C08DAF8 mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08DAFCu, 2);  /* 0C08DAFA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08DAFC add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08DB00u, 2);  /* 0C08DAFE mov.w @Rm,Rn */
	r0 = R32(r9); UPD(0x0C08DB02u, 1);  /* 0C08DB00 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C08DB02 extu.w Rm,Rn */
	W32(r8, r0); UPD(0x0C08DB06u, 2);  /* 0C08DB04 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08DB06 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08DB0Au, 2);  /* 0C08DB08 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A8A30u; UPD(0x0C08DB0Cu, 1);  /* 0C08DB0A mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C08DB0Eu, 1);  /* 0C08DB0C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C08DB10u, 1);  /* 0C08DB0E mov.l Rm,@(disp,Rn) */
	IF(0x0C08DB10u); { u32 t_ = r2; PR = 0x0C08DB14u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08DB14u); }  /* 0C08DB10 jsr @Rn */
L_0C08DB14: BLKS(0x0C08DB14u);
	r6 = R32(r13 + 0x24u); UPD(0x0C08DB16u, 1);  /* 0C08DB14 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C08DB18u, 1);  /* 0C08DB16 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08DB1Au, 1);  /* 0C08DB18 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C08DB1Cu, 1);  /* 0C08DB1A mov.l Rm,@(disp,Rn) */
	r0 = 0xC2B03A2u; UPD(0x0C08DB1Eu, 1);  /* 0C08DB1C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C08DB20u, 1);  /* 0C08DB1E mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08DB22u, 1);  /* 0C08DB20 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C08DB24u, 1);  /* 0C08DB22 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DB24u); r3 >>= 2;  /* 0C08DB24 shlr2 Rn */
	r2 = R32(r9 + 0x10u); UPD(0x0C08DB28u, 2);  /* 0C08DB26 mov.l @(disp,Rm),Rn */
	IF(0x0C08DB28u); r3 >>= 2;  /* 0C08DB28 shlr2 Rn */
	r4 = 0x86u; UPD(0x0C08DB2Cu, 2);  /* 0C08DB2A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DB2C mov Rm,Rn */
	IF(0x0C08DB2Eu); r3 >>= 2;  /* 0C08DB2E shlr2 Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08DB32u, 3);  /* 0C08DB30 mov.l @(disp,pc),Rn */
	IF(0x0C08DB32u); W16(r0 + r4, r3); UPD(0x0C08DB34u, 1);  /* 0C08DB32 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r2); UPD(0x0C08DB36u, 1);  /* 0C08DB34 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DB36u); { u32 t_ = r9; PR = 0x0C08DB3Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08DB3Au); }  /* 0C08DB36 jsr @Rn */
L_0C08DB3A: BLKS(0x0C08DB3Au);
	r0 = 0xB0u; UPD(0x0C08DB3Cu, 1);  /* 0C08DB3A mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C08DB3C mov Rm,Rn */
	IF(0x0C08DB3Eu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08DB40u, 2);  /* 0C08DB3E mov.b @(r0,Rm),Rn */
	r6 = 0xACu; UPD(0x0C08DB42u, 1);  /* 0C08DB40 mov.w @(disp,pc),Rn */
	IF(0x0C08DB42u); W8(r0 + r8, r3); UPD(0x0C08DB44u, 1);  /* 0C08DB42 mov.b Rm,@(r0,Rn) */
	r5 += r6;  /* 0C08DB44 add Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C08DB48u, 2);  /* 0C08DB46 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C08DB48 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C08DB4Cu, 2);  /* 0C08DB4A mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C08DB4C add #imm,Rn */
	r10 = 0xC0C2360u; UPD(0x0C08DB50u, 2);  /* 0C08DB4E mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C08DB50 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C08DB54u, 2);  /* 0C08DB52 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08DB54 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C08DB58u, 2);  /* 0C08DB56 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08DB58 add #imm,Rn */
	r2 = 0x9Bu; UPD(0x0C08DB5Cu, 2);  /* 0C08DB5A mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C08DB5Eu, 1);  /* 0C08DB5C mov.b Rm,@Rn */
	r8 += r2;  /* 0C08DB5E add Rm,Rn */
	IF(0x0C08DB60u); { u32 t_ = r10; PR = 0x0C08DB64u; W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08DB64u); }  /* 0C08DB60 jsr @Rn */
L_0C08DB64: BLKS(0x0C08DB64u);
	W8(r8, r0); UPD(0x0C08DB66u, 1);  /* 0C08DB64 mov.b Rm,@Rn */
	r10 = 0x5u;  /* 0C08DB66 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C08DB6Au, 2);  /* 0C08DB68 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08DB6A add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C08DB6C exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C08DB70u, 3);  /* 0C08DB6E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08DB72u, 1);  /* 0C08DB70 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C08DB72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DAD0u, 4); goto L_0C08DAD0; } goto L_0C08DB78; }  /* 0C08DB74 bf/s */
L_0C08DB78: BLKS(0x0C08DB78u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08DA32u, 4); goto L_0C08DA32; }  /* 0C08DB78 bra */
}

/* FUN_0c08dbe0 */
void blk_f_0C08DBE0(sh3_t *c)
{
	LOCALS;
L_0C08DBE0: BLKS(0x0C08DBE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBE2u, 1);  /* 0C08DBE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBE4u, 1);  /* 0C08DBE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBE6u, 1);  /* 0C08DBE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBE8u, 1);  /* 0C08DBE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBEAu, 1);  /* 0C08DBE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBECu, 1);  /* 0C08DBEA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08DBEEu, 1);  /* 0C08DBEC mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C08DBEE exts.w Rm,Rn */
	IF(0x0C08DBF0u); r15 -= 4; W32(r15, PR); UPD(0x0C08DBF2u, 2);  /* 0C08DBF0 sts.l pr,@-Rn */
	r4 = r13;  /* 0C08DBF2 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08DBF6u, 2);  /* 0C08DBF4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08DBF6 add #imm,Rn */
	IF(0x0C08DBF8u); { u32 t_ = r8; PR = 0x0C08DBFCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08DBFCu); }  /* 0C08DBF8 jsr @Rn */
L_0C08DBFC: BLKS(0x0C08DBFCu);
	IF(0x0C08DBFCu); T = (s32)r0 >= 0;  /* 0C08DBFC cmp/pz Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DC06u, 4); goto L_0C08DC06; } goto L_0C08DC02; }  /* 0C08DBFE bt/s */
L_0C08DC02: BLKS(0x0C08DC02u);
	{ IF(0x0C08DC04u); ; /* slot nop */ UPD(0x0C08DE40u, 4); goto L_0C08DE40; }  /* 0C08DC02 bra */
L_0C08DC06: BLKS(0x0C08DC06u);
	r2 = 0xB4u; UPD(0x0C08DC08u, 1);  /* 0C08DC06 mov.w @(disp,pc),Rn */
	IF(0x0C08DC08u); MACL = r13 * r2;  /* 0C08DC08 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08DC0Cu, 3);  /* 0C08DC0A mov.l @(disp,pc),Rn */
	IF(0x0C08DC0Cu); r8 = MACL;  /* 0C08DC0C sts macl,Rn */
	IF(0x0C08DC0Eu); MACL = r0 * r2;  /* 0C08DC0E mul.l Rm,Rn */
	r8 += r3;  /* 0C08DC10 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C08DC14u, 5);  /* 0C08DC12 mov.l @Rm,Rn */
	IF(0x0C08DC14u); r7 = MACL;  /* 0C08DC14 sts macl,Rn */
	r7 += r3;  /* 0C08DC16 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C08DC1Au, 3);  /* 0C08DC18 mov.l @Rm,Rn */
	r4 = 0x100u; UPD(0x0C08DC1Cu, 1);  /* 0C08DC1A mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C08DC1Eu, 1);  /* 0C08DC1C mov.w @(disp,pc),Rn */
	r6 &= r4;  /* 0C08DC1E and Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C08DC22u, 2);  /* 0C08DC20 mov.l @(disp,Rm),Rn */
	r5 &= r9;  /* 0C08DC22 and Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C08DC26u, 2);  /* 0C08DC24 mov.l @(disp,Rm),Rn */
	r5 |= r6;  /* 0C08DC26 or Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C08DC2Au, 2);  /* 0C08DC28 mov.l @(disp,Rm),Rn */
	T = (r5 & r4) == 0;  /* 0C08DC2A tst Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08DC2Eu, 2);  /* 0C08DC2C mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C08DC2E add Rm,Rn */
	r10 += r1;  /* 0C08DC30 add Rm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C08DC34u, 3);  /* 0C08DC32 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r10); UPD(0x0C08DC36u, 1);  /* 0C08DC34 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08DC3Eu, 3); goto L_0C08DC3E; } UPD(0x0C08DC3Au, 1); goto L_0C08DC3A; }  /* 0C08DC36 bt/s */
L_0C08DC3A: BLKS(0x0C08DC3Au);
	{ IF(0x0C08DC3Cu); ; /* slot nop */ UPD(0x0C08DE10u, 3); goto L_0C08DE10; }  /* 0C08DC3A bra */
L_0C08DC3E: BLKS(0x0C08DC3Eu);
	r9 = 0xC0690D0u; UPD(0x0C08DC40u, 1);  /* 0C08DC3E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08DC40 mov Rm,Rn */
	IF(0x0C08DC42u); { u32 t_ = r9; PR = 0x0C08DC46u; r5 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0690D0, 0x0C0690D0u, 0x0C08DC46u); }  /* 0C08DC42 jsr @Rn */
L_0C08DC46: BLKS(0x0C08DC46u);
	r5 = 0x86u; UPD(0x0C08DC48u, 1);  /* 0C08DC46 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DC48 mov Rm,Rn */
	IF(0x0C08DC4Au); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08DC4Cu, 2);  /* 0C08DC4A mov.w @(r0,Rm),Rn */
	r4 += 0x4u;  /* 0C08DC4C add #imm,Rn */
	IF(0x0C08DC4Eu); r4 >>= 2;  /* 0C08DC4E shlr2 Rn */
	r0 = 0x3Fu;  /* 0C08DC50 mov #imm,Rn */
	IF(0x0C08DC52u); T = r4 & 1; r4 >>= 1;  /* 0C08DC52 shlr Rn */
	r4 &= r0;  /* 0C08DC54 and Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08DC58u, 6);  /* 0C08DC56 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C08DC5Au, 1);  /* 0C08DC58 mov.l @(disp,pc),Rn */
	IF(0x0C08DC5Au); { u32 t_ = r8; PR = 0x0C08DC5Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08DC5Eu); }  /* 0C08DC5A jsr @Rn */
L_0C08DC5E: BLKS(0x0C08DC5Eu);
	r1 = 0x0u;  /* 0C08DC5E mov #imm,Rn */
	UPD(0x0C08DC60u, 1);
L_0C08DC60: BLKS(0x0C08DC60u);
	r3 = (u32)(s32)(s16)r1;  /* 0C08DC60 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C08DC62 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DC80u, 5); goto L_0C08DC80; } UPD(0x0C08DC68u, 1); goto L_0C08DC68; }  /* 0C08DC64 bf/s */
L_0C08DC68: BLKS(0x0C08DC68u);
	r14 += 0xCu;  /* 0C08DC68 add #imm,Rn */
	r15 = r14;  /* 0C08DC6A mov Rm,Rn */
	IF(0x0C08DC6Cu); PR = R32(r15); r15 += 4; UPD(0x0C08DC6Eu, 3);  /* 0C08DC6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08DC70u, 1);  /* 0C08DC6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08DC72u, 1);  /* 0C08DC70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08DC74u, 1);  /* 0C08DC72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08DC76u, 1);  /* 0C08DC74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08DC78u, 1);  /* 0C08DC76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08DC7Au, 1);  /* 0C08DC78 mov.l @Rm+,Rn */
	IF(0x0C08DC7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08DC7A rts */
L_0C08DC80: BLKS(0x0C08DC80u);
	r8 = 0xC0BC1B0u; UPD(0x0C08DC82u, 1);  /* 0C08DC80 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08DC82 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08DC84 mov #imm,Rn */
	IF(0x0C08DC86u); { u32 t_ = r8; PR = 0x0C08DC8Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08DC8Au); }  /* 0C08DC86 jsr @Rn */
L_0C08DC8A: BLKS(0x0C08DC8Au);
	T = (r0 & r0) == 0;  /* 0C08DC8A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DC68u, 4); goto L_0C08DC68; } goto L_0C08DC90; }  /* 0C08DC8C bt/s */
L_0C08DC90: BLKS(0x0C08DC90u);
	r1 = 0xB4u; UPD(0x0C08DC92u, 2);  /* 0C08DC90 mov.w @(disp,pc),Rn */
	IF(0x0C08DC92u); MACL = r13 * r1;  /* 0C08DC92 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08DC96u, 3);  /* 0C08DC94 mov.l @(disp,pc),Rn */
	IF(0x0C08DC96u); r8 = MACL;  /* 0C08DC96 sts macl,Rn */
	r8 += r0;  /* 0C08DC98 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C08DC9Cu, 3);  /* 0C08DC9A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DC9C mov Rm,Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08DCA0u, 2);  /* 0C08DC9E mov.l @(disp,pc),Rn */
	IF(0x0C08DCA0u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08DCA2u, 1);  /* 0C08DCA0 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08DCA4u, 1);  /* 0C08DCA2 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08DCA4 extu.b Rm,Rn */
	IF(0x0C08DCA6u); { u32 t_ = r10; PR = 0x0C08DCAAu; r4 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08DCAAu); }  /* 0C08DCA6 jsr @Rn */
L_0C08DCAA: BLKS(0x0C08DCAAu);
	T = (r0 & r0) == 0;  /* 0C08DCAA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DC68u, 4); goto L_0C08DC68; } goto L_0C08DCB0; }  /* 0C08DCAC bt/s */
L_0C08DCB0: BLKS(0x0C08DCB0u);
	r6 = 0x86u; UPD(0x0C08DCB2u, 2);  /* 0C08DCB0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DCB2 mov Rm,Rn */
	r5 = 0x0u;  /* 0C08DCB4 mov #imm,Rn */
	IF(0x0C08DCB6u); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08DCB8u, 3);  /* 0C08DCB6 mov.w @(r0,Rm),Rn */
	W32(r14, r5); UPD(0x0C08DCBAu, 1);  /* 0C08DCB8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C08DCBCu, 1);  /* 0C08DCBA mov.l Rm,@(disp,Rn) */
L_0C08DCBC: BLKS(0x0C08DCBCu);
	r1 = 0xC069B20u; UPD(0x0C08DCBEu, 1);  /* 0C08DCBC mov.l @(disp,pc),Rn */
	r5 = 0x180000u; UPD(0x0C08DCC0u, 1);  /* 0C08DCBE mov.l @(disp,pc),Rn */
	IF(0x0C08DCC0u); { u32 t_ = r1; PR = 0x0C08DCC4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08DCC4u); }  /* 0C08DCC0 jsr @Rn */
L_0C08DCC4: BLKS(0x0C08DCC4u);
	r2 = R32(r14); UPD(0x0C08DCC6u, 1);  /* 0C08DCC4 mov.l @Rm,Rn */
	r12 = r0;  /* 0C08DCC6 mov Rm,Rn */
	r6 = 0xC1A70DCu; UPD(0x0C08DCCAu, 2);  /* 0C08DCC8 mov.l @(disp,pc),Rn */
	IF(0x0C08DCCAu); r2 <<= 2;  /* 0C08DCCA shll2 Rn */
	r9 = 0xC069AF0u; UPD(0x0C08DCCEu, 2);  /* 0C08DCCC mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C08DCCE add Rm,Rn */
	r5 = R32(r2); UPD(0x0C08DCD2u, 2);  /* 0C08DCD0 mov.l @Rm,Rn */
	r4 = r11;  /* 0C08DCD2 mov Rm,Rn */
	IF(0x0C08DCD4u); { u32 t_ = r9; PR = 0x0C08DCD8u; W32(r14 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08DCD8u); }  /* 0C08DCD4 jsr @Rn */
L_0C08DCD8: BLKS(0x0C08DCD8u);
	r12 -= r0;  /* 0C08DCD8 sub Rm,Rn */
	r8 = 0x66666667u; UPD(0x0C08DCDCu, 2);  /* 0C08DCDA mov.l @(disp,pc),Rn */
	IF(0x0C08DCDCu); r12 <<= 2;  /* 0C08DCDC shll2 Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08DCDE dmuls.l Rm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C08DCE2u, 4);  /* 0C08DCE0 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08DCE2 mov Rm,Rn */
	IF(0x0C08DCE4u); r5 = MACH;  /* 0C08DCE4 sts mach,Rn */
	IF(0x0C08DCE6u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C08DCE6 shar Rn */
	IF(0x0C08DCE8u); T = r12 >> 31; r12 <<= 1;  /* 0C08DCE8 shll Rn */
	{ u32 a_ = r12, t_ = a_ - r12, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C08DCEA subc Rm,Rn */
	r10 = 0xB4u; UPD(0x0C08DCEEu, 6);  /* 0C08DCEC mov.w @(disp,pc),Rn */
	r5 -= r12;  /* 0C08DCEE sub Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C08DCF2u, 2);  /* 0C08DCF0 mov.l @(disp,Rm),Rn */
	IF(0x0C08DCF2u); MACL = r13 * r10;  /* 0C08DCF2 mul.l Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C08DCF6u, 3);  /* 0C08DCF4 mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C08DCF6 add Rm,Rn */
	r0 = 0xFFFF0000u; UPD(0x0C08DCFAu, 2);  /* 0C08DCF8 mov.l @(disp,pc),Rn */
	IF(0x0C08DCFAu); r10 = MACL;  /* 0C08DCFA sts macl,Rn */
	r5 = 0x180000u; UPD(0x0C08DCFEu, 2);  /* 0C08DCFC mov.l @(disp,pc),Rn */
	IF(0x0C08DCFEu); { u32 t_ = r7; PR = 0x0C08DD02u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08DD02u); }  /* 0C08DCFE jsr @Rn */
L_0C08DD02: BLKS(0x0C08DD02u);
	r4 = R32(r14 + 0x4u); UPD(0x0C08DD04u, 1);  /* 0C08DD02 mov.l @(disp,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C08DD06u, 1);  /* 0C08DD04 mov.l @(disp,pc),Rn */
	r9 = R32(r4 + 0x28u); UPD(0x0C08DD08u, 1);  /* 0C08DD06 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08DD0Au, 1);  /* 0C08DD08 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C08DD0A add Rm,Rn */
	r5 = R32(r1); UPD(0x0C08DD0Eu, 2);  /* 0C08DD0C mov.l @Rm,Rn */
	r8 = 0xC0BB1A0u; UPD(0x0C08DD10u, 1);  /* 0C08DD0E mov.l @(disp,pc),Rn */
	IF(0x0C08DD10u); { u32 t_ = r6; PR = 0x0C08DD14u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08DD14u); }  /* 0C08DD10 jsr @Rn */
L_0C08DD14: BLKS(0x0C08DD14u);
	r2 = 0x28000u; UPD(0x0C08DD16u, 1);  /* 0C08DD14 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C08DD16 add Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08DD18 add #imm,Rn */
	W32(r15, r2); UPD(0x0C08DD1Cu, 3);  /* 0C08DD1A mov.l Rm,@Rn */
	r5 = r12;  /* 0C08DD1C mov Rm,Rn */
	r6 = r9;  /* 0C08DD1E mov Rm,Rn */
	r7 = r11;  /* 0C08DD20 mov Rm,Rn */
	IF(0x0C08DD22u); { u32 t_ = r8; PR = 0x0C08DD26u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C08DD26u); }  /* 0C08DD22 jsr @Rn */
L_0C08DD26: BLKS(0x0C08DD26u);
	r3 = R32(r14); UPD(0x0C08DD28u, 1);  /* 0C08DD26 mov.l @Rm,Rn */
	r7 = 0x1u;  /* 0C08DD28 mov #imm,Rn */
	r3 += 0x1u;  /* 0C08DD2A add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C08DD2C exts.w Rm,Rn */
	W32(r14, r9); UPD(0x0C08DD30u, 4);  /* 0C08DD2E mov.l Rm,@Rn */
	r12 = R32(r14); UPD(0x0C08DD32u, 1);  /* 0C08DD30 mov.l @Rm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C08DD32 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08DCBCu, 4); goto L_0C08DCBC; } goto L_0C08DD38; }  /* 0C08DD34 bf/s */
L_0C08DD38: BLKS(0x0C08DD38u);
	r9 = 0x100u; UPD(0x0C08DD3Au, 2);  /* 0C08DD38 mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08DD3A add Rm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C08DD3C exts.w Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08DD40u, 3);  /* 0C08DD3E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08DD40 mov Rm,Rn */
	r9 += r10;  /* 0C08DD42 add Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C08DD46u, 3);  /* 0C08DD44 mov.l @(disp,pc),Rn */
	r10 = 0x80000u; UPD(0x0C08DD48u, 1);  /* 0C08DD46 mov.l @(disp,pc),Rn */
	r8 = 0xC069AF0u; UPD(0x0C08DD4Au, 1);  /* 0C08DD48 mov.l @(disp,pc),Rn */
	IF(0x0C08DD4Au); { u32 t_ = r12; PR = 0x0C08DD4Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08DD4Eu); }  /* 0C08DD4A jsr @Rn */
L_0C08DD4E: BLKS(0x0C08DD4Eu);
	r12 = R32(r9 + 0x24u); UPD(0x0C08DD50u, 1);  /* 0C08DD4E mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C08DD50 mov Rm,Rn */
	r4 = r11;  /* 0C08DD52 mov Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C08DD56u, 3);  /* 0C08DD54 mov.l @(disp,pc),Rn */
	IF(0x0C08DD56u); { u32 t_ = r8; PR = 0x0C08DD5Au; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08DD5Au); }  /* 0C08DD56 jsr @Rn */
L_0C08DD5A: BLKS(0x0C08DD5Au);
	r8 = R32(r9 + 0x28u); UPD(0x0C08DD5Cu, 1);  /* 0C08DD5A mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C08DD5C mov #imm,Rn */
	IF(0x0C08DD5Eu); { u32 t_ = r10; PR = 0x0C08DD62u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08DD62u); }  /* 0C08DD5E jsr @Rn */
L_0C08DD62: BLKS(0x0C08DD62u);
	r0 += r11;  /* 0C08DD62 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C08DD64 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C08DD66 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08DD6Au, 4);  /* 0C08DD68 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08DD6A add #imm,Rn */
	IF(0x0C08DD6Cu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08DD6Eu, 2);  /* 0C08DD6C mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C08DD6E extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C08DD72u, 2);  /* 0C08DD70 mov.l Rm,@Rn */
	r4 = r11;  /* 0C08DD72 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08DD76u, 2);  /* 0C08DD74 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C08DD76 mov Rm,Rn */
	IF(0x0C08DD78u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08DD7Au, 2);  /* 0C08DD78 mov.b @(r0,Rm),Rn */
	r10 = r2 & 0xFF;  /* 0C08DD7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C08DD7Eu, 2);  /* 0C08DD7C mov.l Rm,@(disp,Rn) */
	r3 = 0xC069B20u; UPD(0x0C08DD80u, 1);  /* 0C08DD7E mov.l @(disp,pc),Rn */
	r10 = 0x8000u; UPD(0x0C08DD82u, 1);  /* 0C08DD80 mov.l @(disp,pc),Rn */
	IF(0x0C08DD82u); { u32 t_ = r3; PR = 0x0C08DD86u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08DD86u); }  /* 0C08DD82 jsr @Rn */
L_0C08DD86: BLKS(0x0C08DD86u);
	r5 = 0x4000u; UPD(0x0C08DD88u, 1);  /* 0C08DD86 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08DD88 mov Rm,Rn */
	r5 += r0;  /* 0C08DD8A add Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C08DD8Eu, 3);  /* 0C08DD8C mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C08DD90u, 1);  /* 0C08DD8E mov.l Rm,@(disp,Rn) */
	IF(0x0C08DD90u); { u32 t_ = r7; PR = 0x0C08DD94u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08DD94u); }  /* 0C08DD90 jsr @Rn */
L_0C08DD94: BLKS(0x0C08DD94u);
	r4 = 0x808080u; UPD(0x0C08DD96u, 1);  /* 0C08DD94 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08DD96 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08DD9Au, 2);  /* 0C08DD98 mov.l Rm,@(disp,Rn) */
	r6 = r12;  /* 0C08DD9A mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C08DD9Eu, 2);  /* 0C08DD9C mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C08DD9E mov Rm,Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C08DDA2u, 2);  /* 0C08DDA0 mov.l @(disp,pc),Rn */
	IF(0x0C08DDA2u); { u32 t_ = r11; PR = 0x0C08DDA6u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08DDA6u); }  /* 0C08DDA2 jsr @Rn */
L_0C08DDA6: BLKS(0x0C08DDA6u);
	r4 = r13;  /* 0C08DDA6 mov Rm,Rn */
	r13 = 0xC069B90u; UPD(0x0C08DDAAu, 2);  /* 0C08DDA8 mov.l @(disp,pc),Rn */
	IF(0x0C08DDAAu); { u32 t_ = r13; PR = 0x0C08DDAEu; r15 += 0x14u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08DDAEu); }  /* 0C08DDAA jsr @Rn */
L_0C08DDAE: BLKS(0x0C08DDAEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08DC68u, 3); goto L_0C08DC68; }  /* 0C08DDAE bra */
L_0C08DE10: BLKS(0x0C08DE10u);
	r9 = 0xC069BF0u; UPD(0x0C08DE12u, 1);  /* 0C08DE10 mov.l @(disp,pc),Rn */
	r12 = 0xC068F00u; UPD(0x0C08DE14u, 1);  /* 0C08DE12 mov.l @(disp,pc),Rn */
	IF(0x0C08DE14u); { u32 t_ = r9; PR = 0x0C08DE18u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08DE18u); }  /* 0C08DE14 jsr @Rn */
L_0C08DE18: BLKS(0x0C08DE18u);
	r4 = r13;  /* 0C08DE18 mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C08DE1Cu, 2);  /* 0C08DE1A mov.w @(disp,pc),Rn */
	IF(0x0C08DE1Cu); { u32 t_ = r12; PR = 0x0C08DE20u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08DE20u); }  /* 0C08DE1C jsr @Rn */
L_0C08DE20: BLKS(0x0C08DE20u);
	r0 = r8;  /* 0C08DE20 mov Rm,Rn */
	IF(0x0C08DE22u); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C08DE24u, 2);  /* 0C08DE22 mov.w @(r0,Rm),Rn */
	r10 = 0x3Fu;  /* 0C08DE24 mov #imm,Rn */
	r7 += 0x4u;  /* 0C08DE26 add #imm,Rn */
	IF(0x0C08DE28u); r7 >>= 2;  /* 0C08DE28 shlr2 Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C08DE2Cu, 4);  /* 0C08DE2A mov.l @(disp,pc),Rn */
	IF(0x0C08DE2Cu); T = r7 & 1; r7 >>= 1;  /* 0C08DE2C shlr Rn */
	r7 &= r10;  /* 0C08DE2E and Rm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C08DE32u, 3);  /* 0C08DE30 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DE32u); { u32 t_ = r6; PR = 0x0C08DE36u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08DE36u); }  /* 0C08DE32 jsr @Rn */
L_0C08DE36: BLKS(0x0C08DE36u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08DC60u, 3); goto L_0C08DC60; }  /* 0C08DE36 bra */
L_0C08DE40: BLKS(0x0C08DE40u);
	r0 = 0xB4u; UPD(0x0C08DE42u, 1);  /* 0C08DE40 mov.w @(disp,pc),Rn */
	IF(0x0C08DE42u); MACL = r13 * r0;  /* 0C08DE42 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08DE46u, 3);  /* 0C08DE44 mov.l @(disp,pc),Rn */
	IF(0x0C08DE46u); r0 = MACL;  /* 0C08DE46 sts macl,Rn */
	IF(0x0C08DE48u); W32(r0 + r3, r2); UPD(0x0C08DE4Au, 2);  /* 0C08DE48 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08DC68u, 3); goto L_0C08DC68; }  /* 0C08DE4A bra */
}

/* FUN_0c08de70 */
void blk_f_0C08DE70(sh3_t *c)
{
	LOCALS;
L_0C08DE70: BLKS(0x0C08DE70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE72u, 1);  /* 0C08DE70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE74u, 1);  /* 0C08DE72 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08DE74 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE78u, 2);  /* 0C08DE76 mov.l Rm,@-Rn */
	r4 = r8;  /* 0C08DE78 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE7Cu, 2);  /* 0C08DE7A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE7Eu, 1);  /* 0C08DE7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08DE80u, 1);  /* 0C08DE7E mov.l Rm,@-Rn */
	r9 = 0xC0A8D30u; UPD(0x0C08DE82u, 1);  /* 0C08DE80 mov.l @(disp,pc),Rn */
	IF(0x0C08DE82u); r15 -= 4; W32(r15, PR); UPD(0x0C08DE84u, 1);  /* 0C08DE82 sts.l pr,@-Rn */
	IF(0x0C08DE84u); { u32 t_ = r9; PR = 0x0C08DE88u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08DE88u); }  /* 0C08DE84 jsr @Rn */
L_0C08DE88: BLKS(0x0C08DE88u);
	IF(0x0C08DE88u); T = (s32)r0 >= 0;  /* 0C08DE88 cmp/pz Rn */
	if (T) { UPD(0x0C08DE92u, 4); goto L_0C08DE92; }  /* 0C08DE8A bt */
L_0C08DE8C: BLKS(0x0C08DE8Cu);
	r2 = 0x0u;  /* 0C08DE8C mov #imm,Rn */
	{ IF(0x0C08DE90u); ; /* slot nop */ UPD(0x0C08E000u, 4); goto L_0C08E000; }  /* 0C08DE8E bra */
L_0C08DE92: BLKS(0x0C08DE92u);
	r3 = 0xB4u; UPD(0x0C08DE94u, 1);  /* 0C08DE92 mov.w @(disp,pc),Rn */
	IF(0x0C08DE94u); MACL = r8 * r3;  /* 0C08DE94 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08DE98u, 3);  /* 0C08DE96 mov.l @(disp,pc),Rn */
	IF(0x0C08DE98u); r10 = MACL;  /* 0C08DE98 sts macl,Rn */
	IF(0x0C08DE9Au); MACL = r0 * r3;  /* 0C08DE9A mul.l Rm,Rn */
	r10 += r4;  /* 0C08DE9C add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C08DEA0u, 5);  /* 0C08DE9E mov.l @(disp,Rm),Rn */
	IF(0x0C08DEA0u); r9 = MACL;  /* 0C08DEA0 sts macl,Rn */
	r9 += r4;  /* 0C08DEA2 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08DEA6u, 3);  /* 0C08DEA4 mov.l @(disp,Rm),Rn */
	r6 = R32(r10); UPD(0x0C08DEA8u, 1);  /* 0C08DEA6 mov.l @Rm,Rn */
	r4 += r5;  /* 0C08DEA8 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C08DEACu, 2);  /* 0C08DEAA mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C08DEAEu, 1);  /* 0C08DEAC mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFEFFu; UPD(0x0C08DEB0u, 1);  /* 0C08DEAE mov.w @(disp,pc),Rn */
	r7 &= r3;  /* 0C08DEB0 and Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C08DEB4u, 2);  /* 0C08DEB2 mov.l @(disp,Rm),Rn */
	r6 &= r11;  /* 0C08DEB4 and Rm,Rn */
	r12 = R32(r10 + 0x30u); UPD(0x0C08DEB8u, 2);  /* 0C08DEB6 mov.l @(disp,Rm),Rn */
	r6 |= r7;  /* 0C08DEB8 or Rm,Rn */
	r5 += r12;  /* 0C08DEBA add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C08DEBEu, 3);  /* 0C08DEBC mov.l Rm,@(disp,Rn) */
	T = (r6 & r3) == 0;  /* 0C08DEBE tst Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C08DEC2u, 2);  /* 0C08DEC0 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r10, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08DF20u, 3); goto L_0C08DF20; } UPD(0x0C08DEC6u, 1); goto L_0C08DEC6; }  /* 0C08DEC2 bf/s */
L_0C08DEC6: BLKS(0x0C08DEC6u);
	r7 = 0x86u; UPD(0x0C08DEC8u, 1);  /* 0C08DEC6 mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C08DEC8 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C08DECCu, 2);  /* 0C08DECA mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C08DECC exts.w Rm,Rn */
	T = r2 == r3;  /* 0C08DECE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C08DEDAu, 5); goto L_0C08DEDA; }  /* 0C08DED0 bt */
L_0C08DED2: BLKS(0x0C08DED2u);
	T = (s32)r2 > (s32)r3;  /* 0C08DED2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08DF10u, 4); goto L_0C08DF10; }  /* 0C08DED4 bf */
L_0C08DED6: BLKS(0x0C08DED6u);
	r1 += 0xFFFFFFFCu;  /* 0C08DED6 add #imm,Rn */
	UPD(0x0C08DED8u, 1);
L_0C08DED8: BLKS(0x0C08DED8u);
	W16(r7, r1); UPD(0x0C08DEDAu, 1);  /* 0C08DED8 mov.w Rm,@Rn */
L_0C08DEDA: BLKS(0x0C08DEDAu);
	r9 = 0xB4u; UPD(0x0C08DEDCu, 1);  /* 0C08DEDA mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C08DEDC mov Rm,Rn */
	IF(0x0C08DEDEu); MACL = r8 * r9;  /* 0C08DEDE mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08DEE2u, 4);  /* 0C08DEE0 mov.l @(disp,pc),Rn */
	IF(0x0C08DEE2u); r10 = MACL;  /* 0C08DEE2 sts macl,Rn */
	r10 += r7;  /* 0C08DEE4 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C08DEE8u, 3);  /* 0C08DEE6 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08DEE8 mov Rm,Rn */
	IF(0x0C08DEEAu); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08DEECu, 2);  /* 0C08DEEA mov.w @(r0,Rm),Rn */
	r2 += 0xFFFFFF84u;  /* 0C08DEEC add #imm,Rn */
	IF(0x0C08DEEEu); r2 >>= 2;  /* 0C08DEEE shlr2 Rn */
	IF(0x0C08DEF0u); T = r2 & 1; r2 >>= 1;  /* 0C08DEF0 shlr Rn */
	r0 = 0x3Fu;  /* 0C08DEF2 mov #imm,Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C08DEF6u, 5);  /* 0C08DEF4 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C08DEF6 and Rm,Rn */
	IF(0x0C08DEF8u); { u32 t_ = r8; PR = 0x0C08DEFCu; W32(r10 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08DEFCu); }  /* 0C08DEF8 jsr @Rn */
L_0C08DEFC: BLKS(0x0C08DEFCu);
	r0 = 0x0u;  /* 0C08DEFC mov #imm,Rn */
	UPD(0x0C08DEFEu, 1);
L_0C08DEFE: BLKS(0x0C08DEFEu);
	r15 = r14;  /* 0C08DEFE mov Rm,Rn */
	IF(0x0C08DF00u); PR = R32(r15); r15 += 4; UPD(0x0C08DF02u, 2);  /* 0C08DF00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08DF04u, 1);  /* 0C08DF02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08DF06u, 1);  /* 0C08DF04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08DF08u, 1);  /* 0C08DF06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08DF0Au, 1);  /* 0C08DF08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08DF0Cu, 1);  /* 0C08DF0A mov.l @Rm+,Rn */
	IF(0x0C08DF0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08DF0C rts */
L_0C08DF10: BLKS(0x0C08DF10u);
	{ r1 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08DED8u, 3); goto L_0C08DED8; }  /* 0C08DF10 bra */
L_0C08DF20: BLKS(0x0C08DF20u);
	r12 = 0x9Cu; UPD(0x0C08DF22u, 1);  /* 0C08DF20 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C08DF22 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C08DF26u, 2);  /* 0C08DF24 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C08DF26 tst Rm,Rn */
	{ u32 c_ = T; r11 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DFA0u, 4); goto L_0C08DFA0; } goto L_0C08DF2C; }  /* 0C08DF28 bt/s */
L_0C08DF2C: BLKS(0x0C08DF2Cu);
	r11 += 0x1u;  /* 0C08DF2C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C08DF30u, 3);  /* 0C08DF2E mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C08DF30 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DF40u, 4); goto L_0C08DF40; } goto L_0C08DF36; }  /* 0C08DF32 bt/s */
L_0C08DF36: BLKS(0x0C08DF36u);
	r1 += 0x1u;  /* 0C08DF36 add #imm,Rn */
	UPD(0x0C08DF38u, 2);
L_0C08DF38: BLKS(0x0C08DF38u);
	W8(r11, r1); UPD(0x0C08DF3Au, 1);  /* 0C08DF38 mov.b Rm,@Rn */
L_0C08DF3A: BLKS(0x0C08DF3Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08DEFEu, 3); goto L_0C08DEFE; }  /* 0C08DF3A bra */
L_0C08DF40: BLKS(0x0C08DF40u);
	r7 = 0xA9u; UPD(0x0C08DF42u, 1);  /* 0C08DF40 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08DF42 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08DF46u, 2);  /* 0C08DF44 mov.l @(disp,pc),Rn */
	IF(0x0C08DF46u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08DF48u, 1);  /* 0C08DF46 mov.b @(r0,Rm),Rn */
	IF(0x0C08DF48u); { u32 t_ = r9; PR = 0x0C08DF4Cu; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08DF4Cu); }  /* 0C08DF48 jsr @Rn */
L_0C08DF4C: BLKS(0x0C08DF4Cu);
	T = (r0 & r0) == 0;  /* 0C08DF4C tst Rm,Rn */
	if (!T) { UPD(0x0C08DF60u, 4); goto L_0C08DF60; }  /* 0C08DF4E bf */
L_0C08DF50: BLKS(0x0C08DF50u);
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C08DF52u, 1);  /* 0C08DF50 mov.b @Rm,Rn */
	r1 = 0x0u;  /* 0C08DF52 mov #imm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C08DF54 add #imm,Rn */
	{ W8(r12, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08DF38u, 5); goto L_0C08DF38; }  /* 0C08DF56 bra */
L_0C08DF60: BLKS(0x0C08DF60u);
	r4 = 0x86u; UPD(0x0C08DF62u, 1);  /* 0C08DF60 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08DF62 mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08DF66u, 2);  /* 0C08DF64 mov.l @(disp,pc),Rn */
	IF(0x0C08DF66u); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08DF68u, 1);  /* 0C08DF66 mov.w @(r0,Rm),Rn */
	r5 = 0x133333u; UPD(0x0C08DF6Au, 1);  /* 0C08DF68 mov.l @(disp,pc),Rn */
	IF(0x0C08DF6Au); { u32 t_ = r8; PR = 0x0C08DF6Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08DF6Eu); }  /* 0C08DF6A jsr @Rn */
L_0C08DF6E: BLKS(0x0C08DF6Eu);
	r8 = R32(r10 + 0x24u); UPD(0x0C08DF70u, 1);  /* 0C08DF6E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C08DF70 add Rm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C08DF74u, 2);  /* 0C08DF72 mov.l @(disp,pc),Rn */
	r0 = 0xC069AF0u; UPD(0x0C08DF76u, 1);  /* 0C08DF74 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C08DF76 add Rm,Rn */
	r5 = 0x180000u; UPD(0x0C08DF7Au, 2);  /* 0C08DF78 mov.l @(disp,pc),Rn */
	IF(0x0C08DF7Au); { u32 t_ = r0; PR = 0x0C08DF7Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08DF7Eu); }  /* 0C08DF7A jsr @Rn */
L_0C08DF7E: BLKS(0x0C08DF7Eu);
	r6 = R32(r10 + 0x28u); UPD(0x0C08DF80u, 1);  /* 0C08DF7E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C08DF80 mov Rm,Rn */
	r6 += r0;  /* 0C08DF82 add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C08DF86u, 3);  /* 0C08DF84 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08DF86 add #imm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C08DF8Au, 2);  /* 0C08DF88 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C08DF8A mov #imm,Rn */
	W32(r15, r0); UPD(0x0C08DF8Eu, 2);  /* 0C08DF8C mov.l Rm,@Rn */
	IF(0x0C08DF8Eu); { u32 t_ = r8; PR = 0x0C08DF92u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08DF92u); }  /* 0C08DF8E jsr @Rn */
L_0C08DF92: BLKS(0x0C08DF92u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08DF50u, 3); goto L_0C08DF50; }  /* 0C08DF92 bra */
L_0C08DFA0: BLKS(0x0C08DFA0u);
	r11 = 0xC069BF0u; UPD(0x0C08DFA2u, 1);  /* 0C08DFA0 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08DFA4u, 1);  /* 0C08DFA2 mov.l @(disp,pc),Rn */
	IF(0x0C08DFA4u); { u32 t_ = r11; PR = 0x0C08DFA8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08DFA8u); }  /* 0C08DFA4 jsr @Rn */
L_0C08DFA8: BLKS(0x0C08DFA8u);
	r5 = 0x4u;  /* 0C08DFA8 mov #imm,Rn */
	IF(0x0C08DFAAu); { u32 t_ = r9; PR = 0x0C08DFAEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08DFAEu); }  /* 0C08DFAA jsr @Rn */
L_0C08DFAE: BLKS(0x0C08DFAEu);
	r3 = 0x86u; UPD(0x0C08DFB0u, 1);  /* 0C08DFAE mov.w @(disp,pc),Rn */
	r5 = 0x7Fu;  /* 0C08DFB0 mov #imm,Rn */
	r3 += r10;  /* 0C08DFB2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C08DFB6u, 3);  /* 0C08DFB4 mov.w @Rm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C08DFB6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08DFC0u, 4); goto L_0C08DFC0; }  /* 0C08DFB8 bt */
L_0C08DFBA: BLKS(0x0C08DFBAu);
	r4 = 0x80u; UPD(0x0C08DFBCu, 1);  /* 0C08DFBA mov.w @(disp,pc),Rn */
	W16(r3, r4); UPD(0x0C08DFBEu, 1);  /* 0C08DFBC mov.w Rm,@Rn */
	r0 = r4;  /* 0C08DFBE mov Rm,Rn */
	UPD(0x0C08DFC0u, 1);
L_0C08DFC0: BLKS(0x0C08DFC0u);
	r7 = 0x180u; UPD(0x0C08DFC2u, 1);  /* 0C08DFC0 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C08DFC2 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C08DFC4 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C08DFC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C08DFD2u, 6); goto L_0C08DFD2; } goto L_0C08DFCC; }  /* 0C08DFC8 bf/s */
L_0C08DFCC: BLKS(0x0C08DFCCu);
	W16(r3, r2); UPD(0x0C08DFCEu, 2);  /* 0C08DFCC mov.w Rm,@Rn */
	r0 = r7;  /* 0C08DFCE mov Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C08DFD0 exts.w Rm,Rn */
	UPD(0x0C08DFD2u, 2);
L_0C08DFD2: BLKS(0x0C08DFD2u);
	r0 += 0xFFFFFF84u;  /* 0C08DFD2 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C08DFD6u, 2);  /* 0C08DFD4 mov.l @(disp,pc),Rn */
	IF(0x0C08DFD6u); r0 >>= 2;  /* 0C08DFD6 shlr2 Rn */
	IF(0x0C08DFD8u); T = r0 & 1; r0 >>= 1;  /* 0C08DFD8 shlr Rn */
	r0 &= 0x3Fu;  /* 0C08DFDA and #imm,r0 */
	r4 = r8;  /* 0C08DFDC mov Rm,Rn */
	IF(0x0C08DFDEu); { u32 t_ = r3; PR = 0x0C08DFE2u; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08DFE2u); }  /* 0C08DFDE jsr @Rn */
L_0C08DFE2: BLKS(0x0C08DFE2u);
	r4 = r8;  /* 0C08DFE2 mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C08DFE6u, 2);  /* 0C08DFE4 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08DFE6 mov #imm,Rn */
	IF(0x0C08DFE8u); { u32 t_ = r8; PR = 0x0C08DFECu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08DFECu); }  /* 0C08DFE8 jsr @Rn */
L_0C08DFEC: BLKS(0x0C08DFECu);
	T = (r0 & r0) == 0;  /* 0C08DFEC tst Rm,Rn */
	if (T) { UPD(0x0C08DF3Au, 4); goto L_0C08DF3A; }  /* 0C08DFEE bt */
L_0C08DFF0: BLKS(0x0C08DFF0u);
	r10 = 0x3u;  /* 0C08DFF0 mov #imm,Rn */
	{ W8(r12, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C08DEFCu, 4); goto L_0C08DEFC; }  /* 0C08DFF2 bra */
L_0C08E000: BLKS(0x0C08E000u);
	r0 = 0xB4u; UPD(0x0C08E002u, 1);  /* 0C08E000 mov.w @(disp,pc),Rn */
	IF(0x0C08E002u); MACL = r8 * r0;  /* 0C08E002 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08E006u, 3);  /* 0C08E004 mov.l @(disp,pc),Rn */
	IF(0x0C08E006u); r0 = MACL;  /* 0C08E006 sts macl,Rn */
	IF(0x0C08E008u); W32(r0 + r3, r2); UPD(0x0C08E00Au, 2);  /* 0C08E008 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08DEFEu, 3); goto L_0C08DEFE; }  /* 0C08E00A bra */
}

/* FUN_0c08e060 */
void blk_f_0C08E060(sh3_t *c)
{
	LOCALS;
L_0C08E060: BLKS(0x0C08E060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E062u, 1);  /* 0C08E060 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E064u, 1);  /* 0C08E062 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E066u, 1);  /* 0C08E064 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E068u, 1);  /* 0C08E066 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C08E068 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E06Cu, 2);  /* 0C08E06A mov.l Rm,@-Rn */
	r4 = r10;  /* 0C08E06C mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08E070u, 2);  /* 0C08E06E mov.l @(disp,pc),Rn */
	IF(0x0C08E070u); r15 -= 4; W32(r15, PR); UPD(0x0C08E072u, 1);  /* 0C08E070 sts.l pr,@-Rn */
	IF(0x0C08E072u); { u32 t_ = r8; PR = 0x0C08E076u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E076u); }  /* 0C08E072 jsr @Rn */
L_0C08E076: BLKS(0x0C08E076u);
	IF(0x0C08E076u); T = (s32)r0 >= 0;  /* 0C08E076 cmp/pz Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E080u, 4); goto L_0C08E080; } goto L_0C08E07C; }  /* 0C08E078 bt/s */
L_0C08E07C: BLKS(0x0C08E07Cu);
	{ IF(0x0C08E07Eu); ; /* slot nop */ UPD(0x0C08E190u, 4); goto L_0C08E190; }  /* 0C08E07C bra */
L_0C08E080: BLKS(0x0C08E080u);
	r2 = 0xB4u; UPD(0x0C08E082u, 1);  /* 0C08E080 mov.w @(disp,pc),Rn */
	IF(0x0C08E082u); MACL = r10 * r2;  /* 0C08E082 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08E086u, 3);  /* 0C08E084 mov.l @(disp,pc),Rn */
	IF(0x0C08E086u); r8 = MACL;  /* 0C08E086 sts macl,Rn */
	IF(0x0C08E088u); MACL = r0 * r2;  /* 0C08E088 mul.l Rm,Rn */
	r8 += r4;  /* 0C08E08A add Rm,Rn */
	r5 = R32(r8); UPD(0x0C08E08Eu, 5);  /* 0C08E08C mov.l @Rm,Rn */
	IF(0x0C08E08Eu); r7 = MACL;  /* 0C08E08E sts macl,Rn */
	r7 += r4;  /* 0C08E090 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C08E094u, 3);  /* 0C08E092 mov.l @Rm,Rn */
	r4 = 0x100u; UPD(0x0C08E096u, 1);  /* 0C08E094 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C08E098u, 1);  /* 0C08E096 mov.w @(disp,pc),Rn */
	r6 &= r4;  /* 0C08E098 and Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C08E09Cu, 2);  /* 0C08E09A mov.l @(disp,Rm),Rn */
	r5 &= r9;  /* 0C08E09C and Rm,Rn */
	r11 = R32(r7 + 0x28u); UPD(0x0C08E0A0u, 2);  /* 0C08E09E mov.l @(disp,Rm),Rn */
	r5 |= r6;  /* 0C08E0A0 or Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C08E0A4u, 2);  /* 0C08E0A2 mov.l @(disp,Rm),Rn */
	T = (r5 & r4) == 0;  /* 0C08E0A4 tst Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08E0A8u, 2);  /* 0C08E0A6 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C08E0A8 add Rm,Rn */
	r11 += r1;  /* 0C08E0AA add Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C08E0AEu, 3);  /* 0C08E0AC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C08E0B0u, 1);  /* 0C08E0AE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08E160u, 3); goto L_0C08E160; } UPD(0x0C08E0B4u, 1); goto L_0C08E0B4; }  /* 0C08E0B0 bf/s */
L_0C08E0B4: BLKS(0x0C08E0B4u);
	r9 = 0xC0690D0u; UPD(0x0C08E0B6u, 1);  /* 0C08E0B4 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08E0B6 mov Rm,Rn */
	IF(0x0C08E0B8u); { u32 t_ = r9; PR = 0x0C08E0BCu; r5 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0690D0, 0x0C0690D0u, 0x0C08E0BCu); }  /* 0C08E0B8 jsr @Rn */
L_0C08E0BC: BLKS(0x0C08E0BCu);
	r7 = 0x86u; UPD(0x0C08E0BEu, 1);  /* 0C08E0BC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08E0BE mov Rm,Rn */
	IF(0x0C08E0C0u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08E0C2u, 2);  /* 0C08E0C0 mov.w @(r0,Rm),Rn */
	r6 = 0x3Fu;  /* 0C08E0C2 mov #imm,Rn */
	r5 += 0x4u;  /* 0C08E0C4 add #imm,Rn */
	IF(0x0C08E0C6u); r5 >>= 2;  /* 0C08E0C6 shlr2 Rn */
	IF(0x0C08E0C8u); T = r5 & 1; r5 >>= 1;  /* 0C08E0C8 shlr Rn */
	r5 &= r6;  /* 0C08E0CA and Rm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C08E0CEu, 6);  /* 0C08E0CC mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C08E0D0u, 1);  /* 0C08E0CE mov.l @(disp,pc),Rn */
	IF(0x0C08E0D0u); { u32 t_ = r8; PR = 0x0C08E0D4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08E0D4u); }  /* 0C08E0D0 jsr @Rn */
L_0C08E0D4: BLKS(0x0C08E0D4u);
	r1 = 0x0u;  /* 0C08E0D4 mov #imm,Rn */
	UPD(0x0C08E0D6u, 1);
L_0C08E0D6: BLKS(0x0C08E0D6u);
	r2 = (u32)(s32)(s16)r1;  /* 0C08E0D6 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08E0D8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E0F0u, 5); goto L_0C08E0F0; } UPD(0x0C08E0DEu, 1); goto L_0C08E0DE; }  /* 0C08E0DA bf/s */
L_0C08E0DE: BLKS(0x0C08E0DEu);
	r15 = r14;  /* 0C08E0DE mov Rm,Rn */
	IF(0x0C08E0E0u); PR = R32(r15); r15 += 4; UPD(0x0C08E0E2u, 2);  /* 0C08E0E0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E0E4u, 1);  /* 0C08E0E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E0E6u, 1);  /* 0C08E0E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E0E8u, 1);  /* 0C08E0E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E0EAu, 1);  /* 0C08E0E8 mov.l @Rm+,Rn */
	IF(0x0C08E0EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E0EA rts */
L_0C08E0F0: BLKS(0x0C08E0F0u);
	r8 = 0xC0BC1B0u; UPD(0x0C08E0F2u, 1);  /* 0C08E0F0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08E0F2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08E0F4 mov #imm,Rn */
	IF(0x0C08E0F6u); { u32 t_ = r8; PR = 0x0C08E0FAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08E0FAu); }  /* 0C08E0F6 jsr @Rn */
L_0C08E0FA: BLKS(0x0C08E0FAu);
	T = (r0 & r0) == 0;  /* 0C08E0FA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E0DEu, 4); goto L_0C08E0DE; } goto L_0C08E100; }  /* 0C08E0FC bt/s */
L_0C08E100: BLKS(0x0C08E100u);
	r3 = 0xB4u; UPD(0x0C08E102u, 2);  /* 0C08E100 mov.w @(disp,pc),Rn */
	IF(0x0C08E102u); MACL = r10 * r3;  /* 0C08E102 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08E106u, 3);  /* 0C08E104 mov.l @(disp,pc),Rn */
	IF(0x0C08E106u); r11 = MACL;  /* 0C08E106 sts macl,Rn */
	r11 += r7;  /* 0C08E108 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08E10Cu, 3);  /* 0C08E10A mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C08E10C mov Rm,Rn */
	IF(0x0C08E10Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08E110u, 2);  /* 0C08E10E mov.b @(r0,Rm),Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08E112u, 1);  /* 0C08E110 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C08E112 extu.b Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08E116u, 2);  /* 0C08E114 mov.l @(disp,Rm),Rn */
	IF(0x0C08E116u); { u32 t_ = r9; PR = 0x0C08E11Au; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08E11Au); }  /* 0C08E116 jsr @Rn */
L_0C08E11A: BLKS(0x0C08E11Au);
	T = (r0 & r0) == 0;  /* 0C08E11A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E0DEu, 4); goto L_0C08E0DE; } goto L_0C08E120; }  /* 0C08E11C bt/s */
L_0C08E120: BLKS(0x0C08E120u);
	r2 = 0x86u; UPD(0x0C08E122u, 2);  /* 0C08E120 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C08E122 mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08E126u, 2);  /* 0C08E124 mov.l @(disp,pc),Rn */
	IF(0x0C08E126u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E128u, 1);  /* 0C08E126 mov.w @(r0,Rm),Rn */
	r5 = 0xCCCCCu; UPD(0x0C08E12Au, 1);  /* 0C08E128 mov.l @(disp,pc),Rn */
	IF(0x0C08E12Au); { u32 t_ = r8; PR = 0x0C08E12Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08E12Eu); }  /* 0C08E12A jsr @Rn */
L_0C08E12E: BLKS(0x0C08E12Eu);
	r8 = R32(r11 + 0x24u); UPD(0x0C08E130u, 1);  /* 0C08E12E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C08E130 add Rm,Rn */
	r4 = 0xFFFD0000u; UPD(0x0C08E134u, 2);  /* 0C08E132 mov.l @(disp,pc),Rn */
	r0 = 0xC069AF0u; UPD(0x0C08E136u, 1);  /* 0C08E134 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08E136 add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C08E13Au, 2);  /* 0C08E138 mov.l @(disp,pc),Rn */
	IF(0x0C08E13Au); { u32 t_ = r0; PR = 0x0C08E13Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08E13Eu); }  /* 0C08E13A jsr @Rn */
L_0C08E13E: BLKS(0x0C08E13Eu);
	r6 = R32(r11 + 0x28u); UPD(0x0C08E140u, 1);  /* 0C08E13E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08E140 add #imm,Rn */
	r6 += r0;  /* 0C08E142 add Rm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C08E146u, 3);  /* 0C08E144 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C08E146 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C08E14Au, 2);  /* 0C08E148 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08E14A mov Rm,Rn */
	W32(r15, r0); UPD(0x0C08E14Eu, 2);  /* 0C08E14C mov.l Rm,@Rn */
	IF(0x0C08E14Eu); { u32 t_ = r11; PR = 0x0C08E152u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08E152u); }  /* 0C08E14E jsr @Rn */
L_0C08E152: BLKS(0x0C08E152u);
	r4 = r10;  /* 0C08E152 mov Rm,Rn */
	r10 = 0xC069B90u; UPD(0x0C08E156u, 2);  /* 0C08E154 mov.l @(disp,pc),Rn */
	IF(0x0C08E156u); { u32 t_ = r10; PR = 0x0C08E15Au; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08E15Au); }  /* 0C08E156 jsr @Rn */
L_0C08E15A: BLKS(0x0C08E15Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08E0DEu, 3); goto L_0C08E0DE; }  /* 0C08E15A bra */
L_0C08E160: BLKS(0x0C08E160u);
	r11 = 0xC069BF0u; UPD(0x0C08E162u, 1);  /* 0C08E160 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08E164u, 1);  /* 0C08E162 mov.l @(disp,pc),Rn */
	IF(0x0C08E164u); { u32 t_ = r11; PR = 0x0C08E168u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08E168u); }  /* 0C08E164 jsr @Rn */
L_0C08E168: BLKS(0x0C08E168u);
	r4 = r10;  /* 0C08E168 mov Rm,Rn */
	IF(0x0C08E16Au); { u32 t_ = r9; PR = 0x0C08E16Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08E16Eu); }  /* 0C08E16A jsr @Rn */
L_0C08E16E: BLKS(0x0C08E16Eu);
	r4 = 0x86u; UPD(0x0C08E170u, 1);  /* 0C08E16E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08E170 mov Rm,Rn */
	IF(0x0C08E172u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08E174u, 2);  /* 0C08E172 mov.w @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C08E174 add #imm,Rn */
	IF(0x0C08E176u); r3 >>= 2;  /* 0C08E176 shlr2 Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C08E17Au, 3);  /* 0C08E178 mov.l @(disp,pc),Rn */
	r0 = 0x3Fu;  /* 0C08E17A mov #imm,Rn */
	IF(0x0C08E17Cu); T = r3 & 1; r3 >>= 1;  /* 0C08E17C shlr Rn */
	r3 &= r0;  /* 0C08E17E and Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C08E182u, 4);  /* 0C08E180 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E182u); { u32 t_ = r11; PR = 0x0C08E186u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08E186u); }  /* 0C08E182 jsr @Rn */
L_0C08E186: BLKS(0x0C08E186u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08E0D6u, 3); goto L_0C08E0D6; }  /* 0C08E186 bra */
L_0C08E190: BLKS(0x0C08E190u);
	r0 = 0xB4u; UPD(0x0C08E192u, 1);  /* 0C08E190 mov.w @(disp,pc),Rn */
	IF(0x0C08E192u); MACL = r10 * r0;  /* 0C08E192 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08E196u, 3);  /* 0C08E194 mov.l @(disp,pc),Rn */
	IF(0x0C08E196u); r0 = MACL;  /* 0C08E196 sts macl,Rn */
	IF(0x0C08E198u); W32(r0 + r3, r2); UPD(0x0C08E19Au, 2);  /* 0C08E198 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08E0DEu, 3); goto L_0C08E0DE; }  /* 0C08E19A bra */
}

void blk_f_0C08E1F0(sh3_t *c)
{
	LOCALS;
L_0C08E1F0: BLKS(0x0C08E1F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E1F2u, 1);  /* 0C08E1F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E1F4u, 1);  /* 0C08E1F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E1F6u, 1);  /* 0C08E1F4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08E1F6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E1FAu, 2);  /* 0C08E1F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08E1FCu, 1);  /* 0C08E1FA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08E1FEu, 1);  /* 0C08E1FC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08E200u, 1);  /* 0C08E1FE mov.l Rm,@-Rn */
	IF(0x0C08E200u); MACL = r9 * r3;  /* 0C08E200 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E204u, 3);  /* 0C08E202 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08E206u, 1);  /* 0C08E204 mov.l @(disp,pc),Rn */
	IF(0x0C08E206u); r2 = MACL;  /* 0C08E206 sts macl,Rn */
	IF(0x0C08E208u); r15 -= 4; W32(r15, PR); UPD(0x0C08E20Au, 2);  /* 0C08E208 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08E20A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08E20Eu, 2);  /* 0C08E20C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08E20E add #imm,Rn */
	r0 = 0x5u;  /* 0C08E210 mov #imm,Rn */
	T = r2 > r0;  /* 0C08E212 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E240u, 6); goto L_0C08E240; } goto L_0C08E218; }  /* 0C08E214 bt/s */
L_0C08E218: BLKS(0x0C08E218u);
	r0 = 0xC08E228u;  /* 0C08E218 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E21A add Rm,Rn */
	IF(0x0C08E21Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E21Eu, 4);  /* 0C08E21C mov.w @(r0,Rm),Rn */
	IF(0x0C08E21Eu); { u32 tv_ = (r4 + 0x0C08E222u); u32 t_ = PHYS(tv_); IF(0x0C08E220u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E240u: goto L_0C08E240; case 0x0C08E300u: goto L_0C08E300; case 0x0C08E4E0u: goto L_0C08E4E0; case 0x0C08E590u: goto L_0C08E590; case 0x0C08E620u: goto L_0C08E620; default: JUMPD(tv_); } }  /* 0C08E21E braf Rn */
L_0C08E240: BLKS(0x0C08E240u);
	r10 = 0xC0A9CB0u; UPD(0x0C08E242u, 1);  /* 0C08E240 mov.l @(disp,pc),Rn */
	r8 = 0xC0A9B40u; UPD(0x0C08E244u, 1);  /* 0C08E242 mov.l @(disp,pc),Rn */
	IF(0x0C08E244u); { u32 t_ = r10; PR = 0x0C08E248u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08E248u); }  /* 0C08E244 jsr @Rn */
L_0C08E248: BLKS(0x0C08E248u);
	IF(0x0C08E248u); { u32 t_ = r8; PR = 0x0C08E24Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08E24Cu); }  /* 0C08E248 jsr @Rn */
L_0C08E24C: BLKS(0x0C08E24Cu);
	r7 = 0xB4u; UPD(0x0C08E24Eu, 1);  /* 0C08E24C mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C08E24E mov Rm,Rn */
	IF(0x0C08E250u); MACL = r9 * r7;  /* 0C08E250 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08E254u, 4);  /* 0C08E252 mov.l @(disp,pc),Rn */
	IF(0x0C08E254u); r8 = MACL;  /* 0C08E254 sts macl,Rn */
	r8 += r6;  /* 0C08E256 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08E25Au, 3);  /* 0C08E258 mov.l @(disp,Rm),Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C08E25Cu, 1);  /* 0C08E25A mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C08E25C add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08E25E and #imm,r0 */
	IF(0x0C08E260u); { u32 t_ = r5; PR = 0x0C08E264u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08E264u); }  /* 0C08E260 jsr @Rn */
L_0C08E264: BLKS(0x0C08E264u);
	r2 = 0x99u; UPD(0x0C08E266u, 1);  /* 0C08E264 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08E266 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08E26Au, 2);  /* 0C08E268 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C08E26A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08E26C extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08E26E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08E290u, 6); goto L_0C08E290; } UPD(0x0C08E274u, 1); goto L_0C08E274; }  /* 0C08E270 bt/s */
L_0C08E274: BLKS(0x0C08E274u);
	r14 += 0x4u;  /* 0C08E274 add #imm,Rn */
	UPD(0x0C08E276u, 1);
L_0C08E276: BLKS(0x0C08E276u);
	r15 = r14;  /* 0C08E276 mov Rm,Rn */
	IF(0x0C08E278u); PR = R32(r15); r15 += 4; UPD(0x0C08E27Au, 2);  /* 0C08E278 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E27Cu, 1);  /* 0C08E27A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08E27Eu, 1);  /* 0C08E27C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E280u, 1);  /* 0C08E27E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E282u, 1);  /* 0C08E280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E284u, 1);  /* 0C08E282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E286u, 1);  /* 0C08E284 mov.l @Rm+,Rn */
	IF(0x0C08E286u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E286 rts */
L_0C08E290: BLKS(0x0C08E290u);
	r11 = 0x0u;  /* 0C08E290 mov #imm,Rn */
	r9 = 0xA9u; UPD(0x0C08E294u, 2);  /* 0C08E292 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C08E294 mov #imm,Rn */
	W8(r2, r11); UPD(0x0C08E298u, 2);  /* 0C08E296 mov.b Rm,@Rn */
	r9 += r8;  /* 0C08E298 add Rm,Rn */
	W32(r14, r9); UPD(0x0C08E29Cu, 2);  /* 0C08E29A mov.l Rm,@Rn */
	r11 = r8;  /* 0C08E29C mov Rm,Rn */
	r13 = 0x0u;  /* 0C08E29E mov #imm,Rn */
	UPD(0x0C08E2A0u, 2);
L_0C08E2A0: BLKS(0x0C08E2A0u);
	r4 = 0xC1A70E4u; UPD(0x0C08E2A2u, 1);  /* 0C08E2A0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08E2A2 add #imm,Rn */
	r4 += r13;  /* 0C08E2A4 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C08E2A8u, 3);  /* 0C08E2A6 mov.l @Rm,Rn */
	r13 += 0x8u;  /* 0C08E2A8 add #imm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C08E2ACu, 2);  /* 0C08E2AA mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08E2AEu, 1);  /* 0C08E2AC mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08E2AE add Rm,Rn */
	IF(0x0C08E2B0u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08E2B2u, 2);  /* 0C08E2B0 mov.b @(r0,Rm),Rn */
	r8 = R32(r4 + 0x4u); UPD(0x0C08E2B4u, 1);  /* 0C08E2B2 mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C08E2B4 extu.b Rm,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C08E2B8u, 2);  /* 0C08E2B6 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08E2BAu, 1);  /* 0C08E2B8 mov.l Rm,@Rn */
	r9 += r8;  /* 0C08E2BA add Rm,Rn */
	r1 = R32(r14); UPD(0x0C08E2BEu, 2);  /* 0C08E2BC mov.l @Rm,Rn */
	r8 = r12;  /* 0C08E2BE mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C08E2C2u, 2);  /* 0C08E2C0 mov.b @Rm,Rn */
	IF(0x0C08E2C2u); r8 <<= 2;  /* 0C08E2C2 shll2 Rn */
	r0 = 0xC062780u; UPD(0x0C08E2C6u, 2);  /* 0C08E2C4 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08E2C6 extu.b Rm,Rn */
	r3 = 0xC1A70FCu; UPD(0x0C08E2CAu, 2);  /* 0C08E2C8 mov.l @(disp,pc),Rn */
	r5 = 0xFFFE8000u; UPD(0x0C08E2CCu, 1);  /* 0C08E2CA mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C08E2CC add Rm,Rn */
	r4 = 0x3FFFu; UPD(0x0C08E2D0u, 2);  /* 0C08E2CE mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E2D2u, 1);  /* 0C08E2D0 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E2D2u); { u32 t_ = r0; PR = 0x0C08E2D6u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08E2D6u); }  /* 0C08E2D2 jsr @Rn */
L_0C08E2D6: BLKS(0x0C08E2D6u);
	r4 = 0xFFFFE000u; UPD(0x0C08E2D8u, 1);  /* 0C08E2D6 mov.w @(disp,pc),Rn */
	r6 = r10;  /* 0C08E2D8 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C08E2DCu, 2);  /* 0C08E2DA mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C08E2DC add Rm,Rn */
	W32(r15 + 0xCu, r4); UPD(0x0C08E2E0u, 2);  /* 0C08E2DE mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C08E2E0 mov Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C08E2E4u, 2);  /* 0C08E2E2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C08E2E6u, 1);  /* 0C08E2E4 mov.l @Rm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C08E2E8u, 1);  /* 0C08E2E6 mov.l @(disp,pc),Rn */
	IF(0x0C08E2E8u); { u32 t_ = r8; PR = 0x0C08E2ECu; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08E2ECu); }  /* 0C08E2E8 jsr @Rn */
L_0C08E2EC: BLKS(0x0C08E2ECu);
	r2 = r12;  /* 0C08E2EC mov Rm,Rn */
	r2 += 0x1u;  /* 0C08E2EE add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C08E2F0 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C08E2F2 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C08E2F4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08E2A0u, 8); goto L_0C08E2A0; } UPD(0x0C08E2FAu, 1); goto L_0C08E2FA; }  /* 0C08E2F6 bf/s */
L_0C08E2FA: BLKS(0x0C08E2FAu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08E276u, 3); goto L_0C08E276; }  /* 0C08E2FA bra */
L_0C08E300: BLKS(0x0C08E300u);
	r10 = 0xB4u; UPD(0x0C08E302u, 1);  /* 0C08E300 mov.w @(disp,pc),Rn */
	IF(0x0C08E302u); MACL = r9 * r10;  /* 0C08E302 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08E306u, 3);  /* 0C08E304 mov.l @(disp,pc),Rn */
	IF(0x0C08E306u); r8 = MACL;  /* 0C08E306 sts macl,Rn */
	r8 += r11;  /* 0C08E308 add Rm,Rn */
	r8 += 0x3Cu;  /* 0C08E30A add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C08E30Eu, 4);  /* 0C08E30C mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C08E30E tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08E318u, 4); goto L_0C08E318; } goto L_0C08E314; }  /* 0C08E310 bf/s */
L_0C08E314: BLKS(0x0C08E314u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08E4D0u, 4); goto L_0C08E4D0; }  /* 0C08E314 bra */
L_0C08E318: BLKS(0x0C08E318u);
	r13 = 0xC0A8CA0u; UPD(0x0C08E31Au, 1);  /* 0C08E318 mov.l @(disp,pc),Rn */
	IF(0x0C08E31Au); { u32 t_ = r13; PR = 0x0C08E31Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08E31Eu); }  /* 0C08E31A jsr @Rn */
L_0C08E31E: BLKS(0x0C08E31Eu);
	IF(0x0C08E31Eu); T = (s32)r0 >= 0;  /* 0C08E31E cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C08E322u); MACL = r0 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08E380u, 5); goto L_0C08E380; } goto L_0C08E324; }  /* 0C08E320 bf/s */
L_0C08E324: BLKS(0x0C08E324u);
	r2 = 0xFFFFFEFFu; UPD(0x0C08E326u, 3);  /* 0C08E324 mov.w @(disp,pc),Rn */
	IF(0x0C08E326u); r4 = MACL;  /* 0C08E326 sts macl,Rn */
	r4 += r11;  /* 0C08E328 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C08E32Cu, 3);  /* 0C08E32A mov.l @Rm,Rn */
	r0 = R32(r8); UPD(0x0C08E32Eu, 1);  /* 0C08E32C mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08E330u, 1);  /* 0C08E32E mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C08E330 and Rm,Rn */
	r3 &= r7;  /* 0C08E332 and Rm,Rn */
	r0 |= r3;  /* 0C08E334 or Rm,Rn */
	r5 = 0x9Bu; UPD(0x0C08E338u, 4);  /* 0C08E336 mov.w @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C08E33Au, 1);  /* 0C08E338 mov.l Rm,@Rn */
	r5 += r8;  /* 0C08E33A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C08E33Eu, 2);  /* 0C08E33C mov.b @Rm,Rn */
	r13 = R32(r4 + 0x24u); UPD(0x0C08E340u, 1);  /* 0C08E33E mov.l @(disp,Rm),Rn */
	r6 = r0;  /* 0C08E340 mov Rm,Rn */
	r12 = R32(r4 + 0x28u); UPD(0x0C08E344u, 2);  /* 0C08E342 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C08E344 add #imm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08E348u, 2);  /* 0C08E346 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C08E348 and #imm,r0 */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C08E34Cu, 2);  /* 0C08E34A mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C08E34C add Rm,Rn */
	r13 += r10;  /* 0C08E34E add Rm,Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C08E352u, 3);  /* 0C08E350 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C08E352 mov Rm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C08E356u, 2);  /* 0C08E354 mov.l Rm,@(disp,Rn) */
	W8(r5, r6); UPD(0x0C08E358u, 1);  /* 0C08E356 mov.b Rm,@Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C08E35Au, 1);  /* 0C08E358 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08E35Cu, 1);  /* 0C08E35A mov.l @(disp,pc),Rn */
L_0C08E35C: BLKS(0x0C08E35Cu);
	r14 += 0x4u;  /* 0C08E35C add #imm,Rn */
	UPD(0x0C08E35Eu, 1);
L_0C08E35E: BLKS(0x0C08E35Eu);
	r15 = r14;  /* 0C08E35E mov Rm,Rn */
	IF(0x0C08E360u); PR = R32(r15); r15 += 4; UPD(0x0C08E362u, 2);  /* 0C08E360 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E364u, 1);  /* 0C08E362 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08E366u, 1);  /* 0C08E364 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E368u, 1);  /* 0C08E366 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E36Au, 1);  /* 0C08E368 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E36Cu, 1);  /* 0C08E36A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E36Eu, 1);  /* 0C08E36C mov.l @Rm+,Rn */
	IF(0x0C08E36Eu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08DBE0u: TAIL(blk_f_0C08DBE0); case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C08E36E jmp @Rn */
L_0C08E380: BLKS(0x0C08E380u);
	r3 = R32(r8 + 0x8u); UPD(0x0C08E382u, 1);  /* 0C08E380 mov.l @(disp,Rm),Rn */
	r10 = 0x5u;  /* 0C08E382 mov #imm,Rn */
	T = r3 > r10;  /* 0C08E384 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08E2FAu, 5); goto L_0C08E2FA; }  /* 0C08E386 bt */
L_0C08E388: BLKS(0x0C08E388u);
	r0 = 0xC08E3D0u;  /* 0C08E388 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C08E38A add Rm,Rn */
	IF(0x0C08E38Cu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08E38Eu, 3);  /* 0C08E38C mov.w @(r0,Rm),Rn */
	IF(0x0C08E38Eu); { u32 tv_ = (r11 + 0x0C08E392u); u32 t_ = PHYS(tv_); IF(0x0C08E390u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E3E0u: goto L_0C08E3E0; case 0x0C08E3F0u: goto L_0C08E3F0; case 0x0C08E410u: goto L_0C08E410; case 0x0C08E460u: goto L_0C08E460; case 0x0C08E490u: goto L_0C08E490; default: JUMPD(tv_); } }  /* 0C08E38E braf Rn */
L_0C08E3E0: BLKS(0x0C08E3E0u);
	r1 = 0xC0A9A70u; UPD(0x0C08E3E2u, 1);  /* 0C08E3E0 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08E35Cu, 3); goto L_0C08E35C; }  /* 0C08E3E2 bra */
L_0C08E3F0: BLKS(0x0C08E3F0u);
	r5 = 0xC1A7108u; UPD(0x0C08E3F2u, 1);  /* 0C08E3F0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08E3F2 mov Rm,Rn */
	r7 = 0xC0A9D90u; UPD(0x0C08E3F6u, 2);  /* 0C08E3F4 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C08E3F6 add #imm,Rn */
	r15 = r14;  /* 0C08E3F8 mov Rm,Rn */
	IF(0x0C08E3FAu); PR = R32(r15); r15 += 4; UPD(0x0C08E3FCu, 3);  /* 0C08E3FA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E3FEu, 1);  /* 0C08E3FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08E400u, 1);  /* 0C08E3FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E402u, 1);  /* 0C08E400 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E404u, 1);  /* 0C08E402 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E406u, 1);  /* 0C08E404 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E408u, 1);  /* 0C08E406 mov.l @Rm+,Rn */
	IF(0x0C08E408u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08E408 jmp @Rn */
L_0C08E410: BLKS(0x0C08E410u);
	r5 = 0xB4u; UPD(0x0C08E412u, 1);  /* 0C08E410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E412 add #imm,Rn */
	IF(0x0C08E414u); MACL = r9 * r5;  /* 0C08E414 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08E418u, 4);  /* 0C08E416 mov.l @(disp,pc),Rn */
	IF(0x0C08E418u); r8 = MACL;  /* 0C08E418 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E41Cu, 2);  /* 0C08E41A mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08E41C add Rm,Rn */
	IF(0x0C08E41Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E420u, 2);  /* 0C08E41E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08E420 mov #imm,Rn */
	r3 = r7 & 0xFF;  /* 0C08E422 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08E426u, 3);  /* 0C08E424 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E426 add #imm,Rn */
	IF(0x0C08E428u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E42Au, 2);  /* 0C08E428 mov.b @(r0,Rm),Rn */
	r0 = r10 & 0xFF;  /* 0C08E42A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08E42Eu, 2);  /* 0C08E42C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BECB0u; UPD(0x0C08E430u, 1);  /* 0C08E42E mov.l @(disp,pc),Rn */
	r12 = 0xC0A8D30u; UPD(0x0C08E432u, 1);  /* 0C08E430 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08E434u, 1);  /* 0C08E432 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E436u, 1);  /* 0C08E434 mov.l @(disp,Rm),Rn */
	IF(0x0C08E436u); { u32 t_ = r13; PR = 0x0C08E43Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E43Au); }  /* 0C08E436 jsr @Rn */
L_0C08E43A: BLKS(0x0C08E43Au);
	r15 += 0x8u;  /* 0C08E43A add #imm,Rn */
	IF(0x0C08E43Cu); { u32 t_ = r12; PR = 0x0C08E440u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E440u); }  /* 0C08E43C jsr @Rn */
L_0C08E440: BLKS(0x0C08E440u);
	IF(0x0C08E440u); T = (s32)r0 >= 0;  /* 0C08E440 cmp/pz Rn */
	if (!T) { UPD(0x0C08E454u, 4); goto L_0C08E454; }  /* 0C08E442 bf */
L_0C08E444: BLKS(0x0C08E444u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08E446u, 1);  /* 0C08E444 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08E446 mov #imm,Rn */
	r9 = 0xFFFE0000u; UPD(0x0C08E44Au, 2);  /* 0C08E448 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C08E44A mov Rm,Rn */
	r6 += r9;  /* 0C08E44C add Rm,Rn */
	UPD(0x0C08E44Eu, 2);
L_0C08E44E: BLKS(0x0C08E44Eu);
	r11 = 0xC07DE60u; UPD(0x0C08E450u, 1);  /* 0C08E44E mov.l @(disp,pc),Rn */
	IF(0x0C08E450u); { u32 t_ = r11; PR = 0x0C08E454u; r7 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08E454u); }  /* 0C08E450 jsr @Rn */
L_0C08E454: BLKS(0x0C08E454u);
	r3 = 0x0u;  /* 0C08E454 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C08E458u, 2);  /* 0C08E456 mov.l Rm,@Rn */
L_0C08E458: BLKS(0x0C08E458u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08E276u, 3); goto L_0C08E276; }  /* 0C08E458 bra */
L_0C08E460: BLKS(0x0C08E460u);
	r8 = 0xB4u; UPD(0x0C08E462u, 1);  /* 0C08E460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E462 add #imm,Rn */
	IF(0x0C08E464u); MACL = r9 * r8;  /* 0C08E464 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08E468u, 4);  /* 0C08E466 mov.l @(disp,pc),Rn */
	IF(0x0C08E468u); r8 = MACL;  /* 0C08E468 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E46Cu, 2);  /* 0C08E46A mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C08E46C add Rm,Rn */
	IF(0x0C08E46Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E470u, 2);  /* 0C08E46E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08E470 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08E474u, 2);  /* 0C08E472 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E474 add #imm,Rn */
	IF(0x0C08E476u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E478u, 2);  /* 0C08E476 mov.b @(r0,Rm),Rn */
	r9 = 0xC0BD6F0u; UPD(0x0C08E47Au, 1);  /* 0C08E478 mov.l @(disp,pc),Rn */
	r11 = r5 & 0xFF;  /* 0C08E47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C08E47Eu, 2);  /* 0C08E47C mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C08E47E mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C08E482u, 2);  /* 0C08E480 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E484u, 1);  /* 0C08E482 mov.l @(disp,Rm),Rn */
	IF(0x0C08E484u); { u32 t_ = r9; PR = 0x0C08E488u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08E488u); }  /* 0C08E484 jsr @Rn */
L_0C08E488: BLKS(0x0C08E488u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08E454u, 3); goto L_0C08E454; }  /* 0C08E488 bra */
L_0C08E490: BLKS(0x0C08E490u);
	r8 = 0xB4u; UPD(0x0C08E492u, 1);  /* 0C08E490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E492 add #imm,Rn */
	IF(0x0C08E494u); MACL = r9 * r8;  /* 0C08E494 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08E498u, 4);  /* 0C08E496 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C08E498 mov #imm,Rn */
	IF(0x0C08E49Au); r8 = MACL;  /* 0C08E49A sts macl,Rn */
	r8 += r0;  /* 0C08E49C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E4A0u, 4);  /* 0C08E49E mov.w @(disp,pc),Rn */
	IF(0x0C08E4A0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E4A2u, 1);  /* 0C08E4A0 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C08E4A2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08E4A6u, 2);  /* 0C08E4A4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E4A6 add #imm,Rn */
	IF(0x0C08E4A8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E4AAu, 2);  /* 0C08E4A8 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08E4AA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08E4AEu, 2);  /* 0C08E4AC mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BECB0u; UPD(0x0C08E4B0u, 1);  /* 0C08E4AE mov.l @(disp,pc),Rn */
	r12 = 0xC0A8D30u; UPD(0x0C08E4B2u, 1);  /* 0C08E4B0 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08E4B4u, 1);  /* 0C08E4B2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E4B6u, 1);  /* 0C08E4B4 mov.l @(disp,Rm),Rn */
	IF(0x0C08E4B6u); { u32 t_ = r13; PR = 0x0C08E4BAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E4BAu); }  /* 0C08E4B6 jsr @Rn */
L_0C08E4BA: BLKS(0x0C08E4BAu);
	r15 += 0x8u;  /* 0C08E4BA add #imm,Rn */
	IF(0x0C08E4BCu); { u32 t_ = r12; PR = 0x0C08E4C0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E4C0u); }  /* 0C08E4BC jsr @Rn */
L_0C08E4C0: BLKS(0x0C08E4C0u);
	IF(0x0C08E4C0u); T = (s32)r0 >= 0;  /* 0C08E4C0 cmp/pz Rn */
	if (!T) { UPD(0x0C08E454u, 4); goto L_0C08E454; }  /* 0C08E4C2 bf */
L_0C08E4C4: BLKS(0x0C08E4C4u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08E4C6u, 1);  /* 0C08E4C4 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08E4C6 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C08E44Eu, 4); goto L_0C08E44E; }  /* 0C08E4C8 bra */
L_0C08E4D0: BLKS(0x0C08E4D0u);
	r1 = 0xC0A9CB0u; UPD(0x0C08E4D2u, 1);  /* 0C08E4D0 mov.l @(disp,pc),Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08E35Eu, 3); goto L_0C08E35E; }  /* 0C08E4D2 bra */
L_0C08E4E0: BLKS(0x0C08E4E0u);
	r8 = 0xC0A8D30u; UPD(0x0C08E4E2u, 1);  /* 0C08E4E0 mov.l @(disp,pc),Rn */
	IF(0x0C08E4E2u); { u32 t_ = r8; PR = 0x0C08E4E6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E4E6u); }  /* 0C08E4E2 jsr @Rn */
L_0C08E4E6: BLKS(0x0C08E4E6u);
	IF(0x0C08E4E6u); T = (s32)r0 >= 0;  /* 0C08E4E6 cmp/pz Rn */
	{ u32 c_ = !T; r11 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E560u, 4); goto L_0C08E560; } goto L_0C08E4EC; }  /* 0C08E4E8 bf/s */
L_0C08E4EC: BLKS(0x0C08E4ECu);
	r2 = 0xB4u; UPD(0x0C08E4EEu, 2);  /* 0C08E4EC mov.w @(disp,pc),Rn */
	IF(0x0C08E4EEu); MACL = r0 * r2;  /* 0C08E4EE mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08E4F2u, 3);  /* 0C08E4F0 mov.l @(disp,pc),Rn */
	IF(0x0C08E4F2u); r12 = MACL;  /* 0C08E4F2 sts macl,Rn */
	r12 += r3;  /* 0C08E4F4 add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C08E4F8u, 3);  /* 0C08E4F6 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08E4F8 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08E4FCu); MACL = r9 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08E550u, 5); goto L_0C08E550; } goto L_0C08E4FE; }  /* 0C08E4FA bt/s */
L_0C08E4FE: BLKS(0x0C08E4FEu);
	r13 = 0x5u;  /* 0C08E4FE mov #imm,Rn */
	IF(0x0C08E500u); r10 = MACL;  /* 0C08E500 sts macl,Rn */
	r10 += r3;  /* 0C08E502 add Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C08E506u, 6);  /* 0C08E504 mov.l @(disp,Rm),Rn */
	T = r2 > r13;  /* 0C08E506 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08E458u, 4); goto L_0C08E458; }  /* 0C08E508 bt */
L_0C08E50A: BLKS(0x0C08E50Au);
	r0 = 0xC08E540u;  /* 0C08E50A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E50C add Rm,Rn */
	IF(0x0C08E50Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E510u, 3);  /* 0C08E50E mov.w @(r0,Rm),Rn */
	IF(0x0C08E510u); { u32 tv_ = (r3 + 0x0C08E514u); u32 t_ = PHYS(tv_); IF(0x0C08E512u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E3E0u: goto L_0C08E3E0; case 0x0C08E3F0u: goto L_0C08E3F0; case 0x0C08E410u: goto L_0C08E410; case 0x0C08E460u: goto L_0C08E460; case 0x0C08E490u: goto L_0C08E490; default: JUMPD(tv_); } }  /* 0C08E510 braf Rn */
L_0C08E550: BLKS(0x0C08E550u);
	r1 = 0xC08DBE0u; UPD(0x0C08E552u, 1);  /* 0C08E550 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08E35Cu, 3); goto L_0C08E35C; }  /* 0C08E552 bra */
L_0C08E560: BLKS(0x0C08E560u);
	r6 = 0xB4u; UPD(0x0C08E562u, 1);  /* 0C08E560 mov.w @(disp,pc),Rn */
	IF(0x0C08E562u); MACL = r9 * r6;  /* 0C08E562 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08E566u, 3);  /* 0C08E564 mov.l @(disp,pc),Rn */
	IF(0x0C08E566u); r2 = MACL;  /* 0C08E566 sts macl,Rn */
	r5 += r2;  /* 0C08E568 add Rm,Rn */
	r2 = R32(r5 + 0x8u); UPD(0x0C08E56Cu, 3);  /* 0C08E56A mov.l @(disp,Rm),Rn */
	T = r2 > r11;  /* 0C08E56C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08E5D6u, 4); goto L_0C08E5D6; }  /* 0C08E56E bt */
L_0C08E570: BLKS(0x0C08E570u);
	r0 = 0xC08E584u;  /* 0C08E570 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E572 add Rm,Rn */
	IF(0x0C08E574u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E576u, 3);  /* 0C08E574 mov.w @(r0,Rm),Rn */
	IF(0x0C08E576u); { u32 tv_ = (r4 + 0x0C08E57Au); u32 t_ = PHYS(tv_); IF(0x0C08E578u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E3E0u: goto L_0C08E3E0; case 0x0C08E3F0u: goto L_0C08E3F0; case 0x0C08E410u: goto L_0C08E410; case 0x0C08E460u: goto L_0C08E460; case 0x0C08E490u: goto L_0C08E490; default: JUMPD(tv_); } }  /* 0C08E576 braf Rn */
L_0C08E590: BLKS(0x0C08E590u);
	r5 = 0xB4u; UPD(0x0C08E592u, 1);  /* 0C08E590 mov.w @(disp,pc),Rn */
	IF(0x0C08E592u); MACL = r9 * r5;  /* 0C08E592 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08E596u, 3);  /* 0C08E594 mov.l @(disp,pc),Rn */
	IF(0x0C08E596u); r3 = MACL;  /* 0C08E596 sts macl,Rn */
	r3 += r11;  /* 0C08E598 add Rm,Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C08E59Cu, 3);  /* 0C08E59A mov.l @(disp,Rm),Rn */
	r2 = 0xF0u; UPD(0x0C08E59Eu, 1);  /* 0C08E59C mov.w @(disp,pc),Rn */
	IF(0x0C08E59Eu); MACL = r8 * r2;  /* 0C08E59E mul.l Rm,Rn */
	IF(0x0C08E5A0u); r7 = MACL;  /* 0C08E5A0 sts macl,Rn */
	IF(0x0C08E5A2u); T = (s32)r7 >= 0;  /* 0C08E5A2 cmp/pz Rn */
	if (!T) { UPD(0x0C08E610u, 7); goto L_0C08E610; }  /* 0C08E5A4 bf */
L_0C08E5A6: BLKS(0x0C08E5A6u);
	r0 = R32(r3 + 0x30u); UPD(0x0C08E5A8u, 1);  /* 0C08E5A6 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C08E5A8 mov #imm,Rn */
	IF(0x0C08E5AAu); MACL = r0 * r2;  /* 0C08E5AA mul.l Rm,Rn */
	IF(0x0C08E5ACu); ARG0(0x476Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C08E5AC shad Rm,Rn */
	IF(0x0C08E5AEu); r2 = MACL;  /* 0C08E5AE sts macl,Rn */
	IF(0x0C08E5B0u); T = (s32)r2 >= 0;  /* 0C08E5B0 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08E600u, 9); goto L_0C08E600; } UPD(0x0C08E5B6u, 1); goto L_0C08E5B6; }  /* 0C08E5B2 bf/s */
L_0C08E5B6: BLKS(0x0C08E5B6u);
	IF(0x0C08E5B6u); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C08E5B6 shad Rm,Rn */
	r10 = R32(r3 + 0x24u); UPD(0x0C08E5BAu, 2);  /* 0C08E5B8 mov.l @(disp,Rm),Rn */
	r12 = r7;  /* 0C08E5BA mov Rm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C08E5BEu, 2);  /* 0C08E5BC mov.l @(disp,Rm),Rn */
	r10 += r7;  /* 0C08E5BE add Rm,Rn */
	r13 += r2;  /* 0C08E5C0 add Rm,Rn */
	r12 |= r2;  /* 0C08E5C2 or Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C08E5C6u, 4);  /* 0C08E5C4 mov.l Rm,@(disp,Rn) */
	T = (r12 & r12) == 0;  /* 0C08E5C6 tst Rm,Rn */
	W32(r3 + 0x24u, r10); UPD(0x0C08E5CAu, 2);  /* 0C08E5C8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r3 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08E5D6u, 3); goto L_0C08E5D6; } UPD(0x0C08E5CEu, 1); goto L_0C08E5CE; }  /* 0C08E5CA bf/s */
L_0C08E5CE: BLKS(0x0C08E5CEu);
	r2 = R32(r3 + 0x8u); UPD(0x0C08E5D0u, 1);  /* 0C08E5CE mov.l @(disp,Rm),Rn */
	r3 = 0x5u;  /* 0C08E5D0 mov #imm,Rn */
	T = r2 > r3;  /* 0C08E5D2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C08E5DAu, 5); goto L_0C08E5DA; }  /* 0C08E5D4 bf */
L_0C08E5D6: BLKS(0x0C08E5D6u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08E276u, 3); goto L_0C08E276; }  /* 0C08E5D6 bra */
L_0C08E5DA: BLKS(0x0C08E5DAu);
	r0 = 0xC08E5ECu;  /* 0C08E5DA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E5DC add Rm,Rn */
	IF(0x0C08E5DEu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E5E0u, 3);  /* 0C08E5DE mov.w @(r0,Rm),Rn */
	IF(0x0C08E5E0u); { u32 tv_ = (r7 + 0x0C08E5E4u); u32 t_ = PHYS(tv_); IF(0x0C08E5E2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E3E0u: goto L_0C08E3E0; case 0x0C08E3F0u: goto L_0C08E3F0; case 0x0C08E410u: goto L_0C08E410; case 0x0C08E460u: goto L_0C08E460; case 0x0C08E490u: goto L_0C08E490; default: JUMPD(tv_); } }  /* 0C08E5E0 braf Rn */
L_0C08E600: BLKS(0x0C08E600u);
	r4 = 0xFFu; UPD(0x0C08E602u, 1);  /* 0C08E600 mov.w @(disp,pc),Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C08E5B6u, 3); goto L_0C08E5B6; }  /* 0C08E602 bra */
L_0C08E610: BLKS(0x0C08E610u);
	r6 = 0xFFu; UPD(0x0C08E612u, 1);  /* 0C08E610 mov.w @(disp,pc),Rn */
	{ r7 += r6; /* slot add Rm,Rn */ UPD(0x0C08E5A6u, 3); goto L_0C08E5A6; }  /* 0C08E612 bra */
L_0C08E620: BLKS(0x0C08E620u);
	r1 = 0xC08DE70u; UPD(0x0C08E622u, 1);  /* 0C08E620 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08E35Cu, 3); goto L_0C08E35C; }  /* 0C08E622 bra */
}

void blk_f_0C08E630(sh3_t *c)
{
	LOCALS;
L_0C08E630: BLKS(0x0C08E630u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E632u, 1);  /* 0C08E630 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E634u, 1);  /* 0C08E632 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E636u, 1);  /* 0C08E634 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E638u, 1);  /* 0C08E636 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08E63Au, 1);  /* 0C08E638 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08E63Cu, 1);  /* 0C08E63A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E63Eu, 1);  /* 0C08E63C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08E640u, 1);  /* 0C08E63E mov.l @(disp,pc),Rn */
	IF(0x0C08E640u); r15 -= 4; W32(r15, PR); UPD(0x0C08E642u, 1);  /* 0C08E640 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08E644u, 1);  /* 0C08E642 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08E644 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C08E648u, 2);  /* 0C08E646 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08E648 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08E64Cu, 2);  /* 0C08E64A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C08E64Eu, 1);  /* 0C08E64C mov.l @Rm,Rn */
	IF(0x0C08E64Eu); r0 <<= 2;  /* 0C08E64E shll2 Rn */
	IF(0x0C08E650u); r6 = R32(r0 + r7); UPD(0x0C08E652u, 2);  /* 0C08E650 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C08E654u, 1);  /* 0C08E652 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C08E656u, 1);  /* 0C08E654 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08E658u, 1);  /* 0C08E656 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08E65Au, 1);  /* 0C08E658 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C08E65Cu, 1);  /* 0C08E65A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08E65Eu, 1);  /* 0C08E65C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08E660u, 1);  /* 0C08E65E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C08E662u, 1);  /* 0C08E660 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08E662 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08E666u, 2);  /* 0C08E664 mov.l @(disp,pc),Rn */
	IF(0x0C08E666u); { u32 t_ = r8; PR = 0x0C08E66Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08E66Au); }  /* 0C08E666 jsr @Rn */
L_0C08E66A: BLKS(0x0C08E66Au);
	T = (r0 & r0) == 0;  /* 0C08E66A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E690u, 4); goto L_0C08E690; } UPD(0x0C08E670u, 1); goto L_0C08E670; }  /* 0C08E66C bf/s */
L_0C08E670: BLKS(0x0C08E670u);
	r14 += 0xCu;  /* 0C08E670 add #imm,Rn */
	UPD(0x0C08E672u, 1);
L_0C08E672: BLKS(0x0C08E672u);
	r15 = r14;  /* 0C08E672 mov Rm,Rn */
	IF(0x0C08E674u); PR = R32(r15); r15 += 4; UPD(0x0C08E676u, 2);  /* 0C08E674 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E678u, 1);  /* 0C08E676 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08E67Au, 1);  /* 0C08E678 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E67Cu, 1);  /* 0C08E67A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E67Eu, 1);  /* 0C08E67C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E680u, 1);  /* 0C08E67E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E682u, 1);  /* 0C08E680 mov.l @Rm+,Rn */
	IF(0x0C08E682u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E682 rts */
L_0C08E690: BLKS(0x0C08E690u);
	r10 = 0xC071740u; UPD(0x0C08E692u, 1);  /* 0C08E690 mov.l @(disp,pc),Rn */
	IF(0x0C08E692u); { u32 t_ = r10; PR = 0x0C08E696u; r4 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08E696u); }  /* 0C08E692 jsr @Rn */
L_0C08E696: BLKS(0x0C08E696u);
	T = (r0 & r0) == 0;  /* 0C08E696 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E670u, 4); goto L_0C08E670; } goto L_0C08E69C; }  /* 0C08E698 bt/s */
L_0C08E69C: BLKS(0x0C08E69Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08E69Eu, 2);  /* 0C08E69C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08E6A0u, 1);  /* 0C08E69E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08E6A2u, 1);  /* 0C08E6A0 mov.w @Rm+,Rn */
	IF(0x0C08E6A2u); MACL = r10 * r8;  /* 0C08E6A2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08E6A6u, 3);  /* 0C08E6A4 mov.l @(disp,pc),Rn */
	IF(0x0C08E6A6u); r8 = MACL;  /* 0C08E6A6 sts macl,Rn */
	r0 = 0xC1008100u; UPD(0x0C08E6AAu, 2);  /* 0C08E6A8 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08E6AA add Rm,Rn */
	W32(r8, r0); UPD(0x0C08E6AEu, 2);  /* 0C08E6AC mov.l Rm,@Rn */
	r4 = r10;  /* 0C08E6AE mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08E6B2u, 2);  /* 0C08E6B0 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C08E6B4u, 1);  /* 0C08E6B2 mov.w @Rm,Rn */
	r13 = r6 & 0xFFFF;  /* 0C08E6B4 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08E6B8u, 2);  /* 0C08E6B6 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08E6B8 mov #imm,Rn */
	IF(0x0C08E6BAu); W16(r0 + r8, r7); UPD(0x0C08E6BCu, 2);  /* 0C08E6BA mov.w Rm,@(r0,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08E6BEu, 1);  /* 0C08E6BC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08E6BE add #imm,Rn */
	IF(0x0C08E6C0u); W16(r0 + r8, r7); UPD(0x0C08E6C2u, 2);  /* 0C08E6C0 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r13); UPD(0x0C08E6C4u, 1);  /* 0C08E6C2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r11); UPD(0x0C08E6C6u, 1);  /* 0C08E6C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E6C6u); { u32 t_ = r5; PR = 0x0C08E6CAu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08E6CAu); }  /* 0C08E6C6 jsr @Rn */
L_0C08E6CA: BLKS(0x0C08E6CAu);
	r9 = 0xC0722E0u; UPD(0x0C08E6CCu, 1);  /* 0C08E6CA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08E6CC mov Rm,Rn */
	r2 = 0x1A00000u; UPD(0x0C08E6D0u, 2);  /* 0C08E6CE mov.l @(disp,pc),Rn */
	IF(0x0C08E6D0u); { u32 t_ = r9; PR = 0x0C08E6D4u; W32(r8 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08E6D4u); }  /* 0C08E6D0 jsr @Rn */
L_0C08E6D4: BLKS(0x0C08E6D4u);
	r3 = 0xC0A9AE0u; UPD(0x0C08E6D6u, 1);  /* 0C08E6D4 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9D30u; UPD(0x0C08E6D8u, 1);  /* 0C08E6D6 mov.l @(disp,pc),Rn */
	IF(0x0C08E6D8u); { u32 t_ = r3; PR = 0x0C08E6DCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08E6DCu); }  /* 0C08E6D8 jsr @Rn */
L_0C08E6DC: BLKS(0x0C08E6DCu);
	r0 = 0xADu; UPD(0x0C08E6DEu, 1);  /* 0C08E6DC mov.w @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C08E6DE mov #imm,Rn */
	r6 = 0xA8u; UPD(0x0C08E6E2u, 2);  /* 0C08E6E0 mov.w @(disp,pc),Rn */
	IF(0x0C08E6E2u); W8(r0 + r8, r11); UPD(0x0C08E6E4u, 1);  /* 0C08E6E2 mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C08E6E4 add Rm,Rn */
	r6 += 0x1u;  /* 0C08E6E6 add #imm,Rn */
	W8(r6, r4); UPD(0x0C08E6EAu, 3);  /* 0C08E6E8 mov.b Rm,@Rn */
	r0 = 0xC297460u; UPD(0x0C08E6ECu, 1);  /* 0C08E6EA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08E6EC mov Rm,Rn */
	r5 = R32(r0); UPD(0x0C08E6F0u, 2);  /* 0C08E6EE mov.l @Rm,Rn */
	IF(0x0C08E6F0u); { u32 t_ = r13; PR = 0x0C08E6F4u; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08E6F4u); }  /* 0C08E6F0 jsr @Rn */
L_0C08E6F4: BLKS(0x0C08E6F4u);
	r0 = 0x94u; UPD(0x0C08E6F6u, 1);  /* 0C08E6F4 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C08E6F6 mov Rm,Rn */
	IF(0x0C08E6F8u); W32(r0 + r8, r11); UPD(0x0C08E6FAu, 2);  /* 0C08E6F8 mov.l Rm,@(r0,Rn) */
	r9 = 0x8Cu; UPD(0x0C08E6FCu, 1);  /* 0C08E6FA mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08E6FC add #imm,Rn */
	r9 += r8;  /* 0C08E6FE add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08E702u, 3);  /* 0C08E700 mov.l @(disp,Rm),Rn */
	W32(r9, r11); UPD(0x0C08E704u, 1);  /* 0C08E702 mov.l Rm,@Rn */
	IF(0x0C08E704u); W32(r0 + r8, r11); UPD(0x0C08E706u, 1);  /* 0C08E704 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C08E708u, 1);  /* 0C08E706 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C08E70Au, 1);  /* 0C08E708 mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C08E70Cu, 1);  /* 0C08E70A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08E70Eu, 1);  /* 0C08E70C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08E70E mov #imm,Rn */
	UPD(0x0C08E710u, 1);
L_0C08E710: BLKS(0x0C08E710u);
	r9 = 0xC1A8108u; UPD(0x0C08E712u, 1);  /* 0C08E710 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08E714u, 1);  /* 0C08E712 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08E714 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08E718u, 2);  /* 0C08E716 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C08E718 add #imm,Rn */
	IF(0x0C08E71Au); MACL = r10 * r8;  /* 0C08E71A mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08E71Eu, 4);  /* 0C08E71C mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C08E71E add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C08E722u, 2);  /* 0C08E720 mov.l @(disp,pc),Rn */
	IF(0x0C08E722u); r8 = MACL;  /* 0C08E722 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08E726u, 2);  /* 0C08E724 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C08E726 add Rm,Rn */
	IF(0x0C08E728u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08E72Au, 2);  /* 0C08E728 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C08E72A add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08E72C add #imm,Rn */
	W16(r8, r5); UPD(0x0C08E730u, 3);  /* 0C08E72E mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08E730 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C08E734u, 2);  /* 0C08E732 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08E734 add #imm,Rn */
	W16(r8, r2); UPD(0x0C08E738u, 2);  /* 0C08E736 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C08E738 mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08E73Cu, 2);  /* 0C08E73A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08E73C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08E740u, 2);  /* 0C08E73E mov.w @Rm,Rn */
	r0 = R32(r9); UPD(0x0C08E742u, 1);  /* 0C08E740 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C08E742 extu.w Rm,Rn */
	W32(r8, r0); UPD(0x0C08E746u, 2);  /* 0C08E744 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08E746 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08E74Au, 2);  /* 0C08E748 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A8A30u; UPD(0x0C08E74Cu, 1);  /* 0C08E74A mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C08E74Eu, 1);  /* 0C08E74C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C08E750u, 1);  /* 0C08E74E mov.l Rm,@(disp,Rn) */
	IF(0x0C08E750u); { u32 t_ = r2; PR = 0x0C08E754u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08E754u); }  /* 0C08E750 jsr @Rn */
L_0C08E754: BLKS(0x0C08E754u);
	r6 = R32(r13 + 0x24u); UPD(0x0C08E756u, 1);  /* 0C08E754 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C08E758u, 1);  /* 0C08E756 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08E75Au, 1);  /* 0C08E758 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C08E75Cu, 1);  /* 0C08E75A mov.l Rm,@(disp,Rn) */
	r0 = 0xC2B03A2u; UPD(0x0C08E75Eu, 1);  /* 0C08E75C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C08E760u, 1);  /* 0C08E75E mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08E762u, 1);  /* 0C08E760 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C08E764u, 1);  /* 0C08E762 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E764u); r3 >>= 2;  /* 0C08E764 shlr2 Rn */
	r2 = R32(r9 + 0x10u); UPD(0x0C08E768u, 2);  /* 0C08E766 mov.l @(disp,Rm),Rn */
	IF(0x0C08E768u); r3 >>= 2;  /* 0C08E768 shlr2 Rn */
	r4 = 0x86u; UPD(0x0C08E76Cu, 2);  /* 0C08E76A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08E76C mov Rm,Rn */
	IF(0x0C08E76Eu); r3 >>= 2;  /* 0C08E76E shlr2 Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08E772u, 3);  /* 0C08E770 mov.l @(disp,pc),Rn */
	IF(0x0C08E772u); W16(r0 + r4, r3); UPD(0x0C08E774u, 1);  /* 0C08E772 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r2); UPD(0x0C08E776u, 1);  /* 0C08E774 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E776u); { u32 t_ = r9; PR = 0x0C08E77Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08E77Au); }  /* 0C08E776 jsr @Rn */
L_0C08E77A: BLKS(0x0C08E77Au);
	r0 = 0xB0u; UPD(0x0C08E77Cu, 1);  /* 0C08E77A mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C08E77C mov Rm,Rn */
	IF(0x0C08E77Eu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08E780u, 2);  /* 0C08E77E mov.b @(r0,Rm),Rn */
	r6 = 0xACu; UPD(0x0C08E782u, 1);  /* 0C08E780 mov.w @(disp,pc),Rn */
	IF(0x0C08E782u); W8(r0 + r8, r3); UPD(0x0C08E784u, 1);  /* 0C08E782 mov.b Rm,@(r0,Rn) */
	r5 += r6;  /* 0C08E784 add Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C08E788u, 2);  /* 0C08E786 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C08E788 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C08E78Cu, 2);  /* 0C08E78A mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C08E78C add #imm,Rn */
	r10 = 0xC0C2360u; UPD(0x0C08E790u, 2);  /* 0C08E78E mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C08E790 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C08E794u, 2);  /* 0C08E792 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08E794 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C08E798u, 2);  /* 0C08E796 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08E798 add #imm,Rn */
	r2 = 0x9Bu; UPD(0x0C08E79Cu, 2);  /* 0C08E79A mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C08E79Eu, 1);  /* 0C08E79C mov.b Rm,@Rn */
	r8 += r2;  /* 0C08E79E add Rm,Rn */
	IF(0x0C08E7A0u); { u32 t_ = r10; PR = 0x0C08E7A4u; W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08E7A4u); }  /* 0C08E7A0 jsr @Rn */
L_0C08E7A4: BLKS(0x0C08E7A4u);
	W8(r8, r0); UPD(0x0C08E7A6u, 1);  /* 0C08E7A4 mov.b Rm,@Rn */
	r10 = 0x18u;  /* 0C08E7A6 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C08E7AAu, 2);  /* 0C08E7A8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08E7AA add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C08E7AC exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C08E7B0u, 3);  /* 0C08E7AE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08E7B2u, 1);  /* 0C08E7B0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C08E7B2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E710u, 4); goto L_0C08E710; } goto L_0C08E7B8; }  /* 0C08E7B4 bf/s */
L_0C08E7B8: BLKS(0x0C08E7B8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08E672u, 4); goto L_0C08E672; }  /* 0C08E7B8 bra */
}

void blk_f_0C08E820(sh3_t *c)
{
	LOCALS;
L_0C08E820: BLKS(0x0C08E820u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E822u, 1);  /* 0C08E820 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E824u, 1);  /* 0C08E822 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E826u, 1);  /* 0C08E824 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E828u, 1);  /* 0C08E826 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08E82Au, 1);  /* 0C08E828 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08E82A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08E82Eu, 2);  /* 0C08E82C mov.l Rm,@-Rn */
	IF(0x0C08E82Eu); MACL = r11 * r3;  /* 0C08E82E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E832u, 3);  /* 0C08E830 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08E834u, 1);  /* 0C08E832 mov.l @(disp,pc),Rn */
	IF(0x0C08E834u); r2 = MACL;  /* 0C08E834 sts macl,Rn */
	IF(0x0C08E836u); r15 -= 4; W32(r15, PR); UPD(0x0C08E838u, 2);  /* 0C08E836 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08E838 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08E83Cu, 2);  /* 0C08E83A mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C08E83C mov #imm,Rn */
	T = r2 > r0;  /* 0C08E83E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E8A0u, 5); goto L_0C08E8A0; } goto L_0C08E844; }  /* 0C08E840 bt/s */
L_0C08E844: BLKS(0x0C08E844u);
	r0 = 0xC08E854u;  /* 0C08E844 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E846 add Rm,Rn */
	IF(0x0C08E848u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E84Au, 4);  /* 0C08E848 mov.w @(r0,Rm),Rn */
	IF(0x0C08E84Au); { u32 tv_ = (r4 + 0x0C08E84Eu); u32 t_ = PHYS(tv_); IF(0x0C08E84Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E880u: goto L_0C08E880; case 0x0C08E8A0u: goto L_0C08E8A0; case 0x0C08E8C0u: goto L_0C08E8C0; case 0x0C08E8F0u: goto L_0C08E8F0; case 0x0C08E900u: goto L_0C08E900; case 0x0C08E930u: goto L_0C08E930; case 0x0C08E9A0u: goto L_0C08E9A0; case 0x0C08E9F0u: goto L_0C08E9F0; case 0x0C08EA30u: goto L_0C08EA30; case 0x0C08EA90u: goto L_0C08EA90; default: JUMPD(tv_); } }  /* 0C08E84A braf Rn */
L_0C08E880: BLKS(0x0C08E880u);
	r5 = 0xC1A82FCu; UPD(0x0C08E882u, 1);  /* 0C08E880 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08E882 mov Rm,Rn */
	UPD(0x0C08E884u, 1);
L_0C08E884: BLKS(0x0C08E884u);
	r2 = 0xC0A9D90u; UPD(0x0C08E886u, 1);  /* 0C08E884 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08E886 mov Rm,Rn */
	IF(0x0C08E888u); PR = R32(r15); r15 += 4; UPD(0x0C08E88Au, 2);  /* 0C08E888 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E88Cu, 1);  /* 0C08E88A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E88Eu, 1);  /* 0C08E88C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E890u, 1);  /* 0C08E88E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E892u, 1);  /* 0C08E890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E894u, 1);  /* 0C08E892 mov.l @Rm+,Rn */
	IF(0x0C08E894u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08E894 jmp @Rn */
L_0C08E8A0: BLKS(0x0C08E8A0u);
	r15 = r14;  /* 0C08E8A0 mov Rm,Rn */
	IF(0x0C08E8A2u); PR = R32(r15); r15 += 4; UPD(0x0C08E8A4u, 2);  /* 0C08E8A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E8A6u, 1);  /* 0C08E8A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E8A8u, 1);  /* 0C08E8A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E8AAu, 1);  /* 0C08E8A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E8ACu, 1);  /* 0C08E8AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E8AEu, 1);  /* 0C08E8AC mov.l @Rm+,Rn */
	IF(0x0C08E8AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E8AE rts */
L_0C08E8C0: BLKS(0x0C08E8C0u);
	r0 = 0xB4u; UPD(0x0C08E8C2u, 1);  /* 0C08E8C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E8C2 add #imm,Rn */
	IF(0x0C08E8C4u); MACL = r11 * r0;  /* 0C08E8C4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C08E8C8u, 4);  /* 0C08E8C6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08E8C8 mov #imm,Rn */
	IF(0x0C08E8CAu); r9 = MACL;  /* 0C08E8CA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E8CEu, 3);  /* 0C08E8CC mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C08E8CE add Rm,Rn */
	IF(0x0C08E8D0u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08E8D2u, 2);  /* 0C08E8D0 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C08E8D2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C08E8D6u, 2);  /* 0C08E8D4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E8D6 add #imm,Rn */
	IF(0x0C08E8D8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08E8DAu, 2);  /* 0C08E8D8 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BECB0u; UPD(0x0C08E8DCu, 1);  /* 0C08E8DA mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08E8DC extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E8E0u, 2);  /* 0C08E8DE mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C08E8E2u, 1);  /* 0C08E8E0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08E8E4u, 1);  /* 0C08E8E2 mov.l @(disp,Rm),Rn */
	IF(0x0C08E8E4u); { u32 t_ = r8; PR = 0x0C08E8E8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E8E8u); }  /* 0C08E8E4 jsr @Rn */
L_0C08E8E8: BLKS(0x0C08E8E8u);
	r5 = 0x0u;  /* 0C08E8E8 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C08E8ECu, 2);  /* 0C08E8EA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08E8A0u, 3); goto L_0C08E8A0; }  /* 0C08E8EC bra */
L_0C08E8F0: BLKS(0x0C08E8F0u);
	r5 = 0xC1A83CAu; UPD(0x0C08E8F2u, 1);  /* 0C08E8F0 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C08E884u, 3); goto L_0C08E884; }  /* 0C08E8F2 bra */
L_0C08E900: BLKS(0x0C08E900u);
	r8 = 0xB4u; UPD(0x0C08E902u, 1);  /* 0C08E900 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E902 add #imm,Rn */
	IF(0x0C08E904u); MACL = r11 * r8;  /* 0C08E904 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08E908u, 4);  /* 0C08E906 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08E908 mov #imm,Rn */
	IF(0x0C08E90Au); r8 = MACL;  /* 0C08E90A sts macl,Rn */
	r8 += r0;  /* 0C08E90C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E910u, 4);  /* 0C08E90E mov.w @(disp,pc),Rn */
	IF(0x0C08E910u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E912u, 1);  /* 0C08E910 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C08E912 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08E916u, 2);  /* 0C08E914 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E916 add #imm,Rn */
	IF(0x0C08E918u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E91Au, 2);  /* 0C08E918 mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08E91A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E91Eu, 2);  /* 0C08E91C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E920u, 1);  /* 0C08E91E mov.l @Rm,Rn */
L_0C08E920: BLKS(0x0C08E920u);
	r10 = 0xC0BECB0u; UPD(0x0C08E922u, 1);  /* 0C08E920 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E924u, 1);  /* 0C08E922 mov.l @(disp,Rm),Rn */
	IF(0x0C08E924u); { u32 t_ = r10; PR = 0x0C08E928u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E928u); }  /* 0C08E924 jsr @Rn */
L_0C08E928: BLKS(0x0C08E928u);
	r15 += 0x8u;  /* 0C08E928 add #imm,Rn */
	UPD(0x0C08E92Au, 1);
L_0C08E92A: BLKS(0x0C08E92Au);
	r2 = 0x0u;  /* 0C08E92A mov #imm,Rn */
	UPD(0x0C08E92Cu, 1);
L_0C08E92C: BLKS(0x0C08E92Cu);
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08E8A0u, 3); goto L_0C08E8A0; }  /* 0C08E92C bra */
L_0C08E930: BLKS(0x0C08E930u);
	r12 = 0xB4u; UPD(0x0C08E932u, 1);  /* 0C08E930 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E932 add #imm,Rn */
	IF(0x0C08E934u); MACL = r11 * r12;  /* 0C08E934 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08E938u, 4);  /* 0C08E936 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C08E938 mov #imm,Rn */
	IF(0x0C08E93Au); r12 = MACL;  /* 0C08E93A sts macl,Rn */
	r12 += r7;  /* 0C08E93C add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08E940u, 4);  /* 0C08E93E mov.l @(disp,Rm),Rn */
	r9 = 0xFFE00000u; UPD(0x0C08E942u, 1);  /* 0C08E940 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08E942 add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C08E946u, 2);  /* 0C08E944 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C08E946 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08E94Au, 2);  /* 0C08E948 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C08E94A extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08E94Eu, 2);  /* 0C08E94C mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08E950u, 1);  /* 0C08E94E mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08E950 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E954u, 2);  /* 0C08E952 mov.b @Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C08E954 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C08E958u, 2);  /* 0C08E956 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0BD6F0u; UPD(0x0C08E95Au, 1);  /* 0C08E958 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C08E95Cu, 1);  /* 0C08E95A mov.l @(disp,Rm),Rn */
	IF(0x0C08E95Cu); { u32 t_ = r10; PR = 0x0C08E960u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08E960u); }  /* 0C08E95C jsr @Rn */
L_0C08E960: BLKS(0x0C08E960u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08E962u, 1);  /* 0C08E960 mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08E964u, 1);  /* 0C08E962 mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08E964 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E968u, 2);  /* 0C08E966 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E96Au, 1);  /* 0C08E968 mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C08E96A mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C08E96C extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08E970u, 3);  /* 0C08E96E mov.l Rm,@(disp,Rn) */
	r0 = 0x200000u; UPD(0x0C08E972u, 1);  /* 0C08E970 mov.l @(disp,pc),Rn */
	r9 = 0xC0A8D30u; UPD(0x0C08E974u, 1);  /* 0C08E972 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C08E974 add Rm,Rn */
	r4 = R32(r12); UPD(0x0C08E978u, 2);  /* 0C08E976 mov.l @Rm,Rn */
	IF(0x0C08E978u); { u32 t_ = r10; PR = 0x0C08E97Cu; r6 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08E97Cu); }  /* 0C08E978 jsr @Rn */
L_0C08E97C: BLKS(0x0C08E97Cu);
	r15 += 0x8u;  /* 0C08E97C add #imm,Rn */
	IF(0x0C08E97Eu); { u32 t_ = r9; PR = 0x0C08E982u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E982u); }  /* 0C08E97E jsr @Rn */
L_0C08E982: BLKS(0x0C08E982u);
	IF(0x0C08E982u); T = (s32)r0 >= 0;  /* 0C08E982 cmp/pz Rn */
	if (!T) { UPD(0x0C08E996u, 4); goto L_0C08E996; }  /* 0C08E984 bf */
L_0C08E986: BLKS(0x0C08E986u);
	r5 = r0;  /* 0C08E986 mov Rm,Rn */
	r4 = 0xFFFE0000u; UPD(0x0C08E98Au, 2);  /* 0C08E988 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x2Cu); UPD(0x0C08E98Cu, 1);  /* 0C08E98A mov.l @(disp,Rm),Rn */
	r11 = 0xC07DE60u; UPD(0x0C08E98Eu, 1);  /* 0C08E98C mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C08E98E add Rm,Rn */
	r4 = 0x8u;  /* 0C08E990 mov #imm,Rn */
	IF(0x0C08E992u); { u32 t_ = r11; PR = 0x0C08E996u; r7 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08E996u); }  /* 0C08E992 jsr @Rn */
L_0C08E996: BLKS(0x0C08E996u);
	r5 = 0x0u;  /* 0C08E996 mov #imm,Rn */
	{ W32(r12, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C08E8A0u, 4); goto L_0C08E8A0; }  /* 0C08E998 bra */
L_0C08E9A0: BLKS(0x0C08E9A0u);
	r2 = 0xB4u; UPD(0x0C08E9A2u, 1);  /* 0C08E9A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E9A2 add #imm,Rn */
	IF(0x0C08E9A4u); MACL = r11 * r2;  /* 0C08E9A4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08E9A8u, 4);  /* 0C08E9A6 mov.l @(disp,pc),Rn */
	IF(0x0C08E9A8u); r8 = MACL;  /* 0C08E9A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E9ACu, 2);  /* 0C08E9AA mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08E9AC add Rm,Rn */
	IF(0x0C08E9AEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9B0u, 2);  /* 0C08E9AE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08E9B0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E9B4u, 2);  /* 0C08E9B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E9B4 add #imm,Rn */
	IF(0x0C08E9B6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9B8u, 2);  /* 0C08E9B6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08E9B8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C08E9BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08E9BEu, 3);  /* 0C08E9BC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C08E9C0u, 1);  /* 0C08E9BE mov.l @(disp,pc),Rn */
	r9 = 0xC0A8D30u; UPD(0x0C08E9C2u, 1);  /* 0C08E9C0 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08E9C4u, 1);  /* 0C08E9C2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E9C6u, 1);  /* 0C08E9C4 mov.l @(disp,Rm),Rn */
	IF(0x0C08E9C6u); { u32 t_ = r12; PR = 0x0C08E9CAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E9CAu); }  /* 0C08E9C6 jsr @Rn */
L_0C08E9CA: BLKS(0x0C08E9CAu);
	r15 += 0x8u;  /* 0C08E9CA add #imm,Rn */
	IF(0x0C08E9CCu); { u32 t_ = r9; PR = 0x0C08E9D0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E9D0u); }  /* 0C08E9CC jsr @Rn */
L_0C08E9D0: BLKS(0x0C08E9D0u);
	IF(0x0C08E9D0u); T = (s32)r0 >= 0;  /* 0C08E9D0 cmp/pz Rn */
	if (!T) { UPD(0x0C08E92Au, 4); goto L_0C08E92A; }  /* 0C08E9D2 bf */
L_0C08E9D4: BLKS(0x0C08E9D4u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08E9D6u, 1);  /* 0C08E9D4 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08E9D6 mov #imm,Rn */
	r11 = 0xFFFE0000u; UPD(0x0C08E9DAu, 2);  /* 0C08E9D8 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C08E9DA mov Rm,Rn */
	r6 += r11;  /* 0C08E9DC add Rm,Rn */
	UPD(0x0C08E9DEu, 2);
L_0C08E9DE: BLKS(0x0C08E9DEu);
	r12 = 0xC07DE60u; UPD(0x0C08E9E0u, 1);  /* 0C08E9DE mov.l @(disp,pc),Rn */
	IF(0x0C08E9E0u); { u32 t_ = r12; PR = 0x0C08E9E4u; r7 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08E9E4u); }  /* 0C08E9E0 jsr @Rn */
L_0C08E9E4: BLKS(0x0C08E9E4u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08E92Cu, 3); goto L_0C08E92C; }  /* 0C08E9E4 bra */
L_0C08E9F0: BLKS(0x0C08E9F0u);
	r8 = 0xB4u; UPD(0x0C08E9F2u, 1);  /* 0C08E9F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E9F2 add #imm,Rn */
	IF(0x0C08E9F4u); MACL = r11 * r8;  /* 0C08E9F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08E9F8u, 4);  /* 0C08E9F6 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C08E9F8 mov #imm,Rn */
	IF(0x0C08E9FAu); r8 = MACL;  /* 0C08E9FA sts macl,Rn */
	r8 += r0;  /* 0C08E9FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08EA00u, 4);  /* 0C08E9FE mov.w @(disp,pc),Rn */
	IF(0x0C08EA00u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA02u, 1);  /* 0C08EA00 mov.b @(r0,Rm),Rn */
	r12 = r7 & 0xFF;  /* 0C08EA02 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C08EA06u, 2);  /* 0C08EA04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA06 add #imm,Rn */
	IF(0x0C08EA08u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA0Au, 2);  /* 0C08EA08 mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C08EA0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08EA0Eu, 2);  /* 0C08EA0C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08EA10u, 1);  /* 0C08EA0E mov.l @Rm,Rn */
L_0C08EA10: BLKS(0x0C08EA10u);
	r9 = 0xC0BECB0u; UPD(0x0C08EA12u, 1);  /* 0C08EA10 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08EA14u, 1);  /* 0C08EA12 mov.l @(disp,Rm),Rn */
	IF(0x0C08EA14u); { u32 t_ = r9; PR = 0x0C08EA18u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08EA18u); }  /* 0C08EA14 jsr @Rn */
L_0C08EA18: BLKS(0x0C08EA18u);
	r4 = r11;  /* 0C08EA18 mov Rm,Rn */
	r11 = 0xC0A8D30u; UPD(0x0C08EA1Cu, 2);  /* 0C08EA1A mov.l @(disp,pc),Rn */
	IF(0x0C08EA1Cu); { u32 t_ = r11; PR = 0x0C08EA20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08EA20u); }  /* 0C08EA1C jsr @Rn */
L_0C08EA20: BLKS(0x0C08EA20u);
	IF(0x0C08EA20u); T = (s32)r0 >= 0;  /* 0C08EA20 cmp/pz Rn */
	if (!T) { UPD(0x0C08E9E4u, 4); goto L_0C08E9E4; }  /* 0C08EA22 bf */
L_0C08EA24: BLKS(0x0C08EA24u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08EA26u, 1);  /* 0C08EA24 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08EA26 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C08E9DEu, 4); goto L_0C08E9DE; }  /* 0C08EA28 bra */
L_0C08EA30: BLKS(0x0C08EA30u);
	r3 = 0xB4u; UPD(0x0C08EA32u, 1);  /* 0C08EA30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA32 add #imm,Rn */
	IF(0x0C08EA34u); MACL = r11 * r3;  /* 0C08EA34 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08EA38u, 4);  /* 0C08EA36 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08EA3Au, 1);  /* 0C08EA38 mov.w @(disp,pc),Rn */
	IF(0x0C08EA3Au); r8 = MACL;  /* 0C08EA3A sts macl,Rn */
	r8 += r2;  /* 0C08EA3C add Rm,Rn */
	IF(0x0C08EA3Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA40u, 3);  /* 0C08EA3E mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08EA40 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08EA44u, 2);  /* 0C08EA42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA44 add #imm,Rn */
	IF(0x0C08EA46u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA48u, 2);  /* 0C08EA46 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08EA48 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08EA4Cu, 2);  /* 0C08EA4A mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C08EA4C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08EA10u, 4); goto L_0C08EA10; }  /* 0C08EA4E bra */
L_0C08EA90: BLKS(0x0C08EA90u);
	r8 = 0xB4u; UPD(0x0C08EA92u, 1);  /* 0C08EA90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA92 add #imm,Rn */
	IF(0x0C08EA94u); MACL = r11 * r8;  /* 0C08EA94 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08EA98u, 4);  /* 0C08EA96 mov.l @(disp,pc),Rn */
	IF(0x0C08EA98u); r8 = MACL;  /* 0C08EA98 sts macl,Rn */
	r8 += r0;  /* 0C08EA9A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08EA9Eu, 3);  /* 0C08EA9C mov.w @(disp,pc),Rn */
	IF(0x0C08EA9Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EAA0u, 1);  /* 0C08EA9E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08EAA0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08EAA4u, 2);  /* 0C08EAA2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EAA4 add #imm,Rn */
	IF(0x0C08EAA6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EAA8u, 2);  /* 0C08EAA6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08EAA8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C08EAAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08EAAEu, 3);  /* 0C08EAAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E920u, 3); goto L_0C08E920; }  /* 0C08EAAE bra */
}

void blk_f_0C08EAC0(sh3_t *c)
{
	LOCALS;
	goto L_0C08EAC0;
L_0C08E820: BLKS(0x0C08E820u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E822u, 1);  /* 0C08E820 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E824u, 1);  /* 0C08E822 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E826u, 1);  /* 0C08E824 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E828u, 1);  /* 0C08E826 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08E82Au, 1);  /* 0C08E828 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08E82A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08E82Eu, 2);  /* 0C08E82C mov.l Rm,@-Rn */
	IF(0x0C08E82Eu); MACL = r11 * r3;  /* 0C08E82E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E832u, 3);  /* 0C08E830 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08E834u, 1);  /* 0C08E832 mov.l @(disp,pc),Rn */
	IF(0x0C08E834u); r2 = MACL;  /* 0C08E834 sts macl,Rn */
	IF(0x0C08E836u); r15 -= 4; W32(r15, PR); UPD(0x0C08E838u, 2);  /* 0C08E836 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08E838 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08E83Cu, 2);  /* 0C08E83A mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C08E83C mov #imm,Rn */
	T = r2 > r0;  /* 0C08E83E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E8A0u, 5); goto L_0C08E8A0; } goto L_0C08E844; }  /* 0C08E840 bt/s */
L_0C08E844: BLKS(0x0C08E844u);
	r0 = 0xC08E854u;  /* 0C08E844 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E846 add Rm,Rn */
	IF(0x0C08E848u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E84Au, 4);  /* 0C08E848 mov.w @(r0,Rm),Rn */
	IF(0x0C08E84Au); { u32 tv_ = (r4 + 0x0C08E84Eu); u32 t_ = PHYS(tv_); IF(0x0C08E84Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E880u: goto L_0C08E880; case 0x0C08E8A0u: goto L_0C08E8A0; case 0x0C08E8C0u: goto L_0C08E8C0; case 0x0C08E8F0u: goto L_0C08E8F0; case 0x0C08E900u: goto L_0C08E900; case 0x0C08E930u: goto L_0C08E930; case 0x0C08E9A0u: goto L_0C08E9A0; case 0x0C08E9F0u: goto L_0C08E9F0; case 0x0C08EA30u: goto L_0C08EA30; case 0x0C08EA90u: goto L_0C08EA90; default: JUMPD(tv_); } }  /* 0C08E84A braf Rn */
L_0C08E880: BLKS(0x0C08E880u);
	r5 = 0xC1A82FCu; UPD(0x0C08E882u, 1);  /* 0C08E880 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08E882 mov Rm,Rn */
	UPD(0x0C08E884u, 1);
L_0C08E884: BLKS(0x0C08E884u);
	r2 = 0xC0A9D90u; UPD(0x0C08E886u, 1);  /* 0C08E884 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08E886 mov Rm,Rn */
	IF(0x0C08E888u); PR = R32(r15); r15 += 4; UPD(0x0C08E88Au, 2);  /* 0C08E888 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E88Cu, 1);  /* 0C08E88A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E88Eu, 1);  /* 0C08E88C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E890u, 1);  /* 0C08E88E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E892u, 1);  /* 0C08E890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E894u, 1);  /* 0C08E892 mov.l @Rm+,Rn */
	IF(0x0C08E894u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08E894 jmp @Rn */
L_0C08E8A0: BLKS(0x0C08E8A0u);
	r15 = r14;  /* 0C08E8A0 mov Rm,Rn */
	IF(0x0C08E8A2u); PR = R32(r15); r15 += 4; UPD(0x0C08E8A4u, 2);  /* 0C08E8A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E8A6u, 1);  /* 0C08E8A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E8A8u, 1);  /* 0C08E8A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E8AAu, 1);  /* 0C08E8A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E8ACu, 1);  /* 0C08E8AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E8AEu, 1);  /* 0C08E8AC mov.l @Rm+,Rn */
	IF(0x0C08E8AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E8AE rts */
L_0C08E8C0: BLKS(0x0C08E8C0u);
	r0 = 0xB4u; UPD(0x0C08E8C2u, 1);  /* 0C08E8C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E8C2 add #imm,Rn */
	IF(0x0C08E8C4u); MACL = r11 * r0;  /* 0C08E8C4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C08E8C8u, 4);  /* 0C08E8C6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08E8C8 mov #imm,Rn */
	IF(0x0C08E8CAu); r9 = MACL;  /* 0C08E8CA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E8CEu, 3);  /* 0C08E8CC mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C08E8CE add Rm,Rn */
	IF(0x0C08E8D0u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08E8D2u, 2);  /* 0C08E8D0 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C08E8D2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C08E8D6u, 2);  /* 0C08E8D4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E8D6 add #imm,Rn */
	IF(0x0C08E8D8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08E8DAu, 2);  /* 0C08E8D8 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BECB0u; UPD(0x0C08E8DCu, 1);  /* 0C08E8DA mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08E8DC extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E8E0u, 2);  /* 0C08E8DE mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C08E8E2u, 1);  /* 0C08E8E0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08E8E4u, 1);  /* 0C08E8E2 mov.l @(disp,Rm),Rn */
	IF(0x0C08E8E4u); { u32 t_ = r8; PR = 0x0C08E8E8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E8E8u); }  /* 0C08E8E4 jsr @Rn */
L_0C08E8E8: BLKS(0x0C08E8E8u);
	r5 = 0x0u;  /* 0C08E8E8 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C08E8ECu, 2);  /* 0C08E8EA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08E8A0u, 3); goto L_0C08E8A0; }  /* 0C08E8EC bra */
L_0C08E8F0: BLKS(0x0C08E8F0u);
	r5 = 0xC1A83CAu; UPD(0x0C08E8F2u, 1);  /* 0C08E8F0 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C08E884u, 3); goto L_0C08E884; }  /* 0C08E8F2 bra */
L_0C08E900: BLKS(0x0C08E900u);
	r8 = 0xB4u; UPD(0x0C08E902u, 1);  /* 0C08E900 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E902 add #imm,Rn */
	IF(0x0C08E904u); MACL = r11 * r8;  /* 0C08E904 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08E908u, 4);  /* 0C08E906 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08E908 mov #imm,Rn */
	IF(0x0C08E90Au); r8 = MACL;  /* 0C08E90A sts macl,Rn */
	r8 += r0;  /* 0C08E90C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E910u, 4);  /* 0C08E90E mov.w @(disp,pc),Rn */
	IF(0x0C08E910u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E912u, 1);  /* 0C08E910 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C08E912 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08E916u, 2);  /* 0C08E914 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E916 add #imm,Rn */
	IF(0x0C08E918u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E91Au, 2);  /* 0C08E918 mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08E91A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E91Eu, 2);  /* 0C08E91C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E920u, 1);  /* 0C08E91E mov.l @Rm,Rn */
L_0C08E920: BLKS(0x0C08E920u);
	r10 = 0xC0BECB0u; UPD(0x0C08E922u, 1);  /* 0C08E920 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E924u, 1);  /* 0C08E922 mov.l @(disp,Rm),Rn */
	IF(0x0C08E924u); { u32 t_ = r10; PR = 0x0C08E928u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E928u); }  /* 0C08E924 jsr @Rn */
L_0C08E928: BLKS(0x0C08E928u);
	r15 += 0x8u;  /* 0C08E928 add #imm,Rn */
	UPD(0x0C08E92Au, 1);
L_0C08E92A: BLKS(0x0C08E92Au);
	r2 = 0x0u;  /* 0C08E92A mov #imm,Rn */
	UPD(0x0C08E92Cu, 1);
L_0C08E92C: BLKS(0x0C08E92Cu);
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08E8A0u, 3); goto L_0C08E8A0; }  /* 0C08E92C bra */
L_0C08E930: BLKS(0x0C08E930u);
	r12 = 0xB4u; UPD(0x0C08E932u, 1);  /* 0C08E930 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E932 add #imm,Rn */
	IF(0x0C08E934u); MACL = r11 * r12;  /* 0C08E934 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08E938u, 4);  /* 0C08E936 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C08E938 mov #imm,Rn */
	IF(0x0C08E93Au); r12 = MACL;  /* 0C08E93A sts macl,Rn */
	r12 += r7;  /* 0C08E93C add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08E940u, 4);  /* 0C08E93E mov.l @(disp,Rm),Rn */
	r9 = 0xFFE00000u; UPD(0x0C08E942u, 1);  /* 0C08E940 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08E942 add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C08E946u, 2);  /* 0C08E944 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C08E946 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08E94Au, 2);  /* 0C08E948 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C08E94A extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08E94Eu, 2);  /* 0C08E94C mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08E950u, 1);  /* 0C08E94E mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08E950 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E954u, 2);  /* 0C08E952 mov.b @Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C08E954 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C08E958u, 2);  /* 0C08E956 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0BD6F0u; UPD(0x0C08E95Au, 1);  /* 0C08E958 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C08E95Cu, 1);  /* 0C08E95A mov.l @(disp,Rm),Rn */
	IF(0x0C08E95Cu); { u32 t_ = r10; PR = 0x0C08E960u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08E960u); }  /* 0C08E95C jsr @Rn */
L_0C08E960: BLKS(0x0C08E960u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08E962u, 1);  /* 0C08E960 mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08E964u, 1);  /* 0C08E962 mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08E964 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E968u, 2);  /* 0C08E966 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E96Au, 1);  /* 0C08E968 mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C08E96A mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C08E96C extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08E970u, 3);  /* 0C08E96E mov.l Rm,@(disp,Rn) */
	r0 = 0x200000u; UPD(0x0C08E972u, 1);  /* 0C08E970 mov.l @(disp,pc),Rn */
	r9 = 0xC0A8D30u; UPD(0x0C08E974u, 1);  /* 0C08E972 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C08E974 add Rm,Rn */
	r4 = R32(r12); UPD(0x0C08E978u, 2);  /* 0C08E976 mov.l @Rm,Rn */
	IF(0x0C08E978u); { u32 t_ = r10; PR = 0x0C08E97Cu; r6 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08E97Cu); }  /* 0C08E978 jsr @Rn */
L_0C08E97C: BLKS(0x0C08E97Cu);
	r15 += 0x8u;  /* 0C08E97C add #imm,Rn */
	IF(0x0C08E97Eu); { u32 t_ = r9; PR = 0x0C08E982u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E982u); }  /* 0C08E97E jsr @Rn */
L_0C08E982: BLKS(0x0C08E982u);
	IF(0x0C08E982u); T = (s32)r0 >= 0;  /* 0C08E982 cmp/pz Rn */
	if (!T) { UPD(0x0C08E996u, 4); goto L_0C08E996; }  /* 0C08E984 bf */
L_0C08E986: BLKS(0x0C08E986u);
	r5 = r0;  /* 0C08E986 mov Rm,Rn */
	r4 = 0xFFFE0000u; UPD(0x0C08E98Au, 2);  /* 0C08E988 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x2Cu); UPD(0x0C08E98Cu, 1);  /* 0C08E98A mov.l @(disp,Rm),Rn */
	r11 = 0xC07DE60u; UPD(0x0C08E98Eu, 1);  /* 0C08E98C mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C08E98E add Rm,Rn */
	r4 = 0x8u;  /* 0C08E990 mov #imm,Rn */
	IF(0x0C08E992u); { u32 t_ = r11; PR = 0x0C08E996u; r7 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08E996u); }  /* 0C08E992 jsr @Rn */
L_0C08E996: BLKS(0x0C08E996u);
	r5 = 0x0u;  /* 0C08E996 mov #imm,Rn */
	{ W32(r12, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C08E8A0u, 4); goto L_0C08E8A0; }  /* 0C08E998 bra */
L_0C08E9A0: BLKS(0x0C08E9A0u);
	r2 = 0xB4u; UPD(0x0C08E9A2u, 1);  /* 0C08E9A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E9A2 add #imm,Rn */
	IF(0x0C08E9A4u); MACL = r11 * r2;  /* 0C08E9A4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08E9A8u, 4);  /* 0C08E9A6 mov.l @(disp,pc),Rn */
	IF(0x0C08E9A8u); r8 = MACL;  /* 0C08E9A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08E9ACu, 2);  /* 0C08E9AA mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08E9AC add Rm,Rn */
	IF(0x0C08E9AEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9B0u, 2);  /* 0C08E9AE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08E9B0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E9B4u, 2);  /* 0C08E9B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E9B4 add #imm,Rn */
	IF(0x0C08E9B6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9B8u, 2);  /* 0C08E9B6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08E9B8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C08E9BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08E9BEu, 3);  /* 0C08E9BC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C08E9C0u, 1);  /* 0C08E9BE mov.l @(disp,pc),Rn */
	r9 = 0xC0A8D30u; UPD(0x0C08E9C2u, 1);  /* 0C08E9C0 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08E9C4u, 1);  /* 0C08E9C2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E9C6u, 1);  /* 0C08E9C4 mov.l @(disp,Rm),Rn */
	IF(0x0C08E9C6u); { u32 t_ = r12; PR = 0x0C08E9CAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08E9CAu); }  /* 0C08E9C6 jsr @Rn */
L_0C08E9CA: BLKS(0x0C08E9CAu);
	r15 += 0x8u;  /* 0C08E9CA add #imm,Rn */
	IF(0x0C08E9CCu); { u32 t_ = r9; PR = 0x0C08E9D0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08E9D0u); }  /* 0C08E9CC jsr @Rn */
L_0C08E9D0: BLKS(0x0C08E9D0u);
	IF(0x0C08E9D0u); T = (s32)r0 >= 0;  /* 0C08E9D0 cmp/pz Rn */
	if (!T) { UPD(0x0C08E92Au, 4); goto L_0C08E92A; }  /* 0C08E9D2 bf */
L_0C08E9D4: BLKS(0x0C08E9D4u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08E9D6u, 1);  /* 0C08E9D4 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08E9D6 mov #imm,Rn */
	r11 = 0xFFFE0000u; UPD(0x0C08E9DAu, 2);  /* 0C08E9D8 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C08E9DA mov Rm,Rn */
	r6 += r11;  /* 0C08E9DC add Rm,Rn */
	UPD(0x0C08E9DEu, 2);
L_0C08E9DE: BLKS(0x0C08E9DEu);
	r12 = 0xC07DE60u; UPD(0x0C08E9E0u, 1);  /* 0C08E9DE mov.l @(disp,pc),Rn */
	IF(0x0C08E9E0u); { u32 t_ = r12; PR = 0x0C08E9E4u; r7 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08E9E4u); }  /* 0C08E9E0 jsr @Rn */
L_0C08E9E4: BLKS(0x0C08E9E4u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08E92Cu, 3); goto L_0C08E92C; }  /* 0C08E9E4 bra */
L_0C08E9F0: BLKS(0x0C08E9F0u);
	r8 = 0xB4u; UPD(0x0C08E9F2u, 1);  /* 0C08E9F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E9F2 add #imm,Rn */
	IF(0x0C08E9F4u); MACL = r11 * r8;  /* 0C08E9F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08E9F8u, 4);  /* 0C08E9F6 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C08E9F8 mov #imm,Rn */
	IF(0x0C08E9FAu); r8 = MACL;  /* 0C08E9FA sts macl,Rn */
	r8 += r0;  /* 0C08E9FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08EA00u, 4);  /* 0C08E9FE mov.w @(disp,pc),Rn */
	IF(0x0C08EA00u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA02u, 1);  /* 0C08EA00 mov.b @(r0,Rm),Rn */
	r12 = r7 & 0xFF;  /* 0C08EA02 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C08EA06u, 2);  /* 0C08EA04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA06 add #imm,Rn */
	IF(0x0C08EA08u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA0Au, 2);  /* 0C08EA08 mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C08EA0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08EA0Eu, 2);  /* 0C08EA0C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08EA10u, 1);  /* 0C08EA0E mov.l @Rm,Rn */
L_0C08EA10: BLKS(0x0C08EA10u);
	r9 = 0xC0BECB0u; UPD(0x0C08EA12u, 1);  /* 0C08EA10 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08EA14u, 1);  /* 0C08EA12 mov.l @(disp,Rm),Rn */
	IF(0x0C08EA14u); { u32 t_ = r9; PR = 0x0C08EA18u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08EA18u); }  /* 0C08EA14 jsr @Rn */
L_0C08EA18: BLKS(0x0C08EA18u);
	r4 = r11;  /* 0C08EA18 mov Rm,Rn */
	r11 = 0xC0A8D30u; UPD(0x0C08EA1Cu, 2);  /* 0C08EA1A mov.l @(disp,pc),Rn */
	IF(0x0C08EA1Cu); { u32 t_ = r11; PR = 0x0C08EA20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08EA20u); }  /* 0C08EA1C jsr @Rn */
L_0C08EA20: BLKS(0x0C08EA20u);
	IF(0x0C08EA20u); T = (s32)r0 >= 0;  /* 0C08EA20 cmp/pz Rn */
	if (!T) { UPD(0x0C08E9E4u, 4); goto L_0C08E9E4; }  /* 0C08EA22 bf */
L_0C08EA24: BLKS(0x0C08EA24u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08EA26u, 1);  /* 0C08EA24 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08EA26 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C08E9DEu, 4); goto L_0C08E9DE; }  /* 0C08EA28 bra */
L_0C08EA30: BLKS(0x0C08EA30u);
	r3 = 0xB4u; UPD(0x0C08EA32u, 1);  /* 0C08EA30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA32 add #imm,Rn */
	IF(0x0C08EA34u); MACL = r11 * r3;  /* 0C08EA34 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08EA38u, 4);  /* 0C08EA36 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08EA3Au, 1);  /* 0C08EA38 mov.w @(disp,pc),Rn */
	IF(0x0C08EA3Au); r8 = MACL;  /* 0C08EA3A sts macl,Rn */
	r8 += r2;  /* 0C08EA3C add Rm,Rn */
	IF(0x0C08EA3Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA40u, 3);  /* 0C08EA3E mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08EA40 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08EA44u, 2);  /* 0C08EA42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA44 add #imm,Rn */
	IF(0x0C08EA46u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA48u, 2);  /* 0C08EA46 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08EA48 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08EA4Cu, 2);  /* 0C08EA4A mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C08EA4C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08EA10u, 4); goto L_0C08EA10; }  /* 0C08EA4E bra */
L_0C08EA90: BLKS(0x0C08EA90u);
	r8 = 0xB4u; UPD(0x0C08EA92u, 1);  /* 0C08EA90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA92 add #imm,Rn */
	IF(0x0C08EA94u); MACL = r11 * r8;  /* 0C08EA94 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08EA98u, 4);  /* 0C08EA96 mov.l @(disp,pc),Rn */
	IF(0x0C08EA98u); r8 = MACL;  /* 0C08EA98 sts macl,Rn */
	r8 += r0;  /* 0C08EA9A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08EA9Eu, 3);  /* 0C08EA9C mov.w @(disp,pc),Rn */
	IF(0x0C08EA9Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EAA0u, 1);  /* 0C08EA9E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08EAA0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08EAA4u, 2);  /* 0C08EAA2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EAA4 add #imm,Rn */
	IF(0x0C08EAA6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EAA8u, 2);  /* 0C08EAA6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08EAA8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C08EAAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08EAAEu, 3);  /* 0C08EAAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E920u, 3); goto L_0C08E920; }  /* 0C08EAAE bra */
L_0C08EAC0: BLKS(0x0C08EAC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAC2u, 1);  /* 0C08EAC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAC4u, 1);  /* 0C08EAC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAC6u, 1);  /* 0C08EAC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAC8u, 1);  /* 0C08EAC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08EACAu, 1);  /* 0C08EAC8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08EACCu, 1);  /* 0C08EACA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08EACC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAD0u, 2);  /* 0C08EACE mov.l Rm,@-Rn */
	IF(0x0C08EAD0u); MACL = r12 * r3;  /* 0C08EAD0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08EAD4u, 3);  /* 0C08EAD2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08EAD6u, 1);  /* 0C08EAD4 mov.l @(disp,pc),Rn */
	IF(0x0C08EAD6u); r2 = MACL;  /* 0C08EAD6 sts macl,Rn */
	IF(0x0C08EAD8u); r15 -= 4; W32(r15, PR); UPD(0x0C08EADAu, 2);  /* 0C08EAD8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08EADA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08EADEu, 2);  /* 0C08EADC mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C08EADE mov #imm,Rn */
	T = r2 > r0;  /* 0C08EAE0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08EB6Cu, 5); goto L_0C08EB6C; } goto L_0C08EAE6; }  /* 0C08EAE2 bt/s */
L_0C08EAE6: BLKS(0x0C08EAE6u);
	r0 = 0xC08EAF8u;  /* 0C08EAE6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08EAE8 add Rm,Rn */
	IF(0x0C08EAEAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08EAECu, 4);  /* 0C08EAEA mov.w @(r0,Rm),Rn */
	IF(0x0C08EAECu); { u32 tv_ = (r4 + 0x0C08EAF0u); u32 t_ = PHYS(tv_); IF(0x0C08EAEEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08EB20u: goto L_0C08EB20; case 0x0C08EC20u: goto L_0C08EC20; case 0x0C08ECE0u: goto L_0C08ECE0; case 0x0C08ED70u: goto L_0C08ED70; case 0x0C08EE40u: goto L_0C08EE40; case 0x0C08EEE0u: goto L_0C08EEE0; case 0x0C08EF20u: goto L_0C08EF20; case 0x0C08EF30u: goto L_0C08EF30; case 0x0C08EF40u: goto L_0C08EF40; case 0x0C08EF50u: goto L_0C08EF50; default: JUMPD(tv_); } }  /* 0C08EAEC braf Rn */
L_0C08EB20: BLKS(0x0C08EB20u);
	r8 = 0xC0A9CB0u; UPD(0x0C08EB22u, 1);  /* 0C08EB20 mov.l @(disp,pc),Rn */
	IF(0x0C08EB22u); { u32 t_ = r8; PR = 0x0C08EB26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08EB26u); }  /* 0C08EB22 jsr @Rn */
L_0C08EB26: BLKS(0x0C08EB26u);
	r7 = 0xB4u; UPD(0x0C08EB28u, 1);  /* 0C08EB26 mov.w @(disp,pc),Rn */
	IF(0x0C08EB28u); MACL = r12 * r7;  /* 0C08EB28 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08EB2Cu, 3);  /* 0C08EB2A mov.l @(disp,pc),Rn */
	IF(0x0C08EB2Cu); r8 = MACL;  /* 0C08EB2C sts macl,Rn */
	r8 += r6;  /* 0C08EB2E add Rm,Rn */
	r8 += 0x3Cu;  /* 0C08EB30 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C08EB34u, 4);  /* 0C08EB32 mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08EB34 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08EBA0u, 4); goto L_0C08EBA0; } goto L_0C08EB3A; }  /* 0C08EB36 bf/s */
L_0C08EB3A: BLKS(0x0C08EB3Au);
	r9 = R32(r8 + 0x2Cu); UPD(0x0C08EB3Cu, 2);  /* 0C08EB3A mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C08EB3Eu, 1);  /* 0C08EB3C mov.w @(disp,pc),Rn */
	IF(0x0C08EB3Eu); MACL = r9 * r6;  /* 0C08EB3E mul.l Rm,Rn */
	IF(0x0C08EB40u); r2 = MACL;  /* 0C08EB40 sts macl,Rn */
	IF(0x0C08EB42u); T = (s32)r2 >= 0;  /* 0C08EB42 cmp/pz Rn */
	if (!T) { UPD(0x0C08EB90u, 7); goto L_0C08EB90; }  /* 0C08EB44 bf */
L_0C08EB46: BLKS(0x0C08EB46u);
	r11 = R32(r8 + 0x30u); UPD(0x0C08EB48u, 1);  /* 0C08EB46 mov.l @(disp,Rm),Rn */
	r3 = r2;  /* 0C08EB48 mov Rm,Rn */
	r7 = 0xFFFFFFF8u;  /* 0C08EB4A mov #imm,Rn */
	IF(0x0C08EB4Cu); MACL = r11 * r6;  /* 0C08EB4C mul.l Rm,Rn */
	IF(0x0C08EB4Eu); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C08EB4E shad Rm,Rn */
	IF(0x0C08EB50u); r2 = MACL;  /* 0C08EB50 sts macl,Rn */
	IF(0x0C08EB52u); T = (s32)r2 >= 0;  /* 0C08EB52 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08EB80u, 10); goto L_0C08EB80; } UPD(0x0C08EB58u, 1); goto L_0C08EB58; }  /* 0C08EB54 bf/s */
L_0C08EB58: BLKS(0x0C08EB58u);
	r0 = r2;  /* 0C08EB58 mov Rm,Rn */
	IF(0x0C08EB5Au); ARG0(0x407Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C08EB5A shad Rm,Rn */
	r1 = R32(r8 + 0x24u); UPD(0x0C08EB5Eu, 3);  /* 0C08EB5C mov.l @(disp,Rm),Rn */
	r13 = R32(r8 + 0x28u); UPD(0x0C08EB60u, 1);  /* 0C08EB5E mov.l @(disp,Rm),Rn */
	r1 += r3;  /* 0C08EB60 add Rm,Rn */
	r13 += r0;  /* 0C08EB62 add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C08EB66u, 3);  /* 0C08EB64 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r1); UPD(0x0C08EB68u, 1);  /* 0C08EB66 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r13); UPD(0x0C08EB6Au, 1);  /* 0C08EB68 mov.l Rm,@(disp,Rn) */
	IF(0x0C08EB6Au); ;  /* 0C08EB6A nop */
	UPD(0x0C08EB6Cu, 1);
L_0C08EB6C: BLKS(0x0C08EB6Cu);
	r15 = r14;  /* 0C08EB6C mov Rm,Rn */
	IF(0x0C08EB6Eu); PR = R32(r15); r15 += 4; UPD(0x0C08EB70u, 2);  /* 0C08EB6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EB72u, 1);  /* 0C08EB70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EB74u, 1);  /* 0C08EB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EB76u, 1);  /* 0C08EB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EB78u, 1);  /* 0C08EB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EB7Au, 1);  /* 0C08EB78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EB7Cu, 1);  /* 0C08EB7A mov.l @Rm+,Rn */
	IF(0x0C08EB7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EB7C rts */
L_0C08EB80: BLKS(0x0C08EB80u);
	r12 = 0xFFu; UPD(0x0C08EB82u, 1);  /* 0C08EB80 mov.w @(disp,pc),Rn */
	{ r2 += r12; /* slot add Rm,Rn */ UPD(0x0C08EB58u, 3); goto L_0C08EB58; }  /* 0C08EB82 bra */
L_0C08EB90: BLKS(0x0C08EB90u);
	r10 = 0xFFu; UPD(0x0C08EB92u, 1);  /* 0C08EB90 mov.w @(disp,pc),Rn */
	{ r2 += r10; /* slot add Rm,Rn */ UPD(0x0C08EB46u, 3); goto L_0C08EB46; }  /* 0C08EB92 bra */
L_0C08EBA0: BLKS(0x0C08EBA0u);
	r2 = 0xC0A9B40u; UPD(0x0C08EBA2u, 1);  /* 0C08EBA0 mov.l @(disp,pc),Rn */
	IF(0x0C08EBA2u); { u32 t_ = r2; PR = 0x0C08EBA6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08EBA6u); }  /* 0C08EBA2 jsr @Rn */
L_0C08EBA6: BLKS(0x0C08EBA6u);
	r2 = 0x99u; UPD(0x0C08EBA8u, 1);  /* 0C08EBA6 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08EBA8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EBACu, 2);  /* 0C08EBAA mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C08EBAC add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C08EBAE extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08EBB0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08EB6Cu, 6); goto L_0C08EB6C; } UPD(0x0C08EBB6u, 1); goto L_0C08EBB6; }  /* 0C08EBB2 bf/s */
L_0C08EBB6: BLKS(0x0C08EBB6u);
	r4 = 0x0u;  /* 0C08EBB6 mov #imm,Rn */
	r13 = 0xA9u; UPD(0x0C08EBBAu, 2);  /* 0C08EBB8 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08EBBA mov #imm,Rn */
	W8(r2, r4); UPD(0x0C08EBBEu, 2);  /* 0C08EBBC mov.b Rm,@Rn */
	r10 = r8;  /* 0C08EBBE mov Rm,Rn */
	r12 = 0x0u;  /* 0C08EBC0 mov #imm,Rn */
	r13 += r8;  /* 0C08EBC2 add Rm,Rn */
	UPD(0x0C08EBC4u, 3);
L_0C08EBC4: BLKS(0x0C08EBC4u);
	r3 = 0xC1A842Cu; UPD(0x0C08EBC6u, 1);  /* 0C08EBC4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08EBC6 add #imm,Rn */
	r3 += r12;  /* 0C08EBC8 add Rm,Rn */
	r8 = R32(r3); UPD(0x0C08EBCCu, 3);  /* 0C08EBCA mov.l @Rm,Rn */
	r12 += 0x8u;  /* 0C08EBCC add #imm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C08EBD0u, 2);  /* 0C08EBCE mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08EBD2u, 1);  /* 0C08EBD0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08EBD2 add Rm,Rn */
	IF(0x0C08EBD4u); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08EBD6u, 2);  /* 0C08EBD4 mov.b @(r0,Rm),Rn */
	r7 = R32(r3 + 0x4u); UPD(0x0C08EBD8u, 1);  /* 0C08EBD6 mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08EBD8 extu.b Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C08EBDCu, 2);  /* 0C08EBDA mov.l @(disp,Rm),Rn */
	W32(r15, r5); UPD(0x0C08EBDEu, 1);  /* 0C08EBDC mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C08EBE0u, 1);  /* 0C08EBDE mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C08EBE0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08EBE4u, 2);  /* 0C08EBE2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C08EBE6u, 1);  /* 0C08EBE4 mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C08EBE8u, 1);  /* 0C08EBE6 mov.l @(disp,pc),Rn */
	IF(0x0C08EBE8u); { u32 t_ = r0; PR = 0x0C08EBECu; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08EBECu); }  /* 0C08EBE8 jsr @Rn */
L_0C08EBEC: BLKS(0x0C08EBECu);
	r1 = 0u - r0;  /* 0C08EBEC neg Rm,Rn */
	r0 = r11;  /* 0C08EBEE mov Rm,Rn */
	W32(r15 + 0x8u, r1); UPD(0x0C08EBF2u, 3);  /* 0C08EBF0 mov.l Rm,@(disp,Rn) */
	r0 &= 0x1u;  /* 0C08EBF2 and #imm,r0 */
	r2 = 0xC1A845Cu; UPD(0x0C08EBF6u, 2);  /* 0C08EBF4 mov.l @(disp,pc),Rn */
	IF(0x0C08EBF6u); r0 <<= 2;  /* 0C08EBF6 shll2 Rn */
	IF(0x0C08EBF8u); r3 = R32(r0 + r2); UPD(0x0C08EBFAu, 2);  /* 0C08EBF8 mov.l @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C08EBFA mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C08EBFEu, 2);  /* 0C08EBFC mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C08EBFE mov Rm,Rn */
	W32(r15 + 0x10u, r7); UPD(0x0C08EC02u, 2);  /* 0C08EC00 mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C08EC02 mov Rm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C08EC06u, 2);  /* 0C08EC04 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C08EC08u, 1);  /* 0C08EC06 mov.l Rm,@(disp,Rn) */
	IF(0x0C08EC08u); { u32 t_ = r8; PR = 0x0C08EC0Cu; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08EC0Cu); }  /* 0C08EC08 jsr @Rn */
L_0C08EC0C: BLKS(0x0C08EC0Cu);
	r6 = r11;  /* 0C08EC0C mov Rm,Rn */
	r6 += 0x1u;  /* 0C08EC0E add #imm,Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C08EC10 exts.w Rm,Rn */
	r5 = 0x5u;  /* 0C08EC12 mov #imm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C08EC14 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08EBC4u, 8); goto L_0C08EBC4; } UPD(0x0C08EC1Au, 1); goto L_0C08EC1A; }  /* 0C08EC16 bf/s */
L_0C08EC1A: BLKS(0x0C08EC1Au);
	{ IF(0x0C08EC1Cu); ; /* slot nop */ UPD(0x0C08EB6Cu, 3); goto L_0C08EB6C; }  /* 0C08EC1A bra */
L_0C08EC20: BLKS(0x0C08EC20u);
	r9 = 0xC0A8CA0u; UPD(0x0C08EC22u, 1);  /* 0C08EC20 mov.l @(disp,pc),Rn */
	IF(0x0C08EC22u); { u32 t_ = r9; PR = 0x0C08EC26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08EC26u); }  /* 0C08EC22 jsr @Rn */
L_0C08EC26: BLKS(0x0C08EC26u);
	IF(0x0C08EC26u); T = (s32)r0 >= 0;  /* 0C08EC26 cmp/pz Rn */
	if (!T) { UPD(0x0C08EC90u, 4); goto L_0C08EC90; }  /* 0C08EC28 bf */
L_0C08EC2A: BLKS(0x0C08EC2Au);
	r9 = 0xB4u; UPD(0x0C08EC2Cu, 1);  /* 0C08EC2A mov.w @(disp,pc),Rn */
	IF(0x0C08EC2Cu); MACL = r12 * r9;  /* 0C08EC2C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08EC30u, 3);  /* 0C08EC2E mov.l @(disp,pc),Rn */
	IF(0x0C08EC30u); r6 = MACL;  /* 0C08EC30 sts macl,Rn */
	IF(0x0C08EC32u); MACL = r0 * r9;  /* 0C08EC32 mul.l Rm,Rn */
	r6 += r8;  /* 0C08EC34 add Rm,Rn */
	r13 = R32(r6); UPD(0x0C08EC38u, 5);  /* 0C08EC36 mov.l @Rm,Rn */
	IF(0x0C08EC38u); r11 = MACL;  /* 0C08EC38 sts macl,Rn */
	r11 += r8;  /* 0C08EC3A add Rm,Rn */
	r0 = R32(r11); UPD(0x0C08EC3Eu, 3);  /* 0C08EC3C mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08EC40u, 1);  /* 0C08EC3E mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C08EC42u, 1);  /* 0C08EC40 mov.w @(disp,pc),Rn */
	r13 &= r2;  /* 0C08EC42 and Rm,Rn */
	r7 = R32(r11 + 0x24u); UPD(0x0C08EC46u, 2);  /* 0C08EC44 mov.l @(disp,Rm),Rn */
	r0 &= r1;  /* 0C08EC46 and Rm,Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C08EC4Au, 2);  /* 0C08EC48 mov.l @(disp,Rm),Rn */
	r13 |= r0;  /* 0C08EC4A or Rm,Rn */
	r3 = R32(r6 + 0x2Cu); UPD(0x0C08EC4Eu, 2);  /* 0C08EC4C mov.l @(disp,Rm),Rn */
	r11 += 0x3Cu;  /* 0C08EC4E add #imm,Rn */
	r5 = R32(r6 + 0x30u); UPD(0x0C08EC52u, 2);  /* 0C08EC50 mov.l @(disp,Rm),Rn */
	r7 += r3;  /* 0C08EC52 add Rm,Rn */
	r4 += r5;  /* 0C08EC54 add Rm,Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C08EC58u, 3);  /* 0C08EC56 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r4); UPD(0x0C08EC5Au, 1);  /* 0C08EC58 mov.l Rm,@(disp,Rn) */
	W32(r6, r13); UPD(0x0C08EC5Cu, 1);  /* 0C08EC5A mov.l Rm,@Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C08EC5Eu, 1);  /* 0C08EC5C mov.w @Rm,Rn */
	r6 += 0x3Cu;  /* 0C08EC5E add #imm,Rn */
	W16(r6, r10); UPD(0x0C08EC62u, 2);  /* 0C08EC60 mov.w Rm,@Rn */
	T = (r10 & r10) == 0;  /* 0C08EC62 tst Rm,Rn */
	{ u32 c_ = T; r6 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08EC1Au, 4); goto L_0C08EC1A; } goto L_0C08EC68; }  /* 0C08EC64 bt/s */
L_0C08EC68: BLKS(0x0C08EC68u);
	r10 = 0x9Bu; UPD(0x0C08EC6Au, 2);  /* 0C08EC68 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C08EC6A mov Rm,Rn */
	r10 += r6;  /* 0C08EC6C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C08EC70u, 3);  /* 0C08EC6E mov.b @Rm,Rn */
	r11 = r0;  /* 0C08EC70 mov Rm,Rn */
	r11 += 0x1u;  /* 0C08EC72 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08EC74 and #imm,r0 */
	W8(r10, r11); UPD(0x0C08EC78u, 4);  /* 0C08EC76 mov.b Rm,@Rn */
	W32(r6 + 0xCu, r0); UPD(0x0C08EC7Au, 1);  /* 0C08EC78 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08EC7Cu, 1);  /* 0C08EC7A mov.l @(disp,pc),Rn */
L_0C08EC7C: BLKS(0x0C08EC7Cu);
	r15 = r14;  /* 0C08EC7C mov Rm,Rn */
	IF(0x0C08EC7Eu); PR = R32(r15); r15 += 4; UPD(0x0C08EC80u, 2);  /* 0C08EC7E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EC82u, 1);  /* 0C08EC80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EC84u, 1);  /* 0C08EC82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EC86u, 1);  /* 0C08EC84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EC88u, 1);  /* 0C08EC86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EC8Au, 1);  /* 0C08EC88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EC8Cu, 1);  /* 0C08EC8A mov.l @Rm+,Rn */
	IF(0x0C08EC8Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08E820u: goto L_0C08E820; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C08EC8C jmp @Rn */
L_0C08EC90: BLKS(0x0C08EC90u);
	r0 = 0xB4u; UPD(0x0C08EC92u, 1);  /* 0C08EC90 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C08EC92 mov #imm,Rn */
	IF(0x0C08EC94u); MACL = r12 * r0;  /* 0C08EC94 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C08EC98u, 4);  /* 0C08EC96 mov.l @(disp,pc),Rn */
	IF(0x0C08EC98u); r0 = MACL;  /* 0C08EC98 sts macl,Rn */
	IF(0x0C08EC9Au); W32(r0 + r12, r5); UPD(0x0C08EC9Cu, 2);  /* 0C08EC9A mov.l Rm,@(r0,Rn) */
L_0C08EC9C: BLKS(0x0C08EC9Cu);
	{ IF(0x0C08EC9Eu); ; /* slot nop */ UPD(0x0C08EB6Cu, 3); goto L_0C08EB6C; }  /* 0C08EC9C bra */
L_0C08ECE0: BLKS(0x0C08ECE0u);
	r13 = 0xC0A8CA0u; UPD(0x0C08ECE2u, 1);  /* 0C08ECE0 mov.l @(disp,pc),Rn */
	IF(0x0C08ECE2u); { u32 t_ = r13; PR = 0x0C08ECE6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08ECE6u); }  /* 0C08ECE2 jsr @Rn */
L_0C08ECE6: BLKS(0x0C08ECE6u);
	IF(0x0C08ECE6u); T = (s32)r0 >= 0;  /* 0C08ECE6 cmp/pz Rn */
	if (!T) { UPD(0x0C08EC90u, 4); goto L_0C08EC90; }  /* 0C08ECE8 bf */
L_0C08ECEA: BLKS(0x0C08ECEAu);
	r2 = 0xB4u; UPD(0x0C08ECECu, 1);  /* 0C08ECEA mov.w @(disp,pc),Rn */
	IF(0x0C08ECECu); MACL = r12 * r2;  /* 0C08ECEC mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08ECF0u, 3);  /* 0C08ECEE mov.l @(disp,pc),Rn */
	IF(0x0C08ECF0u); r8 = MACL;  /* 0C08ECF0 sts macl,Rn */
	IF(0x0C08ECF2u); MACL = r0 * r2;  /* 0C08ECF2 mul.l Rm,Rn */
	r8 += r7;  /* 0C08ECF4 add Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C08ECF8u, 5);  /* 0C08ECF6 mov.l @(disp,Rm),Rn */
	IF(0x0C08ECF8u); r9 = MACL;  /* 0C08ECF8 sts macl,Rn */
	r9 += r7;  /* 0C08ECFA add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08ECFEu, 3);  /* 0C08ECFC mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x28u); UPD(0x0C08ED00u, 1);  /* 0C08ECFE mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C08ED00 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08ED04u, 2);  /* 0C08ED02 mov.l @(disp,Rm),Rn */
	r9 += 0x3Cu;  /* 0C08ED04 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08ED08u, 2);  /* 0C08ED06 mov.w @Rm,Rn */
	r0 += r1;  /* 0C08ED08 add Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C08ED0Cu, 2);  /* 0C08ED0A mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFC4u;  /* 0C08ED0C add #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C08ED0E tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08ED50u, 5); goto L_0C08ED50; } UPD(0x0C08ED14u, 1); goto L_0C08ED14; }  /* 0C08ED10 bf/s */
L_0C08ED14: BLKS(0x0C08ED14u);
	r13 = R32(r8); UPD(0x0C08ED16u, 1);  /* 0C08ED14 mov.l @Rm,Rn */
L_0C08ED16: BLKS(0x0C08ED16u);
	r6 = R32(r9); UPD(0x0C08ED18u, 1);  /* 0C08ED16 mov.l @Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C08ED1Au, 1);  /* 0C08ED18 mov.w @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C08ED1Cu, 1);  /* 0C08ED1A mov.w @(disp,pc),Rn */
	r13 &= r4;  /* 0C08ED1C and Rm,Rn */
	r6 &= r0;  /* 0C08ED1E and Rm,Rn */
	r13 |= r6;  /* 0C08ED20 or Rm,Rn */
	W32(r8, r13); UPD(0x0C08ED24u, 4);  /* 0C08ED22 mov.l Rm,@Rn */
	r8 += 0x3Cu;  /* 0C08ED24 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C08ED28u, 2);  /* 0C08ED26 mov.w @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08ED28 tst Rm,Rn */
	if (T) { UPD(0x0C08ED40u, 4); goto L_0C08ED40; }  /* 0C08ED2A bt */
L_0C08ED2C: BLKS(0x0C08ED2Cu);
	r8 = 0xC0A8D30u; UPD(0x0C08ED2Eu, 1);  /* 0C08ED2C mov.l @(disp,pc),Rn */
	IF(0x0C08ED2Eu); { u32 t_ = r8; PR = 0x0C08ED32u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08ED32u); }  /* 0C08ED2E jsr @Rn */
L_0C08ED32: BLKS(0x0C08ED32u);
	IF(0x0C08ED32u); T = (s32)r0 >= 0;  /* 0C08ED32 cmp/pz Rn */
	UPD(0x0C08ED34u, 1);
L_0C08ED34: BLKS(0x0C08ED34u);
	if (T) { UPD(0x0C08EC9Cu, 3); goto L_0C08EC9C; }  /* 0C08ED34 bt */
L_0C08ED36: BLKS(0x0C08ED36u);
	r1 = 0xC08E820u; UPD(0x0C08ED38u, 1);  /* 0C08ED36 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08EC7Cu, 3); goto L_0C08EC7C; }  /* 0C08ED38 bra */
L_0C08ED40: BLKS(0x0C08ED40u);
	r1 = 0xC0A9CB0u; UPD(0x0C08ED42u, 1);  /* 0C08ED40 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08EC7Cu, 3); goto L_0C08EC7C; }  /* 0C08ED42 bra */
L_0C08ED50: BLKS(0x0C08ED50u);
	r10 = 0x9Bu; UPD(0x0C08ED52u, 1);  /* 0C08ED50 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C08ED52 mov Rm,Rn */
	r10 += r8;  /* 0C08ED54 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C08ED58u, 3);  /* 0C08ED56 mov.b @Rm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C08ED5Au, 1);  /* 0C08ED58 mov.l @(disp,pc),Rn */
	r11 = r0;  /* 0C08ED5A mov Rm,Rn */
	r11 += 0x1u;  /* 0C08ED5C add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08ED5E and #imm,r0 */
	W8(r10, r11); UPD(0x0C08ED62u, 4);  /* 0C08ED60 mov.b Rm,@Rn */
	IF(0x0C08ED62u); { u32 t_ = r3; PR = 0x0C08ED66u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08ED66u); }  /* 0C08ED62 jsr @Rn */
L_0C08ED66: BLKS(0x0C08ED66u);
	{ r13 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08ED16u, 3); goto L_0C08ED16; }  /* 0C08ED66 bra */
L_0C08ED70: BLKS(0x0C08ED70u);
	r10 = 0xC0A8CA0u; UPD(0x0C08ED72u, 1);  /* 0C08ED70 mov.l @(disp,pc),Rn */
	IF(0x0C08ED72u); { u32 t_ = r10; PR = 0x0C08ED76u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08ED76u); }  /* 0C08ED72 jsr @Rn */
L_0C08ED76: BLKS(0x0C08ED76u);
	IF(0x0C08ED76u); T = (s32)r0 >= 0;  /* 0C08ED76 cmp/pz Rn */
	if (T) { UPD(0x0C08ED7Eu, 4); goto L_0C08ED7E; }  /* 0C08ED78 bt */
L_0C08ED7A: BLKS(0x0C08ED7Au);
	{ IF(0x0C08ED7Cu); ; /* slot nop */ UPD(0x0C08EC90u, 3); goto L_0C08EC90; }  /* 0C08ED7A bra */
L_0C08ED7E: BLKS(0x0C08ED7Eu);
	r7 = 0xB4u; UPD(0x0C08ED80u, 1);  /* 0C08ED7E mov.w @(disp,pc),Rn */
	IF(0x0C08ED80u); MACL = r12 * r7;  /* 0C08ED80 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08ED84u, 3);  /* 0C08ED82 mov.l @(disp,pc),Rn */
	IF(0x0C08ED84u); r8 = MACL;  /* 0C08ED84 sts macl,Rn */
	IF(0x0C08ED86u); MACL = r0 * r7;  /* 0C08ED86 mul.l Rm,Rn */
	r8 += r5;  /* 0C08ED88 add Rm,Rn */
	r11 = R32(r8); UPD(0x0C08ED8Cu, 5);  /* 0C08ED8A mov.l @Rm,Rn */
	IF(0x0C08ED8Cu); r9 = MACL;  /* 0C08ED8C sts macl,Rn */
	r9 += r5;  /* 0C08ED8E add Rm,Rn */
	r3 = R32(r9); UPD(0x0C08ED92u, 3);  /* 0C08ED90 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08ED94u, 1);  /* 0C08ED92 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C08ED96u, 1);  /* 0C08ED94 mov.w @(disp,pc),Rn */
	r11 &= r2;  /* 0C08ED96 and Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08ED9Au, 2);  /* 0C08ED98 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C08ED9A and Rm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C08ED9Eu, 2);  /* 0C08ED9C mov.l @(disp,Rm),Rn */
	r11 |= r3;  /* 0C08ED9E or Rm,Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C08EDA2u, 2);  /* 0C08EDA0 mov.l @(disp,Rm),Rn */
	r4 += r10;  /* 0C08EDA2 add Rm,Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C08EDA6u, 2);  /* 0C08EDA4 mov.l @(disp,Rm),Rn */
	r13 += r6;  /* 0C08EDA6 add Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C08EDAAu, 2);  /* 0C08EDA8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r13); UPD(0x0C08EDACu, 1);  /* 0C08EDAA mov.l Rm,@(disp,Rn) */
	W32(r8, r11); UPD(0x0C08EDAEu, 1);  /* 0C08EDAC mov.l Rm,@Rn */
	r8 += 0x3Cu;  /* 0C08EDAE add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C08EDB2u, 2);  /* 0C08EDB0 mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08EDB2 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08ED40u, 4); goto L_0C08ED40; } goto L_0C08EDB8; }  /* 0C08EDB4 bt/s */
L_0C08EDB8: BLKS(0x0C08EDB8u);
	r11 = 0xC0A8D30u; UPD(0x0C08EDBAu, 2);  /* 0C08EDB8 mov.l @(disp,pc),Rn */
	IF(0x0C08EDBAu); { u32 t_ = r11; PR = 0x0C08EDBEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08EDBEu); }  /* 0C08EDBA jsr @Rn */
L_0C08EDBE: BLKS(0x0C08EDBEu);
	IF(0x0C08EDBEu); T = (s32)r0 >= 0;  /* 0C08EDBE cmp/pz Rn */
	if (!T) { UPD(0x0C08ED36u, 4); goto L_0C08ED36; }  /* 0C08EDC0 bf */
L_0C08EDC2: BLKS(0x0C08EDC2u);
	r2 = 0x99u; UPD(0x0C08EDC4u, 1);  /* 0C08EDC2 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08EDC4 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EDC8u, 2);  /* 0C08EDC6 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08EDC8 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C08EDCA extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08EDCC cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08EE30u, 6); goto L_0C08EE30; } UPD(0x0C08EDD2u, 1); goto L_0C08EDD2; }  /* 0C08EDCE bf/s */
L_0C08EDD2: BLKS(0x0C08EDD2u);
	r0 = 0x0u;  /* 0C08EDD2 mov #imm,Rn */
	r13 = 0xA9u; UPD(0x0C08EDD6u, 2);  /* 0C08EDD4 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08EDD6 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C08EDDAu, 2);  /* 0C08EDD8 mov.b Rm,@Rn */
	r10 = r8;  /* 0C08EDDA mov Rm,Rn */
	r12 = 0x0u;  /* 0C08EDDC mov #imm,Rn */
	r13 += r8;  /* 0C08EDDE add Rm,Rn */
	UPD(0x0C08EDE0u, 3);
L_0C08EDE0: BLKS(0x0C08EDE0u);
	r4 = 0xC1A8464u; UPD(0x0C08EDE2u, 1);  /* 0C08EDE0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08EDE2 add #imm,Rn */
	r4 += r12;  /* 0C08EDE4 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C08EDE8u, 3);  /* 0C08EDE6 mov.l @Rm,Rn */
	r12 += 0x8u;  /* 0C08EDE8 add #imm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C08EDECu, 2);  /* 0C08EDEA mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08EDEEu, 1);  /* 0C08EDEC mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08EDEE add Rm,Rn */
	IF(0x0C08EDF0u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08EDF2u, 2);  /* 0C08EDF0 mov.b @(r0,Rm),Rn */
	r6 = R32(r4 + 0x4u); UPD(0x0C08EDF4u, 1);  /* 0C08EDF2 mov.l @(disp,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C08EDF4 extu.b Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C08EDF8u, 2);  /* 0C08EDF6 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08EDFAu, 1);  /* 0C08EDF8 mov.l Rm,@Rn */
	r8 += r6;  /* 0C08EDFA add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C08EDFEu, 2);  /* 0C08EDFC mov.b @Rm,Rn */
	r4 = 0xFFFF0000u; UPD(0x0C08EE00u, 1);  /* 0C08EDFE mov.l @(disp,pc),Rn */
	r5 = r7 & 0xFF;  /* 0C08EE00 extu.b Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C08EE04u, 2);  /* 0C08EE02 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C08EE06u, 1);  /* 0C08EE04 mov.l Rm,@(disp,Rn) */
	r4 = 0x3FFFu; UPD(0x0C08EE08u, 1);  /* 0C08EE06 mov.w @(disp,pc),Rn */
	IF(0x0C08EE08u); { u32 t_ = r0; PR = 0x0C08EE0Cu; W32(r15 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08EE0Cu); }  /* 0C08EE08 jsr @Rn */
L_0C08EE0C: BLKS(0x0C08EE0Cu);
	r6 = 0xFFFFE000u; UPD(0x0C08EE0Eu, 1);  /* 0C08EE0C mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C08EE0E mov Rm,Rn */
	r6 += r0;  /* 0C08EE10 add Rm,Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C08EE14u, 3);  /* 0C08EE12 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C08EE14 mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C08EE18u, 2);  /* 0C08EE16 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C08EE18 mov Rm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C08EE1Cu, 2);  /* 0C08EE1A mov.l @(disp,pc),Rn */
	r8 = 0x3u;  /* 0C08EE1C mov #imm,Rn */
	W32(r15 + 0x10u, r2); UPD(0x0C08EE20u, 2);  /* 0C08EE1E mov.l Rm,@(disp,Rn) */
	IF(0x0C08EE20u); { u32 t_ = r9; PR = 0x0C08EE24u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08EE24u); }  /* 0C08EE20 jsr @Rn */
L_0C08EE24: BLKS(0x0C08EE24u);
	r3 = r11;  /* 0C08EE24 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08EE26 add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C08EE28 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C08EE2A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08EDE0u, 7); goto L_0C08EDE0; } UPD(0x0C08EE30u, 1); goto L_0C08EE30; }  /* 0C08EE2C bf/s */
L_0C08EE30: BLKS(0x0C08EE30u);
	{ IF(0x0C08EE32u); ; /* slot nop */ UPD(0x0C08EB6Cu, 3); goto L_0C08EB6C; }  /* 0C08EE30 bra */
L_0C08EE40: BLKS(0x0C08EE40u);
	r13 = 0xC0A8D30u; UPD(0x0C08EE42u, 1);  /* 0C08EE40 mov.l @(disp,pc),Rn */
	IF(0x0C08EE42u); { u32 t_ = r13; PR = 0x0C08EE46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08EE46u); }  /* 0C08EE42 jsr @Rn */
L_0C08EE46: BLKS(0x0C08EE46u);
	IF(0x0C08EE46u); T = (s32)r0 >= 0;  /* 0C08EE46 cmp/pz Rn */
	if (!T) { UPD(0x0C08EE90u, 4); goto L_0C08EE90; }  /* 0C08EE48 bf */
L_0C08EE4A: BLKS(0x0C08EE4Au);
	r8 = 0xB4u; UPD(0x0C08EE4Cu, 1);  /* 0C08EE4A mov.w @(disp,pc),Rn */
	IF(0x0C08EE4Cu); MACL = r12 * r8;  /* 0C08EE4C mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08EE50u, 3);  /* 0C08EE4E mov.l @(disp,pc),Rn */
	IF(0x0C08EE50u); r10 = MACL;  /* 0C08EE50 sts macl,Rn */
	IF(0x0C08EE52u); MACL = r0 * r8;  /* 0C08EE52 mul.l Rm,Rn */
	r10 += r4;  /* 0C08EE54 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C08EE58u, 5);  /* 0C08EE56 mov.l @Rm,Rn */
	IF(0x0C08EE58u); r5 = MACL;  /* 0C08EE58 sts macl,Rn */
	r5 += r4;  /* 0C08EE5A add Rm,Rn */
	r9 = R32(r5); UPD(0x0C08EE5Eu, 3);  /* 0C08EE5C mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08EE60u, 1);  /* 0C08EE5E mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C08EE62u, 1);  /* 0C08EE60 mov.w @(disp,pc),Rn */
	r11 &= r2;  /* 0C08EE62 and Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C08EE66u, 2);  /* 0C08EE64 mov.l @(disp,Rm),Rn */
	r9 &= r1;  /* 0C08EE66 and Rm,Rn */
	r7 = R32(r5 + 0x28u); UPD(0x0C08EE6Au, 2);  /* 0C08EE68 mov.l @(disp,Rm),Rn */
	r11 |= r9;  /* 0C08EE6A or Rm,Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C08EE6Eu, 2);  /* 0C08EE6C mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x30u); UPD(0x0C08EE70u, 1);  /* 0C08EE6E mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C08EE70 add Rm,Rn */
	r7 += r0;  /* 0C08EE72 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C08EE76u, 3);  /* 0C08EE74 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r7); UPD(0x0C08EE78u, 1);  /* 0C08EE76 mov.l Rm,@(disp,Rn) */
	W32(r10, r11); UPD(0x0C08EE7Au, 1);  /* 0C08EE78 mov.l Rm,@Rn */
L_0C08EE7A: BLKS(0x0C08EE7Au);
	r1 = 0x0u;  /* 0C08EE7A mov #imm,Rn */
	UPD(0x0C08EE7Cu, 1);
L_0C08EE7C: BLKS(0x0C08EE7Cu);
	r4 = (u32)(s32)(s16)r1;  /* 0C08EE7C exts.w Rm,Rn */
	UPD(0x0C08EE7Eu, 1);
L_0C08EE7E: BLKS(0x0C08EE7Eu);
	{ T = (r4 & r4) == 0; /* slot tst Rm,Rn */ UPD(0x0C08ED34u, 3); goto L_0C08ED34; }  /* 0C08EE7E bra */
L_0C08EE90: BLKS(0x0C08EE90u);
	r9 = 0xB4u; UPD(0x0C08EE92u, 1);  /* 0C08EE90 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08EE92 mov #imm,Rn */
	IF(0x0C08EE94u); MACL = r12 * r9;  /* 0C08EE94 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08EE98u, 4);  /* 0C08EE96 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C08EE98 mov #imm,Rn */
	IF(0x0C08EE9Au); r0 = MACL;  /* 0C08EE9A sts macl,Rn */
	{ IF(0x0C08EE9Eu); W32(r0 + r10, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08EE7Cu, 5); goto L_0C08EE7C; }  /* 0C08EE9C bra */
L_0C08EEE0: BLKS(0x0C08EEE0u);
	r10 = 0xC0A8D30u; UPD(0x0C08EEE2u, 1);  /* 0C08EEE0 mov.l @(disp,pc),Rn */
	IF(0x0C08EEE2u); { u32 t_ = r10; PR = 0x0C08EEE6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08EEE6u); }  /* 0C08EEE2 jsr @Rn */
L_0C08EEE6: BLKS(0x0C08EEE6u);
	IF(0x0C08EEE6u); T = (s32)r0 >= 0;  /* 0C08EEE6 cmp/pz Rn */
	if (T) { UPD(0x0C08EEEEu, 4); goto L_0C08EEEE; }  /* 0C08EEE8 bt */
L_0C08EEEA: BLKS(0x0C08EEEAu);
	{ IF(0x0C08EEECu); ; /* slot nop */ UPD(0x0C08ED36u, 3); goto L_0C08ED36; }  /* 0C08EEEA bra */
L_0C08EEEE: BLKS(0x0C08EEEEu);
	r8 = 0xB4u; UPD(0x0C08EEF0u, 1);  /* 0C08EEEE mov.w @(disp,pc),Rn */
	IF(0x0C08EEF0u); MACL = r12 * r8;  /* 0C08EEF0 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08EEF4u, 3);  /* 0C08EEF2 mov.l @(disp,pc),Rn */
	IF(0x0C08EEF4u); r12 = MACL;  /* 0C08EEF4 sts macl,Rn */
	IF(0x0C08EEF6u); MACL = r0 * r8;  /* 0C08EEF6 mul.l Rm,Rn */
	r12 += r4;  /* 0C08EEF8 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C08EEFCu, 5);  /* 0C08EEFA mov.l @Rm,Rn */
	IF(0x0C08EEFCu); r3 = MACL;  /* 0C08EEFC sts macl,Rn */
	r3 += r4;  /* 0C08EEFE add Rm,Rn */
	r7 = R32(r3); UPD(0x0C08EF02u, 3);  /* 0C08EF00 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08EF04u, 1);  /* 0C08EF02 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C08EF06u, 1);  /* 0C08EF04 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C08EF06 and Rm,Rn */
	r13 = R32(r3 + 0x24u); UPD(0x0C08EF0Au, 2);  /* 0C08EF08 mov.l @(disp,Rm),Rn */
	r7 &= r1;  /* 0C08EF0A and Rm,Rn */
	r11 = R32(r3 + 0x28u); UPD(0x0C08EF0Eu, 2);  /* 0C08EF0C mov.l @(disp,Rm),Rn */
	r5 |= r7;  /* 0C08EF0E or Rm,Rn */
	r6 = R32(r12 + 0x2Cu); UPD(0x0C08EF12u, 2);  /* 0C08EF10 mov.l @(disp,Rm),Rn */
	r9 = R32(r12 + 0x30u); UPD(0x0C08EF14u, 1);  /* 0C08EF12 mov.l @(disp,Rm),Rn */
	r13 += r6;  /* 0C08EF14 add Rm,Rn */
	r11 += r9;  /* 0C08EF16 add Rm,Rn */
	W32(r12 + 0x24u, r13); UPD(0x0C08EF1Au, 3);  /* 0C08EF18 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r11); UPD(0x0C08EF1Cu, 1);  /* 0C08EF1A mov.l Rm,@(disp,Rn) */
	{ W32(r12, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C08EB6Cu, 3); goto L_0C08EB6C; }  /* 0C08EF1C bra */
L_0C08EF20: BLKS(0x0C08EF20u);
	r0 = 0xC08DBE0u; UPD(0x0C08EF22u, 1);  /* 0C08EF20 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08EF22 mov Rm,Rn */
	UPD(0x0C08EF24u, 1);
L_0C08EF24: BLKS(0x0C08EF24u);
	IF(0x0C08EF24u); { u32 t_ = r0; PR = 0x0C08EF28u; IF(0x0C08EF26u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08EF28u); }  /* 0C08EF24 jsr @Rn */
L_0C08EF28: BLKS(0x0C08EF28u);
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C08ED34u, 3); goto L_0C08ED34; }  /* 0C08EF28 bra */
L_0C08EF30: BLKS(0x0C08EF30u);
	r0 = 0xC08E060u; UPD(0x0C08EF32u, 1);  /* 0C08EF30 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08EF24u, 3); goto L_0C08EF24; }  /* 0C08EF32 bra */
L_0C08EF40: BLKS(0x0C08EF40u);
	r0 = 0xC08DE70u; UPD(0x0C08EF42u, 1);  /* 0C08EF40 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08EF24u, 3); goto L_0C08EF24; }  /* 0C08EF42 bra */
L_0C08EF50: BLKS(0x0C08EF50u);
	r13 = 0xC0A8CA0u; UPD(0x0C08EF52u, 1);  /* 0C08EF50 mov.l @(disp,pc),Rn */
	IF(0x0C08EF52u); { u32 t_ = r13; PR = 0x0C08EF56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08EF56u); }  /* 0C08EF52 jsr @Rn */
L_0C08EF56: BLKS(0x0C08EF56u);
	IF(0x0C08EF56u); T = (s32)r0 >= 0;  /* 0C08EF56 cmp/pz Rn */
	if (!T) { UPD(0x0C08EE90u, 4); goto L_0C08EE90; }  /* 0C08EF58 bf */
L_0C08EF5A: BLKS(0x0C08EF5Au);
	r8 = 0xB4u; UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.w @(disp,pc),Rn */
	IF(0x0C08EF5Cu); MACL = r12 * r8;  /* 0C08EF5C mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08EF60u, 3);  /* 0C08EF5E mov.l @(disp,pc),Rn */
	IF(0x0C08EF60u); r13 = MACL;  /* 0C08EF60 sts macl,Rn */
	IF(0x0C08EF62u); MACL = r0 * r8;  /* 0C08EF62 mul.l Rm,Rn */
	r13 += r9;  /* 0C08EF64 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C08EF68u, 5);  /* 0C08EF66 mov.w @(disp,pc),Rn */
	IF(0x0C08EF68u); r6 = MACL;  /* 0C08EF68 sts macl,Rn */
	r6 += r9;  /* 0C08EF6A add Rm,Rn */
	r3 = R32(r6); UPD(0x0C08EF6Eu, 3);  /* 0C08EF6C mov.l @Rm,Rn */
	r0 = R32(r13); UPD(0x0C08EF70u, 1);  /* 0C08EF6E mov.l @Rm,Rn */
	r3 &= r1;  /* 0C08EF70 and Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08EF74u, 2);  /* 0C08EF72 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C08EF74 and Rm,Rn */
	r0 |= r3;  /* 0C08EF76 or Rm,Rn */
	W32(r13, r0); UPD(0x0C08EF7Au, 3);  /* 0C08EF78 mov.l Rm,@Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C08EF7Cu, 1);  /* 0C08EF7A mov.l @(disp,Rm),Rn */
	r10 = R32(r6 + 0x24u); UPD(0x0C08EF7Eu, 1);  /* 0C08EF7C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C08EF7E add #imm,Rn */
	r7 = R32(r6 + 0x28u); UPD(0x0C08EF82u, 2);  /* 0C08EF80 mov.l @(disp,Rm),Rn */
	r0 &= 0x3Fu;  /* 0C08EF82 and #imm,r0 */
	r4 = R32(r13 + 0x30u); UPD(0x0C08EF86u, 2);  /* 0C08EF84 mov.l @(disp,Rm),Rn */
	r11 = R32(r13 + 0x2Cu); UPD(0x0C08EF88u, 1);  /* 0C08EF86 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C08EF88 add Rm,Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C08EF8Cu, 2);  /* 0C08EF8A mov.l @(disp,pc),Rn */
	r10 += r11;  /* 0C08EF8C add Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C08EF90u, 2);  /* 0C08EF8E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08EF90 mov Rm,Rn */
	W32(r13 + 0x28u, r7); UPD(0x0C08EF94u, 2);  /* 0C08EF92 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0xCu, r0); UPD(0x0C08EF96u, 1);  /* 0C08EF94 mov.l Rm,@(disp,Rn) */
	IF(0x0C08EF96u); { u32 t_ = r5; PR = 0x0C08EF9Au; W32(r13 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08EF9Au); }  /* 0C08EF96 jsr @Rn */
L_0C08EF9A: BLKS(0x0C08EF9Au);
	r4 = r12;  /* 0C08EF9A mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08EF9C mov #imm,Rn */
	IF(0x0C08EF9Eu); { u32 t_ = r8; PR = 0x0C08EFA2u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08EFA2u); }  /* 0C08EF9E jsr @Rn */
L_0C08EFA2: BLKS(0x0C08EFA2u);
	T = (r0 & r0) == 0;  /* 0C08EFA2 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08EFACu, 4); goto L_0C08EFAC; } goto L_0C08EFA8; }  /* 0C08EFA4 bf/s */
L_0C08EFA8: BLKS(0x0C08EFA8u);
	{ r4 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ UPD(0x0C08EE7Eu, 4); goto L_0C08EE7E; }  /* 0C08EFA8 bra */
L_0C08EFAC: BLKS(0x0C08EFACu);
	r8 = 0xC069B50u; UPD(0x0C08EFAEu, 1);  /* 0C08EFAC mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C08EFB0u, 1);  /* 0C08EFAE mov.l @(disp,pc),Rn */
	IF(0x0C08EFB0u); { u32 t_ = r8; PR = 0x0C08EFB4u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08EFB4u); }  /* 0C08EFB0 jsr @Rn */
L_0C08EFB4: BLKS(0x0C08EFB4u);
	r2 = 0x2A0u; UPD(0x0C08EFB6u, 1);  /* 0C08EFB4 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C08EFB6 exts.w Rm,Rn */
	IF(0x0C08EFB8u); MACL = r7 * r2;  /* 0C08EFB8 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C08EFBCu, 4);  /* 0C08EFBA mov.l @(disp,pc),Rn */
	IF(0x0C08EFBCu); r3 = MACL;  /* 0C08EFBC sts macl,Rn */
	r10 = 0xC069B20u; UPD(0x0C08EFC0u, 2);  /* 0C08EFBE mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C08EFC0 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C08EFC4u, 2);  /* 0C08EFC2 mov.w @(disp,pc),Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C08EFC6u, 1);  /* 0C08EFC4 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C08EFC6 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C08EFCAu, 2);  /* 0C08EFC8 mov.l @(disp,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C08EFCCu, 1);  /* 0C08EFCA mov.l @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08EFCEu, 1);  /* 0C08EFCC mov.l @(disp,Rm),Rn */
	IF(0x0C08EFCEu); { u32 t_ = r11; PR = 0x0C08EFD2u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08EFD2u); }  /* 0C08EFCE jsr @Rn */
L_0C08EFD2: BLKS(0x0C08EFD2u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08EFD4u, 1);  /* 0C08EFD2 mov.w @Rm,Rn */
	r5 = r9;  /* 0C08EFD4 mov Rm,Rn */
	IF(0x0C08EFD6u); { u32 t_ = r10; PR = 0x0C08EFDAu; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08EFDAu); }  /* 0C08EFD6 jsr @Rn */
L_0C08EFDA: BLKS(0x0C08EFDAu);
	r5 = r9;  /* 0C08EFDA mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08EFDEu, 2);  /* 0C08EFDC mov.l @(disp,pc),Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C08EFE0u, 1);  /* 0C08EFDE mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08EFE2u, 1);  /* 0C08EFE0 mov.w @Rm,Rn */
	IF(0x0C08EFE2u); { u32 t_ = r9; PR = 0x0C08EFE6u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08EFE6u); }  /* 0C08EFE2 jsr @Rn */
L_0C08EFE6: BLKS(0x0C08EFE6u);
	r9 = R32(r13 + 0x28u); UPD(0x0C08EFE8u, 1);  /* 0C08EFE6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EFE8 add #imm,Rn */
	r9 += r0;  /* 0C08EFEA add Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C08EFEEu, 3);  /* 0C08EFEC mov.l @(disp,pc),Rn */
	r0 = 0x28000u; UPD(0x0C08EFF0u, 1);  /* 0C08EFEE mov.l @(disp,pc),Rn */
	IF(0x0C08EFF0u); { u32 t_ = r8; PR = 0x0C08EFF4u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08EFF4u); }  /* 0C08EFF0 jsr @Rn */
L_0C08EFF4: BLKS(0x0C08EFF4u);
	r3 = 0xC1A8484u; UPD(0x0C08EFF6u, 1);  /* 0C08EFF4 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08EFF6 and #imm,r0 */
	IF(0x0C08EFF8u); r0 <<= 2;  /* 0C08EFF8 shll2 Rn */
	IF(0x0C08EFFAu); r5 = R32(r0 + r3); UPD(0x0C08EFFCu, 3);  /* 0C08EFFA mov.l @(r0,Rm),Rn */
	r4 = 0x2u;  /* 0C08EFFC mov #imm,Rn */
	r13 = 0xC0BA970u; UPD(0x0C08F000u, 2);  /* 0C08EFFE mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C08F000 mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08F004u, 2);  /* 0C08F002 mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08F004 mov Rm,Rn */
	IF(0x0C08F006u); { u32 t_ = r13; PR = 0x0C08F00Au; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C08F00Au); }  /* 0C08F006 jsr @Rn */
L_0C08F00A: BLKS(0x0C08F00Au);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EE7Au, 3); goto L_0C08EE7A; }  /* 0C08F00A bra */
}

void blk_f_0C08F060(sh3_t *c)
{
	LOCALS;
L_0C08F060: BLKS(0x0C08F060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08F062u, 1);  /* 0C08F060 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08F064u, 1);  /* 0C08F062 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08F066u, 1);  /* 0C08F064 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08F068u, 1);  /* 0C08F066 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08F06Au, 1);  /* 0C08F068 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08F06Cu, 1);  /* 0C08F06A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08F06Eu, 1);  /* 0C08F06C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08F070u, 1);  /* 0C08F06E mov.l @(disp,pc),Rn */
	IF(0x0C08F070u); r15 -= 4; W32(r15, PR); UPD(0x0C08F072u, 1);  /* 0C08F070 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08F074u, 1);  /* 0C08F072 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08F074 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C08F078u, 2);  /* 0C08F076 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08F078 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08F07Cu, 2);  /* 0C08F07A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C08F07Eu, 1);  /* 0C08F07C mov.l @Rm,Rn */
	IF(0x0C08F07Eu); r0 <<= 2;  /* 0C08F07E shll2 Rn */
	IF(0x0C08F080u); r6 = R32(r0 + r7); UPD(0x0C08F082u, 2);  /* 0C08F080 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C08F084u, 1);  /* 0C08F082 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C08F086u, 1);  /* 0C08F084 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08F088u, 1);  /* 0C08F086 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08F08Au, 1);  /* 0C08F088 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C08F08Cu, 1);  /* 0C08F08A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08F08Eu, 1);  /* 0C08F08C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08F090u, 1);  /* 0C08F08E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C08F092u, 1);  /* 0C08F090 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08F092 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08F096u, 2);  /* 0C08F094 mov.l @(disp,pc),Rn */
	IF(0x0C08F096u); { u32 t_ = r8; PR = 0x0C08F09Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08F09Au); }  /* 0C08F096 jsr @Rn */
L_0C08F09A: BLKS(0x0C08F09Au);
	T = (r0 & r0) == 0;  /* 0C08F09A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08F0C0u, 4); goto L_0C08F0C0; } UPD(0x0C08F0A0u, 1); goto L_0C08F0A0; }  /* 0C08F09C bf/s */
L_0C08F0A0: BLKS(0x0C08F0A0u);
	r14 += 0xCu;  /* 0C08F0A0 add #imm,Rn */
	UPD(0x0C08F0A2u, 1);
L_0C08F0A2: BLKS(0x0C08F0A2u);
	r15 = r14;  /* 0C08F0A2 mov Rm,Rn */
	IF(0x0C08F0A4u); PR = R32(r15); r15 += 4; UPD(0x0C08F0A6u, 2);  /* 0C08F0A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F0A8u, 1);  /* 0C08F0A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F0AAu, 1);  /* 0C08F0A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F0ACu, 1);  /* 0C08F0AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F0AEu, 1);  /* 0C08F0AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F0B0u, 1);  /* 0C08F0AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F0B2u, 1);  /* 0C08F0B0 mov.l @Rm+,Rn */
	IF(0x0C08F0B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08F0B2 rts */
L_0C08F0C0: BLKS(0x0C08F0C0u);
	r10 = 0xC071740u; UPD(0x0C08F0C2u, 1);  /* 0C08F0C0 mov.l @(disp,pc),Rn */
	IF(0x0C08F0C2u); { u32 t_ = r10; PR = 0x0C08F0C6u; r4 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08F0C6u); }  /* 0C08F0C2 jsr @Rn */
L_0C08F0C6: BLKS(0x0C08F0C6u);
	T = (r0 & r0) == 0;  /* 0C08F0C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08F0A0u, 4); goto L_0C08F0A0; } goto L_0C08F0CC; }  /* 0C08F0C8 bt/s */
L_0C08F0CC: BLKS(0x0C08F0CCu);
	r12 = 0xC28EDFCu; UPD(0x0C08F0CEu, 2);  /* 0C08F0CC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08F0D0u, 1);  /* 0C08F0CE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08F0D2u, 1);  /* 0C08F0D0 mov.w @Rm+,Rn */
	IF(0x0C08F0D2u); MACL = r10 * r8;  /* 0C08F0D2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08F0D6u, 3);  /* 0C08F0D4 mov.l @(disp,pc),Rn */
	IF(0x0C08F0D6u); r8 = MACL;  /* 0C08F0D6 sts macl,Rn */
	r0 = 0xC1008100u; UPD(0x0C08F0DAu, 2);  /* 0C08F0D8 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08F0DA add Rm,Rn */
	W32(r8, r0); UPD(0x0C08F0DEu, 2);  /* 0C08F0DC mov.l Rm,@Rn */
	r4 = r10;  /* 0C08F0DE mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08F0E2u, 2);  /* 0C08F0E0 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C08F0E4u, 1);  /* 0C08F0E2 mov.w @Rm,Rn */
	r13 = r6 & 0xFFFF;  /* 0C08F0E4 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08F0E8u, 2);  /* 0C08F0E6 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08F0E8 mov #imm,Rn */
	IF(0x0C08F0EAu); W16(r0 + r8, r7); UPD(0x0C08F0ECu, 2);  /* 0C08F0EA mov.w Rm,@(r0,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08F0EEu, 1);  /* 0C08F0EC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08F0EE add #imm,Rn */
	IF(0x0C08F0F0u); W16(r0 + r8, r7); UPD(0x0C08F0F2u, 2);  /* 0C08F0F0 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r13); UPD(0x0C08F0F4u, 1);  /* 0C08F0F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r11); UPD(0x0C08F0F6u, 1);  /* 0C08F0F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F0F6u); { u32 t_ = r5; PR = 0x0C08F0FAu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08F0FAu); }  /* 0C08F0F6 jsr @Rn */
L_0C08F0FA: BLKS(0x0C08F0FAu);
	r9 = 0xC0722E0u; UPD(0x0C08F0FCu, 1);  /* 0C08F0FA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08F0FC mov Rm,Rn */
	r2 = 0x1900000u; UPD(0x0C08F100u, 2);  /* 0C08F0FE mov.l @(disp,pc),Rn */
	IF(0x0C08F100u); { u32 t_ = r9; PR = 0x0C08F104u; W32(r8 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08F104u); }  /* 0C08F100 jsr @Rn */
L_0C08F104: BLKS(0x0C08F104u);
	r3 = 0xC0A9AE0u; UPD(0x0C08F106u, 1);  /* 0C08F104 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9D30u; UPD(0x0C08F108u, 1);  /* 0C08F106 mov.l @(disp,pc),Rn */
	IF(0x0C08F108u); { u32 t_ = r3; PR = 0x0C08F10Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08F10Cu); }  /* 0C08F108 jsr @Rn */
L_0C08F10C: BLKS(0x0C08F10Cu);
	r0 = 0xADu; UPD(0x0C08F10Eu, 1);  /* 0C08F10C mov.w @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C08F10E mov #imm,Rn */
	r6 = 0xA8u; UPD(0x0C08F112u, 2);  /* 0C08F110 mov.w @(disp,pc),Rn */
	IF(0x0C08F112u); W8(r0 + r8, r11); UPD(0x0C08F114u, 1);  /* 0C08F112 mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C08F114 add Rm,Rn */
	r6 += 0x1u;  /* 0C08F116 add #imm,Rn */
	W8(r6, r4); UPD(0x0C08F11Au, 3);  /* 0C08F118 mov.b Rm,@Rn */
	r0 = 0xC297460u; UPD(0x0C08F11Cu, 1);  /* 0C08F11A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08F11C mov Rm,Rn */
	r5 = R32(r0); UPD(0x0C08F120u, 2);  /* 0C08F11E mov.l @Rm,Rn */
	IF(0x0C08F120u); { u32 t_ = r13; PR = 0x0C08F124u; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08F124u); }  /* 0C08F120 jsr @Rn */
L_0C08F124: BLKS(0x0C08F124u);
	r0 = 0x94u; UPD(0x0C08F126u, 1);  /* 0C08F124 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C08F126 mov Rm,Rn */
	IF(0x0C08F128u); W32(r0 + r8, r11); UPD(0x0C08F12Au, 2);  /* 0C08F128 mov.l Rm,@(r0,Rn) */
	r9 = 0x8Cu; UPD(0x0C08F12Cu, 1);  /* 0C08F12A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08F12C add #imm,Rn */
	r9 += r8;  /* 0C08F12E add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08F132u, 3);  /* 0C08F130 mov.l @(disp,Rm),Rn */
	W32(r9, r11); UPD(0x0C08F134u, 1);  /* 0C08F132 mov.l Rm,@Rn */
	IF(0x0C08F134u); W32(r0 + r8, r11); UPD(0x0C08F136u, 1);  /* 0C08F134 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C08F138u, 1);  /* 0C08F136 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C08F13Au, 1);  /* 0C08F138 mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C08F13Cu, 1);  /* 0C08F13A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08F13Eu, 1);  /* 0C08F13C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08F13E mov #imm,Rn */
	UPD(0x0C08F140u, 1);
L_0C08F140: BLKS(0x0C08F140u);
	r9 = 0xC1A8FF0u; UPD(0x0C08F142u, 1);  /* 0C08F140 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08F144u, 1);  /* 0C08F142 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08F144 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08F148u, 2);  /* 0C08F146 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C08F148 add #imm,Rn */
	IF(0x0C08F14Au); MACL = r10 * r8;  /* 0C08F14A mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08F14Eu, 4);  /* 0C08F14C mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C08F14E add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C08F152u, 2);  /* 0C08F150 mov.l @(disp,pc),Rn */
	IF(0x0C08F152u); r8 = MACL;  /* 0C08F152 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08F156u, 2);  /* 0C08F154 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C08F156 add Rm,Rn */
	IF(0x0C08F158u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08F15Au, 2);  /* 0C08F158 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C08F15A add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08F15C add #imm,Rn */
	W16(r8, r5); UPD(0x0C08F160u, 3);  /* 0C08F15E mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08F160 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C08F164u, 2);  /* 0C08F162 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08F164 add #imm,Rn */
	W16(r8, r2); UPD(0x0C08F168u, 2);  /* 0C08F166 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C08F168 mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08F16Cu, 2);  /* 0C08F16A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08F16C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08F170u, 2);  /* 0C08F16E mov.w @Rm,Rn */
	r0 = R32(r9); UPD(0x0C08F172u, 1);  /* 0C08F170 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C08F172 extu.w Rm,Rn */
	W32(r8, r0); UPD(0x0C08F176u, 2);  /* 0C08F174 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08F176 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08F17Au, 2);  /* 0C08F178 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A8A30u; UPD(0x0C08F17Cu, 1);  /* 0C08F17A mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C08F17Eu, 1);  /* 0C08F17C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C08F180u, 1);  /* 0C08F17E mov.l Rm,@(disp,Rn) */
	IF(0x0C08F180u); { u32 t_ = r2; PR = 0x0C08F184u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08F184u); }  /* 0C08F180 jsr @Rn */
L_0C08F184: BLKS(0x0C08F184u);
	r6 = R32(r13 + 0x24u); UPD(0x0C08F186u, 1);  /* 0C08F184 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C08F188u, 1);  /* 0C08F186 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08F18Au, 1);  /* 0C08F188 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C08F18Cu, 1);  /* 0C08F18A mov.l Rm,@(disp,Rn) */
	r0 = 0xC2B03A2u; UPD(0x0C08F18Eu, 1);  /* 0C08F18C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C08F190u, 1);  /* 0C08F18E mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08F192u, 1);  /* 0C08F190 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C08F194u, 1);  /* 0C08F192 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F194u); r3 >>= 2;  /* 0C08F194 shlr2 Rn */
	r2 = R32(r9 + 0x10u); UPD(0x0C08F198u, 2);  /* 0C08F196 mov.l @(disp,Rm),Rn */
	IF(0x0C08F198u); r3 >>= 2;  /* 0C08F198 shlr2 Rn */
	r4 = 0x86u; UPD(0x0C08F19Cu, 2);  /* 0C08F19A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08F19C mov Rm,Rn */
	IF(0x0C08F19Eu); r3 >>= 2;  /* 0C08F19E shlr2 Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08F1A2u, 3);  /* 0C08F1A0 mov.l @(disp,pc),Rn */
	IF(0x0C08F1A2u); W16(r0 + r4, r3); UPD(0x0C08F1A4u, 1);  /* 0C08F1A2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r2); UPD(0x0C08F1A6u, 1);  /* 0C08F1A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F1A6u); { u32 t_ = r9; PR = 0x0C08F1AAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08F1AAu); }  /* 0C08F1A6 jsr @Rn */
L_0C08F1AA: BLKS(0x0C08F1AAu);
	r0 = 0xB0u; UPD(0x0C08F1ACu, 1);  /* 0C08F1AA mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C08F1AC mov Rm,Rn */
	IF(0x0C08F1AEu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08F1B0u, 2);  /* 0C08F1AE mov.b @(r0,Rm),Rn */
	r6 = 0xACu; UPD(0x0C08F1B2u, 1);  /* 0C08F1B0 mov.w @(disp,pc),Rn */
	IF(0x0C08F1B2u); W8(r0 + r8, r3); UPD(0x0C08F1B4u, 1);  /* 0C08F1B2 mov.b Rm,@(r0,Rn) */
	r5 += r6;  /* 0C08F1B4 add Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C08F1B8u, 2);  /* 0C08F1B6 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C08F1B8 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C08F1BCu, 2);  /* 0C08F1BA mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C08F1BC add #imm,Rn */
	r10 = 0xC0C2360u; UPD(0x0C08F1C0u, 2);  /* 0C08F1BE mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C08F1C0 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C08F1C4u, 2);  /* 0C08F1C2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08F1C4 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C08F1C8u, 2);  /* 0C08F1C6 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08F1C8 add #imm,Rn */
	r2 = 0x9Bu; UPD(0x0C08F1CCu, 2);  /* 0C08F1CA mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C08F1CEu, 1);  /* 0C08F1CC mov.b Rm,@Rn */
	r8 += r2;  /* 0C08F1CE add Rm,Rn */
	IF(0x0C08F1D0u); { u32 t_ = r10; PR = 0x0C08F1D4u; W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08F1D4u); }  /* 0C08F1D0 jsr @Rn */
L_0C08F1D4: BLKS(0x0C08F1D4u);
	W8(r8, r0); UPD(0x0C08F1D6u, 1);  /* 0C08F1D4 mov.b Rm,@Rn */
	r10 = 0x11u;  /* 0C08F1D6 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C08F1DAu, 2);  /* 0C08F1D8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08F1DA add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C08F1DC exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C08F1E0u, 3);  /* 0C08F1DE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08F1E2u, 1);  /* 0C08F1E0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C08F1E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08F140u, 4); goto L_0C08F140; } goto L_0C08F1E8; }  /* 0C08F1E4 bf/s */
L_0C08F1E8: BLKS(0x0C08F1E8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08F0A2u, 4); goto L_0C08F0A2; }  /* 0C08F1E8 bra */
}

void blk_f_0C08F250(sh3_t *c)
{
	LOCALS;
L_0C08F250: BLKS(0x0C08F250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08F252u, 1);  /* 0C08F250 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08F254u, 1);  /* 0C08F252 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08F254 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08F258u, 2);  /* 0C08F256 mov.l Rm,@-Rn */
	IF(0x0C08F258u); MACL = r8 * r3;  /* 0C08F258 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08F25Cu, 3);  /* 0C08F25A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08F25Eu, 1);  /* 0C08F25C mov.l @(disp,pc),Rn */
	IF(0x0C08F25Eu); r2 = MACL;  /* 0C08F25E sts macl,Rn */
	IF(0x0C08F260u); r15 -= 4; W32(r15, PR); UPD(0x0C08F262u, 2);  /* 0C08F260 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08F262 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08F266u, 2);  /* 0C08F264 mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C08F266 mov #imm,Rn */
	T = r2 > r0;  /* 0C08F268 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F338u, 5); goto L_0C08F338; } goto L_0C08F26E; }  /* 0C08F26A bt/s */
L_0C08F26E: BLKS(0x0C08F26Eu);
	r0 = 0xC08F280u;  /* 0C08F26E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08F270 add Rm,Rn */
	IF(0x0C08F272u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08F274u, 4);  /* 0C08F272 mov.w @(r0,Rm),Rn */
	IF(0x0C08F274u); { u32 tv_ = (r4 + 0x0C08F278u); u32 t_ = PHYS(tv_); IF(0x0C08F276u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08F2A0u: goto L_0C08F2A0; case 0x0C08F2C0u: goto L_0C08F2C0; case 0x0C08F2D0u: goto L_0C08F2D0; case 0x0C08F2E0u: goto L_0C08F2E0; case 0x0C08F2F0u: goto L_0C08F2F0; case 0x0C08F300u: goto L_0C08F300; case 0x0C08F350u: goto L_0C08F350; case 0x0C08F370u: goto L_0C08F370; case 0x0C08F3A0u: goto L_0C08F3A0; case 0x0C08F3D0u: goto L_0C08F3D0; case 0x0C08F420u: goto L_0C08F420; case 0x0C08F460u: goto L_0C08F460; default: JUMPD(tv_); } }  /* 0C08F274 braf Rn */
L_0C08F2A0: BLKS(0x0C08F2A0u);
	r5 = 0xC1A9158u; UPD(0x0C08F2A2u, 1);  /* 0C08F2A0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08F2A2 mov Rm,Rn */
	UPD(0x0C08F2A4u, 1);
L_0C08F2A4: BLKS(0x0C08F2A4u);
	r6 = 0xC0A9D90u; UPD(0x0C08F2A6u, 1);  /* 0C08F2A4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	IF(0x0C08F2AEu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08F2AE jmp @Rn */
L_0C08F2C0: BLKS(0x0C08F2C0u);
	r5 = 0xC1A91E0u; UPD(0x0C08F2C2u, 1);  /* 0C08F2C0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2C2 bra */
L_0C08F2D0: BLKS(0x0C08F2D0u);
	r5 = 0xC1A9202u; UPD(0x0C08F2D2u, 1);  /* 0C08F2D0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2D2 bra */
L_0C08F2E0: BLKS(0x0C08F2E0u);
	r5 = 0xC1A9224u; UPD(0x0C08F2E2u, 1);  /* 0C08F2E0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2E2 bra */
L_0C08F2F0: BLKS(0x0C08F2F0u);
	r5 = 0xC1A9254u; UPD(0x0C08F2F2u, 1);  /* 0C08F2F0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2F2 bra */
L_0C08F300: BLKS(0x0C08F300u);
	r9 = 0xB4u; UPD(0x0C08F302u, 1);  /* 0C08F300 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F302 add #imm,Rn */
	IF(0x0C08F304u); MACL = r8 * r9;  /* 0C08F304 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F308u, 4);  /* 0C08F306 mov.l @(disp,pc),Rn */
	IF(0x0C08F308u); r8 = MACL;  /* 0C08F308 sts macl,Rn */
	r8 += r7;  /* 0C08F30A add Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F30Eu, 3);  /* 0C08F30C mov.l @(disp,Rm),Rn */
	r5 = 0xFFFB0000u; UPD(0x0C08F310u, 1);  /* 0C08F30E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08F312u, 1);  /* 0C08F310 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C08F312 add Rm,Rn */
	r1 = 0x20000u; UPD(0x0C08F316u, 2);  /* 0C08F314 mov.l @(disp,pc),Rn */
L_0C08F316: BLKS(0x0C08F316u);
	r0 = 0xB0u; UPD(0x0C08F318u, 1);  /* 0C08F316 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C08F318 add Rm,Rn */
	IF(0x0C08F31Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F31Cu, 2);  /* 0C08F31A mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C08F31C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C08F320u, 2);  /* 0C08F31E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F320 add #imm,Rn */
	IF(0x0C08F322u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F324u, 2);  /* 0C08F322 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08F324 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08F328u, 2);  /* 0C08F326 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C08F328 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C08F32Cu, 2);  /* 0C08F32A mov.l @Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C08F32Eu, 1);  /* 0C08F32C mov.l @(disp,pc),Rn */
L_0C08F32E: BLKS(0x0C08F32Eu);
	IF(0x0C08F32Eu); { u32 t_ = r0; PR = 0x0C08F332u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F332u); }  /* 0C08F32E jsr @Rn */
L_0C08F332: BLKS(0x0C08F332u);
	W32(r8, r9); UPD(0x0C08F334u, 1);  /* 0C08F332 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C08F334 add #imm,Rn */
	IF(0x0C08F336u); ;  /* 0C08F336 nop */
	UPD(0x0C08F338u, 2);
L_0C08F338: BLKS(0x0C08F338u);
	r15 = r14;  /* 0C08F338 mov Rm,Rn */
	IF(0x0C08F33Au); PR = R32(r15); r15 += 4; UPD(0x0C08F33Cu, 2);  /* 0C08F33A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F33Eu, 1);  /* 0C08F33C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F340u, 1);  /* 0C08F33E mov.l @Rm+,Rn */
	IF(0x0C08F340u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08F340 rts */
L_0C08F350: BLKS(0x0C08F350u);
	r3 = 0xB4u; UPD(0x0C08F352u, 1);  /* 0C08F350 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F352 add #imm,Rn */
	IF(0x0C08F354u); MACL = r8 * r3;  /* 0C08F354 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08F358u, 4);  /* 0C08F356 mov.l @(disp,pc),Rn */
	IF(0x0C08F358u); r8 = MACL;  /* 0C08F358 sts macl,Rn */
	r8 += r2;  /* 0C08F35A add Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F35Eu, 3);  /* 0C08F35C mov.l @(disp,Rm),Rn */
	r0 = 0xFFFB0000u; UPD(0x0C08F360u, 1);  /* 0C08F35E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08F362u, 1);  /* 0C08F360 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFE0000u; UPD(0x0C08F364u, 1);  /* 0C08F362 mov.l @(disp,pc),Rn */
	{ r6 += r0; /* slot add Rm,Rn */ UPD(0x0C08F316u, 3); goto L_0C08F316; }  /* 0C08F364 bra */
L_0C08F370: BLKS(0x0C08F370u);
	r5 = 0xB4u; UPD(0x0C08F372u, 1);  /* 0C08F370 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F372 add #imm,Rn */
	IF(0x0C08F374u); MACL = r8 * r5;  /* 0C08F374 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08F378u, 4);  /* 0C08F376 mov.l @(disp,pc),Rn */
	IF(0x0C08F378u); r8 = MACL;  /* 0C08F378 sts macl,Rn */
	r8 += r0;  /* 0C08F37A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F37Eu, 3);  /* 0C08F37C mov.w @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08F37E mov #imm,Rn */
	IF(0x0C08F380u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F382u, 2);  /* 0C08F380 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08F382 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08F386u, 2);  /* 0C08F384 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F386 add #imm,Rn */
	IF(0x0C08F388u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F38Au, 2);  /* 0C08F388 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08F38A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08F38Eu, 2);  /* 0C08F38C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C08F390u, 1);  /* 0C08F38E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08F392u, 1);  /* 0C08F390 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F394u, 1);  /* 0C08F392 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08F32Eu, 3); goto L_0C08F32E; }  /* 0C08F394 bra */
L_0C08F3A0: BLKS(0x0C08F3A0u);
	r0 = 0xB4u; UPD(0x0C08F3A2u, 1);  /* 0C08F3A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F3A2 add #imm,Rn */
	IF(0x0C08F3A4u); MACL = r8 * r0;  /* 0C08F3A4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08F3A8u, 4);  /* 0C08F3A6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08F3A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08F3ACu, 2);  /* 0C08F3AA mov.w @(disp,pc),Rn */
	IF(0x0C08F3ACu); r8 = MACL;  /* 0C08F3AC sts macl,Rn */
	r8 += r4;  /* 0C08F3AE add Rm,Rn */
	IF(0x0C08F3B0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3B2u, 3);  /* 0C08F3B0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08F3B2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08F3B6u, 2);  /* 0C08F3B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F3B6 add #imm,Rn */
	IF(0x0C08F3B8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3BAu, 2);  /* 0C08F3B8 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F3BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08F3BEu, 2);  /* 0C08F3BC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08F3C0u, 1);  /* 0C08F3BE mov.l @Rm,Rn */
L_0C08F3C0: BLKS(0x0C08F3C0u);
	r9 = 0xC0BECB0u; UPD(0x0C08F3C2u, 1);  /* 0C08F3C0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F3C4u, 1);  /* 0C08F3C2 mov.l @(disp,Rm),Rn */
	IF(0x0C08F3C4u); { u32 t_ = r9; PR = 0x0C08F3C8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F3C8u); }  /* 0C08F3C4 jsr @Rn */
L_0C08F3C8: BLKS(0x0C08F3C8u);
	r3 = 0x0u;  /* 0C08F3C8 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C08F3CCu, 2);  /* 0C08F3CA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08F338u, 3); goto L_0C08F338; }  /* 0C08F3CC bra */
L_0C08F3D0: BLKS(0x0C08F3D0u);
	r9 = 0xB4u; UPD(0x0C08F3D2u, 1);  /* 0C08F3D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F3D2 add #imm,Rn */
	IF(0x0C08F3D4u); MACL = r8 * r9;  /* 0C08F3D4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08F3D8u, 4);  /* 0C08F3D6 mov.l @(disp,pc),Rn */
	IF(0x0C08F3D8u); r9 = MACL;  /* 0C08F3D8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08F3DCu, 2);  /* 0C08F3DA mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C08F3DC add Rm,Rn */
	IF(0x0C08F3DEu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F3E0u, 2);  /* 0C08F3DE mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08F3E0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08F3E4u, 2);  /* 0C08F3E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F3E4 add #imm,Rn */
	IF(0x0C08F3E6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F3E8u, 2);  /* 0C08F3E6 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08F3E8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08F3ECu, 2);  /* 0C08F3EA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C08F3EEu, 1);  /* 0C08F3EC mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08F3EE mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C08F3F2u, 2);  /* 0C08F3F0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08F3F4u, 1);  /* 0C08F3F2 mov.l @(disp,Rm),Rn */
	IF(0x0C08F3F4u); { u32 t_ = r0; PR = 0x0C08F3F8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F3F8u); }  /* 0C08F3F4 jsr @Rn */
L_0C08F3F8: BLKS(0x0C08F3F8u);
	r4 = r8;  /* 0C08F3F8 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08F3FCu, 2);  /* 0C08F3FA mov.l @(disp,pc),Rn */
	IF(0x0C08F3FCu); { u32 t_ = r8; PR = 0x0C08F400u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F400u); }  /* 0C08F3FC jsr @Rn */
L_0C08F400: BLKS(0x0C08F400u);
	IF(0x0C08F400u); T = (s32)r0 >= 0;  /* 0C08F400 cmp/pz Rn */
	if (!T) { UPD(0x0C08F414u, 4); goto L_0C08F414; }  /* 0C08F402 bf */
L_0C08F404: BLKS(0x0C08F404u);
	r5 = r0;  /* 0C08F404 mov Rm,Rn */
	r4 = 0xFFFE0000u; UPD(0x0C08F408u, 2);  /* 0C08F406 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08F40Au, 1);  /* 0C08F408 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C08F40A add Rm,Rn */
	r4 = 0x2u;  /* 0C08F40C mov #imm,Rn */
	UPD(0x0C08F40Eu, 2);
L_0C08F40E: BLKS(0x0C08F40Eu);
	r8 = 0xC07DE60u; UPD(0x0C08F410u, 1);  /* 0C08F40E mov.l @(disp,pc),Rn */
	IF(0x0C08F410u); { u32 t_ = r8; PR = 0x0C08F414u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08F414u); }  /* 0C08F410 jsr @Rn */
L_0C08F414: BLKS(0x0C08F414u);
	r4 = 0x0u;  /* 0C08F414 mov #imm,Rn */
	{ W32(r9, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C08F338u, 4); goto L_0C08F338; }  /* 0C08F416 bra */
L_0C08F420: BLKS(0x0C08F420u);
	r3 = 0xB4u; UPD(0x0C08F422u, 1);  /* 0C08F420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F422 add #imm,Rn */
	IF(0x0C08F424u); MACL = r8 * r3;  /* 0C08F424 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F428u, 4);  /* 0C08F426 mov.l @(disp,pc),Rn */
	IF(0x0C08F428u); r9 = MACL;  /* 0C08F428 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08F42Cu, 2);  /* 0C08F42A mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C08F42C add Rm,Rn */
	IF(0x0C08F42Eu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F430u, 2);  /* 0C08F42E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F430 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08F434u, 2);  /* 0C08F432 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F434 add #imm,Rn */
	IF(0x0C08F436u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F438u, 2);  /* 0C08F436 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C08F438 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08F43Cu, 2);  /* 0C08F43A mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C08F43C mov #imm,Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08F440u, 2);  /* 0C08F43E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08F442u, 1);  /* 0C08F440 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08F444u, 1);  /* 0C08F442 mov.l @(disp,Rm),Rn */
	IF(0x0C08F444u); { u32 t_ = r0; PR = 0x0C08F448u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F448u); }  /* 0C08F444 jsr @Rn */
L_0C08F448: BLKS(0x0C08F448u);
	r4 = r8;  /* 0C08F448 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08F44Cu, 2);  /* 0C08F44A mov.l @(disp,pc),Rn */
	IF(0x0C08F44Cu); { u32 t_ = r8; PR = 0x0C08F450u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F450u); }  /* 0C08F44C jsr @Rn */
L_0C08F450: BLKS(0x0C08F450u);
	IF(0x0C08F450u); T = (s32)r0 >= 0;  /* 0C08F450 cmp/pz Rn */
	if (!T) { UPD(0x0C08F414u, 4); goto L_0C08F414; }  /* 0C08F452 bf */
L_0C08F454: BLKS(0x0C08F454u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08F456u, 1);  /* 0C08F454 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08F456 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C08F40Eu, 4); goto L_0C08F40E; }  /* 0C08F458 bra */
L_0C08F460: BLKS(0x0C08F460u);
	r7 = 0xB4u; UPD(0x0C08F462u, 1);  /* 0C08F460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F462 add #imm,Rn */
	IF(0x0C08F464u); MACL = r8 * r7;  /* 0C08F464 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08F468u, 4);  /* 0C08F466 mov.l @(disp,pc),Rn */
	IF(0x0C08F468u); r8 = MACL;  /* 0C08F468 sts macl,Rn */
	r8 += r0;  /* 0C08F46A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F46Eu, 3);  /* 0C08F46C mov.w @(disp,pc),Rn */
	IF(0x0C08F46Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F470u, 1);  /* 0C08F46E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F470 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08F474u, 2);  /* 0C08F472 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F474 add #imm,Rn */
	IF(0x0C08F476u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F478u, 2);  /* 0C08F476 mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C08F478 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F47Cu, 2);  /* 0C08F47A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C08F47C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08F3C0u, 4); goto L_0C08F3C0; }  /* 0C08F47E bra */
}

void blk_f_0C08F4C0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F4C0;
L_0C08F250: BLKS(0x0C08F250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08F252u, 1);  /* 0C08F250 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08F254u, 1);  /* 0C08F252 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08F254 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08F258u, 2);  /* 0C08F256 mov.l Rm,@-Rn */
	IF(0x0C08F258u); MACL = r8 * r3;  /* 0C08F258 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08F25Cu, 3);  /* 0C08F25A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08F25Eu, 1);  /* 0C08F25C mov.l @(disp,pc),Rn */
	IF(0x0C08F25Eu); r2 = MACL;  /* 0C08F25E sts macl,Rn */
	IF(0x0C08F260u); r15 -= 4; W32(r15, PR); UPD(0x0C08F262u, 2);  /* 0C08F260 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08F262 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08F266u, 2);  /* 0C08F264 mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C08F266 mov #imm,Rn */
	T = r2 > r0;  /* 0C08F268 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F338u, 5); goto L_0C08F338; } goto L_0C08F26E; }  /* 0C08F26A bt/s */
L_0C08F26E: BLKS(0x0C08F26Eu);
	r0 = 0xC08F280u;  /* 0C08F26E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08F270 add Rm,Rn */
	IF(0x0C08F272u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08F274u, 4);  /* 0C08F272 mov.w @(r0,Rm),Rn */
	IF(0x0C08F274u); { u32 tv_ = (r4 + 0x0C08F278u); u32 t_ = PHYS(tv_); IF(0x0C08F276u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08F2A0u: goto L_0C08F2A0; case 0x0C08F2C0u: goto L_0C08F2C0; case 0x0C08F2D0u: goto L_0C08F2D0; case 0x0C08F2E0u: goto L_0C08F2E0; case 0x0C08F2F0u: goto L_0C08F2F0; case 0x0C08F300u: goto L_0C08F300; case 0x0C08F350u: goto L_0C08F350; case 0x0C08F370u: goto L_0C08F370; case 0x0C08F3A0u: goto L_0C08F3A0; case 0x0C08F3D0u: goto L_0C08F3D0; case 0x0C08F420u: goto L_0C08F420; case 0x0C08F460u: goto L_0C08F460; default: JUMPD(tv_); } }  /* 0C08F274 braf Rn */
L_0C08F2A0: BLKS(0x0C08F2A0u);
	r5 = 0xC1A9158u; UPD(0x0C08F2A2u, 1);  /* 0C08F2A0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08F2A2 mov Rm,Rn */
	UPD(0x0C08F2A4u, 1);
L_0C08F2A4: BLKS(0x0C08F2A4u);
	r6 = 0xC0A9D90u; UPD(0x0C08F2A6u, 1);  /* 0C08F2A4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	IF(0x0C08F2AEu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08F2AE jmp @Rn */
L_0C08F2C0: BLKS(0x0C08F2C0u);
	r5 = 0xC1A91E0u; UPD(0x0C08F2C2u, 1);  /* 0C08F2C0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2C2 bra */
L_0C08F2D0: BLKS(0x0C08F2D0u);
	r5 = 0xC1A9202u; UPD(0x0C08F2D2u, 1);  /* 0C08F2D0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2D2 bra */
L_0C08F2E0: BLKS(0x0C08F2E0u);
	r5 = 0xC1A9224u; UPD(0x0C08F2E2u, 1);  /* 0C08F2E0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2E2 bra */
L_0C08F2F0: BLKS(0x0C08F2F0u);
	r5 = 0xC1A9254u; UPD(0x0C08F2F2u, 1);  /* 0C08F2F0 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08F2A4u, 3); goto L_0C08F2A4; }  /* 0C08F2F2 bra */
L_0C08F300: BLKS(0x0C08F300u);
	r9 = 0xB4u; UPD(0x0C08F302u, 1);  /* 0C08F300 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F302 add #imm,Rn */
	IF(0x0C08F304u); MACL = r8 * r9;  /* 0C08F304 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F308u, 4);  /* 0C08F306 mov.l @(disp,pc),Rn */
	IF(0x0C08F308u); r8 = MACL;  /* 0C08F308 sts macl,Rn */
	r8 += r7;  /* 0C08F30A add Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F30Eu, 3);  /* 0C08F30C mov.l @(disp,Rm),Rn */
	r5 = 0xFFFB0000u; UPD(0x0C08F310u, 1);  /* 0C08F30E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08F312u, 1);  /* 0C08F310 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C08F312 add Rm,Rn */
	r1 = 0x20000u; UPD(0x0C08F316u, 2);  /* 0C08F314 mov.l @(disp,pc),Rn */
L_0C08F316: BLKS(0x0C08F316u);
	r0 = 0xB0u; UPD(0x0C08F318u, 1);  /* 0C08F316 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C08F318 add Rm,Rn */
	IF(0x0C08F31Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F31Cu, 2);  /* 0C08F31A mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C08F31C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C08F320u, 2);  /* 0C08F31E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F320 add #imm,Rn */
	IF(0x0C08F322u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F324u, 2);  /* 0C08F322 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08F324 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08F328u, 2);  /* 0C08F326 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C08F328 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C08F32Cu, 2);  /* 0C08F32A mov.l @Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C08F32Eu, 1);  /* 0C08F32C mov.l @(disp,pc),Rn */
L_0C08F32E: BLKS(0x0C08F32Eu);
	IF(0x0C08F32Eu); { u32 t_ = r0; PR = 0x0C08F332u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F332u); }  /* 0C08F32E jsr @Rn */
L_0C08F332: BLKS(0x0C08F332u);
	W32(r8, r9); UPD(0x0C08F334u, 1);  /* 0C08F332 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C08F334 add #imm,Rn */
	IF(0x0C08F336u); ;  /* 0C08F336 nop */
	UPD(0x0C08F338u, 2);
L_0C08F338: BLKS(0x0C08F338u);
	r15 = r14;  /* 0C08F338 mov Rm,Rn */
	IF(0x0C08F33Au); PR = R32(r15); r15 += 4; UPD(0x0C08F33Cu, 2);  /* 0C08F33A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F33Eu, 1);  /* 0C08F33C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F340u, 1);  /* 0C08F33E mov.l @Rm+,Rn */
	IF(0x0C08F340u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08F340 rts */
L_0C08F350: BLKS(0x0C08F350u);
	r3 = 0xB4u; UPD(0x0C08F352u, 1);  /* 0C08F350 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F352 add #imm,Rn */
	IF(0x0C08F354u); MACL = r8 * r3;  /* 0C08F354 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08F358u, 4);  /* 0C08F356 mov.l @(disp,pc),Rn */
	IF(0x0C08F358u); r8 = MACL;  /* 0C08F358 sts macl,Rn */
	r8 += r2;  /* 0C08F35A add Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F35Eu, 3);  /* 0C08F35C mov.l @(disp,Rm),Rn */
	r0 = 0xFFFB0000u; UPD(0x0C08F360u, 1);  /* 0C08F35E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08F362u, 1);  /* 0C08F360 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFE0000u; UPD(0x0C08F364u, 1);  /* 0C08F362 mov.l @(disp,pc),Rn */
	{ r6 += r0; /* slot add Rm,Rn */ UPD(0x0C08F316u, 3); goto L_0C08F316; }  /* 0C08F364 bra */
L_0C08F370: BLKS(0x0C08F370u);
	r5 = 0xB4u; UPD(0x0C08F372u, 1);  /* 0C08F370 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F372 add #imm,Rn */
	IF(0x0C08F374u); MACL = r8 * r5;  /* 0C08F374 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08F378u, 4);  /* 0C08F376 mov.l @(disp,pc),Rn */
	IF(0x0C08F378u); r8 = MACL;  /* 0C08F378 sts macl,Rn */
	r8 += r0;  /* 0C08F37A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F37Eu, 3);  /* 0C08F37C mov.w @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08F37E mov #imm,Rn */
	IF(0x0C08F380u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F382u, 2);  /* 0C08F380 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08F382 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08F386u, 2);  /* 0C08F384 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F386 add #imm,Rn */
	IF(0x0C08F388u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F38Au, 2);  /* 0C08F388 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08F38A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08F38Eu, 2);  /* 0C08F38C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C08F390u, 1);  /* 0C08F38E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08F392u, 1);  /* 0C08F390 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F394u, 1);  /* 0C08F392 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08F32Eu, 3); goto L_0C08F32E; }  /* 0C08F394 bra */
L_0C08F3A0: BLKS(0x0C08F3A0u);
	r0 = 0xB4u; UPD(0x0C08F3A2u, 1);  /* 0C08F3A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F3A2 add #imm,Rn */
	IF(0x0C08F3A4u); MACL = r8 * r0;  /* 0C08F3A4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08F3A8u, 4);  /* 0C08F3A6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C08F3A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08F3ACu, 2);  /* 0C08F3AA mov.w @(disp,pc),Rn */
	IF(0x0C08F3ACu); r8 = MACL;  /* 0C08F3AC sts macl,Rn */
	r8 += r4;  /* 0C08F3AE add Rm,Rn */
	IF(0x0C08F3B0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3B2u, 3);  /* 0C08F3B0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08F3B2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08F3B6u, 2);  /* 0C08F3B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F3B6 add #imm,Rn */
	IF(0x0C08F3B8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3BAu, 2);  /* 0C08F3B8 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F3BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08F3BEu, 2);  /* 0C08F3BC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08F3C0u, 1);  /* 0C08F3BE mov.l @Rm,Rn */
L_0C08F3C0: BLKS(0x0C08F3C0u);
	r9 = 0xC0BECB0u; UPD(0x0C08F3C2u, 1);  /* 0C08F3C0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08F3C4u, 1);  /* 0C08F3C2 mov.l @(disp,Rm),Rn */
	IF(0x0C08F3C4u); { u32 t_ = r9; PR = 0x0C08F3C8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F3C8u); }  /* 0C08F3C4 jsr @Rn */
L_0C08F3C8: BLKS(0x0C08F3C8u);
	r3 = 0x0u;  /* 0C08F3C8 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C08F3CCu, 2);  /* 0C08F3CA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08F338u, 3); goto L_0C08F338; }  /* 0C08F3CC bra */
L_0C08F3D0: BLKS(0x0C08F3D0u);
	r9 = 0xB4u; UPD(0x0C08F3D2u, 1);  /* 0C08F3D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F3D2 add #imm,Rn */
	IF(0x0C08F3D4u); MACL = r8 * r9;  /* 0C08F3D4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08F3D8u, 4);  /* 0C08F3D6 mov.l @(disp,pc),Rn */
	IF(0x0C08F3D8u); r9 = MACL;  /* 0C08F3D8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08F3DCu, 2);  /* 0C08F3DA mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C08F3DC add Rm,Rn */
	IF(0x0C08F3DEu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F3E0u, 2);  /* 0C08F3DE mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08F3E0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08F3E4u, 2);  /* 0C08F3E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F3E4 add #imm,Rn */
	IF(0x0C08F3E6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F3E8u, 2);  /* 0C08F3E6 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08F3E8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08F3ECu, 2);  /* 0C08F3EA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C08F3EEu, 1);  /* 0C08F3EC mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08F3EE mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C08F3F2u, 2);  /* 0C08F3F0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08F3F4u, 1);  /* 0C08F3F2 mov.l @(disp,Rm),Rn */
	IF(0x0C08F3F4u); { u32 t_ = r0; PR = 0x0C08F3F8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F3F8u); }  /* 0C08F3F4 jsr @Rn */
L_0C08F3F8: BLKS(0x0C08F3F8u);
	r4 = r8;  /* 0C08F3F8 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08F3FCu, 2);  /* 0C08F3FA mov.l @(disp,pc),Rn */
	IF(0x0C08F3FCu); { u32 t_ = r8; PR = 0x0C08F400u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F400u); }  /* 0C08F3FC jsr @Rn */
L_0C08F400: BLKS(0x0C08F400u);
	IF(0x0C08F400u); T = (s32)r0 >= 0;  /* 0C08F400 cmp/pz Rn */
	if (!T) { UPD(0x0C08F414u, 4); goto L_0C08F414; }  /* 0C08F402 bf */
L_0C08F404: BLKS(0x0C08F404u);
	r5 = r0;  /* 0C08F404 mov Rm,Rn */
	r4 = 0xFFFE0000u; UPD(0x0C08F408u, 2);  /* 0C08F406 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08F40Au, 1);  /* 0C08F408 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C08F40A add Rm,Rn */
	r4 = 0x2u;  /* 0C08F40C mov #imm,Rn */
	UPD(0x0C08F40Eu, 2);
L_0C08F40E: BLKS(0x0C08F40Eu);
	r8 = 0xC07DE60u; UPD(0x0C08F410u, 1);  /* 0C08F40E mov.l @(disp,pc),Rn */
	IF(0x0C08F410u); { u32 t_ = r8; PR = 0x0C08F414u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C08F414u); }  /* 0C08F410 jsr @Rn */
L_0C08F414: BLKS(0x0C08F414u);
	r4 = 0x0u;  /* 0C08F414 mov #imm,Rn */
	{ W32(r9, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C08F338u, 4); goto L_0C08F338; }  /* 0C08F416 bra */
L_0C08F420: BLKS(0x0C08F420u);
	r3 = 0xB4u; UPD(0x0C08F422u, 1);  /* 0C08F420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F422 add #imm,Rn */
	IF(0x0C08F424u); MACL = r8 * r3;  /* 0C08F424 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F428u, 4);  /* 0C08F426 mov.l @(disp,pc),Rn */
	IF(0x0C08F428u); r9 = MACL;  /* 0C08F428 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08F42Cu, 2);  /* 0C08F42A mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C08F42C add Rm,Rn */
	IF(0x0C08F42Eu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F430u, 2);  /* 0C08F42E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F430 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08F434u, 2);  /* 0C08F432 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F434 add #imm,Rn */
	IF(0x0C08F436u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F438u, 2);  /* 0C08F436 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C08F438 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08F43Cu, 2);  /* 0C08F43A mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C08F43C mov #imm,Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08F440u, 2);  /* 0C08F43E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08F442u, 1);  /* 0C08F440 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08F444u, 1);  /* 0C08F442 mov.l @(disp,Rm),Rn */
	IF(0x0C08F444u); { u32 t_ = r0; PR = 0x0C08F448u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08F448u); }  /* 0C08F444 jsr @Rn */
L_0C08F448: BLKS(0x0C08F448u);
	r4 = r8;  /* 0C08F448 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C08F44Cu, 2);  /* 0C08F44A mov.l @(disp,pc),Rn */
	IF(0x0C08F44Cu); { u32 t_ = r8; PR = 0x0C08F450u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F450u); }  /* 0C08F44C jsr @Rn */
L_0C08F450: BLKS(0x0C08F450u);
	IF(0x0C08F450u); T = (s32)r0 >= 0;  /* 0C08F450 cmp/pz Rn */
	if (!T) { UPD(0x0C08F414u, 4); goto L_0C08F414; }  /* 0C08F452 bf */
L_0C08F454: BLKS(0x0C08F454u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08F456u, 1);  /* 0C08F454 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C08F456 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C08F40Eu, 4); goto L_0C08F40E; }  /* 0C08F458 bra */
L_0C08F460: BLKS(0x0C08F460u);
	r7 = 0xB4u; UPD(0x0C08F462u, 1);  /* 0C08F460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F462 add #imm,Rn */
	IF(0x0C08F464u); MACL = r8 * r7;  /* 0C08F464 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08F468u, 4);  /* 0C08F466 mov.l @(disp,pc),Rn */
	IF(0x0C08F468u); r8 = MACL;  /* 0C08F468 sts macl,Rn */
	r8 += r0;  /* 0C08F46A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F46Eu, 3);  /* 0C08F46C mov.w @(disp,pc),Rn */
	IF(0x0C08F46Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F470u, 1);  /* 0C08F46E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08F470 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08F474u, 2);  /* 0C08F472 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08F474 add #imm,Rn */
	IF(0x0C08F476u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F478u, 2);  /* 0C08F476 mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C08F478 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F47Cu, 2);  /* 0C08F47A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C08F47C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08F3C0u, 4); goto L_0C08F3C0; }  /* 0C08F47E bra */
L_0C08F4C0: BLKS(0x0C08F4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4C2u, 1);  /* 0C08F4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4C4u, 1);  /* 0C08F4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4C6u, 1);  /* 0C08F4C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4C8u, 1);  /* 0C08F4C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4CAu, 1);  /* 0C08F4C8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08F4CCu, 1);  /* 0C08F4CA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08F4CC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4D0u, 2);  /* 0C08F4CE mov.l Rm,@-Rn */
	IF(0x0C08F4D0u); MACL = r12 * r3;  /* 0C08F4D0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08F4D4u, 3);  /* 0C08F4D2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08F4D6u, 1);  /* 0C08F4D4 mov.l @(disp,pc),Rn */
	IF(0x0C08F4D6u); r2 = MACL;  /* 0C08F4D6 sts macl,Rn */
	IF(0x0C08F4D8u); r15 -= 4; W32(r15, PR); UPD(0x0C08F4DAu, 2);  /* 0C08F4D8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08F4DA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08F4DEu, 2);  /* 0C08F4DC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08F4DE add #imm,Rn */
	r0 = 0xEu;  /* 0C08F4E0 mov #imm,Rn */
	T = r2 > r0;  /* 0C08F4E2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F56Cu, 6); goto L_0C08F56C; } goto L_0C08F4E8; }  /* 0C08F4E4 bt/s */
L_0C08F4E8: BLKS(0x0C08F4E8u);
	r0 = 0xC08F4F8u;  /* 0C08F4E8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08F4EA add Rm,Rn */
	IF(0x0C08F4ECu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08F4EEu, 4);  /* 0C08F4EC mov.w @(r0,Rm),Rn */
	IF(0x0C08F4EEu); { u32 tv_ = (r4 + 0x0C08F4F2u); u32 t_ = PHYS(tv_); IF(0x0C08F4F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08F520u: goto L_0C08F520; case 0x0C08F56Cu: goto L_0C08F56C; case 0x0C08F720u: goto L_0C08F720; case 0x0C08F7C0u: goto L_0C08F7C0; case 0x0C08F810u: goto L_0C08F810; case 0x0C08F840u: goto L_0C08F840; case 0x0C08F880u: goto L_0C08F880; case 0x0C08F900u: goto L_0C08F900; case 0x0C08F910u: goto L_0C08F910; case 0x0C08F920u: goto L_0C08F920; default: JUMPD(tv_); } }  /* 0C08F4EE braf Rn */
L_0C08F520: BLKS(0x0C08F520u);
	r8 = 0xC0A9CB0u; UPD(0x0C08F522u, 1);  /* 0C08F520 mov.l @(disp,pc),Rn */
	IF(0x0C08F522u); { u32 t_ = r8; PR = 0x0C08F526u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08F526u); }  /* 0C08F522 jsr @Rn */
L_0C08F526: BLKS(0x0C08F526u);
	r1 = 0xB4u; UPD(0x0C08F528u, 1);  /* 0C08F526 mov.w @(disp,pc),Rn */
	IF(0x0C08F528u); MACL = r12 * r1;  /* 0C08F528 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08F52Cu, 3);  /* 0C08F52A mov.l @(disp,pc),Rn */
	IF(0x0C08F52Cu); r8 = MACL;  /* 0C08F52C sts macl,Rn */
	r8 += r6;  /* 0C08F52E add Rm,Rn */
	r8 += 0x3Cu;  /* 0C08F530 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C08F534u, 4);  /* 0C08F532 mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08F534 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F5B0u, 4); goto L_0C08F5B0; } goto L_0C08F53A; }  /* 0C08F536 bf/s */
L_0C08F53A: BLKS(0x0C08F53Au);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C08F53Cu, 2);  /* 0C08F53A mov.l @(disp,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C08F53Eu, 1);  /* 0C08F53C mov.w @(disp,pc),Rn */
	IF(0x0C08F53Eu); MACL = r7 * r6;  /* 0C08F53E mul.l Rm,Rn */
	IF(0x0C08F540u); r2 = MACL;  /* 0C08F540 sts macl,Rn */
	IF(0x0C08F542u); T = (s32)r2 >= 0;  /* 0C08F542 cmp/pz Rn */
	if (!T) { UPD(0x0C08F5A0u, 7); goto L_0C08F5A0; }  /* 0C08F544 bf */
L_0C08F546: BLKS(0x0C08F546u);
	r10 = R32(r8 + 0x30u); UPD(0x0C08F548u, 1);  /* 0C08F546 mov.l @(disp,Rm),Rn */
	r3 = r2;  /* 0C08F548 mov Rm,Rn */
	r7 = 0xFFFFFFF8u;  /* 0C08F54A mov #imm,Rn */
	IF(0x0C08F54Cu); MACL = r10 * r6;  /* 0C08F54C mul.l Rm,Rn */
	IF(0x0C08F54Eu); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C08F54E shad Rm,Rn */
	IF(0x0C08F550u); r2 = MACL;  /* 0C08F550 sts macl,Rn */
	IF(0x0C08F552u); T = (s32)r2 >= 0;  /* 0C08F552 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08F590u, 10); goto L_0C08F590; } UPD(0x0C08F558u, 1); goto L_0C08F558; }  /* 0C08F554 bf/s */
L_0C08F558: BLKS(0x0C08F558u);
	r13 = r2;  /* 0C08F558 mov Rm,Rn */
	IF(0x0C08F55Au); ARG0(0x4D7Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C08F55A shad Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C08F55Eu, 3);  /* 0C08F55C mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C08F560u, 1);  /* 0C08F55E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C08F560 add Rm,Rn */
	r12 += r13;  /* 0C08F562 add Rm,Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C08F566u, 3);  /* 0C08F564 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r0); UPD(0x0C08F568u, 1);  /* 0C08F566 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C08F56Au, 1);  /* 0C08F568 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F56Au); ;  /* 0C08F56A nop */
	UPD(0x0C08F56Cu, 1);
L_0C08F56C: BLKS(0x0C08F56Cu);
	r14 += 0xCu;  /* 0C08F56C add #imm,Rn */
	UPD(0x0C08F56Eu, 1);
L_0C08F56E: BLKS(0x0C08F56Eu);
	r15 = r14;  /* 0C08F56E mov Rm,Rn */
	IF(0x0C08F570u); PR = R32(r15); r15 += 4; UPD(0x0C08F572u, 2);  /* 0C08F570 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F574u, 1);  /* 0C08F572 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F576u, 1);  /* 0C08F574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F578u, 1);  /* 0C08F576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F57Au, 1);  /* 0C08F578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F57Cu, 1);  /* 0C08F57A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F57Eu, 1);  /* 0C08F57C mov.l @Rm+,Rn */
	IF(0x0C08F57Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08F57E rts */
L_0C08F590: BLKS(0x0C08F590u);
	r11 = 0xFFu; UPD(0x0C08F592u, 1);  /* 0C08F590 mov.w @(disp,pc),Rn */
	{ r2 += r11; /* slot add Rm,Rn */ UPD(0x0C08F558u, 3); goto L_0C08F558; }  /* 0C08F592 bra */
L_0C08F5A0: BLKS(0x0C08F5A0u);
	r9 = 0xFFu; UPD(0x0C08F5A2u, 1);  /* 0C08F5A0 mov.w @(disp,pc),Rn */
	{ r2 += r9; /* slot add Rm,Rn */ UPD(0x0C08F546u, 3); goto L_0C08F546; }  /* 0C08F5A2 bra */
L_0C08F5B0: BLKS(0x0C08F5B0u);
	r2 = 0xC0A9B40u; UPD(0x0C08F5B2u, 1);  /* 0C08F5B0 mov.l @(disp,pc),Rn */
	IF(0x0C08F5B2u); { u32 t_ = r2; PR = 0x0C08F5B6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08F5B6u); }  /* 0C08F5B2 jsr @Rn */
L_0C08F5B6: BLKS(0x0C08F5B6u);
	r2 = 0x99u; UPD(0x0C08F5B8u, 1);  /* 0C08F5B6 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08F5B8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F5BCu, 2);  /* 0C08F5BA mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C08F5BC add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C08F5BE extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08F5C0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08F56Cu, 6); goto L_0C08F56C; } UPD(0x0C08F5C6u, 1); goto L_0C08F5C6; }  /* 0C08F5C2 bf/s */
L_0C08F5C6: BLKS(0x0C08F5C6u);
	r5 = 0x0u;  /* 0C08F5C6 mov #imm,Rn */
	W8(r2, r5); UPD(0x0C08F5CAu, 2);  /* 0C08F5C8 mov.b Rm,@Rn */
	r4 = 0x0u;  /* 0C08F5CA mov #imm,Rn */
	W32(r14, r4); UPD(0x0C08F5CEu, 2);  /* 0C08F5CC mov.l Rm,@Rn */
	r13 = r8;  /* 0C08F5CE mov Rm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C08F5D2u, 2);  /* 0C08F5D0 mov.l Rm,@(disp,Rn) */
L_0C08F5D2: BLKS(0x0C08F5D2u);
	r2 = 0xB4u; UPD(0x0C08F5D4u, 1);  /* 0C08F5D2 mov.w @(disp,pc),Rn */
	IF(0x0C08F5D4u); MACL = r12 * r2;  /* 0C08F5D4 mul.l Rm,Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C08F5D8u, 3);  /* 0C08F5D6 mov.l @(disp,Rm),Rn */
	IF(0x0C08F5D8u); r9 = MACL;  /* 0C08F5D8 sts macl,Rn */
	r4 = 0xC1A9284u; UPD(0x0C08F5DCu, 2);  /* 0C08F5DA mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08F5DEu, 1);  /* 0C08F5DC mov.l Rm,@(disp,Rn) */
	r4 += r10;  /* 0C08F5DE add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C08F5E2u, 2);  /* 0C08F5E0 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C08F5E4u, 1);  /* 0C08F5E2 mov.l @Rm,Rn */
	r0 = R32(r4 + 0x4u); UPD(0x0C08F5E6u, 1);  /* 0C08F5E4 mov.l @(disp,Rm),Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C08F5E8u, 1);  /* 0C08F5E6 mov.l @(disp,Rm),Rn */
	r9 = R32(r13 + 0x28u); UPD(0x0C08F5EAu, 1);  /* 0C08F5E8 mov.l @(disp,Rm),Rn */
	r10 += r5;  /* 0C08F5EA add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C08F5EEu, 2);  /* 0C08F5EC mov.l @(disp,pc),Rn */
	IF(0x0C08F5EEu); { u32 t_ = r11; PR = 0x0C08F5F2u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08F5F2u); }  /* 0C08F5EE jsr @Rn */
L_0C08F5F2: BLKS(0x0C08F5F2u);
	r8 = R32(r14); UPD(0x0C08F5F4u, 1);  /* 0C08F5F2 mov.l @Rm,Rn */
	r1 = 0x1u;  /* 0C08F5F4 mov #imm,Rn */
	r7 = 0xC062780u; UPD(0x0C08F5F8u, 2);  /* 0C08F5F6 mov.l @(disp,pc),Rn */
	r8 &= r1;  /* 0C08F5F8 and Rm,Rn */
	r3 = 0xC1A92B4u; UPD(0x0C08F5FCu, 2);  /* 0C08F5FA mov.l @(disp,pc),Rn */
	IF(0x0C08F5FCu); r8 <<= 2;  /* 0C08F5FC shll2 Rn */
	r11 = 0xFFFE8000u; UPD(0x0C08F600u, 2);  /* 0C08F5FE mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C08F600 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C08F604u, 2);  /* 0C08F602 mov.l @(disp,pc),Rn */
	IF(0x0C08F604u); { u32 t_ = r7; PR = 0x0C08F608u; r11 -= r0; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08F608u); }  /* 0C08F604 jsr @Rn */
L_0C08F608: BLKS(0x0C08F608u);
	r3 = R32(r8); UPD(0x0C08F60Au, 1);  /* 0C08F608 mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C08F60A add #imm,Rn */
	r3 += r0;  /* 0C08F60C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F610u, 3);  /* 0C08F60E mov.w @(disp,pc),Rn */
	r7 = r9;  /* 0C08F610 mov Rm,Rn */
	IF(0x0C08F612u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08F614u, 2);  /* 0C08F612 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08F614 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08F618u, 2);  /* 0C08F616 mov.l Rm,@Rn */
	r0 = r13;  /* 0C08F618 mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C08F61Cu, 2);  /* 0C08F61A mov.w @(disp,pc),Rn */
	r6 = r10;  /* 0C08F61C mov Rm,Rn */
	IF(0x0C08F61Eu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08F620u, 2);  /* 0C08F61E mov.b @(r0,Rm),Rn */
	r5 = 0x8u;  /* 0C08F620 mov #imm,Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C08F624u, 2);  /* 0C08F622 mov.l Rm,@(disp,Rn) */
	r0 = r2 & 0xFF;  /* 0C08F624 extu.b Rm,Rn */
	r8 = 0xFFFFC000u; UPD(0x0C08F628u, 2);  /* 0C08F626 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C08F628 add #imm,Rn */
	r11 = 0x808080u; UPD(0x0C08F62Cu, 2);  /* 0C08F62A mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C08F62C add Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C08F630u, 2);  /* 0C08F62E mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08F632u, 1);  /* 0C08F630 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C08F634u, 1);  /* 0C08F632 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r11); UPD(0x0C08F636u, 1);  /* 0C08F634 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F636u); { u32 t_ = r10; PR = 0x0C08F63Au; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08F63Au); }  /* 0C08F636 jsr @Rn */
L_0C08F63A: BLKS(0x0C08F63Au);
	r7 = R32(r14); UPD(0x0C08F63Cu, 1);  /* 0C08F63A mov.l @Rm,Rn */
	r6 = 0x3u;  /* 0C08F63C mov #imm,Rn */
	r7 += 0x1u;  /* 0C08F63E add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C08F640 exts.w Rm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C08F644u, 4);  /* 0C08F642 mov.l @(disp,Rm),Rn */
	r15 += 0x14u;  /* 0C08F644 add #imm,Rn */
	W32(r14, r8); UPD(0x0C08F648u, 2);  /* 0C08F646 mov.l Rm,@Rn */
	r9 += 0x8u;  /* 0C08F648 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C08F64Cu, 2);  /* 0C08F64A mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C08F64C cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08F5D2u, 4); goto L_0C08F5D2; } UPD(0x0C08F652u, 1); goto L_0C08F652; }  /* 0C08F64E bf/s */
L_0C08F652: BLKS(0x0C08F652u);
	r12 = 0x0u;  /* 0C08F652 mov #imm,Rn */
	W32(r14, r12); UPD(0x0C08F656u, 2);  /* 0C08F654 mov.l Rm,@Rn */
	r13 = R32(r14 + 0x4u); UPD(0x0C08F658u, 1);  /* 0C08F656 mov.l @(disp,Rm),Rn */
	r12 = 0xC286578u; UPD(0x0C08F65Au, 1);  /* 0C08F658 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C08F65A add Rm,Rn */
	r13 = 0x0u;  /* 0C08F65C mov #imm,Rn */
	UPD(0x0C08F65Eu, 2);
L_0C08F65E: BLKS(0x0C08F65Eu);
	r5 = 0xC1A92A4u; UPD(0x0C08F660u, 1);  /* 0C08F65E mov.l @(disp,pc),Rn */
	r5 += r13;  /* 0C08F660 add Rm,Rn */
	r9 = R32(r5); UPD(0x0C08F664u, 2);  /* 0C08F662 mov.l @Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C08F666u, 1);  /* 0C08F664 mov.l @(disp,Rm),Rn */
	r10 += r9;  /* 0C08F666 add Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C08F66Au, 2);  /* 0C08F668 mov.l @(disp,Rm),Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C08F66Cu, 1);  /* 0C08F66A mov.l @(disp,Rm),Rn */
	r11 = 0xC062780u; UPD(0x0C08F66Eu, 1);  /* 0C08F66C mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C08F66E add Rm,Rn */
	r4 = 0x4000u; UPD(0x0C08F672u, 2);  /* 0C08F670 mov.w @(disp,pc),Rn */
	IF(0x0C08F672u); { u32 t_ = r11; PR = 0x0C08F676u; r13 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08F676u); }  /* 0C08F672 jsr @Rn */
L_0C08F676: BLKS(0x0C08F676u);
	r11 = 0xFFFF8000u; UPD(0x0C08F678u, 1);  /* 0C08F676 mov.w @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C08F678 mov #imm,Rn */
	r8 = R32(r14); UPD(0x0C08F67Cu, 2);  /* 0C08F67A mov.l @Rm,Rn */
	r11 -= r0;  /* 0C08F67C sub Rm,Rn */
	r2 = 0xC062780u; UPD(0x0C08F680u, 2);  /* 0C08F67E mov.l @(disp,pc),Rn */
	r8 &= r1;  /* 0C08F680 and Rm,Rn */
	r0 = 0xC1A92BCu; UPD(0x0C08F684u, 2);  /* 0C08F682 mov.l @(disp,pc),Rn */
	IF(0x0C08F684u); r8 <<= 2;  /* 0C08F684 shll2 Rn */
	r4 = 0x4000u; UPD(0x0C08F688u, 2);  /* 0C08F686 mov.w @(disp,pc),Rn */
	IF(0x0C08F688u); { u32 t_ = r2; PR = 0x0C08F68Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08F68Cu); }  /* 0C08F688 jsr @Rn */
L_0C08F68C: BLKS(0x0C08F68Cu);
	r4 = R32(r8); UPD(0x0C08F68Eu, 1);  /* 0C08F68C mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C08F68E add #imm,Rn */
	r4 += r0;  /* 0C08F690 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F694u, 3);  /* 0C08F692 mov.w @(disp,pc),Rn */
	IF(0x0C08F694u); r7 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08F696u, 1);  /* 0C08F694 mov.b @(r0,Rm),Rn */
	r8 = r7 & 0xFF;  /* 0C08F696 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08F69Au, 2);  /* 0C08F698 mov.l Rm,@Rn */
	r0 = r12;  /* 0C08F69A mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08F69Eu, 2);  /* 0C08F69C mov.w @(disp,pc),Rn */
	r7 = r9;  /* 0C08F69E mov Rm,Rn */
	IF(0x0C08F6A0u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08F6A2u, 2);  /* 0C08F6A0 mov.b @(r0,Rm),Rn */
	r3 = 0xFFFFE000u; UPD(0x0C08F6A4u, 1);  /* 0C08F6A2 mov.w @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C08F6A4 extu.b Rm,Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C08F6A8u, 2);  /* 0C08F6A6 mov.l Rm,@(disp,Rn) */
	r4 += r3;  /* 0C08F6A8 add Rm,Rn */
	r0 = 0x808080u; UPD(0x0C08F6ACu, 2);  /* 0C08F6AA mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C08F6AC mov Rm,Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C08F6B0u, 2);  /* 0C08F6AE mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08F6B0 mov #imm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08F6B4u, 2);  /* 0C08F6B2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r4); UPD(0x0C08F6B6u, 1);  /* 0C08F6B4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C08F6B8u, 1);  /* 0C08F6B6 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F6B8u); { u32 t_ = r11; PR = 0x0C08F6BCu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08F6BCu); }  /* 0C08F6B8 jsr @Rn */
L_0C08F6BC: BLKS(0x0C08F6BCu);
	r3 = R32(r14); UPD(0x0C08F6BEu, 1);  /* 0C08F6BC mov.l @Rm,Rn */
	r6 = 0x1u;  /* 0C08F6BE mov #imm,Rn */
	r3 += 0x1u;  /* 0C08F6C0 add #imm,Rn */
	r7 = (u32)(s32)(s16)r3;  /* 0C08F6C2 exts.w Rm,Rn */
	W32(r14, r7); UPD(0x0C08F6C6u, 4);  /* 0C08F6C4 mov.l Rm,@Rn */
	r8 = R32(r14); UPD(0x0C08F6C8u, 1);  /* 0C08F6C6 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C08F6C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F65Eu, 4); goto L_0C08F65E; } goto L_0C08F6CE; }  /* 0C08F6CA bf/s */
L_0C08F6CE: BLKS(0x0C08F6CEu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08F56Eu, 4); goto L_0C08F56E; }  /* 0C08F6CE bra */
L_0C08F720: BLKS(0x0C08F720u);
	r10 = 0xC0A8CA0u; UPD(0x0C08F722u, 1);  /* 0C08F720 mov.l @(disp,pc),Rn */
	IF(0x0C08F722u); { u32 t_ = r10; PR = 0x0C08F726u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08F726u); }  /* 0C08F722 jsr @Rn */
L_0C08F726: BLKS(0x0C08F726u);
	IF(0x0C08F726u); T = (s32)r0 >= 0;  /* 0C08F726 cmp/pz Rn */
	if (!T) { UPD(0x0C08F7B0u, 4); goto L_0C08F7B0; }  /* 0C08F728 bf */
L_0C08F72A: BLKS(0x0C08F72Au);
	r7 = 0xB4u; UPD(0x0C08F72Cu, 1);  /* 0C08F72A mov.w @(disp,pc),Rn */
	IF(0x0C08F72Cu); MACL = r12 * r7;  /* 0C08F72C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08F730u, 3);  /* 0C08F72E mov.l @(disp,pc),Rn */
	IF(0x0C08F730u); r3 = MACL;  /* 0C08F730 sts macl,Rn */
	IF(0x0C08F732u); MACL = r0 * r7;  /* 0C08F732 mul.l Rm,Rn */
	r3 += r11;  /* 0C08F734 add Rm,Rn */
	r1 = R32(r3 + 0x2Cu); UPD(0x0C08F738u, 5);  /* 0C08F736 mov.l @(disp,Rm),Rn */
	IF(0x0C08F738u); r7 = MACL;  /* 0C08F738 sts macl,Rn */
	r7 += r11;  /* 0C08F73A add Rm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C08F73Eu, 3);  /* 0C08F73C mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C08F740u, 1);  /* 0C08F73E mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08F740 add Rm,Rn */
	r8 = R32(r3 + 0x30u); UPD(0x0C08F744u, 2);  /* 0C08F742 mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C08F744 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C08F748u, 2);  /* 0C08F746 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x28u, r6); UPD(0x0C08F74Au, 1);  /* 0C08F748 mov.l Rm,@(disp,Rn) */
	r3 += 0x3Cu;  /* 0C08F74A add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C08F74Eu, 2);  /* 0C08F74C mov.w @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C08F74E tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F7A0u, 4); goto L_0C08F7A0; } goto L_0C08F754; }  /* 0C08F750 bt/s */
L_0C08F754: BLKS(0x0C08F754u);
	r7 += 0x3Cu;  /* 0C08F754 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C08F758u, 3);  /* 0C08F756 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08F758 tst Rm,Rn */
	if (T) { UPD(0x0C08F790u, 4); goto L_0C08F790; }  /* 0C08F75A bt */
L_0C08F75C: BLKS(0x0C08F75Cu);
	r4 = 0x9Bu; UPD(0x0C08F75Eu, 1);  /* 0C08F75C mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C08F75E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C08F762u, 2);  /* 0C08F760 mov.b @Rm,Rn */
	r5 = r0;  /* 0C08F762 mov Rm,Rn */
	r5 += 0x1u;  /* 0C08F764 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08F766 and #imm,r0 */
	W8(r4, r5); UPD(0x0C08F76Au, 4);  /* 0C08F768 mov.b Rm,@Rn */
	W32(r3 + 0xCu, r0); UPD(0x0C08F76Cu, 1);  /* 0C08F76A mov.l Rm,@(disp,Rn) */
L_0C08F76C: BLKS(0x0C08F76Cu);
	r1 = 0xC0A8AE0u; UPD(0x0C08F76Eu, 1);  /* 0C08F76C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08F76E mov Rm,Rn */
	UPD(0x0C08F770u, 1);
L_0C08F770: BLKS(0x0C08F770u);
	r14 += 0xCu;  /* 0C08F770 add #imm,Rn */
	r15 = r14;  /* 0C08F772 mov Rm,Rn */
	IF(0x0C08F774u); PR = R32(r15); r15 += 4; UPD(0x0C08F776u, 3);  /* 0C08F774 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F778u, 1);  /* 0C08F776 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F77Au, 1);  /* 0C08F778 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F77Cu, 1);  /* 0C08F77A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F77Eu, 1);  /* 0C08F77C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F780u, 1);  /* 0C08F77E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F782u, 1);  /* 0C08F780 mov.l @Rm+,Rn */
	IF(0x0C08F782u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08F250u: goto L_0C08F250; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C08F782 jmp @Rn */
L_0C08F790: BLKS(0x0C08F790u);
	r1 = 0xC08F250u; UPD(0x0C08F792u, 1);  /* 0C08F790 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08F770u, 3); goto L_0C08F770; }  /* 0C08F792 bra */
L_0C08F7A0: BLKS(0x0C08F7A0u);
	r1 = 0xC0A9CB0u; UPD(0x0C08F7A2u, 1);  /* 0C08F7A0 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08F770u, 3); goto L_0C08F770; }  /* 0C08F7A2 bra */
L_0C08F7B0: BLKS(0x0C08F7B0u);
	r10 = 0xB4u; UPD(0x0C08F7B2u, 1);  /* 0C08F7B0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08F7B2 mov #imm,Rn */
	IF(0x0C08F7B4u); MACL = r12 * r10;  /* 0C08F7B4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C08F7B8u, 4);  /* 0C08F7B6 mov.l @(disp,pc),Rn */
	IF(0x0C08F7B8u); r0 = MACL;  /* 0C08F7B8 sts macl,Rn */
	IF(0x0C08F7BAu); W32(r0 + r12, r3); UPD(0x0C08F7BCu, 2);  /* 0C08F7BA mov.l Rm,@(r0,Rn) */
L_0C08F7BC: BLKS(0x0C08F7BCu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08F56Eu, 3); goto L_0C08F56E; }  /* 0C08F7BC bra */
L_0C08F7C0: BLKS(0x0C08F7C0u);
	r9 = 0xC0A8CA0u; UPD(0x0C08F7C2u, 1);  /* 0C08F7C0 mov.l @(disp,pc),Rn */
	IF(0x0C08F7C2u); { u32 t_ = r9; PR = 0x0C08F7C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08F7C6u); }  /* 0C08F7C2 jsr @Rn */
L_0C08F7C6: BLKS(0x0C08F7C6u);
	IF(0x0C08F7C6u); T = (s32)r0 >= 0;  /* 0C08F7C6 cmp/pz Rn */
	if (!T) { UPD(0x0C08F7B0u, 4); goto L_0C08F7B0; }  /* 0C08F7C8 bf */
L_0C08F7CA: BLKS(0x0C08F7CAu);
	r6 = 0xB4u; UPD(0x0C08F7CCu, 1);  /* 0C08F7CA mov.w @(disp,pc),Rn */
	IF(0x0C08F7CCu); MACL = r12 * r6;  /* 0C08F7CC mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08F7D0u, 3);  /* 0C08F7CE mov.l @(disp,pc),Rn */
	IF(0x0C08F7D0u); r8 = MACL;  /* 0C08F7D0 sts macl,Rn */
	IF(0x0C08F7D2u); MACL = r0 * r6;  /* 0C08F7D2 mul.l Rm,Rn */
	r8 += r10;  /* 0C08F7D4 add Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C08F7D8u, 5);  /* 0C08F7D6 mov.w @(disp,pc),Rn */
	IF(0x0C08F7D8u); r6 = MACL;  /* 0C08F7D8 sts macl,Rn */
	r6 += r10;  /* 0C08F7DA add Rm,Rn */
	r0 = R32(r8); UPD(0x0C08F7DEu, 3);  /* 0C08F7DC mov.l @Rm,Rn */
	r11 = R32(r6); UPD(0x0C08F7E0u, 1);  /* 0C08F7DE mov.l @Rm,Rn */
	r0 &= r7;  /* 0C08F7E0 and Rm,Rn */
	r1 = 0x100u; UPD(0x0C08F7E4u, 2);  /* 0C08F7E2 mov.w @(disp,pc),Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C08F7E6u, 1);  /* 0C08F7E4 mov.l @(disp,Rm),Rn */
	r11 &= r1;  /* 0C08F7E6 and Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C08F7EAu, 2);  /* 0C08F7E8 mov.l @(disp,Rm),Rn */
	r0 |= r11;  /* 0C08F7EA or Rm,Rn */
	r4 = R32(r6 + 0x28u); UPD(0x0C08F7EEu, 2);  /* 0C08F7EC mov.l @(disp,Rm),Rn */
	r9 += r3;  /* 0C08F7EE add Rm,Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C08F7F2u, 2);  /* 0C08F7F0 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C08F7F2 add Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C08F7F6u, 2);  /* 0C08F7F4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C08F7F8u, 1);  /* 0C08F7F6 mov.l Rm,@(disp,Rn) */
	W32(r8, r0); UPD(0x0C08F7FAu, 1);  /* 0C08F7F8 mov.l Rm,@Rn */
	r8 += 0x3Cu;  /* 0C08F7FA add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C08F7FEu, 2);  /* 0C08F7FC mov.w @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C08F7FE tst Rm,Rn */
	{ u32 c_ = T; r6 += 0x3Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F7A0u, 4); goto L_0C08F7A0; } goto L_0C08F804; }  /* 0C08F800 bt/s */
L_0C08F804: BLKS(0x0C08F804u);
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C08F806u, 2);  /* 0C08F804 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08F806 tst Rm,Rn */
	if (!T) { UPD(0x0C08F7BCu, 4); goto L_0C08F7BC; }  /* 0C08F808 bf */
L_0C08F80A: BLKS(0x0C08F80Au);
	{ IF(0x0C08F80Cu); ; /* slot nop */ UPD(0x0C08F790u, 3); goto L_0C08F790; }  /* 0C08F80A bra */
L_0C08F810: BLKS(0x0C08F810u);
	r13 = 0xC0A8D30u; UPD(0x0C08F812u, 1);  /* 0C08F810 mov.l @(disp,pc),Rn */
	IF(0x0C08F812u); { u32 t_ = r13; PR = 0x0C08F816u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F816u); }  /* 0C08F812 jsr @Rn */
L_0C08F816: BLKS(0x0C08F816u);
	IF(0x0C08F816u); T = (s32)r0 >= 0;  /* 0C08F816 cmp/pz Rn */
	if (!T) { UPD(0x0C08F790u, 4); goto L_0C08F790; }  /* 0C08F818 bf */
L_0C08F81A: BLKS(0x0C08F81Au);
	r2 = 0xB4u; UPD(0x0C08F81Cu, 1);  /* 0C08F81A mov.w @(disp,pc),Rn */
	IF(0x0C08F81Cu); MACL = r12 * r2;  /* 0C08F81C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F820u, 3);  /* 0C08F81E mov.l @(disp,pc),Rn */
	IF(0x0C08F820u); r12 = MACL;  /* 0C08F820 sts macl,Rn */
	IF(0x0C08F822u); MACL = r0 * r2;  /* 0C08F822 mul.l Rm,Rn */
	r12 += r7;  /* 0C08F824 add Rm,Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C08F828u, 5);  /* 0C08F826 mov.l @(disp,Rm),Rn */
	IF(0x0C08F828u); r11 = MACL;  /* 0C08F828 sts macl,Rn */
	r11 += r7;  /* 0C08F82A add Rm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C08F82Eu, 3);  /* 0C08F82C mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08F830u, 1);  /* 0C08F82E mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08F830 add Rm,Rn */
	r8 = R32(r12 + 0x30u); UPD(0x0C08F834u, 2);  /* 0C08F832 mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C08F834 add Rm,Rn */
	W32(r12 + 0x24u, r0); UPD(0x0C08F838u, 2);  /* 0C08F836 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r6); UPD(0x0C08F83Au, 1);  /* 0C08F838 mov.l Rm,@(disp,Rn) */
L_0C08F83A: BLKS(0x0C08F83Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08F56Eu, 3); goto L_0C08F56E; }  /* 0C08F83A bra */
L_0C08F840: BLKS(0x0C08F840u);
	r13 = 0xC0A8D30u; UPD(0x0C08F842u, 1);  /* 0C08F840 mov.l @(disp,pc),Rn */
	IF(0x0C08F842u); { u32 t_ = r13; PR = 0x0C08F846u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F846u); }  /* 0C08F842 jsr @Rn */
L_0C08F846: BLKS(0x0C08F846u);
	IF(0x0C08F846u); T = (s32)r0 >= 0;  /* 0C08F846 cmp/pz Rn */
	if (!T) { UPD(0x0C08F790u, 4); goto L_0C08F790; }  /* 0C08F848 bf */
L_0C08F84A: BLKS(0x0C08F84Au);
	r10 = 0xB4u; UPD(0x0C08F84Cu, 1);  /* 0C08F84A mov.w @(disp,pc),Rn */
	IF(0x0C08F84Cu); MACL = r12 * r10;  /* 0C08F84C mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08F850u, 3);  /* 0C08F84E mov.l @(disp,pc),Rn */
	IF(0x0C08F850u); r8 = MACL;  /* 0C08F850 sts macl,Rn */
	IF(0x0C08F852u); MACL = r0 * r10;  /* 0C08F852 mul.l Rm,Rn */
	r8 += r3;  /* 0C08F854 add Rm,Rn */
	r7 = R32(r8 + 0x30u); UPD(0x0C08F858u, 5);  /* 0C08F856 mov.l @(disp,Rm),Rn */
	IF(0x0C08F858u); r4 = MACL;  /* 0C08F858 sts macl,Rn */
	r4 += r3;  /* 0C08F85A add Rm,Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C08F85Eu, 3);  /* 0C08F85C mov.l @(disp,Rm),Rn */
	r11 = 0x9Bu; UPD(0x0C08F860u, 1);  /* 0C08F85E mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C08F860 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C08F864u, 2);  /* 0C08F862 mov.l Rm,@(disp,Rn) */
	r11 += r8;  /* 0C08F864 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C08F868u, 2);  /* 0C08F866 mov.b @Rm,Rn */
	r5 = R32(r4 + 0x24u); UPD(0x0C08F86Au, 1);  /* 0C08F868 mov.l @(disp,Rm),Rn */
	r1 = r0;  /* 0C08F86A mov Rm,Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C08F86Eu, 2);  /* 0C08F86C mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C08F86E add #imm,Rn */
	r5 += r9;  /* 0C08F870 add Rm,Rn */
	r0 &= 0x1Fu;  /* 0C08F872 and #imm,r0 */
	W32(r8 + 0x24u, r5); UPD(0x0C08F876u, 4);  /* 0C08F874 mov.l Rm,@(disp,Rn) */
	W8(r11, r1); UPD(0x0C08F878u, 1);  /* 0C08F876 mov.b Rm,@Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F76Cu, 3); goto L_0C08F76C; }  /* 0C08F878 bra */
L_0C08F880: BLKS(0x0C08F880u);
	r9 = 0xC0A8D30u; UPD(0x0C08F882u, 1);  /* 0C08F880 mov.l @(disp,pc),Rn */
	IF(0x0C08F882u); { u32 t_ = r9; PR = 0x0C08F886u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C08F886u); }  /* 0C08F882 jsr @Rn */
L_0C08F886: BLKS(0x0C08F886u);
	IF(0x0C08F886u); T = (s32)r0 >= 0;  /* 0C08F886 cmp/pz Rn */
	if (!T) { UPD(0x0C08F8D0u, 4); goto L_0C08F8D0; }  /* 0C08F888 bf */
L_0C08F88A: BLKS(0x0C08F88Au);
	r2 = 0xB4u; UPD(0x0C08F88Cu, 1);  /* 0C08F88A mov.w @(disp,pc),Rn */
	IF(0x0C08F88Cu); MACL = r12 * r2;  /* 0C08F88C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08F890u, 3);  /* 0C08F88E mov.l @(disp,pc),Rn */
	IF(0x0C08F890u); r4 = MACL;  /* 0C08F890 sts macl,Rn */
	IF(0x0C08F892u); MACL = r0 * r2;  /* 0C08F892 mul.l Rm,Rn */
	r4 += r7;  /* 0C08F894 add Rm,Rn */
	r5 = R32(r4); UPD(0x0C08F898u, 5);  /* 0C08F896 mov.l @Rm,Rn */
	IF(0x0C08F898u); r13 = MACL;  /* 0C08F898 sts macl,Rn */
	r13 += r7;  /* 0C08F89A add Rm,Rn */
	r3 = R32(r13); UPD(0x0C08F89Eu, 3);  /* 0C08F89C mov.l @Rm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C08F8A0u, 1);  /* 0C08F89E mov.w @(disp,pc),Rn */
	r10 = 0x100u; UPD(0x0C08F8A2u, 1);  /* 0C08F8A0 mov.w @(disp,pc),Rn */
	r5 &= r6;  /* 0C08F8A2 and Rm,Rn */
	r0 = R32(r13 + 0x24u); UPD(0x0C08F8A6u, 2);  /* 0C08F8A4 mov.l @(disp,Rm),Rn */
	r3 &= r10;  /* 0C08F8A6 and Rm,Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C08F8AAu, 2);  /* 0C08F8A8 mov.l @(disp,Rm),Rn */
	r5 |= r3;  /* 0C08F8AA or Rm,Rn */
	r1 = R32(r4 + 0x2Cu); UPD(0x0C08F8AEu, 2);  /* 0C08F8AC mov.l @(disp,Rm),Rn */
	r11 = R32(r4 + 0x30u); UPD(0x0C08F8B0u, 1);  /* 0C08F8AE mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08F8B0 add Rm,Rn */
	r8 += r11;  /* 0C08F8B2 add Rm,Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C08F8B6u, 3);  /* 0C08F8B4 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r8); UPD(0x0C08F8B8u, 1);  /* 0C08F8B6 mov.l Rm,@(disp,Rn) */
	W32(r4, r5); UPD(0x0C08F8BAu, 1);  /* 0C08F8B8 mov.l Rm,@Rn */
L_0C08F8BA: BLKS(0x0C08F8BAu);
	r1 = 0x0u;  /* 0C08F8BA mov #imm,Rn */
	UPD(0x0C08F8BCu, 1);
L_0C08F8BC: BLKS(0x0C08F8BCu);
	r2 = (u32)(s32)(s16)r1;  /* 0C08F8BC exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08F8BE tst Rm,Rn */
	UPD(0x0C08F8C0u, 2);
L_0C08F8C0: BLKS(0x0C08F8C0u);
	if (T) { UPD(0x0C08F83Au, 3); goto L_0C08F83A; }  /* 0C08F8C0 bt */
L_0C08F8C2: BLKS(0x0C08F8C2u);
	{ IF(0x0C08F8C4u); ; /* slot nop */ UPD(0x0C08F790u, 3); goto L_0C08F790; }  /* 0C08F8C2 bra */
L_0C08F8D0: BLKS(0x0C08F8D0u);
	r3 = 0xB4u; UPD(0x0C08F8D2u, 1);  /* 0C08F8D0 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C08F8D2 mov #imm,Rn */
	IF(0x0C08F8D4u); MACL = r12 * r3;  /* 0C08F8D4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08F8D8u, 4);  /* 0C08F8D6 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C08F8D8 mov #imm,Rn */
	IF(0x0C08F8DAu); r0 = MACL;  /* 0C08F8DA sts macl,Rn */
	{ IF(0x0C08F8DEu); W32(r0 + r4, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08F8BCu, 5); goto L_0C08F8BC; }  /* 0C08F8DC bra */
L_0C08F900: BLKS(0x0C08F900u);
	r0 = 0xC08DBE0u; UPD(0x0C08F902u, 1);  /* 0C08F900 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08F902 mov Rm,Rn */
	UPD(0x0C08F904u, 1);
L_0C08F904: BLKS(0x0C08F904u);
	IF(0x0C08F904u); { u32 t_ = r0; PR = 0x0C08F908u; IF(0x0C08F906u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08F908u); }  /* 0C08F904 jsr @Rn */
L_0C08F908: BLKS(0x0C08F908u);
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C08F8C0u, 3); goto L_0C08F8C0; }  /* 0C08F908 bra */
L_0C08F910: BLKS(0x0C08F910u);
	r0 = 0xC08E060u; UPD(0x0C08F912u, 1);  /* 0C08F910 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C08F904u, 3); goto L_0C08F904; }  /* 0C08F912 bra */
L_0C08F920: BLKS(0x0C08F920u);
	r9 = 0xC0A8CA0u; UPD(0x0C08F922u, 1);  /* 0C08F920 mov.l @(disp,pc),Rn */
	IF(0x0C08F922u); { u32 t_ = r9; PR = 0x0C08F926u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08F926u); }  /* 0C08F922 jsr @Rn */
L_0C08F926: BLKS(0x0C08F926u);
	IF(0x0C08F926u); T = (s32)r0 >= 0;  /* 0C08F926 cmp/pz Rn */
	if (!T) { UPD(0x0C08F8D0u, 4); goto L_0C08F8D0; }  /* 0C08F928 bf */
L_0C08F92A: BLKS(0x0C08F92Au);
	r2 = 0xB4u; UPD(0x0C08F92Cu, 1);  /* 0C08F92A mov.w @(disp,pc),Rn */
	IF(0x0C08F92Cu); MACL = r12 * r2;  /* 0C08F92C mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08F930u, 3);  /* 0C08F92E mov.l @(disp,pc),Rn */
	IF(0x0C08F930u); r13 = MACL;  /* 0C08F930 sts macl,Rn */
	IF(0x0C08F932u); MACL = r0 * r2;  /* 0C08F932 mul.l Rm,Rn */
	r13 += r10;  /* 0C08F934 add Rm,Rn */
	r1 = R32(r13 + 0x30u); UPD(0x0C08F938u, 5);  /* 0C08F936 mov.l @(disp,Rm),Rn */
	IF(0x0C08F938u); r9 = MACL;  /* 0C08F938 sts macl,Rn */
	r9 += r10;  /* 0C08F93A add Rm,Rn */
	r11 = R32(r9); UPD(0x0C08F93Eu, 3);  /* 0C08F93C mov.l @Rm,Rn */
	r0 = 0x100u; UPD(0x0C08F940u, 1);  /* 0C08F93E mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C08F942u, 1);  /* 0C08F940 mov.l @(disp,Rm),Rn */
	r11 &= r0;  /* 0C08F942 and Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C08F946u, 2);  /* 0C08F944 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C08F946 add Rm,Rn */
	r3 = R32(r13 + 0x2Cu); UPD(0x0C08F94Au, 2);  /* 0C08F948 mov.l @(disp,Rm),Rn */
	r8 = R32(r13); UPD(0x0C08F94Cu, 1);  /* 0C08F94A mov.l @Rm,Rn */
	r5 += r3;  /* 0C08F94C add Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C08F950u, 2);  /* 0C08F94E mov.w @(disp,pc),Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C08F952u, 1);  /* 0C08F950 mov.l @(disp,Rm),Rn */
	r8 &= r7;  /* 0C08F952 and Rm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C08F956u, 2);  /* 0C08F954 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C08F956 add #imm,Rn */
	W32(r13 + 0x28u, r4); UPD(0x0C08F95Au, 2);  /* 0C08F958 mov.l Rm,@(disp,Rn) */
	r0 &= 0x3Fu;  /* 0C08F95A and #imm,r0 */
	r10 = 0xC0BC1B0u; UPD(0x0C08F95Eu, 2);  /* 0C08F95C mov.l @(disp,pc),Rn */
	r8 |= r11;  /* 0C08F95E or Rm,Rn */
	W32(r13 + 0x24u, r5); UPD(0x0C08F962u, 2);  /* 0C08F960 mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C08F962 mov Rm,Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C08F966u, 2);  /* 0C08F964 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F966u); { u32 t_ = r6; PR = 0x0C08F96Au; W32(r13, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08F96Au); }  /* 0C08F966 jsr @Rn */
L_0C08F96A: BLKS(0x0C08F96Au);
	r4 = r12;  /* 0C08F96A mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08F96C mov #imm,Rn */
	IF(0x0C08F96Eu); { u32 t_ = r10; PR = 0x0C08F972u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08F972u); }  /* 0C08F96E jsr @Rn */
L_0C08F972: BLKS(0x0C08F972u);
	T = (r0 & r0) == 0;  /* 0C08F972 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08F8BCu, 4); goto L_0C08F8BC; } goto L_0C08F978; }  /* 0C08F974 bt/s */
L_0C08F978: BLKS(0x0C08F978u);
	r8 = 0xC069B50u; UPD(0x0C08F97Au, 2);  /* 0C08F978 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C08F97Cu, 1);  /* 0C08F97A mov.l @(disp,pc),Rn */
	IF(0x0C08F97Cu); { u32 t_ = r8; PR = 0x0C08F980u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08F980u); }  /* 0C08F97C jsr @Rn */
L_0C08F980: BLKS(0x0C08F980u);
	r5 = 0x2A0u; UPD(0x0C08F982u, 1);  /* 0C08F980 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08F982 exts.w Rm,Rn */
	IF(0x0C08F984u); MACL = r1 * r5;  /* 0C08F984 mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C08F988u, 4);  /* 0C08F986 mov.l @(disp,pc),Rn */
	IF(0x0C08F988u); r3 = MACL;  /* 0C08F988 sts macl,Rn */
	r3 += r4;  /* 0C08F98A add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C08F98Eu, 3);  /* 0C08F98C mov.l @(disp,pc),Rn */
	r8 = 0x86u; UPD(0x0C08F990u, 1);  /* 0C08F98E mov.w @(disp,pc),Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C08F992u, 1);  /* 0C08F990 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C08F992 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C08F996u, 2);  /* 0C08F994 mov.l @(disp,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C08F998u, 1);  /* 0C08F996 mov.l @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08F99Au, 1);  /* 0C08F998 mov.l @(disp,Rm),Rn */
	IF(0x0C08F99Au); { u32 t_ = r11; PR = 0x0C08F99Eu; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08F99Eu); }  /* 0C08F99A jsr @Rn */
L_0C08F99E: BLKS(0x0C08F99Eu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08F9A0u, 1);  /* 0C08F99E mov.w @Rm,Rn */
	r5 = r9;  /* 0C08F9A0 mov Rm,Rn */
	IF(0x0C08F9A2u); { u32 t_ = r10; PR = 0x0C08F9A6u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08F9A6u); }  /* 0C08F9A2 jsr @Rn */
L_0C08F9A6: BLKS(0x0C08F9A6u);
	r5 = r9;  /* 0C08F9A6 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08F9AAu, 2);  /* 0C08F9A8 mov.l @(disp,pc),Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C08F9ACu, 1);  /* 0C08F9AA mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08F9AEu, 1);  /* 0C08F9AC mov.w @Rm,Rn */
	IF(0x0C08F9AEu); { u32 t_ = r9; PR = 0x0C08F9B2u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08F9B2u); }  /* 0C08F9AE jsr @Rn */
L_0C08F9B2: BLKS(0x0C08F9B2u);
	r9 = R32(r13 + 0x28u); UPD(0x0C08F9B4u, 1);  /* 0C08F9B2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08F9B4 add #imm,Rn */
	r9 += r0;  /* 0C08F9B6 add Rm,Rn */
	r13 = 0xC0C2360u; UPD(0x0C08F9BAu, 3);  /* 0C08F9B8 mov.l @(disp,pc),Rn */
	r0 = 0x28000u; UPD(0x0C08F9BCu, 1);  /* 0C08F9BA mov.l @(disp,pc),Rn */
	IF(0x0C08F9BCu); { u32 t_ = r13; PR = 0x0C08F9C0u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08F9C0u); }  /* 0C08F9BC jsr @Rn */
L_0C08F9C0: BLKS(0x0C08F9C0u);
	r0 &= 0x1u;  /* 0C08F9C0 and #imm,r0 */
	r8 = 0xC1A8484u; UPD(0x0C08F9C4u, 2);  /* 0C08F9C2 mov.l @(disp,pc),Rn */
	IF(0x0C08F9C4u); r0 <<= 2;  /* 0C08F9C4 shll2 Rn */
	IF(0x0C08F9C6u); r6 = R32(r0 + r8); UPD(0x0C08F9C8u, 2);  /* 0C08F9C6 mov.l @(r0,Rm),Rn */
	r4 = 0x2u;  /* 0C08F9C8 mov #imm,Rn */
	r13 = 0xC0BA970u; UPD(0x0C08F9CCu, 2);  /* 0C08F9CA mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C08F9CC mov Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08F9D0u, 2);  /* 0C08F9CE mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08F9D0 mov Rm,Rn */
	IF(0x0C08F9D2u); { u32 t_ = r13; PR = 0x0C08F9D6u; r6 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C08F9D6u); }  /* 0C08F9D2 jsr @Rn */
L_0C08F9D6: BLKS(0x0C08F9D6u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08F8BAu, 3); goto L_0C08F8BA; }  /* 0C08F9D6 bra */
}

void blk_f_0C08FA30(sh3_t *c)
{
	LOCALS;
L_0C08FA30: BLKS(0x0C08FA30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA32u, 1);  /* 0C08FA30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA34u, 1);  /* 0C08FA32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA36u, 1);  /* 0C08FA34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA38u, 1);  /* 0C08FA36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA3Au, 1);  /* 0C08FA38 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA3Cu, 1);  /* 0C08FA3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08FA3Eu, 1);  /* 0C08FA3C mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C08FA40u, 1);  /* 0C08FA3E mov.l @(disp,pc),Rn */
	IF(0x0C08FA40u); r15 -= 4; W32(r15, PR); UPD(0x0C08FA42u, 1);  /* 0C08FA40 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08FA44u, 1);  /* 0C08FA42 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08FA44 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08FA48u, 2);  /* 0C08FA46 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08FA4Au, 1);  /* 0C08FA48 mov.l @(disp,pc),Rn */
	IF(0x0C08FA4Au); { u32 t_ = r8; PR = 0x0C08FA4Eu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08FA4Eu); }  /* 0C08FA4A jsr @Rn */
L_0C08FA4E: BLKS(0x0C08FA4Eu);
	T = (r0 & r0) == 0;  /* 0C08FA4E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FA70u, 4); goto L_0C08FA70; } UPD(0x0C08FA54u, 1); goto L_0C08FA54; }  /* 0C08FA50 bf/s */
L_0C08FA54: BLKS(0x0C08FA54u);
	r15 = r14;  /* 0C08FA54 mov Rm,Rn */
	IF(0x0C08FA56u); PR = R32(r15); r15 += 4; UPD(0x0C08FA58u, 2);  /* 0C08FA56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08FA5Au, 1);  /* 0C08FA58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08FA5Cu, 1);  /* 0C08FA5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08FA5Eu, 1);  /* 0C08FA5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08FA60u, 1);  /* 0C08FA5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08FA62u, 1);  /* 0C08FA60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08FA64u, 1);  /* 0C08FA62 mov.l @Rm+,Rn */
	IF(0x0C08FA64u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08FA64 rts */
L_0C08FA70: BLKS(0x0C08FA70u);
	r8 = 0xC071740u; UPD(0x0C08FA72u, 1);  /* 0C08FA70 mov.l @(disp,pc),Rn */
	IF(0x0C08FA72u); { u32 t_ = r8; PR = 0x0C08FA76u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08FA76u); }  /* 0C08FA72 jsr @Rn */
L_0C08FA76: BLKS(0x0C08FA76u);
	T = (r0 & r0) == 0;  /* 0C08FA76 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FA54u, 4); goto L_0C08FA54; } goto L_0C08FA7C; }  /* 0C08FA78 bt/s */
L_0C08FA7C: BLKS(0x0C08FA7Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08FA7Eu, 2);  /* 0C08FA7C mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C08FA80u, 1);  /* 0C08FA7E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C08FA82u, 1);  /* 0C08FA80 mov.w @Rm,Rn */
	IF(0x0C08FA82u); MACL = r10 * r11;  /* 0C08FA82 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08FA86u, 3);  /* 0C08FA84 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08FA88u, 1);  /* 0C08FA86 mov.w @Rm,Rn */
	IF(0x0C08FA88u); r11 = MACL;  /* 0C08FA88 sts macl,Rn */
	r11 += r6;  /* 0C08FA8A add Rm,Rn */
	r13 = r4 & 0xFFFF;  /* 0C08FA8C extu.w Rm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08FA90u, 4);  /* 0C08FA8E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08FA90 mov Rm,Rn */
	W32(r11 + 0x4u, r13); UPD(0x0C08FA94u, 2);  /* 0C08FA92 mov.l Rm,@(disp,Rn) */
	r5 = 0xC1000000u; UPD(0x0C08FA96u, 1);  /* 0C08FA94 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C08FA96 mov #imm,Rn */
	r9 = 0xC2B03A2u; UPD(0x0C08FA9Au, 2);  /* 0C08FA98 mov.l @(disp,pc),Rn */
	W32(r11, r5); UPD(0x0C08FA9Cu, 1);  /* 0C08FA9A mov.l Rm,@Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C08FA9Eu, 1);  /* 0C08FA9C mov.l Rm,@(disp,Rn) */
	IF(0x0C08FA9Eu); { u32 t_ = r3; PR = 0x0C08FAA2u; W32(r11 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08FAA2u); }  /* 0C08FA9E jsr @Rn */
L_0C08FAA2: BLKS(0x0C08FAA2u);
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C08FAA4u, 1);  /* 0C08FAA2 mov.w @Rm,Rn */
	r4 = r10;  /* 0C08FAA4 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08FAA8u, 2);  /* 0C08FAA6 mov.w @(disp,pc),Rn */
	IF(0x0C08FAA8u); W16(r0 + r11, r2); UPD(0x0C08FAAAu, 1);  /* 0C08FAA8 mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08FAAA add #imm,Rn */
	IF(0x0C08FAACu); W16(r0 + r11, r2); UPD(0x0C08FAAEu, 2);  /* 0C08FAAC mov.w Rm,@(r0,Rn) */
	r8 = 0xC0722E0u; UPD(0x0C08FAB0u, 1);  /* 0C08FAAE mov.l @(disp,pc),Rn */
	r0 = 0x1900000u; UPD(0x0C08FAB2u, 1);  /* 0C08FAB0 mov.l @(disp,pc),Rn */
	IF(0x0C08FAB2u); { u32 t_ = r8; PR = 0x0C08FAB6u; W32(r11 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08FAB6u); }  /* 0C08FAB2 jsr @Rn */
L_0C08FAB6: BLKS(0x0C08FAB6u);
	r7 = 0xC0A9AE0u; UPD(0x0C08FAB8u, 1);  /* 0C08FAB6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08FAB8 mov Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C08FABCu, 2);  /* 0C08FABA mov.l @(disp,pc),Rn */
	IF(0x0C08FABCu); { u32 t_ = r7; PR = 0x0C08FAC0u; IF(0x0C08FABEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08FAC0u); }  /* 0C08FABC jsr @Rn */
L_0C08FAC0: BLKS(0x0C08FAC0u);
	r12 = 0xB0u; UPD(0x0C08FAC2u, 1);  /* 0C08FAC0 mov.w @(disp,pc),Rn */
	IF(0x0C08FAC2u); { u32 t_ = r10; PR = 0x0C08FAC6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C08FAC6u); }  /* 0C08FAC2 jsr @Rn */
L_0C08FAC6: BLKS(0x0C08FAC6u);
	r6 = (u32)(s32)(s8)r0;  /* 0C08FAC6 exts.b Rm,Rn */
	r5 = 0x4Cu;  /* 0C08FAC8 mov #imm,Rn */
	r12 += r11;  /* 0C08FACA add Rm,Rn */
	IF(0x0C08FACCu); MACL = r6 * r5;  /* 0C08FACC mul.l Rm,Rn */
	W8(r12, r0); UPD(0x0C08FAD0u, 6);  /* 0C08FACE mov.b Rm,@Rn */
	r4 = 0xC286318u; UPD(0x0C08FAD2u, 1);  /* 0C08FAD0 mov.l @(disp,pc),Rn */
	IF(0x0C08FAD2u); r8 = MACL;  /* 0C08FAD2 sts macl,Rn */
	r0 = 0xC0C2360u; UPD(0x0C08FAD6u, 2);  /* 0C08FAD4 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08FAD6 add Rm,Rn */
	IF(0x0C08FAD8u); { u32 t_ = r0; PR = 0x0C08FADCu; r8 += 0x42u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08FADCu); }  /* 0C08FAD8 jsr @Rn */
L_0C08FADC: BLKS(0x0C08FADCu);
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C08FADEu, 1);  /* 0C08FADC mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C08FADE and #imm,r0 */
	r12 = 0xA9u; UPD(0x0C08FAE2u, 2);  /* 0C08FAE0 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08FAE2 add Rm,Rn */
	r9 = 0xADu; UPD(0x0C08FAE6u, 2);  /* 0C08FAE4 mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C08FAE6 add Rm,Rn */
	r9 += r11;  /* 0C08FAE8 add Rm,Rn */
	W8(r9, r0); UPD(0x0C08FAECu, 3);  /* 0C08FAEA mov.b Rm,@Rn */
	r8 += 0xFFFFFFBEu;  /* 0C08FAEC add #imm,Rn */
	W8(r12, r0); UPD(0x0C08FAF0u, 2);  /* 0C08FAEE mov.b Rm,@Rn */
	r1 = R32(r8 + 0x10u); UPD(0x0C08FAF2u, 1);  /* 0C08FAF0 mov.l @(disp,Rm),Rn */
	r4 = 0x200u; UPD(0x0C08FAF4u, 1);  /* 0C08FAF2 mov.w @(disp,pc),Rn */
	IF(0x0C08FAF4u); { u32 t_ = r10; PR = 0x0C08FAF8u; r9 = 0u - r1; /* slot neg Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C08FAF8u); }  /* 0C08FAF4 jsr @Rn */
L_0C08FAF8: BLKS(0x0C08FAF8u);
	r2 = 0x100u; UPD(0x0C08FAFAu, 1);  /* 0C08FAF8 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C08FAFA add Rm,Rn */
	IF(0x0C08FAFCu); MACL = r9 * r2;  /* 0C08FAFC mul.l Rm,Rn */
	IF(0x0C08FAFEu); r2 = MACL;  /* 0C08FAFE sts macl,Rn */
	IF(0x0C08FB00u); T = (s32)r2 >= 0;  /* 0C08FB00 cmp/pz Rn */
	if (!T) { UPD(0x0C08FB20u, 8); goto L_0C08FB20; }  /* 0C08FB02 bf */
L_0C08FB04: BLKS(0x0C08FB04u);
	r0 = 0xFFFFFFF8u;  /* 0C08FB04 mov #imm,Rn */
	IF(0x0C08FB06u); ARG0(0x420Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C08FB06 shad Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C08FB0Au, 3);  /* 0C08FB08 mov.b @Rm,Rn */
	W32(r11 + 0x2Cu, r2); UPD(0x0C08FB0Cu, 1);  /* 0C08FB0A mov.l Rm,@(disp,Rn) */
	r0 = r1 & 0xFF;  /* 0C08FB0C extu.b Rm,Rn */
	W32(r11 + 0x30u, r13); UPD(0x0C08FB10u, 2);  /* 0C08FB0E mov.l Rm,@(disp,Rn) */
	IF(0x0C08FB10u); r0 <<= 2;  /* 0C08FB10 shll2 Rn */
	r8 = 0xC1A9540u; UPD(0x0C08FB14u, 2);  /* 0C08FB12 mov.l @(disp,pc),Rn */
	IF(0x0C08FB14u); r10 = R32(r0 + r8); UPD(0x0C08FB16u, 1);  /* 0C08FB14 mov.l @(r0,Rm),Rn */
	W32(r11 + 0x38u, r10); UPD(0x0C08FB18u, 1);  /* 0C08FB16 mov.l Rm,@(disp,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08FA54u, 3); goto L_0C08FA54; }  /* 0C08FB18 bra */
L_0C08FB20: BLKS(0x0C08FB20u);
	r7 = 0xFFu; UPD(0x0C08FB22u, 1);  /* 0C08FB20 mov.w @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C08FB04u, 3); goto L_0C08FB04; }  /* 0C08FB22 bra */
}

void blk_f_0C08FB80(sh3_t *c)
{
	LOCALS;
L_0C08FB80: BLKS(0x0C08FB80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB82u, 1);  /* 0C08FB80 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08FB82 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB86u, 2);  /* 0C08FB84 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB88u, 1);  /* 0C08FB86 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB8Au, 1);  /* 0C08FB88 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08FB8Cu, 1);  /* 0C08FB8A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB8Eu, 1);  /* 0C08FB8C mov.l Rm,@-Rn */
	IF(0x0C08FB8Eu); MACL = r4 * r0;  /* 0C08FB8E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB92u, 3);  /* 0C08FB90 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08FB94u, 1);  /* 0C08FB92 mov.l @(disp,pc),Rn */
	IF(0x0C08FB94u); r7 = MACL;  /* 0C08FB94 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08FB98u, 2);  /* 0C08FB96 mov.l Rm,@-Rn */
	r7 += r10;  /* 0C08FB98 add Rm,Rn */
	IF(0x0C08FB9Au); r15 -= 4; W32(r15, PR); UPD(0x0C08FB9Cu, 2);  /* 0C08FB9A sts.l pr,@-Rn */
	r7 += 0x3Cu;  /* 0C08FB9C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C08FBA0u, 2);  /* 0C08FB9E mov.w @Rm,Rn */
	r14 = r15;  /* 0C08FBA0 mov Rm,Rn */
	IF(0x0C08FBA2u); r0 = MACL;  /* 0C08FBA2 sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C08FBA4 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FBAEu, 6); goto L_0C08FBAE; } goto L_0C08FBAA; }  /* 0C08FBA6 bt/s */
L_0C08FBAA: BLKS(0x0C08FBAAu);
	{ r13 = R32(r7 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08FCE0u, 4); goto L_0C08FCE0; }  /* 0C08FBAA bra */
L_0C08FBAE: BLKS(0x0C08FBAEu);
	r5 = 0x9Fu; UPD(0x0C08FBB0u, 1);  /* 0C08FBAE mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C08FBB0 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r5); UPD(0x0C08FBB4u, 2);  /* 0C08FBB2 mov.b @Rm,Rn */
	r9 = r8 & 0xFF;  /* 0C08FBB4 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08FBB6 tst Rm,Rn */
	if (T) { UPD(0x0C08FBBEu, 5); goto L_0C08FBBE; }  /* 0C08FBB8 bt */
L_0C08FBBA: BLKS(0x0C08FBBAu);
	{ IF(0x0C08FBBCu); ; /* slot nop */ UPD(0x0C08FCC0u, 3); goto L_0C08FCC0; }  /* 0C08FBBA bra */
L_0C08FBBE: BLKS(0x0C08FBBEu);
	r3 = R32(r7 + 0x2Cu); UPD(0x0C08FBC0u, 1);  /* 0C08FBBE mov.l @(disp,Rm),Rn */
	r2 = 0xF0u; UPD(0x0C08FBC2u, 1);  /* 0C08FBC0 mov.w @(disp,pc),Rn */
	IF(0x0C08FBC2u); MACL = r3 * r2;  /* 0C08FBC2 mul.l Rm,Rn */
	IF(0x0C08FBC4u); r3 = MACL;  /* 0C08FBC4 sts macl,Rn */
	IF(0x0C08FBC6u); T = (s32)r3 >= 0;  /* 0C08FBC6 cmp/pz Rn */
	if (!T) { UPD(0x0C08FCB0u, 7); goto L_0C08FCB0; }  /* 0C08FBC8 bf */
L_0C08FBCA: BLKS(0x0C08FBCAu);
	r11 = R32(r7 + 0x30u); UPD(0x0C08FBCCu, 1);  /* 0C08FBCA mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C08FBCC mov #imm,Rn */
	IF(0x0C08FBCEu); MACL = r11 * r2;  /* 0C08FBCE mul.l Rm,Rn */
	IF(0x0C08FBD0u); ARG0(0x436Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C08FBD0 shad Rm,Rn */
	IF(0x0C08FBD2u); r2 = MACL;  /* 0C08FBD2 sts macl,Rn */
	IF(0x0C08FBD4u); T = (s32)r2 >= 0;  /* 0C08FBD4 cmp/pz Rn */
	{ u32 c_ = !T; W32(r7 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08FCA0u, 9); goto L_0C08FCA0; } UPD(0x0C08FBDAu, 1); goto L_0C08FBDA; }  /* 0C08FBD6 bf/s */
L_0C08FBDA: BLKS(0x0C08FBDAu);
	r4 = R32(r7 + 0x24u); UPD(0x0C08FBDCu, 1);  /* 0C08FBDA mov.l @(disp,Rm),Rn */
	IF(0x0C08FBDCu); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C08FBDC shad Rm,Rn */
	r4 += r3;  /* 0C08FBDE add Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C08FBE2u, 3);  /* 0C08FBE0 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x30u, r2); UPD(0x0C08FBE4u, 1);  /* 0C08FBE2 mov.l Rm,@(disp,Rn) */
	r3 += r2;  /* 0C08FBE4 add Rm,Rn */
	r2 = 0x98u; UPD(0x0C08FBE8u, 2);  /* 0C08FBE6 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C08FBE8 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C08FBECu, 2);  /* 0C08FBEA mov.b @Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C08FBEC add #imm,Rn */
	r6 = r13 & 0xFF;  /* 0C08FBEE extu.b Rm,Rn */
	W32(r7 + 0x24u, r4); UPD(0x0C08FBF2u, 3);  /* 0C08FBF0 mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C08FBF2 tst Rm,Rn */
	W32(r7 + 0x28u, r3); UPD(0x0C08FBF6u, 2);  /* 0C08FBF4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08FC00u, 3); goto L_0C08FC00; } UPD(0x0C08FBFAu, 1); goto L_0C08FBFA; }  /* 0C08FBF6 bf/s */
L_0C08FBFA: BLKS(0x0C08FBFAu);
	r11 = r8;  /* 0C08FBFA mov Rm,Rn */
	r11 += 0x1u;  /* 0C08FBFC add #imm,Rn */
	W8(r5, r11); UPD(0x0C08FC00u, 3);  /* 0C08FBFE mov.b Rm,@Rn */
L_0C08FC00: BLKS(0x0C08FC00u);
	r3 = r2;  /* 0C08FC00 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08FC02 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C08FC06u, 3);  /* 0C08FC04 mov.b @Rm,Rn */
	r5 = 0x3u;  /* 0C08FC06 mov #imm,Rn */
	r8 += 0x1u;  /* 0C08FC08 add #imm,Rn */
	r2 = r8 & 0xFF;  /* 0C08FC0A extu.b Rm,Rn */
	T = r2 > r5;  /* 0C08FC0C cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08FC80u, 7); goto L_0C08FC80; } UPD(0x0C08FC12u, 1); goto L_0C08FC12; }  /* 0C08FC0E bf/s */
L_0C08FC12: BLKS(0x0C08FC12u);
	r11 = r10;  /* 0C08FC12 mov Rm,Rn */
	r11 += 0x5Cu;  /* 0C08FC14 add #imm,Rn */
	W8(r3, r9); UPD(0x0C08FC18u, 3);  /* 0C08FC16 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C08FC18 mov #imm,Rn */
	r12 = r7;  /* 0C08FC1A mov Rm,Rn */
	r11 += r0;  /* 0C08FC1C add Rm,Rn */
	IF(0x0C08FC1Eu); ;  /* 0C08FC1E nop */
	UPD(0x0C08FC20u, 4);
L_0C08FC20: BLKS(0x0C08FC20u);
	r9 = R32(r11); UPD(0x0C08FC22u, 1);  /* 0C08FC20 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08FC22 add #imm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C08FC26u, 2);  /* 0C08FC24 mov.l @(disp,Rm),Rn */
	r8 = 0xC0C2360u; UPD(0x0C08FC28u, 1);  /* 0C08FC26 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C08FC28 add Rm,Rn */
	r0 = R32(r11 + 0x4u); UPD(0x0C08FC2Cu, 2);  /* 0C08FC2A mov.l @(disp,Rm),Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C08FC2Eu, 1);  /* 0C08FC2C mov.l @(disp,Rm),Rn */
	r11 += 0x8u;  /* 0C08FC2E add #imm,Rn */
	IF(0x0C08FC30u); { u32 t_ = r8; PR = 0x0C08FC34u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08FC34u); }  /* 0C08FC30 jsr @Rn */
L_0C08FC34: BLKS(0x0C08FC34u);
	r8 = r0;  /* 0C08FC34 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08FC38u, 2);  /* 0C08FC36 mov.w @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C08FC38 mov #imm,Rn */
	IF(0x0C08FC3Au); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08FC3Cu, 2);  /* 0C08FC3A mov.b @(r0,Rm),Rn */
	r8 &= r1;  /* 0C08FC3C and Rm,Rn */
	r7 = r6 & 0xFF;  /* 0C08FC3E extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08FC42u, 3);  /* 0C08FC40 mov.l Rm,@Rn */
	r0 = r12;  /* 0C08FC42 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C08FC46u, 2);  /* 0C08FC44 mov.w @(disp,pc),Rn */
	IF(0x0C08FC46u); r8 <<= 2;  /* 0C08FC46 shll2 Rn */
	IF(0x0C08FC48u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08FC4Au, 2);  /* 0C08FC48 mov.b @(r0,Rm),Rn */
	r0 = 0xFFFD0000u; UPD(0x0C08FC4Cu, 1);  /* 0C08FC4A mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C08FC4C extu.b Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C08FC50u, 2);  /* 0C08FC4E mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C08FC52u, 1);  /* 0C08FC50 mov.l @(disp,pc),Rn */
	r3 = 0xC1A9590u; UPD(0x0C08FC54u, 1);  /* 0C08FC52 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08FC56u, 1);  /* 0C08FC54 mov.l Rm,@(disp,Rn) */
	r4 = 0x1000u; UPD(0x0C08FC58u, 1);  /* 0C08FC56 mov.w @(disp,pc),Rn */
	IF(0x0C08FC58u); { u32 t_ = r0; PR = 0x0C08FC5Cu; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08FC5Cu); }  /* 0C08FC58 jsr @Rn */
L_0C08FC5C: BLKS(0x0C08FC5Cu);
	r3 = 0xFFFFF800u; UPD(0x0C08FC5Eu, 1);  /* 0C08FC5C mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C08FC5E mov #imm,Rn */
	r0 += r3;  /* 0C08FC60 add Rm,Rn */
	IF(0x0C08FC62u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C08FC62 shld Rm,Rn */
	r6 = r10;  /* 0C08FC64 mov Rm,Rn */
	r10 = 0xC0BE860u; UPD(0x0C08FC68u, 5);  /* 0C08FC66 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C08FC68 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08FC6Cu, 2);  /* 0C08FC6A mov.l Rm,@(disp,Rn) */
	r9 = r13;  /* 0C08FC6C mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C08FC70u, 2);  /* 0C08FC6E mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08FC70 add #imm,Rn */
	IF(0x0C08FC72u); { u32 t_ = r10; PR = 0x0C08FC76u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C08FC76u); }  /* 0C08FC72 jsr @Rn */
L_0C08FC76: BLKS(0x0C08FC76u);
	r13 = (u32)(s32)(s16)r9;  /* 0C08FC76 exts.w Rm,Rn */
	r7 = 0x2u;  /* 0C08FC78 mov #imm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C08FC7A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08FC20u, 6); goto L_0C08FC20; } UPD(0x0C08FC80u, 1); goto L_0C08FC80; }  /* 0C08FC7C bf/s */
L_0C08FC80: BLKS(0x0C08FC80u);
	r15 = r14;  /* 0C08FC80 mov Rm,Rn */
	IF(0x0C08FC82u); PR = R32(r15); r15 += 4; UPD(0x0C08FC84u, 2);  /* 0C08FC82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08FC86u, 1);  /* 0C08FC84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08FC88u, 1);  /* 0C08FC86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08FC8Au, 1);  /* 0C08FC88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08FC8Cu, 1);  /* 0C08FC8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08FC8Eu, 1);  /* 0C08FC8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08FC90u, 1);  /* 0C08FC8E mov.l @Rm+,Rn */
	IF(0x0C08FC90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08FC90 rts */
L_0C08FCA0: BLKS(0x0C08FCA0u);
	r12 = 0xFFu; UPD(0x0C08FCA2u, 1);  /* 0C08FCA0 mov.w @(disp,pc),Rn */
	{ r2 += r12; /* slot add Rm,Rn */ UPD(0x0C08FBDAu, 3); goto L_0C08FBDA; }  /* 0C08FCA2 bra */
L_0C08FCB0: BLKS(0x0C08FCB0u);
	r4 = 0xFFu; UPD(0x0C08FCB2u, 1);  /* 0C08FCB0 mov.w @(disp,pc),Rn */
	{ r3 += r4; /* slot add Rm,Rn */ UPD(0x0C08FBCAu, 3); goto L_0C08FBCA; }  /* 0C08FCB2 bra */
L_0C08FCC0: BLKS(0x0C08FCC0u);
	r5 = 0xC0A9CB0u; UPD(0x0C08FCC2u, 1);  /* 0C08FCC0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08FCC2 mov Rm,Rn */
	IF(0x0C08FCC4u); PR = R32(r15); r15 += 4; UPD(0x0C08FCC6u, 2);  /* 0C08FCC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08FCC8u, 1);  /* 0C08FCC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08FCCAu, 1);  /* 0C08FCC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08FCCCu, 1);  /* 0C08FCCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08FCCEu, 1);  /* 0C08FCCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08FCD0u, 1);  /* 0C08FCCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08FCD2u, 1);  /* 0C08FCD0 mov.l @Rm+,Rn */
	IF(0x0C08FCD2u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C08FCD2 jmp @Rn */
L_0C08FCE0: BLKS(0x0C08FCE0u);
	r11 = R32(r7 + 0x28u); UPD(0x0C08FCE2u, 1);  /* 0C08FCE0 mov.l @(disp,Rm),Rn */
	r2 = R32(r7 + 0x2Cu); UPD(0x0C08FCE4u, 1);  /* 0C08FCE2 mov.l @(disp,Rm),Rn */
	r10 = R32(r7 + 0x30u); UPD(0x0C08FCE6u, 1);  /* 0C08FCE4 mov.l @(disp,Rm),Rn */
	r13 += r2;  /* 0C08FCE6 add Rm,Rn */
	r11 += r10;  /* 0C08FCE8 add Rm,Rn */
	r12 = 0xFFBE0000u; UPD(0x0C08FCECu, 3);  /* 0C08FCEA mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r13); UPD(0x0C08FCEEu, 1);  /* 0C08FCEC mov.l Rm,@(disp,Rn) */
	T = (s32)r13 >= (s32)r12;  /* 0C08FCEE cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08FCF8u, 4); goto L_0C08FCF8; } UPD(0x0C08FCF4u, 1); goto L_0C08FCF4; }  /* 0C08FCF0 bt/s */
L_0C08FCF4: BLKS(0x0C08FCF4u);
	r6 = 0x0u;  /* 0C08FCF4 mov #imm,Rn */
	W32(r7, r6); UPD(0x0C08FCF8u, 2);  /* 0C08FCF6 mov.l Rm,@Rn */
L_0C08FCF8: BLKS(0x0C08FCF8u);
	r0 = R32(r7 + 0xCu); UPD(0x0C08FCFAu, 1);  /* 0C08FCF8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C08FCFA add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08FCFC and #imm,r0 */
	W32(r7 + 0xCu, r0); UPD(0x0C08FD00u, 3);  /* 0C08FCFE mov.l Rm,@(disp,Rn) */
	r7 = 0xC0A8AE0u; UPD(0x0C08FD02u, 1);  /* 0C08FD00 mov.l @(disp,pc),Rn */
	IF(0x0C08FD02u); { u32 t_ = r7; PR = 0x0C08FD06u; IF(0x0C08FD04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08FD06u); }  /* 0C08FD02 jsr @Rn */
L_0C08FD06: BLKS(0x0C08FD06u);
	{ IF(0x0C08FD08u); ; /* slot nop */ UPD(0x0C08FC80u, 3); goto L_0C08FC80; }  /* 0C08FD06 bra */
}

void blk_f_0C08FD40(sh3_t *c)
{
	LOCALS;
L_0C08FD40: BLKS(0x0C08FD40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08FD42u, 1);  /* 0C08FD40 mov.l Rm,@-Rn */
	r4 = 0x27u;  /* 0C08FD42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08FD46u, 2);  /* 0C08FD44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08FD48u, 1);  /* 0C08FD46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08FD4Au, 1);  /* 0C08FD48 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08FD4Cu, 1);  /* 0C08FD4A mov.l Rm,@-Rn */
	r0 = 0xC3C43CCu; UPD(0x0C08FD4Eu, 1);  /* 0C08FD4C mov.l @(disp,pc),Rn */
	IF(0x0C08FD4Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08FD50u, 1);  /* 0C08FD4E sts.l pr,@-Rn */
	r3 = R32(r0); UPD(0x0C08FD52u, 1);  /* 0C08FD50 mov.l @Rm,Rn */
	r14 = r15;  /* 0C08FD52 mov Rm,Rn */
	r8 = 0xC069510u; UPD(0x0C08FD56u, 2);  /* 0C08FD54 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C08FD58u, 1);  /* 0C08FD56 mov.w @Rm+,Rn */
	r9 = 0xC2B0378u; UPD(0x0C08FD5Au, 1);  /* 0C08FD58 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C08FD5Cu, 1);  /* 0C08FD5A mov.l Rm,@Rn */
	r5 = 0x8000u; UPD(0x0C08FD5Eu, 1);  /* 0C08FD5C mov.l @(disp,pc),Rn */
	IF(0x0C08FD5Eu); { u32 t_ = r8; PR = 0x0C08FD62u; W16(r9, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08FD62u); }  /* 0C08FD5E jsr @Rn */
L_0C08FD62: BLKS(0x0C08FD62u);
	T = (r0 & r0) == 0;  /* 0C08FD62 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FD80u, 4); goto L_0C08FD80; } UPD(0x0C08FD68u, 1); goto L_0C08FD68; }  /* 0C08FD64 bf/s */
L_0C08FD68: BLKS(0x0C08FD68u);
	r15 = r14;  /* 0C08FD68 mov Rm,Rn */
	IF(0x0C08FD6Au); PR = R32(r15); r15 += 4; UPD(0x0C08FD6Cu, 2);  /* 0C08FD6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08FD6Eu, 1);  /* 0C08FD6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08FD70u, 1);  /* 0C08FD6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08FD72u, 1);  /* 0C08FD70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08FD74u, 1);  /* 0C08FD72 mov.l @Rm+,Rn */
	IF(0x0C08FD74u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08FD74 rts */
L_0C08FD80: BLKS(0x0C08FD80u);
	r8 = 0xC071740u; UPD(0x0C08FD82u, 1);  /* 0C08FD80 mov.l @(disp,pc),Rn */
	IF(0x0C08FD82u); { u32 t_ = r8; PR = 0x0C08FD86u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08FD86u); }  /* 0C08FD82 jsr @Rn */
L_0C08FD86: BLKS(0x0C08FD86u);
	T = (r0 & r0) == 0;  /* 0C08FD86 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FD68u, 4); goto L_0C08FD68; } goto L_0C08FD8C; }  /* 0C08FD88 bt/s */
L_0C08FD8C: BLKS(0x0C08FD8Cu);
	r11 = 0xC28EDFCu; UPD(0x0C08FD8Eu, 2);  /* 0C08FD8C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08FD90u, 1);  /* 0C08FD8E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C08FD92u, 1);  /* 0C08FD90 mov.w @Rm,Rn */
	IF(0x0C08FD92u); MACL = r10 * r8;  /* 0C08FD92 mul.l Rm,Rn */
	r0 = 0xC2B1811u; UPD(0x0C08FD96u, 3);  /* 0C08FD94 mov.l @(disp,pc),Rn */
	r7 = 0xC286578u; UPD(0x0C08FD98u, 1);  /* 0C08FD96 mov.l @(disp,pc),Rn */
	IF(0x0C08FD98u); r8 = MACL;  /* 0C08FD98 sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C08FD9Cu, 2);  /* 0C08FD9A mov.b @Rm,Rn */
	r8 += r7;  /* 0C08FD9C add Rm,Rn */
	r6 = 0xC0000010u; UPD(0x0C08FDA0u, 2);  /* 0C08FD9E mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C08FDA0 mov #imm,Rn */
	r5 = 0xC2460ACu; UPD(0x0C08FDA4u, 2);  /* 0C08FDA2 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C08FDA6u, 1);  /* 0C08FDA4 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C08FDA8u, 1);  /* 0C08FDA6 mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08FDAAu, 1);  /* 0C08FDA8 mov.w @Rm,Rn */
	r2 = r4 & 0xFFFF;  /* 0C08FDAA extu.w Rm,Rn */
	r6 = 0xC0A8A30u; UPD(0x0C08FDAEu, 2);  /* 0C08FDAC mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C08FDAE extu.w Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C08FDB2u, 2);  /* 0C08FDB0 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08FDB2 mov Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C08FDB6u, 2);  /* 0C08FDB4 mov.l Rm,@(disp,Rn) */
	r9 = 0x4Cu;  /* 0C08FDB6 mov #imm,Rn */
	IF(0x0C08FDB8u); { u32 t_ = r6; PR = 0x0C08FDBCu; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08FDBCu); }  /* 0C08FDB8 jsr @Rn */
L_0C08FDBC: BLKS(0x0C08FDBCu);
	IF(0x0C08FDBCu); MACL = r11 * r9;  /* 0C08FDBC mul.l Rm,Rn */
	r5 = 0xC237C08u; UPD(0x0C08FDC0u, 3);  /* 0C08FDBE mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C08FDC2u, 1);  /* 0C08FDC0 mov.l @(disp,pc),Rn */
	IF(0x0C08FDC2u); r9 = MACL;  /* 0C08FDC2 sts macl,Rn */
	r0 = 0xC3C43C6u; UPD(0x0C08FDC6u, 2);  /* 0C08FDC4 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C08FDC6 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C08FDCAu, 2);  /* 0C08FDC8 mov.w @Rm,Rn */
	r4 = r10;  /* 0C08FDCA mov Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C08FDCEu, 2);  /* 0C08FDCC mov.l @(disp,Rm),Rn */
	IF(0x0C08FDCEu); r3 <<= 16;  /* 0C08FDCE shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C08FDD2u, 2);  /* 0C08FDD0 mov.w @Rm,Rn */
	r3 -= r2;  /* 0C08FDD2 sub Rm,Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C08FDD6u, 2);  /* 0C08FDD4 mov.l @(disp,pc),Rn */
	IF(0x0C08FDD6u); r7 <<= 16;  /* 0C08FDD6 shll16 Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C08FDDAu, 2);  /* 0C08FDD8 mov.l Rm,@(disp,Rn) */
	r9 += 0x42u;  /* 0C08FDDA add #imm,Rn */
	IF(0x0C08FDDCu); { u32 t_ = r6; PR = 0x0C08FDE0u; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08FDE0u); }  /* 0C08FDDC jsr @Rn */
L_0C08FDE0: BLKS(0x0C08FDE0u);
	r0 = 0xB0u; UPD(0x0C08FDE2u, 1);  /* 0C08FDE0 mov.w @(disp,pc),Rn */
	IF(0x0C08FDE2u); W8(r0 + r8, r11); UPD(0x0C08FDE4u, 1);  /* 0C08FDE2 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C08FDE6u, 1);  /* 0C08FDE4 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08FDE6 add #imm,Rn */
	IF(0x0C08FDE8u); W8(r0 + r8, r5); UPD(0x0C08FDEAu, 2);  /* 0C08FDE8 mov.b Rm,@(r0,Rn) */
	r4 = 0x2010080u; UPD(0x0C08FDECu, 1);  /* 0C08FDEA mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08FDEC add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C08FDF0u, 2);  /* 0C08FDEE mov.l @(disp,pc),Rn */
	IF(0x0C08FDF0u); W8(r0 + r8, r5); UPD(0x0C08FDF2u, 1);  /* 0C08FDF0 mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C08FDF4u, 1);  /* 0C08FDF2 mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C08FDF4 mov #imm,Rn */
	{ W32(r8 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08FD68u, 4); goto L_0C08FD68; }  /* 0C08FDF6 bra */
}

/* FUN_0c08fe50 */
void blk_f_0C08FE50(sh3_t *c)
{
	LOCALS;
L_0C08FE50: BLKS(0x0C08FE50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE52u, 1);  /* 0C08FE50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE54u, 1);  /* 0C08FE52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE56u, 1);  /* 0C08FE54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE58u, 1);  /* 0C08FE56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE5Au, 1);  /* 0C08FE58 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE5Cu, 1);  /* 0C08FE5A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08FE5Eu, 1);  /* 0C08FE5C mov.l Rm,@-Rn */
	r13 = 0xC2460ACu; UPD(0x0C08FE60u, 1);  /* 0C08FE5E mov.l @(disp,pc),Rn */
	IF(0x0C08FE60u); r15 -= 4; W32(r15, PR); UPD(0x0C08FE62u, 1);  /* 0C08FE60 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08FE64u, 1);  /* 0C08FE62 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08FE64 add #imm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C08FE68u, 2);  /* 0C08FE66 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08FE68 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C08FE6Cu, 2);  /* 0C08FE6A mov.w @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C08FE6Eu, 1);  /* 0C08FE6C mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08FE70u, 1);  /* 0C08FE6E mov.l @(disp,pc),Rn */
	IF(0x0C08FE70u); { u32 t_ = r8; PR = 0x0C08FE74u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08FE74u); }  /* 0C08FE70 jsr @Rn */
L_0C08FE74: BLKS(0x0C08FE74u);
	T = (r0 & r0) == 0;  /* 0C08FE74 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FE90u, 4); goto L_0C08FE90; } UPD(0x0C08FE7Au, 1); goto L_0C08FE7A; }  /* 0C08FE76 bf/s */
L_0C08FE7A: BLKS(0x0C08FE7Au);
	r14 += 0x14u;  /* 0C08FE7A add #imm,Rn */
	r15 = r14;  /* 0C08FE7C mov Rm,Rn */
	IF(0x0C08FE7Eu); PR = R32(r15); r15 += 4; UPD(0x0C08FE80u, 3);  /* 0C08FE7E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08FE82u, 1);  /* 0C08FE80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08FE84u, 1);  /* 0C08FE82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08FE86u, 1);  /* 0C08FE84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08FE88u, 1);  /* 0C08FE86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08FE8Au, 1);  /* 0C08FE88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08FE8Cu, 1);  /* 0C08FE8A mov.l @Rm+,Rn */
	IF(0x0C08FE8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08FE8C rts */
L_0C08FE90: BLKS(0x0C08FE90u);
	r8 = 0xC071740u; UPD(0x0C08FE92u, 1);  /* 0C08FE90 mov.l @(disp,pc),Rn */
	IF(0x0C08FE92u); { u32 t_ = r8; PR = 0x0C08FE96u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08FE96u); }  /* 0C08FE92 jsr @Rn */
L_0C08FE96: BLKS(0x0C08FE96u);
	T = (r0 & r0) == 0;  /* 0C08FE96 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08FE7Au, 4); goto L_0C08FE7A; } goto L_0C08FE9C; }  /* 0C08FE98 bt/s */
L_0C08FE9C: BLKS(0x0C08FE9Cu);
	r11 = 0xC28EDFCu; UPD(0x0C08FE9Eu, 2);  /* 0C08FE9C mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFCu;  /* 0C08FE9E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r12 = v_; } UPD(0x0C08FEA2u, 2);  /* 0C08FEA0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C08FEA4u, 1);  /* 0C08FEA2 mov.w @(disp,pc),Rn */
	IF(0x0C08FEA4u); MACL = r12 * r9;  /* 0C08FEA4 mul.l Rm,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C08FEA8u, 3);  /* 0C08FEA6 mov.l @(disp,pc),Rn */
	r1 = 0xC286578u; UPD(0x0C08FEAAu, 1);  /* 0C08FEA8 mov.l @(disp,pc),Rn */
	IF(0x0C08FEAAu); r9 = MACL;  /* 0C08FEAA sts macl,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C08FEAEu, 2);  /* 0C08FEAC mov.w @Rm,Rn */
	r9 += r1;  /* 0C08FEAE add Rm,Rn */
	r7 = 0x84u; UPD(0x0C08FEB2u, 2);  /* 0C08FEB0 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r13); UPD(0x0C08FEB4u, 1);  /* 0C08FEB2 mov.w @Rm,Rn */
	r7 += r9;  /* 0C08FEB4 add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08FEB8u, 2);  /* 0C08FEB6 mov.w @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C08FEB8 add #imm,Rn */
	IF(0x0C08FEBAu); W16(r0 + r9, r5); UPD(0x0C08FEBCu, 2);  /* 0C08FEBA mov.w Rm,@(r0,Rn) */
	r2 = r8 & 0xFFFF;  /* 0C08FEBC extu.w Rm,Rn */
	W16(r7, r5); UPD(0x0C08FEC0u, 2);  /* 0C08FEBE mov.w Rm,@Rn */
	r8 = 0x4Cu;  /* 0C08FEC0 mov #imm,Rn */
	r3 = 0x1FFu; UPD(0x0C08FEC4u, 2);  /* 0C08FEC2 mov.w @(disp,pc),Rn */
	r5 += 0x8u;  /* 0C08FEC4 add #imm,Rn */
	r4 = 0xC0000014u; UPD(0x0C08FEC8u, 2);  /* 0C08FEC6 mov.l @(disp,pc),Rn */
	r5 &= r3;  /* 0C08FEC8 and Rm,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08FECCu, 2);  /* 0C08FECA mov.l @(disp,pc),Rn */
	IF(0x0C08FECCu); ARG0(0x456Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C08FECC shad Rm,Rn */
	W32(r14, r11); UPD(0x0C08FED0u, 2);  /* 0C08FECE mov.l Rm,@Rn */
	W32(r9, r4); UPD(0x0C08FED2u, 1);  /* 0C08FED0 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C08FED2 mov #imm,Rn */
	r4 = r12;  /* 0C08FED4 mov Rm,Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C08FED8u, 3);  /* 0C08FED6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r5); UPD(0x0C08FEDAu, 1);  /* 0C08FED8 mov.l Rm,@(disp,Rn) */
	IF(0x0C08FEDAu); { u32 t_ = r1; PR = 0x0C08FEDEu; W32(r9 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08FEDEu); }  /* 0C08FEDA jsr @Rn */
L_0C08FEDE: BLKS(0x0C08FEDEu);
	IF(0x0C08FEDEu); MACL = r10 * r8;  /* 0C08FEDE mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C08FEE2u, 3);  /* 0C08FEE0 mov.l @(disp,pc),Rn */
	r4 = 0xC237C08u; UPD(0x0C08FEE4u, 1);  /* 0C08FEE2 mov.l @(disp,pc),Rn */
	IF(0x0C08FEE4u); r8 = MACL;  /* 0C08FEE4 sts macl,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C08FEE8u, 2);  /* 0C08FEE6 mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C08FEE8 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C08FEECu, 2);  /* 0C08FEEA mov.w @Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08FEEEu, 1);  /* 0C08FEEC mov.l @(disp,Rm),Rn */
	IF(0x0C08FEEEu); r7 <<= 16;  /* 0C08FEEE shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C08FEF2u, 2);  /* 0C08FEF0 mov.w @Rm,Rn */
	r7 -= r0;  /* 0C08FEF2 sub Rm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C08FEF6u, 2);  /* 0C08FEF4 mov.l @(disp,pc),Rn */
	IF(0x0C08FEF6u); r6 <<= 16;  /* 0C08FEF6 shll16 Rn */
	r11 = 0xB0u; UPD(0x0C08FEFAu, 2);  /* 0C08FEF8 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C08FEFA mov Rm,Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C08FEFEu, 2);  /* 0C08FEFC mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C08FEFE add Rm,Rn */
	IF(0x0C08FF00u); { u32 t_ = r5; PR = 0x0C08FF04u; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08FF04u); }  /* 0C08FF00 jsr @Rn */
L_0C08FF04: BLKS(0x0C08FF04u);
	W32(r14 + 0x4u, r11); UPD(0x0C08FF06u, 1);  /* 0C08FF04 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C08FF06 add #imm,Rn */
	r1 = 0xADu; UPD(0x0C08FF0Au, 2);  /* 0C08FF08 mov.w @(disp,pc),Rn */
	W8(r11, r10); UPD(0x0C08FF0Cu, 1);  /* 0C08FF0A mov.b Rm,@Rn */
	r1 += r9;  /* 0C08FF0C add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C08FF10u, 2);  /* 0C08FF0E mov.l Rm,@(disp,Rn) */
	r11 = r9;  /* 0C08FF10 mov Rm,Rn */
	r10 = 0xA8u; UPD(0x0C08FF14u, 2);  /* 0C08FF12 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08FF16u, 1);  /* 0C08FF14 mov.b @Rm,Rn */
	r11 += r10;  /* 0C08FF16 add Rm,Rn */
	r11 += 0x1u;  /* 0C08FF18 add #imm,Rn */
	W8(r1, r4); UPD(0x0C08FF1Cu, 3);  /* 0C08FF1A mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C08FF1Eu, 1);  /* 0C08FF1C mov.b Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C08FF20u, 1);  /* 0C08FF1E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08FF20 mov Rm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C08FF24u, 2);  /* 0C08FF22 mov.l @(disp,pc),Rn */
	IF(0x0C08FF24u); { u32 t_ = r0; PR = 0x0C08FF28u; r5 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08FF28u); }  /* 0C08FF24 jsr @Rn */
L_0C08FF28: BLKS(0x0C08FF28u);
	r5 = R32(r14); UPD(0x0C08FF2Au, 1);  /* 0C08FF28 mov.l @Rm,Rn */
	r3 = 0x0u;  /* 0C08FF2A mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C08FF2Eu, 2);  /* 0C08FF2C mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08FF30u, 1);  /* 0C08FF2E mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFFFCu;  /* 0C08FF30 mov #imm,Rn */
	IF(0x0C08FF32u); MACL = r4 * r8;  /* 0C08FF32 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08FF36u, 4);  /* 0C08FF34 mov.l @(disp,pc),Rn */
	IF(0x0C08FF36u); r8 = MACL;  /* 0C08FF36 sts macl,Rn */
	r8 += r1;  /* 0C08FF38 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08FF3A add #imm,Rn */
	W16(r8, r12); UPD(0x0C08FF3Eu, 4);  /* 0C08FF3C mov.w Rm,@Rn */
	r0 = 0x90u; UPD(0x0C08FF40u, 1);  /* 0C08FF3E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08FF40 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C08FF44u, 2);  /* 0C08FF42 mov.w @Rm,Rn */
	r10 += r8;  /* 0C08FF44 add Rm,Rn */
	IF(0x0C08FF46u); W32(r0 + r9, r3); UPD(0x0C08FF48u, 2);  /* 0C08FF46 mov.l Rm,@(r0,Rn) */
	r10 += 0x1u;  /* 0C08FF48 add #imm,Rn */
	r7 = 0x94u; UPD(0x0C08FF4Cu, 2);  /* 0C08FF4A mov.w @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C08FF4C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08FF50u, 2);  /* 0C08FF4E mov.l Rm,@(disp,Rn) */
	r7 += r9;  /* 0C08FF50 add Rm,Rn */
	r13 = 0xC2B03A2u; UPD(0x0C08FF54u, 2);  /* 0C08FF52 mov.l @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C08FF56u, 1);  /* 0C08FF54 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C08FF58u, 1);  /* 0C08FF56 mov.w @Rm,Rn */
	r7 = 0xFFFFFFFAu;  /* 0C08FF58 mov #imm,Rn */
	r6 = 0x8Cu; UPD(0x0C08FF5Cu, 2);  /* 0C08FF5A mov.w @(disp,pc),Rn */
	IF(0x0C08FF5Cu); ARG0(0x407Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C08FF5C shad Rm,Rn */
	r12 = 0x84u; UPD(0x0C08FF60u, 2);  /* 0C08FF5E mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C08FF60 add Rm,Rn */
	r12 += r8;  /* 0C08FF62 add Rm,Rn */
	W32(r6, r3); UPD(0x0C08FF66u, 3);  /* 0C08FF64 mov.l Rm,@Rn */
	r12 += 0x2u;  /* 0C08FF66 add #imm,Rn */
	W16(r12, r0); UPD(0x0C08FF6Au, 2);  /* 0C08FF68 mov.w Rm,@Rn */
	r6 = 0x1FFu; UPD(0x0C08FF6Cu, 1);  /* 0C08FF6A mov.w @(disp,pc),Rn */
	r0 += 0x8u;  /* 0C08FF6C add #imm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C08FF70u, 2);  /* 0C08FF6E mov.l Rm,@(disp,Rn) */
	r0 &= r6;  /* 0C08FF70 and Rm,Rn */
	IF(0x0C08FF72u); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C08FF72 shad Rm,Rn */
	r3 = 0xC3000010u; UPD(0x0C08FF76u, 3);  /* 0C08FF74 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08FF76 mov #imm,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08FF7Au, 2);  /* 0C08FF78 mov.l @(disp,pc),Rn */
	r0 |= 0x40u;  /* 0C08FF7A or #imm,r0 */
	W32(r8 + 0xCu, r4); UPD(0x0C08FF7Eu, 2);  /* 0C08FF7C mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C08FF80u, 1);  /* 0C08FF7E mov.l Rm,@Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C08FF82u, 1);  /* 0C08FF80 mov.l Rm,@(disp,Rn) */
	IF(0x0C08FF82u); { u32 t_ = r1; PR = 0x0C08FF86u; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08FF86u); }  /* 0C08FF82 jsr @Rn */
L_0C08FF86: BLKS(0x0C08FF86u);
	r3 = 0xC0A9AE0u; UPD(0x0C08FF88u, 1);  /* 0C08FF86 mov.l @(disp,pc),Rn */
	IF(0x0C08FF88u); { u32 t_ = r3; PR = 0x0C08FF8Cu; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08FF8Cu); }  /* 0C08FF88 jsr @Rn */
L_0C08FF8C: BLKS(0x0C08FF8Cu);
	r0 = 0xF0000u; UPD(0x0C08FF8Eu, 1);  /* 0C08FF8C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C08FF8E mov #imm,Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C08FF92u, 2);  /* 0C08FF90 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C08FF94u, 1);  /* 0C08FF92 mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C08FF94 add Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C08FF98u, 2);  /* 0C08FF96 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C08FF9Au, 1);  /* 0C08FF98 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08FF9Cu, 1);  /* 0C08FF9A mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C08FF9C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C08FFA0u, 2);  /* 0C08FF9E mov.b @Rm,Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C08FFA2u, 1);  /* 0C08FFA0 mov.l @(disp,Rm),Rn */
	IF(0x0C08FFA2u); W8(r0 + r8, r6); UPD(0x0C08FFA4u, 1);  /* 0C08FFA2 mov.b Rm,@(r0,Rn) */
	W8(r10, r5); UPD(0x0C08FFA6u, 1);  /* 0C08FFA4 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C08FFA6 mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08FFAAu, 2);  /* 0C08FFA8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C08FFACu, 1);  /* 0C08FFAA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r13); UPD(0x0C08FFAEu, 1);  /* 0C08FFAC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C08FFB0u, 1);  /* 0C08FFAE mov.l Rm,@(disp,Rn) */
	r4 = 0xACu; UPD(0x0C08FFB2u, 1);  /* 0C08FFB0 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08FFB4u, 1);  /* 0C08FFB2 mov.b @Rm,Rn */
	r8 += r4;  /* 0C08FFB4 add Rm,Rn */
	r8 += 0x1u;  /* 0C08FFB6 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C08FE7Au, 5); goto L_0C08FE7A; }  /* 0C08FFB8 bra */
}

/* FUN_0c090020 */
void blk_f_0C090020(sh3_t *c)
{
	LOCALS;
L_0C090020: BLKS(0x0C090020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090022u, 1);  /* 0C090020 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C090022 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090026u, 2);  /* 0C090024 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090028u, 1);  /* 0C090026 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C09002Au, 1);  /* 0C090028 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09002Cu, 1);  /* 0C09002A mov.l Rm,@-Rn */
	IF(0x0C09002Cu); MACL = r5 * r3;  /* 0C09002C mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C090030u, 3);  /* 0C09002E mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C090032u, 1);  /* 0C090030 mov.l @(disp,pc),Rn */
	IF(0x0C090032u); r3 = MACL;  /* 0C090032 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090036u, 2);  /* 0C090034 mov.l Rm,@-Rn */
	r3 += r2;  /* 0C090036 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09003Au, 2);  /* 0C090038 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C09003A mov Rm,Rn */
	IF(0x0C09003Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09003Eu, 2);  /* 0C09003C mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C09003E mov #imm,Rn */
	IF(0x0C090040u); MACL = r5 * r0;  /* 0C090040 mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C090044u, 4);  /* 0C090042 mov.l @(disp,pc),Rn */
	IF(0x0C090044u); r0 = MACL;  /* 0C090044 sts macl,Rn */
	IF(0x0C090046u); r1 = R32(r0 + r7); UPD(0x0C090048u, 2);  /* 0C090046 mov.l @(r0,Rm),Rn */
	r0 = 0x60000000u; UPD(0x0C09004Au, 1);  /* 0C090048 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C09004A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0900C0u, 4); goto L_0C0900C0; } goto L_0C090050; }  /* 0C09004C bt/s */
L_0C090050: BLKS(0x0C090050u);
	r8 = R32(r3 + 0x28u); UPD(0x0C090052u, 2);  /* 0C090050 mov.l @(disp,Rm),Rn */
	r11 = r7;  /* 0C090052 mov Rm,Rn */
	r9 = 0x13FFFFEu; UPD(0x0C090056u, 2);  /* 0C090054 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C090056 mov #imm,Rn */
	r12 = 0xC3C86F0u; UPD(0x0C09005Au, 2);  /* 0C090058 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFEBu;  /* 0C09005A mov #imm,Rn */
	r4 = R32(r3 + 0x24u); UPD(0x0C09005Eu, 2);  /* 0C09005C mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C09005E mov #imm,Rn */
	UPD(0x0C090060u, 1);
L_0C090060: BLKS(0x0C090060u);
	r0 = 0xC1B55E4u; UPD(0x0C090062u, 1);  /* 0C090060 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C090062 add Rm,Rn */
	r2 = R32(r0); UPD(0x0C090066u, 2);  /* 0C090064 mov.l @Rm,Rn */
	r3 = R32(r0 + 0x4u); UPD(0x0C090068u, 1);  /* 0C090066 mov.l @(disp,Rm),Rn */
	r2 += r4;  /* 0C090068 add Rm,Rn */
	r0 = r2;  /* 0C09006A mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09006C add #imm,Rn */
	T = r0 > r9;  /* 0C09006E cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0900B0u, 7); goto L_0C0900B0; } goto L_0C090074; }  /* 0C090070 bt/s */
L_0C090074: BLKS(0x0C090074u);
	r0 = 0xFE9FFFFFu; UPD(0x0C090076u, 2);  /* 0C090074 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C090076 add Rm,Rn */
	T = r0 > r9;  /* 0C090078 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = 0x4Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0900B0u, 5); goto L_0C0900B0; } goto L_0C09007E; }  /* 0C09007A bt/s */
L_0C09007E: BLKS(0x0C09007Eu);
	IF(0x0C09007Eu); MACL = r5 * r0;  /* 0C09007E mul.l Rm,Rn */
	IF(0x0C090080u); r1 = MACL;  /* 0C090080 sts macl,Rn */
	r1 += r11;  /* 0C090082 add Rm,Rn */
	r0 = R32(r1 + 0x8u); UPD(0x0C090086u, 6);  /* 0C090084 mov.l @(disp,Rm),Rn */
	r0 += r2;  /* 0C090086 add Rm,Rn */
	r2 = 0x4u;  /* 0C090088 mov #imm,Rn */
	IF(0x0C09008Au); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09008A shad Rm,Rn */
	r1 = r5;  /* 0C09008C mov Rm,Rn */
	IF(0x0C09008Eu); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C09008E shld Rm,Rn */
	r0 &= 0xFu;  /* 0C090090 and #imm,r0 */
	r1 += r0;  /* 0C090092 add Rm,Rn */
	r0 = 0xFEA00000u; UPD(0x0C090096u, 8);  /* 0C090094 mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C090096 mov #imm,Rn */
	r3 += r0;  /* 0C090098 add Rm,Rn */
	r0 = 0x4u;  /* 0C09009A mov #imm,Rn */
	IF(0x0C09009Cu); ARG0(0x43ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C09009C shad Rm,Rn */
	IF(0x0C09009Eu); ARG0(0x410Du); { s32 s_ = (s32)r0; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C09009E shld Rm,Rn */
	r3 &= r2;  /* 0C0900A0 and Rm,Rn */
	r1 += r3;  /* 0C0900A2 add Rm,Rn */
	IF(0x0C0900A4u); r1 <<= 2;  /* 0C0900A4 shll2 Rn */
	r0 = r1;  /* 0C0900A6 mov Rm,Rn */
	IF(0x0C0900A8u); r2 = R32(r0 + r12); UPD(0x0C0900AAu, 10);  /* 0C0900A8 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0900AA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0900C0u, 4); goto L_0C0900C0; } UPD(0x0C0900B0u, 1); goto L_0C0900B0; }  /* 0C0900AC bt/s */
L_0C0900B0: BLKS(0x0C0900B0u);
	r2 = r6;  /* 0C0900B0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0900B2 add #imm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C0900B4 exts.w Rm,Rn */
	r3 = 0xCu;  /* 0C0900B6 mov #imm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C0900B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C090060u, 8); goto L_0C090060; } goto L_0C0900BE; }  /* 0C0900BA bf/s */
L_0C0900BE: BLKS(0x0C0900BEu);
	r0 = 0x1u;  /* 0C0900BE mov #imm,Rn */
	UPD(0x0C0900C0u, 2);
L_0C0900C0: BLKS(0x0C0900C0u);
	r15 = r14;  /* 0C0900C0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0900C4u, 2);  /* 0C0900C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0900C6u, 1);  /* 0C0900C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0900C8u, 1);  /* 0C0900C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0900CAu, 1);  /* 0C0900C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0900CCu, 1);  /* 0C0900CA mov.l @Rm+,Rn */
	IF(0x0C0900CCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0900CC rts */
}

void blk_f_0C090100(sh3_t *c)
{
	LOCALS;
L_0C090100: BLKS(0x0C090100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090102u, 1);  /* 0C090100 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFAu;  /* 0C090102 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090106u, 2);  /* 0C090104 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090108u, 1);  /* 0C090106 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09010Au, 1);  /* 0C090108 mov.l Rm,@-Rn */
	r10 = 0xB4u; UPD(0x0C09010Cu, 1);  /* 0C09010A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09010C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C090110u, 2);  /* 0C09010E mov.l Rm,@-Rn */
	IF(0x0C090110u); MACL = r11 * r10;  /* 0C090110 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090114u, 3);  /* 0C090112 mov.l Rm,@-Rn */
	r12 = 0xC286578u; UPD(0x0C090116u, 1);  /* 0C090114 mov.l @(disp,pc),Rn */
	IF(0x0C090116u); r8 = MACL;  /* 0C090116 sts macl,Rn */
	IF(0x0C090118u); r15 -= 4; W32(r15, PR); UPD(0x0C09011Au, 2);  /* 0C090118 sts.l pr,@-Rn */
	r8 += r12;  /* 0C09011A add Rm,Rn */
	r9 = R32(r8 + 0x8u); UPD(0x0C09011Eu, 2);  /* 0C09011C mov.l @(disp,Rm),Rn */
	IF(0x0C09011Eu); ARG0(0x490Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C09011E shad Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C090120 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09012Au, 5); goto L_0C09012A; } goto L_0C090126; }  /* 0C090122 bf/s */
L_0C090126: BLKS(0x0C090126u);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C090270u, 4); goto L_0C090270; }  /* 0C090126 bra */
L_0C09012A: BLKS(0x0C09012Au);
	r0 = r9;  /* 0C09012A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C09012C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C090150u, 5); goto L_0C090150; }  /* 0C09012E bt */
L_0C090130: BLKS(0x0C090130u);
	r15 = r14;  /* 0C090130 mov Rm,Rn */
	IF(0x0C090132u); PR = R32(r15); r15 += 4; UPD(0x0C090134u, 2);  /* 0C090132 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090136u, 1);  /* 0C090134 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090138u, 1);  /* 0C090136 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09013Au, 1);  /* 0C090138 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09013Cu, 1);  /* 0C09013A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09013Eu, 1);  /* 0C09013C mov.l @Rm+,Rn */
	IF(0x0C09013Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09013E rts */
L_0C090150: BLKS(0x0C090150u);
	r9 = 0xC0A8B50u; UPD(0x0C090152u, 1);  /* 0C090150 mov.l @(disp,pc),Rn */
	IF(0x0C090152u); { u32 t_ = r9; PR = 0x0C090156u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C090156u); }  /* 0C090152 jsr @Rn */
L_0C090156: BLKS(0x0C090156u);
	IF(0x0C090156u); T = (s32)r0 >= 0;  /* 0C090156 cmp/pz Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C090160u, 4); goto L_0C090160; } goto L_0C09015C; }  /* 0C090158 bt/s */
L_0C09015C: BLKS(0x0C09015Cu);
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C090130u, 4); goto L_0C090130; }  /* 0C09015C bra */
L_0C090160: BLKS(0x0C090160u);
	IF(0x0C090160u); MACL = r0 * r10;  /* 0C090160 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C090164u, 3);  /* 0C090162 mov.l @(disp,pc),Rn */
	r8 = 0x3u;  /* 0C090164 mov #imm,Rn */
	IF(0x0C090166u); r4 = MACL;  /* 0C090166 sts macl,Rn */
	r4 += r12;  /* 0C090168 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09016Cu, 4);  /* 0C09016A mov.l @Rm,Rn */
	r3 = R32(r4 + 0x8u); UPD(0x0C09016Eu, 1);  /* 0C09016C mov.l @(disp,Rm),Rn */
	r10 |= r1;  /* 0C09016E or Rm,Rn */
	r3 += 0x20u;  /* 0C090170 add #imm,Rn */
	r2 = 0xC0A8B10u; UPD(0x0C090174u, 3);  /* 0C090172 mov.l @(disp,pc),Rn */
	W32(r4 + 0x8u, r3); UPD(0x0C090176u, 1);  /* 0C090174 mov.l Rm,@(disp,Rn) */
	W32(r4, r10); UPD(0x0C090178u, 1);  /* 0C090176 mov.l Rm,@Rn */
	r12 = 0xC062780u; UPD(0x0C09017Au, 1);  /* 0C090178 mov.l @(disp,pc),Rn */
	IF(0x0C09017Au); { u32 t_ = r2; PR = 0x0C09017Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09017Eu); }  /* 0C09017A jsr @Rn */
L_0C09017E: BLKS(0x0C09017Eu);
	IF(0x0C09017Eu); { u32 t_ = r12; PR = 0x0C090182u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C090182u); }  /* 0C09017E jsr @Rn */
L_0C090182: BLKS(0x0C090182u);
	T = r0 > r8;  /* 0C090182 cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0901CCu, 4); goto L_0C0901CC; } goto L_0C090188; }  /* 0C090184 bt/s */
L_0C090188: BLKS(0x0C090188u);
	r0 = 0xC090194u;  /* 0C090188 mova @(disp,pc),r0 */
	IF(0x0C09018Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09018Cu, 3);  /* 0C09018A mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C09018C extu.b Rm,Rn */
	IF(0x0C09018Eu); { u32 tv_ = (r5 + 0x0C090192u); u32 t_ = PHYS(tv_); IF(0x0C090190u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0901A0u: goto L_0C0901A0; case 0x0C0901E0u: goto L_0C0901E0; case 0x0C090210u: goto L_0C090210; case 0x0C090240u: goto L_0C090240; default: JUMPD(tv_); } }  /* 0C09018E braf Rn */
L_0C0901A0: BLKS(0x0C0901A0u);
	r2 = 0xB4u; UPD(0x0C0901A2u, 1);  /* 0C0901A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0901A2 add #imm,Rn */
	IF(0x0C0901A4u); MACL = r11 * r2;  /* 0C0901A4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0901A8u, 4);  /* 0C0901A6 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C0901A8 mov #imm,Rn */
	IF(0x0C0901AAu); r9 = MACL;  /* 0C0901AA sts macl,Rn */
	r9 += r0;  /* 0C0901AC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0901B0u, 4);  /* 0C0901AE mov.w @(disp,pc),Rn */
	IF(0x0C0901B0u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0901B2u, 1);  /* 0C0901B0 mov.b @(r0,Rm),Rn */
	r8 = r12 & 0xFF;  /* 0C0901B2 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C0901B6u, 2);  /* 0C0901B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0901B6 add #imm,Rn */
	IF(0x0C0901B8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0901BAu, 2);  /* 0C0901B8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0901BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0901BEu, 2);  /* 0C0901BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0901C0u, 1);  /* 0C0901BE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0901C2u, 1);  /* 0C0901C0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0901C4u, 1);  /* 0C0901C2 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0901C6u, 1);  /* 0C0901C4 mov.l @(disp,Rm),Rn */
L_0C0901C6: BLKS(0x0C0901C6u);
	IF(0x0C0901C6u); { u32 t_ = r0; PR = 0x0C0901CAu; IF(0x0C0901C8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0901CAu); }  /* 0C0901C6 jsr @Rn */
L_0C0901CA: BLKS(0x0C0901CAu);
	r15 += 0x8u;  /* 0C0901CA add #imm,Rn */
	UPD(0x0C0901CCu, 1);
L_0C0901CC: BLKS(0x0C0901CCu);
	r4 = 0xB4u; UPD(0x0C0901CEu, 1);  /* 0C0901CC mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0901CE mov #imm,Rn */
	IF(0x0C0901D0u); MACL = r11 * r4;  /* 0C0901D0 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0901D4u, 4);  /* 0C0901D2 mov.l @(disp,pc),Rn */
	IF(0x0C0901D4u); r0 = MACL;  /* 0C0901D4 sts macl,Rn */
	{ IF(0x0C0901D8u); W32(r0 + r11, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C090130u, 4); goto L_0C090130; }  /* 0C0901D6 bra */
L_0C0901E0: BLKS(0x0C0901E0u);
	r7 = 0xB4u; UPD(0x0C0901E2u, 1);  /* 0C0901E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0901E2 add #imm,Rn */
	IF(0x0C0901E4u); MACL = r11 * r7;  /* 0C0901E4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0901E8u, 4);  /* 0C0901E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0901EAu, 1);  /* 0C0901E8 mov.w @(disp,pc),Rn */
	IF(0x0C0901EAu); r3 = MACL;  /* 0C0901EA sts macl,Rn */
	r3 += r6;  /* 0C0901EC add Rm,Rn */
	IF(0x0C0901EEu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0901F0u, 3);  /* 0C0901EE mov.b @(r0,Rm),Rn */
	r5 = r9 & 0xFF;  /* 0C0901F0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0901F4u, 2);  /* 0C0901F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0901F4 add #imm,Rn */
	IF(0x0C0901F6u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0901F8u, 2);  /* 0C0901F6 mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C0901F8 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0901FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0901FEu, 3);  /* 0C0901FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C090200u, 1);  /* 0C0901FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C090202u, 1);  /* 0C090200 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C090204u, 1);  /* 0C090202 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090204 bra */
L_0C090210: BLKS(0x0C090210u);
	r10 = 0xB4u; UPD(0x0C090212u, 1);  /* 0C090210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090212 add #imm,Rn */
	IF(0x0C090214u); MACL = r11 * r10;  /* 0C090214 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C090218u, 4);  /* 0C090216 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C090218 mov #imm,Rn */
	IF(0x0C09021Au); r8 = MACL;  /* 0C09021A sts macl,Rn */
	r8 += r0;  /* 0C09021C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C090220u, 4);  /* 0C09021E mov.w @(disp,pc),Rn */
	IF(0x0C090220u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C090222u, 1);  /* 0C090220 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C090222 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C090226u, 2);  /* 0C090224 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C090226 add #imm,Rn */
	IF(0x0C090228u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09022Au, 2);  /* 0C090228 mov.b @(r0,Rm),Rn */
	r12 = r2 & 0xFF;  /* 0C09022A extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C09022Eu, 2);  /* 0C09022C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C090230u, 1);  /* 0C09022E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C090232u, 1);  /* 0C090230 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C090234u, 1);  /* 0C090232 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090234 bra */
L_0C090240: BLKS(0x0C090240u);
	r2 = 0xB4u; UPD(0x0C090242u, 1);  /* 0C090240 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090242 add #imm,Rn */
	IF(0x0C090244u); MACL = r11 * r2;  /* 0C090244 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C090248u, 4);  /* 0C090246 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09024Au, 1);  /* 0C090248 mov.w @(disp,pc),Rn */
	IF(0x0C09024Au); r9 = MACL;  /* 0C09024A sts macl,Rn */
	r9 += r12;  /* 0C09024C add Rm,Rn */
	IF(0x0C09024Eu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C090250u, 3);  /* 0C09024E mov.b @(r0,Rm),Rn */
	r7 = r8 & 0xFF;  /* 0C090250 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C090254u, 2);  /* 0C090252 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C090254 add #imm,Rn */
	IF(0x0C090256u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C090258u, 2);  /* 0C090256 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C090258 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09025Cu, 2);  /* 0C09025A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C09025Eu, 1);  /* 0C09025C mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C09025E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C090262u, 2);  /* 0C090260 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C090264u, 1);  /* 0C090262 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090264 bra */
L_0C090270: BLKS(0x0C090270u);
	r12 = 0xB0u; UPD(0x0C090272u, 1);  /* 0C090270 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C090272 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C090276u, 2);  /* 0C090274 mov.b @Rm,Rn */
	r5 = 0xDu;  /* 0C090276 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C090278 extu.b Rm,Rn */
	r10 = 0xA9u; UPD(0x0C09027Cu, 3);  /* 0C09027A mov.w @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C09027Eu, 1);  /* 0C09027C mov.l Rm,@Rn */
	r10 += r8;  /* 0C09027E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C090282u, 2);  /* 0C090280 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C090282 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C090286u, 2);  /* 0C090284 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C090288u, 1);  /* 0C090286 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09028Au, 1);  /* 0C090288 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09028Cu, 1);  /* 0C09028A mov.l @(disp,Rm),Rn */
	IF(0x0C09028Cu); { u32 t_ = r0; PR = 0x0C090290u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C090290u); }  /* 0C09028C jsr @Rn */
L_0C090290: BLKS(0x0C090290u);
	r4 = r11;  /* 0C090290 mov Rm,Rn */
	r11 = 0xC090020u; UPD(0x0C090294u, 2);  /* 0C090292 mov.l @(disp,pc),Rn */
	IF(0x0C090294u); { u32 t_ = r11; PR = 0x0C090298u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C090020, 0x0C090020u, 0x0C090298u); }  /* 0C090294 jsr @Rn */
L_0C090298: BLKS(0x0C090298u);
	T = (r0 & r0) == 0;  /* 0C090298 tst Rm,Rn */
	if (!T) { UPD(0x0C0902A0u, 4); goto L_0C0902A0; }  /* 0C09029A bf */
L_0C09029C: BLKS(0x0C09029Cu);
	{ W32(r8, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C090130u, 3); goto L_0C090130; }  /* 0C09029C bra */
L_0C0902A0: BLKS(0x0C0902A0u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C0902A2u, 1);  /* 0C0902A0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0902A2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0902A6u, 2);  /* 0C0902A4 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0902A6 extu.b Rm,Rn */
	r11 = 0xC07DF30u; UPD(0x0C0902AAu, 2);  /* 0C0902A8 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFF;  /* 0C0902AA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0902AEu, 2);  /* 0C0902AC mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0902AE mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0902B2u, 2);  /* 0C0902B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0902B2u); { u32 t_ = r11; PR = 0x0C0902B6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0902B6u); }  /* 0C0902B2 jsr @Rn */
L_0C0902B6: BLKS(0x0C0902B6u);
	r10 = 0xC0BEE10u; UPD(0x0C0902B8u, 1);  /* 0C0902B6 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0902B8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0902BCu, 2);  /* 0C0902BA mov.b @Rm,Rn */
	r4 = 0x10u;  /* 0C0902BC mov #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C0902BE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0902C2u, 3);  /* 0C0902C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0902C2u); { u32 t_ = r10; PR = 0x0C0902C6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0902C6u); }  /* 0C0902C2 jsr @Rn */
L_0C0902C6: BLKS(0x0C0902C6u);
	{ IF(0x0C0902C8u); ; /* slot nop */ UPD(0x0C09029Cu, 3); goto L_0C09029C; }  /* 0C0902C6 bra */
}

void blk_f_0C090300(sh3_t *c)
{
	LOCALS;
	goto L_0C090300;
L_0C090100: BLKS(0x0C090100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090102u, 1);  /* 0C090100 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFAu;  /* 0C090102 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090106u, 2);  /* 0C090104 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090108u, 1);  /* 0C090106 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09010Au, 1);  /* 0C090108 mov.l Rm,@-Rn */
	r10 = 0xB4u; UPD(0x0C09010Cu, 1);  /* 0C09010A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09010C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C090110u, 2);  /* 0C09010E mov.l Rm,@-Rn */
	IF(0x0C090110u); MACL = r11 * r10;  /* 0C090110 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090114u, 3);  /* 0C090112 mov.l Rm,@-Rn */
	r12 = 0xC286578u; UPD(0x0C090116u, 1);  /* 0C090114 mov.l @(disp,pc),Rn */
	IF(0x0C090116u); r8 = MACL;  /* 0C090116 sts macl,Rn */
	IF(0x0C090118u); r15 -= 4; W32(r15, PR); UPD(0x0C09011Au, 2);  /* 0C090118 sts.l pr,@-Rn */
	r8 += r12;  /* 0C09011A add Rm,Rn */
	r9 = R32(r8 + 0x8u); UPD(0x0C09011Eu, 2);  /* 0C09011C mov.l @(disp,Rm),Rn */
	IF(0x0C09011Eu); ARG0(0x490Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C09011E shad Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C090120 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09012Au, 5); goto L_0C09012A; } goto L_0C090126; }  /* 0C090122 bf/s */
L_0C090126: BLKS(0x0C090126u);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C090270u, 4); goto L_0C090270; }  /* 0C090126 bra */
L_0C09012A: BLKS(0x0C09012Au);
	r0 = r9;  /* 0C09012A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C09012C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C090150u, 5); goto L_0C090150; }  /* 0C09012E bt */
L_0C090130: BLKS(0x0C090130u);
	r15 = r14;  /* 0C090130 mov Rm,Rn */
	IF(0x0C090132u); PR = R32(r15); r15 += 4; UPD(0x0C090134u, 2);  /* 0C090132 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090136u, 1);  /* 0C090134 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090138u, 1);  /* 0C090136 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09013Au, 1);  /* 0C090138 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09013Cu, 1);  /* 0C09013A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09013Eu, 1);  /* 0C09013C mov.l @Rm+,Rn */
	IF(0x0C09013Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09013E rts */
L_0C090150: BLKS(0x0C090150u);
	r9 = 0xC0A8B50u; UPD(0x0C090152u, 1);  /* 0C090150 mov.l @(disp,pc),Rn */
	IF(0x0C090152u); { u32 t_ = r9; PR = 0x0C090156u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C090156u); }  /* 0C090152 jsr @Rn */
L_0C090156: BLKS(0x0C090156u);
	IF(0x0C090156u); T = (s32)r0 >= 0;  /* 0C090156 cmp/pz Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C090160u, 4); goto L_0C090160; } goto L_0C09015C; }  /* 0C090158 bt/s */
L_0C09015C: BLKS(0x0C09015Cu);
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C090130u, 4); goto L_0C090130; }  /* 0C09015C bra */
L_0C090160: BLKS(0x0C090160u);
	IF(0x0C090160u); MACL = r0 * r10;  /* 0C090160 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C090164u, 3);  /* 0C090162 mov.l @(disp,pc),Rn */
	r8 = 0x3u;  /* 0C090164 mov #imm,Rn */
	IF(0x0C090166u); r4 = MACL;  /* 0C090166 sts macl,Rn */
	r4 += r12;  /* 0C090168 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09016Cu, 4);  /* 0C09016A mov.l @Rm,Rn */
	r3 = R32(r4 + 0x8u); UPD(0x0C09016Eu, 1);  /* 0C09016C mov.l @(disp,Rm),Rn */
	r10 |= r1;  /* 0C09016E or Rm,Rn */
	r3 += 0x20u;  /* 0C090170 add #imm,Rn */
	r2 = 0xC0A8B10u; UPD(0x0C090174u, 3);  /* 0C090172 mov.l @(disp,pc),Rn */
	W32(r4 + 0x8u, r3); UPD(0x0C090176u, 1);  /* 0C090174 mov.l Rm,@(disp,Rn) */
	W32(r4, r10); UPD(0x0C090178u, 1);  /* 0C090176 mov.l Rm,@Rn */
	r12 = 0xC062780u; UPD(0x0C09017Au, 1);  /* 0C090178 mov.l @(disp,pc),Rn */
	IF(0x0C09017Au); { u32 t_ = r2; PR = 0x0C09017Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09017Eu); }  /* 0C09017A jsr @Rn */
L_0C09017E: BLKS(0x0C09017Eu);
	IF(0x0C09017Eu); { u32 t_ = r12; PR = 0x0C090182u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C090182u); }  /* 0C09017E jsr @Rn */
L_0C090182: BLKS(0x0C090182u);
	T = r0 > r8;  /* 0C090182 cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0901CCu, 4); goto L_0C0901CC; } goto L_0C090188; }  /* 0C090184 bt/s */
L_0C090188: BLKS(0x0C090188u);
	r0 = 0xC090194u;  /* 0C090188 mova @(disp,pc),r0 */
	IF(0x0C09018Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09018Cu, 3);  /* 0C09018A mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C09018C extu.b Rm,Rn */
	IF(0x0C09018Eu); { u32 tv_ = (r5 + 0x0C090192u); u32 t_ = PHYS(tv_); IF(0x0C090190u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0901A0u: goto L_0C0901A0; case 0x0C0901E0u: goto L_0C0901E0; case 0x0C090210u: goto L_0C090210; case 0x0C090240u: goto L_0C090240; default: JUMPD(tv_); } }  /* 0C09018E braf Rn */
L_0C0901A0: BLKS(0x0C0901A0u);
	r2 = 0xB4u; UPD(0x0C0901A2u, 1);  /* 0C0901A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0901A2 add #imm,Rn */
	IF(0x0C0901A4u); MACL = r11 * r2;  /* 0C0901A4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0901A8u, 4);  /* 0C0901A6 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C0901A8 mov #imm,Rn */
	IF(0x0C0901AAu); r9 = MACL;  /* 0C0901AA sts macl,Rn */
	r9 += r0;  /* 0C0901AC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0901B0u, 4);  /* 0C0901AE mov.w @(disp,pc),Rn */
	IF(0x0C0901B0u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0901B2u, 1);  /* 0C0901B0 mov.b @(r0,Rm),Rn */
	r8 = r12 & 0xFF;  /* 0C0901B2 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C0901B6u, 2);  /* 0C0901B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0901B6 add #imm,Rn */
	IF(0x0C0901B8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0901BAu, 2);  /* 0C0901B8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0901BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0901BEu, 2);  /* 0C0901BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0901C0u, 1);  /* 0C0901BE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0901C2u, 1);  /* 0C0901C0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0901C4u, 1);  /* 0C0901C2 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0901C6u, 1);  /* 0C0901C4 mov.l @(disp,Rm),Rn */
L_0C0901C6: BLKS(0x0C0901C6u);
	IF(0x0C0901C6u); { u32 t_ = r0; PR = 0x0C0901CAu; IF(0x0C0901C8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0901CAu); }  /* 0C0901C6 jsr @Rn */
L_0C0901CA: BLKS(0x0C0901CAu);
	r15 += 0x8u;  /* 0C0901CA add #imm,Rn */
	UPD(0x0C0901CCu, 1);
L_0C0901CC: BLKS(0x0C0901CCu);
	r4 = 0xB4u; UPD(0x0C0901CEu, 1);  /* 0C0901CC mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0901CE mov #imm,Rn */
	IF(0x0C0901D0u); MACL = r11 * r4;  /* 0C0901D0 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0901D4u, 4);  /* 0C0901D2 mov.l @(disp,pc),Rn */
	IF(0x0C0901D4u); r0 = MACL;  /* 0C0901D4 sts macl,Rn */
	{ IF(0x0C0901D8u); W32(r0 + r11, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C090130u, 4); goto L_0C090130; }  /* 0C0901D6 bra */
L_0C0901E0: BLKS(0x0C0901E0u);
	r7 = 0xB4u; UPD(0x0C0901E2u, 1);  /* 0C0901E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0901E2 add #imm,Rn */
	IF(0x0C0901E4u); MACL = r11 * r7;  /* 0C0901E4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0901E8u, 4);  /* 0C0901E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0901EAu, 1);  /* 0C0901E8 mov.w @(disp,pc),Rn */
	IF(0x0C0901EAu); r3 = MACL;  /* 0C0901EA sts macl,Rn */
	r3 += r6;  /* 0C0901EC add Rm,Rn */
	IF(0x0C0901EEu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0901F0u, 3);  /* 0C0901EE mov.b @(r0,Rm),Rn */
	r5 = r9 & 0xFF;  /* 0C0901F0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0901F4u, 2);  /* 0C0901F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0901F4 add #imm,Rn */
	IF(0x0C0901F6u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0901F8u, 2);  /* 0C0901F6 mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C0901F8 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0901FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0901FEu, 3);  /* 0C0901FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C090200u, 1);  /* 0C0901FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C090202u, 1);  /* 0C090200 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C090204u, 1);  /* 0C090202 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090204 bra */
L_0C090210: BLKS(0x0C090210u);
	r10 = 0xB4u; UPD(0x0C090212u, 1);  /* 0C090210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090212 add #imm,Rn */
	IF(0x0C090214u); MACL = r11 * r10;  /* 0C090214 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C090218u, 4);  /* 0C090216 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C090218 mov #imm,Rn */
	IF(0x0C09021Au); r8 = MACL;  /* 0C09021A sts macl,Rn */
	r8 += r0;  /* 0C09021C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C090220u, 4);  /* 0C09021E mov.w @(disp,pc),Rn */
	IF(0x0C090220u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C090222u, 1);  /* 0C090220 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C090222 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C090226u, 2);  /* 0C090224 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C090226 add #imm,Rn */
	IF(0x0C090228u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09022Au, 2);  /* 0C090228 mov.b @(r0,Rm),Rn */
	r12 = r2 & 0xFF;  /* 0C09022A extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C09022Eu, 2);  /* 0C09022C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C090230u, 1);  /* 0C09022E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C090232u, 1);  /* 0C090230 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C090234u, 1);  /* 0C090232 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090234 bra */
L_0C090240: BLKS(0x0C090240u);
	r2 = 0xB4u; UPD(0x0C090242u, 1);  /* 0C090240 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090242 add #imm,Rn */
	IF(0x0C090244u); MACL = r11 * r2;  /* 0C090244 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C090248u, 4);  /* 0C090246 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09024Au, 1);  /* 0C090248 mov.w @(disp,pc),Rn */
	IF(0x0C09024Au); r9 = MACL;  /* 0C09024A sts macl,Rn */
	r9 += r12;  /* 0C09024C add Rm,Rn */
	IF(0x0C09024Eu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C090250u, 3);  /* 0C09024E mov.b @(r0,Rm),Rn */
	r7 = r8 & 0xFF;  /* 0C090250 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C090254u, 2);  /* 0C090252 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C090254 add #imm,Rn */
	IF(0x0C090256u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C090258u, 2);  /* 0C090256 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C090258 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09025Cu, 2);  /* 0C09025A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C09025Eu, 1);  /* 0C09025C mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C09025E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C090262u, 2);  /* 0C090260 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C090264u, 1);  /* 0C090262 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0901C6u, 3); goto L_0C0901C6; }  /* 0C090264 bra */
L_0C090270: BLKS(0x0C090270u);
	r12 = 0xB0u; UPD(0x0C090272u, 1);  /* 0C090270 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C090272 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C090276u, 2);  /* 0C090274 mov.b @Rm,Rn */
	r5 = 0xDu;  /* 0C090276 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C090278 extu.b Rm,Rn */
	r10 = 0xA9u; UPD(0x0C09027Cu, 3);  /* 0C09027A mov.w @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C09027Eu, 1);  /* 0C09027C mov.l Rm,@Rn */
	r10 += r8;  /* 0C09027E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C090282u, 2);  /* 0C090280 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C090282 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C090286u, 2);  /* 0C090284 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C090288u, 1);  /* 0C090286 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09028Au, 1);  /* 0C090288 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09028Cu, 1);  /* 0C09028A mov.l @(disp,Rm),Rn */
	IF(0x0C09028Cu); { u32 t_ = r0; PR = 0x0C090290u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C090290u); }  /* 0C09028C jsr @Rn */
L_0C090290: BLKS(0x0C090290u);
	r4 = r11;  /* 0C090290 mov Rm,Rn */
	r11 = 0xC090020u; UPD(0x0C090294u, 2);  /* 0C090292 mov.l @(disp,pc),Rn */
	IF(0x0C090294u); { u32 t_ = r11; PR = 0x0C090298u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C090020, 0x0C090020u, 0x0C090298u); }  /* 0C090294 jsr @Rn */
L_0C090298: BLKS(0x0C090298u);
	T = (r0 & r0) == 0;  /* 0C090298 tst Rm,Rn */
	if (!T) { UPD(0x0C0902A0u, 4); goto L_0C0902A0; }  /* 0C09029A bf */
L_0C09029C: BLKS(0x0C09029Cu);
	{ W32(r8, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C090130u, 3); goto L_0C090130; }  /* 0C09029C bra */
L_0C0902A0: BLKS(0x0C0902A0u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C0902A2u, 1);  /* 0C0902A0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0902A2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0902A6u, 2);  /* 0C0902A4 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0902A6 extu.b Rm,Rn */
	r11 = 0xC07DF30u; UPD(0x0C0902AAu, 2);  /* 0C0902A8 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFF;  /* 0C0902AA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0902AEu, 2);  /* 0C0902AC mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0902AE mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0902B2u, 2);  /* 0C0902B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0902B2u); { u32 t_ = r11; PR = 0x0C0902B6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0902B6u); }  /* 0C0902B2 jsr @Rn */
L_0C0902B6: BLKS(0x0C0902B6u);
	r10 = 0xC0BEE10u; UPD(0x0C0902B8u, 1);  /* 0C0902B6 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0902B8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0902BCu, 2);  /* 0C0902BA mov.b @Rm,Rn */
	r4 = 0x10u;  /* 0C0902BC mov #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C0902BE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0902C2u, 3);  /* 0C0902C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0902C2u); { u32 t_ = r10; PR = 0x0C0902C6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0902C6u); }  /* 0C0902C2 jsr @Rn */
L_0C0902C6: BLKS(0x0C0902C6u);
	{ IF(0x0C0902C8u); ; /* slot nop */ UPD(0x0C09029Cu, 3); goto L_0C09029C; }  /* 0C0902C6 bra */
L_0C090300: BLKS(0x0C090300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090302u, 1);  /* 0C090300 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFBu;  /* 0C090302 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090306u, 2);  /* 0C090304 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090308u, 1);  /* 0C090306 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09030Au, 1);  /* 0C090308 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09030Cu, 1);  /* 0C09030A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C09030C exts.w Rm,Rn */
	r4 = 0xB4u; UPD(0x0C090310u, 2);  /* 0C09030E mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C090312u, 1);  /* 0C090310 mov.l Rm,@-Rn */
	IF(0x0C090312u); MACL = r12 * r4;  /* 0C090312 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090316u, 3);  /* 0C090314 mov.l Rm,@-Rn */
	r3 = 0xC286578u; UPD(0x0C090318u, 1);  /* 0C090316 mov.l @(disp,pc),Rn */
	IF(0x0C090318u); r2 = MACL;  /* 0C090318 sts macl,Rn */
	IF(0x0C09031Au); r15 -= 4; W32(r15, PR); UPD(0x0C09031Cu, 2);  /* 0C09031A sts.l pr,@-Rn */
	r3 += r2;  /* 0C09031C add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C090320u, 2);  /* 0C09031E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090320 add #imm,Rn */
	IF(0x0C090322u); ARG0(0x420Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C090322 shad Rm,Rn */
	r0 = 0x3u;  /* 0C090324 mov #imm,Rn */
	T = r2 > r0;  /* 0C090326 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090330u, 7); goto L_0C090330; } goto L_0C09032C; }  /* 0C090328 bf/s */
L_0C09032C: BLKS(0x0C09032Cu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C090446u, 4); goto L_0C090446; }  /* 0C09032C bra */
L_0C090330: BLKS(0x0C090330u);
	r5 = r2;  /* 0C090330 mov Rm,Rn */
	r0 = 0xC090344u;  /* 0C090332 mova @(disp,pc),r0 */
	r5 += r5;  /* 0C090334 add Rm,Rn */
	IF(0x0C090336u); r5 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C090338u, 4);  /* 0C090336 mov.w @(r0,Rm),Rn */
	IF(0x0C090338u); { u32 tv_ = (r5 + 0x0C09033Cu); u32 t_ = PHYS(tv_); IF(0x0C09033Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C090350u: goto L_0C090350; case 0x0C0903C0u: goto L_0C0903C0; case 0x0C0904E0u: goto L_0C0904E0; default: JUMPD(tv_); } }  /* 0C090338 braf Rn */
L_0C090350: BLKS(0x0C090350u);
	r8 = 0xC0A9CB0u; UPD(0x0C090352u, 1);  /* 0C090350 mov.l @(disp,pc),Rn */
	r13 = 0xB4u; UPD(0x0C090354u, 1);  /* 0C090352 mov.w @(disp,pc),Rn */
	IF(0x0C090354u); { u32 t_ = r8; PR = 0x0C090358u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C090358u); }  /* 0C090354 jsr @Rn */
L_0C090358: BLKS(0x0C090358u);
	r0 = 0xC0A9B40u; UPD(0x0C09035Au, 1);  /* 0C090358 mov.l @(disp,pc),Rn */
	r11 = 0xC286578u; UPD(0x0C09035Cu, 1);  /* 0C09035A mov.l @(disp,pc),Rn */
	IF(0x0C09035Cu); { u32 t_ = r0; PR = 0x0C090360u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C090360u); }  /* 0C09035C jsr @Rn */
L_0C090360: BLKS(0x0C090360u);
	IF(0x0C090360u); MACL = r12 * r13;  /* 0C090360 mul.l Rm,Rn */
	r10 = 0x86u; UPD(0x0C090364u, 3);  /* 0C090362 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFFFAu;  /* 0C090364 mov #imm,Rn */
	IF(0x0C090366u); r2 = MACL;  /* 0C090366 sts macl,Rn */
	r2 += r11;  /* 0C090368 add Rm,Rn */
	r0 = r2;  /* 0C09036A mov Rm,Rn */
	IF(0x0C09036Cu); r7 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C09036Eu, 5);  /* 0C09036C mov.w @(r0,Rm),Rn */
	r8 = 0x1Fu;  /* 0C09036E mov #imm,Rn */
	IF(0x0C090370u); ARG0(0x479Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C090370 shad Rm,Rn */
	r7 += 0x8u;  /* 0C090372 add #imm,Rn */
	IF(0x0C090374u); r7 >>= 2;  /* 0C090374 shlr2 Rn */
	r0 = 0x8Cu; UPD(0x0C090378u, 5);  /* 0C090376 mov.w @(disp,pc),Rn */
	IF(0x0C090378u); r7 >>= 2;  /* 0C090378 shlr2 Rn */
	r7 &= r8;  /* 0C09037A and Rm,Rn */
	IF(0x0C09037Cu); r6 = R32(r0 + r2); UPD(0x0C09037Eu, 3);  /* 0C09037C mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C09037E tst Rm,Rn */
	{ u32 c_ = T; W32(r2 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0903B0u, 4); goto L_0C0903B0; } UPD(0x0C090384u, 1); goto L_0C090384; }  /* 0C090380 bt/s */
L_0C090384: BLKS(0x0C090384u);
	r2 += 0x50u;  /* 0C090384 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C090388u, 2);  /* 0C090386 mov.w @Rm,Rn */
	IF(0x0C090388u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C090388 shar Rn */
	r0 &= 0xFu;  /* 0C09038A and #imm,r0 */
	r2 += 0xFFFFFFB0u;  /* 0C09038C add #imm,Rn */
	r0 += 0x1u;  /* 0C09038E add #imm,Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C090392u, 5);  /* 0C090390 mov.l Rm,@(disp,Rn) */
L_0C090392: BLKS(0x0C090392u);
	r1 = 0xC0A8B10u; UPD(0x0C090394u, 1);  /* 0C090392 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C090394 mov Rm,Rn */
	UPD(0x0C090396u, 1);
L_0C090396: BLKS(0x0C090396u);
	r14 += 0x8u;  /* 0C090396 add #imm,Rn */
	r15 = r14;  /* 0C090398 mov Rm,Rn */
	IF(0x0C09039Au); PR = R32(r15); r15 += 4; UPD(0x0C09039Cu, 3);  /* 0C09039A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09039Eu, 1);  /* 0C09039C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0903A0u, 1);  /* 0C09039E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0903A2u, 1);  /* 0C0903A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0903A4u, 1);  /* 0C0903A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0903A6u, 1);  /* 0C0903A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0903A8u, 1);  /* 0C0903A6 mov.l @Rm+,Rn */
	IF(0x0C0903A8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C090100u: goto L_0C090100; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C0903A8 jmp @Rn */
L_0C0903B0: BLKS(0x0C0903B0u);
	r3 = 0x0u;  /* 0C0903B0 mov #imm,Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C0903B4u, 2);  /* 0C0903B2 mov.l Rm,@(disp,Rn) */
	r2 += 0x50u;  /* 0C0903B4 add #imm,Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C090392u, 4); goto L_0C090392; }  /* 0C0903B6 bra */
L_0C0903C0: BLKS(0x0C0903C0u);
	r9 = 0xC0A8B50u; UPD(0x0C0903C2u, 1);  /* 0C0903C0 mov.l @(disp,pc),Rn */
	IF(0x0C0903C2u); { u32 t_ = r9; PR = 0x0C0903C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0903C6u); }  /* 0C0903C2 jsr @Rn */
L_0C0903C6: BLKS(0x0C0903C6u);
	IF(0x0C0903C6u); T = (s32)r0 >= 0;  /* 0C0903C6 cmp/pz Rn */
	if (!T) { UPD(0x0C0904A0u, 4); goto L_0C0904A0; }  /* 0C0903C8 bf */
L_0C0903CA: BLKS(0x0C0903CAu);
	r10 = 0xB4u; UPD(0x0C0903CCu, 1);  /* 0C0903CA mov.w @(disp,pc),Rn */
	IF(0x0C0903CCu); MACL = r12 * r10;  /* 0C0903CC mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0903D0u, 3);  /* 0C0903CE mov.l @(disp,pc),Rn */
	IF(0x0C0903D0u); r8 = MACL;  /* 0C0903D0 sts macl,Rn */
	r8 += r4;  /* 0C0903D2 add Rm,Rn */
	IF(0x0C0903D4u); MACL = r0 * r10;  /* 0C0903D4 mul.l Rm,Rn */
	r9 = R32(r8); UPD(0x0C0903D8u, 5);  /* 0C0903D6 mov.l @Rm,Rn */
	r6 = r8;  /* 0C0903D8 mov Rm,Rn */
	r3 = 0xFFFFFEFFu; UPD(0x0C0903DCu, 2);  /* 0C0903DA mov.w @(disp,pc),Rn */
	IF(0x0C0903DCu); r10 = MACL;  /* 0C0903DC sts macl,Rn */
	r7 = 0xA8u; UPD(0x0C0903E0u, 2);  /* 0C0903DE mov.w @(disp,pc),Rn */
	r9 &= r3;  /* 0C0903E0 and Rm,Rn */
	r10 += r4;  /* 0C0903E2 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0903E6u, 3);  /* 0C0903E4 mov.l Rm,@Rn */
	r6 += r7;  /* 0C0903E6 add Rm,Rn */
	r7 += r10;  /* 0C0903E8 add Rm,Rn */
	r5 = R32(r10); UPD(0x0C0903ECu, 3);  /* 0C0903EA mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C0903EC add #imm,Rn */
	r4 = 0x100u; UPD(0x0C0903F0u, 2);  /* 0C0903EE mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0903F0 add #imm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C0903F4u, 2);  /* 0C0903F2 mov.l @(disp,Rm),Rn */
	r5 &= r4;  /* 0C0903F4 and Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0903F8u, 2);  /* 0C0903F6 mov.b @Rm,Rn */
	r5 |= r9;  /* 0C0903F8 or Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C0903FCu, 2);  /* 0C0903FA mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0903FC add #imm,Rn */
	r11 = R32(r10 + 0x28u); UPD(0x0C090400u, 2);  /* 0C0903FE mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C090400 add Rm,Rn */
	W32(r8, r5); UPD(0x0C090404u, 2);  /* 0C090402 mov.l Rm,@Rn */
	T = (r5 & r4) == 0;  /* 0C090404 tst Rm,Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C090408u, 2);  /* 0C090406 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C09040Au, 1);  /* 0C090408 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r6, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090480u, 3); goto L_0C090480; } UPD(0x0C09040Eu, 1); goto L_0C09040E; }  /* 0C09040A bt/s */
L_0C09040E: BLKS(0x0C09040Eu);
	r11 = 0xC069BF0u; UPD(0x0C090410u, 1);  /* 0C09040E mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C090412u, 1);  /* 0C090410 mov.l @(disp,pc),Rn */
	IF(0x0C090412u); { u32 t_ = r11; PR = 0x0C090416u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C090416u); }  /* 0C090412 jsr @Rn */
L_0C090416: BLKS(0x0C090416u);
	r4 = r12;  /* 0C090416 mov Rm,Rn */
	IF(0x0C090418u); { u32 t_ = r9; PR = 0x0C09041Cu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09041Cu); }  /* 0C090418 jsr @Rn */
L_0C09041C: BLKS(0x0C09041Cu);
	r0 = 0x86u; UPD(0x0C09041Eu, 1);  /* 0C09041C mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C09041E mov Rm,Rn */
	IF(0x0C090420u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C090422u, 2);  /* 0C090420 mov.w @(r0,Rm),Rn */
	r5 = R32(r10 + 0xCu); UPD(0x0C090424u, 1);  /* 0C090422 mov.l @(disp,Rm),Rn */
	r0 += 0x8u;  /* 0C090424 add #imm,Rn */
	IF(0x0C090426u); r0 >>= 2;  /* 0C090426 shlr2 Rn */
	IF(0x0C090428u); r0 >>= 2;  /* 0C090428 shlr2 Rn */
	r10 = 0xC0A8B10u; UPD(0x0C09042Cu, 4);  /* 0C09042A mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C09042C and #imm,r0 */
	r13 = 0xC0BC1B0u; UPD(0x0C090430u, 2);  /* 0C09042E mov.l @(disp,pc),Rn */
	r0 |= 0x40u;  /* 0C090430 or #imm,r0 */
	W32(r8 + 0xCu, r5); UPD(0x0C090434u, 2);  /* 0C090432 mov.l Rm,@(disp,Rn) */
	IF(0x0C090434u); { u32 t_ = r10; PR = 0x0C090438u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C090438u); }  /* 0C090434 jsr @Rn */
L_0C090438: BLKS(0x0C090438u);
	r4 = r12;  /* 0C090438 mov Rm,Rn */
	r5 = 0x28u;  /* 0C09043A mov #imm,Rn */
	IF(0x0C09043Cu); { u32 t_ = r13; PR = 0x0C090440u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C090440u); }  /* 0C09043C jsr @Rn */
L_0C090440: BLKS(0x0C090440u);
	T = (r0 & r0) == 0;  /* 0C090440 tst Rm,Rn */
	if (!T) { UPD(0x0C090460u, 4); goto L_0C090460; }  /* 0C090442 bf */
L_0C090444: BLKS(0x0C090444u);
	r14 += 0x8u;  /* 0C090444 add #imm,Rn */
	UPD(0x0C090446u, 1);
L_0C090446: BLKS(0x0C090446u);
	r15 = r14;  /* 0C090446 mov Rm,Rn */
	IF(0x0C090448u); PR = R32(r15); r15 += 4; UPD(0x0C09044Au, 2);  /* 0C090448 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09044Cu, 1);  /* 0C09044A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09044Eu, 1);  /* 0C09044C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090450u, 1);  /* 0C09044E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090452u, 1);  /* 0C090450 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090454u, 1);  /* 0C090452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090456u, 1);  /* 0C090454 mov.l @Rm+,Rn */
	IF(0x0C090456u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C090456 rts */
L_0C090460: BLKS(0x0C090460u);
	r2 = R32(r8 + 0x8u); UPD(0x0C090462u, 1);  /* 0C090460 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C090462 mov #imm,Rn */
	r2 += 0x20u;  /* 0C090464 add #imm,Rn */
	r4 = r12;  /* 0C090466 mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C09046Au, 4);  /* 0C090468 mov.l Rm,@(disp,Rn) */
	r12 = 0x1u;  /* 0C09046A mov #imm,Rn */
	IF(0x0C09046Cu); { u32 t_ = r10; PR = 0x0C090470u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C090470u); }  /* 0C09046C jsr @Rn */
L_0C090470: BLKS(0x0C090470u);
	r0 = 0x88u; UPD(0x0C090472u, 1);  /* 0C090470 mov.w @(disp,pc),Rn */
	{ IF(0x0C090474u); W16(r0 + r8, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C090444u, 3); goto L_0C090444; }  /* 0C090472 bra */
L_0C090480: BLKS(0x0C090480u);
	r11 = 0xC0690D0u; UPD(0x0C090482u, 1);  /* 0C090480 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C090482 mov Rm,Rn */
	IF(0x0C090484u); { u32 t_ = r11; PR = 0x0C090488u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0690D0, 0x0C0690D0u, 0x0C090488u); }  /* 0C090484 jsr @Rn */
L_0C090488: BLKS(0x0C090488u);
	r0 = 0x86u; UPD(0x0C09048Au, 1);  /* 0C090488 mov.w @(disp,pc),Rn */
	IF(0x0C09048Au); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09048Cu, 1);  /* 0C09048A mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C09048C add #imm,Rn */
	IF(0x0C09048Eu); r0 >>= 2;  /* 0C09048E shlr2 Rn */
	IF(0x0C090490u); r0 >>= 2;  /* 0C090490 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C090492 and #imm,r0 */
	r0 |= 0x40u;  /* 0C090494 or #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C090498u, 6);  /* 0C090496 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0xCu); UPD(0x0C09049Au, 1);  /* 0C090498 mov.l @(disp,Rm),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090392u, 3); goto L_0C090392; }  /* 0C09049A bra */
L_0C0904A0: BLKS(0x0C0904A0u);
	r1 = 0xC090100u; UPD(0x0C0904A2u, 1);  /* 0C0904A0 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C090396u, 3); goto L_0C090396; }  /* 0C0904A2 bra */
L_0C0904E0: BLKS(0x0C0904E0u);
	r8 = 0xC0A8B50u; UPD(0x0C0904E2u, 1);  /* 0C0904E0 mov.l @(disp,pc),Rn */
	IF(0x0C0904E2u); { u32 t_ = r8; PR = 0x0C0904E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0904E6u); }  /* 0C0904E2 jsr @Rn */
L_0C0904E6: BLKS(0x0C0904E6u);
	IF(0x0C0904E6u); T = (s32)r0 >= 0;  /* 0C0904E6 cmp/pz Rn */
	if (!T) { UPD(0x0C0904A0u, 4); goto L_0C0904A0; }  /* 0C0904E8 bf */
L_0C0904EA: BLKS(0x0C0904EAu);
	r9 = 0xB4u; UPD(0x0C0904ECu, 1);  /* 0C0904EA mov.w @(disp,pc),Rn */
	IF(0x0C0904ECu); MACL = r12 * r9;  /* 0C0904EC mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0904F0u, 3);  /* 0C0904EE mov.l @(disp,pc),Rn */
	IF(0x0C0904F0u); r8 = MACL;  /* 0C0904F0 sts macl,Rn */
	r8 += r11;  /* 0C0904F2 add Rm,Rn */
	r13 = R32(r8); UPD(0x0C0904F6u, 3);  /* 0C0904F4 mov.l @Rm,Rn */
	IF(0x0C0904F6u); MACL = r0 * r9;  /* 0C0904F6 mul.l Rm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C0904FAu, 3);  /* 0C0904F8 mov.w @(disp,pc),Rn */
	r13 &= r6;  /* 0C0904FA and Rm,Rn */
	W32(r8, r13); UPD(0x0C0904FEu, 2);  /* 0C0904FC mov.l Rm,@Rn */
	IF(0x0C0904FEu); r4 = MACL;  /* 0C0904FE sts macl,Rn */
	r4 += r11;  /* 0C090500 add Rm,Rn */
	r5 = R32(r4); UPD(0x0C090504u, 3);  /* 0C090502 mov.l @Rm,Rn */
	r9 += 0x4Cu;  /* 0C090504 add #imm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C090508u, 2);  /* 0C090506 mov.l @(disp,Rm),Rn */
	r5 &= r9;  /* 0C090508 and Rm,Rn */
	r10 = R32(r4 + 0x28u); UPD(0x0C09050Cu, 2);  /* 0C09050A mov.l @(disp,Rm),Rn */
	r13 |= r5;  /* 0C09050C or Rm,Rn */
	r3 = 0xA8u; UPD(0x0C090510u, 2);  /* 0C09050E mov.w @(disp,pc),Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C090512u, 1);  /* 0C090510 mov.l Rm,@(disp,Rn) */
	r4 += r3;  /* 0C090512 add Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C090516u, 2);  /* 0C090514 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C090516 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C09051Au, 2);  /* 0C090518 mov.b @Rm,Rn */
	r10 = r8;  /* 0C09051A mov Rm,Rn */
	r0 += r1;  /* 0C09051C add Rm,Rn */
	r10 += r3;  /* 0C09051E add Rm,Rn */
	r10 += 0x1u;  /* 0C090520 add #imm,Rn */
	r7 += 0x1u;  /* 0C090522 add #imm,Rn */
	r1 = R32(r8 + 0xCu); UPD(0x0C090526u, 6);  /* 0C090524 mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C090528u, 1);  /* 0C090526 mov.l Rm,@Rn */
	T = (r1 & r1) == 0;  /* 0C090528 tst Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09052Cu, 2);  /* 0C09052A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r10, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090534u, 3); goto L_0C090534; } UPD(0x0C090530u, 1); goto L_0C090530; }  /* 0C09052C bf/s */
L_0C090530: BLKS(0x0C090530u);
	{ IF(0x0C090532u); ; /* slot nop */ UPD(0x0C090660u, 3); goto L_0C090660; }  /* 0C090530 bra */
L_0C090534: BLKS(0x0C090534u);
	r0 = r1;  /* 0C090534 mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C090536 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C090570u, 5); goto L_0C090570; }  /* 0C090538 bt */
L_0C09053A: BLKS(0x0C09053Au);
	r3 = 0xB4u; UPD(0x0C09053Cu, 1);  /* 0C09053A mov.w @(disp,pc),Rn */
	IF(0x0C09053Cu); MACL = r12 * r3;  /* 0C09053C mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C090540u, 3);  /* 0C09053E mov.l @(disp,pc),Rn */
	IF(0x0C090540u); r3 = MACL;  /* 0C090540 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C090544u, 2);  /* 0C090542 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C090544 add Rm,Rn */
	r2 += r3;  /* 0C090546 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C09054Au, 3);  /* 0C090548 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09054A add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C09054C extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09054E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0905A4u, 6); goto L_0C0905A4; } UPD(0x0C090554u, 1); goto L_0C090554; }  /* 0C090550 bf/s */
L_0C090554: BLKS(0x0C090554u);
	r0 = 0x88u; UPD(0x0C090556u, 1);  /* 0C090554 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C090556 mov #imm,Rn */
	IF(0x0C090558u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09055Au, 2);  /* 0C090558 mov.w @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C09055Cu, 1);  /* 0C09055A mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C09055C add Rm,Rn */
	W8(r2, r13); UPD(0x0C090560u, 2);  /* 0C09055E mov.b Rm,@Rn */
	W32(r3 + 0xCu, r0); UPD(0x0C090562u, 1);  /* 0C090560 mov.l Rm,@(disp,Rn) */
L_0C090562: BLKS(0x0C090562u);
	r1 = 0xC0A8AE0u; UPD(0x0C090564u, 1);  /* 0C090562 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C090396u, 3); goto L_0C090396; }  /* 0C090564 bra */
L_0C090570: BLKS(0x0C090570u);
	r9 = 0xC0BC1B0u; UPD(0x0C090572u, 1);  /* 0C090570 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C090572 mov Rm,Rn */
	r5 = 0xAu;  /* 0C090574 mov #imm,Rn */
	IF(0x0C090576u); { u32 t_ = r9; PR = 0x0C09057Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09057Au); }  /* 0C090576 jsr @Rn */
L_0C09057A: BLKS(0x0C09057Au);
	T = (r0 & r0) == 0;  /* 0C09057A tst Rm,Rn */
	if (T) { UPD(0x0C0905A4u, 4); goto L_0C0905A4; }  /* 0C09057C bt */
L_0C09057E: BLKS(0x0C09057Eu);
	r11 = 0xA0u; UPD(0x0C090580u, 1);  /* 0C09057E mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C090580 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C090584u, 2);  /* 0C090582 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C090584 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C090586 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0905B0u, 5); goto L_0C0905B0; } goto L_0C09058C; }  /* 0C090588 bt/s */
L_0C09058C: BLKS(0x0C09058Cu);
	if (!T) { UPD(0x0C0905A4u, 4); goto L_0C0905A4; }  /* 0C09058C bf */
L_0C09058E: BLKS(0x0C09058Eu);
	r2 = R32(r8 + 0xCu); UPD(0x0C090590u, 1);  /* 0C09058E mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C090590 mov Rm,Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C090594u, 2);  /* 0C090592 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C090594 add #imm,Rn */
	IF(0x0C090596u); { u32 t_ = r9; PR = 0x0C09059Au; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09059Au); }  /* 0C090596 jsr @Rn */
L_0C09059A: BLKS(0x0C09059Au);
	r0 = 0x88u; UPD(0x0C09059Cu, 1);  /* 0C09059A mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09059C mov #imm,Rn */
	r6 = 0x0u;  /* 0C09059E mov #imm,Rn */
	IF(0x0C0905A0u); W16(r0 + r8, r4); UPD(0x0C0905A2u, 3);  /* 0C0905A0 mov.w Rm,@(r0,Rn) */
	W8(r11, r6); UPD(0x0C0905A4u, 1);  /* 0C0905A2 mov.b Rm,@Rn */
L_0C0905A4: BLKS(0x0C0905A4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C090446u, 3); goto L_0C090446; }  /* 0C0905A4 bra */
L_0C0905B0: BLKS(0x0C0905B0u);
	r6 = R32(r8 + 0x8u); UPD(0x0C0905B2u, 1);  /* 0C0905B0 mov.l @(disp,Rm),Rn */
	r11 = 0xC0BBF10u; UPD(0x0C0905B4u, 1);  /* 0C0905B2 mov.l @(disp,pc),Rn */
	IF(0x0C0905B4u); r6 <<= 2;  /* 0C0905B4 shll2 Rn */
	r6 += r6;  /* 0C0905B6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0905BAu, 3);  /* 0C0905B8 mov.b @Rm,Rn */
	r13 = r6 & 0xFF;  /* 0C0905BA extu.b Rm,Rn */
	r6 = r7 & 0xFF;  /* 0C0905BC extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0905C0u, 3);  /* 0C0905BE mov.l @(disp,Rm),Rn */
	r13 += r13;  /* 0C0905C0 add Rm,Rn */
	IF(0x0C0905C2u); { u32 t_ = r11; PR = 0x0C0905C6u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0905C6u); }  /* 0C0905C2 jsr @Rn */
L_0C0905C6: BLKS(0x0C0905C6u);
	T = (r0 & r0) == 0;  /* 0C0905C6 tst Rm,Rn */
	if (T) { UPD(0x0C090646u, 4); goto L_0C090646; }  /* 0C0905C8 bt */
L_0C0905CA: BLKS(0x0C0905CAu);
	r2 = 0x0u;  /* 0C0905CA mov #imm,Rn */
	W32(r14, r2); UPD(0x0C0905CEu, 2);  /* 0C0905CC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C0905D0u, 1);  /* 0C0905CE mov.l Rm,@(disp,Rn) */
L_0C0905D0: BLKS(0x0C0905D0u);
	r0 = R32(r14); UPD(0x0C0905D2u, 1);  /* 0C0905D0 mov.l @Rm,Rn */
	r5 = 0xC1B5654u; UPD(0x0C0905D4u, 1);  /* 0C0905D2 mov.l @(disp,pc),Rn */
	IF(0x0C0905D4u); r0 <<= 2;  /* 0C0905D4 shll2 Rn */
	r3 = 0xC069B20u; UPD(0x0C0905D8u, 2);  /* 0C0905D6 mov.l @(disp,pc),Rn */
	IF(0x0C0905D8u); r11 = R32(r0 + r5); UPD(0x0C0905DAu, 1);  /* 0C0905D8 mov.l @(r0,Rm),Rn */
	r10 = 0xC069AF0u; UPD(0x0C0905DCu, 1);  /* 0C0905DA mov.l @(disp,pc),Rn */
	r5 = 0x280000u; UPD(0x0C0905DEu, 1);  /* 0C0905DC mov.l @(disp,pc),Rn */
	IF(0x0C0905DEu); { u32 t_ = r3; PR = 0x0C0905E2u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0905E2u); }  /* 0C0905DE jsr @Rn */
L_0C0905E2: BLKS(0x0C0905E2u);
	r5 = r11;  /* 0C0905E2 mov Rm,Rn */
	r9 = r0;  /* 0C0905E4 mov Rm,Rn */
	IF(0x0C0905E6u); { u32 t_ = r10; PR = 0x0C0905EAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0905EAu); }  /* 0C0905E6 jsr @Rn */
L_0C0905EA: BLKS(0x0C0905EAu);
	r2 = 0x66666667u; UPD(0x0C0905ECu, 1);  /* 0C0905EA mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C0905EC sub Rm,Rn */
	IF(0x0C0905EEu); r9 <<= 2;  /* 0C0905EE shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0905F0 dmuls.l Rm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C0905F4u, 5);  /* 0C0905F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0905F4u); r4 = MACH;  /* 0C0905F4 sts mach,Rn */
	IF(0x0C0905F6u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0905F6 shar Rn */
	IF(0x0C0905F8u); T = r9 >> 31; r9 <<= 1;  /* 0C0905F8 shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C0905FA subc Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C0905FEu, 5);  /* 0C0905FC mov.l @(disp,Rm),Rn */
	r4 -= r9;  /* 0C0905FE sub Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C090602u, 2);  /* 0C090600 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C090602 add Rm,Rn */
	r6 = 0xA0000u; UPD(0x0C090606u, 2);  /* 0C090604 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C090606 mov Rm,Rn */
	r5 = 0x280000u; UPD(0x0C09060Au, 2);  /* 0C090608 mov.l @(disp,pc),Rn */
	IF(0x0C09060Au); { u32 t_ = r7; PR = 0x0C09060Eu; r10 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09060Eu); }  /* 0C09060A jsr @Rn */
L_0C09060E: BLKS(0x0C09060Eu);
	r1 = R32(r14 + 0x4u); UPD(0x0C090610u, 1);  /* 0C09060E mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C090610 mov Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C090614u, 2);  /* 0C090612 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C090614 mov Rm,Rn */
	r9 = R32(r1 + 0x28u); UPD(0x0C090618u, 2);  /* 0C090616 mov.l @(disp,Rm),Rn */
	IF(0x0C090618u); { u32 t_ = r11; PR = 0x0C09061Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09061Cu); }  /* 0C090618 jsr @Rn */
L_0C09061C: BLKS(0x0C09061Cu);
	r9 += r0;  /* 0C09061C add Rm,Rn */
	r5 = 0x28000u; UPD(0x0C090620u, 2);  /* 0C09061E mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C090620 mov Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090622 add #imm,Rn */
	r9 = 0xC0BA610u; UPD(0x0C090626u, 3);  /* 0C090624 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C090626 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C09062Au, 2);  /* 0C090628 mov.l Rm,@Rn */
	r7 = r13;  /* 0C09062A mov Rm,Rn */
	r0 = 0xC189CA8u; UPD(0x0C09062Eu, 2);  /* 0C09062C mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C09062E mov Rm,Rn */
	IF(0x0C090630u); { u32 t_ = r9; PR = 0x0C090634u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA610, 0x0C0BA610u, 0x0C090634u); }  /* 0C090630 jsr @Rn */
L_0C090634: BLKS(0x0C090634u);
	r3 = R32(r14); UPD(0x0C090636u, 1);  /* 0C090634 mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C090636 mov #imm,Rn */
	r3 += 0x1u;  /* 0C090638 add #imm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C09063A exts.w Rm,Rn */
	W32(r14, r10); UPD(0x0C09063Eu, 4);  /* 0C09063C mov.l Rm,@Rn */
	r8 = R32(r14); UPD(0x0C090640u, 1);  /* 0C09063E mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r4;  /* 0C090640 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0905D0u, 4); goto L_0C0905D0; } UPD(0x0C090646u, 1); goto L_0C090646; }  /* 0C090642 bf/s */
L_0C090646: BLKS(0x0C090646u);
	r7 = 0xB4u; UPD(0x0C090648u, 1);  /* 0C090646 mov.w @(disp,pc),Rn */
	IF(0x0C090648u); MACL = r12 * r7;  /* 0C090648 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09064Cu, 3);  /* 0C09064A mov.l @(disp,pc),Rn */
	IF(0x0C09064Cu); r12 = MACL;  /* 0C09064C sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C090650u, 2);  /* 0C09064E mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C090650 add Rm,Rn */
	r12 += r0;  /* 0C090652 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C090656u, 3);  /* 0C090654 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C090656 add #imm,Rn */
	W8(r12, r13); UPD(0x0C09065Au, 2);  /* 0C090658 mov.b Rm,@Rn */
L_0C09065A: BLKS(0x0C09065Au);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C090446u, 3); goto L_0C090446; }  /* 0C09065A bra */
L_0C090660: BLKS(0x0C090660u);
	r2 = 0x99u; UPD(0x0C090662u, 1);  /* 0C090660 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C090662 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C090666u, 2);  /* 0C090664 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C090666 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C090668 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09066A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09065Au, 6); goto L_0C09065A; } UPD(0x0C090670u, 1); goto L_0C090670; }  /* 0C09066C bf/s */
L_0C090670: BLKS(0x0C090670u);
	W8(r2, r1); UPD(0x0C090672u, 1);  /* 0C090670 mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C090674u, 1);  /* 0C090672 mov.w @(disp,pc),Rn */
	IF(0x0C090674u); r2 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C090676u, 1);  /* 0C090674 mov.w @(r0,Rm),Rn */
	IF(0x0C090676u); T = (s32)r2 >= 0;  /* 0C090676 cmp/pz Rn */
	if (!T) { UPD(0x0C090680u, 4); goto L_0C090680; }  /* 0C090678 bf */
L_0C09067A: BLKS(0x0C09067Au);
	r4 = 0x1u;  /* 0C09067A mov #imm,Rn */
	{ W32(r8 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090562u, 4); goto L_0C090562; }  /* 0C09067C bra */
L_0C090680: BLKS(0x0C090680u);
	r12 = R32(r8 + 0x8u); UPD(0x0C090682u, 1);  /* 0C090680 mov.l @(disp,Rm),Rn */
	r12 += 0xFFFFFFE0u;  /* 0C090682 add #imm,Rn */
	{ W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C090444u, 4); goto L_0C090444; }  /* 0C090684 bra */
}

void blk_f_0C0906D0(sh3_t *c)
{
	LOCALS;
L_0C0906D0: BLKS(0x0C0906D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0906D2u, 1);  /* 0C0906D0 mov.l Rm,@-Rn */
	r3 = r4;  /* 0C0906D2 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0906D6u, 2);  /* 0C0906D4 mov.l Rm,@-Rn */
	r2 = 0x3u;  /* 0C0906D6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0906DAu, 2);  /* 0C0906D8 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0906DA mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0906DEu, 2);  /* 0C0906DC mov.l Rm,@-Rn */
	IF(0x0C0906DEu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0906DE shld Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0906E2u, 2);  /* 0C0906E0 mov.l Rm,@-Rn */
	r1 = 0x42u;  /* 0C0906E2 mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0906E6u, 2);  /* 0C0906E4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0906E8u, 1);  /* 0C0906E6 mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0906E8 mov Rm,Rn */
	IF(0x0C0906EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0906ECu, 2);  /* 0C0906EA sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0906EC add #imm,Rn */
	r14 = r15;  /* 0C0906EE mov Rm,Rn */
	r4 = 0xC1B5C44u; UPD(0x0C0906F2u, 3);  /* 0C0906F0 mov.l @(disp,pc),Rn */
	r9 = 0xC069510u; UPD(0x0C0906F4u, 1);  /* 0C0906F2 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C0906F4 add Rm,Rn */
	W32(r14, r5); UPD(0x0C0906F8u, 2);  /* 0C0906F6 mov.l Rm,@Rn */
	r4 = 0x42u;  /* 0C0906F8 mov #imm,Rn */
	r0 = 0xC2460ACu; UPD(0x0C0906FCu, 2);  /* 0C0906FA mov.l @(disp,pc),Rn */
	r11 = R32(r3); UPD(0x0C0906FEu, 1);  /* 0C0906FC mov.l @Rm,Rn */
	r10 = R32(r3 + 0x4u); UPD(0x0C090700u, 1);  /* 0C0906FE mov.l @(disp,Rm),Rn */
	r5 = 0x8000u; UPD(0x0C090702u, 1);  /* 0C090700 mov.l @(disp,pc),Rn */
	IF(0x0C090702u); { u32 t_ = r9; PR = 0x0C090706u; W16(r0, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C090706u); }  /* 0C090702 jsr @Rn */
L_0C090706: BLKS(0x0C090706u);
	T = (r0 & r0) == 0;  /* 0C090706 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C090730u, 4); goto L_0C090730; } UPD(0x0C09070Cu, 1); goto L_0C09070C; }  /* 0C090708 bf/s */
L_0C09070C: BLKS(0x0C09070Cu);
	r14 += 0xCu;  /* 0C09070C add #imm,Rn */
	r15 = r14;  /* 0C09070E mov Rm,Rn */
	IF(0x0C090710u); PR = R32(r15); r15 += 4; UPD(0x0C090712u, 3);  /* 0C090710 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090714u, 1);  /* 0C090712 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090716u, 1);  /* 0C090714 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090718u, 1);  /* 0C090716 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09071Au, 1);  /* 0C090718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09071Cu, 1);  /* 0C09071A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09071Eu, 1);  /* 0C09071C mov.l @Rm+,Rn */
	IF(0x0C09071Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09071E rts */
L_0C090730: BLKS(0x0C090730u);
	r9 = 0xC071740u; UPD(0x0C090732u, 1);  /* 0C090730 mov.l @(disp,pc),Rn */
	IF(0x0C090732u); { u32 t_ = r9; PR = 0x0C090736u; r4 = (u32)(s32)(s16)r11; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C090736u); }  /* 0C090732 jsr @Rn */
L_0C090736: BLKS(0x0C090736u);
	T = (r0 & r0) == 0;  /* 0C090736 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09070Cu, 4); goto L_0C09070C; } goto L_0C09073C; }  /* 0C090738 bt/s */
L_0C09073C: BLKS(0x0C09073Cu);
	r12 = 0x0u;  /* 0C09073C mov #imm,Rn */
	T = (s32)r12 >= (s32)r11;  /* 0C09073E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0907D2u, 6); goto L_0C0907D2; }  /* 0C090740 bt */
L_0C090742: BLKS(0x0C090742u);
	r6 = 0u - r8;  /* 0C090742 neg Rm,Rn */
	r5 = 0xC28EDFCu; UPD(0x0C090746u, 2);  /* 0C090744 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C090748u, 1);  /* 0C090746 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r5); UPD(0x0C09074Au, 1);  /* 0C090748 mov.l Rm,@(disp,Rn) */
	IF(0x0C09074Au); ;  /* 0C09074A nop */
	UPD(0x0C09074Cu, 1);
L_0C09074C: BLKS(0x0C09074Cu);
	r1 = R32(r14 + 0x8u); UPD(0x0C09074Eu, 1);  /* 0C09074C mov.l @(disp,Rm),Rn */
	r8 = 0xB4u; UPD(0x0C090750u, 1);  /* 0C09074E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C090752u, 1);  /* 0C090750 mov.w @Rm+,Rn */
	IF(0x0C090752u); MACL = r9 * r8;  /* 0C090752 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C090756u, 3);  /* 0C090754 mov.l @(disp,pc),Rn */
	IF(0x0C090756u); r8 = MACL;  /* 0C090756 sts macl,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C09075Au, 2);  /* 0C090758 mov.w @Rm,Rn */
	r8 += r0;  /* 0C09075A add Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C09075Eu, 2);  /* 0C09075C mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C09075E add Rm,Rn */
	IF(0x0C090760u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C090762u, 2);  /* 0C090760 mov.w @(r0,Rm),Rn */
	r8 += 0x7Cu;  /* 0C090762 add #imm,Rn */
	W16(r8, r3); UPD(0x0C090766u, 2);  /* 0C090764 mov.w Rm,@Rn */
	r4 = 0x0u;  /* 0C090766 mov #imm,Rn */
	r6 = 0xC2460ACu; UPD(0x0C09076Au, 2);  /* 0C090768 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C09076A add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C09076Eu, 2);  /* 0C09076C mov.w @Rm,Rn */
	r7 = 0xC0000000u; UPD(0x0C090770u, 1);  /* 0C09076E mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C090770 extu.w Rm,Rn */
	W32(r8, r7); UPD(0x0C090774u, 2);  /* 0C090772 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C090776u, 1);  /* 0C090774 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x4u); UPD(0x0C090778u, 1);  /* 0C090776 mov.l @(disp,Rm),Rn */
	r3 = 0xC0A8A30u; UPD(0x0C09077Au, 1);  /* 0C090778 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09077Cu, 1);  /* 0C09077A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r1); UPD(0x0C09077Eu, 1);  /* 0C09077C mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C09077E mov Rm,Rn */
	IF(0x0C090780u); { u32 t_ = r3; PR = 0x0C090784u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C090784u); }  /* 0C090780 jsr @Rn */
L_0C090784: BLKS(0x0C090784u);
	r7 = R32(r14); UPD(0x0C090786u, 1);  /* 0C090784 mov.l @Rm,Rn */
	r8 += 0x5Cu;  /* 0C090786 add #imm,Rn */
	W32(r8, r7); UPD(0x0C09078Au, 2);  /* 0C090788 mov.l Rm,@Rn */
	r4 = r9;  /* 0C09078A mov Rm,Rn */
	r8 += 0xFFFFFFA4u;  /* 0C09078C add #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C090790u, 3);  /* 0C09078E mov.l Rm,@(disp,Rn) */
	r8 += 0x60u;  /* 0C090790 add #imm,Rn */
	W32(r8, r13); UPD(0x0C090794u, 2);  /* 0C090792 mov.l Rm,@Rn */
	r8 += 0xFFFFFFA0u;  /* 0C090794 add #imm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C090798u, 2);  /* 0C090796 mov.l Rm,@(disp,Rn) */
	r6 = R32(r10 + 0x8u); UPD(0x0C09079Au, 1);  /* 0C090798 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C09079Cu, 1);  /* 0C09079A mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0xCu); UPD(0x0C09079Eu, 1);  /* 0C09079C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C0907A0u, 1);  /* 0C09079E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A9AE0u; UPD(0x0C0907A2u, 1);  /* 0C0907A0 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0907A2 add #imm,Rn */
	r2 = R32(r10 + 0x10u); UPD(0x0C0907A6u, 2);  /* 0C0907A4 mov.l @(disp,Rm),Rn */
	r10 += 0x14u;  /* 0C0907A6 add #imm,Rn */
	IF(0x0C0907A8u); { u32 t_ = r0; PR = 0x0C0907ACu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0907ACu); }  /* 0C0907A8 jsr @Rn */
L_0C0907AC: BLKS(0x0C0907ACu);
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0907AEu, 1);  /* 0C0907AC mov.b @Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0907AE add #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0907B2u, 2);  /* 0C0907B0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0907B2 mov Rm,Rn */
	r4 += 0x4u;  /* 0C0907B4 add #imm,Rn */
	IF(0x0C0907B6u); W8(r0 + r3, r4); UPD(0x0C0907B8u, 3);  /* 0C0907B6 mov.b Rm,@(r0,Rn) */
	r8 = 0x7u;  /* 0C0907B8 mov #imm,Rn */
	r3 += 0x4u;  /* 0C0907BA add #imm,Rn */
	IF(0x0C0907BCu); W8(r0 + r3, r4); UPD(0x0C0907BEu, 3);  /* 0C0907BC mov.b Rm,@(r0,Rn) */
	r7 = r12;  /* 0C0907BE mov Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0907C2u, 2);  /* 0C0907C0 mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C0907C2 add #imm,Rn */
	IF(0x0C0907C4u); ARG0(0x418Du); { s32 s_ = (s32)r8; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0907C4 shld Rm,Rn */
	r8 += 0x7Fu;  /* 0C0907C6 add #imm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0907C8 exts.w Rm,Rn */
	IF(0x0C0907CAu); W16(r0 + r8, r1); UPD(0x0C0907CCu, 5);  /* 0C0907CA mov.w Rm,@(r0,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0907CC cmp/ge Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09074Cu, 4); goto L_0C09074C; } UPD(0x0C0907D2u, 1); goto L_0C0907D2; }  /* 0C0907CE bf/s */
L_0C0907D2: BLKS(0x0C0907D2u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09070Cu, 3); goto L_0C09070C; }  /* 0C0907D2 bra */
}

void blk_f_0C090810(sh3_t *c)
{
	LOCALS;
L_0C090810: BLKS(0x0C090810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090812u, 1);  /* 0C090810 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090814u, 1);  /* 0C090812 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C090814 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090818u, 2);  /* 0C090816 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C09081Au, 1);  /* 0C090818 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09081Cu, 1);  /* 0C09081A mov.l Rm,@-Rn */
	IF(0x0C09081Cu); MACL = r8 * r5;  /* 0C09081C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090820u, 3);  /* 0C09081E mov.l Rm,@-Rn */
	r4 = 0xC286578u; UPD(0x0C090822u, 1);  /* 0C090820 mov.l @(disp,pc),Rn */
	IF(0x0C090822u); r0 = MACL;  /* 0C090822 sts macl,Rn */
	r3 = 0x86u; UPD(0x0C090826u, 2);  /* 0C090824 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C090826 add Rm,Rn */
	IF(0x0C090828u); r15 -= 4; W32(r15, PR); UPD(0x0C09082Au, 2);  /* 0C090828 sts.l pr,@-Rn */
	r3 += r0;  /* 0C09082A add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C09082Eu, 2);  /* 0C09082C mov.w @Rm,Rn */
	r2 += 0x8u;  /* 0C09082E add #imm,Rn */
	W16(r3, r2); UPD(0x0C090832u, 2);  /* 0C090830 mov.w Rm,@Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C090834u, 1);  /* 0C090832 mov.l @(disp,Rm),Rn */
	r0 = 0x17u;  /* 0C090834 mov #imm,Rn */
	T = r2 > r0;  /* 0C090836 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0908A0u, 5); goto L_0C0908A0; } goto L_0C09083C; }  /* 0C090838 bt/s */
L_0C09083C: BLKS(0x0C09083Cu);
	r0 = 0xC090850u;  /* 0C09083C mova @(disp,pc),r0 */
	IF(0x0C09083Eu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C090840u, 3);  /* 0C09083E mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C090840 extu.b Rm,Rn */
	IF(0x0C090842u); { u32 tv_ = (r6 + 0x0C090846u); u32 t_ = PHYS(tv_); IF(0x0C090844u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C090870u: goto L_0C090870; case 0x0C0908A0u: goto L_0C0908A0; case 0x0C0908C0u: goto L_0C0908C0; default: JUMPD(tv_); } }  /* 0C090842 braf Rn */
L_0C090870: BLKS(0x0C090870u);
	r0 = 0xB4u; UPD(0x0C090872u, 1);  /* 0C090870 mov.w @(disp,pc),Rn */
	IF(0x0C090872u); MACL = r8 * r0;  /* 0C090872 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C090876u, 3);  /* 0C090874 mov.l @(disp,pc),Rn */
	IF(0x0C090876u); r8 = MACL;  /* 0C090876 sts macl,Rn */
	r8 += r11;  /* 0C090878 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C09087Cu, 3);  /* 0C09087A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C09087C mov Rm,Rn */
	r10 = 0x86u; UPD(0x0C090880u, 2);  /* 0C09087E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C090880 mov Rm,Rn */
	r7 += 0x50u;  /* 0C090882 add #imm,Rn */
	IF(0x0C090884u); r4 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C090886u, 3);  /* 0C090884 mov.w @(r0,Rm),Rn */
	IF(0x0C090886u); { u32 t_ = r9; PR = 0x0C09088Au; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09088Au); }  /* 0C090886 jsr @Rn */
L_0C09088A: BLKS(0x0C09088Au);
	IF(0x0C09088Au); T = (s32)r0 >= 0;  /* 0C09088A cmp/pz Rn */
	if (!T) { UPD(0x0C0908B0u, 4); goto L_0C0908B0; }  /* 0C09088C bf */
L_0C09088E: BLKS(0x0C09088Eu);
	r8 += 0x5Cu;  /* 0C09088E add #imm,Rn */
	r3 = R32(r8); UPD(0x0C090892u, 2);  /* 0C090890 mov.l @Rm,Rn */
	r8 += 0xFFFFFFA4u;  /* 0C090892 add #imm,Rn */
	r3 += r0;  /* 0C090894 add Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C090898u, 3);  /* 0C090896 mov.l Rm,@(disp,Rn) */
	r8 += 0x60u;  /* 0C090898 add #imm,Rn */
	r1 = R32(r8); UPD(0x0C09089Cu, 2);  /* 0C09089A mov.l @Rm,Rn */
	r8 += 0xFFFFFFA0u;  /* 0C09089C add #imm,Rn */
	UPD(0x0C09089Eu, 1);
L_0C09089E: BLKS(0x0C09089Eu);
	W32(r8 + 0x28u, r1); UPD(0x0C0908A0u, 1);  /* 0C09089E mov.l Rm,@(disp,Rn) */
L_0C0908A0: BLKS(0x0C0908A0u);
	r15 = r14;  /* 0C0908A0 mov Rm,Rn */
	IF(0x0C0908A2u); PR = R32(r15); r15 += 4; UPD(0x0C0908A4u, 2);  /* 0C0908A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0908A6u, 1);  /* 0C0908A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0908A8u, 1);  /* 0C0908A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0908AAu, 1);  /* 0C0908A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0908ACu, 1);  /* 0C0908AA mov.l @Rm+,Rn */
	IF(0x0C0908ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0908AC rts */
L_0C0908B0: BLKS(0x0C0908B0u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C09088Eu, 3); goto L_0C09088E; }  /* 0C0908B0 bra */
L_0C0908C0: BLKS(0x0C0908C0u);
	r9 = 0xC0A8B50u; UPD(0x0C0908C2u, 1);  /* 0C0908C0 mov.l @(disp,pc),Rn */
	IF(0x0C0908C2u); { u32 t_ = r9; PR = 0x0C0908C6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0908C6u); }  /* 0C0908C2 jsr @Rn */
L_0C0908C6: BLKS(0x0C0908C6u);
	IF(0x0C0908C6u); T = (s32)r0 >= 0;  /* 0C0908C6 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090920u, 4); goto L_0C090920; } goto L_0C0908CC; }  /* 0C0908C8 bf/s */
L_0C0908CC: BLKS(0x0C0908CCu);
	r10 = 0xB4u; UPD(0x0C0908CEu, 2);  /* 0C0908CC mov.w @(disp,pc),Rn */
	IF(0x0C0908CEu); MACL = r8 * r10;  /* 0C0908CE mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0908D2u, 3);  /* 0C0908D0 mov.l @(disp,pc),Rn */
	IF(0x0C0908D2u); r8 = MACL;  /* 0C0908D2 sts macl,Rn */
	r8 += r11;  /* 0C0908D4 add Rm,Rn */
	r5 = 0x86u; UPD(0x0C0908D8u, 3);  /* 0C0908D6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0908D8 mov Rm,Rn */
	IF(0x0C0908DAu); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C0908DCu, 2);  /* 0C0908DA mov.w @(r0,Rm),Rn */
	r6 = r8;  /* 0C0908DC mov Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C0908E0u, 2);  /* 0C0908DE mov.l @(disp,pc),Rn */
	r6 += 0x50u;  /* 0C0908E0 add #imm,Rn */
	IF(0x0C0908E2u); { u32 t_ = r0; PR = 0x0C0908E6u; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0908E6u); }  /* 0C0908E2 jsr @Rn */
L_0C0908E6: BLKS(0x0C0908E6u);
	IF(0x0C0908E6u); T = (s32)r0 >= 0;  /* 0C0908E6 cmp/pz Rn */
	if (!T) { UPD(0x0C090910u, 4); goto L_0C090910; }  /* 0C0908E8 bf */
L_0C0908EA: BLKS(0x0C0908EAu);
	IF(0x0C0908EAu); MACL = r9 * r10;  /* 0C0908EA mul.l Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C0908EEu, 3);  /* 0C0908EC mov.l @(disp,Rm),Rn */
	IF(0x0C0908EEu); r10 = MACL;  /* 0C0908EE sts macl,Rn */
	r10 += r11;  /* 0C0908F0 add Rm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0908F4u, 3);  /* 0C0908F2 mov.l @(disp,Rm),Rn */
	r11 += r1;  /* 0C0908F4 add Rm,Rn */
	r11 += r0;  /* 0C0908F6 add Rm,Rn */
	r1 = R32(r10 + 0x28u); UPD(0x0C0908FAu, 3);  /* 0C0908F8 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x30u); UPD(0x0C0908FCu, 1);  /* 0C0908FA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C0908FEu, 1);  /* 0C0908FC mov.l Rm,@(disp,Rn) */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C09089Eu, 3); goto L_0C09089E; }  /* 0C0908FE bra */
L_0C090910: BLKS(0x0C090910u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0908EAu, 3); goto L_0C0908EA; }  /* 0C090910 bra */
L_0C090920: BLKS(0x0C090920u);
	r4 = 0xB4u; UPD(0x0C090922u, 1);  /* 0C090920 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C090922 mov #imm,Rn */
	IF(0x0C090924u); MACL = r8 * r4;  /* 0C090924 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C090928u, 4);  /* 0C090926 mov.l @(disp,pc),Rn */
	IF(0x0C090928u); r0 = MACL;  /* 0C090928 sts macl,Rn */
	{ IF(0x0C09092Cu); W32(r0 + r8, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0908A0u, 4); goto L_0C0908A0; }  /* 0C09092A bra */
}

void blk_f_0C090940(sh3_t *c)
{
	LOCALS;
L_0C090940: BLKS(0x0C090940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090942u, 1);  /* 0C090940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090944u, 1);  /* 0C090942 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090946u, 1);  /* 0C090944 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C090948u, 1);  /* 0C090946 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09094Au, 1);  /* 0C090948 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09094Cu, 1);  /* 0C09094A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09094Eu, 1);  /* 0C09094C mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C090950u, 1);  /* 0C09094E mov.l @(disp,pc),Rn */
	IF(0x0C090950u); r15 -= 4; W32(r15, PR); UPD(0x0C090952u, 1);  /* 0C090950 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C090954u, 1);  /* 0C090952 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C090954 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C090958u, 2);  /* 0C090956 mov.w @Rm,Rn */
	r14 = r15;  /* 0C090958 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09095Cu, 2);  /* 0C09095A mov.l @(disp,pc),Rn */
	IF(0x0C09095Cu); { u32 t_ = r8; PR = 0x0C090960u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C090960u); }  /* 0C09095C jsr @Rn */
L_0C090960: BLKS(0x0C090960u);
	T = (r0 & r0) == 0;  /* 0C090960 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C090980u, 4); goto L_0C090980; } UPD(0x0C090966u, 1); goto L_0C090966; }  /* 0C090962 bf/s */
L_0C090966: BLKS(0x0C090966u);
	r14 += 0x14u;  /* 0C090966 add #imm,Rn */
	r15 = r14;  /* 0C090968 mov Rm,Rn */
	IF(0x0C09096Au); PR = R32(r15); r15 += 4; UPD(0x0C09096Cu, 3);  /* 0C09096A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09096Eu, 1);  /* 0C09096C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090970u, 1);  /* 0C09096E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090972u, 1);  /* 0C090970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090974u, 1);  /* 0C090972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090976u, 1);  /* 0C090974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090978u, 1);  /* 0C090976 mov.l @Rm+,Rn */
	IF(0x0C090978u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C090978 rts */
L_0C090980: BLKS(0x0C090980u);
	r8 = 0xC071740u; UPD(0x0C090982u, 1);  /* 0C090980 mov.l @(disp,pc),Rn */
	IF(0x0C090982u); { u32 t_ = r8; PR = 0x0C090986u; r4 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C090986u); }  /* 0C090982 jsr @Rn */
L_0C090986: BLKS(0x0C090986u);
	T = (r0 & r0) == 0;  /* 0C090986 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C090966u, 4); goto L_0C090966; } goto L_0C09098C; }  /* 0C090988 bt/s */
L_0C09098C: BLKS(0x0C09098Cu);
	r13 = 0xC28EDFCu; UPD(0x0C09098Eu, 2);  /* 0C09098C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C090990u, 1);  /* 0C09098E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C090992u, 1);  /* 0C090990 mov.w @Rm+,Rn */
	IF(0x0C090992u); MACL = r12 * r8;  /* 0C090992 mul.l Rm,Rn */
	W32(r14, r12); UPD(0x0C090996u, 3);  /* 0C090994 mov.l Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C090998u, 1);  /* 0C090996 mov.w @Rm,Rn */
	IF(0x0C090998u); r12 = MACL;  /* 0C090998 sts macl,Rn */
	r1 = 0xC286578u; UPD(0x0C09099Cu, 2);  /* 0C09099A mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFFFF;  /* 0C09099C extu.w Rm,Rn */
	r10 = 0xC0008000u; UPD(0x0C0909A0u, 2);  /* 0C09099E mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C0909A0 add Rm,Rn */
	r6 = 0xC2B03A2u; UPD(0x0C0909A4u, 2);  /* 0C0909A2 mov.l @(disp,pc),Rn */
	r2 = 0xC0A8A30u; UPD(0x0C0909A6u, 1);  /* 0C0909A4 mov.l @(disp,pc),Rn */
	W32(r12, r10); UPD(0x0C0909A8u, 1);  /* 0C0909A6 mov.l Rm,@Rn */
	r11 = 0x86u; UPD(0x0C0909AAu, 1);  /* 0C0909A8 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0909AA mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0909AEu, 2);  /* 0C0909AC mov.w @Rm,Rn */
	r11 += r12;  /* 0C0909AE add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0909B2u, 2);  /* 0C0909B0 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0909B4u, 1);  /* 0C0909B2 mov.l @Rm,Rn */
	W16(r11, r5); UPD(0x0C0909B6u, 1);  /* 0C0909B4 mov.w Rm,@Rn */
	W32(r12 + 0x4u, r7); UPD(0x0C0909B8u, 1);  /* 0C0909B6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0909B8u); W16(r0 + r12, r5); UPD(0x0C0909BAu, 1);  /* 0C0909B8 mov.w Rm,@(r0,Rn) */
	W32(r12 + 0xCu, r10); UPD(0x0C0909BCu, 1);  /* 0C0909BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0909BCu); { u32 t_ = r2; PR = 0x0C0909C0u; W32(r12 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0909C0u); }  /* 0C0909BC jsr @Rn */
L_0C0909C0: BLKS(0x0C0909C0u);
	r4 = 0xFFC00000u; UPD(0x0C0909C2u, 1);  /* 0C0909C0 mov.l @(disp,pc),Rn */
	r9 = 0xC0722E0u; UPD(0x0C0909C4u, 1);  /* 0C0909C2 mov.l @(disp,pc),Rn */
	W32(r12 + 0x24u, r4); UPD(0x0C0909C6u, 1);  /* 0C0909C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0909C6u); { u32 t_ = r9; PR = 0x0C0909CAu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0909CAu); }  /* 0C0909C6 jsr @Rn */
L_0C0909CA: BLKS(0x0C0909CAu);
	r3 = 0xC0A9AE0u; UPD(0x0C0909CCu, 1);  /* 0C0909CA mov.l @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C0909CC mov #imm,Rn */
	IF(0x0C0909CEu); { u32 t_ = r3; PR = 0x0C0909D2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0909D2u); }  /* 0C0909CE jsr @Rn */
L_0C0909D2: BLKS(0x0C0909D2u);
	r5 = 0xA0u; UPD(0x0C0909D4u, 1);  /* 0C0909D2 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0909D4 mov #imm,Rn */
	r5 += r12;  /* 0C0909D6 add Rm,Rn */
	r5 += 0x3u;  /* 0C0909D8 add #imm,Rn */
	W8(r5, r6); UPD(0x0C0909DCu, 4);  /* 0C0909DA mov.b Rm,@Rn */
	r3 = r12;  /* 0C0909DC mov Rm,Rn */
	r0 = 0xACu; UPD(0x0C0909E0u, 2);  /* 0C0909DE mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C0909E0 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C0909E4u, 2);  /* 0C0909E2 mov.w @(disp,pc),Rn */
	r4 += r0;  /* 0C0909E4 add Rm,Rn */
	{ u32 v_ = r6; r5 -= 1; W8(r5, v_); } UPD(0x0C0909E8u, 2);  /* 0C0909E6 mov.b Rm,@-Rn */
	r3 += r8;  /* 0C0909E8 add Rm,Rn */
	r3 += 0x1u;  /* 0C0909EA add #imm,Rn */
	r4 += 0x1u;  /* 0C0909EC add #imm,Rn */
	W8(r4, r9); UPD(0x0C0909F0u, 4);  /* 0C0909EE mov.b Rm,@Rn */
	r1 = 0x0u;  /* 0C0909F0 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C0909F4u, 2);  /* 0C0909F2 mov.b Rm,@Rn */
	{ u32 v_ = r6; r5 -= 1; W8(r5, v_); } UPD(0x0C0909F6u, 1);  /* 0C0909F4 mov.b Rm,@-Rn */
	r0 = 0x8Cu; UPD(0x0C0909F8u, 1);  /* 0C0909F6 mov.w @(disp,pc),Rn */
	r7 = 0x8000u; UPD(0x0C0909FAu, 1);  /* 0C0909F8 mov.l @(disp,pc),Rn */
	r2 = 0x202020u; UPD(0x0C0909FCu, 1);  /* 0C0909FA mov.l @(disp,pc),Rn */
	W16(r11, r10); UPD(0x0C0909FEu, 1);  /* 0C0909FC mov.w Rm,@Rn */
	IF(0x0C0909FEu); W32(r0 + r12, r7); UPD(0x0C090A00u, 1);  /* 0C0909FE mov.l Rm,@(r0,Rn) */
	r11 = r12;  /* 0C090A00 mov Rm,Rn */
	W32(r12 + 0x38u, r2); UPD(0x0C090A04u, 2);  /* 0C090A02 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r1); UPD(0x0C090A06u, 1);  /* 0C090A04 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r1); UPD(0x0C090A08u, 1);  /* 0C090A06 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C090A0Au, 1);  /* 0C090A08 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r4); UPD(0x0C090A0Cu, 1);  /* 0C090A0A mov.l Rm,@(disp,Rn) */
L_0C090A0C: BLKS(0x0C090A0Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C090A0Eu, 1);  /* 0C090A0C mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C090A10u, 1);  /* 0C090A0E mov.w @(disp,pc),Rn */
	IF(0x0C090A10u); MACL = r10 * r8;  /* 0C090A10 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C090A14u, 3);  /* 0C090A12 mov.l @(disp,pc),Rn */
	IF(0x0C090A14u); r8 = MACL;  /* 0C090A14 sts macl,Rn */
	r8 += r9;  /* 0C090A16 add Rm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C090A1Au, 3);  /* 0C090A18 mov.l @(disp,Rm),Rn */
	r8 += 0x7Cu;  /* 0C090A1A add #imm,Rn */
	r9 = 0xC1B71C0u; UPD(0x0C090A1Eu, 2);  /* 0C090A1C mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C090A1E add Rm,Rn */
	r9 += 0x4u;  /* 0C090A20 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C090A24u, 3);  /* 0C090A22 mov.w @Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C090A26u, 1);  /* 0C090A24 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C090A26 add Rm,Rn */
	IF(0x0C090A28u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C090A2Au, 2);  /* 0C090A28 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C090A2A add #imm,Rn */
	W16(r8, r6); UPD(0x0C090A2Eu, 2);  /* 0C090A2C mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C090A2E mov #imm,Rn */
	IF(0x0C090A30u); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C090A32u, 2);  /* 0C090A30 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C090A32 add #imm,Rn */
	W16(r8, r2); UPD(0x0C090A36u, 2);  /* 0C090A34 mov.w Rm,@Rn */
	r12 = R32(r9 + 0x8u); UPD(0x0C090A38u, 1);  /* 0C090A36 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C090A38 add #imm,Rn */
	r4 = 0xC2460ACu; UPD(0x0C090A3Cu, 2);  /* 0C090A3A mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r12); UPD(0x0C090A3Eu, 1);  /* 0C090A3C mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C090A40u, 1);  /* 0C090A3E mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C090A40 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C090A44u, 2);  /* 0C090A42 mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFFFF;  /* 0C090A44 extu.w Rm,Rn */
	r5 = R32(r9); UPD(0x0C090A48u, 2);  /* 0C090A46 mov.l @Rm,Rn */
	r4 = r10;  /* 0C090A48 mov Rm,Rn */
	W32(r8, r5); UPD(0x0C090A4Cu, 2);  /* 0C090A4A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C090A4Eu, 1);  /* 0C090A4C mov.l Rm,@(disp,Rn) */
	IF(0x0C090A4Eu); { u32 t_ = r7; PR = 0x0C090A52u; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C090A52u); }  /* 0C090A4E jsr @Rn */
L_0C090A52: BLKS(0x0C090A52u);
	r6 = 0xC2B03A2u; UPD(0x0C090A54u, 1);  /* 0C090A52 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C090A54 mov Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C090A58u, 2);  /* 0C090A56 mov.w @Rm,Rn */
	IF(0x0C090A58u); r2 >>= 2;  /* 0C090A58 shlr2 Rn */
	r5 = 0x86u; UPD(0x0C090A5Cu, 2);  /* 0C090A5A mov.w @(disp,pc),Rn */
	IF(0x0C090A5Cu); r2 >>= 2;  /* 0C090A5C shlr2 Rn */
	IF(0x0C090A5Eu); r2 >>= 2;  /* 0C090A5E shlr2 Rn */
	IF(0x0C090A60u); W16(r0 + r5, r2); UPD(0x0C090A62u, 3);  /* 0C090A60 mov.w Rm,@(r0,Rn) */
	r4 = R32(r11 + 0x24u); UPD(0x0C090A64u, 1);  /* 0C090A62 mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C090A66u, 1);  /* 0C090A64 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C090A68u, 1);  /* 0C090A66 mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C090A6Au, 1);  /* 0C090A68 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C090A6Cu, 1);  /* 0C090A6A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C090A6Eu, 1);  /* 0C090A6C mov.l Rm,@(disp,Rn) */
	r9 += 0x14u;  /* 0C090A6E add #imm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C090A72u, 2);  /* 0C090A70 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C090A72 mov Rm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C090A76u, 2);  /* 0C090A74 mov.l Rm,@(disp,Rn) */
	IF(0x0C090A76u); { u32 t_ = r6; PR = 0x0C090A7Au; W32(r8 + 0x30u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C090A7Au); }  /* 0C090A76 jsr @Rn */
L_0C090A7A: BLKS(0x0C090A7Au);
	r0 = 0xB0u; UPD(0x0C090A7Cu, 1);  /* 0C090A7A mov.w @(disp,pc),Rn */
	IF(0x0C090A7Cu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C090A7Eu, 1);  /* 0C090A7C mov.b @(r0,Rm),Rn */
	IF(0x0C090A7Eu); W8(r0 + r8, r10); UPD(0x0C090A80u, 1);  /* 0C090A7E mov.b Rm,@(r0,Rn) */
	r10 = 0xACu; UPD(0x0C090A82u, 1);  /* 0C090A80 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r2 = v_; } UPD(0x0C090A84u, 1);  /* 0C090A82 mov.b @Rm+,Rn */
	r10 += r8;  /* 0C090A84 add Rm,Rn */
	r10 += 0x3u;  /* 0C090A86 add #imm,Rn */
	W8(r10, r2); UPD(0x0C090A8Au, 3);  /* 0C090A88 mov.b Rm,@Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C090A8Cu, 1);  /* 0C090A8A mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFFEu;  /* 0C090A8C add #imm,Rn */
	r0 = 0xA8u; UPD(0x0C090A90u, 2);  /* 0C090A8E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C090A92u, 1);  /* 0C090A90 mov.b @Rm,Rn */
	r0 += r8;  /* 0C090A92 add Rm,Rn */
	r4 += r2;  /* 0C090A94 add Rm,Rn */
	r0 += 0x1u;  /* 0C090A96 add #imm,Rn */
	W8(r0, r4); UPD(0x0C090A9Au, 4);  /* 0C090A98 mov.b Rm,@Rn */
	r3 = 0xA1u; UPD(0x0C090A9Cu, 1);  /* 0C090A9A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C090A9C mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C090AA0u, 2);  /* 0C090A9E mov.b @Rm,Rn */
	IF(0x0C090AA0u); W8(r0 + r3, r1); UPD(0x0C090AA2u, 1);  /* 0C090AA0 mov.b Rm,@(r0,Rn) */
	r7 = R32(r14 + 0xCu); UPD(0x0C090AA4u, 1);  /* 0C090AA2 mov.l @(disp,Rm),Rn */
	r3 = 0x25u;  /* 0C090AA4 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C090AA8u, 2);  /* 0C090AA6 mov.b @Rm,Rn */
	W8(r10, r6); UPD(0x0C090AAAu, 1);  /* 0C090AA8 mov.b Rm,@Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C090AACu, 1);  /* 0C090AAA mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C090AAC add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C090AAE exts.w Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C090AB2u, 3);  /* 0C090AB0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C090AB4u, 1);  /* 0C090AB2 mov.l Rm,@(disp,Rn) */
	r2 += 0x18u;  /* 0C090AB4 add #imm,Rn */
	r5 = R32(r11 + 0x38u); UPD(0x0C090AB8u, 2);  /* 0C090AB6 mov.l @(disp,Rm),Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C090ABAu, 1);  /* 0C090AB8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C090ABCu, 1);  /* 0C090ABA mov.l Rm,@(disp,Rn) */
	T = (s32)r9 > (s32)r3;  /* 0C090ABC cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090A0Cu, 4); goto L_0C090A0C; } UPD(0x0C090AC2u, 1); goto L_0C090AC2; }  /* 0C090ABE bf/s */
L_0C090AC2: BLKS(0x0C090AC2u);
	r11 = 0xC3C4164u; UPD(0x0C090AC4u, 1);  /* 0C090AC2 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C090AC4 mov #imm,Rn */
	r13 = 0xC3C4165u; UPD(0x0C090AC8u, 2);  /* 0C090AC6 mov.l @(disp,pc),Rn */
	W8(r11, r12); UPD(0x0C090ACAu, 1);  /* 0C090AC8 mov.b Rm,@Rn */
	{ W8(r13, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C090966u, 3); goto L_0C090966; }  /* 0C090ACA bra */
}

void blk_f_0C090B20(sh3_t *c)
{
	LOCALS;
L_0C090B20: BLKS(0x0C090B20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090B22u, 1);  /* 0C090B20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090B24u, 1);  /* 0C090B22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090B26u, 1);  /* 0C090B24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C090B28u, 1);  /* 0C090B26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C090B2Au, 1);  /* 0C090B28 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C090B2Cu, 1);  /* 0C090B2A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C090B2C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C090B30u, 2);  /* 0C090B2E mov.l Rm,@-Rn */
	IF(0x0C090B30u); MACL = r12 * r3;  /* 0C090B30 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090B34u, 3);  /* 0C090B32 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C090B36u, 1);  /* 0C090B34 mov.l @(disp,pc),Rn */
	IF(0x0C090B36u); r2 = MACL;  /* 0C090B36 sts macl,Rn */
	IF(0x0C090B38u); r15 -= 4; W32(r15, PR); UPD(0x0C090B3Au, 2);  /* 0C090B38 sts.l pr,@-Rn */
	r0 += r2;  /* 0C090B3A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C090B3Eu, 2);  /* 0C090B3C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C090B3E add #imm,Rn */
	r0 = 0x21u;  /* 0C090B40 mov #imm,Rn */
	T = r2 > r0;  /* 0C090B42 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090BA8u, 6); goto L_0C090BA8; } goto L_0C090B48; }  /* 0C090B44 bt/s */
L_0C090B48: BLKS(0x0C090B48u);
	r0 = 0xC090B58u;  /* 0C090B48 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C090B4A add Rm,Rn */
	IF(0x0C090B4Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C090B4Eu, 4);  /* 0C090B4C mov.w @(r0,Rm),Rn */
	IF(0x0C090B4Eu); { u32 tv_ = (r4 + 0x0C090B52u); u32 t_ = PHYS(tv_); IF(0x0C090B50u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090B4E braf Rn */
L_0C090BA8: BLKS(0x0C090BA8u);
	r6 = 0xB4u; UPD(0x0C090BAAu, 1);  /* 0C090BA8 mov.w @(disp,pc),Rn */
	IF(0x0C090BAAu); MACL = r12 * r6;  /* 0C090BAA mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C090BAEu, 3);  /* 0C090BAC mov.l @(disp,pc),Rn */
	IF(0x0C090BAEu); r4 = MACL;  /* 0C090BAE sts macl,Rn */
	r4 += r7;  /* 0C090BB0 add Rm,Rn */
	r12 = R32(r4); UPD(0x0C090BB4u, 3);  /* 0C090BB2 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C090BB4 tst Rm,Rn */
	if (!T) { UPD(0x0C090BC2u, 4); goto L_0C090BC2; }  /* 0C090BB6 bf */
L_0C090BB8: BLKS(0x0C090BB8u);
	r4 += 0x40u;  /* 0C090BB8 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C090BBCu, 2);  /* 0C090BBA mov.l @Rm,Rn */
	r5 = 0xC34Fu; UPD(0x0C090BBEu, 1);  /* 0C090BBC mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C090BBE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C090BE0u, 4); goto L_0C090BE0; }  /* 0C090BC0 bf */
L_0C090BC2: BLKS(0x0C090BC2u);
	r14 += 0x4u;  /* 0C090BC2 add #imm,Rn */
	r15 = r14;  /* 0C090BC4 mov Rm,Rn */
	IF(0x0C090BC6u); PR = R32(r15); r15 += 4; UPD(0x0C090BC8u, 3);  /* 0C090BC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090BCAu, 1);  /* 0C090BC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090BCCu, 1);  /* 0C090BCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090BCEu, 1);  /* 0C090BCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090BD0u, 1);  /* 0C090BCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090BD2u, 1);  /* 0C090BD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090BD4u, 1);  /* 0C090BD2 mov.l @Rm+,Rn */
	IF(0x0C090BD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C090BD4 rts */
L_0C090BE0: BLKS(0x0C090BE0u);
	r9 = 0x4u;  /* 0C090BE0 mov #imm,Rn */
	IF(0x0C090BE2u); ARG0(0x449Du); { s32 s_ = (s32)r9; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C090BE2 shld Rm,Rn */
	r11 = 0x40000u; UPD(0x0C090BE6u, 3);  /* 0C090BE4 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C090BE6 add #imm,Rn */
	r0 = 0xC071C90u; UPD(0x0C090BEAu, 2);  /* 0C090BE8 mov.l @(disp,pc),Rn */
	r4 += r11;  /* 0C090BEA add Rm,Rn */
	r15 = r14;  /* 0C090BEC mov Rm,Rn */
	IF(0x0C090BEEu); PR = R32(r15); r15 += 4; UPD(0x0C090BF0u, 3);  /* 0C090BEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090BF2u, 1);  /* 0C090BF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090BF4u, 1);  /* 0C090BF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090BF6u, 1);  /* 0C090BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090BF8u, 1);  /* 0C090BF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090BFAu, 1);  /* 0C090BF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090BFCu, 1);  /* 0C090BFA mov.l @Rm+,Rn */
	IF(0x0C090BFCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C090BFC jmp @Rn */
}

/* FUN_0c091110 */
void blk_f_0C091110(sh3_t *c)
{
	LOCALS;
L_0C091110: BLKS(0x0C091110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C091112u, 1);  /* 0C091110 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C091114u, 1);  /* 0C091112 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C091116u, 1);  /* 0C091114 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C091118u, 1);  /* 0C091116 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C091118 exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09111Cu, 2);  /* 0C09111A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09111Eu, 1);  /* 0C09111C mov.l Rm,@-Rn */
	IF(0x0C09111Eu); MACL = r10 * r2;  /* 0C09111E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C091122u, 3);  /* 0C091120 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C091124u, 1);  /* 0C091122 mov.l @(disp,pc),Rn */
	IF(0x0C091124u); r3 = MACL;  /* 0C091124 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C091128u, 2);  /* 0C091126 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C091128 add Rm,Rn */
	IF(0x0C09112Au); r15 -= 4; W32(r15, PR); UPD(0x0C09112Cu, 2);  /* 0C09112A sts.l pr,@-Rn */
	r7 = r3;  /* 0C09112C mov Rm,Rn */
	r7 += 0x50u;  /* 0C09112E add #imm,Rn */
	r0 = R32(r7); UPD(0x0C091132u, 3);  /* 0C091130 mov.l @Rm,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C091132 add #imm,Rn */
	r6 = 0x9Fu; UPD(0x0C091136u, 2);  /* 0C091134 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C091136 add #imm,Rn */
	r6 += r3;  /* 0C091138 add Rm,Rn */
	W32(r7, r0); UPD(0x0C09113Cu, 3);  /* 0C09113A mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09113Eu, 1);  /* 0C09113C mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C09113E extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C091140 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09114Au, 5); goto L_0C09114A; } goto L_0C091146; }  /* 0C091142 bf/s */
L_0C091146: BLKS(0x0C091146u);
	{ r4 = 0xFu; /* slot mov #imm,Rn */ UPD(0x0C091620u, 4); goto L_0C091620; }  /* 0C091146 bra */
L_0C09114A: BLKS(0x0C09114Au);
	r4 = 0x1u;  /* 0C09114A mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C09114C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C091156u, 5); goto L_0C091156; } goto L_0C091152; }  /* 0C09114E bf/s */
L_0C091152: BLKS(0x0C091152u);
	{ IF(0x0C091154u); ; /* slot nop */ UPD(0x0C091300u, 4); goto L_0C091300; }  /* 0C091152 bra */
L_0C091156: BLKS(0x0C091156u);
	T = (r0 & r0) == 0;  /* 0C091156 tst Rm,Rn */
	if (T) { UPD(0x0C091190u, 4); goto L_0C091190; }  /* 0C091158 bt */
L_0C09115A: BLKS(0x0C09115Au);
	r4 = 0xB4u; UPD(0x0C09115Cu, 1);  /* 0C09115A mov.w @(disp,pc),Rn */
	IF(0x0C09115Cu); MACL = r10 * r4;  /* 0C09115C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C091160u, 3);  /* 0C09115E mov.l @(disp,pc),Rn */
	IF(0x0C091160u); r2 = MACL;  /* 0C091160 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C091164u, 2);  /* 0C091162 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C091164 add Rm,Rn */
	r2 += r0;  /* 0C091166 add Rm,Rn */
	UPD(0x0C091168u, 2);
L_0C091168: BLKS(0x0C091168u);
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09116Au, 1);  /* 0C091168 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09116A add #imm,Rn */
	W8(r2, r7); UPD(0x0C09116Eu, 2);  /* 0C09116C mov.b Rm,@Rn */
L_0C09116E: BLKS(0x0C09116Eu);
	r14 += 0x18u;  /* 0C09116E add #imm,Rn */
	UPD(0x0C091170u, 1);
L_0C091170: BLKS(0x0C091170u);
	r15 = r14;  /* 0C091170 mov Rm,Rn */
	IF(0x0C091172u); PR = R32(r15); r15 += 4; UPD(0x0C091174u, 2);  /* 0C091172 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C091176u, 1);  /* 0C091174 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C091178u, 1);  /* 0C091176 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09117Au, 1);  /* 0C091178 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09117Cu, 1);  /* 0C09117A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09117Eu, 1);  /* 0C09117C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C091180u, 1);  /* 0C09117E mov.l @Rm+,Rn */
	IF(0x0C091180u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C091180 rts */
L_0C091190: BLKS(0x0C091190u);
	r8 = 0xA0u; UPD(0x0C091192u, 1);  /* 0C091190 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C091192 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C091196u, 2);  /* 0C091194 mov.b @Rm,Rn */
	r0 = r9 & 0xFF;  /* 0C091196 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C091198 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0911E0u, 5); goto L_0C0911E0; } goto L_0C09119E; }  /* 0C09119A bt/s */
L_0C09119E: BLKS(0x0C09119Eu);
	if (!T) { UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C09119E bf */
L_0C0911A0: BLKS(0x0C0911A0u);
	r0 = 0x8Cu; UPD(0x0C0911A2u, 1);  /* 0C0911A0 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFE00u; UPD(0x0C0911A4u, 1);  /* 0C0911A2 mov.w @(disp,pc),Rn */
	IF(0x0C0911A4u); r4 = R32(r0 + r3); UPD(0x0C0911A6u, 1);  /* 0C0911A4 mov.l @(r0,Rm),Rn */
	r4 += r9;  /* 0C0911A6 add Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0911A8 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0911ACu); W32(r0 + r3, r4); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09116Eu, 5); goto L_0C09116E; } UPD(0x0C0911AEu, 1); goto L_0C0911AE; }  /* 0C0911AA bf/s */
L_0C0911AE: BLKS(0x0C0911AEu);
	r13 = R32(r3); UPD(0x0C0911B0u, 1);  /* 0C0911AE mov.l @Rm,Rn */
	r0 = 0x13000100u; UPD(0x0C0911B2u, 1);  /* 0C0911B0 mov.l @(disp,pc),Rn */
	r13 |= r0;  /* 0C0911B2 or Rm,Rn */
	W32(r3, r13); UPD(0x0C0911B6u, 2);  /* 0C0911B4 mov.l Rm,@Rn */
	r3 = r5;  /* 0C0911B6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0911B8 add #imm,Rn */
	W32(r7, r4); UPD(0x0C0911BCu, 3);  /* 0C0911BA mov.l Rm,@Rn */
	W8(r6, r3); UPD(0x0C0911BEu, 1);  /* 0C0911BC mov.b Rm,@Rn */
	W8(r8, r4); UPD(0x0C0911C0u, 1);  /* 0C0911BE mov.b Rm,@Rn */
	r2 = 0xC207530u; UPD(0x0C0911C2u, 1);  /* 0C0911C0 mov.l @(disp,pc),Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C09116Eu, 3); goto L_0C09116E; }  /* 0C0911C2 bra */
L_0C0911E0: BLKS(0x0C0911E0u);
	r2 = R32(r3 + 0x24u); UPD(0x0C0911E2u, 1);  /* 0C0911E0 mov.l @(disp,Rm),Rn */
	r5 = 0x600000u; UPD(0x0C0911E4u, 1);  /* 0C0911E2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0911E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 = (r2 >> 16) | (r2 << 16); /* slot swap.w Rm,Rn */ if (c_) { UPD(0x0C09120Au, 4); goto L_0C09120A; } goto L_0C0911EA; }  /* 0C0911E6 bf/s */
L_0C0911EA: BLKS(0x0C0911EAu);
	r7 = 0xA9u; UPD(0x0C0911ECu, 2);  /* 0C0911EA mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r11;  /* 0C0911EC exts.w Rm,Rn */
	r6 = 0x12u;  /* 0C0911EE mov #imm,Rn */
	IF(0x0C0911F0u); MACL = r8 * r6;  /* 0C0911F0 mul.l Rm,Rn */
	r7 += r3;  /* 0C0911F2 add Rm,Rn */
	r3 = 0xFFFFF940u; UPD(0x0C0911F6u, 6);  /* 0C0911F4 mov.w @(disp,pc),Rn */
	IF(0x0C0911F6u); r2 = MACL;  /* 0C0911F6 sts macl,Rn */
	r2 += r3;  /* 0C0911F8 add Rm,Rn */
	IF(0x0C0911FAu); T = (s32)r2 >= 0;  /* 0C0911FA cmp/pz Rn */
	if (T) { UPD(0x0C091204u, 6); goto L_0C091204; }  /* 0C0911FC bt */
L_0C0911FE: BLKS(0x0C0911FEu);
	r2 += 0x7Fu;  /* 0C0911FE add #imm,Rn */
	{ r12 = 0xFFFFFFF9u; /* slot mov #imm,Rn */ UPD(0x0C091206u, 4); goto L_0C091206; }  /* 0C091200 bra */
L_0C091204: BLKS(0x0C091204u);
	r12 = 0xFFFFFFF9u;  /* 0C091204 mov #imm,Rn */
	UPD(0x0C091206u, 1);
L_0C091206: BLKS(0x0C091206u);
	IF(0x0C091206u); ARG0(0x42CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C091206 shad Rm,Rn */
	W8(r7, r2); UPD(0x0C09120Au, 2);  /* 0C091208 mov.b Rm,@Rn */
L_0C09120A: BLKS(0x0C09120Au);
	r13 = 0xB4u; UPD(0x0C09120Cu, 1);  /* 0C09120A mov.w @(disp,pc),Rn */
	r8 = 0x12u;  /* 0C09120C mov #imm,Rn */
	IF(0x0C09120Eu); MACL = r10 * r13;  /* 0C09120E mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C091212u, 4);  /* 0C091210 mov.l @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C091212 mov #imm,Rn */
	IF(0x0C091214u); r13 = MACL;  /* 0C091214 sts macl,Rn */
	r9 = 0xA9u; UPD(0x0C091218u, 3);  /* 0C091216 mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C091218 add Rm,Rn */
	r9 += r11;  /* 0C09121A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09121Eu, 3);  /* 0C09121C mov.b @Rm,Rn */
	r10 = r0 & 0xFF;  /* 0C09121E extu.b Rm,Rn */
	r8 -= r10;  /* 0C091220 sub Rm,Rn */
	T = r8 > r7;  /* 0C091222 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C091228u, 6); goto L_0C091228; }  /* 0C091224 bf */
L_0C091226: BLKS(0x0C091226u);
	r8 = 0x8u;  /* 0C091226 mov #imm,Rn */
	UPD(0x0C091228u, 1);
L_0C091228: BLKS(0x0C091228u);
	r12 = 0xC062780u; UPD(0x0C09122Au, 1);  /* 0C091228 mov.l @(disp,pc),Rn */
	r10 = 0xC1B75ACu; UPD(0x0C09122Cu, 1);  /* 0C09122A mov.l @(disp,pc),Rn */
	IF(0x0C09122Cu); { u32 t_ = r12; PR = 0x0C091230u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091230u); }  /* 0C09122C jsr @Rn */
L_0C091230: BLKS(0x0C091230u);
	r8 += r0;  /* 0C091230 add Rm,Rn */
	IF(0x0C091232u); r8 <<= 2;  /* 0C091232 shll2 Rn */
	r0 = r8;  /* 0C091234 mov Rm,Rn */
	IF(0x0C091236u); r7 = R32(r0 + r10); UPD(0x0C091238u, 4);  /* 0C091236 mov.l @(r0,Rm),Rn */
	W32(r14, r7); UPD(0x0C09123Au, 1);  /* 0C091238 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C09123Cu, 1);  /* 0C09123A mov.b @Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C09123C extu.b Rm,Rn */
	IF(0x0C09123Eu); r3 <<= 8;  /* 0C09123E shll8 Rn */
	r5 = 0x38E38E39u; UPD(0x0C091242u, 3);  /* 0C091240 mov.l @(disp,pc),Rn */
	IF(0x0C091242u); T = r3 & 1; r3 >>= 1;  /* 0C091242 shlr Rn */
	{ s64 r_ = (s64)(s32)r3 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C091244 dmuls.l Rm,Rn */
	r10 = 0xFFA00000u; UPD(0x0C091248u, 4);  /* 0C091246 mov.l @(disp,pc),Rn */
	IF(0x0C091248u); r2 = MACH;  /* 0C091248 sts mach,Rn */
	IF(0x0C09124Au); r2 >>= 2;  /* 0C09124A shlr2 Rn */
	r1 = r2 & 0xFF;  /* 0C09124C extu.b Rm,Rn */
	r4 = r1;  /* 0C09124E mov Rm,Rn */
	r9 = r1;  /* 0C091250 mov Rm,Rn */
	IF(0x0C091252u); r4 <<= 16;  /* 0C091252 shll16 Rn */
	IF(0x0C091254u); r9 <<= 8;  /* 0C091254 shll8 Rn */
	r4 |= r9;  /* 0C091256 or Rm,Rn */
	r4 |= r1;  /* 0C091258 or Rm,Rn */
	W32(r11 + 0x38u, r4); UPD(0x0C09125Cu, 10);  /* 0C09125A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r13); UPD(0x0C09125Eu, 1);  /* 0C09125C mov.l Rm,@(disp,Rn) */
	IF(0x0C09125Eu); ;  /* 0C09125E nop */
	UPD(0x0C091260u, 1);
L_0C091260: BLKS(0x0C091260u);
	IF(0x0C091260u); { u32 t_ = r12; PR = 0x0C091264u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091264u); }  /* 0C091260 jsr @Rn */
L_0C091264: BLKS(0x0C091264u);
	r9 = R32(r11 + 0x24u); UPD(0x0C091266u, 1);  /* 0C091264 mov.l @(disp,Rm),Rn */
	IF(0x0C091266u); r0 <<= 16;  /* 0C091266 shll16 Rn */
	r9 += r0;  /* 0C091268 add Rm,Rn */
	IF(0x0C09126Au); T = (s32)r10 >= 0;  /* 0C09126A cmp/pz Rn */
	{ u32 c_ = !T; r1 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0912F0u, 6); goto L_0C0912F0; } UPD(0x0C091270u, 1); goto L_0C091270; }  /* 0C09126C bf/s */
L_0C091270: BLKS(0x0C091270u);
	IF(0x0C091270u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091270 shar Rn */
	IF(0x0C091272u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091272 shar Rn */
	r9 -= r1;  /* 0C091274 sub Rm,Rn */
	IF(0x0C091276u); { u32 t_ = r12; PR = 0x0C09127Au; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09127Au); }  /* 0C091276 jsr @Rn */
L_0C09127A: BLKS(0x0C09127Au);
	r8 = R32(r11 + 0x28u); UPD(0x0C09127Cu, 1);  /* 0C09127A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09127C add #imm,Rn */
	r13 = 0x0u;  /* 0C09127E mov #imm,Rn */
	W32(r15, r13); UPD(0x0C091282u, 3);  /* 0C091280 mov.l Rm,@Rn */
	r7 = r11;  /* 0C091282 mov Rm,Rn */
	r13 = 0xA8u; UPD(0x0C091286u, 2);  /* 0C091284 mov.w @(disp,pc),Rn */
	IF(0x0C091286u); r0 <<= 16;  /* 0C091286 shll16 Rn */
	r7 += r13;  /* 0C091288 add Rm,Rn */
	r7 += 0x1u;  /* 0C09128A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C09128Eu, 4);  /* 0C09128C mov.b @Rm,Rn */
	r8 += r0;  /* 0C09128E add Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C091290 extu.b Rm,Rn */
	r0 = 0xFFFC0000u; UPD(0x0C091294u, 3);  /* 0C091292 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C091294 add #imm,Rn */
	r8 += r10;  /* 0C091296 add Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09129Au, 3);  /* 0C091298 mov.l Rm,@(disp,Rn) */
	r4 = 0x40000u; UPD(0x0C09129Cu, 1);  /* 0C09129A mov.l @(disp,pc),Rn */
	IF(0x0C09129Cu); { u32 t_ = r12; PR = 0x0C0912A0u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0912A0u); }  /* 0C09129C jsr @Rn */
L_0C0912A0: BLKS(0x0C0912A0u);
	r5 = 0xFFFA0000u; UPD(0x0C0912A2u, 1);  /* 0C0912A0 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C0912A2 sub Rm,Rn */
	r4 = 0x1FFFFu; UPD(0x0C0912A6u, 2);  /* 0C0912A4 mov.l @(disp,pc),Rn */
	IF(0x0C0912A6u); { u32 t_ = r12; PR = 0x0C0912AAu; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0912AAu); }  /* 0C0912A6 jsr @Rn */
L_0C0912AA: BLKS(0x0C0912AAu);
	r2 = 0xFFFF0000u; UPD(0x0C0912ACu, 1);  /* 0C0912AA mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0912AC mov Rm,Rn */
	r4 = 0x808080u; UPD(0x0C0912B0u, 2);  /* 0C0912AE mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0912B0 add Rm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C0912B4u, 2);  /* 0C0912B2 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0912B4 mov Rm,Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C0912B8u, 2);  /* 0C0912B6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C0912BAu, 1);  /* 0C0912B8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0912BCu, 1);  /* 0C0912BA mov.l @Rm,Rn */
	IF(0x0C0912BCu); { u32 t_ = r9; PR = 0x0C0912C0u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0912C0u); }  /* 0C0912BC jsr @Rn */
L_0C0912C0: BLKS(0x0C0912C0u);
	r0 = 0x100000u; UPD(0x0C0912C2u, 1);  /* 0C0912C0 mov.l @(disp,pc),Rn */
	r8 = 0x600000u; UPD(0x0C0912C4u, 1);  /* 0C0912C2 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0912C4 add Rm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C0912C6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091260u, 5); goto L_0C091260; } goto L_0C0912CC; }  /* 0C0912C8 bf/s */
L_0C0912CC: BLKS(0x0C0912CCu);
	r3 = 0xC286578u; UPD(0x0C0912CEu, 2);  /* 0C0912CC mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0912D0u, 1);  /* 0C0912CE mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C0912D0 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C0912D4u, 2);  /* 0C0912D2 mov.l @(disp,Rm),Rn */
	r11 = 0xE00000u; UPD(0x0C0912D6u, 1);  /* 0C0912D4 mov.l @(disp,pc),Rn */
	T = (s32)r12 > (s32)r11;  /* 0C0912D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0912ECu, 4); goto L_0C0912EC; }  /* 0C0912D8 bf */
L_0C0912DA: BLKS(0x0C0912DAu);
	r10 = r13;  /* 0C0912DA mov Rm,Rn */
	r10 += r3;  /* 0C0912DC add Rm,Rn */
	r10 += 0x1u;  /* 0C0912DE add #imm,Rn */
	r8 = 0x12u;  /* 0C0912E0 mov #imm,Rn */
	W8(r10, r8); UPD(0x0C0912E4u, 5);  /* 0C0912E2 mov.b Rm,@Rn */
L_0C0912E4: BLKS(0x0C0912E4u);
	r0 = 0xA0u; UPD(0x0C0912E6u, 1);  /* 0C0912E4 mov.w @(disp,pc),Rn */
L_0C0912E6: BLKS(0x0C0912E6u);
	IF(0x0C0912E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0912E8u, 1);  /* 0C0912E6 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0912E8 add #imm,Rn */
	IF(0x0C0912EAu); W8(r0 + r3, r2); UPD(0x0C0912ECu, 2);  /* 0C0912EA mov.b Rm,@(r0,Rn) */
L_0C0912EC: BLKS(0x0C0912ECu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C0912EC bra */
L_0C0912F0: BLKS(0x0C0912F0u);
	{ r1 = 0u - r10; /* slot neg Rm,Rn */ UPD(0x0C091270u, 3); goto L_0C091270; }  /* 0C0912F0 bra */
L_0C091300: BLKS(0x0C091300u);
	if (T) { UPD(0x0C091306u, 3); goto L_0C091306; }  /* 0C091300 bt */
L_0C091302: BLKS(0x0C091302u);
	{ IF(0x0C091304u); ; /* slot nop */ UPD(0x0C09115Au, 3); goto L_0C09115A; }  /* 0C091302 bra */
L_0C091306: BLKS(0x0C091306u);
	r0 = 0xA0u; UPD(0x0C091308u, 1);  /* 0C091306 mov.w @(disp,pc),Rn */
	IF(0x0C091308u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09130Au, 1);  /* 0C091308 mov.b @(r0,Rm),Rn */
	r3 = 0x3u;  /* 0C09130A mov #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C09130C extu.b Rm,Rn */
	T = r2 > r3;  /* 0C09130E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0912ECu, 6); goto L_0C0912EC; }  /* 0C091310 bt */
L_0C091312: BLKS(0x0C091312u);
	r0 = 0xC091364u;  /* 0C091312 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C091314 add Rm,Rn */
	IF(0x0C091316u); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C091318u, 3);  /* 0C091316 mov.w @(r0,Rm),Rn */
	IF(0x0C091318u); { u32 tv_ = (r13 + 0x0C09131Cu); u32 t_ = PHYS(tv_); IF(0x0C09131Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091370u: goto L_0C091370; case 0x0C0913B0u: goto L_0C0913B0; case 0x0C0913D0u: goto L_0C0913D0; case 0x0C091530u: goto L_0C091530; default: JUMPD(tv_); } }  /* 0C091318 braf Rn */
L_0C091370: BLKS(0x0C091370u);
	r5 = 0xB4u; UPD(0x0C091372u, 1);  /* 0C091370 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C091372 mov #imm,Rn */
	IF(0x0C091374u); MACL = r10 * r5;  /* 0C091374 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C091378u, 4);  /* 0C091376 mov.l @(disp,pc),Rn */
	IF(0x0C091378u); r9 = MACL;  /* 0C091378 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C09137Cu, 2);  /* 0C09137A mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C09137C add Rm,Rn */
	r10 += r9;  /* 0C09137E add Rm,Rn */
	r7 = r10;  /* 0C091380 mov Rm,Rn */
	r12 = r10;  /* 0C091382 mov Rm,Rn */
	r10 += 0x3u;  /* 0C091384 add #imm,Rn */
	W8(r10, r11); UPD(0x0C091388u, 6);  /* 0C091386 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C091388 add #imm,Rn */
	r10 += 0xFFFFFFFDu;  /* 0C09138A add #imm,Rn */
	r4 = R32(r9); UPD(0x0C09138Eu, 3);  /* 0C09138C mov.l @Rm,Rn */
	r12 += 0x2u;  /* 0C09138E add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C091392u, 2);  /* 0C091390 mov.b @Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C091394u, 1);  /* 0C091392 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C091394 add #imm,Rn */
	r4 &= r0;  /* 0C091396 and Rm,Rn */
	W8(r12, r11); UPD(0x0C09139Au, 3);  /* 0C091398 mov.b Rm,@Rn */
	W8(r7, r11); UPD(0x0C09139Cu, 1);  /* 0C09139A mov.b Rm,@Rn */
	W32(r9, r4); UPD(0x0C09139Eu, 1);  /* 0C09139C mov.l Rm,@Rn */
	r2 = 0xC3C4165u; UPD(0x0C0913A0u, 1);  /* 0C09139E mov.l @(disp,pc),Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C091168u, 3); goto L_0C091168; }  /* 0C0913A0 bra */
L_0C0913B0: BLKS(0x0C0913B0u);
	r3 = 0xB4u; UPD(0x0C0913B2u, 1);  /* 0C0913B0 mov.w @(disp,pc),Rn */
	IF(0x0C0913B2u); MACL = r10 * r3;  /* 0C0913B2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0913B6u, 3);  /* 0C0913B4 mov.l @(disp,pc),Rn */
	IF(0x0C0913B6u); r3 = MACL;  /* 0C0913B6 sts macl,Rn */
	r3 += r13;  /* 0C0913B8 add Rm,Rn */
	r6 = R32(r3); UPD(0x0C0913BCu, 3);  /* 0C0913BA mov.l @Rm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C0913BEu, 1);  /* 0C0913BC mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C0913BE and Rm,Rn */
	{ W32(r3, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0912E4u, 4); goto L_0C0912E4; }  /* 0C0913C0 bra */
L_0C0913D0: BLKS(0x0C0913D0u);
	r9 = 0xB4u; UPD(0x0C0913D2u, 1);  /* 0C0913D0 mov.w @(disp,pc),Rn */
	IF(0x0C0913D2u); MACL = r10 * r9;  /* 0C0913D2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0913D6u, 3);  /* 0C0913D4 mov.l @(disp,pc),Rn */
	IF(0x0C0913D6u); r13 = MACL;  /* 0C0913D6 sts macl,Rn */
	r9 = 0xA9u; UPD(0x0C0913DAu, 2);  /* 0C0913D8 mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C0913DA add Rm,Rn */
	r9 += r11;  /* 0C0913DC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C0913E0u, 3);  /* 0C0913DE mov.b @Rm,Rn */
	r10 = 0x8u;  /* 0C0913E0 mov #imm,Rn */
	r4 = r8 & 0xFF;  /* 0C0913E2 extu.b Rm,Rn */
	r8 = 0x12u;  /* 0C0913E4 mov #imm,Rn */
	r8 -= r4;  /* 0C0913E6 sub Rm,Rn */
	T = r8 > r10;  /* 0C0913E8 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0913EEu, 8); goto L_0C0913EE; }  /* 0C0913EA bf */
L_0C0913EC: BLKS(0x0C0913ECu);
	r8 = 0x8u;  /* 0C0913EC mov #imm,Rn */
	UPD(0x0C0913EEu, 1);
L_0C0913EE: BLKS(0x0C0913EEu);
	r12 = 0xC062780u; UPD(0x0C0913F0u, 1);  /* 0C0913EE mov.l @(disp,pc),Rn */
	IF(0x0C0913F0u); { u32 t_ = r12; PR = 0x0C0913F4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0913F4u); }  /* 0C0913F0 jsr @Rn */
L_0C0913F4: BLKS(0x0C0913F4u);
	r8 += r0;  /* 0C0913F4 add Rm,Rn */
	r7 = 0xC1B75ACu; UPD(0x0C0913F8u, 2);  /* 0C0913F6 mov.l @(disp,pc),Rn */
	IF(0x0C0913F8u); r8 <<= 2;  /* 0C0913F8 shll2 Rn */
	r0 = r8;  /* 0C0913FA mov Rm,Rn */
	IF(0x0C0913FCu); r4 = R32(r0 + r7); UPD(0x0C0913FEu, 3);  /* 0C0913FC mov.l @(r0,Rm),Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C091400u, 1);  /* 0C0913FE mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C091402u, 1);  /* 0C091400 mov.b @Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C091402 extu.b Rm,Rn */
	IF(0x0C091404u); r3 <<= 8;  /* 0C091404 shll8 Rn */
	r6 = 0x38E38E39u; UPD(0x0C091408u, 3);  /* 0C091406 mov.l @(disp,pc),Rn */
	IF(0x0C091408u); T = r3 & 1; r3 >>= 1;  /* 0C091408 shlr Rn */
	{ s64 r_ = (s64)(s32)r3 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09140A dmuls.l Rm,Rn */
	r10 = 0xFFA00000u; UPD(0x0C09140Eu, 4);  /* 0C09140C mov.l @(disp,pc),Rn */
	IF(0x0C09140Eu); r2 = MACH;  /* 0C09140E sts mach,Rn */
	IF(0x0C091410u); r2 >>= 2;  /* 0C091410 shlr2 Rn */
	r7 = r2 & 0xFF;  /* 0C091412 extu.b Rm,Rn */
	r0 = r7;  /* 0C091414 mov Rm,Rn */
	r5 = r7;  /* 0C091416 mov Rm,Rn */
	IF(0x0C091418u); r0 <<= 16;  /* 0C091418 shll16 Rn */
	IF(0x0C09141Au); r5 <<= 8;  /* 0C09141A shll8 Rn */
	r0 |= r5;  /* 0C09141C or Rm,Rn */
	r0 |= r7;  /* 0C09141E or Rm,Rn */
	W32(r11 + 0x38u, r0); UPD(0x0C091422u, 10);  /* 0C091420 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r13); UPD(0x0C091424u, 1);  /* 0C091422 mov.l Rm,@(disp,Rn) */
L_0C091424: BLKS(0x0C091424u);
	IF(0x0C091424u); { u32 t_ = r12; PR = 0x0C091428u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091428u); }  /* 0C091424 jsr @Rn */
L_0C091428: BLKS(0x0C091428u);
	r9 = R32(r11 + 0x24u); UPD(0x0C09142Au, 1);  /* 0C091428 mov.l @(disp,Rm),Rn */
	IF(0x0C09142Au); r0 <<= 16;  /* 0C09142A shll16 Rn */
	r9 += r0;  /* 0C09142C add Rm,Rn */
	IF(0x0C09142Eu); T = (s32)r10 >= 0;  /* 0C09142E cmp/pz Rn */
	{ u32 c_ = !T; r1 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0914D0u, 6); goto L_0C0914D0; } UPD(0x0C091434u, 1); goto L_0C091434; }  /* 0C091430 bf/s */
L_0C091434: BLKS(0x0C091434u);
	IF(0x0C091434u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091434 shar Rn */
	IF(0x0C091436u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091436 shar Rn */
	r9 -= r1;  /* 0C091438 sub Rm,Rn */
	IF(0x0C09143Au); { u32 t_ = r12; PR = 0x0C09143Eu; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09143Eu); }  /* 0C09143A jsr @Rn */
L_0C09143E: BLKS(0x0C09143Eu);
	r8 = R32(r11 + 0x28u); UPD(0x0C091440u, 1);  /* 0C09143E mov.l @(disp,Rm),Rn */
	IF(0x0C091440u); r0 <<= 16;  /* 0C091440 shll16 Rn */
	r8 += r0;  /* 0C091442 add Rm,Rn */
	r13 = 0xFFFC0000u; UPD(0x0C091446u, 3);  /* 0C091444 mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C091446 add Rm,Rn */
	r8 += r13;  /* 0C091448 add Rm,Rn */
	r7 = 0xA8u; UPD(0x0C09144Cu, 3);  /* 0C09144A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09144C add #imm,Rn */
	r13 = 0x0u;  /* 0C09144E mov #imm,Rn */
	W32(r15, r13); UPD(0x0C091452u, 3);  /* 0C091450 mov.l Rm,@Rn */
	r7 += r11;  /* 0C091452 add Rm,Rn */
	r7 += 0x1u;  /* 0C091454 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C091458u, 3);  /* 0C091456 mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C091458 extu.b Rm,Rn */
	r3 += 0x1u;  /* 0C09145A add #imm,Rn */
	r4 = 0x40000u; UPD(0x0C09145Eu, 3);  /* 0C09145C mov.l @(disp,pc),Rn */
	IF(0x0C09145Eu); { u32 t_ = r12; PR = 0x0C091462u; W32(r15 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091462u); }  /* 0C09145E jsr @Rn */
L_0C091462: BLKS(0x0C091462u);
	r6 = 0xFFFA0000u; UPD(0x0C091464u, 1);  /* 0C091462 mov.l @(disp,pc),Rn */
	r6 -= r0;  /* 0C091464 sub Rm,Rn */
	r4 = 0x1FFFFu; UPD(0x0C091468u, 2);  /* 0C091466 mov.l @(disp,pc),Rn */
	IF(0x0C091468u); { u32 t_ = r12; PR = 0x0C09146Cu; W32(r15 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09146Cu); }  /* 0C091468 jsr @Rn */
L_0C09146C: BLKS(0x0C09146Cu);
	r5 = 0xFFFF0000u; UPD(0x0C09146Eu, 1);  /* 0C09146C mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C09146E mov Rm,Rn */
	r5 += r0;  /* 0C091470 add Rm,Rn */
	r0 = 0x808080u; UPD(0x0C091474u, 3);  /* 0C091472 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C091474 mov Rm,Rn */
	r2 = 0xC0BEEF0u; UPD(0x0C091478u, 2);  /* 0C091476 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C09147Au, 1);  /* 0C091478 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C09147Cu, 1);  /* 0C09147A mov.l Rm,@(disp,Rn) */
	r9 = 0x100000u; UPD(0x0C09147Eu, 1);  /* 0C09147C mov.l @(disp,pc),Rn */
	r8 = 0x600000u; UPD(0x0C091480u, 1);  /* 0C09147E mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C091480 add Rm,Rn */
	r4 = R32(r11); UPD(0x0C091484u, 2);  /* 0C091482 mov.l @Rm,Rn */
	IF(0x0C091484u); { u32 t_ = r2; PR = 0x0C091488u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C091488u); }  /* 0C091484 jsr @Rn */
L_0C091488: BLKS(0x0C091488u);
	T = (s32)r10 > (s32)r8;  /* 0C091488 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091424u, 4); goto L_0C091424; } goto L_0C09148E; }  /* 0C09148A bf/s */
L_0C09148E: BLKS(0x0C09148Eu);
	r10 = R32(r14 + 0xCu); UPD(0x0C091490u, 2);  /* 0C09148E mov.l @(disp,Rm),Rn */
	r3 = 0xC286578u; UPD(0x0C091492u, 1);  /* 0C091490 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C091492 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C091496u, 2);  /* 0C091494 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFF8000u; UPD(0x0C091498u, 1);  /* 0C091496 mov.w @(disp,pc),Rn */
	r12 += r1;  /* 0C091498 add Rm,Rn */
	r1 = 0x98u; UPD(0x0C09149Cu, 2);  /* 0C09149A mov.w @(disp,pc),Rn */
	r1 += r3;  /* 0C09149C add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r1); UPD(0x0C0914A0u, 2);  /* 0C09149E mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0914A0 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C0914A2 extu.b Rm,Rn */
	W32(r3 + 0x24u, r12); UPD(0x0C0914A6u, 3);  /* 0C0914A4 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C0914A6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0914C0u, 4); goto L_0C0914C0; } UPD(0x0C0914ACu, 1); goto L_0C0914AC; }  /* 0C0914A8 bf/s */
L_0C0914AC: BLKS(0x0C0914ACu);
	r9 = 0xA8u; UPD(0x0C0914AEu, 1);  /* 0C0914AC mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0914AE add Rm,Rn */
	r9 += 0x1u;  /* 0C0914B0 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C0914B4u, 3);  /* 0C0914B2 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0914B4 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0914B6 extu.b Rm,Rn */
	W8(r1, r13); UPD(0x0C0914BAu, 3);  /* 0C0914B8 mov.b Rm,@Rn */
	T = r0 == 0x1u;  /* 0C0914BA cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0914C4u, 4); goto L_0C0914C4; } UPD(0x0C0914C0u, 1); goto L_0C0914C0; }  /* 0C0914BC bt/s */
L_0C0914C0: BLKS(0x0C0914C0u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C0914C0 bra */
L_0C0914C4: BLKS(0x0C0914C4u);
	r0 = 0x86u; UPD(0x0C0914C6u, 1);  /* 0C0914C4 mov.w @(disp,pc),Rn */
	IF(0x0C0914C6u); W16(r0 + r3, r13); UPD(0x0C0914C8u, 1);  /* 0C0914C6 mov.w Rm,@(r0,Rn) */
	{ r0 += 0x1Au; /* slot add #imm,Rn */ UPD(0x0C0912E6u, 3); goto L_0C0912E6; }  /* 0C0914C8 bra */
L_0C0914D0: BLKS(0x0C0914D0u);
	{ r1 = 0u - r10; /* slot neg Rm,Rn */ UPD(0x0C091434u, 3); goto L_0C091434; }  /* 0C0914D0 bra */
L_0C091530: BLKS(0x0C091530u);
	r3 = 0xB4u; UPD(0x0C091532u, 1);  /* 0C091530 mov.w @(disp,pc),Rn */
	r8 = 0x12u;  /* 0C091532 mov #imm,Rn */
	IF(0x0C091534u); MACL = r10 * r3;  /* 0C091534 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C091538u, 4);  /* 0C091536 mov.l @(disp,pc),Rn */
	r0 = 0x8u;  /* 0C091538 mov #imm,Rn */
	IF(0x0C09153Au); r13 = MACL;  /* 0C09153A sts macl,Rn */
	r9 = 0xA9u; UPD(0x0C09153Eu, 3);  /* 0C09153C mov.w @(disp,pc),Rn */
	r12 += r13;  /* 0C09153E add Rm,Rn */
	r9 += r12;  /* 0C091540 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C091544u, 3);  /* 0C091542 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C091544 extu.b Rm,Rn */
	r8 -= r5;  /* 0C091546 sub Rm,Rn */
	T = r8 > r0;  /* 0C091548 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09154Eu, 6); goto L_0C09154E; }  /* 0C09154A bf */
L_0C09154C: BLKS(0x0C09154Cu);
	r8 = 0x8u;  /* 0C09154C mov #imm,Rn */
	UPD(0x0C09154Eu, 1);
L_0C09154E: BLKS(0x0C09154Eu);
	r10 = 0xC062780u; UPD(0x0C091550u, 1);  /* 0C09154E mov.l @(disp,pc),Rn */
	IF(0x0C091550u); { u32 t_ = r10; PR = 0x0C091554u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091554u); }  /* 0C091550 jsr @Rn */
L_0C091554: BLKS(0x0C091554u);
	r8 += r0;  /* 0C091554 add Rm,Rn */
	IF(0x0C091556u); r8 <<= 2;  /* 0C091556 shll2 Rn */
	r6 = 0xC1B75ACu; UPD(0x0C09155Au, 3);  /* 0C091558 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09155A mov Rm,Rn */
	IF(0x0C09155Cu); r5 = R32(r0 + r6); UPD(0x0C09155Eu, 2);  /* 0C09155C mov.l @(r0,Rm),Rn */
	W32(r14 + 0x10u, r5); UPD(0x0C091560u, 1);  /* 0C09155E mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C091562u, 1);  /* 0C091560 mov.b @Rm,Rn */
	r9 = r2 & 0xFF;  /* 0C091562 extu.b Rm,Rn */
	IF(0x0C091564u); r9 <<= 8;  /* 0C091564 shll8 Rn */
	r8 = 0x38E38E39u; UPD(0x0C091568u, 3);  /* 0C091566 mov.l @(disp,pc),Rn */
	IF(0x0C091568u); T = r9 & 1; r9 >>= 1;  /* 0C091568 shlr Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09156A dmuls.l Rm,Rn */
	W32(r14 + 0x14u, r13); UPD(0x0C09156Eu, 4);  /* 0C09156C mov.l Rm,@(disp,Rn) */
	IF(0x0C09156Eu); r1 = MACH;  /* 0C09156E sts mach,Rn */
	IF(0x0C091570u); r1 >>= 2;  /* 0C091570 shlr2 Rn */
	r7 = r1 & 0xFF;  /* 0C091572 extu.b Rm,Rn */
	r4 = r7;  /* 0C091574 mov Rm,Rn */
	r11 = r7;  /* 0C091576 mov Rm,Rn */
	IF(0x0C091578u); r11 <<= 8;  /* 0C091578 shll8 Rn */
	IF(0x0C09157Au); r4 <<= 16;  /* 0C09157A shll16 Rn */
	r4 |= r11;  /* 0C09157C or Rm,Rn */
	r4 |= r7;  /* 0C09157E or Rm,Rn */
	r11 = 0xFFA00000u; UPD(0x0C091582u, 10);  /* 0C091580 mov.l @(disp,pc),Rn */
	W32(r12 + 0x38u, r4); UPD(0x0C091584u, 1);  /* 0C091582 mov.l Rm,@(disp,Rn) */
L_0C091584: BLKS(0x0C091584u);
	IF(0x0C091584u); { u32 t_ = r10; PR = 0x0C091588u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091588u); }  /* 0C091584 jsr @Rn */
L_0C091588: BLKS(0x0C091588u);
	r9 = R32(r12 + 0x24u); UPD(0x0C09158Au, 1);  /* 0C091588 mov.l @(disp,Rm),Rn */
	IF(0x0C09158Au); r0 <<= 16;  /* 0C09158A shll16 Rn */
	r9 += r0;  /* 0C09158C add Rm,Rn */
	IF(0x0C09158Eu); T = (s32)r11 >= 0;  /* 0C09158E cmp/pz Rn */
	{ u32 c_ = !T; r1 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091610u, 6); goto L_0C091610; } UPD(0x0C091594u, 1); goto L_0C091594; }  /* 0C091590 bf/s */
L_0C091594: BLKS(0x0C091594u);
	IF(0x0C091594u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091594 shar Rn */
	IF(0x0C091596u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091596 shar Rn */
	r9 -= r1;  /* 0C091598 sub Rm,Rn */
	IF(0x0C09159Au); { u32 t_ = r10; PR = 0x0C09159Eu; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09159Eu); }  /* 0C09159A jsr @Rn */
L_0C09159E: BLKS(0x0C09159Eu);
	r8 = R32(r12 + 0x28u); UPD(0x0C0915A0u, 1);  /* 0C09159E mov.l @(disp,Rm),Rn */
	IF(0x0C0915A0u); r0 <<= 16;  /* 0C0915A0 shll16 Rn */
	r8 += r0;  /* 0C0915A2 add Rm,Rn */
	r13 = 0xFFFC0000u; UPD(0x0C0915A6u, 3);  /* 0C0915A4 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C0915A6 add Rm,Rn */
	r8 += r13;  /* 0C0915A8 add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0915AA add #imm,Rn */
	r13 = 0x0u;  /* 0C0915AC mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0915B0u, 5);  /* 0C0915AE mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0915B0 mov Rm,Rn */
	W32(r15, r13); UPD(0x0C0915B4u, 2);  /* 0C0915B2 mov.l Rm,@Rn */
	IF(0x0C0915B4u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0915B6u, 1);  /* 0C0915B4 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0915B6 extu.b Rm,Rn */
	r5 += 0x1u;  /* 0C0915B8 add #imm,Rn */
	r4 = 0x40000u; UPD(0x0C0915BCu, 3);  /* 0C0915BA mov.l @(disp,pc),Rn */
	IF(0x0C0915BCu); { u32 t_ = r10; PR = 0x0C0915C0u; W32(r15 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0915C0u); }  /* 0C0915BC jsr @Rn */
L_0C0915C0: BLKS(0x0C0915C0u);
	r2 = 0xFFFA0000u; UPD(0x0C0915C2u, 1);  /* 0C0915C0 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0915C2 sub Rm,Rn */
	r4 = 0x1FFFFu; UPD(0x0C0915C6u, 2);  /* 0C0915C4 mov.l @(disp,pc),Rn */
	IF(0x0C0915C6u); { u32 t_ = r10; PR = 0x0C0915CAu; W32(r15 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0915CAu); }  /* 0C0915C6 jsr @Rn */
L_0C0915CA: BLKS(0x0C0915CAu);
	r7 = 0xFFFF0000u; UPD(0x0C0915CCu, 1);  /* 0C0915CA mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0915CC mov Rm,Rn */
	r7 += r0;  /* 0C0915CE add Rm,Rn */
	W32(r15 + 0xCu, r7); UPD(0x0C0915D2u, 3);  /* 0C0915D0 mov.l Rm,@(disp,Rn) */
	r4 = 0x808080u; UPD(0x0C0915D4u, 1);  /* 0C0915D2 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0915D4 mov Rm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C0915D8u, 2);  /* 0C0915D6 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C0915DAu, 1);  /* 0C0915D8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x10u); UPD(0x0C0915DCu, 1);  /* 0C0915DA mov.l @(disp,Rm),Rn */
	IF(0x0C0915DCu); { u32 t_ = r8; PR = 0x0C0915E0u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0915E0u); }  /* 0C0915DC jsr @Rn */
L_0C0915E0: BLKS(0x0C0915E0u);
	r3 = 0x100000u; UPD(0x0C0915E2u, 1);  /* 0C0915E0 mov.l @(disp,pc),Rn */
	r0 = 0x600000u; UPD(0x0C0915E4u, 1);  /* 0C0915E2 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C0915E4 add Rm,Rn */
	T = (s32)r11 > (s32)r0;  /* 0C0915E6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091584u, 5); goto L_0C091584; } goto L_0C0915EC; }  /* 0C0915E8 bf/s */
L_0C0915EC: BLKS(0x0C0915ECu);
	r7 = 0xC286578u; UPD(0x0C0915EEu, 2);  /* 0C0915EC mov.l @(disp,pc),Rn */
	r10 = R32(r14 + 0x14u); UPD(0x0C0915F0u, 1);  /* 0C0915EE mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C0915F2u, 1);  /* 0C0915F0 mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C0915F2 add Rm,Rn */
	IF(0x0C0915F4u); r2 = R32(r0 + r7); UPD(0x0C0915F6u, 2);  /* 0C0915F4 mov.l @(r0,Rm),Rn */
	r12 = 0x7FFFu; UPD(0x0C0915F8u, 1);  /* 0C0915F6 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r12;  /* 0C0915F8 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C091602u, 4); goto L_0C091602; }  /* 0C0915FA bt */
L_0C0915FC: BLKS(0x0C0915FCu);
	r11 = 0x200u; UPD(0x0C0915FEu, 1);  /* 0C0915FC mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C0915FE add Rm,Rn */
	IF(0x0C091600u); W32(r0 + r7, r2); UPD(0x0C091602u, 2);  /* 0C091600 mov.l Rm,@(r0,Rn) */
L_0C091602: BLKS(0x0C091602u);
	r1 = R32(r7 + 0x24u); UPD(0x0C091604u, 1);  /* 0C091602 mov.l @(disp,Rm),Rn */
	r9 = 0x1BFFFFFu; UPD(0x0C091606u, 1);  /* 0C091604 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r9;  /* 0C091606 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09160Cu, 4); goto L_0C09160C; }  /* 0C091608 bf */
L_0C09160A: BLKS(0x0C09160Au);
	W32(r7, r13); UPD(0x0C09160Cu, 1);  /* 0C09160A mov.l Rm,@Rn */
L_0C09160C: BLKS(0x0C09160Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C09160C bra */
L_0C091610: BLKS(0x0C091610u);
	{ r1 = 0u - r11; /* slot neg Rm,Rn */ UPD(0x0C091594u, 3); goto L_0C091594; }  /* 0C091610 bra */
L_0C091620: BLKS(0x0C091620u);
	r0 = 0xA0u; UPD(0x0C091622u, 1);  /* 0C091620 mov.w @(disp,pc),Rn */
	IF(0x0C091622u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C091624u, 1);  /* 0C091622 mov.b @(r0,Rm),Rn */
	r2 = r5 & 0xFF;  /* 0C091624 extu.b Rm,Rn */
	T = r2 > r4;  /* 0C091626 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09160Cu, 5); goto L_0C09160C; }  /* 0C091628 bt */
L_0C09162A: BLKS(0x0C09162Au);
	r0 = 0xC09167Cu;  /* 0C09162A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09162C add Rm,Rn */
	IF(0x0C09162Eu); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C091630u, 3);  /* 0C09162E mov.w @(r0,Rm),Rn */
	IF(0x0C091630u); { u32 tv_ = (r6 + 0x0C091634u); u32 t_ = PHYS(tv_); IF(0x0C091632u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0916A0u: goto L_0C0916A0; case 0x0C0916D0u: goto L_0C0916D0; case 0x0C091720u: goto L_0C091720; case 0x0C091760u: goto L_0C091760; case 0x0C0917D0u: goto L_0C0917D0; case 0x0C0917E4u: goto L_0C0917E4; case 0x0C091840u: goto L_0C091840; case 0x0C091880u: goto L_0C091880; case 0x0C0918A0u: goto L_0C0918A0; case 0x0C0918D0u: goto L_0C0918D0; case 0x0C091980u: goto L_0C091980; default: JUMPD(tv_); } }  /* 0C091630 braf Rn */
L_0C0916A0: BLKS(0x0C0916A0u);
	r8 = 0xB4u; UPD(0x0C0916A2u, 1);  /* 0C0916A0 mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C0916A2 mov #imm,Rn */
	IF(0x0C0916A4u); MACL = r10 * r8;  /* 0C0916A4 mul.l Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C0916A8u, 4);  /* 0C0916A6 mov.l @(disp,pc),Rn */
	r2 = 0xC286578u; UPD(0x0C0916AAu, 1);  /* 0C0916A8 mov.l @(disp,pc),Rn */
	IF(0x0C0916AAu); r8 = MACL;  /* 0C0916AA sts macl,Rn */
	r11 = 0xC1B75A0u; UPD(0x0C0916AEu, 2);  /* 0C0916AC mov.l @(disp,pc),Rn */
	r9 = 0xA0u; UPD(0x0C0916B0u, 1);  /* 0C0916AE mov.w @(disp,pc),Rn */
	IF(0x0C0916B0u); { u32 t_ = r12; PR = 0x0C0916B4u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0916B4u); }  /* 0C0916B0 jsr @Rn */
L_0C0916B4: BLKS(0x0C0916B4u);
	IF(0x0C0916B4u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0916B6u, 1);  /* 0C0916B4 mov.b @(r0,Rm),Rn */
	r8 += r9;  /* 0C0916B6 add Rm,Rn */
	r8 += 0x1u;  /* 0C0916B8 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0916BCu, 3);  /* 0C0916BA mov.b Rm,@Rn */
	IF(0x0C0916BCu); { u32 t_ = r12; PR = 0x0C0916C0u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0916C0u); }  /* 0C0916BC jsr @Rn */
L_0C0916C0: BLKS(0x0C0916C0u);
	IF(0x0C0916C0u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0916C2u, 1);  /* 0C0916C0 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C0916C2 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0916C6u, 2);  /* 0C0916C4 mov.b Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C0916C6 add #imm,Rn */
	UPD(0x0C0916C8u, 1);
L_0C0916C8: BLKS(0x0C0916C8u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C0916CAu, 1);  /* 0C0916C8 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0916CA add #imm,Rn */
	{ W8(r8, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C0916CC bra */
L_0C0916D0: BLKS(0x0C0916D0u);
	r12 = 0xC062780u; UPD(0x0C0916D2u, 1);  /* 0C0916D0 mov.l @(disp,pc),Rn */
	r11 = 0xC207524u; UPD(0x0C0916D4u, 1);  /* 0C0916D2 mov.l @(disp,pc),Rn */
	IF(0x0C0916D4u); { u32 t_ = r12; PR = 0x0C0916D8u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0916D8u); }  /* 0C0916D4 jsr @Rn */
L_0C0916D8: BLKS(0x0C0916D8u);
	r2 = 0xC0u; UPD(0x0C0916DAu, 1);  /* 0C0916D8 mov.w @(disp,pc),Rn */
	r13 = 0xA0u; UPD(0x0C0916DCu, 1);  /* 0C0916DA mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0916DC add Rm,Rn */
	IF(0x0C0916DEu); r0 <<= 16;  /* 0C0916DE shll16 Rn */
	r4 = r13;  /* 0C0916E0 mov Rm,Rn */
	IF(0x0C0916E2u); { u32 t_ = r12; PR = 0x0C0916E6u; W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0916E6u); }  /* 0C0916E2 jsr @Rn */
L_0C0916E6: BLKS(0x0C0916E6u);
	r7 = 0x1B0u; UPD(0x0C0916E8u, 1);  /* 0C0916E6 mov.w @(disp,pc),Rn */
	r6 = 0xC207528u; UPD(0x0C0916EAu, 1);  /* 0C0916E8 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C0916EA add Rm,Rn */
	IF(0x0C0916ECu); r0 <<= 16;  /* 0C0916EC shll16 Rn */
	W32(r6, r0); UPD(0x0C0916F0u, 3);  /* 0C0916EE mov.l Rm,@Rn */
	r7 = r0;  /* 0C0916F0 mov Rm,Rn */
	r5 = 0xB4u; UPD(0x0C0916F4u, 2);  /* 0C0916F2 mov.w @(disp,pc),Rn */
	r6 = R32(r11); UPD(0x0C0916F6u, 1);  /* 0C0916F4 mov.l @Rm,Rn */
	IF(0x0C0916F6u); MACL = r10 * r5;  /* 0C0916F6 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0916FAu, 3);  /* 0C0916F8 mov.l @(disp,pc),Rn */
	r11 = 0xC068E60u; UPD(0x0C0916FCu, 1);  /* 0C0916FA mov.l @(disp,pc),Rn */
	IF(0x0C0916FCu); r12 = MACL;  /* 0C0916FC sts macl,Rn */
	r12 += r4;  /* 0C0916FE add Rm,Rn */
	r13 += r12;  /* 0C091700 add Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C091704u, 4);  /* 0C091702 mov.l @(disp,Rm),Rn */
	IF(0x0C091704u); { u32 t_ = r11; PR = 0x0C091708u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C091708u); }  /* 0C091704 jsr @Rn */
L_0C091708: BLKS(0x0C091708u);
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C09170Au, 1);  /* 0C091708 mov.b @Rm,Rn */
	r9 = 0x86u; UPD(0x0C09170Cu, 1);  /* 0C09170A mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C09170C add #imm,Rn */
	r9 += r12;  /* 0C09170E add Rm,Rn */
	W16(r9, r0); UPD(0x0C091712u, 3);  /* 0C091710 mov.w Rm,@Rn */
	{ W8(r13, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09116Eu, 3); goto L_0C09116E; }  /* 0C091712 bra */
L_0C091720: BLKS(0x0C091720u);
	r0 = 0xB4u; UPD(0x0C091722u, 1);  /* 0C091720 mov.w @(disp,pc),Rn */
	IF(0x0C091722u); MACL = r10 * r0;  /* 0C091722 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C091726u, 3);  /* 0C091724 mov.l @(disp,pc),Rn */
	IF(0x0C091726u); r13 = MACL;  /* 0C091726 sts macl,Rn */
	r13 += r4;  /* 0C091728 add Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C09172Cu, 3);  /* 0C09172A mov.l @(disp,pc),Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C09172Eu, 1);  /* 0C09172C mov.l @(disp,Rm),Rn */
	r12 = 0xC207524u; UPD(0x0C091730u, 1);  /* 0C09172E mov.l @(disp,pc),Rn */
	r8 = 0xA0u; UPD(0x0C091732u, 1);  /* 0C091730 mov.w @(disp,pc),Rn */
	W32(r12, r6); UPD(0x0C091734u, 1);  /* 0C091732 mov.l Rm,@Rn */
	IF(0x0C091734u); { u32 t_ = r10; PR = 0x0C091738u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091738u); }  /* 0C091734 jsr @Rn */
L_0C091738: BLKS(0x0C091738u);
	r5 = 0x1B0u; UPD(0x0C09173Au, 1);  /* 0C091738 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C09173A add Rm,Rn */
	r11 = 0xC068E60u; UPD(0x0C09173Eu, 2);  /* 0C09173C mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C09173E add Rm,Rn */
	r3 = 0xC207528u; UPD(0x0C091742u, 2);  /* 0C091740 mov.l @(disp,pc),Rn */
	IF(0x0C091742u); r0 <<= 16;  /* 0C091742 shll16 Rn */
	r9 = 0x86u; UPD(0x0C091746u, 2);  /* 0C091744 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C091746 mov Rm,Rn */
	W32(r3, r0); UPD(0x0C09174Au, 2);  /* 0C091748 mov.l Rm,@Rn */
	r9 += r13;  /* 0C09174A add Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C09174Eu, 2);  /* 0C09174C mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C091750u, 1);  /* 0C09174E mov.l @(disp,Rm),Rn */
	IF(0x0C091750u); { u32 t_ = r11; PR = 0x0C091754u; r6 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C091754u); }  /* 0C091750 jsr @Rn */
L_0C091754: BLKS(0x0C091754u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0916C8u, 3); goto L_0C0916C8; }  /* 0C091754 bra */
L_0C091760: BLKS(0x0C091760u);
	r6 = 0xB4u; UPD(0x0C091762u, 1);  /* 0C091760 mov.w @(disp,pc),Rn */
	IF(0x0C091762u); MACL = r10 * r6;  /* 0C091762 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C091766u, 3);  /* 0C091764 mov.l @(disp,pc),Rn */
	IF(0x0C091766u); r7 = MACL;  /* 0C091766 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09176Au, 2);  /* 0C091768 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C09176A add Rm,Rn */
	IF(0x0C09176Cu); r3 = R32(r0 + r7); UPD(0x0C09176Eu, 2);  /* 0C09176C mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C09176E tst Rm,Rn */
	if (T) { UPD(0x0C091780u, 4); goto L_0C091780; }  /* 0C091770 bt */
L_0C091772: BLKS(0x0C091772u);
	r4 = 0xFFFFF800u; UPD(0x0C091774u, 1);  /* 0C091772 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C091774 add Rm,Rn */
	{ IF(0x0C091778u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C091776 bra */
L_0C091780: BLKS(0x0C091780u);
	r4 = 0xC207530u; UPD(0x0C091782u, 1);  /* 0C091780 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C091784u, 1);  /* 0C091782 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C091784 cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0917A0u, 4); goto L_0C0917A0; } goto L_0C09178A; }  /* 0C091786 bt/s */
L_0C09178A: BLKS(0x0C09178Au);
	r12 += 0x1u;  /* 0C09178A add #imm,Rn */
	W8(r4, r12); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.b Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	IF(0x0C091790u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C091792u, 1);  /* 0C091790 mov.b @(r0,Rm),Rn */
	r1 += 0xFFFFFFFEu;  /* 0C091792 add #imm,Rn */
	UPD(0x0C091794u, 1);
L_0C091794: BLKS(0x0C091794u);
	IF(0x0C091794u); W8(r0 + r7, r1); UPD(0x0C091796u, 1);  /* 0C091794 mov.b Rm,@(r0,Rn) */
L_0C091796: BLKS(0x0C091796u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C091796 bra */
L_0C0917A0: BLKS(0x0C0917A0u);
	r5 = 0xA0u; UPD(0x0C0917A2u, 1);  /* 0C0917A0 mov.w @(disp,pc),Rn */
	r0 = 0x1Du;  /* 0C0917A2 mov #imm,Rn */
	r6 = 0x98u; UPD(0x0C0917A6u, 2);  /* 0C0917A4 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0917A6 add Rm,Rn */
	r6 += r7;  /* 0C0917A8 add Rm,Rn */
	r10 = r5;  /* 0C0917AA mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0917AEu, 4);  /* 0C0917AC mov.b @Rm,Rn */
	r5 += 0x2u;  /* 0C0917AE add #imm,Rn */
	r2 += 0x1u;  /* 0C0917B0 add #imm,Rn */
	r10 += 0x1u;  /* 0C0917B2 add #imm,Rn */
	W8(r5, r3); UPD(0x0C0917B6u, 4);  /* 0C0917B4 mov.b Rm,@Rn */
	r7 = r2 & 0xFF;  /* 0C0917B6 extu.b Rm,Rn */
	W8(r10, r3); UPD(0x0C0917BAu, 2);  /* 0C0917B8 mov.b Rm,@Rn */
	r5 += 0xFFFFFFFEu;  /* 0C0917BA add #imm,Rn */
	T = r7 > r0;  /* 0C0917BC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r6, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091796u, 5); goto L_0C091796; } UPD(0x0C0917C2u, 1); goto L_0C0917C2; }  /* 0C0917BE bf/s */
L_0C0917C2: BLKS(0x0C0917C2u);
	r6 += 0x1u;  /* 0C0917C2 add #imm,Rn */
	W8(r6, r3); UPD(0x0C0917C6u, 2);  /* 0C0917C4 mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C0917C8u, 1);  /* 0C0917C6 mov.b Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r5); UPD(0x0C0917CAu, 1);  /* 0C0917C8 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0917CA add #imm,Rn */
	{ W8(r5, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C0917CC bra */
L_0C0917D0: BLKS(0x0C0917D0u);
	r11 = 0xB4u; UPD(0x0C0917D2u, 1);  /* 0C0917D0 mov.w @(disp,pc),Rn */
	IF(0x0C0917D2u); MACL = r10 * r11;  /* 0C0917D2 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0917D6u, 3);  /* 0C0917D4 mov.l @(disp,pc),Rn */
	IF(0x0C0917D6u); r8 = MACL;  /* 0C0917D6 sts macl,Rn */
	r13 = 0xA0u; UPD(0x0C0917DAu, 2);  /* 0C0917D8 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0917DA add Rm,Rn */
	r8 += r13;  /* 0C0917DC add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0917E0u, 3);  /* 0C0917DE mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0917E0 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0917E4u, 2);  /* 0C0917E2 mov.b Rm,@Rn */
L_0C0917E4: BLKS(0x0C0917E4u);
	r3 = 0xB4u; UPD(0x0C0917E6u, 1);  /* 0C0917E4 mov.w @(disp,pc),Rn */
	IF(0x0C0917E6u); MACL = r10 * r3;  /* 0C0917E6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0917EAu, 3);  /* 0C0917E8 mov.l @(disp,pc),Rn */
	IF(0x0C0917EAu); r3 = MACL;  /* 0C0917EA sts macl,Rn */
	r3 += r5;  /* 0C0917EC add Rm,Rn */
	r3 += 0x50u;  /* 0C0917EE add #imm,Rn */
	r1 = R32(r3); UPD(0x0C0917F2u, 4);  /* 0C0917F0 mov.l @Rm,Rn */
	r12 = 0xE10u; UPD(0x0C0917F4u, 1);  /* 0C0917F2 mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r12;  /* 0C0917F4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0917FEu, 4); goto L_0C0917FE; } goto L_0C0917FA; }  /* 0C0917F6 bf/s */
L_0C0917FA: BLKS(0x0C0917FAu);
	{ IF(0x0C0917FCu); ; /* slot nop */ UPD(0x0C0912E4u, 4); goto L_0C0912E4; }  /* 0C0917FA bra */
L_0C0917FE: BLKS(0x0C0917FEu);
	r0 = 0xA0u; UPD(0x0C091800u, 1);  /* 0C0917FE mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C091800 mov #imm,Rn */
	IF(0x0C091802u); W8(r0 + r3, r10); UPD(0x0C091804u, 2);  /* 0C091802 mov.b Rm,@(r0,Rn) */
L_0C091804: BLKS(0x0C091804u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C091804 bra */
L_0C091840: BLKS(0x0C091840u);
	r7 = 0xB4u; UPD(0x0C091842u, 1);  /* 0C091840 mov.w @(disp,pc),Rn */
	IF(0x0C091842u); MACL = r10 * r7;  /* 0C091842 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C091846u, 3);  /* 0C091844 mov.l @(disp,pc),Rn */
	IF(0x0C091846u); r13 = MACL;  /* 0C091846 sts macl,Rn */
	r13 += r0;  /* 0C091848 add Rm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C09184Cu, 3);  /* 0C09184A mov.l @(disp,Rm),Rn */
	r4 = 0xC207528u; UPD(0x0C09184Eu, 1);  /* 0C09184C mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C09184E mov Rm,Rn */
	r6 = 0x300000u; UPD(0x0C091852u, 2);  /* 0C091850 mov.l @(disp,pc),Rn */
	r2 = 0xC207524u; UPD(0x0C091854u, 1);  /* 0C091852 mov.l @(disp,pc),Rn */
	r9 = 0xC068E60u; UPD(0x0C091856u, 1);  /* 0C091854 mov.l @(disp,pc),Rn */
	W32(r4, r7); UPD(0x0C091858u, 1);  /* 0C091856 mov.l Rm,@Rn */
	W32(r2, r6); UPD(0x0C09185Au, 1);  /* 0C091858 mov.l Rm,@Rn */
	IF(0x0C09185Au); { u32 t_ = r9; PR = 0x0C09185Eu; r4 = R32(r13 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09185Eu); }  /* 0C09185A jsr @Rn */
L_0C09185E: BLKS(0x0C09185Eu);
	r2 = 0xA0u; UPD(0x0C091860u, 1);  /* 0C09185E mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFF80u;  /* 0C091860 mov #imm,Rn */
	r8 = 0x86u; UPD(0x0C091864u, 2);  /* 0C091862 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C091864 add Rm,Rn */
	r2 += 0x3u;  /* 0C091866 add #imm,Rn */
	r8 += r13;  /* 0C091868 add Rm,Rn */
	W8(r2, r6); UPD(0x0C09186Cu, 4);  /* 0C09186A mov.b Rm,@Rn */
	W16(r8, r0); UPD(0x0C09186Eu, 1);  /* 0C09186C mov.w Rm,@Rn */
	{ r2 += 0xFFFFFFFDu; /* slot add #imm,Rn */ UPD(0x0C091168u, 3); goto L_0C091168; }  /* 0C09186E bra */
L_0C091880: BLKS(0x0C091880u);
	r3 = 0xB4u; UPD(0x0C091882u, 1);  /* 0C091880 mov.w @(disp,pc),Rn */
	IF(0x0C091882u); MACL = r10 * r3;  /* 0C091882 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C091886u, 3);  /* 0C091884 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C091888u, 1);  /* 0C091886 mov.w @(disp,pc),Rn */
	IF(0x0C091888u); r7 = MACL;  /* 0C091888 sts macl,Rn */
	r7 += r5;  /* 0C09188A add Rm,Rn */
	IF(0x0C09188Cu); r11 = R32(r0 + r7); UPD(0x0C09188Eu, 3);  /* 0C09188C mov.l @(r0,Rm),Rn */
	r12 = 0xFFFFF800u; UPD(0x0C091890u, 1);  /* 0C09188E mov.w @(disp,pc),Rn */
	r11 += r12;  /* 0C091890 add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C091892 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C091896u); W32(r0 + r7, r11); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C091804u, 5); goto L_0C091804; } UPD(0x0C091898u, 1); goto L_0C091898; }  /* 0C091894 bf/s */
L_0C091898: BLKS(0x0C091898u);
	r0 += 0x14u;  /* 0C091898 add #imm,Rn */
	IF(0x0C09189Au); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09189Cu, 2);  /* 0C09189A mov.b @(r0,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C091794u, 3); goto L_0C091794; }  /* 0C09189C bra */
L_0C0918A0: BLKS(0x0C0918A0u);
	r0 = 0xB4u; UPD(0x0C0918A2u, 1);  /* 0C0918A0 mov.w @(disp,pc),Rn */
	IF(0x0C0918A2u); MACL = r10 * r0;  /* 0C0918A2 mul.l Rm,Rn */
	r6 = 0xE00000u; UPD(0x0C0918A6u, 3);  /* 0C0918A4 mov.l @(disp,pc),Rn */
	r7 = 0xC207524u; UPD(0x0C0918A8u, 1);  /* 0C0918A6 mov.l @(disp,pc),Rn */
	IF(0x0C0918A8u); r10 = MACL;  /* 0C0918A8 sts macl,Rn */
	r4 = 0xC286578u; UPD(0x0C0918ACu, 2);  /* 0C0918AA mov.l @(disp,pc),Rn */
	W32(r7, r6); UPD(0x0C0918AEu, 1);  /* 0C0918AC mov.l Rm,@Rn */
	r10 += r4;  /* 0C0918AE add Rm,Rn */
	r8 = 0xC068E60u; UPD(0x0C0918B2u, 2);  /* 0C0918B0 mov.l @(disp,pc),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C0918B4u, 1);  /* 0C0918B2 mov.l @(disp,Rm),Rn */
	r9 = 0xC207528u; UPD(0x0C0918B6u, 1);  /* 0C0918B4 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C0918B6 mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C0918BAu, 2);  /* 0C0918B8 mov.w @(disp,pc),Rn */
	W32(r9, r7); UPD(0x0C0918BCu, 1);  /* 0C0918BA mov.l Rm,@Rn */
	r13 += r10;  /* 0C0918BC add Rm,Rn */
	IF(0x0C0918BEu); { u32 t_ = r8; PR = 0x0C0918C2u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0918C2u); }  /* 0C0918BE jsr @Rn */
L_0C0918C2: BLKS(0x0C0918C2u);
	W16(r13, r0); UPD(0x0C0918C4u, 1);  /* 0C0918C2 mov.w Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0918C6u, 1);  /* 0C0918C4 mov.w @(disp,pc),Rn */
	IF(0x0C0918C6u); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0918C8u, 1);  /* 0C0918C6 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0918C8 add #imm,Rn */
	{ IF(0x0C0918CCu); W8(r0 + r10, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C0918CA bra */
L_0C0918D0: BLKS(0x0C0918D0u);
	r8 = 0xB4u; UPD(0x0C0918D2u, 1);  /* 0C0918D0 mov.w @(disp,pc),Rn */
	IF(0x0C0918D2u); MACL = r10 * r8;  /* 0C0918D2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0918D6u, 3);  /* 0C0918D4 mov.l @(disp,pc),Rn */
	IF(0x0C0918D6u); r5 = MACL;  /* 0C0918D6 sts macl,Rn */
	r5 += r0;  /* 0C0918D8 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0918DCu, 3);  /* 0C0918DA mov.w @(disp,pc),Rn */
	r10 = 0xFFFFu; UPD(0x0C0918DEu, 1);  /* 0C0918DC mov.l @(disp,pc),Rn */
	IF(0x0C0918DEu); r2 = R32(r0 + r5); UPD(0x0C0918E0u, 1);  /* 0C0918DE mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C0918E0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0918EAu, 4); goto L_0C0918EA; }  /* 0C0918E2 bt */
L_0C0918E4: BLKS(0x0C0918E4u);
	r13 = 0x800u; UPD(0x0C0918E6u, 1);  /* 0C0918E4 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C0918E6 add Rm,Rn */
	IF(0x0C0918E8u); W32(r0 + r5, r2); UPD(0x0C0918EAu, 2);  /* 0C0918E8 mov.l Rm,@(r0,Rn) */
L_0C0918EA: BLKS(0x0C0918EAu);
	r4 = R32(r5 + 0x24u); UPD(0x0C0918ECu, 1);  /* 0C0918EA mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0918EEu, 1);  /* 0C0918EC mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0918EE add Rm,Rn */
	IF(0x0C0918F0u); T = (s32)r2 >= 0;  /* 0C0918F0 cmp/pz Rn */
	if (!T) { UPD(0x0C091970u, 5); goto L_0C091970; }  /* 0C0918F2 bf */
L_0C0918F4: BLKS(0x0C0918F4u);
	r3 = 0x1E00000u; UPD(0x0C0918F6u, 1);  /* 0C0918F4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0918F6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09190Au, 4); goto L_0C09190A; }  /* 0C0918F8 bt */
L_0C0918FA: BLKS(0x0C0918FAu);
	r0 = R32(r5 + 0x28u); UPD(0x0C0918FCu, 1);  /* 0C0918FA mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C0918FEu, 1);  /* 0C0918FC mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0918FE add Rm,Rn */
	IF(0x0C091900u); T = (s32)r2 >= 0;  /* 0C091900 cmp/pz Rn */
	if (!T) { UPD(0x0C091960u, 5); goto L_0C091960; }  /* 0C091902 bf */
L_0C091904: BLKS(0x0C091904u);
	r9 = 0xC80000u; UPD(0x0C091906u, 1);  /* 0C091904 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C091906 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C091920u, 4); goto L_0C091920; }  /* 0C091908 bf */
L_0C09190A: BLKS(0x0C09190Au);
	r0 = 0xA0u; UPD(0x0C09190Cu, 1);  /* 0C09190A mov.w @(disp,pc),Rn */
	IF(0x0C09190Cu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09190Eu, 1);  /* 0C09190C mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09190E add #imm,Rn */
	IF(0x0C091910u); W8(r0 + r5, r4); UPD(0x0C091912u, 2);  /* 0C091910 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE6u;  /* 0C091912 add #imm,Rn */
	IF(0x0C091914u); r11 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C091916u, 2);  /* 0C091914 mov.w @(r0,Rm),Rn */
	r1 = 0x100u; UPD(0x0C091918u, 1);  /* 0C091916 mov.w @(disp,pc),Rn */
	r11 += r1;  /* 0C091918 add Rm,Rn */
	{ IF(0x0C09191Cu); W16(r0 + r5, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C09116Eu, 4); goto L_0C09116E; }  /* 0C09191A bra */
L_0C091920: BLKS(0x0C091920u);
	r6 = 0xC207524u; UPD(0x0C091922u, 1);  /* 0C091920 mov.l @(disp,pc),Rn */
	r9 = 0xC207528u; UPD(0x0C091924u, 1);  /* 0C091922 mov.l @(disp,pc),Rn */
	r13 = R32(r6); UPD(0x0C091926u, 1);  /* 0C091924 mov.l @Rm,Rn */
	r10 = 0x7FFFFu; UPD(0x0C091928u, 1);  /* 0C091926 mov.l @(disp,pc),Rn */
	r4 -= r13;  /* 0C091928 sub Rm,Rn */
	r2 = 0xFFFFEu; UPD(0x0C09192Cu, 2);  /* 0C09192A mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C09192C add Rm,Rn */
	r8 = R32(r9); UPD(0x0C091930u, 2);  /* 0C09192E mov.l @Rm,Rn */
	T = r2 >= r4;  /* 0C091930 cmp/hs Rm,Rn */
	r0 -= r8;  /* 0C091932 sub Rm,Rn */
	IF(0x0C091934u); r12 = T;  /* 0C091934 movt Rn */
	r0 += r10;  /* 0C091936 add Rm,Rn */
	T = r2 >= r0;  /* 0C091938 cmp/hs Rm,Rn */
	IF(0x0C09193Au); r7 = T;  /* 0C09193A movt Rn */
	r12 &= r7;  /* 0C09193C and Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C09193E tst Rm,Rn */
	if (T) { UPD(0x0C09194Au, 11); goto L_0C09194A; }  /* 0C091940 bt */
L_0C091942: BLKS(0x0C091942u);
	r0 = 0xA0u; UPD(0x0C091944u, 1);  /* 0C091942 mov.w @(disp,pc),Rn */
	IF(0x0C091944u); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C091946u, 1);  /* 0C091944 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C091946 add #imm,Rn */
	IF(0x0C091948u); W8(r0 + r5, r3); UPD(0x0C09194Au, 2);  /* 0C091948 mov.b Rm,@(r0,Rn) */
L_0C09194A: BLKS(0x0C09194Au);
	r7 = R32(r9); UPD(0x0C09194Cu, 1);  /* 0C09194A mov.l @Rm,Rn */
	r11 = 0x86u; UPD(0x0C09194Eu, 1);  /* 0C09194C mov.w @(disp,pc),Rn */
	r9 = 0xC068E60u; UPD(0x0C091950u, 1);  /* 0C09194E mov.l @(disp,pc),Rn */
	r11 += r5;  /* 0C091950 add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C091954u, 2);  /* 0C091952 mov.l @(disp,Rm),Rn */
	r6 = R32(r6); UPD(0x0C091956u, 1);  /* 0C091954 mov.l @Rm,Rn */
	IF(0x0C091956u); { u32 t_ = r9; PR = 0x0C09195Au; r5 = R32(r5 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09195Au); }  /* 0C091956 jsr @Rn */
L_0C09195A: BLKS(0x0C09195Au);
	W16(r11, r0); UPD(0x0C09195Cu, 1);  /* 0C09195A mov.w Rm,@Rn */
L_0C09195C: BLKS(0x0C09195Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091170u, 3); goto L_0C091170; }  /* 0C09195C bra */
L_0C091960: BLKS(0x0C091960u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C091904u, 3); goto L_0C091904; }  /* 0C091960 bra */
L_0C091970: BLKS(0x0C091970u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0918F4u, 3); goto L_0C0918F4; }  /* 0C091970 bra */
L_0C091980: BLKS(0x0C091980u);
	r12 = 0xB4u; UPD(0x0C091982u, 1);  /* 0C091980 mov.w @(disp,pc),Rn */
	IF(0x0C091982u); MACL = r10 * r12;  /* 0C091982 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C091986u, 3);  /* 0C091984 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C091988u, 1);  /* 0C091986 mov.w @(disp,pc),Rn */
	IF(0x0C091988u); r7 = MACL;  /* 0C091988 sts macl,Rn */
	r7 += r11;  /* 0C09198A add Rm,Rn */
	IF(0x0C09198Cu); r3 = R32(r0 + r7); UPD(0x0C09198Eu, 3);  /* 0C09198C mov.l @(r0,Rm),Rn */
	r2 = 0xFFFFF800u; UPD(0x0C091990u, 1);  /* 0C09198E mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C091990 add Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C091992 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C091996u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09195Cu, 5); goto L_0C09195C; } UPD(0x0C091998u, 1); goto L_0C091998; }  /* 0C091994 bf/s */
L_0C091998: BLKS(0x0C091998u);
	r0 += 0x13u;  /* 0C091998 add #imm,Rn */
	IF(0x0C09199Au); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09199Cu, 2);  /* 0C09199A mov.b @(r0,Rm),Rn */
	r5 = 0xA0u; UPD(0x0C09199Eu, 1);  /* 0C09199C mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C09199E add #imm,Rn */
	r5 += r7;  /* 0C0919A0 add Rm,Rn */
	IF(0x0C0919A2u); W8(r0 + r7, r1); UPD(0x0C0919A4u, 3);  /* 0C0919A2 mov.b Rm,@(r0,Rn) */
	W8(r5, r3); UPD(0x0C0919A6u, 1);  /* 0C0919A4 mov.b Rm,@Rn */
	r7 += 0x50u;  /* 0C0919A6 add #imm,Rn */
	r5 += 0x3u;  /* 0C0919A8 add #imm,Rn */
	W32(r7, r3); UPD(0x0C0919ACu, 3);  /* 0C0919AA mov.l Rm,@Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09116Eu, 3); goto L_0C09116E; }  /* 0C0919AC bra */
}

void blk_f_0C091A00(sh3_t *c)
{
	LOCALS;
	goto L_0C091A00;
L_0C090B20: BLKS(0x0C090B20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C090B22u, 1);  /* 0C090B20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C090B24u, 1);  /* 0C090B22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C090B26u, 1);  /* 0C090B24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C090B28u, 1);  /* 0C090B26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C090B2Au, 1);  /* 0C090B28 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C090B2Cu, 1);  /* 0C090B2A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C090B2C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C090B30u, 2);  /* 0C090B2E mov.l Rm,@-Rn */
	IF(0x0C090B30u); MACL = r12 * r3;  /* 0C090B30 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C090B34u, 3);  /* 0C090B32 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C090B36u, 1);  /* 0C090B34 mov.l @(disp,pc),Rn */
	IF(0x0C090B36u); r2 = MACL;  /* 0C090B36 sts macl,Rn */
	IF(0x0C090B38u); r15 -= 4; W32(r15, PR); UPD(0x0C090B3Au, 2);  /* 0C090B38 sts.l pr,@-Rn */
	r0 += r2;  /* 0C090B3A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C090B3Eu, 2);  /* 0C090B3C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C090B3E add #imm,Rn */
	r0 = 0x21u;  /* 0C090B40 mov #imm,Rn */
	T = r2 > r0;  /* 0C090B42 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090BA8u, 6); goto L_0C090BA8; } goto L_0C090B48; }  /* 0C090B44 bt/s */
L_0C090B48: BLKS(0x0C090B48u);
	r0 = 0xC090B58u;  /* 0C090B48 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C090B4A add Rm,Rn */
	IF(0x0C090B4Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C090B4Eu, 4);  /* 0C090B4C mov.w @(r0,Rm),Rn */
	IF(0x0C090B4Eu); { u32 tv_ = (r4 + 0x0C090B52u); u32 t_ = PHYS(tv_); IF(0x0C090B50u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090B4E braf Rn */
L_0C090BA8: BLKS(0x0C090BA8u);
	r6 = 0xB4u; UPD(0x0C090BAAu, 1);  /* 0C090BA8 mov.w @(disp,pc),Rn */
	IF(0x0C090BAAu); MACL = r12 * r6;  /* 0C090BAA mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C090BAEu, 3);  /* 0C090BAC mov.l @(disp,pc),Rn */
	IF(0x0C090BAEu); r4 = MACL;  /* 0C090BAE sts macl,Rn */
	r4 += r7;  /* 0C090BB0 add Rm,Rn */
	r12 = R32(r4); UPD(0x0C090BB4u, 3);  /* 0C090BB2 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C090BB4 tst Rm,Rn */
	if (!T) { UPD(0x0C090BC2u, 4); goto L_0C090BC2; }  /* 0C090BB6 bf */
L_0C090BB8: BLKS(0x0C090BB8u);
	r4 += 0x40u;  /* 0C090BB8 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C090BBCu, 2);  /* 0C090BBA mov.l @Rm,Rn */
	r5 = 0xC34Fu; UPD(0x0C090BBEu, 1);  /* 0C090BBC mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C090BBE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C090BE0u, 4); goto L_0C090BE0; }  /* 0C090BC0 bf */
L_0C090BC2: BLKS(0x0C090BC2u);
	r14 += 0x4u;  /* 0C090BC2 add #imm,Rn */
	r15 = r14;  /* 0C090BC4 mov Rm,Rn */
	IF(0x0C090BC6u); PR = R32(r15); r15 += 4; UPD(0x0C090BC8u, 3);  /* 0C090BC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090BCAu, 1);  /* 0C090BC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090BCCu, 1);  /* 0C090BCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090BCEu, 1);  /* 0C090BCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090BD0u, 1);  /* 0C090BCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090BD2u, 1);  /* 0C090BD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090BD4u, 1);  /* 0C090BD2 mov.l @Rm+,Rn */
	IF(0x0C090BD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C090BD4 rts */
L_0C090BE0: BLKS(0x0C090BE0u);
	r9 = 0x4u;  /* 0C090BE0 mov #imm,Rn */
	IF(0x0C090BE2u); ARG0(0x449Du); { s32 s_ = (s32)r9; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C090BE2 shld Rm,Rn */
	r11 = 0x40000u; UPD(0x0C090BE6u, 3);  /* 0C090BE4 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C090BE6 add #imm,Rn */
	r0 = 0xC071C90u; UPD(0x0C090BEAu, 2);  /* 0C090BE8 mov.l @(disp,pc),Rn */
	r4 += r11;  /* 0C090BEA add Rm,Rn */
	r15 = r14;  /* 0C090BEC mov Rm,Rn */
	IF(0x0C090BEEu); PR = R32(r15); r15 += 4; UPD(0x0C090BF0u, 3);  /* 0C090BEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C090BF2u, 1);  /* 0C090BF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C090BF4u, 1);  /* 0C090BF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C090BF6u, 1);  /* 0C090BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C090BF8u, 1);  /* 0C090BF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C090BFAu, 1);  /* 0C090BF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C090BFCu, 1);  /* 0C090BFA mov.l @Rm+,Rn */
	IF(0x0C090BFCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C090BFC jmp @Rn */
L_0C091A00: BLKS(0x0C091A00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C091A02u, 1);  /* 0C091A00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C091A04u, 1);  /* 0C091A02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C091A06u, 1);  /* 0C091A04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C091A08u, 1);  /* 0C091A06 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C091A0Au, 1);  /* 0C091A08 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C091A0Cu, 1);  /* 0C091A0A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C091A0C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C091A10u, 2);  /* 0C091A0E mov.l Rm,@-Rn */
	IF(0x0C091A10u); MACL = r12 * r3;  /* 0C091A10 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C091A14u, 3);  /* 0C091A12 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C091A16u, 1);  /* 0C091A14 mov.l @(disp,pc),Rn */
	IF(0x0C091A16u); r2 = MACL;  /* 0C091A16 sts macl,Rn */
	IF(0x0C091A18u); r15 -= 4; W32(r15, PR); UPD(0x0C091A1Au, 2);  /* 0C091A18 sts.l pr,@-Rn */
	r0 += r2;  /* 0C091A1A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C091A1Eu, 2);  /* 0C091A1C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C091A1E add #imm,Rn */
	r0 = 0x21u;  /* 0C091A20 mov #imm,Rn */
	T = r2 > r0;  /* 0C091A22 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091A2Cu, 6); goto L_0C091A2C; } goto L_0C091A28; }  /* 0C091A24 bf/s */
L_0C091A28: BLKS(0x0C091A28u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 4); goto L_0C091B12; }  /* 0C091A28 bra */
L_0C091A2C: BLKS(0x0C091A2Cu);
	r0 = 0xC091A3Cu;  /* 0C091A2C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C091A2E add Rm,Rn */
	IF(0x0C091A30u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C091A32u, 3);  /* 0C091A30 mov.w @(r0,Rm),Rn */
	IF(0x0C091A32u); { u32 tv_ = (r4 + 0x0C091A36u); u32 t_ = PHYS(tv_); IF(0x0C091A34u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091A80u: goto L_0C091A80; case 0x0C091D10u: goto L_0C091D10; case 0x0C091E00u: goto L_0C091E00; case 0x0C091EC0u: goto L_0C091EC0; case 0x0C091FF0u: goto L_0C091FF0; case 0x0C0920E0u: goto L_0C0920E0; case 0x0C0922D0u: goto L_0C0922D0; case 0x0C092600u: goto L_0C092600; case 0x0C092750u: goto L_0C092750; case 0x0C0928F0u: goto L_0C0928F0; case 0x0C092A00u: goto L_0C092A00; case 0x0C092AB0u: goto L_0C092AB0; case 0x0C092BA0u: goto L_0C092BA0; case 0x0C092CB0u: goto L_0C092CB0; case 0x0C092D60u: goto L_0C092D60; case 0x0C092EA0u: goto L_0C092EA0; default: JUMPD(tv_); } }  /* 0C091A32 braf Rn */
L_0C091A80: BLKS(0x0C091A80u);
	r1 = 0xB4u; UPD(0x0C091A82u, 1);  /* 0C091A80 mov.w @(disp,pc),Rn */
	IF(0x0C091A82u); MACL = r12 * r1;  /* 0C091A82 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C091A86u, 3);  /* 0C091A84 mov.l @(disp,pc),Rn */
	IF(0x0C091A86u); r10 = MACL;  /* 0C091A86 sts macl,Rn */
	r10 += r5;  /* 0C091A88 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C091A8A add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C091A8Eu, 4);  /* 0C091A8C mov.w @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C091A8E tst Rm,Rn */
	{ u32 c_ = T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091A98u, 4); goto L_0C091A98; } goto L_0C091A94; }  /* 0C091A90 bt/s */
L_0C091A94: BLKS(0x0C091A94u);
	{ IF(0x0C091A96u); ; /* slot nop */ UPD(0x0C091BF0u, 4); goto L_0C091BF0; }  /* 0C091A94 bra */
L_0C091A98: BLKS(0x0C091A98u);
	r9 = 0xC0A9CB0u; UPD(0x0C091A9Au, 1);  /* 0C091A98 mov.l @(disp,pc),Rn */
	r11 = 0x10u;  /* 0C091A9A mov #imm,Rn */
	r7 = 0xC2B07FCu; UPD(0x0C091A9Eu, 2);  /* 0C091A9C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C091A9E mov Rm,Rn */
	IF(0x0C091AA0u); { u32 t_ = r9; PR = 0x0C091AA4u; W32(r7, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C091AA4u); }  /* 0C091AA0 jsr @Rn */
L_0C091AA4: BLKS(0x0C091AA4u);
	r6 = R32(r10); UPD(0x0C091AA6u, 1);  /* 0C091AA4 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C091AA6 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C091B00u, 4); goto L_0C091B00; } goto L_0C091AAC; }  /* 0C091AA8 bf/s */
L_0C091AAC: BLKS(0x0C091AACu);
	r13 = 0xA7u; UPD(0x0C091AAEu, 2);  /* 0C091AAC mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C091AAE mov Rm,Rn */
	IF(0x0C091AB0u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C091AB2u, 2);  /* 0C091AB0 mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C091AB2 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C091AB4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091AE0u, 5); goto L_0C091AE0; } UPD(0x0C091ABAu, 1); goto L_0C091ABA; }  /* 0C091AB6 bt/s */
L_0C091ABA: BLKS(0x0C091ABAu);
	r4 = R32(r10 + 0x4u); UPD(0x0C091ABCu, 1);  /* 0C091ABA mov.l @(disp,Rm),Rn */
	r1 = 0xC069E60u; UPD(0x0C091ABEu, 1);  /* 0C091ABC mov.l @(disp,pc),Rn */
	IF(0x0C091ABEu); ;  /* 0C091ABE nop */
	UPD(0x0C091AC0u, 1);
L_0C091AC0: BLKS(0x0C091AC0u);
	r14 += 0x18u;  /* 0C091AC0 add #imm,Rn */
	r15 = r14;  /* 0C091AC2 mov Rm,Rn */
	IF(0x0C091AC4u); PR = R32(r15); r15 += 4; UPD(0x0C091AC6u, 3);  /* 0C091AC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C091AC8u, 1);  /* 0C091AC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C091ACAu, 1);  /* 0C091AC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C091ACCu, 1);  /* 0C091ACA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C091ACEu, 1);  /* 0C091ACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C091AD0u, 1);  /* 0C091ACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C091AD2u, 1);  /* 0C091AD0 mov.l @Rm+,Rn */
	IF(0x0C091AD2u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C090B20u: goto L_0C090B20; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C091AD2 jmp @Rn */
L_0C091AE0: BLKS(0x0C091AE0u);
	r3 = 0xA9u; UPD(0x0C091AE2u, 1);  /* 0C091AE0 mov.w @(disp,pc),Rn */
	IF(0x0C091AE2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C091AE4u, 1);  /* 0C091AE2 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C091AE4 add #imm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C091AE8u, 2);  /* 0C091AE6 mov.l Rm,@(disp,Rn) */
	r7 = r2 & 0xFF;  /* 0C091AE8 extu.b Rm,Rn */
	r0 = 0x20000u; UPD(0x0C091AECu, 2);  /* 0C091AEA mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C091AEC mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C091AF0u, 2);  /* 0C091AEE mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C091AF2u, 1);  /* 0C091AF0 mov.l Rm,@Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C091AF4u, 1);  /* 0C091AF2 mov.l @(disp,Rm),Rn */
	IF(0x0C091AF4u); { u32 t_ = r8; PR = 0x0C091AF8u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C091AF8u); }  /* 0C091AF4 jsr @Rn */
L_0C091AF8: BLKS(0x0C091AF8u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C091ABAu, 3); goto L_0C091ABA; }  /* 0C091AF8 bra */
L_0C091B00: BLKS(0x0C091B00u);
	r0 = 0x98u; UPD(0x0C091B02u, 1);  /* 0C091B00 mov.w @(disp,pc),Rn */
	IF(0x0C091B02u); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C091B04u, 1);  /* 0C091B02 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C091B04 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C091B06 extu.b Rm,Rn */
	T = r5 > r4;  /* 0C091B08 cmp/hi Rm,Rn */
	{ u32 c_ = T; IF(0x0C091B0Cu); W8(r0 + r10, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C091B30u, 6); goto L_0C091B30; } UPD(0x0C091B0Eu, 1); goto L_0C091B0E; }  /* 0C091B0A bt/s */
L_0C091B0E: BLKS(0x0C091B0Eu);
	IF(0x0C091B0Eu); ;  /* 0C091B0E nop */
	UPD(0x0C091B10u, 1);
L_0C091B10: BLKS(0x0C091B10u);
	r14 += 0x18u;  /* 0C091B10 add #imm,Rn */
	UPD(0x0C091B12u, 1);
L_0C091B12: BLKS(0x0C091B12u);
	r15 = r14;  /* 0C091B12 mov Rm,Rn */
	IF(0x0C091B14u); PR = R32(r15); r15 += 4; UPD(0x0C091B16u, 2);  /* 0C091B14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C091B18u, 1);  /* 0C091B16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C091B1Au, 1);  /* 0C091B18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C091B1Cu, 1);  /* 0C091B1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C091B1Eu, 1);  /* 0C091B1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C091B20u, 1);  /* 0C091B1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C091B22u, 1);  /* 0C091B20 mov.l @Rm+,Rn */
	IF(0x0C091B22u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C091B22 rts */
L_0C091B30: BLKS(0x0C091B30u);
	r12 = 0xC0C2360u; UPD(0x0C091B32u, 1);  /* 0C091B30 mov.l @(disp,pc),Rn */
	IF(0x0C091B32u); { u32 t_ = r12; PR = 0x0C091B36u; IF(0x0C091B34u); W8(r0 + r10, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C091B36u); }  /* 0C091B32 jsr @Rn */
L_0C091B36: BLKS(0x0C091B36u);
	r12 = 0xC062780u; UPD(0x0C091B38u, 1);  /* 0C091B36 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C091B38 exts.w Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C091B3Cu, 2);  /* 0C091B3A mov.l @(disp,pc),Rn */
	IF(0x0C091B3Cu); { u32 t_ = r12; PR = 0x0C091B40u; r4 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091B40u); }  /* 0C091B3C jsr @Rn */
L_0C091B40: BLKS(0x0C091B40u);
	r9 = r0;  /* 0C091B40 mov Rm,Rn */
	IF(0x0C091B42u); r9 <<= 16;  /* 0C091B42 shll16 Rn */
	r4 = r13;  /* 0C091B44 mov Rm,Rn */
	IF(0x0C091B46u); { u32 t_ = r8; PR = 0x0C091B4Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C091B4Au); }  /* 0C091B46 jsr @Rn */
L_0C091B4A: BLKS(0x0C091B4Au);
	r5 = R32(r10 + 0x24u); UPD(0x0C091B4Cu, 1);  /* 0C091B4A mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C091B4C mov Rm,Rn */
	r5 += r0;  /* 0C091B4E add Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C091B52u, 3);  /* 0C091B50 mov.l @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C091B54u, 1);  /* 0C091B52 mov.l Rm,@Rn */
	IF(0x0C091B54u); { u32 t_ = r11; PR = 0x0C091B58u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C091B58u); }  /* 0C091B54 jsr @Rn */
L_0C091B58: BLKS(0x0C091B58u);
	r1 = R32(r10 + 0x28u); UPD(0x0C091B5Au, 1);  /* 0C091B58 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C091B5A add #imm,Rn */
	r1 += r0;  /* 0C091B5C add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C091B60u, 3);  /* 0C091B5E mov.l Rm,@(disp,Rn) */
	r11 = 0xC1B75F4u; UPD(0x0C091B62u, 1);  /* 0C091B60 mov.l @(disp,pc),Rn */
	IF(0x0C091B62u); { u32 t_ = r12; PR = 0x0C091B66u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091B66u); }  /* 0C091B62 jsr @Rn */
L_0C091B66: BLKS(0x0C091B66u);
	IF(0x0C091B66u); r0 <<= 2;  /* 0C091B66 shll2 Rn */
	r11 += r0;  /* 0C091B68 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C091B6Cu, 3);  /* 0C091B6A mov.w @(disp,pc),Rn */
	r9 = 0x4u;  /* 0C091B6C mov #imm,Rn */
	IF(0x0C091B6Eu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C091B70u, 2);  /* 0C091B6E mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C091B70 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C091B74u, 2);  /* 0C091B72 mov.l Rm,@Rn */
	r3 = 0xA9u; UPD(0x0C091B76u, 1);  /* 0C091B74 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C091B76 mov Rm,Rn */
	IF(0x0C091B78u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C091B7Au, 2);  /* 0C091B78 mov.b @(r0,Rm),Rn */
	r13 = 0xFFFA0000u; UPD(0x0C091B7Cu, 1);  /* 0C091B7A mov.l @(disp,pc),Rn */
	r8 = r2 & 0xFF;  /* 0C091B7C extu.b Rm,Rn */
	r4 = 0x2000u; UPD(0x0C091B80u, 2);  /* 0C091B7E mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C091B82u, 1);  /* 0C091B80 mov.l Rm,@(disp,Rn) */
	IF(0x0C091B82u); { u32 t_ = r12; PR = 0x0C091B86u; W32(r15 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091B86u); }  /* 0C091B82 jsr @Rn */
L_0C091B86: BLKS(0x0C091B86u);
	r7 = 0xFFFFF000u; UPD(0x0C091B88u, 1);  /* 0C091B86 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C091B88 add Rm,Rn */
	IF(0x0C091B8Au); ARG0(0x409Du); { s32 s_ = (s32)r9; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C091B8A shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C091B8Eu, 3);  /* 0C091B8C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C091B90u, 1);  /* 0C091B8E mov.l @Rm,Rn */
	r5 = R32(r11); UPD(0x0C091B92u, 1);  /* 0C091B90 mov.l @Rm,Rn */
	r6 = R32(r14); UPD(0x0C091B94u, 1);  /* 0C091B92 mov.l @Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C091B96u, 1);  /* 0C091B94 mov.l @(disp,Rm),Rn */
L_0C091B96: BLKS(0x0C091B96u);
	r10 = 0xC0BE860u; UPD(0x0C091B98u, 1);  /* 0C091B96 mov.l @(disp,pc),Rn */
	IF(0x0C091B98u); { u32 t_ = r10; PR = 0x0C091B9Cu; IF(0x0C091B9Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C091B9Cu); }  /* 0C091B98 jsr @Rn */
L_0C091B9C: BLKS(0x0C091B9Cu);
	r15 += 0x10u;  /* 0C091B9C add #imm,Rn */
	UPD(0x0C091B9Eu, 1);
L_0C091B9E: BLKS(0x0C091B9Eu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C091B9E bra */
L_0C091BF0: BLKS(0x0C091BF0u);
	r2 = 0xC091110u; UPD(0x0C091BF2u, 1);  /* 0C091BF0 mov.l @(disp,pc),Rn */
	r8 = 0x86u; UPD(0x0C091BF4u, 1);  /* 0C091BF2 mov.w @(disp,pc),Rn */
	IF(0x0C091BF4u); { u32 t_ = r2; PR = 0x0C091BF8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C091110, 0x0C091110u, 0x0C091BF8u); }  /* 0C091BF4 jsr @Rn */
L_0C091BF8: BLKS(0x0C091BF8u);
	r13 = 0x8Cu; UPD(0x0C091BFAu, 1);  /* 0C091BF8 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C091BFA add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C091BFEu, 2);  /* 0C091BFC mov.l @(disp,pc),Rn */
	r13 += r10;  /* 0C091BFE add Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C091C02u, 2);  /* 0C091C00 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C091C04u, 1);  /* 0C091C02 mov.w @Rm,Rn */
	IF(0x0C091C04u); { u32 t_ = r9; PR = 0x0C091C08u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C091C08u); }  /* 0C091C04 jsr @Rn */
L_0C091C08: BLKS(0x0C091C08u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C091C0Au, 1);  /* 0C091C08 mov.w @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C091C0Cu, 1);  /* 0C091C0A mov.l Rm,@(disp,Rn) */
	IF(0x0C091C0Cu); { u32 t_ = r11; PR = 0x0C091C10u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C091C10u); }  /* 0C091C0C jsr @Rn */
L_0C091C10: BLKS(0x0C091C10u);
	r2 = 0x99u; UPD(0x0C091C12u, 1);  /* 0C091C10 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C091C12 add Rm,Rn */
	r3 = R32(r10 + 0x24u); UPD(0x0C091C16u, 2);  /* 0C091C14 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C091C18u, 1);  /* 0C091C16 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C091C1Au, 1);  /* 0C091C18 mov.b @Rm,Rn */
	r7 += r0;  /* 0C091C1A add Rm,Rn */
	r4 = R32(r10 + 0x2Cu); UPD(0x0C091C1Eu, 2);  /* 0C091C1C mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C091C1E add #imm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C091C22u, 2);  /* 0C091C20 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C091C22 add Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C091C24 extu.b Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C091C28u, 3);  /* 0C091C26 mov.l Rm,@(disp,Rn) */
	T = r0 == 0xAu;  /* 0C091C28 cmp/eq #imm,r0 */
	W32(r10 + 0x28u, r7); UPD(0x0C091C2Cu, 2);  /* 0C091C2A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091B9Eu, 3); goto L_0C091B9E; } UPD(0x0C091C30u, 1); goto L_0C091C30; }  /* 0C091C2C bf/s */
L_0C091C30: BLKS(0x0C091C30u);
	r0 = 0x0u;  /* 0C091C30 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C091C34u, 2);  /* 0C091C32 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C091C34 mov #imm,Rn */
	r9 = r10;  /* 0C091C36 mov Rm,Rn */
	UPD(0x0C091C38u, 2);
L_0C091C38: BLKS(0x0C091C38u);
	r0 = r13;  /* 0C091C38 mov Rm,Rn */
	IF(0x0C091C3Au); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C091C3A rotl Rn */
	IF(0x0C091C3Cu); r11 = T;  /* 0C091C3C movt Rn */
	r11 += r13;  /* 0C091C3E add Rm,Rn */
	IF(0x0C091C40u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C091C40 shar Rn */
	r0 = 0xC1B75DCu; UPD(0x0C091C44u, 6);  /* 0C091C42 mov.l @(disp,pc),Rn */
	IF(0x0C091C44u); r11 <<= 2;  /* 0C091C44 shll2 Rn */
	IF(0x0C091C46u); r6 = R32(r0 + r11); UPD(0x0C091C48u, 2);  /* 0C091C46 mov.l @(r0,Rm),Rn */
	r11 = 0x1u;  /* 0C091C48 mov #imm,Rn */
	r11 &= r13;  /* 0C091C4A and Rm,Rn */
	r10 = 0xB4u; UPD(0x0C091C4Eu, 3);  /* 0C091C4C mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C091C4E mov Rm,Rn */
	r4 = 0xC1B75E8u; UPD(0x0C091C52u, 2);  /* 0C091C50 mov.l @(disp,pc),Rn */
	IF(0x0C091C52u); r0 <<= 2;  /* 0C091C52 shll2 Rn */
	IF(0x0C091C54u); MACL = r12 * r10;  /* 0C091C54 mul.l Rm,Rn */
	IF(0x0C091C56u); r7 = R32(r0 + r4); UPD(0x0C091C58u, 4);  /* 0C091C56 mov.l @(r0,Rm),Rn */
	r11 += r11;  /* 0C091C58 add Rm,Rn */
	r1 = 0xC062780u; UPD(0x0C091C5Cu, 2);  /* 0C091C5A mov.l @(disp,pc),Rn */
	IF(0x0C091C5Cu); r10 = MACL;  /* 0C091C5C sts macl,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C091C60u, 2);  /* 0C091C5E mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C091C60 mov #imm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C091C64u, 2);  /* 0C091C62 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C091C64 add Rm,Rn */
	r3 = 0xC1B75F0u; UPD(0x0C091C68u, 2);  /* 0C091C66 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C091C68 add Rm,Rn */
	r11 += r3;  /* 0C091C6A add Rm,Rn */
	W32(r14, r5); UPD(0x0C091C6Eu, 3);  /* 0C091C6C mov.l Rm,@Rn */
	IF(0x0C091C6Eu); { u32 t_ = r1; PR = 0x0C091C72u; W32(r14 + 0x4u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091C72u); }  /* 0C091C6E jsr @Rn */
L_0C091C72: BLKS(0x0C091C72u);
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C091C74u, 1);  /* 0C091C72 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C091C74 add #imm,Rn */
	r0 += r6;  /* 0C091C76 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C091C78 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C091C7A exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C091C7Eu, 5);  /* 0C091C7C mov.w @(disp,pc),Rn */
	IF(0x0C091C7Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C091C80u, 1);  /* 0C091C7E mov.b @(r0,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C091C82u, 1);  /* 0C091C80 mov.w @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C091C82 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C091C86u, 2);  /* 0C091C84 mov.l Rm,@Rn */
	r2 += r9;  /* 0C091C86 add Rm,Rn */
	r2 += 0x1u;  /* 0C091C88 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C091C8Cu, 3);  /* 0C091C8A mov.b @Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C091C8Eu, 1);  /* 0C091C8C mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C091C8E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C091C92u, 2);  /* 0C091C90 mov.l Rm,@(disp,Rn) */
	r5 = 0x8000u; UPD(0x0C091C94u, 1);  /* 0C091C92 mov.l @(disp,pc),Rn */
	IF(0x0C091C94u); { u32 t_ = r11; PR = 0x0C091C98u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C091C98u); }  /* 0C091C94 jsr @Rn */
L_0C091C98: BLKS(0x0C091C98u);
	r11 = 0xC069AF0u; UPD(0x0C091C9Au, 1);  /* 0C091C98 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C091C9A mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C091C9Eu, 2);  /* 0C091C9C mov.l @(disp,pc),Rn */
	IF(0x0C091C9Eu); { u32 t_ = r11; PR = 0x0C091CA2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C091CA2u); }  /* 0C091C9E jsr @Rn */
L_0C091CA2: BLKS(0x0C091CA2u);
	r11 = 0x808080u; UPD(0x0C091CA4u, 1);  /* 0C091CA2 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C091CA4 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C091CA8u, 2);  /* 0C091CA6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r11); UPD(0x0C091CAAu, 1);  /* 0C091CA8 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0BEEF0u; UPD(0x0C091CACu, 1);  /* 0C091CAA mov.l @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C091CAEu, 1);  /* 0C091CAC mov.l @Rm,Rn */
	r4 = R32(r9); UPD(0x0C091CB0u, 1);  /* 0C091CAE mov.l @Rm,Rn */
	IF(0x0C091CB0u); { u32 t_ = r3; PR = 0x0C091CB4u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C091CB4u); }  /* 0C091CB0 jsr @Rn */
L_0C091CB4: BLKS(0x0C091CB4u);
	r6 = r13;  /* 0C091CB4 mov Rm,Rn */
	r6 += 0x1u;  /* 0C091CB6 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C091CB8 exts.w Rm,Rn */
	r5 = 0x5u;  /* 0C091CBA mov #imm,Rn */
	T = (s32)r13 > (s32)r5;  /* 0C091CBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091C38u, 8); goto L_0C091C38; } goto L_0C091CC2; }  /* 0C091CBE bf/s */
L_0C091CC2: BLKS(0x0C091CC2u);
	r12 = 0xC286578u; UPD(0x0C091CC4u, 2);  /* 0C091CC2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C091CC4 add #imm,Rn */
	r12 += r10;  /* 0C091CC6 add Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C091CCAu, 3);  /* 0C091CC8 mov.l @(disp,Rm),Rn */
	r13 = 0x340000u; UPD(0x0C091CCCu, 1);  /* 0C091CCA mov.l @(disp,pc),Rn */
	r9 += r13;  /* 0C091CCC add Rm,Rn */
	r13 = R32(r12 + 0x28u); UPD(0x0C091CD0u, 2);  /* 0C091CCE mov.l @(disp,Rm),Rn */
	r0 = 0xFFF20000u; UPD(0x0C091CD2u, 1);  /* 0C091CD0 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C091CD2 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C091CD6u, 2);  /* 0C091CD4 mov.w @(disp,pc),Rn */
	IF(0x0C091CD6u); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C091CD8u, 1);  /* 0C091CD6 mov.b @(r0,Rm),Rn */
	r10 = 0xA8u; UPD(0x0C091CDAu, 1);  /* 0C091CD8 mov.w @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C091CDA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C091CDEu, 2);  /* 0C091CDC mov.l Rm,@Rn */
	r10 += r12;  /* 0C091CDE add Rm,Rn */
	r10 += 0x1u;  /* 0C091CE0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C091CE4u, 3);  /* 0C091CE2 mov.b @Rm,Rn */
	r3 = 0xC062780u; UPD(0x0C091CE6u, 1);  /* 0C091CE4 mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C091CE6 extu.b Rm,Rn */
	r8 = 0xC000u; UPD(0x0C091CEAu, 2);  /* 0C091CE8 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C091CECu, 1);  /* 0C091CEA mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C091CEEu, 1);  /* 0C091CEC mov.w @(disp,pc),Rn */
	IF(0x0C091CEEu); { u32 t_ = r3; PR = 0x0C091CF2u; W32(r15 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091CF2u); }  /* 0C091CEE jsr @Rn */
L_0C091CF2: BLKS(0x0C091CF2u);
	r2 = 0xFFFFF000u; UPD(0x0C091CF4u, 1);  /* 0C091CF2 mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C091CF4 mov #imm,Rn */
	r2 += r0;  /* 0C091CF6 add Rm,Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C091CFAu, 3);  /* 0C091CF8 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C091CFA mov Rm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C091CFEu, 2);  /* 0C091CFC mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C091D00u, 1);  /* 0C091CFE mov.l @Rm,Rn */
	r12 = 0xC0BEEF0u; UPD(0x0C091D02u, 1);  /* 0C091D00 mov.l @(disp,pc),Rn */
	IF(0x0C091D02u); { u32 t_ = r12; PR = 0x0C091D06u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C091D06u); }  /* 0C091D02 jsr @Rn */
L_0C091D06: BLKS(0x0C091D06u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C091B10u, 3); goto L_0C091B10; }  /* 0C091D06 bra */
L_0C091D10: BLKS(0x0C091D10u);
	r11 = 0xC0A8CA0u; UPD(0x0C091D12u, 1);  /* 0C091D10 mov.l @(disp,pc),Rn */
	IF(0x0C091D12u); { u32 t_ = r11; PR = 0x0C091D16u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C091D16u); }  /* 0C091D12 jsr @Rn */
L_0C091D16: BLKS(0x0C091D16u);
	IF(0x0C091D16u); T = (s32)r0 >= 0;  /* 0C091D16 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091D90u, 4); goto L_0C091D90; } goto L_0C091D1C; }  /* 0C091D18 bf/s */
L_0C091D1C: BLKS(0x0C091D1Cu);
	r4 = 0xB4u; UPD(0x0C091D1Eu, 2);  /* 0C091D1C mov.w @(disp,pc),Rn */
	IF(0x0C091D1Eu); MACL = r12 * r4;  /* 0C091D1E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C091D22u, 3);  /* 0C091D20 mov.l @(disp,pc),Rn */
	IF(0x0C091D22u); r0 = MACL;  /* 0C091D22 sts macl,Rn */
	IF(0x0C091D24u); MACL = r8 * r4;  /* 0C091D24 mul.l Rm,Rn */
	r0 += r7;  /* 0C091D26 add Rm,Rn */
	r1 = R32(r0 + 0x2Cu); UPD(0x0C091D2Au, 5);  /* 0C091D28 mov.l @(disp,Rm),Rn */
	IF(0x0C091D2Au); r12 = MACL;  /* 0C091D2A sts macl,Rn */
	r12 += r7;  /* 0C091D2C add Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C091D30u, 3);  /* 0C091D2E mov.l @(disp,Rm),Rn */
	r8 = R32(r12 + 0x28u); UPD(0x0C091D32u, 1);  /* 0C091D30 mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C091D32 add Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C091D36u, 2);  /* 0C091D34 mov.l @(disp,Rm),Rn */
	r8 += r3;  /* 0C091D36 add Rm,Rn */
	W32(r0 + 0x24u, r10); UPD(0x0C091D3Au, 2);  /* 0C091D38 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r8); UPD(0x0C091D3Cu, 1);  /* 0C091D3A mov.l Rm,@(disp,Rn) */
	r0 += 0x7Eu;  /* 0C091D3C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C091D40u, 2);  /* 0C091D3E mov.w @Rm,Rn */
	IF(0x0C091D40u); MACL = r2 * r4;  /* 0C091D40 mul.l Rm,Rn */
	r0 += 0xFFFFFF82u;  /* 0C091D42 add #imm,Rn */
	r8 = R32(r0); UPD(0x0C091D46u, 4);  /* 0C091D44 mov.l @Rm,Rn */
	IF(0x0C091D46u); r4 = MACL;  /* 0C091D46 sts macl,Rn */
	r4 += r7;  /* 0C091D48 add Rm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C091D4Cu, 3);  /* 0C091D4A mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C091D4C mov Rm,Rn */
	r8 &= r7;  /* 0C091D4E and Rm,Rn */
	W32(r0, r8); UPD(0x0C091D52u, 3);  /* 0C091D50 mov.l Rm,@Rn */
	r11 = 0xA8u; UPD(0x0C091D54u, 1);  /* 0C091D52 mov.w @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C091D56u, 1);  /* 0C091D54 mov.l @Rm,Rn */
	r10 += r11;  /* 0C091D56 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C091D5Au, 2);  /* 0C091D58 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C091D5A add Rm,Rn */
	r9 = R32(r4 + 0x38u); UPD(0x0C091D5Eu, 2);  /* 0C091D5C mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C091D5E and Rm,Rn */
	r2 = 0xA4u; UPD(0x0C091D62u, 2);  /* 0C091D60 mov.w @(disp,pc),Rn */
	r8 |= r3;  /* 0C091D62 or Rm,Rn */
	r13 = 0xAFu; UPD(0x0C091D66u, 2);  /* 0C091D64 mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C091D66 add #imm,Rn */
	W32(r0 + 0x38u, r9); UPD(0x0C091D6Au, 2);  /* 0C091D68 mov.l Rm,@(disp,Rn) */
	r12 += r2;  /* 0C091D6A add Rm,Rn */
	IF(0x0C091D6Cu); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C091D6Eu, 2);  /* 0C091D6C mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C091D6E add #imm,Rn */
	W32(r0, r8); UPD(0x0C091D72u, 2);  /* 0C091D70 mov.l Rm,@Rn */
	r10 += 0x1u;  /* 0C091D72 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C091D76u, 2);  /* 0C091D74 mov.b @Rm,Rn */
	r0 += r2;  /* 0C091D76 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C091D7Au, 2);  /* 0C091D78 mov.b @Rm,Rn */
	r5 += r6;  /* 0C091D7A add Rm,Rn */
	r0 += 0x1u;  /* 0C091D7C add #imm,Rn */
	W8(r10, r5); UPD(0x0C091D80u, 3);  /* 0C091D7E mov.b Rm,@Rn */
	W8(r0, r9); UPD(0x0C091D82u, 1);  /* 0C091D80 mov.b Rm,@Rn */
L_0C091D82: BLKS(0x0C091D82u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C091D82 bra */
L_0C091D90: BLKS(0x0C091D90u);
	r1 = 0xC090B20u; UPD(0x0C091D92u, 1);  /* 0C091D90 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C091AC0u, 3); goto L_0C091AC0; }  /* 0C091D92 bra */
L_0C091E00: BLKS(0x0C091E00u);
	r13 = 0xC0A8D30u; UPD(0x0C091E02u, 1);  /* 0C091E00 mov.l @(disp,pc),Rn */
	IF(0x0C091E02u); { u32 t_ = r13; PR = 0x0C091E06u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C091E06u); }  /* 0C091E02 jsr @Rn */
L_0C091E06: BLKS(0x0C091E06u);
	IF(0x0C091E06u); T = (s32)r0 >= 0;  /* 0C091E06 cmp/pz Rn */
	if (!T) { UPD(0x0C091D90u, 4); goto L_0C091D90; }  /* 0C091E08 bf */
L_0C091E0A: BLKS(0x0C091E0Au);
	r4 = 0xB4u; UPD(0x0C091E0Cu, 1);  /* 0C091E0A mov.w @(disp,pc),Rn */
	IF(0x0C091E0Cu); MACL = r12 * r4;  /* 0C091E0C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C091E10u, 3);  /* 0C091E0E mov.l @(disp,pc),Rn */
	IF(0x0C091E10u); r9 = MACL;  /* 0C091E10 sts macl,Rn */
	IF(0x0C091E12u); MACL = r0 * r4;  /* 0C091E12 mul.l Rm,Rn */
	r9 += r11;  /* 0C091E14 add Rm,Rn */
	r13 = R32(r9 + 0x2Cu); UPD(0x0C091E18u, 5);  /* 0C091E16 mov.l @(disp,Rm),Rn */
	IF(0x0C091E18u); r10 = MACL;  /* 0C091E18 sts macl,Rn */
	r10 += r11;  /* 0C091E1A add Rm,Rn */
	r3 = R32(r10 + 0x24u); UPD(0x0C091E1Eu, 3);  /* 0C091E1C mov.l @(disp,Rm),Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C091E20u, 1);  /* 0C091E1E mov.l @(disp,Rm),Rn */
	r3 += r13;  /* 0C091E20 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C091E24u, 2);  /* 0C091E22 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C091E24 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C091E28u, 2);  /* 0C091E26 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r8); UPD(0x0C091E2Au, 1);  /* 0C091E28 mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C091E2A add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C091E2Eu, 2);  /* 0C091E2C mov.w @Rm,Rn */
	IF(0x0C091E2Eu); MACL = r7 * r4;  /* 0C091E2E mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C091E30 add #imm,Rn */
	r0 = 0xA8u; UPD(0x0C091E34u, 4);  /* 0C091E32 mov.w @(disp,pc),Rn */
	IF(0x0C091E34u); r8 = MACL;  /* 0C091E34 sts macl,Rn */
	r8 += r11;  /* 0C091E36 add Rm,Rn */
	r10 = r9;  /* 0C091E38 mov Rm,Rn */
	r11 = R32(r9); UPD(0x0C091E3Cu, 4);  /* 0C091E3A mov.l @Rm,Rn */
	r10 += r0;  /* 0C091E3C add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C091E40u, 2);  /* 0C091E3E mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C091E40 add Rm,Rn */
	r6 = R32(r8 + 0x38u); UPD(0x0C091E44u, 2);  /* 0C091E42 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C091E44 add #imm,Rn */
	r11 &= r2;  /* 0C091E46 and Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C091E4Au, 3);  /* 0C091E48 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C091E4A add #imm,Rn */
	W32(r9, r11); UPD(0x0C091E4Eu, 2);  /* 0C091E4C mov.l Rm,@Rn */
	r0 = r9;  /* 0C091E4E mov Rm,Rn */
	r5 = 0xAFu; UPD(0x0C091E52u, 2);  /* 0C091E50 mov.w @(disp,pc),Rn */
	W32(r9 + 0x38u, r6); UPD(0x0C091E54u, 1);  /* 0C091E52 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C091E56u, 1);  /* 0C091E54 mov.l @Rm,Rn */
	r7 = 0x13000100u; UPD(0x0C091E58u, 1);  /* 0C091E56 mov.l @(disp,pc),Rn */
	IF(0x0C091E58u); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C091E5Au, 1);  /* 0C091E58 mov.b @(r0,Rm),Rn */
	r4 &= r7;  /* 0C091E5A and Rm,Rn */
	r6 = 0xA5u; UPD(0x0C091E5Eu, 2);  /* 0C091E5C mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C091E5E add Rm,Rn */
	r11 |= r4;  /* 0C091E60 or Rm,Rn */
	IF(0x0C091E62u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C091E64u, 3);  /* 0C091E62 mov.b @(r0,Rm),Rn */
	W8(r10, r3); UPD(0x0C091E66u, 1);  /* 0C091E64 mov.b Rm,@Rn */
	T = (r5 & r5) == 0;  /* 0C091E66 tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C091D82u, 4); goto L_0C091D82; } UPD(0x0C091E6Cu, 1); goto L_0C091E6C; }  /* 0C091E68 bt/s */
L_0C091E6C: BLKS(0x0C091E6Cu);
	r8 = 0xA1u; UPD(0x0C091E6Eu, 1);  /* 0C091E6C mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C091E6E mov Rm,Rn */
	r8 += r9;  /* 0C091E70 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C091E74u, 3);  /* 0C091E72 mov.b @Rm,Rn */
	r10 = 0x86u; UPD(0x0C091E76u, 1);  /* 0C091E74 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C091E76 add Rm,Rn */
	r11 = 0xC1B7604u; UPD(0x0C091E7Au, 2);  /* 0C091E78 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C091E7A add Rm,Rn */
	IF(0x0C091E7Cu); r6 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C091E7Eu, 2);  /* 0C091E7C mov.w @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C091E80u, 1);  /* 0C091E7E mov.w @Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C091E82u, 1);  /* 0C091E80 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C091E82 add Rm,Rn */
	W16(r10, r5); UPD(0x0C091E86u, 2);  /* 0C091E84 mov.w Rm,@Rn */
	r6 = 0x2u;  /* 0C091E86 mov #imm,Rn */
	IF(0x0C091E88u); { u32 t_ = r12; PR = 0x0C091E8Cu; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C091E8Cu); }  /* 0C091E88 jsr @Rn */
L_0C091E8C: BLKS(0x0C091E8Cu);
	T = (r0 & r0) == 0;  /* 0C091E8C tst Rm,Rn */
	if (T) { UPD(0x0C091EB8u, 4); goto L_0C091EB8; }  /* 0C091E8E bt */
L_0C091E90: BLKS(0x0C091E90u);
	r5 = R32(r9 + 0x24u); UPD(0x0C091E92u, 1);  /* 0C091E90 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C091E92 add #imm,Rn */
	r0 = 0x40000u; UPD(0x0C091E96u, 2);  /* 0C091E94 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C091E96 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C091E9Au, 2);  /* 0C091E98 mov.b @Rm,Rn */
	r7 = 0xC1B7608u; UPD(0x0C091E9Cu, 1);  /* 0C091E9A mov.l @(disp,pc),Rn */
	IF(0x0C091E9Cu); r0 <<= 2;  /* 0C091E9C shll2 Rn */
	IF(0x0C091E9Eu); r4 = R32(r0 + r7); UPD(0x0C091EA0u, 2);  /* 0C091E9E mov.l @(r0,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C091EA2u, 1);  /* 0C091EA0 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C091EA4u, 1);  /* 0C091EA2 mov.w @Rm,Rn */
	r6 += r4;  /* 0C091EA4 add Rm,Rn */
	r2 = 0x20000u; UPD(0x0C091EA8u, 2);  /* 0C091EA6 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C091EA8 mov #imm,Rn */
	r9 = 0xC189D06u; UPD(0x0C091EACu, 2);  /* 0C091EAA mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C091EAEu, 1);  /* 0C091EAC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C091EB0u, 1);  /* 0C091EAE mov.l Rm,@(disp,Rn) */
L_0C091EB0: BLKS(0x0C091EB0u);
	r11 = 0xC0BA970u; UPD(0x0C091EB2u, 1);  /* 0C091EB0 mov.l @(disp,pc),Rn */
	IF(0x0C091EB2u); { u32 t_ = r11; PR = 0x0C091EB6u; IF(0x0C091EB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C091EB6u); }  /* 0C091EB2 jsr @Rn */
L_0C091EB6: BLKS(0x0C091EB6u);
	r15 += 0x8u;  /* 0C091EB6 add #imm,Rn */
	UPD(0x0C091EB8u, 1);
L_0C091EB8: BLKS(0x0C091EB8u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C091EB8 bra */
L_0C091EC0: BLKS(0x0C091EC0u);
	r8 = 0xC0A8D30u; UPD(0x0C091EC2u, 1);  /* 0C091EC0 mov.l @(disp,pc),Rn */
	IF(0x0C091EC2u); { u32 t_ = r8; PR = 0x0C091EC6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C091EC6u); }  /* 0C091EC2 jsr @Rn */
L_0C091EC6: BLKS(0x0C091EC6u);
	IF(0x0C091EC6u); T = (s32)r0 >= 0;  /* 0C091EC6 cmp/pz Rn */
	if (T) { UPD(0x0C091ECEu, 4); goto L_0C091ECE; }  /* 0C091EC8 bt */
L_0C091ECA: BLKS(0x0C091ECAu);
	{ IF(0x0C091ECCu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C091ECA bra */
L_0C091ECE: BLKS(0x0C091ECEu);
	r11 = 0xB4u; UPD(0x0C091ED0u, 1);  /* 0C091ECE mov.w @(disp,pc),Rn */
	IF(0x0C091ED0u); MACL = r12 * r11;  /* 0C091ED0 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C091ED4u, 3);  /* 0C091ED2 mov.l @(disp,pc),Rn */
	IF(0x0C091ED4u); r5 = MACL;  /* 0C091ED4 sts macl,Rn */
	IF(0x0C091ED6u); MACL = r0 * r11;  /* 0C091ED6 mul.l Rm,Rn */
	r5 += r13;  /* 0C091ED8 add Rm,Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C091EDCu, 5);  /* 0C091EDA mov.l @(disp,Rm),Rn */
	IF(0x0C091EDCu); r9 = MACL;  /* 0C091EDC sts macl,Rn */
	r9 += r13;  /* 0C091EDE add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C091EE2u, 3);  /* 0C091EE0 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C091EE2 add Rm,Rn */
	W32(r5 + 0x24u, r4); UPD(0x0C091EE6u, 2);  /* 0C091EE4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r5 + 0x30u); UPD(0x0C091EE8u, 1);  /* 0C091EE6 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C091EEAu, 1);  /* 0C091EE8 mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C091EEA add Rm,Rn */
	W32(r5 + 0x28u, r4); UPD(0x0C091EEEu, 2);  /* 0C091EEC mov.l Rm,@(disp,Rn) */
	r5 += 0x7Eu;  /* 0C091EEE add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C091EF2u, 2);  /* 0C091EF0 mov.w @Rm,Rn */
	IF(0x0C091EF2u); MACL = r3 * r11;  /* 0C091EF2 mul.l Rm,Rn */
	r5 += 0xFFFFFF82u;  /* 0C091EF4 add #imm,Rn */
	r2 = 0xA8u; UPD(0x0C091EF8u, 4);  /* 0C091EF6 mov.w @(disp,pc),Rn */
	IF(0x0C091EF8u); r11 = MACL;  /* 0C091EF8 sts macl,Rn */
	r11 += r13;  /* 0C091EFA add Rm,Rn */
	r0 = R32(r11 + 0x38u); UPD(0x0C091EFEu, 3);  /* 0C091EFC mov.l @(disp,Rm),Rn */
	r9 = r5;  /* 0C091EFE mov Rm,Rn */
	W32(r5 + 0x38u, r0); UPD(0x0C091F02u, 2);  /* 0C091F00 mov.l Rm,@(disp,Rn) */
	r9 += r2;  /* 0C091F02 add Rm,Rn */
	r10 = 0xAFu; UPD(0x0C091F06u, 2);  /* 0C091F04 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C091F06 mov Rm,Rn */
	IF(0x0C091F08u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C091F0Au, 2);  /* 0C091F08 mov.b @(r0,Rm),Rn */
	r2 += r11;  /* 0C091F0A add Rm,Rn */
	r10 = R32(r5); UPD(0x0C091F0Eu, 2);  /* 0C091F0C mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C091F0E add #imm,Rn */
	r6 = 0xECFFFEFFu; UPD(0x0C091F12u, 2);  /* 0C091F10 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C091F12 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F16u, 2);  /* 0C091F14 mov.b @Rm,Rn */
	r10 &= r6;  /* 0C091F16 and Rm,Rn */
	W32(r5, r10); UPD(0x0C091F1Au, 2);  /* 0C091F18 mov.l Rm,@Rn */
	r7 += r8;  /* 0C091F1A add Rm,Rn */
	r2 = 0x99u; UPD(0x0C091F1Eu, 2);  /* 0C091F1C mov.w @(disp,pc),Rn */
	r3 = R32(r11); UPD(0x0C091F20u, 1);  /* 0C091F1E mov.l @Rm,Rn */
	r2 += r5;  /* 0C091F20 add Rm,Rn */
	r13 = 0x13000100u; UPD(0x0C091F24u, 2);  /* 0C091F22 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F26u, 1);  /* 0C091F24 mov.b @Rm,Rn */
	r3 &= r13;  /* 0C091F26 and Rm,Rn */
	r1 += 0x1u;  /* 0C091F28 add #imm,Rn */
	r10 |= r3;  /* 0C091F2A or Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C091F2C extu.b Rm,Rn */
	W8(r9, r7); UPD(0x0C091F30u, 5);  /* 0C091F2E mov.b Rm,@Rn */
	T = r0 == 0xAu;  /* 0C091F30 cmp/eq #imm,r0 */
	W32(r5, r10); UPD(0x0C091F34u, 2);  /* 0C091F32 mov.l Rm,@Rn */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091EB8u, 3); goto L_0C091EB8; } UPD(0x0C091F38u, 1); goto L_0C091F38; }  /* 0C091F34 bf/s */
L_0C091F38: BLKS(0x0C091F38u);
	r7 = 0x0u;  /* 0C091F38 mov #imm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C091F3Cu, 2);  /* 0C091F3A mov.l @(disp,Rm),Rn */
	T = r0 == 0xBu;  /* 0C091F3C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091F90u, 4); goto L_0C091F90; } UPD(0x0C091F42u, 1); goto L_0C091F42; }  /* 0C091F3E bt/s */
L_0C091F42: BLKS(0x0C091F42u);
	r8 = 0x40000u; UPD(0x0C091F44u, 1);  /* 0C091F42 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C091F44 add Rm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C091F48u, 2);  /* 0C091F46 mov.l Rm,@(disp,Rn) */
L_0C091F48: BLKS(0x0C091F48u);
	r10 = 0xB4u; UPD(0x0C091F4Au, 1);  /* 0C091F48 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C091F4A add #imm,Rn */
	IF(0x0C091F4Cu); MACL = r12 * r10;  /* 0C091F4C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C091F50u, 4);  /* 0C091F4E mov.l @(disp,pc),Rn */
	IF(0x0C091F50u); r13 = MACL;  /* 0C091F50 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C091F54u, 2);  /* 0C091F52 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C091F54 add Rm,Rn */
	IF(0x0C091F56u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C091F58u, 2);  /* 0C091F56 mov.b @(r0,Rm),Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C091F5Au, 1);  /* 0C091F58 mov.l @(disp,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C091F5A extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C091F5Eu, 2);  /* 0C091F5C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C091F5E add #imm,Rn */
	IF(0x0C091F60u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C091F62u, 2);  /* 0C091F60 mov.b @(r0,Rm),Rn */
	r9 = 0xC062780u; UPD(0x0C091F64u, 1);  /* 0C091F62 mov.l @(disp,pc),Rn */
	r3 = r6 & 0xFF;  /* 0C091F64 extu.b Rm,Rn */
	r5 = 0xFFF80000u; UPD(0x0C091F68u, 2);  /* 0C091F66 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFFEu;  /* 0C091F68 add #imm,Rn */
	r0 = 0xFFFF4000u; UPD(0x0C091F6Cu, 2);  /* 0C091F6A mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C091F6C add Rm,Rn */
	r4 = 0x3FFFu; UPD(0x0C091F70u, 2);  /* 0C091F6E mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C091F72u, 1);  /* 0C091F70 mov.l Rm,@(disp,Rn) */
	IF(0x0C091F72u); { u32 t_ = r9; PR = 0x0C091F76u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C091F76u); }  /* 0C091F72 jsr @Rn */
L_0C091F76: BLKS(0x0C091F76u);
	r11 = 0xFFFFE000u; UPD(0x0C091F78u, 1);  /* 0C091F76 mov.w @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C091F78 mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C091F7Cu, 2);  /* 0C091F7A mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C091F7C add Rm,Rn */
	r12 = 0xC0BEEF0u; UPD(0x0C091F80u, 2);  /* 0C091F7E mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C091F80 mov Rm,Rn */
	W32(r15 + 0xCu, r11); UPD(0x0C091F84u, 2);  /* 0C091F82 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C091F86u, 1);  /* 0C091F84 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13); UPD(0x0C091F88u, 1);  /* 0C091F86 mov.l @Rm,Rn */
	IF(0x0C091F88u); { u32 t_ = r12; PR = 0x0C091F8Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C091F8Cu); }  /* 0C091F88 jsr @Rn */
L_0C091F8C: BLKS(0x0C091F8Cu);
	{ IF(0x0C091F8Eu); ; /* slot nop */ UPD(0x0C091D06u, 3); goto L_0C091D06; }  /* 0C091F8C bra */
L_0C091F90: BLKS(0x0C091F90u);
	r5 = 0xFFFC0000u; UPD(0x0C091F92u, 1);  /* 0C091F90 mov.l @(disp,pc),Rn */
	r5 += r4;  /* 0C091F92 add Rm,Rn */
	{ W32(r14 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C091F48u, 4); goto L_0C091F48; }  /* 0C091F94 bra */
L_0C091FF0: BLKS(0x0C091FF0u);
	r8 = 0xC0A8CA0u; UPD(0x0C091FF2u, 1);  /* 0C091FF0 mov.l @(disp,pc),Rn */
	IF(0x0C091FF2u); { u32 t_ = r8; PR = 0x0C091FF6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C091FF6u); }  /* 0C091FF2 jsr @Rn */
L_0C091FF6: BLKS(0x0C091FF6u);
	IF(0x0C091FF6u); T = (s32)r0 >= 0;  /* 0C091FF6 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092000u, 4); goto L_0C092000; } goto L_0C091FFC; }  /* 0C091FF8 bt/s */
L_0C091FFC: BLKS(0x0C091FFCu);
	{ IF(0x0C091FFEu); ; /* slot nop */ UPD(0x0C091D90u, 4); goto L_0C091D90; }  /* 0C091FFC bra */
L_0C092000: BLKS(0x0C092000u);
	r6 = 0xB4u; UPD(0x0C092002u, 1);  /* 0C092000 mov.w @(disp,pc),Rn */
	IF(0x0C092002u); MACL = r12 * r6;  /* 0C092002 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C092006u, 3);  /* 0C092004 mov.l @(disp,pc),Rn */
	IF(0x0C092006u); r9 = MACL;  /* 0C092006 sts macl,Rn */
	IF(0x0C092008u); MACL = r8 * r6;  /* 0C092008 mul.l Rm,Rn */
	r9 += r0;  /* 0C09200A add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C09200Eu, 5);  /* 0C09200C mov.l @(disp,Rm),Rn */
	IF(0x0C09200Eu); r11 = MACL;  /* 0C09200E sts macl,Rn */
	r11 += r0;  /* 0C092010 add Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C092014u, 3);  /* 0C092012 mov.l @(disp,Rm),Rn */
	r10 = R32(r11 + 0x28u); UPD(0x0C092016u, 1);  /* 0C092014 mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C092016 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09201Au, 2);  /* 0C092018 mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C09201A add Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C09201Eu, 2);  /* 0C09201C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r10); UPD(0x0C092020u, 1);  /* 0C09201E mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092020 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C092024u, 2);  /* 0C092022 mov.w @Rm,Rn */
	IF(0x0C092024u); MACL = r13 * r6;  /* 0C092024 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092026 add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09202Au, 4);  /* 0C092028 mov.w @(disp,pc),Rn */
	IF(0x0C09202Au); r10 = MACL;  /* 0C09202A sts macl,Rn */
	r10 += r0;  /* 0C09202C add Rm,Rn */
	r0 = r9;  /* 0C09202E mov Rm,Rn */
	IF(0x0C092030u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C092032u, 4);  /* 0C092030 mov.b @(r0,Rm),Rn */
	r11 = r9;  /* 0C092032 mov Rm,Rn */
	r0 = R32(r9); UPD(0x0C092036u, 2);  /* 0C092034 mov.l @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092038u, 1);  /* 0C092036 mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C092038 and Rm,Rn */
	W32(r9, r0); UPD(0x0C09203Cu, 2);  /* 0C09203A mov.l Rm,@Rn */
	r7 = 0xA8u; UPD(0x0C09203Eu, 1);  /* 0C09203C mov.w @(disp,pc),Rn */
	r6 = R32(r10); UPD(0x0C092040u, 1);  /* 0C09203E mov.l @Rm,Rn */
	r11 += r7;  /* 0C092040 add Rm,Rn */
	r13 = 0x13000100u; UPD(0x0C092044u, 2);  /* 0C092042 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C092044 add Rm,Rn */
	r6 &= r13;  /* 0C092046 and Rm,Rn */
	r0 |= r6;  /* 0C092048 or Rm,Rn */
	r7 += 0x1u;  /* 0C09204A add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C09204Eu, 5);  /* 0C09204C mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C09204E add #imm,Rn */
	W32(r9, r0); UPD(0x0C092052u, 2);  /* 0C092050 mov.l Rm,@Rn */
	r5 += r4;  /* 0C092052 add Rm,Rn */
	r8 = R32(r10 + 0x38u); UPD(0x0C092056u, 2);  /* 0C092054 mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C092058u, 1);  /* 0C092056 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r8); UPD(0x0C09205Au, 1);  /* 0C092058 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09205A tst Rm,Rn */
	{ u32 c_ = T; W8(r11, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0920B0u, 4); goto L_0C0920B0; } UPD(0x0C092060u, 1); goto L_0C092060; }  /* 0C09205C bt/s */
L_0C092060: BLKS(0x0C092060u);
	T = r0 == 0x7u;  /* 0C092060 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C092090u, 4); goto L_0C092090; }  /* 0C092062 bt */
L_0C092064: BLKS(0x0C092064u);
	r3 = 0xB4u; UPD(0x0C092066u, 1);  /* 0C092064 mov.w @(disp,pc),Rn */
	IF(0x0C092066u); MACL = r12 * r3;  /* 0C092066 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09206Au, 3);  /* 0C092068 mov.l @(disp,pc),Rn */
	IF(0x0C09206Au); r3 = MACL;  /* 0C09206A sts macl,Rn */
	r9 = 0x99u; UPD(0x0C09206Eu, 2);  /* 0C09206C mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09206E add Rm,Rn */
	r9 += r3;  /* 0C092070 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C092074u, 3);  /* 0C092072 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C092074 add #imm,Rn */
	W8(r9, r0); UPD(0x0C092078u, 2);  /* 0C092076 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C092078 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09207A tst Rm,Rn */
	if (!T) { UPD(0x0C0920A0u, 5); goto L_0C0920A0; }  /* 0C09207C bf */
L_0C09207E: BLKS(0x0C09207Eu);
	r7 = R32(r3 + 0xCu); UPD(0x0C092080u, 1);  /* 0C09207E mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C092082u, 1);  /* 0C092080 mov.w @(disp,pc),Rn */
	IF(0x0C092082u); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C092084u, 1);  /* 0C092082 mov.w @(r0,Rm),Rn */
	r7 += r8;  /* 0C092084 add Rm,Rn */
	W32(r3 + 0xCu, r7); UPD(0x0C092088u, 2);  /* 0C092086 mov.l Rm,@(disp,Rn) */
L_0C092088: BLKS(0x0C092088u);
	r1 = 0xC0A8AE0u; UPD(0x0C09208Au, 1);  /* 0C092088 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C091AC0u, 3); goto L_0C091AC0; }  /* 0C09208A bra */
L_0C092090: BLKS(0x0C092090u);
	r1 = 0x6u;  /* 0C092090 mov #imm,Rn */
	UPD(0x0C092092u, 1);
L_0C092092: BLKS(0x0C092092u);
	r0 = 0xC0A8AE0u; UPD(0x0C092094u, 1);  /* 0C092092 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C092094 mov Rm,Rn */
	IF(0x0C092096u); { u32 t_ = r0; PR = 0x0C09209Au; W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09209Au); }  /* 0C092096 jsr @Rn */
L_0C09209A: BLKS(0x0C09209Au);
	r0 = 0x88u; UPD(0x0C09209Cu, 1);  /* 0C09209A mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09209C mov #imm,Rn */
	IF(0x0C09209Eu); W16(r0 + r9, r6); UPD(0x0C0920A0u, 2);  /* 0C09209E mov.w Rm,@(r0,Rn) */
L_0C0920A0: BLKS(0x0C0920A0u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0920A0 bra */
L_0C0920B0: BLKS(0x0C0920B0u);
	r4 = r12;  /* 0C0920B0 mov Rm,Rn */
	UPD(0x0C0920B2u, 1);
L_0C0920B2: BLKS(0x0C0920B2u);
	r12 = 0xC0A8AE0u; UPD(0x0C0920B4u, 1);  /* 0C0920B2 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0920B4 mov #imm,Rn */
	IF(0x0C0920B6u); { u32 t_ = r12; PR = 0x0C0920BAu; W32(r9 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0920BAu); }  /* 0C0920B6 jsr @Rn */
L_0C0920BA: BLKS(0x0C0920BAu);
	r0 = 0x88u; UPD(0x0C0920BCu, 1);  /* 0C0920BA mov.w @(disp,pc),Rn */
	IF(0x0C0920BCu); W16(r0 + r9, r13); UPD(0x0C0920BEu, 1);  /* 0C0920BC mov.w Rm,@(r0,Rn) */
L_0C0920BE: BLKS(0x0C0920BEu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0920BE bra */
L_0C0920E0: BLKS(0x0C0920E0u);
	r10 = 0xB4u; UPD(0x0C0920E2u, 1);  /* 0C0920E0 mov.w @(disp,pc),Rn */
	IF(0x0C0920E2u); MACL = r12 * r10;  /* 0C0920E2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0920E6u, 3);  /* 0C0920E4 mov.l @(disp,pc),Rn */
	IF(0x0C0920E6u); r9 = MACL;  /* 0C0920E6 sts macl,Rn */
	r9 += r11;  /* 0C0920E8 add Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C0920ECu, 3);  /* 0C0920EA mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0920EC mov Rm,Rn */
	IF(0x0C0920EEu); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0920F0u, 2);  /* 0C0920EE mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0920F0 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0920F2 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0920FCu, 5); goto L_0C0920FC; } goto L_0C0920F8; }  /* 0C0920F4 bf/s */
L_0C0920F8: BLKS(0x0C0920F8u);
	{ IF(0x0C0920FAu); ; /* slot nop */ UPD(0x0C092210u, 4); goto L_0C092210; }  /* 0C0920F8 bra */
L_0C0920FC: BLKS(0x0C0920FCu);
	if (!T) { UPD(0x0C0920BEu, 3); goto L_0C0920BE; }  /* 0C0920FC bf */
L_0C0920FE: BLKS(0x0C0920FEu);
	r2 = 0x99u; UPD(0x0C092100u, 1);  /* 0C0920FE mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C092100 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C092104u, 2);  /* 0C092102 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C092104 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092182u, 4); goto L_0C092182; } goto L_0C09210A; }  /* 0C092106 bt/s */
L_0C09210A: BLKS(0x0C09210Au);
	r8 = 0xC069BF0u; UPD(0x0C09210Cu, 2);  /* 0C09210A mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C09210C add #imm,Rn */
	W8(r2, r7); UPD(0x0C092110u, 2);  /* 0C09210E mov.b Rm,@Rn */
	IF(0x0C092110u); { u32 t_ = r8; PR = 0x0C092114u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C092114u); }  /* 0C092110 jsr @Rn */
L_0C092114: BLKS(0x0C092114u);
	r5 = 0x2A0u; UPD(0x0C092116u, 1);  /* 0C092114 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C092116 exts.w Rm,Rn */
	IF(0x0C092118u); MACL = r4 * r5;  /* 0C092118 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C09211Cu, 4);  /* 0C09211A mov.l @(disp,pc),Rn */
	IF(0x0C09211Cu); r0 = MACL;  /* 0C09211C sts macl,Rn */
	r13 = 0xC068E60u; UPD(0x0C092120u, 2);  /* 0C09211E mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C092120 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C092124u, 2);  /* 0C092122 mov.w @(disp,pc),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C092126u, 1);  /* 0C092124 mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C092126 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09212Au, 2);  /* 0C092128 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09212Cu, 1);  /* 0C09212A mov.l @(disp,Rm),Rn */
	IF(0x0C09212Cu); { u32 t_ = r13; PR = 0x0C092130u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C092130u); }  /* 0C09212C jsr @Rn */
L_0C092130: BLKS(0x0C092130u);
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C092132u, 1);  /* 0C092130 mov.w @Rm,Rn */
	r3 = r6;  /* 0C092132 mov Rm,Rn */
	r3 -= r0;  /* 0C092134 sub Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C092138u, 3);  /* 0C092136 mov.w @(disp,pc),Rn */
	r11 = 0x1FFu; UPD(0x0C09213Au, 1);  /* 0C092138 mov.w @(disp,pc),Rn */
	IF(0x0C09213Au); r2 = R32(r0 + r9); UPD(0x0C09213Cu, 1);  /* 0C09213A mov.l @(r0,Rm),Rn */
	r10 = 0x27FFFu; UPD(0x0C09213Eu, 1);  /* 0C09213C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C09213E cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 &= r11; /* slot and Rm,Rn */ if (c_) { UPD(0x0C09214Au, 4); goto L_0C09214A; } goto L_0C092144; }  /* 0C092140 bt/s */
L_0C092144: BLKS(0x0C092144u);
	r10 = 0x1000u; UPD(0x0C092146u, 2);  /* 0C092144 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C092146 add Rm,Rn */
	IF(0x0C092148u); W32(r0 + r9, r2); UPD(0x0C09214Au, 2);  /* 0C092148 mov.l Rm,@(r0,Rn) */
L_0C09214A: BLKS(0x0C09214Au);
	T = (r3 & r3) == 0;  /* 0C09214A tst Rm,Rn */
	if (T) { UPD(0x0C092182u, 4); goto L_0C092182; }  /* 0C09214C bt */
L_0C09214E: BLKS(0x0C09214Eu);
	r9 = 0x100u; UPD(0x0C092150u, 1);  /* 0C09214E mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r9;  /* 0C092150 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092200u, 4); goto L_0C092200; } goto L_0C092156; }  /* 0C092152 bf/s */
L_0C092156: BLKS(0x0C092156u);
	r1 = r6;  /* 0C092156 mov Rm,Rn */
	r1 += 0x2u;  /* 0C092158 add #imm,Rn */
	UPD(0x0C09215Au, 3);
L_0C09215A: BLKS(0x0C09215Au);
	r6 = 0xB4u; UPD(0x0C09215Cu, 1);  /* 0C09215A mov.w @(disp,pc),Rn */
	IF(0x0C09215Cu); MACL = r12 * r6;  /* 0C09215C mul.l Rm,Rn */
	W16(r8, r1); UPD(0x0C092160u, 3);  /* 0C09215E mov.w Rm,@Rn */
	r3 = 0xC286578u; UPD(0x0C092162u, 1);  /* 0C092160 mov.l @(disp,pc),Rn */
	IF(0x0C092162u); r11 = MACL;  /* 0C092162 sts macl,Rn */
	r8 = 0x86u; UPD(0x0C092166u, 2);  /* 0C092164 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C092166 add Rm,Rn */
	r10 = 0x8Cu; UPD(0x0C09216Au, 2);  /* 0C092168 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C09216A add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C09216Eu, 2);  /* 0C09216C mov.l @(disp,pc),Rn */
	r10 += r11;  /* 0C09216E add Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C092172u, 2);  /* 0C092170 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C092174u, 1);  /* 0C092172 mov.w @Rm,Rn */
	IF(0x0C092174u); { u32 t_ = r9; PR = 0x0C092178u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092178u); }  /* 0C092174 jsr @Rn */
L_0C092178: BLKS(0x0C092178u);
	W32(r11 + 0x2Cu, r0); UPD(0x0C09217Au, 1);  /* 0C092178 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C09217Cu, 1);  /* 0C09217A mov.w @Rm,Rn */
	IF(0x0C09217Cu); { u32 t_ = r13; PR = 0x0C092180u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092180u); }  /* 0C09217C jsr @Rn */
L_0C092180: BLKS(0x0C092180u);
	W32(r11 + 0x30u, r0); UPD(0x0C092182u, 1);  /* 0C092180 mov.l Rm,@(disp,Rn) */
L_0C092182: BLKS(0x0C092182u);
	r7 = 0xB4u; UPD(0x0C092184u, 1);  /* 0C092182 mov.w @(disp,pc),Rn */
	IF(0x0C092184u); MACL = r12 * r7;  /* 0C092184 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C092188u, 3);  /* 0C092186 mov.l @(disp,pc),Rn */
	IF(0x0C092188u); r3 = MACL;  /* 0C092188 sts macl,Rn */
	r3 += r4;  /* 0C09218A add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C09218Eu, 3);  /* 0C09218C mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C092190u, 1);  /* 0C09218E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C092192u, 1);  /* 0C092190 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C092194u, 1);  /* 0C092192 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C092194 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C092198u, 2);  /* 0C092196 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C092198 add Rm,Rn */
	r7 += r0;  /* 0C09219A add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C09219Eu, 3);  /* 0C09219C mov.l Rm,@(disp,Rn) */
	IF(0x0C09219Eu); T = (s32)r7 >= 0;  /* 0C09219E cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0921F0u, 4); goto L_0C0921F0; } UPD(0x0C0921A4u, 1); goto L_0C0921A4; }  /* 0C0921A0 bf/s */
L_0C0921A4: BLKS(0x0C0921A4u);
	r11 = 0xAC0000u; UPD(0x0C0921A6u, 1);  /* 0C0921A4 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r11;  /* 0C0921A6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0921C0u, 4); goto L_0C0921C0; }  /* 0C0921A8 bt */
L_0C0921AA: BLKS(0x0C0921AAu);
	r2 = r6;  /* 0C0921AA mov Rm,Rn */
	r8 = 0xC3C4048u; UPD(0x0C0921AEu, 2);  /* 0C0921AC mov.l @(disp,pc),Rn */
	r10 = R32(r8); UPD(0x0C0921B0u, 1);  /* 0C0921AE mov.l @Rm,Rn */
	r13 = 0xFF880000u; UPD(0x0C0921B2u, 1);  /* 0C0921B0 mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C0921B2 sub Rm,Rn */
	r2 += r13;  /* 0C0921B4 add Rm,Rn */
	IF(0x0C0921B6u); T = (s32)r2 >= 0;  /* 0C0921B6 cmp/pz Rn */
	if (!T) { UPD(0x0C0921E0u, 6); goto L_0C0921E0; }  /* 0C0921B8 bf */
L_0C0921BA: BLKS(0x0C0921BAu);
	r9 = 0x840000u; UPD(0x0C0921BCu, 1);  /* 0C0921BA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C0921BC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0921D0u, 4); goto L_0C0921D0; }  /* 0C0921BE bf */
L_0C0921C0: BLKS(0x0C0921C0u);
	r12 = 0x0u;  /* 0C0921C0 mov #imm,Rn */
	{ W32(r3, r12); /* slot mov.l Rm,@Rn */ UPD(0x0C091B10u, 4); goto L_0C091B10; }  /* 0C0921C2 bra */
L_0C0921D0: BLKS(0x0C0921D0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0921D2u, 1);  /* 0C0921D0 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C0921D2 add #imm,Rn */
	r0 &= 0x7u;  /* 0C0921D4 and #imm,r0 */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C092088u, 5); goto L_0C092088; }  /* 0C0921D6 bra */
L_0C0921E0: BLKS(0x0C0921E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0921BAu, 3); goto L_0C0921BA; }  /* 0C0921E0 bra */
L_0C0921F0: BLKS(0x0C0921F0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0921A4u, 3); goto L_0C0921A4; }  /* 0C0921F0 bra */
L_0C092200: BLKS(0x0C092200u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C09215Au, 3); goto L_0C09215A; }  /* 0C092200 bra */
L_0C092210: BLKS(0x0C092210u);
	r13 = 0xC0A8CA0u; UPD(0x0C092212u, 1);  /* 0C092210 mov.l @(disp,pc),Rn */
	IF(0x0C092212u); { u32 t_ = r13; PR = 0x0C092216u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092216u); }  /* 0C092212 jsr @Rn */
L_0C092216: BLKS(0x0C092216u);
	IF(0x0C092216u); T = (s32)r0 >= 0;  /* 0C092216 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C09221Au); MACL = r0 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0922DCu, 5); goto L_0C0922DC; } goto L_0C09221C; }  /* 0C092218 bf/s */
L_0C09221C: BLKS(0x0C09221Cu);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C09221Eu, 3);  /* 0C09221C mov.l @(disp,Rm),Rn */
	IF(0x0C09221Eu); r7 = MACL;  /* 0C09221E sts macl,Rn */
	r7 += r11;  /* 0C092220 add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C092224u, 3);  /* 0C092222 mov.l @(disp,Rm),Rn */
	r8 = R32(r7 + 0x28u); UPD(0x0C092226u, 1);  /* 0C092224 mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C092226 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09222Au, 2);  /* 0C092228 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C09222A add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C09222Eu, 2);  /* 0C09222C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r8); UPD(0x0C092230u, 1);  /* 0C09222E mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092230 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C092234u, 2);  /* 0C092232 mov.w @Rm,Rn */
	IF(0x0C092234u); MACL = r13 * r10;  /* 0C092234 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092236 add #imm,Rn */
	r0 = 0xA8u; UPD(0x0C09223Au, 4);  /* 0C092238 mov.w @(disp,pc),Rn */
	IF(0x0C09223Au); r8 = MACL;  /* 0C09223A sts macl,Rn */
	r7 = r9;  /* 0C09223C mov Rm,Rn */
	r8 += r11;  /* 0C09223E add Rm,Rn */
	r7 += r0;  /* 0C092240 add Rm,Rn */
	r0 += r8;  /* 0C092242 add Rm,Rn */
	r0 += 0x1u;  /* 0C092244 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C092248u, 7);  /* 0C092246 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C092248 add #imm,Rn */
	r10 = R32(r9); UPD(0x0C09224Cu, 2);  /* 0C09224A mov.l @Rm,Rn */
	r0 = r9;  /* 0C09224C mov Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092250u, 2);  /* 0C09224E mov.l @(disp,pc),Rn */
	r5 = 0xAFu; UPD(0x0C092252u, 1);  /* 0C092250 mov.w @(disp,pc),Rn */
	r10 &= r2;  /* 0C092252 and Rm,Rn */
	W32(r9, r10); UPD(0x0C092256u, 2);  /* 0C092254 mov.l Rm,@Rn */
	IF(0x0C092256u); r6 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C092258u, 1);  /* 0C092256 mov.b @(r0,Rm),Rn */
	r11 = R32(r8); UPD(0x0C09225Au, 1);  /* 0C092258 mov.l @Rm,Rn */
	r3 += r6;  /* 0C09225A add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C09225Eu, 2);  /* 0C09225C mov.l @(disp,Rm),Rn */
	r1 = 0x13000100u; UPD(0x0C092260u, 1);  /* 0C09225E mov.l @(disp,pc),Rn */
	r0 += 0x3u;  /* 0C092260 add #imm,Rn */
	r4 = R32(r8 + 0x38u); UPD(0x0C092264u, 2);  /* 0C092262 mov.l @(disp,Rm),Rn */
	r11 &= r1;  /* 0C092264 and Rm,Rn */
	r10 |= r11;  /* 0C092266 or Rm,Rn */
	r0 &= 0x7u;  /* 0C092268 and #imm,r0 */
	W32(r9 + 0x38u, r4); UPD(0x0C09226Cu, 4);  /* 0C09226A mov.l Rm,@(disp,Rn) */
	W8(r7, r3); UPD(0x0C09226Eu, 1);  /* 0C09226C mov.b Rm,@Rn */
	W32(r9, r10); UPD(0x0C092270u, 1);  /* 0C09226E mov.l Rm,@Rn */
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C092088u, 3); goto L_0C092088; }  /* 0C092270 bra */
L_0C0922D0: BLKS(0x0C0922D0u);
	r13 = 0xC0A8CA0u; UPD(0x0C0922D2u, 1);  /* 0C0922D0 mov.l @(disp,pc),Rn */
	IF(0x0C0922D2u); { u32 t_ = r13; PR = 0x0C0922D6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0922D6u); }  /* 0C0922D2 jsr @Rn */
L_0C0922D6: BLKS(0x0C0922D6u);
	IF(0x0C0922D6u); T = (s32)r0 >= 0;  /* 0C0922D6 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0922E0u, 4); goto L_0C0922E0; } UPD(0x0C0922DCu, 1); goto L_0C0922DC; }  /* 0C0922D8 bt/s */
L_0C0922DC: BLKS(0x0C0922DCu);
	{ IF(0x0C0922DEu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C0922DC bra */
L_0C0922E0: BLKS(0x0C0922E0u);
	r9 = 0xB4u; UPD(0x0C0922E2u, 1);  /* 0C0922E0 mov.w @(disp,pc),Rn */
	IF(0x0C0922E2u); MACL = r12 * r9;  /* 0C0922E2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0922E6u, 3);  /* 0C0922E4 mov.l @(disp,pc),Rn */
	IF(0x0C0922E6u); r10 = MACL;  /* 0C0922E6 sts macl,Rn */
	IF(0x0C0922E8u); MACL = r0 * r9;  /* 0C0922E8 mul.l Rm,Rn */
	r10 += r13;  /* 0C0922EA add Rm,Rn */
	r1 = R32(r10 + 0x2Cu); UPD(0x0C0922EEu, 5);  /* 0C0922EC mov.l @(disp,Rm),Rn */
	IF(0x0C0922EEu); r4 = MACL;  /* 0C0922EE sts macl,Rn */
	r4 += r13;  /* 0C0922F0 add Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C0922F4u, 3);  /* 0C0922F2 mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0x28u); UPD(0x0C0922F6u, 1);  /* 0C0922F4 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0922F6 add Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C0922FAu, 2);  /* 0C0922F8 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C0922FA add Rm,Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C0922FEu, 2);  /* 0C0922FC mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r6); UPD(0x0C092300u, 1);  /* 0C0922FE mov.l Rm,@(disp,Rn) */
	r10 += 0x7Eu;  /* 0C092300 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C092304u, 2);  /* 0C092302 mov.w @Rm,Rn */
	IF(0x0C092304u); MACL = r0 * r9;  /* 0C092304 mul.l Rm,Rn */
	r10 += 0xFFFFFF82u;  /* 0C092306 add #imm,Rn */
	r7 = 0xAFu; UPD(0x0C09230Au, 4);  /* 0C092308 mov.w @(disp,pc),Rn */
	IF(0x0C09230Au); r9 = MACL;  /* 0C09230A sts macl,Rn */
	r9 += r13;  /* 0C09230C add Rm,Rn */
	r0 = r10;  /* 0C09230E mov Rm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C092312u, 4);  /* 0C092310 mov.l @(disp,Rm),Rn */
	IF(0x0C092312u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C092314u, 1);  /* 0C092312 mov.b @(r0,Rm),Rn */
	W32(r10 + 0x38u, r11); UPD(0x0C092316u, 1);  /* 0C092314 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10); UPD(0x0C092318u, 1);  /* 0C092316 mov.l @Rm,Rn */
	r11 = r10;  /* 0C092318 mov Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C09231Cu, 2);  /* 0C09231A mov.l @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C09231Eu, 1);  /* 0C09231C mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C09231E and Rm,Rn */
	W32(r10, r0); UPD(0x0C092322u, 2);  /* 0C092320 mov.l Rm,@Rn */
	r11 += r5;  /* 0C092322 add Rm,Rn */
	r5 += r9;  /* 0C092324 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C092328u, 3);  /* 0C092326 mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C092328 add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C09232Cu, 2);  /* 0C09232A mov.l @(disp,pc),Rn */
	r9 += 0x3Cu;  /* 0C09232C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C092330u, 2);  /* 0C09232E mov.b @Rm,Rn */
	r3 &= r1;  /* 0C092330 and Rm,Rn */
	r11 += 0x1u;  /* 0C092332 add #imm,Rn */
	r6 += r4;  /* 0C092334 add Rm,Rn */
	r0 |= r3;  /* 0C092336 or Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C09233Au, 5);  /* 0C092338 mov.w @Rm,Rn */
	W8(r11, r6); UPD(0x0C09233Cu, 1);  /* 0C09233A mov.b Rm,@Rn */
	T = (r7 & r7) == 0;  /* 0C09233C tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0923A0u, 4); goto L_0C0923A0; } UPD(0x0C092342u, 1); goto L_0C092342; }  /* 0C09233E bf/s */
L_0C092342: BLKS(0x0C092342u);
	r0 = 0x98u; UPD(0x0C092344u, 1);  /* 0C092342 mov.w @(disp,pc),Rn */
	r12 = 0x2u;  /* 0C092344 mov #imm,Rn */
	IF(0x0C092346u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C092348u, 2);  /* 0C092346 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C092348 add #imm,Rn */
	r8 = r2 & 0xFF;  /* 0C09234A extu.b Rm,Rn */
	T = r8 > r12;  /* 0C09234C cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C092350u); W8(r0 + r10, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C092420u, 6); goto L_0C092420; } UPD(0x0C092352u, 1); goto L_0C092352; }  /* 0C09234E bf/s */
L_0C092352: BLKS(0x0C092352u);
	r13 = 0xC0C2360u; UPD(0x0C092354u, 1);  /* 0C092352 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C092354 add #imm,Rn */
	IF(0x0C092356u); { u32 t_ = r13; PR = 0x0C09235Au; IF(0x0C092358u); W8(r0 + r10, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09235Au); }  /* 0C092356 jsr @Rn */
L_0C09235A: BLKS(0x0C09235Au);
	r12 = 0xC1B7610u; UPD(0x0C09235Cu, 1);  /* 0C09235A mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09235C and #imm,r0 */
	IF(0x0C09235Eu); r0 <<= 2;  /* 0C09235E shll2 Rn */
	r12 += r0;  /* 0C092360 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092364u, 4);  /* 0C092362 mov.w @(disp,pc),Rn */
	IF(0x0C092364u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C092366u, 1);  /* 0C092364 mov.b @(r0,Rm),Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C092368u, 1);  /* 0C092366 mov.l @(disp,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C092368 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C09236Cu, 2);  /* 0C09236A mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C09236Eu, 1);  /* 0C09236C mov.b @Rm,Rn */
	r9 = 0xC062780u; UPD(0x0C092370u, 1);  /* 0C09236E mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C092370 extu.b Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C092374u, 2);  /* 0C092372 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C092374 add #imm,Rn */
	r11 = 0xFFFFF800u; UPD(0x0C092378u, 2);  /* 0C092376 mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09237Au, 1);  /* 0C092378 mov.l Rm,@(disp,Rn) */
	r4 = 0x1000u; UPD(0x0C09237Cu, 1);  /* 0C09237A mov.w @(disp,pc),Rn */
	IF(0x0C09237Cu); { u32 t_ = r9; PR = 0x0C092380u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C092380u); }  /* 0C09237C jsr @Rn */
L_0C092380: BLKS(0x0C092380u);
	r5 = 0x4u;  /* 0C092380 mov #imm,Rn */
	r0 += r11;  /* 0C092382 add Rm,Rn */
	IF(0x0C092384u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C092384 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C092388u, 4);  /* 0C092386 mov.l Rm,@(disp,Rn) */
	r8 = 0x100000u; UPD(0x0C09238Au, 1);  /* 0C092388 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C09238Cu, 1);  /* 0C09238A mov.l @Rm,Rn */
	r13 += r8;  /* 0C09238C add Rm,Rn */
	r5 = R32(r12); UPD(0x0C092390u, 2);  /* 0C09238E mov.l @Rm,Rn */
	r6 = r13;  /* 0C092390 mov Rm,Rn */
	{ r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C091B96u, 4); goto L_0C091B96; }  /* 0C092392 bra */
L_0C0923A0: BLKS(0x0C0923A0u);
	r11 = 0x9Fu; UPD(0x0C0923A2u, 1);  /* 0C0923A0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0923A2 mov Rm,Rn */
	IF(0x0C0923A4u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0923A6u, 2);  /* 0C0923A4 mov.b @(r0,Rm),Rn */
	r2 = 0x6u;  /* 0C0923A6 mov #imm,Rn */
	r3 = r5 & 0xFF;  /* 0C0923A8 extu.b Rm,Rn */
	T = r3 > r2;  /* 0C0923AA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C092420u, 6); goto L_0C092420; }  /* 0C0923AC bt */
L_0C0923AE: BLKS(0x0C0923AEu);
	r0 = 0xC0923ECu;  /* 0C0923AE mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0923B0 add Rm,Rn */
	IF(0x0C0923B2u); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0923B4u, 3);  /* 0C0923B2 mov.w @(r0,Rm),Rn */
	IF(0x0C0923B4u); { u32 tv_ = (r9 + 0x0C0923B8u); u32 t_ = PHYS(tv_); IF(0x0C0923B6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C092400u: goto L_0C092400; case 0x0C092450u: goto L_0C092450; case 0x0C092480u: goto L_0C092480; case 0x0C0924C0u: goto L_0C0924C0; case 0x0C092510u: goto L_0C092510; case 0x0C092590u: goto L_0C092590; case 0x0C0925C0u: goto L_0C0925C0; default: JUMPD(tv_); } }  /* 0C0923B4 braf Rn */
L_0C092400: BLKS(0x0C092400u);
	r10 = 0xB4u; UPD(0x0C092402u, 1);  /* 0C092400 mov.w @(disp,pc),Rn */
	IF(0x0C092402u); MACL = r8 * r10;  /* 0C092402 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C092406u, 3);  /* 0C092404 mov.l @(disp,pc),Rn */
	IF(0x0C092406u); r0 = MACL;  /* 0C092406 sts macl,Rn */
	r3 = 0xA5u; UPD(0x0C09240Au, 2);  /* 0C092408 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C09240A add Rm,Rn */
	IF(0x0C09240Cu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09240Eu, 2);  /* 0C09240C mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C09240E tst Rm,Rn */
	if (T) { UPD(0x0C092420u, 4); goto L_0C092420; }  /* 0C092410 bt */
L_0C092412: BLKS(0x0C092412u);
	r4 = r12;  /* 0C092412 mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C092416u, 2);  /* 0C092414 mov.l @(disp,pc),Rn */
	r5 = 0x78u;  /* 0C092416 mov #imm,Rn */
	IF(0x0C092418u); { u32 t_ = r8; PR = 0x0C09241Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09241Cu); }  /* 0C092418 jsr @Rn */
L_0C09241C: BLKS(0x0C09241Cu);
	T = (r0 & r0) == 0;  /* 0C09241C tst Rm,Rn */
	if (!T) { UPD(0x0C092424u, 4); goto L_0C092424; }  /* 0C09241E bf */
L_0C092420: BLKS(0x0C092420u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C092420 bra */
L_0C092424: BLKS(0x0C092424u);
	IF(0x0C092424u); MACL = r12 * r10;  /* 0C092424 mul.l Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C092428u, 3);  /* 0C092426 mov.w @(disp,pc),Rn */
	IF(0x0C092428u); r12 = MACL;  /* 0C092428 sts macl,Rn */
	r12 += r9;  /* 0C09242A add Rm,Rn */
	r7 = R32(r12 + 0x2Cu); UPD(0x0C09242Eu, 3);  /* 0C09242C mov.l @(disp,Rm),Rn */
	r12 += 0x50u;  /* 0C09242E add #imm,Rn */
	W32(r12, r7); UPD(0x0C092432u, 2);  /* 0C092430 mov.l Rm,@Rn */
	r12 += 0xFFFFFFB0u;  /* 0C092432 add #imm,Rn */
	r12 += r4;  /* 0C092434 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C092438u, 3);  /* 0C092436 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C092438 add #imm,Rn */
	W8(r12, r0); UPD(0x0C09243Cu, 2);  /* 0C09243A mov.b Rm,@Rn */
L_0C09243C: BLKS(0x0C09243Cu);
	r1 = 0xC0C2110u; UPD(0x0C09243Eu, 1);  /* 0C09243C mov.l @(disp,pc),Rn */
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C091AC0u, 3); goto L_0C091AC0; }  /* 0C09243E bra */
L_0C092450: BLKS(0x0C092450u);
	r9 = 0xB4u; UPD(0x0C092452u, 1);  /* 0C092450 mov.w @(disp,pc),Rn */
	IF(0x0C092452u); MACL = r12 * r9;  /* 0C092452 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C092456u, 3);  /* 0C092454 mov.l @(disp,pc),Rn */
	IF(0x0C092456u); r7 = MACL;  /* 0C092456 sts macl,Rn */
	r7 += r11;  /* 0C092458 add Rm,Rn */
	r10 = R32(r7 + 0x2Cu); UPD(0x0C09245Cu, 3);  /* 0C09245A mov.l @(disp,Rm),Rn */
	r5 = 0x8000u; UPD(0x0C09245Eu, 1);  /* 0C09245C mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C09245E add Rm,Rn */
	W32(r7 + 0x2Cu, r10); UPD(0x0C092462u, 2);  /* 0C092460 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C092462 add #imm,Rn */
	r13 = R32(r7); UPD(0x0C092466u, 2);  /* 0C092464 mov.l @Rm,Rn */
	r2 = 0x100000u; UPD(0x0C092468u, 1);  /* 0C092466 mov.l @(disp,pc),Rn */
	r13 += r2;  /* 0C092468 add Rm,Rn */
	T = r10 == r13;  /* 0C09246A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C092478u, 5); goto L_0C092478; } goto L_0C092470; }  /* 0C09246C bf/s */
L_0C092470: BLKS(0x0C092470u);
	r0 = 0x9Fu; UPD(0x0C092472u, 2);  /* 0C092470 mov.w @(disp,pc),Rn */
	IF(0x0C092472u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C092474u, 1);  /* 0C092472 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C092474 add #imm,Rn */
	IF(0x0C092476u); W8(r0 + r7, r6); UPD(0x0C092478u, 2);  /* 0C092476 mov.b Rm,@(r0,Rn) */
L_0C092478: BLKS(0x0C092478u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C092478 bra */
L_0C092480: BLKS(0x0C092480u);
	r8 = 0xB4u; UPD(0x0C092482u, 1);  /* 0C092480 mov.w @(disp,pc),Rn */
	IF(0x0C092482u); MACL = r12 * r8;  /* 0C092482 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C092486u, 3);  /* 0C092484 mov.l @(disp,pc),Rn */
	IF(0x0C092486u); r8 = MACL;  /* 0C092486 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C09248Au, 2);  /* 0C092488 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09248A add Rm,Rn */
	r3 += r8;  /* 0C09248C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C092490u, 3);  /* 0C09248E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C092490 add #imm,Rn */
	W8(r3, r0); UPD(0x0C092494u, 2);  /* 0C092492 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C092494 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C092496 tst Rm,Rn */
	if (!T) { UPD(0x0C092478u, 5); goto L_0C092478; }  /* 0C092498 bf */
L_0C09249A: BLKS(0x0C09249Au);
	r4 = R32(r8 + 0xCu); UPD(0x0C09249Cu, 1);  /* 0C09249A mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09249C add #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0924A0u, 2);  /* 0C09249E mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0924A0 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C0924A4u, 2);  /* 0C0924A2 mov.l @(disp,pc),Rn */
	IF(0x0C0924A4u); { u32 t_ = r12; PR = 0x0C0924A8u; IF(0x0C0924A6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0924A8u); }  /* 0C0924A4 jsr @Rn */
L_0C0924A8: BLKS(0x0C0924A8u);
	r0 = R32(r8 + 0xCu); UPD(0x0C0924AAu, 1);  /* 0C0924A8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x8u;  /* 0C0924AA cmp/eq #imm,r0 */
	UPD(0x0C0924ACu, 1);
L_0C0924AC: BLKS(0x0C0924ACu);
	if (!T) { UPD(0x0C092478u, 3); goto L_0C092478; }  /* 0C0924AC bf */
L_0C0924AE: BLKS(0x0C0924AEu);
	r0 = 0x9Fu; UPD(0x0C0924B0u, 1);  /* 0C0924AE mov.w @(disp,pc),Rn */
	IF(0x0C0924B0u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0924B2u, 1);  /* 0C0924B0 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C0924B2 add #imm,Rn */
	{ IF(0x0C0924B6u); W8(r0 + r8, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C091B10u, 4); goto L_0C091B10; }  /* 0C0924B4 bra */
L_0C0924C0: BLKS(0x0C0924C0u);
	r10 = 0xB4u; UPD(0x0C0924C2u, 1);  /* 0C0924C0 mov.w @(disp,pc),Rn */
	IF(0x0C0924C2u); MACL = r12 * r10;  /* 0C0924C2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0924C6u, 3);  /* 0C0924C4 mov.l @(disp,pc),Rn */
	IF(0x0C0924C6u); r8 = MACL;  /* 0C0924C6 sts macl,Rn */
	r8 += r13;  /* 0C0924C8 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C0924CCu, 3);  /* 0C0924CA mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C0924CEu, 1);  /* 0C0924CC mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C0924CE tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0924E0u, 4); goto L_0C0924E0; } goto L_0C0924D4; }  /* 0C0924D0 bf/s */
L_0C0924D4: BLKS(0x0C0924D4u);
	r0 = 0x9Fu; UPD(0x0C0924D6u, 2);  /* 0C0924D4 mov.w @(disp,pc),Rn */
	IF(0x0C0924D6u); W8(r0 + r8, r2); UPD(0x0C0924D8u, 1);  /* 0C0924D6 mov.b Rm,@(r0,Rn) */
L_0C0924D8: BLKS(0x0C0924D8u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0924D8 bra */
L_0C0924E0: BLKS(0x0C0924E0u);
	r11 = 0xC0BC1B0u; UPD(0x0C0924E2u, 1);  /* 0C0924E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0924E2 mov Rm,Rn */
	r5 = 0xAu;  /* 0C0924E4 mov #imm,Rn */
	IF(0x0C0924E6u); { u32 t_ = r11; PR = 0x0C0924EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0924EAu); }  /* 0C0924E6 jsr @Rn */
L_0C0924EA: BLKS(0x0C0924EAu);
	T = (r0 & r0) == 0;  /* 0C0924EA tst Rm,Rn */
	if (T) { UPD(0x0C0924D8u, 4); goto L_0C0924D8; }  /* 0C0924EC bt */
L_0C0924EE: BLKS(0x0C0924EEu);
	r6 = 0x8u;  /* 0C0924EE mov #imm,Rn */
	r5 = 0x9Cu; UPD(0x0C0924F2u, 2);  /* 0C0924F0 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C0924F2 add Rm,Rn */
	W8(r5, r6); UPD(0x0C0924F6u, 2);  /* 0C0924F4 mov.b Rm,@Rn */
	r5 += 0x3u;  /* 0C0924F6 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r5); UPD(0x0C0924FAu, 2);  /* 0C0924F8 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0924FA add #imm,Rn */
	W8(r5, r9); UPD(0x0C0924FEu, 2);  /* 0C0924FC mov.b Rm,@Rn */
L_0C0924FE: BLKS(0x0C0924FEu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0924FE bra */
L_0C092510: BLKS(0x0C092510u);
	r3 = 0xB4u; UPD(0x0C092512u, 1);  /* 0C092510 mov.w @(disp,pc),Rn */
	IF(0x0C092512u); MACL = r12 * r3;  /* 0C092512 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C092516u, 3);  /* 0C092514 mov.l @(disp,pc),Rn */
	IF(0x0C092516u); r3 = MACL;  /* 0C092516 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C09251Au, 2);  /* 0C092518 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09251A add Rm,Rn */
	r8 += r3;  /* 0C09251C add Rm,Rn */
	r2 = r8;  /* 0C09251E mov Rm,Rn */
	r2 += 0x1u;  /* 0C092520 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C092524u, 5);  /* 0C092522 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C092524 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C092526 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C092528 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0924FEu, 6); goto L_0C0924FE; } UPD(0x0C09252Eu, 1); goto L_0C09252E; }  /* 0C09252A bf/s */
L_0C09252E: BLKS(0x0C09252Eu);
	r11 = 0x0u;  /* 0C09252E mov #imm,Rn */
	W8(r2, r11); UPD(0x0C092532u, 2);  /* 0C092530 mov.b Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C092532 add #imm,Rn */
	r10 = 0x38000u; UPD(0x0C092536u, 2);  /* 0C092534 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C092536 mov #imm,Rn */
	r13 = 0xC0BA480u; UPD(0x0C09253Au, 2);  /* 0C092538 mov.l @(disp,pc),Rn */
	W32(r15, r10); UPD(0x0C09253Cu, 1);  /* 0C09253A mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C09253Eu, 1);  /* 0C09253C mov.w @(disp,pc),Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C092540u, 1);  /* 0C09253E mov.l @(disp,Rm),Rn */
	IF(0x0C092540u); { u32 t_ = r13; PR = 0x0C092544u; r6 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C092544u); }  /* 0C092540 jsr @Rn */
L_0C092544: BLKS(0x0C092544u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C092546u, 1);  /* 0C092544 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C092546 add #imm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C092548 add #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C09254A extu.b Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C09254C tst Rm,Rn */
	{ u32 c_ = !T; W8(r8, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0924FEu, 7); goto L_0C0924FE; } UPD(0x0C092552u, 1); goto L_0C092552; }  /* 0C09254E bf/s */
L_0C092552: BLKS(0x0C092552u);
	r2 = r8;  /* 0C092552 mov Rm,Rn */
	r2 += 0x3u;  /* 0C092554 add #imm,Rn */
	UPD(0x0C092556u, 2);
L_0C092556: BLKS(0x0C092556u);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C092558u, 1);  /* 0C092556 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C092558 add #imm,Rn */
	W8(r2, r12); UPD(0x0C09255Cu, 2);  /* 0C09255A mov.b Rm,@Rn */
L_0C09255C: BLKS(0x0C09255Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C09255C bra */
L_0C092590: BLKS(0x0C092590u);
	r8 = 0xB4u; UPD(0x0C092592u, 1);  /* 0C092590 mov.w @(disp,pc),Rn */
	IF(0x0C092592u); MACL = r12 * r8;  /* 0C092592 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C092596u, 3);  /* 0C092594 mov.l @(disp,pc),Rn */
	IF(0x0C092596u); r8 = MACL;  /* 0C092596 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09259Au, 2);  /* 0C092598 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09259A add Rm,Rn */
	r2 += r8;  /* 0C09259C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0925A0u, 3);  /* 0C09259E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0925A0 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0925A4u, 2);  /* 0C0925A2 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0925A4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0925A6 tst Rm,Rn */
	if (!T) { UPD(0x0C09255Cu, 5); goto L_0C09255C; }  /* 0C0925A8 bf */
L_0C0925AA: BLKS(0x0C0925AAu);
	r0 = R32(r8 + 0xCu); UPD(0x0C0925ACu, 1);  /* 0C0925AA mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0925AC mov Rm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C0925B0u, 2);  /* 0C0925AE mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0925B0 add #imm,Rn */
	IF(0x0C0925B2u); { u32 t_ = r6; PR = 0x0C0925B6u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0925B6u); }  /* 0C0925B2 jsr @Rn */
L_0C0925B6: BLKS(0x0C0925B6u);
	r9 = R32(r8 + 0xCu); UPD(0x0C0925B8u, 1);  /* 0C0925B6 mov.l @(disp,Rm),Rn */
	{ T = (r9 & r9) == 0; /* slot tst Rm,Rn */ UPD(0x0C0924ACu, 3); goto L_0C0924AC; }  /* 0C0925B8 bra */
L_0C0925C0: BLKS(0x0C0925C0u);
	r3 = 0xB4u; UPD(0x0C0925C2u, 1);  /* 0C0925C0 mov.w @(disp,pc),Rn */
	IF(0x0C0925C2u); MACL = r12 * r3;  /* 0C0925C2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0925C6u, 3);  /* 0C0925C4 mov.l @(disp,pc),Rn */
	IF(0x0C0925C6u); r0 = MACL;  /* 0C0925C6 sts macl,Rn */
	r0 += r7;  /* 0C0925C8 add Rm,Rn */
	r13 = R32(r0 + 0x2Cu); UPD(0x0C0925CCu, 3);  /* 0C0925CA mov.l @(disp,Rm),Rn */
	r1 = 0xFFFF8000u; UPD(0x0C0925CEu, 1);  /* 0C0925CC mov.w @(disp,pc),Rn */
	r13 += r1;  /* 0C0925CE add Rm,Rn */
	W32(r0 + 0x2Cu, r13); UPD(0x0C0925D2u, 2);  /* 0C0925D0 mov.l Rm,@(disp,Rn) */
	r0 += 0x50u;  /* 0C0925D2 add #imm,Rn */
	r4 = R32(r0); UPD(0x0C0925D6u, 2);  /* 0C0925D4 mov.l @Rm,Rn */
	T = r13 == r4;  /* 0C0925D6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09255Cu, 4); goto L_0C09255C; } goto L_0C0925DC; }  /* 0C0925D8 bf/s */
L_0C0925DC: BLKS(0x0C0925DCu);
	IF(0x0C0925DCu); MACL = r8 * r3;  /* 0C0925DC mul.l Rm,Rn */
	r5 = 0x9Fu; UPD(0x0C0925E0u, 4);  /* 0C0925DE mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0925E0 mov #imm,Rn */
	r2 = 0xA0u; UPD(0x0C0925E4u, 2);  /* 0C0925E2 mov.w @(disp,pc),Rn */
	IF(0x0C0925E4u); r10 = MACL;  /* 0C0925E4 sts macl,Rn */
	IF(0x0C0925E6u); W8(r0 + r5, r9); UPD(0x0C0925E8u, 2);  /* 0C0925E6 mov.b Rm,@(r0,Rn) */
	r10 += r7;  /* 0C0925E8 add Rm,Rn */
	r0 += r2;  /* 0C0925EA add Rm,Rn */
	r10 += r2;  /* 0C0925EC add Rm,Rn */
	r0 += 0x1u;  /* 0C0925EE add #imm,Rn */
	r10 += 0x1u;  /* 0C0925F0 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0925F4u, 6);  /* 0C0925F2 mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0925F6u, 1);  /* 0C0925F4 mov.b @Rm,Rn */
	r3 = ~r11;  /* 0C0925F6 not Rm,Rn */
	r3 &= r7;  /* 0C0925F8 and Rm,Rn */
	W8(r10, r3); UPD(0x0C0925FCu, 3);  /* 0C0925FA mov.b Rm,@Rn */
L_0C0925FC: BLKS(0x0C0925FCu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0925FC bra */
L_0C092600: BLKS(0x0C092600u);
	r8 = 0xC0A8D30u; UPD(0x0C092602u, 1);  /* 0C092600 mov.l @(disp,pc),Rn */
	IF(0x0C092602u); { u32 t_ = r8; PR = 0x0C092606u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C092606u); }  /* 0C092602 jsr @Rn */
L_0C092606: BLKS(0x0C092606u);
	IF(0x0C092606u); T = (s32)r0 >= 0;  /* 0C092606 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092610u, 4); goto L_0C092610; } goto L_0C09260C; }  /* 0C092608 bt/s */
L_0C09260C: BLKS(0x0C09260Cu);
	{ IF(0x0C09260Eu); ; /* slot nop */ UPD(0x0C091D90u, 4); goto L_0C091D90; }  /* 0C09260C bra */
L_0C092610: BLKS(0x0C092610u);
	r6 = 0xB4u; UPD(0x0C092612u, 1);  /* 0C092610 mov.w @(disp,pc),Rn */
	IF(0x0C092612u); MACL = r12 * r6;  /* 0C092612 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C092616u, 3);  /* 0C092614 mov.l @(disp,pc),Rn */
	IF(0x0C092616u); r9 = MACL;  /* 0C092616 sts macl,Rn */
	IF(0x0C092618u); MACL = r8 * r6;  /* 0C092618 mul.l Rm,Rn */
	r9 += r0;  /* 0C09261A add Rm,Rn */
	r3 = R32(r9 + 0x2Cu); UPD(0x0C09261Eu, 5);  /* 0C09261C mov.l @(disp,Rm),Rn */
	IF(0x0C09261Eu); r10 = MACL;  /* 0C09261E sts macl,Rn */
	r10 += r0;  /* 0C092620 add Rm,Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C092624u, 3);  /* 0C092622 mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x28u); UPD(0x0C092626u, 1);  /* 0C092624 mov.l @(disp,Rm),Rn */
	r7 += r3;  /* 0C092626 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09262Au, 2);  /* 0C092628 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C09262A add Rm,Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C09262Eu, 2);  /* 0C09262C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r13); UPD(0x0C092630u, 1);  /* 0C09262E mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092630 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C092634u, 2);  /* 0C092632 mov.w @Rm,Rn */
	IF(0x0C092634u); MACL = r4 * r6;  /* 0C092634 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092636 add #imm,Rn */
	r10 = 0xECFFFEFFu; UPD(0x0C09263Au, 4);  /* 0C092638 mov.l @(disp,pc),Rn */
	IF(0x0C09263Au); r13 = MACL;  /* 0C09263A sts macl,Rn */
	r6 = R32(r9); UPD(0x0C09263Eu, 2);  /* 0C09263C mov.l @Rm,Rn */
	r13 += r0;  /* 0C09263E add Rm,Rn */
	r5 = 0xAFu; UPD(0x0C092642u, 2);  /* 0C092640 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C092642 mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C092646u, 2);  /* 0C092644 mov.w @(disp,pc),Rn */
	r6 &= r10;  /* 0C092646 and Rm,Rn */
	W32(r9, r6); UPD(0x0C09264Au, 2);  /* 0C092648 mov.l Rm,@Rn */
	r7 = r9;  /* 0C09264A mov Rm,Rn */
	IF(0x0C09264Cu); r11 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09264Eu, 2);  /* 0C09264C mov.b @(r0,Rm),Rn */
	r7 += r2;  /* 0C09264E add Rm,Rn */
	r0 = R32(r13); UPD(0x0C092652u, 2);  /* 0C092650 mov.l @Rm,Rn */
	r2 += r13;  /* 0C092652 add Rm,Rn */
	r4 = 0x13000100u; UPD(0x0C092656u, 2);  /* 0C092654 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C092656 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09265Au, 2);  /* 0C092658 mov.b @Rm,Rn */
	r0 &= r4;  /* 0C09265A and Rm,Rn */
	r6 |= r0;  /* 0C09265C or Rm,Rn */
	r8 = R32(r13 + 0x38u); UPD(0x0C092660u, 3);  /* 0C09265E mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C092660 add #imm,Rn */
	r3 += r11;  /* 0C092662 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C092666u, 3);  /* 0C092664 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r8); UPD(0x0C092668u, 1);  /* 0C092666 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C092668 tst Rm,Rn */
	W8(r7, r3); UPD(0x0C09266Cu, 2);  /* 0C09266A mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r9, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0926F0u, 3); goto L_0C0926F0; } UPD(0x0C092670u, 1); goto L_0C092670; }  /* 0C09266C bt/s */
L_0C092670: BLKS(0x0C092670u);
	T = r0 == 0xFu;  /* 0C092670 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C092678u, 4); goto L_0C092678; }  /* 0C092672 bt */
L_0C092674: BLKS(0x0C092674u);
	{ IF(0x0C092676u); ; /* slot nop */ UPD(0x0C092064u, 3); goto L_0C092064; }  /* 0C092674 bra */
L_0C092678: BLKS(0x0C092678u);
	r4 = r12;  /* 0C092678 mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09267Cu, 2);  /* 0C09267A mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C09267C mov #imm,Rn */
	IF(0x0C09267Eu); { u32 t_ = r12; PR = 0x0C092682u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092682u); }  /* 0C09267E jsr @Rn */
L_0C092682: BLKS(0x0C092682u);
	T = (r0 & r0) == 0;  /* 0C092682 tst Rm,Rn */
	if (T) { UPD(0x0C0925FCu, 4); goto L_0C0925FC; }  /* 0C092684 bt */
L_0C092686: BLKS(0x0C092686u);
	r13 = 0x0u;  /* 0C092686 mov #imm,Rn */
	r12 = 0xC1B7618u; UPD(0x0C09268Au, 2);  /* 0C092688 mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C09268A mov Rm,Rn */
	UPD(0x0C09268Cu, 1);
L_0C09268C: BLKS(0x0C09268Cu);
	r8 = 0xC062780u; UPD(0x0C09268Eu, 1);  /* 0C09268C mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C09268E mov Rm,Rn */
	r3 = 0xC1B762Cu; UPD(0x0C092692u, 2);  /* 0C092690 mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C092692 add Rm,Rn */
	r9 = 0x55555556u; UPD(0x0C092696u, 2);  /* 0C092694 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C092696 add Rm,Rn */
	IF(0x0C092698u); { u32 t_ = r8; PR = 0x0C09269Cu; r4 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09269Cu); }  /* 0C092698 jsr @Rn */
L_0C09269C: BLKS(0x0C09269Cu);
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C09269Eu, 1);  /* 0C09269C mov.w @Rm,Rn */
	{ s64 r_ = (s64)(s32)r13 * (s64)(s32)r9; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09269E dmuls.l Rm,Rn */
	r5 = r13;  /* 0C0926A0 mov Rm,Rn */
	r0 += r2;  /* 0C0926A2 add Rm,Rn */
	IF(0x0C0926A4u); T = r5 >> 31; r5 <<= 1;  /* 0C0926A4 shll Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C0926A6 subc Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C0926A8 add #imm,Rn */
	IF(0x0C0926AAu); r11 = MACH;  /* 0C0926AA sts mach,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0926AC exts.w Rm,Rn */
	r11 -= r5;  /* 0C0926AE sub Rm,Rn */
	r0 = (u32)(s32)(s16)r11;  /* 0C0926B0 exts.w Rm,Rn */
	IF(0x0C0926B2u); r0 <<= 2;  /* 0C0926B2 shll2 Rn */
	IF(0x0C0926B4u); r6 = R32(r0 + r12); UPD(0x0C0926B6u, 13);  /* 0C0926B4 mov.l @(r0,Rm),Rn */
	r7 = 0x1u;  /* 0C0926B6 mov #imm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0926BAu, 2);  /* 0C0926B8 mov.l @(disp,Rm),Rn */
	r7 &= r13;  /* 0C0926BA and Rm,Rn */
	r0 = 0xC1B7624u; UPD(0x0C0926BEu, 2);  /* 0C0926BC mov.l @(disp,pc),Rn */
	IF(0x0C0926BEu); r7 <<= 2;  /* 0C0926BE shll2 Rn */
	IF(0x0C0926C0u); r4 = R32(r0 + r7); UPD(0x0C0926C2u, 2);  /* 0C0926C0 mov.l @(r0,Rm),Rn */
	r5 += r6;  /* 0C0926C2 add Rm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0926C6u, 2);  /* 0C0926C4 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0926C6 add #imm,Rn */
	r8 = 0xC0BB1A0u; UPD(0x0C0926CAu, 2);  /* 0C0926C8 mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C0926CA add Rm,Rn */
	r0 = 0x28000u; UPD(0x0C0926CEu, 2);  /* 0C0926CC mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C0926CE mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0926D2u, 2);  /* 0C0926D0 mov.l Rm,@Rn */
	IF(0x0C0926D2u); { u32 t_ = r8; PR = 0x0C0926D6u; r7 = r3; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0926D6u); }  /* 0C0926D2 jsr @Rn */
L_0C0926D6: BLKS(0x0C0926D6u);
	r2 = r13;  /* 0C0926D6 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0926D8 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C0926DA exts.w Rm,Rn */
	r9 = 0x5u;  /* 0C0926DC mov #imm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C0926DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09268Cu, 8); goto L_0C09268C; } UPD(0x0C0926E4u, 1); goto L_0C0926E4; }  /* 0C0926E0 bf/s */
L_0C0926E4: BLKS(0x0C0926E4u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C0926E4 bra */
L_0C0926F0: BLKS(0x0C0926F0u);
	r5 = 0xA5u; UPD(0x0C0926F2u, 1);  /* 0C0926F0 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0926F2 mov Rm,Rn */
	IF(0x0C0926F4u); r11 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0926F6u, 2);  /* 0C0926F4 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0926F6 tst Rm,Rn */
	if (T) { UPD(0x0C0926E4u, 4); goto L_0C0926E4; }  /* 0C0926F8 bt */
L_0C0926FA: BLKS(0x0C0926FAu);
	r4 = r12;  /* 0C0926FA mov Rm,Rn */
	{ IF(0x0C0926FEu); ; /* slot nop */ UPD(0x0C0920B2u, 4); goto L_0C0920B2; }  /* 0C0926FC bra */
L_0C092750: BLKS(0x0C092750u);
	r13 = 0xC0A8CA0u; UPD(0x0C092752u, 1);  /* 0C092750 mov.l @(disp,pc),Rn */
	IF(0x0C092752u); { u32 t_ = r13; PR = 0x0C092756u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092756u); }  /* 0C092752 jsr @Rn */
L_0C092756: BLKS(0x0C092756u);
	IF(0x0C092756u); T = (s32)r0 >= 0;  /* 0C092756 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092760u, 4); goto L_0C092760; } goto L_0C09275C; }  /* 0C092758 bt/s */
L_0C09275C: BLKS(0x0C09275Cu);
	{ IF(0x0C09275Eu); ; /* slot nop */ UPD(0x0C091D90u, 4); goto L_0C091D90; }  /* 0C09275C bra */
L_0C092760: BLKS(0x0C092760u);
	r0 = 0xB4u; UPD(0x0C092762u, 1);  /* 0C092760 mov.w @(disp,pc),Rn */
	IF(0x0C092762u); MACL = r12 * r0;  /* 0C092762 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C092766u, 3);  /* 0C092764 mov.l @(disp,pc),Rn */
	IF(0x0C092766u); r9 = MACL;  /* 0C092766 sts macl,Rn */
	IF(0x0C092768u); MACL = r8 * r0;  /* 0C092768 mul.l Rm,Rn */
	r9 += r13;  /* 0C09276A add Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C09276Eu, 5);  /* 0C09276C mov.l @(disp,Rm),Rn */
	IF(0x0C09276Eu); r7 = MACL;  /* 0C09276E sts macl,Rn */
	r7 += r13;  /* 0C092770 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C092774u, 3);  /* 0C092772 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C092776u, 1);  /* 0C092774 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C092776 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09277Au, 2);  /* 0C092778 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C09277A add Rm,Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C09277Eu, 2);  /* 0C09277C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r4); UPD(0x0C092780u, 1);  /* 0C09277E mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092780 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C092784u, 2);  /* 0C092782 mov.w @Rm,Rn */
	IF(0x0C092784u); MACL = r10 * r0;  /* 0C092784 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092786 add #imm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C09278Au, 4);  /* 0C092788 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C09278A mov Rm,Rn */
	r10 = R32(r9); UPD(0x0C09278Eu, 2);  /* 0C09278C mov.l @Rm,Rn */
	IF(0x0C09278Eu); r4 = MACL;  /* 0C09278E sts macl,Rn */
	r2 = 0xA8u; UPD(0x0C092792u, 2);  /* 0C092790 mov.w @(disp,pc),Rn */
	r10 &= r7;  /* 0C092792 and Rm,Rn */
	r8 = 0xAFu; UPD(0x0C092796u, 2);  /* 0C092794 mov.w @(disp,pc),Rn */
	r6 = r9;  /* 0C092796 mov Rm,Rn */
	r4 += r13;  /* 0C092798 add Rm,Rn */
	r6 += r2;  /* 0C09279A add Rm,Rn */
	IF(0x0C09279Cu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09279Eu, 4);  /* 0C09279C mov.b @(r0,Rm),Rn */
	r2 += r4;  /* 0C09279E add Rm,Rn */
	W32(r9, r10); UPD(0x0C0927A2u, 2);  /* 0C0927A0 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0927A2 add #imm,Rn */
	r7 = R32(r4); UPD(0x0C0927A6u, 2);  /* 0C0927A4 mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C0927A6 add #imm,Rn */
	r0 = 0x13000100u; UPD(0x0C0927AAu, 2);  /* 0C0927A8 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0927ACu, 1);  /* 0C0927AA mov.b @Rm,Rn */
	r7 &= r0;  /* 0C0927AC and Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0927B0u, 2);  /* 0C0927AE mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C0927B0 add Rm,Rn */
	r7 |= r10;  /* 0C0927B2 or Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0927B6u, 3);  /* 0C0927B4 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r3); UPD(0x0C0927B8u, 1);  /* 0C0927B6 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0927B8 tst Rm,Rn */
	W8(r6, r5); UPD(0x0C0927BCu, 2);  /* 0C0927BA mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r9, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C092870u, 3); goto L_0C092870; } UPD(0x0C0927C0u, 1); goto L_0C0927C0; }  /* 0C0927BC bt/s */
L_0C0927C0: BLKS(0x0C0927C0u);
	T = r0 == 0x7u;  /* 0C0927C0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0927C8u, 4); goto L_0C0927C8; }  /* 0C0927C2 bt */
L_0C0927C4: BLKS(0x0C0927C4u);
	{ IF(0x0C0927C6u); ; /* slot nop */ UPD(0x0C092064u, 3); goto L_0C092064; }  /* 0C0927C4 bra */
L_0C0927C8: BLKS(0x0C0927C8u);
	r11 = 0x100u; UPD(0x0C0927CAu, 1);  /* 0C0927C8 mov.w @(disp,pc),Rn */
	T = (r7 & r11) == 0;  /* 0C0927CA tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0927D4u, 4); goto L_0C0927D4; } goto L_0C0927D0; }  /* 0C0927CC bf/s */
L_0C0927D0: BLKS(0x0C0927D0u);
	{ IF(0x0C0927D2u); ; /* slot nop */ UPD(0x0C092092u, 4); goto L_0C092092; }  /* 0C0927D0 bra */
L_0C0927D4: BLKS(0x0C0927D4u);
	r8 = 0xC0BC1B0u; UPD(0x0C0927D6u, 1);  /* 0C0927D4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0927D6 mov Rm,Rn */
	r5 = 0xAu;  /* 0C0927D8 mov #imm,Rn */
	IF(0x0C0927DAu); { u32 t_ = r8; PR = 0x0C0927DEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0927DEu); }  /* 0C0927DA jsr @Rn */
L_0C0927DE: BLKS(0x0C0927DEu);
	T = (r0 & r0) == 0;  /* 0C0927DE tst Rm,Rn */
	if (T) { UPD(0x0C092888u, 4); goto L_0C092888; }  /* 0C0927E0 bt */
L_0C0927E2: BLKS(0x0C0927E2u);
	r2 = 0x9Cu; UPD(0x0C0927E4u, 1);  /* 0C0927E2 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0927E4 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0927E8u, 2);  /* 0C0927E6 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C0927E8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C092860u, 4); goto L_0C092860; }  /* 0C0927EA bt */
L_0C0927EC: BLKS(0x0C0927ECu);
	r13 = 0x0u;  /* 0C0927EC mov #imm,Rn */
	r10 = r9;  /* 0C0927EE mov Rm,Rn */
	UPD(0x0C0927F0u, 2);
L_0C0927F0: BLKS(0x0C0927F0u);
	r8 = 0xC062780u; UPD(0x0C0927F2u, 1);  /* 0C0927F0 mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C0927F2 mov Rm,Rn */
	r6 = 0xC1B7648u; UPD(0x0C0927F6u, 2);  /* 0C0927F4 mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C0927F6 add Rm,Rn */
	r11 += r6;  /* 0C0927F8 add Rm,Rn */
	IF(0x0C0927FAu); { u32 t_ = r8; PR = 0x0C0927FEu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0927FEu); }  /* 0C0927FA jsr @Rn */
L_0C0927FE: BLKS(0x0C0927FEu);
	r9 = (u32)(s32)(s16)R16(r11); UPD(0x0C092800u, 1);  /* 0C0927FE mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092800 add #imm,Rn */
	r0 += r9;  /* 0C092802 add Rm,Rn */
	r7 = 0x55555556u; UPD(0x0C092806u, 3);  /* 0C092804 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C092806 add #imm,Rn */
	{ s64 r_ = (s64)(s32)r13 * (s64)(s32)r7; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092808 dmuls.l Rm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C09280A exts.w Rm,Rn */
	r0 = r13;  /* 0C09280C mov Rm,Rn */
	IF(0x0C09280Eu); T = r0 >> 31; r0 <<= 1;  /* 0C09280E shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092810 subc Rm,Rn */
	IF(0x0C092812u); r3 = MACH;  /* 0C092812 sts mach,Rn */
	r3 -= r0;  /* 0C092814 sub Rm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C092816 exts.w Rm,Rn */
	r0 = 0xC1B7638u; UPD(0x0C09281Au, 11);  /* 0C092818 mov.l @(disp,pc),Rn */
	IF(0x0C09281Au); r2 <<= 2;  /* 0C09281A shll2 Rn */
	r5 = 0xB4u; UPD(0x0C09281Eu, 2);  /* 0C09281C mov.w @(disp,pc),Rn */
	r11 = 0x1u;  /* 0C09281E mov #imm,Rn */
	IF(0x0C092820u); r8 = R32(r0 + r2); UPD(0x0C092822u, 2);  /* 0C092820 mov.l @(r0,Rm),Rn */
	IF(0x0C092822u); MACL = r12 * r5;  /* 0C092822 mul.l Rm,Rn */
	r11 &= r13;  /* 0C092824 and Rm,Rn */
	r0 = 0xC1B7640u; UPD(0x0C092828u, 4);  /* 0C092826 mov.l @(disp,pc),Rn */
	IF(0x0C092828u); r11 <<= 2;  /* 0C092828 shll2 Rn */
	IF(0x0C09282Au); r6 = R32(r0 + r11); UPD(0x0C09282Cu, 2);  /* 0C09282A mov.l @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09282Eu, 1);  /* 0C09282C mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C092830u, 1);  /* 0C09282E mov.l @(disp,Rm),Rn */
	r4 += r8;  /* 0C092830 add Rm,Rn */
	r7 = 0x20000u; UPD(0x0C092834u, 2);  /* 0C092832 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C092834 add Rm,Rn */
	r3 = 0xC08D670u; UPD(0x0C092838u, 2);  /* 0C092836 mov.l @(disp,pc),Rn */
	IF(0x0C092838u); r8 = MACL;  /* 0C092838 sts macl,Rn */
	W32(r15, r7); UPD(0x0C09283Cu, 2);  /* 0C09283A mov.l Rm,@Rn */
	r6 = 0x14u;  /* 0C09283C mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C092840u, 2);  /* 0C09283E mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C092840 mov Rm,Rn */
	IF(0x0C092842u); { u32 t_ = r3; PR = 0x0C092846u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C08D670, 0x0C08D670u, 0x0C092846u); }  /* 0C092842 jsr @Rn */
L_0C092846: BLKS(0x0C092846u);
	r2 = r13;  /* 0C092846 mov Rm,Rn */
	r2 += 0x1u;  /* 0C092848 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C09284A exts.w Rm,Rn */
	r9 = 0x3u;  /* 0C09284C mov #imm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C09284E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0927F0u, 8); goto L_0C0927F0; } UPD(0x0C092854u, 1); goto L_0C092854; }  /* 0C092850 bf/s */
L_0C092854: BLKS(0x0C092854u);
	r2 = 0xC286578u; UPD(0x0C092856u, 1);  /* 0C092854 mov.l @(disp,pc),Rn */
	r13 = 0x9Cu; UPD(0x0C092858u, 1);  /* 0C092856 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C092858 add Rm,Rn */
	{ r2 += r13; /* slot add Rm,Rn */ UPD(0x0C092556u, 4); goto L_0C092556; }  /* 0C09285A bra */
L_0C092860: BLKS(0x0C092860u);
	r10 = 0x0u;  /* 0C092860 mov #imm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C092864u, 2);  /* 0C092862 mov.l @(disp,Rm),Rn */
L_0C092864: BLKS(0x0C092864u);
	W8(r2, r10); UPD(0x0C092866u, 1);  /* 0C092864 mov.b Rm,@Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C092092u, 3); goto L_0C092092; }  /* 0C092866 bra */
L_0C092870: BLKS(0x0C092870u);
	r8 = 0xA5u; UPD(0x0C092872u, 1);  /* 0C092870 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C092872 mov Rm,Rn */
	IF(0x0C092874u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092876u, 2);  /* 0C092874 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C092876 tst Rm,Rn */
	if (T) { UPD(0x0C092888u, 4); goto L_0C092888; }  /* 0C092878 bt */
L_0C09287A: BLKS(0x0C09287Au);
	r4 = r12;  /* 0C09287A mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C09287Eu, 2);  /* 0C09287C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C09287E mov #imm,Rn */
	IF(0x0C092880u); { u32 t_ = r13; PR = 0x0C092884u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092884u); }  /* 0C092880 jsr @Rn */
L_0C092884: BLKS(0x0C092884u);
	T = (r0 & r0) == 0;  /* 0C092884 tst Rm,Rn */
	if (!T) { UPD(0x0C09288Cu, 4); goto L_0C09288C; }  /* 0C092886 bf */
L_0C092888: BLKS(0x0C092888u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C092888 bra */
L_0C09288C: BLKS(0x0C09288Cu);
	r6 = R32(r9 + 0xCu); UPD(0x0C09288Eu, 1);  /* 0C09288C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09288E mov Rm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C092892u, 2);  /* 0C092890 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C092892 add #imm,Rn */
	IF(0x0C092894u); { u32 t_ = r0; PR = 0x0C092898u; W32(r9 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C092898u); }  /* 0C092894 jsr @Rn */
L_0C092898: BLKS(0x0C092898u);
	r0 = 0x88u; UPD(0x0C09289Au, 1);  /* 0C092898 mov.w @(disp,pc),Rn */
	r12 = 0x1u;  /* 0C09289A mov #imm,Rn */
	{ IF(0x0C09289Eu); W16(r0 + r9, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C09243Cu, 4); goto L_0C09243C; }  /* 0C09289C bra */
L_0C0928F0: BLKS(0x0C0928F0u);
	r13 = 0xC0A8CA0u; UPD(0x0C0928F2u, 1);  /* 0C0928F0 mov.l @(disp,pc),Rn */
	IF(0x0C0928F2u); { u32 t_ = r13; PR = 0x0C0928F6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0928F6u); }  /* 0C0928F2 jsr @Rn */
L_0C0928F6: BLKS(0x0C0928F6u);
	IF(0x0C0928F6u); T = (s32)r0 >= 0;  /* 0C0928F6 cmp/pz Rn */
	if (T) { UPD(0x0C0928FEu, 4); goto L_0C0928FE; }  /* 0C0928F8 bt */
L_0C0928FA: BLKS(0x0C0928FAu);
	{ IF(0x0C0928FCu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C0928FA bra */
L_0C0928FE: BLKS(0x0C0928FEu);
	r5 = 0xB4u; UPD(0x0C092900u, 1);  /* 0C0928FE mov.w @(disp,pc),Rn */
	IF(0x0C092900u); MACL = r12 * r5;  /* 0C092900 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C092904u, 3);  /* 0C092902 mov.l @(disp,pc),Rn */
	IF(0x0C092904u); r9 = MACL;  /* 0C092904 sts macl,Rn */
	IF(0x0C092906u); MACL = r0 * r5;  /* 0C092906 mul.l Rm,Rn */
	r9 += r13;  /* 0C092908 add Rm,Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C09290Cu, 5);  /* 0C09290A mov.l @(disp,Rm),Rn */
	IF(0x0C09290Cu); r7 = MACL;  /* 0C09290C sts macl,Rn */
	r7 += r13;  /* 0C09290E add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C092912u, 3);  /* 0C092910 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C092914u, 1);  /* 0C092912 mov.l @(disp,Rm),Rn */
	r3 += r11;  /* 0C092914 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C092918u, 2);  /* 0C092916 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C092918 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C09291Cu, 2);  /* 0C09291A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r4); UPD(0x0C09291Eu, 1);  /* 0C09291C mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C09291E add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C092922u, 2);  /* 0C092920 mov.w @Rm,Rn */
	IF(0x0C092922u); MACL = r10 * r5;  /* 0C092922 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092924 add #imm,Rn */
	r0 = 0xA8u; UPD(0x0C092928u, 4);  /* 0C092926 mov.w @(disp,pc),Rn */
	IF(0x0C092928u); r4 = MACL;  /* 0C092928 sts macl,Rn */
	r7 = r9;  /* 0C09292A mov Rm,Rn */
	r4 += r13;  /* 0C09292C add Rm,Rn */
	r7 += r0;  /* 0C09292E add Rm,Rn */
	r0 += r4;  /* 0C092930 add Rm,Rn */
	r0 += 0x1u;  /* 0C092932 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C092936u, 7);  /* 0C092934 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C092936 add #imm,Rn */
	r8 = 0xAFu; UPD(0x0C09293Au, 2);  /* 0C092938 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09293A mov Rm,Rn */
	r10 = R32(r9); UPD(0x0C09293Eu, 2);  /* 0C09293C mov.l @Rm,Rn */
	IF(0x0C09293Eu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092940u, 1);  /* 0C09293E mov.b @(r0,Rm),Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092942u, 1);  /* 0C092940 mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C092942 add Rm,Rn */
	r10 &= r2;  /* 0C092944 and Rm,Rn */
	W32(r9, r10); UPD(0x0C092948u, 3);  /* 0C092946 mov.l Rm,@Rn */
	W8(r7, r3); UPD(0x0C09294Au, 1);  /* 0C092948 mov.b Rm,@Rn */
	r5 = 0x13000100u; UPD(0x0C09294Cu, 1);  /* 0C09294A mov.l @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C09294Eu, 1);  /* 0C09294C mov.l @Rm,Rn */
	r6 = R32(r4 + 0x38u); UPD(0x0C092950u, 1);  /* 0C09294E mov.l @(disp,Rm),Rn */
	r7 &= r5;  /* 0C092950 and Rm,Rn */
	r7 |= r10;  /* 0C092952 or Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C092956u, 3);  /* 0C092954 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r6); UPD(0x0C092958u, 1);  /* 0C092956 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C092958 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C092962u, 4); goto L_0C092962; } UPD(0x0C09295Eu, 1); goto L_0C09295E; }  /* 0C09295A bf/s */
L_0C09295E: BLKS(0x0C09295Eu);
	{ IF(0x0C092960u); ; /* slot nop */ UPD(0x0C092870u, 3); goto L_0C092870; }  /* 0C09295E bra */
L_0C092962: BLKS(0x0C092962u);
	T = r0 == 0x7u;  /* 0C092962 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09296Au, 4); goto L_0C09296A; }  /* 0C092964 bt */
L_0C092966: BLKS(0x0C092966u);
	{ IF(0x0C092968u); ; /* slot nop */ UPD(0x0C092064u, 3); goto L_0C092064; }  /* 0C092966 bra */
L_0C09296A: BLKS(0x0C09296Au);
	r5 = 0x100u; UPD(0x0C09296Cu, 1);  /* 0C09296A mov.w @(disp,pc),Rn */
	T = (r7 & r5) == 0;  /* 0C09296C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C092976u, 4); goto L_0C092976; } goto L_0C092972; }  /* 0C09296E bf/s */
L_0C092972: BLKS(0x0C092972u);
	{ IF(0x0C092974u); ; /* slot nop */ UPD(0x0C092092u, 4); goto L_0C092092; }  /* 0C092972 bra */
L_0C092976: BLKS(0x0C092976u);
	r10 = 0xC0BC1B0u; UPD(0x0C092978u, 1);  /* 0C092976 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C092978 mov Rm,Rn */
	r5 = 0xAu;  /* 0C09297A mov #imm,Rn */
	IF(0x0C09297Cu); { u32 t_ = r10; PR = 0x0C092980u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092980u); }  /* 0C09297C jsr @Rn */
L_0C092980: BLKS(0x0C092980u);
	T = (r0 & r0) == 0;  /* 0C092980 tst Rm,Rn */
	if (T) { UPD(0x0C092A64u, 4); goto L_0C092A64; }  /* 0C092982 bt */
L_0C092984: BLKS(0x0C092984u);
	r2 = 0x9Cu; UPD(0x0C092986u, 1);  /* 0C092984 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C092986 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09298Au, 2);  /* 0C092988 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C09298A cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C092994u, 4); goto L_0C092994; } goto L_0C092990; }  /* 0C09298C bf/s */
L_0C092990: BLKS(0x0C092990u);
	{ r1 = R32(r9 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092864u, 4); goto L_0C092864; }  /* 0C092990 bra */
L_0C092994: BLKS(0x0C092994u);
	r13 = 0x0u;  /* 0C092994 mov #imm,Rn */
	r10 = r9;  /* 0C092996 mov Rm,Rn */
	UPD(0x0C092998u, 2);
L_0C092998: BLKS(0x0C092998u);
	r8 = 0xC062780u; UPD(0x0C09299Au, 1);  /* 0C092998 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C09299A mov Rm,Rn */
	r6 = 0xC1B7660u; UPD(0x0C09299Eu, 2);  /* 0C09299C mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C09299E add Rm,Rn */
	r11 = 0x55555556u; UPD(0x0C0929A2u, 2);  /* 0C0929A0 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C0929A2 add Rm,Rn */
	IF(0x0C0929A4u); { u32 t_ = r8; PR = 0x0C0929A8u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0929A8u); }  /* 0C0929A4 jsr @Rn */
L_0C0929A8: BLKS(0x0C0929A8u);
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0929AAu, 1);  /* 0C0929A8 mov.w @Rm,Rn */
	{ s64 r_ = (s64)(s32)r13 * (s64)(s32)r11; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0929AA dmuls.l Rm,Rn */
	r7 = r13;  /* 0C0929AC mov Rm,Rn */
	IF(0x0C0929AEu); T = r7 >> 31; r7 <<= 1;  /* 0C0929AE shll Rn */
	r0 += r2;  /* 0C0929B0 add Rm,Rn */
	{ u32 a_ = r7, t_ = a_ - r7, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r7 = r_; }  /* 0C0929B2 subc Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0929B4 add #imm,Rn */
	IF(0x0C0929B6u); r4 = MACH;  /* 0C0929B6 sts mach,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0929B8 exts.w Rm,Rn */
	r4 -= r7;  /* 0C0929BA sub Rm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0929BC exts.w Rm,Rn */
	r0 = 0xC1B7650u; UPD(0x0C0929C0u, 12);  /* 0C0929BE mov.l @(disp,pc),Rn */
	IF(0x0C0929C0u); r3 <<= 2;  /* 0C0929C0 shll2 Rn */
	IF(0x0C0929C2u); r5 = R32(r0 + r3); UPD(0x0C0929C4u, 2);  /* 0C0929C2 mov.l @(r0,Rm),Rn */
	r9 = 0x1u;  /* 0C0929C4 mov #imm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0929C8u, 2);  /* 0C0929C6 mov.l @(disp,Rm),Rn */
	r9 &= r13;  /* 0C0929C8 and Rm,Rn */
	r0 = 0xC1B7658u; UPD(0x0C0929CCu, 2);  /* 0C0929CA mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0929CC add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0929D0u, 2);  /* 0C0929CE mov.w @(disp,pc),Rn */
	IF(0x0C0929D0u); r9 <<= 2;  /* 0C0929D0 shll2 Rn */
	IF(0x0C0929D2u); r6 = R32(r0 + r9); UPD(0x0C0929D4u, 2);  /* 0C0929D2 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0929D4 add #imm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C0929D8u, 2);  /* 0C0929D6 mov.l @(disp,Rm),Rn */
	IF(0x0C0929D8u); MACL = r12 * r8;  /* 0C0929D8 mul.l Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0929DCu, 3);  /* 0C0929DA mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0929DC add Rm,Rn */
	r3 = 0xC08D310u; UPD(0x0C0929E0u, 2);  /* 0C0929DE mov.l @(disp,pc),Rn */
	IF(0x0C0929E0u); r8 = MACL;  /* 0C0929E0 sts macl,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0929E4u, 2);  /* 0C0929E2 mov.l Rm,@(disp,Rn) */
	r6 = 0x14u;  /* 0C0929E4 mov #imm,Rn */
	r11 = 0x20000u; UPD(0x0C0929E8u, 2);  /* 0C0929E6 mov.l @(disp,pc),Rn */
	r7 = r2;  /* 0C0929E8 mov Rm,Rn */
	IF(0x0C0929EAu); { u32 t_ = r3; PR = 0x0C0929EEu; W32(r15, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C08D310, 0x0C08D310u, 0x0C0929EEu); }  /* 0C0929EA jsr @Rn */
L_0C0929EE: BLKS(0x0C0929EEu);
	r4 = r13;  /* 0C0929EE mov Rm,Rn */
	r4 += 0x1u;  /* 0C0929F0 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0929F2 exts.w Rm,Rn */
	r9 = 0x3u;  /* 0C0929F4 mov #imm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C0929F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C092998u, 8); goto L_0C092998; } goto L_0C0929FC; }  /* 0C0929F8 bf/s */
L_0C0929FC: BLKS(0x0C0929FCu);
	{ IF(0x0C0929FEu); ; /* slot nop */ UPD(0x0C092854u, 4); goto L_0C092854; }  /* 0C0929FC bra */
L_0C092A00: BLKS(0x0C092A00u);
	r11 = 0xC0A8CA0u; UPD(0x0C092A02u, 1);  /* 0C092A00 mov.l @(disp,pc),Rn */
	IF(0x0C092A02u); { u32 t_ = r11; PR = 0x0C092A06u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092A06u); }  /* 0C092A02 jsr @Rn */
L_0C092A06: BLKS(0x0C092A06u);
	IF(0x0C092A06u); T = (s32)r0 >= 0;  /* 0C092A06 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092ABCu, 4); goto L_0C092ABC; } goto L_0C092A0C; }  /* 0C092A08 bf/s */
L_0C092A0C: BLKS(0x0C092A0Cu);
	r11 = 0xB4u; UPD(0x0C092A0Eu, 2);  /* 0C092A0C mov.w @(disp,pc),Rn */
	IF(0x0C092A0Eu); MACL = r12 * r11;  /* 0C092A0E mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C092A12u, 3);  /* 0C092A10 mov.l @(disp,pc),Rn */
	IF(0x0C092A12u); r0 = MACL;  /* 0C092A12 sts macl,Rn */
	IF(0x0C092A14u); MACL = r8 * r11;  /* 0C092A14 mul.l Rm,Rn */
	r0 += r10;  /* 0C092A16 add Rm,Rn */
	r1 = R32(r0 + 0x2Cu); UPD(0x0C092A1Au, 5);  /* 0C092A18 mov.l @(disp,Rm),Rn */
	IF(0x0C092A1Au); r7 = MACL;  /* 0C092A1A sts macl,Rn */
	r7 += r10;  /* 0C092A1C add Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C092A20u, 3);  /* 0C092A1E mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C092A22u, 1);  /* 0C092A20 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C092A22 add Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C092A26u, 2);  /* 0C092A24 mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C092A26 add Rm,Rn */
	W32(r0 + 0x24u, r9); UPD(0x0C092A2Au, 2);  /* 0C092A28 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C092A2Cu, 1);  /* 0C092A2A mov.l Rm,@(disp,Rn) */
	r0 += 0x7Eu;  /* 0C092A2C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C092A30u, 2);  /* 0C092A2E mov.w @Rm,Rn */
	IF(0x0C092A30u); MACL = r5 * r11;  /* 0C092A30 mul.l Rm,Rn */
	r0 += 0xFFFFFF82u;  /* 0C092A32 add #imm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C092A36u, 4);  /* 0C092A34 mov.l @(disp,pc),Rn */
	IF(0x0C092A36u); r4 = MACL;  /* 0C092A36 sts macl,Rn */
	r5 = R32(r0); UPD(0x0C092A3Au, 2);  /* 0C092A38 mov.l @Rm,Rn */
	r9 = r0;  /* 0C092A3A mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C092A3Eu, 2);  /* 0C092A3C mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C092A3E and Rm,Rn */
	r4 += r10;  /* 0C092A40 add Rm,Rn */
	W32(r0, r5); UPD(0x0C092A44u, 3);  /* 0C092A42 mov.l Rm,@Rn */
	r9 += r2;  /* 0C092A44 add Rm,Rn */
	r2 += r4;  /* 0C092A46 add Rm,Rn */
	r13 = 0xAFu; UPD(0x0C092A4Au, 3);  /* 0C092A48 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C092A4A add #imm,Rn */
	r3 = R32(r4); UPD(0x0C092A4Eu, 2);  /* 0C092A4C mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C092A4E add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C092A52u, 2);  /* 0C092A50 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C092A54u, 1);  /* 0C092A52 mov.b @Rm,Rn */
	r3 &= r1;  /* 0C092A54 and Rm,Rn */
	IF(0x0C092A56u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C092A58u, 2);  /* 0C092A56 mov.b @(r0,Rm),Rn */
	r5 |= r3;  /* 0C092A58 or Rm,Rn */
	r12 = R32(r4 + 0x38u); UPD(0x0C092A5Cu, 2);  /* 0C092A5A mov.l @(disp,Rm),Rn */
	r8 += r6;  /* 0C092A5C add Rm,Rn */
	W32(r0 + 0x38u, r12); UPD(0x0C092A60u, 2);  /* 0C092A5E mov.l Rm,@(disp,Rn) */
	W8(r9, r8); UPD(0x0C092A62u, 1);  /* 0C092A60 mov.b Rm,@Rn */
	W32(r0, r5); UPD(0x0C092A64u, 1);  /* 0C092A62 mov.l Rm,@Rn */
L_0C092A64: BLKS(0x0C092A64u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C091B12u, 3); goto L_0C091B12; }  /* 0C092A64 bra */
L_0C092AB0: BLKS(0x0C092AB0u);
	r11 = 0xC0A8D30u; UPD(0x0C092AB2u, 1);  /* 0C092AB0 mov.l @(disp,pc),Rn */
	IF(0x0C092AB2u); { u32 t_ = r11; PR = 0x0C092AB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C092AB6u); }  /* 0C092AB2 jsr @Rn */
L_0C092AB6: BLKS(0x0C092AB6u);
	IF(0x0C092AB6u); T = (s32)r0 >= 0;  /* 0C092AB6 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092AC0u, 4); goto L_0C092AC0; } UPD(0x0C092ABCu, 1); goto L_0C092ABC; }  /* 0C092AB8 bt/s */
L_0C092ABC: BLKS(0x0C092ABCu);
	{ IF(0x0C092ABEu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C092ABC bra */
L_0C092AC0: BLKS(0x0C092AC0u);
	r6 = 0xB4u; UPD(0x0C092AC2u, 1);  /* 0C092AC0 mov.w @(disp,pc),Rn */
	IF(0x0C092AC2u); MACL = r12 * r6;  /* 0C092AC2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C092AC6u, 3);  /* 0C092AC4 mov.l @(disp,pc),Rn */
	IF(0x0C092AC6u); r9 = MACL;  /* 0C092AC6 sts macl,Rn */
	IF(0x0C092AC8u); MACL = r8 * r6;  /* 0C092AC8 mul.l Rm,Rn */
	r9 += r0;  /* 0C092ACA add Rm,Rn */
	r13 = R32(r9 + 0x2Cu); UPD(0x0C092ACEu, 5);  /* 0C092ACC mov.l @(disp,Rm),Rn */
	IF(0x0C092ACEu); r4 = MACL;  /* 0C092ACE sts macl,Rn */
	r4 += r0;  /* 0C092AD0 add Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C092AD4u, 3);  /* 0C092AD2 mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C092AD6u, 1);  /* 0C092AD4 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C092AD6 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C092ADAu, 2);  /* 0C092AD8 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C092ADA add Rm,Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C092ADEu, 2);  /* 0C092ADC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r5); UPD(0x0C092AE0u, 1);  /* 0C092ADE mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092AE0 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C092AE4u, 2);  /* 0C092AE2 mov.w @Rm,Rn */
	IF(0x0C092AE4u); MACL = r3 * r6;  /* 0C092AE4 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092AE6 add #imm,Rn */
	r10 = 0xAFu; UPD(0x0C092AEAu, 4);  /* 0C092AE8 mov.w @(disp,pc),Rn */
	IF(0x0C092AEAu); r5 = MACL;  /* 0C092AEA sts macl,Rn */
	r5 += r0;  /* 0C092AEC add Rm,Rn */
	r0 = r9;  /* 0C092AEE mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C092AF2u, 4);  /* 0C092AF0 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C092AF2 mov Rm,Rn */
	IF(0x0C092AF4u); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C092AF6u, 2);  /* 0C092AF4 mov.b @(r0,Rm),Rn */
	r4 += r8;  /* 0C092AF6 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C092AFAu, 2);  /* 0C092AF8 mov.l @Rm,Rn */
	r8 += r5;  /* 0C092AFA add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092AFEu, 2);  /* 0C092AFC mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C092AFE add #imm,Rn */
	r0 &= r2;  /* 0C092B00 and Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C092B04u, 3);  /* 0C092B02 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C092B04 add #imm,Rn */
	W32(r9, r0); UPD(0x0C092B08u, 2);  /* 0C092B06 mov.l Rm,@Rn */
	r7 += r13;  /* 0C092B08 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C092B0Cu, 2);  /* 0C092B0A mov.l @Rm,Rn */
	r3 = 0x13000100u; UPD(0x0C092B0Eu, 1);  /* 0C092B0C mov.l @(disp,pc),Rn */
	W8(r4, r7); UPD(0x0C092B10u, 1);  /* 0C092B0E mov.b Rm,@Rn */
	r6 &= r3;  /* 0C092B10 and Rm,Rn */
	r11 = R32(r5 + 0x38u); UPD(0x0C092B14u, 2);  /* 0C092B12 mov.l @(disp,Rm),Rn */
	r6 |= r0;  /* 0C092B14 or Rm,Rn */
	r7 = 0x100u; UPD(0x0C092B18u, 2);  /* 0C092B16 mov.w @(disp,pc),Rn */
	W32(r9 + 0x38u, r11); UPD(0x0C092B1Au, 1);  /* 0C092B18 mov.l Rm,@(disp,Rn) */
	T = (r6 & r7) == 0;  /* 0C092B1A tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C092B50u, 4); goto L_0C092B50; } UPD(0x0C092B20u, 1); goto L_0C092B20; }  /* 0C092B1C bf/s */
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0x86u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C092B22 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C092B26u, 2);  /* 0C092B24 mov.w @Rm,Rn */
	r9 = 0xFFu; UPD(0x0C092B28u, 1);  /* 0C092B26 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C092B28 cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C092B38u, 4); goto L_0C092B38; } goto L_0C092B2E; }  /* 0C092B2A bt/s */
L_0C092B2E: BLKS(0x0C092B2Eu);
	r12 = r2;  /* 0C092B2E mov Rm,Rn */
	r12 += 0x1u;  /* 0C092B30 add #imm,Rn */
	W16(r3, r12); UPD(0x0C092B34u, 4);  /* 0C092B32 mov.w Rm,@Rn */
	r2 = r12;  /* 0C092B34 mov Rm,Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C092B36 exts.w Rm,Rn */
	UPD(0x0C092B38u, 2);
L_0C092B38: BLKS(0x0C092B38u);
	T = (s32)r10 > (s32)r7;  /* 0C092B38 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C092A64u, 4); goto L_0C092A64; }  /* 0C092B3A bf */
L_0C092B3C: BLKS(0x0C092B3Cu);
	r8 = r2;  /* 0C092B3C mov Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C092B3E add #imm,Rn */
	W16(r3, r8); UPD(0x0C092B42u, 3);  /* 0C092B40 mov.w Rm,@Rn */
L_0C092B42: BLKS(0x0C092B42u);
	r13 = 0xFFFFEFCAu; UPD(0x0C092B44u, 1);  /* 0C092B42 mov.w @(disp,pc),Rn */
	IF(0x0C092B44u); { u32 tv_ = (r13 + 0x0C092B48u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091B12u: goto L_0C091B12; default: JUMPD(tv_); } }  /* 0C092B44 braf Rn */
L_0C092B50: BLKS(0x0C092B50u);
	r10 = 0xC069BF0u; UPD(0x0C092B52u, 1);  /* 0C092B50 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C092B54u, 1);  /* 0C092B52 mov.l @(disp,pc),Rn */
	IF(0x0C092B54u); { u32 t_ = r10; PR = 0x0C092B58u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C092B58u); }  /* 0C092B54 jsr @Rn */
L_0C092B58: BLKS(0x0C092B58u);
	r4 = r12;  /* 0C092B58 mov Rm,Rn */
	IF(0x0C092B5Au); { u32 t_ = r13; PR = 0x0C092B5Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C092B5Eu); }  /* 0C092B5A jsr @Rn */
L_0C092B5E: BLKS(0x0C092B5Eu);
	r2 = R32(r9 + 0x30u); UPD(0x0C092B60u, 1);  /* 0C092B5E mov.l @(disp,Rm),Rn */
	r7 = 0x86u; UPD(0x0C092B62u, 1);  /* 0C092B60 mov.w @(disp,pc),Rn */
	IF(0x0C092B62u); T = (s32)r2 > 0;  /* 0C092B62 cmp/pl Rn */
	IF(0x0C092B64u); r0 = T;  /* 0C092B64 movt Rn */
	r11 = 0xC1B7668u; UPD(0x0C092B68u, 3);  /* 0C092B66 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C092B68 add Rm,Rn */
	r0 += r0;  /* 0C092B6A add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C092B6Eu, 3);  /* 0C092B6C mov.w @Rm,Rn */
	IF(0x0C092B6Eu); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C092B70u, 1);  /* 0C092B6E mov.w @(r0,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C092B70 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C092B78u, 4); goto L_0C092B78; }  /* 0C092B72 bt */
L_0C092B74: BLKS(0x0C092B74u);
	W16(r7, r1); UPD(0x0C092B76u, 1);  /* 0C092B74 mov.w Rm,@Rn */
	r2 = r1;  /* 0C092B76 mov Rm,Rn */
	UPD(0x0C092B78u, 1);
L_0C092B78: BLKS(0x0C092B78u);
	r6 = 0xC1B766Cu; UPD(0x0C092B7Au, 1);  /* 0C092B78 mov.l @(disp,pc),Rn */
	IF(0x0C092B7Au); r3 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C092B7Cu, 1);  /* 0C092B7A mov.w @(r0,Rm),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C092B7C exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C092B7E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C092B84u, 5); goto L_0C092B84; }  /* 0C092B80 bf */
L_0C092B82: BLKS(0x0C092B82u);
	W16(r7, r3); UPD(0x0C092B84u, 1);  /* 0C092B82 mov.w Rm,@Rn */
L_0C092B84: BLKS(0x0C092B84u);
	r9 = 0xC0BC1B0u; UPD(0x0C092B86u, 1);  /* 0C092B84 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C092B86 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C092B88 mov #imm,Rn */
	IF(0x0C092B8Au); { u32 t_ = r9; PR = 0x0C092B8Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092B8Eu); }  /* 0C092B8A jsr @Rn */
L_0C092B8E: BLKS(0x0C092B8Eu);
	T = (r0 & r0) == 0;  /* 0C092B8E tst Rm,Rn */
	if (T) { UPD(0x0C092B42u, 4); goto L_0C092B42; }  /* 0C092B90 bt */
L_0C092B92: BLKS(0x0C092B92u);
	r1 = 0xC069B90u; UPD(0x0C092B94u, 1);  /* 0C092B92 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFEF26u; UPD(0x0C092B96u, 1);  /* 0C092B94 mov.w @(disp,pc),Rn */
	IF(0x0C092B96u); { u32 tv_ = (r13 + 0x0C092B9Au); u32 t_ = PHYS(tv_); r4 = r12; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091AC0u: goto L_0C091AC0; default: JUMPD(tv_); } }  /* 0C092B96 braf Rn */
L_0C092BA0: BLKS(0x0C092BA0u);
	r8 = 0xC0A8CA0u; UPD(0x0C092BA2u, 1);  /* 0C092BA0 mov.l @(disp,pc),Rn */
	IF(0x0C092BA2u); { u32 t_ = r8; PR = 0x0C092BA6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092BA6u); }  /* 0C092BA2 jsr @Rn */
L_0C092BA6: BLKS(0x0C092BA6u);
	IF(0x0C092BA6u); T = (s32)r0 >= 0;  /* 0C092BA6 cmp/pz Rn */
	if (T) { UPD(0x0C092BAEu, 4); goto L_0C092BAE; }  /* 0C092BA8 bt */
L_0C092BAA: BLKS(0x0C092BAAu);
	{ IF(0x0C092BACu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C092BAA bra */
L_0C092BAE: BLKS(0x0C092BAEu);
	r9 = 0xB4u; UPD(0x0C092BB0u, 1);  /* 0C092BAE mov.w @(disp,pc),Rn */
	IF(0x0C092BB0u); MACL = r12 * r9;  /* 0C092BB0 mul.l Rm,Rn */
	r7 = 0xB4u; UPD(0x0C092BB4u, 3);  /* 0C092BB2 mov.w @(disp,pc),Rn */
	IF(0x0C092BB4u); r9 = MACL;  /* 0C092BB4 sts macl,Rn */
	IF(0x0C092BB6u); MACL = r0 * r7;  /* 0C092BB6 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C092BBAu, 4);  /* 0C092BB8 mov.l @(disp,pc),Rn */
	r5 = 0x84u; UPD(0x0C092BBCu, 1);  /* 0C092BBA mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C092BBC add Rm,Rn */
	IF(0x0C092BBEu); r4 = MACL;  /* 0C092BBE sts macl,Rn */
	r3 = r9;  /* 0C092BC0 mov Rm,Rn */
	r4 += r10;  /* 0C092BC2 add Rm,Rn */
	r3 += r5;  /* 0C092BC4 add Rm,Rn */
	r11 = R32(r9); UPD(0x0C092BC8u, 6);  /* 0C092BC6 mov.l @Rm,Rn */
	r5 += r4;  /* 0C092BC8 add Rm,Rn */
	r13 = R32(r4); UPD(0x0C092BCCu, 2);  /* 0C092BCA mov.l @Rm,Rn */
	r7 += 0x4Cu;  /* 0C092BCC add #imm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C092BD0u, 2);  /* 0C092BCE mov.w @(disp,pc),Rn */
	r5 += 0x2u;  /* 0C092BD0 add #imm,Rn */
	r8 = 0xC069B20u; UPD(0x0C092BD4u, 2);  /* 0C092BD2 mov.l @(disp,pc),Rn */
	r13 &= r7;  /* 0C092BD4 and Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C092BD8u, 2);  /* 0C092BD6 mov.w @Rm,Rn */
	r11 &= r6;  /* 0C092BD8 and Rm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C092BDCu, 2);  /* 0C092BDA mov.l Rm,@(disp,Rn) */
	r3 += 0x2u;  /* 0C092BDC add #imm,Rn */
	r11 |= r13;  /* 0C092BDE or Rm,Rn */
	W32(r9, r11); UPD(0x0C092BE2u, 3);  /* 0C092BE0 mov.l Rm,@Rn */
	r13 = r0;  /* 0C092BE2 mov Rm,Rn */
	W32(r14 + 0xCu, r3); UPD(0x0C092BE6u, 2);  /* 0C092BE4 mov.l Rm,@(disp,Rn) */
	r4 = r0;  /* 0C092BE6 mov Rm,Rn */
	W16(r3, r0); UPD(0x0C092BEAu, 2);  /* 0C092BE8 mov.w Rm,@Rn */
	IF(0x0C092BEAu); { u32 t_ = r8; PR = 0x0C092BEEu; r5 = R32(r9 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092BEEu); }  /* 0C092BEA jsr @Rn */
L_0C092BEE: BLKS(0x0C092BEEu);
	r2 = 0x66666667u; UPD(0x0C092BF0u, 1);  /* 0C092BEE mov.l @(disp,pc),Rn */
	IF(0x0C092BF0u); r0 <<= 2;  /* 0C092BF0 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092BF2 dmuls.l Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C092BF6u, 4);  /* 0C092BF4 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C092BF6 mov Rm,Rn */
	IF(0x0C092BF8u); r1 = MACH;  /* 0C092BF8 sts mach,Rn */
	IF(0x0C092BFAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C092BFA shar Rn */
	IF(0x0C092BFCu); T = r0 >> 31; r0 <<= 1;  /* 0C092BFC shll Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C092C00u, 5);  /* 0C092BFE mov.l @(disp,Rm),Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092C00 subc Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C092C04u, 2);  /* 0C092C02 mov.l @(disp,pc),Rn */
	r1 -= r0;  /* 0C092C04 sub Rm,Rn */
	r7 += r1;  /* 0C092C06 add Rm,Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C092C0Au, 3);  /* 0C092C08 mov.l Rm,@(disp,Rn) */
	IF(0x0C092C0Au); { u32 t_ = r11; PR = 0x0C092C0Eu; r5 = R32(r9 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092C0Eu); }  /* 0C092C0A jsr @Rn */
L_0C092C0E: BLKS(0x0C092C0Eu);
	r4 = R32(r14 + 0x8u); UPD(0x0C092C10u, 1);  /* 0C092C0E mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C092C12u, 1);  /* 0C092C10 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C092C12 add Rm,Rn */
	W32(r9 + 0x28u, r5); UPD(0x0C092C16u, 2);  /* 0C092C14 mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092C16 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C092C1Au, 2);  /* 0C092C18 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C092C1C add #imm,Rn */
	IF(0x0C092C1Eu); MACL = r3 * r8;  /* 0C092C1E mul.l Rm,Rn */
	r2 = 0xA8u; UPD(0x0C092C22u, 4);  /* 0C092C20 mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C092C22 mov Rm,Rn */
	IF(0x0C092C24u); r11 = MACL;  /* 0C092C24 sts macl,Rn */
	r11 += r10;  /* 0C092C26 add Rm,Rn */
	r0 = R32(r11 + 0x38u); UPD(0x0C092C2Au, 4);  /* 0C092C28 mov.l @(disp,Rm),Rn */
	r13 += r2;  /* 0C092C2A add Rm,Rn */
	W32(r9 + 0x38u, r0); UPD(0x0C092C2Eu, 2);  /* 0C092C2C mov.l Rm,@(disp,Rn) */
	r2 += r11;  /* 0C092C2E add Rm,Rn */
	r0 = 0xAFu; UPD(0x0C092C32u, 2);  /* 0C092C30 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C092C32 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C092C36u, 2);  /* 0C092C34 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C092C36 add #imm,Rn */
	IF(0x0C092C38u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C092C3Au, 2);  /* 0C092C38 mov.b @(r0,Rm),Rn */
	r10 += r6;  /* 0C092C3A add Rm,Rn */
	W8(r13, r10); UPD(0x0C092C3Eu, 2);  /* 0C092C3C mov.b Rm,@Rn */
	r5 = R32(r9); UPD(0x0C092C40u, 1);  /* 0C092C3E mov.l @Rm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C092C42u, 1);  /* 0C092C40 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0xCu); UPD(0x0C092C44u, 1);  /* 0C092C42 mov.l @(disp,Rm),Rn */
	r5 &= r7;  /* 0C092C44 and Rm,Rn */
	W32(r9, r5); UPD(0x0C092C48u, 2);  /* 0C092C46 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C092C4Au, 1);  /* 0C092C48 mov.w @Rm,Rn */
	r4 = R32(r11); UPD(0x0C092C4Cu, 1);  /* 0C092C4A mov.l @Rm,Rn */
	r0 += 0x8u;  /* 0C092C4C add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C092C50u, 2);  /* 0C092C4E mov.l @(disp,pc),Rn */
	IF(0x0C092C50u); r0 >>= 2;  /* 0C092C50 shlr2 Rn */
	r4 &= r1;  /* 0C092C52 and Rm,Rn */
	IF(0x0C092C54u); r0 >>= 2;  /* 0C092C54 shlr2 Rn */
	r5 |= r4;  /* 0C092C56 or Rm,Rn */
	r0 &= 0x1Fu;  /* 0C092C58 and #imm,r0 */
	W32(r9, r5); UPD(0x0C092C5Cu, 6);  /* 0C092C5A mov.l Rm,@Rn */
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C092088u, 3); goto L_0C092088; }  /* 0C092C5C bra */
L_0C092CB0: BLKS(0x0C092CB0u);
	r10 = 0xC0A8CA0u; UPD(0x0C092CB2u, 1);  /* 0C092CB0 mov.l @(disp,pc),Rn */
	IF(0x0C092CB2u); { u32 t_ = r10; PR = 0x0C092CB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092CB6u); }  /* 0C092CB2 jsr @Rn */
L_0C092CB6: BLKS(0x0C092CB6u);
	IF(0x0C092CB6u); T = (s32)r0 >= 0;  /* 0C092CB6 cmp/pz Rn */
	if (!T) { UPD(0x0C092D6Cu, 4); goto L_0C092D6C; }  /* 0C092CB8 bf */
L_0C092CBA: BLKS(0x0C092CBAu);
	r3 = 0xB4u; UPD(0x0C092CBCu, 1);  /* 0C092CBA mov.w @(disp,pc),Rn */
	IF(0x0C092CBCu); MACL = r12 * r3;  /* 0C092CBC mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C092CC0u, 3);  /* 0C092CBE mov.l @(disp,pc),Rn */
	IF(0x0C092CC0u); r9 = MACL;  /* 0C092CC0 sts macl,Rn */
	IF(0x0C092CC2u); MACL = r0 * r3;  /* 0C092CC2 mul.l Rm,Rn */
	r9 += r10;  /* 0C092CC4 add Rm,Rn */
	r5 = 0x84u; UPD(0x0C092CC8u, 5);  /* 0C092CC6 mov.w @(disp,pc),Rn */
	IF(0x0C092CC8u); r11 = MACL;  /* 0C092CC8 sts macl,Rn */
	r11 += r10;  /* 0C092CCA add Rm,Rn */
	r13 = R32(r9); UPD(0x0C092CCEu, 3);  /* 0C092CCC mov.l @Rm,Rn */
	r6 = r9;  /* 0C092CCE mov Rm,Rn */
	r0 = R32(r11); UPD(0x0C092CD2u, 2);  /* 0C092CD0 mov.l @Rm,Rn */
	r3 += 0x4Cu;  /* 0C092CD2 add #imm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C092CD6u, 2);  /* 0C092CD4 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C092CD6 add Rm,Rn */
	r0 &= r3;  /* 0C092CD8 and Rm,Rn */
	r13 &= r4;  /* 0C092CDA and Rm,Rn */
	r5 += r11;  /* 0C092CDC add Rm,Rn */
	r13 |= r0;  /* 0C092CDE or Rm,Rn */
	r5 += 0x2u;  /* 0C092CE0 add #imm,Rn */
	r8 = 0xC069B20u; UPD(0x0C092CE4u, 7);  /* 0C092CE2 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C092CE4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C092CE8u, 2);  /* 0C092CE6 mov.w @Rm,Rn */
	W32(r9, r13); UPD(0x0C092CEAu, 1);  /* 0C092CE8 mov.l Rm,@Rn */
	r4 = r7;  /* 0C092CEA mov Rm,Rn */
	r13 = r7;  /* 0C092CEC mov Rm,Rn */
	W16(r6, r7); UPD(0x0C092CF0u, 3);  /* 0C092CEE mov.w Rm,@Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C092CF2u, 1);  /* 0C092CF0 mov.l @(disp,Rm),Rn */
	IF(0x0C092CF2u); { u32 t_ = r8; PR = 0x0C092CF6u; W32(r14 + 0x10u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092CF6u); }  /* 0C092CF2 jsr @Rn */
L_0C092CF6: BLKS(0x0C092CF6u);
	r2 = 0x66666667u; UPD(0x0C092CF8u, 1);  /* 0C092CF6 mov.l @(disp,pc),Rn */
	IF(0x0C092CF8u); r0 <<= 2;  /* 0C092CF8 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092CFA dmuls.l Rm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C092CFEu, 4);  /* 0C092CFC mov.l @(disp,Rm),Rn */
	IF(0x0C092CFEu); r3 = MACH;  /* 0C092CFE sts mach,Rn */
	IF(0x0C092D00u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C092D00 shar Rn */
	IF(0x0C092D02u); T = r0 >> 31; r0 <<= 1;  /* 0C092D02 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092D04 subc Rm,Rn */
	r3 -= r0;  /* 0C092D06 sub Rm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C092D0Au, 6);  /* 0C092D08 mov.l @(disp,Rm),Rn */
	r11 = 0xC069AF0u; UPD(0x0C092D0Cu, 1);  /* 0C092D0A mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C092D0C add Rm,Rn */
	r4 = r13;  /* 0C092D0E mov Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C092D12u, 3);  /* 0C092D10 mov.l @(disp,Rm),Rn */
	IF(0x0C092D12u); { u32 t_ = r11; PR = 0x0C092D16u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092D16u); }  /* 0C092D12 jsr @Rn */
L_0C092D16: BLKS(0x0C092D16u);
	r1 = R32(r14 + 0x10u); UPD(0x0C092D18u, 1);  /* 0C092D16 mov.l @(disp,Rm),Rn */
	r5 = R32(r1 + 0x28u); UPD(0x0C092D1Au, 1);  /* 0C092D18 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C092D1A add Rm,Rn */
	W32(r9 + 0x28u, r5); UPD(0x0C092D1Eu, 2);  /* 0C092D1C mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092D1E add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C092D22u, 2);  /* 0C092D20 mov.w @Rm,Rn */
	r0 = 0xB4u; UPD(0x0C092D24u, 1);  /* 0C092D22 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C092D24 add #imm,Rn */
	IF(0x0C092D26u); MACL = r8 * r0;  /* 0C092D26 mul.l Rm,Rn */
	r6 = 0xA8u; UPD(0x0C092D2Au, 4);  /* 0C092D28 mov.w @(disp,pc),Rn */
	r11 = r9;  /* 0C092D2A mov Rm,Rn */
	IF(0x0C092D2Cu); r4 = MACL;  /* 0C092D2C sts macl,Rn */
	r4 += r10;  /* 0C092D2E add Rm,Rn */
	r11 += r6;  /* 0C092D30 add Rm,Rn */
	r0 += 0xFFFFFFFBu;  /* 0C092D32 add #imm,Rn */
	IF(0x0C092D34u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C092D36u, 6);  /* 0C092D34 mov.b @(r0,Rm),Rn */
	r6 += r4;  /* 0C092D36 add Rm,Rn */
	r6 += 0x1u;  /* 0C092D38 add #imm,Rn */
	r0 = R32(r9); UPD(0x0C092D3Cu, 3);  /* 0C092D3A mov.l @Rm,Rn */
	r11 += 0x1u;  /* 0C092D3C add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r6); UPD(0x0C092D40u, 2);  /* 0C092D3E mov.b @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092D42u, 1);  /* 0C092D40 mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C092D42 add Rm,Rn */
	r0 &= r2;  /* 0C092D44 and Rm,Rn */
	W32(r9, r0); UPD(0x0C092D48u, 3);  /* 0C092D46 mov.l Rm,@Rn */
	W8(r11, r13); UPD(0x0C092D4Au, 1);  /* 0C092D48 mov.b Rm,@Rn */
	r3 = R32(r4); UPD(0x0C092D4Cu, 1);  /* 0C092D4A mov.l @Rm,Rn */
	r5 = 0x13000100u; UPD(0x0C092D4Eu, 1);  /* 0C092D4C mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C092D50u, 1);  /* 0C092D4E mov.l @(disp,Rm),Rn */
	r3 &= r5;  /* 0C092D50 and Rm,Rn */
	r10 = R32(r4 + 0x38u); UPD(0x0C092D54u, 2);  /* 0C092D52 mov.l @(disp,Rm),Rn */
	r0 |= r3;  /* 0C092D54 or Rm,Rn */
	r8 = R32(r1 + 0xCu); UPD(0x0C092D58u, 2);  /* 0C092D56 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x38u, r10); UPD(0x0C092D5Au, 1);  /* 0C092D58 mov.l Rm,@(disp,Rn) */
	W32(r9, r0); UPD(0x0C092D5Cu, 1);  /* 0C092D5A mov.l Rm,@Rn */
	{ W32(r9 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C092088u, 3); goto L_0C092088; }  /* 0C092D5C bra */
L_0C092D60: BLKS(0x0C092D60u);
	r9 = 0xC0A8CA0u; UPD(0x0C092D62u, 1);  /* 0C092D60 mov.l @(disp,pc),Rn */
	IF(0x0C092D62u); { u32 t_ = r9; PR = 0x0C092D66u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092D66u); }  /* 0C092D62 jsr @Rn */
L_0C092D66: BLKS(0x0C092D66u);
	IF(0x0C092D66u); T = (s32)r0 >= 0;  /* 0C092D66 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092D70u, 4); goto L_0C092D70; } UPD(0x0C092D6Cu, 1); goto L_0C092D6C; }  /* 0C092D68 bt/s */
L_0C092D6C: BLKS(0x0C092D6Cu);
	{ IF(0x0C092D6Eu); ; /* slot nop */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C092D6C bra */
L_0C092D70: BLKS(0x0C092D70u);
	r13 = 0xB4u; UPD(0x0C092D72u, 1);  /* 0C092D70 mov.w @(disp,pc),Rn */
	IF(0x0C092D72u); MACL = r12 * r13;  /* 0C092D72 mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C092D76u, 3);  /* 0C092D74 mov.w @(disp,pc),Rn */
	IF(0x0C092D76u); r13 = MACL;  /* 0C092D76 sts macl,Rn */
	IF(0x0C092D78u); MACL = r8 * r9;  /* 0C092D78 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C092D7Cu, 4);  /* 0C092D7A mov.l @(disp,pc),Rn */
	IF(0x0C092D7Cu); r9 = MACL;  /* 0C092D7C sts macl,Rn */
	r13 += r10;  /* 0C092D7E add Rm,Rn */
	r9 += r10;  /* 0C092D80 add Rm,Rn */
	r6 = 0x84u; UPD(0x0C092D84u, 4);  /* 0C092D82 mov.w @(disp,pc),Rn */
	r3 = r13;  /* 0C092D84 mov Rm,Rn */
	r5 = R32(r13); UPD(0x0C092D88u, 2);  /* 0C092D86 mov.l @Rm,Rn */
	r3 += r6;  /* 0C092D88 add Rm,Rn */
	r7 = 0x100u; UPD(0x0C092D8Cu, 2);  /* 0C092D8A mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C092D8C add Rm,Rn */
	r11 = R32(r9); UPD(0x0C092D90u, 2);  /* 0C092D8E mov.l @Rm,Rn */
	r6 += 0x2u;  /* 0C092D90 add #imm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C092D94u, 2);  /* 0C092D92 mov.w @(disp,pc),Rn */
	r11 &= r7;  /* 0C092D94 and Rm,Rn */
	r5 &= r0;  /* 0C092D96 and Rm,Rn */
	r5 |= r11;  /* 0C092D98 or Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C092D9Cu, 4);  /* 0C092D9A mov.l @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C092D9C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C092DA0u, 2);  /* 0C092D9E mov.w @Rm,Rn */
	W32(r13, r5); UPD(0x0C092DA2u, 1);  /* 0C092DA0 mov.l Rm,@Rn */
	r10 = r4;  /* 0C092DA2 mov Rm,Rn */
	W16(r3, r4); UPD(0x0C092DA6u, 2);  /* 0C092DA4 mov.w Rm,@Rn */
	W32(r14 + 0x14u, r3); UPD(0x0C092DA8u, 1);  /* 0C092DA6 mov.l Rm,@(disp,Rn) */
	IF(0x0C092DA8u); { u32 t_ = r2; PR = 0x0C092DACu; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092DACu); }  /* 0C092DA8 jsr @Rn */
L_0C092DAC: BLKS(0x0C092DACu);
	r8 = 0x66666667u; UPD(0x0C092DAEu, 1);  /* 0C092DAC mov.l @(disp,pc),Rn */
	IF(0x0C092DAEu); r0 <<= 2;  /* 0C092DAE shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092DB0 dmuls.l Rm,Rn */
	r4 = r10;  /* 0C092DB2 mov Rm,Rn */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C092DB6u, 5);  /* 0C092DB4 mov.l @(disp,Rm),Rn */
	IF(0x0C092DB6u); r1 = MACH;  /* 0C092DB6 sts mach,Rn */
	IF(0x0C092DB8u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C092DB8 shar Rn */
	IF(0x0C092DBAu); T = r0 >> 31; r0 <<= 1;  /* 0C092DBA shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092DBC subc Rm,Rn */
	r1 -= r0;  /* 0C092DBE sub Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C092DC2u, 6);  /* 0C092DC0 mov.l @(disp,Rm),Rn */
	r8 = 0xC069AF0u; UPD(0x0C092DC4u, 1);  /* 0C092DC2 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C092DC4 add Rm,Rn */
	IF(0x0C092DC6u); { u32 t_ = r8; PR = 0x0C092DCAu; W32(r13 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092DCAu); }  /* 0C092DC6 jsr @Rn */
L_0C092DCA: BLKS(0x0C092DCAu);
	r7 = R32(r9 + 0x28u); UPD(0x0C092DCCu, 1);  /* 0C092DCA mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C092DCC add Rm,Rn */
	W32(r13 + 0x28u, r7); UPD(0x0C092DD0u, 2);  /* 0C092DCE mov.l Rm,@(disp,Rn) */
	r13 += 0x7Eu;  /* 0C092DD0 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C092DD4u, 2);  /* 0C092DD2 mov.w @Rm,Rn */
	r0 = 0xB4u; UPD(0x0C092DD6u, 1);  /* 0C092DD4 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFF82u;  /* 0C092DD6 add #imm,Rn */
	IF(0x0C092DD8u); MACL = r11 * r0;  /* 0C092DD8 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C092DDCu, 4);  /* 0C092DDA mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C092DDC mov Rm,Rn */
	IF(0x0C092DDEu); r11 = MACL;  /* 0C092DDE sts macl,Rn */
	r11 += r5;  /* 0C092DE0 add Rm,Rn */
	r6 = R32(r11 + 0x38u); UPD(0x0C092DE4u, 4);  /* 0C092DE2 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFBu;  /* 0C092DE4 add #imm,Rn */
	W32(r13 + 0x38u, r6); UPD(0x0C092DE8u, 2);  /* 0C092DE6 mov.l Rm,@(disp,Rn) */
	r2 = 0xA8u; UPD(0x0C092DEAu, 1);  /* 0C092DE8 mov.w @(disp,pc),Rn */
	r6 = R32(r13); UPD(0x0C092DECu, 1);  /* 0C092DEA mov.l @Rm,Rn */
	r4 += r2;  /* 0C092DEC add Rm,Rn */
	r7 = 0xECFFFEFFu; UPD(0x0C092DF0u, 2);  /* 0C092DEE mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C092DF0 add Rm,Rn */
	r6 &= r7;  /* 0C092DF2 and Rm,Rn */
	r2 += 0x1u;  /* 0C092DF4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C092DF8u, 4);  /* 0C092DF6 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C092DF8 add #imm,Rn */
	IF(0x0C092DFAu); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C092DFCu, 2);  /* 0C092DFA mov.b @(r0,Rm),Rn */
	W32(r13, r6); UPD(0x0C092DFEu, 1);  /* 0C092DFC mov.l Rm,@Rn */
	r3 += r10;  /* 0C092DFE add Rm,Rn */
	r5 = R32(r11); UPD(0x0C092E02u, 2);  /* 0C092E00 mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C092E04u, 1);  /* 0C092E02 mov.l @(disp,pc),Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C092E06u, 1);  /* 0C092E04 mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C092E06 and Rm,Rn */
	W8(r4, r3); UPD(0x0C092E0Au, 2);  /* 0C092E08 mov.b Rm,@Rn */
	r6 |= r5;  /* 0C092E0A or Rm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C092E0Eu, 2);  /* 0C092E0C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C092E0E mov Rm,Rn */
	W32(r13, r6); UPD(0x0C092E12u, 2);  /* 0C092E10 mov.l Rm,@Rn */
	IF(0x0C092E12u); { u32 t_ = r10; PR = 0x0C092E16u; W32(r13 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C092E16u); }  /* 0C092E12 jsr @Rn */
L_0C092E16: BLKS(0x0C092E16u);
	r4 = r12;  /* 0C092E16 mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C092E1Au, 2);  /* 0C092E18 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C092E1A mov #imm,Rn */
	IF(0x0C092E1Cu); { u32 t_ = r12; PR = 0x0C092E20u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092E20u); }  /* 0C092E1C jsr @Rn */
L_0C092E20: BLKS(0x0C092E20u);
	T = (r0 & r0) == 0;  /* 0C092E20 tst Rm,Rn */
	if (!T) { UPD(0x0C092E2Eu, 4); goto L_0C092E2E; }  /* 0C092E22 bf */
L_0C092E24: BLKS(0x0C092E24u);
	r14 += 0x18u;  /* 0C092E24 add #imm,Rn */
	r13 = 0xFFFFECE6u; UPD(0x0C092E28u, 2);  /* 0C092E26 mov.w @(disp,pc),Rn */
	IF(0x0C092E28u); { u32 tv_ = (r13 + 0x0C092E2Cu); u32 t_ = PHYS(tv_); IF(0x0C092E2Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091B12u: goto L_0C091B12; default: JUMPD(tv_); } }  /* 0C092E28 braf Rn */
L_0C092E2E: BLKS(0x0C092E2Eu);
	r3 = R32(r14 + 0x14u); UPD(0x0C092E30u, 1);  /* 0C092E2E mov.l @(disp,Rm),Rn */
	r1 = 0xC069B20u; UPD(0x0C092E32u, 1);  /* 0C092E30 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C092E34u, 1);  /* 0C092E32 mov.w @Rm,Rn */
	r5 = 0x80000u; UPD(0x0C092E36u, 1);  /* 0C092E34 mov.l @(disp,pc),Rn */
	IF(0x0C092E36u); { u32 t_ = r1; PR = 0x0C092E3Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092E3Au); }  /* 0C092E36 jsr @Rn */
L_0C092E3A: BLKS(0x0C092E3Au);
	r4 = R32(r13 + 0x24u); UPD(0x0C092E3Cu, 1);  /* 0C092E3A mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C092E3C add Rm,Rn */
	W32(r14, r4); UPD(0x0C092E40u, 2);  /* 0C092E3E mov.l Rm,@Rn */
	r5 = 0xA0000u; UPD(0x0C092E42u, 1);  /* 0C092E40 mov.l @(disp,pc),Rn */
	IF(0x0C092E42u); { u32 t_ = r8; PR = 0x0C092E46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092E46u); }  /* 0C092E42 jsr @Rn */
L_0C092E46: BLKS(0x0C092E46u);
	r6 = R32(r13 + 0x28u); UPD(0x0C092E48u, 1);  /* 0C092E46 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092E48 add #imm,Rn */
	r2 = 0x20000u; UPD(0x0C092E4Cu, 2);  /* 0C092E4A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C092E4C add Rm,Rn */
	r8 = 0xC189DC8u; UPD(0x0C092E50u, 2);  /* 0C092E4E mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C092E50 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C092E54u, 2);  /* 0C092E52 mov.l Rm,@Rn */
	r7 = r12;  /* 0C092E54 mov Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C092E58u, 2);  /* 0C092E56 mov.l Rm,@(disp,Rn) */
	{ r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C091EB0u, 3); goto L_0C091EB0; }  /* 0C092E58 bra */
L_0C092EA0: BLKS(0x0C092EA0u);
	r10 = 0xC0A8CA0u; UPD(0x0C092EA2u, 1);  /* 0C092EA0 mov.l @(disp,pc),Rn */
	IF(0x0C092EA2u); { u32 t_ = r10; PR = 0x0C092EA6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C092EA6u); }  /* 0C092EA2 jsr @Rn */
L_0C092EA6: BLKS(0x0C092EA6u);
	IF(0x0C092EA6u); T = (s32)r0 >= 0;  /* 0C092EA6 cmp/pz Rn */
	if (T) { UPD(0x0C092EB2u, 4); goto L_0C092EB2; }  /* 0C092EA8 bt */
L_0C092EAA: BLKS(0x0C092EAAu);
	r1 = 0xFFFFEEE0u; UPD(0x0C092EACu, 1);  /* 0C092EAA mov.w @(disp,pc),Rn */
	IF(0x0C092EACu); { u32 tv_ = (r1 + 0x0C092EB0u); u32 t_ = PHYS(tv_); IF(0x0C092EAEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091D90u: goto L_0C091D90; default: JUMPD(tv_); } }  /* 0C092EAC braf Rn */
L_0C092EB2: BLKS(0x0C092EB2u);
	r5 = 0xB4u; UPD(0x0C092EB4u, 1);  /* 0C092EB2 mov.w @(disp,pc),Rn */
	IF(0x0C092EB4u); MACL = r12 * r5;  /* 0C092EB4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C092EB8u, 3);  /* 0C092EB6 mov.l @(disp,pc),Rn */
	IF(0x0C092EB8u); r9 = MACL;  /* 0C092EB8 sts macl,Rn */
	IF(0x0C092EBAu); MACL = r0 * r5;  /* 0C092EBA mul.l Rm,Rn */
	r9 += r10;  /* 0C092EBC add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C092EC0u, 5);  /* 0C092EBE mov.l @(disp,Rm),Rn */
	IF(0x0C092EC0u); r4 = MACL;  /* 0C092EC0 sts macl,Rn */
	r4 += r10;  /* 0C092EC2 add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C092EC6u, 3);  /* 0C092EC4 mov.l @(disp,Rm),Rn */
	r13 = R32(r9 + 0x2Cu); UPD(0x0C092EC8u, 1);  /* 0C092EC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r4 + 0x28u); UPD(0x0C092ECAu, 1);  /* 0C092EC8 mov.l @(disp,Rm),Rn */
	r3 += r13;  /* 0C092ECA add Rm,Rn */
	r7 += r1;  /* 0C092ECC add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C092ED0u, 3);  /* 0C092ECE mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r7); UPD(0x0C092ED2u, 1);  /* 0C092ED0 mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C092ED2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C092ED6u, 2);  /* 0C092ED4 mov.w @Rm,Rn */
	IF(0x0C092ED6u); MACL = r0 * r5;  /* 0C092ED6 mul.l Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C092ED8 add #imm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C092EDCu, 4);  /* 0C092EDA mov.l @(disp,pc),Rn */
	IF(0x0C092EDCu); r4 = MACL;  /* 0C092EDC sts macl,Rn */
	r4 += r10;  /* 0C092EDE add Rm,Rn */
	r8 = R32(r4 + 0x38u); UPD(0x0C092EE2u, 3);  /* 0C092EE0 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C092EE2 mov Rm,Rn */
	r5 = R32(r9); UPD(0x0C092EE6u, 2);  /* 0C092EE4 mov.l @Rm,Rn */
	W32(r9 + 0x38u, r8); UPD(0x0C092EE8u, 1);  /* 0C092EE6 mov.l Rm,@(disp,Rn) */
	r5 &= r2;  /* 0C092EE8 and Rm,Rn */
	r6 = 0xAFu; UPD(0x0C092EECu, 2);  /* 0C092EEA mov.w @(disp,pc),Rn */
	r8 = r9;  /* 0C092EEC mov Rm,Rn */
	r11 = 0xA8u; UPD(0x0C092EF0u, 2);  /* 0C092EEE mov.w @(disp,pc),Rn */
	IF(0x0C092EF0u); r13 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C092EF2u, 1);  /* 0C092EF0 mov.b @(r0,Rm),Rn */
	r8 += r11;  /* 0C092EF2 add Rm,Rn */
	W32(r9, r5); UPD(0x0C092EF6u, 2);  /* 0C092EF4 mov.l Rm,@Rn */
	r11 += r4;  /* 0C092EF6 add Rm,Rn */
	r7 = 0x13000100u; UPD(0x0C092EFAu, 2);  /* 0C092EF8 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C092EFA add #imm,Rn */
	r0 = R32(r4); UPD(0x0C092EFEu, 2);  /* 0C092EFC mov.l @Rm,Rn */
	r8 += 0x1u;  /* 0C092EFE add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C092F02u, 2);  /* 0C092F00 mov.b @Rm,Rn */
	r0 &= r7;  /* 0C092F02 and Rm,Rn */
	r10 = 0xC069BF0u; UPD(0x0C092F06u, 2);  /* 0C092F04 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C092F06 add Rm,Rn */
	r5 |= r0;  /* 0C092F08 or Rm,Rn */
	W8(r8, r3); UPD(0x0C092F0Cu, 3);  /* 0C092F0A mov.b Rm,@Rn */
	r4 = r12;  /* 0C092F0C mov Rm,Rn */
	IF(0x0C092F0Eu); { u32 t_ = r10; PR = 0x0C092F12u; W32(r9, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C092F12u); }  /* 0C092F0E jsr @Rn */
L_0C092F12: BLKS(0x0C092F12u);
	r11 = 0xC068F00u; UPD(0x0C092F14u, 1);  /* 0C092F12 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C092F14 mov #imm,Rn */
	r10 = 0x86u; UPD(0x0C092F18u, 2);  /* 0C092F16 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C092F18 mov Rm,Rn */
	IF(0x0C092F1Au); { u32 t_ = r11; PR = 0x0C092F1Eu; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C092F1Eu); }  /* 0C092F1A jsr @Rn */
L_0C092F1E: BLKS(0x0C092F1Eu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C092F20u, 1);  /* 0C092F1E mov.w @Rm,Rn */
	r4 = r12;  /* 0C092F20 mov Rm,Rn */
	r0 += 0x8u;  /* 0C092F22 add #imm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C092F26u, 3);  /* 0C092F24 mov.l @(disp,pc),Rn */
	IF(0x0C092F26u); r0 >>= 2;  /* 0C092F26 shlr2 Rn */
	IF(0x0C092F28u); r0 >>= 2;  /* 0C092F28 shlr2 Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C092F2Cu, 3);  /* 0C092F2A mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C092F2C and #imm,r0 */
	IF(0x0C092F2Eu); { u32 t_ = r6; PR = 0x0C092F32u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C092F32u); }  /* 0C092F2E jsr @Rn */
L_0C092F32: BLKS(0x0C092F32u);
	r4 = r12;  /* 0C092F32 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C092F34 mov #imm,Rn */
	IF(0x0C092F36u); { u32 t_ = r13; PR = 0x0C092F3Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C092F3Au); }  /* 0C092F36 jsr @Rn */
L_0C092F3A: BLKS(0x0C092F3Au);
	T = (r0 & r0) == 0;  /* 0C092F3A tst Rm,Rn */
	if (T) { UPD(0x0C092F4Eu, 4); goto L_0C092F4E; }  /* 0C092F3C bt */
L_0C092F3E: BLKS(0x0C092F3Eu);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C092F40u, 1);  /* 0C092F3E mov.b @Rm,Rn */
	r11 = 0xC0BBF10u; UPD(0x0C092F42u, 1);  /* 0C092F40 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C092F44u, 1);  /* 0C092F42 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C092F44 extu.b Rm,Rn */
	IF(0x0C092F46u); { u32 t_ = r11; PR = 0x0C092F4Au; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C092F4Au); }  /* 0C092F46 jsr @Rn */
L_0C092F4A: BLKS(0x0C092F4Au);
	T = (r0 & r0) == 0;  /* 0C092F4A tst Rm,Rn */
	if (!T) { UPD(0x0C092F56u, 4); goto L_0C092F56; }  /* 0C092F4C bf */
L_0C092F4E: BLKS(0x0C092F4Eu);
	r13 = 0xFFFFEBBEu; UPD(0x0C092F50u, 1);  /* 0C092F4E mov.w @(disp,pc),Rn */
	IF(0x0C092F50u); { u32 tv_ = (r13 + 0x0C092F54u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C091B12u: goto L_0C091B12; default: JUMPD(tv_); } }  /* 0C092F50 braf Rn */
L_0C092F56: BLKS(0x0C092F56u);
	r8 = 0xC069B20u; UPD(0x0C092F58u, 1);  /* 0C092F56 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C092F5Au, 1);  /* 0C092F58 mov.w @Rm,Rn */
	r11 = 0x140000u; UPD(0x0C092F5Cu, 1);  /* 0C092F5A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C092F5C mov Rm,Rn */
	IF(0x0C092F5Eu); { u32 t_ = r8; PR = 0x0C092F62u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C092F62u); }  /* 0C092F5E jsr @Rn */
L_0C092F62: BLKS(0x0C092F62u);
	r6 = R32(r9 + 0x24u); UPD(0x0C092F64u, 1);  /* 0C092F62 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C092F64 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C092F68u, 2);  /* 0C092F66 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C092F68 add Rm,Rn */
	W32(r14, r6); UPD(0x0C092F6Cu, 2);  /* 0C092F6A mov.l Rm,@Rn */
	IF(0x0C092F6Cu); { u32 t_ = r10; PR = 0x0C092F70u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C092F70u); }  /* 0C092F6C jsr @Rn */
L_0C092F70: BLKS(0x0C092F70u);
	r6 = R32(r9 + 0x28u); UPD(0x0C092F72u, 1);  /* 0C092F70 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C092F72 add #imm,Rn */
	r8 = 0x28000u; UPD(0x0C092F76u, 2);  /* 0C092F74 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C092F76 add Rm,Rn */
	r9 = 0xC0BAD60u; UPD(0x0C092F7Au, 2);  /* 0C092F78 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C092F7A mov #imm,Rn */
	W32(r15, r8); UPD(0x0C092F7Eu, 2);  /* 0C092F7C mov.l Rm,@Rn */
	r7 = r13;  /* 0C092F7E mov Rm,Rn */
	IF(0x0C092F80u); { u32 t_ = r9; PR = 0x0C092F84u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C092F84u); }  /* 0C092F80 jsr @Rn */
L_0C092F84: BLKS(0x0C092F84u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C092B92u, 3); goto L_0C092B92; }  /* 0C092F84 bra */
}

/* FUN_0c092fd0 */
void blk_f_0C092FD0(sh3_t *c)
{
	LOCALS;
L_0C092FD0: BLKS(0x0C092FD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C092FD2u, 1);  /* 0C092FD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C092FD4u, 1);  /* 0C092FD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C092FD6u, 1);  /* 0C092FD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C092FD8u, 1);  /* 0C092FD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C092FDAu, 1);  /* 0C092FD8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C092FDCu, 1);  /* 0C092FDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C092FDEu, 1);  /* 0C092FDC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C092FE0u, 1);  /* 0C092FDE mov.l @(disp,pc),Rn */
	IF(0x0C092FE0u); r15 -= 4; W32(r15, PR); UPD(0x0C092FE2u, 1);  /* 0C092FE0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C092FE4u, 1);  /* 0C092FE2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092FE4 add #imm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C092FE8u, 2);  /* 0C092FE6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C092FE8 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C092FECu, 2);  /* 0C092FEA mov.w @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C092FEEu, 1);  /* 0C092FEC mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C092FF0u, 1);  /* 0C092FEE mov.l @(disp,pc),Rn */
	IF(0x0C092FF0u); { u32 t_ = r8; PR = 0x0C092FF4u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C092FF4u); }  /* 0C092FF0 jsr @Rn */
L_0C092FF4: BLKS(0x0C092FF4u);
	T = (r0 & r0) == 0;  /* 0C092FF4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C093010u, 4); goto L_0C093010; } UPD(0x0C092FFAu, 1); goto L_0C092FFA; }  /* 0C092FF6 bf/s */
L_0C092FFA: BLKS(0x0C092FFAu);
	r14 += 0x8u;  /* 0C092FFA add #imm,Rn */
	r15 = r14;  /* 0C092FFC mov Rm,Rn */
	IF(0x0C092FFEu); PR = R32(r15); r15 += 4; UPD(0x0C093000u, 3);  /* 0C092FFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093002u, 1);  /* 0C093000 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C093004u, 1);  /* 0C093002 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C093006u, 1);  /* 0C093004 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C093008u, 1);  /* 0C093006 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09300Au, 1);  /* 0C093008 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09300Cu, 1);  /* 0C09300A mov.l @Rm+,Rn */
	IF(0x0C09300Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09300C rts */
L_0C093010: BLKS(0x0C093010u);
	r8 = 0xC071740u; UPD(0x0C093012u, 1);  /* 0C093010 mov.l @(disp,pc),Rn */
	IF(0x0C093012u); { u32 t_ = r8; PR = 0x0C093016u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C093016u); }  /* 0C093012 jsr @Rn */
L_0C093016: BLKS(0x0C093016u);
	T = (r0 & r0) == 0;  /* 0C093016 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C092FFAu, 4); goto L_0C092FFA; } goto L_0C09301C; }  /* 0C093018 bt/s */
L_0C09301C: BLKS(0x0C09301Cu);
	r13 = 0xC28EDFCu; UPD(0x0C09301Eu, 2);  /* 0C09301C mov.l @(disp,pc),Rn */
	r0 = 0xB4u; UPD(0x0C093020u, 1);  /* 0C09301E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C093022u, 1);  /* 0C093020 mov.w @Rm+,Rn */
	IF(0x0C093022u); MACL = r12 * r0;  /* 0C093022 mul.l Rm,Rn */
	r3 = 0xC2B03A2u; UPD(0x0C093026u, 3);  /* 0C093024 mov.l @(disp,pc),Rn */
	r7 = 0xC286578u; UPD(0x0C093028u, 1);  /* 0C093026 mov.l @(disp,pc),Rn */
	IF(0x0C093028u); r8 = MACL;  /* 0C093028 sts macl,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C09302Cu, 2);  /* 0C09302A mov.w @Rm,Rn */
	r8 += r7;  /* 0C09302C add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C093030u, 2);  /* 0C09302E mov.w @Rm,Rn */
	r0 += 0xFFFFFFD6u;  /* 0C093030 add #imm,Rn */
	IF(0x0C093032u); W16(r0 + r8, r10); UPD(0x0C093034u, 2);  /* 0C093032 mov.w Rm,@(r0,Rn) */
	r4 = r5 & 0xFFFF;  /* 0C093034 extu.w Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C093036 add #imm,Rn */
	IF(0x0C093038u); W16(r0 + r8, r10); UPD(0x0C09303Au, 3);  /* 0C093038 mov.w Rm,@(r0,Rn) */
	r9 = 0x4Cu;  /* 0C09303A mov #imm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C09303Eu, 2);  /* 0C09303C mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09303E mov #imm,Rn */
	r6 = 0x80008110u; UPD(0x0C093042u, 2);  /* 0C093040 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C093044u, 1);  /* 0C093042 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C093046u, 1);  /* 0C093044 mov.l Rm,@Rn */
	r4 = r12;  /* 0C093046 mov Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C09304Au, 2);  /* 0C093048 mov.l Rm,@(disp,Rn) */
	IF(0x0C09304Au); { u32 t_ = r0; PR = 0x0C09304Eu; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09304Eu); }  /* 0C09304A jsr @Rn */
L_0C09304E: BLKS(0x0C09304Eu);
	IF(0x0C09304Eu); MACL = r11 * r9;  /* 0C09304E mul.l Rm,Rn */
	r2 = 0xC237C08u; UPD(0x0C093052u, 3);  /* 0C093050 mov.l @(disp,pc),Rn */
	r7 = 0xC286318u; UPD(0x0C093054u, 1);  /* 0C093052 mov.l @(disp,pc),Rn */
	IF(0x0C093054u); r9 = MACL;  /* 0C093054 sts macl,Rn */
	r4 = 0xC3C43C6u; UPD(0x0C093058u, 2);  /* 0C093056 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C093058 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C09305Cu, 2);  /* 0C09305A mov.w @Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C09305Eu, 1);  /* 0C09305C mov.l @(disp,Rm),Rn */
	IF(0x0C09305Eu); r5 <<= 16;  /* 0C09305E shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C093062u, 2);  /* 0C093060 mov.w @Rm,Rn */
	r5 -= r6;  /* 0C093062 sub Rm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C093066u, 2);  /* 0C093064 mov.l @(disp,pc),Rn */
	IF(0x0C093066u); r3 <<= 16;  /* 0C093066 shll16 Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C09306Au, 2);  /* 0C093068 mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C09306A mov Rm,Rn */
	IF(0x0C09306Cu); { u32 t_ = r0; PR = 0x0C093070u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C093070u); }  /* 0C09306C jsr @Rn */
L_0C093070: BLKS(0x0C093070u);
	r0 = 0xB0u; UPD(0x0C093072u, 1);  /* 0C093070 mov.w @(disp,pc),Rn */
	r9 += 0x42u;  /* 0C093072 add #imm,Rn */
	IF(0x0C093074u); W8(r0 + r8, r11); UPD(0x0C093076u, 2);  /* 0C093074 mov.b Rm,@(r0,Rn) */
	r4 = r12;  /* 0C093076 mov Rm,Rn */
	r11 = 0xA8u; UPD(0x0C09307Au, 2);  /* 0C093078 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C09307A add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C09307Eu, 2);  /* 0C09307C mov.b @Rm,Rn */
	r11 += r8;  /* 0C09307E add Rm,Rn */
	r11 += 0x1u;  /* 0C093080 add #imm,Rn */
	r6 = 0xC0A9D30u; UPD(0x0C093084u, 3);  /* 0C093082 mov.l @(disp,pc),Rn */
	r12 = r8;  /* 0C093084 mov Rm,Rn */
	IF(0x0C093086u); W8(r0 + r8, r2); UPD(0x0C093088u, 2);  /* 0C093086 mov.b Rm,@(r0,Rn) */
	W8(r11, r2); UPD(0x0C09308Au, 1);  /* 0C093088 mov.b Rm,@Rn */
	r7 = 0xC297460u; UPD(0x0C09308Cu, 1);  /* 0C09308A mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C09308Eu, 1);  /* 0C09308C mov.l Rm,@(disp,Rn) */
	IF(0x0C09308Eu); { u32 t_ = r6; PR = 0x0C093092u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C093092u); }  /* 0C09308E jsr @Rn */
L_0C093092: BLKS(0x0C093092u);
	r3 = 0xA0u; UPD(0x0C093094u, 1);  /* 0C093092 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C093094 mov #imm,Rn */
	r3 += r8;  /* 0C093096 add Rm,Rn */
	r3 += 0x3u;  /* 0C093098 add #imm,Rn */
	W8(r3, r10); UPD(0x0C09309Cu, 4);  /* 0C09309A mov.b Rm,@Rn */
	r4 = 0x8Cu; UPD(0x0C09309Eu, 1);  /* 0C09309C mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r3 -= 1; W8(r3, v_); } UPD(0x0C0930A0u, 1);  /* 0C09309E mov.b Rm,@-Rn */
	r4 += r8;  /* 0C0930A0 add Rm,Rn */
	r5 = 0x94u; UPD(0x0C0930A4u, 2);  /* 0C0930A2 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C0930A6u, 1);  /* 0C0930A4 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C0930A6 add Rm,Rn */
	{ u32 v_ = r10; r3 -= 1; W8(r3, v_); } UPD(0x0C0930AAu, 2);  /* 0C0930A8 mov.b Rm,@-Rn */
	IF(0x0C0930AAu); W32(r0 + r8, r10); UPD(0x0C0930ACu, 1);  /* 0C0930AA mov.l Rm,@(r0,Rn) */
	W32(r5, r10); UPD(0x0C0930AEu, 1);  /* 0C0930AC mov.l Rm,@Rn */
	W32(r4, r10); UPD(0x0C0930B0u, 1);  /* 0C0930AE mov.l Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0930B2u, 1);  /* 0C0930B0 mov.l @(disp,Rm),Rn */
	r10 = 0xC1B8CD0u; UPD(0x0C0930B4u, 1);  /* 0C0930B2 mov.l @(disp,pc),Rn */
	W32(r14, r1); UPD(0x0C0930B6u, 1);  /* 0C0930B4 mov.l Rm,@Rn */
	IF(0x0C0930B6u); ;  /* 0C0930B6 nop */
	UPD(0x0C0930B8u, 1);
L_0C0930B8: BLKS(0x0C0930B8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r9 = v_; } UPD(0x0C0930BAu, 1);  /* 0C0930B8 mov.w @Rm+,Rn */
	r10 += 0x4u;  /* 0C0930BA add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0930BEu, 2);  /* 0C0930BC mov.w @(disp,pc),Rn */
	IF(0x0C0930BEu); MACL = r9 * r8;  /* 0C0930BE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0930C2u, 3);  /* 0C0930C0 mov.l @(disp,pc),Rn */
	IF(0x0C0930C2u); r8 = MACL;  /* 0C0930C2 sts macl,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0930C6u, 2);  /* 0C0930C4 mov.w @Rm,Rn */
	r8 += r0;  /* 0C0930C6 add Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0930CAu, 2);  /* 0C0930C8 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0930CA add Rm,Rn */
	IF(0x0C0930CCu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0930CEu, 2);  /* 0C0930CC mov.w @(r0,Rm),Rn */
	r8 += 0x7Cu;  /* 0C0930CE add #imm,Rn */
	W16(r8, r7); UPD(0x0C0930D2u, 2);  /* 0C0930D0 mov.w Rm,@Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0930D2 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C0930D6u, 2);  /* 0C0930D4 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C0930D6 add #imm,Rn */
	W16(r8, r6); UPD(0x0C0930DAu, 2);  /* 0C0930D8 mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C0930DA mov #imm,Rn */
	r5 = 0xC2460ACu; UPD(0x0C0930DEu, 2);  /* 0C0930DC mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0930DE add #imm,Rn */
	r3 = R32(r10); UPD(0x0C0930E2u, 2);  /* 0C0930E0 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0930E4u, 1);  /* 0C0930E2 mov.w @Rm,Rn */
	r1 = 0xC0000100u; UPD(0x0C0930E6u, 1);  /* 0C0930E4 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C0930E6 extu.w Rm,Rn */
	r3 |= r1;  /* 0C0930E8 or Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0930ECu, 3);  /* 0C0930EA mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0930EC mov Rm,Rn */
	W32(r8, r3); UPD(0x0C0930F0u, 2);  /* 0C0930EE mov.l Rm,@Rn */
	r6 = 0xC0A8A30u; UPD(0x0C0930F2u, 1);  /* 0C0930F0 mov.l @(disp,pc),Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C0930F4u, 1);  /* 0C0930F2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C0930F6u, 1);  /* 0C0930F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0930F6u); { u32 t_ = r6; PR = 0x0C0930FAu; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0930FAu); }  /* 0C0930F6 jsr @Rn */
L_0C0930FA: BLKS(0x0C0930FAu);
	r3 = 0xC0A9AE0u; UPD(0x0C0930FCu, 1);  /* 0C0930FA mov.l @(disp,pc),Rn */
	IF(0x0C0930FCu); { u32 t_ = r3; PR = 0x0C093100u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C093100u); }  /* 0C0930FC jsr @Rn */
L_0C093100: BLKS(0x0C093100u);
	r5 = R32(r12 + 0x24u); UPD(0x0C093102u, 1);  /* 0C093100 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x28u); UPD(0x0C093104u, 1);  /* 0C093102 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C093106u, 1);  /* 0C093104 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C093108u, 1);  /* 0C093106 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0xCu); UPD(0x0C09310Au, 1);  /* 0C093108 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C09310Cu, 1);  /* 0C09310A mov.l Rm,@(disp,Rn) */
	r2 = R32(r10 + 0x10u); UPD(0x0C09310Eu, 1);  /* 0C09310C mov.l @(disp,Rm),Rn */
	r6 = 0xA0u; UPD(0x0C093110u, 1);  /* 0C09310E mov.w @(disp,pc),Rn */
	r10 += 0x14u;  /* 0C093110 add #imm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C093114u, 2);  /* 0C093112 mov.l Rm,@(disp,Rn) */
	r6 += r8;  /* 0C093114 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r9 = v_; } UPD(0x0C093118u, 2);  /* 0C093116 mov.b @Rm+,Rn */
	r6 += 0x1u;  /* 0C093118 add #imm,Rn */
	W8(r6, r9); UPD(0x0C09311Cu, 2);  /* 0C09311A mov.b Rm,@Rn */
	r0 = 0xB0u; UPD(0x0C09311Eu, 1);  /* 0C09311C mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C09311E add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C093122u, 2);  /* 0C093120 mov.b @Rm,Rn */
	r9 = r11;  /* 0C093122 mov Rm,Rn */
	IF(0x0C093124u); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C093126u, 2);  /* 0C093124 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C093126 add #imm,Rn */
	IF(0x0C093128u); W8(r0 + r8, r3); UPD(0x0C09312Au, 2);  /* 0C093128 mov.b Rm,@(r0,Rn) */
	r11 = (u32)(s32)(s16)r9;  /* 0C09312A exts.w Rm,Rn */
	r4 = 0xA8u; UPD(0x0C09312Eu, 2);  /* 0C09312C mov.w @(disp,pc),Rn */
	r10 += 0x3u;  /* 0C09312E add #imm,Rn */
	r0 = 0xACu; UPD(0x0C093132u, 2);  /* 0C093130 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C093132 add Rm,Rn */
	r8 += r0;  /* 0C093134 add Rm,Rn */
	W8(r6, r7); UPD(0x0C093138u, 3);  /* 0C093136 mov.b Rm,@Rn */
	r0 += r12;  /* 0C093138 add Rm,Rn */
	r0 += 0x1u;  /* 0C09313A add #imm,Rn */
	r5 = R32(r14); UPD(0x0C09313Eu, 3);  /* 0C09313C mov.l @Rm,Rn */
	r8 += 0x1u;  /* 0C09313E add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C093142u, 2);  /* 0C093140 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C093142 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C093146u, 2);  /* 0C093144 mov.b @Rm,Rn */
	W8(r8, r2); UPD(0x0C093148u, 1);  /* 0C093146 mov.b Rm,@Rn */
	r8 = 0x3u;  /* 0C093148 mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C09314A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0930B8u, 5); goto L_0C0930B8; } UPD(0x0C093150u, 1); goto L_0C093150; }  /* 0C09314C bf/s */
L_0C093150: BLKS(0x0C093150u);
	r12 = 0xC3C4165u; UPD(0x0C093152u, 1);  /* 0C093150 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C093152 mov #imm,Rn */
	W8(r12, r13); UPD(0x0C093156u, 2);  /* 0C093154 mov.b Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C092FFAu, 3); goto L_0C092FFA; }  /* 0C093156 bra */
}

/* FUN_0c0931c0 */
void blk_f_0C0931C0(sh3_t *c)
{
	LOCALS;
L_0C0931C0: BLKS(0x0C0931C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0931C2u, 1);  /* 0C0931C0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0931C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0931C6u, 2);  /* 0C0931C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0931C8u, 1);  /* 0C0931C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0931CAu, 1);  /* 0C0931C8 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0931CCu, 1);  /* 0C0931CA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0931CEu, 1);  /* 0C0931CC mov.l Rm,@-Rn */
	IF(0x0C0931CEu); MACL = r1 * r2;  /* 0C0931CE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0931D2u, 3);  /* 0C0931D0 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0931D4u, 1);  /* 0C0931D2 mov.l @(disp,pc),Rn */
	IF(0x0C0931D4u); r10 = MACL;  /* 0C0931D4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0931D8u, 2);  /* 0C0931D6 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C0931D8 add Rm,Rn */
	IF(0x0C0931DAu); r15 -= 4; W32(r15, PR); UPD(0x0C0931DCu, 2);  /* 0C0931DA sts.l pr,@-Rn */
	r10 += 0x7Cu;  /* 0C0931DC add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0931E0u, 2);  /* 0C0931DE mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0931E0 add #imm,Rn */
	IF(0x0C0931E2u); MACL = r3 * r2;  /* 0C0931E2 mul.l Rm,Rn */
	r14 = r15;  /* 0C0931E4 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C0931E8u, 5);  /* 0C0931E6 mov.l Rm,@Rn */
	IF(0x0C0931E8u); r3 = MACL;  /* 0C0931E8 sts macl,Rn */
	r3 += r0;  /* 0C0931EA add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0931EEu, 3);  /* 0C0931EC mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C0931EE cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 += 0xFFFFFF84u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0931F8u, 4); goto L_0C0931F8; } goto L_0C0931F4; }  /* 0C0931F0 bf/s */
L_0C0931F4: BLKS(0x0C0931F4u);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C0932F0u, 4); goto L_0C0932F0; }  /* 0C0931F4 bra */
L_0C0931F8: BLKS(0x0C0931F8u);
	r8 = 0xC0C2360u; UPD(0x0C0931FAu, 1);  /* 0C0931F8 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0931FA mov #imm,Rn */
	IF(0x0C0931FCu); { u32 t_ = r8; PR = 0x0C093200u; r12 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C093200u); }  /* 0C0931FC jsr @Rn */
L_0C093200: BLKS(0x0C093200u);
	r4 = (u32)(s32)(s16)r0;  /* 0C093200 exts.w Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C093204u, 2);  /* 0C093202 mov.l Rm,@(disp,Rn) */
L_0C093204: BLKS(0x0C093204u);
	r2 = 0xC1B8D30u; UPD(0x0C093206u, 1);  /* 0C093204 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C093206 mov Rm,Rn */
	r0 += r0;  /* 0C093208 add Rm,Rn */
	IF(0x0C09320Au); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09320Cu, 3);  /* 0C09320A mov.w @(r0,Rm),Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C09320Eu, 1);  /* 0C09320C mov.l @(disp,Rm),Rn */
	r8 = 0xC069B20u; UPD(0x0C093210u, 1);  /* 0C09320E mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C093210 add Rm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C093212 exts.w Rm,Rn */
	r5 = 0x300000u; UPD(0x0C093216u, 3);  /* 0C093214 mov.l @(disp,pc),Rn */
	IF(0x0C093216u); { u32 t_ = r8; PR = 0x0C09321Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09321Au); }  /* 0C093216 jsr @Rn */
L_0C09321A: BLKS(0x0C09321Au);
	r11 = 0x66666667u; UPD(0x0C09321Cu, 1);  /* 0C09321A mov.l @(disp,pc),Rn */
	IF(0x0C09321Cu); r0 <<= 2;  /* 0C09321C shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r11; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09321E dmuls.l Rm,Rn */
	r1 = R32(r14); UPD(0x0C093222u, 4);  /* 0C093220 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C093224u, 1);  /* 0C093222 mov.w @(disp,pc),Rn */
	IF(0x0C093224u); r5 = MACH;  /* 0C093224 sts mach,Rn */
	IF(0x0C093226u); MACL = r1 * r4;  /* 0C093226 mul.l Rm,Rn */
	IF(0x0C093228u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C093228 shar Rn */
	IF(0x0C09322Au); T = r0 >> 31; r0 <<= 1;  /* 0C09322A shll Rn */
	r4 = r9;  /* 0C09322C mov Rm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09322E subc Rm,Rn */
	r11 = R32(r12 + 0x24u); UPD(0x0C093232u, 8);  /* 0C093230 mov.l @(disp,Rm),Rn */
	IF(0x0C093232u); r7 = MACL;  /* 0C093232 sts macl,Rn */
	r9 = 0xC069AF0u; UPD(0x0C093236u, 2);  /* 0C093234 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C093236 sub Rm,Rn */
	r11 += r5;  /* 0C093238 add Rm,Rn */
	r5 = 0x300000u; UPD(0x0C09323Cu, 3);  /* 0C09323A mov.l @(disp,pc),Rn */
	IF(0x0C09323Cu); { u32 t_ = r9; PR = 0x0C093240u; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C093240u); }  /* 0C09323C jsr @Rn */
L_0C093240: BLKS(0x0C093240u);
	r7 = R32(r12 + 0x28u); UPD(0x0C093242u, 1);  /* 0C093240 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C093242 add #imm,Rn */
	r7 += r0;  /* 0C093244 add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C093248u, 3);  /* 0C093246 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C093248 mov Rm,Rn */
	IF(0x0C09324Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09324Cu, 2);  /* 0C09324A mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C09324C mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C09324E extu.b Rm,Rn */
	r0 = 0x14u;  /* 0C093250 mov #imm,Rn */
	r10 = 0xC0C0030u; UPD(0x0C093254u, 4);  /* 0C093252 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C093254 mov Rm,Rn */
	W32(r15, r2); UPD(0x0C093258u, 2);  /* 0C093256 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09325Au, 1);  /* 0C093258 mov.l Rm,@(disp,Rn) */
	IF(0x0C09325Au); { u32 t_ = r10; PR = 0x0C09325Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0030, 0x0C0C0030u, 0x0C09325Eu); }  /* 0C09325A jsr @Rn */
L_0C09325E: BLKS(0x0C09325Eu);
	r6 = r13;  /* 0C09325E mov Rm,Rn */
	r6 += 0x1u;  /* 0C093260 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C093262 exts.w Rm,Rn */
	r5 = 0x2u;  /* 0C093264 mov #imm,Rn */
	T = (s32)r13 > (s32)r5;  /* 0C093266 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093204u, 8); goto L_0C093204; } goto L_0C09326C; }  /* 0C093268 bf/s */
L_0C09326C: BLKS(0x0C09326Cu);
	r1 = R32(r14 + 0x8u); UPD(0x0C09326Eu, 2);  /* 0C09326C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09326E add #imm,Rn */
	r12 = 0xC286578u; UPD(0x0C093272u, 2);  /* 0C093270 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C093272 mov #imm,Rn */
	r12 += r1;  /* 0C093274 add Rm,Rn */
	r9 += r12;  /* 0C093276 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r9); UPD(0x0C09327Au, 4);  /* 0C093278 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C09327A mov #imm,Rn */
	r2 = r13 & 0xFF;  /* 0C09327C extu.b Rm,Rn */
	r10 = 0xC0C04D0u; UPD(0x0C093280u, 3);  /* 0C09327E mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C093282u, 1);  /* 0C093280 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C093284u, 1);  /* 0C093282 mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C093286u, 1);  /* 0C093284 mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C093288u, 1);  /* 0C093286 mov.l @(disp,Rm),Rn */
	IF(0x0C093288u); { u32 t_ = r10; PR = 0x0C09328Cu; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C04D0, 0x0C0C04D0u, 0x0C09328Cu); }  /* 0C093288 jsr @Rn */
L_0C09328C: BLKS(0x0C09328Cu);
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C09328Eu, 1);  /* 0C09328C mov.b @Rm,Rn */
	r4 = 0x14u;  /* 0C09328E mov #imm,Rn */
	r5 = r8 & 0xFF;  /* 0C093290 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C093294u, 3);  /* 0C093292 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C093296u, 1);  /* 0C093294 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C093296 mov #imm,Rn */
	r11 = 0xC0BFA40u; UPD(0x0C09329Au, 2);  /* 0C093298 mov.l @(disp,pc),Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C09329Cu, 1);  /* 0C09329A mov.l @(disp,Rm),Rn */
	r4 = R32(r12); UPD(0x0C09329Eu, 1);  /* 0C09329C mov.l @Rm,Rn */
	IF(0x0C09329Eu); { u32 t_ = r11; PR = 0x0C0932A2u; r6 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFA40, 0x0C0BFA40u, 0x0C0932A2u); }  /* 0C09329E jsr @Rn */
L_0C0932A2: BLKS(0x0C0932A2u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0932A4u, 1);  /* 0C0932A2 mov.b @Rm,Rn */
	r5 = 0xAu;  /* 0C0932A4 mov #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0932A6 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0932AAu, 3);  /* 0C0932A8 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C0932ACu, 1);  /* 0C0932AA mov.w @(disp,pc),Rn */
	IF(0x0C0932ACu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0932AEu, 1);  /* 0C0932AC mov.b @(r0,Rm),Rn */
	r13 = r3 & 0xFF;  /* 0C0932AE extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0932B2u, 2);  /* 0C0932B0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0932B4u, 1);  /* 0C0932B2 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C0932B6u, 1);  /* 0C0932B4 mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C0932B8u, 1);  /* 0C0932B6 mov.l @(disp,Rm),Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0932BAu, 1);  /* 0C0932B8 mov.l @(disp,Rm),Rn */
L_0C0932BA: BLKS(0x0C0932BAu);
	IF(0x0C0932BAu); { u32 t_ = r0; PR = 0x0C0932BEu; IF(0x0C0932BCu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0932BEu); }  /* 0C0932BA jsr @Rn */
L_0C0932BE: BLKS(0x0C0932BEu);
	r1 = R32(r14); UPD(0x0C0932C0u, 1);  /* 0C0932BE mov.l @Rm,Rn */
	r2 = 0x0u;  /* 0C0932C0 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0932C4u, 2);  /* 0C0932C2 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0932C4 add #imm,Rn */
	IF(0x0C0932C6u); MACL = r1 * r9;  /* 0C0932C6 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0932CAu, 4);  /* 0C0932C8 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C0932CA add #imm,Rn */
	IF(0x0C0932CCu); r0 = MACL;  /* 0C0932CC sts macl,Rn */
	IF(0x0C0932CEu); W32(r0 + r10, r2); UPD(0x0C0932D0u, 3);  /* 0C0932CE mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0932D0 mov Rm,Rn */
	IF(0x0C0932D2u); PR = R32(r15); r15 += 4; UPD(0x0C0932D4u, 2);  /* 0C0932D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0932D6u, 1);  /* 0C0932D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0932D8u, 1);  /* 0C0932D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0932DAu, 1);  /* 0C0932D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0932DCu, 1);  /* 0C0932DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0932DEu, 1);  /* 0C0932DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0932E0u, 1);  /* 0C0932DE mov.l @Rm+,Rn */
	IF(0x0C0932E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0932E0 rts */
L_0C0932F0: BLKS(0x0C0932F0u);
	r8 = 0xB0u; UPD(0x0C0932F2u, 1);  /* 0C0932F0 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0932F2 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0932F6u, 2);  /* 0C0932F4 mov.b @Rm,Rn */
	r11 = 0xA9u; UPD(0x0C0932F8u, 1);  /* 0C0932F6 mov.w @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0932F8 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0932FCu, 2);  /* 0C0932FA mov.l Rm,@Rn */
	r11 += r10;  /* 0C0932FC add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C093300u, 2);  /* 0C0932FE mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C093300 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C093302 extu.b Rm,Rn */
	r13 = 0xC0BFD30u; UPD(0x0C093306u, 3);  /* 0C093304 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C093308u, 1);  /* 0C093306 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C09330Au, 1);  /* 0C093308 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C09330Cu, 1);  /* 0C09330A mov.l @(disp,Rm),Rn */
	IF(0x0C09330Cu); { u32 t_ = r13; PR = 0x0C093310u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFD30, 0x0C0BFD30u, 0x0C093310u); }  /* 0C09330C jsr @Rn */
L_0C093310: BLKS(0x0C093310u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C093312u, 1);  /* 0C093310 mov.b @Rm,Rn */
	r5 = 0x1u;  /* 0C093312 mov #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C093314 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C093318u, 3);  /* 0C093316 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C09331Au, 1);  /* 0C093318 mov.b @Rm,Rn */
	r9 = r12 & 0xFF;  /* 0C09331A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09331Eu, 2);  /* 0C09331C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BF010u; UPD(0x0C093320u, 1);  /* 0C09331E mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C093322u, 1);  /* 0C093320 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C093324u, 1);  /* 0C093322 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0932BAu, 3); goto L_0C0932BA; }  /* 0C093324 bra */
}

void blk_f_0C093370(sh3_t *c)
{
	LOCALS;
L_0C093370: BLKS(0x0C093370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C093372u, 1);  /* 0C093370 mov.l Rm,@-Rn */
	r1 = 0x10u;  /* 0C093372 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C093376u, 2);  /* 0C093374 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C093378u, 1);  /* 0C093376 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09337Au, 1);  /* 0C093378 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09337Cu, 1);  /* 0C09337A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09337C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C093380u, 2);  /* 0C09337E mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C093382u, 1);  /* 0C093380 mov.w @(disp,pc),Rn */
	IF(0x0C093382u); r15 -= 4; W32(r15, PR); UPD(0x0C093384u, 1);  /* 0C093382 sts.l pr,@-Rn */
	IF(0x0C093384u); MACL = r11 * r2;  /* 0C093384 mul.l Rm,Rn */
	r3 = 0xC2B07FCu; UPD(0x0C093388u, 3);  /* 0C093386 mov.l @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C09338Au, 1);  /* 0C093388 mov.l Rm,@Rn */
	r0 = 0xC286578u; UPD(0x0C09338Cu, 1);  /* 0C09338A mov.l @(disp,pc),Rn */
	IF(0x0C09338Cu); r3 = MACL;  /* 0C09338C sts macl,Rn */
	r3 += r0;  /* 0C09338E add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C093392u, 3);  /* 0C093390 mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C093392 mov #imm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C093394 add #imm,Rn */
	T = r2 > r0;  /* 0C093396 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0933A0u, 6); goto L_0C0933A0; } goto L_0C09339C; }  /* 0C093398 bf/s */
L_0C09339C: BLKS(0x0C09339Cu);
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0934D0u, 4); goto L_0C0934D0; }  /* 0C09339C bra */
L_0C0933A0: BLKS(0x0C0933A0u);
	r0 = 0xC0933B4u;  /* 0C0933A0 mova @(disp,pc),r0 */
	IF(0x0C0933A2u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0933A4u, 2);  /* 0C0933A2 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0933A4 extu.b Rm,Rn */
	IF(0x0C0933A6u); { u32 tv_ = (r4 + 0x0C0933AAu); u32 t_ = PHYS(tv_); IF(0x0C0933A8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0933C0u: goto L_0C0933C0; case 0x0C093420u: goto L_0C093420; case 0x0C093480u: goto L_0C093480; default: JUMPD(tv_); } }  /* 0C0933A6 braf Rn */
L_0C0933C0: BLKS(0x0C0933C0u);
	r1 = 0xC0931C0u; UPD(0x0C0933C2u, 1);  /* 0C0933C0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0933C2 mov Rm,Rn */
	UPD(0x0C0933C4u, 1);
L_0C0933C4: BLKS(0x0C0933C4u);
	IF(0x0C0933C4u); { u32 t_ = r1; PR = 0x0C0933C8u; IF(0x0C0933C6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0933C8u); }  /* 0C0933C4 jsr @Rn */
L_0C0933C8: BLKS(0x0C0933C8u);
	r3 = 0xB4u; UPD(0x0C0933CAu, 1);  /* 0C0933C8 mov.w @(disp,pc),Rn */
	IF(0x0C0933CAu); MACL = r11 * r3;  /* 0C0933CA mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0933CEu, 3);  /* 0C0933CC mov.l @(disp,pc),Rn */
	IF(0x0C0933CEu); r4 = MACL;  /* 0C0933CE sts macl,Rn */
	r4 += r10;  /* 0C0933D0 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C0933D4u, 3);  /* 0C0933D2 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0933D4 tst Rm,Rn */
	if (!T) { UPD(0x0C0933E2u, 4); goto L_0C0933E2; }  /* 0C0933D6 bf */
L_0C0933D8: BLKS(0x0C0933D8u);
	r4 += 0x40u;  /* 0C0933D8 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0933DCu, 2);  /* 0C0933DA mov.l @Rm,Rn */
	r11 = 0xC34Fu; UPD(0x0C0933DEu, 1);  /* 0C0933DC mov.l @(disp,pc),Rn */
	T = r4 > r11;  /* 0C0933DE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C093400u, 4); goto L_0C093400; }  /* 0C0933E0 bf */
L_0C0933E2: BLKS(0x0C0933E2u);
	r15 = r14;  /* 0C0933E2 mov Rm,Rn */
	IF(0x0C0933E4u); PR = R32(r15); r15 += 4; UPD(0x0C0933E6u, 2);  /* 0C0933E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0933E8u, 1);  /* 0C0933E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0933EAu, 1);  /* 0C0933E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0933ECu, 1);  /* 0C0933EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0933EEu, 1);  /* 0C0933EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0933F0u, 1);  /* 0C0933EE mov.l @Rm+,Rn */
	IF(0x0C0933F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0933F0 rts */
L_0C093400: BLKS(0x0C093400u);
	r7 = 0x4u;  /* 0C093400 mov #imm,Rn */
	IF(0x0C093402u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C093402 shld Rm,Rn */
	r6 = 0x40000u; UPD(0x0C093406u, 3);  /* 0C093404 mov.l @(disp,pc),Rn */
	r5 = 0xC071C90u; UPD(0x0C093408u, 1);  /* 0C093406 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C093408 add Rm,Rn */
	r15 = r14;  /* 0C09340A mov Rm,Rn */
	IF(0x0C09340Cu); PR = R32(r15); r15 += 4; UPD(0x0C09340Eu, 3);  /* 0C09340C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093410u, 1);  /* 0C09340E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C093412u, 1);  /* 0C093410 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C093414u, 1);  /* 0C093412 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C093416u, 1);  /* 0C093414 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093418u, 1);  /* 0C093416 mov.l @Rm+,Rn */
	IF(0x0C093418u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C093418 jmp @Rn */
L_0C093420: BLKS(0x0C093420u);
	r8 = 0xC0A8B50u; UPD(0x0C093422u, 1);  /* 0C093420 mov.l @(disp,pc),Rn */
	IF(0x0C093422u); { u32 t_ = r8; PR = 0x0C093426u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C093426u); }  /* 0C093422 jsr @Rn */
L_0C093426: BLKS(0x0C093426u);
	IF(0x0C093426u); T = (s32)r0 >= 0;  /* 0C093426 cmp/pz Rn */
	if (!T) { UPD(0x0C093470u, 4); goto L_0C093470; }  /* 0C093428 bf */
L_0C09342A: BLKS(0x0C09342Au);
	r15 += 0xFFFFFFF8u;  /* 0C09342A add #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09342Eu, 2);  /* 0C09342C mov.w @(disp,pc),Rn */
	IF(0x0C09342Eu); MACL = r11 * r9;  /* 0C09342E mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093432u, 3);  /* 0C093430 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C093432 mov #imm,Rn */
	IF(0x0C093434u); r8 = MACL;  /* 0C093434 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C093438u, 3);  /* 0C093436 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C093438 add Rm,Rn */
	IF(0x0C09343Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09343Cu, 2);  /* 0C09343A mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C09343C mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C09343E extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C093442u, 3);  /* 0C093440 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C093444u, 1);  /* 0C093442 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BFE70u; UPD(0x0C093446u, 1);  /* 0C093444 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C093448u, 1);  /* 0C093446 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C09344Au, 1);  /* 0C093448 mov.l @Rm,Rn */
	IF(0x0C09344Au); { u32 t_ = r12; PR = 0x0C09344Eu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09344Eu); }  /* 0C09344A jsr @Rn */
L_0C09344E: BLKS(0x0C09344Eu);
	r8 += 0x7Eu;  /* 0C09344E add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C093452u, 2);  /* 0C093450 mov.w @Rm,Rn */
	IF(0x0C093452u); MACL = r6 * r9;  /* 0C093452 mul.l Rm,Rn */
	r2 = 0xA5u; UPD(0x0C093456u, 3);  /* 0C093454 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C093456 add #imm,Rn */
	IF(0x0C093458u); r0 = MACL;  /* 0C093458 sts macl,Rn */
	r0 += r10;  /* 0C09345A add Rm,Rn */
	UPD(0x0C09345Cu, 3);
L_0C09345C: BLKS(0x0C09345Cu);
	r9 = 0x1u;  /* 0C09345C mov #imm,Rn */
	r12 = 0x0u;  /* 0C09345E mov #imm,Rn */
	IF(0x0C093460u); W8(r0 + r2, r9); UPD(0x0C093462u, 3);  /* 0C093460 mov.b Rm,@(r0,Rn) */
	r15 += 0x8u;  /* 0C093462 add #imm,Rn */
	W32(r8, r12); UPD(0x0C093466u, 2);  /* 0C093464 mov.l Rm,@Rn */
L_0C093466: BLKS(0x0C093466u);
	r4 = 0x100000u; UPD(0x0C093468u, 1);  /* 0C093466 mov.l @(disp,pc),Rn */
	r1 = 0xC071C90u; UPD(0x0C09346Au, 1);  /* 0C093468 mov.l @(disp,pc),Rn */
	{ IF(0x0C09346Cu); ; /* slot nop */ UPD(0x0C0933C4u, 3); goto L_0C0933C4; }  /* 0C09346A bra */
L_0C093470: BLKS(0x0C093470u);
	r3 = 0xB4u; UPD(0x0C093472u, 1);  /* 0C093470 mov.w @(disp,pc),Rn */
	IF(0x0C093472u); MACL = r11 * r3;  /* 0C093472 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093476u, 3);  /* 0C093474 mov.l @(disp,pc),Rn */
	IF(0x0C093476u); r0 = MACL;  /* 0C093476 sts macl,Rn */
	r11 = 0x0u;  /* 0C093478 mov #imm,Rn */
	{ IF(0x0C09347Cu); W32(r0 + r10, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0933E2u, 5); goto L_0C0933E2; }  /* 0C09347A bra */
L_0C093480: BLKS(0x0C093480u);
	r9 = 0xC0A8B50u; UPD(0x0C093482u, 1);  /* 0C093480 mov.l @(disp,pc),Rn */
	IF(0x0C093482u); { u32 t_ = r9; PR = 0x0C093486u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C093486u); }  /* 0C093482 jsr @Rn */
L_0C093486: BLKS(0x0C093486u);
	IF(0x0C093486u); T = (s32)r0 >= 0;  /* 0C093486 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093470u, 4); goto L_0C093470; } goto L_0C09348C; }  /* 0C093488 bf/s */
L_0C09348C: BLKS(0x0C09348Cu);
	r9 = 0xB4u; UPD(0x0C09348Eu, 2);  /* 0C09348C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09348E add #imm,Rn */
	IF(0x0C093490u); MACL = r11 * r9;  /* 0C093490 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093494u, 4);  /* 0C093492 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C093494 mov #imm,Rn */
	IF(0x0C093496u); r8 = MACL;  /* 0C093496 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09349Au, 3);  /* 0C093498 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09349A add Rm,Rn */
	IF(0x0C09349Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09349Eu, 2);  /* 0C09349C mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C09349E mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0934A0 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0934A4u, 3);  /* 0C0934A2 mov.l Rm,@Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0934A6u, 1);  /* 0C0934A4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0934A8u, 1);  /* 0C0934A6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0934AAu, 1);  /* 0C0934A8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0934ACu, 1);  /* 0C0934AA mov.l @(disp,Rm),Rn */
	IF(0x0C0934ACu); { u32 t_ = r0; PR = 0x0C0934B0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C0934B0u); }  /* 0C0934AC jsr @Rn */
L_0C0934B0: BLKS(0x0C0934B0u);
	IF(0x0C0934B0u); MACL = r12 * r9;  /* 0C0934B0 mul.l Rm,Rn */
	r8 += 0x7Eu;  /* 0C0934B2 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C0934B6u, 4);  /* 0C0934B4 mov.w @Rm,Rn */
	IF(0x0C0934B6u); r4 = MACL;  /* 0C0934B6 sts macl,Rn */
	r4 += r10;  /* 0C0934B8 add Rm,Rn */
	r5 = R32(r4); UPD(0x0C0934BCu, 3);  /* 0C0934BA mov.l @Rm,Rn */
	IF(0x0C0934BCu); MACL = r1 * r9;  /* 0C0934BC mul.l Rm,Rn */
	r6 = 0x3000000u; UPD(0x0C0934C0u, 3);  /* 0C0934BE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0934C0 add #imm,Rn */
	r5 |= r6;  /* 0C0934C2 or Rm,Rn */
	r2 = 0xA6u; UPD(0x0C0934C6u, 3);  /* 0C0934C4 mov.w @(disp,pc),Rn */
	IF(0x0C0934C6u); r0 = MACL;  /* 0C0934C6 sts macl,Rn */
	W32(r4, r5); UPD(0x0C0934CAu, 2);  /* 0C0934C8 mov.l Rm,@Rn */
	{ r0 += r10; /* slot add Rm,Rn */ UPD(0x0C09345Cu, 3); goto L_0C09345C; }  /* 0C0934CA bra */
L_0C0934D0: BLKS(0x0C0934D0u);
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C093466u, 3); goto L_0C093466; }  /* 0C0934D0 bra */
}

void blk_f_0C093500(sh3_t *c)
{
	LOCALS;
	goto L_0C093500;
L_0C093370: BLKS(0x0C093370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C093372u, 1);  /* 0C093370 mov.l Rm,@-Rn */
	r1 = 0x10u;  /* 0C093372 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C093376u, 2);  /* 0C093374 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C093378u, 1);  /* 0C093376 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09337Au, 1);  /* 0C093378 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09337Cu, 1);  /* 0C09337A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09337C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C093380u, 2);  /* 0C09337E mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C093382u, 1);  /* 0C093380 mov.w @(disp,pc),Rn */
	IF(0x0C093382u); r15 -= 4; W32(r15, PR); UPD(0x0C093384u, 1);  /* 0C093382 sts.l pr,@-Rn */
	IF(0x0C093384u); MACL = r11 * r2;  /* 0C093384 mul.l Rm,Rn */
	r3 = 0xC2B07FCu; UPD(0x0C093388u, 3);  /* 0C093386 mov.l @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C09338Au, 1);  /* 0C093388 mov.l Rm,@Rn */
	r0 = 0xC286578u; UPD(0x0C09338Cu, 1);  /* 0C09338A mov.l @(disp,pc),Rn */
	IF(0x0C09338Cu); r3 = MACL;  /* 0C09338C sts macl,Rn */
	r3 += r0;  /* 0C09338E add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C093392u, 3);  /* 0C093390 mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C093392 mov #imm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C093394 add #imm,Rn */
	T = r2 > r0;  /* 0C093396 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0933A0u, 6); goto L_0C0933A0; } goto L_0C09339C; }  /* 0C093398 bf/s */
L_0C09339C: BLKS(0x0C09339Cu);
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0934D0u, 4); goto L_0C0934D0; }  /* 0C09339C bra */
L_0C0933A0: BLKS(0x0C0933A0u);
	r0 = 0xC0933B4u;  /* 0C0933A0 mova @(disp,pc),r0 */
	IF(0x0C0933A2u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0933A4u, 2);  /* 0C0933A2 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0933A4 extu.b Rm,Rn */
	IF(0x0C0933A6u); { u32 tv_ = (r4 + 0x0C0933AAu); u32 t_ = PHYS(tv_); IF(0x0C0933A8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0933C0u: goto L_0C0933C0; case 0x0C093420u: goto L_0C093420; case 0x0C093480u: goto L_0C093480; default: JUMPD(tv_); } }  /* 0C0933A6 braf Rn */
L_0C0933C0: BLKS(0x0C0933C0u);
	r1 = 0xC0931C0u; UPD(0x0C0933C2u, 1);  /* 0C0933C0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0933C2 mov Rm,Rn */
	UPD(0x0C0933C4u, 1);
L_0C0933C4: BLKS(0x0C0933C4u);
	IF(0x0C0933C4u); { u32 t_ = r1; PR = 0x0C0933C8u; IF(0x0C0933C6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0933C8u); }  /* 0C0933C4 jsr @Rn */
L_0C0933C8: BLKS(0x0C0933C8u);
	r3 = 0xB4u; UPD(0x0C0933CAu, 1);  /* 0C0933C8 mov.w @(disp,pc),Rn */
	IF(0x0C0933CAu); MACL = r11 * r3;  /* 0C0933CA mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0933CEu, 3);  /* 0C0933CC mov.l @(disp,pc),Rn */
	IF(0x0C0933CEu); r4 = MACL;  /* 0C0933CE sts macl,Rn */
	r4 += r10;  /* 0C0933D0 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C0933D4u, 3);  /* 0C0933D2 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0933D4 tst Rm,Rn */
	if (!T) { UPD(0x0C0933E2u, 4); goto L_0C0933E2; }  /* 0C0933D6 bf */
L_0C0933D8: BLKS(0x0C0933D8u);
	r4 += 0x40u;  /* 0C0933D8 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0933DCu, 2);  /* 0C0933DA mov.l @Rm,Rn */
	r11 = 0xC34Fu; UPD(0x0C0933DEu, 1);  /* 0C0933DC mov.l @(disp,pc),Rn */
	T = r4 > r11;  /* 0C0933DE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C093400u, 4); goto L_0C093400; }  /* 0C0933E0 bf */
L_0C0933E2: BLKS(0x0C0933E2u);
	r15 = r14;  /* 0C0933E2 mov Rm,Rn */
	IF(0x0C0933E4u); PR = R32(r15); r15 += 4; UPD(0x0C0933E6u, 2);  /* 0C0933E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0933E8u, 1);  /* 0C0933E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0933EAu, 1);  /* 0C0933E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0933ECu, 1);  /* 0C0933EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0933EEu, 1);  /* 0C0933EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0933F0u, 1);  /* 0C0933EE mov.l @Rm+,Rn */
	IF(0x0C0933F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0933F0 rts */
L_0C093400: BLKS(0x0C093400u);
	r7 = 0x4u;  /* 0C093400 mov #imm,Rn */
	IF(0x0C093402u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C093402 shld Rm,Rn */
	r6 = 0x40000u; UPD(0x0C093406u, 3);  /* 0C093404 mov.l @(disp,pc),Rn */
	r5 = 0xC071C90u; UPD(0x0C093408u, 1);  /* 0C093406 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C093408 add Rm,Rn */
	r15 = r14;  /* 0C09340A mov Rm,Rn */
	IF(0x0C09340Cu); PR = R32(r15); r15 += 4; UPD(0x0C09340Eu, 3);  /* 0C09340C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093410u, 1);  /* 0C09340E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C093412u, 1);  /* 0C093410 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C093414u, 1);  /* 0C093412 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C093416u, 1);  /* 0C093414 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093418u, 1);  /* 0C093416 mov.l @Rm+,Rn */
	IF(0x0C093418u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C093418 jmp @Rn */
L_0C093420: BLKS(0x0C093420u);
	r8 = 0xC0A8B50u; UPD(0x0C093422u, 1);  /* 0C093420 mov.l @(disp,pc),Rn */
	IF(0x0C093422u); { u32 t_ = r8; PR = 0x0C093426u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C093426u); }  /* 0C093422 jsr @Rn */
L_0C093426: BLKS(0x0C093426u);
	IF(0x0C093426u); T = (s32)r0 >= 0;  /* 0C093426 cmp/pz Rn */
	if (!T) { UPD(0x0C093470u, 4); goto L_0C093470; }  /* 0C093428 bf */
L_0C09342A: BLKS(0x0C09342Au);
	r15 += 0xFFFFFFF8u;  /* 0C09342A add #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09342Eu, 2);  /* 0C09342C mov.w @(disp,pc),Rn */
	IF(0x0C09342Eu); MACL = r11 * r9;  /* 0C09342E mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093432u, 3);  /* 0C093430 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C093432 mov #imm,Rn */
	IF(0x0C093434u); r8 = MACL;  /* 0C093434 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C093438u, 3);  /* 0C093436 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C093438 add Rm,Rn */
	IF(0x0C09343Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09343Cu, 2);  /* 0C09343A mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C09343C mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C09343E extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C093442u, 3);  /* 0C093440 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C093444u, 1);  /* 0C093442 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BFE70u; UPD(0x0C093446u, 1);  /* 0C093444 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C093448u, 1);  /* 0C093446 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C09344Au, 1);  /* 0C093448 mov.l @Rm,Rn */
	IF(0x0C09344Au); { u32 t_ = r12; PR = 0x0C09344Eu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09344Eu); }  /* 0C09344A jsr @Rn */
L_0C09344E: BLKS(0x0C09344Eu);
	r8 += 0x7Eu;  /* 0C09344E add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C093452u, 2);  /* 0C093450 mov.w @Rm,Rn */
	IF(0x0C093452u); MACL = r6 * r9;  /* 0C093452 mul.l Rm,Rn */
	r2 = 0xA5u; UPD(0x0C093456u, 3);  /* 0C093454 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C093456 add #imm,Rn */
	IF(0x0C093458u); r0 = MACL;  /* 0C093458 sts macl,Rn */
	r0 += r10;  /* 0C09345A add Rm,Rn */
	UPD(0x0C09345Cu, 3);
L_0C09345C: BLKS(0x0C09345Cu);
	r9 = 0x1u;  /* 0C09345C mov #imm,Rn */
	r12 = 0x0u;  /* 0C09345E mov #imm,Rn */
	IF(0x0C093460u); W8(r0 + r2, r9); UPD(0x0C093462u, 3);  /* 0C093460 mov.b Rm,@(r0,Rn) */
	r15 += 0x8u;  /* 0C093462 add #imm,Rn */
	W32(r8, r12); UPD(0x0C093466u, 2);  /* 0C093464 mov.l Rm,@Rn */
L_0C093466: BLKS(0x0C093466u);
	r4 = 0x100000u; UPD(0x0C093468u, 1);  /* 0C093466 mov.l @(disp,pc),Rn */
	r1 = 0xC071C90u; UPD(0x0C09346Au, 1);  /* 0C093468 mov.l @(disp,pc),Rn */
	{ IF(0x0C09346Cu); ; /* slot nop */ UPD(0x0C0933C4u, 3); goto L_0C0933C4; }  /* 0C09346A bra */
L_0C093470: BLKS(0x0C093470u);
	r3 = 0xB4u; UPD(0x0C093472u, 1);  /* 0C093470 mov.w @(disp,pc),Rn */
	IF(0x0C093472u); MACL = r11 * r3;  /* 0C093472 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093476u, 3);  /* 0C093474 mov.l @(disp,pc),Rn */
	IF(0x0C093476u); r0 = MACL;  /* 0C093476 sts macl,Rn */
	r11 = 0x0u;  /* 0C093478 mov #imm,Rn */
	{ IF(0x0C09347Cu); W32(r0 + r10, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0933E2u, 5); goto L_0C0933E2; }  /* 0C09347A bra */
L_0C093480: BLKS(0x0C093480u);
	r9 = 0xC0A8B50u; UPD(0x0C093482u, 1);  /* 0C093480 mov.l @(disp,pc),Rn */
	IF(0x0C093482u); { u32 t_ = r9; PR = 0x0C093486u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C093486u); }  /* 0C093482 jsr @Rn */
L_0C093486: BLKS(0x0C093486u);
	IF(0x0C093486u); T = (s32)r0 >= 0;  /* 0C093486 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093470u, 4); goto L_0C093470; } goto L_0C09348C; }  /* 0C093488 bf/s */
L_0C09348C: BLKS(0x0C09348Cu);
	r9 = 0xB4u; UPD(0x0C09348Eu, 2);  /* 0C09348C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09348E add #imm,Rn */
	IF(0x0C093490u); MACL = r11 * r9;  /* 0C093490 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093494u, 4);  /* 0C093492 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C093494 mov #imm,Rn */
	IF(0x0C093496u); r8 = MACL;  /* 0C093496 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09349Au, 3);  /* 0C093498 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09349A add Rm,Rn */
	IF(0x0C09349Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09349Eu, 2);  /* 0C09349C mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C09349E mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0934A0 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0934A4u, 3);  /* 0C0934A2 mov.l Rm,@Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0934A6u, 1);  /* 0C0934A4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0934A8u, 1);  /* 0C0934A6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0934AAu, 1);  /* 0C0934A8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0934ACu, 1);  /* 0C0934AA mov.l @(disp,Rm),Rn */
	IF(0x0C0934ACu); { u32 t_ = r0; PR = 0x0C0934B0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C0934B0u); }  /* 0C0934AC jsr @Rn */
L_0C0934B0: BLKS(0x0C0934B0u);
	IF(0x0C0934B0u); MACL = r12 * r9;  /* 0C0934B0 mul.l Rm,Rn */
	r8 += 0x7Eu;  /* 0C0934B2 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C0934B6u, 4);  /* 0C0934B4 mov.w @Rm,Rn */
	IF(0x0C0934B6u); r4 = MACL;  /* 0C0934B6 sts macl,Rn */
	r4 += r10;  /* 0C0934B8 add Rm,Rn */
	r5 = R32(r4); UPD(0x0C0934BCu, 3);  /* 0C0934BA mov.l @Rm,Rn */
	IF(0x0C0934BCu); MACL = r1 * r9;  /* 0C0934BC mul.l Rm,Rn */
	r6 = 0x3000000u; UPD(0x0C0934C0u, 3);  /* 0C0934BE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0934C0 add #imm,Rn */
	r5 |= r6;  /* 0C0934C2 or Rm,Rn */
	r2 = 0xA6u; UPD(0x0C0934C6u, 3);  /* 0C0934C4 mov.w @(disp,pc),Rn */
	IF(0x0C0934C6u); r0 = MACL;  /* 0C0934C6 sts macl,Rn */
	W32(r4, r5); UPD(0x0C0934CAu, 2);  /* 0C0934C8 mov.l Rm,@Rn */
	{ r0 += r10; /* slot add Rm,Rn */ UPD(0x0C09345Cu, 3); goto L_0C09345C; }  /* 0C0934CA bra */
L_0C0934D0: BLKS(0x0C0934D0u);
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C093466u, 3); goto L_0C093466; }  /* 0C0934D0 bra */
L_0C093500: BLKS(0x0C093500u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C093502u, 1);  /* 0C093500 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C093504u, 1);  /* 0C093502 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C093506u, 1);  /* 0C093504 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C093508u, 1);  /* 0C093506 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09350Au, 1);  /* 0C093508 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09350A exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C09350Eu, 2);  /* 0C09350C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C093510u, 1);  /* 0C09350E mov.l Rm,@-Rn */
	IF(0x0C093510u); MACL = r11 * r3;  /* 0C093510 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C093514u, 3);  /* 0C093512 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C093516u, 1);  /* 0C093514 mov.l @(disp,pc),Rn */
	IF(0x0C093516u); r2 = MACL;  /* 0C093516 sts macl,Rn */
	IF(0x0C093518u); r15 -= 4; W32(r15, PR); UPD(0x0C09351Au, 2);  /* 0C093518 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09351A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09351Eu, 2);  /* 0C09351C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09351E add #imm,Rn */
	r0 = 0xBu;  /* 0C093520 mov #imm,Rn */
	T = r2 > r0;  /* 0C093522 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0935E8u, 6); goto L_0C0935E8; } goto L_0C093528; }  /* 0C093524 bt/s */
L_0C093528: BLKS(0x0C093528u);
	r0 = 0xC093538u;  /* 0C093528 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09352A add Rm,Rn */
	IF(0x0C09352Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09352Eu, 4);  /* 0C09352C mov.w @(r0,Rm),Rn */
	IF(0x0C09352Eu); { u32 tv_ = (r4 + 0x0C093532u); u32 t_ = PHYS(tv_); IF(0x0C093530u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093550u: goto L_0C093550; case 0x0C093BC0u: goto L_0C093BC0; case 0x0C093C80u: goto L_0C093C80; case 0x0C093DE0u: goto L_0C093DE0; case 0x0C093EC0u: goto L_0C093EC0; case 0x0C094200u: goto L_0C094200; case 0x0C0942F0u: goto L_0C0942F0; case 0x0C0943D0u: goto L_0C0943D0; default: JUMPD(tv_); } }  /* 0C09352E braf Rn */
L_0C093550: BLKS(0x0C093550u);
	r9 = 0xB4u; UPD(0x0C093552u, 1);  /* 0C093550 mov.w @(disp,pc),Rn */
	IF(0x0C093552u); MACL = r11 * r9;  /* 0C093552 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093556u, 3);  /* 0C093554 mov.l @(disp,pc),Rn */
	IF(0x0C093556u); r8 = MACL;  /* 0C093556 sts macl,Rn */
	r8 += r10;  /* 0C093558 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C09355Cu, 3);  /* 0C09355A mov.l @Rm,Rn */
	IF(0x0C09355Cu); r0 >>= 16;  /* 0C09355C shlr16 Rn */
	IF(0x0C09355Eu); r0 <<= 2;  /* 0C09355E shll2 Rn */
	IF(0x0C093560u); r0 >>= 16;  /* 0C093560 shlr16 Rn */
	r0 &= 0x1u;  /* 0C093562 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C093564 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09356Eu, 8); goto L_0C09356E; } goto L_0C09356A; }  /* 0C093566 bt/s */
L_0C09356A: BLKS(0x0C09356Au);
	{ IF(0x0C09356Cu); ; /* slot nop */ UPD(0x0C0937B0u, 4); goto L_0C0937B0; }  /* 0C09356A bra */
L_0C09356E: BLKS(0x0C09356Eu);
	r0 = 0x9Fu; UPD(0x0C093570u, 1);  /* 0C09356E mov.w @(disp,pc),Rn */
	IF(0x0C093570u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093572u, 1);  /* 0C093570 mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C093572 extu.b Rm,Rn */
	T = r3 > r5;  /* 0C093574 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0935E8u, 5); goto L_0C0935E8; }  /* 0C093576 bt */
L_0C093578: BLKS(0x0C093578u);
	r0 = 0xC09358Cu;  /* 0C093578 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09357A add Rm,Rn */
	IF(0x0C09357Cu); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09357Eu, 3);  /* 0C09357C mov.w @(r0,Rm),Rn */
	IF(0x0C09357Eu); { u32 tv_ = (r7 + 0x0C093582u); u32 t_ = PHYS(tv_); IF(0x0C093580u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0935A0u: goto L_0C0935A0; case 0x0C093630u: goto L_0C093630; case 0x0C0936D0u: goto L_0C0936D0; case 0x0C093730u: goto L_0C093730; case 0x0C093790u: goto L_0C093790; default: JUMPD(tv_); } }  /* 0C09357E braf Rn */
L_0C0935A0: BLKS(0x0C0935A0u);
	r8 = 0xB4u; UPD(0x0C0935A2u, 1);  /* 0C0935A0 mov.w @(disp,pc),Rn */
	r3 = 0x4Cu;  /* 0C0935A2 mov #imm,Rn */
	IF(0x0C0935A4u); MACL = r11 * r8;  /* 0C0935A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0935A8u, 4);  /* 0C0935A6 mov.l @(disp,pc),Rn */
	IF(0x0C0935A8u); r8 = MACL;  /* 0C0935A8 sts macl,Rn */
	r7 = 0xA4u; UPD(0x0C0935ACu, 2);  /* 0C0935AA mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0935AC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0935B0u, 2);  /* 0C0935AE mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C0935B0 add Rm,Rn */
	r9 = 0xA0u; UPD(0x0C0935B4u, 2);  /* 0C0935B2 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C0935B4 add #imm,Rn */
	IF(0x0C0935B6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0935B8u, 2);  /* 0C0935B6 mov.b @(r0,Rm),Rn */
	r9 += r8;  /* 0C0935B8 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r1 = v_; } UPD(0x0C0935BCu, 2);  /* 0C0935BA mov.b @Rm+,Rn */
	r9 += 0x2u;  /* 0C0935BC add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0935BE extu.b Rm,Rn */
	W8(r9, r1); UPD(0x0C0935C2u, 3);  /* 0C0935C0 mov.b Rm,@Rn */
	IF(0x0C0935C2u); MACL = r4 * r3;  /* 0C0935C2 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0935C6u, 3);  /* 0C0935C4 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0935C6 add #imm,Rn */
	r0 = 0xC286318u; UPD(0x0C0935CAu, 2);  /* 0C0935C8 mov.l @(disp,pc),Rn */
	IF(0x0C0935CAu); r2 = MACL;  /* 0C0935CA sts macl,Rn */
	W8(r9, r6); UPD(0x0C0935CEu, 2);  /* 0C0935CC mov.b Rm,@Rn */
	r0 += r2;  /* 0C0935CE add Rm,Rn */
	r12 = R32(r8 + 0x24u); UPD(0x0C0935D2u, 2);  /* 0C0935D0 mov.l @(disp,Rm),Rn */
	r13 = R32(r0 + 0x8u); UPD(0x0C0935D4u, 1);  /* 0C0935D2 mov.l @(disp,Rm),Rn */
	r10 = 0x2DBFFFFFu; UPD(0x0C0935D6u, 1);  /* 0C0935D4 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C0935D6 add Rm,Rn */
	T = (s32)r12 > (s32)r10;  /* 0C0935D8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093600u, 5); goto L_0C093600; } goto L_0C0935DE; }  /* 0C0935DA bf/s */
L_0C0935DE: BLKS(0x0C0935DEu);
	r11 = 0x9Fu; UPD(0x0C0935E0u, 2);  /* 0C0935DE mov.w @(disp,pc),Rn */
	r10 = 0x4u;  /* 0C0935E0 mov #imm,Rn */
	r0 = r8;  /* 0C0935E2 mov Rm,Rn */
	IF(0x0C0935E4u); W8(r0 + r11, r10); UPD(0x0C0935E6u, 3);  /* 0C0935E4 mov.b Rm,@(r0,Rn) */
	IF(0x0C0935E6u); ;  /* 0C0935E6 nop */
	UPD(0x0C0935E8u, 1);
L_0C0935E8: BLKS(0x0C0935E8u);
	r14 += 0x8u;  /* 0C0935E8 add #imm,Rn */
	UPD(0x0C0935EAu, 1);
L_0C0935EA: BLKS(0x0C0935EAu);
	r15 = r14;  /* 0C0935EA mov Rm,Rn */
	IF(0x0C0935ECu); PR = R32(r15); r15 += 4; UPD(0x0C0935EEu, 2);  /* 0C0935EC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0935F0u, 1);  /* 0C0935EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0935F2u, 1);  /* 0C0935F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0935F4u, 1);  /* 0C0935F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0935F6u, 1);  /* 0C0935F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0935F8u, 1);  /* 0C0935F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0935FAu, 1);  /* 0C0935F8 mov.l @Rm+,Rn */
	IF(0x0C0935FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0935FA rts */
L_0C093600: BLKS(0x0C093600u);
	r4 = r11;  /* 0C093600 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C093604u, 2);  /* 0C093602 mov.l @(disp,pc),Rn */
	r5 = 0x50u;  /* 0C093604 mov #imm,Rn */
	IF(0x0C093606u); { u32 t_ = r11; PR = 0x0C09360Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09360Au); }  /* 0C093606 jsr @Rn */
L_0C09360A: BLKS(0x0C09360Au);
	T = (r0 & r0) == 0;  /* 0C09360A tst Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09360C mov #imm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C093610u, 3);  /* 0C09360E mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r12 = r_; }  /* 0C093610 negc Rm,Rn */
	r3 = 0x7FFFFFu; UPD(0x0C093614u, 2);  /* 0C093612 mov.l @(disp,pc),Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C093614 cmp/ge Rm,Rn */
	IF(0x0C093616u); r13 = T;  /* 0C093616 movt Rn */
	r12 |= r13;  /* 0C093618 or Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C09361A tst Rm,Rn */
	if (T) { UPD(0x0C0935E8u, 7); goto L_0C0935E8; }  /* 0C09361C bt */
L_0C09361E: BLKS(0x0C09361Eu);
	r9 += 0x1u;  /* 0C09361E add #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C093622u, 2);  /* 0C093620 mov.w @(disp,pc),Rn */
	IF(0x0C093622u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093624u, 1);  /* 0C093622 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C093624 mov #imm,Rn */
	r2 += 0x1u;  /* 0C093626 add #imm,Rn */
	W8(r9, r5); UPD(0x0C09362Au, 3);  /* 0C093628 mov.b Rm,@Rn */
	{ IF(0x0C09362Cu); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0935E8u, 3); goto L_0C0935E8; }  /* 0C09362A bra */
L_0C093630: BLKS(0x0C093630u);
	r9 = 0xB4u; UPD(0x0C093632u, 1);  /* 0C093630 mov.w @(disp,pc),Rn */
	IF(0x0C093632u); MACL = r11 * r9;  /* 0C093632 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C093636u, 3);  /* 0C093634 mov.l @(disp,pc),Rn */
	IF(0x0C093636u); r9 = MACL;  /* 0C093636 sts macl,Rn */
	r9 += r8;  /* 0C093638 add Rm,Rn */
	r10 = 0xA0u; UPD(0x0C09363Cu, 3);  /* 0C09363A mov.w @(disp,pc),Rn */
	r7 = r9;  /* 0C09363C mov Rm,Rn */
	r7 += r10;  /* 0C09363E add Rm,Rn */
	r7 += 0x1u;  /* 0C093640 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C093644u, 4);  /* 0C093642 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C093644 tst Rm,Rn */
	if (!T) { UPD(0x0C0935E8u, 4); goto L_0C0935E8; }  /* 0C093646 bf */
L_0C093648: BLKS(0x0C093648u);
	r12 = 0xC062780u; UPD(0x0C09364Au, 1);  /* 0C093648 mov.l @(disp,pc),Rn */
	IF(0x0C09364Au); { u32 t_ = r12; PR = 0x0C09364Eu; r4 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09364Eu); }  /* 0C09364A jsr @Rn */
L_0C09364E: BLKS(0x0C09364Eu);
	r3 = 0xE0u; UPD(0x0C093650u, 1);  /* 0C09364E mov.w @(disp,pc),Rn */
	r11 = r0;  /* 0C093650 mov Rm,Rn */
	r11 += r3;  /* 0C093652 add Rm,Rn */
	IF(0x0C093654u); { u32 t_ = r12; PR = 0x0C093658u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C093658u); }  /* 0C093654 jsr @Rn */
L_0C093658: BLKS(0x0C093658u);
	r3 = r0;  /* 0C093658 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09365Cu, 2);  /* 0C09365A mov.w @(disp,pc),Rn */
	IF(0x0C09365Cu); r11 <<= 16;  /* 0C09365C shll16 Rn */
	IF(0x0C09365Eu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C093660u, 2);  /* 0C09365E mov.b @(r0,Rm),Rn */
	r1 = r11;  /* 0C093660 mov Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C093662 extu.b Rm,Rn */
	r0 = 0x4Cu;  /* 0C093664 mov #imm,Rn */
	IF(0x0C093666u); MACL = r4 * r0;  /* 0C093666 mul.l Rm,Rn */
	r12 = 0xC286318u; UPD(0x0C09366Au, 6);  /* 0C093668 mov.l @(disp,pc),Rn */
	IF(0x0C09366Au); r13 = MACL;  /* 0C09366A sts macl,Rn */
	r12 += r13;  /* 0C09366C add Rm,Rn */
	r5 = 0x1B0u; UPD(0x0C093670u, 3);  /* 0C09366E mov.w @(disp,pc),Rn */
	r7 = R32(r12 + 0x8u); UPD(0x0C093672u, 1);  /* 0C093670 mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C093672 add Rm,Rn */
	r10 = 0x2E000000u; UPD(0x0C093676u, 2);  /* 0C093674 mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C093676 add Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C093678 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09367Cu); r3 <<= 16; /* slot shll16 Rn */ if (c_) { UPD(0x0C093682u, 5); goto L_0C093682; } goto L_0C09367E; }  /* 0C09367A bf/s */
L_0C09367E: BLKS(0x0C09367Eu);
	r11 = 0x2DC00000u; UPD(0x0C093680u, 2);  /* 0C09367E mov.l @(disp,pc),Rn */
	r11 -= r7;  /* 0C093680 sub Rm,Rn */
	UPD(0x0C093682u, 1);
L_0C093682: BLKS(0x0C093682u);
	r6 = R32(r9 + 0x24u); UPD(0x0C093684u, 1);  /* 0C093682 mov.l @(disp,Rm),Rn */
	r0 = r11;  /* 0C093684 mov Rm,Rn */
	r0 -= r6;  /* 0C093686 sub Rm,Rn */
	IF(0x0C093688u); T = (s32)r0 >= 0;  /* 0C093688 cmp/pz Rn */
	if (!T) { UPD(0x0C0936C0u, 6); goto L_0C0936C0; }  /* 0C09368A bf */
L_0C09368C: BLKS(0x0C09368Cu);
	r2 = 0xFFFFFFF9u;  /* 0C09368C mov #imm,Rn */
	IF(0x0C09368Eu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09368E shad Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C093692u, 3);  /* 0C093690 mov.l Rm,@(disp,Rn) */
	r11 = R32(r9 + 0x28u); UPD(0x0C093694u, 1);  /* 0C093692 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C093694 mov Rm,Rn */
	r0 -= r11;  /* 0C093696 sub Rm,Rn */
	IF(0x0C093698u); T = (s32)r0 >= 0;  /* 0C093698 cmp/pz Rn */
	if (!T) { UPD(0x0C0936B0u, 6); goto L_0C0936B0; }  /* 0C09369A bf */
L_0C09369C: BLKS(0x0C09369Cu);
	IF(0x0C09369Cu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09369C shad Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0936A0u, 2);  /* 0C09369E mov.l Rm,@(disp,Rn) */
	r0 = 0x9Fu; UPD(0x0C0936A2u, 1);  /* 0C0936A0 mov.w @(disp,pc),Rn */
	IF(0x0C0936A2u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0936A4u, 1);  /* 0C0936A2 mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C0936A4 add #imm,Rn */
	IF(0x0C0936A6u); W8(r0 + r9, r7); UPD(0x0C0936A8u, 2);  /* 0C0936A6 mov.b Rm,@(r0,Rn) */
L_0C0936A8: BLKS(0x0C0936A8u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C0936A8 bra */
L_0C0936B0: BLKS(0x0C0936B0u);
	{ r0 += 0x7Fu; /* slot add #imm,Rn */ UPD(0x0C09369Cu, 3); goto L_0C09369C; }  /* 0C0936B0 bra */
L_0C0936C0: BLKS(0x0C0936C0u);
	{ r0 += 0x7Fu; /* slot add #imm,Rn */ UPD(0x0C09368Cu, 3); goto L_0C09368C; }  /* 0C0936C0 bra */
L_0C0936D0: BLKS(0x0C0936D0u);
	r0 = 0xB4u; UPD(0x0C0936D2u, 1);  /* 0C0936D0 mov.w @(disp,pc),Rn */
	IF(0x0C0936D2u); MACL = r11 * r0;  /* 0C0936D2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0936D6u, 3);  /* 0C0936D4 mov.l @(disp,pc),Rn */
	r3 = 0x99u; UPD(0x0C0936D8u, 1);  /* 0C0936D6 mov.w @(disp,pc),Rn */
	IF(0x0C0936D8u); r0 = MACL;  /* 0C0936D8 sts macl,Rn */
	r0 += r2;  /* 0C0936DA add Rm,Rn */
	r13 = R32(r0 + 0x24u); UPD(0x0C0936DEu, 3);  /* 0C0936DC mov.l @(disp,Rm),Rn */
	r10 = R32(r0 + 0x28u); UPD(0x0C0936E0u, 1);  /* 0C0936DE mov.l @(disp,Rm),Rn */
	IF(0x0C0936E0u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0936E2u, 1);  /* 0C0936E0 mov.b @(r0,Rm),Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C0936E4u, 1);  /* 0C0936E2 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C0936E4 add #imm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C0936E8u, 2);  /* 0C0936E6 mov.l @(disp,Rm),Rn */
	r13 += r4;  /* 0C0936E8 add Rm,Rn */
	r10 += r1;  /* 0C0936EA add Rm,Rn */
	r2 = 0x80u; UPD(0x0C0936EEu, 3);  /* 0C0936EC mov.w @(disp,pc),Rn */
	r8 = r9 & 0xFF;  /* 0C0936EE extu.b Rm,Rn */
	W32(r0 + 0x24u, r13); UPD(0x0C0936F2u, 2);  /* 0C0936F0 mov.l Rm,@(disp,Rn) */
	T = r8 == r2;  /* 0C0936F2 cmp/eq Rm,Rn */
	W32(r0 + 0x28u, r10); UPD(0x0C0936F6u, 2);  /* 0C0936F4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; IF(0x0C0936F8u); W8(r0 + r3, r9); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0936A8u, 3); goto L_0C0936A8; } UPD(0x0C0936FAu, 1); goto L_0C0936FA; }  /* 0C0936F6 bf/s */
L_0C0936FA: BLKS(0x0C0936FAu);
	r2 += 0x21u;  /* 0C0936FA add #imm,Rn */
	r12 = 0x1u;  /* 0C0936FC mov #imm,Rn */
	IF(0x0C0936FEu); W8(r0 + r2, r12); UPD(0x0C093700u, 3);  /* 0C0936FE mov.b Rm,@(r0,Rn) */
	r6 = 0x0u;  /* 0C093700 mov #imm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C093702 add #imm,Rn */
	IF(0x0C093704u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C093706u, 3);  /* 0C093704 mov.b @(r0,Rm),Rn */
	r4 = 0x76u;  /* 0C093706 mov #imm,Rn */
	r5 += 0x1u;  /* 0C093708 add #imm,Rn */
	IF(0x0C09370Au); W8(r0 + r3, r6); UPD(0x0C09370Cu, 3);  /* 0C09370A mov.b Rm,@(r0,Rn) */
	IF(0x0C09370Cu); W8(r0 + r2, r5); UPD(0x0C09370Eu, 1);  /* 0C09370C mov.b Rm,@(r0,Rn) */
	r1 = 0xC0C2110u; UPD(0x0C093710u, 1);  /* 0C09370E mov.l @(disp,pc),Rn */
L_0C093710: BLKS(0x0C093710u);
	r14 += 0x8u;  /* 0C093710 add #imm,Rn */
	r15 = r14;  /* 0C093712 mov Rm,Rn */
	IF(0x0C093714u); PR = R32(r15); r15 += 4; UPD(0x0C093716u, 3);  /* 0C093714 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093718u, 1);  /* 0C093716 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09371Au, 1);  /* 0C093718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09371Cu, 1);  /* 0C09371A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09371Eu, 1);  /* 0C09371C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C093720u, 1);  /* 0C09371E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093722u, 1);  /* 0C093720 mov.l @Rm+,Rn */
	IF(0x0C093722u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C093370u: goto L_0C093370; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C093722 jmp @Rn */
L_0C093730: BLKS(0x0C093730u);
	r7 = 0xB4u; UPD(0x0C093732u, 1);  /* 0C093730 mov.w @(disp,pc),Rn */
	IF(0x0C093732u); MACL = r11 * r7;  /* 0C093732 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C093736u, 3);  /* 0C093734 mov.l @(disp,pc),Rn */
	IF(0x0C093736u); r0 = MACL;  /* 0C093736 sts macl,Rn */
	r1 = 0xA1u; UPD(0x0C09373Au, 2);  /* 0C093738 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09373A add Rm,Rn */
	IF(0x0C09373Cu); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09373Eu, 2);  /* 0C09373C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09373E tst Rm,Rn */
	if (!T) { UPD(0x0C0936A8u, 4); goto L_0C0936A8; }  /* 0C093740 bf */
L_0C093742: BLKS(0x0C093742u);
	r1 += 0xFFFFFFFEu;  /* 0C093742 add #imm,Rn */
	IF(0x0C093744u); W8(r0 + r1, r2); UPD(0x0C093746u, 2);  /* 0C093744 mov.b Rm,@(r0,Rn) */
L_0C093746: BLKS(0x0C093746u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C093746 bra */
L_0C093790: BLKS(0x0C093790u);
	r10 = 0xB4u; UPD(0x0C093792u, 1);  /* 0C093790 mov.w @(disp,pc),Rn */
	IF(0x0C093792u); MACL = r11 * r10;  /* 0C093792 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C093796u, 3);  /* 0C093794 mov.l @(disp,pc),Rn */
	IF(0x0C093796u); r3 = MACL;  /* 0C093796 sts macl,Rn */
	r3 += r9;  /* 0C093798 add Rm,Rn */
	r8 = R32(r3 + 0x24u); UPD(0x0C09379Cu, 3);  /* 0C09379A mov.l @(disp,Rm),Rn */
	r11 = 0xFF800000u; UPD(0x0C09379Eu, 1);  /* 0C09379C mov.l @(disp,pc),Rn */
	T = (s32)r8 >= (s32)r11;  /* 0C09379E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C093746u, 4); goto L_0C093746; }  /* 0C0937A0 bt */
L_0C0937A2: BLKS(0x0C0937A2u);
	r13 = 0x0u;  /* 0C0937A2 mov #imm,Rn */
	{ W32(r3, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0935E8u, 4); goto L_0C0935E8; }  /* 0C0937A4 bra */
L_0C0937B0: BLKS(0x0C0937B0u);
	r12 = 0xC0A8B50u; UPD(0x0C0937B2u, 1);  /* 0C0937B0 mov.l @(disp,pc),Rn */
	IF(0x0C0937B2u); { u32 t_ = r12; PR = 0x0C0937B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0937B6u); }  /* 0C0937B2 jsr @Rn */
L_0C0937B6: BLKS(0x0C0937B6u);
	IF(0x0C0937B6u); T = (s32)r0 >= 0;  /* 0C0937B6 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0937C0u, 4); goto L_0C0937C0; } goto L_0C0937BC; }  /* 0C0937B8 bt/s */
L_0C0937BC: BLKS(0x0C0937BCu);
	{ IF(0x0C0937BEu); ; /* slot nop */ UPD(0x0C093B80u, 4); goto L_0C093B80; }  /* 0C0937BC bra */
L_0C0937C0: BLKS(0x0C0937C0u);
	r5 = R32(r8); UPD(0x0C0937C2u, 1);  /* 0C0937C0 mov.l @Rm,Rn */
	IF(0x0C0937C2u); MACL = r0 * r9;  /* 0C0937C2 mul.l Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0937C6u, 3);  /* 0C0937C4 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C0937C6 and Rm,Rn */
	W32(r8, r5); UPD(0x0C0937CAu, 2);  /* 0C0937C8 mov.l Rm,@Rn */
	IF(0x0C0937CAu); r0 = MACL;  /* 0C0937CA sts macl,Rn */
	IF(0x0C0937CCu); r6 = R32(r0 + r10); UPD(0x0C0937CEu, 2);  /* 0C0937CC mov.l @(r0,Rm),Rn */
	r1 = 0x100u; UPD(0x0C0937D0u, 1);  /* 0C0937CE mov.w @(disp,pc),Rn */
	r0 = 0x9Fu; UPD(0x0C0937D2u, 1);  /* 0C0937D0 mov.w @(disp,pc),Rn */
	r6 &= r1;  /* 0C0937D2 and Rm,Rn */
	IF(0x0C0937D4u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0937D6u, 2);  /* 0C0937D4 mov.b @(r0,Rm),Rn */
	r5 |= r6;  /* 0C0937D6 or Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0937D8 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0937DA tst Rm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0937E4u, 6); goto L_0C0937E4; } UPD(0x0C0937E0u, 1); goto L_0C0937E0; }  /* 0C0937DC bf/s */
L_0C0937E0: BLKS(0x0C0937E0u);
	{ r3 = R32(r8 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0939D0u, 3); goto L_0C0939D0; }  /* 0C0937E0 bra */
L_0C0937E4: BLKS(0x0C0937E4u);
	T = r0 == 0x1u;  /* 0C0937E4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C093850u, 4); goto L_0C093850; }  /* 0C0937E6 bt */
L_0C0937E8: BLKS(0x0C0937E8u);
	r7 = 0xB4u; UPD(0x0C0937EAu, 1);  /* 0C0937E8 mov.w @(disp,pc),Rn */
	IF(0x0C0937EAu); MACL = r11 * r7;  /* 0C0937EA mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0937EEu, 3);  /* 0C0937EC mov.l @(disp,pc),Rn */
	IF(0x0C0937EEu); r3 = MACL;  /* 0C0937EE sts macl,Rn */
	IF(0x0C0937F0u); MACL = r12 * r7;  /* 0C0937F0 mul.l Rm,Rn */
	r3 += r6;  /* 0C0937F2 add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C0937F6u, 5);  /* 0C0937F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0937F6u); r7 = MACL;  /* 0C0937F6 sts macl,Rn */
	r7 += r6;  /* 0C0937F8 add Rm,Rn */
	r10 = 0xC1B8D38u; UPD(0x0C0937FCu, 3);  /* 0C0937FA mov.l @(disp,pc),Rn */
	IF(0x0C0937FCu); r0 <<= 2;  /* 0C0937FC shll2 Rn */
	r4 = R32(r7 + 0x24u); UPD(0x0C093800u, 2);  /* 0C0937FE mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C093802u, 1);  /* 0C093800 mov.l @(disp,Rm),Rn */
	IF(0x0C093802u); r8 = R32(r0 + r10); UPD(0x0C093804u, 1);  /* 0C093802 mov.l @(r0,Rm),Rn */
	r4 += r6;  /* 0C093804 add Rm,Rn */
	r11 = R32(r7 + 0x28u); UPD(0x0C093808u, 2);  /* 0C093806 mov.l @(disp,Rm),Rn */
	r4 += r8;  /* 0C093808 add Rm,Rn */
	r12 = R32(r3 + 0x30u); UPD(0x0C09380Cu, 2);  /* 0C09380A mov.l @(disp,Rm),Rn */
	IF(0x0C09380Cu); T = (s32)r6 >= 0;  /* 0C09380C cmp/pz Rn */
	r11 += r12;  /* 0C09380E add Rm,Rn */
	W32(r3 + 0x24u, r4); UPD(0x0C093812u, 3);  /* 0C093810 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r3 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C093840u, 3); goto L_0C093840; } UPD(0x0C093816u, 1); goto L_0C093816; }  /* 0C093812 bf/s */
L_0C093816: BLKS(0x0C093816u);
	r0 = 0xA8u; UPD(0x0C093818u, 1);  /* 0C093816 mov.w @(disp,pc),Rn */
	r13 = r6;  /* 0C093818 mov Rm,Rn */
	r7 += r0;  /* 0C09381A add Rm,Rn */
	r13 += r13;  /* 0C09381C add Rm,Rn */
	r7 += 0x1u;  /* 0C09381E add #imm,Rn */
	r13 += r6;  /* 0C093820 add Rm,Rn */
	r5 = 0xFFFFFFEBu;  /* 0C093822 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C093826u, 7);  /* 0C093824 mov.b @Rm,Rn */
	IF(0x0C093826u); ARG0(0x4D5Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C093826 shad Rm,Rn */
	r3 += r0;  /* 0C093828 add Rm,Rn */
	r3 += 0x1u;  /* 0C09382A add #imm,Rn */
	r13 += r1;  /* 0C09382C add Rm,Rn */
	{ W8(r3, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C0935E8u, 7); goto L_0C0935E8; }  /* 0C09382E bra */
L_0C093840: BLKS(0x0C093840u);
	r9 = 0x0u;  /* 0C093840 mov #imm,Rn */
	W32(r3 + 0x2Cu, r9); UPD(0x0C093844u, 2);  /* 0C093842 mov.l Rm,@(disp,Rn) */
	{ r6 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C093816u, 3); goto L_0C093816; }  /* 0C093844 bra */
L_0C093850: BLKS(0x0C093850u);
	r3 = R32(r8 + 0xCu); UPD(0x0C093852u, 1);  /* 0C093850 mov.l @(disp,Rm),Rn */
	r2 = 0xFu;  /* 0C093852 mov #imm,Rn */
	T = r3 > r2;  /* 0C093854 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0937E8u, 5); goto L_0C0937E8; }  /* 0C093856 bt */
L_0C093858: BLKS(0x0C093858u);
	r0 = 0xC09387Cu;  /* 0C093858 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09385A add Rm,Rn */
	IF(0x0C09385Cu); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09385Eu, 3);  /* 0C09385C mov.w @(r0,Rm),Rn */
	IF(0x0C09385Eu); { u32 tv_ = (r13 + 0x0C093862u); u32 t_ = PHYS(tv_); IF(0x0C093860u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0938A0u: goto L_0C0938A0; case 0x0C0938C0u: goto L_0C0938C0; case 0x0C0938DEu: goto L_0C0938DE; case 0x0C093900u: goto L_0C093900; case 0x0C0939A0u: goto L_0C0939A0; default: JUMPD(tv_); } }  /* 0C09385E braf Rn */
L_0C0938A0: BLKS(0x0C0938A0u);
	r5 = 0xB4u; UPD(0x0C0938A2u, 1);  /* 0C0938A0 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0938A2 mov #imm,Rn */
	IF(0x0C0938A4u); MACL = r12 * r5;  /* 0C0938A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0938A8u, 4);  /* 0C0938A6 mov.l @(disp,pc),Rn */
	IF(0x0C0938A8u); r0 = MACL;  /* 0C0938A8 sts macl,Rn */
	r3 = 0xA1u; UPD(0x0C0938ACu, 2);  /* 0C0938AA mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C0938AC add Rm,Rn */
	IF(0x0C0938AEu); MACL = r11 * r5;  /* 0C0938AE mul.l Rm,Rn */
	IF(0x0C0938B0u); W8(r0 + r3, r10); UPD(0x0C0938B2u, 4);  /* 0C0938B0 mov.b Rm,@(r0,Rn) */
	IF(0x0C0938B2u); r1 = MACL;  /* 0C0938B2 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C0938B6u, 2);  /* 0C0938B4 mov.w @(disp,pc),Rn */
	r1 += r9;  /* 0C0938B6 add Rm,Rn */
	{ IF(0x0C0938BAu); W8(r0 + r1, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0937E8u, 4); goto L_0C0937E8; }  /* 0C0938B8 bra */
L_0C0938C0: BLKS(0x0C0938C0u);
	r7 = 0xB4u; UPD(0x0C0938C2u, 1);  /* 0C0938C0 mov.w @(disp,pc),Rn */
	IF(0x0C0938C2u); MACL = r11 * r7;  /* 0C0938C2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0938C6u, 3);  /* 0C0938C4 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0938C8u, 1);  /* 0C0938C6 mov.w @(disp,pc),Rn */
	IF(0x0C0938C8u); r2 = MACL;  /* 0C0938C8 sts macl,Rn */
	r2 += r4;  /* 0C0938CA add Rm,Rn */
	r2 += r0;  /* 0C0938CC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C0938D0u, 4);  /* 0C0938CE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0938D0 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0938D2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C0938D4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0937E8u, 6); goto L_0C0937E8; } UPD(0x0C0938DAu, 1); goto L_0C0938DA; }  /* 0C0938D6 bf/s */
L_0C0938DA: BLKS(0x0C0938DAu);
	r6 = 0x0u;  /* 0C0938DA mov #imm,Rn */
	W8(r2, r6); UPD(0x0C0938DEu, 2);  /* 0C0938DC mov.b Rm,@Rn */
L_0C0938DE: BLKS(0x0C0938DEu);
	r2 = 0xB4u; UPD(0x0C0938E0u, 1);  /* 0C0938DE mov.w @(disp,pc),Rn */
	IF(0x0C0938E0u); MACL = r11 * r2;  /* 0C0938E0 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0938E4u, 3);  /* 0C0938E2 mov.l @(disp,pc),Rn */
	IF(0x0C0938E4u); r2 = MACL;  /* 0C0938E4 sts macl,Rn */
	r2 += r13;  /* 0C0938E6 add Rm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0938EAu, 3);  /* 0C0938E8 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0938EA add #imm,Rn */
	UPD(0x0C0938ECu, 1);
L_0C0938EC: BLKS(0x0C0938ECu);
	W32(r2 + 0xCu, r1); UPD(0x0C0938EEu, 1);  /* 0C0938EC mov.l Rm,@(disp,Rn) */
L_0C0938EE: BLKS(0x0C0938EEu);
	r2 = 0xC0A8AE0u; UPD(0x0C0938F0u, 1);  /* 0C0938EE mov.l @(disp,pc),Rn */
	IF(0x0C0938F0u); { u32 t_ = r2; PR = 0x0C0938F4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0938F4u); }  /* 0C0938F0 jsr @Rn */
L_0C0938F4: BLKS(0x0C0938F4u);
	{ IF(0x0C0938F6u); ; /* slot nop */ UPD(0x0C0937E8u, 3); goto L_0C0937E8; }  /* 0C0938F4 bra */
L_0C093900: BLKS(0x0C093900u);
	r4 = 0xB4u; UPD(0x0C093902u, 1);  /* 0C093900 mov.w @(disp,pc),Rn */
	IF(0x0C093902u); MACL = r11 * r4;  /* 0C093902 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C093906u, 3);  /* 0C093904 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C093908u, 1);  /* 0C093906 mov.w @(disp,pc),Rn */
	IF(0x0C093908u); r8 = MACL;  /* 0C093908 sts macl,Rn */
	r8 += r5;  /* 0C09390A add Rm,Rn */
	IF(0x0C09390Cu); r7 = R32(r0 + r8); UPD(0x0C09390Eu, 3);  /* 0C09390C mov.l @(r0,Rm),Rn */
	IF(0x0C09390Eu); MACL = r12 * r4;  /* 0C09390E mul.l Rm,Rn */
	r3 = 0xFFFFF000u; UPD(0x0C093912u, 3);  /* 0C093910 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C093912 add Rm,Rn */
	IF(0x0C093914u); W32(r0 + r8, r7); UPD(0x0C093916u, 2);  /* 0C093914 mov.l Rm,@(r0,Rn) */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C093918u, 1);  /* 0C093916 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C093918 add Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C09391Cu, 2);  /* 0C09391A mov.l Rm,@(disp,Rn) */
	r9 = 0xA1u; UPD(0x0C09391Eu, 1);  /* 0C09391C mov.w @(disp,pc),Rn */
	IF(0x0C09391Eu); r0 = MACL;  /* 0C09391E sts macl,Rn */
	r0 += r5;  /* 0C093920 add Rm,Rn */
	IF(0x0C093922u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C093924u, 3);  /* 0C093922 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C093924 tst Rm,Rn */
	if (T) { UPD(0x0C0938F4u, 4); goto L_0C0938F4; }  /* 0C093926 bt */
L_0C093928: BLKS(0x0C093928u);
	r13 = R32(r8 + 0xCu); UPD(0x0C09392Au, 1);  /* 0C093928 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C09392A mov #imm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09392C add #imm,Rn */
	W32(r8 + 0xCu, r13); UPD(0x0C093930u, 3);  /* 0C09392E mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C093930 mov Rm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C093934u, 2);  /* 0C093932 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C093934 mov #imm,Rn */
	r10 = 0xC1B8D78u; UPD(0x0C093938u, 2);  /* 0C093936 mov.l @(disp,pc),Rn */
	r13 = 0xC1B8D80u; UPD(0x0C09393Au, 1);  /* 0C093938 mov.l @(disp,pc),Rn */
	IF(0x0C09393Au); { u32 t_ = r6; PR = 0x0C09393Eu; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09393Eu); }  /* 0C09393A jsr @Rn */
L_0C09393E: BLKS(0x0C09393Eu);
	r0 = r9;  /* 0C09393E mov Rm,Rn */
	r0 &= 0x1u;  /* 0C093940 and #imm,r0 */
	IF(0x0C093942u); r0 <<= 2;  /* 0C093942 shll2 Rn */
	IF(0x0C093944u); r4 = R32(r0 + r10); UPD(0x0C093946u, 4);  /* 0C093944 mov.l @(r0,Rm),Rn */
	r6 = r9;  /* 0C093946 mov Rm,Rn */
	IF(0x0C093948u); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C093948 rotl Rn */
	IF(0x0C09394Au); r0 = T;  /* 0C09394A movt Rn */
	r0 += r9;  /* 0C09394C add Rm,Rn */
	IF(0x0C09394Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C09394E shar Rn */
	IF(0x0C093950u); r0 <<= 2;  /* 0C093950 shll2 Rn */
	IF(0x0C093952u); r7 = R32(r0 + r13); UPD(0x0C093954u, 7);  /* 0C093952 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C093954 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C093958u, 2);  /* 0C093956 mov.w @(disp,pc),Rn */
	IF(0x0C093958u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09395Au, 1);  /* 0C093958 mov.b @(r0,Rm),Rn */
	r2 = 0xA9u; UPD(0x0C09395Cu, 1);  /* 0C09395A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09395C mov Rm,Rn */
	IF(0x0C09395Eu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C093960u, 2);  /* 0C09395E mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C093962u, 1);  /* 0C093960 mov.l @(disp,Rm),Rn */
	r2 = 0x10u;  /* 0C093962 mov #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C093966u, 2);  /* 0C093964 mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C093966 add Rm,Rn */
	r0 = 0x1FFu; UPD(0x0C09396Au, 2);  /* 0C093968 mov.w @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C09396A extu.b Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09396Eu, 2);  /* 0C09396C mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C09396E mov #imm,Rn */
	W32(r15, r4); UPD(0x0C093972u, 2);  /* 0C093970 mov.l Rm,@Rn */
	r6 += r7;  /* 0C093972 add Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C093976u, 2);  /* 0C093974 mov.l Rm,@(disp,Rn) */
	r7 = r1 & 0xFF;  /* 0C093976 extu.b Rm,Rn */
	W32(r15 + 0x8u, r3); UPD(0x0C09397Au, 2);  /* 0C093978 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BCE80u; UPD(0x0C09397Cu, 1);  /* 0C09397A mov.l @(disp,pc),Rn */
	IF(0x0C09397Cu); { u32 t_ = r0; PR = 0x0C093980u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCE80, 0x0C0BCE80u, 0x0C093980u); }  /* 0C09397C jsr @Rn */
L_0C093980: BLKS(0x0C093980u);
	r4 = r9;  /* 0C093980 mov Rm,Rn */
	r4 += 0x1u;  /* 0C093982 add #imm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C093984 exts.w Rm,Rn */
	r5 = 0x3u;  /* 0C093986 mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C093988 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09393Eu, 8); goto L_0C09393E; } UPD(0x0C09398Eu, 1); goto L_0C09398E; }  /* 0C09398A bf/s */
L_0C09398E: BLKS(0x0C09398Eu);
	{ IF(0x0C093990u); ; /* slot nop */ UPD(0x0C0937E8u, 3); goto L_0C0937E8; }  /* 0C09398E bra */
L_0C0939A0: BLKS(0x0C0939A0u);
	r3 = 0xB4u; UPD(0x0C0939A2u, 1);  /* 0C0939A0 mov.w @(disp,pc),Rn */
	IF(0x0C0939A2u); MACL = r11 * r3;  /* 0C0939A2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0939A6u, 3);  /* 0C0939A4 mov.l @(disp,pc),Rn */
	IF(0x0C0939A6u); r8 = MACL;  /* 0C0939A6 sts macl,Rn */
	r8 += r0;  /* 0C0939A8 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0939ACu, 3);  /* 0C0939AA mov.w @(disp,pc),Rn */
	r5 = 0xFFFFF000u; UPD(0x0C0939AEu, 1);  /* 0C0939AC mov.w @(disp,pc),Rn */
	IF(0x0C0939AEu); r13 = R32(r0 + r8); UPD(0x0C0939B0u, 1);  /* 0C0939AE mov.l @(r0,Rm),Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0939B2u, 1);  /* 0C0939B0 mov.l @(disp,Rm),Rn */
	r13 += r5;  /* 0C0939B2 add Rm,Rn */
	r10 = R32(r8 + 0xCu); UPD(0x0C0939B6u, 2);  /* 0C0939B4 mov.l @(disp,Rm),Rn */
	r9 += r13;  /* 0C0939B6 add Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C0939B8 add #imm,Rn */
	IF(0x0C0939BAu); W32(r0 + r8, r13); UPD(0x0C0939BCu, 3);  /* 0C0939BA mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x2Cu, r9); UPD(0x0C0939BEu, 1);  /* 0C0939BC mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0938EEu, 3); goto L_0C0938EE; }  /* 0C0939BE bra */
L_0C0939D0: BLKS(0x0C0939D0u);
	r0 = 0xFu;  /* 0C0939D0 mov #imm,Rn */
	T = r3 > r0;  /* 0C0939D2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09398Eu, 5); goto L_0C09398E; }  /* 0C0939D4 bt */
L_0C0939D6: BLKS(0x0C0939D6u);
	r0 = 0xC093A08u;  /* 0C0939D6 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0939D8 add Rm,Rn */
	IF(0x0C0939DAu); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0939DCu, 3);  /* 0C0939DA mov.w @(r0,Rm),Rn */
	IF(0x0C0939DCu); { u32 tv_ = (r7 + 0x0C0939E0u); u32 t_ = PHYS(tv_); IF(0x0C0939DEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093A30u: goto L_0C093A30; case 0x0C093A50u: goto L_0C093A50; case 0x0C093A80u: goto L_0C093A80; case 0x0C093A8Eu: goto L_0C093A8E; case 0x0C093AA0u: goto L_0C093AA0; case 0x0C093AD0u: goto L_0C093AD0; case 0x0C093B30u: goto L_0C093B30; case 0x0C093B60u: goto L_0C093B60; default: JUMPD(tv_); } }  /* 0C0939DC braf Rn */
L_0C093A30: BLKS(0x0C093A30u);
	r2 = 0xB4u; UPD(0x0C093A32u, 1);  /* 0C093A30 mov.w @(disp,pc),Rn */
	IF(0x0C093A32u); MACL = r12 * r2;  /* 0C093A32 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C093A36u, 3);  /* 0C093A34 mov.l @(disp,pc),Rn */
	IF(0x0C093A36u); r0 = MACL;  /* 0C093A36 sts macl,Rn */
	r9 = 0xA1u; UPD(0x0C093A3Au, 2);  /* 0C093A38 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C093A3A add Rm,Rn */
	IF(0x0C093A3Cu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C093A3Eu, 2);  /* 0C093A3C mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C093A3E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C093A42u); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09398Eu, 5); goto L_0C09398E; } goto L_0C093A44; }  /* 0C093A40 bt/s */
L_0C093A44: BLKS(0x0C093A44u);
	IF(0x0C093A44u); r10 = MACL;  /* 0C093A44 sts macl,Rn */
	r10 += r3;  /* 0C093A46 add Rm,Rn */
	r3 = R32(r10 + 0xCu); UPD(0x0C093A4Au, 5);  /* 0C093A48 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C093A4A add #imm,Rn */
	{ W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0938EEu, 4); goto L_0C0938EE; }  /* 0C093A4C bra */
L_0C093A50: BLKS(0x0C093A50u);
	r5 = 0xB4u; UPD(0x0C093A52u, 1);  /* 0C093A50 mov.w @(disp,pc),Rn */
	IF(0x0C093A52u); MACL = r11 * r5;  /* 0C093A52 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C093A56u, 3);  /* 0C093A54 mov.l @(disp,pc),Rn */
	IF(0x0C093A56u); r2 = MACL;  /* 0C093A56 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C093A5Au, 2);  /* 0C093A58 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C093A5A add Rm,Rn */
	r3 += r2;  /* 0C093A5C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C093A60u, 3);  /* 0C093A5E mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C093A60 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C093A62 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C093A64 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09398Eu, 6); goto L_0C09398E; } UPD(0x0C093A6Au, 1); goto L_0C093A6A; }  /* 0C093A66 bf/s */
L_0C093A6A: BLKS(0x0C093A6Au);
	r6 = 0x0u;  /* 0C093A6A mov #imm,Rn */
	W8(r3, r6); UPD(0x0C093A6Eu, 2);  /* 0C093A6C mov.b Rm,@Rn */
L_0C093A6E: BLKS(0x0C093A6Eu);
	r1 = R32(r2 + 0xCu); UPD(0x0C093A70u, 1);  /* 0C093A6E mov.l @(disp,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0938ECu, 3); goto L_0C0938EC; }  /* 0C093A70 bra */
L_0C093A80: BLKS(0x0C093A80u);
	r8 = 0xC0BC1B0u; UPD(0x0C093A82u, 1);  /* 0C093A80 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C093A82 mov Rm,Rn */
	r5 = 0xAu;  /* 0C093A84 mov #imm,Rn */
	IF(0x0C093A86u); { u32 t_ = r8; PR = 0x0C093A8Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C093A8Au); }  /* 0C093A86 jsr @Rn */
L_0C093A8A: BLKS(0x0C093A8Au);
	T = (r0 & r0) == 0;  /* 0C093A8A tst Rm,Rn */
	if (T) { UPD(0x0C093AC6u, 4); goto L_0C093AC6; }  /* 0C093A8C bt */
L_0C093A8E: BLKS(0x0C093A8Eu);
	r2 = 0xB4u; UPD(0x0C093A90u, 1);  /* 0C093A8E mov.w @(disp,pc),Rn */
	IF(0x0C093A90u); MACL = r11 * r2;  /* 0C093A90 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C093A94u, 3);  /* 0C093A92 mov.l @(disp,pc),Rn */
	IF(0x0C093A94u); r2 = MACL;  /* 0C093A94 sts macl,Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C093A6Eu, 4); goto L_0C093A6E; }  /* 0C093A96 bra */
L_0C093AA0: BLKS(0x0C093AA0u);
	r10 = 0xB4u; UPD(0x0C093AA2u, 1);  /* 0C093AA0 mov.w @(disp,pc),Rn */
	IF(0x0C093AA2u); MACL = r11 * r10;  /* 0C093AA2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C093AA6u, 3);  /* 0C093AA4 mov.l @(disp,pc),Rn */
	IF(0x0C093AA6u); r9 = MACL;  /* 0C093AA6 sts macl,Rn */
	r9 += r13;  /* 0C093AA8 add Rm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C093AACu, 3);  /* 0C093AAA mov.l @(disp,Rm),Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C093AAEu, 1);  /* 0C093AAC mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C093AAE add #imm,Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C093AB2u, 2);  /* 0C093AB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C093AB2u); { u32 t_ = r5; PR = 0x0C093AB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C093AB6u); }  /* 0C093AB2 jsr @Rn */
L_0C093AB6: BLKS(0x0C093AB6u);
	r0 = 0x8Cu; UPD(0x0C093AB8u, 1);  /* 0C093AB6 mov.w @(disp,pc),Rn */
	IF(0x0C093AB8u); MACL = r12 * r10;  /* 0C093AB8 mul.l Rm,Rn */
	r3 = 0x40000u; UPD(0x0C093ABCu, 3);  /* 0C093ABA mov.l @(disp,pc),Rn */
	IF(0x0C093ABCu); W32(r0 + r9, r3); UPD(0x0C093ABEu, 1);  /* 0C093ABC mov.l Rm,@(r0,Rn) */
	r7 = 0xA1u; UPD(0x0C093AC0u, 1);  /* 0C093ABE mov.w @(disp,pc),Rn */
	IF(0x0C093AC0u); r0 = MACL;  /* 0C093AC0 sts macl,Rn */
	r0 += r13;  /* 0C093AC2 add Rm,Rn */
	IF(0x0C093AC4u); W8(r0 + r7, r3); UPD(0x0C093AC6u, 3);  /* 0C093AC4 mov.b Rm,@(r0,Rn) */
L_0C093AC6: BLKS(0x0C093AC6u);
	{ IF(0x0C093AC8u); ; /* slot nop */ UPD(0x0C0937E8u, 3); goto L_0C0937E8; }  /* 0C093AC6 bra */
L_0C093AD0: BLKS(0x0C093AD0u);
	r8 = 0xB4u; UPD(0x0C093AD2u, 1);  /* 0C093AD0 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C093AD2 mov #imm,Rn */
	IF(0x0C093AD4u); MACL = r11 * r8;  /* 0C093AD4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C093AD8u, 4);  /* 0C093AD6 mov.l @(disp,pc),Rn */
	r10 = 0xC1B8D78u; UPD(0x0C093ADAu, 1);  /* 0C093AD8 mov.l @(disp,pc),Rn */
	IF(0x0C093ADAu); r8 = MACL;  /* 0C093ADA sts macl,Rn */
	r13 = 0xC1B8D80u; UPD(0x0C093ADEu, 2);  /* 0C093ADC mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C093ADE add Rm,Rn */
	UPD(0x0C093AE0u, 1);
L_0C093AE0: BLKS(0x0C093AE0u);
	r0 = r9;  /* 0C093AE0 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C093AE2 and #imm,r0 */
	IF(0x0C093AE4u); r0 <<= 2;  /* 0C093AE4 shll2 Rn */
	IF(0x0C093AE6u); r2 = R32(r0 + r10); UPD(0x0C093AE8u, 4);  /* 0C093AE6 mov.l @(r0,Rm),Rn */
	r6 = r9;  /* 0C093AE8 mov Rm,Rn */
	IF(0x0C093AEAu); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C093AEA rotl Rn */
	IF(0x0C093AECu); r0 = T;  /* 0C093AEC movt Rn */
	r0 += r9;  /* 0C093AEE add Rm,Rn */
	IF(0x0C093AF0u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C093AF0 shar Rn */
	IF(0x0C093AF2u); r0 <<= 2;  /* 0C093AF2 shll2 Rn */
	IF(0x0C093AF4u); r7 = R32(r0 + r13); UPD(0x0C093AF6u, 7);  /* 0C093AF4 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C093AF6 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C093AFAu, 2);  /* 0C093AF8 mov.w @(disp,pc),Rn */
	IF(0x0C093AFAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093AFCu, 1);  /* 0C093AFA mov.b @(r0,Rm),Rn */
	r4 = 0xA9u; UPD(0x0C093AFEu, 1);  /* 0C093AFC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C093AFE mov Rm,Rn */
	IF(0x0C093B00u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C093B02u, 2);  /* 0C093B00 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C093B04u, 1);  /* 0C093B02 mov.l @(disp,Rm),Rn */
	r0 = 0x10u;  /* 0C093B04 mov #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C093B08u, 2);  /* 0C093B06 mov.l @(disp,Rm),Rn */
	r5 += r2;  /* 0C093B08 add Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C093B0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C093B0Eu, 3);  /* 0C093B0C mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C093B0E mov #imm,Rn */
	r3 = 0x1FFu; UPD(0x0C093B12u, 2);  /* 0C093B10 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C093B12 add Rm,Rn */
	r0 = 0xC0BCE80u; UPD(0x0C093B16u, 2);  /* 0C093B14 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C093B16 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C093B1Au, 2);  /* 0C093B18 mov.l Rm,@Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C093B1Cu, 1);  /* 0C093B1A mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C093B1Eu, 1);  /* 0C093B1C mov.l Rm,@(disp,Rn) */
	IF(0x0C093B1Eu); { u32 t_ = r0; PR = 0x0C093B22u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCE80, 0x0C0BCE80u, 0x0C093B22u); }  /* 0C093B1E jsr @Rn */
L_0C093B22: BLKS(0x0C093B22u);
	r2 = r9;  /* 0C093B22 mov Rm,Rn */
	r2 += 0x1u;  /* 0C093B24 add #imm,Rn */
	r9 = (u32)(s32)(s16)r2;  /* 0C093B26 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C093B28 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C093B2A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093AE0u, 8); goto L_0C093AE0; } UPD(0x0C093B30u, 1); goto L_0C093B30; }  /* 0C093B2C bf/s */
L_0C093B30: BLKS(0x0C093B30u);
	r9 = 0xB4u; UPD(0x0C093B32u, 1);  /* 0C093B30 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C093B32 mov Rm,Rn */
	IF(0x0C093B34u); MACL = r11 * r9;  /* 0C093B34 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C093B38u, 4);  /* 0C093B36 mov.l @(disp,pc),Rn */
	IF(0x0C093B38u); r8 = MACL;  /* 0C093B38 sts macl,Rn */
	r8 += r10;  /* 0C093B3A add Rm,Rn */
	r13 = R32(r8 + 0xCu); UPD(0x0C093B3Eu, 3);  /* 0C093B3C mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C093B3E add #imm,Rn */
	W32(r8 + 0xCu, r13); UPD(0x0C093B42u, 2);  /* 0C093B40 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C093B44u, 1);  /* 0C093B42 mov.l @(disp,pc),Rn */
L_0C093B44: BLKS(0x0C093B44u);
	IF(0x0C093B44u); { u32 t_ = r1; PR = 0x0C093B48u; IF(0x0C093B46u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C093B48u); }  /* 0C093B44 jsr @Rn */
L_0C093B48: BLKS(0x0C093B48u);
	r0 = 0x8Cu; UPD(0x0C093B4Au, 1);  /* 0C093B48 mov.w @(disp,pc),Rn */
	r6 = 0xFFFFF000u; UPD(0x0C093B4Cu, 1);  /* 0C093B4A mov.w @(disp,pc),Rn */
	IF(0x0C093B4Cu); r7 = R32(r0 + r8); UPD(0x0C093B4Eu, 1);  /* 0C093B4C mov.l @(r0,Rm),Rn */
	r4 = R32(r8 + 0x2Cu); UPD(0x0C093B50u, 1);  /* 0C093B4E mov.l @(disp,Rm),Rn */
	r7 += r6;  /* 0C093B50 add Rm,Rn */
	r4 += r7;  /* 0C093B52 add Rm,Rn */
	IF(0x0C093B54u); W32(r0 + r8, r7); UPD(0x0C093B56u, 3);  /* 0C093B54 mov.l Rm,@(r0,Rn) */
	{ W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0937E8u, 3); goto L_0C0937E8; }  /* 0C093B56 bra */
L_0C093B60: BLKS(0x0C093B60u);
	r8 = 0xB4u; UPD(0x0C093B62u, 1);  /* 0C093B60 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C093B62 mov #imm,Rn */
	IF(0x0C093B64u); MACL = r11 * r8;  /* 0C093B64 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C093B68u, 4);  /* 0C093B66 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C093B68 mov Rm,Rn */
	IF(0x0C093B6Au); r8 = MACL;  /* 0C093B6A sts macl,Rn */
	r8 += r3;  /* 0C093B6C add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C093B70u, 4);  /* 0C093B6E mov.l @(disp,Rm),Rn */
	r1 = 0xC0A8B10u; UPD(0x0C093B72u, 1);  /* 0C093B70 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C093B72 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C093B76u, 2);  /* 0C093B74 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093B44u, 3); goto L_0C093B44; }  /* 0C093B76 bra */
L_0C093B80: BLKS(0x0C093B80u);
	r1 = 0xC093370u; UPD(0x0C093B82u, 1);  /* 0C093B80 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C093710u, 3); goto L_0C093710; }  /* 0C093B82 bra */
L_0C093BC0: BLKS(0x0C093BC0u);
	r12 = 0xC0A8B50u; UPD(0x0C093BC2u, 1);  /* 0C093BC0 mov.l @(disp,pc),Rn */
	IF(0x0C093BC2u); { u32 t_ = r12; PR = 0x0C093BC6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C093BC6u); }  /* 0C093BC2 jsr @Rn */
L_0C093BC6: BLKS(0x0C093BC6u);
	IF(0x0C093BC6u); T = (s32)r0 >= 0;  /* 0C093BC6 cmp/pz Rn */
	if (!T) { UPD(0x0C093B80u, 4); goto L_0C093B80; }  /* 0C093BC8 bf */
L_0C093BCA: BLKS(0x0C093BCAu);
	r4 = 0xB4u; UPD(0x0C093BCCu, 1);  /* 0C093BCA mov.w @(disp,pc),Rn */
	IF(0x0C093BCCu); MACL = r11 * r4;  /* 0C093BCC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C093BD0u, 3);  /* 0C093BCE mov.l @(disp,pc),Rn */
	IF(0x0C093BD0u); r8 = MACL;  /* 0C093BD0 sts macl,Rn */
	r8 += r3;  /* 0C093BD2 add Rm,Rn */
	r9 = R32(r8); UPD(0x0C093BD6u, 3);  /* 0C093BD4 mov.l @Rm,Rn */
	IF(0x0C093BD6u); MACL = r0 * r4;  /* 0C093BD6 mul.l Rm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C093BDAu, 3);  /* 0C093BD8 mov.w @(disp,pc),Rn */
	r9 &= r6;  /* 0C093BDA and Rm,Rn */
	W32(r8, r9); UPD(0x0C093BDEu, 2);  /* 0C093BDC mov.l Rm,@Rn */
	IF(0x0C093BDEu); r6 = MACL;  /* 0C093BDE sts macl,Rn */
	r6 += r3;  /* 0C093BE0 add Rm,Rn */
	r12 = R32(r6); UPD(0x0C093BE4u, 3);  /* 0C093BE2 mov.l @Rm,Rn */
	r4 += 0x4Cu;  /* 0C093BE4 add #imm,Rn */
	r12 &= r4;  /* 0C093BE6 and Rm,Rn */
	r9 |= r12;  /* 0C093BE8 or Rm,Rn */
	W32(r8, r9); UPD(0x0C093BECu, 4);  /* 0C093BEA mov.l Rm,@Rn */
	r9 = 0x8Cu; UPD(0x0C093BEEu, 1);  /* 0C093BEC mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C093BEE add Rm,Rn */
	r5 = R32(r9); UPD(0x0C093BF2u, 2);  /* 0C093BF0 mov.l @Rm,Rn */
	r0 = 0xFFFFF000u; UPD(0x0C093BF4u, 1);  /* 0C093BF2 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x2Cu); UPD(0x0C093BF6u, 1);  /* 0C093BF4 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C093BF6 add Rm,Rn */
	r4 += r5;  /* 0C093BF8 add Rm,Rn */
	W32(r9, r5); UPD(0x0C093BFCu, 3);  /* 0C093BFA mov.l Rm,@Rn */
	IF(0x0C093BFCu); T = (s32)r4 >= 0;  /* 0C093BFC cmp/pz Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C093C00u, 2);  /* 0C093BFE mov.l Rm,@(disp,Rn) */
	r13 = 0xC1B8D38u; UPD(0x0C093C02u, 1);  /* 0C093C00 mov.l @(disp,pc),Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C093C04u, 1);  /* 0C093C02 mov.l @(disp,Rm),Rn */
	r2 = R32(r13 + 0x3Cu); UPD(0x0C093C06u, 1);  /* 0C093C04 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C093C06 add Rm,Rn */
	r3 = R32(r6 + 0x28u); UPD(0x0C093C0Au, 2);  /* 0C093C08 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C093C0A add Rm,Rn */
	r10 = R32(r8 + 0x30u); UPD(0x0C093C0Eu, 2);  /* 0C093C0C mov.l @(disp,Rm),Rn */
	r3 += r10;  /* 0C093C0E add Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C093C12u, 2);  /* 0C093C10 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C093C70u, 3); goto L_0C093C70; } UPD(0x0C093C16u, 1); goto L_0C093C16; }  /* 0C093C12 bf/s */
L_0C093C16: BLKS(0x0C093C16u);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C093C18u, 1);  /* 0C093C16 mov.l @(disp,Rm),Rn */
	r10 = 0xFFFFFFEBu;  /* 0C093C18 mov #imm,Rn */
	r2 = 0xA8u; UPD(0x0C093C1Cu, 2);  /* 0C093C1A mov.w @(disp,pc),Rn */
	r3 = r7;  /* 0C093C1C mov Rm,Rn */
	r6 += r2;  /* 0C093C1E add Rm,Rn */
	r3 += r3;  /* 0C093C20 add Rm,Rn */
	r3 += r7;  /* 0C093C22 add Rm,Rn */
	r6 += 0x1u;  /* 0C093C24 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C093C28u, 6);  /* 0C093C26 mov.b @Rm,Rn */
	r4 = r8;  /* 0C093C28 mov Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C093C2Cu, 2);  /* 0C093C2A mov.l @(disp,Rm),Rn */
	IF(0x0C093C2Cu); ARG0(0x43ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C093C2C shad Rm,Rn */
	r4 += r2;  /* 0C093C2E add Rm,Rn */
	r4 += 0x1u;  /* 0C093C30 add #imm,Rn */
	r3 += r1;  /* 0C093C32 add Rm,Rn */
	r0 += 0x1u;  /* 0C093C34 add #imm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C093C38u, 6);  /* 0C093C36 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C093C38 and #imm,r0 */
	W8(r4, r3); UPD(0x0C093C3Cu, 2);  /* 0C093C3A mov.b Rm,@Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C093C3Eu, 1);  /* 0C093C3C mov.l Rm,@(disp,Rn) */
	IF(0x0C093C3Eu); { u32 t_ = r12; PR = 0x0C093C42u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C093C42u); }  /* 0C093C3E jsr @Rn */
L_0C093C42: BLKS(0x0C093C42u);
	r0 = R32(r8 + 0xCu); UPD(0x0C093C44u, 1);  /* 0C093C42 mov.l @(disp,Rm),Rn */
	r13 = R32(r9); UPD(0x0C093C46u, 1);  /* 0C093C44 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C093C46 tst Rm,Rn */
	r5 = 0xFFFE0000u; UPD(0x0C093C4Au, 2);  /* 0C093C48 mov.l @(disp,pc),Rn */
	IF(0x0C093C4Au); r7 = T;  /* 0C093C4A movt Rn */
	T = (s32)r5 > (s32)r13;  /* 0C093C4C cmp/gt Rm,Rn */
	IF(0x0C093C4Eu); r2 = T;  /* 0C093C4E movt Rn */
	r7 &= r2;  /* 0C093C50 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C093C52 tst Rm,Rn */
	if (T) { UPD(0x0C093C6Cu, 8); goto L_0C093C6C; }  /* 0C093C54 bt */
L_0C093C56: BLKS(0x0C093C56u);
	r13 = R32(r8 + 0x8u); UPD(0x0C093C58u, 1);  /* 0C093C56 mov.l @(disp,Rm),Rn */
	r6 = 0xFu;  /* 0C093C58 mov #imm,Rn */
	r9 = 0xC0A8B10u; UPD(0x0C093C5Cu, 2);  /* 0C093C5A mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C093C5C add #imm,Rn */
	r4 = r11;  /* 0C093C5E mov Rm,Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C093C62u, 3);  /* 0C093C60 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C093C62 mov #imm,Rn */
	IF(0x0C093C64u); { u32 t_ = r9; PR = 0x0C093C68u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C093C68u); }  /* 0C093C64 jsr @Rn */
L_0C093C68: BLKS(0x0C093C68u);
	r0 = 0x9Fu; UPD(0x0C093C6Au, 1);  /* 0C093C68 mov.w @(disp,pc),Rn */
	IF(0x0C093C6Au); W8(r0 + r8, r11); UPD(0x0C093C6Cu, 1);  /* 0C093C6A mov.b Rm,@(r0,Rn) */
L_0C093C6C: BLKS(0x0C093C6Cu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C093C6C bra */
L_0C093C70: BLKS(0x0C093C70u);
	r10 = 0x0u;  /* 0C093C70 mov #imm,Rn */
	{ W32(r8 + 0x2Cu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093C16u, 4); goto L_0C093C16; }  /* 0C093C72 bra */
L_0C093C80: BLKS(0x0C093C80u);
	r8 = 0xC0A8CA0u; UPD(0x0C093C82u, 1);  /* 0C093C80 mov.l @(disp,pc),Rn */
	IF(0x0C093C82u); { u32 t_ = r8; PR = 0x0C093C86u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C093C86u); }  /* 0C093C82 jsr @Rn */
L_0C093C86: BLKS(0x0C093C86u);
	IF(0x0C093C86u); T = (s32)r0 >= 0;  /* 0C093C86 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093C90u, 4); goto L_0C093C90; } goto L_0C093C8C; }  /* 0C093C88 bt/s */
L_0C093C8C: BLKS(0x0C093C8Cu);
	{ IF(0x0C093C8Eu); ; /* slot nop */ UPD(0x0C093B80u, 4); goto L_0C093B80; }  /* 0C093C8C bra */
L_0C093C90: BLKS(0x0C093C90u);
	r4 = 0xB4u; UPD(0x0C093C92u, 1);  /* 0C093C90 mov.w @(disp,pc),Rn */
	IF(0x0C093C92u); MACL = r11 * r4;  /* 0C093C92 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C093C96u, 3);  /* 0C093C94 mov.l @(disp,pc),Rn */
	IF(0x0C093C96u); r0 = MACL;  /* 0C093C96 sts macl,Rn */
	r0 += r2;  /* 0C093C98 add Rm,Rn */
	r13 = R32(r0); UPD(0x0C093C9Cu, 3);  /* 0C093C9A mov.l @Rm,Rn */
	IF(0x0C093C9Cu); MACL = r12 * r4;  /* 0C093C9C mul.l Rm,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C093CA0u, 3);  /* 0C093C9E mov.w @(disp,pc),Rn */
	r13 &= r5;  /* 0C093CA0 and Rm,Rn */
	W32(r0, r13); UPD(0x0C093CA4u, 2);  /* 0C093CA2 mov.l Rm,@Rn */
	IF(0x0C093CA4u); r10 = MACL;  /* 0C093CA4 sts macl,Rn */
	r10 += r2;  /* 0C093CA6 add Rm,Rn */
	r8 = R32(r10); UPD(0x0C093CAAu, 3);  /* 0C093CA8 mov.l @Rm,Rn */
	r4 += 0x4Cu;  /* 0C093CAA add #imm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C093CAEu, 2);  /* 0C093CAC mov.l @(disp,Rm),Rn */
	r8 &= r4;  /* 0C093CAE and Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C093CB2u, 2);  /* 0C093CB0 mov.l @(disp,Rm),Rn */
	r12 = r0;  /* 0C093CB2 mov Rm,Rn */
	r3 = 0xA8u; UPD(0x0C093CB6u, 2);  /* 0C093CB4 mov.w @(disp,pc),Rn */
	r13 |= r8;  /* 0C093CB6 or Rm,Rn */
	r10 += r3;  /* 0C093CB8 add Rm,Rn */
	r6 = R32(r0 + 0x2Cu); UPD(0x0C093CBCu, 3);  /* 0C093CBA mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C093CBC add #imm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C093CC0u, 2);  /* 0C093CBE mov.l @(disp,Rm),Rn */
	r12 += r3;  /* 0C093CC0 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C093CC4u, 2);  /* 0C093CC2 mov.b @Rm,Rn */
	r9 += r6;  /* 0C093CC4 add Rm,Rn */
	r7 += r1;  /* 0C093CC6 add Rm,Rn */
	r12 += 0x1u;  /* 0C093CC8 add #imm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C093CCCu, 4);  /* 0C093CCA mov.l @(disp,Rm),Rn */
	r5 = 0xBu;  /* 0C093CCC mov #imm,Rn */
	W32(r0, r13); UPD(0x0C093CD0u, 2);  /* 0C093CCE mov.l Rm,@Rn */
	T = r2 > r5;  /* 0C093CD0 cmp/hi Rm,Rn */
	W32(r0 + 0x24u, r9); UPD(0x0C093CD4u, 2);  /* 0C093CD2 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r7); UPD(0x0C093CD6u, 1);  /* 0C093CD4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r12, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093C6Cu, 3); goto L_0C093C6C; } UPD(0x0C093CDAu, 1); goto L_0C093CDA; }  /* 0C093CD6 bt/s */
L_0C093CDA: BLKS(0x0C093CDAu);
	r0 = 0xC093D0Cu;  /* 0C093CDA mova @(disp,pc),r0 */
	IF(0x0C093CDCu); r12 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C093CDEu, 2);  /* 0C093CDC mov.b @(r0,Rm),Rn */
	r12 = r12 & 0xFF;  /* 0C093CDE extu.b Rm,Rn */
	IF(0x0C093CE0u); { u32 tv_ = (r12 + 0x0C093CE4u); u32 t_ = PHYS(tv_); IF(0x0C093CE2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C093D20u: goto L_0C093D20; case 0x0C093D60u: goto L_0C093D60; case 0x0C093D90u: goto L_0C093D90; default: JUMPD(tv_); } }  /* 0C093CE0 braf Rn */
L_0C093D20: BLKS(0x0C093D20u);
	r3 = 0xB4u; UPD(0x0C093D22u, 1);  /* 0C093D20 mov.w @(disp,pc),Rn */
	IF(0x0C093D22u); MACL = r11 * r3;  /* 0C093D22 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C093D26u, 3);  /* 0C093D24 mov.l @(disp,pc),Rn */
	IF(0x0C093D26u); r8 = MACL;  /* 0C093D26 sts macl,Rn */
	r8 += r7;  /* 0C093D28 add Rm,Rn */
	r8 += 0x7Eu;  /* 0C093D2A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C093D2Eu, 4);  /* 0C093D2C mov.w @Rm,Rn */
	IF(0x0C093D2Eu); MACL = r0 * r3;  /* 0C093D2E mul.l Rm,Rn */
	IF(0x0C093D30u); r0 = MACL;  /* 0C093D30 sts macl,Rn */
	r0 += r7;  /* 0C093D32 add Rm,Rn */
	r3 += 0xFFFFFFEFu;  /* 0C093D34 add #imm,Rn */
	IF(0x0C093D36u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C093D38u, 6);  /* 0C093D36 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C093D38 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093C6Cu, 4); goto L_0C093C6C; } goto L_0C093D3E; }  /* 0C093D3A bt/s */
L_0C093D3E: BLKS(0x0C093D3Eu);
	r6 = R32(r8 + 0xCu); UPD(0x0C093D40u, 2);  /* 0C093D3E mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C093D40 mov Rm,Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C093D44u, 2);  /* 0C093D42 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C093D44 add #imm,Rn */
	IF(0x0C093D46u); { u32 t_ = r9; PR = 0x0C093D4Au; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C093D4Au); }  /* 0C093D46 jsr @Rn */
L_0C093D4A: BLKS(0x0C093D4Au);
	r0 = 0x88u; UPD(0x0C093D4Cu, 1);  /* 0C093D4A mov.w @(disp,pc),Rn */
	r11 = 0x1u;  /* 0C093D4C mov #imm,Rn */
	IF(0x0C093D4Eu); W16(r0 + r8, r11); UPD(0x0C093D50u, 2);  /* 0C093D4E mov.w Rm,@(r0,Rn) */
L_0C093D50: BLKS(0x0C093D50u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C093D50 bra */
L_0C093D60: BLKS(0x0C093D60u);
	r8 = 0xB4u; UPD(0x0C093D62u, 1);  /* 0C093D60 mov.w @(disp,pc),Rn */
	IF(0x0C093D62u); MACL = r11 * r8;  /* 0C093D62 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C093D66u, 3);  /* 0C093D64 mov.l @(disp,pc),Rn */
	IF(0x0C093D66u); r3 = MACL;  /* 0C093D66 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C093D6Au, 2);  /* 0C093D68 mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C093D6A add Rm,Rn */
	r2 += r3;  /* 0C093D6C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C093D70u, 3);  /* 0C093D6E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C093D70 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C093D72 extu.b Rm,Rn */
	T = r0 == 0x6u;  /* 0C093D74 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093D50u, 6); goto L_0C093D50; } UPD(0x0C093D7Au, 1); goto L_0C093D7A; }  /* 0C093D76 bf/s */
L_0C093D7A: BLKS(0x0C093D7Au);
	r0 = 0x88u; UPD(0x0C093D7Cu, 1);  /* 0C093D7A mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C093D7C mov #imm,Rn */
	r4 = R32(r3 + 0xCu); UPD(0x0C093D80u, 2);  /* 0C093D7E mov.l @(disp,Rm),Rn */
	IF(0x0C093D80u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C093D82u, 1);  /* 0C093D80 mov.w @(r0,Rm),Rn */
	r4 += r5;  /* 0C093D82 add Rm,Rn */
	W8(r2, r12); UPD(0x0C093D86u, 2);  /* 0C093D84 mov.b Rm,@Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C093D88u, 1);  /* 0C093D86 mov.l Rm,@(disp,Rn) */
L_0C093D88: BLKS(0x0C093D88u);
	r1 = 0xC0A8AE0u; UPD(0x0C093D8Au, 1);  /* 0C093D88 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C093710u, 3); goto L_0C093710; }  /* 0C093D8A bra */
L_0C093D90: BLKS(0x0C093D90u);
	r9 = 0xB4u; UPD(0x0C093D92u, 1);  /* 0C093D90 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C093D92 mov Rm,Rn */
	IF(0x0C093D94u); MACL = r11 * r9;  /* 0C093D94 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C093D98u, 4);  /* 0C093D96 mov.l @(disp,pc),Rn */
	IF(0x0C093D98u); r8 = MACL;  /* 0C093D98 sts macl,Rn */
	r8 += r0;  /* 0C093D9A add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C093D9Eu, 3);  /* 0C093D9C mov.l @(disp,Rm),Rn */
	r7 = 0xC1B8D70u; UPD(0x0C093DA0u, 1);  /* 0C093D9E mov.l @(disp,pc),Rn */
	IF(0x0C093DA0u); r0 <<= 2;  /* 0C093DA0 shll2 Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C093DA4u, 2);  /* 0C093DA2 mov.l @(disp,pc),Rn */
	IF(0x0C093DA4u); r3 = R32(r0 + r7); UPD(0x0C093DA6u, 1);  /* 0C093DA4 mov.l @(r0,Rm),Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C093DA8u, 1);  /* 0C093DA6 mov.l @(disp,pc),Rn */
	IF(0x0C093DA8u); { u32 t_ = r2; PR = 0x0C093DACu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C093DACu); }  /* 0C093DA8 jsr @Rn */
L_0C093DAC: BLKS(0x0C093DACu);
	r4 = r11;  /* 0C093DAC mov Rm,Rn */
	r5 = 0xAu;  /* 0C093DAE mov #imm,Rn */
	IF(0x0C093DB0u); { u32 t_ = r10; PR = 0x0C093DB4u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C093DB4u); }  /* 0C093DB0 jsr @Rn */
L_0C093DB4: BLKS(0x0C093DB4u);
	T = (r0 & r0) == 0;  /* 0C093DB4 tst Rm,Rn */
	if (T) { UPD(0x0C093D50u, 4); goto L_0C093D50; }  /* 0C093DB6 bt */
L_0C093DB8: BLKS(0x0C093DB8u);
	r13 = 0xC0C2360u; UPD(0x0C093DBAu, 1);  /* 0C093DB8 mov.l @(disp,pc),Rn */
	r11 = 0xC18A00Au; UPD(0x0C093DBCu, 1);  /* 0C093DBA mov.l @(disp,pc),Rn */
	IF(0x0C093DBCu); { u32 t_ = r13; PR = 0x0C093DC0u; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C093DC0u); }  /* 0C093DBC jsr @Rn */
L_0C093DC0: BLKS(0x0C093DC0u);
	r6 = 0x20000u; UPD(0x0C093DC2u, 1);  /* 0C093DC0 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C093DC2 mov #imm,Rn */
	W32(r15, r6); UPD(0x0C093DC6u, 2);  /* 0C093DC4 mov.l Rm,@Rn */
	r7 = r0;  /* 0C093DC6 mov Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C093DCAu, 2);  /* 0C093DC8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C093DCCu, 1);  /* 0C093DCA mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C093DCEu, 1);  /* 0C093DCC mov.l @(disp,Rm),Rn */
L_0C093DCE: BLKS(0x0C093DCEu);
	r8 = 0xC0BA970u; UPD(0x0C093DD0u, 1);  /* 0C093DCE mov.l @(disp,pc),Rn */
	IF(0x0C093DD0u); { u32 t_ = r8; PR = 0x0C093DD4u; IF(0x0C093DD2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C093DD4u); }  /* 0C093DD0 jsr @Rn */
L_0C093DD4: BLKS(0x0C093DD4u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935E8u, 3); goto L_0C0935E8; }  /* 0C093DD4 bra */
L_0C093DE0: BLKS(0x0C093DE0u);
	r8 = 0xC0A8CA0u; UPD(0x0C093DE2u, 1);  /* 0C093DE0 mov.l @(disp,pc),Rn */
	IF(0x0C093DE2u); { u32 t_ = r8; PR = 0x0C093DE6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C093DE6u); }  /* 0C093DE2 jsr @Rn */
L_0C093DE6: BLKS(0x0C093DE6u);
	IF(0x0C093DE6u); T = (s32)r0 >= 0;  /* 0C093DE6 cmp/pz Rn */
	if (T) { UPD(0x0C093DEEu, 4); goto L_0C093DEE; }  /* 0C093DE8 bt */
L_0C093DEA: BLKS(0x0C093DEAu);
	{ IF(0x0C093DECu); ; /* slot nop */ UPD(0x0C093B80u, 3); goto L_0C093B80; }  /* 0C093DEA bra */
L_0C093DEE: BLKS(0x0C093DEEu);
	r13 = 0xB4u; UPD(0x0C093DF0u, 1);  /* 0C093DEE mov.w @(disp,pc),Rn */
	IF(0x0C093DF0u); MACL = r11 * r13;  /* 0C093DF0 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C093DF4u, 3);  /* 0C093DF2 mov.l @(disp,pc),Rn */
	IF(0x0C093DF4u); r8 = MACL;  /* 0C093DF4 sts macl,Rn */
	r8 += r9;  /* 0C093DF6 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C093DFAu, 3);  /* 0C093DF8 mov.l @Rm,Rn */
	IF(0x0C093DFAu); MACL = r0 * r13;  /* 0C093DFA mul.l Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C093DFEu, 3);  /* 0C093DFC mov.w @(disp,pc),Rn */
	r6 &= r4;  /* 0C093DFE and Rm,Rn */
	W32(r8, r6); UPD(0x0C093E02u, 2);  /* 0C093E00 mov.l Rm,@Rn */
	IF(0x0C093E02u); r12 = MACL;  /* 0C093E02 sts macl,Rn */
	r12 += r9;  /* 0C093E04 add Rm,Rn */
	r2 = R32(r12); UPD(0x0C093E08u, 3);  /* 0C093E06 mov.l @Rm,Rn */
	r4 = r8;  /* 0C093E08 mov Rm,Rn */
	r7 = R32(r12 + 0x24u); UPD(0x0C093E0Cu, 2);  /* 0C093E0A mov.l @(disp,Rm),Rn */
	r3 = R32(r12 + 0x28u); UPD(0x0C093E0Eu, 1);  /* 0C093E0C mov.l @(disp,Rm),Rn */
	r10 = 0xA8u; UPD(0x0C093E10u, 1);  /* 0C093E0E mov.w @(disp,pc),Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C093E12u, 1);  /* 0C093E10 mov.l @(disp,Rm),Rn */
	r12 += r10;  /* 0C093E12 add Rm,Rn */
	r9 = 0x100u; UPD(0x0C093E16u, 2);  /* 0C093E14 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C093E16 add #imm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C093E1Au, 2);  /* 0C093E18 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C093E1A add Rm,Rn */
	r2 &= r9;  /* 0C093E1C and Rm,Rn */
	r4 += r10;  /* 0C093E1E add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C093E22u, 4);  /* 0C093E20 mov.b @Rm,Rn */
	r6 |= r2;  /* 0C093E22 or Rm,Rn */
	r3 += r1;  /* 0C093E24 add Rm,Rn */
	r4 += 0x1u;  /* 0C093E26 add #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C093E2Au, 4);  /* 0C093E28 mov.l @(disp,Rm),Rn */
	W32(r8, r6); UPD(0x0C093E2Cu, 1);  /* 0C093E2A mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C093E2C tst Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C093E30u, 2);  /* 0C093E2E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C093E32u, 1);  /* 0C093E30 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r4, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093E80u, 3); goto L_0C093E80; } UPD(0x0C093E36u, 1); goto L_0C093E36; }  /* 0C093E32 bt/s */
L_0C093E36: BLKS(0x0C093E36u);
	T = r0 == 0xFu;  /* 0C093E36 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C093E50u, 4); goto L_0C093E50; }  /* 0C093E38 bt */
L_0C093E3A: BLKS(0x0C093E3Au);
	r10 = 0xB4u; UPD(0x0C093E3Cu, 1);  /* 0C093E3A mov.w @(disp,pc),Rn */
	IF(0x0C093E3Cu); MACL = r11 * r10;  /* 0C093E3C mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C093E40u, 3);  /* 0C093E3E mov.l @(disp,pc),Rn */
	IF(0x0C093E40u); r2 = MACL;  /* 0C093E40 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C093E44u, 2);  /* 0C093E42 mov.w @(disp,pc),Rn */
	r2 += r12;  /* 0C093E44 add Rm,Rn */
	IF(0x0C093E46u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C093E48u, 2);  /* 0C093E46 mov.w @(r0,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C093E4Au, 1);  /* 0C093E48 mov.l @(disp,Rm),Rn */
	r1 += r8;  /* 0C093E4A add Rm,Rn */
	UPD(0x0C093E4Cu, 1);
L_0C093E4C: BLKS(0x0C093E4Cu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093D88u, 3); goto L_0C093D88; }  /* 0C093E4C bra */
L_0C093E50: BLKS(0x0C093E50u);
	r0 = 0x88u; UPD(0x0C093E52u, 1);  /* 0C093E50 mov.w @(disp,pc),Rn */
	IF(0x0C093E52u); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C093E54u, 1);  /* 0C093E52 mov.w @(r0,Rm),Rn */
	IF(0x0C093E54u); T = (s32)r3 > 0;  /* 0C093E54 cmp/pl Rn */
	if (!T) { UPD(0x0C093E70u, 4); goto L_0C093E70; }  /* 0C093E56 bf */
L_0C093E58: BLKS(0x0C093E58u);
	r1 = R32(r8 + 0x8u); UPD(0x0C093E5Au, 1);  /* 0C093E58 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C093E5A add #imm,Rn */
	r4 = r11;  /* 0C093E5C mov Rm,Rn */
	UPD(0x0C093E5Eu, 2);
L_0C093E5E: BLKS(0x0C093E5Eu);
	r11 = 0xC0A8B10u; UPD(0x0C093E60u, 1);  /* 0C093E5E mov.l @(disp,pc),Rn */
	r12 = 0x10u;  /* 0C093E60 mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C093E64u, 2);  /* 0C093E62 mov.l Rm,@(disp,Rn) */
	IF(0x0C093E64u); { u32 t_ = r11; PR = 0x0C093E68u; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C093E68u); }  /* 0C093E64 jsr @Rn */
L_0C093E68: BLKS(0x0C093E68u);
	r0 = 0x86u; UPD(0x0C093E6Au, 1);  /* 0C093E68 mov.w @(disp,pc),Rn */
	{ IF(0x0C093E6Cu); W16(r0 + r8, r9); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C0935E8u, 3); goto L_0C0935E8; }  /* 0C093E6A bra */
L_0C093E70: BLKS(0x0C093E70u);
	r1 = 0xEu;  /* 0C093E70 mov #imm,Rn */
	UPD(0x0C093E72u, 1);
L_0C093E72: BLKS(0x0C093E72u);
	{ W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093D88u, 3); goto L_0C093D88; }  /* 0C093E72 bra */
L_0C093E80: BLKS(0x0C093E80u);
	r0 = 0x88u; UPD(0x0C093E82u, 1);  /* 0C093E80 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C093E82 mov #imm,Rn */
	IF(0x0C093E84u); W16(r0 + r8, r5); UPD(0x0C093E86u, 2);  /* 0C093E84 mov.w Rm,@(r0,Rn) */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C093E72u, 3); goto L_0C093E72; }  /* 0C093E86 bra */
L_0C093EC0: BLKS(0x0C093EC0u);
	r9 = 0xC0A8CA0u; UPD(0x0C093EC2u, 1);  /* 0C093EC0 mov.l @(disp,pc),Rn */
	IF(0x0C093EC2u); { u32 t_ = r9; PR = 0x0C093EC6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C093EC6u); }  /* 0C093EC2 jsr @Rn */
L_0C093EC6: BLKS(0x0C093EC6u);
	IF(0x0C093EC6u); T = (s32)r0 >= 0;  /* 0C093EC6 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093ED0u, 4); goto L_0C093ED0; } goto L_0C093ECC; }  /* 0C093EC8 bt/s */
L_0C093ECC: BLKS(0x0C093ECCu);
	{ IF(0x0C093ECEu); ; /* slot nop */ UPD(0x0C093B80u, 4); goto L_0C093B80; }  /* 0C093ECC bra */
L_0C093ED0: BLKS(0x0C093ED0u);
	r0 = 0xB4u; UPD(0x0C093ED2u, 1);  /* 0C093ED0 mov.w @(disp,pc),Rn */
	IF(0x0C093ED2u); MACL = r11 * r0;  /* 0C093ED2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C093ED6u, 3);  /* 0C093ED4 mov.l @(disp,pc),Rn */
	IF(0x0C093ED6u); r8 = MACL;  /* 0C093ED6 sts macl,Rn */
	r8 += r13;  /* 0C093ED8 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C093EDCu, 3);  /* 0C093EDA mov.l @Rm,Rn */
	IF(0x0C093EDCu); MACL = r12 * r0;  /* 0C093EDC mul.l Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C093EE0u, 3);  /* 0C093EDE mov.w @(disp,pc),Rn */
	r6 &= r2;  /* 0C093EE0 and Rm,Rn */
	W32(r8, r6); UPD(0x0C093EE4u, 2);  /* 0C093EE2 mov.l Rm,@Rn */
	IF(0x0C093EE4u); r5 = MACL;  /* 0C093EE4 sts macl,Rn */
	r5 += r13;  /* 0C093EE6 add Rm,Rn */
	r4 = R32(r5); UPD(0x0C093EEAu, 3);  /* 0C093EE8 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C093EECu, 1);  /* 0C093EEA mov.w @(disp,pc),Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C093EEEu, 1);  /* 0C093EEC mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C093EEE and Rm,Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C093EF2u, 2);  /* 0C093EF0 mov.l @(disp,Rm),Rn */
	r6 |= r4;  /* 0C093EF2 or Rm,Rn */
	r10 = R32(r5 + 0x28u); UPD(0x0C093EF6u, 2);  /* 0C093EF4 mov.l @(disp,Rm),Rn */
	r9 += r7;  /* 0C093EF6 add Rm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C093EFAu, 2);  /* 0C093EF8 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C093EFA mov Rm,Rn */
	r10 += r3;  /* 0C093EFC add Rm,Rn */
	W32(r8, r6); UPD(0x0C093F00u, 3);  /* 0C093EFE mov.l Rm,@Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C093F02u, 1);  /* 0C093F00 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r10); UPD(0x0C093F04u, 1);  /* 0C093F02 mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C093F04 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C093F08u, 2);  /* 0C093F06 mov.w @Rm,Rn */
	IF(0x0C093F08u); MACL = r1 * r0;  /* 0C093F08 mul.l Rm,Rn */
	r12 = 0xA8u; UPD(0x0C093F0Cu, 3);  /* 0C093F0A mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C093F0C add #imm,Rn */
	r5 += r12;  /* 0C093F0E add Rm,Rn */
	IF(0x0C093F10u); r0 = MACL;  /* 0C093F10 sts macl,Rn */
	r6 = 0x9Fu; UPD(0x0C093F14u, 4);  /* 0C093F12 mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C093F14 add Rm,Rn */
	r5 += 0x1u;  /* 0C093F16 add #imm,Rn */
	r4 += r12;  /* 0C093F18 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C093F1Cu, 4);  /* 0C093F1A mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C093F1C add #imm,Rn */
	IF(0x0C093F1Eu); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C093F20u, 2);  /* 0C093F1E mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C093F20 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C093F22 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r4, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093F2Cu, 5); goto L_0C093F2C; } UPD(0x0C093F28u, 1); goto L_0C093F28; }  /* 0C093F24 bf/s */
L_0C093F28: BLKS(0x0C093F28u);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C094110u, 3); goto L_0C094110; }  /* 0C093F28 bra */
L_0C093F2C: BLKS(0x0C093F2Cu);
	r8 = 0x2u;  /* 0C093F2C mov #imm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C093F2E cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C093F38u, 5); goto L_0C093F38; } goto L_0C093F34; }  /* 0C093F30 bf/s */
L_0C093F34: BLKS(0x0C093F34u);
	{ IF(0x0C093F36u); ; /* slot nop */ UPD(0x0C0940E0u, 4); goto L_0C0940E0; }  /* 0C093F34 bra */
L_0C093F38: BLKS(0x0C093F38u);
	T = r0 == 0x1u;  /* 0C093F38 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C093F40u, 4); goto L_0C093F40; }  /* 0C093F3A bf */
L_0C093F3C: BLKS(0x0C093F3Cu);
	{ IF(0x0C093F3Eu); ; /* slot nop */ UPD(0x0C094090u, 3); goto L_0C094090; }  /* 0C093F3C bra */
L_0C093F40: BLKS(0x0C093F40u);
	r5 = 0xB4u; UPD(0x0C093F42u, 1);  /* 0C093F40 mov.w @(disp,pc),Rn */
	IF(0x0C093F42u); MACL = r11 * r5;  /* 0C093F42 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C093F46u, 3);  /* 0C093F44 mov.l @(disp,pc),Rn */
	IF(0x0C093F46u); r8 = MACL;  /* 0C093F46 sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C093F4Au, 2);  /* 0C093F48 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C093F4A add Rm,Rn */
	r9 += r8;  /* 0C093F4C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r9); UPD(0x0C093F50u, 3);  /* 0C093F4E mov.b @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C093F50 tst Rm,Rn */
	{ u32 c_ = T; r2 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093FF0u, 4); goto L_0C093FF0; } goto L_0C093F56; }  /* 0C093F52 bt/s */
L_0C093F56: BLKS(0x0C093F56u);
	r2 += 0x1u;  /* 0C093F56 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C093F5Au, 3);  /* 0C093F58 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C093F5A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C093F5C extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C093F5E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093FE4u, 6); goto L_0C093FE4; } UPD(0x0C093F64u, 1); goto L_0C093F64; }  /* 0C093F60 bf/s */
L_0C093F64: BLKS(0x0C093F64u);
	r10 = 0x0u;  /* 0C093F64 mov #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C093F68u, 2);  /* 0C093F66 mov.l @(disp,Rm),Rn */
	r5 = 0x4u;  /* 0C093F68 mov #imm,Rn */
	W8(r2, r10); UPD(0x0C093F6Cu, 2);  /* 0C093F6A mov.b Rm,@Rn */
	IF(0x0C093F6Cu); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C093F6C shld Rm,Rn */
	W32(r14, r8); UPD(0x0C093F70u, 2);  /* 0C093F6E mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C093F70 exts.w Rm,Rn */
	r13 = 0x0u;  /* 0C093F72 mov #imm,Rn */
	UPD(0x0C093F74u, 2);
L_0C093F74: BLKS(0x0C093F74u);
	r10 = r13;  /* 0C093F74 mov Rm,Rn */
	r11 = 0xC1B8DA4u; UPD(0x0C093F78u, 2);  /* 0C093F76 mov.l @(disp,pc),Rn */
	IF(0x0C093F78u); r10 <<= 2;  /* 0C093F78 shll2 Rn */
	r9 = 0xC1B8DB4u; UPD(0x0C093F7Cu, 2);  /* 0C093F7A mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C093F7C add Rm,Rn */
	r3 = 0xC069B20u; UPD(0x0C093F80u, 2);  /* 0C093F7E mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C093F80 add Rm,Rn */
	r5 = R32(r11); UPD(0x0C093F84u, 2);  /* 0C093F82 mov.l @Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C093F86u, 1);  /* 0C093F84 mov.l @(disp,pc),Rn */
	IF(0x0C093F86u); { u32 t_ = r3; PR = 0x0C093F8Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C093F8Au); }  /* 0C093F86 jsr @Rn */
L_0C093F8A: BLKS(0x0C093F8Au);
	r5 = R32(r9); UPD(0x0C093F8Cu, 1);  /* 0C093F8A mov.l @Rm,Rn */
	r8 = r0;  /* 0C093F8C mov Rm,Rn */
	IF(0x0C093F8Eu); { u32 t_ = r10; PR = 0x0C093F92u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C093F92u); }  /* 0C093F8E jsr @Rn */
L_0C093F92: BLKS(0x0C093F92u);
	r5 = R32(r14); UPD(0x0C093F94u, 1);  /* 0C093F92 mov.l @Rm,Rn */
	r8 -= r0;  /* 0C093F94 sub Rm,Rn */
	r10 = R32(r5 + 0x24u); UPD(0x0C093F98u, 2);  /* 0C093F96 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C093F98 mov Rm,Rn */
	r10 += r8;  /* 0C093F9A add Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C093F9Eu, 3);  /* 0C093F9C mov.l @(disp,pc),Rn */
	r0 = 0x30000u; UPD(0x0C093FA0u, 1);  /* 0C093F9E mov.l @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C093FA2u, 1);  /* 0C093FA0 mov.l @Rm,Rn */
	IF(0x0C093FA2u); { u32 t_ = r8; PR = 0x0C093FA6u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C093FA6u); }  /* 0C093FA2 jsr @Rn */
L_0C093FA6: BLKS(0x0C093FA6u);
	r1 = R32(r14); UPD(0x0C093FA8u, 1);  /* 0C093FA6 mov.l @Rm,Rn */
	r4 = r12;  /* 0C093FA8 mov Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C093FACu, 2);  /* 0C093FAA mov.l @(disp,pc),Rn */
	r8 = 0x3u;  /* 0C093FAC mov #imm,Rn */
	r11 = R32(r1 + 0x28u); UPD(0x0C093FB0u, 2);  /* 0C093FAE mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C093FB2u, 1);  /* 0C093FB0 mov.l @Rm,Rn */
	IF(0x0C093FB2u); { u32 t_ = r2; PR = 0x0C093FB6u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C093FB6u); }  /* 0C093FB2 jsr @Rn */
L_0C093FB6: BLKS(0x0C093FB6u);
	r4 = r13;  /* 0C093FB6 mov Rm,Rn */
	IF(0x0C093FB8u); T = r4 >> 31; r4 = (r4 << 1) | T;  /* 0C093FB8 rotl Rn */
	IF(0x0C093FBAu); r6 = T;  /* 0C093FBA movt Rn */
	r11 += r0;  /* 0C093FBC add Rm,Rn */
	r6 += r13;  /* 0C093FBE add Rm,Rn */
	IF(0x0C093FC0u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C093FC0 shar Rn */
	r0 = 0xC1B8DC4u; UPD(0x0C093FC4u, 7);  /* 0C093FC2 mov.l @(disp,pc),Rn */
	IF(0x0C093FC4u); r6 <<= 2;  /* 0C093FC4 shll2 Rn */
	IF(0x0C093FC6u); r7 = R32(r0 + r6); UPD(0x0C093FC8u, 2);  /* 0C093FC6 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C093FC8 add #imm,Rn */
	r9 = 0xC0BAD60u; UPD(0x0C093FCCu, 2);  /* 0C093FCA mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C093FCC mov #imm,Rn */
	W32(r15, r7); UPD(0x0C093FD0u, 2);  /* 0C093FCE mov.l Rm,@Rn */
	r5 = r10;  /* 0C093FD0 mov Rm,Rn */
	r6 = r11;  /* 0C093FD2 mov Rm,Rn */
	IF(0x0C093FD4u); { u32 t_ = r9; PR = 0x0C093FD8u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C093FD8u); }  /* 0C093FD4 jsr @Rn */
L_0C093FD8: BLKS(0x0C093FD8u);
	r3 = r13;  /* 0C093FD8 mov Rm,Rn */
	r3 += 0x1u;  /* 0C093FDA add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C093FDC exts.w Rm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C093FDE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093F74u, 7); goto L_0C093F74; } UPD(0x0C093FE4u, 1); goto L_0C093FE4; }  /* 0C093FE0 bf/s */
L_0C093FE4: BLKS(0x0C093FE4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C093FE4 bra */
L_0C093FF0: BLKS(0x0C093FF0u);
	r12 = 0xC069BF0u; UPD(0x0C093FF2u, 1);  /* 0C093FF0 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C093FF4u, 1);  /* 0C093FF2 mov.l @(disp,pc),Rn */
	IF(0x0C093FF4u); { u32 t_ = r12; PR = 0x0C093FF8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C093FF8u); }  /* 0C093FF4 jsr @Rn */
L_0C093FF8: BLKS(0x0C093FF8u);
	r4 = r11;  /* 0C093FF8 mov Rm,Rn */
	IF(0x0C093FFAu); { u32 t_ = r13; PR = 0x0C093FFEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C093FFEu); }  /* 0C093FFA jsr @Rn */
L_0C093FFE: BLKS(0x0C093FFEu);
	r7 = 0x86u; UPD(0x0C094000u, 1);  /* 0C093FFE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C094000 mov Rm,Rn */
	IF(0x0C094002u); r10 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C094004u, 2);  /* 0C094002 mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C094004 mov #imm,Rn */
	r10 += 0x8u;  /* 0C094006 add #imm,Rn */
	IF(0x0C094008u); r10 >>= 2;  /* 0C094008 shlr2 Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C09400Cu, 4);  /* 0C09400A mov.l @(disp,pc),Rn */
	IF(0x0C09400Cu); r10 >>= 2;  /* 0C09400C shlr2 Rn */
	r10 &= r3;  /* 0C09400E and Rm,Rn */
	r4 = r11;  /* 0C094010 mov Rm,Rn */
	IF(0x0C094012u); { u32 t_ = r12; PR = 0x0C094016u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C094016u); }  /* 0C094012 jsr @Rn */
L_0C094016: BLKS(0x0C094016u);
	r4 = r11;  /* 0C094016 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C09401Au, 2);  /* 0C094018 mov.l @(disp,pc),Rn */
	r5 = 0x3Cu;  /* 0C09401A mov #imm,Rn */
	IF(0x0C09401Cu); { u32 t_ = r11; PR = 0x0C094020u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C094020u); }  /* 0C09401C jsr @Rn */
L_0C094020: BLKS(0x0C094020u);
	T = (r0 & r0) == 0;  /* 0C094020 tst Rm,Rn */
	if (T) { UPD(0x0C093FE4u, 4); goto L_0C093FE4; }  /* 0C094022 bt */
L_0C094024: BLKS(0x0C094024u);
	r2 = 0x8u;  /* 0C094024 mov #imm,Rn */
	r4 = 0x88u; UPD(0x0C094028u, 2);  /* 0C094026 mov.w @(disp,pc),Rn */
	r11 = 0xC062780u; UPD(0x0C09402Au, 1);  /* 0C094028 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C09402A add Rm,Rn */
	W8(r9, r2); UPD(0x0C09402Eu, 2);  /* 0C09402C mov.b Rm,@Rn */
	IF(0x0C09402Eu); { u32 t_ = r11; PR = 0x0C094032u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C094032u); }  /* 0C09402E jsr @Rn */
L_0C094032: BLKS(0x0C094032u);
	r6 = 0xC1B8DA0u; UPD(0x0C094034u, 1);  /* 0C094032 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C094034 add Rm,Rn */
	IF(0x0C094036u); r9 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C094038u, 2);  /* 0C094036 mov.w @(r0,Rm),Rn */
	W16(r8, r9); UPD(0x0C09403Au, 1);  /* 0C094038 mov.w Rm,@Rn */
L_0C09403A: BLKS(0x0C09403Au);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C09403A bra */
L_0C094090: BLKS(0x0C094090u);
	r9 = 0xB4u; UPD(0x0C094092u, 1);  /* 0C094090 mov.w @(disp,pc),Rn */
	IF(0x0C094092u); MACL = r11 * r9;  /* 0C094092 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C094096u, 3);  /* 0C094094 mov.l @(disp,pc),Rn */
	IF(0x0C094096u); r10 = MACL;  /* 0C094096 sts macl,Rn */
	r1 = 0x99u; UPD(0x0C09409Au, 2);  /* 0C094098 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C09409A add Rm,Rn */
	r1 += r10;  /* 0C09409C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C0940A0u, 3);  /* 0C09409E mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C0940A0 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C0940A2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C0940A4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09403Au, 6); goto L_0C09403A; } UPD(0x0C0940AAu, 1); goto L_0C0940AA; }  /* 0C0940A6 bf/s */
L_0C0940AA: BLKS(0x0C0940AAu);
	r12 = 0x88u; UPD(0x0C0940ACu, 1);  /* 0C0940AA mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0940AC mov #imm,Rn */
	r12 += r10;  /* 0C0940AE add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0940B2u, 3);  /* 0C0940B0 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0940B2 mov Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r12); UPD(0x0C0940B6u, 2);  /* 0C0940B4 mov.w @Rm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C0940B8u, 1);  /* 0C0940B6 mov.l @(disp,pc),Rn */
	r0 -= r8;  /* 0C0940B8 sub Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0940BA and #imm,r0 */
	W32(r10 + 0xCu, r0); UPD(0x0C0940BEu, 3);  /* 0C0940BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0940BEu); { u32 t_ = r2; PR = 0x0C0940C2u; W8(r1, r13); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0940C2u); }  /* 0C0940BE jsr @Rn */
L_0C0940C2: BLKS(0x0C0940C2u);
	r11 = 0x9Cu; UPD(0x0C0940C4u, 1);  /* 0C0940C2 mov.w @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0940C4 mov #imm,Rn */
	r0 = 0x86u; UPD(0x0C0940C8u, 2);  /* 0C0940C6 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C0940C8 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r12); UPD(0x0C0940CCu, 2);  /* 0C0940CA mov.w @Rm,Rn */
	r11 += 0x1u;  /* 0C0940CC add #imm,Rn */
	IF(0x0C0940CEu); r7 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0940D0u, 2);  /* 0C0940CE mov.w @(r0,Rm),Rn */
	IF(0x0C0940D0u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0940D0 shld Rm,Rn */
	W8(r11, r13); UPD(0x0C0940D4u, 2);  /* 0C0940D2 mov.b Rm,@Rn */
	r7 -= r6;  /* 0C0940D4 sub Rm,Rn */
	IF(0x0C0940D6u); W16(r0 + r10, r7); UPD(0x0C0940D8u, 2);  /* 0C0940D6 mov.w Rm,@(r0,Rn) */
	{ u32 v_ = r13; r11 -= 1; W8(r11, v_); } UPD(0x0C0940DAu, 1);  /* 0C0940D8 mov.b Rm,@-Rn */
L_0C0940DA: BLKS(0x0C0940DAu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C0940DA bra */
L_0C0940E0: BLKS(0x0C0940E0u);
	if (T) { UPD(0x0C0940E6u, 3); goto L_0C0940E6; }  /* 0C0940E0 bt */
L_0C0940E2: BLKS(0x0C0940E2u);
	{ IF(0x0C0940E4u); ; /* slot nop */ UPD(0x0C093F40u, 3); goto L_0C093F40; }  /* 0C0940E2 bra */
L_0C0940E6: BLKS(0x0C0940E6u);
	r9 = 0xC069BF0u; UPD(0x0C0940E8u, 1);  /* 0C0940E6 mov.l @(disp,pc),Rn */
	r10 = 0xC068F00u; UPD(0x0C0940EAu, 1);  /* 0C0940E8 mov.l @(disp,pc),Rn */
	IF(0x0C0940EAu); { u32 t_ = r9; PR = 0x0C0940EEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0940EEu); }  /* 0C0940EA jsr @Rn */
L_0C0940EE: BLKS(0x0C0940EEu);
	r4 = r11;  /* 0C0940EE mov Rm,Rn */
	IF(0x0C0940F0u); { u32 t_ = r10; PR = 0x0C0940F4u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C0940F4u); }  /* 0C0940F0 jsr @Rn */
L_0C0940F4: BLKS(0x0C0940F4u);
	r4 = 0xB4u; UPD(0x0C0940F6u, 1);  /* 0C0940F4 mov.w @(disp,pc),Rn */
	r12 = 0x1Fu;  /* 0C0940F6 mov #imm,Rn */
	IF(0x0C0940F8u); MACL = r11 * r4;  /* 0C0940F8 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0940FCu, 4);  /* 0C0940FA mov.l @(disp,pc),Rn */
	IF(0x0C0940FCu); r2 = MACL;  /* 0C0940FC sts macl,Rn */
	r2 += r8;  /* 0C0940FE add Rm,Rn */
	r13 = 0x86u; UPD(0x0C094102u, 3);  /* 0C094100 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C094102 mov Rm,Rn */
	IF(0x0C094104u); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C094106u, 2);  /* 0C094104 mov.w @(r0,Rm),Rn */
	r1 += 0x8u;  /* 0C094106 add #imm,Rn */
	IF(0x0C094108u); r1 >>= 2;  /* 0C094108 shlr2 Rn */
	IF(0x0C09410Au); r1 >>= 2;  /* 0C09410A shlr2 Rn */
	{ r1 &= r12; /* slot and Rm,Rn */ UPD(0x0C093E4Cu, 6); goto L_0C093E4C; }  /* 0C09410C bra */
L_0C094110: BLKS(0x0C094110u);
	r10 = 0xC0BC1B0u; UPD(0x0C094112u, 1);  /* 0C094110 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C094112 mov #imm,Rn */
	IF(0x0C094114u); { u32 t_ = r10; PR = 0x0C094118u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C094118u); }  /* 0C094114 jsr @Rn */
L_0C094118: BLKS(0x0C094118u);
	T = (r0 & r0) == 0;  /* 0C094118 tst Rm,Rn */
	if (T) { UPD(0x0C0940DAu, 4); goto L_0C0940DA; }  /* 0C09411A bt */
L_0C09411C: BLKS(0x0C09411Cu);
	r7 = 0x4u;  /* 0C09411C mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C094120u, 2);  /* 0C09411E mov.w @(disp,pc),Rn */
	IF(0x0C094120u); r13 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C094122u, 1);  /* 0C094120 mov.w @(r0,Rm),Rn */
	r4 = r11;  /* 0C094122 mov Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C094126u, 2);  /* 0C094124 mov.l @(disp,Rm),Rn */
	r9 = 0x86u; UPD(0x0C094128u, 1);  /* 0C094126 mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C094128 add Rm,Rn */
	r9 += r8;  /* 0C09412A add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C09412Eu, 3);  /* 0C09412C mov.w @Rm,Rn */
	IF(0x0C09412Eu); ARG0(0x4D7Du); { s32 s_ = (s32)r7; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C09412E shld Rm,Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C094132u, 2);  /* 0C094130 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C094132 and #imm,r0 */
	r13 += r3;  /* 0C094134 add Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C094138u, 3);  /* 0C094136 mov.l Rm,@(disp,Rn) */
	IF(0x0C094138u); { u32 t_ = r5; PR = 0x0C09413Cu; W16(r9, r13); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09413Cu); }  /* 0C094138 jsr @Rn */
L_0C09413C: BLKS(0x0C09413Cu);
	r0 = R32(r8 + 0xCu); UPD(0x0C09413Eu, 1);  /* 0C09413C mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C09413E mov #imm,Rn */
	IF(0x0C094140u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C094140 shld Rm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C094144u, 3);  /* 0C094142 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r0;  /* 0C094144 exts.w Rm,Rn */
	r13 = 0x0u;  /* 0C094146 mov #imm,Rn */
	UPD(0x0C094148u, 2);
L_0C094148: BLKS(0x0C094148u);
	r10 = r13;  /* 0C094148 mov Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C09414Cu, 2);  /* 0C09414A mov.l @(disp,pc),Rn */
	IF(0x0C09414Cu); r10 <<= 2;  /* 0C09414C shll2 Rn */
	r11 = 0xC1B8DA4u; UPD(0x0C094150u, 2);  /* 0C09414E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C094150 mov Rm,Rn */
	r11 += r10;  /* 0C094152 add Rm,Rn */
	IF(0x0C094154u); { u32 t_ = r9; PR = 0x0C094158u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C094158u); }  /* 0C094154 jsr @Rn */
L_0C094158: BLKS(0x0C094158u);
	r9 = 0xC1B8DB4u; UPD(0x0C09415Au, 1);  /* 0C094158 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C09415A mov Rm,Rn */
	r9 += r10;  /* 0C09415C add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C094160u, 3);  /* 0C09415E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C094160 mov Rm,Rn */
	IF(0x0C094162u); { u32 t_ = r10; PR = 0x0C094166u; r5 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C094166u); }  /* 0C094162 jsr @Rn */
L_0C094166: BLKS(0x0C094166u);
	r6 = R32(r14 + 0x4u); UPD(0x0C094168u, 1);  /* 0C094166 mov.l @(disp,Rm),Rn */
	r8 -= r0;  /* 0C094168 sub Rm,Rn */
	r10 = R32(r6 + 0x24u); UPD(0x0C09416Cu, 2);  /* 0C09416A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09416C mov Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C094170u, 2);  /* 0C09416E mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C094170 add Rm,Rn */
	r3 = 0x30000u; UPD(0x0C094174u, 2);  /* 0C094172 mov.l @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C094176u, 1);  /* 0C094174 mov.l @Rm,Rn */
	IF(0x0C094176u); { u32 t_ = r7; PR = 0x0C09417Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09417Au); }  /* 0C094176 jsr @Rn */
L_0C09417A: BLKS(0x0C09417Au);
	r5 = R32(r14 + 0x4u); UPD(0x0C09417Cu, 1);  /* 0C09417A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09417C mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C094180u, 2);  /* 0C09417E mov.l @(disp,pc),Rn */
	r11 = R32(r5 + 0x28u); UPD(0x0C094182u, 1);  /* 0C094180 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C094184u, 1);  /* 0C094182 mov.l @Rm,Rn */
	IF(0x0C094184u); { u32 t_ = r1; PR = 0x0C094188u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C094188u); }  /* 0C094184 jsr @Rn */
L_0C094188: BLKS(0x0C094188u);
	r11 += r0;  /* 0C094188 add Rm,Rn */
	r0 = r13;  /* 0C09418A mov Rm,Rn */
	IF(0x0C09418Cu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C09418C rotl Rn */
	IF(0x0C09418Eu); r2 = T;  /* 0C09418E movt Rn */
	r2 += r13;  /* 0C094190 add Rm,Rn */
	IF(0x0C094192u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C094192 shar Rn */
	r0 = 0xC1B8DC4u; UPD(0x0C094196u, 7);  /* 0C094194 mov.l @(disp,pc),Rn */
	IF(0x0C094196u); r2 <<= 2;  /* 0C094196 shll2 Rn */
	IF(0x0C094198u); r4 = R32(r0 + r2); UPD(0x0C09419Au, 2);  /* 0C094198 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09419A add #imm,Rn */
	r8 = 0xC0BAD60u; UPD(0x0C09419Eu, 2);  /* 0C09419C mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C09419E mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0941A2u, 2);  /* 0C0941A0 mov.l Rm,@Rn */
	r5 = r10;  /* 0C0941A2 mov Rm,Rn */
	r4 = 0x2u;  /* 0C0941A4 mov #imm,Rn */
	IF(0x0C0941A6u); { u32 t_ = r8; PR = 0x0C0941AAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0941AAu); }  /* 0C0941A6 jsr @Rn */
L_0C0941AA: BLKS(0x0C0941AAu);
	r6 = r13;  /* 0C0941AA mov Rm,Rn */
	r6 += 0x1u;  /* 0C0941AC add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C0941AE exts.w Rm,Rn */
	r11 = 0x3u;  /* 0C0941B0 mov #imm,Rn */
	T = (s32)r13 > (s32)r11;  /* 0C0941B2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094148u, 8); goto L_0C094148; } UPD(0x0C0941B8u, 1); goto L_0C0941B8; }  /* 0C0941B4 bf/s */
L_0C0941B8: BLKS(0x0C0941B8u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C0941B8 bra */
L_0C094200: BLKS(0x0C094200u);
	r12 = 0xC0A8CA0u; UPD(0x0C094202u, 1);  /* 0C094200 mov.l @(disp,pc),Rn */
	IF(0x0C094202u); { u32 t_ = r12; PR = 0x0C094206u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C094206u); }  /* 0C094202 jsr @Rn */
L_0C094206: BLKS(0x0C094206u);
	IF(0x0C094206u); T = (s32)r0 >= 0;  /* 0C094206 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0942FAu, 4); goto L_0C0942FA; } goto L_0C09420C; }  /* 0C094208 bf/s */
L_0C09420C: BLKS(0x0C09420Cu);
	r7 = 0xB4u; UPD(0x0C09420Eu, 2);  /* 0C09420C mov.w @(disp,pc),Rn */
	IF(0x0C09420Eu); MACL = r11 * r7;  /* 0C09420E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C094212u, 3);  /* 0C094210 mov.l @(disp,pc),Rn */
	IF(0x0C094212u); r8 = MACL;  /* 0C094212 sts macl,Rn */
	r8 += r6;  /* 0C094214 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C094218u, 3);  /* 0C094216 mov.l @Rm,Rn */
	IF(0x0C094218u); MACL = r12 * r7;  /* 0C094218 mul.l Rm,Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C09421Cu, 3);  /* 0C09421A mov.w @(disp,pc),Rn */
	r0 &= r9;  /* 0C09421C and Rm,Rn */
	W32(r8, r0); UPD(0x0C094220u, 2);  /* 0C09421E mov.l Rm,@Rn */
	IF(0x0C094220u); r5 = MACL;  /* 0C094220 sts macl,Rn */
	r5 += r6;  /* 0C094222 add Rm,Rn */
	r12 = R32(r5); UPD(0x0C094226u, 3);  /* 0C094224 mov.l @Rm,Rn */
	r9 = 0x100u; UPD(0x0C094228u, 1);  /* 0C094226 mov.w @(disp,pc),Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C09422Au, 1);  /* 0C094228 mov.l @(disp,Rm),Rn */
	r12 &= r9;  /* 0C09422A and Rm,Rn */
	r13 = R32(r5 + 0x28u); UPD(0x0C09422Eu, 2);  /* 0C09422C mov.l @(disp,Rm),Rn */
	r0 |= r12;  /* 0C09422E or Rm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C094232u, 2);  /* 0C094230 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C094234u, 1);  /* 0C094232 mov.l @(disp,Rm),Rn */
	r4 += r10;  /* 0C094234 add Rm,Rn */
	r3 = 0xA8u; UPD(0x0C094238u, 2);  /* 0C094236 mov.w @(disp,pc),Rn */
	r13 += r1;  /* 0C094238 add Rm,Rn */
	W32(r8, r0); UPD(0x0C09423Cu, 2);  /* 0C09423A mov.l Rm,@Rn */
	r5 += r3;  /* 0C09423C add Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C094240u, 2);  /* 0C09423E mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C094240 mov Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C094244u, 2);  /* 0C094242 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C094244 add #imm,Rn */
	r8 += 0x7Eu;  /* 0C094246 add #imm,Rn */
	r0 += r3;  /* 0C094248 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C09424Cu, 4);  /* 0C09424A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09424C add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C094250u, 2);  /* 0C09424E mov.w @Rm,Rn */
	W8(r0, r2); UPD(0x0C094252u, 1);  /* 0C094250 mov.b Rm,@Rn */
	r8 += 0xFFFFFF82u;  /* 0C094252 add #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C094256u, 2);  /* 0C094254 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C094256 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09425Au); MACL = r12 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0942B0u, 5); goto L_0C0942B0; } goto L_0C09425C; }  /* 0C094258 bt/s */
L_0C09425C: BLKS(0x0C09425Cu);
	T = r0 == 0xFu;  /* 0C09425C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C094290u, 6); goto L_0C094290; }  /* 0C09425E bt */
L_0C094260: BLKS(0x0C094260u);
	r2 = 0xB4u; UPD(0x0C094262u, 1);  /* 0C094260 mov.w @(disp,pc),Rn */
	IF(0x0C094262u); MACL = r11 * r2;  /* 0C094262 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C094266u, 3);  /* 0C094264 mov.l @(disp,pc),Rn */
	IF(0x0C094266u); r2 = MACL;  /* 0C094266 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C09426Au, 2);  /* 0C094268 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C09426A add Rm,Rn */
	r3 += r2;  /* 0C09426C add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C094270u, 3);  /* 0C09426E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C094270 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C094272 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C094274 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0941B8u, 6); goto L_0C0941B8; } UPD(0x0C09427Au, 1); goto L_0C09427A; }  /* 0C094276 bf/s */
L_0C09427A: BLKS(0x0C09427Au);
	r10 = 0x0u;  /* 0C09427A mov #imm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C09427Eu, 2);  /* 0C09427C mov.l @(disp,Rm),Rn */
	W8(r3, r10); UPD(0x0C094280u, 1);  /* 0C09427E mov.b Rm,@Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C093E4Cu, 3); goto L_0C093E4C; }  /* 0C094280 bra */
L_0C094290: BLKS(0x0C094290u);
	r2 = 0x99u; UPD(0x0C094292u, 1);  /* 0C094290 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C094292 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C094296u, 2);  /* 0C094294 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C094296 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C094298 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C09429A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0941B8u, 6); goto L_0C0941B8; } UPD(0x0C0942A0u, 1); goto L_0C0942A0; }  /* 0C09429C bf/s */
L_0C0942A0: BLKS(0x0C0942A0u);
	r0 = 0x0u;  /* 0C0942A0 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0942A4u, 2);  /* 0C0942A2 mov.b Rm,@Rn */
	r1 = 0x6u;  /* 0C0942A4 mov #imm,Rn */
	UPD(0x0C0942A6u, 1);
L_0C0942A6: BLKS(0x0C0942A6u);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C093E5Eu, 3); goto L_0C093E5E; }  /* 0C0942A6 bra */
L_0C0942B0: BLKS(0x0C0942B0u);
	IF(0x0C0942B0u); r0 = MACL;  /* 0C0942B0 sts macl,Rn */
	r0 += r6;  /* 0C0942B2 add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C0942B6u, 3);  /* 0C0942B4 mov.w @(disp,pc),Rn */
	IF(0x0C0942B6u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0942B8u, 1);  /* 0C0942B6 mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0942B8 tst Rm,Rn */
	if (T) { UPD(0x0C0942D2u, 4); goto L_0C0942D2; }  /* 0C0942BA bt */
L_0C0942BC: BLKS(0x0C0942BCu);
	r13 = 0xC0C2360u; UPD(0x0C0942BEu, 1);  /* 0C0942BC mov.l @(disp,pc),Rn */
	IF(0x0C0942BEu); { u32 t_ = r13; PR = 0x0C0942C2u; IF(0x0C0942C0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0942C2u); }  /* 0C0942BE jsr @Rn */
L_0C0942C2: BLKS(0x0C0942C2u);
	r0 &= 0x1u;  /* 0C0942C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0942C4 tst Rm,Rn */
	if (!T) { UPD(0x0C0942E0u, 5); goto L_0C0942E0; }  /* 0C0942C6 bf */
L_0C0942C8: BLKS(0x0C0942C8u);
	r3 = R32(r8); UPD(0x0C0942CAu, 1);  /* 0C0942C8 mov.l @Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0942CCu, 1);  /* 0C0942CA mov.l @(disp,pc),Rn */
	T = (r3 & r5) == 0;  /* 0C0942CC tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x9u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0942A6u, 4); goto L_0C0942A6; } UPD(0x0C0942D2u, 1); goto L_0C0942D2; }  /* 0C0942CE bf/s */
L_0C0942D2: BLKS(0x0C0942D2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C0942D2 bra */
L_0C0942E0: BLKS(0x0C0942E0u);
	r1 = R32(r8 + 0xCu); UPD(0x0C0942E2u, 1);  /* 0C0942E0 mov.l @(disp,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C093E72u, 3); goto L_0C093E72; }  /* 0C0942E2 bra */
L_0C0942F0: BLKS(0x0C0942F0u);
	r9 = 0xC0A8CA0u; UPD(0x0C0942F2u, 1);  /* 0C0942F0 mov.l @(disp,pc),Rn */
	IF(0x0C0942F2u); { u32 t_ = r9; PR = 0x0C0942F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0942F6u); }  /* 0C0942F2 jsr @Rn */
L_0C0942F6: BLKS(0x0C0942F6u);
	IF(0x0C0942F6u); T = (s32)r0 >= 0;  /* 0C0942F6 cmp/pz Rn */
	if (T) { UPD(0x0C0942FEu, 4); goto L_0C0942FE; }  /* 0C0942F8 bt */
L_0C0942FA: BLKS(0x0C0942FAu);
	{ IF(0x0C0942FCu); ; /* slot nop */ UPD(0x0C093B80u, 3); goto L_0C093B80; }  /* 0C0942FA bra */
L_0C0942FE: BLKS(0x0C0942FEu);
	r8 = 0xB4u; UPD(0x0C094300u, 1);  /* 0C0942FE mov.w @(disp,pc),Rn */
	IF(0x0C094300u); MACL = r11 * r8;  /* 0C094300 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C094304u, 3);  /* 0C094302 mov.l @(disp,pc),Rn */
	IF(0x0C094304u); r10 = MACL;  /* 0C094304 sts macl,Rn */
	r10 += r2;  /* 0C094306 add Rm,Rn */
	r5 = R32(r10); UPD(0x0C09430Au, 3);  /* 0C094308 mov.l @Rm,Rn */
	IF(0x0C09430Au); MACL = r0 * r8;  /* 0C09430A mul.l Rm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C09430Eu, 3);  /* 0C09430C mov.w @(disp,pc),Rn */
	r5 &= r6;  /* 0C09430E and Rm,Rn */
	W32(r10, r5); UPD(0x0C094312u, 2);  /* 0C094310 mov.l Rm,@Rn */
	IF(0x0C094312u); r0 = MACL;  /* 0C094312 sts macl,Rn */
	r0 += r2;  /* 0C094314 add Rm,Rn */
	r7 = R32(r0); UPD(0x0C094318u, 3);  /* 0C094316 mov.l @Rm,Rn */
	r8 += 0x4Cu;  /* 0C094318 add #imm,Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C09431Cu, 2);  /* 0C09431A mov.l @(disp,Rm),Rn */
	r7 &= r8;  /* 0C09431C and Rm,Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C094320u, 2);  /* 0C09431E mov.l @(disp,Rm),Rn */
	r5 |= r7;  /* 0C094320 or Rm,Rn */
	r3 = 0xA8u; UPD(0x0C094324u, 2);  /* 0C094322 mov.w @(disp,pc),Rn */
	r8 = r10;  /* 0C094324 mov Rm,Rn */
	r0 += r3;  /* 0C094326 add Rm,Rn */
	r0 += 0x1u;  /* 0C094328 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C09432Cu, 4);  /* 0C09432A mov.b @Rm,Rn */
	r8 += r3;  /* 0C09432C add Rm,Rn */
	r13 = R32(r10 + 0x2Cu); UPD(0x0C094330u, 2);  /* 0C09432E mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C094330 add #imm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C094334u, 2);  /* 0C094332 mov.l @(disp,Rm),Rn */
	r9 += r13;  /* 0C094334 add Rm,Rn */
	W32(r10, r5); UPD(0x0C094338u, 2);  /* 0C094336 mov.l Rm,@Rn */
	r12 += r1;  /* 0C094338 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C09433Cu, 2);  /* 0C09433A mov.l @(disp,Rm),Rn */
	W8(r8, r4); UPD(0x0C09433Eu, 1);  /* 0C09433C mov.b Rm,@Rn */
	IF(0x0C09433Eu); r0 <<= 2;  /* 0C09433E shll2 Rn */
	r5 = 0xC1B8DB4u; UPD(0x0C094342u, 2);  /* 0C094340 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C094342 mov Rm,Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C094346u, 2);  /* 0C094344 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r12); UPD(0x0C094348u, 1);  /* 0C094346 mov.l Rm,@(disp,Rn) */
	r7 = 0xC0A8B10u; UPD(0x0C09434Au, 1);  /* 0C094348 mov.l @(disp,pc),Rn */
	IF(0x0C09434Au); r6 = R32(r0 + r5); UPD(0x0C09434Cu, 1);  /* 0C09434A mov.l @(r0,Rm),Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C09434Eu, 1);  /* 0C09434C mov.l @(disp,pc),Rn */
	IF(0x0C09434Eu); { u32 t_ = r7; PR = 0x0C094352u; W32(r10 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C094352u); }  /* 0C09434E jsr @Rn */
L_0C094352: BLKS(0x0C094352u);
	r4 = r11;  /* 0C094352 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C094354 mov #imm,Rn */
	IF(0x0C094356u); { u32 t_ = r13; PR = 0x0C09435Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09435Au); }  /* 0C094356 jsr @Rn */
L_0C09435A: BLKS(0x0C09435Au);
	T = (r0 & r0) == 0;  /* 0C09435A tst Rm,Rn */
	if (T) { UPD(0x0C0942D2u, 4); goto L_0C0942D2; }  /* 0C09435C bt */
L_0C09435E: BLKS(0x0C09435Eu);
	r4 = R32(r10 + 0xCu); UPD(0x0C094360u, 1);  /* 0C09435E mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C094360 mov #imm,Rn */
	IF(0x0C094362u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C094362 shld Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C094366u, 3);  /* 0C094364 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C094366 exts.w Rm,Rn */
	r11 = 0x180000u; UPD(0x0C09436Au, 2);  /* 0C094368 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09436A mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C09436Eu, 2);  /* 0C09436C mov.l @(disp,pc),Rn */
	IF(0x0C09436Eu); { u32 t_ = r13; PR = 0x0C094372u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C094372u); }  /* 0C09436E jsr @Rn */
L_0C094372: BLKS(0x0C094372u);
	r13 = R32(r10 + 0x24u); UPD(0x0C094374u, 1);  /* 0C094372 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C094374 mov Rm,Rn */
	r13 += r0;  /* 0C094376 add Rm,Rn */
	IF(0x0C094378u); { u32 t_ = r9; PR = 0x0C09437Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09437Cu); }  /* 0C094378 jsr @Rn */
L_0C09437C: BLKS(0x0C09437Cu);
	r6 = R32(r10 + 0x28u); UPD(0x0C09437Eu, 1);  /* 0C09437C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09437E add #imm,Rn */
	r11 = 0x40000u; UPD(0x0C094382u, 2);  /* 0C094380 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C094382 add Rm,Rn */
	r10 = 0xC189D40u; UPD(0x0C094386u, 2);  /* 0C094384 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C094386 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C09438Au, 2);  /* 0C094388 mov.l Rm,@Rn */
	r5 = r13;  /* 0C09438A mov Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C09438Eu, 2);  /* 0C09438C mov.l Rm,@(disp,Rn) */
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C093DCEu, 3); goto L_0C093DCE; }  /* 0C09438E bra */
L_0C0943D0: BLKS(0x0C0943D0u);
	r12 = 0xC0A8CA0u; UPD(0x0C0943D2u, 1);  /* 0C0943D0 mov.l @(disp,pc),Rn */
	IF(0x0C0943D2u); { u32 t_ = r12; PR = 0x0C0943D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0943D6u); }  /* 0C0943D2 jsr @Rn */
L_0C0943D6: BLKS(0x0C0943D6u);
	IF(0x0C0943D6u); T = (s32)r0 >= 0;  /* 0C0943D6 cmp/pz Rn */
	if (T) { UPD(0x0C0943DEu, 4); goto L_0C0943DE; }  /* 0C0943D8 bt */
L_0C0943DA: BLKS(0x0C0943DAu);
	{ IF(0x0C0943DCu); ; /* slot nop */ UPD(0x0C093B80u, 3); goto L_0C093B80; }  /* 0C0943DA bra */
L_0C0943DE: BLKS(0x0C0943DEu);
	r9 = 0xB4u; UPD(0x0C0943E0u, 1);  /* 0C0943DE mov.w @(disp,pc),Rn */
	IF(0x0C0943E0u); MACL = r11 * r9;  /* 0C0943E0 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0943E4u, 3);  /* 0C0943E2 mov.l @(disp,pc),Rn */
	IF(0x0C0943E4u); r8 = MACL;  /* 0C0943E4 sts macl,Rn */
	r8 += r13;  /* 0C0943E6 add Rm,Rn */
	IF(0x0C0943E8u); MACL = r0 * r9;  /* 0C0943E8 mul.l Rm,Rn */
	r5 = R32(r8); UPD(0x0C0943ECu, 5);  /* 0C0943EA mov.l @Rm,Rn */
	r6 = 0xFFFFFEFFu; UPD(0x0C0943EEu, 1);  /* 0C0943EC mov.w @(disp,pc),Rn */
	IF(0x0C0943EEu); r4 = MACL;  /* 0C0943EE sts macl,Rn */
	r5 &= r6;  /* 0C0943F0 and Rm,Rn */
	W32(r8, r5); UPD(0x0C0943F4u, 3);  /* 0C0943F2 mov.l Rm,@Rn */
	r4 += r13;  /* 0C0943F4 add Rm,Rn */
	r3 = 0xA8u; UPD(0x0C0943F8u, 2);  /* 0C0943F6 mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C0943F8 add #imm,Rn */
	r7 = R32(r4); UPD(0x0C0943FCu, 2);  /* 0C0943FA mov.l @Rm,Rn */
	r6 = r8;  /* 0C0943FC mov Rm,Rn */
	r10 = R32(r4 + 0x24u); UPD(0x0C094400u, 2);  /* 0C0943FE mov.l @(disp,Rm),Rn */
	r7 &= r9;  /* 0C094400 and Rm,Rn */
	r12 = R32(r4 + 0x28u); UPD(0x0C094404u, 2);  /* 0C094402 mov.l @(disp,Rm),Rn */
	r5 |= r7;  /* 0C094404 or Rm,Rn */
	r4 += r3;  /* 0C094406 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09440Au, 3);  /* 0C094408 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09440A add #imm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C09440Eu, 2);  /* 0C09440C mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C09440E add Rm,Rn */
	r13 = 0xC069BF0u; UPD(0x0C094412u, 2);  /* 0C094410 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C094412 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C094416u, 2);  /* 0C094414 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C094416 add #imm,Rn */
	r9 = 0xC068F00u; UPD(0x0C09441Au, 2);  /* 0C094418 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C09441A add Rm,Rn */
	W32(r8, r5); UPD(0x0C09441Eu, 2);  /* 0C09441C mov.l Rm,@Rn */
	r4 = r11;  /* 0C09441E mov Rm,Rn */
	W8(r6, r2); UPD(0x0C094422u, 2);  /* 0C094420 mov.b Rm,@Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C094424u, 1);  /* 0C094422 mov.l Rm,@(disp,Rn) */
	IF(0x0C094424u); { u32 t_ = r13; PR = 0x0C094428u; W32(r8 + 0x28u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C094428u); }  /* 0C094424 jsr @Rn */
L_0C094428: BLKS(0x0C094428u);
	r4 = r11;  /* 0C094428 mov Rm,Rn */
	IF(0x0C09442Au); { u32 t_ = r9; PR = 0x0C09442Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09442Eu); }  /* 0C09442A jsr @Rn */
L_0C09442E: BLKS(0x0C09442Eu);
	r0 = R32(r8 + 0x8u); UPD(0x0C094430u, 1);  /* 0C09442E mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C094430 mov Rm,Rn */
	r7 = 0xC1B8DB4u; UPD(0x0C094434u, 2);  /* 0C094432 mov.l @(disp,pc),Rn */
	IF(0x0C094434u); r0 <<= 2;  /* 0C094434 shll2 Rn */
	IF(0x0C094436u); r5 = R32(r0 + r7); UPD(0x0C094438u, 2);  /* 0C094436 mov.l @(r0,Rm),Rn */
	r0 = 0x86u; UPD(0x0C09443Au, 1);  /* 0C094438 mov.w @(disp,pc),Rn */
	IF(0x0C09443Au); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09443Cu, 1);  /* 0C09443A mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C09443C add #imm,Rn */
	IF(0x0C09443Eu); r0 >>= 2;  /* 0C09443E shlr2 Rn */
	IF(0x0C094440u); r0 >>= 2;  /* 0C094440 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C094442 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C094446u, 5);  /* 0C094444 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8B10u; UPD(0x0C094448u, 1);  /* 0C094446 mov.l @(disp,pc),Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C09444Au, 1);  /* 0C094448 mov.l @(disp,pc),Rn */
	IF(0x0C09444Au); { u32 t_ = r0; PR = 0x0C09444Eu; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09444Eu); }  /* 0C09444A jsr @Rn */
L_0C09444E: BLKS(0x0C09444Eu);
	r4 = r11;  /* 0C09444E mov Rm,Rn */
	r5 = 0xAu;  /* 0C094450 mov #imm,Rn */
	IF(0x0C094452u); { u32 t_ = r10; PR = 0x0C094456u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C094456u); }  /* 0C094452 jsr @Rn */
L_0C094456: BLKS(0x0C094456u);
	T = (r0 & r0) == 0;  /* 0C094456 tst Rm,Rn */
	if (T) { UPD(0x0C0944BEu, 4); goto L_0C0944BE; }  /* 0C094458 bt */
L_0C09445A: BLKS(0x0C09445Au);
	r4 = R32(r8 + 0xCu); UPD(0x0C09445Cu, 1);  /* 0C09445A mov.l @(disp,Rm),Rn */
	r11 = 0x4u;  /* 0C09445C mov #imm,Rn */
	IF(0x0C09445Eu); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09445E shld Rm,Rn */
	r12 = 0x0u;  /* 0C094460 mov #imm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C094462 exts.w Rm,Rn */
	r13 = r8;  /* 0C094464 mov Rm,Rn */
	IF(0x0C094466u); ;  /* 0C094466 nop */
	UPD(0x0C094468u, 6);
L_0C094468: BLKS(0x0C094468u);
	r10 = 0xC069B20u; UPD(0x0C09446Au, 1);  /* 0C094468 mov.l @(disp,pc),Rn */
	r5 = 0x200000u; UPD(0x0C09446Cu, 1);  /* 0C09446A mov.l @(disp,pc),Rn */
	IF(0x0C09446Cu); { u32 t_ = r10; PR = 0x0C094470u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C094470u); }  /* 0C09446C jsr @Rn */
L_0C094470: BLKS(0x0C094470u);
	r9 = r12;  /* 0C094470 mov Rm,Rn */
	r4 = 0xC1B8DE4u; UPD(0x0C094474u, 2);  /* 0C094472 mov.l @(disp,pc),Rn */
	IF(0x0C094474u); r9 <<= 2;  /* 0C094474 shll2 Rn */
	r6 = 0xC069AF0u; UPD(0x0C094478u, 2);  /* 0C094476 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C094478 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C09447Cu, 2);  /* 0C09447A mov.l @Rm,Rn */
	r10 = r0;  /* 0C09447C mov Rm,Rn */
	IF(0x0C09447Eu); { u32 t_ = r6; PR = 0x0C094482u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C094482u); }  /* 0C09447E jsr @Rn */
L_0C094482: BLKS(0x0C094482u);
	r5 = R32(r13 + 0x24u); UPD(0x0C094484u, 1);  /* 0C094482 mov.l @(disp,Rm),Rn */
	r10 -= r0;  /* 0C094484 sub Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C094488u, 2);  /* 0C094486 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C094488 add Rm,Rn */
	r5 = 0x200000u; UPD(0x0C09448Cu, 2);  /* 0C09448A mov.l @(disp,pc),Rn */
	IF(0x0C09448Cu); { u32 t_ = r7; PR = 0x0C094490u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C094490u); }  /* 0C09448C jsr @Rn */
L_0C094490: BLKS(0x0C094490u);
	r1 = 0xC069B20u; UPD(0x0C094492u, 1);  /* 0C094490 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C094492 mov Rm,Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C094496u, 2);  /* 0C094494 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C094498u, 1);  /* 0C094496 mov.l @Rm,Rn */
	IF(0x0C094498u); { u32 t_ = r1; PR = 0x0C09449Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09449Cu); }  /* 0C094498 jsr @Rn */
L_0C09449C: BLKS(0x0C09449Cu);
	r8 += r0;  /* 0C09449C add Rm,Rn */
	r3 = 0xC0BB1A0u; UPD(0x0C0944A0u, 2);  /* 0C09449E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0944A0 add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C0944A4u, 2);  /* 0C0944A2 mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C0944A4 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C0944A8u, 2);  /* 0C0944A6 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0944A8 mov #imm,Rn */
	r5 = r10;  /* 0C0944AA mov Rm,Rn */
	IF(0x0C0944ACu); { u32 t_ = r3; PR = 0x0C0944B0u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0944B0u); }  /* 0C0944AC jsr @Rn */
L_0C0944B0: BLKS(0x0C0944B0u);
	r2 = r12;  /* 0C0944B0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0944B2 add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C0944B4 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C0944B6 mov #imm,Rn */
	T = (s32)r12 > (s32)r8;  /* 0C0944B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094468u, 8); goto L_0C094468; } UPD(0x0C0944BEu, 1); goto L_0C0944BE; }  /* 0C0944BA bf/s */
L_0C0944BE: BLKS(0x0C0944BEu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0935EAu, 3); goto L_0C0935EA; }  /* 0C0944BE bra */
}


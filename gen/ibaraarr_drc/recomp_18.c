#include "recomp.h"
#include "recomp_funcs.h"

void f_0C092B20(sh3_t *c)
{
	LOCALS;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
}

void f_0C092B40(sh3_t *c)
{
	LOCALS;
	goto L_0C092B40;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092B40: BLKS(0x0C092B40u);
	r11 = 0xB4u; UPD(0x0C092B42u, 1);  /* 0C092B40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092B42 add #imm,Rn */
	IF(0x0C092B44u); MACL = r10 * r11;  /* 0C092B44 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092B48u, 4);  /* 0C092B46 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C092B48 mov #imm,Rn */
	IF(0x0C092B4Au); r8 = MACL;  /* 0C092B4A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C092B4Eu, 3);  /* 0C092B4C mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C092B4E add Rm,Rn */
	IF(0x0C092B50u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092B52u, 2);  /* 0C092B50 mov.b @(r0,Rm),Rn */
	r3 = r8;  /* 0C092B52 mov Rm,Rn */
	r9 = r4 & 0xFF;  /* 0C092B54 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092B58u, 3);  /* 0C092B56 mov.l Rm,@Rn */
	r9 = 0xA8u; UPD(0x0C092B5Au, 1);  /* 0C092B58 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C092B5A add Rm,Rn */
	r3 += 0x1u;  /* 0C092B5C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C092B60u, 3);  /* 0C092B5E mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C092B60 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C092B64u, 2);  /* 0C092B62 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C092B66u, 1);  /* 0C092B64 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C092B68u, 1);  /* 0C092B66 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092B6Au, 1);  /* 0C092B68 mov.l @(disp,Rm),Rn */
	IF(0x0C092B6Au); { u32 t_ = r0; PR = 0x0C092B6Eu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092B6Eu); }  /* 0C092B6A jsr @Rn */
L_0C092B6E: BLKS(0x0C092B6Eu);
	r4 = r10;  /* 0C092B6E mov Rm,Rn */
	r6 = R32(r8); UPD(0x0C092B72u, 2);  /* 0C092B70 mov.l @Rm,Rn */
	r5 = 0x0u;  /* 0C092B72 mov #imm,Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C092B76u, 2);  /* 0C092B74 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C092B76 add #imm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C092B7Au, 2);  /* 0C092B78 mov.l @(disp,pc),Rn */
	r6 &= r7;  /* 0C092B7A and Rm,Rn */
	r0 = 0x9Cu; UPD(0x0C092B7Eu, 2);  /* 0C092B7C mov.w @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C092B80u, 1);  /* 0C092B7E mov.l Rm,@Rn */
	IF(0x0C092B80u); { u32 t_ = r10; PR = 0x0C092B84u; IF(0x0C092B82u); W8(r0 + r8, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092B84u); }  /* 0C092B80 jsr @Rn */
L_0C092B84: BLKS(0x0C092B84u);
	IF(0x0C092B84u); T = (s32)r0 >= 0;  /* 0C092B84 cmp/pz Rn */
	if (!T) { UPD(0x0C092B2Cu, 4); goto L_0C092B2C; }  /* 0C092B86 bf */
L_0C092B88: BLKS(0x0C092B88u);
	r8 += 0x7Eu;  /* 0C092B88 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C092B8Cu, 2);  /* 0C092B8A mov.w @Rm,Rn */
	IF(0x0C092B8Cu); MACL = r1 * r11;  /* 0C092B8C mul.l Rm,Rn */
	r8 = 0x1u;  /* 0C092B8E mov #imm,Rn */
	IF(0x0C092B90u); r0 = MACL;  /* 0C092B90 sts macl,Rn */
	r0 += r12;  /* 0C092B92 add Rm,Rn */
	{ IF(0x0C092B96u); W8(r0 + r9, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C092B2Cu, 8); goto L_0C092B2C; }  /* 0C092B94 bra */
}

void f_0C092BA0(sh3_t *c)
{
	LOCALS;
	goto L_0C092BA0;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BA0: BLKS(0x0C092BA0u);
	r7 = 0xB4u; UPD(0x0C092BA2u, 1);  /* 0C092BA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092BA2 add #imm,Rn */
	IF(0x0C092BA4u); MACL = r10 * r7;  /* 0C092BA4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C092BA8u, 4);  /* 0C092BA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C092BAAu, 1);  /* 0C092BA8 mov.w @(disp,pc),Rn */
	IF(0x0C092BAAu); r8 = MACL;  /* 0C092BAA sts macl,Rn */
	r8 += r6;  /* 0C092BAC add Rm,Rn */
	IF(0x0C092BAEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092BB0u, 3);  /* 0C092BAE mov.b @(r0,Rm),Rn */
	r10 = r5 & 0xFF;  /* 0C092BB0 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C092BB4u, 2);  /* 0C092BB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092BB4 add #imm,Rn */
	IF(0x0C092BB6u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092BB8u, 2);  /* 0C092BB6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C092BB8 mov #imm,Rn */
	r11 = r12 & 0xFF;  /* 0C092BBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C092BBEu, 3);  /* 0C092BBC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C092BC0u, 1);  /* 0C092BBE mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092BC2u, 1);  /* 0C092BC0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C092BC4u, 1);  /* 0C092BC2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C092BC6u, 1);  /* 0C092BC4 mov.l @(disp,pc),Rn */
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
}

void f_0C092BFA(sh3_t *c)
{
	LOCALS;
	goto L_0C092BFA;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092BFA: BLKS(0x0C092BFAu);
	r8 = 0xB4u; UPD(0x0C092BFCu, 1);  /* 0C092BFA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092BFC add #imm,Rn */
	IF(0x0C092BFEu); MACL = r10 * r8;  /* 0C092BFE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092C02u, 4);  /* 0C092C00 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C092C02 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C092C06u, 2);  /* 0C092C04 mov.w @(disp,pc),Rn */
	IF(0x0C092C06u); r8 = MACL;  /* 0C092C06 sts macl,Rn */
	r8 += r12;  /* 0C092C08 add Rm,Rn */
	IF(0x0C092C0Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C0Cu, 3);  /* 0C092C0A mov.b @(r0,Rm),Rn */
	r9 = r6 & 0xFF;  /* 0C092C0C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092C10u, 2);  /* 0C092C0E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092C10 add #imm,Rn */
	IF(0x0C092C12u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C14u, 2);  /* 0C092C12 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C092C14 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C092C18u, 2);  /* 0C092C16 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C092C1Au, 1);  /* 0C092C18 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C092C1Eu, 1);  /* 0C092C1C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C092C1E bra */
}

void f_0C092C30(sh3_t *c)
{
	LOCALS;
	goto L_0C092C30;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092C1A: BLKS(0x0C092C1Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C092C1Eu, 1);  /* 0C092C1C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C092C1E bra */
L_0C092C30: BLKS(0x0C092C30u);
	r4 = 0xB4u; UPD(0x0C092C32u, 1);  /* 0C092C30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092C32 add #imm,Rn */
	IF(0x0C092C34u); MACL = r10 * r4;  /* 0C092C34 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C092C38u, 4);  /* 0C092C36 mov.l @(disp,pc),Rn */
	IF(0x0C092C38u); r8 = MACL;  /* 0C092C38 sts macl,Rn */
	r8 += r0;  /* 0C092C3A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092C3Eu, 3);  /* 0C092C3C mov.w @(disp,pc),Rn */
	IF(0x0C092C3Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C40u, 1);  /* 0C092C3E mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C092C40 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C092C44u, 2);  /* 0C092C42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092C44 add #imm,Rn */
	IF(0x0C092C46u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C48u, 2);  /* 0C092C46 mov.b @(r0,Rm),Rn */
	r1 = r2 & 0xFF;  /* 0C092C48 extu.b Rm,Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C092C4Cu, 2);  /* 0C092C4A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C092C4C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C092C1Au, 4); goto L_0C092C1A; }  /* 0C092C4E bra */
}

void f_0C092C60(sh3_t *c)
{
	LOCALS;
	goto L_0C092C60;
L_0C092B04: BLKS(0x0C092B04u);
	r6 = 0xC0A17E0u; UPD(0x0C092B06u, 1);  /* 0C092B04 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C092B06 mov Rm,Rn */
	IF(0x0C092B08u); PR = R32(r15); r15 += 4; UPD(0x0C092B0Au, 2);  /* 0C092B08 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B0Cu, 1);  /* 0C092B0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B0Eu, 1);  /* 0C092B0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B10u, 1);  /* 0C092B0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B12u, 1);  /* 0C092B10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B14u, 1);  /* 0C092B12 mov.l @Rm+,Rn */
	IF(0x0C092B14u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C092B14 jmp @Rn */
L_0C092C60: BLKS(0x0C092C60u);
	r9 = 0xC0A0490u; UPD(0x0C092C62u, 1);  /* 0C092C60 mov.l @(disp,pc),Rn */
	IF(0x0C092C62u); { u32 t_ = r9; PR = 0x0C092C66u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C092C66u); }  /* 0C092C62 jsr @Rn */
L_0C092C66: BLKS(0x0C092C66u);
	IF(0x0C092C66u); T = (s32)r0 >= 0;  /* 0C092C66 cmp/pz Rn */
	if (!T) { UPD(0x0C092C94u, 4); goto L_0C092C94; }  /* 0C092C68 bf */
L_0C092C6A: BLKS(0x0C092C6Au);
	r15 += 0xFFFFFFF8u;  /* 0C092C6A add #imm,Rn */
	r0 = 0xB4u; UPD(0x0C092C6Eu, 2);  /* 0C092C6C mov.w @(disp,pc),Rn */
	IF(0x0C092C6Eu); MACL = r10 * r0;  /* 0C092C6E mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092C72u, 3);  /* 0C092C70 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C092C72 mov #imm,Rn */
	IF(0x0C092C74u); r0 = MACL;  /* 0C092C74 sts macl,Rn */
	r4 = 0xA9u; UPD(0x0C092C78u, 3);  /* 0C092C76 mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C092C78 add Rm,Rn */
	IF(0x0C092C7Au); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C092C7Cu, 2);  /* 0C092C7A mov.b @(r0,Rm),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C092C7Eu, 1);  /* 0C092C7C mov.l @(disp,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C092C7E extu.b Rm,Rn */
	r2 = 0x20000u; UPD(0x0C092C82u, 2);  /* 0C092C80 mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C092C82 mov #imm,Rn */
	r8 = 0xC7C27B0u; UPD(0x0C092C86u, 2);  /* 0C092C84 mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C092C88u, 1);  /* 0C092C86 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C092C8Au, 1);  /* 0C092C88 mov.l Rm,@(disp,Rn) */
	r11 = 0x100000u; UPD(0x0C092C8Cu, 1);  /* 0C092C8A mov.l @(disp,pc),Rn */
	r6 = R32(r0 + 0x28u); UPD(0x0C092C8Eu, 1);  /* 0C092C8C mov.l @(disp,Rm),Rn */
	IF(0x0C092C8Eu); { u32 t_ = r8; PR = 0x0C092C92u; r5 += r11; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C092C92u); }  /* 0C092C8E jsr @Rn */
L_0C092C92: BLKS(0x0C092C92u);
	r15 += 0x8u;  /* 0C092C92 add #imm,Rn */
	UPD(0x0C092C94u, 1);
L_0C092C94: BLKS(0x0C092C94u);
	r8 = 0xB4u; UPD(0x0C092C96u, 1);  /* 0C092C94 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C092C96 mov Rm,Rn */
	IF(0x0C092C98u); MACL = r10 * r8;  /* 0C092C98 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C092C9Cu, 4);  /* 0C092C9A mov.l @(disp,pc),Rn */
	IF(0x0C092C9Cu); r9 = MACL;  /* 0C092C9C sts macl,Rn */
	r5 += r9;  /* 0C092C9E add Rm,Rn */
	r7 = R32(r5 + 0x8u); UPD(0x0C092CA2u, 3);  /* 0C092CA0 mov.l @(disp,Rm),Rn */
	r0 = 0xC1C8190u; UPD(0x0C092CA4u, 1);  /* 0C092CA2 mov.l @(disp,pc),Rn */
	IF(0x0C092CA4u); r7 <<= 2;  /* 0C092CA4 shll2 Rn */
	{ IF(0x0C092CA8u); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C092B04u, 4); goto L_0C092B04; }  /* 0C092CA6 bra */
}

void f_0C092CB0(sh3_t *c)
{
	LOCALS;
	goto L_0C092CB0;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092BFA: BLKS(0x0C092BFAu);
	r8 = 0xB4u; UPD(0x0C092BFCu, 1);  /* 0C092BFA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092BFC add #imm,Rn */
	IF(0x0C092BFEu); MACL = r10 * r8;  /* 0C092BFE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092C02u, 4);  /* 0C092C00 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C092C02 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C092C06u, 2);  /* 0C092C04 mov.w @(disp,pc),Rn */
	IF(0x0C092C06u); r8 = MACL;  /* 0C092C06 sts macl,Rn */
	r8 += r12;  /* 0C092C08 add Rm,Rn */
	IF(0x0C092C0Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C0Cu, 3);  /* 0C092C0A mov.b @(r0,Rm),Rn */
	r9 = r6 & 0xFF;  /* 0C092C0C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092C10u, 2);  /* 0C092C0E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092C10 add #imm,Rn */
	IF(0x0C092C12u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092C14u, 2);  /* 0C092C12 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C092C14 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C092C18u, 2);  /* 0C092C16 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C092C1Au, 1);  /* 0C092C18 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C092C1Eu, 1);  /* 0C092C1C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C092C1E bra */
L_0C092CB0: BLKS(0x0C092CB0u);
	r11 = 0xC0A0540u; UPD(0x0C092CB2u, 1);  /* 0C092CB0 mov.l @(disp,pc),Rn */
	IF(0x0C092CB2u); { u32 t_ = r11; PR = 0x0C092CB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092CB6u); }  /* 0C092CB2 jsr @Rn */
L_0C092CB6: BLKS(0x0C092CB6u);
	IF(0x0C092CB6u); T = (s32)r0 >= 0;  /* 0C092CB6 cmp/pz Rn */
	{ u32 c_ = !T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092BFAu, 4); goto L_0C092BFA; } goto L_0C092CBC; }  /* 0C092CB8 bf/s */
L_0C092CBC: BLKS(0x0C092CBCu);
	r0 = 0xB4u; UPD(0x0C092CBEu, 2);  /* 0C092CBC mov.w @(disp,pc),Rn */
	IF(0x0C092CBEu); MACL = r6 * r0;  /* 0C092CBE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092CC2u, 3);  /* 0C092CC0 mov.l @(disp,pc),Rn */
	IF(0x0C092CC2u); r3 = MACL;  /* 0C092CC2 sts macl,Rn */
	r4 = 0xA5u; UPD(0x0C092CC6u, 2);  /* 0C092CC4 mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C092CC6 add Rm,Rn */
	r3 += r4;  /* 0C092CC8 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C092CCCu, 3);  /* 0C092CCA mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C092CCC add #imm,Rn */
	{ W8(r3, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C092BFAu, 4); goto L_0C092BFA; }  /* 0C092CCE bra */
}

void f_0C092D10(sh3_t *c)
{
	LOCALS;
	goto L_0C092D10;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092D10: BLKS(0x0C092D10u);
	r9 = 0xB4u; UPD(0x0C092D12u, 1);  /* 0C092D10 mov.w @(disp,pc),Rn */
	IF(0x0C092D12u); MACL = r10 * r9;  /* 0C092D12 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C092D16u, 3);  /* 0C092D14 mov.l @(disp,pc),Rn */
	IF(0x0C092D16u); r0 = MACL;  /* 0C092D16 sts macl,Rn */
	r0 += r5;  /* 0C092D18 add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C092D1Cu, 3);  /* 0C092D1A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C092D1Eu, 1);  /* 0C092D1C mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C092D1E tst Rm,Rn */
	if (T) { UPD(0x0C092D56u, 4); goto L_0C092D56; }  /* 0C092D20 bt */
L_0C092D22: BLKS(0x0C092D22u);
	r9 = r0;  /* 0C092D22 mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C092D26u, 2);  /* 0C092D24 mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C092D26 add Rm,Rn */
	UPD(0x0C092D28u, 1);
L_0C092D28: BLKS(0x0C092D28u);
	r8 += 0x4u;  /* 0C092D28 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C092D2Cu, 2);  /* 0C092D2A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092D2C add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C092D30u, 2);  /* 0C092D2E mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C092D30 add Rm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C092D34u, 2);  /* 0C092D32 mov.l @Rm+,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C092D36u, 1);  /* 0C092D34 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C092D36 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092D3Au, 2);  /* 0C092D38 mov.w @(disp,pc),Rn */
	IF(0x0C092D3Au); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C092D3Cu, 1);  /* 0C092D3A mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C092D3C extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C092D40u, 2);  /* 0C092D3E mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C092D40 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C092D44u, 2);  /* 0C092D42 mov.b @Rm,Rn */
	r12 = 0xC0AB240u; UPD(0x0C092D46u, 1);  /* 0C092D44 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C092D46 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C092D4Au, 2);  /* 0C092D48 mov.l Rm,@(disp,Rn) */
	IF(0x0C092D4Au); { u32 t_ = r12; PR = 0x0C092D4Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092D4Eu); }  /* 0C092D4A jsr @Rn */
L_0C092D4E: BLKS(0x0C092D4Eu);
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C092D50u, 1);  /* 0C092D4E mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C092D50 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C092D28u, 4); goto L_0C092D28; } UPD(0x0C092D56u, 1); goto L_0C092D56; }  /* 0C092D52 bf/s */
L_0C092D56: BLKS(0x0C092D56u);
	{ IF(0x0C092D58u); ; /* slot nop */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092D56 bra */
}

void f_0C092D60(sh3_t *c)
{
	LOCALS;
	goto L_0C092D60;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092D60: BLKS(0x0C092D60u);
	r8 = 0xB4u; UPD(0x0C092D62u, 1);  /* 0C092D60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092D62 add #imm,Rn */
	IF(0x0C092D64u); MACL = r10 * r8;  /* 0C092D64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C092D68u, 4);  /* 0C092D66 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C092D68 mov #imm,Rn */
	IF(0x0C092D6Au); r8 = MACL;  /* 0C092D6A sts macl,Rn */
	r8 += r0;  /* 0C092D6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092D70u, 4);  /* 0C092D6E mov.w @(disp,pc),Rn */
	IF(0x0C092D70u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092D72u, 1);  /* 0C092D70 mov.b @(r0,Rm),Rn */
	r6 = r12 & 0xFF;  /* 0C092D72 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C092D76u, 2);  /* 0C092D74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092D76 add #imm,Rn */
	IF(0x0C092D78u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092D7Au, 2);  /* 0C092D78 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C092D7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C092D7Eu, 2);  /* 0C092D7C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AD970u; UPD(0x0C092D80u, 1);  /* 0C092D7E mov.l @(disp,pc),Rn */
	r11 = 0xC0A0540u; UPD(0x0C092D82u, 1);  /* 0C092D80 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C092D84u, 1);  /* 0C092D82 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092D86u, 1);  /* 0C092D84 mov.l @(disp,Rm),Rn */
	IF(0x0C092D86u); { u32 t_ = r9; PR = 0x0C092D8Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C092D8Au); }  /* 0C092D86 jsr @Rn */
L_0C092D8A: BLKS(0x0C092D8Au);
	r4 = r10;  /* 0C092D8A mov Rm,Rn */
	IF(0x0C092D8Cu); { u32 t_ = r11; PR = 0x0C092D90u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C092D90u); }  /* 0C092D8C jsr @Rn */
L_0C092D90: BLKS(0x0C092D90u);
	IF(0x0C092D90u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C092D90 rotl Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C092D94u, 2);  /* 0C092D92 mov.l @(disp,Rm),Rn */
	IF(0x0C092D94u); r4 = T;  /* 0C092D94 movt Rn */
	T = (r2 & r2) == 0;  /* 0C092D96 tst Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C092D98 mov #imm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C092D9A negc Rm,Rn */
	r3 |= r4;  /* 0C092D9C or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C092D9E tst Rm,Rn */
	if (T) { UPD(0x0C092DB0u, 9); goto L_0C092DB0; }  /* 0C092DA0 bt */
L_0C092DA2: BLKS(0x0C092DA2u);
	r5 = 0x0u;  /* 0C092DA2 mov #imm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C092B2Cu, 4); goto L_0C092B2C; }  /* 0C092DA4 bra */
L_0C092DB0: BLKS(0x0C092DB0u);
	r2 += 0x1u;  /* 0C092DB0 add #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C092DB4u, 2);  /* 0C092DB2 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C092DB4 mov Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C092DB8u, 2);  /* 0C092DB6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C092DB8 mov Rm,Rn */
	IF(0x0C092DBAu); PR = R32(r15); r15 += 4; UPD(0x0C092DBCu, 2);  /* 0C092DBA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092DBEu, 1);  /* 0C092DBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092DC0u, 1);  /* 0C092DBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092DC2u, 1);  /* 0C092DC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092DC4u, 1);  /* 0C092DC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092DC6u, 1);  /* 0C092DC4 mov.l @Rm+,Rn */
	IF(0x0C092DC6u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A02D0u: TAIL(f_0C0A02D0); default: JUMPD(tv_); } }  /* 0C092DC6 jmp @Rn */
}

void f_0C092DD0(sh3_t *c)
{
	LOCALS;
	goto L_0C092DD0;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC4: BLKS(0x0C092BC4u);
	r0 = 0xC0AB240u; UPD(0x0C092BC6u, 1);  /* 0C092BC4 mov.l @(disp,pc),Rn */
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092DD0: BLKS(0x0C092DD0u);
	r12 = 0xB4u; UPD(0x0C092DD2u, 1);  /* 0C092DD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092DD2 add #imm,Rn */
	IF(0x0C092DD4u); MACL = r10 * r12;  /* 0C092DD4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C092DD8u, 4);  /* 0C092DD6 mov.l @(disp,pc),Rn */
	IF(0x0C092DD8u); r8 = MACL;  /* 0C092DD8 sts macl,Rn */
	IF(0x0C092DDAu); MACL = r6 * r12;  /* 0C092DDA mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092DDEu, 4);  /* 0C092DDC mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C092DDE add Rm,Rn */
	IF(0x0C092DE0u); r10 = MACL;  /* 0C092DE0 sts macl,Rn */
	r10 += r7;  /* 0C092DE2 add Rm,Rn */
	IF(0x0C092DE4u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C092DE6u, 4);  /* 0C092DE4 mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C092DE6 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092DEAu, 2);  /* 0C092DE8 mov.l Rm,@Rn */
	r0 = r10;  /* 0C092DEA mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C092DEEu, 2);  /* 0C092DEC mov.w @(disp,pc),Rn */
	IF(0x0C092DEEu); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C092DF0u, 1);  /* 0C092DEE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C092DF0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C092DF4u, 2);  /* 0C092DF2 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C092DF4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C092DF8u, 2);  /* 0C092DF6 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C092DFAu, 1);  /* 0C092DF8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC4u, 3); goto L_0C092BC4; }  /* 0C092DFA bra */
}

void f_0C092E00(sh3_t *c)
{
	LOCALS;
	goto L_0C092E00;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092C1A: BLKS(0x0C092C1Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C092C1Eu, 1);  /* 0C092C1C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C092C1E bra */
L_0C092C4A: BLKS(0x0C092C4Au);
	W32(r15 + 0x4u, r1); UPD(0x0C092C4Cu, 1);  /* 0C092C4A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C092C4C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C092C1Au, 4); goto L_0C092C1A; }  /* 0C092C4E bra */
L_0C092D56: BLKS(0x0C092D56u);
	{ IF(0x0C092D58u); ; /* slot nop */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092D56 bra */
L_0C092E00: BLKS(0x0C092E00u);
	r8 = 0xC0A0540u; UPD(0x0C092E02u, 1);  /* 0C092E00 mov.l @(disp,pc),Rn */
	IF(0x0C092E02u); { u32 t_ = r8; PR = 0x0C092E06u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092E06u); }  /* 0C092E02 jsr @Rn */
L_0C092E06: BLKS(0x0C092E06u);
	IF(0x0C092E06u); T = (s32)r0 >= 0;  /* 0C092E06 cmp/pz Rn */
	if (!T) { UPD(0x0C092D56u, 4); goto L_0C092D56; }  /* 0C092E08 bf */
L_0C092E0A: BLKS(0x0C092E0Au);
	r15 += 0xFFFFFFF8u;  /* 0C092E0A add #imm,Rn */
	r4 = 0xB4u; UPD(0x0C092E0Eu, 2);  /* 0C092E0C mov.w @(disp,pc),Rn */
	IF(0x0C092E0Eu); MACL = r10 * r4;  /* 0C092E0E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C092E12u, 3);  /* 0C092E10 mov.l @(disp,pc),Rn */
	IF(0x0C092E12u); r8 = MACL;  /* 0C092E12 sts macl,Rn */
	r8 += r0;  /* 0C092E14 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C092E18u, 3);  /* 0C092E16 mov.w @(disp,pc),Rn */
	IF(0x0C092E18u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092E1Au, 1);  /* 0C092E18 mov.b @(r0,Rm),Rn */
	r3 = r10 & 0xFF;  /* 0C092E1A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C092E1Eu, 2);  /* 0C092E1C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092E1E add #imm,Rn */
	IF(0x0C092E20u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092E22u, 2);  /* 0C092E20 mov.b @(r0,Rm),Rn */
	r1 = r6 & 0xFF;  /* 0C092E22 extu.b Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C092C4Au, 4); goto L_0C092C4A; }  /* 0C092E24 bra */
}

void f_0C092E30(sh3_t *c)
{
	LOCALS;
	goto L_0C092E30;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092DA2: BLKS(0x0C092DA2u);
	r5 = 0x0u;  /* 0C092DA2 mov #imm,Rn */
	UPD(0x0C092DA4u, 1);
L_0C092DA4: BLKS(0x0C092DA4u);
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092DA4 bra */
L_0C092E30: BLKS(0x0C092E30u);
	r11 = 0xB4u; UPD(0x0C092E32u, 1);  /* 0C092E30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092E32 add #imm,Rn */
	IF(0x0C092E34u); MACL = r10 * r11;  /* 0C092E34 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092E38u, 4);  /* 0C092E36 mov.l @(disp,pc),Rn */
	IF(0x0C092E38u); r8 = MACL;  /* 0C092E38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C092E3Cu, 2);  /* 0C092E3A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C092E3C add Rm,Rn */
	IF(0x0C092E3Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092E40u, 2);  /* 0C092E3E mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C092E40 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092E44u, 2);  /* 0C092E42 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C092E46u, 1);  /* 0C092E44 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C092E46 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C092E4Au, 2);  /* 0C092E48 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C092E4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C092E4Eu, 2);  /* 0C092E4C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C092E50u, 1);  /* 0C092E4E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C092E50 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C092E54u, 2);  /* 0C092E52 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092E56u, 1);  /* 0C092E54 mov.l @(disp,Rm),Rn */
	IF(0x0C092E56u); { u32 t_ = r0; PR = 0x0C092E5Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C092E5Au); }  /* 0C092E56 jsr @Rn */
L_0C092E5A: BLKS(0x0C092E5Au);
	r4 = r10;  /* 0C092E5A mov Rm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C092E5Eu, 2);  /* 0C092E5C mov.l @(disp,pc),Rn */
	IF(0x0C092E5Eu); { u32 t_ = r10; PR = 0x0C092E62u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092E62u); }  /* 0C092E5E jsr @Rn */
L_0C092E62: BLKS(0x0C092E62u);
	IF(0x0C092E62u); T = (s32)r0 >= 0;  /* 0C092E62 cmp/pz Rn */
	if (!T) { UPD(0x0C092DA2u, 4); goto L_0C092DA2; }  /* 0C092E64 bf */
L_0C092E66: BLKS(0x0C092E66u);
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C092E68u, 1);  /* 0C092E66 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092E68 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C092E6Cu, 2);  /* 0C092E6A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C092E6C mov #imm,Rn */
	W32(r15, r4); UPD(0x0C092E70u, 2);  /* 0C092E6E mov.l Rm,@Rn */
	r7 = r5 & 0xFF;  /* 0C092E70 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C092E74u, 2);  /* 0C092E72 mov.l Rm,@(disp,Rn) */
	r4 = 0xBu;  /* 0C092E74 mov #imm,Rn */
	r10 = 0xC7C27B0u; UPD(0x0C092E78u, 2);  /* 0C092E76 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C092E7Au, 1);  /* 0C092E78 mov.l @(disp,Rm),Rn */
	IF(0x0C092E7Au); { u32 t_ = r10; PR = 0x0C092E7Eu; r5 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C092E7Eu); }  /* 0C092E7A jsr @Rn */
L_0C092E7E: BLKS(0x0C092E7Eu);
	r8 += 0x7Eu;  /* 0C092E7E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C092E82u, 2);  /* 0C092E80 mov.w @Rm,Rn */
	IF(0x0C092E82u); MACL = r3 * r11;  /* 0C092E82 mul.l Rm,Rn */
	r6 = 0xA6u; UPD(0x0C092E86u, 3);  /* 0C092E84 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C092E86 add #imm,Rn */
	IF(0x0C092E88u); r11 = MACL;  /* 0C092E88 sts macl,Rn */
	r11 += r12;  /* 0C092E8A add Rm,Rn */
	r0 = 0xA1u; UPD(0x0C092E8Eu, 4);  /* 0C092E8C mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C092E8E add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C092E92u, 2);  /* 0C092E90 mov.b @Rm,Rn */
	IF(0x0C092E92u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092E94u, 1);  /* 0C092E92 mov.b @(r0,Rm),Rn */
	r12 |= r1;  /* 0C092E94 or Rm,Rn */
	W8(r11, r12); UPD(0x0C092E98u, 2);  /* 0C092E96 mov.b Rm,@Rn */
	r15 += 0x8u;  /* 0C092E98 add #imm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C092DA4u, 4); goto L_0C092DA4; }  /* 0C092E9A bra */
}

void f_0C092ED0(sh3_t *c)
{
	LOCALS;
	goto L_0C092ED0;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092DA4: BLKS(0x0C092DA4u);
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092DA4 bra */
L_0C092E9A: BLKS(0x0C092E9Au);
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C092DA4u, 3); goto L_0C092DA4; }  /* 0C092E9A bra */
L_0C092ED0: BLKS(0x0C092ED0u);
	r8 = 0xB4u; UPD(0x0C092ED2u, 1);  /* 0C092ED0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092ED2 add #imm,Rn */
	IF(0x0C092ED4u); MACL = r10 * r8;  /* 0C092ED4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C092ED8u, 4);  /* 0C092ED6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C092ED8 mov #imm,Rn */
	IF(0x0C092EDAu); r8 = MACL;  /* 0C092EDA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C092EDEu, 3);  /* 0C092EDC mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C092EDE add Rm,Rn */
	IF(0x0C092EE0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092EE2u, 2);  /* 0C092EE0 mov.b @(r0,Rm),Rn */
	r9 = r6 & 0xFF;  /* 0C092EE2 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C092EE6u, 2);  /* 0C092EE4 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C092EE8u, 1);  /* 0C092EE6 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C092EE8 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C092EECu, 2);  /* 0C092EEA mov.b @Rm,Rn */
	r2 = r7 & 0xFF;  /* 0C092EEC extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C092EF0u, 2);  /* 0C092EEE mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AD970u; UPD(0x0C092EF2u, 1);  /* 0C092EF0 mov.l @(disp,pc),Rn */
	r11 = 0xC0A0490u; UPD(0x0C092EF4u, 1);  /* 0C092EF2 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C092EF6u, 1);  /* 0C092EF4 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C092EF8u, 1);  /* 0C092EF6 mov.l @(disp,Rm),Rn */
	IF(0x0C092EF8u); { u32 t_ = r12; PR = 0x0C092EFCu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C092EFCu); }  /* 0C092EF8 jsr @Rn */
L_0C092EFC: BLKS(0x0C092EFCu);
	r15 += 0x8u;  /* 0C092EFC add #imm,Rn */
	IF(0x0C092EFEu); { u32 t_ = r11; PR = 0x0C092F02u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C092F02u); }  /* 0C092EFE jsr @Rn */
L_0C092F02: BLKS(0x0C092F02u);
	IF(0x0C092F02u); T = (s32)r0 >= 0;  /* 0C092F02 cmp/pz Rn */
	if (!T) { UPD(0x0C092E9Au, 4); goto L_0C092E9A; }  /* 0C092F04 bf */
L_0C092F06: BLKS(0x0C092F06u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C092F08u, 1);  /* 0C092F06 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092F08 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C092F0Cu, 2);  /* 0C092F0A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C092F0C mov #imm,Rn */
	r10 = 0xC7C27B0u; UPD(0x0C092F10u, 2);  /* 0C092F0E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C092F10 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C092F14u, 2);  /* 0C092F12 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C092F16u, 1);  /* 0C092F14 mov.l Rm,@(disp,Rn) */
	r4 = 0x8u;  /* 0C092F16 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C092F1Au, 2);  /* 0C092F18 mov.l @(disp,Rm),Rn */
	IF(0x0C092F1Au); { u32 t_ = r10; PR = 0x0C092F1Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C092F1Eu); }  /* 0C092F1A jsr @Rn */
L_0C092F1E: BLKS(0x0C092F1Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092E9Au, 3); goto L_0C092E9A; }  /* 0C092F1E bra */
}

void f_0C092F30(sh3_t *c)
{
	LOCALS;
	goto L_0C092F30;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092F30: BLKS(0x0C092F30u);
	r2 = 0xB4u; UPD(0x0C092F32u, 1);  /* 0C092F30 mov.w @(disp,pc),Rn */
	IF(0x0C092F32u); MACL = r10 * r2;  /* 0C092F32 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092F36u, 3);  /* 0C092F34 mov.l @(disp,pc),Rn */
	IF(0x0C092F36u); r0 = MACL;  /* 0C092F36 sts macl,Rn */
	r0 += r12;  /* 0C092F38 add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C092F3Cu, 3);  /* 0C092F3A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r11 = v_; } UPD(0x0C092F3Eu, 1);  /* 0C092F3C mov.l @Rm+,Rn */
	T = (r11 & r11) == 0;  /* 0C092F3E tst Rm,Rn */
	if (T) { UPD(0x0C092F76u, 4); goto L_0C092F76; }  /* 0C092F40 bt */
L_0C092F42: BLKS(0x0C092F42u);
	r9 = r0;  /* 0C092F42 mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C092F46u, 2);  /* 0C092F44 mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C092F46 add Rm,Rn */
	UPD(0x0C092F48u, 1);
L_0C092F48: BLKS(0x0C092F48u);
	r8 += 0x4u;  /* 0C092F48 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C092F4Cu, 2);  /* 0C092F4A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092F4C add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C092F50u, 2);  /* 0C092F4E mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C092F52u, 1);  /* 0C092F50 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C092F52 add Rm,Rn */
	IF(0x0C092F54u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C092F56u, 2);  /* 0C092F54 mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C092F58u, 1);  /* 0C092F56 mov.l @Rm+,Rn */
	r4 = r5 & 0xFF;  /* 0C092F58 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C092F5Cu, 2);  /* 0C092F5A mov.l @(disp,Rm),Rn */
	r5 = 0x4u;  /* 0C092F5C mov #imm,Rn */
	W32(r15, r4); UPD(0x0C092F60u, 2);  /* 0C092F5E mov.l Rm,@Rn */
	r7 += r2;  /* 0C092F60 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C092F64u, 2);  /* 0C092F62 mov.b @Rm,Rn */
	r12 = 0xC0AB240u; UPD(0x0C092F66u, 1);  /* 0C092F64 mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFF;  /* 0C092F66 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C092F6Au, 2);  /* 0C092F68 mov.l Rm,@(disp,Rn) */
	IF(0x0C092F6Au); { u32 t_ = r12; PR = 0x0C092F6Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092F6Eu); }  /* 0C092F6A jsr @Rn */
L_0C092F6E: BLKS(0x0C092F6Eu);
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C092F70u, 1);  /* 0C092F6E mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C092F70 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C092F48u, 4); goto L_0C092F48; } UPD(0x0C092F76u, 1); goto L_0C092F76; }  /* 0C092F72 bf/s */
L_0C092F76: BLKS(0x0C092F76u);
	{ IF(0x0C092F78u); ; /* slot nop */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092F76 bra */
}

void f_0C092F80(sh3_t *c)
{
	LOCALS;
	goto L_0C092F80;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC0: BLKS(0x0C092BC0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C092BC2u, 1);  /* 0C092BC0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C092BC4u, 1);  /* 0C092BC2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C092BC6u, 1);  /* 0C092BC4 mov.l @(disp,pc),Rn */
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092F80: BLKS(0x0C092F80u);
	r8 = 0xB4u; UPD(0x0C092F82u, 1);  /* 0C092F80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C092F82 add #imm,Rn */
	IF(0x0C092F84u); MACL = r10 * r8;  /* 0C092F84 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092F88u, 4);  /* 0C092F86 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C092F88 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C092F8Cu, 2);  /* 0C092F8A mov.w @(disp,pc),Rn */
	IF(0x0C092F8Cu); r8 = MACL;  /* 0C092F8C sts macl,Rn */
	r8 += r12;  /* 0C092F8E add Rm,Rn */
	IF(0x0C092F90u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092F92u, 3);  /* 0C092F90 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C092F92 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C092F96u, 2);  /* 0C092F94 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092F96 add #imm,Rn */
	IF(0x0C092F98u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C092F9Au, 2);  /* 0C092F98 mov.b @(r0,Rm),Rn */
	r9 = r6 & 0xFF;  /* 0C092F9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C092F9Eu, 2);  /* 0C092F9C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C092BC0u, 3); goto L_0C092BC0; }  /* 0C092F9E bra */
}

void f_0C092FB0(sh3_t *c)
{
	LOCALS;
	goto L_0C092FB0;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092F76: BLKS(0x0C092F76u);
	{ IF(0x0C092F78u); ; /* slot nop */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092F76 bra */
L_0C092FB0: BLKS(0x0C092FB0u);
	r9 = 0xC0A0540u; UPD(0x0C092FB2u, 1);  /* 0C092FB0 mov.l @(disp,pc),Rn */
	IF(0x0C092FB2u); { u32 t_ = r9; PR = 0x0C092FB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092FB6u); }  /* 0C092FB2 jsr @Rn */
L_0C092FB6: BLKS(0x0C092FB6u);
	IF(0x0C092FB6u); T = (s32)r0 >= 0;  /* 0C092FB6 cmp/pz Rn */
	if (!T) { UPD(0x0C092F76u, 4); goto L_0C092F76; }  /* 0C092FB8 bf */
L_0C092FBA: BLKS(0x0C092FBAu);
	r15 += 0xFFFFFFF8u;  /* 0C092FBA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C092FBEu, 2);  /* 0C092FBC mov.w @(disp,pc),Rn */
	IF(0x0C092FBEu); MACL = r0 * r7;  /* 0C092FBE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092FC2u, 3);  /* 0C092FC0 mov.l @(disp,pc),Rn */
	IF(0x0C092FC2u); r6 = MACL;  /* 0C092FC2 sts macl,Rn */
	IF(0x0C092FC4u); MACL = r10 * r7;  /* 0C092FC4 mul.l Rm,Rn */
	r9 = 0xA5u; UPD(0x0C092FC8u, 4);  /* 0C092FC6 mov.w @(disp,pc),Rn */
	r6 += r12;  /* 0C092FC8 add Rm,Rn */
	r6 += r9;  /* 0C092FCA add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C092FCEu, 3);  /* 0C092FCC mov.b @Rm,Rn */
	IF(0x0C092FCEu); r3 = MACL;  /* 0C092FCE sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C092FD2u, 2);  /* 0C092FD0 mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C092FD2 add Rm,Rn */
	IF(0x0C092FD4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C092FD6u, 2);  /* 0C092FD4 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C092FD6 add #imm,Rn */
	W8(r6, r8); UPD(0x0C092FDAu, 2);  /* 0C092FD8 mov.b Rm,@Rn */
	r5 = r2 & 0xFF;  /* 0C092FDA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C092FDEu, 2);  /* 0C092FDC mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092FDE add #imm,Rn */
	IF(0x0C092FE0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C092FE2u, 2);  /* 0C092FE0 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C092FE2 mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C092FE4 extu.b Rm,Rn */
	r11 = 0xC0AD970u; UPD(0x0C092FE8u, 3);  /* 0C092FE6 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C092FEAu, 1);  /* 0C092FE8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C092FECu, 1);  /* 0C092FEA mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C092FEEu, 1);  /* 0C092FEC mov.l @(disp,Rm),Rn */
	IF(0x0C092FEEu); { u32 t_ = r11; PR = 0x0C092FF2u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C092FF2u); }  /* 0C092FEE jsr @Rn */
L_0C092FF2: BLKS(0x0C092FF2u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092FF2 bra */
}

void f_0C093000(sh3_t *c)
{
	LOCALS;
	goto L_0C093000;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C093000: BLKS(0x0C093000u);
	r7 = 0xB4u; UPD(0x0C093002u, 1);  /* 0C093000 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C093002 add #imm,Rn */
	IF(0x0C093004u); MACL = r10 * r7;  /* 0C093004 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C093008u, 4);  /* 0C093006 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09300Au, 1);  /* 0C093008 mov.w @(disp,pc),Rn */
	IF(0x0C09300Au); r8 = MACL;  /* 0C09300A sts macl,Rn */
	r8 += r12;  /* 0C09300C add Rm,Rn */
	IF(0x0C09300Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093010u, 3);  /* 0C09300E mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C093010 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C093014u, 2);  /* 0C093012 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C093014 add #imm,Rn */
	IF(0x0C093016u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093018u, 2);  /* 0C093016 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C093018 mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09301A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09301Eu, 3);  /* 0C09301C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C093020u, 1);  /* 0C09301E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C093022u, 1);  /* 0C093020 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C093024u, 1);  /* 0C093022 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C093024 bra */
}

void f_0C093030(sh3_t *c)
{
	LOCALS;
	goto L_0C093030;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC6: BLKS(0x0C092BC6u);
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C092C1A: BLKS(0x0C092C1Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C092C1Cu, 1);  /* 0C092C1A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C092C1Eu, 1);  /* 0C092C1C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C092BC6u, 3); goto L_0C092BC6; }  /* 0C092C1E bra */
L_0C093030: BLKS(0x0C093030u);
	r8 = 0xB4u; UPD(0x0C093032u, 1);  /* 0C093030 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C093032 add #imm,Rn */
	IF(0x0C093034u); MACL = r10 * r8;  /* 0C093034 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C093038u, 4);  /* 0C093036 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C093038 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09303Cu, 2);  /* 0C09303A mov.w @(disp,pc),Rn */
	IF(0x0C09303Cu); r8 = MACL;  /* 0C09303C sts macl,Rn */
	r8 += r3;  /* 0C09303E add Rm,Rn */
	IF(0x0C093040u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093042u, 3);  /* 0C093040 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C093042 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C093046u, 2);  /* 0C093044 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C093046 add #imm,Rn */
	IF(0x0C093048u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09304Au, 2);  /* 0C093048 mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C09304A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09304Eu, 2);  /* 0C09304C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C092C1Au, 3); goto L_0C092C1A; }  /* 0C09304E bra */
}

void f_0C093080(sh3_t *c)
{
	LOCALS;
	goto L_0C093080;
L_0C092B2C: BLKS(0x0C092B2Cu);
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092BC0: BLKS(0x0C092BC0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C092BC2u, 1);  /* 0C092BC0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C092BC4u, 1);  /* 0C092BC2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C092BC6u, 1);  /* 0C092BC4 mov.l @(disp,pc),Rn */
	IF(0x0C092BC6u); { u32 t_ = r0; PR = 0x0C092BCAu; IF(0x0C092BC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C092BCAu); }  /* 0C092BC6 jsr @Rn */
L_0C092BCA: BLKS(0x0C092BCAu);
	r6 = 0x0u;  /* 0C092BCA mov #imm,Rn */
	W32(r8, r6); UPD(0x0C092BCEu, 2);  /* 0C092BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B2Cu, 3); goto L_0C092B2C; }  /* 0C092BCE bra */
L_0C093080: BLKS(0x0C093080u);
	r7 = 0xB4u; UPD(0x0C093082u, 1);  /* 0C093080 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C093082 add #imm,Rn */
	IF(0x0C093084u); MACL = r10 * r7;  /* 0C093084 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C093088u, 4);  /* 0C093086 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09308Au, 1);  /* 0C093088 mov.w @(disp,pc),Rn */
	IF(0x0C09308Au); r8 = MACL;  /* 0C09308A sts macl,Rn */
	r8 += r12;  /* 0C09308C add Rm,Rn */
	IF(0x0C09308Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093090u, 3);  /* 0C09308E mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C093090 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C093094u, 2);  /* 0C093092 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C093094 add #imm,Rn */
	IF(0x0C093096u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C093098u, 2);  /* 0C093096 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C093098 mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09309A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09309Eu, 3);  /* 0C09309C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C092BC0u, 3); goto L_0C092BC0; }  /* 0C09309E bra */
}

/* FUN_0c0930b0 */
void f_0C0930B0(sh3_t *c)
{
	LOCALS;
L_0C0930B0: BLKS(0x0C0930B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0930B2u, 1);  /* 0C0930B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0930B4u, 1);  /* 0C0930B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0930B6u, 1);  /* 0C0930B4 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0930B8u, 1);  /* 0C0930B6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0930B8 exts.w Rm,Rn */
	IF(0x0C0930BAu); MACL = r10 * r5;  /* 0C0930BA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0930BEu, 4);  /* 0C0930BC mov.l Rm,@-Rn */
	r4 = 0xC26CD40u; UPD(0x0C0930C0u, 1);  /* 0C0930BE mov.l @(disp,pc),Rn */
	IF(0x0C0930C0u); r0 = MACL;  /* 0C0930C0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0930C4u, 2);  /* 0C0930C2 mov.l Rm,@-Rn */
	r0 += r4;  /* 0C0930C4 add Rm,Rn */
	IF(0x0C0930C6u); r15 -= 4; W32(r15, PR); UPD(0x0C0930C8u, 2);  /* 0C0930C6 sts.l pr,@-Rn */
	r2 = r0;  /* 0C0930C8 mov Rm,Rn */
	r2 += 0x50u;  /* 0C0930CA add #imm,Rn */
	r3 = R32(r2); UPD(0x0C0930CEu, 3);  /* 0C0930CC mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C0930CE add #imm,Rn */
	r7 = 0x9Fu; UPD(0x0C0930D2u, 2);  /* 0C0930D0 mov.w @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C0930D4u, 1);  /* 0C0930D2 mov.l Rm,@Rn */
	r7 += r0;  /* 0C0930D4 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C0930D8u, 2);  /* 0C0930D6 mov.b @Rm,Rn */
	r0 = 0x5u;  /* 0C0930D8 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C0930DA extu.b Rm,Rn */
	T = r2 > r0;  /* 0C0930DC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0930E6u, 6); goto L_0C0930E6; } goto L_0C0930E2; }  /* 0C0930DE bf/s */
L_0C0930E2: BLKS(0x0C0930E2u);
	{ r11 = r3; /* slot mov Rm,Rn */ UPD(0x0C0938D0u, 4); goto L_0C0938D0; }  /* 0C0930E2 bra */
L_0C0930E6: BLKS(0x0C0930E6u);
	r0 = 0xC0930F8u;  /* 0C0930E6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0930E8 add Rm,Rn */
	IF(0x0C0930EAu); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0930ECu, 3);  /* 0C0930EA mov.w @(r0,Rm),Rn */
	IF(0x0C0930ECu); { u32 tv_ = (r6 + 0x0C0930F0u); u32 t_ = PHYS(tv_); IF(0x0C0930EEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093110u: goto L_0C093110; case 0x0C0931B0u: goto L_0C0931B0; case 0x0C093540u: goto L_0C093540; case 0x0C093590u: goto L_0C093590; case 0x0C093630u: goto L_0C093630; case 0x0C093860u: goto L_0C093860; default: JUMPD(tv_); } }  /* 0C0930EC braf Rn */
L_0C093110: BLKS(0x0C093110u);
	r8 = 0xB4u; UPD(0x0C093112u, 1);  /* 0C093110 mov.w @(disp,pc),Rn */
	IF(0x0C093112u); MACL = r10 * r8;  /* 0C093112 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C093116u, 3);  /* 0C093114 mov.l @(disp,pc),Rn */
	IF(0x0C093116u); r3 = MACL;  /* 0C093116 sts macl,Rn */
	r6 = 0xA0u; UPD(0x0C09311Au, 2);  /* 0C093118 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C09311A add Rm,Rn */
	r6 += r3;  /* 0C09311C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C093120u, 3);  /* 0C09311E mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C093120 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C093122 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C093190u, 5); goto L_0C093190; } goto L_0C093128; }  /* 0C093124 bt/s */
L_0C093128: BLKS(0x0C093128u);
	T = (s32)r0 > (s32)r9;  /* 0C093128 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C093160u, 5); goto L_0C093160; } goto L_0C09312E; }  /* 0C09312A bt/s */
L_0C09312E: BLKS(0x0C09312Eu);
	T = (r0 & r0) == 0;  /* 0C09312E tst Rm,Rn */
	if (T) { UPD(0x0C093150u, 5); goto L_0C093150; }  /* 0C093130 bt */
L_0C093132: BLKS(0x0C093132u);
	IF(0x0C093132u); ;  /* 0C093132 nop */
	UPD(0x0C093134u, 1);
L_0C093134: BLKS(0x0C093134u);
	r15 = r14;  /* 0C093134 mov Rm,Rn */
	IF(0x0C093136u); PR = R32(r15); r15 += 4; UPD(0x0C093138u, 2);  /* 0C093136 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09313Au, 1);  /* 0C093138 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09313Cu, 1);  /* 0C09313A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09313Eu, 1);  /* 0C09313C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093140u, 1);  /* 0C09313E mov.l @Rm+,Rn */
	IF(0x0C093140u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C093140 rts */
L_0C093150: BLKS(0x0C093150u);
	r1 = R32(r3 + 0x24u); UPD(0x0C093152u, 1);  /* 0C093150 mov.l @(disp,Rm),Rn */
	r10 = 0x11FFFFFu; UPD(0x0C093154u, 1);  /* 0C093152 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r10;  /* 0C093154 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C093156 bt */
L_0C093158: BLKS(0x0C093158u);
	r8 = r7;  /* 0C093158 mov Rm,Rn */
	r8 += 0x1u;  /* 0C09315A add #imm,Rn */
	{ W8(r6, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 5); goto L_0C093134; }  /* 0C09315C bra */
L_0C093160: BLKS(0x0C093160u);
	if (!T) { UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093160 bf */
L_0C093162: BLKS(0x0C093162u);
	r6 += 0x1u;  /* 0C093162 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C093166u, 2);  /* 0C093164 mov.b @Rm,Rn */
	r0 &= 0xC0u;  /* 0C093166 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C093168 tst Rm,Rn */
	{ u32 c_ = !T; r6 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093134u, 5); goto L_0C093134; } goto L_0C09316E; }  /* 0C09316A bf/s */
L_0C09316E: BLKS(0x0C09316Eu);
	r7 = 0x9Fu; UPD(0x0C093170u, 2);  /* 0C09316E mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C093170 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C093174u, 2);  /* 0C093172 mov.b @Rm,Rn */
	r3 += 0x50u;  /* 0C093174 add #imm,Rn */
	W8(r6, r0); UPD(0x0C093178u, 2);  /* 0C093176 mov.b Rm,@Rn */
	r9 += 0x1u;  /* 0C093178 add #imm,Rn */
	W8(r7, r9); UPD(0x0C09317Cu, 2);  /* 0C09317A mov.b Rm,@Rn */
	W32(r3, r0); UPD(0x0C09317Eu, 1);  /* 0C09317C mov.l Rm,@Rn */
	r6 = 0xC1F6158u; UPD(0x0C093180u, 1);  /* 0C09317E mov.l @(disp,pc),Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093180 bra */
L_0C093190: BLKS(0x0C093190u);
	r0 = 0x8Cu; UPD(0x0C093192u, 1);  /* 0C093190 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C093192 add Rm,Rn */
	r11 = R32(r0); UPD(0x0C093196u, 2);  /* 0C093194 mov.l @Rm,Rn */
	r2 = 0xFFFFF000u; UPD(0x0C093198u, 1);  /* 0C093196 mov.w @(disp,pc),Rn */
	r11 += r2;  /* 0C093198 add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C09319A tst Rm,Rn */
	{ u32 c_ = !T; W32(r0, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C093134u, 5); goto L_0C093134; } UPD(0x0C0931A0u, 1); goto L_0C0931A0; }  /* 0C09319C bf/s */
L_0C0931A0: BLKS(0x0C0931A0u);
	r4 = r6;  /* 0C0931A0 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0931A2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0931A6u, 3);  /* 0C0931A4 mov.b @Rm,Rn */
	r5 = 0xFFFFFFC0u;  /* 0C0931A6 mov #imm,Rn */
	r3 |= r5;  /* 0C0931A8 or Rm,Rn */
	{ W8(r4, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C093158u, 5); goto L_0C093158; }  /* 0C0931AA bra */
L_0C0931B0: BLKS(0x0C0931B0u);
	r2 = 0xB4u; UPD(0x0C0931B2u, 1);  /* 0C0931B0 mov.w @(disp,pc),Rn */
	IF(0x0C0931B2u); MACL = r10 * r2;  /* 0C0931B2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0931B6u, 3);  /* 0C0931B4 mov.l @(disp,pc),Rn */
	IF(0x0C0931B6u); r3 = MACL;  /* 0C0931B6 sts macl,Rn */
	r3 += r0;  /* 0C0931B8 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C0931BCu, 3);  /* 0C0931BA mov.w @(disp,pc),Rn */
	IF(0x0C0931BCu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0931BEu, 1);  /* 0C0931BC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0931BE tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFF7u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0931E0u, 4); goto L_0C0931E0; } goto L_0C0931C4; }  /* 0C0931C0 bt/s */
L_0C0931C4: BLKS(0x0C0931C4u);
	IF(0x0C0931C4u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0931C6u, 2);  /* 0C0931C4 mov.b @(r0,Rm),Rn */
	r10 += 0x2u;  /* 0C0931C6 add #imm,Rn */
	IF(0x0C0931C8u); W8(r0 + r3, r10); UPD(0x0C0931CAu, 2);  /* 0C0931C8 mov.b Rm,@(r0,Rn) */
L_0C0931CA: BLKS(0x0C0931CAu);
	r0 = 0xA0u; UPD(0x0C0931CCu, 1);  /* 0C0931CA mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0931CC mov #imm,Rn */
	{ IF(0x0C0931D0u); W8(r0 + r3, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C0931CE bra */
L_0C0931E0: BLKS(0x0C0931E0u);
	r0 = 0xA0u; UPD(0x0C0931E2u, 1);  /* 0C0931E0 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C0931E2 mov #imm,Rn */
	IF(0x0C0931E4u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0931E6u, 2);  /* 0C0931E4 mov.b @(r0,Rm),Rn */
	r2 = r5 & 0xFF;  /* 0C0931E6 extu.b Rm,Rn */
	T = r2 > r4;  /* 0C0931E8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C093134u, 5); goto L_0C093134; }  /* 0C0931EA bt */
L_0C0931EC: BLKS(0x0C0931ECu);
	r0 = 0xC093210u;  /* 0C0931EC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0931EE add Rm,Rn */
	IF(0x0C0931F0u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0931F2u, 3);  /* 0C0931F0 mov.w @(r0,Rm),Rn */
	IF(0x0C0931F2u); { u32 tv_ = (r3 + 0x0C0931F6u); u32 t_ = PHYS(tv_); IF(0x0C0931F4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093230u: goto L_0C093230; case 0x0C093250u: goto L_0C093250; case 0x0C0932A0u: goto L_0C0932A0; case 0x0C0932E0u: goto L_0C0932E0; case 0x0C093350u: goto L_0C093350; case 0x0C093364u: goto L_0C093364; case 0x0C093390u: goto L_0C093390; case 0x0C0933D0u: goto L_0C0933D0; case 0x0C093420u: goto L_0C093420; case 0x0C093450u: goto L_0C093450; case 0x0C093500u: goto L_0C093500; default: JUMPD(tv_); } }  /* 0C0931F2 braf Rn */
L_0C093230: BLKS(0x0C093230u);
	r7 = 0xB4u; UPD(0x0C093232u, 1);  /* 0C093230 mov.w @(disp,pc),Rn */
	IF(0x0C093232u); MACL = r10 * r7;  /* 0C093232 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C093236u, 3);  /* 0C093234 mov.l @(disp,pc),Rn */
	IF(0x0C093236u); r2 = MACL;  /* 0C093236 sts macl,Rn */
	r8 = 0xA0u; UPD(0x0C09323Au, 2);  /* 0C093238 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C09323A add Rm,Rn */
	r2 += r8;  /* 0C09323C add Rm,Rn */
	UPD(0x0C09323Eu, 2);
L_0C09323E: BLKS(0x0C09323Eu);
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C093240u, 1);  /* 0C09323E mov.b @Rm,Rn */
L_0C093240: BLKS(0x0C093240u);
	r8 += 0x1u;  /* 0C093240 add #imm,Rn */
	{ W8(r2, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C093242 bra */
L_0C093250: BLKS(0x0C093250u);
	r8 = 0xC050D70u; UPD(0x0C093252u, 1);  /* 0C093250 mov.l @(disp,pc),Rn */
	r11 = 0xC1F614Cu; UPD(0x0C093254u, 1);  /* 0C093252 mov.l @(disp,pc),Rn */
	IF(0x0C093254u); { u32 t_ = r8; PR = 0x0C093258u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093258u); }  /* 0C093254 jsr @Rn */
L_0C093258: BLKS(0x0C093258u);
	r4 = 0xE0u; UPD(0x0C09325Au, 1);  /* 0C093258 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C09325A add Rm,Rn */
	IF(0x0C09325Cu); r0 <<= 16;  /* 0C09325C shll16 Rn */
	W32(r11, r0); UPD(0x0C093260u, 3);  /* 0C09325E mov.l Rm,@Rn */
L_0C093260: BLKS(0x0C093260u);
	r9 = 0xA0u; UPD(0x0C093262u, 1);  /* 0C093260 mov.w @(disp,pc),Rn */
	IF(0x0C093262u); { u32 t_ = r8; PR = 0x0C093266u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093266u); }  /* 0C093262 jsr @Rn */
L_0C093266: BLKS(0x0C093266u);
	r7 = 0x1B0u; UPD(0x0C093268u, 1);  /* 0C093266 mov.w @(disp,pc),Rn */
	r6 = 0xC1F6150u; UPD(0x0C09326Au, 1);  /* 0C093268 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C09326A add Rm,Rn */
	IF(0x0C09326Cu); r0 <<= 16;  /* 0C09326C shll16 Rn */
	W32(r6, r0); UPD(0x0C093270u, 3);  /* 0C09326E mov.l Rm,@Rn */
	r7 = r0;  /* 0C093270 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C093274u, 2);  /* 0C093272 mov.w @(disp,pc),Rn */
	r6 = R32(r11); UPD(0x0C093276u, 1);  /* 0C093274 mov.l @Rm,Rn */
	IF(0x0C093276u); MACL = r10 * r3;  /* 0C093276 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09327Au, 3);  /* 0C093278 mov.l @(disp,pc),Rn */
	r11 = 0xC057390u; UPD(0x0C09327Cu, 1);  /* 0C09327A mov.l @(disp,pc),Rn */
	IF(0x0C09327Cu); r8 = MACL;  /* 0C09327C sts macl,Rn */
	r10 = 0x86u; UPD(0x0C093280u, 2);  /* 0C09327E mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C093280 add Rm,Rn */
	r10 += r8;  /* 0C093282 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C093286u, 3);  /* 0C093284 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C093286 add Rm,Rn */
	IF(0x0C093288u); { u32 t_ = r11; PR = 0x0C09328Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09328Cu); }  /* 0C093288 jsr @Rn */
L_0C09328C: BLKS(0x0C09328Cu);
	W16(r10, r0); UPD(0x0C09328Eu, 1);  /* 0C09328C mov.w Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C093290u, 1);  /* 0C09328E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C093290 add #imm,Rn */
	{ W8(r9, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C093292 bra */
L_0C0932A0: BLKS(0x0C0932A0u);
	r6 = 0xB4u; UPD(0x0C0932A2u, 1);  /* 0C0932A0 mov.w @(disp,pc),Rn */
	IF(0x0C0932A2u); MACL = r10 * r6;  /* 0C0932A2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0932A6u, 3);  /* 0C0932A4 mov.l @(disp,pc),Rn */
	IF(0x0C0932A6u); r9 = MACL;  /* 0C0932A6 sts macl,Rn */
	r9 += r5;  /* 0C0932A8 add Rm,Rn */
	r11 = 0xC1F614Cu; UPD(0x0C0932ACu, 3);  /* 0C0932AA mov.l @(disp,pc),Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C0932AEu, 1);  /* 0C0932AC mov.l @(disp,Rm),Rn */
	W32(r11, r8); UPD(0x0C0932B0u, 1);  /* 0C0932AE mov.l Rm,@Rn */
	r10 = 0xC050D70u; UPD(0x0C0932B2u, 1);  /* 0C0932B0 mov.l @(disp,pc),Rn */
	r8 = 0xA0u; UPD(0x0C0932B4u, 1);  /* 0C0932B2 mov.w @(disp,pc),Rn */
	IF(0x0C0932B4u); { u32 t_ = r10; PR = 0x0C0932B8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0932B8u); }  /* 0C0932B4 jsr @Rn */
L_0C0932B8: BLKS(0x0C0932B8u);
	r10 = 0x1B0u; UPD(0x0C0932BAu, 1);  /* 0C0932B8 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0932BA add Rm,Rn */
	r6 = R32(r11); UPD(0x0C0932BEu, 2);  /* 0C0932BC mov.l @Rm,Rn */
	r0 += r10;  /* 0C0932BE add Rm,Rn */
	r7 = 0xC1F6150u; UPD(0x0C0932C2u, 2);  /* 0C0932C0 mov.l @(disp,pc),Rn */
	IF(0x0C0932C2u); r0 <<= 16;  /* 0C0932C2 shll16 Rn */
	r11 = 0xC057390u; UPD(0x0C0932C6u, 2);  /* 0C0932C4 mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C0932C8u, 1);  /* 0C0932C6 mov.l Rm,@Rn */
	r10 = 0x86u; UPD(0x0C0932CAu, 1);  /* 0C0932C8 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C0932CA mov Rm,Rn */
	r10 += r9;  /* 0C0932CC add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0932D0u, 3);  /* 0C0932CE mov.l @(disp,Rm),Rn */
	IF(0x0C0932D0u); { u32 t_ = r11; PR = 0x0C0932D4u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0932D4u); }  /* 0C0932D0 jsr @Rn */
L_0C0932D4: BLKS(0x0C0932D4u);
	W16(r10, r0); UPD(0x0C0932D6u, 1);  /* 0C0932D4 mov.w Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0932D8u, 1);  /* 0C0932D6 mov.b @Rm,Rn */
L_0C0932D8: BLKS(0x0C0932D8u);
	r4 += 0x1u;  /* 0C0932D8 add #imm,Rn */
	{ W8(r8, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C0932DA bra */
L_0C0932E0: BLKS(0x0C0932E0u);
	r11 = 0xB4u; UPD(0x0C0932E2u, 1);  /* 0C0932E0 mov.w @(disp,pc),Rn */
	IF(0x0C0932E2u); MACL = r10 * r11;  /* 0C0932E2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0932E6u, 3);  /* 0C0932E4 mov.l @(disp,pc),Rn */
	IF(0x0C0932E6u); r7 = MACL;  /* 0C0932E6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0932EAu, 2);  /* 0C0932E8 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C0932EA add Rm,Rn */
	IF(0x0C0932ECu); r3 = R32(r0 + r7); UPD(0x0C0932EEu, 2);  /* 0C0932EC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0932EE tst Rm,Rn */
	if (!T) { UPD(0x0C093340u, 4); goto L_0C093340; }  /* 0C0932F0 bf */
L_0C0932F2: BLKS(0x0C0932F2u);
	r4 = 0xC1F6158u; UPD(0x0C0932F4u, 1);  /* 0C0932F2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0932F6u, 1);  /* 0C0932F4 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C0932F6 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093310u, 4); goto L_0C093310; } goto L_0C0932FC; }  /* 0C0932F8 bt/s */
L_0C0932FC: BLKS(0x0C0932FCu);
	r2 += 0x1u;  /* 0C0932FC add #imm,Rn */
	W8(r4, r2); UPD(0x0C093300u, 3);  /* 0C0932FE mov.b Rm,@Rn */
L_0C093300: BLKS(0x0C093300u);
	r0 = 0xA0u; UPD(0x0C093302u, 1);  /* 0C093300 mov.w @(disp,pc),Rn */
	IF(0x0C093302u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C093304u, 1);  /* 0C093302 mov.b @(r0,Rm),Rn */
	r1 += 0xFFFFFFFEu;  /* 0C093304 add #imm,Rn */
	UPD(0x0C093306u, 1);
L_0C093306: BLKS(0x0C093306u);
	IF(0x0C093306u); W8(r0 + r7, r1); UPD(0x0C093308u, 1);  /* 0C093306 mov.b Rm,@(r0,Rn) */
L_0C093308: BLKS(0x0C093308u);
	{ IF(0x0C09330Au); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093308 bra */
L_0C093310: BLKS(0x0C093310u);
	r5 = 0xA0u; UPD(0x0C093312u, 1);  /* 0C093310 mov.w @(disp,pc),Rn */
	r0 = 0x1Du;  /* 0C093312 mov #imm,Rn */
	r5 += r7;  /* 0C093314 add Rm,Rn */
	r6 = r5;  /* 0C093316 mov Rm,Rn */
	r6 += 0x1u;  /* 0C093318 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09331Cu, 5);  /* 0C09331A mov.b Rm,@Rn */
	r5 += 0x2u;  /* 0C09331C add #imm,Rn */
	r6 = 0x98u; UPD(0x0C093320u, 2);  /* 0C09331E mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C093320 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C093324u, 2);  /* 0C093322 mov.b @Rm,Rn */
	W8(r5, r3); UPD(0x0C093326u, 1);  /* 0C093324 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C093326 add #imm,Rn */
	r10 = r8 & 0xFF;  /* 0C093328 extu.b Rm,Rn */
	W8(r6, r8); UPD(0x0C09332Cu, 3);  /* 0C09332A mov.b Rm,@Rn */
	T = r10 > r0;  /* 0C09332C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093308u, 4); goto L_0C093308; } goto L_0C093332; }  /* 0C09332E bf/s */
L_0C093332: BLKS(0x0C093332u);
	r6 += 0x1u;  /* 0C093332 add #imm,Rn */
	W8(r6, r3); UPD(0x0C093336u, 3);  /* 0C093334 mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C093338u, 1);  /* 0C093336 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C09333Au, 1);  /* 0C093338 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09333A add #imm,Rn */
	{ W8(r5, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C09333C bra */
L_0C093340: BLKS(0x0C093340u);
	r4 = 0xFFFFF800u; UPD(0x0C093342u, 1);  /* 0C093340 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C093342 add Rm,Rn */
	{ IF(0x0C093346u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C093344 bra */
L_0C093350: BLKS(0x0C093350u);
	r11 = 0xB4u; UPD(0x0C093352u, 1);  /* 0C093350 mov.w @(disp,pc),Rn */
	IF(0x0C093352u); MACL = r10 * r11;  /* 0C093352 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C093356u, 3);  /* 0C093354 mov.l @(disp,pc),Rn */
	IF(0x0C093356u); r5 = MACL;  /* 0C093356 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09335Au, 2);  /* 0C093358 mov.w @(disp,pc),Rn */
	r5 += r9;  /* 0C09335A add Rm,Rn */
	r5 += r7;  /* 0C09335C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C093360u, 3);  /* 0C09335E mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C093360 add #imm,Rn */
	W8(r5, r3); UPD(0x0C093364u, 2);  /* 0C093362 mov.b Rm,@Rn */
L_0C093364: BLKS(0x0C093364u);
	r8 = 0xB4u; UPD(0x0C093366u, 1);  /* 0C093364 mov.w @(disp,pc),Rn */
	IF(0x0C093366u); MACL = r10 * r8;  /* 0C093366 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09336Au, 3);  /* 0C093368 mov.l @(disp,pc),Rn */
	IF(0x0C09336Au); r3 = MACL;  /* 0C09336A sts macl,Rn */
	r3 += r2;  /* 0C09336C add Rm,Rn */
	r3 += 0x50u;  /* 0C09336E add #imm,Rn */
	r1 = R32(r3); UPD(0x0C093372u, 4);  /* 0C093370 mov.l @Rm,Rn */
	r0 = 0x1518u; UPD(0x0C093374u, 1);  /* 0C093372 mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C093374 cmp/gt Rm,Rn */
	r0 = 0xA0u; UPD(0x0C093378u, 2);  /* 0C093376 mov.w @(disp,pc),Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093380u, 3); goto L_0C093380; } goto L_0C09337C; }  /* 0C093378 bt/s */
L_0C09337C: BLKS(0x0C09337Cu);
	{ IF(0x0C09337Eu); ; /* slot nop */ UPD(0x0C0931CAu, 4); goto L_0C0931CA; }  /* 0C09337C bra */
L_0C093380: BLKS(0x0C093380u);
	IF(0x0C093380u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C093382u, 1);  /* 0C093380 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C093382 add #imm,Rn */
	IF(0x0C093384u); W8(r0 + r3, r2); UPD(0x0C093386u, 2);  /* 0C093384 mov.b Rm,@(r0,Rn) */
L_0C093386: BLKS(0x0C093386u);
	{ IF(0x0C093388u); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093386 bra */
L_0C093390: BLKS(0x0C093390u);
	r3 = 0xB4u; UPD(0x0C093392u, 1);  /* 0C093390 mov.w @(disp,pc),Rn */
	IF(0x0C093392u); MACL = r10 * r3;  /* 0C093392 mul.l Rm,Rn */
	r6 = 0x300000u; UPD(0x0C093396u, 3);  /* 0C093394 mov.l @(disp,pc),Rn */
	r7 = 0xC1F614Cu; UPD(0x0C093398u, 1);  /* 0C093396 mov.l @(disp,pc),Rn */
	IF(0x0C093398u); r11 = MACL;  /* 0C093398 sts macl,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09339Cu, 2);  /* 0C09339A mov.l @(disp,pc),Rn */
	W32(r7, r6); UPD(0x0C09339Eu, 1);  /* 0C09339C mov.l Rm,@Rn */
	r11 += r5;  /* 0C09339E add Rm,Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C0933A2u, 2);  /* 0C0933A0 mov.l @(disp,Rm),Rn */
	r4 = 0xC1F6150u; UPD(0x0C0933A4u, 1);  /* 0C0933A2 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C0933A4 mov Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C0933A8u, 2);  /* 0C0933A6 mov.l @(disp,pc),Rn */
	W32(r4, r7); UPD(0x0C0933AAu, 1);  /* 0C0933A8 mov.l Rm,@Rn */
	r8 = 0x86u; UPD(0x0C0933ACu, 1);  /* 0C0933AA mov.w @(disp,pc),Rn */
	IF(0x0C0933ACu); { u32 t_ = r9; PR = 0x0C0933B0u; r4 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0933B0u); }  /* 0C0933AC jsr @Rn */
L_0C0933B0: BLKS(0x0C0933B0u);
	r2 = 0xA0u; UPD(0x0C0933B2u, 1);  /* 0C0933B0 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C0933B2 add Rm,Rn */
	r2 += r11;  /* 0C0933B4 add Rm,Rn */
	W16(r8, r0); UPD(0x0C0933B8u, 3);  /* 0C0933B6 mov.w Rm,@Rn */
	r2 += 0x3u;  /* 0C0933B8 add #imm,Rn */
	r1 = 0xFFFFFF80u;  /* 0C0933BA mov #imm,Rn */
	UPD(0x0C0933BCu, 2);
L_0C0933BC: BLKS(0x0C0933BCu);
	W8(r2, r1); UPD(0x0C0933BEu, 1);  /* 0C0933BC mov.b Rm,@Rn */
	{ r2 += 0xFFFFFFFDu; /* slot add #imm,Rn */ UPD(0x0C09323Eu, 3); goto L_0C09323E; }  /* 0C0933BE bra */
L_0C0933D0: BLKS(0x0C0933D0u);
	r0 = 0xB4u; UPD(0x0C0933D2u, 1);  /* 0C0933D0 mov.w @(disp,pc),Rn */
	IF(0x0C0933D2u); MACL = r10 * r0;  /* 0C0933D2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0933D6u, 3);  /* 0C0933D4 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C0933D8u, 1);  /* 0C0933D6 mov.w @(disp,pc),Rn */
	IF(0x0C0933D8u); r7 = MACL;  /* 0C0933D8 sts macl,Rn */
	r7 += r2;  /* 0C0933DA add Rm,Rn */
	IF(0x0C0933DCu); r6 = R32(r0 + r7); UPD(0x0C0933DEu, 3);  /* 0C0933DC mov.l @(r0,Rm),Rn */
	r11 = 0xFFFFF800u; UPD(0x0C0933E0u, 1);  /* 0C0933DE mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C0933E0 add Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0933E2 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0933E6u); W32(r0 + r7, r6); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C093386u, 5); goto L_0C093386; } UPD(0x0C0933E8u, 1); goto L_0C0933E8; }  /* 0C0933E4 bf/s */
L_0C0933E8: BLKS(0x0C0933E8u);
	r0 += 0x14u;  /* 0C0933E8 add #imm,Rn */
	IF(0x0C0933EAu); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0933ECu, 2);  /* 0C0933EA mov.b @(r0,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C093306u, 3); goto L_0C093306; }  /* 0C0933EC bra */
L_0C093420: BLKS(0x0C093420u);
	r6 = 0x1000000u; UPD(0x0C093422u, 1);  /* 0C093420 mov.l @(disp,pc),Rn */
L_0C093422: BLKS(0x0C093422u);
	r5 = 0xB4u; UPD(0x0C093424u, 1);  /* 0C093422 mov.w @(disp,pc),Rn */
	IF(0x0C093424u); MACL = r10 * r5;  /* 0C093424 mul.l Rm,Rn */
	r4 = 0xC1F614Cu; UPD(0x0C093428u, 3);  /* 0C093426 mov.l @(disp,pc),Rn */
	r7 = 0xC26CD40u; UPD(0x0C09342Au, 1);  /* 0C093428 mov.l @(disp,pc),Rn */
	IF(0x0C09342Au); r10 = MACL;  /* 0C09342A sts macl,Rn */
	W32(r4, r6); UPD(0x0C09342Eu, 2);  /* 0C09342C mov.l Rm,@Rn */
	r10 += r7;  /* 0C09342E add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C093432u, 2);  /* 0C093430 mov.l @(disp,Rm),Rn */
	r3 = 0xC1F6150u; UPD(0x0C093434u, 1);  /* 0C093432 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C093434 mov Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C093438u, 2);  /* 0C093436 mov.l @(disp,pc),Rn */
	W32(r3, r7); UPD(0x0C09343Au, 1);  /* 0C093438 mov.l Rm,@Rn */
	r11 = 0x86u; UPD(0x0C09343Cu, 1);  /* 0C09343A mov.w @(disp,pc),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09343Eu, 1);  /* 0C09343C mov.l @(disp,Rm),Rn */
	IF(0x0C09343Eu); { u32 t_ = r9; PR = 0x0C093442u; r11 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C093442u); }  /* 0C09343E jsr @Rn */
L_0C093442: BLKS(0x0C093442u);
	W16(r11, r0); UPD(0x0C093444u, 1);  /* 0C093442 mov.w Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C093446u, 1);  /* 0C093444 mov.w @(disp,pc),Rn */
	IF(0x0C093446u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C093448u, 1);  /* 0C093446 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C093448 add #imm,Rn */
	{ IF(0x0C09344Cu); W8(r0 + r10, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C09344A bra */
L_0C093450: BLKS(0x0C093450u);
	r2 = 0xB4u; UPD(0x0C093452u, 1);  /* 0C093450 mov.w @(disp,pc),Rn */
	IF(0x0C093452u); MACL = r10 * r2;  /* 0C093452 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C093456u, 3);  /* 0C093454 mov.l @(disp,pc),Rn */
	IF(0x0C093456u); r5 = MACL;  /* 0C093456 sts macl,Rn */
	r5 += r0;  /* 0C093458 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09345Cu, 3);  /* 0C09345A mov.w @(disp,pc),Rn */
	r8 = 0xFFFFu; UPD(0x0C09345Eu, 1);  /* 0C09345C mov.l @(disp,pc),Rn */
	IF(0x0C09345Eu); r2 = R32(r0 + r5); UPD(0x0C093460u, 1);  /* 0C09345E mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C093460 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09346Au, 4); goto L_0C09346A; }  /* 0C093462 bt */
L_0C093464: BLKS(0x0C093464u);
	r9 = 0x800u; UPD(0x0C093466u, 1);  /* 0C093464 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C093466 add Rm,Rn */
	IF(0x0C093468u); W32(r0 + r5, r2); UPD(0x0C09346Au, 2);  /* 0C093468 mov.l Rm,@(r0,Rn) */
L_0C09346A: BLKS(0x0C09346Au);
	r4 = R32(r5 + 0x24u); UPD(0x0C09346Cu, 1);  /* 0C09346A mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C09346Eu, 1);  /* 0C09346C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C09346E add Rm,Rn */
	IF(0x0C093470u); T = (s32)r2 >= 0;  /* 0C093470 cmp/pz Rn */
	if (!T) { UPD(0x0C0934F0u, 5); goto L_0C0934F0; }  /* 0C093472 bf */
L_0C093474: BLKS(0x0C093474u);
	r10 = 0x1E00000u; UPD(0x0C093476u, 1);  /* 0C093474 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C093476 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09348Au, 4); goto L_0C09348A; }  /* 0C093478 bt */
L_0C09347A: BLKS(0x0C09347Au);
	r0 = R32(r5 + 0x28u); UPD(0x0C09347Cu, 1);  /* 0C09347A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C09347Eu, 1);  /* 0C09347C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09347E add Rm,Rn */
	IF(0x0C093480u); T = (s32)r2 >= 0;  /* 0C093480 cmp/pz Rn */
	if (!T) { UPD(0x0C0934E0u, 5); goto L_0C0934E0; }  /* 0C093482 bf */
L_0C093484: BLKS(0x0C093484u);
	r11 = 0xC80000u; UPD(0x0C093486u, 1);  /* 0C093484 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C093486 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0934A0u, 4); goto L_0C0934A0; }  /* 0C093488 bf */
L_0C09348A: BLKS(0x0C09348Au);
	r0 = 0xA0u; UPD(0x0C09348Cu, 1);  /* 0C09348A mov.w @(disp,pc),Rn */
	IF(0x0C09348Cu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09348Eu, 1);  /* 0C09348C mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09348E add #imm,Rn */
	{ IF(0x0C093492u); W8(r0 + r5, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C093490 bra */
L_0C0934A0: BLKS(0x0C0934A0u);
	r6 = 0xC1F614Cu; UPD(0x0C0934A2u, 1);  /* 0C0934A0 mov.l @(disp,pc),Rn */
	r9 = R32(r6); UPD(0x0C0934A4u, 1);  /* 0C0934A2 mov.l @Rm,Rn */
	r4 -= r9;  /* 0C0934A4 sub Rm,Rn */
	r9 = 0xC1F6150u; UPD(0x0C0934A8u, 2);  /* 0C0934A6 mov.l @(disp,pc),Rn */
	r10 = 0x7FFFFu; UPD(0x0C0934AAu, 1);  /* 0C0934A8 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFEu; UPD(0x0C0934ACu, 1);  /* 0C0934AA mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C0934AC add Rm,Rn */
	r7 = R32(r9); UPD(0x0C0934B0u, 2);  /* 0C0934AE mov.l @Rm,Rn */
	T = r2 >= r4;  /* 0C0934B0 cmp/hs Rm,Rn */
	r0 -= r7;  /* 0C0934B2 sub Rm,Rn */
	IF(0x0C0934B4u); r8 = T;  /* 0C0934B4 movt Rn */
	r0 += r10;  /* 0C0934B6 add Rm,Rn */
	T = r2 >= r0;  /* 0C0934B8 cmp/hs Rm,Rn */
	IF(0x0C0934BAu); r3 = T;  /* 0C0934BA movt Rn */
	r8 &= r3;  /* 0C0934BC and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0934BE tst Rm,Rn */
	if (T) { UPD(0x0C0934CAu, 11); goto L_0C0934CA; }  /* 0C0934C0 bt */
L_0C0934C2: BLKS(0x0C0934C2u);
	r0 = 0xA0u; UPD(0x0C0934C4u, 1);  /* 0C0934C2 mov.w @(disp,pc),Rn */
	IF(0x0C0934C4u); r11 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0934C6u, 1);  /* 0C0934C4 mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C0934C6 add #imm,Rn */
	IF(0x0C0934C8u); W8(r0 + r5, r11); UPD(0x0C0934CAu, 2);  /* 0C0934C8 mov.b Rm,@(r0,Rn) */
L_0C0934CA: BLKS(0x0C0934CAu);
	r10 = 0x86u; UPD(0x0C0934CCu, 1);  /* 0C0934CA mov.w @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C0934CEu, 1);  /* 0C0934CC mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C0934CE add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C0934D2u, 2);  /* 0C0934D0 mov.l @(disp,Rm),Rn */
	r6 = R32(r6); UPD(0x0C0934D4u, 1);  /* 0C0934D2 mov.l @Rm,Rn */
	r5 = R32(r5 + 0x28u); UPD(0x0C0934D6u, 1);  /* 0C0934D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0934D6u); { u32 t_ = r8; PR = 0x0C0934DAu; r7 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0934DAu); }  /* 0C0934D6 jsr @Rn */
L_0C0934DA: BLKS(0x0C0934DAu);
	W16(r10, r0); UPD(0x0C0934DCu, 1);  /* 0C0934DA mov.w Rm,@Rn */
L_0C0934DC: BLKS(0x0C0934DCu);
	{ IF(0x0C0934DEu); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C0934DC bra */
L_0C0934E0: BLKS(0x0C0934E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C093484u, 3); goto L_0C093484; }  /* 0C0934E0 bra */
L_0C0934F0: BLKS(0x0C0934F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C093474u, 3); goto L_0C093474; }  /* 0C0934F0 bra */
L_0C093500: BLKS(0x0C093500u);
	r2 = 0xB4u; UPD(0x0C093502u, 1);  /* 0C093500 mov.w @(disp,pc),Rn */
	IF(0x0C093502u); MACL = r10 * r2;  /* 0C093502 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C093506u, 3);  /* 0C093504 mov.l @(disp,pc),Rn */
	IF(0x0C093506u); r7 = MACL;  /* 0C093506 sts macl,Rn */
	r7 += r0;  /* 0C093508 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09350Cu, 3);  /* 0C09350A mov.w @(disp,pc),Rn */
	r6 = 0xFFFFF800u; UPD(0x0C09350Eu, 1);  /* 0C09350C mov.w @(disp,pc),Rn */
	IF(0x0C09350Eu); r3 = R32(r0 + r7); UPD(0x0C093510u, 1);  /* 0C09350E mov.l @(r0,Rm),Rn */
	r3 += r6;  /* 0C093510 add Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C093512 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C093516u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0934DCu, 5); goto L_0C0934DC; } UPD(0x0C093518u, 1); goto L_0C093518; }  /* 0C093514 bf/s */
L_0C093518: BLKS(0x0C093518u);
	r0 += 0x13u;  /* 0C093518 add #imm,Rn */
	IF(0x0C09351Au); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09351Cu, 2);  /* 0C09351A mov.b @(r0,Rm),Rn */
	r10 = 0xA0u; UPD(0x0C09351Eu, 1);  /* 0C09351C mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C09351E add #imm,Rn */
	r10 += r7;  /* 0C093520 add Rm,Rn */
	IF(0x0C093522u); W8(r0 + r7, r1); UPD(0x0C093524u, 3);  /* 0C093522 mov.b Rm,@(r0,Rn) */
	W8(r10, r3); UPD(0x0C093526u, 1);  /* 0C093524 mov.b Rm,@Rn */
	r7 += 0x50u;  /* 0C093526 add #imm,Rn */
	r10 += 0x3u;  /* 0C093528 add #imm,Rn */
	W32(r7, r3); UPD(0x0C09352Cu, 3);  /* 0C09352A mov.l Rm,@Rn */
	W8(r10, r3); UPD(0x0C09352Eu, 1);  /* 0C09352C mov.b Rm,@Rn */
L_0C09352E: BLKS(0x0C09352Eu);
	{ IF(0x0C093530u); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C09352E bra */
L_0C093540: BLKS(0x0C093540u);
	r5 = 0xB4u; UPD(0x0C093542u, 1);  /* 0C093540 mov.w @(disp,pc),Rn */
	IF(0x0C093542u); MACL = r10 * r5;  /* 0C093542 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093546u, 3);  /* 0C093544 mov.l @(disp,pc),Rn */
	IF(0x0C093546u); r7 = MACL;  /* 0C093546 sts macl,Rn */
	r3 = 0x98u; UPD(0x0C09354Au, 2);  /* 0C093548 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C09354A add Rm,Rn */
	r3 += r7;  /* 0C09354C add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C093550u, 3);  /* 0C09354E mov.b @Rm,Rn */
	r11 = 0xEFu; UPD(0x0C093552u, 1);  /* 0C093550 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C093552 add #imm,Rn */
	r8 = r9 & 0xFF;  /* 0C093554 extu.b Rm,Rn */
	T = r8 > r11;  /* 0C093556 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09352Eu, 6); goto L_0C09352E; } UPD(0x0C09355Cu, 1); goto L_0C09355C; }  /* 0C093558 bf/s */
L_0C09355C: BLKS(0x0C09355Cu);
	r6 = R32(r7); UPD(0x0C09355Eu, 1);  /* 0C09355C mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C09355E add #imm,Rn */
	r0 = 0xDFFFFFFFu; UPD(0x0C093562u, 2);  /* 0C093560 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C093562 mov #imm,Rn */
	r6 &= r0;  /* 0C093564 and Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C093568u, 3);  /* 0C093566 mov.w @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C09356Au, 1);  /* 0C093568 mov.b Rm,@Rn */
	IF(0x0C09356Au); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09356Cu, 1);  /* 0C09356A mov.b @(r0,Rm),Rn */
	r3 += 0x2u;  /* 0C09356C add #imm,Rn */
	W32(r7, r6); UPD(0x0C093570u, 2);  /* 0C09356E mov.l Rm,@Rn */
	IF(0x0C093570u); W8(r0 + r7, r3); UPD(0x0C093572u, 1);  /* 0C093570 mov.b Rm,@(r0,Rn) */
L_0C093572: BLKS(0x0C093572u);
	r3 = 0xC0AFCF0u; UPD(0x0C093574u, 1);  /* 0C093572 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C093574 mov Rm,Rn */
	IF(0x0C093576u); PR = R32(r15); r15 += 4; UPD(0x0C093578u, 2);  /* 0C093576 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09357Au, 1);  /* 0C093578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09357Cu, 1);  /* 0C09357A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09357Eu, 1);  /* 0C09357C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093580u, 1);  /* 0C09357E mov.l @Rm+,Rn */
	IF(0x0C093580u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFCF0u: TAIL(f_0C0AFCF0); default: JUMPD(tv_); } }  /* 0C093580 jmp @Rn */
L_0C093590: BLKS(0x0C093590u);
	r11 = 0xB4u; UPD(0x0C093592u, 1);  /* 0C093590 mov.w @(disp,pc),Rn */
	IF(0x0C093592u); MACL = r10 * r11;  /* 0C093592 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C093596u, 3);  /* 0C093594 mov.l @(disp,pc),Rn */
	IF(0x0C093596u); r3 = MACL;  /* 0C093596 sts macl,Rn */
	r3 += r7;  /* 0C093598 add Rm,Rn */
	r7 = 0x8Cu; UPD(0x0C09359Cu, 3);  /* 0C09359A mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09359C add Rm,Rn */
	r10 = R32(r7); UPD(0x0C0935A0u, 2);  /* 0C09359E mov.l @Rm,Rn */
	r1 = 0xF0u; UPD(0x0C0935A2u, 1);  /* 0C0935A0 mov.w @(disp,pc),Rn */
	IF(0x0C0935A2u); MACL = r10 * r1;  /* 0C0935A2 mul.l Rm,Rn */
	IF(0x0C0935A4u); r2 = MACL;  /* 0C0935A4 sts macl,Rn */
	IF(0x0C0935A6u); T = (s32)r2 >= 0;  /* 0C0935A6 cmp/pz Rn */
	if (!T) { UPD(0x0C093620u, 7); goto L_0C093620; }  /* 0C0935A8 bf */
L_0C0935AA: BLKS(0x0C0935AAu);
	r9 = 0xFFFFFFF8u;  /* 0C0935AA mov #imm,Rn */
	r0 = 0xA8u; UPD(0x0C0935AEu, 2);  /* 0C0935AC mov.w @(disp,pc),Rn */
	IF(0x0C0935AEu); ARG0(0x429Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0935AE shad Rm,Rn */
	IF(0x0C0935B0u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0935B2u, 2);  /* 0C0935B0 mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0935B2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09352Eu, 4); goto L_0C09352E; } UPD(0x0C0935B8u, 1); goto L_0C0935B8; }  /* 0C0935B4 bf/s */
L_0C0935B8: BLKS(0x0C0935B8u);
	r0 += 0xFFFFFFF7u;  /* 0C0935B8 add #imm,Rn */
	r5 = R32(r3); UPD(0x0C0935BCu, 2);  /* 0C0935BA mov.l @Rm,Rn */
	IF(0x0C0935BCu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0935BEu, 1);  /* 0C0935BC mov.b @(r0,Rm),Rn */
	r1 = 0xDFFFFFFFu; UPD(0x0C0935C0u, 1);  /* 0C0935BE mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0935C0 add #imm,Rn */
	r5 &= r1;  /* 0C0935C2 and Rm,Rn */
	W32(r3, r5); UPD(0x0C0935C6u, 3);  /* 0C0935C4 mov.l Rm,@Rn */
	{ IF(0x0C0935C8u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093572u, 3); goto L_0C093572; }  /* 0C0935C6 bra */
L_0C093620: BLKS(0x0C093620u);
	r1 += 0xFu;  /* 0C093620 add #imm,Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C0935AAu, 4); goto L_0C0935AA; }  /* 0C093622 bra */
L_0C093630: BLKS(0x0C093630u);
	r2 = 0xB4u; UPD(0x0C093632u, 1);  /* 0C093630 mov.w @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C093632 mov #imm,Rn */
	IF(0x0C093634u); MACL = r10 * r2;  /* 0C093634 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C093638u, 4);  /* 0C093636 mov.l @(disp,pc),Rn */
	IF(0x0C093638u); r0 = MACL;  /* 0C093638 sts macl,Rn */
	r11 += r0;  /* 0C09363A add Rm,Rn */
	r0 = 0xA0u; UPD(0x0C09363Eu, 3);  /* 0C09363C mov.w @(disp,pc),Rn */
	IF(0x0C09363Eu); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C093640u, 1);  /* 0C09363E mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C093640 extu.b Rm,Rn */
	T = r2 > r6;  /* 0C093642 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C093722u, 5); goto L_0C093722; }  /* 0C093644 bt */
L_0C093646: BLKS(0x0C093646u);
	r0 = 0xC093658u;  /* 0C093646 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C093648 add Rm,Rn */
	IF(0x0C09364Au); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09364Cu, 3);  /* 0C09364A mov.w @(r0,Rm),Rn */
	IF(0x0C09364Cu); { u32 tv_ = (r8 + 0x0C093650u); u32 t_ = PHYS(tv_); IF(0x0C09364Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0932A0u: goto L_0C0932A0; case 0x0C0933D0u: goto L_0C0933D0; case 0x0C093450u: goto L_0C093450; case 0x0C093680u: goto L_0C093680; case 0x0C0936C0u: goto L_0C0936C0; case 0x0C0936E0u: goto L_0C0936E0; case 0x0C093740u: goto L_0C093740; case 0x0C09376Au: goto L_0C09376A; case 0x0C0937B0u: goto L_0C0937B0; case 0x0C0937E0u: goto L_0C0937E0; case 0x0C093830u: goto L_0C093830; default: JUMPD(tv_); } }  /* 0C09364C braf Rn */
L_0C093680: BLKS(0x0C093680u);
	r9 = 0xC0A9E40u; UPD(0x0C093682u, 1);  /* 0C093680 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C093682 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C093684 mov #imm,Rn */
	IF(0x0C093686u); { u32 t_ = r9; PR = 0x0C09368Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09368Au); }  /* 0C093686 jsr @Rn */
L_0C09368A: BLKS(0x0C09368Au);
	T = (r0 & r0) == 0;  /* 0C09368A tst Rm,Rn */
	if (T) { UPD(0x0C093722u, 4); goto L_0C093722; }  /* 0C09368C bt */
L_0C09368E: BLKS(0x0C09368Eu);
	r6 = 0xB4u; UPD(0x0C093690u, 1);  /* 0C09368E mov.w @(disp,pc),Rn */
	IF(0x0C093690u); MACL = r10 * r6;  /* 0C093690 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C093694u, 3);  /* 0C093692 mov.l @(disp,pc),Rn */
	r11 = 0xC0AFE40u; UPD(0x0C093696u, 1);  /* 0C093694 mov.l @(disp,pc),Rn */
	IF(0x0C093696u); r8 = MACL;  /* 0C093696 sts macl,Rn */
	r5 = 0xA0u; UPD(0x0C09369Au, 2);  /* 0C093698 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C09369A add Rm,Rn */
	IF(0x0C09369Cu); { u32 t_ = r11; PR = 0x0C0936A0u; r8 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0936A0u); }  /* 0C09369C jsr @Rn */
L_0C0936A0: BLKS(0x0C0936A0u);
	r9 = r8;  /* 0C0936A0 mov Rm,Rn */
	r4 = 0xFFFFFFD0u;  /* 0C0936A2 mov #imm,Rn */
	r0 &= r4;  /* 0C0936A4 and Rm,Rn */
	r9 += 0x1u;  /* 0C0936A6 add #imm,Rn */
	r10 = (u32)(s32)(s8)r0;  /* 0C0936A8 exts.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0936AA tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0936B4u, 9); goto L_0C0936B4; } UPD(0x0C0936B0u, 1); goto L_0C0936B0; }  /* 0C0936AC bf/s */
L_0C0936B0: BLKS(0x0C0936B0u);
	r7 = 0x10u;  /* 0C0936B0 mov #imm,Rn */
	W8(r9, r7); UPD(0x0C0936B4u, 2);  /* 0C0936B2 mov.b Rm,@Rn */
L_0C0936B4: BLKS(0x0C0936B4u);
	{ r4 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C0932D8u, 3); goto L_0C0932D8; }  /* 0C0936B4 bra */
L_0C0936C0: BLKS(0x0C0936C0u);
	r8 = 0xB4u; UPD(0x0C0936C2u, 1);  /* 0C0936C0 mov.w @(disp,pc),Rn */
	IF(0x0C0936C2u); MACL = r10 * r8;  /* 0C0936C2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0936C6u, 3);  /* 0C0936C4 mov.l @(disp,pc),Rn */
	IF(0x0C0936C6u); r3 = MACL;  /* 0C0936C6 sts macl,Rn */
	r3 += r2;  /* 0C0936C8 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0936CCu, 3);  /* 0C0936CA mov.l @Rm,Rn */
	r0 = 0x20000000u; UPD(0x0C0936CEu, 1);  /* 0C0936CC mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0936CE tst Rm,Rn */
	if (!T) { UPD(0x0C0936D6u, 4); goto L_0C0936D6; }  /* 0C0936D0 bf */
L_0C0936D2: BLKS(0x0C0936D2u);
	{ IF(0x0C0936D4u); ; /* slot nop */ UPD(0x0C093250u, 3); goto L_0C093250; }  /* 0C0936D2 bra */
L_0C0936D6: BLKS(0x0C0936D6u);
	r11 = 0xC1F614Cu; UPD(0x0C0936D8u, 1);  /* 0C0936D6 mov.l @(disp,pc),Rn */
	r9 = R32(r3 + 0x24u); UPD(0x0C0936DAu, 1);  /* 0C0936D8 mov.l @(disp,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C0936DCu, 1);  /* 0C0936DA mov.l @(disp,pc),Rn */
	{ W32(r11, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C093260u, 3); goto L_0C093260; }  /* 0C0936DC bra */
L_0C0936E0: BLKS(0x0C0936E0u);
	r6 = 0xB4u; UPD(0x0C0936E2u, 1);  /* 0C0936E0 mov.w @(disp,pc),Rn */
	IF(0x0C0936E2u); MACL = r10 * r6;  /* 0C0936E2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0936E6u, 3);  /* 0C0936E4 mov.l @(disp,pc),Rn */
	IF(0x0C0936E6u); r7 = MACL;  /* 0C0936E6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0936EAu, 2);  /* 0C0936E8 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C0936EA add Rm,Rn */
	IF(0x0C0936ECu); r3 = R32(r0 + r7); UPD(0x0C0936EEu, 2);  /* 0C0936EC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0936EE tst Rm,Rn */
	if (T) { UPD(0x0C0936F6u, 4); goto L_0C0936F6; }  /* 0C0936F0 bt */
L_0C0936F2: BLKS(0x0C0936F2u);
	{ IF(0x0C0936F4u); ; /* slot nop */ UPD(0x0C093340u, 3); goto L_0C093340; }  /* 0C0936F2 bra */
L_0C0936F6: BLKS(0x0C0936F6u);
	r5 = 0xC1F6158u; UPD(0x0C0936F8u, 1);  /* 0C0936F6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0936FAu, 1);  /* 0C0936F8 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C0936FA cmp/eq #imm,r0 */
	if (T) { UPD(0x0C093710u, 4); goto L_0C093710; }  /* 0C0936FC bt */
L_0C0936FE: BLKS(0x0C0936FEu);
	r3 = r0;  /* 0C0936FE mov Rm,Rn */
	r3 += 0x1u;  /* 0C093700 add #imm,Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C093300u, 5); goto L_0C093300; }  /* 0C093702 bra */
L_0C093710: BLKS(0x0C093710u);
	r6 = 0x98u; UPD(0x0C093712u, 1);  /* 0C093710 mov.w @(disp,pc),Rn */
	r0 = 0x1Du;  /* 0C093712 mov #imm,Rn */
	r6 += r7;  /* 0C093714 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r6); UPD(0x0C093718u, 3);  /* 0C093716 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C093718 add #imm,Rn */
	r2 = r9 & 0xFF;  /* 0C09371A extu.b Rm,Rn */
	T = r2 > r0;  /* 0C09371C cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r6, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093726u, 6); goto L_0C093726; } UPD(0x0C093722u, 1); goto L_0C093722; }  /* 0C09371E bt/s */
L_0C093722: BLKS(0x0C093722u);
	{ IF(0x0C093724u); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093722 bra */
L_0C093726: BLKS(0x0C093726u);
	r6 += 0x1u;  /* 0C093726 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09372Au, 2);  /* 0C093728 mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C09372Cu, 1);  /* 0C09372A mov.w @(disp,pc),Rn */
	W8(r5, r3); UPD(0x0C09372Eu, 1);  /* 0C09372C mov.b Rm,@Rn */
	r2 += r7;  /* 0C09372E add Rm,Rn */
	r2 += 0x1u;  /* 0C093730 add #imm,Rn */
	W8(r2, r3); UPD(0x0C093734u, 3);  /* 0C093732 mov.b Rm,@Rn */
	{ r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09323Eu, 3); goto L_0C09323E; }  /* 0C093734 bra */
L_0C093740: BLKS(0x0C093740u);
	r9 = 0xC0A9E40u; UPD(0x0C093742u, 1);  /* 0C093740 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C093742 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C093744 mov #imm,Rn */
	IF(0x0C093746u); { u32 t_ = r9; PR = 0x0C09374Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09374Au); }  /* 0C093746 jsr @Rn */
L_0C09374A: BLKS(0x0C09374Au);
	T = (r0 & r0) == 0;  /* 0C09374A tst Rm,Rn */
	if (T) { UPD(0x0C0937AAu, 4); goto L_0C0937AA; }  /* 0C09374C bt */
L_0C09374E: BLKS(0x0C09374Eu);
	r2 = 0x20u;  /* 0C09374E mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C093752u, 2);  /* 0C093750 mov.w @(disp,pc),Rn */
	IF(0x0C093752u); MACL = r10 * r8;  /* 0C093752 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C093756u, 3);  /* 0C093754 mov.l @(disp,pc),Rn */
	IF(0x0C093756u); r3 = MACL;  /* 0C093756 sts macl,Rn */
	r11 = 0xA0u; UPD(0x0C09375Au, 2);  /* 0C093758 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C09375A add Rm,Rn */
	r3 += r11;  /* 0C09375C add Rm,Rn */
	r3 += 0x1u;  /* 0C09375E add #imm,Rn */
	W8(r3, r2); UPD(0x0C093762u, 4);  /* 0C093760 mov.b Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C093762 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C093766u, 2);  /* 0C093764 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C093766 add #imm,Rn */
	W8(r3, r0); UPD(0x0C09376Au, 2);  /* 0C093768 mov.b Rm,@Rn */
L_0C09376A: BLKS(0x0C09376Au);
	r9 = 0xB4u; UPD(0x0C09376Cu, 1);  /* 0C09376A mov.w @(disp,pc),Rn */
	IF(0x0C09376Cu); MACL = r10 * r9;  /* 0C09376C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093770u, 3);  /* 0C09376E mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C093772u, 1);  /* 0C093770 mov.w @(disp,pc),Rn */
	IF(0x0C093772u); r3 = MACL;  /* 0C093772 sts macl,Rn */
	r3 += r4;  /* 0C093774 add Rm,Rn */
	IF(0x0C093776u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C093778u, 3);  /* 0C093776 mov.b @(r0,Rm),Rn */
	r10 = 0xF0u; UPD(0x0C09377Au, 1);  /* 0C093778 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C09377A add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C09377C extu.b Rm,Rn */
	T = r5 == r10;  /* 0C09377E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C093782u); W8(r0 + r3, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0937AAu, 6); goto L_0C0937AA; } UPD(0x0C093784u, 1); goto L_0C093784; }  /* 0C093780 bf/s */
L_0C093784: BLKS(0x0C093784u);
	r6 = 0x0u;  /* 0C093784 mov #imm,Rn */
	IF(0x0C093786u); W8(r0 + r3, r6); UPD(0x0C093788u, 2);  /* 0C093786 mov.b Rm,@(r0,Rn) */
	r3 += 0x50u;  /* 0C093788 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C09378Cu, 2);  /* 0C09378A mov.l @Rm,Rn */
	r11 = 0x1C20u; UPD(0x0C09378Eu, 1);  /* 0C09378C mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r11;  /* 0C09378E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0937A0u, 4); goto L_0C0937A0; } goto L_0C093794; }  /* 0C093790 bf/s */
L_0C093794: BLKS(0x0C093794u);
	{ r0 += 0x7u; /* slot add #imm,Rn */ UPD(0x0C093380u, 4); goto L_0C093380; }  /* 0C093794 bra */
L_0C0937A0: BLKS(0x0C0937A0u);
	r0 = 0xA0u; UPD(0x0C0937A2u, 1);  /* 0C0937A0 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0937A2 add Rm,Rn */
	r0 += 0x1u;  /* 0C0937A4 add #imm,Rn */
	W8(r0, r6); UPD(0x0C0937A8u, 3);  /* 0C0937A6 mov.b Rm,@Rn */
	{ u32 v_ = r6; r0 -= 1; W8(r0, v_); } UPD(0x0C0937AAu, 1);  /* 0C0937A8 mov.b Rm,@-Rn */
L_0C0937AA: BLKS(0x0C0937AAu);
	{ IF(0x0C0937ACu); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C0937AA bra */
L_0C0937B0: BLKS(0x0C0937B0u);
	r5 = 0xB4u; UPD(0x0C0937B2u, 1);  /* 0C0937B0 mov.w @(disp,pc),Rn */
	IF(0x0C0937B2u); MACL = r10 * r5;  /* 0C0937B2 mul.l Rm,Rn */
	r6 = 0x300000u; UPD(0x0C0937B6u, 3);  /* 0C0937B4 mov.l @(disp,pc),Rn */
	r4 = 0xC1F614Cu; UPD(0x0C0937B8u, 1);  /* 0C0937B6 mov.l @(disp,pc),Rn */
	IF(0x0C0937B8u); r10 = MACL;  /* 0C0937B8 sts macl,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0937BCu, 2);  /* 0C0937BA mov.l @(disp,pc),Rn */
	W32(r4, r6); UPD(0x0C0937BEu, 1);  /* 0C0937BC mov.l Rm,@Rn */
	r10 += r7;  /* 0C0937BE add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C0937C2u, 2);  /* 0C0937C0 mov.l @(disp,Rm),Rn */
	r3 = 0xC1F6150u; UPD(0x0C0937C4u, 1);  /* 0C0937C2 mov.l @(disp,pc),Rn */
	r5 = r7;  /* 0C0937C4 mov Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C0937C8u, 2);  /* 0C0937C6 mov.l @(disp,pc),Rn */
	W32(r3, r7); UPD(0x0C0937CAu, 1);  /* 0C0937C8 mov.l Rm,@Rn */
	r8 = 0x86u; UPD(0x0C0937CCu, 1);  /* 0C0937CA mov.w @(disp,pc),Rn */
	IF(0x0C0937CCu); { u32 t_ = r9; PR = 0x0C0937D0u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0937D0u); }  /* 0C0937CC jsr @Rn */
L_0C0937D0: BLKS(0x0C0937D0u);
	r2 = 0xA0u; UPD(0x0C0937D2u, 1);  /* 0C0937D0 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0937D2 add Rm,Rn */
	r2 += r10;  /* 0C0937D4 add Rm,Rn */
	W16(r8, r0); UPD(0x0C0937D8u, 3);  /* 0C0937D6 mov.w Rm,@Rn */
	r2 += 0x3u;  /* 0C0937D8 add #imm,Rn */
	{ r1 = 0xFFFFFFD0u; /* slot mov #imm,Rn */ UPD(0x0C0933BCu, 4); goto L_0C0933BC; }  /* 0C0937DA bra */
L_0C0937E0: BLKS(0x0C0937E0u);
	r6 = 0xE00000u; UPD(0x0C0937E2u, 1);  /* 0C0937E0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0937E4u); ; /* slot nop */ UPD(0x0C093422u, 3); goto L_0C093422; }  /* 0C0937E2 bra */
L_0C093830: BLKS(0x0C093830u);
	r0 = 0xB4u; UPD(0x0C093832u, 1);  /* 0C093830 mov.w @(disp,pc),Rn */
	IF(0x0C093832u); MACL = r10 * r0;  /* 0C093832 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C093836u, 3);  /* 0C093834 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C093838u, 1);  /* 0C093836 mov.w @(disp,pc),Rn */
	IF(0x0C093838u); r3 = MACL;  /* 0C093838 sts macl,Rn */
	r3 += r2;  /* 0C09383A add Rm,Rn */
	IF(0x0C09383Cu); r7 = R32(r0 + r3); UPD(0x0C09383Eu, 3);  /* 0C09383C mov.l @(r0,Rm),Rn */
	r6 = 0xFFFFF800u; UPD(0x0C093840u, 1);  /* 0C09383E mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C093840 add Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C093842 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C093846u); W32(r0 + r3, r7); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0937AAu, 5); goto L_0C0937AA; } UPD(0x0C093848u, 1); goto L_0C093848; }  /* 0C093844 bf/s */
L_0C093848: BLKS(0x0C093848u);
	r0 += 0x13u;  /* 0C093848 add #imm,Rn */
	IF(0x0C09384Au); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09384Cu, 2);  /* 0C09384A mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C09384C add #imm,Rn */
	IF(0x0C09384Eu); W8(r0 + r3, r1); UPD(0x0C093850u, 2);  /* 0C09384E mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C093850 add #imm,Rn */
	IF(0x0C093852u); W8(r0 + r3, r7); UPD(0x0C093854u, 2);  /* 0C093852 mov.b Rm,@(r0,Rn) */
	r3 += 0x50u;  /* 0C093854 add #imm,Rn */
	W32(r3, r7); UPD(0x0C093858u, 2);  /* 0C093856 mov.l Rm,@Rn */
L_0C093858: BLKS(0x0C093858u);
	{ IF(0x0C09385Au); ; /* slot nop */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C093858 bra */
L_0C093860: BLKS(0x0C093860u);
	r8 = 0xB4u; UPD(0x0C093862u, 1);  /* 0C093860 mov.w @(disp,pc),Rn */
	IF(0x0C093862u); MACL = r10 * r8;  /* 0C093862 mul.l Rm,Rn */
	r3 = 0xA0u; UPD(0x0C093866u, 3);  /* 0C093864 mov.w @(disp,pc),Rn */
	r10 = 0xC26CD40u; UPD(0x0C093868u, 1);  /* 0C093866 mov.l @(disp,pc),Rn */
	IF(0x0C093868u); r7 = MACL;  /* 0C093868 sts macl,Rn */
	r7 += r10;  /* 0C09386A add Rm,Rn */
	r3 += r7;  /* 0C09386C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C093870u, 4);  /* 0C09386E mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C093870 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C093872 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0xFFFFFFD0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0938B0u, 5); goto L_0C0938B0; } goto L_0C093878; }  /* 0C093874 bt/s */
L_0C093878: BLKS(0x0C093878u);
	T = r0 == 0x1u;  /* 0C093878 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C093858u, 5); goto L_0C093858; }  /* 0C09387A bf */
L_0C09387C: BLKS(0x0C09387Cu);
	r0 = 0x8Cu; UPD(0x0C09387Eu, 1);  /* 0C09387C mov.w @(disp,pc),Rn */
	r3 = 0x7FFFu; UPD(0x0C093880u, 1);  /* 0C09387E mov.w @(disp,pc),Rn */
	IF(0x0C093880u); r2 = R32(r0 + r7); UPD(0x0C093882u, 1);  /* 0C093880 mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C093882 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09388Cu, 4); goto L_0C09388C; }  /* 0C093884 bt */
L_0C093886: BLKS(0x0C093886u);
	r6 = 0x200u; UPD(0x0C093888u, 1);  /* 0C093886 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C093888 add Rm,Rn */
	IF(0x0C09388Au); W32(r0 + r7, r2); UPD(0x0C09388Cu, 2);  /* 0C09388A mov.l Rm,@(r0,Rn) */
L_0C09388C: BLKS(0x0C09388Cu);
	r1 = R32(r7 + 0x24u); UPD(0x0C09388Eu, 1);  /* 0C09388C mov.l @(disp,Rm),Rn */
	r0 = 0xFFC00000u; UPD(0x0C093890u, 1);  /* 0C09388E mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C093890 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C093858u, 4); goto L_0C093858; }  /* 0C093892 bt */
L_0C093894: BLKS(0x0C093894u);
	r10 = 0x0u;  /* 0C093894 mov #imm,Rn */
	W32(r7, r10); UPD(0x0C093898u, 2);  /* 0C093896 mov.l Rm,@Rn */
	r7 = 0xC392AFEu; UPD(0x0C09389Au, 1);  /* 0C093898 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C09389Cu, 1);  /* 0C09389A mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09389C add #imm,Rn */
	W8(r7, r2); UPD(0x0C0938A0u, 2);  /* 0C09389E mov.b Rm,@Rn */
	r2 = 0xC392AFDu; UPD(0x0C0938A2u, 1);  /* 0C0938A0 mov.l @(disp,pc),Rn */
	{ r8 = (u32)(s32)(s8)R8(r2); /* slot mov.b @Rm,Rn */ UPD(0x0C093240u, 3); goto L_0C093240; }  /* 0C0938A2 bra */
L_0C0938B0: BLKS(0x0C0938B0u);
	r3 += 0x1u;  /* 0C0938B0 add #imm,Rn */
	W8(r3, r4); UPD(0x0C0938B4u, 2);  /* 0C0938B2 mov.b Rm,@Rn */
	r11 = r6;  /* 0C0938B4 mov Rm,Rn */
	r9 = 0x86u; UPD(0x0C0938B8u, 2);  /* 0C0938B6 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0938B8 mov Rm,Rn */
	r5 = 0x100u; UPD(0x0C0938BCu, 2);  /* 0C0938BA mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0938BC add #imm,Rn */
	IF(0x0C0938BEu); W16(r0 + r9, r5); UPD(0x0C0938C0u, 2);  /* 0C0938BE mov.w Rm,@(r0,Rn) */
	{ { u32 v_ = r11; r3 -= 1; W8(r3, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C093134u, 3); goto L_0C093134; }  /* 0C0938C0 bra */
L_0C0938D0: BLKS(0x0C0938D0u);
	r11 += 0x1u;  /* 0C0938D0 add #imm,Rn */
	{ W8(r7, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C093134u, 4); goto L_0C093134; }  /* 0C0938D2 bra */
}

/* FUN_0c093900 */
void f_0C093900(sh3_t *c)
{
	LOCALS;
L_0C093900: BLKS(0x0C093900u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C093902u, 1);  /* 0C093900 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C093904u, 1);  /* 0C093902 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C093906u, 1);  /* 0C093904 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C093908u, 1);  /* 0C093906 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09390Au, 1);  /* 0C093908 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C09390Cu, 1);  /* 0C09390A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C09390C exts.w Rm,Rn */
	IF(0x0C09390Eu); MACL = r12 * r5;  /* 0C09390E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093912u, 4);  /* 0C093910 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C093914u, 1);  /* 0C093912 mov.l Rm,@-Rn */
	IF(0x0C093914u); r0 = MACL;  /* 0C093914 sts macl,Rn */
	r0 += r4;  /* 0C093916 add Rm,Rn */
	IF(0x0C093918u); r15 -= 4; W32(r15, PR); UPD(0x0C09391Au, 3);  /* 0C093918 sts.l pr,@-Rn */
	r2 = r0;  /* 0C09391A mov Rm,Rn */
	r2 += 0x50u;  /* 0C09391C add #imm,Rn */
	r3 = R32(r2); UPD(0x0C093920u, 3);  /* 0C09391E mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C093920 add #imm,Rn */
	r7 = 0x9Fu; UPD(0x0C093924u, 2);  /* 0C093922 mov.w @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C093926u, 1);  /* 0C093924 mov.l Rm,@Rn */
	r7 += r0;  /* 0C093926 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C09392Au, 2);  /* 0C093928 mov.b @Rm,Rn */
	r0 = 0x3u;  /* 0C09392A mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C09392C extu.b Rm,Rn */
	T = r2 > r0;  /* 0C09392E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093938u, 6); goto L_0C093938; } goto L_0C093934; }  /* 0C093930 bf/s */
L_0C093934: BLKS(0x0C093934u);
	{ r0 = r3; /* slot mov Rm,Rn */ UPD(0x0C093CC0u, 4); goto L_0C093CC0; }  /* 0C093934 bra */
L_0C093938: BLKS(0x0C093938u);
	r0 = 0xC09394Cu;  /* 0C093938 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09393A add Rm,Rn */
	IF(0x0C09393Cu); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09393Eu, 3);  /* 0C09393C mov.w @(r0,Rm),Rn */
	IF(0x0C09393Eu); { u32 tv_ = (r6 + 0x0C093942u); u32 t_ = PHYS(tv_); IF(0x0C093940u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093960u: goto L_0C093960; case 0x0C093A00u: goto L_0C093A00; case 0x0C093A30u: goto L_0C093A30; case 0x0C093C80u: goto L_0C093C80; default: JUMPD(tv_); } }  /* 0C09393E braf Rn */
L_0C093960: BLKS(0x0C093960u);
	r8 = 0xC0A0540u; UPD(0x0C093962u, 1);  /* 0C093960 mov.l @(disp,pc),Rn */
	IF(0x0C093962u); { u32 t_ = r8; PR = 0x0C093966u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C093966u); }  /* 0C093962 jsr @Rn */
L_0C093966: BLKS(0x0C093966u);
	IF(0x0C093966u); T = (s32)r0 >= 0;  /* 0C093966 cmp/pz Rn */
	{ u32 c_ = !T; r9 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0939E0u, 4); goto L_0C0939E0; } goto L_0C09396C; }  /* 0C093968 bf/s */
L_0C09396C: BLKS(0x0C09396Cu);
	r6 = 0xB4u; UPD(0x0C09396Eu, 2);  /* 0C09396C mov.w @(disp,pc),Rn */
	IF(0x0C09396Eu); MACL = r12 * r6;  /* 0C09396E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093972u, 3);  /* 0C093970 mov.l @(disp,pc),Rn */
	IF(0x0C093972u); r5 = MACL;  /* 0C093972 sts macl,Rn */
	IF(0x0C093974u); MACL = r0 * r6;  /* 0C093974 mul.l Rm,Rn */
	r5 += r4;  /* 0C093976 add Rm,Rn */
	r7 = R32(r5 + 0x2Cu); UPD(0x0C09397Au, 5);  /* 0C093978 mov.l @(disp,Rm),Rn */
	IF(0x0C09397Au); r8 = MACL;  /* 0C09397A sts macl,Rn */
	r8 += r4;  /* 0C09397C add Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C093980u, 3);  /* 0C09397E mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C093982u, 1);  /* 0C093980 mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C093982 add Rm,Rn */
	r0 = R32(r5 + 0x30u); UPD(0x0C093986u, 2);  /* 0C093984 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C093986 add Rm,Rn */
	W32(r5 + 0x24u, r3); UPD(0x0C09398Au, 2);  /* 0C093988 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r12); UPD(0x0C09398Cu, 1);  /* 0C09398A mov.l Rm,@(disp,Rn) */
	r5 += 0x7Eu;  /* 0C09398C add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C093990u, 2);  /* 0C09398E mov.w @Rm,Rn */
	IF(0x0C093990u); MACL = r1 * r6;  /* 0C093990 mul.l Rm,Rn */
	r3 = 0x9Cu; UPD(0x0C093994u, 3);  /* 0C093992 mov.w @(disp,pc),Rn */
	IF(0x0C093994u); r11 = MACL;  /* 0C093994 sts macl,Rn */
	r11 += r4;  /* 0C093996 add Rm,Rn */
	r11 += r3;  /* 0C093998 add Rm,Rn */
	r11 += 0x3u;  /* 0C09399A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C09399Eu, 5);  /* 0C09399C mov.b @Rm,Rn */
	T = r10 > r9;  /* 0C09399E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0939C0u, 4); goto L_0C0939C0; } goto L_0C0939A4; }  /* 0C0939A0 bf/s */
L_0C0939A4: BLKS(0x0C0939A4u);
	r11 = r3;  /* 0C0939A4 mov Rm,Rn */
	r0 = 0xA0u; UPD(0x0C0939A8u, 3);  /* 0C0939A6 mov.w @(disp,pc),Rn */
	r11 += r5;  /* 0C0939A8 add Rm,Rn */
	r11 += 0x3u;  /* 0C0939AA add #imm,Rn */
	r10 = 0x0u;  /* 0C0939AC mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0939B0u, 4);  /* 0C0939AE mov.b @Rm,Rn */
	r2 = 0x0u;  /* 0C0939B0 mov #imm,Rn */
	IF(0x0C0939B2u); W8(r0 + r5, r10); UPD(0x0C0939B4u, 2);  /* 0C0939B2 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C0939B4 add #imm,Rn */
	r9 = 0xFFFE0000u; UPD(0x0C0939B8u, 2);  /* 0C0939B6 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFECu;  /* 0C0939B8 add #imm,Rn */
	W8(r11, r4); UPD(0x0C0939BCu, 2);  /* 0C0939BA mov.b Rm,@Rn */
	W32(r5 + 0x2Cu, r9); UPD(0x0C0939BEu, 1);  /* 0C0939BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0939BEu); W32(r0 + r5, r2); UPD(0x0C0939C0u, 1);  /* 0C0939BE mov.l Rm,@(r0,Rn) */
L_0C0939C0: BLKS(0x0C0939C0u);
	r15 = r14;  /* 0C0939C0 mov Rm,Rn */
	IF(0x0C0939C2u); PR = R32(r15); r15 += 4; UPD(0x0C0939C4u, 2);  /* 0C0939C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0939C6u, 1);  /* 0C0939C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0939C8u, 1);  /* 0C0939C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0939CAu, 1);  /* 0C0939C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0939CCu, 1);  /* 0C0939CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0939CEu, 1);  /* 0C0939CC mov.l @Rm+,Rn */
	IF(0x0C0939CEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0939CE rts */
L_0C0939E0: BLKS(0x0C0939E0u);
	r7 = 0xC7C2940u; UPD(0x0C0939E2u, 1);  /* 0C0939E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0939E2 mov Rm,Rn */
	r15 = r14;  /* 0C0939E4 mov Rm,Rn */
	IF(0x0C0939E6u); PR = R32(r15); r15 += 4; UPD(0x0C0939E8u, 3);  /* 0C0939E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0939EAu, 1);  /* 0C0939E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0939ECu, 1);  /* 0C0939EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0939EEu, 1);  /* 0C0939EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0939F0u, 1);  /* 0C0939EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0939F2u, 1);  /* 0C0939F0 mov.l @Rm+,Rn */
	IF(0x0C0939F2u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C092A70u: TAIL(f_0C092A70); case 0x0C7C2940u: TAIL(f_0C7C2940); default: JUMPD(tv_); } }  /* 0C0939F2 jmp @Rn */
L_0C093A00: BLKS(0x0C093A00u);
	r8 = 0xB4u; UPD(0x0C093A02u, 1);  /* 0C093A00 mov.w @(disp,pc),Rn */
	IF(0x0C093A02u); MACL = r12 * r8;  /* 0C093A02 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C093A06u, 3);  /* 0C093A04 mov.l @(disp,pc),Rn */
	IF(0x0C093A06u); r3 = MACL;  /* 0C093A06 sts macl,Rn */
	r3 += r0;  /* 0C093A08 add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C093A0Cu, 3);  /* 0C093A0A mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C093A0Eu, 1);  /* 0C093A0C mov.l @(disp,Rm),Rn */
	r5 = 0x1000u; UPD(0x0C093A10u, 1);  /* 0C093A0E mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C093A10 add Rm,Rn */
	r5 += r6;  /* 0C093A12 add Rm,Rn */
	W32(r3 + 0x24u, r12); UPD(0x0C093A16u, 3);  /* 0C093A14 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C093A16 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0939C0u, 4); goto L_0C0939C0; } UPD(0x0C093A1Cu, 1); goto L_0C093A1C; }  /* 0C093A18 bf/s */
L_0C093A1C: BLKS(0x0C093A1Cu);
	r0 = 0x9Fu; UPD(0x0C093A1Eu, 1);  /* 0C093A1C mov.w @(disp,pc),Rn */
	r9 = R32(r3); UPD(0x0C093A20u, 1);  /* 0C093A1E mov.l @Rm,Rn */
	IF(0x0C093A20u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C093A22u, 1);  /* 0C093A20 mov.b @(r0,Rm),Rn */
	r1 = 0xDFFFFFFFu; UPD(0x0C093A24u, 1);  /* 0C093A22 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C093A24 add #imm,Rn */
	r9 &= r1;  /* 0C093A26 and Rm,Rn */
	W32(r3, r9); UPD(0x0C093A2Au, 3);  /* 0C093A28 mov.l Rm,@Rn */
	{ IF(0x0C093A2Cu); W8(r0 + r3, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0939C0u, 3); goto L_0C0939C0; }  /* 0C093A2A bra */
L_0C093A30: BLKS(0x0C093A30u);
	r4 = 0xB4u; UPD(0x0C093A32u, 1);  /* 0C093A30 mov.w @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C093A32 mov #imm,Rn */
	IF(0x0C093A34u); MACL = r12 * r4;  /* 0C093A34 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C093A38u, 4);  /* 0C093A36 mov.l @(disp,pc),Rn */
	IF(0x0C093A38u); r2 = MACL;  /* 0C093A38 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C093A3Cu, 2);  /* 0C093A3A mov.w @(disp,pc),Rn */
	r11 += r2;  /* 0C093A3C add Rm,Rn */
	IF(0x0C093A3Eu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C093A40u, 2);  /* 0C093A3E mov.b @(r0,Rm),Rn */
	r2 = r10 & 0xFF;  /* 0C093A40 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C093A42 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C093A94u, 5); goto L_0C093A94; }  /* 0C093A44 bt */
L_0C093A46: BLKS(0x0C093A46u);
	r0 = 0xC093A70u;  /* 0C093A46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C093A48 add Rm,Rn */
	IF(0x0C093A4Au); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C093A4Cu, 3);  /* 0C093A4A mov.w @(r0,Rm),Rn */
	IF(0x0C093A4Cu); { u32 tv_ = (r5 + 0x0C093A50u); u32 t_ = PHYS(tv_); IF(0x0C093A4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093A80u: goto L_0C093A80; case 0x0C093AD0u: goto L_0C093AD0; case 0x0C093B10u: goto L_0C093B10; case 0x0C093BC0u: goto L_0C093BC0; default: JUMPD(tv_); } }  /* 0C093A4C braf Rn */
L_0C093A80: BLKS(0x0C093A80u);
	r8 = 0xB4u; UPD(0x0C093A82u, 1);  /* 0C093A80 mov.w @(disp,pc),Rn */
	IF(0x0C093A82u); MACL = r12 * r8;  /* 0C093A82 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C093A86u, 3);  /* 0C093A84 mov.l @(disp,pc),Rn */
	IF(0x0C093A86u); r2 = MACL;  /* 0C093A86 sts macl,Rn */
	r6 = 0xA0u; UPD(0x0C093A8Au, 2);  /* 0C093A88 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C093A8A add Rm,Rn */
	r2 += r6;  /* 0C093A8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C093A90u, 3);  /* 0C093A8E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C093A90 add #imm,Rn */
	W8(r2, r1); UPD(0x0C093A94u, 2);  /* 0C093A92 mov.b Rm,@Rn */
L_0C093A94: BLKS(0x0C093A94u);
	r6 = 0xB4u; UPD(0x0C093A96u, 1);  /* 0C093A94 mov.w @(disp,pc),Rn */
	IF(0x0C093A96u); MACL = r12 * r6;  /* 0C093A96 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C093A9Au, 3);  /* 0C093A98 mov.l @(disp,pc),Rn */
	IF(0x0C093A9Au); r12 = MACL;  /* 0C093A9A sts macl,Rn */
	r11 = 0x86u; UPD(0x0C093A9Eu, 2);  /* 0C093A9C mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C093A9E add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C093AA2u, 2);  /* 0C093AA0 mov.w @(disp,pc),Rn */
	r11 += r12;  /* 0C093AA2 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C093AA6u, 2);  /* 0C093AA4 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C093AA6 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C093AAAu, 2);  /* 0C093AA8 mov.w @Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C093AACu, 1);  /* 0C093AAA mov.l @(disp,pc),Rn */
	IF(0x0C093AACu); { u32 t_ = r10; PR = 0x0C093AB0u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C093AB0u); }  /* 0C093AAC jsr @Rn */
L_0C093AB0: BLKS(0x0C093AB0u);
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C093AB2u, 1);  /* 0C093AB0 mov.w @Rm,Rn */
	W32(r12 + 0x2Cu, r0); UPD(0x0C093AB4u, 1);  /* 0C093AB2 mov.l Rm,@(disp,Rn) */
	IF(0x0C093AB4u); { u32 t_ = r9; PR = 0x0C093AB8u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C093AB8u); }  /* 0C093AB4 jsr @Rn */
L_0C093AB8: BLKS(0x0C093AB8u);
	r3 = R32(r12 + 0x24u); UPD(0x0C093ABAu, 1);  /* 0C093AB8 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x28u); UPD(0x0C093ABCu, 1);  /* 0C093ABA mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x2Cu); UPD(0x0C093ABEu, 1);  /* 0C093ABC mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C093ABE add Rm,Rn */
	r3 += r1;  /* 0C093AC0 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C093AC4u, 3);  /* 0C093AC2 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r3); UPD(0x0C093AC6u, 1);  /* 0C093AC4 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0939C0u, 3); goto L_0C0939C0; }  /* 0C093AC6 bra */
L_0C093AD0: BLKS(0x0C093AD0u);
	r9 = 0xB4u; UPD(0x0C093AD2u, 1);  /* 0C093AD0 mov.w @(disp,pc),Rn */
	IF(0x0C093AD2u); MACL = r12 * r9;  /* 0C093AD2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093AD6u, 3);  /* 0C093AD4 mov.l @(disp,pc),Rn */
	IF(0x0C093AD6u); r9 = MACL;  /* 0C093AD6 sts macl,Rn */
	r9 += r4;  /* 0C093AD8 add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C093ADCu, 3);  /* 0C093ADA mov.l @(disp,pc),Rn */
	r11 = 0xC1F615Cu; UPD(0x0C093ADEu, 1);  /* 0C093ADC mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C093AE0u, 1);  /* 0C093ADE mov.l @(disp,Rm),Rn */
	r8 = 0xA0u; UPD(0x0C093AE2u, 1);  /* 0C093AE0 mov.w @(disp,pc),Rn */
	W32(r11, r2); UPD(0x0C093AE4u, 1);  /* 0C093AE2 mov.l Rm,@Rn */
	IF(0x0C093AE4u); { u32 t_ = r10; PR = 0x0C093AE8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093AE8u); }  /* 0C093AE4 jsr @Rn */
L_0C093AE8: BLKS(0x0C093AE8u);
	r10 = 0x1B0u; UPD(0x0C093AEAu, 1);  /* 0C093AE8 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C093AEA add Rm,Rn */
	r6 = R32(r11); UPD(0x0C093AEEu, 2);  /* 0C093AEC mov.l @Rm,Rn */
	r0 += r10;  /* 0C093AEE add Rm,Rn */
	r3 = 0xC1F6160u; UPD(0x0C093AF2u, 2);  /* 0C093AF0 mov.l @(disp,pc),Rn */
	IF(0x0C093AF2u); r0 <<= 16;  /* 0C093AF2 shll16 Rn */
	r11 = 0xC057390u; UPD(0x0C093AF6u, 2);  /* 0C093AF4 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C093AF6 mov Rm,Rn */
	W32(r3, r0); UPD(0x0C093AFAu, 2);  /* 0C093AF8 mov.l Rm,@Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C093AFCu, 1);  /* 0C093AFA mov.l @(disp,Rm),Rn */
	IF(0x0C093AFCu); { u32 t_ = r11; PR = 0x0C093B00u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C093B00u); }  /* 0C093AFC jsr @Rn */
L_0C093B00: BLKS(0x0C093B00u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C093B02u, 1);  /* 0C093B00 mov.b @Rm,Rn */
	r10 = 0x86u; UPD(0x0C093B04u, 1);  /* 0C093B02 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C093B04 add #imm,Rn */
	r10 += r9;  /* 0C093B06 add Rm,Rn */
	W16(r10, r0); UPD(0x0C093B0Au, 3);  /* 0C093B08 mov.w Rm,@Rn */
	{ W8(r8, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C093A94u, 3); goto L_0C093A94; }  /* 0C093B0A bra */
L_0C093B10: BLKS(0x0C093B10u);
	r5 = 0xB4u; UPD(0x0C093B12u, 1);  /* 0C093B10 mov.w @(disp,pc),Rn */
	IF(0x0C093B12u); MACL = r12 * r5;  /* 0C093B12 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C093B16u, 3);  /* 0C093B14 mov.l @(disp,pc),Rn */
	IF(0x0C093B16u); r5 = MACL;  /* 0C093B16 sts macl,Rn */
	r5 += r0;  /* 0C093B18 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C093B1Cu, 3);  /* 0C093B1A mov.w @(disp,pc),Rn */
	r6 = 0xFFFFu; UPD(0x0C093B1Eu, 1);  /* 0C093B1C mov.l @(disp,pc),Rn */
	IF(0x0C093B1Eu); r2 = R32(r0 + r5); UPD(0x0C093B20u, 1);  /* 0C093B1E mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C093B20 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C093B2Au, 4); goto L_0C093B2A; }  /* 0C093B22 bt */
L_0C093B24: BLKS(0x0C093B24u);
	r8 = 0x800u; UPD(0x0C093B26u, 1);  /* 0C093B24 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C093B26 add Rm,Rn */
	IF(0x0C093B28u); W32(r0 + r5, r2); UPD(0x0C093B2Au, 2);  /* 0C093B28 mov.l Rm,@(r0,Rn) */
L_0C093B2A: BLKS(0x0C093B2Au);
	r4 = R32(r5 + 0x24u); UPD(0x0C093B2Cu, 1);  /* 0C093B2A mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C093B2Eu, 1);  /* 0C093B2C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C093B2E add Rm,Rn */
	IF(0x0C093B30u); T = (s32)r2 >= 0;  /* 0C093B30 cmp/pz Rn */
	if (!T) { UPD(0x0C093BB0u, 5); goto L_0C093BB0; }  /* 0C093B32 bf */
L_0C093B34: BLKS(0x0C093B34u);
	r7 = 0x1E00000u; UPD(0x0C093B36u, 1);  /* 0C093B34 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C093B36 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C093B4Au, 4); goto L_0C093B4A; }  /* 0C093B38 bt */
L_0C093B3A: BLKS(0x0C093B3Au);
	r0 = R32(r5 + 0x28u); UPD(0x0C093B3Cu, 1);  /* 0C093B3A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C093B3Eu, 1);  /* 0C093B3C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C093B3E add Rm,Rn */
	IF(0x0C093B40u); T = (s32)r2 >= 0;  /* 0C093B40 cmp/pz Rn */
	if (!T) { UPD(0x0C093BA0u, 5); goto L_0C093BA0; }  /* 0C093B42 bf */
L_0C093B44: BLKS(0x0C093B44u);
	r11 = 0xC80000u; UPD(0x0C093B46u, 1);  /* 0C093B44 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C093B46 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C093B60u, 4); goto L_0C093B60; }  /* 0C093B48 bf */
L_0C093B4A: BLKS(0x0C093B4Au);
	r0 = 0xA0u; UPD(0x0C093B4Cu, 1);  /* 0C093B4A mov.w @(disp,pc),Rn */
	IF(0x0C093B4Cu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C093B4Eu, 1);  /* 0C093B4C mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C093B4E add #imm,Rn */
	{ IF(0x0C093B52u); W8(r0 + r5, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093A94u, 4); goto L_0C093A94; }  /* 0C093B50 bra */
L_0C093B60: BLKS(0x0C093B60u);
	r6 = 0xC1F615Cu; UPD(0x0C093B62u, 1);  /* 0C093B60 mov.l @(disp,pc),Rn */
	r9 = R32(r6); UPD(0x0C093B64u, 1);  /* 0C093B62 mov.l @Rm,Rn */
	r11 = 0x7FFFFu; UPD(0x0C093B66u, 1);  /* 0C093B64 mov.l @(disp,pc),Rn */
	r4 -= r9;  /* 0C093B66 sub Rm,Rn */
	r8 = 0xFFFFEu; UPD(0x0C093B6Au, 2);  /* 0C093B68 mov.l @(disp,pc),Rn */
	r4 += r11;  /* 0C093B6A add Rm,Rn */
	r9 = 0xC1F6160u; UPD(0x0C093B6Eu, 2);  /* 0C093B6C mov.l @(disp,pc),Rn */
	T = r8 >= r4;  /* 0C093B6E cmp/hs Rm,Rn */
	r4 = R32(r9); UPD(0x0C093B72u, 2);  /* 0C093B70 mov.l @Rm,Rn */
	IF(0x0C093B72u); r10 = T;  /* 0C093B72 movt Rn */
	r0 -= r4;  /* 0C093B74 sub Rm,Rn */
	r0 += r11;  /* 0C093B76 add Rm,Rn */
	T = r8 >= r0;  /* 0C093B78 cmp/hs Rm,Rn */
	IF(0x0C093B7Au); r2 = T;  /* 0C093B7A movt Rn */
	r10 &= r2;  /* 0C093B7C and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C093B7E tst Rm,Rn */
	if (T) { UPD(0x0C093B8Au, 10); goto L_0C093B8A; }  /* 0C093B80 bt */
L_0C093B82: BLKS(0x0C093B82u);
	r0 = 0xA0u; UPD(0x0C093B84u, 1);  /* 0C093B82 mov.w @(disp,pc),Rn */
	IF(0x0C093B84u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C093B86u, 1);  /* 0C093B84 mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C093B86 add #imm,Rn */
	IF(0x0C093B88u); W8(r0 + r5, r7); UPD(0x0C093B8Au, 2);  /* 0C093B88 mov.b Rm,@(r0,Rn) */
L_0C093B8A: BLKS(0x0C093B8Au);
	r10 = 0x86u; UPD(0x0C093B8Cu, 1);  /* 0C093B8A mov.w @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C093B8Eu, 1);  /* 0C093B8C mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C093B8E add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C093B92u, 2);  /* 0C093B90 mov.l @(disp,Rm),Rn */
	r6 = R32(r6); UPD(0x0C093B94u, 1);  /* 0C093B92 mov.l @Rm,Rn */
	r5 = R32(r5 + 0x28u); UPD(0x0C093B96u, 1);  /* 0C093B94 mov.l @(disp,Rm),Rn */
	IF(0x0C093B96u); { u32 t_ = r8; PR = 0x0C093B9Au; r7 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C093B9Au); }  /* 0C093B96 jsr @Rn */
L_0C093B9A: BLKS(0x0C093B9Au);
	{ W16(r10, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C093A94u, 3); goto L_0C093A94; }  /* 0C093B9A bra */
L_0C093BA0: BLKS(0x0C093BA0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C093B44u, 3); goto L_0C093B44; }  /* 0C093BA0 bra */
L_0C093BB0: BLKS(0x0C093BB0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C093B34u, 3); goto L_0C093B34; }  /* 0C093BB0 bra */
L_0C093BC0: BLKS(0x0C093BC0u);
	r0 = 0xB4u; UPD(0x0C093BC2u, 1);  /* 0C093BC0 mov.w @(disp,pc),Rn */
	IF(0x0C093BC2u); MACL = r12 * r0;  /* 0C093BC2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C093BC6u, 3);  /* 0C093BC4 mov.l @(disp,pc),Rn */
	IF(0x0C093BC6u); r7 = MACL;  /* 0C093BC6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C093BCAu, 2);  /* 0C093BC8 mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C093BCA add Rm,Rn */
	IF(0x0C093BCCu); r6 = R32(r0 + r7); UPD(0x0C093BCEu, 2);  /* 0C093BCC mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C093BCE tst Rm,Rn */
	if (T) { UPD(0x0C093BE0u, 4); goto L_0C093BE0; }  /* 0C093BD0 bt */
L_0C093BD2: BLKS(0x0C093BD2u);
	r5 = 0xFFFFF800u; UPD(0x0C093BD4u, 1);  /* 0C093BD2 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C093BD4 add Rm,Rn */
	IF(0x0C093BD6u); W32(r0 + r7, r6); UPD(0x0C093BD8u, 2);  /* 0C093BD6 mov.l Rm,@(r0,Rn) */
L_0C093BD8: BLKS(0x0C093BD8u);
	{ IF(0x0C093BDAu); ; /* slot nop */ UPD(0x0C093A94u, 3); goto L_0C093A94; }  /* 0C093BD8 bra */
L_0C093BE0: BLKS(0x0C093BE0u);
	r3 = 0x98u; UPD(0x0C093BE2u, 1);  /* 0C093BE0 mov.w @(disp,pc),Rn */
	r11 = 0x1Du;  /* 0C093BE2 mov #imm,Rn */
	r3 += r7;  /* 0C093BE4 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C093BE8u, 3);  /* 0C093BE6 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C093BE8 add #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C093BEA extu.b Rm,Rn */
	T = r2 > r11;  /* 0C093BEC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r3, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093BD8u, 6); goto L_0C093BD8; } UPD(0x0C093BF2u, 1); goto L_0C093BF2; }  /* 0C093BEE bf/s */
L_0C093BF2: BLKS(0x0C093BF2u);
	r3 += 0x1u;  /* 0C093BF2 add #imm,Rn */
	W8(r3, r6); UPD(0x0C093BF6u, 2);  /* 0C093BF4 mov.b Rm,@Rn */
	r7 += 0x50u;  /* 0C093BF6 add #imm,Rn */
	r1 = R32(r7); UPD(0x0C093BFAu, 2);  /* 0C093BF8 mov.l @Rm,Rn */
	r3 = 0x1C20u; UPD(0x0C093BFCu, 1);  /* 0C093BFA mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r3;  /* 0C093BFC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093C20u, 4); goto L_0C093C20; } goto L_0C093C02; }  /* 0C093BFE bf/s */
L_0C093C02: BLKS(0x0C093C02u);
	r9 = 0xA0u; UPD(0x0C093C04u, 2);  /* 0C093C02 mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C093C04 add Rm,Rn */
	r8 = r9;  /* 0C093C06 mov Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C093C0Au, 3);  /* 0C093C08 mov.w @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C093C0A add #imm,Rn */
	IF(0x0C093C0Cu); r10 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C093C0Eu, 2);  /* 0C093C0C mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C093C0E add #imm,Rn */
	W8(r9, r6); UPD(0x0C093C12u, 2);  /* 0C093C10 mov.b Rm,@Rn */
	r10 += 0x1u;  /* 0C093C12 add #imm,Rn */
	r9 += 0xFFFFFFFEu;  /* 0C093C14 add #imm,Rn */
	W8(r8, r6); UPD(0x0C093C18u, 3);  /* 0C093C16 mov.b Rm,@Rn */
	IF(0x0C093C18u); W8(r0 + r7, r10); UPD(0x0C093C1Au, 1);  /* 0C093C18 mov.b Rm,@(r0,Rn) */
	{ W8(r9, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C093A94u, 3); goto L_0C093A94; }  /* 0C093C1A bra */
L_0C093C20: BLKS(0x0C093C20u);
	r0 = 0xA0u; UPD(0x0C093C22u, 1);  /* 0C093C20 mov.w @(disp,pc),Rn */
	IF(0x0C093C22u); W8(r0 + r7, r6); UPD(0x0C093C24u, 1);  /* 0C093C22 mov.b Rm,@(r0,Rn) */
L_0C093C24: BLKS(0x0C093C24u);
	{ IF(0x0C093C26u); ; /* slot nop */ UPD(0x0C093A94u, 3); goto L_0C093A94; }  /* 0C093C24 bra */
L_0C093C80: BLKS(0x0C093C80u);
	r6 = 0xB4u; UPD(0x0C093C82u, 1);  /* 0C093C80 mov.w @(disp,pc),Rn */
	IF(0x0C093C82u); MACL = r12 * r6;  /* 0C093C82 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C093C86u, 3);  /* 0C093C84 mov.l @(disp,pc),Rn */
	IF(0x0C093C86u); r3 = MACL;  /* 0C093C86 sts macl,Rn */
	r2 = 0xA0u; UPD(0x0C093C8Au, 2);  /* 0C093C88 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C093C8A add Rm,Rn */
	r2 += r3;  /* 0C093C8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C093C90u, 3);  /* 0C093C8E mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C093C90 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C093C92 tst Rm,Rn */
	if (!T) { UPD(0x0C093C9Cu, 5); goto L_0C093C9C; }  /* 0C093C94 bf */
L_0C093C96: BLKS(0x0C093C96u);
	r1 += 0x1u;  /* 0C093C96 add #imm,Rn */
	{ W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C093A94u, 4); goto L_0C093A94; }  /* 0C093C98 bra */
L_0C093C9C: BLKS(0x0C093C9Cu);
	T = r0 == 0x1u;  /* 0C093C9C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C093C24u, 4); goto L_0C093C24; }  /* 0C093C9E bf */
L_0C093CA0: BLKS(0x0C093CA0u);
	r5 = R32(r3 + 0x24u); UPD(0x0C093CA2u, 1);  /* 0C093CA0 mov.l @(disp,Rm),Rn */
	r11 = 0xFFFF8000u; UPD(0x0C093CA4u, 1);  /* 0C093CA2 mov.w @(disp,pc),Rn */
	r0 = 0xFFC00000u; UPD(0x0C093CA6u, 1);  /* 0C093CA4 mov.l @(disp,pc),Rn */
	r5 += r11;  /* 0C093CA6 add Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C093CA8 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C093C24u, 5); goto L_0C093C24; } UPD(0x0C093CAEu, 1); goto L_0C093CAE; }  /* 0C093CAA bt/s */
L_0C093CAE: BLKS(0x0C093CAEu);
	r2 = 0x0u;  /* 0C093CAE mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C093A94u, 4); goto L_0C093A94; }  /* 0C093CB0 bra */
L_0C093CC0: BLKS(0x0C093CC0u);
	r0 += 0x1u;  /* 0C093CC0 add #imm,Rn */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0939C0u, 4); goto L_0C0939C0; }  /* 0C093CC2 bra */
}

void f_0C093CE0(sh3_t *c)
{
	LOCALS;
L_0C093CE0: BLKS(0x0C093CE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C093CE2u, 1);  /* 0C093CE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C093CE4u, 1);  /* 0C093CE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C093CE6u, 1);  /* 0C093CE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C093CE8u, 1);  /* 0C093CE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C093CEAu, 1);  /* 0C093CE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C093CECu, 1);  /* 0C093CEA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C093CEEu, 1);  /* 0C093CEC mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C093CEE exts.w Rm,Rn */
	IF(0x0C093CF0u); MACL = r13 * r3;  /* 0C093CF0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C093CF4u, 4);  /* 0C093CF2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C093CF6u, 1);  /* 0C093CF4 mov.l @(disp,pc),Rn */
	IF(0x0C093CF6u); r2 = MACL;  /* 0C093CF6 sts macl,Rn */
	IF(0x0C093CF8u); r15 -= 4; W32(r15, PR); UPD(0x0C093CFAu, 2);  /* 0C093CF8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C093CFA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C093CFEu, 2);  /* 0C093CFC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C093CFE add #imm,Rn */
	r0 = 0x26u;  /* 0C093D00 mov #imm,Rn */
	T = r2 > r0;  /* 0C093D02 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C093D9Cu, 6); goto L_0C093D9C; } goto L_0C093D08; }  /* 0C093D04 bt/s */
L_0C093D08: BLKS(0x0C093D08u);
	r0 = 0xC093D18u;  /* 0C093D08 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C093D0A add Rm,Rn */
	IF(0x0C093D0Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C093D0Eu, 4);  /* 0C093D0C mov.w @(r0,Rm),Rn */
	IF(0x0C093D0Eu); { u32 tv_ = (r4 + 0x0C093D12u); u32 t_ = PHYS(tv_); IF(0x0C093D10u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D70u: goto L_0C093D70; case 0x0C093E50u: goto L_0C093E50; case 0x0C093F20u: goto L_0C093F20; case 0x0C0940D0u: goto L_0C0940D0; case 0x0C0941A0u: goto L_0C0941A0; case 0x0C094280u: goto L_0C094280; case 0x0C094490u: goto L_0C094490; case 0x0C0947D0u: goto L_0C0947D0; case 0x0C094910u: goto L_0C094910; case 0x0C094970u: goto L_0C094970; case 0x0C094A70u: goto L_0C094A70; case 0x0C094B10u: goto L_0C094B10; case 0x0C094B60u: goto L_0C094B60; case 0x0C094CC0u: goto L_0C094CC0; case 0x0C094EC0u: goto L_0C094EC0; case 0x0C094F50u: goto L_0C094F50; case 0x0C095010u: goto L_0C095010; case 0x0C0950A0u: goto L_0C0950A0; case 0x0C0952D0u: goto L_0C0952D0; case 0x0C095400u: goto L_0C095400; case 0x0C095620u: goto L_0C095620; case 0x0C0958E0u: goto L_0C0958E0; case 0x0C095AB0u: goto L_0C095AB0; case 0x0C095CB0u: goto L_0C095CB0; case 0x0C095D40u: goto L_0C095D40; case 0x0C095E90u: goto L_0C095E90; default: JUMPD(tv_); } }  /* 0C093D0E braf Rn */
L_0C093D70: BLKS(0x0C093D70u);
	r6 = 0xB4u; UPD(0x0C093D72u, 1);  /* 0C093D70 mov.w @(disp,pc),Rn */
	IF(0x0C093D72u); MACL = r13 * r6;  /* 0C093D72 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C093D76u, 3);  /* 0C093D74 mov.l @(disp,pc),Rn */
	IF(0x0C093D76u); r10 = MACL;  /* 0C093D76 sts macl,Rn */
	r10 += r5;  /* 0C093D78 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C093D7A add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C093D7Eu, 4);  /* 0C093D7C mov.w @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C093D7E tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093E10u, 4); goto L_0C093E10; } goto L_0C093D84; }  /* 0C093D80 bf/s */
L_0C093D84: BLKS(0x0C093D84u);
	r12 = 0xC0A1700u; UPD(0x0C093D86u, 2);  /* 0C093D84 mov.l @(disp,pc),Rn */
	IF(0x0C093D86u); { u32 t_ = r12; PR = 0x0C093D8Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C093D8Au); }  /* 0C093D86 jsr @Rn */
L_0C093D8A: BLKS(0x0C093D8Au);
	r0 = 0x98u; UPD(0x0C093D8Cu, 1);  /* 0C093D8A mov.w @(disp,pc),Rn */
	r7 = 0x2u;  /* 0C093D8C mov #imm,Rn */
	IF(0x0C093D8Eu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C093D90u, 2);  /* 0C093D8E mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C093D90 add #imm,Rn */
	r9 = r11 & 0xFF;  /* 0C093D92 extu.b Rm,Rn */
	T = r9 > r7;  /* 0C093D94 cmp/hi Rm,Rn */
	{ u32 c_ = T; IF(0x0C093D98u); W8(r0 + r10, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C093DC0u, 6); goto L_0C093DC0; } UPD(0x0C093D9Au, 1); goto L_0C093D9A; }  /* 0C093D96 bt/s */
L_0C093D9A: BLKS(0x0C093D9Au);
	IF(0x0C093D9Au); ;  /* 0C093D9A nop */
	UPD(0x0C093D9Cu, 1);
L_0C093D9C: BLKS(0x0C093D9Cu);
	r14 += 0x20u;  /* 0C093D9C add #imm,Rn */
	UPD(0x0C093D9Eu, 1);
L_0C093D9E: BLKS(0x0C093D9Eu);
	r15 = r14;  /* 0C093D9E mov Rm,Rn */
	IF(0x0C093DA0u); PR = R32(r15); r15 += 4; UPD(0x0C093DA2u, 2);  /* 0C093DA0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093DA4u, 1);  /* 0C093DA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C093DA6u, 1);  /* 0C093DA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C093DA8u, 1);  /* 0C093DA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C093DAAu, 1);  /* 0C093DA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C093DACu, 1);  /* 0C093DAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093DAEu, 1);  /* 0C093DAC mov.l @Rm+,Rn */
	IF(0x0C093DAEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C093DAE rts */
L_0C093DC0: BLKS(0x0C093DC0u);
	r11 = 0xC050D70u; UPD(0x0C093DC2u, 1);  /* 0C093DC0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C093DC2 add #imm,Rn */
	IF(0x0C093DC4u); W8(r0 + r10, r8); UPD(0x0C093DC6u, 2);  /* 0C093DC4 mov.b Rm,@(r0,Rn) */
	r13 = 0xC1C81C4u; UPD(0x0C093DC8u, 1);  /* 0C093DC6 mov.l @(disp,pc),Rn */
	IF(0x0C093DC8u); { u32 t_ = r11; PR = 0x0C093DCCu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093DCCu); }  /* 0C093DC8 jsr @Rn */
L_0C093DCC: BLKS(0x0C093DCCu);
	IF(0x0C093DCCu); r0 <<= 2;  /* 0C093DCC shll2 Rn */
	r13 += r0;  /* 0C093DCE add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C093DD2u, 3);  /* 0C093DD0 mov.w @(disp,pc),Rn */
	IF(0x0C093DD2u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C093DD4u, 1);  /* 0C093DD2 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C093DD4 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C093DD8u, 2);  /* 0C093DD6 mov.l Rm,@Rn */
	r0 = r10;  /* 0C093DD8 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C093DDCu, 2);  /* 0C093DDA mov.w @(disp,pc),Rn */
	IF(0x0C093DDCu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C093DDEu, 1);  /* 0C093DDC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C093DDE extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C093DE2u, 2);  /* 0C093DE0 mov.l Rm,@(disp,Rn) */
	r0 = 0xFFFA0000u; UPD(0x0C093DE4u, 1);  /* 0C093DE2 mov.l @(disp,pc),Rn */
	r4 = 0x2000u; UPD(0x0C093DE6u, 1);  /* 0C093DE4 mov.w @(disp,pc),Rn */
	IF(0x0C093DE6u); { u32 t_ = r11; PR = 0x0C093DEAu; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093DEAu); }  /* 0C093DE6 jsr @Rn */
L_0C093DEA: BLKS(0x0C093DEAu);
	r3 = 0xFFFFF000u; UPD(0x0C093DECu, 1);  /* 0C093DEA mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C093DEC mov #imm,Rn */
	r0 += r3;  /* 0C093DEE add Rm,Rn */
	IF(0x0C093DF0u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C093DF0 shld Rm,Rn */
	r8 = 0xC7C1F94u; UPD(0x0C093DF4u, 4);  /* 0C093DF2 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C093DF6u, 1);  /* 0C093DF4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C093DF8u, 1);  /* 0C093DF6 mov.l @Rm,Rn */
	r5 = R32(r13); UPD(0x0C093DFAu, 1);  /* 0C093DF8 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C093DFCu, 1);  /* 0C093DFA mov.l @(disp,Rm),Rn */
	IF(0x0C093DFCu); { u32 t_ = r8; PR = 0x0C093E00u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1F94, 0x0C7C1F94u, 0x0C093E00u); }  /* 0C093DFC jsr @Rn */
L_0C093E00: BLKS(0x0C093E00u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C093D9Cu, 3); goto L_0C093D9C; }  /* 0C093E00 bra */
L_0C093E10: BLKS(0x0C093E10u);
	r2 = 0xC0930B0u; UPD(0x0C093E12u, 1);  /* 0C093E10 mov.l @(disp,pc),Rn */
	r12 = 0x86u; UPD(0x0C093E14u, 1);  /* 0C093E12 mov.w @(disp,pc),Rn */
	IF(0x0C093E14u); { u32 t_ = r2; PR = 0x0C093E18u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0930B0, 0x0C0930B0u, 0x0C093E18u); }  /* 0C093E14 jsr @Rn */
L_0C093E18: BLKS(0x0C093E18u);
	r11 = 0x8Cu; UPD(0x0C093E1Au, 1);  /* 0C093E18 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C093E1A add Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C093E1Eu, 2);  /* 0C093E1C mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C093E1E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C093E22u, 2);  /* 0C093E20 mov.w @Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C093E24u, 1);  /* 0C093E22 mov.l @(disp,pc),Rn */
	IF(0x0C093E24u); { u32 t_ = r9; PR = 0x0C093E28u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C093E28u); }  /* 0C093E24 jsr @Rn */
L_0C093E28: BLKS(0x0C093E28u);
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C093E2Au, 1);  /* 0C093E28 mov.w @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C093E2Cu, 1);  /* 0C093E2A mov.l Rm,@(disp,Rn) */
	IF(0x0C093E2Cu); { u32 t_ = r13; PR = 0x0C093E30u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C093E30u); }  /* 0C093E2C jsr @Rn */
L_0C093E30: BLKS(0x0C093E30u);
	r8 = R32(r10 + 0x24u); UPD(0x0C093E32u, 1);  /* 0C093E30 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C093E34u, 1);  /* 0C093E32 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x2Cu); UPD(0x0C093E36u, 1);  /* 0C093E34 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C093E36 add Rm,Rn */
	r8 += r1;  /* 0C093E38 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C093E3Cu, 3);  /* 0C093E3A mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x24u, r8); UPD(0x0C093E3Eu, 1);  /* 0C093E3C mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r12); UPD(0x0C093E40u, 1);  /* 0C093E3E mov.l Rm,@(disp,Rn) */
L_0C093E40: BLKS(0x0C093E40u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C093E40 bra */
L_0C093E50: BLKS(0x0C093E50u);
	r10 = 0xC0A0540u; UPD(0x0C093E52u, 1);  /* 0C093E50 mov.l @(disp,pc),Rn */
	IF(0x0C093E52u); { u32 t_ = r10; PR = 0x0C093E56u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C093E56u); }  /* 0C093E52 jsr @Rn */
L_0C093E56: BLKS(0x0C093E56u);
	IF(0x0C093E56u); T = (s32)r0 >= 0;  /* 0C093E56 cmp/pz Rn */
	if (!T) { UPD(0x0C093ED0u, 4); goto L_0C093ED0; }  /* 0C093E58 bf */
L_0C093E5A: BLKS(0x0C093E5Au);
	r6 = 0xB4u; UPD(0x0C093E5Cu, 1);  /* 0C093E5A mov.w @(disp,pc),Rn */
	IF(0x0C093E5Cu); MACL = r13 * r6;  /* 0C093E5C mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C093E60u, 3);  /* 0C093E5E mov.l @(disp,pc),Rn */
	IF(0x0C093E60u); r5 = MACL;  /* 0C093E60 sts macl,Rn */
	IF(0x0C093E62u); MACL = r0 * r6;  /* 0C093E62 mul.l Rm,Rn */
	r5 += r12;  /* 0C093E64 add Rm,Rn */
	r8 = R32(r5 + 0x2Cu); UPD(0x0C093E68u, 5);  /* 0C093E66 mov.l @(disp,Rm),Rn */
	IF(0x0C093E68u); r4 = MACL;  /* 0C093E68 sts macl,Rn */
	r4 += r12;  /* 0C093E6A add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C093E6Eu, 3);  /* 0C093E6C mov.l @(disp,Rm),Rn */
	r10 = R32(r4 + 0x28u); UPD(0x0C093E70u, 1);  /* 0C093E6E mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C093E70 add Rm,Rn */
	r1 = R32(r5 + 0x30u); UPD(0x0C093E74u, 2);  /* 0C093E72 mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C093E74 add Rm,Rn */
	W32(r5 + 0x24u, r3); UPD(0x0C093E78u, 2);  /* 0C093E76 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r10); UPD(0x0C093E7Au, 1);  /* 0C093E78 mov.l Rm,@(disp,Rn) */
	r5 += 0x7Eu;  /* 0C093E7A add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C093E7Eu, 2);  /* 0C093E7C mov.w @Rm,Rn */
	r5 += 0xFFFFFF82u;  /* 0C093E7E add #imm,Rn */
	r8 = R32(r5); UPD(0x0C093E82u, 2);  /* 0C093E80 mov.l @Rm,Rn */
	IF(0x0C093E82u); MACL = r11 * r6;  /* 0C093E82 mul.l Rm,Rn */
	r9 = 0xCCFFFEFFu; UPD(0x0C093E86u, 3);  /* 0C093E84 mov.l @(disp,pc),Rn */
	r8 &= r9;  /* 0C093E86 and Rm,Rn */
	W32(r5, r8); UPD(0x0C093E8Au, 2);  /* 0C093E88 mov.l Rm,@Rn */
	IF(0x0C093E8Au); r0 = MACL;  /* 0C093E8A sts macl,Rn */
	IF(0x0C093E8Cu); r7 = R32(r0 + r12); UPD(0x0C093E8Eu, 2);  /* 0C093E8C mov.l @(r0,Rm),Rn */
	r0 = 0x33000100u; UPD(0x0C093E90u, 1);  /* 0C093E8E mov.l @(disp,pc),Rn */
	r7 &= r0;  /* 0C093E90 and Rm,Rn */
	r8 |= r7;  /* 0C093E92 or Rm,Rn */
	r3 = R32(r5 + 0xCu); UPD(0x0C093E96u, 3);  /* 0C093E94 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C093E96 tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C093E40u, 4); goto L_0C093E40; } UPD(0x0C093E9Cu, 1); goto L_0C093E9C; }  /* 0C093E98 bf/s */
L_0C093E9C: BLKS(0x0C093E9Cu);
	r4 += 0x3Cu;  /* 0C093E9C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C093EA0u, 2);  /* 0C093E9E mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C093EA0 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C093E40u, 4); goto L_0C093E40; } UPD(0x0C093EA6u, 1); goto L_0C093EA6; }  /* 0C093EA2 bf/s */
L_0C093EA6: BLKS(0x0C093EA6u);
	W32(r5 + 0xCu, r1); UPD(0x0C093EA8u, 1);  /* 0C093EA6 mov.l Rm,@(disp,Rn) */
L_0C093EA8: BLKS(0x0C093EA8u);
	r1 = 0xC0A0380u; UPD(0x0C093EAAu, 1);  /* 0C093EA8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C093EAA mov Rm,Rn */
	UPD(0x0C093EACu, 1);
L_0C093EAC: BLKS(0x0C093EACu);
	r14 += 0x20u;  /* 0C093EAC add #imm,Rn */
	UPD(0x0C093EAEu, 1);
L_0C093EAE: BLKS(0x0C093EAEu);
	r15 = r14;  /* 0C093EAE mov Rm,Rn */
	IF(0x0C093EB0u); PR = R32(r15); r15 += 4; UPD(0x0C093EB2u, 2);  /* 0C093EB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C093EB4u, 1);  /* 0C093EB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C093EB6u, 1);  /* 0C093EB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C093EB8u, 1);  /* 0C093EB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C093EBAu, 1);  /* 0C093EB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C093EBCu, 1);  /* 0C093EBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C093EBEu, 1);  /* 0C093EBC mov.l @Rm+,Rn */
	IF(0x0C093EBEu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C092A70u: TAIL(f_0C092A70); case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C093EBE jmp @Rn */
L_0C093ED0: BLKS(0x0C093ED0u);
	r1 = 0xC7C2940u; UPD(0x0C093ED2u, 1);  /* 0C093ED0 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C093EACu, 3); goto L_0C093EAC; }  /* 0C093ED2 bra */
L_0C093F20: BLKS(0x0C093F20u);
	r7 = 0xC7C1FF8u; UPD(0x0C093F22u, 1);  /* 0C093F20 mov.l @(disp,pc),Rn */
	IF(0x0C093F22u); { u32 t_ = r7; PR = 0x0C093F26u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1FF8, 0x0C7C1FF8u, 0x0C093F26u); }  /* 0C093F22 jsr @Rn */
L_0C093F26: BLKS(0x0C093F26u);
	r5 = 0xB4u; UPD(0x0C093F28u, 1);  /* 0C093F26 mov.w @(disp,pc),Rn */
	IF(0x0C093F28u); MACL = r13 * r5;  /* 0C093F28 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C093F2Cu, 3);  /* 0C093F2A mov.l @(disp,pc),Rn */
	IF(0x0C093F2Cu); r3 = MACL;  /* 0C093F2C sts macl,Rn */
	r3 += r4;  /* 0C093F2E add Rm,Rn */
	r3 += 0x3Cu;  /* 0C093F30 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C093F34u, 4);  /* 0C093F32 mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C093F34 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093FF0u, 4); goto L_0C093FF0; } goto L_0C093F3A; }  /* 0C093F36 bf/s */
L_0C093F3A: BLKS(0x0C093F3Au);
	r0 = 0x98u; UPD(0x0C093F3Cu, 2);  /* 0C093F3A mov.w @(disp,pc),Rn */
	r13 = 0x2u;  /* 0C093F3C mov #imm,Rn */
	IF(0x0C093F3Eu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C093F40u, 2);  /* 0C093F3E mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C093F40 add #imm,Rn */
	r6 = r11 & 0xFF;  /* 0C093F42 extu.b Rm,Rn */
	T = r6 > r13;  /* 0C093F44 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C093F48u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C093FE8u, 6); goto L_0C093FE8; } UPD(0x0C093F4Au, 1); goto L_0C093F4A; }  /* 0C093F46 bf/s */
L_0C093F4A: BLKS(0x0C093F4Au);
	r10 = 0xC050D70u; UPD(0x0C093F4Cu, 1);  /* 0C093F4A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C093F4C add #imm,Rn */
	IF(0x0C093F4Eu); W8(r0 + r3, r12); UPD(0x0C093F50u, 2);  /* 0C093F4E mov.b Rm,@(r0,Rn) */
	r4 = 0x4u;  /* 0C093F50 mov #imm,Rn */
	IF(0x0C093F52u); { u32 t_ = r10; PR = 0x0C093F56u; W32(r14 + 0x1Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093F56u); }  /* 0C093F52 jsr @Rn */
L_0C093F56: BLKS(0x0C093F56u);
	r6 = R32(r14 + 0x1Cu); UPD(0x0C093F58u, 1);  /* 0C093F56 mov.l @(disp,Rm),Rn */
	IF(0x0C093F58u); r0 <<= 2;  /* 0C093F58 shll2 Rn */
	r8 = R32(r6 + 0x24u); UPD(0x0C093F5Cu, 2);  /* 0C093F5A mov.l @(disp,Rm),Rn */
	r13 = 0x100000u; UPD(0x0C093F5Eu, 1);  /* 0C093F5C mov.l @(disp,pc),Rn */
	r8 += r13;  /* 0C093F5E add Rm,Rn */
	r9 = 0xC1C81C4u; UPD(0x0C093F62u, 2);  /* 0C093F60 mov.l @(disp,pc),Rn */
	r13 = 0xB0u; UPD(0x0C093F64u, 1);  /* 0C093F62 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C093F64 add Rm,Rn */
	r13 += r6;  /* 0C093F66 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C093F6Au, 3);  /* 0C093F68 mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C093F6A extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C093F6Eu, 2);  /* 0C093F6C mov.l Rm,@Rn */
	r11 = 0xA8u; UPD(0x0C093F70u, 1);  /* 0C093F6E mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C093F70 add Rm,Rn */
	r11 += 0x1u;  /* 0C093F72 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C093F76u, 3);  /* 0C093F74 mov.b @Rm,Rn */
	r4 = 0xFFFA0000u; UPD(0x0C093F78u, 1);  /* 0C093F76 mov.l @(disp,pc),Rn */
	r5 = r7 & 0xFF;  /* 0C093F78 extu.b Rm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C093F7Cu, 2);  /* 0C093F7A mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C093F7Eu, 1);  /* 0C093F7C mov.w @(disp,pc),Rn */
	IF(0x0C093F7Eu); { u32 t_ = r10; PR = 0x0C093F82u; W32(r15 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C093F82u); }  /* 0C093F7E jsr @Rn */
L_0C093F82: BLKS(0x0C093F82u);
	r2 = 0xFFFFF000u; UPD(0x0C093F84u, 1);  /* 0C093F82 mov.w @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C093F84 mov #imm,Rn */
	r0 += r2;  /* 0C093F86 add Rm,Rn */
	IF(0x0C093F88u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C093F88 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C093F8Cu, 4);  /* 0C093F8A mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C093F8C mov Rm,Rn */
	r10 = 0xC0AC3B0u; UPD(0x0C093F90u, 2);  /* 0C093F8E mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C093F92u, 1);  /* 0C093F90 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C093F94u, 1);  /* 0C093F92 mov.l @Rm,Rn */
	r4 = R32(r1); UPD(0x0C093F96u, 1);  /* 0C093F94 mov.l @Rm,Rn */
	IF(0x0C093F96u); { u32 t_ = r10; PR = 0x0C093F9Au; r7 = R32(r1 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C093F9Au); }  /* 0C093F96 jsr @Rn */
L_0C093F9A: BLKS(0x0C093F9Au);
	r3 = R32(r14 + 0x1Cu); UPD(0x0C093F9Cu, 1);  /* 0C093F9A mov.l @(disp,Rm),Rn */
	r0 = 0x9Cu; UPD(0x0C093F9Eu, 1);  /* 0C093F9C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C093F9E add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C093FA2u, 2);  /* 0C093FA0 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C093FA2 add #imm,Rn */
	W8(r0, r9); UPD(0x0C093FA6u, 2);  /* 0C093FA4 mov.b Rm,@Rn */
	r0 = r9 & 0xFF;  /* 0C093FA6 extu.b Rm,Rn */
	T = r0 == 0x40u;  /* 0C093FA8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C093FE8u, 5); goto L_0C093FE8; } goto L_0C093FAE; }  /* 0C093FAA bf/s */
L_0C093FAE: BLKS(0x0C093FAEu);
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C093FB0u, 2);  /* 0C093FAE mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C093FB0 add #imm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C093FB4u, 2);  /* 0C093FB2 mov.l @(disp,Rm),Rn */
	r5 = r7 & 0xFF;  /* 0C093FB4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C093FB8u, 2);  /* 0C093FB6 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C093FBAu, 1);  /* 0C093FB8 mov.b @Rm,Rn */
	r5 = 0x7u;  /* 0C093FBA mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C093FBC extu.b Rm,Rn */
	r11 = 0xC0AB240u; UPD(0x0C093FC0u, 3);  /* 0C093FBE mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C093FC2u, 1);  /* 0C093FC0 mov.l Rm,@(disp,Rn) */
	r0 = 0x100000u; UPD(0x0C093FC4u, 1);  /* 0C093FC2 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C093FC6u, 1);  /* 0C093FC4 mov.l @Rm,Rn */
	r6 += r0;  /* 0C093FC6 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C093FCAu, 2);  /* 0C093FC8 mov.l @(disp,Rm),Rn */
	IF(0x0C093FCAu); { u32 t_ = r11; PR = 0x0C093FCEu; W32(r14 + 0x1Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C093FCEu); }  /* 0C093FCA jsr @Rn */
L_0C093FCE: BLKS(0x0C093FCEu);
	r8 = R32(r14 + 0x1Cu); UPD(0x0C093FD0u, 1);  /* 0C093FCE mov.l @(disp,Rm),Rn */
	r8 += 0x7Eu;  /* 0C093FD0 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C093FD4u, 2);  /* 0C093FD2 mov.w @Rm,Rn */
	r1 = 0xB4u; UPD(0x0C093FD6u, 1);  /* 0C093FD4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C093FD6 add #imm,Rn */
	IF(0x0C093FD8u); MACL = r3 * r1;  /* 0C093FD8 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C093FDCu, 4);  /* 0C093FDA mov.l @(disp,pc),Rn */
	IF(0x0C093FDCu); r9 = MACL;  /* 0C093FDC sts macl,Rn */
	r0 = 0xA8u; UPD(0x0C093FE0u, 2);  /* 0C093FDE mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C093FE0 add Rm,Rn */
	IF(0x0C093FE2u); W8(r0 + r9, r12); UPD(0x0C093FE4u, 2);  /* 0C093FE2 mov.b Rm,@(r0,Rn) */
	W32(r8, r12); UPD(0x0C093FE6u, 1);  /* 0C093FE4 mov.l Rm,@Rn */
L_0C093FE6: BLKS(0x0C093FE6u);
	r15 += 0x8u;  /* 0C093FE6 add #imm,Rn */
	UPD(0x0C093FE8u, 1);
L_0C093FE8: BLKS(0x0C093FE8u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C093FE8 bra */
L_0C093FF0: BLKS(0x0C093FF0u);
	r6 = 0x9Cu; UPD(0x0C093FF2u, 1);  /* 0C093FF0 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C093FF2 add Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C093FF6u, 2);  /* 0C093FF4 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s8)R8(r6); UPD(0x0C093FF8u, 1);  /* 0C093FF6 mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C093FF8 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C094050u, 4); goto L_0C094050; } UPD(0x0C093FFEu, 1); goto L_0C093FFE; }  /* 0C093FFA bt/s */
L_0C093FFE: BLKS(0x0C093FFEu);
	r2 += 0x1u;  /* 0C093FFE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C094002u, 2);  /* 0C094000 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C094002 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C094004 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C094006 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C093FE8u, 6); goto L_0C093FE8; } UPD(0x0C09400Cu, 1); goto L_0C09400C; }  /* 0C094008 bf/s */
L_0C09400C: BLKS(0x0C09400Cu);
	r4 = 0x0u;  /* 0C09400C mov #imm,Rn */
	W8(r2, r4); UPD(0x0C094010u, 2);  /* 0C09400E mov.b Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C094010 add #imm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C094014u, 2);  /* 0C094012 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C094014 mov #imm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C094018u, 2);  /* 0C094016 mov.l @(disp,Rm),Rn */
	r12 = 0x20000u; UPD(0x0C09401Au, 1);  /* 0C094018 mov.l @(disp,pc),Rn */
	r13 = 0xC7C1608u; UPD(0x0C09401Cu, 1);  /* 0C09401A mov.l @(disp,pc),Rn */
	r11 = 0x100u; UPD(0x0C09401Eu, 1);  /* 0C09401C mov.w @(disp,pc),Rn */
	r9 = 0xFFEF0000u; UPD(0x0C094020u, 1);  /* 0C09401E mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C094020 mov Rm,Rn */
	r10 = 0x150000u; UPD(0x0C094024u, 2);  /* 0C094022 mov.l @(disp,pc),Rn */
	r5 += r9;  /* 0C094024 add Rm,Rn */
	W32(r15, r12); UPD(0x0C094028u, 2);  /* 0C094026 mov.l Rm,@Rn */
	r6 += r10;  /* 0C094028 add Rm,Rn */
	IF(0x0C09402Au); { u32 t_ = r13; PR = 0x0C09402Eu; W32(r14 + 0x1Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C09402Eu); }  /* 0C09402A jsr @Rn */
L_0C09402E: BLKS(0x0C09402Eu);
	r2 = R32(r14 + 0x1Cu); UPD(0x0C094030u, 1);  /* 0C09402E mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C094030 mov Rm,Rn */
	r5 = R32(r2 + 0x24u); UPD(0x0C094034u, 2);  /* 0C094032 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C094034 mov #imm,Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C094038u, 2);  /* 0C094036 mov.l @(disp,Rm),Rn */
	r5 += r9;  /* 0C094038 add Rm,Rn */
	r6 -= r10;  /* 0C09403A sub Rm,Rn */
	IF(0x0C09403Cu); { u32 t_ = r13; PR = 0x0C094040u; W32(r15, r12); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C094040u); }  /* 0C09403C jsr @Rn */
L_0C094040: BLKS(0x0C094040u);
	r11 = R32(r14 + 0x8u); UPD(0x0C094042u, 1);  /* 0C094040 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C094044u, 1);  /* 0C094042 mov.b @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C094044 add #imm,Rn */
	W8(r11, r3); UPD(0x0C094048u, 2);  /* 0C094046 mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C094048 add #imm,Rn */
	UPD(0x0C09404Au, 1);
L_0C09404A: BLKS(0x0C09404Au);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C09404A bra */
L_0C094050: BLKS(0x0C094050u);
	r4 = r13;  /* 0C094050 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C094054u, 2);  /* 0C094052 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C094054 mov #imm,Rn */
	r5 = 0xF0u; UPD(0x0C094058u, 2);  /* 0C094056 mov.w @(disp,pc),Rn */
	IF(0x0C094058u); { u32 t_ = r13; PR = 0x0C09405Cu; W32(r14 + 0x1Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09405Cu); }  /* 0C094058 jsr @Rn */
L_0C09405C: BLKS(0x0C09405Cu);
	T = (r0 & r0) == 0;  /* 0C09405C tst Rm,Rn */
	{ u32 c_ = T; r3 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C09404Au, 4); goto L_0C09404A; } UPD(0x0C094062u, 1); goto L_0C094062; }  /* 0C09405E bt/s */
L_0C094062: BLKS(0x0C094062u);
	r10 = 0xA1u; UPD(0x0C094064u, 1);  /* 0C094062 mov.w @(disp,pc),Rn */
	r9 = 0xC0AFE40u; UPD(0x0C094066u, 1);  /* 0C094064 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C094066 add Rm,Rn */
	IF(0x0C094068u); { u32 t_ = r9; PR = 0x0C09406Cu; W32(r14 + 0x1Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09406Cu); }  /* 0C094068 jsr @Rn */
L_0C09406C: BLKS(0x0C09406Cu);
	r8 = R32(r14 + 0x1Cu); UPD(0x0C09406Eu, 1);  /* 0C09406C mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C09406E mov #imm,Rn */
	W8(r8, r0); UPD(0x0C094072u, 2);  /* 0C094070 mov.b Rm,@Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C094074u, 1);  /* 0C094072 mov.l @(disp,Rm),Rn */
L_0C094074: BLKS(0x0C094074u);
	W8(r2, r1); UPD(0x0C094076u, 1);  /* 0C094074 mov.b Rm,@Rn */
L_0C094076: BLKS(0x0C094076u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094076 bra */
L_0C0940D0: BLKS(0x0C0940D0u);
	r8 = 0xC0A0540u; UPD(0x0C0940D2u, 1);  /* 0C0940D0 mov.l @(disp,pc),Rn */
	IF(0x0C0940D2u); { u32 t_ = r8; PR = 0x0C0940D6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0940D6u); }  /* 0C0940D2 jsr @Rn */
L_0C0940D6: BLKS(0x0C0940D6u);
	IF(0x0C0940D6u); T = (s32)r0 >= 0;  /* 0C0940D6 cmp/pz Rn */
	if (!T) { UPD(0x0C0941AAu, 4); goto L_0C0941AA; }  /* 0C0940D8 bf */
L_0C0940DA: BLKS(0x0C0940DAu);
	r10 = 0xB4u; UPD(0x0C0940DCu, 1);  /* 0C0940DA mov.w @(disp,pc),Rn */
	IF(0x0C0940DCu); MACL = r13 * r10;  /* 0C0940DC mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0940E0u, 3);  /* 0C0940DE mov.l @(disp,pc),Rn */
	IF(0x0C0940E0u); r7 = MACL;  /* 0C0940E0 sts macl,Rn */
	IF(0x0C0940E2u); MACL = r0 * r10;  /* 0C0940E2 mul.l Rm,Rn */
	r7 += r12;  /* 0C0940E4 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C0940E8u, 5);  /* 0C0940E6 mov.w @(disp,pc),Rn */
	IF(0x0C0940E8u); r13 = MACL;  /* 0C0940E8 sts macl,Rn */
	r13 += r12;  /* 0C0940EA add Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C0940EEu, 3);  /* 0C0940EC mov.l @(disp,Rm),Rn */
	r2 += r7;  /* 0C0940EE add Rm,Rn */
	r6 = R32(r7 + 0x30u); UPD(0x0C0940F2u, 2);  /* 0C0940F0 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x24u); UPD(0x0C0940F4u, 1);  /* 0C0940F2 mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C0940F4 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0940F8u, 2);  /* 0C0940F6 mov.b @Rm,Rn */
	r1 = R32(r7 + 0x2Cu); UPD(0x0C0940FAu, 1);  /* 0C0940F8 mov.l @(disp,Rm),Rn */
	r5 += 0x1u;  /* 0C0940FA add #imm,Rn */
	W32(r7 + 0x28u, r0); UPD(0x0C0940FEu, 2);  /* 0C0940FC mov.l Rm,@(disp,Rn) */
	r3 += r1;  /* 0C0940FE add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C094100 extu.b Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C094104u, 3);  /* 0C094102 mov.l Rm,@(disp,Rn) */
	T = r0 == 0xAu;  /* 0C094104 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C094076u, 4); goto L_0C094076; } UPD(0x0C09410Au, 1); goto L_0C09410A; }  /* 0C094106 bf/s */
L_0C09410A: BLKS(0x0C09410Au);
	r11 = 0x0u;  /* 0C09410A mov #imm,Rn */
	W8(r2, r11); UPD(0x0C09410Eu, 2);  /* 0C09410C mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C09410E mov #imm,Rn */
	r12 = r7;  /* 0C094110 mov Rm,Rn */
	UPD(0x0C094112u, 2);
L_0C094112: BLKS(0x0C094112u);
	r11 = r13;  /* 0C094112 mov Rm,Rn */
	IF(0x0C094114u); T = r11 >> 31; r11 = (r11 << 1) | T;  /* 0C094114 rotl Rn */
	IF(0x0C094116u); r7 = T;  /* 0C094116 movt Rn */
	r7 += r13;  /* 0C094118 add Rm,Rn */
	IF(0x0C09411Au); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C09411A shar Rn */
	r0 = 0xC1C81D4u; UPD(0x0C09411Eu, 6);  /* 0C09411C mov.l @(disp,pc),Rn */
	IF(0x0C09411Eu); r7 <<= 2;  /* 0C09411E shll2 Rn */
	IF(0x0C094120u); r10 = R32(r0 + r7); UPD(0x0C094122u, 2);  /* 0C094120 mov.l @(r0,Rm),Rn */
	r8 = 0x1u;  /* 0C094122 mov #imm,Rn */
	r8 &= r13;  /* 0C094124 and Rm,Rn */
	r11 = R32(r12 + 0x24u); UPD(0x0C094128u, 3);  /* 0C094126 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C094128 mov Rm,Rn */
	r3 = 0xC1C81E0u; UPD(0x0C09412Cu, 2);  /* 0C09412A mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C09412C add Rm,Rn */
	IF(0x0C09412Eu); r0 <<= 2;  /* 0C09412E shll2 Rn */
	r9 = 0xC050D70u; UPD(0x0C094132u, 3);  /* 0C094130 mov.l @(disp,pc),Rn */
	r8 += r8;  /* 0C094132 add Rm,Rn */
	IF(0x0C094134u); r6 = R32(r0 + r3); UPD(0x0C094136u, 2);  /* 0C094134 mov.l @(r0,Rm),Rn */
	r4 = 0xFu;  /* 0C094136 mov #imm,Rn */
	r5 = 0xC1C81E8u; UPD(0x0C09413Au, 2);  /* 0C094138 mov.l @(disp,pc),Rn */
	r10 = R32(r12 + 0x28u); UPD(0x0C09413Cu, 1);  /* 0C09413A mov.l @(disp,Rm),Rn */
	r8 += r5;  /* 0C09413C add Rm,Rn */
	IF(0x0C09413Eu); { u32 t_ = r9; PR = 0x0C094142u; r10 += r6; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C094142u); }  /* 0C09413E jsr @Rn */
L_0C094142: BLKS(0x0C094142u);
	r2 = r0;  /* 0C094142 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C094146u, 2);  /* 0C094144 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C094146 add #imm,Rn */
	IF(0x0C094148u); r7 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09414Au, 2);  /* 0C094148 mov.b @(r0,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C09414Cu, 1);  /* 0C09414A mov.w @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09414C extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C094150u, 2);  /* 0C09414E mov.l Rm,@Rn */
	r2 += r4;  /* 0C094150 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C094154u, 2);  /* 0C094152 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C094154 mov Rm,Rn */
	IF(0x0C094156u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C094158u, 2);  /* 0C094156 mov.b @(r0,Rm),Rn */
	r2 += 0xFFFFFFF8u;  /* 0C094158 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C09415A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09415Eu, 3);  /* 0C09415C mov.l Rm,@(disp,Rn) */
	r9 = (u32)(s32)(s16)r2;  /* 0C09415E exts.w Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C094162u, 2);  /* 0C094160 mov.l @(disp,pc),Rn */
	r8 = 0xC058030u; UPD(0x0C094164u, 1);  /* 0C094162 mov.l @(disp,pc),Rn */
	r5 = 0x8000u; UPD(0x0C094166u, 1);  /* 0C094164 mov.l @(disp,pc),Rn */
	IF(0x0C094166u); { u32 t_ = r0; PR = 0x0C09416Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09416Au); }  /* 0C094166 jsr @Rn */
L_0C09416A: BLKS(0x0C09416Au);
	r4 = r9;  /* 0C09416A mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09416Eu, 2);  /* 0C09416C mov.l @(disp,pc),Rn */
	IF(0x0C09416Eu); { u32 t_ = r8; PR = 0x0C094172u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C094172u); }  /* 0C09416E jsr @Rn */
L_0C094172: BLKS(0x0C094172u);
	r4 = 0x808080u; UPD(0x0C094174u, 1);  /* 0C094172 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C094174 mov Rm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C094178u, 2);  /* 0C094176 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C094178 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09417Cu, 2);  /* 0C09417A mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C09417C mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C094180u, 2);  /* 0C09417E mov.l Rm,@(disp,Rn) */
	IF(0x0C094180u); { u32 t_ = r9; PR = 0x0C094184u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C094184u); }  /* 0C094180 jsr @Rn */
L_0C094184: BLKS(0x0C094184u);
	r2 = r13;  /* 0C094184 mov Rm,Rn */
	r2 += 0x1u;  /* 0C094186 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C094188 exts.w Rm,Rn */
	r7 = 0x5u;  /* 0C09418A mov #imm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C09418C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094112u, 8); goto L_0C094112; } UPD(0x0C094192u, 1); goto L_0C094192; }  /* 0C09418E bf/s */
L_0C094192: BLKS(0x0C094192u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094192 bra */
L_0C0941A0: BLKS(0x0C0941A0u);
	r12 = 0xC0A05D0u; UPD(0x0C0941A2u, 1);  /* 0C0941A0 mov.l @(disp,pc),Rn */
	IF(0x0C0941A2u); { u32 t_ = r12; PR = 0x0C0941A6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0941A6u); }  /* 0C0941A2 jsr @Rn */
L_0C0941A6: BLKS(0x0C0941A6u);
	IF(0x0C0941A6u); T = (s32)r0 >= 0;  /* 0C0941A6 cmp/pz Rn */
	if (T) { UPD(0x0C0941AEu, 4); goto L_0C0941AE; }  /* 0C0941A8 bt */
L_0C0941AA: BLKS(0x0C0941AAu);
	{ IF(0x0C0941ACu); ; /* slot nop */ UPD(0x0C093ED0u, 3); goto L_0C093ED0; }  /* 0C0941AA bra */
L_0C0941AE: BLKS(0x0C0941AEu);
	r10 = 0xB4u; UPD(0x0C0941B0u, 1);  /* 0C0941AE mov.w @(disp,pc),Rn */
	IF(0x0C0941B0u); MACL = r13 * r10;  /* 0C0941B0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0941B4u, 3);  /* 0C0941B2 mov.l @(disp,pc),Rn */
	IF(0x0C0941B4u); r8 = MACL;  /* 0C0941B4 sts macl,Rn */
	IF(0x0C0941B6u); MACL = r0 * r10;  /* 0C0941B6 mul.l Rm,Rn */
	r8 += r3;  /* 0C0941B8 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C0941BCu, 5);  /* 0C0941BA mov.l @(disp,Rm),Rn */
	IF(0x0C0941BCu); r9 = MACL;  /* 0C0941BC sts macl,Rn */
	r9 += r3;  /* 0C0941BE add Rm,Rn */
	r0 = R32(r9 + 0x28u); UPD(0x0C0941C2u, 3);  /* 0C0941C0 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0941C2 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0941C6u, 2);  /* 0C0941C4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x24u); UPD(0x0C0941C8u, 1);  /* 0C0941C6 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0941C8 mov Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C0941CCu, 2);  /* 0C0941CA mov.l @(disp,Rm),Rn */
	r4 = 0xA5u; UPD(0x0C0941CEu, 1);  /* 0C0941CC mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C0941CE add Rm,Rn */
	IF(0x0C0941D0u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0941D2u, 2);  /* 0C0941D0 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0941D2 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C094192u, 4); goto L_0C094192; } UPD(0x0C0941D8u, 1); goto L_0C0941D8; }  /* 0C0941D4 bt/s */
L_0C0941D8: BLKS(0x0C0941D8u);
	r9 = 0xA1u; UPD(0x0C0941DAu, 1);  /* 0C0941D8 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0941DA mov Rm,Rn */
	r9 += r8;  /* 0C0941DC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0941E0u, 3);  /* 0C0941DE mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C0941E0 mov #imm,Rn */
	r10 = 0x86u; UPD(0x0C0941E4u, 2);  /* 0C0941E2 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C0941E4 add Rm,Rn */
	r12 = 0xC1C81ECu; UPD(0x0C0941E8u, 2);  /* 0C0941E6 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0941E8 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C0941ECu, 2);  /* 0C0941EA mov.w @Rm,Rn */
	r6 = 0x2u;  /* 0C0941EC mov #imm,Rn */
	IF(0x0C0941EEu); r11 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0941F0u, 2);  /* 0C0941EE mov.w @(r0,Rm),Rn */
	r13 = 0xC0A9E40u; UPD(0x0C0941F2u, 1);  /* 0C0941F0 mov.l @(disp,pc),Rn */
	r7 += r11;  /* 0C0941F2 add Rm,Rn */
	IF(0x0C0941F4u); { u32 t_ = r13; PR = 0x0C0941F8u; W16(r10, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0941F8u); }  /* 0C0941F4 jsr @Rn */
L_0C0941F8: BLKS(0x0C0941F8u);
	T = (r0 & r0) == 0;  /* 0C0941F8 tst Rm,Rn */
	if (T) { UPD(0x0C094192u, 4); goto L_0C094192; }  /* 0C0941FA bt */
L_0C0941FC: BLKS(0x0C0941FCu);
	r5 = R32(r8 + 0x24u); UPD(0x0C0941FEu, 1);  /* 0C0941FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0941FE add #imm,Rn */
	r0 = 0x40000u; UPD(0x0C094202u, 2);  /* 0C094200 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C094202 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C094206u, 2);  /* 0C094204 mov.b @Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C094208u, 1);  /* 0C094206 mov.l @(disp,Rm),Rn */
	IF(0x0C094208u); r0 <<= 2;  /* 0C094208 shll2 Rn */
	r9 = 0xC1C81F0u; UPD(0x0C09420Cu, 2);  /* 0C09420A mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C09420Eu, 1);  /* 0C09420C mov.w @Rm,Rn */
	IF(0x0C09420Eu); r4 = R32(r0 + r9); UPD(0x0C094210u, 1);  /* 0C09420E mov.l @(r0,Rm),Rn */
	r2 = 0x20000u; UPD(0x0C094212u, 1);  /* 0C094210 mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C094212 add Rm,Rn */
	r8 = 0xC177AD2u; UPD(0x0C094216u, 2);  /* 0C094214 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C094216 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C09421Au, 2);  /* 0C094218 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C09421Cu, 1);  /* 0C09421A mov.l Rm,@(disp,Rn) */
	r0 = 0xC7C1710u; UPD(0x0C09421Eu, 1);  /* 0C09421C mov.l @(disp,pc),Rn */
L_0C09421E: BLKS(0x0C09421Eu);
	IF(0x0C09421Eu); { u32 t_ = r0; PR = 0x0C094222u; IF(0x0C094220u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C094222u); }  /* 0C09421E jsr @Rn */
L_0C094222: BLKS(0x0C094222u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C093FE8u, 3); goto L_0C093FE8; }  /* 0C094222 bra */
L_0C094280: BLKS(0x0C094280u);
	r10 = 0xC0A05D0u; UPD(0x0C094282u, 1);  /* 0C094280 mov.l @(disp,pc),Rn */
	IF(0x0C094282u); { u32 t_ = r10; PR = 0x0C094286u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C094286u); }  /* 0C094282 jsr @Rn */
L_0C094286: BLKS(0x0C094286u);
	IF(0x0C094286u); T = (s32)r0 >= 0;  /* 0C094286 cmp/pz Rn */
	if (T) { UPD(0x0C09428Eu, 4); goto L_0C09428E; }  /* 0C094288 bt */
L_0C09428A: BLKS(0x0C09428Au);
	{ IF(0x0C09428Cu); ; /* slot nop */ UPD(0x0C093ED0u, 3); goto L_0C093ED0; }  /* 0C09428A bra */
L_0C09428E: BLKS(0x0C09428Eu);
	r5 = 0xB4u; UPD(0x0C094290u, 1);  /* 0C09428E mov.w @(disp,pc),Rn */
	IF(0x0C094290u); MACL = r13 * r5;  /* 0C094290 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C094294u, 3);  /* 0C094292 mov.l @(disp,pc),Rn */
	IF(0x0C094294u); r9 = MACL;  /* 0C094294 sts macl,Rn */
	IF(0x0C094296u); MACL = r0 * r5;  /* 0C094296 mul.l Rm,Rn */
	r9 += r4;  /* 0C094298 add Rm,Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C09429Cu, 5);  /* 0C09429A mov.l @(disp,Rm),Rn */
	IF(0x0C09429Cu); r0 = MACL;  /* 0C09429C sts macl,Rn */
	r0 += r4;  /* 0C09429E add Rm,Rn */
	r8 = R32(r9 + 0x30u); UPD(0x0C0942A2u, 3);  /* 0C0942A0 mov.l @(disp,Rm),Rn */
	r10 = R32(r0 + 0x24u); UPD(0x0C0942A4u, 1);  /* 0C0942A2 mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C0942A6u, 1);  /* 0C0942A4 mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C0942A6 add Rm,Rn */
	r12 += r8;  /* 0C0942A8 add Rm,Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C0942ACu, 3);  /* 0C0942AA mov.l Rm,@(disp,Rn) */
	r11 = r9;  /* 0C0942AC mov Rm,Rn */
	W32(r9 + 0x24u, r10); UPD(0x0C0942B0u, 2);  /* 0C0942AE mov.l Rm,@(disp,Rn) */
	r11 += 0x7Cu;  /* 0C0942B0 add #imm,Rn */
	r9 += 0x7Eu;  /* 0C0942B2 add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C0942B6u, 3);  /* 0C0942B4 mov.w @Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C0942B6 add #imm,Rn */
	r7 = R32(r9); UPD(0x0C0942BAu, 2);  /* 0C0942B8 mov.l @Rm,Rn */
	IF(0x0C0942BAu); MACL = r8 * r5;  /* 0C0942BA mul.l Rm,Rn */
	r6 = 0xCCFFFEFFu; UPD(0x0C0942BEu, 3);  /* 0C0942BC mov.l @(disp,pc),Rn */
	r7 &= r6;  /* 0C0942BE and Rm,Rn */
	W32(r9, r7); UPD(0x0C0942C2u, 2);  /* 0C0942C0 mov.l Rm,@Rn */
	IF(0x0C0942C2u); r6 = MACL;  /* 0C0942C2 sts macl,Rn */
	r6 += r4;  /* 0C0942C4 add Rm,Rn */
	r3 = R32(r6); UPD(0x0C0942C8u, 3);  /* 0C0942C6 mov.l @Rm,Rn */
	r1 = 0x33000100u; UPD(0x0C0942CAu, 1);  /* 0C0942C8 mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C0942CA and Rm,Rn */
	r7 |= r3;  /* 0C0942CC or Rm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0942D0u, 3);  /* 0C0942CE mov.l @(disp,Rm),Rn */
	W32(r9, r7); UPD(0x0C0942D2u, 1);  /* 0C0942D0 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C0942D2 tst Rm,Rn */
	{ u32 c_ = !T; r12 = (u32)(s32)(s16)R16(r11); /* slot mov.w @Rm,Rn */ if (c_) { UPD(0x0C0942DCu, 4); goto L_0C0942DC; } UPD(0x0C0942D8u, 1); goto L_0C0942D8; }  /* 0C0942D4 bf/s */
L_0C0942D8: BLKS(0x0C0942D8u);
	{ IF(0x0C0942DAu); MACL = r12 * r5; /* slot mul.l Rm,Rn */ UPD(0x0C094460u, 4); goto L_0C094460; }  /* 0C0942D8 bra */
L_0C0942DC: BLKS(0x0C0942DCu);
	IF(0x0C0942DCu); T = (s32)r2 >= 0;  /* 0C0942DC cmp/pz Rn */
	if (!T) { UPD(0x0C0942E8u, 4); goto L_0C0942E8; }  /* 0C0942DE bf */
L_0C0942E0: BLKS(0x0C0942E0u);
	r2 += 0xFFFFFFF7u;  /* 0C0942E0 add #imm,Rn */
	r5 = 0x7u;  /* 0C0942E2 mov #imm,Rn */
	T = r2 > r5;  /* 0C0942E4 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0942ECu, 6); goto L_0C0942EC; }  /* 0C0942E6 bf */
L_0C0942E8: BLKS(0x0C0942E8u);
	{ IF(0x0C0942EAu); ; /* slot nop */ UPD(0x0C0943F0u, 3); goto L_0C0943F0; }  /* 0C0942E8 bra */
L_0C0942EC: BLKS(0x0C0942ECu);
	r3 = 0xB4u; UPD(0x0C0942EEu, 1);  /* 0C0942EC mov.w @(disp,pc),Rn */
	IF(0x0C0942EEu); MACL = r13 * r3;  /* 0C0942EE mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0942F2u, 3);  /* 0C0942F0 mov.l @(disp,pc),Rn */
	IF(0x0C0942F2u); r9 = MACL;  /* 0C0942F2 sts macl,Rn */
	r9 += r7;  /* 0C0942F4 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0942F8u, 3);  /* 0C0942F6 mov.l @(disp,Rm),Rn */
	T = r0 == 0x9u;  /* 0C0942F8 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C0942FCu); MACL = r8 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0943A0u, 5); goto L_0C0943A0; } UPD(0x0C0942FEu, 2); goto L_0C0942FE; }  /* 0C0942FA bt/s */
L_0C0942FE: BLKS(0x0C0942FEu);
	r11 = 0xB4u; UPD(0x0C094300u, 1);  /* 0C0942FE mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C094300 mov Rm,Rn */
	IF(0x0C094302u); MACL = r13 * r11;  /* 0C094302 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C094306u, 4);  /* 0C094304 mov.l @(disp,pc),Rn */
	IF(0x0C094306u); r8 = MACL;  /* 0C094306 sts macl,Rn */
	r8 += r0;  /* 0C094308 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09430Cu, 3);  /* 0C09430A mov.l @(disp,Rm),Rn */
	r10 = 0xC1C81D4u; UPD(0x0C09430Eu, 1);  /* 0C09430C mov.l @(disp,pc),Rn */
	IF(0x0C09430Eu); r0 <<= 2;  /* 0C09430E shll2 Rn */
	r2 = 0xC0A0380u; UPD(0x0C094312u, 2);  /* 0C094310 mov.l @(disp,pc),Rn */
	IF(0x0C094312u); r3 = R32(r0 + r10); UPD(0x0C094314u, 1);  /* 0C094312 mov.l @(r0,Rm),Rn */
	r9 = 0xC0A9E40u; UPD(0x0C094316u, 1);  /* 0C094314 mov.l @(disp,pc),Rn */
	IF(0x0C094316u); { u32 t_ = r2; PR = 0x0C09431Au; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09431Au); }  /* 0C094316 jsr @Rn */
L_0C09431A: BLKS(0x0C09431Au);
	r4 = r13;  /* 0C09431A mov Rm,Rn */
	r5 = 0x14u;  /* 0C09431C mov #imm,Rn */
	IF(0x0C09431Eu); { u32 t_ = r9; PR = 0x0C094322u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C094322u); }  /* 0C09431E jsr @Rn */
L_0C094322: BLKS(0x0C094322u);
	T = (r0 & r0) == 0;  /* 0C094322 tst Rm,Rn */
	if (T) { UPD(0x0C0943E0u, 4); goto L_0C0943E0; }  /* 0C094324 bt */
L_0C094326: BLKS(0x0C094326u);
	r4 = r13;  /* 0C094326 mov Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C09432Au, 2);  /* 0C094328 mov.l @(disp,Rm),Rn */
	r11 = 0x40000u; UPD(0x0C09432Cu, 1);  /* 0C09432A mov.l @(disp,pc),Rn */
	r13 = 0xC058090u; UPD(0x0C09432Eu, 1);  /* 0C09432C mov.l @(disp,pc),Rn */
	r10 += r11;  /* 0C09432E add Rm,Rn */
	IF(0x0C094330u); { u32 t_ = r13; PR = 0x0C094334u; r11 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C094334u); }  /* 0C094330 jsr @Rn */
L_0C094334: BLKS(0x0C094334u);
	r4 = 0x280u; UPD(0x0C094336u, 1);  /* 0C094334 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C094336 exts.w Rm,Rn */
	IF(0x0C094338u); MACL = r6 * r4;  /* 0C094338 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C09433Cu, 4);  /* 0C09433A mov.l @(disp,pc),Rn */
	r9 = 0xC057390u; UPD(0x0C09433Eu, 1);  /* 0C09433C mov.l @(disp,pc),Rn */
	IF(0x0C09433Eu); r3 = MACL;  /* 0C09433E sts macl,Rn */
	r13 = 0x86u; UPD(0x0C094342u, 2);  /* 0C094340 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C094342 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C094346u, 2);  /* 0C094344 mov.l @(disp,Rm),Rn */
	r13 += r8;  /* 0C094346 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C09434Au, 2);  /* 0C094348 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C09434Cu, 1);  /* 0C09434A mov.l @(disp,Rm),Rn */
	IF(0x0C09434Cu); { u32 t_ = r9; PR = 0x0C094350u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C094350u); }  /* 0C09434C jsr @Rn */
L_0C094350: BLKS(0x0C094350u);
	W16(r13, r0); UPD(0x0C094352u, 1);  /* 0C094350 mov.w Rm,@Rn */
	r4 = r0;  /* 0C094352 mov Rm,Rn */
	r0 = 0xB4u; UPD(0x0C094356u, 2);  /* 0C094354 mov.w @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C094356 mov #imm,Rn */
	IF(0x0C094358u); MACL = r12 * r0;  /* 0C094358 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09435Cu, 4);  /* 0C09435A mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C09435C exts.w Rm,Rn */
	IF(0x0C09435Eu); r0 = MACL;  /* 0C09435E sts macl,Rn */
	r2 = 0xA5u; UPD(0x0C094362u, 3);  /* 0C094360 mov.w @(disp,pc),Rn */
	r0 += r1;  /* 0C094362 add Rm,Rn */
	IF(0x0C094364u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C094366u, 2);  /* 0C094364 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C094366 add #imm,Rn */
	r0 &= 0x3u;  /* 0C094368 and #imm,r0 */
	IF(0x0C09436Au); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09436A shld Rm,Rn */
	r8 = 0xC1C8218u; UPD(0x0C09436Eu, 4);  /* 0C09436C mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C09436E mov #imm,Rn */
	r0 += r8;  /* 0C094370 add Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C094374u, 3);  /* 0C094372 mov.l @(disp,pc),Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C094376u, 1);  /* 0C094374 mov.l @(disp,Rm),Rn */
	r9 = R32(r0); UPD(0x0C094378u, 1);  /* 0C094376 mov.l @Rm,Rn */
	IF(0x0C094378u); { u32 t_ = r12; PR = 0x0C09437Cu; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09437Cu); }  /* 0C094378 jsr @Rn */
L_0C09437C: BLKS(0x0C09437Cu);
	W32(r15, r9); UPD(0x0C09437Eu, 1);  /* 0C09437C mov.l Rm,@Rn */
	r13 += r0;  /* 0C09437E add Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C094382u, 2);  /* 0C094380 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFFF0u;  /* 0C094382 add #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C094386u, 2);  /* 0C094384 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C094386 mov #imm,Rn */
	r0 = 0xC7C14F4u; UPD(0x0C09438Au, 2);  /* 0C094388 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C09438A mov Rm,Rn */
	r6 = r11;  /* 0C09438C mov Rm,Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C09421Eu, 5); goto L_0C09421E; }  /* 0C09438E bra */
L_0C0943A0: BLKS(0x0C0943A0u);
	r5 = 0xA5u; UPD(0x0C0943A2u, 1);  /* 0C0943A0 mov.w @(disp,pc),Rn */
	IF(0x0C0943A2u); r1 = MACL;  /* 0C0943A2 sts macl,Rn */
	r8 = 0xA0u; UPD(0x0C0943A6u, 2);  /* 0C0943A4 mov.w @(disp,pc),Rn */
	r1 += r7;  /* 0C0943A6 add Rm,Rn */
	r1 += r8;  /* 0C0943A8 add Rm,Rn */
	IF(0x0C0943AAu); MACL = r12 * r3;  /* 0C0943AA mul.l Rm,Rn */
	r8 += r9;  /* 0C0943AC add Rm,Rn */
	r8 += 0x1u;  /* 0C0943AE add #imm,Rn */
	r1 += 0x1u;  /* 0C0943B0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0943B4u, 8);  /* 0C0943B2 mov.b @Rm,Rn */
	IF(0x0C0943B4u); r0 = MACL;  /* 0C0943B4 sts macl,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0943B8u, 2);  /* 0C0943B6 mov.b @Rm,Rn */
	r0 += r7;  /* 0C0943B8 add Rm,Rn */
	T = (r6 & r4) == 0;  /* 0C0943BA tst Rm,Rn */
	IF(0x0C0943BCu); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0943BEu, 3);  /* 0C0943BC mov.b @(r0,Rm),Rn */
	IF(0x0C0943BEu); r11 = T;  /* 0C0943BE movt Rn */
	T = r0 == 0x2u;  /* 0C0943C0 cmp/eq #imm,r0 */
	r8 = 0xFFFFFFFFu;  /* 0C0943C2 mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C0943C4 negc Rm,Rn */
	r10 &= r11;  /* 0C0943C6 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0943C8 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0942FEu, 9); goto L_0C0942FE; } goto L_0C0943CE; }  /* 0C0943CA bt/s */
L_0C0943CE: BLKS(0x0C0943CEu);
	r0 = 0x9Cu; UPD(0x0C0943D0u, 2);  /* 0C0943CE mov.w @(disp,pc),Rn */
	r12 = 0x8u;  /* 0C0943D0 mov #imm,Rn */
	IF(0x0C0943D2u); W8(r0 + r9, r7); UPD(0x0C0943D4u, 2);  /* 0C0943D2 mov.b Rm,@(r0,Rn) */
	W32(r9 + 0xCu, r12); UPD(0x0C0943D6u, 1);  /* 0C0943D4 mov.l Rm,@(disp,Rn) */
L_0C0943D6: BLKS(0x0C0943D6u);
	r3 = 0xC0A0380u; UPD(0x0C0943D8u, 1);  /* 0C0943D6 mov.l @(disp,pc),Rn */
	IF(0x0C0943D8u); { u32 t_ = r3; PR = 0x0C0943DCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0943DCu); }  /* 0C0943D8 jsr @Rn */
L_0C0943DC: BLKS(0x0C0943DCu);
	r0 = 0x88u; UPD(0x0C0943DEu, 1);  /* 0C0943DC mov.w @(disp,pc),Rn */
	IF(0x0C0943DEu); W16(r0 + r9, r8); UPD(0x0C0943E0u, 1);  /* 0C0943DE mov.w Rm,@(r0,Rn) */
L_0C0943E0: BLKS(0x0C0943E0u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0943E0 bra */
L_0C0943F0: BLKS(0x0C0943F0u);
	r3 = 0xB4u; UPD(0x0C0943F2u, 1);  /* 0C0943F0 mov.w @(disp,pc),Rn */
	IF(0x0C0943F2u); MACL = r13 * r3;  /* 0C0943F2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0943F6u, 3);  /* 0C0943F4 mov.l @(disp,pc),Rn */
	IF(0x0C0943F6u); r3 = MACL;  /* 0C0943F6 sts macl,Rn */
	r8 = 0x99u; UPD(0x0C0943FAu, 2);  /* 0C0943F8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0943FA add Rm,Rn */
	r8 += r3;  /* 0C0943FC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C094400u, 3);  /* 0C0943FE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C094400 add #imm,Rn */
	W8(r8, r0); UPD(0x0C094404u, 2);  /* 0C094402 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C094404 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C094406 tst Rm,Rn */
	if (!T) { UPD(0x0C0943E0u, 5); goto L_0C0943E0; }  /* 0C094408 bf */
L_0C09440A: BLKS(0x0C09440Au);
	r0 = 0x88u; UPD(0x0C09440Cu, 1);  /* 0C09440A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C09440Eu, 1);  /* 0C09440C mov.l @(disp,Rm),Rn */
	IF(0x0C09440Eu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C094410u, 1);  /* 0C09440E mov.w @(r0,Rm),Rn */
	r1 += r9;  /* 0C094410 add Rm,Rn */
	UPD(0x0C094412u, 1);
L_0C094412: BLKS(0x0C094412u);
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093EA8u, 3); goto L_0C093EA8; }  /* 0C094412 bra */
L_0C094460: BLKS(0x0C094460u);
	r0 = 0xA0u; UPD(0x0C094462u, 1);  /* 0C094460 mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C094462 add Rm,Rn */
	r6 += 0x1u;  /* 0C094464 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C094468u, 3);  /* 0C094466 mov.b @Rm,Rn */
	r0 += r9;  /* 0C094468 add Rm,Rn */
	r0 += 0x1u;  /* 0C09446A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C09446Eu, 3);  /* 0C09446C mov.b @Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C09446E mov #imm,Rn */
	IF(0x0C094470u); r0 = MACL;  /* 0C094470 sts macl,Rn */
	r3 = 0xA5u; UPD(0x0C094474u, 3);  /* 0C094472 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C094474 add Rm,Rn */
	T = (r8 & r6) == 0;  /* 0C094476 tst Rm,Rn */
	IF(0x0C094478u); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09447Au, 3);  /* 0C094478 mov.b @(r0,Rm),Rn */
	IF(0x0C09447Au); r7 = T;  /* 0C09447A movt Rn */
	T = r0 == 0x2u;  /* 0C09447C cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C09447E negc Rm,Rn */
	r4 &= r7;  /* 0C094480 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C094482 tst Rm,Rn */
	if (!T) { UPD(0x0C0943E0u, 8); goto L_0C0943E0; }  /* 0C094484 bf */
L_0C094486: BLKS(0x0C094486u);
	r8 = 0x1u;  /* 0C094486 mov #imm,Rn */
	UPD(0x0C094488u, 1);
L_0C094488: BLKS(0x0C094488u);
	{ W32(r9 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0943D6u, 3); goto L_0C0943D6; }  /* 0C094488 bra */
L_0C094490: BLKS(0x0C094490u);
	r9 = 0xB4u; UPD(0x0C094492u, 1);  /* 0C094490 mov.w @(disp,pc),Rn */
	IF(0x0C094492u); MACL = r13 * r9;  /* 0C094492 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C094496u, 3);  /* 0C094494 mov.l @(disp,pc),Rn */
	IF(0x0C094496u); r8 = MACL;  /* 0C094496 sts macl,Rn */
	r8 += r10;  /* 0C094498 add Rm,Rn */
	r8 += 0x3Cu;  /* 0C09449A add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C09449Eu, 4);  /* 0C09449C mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C09449E tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094500u, 4); goto L_0C094500; } goto L_0C0944A4; }  /* 0C0944A0 bf/s */
L_0C0944A4: BLKS(0x0C0944A4u);
	r11 = 0xC0A05D0u; UPD(0x0C0944A6u, 2);  /* 0C0944A4 mov.l @(disp,pc),Rn */
	IF(0x0C0944A6u); { u32 t_ = r11; PR = 0x0C0944AAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0944AAu); }  /* 0C0944A6 jsr @Rn */
L_0C0944AA: BLKS(0x0C0944AAu);
	IF(0x0C0944AAu); T = (s32)r0 >= 0;  /* 0C0944AA cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0944AEu); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0944C4u, 5); goto L_0C0944C4; } goto L_0C0944B0; }  /* 0C0944AC bf/s */
L_0C0944B0: BLKS(0x0C0944B0u);
	r5 = R32(r8 + 0x2Cu); UPD(0x0C0944B2u, 3);  /* 0C0944B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0944B2u); r0 = MACL;  /* 0C0944B2 sts macl,Rn */
	r0 += r10;  /* 0C0944B4 add Rm,Rn */
	r3 = R32(r0 + 0x24u); UPD(0x0C0944B8u, 3);  /* 0C0944B6 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C0944BAu, 1);  /* 0C0944B8 mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0944BA add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C0944BEu, 2);  /* 0C0944BC mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0944BE add Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C0944C2u, 2);  /* 0C0944C0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C0944C4u, 1);  /* 0C0944C2 mov.l Rm,@(disp,Rn) */
L_0C0944C4: BLKS(0x0C0944C4u);
	r4 = r13;  /* 0C0944C4 mov Rm,Rn */
	r13 = 0xC0A1700u; UPD(0x0C0944C8u, 2);  /* 0C0944C6 mov.l @(disp,pc),Rn */
	IF(0x0C0944C8u); { u32 t_ = r13; PR = 0x0C0944CCu; IF(0x0C0944CAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0944CCu); }  /* 0C0944C8 jsr @Rn */
L_0C0944CC: BLKS(0x0C0944CCu);
	r2 = R32(r8); UPD(0x0C0944CEu, 1);  /* 0C0944CC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0944CE tst Rm,Rn */
	if (!T) { UPD(0x0C0944EEu, 4); goto L_0C0944EE; }  /* 0C0944D0 bf */
L_0C0944D2: BLKS(0x0C0944D2u);
	r8 += 0x7Eu;  /* 0C0944D2 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0944D6u, 2);  /* 0C0944D4 mov.w @Rm,Rn */
	IF(0x0C0944D6u); MACL = r6 * r9;  /* 0C0944D6 mul.l Rm,Rn */
	r4 = 0xA5u; UPD(0x0C0944DAu, 3);  /* 0C0944D8 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0944DA add #imm,Rn */
	IF(0x0C0944DCu); r3 = MACL;  /* 0C0944DC sts macl,Rn */
	r3 += r10;  /* 0C0944DE add Rm,Rn */
	r9 = 0xA1u; UPD(0x0C0944E2u, 4);  /* 0C0944E0 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C0944E2 add Rm,Rn */
	r0 = r8;  /* 0C0944E4 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0944E8u, 3);  /* 0C0944E6 mov.b @Rm,Rn */
	IF(0x0C0944E8u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0944EAu, 1);  /* 0C0944E8 mov.b @(r0,Rm),Rn */
	r1 |= r10;  /* 0C0944EA or Rm,Rn */
	UPD(0x0C0944ECu, 1);
L_0C0944EC: BLKS(0x0C0944ECu);
	W8(r3, r1); UPD(0x0C0944EEu, 1);  /* 0C0944EC mov.b Rm,@Rn */
L_0C0944EE: BLKS(0x0C0944EEu);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0944EE bra */
L_0C094500: BLKS(0x0C094500u);
	r12 = 0xC0A0540u; UPD(0x0C094502u, 1);  /* 0C094500 mov.l @(disp,pc),Rn */
	IF(0x0C094502u); { u32 t_ = r12; PR = 0x0C094506u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C094506u); }  /* 0C094502 jsr @Rn */
L_0C094506: BLKS(0x0C094506u);
	IF(0x0C094506u); T = (s32)r0 >= 0;  /* 0C094506 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C09450Au); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C094510u, 5); goto L_0C094510; } goto L_0C09450C; }  /* 0C094508 bt/s */
L_0C09450C: BLKS(0x0C09450Cu);
	{ IF(0x0C09450Eu); ; /* slot nop */ UPD(0x0C093ED0u, 5); goto L_0C093ED0; }  /* 0C09450C bra */
L_0C094510: BLKS(0x0C094510u);
	r4 = R32(r8 + 0x30u); UPD(0x0C094512u, 1);  /* 0C094510 mov.l @(disp,Rm),Rn */
	IF(0x0C094512u); r6 = MACL;  /* 0C094512 sts macl,Rn */
	r6 += r10;  /* 0C094514 add Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C094518u, 3);  /* 0C094516 mov.l @(disp,Rm),Rn */
	r12 = R32(r6 + 0x24u); UPD(0x0C09451Au, 1);  /* 0C094518 mov.l @(disp,Rm),Rn */
	r11 = R32(r6 + 0x28u); UPD(0x0C09451Cu, 1);  /* 0C09451A mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C09451C add Rm,Rn */
	r11 += r4;  /* 0C09451E add Rm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C094522u, 3);  /* 0C094520 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r12); UPD(0x0C094524u, 1);  /* 0C094522 mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C094524 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C094528u, 2);  /* 0C094526 mov.w @Rm,Rn */
	r8 += 0xFFFFFF82u;  /* 0C094528 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C09452Cu, 2);  /* 0C09452A mov.l @Rm,Rn */
	IF(0x0C09452Cu); MACL = r11 * r9;  /* 0C09452C mul.l Rm,Rn */
	r7 = 0xCCFFFEFFu; UPD(0x0C094530u, 3);  /* 0C09452E mov.l @(disp,pc),Rn */
	r5 &= r7;  /* 0C094530 and Rm,Rn */
	W32(r8, r5); UPD(0x0C094534u, 2);  /* 0C094532 mov.l Rm,@Rn */
	IF(0x0C094534u); r7 = MACL;  /* 0C094534 sts macl,Rn */
	r7 += r10;  /* 0C094536 add Rm,Rn */
	r10 = R32(r7); UPD(0x0C09453Au, 3);  /* 0C094538 mov.l @Rm,Rn */
	r3 = r7;  /* 0C09453A mov Rm,Rn */
	r1 = 0x33000100u; UPD(0x0C09453Eu, 2);  /* 0C09453C mov.l @(disp,pc),Rn */
	r3 += 0x3Cu;  /* 0C09453E add #imm,Rn */
	r10 &= r1;  /* 0C094540 and Rm,Rn */
	r5 |= r10;  /* 0C094542 or Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C094546u, 4);  /* 0C094544 mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C094546 tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0944EEu, 4); goto L_0C0944EE; } UPD(0x0C09454Cu, 1); goto L_0C09454C; }  /* 0C094548 bt/s */
L_0C09454C: BLKS(0x0C09454Cu);
	r0 = R32(r8 + 0xCu); UPD(0x0C09454Eu, 1);  /* 0C09454C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09454E tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1Fu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C094558u, 4); goto L_0C094558; } goto L_0C094554; }  /* 0C094550 bf/s */
L_0C094554: BLKS(0x0C094554u);
	{ r10 = r7; /* slot mov Rm,Rn */ UPD(0x0C0947A0u, 4); goto L_0C0947A0; }  /* 0C094554 bra */
L_0C094558: BLKS(0x0C094558u);
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0945B0u, 3); goto L_0C0945B0; } goto L_0C09455C; }  /* 0C094558 bt/s */
L_0C09455C: BLKS(0x0C09455Cu);
	r10 = 0xB4u; UPD(0x0C09455Eu, 2);  /* 0C09455C mov.w @(disp,pc),Rn */
	IF(0x0C09455Eu); MACL = r13 * r10;  /* 0C09455E mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C094562u, 3);  /* 0C094560 mov.l @(disp,pc),Rn */
	IF(0x0C094562u); r8 = MACL;  /* 0C094562 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C094566u, 2);  /* 0C094564 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C094566 add Rm,Rn */
	r7 += r8;  /* 0C094568 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09456Cu, 3);  /* 0C09456A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09456C add #imm,Rn */
	W8(r7, r0); UPD(0x0C094570u, 2);  /* 0C09456E mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C094570 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C094572 tst Rm,Rn */
	if (!T) { UPD(0x0C0944EEu, 5); goto L_0C0944EE; }  /* 0C094574 bf */
L_0C094576: BLKS(0x0C094576u);
	r4 = R32(r8 + 0xCu); UPD(0x0C094578u, 1);  /* 0C094576 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C094578 add #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09457Cu, 2);  /* 0C09457A mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C09457C mov Rm,Rn */
	r13 = 0xC0A0380u; UPD(0x0C094580u, 2);  /* 0C09457E mov.l @(disp,pc),Rn */
	IF(0x0C094580u); { u32 t_ = r13; PR = 0x0C094584u; IF(0x0C094582u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094584u); }  /* 0C094580 jsr @Rn */
L_0C094584: BLKS(0x0C094584u);
	r0 = R32(r8 + 0xCu); UPD(0x0C094586u, 1);  /* 0C094584 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C094586 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0944EEu, 4); goto L_0C0944EE; }  /* 0C094588 bf */
L_0C09458A: BLKS(0x0C09458Au);
	IF(0x0C09458Au); MACL = r11 * r10;  /* 0C09458A mul.l Rm,Rn */
	r12 = 0xA0u; UPD(0x0C09458Eu, 3);  /* 0C09458C mov.w @(disp,pc),Rn */
	IF(0x0C09458Eu); r3 = MACL;  /* 0C09458E sts macl,Rn */
	r3 += r9;  /* 0C094590 add Rm,Rn */
	r8 += r12;  /* 0C094592 add Rm,Rn */
	r3 += r12;  /* 0C094594 add Rm,Rn */
	r8 += 0x1u;  /* 0C094596 add #imm,Rn */
	r3 += 0x1u;  /* 0C094598 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C09459Cu, 7);  /* 0C09459A mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C09459Eu, 1);  /* 0C09459C mov.b @Rm,Rn */
	r1 = ~r6;  /* 0C09459E not Rm,Rn */
	{ r1 &= r11; /* slot and Rm,Rn */ UPD(0x0C0944ECu, 4); goto L_0C0944EC; }  /* 0C0945A0 bra */
L_0C0945B0: BLKS(0x0C0945B0u);
	r3 = 0xA5u; UPD(0x0C0945B2u, 1);  /* 0C0945B0 mov.w @(disp,pc),Rn */
	IF(0x0C0945B2u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0945B4u, 1);  /* 0C0945B2 mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0945B4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094680u, 4); goto L_0C094680; } goto L_0C0945BA; }  /* 0C0945B6 bf/s */
L_0C0945BA: BLKS(0x0C0945BAu);
	r10 = 0x9Fu; UPD(0x0C0945BCu, 2);  /* 0C0945BA mov.w @(disp,pc),Rn */
	IF(0x0C0945BCu); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0945BEu, 1);  /* 0C0945BC mov.b @(r0,Rm),Rn */
	r0 = 0x5u;  /* 0C0945BE mov #imm,Rn */
	r3 = r5 & 0xFF;  /* 0C0945C0 extu.b Rm,Rn */
	T = r3 > r0;  /* 0C0945C2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0944EEu, 6); goto L_0C0944EE; }  /* 0C0945C4 bt */
L_0C0945C6: BLKS(0x0C0945C6u);
	r0 = 0xC0945F8u;  /* 0C0945C6 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C0945C8 add Rm,Rn */
	IF(0x0C0945CAu); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0945CCu, 3);  /* 0C0945CA mov.w @(r0,Rm),Rn */
	IF(0x0C0945CCu); { u32 tv_ = (r8 + 0x0C0945D0u); u32 t_ = PHYS(tv_); IF(0x0C0945CEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C094610u: goto L_0C094610; case 0x0C094650u: goto L_0C094650; case 0x0C094710u: goto L_0C094710; case 0x0C094740u: goto L_0C094740; case 0x0C094760u: goto L_0C094760; default: JUMPD(tv_); } }  /* 0C0945CC braf Rn */
L_0C094610: BLKS(0x0C094610u);
	r6 = 0xB4u; UPD(0x0C094612u, 1);  /* 0C094610 mov.w @(disp,pc),Rn */
	IF(0x0C094612u); MACL = r11 * r6;  /* 0C094612 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C094616u, 3);  /* 0C094614 mov.l @(disp,pc),Rn */
	IF(0x0C094616u); r1 = MACL;  /* 0C094616 sts macl,Rn */
	IF(0x0C094618u); MACL = r13 * r6;  /* 0C094618 mul.l Rm,Rn */
	r4 = 0xA0u; UPD(0x0C09461Cu, 4);  /* 0C09461A mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C09461C add Rm,Rn */
	IF(0x0C09461Eu); r0 = MACL;  /* 0C09461E sts macl,Rn */
	r1 += r4;  /* 0C094620 add Rm,Rn */
	r0 += r2;  /* 0C094622 add Rm,Rn */
	r4 += r0;  /* 0C094624 add Rm,Rn */
	r1 += 0x1u;  /* 0C094626 add #imm,Rn */
	r4 += 0x1u;  /* 0C094628 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C09462Cu, 8);  /* 0C09462A mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C09462Eu, 1);  /* 0C09462C mov.b @Rm,Rn */
	T = (r13 & r7) == 0;  /* 0C09462E tst Rm,Rn */
	if (T) { UPD(0x0C09467Au, 4); goto L_0C09467A; }  /* 0C094630 bt */
L_0C094632: BLKS(0x0C094632u);
	r12 = 0x1u;  /* 0C094632 mov #imm,Rn */
	r2 = 0xA6u; UPD(0x0C094636u, 2);  /* 0C094634 mov.w @(disp,pc),Rn */
	IF(0x0C094636u); W8(r0 + r2, r12); UPD(0x0C094638u, 1);  /* 0C094636 mov.b Rm,@(r0,Rn) */
	r11 = 0x0u;  /* 0C094638 mov #imm,Rn */
	r2 += 0xFFFFFFF6u;  /* 0C09463A add #imm,Rn */
	r2 += r0;  /* 0C09463C add Rm,Rn */
	W8(r2, r11); UPD(0x0C094640u, 4);  /* 0C09463E mov.b Rm,@Rn */
	r2 += 0x3u;  /* 0C094640 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C094644u, 2);  /* 0C094642 mov.b @Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C094074u, 3); goto L_0C094074; }  /* 0C094644 bra */
L_0C094650: BLKS(0x0C094650u);
	r8 = 0xB4u; UPD(0x0C094652u, 1);  /* 0C094650 mov.w @(disp,pc),Rn */
	IF(0x0C094652u); MACL = r11 * r8;  /* 0C094652 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C094656u, 3);  /* 0C094654 mov.l @(disp,pc),Rn */
	IF(0x0C094656u); r1 = MACL;  /* 0C094656 sts macl,Rn */
	IF(0x0C094658u); MACL = r13 * r8;  /* 0C094658 mul.l Rm,Rn */
	r4 = 0xA0u; UPD(0x0C09465Cu, 4);  /* 0C09465A mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C09465C add Rm,Rn */
	IF(0x0C09465Eu); r8 = MACL;  /* 0C09465E sts macl,Rn */
	r1 += r4;  /* 0C094660 add Rm,Rn */
	r8 += r2;  /* 0C094662 add Rm,Rn */
	r4 += r8;  /* 0C094664 add Rm,Rn */
	r1 += 0x1u;  /* 0C094666 add #imm,Rn */
	r4 += 0x1u;  /* 0C094668 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C09466Cu, 8);  /* 0C09466A mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C09466Eu, 1);  /* 0C09466C mov.b @Rm,Rn */
	T = (r7 & r10) == 0;  /* 0C09466E tst Rm,Rn */
	if (!T) { UPD(0x0C094680u, 4); goto L_0C094680; }  /* 0C094670 bf */
L_0C094672: BLKS(0x0C094672u);
	r0 = 0x9Fu; UPD(0x0C094674u, 1);  /* 0C094672 mov.w @(disp,pc),Rn */
	IF(0x0C094674u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C094676u, 1);  /* 0C094674 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C094676 add #imm,Rn */
	IF(0x0C094678u); W8(r0 + r8, r4); UPD(0x0C09467Au, 2);  /* 0C094678 mov.b Rm,@(r0,Rn) */
L_0C09467A: BLKS(0x0C09467Au);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C09467A bra */
L_0C094680: BLKS(0x0C094680u);
	r11 = 0xC0A9E40u; UPD(0x0C094682u, 1);  /* 0C094680 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C094682 mov Rm,Rn */
	r5 = 0x14u;  /* 0C094684 mov #imm,Rn */
	IF(0x0C094686u); { u32 t_ = r11; PR = 0x0C09468Au; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09468Au); }  /* 0C094686 jsr @Rn */
L_0C09468A: BLKS(0x0C09468Au);
	T = (r0 & r0) == 0;  /* 0C09468A tst Rm,Rn */
	if (T) { UPD(0x0C09467Au, 4); goto L_0C09467A; }  /* 0C09468C bt */
L_0C09468E: BLKS(0x0C09468Eu);
	r3 = 0x1u;  /* 0C09468E mov #imm,Rn */
	r0 = 0x9Cu; UPD(0x0C094692u, 2);  /* 0C094690 mov.w @(disp,pc),Rn */
	IF(0x0C094692u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C094694u, 1);  /* 0C094692 mov.b @(r0,Rm),Rn */
	r3 &= r9;  /* 0C094694 and Rm,Rn */
	r2 = r3;  /* 0C094696 mov Rm,Rn */
	IF(0x0C094698u); r2 <<= 2;  /* 0C094698 shll2 Rn */
	r12 = 0xC1C8230u; UPD(0x0C09469Cu, 4);  /* 0C09469A mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09469C mov Rm,Rn */
	IF(0x0C09469Eu); r6 = R32(r0 + r12); UPD(0x0C0946A0u, 2);  /* 0C09469E mov.l @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0946A2u, 1);  /* 0C0946A0 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C0946A4u, 1);  /* 0C0946A2 mov.l @(disp,Rm),Rn */
	T = r0 == 0x8u;  /* 0C0946A4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C094700u, 4); goto L_0C094700; } goto L_0C0946AA; }  /* 0C0946A6 bt/s */
L_0C0946AA: BLKS(0x0C0946AAu);
	r6 = R32(r8 + 0x28u); UPD(0x0C0946ACu, 2);  /* 0C0946AA mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C0946AC mov Rm,Rn */
	r8 = 0xC1C8238u; UPD(0x0C0946B0u, 2);  /* 0C0946AE mov.l @(disp,pc),Rn */
	IF(0x0C0946B0u); r4 = R32(r0 + r8); UPD(0x0C0946B2u, 1);  /* 0C0946B0 mov.l @(r0,Rm),Rn */
	r6 += r4;  /* 0C0946B2 add Rm,Rn */
	UPD(0x0C0946B4u, 1);
L_0C0946B4: BLKS(0x0C0946B4u);
	r4 = 0xB4u; UPD(0x0C0946B6u, 1);  /* 0C0946B4 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C0946B6 mov Rm,Rn */
	IF(0x0C0946B8u); MACL = r13 * r4;  /* 0C0946B8 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0946BCu, 4);  /* 0C0946BA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0946BC add #imm,Rn */
	r10 = 0xC1C8240u; UPD(0x0C0946C0u, 2);  /* 0C0946BE mov.l @(disp,pc),Rn */
	IF(0x0C0946C0u); r11 = MACL;  /* 0C0946C0 sts macl,Rn */
	r13 = 0x86u; UPD(0x0C0946C4u, 2);  /* 0C0946C2 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C0946C4 add Rm,Rn */
	IF(0x0C0946C6u); r9 = R32(r0 + r10); UPD(0x0C0946C8u, 2);  /* 0C0946C6 mov.l @(r0,Rm),Rn */
	r13 += r11;  /* 0C0946C8 add Rm,Rn */
	r12 = 0xC7C1710u; UPD(0x0C0946CCu, 2);  /* 0C0946CA mov.l @(disp,pc),Rn */
	r3 += 0x3u;  /* 0C0946CC add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r13); UPD(0x0C0946D0u, 2);  /* 0C0946CE mov.w @Rm,Rn */
	r4 = r3;  /* 0C0946D0 mov Rm,Rn */
	r0 = 0xC177C74u; UPD(0x0C0946D4u, 2);  /* 0C0946D2 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C0946D6u, 1);  /* 0C0946D4 mov.l Rm,@Rn */
	IF(0x0C0946D6u); { u32 t_ = r12; PR = 0x0C0946DAu; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C0946DAu); }  /* 0C0946D6 jsr @Rn */
L_0C0946DA: BLKS(0x0C0946DAu);
	r0 = 0x9Cu; UPD(0x0C0946DCu, 1);  /* 0C0946DA mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0946DC add #imm,Rn */
	IF(0x0C0946DEu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0946E0u, 2);  /* 0C0946DE mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0946E0 add #imm,Rn */
	IF(0x0C0946E2u); W8(r0 + r11, r6); UPD(0x0C0946E4u, 2);  /* 0C0946E2 mov.b Rm,@(r0,Rn) */
	r2 = 0xA2u; UPD(0x0C0946E6u, 1);  /* 0C0946E4 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C0946E6 mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C0946EAu, 2);  /* 0C0946E8 mov.w @Rm,Rn */
	IF(0x0C0946EAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0946ECu, 1);  /* 0C0946EA mov.b @(r0,Rm),Rn */
	r3 += r5;  /* 0C0946EC add Rm,Rn */
	W16(r13, r3); UPD(0x0C0946F0u, 2);  /* 0C0946EE mov.w Rm,@Rn */
L_0C0946F0: BLKS(0x0C0946F0u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0946F0 bra */
L_0C094700: BLKS(0x0C094700u);
	r7 = 0xC1C8238u; UPD(0x0C094702u, 1);  /* 0C094700 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C094702 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C094706u, 2);  /* 0C094704 mov.l @(disp,Rm),Rn */
	IF(0x0C094706u); r10 = R32(r0 + r7); UPD(0x0C094708u, 1);  /* 0C094706 mov.l @(r0,Rm),Rn */
	{ r6 -= r10; /* slot sub Rm,Rn */ UPD(0x0C0946B4u, 3); goto L_0C0946B4; }  /* 0C094708 bra */
L_0C094710: BLKS(0x0C094710u);
	r8 = 0xC0A9E40u; UPD(0x0C094712u, 1);  /* 0C094710 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C094712 mov Rm,Rn */
	r5 = 0xAu;  /* 0C094714 mov #imm,Rn */
	IF(0x0C094716u); { u32 t_ = r8; PR = 0x0C09471Au; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09471Au); }  /* 0C094716 jsr @Rn */
L_0C09471A: BLKS(0x0C09471Au);
	T = (r0 & r0) == 0;  /* 0C09471A tst Rm,Rn */
	if (T) { UPD(0x0C0946F0u, 4); goto L_0C0946F0; }  /* 0C09471C bt */
L_0C09471E: BLKS(0x0C09471Eu);
	r5 = 0xB4u; UPD(0x0C094720u, 1);  /* 0C09471E mov.w @(disp,pc),Rn */
	IF(0x0C094720u); MACL = r13 * r5;  /* 0C094720 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C094724u, 3);  /* 0C094722 mov.l @(disp,pc),Rn */
	r2 = 0xA6u; UPD(0x0C094726u, 1);  /* 0C094724 mov.w @(disp,pc),Rn */
	IF(0x0C094726u); r0 = MACL;  /* 0C094726 sts macl,Rn */
	r0 += r3;  /* 0C094728 add Rm,Rn */
	r13 = 0x1u;  /* 0C09472A mov #imm,Rn */
	IF(0x0C09472Cu); W8(r0 + r2, r13); UPD(0x0C09472Eu, 4);  /* 0C09472C mov.b Rm,@(r0,Rn) */
	r2 += 0xFFFFFFF9u;  /* 0C09472E add #imm,Rn */
	UPD(0x0C094730u, 1);
L_0C094730: BLKS(0x0C094730u);
	IF(0x0C094730u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C094732u, 1);  /* 0C094730 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C094732 add #imm,Rn */
	UPD(0x0C094734u, 1);
L_0C094734: BLKS(0x0C094734u);
	{ IF(0x0C094736u); W8(r0 + r2, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C093D9Cu, 3); goto L_0C093D9C; }  /* 0C094734 bra */
L_0C094740: BLKS(0x0C094740u);
	r0 = 0xB4u; UPD(0x0C094742u, 1);  /* 0C094740 mov.w @(disp,pc),Rn */
	IF(0x0C094742u); MACL = r13 * r0;  /* 0C094742 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C094746u, 3);  /* 0C094744 mov.l @(disp,pc),Rn */
	IF(0x0C094746u); r0 = MACL;  /* 0C094746 sts macl,Rn */
	r3 = 0xA6u; UPD(0x0C09474Au, 2);  /* 0C094748 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C09474A add Rm,Rn */
	IF(0x0C09474Cu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09474Eu, 2);  /* 0C09474C mov.b @(r0,Rm),Rn */
	r2 = 0x9Fu; UPD(0x0C094750u, 1);  /* 0C09474E mov.w @(disp,pc),Rn */
	T = (r9 & r9) == 0;  /* 0C094750 tst Rm,Rn */
	if (T) { UPD(0x0C094730u, 4); goto L_0C094730; }  /* 0C094752 bt */
L_0C094754: BLKS(0x0C094754u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094754 bra */
L_0C094760: BLKS(0x0C094760u);
	r6 = 0xB4u; UPD(0x0C094762u, 1);  /* 0C094760 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C094762 mov #imm,Rn */
	IF(0x0C094764u); MACL = r13 * r6;  /* 0C094764 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C094768u, 4);  /* 0C094766 mov.l @(disp,pc),Rn */
	r0 = 0x9Fu; UPD(0x0C09476Au, 1);  /* 0C094768 mov.w @(disp,pc),Rn */
	IF(0x0C09476Au); r11 = MACL;  /* 0C09476A sts macl,Rn */
	{ r2 += r11; /* slot add Rm,Rn */ UPD(0x0C094734u, 4); goto L_0C094734; }  /* 0C09476C bra */
L_0C0947A0: BLKS(0x0C0947A0u);
	r5 = 0xA0u; UPD(0x0C0947A2u, 1);  /* 0C0947A0 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0947A2 add Rm,Rn */
	r5 += r8;  /* 0C0947A4 add Rm,Rn */
	r10 += 0x1u;  /* 0C0947A6 add #imm,Rn */
	r5 += 0x1u;  /* 0C0947A8 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0947ACu, 5);  /* 0C0947AA mov.b @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r5); UPD(0x0C0947AEu, 1);  /* 0C0947AC mov.b @Rm,Rn */
	T = (r3 & r9) == 0;  /* 0C0947AE tst Rm,Rn */
	if (T) { UPD(0x0C094754u, 4); goto L_0C094754; }  /* 0C0947B0 bt */
L_0C0947B2: BLKS(0x0C0947B2u);
	r2 = 0x1u;  /* 0C0947B2 mov #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C0947B6u, 2);  /* 0C0947B4 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A0380u; UPD(0x0C0947B8u, 1);  /* 0C0947B6 mov.l @(disp,pc),Rn */
	IF(0x0C0947B8u); { u32 t_ = r8; PR = 0x0C0947BCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0947BCu); }  /* 0C0947B8 jsr @Rn */
L_0C0947BC: BLKS(0x0C0947BCu);
	r4 = 0x6Cu;  /* 0C0947BC mov #imm,Rn */
	UPD(0x0C0947BEu, 1);
L_0C0947BE: BLKS(0x0C0947BEu);
	r1 = 0xC0AFC10u; UPD(0x0C0947C0u, 1);  /* 0C0947BE mov.l @(disp,pc),Rn */
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093EAEu, 3); goto L_0C093EAE; }  /* 0C0947C0 bra */
L_0C0947D0: BLKS(0x0C0947D0u);
	r12 = 0xC0A05D0u; UPD(0x0C0947D2u, 1);  /* 0C0947D0 mov.l @(disp,pc),Rn */
	IF(0x0C0947D2u); { u32 t_ = r12; PR = 0x0C0947D6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0947D6u); }  /* 0C0947D2 jsr @Rn */
L_0C0947D6: BLKS(0x0C0947D6u);
	IF(0x0C0947D6u); T = (s32)r0 >= 0;  /* 0C0947D6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0947E0u, 4); goto L_0C0947E0; } goto L_0C0947DC; }  /* 0C0947D8 bt/s */
L_0C0947DC: BLKS(0x0C0947DCu);
	{ IF(0x0C0947DEu); ; /* slot nop */ UPD(0x0C093ED0u, 4); goto L_0C093ED0; }  /* 0C0947DC bra */
L_0C0947E0: BLKS(0x0C0947E0u);
	r6 = 0xB4u; UPD(0x0C0947E2u, 1);  /* 0C0947E0 mov.w @(disp,pc),Rn */
	IF(0x0C0947E2u); MACL = r0 * r6;  /* 0C0947E2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0947E6u, 3);  /* 0C0947E4 mov.l @(disp,pc),Rn */
	IF(0x0C0947E6u); r7 = MACL;  /* 0C0947E6 sts macl,Rn */
	r7 += r5;  /* 0C0947E8 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0947ECu, 3);  /* 0C0947EA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C0947EC cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C0947F0u); MACL = r13 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C094800u, 5); goto L_0C094800; } goto L_0C0947F2; }  /* 0C0947EE bt/s */
L_0C0947F2: BLKS(0x0C0947F2u);
	IF(0x0C0947F2u); r1 = MACL;  /* 0C0947F2 sts macl,Rn */
	UPD(0x0C0947F4u, 3);
L_0C0947F4: BLKS(0x0C0947F4u);
	r1 += r5;  /* 0C0947F4 add Rm,Rn */
	UPD(0x0C0947F6u, 1);
L_0C0947F6: BLKS(0x0C0947F6u);
	r10 = 0x2000000u; UPD(0x0C0947F8u, 1);  /* 0C0947F6 mov.l @(disp,pc),Rn */
	W32(r1 + 0x24u, r10); UPD(0x0C0947FAu, 1);  /* 0C0947F8 mov.l Rm,@(disp,Rn) */
L_0C0947FA: BLKS(0x0C0947FAu);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0947FA bra */
L_0C094800: BLKS(0x0C094800u);
	IF(0x0C094800u); MACL = r13 * r6;  /* 0C094800 mul.l Rm,Rn */
	r10 = R32(r7 + 0x24u); UPD(0x0C094804u, 3);  /* 0C094802 mov.l @(disp,Rm),Rn */
	IF(0x0C094804u); r9 = MACL;  /* 0C094804 sts macl,Rn */
	r9 += r5;  /* 0C094806 add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C09480Au, 3);  /* 0C094808 mov.l @(disp,Rm),Rn */
	r8 = r9;  /* 0C09480A mov Rm,Rn */
	r10 += r4;  /* 0C09480C add Rm,Rn */
	W32(r9 + 0x24u, r10); UPD(0x0C094810u, 3);  /* 0C09480E mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C094810 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C094814u, 2);  /* 0C094812 mov.w @Rm,Rn */
	r10 = R32(r9); UPD(0x0C094816u, 1);  /* 0C094814 mov.l @Rm,Rn */
	IF(0x0C094816u); MACL = r0 * r6;  /* 0C094816 mul.l Rm,Rn */
	r2 = 0xCCFFFEFFu; UPD(0x0C09481Au, 3);  /* 0C094818 mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C09481A and Rm,Rn */
	W32(r9, r10); UPD(0x0C09481Eu, 2);  /* 0C09481C mov.l Rm,@Rn */
	IF(0x0C09481Eu); r0 = MACL;  /* 0C09481E sts macl,Rn */
	IF(0x0C094820u); r4 = R32(r0 + r5); UPD(0x0C094822u, 2);  /* 0C094820 mov.l @(r0,Rm),Rn */
	r1 = 0x33000100u; UPD(0x0C094824u, 1);  /* 0C094822 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C094826u, 1);  /* 0C094824 mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C094826 and Rm,Rn */
	r12 = R32(r9 + 0x30u); UPD(0x0C09482Au, 2);  /* 0C094828 mov.l @(disp,Rm),Rn */
	r10 |= r4;  /* 0C09482A or Rm,Rn */
	r3 += r12;  /* 0C09482C add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C094830u, 3);  /* 0C09482E mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r3); UPD(0x0C094832u, 1);  /* 0C094830 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C094832 tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0948C0u, 4); goto L_0C0948C0; } UPD(0x0C094838u, 1); goto L_0C094838; }  /* 0C094834 bt/s */
L_0C094838: BLKS(0x0C094838u);
	T = r0 == 0x7u;  /* 0C094838 cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0948A0u, 4); goto L_0C0948A0; } goto L_0C09483E; }  /* 0C09483A bt/s */
L_0C09483E: BLKS(0x0C09483Eu);
	r10 = 0xB4u; UPD(0x0C094840u, 2);  /* 0C09483E mov.w @(disp,pc),Rn */
	IF(0x0C094840u); MACL = r13 * r10;  /* 0C094840 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C094844u, 3);  /* 0C094842 mov.l @(disp,pc),Rn */
	IF(0x0C094844u); r8 = MACL;  /* 0C094844 sts macl,Rn */
	r9 = 0x99u; UPD(0x0C094848u, 2);  /* 0C094846 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C094848 add Rm,Rn */
	r9 += r8;  /* 0C09484A add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C09484Eu, 3);  /* 0C09484C mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09484E add #imm,Rn */
	W8(r9, r2); UPD(0x0C094852u, 2);  /* 0C094850 mov.b Rm,@Rn */
	r9 = 0x1u;  /* 0C094852 mov #imm,Rn */
	r9 &= r2;  /* 0C094854 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C094856 tst Rm,Rn */
	if (!T) { UPD(0x0C0947FAu, 6); goto L_0C0947FA; }  /* 0C094858 bf */
L_0C09485A: BLKS(0x0C09485Au);
	r4 = R32(r8 + 0xCu); UPD(0x0C09485Cu, 1);  /* 0C09485A mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09485Eu, 1);  /* 0C09485C mov.w @(disp,pc),Rn */
	IF(0x0C09485Eu); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C094860u, 1);  /* 0C09485E mov.w @(r0,Rm),Rn */
	r7 = 0xC0A0380u; UPD(0x0C094862u, 1);  /* 0C094860 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C094862 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C094866u, 2);  /* 0C094864 mov.l Rm,@(disp,Rn) */
	IF(0x0C094866u); { u32 t_ = r7; PR = 0x0C09486Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09486Au); }  /* 0C094866 jsr @Rn */
L_0C09486A: BLKS(0x0C09486Au);
	r0 = R32(r8 + 0xCu); UPD(0x0C09486Cu, 1);  /* 0C09486A mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09486C tst Rm,Rn */
	IF(0x0C09486Eu); r2 = T;  /* 0C09486E movt Rn */
	T = r0 == 0x7u;  /* 0C094870 cmp/eq #imm,r0 */
	IF(0x0C094872u); r3 = T;  /* 0C094872 movt Rn */
	r3 |= r2;  /* 0C094874 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C094876 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09487Au); T = (s32)r2 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C094888u, 9); goto L_0C094888; } goto L_0C09487C; }  /* 0C094878 bt/s */
L_0C09487C: BLKS(0x0C09487Cu);
	IF(0x0C09487Cu); MACL = r11 * r10;  /* 0C09487C mul.l Rm,Rn */
	IF(0x0C09487Eu); r0 = MACL;  /* 0C09487E sts macl,Rn */
	r0 += r12;  /* 0C094880 add Rm,Rn */
	r12 = 0xA6u; UPD(0x0C094884u, 6);  /* 0C094882 mov.w @(disp,pc),Rn */
	IF(0x0C094884u); W8(r0 + r12, r9); UPD(0x0C094886u, 1);  /* 0C094884 mov.b Rm,@(r0,Rn) */
	IF(0x0C094886u); T = (s32)r2 > 0;  /* 0C094886 cmp/pl Rn */
	UPD(0x0C094888u, 1);
L_0C094888: BLKS(0x0C094888u);
	if (!T) { UPD(0x0C0947FAu, 3); goto L_0C0947FA; }  /* 0C094888 bf */
L_0C09488A: BLKS(0x0C09488Au);
	r5 = R32(r8); UPD(0x0C09488Cu, 1);  /* 0C09488A mov.l @Rm,Rn */
	r6 = 0x4000u; UPD(0x0C09488Eu, 1);  /* 0C09488C mov.w @(disp,pc),Rn */
	r5 |= r6;  /* 0C09488E or Rm,Rn */
	W32(r8, r5); UPD(0x0C094892u, 2);  /* 0C094890 mov.l Rm,@Rn */
L_0C094892: BLKS(0x0C094892u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094892 bra */
L_0C0948A0: BLKS(0x0C0948A0u);
	r10 = 0xA6u; UPD(0x0C0948A2u, 1);  /* 0C0948A0 mov.w @(disp,pc),Rn */
	IF(0x0C0948A2u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0948A4u, 1);  /* 0C0948A2 mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0948A4 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C094892u, 4); goto L_0C094892; } UPD(0x0C0948AAu, 1); goto L_0C0948AA; }  /* 0C0948A6 bt/s */
L_0C0948AA: BLKS(0x0C0948AAu);
	r0 = 0xC0A0380u; UPD(0x0C0948ACu, 1);  /* 0C0948AA mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0948AC mov Rm,Rn */
	IF(0x0C0948AEu); { u32 t_ = r0; PR = 0x0C0948B2u; W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0948B2u); }  /* 0C0948AE jsr @Rn */
L_0C0948B2: BLKS(0x0C0948B2u);
	r0 = 0x88u; UPD(0x0C0948B4u, 1);  /* 0C0948B2 mov.w @(disp,pc),Rn */
	r13 = 0xFFFFFFFFu;  /* 0C0948B4 mov #imm,Rn */
	IF(0x0C0948B6u); W16(r0 + r9, r13); UPD(0x0C0948B8u, 2);  /* 0C0948B6 mov.w Rm,@(r0,Rn) */
L_0C0948B8: BLKS(0x0C0948B8u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0948B8 bra */
L_0C0948C0: BLKS(0x0C0948C0u);
	r5 = 0xA6u; UPD(0x0C0948C2u, 1);  /* 0C0948C0 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0948C2 mov Rm,Rn */
	IF(0x0C0948C4u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0948C6u, 2);  /* 0C0948C4 mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C0948C6 tst Rm,Rn */
	if (T) { UPD(0x0C0948B8u, 4); goto L_0C0948B8; }  /* 0C0948C8 bt */
L_0C0948CA: BLKS(0x0C0948CAu);
	r11 = 0x1u;  /* 0C0948CA mov #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0948CEu, 2);  /* 0C0948CC mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0948CE mov Rm,Rn */
	IF(0x0C0948D0u); { u32 t_ = r0; PR = 0x0C0948D4u; W32(r9 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0948D4u); }  /* 0C0948D0 jsr @Rn */
L_0C0948D4: BLKS(0x0C0948D4u);
	r13 = R32(r9); UPD(0x0C0948D6u, 1);  /* 0C0948D4 mov.l @Rm,Rn */
	r4 = 0x6Du;  /* 0C0948D6 mov #imm,Rn */
	r6 = 0xFFFFBFFFu; UPD(0x0C0948DAu, 2);  /* 0C0948D8 mov.w @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C0948DCu, 1);  /* 0C0948DA mov.w @(disp,pc),Rn */
	r13 &= r6;  /* 0C0948DC and Rm,Rn */
	W32(r9, r13); UPD(0x0C0948E0u, 2);  /* 0C0948DE mov.l Rm,@Rn */
	{ IF(0x0C0948E2u); W16(r0 + r9, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C0947BEu, 3); goto L_0C0947BE; }  /* 0C0948E0 bra */
L_0C094910: BLKS(0x0C094910u);
	r11 = 0xC0A05D0u; UPD(0x0C094912u, 1);  /* 0C094910 mov.l @(disp,pc),Rn */
	IF(0x0C094912u); { u32 t_ = r11; PR = 0x0C094916u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C094916u); }  /* 0C094912 jsr @Rn */
L_0C094916: BLKS(0x0C094916u);
	IF(0x0C094916u); T = (s32)r0 >= 0;  /* 0C094916 cmp/pz Rn */
	if (!T) { UPD(0x0C09497Au, 4); goto L_0C09497A; }  /* 0C094918 bf */
L_0C09491A: BLKS(0x0C09491Au);
	r6 = 0xB4u; UPD(0x0C09491Cu, 1);  /* 0C09491A mov.w @(disp,pc),Rn */
	IF(0x0C09491Cu); MACL = r0 * r6;  /* 0C09491C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C094920u, 3);  /* 0C09491E mov.l @(disp,pc),Rn */
	IF(0x0C094920u); r7 = MACL;  /* 0C094920 sts macl,Rn */
	r7 += r5;  /* 0C094922 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C094926u, 3);  /* 0C094924 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C094926 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C094930u, 4); goto L_0C094930; }  /* 0C094928 bt */
L_0C09492A: BLKS(0x0C09492Au);
	IF(0x0C09492Au); MACL = r13 * r6;  /* 0C09492A mul.l Rm,Rn */
	{ IF(0x0C09492Eu); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C0947F4u, 5); goto L_0C0947F4; }  /* 0C09492C bra */
L_0C094930: BLKS(0x0C094930u);
	IF(0x0C094930u); MACL = r13 * r6;  /* 0C094930 mul.l Rm,Rn */
	r2 = 0xCCFFFEFFu; UPD(0x0C094934u, 3);  /* 0C094932 mov.l @(disp,pc),Rn */
	IF(0x0C094934u); r13 = MACL;  /* 0C094934 sts macl,Rn */
	r13 += r5;  /* 0C094936 add Rm,Rn */
	r3 = r13;  /* 0C094938 mov Rm,Rn */
	r3 += 0x7Eu;  /* 0C09493A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C09493Eu, 5);  /* 0C09493C mov.w @Rm,Rn */
	r9 = R32(r13); UPD(0x0C094940u, 1);  /* 0C09493E mov.l @Rm,Rn */
	IF(0x0C094940u); MACL = r0 * r6;  /* 0C094940 mul.l Rm,Rn */
	r9 &= r2;  /* 0C094942 and Rm,Rn */
	W32(r13, r9); UPD(0x0C094946u, 4);  /* 0C094944 mov.l Rm,@Rn */
	IF(0x0C094946u); r0 = MACL;  /* 0C094946 sts macl,Rn */
	IF(0x0C094948u); r6 = R32(r0 + r5); UPD(0x0C09494Au, 2);  /* 0C094948 mov.l @(r0,Rm),Rn */
	r12 = R32(r7 + 0x24u); UPD(0x0C09494Cu, 1);  /* 0C09494A mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C09494Eu, 1);  /* 0C09494C mov.l @(disp,Rm),Rn */
	r5 = 0x33000100u; UPD(0x0C094950u, 1);  /* 0C09494E mov.l @(disp,pc),Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C094952u, 1);  /* 0C094950 mov.l @(disp,Rm),Rn */
	r6 &= r5;  /* 0C094952 and Rm,Rn */
	r7 = R32(r13 + 0x30u); UPD(0x0C094956u, 2);  /* 0C094954 mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C094956 add Rm,Rn */
	r4 += r7;  /* 0C094958 add Rm,Rn */
	r9 |= r6;  /* 0C09495A or Rm,Rn */
	W32(r13 + 0x24u, r12); UPD(0x0C09495Eu, 4);  /* 0C09495C mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r4); UPD(0x0C094960u, 1);  /* 0C09495E mov.l Rm,@(disp,Rn) */
	W32(r13, r9); UPD(0x0C094962u, 1);  /* 0C094960 mov.l Rm,@Rn */
L_0C094962: BLKS(0x0C094962u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094962 bra */
L_0C094970: BLKS(0x0C094970u);
	r8 = 0xC0A05D0u; UPD(0x0C094972u, 1);  /* 0C094970 mov.l @(disp,pc),Rn */
	IF(0x0C094972u); { u32 t_ = r8; PR = 0x0C094976u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C094976u); }  /* 0C094972 jsr @Rn */
L_0C094976: BLKS(0x0C094976u);
	IF(0x0C094976u); T = (s32)r0 >= 0;  /* 0C094976 cmp/pz Rn */
	if (T) { UPD(0x0C09497Eu, 4); goto L_0C09497E; }  /* 0C094978 bt */
L_0C09497A: BLKS(0x0C09497Au);
	{ IF(0x0C09497Cu); ; /* slot nop */ UPD(0x0C093ED0u, 3); goto L_0C093ED0; }  /* 0C09497A bra */
L_0C09497E: BLKS(0x0C09497Eu);
	r6 = 0xB4u; UPD(0x0C094980u, 1);  /* 0C09497E mov.w @(disp,pc),Rn */
	IF(0x0C094980u); MACL = r13 * r6;  /* 0C094980 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C094984u, 3);  /* 0C094982 mov.l @(disp,pc),Rn */
	IF(0x0C094984u); r5 = MACL;  /* 0C094984 sts macl,Rn */
	IF(0x0C094986u); MACL = r0 * r6;  /* 0C094986 mul.l Rm,Rn */
	r5 += r4;  /* 0C094988 add Rm,Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C09498Cu, 5);  /* 0C09498A mov.l @(disp,Rm),Rn */
	IF(0x0C09498Cu); r12 = MACL;  /* 0C09498C sts macl,Rn */
	r12 += r4;  /* 0C09498E add Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C094992u, 3);  /* 0C094990 mov.l @(disp,Rm),Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C094994u, 1);  /* 0C094992 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C094994 add Rm,Rn */
	r3 = R32(r5 + 0x30u); UPD(0x0C094998u, 2);  /* 0C094996 mov.l @(disp,Rm),Rn */
	r7 += r3;  /* 0C094998 add Rm,Rn */
	W32(r5 + 0x24u, r8); UPD(0x0C09499Cu, 2);  /* 0C09499A mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r7); UPD(0x0C09499Eu, 1);  /* 0C09499C mov.l Rm,@(disp,Rn) */
	r5 += 0x7Eu;  /* 0C09499E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0949A2u, 2);  /* 0C0949A0 mov.w @Rm,Rn */
	r5 += 0xFFFFFF82u;  /* 0C0949A2 add #imm,Rn */
	r10 = R32(r5); UPD(0x0C0949A6u, 2);  /* 0C0949A4 mov.l @Rm,Rn */
	IF(0x0C0949A6u); MACL = r0 * r6;  /* 0C0949A6 mul.l Rm,Rn */
	r2 = 0xCCFFFEFFu; UPD(0x0C0949AAu, 3);  /* 0C0949A8 mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C0949AA and Rm,Rn */
	W32(r5, r10); UPD(0x0C0949AEu, 2);  /* 0C0949AC mov.l Rm,@Rn */
	IF(0x0C0949AEu); r0 = MACL;  /* 0C0949AE sts macl,Rn */
	IF(0x0C0949B0u); r11 = R32(r0 + r4); UPD(0x0C0949B2u, 2);  /* 0C0949B0 mov.l @(r0,Rm),Rn */
	r9 = 0x33000100u; UPD(0x0C0949B4u, 1);  /* 0C0949B2 mov.l @(disp,pc),Rn */
	r11 &= r9;  /* 0C0949B4 and Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0949B8u, 2);  /* 0C0949B6 mov.w @(disp,pc),Rn */
	r10 |= r11;  /* 0C0949B8 or Rm,Rn */
	r9 += r5;  /* 0C0949BA add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0949BEu, 3);  /* 0C0949BC mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0949BE extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0949C0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r5, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C094A40u, 5); goto L_0C094A40; } UPD(0x0C0949C6u, 1); goto L_0C0949C6; }  /* 0C0949C2 bt/s */
L_0C0949C6: BLKS(0x0C0949C6u);
	r10 = 0x1u;  /* 0C0949C6 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C0949C8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0949F0u, 5); goto L_0C0949F0; } goto L_0C0949CE; }  /* 0C0949CA bt/s */
L_0C0949CE: BLKS(0x0C0949CEu);
	T = (r0 & r0) == 0;  /* 0C0949CE tst Rm,Rn */
	if (!T) { UPD(0x0C094962u, 5); goto L_0C094962; }  /* 0C0949D0 bf */
L_0C0949D2: BLKS(0x0C0949D2u);
	r0 = r5;  /* 0C0949D2 mov Rm,Rn */
	r4 = 0xA1u; UPD(0x0C0949D6u, 2);  /* 0C0949D4 mov.w @(disp,pc),Rn */
	IF(0x0C0949D6u); r11 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0949D8u, 1);  /* 0C0949D6 mov.b @(r0,Rm),Rn */
	r4 = r13;  /* 0C0949D8 mov Rm,Rn */
	r13 = 0xC0A0380u; UPD(0x0C0949DCu, 2);  /* 0C0949DA mov.l @(disp,pc),Rn */
	IF(0x0C0949DCu); { u32 t_ = r13; PR = 0x0C0949E0u; W32(r5 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0949E0u); }  /* 0C0949DC jsr @Rn */
L_0C0949E0: BLKS(0x0C0949E0u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0949E2u, 1);  /* 0C0949E0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0949E2 add #imm,Rn */
	UPD(0x0C0949E4u, 1);
L_0C0949E4: BLKS(0x0C0949E4u);
	W8(r9, r1); UPD(0x0C0949E6u, 1);  /* 0C0949E4 mov.b Rm,@Rn */
L_0C0949E6: BLKS(0x0C0949E6u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C0949E6 bra */
L_0C0949F0: BLKS(0x0C0949F0u);
	if (!T) { UPD(0x0C0949E6u, 3); goto L_0C0949E6; }  /* 0C0949F0 bf */
L_0C0949F2: BLKS(0x0C0949F2u);
	r3 = 0x99u; UPD(0x0C0949F4u, 1);  /* 0C0949F2 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0949F4 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0949F8u, 2);  /* 0C0949F6 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0949F8 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0949FA extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C0949FC cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0949E6u, 6); goto L_0C0949E6; } UPD(0x0C094A02u, 1); goto L_0C094A02; }  /* 0C0949FE bf/s */
L_0C094A02: BLKS(0x0C094A02u);
	r0 = 0x0u;  /* 0C094A02 mov #imm,Rn */
	W8(r3, r0); UPD(0x0C094A06u, 2);  /* 0C094A04 mov.b Rm,@Rn */
	r7 = 0xA1u; UPD(0x0C094A08u, 1);  /* 0C094A06 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C094A08 mov Rm,Rn */
	IF(0x0C094A0Au); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C094A0Cu, 2);  /* 0C094A0A mov.b @(r0,Rm),Rn */
	r1 = R32(r5 + 0xCu); UPD(0x0C094A0Eu, 1);  /* 0C094A0C mov.l @(disp,Rm),Rn */
	T = r1 == r3;  /* 0C094A0E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C094A30u, 4); goto L_0C094A30; }  /* 0C094A10 bt */
L_0C094A12: BLKS(0x0C094A12u);
	T = (s32)r1 > (s32)r3;  /* 0C094A12 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (s32)r1 >= (s32)r3; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C094A1Eu, 4); goto L_0C094A1E; } goto L_0C094A18; }  /* 0C094A14 bf/s */
L_0C094A18: BLKS(0x0C094A18u);
	r1 += 0xFFFFFFFFu;  /* 0C094A18 add #imm,Rn */
	W32(r5 + 0xCu, r1); UPD(0x0C094A1Cu, 3);  /* 0C094A1A mov.l Rm,@(disp,Rn) */
	T = (s32)r1 >= (s32)r3;  /* 0C094A1C cmp/ge Rm,Rn */
	UPD(0x0C094A1Eu, 1);
L_0C094A1E: BLKS(0x0C094A1Eu);
	if (!T) { UPD(0x0C094A24u, 3); goto L_0C094A24; }  /* 0C094A1E bf */
L_0C094A20: BLKS(0x0C094A20u);
	{ IF(0x0C094A22u); ; /* slot nop */ UPD(0x0C093EA8u, 3); goto L_0C093EA8; }  /* 0C094A20 bra */
L_0C094A24: BLKS(0x0C094A24u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C093EA6u, 3); goto L_0C093EA6; }  /* 0C094A24 bra */
L_0C094A30: BLKS(0x0C094A30u);
	r1 = r2;  /* 0C094A30 mov Rm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0949E4u, 4); goto L_0C0949E4; }  /* 0C094A32 bra */
L_0C094A40: BLKS(0x0C094A40u);
	r8 = 0xC050D70u; UPD(0x0C094A42u, 1);  /* 0C094A40 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C094A42 mov #imm,Rn */
	r12 = 0xA1u; UPD(0x0C094A46u, 2);  /* 0C094A44 mov.w @(disp,pc),Rn */
	IF(0x0C094A46u); { u32 t_ = r8; PR = 0x0C094A4Au; r12 += r5; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C094A4Au); }  /* 0C094A46 jsr @Rn */
L_0C094A4A: BLKS(0x0C094A4Au);
	{ W8(r12, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0949E0u, 3); goto L_0C0949E0; }  /* 0C094A4A bra */
L_0C094A70: BLKS(0x0C094A70u);
	r9 = 0xC0A0490u; UPD(0x0C094A72u, 1);  /* 0C094A70 mov.l @(disp,pc),Rn */
	IF(0x0C094A72u); { u32 t_ = r9; PR = 0x0C094A76u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C094A76u); }  /* 0C094A72 jsr @Rn */
L_0C094A76: BLKS(0x0C094A76u);
	IF(0x0C094A76u); T = (s32)r0 >= 0;  /* 0C094A76 cmp/pz Rn */
	{ u32 c_ = !T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094B6Cu, 4); goto L_0C094B6C; } goto L_0C094A7C; }  /* 0C094A78 bf/s */
L_0C094A7C: BLKS(0x0C094A7Cu);
	r2 = 0xB4u; UPD(0x0C094A7Eu, 2);  /* 0C094A7C mov.w @(disp,pc),Rn */
	IF(0x0C094A7Eu); MACL = r13 * r2;  /* 0C094A7E mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C094A82u, 3);  /* 0C094A80 mov.l @(disp,pc),Rn */
	IF(0x0C094A82u); r9 = MACL;  /* 0C094A82 sts macl,Rn */
	IF(0x0C094A84u); MACL = r0 * r2;  /* 0C094A84 mul.l Rm,Rn */
	r9 += r12;  /* 0C094A86 add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C094A8Au, 5);  /* 0C094A88 mov.l @(disp,Rm),Rn */
	IF(0x0C094A8Au); r3 = MACL;  /* 0C094A8A sts macl,Rn */
	r3 += r12;  /* 0C094A8C add Rm,Rn */
	r10 = R32(r3 + 0x24u); UPD(0x0C094A90u, 3);  /* 0C094A8E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C094A92u, 1);  /* 0C094A90 mov.l @(disp,Rm),Rn */
	r10 += r4;  /* 0C094A92 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C094A96u, 2);  /* 0C094A94 mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C094A98u, 1);  /* 0C094A96 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C094A98 add Rm,Rn */
	W32(r9 + 0x24u, r10); UPD(0x0C094A9Cu, 2);  /* 0C094A9A mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C094A9C tst Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C094B00u, 4); goto L_0C094B00; } UPD(0x0C094AA2u, 1); goto L_0C094AA2; }  /* 0C094A9E bt/s */
L_0C094AA2: BLKS(0x0C094AA2u);
	T = r0 == 0x5u;  /* 0C094AA2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C094AF0u, 4); goto L_0C094AF0; }  /* 0C094AA4 bt */
L_0C094AA6: BLKS(0x0C094AA6u);
	r9 = 0xB4u; UPD(0x0C094AA8u, 1);  /* 0C094AA6 mov.w @(disp,pc),Rn */
	IF(0x0C094AA8u); MACL = r13 * r9;  /* 0C094AA8 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C094AACu, 3);  /* 0C094AAA mov.l @(disp,pc),Rn */
	IF(0x0C094AACu); r8 = MACL;  /* 0C094AAC sts macl,Rn */
	r2 = 0x99u; UPD(0x0C094AB0u, 2);  /* 0C094AAE mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C094AB0 add Rm,Rn */
	r2 += r8;  /* 0C094AB2 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C094AB6u, 3);  /* 0C094AB4 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C094AB6 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C094AB8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C094ABA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0949E6u, 6); goto L_0C0949E6; } UPD(0x0C094AC0u, 1); goto L_0C094AC0; }  /* 0C094ABC bf/s */
L_0C094AC0: BLKS(0x0C094AC0u);
	r0 = 0x0u;  /* 0C094AC0 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C094AC4u, 2);  /* 0C094AC2 mov.b Rm,@Rn */
	r4 = r13;  /* 0C094AC4 mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C094AC8u, 2);  /* 0C094AC6 mov.w @(disp,pc),Rn */
	r7 = R32(r8 + 0xCu); UPD(0x0C094ACAu, 1);  /* 0C094AC8 mov.l @(disp,Rm),Rn */
	IF(0x0C094ACAu); r5 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C094ACCu, 1);  /* 0C094ACA mov.w @(r0,Rm),Rn */
	r13 = 0xC0A0380u; UPD(0x0C094ACEu, 1);  /* 0C094ACC mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C094ACE add Rm,Rn */
	IF(0x0C094AD0u); { u32 t_ = r13; PR = 0x0C094AD4u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094AD4u); }  /* 0C094AD0 jsr @Rn */
L_0C094AD4: BLKS(0x0C094AD4u);
	r2 = R32(r8 + 0xCu); UPD(0x0C094AD6u, 1);  /* 0C094AD4 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C094AD6 tst Rm,Rn */
	if (!T) { UPD(0x0C094AE4u, 4); goto L_0C094AE4; }  /* 0C094AD8 bf */
L_0C094ADA: BLKS(0x0C094ADAu);
	IF(0x0C094ADAu); MACL = r11 * r9;  /* 0C094ADA mul.l Rm,Rn */
	r8 = 0xA1u; UPD(0x0C094ADEu, 3);  /* 0C094ADC mov.w @(disp,pc),Rn */
	IF(0x0C094ADEu); r0 = MACL;  /* 0C094ADE sts macl,Rn */
	r0 += r10;  /* 0C094AE0 add Rm,Rn */
	IF(0x0C094AE2u); W8(r0 + r8, r2); UPD(0x0C094AE4u, 3);  /* 0C094AE2 mov.b Rm,@(r0,Rn) */
L_0C094AE4: BLKS(0x0C094AE4u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094AE4 bra */
L_0C094AF0: BLKS(0x0C094AF0u);
	r10 = R32(r3 + 0xCu); UPD(0x0C094AF2u, 1);  /* 0C094AF0 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C094AF2 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C094AFCu, 4); goto L_0C094AFC; } goto L_0C094AF8; }  /* 0C094AF4 bf/s */
L_0C094AF8: BLKS(0x0C094AF8u);
	{ IF(0x0C094AFAu); ; /* slot nop */ UPD(0x0C0948AAu, 4); goto L_0C0948AA; }  /* 0C094AF8 bra */
L_0C094AFC: BLKS(0x0C094AFCu);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094AFC bra */
L_0C094B00: BLKS(0x0C094B00u);
	r11 = R32(r3 + 0xCu); UPD(0x0C094B02u, 1);  /* 0C094B00 mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C094B02 tst Rm,Rn */
	if (T) { UPD(0x0C094AFCu, 4); goto L_0C094AFC; }  /* 0C094B04 bt */
L_0C094B06: BLKS(0x0C094B06u);
	r8 = 0x1u;  /* 0C094B06 mov #imm,Rn */
	{ IF(0x0C094B0Au); ; /* slot nop */ UPD(0x0C094488u, 4); goto L_0C094488; }  /* 0C094B08 bra */
L_0C094B10: BLKS(0x0C094B10u);
	r9 = 0xC0A05D0u; UPD(0x0C094B12u, 1);  /* 0C094B10 mov.l @(disp,pc),Rn */
	IF(0x0C094B12u); { u32 t_ = r9; PR = 0x0C094B16u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C094B16u); }  /* 0C094B12 jsr @Rn */
L_0C094B16: BLKS(0x0C094B16u);
	IF(0x0C094B16u); T = (s32)r0 >= 0;  /* 0C094B16 cmp/pz Rn */
	if (!T) { UPD(0x0C094B6Cu, 4); goto L_0C094B6C; }  /* 0C094B18 bf */
L_0C094B1A: BLKS(0x0C094B1Au);
	r1 = 0xB4u; UPD(0x0C094B1Cu, 1);  /* 0C094B1A mov.w @(disp,pc),Rn */
	IF(0x0C094B1Cu); MACL = r0 * r1;  /* 0C094B1C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C094B20u, 3);  /* 0C094B1E mov.l @(disp,pc),Rn */
	IF(0x0C094B20u); r7 = MACL;  /* 0C094B20 sts macl,Rn */
	r7 += r2;  /* 0C094B22 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C094B26u, 3);  /* 0C094B24 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Bu;  /* 0C094B26 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C094B2Au); MACL = r13 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C094B40u, 5); goto L_0C094B40; } goto L_0C094B2C; }  /* 0C094B28 bt/s */
L_0C094B2C: BLKS(0x0C094B2Cu);
	IF(0x0C094B2Cu); r1 = MACL;  /* 0C094B2C sts macl,Rn */
	UPD(0x0C094B2Eu, 3);
L_0C094B2E: BLKS(0x0C094B2Eu);
	{ r1 += r2; /* slot add Rm,Rn */ UPD(0x0C0947F6u, 3); goto L_0C0947F6; }  /* 0C094B2E bra */
L_0C094B40: BLKS(0x0C094B40u);
	IF(0x0C094B40u); MACL = r13 * r1;  /* 0C094B40 mul.l Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C094B44u, 3);  /* 0C094B42 mov.l @(disp,Rm),Rn */
	IF(0x0C094B44u); r4 = MACL;  /* 0C094B44 sts macl,Rn */
	r4 += r2;  /* 0C094B46 add Rm,Rn */
	r12 = R32(r7 + 0x28u); UPD(0x0C094B4Au, 3);  /* 0C094B48 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x2Cu); UPD(0x0C094B4Cu, 1);  /* 0C094B4A mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C094B4Eu, 1);  /* 0C094B4C mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C094B4E add Rm,Rn */
	r12 += r1;  /* 0C094B50 add Rm,Rn */
	W32(r4 + 0x24u, r11); UPD(0x0C094B54u, 3);  /* 0C094B52 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r12); UPD(0x0C094B56u, 1);  /* 0C094B54 mov.l Rm,@(disp,Rn) */
L_0C094B56: BLKS(0x0C094B56u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094B56 bra */
L_0C094B60: BLKS(0x0C094B60u);
	r8 = 0xC0A03F0u; UPD(0x0C094B62u, 1);  /* 0C094B60 mov.l @(disp,pc),Rn */
	IF(0x0C094B62u); { u32 t_ = r8; PR = 0x0C094B66u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C094B66u); }  /* 0C094B62 jsr @Rn */
L_0C094B66: BLKS(0x0C094B66u);
	IF(0x0C094B66u); T = (s32)r0 >= 0;  /* 0C094B66 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094B70u, 4); goto L_0C094B70; } UPD(0x0C094B6Cu, 1); goto L_0C094B6C; }  /* 0C094B68 bt/s */
L_0C094B6C: BLKS(0x0C094B6Cu);
	{ IF(0x0C094B6Eu); ; /* slot nop */ UPD(0x0C093ED0u, 3); goto L_0C093ED0; }  /* 0C094B6C bra */
L_0C094B70: BLKS(0x0C094B70u);
	r10 = 0xB4u; UPD(0x0C094B72u, 1);  /* 0C094B70 mov.w @(disp,pc),Rn */
	IF(0x0C094B72u); MACL = r13 * r10;  /* 0C094B72 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C094B76u, 3);  /* 0C094B74 mov.l @(disp,pc),Rn */
	IF(0x0C094B76u); r9 = MACL;  /* 0C094B76 sts macl,Rn */
	IF(0x0C094B78u); MACL = r11 * r10;  /* 0C094B78 mul.l Rm,Rn */
	r9 += r0;  /* 0C094B7A add Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C094B7Eu, 5);  /* 0C094B7C mov.l @(disp,Rm),Rn */
	IF(0x0C094B7Eu); r10 = MACL;  /* 0C094B7E sts macl,Rn */
	r10 += r0;  /* 0C094B80 add Rm,Rn */
	r3 = R32(r10 + 0x24u); UPD(0x0C094B84u, 3);  /* 0C094B82 mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C094B86u, 1);  /* 0C094B84 mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C094B86 add Rm,Rn */
	r7 = R32(r9 + 0x30u); UPD(0x0C094B8Au, 2);  /* 0C094B88 mov.l @(disp,Rm),Rn */
	r10 += 0x3Cu;  /* 0C094B8A add #imm,Rn */
	r6 += r7;  /* 0C094B8C add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C094B90u, 3);  /* 0C094B8E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C094B92u, 1);  /* 0C094B90 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C094B94u, 1);  /* 0C094B92 mov.w @Rm,Rn */
	r9 += 0x3Cu;  /* 0C094B94 add #imm,Rn */
	W16(r9, r2); UPD(0x0C094B98u, 2);  /* 0C094B96 mov.w Rm,@Rn */
	r9 += 0xFFFFFFC4u;  /* 0C094B98 add #imm,Rn */
	r11 = R32(r9 + 0xCu); UPD(0x0C094B9Cu, 2);  /* 0C094B9A mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C094B9C tst Rm,Rn */
	{ u32 c_ = T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094C40u, 4); goto L_0C094C40; } goto L_0C094BA2; }  /* 0C094B9E bt/s */
L_0C094BA2: BLKS(0x0C094BA2u);
	r0 = r11;  /* 0C094BA2 mov Rm,Rn */
	T = r0 == 0x1Bu;  /* 0C094BA4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C094BF0u, 6); goto L_0C094BF0; }  /* 0C094BA6 bt */
L_0C094BA8: BLKS(0x0C094BA8u);
	r11 = 0xB4u; UPD(0x0C094BAAu, 1);  /* 0C094BA8 mov.w @(disp,pc),Rn */
	IF(0x0C094BAAu); MACL = r13 * r11;  /* 0C094BAA mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C094BAEu, 3);  /* 0C094BAC mov.l @(disp,pc),Rn */
	IF(0x0C094BAEu); r3 = MACL;  /* 0C094BAE sts macl,Rn */
	r2 = 0x99u; UPD(0x0C094BB2u, 2);  /* 0C094BB0 mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C094BB2 add Rm,Rn */
	r2 += r3;  /* 0C094BB4 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C094BB8u, 3);  /* 0C094BB6 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C094BB8 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C094BBA extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C094BBC cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C094B56u, 6); goto L_0C094B56; } UPD(0x0C094BC2u, 1); goto L_0C094BC2; }  /* 0C094BBE bf/s */
L_0C094BC2: BLKS(0x0C094BC2u);
	r5 = 0x0u;  /* 0C094BC2 mov #imm,Rn */
	{ W8(r2, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C09440Au, 4); goto L_0C09440A; }  /* 0C094BC4 bra */
L_0C094BF0: BLKS(0x0C094BF0u);
	r3 = 0x9Fu; UPD(0x0C094BF2u, 1);  /* 0C094BF0 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C094BF2 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C094BF6u, 2);  /* 0C094BF4 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C094BF6 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C094BF8 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094C20u, 5); goto L_0C094C20; } goto L_0C094BFE; }  /* 0C094BFA bt/s */
L_0C094BFE: BLKS(0x0C094BFEu);
	T = r0 == 0x1u;  /* 0C094BFE cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C094B56u, 5); goto L_0C094B56; }  /* 0C094C00 bf */
L_0C094C02: BLKS(0x0C094C02u);
	r0 = r9;  /* 0C094C02 mov Rm,Rn */
	r4 = 0xA2u; UPD(0x0C094C06u, 2);  /* 0C094C04 mov.w @(disp,pc),Rn */
	IF(0x0C094C06u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C094C08u, 1);  /* 0C094C06 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C094C08 tst Rm,Rn */
	if (!T) { UPD(0x0C094B56u, 4); goto L_0C094B56; }  /* 0C094C0A bf */
L_0C094C0C: BLKS(0x0C094C0Cu);
	W8(r3, r1); UPD(0x0C094C0Eu, 1);  /* 0C094C0C mov.b Rm,@Rn */
	{ r1 = 0x1Au; /* slot mov #imm,Rn */ UPD(0x0C0948AAu, 3); goto L_0C0948AA; }  /* 0C094C0E bra */
L_0C094C20: BLKS(0x0C094C20u);
	r8 = 0xA0u; UPD(0x0C094C22u, 1);  /* 0C094C20 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C094C22 add Rm,Rn */
	r10 += r8;  /* 0C094C24 add Rm,Rn */
	r4 += 0x1u;  /* 0C094C26 add #imm,Rn */
	r10 += 0x1u;  /* 0C094C28 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C094C2Cu, 5);  /* 0C094C2A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C094C2Eu, 1);  /* 0C094C2C mov.b @Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C094C2E tst Rm,Rn */
	{ u32 c_ = !T; r4 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094B56u, 4); goto L_0C094B56; } goto L_0C094C34; }  /* 0C094C30 bf/s */
L_0C094C34: BLKS(0x0C094C34u);
	r4 += 0x2u;  /* 0C094C34 add #imm,Rn */
	r10 = 0x1u;  /* 0C094C36 mov #imm,Rn */
	r1 = r7;  /* 0C094C38 mov Rm,Rn */
	W8(r4, r10); UPD(0x0C094C3Cu, 5);  /* 0C094C3A mov.b Rm,@Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0944ECu, 3); goto L_0C0944EC; }  /* 0C094C3C bra */
L_0C094C40: BLKS(0x0C094C40u);
	r12 = 0x99u; UPD(0x0C094C42u, 1);  /* 0C094C40 mov.w @(disp,pc),Rn */
	r12 += r9;  /* 0C094C42 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C094C46u, 2);  /* 0C094C44 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C094C46 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C094C48 extu.b Rm,Rn */
	T = r0 == 0xAu;  /* 0C094C4A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r12, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C094C80u, 6); goto L_0C094C80; } UPD(0x0C094C50u, 1); goto L_0C094C50; }  /* 0C094C4C bt/s */
L_0C094C50: BLKS(0x0C094C50u);
	r2 = 0xA0u; UPD(0x0C094C52u, 1);  /* 0C094C50 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C094C52 add Rm,Rn */
	r10 += 0x1u;  /* 0C094C54 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C094C58u, 3);  /* 0C094C56 mov.b @Rm,Rn */
	r2 += r9;  /* 0C094C58 add Rm,Rn */
	r2 += 0x1u;  /* 0C094C5A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C094C5Eu, 3);  /* 0C094C5C mov.b @Rm,Rn */
	T = (r8 & r10) == 0;  /* 0C094C5E tst Rm,Rn */
	if (T) { UPD(0x0C094C7Au, 4); goto L_0C094C7A; }  /* 0C094C60 bt */
L_0C094C62: BLKS(0x0C094C62u);
	r7 = R32(r9 + 0xCu); UPD(0x0C094C64u, 1);  /* 0C094C62 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C094C64 mov Rm,Rn */
	r6 = 0xC0A0380u; UPD(0x0C094C68u, 2);  /* 0C094C66 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C094C68 add #imm,Rn */
	IF(0x0C094C6Au); { u32 t_ = r6; PR = 0x0C094C6Eu; W32(r9 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094C6Eu); }  /* 0C094C6A jsr @Rn */
L_0C094C6E: BLKS(0x0C094C6Eu);
	r0 = 0x88u; UPD(0x0C094C70u, 1);  /* 0C094C6E mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C094C70 mov #imm,Rn */
	IF(0x0C094C72u); W16(r0 + r9, r13); UPD(0x0C094C74u, 2);  /* 0C094C72 mov.w Rm,@(r0,Rn) */
	r9 += 0x50u;  /* 0C094C74 add #imm,Rn */
	W8(r12, r11); UPD(0x0C094C78u, 2);  /* 0C094C76 mov.b Rm,@Rn */
	W32(r9, r11); UPD(0x0C094C7Au, 1);  /* 0C094C78 mov.l Rm,@Rn */
L_0C094C7A: BLKS(0x0C094C7Au);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C093D9Eu, 3); goto L_0C093D9E; }  /* 0C094C7A bra */
L_0C094C80: BLKS(0x0C094C80u);
	r8 = 0x200000u; UPD(0x0C094C82u, 1);  /* 0C094C80 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C094C82 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C094C86u, 2);  /* 0C094C84 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C094C86 add Rm,Rn */
	IF(0x0C094C88u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C094C8Au, 2);  /* 0C094C88 mov.b @(r0,Rm),Rn */
	W8(r12, r11); UPD(0x0C094C8Cu, 1);  /* 0C094C8A mov.b Rm,@Rn */
	r0 = r3 & 0xFF;  /* 0C094C8C extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C094C90u, 2);  /* 0C094C8E mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C094C92u, 1);  /* 0C094C90 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C094C92 mov Rm,Rn */
	IF(0x0C094C94u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C094C96u, 2);  /* 0C094C94 mov.b @(r0,Rm),Rn */
	r0 = 0xC050D70u; UPD(0x0C094C98u, 1);  /* 0C094C96 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C094C98 extu.b Rm,Rn */
	r6 = 0xC000u; UPD(0x0C094C9Cu, 2);  /* 0C094C9A mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C094C9Eu, 1);  /* 0C094C9C mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C094CA0u, 1);  /* 0C094C9E mov.w @(disp,pc),Rn */
	IF(0x0C094CA0u); { u32 t_ = r0; PR = 0x0C094CA4u; W32(r15 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C094CA4u); }  /* 0C094CA0 jsr @Rn */
L_0C094CA4: BLKS(0x0C094CA4u);
	r2 = 0xFFFFF000u; UPD(0x0C094CA6u, 1);  /* 0C094CA4 mov.w @(disp,pc),Rn */
	r6 = r8;  /* 0C094CA6 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C094CAAu, 2);  /* 0C094CA8 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C094CAA add Rm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C094CAEu, 2);  /* 0C094CAC mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C094CAE mov #imm,Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C094CB2u, 2);  /* 0C094CB0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r3); UPD(0x0C094CB4u, 1);  /* 0C094CB2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C094CB6u, 1);  /* 0C094CB4 mov.l @Rm,Rn */
	IF(0x0C094CB6u); { u32 t_ = r8; PR = 0x0C094CBAu; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C094CBAu); }  /* 0C094CB6 jsr @Rn */
L_0C094CBA: BLKS(0x0C094CBAu);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C094C50u, 3); goto L_0C094C50; }  /* 0C094CBA bra */
L_0C094CC0: BLKS(0x0C094CC0u);
	r9 = 0xC0A0540u; UPD(0x0C094CC2u, 1);  /* 0C094CC0 mov.l @(disp,pc),Rn */
	IF(0x0C094CC2u); { u32 t_ = r9; PR = 0x0C094CC6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C094CC6u); }  /* 0C094CC2 jsr @Rn */
L_0C094CC6: BLKS(0x0C094CC6u);
	IF(0x0C094CC6u); T = (s32)r0 >= 0;  /* 0C094CC6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094CD0u, 4); goto L_0C094CD0; } goto L_0C094CCC; }  /* 0C094CC8 bt/s */
L_0C094CCC: BLKS(0x0C094CCCu);
	{ IF(0x0C094CCEu); ; /* slot nop */ UPD(0x0C093ED0u, 4); goto L_0C093ED0; }  /* 0C094CCC bra */
L_0C094CD0: BLKS(0x0C094CD0u);
	r2 = 0xB4u; UPD(0x0C094CD2u, 1);  /* 0C094CD0 mov.w @(disp,pc),Rn */
	IF(0x0C094CD2u); MACL = r0 * r2;  /* 0C094CD2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C094CD6u, 3);  /* 0C094CD4 mov.l @(disp,pc),Rn */
	IF(0x0C094CD6u); r3 = MACL;  /* 0C094CD6 sts macl,Rn */
	r3 += r7;  /* 0C094CD8 add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C094CDCu, 3);  /* 0C094CDA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Bu;  /* 0C094CDC cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C094CE0u); MACL = r13 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C094D20u, 5); goto L_0C094D20; } goto L_0C094CE2; }  /* 0C094CDE bt/s */
L_0C094CE2: BLKS(0x0C094CE2u);
	IF(0x0C094CE2u); r1 = MACL;  /* 0C094CE2 sts macl,Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C0947F6u, 6); goto L_0C0947F6; }  /* 0C094CE4 bra */
L_0C094D20: BLKS(0x0C094D20u);
	r3 += 0x3Cu;  /* 0C094D20 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C094D24u, 2);  /* 0C094D22 mov.w @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C094D24 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C094D44u, 4); goto L_0C094D44; } goto L_0C094D2A; }  /* 0C094D26 bt/s */
L_0C094D2A: BLKS(0x0C094D2Au);
	IF(0x0C094D2Au); MACL = r13 * r2;  /* 0C094D2A mul.l Rm,Rn */
	r12 = 0x9Cu; UPD(0x0C094D2Eu, 4);  /* 0C094D2C mov.w @(disp,pc),Rn */
	IF(0x0C094D2Eu); r8 = MACL;  /* 0C094D2E sts macl,Rn */
	r8 += r7;  /* 0C094D30 add Rm,Rn */
	r12 += r8;  /* 0C094D32 add Rm,Rn */
	r9 = r12;  /* 0C094D34 mov Rm,Rn */
	r9 += 0x3u;  /* 0C094D36 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C094D3Au, 6);  /* 0C094D38 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C094D3A extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C094D3C tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C094DE0u, 5); goto L_0C094DE0; } goto L_0C094D42; }  /* 0C094D3E bt/s */
L_0C094D42: BLKS(0x0C094D42u);
	if (T) { UPD(0x0C094DA0u, 4); goto L_0C094DA0; }  /* 0C094D42 bt */
L_0C094D44: BLKS(0x0C094D44u);
	r2 = 0xB4u; UPD(0x0C094D46u, 1);  /* 0C094D44 mov.w @(disp,pc),Rn */
	IF(0x0C094D46u); MACL = r13 * r2;  /* 0C094D46 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C094D4Au, 3);  /* 0C094D48 mov.l @(disp,pc),Rn */
	IF(0x0C094D4Au); r9 = MACL;  /* 0C094D4A sts macl,Rn */
	IF(0x0C094D4Cu); MACL = r11 * r2;  /* 0C094D4C mul.l Rm,Rn */
	r10 = 0x86u; UPD(0x0C094D50u, 4);  /* 0C094D4E mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C094D50 add Rm,Rn */
	r10 += r9;  /* 0C094D52 add Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C094D56u, 3);  /* 0C094D54 mov.l @(disp,pc),Rn */
	IF(0x0C094D56u); r12 = MACL;  /* 0C094D56 sts macl,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C094D5Au, 2);  /* 0C094D58 mov.w @Rm,Rn */
	r12 += r0;  /* 0C094D5A add Rm,Rn */
	r4 = r6;  /* 0C094D5C mov Rm,Rn */
	W32(r14, r6); UPD(0x0C094D60u, 3);  /* 0C094D5E mov.l Rm,@Rn */
	IF(0x0C094D60u); { u32 t_ = r11; PR = 0x0C094D64u; r5 = R32(r9 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C094D64u); }  /* 0C094D60 jsr @Rn */
L_0C094D64: BLKS(0x0C094D64u);
	r8 = 0x66666667u; UPD(0x0C094D66u, 1);  /* 0C094D64 mov.l @(disp,pc),Rn */
	IF(0x0C094D66u); r0 <<= 2;  /* 0C094D66 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C094D68 dmuls.l Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C094D6Cu, 4);  /* 0C094D6A mov.l @(disp,Rm),Rn */
	IF(0x0C094D6Cu); r3 = MACH;  /* 0C094D6C sts mach,Rn */
	IF(0x0C094D6Eu); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C094D6E shar Rn */
	IF(0x0C094D70u); T = r0 >> 31; r0 <<= 1;  /* 0C094D70 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C094D72 subc Rm,Rn */
	r3 -= r0;  /* 0C094D74 sub Rm,Rn */
	r5 = 0x80000u; UPD(0x0C094D78u, 6);  /* 0C094D76 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C094D78 add Rm,Rn */
	r4 += r5;  /* 0C094D7A add Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C094D7Eu, 3);  /* 0C094D7C mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C094D80u, 1);  /* 0C094D7E mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C094D82u, 1);  /* 0C094D80 mov.l @(disp,Rm),Rn */
	IF(0x0C094D82u); { u32 t_ = r11; PR = 0x0C094D86u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C094D86u); }  /* 0C094D82 jsr @Rn */
L_0C094D86: BLKS(0x0C094D86u);
	r7 = R32(r12 + 0x28u); UPD(0x0C094D88u, 1);  /* 0C094D86 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C094D88 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C094D8Cu, 2);  /* 0C094D8A mov.w @Rm,Rn */
	r0 += 0xFFFFFF84u;  /* 0C094D8C add #imm,Rn */
	IF(0x0C094D8Eu); r0 >>= 2;  /* 0C094D8E shlr2 Rn */
	IF(0x0C094D90u); T = r0 & 1; r0 >>= 1;  /* 0C094D90 shlr Rn */
	r0 &= 0x3Fu;  /* 0C094D92 and #imm,r0 */
	W32(r9 + 0x28u, r7); UPD(0x0C094D96u, 5);  /* 0C094D94 mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C093EA8u, 3); goto L_0C093EA8; }  /* 0C094D96 bra */
L_0C094DA0: BLKS(0x0C094DA0u);
	r5 = 0x86u; UPD(0x0C094DA2u, 1);  /* 0C094DA0 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C094DA2 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C094DA6u, 2);  /* 0C094DA4 mov.w @Rm,Rn */
	r4 = 0x100u; UPD(0x0C094DA8u, 1);  /* 0C094DA6 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C094DA8 exts.w Rm,Rn */
	T = r6 == r4;  /* 0C094DAA cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C094DD0u, 5); goto L_0C094DD0; } UPD(0x0C094DB0u, 1); goto L_0C094DB0; }  /* 0C094DAC bt/s */
L_0C094DB0: BLKS(0x0C094DB0u);
	T = (s32)r6 > (s32)r4;  /* 0C094DB0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094DBCu, 4); goto L_0C094DBC; } goto L_0C094DB6; }  /* 0C094DB2 bf/s */
L_0C094DB6: BLKS(0x0C094DB6u);
	r6 += 0xFFFFFFFFu;  /* 0C094DB6 add #imm,Rn */
	W16(r5, r6); UPD(0x0C094DBAu, 3);  /* 0C094DB8 mov.w Rm,@Rn */
	r7 = r6;  /* 0C094DBA mov Rm,Rn */
	UPD(0x0C094DBCu, 1);
L_0C094DBC: BLKS(0x0C094DBCu);
	r0 = 0xFFu; UPD(0x0C094DBEu, 1);  /* 0C094DBC mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C094DBE exts.w Rm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C094DC0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094D44u, 5); goto L_0C094D44; } goto L_0C094DC6; }  /* 0C094DC2 bt/s */
L_0C094DC6: BLKS(0x0C094DC6u);
	r9 += 0x1u;  /* 0C094DC6 add #imm,Rn */
	{ W16(r5, r9); /* slot mov.w Rm,@Rn */ UPD(0x0C094D44u, 5); goto L_0C094D44; }  /* 0C094DC8 bra */
L_0C094DD0: BLKS(0x0C094DD0u);
	r2 = 0xA2u; UPD(0x0C094DD2u, 1);  /* 0C094DD0 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C094DD2 mov Rm,Rn */
	IF(0x0C094DD4u); W8(r0 + r2, r8); UPD(0x0C094DD6u, 2);  /* 0C094DD4 mov.b Rm,@(r0,Rn) */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C094DB0u, 3); goto L_0C094DB0; }  /* 0C094DD6 bra */
L_0C094DE0: BLKS(0x0C094DE0u);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C094DE2u, 1);  /* 0C094DE0 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFu; UPD(0x0C094DE4u, 1);  /* 0C094DE2 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C094DE4 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C094DF0u, 4); goto L_0C094DF0; }  /* 0C094DE6 bt */
L_0C094DE8: BLKS(0x0C094DE8u);
	r3 = 0x10000u; UPD(0x0C094DEAu, 1);  /* 0C094DE8 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C094DEA add Rm,Rn */
	{ W32(r8 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C094D44u, 4); goto L_0C094D44; }  /* 0C094DEC bra */
L_0C094DF0: BLKS(0x0C094DF0u);
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C094DF2u, 1);  /* 0C094DF0 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C094DF2 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094E50u, 4); goto L_0C094E50; } goto L_0C094DF8; }  /* 0C094DF4 bf/s */
L_0C094DF8: BLKS(0x0C094DF8u);
	r10 = 0xA0u; UPD(0x0C094DFAu, 2);  /* 0C094DF8 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C094DFA add Rm,Rn */
	r3 += 0x2u;  /* 0C094DFC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C094E00u, 3);  /* 0C094DFE mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C094E00 tst Rm,Rn */
	if (T) { UPD(0x0C094E10u, 4); goto L_0C094E10; }  /* 0C094E02 bt */
L_0C094E04: BLKS(0x0C094E04u);
	r12 = r2;  /* 0C094E04 mov Rm,Rn */
	r12 += 0x1u;  /* 0C094E06 add #imm,Rn */
	W8(r9, r12); UPD(0x0C094E0Au, 3);  /* 0C094E08 mov.b Rm,@Rn */
L_0C094E0A: BLKS(0x0C094E0Au);
	{ IF(0x0C094E0Cu); ; /* slot nop */ UPD(0x0C094D44u, 3); goto L_0C094D44; }  /* 0C094E0A bra */
L_0C094E10: BLKS(0x0C094E10u);
	r9 = 0xC058130u; UPD(0x0C094E12u, 1);  /* 0C094E10 mov.l @(disp,pc),Rn */
	IF(0x0C094E12u); { u32 t_ = r9; PR = 0x0C094E16u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C094E16u); }  /* 0C094E12 jsr @Rn */
L_0C094E16: BLKS(0x0C094E16u);
	r9 = 0xC057430u; UPD(0x0C094E18u, 1);  /* 0C094E16 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C094E18 mov Rm,Rn */
	IF(0x0C094E1Au); { u32 t_ = r9; PR = 0x0C094E1Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C094E1Eu); }  /* 0C094E1A jsr @Rn */
L_0C094E1E: BLKS(0x0C094E1Eu);
	r3 = 0x86u; UPD(0x0C094E20u, 1);  /* 0C094E1E mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C094E20 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C094E24u, 2);  /* 0C094E22 mov.w @Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C094E26u, 1);  /* 0C094E24 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C094E26 cmp/gt Rm,Rn */
	{ u32 c_ = T; r8 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C094E32u, 4); goto L_0C094E32; } goto L_0C094E2C; }  /* 0C094E28 bt/s */
L_0C094E2C: BLKS(0x0C094E2Cu);
	W16(r3, r10); UPD(0x0C094E2Eu, 2);  /* 0C094E2C mov.w Rm,@Rn */
	r2 = r10;  /* 0C094E2E mov Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C094E30 exts.w Rm,Rn */
	UPD(0x0C094E32u, 2);
L_0C094E32: BLKS(0x0C094E32u);
	r2 = 0x160u; UPD(0x0C094E34u, 1);  /* 0C094E32 mov.w @(disp,pc),Rn */
	T = (s32)r8 > (s32)r2;  /* 0C094E34 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C094E3Au, 4); goto L_0C094E3A; }  /* 0C094E36 bf */
L_0C094E38: BLKS(0x0C094E38u);
	W16(r3, r2); UPD(0x0C094E3Au, 1);  /* 0C094E38 mov.w Rm,@Rn */
L_0C094E3A: BLKS(0x0C094E3Au);
	r10 = 0xC0A9E40u; UPD(0x0C094E3Cu, 1);  /* 0C094E3A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C094E3C mov Rm,Rn */
	r5 = 0x5Au;  /* 0C094E3E mov #imm,Rn */
	IF(0x0C094E40u); { u32 t_ = r10; PR = 0x0C094E44u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C094E44u); }  /* 0C094E40 jsr @Rn */
L_0C094E44: BLKS(0x0C094E44u);
	T = (r0 & r0) == 0;  /* 0C094E44 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C094E0Au, 4); goto L_0C094E0A; } goto L_0C094E4A; }  /* 0C094E46 bt/s */
L_0C094E4A: BLKS(0x0C094E4Au);
	W8(r12, r2); UPD(0x0C094E4Cu, 2);  /* 0C094E4A mov.b Rm,@Rn */
L_0C094E4C: BLKS(0x0C094E4Cu);
	{ IF(0x0C094E4Eu); ; /* slot nop */ UPD(0x0C094D44u, 3); goto L_0C094D44; }  /* 0C094E4C bra */
L_0C094E50: BLKS(0x0C094E50u);
	r5 = 0xFFF80000u; UPD(0x0C094E52u, 1);  /* 0C094E50 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C094E52 add Rm,Rn */
	r3 = 0xA1u; UPD(0x0C094E56u, 2);  /* 0C094E54 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C094E56 mov Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C094E5Au, 2);  /* 0C094E58 mov.l Rm,@(disp,Rn) */
	r4 += 0xFFFFFFFFu;  /* 0C094E5A add #imm,Rn */
	r10 = 0x1u;  /* 0C094E5C mov #imm,Rn */
	r8 = r4 & 0xFF;  /* 0C094E5E extu.b Rm,Rn */
	IF(0x0C094E60u); W8(r0 + r3, r10); UPD(0x0C094E62u, 4);  /* 0C094E60 mov.b Rm,@(r0,Rn) */
	T = (r8 & r8) == 0;  /* 0C094E62 tst Rm,Rn */
	{ u32 c_ = !T; W8(r12, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C094E4Cu, 4); goto L_0C094E4C; } UPD(0x0C094E68u, 1); goto L_0C094E68; }  /* 0C094E64 bf/s */
L_0C094E68: BLKS(0x0C094E68u);
	r12 = 0xC0580D0u; UPD(0x0C094E6Au, 1);  /* 0C094E68 mov.l @(disp,pc),Rn */
	IF(0x0C094E6Au); { u32 t_ = r12; PR = 0x0C094E6Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C094E6Eu); }  /* 0C094E6A jsr @Rn */
L_0C094E6E: BLKS(0x0C094E6Eu);
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C094D44u, 3); goto L_0C094D44; }  /* 0C094E6E bra */
L_0C094EC0: BLKS(0x0C094EC0u);
	r9 = 0xC0A0540u; UPD(0x0C094EC2u, 1);  /* 0C094EC0 mov.l @(disp,pc),Rn */
	IF(0x0C094EC2u); { u32 t_ = r9; PR = 0x0C094EC6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C094EC6u); }  /* 0C094EC2 jsr @Rn */
L_0C094EC6: BLKS(0x0C094EC6u);
	IF(0x0C094EC6u); T = (s32)r0 >= 0;  /* 0C094EC6 cmp/pz Rn */
	if (!T) { UPD(0x0C094F5Cu, 4); goto L_0C094F5C; }  /* 0C094EC8 bf */
L_0C094ECA: BLKS(0x0C094ECAu);
	r9 = 0xB4u; UPD(0x0C094ECCu, 1);  /* 0C094ECA mov.w @(disp,pc),Rn */
	IF(0x0C094ECCu); MACL = r13 * r9;  /* 0C094ECC mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C094ED0u, 3);  /* 0C094ECE mov.l @(disp,pc),Rn */
	IF(0x0C094ED0u); r12 = MACL;  /* 0C094ED0 sts macl,Rn */
	IF(0x0C094ED2u); MACL = r0 * r9;  /* 0C094ED2 mul.l Rm,Rn */
	r12 += r1;  /* 0C094ED4 add Rm,Rn */
	r5 = 0x84u; UPD(0x0C094ED8u, 5);  /* 0C094ED6 mov.w @(disp,pc),Rn */
	IF(0x0C094ED8u); r9 = MACL;  /* 0C094ED8 sts macl,Rn */
	r4 = r12;  /* 0C094EDA mov Rm,Rn */
	r9 += r1;  /* 0C094EDC add Rm,Rn */
	r4 += r5;  /* 0C094EDE add Rm,Rn */
	r5 += r9;  /* 0C094EE0 add Rm,Rn */
	r5 += 0x2u;  /* 0C094EE2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C094EE6u, 7);  /* 0C094EE4 mov.w @Rm,Rn */
	r4 += 0x2u;  /* 0C094EE6 add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C094EEAu, 2);  /* 0C094EE8 mov.l @(disp,pc),Rn */
	W16(r4, r0); UPD(0x0C094EECu, 1);  /* 0C094EEA mov.w Rm,@Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C094EEEu, 1);  /* 0C094EEC mov.l @(disp,Rm),Rn */
	r4 = r0;  /* 0C094EEE mov Rm,Rn */
	IF(0x0C094EF0u); { u32 t_ = r8; PR = 0x0C094EF4u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C094EF4u); }  /* 0C094EF0 jsr @Rn */
L_0C094EF4: BLKS(0x0C094EF4u);
	r7 = 0x66666667u; UPD(0x0C094EF6u, 1);  /* 0C094EF4 mov.l @(disp,pc),Rn */
	IF(0x0C094EF6u); r0 <<= 2;  /* 0C094EF6 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r7; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C094EF8 dmuls.l Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C094EFCu, 4);  /* 0C094EFA mov.l @(disp,Rm),Rn */
	r8 = r12;  /* 0C094EFC mov Rm,Rn */
	IF(0x0C094EFEu); r2 = MACH;  /* 0C094EFE sts mach,Rn */
	IF(0x0C094F00u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C094F00 shar Rn */
	IF(0x0C094F02u); T = r0 >> 31; r0 <<= 1;  /* 0C094F02 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C094F04 subc Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C094F08u, 6);  /* 0C094F06 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C094F08 sub Rm,Rn */
	r6 += r2;  /* 0C094F0A add Rm,Rn */
	r4 = R32(r14); UPD(0x0C094F0Eu, 3);  /* 0C094F0C mov.l @Rm,Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C094F10u, 1);  /* 0C094F0E mov.l Rm,@(disp,Rn) */
	IF(0x0C094F10u); { u32 t_ = r10; PR = 0x0C094F14u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C094F14u); }  /* 0C094F10 jsr @Rn */
L_0C094F14: BLKS(0x0C094F14u);
	r4 = 0xA0u; UPD(0x0C094F16u, 1);  /* 0C094F14 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C094F16 mov #imm,Rn */
	r8 += r4;  /* 0C094F18 add Rm,Rn */
	r4 += r9;  /* 0C094F1A add Rm,Rn */
	r4 += 0x1u;  /* 0C094F1C add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C094F20u, 5);  /* 0C094F1E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C094F20 add #imm,Rn */
	W8(r8, r3); UPD(0x0C094F24u, 2);  /* 0C094F22 mov.b Rm,@Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C094F26u, 1);  /* 0C094F24 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A0380u; UPD(0x0C094F28u, 1);  /* 0C094F26 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C094F28 add Rm,Rn */
	W8(r4, r5); UPD(0x0C094F2Cu, 2);  /* 0C094F2A mov.b Rm,@Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C094F2Eu, 1);  /* 0C094F2C mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C094F2E mov Rm,Rn */
	W32(r12 + 0x28u, r11); UPD(0x0C094F32u, 2);  /* 0C094F30 mov.l Rm,@(disp,Rn) */
	IF(0x0C094F32u); { u32 t_ = r10; PR = 0x0C094F36u; W32(r12 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094F36u); }  /* 0C094F32 jsr @Rn */
L_0C094F36: BLKS(0x0C094F36u);
	r4 = r13;  /* 0C094F36 mov Rm,Rn */
	r1 = r10;  /* 0C094F38 mov Rm,Rn */
	r14 += 0x20u;  /* 0C094F3A add #imm,Rn */
	r15 = r14;  /* 0C094F3C mov Rm,Rn */
	IF(0x0C094F3Eu); PR = R32(r15); r15 += 4; UPD(0x0C094F40u, 5);  /* 0C094F3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C094F42u, 1);  /* 0C094F40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C094F44u, 1);  /* 0C094F42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C094F46u, 1);  /* 0C094F44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C094F48u, 1);  /* 0C094F46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C094F4Au, 1);  /* 0C094F48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C094F4Cu, 1);  /* 0C094F4A mov.l @Rm+,Rn */
	IF(0x0C094F4Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C094F4C jmp @Rn */
L_0C094F50: BLKS(0x0C094F50u);
	r12 = 0xC0A0540u; UPD(0x0C094F52u, 1);  /* 0C094F50 mov.l @(disp,pc),Rn */
	IF(0x0C094F52u); { u32 t_ = r12; PR = 0x0C094F56u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C094F56u); }  /* 0C094F52 jsr @Rn */
L_0C094F56: BLKS(0x0C094F56u);
	IF(0x0C094F56u); T = (s32)r0 >= 0;  /* 0C094F56 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C094F64u, 4); goto L_0C094F64; } UPD(0x0C094F5Cu, 1); goto L_0C094F5C; }  /* 0C094F58 bt/s */
L_0C094F5C: BLKS(0x0C094F5Cu);
	r1 = 0xFFFFEF6Eu; UPD(0x0C094F5Eu, 1);  /* 0C094F5C mov.w @(disp,pc),Rn */
	IF(0x0C094F5Eu); { u32 tv_ = (r1 + 0x0C094F62u); u32 t_ = PHYS(tv_); IF(0x0C094F60u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C094F5E braf Rn */
L_0C094F64: BLKS(0x0C094F64u);
	r10 = 0xB4u; UPD(0x0C094F66u, 1);  /* 0C094F64 mov.w @(disp,pc),Rn */
	IF(0x0C094F66u); MACL = r13 * r10;  /* 0C094F66 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C094F6Au, 3);  /* 0C094F68 mov.l @(disp,pc),Rn */
	IF(0x0C094F6Au); r12 = MACL;  /* 0C094F6A sts macl,Rn */
	IF(0x0C094F6Cu); MACL = r11 * r10;  /* 0C094F6C mul.l Rm,Rn */
	r12 += r1;  /* 0C094F6E add Rm,Rn */
	r0 = 0x84u; UPD(0x0C094F72u, 5);  /* 0C094F70 mov.w @(disp,pc),Rn */
	IF(0x0C094F72u); r10 = MACL;  /* 0C094F72 sts macl,Rn */
	r9 = r12;  /* 0C094F74 mov Rm,Rn */
	r10 += r1;  /* 0C094F76 add Rm,Rn */
	r9 += r0;  /* 0C094F78 add Rm,Rn */
	r0 += r10;  /* 0C094F7A add Rm,Rn */
	r0 += 0x2u;  /* 0C094F7C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C094F80u, 7);  /* 0C094F7E mov.w @Rm,Rn */
	r9 += 0x2u;  /* 0C094F80 add #imm,Rn */
	r11 = 0xC058060u; UPD(0x0C094F84u, 2);  /* 0C094F82 mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C094F84 mov Rm,Rn */
	W16(r9, r5); UPD(0x0C094F88u, 2);  /* 0C094F86 mov.w Rm,@Rn */
	W32(r14, r5); UPD(0x0C094F8Au, 1);  /* 0C094F88 mov.l Rm,@Rn */
	W32(r14 + 0xCu, r9); UPD(0x0C094F8Cu, 1);  /* 0C094F8A mov.l Rm,@(disp,Rn) */
	IF(0x0C094F8Cu); { u32 t_ = r11; PR = 0x0C094F90u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C094F90u); }  /* 0C094F8C jsr @Rn */
L_0C094F90: BLKS(0x0C094F90u);
	r8 = 0x66666667u; UPD(0x0C094F92u, 1);  /* 0C094F90 mov.l @(disp,pc),Rn */
	IF(0x0C094F92u); r0 <<= 2;  /* 0C094F92 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C094F94 dmuls.l Rm,Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C094F98u, 4);  /* 0C094F96 mov.l @(disp,Rm),Rn */
	IF(0x0C094F98u); r4 = MACH;  /* 0C094F98 sts mach,Rn */
	IF(0x0C094F9Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C094F9A shar Rn */
	IF(0x0C094F9Cu); T = r0 >> 31; r0 <<= 1;  /* 0C094F9C shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C094F9E subc Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C094FA2u, 5);  /* 0C094FA0 mov.l @(disp,pc),Rn */
	r4 -= r0;  /* 0C094FA2 sub Rm,Rn */
	r7 += r4;  /* 0C094FA4 add Rm,Rn */
	W32(r12 + 0x24u, r7); UPD(0x0C094FA8u, 3);  /* 0C094FA6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C094FAAu, 1);  /* 0C094FA8 mov.l @(disp,Rm),Rn */
	IF(0x0C094FAAu); { u32 t_ = r9; PR = 0x0C094FAEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C094FAEu); }  /* 0C094FAA jsr @Rn */
L_0C094FAE: BLKS(0x0C094FAEu);
	r2 = R32(r10 + 0x28u); UPD(0x0C094FB0u, 1);  /* 0C094FAE mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C094FB0 mov Rm,Rn */
	r8 = 0xC0A0380u; UPD(0x0C094FB4u, 2);  /* 0C094FB2 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C094FB4 add Rm,Rn */
	r6 = R32(r10 + 0xCu); UPD(0x0C094FB8u, 2);  /* 0C094FB6 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r2); UPD(0x0C094FBAu, 1);  /* 0C094FB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C094FBAu); { u32 t_ = r8; PR = 0x0C094FBEu; W32(r12 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094FBEu); }  /* 0C094FBA jsr @Rn */
L_0C094FBE: BLKS(0x0C094FBEu);
	IF(0x0C094FBEu); { u32 t_ = r8; PR = 0x0C094FC2u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C094FC2u); }  /* 0C094FBE jsr @Rn */
L_0C094FC2: BLKS(0x0C094FC2u);
	r3 = 0xA1u; UPD(0x0C094FC4u, 1);  /* 0C094FC2 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C094FC4 mov Rm,Rn */
	IF(0x0C094FC6u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C094FC8u, 2);  /* 0C094FC6 mov.b @(r0,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C094FC8 tst Rm,Rn */
	if (!T) { UPD(0x0C094FD6u, 4); goto L_0C094FD6; }  /* 0C094FCA bf */
L_0C094FCC: BLKS(0x0C094FCCu);
	r14 += 0x20u;  /* 0C094FCC add #imm,Rn */
	r13 = 0xFFFFEDCAu; UPD(0x0C094FD0u, 2);  /* 0C094FCE mov.w @(disp,pc),Rn */
	IF(0x0C094FD0u); { u32 tv_ = (r13 + 0x0C094FD4u); u32 t_ = PHYS(tv_); IF(0x0C094FD2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C094FD0 braf Rn */
L_0C094FD6: BLKS(0x0C094FD6u);
	r6 = R32(r14 + 0xCu); UPD(0x0C094FD8u, 1);  /* 0C094FD6 mov.l @(disp,Rm),Rn */
	r10 = 0xE0000u; UPD(0x0C094FDAu, 1);  /* 0C094FD8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C094FDCu, 1);  /* 0C094FDA mov.w @Rm,Rn */
	r5 = r10;  /* 0C094FDC mov Rm,Rn */
	r4 = r3;  /* 0C094FDE mov Rm,Rn */
	IF(0x0C094FE0u); { u32 t_ = r11; PR = 0x0C094FE4u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C094FE4u); }  /* 0C094FE0 jsr @Rn */
L_0C094FE4: BLKS(0x0C094FE4u);
	r13 = R32(r12 + 0x24u); UPD(0x0C094FE6u, 1);  /* 0C094FE4 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C094FE6 mov Rm,Rn */
	r13 += r0;  /* 0C094FE8 add Rm,Rn */
	IF(0x0C094FEAu); { u32 t_ = r9; PR = 0x0C094FEEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C094FEEu); }  /* 0C094FEA jsr @Rn */
L_0C094FEE: BLKS(0x0C094FEEu);
	r6 = R32(r12 + 0x28u); UPD(0x0C094FF0u, 1);  /* 0C094FEE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C094FF0 add #imm,Rn */
	r12 = 0x40000u; UPD(0x0C094FF4u, 2);  /* 0C094FF2 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C094FF4 add Rm,Rn */
	r11 = 0xC7C1554u; UPD(0x0C094FF8u, 2);  /* 0C094FF6 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C094FF8 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C094FFCu, 2);  /* 0C094FFA mov.l Rm,@Rn */
	r5 = r13;  /* 0C094FFC mov Rm,Rn */
	IF(0x0C094FFEu); { u32 t_ = r11; PR = 0x0C095002u; r7 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C1554, 0x0C7C1554u, 0x0C095002u); }  /* 0C094FFE jsr @Rn */
L_0C095002: BLKS(0x0C095002u);
	r13 = 0xFFFFF042u; UPD(0x0C095004u, 1);  /* 0C095002 mov.w @(disp,pc),Rn */
	IF(0x0C095004u); { u32 tv_ = (r13 + 0x0C095008u); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09404Au: goto L_0C09404A; default: JUMPD(tv_); } }  /* 0C095004 braf Rn */
L_0C095010: BLKS(0x0C095010u);
	r8 = 0xC0A05D0u; UPD(0x0C095012u, 1);  /* 0C095010 mov.l @(disp,pc),Rn */
	IF(0x0C095012u); { u32 t_ = r8; PR = 0x0C095016u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C095016u); }  /* 0C095012 jsr @Rn */
L_0C095016: BLKS(0x0C095016u);
	IF(0x0C095016u); T = (s32)r0 >= 0;  /* 0C095016 cmp/pz Rn */
	if (!T) { UPD(0x0C0950ACu, 4); goto L_0C0950AC; }  /* 0C095018 bf */
L_0C09501A: BLKS(0x0C09501Au);
	r2 = 0xB4u; UPD(0x0C09501Cu, 1);  /* 0C09501A mov.w @(disp,pc),Rn */
	IF(0x0C09501Cu); MACL = r13 * r2;  /* 0C09501C mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C095020u, 3);  /* 0C09501E mov.l @(disp,pc),Rn */
	IF(0x0C095020u); r4 = MACL;  /* 0C095020 sts macl,Rn */
	IF(0x0C095022u); MACL = r0 * r2;  /* 0C095022 mul.l Rm,Rn */
	r4 += r10;  /* 0C095024 add Rm,Rn */
	r1 = R32(r4 + 0x2Cu); UPD(0x0C095028u, 5);  /* 0C095026 mov.l @(disp,Rm),Rn */
	IF(0x0C095028u); r11 = MACL;  /* 0C095028 sts macl,Rn */
	r11 += r10;  /* 0C09502A add Rm,Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C09502Eu, 3);  /* 0C09502C mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0x30u); UPD(0x0C095030u, 1);  /* 0C09502E mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C095030 add Rm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C095034u, 2);  /* 0C095032 mov.l @(disp,Rm),Rn */
	r12 = R32(r11 + 0x24u); UPD(0x0C095036u, 1);  /* 0C095034 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C095036 add #imm,Rn */
	r12 += r1;  /* 0C095038 add Rm,Rn */
	r0 &= 0x7u;  /* 0C09503A and #imm,r0 */
	r9 = 0xC0A0380u; UPD(0x0C09503Eu, 4);  /* 0C09503C mov.l @(disp,pc),Rn */
	W32(r4 + 0x24u, r12); UPD(0x0C095040u, 1);  /* 0C09503E mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r5); UPD(0x0C095042u, 1);  /* 0C095040 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C095044u, 1);  /* 0C095042 mov.l Rm,@(disp,Rn) */
	IF(0x0C095044u); { u32 t_ = r9; PR = 0x0C095048u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095048u); }  /* 0C095044 jsr @Rn */
L_0C095048: BLKS(0x0C095048u);
	r4 = r13;  /* 0C095048 mov Rm,Rn */
	r7 = r9;  /* 0C09504A mov Rm,Rn */
	r14 += 0x20u;  /* 0C09504C add #imm,Rn */
	r15 = r14;  /* 0C09504E mov Rm,Rn */
	IF(0x0C095050u); PR = R32(r15); r15 += 4; UPD(0x0C095052u, 5);  /* 0C095050 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C095054u, 1);  /* 0C095052 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C095056u, 1);  /* 0C095054 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C095058u, 1);  /* 0C095056 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09505Au, 1);  /* 0C095058 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09505Cu, 1);  /* 0C09505A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09505Eu, 1);  /* 0C09505C mov.l @Rm+,Rn */
	IF(0x0C09505Eu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C09505E jmp @Rn */
L_0C0950A0: BLKS(0x0C0950A0u);
	r8 = 0xC0A05D0u; UPD(0x0C0950A2u, 1);  /* 0C0950A0 mov.l @(disp,pc),Rn */
	IF(0x0C0950A2u); { u32 t_ = r8; PR = 0x0C0950A6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0950A6u); }  /* 0C0950A2 jsr @Rn */
L_0C0950A6: BLKS(0x0C0950A6u);
	IF(0x0C0950A6u); T = (s32)r0 >= 0;  /* 0C0950A6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0950B4u, 4); goto L_0C0950B4; } UPD(0x0C0950ACu, 1); goto L_0C0950AC; }  /* 0C0950A8 bt/s */
L_0C0950AC: BLKS(0x0C0950ACu);
	r1 = 0xFFFFEE1Eu; UPD(0x0C0950AEu, 1);  /* 0C0950AC mov.w @(disp,pc),Rn */
	IF(0x0C0950AEu); { u32 tv_ = (r1 + 0x0C0950B2u); u32 t_ = PHYS(tv_); IF(0x0C0950B0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C0950AE braf Rn */
L_0C0950B4: BLKS(0x0C0950B4u);
	r2 = 0xB4u; UPD(0x0C0950B6u, 1);  /* 0C0950B4 mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0950B6 mov #imm,Rn */
	IF(0x0C0950B8u); MACL = r13 * r2;  /* 0C0950B8 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0950BCu, 4);  /* 0C0950BA mov.l @(disp,pc),Rn */
	IF(0x0C0950BCu); r0 = MACL;  /* 0C0950BC sts macl,Rn */
	IF(0x0C0950BEu); MACL = r11 * r2;  /* 0C0950BE mul.l Rm,Rn */
	r0 += r10;  /* 0C0950C0 add Rm,Rn */
	r7 = 0x9Fu; UPD(0x0C0950C4u, 5);  /* 0C0950C2 mov.w @(disp,pc),Rn */
	IF(0x0C0950C4u); r5 = MACL;  /* 0C0950C4 sts macl,Rn */
	r5 += r10;  /* 0C0950C6 add Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C0950CAu, 3);  /* 0C0950C8 mov.l @(disp,Rm),Rn */
	r9 = R32(r5 + 0x28u); UPD(0x0C0950CCu, 1);  /* 0C0950CA mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x2Cu); UPD(0x0C0950CEu, 1);  /* 0C0950CC mov.l @(disp,Rm),Rn */
	r4 = R32(r0 + 0x30u); UPD(0x0C0950D0u, 1);  /* 0C0950CE mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C0950D0 add Rm,Rn */
	IF(0x0C0950D2u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0950D4u, 2);  /* 0C0950D2 mov.b @(r0,Rm),Rn */
	r9 += r4;  /* 0C0950D4 add Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C0950D6 extu.b Rm,Rn */
	W32(r0 + 0x24u, r11); UPD(0x0C0950DAu, 3);  /* 0C0950D8 mov.l Rm,@(disp,Rn) */
	T = r2 > r3;  /* 0C0950DA cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C095196u, 4); goto L_0C095196; } UPD(0x0C0950E0u, 1); goto L_0C0950E0; }  /* 0C0950DC bt/s */
L_0C0950E0: BLKS(0x0C0950E0u);
	r0 = 0xC0950F8u;  /* 0C0950E0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0950E2 add Rm,Rn */
	IF(0x0C0950E4u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0950E6u, 3);  /* 0C0950E4 mov.w @(r0,Rm),Rn */
	IF(0x0C0950E6u); { u32 tv_ = (r8 + 0x0C0950EAu); u32 t_ = PHYS(tv_); IF(0x0C0950E8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C095100u: goto L_0C095100; case 0x0C095160u: goto L_0C095160; case 0x0C0951B0u: goto L_0C0951B0; case 0x0C095270u: goto L_0C095270; default: JUMPD(tv_); } }  /* 0C0950E6 braf Rn */
L_0C095100: BLKS(0x0C095100u);
	r7 = 0xB4u; UPD(0x0C095102u, 1);  /* 0C095100 mov.w @(disp,pc),Rn */
	IF(0x0C095102u); MACL = r13 * r7;  /* 0C095102 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C095106u, 3);  /* 0C095104 mov.l @(disp,pc),Rn */
	IF(0x0C095106u); r8 = MACL;  /* 0C095106 sts macl,Rn */
	r8 += r1;  /* 0C095108 add Rm,Rn */
	r8 += 0x7Eu;  /* 0C09510A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C09510Eu, 4);  /* 0C09510C mov.w @Rm,Rn */
	IF(0x0C09510Eu); MACL = r0 * r7;  /* 0C09510E mul.l Rm,Rn */
	r8 += 0xFFFFFF82u;  /* 0C095110 add #imm,Rn */
	IF(0x0C095112u); r0 = MACL;  /* 0C095112 sts macl,Rn */
	r0 += r1;  /* 0C095114 add Rm,Rn */
	r7 += 0xFFFFFFF1u;  /* 0C095116 add #imm,Rn */
	IF(0x0C095118u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09511Au, 7);  /* 0C095118 mov.b @(r0,Rm),Rn */
	r7 += 0xFFFFFFFCu;  /* 0C09511A add #imm,Rn */
	r0 = r8;  /* 0C09511C mov Rm,Rn */
	IF(0x0C09511Eu); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C095120u, 3);  /* 0C09511E mov.b @(r0,Rm),Rn */
	T = (r6 & r3) == 0;  /* 0C095120 tst Rm,Rn */
	if (T) { UPD(0x0C095196u, 4); goto L_0C095196; }  /* 0C095122 bt */
L_0C095124: BLKS(0x0C095124u);
	r4 = r13;  /* 0C095124 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C095128u, 2);  /* 0C095126 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C095128 mov #imm,Rn */
	IF(0x0C09512Au); { u32 t_ = r13; PR = 0x0C09512Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09512Eu); }  /* 0C09512A jsr @Rn */
L_0C09512E: BLKS(0x0C09512Eu);
	T = (r0 & r0) == 0;  /* 0C09512E tst Rm,Rn */
	if (T) { UPD(0x0C095196u, 4); goto L_0C095196; }  /* 0C095130 bt */
L_0C095132: BLKS(0x0C095132u);
	r5 = R32(r8 + 0x30u); UPD(0x0C095134u, 1);  /* 0C095132 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C095134 mov #imm,Rn */
	r8 += 0x50u;  /* 0C095136 add #imm,Rn */
	W32(r8, r5); UPD(0x0C09513Au, 3);  /* 0C095138 mov.l Rm,@Rn */
	r0 = 0x88u; UPD(0x0C09513Cu, 1);  /* 0C09513A mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09513C add #imm,Rn */
	IF(0x0C09513Eu); W16(r0 + r8, r4); UPD(0x0C095140u, 2);  /* 0C09513E mov.w Rm,@(r0,Rn) */
	r0 += 0x17u;  /* 0C095140 add #imm,Rn */
	IF(0x0C095142u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C095144u, 2);  /* 0C095142 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C095144 add #imm,Rn */
	IF(0x0C095146u); W8(r0 + r8, r9); UPD(0x0C095148u, 2);  /* 0C095146 mov.b Rm,@(r0,Rn) */
L_0C095148: BLKS(0x0C095148u);
	r4 = R32(r8); UPD(0x0C09514Au, 1);  /* 0C095148 mov.l @Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C09514Cu, 1);  /* 0C09514A mov.w @(disp,pc),Rn */
	r4 &= r1;  /* 0C09514C and Rm,Rn */
	W32(r8, r4); UPD(0x0C095150u, 2);  /* 0C09514E mov.l Rm,@Rn */
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C0947BEu, 3); goto L_0C0947BE; }  /* 0C095150 bra */
L_0C095160: BLKS(0x0C095160u);
	r12 = 0xB4u; UPD(0x0C095162u, 1);  /* 0C095160 mov.w @(disp,pc),Rn */
	IF(0x0C095162u); MACL = r13 * r12;  /* 0C095162 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C095166u, 3);  /* 0C095164 mov.l @(disp,pc),Rn */
	IF(0x0C095166u); r3 = MACL;  /* 0C095166 sts macl,Rn */
	r3 += r11;  /* 0C095168 add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09516Cu, 3);  /* 0C09516A mov.l @(disp,Rm),Rn */
	r1 = 0xFFFF8000u; UPD(0x0C09516Eu, 1);  /* 0C09516C mov.w @(disp,pc),Rn */
	IF(0x0C09516Eu); T = (s32)r2 >= 0;  /* 0C09516E cmp/pz Rn */
	if (!T) { UPD(0x0C095174u, 4); goto L_0C095174; }  /* 0C095170 bf */
L_0C095172: BLKS(0x0C095172u);
	r1 = 0x8000u; UPD(0x0C095174u, 1);  /* 0C095172 mov.l @(disp,pc),Rn */
L_0C095174: BLKS(0x0C095174u);
	r2 += r1;  /* 0C095174 add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C095178u, 2);  /* 0C095176 mov.l Rm,@(disp,Rn) */
	r2 = 0xB4u; UPD(0x0C09517Au, 1);  /* 0C095178 mov.w @(disp,pc),Rn */
	IF(0x0C09517Au); MACL = r13 * r2;  /* 0C09517A mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09517Eu, 3);  /* 0C09517C mov.l @(disp,pc),Rn */
	IF(0x0C09517Eu); r3 = MACL;  /* 0C09517E sts macl,Rn */
	r3 += r10;  /* 0C095180 add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C095184u, 3);  /* 0C095182 mov.l @(disp,Rm),Rn */
	IF(0x0C095184u); T = (s32)r2 >= 0;  /* 0C095184 cmp/pz Rn */
	if (!T) { UPD(0x0C0951A0u, 4); goto L_0C0951A0; }  /* 0C095186 bf */
L_0C095188: BLKS(0x0C095188u);
	r8 = 0x2A0000u; UPD(0x0C09518Au, 1);  /* 0C095188 mov.l @(disp,pc),Rn */
	r0 = 0x9Fu; UPD(0x0C09518Cu, 1);  /* 0C09518A mov.w @(disp,pc),Rn */
	T = r2 == r8;  /* 0C09518C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C095196u, 4); goto L_0C095196; }  /* 0C09518E bf */
L_0C095190: BLKS(0x0C095190u);
	IF(0x0C095190u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C095192u, 1);  /* 0C095190 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C095192 add #imm,Rn */
	IF(0x0C095194u); W8(r0 + r3, r13); UPD(0x0C095196u, 2);  /* 0C095194 mov.b Rm,@(r0,Rn) */
L_0C095196: BLKS(0x0C095196u);
	r13 = 0xFFFFEC02u; UPD(0x0C095198u, 1);  /* 0C095196 mov.w @(disp,pc),Rn */
	IF(0x0C095198u); { u32 tv_ = (r13 + 0x0C09519Cu); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C095198 braf Rn */
L_0C0951A0: BLKS(0x0C0951A0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C095188u, 3); goto L_0C095188; }  /* 0C0951A0 bra */
L_0C0951B0: BLKS(0x0C0951B0u);
	r6 = 0xB4u; UPD(0x0C0951B2u, 1);  /* 0C0951B0 mov.w @(disp,pc),Rn */
	IF(0x0C0951B2u); MACL = r13 * r6;  /* 0C0951B2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0951B6u, 3);  /* 0C0951B4 mov.l @(disp,pc),Rn */
	IF(0x0C0951B6u); r8 = MACL;  /* 0C0951B6 sts macl,Rn */
	r8 += r3;  /* 0C0951B8 add Rm,Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C0951BCu, 3);  /* 0C0951BA mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C0951BC mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C0951BE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0951F0u, 5); goto L_0C0951F0; }  /* 0C0951C0 bt */
L_0C0951C2: BLKS(0x0C0951C2u);
	r3 = 0x99u; UPD(0x0C0951C4u, 1);  /* 0C0951C2 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0951C4 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0951C8u, 2);  /* 0C0951C6 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0951C8 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C0951CA extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C0951CC cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C095196u, 6); goto L_0C095196; } UPD(0x0C0951D2u, 1); goto L_0C0951D2; }  /* 0C0951CE bf/s */
L_0C0951D2: BLKS(0x0C0951D2u);
	r4 = 0x0u;  /* 0C0951D2 mov #imm,Rn */
	W8(r3, r4); UPD(0x0C0951D6u, 2);  /* 0C0951D4 mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C0951D8u, 1);  /* 0C0951D6 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0951D8 mov Rm,Rn */
	IF(0x0C0951DAu); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0951DCu, 2);  /* 0C0951DA mov.w @(r0,Rm),Rn */
	r13 = 0xC0A0380u; UPD(0x0C0951DEu, 1);  /* 0C0951DC mov.l @(disp,pc),Rn */
	r2 += r9;  /* 0C0951DE add Rm,Rn */
	IF(0x0C0951E0u); { u32 t_ = r13; PR = 0x0C0951E4u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0951E4u); }  /* 0C0951E0 jsr @Rn */
L_0C0951E4: BLKS(0x0C0951E4u);
	r0 = R32(r8 + 0xCu); UPD(0x0C0951E6u, 1);  /* 0C0951E4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0951E6 tst Rm,Rn */
	if (!T) { UPD(0x0C095196u, 4); goto L_0C095196; }  /* 0C0951E8 bf */
L_0C0951EA: BLKS(0x0C0951EAu);
	{ IF(0x0C0951ECu); ; /* slot nop */ UPD(0x0C094672u, 3); goto L_0C094672; }  /* 0C0951EA bra */
L_0C0951F0: BLKS(0x0C0951F0u);
	r9 = 0xA0u; UPD(0x0C0951F2u, 1);  /* 0C0951F0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C0951F2 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0951F6u, 2);  /* 0C0951F4 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0951F6 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0951F8 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C095230u, 5); goto L_0C095230; } goto L_0C0951FE; }  /* 0C0951FA bt/s */
L_0C0951FE: BLKS(0x0C0951FEu);
	if (!T) { UPD(0x0C095196u, 4); goto L_0C095196; }  /* 0C0951FE bf */
L_0C095200: BLKS(0x0C095200u);
	r9 += 0x2u;  /* 0C095200 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C095204u, 2);  /* 0C095202 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C095204 tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C095196u, 4); goto L_0C095196; } goto L_0C09520A; }  /* 0C095206 bf/s */
L_0C09520A: BLKS(0x0C09520Au);
	r3 = 0xC0A0380u; UPD(0x0C09520Cu, 2);  /* 0C09520A mov.l @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C09520C mov #imm,Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C095210u, 2);  /* 0C09520E mov.l Rm,@(disp,Rn) */
	IF(0x0C095210u); { u32 t_ = r3; PR = 0x0C095214u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095214u); }  /* 0C095210 jsr @Rn */
L_0C095214: BLKS(0x0C095214u);
	r0 = 0x88u; UPD(0x0C095216u, 1);  /* 0C095214 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C095216 mov #imm,Rn */
	IF(0x0C095218u); W16(r0 + r8, r2); UPD(0x0C09521Au, 2);  /* 0C095218 mov.w Rm,@(r0,Rn) */
	W8(r9, r10); UPD(0x0C09521Cu, 1);  /* 0C09521A mov.b Rm,@Rn */
L_0C09521C: BLKS(0x0C09521Cu);
	r13 = 0xFFFFEB7Cu; UPD(0x0C09521Eu, 1);  /* 0C09521C mov.w @(disp,pc),Rn */
	IF(0x0C09521Eu); { u32 tv_ = (r13 + 0x0C095222u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C09521E braf Rn */
L_0C095230: BLKS(0x0C095230u);
	r11 = 0xC0A9E40u; UPD(0x0C095232u, 1);  /* 0C095230 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095232 mov Rm,Rn */
	r5 = 0xF0u; UPD(0x0C095236u, 2);  /* 0C095234 mov.w @(disp,pc),Rn */
	IF(0x0C095236u); { u32 t_ = r11; PR = 0x0C09523Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09523Au); }  /* 0C095236 jsr @Rn */
L_0C09523A: BLKS(0x0C09523Au);
	T = (r0 & r0) == 0;  /* 0C09523A tst Rm,Rn */
	if (T) { UPD(0x0C09521Cu, 4); goto L_0C09521C; }  /* 0C09523C bt */
L_0C09523E: BLKS(0x0C09523Eu);
	r9 += 0x2u;  /* 0C09523E add #imm,Rn */
	r12 = 0x1u;  /* 0C095240 mov #imm,Rn */
	W8(r9, r12); UPD(0x0C095244u, 3);  /* 0C095242 mov.b Rm,@Rn */
	{ r9 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C0949E0u, 3); goto L_0C0949E0; }  /* 0C095244 bra */
L_0C095270: BLKS(0x0C095270u);
	r8 = 0xB4u; UPD(0x0C095272u, 1);  /* 0C095270 mov.w @(disp,pc),Rn */
	IF(0x0C095272u); MACL = r13 * r8;  /* 0C095272 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C095276u, 3);  /* 0C095274 mov.l @(disp,pc),Rn */
	IF(0x0C095276u); r3 = MACL;  /* 0C095276 sts macl,Rn */
	r3 += r10;  /* 0C095278 add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09527Cu, 3);  /* 0C09527A mov.l @(disp,Rm),Rn */
	r1 = 0xFFFF8000u; UPD(0x0C09527Eu, 1);  /* 0C09527C mov.w @(disp,pc),Rn */
	IF(0x0C09527Eu); T = (s32)r2 > 0;  /* 0C09527E cmp/pl Rn */
	if (!T) { UPD(0x0C0952C0u, 4); goto L_0C0952C0; }  /* 0C095280 bf */
L_0C095282: BLKS(0x0C095282u);
	r0 = 0xB4u; UPD(0x0C095284u, 1);  /* 0C095282 mov.w @(disp,pc),Rn */
	r2 += r1;  /* 0C095284 add Rm,Rn */
	IF(0x0C095286u); MACL = r13 * r0;  /* 0C095286 mul.l Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09528Au, 4);  /* 0C095288 mov.l Rm,@(disp,Rn) */
	r13 = 0xC26CD40u; UPD(0x0C09528Cu, 1);  /* 0C09528A mov.l @(disp,pc),Rn */
	IF(0x0C09528Cu); r0 = MACL;  /* 0C09528C sts macl,Rn */
	r0 += r13;  /* 0C09528E add Rm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C095292u, 3);  /* 0C095290 mov.l @(disp,Rm),Rn */
	r0 += 0x50u;  /* 0C095292 add #imm,Rn */
	r7 = R32(r0); UPD(0x0C095296u, 2);  /* 0C095294 mov.l @Rm,Rn */
	T = r1 == r7;  /* 0C095296 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09521Cu, 4); goto L_0C09521C; } goto L_0C09529C; }  /* 0C095298 bf/s */
L_0C09529C: BLKS(0x0C09529Cu);
	r9 = R32(r0); UPD(0x0C09529Eu, 2);  /* 0C09529C mov.l @Rm,Rn */
	r11 = 0x0u;  /* 0C09529E mov #imm,Rn */
	r4 = 0x4000u; UPD(0x0C0952A2u, 2);  /* 0C0952A0 mov.w @(disp,pc),Rn */
	r5 = 0x9Fu; UPD(0x0C0952A4u, 1);  /* 0C0952A2 mov.w @(disp,pc),Rn */
	r9 |= r4;  /* 0C0952A4 or Rm,Rn */
	IF(0x0C0952A6u); W8(r0 + r5, r11); UPD(0x0C0952A8u, 2);  /* 0C0952A6 mov.b Rm,@(r0,Rn) */
	W32(r0, r9); UPD(0x0C0952AAu, 1);  /* 0C0952A8 mov.l Rm,@Rn */
L_0C0952AA: BLKS(0x0C0952AAu);
	r13 = 0xFFFFEAEEu; UPD(0x0C0952ACu, 1);  /* 0C0952AA mov.w @(disp,pc),Rn */
	IF(0x0C0952ACu); { u32 tv_ = (r13 + 0x0C0952B0u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C0952AC braf Rn */
L_0C0952C0: BLKS(0x0C0952C0u);
	r1 = 0x8000u; UPD(0x0C0952C2u, 1);  /* 0C0952C0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0952C4u); ; /* slot nop */ UPD(0x0C095282u, 3); goto L_0C095282; }  /* 0C0952C2 bra */
L_0C0952D0: BLKS(0x0C0952D0u);
	r9 = 0xC0A0490u; UPD(0x0C0952D2u, 1);  /* 0C0952D0 mov.l @(disp,pc),Rn */
	IF(0x0C0952D2u); { u32 t_ = r9; PR = 0x0C0952D6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C0952D6u); }  /* 0C0952D2 jsr @Rn */
L_0C0952D6: BLKS(0x0C0952D6u);
	IF(0x0C0952D6u); T = (s32)r0 >= 0;  /* 0C0952D6 cmp/pz Rn */
	if (T) { UPD(0x0C0952E2u, 4); goto L_0C0952E2; }  /* 0C0952D8 bt */
L_0C0952DA: BLKS(0x0C0952DAu);
	r1 = 0xFFFFEBF0u; UPD(0x0C0952DCu, 1);  /* 0C0952DA mov.w @(disp,pc),Rn */
	IF(0x0C0952DCu); { u32 tv_ = (r1 + 0x0C0952E0u); u32 t_ = PHYS(tv_); IF(0x0C0952DEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C0952DC braf Rn */
L_0C0952E2: BLKS(0x0C0952E2u);
	r3 = 0xB4u; UPD(0x0C0952E4u, 1);  /* 0C0952E2 mov.w @(disp,pc),Rn */
	IF(0x0C0952E4u); MACL = r13 * r3;  /* 0C0952E4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0952E8u, 3);  /* 0C0952E6 mov.l @(disp,pc),Rn */
	IF(0x0C0952E8u); r9 = MACL;  /* 0C0952E8 sts macl,Rn */
	IF(0x0C0952EAu); MACL = r0 * r3;  /* 0C0952EA mul.l Rm,Rn */
	r9 += r10;  /* 0C0952EC add Rm,Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C0952F0u, 5);  /* 0C0952EE mov.l @(disp,Rm),Rn */
	IF(0x0C0952F0u); r3 = MACL;  /* 0C0952F0 sts macl,Rn */
	r3 += r10;  /* 0C0952F2 add Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0952F6u, 3);  /* 0C0952F4 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0952F8u, 1);  /* 0C0952F6 mov.l @(disp,Rm),Rn */
	r6 += r11;  /* 0C0952F8 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0952FCu, 2);  /* 0C0952FA mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0952FEu, 1);  /* 0C0952FC mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0952FE add Rm,Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C095302u, 2);  /* 0C095300 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C095302 tst Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0953B0u, 4); goto L_0C0953B0; } UPD(0x0C095308u, 1); goto L_0C095308; }  /* 0C095304 bt/s */
L_0C095308: BLKS(0x0C095308u);
	T = r0 == 0x16u;  /* 0C095308 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C095340u, 4); goto L_0C095340; }  /* 0C09530A bt */
L_0C09530C: BLKS(0x0C09530Cu);
	r5 = 0xB4u; UPD(0x0C09530Eu, 1);  /* 0C09530C mov.w @(disp,pc),Rn */
	IF(0x0C09530Eu); MACL = r13 * r5;  /* 0C09530E mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C095312u, 3);  /* 0C095310 mov.l @(disp,pc),Rn */
	IF(0x0C095312u); r8 = MACL;  /* 0C095312 sts macl,Rn */
	r8 += r2;  /* 0C095314 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C095318u, 3);  /* 0C095316 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C095318 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C09531Cu, 2);  /* 0C09531A mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09531C add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C09531E extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C095320 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0952AAu, 6); goto L_0C0952AA; } UPD(0x0C095326u, 1); goto L_0C095326; }  /* 0C095322 bf/s */
L_0C095326: BLKS(0x0C095326u);
	r6 = 0x0u;  /* 0C095326 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C09532Au, 2);  /* 0C095328 mov.b Rm,@Rn */
L_0C09532A: BLKS(0x0C09532Au);
	r0 = 0x88u; UPD(0x0C09532Cu, 1);  /* 0C09532A mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0xCu); UPD(0x0C09532Eu, 1);  /* 0C09532C mov.l @(disp,Rm),Rn */
	IF(0x0C09532Eu); r12 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C095330u, 1);  /* 0C09532E mov.w @(r0,Rm),Rn */
	r11 = 0xC0A0380u; UPD(0x0C095332u, 1);  /* 0C095330 mov.l @(disp,pc),Rn */
	r4 += r12;  /* 0C095332 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C095336u, 2);  /* 0C095334 mov.l Rm,@(disp,Rn) */
	IF(0x0C095336u); { u32 t_ = r11; PR = 0x0C09533Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09533Au); }  /* 0C095336 jsr @Rn */
L_0C09533A: BLKS(0x0C09533Au);
	r3 = R32(r8 + 0xCu); UPD(0x0C09533Cu, 1);  /* 0C09533A mov.l @(disp,Rm),Rn */
	{ T = (r3 & r3) == 0; /* slot tst Rm,Rn */ UPD(0x0C094888u, 3); goto L_0C094888; }  /* 0C09533C bra */
L_0C095340: BLKS(0x0C095340u);
	r10 = 0x9Fu; UPD(0x0C095342u, 1);  /* 0C095340 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C095342 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C095346u, 2);  /* 0C095344 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C095346 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C095348 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C095380u, 5); goto L_0C095380; } goto L_0C09534E; }  /* 0C09534A bt/s */
L_0C09534E: BLKS(0x0C09534Eu);
	if (!T) { UPD(0x0C0952AAu, 4); goto L_0C0952AA; }  /* 0C09534E bf */
L_0C095350: BLKS(0x0C095350u);
	r0 = r9;  /* 0C095350 mov Rm,Rn */
	r4 = 0xA2u; UPD(0x0C095354u, 2);  /* 0C095352 mov.w @(disp,pc),Rn */
	IF(0x0C095354u); r8 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C095356u, 1);  /* 0C095354 mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C095356 tst Rm,Rn */
	if (!T) { UPD(0x0C0952AAu, 4); goto L_0C0952AA; }  /* 0C095358 bf */
L_0C09535A: BLKS(0x0C09535Au);
	r0 = 0x15u;  /* 0C09535A mov #imm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C09535Eu, 2);  /* 0C09535C mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r0); UPD(0x0C095360u, 1);  /* 0C09535E mov.l Rm,@(disp,Rn) */
	IF(0x0C095360u); { u32 t_ = r11; PR = 0x0C095364u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095364u); }  /* 0C095360 jsr @Rn */
L_0C095364: BLKS(0x0C095364u);
	r0 = 0x88u; UPD(0x0C095366u, 1);  /* 0C095364 mov.w @(disp,pc),Rn */
	r13 = 0xFFFFFFFFu;  /* 0C095366 mov #imm,Rn */
	IF(0x0C095368u); W16(r0 + r9, r13); UPD(0x0C09536Au, 2);  /* 0C095368 mov.w Rm,@(r0,Rn) */
	W8(r10, r8); UPD(0x0C09536Cu, 1);  /* 0C09536A mov.b Rm,@Rn */
L_0C09536C: BLKS(0x0C09536Cu);
	r13 = 0xFFFFEA2Cu; UPD(0x0C09536Eu, 1);  /* 0C09536C mov.w @(disp,pc),Rn */
	IF(0x0C09536Eu); { u32 tv_ = (r13 + 0x0C095372u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C09536E braf Rn */
L_0C095380: BLKS(0x0C095380u);
	r12 = 0xA0u; UPD(0x0C095382u, 1);  /* 0C095380 mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C095382 add Rm,Rn */
	r3 += 0x1u;  /* 0C095384 add #imm,Rn */
	r7 = r12;  /* 0C095386 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C09538Au, 4);  /* 0C095388 mov.b @Rm,Rn */
	r7 += r9;  /* 0C09538A add Rm,Rn */
	r7 += 0x1u;  /* 0C09538C add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C095390u, 3);  /* 0C09538E mov.b @Rm,Rn */
	T = (r1 & r3) == 0;  /* 0C095390 tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09536Cu, 4); goto L_0C09536C; } goto L_0C095396; }  /* 0C095392 bf/s */
L_0C095396: BLKS(0x0C095396u);
	r7 += 0x2u;  /* 0C095396 add #imm,Rn */
	r8 = 0x1u;  /* 0C095398 mov #imm,Rn */
	W8(r7, r8); UPD(0x0C09539Cu, 4);  /* 0C09539A mov.b Rm,@Rn */
	r7 = r6;  /* 0C09539C mov Rm,Rn */
	r7 += 0x1u;  /* 0C09539E add #imm,Rn */
	W8(r10, r7); UPD(0x0C0953A2u, 3);  /* 0C0953A0 mov.b Rm,@Rn */
L_0C0953A2: BLKS(0x0C0953A2u);
	r13 = 0xFFFFE9F6u; UPD(0x0C0953A4u, 1);  /* 0C0953A2 mov.w @(disp,pc),Rn */
	IF(0x0C0953A4u); { u32 tv_ = (r13 + 0x0C0953A8u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C0953A4 braf Rn */
L_0C0953B0: BLKS(0x0C0953B0u);
	r8 = 0xA0u; UPD(0x0C0953B2u, 1);  /* 0C0953B0 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0953B2 add Rm,Rn */
	r8 += r9;  /* 0C0953B4 add Rm,Rn */
	r3 += 0x1u;  /* 0C0953B6 add #imm,Rn */
	r8 += 0x1u;  /* 0C0953B8 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r3); UPD(0x0C0953BCu, 5);  /* 0C0953BA mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C0953BEu, 1);  /* 0C0953BC mov.b @Rm,Rn */
	T = (r12 & r7) == 0;  /* 0C0953BE tst Rm,Rn */
	if (T) { UPD(0x0C0953A2u, 4); goto L_0C0953A2; }  /* 0C0953C0 bt */
L_0C0953C2: BLKS(0x0C0953C2u);
	r11 = 0x1u;  /* 0C0953C2 mov #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0953C6u, 2);  /* 0C0953C4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0953C6 mov Rm,Rn */
	IF(0x0C0953C8u); { u32 t_ = r0; PR = 0x0C0953CCu; W32(r9 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0953CCu); }  /* 0C0953C8 jsr @Rn */
L_0C0953CC: BLKS(0x0C0953CCu);
	r13 = R32(r9); UPD(0x0C0953CEu, 1);  /* 0C0953CC mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C0953D0u, 1);  /* 0C0953CE mov.w @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C0953D2u, 1);  /* 0C0953D0 mov.w @(disp,pc),Rn */
	r13 &= r4;  /* 0C0953D2 and Rm,Rn */
	IF(0x0C0953D4u); W16(r0 + r9, r11); UPD(0x0C0953D6u, 2);  /* 0C0953D4 mov.w Rm,@(r0,Rn) */
	r4 = 0x73u;  /* 0C0953D6 mov #imm,Rn */
	{ W32(r9, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0947BEu, 4); goto L_0C0947BE; }  /* 0C0953D8 bra */
L_0C095400: BLKS(0x0C095400u);
	r10 = 0xC0A0490u; UPD(0x0C095402u, 1);  /* 0C095400 mov.l @(disp,pc),Rn */
	IF(0x0C095402u); { u32 t_ = r10; PR = 0x0C095406u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C095406u); }  /* 0C095402 jsr @Rn */
L_0C095406: BLKS(0x0C095406u);
	IF(0x0C095406u); T = (s32)r0 >= 0;  /* 0C095406 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095414u, 4); goto L_0C095414; } goto L_0C09540C; }  /* 0C095408 bt/s */
L_0C09540C: BLKS(0x0C09540Cu);
	r1 = 0xFFFFEABEu; UPD(0x0C09540Eu, 2);  /* 0C09540C mov.w @(disp,pc),Rn */
	IF(0x0C09540Eu); { u32 tv_ = (r1 + 0x0C095412u); u32 t_ = PHYS(tv_); IF(0x0C095410u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C09540E braf Rn */
L_0C095414: BLKS(0x0C095414u);
	r9 = 0xB4u; UPD(0x0C095416u, 1);  /* 0C095414 mov.w @(disp,pc),Rn */
	IF(0x0C095416u); MACL = r0 * r9;  /* 0C095416 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09541Au, 3);  /* 0C095418 mov.l @(disp,pc),Rn */
	IF(0x0C09541Au); r3 = MACL;  /* 0C09541A sts macl,Rn */
	r3 += r2;  /* 0C09541C add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C095420u, 3);  /* 0C09541E mov.l @(disp,Rm),Rn */
	T = r0 == 0x16u;  /* 0C095420 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C095424u); MACL = r13 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C095430u, 5); goto L_0C095430; } goto L_0C095426; }  /* 0C095422 bt/s */
L_0C095426: BLKS(0x0C095426u);
	{ IF(0x0C095428u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C094B2Eu, 5); goto L_0C094B2E; }  /* 0C095426 bra */
L_0C095430: BLKS(0x0C095430u);
	IF(0x0C095430u); MACL = r13 * r9;  /* 0C095430 mul.l Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C095434u, 3);  /* 0C095432 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C095436u, 1);  /* 0C095434 mov.l @(disp,Rm),Rn */
	IF(0x0C095436u); r8 = MACL;  /* 0C095436 sts macl,Rn */
	r8 += r2;  /* 0C095438 add Rm,Rn */
	r5 = 0x9Fu; UPD(0x0C09543Cu, 3);  /* 0C09543A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09543C mov Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C095440u, 2);  /* 0C09543E mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C095442u, 1);  /* 0C095440 mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C095442 add Rm,Rn */
	IF(0x0C095444u); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C095446u, 2);  /* 0C095444 mov.b @(r0,Rm),Rn */
	r6 += r3;  /* 0C095446 add Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C095448 extu.b Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C09544Cu, 3);  /* 0C09544A mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09544C tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C095510u, 4); goto L_0C095510; } UPD(0x0C095452u, 1); goto L_0C095452; }  /* 0C09544E bt/s */
L_0C095452: BLKS(0x0C095452u);
	T = r0 == 0x1u;  /* 0C095452 cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095490u, 4); goto L_0C095490; } UPD(0x0C095458u, 1); goto L_0C095458; }  /* 0C095454 bt/s */
L_0C095458: BLKS(0x0C095458u);
	r3 = 0xB4u; UPD(0x0C09545Au, 1);  /* 0C095458 mov.w @(disp,pc),Rn */
	IF(0x0C09545Au); MACL = r13 * r3;  /* 0C09545A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09545Eu, 3);  /* 0C09545C mov.l @(disp,pc),Rn */
	IF(0x0C09545Eu); r3 = MACL;  /* 0C09545E sts macl,Rn */
	r3 += r0;  /* 0C095460 add Rm,Rn */
	r4 = 0x86u; UPD(0x0C095464u, 3);  /* 0C095462 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C095464 mov Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C095468u, 2);  /* 0C095466 mov.l @(disp,Rm),Rn */
	IF(0x0C095468u); r11 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09546Au, 1);  /* 0C095468 mov.w @(r0,Rm),Rn */
	IF(0x0C09546Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C09546A rotl Rn */
	IF(0x0C09546Cu); r7 = T;  /* 0C09546C movt Rn */
	r0 = 0xC1C8268u; UPD(0x0C095470u, 3);  /* 0C09546E mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C095470 add Rm,Rn */
	IF(0x0C095472u); r12 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C095474u, 2);  /* 0C095472 mov.w @(r0,Rm),Rn */
	r11 -= r12;  /* 0C095474 sub Rm,Rn */
	r11 += 0x4u;  /* 0C095476 add #imm,Rn */
	r1 = r11 & 0xFF;  /* 0C095478 extu.b Rm,Rn */
	IF(0x0C09547Au); r1 >>= 2;  /* 0C09547A shlr2 Rn */
	r4 = 0xFFFFEF90u; UPD(0x0C09547Eu, 5);  /* 0C09547C mov.w @(disp,pc),Rn */
	IF(0x0C09547Eu); { u32 tv_ = (r4 + 0x0C095482u); u32 t_ = PHYS(tv_); IF(0x0C095480u); T = r1 & 1; r1 >>= 1; /* slot shlr Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C094412u: goto L_0C094412; default: JUMPD(tv_); } }  /* 0C09547E braf Rn */
L_0C095490: BLKS(0x0C095490u);
	r3 = 0x86u; UPD(0x0C095492u, 1);  /* 0C095490 mov.w @(disp,pc),Rn */
	r5 = 0xFFu; UPD(0x0C095494u, 1);  /* 0C095492 mov.w @(disp,pc),Rn */
	r6 = r9;  /* 0C095494 mov Rm,Rn */
	r7 = 0x100u; UPD(0x0C095498u, 2);  /* 0C095496 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C095498 add Rm,Rn */
	UPD(0x0C09549Au, 1);
L_0C09549A: BLKS(0x0C09549Au);
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C09549Cu, 1);  /* 0C09549A mov.w @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C09549C exts.w Rm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C09549E cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C0954A2u); MACL = r13 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0954AEu, 6); goto L_0C0954AE; } goto L_0C0954A4; }  /* 0C0954A0 bt/s */
L_0C0954A4: BLKS(0x0C0954A4u);
	r4 = r2;  /* 0C0954A4 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0954A6 add #imm,Rn */
	W16(r3, r4); UPD(0x0C0954AAu, 5);  /* 0C0954A8 mov.w Rm,@Rn */
	r2 = r4;  /* 0C0954AA mov Rm,Rn */
	IF(0x0C0954ACu); MACL = r13 * r6;  /* 0C0954AC mul.l Rm,Rn */
	UPD(0x0C0954AEu, 3);
L_0C0954AE: BLKS(0x0C0954AEu);
	r9 = (u32)(s32)(s16)r2;  /* 0C0954AE exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0954B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0954B4u); r0 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0954BCu, 5); goto L_0C0954BC; } goto L_0C0954B6; }  /* 0C0954B2 bf/s */
L_0C0954B6: BLKS(0x0C0954B6u);
	r10 = r2;  /* 0C0954B6 mov Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C0954B8 add #imm,Rn */
	W16(r3, r10); UPD(0x0C0954BCu, 4);  /* 0C0954BA mov.w Rm,@Rn */
L_0C0954BC: BLKS(0x0C0954BCu);
	r8 = r12;  /* 0C0954BC mov Rm,Rn */
	r8 += 0x1u;  /* 0C0954BE add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C0954C0 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C0954C2 mov #imm,Rn */
	T = (s32)r12 > (s32)r2;  /* 0C0954C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09549Au, 8); goto L_0C09549A; }  /* 0C0954C6 bf */
L_0C0954C8: BLKS(0x0C0954C8u);
	r3 = r0;  /* 0C0954C8 mov Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0954CCu, 2);  /* 0C0954CA mov.l @(disp,pc),Rn */
	r1 = 0x86u; UPD(0x0C0954CEu, 1);  /* 0C0954CC mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0954CE add Rm,Rn */
	r0 = r3;  /* 0C0954D0 mov Rm,Rn */
	IF(0x0C0954D2u); r6 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C0954D4u, 3);  /* 0C0954D2 mov.w @(r0,Rm),Rn */
	r1 += 0x7Au;  /* 0C0954D4 add #imm,Rn */
	T = r6 == r1;  /* 0C0954D6 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C095458u, 5); goto L_0C095458; }  /* 0C0954D8 bf */
L_0C0954DA: BLKS(0x0C0954DAu);
	r1 += 0xFFFFFFB4u;  /* 0C0954DA add #imm,Rn */
	IF(0x0C0954DCu); MACL = r11 * r1;  /* 0C0954DC mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C0954DE mov #imm,Rn */
	IF(0x0C0954E0u); r0 = MACL;  /* 0C0954E0 sts macl,Rn */
	r1 += 0xFFFFFFEEu;  /* 0C0954E2 add #imm,Rn */
	r0 += r7;  /* 0C0954E4 add Rm,Rn */
	IF(0x0C0954E6u); W8(r0 + r1, r5); UPD(0x0C0954E8u, 8);  /* 0C0954E6 mov.b Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFDu;  /* 0C0954E8 add #imm,Rn */
	r3 += r1;  /* 0C0954EA add Rm,Rn */
	W8(r3, r5); UPD(0x0C0954EEu, 3);  /* 0C0954EC mov.b Rm,@Rn */
L_0C0954EE: BLKS(0x0C0954EEu);
	{ IF(0x0C0954F0u); ; /* slot nop */ UPD(0x0C095458u, 3); goto L_0C095458; }  /* 0C0954EE bra */
L_0C095510: BLKS(0x0C095510u);
	r12 = 0xC058130u; UPD(0x0C095512u, 1);  /* 0C095510 mov.l @(disp,pc),Rn */
	r10 = 0xC057430u; UPD(0x0C095514u, 1);  /* 0C095512 mov.l @(disp,pc),Rn */
	IF(0x0C095514u); { u32 t_ = r12; PR = 0x0C095518u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C095518u); }  /* 0C095514 jsr @Rn */
L_0C095518: BLKS(0x0C095518u);
	r4 = r13;  /* 0C095518 mov Rm,Rn */
	IF(0x0C09551Au); { u32 t_ = r10; PR = 0x0C09551Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C09551Eu); }  /* 0C09551A jsr @Rn */
L_0C09551E: BLKS(0x0C09551Eu);
	r9 = R32(r8 + 0x30u); UPD(0x0C095520u, 1);  /* 0C09551E mov.l @(disp,Rm),Rn */
	IF(0x0C095520u); T = r9 >> 31; r9 = (r9 << 1) | T;  /* 0C095520 rotl Rn */
	IF(0x0C095522u); r0 = T;  /* 0C095522 movt Rn */
	r7 = 0x86u; UPD(0x0C095526u, 3);  /* 0C095524 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C095526 add Rm,Rn */
	r10 = 0xC1C8268u; UPD(0x0C09552Au, 2);  /* 0C095528 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C09552A add Rm,Rn */
	r10 += r0;  /* 0C09552C add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C095530u, 3);  /* 0C09552E mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C095532u, 1);  /* 0C095530 mov.w @Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C095532 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09553Au, 4); goto L_0C09553A; }  /* 0C095534 bt */
L_0C095536: BLKS(0x0C095536u);
	W16(r7, r1); UPD(0x0C095538u, 1);  /* 0C095536 mov.w Rm,@Rn */
	r2 = r1;  /* 0C095538 mov Rm,Rn */
	UPD(0x0C09553Au, 1);
L_0C09553A: BLKS(0x0C09553Au);
	r5 = 0xC1C826Cu; UPD(0x0C09553Cu, 1);  /* 0C09553A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C09553C exts.w Rm,Rn */
	IF(0x0C09553Eu); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C095540u, 2);  /* 0C09553E mov.w @(r0,Rm),Rn */
	T = (s32)r4 > (s32)r3;  /* 0C095540 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C095546u, 4); goto L_0C095546; }  /* 0C095542 bf */
L_0C095544: BLKS(0x0C095544u);
	W16(r7, r3); UPD(0x0C095546u, 1);  /* 0C095544 mov.w Rm,@Rn */
L_0C095546: BLKS(0x0C095546u);
	r9 = 0xC0A9E40u; UPD(0x0C095548u, 1);  /* 0C095546 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095548 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C09554A mov #imm,Rn */
	IF(0x0C09554Cu); { u32 t_ = r9; PR = 0x0C095550u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095550u); }  /* 0C09554C jsr @Rn */
L_0C095550: BLKS(0x0C095550u);
	T = (r0 & r0) == 0;  /* 0C095550 tst Rm,Rn */
	if (T) { UPD(0x0C0954EEu, 4); goto L_0C0954EE; }  /* 0C095552 bt */
L_0C095554: BLKS(0x0C095554u);
	r0 = R32(r8 + 0xCu); UPD(0x0C095556u, 1);  /* 0C095554 mov.l @(disp,Rm),Rn */
	r3 = 0x3u;  /* 0C095556 mov #imm,Rn */
	IF(0x0C095558u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C095558 shld Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C09555Cu, 3);  /* 0C09555A mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C09555C mov #imm,Rn */
	r0 += r6;  /* 0C09555E add Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C095560 exts.w Rm,Rn */
	W32(r14, r7); UPD(0x0C095564u, 4);  /* 0C095562 mov.l Rm,@Rn */
	r9 = r8;  /* 0C095564 mov Rm,Rn */
	UPD(0x0C095566u, 1);
L_0C095566: BLKS(0x0C095566u);
	r5 = 0xC1C8270u; UPD(0x0C095568u, 1);  /* 0C095566 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C095568 mov Rm,Rn */
	IF(0x0C09556Au); r0 <<= 2;  /* 0C09556A shll2 Rn */
	IF(0x0C09556Cu); r4 = R32(r0 + r5); UPD(0x0C09556Eu, 3);  /* 0C09556C mov.l @(r0,Rm),Rn */
	r2 = 0xC058060u; UPD(0x0C095570u, 1);  /* 0C09556E mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C095572u, 1);  /* 0C095570 mov.l Rm,@(disp,Rn) */
	r8 = 0xC058030u; UPD(0x0C095574u, 1);  /* 0C095572 mov.l @(disp,pc),Rn */
	r5 = 0x280000u; UPD(0x0C095576u, 1);  /* 0C095574 mov.l @(disp,pc),Rn */
	IF(0x0C095576u); { u32 t_ = r2; PR = 0x0C09557Au; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09557Au); }  /* 0C095576 jsr @Rn */
L_0C09557A: BLKS(0x0C09557Au);
	r10 = r0;  /* 0C09557A mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C09557Eu, 2);  /* 0C09557C mov.l @Rm,Rn */
	IF(0x0C09557Eu); { u32 t_ = r8; PR = 0x0C095582u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C095582u); }  /* 0C09557E jsr @Rn */
L_0C095582: BLKS(0x0C095582u);
	r10 -= r0;  /* 0C095582 sub Rm,Rn */
	r1 = r10;  /* 0C095584 mov Rm,Rn */
	r1 += r1;  /* 0C095586 add Rm,Rn */
	r1 += r10;  /* 0C095588 add Rm,Rn */
	IF(0x0C09558Au); T = (s32)r1 >= 0;  /* 0C09558A cmp/pz Rn */
	if (!T) { UPD(0x0C095610u, 8); goto L_0C095610; }  /* 0C09558C bf */
L_0C09558E: BLKS(0x0C09558Eu);
	r4 = 0xB4u; UPD(0x0C095590u, 1);  /* 0C09558E mov.w @(disp,pc),Rn */
	IF(0x0C095590u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C095590 shar Rn */
	IF(0x0C095592u); MACL = r13 * r4;  /* 0C095592 mul.l Rm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C095596u, 4);  /* 0C095594 mov.l @(disp,Rm),Rn */
	IF(0x0C095596u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C095596 shar Rn */
	r5 = 0x10000u; UPD(0x0C09559Au, 2);  /* 0C095598 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C09559A add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09559Eu, 2);  /* 0C09559C mov.l @(disp,pc),Rn */
	IF(0x0C09559Eu); r2 = MACL;  /* 0C09559E sts macl,Rn */
	r10 += r5;  /* 0C0955A0 add Rm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C0955A4u, 3);  /* 0C0955A2 mov.l Rm,@(disp,Rn) */
	r5 = 0x280000u; UPD(0x0C0955A6u, 1);  /* 0C0955A4 mov.l @(disp,pc),Rn */
	IF(0x0C0955A6u); { u32 t_ = r8; PR = 0x0C0955AAu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0955AAu); }  /* 0C0955A6 jsr @Rn */
L_0C0955AA: BLKS(0x0C0955AAu);
	r1 = 0xC058060u; UPD(0x0C0955ACu, 1);  /* 0C0955AA mov.l @(disp,pc),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C0955AEu, 1);  /* 0C0955AC mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0955B0u, 1);  /* 0C0955AE mov.l @Rm,Rn */
	r8 += r0;  /* 0C0955B0 add Rm,Rn */
	IF(0x0C0955B2u); { u32 t_ = r1; PR = 0x0C0955B6u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0955B6u); }  /* 0C0955B2 jsr @Rn */
L_0C0955B6: BLKS(0x0C0955B6u);
	r6 = 0x30000u; UPD(0x0C0955B8u, 1);  /* 0C0955B6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0955B8 add #imm,Rn */
	r3 = 0xC7C1554u; UPD(0x0C0955BCu, 2);  /* 0C0955BA mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0955BC add Rm,Rn */
	W32(r15, r6); UPD(0x0C0955C0u, 2);  /* 0C0955BE mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0955C0 mov #imm,Rn */
	r7 = R32(r14); UPD(0x0C0955C4u, 2);  /* 0C0955C2 mov.l @Rm,Rn */
	r5 = r10;  /* 0C0955C4 mov Rm,Rn */
	IF(0x0C0955C6u); { u32 t_ = r3; PR = 0x0C0955CAu; r6 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C1554, 0x0C7C1554u, 0x0C0955CAu); }  /* 0C0955C6 jsr @Rn */
L_0C0955CA: BLKS(0x0C0955CAu);
	r0 = r12;  /* 0C0955CA mov Rm,Rn */
	r0 += 0x1u;  /* 0C0955CC add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0955CE exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C0955D0 mov #imm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C0955D2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C095566u, 8); goto L_0C095566; } goto L_0C0955D8; }  /* 0C0955D4 bf/s */
L_0C0955D8: BLKS(0x0C0955D8u);
	r9 = 0xC0580D0u; UPD(0x0C0955DAu, 2);  /* 0C0955D8 mov.l @(disp,pc),Rn */
	r12 = 0xB4u; UPD(0x0C0955DCu, 1);  /* 0C0955DA mov.w @(disp,pc),Rn */
	IF(0x0C0955DCu); { u32 t_ = r9; PR = 0x0C0955E0u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C0955E0u); }  /* 0C0955DC jsr @Rn */
L_0C0955E0: BLKS(0x0C0955E0u);
	IF(0x0C0955E0u); MACL = r11 * r12;  /* 0C0955E0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0955E4u, 3);  /* 0C0955E2 mov.l @(disp,pc),Rn */
	IF(0x0C0955E4u); r0 = MACL;  /* 0C0955E4 sts macl,Rn */
	r0 += r3;  /* 0C0955E6 add Rm,Rn */
	r12 += 0xFFFFFFEEu;  /* 0C0955E8 add #imm,Rn */
	IF(0x0C0955EAu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0955ECu, 4);  /* 0C0955EA mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0955EC tst Rm,Rn */
	{ u32 c_ = T; r10 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0955FEu, 4); goto L_0C0955FE; } UPD(0x0C0955F2u, 1); goto L_0C0955F2; }  /* 0C0955EE bt/s */
L_0C0955F2: BLKS(0x0C0955F2u);
	r0 = 0x9Fu; UPD(0x0C0955F4u, 1);  /* 0C0955F2 mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C0955F4 add Rm,Rn */
	r10 += r0;  /* 0C0955F6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0955FAu, 3);  /* 0C0955F8 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0955FA add #imm,Rn */
	W8(r10, r7); UPD(0x0C0955FEu, 2);  /* 0C0955FC mov.b Rm,@Rn */
L_0C0955FE: BLKS(0x0C0955FEu);
	{ IF(0x0C095600u); ; /* slot nop */ UPD(0x0C095458u, 3); goto L_0C095458; }  /* 0C0955FE bra */
L_0C095610: BLKS(0x0C095610u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09558Eu, 3); goto L_0C09558E; }  /* 0C095610 bra */
L_0C095620: BLKS(0x0C095620u);
	r9 = 0xC0A0540u; UPD(0x0C095622u, 1);  /* 0C095620 mov.l @(disp,pc),Rn */
	IF(0x0C095622u); { u32 t_ = r9; PR = 0x0C095626u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C095626u); }  /* 0C095622 jsr @Rn */
L_0C095626: BLKS(0x0C095626u);
	IF(0x0C095626u); T = (s32)r0 >= 0;  /* 0C095626 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095634u, 4); goto L_0C095634; } goto L_0C09562C; }  /* 0C095628 bt/s */
L_0C09562C: BLKS(0x0C09562Cu);
	r1 = 0xFFFFE89Eu; UPD(0x0C09562Eu, 2);  /* 0C09562C mov.w @(disp,pc),Rn */
	IF(0x0C09562Eu); { u32 tv_ = (r1 + 0x0C095632u); u32 t_ = PHYS(tv_); IF(0x0C095630u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C09562E braf Rn */
L_0C095634: BLKS(0x0C095634u);
	r1 = 0xB4u; UPD(0x0C095636u, 1);  /* 0C095634 mov.w @(disp,pc),Rn */
	IF(0x0C095636u); MACL = r0 * r1;  /* 0C095636 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09563Au, 3);  /* 0C095638 mov.l @(disp,pc),Rn */
	IF(0x0C09563Au); r3 = MACL;  /* 0C09563A sts macl,Rn */
	r3 += r2;  /* 0C09563C add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C095640u, 3);  /* 0C09563E mov.l @(disp,Rm),Rn */
	T = r0 == 0x9u;  /* 0C095640 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C095644u); MACL = r13 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C095650u, 5); goto L_0C095650; } goto L_0C095646; }  /* 0C095642 bt/s */
L_0C095646: BLKS(0x0C095646u);
	IF(0x0C095646u); r1 = MACL;  /* 0C095646 sts macl,Rn */
	r1 += r2;  /* 0C095648 add Rm,Rn */
	r13 = 0x8u;  /* 0C09564A mov #imm,Rn */
	{ W32(r1 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0947F6u, 8); goto L_0C0947F6; }  /* 0C09564C bra */
L_0C095650: BLKS(0x0C095650u);
	IF(0x0C095650u); MACL = r13 * r1;  /* 0C095650 mul.l Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C095654u, 3);  /* 0C095652 mov.l @(disp,Rm),Rn */
	r8 = 0x3u;  /* 0C095654 mov #imm,Rn */
	IF(0x0C095656u); r0 = MACL;  /* 0C095656 sts macl,Rn */
	r0 += r2;  /* 0C095658 add Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C09565Cu, 4);  /* 0C09565A mov.w @(disp,pc),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C09565Eu, 1);  /* 0C09565C mov.l @(disp,Rm),Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C095660u, 1);  /* 0C09565E mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x30u); UPD(0x0C095662u, 1);  /* 0C095660 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C095662 add Rm,Rn */
	IF(0x0C095664u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C095666u, 2);  /* 0C095664 mov.b @(r0,Rm),Rn */
	r5 += r12;  /* 0C095666 add Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C095668 extu.b Rm,Rn */
	W32(r0 + 0x24u, r7); UPD(0x0C09566Cu, 3);  /* 0C09566A mov.l Rm,@(disp,Rn) */
	T = r2 > r8;  /* 0C09566C cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0956EEu, 4); goto L_0C0956EE; } UPD(0x0C095672u, 1); goto L_0C095672; }  /* 0C09566E bt/s */
L_0C095672: BLKS(0x0C095672u);
	r0 = 0xC0956C0u;  /* 0C095672 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C095674 add Rm,Rn */
	IF(0x0C095676u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C095678u, 3);  /* 0C095676 mov.w @(r0,Rm),Rn */
	IF(0x0C095678u); { u32 tv_ = (r3 + 0x0C09567Cu); u32 t_ = PHYS(tv_); IF(0x0C09567Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0956D0u: goto L_0C0956D0; case 0x0C095740u: goto L_0C095740; case 0x0C095790u: goto L_0C095790; case 0x0C095840u: goto L_0C095840; default: JUMPD(tv_); } }  /* 0C095678 braf Rn */
L_0C0956D0: BLKS(0x0C0956D0u);
	r8 = 0xB4u; UPD(0x0C0956D2u, 1);  /* 0C0956D0 mov.w @(disp,pc),Rn */
	IF(0x0C0956D2u); MACL = r11 * r8;  /* 0C0956D2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0956D6u, 3);  /* 0C0956D4 mov.l @(disp,pc),Rn */
	IF(0x0C0956D6u); r0 = MACL;  /* 0C0956D6 sts macl,Rn */
	r10 = 0xA2u; UPD(0x0C0956DAu, 2);  /* 0C0956D8 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C0956DA add Rm,Rn */
	IF(0x0C0956DCu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0956DEu, 2);  /* 0C0956DC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0956DE tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0956E2u); MACL = r13 * r8; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C095700u, 5); goto L_0C095700; } goto L_0C0956E4; }  /* 0C0956E0 bt/s */
L_0C0956E4: BLKS(0x0C0956E4u);
	IF(0x0C0956E4u); r0 = MACL;  /* 0C0956E4 sts macl,Rn */
	r0 += r9;  /* 0C0956E6 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0956EAu, 5);  /* 0C0956E8 mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C0956EA mov #imm,Rn */
	IF(0x0C0956ECu); W8(r0 + r9, r13); UPD(0x0C0956EEu, 2);  /* 0C0956EC mov.b Rm,@(r0,Rn) */
L_0C0956EE: BLKS(0x0C0956EEu);
	r13 = 0xFFFFE6AAu; UPD(0x0C0956F0u, 1);  /* 0C0956EE mov.w @(disp,pc),Rn */
	IF(0x0C0956F0u); { u32 tv_ = (r13 + 0x0C0956F4u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C0956F0 braf Rn */
L_0C095700: BLKS(0x0C095700u);
	r12 = 0xC0A9E40u; UPD(0x0C095702u, 1);  /* 0C095700 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095702 mov Rm,Rn */
	r5 = 0x3u;  /* 0C095704 mov #imm,Rn */
	IF(0x0C095706u); { u32 t_ = r12; PR = 0x0C09570Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09570Au); }  /* 0C095706 jsr @Rn */
L_0C09570A: BLKS(0x0C09570Au);
	T = (r0 & r0) == 0;  /* 0C09570A tst Rm,Rn */
	if (T) { UPD(0x0C0956EEu, 4); goto L_0C0956EE; }  /* 0C09570C bt */
L_0C09570E: BLKS(0x0C09570Eu);
	IF(0x0C09570Eu); MACL = r13 * r8;  /* 0C09570E mul.l Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C095712u, 3);  /* 0C095710 mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C095712 mov #imm,Rn */
	IF(0x0C095714u); { u32 t_ = r10; PR = 0x0C095718u; IF(0x0C095716u); r8 = MACL; /* slot sts macl,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C095718u); }  /* 0C095714 jsr @Rn */
L_0C095718: BLKS(0x0C095718u);
	r8 += r9;  /* 0C095718 add Rm,Rn */
	r6 = r0;  /* 0C09571A mov Rm,Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C09571Eu, 3);  /* 0C09571C mov.l @(disp,Rm),Rn */
	IF(0x0C09571Eu); T = (s32)r0 > 0;  /* 0C09571E cmp/pl Rn */
	IF(0x0C095720u); r2 = T;  /* 0C095720 movt Rn */
	IF(0x0C095722u); r2 <<= 2;  /* 0C095722 shll2 Rn */
	r7 = 0xC1C827Bu; UPD(0x0C095726u, 4);  /* 0C095724 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C095726 mov Rm,Rn */
	IF(0x0C095728u); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09572Au, 2);  /* 0C095728 mov.b @(r0,Rm),Rn */
	r11 = 0x98u; UPD(0x0C09572Cu, 1);  /* 0C09572A mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C09572C add Rm,Rn */
	r11 += r8;  /* 0C09572E add Rm,Rn */
	r0 = 0xFFFFEF3Cu; UPD(0x0C095732u, 3);  /* 0C095730 mov.w @(disp,pc),Rn */
	IF(0x0C095732u); { u32 tv_ = (r0 + 0x0C095736u); u32 t_ = PHYS(tv_); W8(r11, r6); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C094672u: goto L_0C094672; default: JUMPD(tv_); } }  /* 0C095732 braf Rn */
L_0C095740: BLKS(0x0C095740u);
	r3 = 0xB4u; UPD(0x0C095742u, 1);  /* 0C095740 mov.w @(disp,pc),Rn */
	IF(0x0C095742u); MACL = r13 * r3;  /* 0C095742 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C095746u, 3);  /* 0C095744 mov.l @(disp,pc),Rn */
	IF(0x0C095746u); r3 = MACL;  /* 0C095746 sts macl,Rn */
	r0 = 0x98u; UPD(0x0C09574Au, 2);  /* 0C095748 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09574A add Rm,Rn */
	IF(0x0C09574Cu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09574Eu, 2);  /* 0C09574C mov.b @(r0,Rm),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C095750u, 1);  /* 0C09574E mov.l @(disp,Rm),Rn */
	r2 = r8 & 0xFF;  /* 0C095750 extu.b Rm,Rn */
	T = r1 == r2;  /* 0C095752 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C095780u, 5); goto L_0C095780; }  /* 0C095754 bt */
L_0C095756: BLKS(0x0C095756u);
	T = (s32)r1 >= (s32)r2;  /* 0C095756 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r1 > (s32)r2; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C095762u, 4); goto L_0C095762; } goto L_0C09575C; }  /* 0C095758 bt/s */
L_0C09575C: BLKS(0x0C09575Cu);
	r1 += 0x1u;  /* 0C09575C add #imm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C095760u, 3);  /* 0C09575E mov.l Rm,@(disp,Rn) */
	T = (s32)r1 > (s32)r2;  /* 0C095760 cmp/gt Rm,Rn */
	UPD(0x0C095762u, 1);
L_0C095762: BLKS(0x0C095762u);
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09576Eu, 3); goto L_0C09576E; } goto L_0C095766; }  /* 0C095762 bf/s */
L_0C095766: BLKS(0x0C095766u);
	r4 = 0xFFFFECA6u; UPD(0x0C095768u, 2);  /* 0C095766 mov.w @(disp,pc),Rn */
	IF(0x0C095768u); { u32 tv_ = (r4 + 0x0C09576Cu); u32 t_ = PHYS(tv_); IF(0x0C09576Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C094412u: goto L_0C094412; default: JUMPD(tv_); } }  /* 0C095768 braf Rn */
L_0C09576E: BLKS(0x0C09576Eu);
	r1 = 0xFFFFE734u; UPD(0x0C095770u, 1);  /* 0C09576E mov.w @(disp,pc),Rn */
	IF(0x0C095770u); { u32 tv_ = (r1 + 0x0C095774u); u32 t_ = PHYS(tv_); IF(0x0C095772u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093EA8u: goto L_0C093EA8; default: JUMPD(tv_); } }  /* 0C095770 braf Rn */
L_0C095780: BLKS(0x0C095780u);
	{ r0 += 0x7u; /* slot add #imm,Rn */ UPD(0x0C095190u, 3); goto L_0C095190; }  /* 0C095780 bra */
L_0C095790: BLKS(0x0C095790u);
	r1 = 0xB4u; UPD(0x0C095792u, 1);  /* 0C095790 mov.w @(disp,pc),Rn */
	IF(0x0C095792u); MACL = r13 * r1;  /* 0C095792 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C095796u, 3);  /* 0C095794 mov.l @(disp,pc),Rn */
	IF(0x0C095796u); r6 = MACL;  /* 0C095796 sts macl,Rn */
	r6 += r5;  /* 0C095798 add Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C09579Cu, 3);  /* 0C09579A mov.l @(disp,Rm),Rn */
	r11 = 0xC1C8280u; UPD(0x0C09579Eu, 1);  /* 0C09579C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09579E add Rm,Rn */
	IF(0x0C0957A0u); r12 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0957A2u, 2);  /* 0C0957A0 mov.w @(r0,Rm),Rn */
	W32(r14, r12); UPD(0x0C0957A4u, 1);  /* 0C0957A2 mov.l Rm,@Rn */
	r11 = r6;  /* 0C0957A4 mov Rm,Rn */
	r12 = 0x0u;  /* 0C0957A6 mov #imm,Rn */
	UPD(0x0C0957A8u, 2);
L_0C0957A8: BLKS(0x0C0957A8u);
	r0 = r12;  /* 0C0957A8 mov Rm,Rn */
	r5 = 0xC1C82A8u; UPD(0x0C0957ACu, 2);  /* 0C0957AA mov.l @(disp,pc),Rn */
	IF(0x0C0957ACu); r0 <<= 2;  /* 0C0957AC shll2 Rn */
	IF(0x0C0957AEu); r4 = R32(r0 + r5); UPD(0x0C0957B0u, 2);  /* 0C0957AE mov.l @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C0957B2u, 1);  /* 0C0957B0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0957B4u, 1);  /* 0C0957B2 mov.l Rm,@(disp,Rn) */
	r5 = 0xE0000u; UPD(0x0C0957B6u, 1);  /* 0C0957B4 mov.l @(disp,pc),Rn */
	IF(0x0C0957B6u); { u32 t_ = r6; PR = 0x0C0957BAu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0957BAu); }  /* 0C0957B6 jsr @Rn */
L_0C0957BA: BLKS(0x0C0957BAu);
	r3 = 0xC058030u; UPD(0x0C0957BCu, 1);  /* 0C0957BA mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0957BC mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C0957C0u, 2);  /* 0C0957BE mov.l @Rm,Rn */
	IF(0x0C0957C0u); { u32 t_ = r3; PR = 0x0C0957C4u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0957C4u); }  /* 0C0957C0 jsr @Rn */
L_0C0957C4: BLKS(0x0C0957C4u);
	r8 -= r0;  /* 0C0957C4 sub Rm,Rn */
	r10 = 0x66666667u; UPD(0x0C0957C8u, 2);  /* 0C0957C6 mov.l @(disp,pc),Rn */
	IF(0x0C0957C8u); r8 <<= 2;  /* 0C0957C8 shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r10; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0957CA dmuls.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0957CEu, 4);  /* 0C0957CC mov.w @(disp,pc),Rn */
	IF(0x0C0957CEu); r1 = MACH;  /* 0C0957CE sts mach,Rn */
	IF(0x0C0957D0u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0957D0 shar Rn */
	IF(0x0C0957D2u); T = r8 >> 31; r8 <<= 1;  /* 0C0957D2 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0957D4 subc Rm,Rn */
	r1 -= r8;  /* 0C0957D6 sub Rm,Rn */
	IF(0x0C0957D8u); MACL = r13 * r9;  /* 0C0957D8 mul.l Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C0957DCu, 8);  /* 0C0957DA mov.l @(disp,Rm),Rn */
	r8 = 0xC058030u; UPD(0x0C0957DEu, 1);  /* 0C0957DC mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C0957DE add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0957E2u, 2);  /* 0C0957E0 mov.l @(disp,pc),Rn */
	IF(0x0C0957E2u); r9 = MACL;  /* 0C0957E2 sts macl,Rn */
	r10 += r2;  /* 0C0957E4 add Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C0957E8u, 3);  /* 0C0957E6 mov.l @(disp,pc),Rn */
	IF(0x0C0957E8u); { u32 t_ = r8; PR = 0x0C0957ECu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0957ECu); }  /* 0C0957E8 jsr @Rn */
L_0C0957EC: BLKS(0x0C0957ECu);
	r7 = 0xC058060u; UPD(0x0C0957EEu, 1);  /* 0C0957EC mov.l @(disp,pc),Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C0957F0u, 1);  /* 0C0957EE mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0957F2u, 1);  /* 0C0957F0 mov.l @Rm,Rn */
	r8 += r0;  /* 0C0957F2 add Rm,Rn */
	IF(0x0C0957F4u); { u32 t_ = r7; PR = 0x0C0957F8u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0957F8u); }  /* 0C0957F4 jsr @Rn */
L_0C0957F8: BLKS(0x0C0957F8u);
	r8 += r0;  /* 0C0957F8 add Rm,Rn */
	r0 = r12;  /* 0C0957FA mov Rm,Rn */
	r5 = 0xC1C82A2u; UPD(0x0C0957FEu, 3);  /* 0C0957FC mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0957FE add Rm,Rn */
	IF(0x0C095800u); r6 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C095802u, 2);  /* 0C095800 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C095802 add #imm,Rn */
	r3 = R32(r14); UPD(0x0C095806u, 2);  /* 0C095804 mov.l @Rm,Rn */
	r5 = r8;  /* 0C095806 mov Rm,Rn */
	r4 = 0x20000u; UPD(0x0C09580Au, 2);  /* 0C095808 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C09580A add Rm,Rn */
	W32(r15, r4); UPD(0x0C09580Eu, 2);  /* 0C09580C mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)r3;  /* 0C09580E exts.w Rm,Rn */
	r4 = r10;  /* 0C095810 mov Rm,Rn */
	r10 = 0xC07C6B0u; UPD(0x0C095814u, 3);  /* 0C095812 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C095814 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C095818u, 2);  /* 0C095816 mov.l @(disp,pc),Rn */
	IF(0x0C095818u); { u32 t_ = r10; PR = 0x0C09581Cu; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C07C6B0, 0x0C07C6B0u, 0x0C09581Cu); }  /* 0C095818 jsr @Rn */
L_0C09581C: BLKS(0x0C09581Cu);
	r2 = r12;  /* 0C09581C mov Rm,Rn */
	r2 += 0x1u;  /* 0C09581E add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C095820 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C095822 mov #imm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C095824 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0957A8u, 8); goto L_0C0957A8; } goto L_0C09582A; }  /* 0C095826 bf/s */
L_0C09582A: BLKS(0x0C09582Au);
	r13 = 0xC26CD40u; UPD(0x0C09582Cu, 2);  /* 0C09582A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C09582C mov #imm,Rn */
	r12 = 0x9Fu; UPD(0x0C095830u, 2);  /* 0C09582E mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C095830 add Rm,Rn */
	r13 += r12;  /* 0C095832 add Rm,Rn */
	r12 = 0xFFFFE562u; UPD(0x0C095836u, 3);  /* 0C095834 mov.w @(disp,pc),Rn */
	IF(0x0C095836u); { u32 tv_ = (r12 + 0x0C09583Au); u32 t_ = PHYS(tv_); W8(r13, r11); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Cu: goto L_0C093D9C; default: JUMPD(tv_); } }  /* 0C095836 braf Rn */
L_0C095840: BLKS(0x0C095840u);
	r1 = 0xB4u; UPD(0x0C095842u, 1);  /* 0C095840 mov.w @(disp,pc),Rn */
	IF(0x0C095842u); MACL = r13 * r1;  /* 0C095842 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C095846u, 3);  /* 0C095844 mov.l @(disp,pc),Rn */
	IF(0x0C095846u); r3 = MACL;  /* 0C095846 sts macl,Rn */
	r3 += r2;  /* 0C095848 add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C09584Cu, 3);  /* 0C09584A mov.l @(disp,Rm),Rn */
	T = r0 == 0x8u;  /* 0C09584C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0958C0u, 4); goto L_0C0958C0; }  /* 0C09584E bt */
L_0C095850: BLKS(0x0C095850u);
	r9 = 0x7u;  /* 0C095850 mov #imm,Rn */
	T = (s32)r0 > (s32)r9;  /* 0C095852 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09585Eu, 5); goto L_0C09585E; } goto L_0C095858; }  /* 0C095854 bt/s */
L_0C095858: BLKS(0x0C095858u);
	r0 += 0x1u;  /* 0C095858 add #imm,Rn */
	W32(r3 + 0xCu, r0); UPD(0x0C09585Cu, 3);  /* 0C09585A mov.l Rm,@(disp,Rn) */
	r2 = 0x8u;  /* 0C09585C mov #imm,Rn */
	UPD(0x0C09585Eu, 1);
L_0C09585E: BLKS(0x0C09585Eu);
	T = (s32)r0 > (s32)r2;  /* 0C09585E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C095866u, 4); goto L_0C095866; } goto L_0C095864; }  /* 0C095860 bf/s */
L_0C095864: BLKS(0x0C095864u);
	W32(r3 + 0xCu, r0); UPD(0x0C095866u, 2);  /* 0C095864 mov.l Rm,@(disp,Rn) */
L_0C095866: BLKS(0x0C095866u);
	r1 = 0xFFFFE63Cu; UPD(0x0C095868u, 1);  /* 0C095866 mov.w @(disp,pc),Rn */
	IF(0x0C095868u); { u32 tv_ = (r1 + 0x0C09586Cu); u32 t_ = PHYS(tv_); IF(0x0C09586Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093EA8u: goto L_0C093EA8; default: JUMPD(tv_); } }  /* 0C095868 braf Rn */
L_0C0958C0: BLKS(0x0C0958C0u);
	IF(0x0C0958C0u); MACL = r11 * r1;  /* 0C0958C0 mul.l Rm,Rn */
	r7 = 0x0u;  /* 0C0958C2 mov #imm,Rn */
	IF(0x0C0958C4u); r0 = MACL;  /* 0C0958C4 sts macl,Rn */
	r1 += 0xFFFFFFEEu;  /* 0C0958C6 add #imm,Rn */
	r0 += r2;  /* 0C0958C8 add Rm,Rn */
	IF(0x0C0958CAu); W8(r0 + r1, r7); UPD(0x0C0958CCu, 7);  /* 0C0958CA mov.b Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFDu;  /* 0C0958CC add #imm,Rn */
	r3 += r1;  /* 0C0958CE add Rm,Rn */
	W8(r3, r7); UPD(0x0C0958D2u, 3);  /* 0C0958D0 mov.b Rm,@Rn */
L_0C0958D2: BLKS(0x0C0958D2u);
	r13 = 0xFFFFE4C6u; UPD(0x0C0958D4u, 1);  /* 0C0958D2 mov.w @(disp,pc),Rn */
	IF(0x0C0958D4u); { u32 tv_ = (r13 + 0x0C0958D8u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C0958D4 braf Rn */
L_0C0958E0: BLKS(0x0C0958E0u);
	r12 = 0xC0A05D0u; UPD(0x0C0958E2u, 1);  /* 0C0958E0 mov.l @(disp,pc),Rn */
	IF(0x0C0958E2u); { u32 t_ = r12; PR = 0x0C0958E6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0958E6u); }  /* 0C0958E2 jsr @Rn */
L_0C0958E6: BLKS(0x0C0958E6u);
	IF(0x0C0958E6u); T = (s32)r0 >= 0;  /* 0C0958E6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0958F4u, 4); goto L_0C0958F4; } goto L_0C0958EC; }  /* 0C0958E8 bt/s */
L_0C0958EC: BLKS(0x0C0958ECu);
	r1 = 0xFFFFE5DEu; UPD(0x0C0958EEu, 2);  /* 0C0958EC mov.w @(disp,pc),Rn */
	IF(0x0C0958EEu); { u32 tv_ = (r1 + 0x0C0958F2u); u32 t_ = PHYS(tv_); IF(0x0C0958F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C0958EE braf Rn */
L_0C0958F4: BLKS(0x0C0958F4u);
	r9 = 0xB4u; UPD(0x0C0958F6u, 1);  /* 0C0958F4 mov.w @(disp,pc),Rn */
	IF(0x0C0958F6u); MACL = r13 * r9;  /* 0C0958F6 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0958FAu, 3);  /* 0C0958F8 mov.l @(disp,pc),Rn */
	IF(0x0C0958FAu); r8 = MACL;  /* 0C0958FA sts macl,Rn */
	IF(0x0C0958FCu); MACL = r11 * r9;  /* 0C0958FC mul.l Rm,Rn */
	r8 += r0;  /* 0C0958FE add Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C095902u, 5);  /* 0C095900 mov.l @(disp,Rm),Rn */
	IF(0x0C095902u); r5 = MACL;  /* 0C095902 sts macl,Rn */
	r5 += r0;  /* 0C095904 add Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C095908u, 3);  /* 0C095906 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C09590Au, 1);  /* 0C095908 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C09590A add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09590Eu, 2);  /* 0C09590C mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C09590E add Rm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C095912u, 2);  /* 0C095910 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C095914u, 1);  /* 0C095912 mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C095914 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C095918u, 2);  /* 0C095916 mov.w @Rm,Rn */
	r8 += 0xFFFFFF82u;  /* 0C095918 add #imm,Rn */
	r10 = R32(r8); UPD(0x0C09591Cu, 2);  /* 0C09591A mov.l @Rm,Rn */
	IF(0x0C09591Cu); MACL = r7 * r9;  /* 0C09591C mul.l Rm,Rn */
	r2 = 0xCCFFFEFFu; UPD(0x0C095920u, 3);  /* 0C09591E mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C095920 and Rm,Rn */
	W32(r8, r10); UPD(0x0C095924u, 2);  /* 0C095922 mov.l Rm,@Rn */
	IF(0x0C095924u); r7 = MACL;  /* 0C095924 sts macl,Rn */
	r7 += r0;  /* 0C095926 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C09592Au, 3);  /* 0C095928 mov.l @Rm,Rn */
	r6 = 0x33000100u; UPD(0x0C09592Cu, 1);  /* 0C09592A mov.l @(disp,pc),Rn */
	r3 &= r6;  /* 0C09592C and Rm,Rn */
	r10 |= r3;  /* 0C09592E or Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C095932u, 3);  /* 0C095930 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C095932 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09593Cu, 4); goto L_0C09593C; } UPD(0x0C095938u, 1); goto L_0C095938; }  /* 0C095934 bf/s */
L_0C095938: BLKS(0x0C095938u);
	{ IF(0x0C09593Au); ; /* slot nop */ UPD(0x0C095A20u, 3); goto L_0C095A20; }  /* 0C095938 bra */
L_0C09593C: BLKS(0x0C09593Cu);
	T = r0 == 0xFu;  /* 0C09593C cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095946u, 4); goto L_0C095946; } goto L_0C095942; }  /* 0C09593E bt/s */
L_0C095942: BLKS(0x0C095942u);
	{ IF(0x0C095944u); ; /* slot nop */ UPD(0x0C09530Cu, 4); goto L_0C09530C; }  /* 0C095942 bra */
L_0C095946: BLKS(0x0C095946u);
	r11 = 0xC0A9E40u; UPD(0x0C095948u, 1);  /* 0C095946 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095948 mov Rm,Rn */
	IF(0x0C09594Au); { u32 t_ = r11; PR = 0x0C09594Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09594Eu); }  /* 0C09594A jsr @Rn */
L_0C09594E: BLKS(0x0C09594Eu);
	T = (r0 & r0) == 0;  /* 0C09594E tst Rm,Rn */
	if (T) { UPD(0x0C0958D2u, 4); goto L_0C0958D2; }  /* 0C095950 bt */
L_0C095952: BLKS(0x0C095952u);
	r2 = 0x2u;  /* 0C095952 mov #imm,Rn */
	r12 = 0x9Cu; UPD(0x0C095956u, 2);  /* 0C095954 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C095956 add Rm,Rn */
	W32(r14 + 0x10u, r12); UPD(0x0C09595Au, 2);  /* 0C095958 mov.l Rm,@(disp,Rn) */
	r12 += 0x3u;  /* 0C09595A add #imm,Rn */
	W32(r14 + 0x14u, r12); UPD(0x0C09595Eu, 2);  /* 0C09595C mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C095960u, 1);  /* 0C09595E mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C095960 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C095962 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C095990u, 5); goto L_0C095990; }  /* 0C095964 bf */
L_0C095966: BLKS(0x0C095966u);
	T = r0 == 0x3u;  /* 0C095966 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0958D2u, 4); goto L_0C0958D2; }  /* 0C095968 bf */
L_0C09596A: BLKS(0x0C09596Au);
	r2 = R32(r8 + 0xCu); UPD(0x0C09596Cu, 1);  /* 0C09596A mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09596C mov Rm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C095970u, 2);  /* 0C09596E mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C095970 add #imm,Rn */
	IF(0x0C095972u); { u32 t_ = r0; PR = 0x0C095976u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095976u); }  /* 0C095972 jsr @Rn */
L_0C095976: BLKS(0x0C095976u);
	r0 = 0x88u; UPD(0x0C095978u, 1);  /* 0C095976 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C095978 mov #imm,Rn */
	IF(0x0C09597Au); W16(r0 + r8, r4); UPD(0x0C09597Cu, 2);  /* 0C09597A mov.w Rm,@(r0,Rn) */
	r1 = 0x0u;  /* 0C09597C mov #imm,Rn */
	r8 = R32(r14 + 0x14u); UPD(0x0C095980u, 2);  /* 0C09597E mov.l @(disp,Rm),Rn */
	W8(r8, r1); UPD(0x0C095982u, 1);  /* 0C095980 mov.b Rm,@Rn */
	r13 = 0xFFFFE6ECu; UPD(0x0C095984u, 1);  /* 0C095982 mov.w @(disp,pc),Rn */
	IF(0x0C095984u); { u32 tv_ = (r13 + 0x0C095988u); u32 t_ = PHYS(tv_); r2 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C094074u: goto L_0C094074; default: JUMPD(tv_); } }  /* 0C095984 braf Rn */
L_0C095990: BLKS(0x0C095990u);
	r12 = 0xC058090u; UPD(0x0C095992u, 1);  /* 0C095990 mov.l @(disp,pc),Rn */
	r10 = 0x280u; UPD(0x0C095994u, 1);  /* 0C095992 mov.w @(disp,pc),Rn */
	IF(0x0C095994u); { u32 t_ = r12; PR = 0x0C095998u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C095998u); }  /* 0C095994 jsr @Rn */
L_0C095998: BLKS(0x0C095998u);
	r7 = (u32)(s32)(s16)r0;  /* 0C095998 exts.w Rm,Rn */
	IF(0x0C09599Au); MACL = r7 * r10;  /* 0C09599A mul.l Rm,Rn */
	r11 = 0xC283794u; UPD(0x0C09599Eu, 4);  /* 0C09599C mov.l @(disp,pc),Rn */
	r13 = 0xC057390u; UPD(0x0C0959A0u, 1);  /* 0C09599E mov.l @(disp,pc),Rn */
	IF(0x0C0959A0u); r9 = MACL;  /* 0C0959A0 sts macl,Rn */
	r9 += r11;  /* 0C0959A2 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0959A6u, 3);  /* 0C0959A4 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0959A8u, 1);  /* 0C0959A6 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x10u); UPD(0x0C0959AAu, 1);  /* 0C0959A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0959AAu); { u32 t_ = r13; PR = 0x0C0959AEu; r7 = R32(r9 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0959AEu); }  /* 0C0959AA jsr @Rn */
L_0C0959AE: BLKS(0x0C0959AEu);
	r3 = (u32)(s32)(s16)r0;  /* 0C0959AE exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C0959B2u, 2);  /* 0C0959B0 mov.l Rm,@Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0959B2 add #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0959B6u, 2);  /* 0C0959B4 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0959B8u, 1);  /* 0C0959B6 mov.b @Rm,Rn */
	r12 = 0xC1C8248u; UPD(0x0C0959BAu, 1);  /* 0C0959B8 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C0959BA extu.b Rm,Rn */
	IF(0x0C0959BCu); r0 <<= 2;  /* 0C0959BC shll2 Rn */
	IF(0x0C0959BEu); r5 = R32(r0 + r12); UPD(0x0C0959C0u, 3);  /* 0C0959BE mov.l @(r0,Rm),Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C0959C2u, 1);  /* 0C0959C0 mov.l @(disp,Rm),Rn */
	r0 = 0xC1C81D4u; UPD(0x0C0959C4u, 1);  /* 0C0959C2 mov.l @(disp,pc),Rn */
	IF(0x0C0959C4u); r4 <<= 2;  /* 0C0959C4 shll2 Rn */
	IF(0x0C0959C6u); r2 = R32(r0 + r4); UPD(0x0C0959C8u, 2);  /* 0C0959C6 mov.l @(r0,Rm),Rn */
	r11 = R32(r8 + 0x24u); UPD(0x0C0959CAu, 1);  /* 0C0959C8 mov.l @(disp,Rm),Rn */
	r9 = R32(r8 + 0x28u); UPD(0x0C0959CCu, 1);  /* 0C0959CA mov.l @(disp,Rm),Rn */
	r11 += r5;  /* 0C0959CC add Rm,Rn */
	r0 = 0xC1C81DCu; UPD(0x0C0959D0u, 2);  /* 0C0959CE mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C0959D0 add Rm,Rn */
	IF(0x0C0959D2u); r8 = R32(r0 + r4); UPD(0x0C0959D4u, 2);  /* 0C0959D2 mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C0959D4 mov Rm,Rn */
	r10 = 0xC177B7Cu; UPD(0x0C0959D8u, 2);  /* 0C0959D6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0959D8 mov #imm,Rn */
	W32(r15, r8); UPD(0x0C0959DCu, 2);  /* 0C0959DA mov.l Rm,@Rn */
	r6 = r9;  /* 0C0959DC mov Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0959E0u, 2);  /* 0C0959DE mov.l Rm,@(disp,Rn) */
	r13 = 0xC7C1710u; UPD(0x0C0959E2u, 1);  /* 0C0959E0 mov.l @(disp,pc),Rn */
	IF(0x0C0959E2u); { u32 t_ = r13; PR = 0x0C0959E6u; r7 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C0959E6u); }  /* 0C0959E2 jsr @Rn */
L_0C0959E6: BLKS(0x0C0959E6u);
	r7 = 0x4000u; UPD(0x0C0959E8u, 1);  /* 0C0959E6 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0959E8 mov #imm,Rn */
	r7 += r8;  /* 0C0959EA add Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C0959EEu, 3);  /* 0C0959EC mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0959EE mov Rm,Rn */
	W32(r15, r7); UPD(0x0C0959F2u, 2);  /* 0C0959F0 mov.l Rm,@Rn */
	r6 = r9;  /* 0C0959F2 mov Rm,Rn */
	IF(0x0C0959F4u); { u32 t_ = r13; PR = 0x0C0959F8u; r7 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C0959F8u); }  /* 0C0959F4 jsr @Rn */
L_0C0959F8: BLKS(0x0C0959F8u);
	r0 = 0x8000u; UPD(0x0C0959FAu, 1);  /* 0C0959F8 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0959FA mov Rm,Rn */
	r8 += r0;  /* 0C0959FC add Rm,Rn */
	W32(r15, r8); UPD(0x0C095A00u, 3);  /* 0C0959FE mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C095A00 mov #imm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C095A04u, 2);  /* 0C095A02 mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C095A04 mov Rm,Rn */
	IF(0x0C095A06u); { u32 t_ = r13; PR = 0x0C095A0Au; r7 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C095A0Au); }  /* 0C095A06 jsr @Rn */
L_0C095A0A: BLKS(0x0C095A0Au);
	r6 = R32(r14 + 0x10u); UPD(0x0C095A0Cu, 1);  /* 0C095A0A mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C095A0Eu, 1);  /* 0C095A0C mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C095A0E add #imm,Rn */
	W8(r6, r3); UPD(0x0C095A12u, 2);  /* 0C095A10 mov.b Rm,@Rn */
	r8 = R32(r14 + 0x14u); UPD(0x0C095A14u, 1);  /* 0C095A12 mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C095A16u, 1);  /* 0C095A14 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C095A16 add #imm,Rn */
	r13 = 0xFFFFE5C8u; UPD(0x0C095A1Au, 2);  /* 0C095A18 mov.w @(disp,pc),Rn */
	IF(0x0C095A1Au); { u32 tv_ = (r13 + 0x0C095A1Eu); u32 t_ = PHYS(tv_); W8(r8, r10); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093FE6u: goto L_0C093FE6; default: JUMPD(tv_); } }  /* 0C095A1A braf Rn */
L_0C095A20: BLKS(0x0C095A20u);
	r0 = 0xA6u; UPD(0x0C095A22u, 1);  /* 0C095A20 mov.w @(disp,pc),Rn */
	IF(0x0C095A22u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C095A24u, 1);  /* 0C095A22 mov.b @(r0,Rm),Rn */
	r6 = 0xA1u; UPD(0x0C095A26u, 1);  /* 0C095A24 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C095A26 mov Rm,Rn */
	IF(0x0C095A28u); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C095A2Au, 2);  /* 0C095A28 mov.b @(r0,Rm),Rn */
	T = (r3 & r10) == 0;  /* 0C095A2A tst Rm,Rn */
	if (T) { UPD(0x0C095A3Cu, 4); goto L_0C095A3C; }  /* 0C095A2C bt */
L_0C095A2E: BLKS(0x0C095A2Eu);
	r4 = r13;  /* 0C095A2E mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C095A32u, 2);  /* 0C095A30 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C095A32 mov #imm,Rn */
	IF(0x0C095A34u); { u32 t_ = r9; PR = 0x0C095A38u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095A38u); }  /* 0C095A34 jsr @Rn */
L_0C095A38: BLKS(0x0C095A38u);
	T = (r0 & r0) == 0;  /* 0C095A38 tst Rm,Rn */
	if (!T) { UPD(0x0C095A44u, 4); goto L_0C095A44; }  /* 0C095A3A bf */
L_0C095A3C: BLKS(0x0C095A3Cu);
	r13 = 0xFFFFE35Cu; UPD(0x0C095A3Eu, 1);  /* 0C095A3C mov.w @(disp,pc),Rn */
	IF(0x0C095A3Eu); { u32 tv_ = (r13 + 0x0C095A42u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C095A3E braf Rn */
L_0C095A44: BLKS(0x0C095A44u);
	r7 = R32(r8 + 0xCu); UPD(0x0C095A46u, 1);  /* 0C095A44 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C095A46 mov Rm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C095A4Au, 2);  /* 0C095A48 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C095A4A add #imm,Rn */
	IF(0x0C095A4Cu); { u32 t_ = r0; PR = 0x0C095A50u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095A50u); }  /* 0C095A4C jsr @Rn */
L_0C095A50: BLKS(0x0C095A50u);
	r0 = 0x88u; UPD(0x0C095A52u, 1);  /* 0C095A50 mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C095A52 mov #imm,Rn */
	{ IF(0x0C095A56u); W16(r0 + r8, r13); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C095148u, 4); goto L_0C095148; }  /* 0C095A54 bra */
L_0C095AB0: BLKS(0x0C095AB0u);
	r8 = 0xC0A0490u; UPD(0x0C095AB2u, 1);  /* 0C095AB0 mov.l @(disp,pc),Rn */
	IF(0x0C095AB2u); { u32 t_ = r8; PR = 0x0C095AB6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C095AB6u); }  /* 0C095AB2 jsr @Rn */
L_0C095AB6: BLKS(0x0C095AB6u);
	IF(0x0C095AB6u); T = (s32)r0 >= 0;  /* 0C095AB6 cmp/pz Rn */
	if (T) { UPD(0x0C095AC2u, 4); goto L_0C095AC2; }  /* 0C095AB8 bt */
L_0C095ABA: BLKS(0x0C095ABAu);
	r1 = 0xFFFFE410u; UPD(0x0C095ABCu, 1);  /* 0C095ABA mov.w @(disp,pc),Rn */
	IF(0x0C095ABCu); { u32 tv_ = (r1 + 0x0C095AC0u); u32 t_ = PHYS(tv_); IF(0x0C095ABEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C095ABC braf Rn */
L_0C095AC2: BLKS(0x0C095AC2u);
	r4 = 0xB4u; UPD(0x0C095AC4u, 1);  /* 0C095AC2 mov.w @(disp,pc),Rn */
	IF(0x0C095AC4u); MACL = r13 * r4;  /* 0C095AC4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C095AC8u, 3);  /* 0C095AC6 mov.l @(disp,pc),Rn */
	IF(0x0C095AC8u); r9 = MACL;  /* 0C095AC8 sts macl,Rn */
	IF(0x0C095ACAu); MACL = r0 * r4;  /* 0C095ACA mul.l Rm,Rn */
	r9 += r6;  /* 0C095ACC add Rm,Rn */
	r3 = R32(r9 + 0x2Cu); UPD(0x0C095AD0u, 5);  /* 0C095ACE mov.l @(disp,Rm),Rn */
	IF(0x0C095AD0u); r8 = MACL;  /* 0C095AD0 sts macl,Rn */
	r8 += r6;  /* 0C095AD2 add Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C095AD6u, 3);  /* 0C095AD4 mov.l @(disp,Rm),Rn */
	r12 = 0x9Cu; UPD(0x0C095AD8u, 1);  /* 0C095AD6 mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C095AD8 add Rm,Rn */
	W32(r9 + 0x24u, r10); UPD(0x0C095ADCu, 2);  /* 0C095ADA mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C095ADC add Rm,Rn */
	r0 = R32(r8 + 0x28u); UPD(0x0C095AE0u, 2);  /* 0C095ADE mov.l @(disp,Rm),Rn */
	r10 = r12;  /* 0C095AE0 mov Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C095AE4u, 2);  /* 0C095AE2 mov.l @(disp,Rm),Rn */
	r10 += 0x3u;  /* 0C095AE4 add #imm,Rn */
	r0 += r1;  /* 0C095AE6 add Rm,Rn */
	W32(r9 + 0x28u, r0); UPD(0x0C095AEAu, 3);  /* 0C095AE8 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C095AECu, 1);  /* 0C095AEA mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C095AEC extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C095AEE cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095BB0u, 5); goto L_0C095BB0; } goto L_0C095AF4; }  /* 0C095AF0 bt/s */
L_0C095AF4: BLKS(0x0C095AF4u);
	T = (s32)r0 > (s32)r5;  /* 0C095AF4 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C095B50u, 5); goto L_0C095B50; } goto L_0C095AFA; }  /* 0C095AF6 bt/s */
L_0C095AFA: BLKS(0x0C095AFAu);
	T = (r0 & r0) == 0;  /* 0C095AFA tst Rm,Rn */
	if (T) { UPD(0x0C095B20u, 5); goto L_0C095B20; }  /* 0C095AFC bt */
L_0C095AFE: BLKS(0x0C095AFEu);
	r7 = 0xB4u; UPD(0x0C095B00u, 1);  /* 0C095AFE mov.w @(disp,pc),Rn */
	IF(0x0C095B00u); MACL = r13 * r7;  /* 0C095B00 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C095B04u, 3);  /* 0C095B02 mov.l @(disp,pc),Rn */
	IF(0x0C095B04u); r6 = MACL;  /* 0C095B04 sts macl,Rn */
	r6 += r12;  /* 0C095B06 add Rm,Rn */
	r3 = 0x86u; UPD(0x0C095B0Au, 3);  /* 0C095B08 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C095B0A mov Rm,Rn */
	IF(0x0C095B0Cu); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C095B0Eu, 2);  /* 0C095B0C mov.w @(r0,Rm),Rn */
	r5 += 0x8u;  /* 0C095B0E add #imm,Rn */
	IF(0x0C095B10u); r5 >>= 2;  /* 0C095B10 shlr2 Rn */
	IF(0x0C095B12u); r5 >>= 2;  /* 0C095B12 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C095B14 mov #imm,Rn */
	r5 &= r0;  /* 0C095B16 and Rm,Rn */
	r1 = 0xFFFFE38Au; UPD(0x0C095B1Au, 6);  /* 0C095B18 mov.w @(disp,pc),Rn */
	IF(0x0C095B1Au); { u32 tv_ = (r1 + 0x0C095B1Eu); u32 t_ = PHYS(tv_); W32(r6 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093EA8u: goto L_0C093EA8; default: JUMPD(tv_); } }  /* 0C095B1A braf Rn */
L_0C095B20: BLKS(0x0C095B20u);
	r7 = 0xA0u; UPD(0x0C095B22u, 1);  /* 0C095B20 mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C095B22 add Rm,Rn */
	r7 += r9;  /* 0C095B24 add Rm,Rn */
	r8 += 0x1u;  /* 0C095B26 add #imm,Rn */
	r7 += 0x1u;  /* 0C095B28 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r8); UPD(0x0C095B2Cu, 5);  /* 0C095B2A mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C095B2Eu, 1);  /* 0C095B2C mov.b @Rm,Rn */
	T = (r12 & r11) == 0;  /* 0C095B2E tst Rm,Rn */
	if (T) { UPD(0x0C095AFEu, 4); goto L_0C095AFE; }  /* 0C095B30 bt */
L_0C095B32: BLKS(0x0C095B32u);
	r8 = R32(r9); UPD(0x0C095B34u, 1);  /* 0C095B32 mov.l @Rm,Rn */
	r0 = 0xFFFFBFFFu; UPD(0x0C095B36u, 1);  /* 0C095B34 mov.w @(disp,pc),Rn */
	r8 &= r0;  /* 0C095B36 and Rm,Rn */
	W32(r9, r8); UPD(0x0C095B3Au, 2);  /* 0C095B38 mov.l Rm,@Rn */
	r9 = r3;  /* 0C095B3A mov Rm,Rn */
	r9 += 0x1u;  /* 0C095B3C add #imm,Rn */
	{ W8(r10, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C095AFEu, 5); goto L_0C095AFE; }  /* 0C095B3E bra */
L_0C095B50: BLKS(0x0C095B50u);
	if (!T) { UPD(0x0C095AFEu, 3); goto L_0C095AFE; }  /* 0C095B50 bf */
L_0C095B52: BLKS(0x0C095B52u);
	r2 = 0x86u; UPD(0x0C095B54u, 1);  /* 0C095B52 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C095B54 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C095B58u, 2);  /* 0C095B56 mov.w @Rm,Rn */
	r7 = 0x1FFu; UPD(0x0C095B5Au, 1);  /* 0C095B58 mov.w @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C095B5Cu, 1);  /* 0C095B5A mov.w @(disp,pc),Rn */
	r0 &= r7;  /* 0C095B5C and Rm,Rn */
	T = r0 == r5;  /* 0C095B5E cmp/eq Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095BA0u, 5); goto L_0C095BA0; } goto L_0C095B64; }  /* 0C095B60 bt/s */
L_0C095B64: BLKS(0x0C095B64u);
	r6 = 0xFFu; UPD(0x0C095B66u, 2);  /* 0C095B64 mov.w @(disp,pc),Rn */
	r3 = r2;  /* 0C095B66 mov Rm,Rn */
	UPD(0x0C095B68u, 1);
L_0C095B68: BLKS(0x0C095B68u);
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C095B6Au, 1);  /* 0C095B68 mov.w @Rm,Rn */
	r9 = r2;  /* 0C095B6A mov Rm,Rn */
	r9 &= r7;  /* 0C095B6C and Rm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C095B6E cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095B7Eu, 6); goto L_0C095B7E; } goto L_0C095B74; }  /* 0C095B70 bt/s */
L_0C095B74: BLKS(0x0C095B74u);
	r8 = r2;  /* 0C095B74 mov Rm,Rn */
	r8 += 0x1u;  /* 0C095B76 add #imm,Rn */
	W16(r3, r8); UPD(0x0C095B7Au, 4);  /* 0C095B78 mov.w Rm,@Rn */
	r2 = r8;  /* 0C095B7A mov Rm,Rn */
	r10 = r2;  /* 0C095B7C mov Rm,Rn */
	UPD(0x0C095B7Eu, 2);
L_0C095B7E: BLKS(0x0C095B7Eu);
	r10 &= r7;  /* 0C095B7E and Rm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C095B80 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095B8Eu, 5); goto L_0C095B8E; } goto L_0C095B86; }  /* 0C095B82 bf/s */
L_0C095B86: BLKS(0x0C095B86u);
	r11 = r2;  /* 0C095B86 mov Rm,Rn */
	r11 += 0xFFFFFFFFu;  /* 0C095B88 add #imm,Rn */
	W16(r3, r11); UPD(0x0C095B8Cu, 4);  /* 0C095B8A mov.w Rm,@Rn */
	r4 = r12;  /* 0C095B8C mov Rm,Rn */
	UPD(0x0C095B8Eu, 1);
L_0C095B8E: BLKS(0x0C095B8Eu);
	r4 += 0x1u;  /* 0C095B8E add #imm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C095B90 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C095B92 mov #imm,Rn */
	T = (s32)r12 > (s32)r2;  /* 0C095B94 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C095B68u, 7); goto L_0C095B68; }  /* 0C095B96 bf */
L_0C095B98: BLKS(0x0C095B98u);
	{ IF(0x0C095B9Au); ; /* slot nop */ UPD(0x0C095AFEu, 3); goto L_0C095AFE; }  /* 0C095B98 bra */
L_0C095BA0: BLKS(0x0C095BA0u);
	r12 = R32(r9); UPD(0x0C095BA2u, 1);  /* 0C095BA0 mov.l @Rm,Rn */
	r7 = 0x0u;  /* 0C095BA2 mov #imm,Rn */
	r1 = 0x4000u; UPD(0x0C095BA6u, 2);  /* 0C095BA4 mov.w @(disp,pc),Rn */
	r12 |= r1;  /* 0C095BA6 or Rm,Rn */
	W8(r10, r7); UPD(0x0C095BAAu, 2);  /* 0C095BA8 mov.b Rm,@Rn */
	W32(r9, r12); UPD(0x0C095BACu, 1);  /* 0C095BAA mov.l Rm,@Rn */
L_0C095BAC: BLKS(0x0C095BACu);
	{ IF(0x0C095BAEu); ; /* slot nop */ UPD(0x0C095AFEu, 3); goto L_0C095AFE; }  /* 0C095BAC bra */
L_0C095BB0: BLKS(0x0C095BB0u);
	r11 = 0xC058130u; UPD(0x0C095BB2u, 1);  /* 0C095BB0 mov.l @(disp,pc),Rn */
	IF(0x0C095BB2u); { u32 t_ = r11; PR = 0x0C095BB6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C095BB6u); }  /* 0C095BB2 jsr @Rn */
L_0C095BB6: BLKS(0x0C095BB6u);
	r11 = 0xC057430u; UPD(0x0C095BB8u, 1);  /* 0C095BB6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095BB8 mov Rm,Rn */
	IF(0x0C095BBAu); { u32 t_ = r11; PR = 0x0C095BBEu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C095BBEu); }  /* 0C095BBA jsr @Rn */
L_0C095BBE: BLKS(0x0C095BBEu);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C095BC0u, 1);  /* 0C095BBE mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C095BC0 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095C00u, 4); goto L_0C095C00; } goto L_0C095BC6; }  /* 0C095BC2 bf/s */
L_0C095BC6: BLKS(0x0C095BC6u);
	r6 = 0xA0u; UPD(0x0C095BC8u, 2);  /* 0C095BC6 mov.w @(disp,pc),Rn */
	r8 += r6;  /* 0C095BC8 add Rm,Rn */
	r9 += r6;  /* 0C095BCA add Rm,Rn */
	r8 += 0x1u;  /* 0C095BCC add #imm,Rn */
	r9 += 0x1u;  /* 0C095BCE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C095BD2u, 5);  /* 0C095BD0 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C095BD4u, 1);  /* 0C095BD2 mov.b @Rm,Rn */
	T = (r1 & r3) == 0;  /* 0C095BD4 tst Rm,Rn */
	if (!T) { UPD(0x0C095BDEu, 4); goto L_0C095BDE; }  /* 0C095BD6 bf */
L_0C095BD8: BLKS(0x0C095BD8u);
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C095BDAu, 1);  /* 0C095BD8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C095BDA add #imm,Rn */
	W8(r10, r4); UPD(0x0C095BDEu, 2);  /* 0C095BDC mov.b Rm,@Rn */
L_0C095BDE: BLKS(0x0C095BDEu);
	r10 = 0xC0A9E40u; UPD(0x0C095BE0u, 1);  /* 0C095BDE mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095BE0 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C095BE2 mov #imm,Rn */
	IF(0x0C095BE4u); { u32 t_ = r10; PR = 0x0C095BE8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095BE8u); }  /* 0C095BE4 jsr @Rn */
L_0C095BE8: BLKS(0x0C095BE8u);
	T = (r0 & r0) == 0;  /* 0C095BE8 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0xCu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095BACu, 4); goto L_0C095BAC; } goto L_0C095BEE; }  /* 0C095BEA bt/s */
L_0C095BEE: BLKS(0x0C095BEEu);
	{ W8(r12, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C095AFEu, 4); goto L_0C095AFE; }  /* 0C095BEE bra */
L_0C095C00: BLKS(0x0C095C00u);
	r8 = 0xC0A9E40u; UPD(0x0C095C02u, 1);  /* 0C095C00 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C095C02 mov #imm,Rn */
	IF(0x0C095C04u); { u32 t_ = r8; PR = 0x0C095C08u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095C08u); }  /* 0C095C04 jsr @Rn */
L_0C095C08: BLKS(0x0C095C08u);
	T = (r0 & r0) == 0;  /* 0C095C08 tst Rm,Rn */
	if (!T) { UPD(0x0C095C16u, 4); goto L_0C095C16; }  /* 0C095C0A bf */
L_0C095C0C: BLKS(0x0C095C0Cu);
	r14 += 0x20u;  /* 0C095C0C add #imm,Rn */
	r13 = 0xFFFFE18Au; UPD(0x0C095C10u, 2);  /* 0C095C0E mov.w @(disp,pc),Rn */
	IF(0x0C095C10u); { u32 tv_ = (r13 + 0x0C095C14u); u32 t_ = PHYS(tv_); IF(0x0C095C12u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C095C10 braf Rn */
L_0C095C16: BLKS(0x0C095C16u);
	r4 = 0x86u; UPD(0x0C095C18u, 1);  /* 0C095C16 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C095C18 mov Rm,Rn */
	IF(0x0C095C1Au); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C095C1Cu, 2);  /* 0C095C1A mov.w @(r0,Rm),Rn */
	r11 = 0xC058060u; UPD(0x0C095C1Eu, 1);  /* 0C095C1C mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C095C1E mov Rm,Rn */
	W32(r14, r5); UPD(0x0C095C22u, 2);  /* 0C095C20 mov.l Rm,@Rn */
	r10 = 0x160000u; UPD(0x0C095C24u, 1);  /* 0C095C22 mov.l @(disp,pc),Rn */
	r8 = 0xC058030u; UPD(0x0C095C26u, 1);  /* 0C095C24 mov.l @(disp,pc),Rn */
	IF(0x0C095C26u); { u32 t_ = r11; PR = 0x0C095C2Au; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C095C2Au); }  /* 0C095C26 jsr @Rn */
L_0C095C2A: BLKS(0x0C095C2Au);
	r11 = R32(r9 + 0x24u); UPD(0x0C095C2Cu, 1);  /* 0C095C2A mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C095C2C mov Rm,Rn */
	r11 += r0;  /* 0C095C2E add Rm,Rn */
	IF(0x0C095C30u); { u32 t_ = r8; PR = 0x0C095C34u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C095C34u); }  /* 0C095C30 jsr @Rn */
L_0C095C34: BLKS(0x0C095C34u);
	r10 = 0xC050D70u; UPD(0x0C095C36u, 1);  /* 0C095C34 mov.l @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C095C36 mov #imm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C095C3Au, 2);  /* 0C095C38 mov.l @(disp,Rm),Rn */
	IF(0x0C095C3Au); { u32 t_ = r10; PR = 0x0C095C3Eu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C095C3Eu); }  /* 0C095C3A jsr @Rn */
L_0C095C3E: BLKS(0x0C095C3Eu);
	r6 = R32(r14); UPD(0x0C095C40u, 1);  /* 0C095C3E mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C095C40 add #imm,Rn */
	r0 += r6;  /* 0C095C42 add Rm,Rn */
	r9 = 0xC7C1608u; UPD(0x0C095C46u, 3);  /* 0C095C44 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF8u;  /* 0C095C46 add #imm,Rn */
	r3 = 0x28000u; UPD(0x0C095C4Au, 2);  /* 0C095C48 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C095C4A exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C095C4Eu, 2);  /* 0C095C4C mov.l Rm,@Rn */
	r7 = r2;  /* 0C095C4E mov Rm,Rn */
	r4 = 0x6u;  /* 0C095C50 mov #imm,Rn */
	r5 = r11;  /* 0C095C52 mov Rm,Rn */
	IF(0x0C095C54u); { u32 t_ = r9; PR = 0x0C095C58u; r6 = r8; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C095C58u); }  /* 0C095C54 jsr @Rn */
L_0C095C58: BLKS(0x0C095C58u);
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C095C5Au, 1);  /* 0C095C58 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C095C5A add #imm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C095C5C add #imm,Rn */
	W8(r12, r7); UPD(0x0C095C60u, 3);  /* 0C095C5E mov.b Rm,@Rn */
	r12 = 0xC0580D0u; UPD(0x0C095C62u, 1);  /* 0C095C60 mov.l @(disp,pc),Rn */
	IF(0x0C095C62u); { u32 t_ = r12; PR = 0x0C095C66u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C095C66u); }  /* 0C095C62 jsr @Rn */
L_0C095C66: BLKS(0x0C095C66u);
	{ IF(0x0C095C68u); ; /* slot nop */ UPD(0x0C095AFEu, 3); goto L_0C095AFE; }  /* 0C095C66 bra */
L_0C095CB0: BLKS(0x0C095CB0u);
	r9 = 0xC0A05D0u; UPD(0x0C095CB2u, 1);  /* 0C095CB0 mov.l @(disp,pc),Rn */
	IF(0x0C095CB2u); { u32 t_ = r9; PR = 0x0C095CB6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C095CB6u); }  /* 0C095CB2 jsr @Rn */
L_0C095CB6: BLKS(0x0C095CB6u);
	IF(0x0C095CB6u); T = (s32)r0 >= 0;  /* 0C095CB6 cmp/pz Rn */
	if (!T) { UPD(0x0C095D4Cu, 4); goto L_0C095D4C; }  /* 0C095CB8 bf */
L_0C095CBA: BLKS(0x0C095CBAu);
	r2 = 0xB4u; UPD(0x0C095CBCu, 1);  /* 0C095CBA mov.w @(disp,pc),Rn */
	IF(0x0C095CBCu); MACL = r13 * r2;  /* 0C095CBC mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C095CC0u, 3);  /* 0C095CBE mov.l @(disp,pc),Rn */
	IF(0x0C095CC0u); r8 = MACL;  /* 0C095CC0 sts macl,Rn */
	IF(0x0C095CC2u); MACL = r0 * r2;  /* 0C095CC2 mul.l Rm,Rn */
	r8 += r5;  /* 0C095CC4 add Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C095CC8u, 5);  /* 0C095CC6 mov.l @(disp,Rm),Rn */
	IF(0x0C095CC8u); r11 = MACL;  /* 0C095CC8 sts macl,Rn */
	r11 += r5;  /* 0C095CCA add Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C095CCEu, 3);  /* 0C095CCC mov.l @(disp,Rm),Rn */
	r10 = R32(r11 + 0x28u); UPD(0x0C095CD0u, 1);  /* 0C095CCE mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C095CD0 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C095CD4u, 2);  /* 0C095CD2 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C095CD6u, 1);  /* 0C095CD4 mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C095CD6 add Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C095CDAu, 2);  /* 0C095CD8 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C095CDA tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C095D20u, 4); goto L_0C095D20; } UPD(0x0C095CE0u, 1); goto L_0C095CE0; }  /* 0C095CDC bt/s */
L_0C095CE0: BLKS(0x0C095CE0u);
	T = r0 == 0x3u;  /* 0C095CE0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095CEEu, 4); goto L_0C095CEE; } goto L_0C095CE6; }  /* 0C095CE2 bt/s */
L_0C095CE6: BLKS(0x0C095CE6u);
	r3 = 0xFFFFE704u; UPD(0x0C095CE8u, 2);  /* 0C095CE6 mov.w @(disp,pc),Rn */
	IF(0x0C095CE8u); { u32 tv_ = (r3 + 0x0C095CECu); u32 t_ = PHYS(tv_); IF(0x0C095CEAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0943F0u: goto L_0C0943F0; default: JUMPD(tv_); } }  /* 0C095CE8 braf Rn */
L_0C095CEE: BLKS(0x0C095CEEu);
	r10 = 0xC0A9E40u; UPD(0x0C095CF0u, 1);  /* 0C095CEE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C095CF0 mov #imm,Rn */
	IF(0x0C095CF2u); { u32 t_ = r10; PR = 0x0C095CF6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095CF6u); }  /* 0C095CF2 jsr @Rn */
L_0C095CF6: BLKS(0x0C095CF6u);
	T = (r0 & r0) == 0;  /* 0C095CF6 tst Rm,Rn */
	if (T) { UPD(0x0C095D0Cu, 4); goto L_0C095D0C; }  /* 0C095CF8 bt */
L_0C095CFA: BLKS(0x0C095CFAu);
	r4 = R32(r8 + 0xCu); UPD(0x0C095CFCu, 1);  /* 0C095CFA mov.l @(disp,Rm),Rn */
	r11 = 0xC0A0380u; UPD(0x0C095CFEu, 1);  /* 0C095CFC mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C095CFE add #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C095D02u, 2);  /* 0C095D00 mov.l Rm,@(disp,Rn) */
	IF(0x0C095D02u); { u32 t_ = r11; PR = 0x0C095D06u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095D06u); }  /* 0C095D02 jsr @Rn */
L_0C095D06: BLKS(0x0C095D06u);
	r0 = 0x88u; UPD(0x0C095D08u, 1);  /* 0C095D06 mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C095D08 mov #imm,Rn */
	UPD(0x0C095D0Au, 1);
L_0C095D0A: BLKS(0x0C095D0Au);
	IF(0x0C095D0Au); W16(r0 + r8, r1); UPD(0x0C095D0Cu, 1);  /* 0C095D0A mov.w Rm,@(r0,Rn) */
L_0C095D0C: BLKS(0x0C095D0Cu);
	r13 = 0xFFFFE08Cu; UPD(0x0C095D0Eu, 1);  /* 0C095D0C mov.w @(disp,pc),Rn */
	IF(0x0C095D0Eu); { u32 tv_ = (r13 + 0x0C095D12u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C095D0E braf Rn */
L_0C095D20: BLKS(0x0C095D20u);
	r12 = 0xC0A9E40u; UPD(0x0C095D22u, 1);  /* 0C095D20 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095D22 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C095D24 mov #imm,Rn */
	IF(0x0C095D26u); { u32 t_ = r12; PR = 0x0C095D2Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095D2Au); }  /* 0C095D26 jsr @Rn */
L_0C095D2A: BLKS(0x0C095D2Au);
	T = (r0 & r0) == 0;  /* 0C095D2A tst Rm,Rn */
	if (T) { UPD(0x0C095D0Cu, 4); goto L_0C095D0C; }  /* 0C095D2C bt */
L_0C095D2E: BLKS(0x0C095D2Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C095D30u, 1);  /* 0C095D2E mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C095D30 mov Rm,Rn */
	r13 = 0xC0A0380u; UPD(0x0C095D34u, 2);  /* 0C095D32 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C095D34 add #imm,Rn */
	IF(0x0C095D36u); { u32 t_ = r13; PR = 0x0C095D3Au; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095D3Au); }  /* 0C095D36 jsr @Rn */
L_0C095D3A: BLKS(0x0C095D3Au);
	r0 = 0x88u; UPD(0x0C095D3Cu, 1);  /* 0C095D3A mov.w @(disp,pc),Rn */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C095D0Au, 3); goto L_0C095D0A; }  /* 0C095D3C bra */
L_0C095D40: BLKS(0x0C095D40u);
	r12 = 0xC0A0490u; UPD(0x0C095D42u, 1);  /* 0C095D40 mov.l @(disp,pc),Rn */
	IF(0x0C095D42u); { u32 t_ = r12; PR = 0x0C095D46u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C095D46u); }  /* 0C095D42 jsr @Rn */
L_0C095D46: BLKS(0x0C095D46u);
	IF(0x0C095D46u); T = (s32)r0 >= 0;  /* 0C095D46 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C095D54u, 4); goto L_0C095D54; } UPD(0x0C095D4Cu, 1); goto L_0C095D4C; }  /* 0C095D48 bt/s */
L_0C095D4C: BLKS(0x0C095D4Cu);
	r1 = 0xFFFFE17Eu; UPD(0x0C095D4Eu, 1);  /* 0C095D4C mov.w @(disp,pc),Rn */
	IF(0x0C095D4Eu); { u32 tv_ = (r1 + 0x0C095D52u); u32 t_ = PHYS(tv_); IF(0x0C095D50u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C095D4E braf Rn */
L_0C095D54: BLKS(0x0C095D54u);
	r8 = 0xB4u; UPD(0x0C095D56u, 1);  /* 0C095D54 mov.w @(disp,pc),Rn */
	IF(0x0C095D56u); MACL = r13 * r8;  /* 0C095D56 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C095D5Au, 3);  /* 0C095D58 mov.l @(disp,pc),Rn */
	IF(0x0C095D5Au); r9 = MACL;  /* 0C095D5A sts macl,Rn */
	IF(0x0C095D5Cu); MACL = r11 * r8;  /* 0C095D5C mul.l Rm,Rn */
	r9 += r0;  /* 0C095D5E add Rm,Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C095D62u, 5);  /* 0C095D60 mov.l @(disp,Rm),Rn */
	IF(0x0C095D62u); r11 = MACL;  /* 0C095D62 sts macl,Rn */
	r11 += r0;  /* 0C095D64 add Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C095D68u, 3);  /* 0C095D66 mov.l @(disp,Rm),Rn */
	r10 = R32(r11 + 0x28u); UPD(0x0C095D6Au, 1);  /* 0C095D68 mov.l @(disp,Rm),Rn */
	r4 += r12;  /* 0C095D6A add Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C095D6Eu, 2);  /* 0C095D6C mov.l @(disp,Rm),Rn */
	r10 += r3;  /* 0C095D6E add Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C095D72u, 2);  /* 0C095D70 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r10); UPD(0x0C095D74u, 1);  /* 0C095D72 mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C095D74 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C095D78u, 2);  /* 0C095D76 mov.w @Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C095D78 add #imm,Rn */
	r5 = R32(r9); UPD(0x0C095D7Cu, 2);  /* 0C095D7A mov.l @Rm,Rn */
	IF(0x0C095D7Cu); MACL = r7 * r8;  /* 0C095D7C mul.l Rm,Rn */
	r2 = 0xCCFFFEFFu; UPD(0x0C095D80u, 3);  /* 0C095D7E mov.l @(disp,pc),Rn */
	r5 &= r2;  /* 0C095D80 and Rm,Rn */
	W32(r9, r5); UPD(0x0C095D84u, 2);  /* 0C095D82 mov.l Rm,@Rn */
	IF(0x0C095D84u); r7 = MACL;  /* 0C095D84 sts macl,Rn */
	r7 += r0;  /* 0C095D86 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C095D8Au, 3);  /* 0C095D88 mov.l @Rm,Rn */
	r1 = 0x33000100u; UPD(0x0C095D8Cu, 1);  /* 0C095D8A mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C095D8C and Rm,Rn */
	r5 |= r6;  /* 0C095D8E or Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C095D92u, 3);  /* 0C095D90 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C095D92 tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C095E60u, 4); goto L_0C095E60; } UPD(0x0C095D98u, 1); goto L_0C095D98; }  /* 0C095D94 bt/s */
L_0C095D98: BLKS(0x0C095D98u);
	T = r0 == 0x3u;  /* 0C095D98 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C095DC0u, 4); goto L_0C095DC0; }  /* 0C095D9A bt */
L_0C095D9C: BLKS(0x0C095D9Cu);
	r2 = 0xB4u; UPD(0x0C095D9Eu, 1);  /* 0C095D9C mov.w @(disp,pc),Rn */
	IF(0x0C095D9Eu); MACL = r13 * r2;  /* 0C095D9E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C095DA2u, 3);  /* 0C095DA0 mov.l @(disp,pc),Rn */
	IF(0x0C095DA2u); r8 = MACL;  /* 0C095DA2 sts macl,Rn */
	r9 = 0x99u; UPD(0x0C095DA6u, 2);  /* 0C095DA4 mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C095DA6 add Rm,Rn */
	r9 += r8;  /* 0C095DA8 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C095DACu, 3);  /* 0C095DAA mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C095DAC add #imm,Rn */
	W8(r9, r0); UPD(0x0C095DB0u, 2);  /* 0C095DAE mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C095DB0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C095DB2 tst Rm,Rn */
	if (!T) { UPD(0x0C095D0Cu, 5); goto L_0C095D0C; }  /* 0C095DB4 bf */
L_0C095DB6: BLKS(0x0C095DB6u);
	{ IF(0x0C095DB8u); ; /* slot nop */ UPD(0x0C09532Au, 3); goto L_0C09532A; }  /* 0C095DB6 bra */
L_0C095DC0: BLKS(0x0C095DC0u);
	r0 = 0x99u; UPD(0x0C095DC2u, 1);  /* 0C095DC0 mov.w @(disp,pc),Rn */
	IF(0x0C095DC2u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C095DC4u, 1);  /* 0C095DC2 mov.b @(r0,Rm),Rn */
	r10 = 0xF0u; UPD(0x0C095DC6u, 1);  /* 0C095DC4 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C095DC6 add #imm,Rn */
	r8 = r7 & 0xFF;  /* 0C095DC8 extu.b Rm,Rn */
	T = r8 == r10;  /* 0C095DCA cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C095DCEu); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C095E20u, 6); goto L_0C095E20; } UPD(0x0C095DD0u, 1); goto L_0C095DD0; }  /* 0C095DCC bt/s */
L_0C095DD0: BLKS(0x0C095DD0u);
	r11 = 0xC0A9E40u; UPD(0x0C095DD2u, 1);  /* 0C095DD0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095DD2 mov Rm,Rn */
	r5 = 0x5u;  /* 0C095DD4 mov #imm,Rn */
	IF(0x0C095DD6u); { u32 t_ = r11; PR = 0x0C095DDAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C095DDAu); }  /* 0C095DD6 jsr @Rn */
L_0C095DDA: BLKS(0x0C095DDAu);
	T = (r0 & r0) == 0;  /* 0C095DDA tst Rm,Rn */
	if (T) { UPD(0x0C095D0Cu, 4); goto L_0C095D0C; }  /* 0C095DDC bt */
L_0C095DDE: BLKS(0x0C095DDEu);
	r12 = 0x0u;  /* 0C095DDE mov #imm,Rn */
	r10 = 0xC1C82B0u; UPD(0x0C095DE2u, 2);  /* 0C095DE0 mov.l @(disp,pc),Rn */
	r11 = 0xC7C1608u; UPD(0x0C095DE4u, 1);  /* 0C095DE2 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C095DE4 mov #imm,Rn */
	UPD(0x0C095DE6u, 1);
L_0C095DE6: BLKS(0x0C095DE6u);
	r13 = r8;  /* 0C095DE6 mov Rm,Rn */
	r13 += r10;  /* 0C095DE8 add Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C095DECu, 3);  /* 0C095DEA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C095DEC add #imm,Rn */
	r0 = R32(r13); UPD(0x0C095DF0u, 2);  /* 0C095DEE mov.l @Rm,Rn */
	r4 = 0x2u;  /* 0C095DF0 mov #imm,Rn */
	r6 = 0xFFF80000u; UPD(0x0C095DF4u, 2);  /* 0C095DF2 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C095DF4 add Rm,Rn */
	r5 += r6;  /* 0C095DF6 add Rm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C095DFAu, 3);  /* 0C095DF8 mov.l @(disp,Rm),Rn */
	r8 += 0xCu;  /* 0C095DFA add #imm,Rn */
	r2 = R32(r13 + 0x4u); UPD(0x0C095DFEu, 2);  /* 0C095DFC mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x8u); UPD(0x0C095E00u, 1);  /* 0C095DFE mov.l @(disp,Rm),Rn */
	W32(r15, r7); UPD(0x0C095E02u, 1);  /* 0C095E00 mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C095E04u, 1);  /* 0C095E02 mov.w @(disp,pc),Rn */
	IF(0x0C095E04u); { u32 t_ = r11; PR = 0x0C095E08u; r6 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C095E08u); }  /* 0C095E04 jsr @Rn */
L_0C095E08: BLKS(0x0C095E08u);
	r4 = r12;  /* 0C095E08 mov Rm,Rn */
	r4 += 0x1u;  /* 0C095E0A add #imm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C095E0C exts.w Rm,Rn */
	r3 = 0x5u;  /* 0C095E0E mov #imm,Rn */
	T = (s32)r12 > (s32)r3;  /* 0C095E10 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C095DE6u, 8); goto L_0C095DE6; } UPD(0x0C095E16u, 1); goto L_0C095E16; }  /* 0C095E12 bf/s */
L_0C095E16: BLKS(0x0C095E16u);
	r13 = 0xFFFFDF82u; UPD(0x0C095E18u, 1);  /* 0C095E16 mov.w @(disp,pc),Rn */
	IF(0x0C095E18u); { u32 tv_ = (r13 + 0x0C095E1Cu); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Eu: goto L_0C093D9E; default: JUMPD(tv_); } }  /* 0C095E18 braf Rn */
L_0C095E20: BLKS(0x0C095E20u);
	r2 = 0x0u;  /* 0C095E20 mov #imm,Rn */
	IF(0x0C095E22u); W8(r0 + r9, r2); UPD(0x0C095E24u, 2);  /* 0C095E22 mov.b Rm,@(r0,Rn) */
	r0 = 0xFFFFEA80u; UPD(0x0C095E26u, 1);  /* 0C095E24 mov.w @(disp,pc),Rn */
	IF(0x0C095E26u); { u32 tv_ = (r0 + 0x0C095E2Au); u32 t_ = PHYS(tv_); r1 = 0x2u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0948AAu: goto L_0C0948AA; default: JUMPD(tv_); } }  /* 0C095E26 braf Rn */
L_0C095E60: BLKS(0x0C095E60u);
	r0 = 0xA0u; UPD(0x0C095E62u, 1);  /* 0C095E60 mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C095E62 add Rm,Rn */
	r0 += r9;  /* 0C095E64 add Rm,Rn */
	r7 += 0x1u;  /* 0C095E66 add #imm,Rn */
	r0 += 0x1u;  /* 0C095E68 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C095E6Cu, 5);  /* 0C095E6A mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C095E6Eu, 1);  /* 0C095E6C mov.b @Rm,Rn */
	T = (r6 & r5) == 0;  /* 0C095E6E tst Rm,Rn */
	if (T) { UPD(0x0C095E16u, 4); goto L_0C095E16; }  /* 0C095E70 bt */
L_0C095E72: BLKS(0x0C095E72u);
	r10 = 0x1u;  /* 0C095E72 mov #imm,Rn */
	r8 = 0xC0A0380u; UPD(0x0C095E76u, 2);  /* 0C095E74 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C095E76 mov Rm,Rn */
	IF(0x0C095E78u); { u32 t_ = r8; PR = 0x0C095E7Cu; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C095E7Cu); }  /* 0C095E78 jsr @Rn */
L_0C095E7C: BLKS(0x0C095E7Cu);
	r13 = R32(r9); UPD(0x0C095E7Eu, 1);  /* 0C095E7C mov.l @Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C095E80u, 1);  /* 0C095E7E mov.w @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C095E82u, 1);  /* 0C095E80 mov.w @(disp,pc),Rn */
	r13 &= r1;  /* 0C095E82 and Rm,Rn */
	IF(0x0C095E84u); W16(r0 + r9, r10); UPD(0x0C095E86u, 2);  /* 0C095E84 mov.w Rm,@(r0,Rn) */
	r4 = 0xFFFFE930u; UPD(0x0C095E88u, 1);  /* 0C095E86 mov.w @(disp,pc),Rn */
	IF(0x0C095E88u); { u32 tv_ = (r4 + 0x0C095E8Cu); u32 t_ = PHYS(tv_); W32(r9, r13); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0947BCu: goto L_0C0947BC; default: JUMPD(tv_); } }  /* 0C095E88 braf Rn */
L_0C095E90: BLKS(0x0C095E90u);
	r9 = 0xC0A0540u; UPD(0x0C095E92u, 1);  /* 0C095E90 mov.l @(disp,pc),Rn */
	IF(0x0C095E92u); { u32 t_ = r9; PR = 0x0C095E96u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C095E96u); }  /* 0C095E92 jsr @Rn */
L_0C095E96: BLKS(0x0C095E96u);
	IF(0x0C095E96u); T = (s32)r0 >= 0;  /* 0C095E96 cmp/pz Rn */
	if (T) { UPD(0x0C095EA2u, 4); goto L_0C095EA2; }  /* 0C095E98 bt */
L_0C095E9A: BLKS(0x0C095E9Au);
	r1 = 0xFFFFE030u; UPD(0x0C095E9Cu, 1);  /* 0C095E9A mov.w @(disp,pc),Rn */
	IF(0x0C095E9Cu); { u32 tv_ = (r1 + 0x0C095EA0u); u32 t_ = PHYS(tv_); IF(0x0C095E9Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093ED0u: goto L_0C093ED0; default: JUMPD(tv_); } }  /* 0C095E9C braf Rn */
L_0C095EA2: BLKS(0x0C095EA2u);
	r4 = 0xB4u; UPD(0x0C095EA4u, 1);  /* 0C095EA2 mov.w @(disp,pc),Rn */
	IF(0x0C095EA4u); MACL = r13 * r4;  /* 0C095EA4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C095EA8u, 3);  /* 0C095EA6 mov.l @(disp,pc),Rn */
	IF(0x0C095EA8u); r12 = MACL;  /* 0C095EA8 sts macl,Rn */
	IF(0x0C095EAAu); MACL = r0 * r4;  /* 0C095EAA mul.l Rm,Rn */
	r12 += r3;  /* 0C095EAC add Rm,Rn */
	r11 = R32(r12 + 0x2Cu); UPD(0x0C095EB0u, 5);  /* 0C095EAE mov.l @(disp,Rm),Rn */
	IF(0x0C095EB0u); r10 = MACL;  /* 0C095EB0 sts macl,Rn */
	r10 += r3;  /* 0C095EB2 add Rm,Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C095EB6u, 3);  /* 0C095EB4 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C095EB8u, 1);  /* 0C095EB6 mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C095EB8 add Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C095EBCu, 2);  /* 0C095EBA mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C095EBC add Rm,Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C095EC0u, 2);  /* 0C095EBE mov.l Rm,@(disp,Rn) */
	r13 = 0xFFFFDED6u; UPD(0x0C095EC2u, 1);  /* 0C095EC0 mov.w @(disp,pc),Rn */
	IF(0x0C095EC2u); { u32 tv_ = (r13 + 0x0C095EC6u); u32 t_ = PHYS(tv_); W32(r12 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C093D9Cu: goto L_0C093D9C; default: JUMPD(tv_); } }  /* 0C095EC2 braf Rn */
}

/* FUN_0c095ee0 */
void f_0C095EE0(sh3_t *c)
{
	LOCALS;
L_0C095EE0: BLKS(0x0C095EE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C095EE2u, 1);  /* 0C095EE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C095EE4u, 1);  /* 0C095EE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C095EE6u, 1);  /* 0C095EE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C095EE8u, 1);  /* 0C095EE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C095EEAu, 1);  /* 0C095EE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C095EECu, 1);  /* 0C095EEA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C095EEEu, 1);  /* 0C095EEC mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C095EF0u, 1);  /* 0C095EEE mov.l @(disp,pc),Rn */
	IF(0x0C095EF0u); r15 -= 4; W32(r15, PR); UPD(0x0C095EF2u, 1);  /* 0C095EF0 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C095EF4u, 1);  /* 0C095EF2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C095EF4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C095EF8u, 2);  /* 0C095EF6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C095EF8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C095EFCu, 2);  /* 0C095EFA mov.l @(disp,pc),Rn */
	IF(0x0C095EFCu); { u32 t_ = r8; PR = 0x0C095F00u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C095F00u); }  /* 0C095EFC jsr @Rn */
L_0C095F00: BLKS(0x0C095F00u);
	T = (r0 & r0) == 0;  /* 0C095F00 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095F20u, 4); goto L_0C095F20; } UPD(0x0C095F06u, 1); goto L_0C095F06; }  /* 0C095F02 bf/s */
L_0C095F06: BLKS(0x0C095F06u);
	r14 += 0xCu;  /* 0C095F06 add #imm,Rn */
	r15 = r14;  /* 0C095F08 mov Rm,Rn */
	IF(0x0C095F0Au); PR = R32(r15); r15 += 4; UPD(0x0C095F0Cu, 3);  /* 0C095F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C095F0Eu, 1);  /* 0C095F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C095F10u, 1);  /* 0C095F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C095F12u, 1);  /* 0C095F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C095F14u, 1);  /* 0C095F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C095F16u, 1);  /* 0C095F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C095F18u, 1);  /* 0C095F16 mov.l @Rm+,Rn */
	IF(0x0C095F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C095F18 rts */
L_0C095F20: BLKS(0x0C095F20u);
	r8 = 0xC0606C0u; UPD(0x0C095F22u, 1);  /* 0C095F20 mov.l @(disp,pc),Rn */
	IF(0x0C095F22u); { u32 t_ = r8; PR = 0x0C095F26u; r4 = 0x6Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C095F26u); }  /* 0C095F22 jsr @Rn */
L_0C095F26: BLKS(0x0C095F26u);
	T = (r0 & r0) == 0;  /* 0C095F26 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C095F06u, 4); goto L_0C095F06; } goto L_0C095F2C; }  /* 0C095F28 bt/s */
L_0C095F2C: BLKS(0x0C095F2Cu);
	r1 = 0xC2755BCu; UPD(0x0C095F2Eu, 2);  /* 0C095F2C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C095F30u, 1);  /* 0C095F2E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r10 = v_; } UPD(0x0C095F32u, 1);  /* 0C095F30 mov.w @Rm+,Rn */
	IF(0x0C095F32u); MACL = r10 * r8;  /* 0C095F32 mul.l Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C095F36u, 3);  /* 0C095F34 mov.l Rm,@(disp,Rn) */
	r5 = 0xC286509u; UPD(0x0C095F38u, 1);  /* 0C095F36 mov.l @(disp,pc),Rn */
	IF(0x0C095F38u); r8 = MACL;  /* 0C095F38 sts macl,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C095F3Cu, 2);  /* 0C095F3A mov.w @Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C095F3Eu, 1);  /* 0C095F3C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C095F3E extu.w Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C095F42u, 2);  /* 0C095F40 mov.b @Rm,Rn */
	r8 += r6;  /* 0C095F42 add Rm,Rn */
	r2 = 0xC28629Eu; UPD(0x0C095F46u, 2);  /* 0C095F44 mov.l @(disp,pc),Rn */
	r9 = 0x4Cu;  /* 0C095F46 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C095F4Au, 2);  /* 0C095F48 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C095F4Cu, 1);  /* 0C095F4A mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C095F4Eu, 1);  /* 0C095F4C mov.w @(disp,pc),Rn */
	IF(0x0C095F4Eu); W16(r0 + r8, r12); UPD(0x0C095F50u, 1);  /* 0C095F4E mov.w Rm,@(r0,Rn) */
	r4 = 0xE0008010u; UPD(0x0C095F52u, 1);  /* 0C095F50 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C095F52 add #imm,Rn */
	IF(0x0C095F54u); W16(r0 + r8, r12); UPD(0x0C095F56u, 2);  /* 0C095F54 mov.w Rm,@(r0,Rn) */
	r13 = 0xC0A02D0u; UPD(0x0C095F58u, 1);  /* 0C095F56 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C095F58 mov #imm,Rn */
	W32(r8, r4); UPD(0x0C095F5Cu, 2);  /* 0C095F5A mov.l Rm,@Rn */
	W32(r14, r7); UPD(0x0C095F5Eu, 1);  /* 0C095F5C mov.l Rm,@Rn */
	r4 = r10;  /* 0C095F5E mov Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C095F62u, 2);  /* 0C095F60 mov.l Rm,@(disp,Rn) */
	IF(0x0C095F62u); { u32 t_ = r13; PR = 0x0C095F66u; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C095F66u); }  /* 0C095F62 jsr @Rn */
L_0C095F66: BLKS(0x0C095F66u);
	r1 = R32(r14); UPD(0x0C095F68u, 1);  /* 0C095F66 mov.l @Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C095F6Au, 1);  /* 0C095F68 mov.l @(disp,pc),Rn */
	IF(0x0C095F6Au); MACL = r1 * r9;  /* 0C095F6A mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C095F6Eu, 3);  /* 0C095F6C mov.w @Rm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C095F70u, 1);  /* 0C095F6E mov.l @(disp,pc),Rn */
	IF(0x0C095F70u); r11 = MACL;  /* 0C095F70 sts macl,Rn */
	r4 = 0xC392D5Eu; UPD(0x0C095F74u, 2);  /* 0C095F72 mov.l @(disp,pc),Rn */
	r11 += r5;  /* 0C095F74 add Rm,Rn */
	r7 = R32(r11 + 0x8u); UPD(0x0C095F78u, 2);  /* 0C095F76 mov.l @(disp,Rm),Rn */
	IF(0x0C095F78u); r6 <<= 16;  /* 0C095F78 shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C095F7Cu, 2);  /* 0C095F7A mov.w @Rm,Rn */
	r6 -= r7;  /* 0C095F7C sub Rm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C095F80u, 2);  /* 0C095F7E mov.l @(disp,pc),Rn */
	IF(0x0C095F80u); r3 <<= 16;  /* 0C095F80 shll16 Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C095F84u, 2);  /* 0C095F82 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C095F84 mov Rm,Rn */
	IF(0x0C095F86u); { u32 t_ = r0; PR = 0x0C095F8Au; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C095F8Au); }  /* 0C095F86 jsr @Rn */
L_0C095F8A: BLKS(0x0C095F8Au);
	r2 = 0x3u;  /* 0C095F8A mov #imm,Rn */
	r2 += r14;  /* 0C095F8C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C095F90u, 3);  /* 0C095F8E mov.b @Rm,Rn */
	r11 += 0x42u;  /* 0C095F90 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C095F94u, 2);  /* 0C095F92 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C095F94 mov Rm,Rn */
	IF(0x0C095F96u); W8(r0 + r8, r13); UPD(0x0C095F98u, 2);  /* 0C095F96 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C095F9Au, 1);  /* 0C095F98 mov.b @Rm,Rn */
	r0 += 0xFFFFFFF9u;  /* 0C095F9A add #imm,Rn */
	r9 = r5;  /* 0C095F9C mov Rm,Rn */
	r9 += 0x1u;  /* 0C095F9E add #imm,Rn */
	IF(0x0C095FA0u); W8(r0 + r8, r9); UPD(0x0C095FA2u, 4);  /* 0C095FA0 mov.b Rm,@(r0,Rn) */
	r13 = r8;  /* 0C095FA2 mov Rm,Rn */
	r9 = 0xACu; UPD(0x0C095FA6u, 2);  /* 0C095FA4 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C095FA6 add Rm,Rn */
	r9 += 0x1u;  /* 0C095FA8 add #imm,Rn */
	r6 = 0xC0A1780u; UPD(0x0C095FACu, 3);  /* 0C095FAA mov.l @(disp,pc),Rn */
	W8(r9, r5); UPD(0x0C095FAEu, 1);  /* 0C095FAC mov.b Rm,@Rn */
	r7 = 0xC27DC20u; UPD(0x0C095FB0u, 1);  /* 0C095FAE mov.l @(disp,pc),Rn */
	IF(0x0C095FB0u); { u32 t_ = r6; PR = 0x0C095FB4u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C095FB4u); }  /* 0C095FB0 jsr @Rn */
L_0C095FB4: BLKS(0x0C095FB4u);
	r2 = 0xA0u; UPD(0x0C095FB6u, 1);  /* 0C095FB4 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C095FB6 add Rm,Rn */
	r2 += 0x2u;  /* 0C095FB8 add #imm,Rn */
	W8(r2, r12); UPD(0x0C095FBCu, 3);  /* 0C095FBA mov.b Rm,@Rn */
	r1 = 0x8Cu; UPD(0x0C095FBEu, 1);  /* 0C095FBC mov.w @(disp,pc),Rn */
	r4 = 0x94u; UPD(0x0C095FC0u, 1);  /* 0C095FBE mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C095FC0 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C095FC4u, 2);  /* 0C095FC2 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C095FC4 add Rm,Rn */
	{ u32 v_ = r12; r2 -= 1; W8(r2, v_); } UPD(0x0C095FC8u, 2);  /* 0C095FC6 mov.b Rm,@-Rn */
	r3 = 0x808080u; UPD(0x0C095FCAu, 1);  /* 0C095FC8 mov.l @(disp,pc),Rn */
	IF(0x0C095FCAu); W32(r0 + r8, r12); UPD(0x0C095FCCu, 1);  /* 0C095FCA mov.l Rm,@(r0,Rn) */
	W32(r4, r12); UPD(0x0C095FCEu, 1);  /* 0C095FCC mov.l Rm,@Rn */
	W32(r1, r12); UPD(0x0C095FD0u, 1);  /* 0C095FCE mov.l Rm,@Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C095FD2u, 1);  /* 0C095FD0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r12); UPD(0x0C095FD4u, 1);  /* 0C095FD2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r3); UPD(0x0C095FD6u, 1);  /* 0C095FD4 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C095FD6 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C095FDAu, 2);  /* 0C095FD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C095FDAu); ;  /* 0C095FDA nop */
	UPD(0x0C095FDCu, 1);
L_0C095FDC: BLKS(0x0C095FDCu);
	r11 = R32(r14 + 0x8u); UPD(0x0C095FDEu, 1);  /* 0C095FDC mov.l @(disp,Rm),Rn */
	r4 = 0x5u;  /* 0C095FDE mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C095FE2u, 2);  /* 0C095FE0 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C095FE4u, 1);  /* 0C095FE2 mov.w @(disp,pc),Rn */
	IF(0x0C095FE4u); MACL = r10 * r8;  /* 0C095FE4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C095FE8u, 3);  /* 0C095FE6 mov.l @(disp,pc),Rn */
	IF(0x0C095FE8u); r8 = MACL;  /* 0C095FE8 sts macl,Rn */
	r8 += r9;  /* 0C095FEA add Rm,Rn */
	r9 = r12;  /* 0C095FEC mov Rm,Rn */
	IF(0x0C095FEEu); ARG0(0x494Du); { s32 s_ = (s32)r4; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C095FEE shld Rm,Rn */
	r0 = 0xC1CBB30u; UPD(0x0C095FF2u, 5);  /* 0C095FF0 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C095FF2 add Rm,Rn */
	r9 += 0x4u;  /* 0C095FF4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r5 = v_; } UPD(0x0C095FF8u, 3);  /* 0C095FF6 mov.w @Rm+,Rn */
	r0 = 0xC2755BCu; UPD(0x0C095FFAu, 1);  /* 0C095FF8 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C095FFA add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C095FFEu, 2);  /* 0C095FFC mov.l Rm,@(disp,Rn) */
	IF(0x0C095FFEu); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C096000u, 1);  /* 0C095FFE mov.w @(r0,Rm),Rn */
	r11 = r8;  /* 0C096000 mov Rm,Rn */
	r11 += 0x7Cu;  /* 0C096002 add #imm,Rn */
	W16(r11, r2); UPD(0x0C096006u, 3);  /* 0C096004 mov.w Rm,@Rn */
	r8 += 0x7Eu;  /* 0C096006 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C09600Au, 2);  /* 0C096008 mov.w @Rm,Rn */
	r7 += r7;  /* 0C09600A add Rm,Rn */
	IF(0x0C09600Cu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C09600Eu, 2);  /* 0C09600C mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFAu;  /* 0C09600E add #imm,Rn */
	W16(r8, r6); UPD(0x0C096012u, 2);  /* 0C096010 mov.w Rm,@Rn */
	r3 = 0xC22C874u; UPD(0x0C096014u, 1);  /* 0C096012 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C096014 add #imm,Rn */
	r4 = R32(r9); UPD(0x0C096018u, 2);  /* 0C096016 mov.l @Rm,Rn */
	r6 = 0x0u;  /* 0C096018 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C09601Cu, 2);  /* 0C09601A mov.w @Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C09601Eu, 1);  /* 0C09601C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C09601E extu.w Rm,Rn */
	r4 |= r1;  /* 0C096020 or Rm,Rn */
	W32(r8, r4); UPD(0x0C096024u, 3);  /* 0C096022 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C096026u, 1);  /* 0C096024 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C096026 mov Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C09602Au, 2);  /* 0C096028 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C09602Cu, 1);  /* 0C09602A mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C09602Eu, 1);  /* 0C09602C mov.l Rm,@(disp,Rn) */
	IF(0x0C09602Eu); { u32 t_ = r0; PR = 0x0C096032u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C096032u); }  /* 0C09602E jsr @Rn */
L_0C096032: BLKS(0x0C096032u);
	r4 = R32(r13 + 0x24u); UPD(0x0C096034u, 1);  /* 0C096032 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C096034 mov Rm,Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C096038u, 2);  /* 0C096036 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C096038 mov #imm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09603Cu, 2);  /* 0C09603A mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C09603C mov #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C096040u, 2);  /* 0C09603E mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0xCu); UPD(0x0C096042u, 1);  /* 0C096040 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C096044u, 1);  /* 0C096042 mov.l Rm,@(disp,Rn) */
	r2 = R32(r9 + 0x10u); UPD(0x0C096046u, 1);  /* 0C096044 mov.l @(disp,Rm),Rn */
	r9 += 0x14u;  /* 0C096046 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C09604Au, 2);  /* 0C096048 mov.w @Rm,Rn */
	r4 = 0x86u; UPD(0x0C09604Cu, 1);  /* 0C09604A mov.w @(disp,pc),Rn */
	r9 += 0x8u;  /* 0C09604C add #imm,Rn */
	IF(0x0C09604Eu); W16(r0 + r4, r7); UPD(0x0C096050u, 2);  /* 0C09604E mov.w Rm,@(r0,Rn) */
	r0 = 0x88u; UPD(0x0C096052u, 1);  /* 0C096050 mov.w @(disp,pc),Rn */
	r4 += 0x1Au;  /* 0C096052 add #imm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C096056u, 2);  /* 0C096054 mov.l Rm,@(disp,Rn) */
	r4 += r8;  /* 0C096056 add Rm,Rn */
	IF(0x0C096058u); W16(r0 + r8, r6); UPD(0x0C09605Au, 2);  /* 0C096058 mov.w Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C09605A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09605Eu, 2);  /* 0C09605C mov.b @Rm,Rn */
	r8 += 0x50u;  /* 0C09605E add #imm,Rn */
	W8(r4, r0); UPD(0x0C096062u, 2);  /* 0C096060 mov.b Rm,@Rn */
	r9 += 0xFFFFFFE4u;  /* 0C096062 add #imm,Rn */
	r4 += 0x2u;  /* 0C096064 add #imm,Rn */
	W8(r4, r1); UPD(0x0C096068u, 3);  /* 0C096066 mov.b Rm,@Rn */
	{ u32 v_ = r1; r4 -= 1; W8(r4, v_); } UPD(0x0C09606Au, 1);  /* 0C096068 mov.b Rm,@-Rn */
	r5 = 0xC0A1530u; UPD(0x0C09606Cu, 1);  /* 0C09606A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09606C mov Rm,Rn */
	r3 = R32(r9 + 0x18u); UPD(0x0C096070u, 2);  /* 0C09606E mov.l @(disp,Rm),Rn */
	IF(0x0C096070u); { u32 t_ = r5; PR = 0x0C096074u; W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C096074u); }  /* 0C096070 jsr @Rn */
L_0C096074: BLKS(0x0C096074u);
	r0 = 0xB0u; UPD(0x0C096076u, 1);  /* 0C096074 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C096076 add #imm,Rn */
	IF(0x0C096078u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09607Au, 2);  /* 0C096078 mov.b @(r0,Rm),Rn */
	r10 = r8;  /* 0C09607A mov Rm,Rn */
	IF(0x0C09607Cu); W8(r0 + r8, r7); UPD(0x0C09607Eu, 2);  /* 0C09607C mov.b Rm,@(r0,Rn) */
	r9 += 0x1Du;  /* 0C09607E add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C096082u, 2);  /* 0C096080 mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C096084u, 1);  /* 0C096082 mov.w @(disp,pc),Rn */
	r0 = r6 & 0xFFFF;  /* 0C096084 extu.w Rm,Rn */
	IF(0x0C096086u); MACL = r0 * r2;  /* 0C096086 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09608Au, 4);  /* 0C096088 mov.l @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C09608Cu, 1);  /* 0C09608A mov.w @(disp,pc),Rn */
	IF(0x0C09608Cu); r11 = MACL;  /* 0C09608C sts macl,Rn */
	r11 += r1;  /* 0C09608E add Rm,Rn */
	r10 += r4;  /* 0C096090 add Rm,Rn */
	r11 += r4;  /* 0C096092 add Rm,Rn */
	r11 += 0x1u;  /* 0C096094 add #imm,Rn */
	r4 = 0xACu; UPD(0x0C096098u, 6);  /* 0C096096 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C096098 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09609Cu, 2);  /* 0C09609A mov.b @Rm,Rn */
	r4 += r8;  /* 0C09609C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0960A0u, 2);  /* 0C09609E mov.b @Rm,Rn */
	r4 += 0x3u;  /* 0C0960A0 add #imm,Rn */
	r3 += r5;  /* 0C0960A2 add Rm,Rn */
	W8(r10, r3); UPD(0x0C0960A6u, 3);  /* 0C0960A4 mov.b Rm,@Rn */
	r9 = r12;  /* 0C0960A6 mov Rm,Rn */
	W8(r4, r5); UPD(0x0C0960AAu, 2);  /* 0C0960A8 mov.b Rm,@Rn */
	r11 = 0x0u;  /* 0C0960AA mov #imm,Rn */
	r0 = R32(r13 + 0x38u); UPD(0x0C0960AEu, 2);  /* 0C0960AC mov.l @(disp,Rm),Rn */
	r4 += 0xFFFFFFFEu;  /* 0C0960AE add #imm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0960B2u, 2);  /* 0C0960B0 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C0960B2 add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C0960B6u, 2);  /* 0C0960B4 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r9;  /* 0C0960B6 exts.w Rm,Rn */
	r2 = 0x8Cu; UPD(0x0C0960BAu, 2);  /* 0C0960B8 mov.w @(disp,pc),Rn */
	r10 = 0x68u;  /* 0C0960BA mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0960BEu, 2);  /* 0C0960BC mov.b @Rm,Rn */
	r8 += r2;  /* 0C0960BE add Rm,Rn */
	W8(r4, r6); UPD(0x0C0960C2u, 2);  /* 0C0960C0 mov.b Rm,@Rn */
	T = (s32)r12 > (s32)r10;  /* 0C0960C2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C095FDCu, 4); goto L_0C095FDC; } UPD(0x0C0960C8u, 1); goto L_0C0960C8; }  /* 0C0960C4 bf/s */
L_0C0960C8: BLKS(0x0C0960C8u);
	r10 = 0xC392AFDu; UPD(0x0C0960CAu, 1);  /* 0C0960C8 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0960CA mov #imm,Rn */
	r13 = 0xC392AFEu; UPD(0x0C0960CEu, 2);  /* 0C0960CC mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0960CE mov #imm,Rn */
	W8(r10, r12); UPD(0x0C0960D2u, 2);  /* 0C0960D0 mov.b Rm,@Rn */
	{ W8(r13, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C095F06u, 3); goto L_0C095F06; }  /* 0C0960D2 bra */
}

void f_0C096140(sh3_t *c)
{
	LOCALS;
L_0C096140: BLKS(0x0C096140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C096142u, 1);  /* 0C096140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C096144u, 1);  /* 0C096142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C096146u, 1);  /* 0C096144 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C096148u, 1);  /* 0C096146 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09614Au, 1);  /* 0C096148 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09614A exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09614Eu, 2);  /* 0C09614C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C096150u, 1);  /* 0C09614E mov.l Rm,@-Rn */
	IF(0x0C096150u); MACL = r11 * r2;  /* 0C096150 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C096154u, 3);  /* 0C096152 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C096156u, 1);  /* 0C096154 mov.l @(disp,pc),Rn */
	IF(0x0C096156u); r2 = MACL;  /* 0C096156 sts macl,Rn */
	IF(0x0C096158u); r15 -= 4; W32(r15, PR); UPD(0x0C09615Au, 2);  /* 0C096158 sts.l pr,@-Rn */
	r2 += r0;  /* 0C09615A add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C09615Eu, 2);  /* 0C09615C mov.l @(disp,Rm),Rn */
	r0 = 0x37u;  /* 0C09615E mov #imm,Rn */
	T = r3 > r0;  /* 0C096160 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09616Au, 5); goto L_0C09616A; } goto L_0C096166; }  /* 0C096162 bf/s */
L_0C096166: BLKS(0x0C096166u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C096760u, 4); goto L_0C096760; }  /* 0C096166 bra */
L_0C09616A: BLKS(0x0C09616Au);
	r0 = 0xC09617Cu;  /* 0C09616A mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09616C add Rm,Rn */
	IF(0x0C09616Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C096170u, 3);  /* 0C09616E mov.w @(r0,Rm),Rn */
	IF(0x0C096170u); { u32 tv_ = (r4 + 0x0C096174u); u32 t_ = PHYS(tv_); IF(0x0C096172u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0961F0u: goto L_0C0961F0; case 0x0C096230u: goto L_0C096230; case 0x0C096270u: goto L_0C096270; case 0x0C0962A0u: goto L_0C0962A0; case 0x0C0962D0u: goto L_0C0962D0; case 0x0C096320u: goto L_0C096320; case 0x0C0963F0u: goto L_0C0963F0; case 0x0C096420u: goto L_0C096420; case 0x0C096450u: goto L_0C096450; case 0x0C096480u: goto L_0C096480; case 0x0C0964B0u: goto L_0C0964B0; case 0x0C0964E0u: goto L_0C0964E0; case 0x0C096550u: goto L_0C096550; case 0x0C096580u: goto L_0C096580; case 0x0C0965D0u: goto L_0C0965D0; case 0x0C096610u: goto L_0C096610; case 0x0C096640u: goto L_0C096640; case 0x0C096670u: goto L_0C096670; case 0x0C0966E0u: goto L_0C0966E0; case 0x0C096710u: goto L_0C096710; default: JUMPD(tv_); } }  /* 0C096170 braf Rn */
L_0C0961F0: BLKS(0x0C0961F0u);
	r12 = 0xB4u; UPD(0x0C0961F2u, 1);  /* 0C0961F0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0961F2 mov Rm,Rn */
	IF(0x0C0961F4u); MACL = r11 * r12;  /* 0C0961F4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0961F8u, 4);  /* 0C0961F6 mov.l @(disp,pc),Rn */
	IF(0x0C0961F8u); r9 = MACL;  /* 0C0961F8 sts macl,Rn */
	r9 += r10;  /* 0C0961FA add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0961FC add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C096200u, 4);  /* 0C0961FE mov.w @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C096200 tst Rm,Rn */
	IF(0x0C096202u); r0 = T;  /* 0C096202 movt Rn */
	r7 = 0xC1CC8B8u; UPD(0x0C096206u, 3);  /* 0C096204 mov.l @(disp,pc),Rn */
	IF(0x0C096206u); r0 <<= 2;  /* 0C096206 shll2 Rn */
	r6 = 0xC0A17E0u; UPD(0x0C09620Au, 2);  /* 0C096208 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFC4u;  /* 0C09620A add #imm,Rn */
	IF(0x0C09620Cu); { u32 t_ = r6; PR = 0x0C096210u; IF(0x0C09620Eu); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C096210u); }  /* 0C09620C jsr @Rn */
L_0C096210: BLKS(0x0C096210u);
	r0 = 0x8Cu; UPD(0x0C096212u, 1);  /* 0C096210 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C096212 mov #imm,Rn */
	IF(0x0C096214u); W32(r0 + r9, r5); UPD(0x0C096216u, 2);  /* 0C096214 mov.l Rm,@(r0,Rn) */
	IF(0x0C096216u); ;  /* 0C096216 nop */
	UPD(0x0C096218u, 1);
L_0C096218: BLKS(0x0C096218u);
	r15 = r14;  /* 0C096218 mov Rm,Rn */
	IF(0x0C09621Au); PR = R32(r15); r15 += 4; UPD(0x0C09621Cu, 2);  /* 0C09621A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09621Eu, 1);  /* 0C09621C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C096220u, 1);  /* 0C09621E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C096222u, 1);  /* 0C096220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C096224u, 1);  /* 0C096222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096226u, 1);  /* 0C096224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C096228u, 1);  /* 0C096226 mov.l @Rm+,Rn */
	IF(0x0C096228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C096228 rts */
L_0C096230: BLKS(0x0C096230u);
	r3 = 0xB4u; UPD(0x0C096232u, 1);  /* 0C096230 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096232 add #imm,Rn */
	IF(0x0C096234u); MACL = r11 * r3;  /* 0C096234 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C096238u, 4);  /* 0C096236 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C096238 mov #imm,Rn */
	IF(0x0C09623Au); r8 = MACL;  /* 0C09623A sts macl,Rn */
	r8 += r0;  /* 0C09623C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096240u, 4);  /* 0C09623E mov.w @(disp,pc),Rn */
	IF(0x0C096240u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096242u, 1);  /* 0C096240 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C096242 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096246u, 2);  /* 0C096244 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096246 add #imm,Rn */
	IF(0x0C096248u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09624Au, 2);  /* 0C096248 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C09624A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09624Eu, 2);  /* 0C09624C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096250u, 1);  /* 0C09624E mov.l @Rm,Rn */
L_0C096250: BLKS(0x0C096250u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096252u, 1);  /* 0C096250 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C096254u, 1);  /* 0C096252 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C096256u, 1);  /* 0C096254 mov.l @(disp,pc),Rn */
L_0C096256: BLKS(0x0C096256u);
	IF(0x0C096256u); { u32 t_ = r0; PR = 0x0C09625Au; IF(0x0C096258u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09625Au); }  /* 0C096256 jsr @Rn */
L_0C09625A: BLKS(0x0C09625Au);
	r2 = 0x0u;  /* 0C09625A mov #imm,Rn */
	W32(r8, r2); UPD(0x0C09625Eu, 2);  /* 0C09625C mov.l Rm,@Rn */
L_0C09625E: BLKS(0x0C09625Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C096218u, 3); goto L_0C096218; }  /* 0C09625E bra */
L_0C096270: BLKS(0x0C096270u);
	r8 = 0xB4u; UPD(0x0C096272u, 1);  /* 0C096270 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096272 add #imm,Rn */
	IF(0x0C096274u); MACL = r11 * r8;  /* 0C096274 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C096278u, 4);  /* 0C096276 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09627Au, 1);  /* 0C096278 mov.w @(disp,pc),Rn */
	IF(0x0C09627Au); r8 = MACL;  /* 0C09627A sts macl,Rn */
	r8 += r10;  /* 0C09627C add Rm,Rn */
	IF(0x0C09627Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096280u, 3);  /* 0C09627E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C096280 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C096284u, 2);  /* 0C096282 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096284 add #imm,Rn */
	IF(0x0C096286u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096288u, 2);  /* 0C096286 mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C096288 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09628Cu, 2);  /* 0C09628A mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C09628C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 4); goto L_0C096250; }  /* 0C09628E bra */
L_0C0962A0: BLKS(0x0C0962A0u);
	r0 = 0xB4u; UPD(0x0C0962A2u, 1);  /* 0C0962A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0962A2 add #imm,Rn */
	IF(0x0C0962A4u); MACL = r11 * r0;  /* 0C0962A4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0962A8u, 4);  /* 0C0962A6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0962A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0962ACu, 2);  /* 0C0962AA mov.w @(disp,pc),Rn */
	IF(0x0C0962ACu); r8 = MACL;  /* 0C0962AC sts macl,Rn */
	r8 += r4;  /* 0C0962AE add Rm,Rn */
	IF(0x0C0962B0u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0962B2u, 3);  /* 0C0962B0 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0962B2 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0962B6u, 2);  /* 0C0962B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0962B6 add #imm,Rn */
	IF(0x0C0962B8u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0962BAu, 2);  /* 0C0962B8 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C0962BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C0962BEu, 2);  /* 0C0962BC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C0962BE bra */
L_0C0962D0: BLKS(0x0C0962D0u);
	r2 = 0xB4u; UPD(0x0C0962D2u, 1);  /* 0C0962D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0962D2 add #imm,Rn */
	IF(0x0C0962D4u); MACL = r11 * r2;  /* 0C0962D4 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0962D8u, 4);  /* 0C0962D6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0962D8 mov #imm,Rn */
	IF(0x0C0962DAu); r9 = MACL;  /* 0C0962DA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0962DEu, 3);  /* 0C0962DC mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C0962DE add Rm,Rn */
	IF(0x0C0962E0u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0962E2u, 2);  /* 0C0962E0 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C0962E2 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C0962E6u, 2);  /* 0C0962E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0962E6 add #imm,Rn */
	IF(0x0C0962E8u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0962EAu, 2);  /* 0C0962E8 mov.b @(r0,Rm),Rn */
	r10 = 0xC0AC800u; UPD(0x0C0962ECu, 1);  /* 0C0962EA mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C0962EC extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0962F0u, 2);  /* 0C0962EE mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x24u); UPD(0x0C0962F2u, 1);  /* 0C0962F0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0962F4u, 1);  /* 0C0962F2 mov.l @Rm,Rn */
	IF(0x0C0962F4u); { u32 t_ = r10; PR = 0x0C0962F8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0962F8u); }  /* 0C0962F4 jsr @Rn */
L_0C0962F8: BLKS(0x0C0962F8u);
	r3 = 0x98u; UPD(0x0C0962FAu, 1);  /* 0C0962F8 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0962FA mov #imm,Rn */
	r3 += r9;  /* 0C0962FC add Rm,Rn */
	r5 = R32(r9); UPD(0x0C096300u, 3);  /* 0C0962FE mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C096300 add #imm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C096304u, 2);  /* 0C096302 mov.l @(disp,pc),Rn */
	r0 = 0xA3u; UPD(0x0C096306u, 1);  /* 0C096304 mov.w @(disp,pc),Rn */
	r5 &= r6;  /* 0C096306 and Rm,Rn */
	W8(r3, r1); UPD(0x0C09630Au, 2);  /* 0C096308 mov.b Rm,@Rn */
	W32(r9, r5); UPD(0x0C09630Cu, 1);  /* 0C09630A mov.l Rm,@Rn */
	IF(0x0C09630Cu); W8(r0 + r9, r1); UPD(0x0C09630Eu, 1);  /* 0C09630C mov.b Rm,@(r0,Rn) */
	{ { u32 v_ = r1; r3 -= 1; W8(r3, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C09625Eu, 3); goto L_0C09625E; }  /* 0C09630E bra */
L_0C096320: BLKS(0x0C096320u);
	r0 = 0xB4u; UPD(0x0C096322u, 1);  /* 0C096320 mov.w @(disp,pc),Rn */
	IF(0x0C096322u); MACL = r11 * r0;  /* 0C096322 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096326u, 3);  /* 0C096324 mov.l @(disp,pc),Rn */
	IF(0x0C096326u); r0 = MACL;  /* 0C096326 sts macl,Rn */
	r0 += r3;  /* 0C096328 add Rm,Rn */
	r10 = R32(r0 + 0x1Cu); UPD(0x0C09632Cu, 3);  /* 0C09632A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C09632Eu, 1);  /* 0C09632C mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C09632E tst Rm,Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C096380u, 4); goto L_0C096380; } goto L_0C096334; }  /* 0C096330 bt/s */
L_0C096334: BLKS(0x0C096334u);
	r13 = 0xA9u; UPD(0x0C096336u, 2);  /* 0C096334 mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C096336 add Rm,Rn */
	UPD(0x0C096338u, 1);
L_0C096338: BLKS(0x0C096338u);
	r10 += 0x4u;  /* 0C096338 add #imm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C09633Cu, 2);  /* 0C09633A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09633C add #imm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C096340u, 2);  /* 0C09633E mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C096340 mov #imm,Rn */
	r9 += r8;  /* 0C096342 add Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C096346u, 3);  /* 0C096344 mov.l @Rm+,Rn */
	r6 = r9;  /* 0C096346 mov Rm,Rn */
	r8 = R32(r12 + 0x28u); UPD(0x0C09634Au, 2);  /* 0C096348 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09634A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09634Eu, 2);  /* 0C09634C mov.w @(disp,pc),Rn */
	IF(0x0C09634Eu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C096350u, 1);  /* 0C09634E mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C096350 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C096354u, 2);  /* 0C096352 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C096356u, 1);  /* 0C096354 mov.b @Rm,Rn */
	r0 = 0xC0AB240u; UPD(0x0C096358u, 1);  /* 0C096356 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C096358 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C09635Cu, 2);  /* 0C09635A mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C09635C mov Rm,Rn */
	IF(0x0C09635Eu); { u32 t_ = r0; PR = 0x0C096362u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C096362u); }  /* 0C09635E jsr @Rn */
L_0C096362: BLKS(0x0C096362u);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C096364u, 1);  /* 0C096362 mov.b @Rm,Rn */
	r5 = 0x0u;  /* 0C096364 mov #imm,Rn */
	r6 = 0x20000u; UPD(0x0C096368u, 2);  /* 0C096366 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C096368 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09636Cu, 2);  /* 0C09636A mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C09636C mov #imm,Rn */
	r6 = r8;  /* 0C09636E mov Rm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C096372u, 3);  /* 0C096370 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C096374u, 1);  /* 0C096372 mov.l Rm,@(disp,Rn) */
	IF(0x0C096374u); { u32 t_ = r8; PR = 0x0C096378u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C096378u); }  /* 0C096374 jsr @Rn */
L_0C096378: BLKS(0x0C096378u);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C09637Au, 1);  /* 0C096378 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C09637A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C096338u, 4); goto L_0C096338; } UPD(0x0C096380u, 1); goto L_0C096380; }  /* 0C09637C bf/s */
L_0C096380: BLKS(0x0C096380u);
	r9 = 0xC0A0540u; UPD(0x0C096382u, 1);  /* 0C096380 mov.l @(disp,pc),Rn */
	IF(0x0C096382u); { u32 t_ = r9; PR = 0x0C096386u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C096386u); }  /* 0C096382 jsr @Rn */
L_0C096386: BLKS(0x0C096386u);
	r7 = 0xB4u; UPD(0x0C096388u, 1);  /* 0C096386 mov.w @(disp,pc),Rn */
	r13 = ~r0;  /* 0C096388 not Rm,Rn */
	IF(0x0C09638Au); MACL = r11 * r7;  /* 0C09638A mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09638Eu, 4);  /* 0C09638C mov.l @(disp,pc),Rn */
	IF(0x0C09638Eu); T = r13 >> 31; r13 = (r13 << 1) | T;  /* 0C09638E rotl Rn */
	IF(0x0C096390u); r3 = MACL;  /* 0C096390 sts macl,Rn */
	r3 += r6;  /* 0C096392 add Rm,Rn */
	r3 += 0x3Cu;  /* 0C096394 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C096398u, 5);  /* 0C096396 mov.w @Rm,Rn */
	IF(0x0C096398u); r10 = T;  /* 0C096398 movt Rn */
	T = (r11 & r11) == 0;  /* 0C09639A tst Rm,Rn */
	IF(0x0C09639Cu); r12 = T;  /* 0C09639C movt Rn */
	r10 &= r12;  /* 0C09639E and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0963A0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0963B6u, 8); goto L_0C0963B6; } goto L_0C0963A6; }  /* 0C0963A2 bt/s */
L_0C0963A6: BLKS(0x0C0963A6u);
	IF(0x0C0963A6u); MACL = r0 * r7;  /* 0C0963A6 mul.l Rm,Rn */
	r7 = 0xA5u; UPD(0x0C0963AAu, 4);  /* 0C0963A8 mov.w @(disp,pc),Rn */
	IF(0x0C0963AAu); r5 = MACL;  /* 0C0963AA sts macl,Rn */
	r5 += r6;  /* 0C0963AC add Rm,Rn */
	r5 += r7;  /* 0C0963AE add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0963B2u, 4);  /* 0C0963B0 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0963B2 add #imm,Rn */
	W8(r5, r6); UPD(0x0C0963B6u, 2);  /* 0C0963B4 mov.b Rm,@Rn */
L_0C0963B6: BLKS(0x0C0963B6u);
	r2 = 0x0u;  /* 0C0963B6 mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C0963B8 bra */
L_0C0963F0: BLKS(0x0C0963F0u);
	r8 = 0xB4u; UPD(0x0C0963F2u, 1);  /* 0C0963F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0963F2 add #imm,Rn */
	IF(0x0C0963F4u); MACL = r11 * r8;  /* 0C0963F4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0963F8u, 4);  /* 0C0963F6 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0963F8 mov #imm,Rn */
	IF(0x0C0963FAu); r8 = MACL;  /* 0C0963FA sts macl,Rn */
	r8 += r0;  /* 0C0963FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096400u, 4);  /* 0C0963FE mov.w @(disp,pc),Rn */
	IF(0x0C096400u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096402u, 1);  /* 0C096400 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C096402 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C096406u, 2);  /* 0C096404 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096406 add #imm,Rn */
	IF(0x0C096408u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09640Au, 2);  /* 0C096408 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C09640A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09640Eu, 2);  /* 0C09640C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096410u, 1);  /* 0C09640E mov.l @Rm,Rn */
L_0C096410: BLKS(0x0C096410u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096412u, 1);  /* 0C096410 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD970u; UPD(0x0C096414u, 1);  /* 0C096412 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096414 bra */
L_0C096420: BLKS(0x0C096420u);
	r7 = 0xB4u; UPD(0x0C096422u, 1);  /* 0C096420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096422 add #imm,Rn */
	IF(0x0C096424u); MACL = r11 * r7;  /* 0C096424 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C096428u, 4);  /* 0C096426 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09642Au, 1);  /* 0C096428 mov.w @(disp,pc),Rn */
	IF(0x0C09642Au); r8 = MACL;  /* 0C09642A sts macl,Rn */
	r8 += r6;  /* 0C09642C add Rm,Rn */
	IF(0x0C09642Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096430u, 3);  /* 0C09642E mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C096430 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C096434u, 2);  /* 0C096432 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096434 add #imm,Rn */
	IF(0x0C096436u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096438u, 2);  /* 0C096436 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C096438 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C09643A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09643Eu, 3);  /* 0C09643C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096440u, 1);  /* 0C09643E mov.l @Rm,Rn */
L_0C096440: BLKS(0x0C096440u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096442u, 1);  /* 0C096440 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C096444u, 1);  /* 0C096442 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096444 bra */
L_0C096450: BLKS(0x0C096450u);
	r0 = 0xB4u; UPD(0x0C096452u, 1);  /* 0C096450 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096452 add #imm,Rn */
	IF(0x0C096454u); MACL = r11 * r0;  /* 0C096454 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C096458u, 4);  /* 0C096456 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C096458 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09645Cu, 2);  /* 0C09645A mov.w @(disp,pc),Rn */
	IF(0x0C09645Cu); r8 = MACL;  /* 0C09645C sts macl,Rn */
	r8 += r12;  /* 0C09645E add Rm,Rn */
	IF(0x0C096460u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096462u, 3);  /* 0C096460 mov.b @(r0,Rm),Rn */
	r3 = r10 & 0xFF;  /* 0C096462 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C096466u, 2);  /* 0C096464 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096466 add #imm,Rn */
	IF(0x0C096468u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09646Au, 2);  /* 0C096468 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C09646A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09646Eu, 2);  /* 0C09646C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096470u, 1);  /* 0C09646E mov.l @Rm,Rn */
L_0C096470: BLKS(0x0C096470u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096472u, 1);  /* 0C096470 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD830u; UPD(0x0C096474u, 1);  /* 0C096472 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096474 bra */
L_0C096480: BLKS(0x0C096480u);
	r8 = 0xB4u; UPD(0x0C096482u, 1);  /* 0C096480 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096482 add #imm,Rn */
	IF(0x0C096484u); MACL = r11 * r8;  /* 0C096484 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C096488u, 4);  /* 0C096486 mov.l @(disp,pc),Rn */
	IF(0x0C096488u); r8 = MACL;  /* 0C096488 sts macl,Rn */
	r8 += r11;  /* 0C09648A add Rm,Rn */
	UPD(0x0C09648Cu, 2);
L_0C09648C: BLKS(0x0C09648Cu);
	r0 = 0xB0u; UPD(0x0C09648Eu, 1);  /* 0C09648C mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09648E mov #imm,Rn */
	IF(0x0C096490u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096492u, 2);  /* 0C096490 mov.b @(r0,Rm),Rn */
	r3 = r13 & 0xFF;  /* 0C096492 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C096496u, 2);  /* 0C096494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096496 add #imm,Rn */
	IF(0x0C096498u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09649Au, 2);  /* 0C096498 mov.b @(r0,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C09649A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09649Eu, 2);  /* 0C09649C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C09649E bra */
L_0C0964B0: BLKS(0x0C0964B0u);
	r2 = 0xB4u; UPD(0x0C0964B2u, 1);  /* 0C0964B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0964B2 add #imm,Rn */
	IF(0x0C0964B4u); MACL = r11 * r2;  /* 0C0964B4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0964B8u, 4);  /* 0C0964B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0964BAu, 1);  /* 0C0964B8 mov.w @(disp,pc),Rn */
	IF(0x0C0964BAu); r8 = MACL;  /* 0C0964BA sts macl,Rn */
	r8 += r7;  /* 0C0964BC add Rm,Rn */
	IF(0x0C0964BEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0964C0u, 3);  /* 0C0964BE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0964C0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0964C4u, 2);  /* 0C0964C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0964C4 add #imm,Rn */
	IF(0x0C0964C6u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0964C8u, 2);  /* 0C0964C6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0964C8 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C0964CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0964CEu, 3);  /* 0C0964CC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C0964CE bra */
L_0C0964E0: BLKS(0x0C0964E0u);
	r10 = 0xC0A03F0u; UPD(0x0C0964E2u, 1);  /* 0C0964E0 mov.l @(disp,pc),Rn */
	IF(0x0C0964E2u); { u32 t_ = r10; PR = 0x0C0964E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0964E6u); }  /* 0C0964E2 jsr @Rn */
L_0C0964E6: BLKS(0x0C0964E6u);
	IF(0x0C0964E6u); T = (s32)r0 >= 0;  /* 0C0964E6 cmp/pz Rn */
	if (!T) { UPD(0x0C09652Au, 4); goto L_0C09652A; }  /* 0C0964E8 bf */
L_0C0964EA: BLKS(0x0C0964EAu);
	r15 += 0xFFFFFFF8u;  /* 0C0964EA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C0964EEu, 2);  /* 0C0964EC mov.w @(disp,pc),Rn */
	IF(0x0C0964EEu); MACL = r11 * r7;  /* 0C0964EE mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0964F2u, 3);  /* 0C0964F0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0964F2 mov #imm,Rn */
	IF(0x0C0964F4u); r0 = MACL;  /* 0C0964F4 sts macl,Rn */
	r0 += r10;  /* 0C0964F6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0964F8 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0964FCu, 5);  /* 0C0964FA mov.w @Rm,Rn */
	IF(0x0C0964FCu); MACL = r2 * r7;  /* 0C0964FC mul.l Rm,Rn */
	r6 = 0xA1u; UPD(0x0C096500u, 3);  /* 0C0964FE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C096500 add #imm,Rn */
	IF(0x0C096502u); r9 = MACL;  /* 0C096502 sts macl,Rn */
	r7 += 0xFFFFFFF3u;  /* 0C096504 add #imm,Rn */
	r9 += r10;  /* 0C096506 add Rm,Rn */
	r9 += r7;  /* 0C096508 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09650Cu, 6);  /* 0C09650A mov.b @Rm,Rn */
	IF(0x0C09650Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09650Eu, 1);  /* 0C09650C mov.b @(r0,Rm),Rn */
	r13 = 0xA9u; UPD(0x0C096510u, 1);  /* 0C09650E mov.w @(disp,pc),Rn */
	r5 |= r1;  /* 0C096510 or Rm,Rn */
	W8(r9, r5); UPD(0x0C096514u, 2);  /* 0C096512 mov.b Rm,@Rn */
	IF(0x0C096514u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C096516u, 1);  /* 0C096514 mov.b @(r0,Rm),Rn */
	r3 = 0x20000u; UPD(0x0C096518u, 1);  /* 0C096516 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C096518 extu.b Rm,Rn */
	r12 = 0xC7C27B0u; UPD(0x0C09651Cu, 2);  /* 0C09651A mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09651Eu, 1);  /* 0C09651C mov.l Rm,@(disp,Rn) */
	W32(r15, r3); UPD(0x0C096520u, 1);  /* 0C09651E mov.l Rm,@Rn */
	r4 = 0xCu;  /* 0C096520 mov #imm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C096524u, 2);  /* 0C096522 mov.l @(disp,Rm),Rn */
	IF(0x0C096524u); { u32 t_ = r12; PR = 0x0C096528u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C096528u); }  /* 0C096524 jsr @Rn */
L_0C096528: BLKS(0x0C096528u);
	r15 += 0x8u;  /* 0C096528 add #imm,Rn */
	UPD(0x0C09652Au, 1);
L_0C09652A: BLKS(0x0C09652Au);
	r8 = 0xB4u; UPD(0x0C09652Cu, 1);  /* 0C09652A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09652C add #imm,Rn */
	IF(0x0C09652Eu); MACL = r11 * r8;  /* 0C09652E mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096532u, 4);  /* 0C096530 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C096532 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C096536u, 2);  /* 0C096534 mov.w @(disp,pc),Rn */
	IF(0x0C096536u); r8 = MACL;  /* 0C096536 sts macl,Rn */
	r8 += r3;  /* 0C096538 add Rm,Rn */
	IF(0x0C09653Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09653Cu, 3);  /* 0C09653A mov.b @(r0,Rm),Rn */
	r12 = r4 & 0xFF;  /* 0C09653C extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C096540u, 2);  /* 0C09653E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096540 add #imm,Rn */
	IF(0x0C096542u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096544u, 2);  /* 0C096542 mov.b @(r0,Rm),Rn */
	r0 = r11 & 0xFF;  /* 0C096544 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C096548u, 2);  /* 0C096546 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096410u, 3); goto L_0C096410; }  /* 0C096548 bra */
L_0C096550: BLKS(0x0C096550u);
	r10 = 0xB4u; UPD(0x0C096552u, 1);  /* 0C096550 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096552 add #imm,Rn */
	IF(0x0C096554u); MACL = r11 * r10;  /* 0C096554 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096558u, 4);  /* 0C096556 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09655Au, 1);  /* 0C096558 mov.w @(disp,pc),Rn */
	IF(0x0C09655Au); r8 = MACL;  /* 0C09655A sts macl,Rn */
	r8 += r7;  /* 0C09655C add Rm,Rn */
	IF(0x0C09655Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096560u, 3);  /* 0C09655E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C096560 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C096564u, 2);  /* 0C096562 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096564 add #imm,Rn */
	IF(0x0C096566u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096568u, 2);  /* 0C096566 mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C096568 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C09656A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C09656Eu, 3);  /* 0C09656C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C09656E bra */
L_0C096580: BLKS(0x0C096580u);
	r3 = 0xB4u; UPD(0x0C096582u, 1);  /* 0C096580 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096582 add #imm,Rn */
	IF(0x0C096584u); MACL = r11 * r3;  /* 0C096584 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C096588u, 4);  /* 0C096586 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C096588 mov #imm,Rn */
	IF(0x0C09658Au); r8 = MACL;  /* 0C09658A sts macl,Rn */
	r8 += r0;  /* 0C09658C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096590u, 4);  /* 0C09658E mov.w @(disp,pc),Rn */
	IF(0x0C096590u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096592u, 1);  /* 0C096590 mov.b @(r0,Rm),Rn */
	r12 = r4 & 0xFF;  /* 0C096592 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C096596u, 2);  /* 0C096594 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096596 add #imm,Rn */
	IF(0x0C096598u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09659Au, 2);  /* 0C096598 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C09659A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09659Eu, 2);  /* 0C09659C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C09659E bra */
L_0C0965D0: BLKS(0x0C0965D0u);
	r8 = 0xC0A03F0u; UPD(0x0C0965D2u, 1);  /* 0C0965D0 mov.l @(disp,pc),Rn */
	IF(0x0C0965D2u); { u32 t_ = r8; PR = 0x0C0965D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0965D6u); }  /* 0C0965D2 jsr @Rn */
L_0C0965D6: BLKS(0x0C0965D6u);
	IF(0x0C0965D6u); T = (s32)r0 >= 0;  /* 0C0965D6 cmp/pz Rn */
	if (!T) { UPD(0x0C096600u, 4); goto L_0C096600; }  /* 0C0965D8 bf */
L_0C0965DA: BLKS(0x0C0965DAu);
	r4 = r0;  /* 0C0965DA mov Rm,Rn */
	r12 = 0xB4u; UPD(0x0C0965DEu, 2);  /* 0C0965DC mov.w @(disp,pc),Rn */
	IF(0x0C0965DEu); MACL = r0 * r12;  /* 0C0965DE mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0965E2u, 3);  /* 0C0965E0 mov.l @(disp,pc),Rn */
	IF(0x0C0965E2u); r7 = MACL;  /* 0C0965E2 sts macl,Rn */
	r7 += r10;  /* 0C0965E4 add Rm,Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C0965E8u, 3);  /* 0C0965E6 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C0965EAu, 1);  /* 0C0965E8 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0965EA add #imm,Rn */
	IF(0x0C0965ECu); { u32 t_ = r6; PR = 0x0C0965F0u; W32(r7 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0965F0u); }  /* 0C0965EC jsr @Rn */
L_0C0965F0: BLKS(0x0C0965F0u);
	IF(0x0C0965F0u); MACL = r11 * r12;  /* 0C0965F0 mul.l Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0965F2 add #imm,Rn */
	IF(0x0C0965F4u); r8 = MACL;  /* 0C0965F4 sts macl,Rn */
	{ r8 += r10; /* slot add Rm,Rn */ UPD(0x0C09648Cu, 7); goto L_0C09648C; }  /* 0C0965F6 bra */
L_0C096600: BLKS(0x0C096600u);
	r5 = 0xB4u; UPD(0x0C096602u, 1);  /* 0C096600 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C096602 mov #imm,Rn */
	IF(0x0C096604u); MACL = r11 * r5;  /* 0C096604 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C096608u, 4);  /* 0C096606 mov.l @(disp,pc),Rn */
	IF(0x0C096608u); r0 = MACL;  /* 0C096608 sts macl,Rn */
	{ IF(0x0C09660Cu); W32(r0 + r13, r9); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C09660A bra */
L_0C096610: BLKS(0x0C096610u);
	r8 = 0xB4u; UPD(0x0C096612u, 1);  /* 0C096610 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096612 add #imm,Rn */
	IF(0x0C096614u); MACL = r11 * r8;  /* 0C096614 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C096618u, 4);  /* 0C096616 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09661Au, 1);  /* 0C096618 mov.w @(disp,pc),Rn */
	IF(0x0C09661Au); r8 = MACL;  /* 0C09661A sts macl,Rn */
	r8 += r12;  /* 0C09661C add Rm,Rn */
	IF(0x0C09661Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096620u, 3);  /* 0C09661E mov.b @(r0,Rm),Rn */
	r5 = r10 & 0xFF;  /* 0C096620 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C096624u, 2);  /* 0C096622 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096624 add #imm,Rn */
	IF(0x0C096626u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096628u, 2);  /* 0C096626 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C096628 mov #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C09662A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09662Eu, 3);  /* 0C09662C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096470u, 3); goto L_0C096470; }  /* 0C09662E bra */
L_0C096640: BLKS(0x0C096640u);
	r3 = 0xB4u; UPD(0x0C096642u, 1);  /* 0C096640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096642 add #imm,Rn */
	IF(0x0C096644u); MACL = r11 * r3;  /* 0C096644 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C096648u, 4);  /* 0C096646 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C096648 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09664Cu, 2);  /* 0C09664A mov.w @(disp,pc),Rn */
	IF(0x0C09664Cu); r8 = MACL;  /* 0C09664C sts macl,Rn */
	r8 += r4;  /* 0C09664E add Rm,Rn */
	IF(0x0C096650u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096652u, 3);  /* 0C096650 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C096652 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096656u, 2);  /* 0C096654 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096656 add #imm,Rn */
	IF(0x0C096658u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09665Au, 2);  /* 0C096658 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C09665A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09665Eu, 2);  /* 0C09665C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096410u, 3); goto L_0C096410; }  /* 0C09665E bra */
L_0C096670: BLKS(0x0C096670u);
	r9 = 0xB4u; UPD(0x0C096672u, 1);  /* 0C096670 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096672 add #imm,Rn */
	IF(0x0C096674u); MACL = r11 * r9;  /* 0C096674 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C096678u, 4);  /* 0C096676 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C096678 mov #imm,Rn */
	IF(0x0C09667Au); r8 = MACL;  /* 0C09667A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09667Eu, 3);  /* 0C09667C mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09667E add Rm,Rn */
	IF(0x0C096680u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096682u, 2);  /* 0C096680 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C096682 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096686u, 2);  /* 0C096684 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096686 add #imm,Rn */
	IF(0x0C096688u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09668Au, 2);  /* 0C096688 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C09668A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09668Eu, 2);  /* 0C09668C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AB240u; UPD(0x0C096690u, 1);  /* 0C09668E mov.l @(disp,pc),Rn */
	r12 = 0xC0A0540u; UPD(0x0C096692u, 1);  /* 0C096690 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C096694u, 1);  /* 0C096692 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C096696u, 1);  /* 0C096694 mov.l @(disp,Rm),Rn */
	IF(0x0C096696u); { u32 t_ = r13; PR = 0x0C09669Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C09669Au); }  /* 0C096696 jsr @Rn */
L_0C09669A: BLKS(0x0C09669Au);
	r15 += 0x8u;  /* 0C09669A add #imm,Rn */
	IF(0x0C09669Cu); { u32 t_ = r12; PR = 0x0C0966A0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0966A0u); }  /* 0C09669C jsr @Rn */
L_0C0966A0: BLKS(0x0C0966A0u);
	r1 = ~r0;  /* 0C0966A0 not Rm,Rn */
	r8 += 0x3Cu;  /* 0C0966A2 add #imm,Rn */
	IF(0x0C0966A4u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0966A4 rotl Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0966A8u, 4);  /* 0C0966A6 mov.w @Rm,Rn */
	IF(0x0C0966A8u); r13 = T;  /* 0C0966A8 movt Rn */
	T = (r5 & r5) == 0;  /* 0C0966AA tst Rm,Rn */
	IF(0x0C0966ACu); r0 = T;  /* 0C0966AC movt Rn */
	r13 &= r0;  /* 0C0966AE and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0966B0 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0966CCu, 8); goto L_0C0966CC; } goto L_0C0966B6; }  /* 0C0966B2 bt/s */
L_0C0966B6: BLKS(0x0C0966B6u);
	r8 += 0x7Eu;  /* 0C0966B6 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0966BAu, 3);  /* 0C0966B8 mov.w @Rm,Rn */
	IF(0x0C0966BAu); MACL = r0 * r9;  /* 0C0966BA mul.l Rm,Rn */
	r11 = 0xA5u; UPD(0x0C0966BEu, 3);  /* 0C0966BC mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0966BE add #imm,Rn */
	IF(0x0C0966C0u); r9 = MACL;  /* 0C0966C0 sts macl,Rn */
	r9 += r10;  /* 0C0966C2 add Rm,Rn */
	r9 += r11;  /* 0C0966C4 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0966C8u, 5);  /* 0C0966C6 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0966C8 add #imm,Rn */
	W8(r9, r10); UPD(0x0C0966CCu, 2);  /* 0C0966CA mov.b Rm,@Rn */
L_0C0966CC: BLKS(0x0C0966CCu);
	r3 = 0x0u;  /* 0C0966CC mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C0966CE bra */
L_0C0966E0: BLKS(0x0C0966E0u);
	r8 = 0xB4u; UPD(0x0C0966E2u, 1);  /* 0C0966E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0966E2 add #imm,Rn */
	IF(0x0C0966E4u); MACL = r11 * r8;  /* 0C0966E4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0966E8u, 4);  /* 0C0966E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0966EAu, 1);  /* 0C0966E8 mov.w @(disp,pc),Rn */
	IF(0x0C0966EAu); r8 = MACL;  /* 0C0966EA sts macl,Rn */
	r8 += r7;  /* 0C0966EC add Rm,Rn */
	IF(0x0C0966EEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0966F0u, 3);  /* 0C0966EE mov.b @(r0,Rm),Rn */
	r13 = r6 & 0xFF;  /* 0C0966F0 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0966F4u, 2);  /* 0C0966F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0966F4 add #imm,Rn */
	IF(0x0C0966F6u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0966F8u, 2);  /* 0C0966F6 mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C0966F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0966FCu, 2);  /* 0C0966FA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0966FEu, 1);  /* 0C0966FC mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C0966FE bra */
L_0C096710: BLKS(0x0C096710u);
	r8 = 0xB4u; UPD(0x0C096712u, 1);  /* 0C096710 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096712 add #imm,Rn */
	IF(0x0C096714u); MACL = r11 * r8;  /* 0C096714 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096718u, 4);  /* 0C096716 mov.l @(disp,pc),Rn */
	IF(0x0C096718u); r10 = MACL;  /* 0C096718 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09671Cu, 2);  /* 0C09671A mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C09671C add Rm,Rn */
	IF(0x0C09671Eu); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C096720u, 2);  /* 0C09671E mov.b @(r0,Rm),Rn */
	r11 = 0x0u;  /* 0C096720 mov #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C096722 extu.b Rm,Rn */
	r12 = 0xA9u; UPD(0x0C096726u, 3);  /* 0C096724 mov.w @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C096728u, 1);  /* 0C096726 mov.l Rm,@Rn */
	r12 += r10;  /* 0C096728 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C09672Cu, 2);  /* 0C09672A mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C09672C mov #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C09672E extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C096732u, 3);  /* 0C096730 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AB240u; UPD(0x0C096734u, 1);  /* 0C096732 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C096736u, 1);  /* 0C096734 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C096738u, 1);  /* 0C096736 mov.l @(disp,Rm),Rn */
	IF(0x0C096738u); { u32 t_ = r13; PR = 0x0C09673Cu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C09673Cu); }  /* 0C096738 jsr @Rn */
L_0C09673C: BLKS(0x0C09673Cu);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C09673Eu, 1);  /* 0C09673C mov.b @Rm,Rn */
	r4 = 0x20000u; UPD(0x0C096740u, 1);  /* 0C09673E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C096740 extu.b Rm,Rn */
	r9 = 0xC7C27B0u; UPD(0x0C096744u, 2);  /* 0C096742 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C096746u, 1);  /* 0C096744 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C096748u, 1);  /* 0C096746 mov.l Rm,@(disp,Rn) */
	r4 = 0x8u;  /* 0C096748 mov #imm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C09674Cu, 2);  /* 0C09674A mov.l @(disp,Rm),Rn */
	IF(0x0C09674Cu); { u32 t_ = r9; PR = 0x0C096750u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C096750u); }  /* 0C09674C jsr @Rn */
L_0C096750: BLKS(0x0C096750u);
	{ W32(r10, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C09625Eu, 3); goto L_0C09625E; }  /* 0C096750 bra */
L_0C096760: BLKS(0x0C096760u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 3); goto L_0C096218; }  /* 0C096760 bra */
}

/* FUN_0c096790 */
void f_0C096790(sh3_t *c)
{
	LOCALS;
L_0C096790: BLKS(0x0C096790u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C096792u, 1);  /* 0C096790 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C096794u, 1);  /* 0C096792 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C096794 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C096798u, 2);  /* 0C096796 mov.l Rm,@-Rn */
	IF(0x0C096798u); MACL = r8 * r2;  /* 0C096798 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09679Cu, 3);  /* 0C09679A mov.l Rm,@-Rn */
	r4 = 0xC26CD40u; UPD(0x0C09679Eu, 1);  /* 0C09679C mov.l @(disp,pc),Rn */
	IF(0x0C09679Eu); r0 = MACL;  /* 0C09679E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0967A2u, 2);  /* 0C0967A0 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C0967A2 add Rm,Rn */
	IF(0x0C0967A4u); r15 -= 4; W32(r15, PR); UPD(0x0C0967A6u, 2);  /* 0C0967A4 sts.l pr,@-Rn */
	r0 = 0x9Fu; UPD(0x0C0967A8u, 1);  /* 0C0967A6 mov.w @(disp,pc),Rn */
	IF(0x0C0967A8u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0967AAu, 1);  /* 0C0967A8 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C0967AA mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C0967AC extu.b Rm,Rn */
	T = r2 > r0;  /* 0C0967AE cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C096810u, 6); goto L_0C096810; } goto L_0C0967B4; }  /* 0C0967B0 bt/s */
L_0C0967B4: BLKS(0x0C0967B4u);
	r0 = 0xC0967C8u;  /* 0C0967B4 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0967B6 add Rm,Rn */
	IF(0x0C0967B8u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0967BAu, 4);  /* 0C0967B8 mov.w @(r0,Rm),Rn */
	IF(0x0C0967BAu); { u32 tv_ = (r5 + 0x0C0967BEu); u32 t_ = PHYS(tv_); IF(0x0C0967BCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0967E0u: goto L_0C0967E0; case 0x0C096820u: goto L_0C096820; case 0x0C0968B0u: goto L_0C0968B0; case 0x0C096920u: goto L_0C096920; case 0x0C096C20u: goto L_0C096C20; default: JUMPD(tv_); } }  /* 0C0967BA braf Rn */
L_0C0967E0: BLKS(0x0C0967E0u);
	r3 = 0xB4u; UPD(0x0C0967E2u, 1);  /* 0C0967E0 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0967E2 mov #imm,Rn */
	IF(0x0C0967E4u); MACL = r8 * r3;  /* 0C0967E4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0967E8u, 4);  /* 0C0967E6 mov.l @(disp,pc),Rn */
	IF(0x0C0967E8u); r3 = MACL;  /* 0C0967E8 sts macl,Rn */
	r3 += r0;  /* 0C0967EA add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0967EC add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C0967F0u, 4);  /* 0C0967EE mov.w @Rm,Rn */
	r4 = r9;  /* 0C0967F0 mov Rm,Rn */
	IF(0x0C0967F2u); T = r4 >> 31; r4 = (r4 << 1) | T;  /* 0C0967F2 rotl Rn */
	IF(0x0C0967F4u); r10 = T;  /* 0C0967F4 movt Rn */
	r9 += r10;  /* 0C0967F6 add Rm,Rn */
	r8 = 0xC1F6168u; UPD(0x0C0967FAu, 5);  /* 0C0967F8 mov.l @(disp,pc),Rn */
	IF(0x0C0967FAu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0967FA shar Rn */
	r7 = 0xC1F616Cu; UPD(0x0C0967FEu, 2);  /* 0C0967FC mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFC4u;  /* 0C0967FE add #imm,Rn */
	r6 = 0x9Fu; UPD(0x0C096802u, 2);  /* 0C096800 mov.w @(disp,pc),Rn */
	W16(r8, r9); UPD(0x0C096804u, 1);  /* 0C096802 mov.w Rm,@Rn */
	r3 += r6;  /* 0C096804 add Rm,Rn */
	W32(r7, r1); UPD(0x0C096808u, 2);  /* 0C096806 mov.l Rm,@Rn */
L_0C096808: BLKS(0x0C096808u);
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C09680Au, 1);  /* 0C096808 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09680A add #imm,Rn */
	W8(r3, r2); UPD(0x0C09680Eu, 2);  /* 0C09680C mov.b Rm,@Rn */
	IF(0x0C09680Eu); ;  /* 0C09680E nop */
	UPD(0x0C096810u, 1);
L_0C096810: BLKS(0x0C096810u);
	r15 = r14;  /* 0C096810 mov Rm,Rn */
	IF(0x0C096812u); PR = R32(r15); r15 += 4; UPD(0x0C096814u, 2);  /* 0C096812 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C096816u, 1);  /* 0C096814 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096818u, 1);  /* 0C096816 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09681Au, 1);  /* 0C096818 mov.l @Rm+,Rn */
	IF(0x0C09681Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09681A rts */
L_0C096820: BLKS(0x0C096820u);
	r5 = 0xB4u; UPD(0x0C096822u, 1);  /* 0C096820 mov.w @(disp,pc),Rn */
	IF(0x0C096822u); MACL = r8 * r5;  /* 0C096822 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C096826u, 3);  /* 0C096824 mov.l @(disp,pc),Rn */
	IF(0x0C096826u); r3 = MACL;  /* 0C096826 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09682Au, 2);  /* 0C096828 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09682A add Rm,Rn */
	r7 += r3;  /* 0C09682C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C096830u, 3);  /* 0C09682E mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C096830 tst Rm,Rn */
	if (!T) { UPD(0x0C096854u, 4); goto L_0C096854; }  /* 0C096832 bf */
L_0C096834: BLKS(0x0C096834u);
	r10 = 0xC220C2Cu; UPD(0x0C096836u, 1);  /* 0C096834 mov.l @(disp,pc),Rn */
	r9 = R32(r10); UPD(0x0C096838u, 1);  /* 0C096836 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C096838 tst Rm,Rn */
	if (!T) { UPD(0x0C096854u, 4); goto L_0C096854; }  /* 0C09683A bf */
L_0C09683C: BLKS(0x0C09683Cu);
	r0 = R32(r3); UPD(0x0C09683Eu, 1);  /* 0C09683C mov.l @Rm,Rn */
	r4 = r6;  /* 0C09683E mov Rm,Rn */
	r1 = 0xDFFFFFFFu; UPD(0x0C096842u, 2);  /* 0C096840 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C096842 add #imm,Rn */
	r0 &= r1;  /* 0C096844 and Rm,Rn */
	W32(r3, r0); UPD(0x0C096848u, 3);  /* 0C096846 mov.l Rm,@Rn */
	r3 = r7;  /* 0C096848 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09684A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09684Eu, 3);  /* 0C09684C mov.b @Rm,Rn */
	r0 |= 0x40u;  /* 0C09684E or #imm,r0 */
	W8(r3, r0); UPD(0x0C096852u, 2);  /* 0C096850 mov.b Rm,@Rn */
	W8(r7, r4); UPD(0x0C096854u, 1);  /* 0C096852 mov.b Rm,@Rn */
L_0C096854: BLKS(0x0C096854u);
	r3 = 0xB4u; UPD(0x0C096856u, 1);  /* 0C096854 mov.w @(disp,pc),Rn */
	IF(0x0C096856u); MACL = r8 * r3;  /* 0C096856 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09685Au, 3);  /* 0C096858 mov.l @(disp,pc),Rn */
	IF(0x0C09685Au); r3 = MACL;  /* 0C09685A sts macl,Rn */
	r3 += r4;  /* 0C09685C add Rm,Rn */
	r2 = 0xC1F6168u; UPD(0x0C096860u, 3);  /* 0C09685E mov.l @(disp,pc),Rn */
	r3 += 0x3Cu;  /* 0C096860 add #imm,Rn */
	r9 = 0xC1F616Cu; UPD(0x0C096864u, 2);  /* 0C096862 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C096866u, 1);  /* 0C096864 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C096868u, 1);  /* 0C096866 mov.w @Rm,Rn */
	r3 += 0xFFFFFFC4u;  /* 0C096868 add #imm,Rn */
	r8 = R32(r9); UPD(0x0C09686Cu, 2);  /* 0C09686A mov.l @Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C09686C cmp/gt Rm,Rn */
	r5 = 0xE0Fu; UPD(0x0C096870u, 2);  /* 0C09686E mov.w @(disp,pc),Rn */
	IF(0x0C096870u); r7 = T;  /* 0C096870 movt Rn */
	r8 += 0x1u;  /* 0C096872 add #imm,Rn */
	T = (s32)r5 >= (s32)r8;  /* 0C096874 cmp/ge Rm,Rn */
	IF(0x0C096876u); r6 = T;  /* 0C096876 movt Rn */
	r7 &= r6;  /* 0C096878 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09687A tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C096810u, 9); goto L_0C096810; } UPD(0x0C096880u, 1); goto L_0C096880; }  /* 0C09687C bf/s */
L_0C096880: BLKS(0x0C096880u);
	r0 = 0x9Fu; UPD(0x0C096882u, 1);  /* 0C096880 mov.w @(disp,pc),Rn */
	IF(0x0C096882u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C096884u, 1);  /* 0C096882 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C096884 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C096888u, 2);  /* 0C096886 mov.l @Rm,Rn */
	IF(0x0C096888u); W8(r0 + r3, r5); UPD(0x0C09688Au, 1);  /* 0C096888 mov.b Rm,@(r0,Rn) */
	r1 = 0x20000000u; UPD(0x0C09688Cu, 1);  /* 0C09688A mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09688C add #imm,Rn */
	r8 = 0xC7C1FD0u; UPD(0x0C096890u, 2);  /* 0C09688E mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C096890 or Rm,Rn */
	IF(0x0C096892u); W8(r0 + r3, r7); UPD(0x0C096894u, 2);  /* 0C096892 mov.b Rm,@(r0,Rn) */
	IF(0x0C096894u); { u32 t_ = r8; PR = 0x0C096898u; W32(r3, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1FD0, 0x0C7C1FD0u, 0x0C096898u); }  /* 0C096894 jsr @Rn */
L_0C096898: BLKS(0x0C096898u);
	r0 = 0xC0AFC10u; UPD(0x0C09689Au, 1);  /* 0C096898 mov.l @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C09689A mov #imm,Rn */
	r15 = r14;  /* 0C09689C mov Rm,Rn */
	IF(0x0C09689Eu); PR = R32(r15); r15 += 4; UPD(0x0C0968A0u, 3);  /* 0C09689E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0968A2u, 1);  /* 0C0968A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0968A4u, 1);  /* 0C0968A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0968A6u, 1);  /* 0C0968A4 mov.l @Rm+,Rn */
	IF(0x0C0968A6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C0968A6 jmp @Rn */
L_0C0968B0: BLKS(0x0C0968B0u);
	r9 = 0xB4u; UPD(0x0C0968B2u, 1);  /* 0C0968B0 mov.w @(disp,pc),Rn */
	IF(0x0C0968B2u); MACL = r8 * r9;  /* 0C0968B2 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0968B6u, 3);  /* 0C0968B4 mov.l @(disp,pc),Rn */
	IF(0x0C0968B6u); r9 = MACL;  /* 0C0968B6 sts macl,Rn */
	r9 += r10;  /* 0C0968B8 add Rm,Rn */
	r10 = 0xA0u; UPD(0x0C0968BCu, 3);  /* 0C0968BA mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0968BC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0968C0u, 2);  /* 0C0968BE mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C0968C0 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0968C2 tst Rm,Rn */
	if (T) { UPD(0x0C096900u, 5); goto L_0C096900; }  /* 0C0968C4 bt */
L_0C0968C6: BLKS(0x0C0968C6u);
	T = r0 == 0x1u;  /* 0C0968C6 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C096810u, 4); goto L_0C096810; }  /* 0C0968C8 bf */
L_0C0968CA: BLKS(0x0C0968CAu);
	r0 = 0xC0A1700u; UPD(0x0C0968CCu, 1);  /* 0C0968CA mov.l @(disp,pc),Rn */
	IF(0x0C0968CCu); { u32 t_ = r0; PR = 0x0C0968D0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0968D0u); }  /* 0C0968CC jsr @Rn */
L_0C0968D0: BLKS(0x0C0968D0u);
	r3 = 0xC0A1590u; UPD(0x0C0968D2u, 1);  /* 0C0968D0 mov.l @(disp,pc),Rn */
	IF(0x0C0968D2u); { u32 t_ = r3; PR = 0x0C0968D6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C0968D6u); }  /* 0C0968D2 jsr @Rn */
L_0C0968D6: BLKS(0x0C0968D6u);
	r3 = R32(r9); UPD(0x0C0968D8u, 1);  /* 0C0968D6 mov.l @Rm,Rn */
	r4 = 0x100u; UPD(0x0C0968DAu, 1);  /* 0C0968D8 mov.w @(disp,pc),Rn */
	T = (r3 & r4) == 0;  /* 0C0968DA tst Rm,Rn */
	if (T) { UPD(0x0C096810u, 4); goto L_0C096810; }  /* 0C0968DC bt */
L_0C0968DE: BLKS(0x0C0968DEu);
	r7 = 0x0u;  /* 0C0968DE mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C0968E2u, 2);  /* 0C0968E0 mov.w @(disp,pc),Rn */
	IF(0x0C0968E2u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0968E4u, 1);  /* 0C0968E2 mov.b @(r0,Rm),Rn */
	r6 = 0x0u;  /* 0C0968E4 mov #imm,Rn */
	r2 += 0x1u;  /* 0C0968E6 add #imm,Rn */
	r5 = 0xDFFFFFFFu; UPD(0x0C0968EAu, 3);  /* 0C0968E8 mov.l @(disp,pc),Rn */
	IF(0x0C0968EAu); W8(r0 + r9, r2); UPD(0x0C0968ECu, 1);  /* 0C0968EA mov.b Rm,@(r0,Rn) */
	r3 &= r5;  /* 0C0968EC and Rm,Rn */
	W8(r10, r7); UPD(0x0C0968F0u, 2);  /* 0C0968EE mov.b Rm,@Rn */
	W32(r9, r3); UPD(0x0C0968F2u, 1);  /* 0C0968F0 mov.l Rm,@Rn */
	r0 = 0xC1F616Cu; UPD(0x0C0968F4u, 1);  /* 0C0968F2 mov.l @(disp,pc),Rn */
	{ W32(r0, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C096810u, 3); goto L_0C096810; }  /* 0C0968F4 bra */
L_0C096900: BLKS(0x0C096900u);
	r10 += 0x1u;  /* 0C096900 add #imm,Rn */
	r8 = 0xC061B80u; UPD(0x0C096904u, 2);  /* 0C096902 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C096904 mov #imm,Rn */
	W8(r10, r0); UPD(0x0C096908u, 2);  /* 0C096906 mov.b Rm,@Rn */
	r5 = 0x8u;  /* 0C096908 mov #imm,Rn */
	IF(0x0C09690Au); { u32 t_ = r8; PR = 0x0C09690Eu; r10 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C061B80, 0x0C061B80u, 0x0C09690Eu); }  /* 0C09690A jsr @Rn */
L_0C09690E: BLKS(0x0C09690Eu);
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C096910u, 1);  /* 0C09690E mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C096910 add #imm,Rn */
	W8(r10, r2); UPD(0x0C096914u, 2);  /* 0C096912 mov.b Rm,@Rn */
L_0C096914: BLKS(0x0C096914u);
	{ IF(0x0C096916u); ; /* slot nop */ UPD(0x0C096810u, 3); goto L_0C096810; }  /* 0C096914 bra */
L_0C096920: BLKS(0x0C096920u);
	r10 = 0xC0A1700u; UPD(0x0C096922u, 1);  /* 0C096920 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C096924u, 1);  /* 0C096922 mov.w @(disp,pc),Rn */
	IF(0x0C096924u); { u32 t_ = r10; PR = 0x0C096928u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C096928u); }  /* 0C096924 jsr @Rn */
L_0C096928: BLKS(0x0C096928u);
	r0 = 0xC0A1590u; UPD(0x0C09692Au, 1);  /* 0C096928 mov.l @(disp,pc),Rn */
	r10 = 0xC26CD40u; UPD(0x0C09692Cu, 1);  /* 0C09692A mov.l @(disp,pc),Rn */
	IF(0x0C09692Cu); { u32 t_ = r0; PR = 0x0C096930u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C096930u); }  /* 0C09692C jsr @Rn */
L_0C096930: BLKS(0x0C096930u);
	r4 = 0xC1F616Cu; UPD(0x0C096932u, 1);  /* 0C096930 mov.l @(disp,pc),Rn */
	IF(0x0C096932u); MACL = r8 * r9;  /* 0C096932 mul.l Rm,Rn */
	r3 = R32(r4); UPD(0x0C096936u, 3);  /* 0C096934 mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C096936 add #imm,Rn */
	W32(r4, r3); UPD(0x0C09693Au, 2);  /* 0C096938 mov.l Rm,@Rn */
	IF(0x0C09693Au); r3 = MACL;  /* 0C09693A sts macl,Rn */
	r3 += r10;  /* 0C09693C add Rm,Rn */
	r3 += 0x3Cu;  /* 0C09693E add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C096942u, 4);  /* 0C096940 mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C096942 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09694Cu, 4); goto L_0C09694C; } goto L_0C096948; }  /* 0C096944 bf/s */
L_0C096948: BLKS(0x0C096948u);
	{ IF(0x0C09694Au); ; /* slot nop */ UPD(0x0C096C00u, 4); goto L_0C096C00; }  /* 0C096948 bra */
L_0C09694C: BLKS(0x0C09694Cu);
	r0 = 0xA0u; UPD(0x0C09694Eu, 1);  /* 0C09694C mov.w @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C09694E mov #imm,Rn */
	IF(0x0C096950u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C096952u, 2);  /* 0C096950 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C096952 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C096954 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C096914u, 5); goto L_0C096914; }  /* 0C096956 bt */
L_0C096958: BLKS(0x0C096958u);
	r0 = 0xC096998u;  /* 0C096958 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09695A add Rm,Rn */
	IF(0x0C09695Cu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09695Eu, 3);  /* 0C09695C mov.w @(r0,Rm),Rn */
	IF(0x0C09695Eu); { u32 tv_ = (r9 + 0x0C096962u); u32 t_ = PHYS(tv_); IF(0x0C096960u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0969B0u: goto L_0C0969B0; case 0x0C0969F0u: goto L_0C0969F0; case 0x0C096A20u: goto L_0C096A20; case 0x0C096A50u: goto L_0C096A50; case 0x0C096A80u: goto L_0C096A80; case 0x0C096AB0u: goto L_0C096AB0; case 0x0C096AE0u: goto L_0C096AE0; case 0x0C096B10u: goto L_0C096B10; case 0x0C096B50u: goto L_0C096B50; case 0x0C096B80u: goto L_0C096B80; case 0x0C096BB0u: goto L_0C096BB0; default: JUMPD(tv_); } }  /* 0C09695E braf Rn */
L_0C0969B0: BLKS(0x0C0969B0u);
	r4 = 0xB4u; UPD(0x0C0969B2u, 1);  /* 0C0969B0 mov.w @(disp,pc),Rn */
	IF(0x0C0969B2u); MACL = r8 * r4;  /* 0C0969B2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0969B6u, 3);  /* 0C0969B4 mov.l @(disp,pc),Rn */
	IF(0x0C0969B6u); r3 = MACL;  /* 0C0969B6 sts macl,Rn */
	r3 += r2;  /* 0C0969B8 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C0969BCu, 3);  /* 0C0969BA mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0969BC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0969C0u, 2);  /* 0C0969BE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0969C0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0969C2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C0969C4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096914u, 6); goto L_0C096914; } UPD(0x0C0969CAu, 1); goto L_0C0969CA; }  /* 0C0969C6 bf/s */
L_0C0969CA: BLKS(0x0C0969CAu);
	r0 = 0x0u;  /* 0C0969CA mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0969CEu, 2);  /* 0C0969CC mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C0969D0u, 1);  /* 0C0969CE mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0969D0 add Rm,Rn */
	r1 = r2;  /* 0C0969D2 mov Rm,Rn */
	r1 += 0x2u;  /* 0C0969D4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0969D8u, 4);  /* 0C0969D6 mov.b @Rm,Rn */
	r0 |= 0x3u;  /* 0C0969D8 or #imm,r0 */
	UPD(0x0C0969DAu, 1);
L_0C0969DA: BLKS(0x0C0969DAu);
	W8(r1, r0); UPD(0x0C0969DCu, 1);  /* 0C0969DA mov.b Rm,@Rn */
L_0C0969DC: BLKS(0x0C0969DCu);
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C0969DEu, 1);  /* 0C0969DC mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0969DE add #imm,Rn */
	W8(r2, r10); UPD(0x0C0969E2u, 2);  /* 0C0969E0 mov.b Rm,@Rn */
L_0C0969E2: BLKS(0x0C0969E2u);
	{ IF(0x0C0969E4u); ; /* slot nop */ UPD(0x0C096810u, 3); goto L_0C096810; }  /* 0C0969E2 bra */
L_0C0969F0: BLKS(0x0C0969F0u);
	r3 = 0xB4u; UPD(0x0C0969F2u, 1);  /* 0C0969F0 mov.w @(disp,pc),Rn */
	IF(0x0C0969F2u); MACL = r8 * r3;  /* 0C0969F2 mul.l Rm,Rn */
	r7 = 0x99u; UPD(0x0C0969F6u, 3);  /* 0C0969F4 mov.w @(disp,pc),Rn */
	r8 = 0xC26CD40u; UPD(0x0C0969F8u, 1);  /* 0C0969F6 mov.l @(disp,pc),Rn */
	IF(0x0C0969F8u); r3 = MACL;  /* 0C0969F8 sts macl,Rn */
	r3 += r8;  /* 0C0969FA add Rm,Rn */
	r7 += r3;  /* 0C0969FC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C096A00u, 4);  /* 0C0969FE mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C096A02u, 1);  /* 0C096A00 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C096A02 add #imm,Rn */
	r10 = r6 & 0xFF;  /* 0C096A04 extu.b Rm,Rn */
	T = r10 == r2;  /* 0C096A06 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0969E2u, 6); goto L_0C0969E2; } UPD(0x0C096A0Cu, 1); goto L_0C096A0C; }  /* 0C096A08 bf/s */
L_0C096A0C: BLKS(0x0C096A0Cu);
	r2 += 0xFFFFFFB0u;  /* 0C096A0C add #imm,Rn */
	r2 += r3;  /* 0C096A0E add Rm,Rn */
	r1 = r2;  /* 0C096A10 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096A12 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096A16u, 5);  /* 0C096A14 mov.b @Rm,Rn */
	r0 &= 0xFCu;  /* 0C096A16 and #imm,r0 */
	UPD(0x0C096A18u, 1);
L_0C096A18: BLKS(0x0C096A18u);
	W8(r1, r0); UPD(0x0C096A1Au, 1);  /* 0C096A18 mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C096A1A mov #imm,Rn */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0969DCu, 4); goto L_0C0969DC; }  /* 0C096A1C bra */
L_0C096A20: BLKS(0x0C096A20u);
	r9 = 0xB4u; UPD(0x0C096A22u, 1);  /* 0C096A20 mov.w @(disp,pc),Rn */
	IF(0x0C096A22u); MACL = r8 * r9;  /* 0C096A22 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096A26u, 3);  /* 0C096A24 mov.l @(disp,pc),Rn */
	IF(0x0C096A26u); r3 = MACL;  /* 0C096A26 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C096A2Au, 2);  /* 0C096A28 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C096A2A add Rm,Rn */
	r2 += r3;  /* 0C096A2C add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C096A30u, 3);  /* 0C096A2E mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C096A30 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C096A32 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C096A34 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0969E2u, 6); goto L_0C0969E2; } UPD(0x0C096A3Au, 1); goto L_0C096A3A; }  /* 0C096A36 bf/s */
L_0C096A3A: BLKS(0x0C096A3Au);
	r4 = 0x0u;  /* 0C096A3A mov #imm,Rn */
	W8(r2, r4); UPD(0x0C096A3Eu, 2);  /* 0C096A3C mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C096A40u, 1);  /* 0C096A3E mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C096A40 add Rm,Rn */
	r1 = r2;  /* 0C096A42 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096A44 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096A48u, 4);  /* 0C096A46 mov.b @Rm,Rn */
	{ r0 |= 0xCu; /* slot or #imm,r0 */ UPD(0x0C0969DAu, 3); goto L_0C0969DA; }  /* 0C096A48 bra */
L_0C096A50: BLKS(0x0C096A50u);
	r6 = 0xB4u; UPD(0x0C096A52u, 1);  /* 0C096A50 mov.w @(disp,pc),Rn */
	IF(0x0C096A52u); MACL = r8 * r6;  /* 0C096A52 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C096A56u, 3);  /* 0C096A54 mov.l @(disp,pc),Rn */
	IF(0x0C096A56u); r3 = MACL;  /* 0C096A56 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C096A5Au, 2);  /* 0C096A58 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C096A5A add Rm,Rn */
	r7 += r3;  /* 0C096A5C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C096A60u, 3);  /* 0C096A5E mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C096A60 add #imm,Rn */
	W8(r7, r2); UPD(0x0C096A64u, 2);  /* 0C096A62 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C096A64 extu.b Rm,Rn */
	r2 = 0xF0u; UPD(0x0C096A68u, 2);  /* 0C096A66 mov.w @(disp,pc),Rn */
	T = r0 == r2;  /* 0C096A68 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0969E2u, 4); goto L_0C0969E2; }  /* 0C096A6A bf */
L_0C096A6C: BLKS(0x0C096A6Cu);
	r2 += 0xFFFFFFB0u;  /* 0C096A6C add #imm,Rn */
	r2 += r3;  /* 0C096A6E add Rm,Rn */
	r1 = r2;  /* 0C096A70 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096A72 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096A76u, 5);  /* 0C096A74 mov.b @Rm,Rn */
	{ r0 &= 0xF3u; /* slot and #imm,r0 */ UPD(0x0C096A18u, 3); goto L_0C096A18; }  /* 0C096A76 bra */
L_0C096A80: BLKS(0x0C096A80u);
	r3 = 0xB4u; UPD(0x0C096A82u, 1);  /* 0C096A80 mov.w @(disp,pc),Rn */
	IF(0x0C096A82u); MACL = r8 * r3;  /* 0C096A82 mul.l Rm,Rn */
	r2 = 0x99u; UPD(0x0C096A86u, 3);  /* 0C096A84 mov.w @(disp,pc),Rn */
	r8 = 0xC26CD40u; UPD(0x0C096A88u, 1);  /* 0C096A86 mov.l @(disp,pc),Rn */
	IF(0x0C096A88u); r3 = MACL;  /* 0C096A88 sts macl,Rn */
	r3 += r8;  /* 0C096A8A add Rm,Rn */
	r2 += r3;  /* 0C096A8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C096A90u, 4);  /* 0C096A8E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C096A90 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C096A92 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C096A94 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0969E2u, 6); goto L_0C0969E2; } UPD(0x0C096A9Au, 1); goto L_0C096A9A; }  /* 0C096A96 bf/s */
L_0C096A9A: BLKS(0x0C096A9Au);
	r5 = 0x0u;  /* 0C096A9A mov #imm,Rn */
	W8(r2, r5); UPD(0x0C096A9Eu, 2);  /* 0C096A9C mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C096AA0u, 1);  /* 0C096A9E mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C096AA0 add Rm,Rn */
	r1 = r2;  /* 0C096AA2 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096AA4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096AA8u, 4);  /* 0C096AA6 mov.b @Rm,Rn */
	{ r0 |= 0x30u; /* slot or #imm,r0 */ UPD(0x0C0969DAu, 3); goto L_0C0969DA; }  /* 0C096AA8 bra */
L_0C096AB0: BLKS(0x0C096AB0u);
	r0 = 0xB4u; UPD(0x0C096AB2u, 1);  /* 0C096AB0 mov.w @(disp,pc),Rn */
	IF(0x0C096AB2u); MACL = r8 * r0;  /* 0C096AB2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096AB6u, 3);  /* 0C096AB4 mov.l @(disp,pc),Rn */
	IF(0x0C096AB6u); r3 = MACL;  /* 0C096AB6 sts macl,Rn */
	r3 += r7;  /* 0C096AB8 add Rm,Rn */
	r7 = 0x99u; UPD(0x0C096ABCu, 3);  /* 0C096ABA mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C096ABC add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C096AC0u, 2);  /* 0C096ABE mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C096AC2u, 1);  /* 0C096AC0 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C096AC2 add #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C096AC4 extu.b Rm,Rn */
	T = r9 == r2;  /* 0C096AC6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096B9Cu, 6); goto L_0C096B9C; } UPD(0x0C096ACCu, 1); goto L_0C096ACC; }  /* 0C096AC8 bf/s */
L_0C096ACC: BLKS(0x0C096ACCu);
	r2 += 0xFFFFFFB0u;  /* 0C096ACC add #imm,Rn */
	r2 += r3;  /* 0C096ACE add Rm,Rn */
	r1 = r2;  /* 0C096AD0 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096AD2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096AD6u, 5);  /* 0C096AD4 mov.b @Rm,Rn */
	{ r0 &= 0xCFu; /* slot and #imm,r0 */ UPD(0x0C096A18u, 3); goto L_0C096A18; }  /* 0C096AD6 bra */
L_0C096AE0: BLKS(0x0C096AE0u);
	r6 = 0xB4u; UPD(0x0C096AE2u, 1);  /* 0C096AE0 mov.w @(disp,pc),Rn */
	IF(0x0C096AE2u); MACL = r8 * r6;  /* 0C096AE2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C096AE6u, 3);  /* 0C096AE4 mov.l @(disp,pc),Rn */
	IF(0x0C096AE6u); r3 = MACL;  /* 0C096AE6 sts macl,Rn */
	r3 += r2;  /* 0C096AE8 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C096AECu, 3);  /* 0C096AEA mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C096AEC add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C096AF0u, 2);  /* 0C096AEE mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C096AF0 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C096AF2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C096AF4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096B9Cu, 6); goto L_0C096B9C; } UPD(0x0C096AFAu, 1); goto L_0C096AFA; }  /* 0C096AF6 bf/s */
L_0C096AFA: BLKS(0x0C096AFAu);
	r8 = 0x0u;  /* 0C096AFA mov #imm,Rn */
	W8(r2, r8); UPD(0x0C096AFEu, 2);  /* 0C096AFC mov.b Rm,@Rn */
	r2 = 0xA0u; UPD(0x0C096B00u, 1);  /* 0C096AFE mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C096B00 add Rm,Rn */
	r1 = r2;  /* 0C096B02 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096B04 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096B08u, 4);  /* 0C096B06 mov.b @Rm,Rn */
	{ r0 |= 0x40u; /* slot or #imm,r0 */ UPD(0x0C0969DAu, 3); goto L_0C0969DA; }  /* 0C096B08 bra */
L_0C096B10: BLKS(0x0C096B10u);
	r3 = 0xB4u; UPD(0x0C096B12u, 1);  /* 0C096B10 mov.w @(disp,pc),Rn */
	IF(0x0C096B12u); MACL = r8 * r3;  /* 0C096B12 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C096B16u, 3);  /* 0C096B14 mov.l @(disp,pc),Rn */
	IF(0x0C096B16u); r3 = MACL;  /* 0C096B16 sts macl,Rn */
	r7 = 0x99u; UPD(0x0C096B1Au, 2);  /* 0C096B18 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C096B1A add Rm,Rn */
	r7 += r3;  /* 0C096B1C add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C096B20u, 3);  /* 0C096B1E mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C096B22u, 1);  /* 0C096B20 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C096B22 add #imm,Rn */
	r5 = r9 & 0xFF;  /* 0C096B24 extu.b Rm,Rn */
	T = r5 == r2;  /* 0C096B26 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r7, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096B9Cu, 6); goto L_0C096B9C; } UPD(0x0C096B2Cu, 1); goto L_0C096B2C; }  /* 0C096B28 bf/s */
L_0C096B2C: BLKS(0x0C096B2Cu);
	r2 += 0xFFFFFFB0u;  /* 0C096B2C add #imm,Rn */
	r2 += r3;  /* 0C096B2E add Rm,Rn */
	r1 = r2;  /* 0C096B30 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096B32 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096B36u, 5);  /* 0C096B34 mov.b @Rm,Rn */
	{ r0 &= 0xBFu; /* slot and #imm,r0 */ UPD(0x0C096A18u, 3); goto L_0C096A18; }  /* 0C096B36 bra */
L_0C096B50: BLKS(0x0C096B50u);
	r0 = 0xB4u; UPD(0x0C096B52u, 1);  /* 0C096B50 mov.w @(disp,pc),Rn */
	IF(0x0C096B52u); MACL = r8 * r0;  /* 0C096B52 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096B56u, 3);  /* 0C096B54 mov.l @(disp,pc),Rn */
	IF(0x0C096B56u); r2 = MACL;  /* 0C096B56 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C096B5Au, 2);  /* 0C096B58 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C096B5A add Rm,Rn */
	r3 += r2;  /* 0C096B5C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C096B60u, 3);  /* 0C096B5E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C096B60 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C096B62 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C096B64 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096B9Cu, 6); goto L_0C096B9C; } UPD(0x0C096B6Au, 1); goto L_0C096B6A; }  /* 0C096B66 bf/s */
L_0C096B6A: BLKS(0x0C096B6Au);
	r5 = 0x0u;  /* 0C096B6A mov #imm,Rn */
	W8(r3, r5); UPD(0x0C096B6Eu, 2);  /* 0C096B6C mov.b Rm,@Rn */
	r8 = 0xFFFFFF80u;  /* 0C096B6E mov #imm,Rn */
	r3 = 0xA0u; UPD(0x0C096B72u, 2);  /* 0C096B70 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C096B72 add Rm,Rn */
	r10 = r3;  /* 0C096B74 mov Rm,Rn */
	r10 += 0x2u;  /* 0C096B76 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C096B7Au, 4);  /* 0C096B78 mov.b @Rm,Rn */
	r6 |= r8;  /* 0C096B7A or Rm,Rn */
	{ W8(r10, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C096808u, 4); goto L_0C096808; }  /* 0C096B7C bra */
L_0C096B80: BLKS(0x0C096B80u);
	r3 = 0xB4u; UPD(0x0C096B82u, 1);  /* 0C096B80 mov.w @(disp,pc),Rn */
	IF(0x0C096B82u); MACL = r8 * r3;  /* 0C096B82 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096B86u, 3);  /* 0C096B84 mov.l @(disp,pc),Rn */
	IF(0x0C096B86u); r3 = MACL;  /* 0C096B86 sts macl,Rn */
	r3 += r7;  /* 0C096B88 add Rm,Rn */
	r7 = 0x99u; UPD(0x0C096B8Cu, 3);  /* 0C096B8A mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C096B8C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C096B90u, 2);  /* 0C096B8E mov.b @Rm,Rn */
	r2 = 0xF0u; UPD(0x0C096B92u, 1);  /* 0C096B90 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C096B92 add #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C096B94 extu.b Rm,Rn */
	T = r9 == r2;  /* 0C096B96 cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096BA0u, 6); goto L_0C096BA0; } UPD(0x0C096B9Cu, 1); goto L_0C096B9C; }  /* 0C096B98 bt/s */
L_0C096B9C: BLKS(0x0C096B9Cu);
	{ IF(0x0C096B9Eu); ; /* slot nop */ UPD(0x0C096810u, 3); goto L_0C096810; }  /* 0C096B9C bra */
L_0C096BA0: BLKS(0x0C096BA0u);
	r2 += 0xFFFFFFB0u;  /* 0C096BA0 add #imm,Rn */
	r2 += r3;  /* 0C096BA2 add Rm,Rn */
	r1 = r2;  /* 0C096BA4 mov Rm,Rn */
	r1 += 0x2u;  /* 0C096BA6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C096BAAu, 5);  /* 0C096BA8 mov.b @Rm,Rn */
	{ r0 &= 0x7Fu; /* slot and #imm,r0 */ UPD(0x0C096A18u, 3); goto L_0C096A18; }  /* 0C096BAA bra */
L_0C096BB0: BLKS(0x0C096BB0u);
	r5 = 0xB4u; UPD(0x0C096BB2u, 1);  /* 0C096BB0 mov.w @(disp,pc),Rn */
	IF(0x0C096BB2u); MACL = r8 * r5;  /* 0C096BB2 mul.l Rm,Rn */
	r1 = 0x99u; UPD(0x0C096BB6u, 3);  /* 0C096BB4 mov.w @(disp,pc),Rn */
	r8 = 0xC26CD40u; UPD(0x0C096BB8u, 1);  /* 0C096BB6 mov.l @(disp,pc),Rn */
	IF(0x0C096BB8u); r3 = MACL;  /* 0C096BB8 sts macl,Rn */
	r3 += r8;  /* 0C096BBA add Rm,Rn */
	r1 += r3;  /* 0C096BBC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C096BC0u, 4);  /* 0C096BBE mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C096BC0 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C096BC2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C096BC4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096BF0u, 6); goto L_0C096BF0; } UPD(0x0C096BCAu, 1); goto L_0C096BCA; }  /* 0C096BC6 bf/s */
L_0C096BCA: BLKS(0x0C096BCAu);
	r7 = 0x0u;  /* 0C096BCA mov #imm,Rn */
	W8(r1, r7); UPD(0x0C096BCEu, 2);  /* 0C096BCC mov.b Rm,@Rn */
	r2 = 0xC1F616Cu; UPD(0x0C096BD0u, 1);  /* 0C096BCE mov.l @(disp,pc),Rn */
	r9 = 0x1C20u; UPD(0x0C096BD2u, 1);  /* 0C096BD0 mov.w @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C096BD4u, 1);  /* 0C096BD2 mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r9;  /* 0C096BD4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C096BEAu, 4); goto L_0C096BEA; }  /* 0C096BD6 bf */
L_0C096BD8: BLKS(0x0C096BD8u);
	r6 = 0xA2u; UPD(0x0C096BDAu, 1);  /* 0C096BD8 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C096BDA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C096BDEu, 2);  /* 0C096BDC mov.b @Rm,Rn */
	r0 |= 0x7Fu;  /* 0C096BDE or #imm,r0 */
	W8(r6, r0); UPD(0x0C096BE2u, 2);  /* 0C096BE0 mov.b Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C096BE4u, 1);  /* 0C096BE2 mov.w @(disp,pc),Rn */
	IF(0x0C096BE4u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C096BE6u, 1);  /* 0C096BE4 mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C096BE6 add #imm,Rn */
	IF(0x0C096BE8u); W8(r0 + r3, r10); UPD(0x0C096BEAu, 2);  /* 0C096BE8 mov.b Rm,@(r0,Rn) */
L_0C096BEA: BLKS(0x0C096BEAu);
	r0 = 0xA0u; UPD(0x0C096BECu, 1);  /* 0C096BEA mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C096BEC add Rm,Rn */
	W8(r3, r7); UPD(0x0C096BF0u, 2);  /* 0C096BEE mov.b Rm,@Rn */
L_0C096BF0: BLKS(0x0C096BF0u);
	{ IF(0x0C096BF2u); ; /* slot nop */ UPD(0x0C096810u, 3); goto L_0C096810; }  /* 0C096BF0 bra */
L_0C096C00: BLKS(0x0C096C00u);
	r0 = 0x9Fu; UPD(0x0C096C02u, 1);  /* 0C096C00 mov.w @(disp,pc),Rn */
	IF(0x0C096C02u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C096C04u, 1);  /* 0C096C02 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C096C04 add #imm,Rn */
	IF(0x0C096C06u); W8(r0 + r3, r8); UPD(0x0C096C08u, 2);  /* 0C096C06 mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C096C08 add #imm,Rn */
	IF(0x0C096C0Au); W8(r0 + r3, r7); UPD(0x0C096C0Cu, 2);  /* 0C096C0A mov.b Rm,@(r0,Rn) */
	r6 = 0xC7C1FD0u; UPD(0x0C096C0Eu, 1);  /* 0C096C0C mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C096C0E mov Rm,Rn */
	IF(0x0C096C10u); PR = R32(r15); r15 += 4; UPD(0x0C096C12u, 2);  /* 0C096C10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C096C14u, 1);  /* 0C096C12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096C16u, 1);  /* 0C096C14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C096C18u, 1);  /* 0C096C16 mov.l @Rm+,Rn */
	IF(0x0C096C18u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFCF0u: TAIL(f_0C0AFCF0); case 0x0C7C1FD0u: TAIL(f_0C7C1FD0); default: JUMPD(tv_); } }  /* 0C096C18 jmp @Rn */
L_0C096C20: BLKS(0x0C096C20u);
	r9 = 0xC0A1700u; UPD(0x0C096C22u, 1);  /* 0C096C20 mov.l @(disp,pc),Rn */
	IF(0x0C096C22u); { u32 t_ = r9; PR = 0x0C096C26u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C096C26u); }  /* 0C096C22 jsr @Rn */
L_0C096C26: BLKS(0x0C096C26u);
	r3 = 0xB4u; UPD(0x0C096C28u, 1);  /* 0C096C26 mov.w @(disp,pc),Rn */
	IF(0x0C096C28u); MACL = r8 * r3;  /* 0C096C28 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096C2Cu, 3);  /* 0C096C2A mov.l @(disp,pc),Rn */
	IF(0x0C096C2Cu); r3 = MACL;  /* 0C096C2C sts macl,Rn */
	r2 = 0xA0u; UPD(0x0C096C30u, 2);  /* 0C096C2E mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C096C30 add Rm,Rn */
	r2 += r3;  /* 0C096C32 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C096C36u, 3);  /* 0C096C34 mov.b @Rm,Rn */
	r7 = r6 & 0xFF;  /* 0C096C36 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C096C38 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C096C52u, 5); goto L_0C096C52; } goto L_0C096C3E; }  /* 0C096C3A bf/s */
L_0C096C3E: BLKS(0x0C096C3Eu);
	r5 += 0x1u;  /* 0C096C3E add #imm,Rn */
	r2 += 0x2u;  /* 0C096C40 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C096C44u, 4);  /* 0C096C42 mov.b @Rm,Rn */
	r8 = r6;  /* 0C096C44 mov Rm,Rn */
	W8(r2, r7); UPD(0x0C096C48u, 2);  /* 0C096C46 mov.b Rm,@Rn */
	r0 |= 0x1u;  /* 0C096C48 or #imm,r0 */
	r2 += 0xFFFFFFFEu;  /* 0C096C4A add #imm,Rn */
	r8 += 0x1u;  /* 0C096C4C add #imm,Rn */
	W8(r5, r0); UPD(0x0C096C50u, 4);  /* 0C096C4E mov.b Rm,@Rn */
	W8(r2, r8); UPD(0x0C096C52u, 1);  /* 0C096C50 mov.b Rm,@Rn */
L_0C096C52: BLKS(0x0C096C52u);
	r1 = R32(r3 + 0x24u); UPD(0x0C096C54u, 1);  /* 0C096C52 mov.l @(disp,Rm),Rn */
	r4 = 0xFF800000u; UPD(0x0C096C56u, 1);  /* 0C096C54 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C096C56 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C096BF0u, 4); goto L_0C096BF0; }  /* 0C096C58 bt */
L_0C096C5A: BLKS(0x0C096C5Au);
	r2 = 0x0u;  /* 0C096C5A mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C096810u, 4); goto L_0C096810; }  /* 0C096C5C bra */
}

void f_0C096C90(sh3_t *c)
{
	LOCALS;
L_0C096C90: BLKS(0x0C096C90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C096C92u, 1);  /* 0C096C90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C096C94u, 1);  /* 0C096C92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C096C96u, 1);  /* 0C096C94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C096C98u, 1);  /* 0C096C96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C096C9Au, 1);  /* 0C096C98 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C096C9Cu, 1);  /* 0C096C9A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C096C9C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C096CA0u, 2);  /* 0C096C9E mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C096CA2u, 1);  /* 0C096CA0 mov.w @(disp,pc),Rn */
	IF(0x0C096CA2u); r15 -= 4; W32(r15, PR); UPD(0x0C096CA4u, 1);  /* 0C096CA2 sts.l pr,@-Rn */
	IF(0x0C096CA4u); MACL = r12 * r2;  /* 0C096CA4 mul.l Rm,Rn */
	r4 = 0xC1F6170u; UPD(0x0C096CA8u, 3);  /* 0C096CA6 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C096CAAu, 1);  /* 0C096CA8 mov.l @Rm,Rn */
	IF(0x0C096CAAu); r2 = MACL;  /* 0C096CAA sts macl,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096CAEu, 2);  /* 0C096CAC mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C096CAE add #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C096CB2u, 2);  /* 0C096CB0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C096CB2 add Rm,Rn */
	W32(r4, r5); UPD(0x0C096CB6u, 2);  /* 0C096CB4 mov.l Rm,@Rn */
	r2 += r0;  /* 0C096CB6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C096CBAu, 2);  /* 0C096CB8 mov.b @Rm,Rn */
	r0 = 0x4u;  /* 0C096CBA mov #imm,Rn */
	r3 = r7 & 0xFF;  /* 0C096CBC extu.b Rm,Rn */
	T = r3 > r0;  /* 0C096CBE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C096CC8u, 6); goto L_0C096CC8; } goto L_0C096CC4; }  /* 0C096CC0 bf/s */
L_0C096CC4: BLKS(0x0C096CC4u);
	{ r6 = r7; /* slot mov Rm,Rn */ UPD(0x0C0972C0u, 4); goto L_0C0972C0; }  /* 0C096CC4 bra */
L_0C096CC8: BLKS(0x0C096CC8u);
	r0 = 0xC096CE0u;  /* 0C096CC8 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C096CCA add Rm,Rn */
	IF(0x0C096CCCu); r6 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C096CCEu, 3);  /* 0C096CCC mov.w @(r0,Rm),Rn */
	IF(0x0C096CCEu); { u32 tv_ = (r6 + 0x0C096CD2u); u32 t_ = PHYS(tv_); IF(0x0C096CD0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C096CF0u: goto L_0C096CF0; case 0x0C096DB0u: goto L_0C096DB0; case 0x0C096E10u: goto L_0C096E10; case 0x0C096E50u: goto L_0C096E50; case 0x0C0971E0u: goto L_0C0971E0; default: JUMPD(tv_); } }  /* 0C096CCE braf Rn */
L_0C096CF0: BLKS(0x0C096CF0u);
	r8 = 0xC0A0540u; UPD(0x0C096CF2u, 1);  /* 0C096CF0 mov.l @(disp,pc),Rn */
	IF(0x0C096CF2u); { u32 t_ = r8; PR = 0x0C096CF6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C096CF6u); }  /* 0C096CF2 jsr @Rn */
L_0C096CF6: BLKS(0x0C096CF6u);
	IF(0x0C096CF6u); T = (s32)r0 >= 0;  /* 0C096CF6 cmp/pz Rn */
	if (!T) { UPD(0x0C096DA0u, 4); goto L_0C096DA0; }  /* 0C096CF8 bf */
L_0C096CFA: BLKS(0x0C096CFAu);
	r5 = 0xB4u; UPD(0x0C096CFCu, 1);  /* 0C096CFA mov.w @(disp,pc),Rn */
	IF(0x0C096CFCu); MACL = r12 * r5;  /* 0C096CFC mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C096D00u, 3);  /* 0C096CFE mov.l @(disp,pc),Rn */
	IF(0x0C096D00u); r4 = MACL;  /* 0C096D00 sts macl,Rn */
	IF(0x0C096D02u); MACL = r0 * r5;  /* 0C096D02 mul.l Rm,Rn */
	r4 += r8;  /* 0C096D04 add Rm,Rn */
	r11 = R32(r4 + 0x2Cu); UPD(0x0C096D08u, 5);  /* 0C096D06 mov.l @(disp,Rm),Rn */
	IF(0x0C096D08u); r7 = MACL;  /* 0C096D08 sts macl,Rn */
	r7 += r8;  /* 0C096D0A add Rm,Rn */
	r10 = R32(r7 + 0x24u); UPD(0x0C096D0Eu, 3);  /* 0C096D0C mov.l @(disp,Rm),Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C096D10u, 1);  /* 0C096D0E mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C096D10 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C096D14u, 2);  /* 0C096D12 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C096D14 add Rm,Rn */
	W32(r4 + 0x24u, r10); UPD(0x0C096D18u, 2);  /* 0C096D16 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r9); UPD(0x0C096D1Au, 1);  /* 0C096D18 mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C096D1A add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C096D1Eu, 2);  /* 0C096D1C mov.w @Rm,Rn */
	IF(0x0C096D1Eu); MACL = r6 * r5;  /* 0C096D1E mul.l Rm,Rn */
	r4 += 0xFFFFFF82u;  /* 0C096D20 add #imm,Rn */
	r3 = 0xA0u; UPD(0x0C096D24u, 4);  /* 0C096D22 mov.w @(disp,pc),Rn */
	r13 = r4;  /* 0C096D24 mov Rm,Rn */
	IF(0x0C096D26u); r11 = MACL;  /* 0C096D26 sts macl,Rn */
	r13 += r3;  /* 0C096D28 add Rm,Rn */
	r11 += r8;  /* 0C096D2A add Rm,Rn */
	r3 += r11;  /* 0C096D2C add Rm,Rn */
	r9 = r3;  /* 0C096D2E mov Rm,Rn */
	r9 += 0x1u;  /* 0C096D30 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C096D34u, 8);  /* 0C096D32 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C096D34 add #imm,Rn */
	W8(r13, r2); UPD(0x0C096D38u, 2);  /* 0C096D36 mov.b Rm,@Rn */
	r3 += 0x2u;  /* 0C096D38 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C096D3Cu, 2);  /* 0C096D3A mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C096D3C add #imm,Rn */
	r12 = 0xA4u; UPD(0x0C096D40u, 2);  /* 0C096D3E mov.w @(disp,pc),Rn */
	r7 = r4;  /* 0C096D40 mov Rm,Rn */
	W8(r13, r0); UPD(0x0C096D44u, 2);  /* 0C096D42 mov.b Rm,@Rn */
	r11 += r12;  /* 0C096D44 add Rm,Rn */
	r11 += 0x1u;  /* 0C096D46 add #imm,Rn */
	r7 += r12;  /* 0C096D48 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C096D4Cu, 4);  /* 0C096D4A mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C096D4C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C096D50u, 2);  /* 0C096D4E mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C096D50 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C096D52 tst Rm,Rn */
	{ u32 c_ = !T; W8(r7, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096D70u, 5); goto L_0C096D70; } UPD(0x0C096D58u, 1); goto L_0C096D58; }  /* 0C096D54 bf/s */
L_0C096D58: BLKS(0x0C096D58u);
	r15 = r14;  /* 0C096D58 mov Rm,Rn */
	IF(0x0C096D5Au); PR = R32(r15); r15 += 4; UPD(0x0C096D5Cu, 2);  /* 0C096D5A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C096D5Eu, 1);  /* 0C096D5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C096D60u, 1);  /* 0C096D5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C096D62u, 1);  /* 0C096D60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C096D64u, 1);  /* 0C096D62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096D66u, 1);  /* 0C096D64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C096D68u, 1);  /* 0C096D66 mov.l @Rm+,Rn */
	IF(0x0C096D68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C096D68 rts */
L_0C096D70: BLKS(0x0C096D70u);
	r0 = 0x9Fu; UPD(0x0C096D72u, 1);  /* 0C096D70 mov.w @(disp,pc),Rn */
	r13 = R32(r4); UPD(0x0C096D74u, 1);  /* 0C096D72 mov.l @Rm,Rn */
	IF(0x0C096D74u); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C096D76u, 1);  /* 0C096D74 mov.b @(r0,Rm),Rn */
	r2 = 0xFFFFBFFFu; UPD(0x0C096D78u, 1);  /* 0C096D76 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C096D78 add #imm,Rn */
	r3 = 0x100u; UPD(0x0C096D7Cu, 2);  /* 0C096D7A mov.w @(disp,pc),Rn */
	r13 &= r2;  /* 0C096D7C and Rm,Rn */
	IF(0x0C096D7Eu); W8(r0 + r4, r12); UPD(0x0C096D80u, 2);  /* 0C096D7E mov.b Rm,@(r0,Rn) */
	r13 |= r3;  /* 0C096D80 or Rm,Rn */
	W32(r4, r13); UPD(0x0C096D84u, 2);  /* 0C096D82 mov.l Rm,@Rn */
	r0 = 0xC0AFC10u; UPD(0x0C096D86u, 1);  /* 0C096D84 mov.l @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C096D86 mov #imm,Rn */
	r15 = r14;  /* 0C096D88 mov Rm,Rn */
	IF(0x0C096D8Au); PR = R32(r15); r15 += 4; UPD(0x0C096D8Cu, 3);  /* 0C096D8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C096D8Eu, 1);  /* 0C096D8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C096D90u, 1);  /* 0C096D8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C096D92u, 1);  /* 0C096D90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C096D94u, 1);  /* 0C096D92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096D96u, 1);  /* 0C096D94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C096D98u, 1);  /* 0C096D96 mov.l @Rm+,Rn */
	IF(0x0C096D98u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C096D98 jmp @Rn */
L_0C096DA0: BLKS(0x0C096DA0u);
	r6 = 0xB4u; UPD(0x0C096DA2u, 1);  /* 0C096DA0 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C096DA2 mov #imm,Rn */
	IF(0x0C096DA4u); MACL = r12 * r6;  /* 0C096DA4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C096DA8u, 4);  /* 0C096DA6 mov.l @(disp,pc),Rn */
	IF(0x0C096DA8u); r0 = MACL;  /* 0C096DA8 sts macl,Rn */
	{ IF(0x0C096DACu); W32(r0 + r4, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C096D58u, 4); goto L_0C096D58; }  /* 0C096DAA bra */
L_0C096DB0: BLKS(0x0C096DB0u);
	r8 = 0xC0A0540u; UPD(0x0C096DB2u, 1);  /* 0C096DB0 mov.l @(disp,pc),Rn */
	IF(0x0C096DB2u); { u32 t_ = r8; PR = 0x0C096DB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C096DB6u); }  /* 0C096DB2 jsr @Rn */
L_0C096DB6: BLKS(0x0C096DB6u);
	IF(0x0C096DB6u); T = (s32)r0 >= 0;  /* 0C096DB6 cmp/pz Rn */
	if (!T) { UPD(0x0C096DA0u, 4); goto L_0C096DA0; }  /* 0C096DB8 bf */
L_0C096DBA: BLKS(0x0C096DBAu);
	r3 = 0xB4u; UPD(0x0C096DBCu, 1);  /* 0C096DBA mov.w @(disp,pc),Rn */
	IF(0x0C096DBCu); MACL = r12 * r3;  /* 0C096DBC mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C096DC0u, 3);  /* 0C096DBE mov.l @(disp,pc),Rn */
	IF(0x0C096DC0u); r6 = MACL;  /* 0C096DC0 sts macl,Rn */
	IF(0x0C096DC2u); MACL = r0 * r3;  /* 0C096DC2 mul.l Rm,Rn */
	r6 += r13;  /* 0C096DC4 add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C096DC8u, 5);  /* 0C096DC6 mov.l @(disp,Rm),Rn */
	IF(0x0C096DC8u); r10 = MACL;  /* 0C096DC8 sts macl,Rn */
	r10 += r13;  /* 0C096DCA add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C096DCEu, 3);  /* 0C096DCC mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C096DCE add Rm,Rn */
	r1 = 0x99u; UPD(0x0C096DD2u, 2);  /* 0C096DD0 mov.w @(disp,pc),Rn */
	r12 = R32(r6 + 0x2Cu); UPD(0x0C096DD4u, 1);  /* 0C096DD2 mov.l @(disp,Rm),Rn */
	r1 += r6;  /* 0C096DD4 add Rm,Rn */
	r2 = 0x8000u; UPD(0x0C096DD8u, 2);  /* 0C096DD6 mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C096DDAu, 1);  /* 0C096DD8 mov.l @(disp,Rm),Rn */
	r12 += r2;  /* 0C096DDA add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r1); UPD(0x0C096DDEu, 2);  /* 0C096DDC mov.b @Rm,Rn */
	r11 += r12;  /* 0C096DDE add Rm,Rn */
	r9 += 0x1u;  /* 0C096DE0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C096DE2 extu.b Rm,Rn */
	W32(r6 + 0x2Cu, r12); UPD(0x0C096DE6u, 4);  /* 0C096DE4 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x78u;  /* 0C096DE6 cmp/eq #imm,r0 */
	W32(r6 + 0x24u, r11); UPD(0x0C096DEAu, 2);  /* 0C096DE8 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r7); UPD(0x0C096DECu, 1);  /* 0C096DEA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r1, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096D58u, 3); goto L_0C096D58; } UPD(0x0C096DF0u, 1); goto L_0C096DF0; }  /* 0C096DEC bf/s */
L_0C096DF0: BLKS(0x0C096DF0u);
	r0 = 0xA0u; UPD(0x0C096DF2u, 1);  /* 0C096DF0 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C096DF2 mov #imm,Rn */
	r0 += r6;  /* 0C096DF4 add Rm,Rn */
	r0 += 0x1u;  /* 0C096DF6 add #imm,Rn */
	W8(r0, r4); UPD(0x0C096DFAu, 4);  /* 0C096DF8 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C096DFA add #imm,Rn */
	W8(r0, r4); UPD(0x0C096DFEu, 2);  /* 0C096DFC mov.b Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C096E00u, 1);  /* 0C096DFE mov.w @(disp,pc),Rn */
	IF(0x0C096E00u); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C096E02u, 1);  /* 0C096E00 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C096E02 add #imm,Rn */
	W8(r1, r4); UPD(0x0C096E06u, 2);  /* 0C096E04 mov.b Rm,@Rn */
	{ IF(0x0C096E08u); W8(r0 + r6, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C096D58u, 3); goto L_0C096D58; }  /* 0C096E06 bra */
L_0C096E10: BLKS(0x0C096E10u);
	r4 = 0xB4u; UPD(0x0C096E12u, 1);  /* 0C096E10 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C096E12 mov #imm,Rn */
	IF(0x0C096E14u); MACL = r12 * r4;  /* 0C096E14 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C096E18u, 4);  /* 0C096E16 mov.l @(disp,pc),Rn */
	IF(0x0C096E18u); r12 = MACL;  /* 0C096E18 sts macl,Rn */
	r5 = 0xC1F6170u; UPD(0x0C096E1Cu, 2);  /* 0C096E1A mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C096E1C add Rm,Rn */
	W32(r5, r8); UPD(0x0C096E20u, 2);  /* 0C096E1E mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C096E22u, 1);  /* 0C096E20 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C096E22 mov #imm,Rn */
	IF(0x0C096E24u); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C096E26u, 2);  /* 0C096E24 mov.b @(r0,Rm),Rn */
	r13 = 0xC061B80u; UPD(0x0C096E28u, 1);  /* 0C096E26 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C096E28 add #imm,Rn */
	IF(0x0C096E2Au); W8(r0 + r12, r3); UPD(0x0C096E2Cu, 2);  /* 0C096E2A mov.b Rm,@(r0,Rn) */
	r2 = 0xC1F6174u; UPD(0x0C096E2Eu, 1);  /* 0C096E2C mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C096E30u, 1);  /* 0C096E2E mov.w @(disp,pc),Rn */
	IF(0x0C096E30u); { u32 t_ = r13; PR = 0x0C096E34u; W8(r2, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C061B80, 0x0C061B80u, 0x0C096E34u); }  /* 0C096E30 jsr @Rn */
L_0C096E34: BLKS(0x0C096E34u);
	r0 = 0xB0u; UPD(0x0C096E36u, 1);  /* 0C096E34 mov.w @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C096E36 mov #imm,Rn */
	IF(0x0C096E38u); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C096E3Au, 2);  /* 0C096E38 mov.b @(r0,Rm),Rn */
	r6 = 0x1u;  /* 0C096E3A mov #imm,Rn */
	r10 = r11 & 0xFF;  /* 0C096E3C extu.b Rm,Rn */
	IF(0x0C096E3Eu); MACL = r10 * r7;  /* 0C096E3E mul.l Rm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C096E42u, 5);  /* 0C096E40 mov.l @(disp,pc),Rn */
	IF(0x0C096E42u); r9 = MACL;  /* 0C096E42 sts macl,Rn */
	r5 += r9;  /* 0C096E44 add Rm,Rn */
	{ W32(r5 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C096D58u, 5); goto L_0C096D58; }  /* 0C096E46 bra */
L_0C096E50: BLKS(0x0C096E50u);
	r11 = 0xB4u; UPD(0x0C096E52u, 1);  /* 0C096E50 mov.w @(disp,pc),Rn */
	r6 = 0xEu;  /* 0C096E52 mov #imm,Rn */
	IF(0x0C096E54u); MACL = r12 * r11;  /* 0C096E54 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096E58u, 4);  /* 0C096E56 mov.l @(disp,pc),Rn */
	IF(0x0C096E58u); r10 = MACL;  /* 0C096E58 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C096E5Cu, 2);  /* 0C096E5A mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C096E5C add Rm,Rn */
	IF(0x0C096E5Eu); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C096E60u, 2);  /* 0C096E5E mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C096E60 extu.b Rm,Rn */
	T = r2 > r6;  /* 0C096E62 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C096F34u, 5); goto L_0C096F34; }  /* 0C096E64 bt */
L_0C096E66: BLKS(0x0C096E66u);
	r0 = 0xC096EA4u;  /* 0C096E66 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C096E68 add Rm,Rn */
	IF(0x0C096E6Au); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C096E6Cu, 3);  /* 0C096E6A mov.w @(r0,Rm),Rn */
	IF(0x0C096E6Cu); { u32 tv_ = (r13 + 0x0C096E70u); u32 t_ = PHYS(tv_); IF(0x0C096E6Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C096ED0u: goto L_0C096ED0; case 0x0C096F34u: goto L_0C096F34; case 0x0C096FB0u: goto L_0C096FB0; case 0x0C097000u: goto L_0C097000; case 0x0C097020u: goto L_0C097020; case 0x0C0970D0u: goto L_0C0970D0; case 0x0C0970FAu: goto L_0C0970FA; case 0x0C097130u: goto L_0C097130; default: JUMPD(tv_); } }  /* 0C096E6C braf Rn */
L_0C096ED0: BLKS(0x0C096ED0u);
	r8 = 0xC0A9E40u; UPD(0x0C096ED2u, 1);  /* 0C096ED0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C096ED2 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C096ED4 mov #imm,Rn */
	IF(0x0C096ED6u); { u32 t_ = r8; PR = 0x0C096EDAu; r6 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C096EDAu); }  /* 0C096ED6 jsr @Rn */
L_0C096EDA: BLKS(0x0C096EDAu);
	T = (r0 & r0) == 0;  /* 0C096EDA tst Rm,Rn */
	if (T) { UPD(0x0C096F34u, 4); goto L_0C096F34; }  /* 0C096EDC bt */
L_0C096EDE: BLKS(0x0C096EDEu);
	r2 = 0xB4u; UPD(0x0C096EE0u, 1);  /* 0C096EDE mov.w @(disp,pc),Rn */
	IF(0x0C096EE0u); MACL = r12 * r2;  /* 0C096EE0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096EE4u, 3);  /* 0C096EE2 mov.l @(disp,pc),Rn */
	IF(0x0C096EE4u); r10 = MACL;  /* 0C096EE4 sts macl,Rn */
	r10 += r3;  /* 0C096EE6 add Rm,Rn */
	r2 += 0xFFFFFFECu;  /* 0C096EE8 add #imm,Rn */
	r2 += r10;  /* 0C096EEA add Rm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C096EEEu, 5);  /* 0C096EEC mov.l @(disp,pc),Rn */
	r13 = r2;  /* 0C096EEE mov Rm,Rn */
	r8 = r2;  /* 0C096EF0 mov Rm,Rn */
	r13 += 0x1u;  /* 0C096EF2 add #imm,Rn */
	r8 += 0x3u;  /* 0C096EF4 add #imm,Rn */
	r11 = r3;  /* 0C096EF6 mov Rm,Rn */
	UPD(0x0C096EF8u, 5);
L_0C096EF8: BLKS(0x0C096EF8u);
	IF(0x0C096EF8u); { u32 t_ = r9; PR = 0x0C096EFCu; IF(0x0C096EFAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C096EFCu); }  /* 0C096EF8 jsr @Rn */
L_0C096EFC: BLKS(0x0C096EFCu);
	r4 = 0xFFFFFFB0u;  /* 0C096EFC mov #imm,Rn */
	r0 &= r4;  /* 0C096EFE and Rm,Rn */
	W8(r8, r0); UPD(0x0C096F02u, 3);  /* 0C096F00 mov.b Rm,@Rn */
	r0 &= 0x80u;  /* 0C096F02 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C096F04 tst Rm,Rn */
	if (T) { UPD(0x0C096F70u, 5); goto L_0C096F70; }  /* 0C096F06 bt */
L_0C096F08: BLKS(0x0C096F08u);
	r7 = 0xB4u; UPD(0x0C096F0Au, 1);  /* 0C096F08 mov.w @(disp,pc),Rn */
	IF(0x0C096F0Au); MACL = r12 * r7;  /* 0C096F0A mul.l Rm,Rn */
	r7 = 0xA0u; UPD(0x0C096F0Eu, 3);  /* 0C096F0C mov.w @(disp,pc),Rn */
	IF(0x0C096F0Eu); r2 = MACL;  /* 0C096F0E sts macl,Rn */
	r2 += r11;  /* 0C096F10 add Rm,Rn */
	r2 += r7;  /* 0C096F12 add Rm,Rn */
	r5 = r2;  /* 0C096F14 mov Rm,Rn */
	r5 += 0x3u;  /* 0C096F16 add #imm,Rn */
	r2 += 0x2u;  /* 0C096F18 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C096F1Cu, 7);  /* 0C096F1A mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C096F1Eu, 1);  /* 0C096F1C mov.b @Rm,Rn */
	r6 |= r4;  /* 0C096F1E or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C096F20 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C096F24u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C096EF8u, 5); goto L_0C096EF8; } goto L_0C096F26; }  /* 0C096F22 bt/s */
L_0C096F26: BLKS(0x0C096F26u);
	r2 = 0xC26CD40u; UPD(0x0C096F28u, 2);  /* 0C096F26 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C096F28 add Rm,Rn */
	r2 += r7;  /* 0C096F2A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C096F2Eu, 3);  /* 0C096F2C mov.b @Rm,Rn */
L_0C096F2E: BLKS(0x0C096F2Eu);
	r3 += 0x1u;  /* 0C096F2E add #imm,Rn */
	W8(r2, r3); UPD(0x0C096F32u, 2);  /* 0C096F30 mov.b Rm,@Rn */
	IF(0x0C096F32u); ;  /* 0C096F32 nop */
	UPD(0x0C096F34u, 1);
L_0C096F34: BLKS(0x0C096F34u);
	r0 = 0xB4u; UPD(0x0C096F36u, 1);  /* 0C096F34 mov.w @(disp,pc),Rn */
	IF(0x0C096F36u); MACL = r12 * r0;  /* 0C096F36 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096F3Au, 3);  /* 0C096F38 mov.l @(disp,pc),Rn */
	IF(0x0C096F3Au); r12 = MACL;  /* 0C096F3A sts macl,Rn */
	r13 = 0x8Cu; UPD(0x0C096F3Eu, 2);  /* 0C096F3C mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C096F3E add Rm,Rn */
	r9 = 0x86u; UPD(0x0C096F42u, 2);  /* 0C096F40 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C096F42 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C096F46u, 2);  /* 0C096F44 mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C096F46 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C096F4Au, 2);  /* 0C096F48 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C096F4Cu, 1);  /* 0C096F4A mov.l @(disp,pc),Rn */
	IF(0x0C096F4Cu); { u32 t_ = r10; PR = 0x0C096F50u; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C096F50u); }  /* 0C096F4C jsr @Rn */
L_0C096F50: BLKS(0x0C096F50u);
	r5 = R32(r13); UPD(0x0C096F52u, 1);  /* 0C096F50 mov.l @Rm,Rn */
	W32(r12 + 0x2Cu, r0); UPD(0x0C096F54u, 1);  /* 0C096F52 mov.l Rm,@(disp,Rn) */
	IF(0x0C096F54u); { u32 t_ = r8; PR = 0x0C096F58u; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C096F58u); }  /* 0C096F54 jsr @Rn */
L_0C096F58: BLKS(0x0C096F58u);
	r11 = R32(r12 + 0x24u); UPD(0x0C096F5Au, 1);  /* 0C096F58 mov.l @(disp,Rm),Rn */
	r13 = R32(r12 + 0x28u); UPD(0x0C096F5Cu, 1);  /* 0C096F5A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C096F5Eu, 1);  /* 0C096F5C mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C096F5E add Rm,Rn */
	r11 += r5;  /* 0C096F60 add Rm,Rn */
	W32(r12 + 0x30u, r0); UPD(0x0C096F64u, 3);  /* 0C096F62 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r11); UPD(0x0C096F66u, 1);  /* 0C096F64 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C096D58u, 3); goto L_0C096D58; }  /* 0C096F66 bra */
L_0C096F70: BLKS(0x0C096F70u);
	IF(0x0C096F70u); { u32 t_ = r9; PR = 0x0C096F74u; IF(0x0C096F72u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C096F74u); }  /* 0C096F70 jsr @Rn */
L_0C096F74: BLKS(0x0C096F74u);
	r0 &= 0x40u;  /* 0C096F74 and #imm,r0 */
	IF(0x0C096F76u); { u32 t_ = r9; PR = 0x0C096F7Au; W8(r13, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C096F7Au); }  /* 0C096F76 jsr @Rn */
L_0C096F7A: BLKS(0x0C096F7Au);
	r2 = r0;  /* 0C096F7A mov Rm,Rn */
	r5 = 0x3Fu;  /* 0C096F7C mov #imm,Rn */
	r2 &= r5;  /* 0C096F7E and Rm,Rn */
	r0 = r10;  /* 0C096F80 mov Rm,Rn */
	r5 += 0x68u;  /* 0C096F82 add #imm,Rn */
	IF(0x0C096F84u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C096F86u, 6);  /* 0C096F84 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C096F86 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C096F88 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C096F8A tst Rm,Rn */
	{ u32 c_ = T; W8(r8, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C096F96u, 6); goto L_0C096F96; } UPD(0x0C096F90u, 1); goto L_0C096F90; }  /* 0C096F8C bt/s */
L_0C096F90: BLKS(0x0C096F90u);
	r0 = 0x2Au;  /* 0C096F90 mov #imm,Rn */
	r2 &= r0;  /* 0C096F92 and Rm,Rn */
	W8(r8, r2); UPD(0x0C096F96u, 3);  /* 0C096F94 mov.b Rm,@Rn */
L_0C096F96: BLKS(0x0C096F96u);
	r0 = r1;  /* 0C096F96 mov Rm,Rn */
	r0 &= 0x20u;  /* 0C096F98 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C096F9A tst Rm,Rn */
	if (T) { UPD(0x0C096F08u, 6); goto L_0C096F08; }  /* 0C096F9C bt */
L_0C096F9E: BLKS(0x0C096F9Eu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C096FA0u, 1);  /* 0C096F9E mov.b @Rm,Rn */
	r0 &= 0xD5u;  /* 0C096FA0 and #imm,r0 */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C096F08u, 4); goto L_0C096F08; }  /* 0C096FA2 bra */
L_0C096FB0: BLKS(0x0C096FB0u);
	r10 = 0xB4u; UPD(0x0C096FB2u, 1);  /* 0C096FB0 mov.w @(disp,pc),Rn */
	IF(0x0C096FB2u); MACL = r12 * r10;  /* 0C096FB2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C096FB6u, 3);  /* 0C096FB4 mov.l @(disp,pc),Rn */
	IF(0x0C096FB6u); r8 = MACL;  /* 0C096FB6 sts macl,Rn */
	r13 = 0xC050D70u; UPD(0x0C096FBAu, 2);  /* 0C096FB8 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C096FBA add Rm,Rn */
	r9 = 0xA0u; UPD(0x0C096FBEu, 2);  /* 0C096FBC mov.w @(disp,pc),Rn */
	IF(0x0C096FBEu); { u32 t_ = r13; PR = 0x0C096FC2u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C096FC2u); }  /* 0C096FBE jsr @Rn */
L_0C096FC2: BLKS(0x0C096FC2u);
	r11 = r8;  /* 0C096FC2 mov Rm,Rn */
	r0 += r9;  /* 0C096FC4 add Rm,Rn */
	r11 += 0x5Cu;  /* 0C096FC6 add #imm,Rn */
	IF(0x0C096FC8u); r0 <<= 16;  /* 0C096FC8 shll16 Rn */
	W32(r11, r0); UPD(0x0C096FCCu, 5);  /* 0C096FCA mov.l Rm,@Rn */
	r8 += 0x60u;  /* 0C096FCC add #imm,Rn */
	IF(0x0C096FCEu); { u32 t_ = r13; PR = 0x0C096FD2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C096FD2u); }  /* 0C096FCE jsr @Rn */
L_0C096FD2: BLKS(0x0C096FD2u);
	r2 = 0x1B0u; UPD(0x0C096FD4u, 1);  /* 0C096FD2 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C096FD4 add Rm,Rn */
	IF(0x0C096FD6u); r0 <<= 16;  /* 0C096FD6 shll16 Rn */
	W32(r8, r0); UPD(0x0C096FDAu, 3);  /* 0C096FD8 mov.l Rm,@Rn */
	r7 = r0;  /* 0C096FDA mov Rm,Rn */
	r6 = R32(r11); UPD(0x0C096FDEu, 2);  /* 0C096FDC mov.l @Rm,Rn */
	r8 += 0xFFFFFFA0u;  /* 0C096FDE add #imm,Rn */
	r11 = 0xC057390u; UPD(0x0C096FE2u, 2);  /* 0C096FE0 mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C096FE2 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C096FE6u, 2);  /* 0C096FE4 mov.l @(disp,Rm),Rn */
	IF(0x0C096FE6u); { u32 t_ = r11; PR = 0x0C096FEAu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C096FEAu); }  /* 0C096FE6 jsr @Rn */
L_0C096FEA: BLKS(0x0C096FEAu);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C096FECu, 1);  /* 0C096FEA mov.b @Rm,Rn */
	r13 = 0x86u; UPD(0x0C096FEEu, 1);  /* 0C096FEC mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C096FEE add #imm,Rn */
	r13 += r8;  /* 0C096FF0 add Rm,Rn */
	W16(r13, r0); UPD(0x0C096FF4u, 3);  /* 0C096FF2 mov.w Rm,@Rn */
	{ W8(r9, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C096FF4 bra */
L_0C097000: BLKS(0x0C097000u);
	r0 = 0xB4u; UPD(0x0C097002u, 1);  /* 0C097000 mov.w @(disp,pc),Rn */
	IF(0x0C097002u); MACL = r12 * r0;  /* 0C097002 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C097006u, 3);  /* 0C097004 mov.l @(disp,pc),Rn */
	IF(0x0C097006u); r8 = MACL;  /* 0C097006 sts macl,Rn */
	r8 += r9;  /* 0C097008 add Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C09700Cu, 3);  /* 0C09700A mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C09700C mov Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C097010u, 2);  /* 0C09700E mov.l @(disp,Rm),Rn */
	r11 += 0x5Cu;  /* 0C097010 add #imm,Rn */
	r9 = 0xA0u; UPD(0x0C097014u, 2);  /* 0C097012 mov.w @(disp,pc),Rn */
	r8 += 0x60u;  /* 0C097014 add #imm,Rn */
	W32(r11, r5); UPD(0x0C097018u, 2);  /* 0C097016 mov.l Rm,@Rn */
	IF(0x0C097018u); { u32 t_ = r13; PR = 0x0C09701Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09701Cu); }  /* 0C097018 jsr @Rn */
L_0C09701C: BLKS(0x0C09701Cu);
	{ IF(0x0C09701Eu); ; /* slot nop */ UPD(0x0C096FD2u, 3); goto L_0C096FD2; }  /* 0C09701C bra */
L_0C097020: BLKS(0x0C097020u);
	r4 = 0xB4u; UPD(0x0C097022u, 1);  /* 0C097020 mov.w @(disp,pc),Rn */
	IF(0x0C097022u); MACL = r12 * r4;  /* 0C097022 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097026u, 3);  /* 0C097024 mov.l @(disp,pc),Rn */
	IF(0x0C097026u); r7 = MACL;  /* 0C097026 sts macl,Rn */
	r7 += r0;  /* 0C097028 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09702Cu, 3);  /* 0C09702A mov.w @(disp,pc),Rn */
	IF(0x0C09702Cu); r3 = R32(r0 + r7); UPD(0x0C09702Eu, 1);  /* 0C09702C mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C09702E tst Rm,Rn */
	if (T) { UPD(0x0C097040u, 4); goto L_0C097040; }  /* 0C097030 bt */
L_0C097032: BLKS(0x0C097032u);
	r2 = 0xFFFFF800u; UPD(0x0C097034u, 1);  /* 0C097032 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C097034 add Rm,Rn */
	{ IF(0x0C097038u); W32(r0 + r7, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C096F34u, 4); goto L_0C096F34; }  /* 0C097036 bra */
L_0C097040: BLKS(0x0C097040u);
	r4 = 0xC1F6174u; UPD(0x0C097042u, 1);  /* 0C097040 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C097044u, 1);  /* 0C097042 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C097044 cmp/eq #imm,r0 */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097060u, 4); goto L_0C097060; } goto L_0C09704A; }  /* 0C097046 bt/s */
L_0C09704A: BLKS(0x0C09704Au);
	r8 += 0x1u;  /* 0C09704A add #imm,Rn */
	W8(r4, r8); UPD(0x0C09704Eu, 3);  /* 0C09704C mov.b Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C097050u, 1);  /* 0C09704E mov.w @(disp,pc),Rn */
	IF(0x0C097050u); r11 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C097052u, 1);  /* 0C097050 mov.b @(r0,Rm),Rn */
	r11 += 0xFFFFFFFEu;  /* 0C097052 add #imm,Rn */
	IF(0x0C097054u); W8(r0 + r7, r11); UPD(0x0C097056u, 2);  /* 0C097054 mov.b Rm,@(r0,Rn) */
L_0C097056: BLKS(0x0C097056u);
	{ IF(0x0C097058u); ; /* slot nop */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C097056 bra */
L_0C097060: BLKS(0x0C097060u);
	r5 = 0xA0u; UPD(0x0C097062u, 1);  /* 0C097060 mov.w @(disp,pc),Rn */
	r13 = 0x1Du;  /* 0C097062 mov #imm,Rn */
	r5 += r7;  /* 0C097064 add Rm,Rn */
	r6 = r5;  /* 0C097066 mov Rm,Rn */
	r6 += 0x1u;  /* 0C097068 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C09706Cu, 5);  /* 0C09706A mov.b @Rm,Rn */
	r5 += 0x3u;  /* 0C09706C add #imm,Rn */
	r0 &= 0xBFu;  /* 0C09706E and #imm,r0 */
	W8(r6, r0); UPD(0x0C097072u, 3);  /* 0C097070 mov.b Rm,@Rn */
	r6 = 0x98u; UPD(0x0C097074u, 1);  /* 0C097072 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C097074 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C097078u, 2);  /* 0C097076 mov.b @Rm,Rn */
	W8(r5, r3); UPD(0x0C09707Au, 1);  /* 0C097078 mov.b Rm,@Rn */
	r10 += 0x1u;  /* 0C09707A add #imm,Rn */
	r7 = r10 & 0xFF;  /* 0C09707C extu.b Rm,Rn */
	W8(r6, r10); UPD(0x0C097080u, 3);  /* 0C09707E mov.b Rm,@Rn */
	T = r7 > r13;  /* 0C097080 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097056u, 4); goto L_0C097056; } goto L_0C097086; }  /* 0C097082 bf/s */
L_0C097086: BLKS(0x0C097086u);
	r6 += 0x1u;  /* 0C097086 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09708Au, 3);  /* 0C097088 mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C09708Cu, 1);  /* 0C09708A mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C09708Eu, 1);  /* 0C09708C mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C09708E add #imm,Rn */
	W8(r5, r3); UPD(0x0C097092u, 2);  /* 0C097090 mov.b Rm,@Rn */
L_0C097092: BLKS(0x0C097092u);
	{ IF(0x0C097094u); ; /* slot nop */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C097092 bra */
L_0C0970D0: BLKS(0x0C0970D0u);
	r8 = 0xC0A9E40u; UPD(0x0C0970D2u, 1);  /* 0C0970D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0970D2 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0970D4 mov #imm,Rn */
	IF(0x0C0970D6u); { u32 t_ = r8; PR = 0x0C0970DAu; r6 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0970DAu); }  /* 0C0970D6 jsr @Rn */
L_0C0970DA: BLKS(0x0C0970DAu);
	T = (r0 & r0) == 0;  /* 0C0970DA tst Rm,Rn */
	if (T) { UPD(0x0C097092u, 4); goto L_0C097092; }  /* 0C0970DC bt */
L_0C0970DE: BLKS(0x0C0970DEu);
	r6 = 0xFFFFFF80u;  /* 0C0970DE mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0970E2u, 2);  /* 0C0970E0 mov.w @(disp,pc),Rn */
	IF(0x0C0970E2u); MACL = r12 * r9;  /* 0C0970E2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0970E6u, 3);  /* 0C0970E4 mov.l @(disp,pc),Rn */
	IF(0x0C0970E6u); r7 = MACL;  /* 0C0970E6 sts macl,Rn */
	r3 = 0xA0u; UPD(0x0C0970EAu, 2);  /* 0C0970E8 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C0970EA add Rm,Rn */
	r7 += r3;  /* 0C0970EC add Rm,Rn */
	r7 += 0x2u;  /* 0C0970EE add #imm,Rn */
	W8(r7, r6); UPD(0x0C0970F2u, 4);  /* 0C0970F0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFEu;  /* 0C0970F2 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C0970F6u, 2);  /* 0C0970F4 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0970F6 add #imm,Rn */
	W8(r7, r10); UPD(0x0C0970FAu, 2);  /* 0C0970F8 mov.b Rm,@Rn */
L_0C0970FA: BLKS(0x0C0970FAu);
	r4 = 0xB4u; UPD(0x0C0970FCu, 1);  /* 0C0970FA mov.w @(disp,pc),Rn */
	IF(0x0C0970FCu); MACL = r12 * r4;  /* 0C0970FC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097100u, 3);  /* 0C0970FE mov.l @(disp,pc),Rn */
	IF(0x0C097100u); r3 = MACL;  /* 0C097100 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C097104u, 2);  /* 0C097102 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C097104 add Rm,Rn */
	r7 += r3;  /* 0C097106 add Rm,Rn */
	r7 += 0x2u;  /* 0C097108 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09710Cu, 4);  /* 0C09710A mov.b @Rm,Rn */
	r0 &= 0x80u;  /* 0C09710C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09710E tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097092u, 5); goto L_0C097092; } goto L_0C097114; }  /* 0C097110 bf/s */
L_0C097114: BLKS(0x0C097114u);
	r2 = 0xC1F6170u; UPD(0x0C097116u, 2);  /* 0C097114 mov.l @(disp,pc),Rn */
	r13 = 0x2A30u; UPD(0x0C097118u, 1);  /* 0C097116 mov.w @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C09711Au, 1);  /* 0C097118 mov.l @Rm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C09711A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C097128u, 4); goto L_0C097128; }  /* 0C09711C bf */
L_0C09711E: BLKS(0x0C09711Eu);
	r8 = 0x9Fu; UPD(0x0C097120u, 1);  /* 0C09711E mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C097120 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C097124u, 2);  /* 0C097122 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C097124 add #imm,Rn */
	W8(r8, r10); UPD(0x0C097128u, 2);  /* 0C097126 mov.b Rm,@Rn */
L_0C097128: BLKS(0x0C097128u);
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C097128 bra */
L_0C097130: BLKS(0x0C097130u);
	r3 = 0xB4u; UPD(0x0C097132u, 1);  /* 0C097130 mov.w @(disp,pc),Rn */
	IF(0x0C097132u); MACL = r12 * r3;  /* 0C097132 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C097136u, 3);  /* 0C097134 mov.l @(disp,pc),Rn */
	IF(0x0C097136u); r0 = MACL;  /* 0C097136 sts macl,Rn */
	r3 = 0x8Cu; UPD(0x0C09713Au, 2);  /* 0C097138 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09713A add Rm,Rn */
	IF(0x0C09713Cu); r2 = R32(r0 + r3); UPD(0x0C09713Eu, 2);  /* 0C09713C mov.l @(r0,Rm),Rn */
	r11 = 0xFFFFu; UPD(0x0C097140u, 1);  /* 0C09713E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C097140 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09714Au, 4); goto L_0C09714A; }  /* 0C097142 bt */
L_0C097144: BLKS(0x0C097144u);
	r6 = 0x800u; UPD(0x0C097146u, 1);  /* 0C097144 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C097146 add Rm,Rn */
	IF(0x0C097148u); W32(r0 + r3, r2); UPD(0x0C09714Au, 2);  /* 0C097148 mov.l Rm,@(r0,Rn) */
L_0C09714A: BLKS(0x0C09714Au);
	r4 = R32(r0 + 0x24u); UPD(0x0C09714Cu, 1);  /* 0C09714A mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C09714Eu, 1);  /* 0C09714C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C09714E add Rm,Rn */
	IF(0x0C097150u); T = (s32)r2 >= 0;  /* 0C097150 cmp/pz Rn */
	if (!T) { UPD(0x0C0971D0u, 5); goto L_0C0971D0; }  /* 0C097152 bf */
L_0C097154: BLKS(0x0C097154u);
	r5 = 0x1E00000u; UPD(0x0C097156u, 1);  /* 0C097154 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C097156 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09716Au, 4); goto L_0C09716A; }  /* 0C097158 bt */
L_0C09715A: BLKS(0x0C09715Au);
	r5 = R32(r0 + 0x28u); UPD(0x0C09715Cu, 1);  /* 0C09715A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C09715Eu, 1);  /* 0C09715C mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C09715E add Rm,Rn */
	IF(0x0C097160u); T = (s32)r2 >= 0;  /* 0C097160 cmp/pz Rn */
	if (!T) { UPD(0x0C0971C0u, 5); goto L_0C0971C0; }  /* 0C097162 bf */
L_0C097164: BLKS(0x0C097164u);
	r7 = 0xC80000u; UPD(0x0C097166u, 1);  /* 0C097164 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C097166 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C097180u, 4); goto L_0C097180; }  /* 0C097168 bf */
L_0C09716A: BLKS(0x0C09716Au);
	r9 = 0xA0u; UPD(0x0C09716Cu, 1);  /* 0C09716A mov.w @(disp,pc),Rn */
	r4 = 0x86u; UPD(0x0C09716Eu, 1);  /* 0C09716C mov.w @(disp,pc),Rn */
	IF(0x0C09716Eu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C097170u, 1);  /* 0C09716E mov.b @(r0,Rm),Rn */
	IF(0x0C097170u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C097172u, 1);  /* 0C097170 mov.w @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C097172 add #imm,Rn */
	r1 = 0x100u; UPD(0x0C097176u, 2);  /* 0C097174 mov.w @(disp,pc),Rn */
	r13 += r1;  /* 0C097176 add Rm,Rn */
	IF(0x0C097178u); W8(r0 + r9, r2); UPD(0x0C09717Au, 2);  /* 0C097178 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C09717Cu); W16(r0 + r4, r13); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C09717A bra */
L_0C097180: BLKS(0x0C097180u);
	r0 += 0x5Cu;  /* 0C097180 add #imm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C097184u, 2);  /* 0C097182 mov.l @Rm+,Rn */
	r7 = r4;  /* 0C097184 mov Rm,Rn */
	r3 = 0x7FFFFu; UPD(0x0C097188u, 2);  /* 0C097186 mov.l @(disp,pc),Rn */
	r7 -= r6;  /* 0C097188 sub Rm,Rn */
	r13 = 0xFFFFEu; UPD(0x0C09718Cu, 2);  /* 0C09718A mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C09718C add Rm,Rn */
	r9 = R32(r0); UPD(0x0C097190u, 2);  /* 0C09718E mov.l @Rm,Rn */
	r8 = r5;  /* 0C097190 mov Rm,Rn */
	T = r13 >= r7;  /* 0C097192 cmp/hs Rm,Rn */
	r8 -= r9;  /* 0C097194 sub Rm,Rn */
	IF(0x0C097196u); r10 = T;  /* 0C097196 movt Rn */
	r8 += r3;  /* 0C097198 add Rm,Rn */
	T = r13 >= r8;  /* 0C09719A cmp/hs Rm,Rn */
	IF(0x0C09719Cu); r11 = T;  /* 0C09719C movt Rn */
	r10 &= r11;  /* 0C09719E and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0971A0 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0971B0u, 12); goto L_0C0971B0; } goto L_0C0971A6; }  /* 0C0971A2 bt/s */
L_0C0971A6: BLKS(0x0C0971A6u);
	r6 = 0xA0u; UPD(0x0C0971A8u, 2);  /* 0C0971A6 mov.w @(disp,pc),Rn */
	IF(0x0C0971A8u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0971AAu, 1);  /* 0C0971A8 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0971AA add #imm,Rn */
	{ IF(0x0C0971AEu); W8(r0 + r6, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C096F34u, 4); goto L_0C096F34; }  /* 0C0971AC bra */
L_0C0971B0: BLKS(0x0C0971B0u);
	r7 = r9;  /* 0C0971B0 mov Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C0971B4u, 2);  /* 0C0971B2 mov.l @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C0971B6u, 1);  /* 0C0971B4 mov.w @(disp,pc),Rn */
	IF(0x0C0971B6u); { u32 t_ = r9; PR = 0x0C0971BAu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0971BAu); }  /* 0C0971B6 jsr @Rn */
L_0C0971BA: BLKS(0x0C0971BAu);
	W16(r10, r0); UPD(0x0C0971BCu, 1);  /* 0C0971BA mov.w Rm,@Rn */
L_0C0971BC: BLKS(0x0C0971BCu);
	{ IF(0x0C0971BEu); ; /* slot nop */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C0971BC bra */
L_0C0971C0: BLKS(0x0C0971C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C097164u, 3); goto L_0C097164; }  /* 0C0971C0 bra */
L_0C0971D0: BLKS(0x0C0971D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C097154u, 3); goto L_0C097154; }  /* 0C0971D0 bra */
L_0C0971E0: BLKS(0x0C0971E0u);
	r6 = 0xB4u; UPD(0x0C0971E2u, 1);  /* 0C0971E0 mov.w @(disp,pc),Rn */
	IF(0x0C0971E2u); MACL = r12 * r6;  /* 0C0971E2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0971E6u, 3);  /* 0C0971E4 mov.l @(disp,pc),Rn */
	IF(0x0C0971E6u); r3 = MACL;  /* 0C0971E6 sts macl,Rn */
	r6 = 0xA0u; UPD(0x0C0971EAu, 2);  /* 0C0971E8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0971EA add Rm,Rn */
	r6 += r3;  /* 0C0971EC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0971F0u, 3);  /* 0C0971EE mov.b @Rm,Rn */
	r5 = r7 & 0xFF;  /* 0C0971F0 extu.b Rm,Rn */
	r0 = r5;  /* 0C0971F2 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C0971F4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0972A0u, 6); goto L_0C0972A0; } goto L_0C0971FA; }  /* 0C0971F6 bt/s */
L_0C0971FA: BLKS(0x0C0971FAu);
	T = (s32)r5 > (s32)r9;  /* 0C0971FA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C097220u, 5); goto L_0C097220; } goto L_0C097200; }  /* 0C0971FC bt/s */
L_0C097200: BLKS(0x0C097200u);
	T = (r5 & r5) == 0;  /* 0C097200 tst Rm,Rn */
	if (!T) { UPD(0x0C0971BCu, 5); goto L_0C0971BC; }  /* 0C097202 bf */
L_0C097204: BLKS(0x0C097204u);
	r0 = r3;  /* 0C097204 mov Rm,Rn */
	r4 = r7;  /* 0C097206 mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C09720Au, 3);  /* 0C097208 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09720A add #imm,Rn */
	r11 = 0x100u; UPD(0x0C09720Eu, 2);  /* 0C09720C mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C09720E mov #imm,Rn */
	r3 = 0x99u; UPD(0x0C097212u, 2);  /* 0C097210 mov.w @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C097214u, 1);  /* 0C097212 mov.b Rm,@Rn */
	IF(0x0C097214u); W16(r0 + r13, r11); UPD(0x0C097216u, 1);  /* 0C097214 mov.w Rm,@(r0,Rn) */
	r6 += 0x3u;  /* 0C097216 add #imm,Rn */
	IF(0x0C097218u); W8(r0 + r3, r5); UPD(0x0C09721Au, 2);  /* 0C097218 mov.b Rm,@(r0,Rn) */
L_0C09721A: BLKS(0x0C09721Au);
	W8(r6, r1); UPD(0x0C09721Cu, 1);  /* 0C09721A mov.b Rm,@Rn */
L_0C09721C: BLKS(0x0C09721Cu);
	{ IF(0x0C09721Eu); ; /* slot nop */ UPD(0x0C096F34u, 3); goto L_0C096F34; }  /* 0C09721C bra */
L_0C097220: BLKS(0x0C097220u);
	if (!T) { UPD(0x0C09721Cu, 3); goto L_0C09721C; }  /* 0C097220 bf */
L_0C097222: BLKS(0x0C097222u);
	r0 = 0x8Cu; UPD(0x0C097224u, 1);  /* 0C097222 mov.w @(disp,pc),Rn */
	r10 = 0xFFFFu; UPD(0x0C097226u, 1);  /* 0C097224 mov.l @(disp,pc),Rn */
	IF(0x0C097226u); r2 = R32(r0 + r3); UPD(0x0C097228u, 1);  /* 0C097226 mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C097228 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C097232u, 4); goto L_0C097232; }  /* 0C09722A bt */
L_0C09722C: BLKS(0x0C09722Cu);
	r7 = 0x800u; UPD(0x0C09722Eu, 1);  /* 0C09722C mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C09722E add Rm,Rn */
	IF(0x0C097230u); W32(r0 + r3, r2); UPD(0x0C097232u, 2);  /* 0C097230 mov.l Rm,@(r0,Rn) */
L_0C097232: BLKS(0x0C097232u);
	r6 = R32(r3 + 0x24u); UPD(0x0C097234u, 1);  /* 0C097232 mov.l @(disp,Rm),Rn */
	r0 = 0xFF900000u; UPD(0x0C097236u, 1);  /* 0C097234 mov.l @(disp,pc),Rn */
	T = (s32)r6 >= (s32)r0;  /* 0C097236 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09721Cu, 4); goto L_0C09721C; }  /* 0C097238 bt */
L_0C09723A: BLKS(0x0C09723Au);
	r4 = 0x0u;  /* 0C09723A mov #imm,Rn */
	W32(r3, r4); UPD(0x0C09723Eu, 2);  /* 0C09723C mov.l Rm,@Rn */
	r9 = 0xC392AFEu; UPD(0x0C097240u, 1);  /* 0C09723E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C097242u, 1);  /* 0C097240 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C097242 add #imm,Rn */
	W8(r9, r2); UPD(0x0C097246u, 2);  /* 0C097244 mov.b Rm,@Rn */
	r2 = 0xC392AFDu; UPD(0x0C097248u, 1);  /* 0C097246 mov.l @(disp,pc),Rn */
	{ r3 = (u32)(s32)(s8)R8(r2); /* slot mov.b @Rm,Rn */ UPD(0x0C096F2Eu, 3); goto L_0C096F2E; }  /* 0C097248 bra */
L_0C0972A0: BLKS(0x0C0972A0u);
	r0 = 0x99u; UPD(0x0C0972A2u, 1);  /* 0C0972A0 mov.w @(disp,pc),Rn */
	r5 = 0x78u;  /* 0C0972A2 mov #imm,Rn */
	IF(0x0C0972A4u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0972A6u, 2);  /* 0C0972A4 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C0972A6 add #imm,Rn */
	r1 = r8 & 0xFF;  /* 0C0972A8 extu.b Rm,Rn */
	T = r1 > r5;  /* 0C0972AA cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0972AEu); W8(r0 + r3, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09721Cu, 6); goto L_0C09721C; } UPD(0x0C0972B0u, 1); goto L_0C0972B0; }  /* 0C0972AC bf/s */
L_0C0972B0: BLKS(0x0C0972B0u);
	r1 = r7;  /* 0C0972B0 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09721Au, 4); goto L_0C09721A; }  /* 0C0972B2 bra */
L_0C0972C0: BLKS(0x0C0972C0u);
	r6 += 0x1u;  /* 0C0972C0 add #imm,Rn */
	{ W8(r2, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C096D58u, 4); goto L_0C096D58; }  /* 0C0972C2 bra */
}

void f_0C0972D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0972D0;
L_0C096140: BLKS(0x0C096140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C096142u, 1);  /* 0C096140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C096144u, 1);  /* 0C096142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C096146u, 1);  /* 0C096144 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C096148u, 1);  /* 0C096146 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09614Au, 1);  /* 0C096148 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C09614A exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09614Eu, 2);  /* 0C09614C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C096150u, 1);  /* 0C09614E mov.l Rm,@-Rn */
	IF(0x0C096150u); MACL = r11 * r2;  /* 0C096150 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C096154u, 3);  /* 0C096152 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C096156u, 1);  /* 0C096154 mov.l @(disp,pc),Rn */
	IF(0x0C096156u); r2 = MACL;  /* 0C096156 sts macl,Rn */
	IF(0x0C096158u); r15 -= 4; W32(r15, PR); UPD(0x0C09615Au, 2);  /* 0C096158 sts.l pr,@-Rn */
	r2 += r0;  /* 0C09615A add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C09615Eu, 2);  /* 0C09615C mov.l @(disp,Rm),Rn */
	r0 = 0x37u;  /* 0C09615E mov #imm,Rn */
	T = r3 > r0;  /* 0C096160 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09616Au, 5); goto L_0C09616A; } goto L_0C096166; }  /* 0C096162 bf/s */
L_0C096166: BLKS(0x0C096166u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C096760u, 4); goto L_0C096760; }  /* 0C096166 bra */
L_0C09616A: BLKS(0x0C09616Au);
	r0 = 0xC09617Cu;  /* 0C09616A mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09616C add Rm,Rn */
	IF(0x0C09616Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C096170u, 3);  /* 0C09616E mov.w @(r0,Rm),Rn */
	IF(0x0C096170u); { u32 tv_ = (r4 + 0x0C096174u); u32 t_ = PHYS(tv_); IF(0x0C096172u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0961F0u: goto L_0C0961F0; case 0x0C096230u: goto L_0C096230; case 0x0C096270u: goto L_0C096270; case 0x0C0962A0u: goto L_0C0962A0; case 0x0C0962D0u: goto L_0C0962D0; case 0x0C096320u: goto L_0C096320; case 0x0C0963F0u: goto L_0C0963F0; case 0x0C096420u: goto L_0C096420; case 0x0C096450u: goto L_0C096450; case 0x0C096480u: goto L_0C096480; case 0x0C0964B0u: goto L_0C0964B0; case 0x0C0964E0u: goto L_0C0964E0; case 0x0C096550u: goto L_0C096550; case 0x0C096580u: goto L_0C096580; case 0x0C0965D0u: goto L_0C0965D0; case 0x0C096610u: goto L_0C096610; case 0x0C096640u: goto L_0C096640; case 0x0C096670u: goto L_0C096670; case 0x0C0966E0u: goto L_0C0966E0; case 0x0C096710u: goto L_0C096710; default: JUMPD(tv_); } }  /* 0C096170 braf Rn */
L_0C0961F0: BLKS(0x0C0961F0u);
	r12 = 0xB4u; UPD(0x0C0961F2u, 1);  /* 0C0961F0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0961F2 mov Rm,Rn */
	IF(0x0C0961F4u); MACL = r11 * r12;  /* 0C0961F4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0961F8u, 4);  /* 0C0961F6 mov.l @(disp,pc),Rn */
	IF(0x0C0961F8u); r9 = MACL;  /* 0C0961F8 sts macl,Rn */
	r9 += r10;  /* 0C0961FA add Rm,Rn */
	r9 += 0x3Cu;  /* 0C0961FC add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r9); UPD(0x0C096200u, 4);  /* 0C0961FE mov.w @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C096200 tst Rm,Rn */
	IF(0x0C096202u); r0 = T;  /* 0C096202 movt Rn */
	r7 = 0xC1CC8B8u; UPD(0x0C096206u, 3);  /* 0C096204 mov.l @(disp,pc),Rn */
	IF(0x0C096206u); r0 <<= 2;  /* 0C096206 shll2 Rn */
	r6 = 0xC0A17E0u; UPD(0x0C09620Au, 2);  /* 0C096208 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFC4u;  /* 0C09620A add #imm,Rn */
	IF(0x0C09620Cu); { u32 t_ = r6; PR = 0x0C096210u; IF(0x0C09620Eu); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C096210u); }  /* 0C09620C jsr @Rn */
L_0C096210: BLKS(0x0C096210u);
	r0 = 0x8Cu; UPD(0x0C096212u, 1);  /* 0C096210 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C096212 mov #imm,Rn */
	IF(0x0C096214u); W32(r0 + r9, r5); UPD(0x0C096216u, 2);  /* 0C096214 mov.l Rm,@(r0,Rn) */
	IF(0x0C096216u); ;  /* 0C096216 nop */
	UPD(0x0C096218u, 1);
L_0C096218: BLKS(0x0C096218u);
	r15 = r14;  /* 0C096218 mov Rm,Rn */
	IF(0x0C09621Au); PR = R32(r15); r15 += 4; UPD(0x0C09621Cu, 2);  /* 0C09621A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09621Eu, 1);  /* 0C09621C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C096220u, 1);  /* 0C09621E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C096222u, 1);  /* 0C096220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C096224u, 1);  /* 0C096222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C096226u, 1);  /* 0C096224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C096228u, 1);  /* 0C096226 mov.l @Rm+,Rn */
	IF(0x0C096228u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C096228 rts */
L_0C096230: BLKS(0x0C096230u);
	r3 = 0xB4u; UPD(0x0C096232u, 1);  /* 0C096230 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096232 add #imm,Rn */
	IF(0x0C096234u); MACL = r11 * r3;  /* 0C096234 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C096238u, 4);  /* 0C096236 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C096238 mov #imm,Rn */
	IF(0x0C09623Au); r8 = MACL;  /* 0C09623A sts macl,Rn */
	r8 += r0;  /* 0C09623C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096240u, 4);  /* 0C09623E mov.w @(disp,pc),Rn */
	IF(0x0C096240u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096242u, 1);  /* 0C096240 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C096242 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096246u, 2);  /* 0C096244 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096246 add #imm,Rn */
	IF(0x0C096248u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09624Au, 2);  /* 0C096248 mov.b @(r0,Rm),Rn */
	r11 = r13 & 0xFF;  /* 0C09624A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09624Eu, 2);  /* 0C09624C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096250u, 1);  /* 0C09624E mov.l @Rm,Rn */
L_0C096250: BLKS(0x0C096250u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096252u, 1);  /* 0C096250 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C096254u, 1);  /* 0C096252 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C096256u, 1);  /* 0C096254 mov.l @(disp,pc),Rn */
L_0C096256: BLKS(0x0C096256u);
	IF(0x0C096256u); { u32 t_ = r0; PR = 0x0C09625Au; IF(0x0C096258u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09625Au); }  /* 0C096256 jsr @Rn */
L_0C09625A: BLKS(0x0C09625Au);
	r2 = 0x0u;  /* 0C09625A mov #imm,Rn */
	W32(r8, r2); UPD(0x0C09625Eu, 2);  /* 0C09625C mov.l Rm,@Rn */
L_0C09625E: BLKS(0x0C09625Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C096218u, 3); goto L_0C096218; }  /* 0C09625E bra */
L_0C096270: BLKS(0x0C096270u);
	r8 = 0xB4u; UPD(0x0C096272u, 1);  /* 0C096270 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096272 add #imm,Rn */
	IF(0x0C096274u); MACL = r11 * r8;  /* 0C096274 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C096278u, 4);  /* 0C096276 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09627Au, 1);  /* 0C096278 mov.w @(disp,pc),Rn */
	IF(0x0C09627Au); r8 = MACL;  /* 0C09627A sts macl,Rn */
	r8 += r10;  /* 0C09627C add Rm,Rn */
	IF(0x0C09627Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096280u, 3);  /* 0C09627E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C096280 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C096284u, 2);  /* 0C096282 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096284 add #imm,Rn */
	IF(0x0C096286u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096288u, 2);  /* 0C096286 mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C096288 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09628Cu, 2);  /* 0C09628A mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C09628C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 4); goto L_0C096250; }  /* 0C09628E bra */
L_0C0962A0: BLKS(0x0C0962A0u);
	r0 = 0xB4u; UPD(0x0C0962A2u, 1);  /* 0C0962A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0962A2 add #imm,Rn */
	IF(0x0C0962A4u); MACL = r11 * r0;  /* 0C0962A4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0962A8u, 4);  /* 0C0962A6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0962A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0962ACu, 2);  /* 0C0962AA mov.w @(disp,pc),Rn */
	IF(0x0C0962ACu); r8 = MACL;  /* 0C0962AC sts macl,Rn */
	r8 += r4;  /* 0C0962AE add Rm,Rn */
	IF(0x0C0962B0u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0962B2u, 3);  /* 0C0962B0 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0962B2 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0962B6u, 2);  /* 0C0962B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0962B6 add #imm,Rn */
	IF(0x0C0962B8u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0962BAu, 2);  /* 0C0962B8 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C0962BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C0962BEu, 2);  /* 0C0962BC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C0962BE bra */
L_0C0962D0: BLKS(0x0C0962D0u);
	r2 = 0xB4u; UPD(0x0C0962D2u, 1);  /* 0C0962D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0962D2 add #imm,Rn */
	IF(0x0C0962D4u); MACL = r11 * r2;  /* 0C0962D4 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0962D8u, 4);  /* 0C0962D6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0962D8 mov #imm,Rn */
	IF(0x0C0962DAu); r9 = MACL;  /* 0C0962DA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0962DEu, 3);  /* 0C0962DC mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C0962DE add Rm,Rn */
	IF(0x0C0962E0u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0962E2u, 2);  /* 0C0962E0 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C0962E2 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C0962E6u, 2);  /* 0C0962E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0962E6 add #imm,Rn */
	IF(0x0C0962E8u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0962EAu, 2);  /* 0C0962E8 mov.b @(r0,Rm),Rn */
	r10 = 0xC0AC800u; UPD(0x0C0962ECu, 1);  /* 0C0962EA mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C0962EC extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0962F0u, 2);  /* 0C0962EE mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x24u); UPD(0x0C0962F2u, 1);  /* 0C0962F0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0962F4u, 1);  /* 0C0962F2 mov.l @Rm,Rn */
	IF(0x0C0962F4u); { u32 t_ = r10; PR = 0x0C0962F8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0962F8u); }  /* 0C0962F4 jsr @Rn */
L_0C0962F8: BLKS(0x0C0962F8u);
	r3 = 0x98u; UPD(0x0C0962FAu, 1);  /* 0C0962F8 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0962FA mov #imm,Rn */
	r3 += r9;  /* 0C0962FC add Rm,Rn */
	r5 = R32(r9); UPD(0x0C096300u, 3);  /* 0C0962FE mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C096300 add #imm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C096304u, 2);  /* 0C096302 mov.l @(disp,pc),Rn */
	r0 = 0xA3u; UPD(0x0C096306u, 1);  /* 0C096304 mov.w @(disp,pc),Rn */
	r5 &= r6;  /* 0C096306 and Rm,Rn */
	W8(r3, r1); UPD(0x0C09630Au, 2);  /* 0C096308 mov.b Rm,@Rn */
	W32(r9, r5); UPD(0x0C09630Cu, 1);  /* 0C09630A mov.l Rm,@Rn */
	IF(0x0C09630Cu); W8(r0 + r9, r1); UPD(0x0C09630Eu, 1);  /* 0C09630C mov.b Rm,@(r0,Rn) */
	{ { u32 v_ = r1; r3 -= 1; W8(r3, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C09625Eu, 3); goto L_0C09625E; }  /* 0C09630E bra */
L_0C096320: BLKS(0x0C096320u);
	r0 = 0xB4u; UPD(0x0C096322u, 1);  /* 0C096320 mov.w @(disp,pc),Rn */
	IF(0x0C096322u); MACL = r11 * r0;  /* 0C096322 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096326u, 3);  /* 0C096324 mov.l @(disp,pc),Rn */
	IF(0x0C096326u); r0 = MACL;  /* 0C096326 sts macl,Rn */
	r0 += r3;  /* 0C096328 add Rm,Rn */
	r10 = R32(r0 + 0x1Cu); UPD(0x0C09632Cu, 3);  /* 0C09632A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C09632Eu, 1);  /* 0C09632C mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C09632E tst Rm,Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C096380u, 4); goto L_0C096380; } goto L_0C096334; }  /* 0C096330 bt/s */
L_0C096334: BLKS(0x0C096334u);
	r13 = 0xA9u; UPD(0x0C096336u, 2);  /* 0C096334 mov.w @(disp,pc),Rn */
	r13 += r0;  /* 0C096336 add Rm,Rn */
	UPD(0x0C096338u, 1);
L_0C096338: BLKS(0x0C096338u);
	r10 += 0x4u;  /* 0C096338 add #imm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C09633Cu, 2);  /* 0C09633A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09633C add #imm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C096340u, 2);  /* 0C09633E mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C096340 mov #imm,Rn */
	r9 += r8;  /* 0C096342 add Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C096346u, 3);  /* 0C096344 mov.l @Rm+,Rn */
	r6 = r9;  /* 0C096346 mov Rm,Rn */
	r8 = R32(r12 + 0x28u); UPD(0x0C09634Au, 2);  /* 0C096348 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09634A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09634Eu, 2);  /* 0C09634C mov.w @(disp,pc),Rn */
	IF(0x0C09634Eu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C096350u, 1);  /* 0C09634E mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C096350 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C096354u, 2);  /* 0C096352 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C096356u, 1);  /* 0C096354 mov.b @Rm,Rn */
	r0 = 0xC0AB240u; UPD(0x0C096358u, 1);  /* 0C096356 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C096358 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C09635Cu, 2);  /* 0C09635A mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C09635C mov Rm,Rn */
	IF(0x0C09635Eu); { u32 t_ = r0; PR = 0x0C096362u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C096362u); }  /* 0C09635E jsr @Rn */
L_0C096362: BLKS(0x0C096362u);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C096364u, 1);  /* 0C096362 mov.b @Rm,Rn */
	r5 = 0x0u;  /* 0C096364 mov #imm,Rn */
	r6 = 0x20000u; UPD(0x0C096368u, 2);  /* 0C096366 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C096368 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09636Cu, 2);  /* 0C09636A mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C09636C mov #imm,Rn */
	r6 = r8;  /* 0C09636E mov Rm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C096372u, 3);  /* 0C096370 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C096374u, 1);  /* 0C096372 mov.l Rm,@(disp,Rn) */
	IF(0x0C096374u); { u32 t_ = r8; PR = 0x0C096378u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C096378u); }  /* 0C096374 jsr @Rn */
L_0C096378: BLKS(0x0C096378u);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C09637Au, 1);  /* 0C096378 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C09637A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C096338u, 4); goto L_0C096338; } UPD(0x0C096380u, 1); goto L_0C096380; }  /* 0C09637C bf/s */
L_0C096380: BLKS(0x0C096380u);
	r9 = 0xC0A0540u; UPD(0x0C096382u, 1);  /* 0C096380 mov.l @(disp,pc),Rn */
	IF(0x0C096382u); { u32 t_ = r9; PR = 0x0C096386u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C096386u); }  /* 0C096382 jsr @Rn */
L_0C096386: BLKS(0x0C096386u);
	r7 = 0xB4u; UPD(0x0C096388u, 1);  /* 0C096386 mov.w @(disp,pc),Rn */
	r13 = ~r0;  /* 0C096388 not Rm,Rn */
	IF(0x0C09638Au); MACL = r11 * r7;  /* 0C09638A mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09638Eu, 4);  /* 0C09638C mov.l @(disp,pc),Rn */
	IF(0x0C09638Eu); T = r13 >> 31; r13 = (r13 << 1) | T;  /* 0C09638E rotl Rn */
	IF(0x0C096390u); r3 = MACL;  /* 0C096390 sts macl,Rn */
	r3 += r6;  /* 0C096392 add Rm,Rn */
	r3 += 0x3Cu;  /* 0C096394 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C096398u, 5);  /* 0C096396 mov.w @Rm,Rn */
	IF(0x0C096398u); r10 = T;  /* 0C096398 movt Rn */
	T = (r11 & r11) == 0;  /* 0C09639A tst Rm,Rn */
	IF(0x0C09639Cu); r12 = T;  /* 0C09639C movt Rn */
	r10 &= r12;  /* 0C09639E and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0963A0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0963B6u, 8); goto L_0C0963B6; } goto L_0C0963A6; }  /* 0C0963A2 bt/s */
L_0C0963A6: BLKS(0x0C0963A6u);
	IF(0x0C0963A6u); MACL = r0 * r7;  /* 0C0963A6 mul.l Rm,Rn */
	r7 = 0xA5u; UPD(0x0C0963AAu, 4);  /* 0C0963A8 mov.w @(disp,pc),Rn */
	IF(0x0C0963AAu); r5 = MACL;  /* 0C0963AA sts macl,Rn */
	r5 += r6;  /* 0C0963AC add Rm,Rn */
	r5 += r7;  /* 0C0963AE add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0963B2u, 4);  /* 0C0963B0 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0963B2 add #imm,Rn */
	W8(r5, r6); UPD(0x0C0963B6u, 2);  /* 0C0963B4 mov.b Rm,@Rn */
L_0C0963B6: BLKS(0x0C0963B6u);
	r2 = 0x0u;  /* 0C0963B6 mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C0963B8 bra */
L_0C0963F0: BLKS(0x0C0963F0u);
	r8 = 0xB4u; UPD(0x0C0963F2u, 1);  /* 0C0963F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0963F2 add #imm,Rn */
	IF(0x0C0963F4u); MACL = r11 * r8;  /* 0C0963F4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0963F8u, 4);  /* 0C0963F6 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0963F8 mov #imm,Rn */
	IF(0x0C0963FAu); r8 = MACL;  /* 0C0963FA sts macl,Rn */
	r8 += r0;  /* 0C0963FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096400u, 4);  /* 0C0963FE mov.w @(disp,pc),Rn */
	IF(0x0C096400u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096402u, 1);  /* 0C096400 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C096402 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C096406u, 2);  /* 0C096404 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096406 add #imm,Rn */
	IF(0x0C096408u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09640Au, 2);  /* 0C096408 mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C09640A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09640Eu, 2);  /* 0C09640C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096410u, 1);  /* 0C09640E mov.l @Rm,Rn */
L_0C096410: BLKS(0x0C096410u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096412u, 1);  /* 0C096410 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD970u; UPD(0x0C096414u, 1);  /* 0C096412 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096414 bra */
L_0C096420: BLKS(0x0C096420u);
	r7 = 0xB4u; UPD(0x0C096422u, 1);  /* 0C096420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096422 add #imm,Rn */
	IF(0x0C096424u); MACL = r11 * r7;  /* 0C096424 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C096428u, 4);  /* 0C096426 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09642Au, 1);  /* 0C096428 mov.w @(disp,pc),Rn */
	IF(0x0C09642Au); r8 = MACL;  /* 0C09642A sts macl,Rn */
	r8 += r6;  /* 0C09642C add Rm,Rn */
	IF(0x0C09642Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096430u, 3);  /* 0C09642E mov.b @(r0,Rm),Rn */
	r9 = r5 & 0xFF;  /* 0C096430 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C096434u, 2);  /* 0C096432 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096434 add #imm,Rn */
	IF(0x0C096436u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096438u, 2);  /* 0C096436 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C096438 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C09643A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09643Eu, 3);  /* 0C09643C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096440u, 1);  /* 0C09643E mov.l @Rm,Rn */
L_0C096440: BLKS(0x0C096440u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096442u, 1);  /* 0C096440 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C096444u, 1);  /* 0C096442 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096444 bra */
L_0C096450: BLKS(0x0C096450u);
	r0 = 0xB4u; UPD(0x0C096452u, 1);  /* 0C096450 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096452 add #imm,Rn */
	IF(0x0C096454u); MACL = r11 * r0;  /* 0C096454 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C096458u, 4);  /* 0C096456 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C096458 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09645Cu, 2);  /* 0C09645A mov.w @(disp,pc),Rn */
	IF(0x0C09645Cu); r8 = MACL;  /* 0C09645C sts macl,Rn */
	r8 += r12;  /* 0C09645E add Rm,Rn */
	IF(0x0C096460u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096462u, 3);  /* 0C096460 mov.b @(r0,Rm),Rn */
	r3 = r10 & 0xFF;  /* 0C096462 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C096466u, 2);  /* 0C096464 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096466 add #imm,Rn */
	IF(0x0C096468u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09646Au, 2);  /* 0C096468 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C09646A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09646Eu, 2);  /* 0C09646C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C096470u, 1);  /* 0C09646E mov.l @Rm,Rn */
L_0C096470: BLKS(0x0C096470u);
	r6 = R32(r8 + 0x24u); UPD(0x0C096472u, 1);  /* 0C096470 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD830u; UPD(0x0C096474u, 1);  /* 0C096472 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C096256u, 3); goto L_0C096256; }  /* 0C096474 bra */
L_0C096480: BLKS(0x0C096480u);
	r8 = 0xB4u; UPD(0x0C096482u, 1);  /* 0C096480 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096482 add #imm,Rn */
	IF(0x0C096484u); MACL = r11 * r8;  /* 0C096484 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C096488u, 4);  /* 0C096486 mov.l @(disp,pc),Rn */
	IF(0x0C096488u); r8 = MACL;  /* 0C096488 sts macl,Rn */
	r8 += r11;  /* 0C09648A add Rm,Rn */
	UPD(0x0C09648Cu, 2);
L_0C09648C: BLKS(0x0C09648Cu);
	r0 = 0xB0u; UPD(0x0C09648Eu, 1);  /* 0C09648C mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09648E mov #imm,Rn */
	IF(0x0C096490u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096492u, 2);  /* 0C096490 mov.b @(r0,Rm),Rn */
	r3 = r13 & 0xFF;  /* 0C096492 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C096496u, 2);  /* 0C096494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096496 add #imm,Rn */
	IF(0x0C096498u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09649Au, 2);  /* 0C096498 mov.b @(r0,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C09649A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09649Eu, 2);  /* 0C09649C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C09649E bra */
L_0C0964B0: BLKS(0x0C0964B0u);
	r2 = 0xB4u; UPD(0x0C0964B2u, 1);  /* 0C0964B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0964B2 add #imm,Rn */
	IF(0x0C0964B4u); MACL = r11 * r2;  /* 0C0964B4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0964B8u, 4);  /* 0C0964B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0964BAu, 1);  /* 0C0964B8 mov.w @(disp,pc),Rn */
	IF(0x0C0964BAu); r8 = MACL;  /* 0C0964BA sts macl,Rn */
	r8 += r7;  /* 0C0964BC add Rm,Rn */
	IF(0x0C0964BEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0964C0u, 3);  /* 0C0964BE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0964C0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0964C4u, 2);  /* 0C0964C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0964C4 add #imm,Rn */
	IF(0x0C0964C6u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0964C8u, 2);  /* 0C0964C6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0964C8 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C0964CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C0964CEu, 3);  /* 0C0964CC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C0964CE bra */
L_0C0964E0: BLKS(0x0C0964E0u);
	r10 = 0xC0A03F0u; UPD(0x0C0964E2u, 1);  /* 0C0964E0 mov.l @(disp,pc),Rn */
	IF(0x0C0964E2u); { u32 t_ = r10; PR = 0x0C0964E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0964E6u); }  /* 0C0964E2 jsr @Rn */
L_0C0964E6: BLKS(0x0C0964E6u);
	IF(0x0C0964E6u); T = (s32)r0 >= 0;  /* 0C0964E6 cmp/pz Rn */
	if (!T) { UPD(0x0C09652Au, 4); goto L_0C09652A; }  /* 0C0964E8 bf */
L_0C0964EA: BLKS(0x0C0964EAu);
	r15 += 0xFFFFFFF8u;  /* 0C0964EA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C0964EEu, 2);  /* 0C0964EC mov.w @(disp,pc),Rn */
	IF(0x0C0964EEu); MACL = r11 * r7;  /* 0C0964EE mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0964F2u, 3);  /* 0C0964F0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0964F2 mov #imm,Rn */
	IF(0x0C0964F4u); r0 = MACL;  /* 0C0964F4 sts macl,Rn */
	r0 += r10;  /* 0C0964F6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0964F8 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0964FCu, 5);  /* 0C0964FA mov.w @Rm,Rn */
	IF(0x0C0964FCu); MACL = r2 * r7;  /* 0C0964FC mul.l Rm,Rn */
	r6 = 0xA1u; UPD(0x0C096500u, 3);  /* 0C0964FE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C096500 add #imm,Rn */
	IF(0x0C096502u); r9 = MACL;  /* 0C096502 sts macl,Rn */
	r7 += 0xFFFFFFF3u;  /* 0C096504 add #imm,Rn */
	r9 += r10;  /* 0C096506 add Rm,Rn */
	r9 += r7;  /* 0C096508 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09650Cu, 6);  /* 0C09650A mov.b @Rm,Rn */
	IF(0x0C09650Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09650Eu, 1);  /* 0C09650C mov.b @(r0,Rm),Rn */
	r13 = 0xA9u; UPD(0x0C096510u, 1);  /* 0C09650E mov.w @(disp,pc),Rn */
	r5 |= r1;  /* 0C096510 or Rm,Rn */
	W8(r9, r5); UPD(0x0C096514u, 2);  /* 0C096512 mov.b Rm,@Rn */
	IF(0x0C096514u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C096516u, 1);  /* 0C096514 mov.b @(r0,Rm),Rn */
	r3 = 0x20000u; UPD(0x0C096518u, 1);  /* 0C096516 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C096518 extu.b Rm,Rn */
	r12 = 0xC7C27B0u; UPD(0x0C09651Cu, 2);  /* 0C09651A mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09651Eu, 1);  /* 0C09651C mov.l Rm,@(disp,Rn) */
	W32(r15, r3); UPD(0x0C096520u, 1);  /* 0C09651E mov.l Rm,@Rn */
	r4 = 0xCu;  /* 0C096520 mov #imm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C096524u, 2);  /* 0C096522 mov.l @(disp,Rm),Rn */
	IF(0x0C096524u); { u32 t_ = r12; PR = 0x0C096528u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C096528u); }  /* 0C096524 jsr @Rn */
L_0C096528: BLKS(0x0C096528u);
	r15 += 0x8u;  /* 0C096528 add #imm,Rn */
	UPD(0x0C09652Au, 1);
L_0C09652A: BLKS(0x0C09652Au);
	r8 = 0xB4u; UPD(0x0C09652Cu, 1);  /* 0C09652A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09652C add #imm,Rn */
	IF(0x0C09652Eu); MACL = r11 * r8;  /* 0C09652E mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C096532u, 4);  /* 0C096530 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C096532 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C096536u, 2);  /* 0C096534 mov.w @(disp,pc),Rn */
	IF(0x0C096536u); r8 = MACL;  /* 0C096536 sts macl,Rn */
	r8 += r3;  /* 0C096538 add Rm,Rn */
	IF(0x0C09653Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09653Cu, 3);  /* 0C09653A mov.b @(r0,Rm),Rn */
	r12 = r4 & 0xFF;  /* 0C09653C extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C096540u, 2);  /* 0C09653E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096540 add #imm,Rn */
	IF(0x0C096542u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096544u, 2);  /* 0C096542 mov.b @(r0,Rm),Rn */
	r0 = r11 & 0xFF;  /* 0C096544 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C096548u, 2);  /* 0C096546 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096410u, 3); goto L_0C096410; }  /* 0C096548 bra */
L_0C096550: BLKS(0x0C096550u);
	r10 = 0xB4u; UPD(0x0C096552u, 1);  /* 0C096550 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096552 add #imm,Rn */
	IF(0x0C096554u); MACL = r11 * r10;  /* 0C096554 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096558u, 4);  /* 0C096556 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09655Au, 1);  /* 0C096558 mov.w @(disp,pc),Rn */
	IF(0x0C09655Au); r8 = MACL;  /* 0C09655A sts macl,Rn */
	r8 += r7;  /* 0C09655C add Rm,Rn */
	IF(0x0C09655Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096560u, 3);  /* 0C09655E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C096560 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C096564u, 2);  /* 0C096562 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096564 add #imm,Rn */
	IF(0x0C096566u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096568u, 2);  /* 0C096566 mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C096568 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C09656A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C09656Eu, 3);  /* 0C09656C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C09656E bra */
L_0C096580: BLKS(0x0C096580u);
	r3 = 0xB4u; UPD(0x0C096582u, 1);  /* 0C096580 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096582 add #imm,Rn */
	IF(0x0C096584u); MACL = r11 * r3;  /* 0C096584 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C096588u, 4);  /* 0C096586 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C096588 mov #imm,Rn */
	IF(0x0C09658Au); r8 = MACL;  /* 0C09658A sts macl,Rn */
	r8 += r0;  /* 0C09658C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C096590u, 4);  /* 0C09658E mov.w @(disp,pc),Rn */
	IF(0x0C096590u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096592u, 1);  /* 0C096590 mov.b @(r0,Rm),Rn */
	r12 = r4 & 0xFF;  /* 0C096592 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C096596u, 2);  /* 0C096594 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096596 add #imm,Rn */
	IF(0x0C096598u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09659Au, 2);  /* 0C096598 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C09659A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09659Eu, 2);  /* 0C09659C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096250u, 3); goto L_0C096250; }  /* 0C09659E bra */
L_0C0965D0: BLKS(0x0C0965D0u);
	r8 = 0xC0A03F0u; UPD(0x0C0965D2u, 1);  /* 0C0965D0 mov.l @(disp,pc),Rn */
	IF(0x0C0965D2u); { u32 t_ = r8; PR = 0x0C0965D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0965D6u); }  /* 0C0965D2 jsr @Rn */
L_0C0965D6: BLKS(0x0C0965D6u);
	IF(0x0C0965D6u); T = (s32)r0 >= 0;  /* 0C0965D6 cmp/pz Rn */
	if (!T) { UPD(0x0C096600u, 4); goto L_0C096600; }  /* 0C0965D8 bf */
L_0C0965DA: BLKS(0x0C0965DAu);
	r4 = r0;  /* 0C0965DA mov Rm,Rn */
	r12 = 0xB4u; UPD(0x0C0965DEu, 2);  /* 0C0965DC mov.w @(disp,pc),Rn */
	IF(0x0C0965DEu); MACL = r0 * r12;  /* 0C0965DE mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0965E2u, 3);  /* 0C0965E0 mov.l @(disp,pc),Rn */
	IF(0x0C0965E2u); r7 = MACL;  /* 0C0965E2 sts macl,Rn */
	r7 += r10;  /* 0C0965E4 add Rm,Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C0965E8u, 3);  /* 0C0965E6 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C0965EAu, 1);  /* 0C0965E8 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0965EA add #imm,Rn */
	IF(0x0C0965ECu); { u32 t_ = r6; PR = 0x0C0965F0u; W32(r7 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0965F0u); }  /* 0C0965EC jsr @Rn */
L_0C0965F0: BLKS(0x0C0965F0u);
	IF(0x0C0965F0u); MACL = r11 * r12;  /* 0C0965F0 mul.l Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0965F2 add #imm,Rn */
	IF(0x0C0965F4u); r8 = MACL;  /* 0C0965F4 sts macl,Rn */
	{ r8 += r10; /* slot add Rm,Rn */ UPD(0x0C09648Cu, 7); goto L_0C09648C; }  /* 0C0965F6 bra */
L_0C096600: BLKS(0x0C096600u);
	r5 = 0xB4u; UPD(0x0C096602u, 1);  /* 0C096600 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C096602 mov #imm,Rn */
	IF(0x0C096604u); MACL = r11 * r5;  /* 0C096604 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C096608u, 4);  /* 0C096606 mov.l @(disp,pc),Rn */
	IF(0x0C096608u); r0 = MACL;  /* 0C096608 sts macl,Rn */
	{ IF(0x0C09660Cu); W32(r0 + r13, r9); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C09660A bra */
L_0C096610: BLKS(0x0C096610u);
	r8 = 0xB4u; UPD(0x0C096612u, 1);  /* 0C096610 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096612 add #imm,Rn */
	IF(0x0C096614u); MACL = r11 * r8;  /* 0C096614 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C096618u, 4);  /* 0C096616 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09661Au, 1);  /* 0C096618 mov.w @(disp,pc),Rn */
	IF(0x0C09661Au); r8 = MACL;  /* 0C09661A sts macl,Rn */
	r8 += r12;  /* 0C09661C add Rm,Rn */
	IF(0x0C09661Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096620u, 3);  /* 0C09661E mov.b @(r0,Rm),Rn */
	r5 = r10 & 0xFF;  /* 0C096620 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C096624u, 2);  /* 0C096622 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096624 add #imm,Rn */
	IF(0x0C096626u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096628u, 2);  /* 0C096626 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C096628 mov #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C09662A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09662Eu, 3);  /* 0C09662C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096470u, 3); goto L_0C096470; }  /* 0C09662E bra */
L_0C096640: BLKS(0x0C096640u);
	r3 = 0xB4u; UPD(0x0C096642u, 1);  /* 0C096640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096642 add #imm,Rn */
	IF(0x0C096644u); MACL = r11 * r3;  /* 0C096644 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C096648u, 4);  /* 0C096646 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C096648 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09664Cu, 2);  /* 0C09664A mov.w @(disp,pc),Rn */
	IF(0x0C09664Cu); r8 = MACL;  /* 0C09664C sts macl,Rn */
	r8 += r4;  /* 0C09664E add Rm,Rn */
	IF(0x0C096650u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096652u, 3);  /* 0C096650 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C096652 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096656u, 2);  /* 0C096654 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096656 add #imm,Rn */
	IF(0x0C096658u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09665Au, 2);  /* 0C096658 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C09665A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09665Eu, 2);  /* 0C09665C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C096410u, 3); goto L_0C096410; }  /* 0C09665E bra */
L_0C096670: BLKS(0x0C096670u);
	r9 = 0xB4u; UPD(0x0C096672u, 1);  /* 0C096670 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096672 add #imm,Rn */
	IF(0x0C096674u); MACL = r11 * r9;  /* 0C096674 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C096678u, 4);  /* 0C096676 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C096678 mov #imm,Rn */
	IF(0x0C09667Au); r8 = MACL;  /* 0C09667A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09667Eu, 3);  /* 0C09667C mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09667E add Rm,Rn */
	IF(0x0C096680u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C096682u, 2);  /* 0C096680 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C096682 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C096686u, 2);  /* 0C096684 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C096686 add #imm,Rn */
	IF(0x0C096688u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09668Au, 2);  /* 0C096688 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C09668A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09668Eu, 2);  /* 0C09668C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AB240u; UPD(0x0C096690u, 1);  /* 0C09668E mov.l @(disp,pc),Rn */
	r12 = 0xC0A0540u; UPD(0x0C096692u, 1);  /* 0C096690 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C096694u, 1);  /* 0C096692 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C096696u, 1);  /* 0C096694 mov.l @(disp,Rm),Rn */
	IF(0x0C096696u); { u32 t_ = r13; PR = 0x0C09669Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C09669Au); }  /* 0C096696 jsr @Rn */
L_0C09669A: BLKS(0x0C09669Au);
	r15 += 0x8u;  /* 0C09669A add #imm,Rn */
	IF(0x0C09669Cu); { u32 t_ = r12; PR = 0x0C0966A0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0966A0u); }  /* 0C09669C jsr @Rn */
L_0C0966A0: BLKS(0x0C0966A0u);
	r1 = ~r0;  /* 0C0966A0 not Rm,Rn */
	r8 += 0x3Cu;  /* 0C0966A2 add #imm,Rn */
	IF(0x0C0966A4u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0966A4 rotl Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0966A8u, 4);  /* 0C0966A6 mov.w @Rm,Rn */
	IF(0x0C0966A8u); r13 = T;  /* 0C0966A8 movt Rn */
	T = (r5 & r5) == 0;  /* 0C0966AA tst Rm,Rn */
	IF(0x0C0966ACu); r0 = T;  /* 0C0966AC movt Rn */
	r13 &= r0;  /* 0C0966AE and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0966B0 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0966CCu, 8); goto L_0C0966CC; } goto L_0C0966B6; }  /* 0C0966B2 bt/s */
L_0C0966B6: BLKS(0x0C0966B6u);
	r8 += 0x7Eu;  /* 0C0966B6 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0966BAu, 3);  /* 0C0966B8 mov.w @Rm,Rn */
	IF(0x0C0966BAu); MACL = r0 * r9;  /* 0C0966BA mul.l Rm,Rn */
	r11 = 0xA5u; UPD(0x0C0966BEu, 3);  /* 0C0966BC mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0966BE add #imm,Rn */
	IF(0x0C0966C0u); r9 = MACL;  /* 0C0966C0 sts macl,Rn */
	r9 += r10;  /* 0C0966C2 add Rm,Rn */
	r9 += r11;  /* 0C0966C4 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0966C8u, 5);  /* 0C0966C6 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0966C8 add #imm,Rn */
	W8(r9, r10); UPD(0x0C0966CCu, 2);  /* 0C0966CA mov.b Rm,@Rn */
L_0C0966CC: BLKS(0x0C0966CCu);
	r3 = 0x0u;  /* 0C0966CC mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 4); goto L_0C096218; }  /* 0C0966CE bra */
L_0C0966E0: BLKS(0x0C0966E0u);
	r8 = 0xB4u; UPD(0x0C0966E2u, 1);  /* 0C0966E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0966E2 add #imm,Rn */
	IF(0x0C0966E4u); MACL = r11 * r8;  /* 0C0966E4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0966E8u, 4);  /* 0C0966E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0966EAu, 1);  /* 0C0966E8 mov.w @(disp,pc),Rn */
	IF(0x0C0966EAu); r8 = MACL;  /* 0C0966EA sts macl,Rn */
	r8 += r7;  /* 0C0966EC add Rm,Rn */
	IF(0x0C0966EEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0966F0u, 3);  /* 0C0966EE mov.b @(r0,Rm),Rn */
	r13 = r6 & 0xFF;  /* 0C0966F0 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C0966F4u, 2);  /* 0C0966F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0966F4 add #imm,Rn */
	IF(0x0C0966F6u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0966F8u, 2);  /* 0C0966F6 mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C0966F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0966FCu, 2);  /* 0C0966FA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0966FEu, 1);  /* 0C0966FC mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C096440u, 3); goto L_0C096440; }  /* 0C0966FE bra */
L_0C096710: BLKS(0x0C096710u);
	r8 = 0xB4u; UPD(0x0C096712u, 1);  /* 0C096710 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C096712 add #imm,Rn */
	IF(0x0C096714u); MACL = r11 * r8;  /* 0C096714 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C096718u, 4);  /* 0C096716 mov.l @(disp,pc),Rn */
	IF(0x0C096718u); r10 = MACL;  /* 0C096718 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09671Cu, 2);  /* 0C09671A mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C09671C add Rm,Rn */
	IF(0x0C09671Eu); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C096720u, 2);  /* 0C09671E mov.b @(r0,Rm),Rn */
	r11 = 0x0u;  /* 0C096720 mov #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C096722 extu.b Rm,Rn */
	r12 = 0xA9u; UPD(0x0C096726u, 3);  /* 0C096724 mov.w @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C096728u, 1);  /* 0C096726 mov.l Rm,@Rn */
	r12 += r10;  /* 0C096728 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C09672Cu, 2);  /* 0C09672A mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C09672C mov #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C09672E extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C096732u, 3);  /* 0C096730 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AB240u; UPD(0x0C096734u, 1);  /* 0C096732 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C096736u, 1);  /* 0C096734 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C096738u, 1);  /* 0C096736 mov.l @(disp,Rm),Rn */
	IF(0x0C096738u); { u32 t_ = r13; PR = 0x0C09673Cu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C09673Cu); }  /* 0C096738 jsr @Rn */
L_0C09673C: BLKS(0x0C09673Cu);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C09673Eu, 1);  /* 0C09673C mov.b @Rm,Rn */
	r4 = 0x20000u; UPD(0x0C096740u, 1);  /* 0C09673E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C096740 extu.b Rm,Rn */
	r9 = 0xC7C27B0u; UPD(0x0C096744u, 2);  /* 0C096742 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C096746u, 1);  /* 0C096744 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C096748u, 1);  /* 0C096746 mov.l Rm,@(disp,Rn) */
	r4 = 0x8u;  /* 0C096748 mov #imm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C09674Cu, 2);  /* 0C09674A mov.l @(disp,Rm),Rn */
	IF(0x0C09674Cu); { u32 t_ = r9; PR = 0x0C096750u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C096750u); }  /* 0C09674C jsr @Rn */
L_0C096750: BLKS(0x0C096750u);
	{ W32(r10, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C09625Eu, 3); goto L_0C09625E; }  /* 0C096750 bra */
L_0C096760: BLKS(0x0C096760u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C096218u, 3); goto L_0C096218; }  /* 0C096760 bra */
L_0C0972D0: BLKS(0x0C0972D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0972D2u, 1);  /* 0C0972D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0972D4u, 1);  /* 0C0972D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0972D6u, 1);  /* 0C0972D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0972D8u, 1);  /* 0C0972D6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0972D8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0972DCu, 2);  /* 0C0972DA mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0972DEu, 1);  /* 0C0972DC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0972E0u, 1);  /* 0C0972DE mov.l Rm,@-Rn */
	IF(0x0C0972E0u); MACL = r10 * r2;  /* 0C0972E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0972E4u, 3);  /* 0C0972E2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0972E6u, 1);  /* 0C0972E4 mov.l @(disp,pc),Rn */
	IF(0x0C0972E6u); r3 = MACL;  /* 0C0972E6 sts macl,Rn */
	IF(0x0C0972E8u); r15 -= 4; W32(r15, PR); UPD(0x0C0972EAu, 2);  /* 0C0972E8 sts.l pr,@-Rn */
	r3 += r0;  /* 0C0972EA add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0972EEu, 2);  /* 0C0972EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0972EE add #imm,Rn */
	r0 = 0x37u;  /* 0C0972F0 mov #imm,Rn */
	T = r2 > r0;  /* 0C0972F2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097300u, 6); goto L_0C097300; } goto L_0C0972F8; }  /* 0C0972F4 bf/s */
L_0C0972F8: BLKS(0x0C0972F8u);
	r0 = 0x2472u; UPD(0x0C0972FAu, 2);  /* 0C0972F8 mov.w @(disp,pc),Rn */
	IF(0x0C0972FAu); { u32 tv_ = (r0 + 0x0C0972FEu); u32 t_ = PHYS(tv_); r2 = R32(r3 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C099770u: goto L_0C099770; default: JUMPD(tv_); } }  /* 0C0972FA braf Rn */
L_0C097300: BLKS(0x0C097300u);
	r0 = 0xC097310u;  /* 0C097300 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C097302 add Rm,Rn */
	IF(0x0C097304u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C097306u, 3);  /* 0C097304 mov.w @(r0,Rm),Rn */
	IF(0x0C097306u); { u32 tv_ = (r3 + 0x0C09730Au); u32 t_ = PHYS(tv_); IF(0x0C097308u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C097380u: goto L_0C097380; case 0x0C0973C0u: goto L_0C0973C0; case 0x0C097620u: goto L_0C097620; case 0x0C097850u: goto L_0C097850; case 0x0C0978E0u: goto L_0C0978E0; case 0x0C0979B0u: goto L_0C0979B0; case 0x0C0979E0u: goto L_0C0979E0; case 0x0C097A80u: goto L_0C097A80; case 0x0C097B00u: goto L_0C097B00; case 0x0C097B10u: goto L_0C097B10; case 0x0C097C40u: goto L_0C097C40; case 0x0C097DB0u: goto L_0C097DB0; case 0x0C097F10u: goto L_0C097F10; case 0x0C098080u: goto L_0C098080; case 0x0C098290u: goto L_0C098290; case 0x0C098430u: goto L_0C098430; case 0x0C098480u: goto L_0C098480; case 0x0C0984D0u: goto L_0C0984D0; case 0x0C098670u: goto L_0C098670; case 0x0C0988A0u: goto L_0C0988A0; case 0x0C0988E0u: goto L_0C0988E0; case 0x0C098A40u: goto L_0C098A40; case 0x0C098BB0u: goto L_0C098BB0; case 0x0C098EE0u: goto L_0C098EE0; case 0x0C098F40u: goto L_0C098F40; case 0x0C099140u: goto L_0C099140; case 0x0C0992A0u: goto L_0C0992A0; case 0x0C0993E0u: goto L_0C0993E0; case 0x0C099540u: goto L_0C099540; case 0x0C0995D0u: goto L_0C0995D0; case 0x0C099630u: goto L_0C099630; default: JUMPD(tv_); } }  /* 0C097306 braf Rn */
L_0C097380: BLKS(0x0C097380u);
	r7 = 0xC096790u; UPD(0x0C097382u, 1);  /* 0C097380 mov.l @(disp,pc),Rn */
	IF(0x0C097382u); { u32 t_ = r7; PR = 0x0C097386u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C096790, 0x0C096790u, 0x0C097386u); }  /* 0C097382 jsr @Rn */
L_0C097386: BLKS(0x0C097386u);
	r6 = 0xB4u; UPD(0x0C097388u, 1);  /* 0C097386 mov.w @(disp,pc),Rn */
	IF(0x0C097388u); MACL = r10 * r6;  /* 0C097388 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09738Cu, 3);  /* 0C09738A mov.l @(disp,pc),Rn */
	IF(0x0C09738Cu); r3 = MACL;  /* 0C09738C sts macl,Rn */
	r3 += r5;  /* 0C09738E add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C097392u, 3);  /* 0C097390 mov.l @(disp,Rm),Rn */
	r4 = 0xFF800000u; UPD(0x0C097394u, 1);  /* 0C097392 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C097394 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09739Cu, 4); goto L_0C09739C; }  /* 0C097396 bt */
L_0C097398: BLKS(0x0C097398u);
	r8 = 0x0u;  /* 0C097398 mov #imm,Rn */
	W32(r3, r8); UPD(0x0C09739Cu, 2);  /* 0C09739A mov.l Rm,@Rn */
L_0C09739C: BLKS(0x0C09739Cu);
	r14 += 0x20u;  /* 0C09739C add #imm,Rn */
	UPD(0x0C09739Eu, 1);
L_0C09739E: BLKS(0x0C09739Eu);
	r15 = r14;  /* 0C09739E mov Rm,Rn */
	IF(0x0C0973A0u); PR = R32(r15); r15 += 4; UPD(0x0C0973A2u, 2);  /* 0C0973A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0973A4u, 1);  /* 0C0973A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0973A6u, 1);  /* 0C0973A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0973A8u, 1);  /* 0C0973A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0973AAu, 1);  /* 0C0973A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0973ACu, 1);  /* 0C0973AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0973AEu, 1);  /* 0C0973AC mov.l @Rm+,Rn */
	IF(0x0C0973AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0973AE rts */
L_0C0973C0: BLKS(0x0C0973C0u);
	r9 = 0xC0A03F0u; UPD(0x0C0973C2u, 1);  /* 0C0973C0 mov.l @(disp,pc),Rn */
	IF(0x0C0973C2u); { u32 t_ = r9; PR = 0x0C0973C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0973C6u); }  /* 0C0973C2 jsr @Rn */
L_0C0973C6: BLKS(0x0C0973C6u);
	IF(0x0C0973C6u); T = (s32)r0 >= 0;  /* 0C0973C6 cmp/pz Rn */
	if (T) { UPD(0x0C0973CEu, 4); goto L_0C0973CE; }  /* 0C0973C8 bt */
L_0C0973CA: BLKS(0x0C0973CAu);
	{ IF(0x0C0973CCu); ; /* slot nop */ UPD(0x0C0975D0u, 3); goto L_0C0975D0; }  /* 0C0973CA bra */
L_0C0973CE: BLKS(0x0C0973CEu);
	r2 = 0xB4u; UPD(0x0C0973D0u, 1);  /* 0C0973CE mov.w @(disp,pc),Rn */
	IF(0x0C0973D0u); MACL = r10 * r2;  /* 0C0973D0 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0973D4u, 3);  /* 0C0973D2 mov.l @(disp,pc),Rn */
	IF(0x0C0973D4u); r4 = MACL;  /* 0C0973D4 sts macl,Rn */
	IF(0x0C0973D6u); MACL = r0 * r2;  /* 0C0973D6 mul.l Rm,Rn */
	r4 += r12;  /* 0C0973D8 add Rm,Rn */
	r11 = R32(r4 + 0x2Cu); UPD(0x0C0973DCu, 5);  /* 0C0973DA mov.l @(disp,Rm),Rn */
	IF(0x0C0973DCu); r13 = MACL;  /* 0C0973DC sts macl,Rn */
	r13 += r12;  /* 0C0973DE add Rm,Rn */
	r7 = R32(r13 + 0x24u); UPD(0x0C0973E2u, 3);  /* 0C0973E0 mov.l @(disp,Rm),Rn */
	r0 = 0x1Eu;  /* 0C0973E2 mov #imm,Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C0973E6u, 2);  /* 0C0973E4 mov.l @(disp,Rm),Rn */
	r7 += r11;  /* 0C0973E6 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C0973EAu, 2);  /* 0C0973E8 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C0973EA add Rm,Rn */
	W32(r4 + 0x24u, r7); UPD(0x0C0973EEu, 2);  /* 0C0973EC mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r8); UPD(0x0C0973F0u, 1);  /* 0C0973EE mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C0973F0 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C0973F4u, 2);  /* 0C0973F2 mov.w @Rm,Rn */
	r4 += 0xFFFFFF82u;  /* 0C0973F4 add #imm,Rn */
	r2 = R32(r4 + 0xCu); UPD(0x0C0973F8u, 2);  /* 0C0973F6 mov.l @(disp,Rm),Rn */
	T = r2 > r0;  /* 0C0973F8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09749Au, 4); goto L_0C09749A; }  /* 0C0973FA bt */
L_0C0973FC: BLKS(0x0C0973FCu);
	r0 = 0xC097418u;  /* 0C0973FC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0973FE add Rm,Rn */
	IF(0x0C097400u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C097402u, 3);  /* 0C097400 mov.w @(r0,Rm),Rn */
	IF(0x0C097402u); { u32 tv_ = (r5 + 0x0C097406u); u32 t_ = PHYS(tv_); IF(0x0C097404u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C097460u: goto L_0C097460; case 0x0C09749Au: goto L_0C09749A; case 0x0C0974F0u: goto L_0C0974F0; case 0x0C097512u: goto L_0C097512; default: JUMPD(tv_); } }  /* 0C097402 braf Rn */
L_0C097460: BLKS(0x0C097460u);
	r3 = 0xB4u; UPD(0x0C097462u, 1);  /* 0C097460 mov.w @(disp,pc),Rn */
	IF(0x0C097462u); MACL = r11 * r3;  /* 0C097462 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C097466u, 3);  /* 0C097464 mov.l @(disp,pc),Rn */
	IF(0x0C097466u); r2 = MACL;  /* 0C097466 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C09746Au, 2);  /* 0C097468 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C09746A add Rm,Rn */
	r2 += r1;  /* 0C09746C add Rm,Rn */
	r2 += 0x1u;  /* 0C09746E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C097472u, 4);  /* 0C097470 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C097472 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C097474 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0974D0u, 5); goto L_0C0974D0; } goto L_0C09747A; }  /* 0C097476 bf/s */
L_0C09747A: BLKS(0x0C09747Au);
	IF(0x0C09747Au); MACL = r10 * r3;  /* 0C09747A mul.l Rm,Rn */
	r2 += 0x2u;  /* 0C09747C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C097480u, 5);  /* 0C09747E mov.b @Rm,Rn */
	IF(0x0C097480u); r3 = MACL;  /* 0C097480 sts macl,Rn */
	r3 += r7;  /* 0C097482 add Rm,Rn */
	r1 += r3;  /* 0C097484 add Rm,Rn */
	r1 += 0x1u;  /* 0C097486 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r1); UPD(0x0C09748Au, 5);  /* 0C097488 mov.b @Rm,Rn */
	T = (r0 & r9) == 0;  /* 0C09748A tst Rm,Rn */
	if (T) { UPD(0x0C09739Cu, 4); goto L_0C09739C; }  /* 0C09748C bt */
L_0C09748E: BLKS(0x0C09748Eu);
	r4 = 0x1u;  /* 0C09748E mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C097492u, 2);  /* 0C097490 mov.w @(disp,pc),Rn */
	r8 = 0xC0AFC10u; UPD(0x0C097494u, 1);  /* 0C097492 mov.l @(disp,pc),Rn */
	IF(0x0C097494u); W16(r0 + r3, r4); UPD(0x0C097496u, 1);  /* 0C097494 mov.w Rm,@(r0,Rn) */
	IF(0x0C097496u); { u32 t_ = r8; PR = 0x0C09749Au; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09749Au); }  /* 0C097496 jsr @Rn */
L_0C09749A: BLKS(0x0C09749Au);
	r8 = 0xB4u; UPD(0x0C09749Cu, 1);  /* 0C09749A mov.w @(disp,pc),Rn */
	IF(0x0C09749Cu); MACL = r10 * r8;  /* 0C09749C mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0974A0u, 3);  /* 0C09749E mov.l @(disp,pc),Rn */
	IF(0x0C0974A0u); r11 = MACL;  /* 0C0974A0 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0974A4u, 2);  /* 0C0974A2 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C0974A4 add Rm,Rn */
	r6 = R32(r11 + 0xCu); UPD(0x0C0974A8u, 2);  /* 0C0974A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0974A8u); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0974AAu, 1);  /* 0C0974A8 mov.w @(r0,Rm),Rn */
	r6 += r1;  /* 0C0974AA add Rm,Rn */
	W32(r11 + 0xCu, r6); UPD(0x0C0974AEu, 2);  /* 0C0974AC mov.l Rm,@(disp,Rn) */
L_0C0974AE: BLKS(0x0C0974AEu);
	r1 = 0xC0A0380u; UPD(0x0C0974B0u, 1);  /* 0C0974AE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0974B0 mov Rm,Rn */
	UPD(0x0C0974B2u, 1);
L_0C0974B2: BLKS(0x0C0974B2u);
	r14 += 0x20u;  /* 0C0974B2 add #imm,Rn */
	UPD(0x0C0974B4u, 1);
L_0C0974B4: BLKS(0x0C0974B4u);
	r15 = r14;  /* 0C0974B4 mov Rm,Rn */
	IF(0x0C0974B6u); PR = R32(r15); r15 += 4; UPD(0x0C0974B8u, 2);  /* 0C0974B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0974BAu, 1);  /* 0C0974B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0974BCu, 1);  /* 0C0974BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0974BEu, 1);  /* 0C0974BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0974C0u, 1);  /* 0C0974BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0974C2u, 1);  /* 0C0974C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0974C4u, 1);  /* 0C0974C2 mov.l @Rm+,Rn */
	IF(0x0C0974C4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C096140u: goto L_0C096140; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0974C4 jmp @Rn */
L_0C0974D0: BLKS(0x0C0974D0u);
	IF(0x0C0974D0u); MACL = r10 * r3;  /* 0C0974D0 mul.l Rm,Rn */
	IF(0x0C0974D2u); r3 = MACL;  /* 0C0974D2 sts macl,Rn */
	r3 += r7;  /* 0C0974D4 add Rm,Rn */
	r6 = R32(r3 + 0x8u); UPD(0x0C0974D8u, 5);  /* 0C0974D6 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C0974D8 add #imm,Rn */
	W32(r3 + 0x8u, r6); UPD(0x0C0974DCu, 2);  /* 0C0974DA mov.l Rm,@(disp,Rn) */
L_0C0974DC: BLKS(0x0C0974DCu);
	r1 = 0xC0A03B0u; UPD(0x0C0974DEu, 1);  /* 0C0974DC mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0974B2u, 3); goto L_0C0974B2; }  /* 0C0974DE bra */
L_0C0974F0: BLKS(0x0C0974F0u);
	r2 = 0xB4u; UPD(0x0C0974F2u, 1);  /* 0C0974F0 mov.w @(disp,pc),Rn */
	IF(0x0C0974F2u); MACL = r11 * r2;  /* 0C0974F2 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0974F6u, 3);  /* 0C0974F4 mov.l @(disp,pc),Rn */
	IF(0x0C0974F6u); r1 = MACL;  /* 0C0974F6 sts macl,Rn */
	IF(0x0C0974F8u); MACL = r10 * r2;  /* 0C0974F8 mul.l Rm,Rn */
	r11 = 0xA0u; UPD(0x0C0974FCu, 4);  /* 0C0974FA mov.w @(disp,pc),Rn */
	r1 += r12;  /* 0C0974FC add Rm,Rn */
	IF(0x0C0974FEu); r3 = MACL;  /* 0C0974FE sts macl,Rn */
	r1 += r11;  /* 0C097500 add Rm,Rn */
	r3 += r12;  /* 0C097502 add Rm,Rn */
	r11 += r3;  /* 0C097504 add Rm,Rn */
	r1 += 0x2u;  /* 0C097506 add #imm,Rn */
	r11 += 0x1u;  /* 0C097508 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C09750Cu, 8);  /* 0C09750A mov.b @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r11); UPD(0x0C09750Eu, 1);  /* 0C09750C mov.b @Rm,Rn */
	T = (r7 & r13) == 0;  /* 0C09750E tst Rm,Rn */
	if (T) { UPD(0x0C0975C0u, 4); goto L_0C0975C0; }  /* 0C097510 bt */
L_0C097512: BLKS(0x0C097512u);
	r4 = 0xB4u; UPD(0x0C097514u, 1);  /* 0C097512 mov.w @(disp,pc),Rn */
	IF(0x0C097514u); MACL = r10 * r4;  /* 0C097514 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097518u, 3);  /* 0C097516 mov.l @(disp,pc),Rn */
	IF(0x0C097518u); r3 = MACL;  /* 0C097518 sts macl,Rn */
	r3 += r0;  /* 0C09751A add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C09751Eu, 3);  /* 0C09751C mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09751E mov Rm,Rn */
	r8 = 0xC1CC8B4u; UPD(0x0C097522u, 2);  /* 0C097520 mov.l @(disp,pc),Rn */
	IF(0x0C097522u); r0 <<= 2;  /* 0C097522 shll2 Rn */
	IF(0x0C097524u); r6 = R32(r0 + r8); UPD(0x0C097526u, 2);  /* 0C097524 mov.l @(r0,Rm),Rn */
	r5 = 0xC0A0380u; UPD(0x0C097528u, 1);  /* 0C097526 mov.l @(disp,pc),Rn */
	r9 = 0xC0A9E40u; UPD(0x0C09752Au, 1);  /* 0C097528 mov.l @(disp,pc),Rn */
	IF(0x0C09752Au); { u32 t_ = r5; PR = 0x0C09752Eu; W32(r3 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09752Eu); }  /* 0C09752A jsr @Rn */
L_0C09752E: BLKS(0x0C09752Eu);
	r4 = r10;  /* 0C09752E mov Rm,Rn */
	r5 = 0x4u;  /* 0C097530 mov #imm,Rn */
	IF(0x0C097532u); { u32 t_ = r9; PR = 0x0C097536u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C097536u); }  /* 0C097532 jsr @Rn */
L_0C097536: BLKS(0x0C097536u);
	T = (r0 & r0) == 0;  /* 0C097536 tst Rm,Rn */
	if (T) { UPD(0x0C097572u, 4); goto L_0C097572; }  /* 0C097538 bt */
L_0C09753A: BLKS(0x0C09753Au);
	r13 = 0x0u;  /* 0C09753A mov #imm,Rn */
	W32(r14, r13); UPD(0x0C09753Eu, 2);  /* 0C09753C mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C09753E mov #imm,Rn */
	UPD(0x0C097540u, 1);
L_0C097540: BLKS(0x0C097540u);
	r11 = 0xB4u; UPD(0x0C097542u, 1);  /* 0C097540 mov.w @(disp,pc),Rn */
	IF(0x0C097542u); MACL = r10 * r11;  /* 0C097542 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C097546u, 3);  /* 0C097544 mov.l @(disp,pc),Rn */
	IF(0x0C097546u); r11 = MACL;  /* 0C097546 sts macl,Rn */
	r11 += r9;  /* 0C097548 add Rm,Rn */
	r2 = R32(r11 + 0xCu); UPD(0x0C09754Cu, 3);  /* 0C09754A mov.l @(disp,Rm),Rn */
	r2 += r12;  /* 0C09754C add Rm,Rn */
	IF(0x0C09754Eu); r2 <<= 2;  /* 0C09754E shll2 Rn */
	r2 += 0xFFFFFFC4u;  /* 0C097550 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C097552 exts.w Rm,Rn */
	r13 += 0xFFFFFFC0u;  /* 0C097554 add #imm,Rn */
	r7 = 0x180u; UPD(0x0C097558u, 6);  /* 0C097556 mov.w @(disp,pc),Rn */
	r1 = r13 & 0xFFFF;  /* 0C097558 extu.w Rm,Rn */
	T = r1 > r7;  /* 0C09755A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r13 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097580u, 5); goto L_0C097580; } UPD(0x0C097560u, 1); goto L_0C097560; }  /* 0C09755C bf/s */
L_0C097560: BLKS(0x0C097560u);
	r11 = R32(r14); UPD(0x0C097562u, 1);  /* 0C097560 mov.l @Rm,Rn */
	r0 = 0x7u;  /* 0C097562 mov #imm,Rn */
	r11 += 0x1u;  /* 0C097564 add #imm,Rn */
	r2 = (u32)(s32)(s16)r11;  /* 0C097566 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C09756Au, 4);  /* 0C097568 mov.l Rm,@Rn */
	r13 = R32(r14); UPD(0x0C09756Cu, 1);  /* 0C09756A mov.l @Rm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C09756C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097540u, 4); goto L_0C097540; } UPD(0x0C097572u, 1); goto L_0C097572; }  /* 0C09756E bf/s */
L_0C097572: BLKS(0x0C097572u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097572 bra */
L_0C097580: BLKS(0x0C097580u);
	r9 = 0xC058060u; UPD(0x0C097582u, 1);  /* 0C097580 mov.l @(disp,pc),Rn */
	r5 = 0x300000u; UPD(0x0C097584u, 1);  /* 0C097582 mov.l @(disp,pc),Rn */
	IF(0x0C097584u); { u32 t_ = r9; PR = 0x0C097588u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097588u); }  /* 0C097584 jsr @Rn */
L_0C097588: BLKS(0x0C097588u);
	r7 = 0x66666667u; UPD(0x0C09758Au, 1);  /* 0C097588 mov.l @(disp,pc),Rn */
	IF(0x0C09758Au); r0 <<= 2;  /* 0C09758A shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r7; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09758C dmuls.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C097590u, 4);  /* 0C09758E mov.l @(disp,Rm),Rn */
	IF(0x0C097590u); r4 = MACH;  /* 0C097590 sts mach,Rn */
	IF(0x0C097592u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C097592 shar Rn */
	IF(0x0C097594u); T = r0 >> 31; r0 <<= 1;  /* 0C097594 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C097596 subc Rm,Rn */
	r4 -= r0;  /* 0C097598 sub Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09759Cu, 6);  /* 0C09759A mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C09759C add Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0975A0u, 2);  /* 0C09759E mov.l Rm,@(disp,Rn) */
	r5 = 0x300000u; UPD(0x0C0975A2u, 1);  /* 0C0975A0 mov.l @(disp,pc),Rn */
	IF(0x0C0975A2u); { u32 t_ = r8; PR = 0x0C0975A6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0975A6u); }  /* 0C0975A2 jsr @Rn */
L_0C0975A6: BLKS(0x0C0975A6u);
	r6 = R32(r11 + 0x28u); UPD(0x0C0975A8u, 1);  /* 0C0975A6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0975A8 add #imm,Rn */
	r5 = 0x38000u; UPD(0x0C0975ACu, 2);  /* 0C0975AA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0975AC add Rm,Rn */
	r3 = 0xC7C17D0u; UPD(0x0C0975B0u, 2);  /* 0C0975AE mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0975B0 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0975B4u, 2);  /* 0C0975B2 mov.l Rm,@Rn */
	r7 = r13;  /* 0C0975B4 mov Rm,Rn */
	IF(0x0C0975B6u); { u32 t_ = r3; PR = 0x0C0975BAu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C0975BAu); }  /* 0C0975B6 jsr @Rn */
L_0C0975BA: BLKS(0x0C0975BAu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C097560u, 3); goto L_0C097560; }  /* 0C0975BA bra */
L_0C0975C0: BLKS(0x0C0975C0u);
	r0 = 0x88u; UPD(0x0C0975C2u, 1);  /* 0C0975C0 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0975C2 mov #imm,Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C0975C6u, 2);  /* 0C0975C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0975C6u); W16(r0 + r3, r11); UPD(0x0C0975C8u, 1);  /* 0C0975C6 mov.w Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFFu;  /* 0C0975C8 add #imm,Rn */
	UPD(0x0C0975CAu, 1);
L_0C0975CA: BLKS(0x0C0975CAu);
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0974AEu, 3); goto L_0C0974AE; }  /* 0C0975CA bra */
L_0C0975D0: BLKS(0x0C0975D0u);
	r1 = 0xC7C2A18u; UPD(0x0C0975D2u, 1);  /* 0C0975D0 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0974B2u, 3); goto L_0C0974B2; }  /* 0C0975D2 bra */
L_0C097620: BLKS(0x0C097620u);
	r12 = 0xC0A0540u; UPD(0x0C097622u, 1);  /* 0C097620 mov.l @(disp,pc),Rn */
	IF(0x0C097622u); { u32 t_ = r12; PR = 0x0C097626u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C097626u); }  /* 0C097622 jsr @Rn */
L_0C097626: BLKS(0x0C097626u);
	IF(0x0C097626u); T = (s32)r0 >= 0;  /* 0C097626 cmp/pz Rn */
	if (!T) { UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C097628 bf */
L_0C09762A: BLKS(0x0C09762Au);
	r5 = 0xB4u; UPD(0x0C09762Cu, 1);  /* 0C09762A mov.w @(disp,pc),Rn */
	IF(0x0C09762Cu); MACL = r10 * r5;  /* 0C09762C mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C097630u, 3);  /* 0C09762E mov.l @(disp,pc),Rn */
	IF(0x0C097630u); r4 = MACL;  /* 0C097630 sts macl,Rn */
	r4 += r9;  /* 0C097632 add Rm,Rn */
	r6 = R32(r4); UPD(0x0C097636u, 3);  /* 0C097634 mov.l @Rm,Rn */
	IF(0x0C097636u); MACL = r0 * r5;  /* 0C097636 mul.l Rm,Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C09763Au, 3);  /* 0C097638 mov.l @(disp,pc),Rn */
	r6 &= r7;  /* 0C09763A and Rm,Rn */
	W32(r4, r6); UPD(0x0C09763Eu, 2);  /* 0C09763C mov.l Rm,@Rn */
	IF(0x0C09763Eu); r13 = MACL;  /* 0C09763E sts macl,Rn */
	r13 += r9;  /* 0C097640 add Rm,Rn */
	r0 = R32(r13); UPD(0x0C097644u, 3);  /* 0C097642 mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C097646u, 1);  /* 0C097644 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x2Cu); UPD(0x0C097648u, 1);  /* 0C097646 mov.l @(disp,Rm),Rn */
	r0 &= r1;  /* 0C097648 and Rm,Rn */
	r3 = R32(r13 + 0x24u); UPD(0x0C09764Cu, 2);  /* 0C09764A mov.l @(disp,Rm),Rn */
	r6 |= r0;  /* 0C09764C or Rm,Rn */
	r11 = R32(r13 + 0x28u); UPD(0x0C097650u, 2);  /* 0C09764E mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C097650 add Rm,Rn */
	r12 = R32(r4 + 0x30u); UPD(0x0C097654u, 2);  /* 0C097652 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C097654 add Rm,Rn */
	W32(r4 + 0x24u, r3); UPD(0x0C097658u, 2);  /* 0C097656 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r11); UPD(0x0C09765Au, 1);  /* 0C097658 mov.l Rm,@(disp,Rn) */
	W32(r4, r6); UPD(0x0C09765Cu, 1);  /* 0C09765A mov.l Rm,@Rn */
	r4 += 0x7Eu;  /* 0C09765C add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C097660u, 2);  /* 0C09765E mov.w @Rm,Rn */
	IF(0x0C097660u); MACL = r11 * r5;  /* 0C097660 mul.l Rm,Rn */
	IF(0x0C097662u); r8 = MACL;  /* 0C097662 sts macl,Rn */
	r8 += r9;  /* 0C097664 add Rm,Rn */
	r8 += 0x3Cu;  /* 0C097666 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C09766Au, 6);  /* 0C097668 mov.w @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09766A tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097754u, 4); goto L_0C097754; } goto L_0C097670; }  /* 0C09766C bt/s */
L_0C097670: BLKS(0x0C097670u);
	r3 = R32(r4 + 0xCu); UPD(0x0C097672u, 2);  /* 0C097670 mov.l @(disp,Rm),Rn */
	r4 = 0x25u;  /* 0C097672 mov #imm,Rn */
	T = r3 > r4;  /* 0C097674 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C097720u, 5); goto L_0C097720; }  /* 0C097676 bt */
L_0C097678: BLKS(0x0C097678u);
	r0 = 0xC097694u;  /* 0C097678 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09767A add Rm,Rn */
	IF(0x0C09767Cu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09767Eu, 3);  /* 0C09767C mov.w @(r0,Rm),Rn */
	IF(0x0C09767Eu); { u32 tv_ = (r2 + 0x0C097682u); u32 t_ = PHYS(tv_); IF(0x0C097680u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0976E0u: goto L_0C0976E0; case 0x0C097720u: goto L_0C097720; case 0x0C097770u: goto L_0C097770; case 0x0C09778Cu: goto L_0C09778C; default: JUMPD(tv_); } }  /* 0C09767E braf Rn */
L_0C0976E0: BLKS(0x0C0976E0u);
	r2 = 0xB4u; UPD(0x0C0976E2u, 1);  /* 0C0976E0 mov.w @(disp,pc),Rn */
	IF(0x0C0976E2u); MACL = r11 * r2;  /* 0C0976E2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0976E6u, 3);  /* 0C0976E4 mov.l @(disp,pc),Rn */
	IF(0x0C0976E6u); r0 = MACL;  /* 0C0976E6 sts macl,Rn */
	r5 = 0xA2u; UPD(0x0C0976EAu, 2);  /* 0C0976E8 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0976EA add Rm,Rn */
	IF(0x0C0976ECu); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0976EEu, 2);  /* 0C0976EC mov.b @(r0,Rm),Rn */
	IF(0x0C0976EEu); T = (s32)r9 >= 0;  /* 0C0976EE cmp/pz Rn */
	if (T) { UPD(0x0C097754u, 4); goto L_0C097754; }  /* 0C0976F0 bt */
L_0C0976F2: BLKS(0x0C0976F2u);
	IF(0x0C0976F2u); MACL = r10 * r2;  /* 0C0976F2 mul.l Rm,Rn */
	r4 = r10;  /* 0C0976F4 mov Rm,Rn */
	r7 = 0x10u;  /* 0C0976F6 mov #imm,Rn */
	IF(0x0C0976F8u); r0 = MACL;  /* 0C0976F8 sts macl,Rn */
	r0 += r3;  /* 0C0976FA add Rm,Rn */
	r2 += 0xFFFFFFE8u;  /* 0C0976FC add #imm,Rn */
	r6 = R32(r0 + 0xCu); UPD(0x0C097700u, 8);  /* 0C0976FE mov.l @(disp,Rm),Rn */
	r13 = 0x1u;  /* 0C097700 mov #imm,Rn */
	IF(0x0C097702u); W8(r0 + r2, r7); UPD(0x0C097704u, 2);  /* 0C097702 mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C097704 add #imm,Rn */
	r10 = 0xC0A0380u; UPD(0x0C097708u, 2);  /* 0C097706 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFECu;  /* 0C097708 add #imm,Rn */
	IF(0x0C09770Au); W16(r0 + r2, r13); UPD(0x0C09770Cu, 2);  /* 0C09770A mov.w Rm,@(r0,Rn) */
	IF(0x0C09770Cu); { u32 t_ = r10; PR = 0x0C097710u; W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097710u); }  /* 0C09770C jsr @Rn */
L_0C097710: BLKS(0x0C097710u);
	r4 = 0x6Cu;  /* 0C097710 mov #imm,Rn */
	UPD(0x0C097712u, 1);
L_0C097712: BLKS(0x0C097712u);
	r1 = 0xC0AFC10u; UPD(0x0C097714u, 1);  /* 0C097712 mov.l @(disp,pc),Rn */
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C0974B4u, 3); goto L_0C0974B4; }  /* 0C097714 bra */
L_0C097720: BLKS(0x0C097720u);
	r12 = 0xB4u; UPD(0x0C097722u, 1);  /* 0C097720 mov.w @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C097722 mov #imm,Rn */
	IF(0x0C097724u); MACL = r10 * r12;  /* 0C097724 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C097728u, 4);  /* 0C097726 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09772Au, 1);  /* 0C097728 mov.w @(disp,pc),Rn */
	IF(0x0C09772Au); r8 = MACL;  /* 0C09772A sts macl,Rn */
	r8 += r9;  /* 0C09772C add Rm,Rn */
	IF(0x0C09772Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C097730u, 3);  /* 0C09772E mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C097730 add #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C097732 extu.b Rm,Rn */
	T = r4 > r3;  /* 0C097734 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097738u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C097754u, 6); goto L_0C097754; } UPD(0x0C09773Au, 1); goto L_0C09773A; }  /* 0C097736 bf/s */
L_0C09773A: BLKS(0x0C09773Au);
	r13 = 0x0u;  /* 0C09773A mov #imm,Rn */
	IF(0x0C09773Cu); W8(r0 + r8, r13); UPD(0x0C09773Eu, 2);  /* 0C09773C mov.b Rm,@(r0,Rn) */
	r4 = r10;  /* 0C09773E mov Rm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C097740 add #imm,Rn */
	IF(0x0C097742u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C097744u, 3);  /* 0C097742 mov.w @(r0,Rm),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C097746u, 1);  /* 0C097744 mov.l @(disp,Rm),Rn */
	r5 = 0xC0A0380u; UPD(0x0C097748u, 1);  /* 0C097746 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C097748 add Rm,Rn */
	IF(0x0C09774Au); { u32 t_ = r5; PR = 0x0C09774Eu; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09774Eu); }  /* 0C09774A jsr @Rn */
L_0C09774E: BLKS(0x0C09774Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C097750u, 1);  /* 0C09774E mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C097750 tst Rm,Rn */
	if (T) { UPD(0x0C097758u, 4); goto L_0C097758; }  /* 0C097752 bt */
L_0C097754: BLKS(0x0C097754u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097754 bra */
L_0C097758: BLKS(0x0C097758u);
	IF(0x0C097758u); MACL = r11 * r12;  /* 0C097758 mul.l Rm,Rn */
	r12 = 0xA2u; UPD(0x0C09775Cu, 3);  /* 0C09775A mov.w @(disp,pc),Rn */
	IF(0x0C09775Cu); r11 = MACL;  /* 0C09775C sts macl,Rn */
	r11 += r9;  /* 0C09775E add Rm,Rn */
	r11 += r12;  /* 0C097760 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C097764u, 4);  /* 0C097762 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C097764 and #imm,r0 */
	W8(r11, r0); UPD(0x0C097768u, 2);  /* 0C097766 mov.b Rm,@Rn */
L_0C097768: BLKS(0x0C097768u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097768 bra */
L_0C097770: BLKS(0x0C097770u);
	r3 = 0xB4u; UPD(0x0C097772u, 1);  /* 0C097770 mov.w @(disp,pc),Rn */
	IF(0x0C097772u); MACL = r10 * r3;  /* 0C097772 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C097776u, 3);  /* 0C097774 mov.l @(disp,pc),Rn */
	r0 = 0x9Cu; UPD(0x0C097778u, 1);  /* 0C097776 mov.w @(disp,pc),Rn */
	IF(0x0C097778u); r3 = MACL;  /* 0C097778 sts macl,Rn */
	r3 += r7;  /* 0C09777A add Rm,Rn */
	IF(0x0C09777Cu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09777Eu, 3);  /* 0C09777C mov.b @(r0,Rm),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C09777E add #imm,Rn */
	r8 = r9 & 0xFF;  /* 0C097780 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C097782 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097786u); W8(r0 + r3, r9); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09778Cu, 6); goto L_0C09778C; } UPD(0x0C097788u, 1); goto L_0C097788; }  /* 0C097784 bf/s */
L_0C097788: BLKS(0x0C097788u);
	{ IF(0x0C09778Au); ; /* slot nop */ UPD(0x0C0975C0u, 3); goto L_0C0975C0; }  /* 0C097788 bra */
L_0C09778C: BLKS(0x0C09778Cu);
	r11 = 0xB4u; UPD(0x0C09778Eu, 1);  /* 0C09778C mov.w @(disp,pc),Rn */
	IF(0x0C09778Eu); MACL = r10 * r11;  /* 0C09778E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097792u, 3);  /* 0C097790 mov.l @(disp,pc),Rn */
	IF(0x0C097792u); r4 = MACL;  /* 0C097792 sts macl,Rn */
	r4 += r0;  /* 0C097794 add Rm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C097798u, 3);  /* 0C097796 mov.l @(disp,Rm),Rn */
	r6 = 0xC1CC8D8u; UPD(0x0C09779Au, 1);  /* 0C097798 mov.l @(disp,pc),Rn */
	IF(0x0C09779Au); r0 <<= 2;  /* 0C09779A shll2 Rn */
	IF(0x0C09779Cu); r5 = R32(r0 + r6); UPD(0x0C09779Eu, 2);  /* 0C09779C mov.l @(r0,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C0977A0u, 1);  /* 0C09779E mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r5); UPD(0x0C0977A2u, 1);  /* 0C0977A0 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0A9E40u; UPD(0x0C0977A4u, 1);  /* 0C0977A2 mov.l @(disp,pc),Rn */
	IF(0x0C0977A4u); { u32 t_ = r2; PR = 0x0C0977A8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0977A8u); }  /* 0C0977A4 jsr @Rn */
L_0C0977A8: BLKS(0x0C0977A8u);
	r4 = r10;  /* 0C0977A8 mov Rm,Rn */
	r5 = 0x7u;  /* 0C0977AA mov #imm,Rn */
	IF(0x0C0977ACu); { u32 t_ = r13; PR = 0x0C0977B0u; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0977B0u); }  /* 0C0977AC jsr @Rn */
L_0C0977B0: BLKS(0x0C0977B0u);
	T = (r0 & r0) == 0;  /* 0C0977B0 tst Rm,Rn */
	if (T) { UPD(0x0C097768u, 4); goto L_0C097768; }  /* 0C0977B2 bt */
L_0C0977B4: BLKS(0x0C0977B4u);
	r12 = 0x0u;  /* 0C0977B4 mov #imm,Rn */
	W32(r14, r12); UPD(0x0C0977B8u, 2);  /* 0C0977B6 mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C0977B8 mov #imm,Rn */
	UPD(0x0C0977BAu, 1);
L_0C0977BA: BLKS(0x0C0977BAu);
	r3 = 0xB4u; UPD(0x0C0977BCu, 1);  /* 0C0977BA mov.w @(disp,pc),Rn */
	IF(0x0C0977BCu); MACL = r10 * r3;  /* 0C0977BC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0977C0u, 3);  /* 0C0977BE mov.l @(disp,pc),Rn */
	IF(0x0C0977C0u); r11 = MACL;  /* 0C0977C0 sts macl,Rn */
	r11 += r7;  /* 0C0977C2 add Rm,Rn */
	r9 = R32(r11 + 0xCu); UPD(0x0C0977C6u, 3);  /* 0C0977C4 mov.l @(disp,Rm),Rn */
	r9 += r12;  /* 0C0977C6 add Rm,Rn */
	IF(0x0C0977C8u); r9 <<= 2;  /* 0C0977C8 shll2 Rn */
	r9 += 0xFFFFFFA8u;  /* 0C0977CA add #imm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C0977CC exts.w Rm,Rn */
	r13 += 0xFFFFFFD0u;  /* 0C0977CE add #imm,Rn */
	r8 = 0x1A0u; UPD(0x0C0977D2u, 6);  /* 0C0977D0 mov.w @(disp,pc),Rn */
	r1 = r13 & 0xFFFF;  /* 0C0977D2 extu.w Rm,Rn */
	T = r1 > r8;  /* 0C0977D4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r13 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0977F0u, 5); goto L_0C0977F0; } UPD(0x0C0977DAu, 1); goto L_0C0977DA; }  /* 0C0977D6 bf/s */
L_0C0977DA: BLKS(0x0C0977DAu);
	r5 = R32(r14); UPD(0x0C0977DCu, 1);  /* 0C0977DA mov.l @Rm,Rn */
	r11 = 0x7u;  /* 0C0977DC mov #imm,Rn */
	r5 += 0x1u;  /* 0C0977DE add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0977E0 exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C0977E4u, 4);  /* 0C0977E2 mov.l Rm,@Rn */
	r13 = R32(r14); UPD(0x0C0977E6u, 1);  /* 0C0977E4 mov.l @Rm,Rn */
	T = (s32)r13 > (s32)r11;  /* 0C0977E6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0977BAu, 4); goto L_0C0977BA; } goto L_0C0977EC; }  /* 0C0977E8 bf/s */
L_0C0977EC: BLKS(0x0C0977ECu);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 4); goto L_0C09739E; }  /* 0C0977EC bra */
L_0C0977F0: BLKS(0x0C0977F0u);
	r8 = 0xC058060u; UPD(0x0C0977F2u, 1);  /* 0C0977F0 mov.l @(disp,pc),Rn */
	r5 = 0x500000u; UPD(0x0C0977F4u, 1);  /* 0C0977F2 mov.l @(disp,pc),Rn */
	IF(0x0C0977F4u); { u32 t_ = r8; PR = 0x0C0977F8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0977F8u); }  /* 0C0977F4 jsr @Rn */
L_0C0977F8: BLKS(0x0C0977F8u);
	r3 = 0x7u;  /* 0C0977F8 mov #imm,Rn */
	IF(0x0C0977FAu); MACL = r0 * r3;  /* 0C0977FA mul.l Rm,Rn */
	r7 = 0x66666667u; UPD(0x0C0977FEu, 4);  /* 0C0977FC mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0977FE mov Rm,Rn */
	IF(0x0C097800u); r9 = MACL;  /* 0C097800 sts macl,Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r7; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C097802 dmuls.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C097806u, 5);  /* 0C097804 mov.l @(disp,Rm),Rn */
	IF(0x0C097806u); r1 = MACH;  /* 0C097806 sts mach,Rn */
	IF(0x0C097808u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C097808 shar Rn */
	IF(0x0C09780Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09780A shar Rn */
	IF(0x0C09780Cu); T = r9 >> 31; r9 <<= 1;  /* 0C09780C shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C09780E subc Rm,Rn */
	r1 -= r9;  /* 0C097810 sub Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C097814u, 7);  /* 0C097812 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C097814 add Rm,Rn */
	r5 = 0x500000u; UPD(0x0C097818u, 2);  /* 0C097816 mov.l @(disp,pc),Rn */
	IF(0x0C097818u); { u32 t_ = r8; PR = 0x0C09781Cu; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09781Cu); }  /* 0C097818 jsr @Rn */
L_0C09781C: BLKS(0x0C09781Cu);
	r6 = R32(r11 + 0x28u); UPD(0x0C09781Eu, 1);  /* 0C09781C mov.l @(disp,Rm),Rn */
	r5 = 0xFu;  /* 0C09781E mov #imm,Rn */
	r6 += r0;  /* 0C097820 add Rm,Rn */
	r0 = 0xC27DFF8u; UPD(0x0C097824u, 3);  /* 0C097822 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C097824 mov Rm,Rn */
	r2 = R32(r0); UPD(0x0C097828u, 2);  /* 0C097826 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C097828 add #imm,Rn */
	IF(0x0C09782Au); r2 >>= 16;  /* 0C09782A shlr16 Rn */
	r5 &= r2;  /* 0C09782C and Rm,Rn */
	r0 = 0xC1CC970u; UPD(0x0C097830u, 4);  /* 0C09782E mov.l @(disp,pc),Rn */
	IF(0x0C097830u); r5 <<= 2;  /* 0C097830 shll2 Rn */
	IF(0x0C097832u); r4 = R32(r0 + r5); UPD(0x0C097834u, 2);  /* 0C097832 mov.l @(r0,Rm),Rn */
	r13 = 0xC7C1554u; UPD(0x0C097836u, 1);  /* 0C097834 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C097838u, 1);  /* 0C097836 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C097838 mov #imm,Rn */
	IF(0x0C09783Au); { u32 t_ = r13; PR = 0x0C09783Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C7C1554, 0x0C7C1554u, 0x0C09783Eu); }  /* 0C09783A jsr @Rn */
L_0C09783E: BLKS(0x0C09783Eu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0977DAu, 3); goto L_0C0977DA; }  /* 0C09783E bra */
L_0C097850: BLKS(0x0C097850u);
	r0 = 0xC0A0540u; UPD(0x0C097852u, 1);  /* 0C097850 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C097852 mov Rm,Rn */
	UPD(0x0C097854u, 1);
L_0C097854: BLKS(0x0C097854u);
	IF(0x0C097854u); { u32 t_ = r0; PR = 0x0C097858u; IF(0x0C097856u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C097858u); }  /* 0C097854 jsr @Rn */
L_0C097858: BLKS(0x0C097858u);
	IF(0x0C097858u); T = (s32)r0 >= 0;  /* 0C097858 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097862u, 4); goto L_0C097862; } goto L_0C09785E; }  /* 0C09785A bt/s */
L_0C09785E: BLKS(0x0C09785Eu);
	{ IF(0x0C097860u); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C09785E bra */
L_0C097862: BLKS(0x0C097862u);
	r0 = 0xB4u; UPD(0x0C097864u, 1);  /* 0C097862 mov.w @(disp,pc),Rn */
	IF(0x0C097864u); MACL = r10 * r0;  /* 0C097864 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C097868u, 3);  /* 0C097866 mov.l @(disp,pc),Rn */
	IF(0x0C097868u); r10 = MACL;  /* 0C097868 sts macl,Rn */
	r10 += r7;  /* 0C09786A add Rm,Rn */
	r12 = R32(r10); UPD(0x0C09786Eu, 3);  /* 0C09786C mov.l @Rm,Rn */
	IF(0x0C09786Eu); MACL = r11 * r0;  /* 0C09786E mul.l Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C097872u, 3);  /* 0C097870 mov.l @(disp,pc),Rn */
	r12 &= r4;  /* 0C097872 and Rm,Rn */
	W32(r10, r12); UPD(0x0C097876u, 2);  /* 0C097874 mov.l Rm,@Rn */
	IF(0x0C097876u); r8 = MACL;  /* 0C097876 sts macl,Rn */
	r8 += r7;  /* 0C097878 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C09787Cu, 3);  /* 0C09787A mov.l @Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09787Eu, 1);  /* 0C09787C mov.l @(disp,pc),Rn */
	r13 = R32(r8 + 0x24u); UPD(0x0C097880u, 1);  /* 0C09787E mov.l @(disp,Rm),Rn */
	r5 &= r3;  /* 0C097880 and Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C097884u, 2);  /* 0C097882 mov.l @(disp,Rm),Rn */
	r12 |= r5;  /* 0C097884 or Rm,Rn */
	r9 = R32(r10 + 0x2Cu); UPD(0x0C097888u, 2);  /* 0C097886 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C09788Au, 1);  /* 0C097888 mov.l @(disp,Rm),Rn */
	r13 += r9;  /* 0C09788A add Rm,Rn */
	r6 += r1;  /* 0C09788C add Rm,Rn */
	W32(r10 + 0x24u, r13); UPD(0x0C097890u, 3);  /* 0C09788E mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r6); UPD(0x0C097892u, 1);  /* 0C097890 mov.l Rm,@(disp,Rn) */
	W32(r10, r12); UPD(0x0C097894u, 1);  /* 0C097892 mov.l Rm,@Rn */
L_0C097894: BLKS(0x0C097894u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097894 bra */
L_0C0978E0: BLKS(0x0C0978E0u);
	r4 = 0xB4u; UPD(0x0C0978E2u, 1);  /* 0C0978E0 mov.w @(disp,pc),Rn */
	IF(0x0C0978E2u); MACL = r10 * r4;  /* 0C0978E2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0978E6u, 3);  /* 0C0978E4 mov.l @(disp,pc),Rn */
	IF(0x0C0978E6u); r11 = MACL;  /* 0C0978E6 sts macl,Rn */
	r11 += r0;  /* 0C0978E8 add Rm,Rn */
	r11 += 0x3Cu;  /* 0C0978EA add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C0978EEu, 4);  /* 0C0978EC mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0978EE tst Rm,Rn */
	{ u32 c_ = !T; r11 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0979A0u, 4); goto L_0C0979A0; } goto L_0C0978F4; }  /* 0C0978F0 bf/s */
L_0C0978F4: BLKS(0x0C0978F4u);
	r10 = 0xC0AFE40u; UPD(0x0C0978F6u, 2);  /* 0C0978F4 mov.l @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C0978F8u, 1);  /* 0C0978F6 mov.l @(disp,pc),Rn */
	IF(0x0C0978F8u); { u32 t_ = r10; PR = 0x0C0978FCu; IF(0x0C0978FAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0978FCu); }  /* 0C0978F8 jsr @Rn */
L_0C0978FC: BLKS(0x0C0978FCu);
	r9 = 0x80000u; UPD(0x0C0978FEu, 1);  /* 0C0978FC mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C0978FE exts.w Rm,Rn */
	r4 = r8;  /* 0C097900 mov Rm,Rn */
	IF(0x0C097902u); { u32 t_ = r13; PR = 0x0C097906u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097906u); }  /* 0C097902 jsr @Rn */
L_0C097906: BLKS(0x0C097906u);
	r4 = r8;  /* 0C097906 mov Rm,Rn */
	r7 = R32(r11 + 0x24u); UPD(0x0C09790Au, 2);  /* 0C097908 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C09790A mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09790Eu, 2);  /* 0C09790C mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09790E add Rm,Rn */
	IF(0x0C097910u); { u32 t_ = r8; PR = 0x0C097914u; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097914u); }  /* 0C097910 jsr @Rn */
L_0C097914: BLKS(0x0C097914u);
	r13 = R32(r11 + 0x28u); UPD(0x0C097916u, 1);  /* 0C097914 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C097916 add #imm,Rn */
	IF(0x0C097918u); { u32 t_ = r10; PR = 0x0C09791Cu; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09791Cu); }  /* 0C097918 jsr @Rn */
L_0C09791C: BLKS(0x0C09791Cu);
	r10 = 0xB0u; UPD(0x0C09791Eu, 1);  /* 0C09791C mov.w @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C09791E and #imm,r0 */
	r10 += r11;  /* 0C097920 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C097924u, 3);  /* 0C097922 mov.b @Rm,Rn */
	IF(0x0C097924u); r0 <<= 2;  /* 0C097924 shll2 Rn */
	r9 = r4 & 0xFF;  /* 0C097926 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09792Au, 3);  /* 0C097928 mov.l Rm,@Rn */
	r8 = 0xC1CC8E0u; UPD(0x0C09792Cu, 1);  /* 0C09792A mov.l @(disp,pc),Rn */
	r9 = 0xA9u; UPD(0x0C09792Eu, 1);  /* 0C09792C mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09792E add Rm,Rn */
	r9 += r11;  /* 0C097930 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C097934u, 3);  /* 0C097932 mov.b @Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C097934 extu.b Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C097938u, 2);  /* 0C097936 mov.l @(disp,pc),Rn */
	r3 = 0xFFFA0000u; UPD(0x0C09793Au, 1);  /* 0C097938 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09793Cu, 1);  /* 0C09793A mov.l Rm,@(disp,Rn) */
	r4 = 0x4000u; UPD(0x0C09793Eu, 1);  /* 0C09793C mov.w @(disp,pc),Rn */
	IF(0x0C09793Eu); { u32 t_ = r0; PR = 0x0C097942u; W32(r15 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C097942u); }  /* 0C09793E jsr @Rn */
L_0C097942: BLKS(0x0C097942u);
	r5 = 0xFFFFE000u; UPD(0x0C097944u, 1);  /* 0C097942 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C097944 mov #imm,Rn */
	r0 += r5;  /* 0C097946 add Rm,Rn */
	r7 = r13;  /* 0C097948 mov Rm,Rn */
	IF(0x0C09794Au); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09794A shld Rm,Rn */
	r13 = 0xC7C1F94u; UPD(0x0C09794Eu, 5);  /* 0C09794C mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C097950u, 1);  /* 0C09794E mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C097952u, 1);  /* 0C097950 mov.l @Rm,Rn */
	r4 = R32(r11); UPD(0x0C097954u, 1);  /* 0C097952 mov.l @Rm,Rn */
	IF(0x0C097954u); { u32 t_ = r13; PR = 0x0C097958u; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1F94, 0x0C7C1F94u, 0x0C097958u); }  /* 0C097954 jsr @Rn */
L_0C097958: BLKS(0x0C097958u);
	r0 = 0x99u; UPD(0x0C09795Au, 1);  /* 0C097958 mov.w @(disp,pc),Rn */
	r15 += 0x10u;  /* 0C09795A add #imm,Rn */
	IF(0x0C09795Cu); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09795Eu, 2);  /* 0C09795C mov.b @(r0,Rm),Rn */
	r7 = 0xEFu; UPD(0x0C097960u, 1);  /* 0C09795E mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C097960 add #imm,Rn */
	r2 = r8 & 0xFF;  /* 0C097962 extu.b Rm,Rn */
	T = r2 > r7;  /* 0C097964 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097968u); W8(r0 + r11, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C097894u, 6); goto L_0C097894; } UPD(0x0C09796Au, 1); goto L_0C09796A; }  /* 0C097966 bf/s */
L_0C09796A: BLKS(0x0C09796Au);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C09796Cu, 1);  /* 0C09796A mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09796C add #imm,Rn */
	r3 = r6 & 0xFF;  /* 0C09796E extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C097972u, 3);  /* 0C097970 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C097974u, 1);  /* 0C097972 mov.b @Rm,Rn */
	r10 = 0xC0AD970u; UPD(0x0C097976u, 1);  /* 0C097974 mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C097976 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09797Au, 2);  /* 0C097978 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C09797A mov #imm,Rn */
	r4 = R32(r11); UPD(0x0C09797Eu, 2);  /* 0C09797C mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C097980u, 1);  /* 0C09797E mov.l @(disp,Rm),Rn */
	IF(0x0C097980u); { u32 t_ = r10; PR = 0x0C097984u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C097984u); }  /* 0C097980 jsr @Rn */
L_0C097984: BLKS(0x0C097984u);
	W32(r11, r12); UPD(0x0C097986u, 1);  /* 0C097984 mov.l Rm,@Rn */
	r11 = 0xC392AFEu; UPD(0x0C097988u, 1);  /* 0C097986 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C09798Au, 1);  /* 0C097988 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C09798A add #imm,Rn */
	W8(r11, r12); UPD(0x0C09798Eu, 2);  /* 0C09798C mov.b Rm,@Rn */
L_0C09798E: BLKS(0x0C09798Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09739Cu, 3); goto L_0C09739C; }  /* 0C09798E bra */
L_0C0979A0: BLKS(0x0C0979A0u);
	r1 = 0xC096C90u; UPD(0x0C0979A2u, 1);  /* 0C0979A0 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0974B2u, 3); goto L_0C0974B2; }  /* 0C0979A2 bra */
L_0C0979B0: BLKS(0x0C0979B0u);
	r0 = 0xC0A05D0u; UPD(0x0C0979B2u, 1);  /* 0C0979B0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0979B2 mov Rm,Rn */
	UPD(0x0C0979B4u, 1);
L_0C0979B4: BLKS(0x0C0979B4u);
	IF(0x0C0979B4u); { u32 t_ = r0; PR = 0x0C0979B8u; IF(0x0C0979B6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0979B8u); }  /* 0C0979B4 jsr @Rn */
L_0C0979B8: BLKS(0x0C0979B8u);
	IF(0x0C0979B8u); T = (s32)r0 >= 0;  /* 0C0979B8 cmp/pz Rn */
	if (!T) { UPD(0x0C097A8Cu, 4); goto L_0C097A8C; }  /* 0C0979BA bf */
L_0C0979BC: BLKS(0x0C0979BCu);
	r13 = 0xB4u; UPD(0x0C0979BEu, 1);  /* 0C0979BC mov.w @(disp,pc),Rn */
	IF(0x0C0979BEu); MACL = r10 * r13;  /* 0C0979BE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0979C2u, 3);  /* 0C0979C0 mov.l @(disp,pc),Rn */
	IF(0x0C0979C2u); r8 = MACL;  /* 0C0979C2 sts macl,Rn */
	IF(0x0C0979C4u); MACL = r0 * r13;  /* 0C0979C4 mul.l Rm,Rn */
	r8 += r12;  /* 0C0979C6 add Rm,Rn */
	r11 = R32(r8 + 0x2Cu); UPD(0x0C0979CAu, 5);  /* 0C0979C8 mov.l @(disp,Rm),Rn */
	IF(0x0C0979CAu); r6 = MACL;  /* 0C0979CA sts macl,Rn */
	r6 += r12;  /* 0C0979CC add Rm,Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C0979D0u, 3);  /* 0C0979CE mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x28u); UPD(0x0C0979D2u, 1);  /* 0C0979D0 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C0979D2 add Rm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C0979D6u, 2);  /* 0C0979D4 mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C0979D6 add Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0979DAu, 2);  /* 0C0979D8 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09739Cu, 3); goto L_0C09739C; }  /* 0C0979DA bra */
L_0C0979E0: BLKS(0x0C0979E0u);
	r12 = 0xC0A03F0u; UPD(0x0C0979E2u, 1);  /* 0C0979E0 mov.l @(disp,pc),Rn */
	IF(0x0C0979E2u); { u32 t_ = r12; PR = 0x0C0979E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0979E6u); }  /* 0C0979E2 jsr @Rn */
L_0C0979E6: BLKS(0x0C0979E6u);
	IF(0x0C0979E6u); T = (s32)r0 >= 0;  /* 0C0979E6 cmp/pz Rn */
	if (!T) { UPD(0x0C097A8Cu, 4); goto L_0C097A8C; }  /* 0C0979E8 bf */
L_0C0979EA: BLKS(0x0C0979EAu);
	r2 = 0xB4u; UPD(0x0C0979ECu, 1);  /* 0C0979EA mov.w @(disp,pc),Rn */
	IF(0x0C0979ECu); MACL = r10 * r2;  /* 0C0979EC mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0979F0u, 3);  /* 0C0979EE mov.l @(disp,pc),Rn */
	IF(0x0C0979F0u); r8 = MACL;  /* 0C0979F0 sts macl,Rn */
	IF(0x0C0979F2u); MACL = r0 * r2;  /* 0C0979F2 mul.l Rm,Rn */
	r8 += r3;  /* 0C0979F4 add Rm,Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C0979F8u, 5);  /* 0C0979F6 mov.l @(disp,Rm),Rn */
	IF(0x0C0979F8u); r9 = MACL;  /* 0C0979F8 sts macl,Rn */
	r9 += r3;  /* 0C0979FA add Rm,Rn */
	r0 = R32(r9 + 0x28u); UPD(0x0C0979FEu, 3);  /* 0C0979FC mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C0979FE add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C097A02u, 2);  /* 0C097A00 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0x24u); UPD(0x0C097A04u, 1);  /* 0C097A02 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C097A06u, 1);  /* 0C097A04 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C097A08u, 1);  /* 0C097A06 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C097A08 add Rm,Rn */
	r0 += 0x1u;  /* 0C097A0A add #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C097A0Eu, 3);  /* 0C097A0C mov.l Rm,@(disp,Rn) */
	r0 &= 0xFu;  /* 0C097A0E and #imm,r0 */
	UPD(0x0C097A10u, 1);
L_0C097A10: BLKS(0x0C097A10u);
	r11 = 0xC0A0380u; UPD(0x0C097A12u, 1);  /* 0C097A10 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C097A12 mov Rm,Rn */
	IF(0x0C097A14u); { u32 t_ = r11; PR = 0x0C097A18u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097A18u); }  /* 0C097A14 jsr @Rn */
L_0C097A18: BLKS(0x0C097A18u);
	r10 = R32(r8); UPD(0x0C097A1Au, 1);  /* 0C097A18 mov.l @Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C097A1Cu, 1);  /* 0C097A1A mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C097A1C and Rm,Rn */
	W32(r8, r10); UPD(0x0C097A20u, 2);  /* 0C097A1E mov.l Rm,@Rn */
	r13 = 0x13000000u; UPD(0x0C097A22u, 1);  /* 0C097A20 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C097A24u, 1);  /* 0C097A22 mov.l @Rm,Rn */
	r4 &= r13;  /* 0C097A24 and Rm,Rn */
	r10 |= r4;  /* 0C097A26 or Rm,Rn */
	W32(r8, r10); UPD(0x0C097A2Au, 3);  /* 0C097A28 mov.l Rm,@Rn */
L_0C097A2A: BLKS(0x0C097A2Au);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097A2A bra */
L_0C097A80: BLKS(0x0C097A80u);
	r9 = 0xC0A0540u; UPD(0x0C097A82u, 1);  /* 0C097A80 mov.l @(disp,pc),Rn */
	IF(0x0C097A82u); { u32 t_ = r9; PR = 0x0C097A86u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C097A86u); }  /* 0C097A82 jsr @Rn */
L_0C097A86: BLKS(0x0C097A86u);
	IF(0x0C097A86u); T = (s32)r0 >= 0;  /* 0C097A86 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097A90u, 4); goto L_0C097A90; } UPD(0x0C097A8Cu, 1); goto L_0C097A8C; }  /* 0C097A88 bt/s */
L_0C097A8C: BLKS(0x0C097A8Cu);
	{ IF(0x0C097A8Eu); ; /* slot nop */ UPD(0x0C0975D0u, 3); goto L_0C0975D0; }  /* 0C097A8C bra */
L_0C097A90: BLKS(0x0C097A90u);
	r6 = 0xB4u; UPD(0x0C097A92u, 1);  /* 0C097A90 mov.w @(disp,pc),Rn */
	IF(0x0C097A92u); MACL = r10 * r6;  /* 0C097A92 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097A96u, 3);  /* 0C097A94 mov.l @(disp,pc),Rn */
	IF(0x0C097A96u); r9 = MACL;  /* 0C097A96 sts macl,Rn */
	IF(0x0C097A98u); MACL = r11 * r6;  /* 0C097A98 mul.l Rm,Rn */
	r9 += r0;  /* 0C097A9A add Rm,Rn */
	r4 = R32(r9 + 0x30u); UPD(0x0C097A9Eu, 5);  /* 0C097A9C mov.l @(disp,Rm),Rn */
	IF(0x0C097A9Eu); r11 = MACL;  /* 0C097A9E sts macl,Rn */
	r11 += r0;  /* 0C097AA0 add Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C097AA4u, 3);  /* 0C097AA2 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x28u); UPD(0x0C097AA6u, 1);  /* 0C097AA4 mov.l @(disp,Rm),Rn */
	r11 += 0x50u;  /* 0C097AA6 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C097AAAu, 2);  /* 0C097AA8 mov.w @Rm,Rn */
	r13 += r4;  /* 0C097AAA add Rm,Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C097AAEu, 2);  /* 0C097AAC mov.l @(disp,Rm),Rn */
	IF(0x0C097AAEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C097AAE shar Rn */
	r8 = 0xC0A0380u; UPD(0x0C097AB2u, 2);  /* 0C097AB0 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C097AB2 and #imm,r0 */
	r5 += r12;  /* 0C097AB4 add Rm,Rn */
	W32(r9 + 0xCu, r0); UPD(0x0C097AB8u, 3);  /* 0C097AB6 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C097AB8 mov Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C097ABCu, 2);  /* 0C097ABA mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFB0u;  /* 0C097ABC add #imm,Rn */
	IF(0x0C097ABEu); { u32 t_ = r8; PR = 0x0C097AC2u; W32(r9 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097AC2u); }  /* 0C097ABE jsr @Rn */
L_0C097AC2: BLKS(0x0C097AC2u);
	r0 = 0x8Cu; UPD(0x0C097AC4u, 1);  /* 0C097AC2 mov.w @(disp,pc),Rn */
	IF(0x0C097AC4u); r10 = R32(r0 + r11); UPD(0x0C097AC6u, 1);  /* 0C097AC4 mov.l @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C097AC6 tst Rm,Rn */
	if (T) { UPD(0x0C097A2Au, 4); goto L_0C097A2A; }  /* 0C097AC8 bt */
L_0C097ACA: BLKS(0x0C097ACAu);
	r0 += 0x24u;  /* 0C097ACA add #imm,Rn */
	IF(0x0C097ACCu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C097ACEu, 2);  /* 0C097ACC mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C097ACE add #imm,Rn */
	r13 = 0xA9u; UPD(0x0C097AD2u, 2);  /* 0C097AD0 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C097AD2 mov Rm,Rn */
	IF(0x0C097AD4u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C097AD6u, 2);  /* 0C097AD4 mov.b @(r0,Rm),Rn */
	r10 = 0x3u;  /* 0C097AD6 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C097ADAu, 2);  /* 0C097AD8 mov.l @(disp,Rm),Rn */
	r11 = r8 & 0xFF;  /* 0C097ADA extu.b Rm,Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C097ADEu, 2);  /* 0C097ADC mov.l @(disp,Rm),Rn */
	r2 = 0x100u; UPD(0x0C097AE0u, 1);  /* 0C097ADE mov.w @(disp,pc),Rn */
	r6 = r3;  /* 0C097AE0 mov Rm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C097AE4u, 2);  /* 0C097AE2 mov.l Rm,@(disp,Rn) */
	r2 += 0xFFFFFFC0u;  /* 0C097AE4 add #imm,Rn */
	r7 = 0xFFF00000u; UPD(0x0C097AE8u, 2);  /* 0C097AE6 mov.l @(disp,pc),Rn */
	W32(r15, r11); UPD(0x0C097AEAu, 1);  /* 0C097AE8 mov.l Rm,@Rn */
	r5 += r7;  /* 0C097AEA add Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C097AEEu, 2);  /* 0C097AEC mov.l Rm,@(disp,Rn) */
	r7 = r1 & 0xFF;  /* 0C097AEE extu.b Rm,Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C097AF2u, 2);  /* 0C097AF0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AA9D0u; UPD(0x0C097AF4u, 1);  /* 0C097AF2 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C097AF6u, 1);  /* 0C097AF4 mov.l @Rm,Rn */
L_0C097AF6: BLKS(0x0C097AF6u);
	IF(0x0C097AF6u); { u32 t_ = r0; PR = 0x0C097AFAu; IF(0x0C097AF8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C097AFAu); }  /* 0C097AF6 jsr @Rn */
L_0C097AFA: BLKS(0x0C097AFAu);
	r15 += 0x10u;  /* 0C097AFA add #imm,Rn */
	UPD(0x0C097AFCu, 1);
L_0C097AFC: BLKS(0x0C097AFCu);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097AFC bra */
L_0C097B00: BLKS(0x0C097B00u);
	r0 = 0xC0A03F0u; UPD(0x0C097B02u, 1);  /* 0C097B00 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0979B4u, 3); goto L_0C0979B4; }  /* 0C097B02 bra */
L_0C097B10: BLKS(0x0C097B10u);
	r9 = 0xC0A03F0u; UPD(0x0C097B12u, 1);  /* 0C097B10 mov.l @(disp,pc),Rn */
	IF(0x0C097B12u); { u32 t_ = r9; PR = 0x0C097B16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C097B16u); }  /* 0C097B12 jsr @Rn */
L_0C097B16: BLKS(0x0C097B16u);
	IF(0x0C097B16u); T = (s32)r0 >= 0;  /* 0C097B16 cmp/pz Rn */
	if (T) { UPD(0x0C097B1Eu, 4); goto L_0C097B1E; }  /* 0C097B18 bt */
L_0C097B1A: BLKS(0x0C097B1Au);
	{ IF(0x0C097B1Cu); ; /* slot nop */ UPD(0x0C0975D0u, 3); goto L_0C0975D0; }  /* 0C097B1A bra */
L_0C097B1E: BLKS(0x0C097B1Eu);
	r3 = 0xB4u; UPD(0x0C097B20u, 1);  /* 0C097B1E mov.w @(disp,pc),Rn */
	IF(0x0C097B20u); MACL = r10 * r3;  /* 0C097B20 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C097B24u, 3);  /* 0C097B22 mov.l @(disp,pc),Rn */
	IF(0x0C097B24u); r5 = MACL;  /* 0C097B24 sts macl,Rn */
	IF(0x0C097B26u); MACL = r0 * r3;  /* 0C097B26 mul.l Rm,Rn */
	r5 += r6;  /* 0C097B28 add Rm,Rn */
	r7 = R32(r5 + 0x2Cu); UPD(0x0C097B2Cu, 5);  /* 0C097B2A mov.l @(disp,Rm),Rn */
	IF(0x0C097B2Cu); r3 = MACL;  /* 0C097B2C sts macl,Rn */
	r3 += r6;  /* 0C097B2E add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C097B32u, 3);  /* 0C097B30 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x28u); UPD(0x0C097B34u, 1);  /* 0C097B32 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C097B34 add Rm,Rn */
	r12 = R32(r5 + 0x30u); UPD(0x0C097B38u, 2);  /* 0C097B36 mov.l @(disp,Rm),Rn */
	r8 = R32(r5 + 0xCu); UPD(0x0C097B3Au, 1);  /* 0C097B38 mov.l @(disp,Rm),Rn */
	r4 += r12;  /* 0C097B3A add Rm,Rn */
	W32(r5 + 0x24u, r0); UPD(0x0C097B3Eu, 2);  /* 0C097B3C mov.l Rm,@(disp,Rn) */
	T = (r8 & r8) == 0;  /* 0C097B3E tst Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C097BA0u, 4); goto L_0C097BA0; } UPD(0x0C097B44u, 1); goto L_0C097B44; }  /* 0C097B40 bt/s */
L_0C097B44: BLKS(0x0C097B44u);
	r0 = r8;  /* 0C097B44 mov Rm,Rn */
	T = r0 == 0x8u;  /* 0C097B46 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C097B70u, 5); goto L_0C097B70; } goto L_0C097B4C; }  /* 0C097B48 bt/s */
L_0C097B4C: BLKS(0x0C097B4Cu);
	r6 = 0xB4u; UPD(0x0C097B4Eu, 2);  /* 0C097B4C mov.w @(disp,pc),Rn */
	IF(0x0C097B4Eu); MACL = r10 * r6;  /* 0C097B4E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C097B52u, 3);  /* 0C097B50 mov.l @(disp,pc),Rn */
	IF(0x0C097B52u); r3 = MACL;  /* 0C097B52 sts macl,Rn */
	r3 += r0;  /* 0C097B54 add Rm,Rn */
	r0 = 0x99u; UPD(0x0C097B58u, 3);  /* 0C097B56 mov.w @(disp,pc),Rn */
	IF(0x0C097B58u); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C097B5Au, 1);  /* 0C097B58 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C097B5A add #imm,Rn */
	r4 = r12 & 0xFF;  /* 0C097B5C extu.b Rm,Rn */
	T = r4 > r9;  /* 0C097B5E cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097B62u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C097AFCu, 6); goto L_0C097AFC; } UPD(0x0C097B64u, 1); goto L_0C097B64; }  /* 0C097B60 bf/s */
L_0C097B64: BLKS(0x0C097B64u);
	r5 = 0x0u;  /* 0C097B64 mov #imm,Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C097B68u, 2);  /* 0C097B66 mov.l @(disp,Rm),Rn */
	IF(0x0C097B68u); W8(r0 + r3, r5); UPD(0x0C097B6Au, 1);  /* 0C097B68 mov.b Rm,@(r0,Rn) */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0975CAu, 3); goto L_0C0975CA; }  /* 0C097B6A bra */
L_0C097B70: BLKS(0x0C097B70u);
	r0 = 0x99u; UPD(0x0C097B72u, 1);  /* 0C097B70 mov.w @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C097B72 mov #imm,Rn */
	IF(0x0C097B74u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C097B76u, 2);  /* 0C097B74 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C097B76 add #imm,Rn */
	r11 = r8 & 0xFF;  /* 0C097B78 extu.b Rm,Rn */
	T = r11 > r3;  /* 0C097B7A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097B7Eu); W8(r0 + r5, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C097AFCu, 6); goto L_0C097AFC; } UPD(0x0C097B80u, 1); goto L_0C097B80; }  /* 0C097B7C bf/s */
L_0C097B80: BLKS(0x0C097B80u);
	r4 = 0x0u;  /* 0C097B80 mov #imm,Rn */
	r2 = R32(r5 + 0x8u); UPD(0x0C097B84u, 2);  /* 0C097B82 mov.l @(disp,Rm),Rn */
	r13 = 0x10u;  /* 0C097B84 mov #imm,Rn */
	IF(0x0C097B86u); W8(r0 + r5, r4); UPD(0x0C097B88u, 2);  /* 0C097B86 mov.b Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C097B88 add #imm,Rn */
	r7 = 0x86u; UPD(0x0C097B8Cu, 2);  /* 0C097B8A mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C097B8C mov Rm,Rn */
	r9 = 0x100u; UPD(0x0C097B90u, 2);  /* 0C097B8E mov.w @(disp,pc),Rn */
	W32(r5 + 0x8u, r2); UPD(0x0C097B92u, 1);  /* 0C097B90 mov.l Rm,@(disp,Rn) */
	IF(0x0C097B92u); W16(r0 + r7, r9); UPD(0x0C097B94u, 1);  /* 0C097B92 mov.w Rm,@(r0,Rn) */
	{ W32(r5 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0974DCu, 3); goto L_0C0974DC; }  /* 0C097B94 bra */
L_0C097BA0: BLKS(0x0C097BA0u);
	r6 = 0x9Cu; UPD(0x0C097BA2u, 1);  /* 0C097BA0 mov.w @(disp,pc),Rn */
	r9 = r5;  /* 0C097BA2 mov Rm,Rn */
	r9 += r6;  /* 0C097BA4 add Rm,Rn */
	r9 += 0x3u;  /* 0C097BA6 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C097BAAu, 4);  /* 0C097BA8 mov.b @Rm,Rn */
	r1 = r2 & 0xFF;  /* 0C097BAA extu.b Rm,Rn */
	r0 = r1;  /* 0C097BAC mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C097BAE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C097C20u, 6); goto L_0C097C20; }  /* 0C097BB0 bt */
L_0C097BB2: BLKS(0x0C097BB2u);
	r2 = 0x1u;  /* 0C097BB2 mov #imm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C097BB4 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C097BE0u, 5); goto L_0C097BE0; } goto L_0C097BBA; }  /* 0C097BB6 bt/s */
L_0C097BBA: BLKS(0x0C097BBAu);
	T = (r1 & r1) == 0;  /* 0C097BBA tst Rm,Rn */
	if (!T) { UPD(0x0C097AFCu, 5); goto L_0C097AFC; }  /* 0C097BBC bf */
L_0C097BBE: BLKS(0x0C097BBEu);
	r3 += r6;  /* 0C097BBE add Rm,Rn */
	r3 += 0x3u;  /* 0C097BC0 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C097BC4u, 3);  /* 0C097BC2 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C097BC4 mov #imm,Rn */
	T = r10 > r5;  /* 0C097BC6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C097AFCu, 5); goto L_0C097AFC; }  /* 0C097BC8 bf */
L_0C097BCA: BLKS(0x0C097BCAu);
	r11 = 0xC0AFC10u; UPD(0x0C097BCCu, 1);  /* 0C097BCA mov.l @(disp,pc),Rn */
	IF(0x0C097BCCu); { u32 t_ = r11; PR = 0x0C097BD0u; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C097BD0u); }  /* 0C097BCC jsr @Rn */
L_0C097BD0: BLKS(0x0C097BD0u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C097BD2u, 1);  /* 0C097BD0 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C097BD2 add #imm,Rn */
	W8(r9, r0); UPD(0x0C097BD6u, 2);  /* 0C097BD4 mov.b Rm,@Rn */
L_0C097BD6: BLKS(0x0C097BD6u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C097BD6 bra */
L_0C097BE0: BLKS(0x0C097BE0u);
	if (!T) { UPD(0x0C097BD6u, 3); goto L_0C097BD6; }  /* 0C097BE0 bf */
L_0C097BE2: BLKS(0x0C097BE2u);
	r4 = r10;  /* 0C097BE2 mov Rm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C097BE6u, 2);  /* 0C097BE4 mov.l @(disp,pc),Rn */
	IF(0x0C097BE6u); { u32 t_ = r7; PR = 0x0C097BEAu; W32(r5 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097BEAu); }  /* 0C097BE6 jsr @Rn */
L_0C097BEA: BLKS(0x0C097BEAu);
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C09739Cu, 3); goto L_0C09739C; }  /* 0C097BEA bra */
L_0C097C20: BLKS(0x0C097C20u);
	r8 = 0xFFF60000u; UPD(0x0C097C22u, 1);  /* 0C097C20 mov.l @(disp,pc),Rn */
	T = r7 == r8;  /* 0C097C22 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C097C30u, 4); goto L_0C097C30; }  /* 0C097C24 bt */
L_0C097C26: BLKS(0x0C097C26u);
	r2 = 0xFFFF0000u; UPD(0x0C097C28u, 1);  /* 0C097C26 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C097C28 add Rm,Rn */
	{ W32(r5 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09739Cu, 4); goto L_0C09739C; }  /* 0C097C2A bra */
L_0C097C30: BLKS(0x0C097C30u);
	r13 = r2;  /* 0C097C30 mov Rm,Rn */
	r13 += 0x1u;  /* 0C097C32 add #imm,Rn */
	{ W8(r9, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C097C26u, 5); goto L_0C097C26; }  /* 0C097C34 bra */
L_0C097C40: BLKS(0x0C097C40u);
	r12 = 0xC0A0490u; UPD(0x0C097C42u, 1);  /* 0C097C40 mov.l @(disp,pc),Rn */
	IF(0x0C097C42u); { u32 t_ = r12; PR = 0x0C097C46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C097C46u); }  /* 0C097C42 jsr @Rn */
L_0C097C46: BLKS(0x0C097C46u);
	IF(0x0C097C46u); T = (s32)r0 >= 0;  /* 0C097C46 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097C50u, 4); goto L_0C097C50; } goto L_0C097C4C; }  /* 0C097C48 bt/s */
L_0C097C4C: BLKS(0x0C097C4Cu);
	{ IF(0x0C097C4Eu); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C097C4C bra */
L_0C097C50: BLKS(0x0C097C50u);
	r0 = 0xB4u; UPD(0x0C097C52u, 1);  /* 0C097C50 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C097C52 mov #imm,Rn */
	IF(0x0C097C54u); MACL = r10 * r0;  /* 0C097C54 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C097C58u, 4);  /* 0C097C56 mov.l @(disp,pc),Rn */
	IF(0x0C097C58u); r0 = MACL;  /* 0C097C58 sts macl,Rn */
	r0 += r5;  /* 0C097C5A add Rm,Rn */
	r9 = 0x9Au; UPD(0x0C097C5Eu, 3);  /* 0C097C5C mov.w @(disp,pc),Rn */
	r8 = r0;  /* 0C097C5E mov Rm,Rn */
	r8 += 0x50u;  /* 0C097C60 add #imm,Rn */
	r9 += r0;  /* 0C097C62 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C097C66u, 4);  /* 0C097C64 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C097C66 tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C097C70u, 4); goto L_0C097C70; } UPD(0x0C097C6Cu, 1); goto L_0C097C6C; }  /* 0C097C68 bf/s */
L_0C097C6C: BLKS(0x0C097C6Cu);
	{ IF(0x0C097C6Eu); ; /* slot nop */ UPD(0x0C097D80u, 3); goto L_0C097D80; }  /* 0C097C6C bra */
L_0C097C70: BLKS(0x0C097C70u);
	r7 = 0x8000u; UPD(0x0C097C72u, 1);  /* 0C097C70 mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C097C72 mov Rm,Rn */
	r2 += r7;  /* 0C097C74 add Rm,Rn */
	W32(r8, r2); UPD(0x0C097C78u, 3);  /* 0C097C76 mov.l Rm,@Rn */
	r8 = 0x0u;  /* 0C097C78 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C097C7Cu, 2);  /* 0C097C7A mov.l Rm,@Rn */
L_0C097C7C: BLKS(0x0C097C7Cu);
	r5 = 0x86u; UPD(0x0C097C7Eu, 1);  /* 0C097C7C mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C097C7E mov Rm,Rn */
	IF(0x0C097C80u); r8 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C097C82u, 2);  /* 0C097C80 mov.w @(r0,Rm),Rn */
	r13 = 0x100u; UPD(0x0C097C84u, 1);  /* 0C097C82 mov.w @(disp,pc),Rn */
	r6 = 0xC058060u; UPD(0x0C097C86u, 1);  /* 0C097C84 mov.l @(disp,pc),Rn */
	r8 += r13;  /* 0C097C86 add Rm,Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C097C88 exts.w Rm,Rn */
	r5 = 0x140000u; UPD(0x0C097C8Cu, 3);  /* 0C097C8A mov.l @(disp,pc),Rn */
	IF(0x0C097C8Cu); { u32 t_ = r6; PR = 0x0C097C90u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097C90u); }  /* 0C097C8C jsr @Rn */
L_0C097C90: BLKS(0x0C097C90u);
	r4 = R32(r12 + 0x24u); UPD(0x0C097C92u, 1);  /* 0C097C90 mov.l @(disp,Rm),Rn */
	r8 = R32(r14); UPD(0x0C097C94u, 1);  /* 0C097C92 mov.l @Rm,Rn */
	r4 += r0;  /* 0C097C94 add Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C097C98u, 2);  /* 0C097C96 mov.l @(disp,pc),Rn */
	IF(0x0C097C98u); r8 <<= 2;  /* 0C097C98 shll2 Rn */
	r0 = 0xC1CC9B0u; UPD(0x0C097C9Cu, 2);  /* 0C097C9A mov.l @(disp,pc),Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C097C9Eu, 1);  /* 0C097C9C mov.l Rm,@(disp,Rn) */
	r8 += r0;  /* 0C097C9E add Rm,Rn */
	r4 = r13;  /* 0C097CA0 mov Rm,Rn */
	IF(0x0C097CA2u); { u32 t_ = r7; PR = 0x0C097CA6u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097CA6u); }  /* 0C097CA2 jsr @Rn */
L_0C097CA6: BLKS(0x0C097CA6u);
	r2 = R32(r14 + 0xCu); UPD(0x0C097CA8u, 1);  /* 0C097CA6 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C097CA8 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C097CACu, 2);  /* 0C097CAA mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C097CAC sub Rm,Rn */
	r5 = 0x140000u; UPD(0x0C097CB0u, 2);  /* 0C097CAE mov.l @(disp,pc),Rn */
	IF(0x0C097CB0u); { u32 t_ = r9; PR = 0x0C097CB4u; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097CB4u); }  /* 0C097CB0 jsr @Rn */
L_0C097CB4: BLKS(0x0C097CB4u);
	r1 = 0xC058060u; UPD(0x0C097CB6u, 1);  /* 0C097CB4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C097CB6 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C097CBAu, 2);  /* 0C097CB8 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C097CBCu, 1);  /* 0C097CBA mov.l @Rm,Rn */
	IF(0x0C097CBCu); { u32 t_ = r1; PR = 0x0C097CC0u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097CC0u); }  /* 0C097CBC jsr @Rn */
L_0C097CC0: BLKS(0x0C097CC0u);
	r9 += r0;  /* 0C097CC0 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C097CC4u, 2);  /* 0C097CC2 mov.l @Rm,Rn */
	r4 = 0x1Fu;  /* 0C097CC4 mov #imm,Rn */
	r3 = 0xC1CC9B8u; UPD(0x0C097CC8u, 2);  /* 0C097CC6 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C097CC8 add Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C097CCCu, 2);  /* 0C097CCA mov.l @(disp,pc),Rn */
	IF(0x0C097CCCu); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C097CCEu, 1);  /* 0C097CCC mov.w @(r0,Rm),Rn */
	IF(0x0C097CCEu); { u32 t_ = r8; PR = 0x0C097CD2u; r13 += r5; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C097CD2u); }  /* 0C097CCE jsr @Rn */
L_0C097CD2: BLKS(0x0C097CD2u);
	r0 += r13;  /* 0C097CD2 add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C097CD4 add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C097CD6 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C097CDAu, 4);  /* 0C097CD8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C097CDA add #imm,Rn */
	IF(0x0C097CDCu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C097CDEu, 2);  /* 0C097CDC mov.b @(r0,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C097CDE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C097CE2u, 2);  /* 0C097CE0 mov.l Rm,@Rn */
	r0 = r12;  /* 0C097CE2 mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C097CE6u, 2);  /* 0C097CE4 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C097CE6 mov Rm,Rn */
	IF(0x0C097CE8u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C097CEAu, 2);  /* 0C097CE8 mov.b @(r0,Rm),Rn */
	r2 = 0xC058060u; UPD(0x0C097CECu, 1);  /* 0C097CEA mov.l @(disp,pc),Rn */
	r0 = r8 & 0xFF;  /* 0C097CEC extu.b Rm,Rn */
	r8 = 0x30000u; UPD(0x0C097CF0u, 2);  /* 0C097CEE mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C097CF0 add #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C097CF4u, 2);  /* 0C097CF2 mov.l Rm,@(disp,Rn) */
	IF(0x0C097CF4u); { u32 t_ = r2; PR = 0x0C097CF8u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097CF8u); }  /* 0C097CF4 jsr @Rn */
L_0C097CF8: BLKS(0x0C097CF8u);
	r3 = 0xC058030u; UPD(0x0C097CFAu, 1);  /* 0C097CF8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C097CFA mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C097CFEu, 2);  /* 0C097CFC mov.l Rm,@(disp,Rn) */
	IF(0x0C097CFEu); { u32 t_ = r3; PR = 0x0C097D02u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097D02u); }  /* 0C097CFE jsr @Rn */
L_0C097D02: BLKS(0x0C097D02u);
	r5 = 0x808080u; UPD(0x0C097D04u, 1);  /* 0C097D02 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C097D04 mov Rm,Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C097D08u, 2);  /* 0C097D06 mov.l Rm,@(disp,Rn) */
	r9 = 0x1u;  /* 0C097D08 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C097D0Cu, 2);  /* 0C097D0A mov.l Rm,@(disp,Rn) */
	r5 = 0x9u;  /* 0C097D0C mov #imm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C097D10u, 2);  /* 0C097D0E mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C097D12u, 1);  /* 0C097D10 mov.l @(disp,Rm),Rn */
	IF(0x0C097D12u); { u32 t_ = r13; PR = 0x0C097D16u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C097D16u); }  /* 0C097D12 jsr @Rn */
L_0C097D16: BLKS(0x0C097D16u);
	r6 = R32(r14); UPD(0x0C097D18u, 1);  /* 0C097D16 mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C097D18 add #imm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C097D1A exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C097D1Eu, 3);  /* 0C097D1C mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C097D20u, 1);  /* 0C097D1E mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r9;  /* 0C097D20 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C097C7Cu, 4); goto L_0C097C7C; } UPD(0x0C097D26u, 1); goto L_0C097D26; }  /* 0C097D22 bf/s */
L_0C097D26: BLKS(0x0C097D26u);
	r4 = 0xB4u; UPD(0x0C097D28u, 1);  /* 0C097D26 mov.w @(disp,pc),Rn */
	IF(0x0C097D28u); MACL = r10 * r4;  /* 0C097D28 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C097D2Cu, 3);  /* 0C097D2A mov.l @(disp,pc),Rn */
	IF(0x0C097D2Cu); r9 = MACL;  /* 0C097D2C sts macl,Rn */
	r9 += r7;  /* 0C097D2E add Rm,Rn */
	IF(0x0C097D30u); MACL = r11 * r4;  /* 0C097D30 mul.l Rm,Rn */
	r6 = 0x86u; UPD(0x0C097D34u, 5);  /* 0C097D32 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C097D34 mov Rm,Rn */
	IF(0x0C097D36u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C097D38u, 2);  /* 0C097D36 mov.w @(r0,Rm),Rn */
	IF(0x0C097D38u); r12 = MACL;  /* 0C097D38 sts macl,Rn */
	r12 += r7;  /* 0C097D3A add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C097D3Eu, 3);  /* 0C097D3C mov.l @(disp,pc),Rn */
	r11 = r9;  /* 0C097D3E mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C097D42u, 2);  /* 0C097D40 mov.l @(disp,Rm),Rn */
	r11 += 0x50u;  /* 0C097D42 add #imm,Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C097D46u, 2);  /* 0C097D44 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C097D46 mov Rm,Rn */
	r8 += r2;  /* 0C097D48 add Rm,Rn */
	IF(0x0C097D4Au); { u32 t_ = r0; PR = 0x0C097D4Eu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097D4Eu); }  /* 0C097D4A jsr @Rn */
L_0C097D4E: BLKS(0x0C097D4Eu);
	r8 += r0;  /* 0C097D4E add Rm,Rn */
	W32(r9 + 0x24u, r8); UPD(0x0C097D52u, 2);  /* 0C097D50 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C097D52 mov Rm,Rn */
	r8 = R32(r12 + 0x28u); UPD(0x0C097D56u, 2);  /* 0C097D54 mov.l @(disp,Rm),Rn */
	r13 += 0x8u;  /* 0C097D56 add #imm,Rn */
	r12 = 0xC058030u; UPD(0x0C097D5Au, 2);  /* 0C097D58 mov.l @(disp,pc),Rn */
	IF(0x0C097D5Au); r13 >>= 2;  /* 0C097D5A shlr2 Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C097D5Eu, 2);  /* 0C097D5C mov.l @(disp,Rm),Rn */
	IF(0x0C097D5Eu); r13 >>= 2;  /* 0C097D5E shlr2 Rn */
	r5 = R32(r11); UPD(0x0C097D62u, 2);  /* 0C097D60 mov.l @Rm,Rn */
	r8 += r3;  /* 0C097D62 add Rm,Rn */
	IF(0x0C097D64u); { u32 t_ = r12; PR = 0x0C097D68u; r11 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097D68u); }  /* 0C097D64 jsr @Rn */
L_0C097D68: BLKS(0x0C097D68u);
	r8 += r0;  /* 0C097D68 add Rm,Rn */
	r13 &= r11;  /* 0C097D6A and Rm,Rn */
	W32(r9 + 0x28u, r8); UPD(0x0C097D6Eu, 3);  /* 0C097D6C mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0974AEu, 3); goto L_0C0974AE; }  /* 0C097D6E bra */
L_0C097D80: BLKS(0x0C097D80u);
	r13 = 0xC058130u; UPD(0x0C097D82u, 1);  /* 0C097D80 mov.l @(disp,pc),Rn */
	r12 = 0xC057430u; UPD(0x0C097D84u, 1);  /* 0C097D82 mov.l @(disp,pc),Rn */
	IF(0x0C097D84u); { u32 t_ = r13; PR = 0x0C097D88u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C097D88u); }  /* 0C097D84 jsr @Rn */
L_0C097D88: BLKS(0x0C097D88u);
	r13 = 0xC0A9E40u; UPD(0x0C097D8Au, 1);  /* 0C097D88 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C097D8A mov Rm,Rn */
	IF(0x0C097D8Cu); { u32 t_ = r12; PR = 0x0C097D90u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C097D90u); }  /* 0C097D8C jsr @Rn */
L_0C097D90: BLKS(0x0C097D90u);
	r4 = r10;  /* 0C097D90 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C097D92 mov #imm,Rn */
	IF(0x0C097D94u); { u32 t_ = r13; PR = 0x0C097D98u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C097D98u); }  /* 0C097D94 jsr @Rn */
L_0C097D98: BLKS(0x0C097D98u);
	T = (r0 & r0) == 0;  /* 0C097D98 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C097D26u, 4); goto L_0C097D26; } goto L_0C097D9E; }  /* 0C097D9A bt/s */
L_0C097D9E: BLKS(0x0C097D9Eu);
	r2 = 0xFFF80000u; UPD(0x0C097DA0u, 2);  /* 0C097D9E mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C097DA2u, 1);  /* 0C097DA0 mov.l Rm,@Rn */
	{ W8(r9, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C097D26u, 3); goto L_0C097D26; }  /* 0C097DA2 bra */
L_0C097DB0: BLKS(0x0C097DB0u);
	r9 = 0xC0A03F0u; UPD(0x0C097DB2u, 1);  /* 0C097DB0 mov.l @(disp,pc),Rn */
	IF(0x0C097DB2u); { u32 t_ = r9; PR = 0x0C097DB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C097DB6u); }  /* 0C097DB2 jsr @Rn */
L_0C097DB6: BLKS(0x0C097DB6u);
	IF(0x0C097DB6u); T = (s32)r0 >= 0;  /* 0C097DB6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097DC0u, 4); goto L_0C097DC0; } goto L_0C097DBC; }  /* 0C097DB8 bt/s */
L_0C097DBC: BLKS(0x0C097DBCu);
	{ IF(0x0C097DBEu); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C097DBC bra */
L_0C097DC0: BLKS(0x0C097DC0u);
	r13 = 0xB4u; UPD(0x0C097DC2u, 1);  /* 0C097DC0 mov.w @(disp,pc),Rn */
	IF(0x0C097DC2u); MACL = r10 * r13;  /* 0C097DC2 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C097DC6u, 3);  /* 0C097DC4 mov.l @(disp,pc),Rn */
	IF(0x0C097DC6u); r3 = MACL;  /* 0C097DC6 sts macl,Rn */
	IF(0x0C097DC8u); MACL = r0 * r13;  /* 0C097DC8 mul.l Rm,Rn */
	r3 += r8;  /* 0C097DCA add Rm,Rn */
	r1 = R32(r3 + 0x8u); UPD(0x0C097DCEu, 5);  /* 0C097DCC mov.l @(disp,Rm),Rn */
	IF(0x0C097DCEu); r7 = MACL;  /* 0C097DCE sts macl,Rn */
	r7 += r8;  /* 0C097DD0 add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C097DD4u, 3);  /* 0C097DD2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C097DD4 add #imm,Rn */
	T = r1 == r0;  /* 0C097DD6 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C097E40u, 5); goto L_0C097E40; }  /* 0C097DD8 bt */
L_0C097DDA: BLKS(0x0C097DDAu);
	r10 = 0x2000000u; UPD(0x0C097DDCu, 1);  /* 0C097DDA mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09739Cu, 3); goto L_0C09739C; }  /* 0C097DDC bra */
L_0C097E40: BLKS(0x0C097E40u);
	r0 = 0x84u; UPD(0x0C097E42u, 1);  /* 0C097E40 mov.w @(disp,pc),Rn */
	r6 = r3;  /* 0C097E42 mov Rm,Rn */
	r6 += r0;  /* 0C097E44 add Rm,Rn */
	r0 += r7;  /* 0C097E46 add Rm,Rn */
	r0 += 0x2u;  /* 0C097E48 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C097E4Cu, 5);  /* 0C097E4A mov.w @Rm,Rn */
	r6 += 0x2u;  /* 0C097E4C add #imm,Rn */
	r9 = 0x1FFu; UPD(0x0C097E50u, 2);  /* 0C097E4E mov.w @(disp,pc),Rn */
	r4 &= r9;  /* 0C097E50 and Rm,Rn */
	r2 = r4;  /* 0C097E52 mov Rm,Rn */
	r2 += 0xFFFFFF80u;  /* 0C097E54 add #imm,Rn */
	r5 = 0x100u; UPD(0x0C097E58u, 4);  /* 0C097E56 mov.w @(disp,pc),Rn */
	r12 = r2 & 0xFFFF;  /* 0C097E58 extu.w Rm,Rn */
	W16(r6, r4); UPD(0x0C097E5Cu, 2);  /* 0C097E5A mov.w Rm,@Rn */
	T = r12 > r5;  /* 0C097E5C cmp/hi Rm,Rn */
	{ u32 c_ = T; r13 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097EE0u, 4); goto L_0C097EE0; } goto L_0C097E62; }  /* 0C097E5E bt/s */
L_0C097E62: BLKS(0x0C097E62u);
	r8 = 0xA8u; UPD(0x0C097E64u, 2);  /* 0C097E62 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C097E64 add Rm,Rn */
	r7 += 0x1u;  /* 0C097E66 add #imm,Rn */
	r3 += r8;  /* 0C097E68 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C097E6Cu, 4);  /* 0C097E6A mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C097E6C add #imm,Rn */
	UPD(0x0C097E6Eu, 1);
L_0C097E6E: BLKS(0x0C097E6Eu);
	r9 = 0xB4u; UPD(0x0C097E70u, 1);  /* 0C097E6E mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C097E70 mov Rm,Rn */
	IF(0x0C097E72u); MACL = r10 * r9;  /* 0C097E72 mul.l Rm,Rn */
	W8(r3, r1); UPD(0x0C097E76u, 4);  /* 0C097E74 mov.b Rm,@Rn */
	IF(0x0C097E76u); r7 = MACL;  /* 0C097E76 sts macl,Rn */
	r3 = 0xC26CD40u; UPD(0x0C097E7Au, 2);  /* 0C097E78 mov.l @(disp,pc),Rn */
	IF(0x0C097E7Au); MACL = r11 * r9;  /* 0C097E7A mul.l Rm,Rn */
	r7 += r3;  /* 0C097E7C add Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C097E80u, 4);  /* 0C097E7E mov.l @(disp,pc),Rn */
	r11 = r7;  /* 0C097E80 mov Rm,Rn */
	r11 += 0x50u;  /* 0C097E82 add #imm,Rn */
	IF(0x0C097E84u); r9 = MACL;  /* 0C097E84 sts macl,Rn */
	r5 = R32(r11); UPD(0x0C097E88u, 4);  /* 0C097E86 mov.l @Rm,Rn */
	r9 += r3;  /* 0C097E88 add Rm,Rn */
	IF(0x0C097E8Au); { u32 t_ = r12; PR = 0x0C097E8Eu; W32(r14 + 0x10u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097E8Eu); }  /* 0C097E8A jsr @Rn */
L_0C097E8E: BLKS(0x0C097E8Eu);
	r5 = 0x66666667u; UPD(0x0C097E90u, 1);  /* 0C097E8E mov.l @(disp,pc),Rn */
	IF(0x0C097E90u); r0 <<= 2;  /* 0C097E90 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C097E92 dmuls.l Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C097E96u, 4);  /* 0C097E94 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C097E96 mov Rm,Rn */
	IF(0x0C097E98u); r1 = MACH;  /* 0C097E98 sts mach,Rn */
	IF(0x0C097E9Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C097E9A shar Rn */
	IF(0x0C097E9Cu); T = r0 >> 31; r0 <<= 1;  /* 0C097E9C shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C097E9E subc Rm,Rn */
	r1 -= r0;  /* 0C097EA0 sub Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C097EA4u, 7);  /* 0C097EA2 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C097EA6u, 1);  /* 0C097EA4 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C097EA6 add Rm,Rn */
	r5 = R32(r11); UPD(0x0C097EAAu, 2);  /* 0C097EA8 mov.l @Rm,Rn */
	IF(0x0C097EAAu); { u32 t_ = r8; PR = 0x0C097EAEu; W32(r6 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097EAEu); }  /* 0C097EAA jsr @Rn */
L_0C097EAE: BLKS(0x0C097EAEu);
	r4 = R32(r9 + 0x28u); UPD(0x0C097EB0u, 1);  /* 0C097EAE mov.l @(disp,Rm),Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C097EB2u, 1);  /* 0C097EB0 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C097EB2 add Rm,Rn */
	r13 = 0xC0A0380u; UPD(0x0C097EB6u, 2);  /* 0C097EB4 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C097EB8u, 1);  /* 0C097EB6 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r4); UPD(0x0C097EBAu, 1);  /* 0C097EB8 mov.l Rm,@(disp,Rn) */
	r11 = 0x98u; UPD(0x0C097EBCu, 1);  /* 0C097EBA mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C097EBC mov Rm,Rn */
	IF(0x0C097EBEu); { u32 t_ = r13; PR = 0x0C097EC2u; W32(r12 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097EC2u); }  /* 0C097EBE jsr @Rn */
L_0C097EC2: BLKS(0x0C097EC2u);
	r3 = R32(r14 + 0x10u); UPD(0x0C097EC4u, 1);  /* 0C097EC2 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C097EC4 add Rm,Rn */
	r9 += 0x2u;  /* 0C097EC6 add #imm,Rn */
	r3 += r11;  /* 0C097EC8 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C097ECCu, 4);  /* 0C097ECA mov.b @Rm,Rn */
	r3 += 0x2u;  /* 0C097ECC add #imm,Rn */
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09739Cu, 4); goto L_0C09739C; }  /* 0C097ECE bra */
L_0C097EE0: BLKS(0x0C097EE0u);
	r5 = 0xA8u; UPD(0x0C097EE2u, 1);  /* 0C097EE0 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C097EE2 add Rm,Rn */
	r7 += 0x1u;  /* 0C097EE4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C097EE8u, 3);  /* 0C097EE6 mov.b @Rm,Rn */
	r3 += r5;  /* 0C097EE8 add Rm,Rn */
	r3 += 0x1u;  /* 0C097EEA add #imm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C097E6Eu, 5); goto L_0C097E6E; }  /* 0C097EEC bra */
L_0C097F10: BLKS(0x0C097F10u);
	r13 = 0xC0A03F0u; UPD(0x0C097F12u, 1);  /* 0C097F10 mov.l @(disp,pc),Rn */
	IF(0x0C097F12u); { u32 t_ = r13; PR = 0x0C097F16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C097F16u); }  /* 0C097F12 jsr @Rn */
L_0C097F16: BLKS(0x0C097F16u);
	IF(0x0C097F16u); T = (s32)r0 >= 0;  /* 0C097F16 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C097F20u, 4); goto L_0C097F20; } goto L_0C097F1C; }  /* 0C097F18 bt/s */
L_0C097F1C: BLKS(0x0C097F1Cu);
	{ IF(0x0C097F1Eu); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C097F1C bra */
L_0C097F20: BLKS(0x0C097F20u);
	r2 = 0xB4u; UPD(0x0C097F22u, 1);  /* 0C097F20 mov.w @(disp,pc),Rn */
	IF(0x0C097F22u); MACL = r0 * r2;  /* 0C097F22 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C097F26u, 3);  /* 0C097F24 mov.l @(disp,pc),Rn */
	IF(0x0C097F26u); r3 = MACL;  /* 0C097F26 sts macl,Rn */
	r3 += r6;  /* 0C097F28 add Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C097F2Cu, 3);  /* 0C097F2A mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C097F2Eu, 1);  /* 0C097F2C mov.l @(disp,pc),Rn */
	T = r7 == r4;  /* 0C097F2E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C097F32u); MACL = r10 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C097F38u, 5); goto L_0C097F38; } goto L_0C097F34; }  /* 0C097F30 bf/s */
L_0C097F34: BLKS(0x0C097F34u);
	{ IF(0x0C097F36u); r10 = MACL; /* slot sts macl,Rn */ UPD(0x0C098040u, 5); goto L_0C098040; }  /* 0C097F34 bra */
L_0C097F38: BLKS(0x0C097F38u);
	IF(0x0C097F38u); MACL = r10 * r2;  /* 0C097F38 mul.l Rm,Rn */
	r9 = 0x84u; UPD(0x0C097F3Cu, 3);  /* 0C097F3A mov.w @(disp,pc),Rn */
	IF(0x0C097F3Cu); r7 = MACL;  /* 0C097F3C sts macl,Rn */
	r7 += r6;  /* 0C097F3E add Rm,Rn */
	r0 = r7;  /* 0C097F40 mov Rm,Rn */
	r0 += r9;  /* 0C097F42 add Rm,Rn */
	r9 += r3;  /* 0C097F44 add Rm,Rn */
	r9 += 0x2u;  /* 0C097F46 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C097F4Au, 7);  /* 0C097F48 mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C097F4A add #imm,Rn */
	r12 = 0x1FFu; UPD(0x0C097F4Eu, 2);  /* 0C097F4C mov.w @(disp,pc),Rn */
	r5 &= r12;  /* 0C097F4E and Rm,Rn */
	r6 = r5;  /* 0C097F50 mov Rm,Rn */
	r6 += 0xFFFFFF80u;  /* 0C097F52 add #imm,Rn */
	r8 = 0x100u; UPD(0x0C097F56u, 4);  /* 0C097F54 mov.w @(disp,pc),Rn */
	r2 = r6 & 0xFFFF;  /* 0C097F56 extu.w Rm,Rn */
	W16(r0, r5); UPD(0x0C097F5Au, 2);  /* 0C097F58 mov.w Rm,@Rn */
	T = r2 > r8;  /* 0C097F5A cmp/hi Rm,Rn */
	{ u32 c_ = T; r13 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C098020u, 4); goto L_0C098020; } goto L_0C097F60; }  /* 0C097F5C bt/s */
L_0C097F60: BLKS(0x0C097F60u);
	r4 = 0xA8u; UPD(0x0C097F62u, 2);  /* 0C097F60 mov.w @(disp,pc),Rn */
	r2 = r7;  /* 0C097F62 mov Rm,Rn */
	r3 += r4;  /* 0C097F64 add Rm,Rn */
	r3 += 0x1u;  /* 0C097F66 add #imm,Rn */
	r2 += r4;  /* 0C097F68 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C097F6Cu, 5);  /* 0C097F6A mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C097F6C add #imm,Rn */
	UPD(0x0C097F6Eu, 1);
L_0C097F6E: BLKS(0x0C097F6Eu);
	W8(r2, r1); UPD(0x0C097F70u, 1);  /* 0C097F6E mov.b Rm,@Rn */
	r4 = r13;  /* 0C097F70 mov Rm,Rn */
	r2 = 0xB4u; UPD(0x0C097F74u, 2);  /* 0C097F72 mov.w @(disp,pc),Rn */
	IF(0x0C097F74u); MACL = r10 * r2;  /* 0C097F74 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C097F78u, 3);  /* 0C097F76 mov.l @(disp,pc),Rn */
	IF(0x0C097F78u); r12 = MACL;  /* 0C097F78 sts macl,Rn */
	IF(0x0C097F7Au); MACL = r11 * r2;  /* 0C097F7A mul.l Rm,Rn */
	r12 += r3;  /* 0C097F7C add Rm,Rn */
	r9 = r12;  /* 0C097F7E mov Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C097F82u, 6);  /* 0C097F80 mov.l @(disp,pc),Rn */
	IF(0x0C097F82u); r7 = MACL;  /* 0C097F82 sts macl,Rn */
	r7 += r3;  /* 0C097F84 add Rm,Rn */
	r9 += 0x50u;  /* 0C097F86 add #imm,Rn */
	W32(r14 + 0x14u, r7); UPD(0x0C097F8Au, 4);  /* 0C097F88 mov.l Rm,@(disp,Rn) */
	IF(0x0C097F8Au); { u32 t_ = r11; PR = 0x0C097F8Eu; r5 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097F8Eu); }  /* 0C097F8A jsr @Rn */
L_0C097F8E: BLKS(0x0C097F8Eu);
	r8 = 0x66666667u; UPD(0x0C097F90u, 1);  /* 0C097F8E mov.l @(disp,pc),Rn */
	IF(0x0C097F90u); r0 <<= 2;  /* 0C097F90 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C097F92 dmuls.l Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C097F96u, 4);  /* 0C097F94 mov.l @(disp,pc),Rn */
	IF(0x0C097F96u); r4 = MACH;  /* 0C097F96 sts mach,Rn */
	IF(0x0C097F98u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C097F98 shar Rn */
	IF(0x0C097F9Au); T = r0 >> 31; r0 <<= 1;  /* 0C097F9A shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C097F9C subc Rm,Rn */
	r4 -= r0;  /* 0C097F9E sub Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C097FA2u, 6);  /* 0C097FA0 mov.l @(disp,Rm),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C097FA4u, 1);  /* 0C097FA2 mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C097FA4 add Rm,Rn */
	W32(r12 + 0x24u, r5); UPD(0x0C097FA8u, 2);  /* 0C097FA6 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C097FA8 mov Rm,Rn */
	IF(0x0C097FAAu); { u32 t_ = r1; PR = 0x0C097FAEu; r5 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097FAEu); }  /* 0C097FAA jsr @Rn */
L_0C097FAE: BLKS(0x0C097FAEu);
	r2 = R32(r14 + 0x14u); UPD(0x0C097FB0u, 1);  /* 0C097FAE mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C097FB0 mov Rm,Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C097FB4u, 2);  /* 0C097FB2 mov.l @(disp,Rm),Rn */
	r3 = 0xC0A0380u; UPD(0x0C097FB6u, 1);  /* 0C097FB4 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C097FB6 add Rm,Rn */
	r13 = R32(r2 + 0xCu); UPD(0x0C097FBAu, 2);  /* 0C097FB8 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r6); UPD(0x0C097FBCu, 1);  /* 0C097FBA mov.l Rm,@(disp,Rn) */
	IF(0x0C097FBCu); { u32 t_ = r3; PR = 0x0C097FC0u; W32(r12 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C097FC0u); }  /* 0C097FBC jsr @Rn */
L_0C097FC0: BLKS(0x0C097FC0u);
	r7 = 0x9Au; UPD(0x0C097FC2u, 1);  /* 0C097FC0 mov.w @(disp,pc),Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C097FC4u, 1);  /* 0C097FC2 mov.l @(disp,Rm),Rn */
	IF(0x0C097FC4u); r11 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C097FC6u, 1);  /* 0C097FC4 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C097FC6 tst Rm,Rn */
	if (T) { UPD(0x0C098010u, 4); goto L_0C098010; }  /* 0C097FC8 bt */
L_0C097FCA: BLKS(0x0C097FCAu);
	r0 = r12;  /* 0C097FCA mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C097FCEu, 2);  /* 0C097FCC mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C097FD0u, 1);  /* 0C097FCE mov.l @(disp,pc),Rn */
	IF(0x0C097FD0u); r10 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C097FD2u, 1);  /* 0C097FD0 mov.w @(r0,Rm),Rn */
	r9 = 0xC0000u; UPD(0x0C097FD4u, 1);  /* 0C097FD2 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C097FD4 mov Rm,Rn */
	IF(0x0C097FD6u); { u32 t_ = r8; PR = 0x0C097FDAu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C097FDAu); }  /* 0C097FD6 jsr @Rn */
L_0C097FDA: BLKS(0x0C097FDAu);
	r5 = 0x66666667u; UPD(0x0C097FDCu, 1);  /* 0C097FDA mov.l @(disp,pc),Rn */
	IF(0x0C097FDCu); r0 <<= 2;  /* 0C097FDC shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C097FDE dmuls.l Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C097FE2u, 4);  /* 0C097FE0 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C097FE2 mov Rm,Rn */
	IF(0x0C097FE4u); r1 = MACH;  /* 0C097FE4 sts mach,Rn */
	IF(0x0C097FE6u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C097FE6 shar Rn */
	IF(0x0C097FE8u); T = r0 >> 31; r0 <<= 1;  /* 0C097FE8 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C097FEA subc Rm,Rn */
	r1 -= r0;  /* 0C097FEC sub Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C097FF0u, 7);  /* 0C097FEE mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C097FF0 add Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C097FF4u, 2);  /* 0C097FF2 mov.l Rm,@(disp,Rn) */
	IF(0x0C097FF4u); { u32 t_ = r13; PR = 0x0C097FF8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C097FF8u); }  /* 0C097FF4 jsr @Rn */
L_0C097FF8: BLKS(0x0C097FF8u);
	r6 = R32(r12 + 0x28u); UPD(0x0C097FFAu, 1);  /* 0C097FF8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C097FFA add #imm,Rn */
	r12 = 0x30000u; UPD(0x0C097FFEu, 2);  /* 0C097FFC mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C097FFE add Rm,Rn */
	W32(r15, r12); UPD(0x0C098002u, 2);  /* 0C098000 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C098002 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C098006u, 2);  /* 0C098004 mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C098006 mov Rm,Rn */
	r0 = 0xC7C14A0u; UPD(0x0C09800Au, 2);  /* 0C098008 mov.l @(disp,pc),Rn */
L_0C09800A: BLKS(0x0C09800Au);
	IF(0x0C09800Au); { u32 t_ = r0; PR = 0x0C09800Eu; IF(0x0C09800Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09800Eu); }  /* 0C09800A jsr @Rn */
L_0C09800E: BLKS(0x0C09800Eu);
	r15 += 0x4u;  /* 0C09800E add #imm,Rn */
	UPD(0x0C098010u, 1);
L_0C098010: BLKS(0x0C098010u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C098010 bra */
L_0C098020: BLKS(0x0C098020u);
	r8 = 0xA8u; UPD(0x0C098022u, 1);  /* 0C098020 mov.w @(disp,pc),Rn */
	r2 = r7;  /* 0C098022 mov Rm,Rn */
	r3 += r8;  /* 0C098024 add Rm,Rn */
	r3 += 0x1u;  /* 0C098026 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C09802Au, 4);  /* 0C098028 mov.b @Rm,Rn */
	r2 += r8;  /* 0C09802A add Rm,Rn */
	r2 += 0x1u;  /* 0C09802C add #imm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C097F6Eu, 5); goto L_0C097F6E; }  /* 0C09802E bra */
L_0C098040: BLKS(0x0C098040u);
	r10 += r6;  /* 0C098040 add Rm,Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C098044u, 2);  /* 0C098042 mov.l Rm,@(disp,Rn) */
L_0C098044: BLKS(0x0C098044u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C098044 bra */
L_0C098080: BLKS(0x0C098080u);
	r11 = 0xC0A03F0u; UPD(0x0C098082u, 1);  /* 0C098080 mov.l @(disp,pc),Rn */
	IF(0x0C098082u); { u32 t_ = r11; PR = 0x0C098086u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C098086u); }  /* 0C098082 jsr @Rn */
L_0C098086: BLKS(0x0C098086u);
	IF(0x0C098086u); T = (s32)r0 >= 0;  /* 0C098086 cmp/pz Rn */
	if (T) { UPD(0x0C09808Eu, 4); goto L_0C09808E; }  /* 0C098088 bt */
L_0C09808A: BLKS(0x0C09808Au);
	{ IF(0x0C09808Cu); ; /* slot nop */ UPD(0x0C0975D0u, 3); goto L_0C0975D0; }  /* 0C09808A bra */
L_0C09808E: BLKS(0x0C09808Eu);
	r13 = 0xB4u; UPD(0x0C098090u, 1);  /* 0C09808E mov.w @(disp,pc),Rn */
	IF(0x0C098090u); MACL = r10 * r13;  /* 0C098090 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C098094u, 3);  /* 0C098092 mov.l @(disp,pc),Rn */
	IF(0x0C098094u); r9 = MACL;  /* 0C098094 sts macl,Rn */
	r9 += r12;  /* 0C098096 add Rm,Rn */
	r6 = R32(r9); UPD(0x0C09809Au, 3);  /* 0C098098 mov.l @Rm,Rn */
	IF(0x0C09809Au); MACL = r0 * r13;  /* 0C09809A mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09809Eu, 3);  /* 0C09809C mov.l @(disp,pc),Rn */
	r6 &= r2;  /* 0C09809E and Rm,Rn */
	W32(r9, r6); UPD(0x0C0980A2u, 2);  /* 0C0980A0 mov.l Rm,@Rn */
	IF(0x0C0980A2u); r5 = MACL;  /* 0C0980A2 sts macl,Rn */
	r5 += r12;  /* 0C0980A4 add Rm,Rn */
	r3 = R32(r5); UPD(0x0C0980A8u, 3);  /* 0C0980A6 mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C0980AAu, 1);  /* 0C0980A8 mov.l @(disp,pc),Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C0980ACu, 1);  /* 0C0980AA mov.l @(disp,Rm),Rn */
	r3 &= r7;  /* 0C0980AC and Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C0980B0u, 2);  /* 0C0980AE mov.l @(disp,Rm),Rn */
	r6 |= r3;  /* 0C0980B0 or Rm,Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C0980B4u, 2);  /* 0C0980B2 mov.l @(disp,Rm),Rn */
	r4 += r11;  /* 0C0980B4 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0980B8u, 2);  /* 0C0980B6 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C0980B8 add Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0980BCu, 2);  /* 0C0980BA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r8); UPD(0x0C0980BEu, 1);  /* 0C0980BC mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0980C0u, 1);  /* 0C0980BE mov.l Rm,@Rn */
	r9 += 0x7Eu;  /* 0C0980C0 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0980C4u, 2);  /* 0C0980C2 mov.w @Rm,Rn */
	IF(0x0C0980C4u); MACL = r11 * r13;  /* 0C0980C4 mul.l Rm,Rn */
	IF(0x0C0980C6u); r0 = MACL;  /* 0C0980C6 sts macl,Rn */
	r0 += r12;  /* 0C0980C8 add Rm,Rn */
	r0 += 0x3Cu;  /* 0C0980CA add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0980CEu, 6);  /* 0C0980CC mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0980CE tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C098130u, 4); goto L_0C098130; } goto L_0C0980D4; }  /* 0C0980D0 bf/s */
L_0C0980D4: BLKS(0x0C0980D4u);
	r0 = 0x98u; UPD(0x0C0980D6u, 2);  /* 0C0980D4 mov.w @(disp,pc),Rn */
	r10 = 0x2u;  /* 0C0980D6 mov #imm,Rn */
	IF(0x0C0980D8u); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0980DAu, 2);  /* 0C0980D8 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C0980DA add #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C0980DC extu.b Rm,Rn */
	T = r12 > r10;  /* 0C0980DE cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0980E2u); W8(r0 + r9, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C098044u, 6); goto L_0C098044; } UPD(0x0C0980E4u, 1); goto L_0C0980E4; }  /* 0C0980E0 bf/s */
L_0C0980E4: BLKS(0x0C0980E4u);
	r12 = 0xC0AFE40u; UPD(0x0C0980E6u, 1);  /* 0C0980E4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0980E6 add #imm,Rn */
	IF(0x0C0980E8u); { u32 t_ = r12; PR = 0x0C0980ECu; IF(0x0C0980EAu); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0980ECu); }  /* 0C0980E8 jsr @Rn */
L_0C0980EC: BLKS(0x0C0980ECu);
	r11 = 0xC1CC9F4u; UPD(0x0C0980EEu, 1);  /* 0C0980EC mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0980EE and #imm,r0 */
	IF(0x0C0980F0u); r0 <<= 2;  /* 0C0980F0 shll2 Rn */
	r11 += r0;  /* 0C0980F2 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0980F6u, 4);  /* 0C0980F4 mov.w @(disp,pc),Rn */
	IF(0x0C0980F6u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0980F8u, 1);  /* 0C0980F6 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C0980F8 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0980FCu, 2);  /* 0C0980FA mov.l Rm,@Rn */
	r0 = r9;  /* 0C0980FC mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C098100u, 2);  /* 0C0980FE mov.w @(disp,pc),Rn */
	IF(0x0C098100u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C098102u, 1);  /* 0C098100 mov.b @(r0,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C098104u, 1);  /* 0C098102 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C098104 extu.b Rm,Rn */
	r0 = 0xFFFE0000u; UPD(0x0C098108u, 2);  /* 0C098106 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C09810Au, 1);  /* 0C098108 mov.l Rm,@(disp,Rn) */
	r4 = 0x1000u; UPD(0x0C09810Cu, 1);  /* 0C09810A mov.w @(disp,pc),Rn */
	IF(0x0C09810Cu); { u32 t_ = r8; PR = 0x0C098110u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C098110u); }  /* 0C09810C jsr @Rn */
L_0C098110: BLKS(0x0C098110u);
	r3 = 0xFFFFF800u; UPD(0x0C098112u, 1);  /* 0C098110 mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C098112 mov #imm,Rn */
	r0 += r3;  /* 0C098114 add Rm,Rn */
	IF(0x0C098116u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C098116 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09811Au, 4);  /* 0C098118 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C09811Cu, 1);  /* 0C09811A mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C09811Eu, 1);  /* 0C09811C mov.l @Rm,Rn */
	r5 = R32(r11); UPD(0x0C098120u, 1);  /* 0C09811E mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C098122u, 1);  /* 0C098120 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C097AF6u, 3); goto L_0C097AF6; }  /* 0C098122 bra */
L_0C098130: BLKS(0x0C098130u);
	r3 = R32(r9 + 0xCu); UPD(0x0C098132u, 1);  /* 0C098130 mov.l @(disp,Rm),Rn */
	r9 = 0xEu;  /* 0C098132 mov #imm,Rn */
	T = r3 > r9;  /* 0C098134 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0981C2u, 5); goto L_0C0981C2; }  /* 0C098136 bt */
L_0C098138: BLKS(0x0C098138u);
	r0 = 0xC098174u;  /* 0C098138 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C09813A add Rm,Rn */
	IF(0x0C09813Cu); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09813Eu, 3);  /* 0C09813C mov.w @(r0,Rm),Rn */
	IF(0x0C09813Eu); { u32 tv_ = (r13 + 0x0C098142u); u32 t_ = PHYS(tv_); IF(0x0C098140u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09749Au: goto L_0C09749A; case 0x0C0981A0u: goto L_0C0981A0; case 0x0C0981E0u: goto L_0C0981E0; case 0x0C098206u: goto L_0C098206; default: JUMPD(tv_); } }  /* 0C09813E braf Rn */
L_0C0981A0: BLKS(0x0C0981A0u);
	r3 = 0xB4u; UPD(0x0C0981A2u, 1);  /* 0C0981A0 mov.w @(disp,pc),Rn */
	IF(0x0C0981A2u); MACL = r11 * r3;  /* 0C0981A2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0981A6u, 3);  /* 0C0981A4 mov.l @(disp,pc),Rn */
	IF(0x0C0981A6u); r2 = MACL;  /* 0C0981A6 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C0981AAu, 2);  /* 0C0981A8 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0981AA add Rm,Rn */
	r2 += r1;  /* 0C0981AC add Rm,Rn */
	r2 += 0x1u;  /* 0C0981AE add #imm,Rn */
	UPD(0x0C0981B0u, 3);
L_0C0981B0: BLKS(0x0C0981B0u);
	IF(0x0C0981B0u); MACL = r10 * r3;  /* 0C0981B0 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0981B4u, 3);  /* 0C0981B2 mov.b @Rm,Rn */
	IF(0x0C0981B4u); r3 = MACL;  /* 0C0981B4 sts macl,Rn */
	r3 += r7;  /* 0C0981B6 add Rm,Rn */
	r1 += r3;  /* 0C0981B8 add Rm,Rn */
	r1 += 0x1u;  /* 0C0981BA add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r1); UPD(0x0C0981BEu, 5);  /* 0C0981BC mov.b @Rm,Rn */
	T = (r6 & r11) == 0;  /* 0C0981BE tst Rm,Rn */
	if (!T) { UPD(0x0C0981C6u, 4); goto L_0C0981C6; }  /* 0C0981C0 bf */
L_0C0981C2: BLKS(0x0C0981C2u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C0981C2 bra */
L_0C0981C6: BLKS(0x0C0981C6u);
	r4 = r10;  /* 0C0981C6 mov Rm,Rn */
	r8 = R32(r3 + 0xCu); UPD(0x0C0981CAu, 2);  /* 0C0981C8 mov.l @(disp,Rm),Rn */
	r5 = 0x1u;  /* 0C0981CA mov #imm,Rn */
	r10 = 0xC0A0380u; UPD(0x0C0981CEu, 2);  /* 0C0981CC mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0981CE add #imm,Rn */
	r0 = 0x88u; UPD(0x0C0981D2u, 2);  /* 0C0981D0 mov.w @(disp,pc),Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0981D4u, 1);  /* 0C0981D2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0981D4u); { u32 t_ = r10; PR = 0x0C0981D8u; IF(0x0C0981D6u); W16(r0 + r3, r5); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0981D8u); }  /* 0C0981D4 jsr @Rn */
L_0C0981D8: BLKS(0x0C0981D8u);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C097712u, 3); goto L_0C097712; }  /* 0C0981D8 bra */
L_0C0981E0: BLKS(0x0C0981E0u);
	r12 = 0xB4u; UPD(0x0C0981E2u, 1);  /* 0C0981E0 mov.w @(disp,pc),Rn */
	IF(0x0C0981E2u); MACL = r11 * r12;  /* 0C0981E2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0981E6u, 3);  /* 0C0981E4 mov.l @(disp,pc),Rn */
	IF(0x0C0981E6u); r4 = MACL;  /* 0C0981E6 sts macl,Rn */
	IF(0x0C0981E8u); MACL = r10 * r12;  /* 0C0981E8 mul.l Rm,Rn */
	r5 = 0xA0u; UPD(0x0C0981ECu, 4);  /* 0C0981EA mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C0981EC add Rm,Rn */
	IF(0x0C0981EEu); r3 = MACL;  /* 0C0981EE sts macl,Rn */
	r4 += r5;  /* 0C0981F0 add Rm,Rn */
	r3 += r2;  /* 0C0981F2 add Rm,Rn */
	r5 += r3;  /* 0C0981F4 add Rm,Rn */
	r4 += 0x1u;  /* 0C0981F6 add #imm,Rn */
	r5 += 0x1u;  /* 0C0981F8 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0981FCu, 8);  /* 0C0981FA mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0981FEu, 1);  /* 0C0981FC mov.b @Rm,Rn */
	T = (r7 & r0) == 0;  /* 0C0981FE tst Rm,Rn */
	if (!T) { UPD(0x0C098206u, 4); goto L_0C098206; }  /* 0C098200 bf */
L_0C098202: BLKS(0x0C098202u);
	{ IF(0x0C098204u); ; /* slot nop */ UPD(0x0C0975C0u, 3); goto L_0C0975C0; }  /* 0C098202 bra */
L_0C098206: BLKS(0x0C098206u);
	r8 = 0xB4u; UPD(0x0C098208u, 1);  /* 0C098206 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C098208 mov Rm,Rn */
	IF(0x0C09820Au); MACL = r10 * r8;  /* 0C09820A mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09820Eu, 4);  /* 0C09820C mov.l @(disp,pc),Rn */
	IF(0x0C09820Eu); r12 = MACL;  /* 0C09820E sts macl,Rn */
	r12 += r13;  /* 0C098210 add Rm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C098214u, 3);  /* 0C098212 mov.l @(disp,Rm),Rn */
	r5 = 0xC1CC9A0u; UPD(0x0C098216u, 1);  /* 0C098214 mov.l @(disp,pc),Rn */
	IF(0x0C098216u); r0 <<= 2;  /* 0C098216 shll2 Rn */
	IF(0x0C098218u); r7 = R32(r0 + r5); UPD(0x0C09821Au, 2);  /* 0C098218 mov.l @(r0,Rm),Rn */
	r3 = 0xC0A0380u; UPD(0x0C09821Cu, 1);  /* 0C09821A mov.l @(disp,pc),Rn */
	IF(0x0C09821Cu); { u32 t_ = r3; PR = 0x0C098220u; W32(r12 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C098220u); }  /* 0C09821C jsr @Rn */
L_0C098220: BLKS(0x0C098220u);
	r12 += 0x7Eu;  /* 0C098220 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r12); UPD(0x0C098224u, 2);  /* 0C098222 mov.w @Rm,Rn */
	r4 = r10;  /* 0C098224 mov Rm,Rn */
	IF(0x0C098226u); MACL = r6 * r8;  /* 0C098226 mul.l Rm,Rn */
	r11 = 0xA5u; UPD(0x0C09822Au, 4);  /* 0C098228 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFF82u;  /* 0C09822A add #imm,Rn */
	IF(0x0C09822Cu); r0 = MACL;  /* 0C09822C sts macl,Rn */
	r0 += r13;  /* 0C09822E add Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C098232u, 4);  /* 0C098230 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C098232 mov #imm,Rn */
	IF(0x0C098234u); r0 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C098236u, 2);  /* 0C098234 mov.b @(r0,Rm),Rn */
	r13 = 0xC1CC9DCu; UPD(0x0C098238u, 1);  /* 0C098236 mov.l @(disp,pc),Rn */
	IF(0x0C098238u); { u32 t_ = r9; PR = 0x0C09823Cu; IF(0x0C09823Au); r5 = (u32)(s32)(s8)R8(r0 + r13); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09823Cu); }  /* 0C098238 jsr @Rn */
L_0C09823C: BLKS(0x0C09823Cu);
	T = (r0 & r0) == 0;  /* 0C09823C tst Rm,Rn */
	if (T) { UPD(0x0C098288u, 4); goto L_0C098288; }  /* 0C09823E bt */
L_0C098240: BLKS(0x0C098240u);
	r9 = 0xC0580D0u; UPD(0x0C098242u, 1);  /* 0C098240 mov.l @(disp,pc),Rn */
	r13 = 0xC058180u; UPD(0x0C098244u, 1);  /* 0C098242 mov.l @(disp,pc),Rn */
	IF(0x0C098244u); { u32 t_ = r9; PR = 0x0C098248u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C098248u); }  /* 0C098244 jsr @Rn */
L_0C098248: BLKS(0x0C098248u);
	r9 = 0x86u; UPD(0x0C09824Au, 1);  /* 0C098248 mov.w @(disp,pc),Rn */
	IF(0x0C09824Au); { u32 t_ = r13; PR = 0x0C09824Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058180, 0x0C058180u, 0x0C09824Eu); }  /* 0C09824A jsr @Rn */
L_0C09824E: BLKS(0x0C09824Eu);
	r0 = r12;  /* 0C09824E mov Rm,Rn */
	IF(0x0C098250u); r7 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C098252u, 2);  /* 0C098250 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C098252 add #imm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C098256u, 2);  /* 0C098254 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFE8u;  /* 0C098256 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C09825Au, 2);  /* 0C098258 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C09825A add Rm,Rn */
	W32(r15, r0); UPD(0x0C09825Eu, 2);  /* 0C09825C mov.l Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C098260u, 1);  /* 0C09825E mov.b @Rm,Rn */
	r2 = 0xC1CC9E8u; UPD(0x0C098262u, 1);  /* 0C098260 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C098262 extu.b Rm,Rn */
	IF(0x0C098264u); r0 <<= 2;  /* 0C098264 shll2 Rn */
	IF(0x0C098266u); r4 = R32(r0 + r2); UPD(0x0C098268u, 3);  /* 0C098266 mov.l @(r0,Rm),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09826Au, 1);  /* 0C098268 mov.l Rm,@(disp,Rn) */
	r6 = R32(r12 + 0x28u); UPD(0x0C09826Cu, 1);  /* 0C09826A mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09826C mov #imm,Rn */
	r12 = 0xC7C1770u; UPD(0x0C098270u, 2);  /* 0C09826E mov.l @(disp,pc),Rn */
	r11 = 0xFFF00000u; UPD(0x0C098272u, 1);  /* 0C098270 mov.l @(disp,pc),Rn */
	IF(0x0C098272u); { u32 t_ = r12; PR = 0x0C098276u; r5 += r11; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1770, 0x0C7C1770u, 0x0C098276u); }  /* 0C098272 jsr @Rn */
L_0C098276: BLKS(0x0C098276u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C098278u, 1);  /* 0C098276 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C098278 add #imm,Rn */
	r10 += 0x1u;  /* 0C09827A add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C09827C extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C09827E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C098288u, 7); goto L_0C098288; } UPD(0x0C098284u, 1); goto L_0C098284; }  /* 0C098280 bf/s */
L_0C098284: BLKS(0x0C098284u);
	r6 = 0x0u;  /* 0C098284 mov #imm,Rn */
	W8(r8, r6); UPD(0x0C098288u, 2);  /* 0C098286 mov.b Rm,@Rn */
L_0C098288: BLKS(0x0C098288u);
	{ r14 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C09739Eu, 3); goto L_0C09739E; }  /* 0C098288 bra */
L_0C098290: BLKS(0x0C098290u);
	r8 = 0xC0A05D0u; UPD(0x0C098292u, 1);  /* 0C098290 mov.l @(disp,pc),Rn */
	IF(0x0C098292u); { u32 t_ = r8; PR = 0x0C098296u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C098296u); }  /* 0C098292 jsr @Rn */
L_0C098296: BLKS(0x0C098296u);
	IF(0x0C098296u); T = (s32)r0 >= 0;  /* 0C098296 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0xEu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0982A0u, 4); goto L_0C0982A0; } goto L_0C09829C; }  /* 0C098298 bt/s */
L_0C09829C: BLKS(0x0C09829Cu);
	{ IF(0x0C09829Eu); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C09829C bra */
L_0C0982A0: BLKS(0x0C0982A0u);
	r2 = 0xB4u; UPD(0x0C0982A2u, 1);  /* 0C0982A0 mov.w @(disp,pc),Rn */
	IF(0x0C0982A2u); MACL = r10 * r2;  /* 0C0982A2 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0982A6u, 3);  /* 0C0982A4 mov.l @(disp,pc),Rn */
	IF(0x0C0982A6u); r5 = MACL;  /* 0C0982A6 sts macl,Rn */
	IF(0x0C0982A8u); MACL = r0 * r2;  /* 0C0982A8 mul.l Rm,Rn */
	r5 += r13;  /* 0C0982AA add Rm,Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C0982AEu, 5);  /* 0C0982AC mov.l @(disp,Rm),Rn */
	IF(0x0C0982AEu); r4 = MACL;  /* 0C0982AE sts macl,Rn */
	r4 += r13;  /* 0C0982B0 add Rm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C0982B4u, 3);  /* 0C0982B2 mov.l @(disp,Rm),Rn */
	r12 = R32(r4 + 0x28u); UPD(0x0C0982B6u, 1);  /* 0C0982B4 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0982B6 add Rm,Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C0982BAu, 2);  /* 0C0982B8 mov.l @(disp,Rm),Rn */
	r12 += r7;  /* 0C0982BA add Rm,Rn */
	W32(r5 + 0x24u, r0); UPD(0x0C0982BEu, 2);  /* 0C0982BC mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r12); UPD(0x0C0982C0u, 1);  /* 0C0982BE mov.l Rm,@(disp,Rn) */
	r5 += 0x7Eu;  /* 0C0982C0 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C0982C4u, 2);  /* 0C0982C2 mov.w @Rm,Rn */
	r5 += 0xFFFFFF82u;  /* 0C0982C4 add #imm,Rn */
	r2 = R32(r5 + 0xCu); UPD(0x0C0982C8u, 2);  /* 0C0982C6 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C0982C8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C098350u, 4); goto L_0C098350; }  /* 0C0982CA bt */
L_0C0982CC: BLKS(0x0C0982CCu);
	r0 = 0xC098310u;  /* 0C0982CC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0982CE add Rm,Rn */
	IF(0x0C0982D0u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0982D2u, 3);  /* 0C0982D0 mov.w @(r0,Rm),Rn */
	IF(0x0C0982D2u); { u32 tv_ = (r9 + 0x0C0982D6u); u32 t_ = PHYS(tv_); IF(0x0C0982D4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C098330u: goto L_0C098330; case 0x0C098350u: goto L_0C098350; case 0x0C0983A0u: goto L_0C0983A0; case 0x0C0983C6u: goto L_0C0983C6; default: JUMPD(tv_); } }  /* 0C0982D2 braf Rn */
L_0C098330: BLKS(0x0C098330u);
	r3 = 0xB4u; UPD(0x0C098332u, 1);  /* 0C098330 mov.w @(disp,pc),Rn */
	IF(0x0C098332u); MACL = r11 * r3;  /* 0C098332 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C098336u, 3);  /* 0C098334 mov.l @(disp,pc),Rn */
	IF(0x0C098336u); r2 = MACL;  /* 0C098336 sts macl,Rn */
	r1 = 0xA0u; UPD(0x0C09833Au, 2);  /* 0C098338 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C09833A add Rm,Rn */
	r2 += r1;  /* 0C09833C add Rm,Rn */
	{ r2 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C0981B0u, 5); goto L_0C0981B0; }  /* 0C09833E bra */
L_0C098350: BLKS(0x0C098350u);
	r7 = 0xB4u; UPD(0x0C098352u, 1);  /* 0C098350 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C098352 mov #imm,Rn */
	IF(0x0C098354u); MACL = r10 * r7;  /* 0C098354 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C098358u, 4);  /* 0C098356 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09835Au, 1);  /* 0C098358 mov.w @(disp,pc),Rn */
	IF(0x0C09835Au); r8 = MACL;  /* 0C09835A sts macl,Rn */
	r8 += r12;  /* 0C09835C add Rm,Rn */
	IF(0x0C09835Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C098360u, 3);  /* 0C09835E mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C098360 add #imm,Rn */
	IF(0x0C098362u); W8(r0 + r8, r3); UPD(0x0C098364u, 2);  /* 0C098362 mov.b Rm,@(r0,Rn) */
	r1 = r3 & 0xFF;  /* 0C098364 extu.b Rm,Rn */
	UPD(0x0C098366u, 1);
L_0C098366: BLKS(0x0C098366u);
	T = r1 > r2;  /* 0C098366 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C098288u, 4); goto L_0C098288; }  /* 0C098368 bf */
L_0C09836A: BLKS(0x0C09836Au);
	r13 = 0x0u;  /* 0C09836A mov #imm,Rn */
	IF(0x0C09836Cu); W8(r0 + r8, r13); UPD(0x0C09836Eu, 2);  /* 0C09836C mov.b Rm,@(r0,Rn) */
L_0C09836E: BLKS(0x0C09836Eu);
	r0 = 0x88u; UPD(0x0C098370u, 1);  /* 0C09836E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C098370 mov Rm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C098374u, 2);  /* 0C098372 mov.l @(disp,Rm),Rn */
	IF(0x0C098374u); r13 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C098376u, 1);  /* 0C098374 mov.w @(r0,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C098378u, 1);  /* 0C098376 mov.l @(disp,pc),Rn */
	r12 += r13;  /* 0C098378 add Rm,Rn */
	IF(0x0C09837Au); { u32 t_ = r2; PR = 0x0C09837Eu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09837Eu); }  /* 0C09837A jsr @Rn */
L_0C09837E: BLKS(0x0C09837Eu);
	r10 = R32(r8 + 0xCu); UPD(0x0C098380u, 1);  /* 0C09837E mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C098380 tst Rm,Rn */
	if (!T) { UPD(0x0C09838Cu, 4); goto L_0C09838C; }  /* 0C098382 bf */
L_0C098384: BLKS(0x0C098384u);
	r6 = R32(r8); UPD(0x0C098386u, 1);  /* 0C098384 mov.l @Rm,Rn */
L_0C098386: BLKS(0x0C098386u);
	r0 = 0x4000u; UPD(0x0C098388u, 1);  /* 0C098386 mov.w @(disp,pc),Rn */
	r6 |= r0;  /* 0C098388 or Rm,Rn */
	W32(r8, r6); UPD(0x0C09838Cu, 2);  /* 0C09838A mov.l Rm,@Rn */
L_0C09838C: BLKS(0x0C09838Cu);
	r13 = 0xFFFFF00Cu; UPD(0x0C09838Eu, 1);  /* 0C09838C mov.w @(disp,pc),Rn */
	IF(0x0C09838Eu); { u32 tv_ = (r13 + 0x0C098392u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C09838E braf Rn */
L_0C0983A0: BLKS(0x0C0983A0u);
	r9 = 0xB4u; UPD(0x0C0983A2u, 1);  /* 0C0983A0 mov.w @(disp,pc),Rn */
	IF(0x0C0983A2u); MACL = r11 * r9;  /* 0C0983A2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0983A6u, 3);  /* 0C0983A4 mov.l @(disp,pc),Rn */
	IF(0x0C0983A6u); r1 = MACL;  /* 0C0983A6 sts macl,Rn */
	IF(0x0C0983A8u); MACL = r10 * r9;  /* 0C0983A8 mul.l Rm,Rn */
	r13 = 0xA0u; UPD(0x0C0983ACu, 4);  /* 0C0983AA mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0983AC add Rm,Rn */
	IF(0x0C0983AEu); r3 = MACL;  /* 0C0983AE sts macl,Rn */
	r1 += r13;  /* 0C0983B0 add Rm,Rn */
	r3 += r2;  /* 0C0983B2 add Rm,Rn */
	r13 += r3;  /* 0C0983B4 add Rm,Rn */
	r1 += 0x2u;  /* 0C0983B6 add #imm,Rn */
	r13 += 0x1u;  /* 0C0983B8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0983BCu, 8);  /* 0C0983BA mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C0983BEu, 1);  /* 0C0983BC mov.b @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C0983BE tst Rm,Rn */
	if (!T) { UPD(0x0C0983C6u, 4); goto L_0C0983C6; }  /* 0C0983C0 bf */
L_0C0983C2: BLKS(0x0C0983C2u);
	{ IF(0x0C0983C4u); ; /* slot nop */ UPD(0x0C0975C0u, 3); goto L_0C0975C0; }  /* 0C0983C2 bra */
L_0C0983C6: BLKS(0x0C0983C6u);
	r8 = 0xB4u; UPD(0x0C0983C8u, 1);  /* 0C0983C6 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0983C8 mov Rm,Rn */
	IF(0x0C0983CAu); MACL = r10 * r8;  /* 0C0983CA mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0983CEu, 4);  /* 0C0983CC mov.l @(disp,pc),Rn */
	IF(0x0C0983CEu); r8 = MACL;  /* 0C0983CE sts macl,Rn */
	r8 += r12;  /* 0C0983D0 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0983D4u, 3);  /* 0C0983D2 mov.l @(disp,Rm),Rn */
	r3 = 0xC1CC9A0u; UPD(0x0C0983D6u, 1);  /* 0C0983D4 mov.l @(disp,pc),Rn */
	IF(0x0C0983D6u); r0 <<= 2;  /* 0C0983D6 shll2 Rn */
	IF(0x0C0983D8u); r5 = R32(r0 + r3); UPD(0x0C0983DAu, 2);  /* 0C0983D8 mov.l @(r0,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C0983DCu, 1);  /* 0C0983DA mov.l @(disp,pc),Rn */
	r11 = 0xC0A9E40u; UPD(0x0C0983DEu, 1);  /* 0C0983DC mov.l @(disp,pc),Rn */
	IF(0x0C0983DEu); { u32 t_ = r6; PR = 0x0C0983E2u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0983E2u); }  /* 0C0983DE jsr @Rn */
L_0C0983E2: BLKS(0x0C0983E2u);
	r4 = r10;  /* 0C0983E2 mov Rm,Rn */
	r5 = 0x10u;  /* 0C0983E4 mov #imm,Rn */
	IF(0x0C0983E6u); { u32 t_ = r11; PR = 0x0C0983EAu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0983EAu); }  /* 0C0983E6 jsr @Rn */
L_0C0983EA: BLKS(0x0C0983EAu);
	T = (r0 & r0) == 0;  /* 0C0983EA tst Rm,Rn */
	if (T) { UPD(0x0C09838Cu, 4); goto L_0C09838C; }  /* 0C0983EC bt */
L_0C0983EE: BLKS(0x0C0983EEu);
	r2 = R32(r8 + 0x24u); UPD(0x0C0983F0u, 1);  /* 0C0983EE mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0983F0 mov Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0983F4u, 2);  /* 0C0983F2 mov.l Rm,@(disp,Rn) */
	r0 = 0xFFF40000u; UPD(0x0C0983F6u, 1);  /* 0C0983F4 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0983F8u, 1);  /* 0C0983F6 mov.l @(disp,Rm),Rn */
	r11 = 0xC0580D0u; UPD(0x0C0983FAu, 1);  /* 0C0983F8 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C0983FA add Rm,Rn */
	r9 = 0xC058180u; UPD(0x0C0983FEu, 2);  /* 0C0983FC mov.l @(disp,pc),Rn */
	IF(0x0C0983FEu); { u32 t_ = r11; PR = 0x0C098402u; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C098402u); }  /* 0C0983FE jsr @Rn */
L_0C098402: BLKS(0x0C098402u);
	r13 = 0x86u; UPD(0x0C098404u, 1);  /* 0C098402 mov.w @(disp,pc),Rn */
	IF(0x0C098404u); { u32 t_ = r9; PR = 0x0C098408u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058180, 0x0C058180u, 0x0C098408u); }  /* 0C098404 jsr @Rn */
L_0C098408: BLKS(0x0C098408u);
	r0 = r8;  /* 0C098408 mov Rm,Rn */
	IF(0x0C09840Au); r7 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C09840Cu, 2);  /* 0C09840A mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09840C add #imm,Rn */
	r4 = 0x38000u; UPD(0x0C098410u, 2);  /* 0C09840E mov.l @(disp,pc),Rn */
	r10 = 0xC17791Au; UPD(0x0C098412u, 1);  /* 0C098410 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C098414u, 1);  /* 0C098412 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C098416u, 1);  /* 0C098414 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C098416 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C09841Au, 2);  /* 0C098418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C09841Cu, 1);  /* 0C09841A mov.l @(disp,Rm),Rn */
	r0 = 0xC7C15A8u; UPD(0x0C09841Eu, 1);  /* 0C09841C mov.l @(disp,pc),Rn */
L_0C09841E: BLKS(0x0C09841Eu);
	IF(0x0C09841Eu); { u32 t_ = r0; PR = 0x0C098422u; IF(0x0C098420u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C098422u); }  /* 0C09841E jsr @Rn */
L_0C098422: BLKS(0x0C098422u);
	{ IF(0x0C098424u); ; /* slot nop */ UPD(0x0C09798Eu, 3); goto L_0C09798E; }  /* 0C098422 bra */
L_0C098430: BLKS(0x0C098430u);
	r12 = 0xC0A03F0u; UPD(0x0C098432u, 1);  /* 0C098430 mov.l @(disp,pc),Rn */
	IF(0x0C098432u); { u32 t_ = r12; PR = 0x0C098436u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C098436u); }  /* 0C098432 jsr @Rn */
L_0C098436: BLKS(0x0C098436u);
	IF(0x0C098436u); T = (s32)r0 >= 0;  /* 0C098436 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C098440u, 4); goto L_0C098440; } goto L_0C09843C; }  /* 0C098438 bt/s */
L_0C09843C: BLKS(0x0C09843Cu);
	{ IF(0x0C09843Eu); ; /* slot nop */ UPD(0x0C0975D0u, 4); goto L_0C0975D0; }  /* 0C09843C bra */
L_0C098440: BLKS(0x0C098440u);
	r2 = 0xB4u; UPD(0x0C098442u, 1);  /* 0C098440 mov.w @(disp,pc),Rn */
	IF(0x0C098442u); MACL = r10 * r2;  /* 0C098442 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C098446u, 3);  /* 0C098444 mov.l @(disp,pc),Rn */
	IF(0x0C098446u); r5 = MACL;  /* 0C098446 sts macl,Rn */
	r5 += r0;  /* 0C098448 add Rm,Rn */
	r3 = R32(r5); UPD(0x0C09844Cu, 3);  /* 0C09844A mov.l @Rm,Rn */
	IF(0x0C09844Cu); MACL = r11 * r2;  /* 0C09844C mul.l Rm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C098450u, 3);  /* 0C09844E mov.l @(disp,pc),Rn */
	r3 &= r6;  /* 0C098450 and Rm,Rn */
	W32(r5, r3); UPD(0x0C098454u, 2);  /* 0C098452 mov.l Rm,@Rn */
	IF(0x0C098454u); r4 = MACL;  /* 0C098454 sts macl,Rn */
	r4 += r0;  /* 0C098456 add Rm,Rn */
	r8 = R32(r4); UPD(0x0C09845Au, 3);  /* 0C098458 mov.l @Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C09845Cu, 1);  /* 0C09845A mov.l @(disp,Rm),Rn */
	r1 = 0x13000000u; UPD(0x0C09845Eu, 1);  /* 0C09845C mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09845E add #imm,Rn */
	r11 = R32(r4 + 0x24u); UPD(0x0C098462u, 2);  /* 0C098460 mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C098462 and Rm,Rn */
	r13 = R32(r4 + 0x28u); UPD(0x0C098466u, 2);  /* 0C098464 mov.l @(disp,Rm),Rn */
	r3 |= r8;  /* 0C098466 or Rm,Rn */
	r7 = R32(r5 + 0x2Cu); UPD(0x0C09846Au, 2);  /* 0C098468 mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C09846A and #imm,r0 */
	r9 = R32(r5 + 0x30u); UPD(0x0C09846Eu, 2);  /* 0C09846C mov.l @(disp,Rm),Rn */
	r11 += r7;  /* 0C09846E add Rm,Rn */
	r13 += r9;  /* 0C098470 add Rm,Rn */
	W32(r5 + 0x24u, r11); UPD(0x0C098474u, 3);  /* 0C098472 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r13); UPD(0x0C098476u, 1);  /* 0C098474 mov.l Rm,@(disp,Rn) */
	W32(r5, r3); UPD(0x0C098478u, 1);  /* 0C098476 mov.l Rm,@Rn */
	r1 = 0xFFFFF030u; UPD(0x0C09847Au, 1);  /* 0C098478 mov.w @(disp,pc),Rn */
	IF(0x0C09847Au); { u32 tv_ = (r1 + 0x0C09847Eu); u32 t_ = PHYS(tv_); W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974AEu: goto L_0C0974AE; default: JUMPD(tv_); } }  /* 0C09847A braf Rn */
L_0C098480: BLKS(0x0C098480u);
	r0 = 0xC0A03F0u; UPD(0x0C098482u, 1);  /* 0C098480 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C097854u, 3); goto L_0C097854; }  /* 0C098482 bra */
L_0C0984D0: BLKS(0x0C0984D0u);
	r8 = 0xC0A03F0u; UPD(0x0C0984D2u, 1);  /* 0C0984D0 mov.l @(disp,pc),Rn */
	IF(0x0C0984D2u); { u32 t_ = r8; PR = 0x0C0984D6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0984D6u); }  /* 0C0984D2 jsr @Rn */
L_0C0984D6: BLKS(0x0C0984D6u);
	IF(0x0C0984D6u); T = (s32)r0 >= 0;  /* 0C0984D6 cmp/pz Rn */
	if (T) { UPD(0x0C0984DEu, 4); goto L_0C0984DE; }  /* 0C0984D8 bt */
L_0C0984DA: BLKS(0x0C0984DAu);
	{ IF(0x0C0984DCu); ; /* slot nop */ UPD(0x0C098620u, 3); goto L_0C098620; }  /* 0C0984DA bra */
L_0C0984DE: BLKS(0x0C0984DEu);
	r6 = 0xB4u; UPD(0x0C0984E0u, 1);  /* 0C0984DE mov.w @(disp,pc),Rn */
	IF(0x0C0984E0u); MACL = r10 * r6;  /* 0C0984E0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0984E4u, 3);  /* 0C0984E2 mov.l @(disp,pc),Rn */
	IF(0x0C0984E4u); r9 = MACL;  /* 0C0984E4 sts macl,Rn */
	r9 += r5;  /* 0C0984E6 add Rm,Rn */
	r12 = R32(r9); UPD(0x0C0984EAu, 3);  /* 0C0984E8 mov.l @Rm,Rn */
	IF(0x0C0984EAu); MACL = r0 * r6;  /* 0C0984EA mul.l Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C0984EEu, 3);  /* 0C0984EC mov.l @(disp,pc),Rn */
	r12 &= r4;  /* 0C0984EE and Rm,Rn */
	W32(r9, r12); UPD(0x0C0984F2u, 2);  /* 0C0984F0 mov.l Rm,@Rn */
	IF(0x0C0984F2u); r3 = MACL;  /* 0C0984F2 sts macl,Rn */
	r3 += r5;  /* 0C0984F4 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0984F8u, 3);  /* 0C0984F6 mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C0984FAu, 1);  /* 0C0984F8 mov.l @(disp,pc),Rn */
	r11 = R32(r3 + 0x24u); UPD(0x0C0984FCu, 1);  /* 0C0984FA mov.l @(disp,Rm),Rn */
	r0 &= r7;  /* 0C0984FC and Rm,Rn */
	r8 = R32(r9 + 0x2Cu); UPD(0x0C098500u, 2);  /* 0C0984FE mov.l @(disp,Rm),Rn */
	r12 |= r0;  /* 0C098500 or Rm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C098504u, 2);  /* 0C098502 mov.l @(disp,Rm),Rn */
	r11 += r8;  /* 0C098504 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C098508u, 2);  /* 0C098506 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C098508 add Rm,Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C09850Cu, 2);  /* 0C09850A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r13); UPD(0x0C09850Eu, 1);  /* 0C09850C mov.l Rm,@(disp,Rn) */
	W32(r9, r12); UPD(0x0C098510u, 1);  /* 0C09850E mov.l Rm,@Rn */
	r9 += 0x7Eu;  /* 0C098510 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C098514u, 2);  /* 0C098512 mov.w @Rm,Rn */
	r9 += 0xFFFFFF82u;  /* 0C098514 add #imm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C098518u, 2);  /* 0C098516 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C098518 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0985A0u, 4); goto L_0C0985A0; } goto L_0C09851E; }  /* 0C09851A bt/s */
L_0C09851E: BLKS(0x0C09851Eu);
	T = (s32)r0 > (s32)r2;  /* 0C09851E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C098590u, 5); goto L_0C098590; } goto L_0C098524; }  /* 0C098520 bt/s */
L_0C098524: BLKS(0x0C098524u);
	T = (r0 & r0) == 0;  /* 0C098524 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C098528u); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C098560u, 6); goto L_0C098560; } UPD(0x0C09852Au, 2); goto L_0C09852A; }  /* 0C098526 bt/s */
L_0C09852A: BLKS(0x0C09852Au);
	r3 = 0xB4u; UPD(0x0C09852Cu, 1);  /* 0C09852A mov.w @(disp,pc),Rn */
	r9 = 0x2u;  /* 0C09852C mov #imm,Rn */
	IF(0x0C09852Eu); MACL = r10 * r3;  /* 0C09852E mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C098532u, 4);  /* 0C098530 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C098534u, 1);  /* 0C098532 mov.w @(disp,pc),Rn */
	IF(0x0C098534u); r3 = MACL;  /* 0C098534 sts macl,Rn */
	r3 += r8;  /* 0C098536 add Rm,Rn */
	IF(0x0C098538u); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09853Au, 3);  /* 0C098538 mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C09853A add #imm,Rn */
	r4 = r11 & 0xFF;  /* 0C09853C extu.b Rm,Rn */
	T = r4 > r9;  /* 0C09853E cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C098542u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0985C6u, 6); goto L_0C0985C6; } UPD(0x0C098544u, 1); goto L_0C098544; }  /* 0C098540 bf/s */
L_0C098544: BLKS(0x0C098544u);
	r2 = 0x0u;  /* 0C098544 mov #imm,Rn */
	IF(0x0C098546u); W8(r0 + r3, r2); UPD(0x0C098548u, 2);  /* 0C098546 mov.b Rm,@(r0,Rn) */
L_0C098548: BLKS(0x0C098548u);
	r0 = 0x88u; UPD(0x0C09854Au, 1);  /* 0C098548 mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C09854Cu, 1);  /* 0C09854A mov.l @(disp,Rm),Rn */
	IF(0x0C09854Cu); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09854Eu, 1);  /* 0C09854C mov.w @(r0,Rm),Rn */
	{ r1 += r13; /* slot add Rm,Rn */ UPD(0x0C0975CAu, 3); goto L_0C0975CA; }  /* 0C09854E bra */
L_0C098560: BLKS(0x0C098560u);
	r12 = 0xA0u; UPD(0x0C098562u, 1);  /* 0C098560 mov.w @(disp,pc),Rn */
	IF(0x0C098562u); r0 = MACL;  /* 0C098562 sts macl,Rn */
	r0 += r5;  /* 0C098564 add Rm,Rn */
	r0 += r12;  /* 0C098566 add Rm,Rn */
	r12 += r9;  /* 0C098568 add Rm,Rn */
	r0 += 0x3u;  /* 0C09856A add #imm,Rn */
	r12 += 0x1u;  /* 0C09856C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C098570u, 7);  /* 0C09856E mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C098572u, 1);  /* 0C098570 mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C098572 tst Rm,Rn */
	if (T) { UPD(0x0C0985C6u, 4); goto L_0C0985C6; }  /* 0C098574 bt */
L_0C098576: BLKS(0x0C098576u);
	r13 = 0xC0AFC10u; UPD(0x0C098578u, 1);  /* 0C098576 mov.l @(disp,pc),Rn */
	IF(0x0C098578u); { u32 t_ = r13; PR = 0x0C09857Cu; r4 = 0x75u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09857Cu); }  /* 0C098578 jsr @Rn */
L_0C09857C: BLKS(0x0C09857Cu);
	r0 = 0x88u; UPD(0x0C09857Eu, 1);  /* 0C09857C mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C09857E mov #imm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C098582u, 2);  /* 0C098580 mov.l @(disp,Rm),Rn */
	IF(0x0C098582u); W16(r0 + r9, r7); UPD(0x0C098584u, 1);  /* 0C098582 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C098584 add #imm,Rn */
	UPD(0x0C098586u, 1);
L_0C098586: BLKS(0x0C098586u);
	r4 = 0xFFFFEF22u; UPD(0x0C098588u, 1);  /* 0C098586 mov.w @(disp,pc),Rn */
	IF(0x0C098588u); { u32 tv_ = (r4 + 0x0C09858Cu); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974AEu: goto L_0C0974AE; default: JUMPD(tv_); } }  /* 0C098588 braf Rn */
L_0C098590: BLKS(0x0C098590u);
	if (T) { UPD(0x0C0985C6u, 3); goto L_0C0985C6; }  /* 0C098590 bt */
L_0C098592: BLKS(0x0C098592u);
	{ IF(0x0C098594u); ; /* slot nop */ UPD(0x0C09852Au, 3); goto L_0C09852A; }  /* 0C098592 bra */
L_0C0985A0: BLKS(0x0C0985A0u);
	IF(0x0C0985A0u); MACL = r11 * r6;  /* 0C0985A0 mul.l Rm,Rn */
	r12 = 0xA0u; UPD(0x0C0985A4u, 3);  /* 0C0985A2 mov.w @(disp,pc),Rn */
	IF(0x0C0985A4u); r1 = MACL;  /* 0C0985A4 sts macl,Rn */
	r1 += r5;  /* 0C0985A6 add Rm,Rn */
	r1 += r12;  /* 0C0985A8 add Rm,Rn */
	r12 += r9;  /* 0C0985AA add Rm,Rn */
	r1 += 0x3u;  /* 0C0985AC add #imm,Rn */
	r12 += 0x1u;  /* 0C0985AE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C0985B2u, 7);  /* 0C0985B0 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C0985B4u, 1);  /* 0C0985B2 mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C0985B4 tst Rm,Rn */
	if (T) { UPD(0x0C098610u, 4); goto L_0C098610; }  /* 0C0985B6 bt */
L_0C0985B8: BLKS(0x0C0985B8u);
	r4 = r10;  /* 0C0985B8 mov Rm,Rn */
	r10 = 0xC0A9E40u; UPD(0x0C0985BCu, 2);  /* 0C0985BA mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0985BC mov #imm,Rn */
	IF(0x0C0985BEu); { u32 t_ = r10; PR = 0x0C0985C2u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0985C2u); }  /* 0C0985BE jsr @Rn */
L_0C0985C2: BLKS(0x0C0985C2u);
	T = (r0 & r0) == 0;  /* 0C0985C2 tst Rm,Rn */
	if (!T) { UPD(0x0C0985CEu, 4); goto L_0C0985CE; }  /* 0C0985C4 bf */
L_0C0985C6: BLKS(0x0C0985C6u);
	r13 = 0xFFFFEDD2u; UPD(0x0C0985C8u, 1);  /* 0C0985C6 mov.w @(disp,pc),Rn */
	IF(0x0C0985C8u); { u32 tv_ = (r13 + 0x0C0985CCu); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C0985C8 braf Rn */
L_0C0985CE: BLKS(0x0C0985CEu);
	r10 = 0xC050D70u; UPD(0x0C0985D0u, 1);  /* 0C0985CE mov.l @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C0985D2u, 1);  /* 0C0985D0 mov.l @(disp,pc),Rn */
	IF(0x0C0985D2u); { u32 t_ = r10; PR = 0x0C0985D6u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0985D6u); }  /* 0C0985D2 jsr @Rn */
L_0C0985D6: BLKS(0x0C0985D6u);
	r2 = 0xFFFFFFFEu;  /* 0C0985D6 mov #imm,Rn */
	r3 = 0xC9u; UPD(0x0C0985DAu, 2);  /* 0C0985D8 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C0985DA and Rm,Rn */
	r0 += r3;  /* 0C0985DC add Rm,Rn */
	r12 = 0x100000u; UPD(0x0C0985E0u, 3);  /* 0C0985DE mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0985E0 exts.w Rm,Rn */
	r4 = r11;  /* 0C0985E2 mov Rm,Rn */
	IF(0x0C0985E4u); { u32 t_ = r8; PR = 0x0C0985E8u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0985E8u); }  /* 0C0985E4 jsr @Rn */
L_0C0985E8: BLKS(0x0C0985E8u);
	r4 = R32(r9 + 0x24u); UPD(0x0C0985EAu, 1);  /* 0C0985E8 mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C0985EA mov Rm,Rn */
	r4 += r0;  /* 0C0985EC add Rm,Rn */
	r4 += r12;  /* 0C0985EE add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0985F2u, 4);  /* 0C0985F0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0985F4u, 1);  /* 0C0985F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0985F4u); { u32 t_ = r13; PR = 0x0C0985F8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0985F8u); }  /* 0C0985F4 jsr @Rn */
L_0C0985F8: BLKS(0x0C0985F8u);
	r6 = R32(r9 + 0x28u); UPD(0x0C0985FAu, 1);  /* 0C0985F8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0985FA add #imm,Rn */
	r6 += r0;  /* 0C0985FC add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C098600u, 3);  /* 0C0985FE mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C098600 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C098604u, 2);  /* 0C098602 mov.l Rm,@Rn */
	r7 = r11;  /* 0C098604 mov Rm,Rn */
	r0 = 0xC7C1554u; UPD(0x0C098608u, 2);  /* 0C098606 mov.l @(disp,pc),Rn */
	{ r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09800Au, 3); goto L_0C09800A; }  /* 0C098608 bra */
L_0C098610: BLKS(0x0C098610u);
	r0 = 0x88u; UPD(0x0C098612u, 1);  /* 0C098610 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C098612 mov #imm,Rn */
	IF(0x0C098614u); W16(r0 + r9, r7); UPD(0x0C098616u, 2);  /* 0C098614 mov.w Rm,@(r0,Rn) */
	{ r1 = 0x6u; /* slot mov #imm,Rn */ UPD(0x0C098586u, 3); goto L_0C098586; }  /* 0C098616 bra */
L_0C098620: BLKS(0x0C098620u);
	r7 = 0xB4u; UPD(0x0C098622u, 1);  /* 0C098620 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C098622 mov #imm,Rn */
	IF(0x0C098624u); MACL = r10 * r7;  /* 0C098624 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C098628u, 4);  /* 0C098626 mov.l @(disp,pc),Rn */
	IF(0x0C098628u); r0 = MACL;  /* 0C098628 sts macl,Rn */
	IF(0x0C09862Au); W32(r0 + r6, r5); UPD(0x0C09862Cu, 2);  /* 0C09862A mov.l Rm,@(r0,Rn) */
L_0C09862C: BLKS(0x0C09862Cu);
	r13 = 0xFFFFED6Cu; UPD(0x0C09862Eu, 1);  /* 0C09862C mov.w @(disp,pc),Rn */
	IF(0x0C09862Eu); { u32 tv_ = (r13 + 0x0C098632u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C09862E braf Rn */
L_0C098670: BLKS(0x0C098670u);
	r11 = 0xC0A03F0u; UPD(0x0C098672u, 1);  /* 0C098670 mov.l @(disp,pc),Rn */
	IF(0x0C098672u); { u32 t_ = r11; PR = 0x0C098676u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C098676u); }  /* 0C098672 jsr @Rn */
L_0C098676: BLKS(0x0C098676u);
	IF(0x0C098676u); T = (s32)r0 >= 0;  /* 0C098676 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C098684u, 4); goto L_0C098684; } goto L_0C09867C; }  /* 0C098678 bt/s */
L_0C09867C: BLKS(0x0C09867Cu);
	r1 = 0xFFFFEF4Eu; UPD(0x0C09867Eu, 2);  /* 0C09867C mov.w @(disp,pc),Rn */
	IF(0x0C09867Eu); { u32 tv_ = (r1 + 0x0C098682u); u32 t_ = PHYS(tv_); IF(0x0C098680u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C09867E braf Rn */
L_0C098684: BLKS(0x0C098684u);
	r4 = 0xB4u; UPD(0x0C098686u, 1);  /* 0C098684 mov.w @(disp,pc),Rn */
	IF(0x0C098686u); MACL = r10 * r4;  /* 0C098686 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09868Au, 3);  /* 0C098688 mov.l @(disp,pc),Rn */
	IF(0x0C09868Au); r0 = MACL;  /* 0C09868A sts macl,Rn */
	r0 += r12;  /* 0C09868C add Rm,Rn */
	r5 = R32(r0); UPD(0x0C098690u, 3);  /* 0C09868E mov.l @Rm,Rn */
	IF(0x0C098690u); MACL = r11 * r4;  /* 0C098690 mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C098694u, 3);  /* 0C098692 mov.l @(disp,pc),Rn */
	r5 &= r2;  /* 0C098694 and Rm,Rn */
	W32(r0, r5); UPD(0x0C098698u, 2);  /* 0C098696 mov.l Rm,@Rn */
	IF(0x0C098698u); r13 = MACL;  /* 0C098698 sts macl,Rn */
	r13 += r12;  /* 0C09869A add Rm,Rn */
	r3 = R32(r13); UPD(0x0C09869Eu, 3);  /* 0C09869C mov.l @Rm,Rn */
	r12 = 0x3u;  /* 0C09869E mov #imm,Rn */
	r1 = 0x13000000u; UPD(0x0C0986A2u, 2);  /* 0C0986A0 mov.l @(disp,pc),Rn */
	r11 = R32(r0 + 0x2Cu); UPD(0x0C0986A4u, 1);  /* 0C0986A2 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C0986A4 and Rm,Rn */
	r8 = R32(r13 + 0x24u); UPD(0x0C0986A8u, 2);  /* 0C0986A6 mov.l @(disp,Rm),Rn */
	r5 |= r3;  /* 0C0986A8 or Rm,Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C0986ACu, 2);  /* 0C0986AA mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C0986AC add Rm,Rn */
	r9 = R32(r0 + 0x30u); UPD(0x0C0986B0u, 2);  /* 0C0986AE mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C0986B0 add Rm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C0986B4u, 2);  /* 0C0986B2 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r6); UPD(0x0C0986B6u, 1);  /* 0C0986B4 mov.l Rm,@(disp,Rn) */
	W32(r0, r5); UPD(0x0C0986B8u, 1);  /* 0C0986B6 mov.l Rm,@Rn */
	r0 += 0x7Eu;  /* 0C0986B8 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0986BCu, 2);  /* 0C0986BA mov.w @Rm,Rn */
	r7 = 0x9Fu; UPD(0x0C0986BEu, 1);  /* 0C0986BC mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0986BE add #imm,Rn */
	IF(0x0C0986C0u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0986C2u, 2);  /* 0C0986C0 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0986C2 extu.b Rm,Rn */
	T = r2 > r12;  /* 0C0986C4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09862Cu, 5); goto L_0C09862C; }  /* 0C0986C6 bt */
L_0C0986C8: BLKS(0x0C0986C8u);
	r0 = 0xC0986E8u;  /* 0C0986C8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0986CA add Rm,Rn */
	IF(0x0C0986CCu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0986CEu, 3);  /* 0C0986CC mov.w @(r0,Rm),Rn */
	IF(0x0C0986CEu); { u32 tv_ = (r7 + 0x0C0986D2u); u32 t_ = PHYS(tv_); IF(0x0C0986D0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0986F0u: goto L_0C0986F0; case 0x0C098740u: goto L_0C098740; case 0x0C098780u: goto L_0C098780; case 0x0C098830u: goto L_0C098830; default: JUMPD(tv_); } }  /* 0C0986CE braf Rn */
L_0C0986F0: BLKS(0x0C0986F0u);
	r2 = 0xB4u; UPD(0x0C0986F2u, 1);  /* 0C0986F0 mov.w @(disp,pc),Rn */
	IF(0x0C0986F2u); MACL = r11 * r2;  /* 0C0986F2 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0986F6u, 3);  /* 0C0986F4 mov.l @(disp,pc),Rn */
	IF(0x0C0986F6u); r1 = MACL;  /* 0C0986F6 sts macl,Rn */
	IF(0x0C0986F8u); MACL = r10 * r2;  /* 0C0986F8 mul.l Rm,Rn */
	r5 = 0xA0u; UPD(0x0C0986FCu, 4);  /* 0C0986FA mov.w @(disp,pc),Rn */
	r1 += r13;  /* 0C0986FC add Rm,Rn */
	IF(0x0C0986FEu); r3 = MACL;  /* 0C0986FE sts macl,Rn */
	r1 += r5;  /* 0C098700 add Rm,Rn */
	r3 += r13;  /* 0C098702 add Rm,Rn */
	r5 += r3;  /* 0C098704 add Rm,Rn */
	r1 += 0x3u;  /* 0C098706 add #imm,Rn */
	r5 += 0x1u;  /* 0C098708 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C09870Cu, 8);  /* 0C09870A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C09870Eu, 1);  /* 0C09870C mov.b @Rm,Rn */
	T = (r10 & r0) == 0;  /* 0C09870E tst Rm,Rn */
	if (T) { UPD(0x0C098738u, 4); goto L_0C098738; }  /* 0C098710 bt */
L_0C098712: BLKS(0x0C098712u);
	r12 = R32(r3 + 0x30u); UPD(0x0C098714u, 1);  /* 0C098712 mov.l @(disp,Rm),Rn */
	r3 += 0x50u;  /* 0C098714 add #imm,Rn */
	IF(0x0C098716u); T = (s32)r12 > 0;  /* 0C098716 cmp/pl Rn */
	W32(r3, r12); UPD(0x0C09871Au, 3);  /* 0C098718 mov.l Rm,@Rn */
	IF(0x0C09871Au); r0 = T;  /* 0C09871A movt Rn */
	r11 = 0xC1CCA44u; UPD(0x0C09871Eu, 2);  /* 0C09871C mov.l @(disp,pc),Rn */
	IF(0x0C09871Eu); r0 <<= 2;  /* 0C09871E shll2 Rn */
	r3 += 0xFFFFFFB0u;  /* 0C098720 add #imm,Rn */
	IF(0x0C098722u); r8 = R32(r0 + r11); UPD(0x0C098724u, 3);  /* 0C098722 mov.l @(r0,Rm),Rn */
	r6 = R32(r3); UPD(0x0C098726u, 1);  /* 0C098724 mov.l @Rm,Rn */
	r9 = 0xFFFFBFFFu; UPD(0x0C098728u, 1);  /* 0C098726 mov.w @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C09872Au, 1);  /* 0C098728 mov.w @(disp,pc),Rn */
	r6 &= r9;  /* 0C09872A and Rm,Rn */
	IF(0x0C09872Cu); W32(r0 + r3, r8); UPD(0x0C09872Eu, 2);  /* 0C09872C mov.l Rm,@(r0,Rn) */
	W32(r3, r6); UPD(0x0C098730u, 1);  /* 0C09872E mov.l Rm,@Rn */
L_0C098730: BLKS(0x0C098730u);
	r0 += 0x13u;  /* 0C098730 add #imm,Rn */
	IF(0x0C098732u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C098734u, 2);  /* 0C098732 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C098734 add #imm,Rn */
	IF(0x0C098736u); W8(r0 + r3, r2); UPD(0x0C098738u, 2);  /* 0C098736 mov.b Rm,@(r0,Rn) */
L_0C098738: BLKS(0x0C098738u);
	r13 = 0xFFFFEC60u; UPD(0x0C09873Au, 1);  /* 0C098738 mov.w @(disp,pc),Rn */
	IF(0x0C09873Au); { u32 tv_ = (r13 + 0x0C09873Eu); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C09873A braf Rn */
L_0C098740: BLKS(0x0C098740u);
	r7 = 0xB4u; UPD(0x0C098742u, 1);  /* 0C098740 mov.w @(disp,pc),Rn */
	IF(0x0C098742u); MACL = r10 * r7;  /* 0C098742 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C098746u, 3);  /* 0C098744 mov.l @(disp,pc),Rn */
	IF(0x0C098746u); r7 = MACL;  /* 0C098746 sts macl,Rn */
	r7 += r0;  /* 0C098748 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09874Cu, 3);  /* 0C09874A mov.w @(disp,pc),Rn */
	r10 = R32(r7 + 0x30u); UPD(0x0C09874Eu, 1);  /* 0C09874C mov.l @(disp,Rm),Rn */
	IF(0x0C09874Eu); r13 = R32(r0 + r7); UPD(0x0C098750u, 1);  /* 0C09874E mov.l @(r0,Rm),Rn */
	r10 += r13;  /* 0C098750 add Rm,Rn */
	W32(r7 + 0x30u, r10); UPD(0x0C098754u, 2);  /* 0C098752 mov.l Rm,@(disp,Rn) */
	IF(0x0C098754u); T = (s32)r10 > 0;  /* 0C098754 cmp/pl Rn */
	IF(0x0C098756u); r0 = T;  /* 0C098756 movt Rn */
	r5 = 0xC1CCA4Cu; UPD(0x0C09875Au, 3);  /* 0C098758 mov.l @(disp,pc),Rn */
	r7 += 0x50u;  /* 0C09875A add #imm,Rn */
	IF(0x0C09875Cu); r0 <<= 2;  /* 0C09875C shll2 Rn */
	r4 = R32(r7); UPD(0x0C098760u, 3);  /* 0C09875E mov.l @Rm,Rn */
	IF(0x0C098760u); r3 = R32(r0 + r5); UPD(0x0C098762u, 1);  /* 0C098760 mov.l @(r0,Rm),Rn */
	r4 += r3;  /* 0C098762 add Rm,Rn */
	T = r10 == r4;  /* 0C098764 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C098738u, 5); goto L_0C098738; } goto L_0C09876A; }  /* 0C098766 bf/s */
L_0C09876A: BLKS(0x0C09876Au);
	r0 = 0x9Fu; UPD(0x0C09876Cu, 2);  /* 0C09876A mov.w @(disp,pc),Rn */
	IF(0x0C09876Cu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09876Eu, 1);  /* 0C09876C mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C09876E add #imm,Rn */
	IF(0x0C098770u); W8(r0 + r7, r2); UPD(0x0C098772u, 2);  /* 0C098770 mov.b Rm,@(r0,Rn) */
L_0C098772: BLKS(0x0C098772u);
	r13 = 0xFFFFEC26u; UPD(0x0C098774u, 1);  /* 0C098772 mov.w @(disp,pc),Rn */
	IF(0x0C098774u); { u32 tv_ = (r13 + 0x0C098778u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098774 braf Rn */
L_0C098780: BLKS(0x0C098780u);
	r5 = 0xB4u; UPD(0x0C098782u, 1);  /* 0C098780 mov.w @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C098782 mov #imm,Rn */
	IF(0x0C098784u); MACL = r10 * r5;  /* 0C098784 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C098788u, 4);  /* 0C098786 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09878Au, 1);  /* 0C098788 mov.w @(disp,pc),Rn */
	IF(0x0C09878Au); r3 = MACL;  /* 0C09878A sts macl,Rn */
	r3 += r6;  /* 0C09878C add Rm,Rn */
	IF(0x0C09878Eu); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C098790u, 3);  /* 0C09878E mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C098790 add #imm,Rn */
	r8 = r12 & 0xFF;  /* 0C098792 extu.b Rm,Rn */
	T = r8 > r9;  /* 0C098794 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C098798u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C098772u, 6); goto L_0C098772; } UPD(0x0C09879Au, 1); goto L_0C09879A; }  /* 0C098796 bf/s */
L_0C09879A: BLKS(0x0C09879Au);
	r4 = 0x0u;  /* 0C09879A mov #imm,Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C09879Eu, 2);  /* 0C09879C mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09879E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0987A2u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C098800u, 4); goto L_0C098800; } UPD(0x0C0987A4u, 1); goto L_0C0987A4; }  /* 0C0987A0 bt/s */
L_0C0987A4: BLKS(0x0C0987A4u);
	IF(0x0C0987A4u); T = (s32)r2 >= 0;  /* 0C0987A4 cmp/pz Rn */
	if (!T) { UPD(0x0C098772u, 4); goto L_0C098772; }  /* 0C0987A6 bf */
L_0C0987A8: BLKS(0x0C0987A8u);
	r6 = 0x8u;  /* 0C0987A8 mov #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0987AA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C098772u, 5); goto L_0C098772; }  /* 0C0987AC bt */
L_0C0987AE: BLKS(0x0C0987AEu);
	r8 = 0xB4u; UPD(0x0C0987B0u, 1);  /* 0C0987AE mov.w @(disp,pc),Rn */
	IF(0x0C0987B0u); MACL = r10 * r8;  /* 0C0987B0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0987B4u, 3);  /* 0C0987B2 mov.l @(disp,pc),Rn */
	IF(0x0C0987B4u); r8 = MACL;  /* 0C0987B4 sts macl,Rn */
	r8 += r6;  /* 0C0987B6 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0987BAu, 3);  /* 0C0987B8 mov.l @(disp,Rm),Rn */
	r4 = 0xC1CCA54u; UPD(0x0C0987BCu, 1);  /* 0C0987BA mov.l @(disp,pc),Rn */
	IF(0x0C0987BCu); r0 <<= 2;  /* 0C0987BC shll2 Rn */
	r3 = 0xC0A0380u; UPD(0x0C0987C0u, 2);  /* 0C0987BE mov.l @(disp,pc),Rn */
	IF(0x0C0987C0u); r12 = R32(r0 + r4); UPD(0x0C0987C2u, 1);  /* 0C0987C0 mov.l @(r0,Rm),Rn */
	r9 = 0xC0A9E40u; UPD(0x0C0987C4u, 1);  /* 0C0987C2 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0987C4 mov Rm,Rn */
	IF(0x0C0987C6u); { u32 t_ = r3; PR = 0x0C0987CAu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0987CAu); }  /* 0C0987C6 jsr @Rn */
L_0C0987CA: BLKS(0x0C0987CAu);
	r4 = r10;  /* 0C0987CA mov Rm,Rn */
	r5 = 0xAu;  /* 0C0987CC mov #imm,Rn */
	IF(0x0C0987CEu); { u32 t_ = r9; PR = 0x0C0987D2u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0987D2u); }  /* 0C0987CE jsr @Rn */
L_0C0987D2: BLKS(0x0C0987D2u);
	T = (r0 & r0) == 0;  /* 0C0987D2 tst Rm,Rn */
	if (T) { UPD(0x0C098772u, 4); goto L_0C098772; }  /* 0C0987D4 bt */
L_0C0987D6: BLKS(0x0C0987D6u);
	r5 = R32(r8 + 0x30u); UPD(0x0C0987D8u, 1);  /* 0C0987D6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0987D8 add #imm,Rn */
	IF(0x0C0987DAu); T = (s32)r5 >= 0;  /* 0C0987DA cmp/pz Rn */
	IF(0x0C0987DCu); r0 = T;  /* 0C0987DC movt Rn */
	r0 ^= 0x1u;  /* 0C0987DE xor #imm,r0 */
	r10 = 0xC1CCA4Cu; UPD(0x0C0987E2u, 5);  /* 0C0987E0 mov.l @(disp,pc),Rn */
	IF(0x0C0987E2u); r0 <<= 2;  /* 0C0987E2 shll2 Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0987E6u, 2);  /* 0C0987E4 mov.l @(disp,Rm),Rn */
	r11 = 0x14u;  /* 0C0987E6 mov #imm,Rn */
	r7 = 0xFFF20000u; UPD(0x0C0987EAu, 2);  /* 0C0987E8 mov.l @(disp,pc),Rn */
	IF(0x0C0987EAu); r13 = R32(r0 + r10); UPD(0x0C0987ECu, 1);  /* 0C0987EA mov.l @(r0,Rm),Rn */
	r4 += r7;  /* 0C0987EC add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0987F0u, 2);  /* 0C0987EE mov.l @(disp,Rm),Rn */
	r6 = 0x100u; UPD(0x0C0987F2u, 1);  /* 0C0987F0 mov.w @(disp,pc),Rn */
	r5 += r13;  /* 0C0987F2 add Rm,Rn */
	r7 = 0x38000u; UPD(0x0C0987F6u, 2);  /* 0C0987F4 mov.l @(disp,pc),Rn */
	r0 = 0xC061F60u; UPD(0x0C0987F8u, 1);  /* 0C0987F6 mov.l @(disp,pc),Rn */
	{ W32(r15, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C09800Au, 3); goto L_0C09800A; }  /* 0C0987F8 bra */
L_0C098800: BLKS(0x0C098800u);
	IF(0x0C098800u); MACL = r11 * r5;  /* 0C098800 mul.l Rm,Rn */
	r13 = 0xA0u; UPD(0x0C098804u, 3);  /* 0C098802 mov.w @(disp,pc),Rn */
	IF(0x0C098804u); r1 = MACL;  /* 0C098804 sts macl,Rn */
	r1 += r6;  /* 0C098806 add Rm,Rn */
	r1 += r13;  /* 0C098808 add Rm,Rn */
	r13 += r3;  /* 0C09880A add Rm,Rn */
	r1 += 0x3u;  /* 0C09880C add #imm,Rn */
	r13 += 0x1u;  /* 0C09880E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C098812u, 7);  /* 0C098810 mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r13); UPD(0x0C098814u, 1);  /* 0C098812 mov.b @Rm,Rn */
	T = (r5 & r11) == 0;  /* 0C098814 tst Rm,Rn */
	if (!T) { UPD(0x0C0987AEu, 4); goto L_0C0987AE; }  /* 0C098816 bf */
L_0C098818: BLKS(0x0C098818u);
	r0 = R32(r3 + 0x30u); UPD(0x0C09881Au, 1);  /* 0C098818 mov.l @(disp,Rm),Rn */
	IF(0x0C09881Au); T = (s32)r0 > 0;  /* 0C09881A cmp/pl Rn */
	IF(0x0C09881Cu); r0 = T;  /* 0C09881C movt Rn */
	r7 = 0xC1CCA44u; UPD(0x0C098820u, 3);  /* 0C09881E mov.l @(disp,pc),Rn */
	IF(0x0C098820u); r0 <<= 2;  /* 0C098820 shll2 Rn */
	IF(0x0C098822u); r10 = R32(r0 + r7); UPD(0x0C098824u, 2);  /* 0C098822 mov.l @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C098826u, 1);  /* 0C098824 mov.w @(disp,pc),Rn */
	{ IF(0x0C098828u); W32(r0 + r3, r10); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C098730u, 3); goto L_0C098730; }  /* 0C098826 bra */
L_0C098830: BLKS(0x0C098830u);
	r3 = 0xB4u; UPD(0x0C098832u, 1);  /* 0C098830 mov.w @(disp,pc),Rn */
	IF(0x0C098832u); MACL = r10 * r3;  /* 0C098832 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C098836u, 3);  /* 0C098834 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C098838u, 1);  /* 0C098836 mov.w @(disp,pc),Rn */
	IF(0x0C098838u); r3 = MACL;  /* 0C098838 sts macl,Rn */
	r3 += r12;  /* 0C09883A add Rm,Rn */
	r9 = R32(r3 + 0x30u); UPD(0x0C09883Eu, 3);  /* 0C09883C mov.l @(disp,Rm),Rn */
	IF(0x0C09883Eu); r2 = R32(r0 + r3); UPD(0x0C098840u, 1);  /* 0C09883E mov.l @(r0,Rm),Rn */
	r9 -= r2;  /* 0C098840 sub Rm,Rn */
	W32(r3 + 0x30u, r9); UPD(0x0C098844u, 2);  /* 0C098842 mov.l Rm,@(disp,Rn) */
	r3 += 0x50u;  /* 0C098844 add #imm,Rn */
	r0 = R32(r3); UPD(0x0C098848u, 2);  /* 0C098846 mov.l @Rm,Rn */
	T = r9 == r0;  /* 0C098848 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09885Eu, 4); goto L_0C09885E; } goto L_0C09884E; }  /* 0C09884A bf/s */
L_0C09884E: BLKS(0x0C09884Eu);
	r4 = R32(r3); UPD(0x0C098850u, 2);  /* 0C09884E mov.l @Rm,Rn */
	r0 = r3;  /* 0C098850 mov Rm,Rn */
	r1 = 0x4000u; UPD(0x0C098854u, 2);  /* 0C098852 mov.w @(disp,pc),Rn */
	r2 = 0x9Fu; UPD(0x0C098856u, 1);  /* 0C098854 mov.w @(disp,pc),Rn */
	r4 |= r1;  /* 0C098856 or Rm,Rn */
	W32(r3, r4); UPD(0x0C09885Au, 2);  /* 0C098858 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C09885A mov #imm,Rn */
	IF(0x0C09885Cu); W8(r0 + r2, r1); UPD(0x0C09885Eu, 2);  /* 0C09885C mov.b Rm,@(r0,Rn) */
L_0C09885E: BLKS(0x0C09885Eu);
	r13 = 0xFFFFEB3Au; UPD(0x0C098860u, 1);  /* 0C09885E mov.w @(disp,pc),Rn */
	IF(0x0C098860u); { u32 tv_ = (r13 + 0x0C098864u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098860 braf Rn */
L_0C0988A0: BLKS(0x0C0988A0u);
	r12 = 0xC0A03F0u; UPD(0x0C0988A2u, 1);  /* 0C0988A0 mov.l @(disp,pc),Rn */
	IF(0x0C0988A2u); { u32 t_ = r12; PR = 0x0C0988A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0988A6u); }  /* 0C0988A2 jsr @Rn */
L_0C0988A6: BLKS(0x0C0988A6u);
	IF(0x0C0988A6u); T = (s32)r0 >= 0;  /* 0C0988A6 cmp/pz Rn */
	if (T) { UPD(0x0C0988AEu, 4); goto L_0C0988AE; }  /* 0C0988A8 bt */
L_0C0988AA: BLKS(0x0C0988AAu);
	{ IF(0x0C0988ACu); ; /* slot nop */ UPD(0x0C098620u, 3); goto L_0C098620; }  /* 0C0988AA bra */
L_0C0988AE: BLKS(0x0C0988AEu);
	r9 = 0xB4u; UPD(0x0C0988B0u, 1);  /* 0C0988AE mov.w @(disp,pc),Rn */
	IF(0x0C0988B0u); MACL = r10 * r9;  /* 0C0988B0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0988B4u, 3);  /* 0C0988B2 mov.l @(disp,pc),Rn */
	IF(0x0C0988B4u); r8 = MACL;  /* 0C0988B4 sts macl,Rn */
	IF(0x0C0988B6u); MACL = r0 * r9;  /* 0C0988B6 mul.l Rm,Rn */
	r8 += r5;  /* 0C0988B8 add Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C0988BCu, 5);  /* 0C0988BA mov.l @(disp,Rm),Rn */
	IF(0x0C0988BCu); r9 = MACL;  /* 0C0988BC sts macl,Rn */
	r9 += r5;  /* 0C0988BE add Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0988C2u, 3);  /* 0C0988C0 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C0988C4u, 1);  /* 0C0988C2 mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x24u); UPD(0x0C0988C6u, 1);  /* 0C0988C4 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0988C6 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0988CAu, 2);  /* 0C0988C8 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C0988CA add Rm,Rn */
	r0 += 0x1u;  /* 0C0988CC add #imm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C0988D0u, 3);  /* 0C0988CE mov.l Rm,@(disp,Rn) */
	r0 &= 0x7u;  /* 0C0988D0 and #imm,r0 */
	{ W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C097A10u, 4); goto L_0C097A10; }  /* 0C0988D2 bra */
L_0C0988E0: BLKS(0x0C0988E0u);
	r8 = 0xC0A03F0u; UPD(0x0C0988E2u, 1);  /* 0C0988E0 mov.l @(disp,pc),Rn */
	IF(0x0C0988E2u); { u32 t_ = r8; PR = 0x0C0988E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0988E6u); }  /* 0C0988E2 jsr @Rn */
L_0C0988E6: BLKS(0x0C0988E6u);
	IF(0x0C0988E6u); T = (s32)r0 >= 0;  /* 0C0988E6 cmp/pz Rn */
	{ u32 c_ = T; r6 = 0xDu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0988F4u, 4); goto L_0C0988F4; } goto L_0C0988EC; }  /* 0C0988E8 bt/s */
L_0C0988EC: BLKS(0x0C0988ECu);
	r1 = 0xFFFFECDEu; UPD(0x0C0988EEu, 2);  /* 0C0988EC mov.w @(disp,pc),Rn */
	IF(0x0C0988EEu); { u32 tv_ = (r1 + 0x0C0988F2u); u32 t_ = PHYS(tv_); IF(0x0C0988F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C0988EE braf Rn */
L_0C0988F4: BLKS(0x0C0988F4u);
	r3 = 0xB4u; UPD(0x0C0988F6u, 1);  /* 0C0988F4 mov.w @(disp,pc),Rn */
	IF(0x0C0988F6u); MACL = r10 * r3;  /* 0C0988F6 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0988FAu, 3);  /* 0C0988F8 mov.l @(disp,pc),Rn */
	IF(0x0C0988FAu); r13 = MACL;  /* 0C0988FA sts macl,Rn */
	r13 += r8;  /* 0C0988FC add Rm,Rn */
	r11 = R32(r13); UPD(0x0C098900u, 3);  /* 0C0988FE mov.l @Rm,Rn */
	IF(0x0C098900u); MACL = r0 * r3;  /* 0C098900 mul.l Rm,Rn */
	r9 = 0xECFFFFFFu; UPD(0x0C098904u, 3);  /* 0C098902 mov.l @(disp,pc),Rn */
	r11 &= r9;  /* 0C098904 and Rm,Rn */
	W32(r13, r11); UPD(0x0C098908u, 2);  /* 0C098906 mov.l Rm,@Rn */
	IF(0x0C098908u); r0 = MACL;  /* 0C098908 sts macl,Rn */
	r0 += r8;  /* 0C09890A add Rm,Rn */
	r5 = R32(r0); UPD(0x0C09890Eu, 3);  /* 0C09890C mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C098910u, 1);  /* 0C09890E mov.l @(disp,pc),Rn */
	r2 = R32(r13 + 0x30u); UPD(0x0C098912u, 1);  /* 0C098910 mov.l @(disp,Rm),Rn */
	r5 &= r7;  /* 0C098912 and Rm,Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C098916u, 2);  /* 0C098914 mov.l @(disp,Rm),Rn */
	r11 |= r5;  /* 0C098916 or Rm,Rn */
	r1 = R32(r13 + 0x2Cu); UPD(0x0C09891Au, 2);  /* 0C098918 mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C09891Cu, 1);  /* 0C09891A mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C09891C add Rm,Rn */
	r12 += r2;  /* 0C09891E add Rm,Rn */
	W32(r13, r11); UPD(0x0C098922u, 3);  /* 0C098920 mov.l Rm,@Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C098924u, 1);  /* 0C098922 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r12); UPD(0x0C098926u, 1);  /* 0C098924 mov.l Rm,@(disp,Rn) */
	r13 += 0x7Eu;  /* 0C098926 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C09892Au, 2);  /* 0C098928 mov.w @Rm,Rn */
	r13 += 0xFFFFFF82u;  /* 0C09892A add #imm,Rn */
	r2 = R32(r13 + 0xCu); UPD(0x0C09892Eu, 2);  /* 0C09892C mov.l @(disp,Rm),Rn */
	T = r2 > r6;  /* 0C09892E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09898Eu, 4); goto L_0C09898E; }  /* 0C098930 bt */
L_0C098932: BLKS(0x0C098932u);
	r0 = 0xC098950u;  /* 0C098932 mova @(disp,pc),r0 */
	IF(0x0C098934u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C098936u, 2);  /* 0C098934 mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C098936 extu.b Rm,Rn */
	IF(0x0C098938u); { u32 tv_ = (r6 + 0x0C09893Cu); u32 t_ = PHYS(tv_); IF(0x0C09893Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C098960u: goto L_0C098960; case 0x0C09898Eu: goto L_0C09898E; case 0x0C0989B0u: goto L_0C0989B0; case 0x0C0989DAu: goto L_0C0989DA; default: JUMPD(tv_); } }  /* 0C098938 braf Rn */
L_0C098960: BLKS(0x0C098960u);
	r7 = 0xB4u; UPD(0x0C098962u, 1);  /* 0C098960 mov.w @(disp,pc),Rn */
	IF(0x0C098962u); MACL = r11 * r7;  /* 0C098962 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C098966u, 3);  /* 0C098964 mov.l @(disp,pc),Rn */
	IF(0x0C098966u); r0 = MACL;  /* 0C098966 sts macl,Rn */
	IF(0x0C098968u); MACL = r10 * r7;  /* 0C098968 mul.l Rm,Rn */
	r5 = 0xA0u; UPD(0x0C09896Cu, 4);  /* 0C09896A mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C09896C add Rm,Rn */
	IF(0x0C09896Eu); r3 = MACL;  /* 0C09896E sts macl,Rn */
	r0 += r5;  /* 0C098970 add Rm,Rn */
	r3 += r9;  /* 0C098972 add Rm,Rn */
	r5 += r3;  /* 0C098974 add Rm,Rn */
	r0 += 0x3u;  /* 0C098976 add #imm,Rn */
	r5 += 0x1u;  /* 0C098978 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C09897Cu, 8);  /* 0C09897A mov.b @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r5); UPD(0x0C09897Eu, 1);  /* 0C09897C mov.b @Rm,Rn */
	T = (r11 & r13) == 0;  /* 0C09897E tst Rm,Rn */
	if (T) { UPD(0x0C098A02u, 4); goto L_0C098A02; }  /* 0C098980 bt */
L_0C098982: BLKS(0x0C098982u);
	r2 = 0x10u;  /* 0C098982 mov #imm,Rn */
	r0 = 0x9Cu; UPD(0x0C098986u, 2);  /* 0C098984 mov.w @(disp,pc),Rn */
	IF(0x0C098986u); W8(r0 + r3, r2); UPD(0x0C098988u, 1);  /* 0C098986 mov.b Rm,@(r0,Rn) */
	r12 = 0x1u;  /* 0C098988 mov #imm,Rn */
	r0 += 0xFFFFFFECu;  /* 0C09898A add #imm,Rn */
	IF(0x0C09898Cu); W16(r0 + r3, r12); UPD(0x0C09898Eu, 3);  /* 0C09898C mov.w Rm,@(r0,Rn) */
L_0C09898E: BLKS(0x0C09898Eu);
	r3 = 0xB4u; UPD(0x0C098990u, 1);  /* 0C09898E mov.w @(disp,pc),Rn */
	IF(0x0C098990u); MACL = r10 * r3;  /* 0C098990 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C098994u, 3);  /* 0C098992 mov.l @(disp,pc),Rn */
	IF(0x0C098994u); r3 = MACL;  /* 0C098994 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C098998u, 2);  /* 0C098996 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C098998 add Rm,Rn */
	r2 += r3;  /* 0C09899A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C09899Eu, 3);  /* 0C09899C mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09899E add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0989A0 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0989A2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C098A02u, 6); goto L_0C098A02; } UPD(0x0C0989A8u, 1); goto L_0C0989A8; }  /* 0C0989A4 bf/s */
L_0C0989A8: BLKS(0x0C0989A8u);
	r6 = 0x0u;  /* 0C0989A8 mov #imm,Rn */
	{ W8(r2, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C098548u, 4); goto L_0C098548; }  /* 0C0989AA bra */
L_0C0989B0: BLKS(0x0C0989B0u);
	r7 = 0xB4u; UPD(0x0C0989B2u, 1);  /* 0C0989B0 mov.w @(disp,pc),Rn */
	IF(0x0C0989B2u); MACL = r11 * r7;  /* 0C0989B2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0989B6u, 3);  /* 0C0989B4 mov.l @(disp,pc),Rn */
	IF(0x0C0989B6u); r1 = MACL;  /* 0C0989B6 sts macl,Rn */
	IF(0x0C0989B8u); MACL = r10 * r7;  /* 0C0989B8 mul.l Rm,Rn */
	r0 = 0xA0u; UPD(0x0C0989BCu, 4);  /* 0C0989BA mov.w @(disp,pc),Rn */
	r1 += r9;  /* 0C0989BC add Rm,Rn */
	IF(0x0C0989BEu); r3 = MACL;  /* 0C0989BE sts macl,Rn */
	r1 += r0;  /* 0C0989C0 add Rm,Rn */
	r3 += r9;  /* 0C0989C2 add Rm,Rn */
	r0 += r3;  /* 0C0989C4 add Rm,Rn */
	r1 += 0x3u;  /* 0C0989C6 add #imm,Rn */
	r0 += 0x1u;  /* 0C0989C8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C0989CCu, 8);  /* 0C0989CA mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0989CEu, 1);  /* 0C0989CC mov.b @Rm,Rn */
	T = (r5 & r11) == 0;  /* 0C0989CE tst Rm,Rn */
	if (!T) { UPD(0x0C0989DAu, 4); goto L_0C0989DA; }  /* 0C0989D0 bf */
L_0C0989D2: BLKS(0x0C0989D2u);
	r0 = 0xFFFFEBE8u; UPD(0x0C0989D4u, 1);  /* 0C0989D2 mov.w @(disp,pc),Rn */
	IF(0x0C0989D4u); { u32 tv_ = (r0 + 0x0C0989D8u); u32 t_ = PHYS(tv_); IF(0x0C0989D6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975C0u: goto L_0C0975C0; default: JUMPD(tv_); } }  /* 0C0989D4 braf Rn */
L_0C0989DA: BLKS(0x0C0989DAu);
	r8 = 0xB4u; UPD(0x0C0989DCu, 1);  /* 0C0989DA mov.w @(disp,pc),Rn */
	IF(0x0C0989DCu); MACL = r10 * r8;  /* 0C0989DC mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0989E0u, 3);  /* 0C0989DE mov.l @(disp,pc),Rn */
	IF(0x0C0989E0u); r8 = MACL;  /* 0C0989E0 sts macl,Rn */
	r8 += r6;  /* 0C0989E2 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0989E6u, 3);  /* 0C0989E4 mov.l @(disp,Rm),Rn */
	r3 = 0xC1CCA60u; UPD(0x0C0989E8u, 1);  /* 0C0989E6 mov.l @(disp,pc),Rn */
	IF(0x0C0989E8u); r0 <<= 2;  /* 0C0989E8 shll2 Rn */
	IF(0x0C0989EAu); r4 = R32(r0 + r3); UPD(0x0C0989ECu, 2);  /* 0C0989EA mov.l @(r0,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C0989EEu, 1);  /* 0C0989EC mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0989F0u, 1);  /* 0C0989EE mov.l Rm,@(disp,Rn) */
	r12 = 0xC0A9E40u; UPD(0x0C0989F2u, 1);  /* 0C0989F0 mov.l @(disp,pc),Rn */
	IF(0x0C0989F2u); { u32 t_ = r2; PR = 0x0C0989F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0989F6u); }  /* 0C0989F2 jsr @Rn */
L_0C0989F6: BLKS(0x0C0989F6u);
	r4 = r10;  /* 0C0989F6 mov Rm,Rn */
	r5 = 0x14u;  /* 0C0989F8 mov #imm,Rn */
	IF(0x0C0989FAu); { u32 t_ = r12; PR = 0x0C0989FEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0989FEu); }  /* 0C0989FA jsr @Rn */
L_0C0989FE: BLKS(0x0C0989FEu);
	T = (r0 & r0) == 0;  /* 0C0989FE tst Rm,Rn */
	if (!T) { UPD(0x0C098A0Au, 4); goto L_0C098A0A; }  /* 0C098A00 bf */
L_0C098A02: BLKS(0x0C098A02u);
	r13 = 0xFFFFE996u; UPD(0x0C098A04u, 1);  /* 0C098A02 mov.w @(disp,pc),Rn */
	IF(0x0C098A04u); { u32 tv_ = (r13 + 0x0C098A08u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098A04 braf Rn */
L_0C098A0A: BLKS(0x0C098A0Au);
	r13 = 0xC0580D0u; UPD(0x0C098A0Cu, 1);  /* 0C098A0A mov.l @(disp,pc),Rn */
	r12 = 0xC058180u; UPD(0x0C098A0Eu, 1);  /* 0C098A0C mov.l @(disp,pc),Rn */
	IF(0x0C098A0Eu); { u32 t_ = r13; PR = 0x0C098A12u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C098A12u); }  /* 0C098A0E jsr @Rn */
L_0C098A12: BLKS(0x0C098A12u);
	IF(0x0C098A12u); { u32 t_ = r12; PR = 0x0C098A16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058180, 0x0C058180u, 0x0C098A16u); }  /* 0C098A12 jsr @Rn */
L_0C098A16: BLKS(0x0C098A16u);
	r11 = R32(r8 + 0x8u); UPD(0x0C098A18u, 1);  /* 0C098A16 mov.l @(disp,Rm),Rn */
	r9 = r8;  /* 0C098A18 mov Rm,Rn */
	r5 = 0x84u; UPD(0x0C098A1Cu, 2);  /* 0C098A1A mov.w @(disp,pc),Rn */
	IF(0x0C098A1Cu); r11 <<= 2;  /* 0C098A1C shll2 Rn */
	r0 = 0xC1CCA98u; UPD(0x0C098A20u, 2);  /* 0C098A1E mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C098A20 add Rm,Rn */
	r11 += r0;  /* 0C098A22 add Rm,Rn */
	r11 -= r5;  /* 0C098A24 sub Rm,Rn */
	r9 += 0x2u;  /* 0C098A26 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C098A2Au, 5);  /* 0C098A28 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C098A2A add #imm,Rn */
	r13 = R32(r11); UPD(0x0C098A2Eu, 2);  /* 0C098A2C mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C098A2E mov #imm,Rn */
	r10 = 0xC177A72u; UPD(0x0C098A32u, 2);  /* 0C098A30 mov.l @(disp,pc),Rn */
	W32(r15, r13); UPD(0x0C098A34u, 1);  /* 0C098A32 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C098A36u, 1);  /* 0C098A34 mov.l Rm,@(disp,Rn) */
	r0 = 0xC7C1770u; UPD(0x0C098A38u, 1);  /* 0C098A36 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C098A3Au, 1);  /* 0C098A38 mov.l @(disp,Rm),Rn */
	{ r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09841Eu, 3); goto L_0C09841E; }  /* 0C098A3A bra */
L_0C098A40: BLKS(0x0C098A40u);
	r9 = 0xC0A03F0u; UPD(0x0C098A42u, 1);  /* 0C098A40 mov.l @(disp,pc),Rn */
	IF(0x0C098A42u); { u32 t_ = r9; PR = 0x0C098A46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C098A46u); }  /* 0C098A42 jsr @Rn */
L_0C098A46: BLKS(0x0C098A46u);
	IF(0x0C098A46u); T = (s32)r0 >= 0;  /* 0C098A46 cmp/pz Rn */
	if (T) { UPD(0x0C098A4Eu, 4); goto L_0C098A4E; }  /* 0C098A48 bt */
L_0C098A4A: BLKS(0x0C098A4Au);
	{ IF(0x0C098A4Cu); ; /* slot nop */ UPD(0x0C098620u, 3); goto L_0C098620; }  /* 0C098A4A bra */
L_0C098A4E: BLKS(0x0C098A4Eu);
	r7 = 0xB4u; UPD(0x0C098A50u, 1);  /* 0C098A4E mov.w @(disp,pc),Rn */
	IF(0x0C098A50u); MACL = r10 * r7;  /* 0C098A50 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C098A54u, 3);  /* 0C098A52 mov.l @(disp,pc),Rn */
	IF(0x0C098A54u); r12 = MACL;  /* 0C098A54 sts macl,Rn */
	IF(0x0C098A56u); MACL = r0 * r7;  /* 0C098A56 mul.l Rm,Rn */
	r12 += r6;  /* 0C098A58 add Rm,Rn */
	r4 = R32(r12 + 0x2Cu); UPD(0x0C098A5Cu, 5);  /* 0C098A5A mov.l @(disp,Rm),Rn */
	IF(0x0C098A5Cu); r0 = MACL;  /* 0C098A5C sts macl,Rn */
	r0 += r6;  /* 0C098A5E add Rm,Rn */
	r13 = R32(r0 + 0x24u); UPD(0x0C098A62u, 3);  /* 0C098A60 mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C098A64u, 1);  /* 0C098A62 mov.l @(disp,Rm),Rn */
	r13 += r4;  /* 0C098A64 add Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C098A68u, 2);  /* 0C098A66 mov.l @(disp,Rm),Rn */
	r11 += r1;  /* 0C098A68 add Rm,Rn */
	W32(r12 + 0x28u, r11); UPD(0x0C098A6Cu, 2);  /* 0C098A6A mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x24u, r13); UPD(0x0C098A6Eu, 1);  /* 0C098A6C mov.l Rm,@(disp,Rn) */
	r12 += 0x7Eu;  /* 0C098A6E add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C098A72u, 2);  /* 0C098A70 mov.w @Rm,Rn */
	r12 += 0xFFFFFF82u;  /* 0C098A72 add #imm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C098A76u, 2);  /* 0C098A74 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C098A76 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x7u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C098A80u, 4); goto L_0C098A80; } goto L_0C098A7C; }  /* 0C098A78 bf/s */
L_0C098A7C: BLKS(0x0C098A7Cu);
	{ IF(0x0C098A7Eu); MACL = r11 * r7; /* slot mul.l Rm,Rn */ UPD(0x0C098B80u, 5); goto L_0C098B80; }  /* 0C098A7C bra */
L_0C098A80: BLKS(0x0C098A80u);
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C098AD0u, 3); goto L_0C098AD0; } goto L_0C098A84; }  /* 0C098A80 bt/s */
L_0C098A84: BLKS(0x0C098A84u);
	r11 = 0xB4u; UPD(0x0C098A86u, 2);  /* 0C098A84 mov.w @(disp,pc),Rn */
	IF(0x0C098A86u); MACL = r10 * r11;  /* 0C098A86 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C098A8Au, 3);  /* 0C098A88 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C098A8Cu, 1);  /* 0C098A8A mov.w @(disp,pc),Rn */
	IF(0x0C098A8Cu); r8 = MACL;  /* 0C098A8C sts macl,Rn */
	r8 += r7;  /* 0C098A8E add Rm,Rn */
	IF(0x0C098A90u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C098A92u, 3);  /* 0C098A90 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C098A92 add #imm,Rn */
	IF(0x0C098A94u); W8(r0 + r8, r12); UPD(0x0C098A96u, 2);  /* 0C098A94 mov.b Rm,@(r0,Rn) */
	{ r1 = r12 & 0xFF; /* slot extu.b Rm,Rn */ UPD(0x0C098366u, 3); goto L_0C098366; }  /* 0C098A96 bra */
L_0C098AD0: BLKS(0x0C098AD0u);
	IF(0x0C098AD0u); MACL = r11 * r7;  /* 0C098AD0 mul.l Rm,Rn */
	r8 = 0xA0u; UPD(0x0C098AD4u, 3);  /* 0C098AD2 mov.w @(disp,pc),Rn */
	IF(0x0C098AD4u); r1 = MACL;  /* 0C098AD4 sts macl,Rn */
	r1 += r6;  /* 0C098AD6 add Rm,Rn */
	r1 += r8;  /* 0C098AD8 add Rm,Rn */
	r8 += r12;  /* 0C098ADA add Rm,Rn */
	r1 += 0x2u;  /* 0C098ADC add #imm,Rn */
	r8 += 0x1u;  /* 0C098ADE add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C098AE2u, 7);  /* 0C098AE0 mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C098AE4u, 1);  /* 0C098AE2 mov.b @Rm,Rn */
	T = (r4 & r0) == 0;  /* 0C098AE4 tst Rm,Rn */
	if (T) { UPD(0x0C098B70u, 4); goto L_0C098B70; }  /* 0C098AE6 bt */
L_0C098AE8: BLKS(0x0C098AE8u);
	r4 = r10;  /* 0C098AE8 mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C098AECu, 2);  /* 0C098AEA mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C098AEC mov #imm,Rn */
	IF(0x0C098AEEu); { u32 t_ = r9; PR = 0x0C098AF2u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C098AF2u); }  /* 0C098AEE jsr @Rn */
L_0C098AF2: BLKS(0x0C098AF2u);
	T = (r0 & r0) == 0;  /* 0C098AF2 tst Rm,Rn */
	if (T) { UPD(0x0C098B5Au, 4); goto L_0C098B5A; }  /* 0C098AF4 bt */
L_0C098AF6: BLKS(0x0C098AF6u);
	r4 = r10;  /* 0C098AF6 mov Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C098AFAu, 2);  /* 0C098AF8 mov.w @(disp,pc),Rn */
	r11 += r12;  /* 0C098AFA add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C098AFEu, 2);  /* 0C098AFC mov.b @Rm,Rn */
	r6 = r9 & 0xFF;  /* 0C098AFE extu.b Rm,Rn */
	r9 = 0xCu;  /* 0C098B00 mov #imm,Rn */
	IF(0x0C098B02u); MACL = r6 * r9;  /* 0C098B02 mul.l Rm,Rn */
	r8 = 0xC1CC9FCu; UPD(0x0C098B06u, 5);  /* 0C098B04 mov.l @(disp,pc),Rn */
	IF(0x0C098B06u); r5 = MACL;  /* 0C098B06 sts macl,Rn */
	r5 += r8;  /* 0C098B08 add Rm,Rn */
	r2 = R32(r5); UPD(0x0C098B0Cu, 3);  /* 0C098B0A mov.l @Rm,Rn */
	r13 = R32(r12 + 0x24u); UPD(0x0C098B0Eu, 1);  /* 0C098B0C mov.l @(disp,Rm),Rn */
	r13 += r2;  /* 0C098B0E add Rm,Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C098B12u, 2);  /* 0C098B10 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0580D0u; UPD(0x0C098B14u, 1);  /* 0C098B12 mov.l @(disp,pc),Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C098B16u, 1);  /* 0C098B14 mov.l @(disp,Rm),Rn */
	r13 = R32(r12 + 0x28u); UPD(0x0C098B18u, 1);  /* 0C098B16 mov.l @(disp,Rm),Rn */
	IF(0x0C098B18u); { u32 t_ = r0; PR = 0x0C098B1Cu; r13 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C098B1Cu); }  /* 0C098B18 jsr @Rn */
L_0C098B1C: BLKS(0x0C098B1Cu);
	r4 = r10;  /* 0C098B1C mov Rm,Rn */
	r10 = 0xC058180u; UPD(0x0C098B20u, 2);  /* 0C098B1E mov.l @(disp,pc),Rn */
	IF(0x0C098B20u); { u32 t_ = r10; PR = 0x0C098B24u; IF(0x0C098B22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058180, 0x0C058180u, 0x0C098B24u); }  /* 0C098B20 jsr @Rn */
L_0C098B24: BLKS(0x0C098B24u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C098B26u, 1);  /* 0C098B24 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C098B26 add #imm,Rn */
	r7 = r0 & 0xFF;  /* 0C098B28 extu.b Rm,Rn */
	IF(0x0C098B2Au); MACL = r7 * r9;  /* 0C098B2A mul.l Rm,Rn */
	r4 = 0x86u; UPD(0x0C098B2Eu, 5);  /* 0C098B2C mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C098B2E mov Rm,Rn */
	IF(0x0C098B30u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C098B32u, 2);  /* 0C098B30 mov.w @(r0,Rm),Rn */
	IF(0x0C098B32u); r5 = MACL;  /* 0C098B32 sts macl,Rn */
	r6 = 0x28000u; UPD(0x0C098B36u, 2);  /* 0C098B34 mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C098B36 add Rm,Rn */
	r2 = 0xC177B20u; UPD(0x0C098B3Au, 2);  /* 0C098B38 mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C098B3Cu, 1);  /* 0C098B3A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C098B3Eu, 1);  /* 0C098B3C mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C098B3E mov Rm,Rn */
	r12 = 0xC7C1710u; UPD(0x0C098B42u, 2);  /* 0C098B40 mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x8u); UPD(0x0C098B44u, 1);  /* 0C098B42 mov.l @(disp,Rm),Rn */
	IF(0x0C098B44u); { u32 t_ = r12; PR = 0x0C098B48u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C098B48u); }  /* 0C098B44 jsr @Rn */
L_0C098B48: BLKS(0x0C098B48u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C098B4Au, 1);  /* 0C098B48 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C098B4A add #imm,Rn */
	r10 += 0x1u;  /* 0C098B4C add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C098B4E extu.b Rm,Rn */
	T = r0 == 0x6u;  /* 0C098B50 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r11, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C098B5Au, 7); goto L_0C098B5A; } UPD(0x0C098B56u, 1); goto L_0C098B56; }  /* 0C098B52 bf/s */
L_0C098B56: BLKS(0x0C098B56u);
	r8 = 0x0u;  /* 0C098B56 mov #imm,Rn */
	W8(r11, r8); UPD(0x0C098B5Au, 2);  /* 0C098B58 mov.b Rm,@Rn */
L_0C098B5A: BLKS(0x0C098B5Au);
	r13 = 0xFFFFE83Eu; UPD(0x0C098B5Cu, 1);  /* 0C098B5A mov.w @(disp,pc),Rn */
	IF(0x0C098B5Cu); { u32 tv_ = (r13 + 0x0C098B60u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098B5C braf Rn */
L_0C098B70: BLKS(0x0C098B70u);
	r0 = 0x88u; UPD(0x0C098B72u, 1);  /* 0C098B70 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C098B72 mov #imm,Rn */
	IF(0x0C098B74u); W16(r0 + r12, r3); UPD(0x0C098B76u, 2);  /* 0C098B74 mov.w Rm,@(r0,Rn) */
	r1 = 0x6u;  /* 0C098B76 mov #imm,Rn */
	UPD(0x0C098B78u, 1);
L_0C098B78: BLKS(0x0C098B78u);
	r4 = 0xFFFFE930u; UPD(0x0C098B7Au, 1);  /* 0C098B78 mov.w @(disp,pc),Rn */
	IF(0x0C098B7Au); { u32 tv_ = (r4 + 0x0C098B7Eu); u32 t_ = PHYS(tv_); W32(r12 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974AEu: goto L_0C0974AE; default: JUMPD(tv_); } }  /* 0C098B7A braf Rn */
L_0C098B80: BLKS(0x0C098B80u);
	r9 = 0xA0u; UPD(0x0C098B82u, 1);  /* 0C098B80 mov.w @(disp,pc),Rn */
	IF(0x0C098B82u); r5 = MACL;  /* 0C098B82 sts macl,Rn */
	r5 += r6;  /* 0C098B84 add Rm,Rn */
	r5 += r9;  /* 0C098B86 add Rm,Rn */
	r9 += r12;  /* 0C098B88 add Rm,Rn */
	r5 += 0x2u;  /* 0C098B8A add #imm,Rn */
	r9 += 0x1u;  /* 0C098B8C add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C098B90u, 7);  /* 0C098B8E mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C098B92u, 1);  /* 0C098B90 mov.b @Rm,Rn */
	T = (r3 & r8) == 0;  /* 0C098B92 tst Rm,Rn */
	if (T) { UPD(0x0C098B5Au, 4); goto L_0C098B5A; }  /* 0C098B94 bt */
L_0C098B96: BLKS(0x0C098B96u);
	r6 = 0x1u;  /* 0C098B96 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C098B9Au, 2);  /* 0C098B98 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C098B9A mov #imm,Rn */
	IF(0x0C098B9Cu); W16(r0 + r12, r6); UPD(0x0C098B9Eu, 2);  /* 0C098B9C mov.w Rm,@(r0,Rn) */
	W32(r12 + 0xCu, r2); UPD(0x0C098BA0u, 1);  /* 0C098B9E mov.l Rm,@(disp,Rn) */
L_0C098BA0: BLKS(0x0C098BA0u);
	r1 = 0xC0A0380u; UPD(0x0C098BA2u, 1);  /* 0C098BA0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C098BA2 mov Rm,Rn */
	UPD(0x0C098BA4u, 1);
L_0C098BA4: BLKS(0x0C098BA4u);
	IF(0x0C098BA4u); { u32 t_ = r1; PR = 0x0C098BA8u; IF(0x0C098BA6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C098BA8u); }  /* 0C098BA4 jsr @Rn */
L_0C098BA8: BLKS(0x0C098BA8u);
	r1 = 0xFFFFEB64u; UPD(0x0C098BAAu, 1);  /* 0C098BA8 mov.w @(disp,pc),Rn */
	IF(0x0C098BAAu); { u32 tv_ = (r1 + 0x0C098BAEu); u32 t_ = PHYS(tv_); r4 = 0x75u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C097712u: goto L_0C097712; default: JUMPD(tv_); } }  /* 0C098BAA braf Rn */
L_0C098BB0: BLKS(0x0C098BB0u);
	r8 = 0xC0A05D0u; UPD(0x0C098BB2u, 1);  /* 0C098BB0 mov.l @(disp,pc),Rn */
	IF(0x0C098BB2u); { u32 t_ = r8; PR = 0x0C098BB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C098BB6u); }  /* 0C098BB2 jsr @Rn */
L_0C098BB6: BLKS(0x0C098BB6u);
	IF(0x0C098BB6u); T = (s32)r0 >= 0;  /* 0C098BB6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C098BC4u, 4); goto L_0C098BC4; } goto L_0C098BBC; }  /* 0C098BB8 bt/s */
L_0C098BBC: BLKS(0x0C098BBCu);
	r1 = 0xFFFFEA0Eu; UPD(0x0C098BBEu, 2);  /* 0C098BBC mov.w @(disp,pc),Rn */
	IF(0x0C098BBEu); { u32 tv_ = (r1 + 0x0C098BC2u); u32 t_ = PHYS(tv_); IF(0x0C098BC0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C098BBE braf Rn */
L_0C098BC4: BLKS(0x0C098BC4u);
	r2 = 0xB4u; UPD(0x0C098BC6u, 1);  /* 0C098BC4 mov.w @(disp,pc),Rn */
	r7 = 0x1Eu;  /* 0C098BC6 mov #imm,Rn */
	IF(0x0C098BC8u); MACL = r10 * r2;  /* 0C098BC8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C098BCCu, 4);  /* 0C098BCA mov.l @(disp,pc),Rn */
	IF(0x0C098BCCu); r4 = MACL;  /* 0C098BCC sts macl,Rn */
	IF(0x0C098BCEu); MACL = r11 * r2;  /* 0C098BCE mul.l Rm,Rn */
	r4 += r0;  /* 0C098BD0 add Rm,Rn */
	r5 = R32(r4 + 0x2Cu); UPD(0x0C098BD4u, 5);  /* 0C098BD2 mov.l @(disp,Rm),Rn */
	IF(0x0C098BD4u); r6 = MACL;  /* 0C098BD4 sts macl,Rn */
	r6 += r0;  /* 0C098BD6 add Rm,Rn */
	r11 = R32(r6 + 0x24u); UPD(0x0C098BDAu, 3);  /* 0C098BD8 mov.l @(disp,Rm),Rn */
	r3 = R32(r6 + 0x28u); UPD(0x0C098BDCu, 1);  /* 0C098BDA mov.l @(disp,Rm),Rn */
	r11 += r5;  /* 0C098BDC add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C098BE0u, 2);  /* 0C098BDE mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C098BE0 add Rm,Rn */
	W32(r4 + 0x24u, r11); UPD(0x0C098BE4u, 2);  /* 0C098BE2 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r3); UPD(0x0C098BE6u, 1);  /* 0C098BE4 mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C098BE6 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C098BEAu, 2);  /* 0C098BE8 mov.w @Rm,Rn */
	r4 += 0xFFFFFF82u;  /* 0C098BEA add #imm,Rn */
	r2 = R32(r4 + 0xCu); UPD(0x0C098BEEu, 2);  /* 0C098BEC mov.l @(disp,Rm),Rn */
	T = r2 > r7;  /* 0C098BEE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C098BF6u, 4); goto L_0C098BF6; }  /* 0C098BF0 bf */
L_0C098BF2: BLKS(0x0C098BF2u);
	{ IF(0x0C098BF4u); ; /* slot nop */ UPD(0x0C098D90u, 3); goto L_0C098D90; }  /* 0C098BF2 bra */
L_0C098BF6: BLKS(0x0C098BF6u);
	r0 = 0xC098C34u;  /* 0C098BF6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C098BF8 add Rm,Rn */
	IF(0x0C098BFAu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C098BFCu, 3);  /* 0C098BFA mov.w @(r0,Rm),Rn */
	IF(0x0C098BFCu); { u32 tv_ = (r9 + 0x0C098C00u); u32 t_ = PHYS(tv_); IF(0x0C098BFEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C098C80u: goto L_0C098C80; case 0x0C098CB0u: goto L_0C098CB0; case 0x0C098CD0u: goto L_0C098CD0; case 0x0C098D90u: goto L_0C098D90; case 0x0C098E50u: goto L_0C098E50; default: JUMPD(tv_); } }  /* 0C098BFC braf Rn */
L_0C098C80: BLKS(0x0C098C80u);
	r7 = 0xB4u; UPD(0x0C098C82u, 1);  /* 0C098C80 mov.w @(disp,pc),Rn */
	IF(0x0C098C82u); MACL = r11 * r7;  /* 0C098C82 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C098C86u, 3);  /* 0C098C84 mov.l @(disp,pc),Rn */
	IF(0x0C098C86u); r4 = MACL;  /* 0C098C86 sts macl,Rn */
	IF(0x0C098C88u); MACL = r10 * r7;  /* 0C098C88 mul.l Rm,Rn */
	r8 = 0xA0u; UPD(0x0C098C8Cu, 4);  /* 0C098C8A mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C098C8C add Rm,Rn */
	IF(0x0C098C8Eu); r3 = MACL;  /* 0C098C8E sts macl,Rn */
	r4 += r8;  /* 0C098C90 add Rm,Rn */
	r3 += r1;  /* 0C098C92 add Rm,Rn */
	r8 += r3;  /* 0C098C94 add Rm,Rn */
	r4 += 0x2u;  /* 0C098C96 add #imm,Rn */
	r8 += 0x1u;  /* 0C098C98 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C098C9Cu, 8);  /* 0C098C9A mov.b @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r8); UPD(0x0C098C9Eu, 1);  /* 0C098C9C mov.b @Rm,Rn */
	T = (r13 & r12) == 0;  /* 0C098C9E tst Rm,Rn */
	if (T) { UPD(0x0C098D00u, 4); goto L_0C098D00; }  /* 0C098CA0 bt */
L_0C098CA2: BLKS(0x0C098CA2u);
	r6 = R32(r3 + 0xCu); UPD(0x0C098CA4u, 1);  /* 0C098CA2 mov.l @(disp,Rm),Rn */
	r11 = 0x1u;  /* 0C098CA4 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C098CA8u, 2);  /* 0C098CA6 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C098CA8 add #imm,Rn */
	IF(0x0C098CAAu); W16(r0 + r3, r11); UPD(0x0C098CACu, 2);  /* 0C098CAA mov.w Rm,@(r0,Rn) */
	{ W32(r3 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C098BA0u, 3); goto L_0C098BA0; }  /* 0C098CAC bra */
L_0C098CB0: BLKS(0x0C098CB0u);
	r0 = 0xB4u; UPD(0x0C098CB2u, 1);  /* 0C098CB0 mov.w @(disp,pc),Rn */
	IF(0x0C098CB2u); MACL = r10 * r0;  /* 0C098CB2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C098CB6u, 3);  /* 0C098CB4 mov.l @(disp,pc),Rn */
	IF(0x0C098CB6u); r8 = MACL;  /* 0C098CB6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C098CBAu, 2);  /* 0C098CB8 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C098CBA add Rm,Rn */
	r2 += r8;  /* 0C098CBC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C098CC0u, 3);  /* 0C098CBE mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C098CC0 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C098CC2 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C098CC4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C098D00u, 6); goto L_0C098D00; } UPD(0x0C098CCAu, 1); goto L_0C098CCA; }  /* 0C098CC6 bf/s */
L_0C098CCA: BLKS(0x0C098CCAu);
	r9 = 0x0u;  /* 0C098CCA mov #imm,Rn */
	{ W8(r2, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C09836Eu, 4); goto L_0C09836E; }  /* 0C098CCC bra */
L_0C098CD0: BLKS(0x0C098CD0u);
	r7 = 0xB4u; UPD(0x0C098CD2u, 1);  /* 0C098CD0 mov.w @(disp,pc),Rn */
	IF(0x0C098CD2u); MACL = r11 * r7;  /* 0C098CD2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C098CD6u, 3);  /* 0C098CD4 mov.l @(disp,pc),Rn */
	IF(0x0C098CD6u); r1 = MACL;  /* 0C098CD6 sts macl,Rn */
	IF(0x0C098CD8u); MACL = r10 * r7;  /* 0C098CD8 mul.l Rm,Rn */
	r6 = 0xA0u; UPD(0x0C098CDCu, 4);  /* 0C098CDA mov.w @(disp,pc),Rn */
	r1 += r5;  /* 0C098CDC add Rm,Rn */
	IF(0x0C098CDEu); r12 = MACL;  /* 0C098CDE sts macl,Rn */
	r1 += r6;  /* 0C098CE0 add Rm,Rn */
	r12 += r5;  /* 0C098CE2 add Rm,Rn */
	r6 += r12;  /* 0C098CE4 add Rm,Rn */
	r1 += 0x2u;  /* 0C098CE6 add #imm,Rn */
	r6 += 0x1u;  /* 0C098CE8 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C098CECu, 8);  /* 0C098CEA mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C098CEEu, 1);  /* 0C098CEC mov.b @Rm,Rn */
	T = (r4 & r8) == 0;  /* 0C098CEE tst Rm,Rn */
	if (T) { UPD(0x0C098D80u, 4); goto L_0C098D80; }  /* 0C098CF0 bt */
L_0C098CF2: BLKS(0x0C098CF2u);
	r4 = r10;  /* 0C098CF2 mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C098CF6u, 2);  /* 0C098CF4 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C098CF6 mov #imm,Rn */
	IF(0x0C098CF8u); { u32 t_ = r9; PR = 0x0C098CFCu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C098CFCu); }  /* 0C098CF8 jsr @Rn */
L_0C098CFC: BLKS(0x0C098CFCu);
	T = (r0 & r0) == 0;  /* 0C098CFC tst Rm,Rn */
	if (!T) { UPD(0x0C098D08u, 4); goto L_0C098D08; }  /* 0C098CFE bf */
L_0C098D00: BLKS(0x0C098D00u);
	r13 = 0xFFFFE698u; UPD(0x0C098D02u, 1);  /* 0C098D00 mov.w @(disp,pc),Rn */
	IF(0x0C098D02u); { u32 tv_ = (r13 + 0x0C098D06u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098D02 braf Rn */
L_0C098D08: BLKS(0x0C098D08u);
	r0 = R32(r12 + 0x30u); UPD(0x0C098D0Au, 1);  /* 0C098D08 mov.l @(disp,Rm),Rn */
	IF(0x0C098D0Au); T = (s32)r0 > 0;  /* 0C098D0A cmp/pl Rn */
	IF(0x0C098D0Cu); r8 = T;  /* 0C098D0C movt Rn */
	T = (r8 & r8) == 0;  /* 0C098D0E tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C098D10 mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C098D12 negc Rm,Rn */
	r2 = 0xC1CCAF0u; UPD(0x0C098D16u, 6);  /* 0C098D14 mov.l @(disp,pc),Rn */
	IF(0x0C098D16u); r0 <<= 2;  /* 0C098D16 shll2 Rn */
	r13 = R32(r12 + 0xCu); UPD(0x0C098D1Au, 2);  /* 0C098D18 mov.l @(disp,Rm),Rn */
	IF(0x0C098D1Au); r3 = R32(r0 + r2); UPD(0x0C098D1Cu, 1);  /* 0C098D1A mov.l @(r0,Rm),Rn */
	r13 += r13;  /* 0C098D1C add Rm,Rn */
	r3 += r13;  /* 0C098D1E add Rm,Rn */
	r3 += 0xFFFFFFEAu;  /* 0C098D20 add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C098D24u, 4);  /* 0C098D22 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C098D26u, 1);  /* 0C098D24 mov.w @Rm,Rn */
	r11 = 0x200000u; UPD(0x0C098D28u, 1);  /* 0C098D26 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C098D28 mov Rm,Rn */
	IF(0x0C098D2Au); { u32 t_ = r9; PR = 0x0C098D2Eu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C098D2Eu); }  /* 0C098D2A jsr @Rn */
L_0C098D2E: BLKS(0x0C098D2Eu);
	r5 = r11;  /* 0C098D2E mov Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C098D32u, 2);  /* 0C098D30 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C098D32 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C098D36u, 2);  /* 0C098D34 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C098D36 add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C098D3Au, 2);  /* 0C098D38 mov.l @(disp,pc),Rn */
	IF(0x0C098D3Au); { u32 t_ = r11; PR = 0x0C098D3Eu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C098D3Eu); }  /* 0C098D3A jsr @Rn */
L_0C098D3E: BLKS(0x0C098D3Eu);
	r7 = R32(r12 + 0x30u); UPD(0x0C098D40u, 1);  /* 0C098D3E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C098D40 add #imm,Rn */
	IF(0x0C098D42u); T = (s32)r7 > 0;  /* 0C098D42 cmp/pl Rn */
	IF(0x0C098D44u); r5 = T;  /* 0C098D44 movt Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C098D48u, 4);  /* 0C098D46 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C098D48 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C098D4A negc Rm,Rn */
	IF(0x0C098D4Cu); r1 <<= 2;  /* 0C098D4C shll2 Rn */
	r6 += r0;  /* 0C098D4E add Rm,Rn */
	r4 = 0xC1CCAF8u; UPD(0x0C098D52u, 5);  /* 0C098D50 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C098D52 mov Rm,Rn */
	IF(0x0C098D54u); r2 = R32(r0 + r4); UPD(0x0C098D56u, 2);  /* 0C098D54 mov.l @(r0,Rm),Rn */
	r7 = r13;  /* 0C098D56 mov Rm,Rn */
	r13 = 0xC7C1608u; UPD(0x0C098D5Au, 2);  /* 0C098D58 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C098D5A add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C098D5Eu, 2);  /* 0C098D5C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C098D5E mov #imm,Rn */
	W32(r15, r0); UPD(0x0C098D62u, 2);  /* 0C098D60 mov.l Rm,@Rn */
	IF(0x0C098D62u); { u32 t_ = r13; PR = 0x0C098D66u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C098D66u); }  /* 0C098D62 jsr @Rn */
L_0C098D66: BLKS(0x0C098D66u);
	r0 = 0x88u; UPD(0x0C098D68u, 1);  /* 0C098D66 mov.w @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C098D68 mov #imm,Rn */
	r1 = R32(r12 + 0xCu); UPD(0x0C098D6Cu, 2);  /* 0C098D6A mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C098D6C add #imm,Rn */
	IF(0x0C098D6Eu); W16(r0 + r12, r3); UPD(0x0C098D70u, 2);  /* 0C098D6E mov.w Rm,@(r0,Rn) */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C098B78u, 3); goto L_0C098B78; }  /* 0C098D70 bra */
L_0C098D80: BLKS(0x0C098D80u);
	r0 = 0x88u; UPD(0x0C098D82u, 1);  /* 0C098D80 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C098D82 mov #imm,Rn */
	r1 = R32(r12 + 0xCu); UPD(0x0C098D86u, 2);  /* 0C098D84 mov.l @(disp,Rm),Rn */
	IF(0x0C098D86u); W16(r0 + r12, r11); UPD(0x0C098D88u, 1);  /* 0C098D86 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C098B78u, 3); goto L_0C098B78; }  /* 0C098D88 bra */
L_0C098D90: BLKS(0x0C098D90u);
	r12 = 0xC0A9E40u; UPD(0x0C098D92u, 1);  /* 0C098D90 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C098D92 mov Rm,Rn */
	r5 = 0x6u;  /* 0C098D94 mov #imm,Rn */
	IF(0x0C098D96u); { u32 t_ = r12; PR = 0x0C098D9Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C098D9Au); }  /* 0C098D96 jsr @Rn */
L_0C098D9A: BLKS(0x0C098D9Au);
	T = (r0 & r0) == 0;  /* 0C098D9A tst Rm,Rn */
	if (T) { UPD(0x0C098E5Eu, 4); goto L_0C098E5E; }  /* 0C098D9C bt */
L_0C098D9E: BLKS(0x0C098D9Eu);
	r9 = 0xB4u; UPD(0x0C098DA0u, 1);  /* 0C098D9E mov.w @(disp,pc),Rn */
	IF(0x0C098DA0u); MACL = r10 * r9;  /* 0C098DA0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C098DA4u, 3);  /* 0C098DA2 mov.l @(disp,pc),Rn */
	IF(0x0C098DA4u); r9 = MACL;  /* 0C098DA4 sts macl,Rn */
	r9 += r3;  /* 0C098DA6 add Rm,Rn */
	r7 = R32(r9 + 0x30u); UPD(0x0C098DAAu, 3);  /* 0C098DA8 mov.l @(disp,Rm),Rn */
	IF(0x0C098DAAu); T = (s32)r7 > 0;  /* 0C098DAA cmp/pl Rn */
	IF(0x0C098DACu); r8 = T;  /* 0C098DAC movt Rn */
	T = (r8 & r8) == 0;  /* 0C098DAE tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C098DB0 mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C098DB2 negc Rm,Rn */
	r5 = 0xC1CCAF0u; UPD(0x0C098DB6u, 6);  /* 0C098DB4 mov.l @(disp,pc),Rn */
	IF(0x0C098DB6u); r0 <<= 2;  /* 0C098DB6 shll2 Rn */
	r11 = R32(r9 + 0xCu); UPD(0x0C098DBAu, 2);  /* 0C098DB8 mov.l @(disp,Rm),Rn */
	IF(0x0C098DBAu); r4 = R32(r0 + r5); UPD(0x0C098DBCu, 1);  /* 0C098DBA mov.l @(r0,Rm),Rn */
	r11 += r11;  /* 0C098DBC add Rm,Rn */
	r4 += r11;  /* 0C098DBE add Rm,Rn */
	r4 += 0xFFFFFFEAu;  /* 0C098DC0 add #imm,Rn */
	r13 = 0xC058060u; UPD(0x0C098DC4u, 4);  /* 0C098DC2 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C098DC6u, 1);  /* 0C098DC4 mov.w @Rm,Rn */
	r12 = 0x200000u; UPD(0x0C098DC8u, 1);  /* 0C098DC6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C098DC8 mov Rm,Rn */
	IF(0x0C098DCAu); { u32 t_ = r13; PR = 0x0C098DCEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C098DCEu); }  /* 0C098DCA jsr @Rn */
L_0C098DCE: BLKS(0x0C098DCEu);
	r5 = r12;  /* 0C098DCE mov Rm,Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C098DD2u, 2);  /* 0C098DD0 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C098DD2 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C098DD6u, 2);  /* 0C098DD4 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C098DD6 add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C098DDAu, 2);  /* 0C098DD8 mov.l @(disp,pc),Rn */
	IF(0x0C098DDAu); { u32 t_ = r12; PR = 0x0C098DDEu; r13 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C098DDEu); }  /* 0C098DDA jsr @Rn */
L_0C098DDE: BLKS(0x0C098DDEu);
	r6 = R32(r9 + 0x28u); UPD(0x0C098DE0u, 1);  /* 0C098DDE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C098DE0 add #imm,Rn */
	r6 += r0;  /* 0C098DE2 add Rm,Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C098DE6u, 3);  /* 0C098DE4 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C098DE6 mov #imm,Rn */
	IF(0x0C098DE8u); T = (s32)r0 > 0;  /* 0C098DE8 cmp/pl Rn */
	IF(0x0C098DEAu); r2 = T;  /* 0C098DEA movt Rn */
	T = (r2 & r2) == 0;  /* 0C098DEC tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C098DEE negc Rm,Rn */
	IF(0x0C098DF0u); r1 <<= 2;  /* 0C098DF0 shll2 Rn */
	r3 = 0xC1CCAF8u; UPD(0x0C098DF4u, 7);  /* 0C098DF2 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C098DF4 mov Rm,Rn */
	IF(0x0C098DF6u); r7 = R32(r0 + r3); UPD(0x0C098DF8u, 2);  /* 0C098DF6 mov.l @(r0,Rm),Rn */
	r6 += r7;  /* 0C098DF8 add Rm,Rn */
	r5 = 0x30000u; UPD(0x0C098DFCu, 2);  /* 0C098DFA mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C098DFC mov Rm,Rn */
	r11 = 0xC7C1608u; UPD(0x0C098E00u, 2);  /* 0C098DFE mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C098E02u, 1);  /* 0C098E00 mov.l Rm,@Rn */
	IF(0x0C098E02u); { u32 t_ = r11; PR = 0x0C098E06u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C098E06u); }  /* 0C098E02 jsr @Rn */
L_0C098E06: BLKS(0x0C098E06u);
	r0 = 0x88u; UPD(0x0C098E08u, 1);  /* 0C098E06 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C098E08 add #imm,Rn */
	IF(0x0C098E0Au); r4 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C098E0Cu, 2);  /* 0C098E0A mov.w @(r0,Rm),Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C098E0Eu, 1);  /* 0C098E0C mov.l @(disp,Rm),Rn */
	{ r1 += r4; /* slot add Rm,Rn */ UPD(0x0C098586u, 3); goto L_0C098586; }  /* 0C098E0E bra */
L_0C098E50: BLKS(0x0C098E50u);
	r12 = 0xC0A9E40u; UPD(0x0C098E52u, 1);  /* 0C098E50 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C098E52 mov Rm,Rn */
	r5 = 0x6u;  /* 0C098E54 mov #imm,Rn */
	IF(0x0C098E56u); { u32 t_ = r12; PR = 0x0C098E5Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C098E5Au); }  /* 0C098E56 jsr @Rn */
L_0C098E5A: BLKS(0x0C098E5Au);
	T = (r0 & r0) == 0;  /* 0C098E5A tst Rm,Rn */
	if (!T) { UPD(0x0C098E66u, 4); goto L_0C098E66; }  /* 0C098E5C bf */
L_0C098E5E: BLKS(0x0C098E5Eu);
	r13 = 0xFFFFE53Au; UPD(0x0C098E60u, 1);  /* 0C098E5E mov.w @(disp,pc),Rn */
	IF(0x0C098E60u); { u32 tv_ = (r13 + 0x0C098E64u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C098E60 braf Rn */
L_0C098E66: BLKS(0x0C098E66u);
	r8 = 0xB4u; UPD(0x0C098E68u, 1);  /* 0C098E66 mov.w @(disp,pc),Rn */
	IF(0x0C098E68u); MACL = r10 * r8;  /* 0C098E68 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C098E6Cu, 3);  /* 0C098E6A mov.l @(disp,pc),Rn */
	IF(0x0C098E6Cu); r8 = MACL;  /* 0C098E6C sts macl,Rn */
	r8 += r5;  /* 0C098E6E add Rm,Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C098E72u, 3);  /* 0C098E70 mov.l @(disp,Rm),Rn */
	IF(0x0C098E72u); T = (s32)r0 > 0;  /* 0C098E72 cmp/pl Rn */
	IF(0x0C098E74u); r13 = T;  /* 0C098E74 movt Rn */
	T = (r13 & r13) == 0;  /* 0C098E76 tst Rm,Rn */
	r13 = 0xFFFFFFFFu;  /* 0C098E78 mov #imm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C098E7A negc Rm,Rn */
	r11 = 0xC1CCAF0u; UPD(0x0C098E7Eu, 6);  /* 0C098E7C mov.l @(disp,pc),Rn */
	IF(0x0C098E7Eu); r0 <<= 2;  /* 0C098E7E shll2 Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C098E82u, 2);  /* 0C098E80 mov.l @(disp,Rm),Rn */
	IF(0x0C098E82u); r4 = R32(r0 + r11); UPD(0x0C098E84u, 1);  /* 0C098E82 mov.l @(r0,Rm),Rn */
	r2 += r2;  /* 0C098E84 add Rm,Rn */
	r4 += r2;  /* 0C098E86 add Rm,Rn */
	r4 += 0xFFFFFFEAu;  /* 0C098E88 add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C098E8Cu, 4);  /* 0C098E8A mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C098E8Eu, 1);  /* 0C098E8C mov.w @Rm,Rn */
	r12 = 0x200000u; UPD(0x0C098E90u, 1);  /* 0C098E8E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C098E90 mov Rm,Rn */
	IF(0x0C098E92u); { u32 t_ = r9; PR = 0x0C098E96u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C098E96u); }  /* 0C098E92 jsr @Rn */
L_0C098E96: BLKS(0x0C098E96u);
	r5 = r12;  /* 0C098E96 mov Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C098E9Au, 2);  /* 0C098E98 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C098E9A mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C098E9Eu, 2);  /* 0C098E9C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C098E9E add Rm,Rn */
	r6 = 0xFFFE0000u; UPD(0x0C098EA2u, 2);  /* 0C098EA0 mov.l @(disp,pc),Rn */
	IF(0x0C098EA2u); { u32 t_ = r12; PR = 0x0C098EA6u; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C098EA6u); }  /* 0C098EA2 jsr @Rn */
L_0C098EA6: BLKS(0x0C098EA6u);
	r3 = R32(r8 + 0x30u); UPD(0x0C098EA8u, 1);  /* 0C098EA6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C098EA8 add #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C098EACu, 2);  /* 0C098EAA mov.l @(disp,Rm),Rn */
	IF(0x0C098EACu); T = (s32)r3 > 0;  /* 0C098EAC cmp/pl Rn */
	IF(0x0C098EAEu); r7 = T;  /* 0C098EAE movt Rn */
	r6 += r0;  /* 0C098EB0 add Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C098EB2 tst Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C098EB4 negc Rm,Rn */
	r5 = 0xC1CCAF8u; UPD(0x0C098EB8u, 6);  /* 0C098EB6 mov.l @(disp,pc),Rn */
	IF(0x0C098EB8u); r0 <<= 2;  /* 0C098EB8 shll2 Rn */
	IF(0x0C098EBAu); r4 = R32(r0 + r5); UPD(0x0C098EBCu, 2);  /* 0C098EBA mov.l @(r0,Rm),Rn */
	r7 = r11;  /* 0C098EBC mov Rm,Rn */
	r11 = 0xC7C1608u; UPD(0x0C098EC0u, 2);  /* 0C098EBE mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C098EC0 add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C098EC4u, 2);  /* 0C098EC2 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C098EC4 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C098EC8u, 2);  /* 0C098EC6 mov.l Rm,@Rn */
	IF(0x0C098EC8u); { u32 t_ = r11; PR = 0x0C098ECCu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C098ECCu); }  /* 0C098EC8 jsr @Rn */
L_0C098ECC: BLKS(0x0C098ECCu);
	r2 = R32(r8 + 0xCu); UPD(0x0C098ECEu, 1);  /* 0C098ECC mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C098ECE add #imm,Rn */
	r0 = 0x88u; UPD(0x0C098ED2u, 2);  /* 0C098ED0 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C098ED2 add #imm,Rn */
	IF(0x0C098ED4u); W16(r0 + r8, r13); UPD(0x0C098ED6u, 2);  /* 0C098ED4 mov.w Rm,@(r0,Rn) */
	r1 = 0xFFFFE5D2u; UPD(0x0C098ED8u, 1);  /* 0C098ED6 mov.w @(disp,pc),Rn */
	IF(0x0C098ED8u); { u32 tv_ = (r1 + 0x0C098EDCu); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974AEu: goto L_0C0974AE; default: JUMPD(tv_); } }  /* 0C098ED8 braf Rn */
L_0C098EE0: BLKS(0x0C098EE0u);
	r12 = 0xC0A05D0u; UPD(0x0C098EE2u, 1);  /* 0C098EE0 mov.l @(disp,pc),Rn */
	IF(0x0C098EE2u); { u32 t_ = r12; PR = 0x0C098EE6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C098EE6u); }  /* 0C098EE2 jsr @Rn */
L_0C098EE6: BLKS(0x0C098EE6u);
	IF(0x0C098EE6u); T = (s32)r0 >= 0;  /* 0C098EE6 cmp/pz Rn */
	if (!T) { UPD(0x0C098F4Cu, 4); goto L_0C098F4C; }  /* 0C098EE8 bf */
L_0C098EEA: BLKS(0x0C098EEAu);
	r4 = 0xB4u; UPD(0x0C098EECu, 1);  /* 0C098EEA mov.w @(disp,pc),Rn */
	IF(0x0C098EECu); MACL = r10 * r4;  /* 0C098EEC mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C098EF0u, 3);  /* 0C098EEE mov.l @(disp,pc),Rn */
	IF(0x0C098EF0u); r8 = MACL;  /* 0C098EF0 sts macl,Rn */
	IF(0x0C098EF2u); MACL = r0 * r4;  /* 0C098EF2 mul.l Rm,Rn */
	r8 += r9;  /* 0C098EF4 add Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C098EF8u, 5);  /* 0C098EF6 mov.l @(disp,Rm),Rn */
	IF(0x0C098EF8u); r0 = MACL;  /* 0C098EF8 sts macl,Rn */
	r0 += r9;  /* 0C098EFA add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C098EFEu, 3);  /* 0C098EFC mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C098F00u, 1);  /* 0C098EFE mov.l @(disp,Rm),Rn */
	r5 += r12;  /* 0C098F00 add Rm,Rn */
	r13 = R32(r8 + 0x30u); UPD(0x0C098F04u, 2);  /* 0C098F02 mov.l @(disp,Rm),Rn */
	r11 += r13;  /* 0C098F04 add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C098F08u, 2);  /* 0C098F06 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C098F0Au, 1);  /* 0C098F08 mov.l Rm,@(disp,Rn) */
	r8 += 0x7Eu;  /* 0C098F0A add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C098F0Eu, 2);  /* 0C098F0C mov.w @Rm,Rn */
	IF(0x0C098F0Eu); MACL = r2 * r4;  /* 0C098F0E mul.l Rm,Rn */
	r6 = 0xA0u; UPD(0x0C098F12u, 3);  /* 0C098F10 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C098F12 add #imm,Rn */
	IF(0x0C098F14u); r1 = MACL;  /* 0C098F14 sts macl,Rn */
	r1 += r9;  /* 0C098F16 add Rm,Rn */
	r1 += r6;  /* 0C098F18 add Rm,Rn */
	r6 += r8;  /* 0C098F1A add Rm,Rn */
	r1 += 0x2u;  /* 0C098F1C add #imm,Rn */
	r6 += 0x1u;  /* 0C098F1E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C098F22u, 8);  /* 0C098F20 mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C098F24u, 1);  /* 0C098F22 mov.b @Rm,Rn */
	T = (r3 & r7) == 0;  /* 0C098F24 tst Rm,Rn */
	if (T) { UPD(0x0C09900Au, 4); goto L_0C09900A; }  /* 0C098F26 bt */
L_0C098F28: BLKS(0x0C098F28u);
	r9 = 0xC050D70u; UPD(0x0C098F2Au, 1);  /* 0C098F28 mov.l @(disp,pc),Rn */
	IF(0x0C098F2Au); { u32 t_ = r9; PR = 0x0C098F2Eu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C098F2Eu); }  /* 0C098F2A jsr @Rn */
L_0C098F2E: BLKS(0x0C098F2Eu);
	r7 = R32(r8 + 0x8u); UPD(0x0C098F30u, 1);  /* 0C098F2E mov.l @(disp,Rm),Rn */
	r0 += r0;  /* 0C098F30 add Rm,Rn */
	r7 += r0;  /* 0C098F32 add Rm,Rn */
	r7 += 0x2u;  /* 0C098F34 add #imm,Rn */
	r1 = 0xC0A03B0u; UPD(0x0C098F38u, 4);  /* 0C098F36 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C098F38 mov Rm,Rn */
	{ W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C098BA4u, 4); goto L_0C098BA4; }  /* 0C098F3A bra */
L_0C098F40: BLKS(0x0C098F40u);
	r8 = 0xC0A05D0u; UPD(0x0C098F42u, 1);  /* 0C098F40 mov.l @(disp,pc),Rn */
	IF(0x0C098F42u); { u32 t_ = r8; PR = 0x0C098F46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C098F46u); }  /* 0C098F42 jsr @Rn */
L_0C098F46: BLKS(0x0C098F46u);
	IF(0x0C098F46u); T = (s32)r0 >= 0;  /* 0C098F46 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0xEu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C098F54u, 4); goto L_0C098F54; } UPD(0x0C098F4Cu, 1); goto L_0C098F4C; }  /* 0C098F48 bt/s */
L_0C098F4C: BLKS(0x0C098F4Cu);
	r1 = 0xFFFFE67Eu; UPD(0x0C098F4Eu, 1);  /* 0C098F4C mov.w @(disp,pc),Rn */
	IF(0x0C098F4Eu); { u32 tv_ = (r1 + 0x0C098F52u); u32 t_ = PHYS(tv_); IF(0x0C098F50u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C098F4E braf Rn */
L_0C098F54: BLKS(0x0C098F54u);
	r2 = 0xB4u; UPD(0x0C098F56u, 1);  /* 0C098F54 mov.w @(disp,pc),Rn */
	IF(0x0C098F56u); MACL = r10 * r2;  /* 0C098F56 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C098F5Au, 3);  /* 0C098F58 mov.l @(disp,pc),Rn */
	IF(0x0C098F5Au); r6 = MACL;  /* 0C098F5A sts macl,Rn */
	IF(0x0C098F5Cu); MACL = r0 * r2;  /* 0C098F5C mul.l Rm,Rn */
	r6 += r5;  /* 0C098F5E add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C098F62u, 5);  /* 0C098F60 mov.l @(disp,Rm),Rn */
	IF(0x0C098F62u); r11 = MACL;  /* 0C098F62 sts macl,Rn */
	r11 += r5;  /* 0C098F64 add Rm,Rn */
	r13 = R32(r11 + 0x24u); UPD(0x0C098F68u, 3);  /* 0C098F66 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C098F6Au, 1);  /* 0C098F68 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x2Cu); UPD(0x0C098F6Cu, 1);  /* 0C098F6A mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C098F6C add Rm,Rn */
	r13 += r0;  /* 0C098F6E add Rm,Rn */
	W32(r6 + 0x24u, r13); UPD(0x0C098F72u, 3);  /* 0C098F70 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r4); UPD(0x0C098F74u, 1);  /* 0C098F72 mov.l Rm,@(disp,Rn) */
	r6 += 0x7Eu;  /* 0C098F74 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C098F78u, 2);  /* 0C098F76 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C098F78 add #imm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C098F7Cu, 2);  /* 0C098F7A mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C098F7C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C098FF0u, 4); goto L_0C098FF0; }  /* 0C098F7E bt */
L_0C098F80: BLKS(0x0C098F80u);
	r0 = 0xC098FC4u;  /* 0C098F80 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C098F82 add Rm,Rn */
	IF(0x0C098F84u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C098F86u, 3);  /* 0C098F84 mov.w @(r0,Rm),Rn */
	IF(0x0C098F86u); { u32 tv_ = (r12 + 0x0C098F8Au); u32 t_ = PHYS(tv_); IF(0x0C098F88u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C098FF0u: goto L_0C098FF0; case 0x0C099040u: goto L_0C099040; case 0x0C099070u: goto L_0C099070; case 0x0C09909Au: goto L_0C09909A; default: JUMPD(tv_); } }  /* 0C098F86 braf Rn */
L_0C098FF0: BLKS(0x0C098FF0u);
	r8 = 0xB4u; UPD(0x0C098FF2u, 1);  /* 0C098FF0 mov.w @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C098FF2 mov #imm,Rn */
	IF(0x0C098FF4u); MACL = r10 * r8;  /* 0C098FF4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C098FF8u, 4);  /* 0C098FF6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C098FFAu, 1);  /* 0C098FF8 mov.w @(disp,pc),Rn */
	IF(0x0C098FFAu); r8 = MACL;  /* 0C098FFA sts macl,Rn */
	r8 += r6;  /* 0C098FFC add Rm,Rn */
	IF(0x0C098FFEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099000u, 3);  /* 0C098FFE mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C099000 add #imm,Rn */
	r9 = r3 & 0xFF;  /* 0C099002 extu.b Rm,Rn */
	T = r9 > r7;  /* 0C099004 cmp/hi Rm,Rn */
	{ u32 c_ = T; IF(0x0C099008u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C099012u, 6); goto L_0C099012; } UPD(0x0C09900Au, 1); goto L_0C09900A; }  /* 0C099006 bt/s */
L_0C09900A: BLKS(0x0C09900Au);
	r13 = 0xFFFFE38Eu; UPD(0x0C09900Cu, 1);  /* 0C09900A mov.w @(disp,pc),Rn */
	IF(0x0C09900Cu); { u32 tv_ = (r13 + 0x0C099010u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C09900C braf Rn */
L_0C099012: BLKS(0x0C099012u);
	r5 = 0x0u;  /* 0C099012 mov #imm,Rn */
	IF(0x0C099014u); W8(r0 + r8, r5); UPD(0x0C099016u, 2);  /* 0C099014 mov.b Rm,@(r0,Rn) */
	r4 = r10;  /* 0C099016 mov Rm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C099018 add #imm,Rn */
	r13 = R32(r8 + 0xCu); UPD(0x0C09901Cu, 3);  /* 0C09901A mov.l @(disp,Rm),Rn */
	IF(0x0C09901Cu); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09901Eu, 1);  /* 0C09901C mov.w @(r0,Rm),Rn */
	r11 = 0xC0A0380u; UPD(0x0C099020u, 1);  /* 0C09901E mov.l @(disp,pc),Rn */
	r13 += r1;  /* 0C099020 add Rm,Rn */
	IF(0x0C099022u); { u32 t_ = r11; PR = 0x0C099026u; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C099026u); }  /* 0C099022 jsr @Rn */
L_0C099026: BLKS(0x0C099026u);
	r4 = R32(r8 + 0xCu); UPD(0x0C099028u, 1);  /* 0C099026 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C099028 tst Rm,Rn */
	if (!T) { UPD(0x0C0990C2u, 4); goto L_0C0990C2; }  /* 0C09902A bf */
L_0C09902C: BLKS(0x0C09902Cu);
	r1 = R32(r8 + 0x8u); UPD(0x0C09902Eu, 1);  /* 0C09902C mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFEu;  /* 0C09902E add #imm,Rn */
	UPD(0x0C099030u, 1);
L_0C099030: BLKS(0x0C099030u);
	r4 = r10;  /* 0C099030 mov Rm,Rn */
	r10 = 0xC0A03B0u; UPD(0x0C099034u, 2);  /* 0C099032 mov.l @(disp,pc),Rn */
	IF(0x0C099034u); { u32 t_ = r10; PR = 0x0C099038u; W32(r8 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C099038u); }  /* 0C099034 jsr @Rn */
L_0C099038: BLKS(0x0C099038u);
	{ r6 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C098386u, 3); goto L_0C098386; }  /* 0C099038 bra */
L_0C099040: BLKS(0x0C099040u);
	r0 = 0xB4u; UPD(0x0C099042u, 1);  /* 0C099040 mov.w @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C099042 mov #imm,Rn */
	IF(0x0C099044u); MACL = r10 * r0;  /* 0C099044 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C099048u, 4);  /* 0C099046 mov.l @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C099048 mov #imm,Rn */
	r12 = 0x9Cu; UPD(0x0C09904Cu, 2);  /* 0C09904A mov.w @(disp,pc),Rn */
	IF(0x0C09904Cu); r0 = MACL;  /* 0C09904C sts macl,Rn */
	r0 += r8;  /* 0C09904E add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C099052u, 3);  /* 0C099050 mov.l @(disp,Rm),Rn */
	IF(0x0C099052u); W8(r0 + r12, r6); UPD(0x0C099054u, 1);  /* 0C099052 mov.b Rm,@(r0,Rn) */
	r11 += 0x1u;  /* 0C099054 add #imm,Rn */
	r12 += 0xFFFFFFECu;  /* 0C099056 add #imm,Rn */
	IF(0x0C099058u); W16(r0 + r12, r9); UPD(0x0C09905Au, 3);  /* 0C099058 mov.w Rm,@(r0,Rn) */
	r1 = 0xFFFFE44Eu; UPD(0x0C09905Cu, 1);  /* 0C09905A mov.w @(disp,pc),Rn */
	IF(0x0C09905Cu); { u32 tv_ = (r1 + 0x0C099060u); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974AEu: goto L_0C0974AE; default: JUMPD(tv_); } }  /* 0C09905C braf Rn */
L_0C099070: BLKS(0x0C099070u);
	r7 = 0xB4u; UPD(0x0C099072u, 1);  /* 0C099070 mov.w @(disp,pc),Rn */
	IF(0x0C099072u); MACL = r11 * r7;  /* 0C099072 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C099076u, 3);  /* 0C099074 mov.l @(disp,pc),Rn */
	IF(0x0C099076u); r6 = MACL;  /* 0C099076 sts macl,Rn */
	IF(0x0C099078u); MACL = r10 * r7;  /* 0C099078 mul.l Rm,Rn */
	r9 = 0xA0u; UPD(0x0C09907Cu, 4);  /* 0C09907A mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C09907C add Rm,Rn */
	IF(0x0C09907Eu); r3 = MACL;  /* 0C09907E sts macl,Rn */
	r6 += r9;  /* 0C099080 add Rm,Rn */
	r3 += r2;  /* 0C099082 add Rm,Rn */
	r9 += r3;  /* 0C099084 add Rm,Rn */
	r6 += 0x2u;  /* 0C099086 add #imm,Rn */
	r9 += 0x1u;  /* 0C099088 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r6); UPD(0x0C09908Cu, 8);  /* 0C09908A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09908Eu, 1);  /* 0C09908C mov.b @Rm,Rn */
	T = (r12 & r0) == 0;  /* 0C09908E tst Rm,Rn */
	if (!T) { UPD(0x0C09909Au, 4); goto L_0C09909A; }  /* 0C099090 bf */
L_0C099092: BLKS(0x0C099092u);
	r0 = 0xFFFFE528u; UPD(0x0C099094u, 1);  /* 0C099092 mov.w @(disp,pc),Rn */
	IF(0x0C099094u); { u32 tv_ = (r0 + 0x0C099098u); u32 t_ = PHYS(tv_); IF(0x0C099096u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975C0u: goto L_0C0975C0; default: JUMPD(tv_); } }  /* 0C099094 braf Rn */
L_0C09909A: BLKS(0x0C09909Au);
	r11 = 0xB4u; UPD(0x0C09909Cu, 1);  /* 0C09909A mov.w @(disp,pc),Rn */
	IF(0x0C09909Cu); MACL = r10 * r11;  /* 0C09909C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0990A0u, 3);  /* 0C09909E mov.l @(disp,pc),Rn */
	IF(0x0C0990A0u); r11 = MACL;  /* 0C0990A0 sts macl,Rn */
	r11 += r5;  /* 0C0990A2 add Rm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C0990A6u, 3);  /* 0C0990A4 mov.l @(disp,Rm),Rn */
	r13 = 0xC1CCAE8u; UPD(0x0C0990A8u, 1);  /* 0C0990A6 mov.l @(disp,pc),Rn */
	IF(0x0C0990A8u); r0 <<= 2;  /* 0C0990A8 shll2 Rn */
	IF(0x0C0990AAu); r4 = R32(r0 + r13); UPD(0x0C0990ACu, 2);  /* 0C0990AA mov.l @(r0,Rm),Rn */
	r3 = 0xC0A0380u; UPD(0x0C0990AEu, 1);  /* 0C0990AC mov.l @(disp,pc),Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C0990B0u, 1);  /* 0C0990AE mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A9E40u; UPD(0x0C0990B2u, 1);  /* 0C0990B0 mov.l @(disp,pc),Rn */
	IF(0x0C0990B2u); { u32 t_ = r3; PR = 0x0C0990B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0990B6u); }  /* 0C0990B2 jsr @Rn */
L_0C0990B6: BLKS(0x0C0990B6u);
	r4 = r10;  /* 0C0990B6 mov Rm,Rn */
	r5 = 0xAu;  /* 0C0990B8 mov #imm,Rn */
	IF(0x0C0990BAu); { u32 t_ = r8; PR = 0x0C0990BEu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0990BEu); }  /* 0C0990BA jsr @Rn */
L_0C0990BE: BLKS(0x0C0990BEu);
	T = (r0 & r0) == 0;  /* 0C0990BE tst Rm,Rn */
	if (!T) { UPD(0x0C0990CAu, 4); goto L_0C0990CA; }  /* 0C0990C0 bf */
L_0C0990C2: BLKS(0x0C0990C2u);
	r13 = 0xFFFFE2D6u; UPD(0x0C0990C4u, 1);  /* 0C0990C2 mov.w @(disp,pc),Rn */
	IF(0x0C0990C4u); { u32 tv_ = (r13 + 0x0C0990C8u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C0990C4 braf Rn */
L_0C0990CA: BLKS(0x0C0990CAu);
	r12 = 0x9Cu; UPD(0x0C0990CCu, 1);  /* 0C0990CA mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0990CC mov #imm,Rn */
	r12 += r11;  /* 0C0990CE add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0990D2u, 3);  /* 0C0990D0 mov.b @Rm,Rn */
	r2 &= r0;  /* 0C0990D2 and Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C0990D6u, 2);  /* 0C0990D4 mov.l @(disp,Rm),Rn */
	r1 = 0xC1CCB64u; UPD(0x0C0990D8u, 1);  /* 0C0990D6 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0990D8 and #imm,r0 */
	IF(0x0C0990DAu); r0 <<= 2;  /* 0C0990DA shll2 Rn */
	UPD(0x0C0990DCu, 2);
L_0C0990DC: BLKS(0x0C0990DCu);
	IF(0x0C0990DCu); r5 = R32(r0 + r1); UPD(0x0C0990DEu, 1);  /* 0C0990DC mov.l @(r0,Rm),Rn */
	IF(0x0C0990DEu); r2 <<= 2;  /* 0C0990DE shll2 Rn */
	r0 = r2;  /* 0C0990E0 mov Rm,Rn */
	IF(0x0C0990E2u); r13 = R32(r0 + r5); UPD(0x0C0990E4u, 3);  /* 0C0990E2 mov.l @(r0,Rm),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r4 = v_; } UPD(0x0C0990E6u, 1);  /* 0C0990E4 mov.l @Rm+,Rn */
	r2 = R32(r11 + 0x24u); UPD(0x0C0990E8u, 1);  /* 0C0990E6 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r0 = v_; } UPD(0x0C0990EAu, 1);  /* 0C0990E8 mov.l @Rm+,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C0990ECu, 1);  /* 0C0990EA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0990EEu, 1);  /* 0C0990EC mov.l Rm,@(disp,Rn) */
	r9 += r0;  /* 0C0990EE add Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0990F2u, 2);  /* 0C0990F0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0580D0u; UPD(0x0C0990F4u, 1);  /* 0C0990F2 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C0990F4 add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0990F8u, 2);  /* 0C0990F6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0990F8u); { u32 t_ = r0; PR = 0x0C0990FCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C0990FCu); }  /* 0C0990F8 jsr @Rn */
L_0C0990FC: BLKS(0x0C0990FCu);
	r4 = r10;  /* 0C0990FC mov Rm,Rn */
	r10 = 0xC058180u; UPD(0x0C099100u, 2);  /* 0C0990FE mov.l @(disp,pc),Rn */
	IF(0x0C099100u); { u32 t_ = r10; PR = 0x0C099104u; IF(0x0C099102u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058180, 0x0C058180u, 0x0C099104u); }  /* 0C099100 jsr @Rn */
L_0C099104: BLKS(0x0C099104u);
	r10 = 0x86u; UPD(0x0C099106u, 1);  /* 0C099104 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099106 add #imm,Rn */
	r10 += r11;  /* 0C099108 add Rm,Rn */
	r6 = R32(r13); UPD(0x0C09910Cu, 3);  /* 0C09910A mov.l @Rm,Rn */
	r4 = 0x3u;  /* 0C09910C mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C099110u, 2);  /* 0C09910E mov.w @Rm,Rn */
	W32(r15, r6); UPD(0x0C099112u, 1);  /* 0C099110 mov.l Rm,@Rn */
	r3 = 0xC177C74u; UPD(0x0C099114u, 1);  /* 0C099112 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C099114 mov Rm,Rn */
	r9 = 0xC7C1710u; UPD(0x0C099118u, 2);  /* 0C099116 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09911Au, 1);  /* 0C099118 mov.l Rm,@(disp,Rn) */
	IF(0x0C09911Au); { u32 t_ = r9; PR = 0x0C09911Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C09911Eu); }  /* 0C09911A jsr @Rn */
L_0C09911E: BLKS(0x0C09911Eu);
	r2 = 0xA2u; UPD(0x0C099120u, 1);  /* 0C09911E mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C099120 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C099124u, 2);  /* 0C099122 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C099126u, 1);  /* 0C099124 mov.w @Rm,Rn */
	r5 += 0x1u;  /* 0C099126 add #imm,Rn */
	IF(0x0C099128u); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09912Au, 2);  /* 0C099128 mov.b @(r0,Rm),Rn */
	r4 += r13;  /* 0C09912A add Rm,Rn */
	W8(r12, r5); UPD(0x0C09912Eu, 2);  /* 0C09912C mov.b Rm,@Rn */
	r13 = 0xFFFFE85Au; UPD(0x0C099130u, 1);  /* 0C09912E mov.w @(disp,pc),Rn */
	IF(0x0C099130u); { u32 tv_ = (r13 + 0x0C099134u); u32 t_ = PHYS(tv_); W16(r10, r4); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09798Eu: goto L_0C09798E; default: JUMPD(tv_); } }  /* 0C099130 braf Rn */
L_0C099140: BLKS(0x0C099140u);
	r12 = 0xC0A05D0u; UPD(0x0C099142u, 1);  /* 0C099140 mov.l @(disp,pc),Rn */
	IF(0x0C099142u); { u32 t_ = r12; PR = 0x0C099146u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C099146u); }  /* 0C099142 jsr @Rn */
L_0C099146: BLKS(0x0C099146u);
	IF(0x0C099146u); T = (s32)r0 >= 0;  /* 0C099146 cmp/pz Rn */
	{ u32 c_ = T; r9 = 0x15u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099154u, 4); goto L_0C099154; } goto L_0C09914C; }  /* 0C099148 bt/s */
L_0C09914C: BLKS(0x0C09914Cu);
	r1 = 0xFFFFE47Eu; UPD(0x0C09914Eu, 2);  /* 0C09914C mov.w @(disp,pc),Rn */
	IF(0x0C09914Eu); { u32 tv_ = (r1 + 0x0C099152u); u32 t_ = PHYS(tv_); IF(0x0C099150u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C09914E braf Rn */
L_0C099154: BLKS(0x0C099154u);
	r2 = 0xB4u; UPD(0x0C099156u, 1);  /* 0C099154 mov.w @(disp,pc),Rn */
	IF(0x0C099156u); MACL = r10 * r2;  /* 0C099156 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09915Au, 3);  /* 0C099158 mov.l @(disp,pc),Rn */
	IF(0x0C09915Au); r6 = MACL;  /* 0C09915A sts macl,Rn */
	IF(0x0C09915Cu); MACL = r0 * r2;  /* 0C09915C mul.l Rm,Rn */
	r6 += r13;  /* 0C09915E add Rm,Rn */
	r4 = R32(r6 + 0x2Cu); UPD(0x0C099162u, 5);  /* 0C099160 mov.l @(disp,Rm),Rn */
	IF(0x0C099162u); r3 = MACL;  /* 0C099162 sts macl,Rn */
	r3 += r13;  /* 0C099164 add Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C099168u, 3);  /* 0C099166 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x28u); UPD(0x0C09916Au, 1);  /* 0C099168 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C09916A add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C09916Eu, 2);  /* 0C09916C mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C09916E add Rm,Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C099172u, 2);  /* 0C099170 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x28u, r8); UPD(0x0C099174u, 1);  /* 0C099172 mov.l Rm,@(disp,Rn) */
	r6 += 0x7Eu;  /* 0C099174 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C099178u, 2);  /* 0C099176 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C099178 add #imm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C09917Cu, 2);  /* 0C09917A mov.l @(disp,Rm),Rn */
	T = r2 > r9;  /* 0C09917C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0991F0u, 4); goto L_0C0991F0; }  /* 0C09917E bt */
L_0C099180: BLKS(0x0C099180u);
	r0 = 0xC0991C4u;  /* 0C099180 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C099182 add Rm,Rn */
	IF(0x0C099184u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C099186u, 3);  /* 0C099184 mov.w @(r0,Rm),Rn */
	IF(0x0C099186u); { u32 tv_ = (r5 + 0x0C09918Au); u32 t_ = PHYS(tv_); IF(0x0C099188u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C099040u: goto L_0C099040; case 0x0C0991F0u: goto L_0C0991F0; case 0x0C099230u: goto L_0C099230; case 0x0C09925Au: goto L_0C09925A; default: JUMPD(tv_); } }  /* 0C099186 braf Rn */
L_0C0991F0: BLKS(0x0C0991F0u);
	r2 = 0xB4u; UPD(0x0C0991F2u, 1);  /* 0C0991F0 mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0991F2 mov #imm,Rn */
	IF(0x0C0991F4u); MACL = r10 * r2;  /* 0C0991F4 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0991F8u, 4);  /* 0C0991F6 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C0991FAu, 1);  /* 0C0991F8 mov.w @(disp,pc),Rn */
	IF(0x0C0991FAu); r8 = MACL;  /* 0C0991FA sts macl,Rn */
	r8 += r13;  /* 0C0991FC add Rm,Rn */
	IF(0x0C0991FEu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099200u, 3);  /* 0C0991FE mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C099200 add #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C099202 extu.b Rm,Rn */
	T = r7 > r3;  /* 0C099204 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C099208u); W8(r0 + r8, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C099282u, 6); goto L_0C099282; } UPD(0x0C09920Au, 1); goto L_0C09920A; }  /* 0C099206 bf/s */
L_0C09920A: BLKS(0x0C09920Au);
	r9 = 0x0u;  /* 0C09920A mov #imm,Rn */
	IF(0x0C09920Cu); W8(r0 + r8, r9); UPD(0x0C09920Eu, 2);  /* 0C09920C mov.b Rm,@(r0,Rn) */
	r4 = r10;  /* 0C09920E mov Rm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C099210 add #imm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C099214u, 3);  /* 0C099212 mov.l @(disp,Rm),Rn */
	IF(0x0C099214u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C099216u, 1);  /* 0C099214 mov.w @(r0,Rm),Rn */
	r11 = 0xC0A0380u; UPD(0x0C099218u, 1);  /* 0C099216 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C099218 add Rm,Rn */
	IF(0x0C09921Au); { u32 t_ = r11; PR = 0x0C09921Eu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09921Eu); }  /* 0C09921A jsr @Rn */
L_0C09921E: BLKS(0x0C09921Eu);
	r5 = R32(r8 + 0xCu); UPD(0x0C099220u, 1);  /* 0C09921E mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C099220 tst Rm,Rn */
	if (!T) { UPD(0x0C099282u, 4); goto L_0C099282; }  /* 0C099222 bf */
L_0C099224: BLKS(0x0C099224u);
	r1 = R32(r8 + 0x8u); UPD(0x0C099226u, 1);  /* 0C099224 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(0x0C099030u, 3); goto L_0C099030; }  /* 0C099226 bra */
L_0C099230: BLKS(0x0C099230u);
	r5 = 0xB4u; UPD(0x0C099232u, 1);  /* 0C099230 mov.w @(disp,pc),Rn */
	IF(0x0C099232u); MACL = r11 * r5;  /* 0C099232 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C099236u, 3);  /* 0C099234 mov.l @(disp,pc),Rn */
	IF(0x0C099236u); r13 = MACL;  /* 0C099236 sts macl,Rn */
	IF(0x0C099238u); MACL = r10 * r5;  /* 0C099238 mul.l Rm,Rn */
	r4 = 0xA0u; UPD(0x0C09923Cu, 4);  /* 0C09923A mov.w @(disp,pc),Rn */
	r13 += r2;  /* 0C09923C add Rm,Rn */
	IF(0x0C09923Eu); r3 = MACL;  /* 0C09923E sts macl,Rn */
	r13 += r4;  /* 0C099240 add Rm,Rn */
	r3 += r2;  /* 0C099242 add Rm,Rn */
	r4 += r3;  /* 0C099244 add Rm,Rn */
	r13 += 0x2u;  /* 0C099246 add #imm,Rn */
	r4 += 0x1u;  /* 0C099248 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C09924Cu, 8);  /* 0C09924A mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C09924Eu, 1);  /* 0C09924C mov.b @Rm,Rn */
	T = (r7 & r8) == 0;  /* 0C09924E tst Rm,Rn */
	if (!T) { UPD(0x0C09925Au, 4); goto L_0C09925A; }  /* 0C099250 bf */
L_0C099252: BLKS(0x0C099252u);
	r0 = 0xFFFFE368u; UPD(0x0C099254u, 1);  /* 0C099252 mov.w @(disp,pc),Rn */
	IF(0x0C099254u); { u32 tv_ = (r0 + 0x0C099258u); u32 t_ = PHYS(tv_); IF(0x0C099256u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975C0u: goto L_0C0975C0; default: JUMPD(tv_); } }  /* 0C099254 braf Rn */
L_0C09925A: BLKS(0x0C09925Au);
	r8 = 0xB4u; UPD(0x0C09925Cu, 1);  /* 0C09925A mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C09925C mov Rm,Rn */
	IF(0x0C09925Eu); MACL = r10 * r8;  /* 0C09925E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099262u, 4);  /* 0C099260 mov.l @(disp,pc),Rn */
	IF(0x0C099262u); r11 = MACL;  /* 0C099262 sts macl,Rn */
	r11 += r0;  /* 0C099264 add Rm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C099268u, 3);  /* 0C099266 mov.l @(disp,Rm),Rn */
	r6 = 0xC1CCB80u; UPD(0x0C09926Au, 1);  /* 0C099268 mov.l @(disp,pc),Rn */
	IF(0x0C09926Au); r0 <<= 2;  /* 0C09926A shll2 Rn */
	r3 = 0xC0A0380u; UPD(0x0C09926Eu, 2);  /* 0C09926C mov.l @(disp,pc),Rn */
	IF(0x0C09926Eu); r9 = R32(r0 + r6); UPD(0x0C099270u, 1);  /* 0C09926E mov.l @(r0,Rm),Rn */
	r12 = 0xC0A9E40u; UPD(0x0C099272u, 1);  /* 0C099270 mov.l @(disp,pc),Rn */
	IF(0x0C099272u); { u32 t_ = r3; PR = 0x0C099276u; W32(r11 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C099276u); }  /* 0C099272 jsr @Rn */
L_0C099276: BLKS(0x0C099276u);
	r4 = r10;  /* 0C099276 mov Rm,Rn */
	r5 = 0xAu;  /* 0C099278 mov #imm,Rn */
	IF(0x0C09927Au); { u32 t_ = r12; PR = 0x0C09927Eu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09927Eu); }  /* 0C09927A jsr @Rn */
L_0C09927E: BLKS(0x0C09927Eu);
	T = (r0 & r0) == 0;  /* 0C09927E tst Rm,Rn */
	if (!T) { UPD(0x0C09928Au, 4); goto L_0C09928A; }  /* 0C099280 bf */
L_0C099282: BLKS(0x0C099282u);
	r13 = 0xFFFFE116u; UPD(0x0C099284u, 1);  /* 0C099282 mov.w @(disp,pc),Rn */
	IF(0x0C099284u); { u32 tv_ = (r13 + 0x0C099288u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C099284 braf Rn */
L_0C09928A: BLKS(0x0C09928Au);
	r12 = 0x9Cu; UPD(0x0C09928Cu, 1);  /* 0C09928A mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C09928C mov #imm,Rn */
	r12 += r11;  /* 0C09928E add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C099292u, 3);  /* 0C099290 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C099294u, 1);  /* 0C099292 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C099294 and #imm,r0 */
	r1 = 0xC1CCBACu; UPD(0x0C099298u, 2);  /* 0C099296 mov.l @(disp,pc),Rn */
	r2 &= r7;  /* 0C099298 and Rm,Rn */
	{ IF(0x0C09929Cu); r0 <<= 2; /* slot shll2 Rn */ UPD(0x0C0990DCu, 4); goto L_0C0990DC; }  /* 0C09929A bra */
L_0C0992A0: BLKS(0x0C0992A0u);
	r11 = 0xC0A05D0u; UPD(0x0C0992A2u, 1);  /* 0C0992A0 mov.l @(disp,pc),Rn */
	IF(0x0C0992A2u); { u32 t_ = r11; PR = 0x0C0992A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0992A6u); }  /* 0C0992A2 jsr @Rn */
L_0C0992A6: BLKS(0x0C0992A6u);
	IF(0x0C0992A6u); T = (s32)r0 >= 0;  /* 0C0992A6 cmp/pz Rn */
	if (T) { UPD(0x0C0992B2u, 4); goto L_0C0992B2; }  /* 0C0992A8 bt */
L_0C0992AA: BLKS(0x0C0992AAu);
	r1 = 0xFFFFE320u; UPD(0x0C0992ACu, 1);  /* 0C0992AA mov.w @(disp,pc),Rn */
	IF(0x0C0992ACu); { u32 tv_ = (r1 + 0x0C0992B0u); u32 t_ = PHYS(tv_); IF(0x0C0992AEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C0992AC braf Rn */
L_0C0992B2: BLKS(0x0C0992B2u);
	r2 = 0xB4u; UPD(0x0C0992B4u, 1);  /* 0C0992B2 mov.w @(disp,pc),Rn */
	IF(0x0C0992B4u); MACL = r10 * r2;  /* 0C0992B4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0992B8u, 3);  /* 0C0992B6 mov.l @(disp,pc),Rn */
	IF(0x0C0992B8u); r3 = MACL;  /* 0C0992B8 sts macl,Rn */
	IF(0x0C0992BAu); MACL = r0 * r2;  /* 0C0992BA mul.l Rm,Rn */
	r3 += r6;  /* 0C0992BC add Rm,Rn */
	r1 = 0xA1u; UPD(0x0C0992C0u, 5);  /* 0C0992BE mov.w @(disp,pc),Rn */
	IF(0x0C0992C0u); r0 = MACL;  /* 0C0992C0 sts macl,Rn */
	r0 += r6;  /* 0C0992C2 add Rm,Rn */
	r8 = R32(r0 + 0x24u); UPD(0x0C0992C6u, 3);  /* 0C0992C4 mov.l @(disp,Rm),Rn */
	r12 = R32(r0 + 0x28u); UPD(0x0C0992C8u, 1);  /* 0C0992C6 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C0992CAu, 1);  /* 0C0992C8 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0992CCu, 1);  /* 0C0992CA mov.l @(disp,Rm),Rn */
	r8 += r4;  /* 0C0992CC add Rm,Rn */
	IF(0x0C0992CEu); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0992D0u, 2);  /* 0C0992CE mov.b @(r0,Rm),Rn */
	r12 += r5;  /* 0C0992D0 add Rm,Rn */
	r0 &= 0x40u;  /* 0C0992D2 and #imm,r0 */
	W32(r3 + 0x24u, r8); UPD(0x0C0992D6u, 3);  /* 0C0992D4 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0992D6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0992E0u, 4); goto L_0C0992E0; } UPD(0x0C0992DCu, 1); goto L_0C0992DC; }  /* 0C0992D8 bf/s */
L_0C0992DC: BLKS(0x0C0992DCu);
	{ r2 = r3; /* slot mov Rm,Rn */ UPD(0x0C0993C0u, 3); goto L_0C0993C0; }  /* 0C0992DC bra */
L_0C0992E0: BLKS(0x0C0992E0u);
	r3 += 0x50u;  /* 0C0992E0 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C0992E4u, 2);  /* 0C0992E2 mov.l @Rm,Rn */
	r1 += 0x5Fu;  /* 0C0992E4 add #imm,Rn */
	T = r2 == r1;  /* 0C0992E6 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0992EEu, 5); goto L_0C0992EE; } goto L_0C0992EC; }  /* 0C0992E8 bt/s */
L_0C0992EC: BLKS(0x0C0992ECu);
	W32(r3, r2); UPD(0x0C0992EEu, 2);  /* 0C0992EC mov.l Rm,@Rn */
L_0C0992EE: BLKS(0x0C0992EEu);
	r3 = 0xB4u; UPD(0x0C0992F0u, 1);  /* 0C0992EE mov.w @(disp,pc),Rn */
	IF(0x0C0992F0u); MACL = r10 * r3;  /* 0C0992F0 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0992F4u, 3);  /* 0C0992F2 mov.l @(disp,pc),Rn */
	IF(0x0C0992F4u); r2 = MACL;  /* 0C0992F4 sts macl,Rn */
	r2 += r9;  /* 0C0992F6 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0992FAu, 3);  /* 0C0992F8 mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C0992FA add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0992FEu, 2);  /* 0C0992FC mov.b @Rm,Rn */
	r1 = r7 & 0xFF;  /* 0C0992FE extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C099300 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099390u, 5); goto L_0C099390; } goto L_0C099306; }  /* 0C099302 bt/s */
L_0C099306: BLKS(0x0C099306u);
	T = r0 == 0x1u;  /* 0C099306 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0993A0u, 5); goto L_0C0993A0; }  /* 0C099308 bf */
L_0C09930A: BLKS(0x0C09930Au);
	r4 = r3;  /* 0C09930A mov Rm,Rn */
	r3 = 0x88u; UPD(0x0C09930Eu, 2);  /* 0C09930C mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09930E mov #imm,Rn */
	W32(r14, r5); UPD(0x0C099312u, 2);  /* 0C099310 mov.l Rm,@Rn */
	r3 += r2;  /* 0C099312 add Rm,Rn */
	r3 += 0x2u;  /* 0C099314 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C099318u, 3);  /* 0C099316 mov.w @Rm,Rn */
	r3 += 0xFFFFFFFEu;  /* 0C099318 add #imm,Rn */
	r6 = r5;  /* 0C09931A mov Rm,Rn */
	UPD(0x0C09931Cu, 2);
L_0C09931C: BLKS(0x0C09931Cu);
	IF(0x0C09931Cu); MACL = r10 * r4;  /* 0C09931C mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C099320u, 3);  /* 0C09931E mov.w @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C099320 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C099322 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C099326u); r7 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C099330u, 5); goto L_0C099330; } goto L_0C099328; }  /* 0C099324 bf/s */
L_0C099328: BLKS(0x0C099328u);
	r13 = r2;  /* 0C099328 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09932A add #imm,Rn */
	W16(r3, r13); UPD(0x0C09932Eu, 4);  /* 0C09932C mov.w Rm,@Rn */
	r2 = r13;  /* 0C09932E mov Rm,Rn */
	UPD(0x0C099330u, 1);
L_0C099330: BLKS(0x0C099330u);
	r9 = (u32)(s32)(s16)r2;  /* 0C099330 exts.w Rm,Rn */
	T = (s32)r9 >= (s32)r5;  /* 0C099332 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C099340u, 5); goto L_0C099340; } UPD(0x0C099338u, 1); goto L_0C099338; }  /* 0C099334 bt/s */
L_0C099338: BLKS(0x0C099338u);
	r11 = r2;  /* 0C099338 mov Rm,Rn */
	r11 += 0x1u;  /* 0C09933A add #imm,Rn */
	W16(r3, r11); UPD(0x0C09933Eu, 3);  /* 0C09933C mov.w Rm,@Rn */
	r0 = R32(r14); UPD(0x0C099340u, 1);  /* 0C09933E mov.l @Rm,Rn */
L_0C099340: BLKS(0x0C099340u);
	r1 = 0x1Fu;  /* 0C099340 mov #imm,Rn */
	r0 += 0x1u;  /* 0C099342 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C099344 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C099348u, 4);  /* 0C099346 mov.l Rm,@Rn */
	r12 = R32(r14); UPD(0x0C09934Au, 1);  /* 0C099348 mov.l @Rm,Rn */
	T = (s32)r12 > (s32)r1;  /* 0C09934A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09931Cu, 4); goto L_0C09931C; }  /* 0C09934C bf */
L_0C09934E: BLKS(0x0C09934Eu);
	r1 += 0x69u;  /* 0C09934E add #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099352u, 2);  /* 0C099350 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C099352 add Rm,Rn */
	r1 += r0;  /* 0C099354 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r6 = v_; } UPD(0x0C099358u, 3);  /* 0C099356 mov.w @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C09935Au, 1);  /* 0C099358 mov.w @Rm,Rn */
	T = r6 == r4;  /* 0C09935A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0993A0u, 4); goto L_0C0993A0; }  /* 0C09935C bf */
L_0C09935E: BLKS(0x0C09935Eu);
	r1 = 0x0u;  /* 0C09935E mov #imm,Rn */
	r2 = 0x9Fu; UPD(0x0C099362u, 2);  /* 0C099360 mov.w @(disp,pc),Rn */
	{ IF(0x0C099364u); W8(r0 + r2, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09885Eu, 3); goto L_0C09885E; }  /* 0C099362 bra */
L_0C099390: BLKS(0x0C099390u);
	r3 = 0x99u; UPD(0x0C099392u, 1);  /* 0C099390 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C099392 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C099396u, 2);  /* 0C099394 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C099396 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C099398 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C09939A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0993A8u, 6); goto L_0C0993A8; } UPD(0x0C0993A0u, 1); goto L_0C0993A0; }  /* 0C09939C bt/s */
L_0C0993A0: BLKS(0x0C0993A0u);
	r13 = 0xFFFFDFF8u; UPD(0x0C0993A2u, 1);  /* 0C0993A0 mov.w @(disp,pc),Rn */
	IF(0x0C0993A2u); { u32 tv_ = (r13 + 0x0C0993A6u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C0993A2 braf Rn */
L_0C0993A8: BLKS(0x0C0993A8u);
	r12 = 0xC050D70u; UPD(0x0C0993AAu, 1);  /* 0C0993A8 mov.l @(disp,pc),Rn */
	r11 = 0x8Au; UPD(0x0C0993ACu, 1);  /* 0C0993AA mov.w @(disp,pc),Rn */
	W8(r3, r1); UPD(0x0C0993AEu, 1);  /* 0C0993AC mov.b Rm,@Rn */
	r4 = 0x2000u; UPD(0x0C0993B0u, 1);  /* 0C0993AE mov.w @(disp,pc),Rn */
	IF(0x0C0993B0u); { u32 t_ = r12; PR = 0x0C0993B4u; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0993B4u); }  /* 0C0993B0 jsr @Rn */
L_0C0993B4: BLKS(0x0C0993B4u);
	r3 = 0xFFFFF000u; UPD(0x0C0993B6u, 1);  /* 0C0993B4 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0993B6 add Rm,Rn */
	r13 = 0xFFFFE812u; UPD(0x0C0993BAu, 2);  /* 0C0993B8 mov.w @(disp,pc),Rn */
	IF(0x0C0993BAu); { u32 tv_ = (r13 + 0x0C0993BEu); u32 t_ = PHYS(tv_); W16(r11, r0); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C097BD0u: goto L_0C097BD0; default: JUMPD(tv_); } }  /* 0C0993BA braf Rn */
L_0C0993C0: BLKS(0x0C0993C0u);
	r2 += 0x50u;  /* 0C0993C0 add #imm,Rn */
	r1 = R32(r2); UPD(0x0C0993C4u, 2);  /* 0C0993C2 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0993C4 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0993D4u, 4); goto L_0C0993D4; } goto L_0C0993CA; }  /* 0C0993C6 bt/s */
L_0C0993CA: BLKS(0x0C0993CAu);
	T = (r1 & r1) == 0;  /* 0C0993CA tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0993D4u, 5); goto L_0C0993D4; } UPD(0x0C0993D0u, 1); goto L_0C0993D0; }  /* 0C0993CC bf/s */
L_0C0993D0: BLKS(0x0C0993D0u);
	r13 = 0x4000000u; UPD(0x0C0993D2u, 1);  /* 0C0993D0 mov.l @(disp,pc),Rn */
	W32(r3 + 0x2Cu, r13); UPD(0x0C0993D4u, 1);  /* 0C0993D2 mov.l Rm,@(disp,Rn) */
L_0C0993D4: BLKS(0x0C0993D4u);
	{ IF(0x0C0993D6u); ; /* slot nop */ UPD(0x0C0992EEu, 3); goto L_0C0992EE; }  /* 0C0993D4 bra */
L_0C0993E0: BLKS(0x0C0993E0u);
	r8 = 0xC0A05D0u; UPD(0x0C0993E2u, 1);  /* 0C0993E0 mov.l @(disp,pc),Rn */
	IF(0x0C0993E2u); { u32 t_ = r8; PR = 0x0C0993E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0993E6u); }  /* 0C0993E2 jsr @Rn */
L_0C0993E6: BLKS(0x0C0993E6u);
	IF(0x0C0993E6u); T = (s32)r0 >= 0;  /* 0C0993E6 cmp/pz Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0993F4u, 4); goto L_0C0993F4; } goto L_0C0993EC; }  /* 0C0993E8 bt/s */
L_0C0993EC: BLKS(0x0C0993ECu);
	r1 = 0xFFFFE1DEu; UPD(0x0C0993EEu, 2);  /* 0C0993EC mov.w @(disp,pc),Rn */
	IF(0x0C0993EEu); { u32 tv_ = (r1 + 0x0C0993F2u); u32 t_ = PHYS(tv_); IF(0x0C0993F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C0993EE braf Rn */
L_0C0993F4: BLKS(0x0C0993F4u);
	r2 = 0xB4u; UPD(0x0C0993F6u, 1);  /* 0C0993F4 mov.w @(disp,pc),Rn */
	IF(0x0C0993F6u); MACL = r10 * r2;  /* 0C0993F6 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0993FAu, 3);  /* 0C0993F8 mov.l @(disp,pc),Rn */
	IF(0x0C0993FAu); r10 = MACL;  /* 0C0993FA sts macl,Rn */
	IF(0x0C0993FCu); MACL = r11 * r2;  /* 0C0993FC mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C099400u, 4);  /* 0C0993FE mov.w @(disp,pc),Rn */
	r10 += r1;  /* 0C099400 add Rm,Rn */
	IF(0x0C099402u); r11 = MACL;  /* 0C099402 sts macl,Rn */
	r11 += r1;  /* 0C099404 add Rm,Rn */
	IF(0x0C099406u); r12 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C099408u, 4);  /* 0C099406 mov.w @(r0,Rm),Rn */
	r5 = r10;  /* 0C099408 mov Rm,Rn */
	r5 += r0;  /* 0C09940A add Rm,Rn */
	W16(r5, r12); UPD(0x0C09940Eu, 3);  /* 0C09940C mov.w Rm,@Rn */
	r2 += 0xFFFFFFD0u;  /* 0C09940E add #imm,Rn */
	r13 = r10;  /* 0C099410 mov Rm,Rn */
	r5 += 0x2u;  /* 0C099412 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C099416u, 4);  /* 0C099414 mov.w @Rm,Rn */
	r13 += r2;  /* 0C099416 add Rm,Rn */
	r2 += r11;  /* 0C099418 add Rm,Rn */
	r4 = r3;  /* 0C09941A mov Rm,Rn */
	r11 += 0x50u;  /* 0C09941C add #imm,Rn */
	r3 = R32(r11); UPD(0x0C099420u, 5);  /* 0C09941E mov.l @Rm,Rn */
	r10 += 0x50u;  /* 0C099420 add #imm,Rn */
	W32(r10, r3); UPD(0x0C099424u, 2);  /* 0C099422 mov.l Rm,@Rn */
	r2 += 0x2u;  /* 0C099424 add #imm,Rn */
	r10 += 0xFFFFFFB0u;  /* 0C099426 add #imm,Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C09942Au, 3);  /* 0C099428 mov.l @(disp,Rm),Rn */
	r13 += 0x2u;  /* 0C09942A add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C09942Eu, 2);  /* 0C09942C mov.w @Rm,Rn */
	IF(0x0C09942Eu); MACL = r7 * r3;  /* 0C09942E mul.l Rm,Rn */
	r9 += r12;  /* 0C099430 add Rm,Rn */
	r4 += 0x5u;  /* 0C099432 add #imm,Rn */
	IF(0x0C099434u); r2 = MACL;  /* 0C099434 sts macl,Rn */
	W32(r14 + 0x18u, r13); UPD(0x0C099438u, 6);  /* 0C099436 mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFB0u;  /* 0C099438 add #imm,Rn */
	W16(r13, r9); UPD(0x0C09943Cu, 2);  /* 0C09943A mov.w Rm,@Rn */
	IF(0x0C09943Cu); T = (s32)r2 >= 0;  /* 0C09943C cmp/pz Rn */
	{ u32 c_ = !T; W16(r5, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C099510u, 4); goto L_0C099510; } UPD(0x0C099442u, 1); goto L_0C099442; }  /* 0C09943E bf/s */
L_0C099442: BLKS(0x0C099442u);
	r6 = R32(r10 + 0x30u); UPD(0x0C099444u, 1);  /* 0C099442 mov.l @(disp,Rm),Rn */
	r8 = r2;  /* 0C099444 mov Rm,Rn */
	IF(0x0C099446u); MACL = r6 * r3;  /* 0C099446 mul.l Rm,Rn */
	r7 = 0xFFFFFFF8u;  /* 0C099448 mov #imm,Rn */
	IF(0x0C09944Au); r2 = MACL;  /* 0C09944A sts macl,Rn */
	IF(0x0C09944Cu); T = (s32)r2 >= 0;  /* 0C09944C cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C099450u); ARG0(0x487Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C099500u, 9); goto L_0C099500; } UPD(0x0C099452u, 1); goto L_0C099452; }  /* 0C09944E bf/s */
L_0C099452: BLKS(0x0C099452u);
	r10 += 0x7Cu;  /* 0C099452 add #imm,Rn */
	IF(0x0C099454u); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C099454 shad Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C099458u, 3);  /* 0C099456 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C099458 exts.w Rm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C09945A extu.w Rm,Rn */
	IF(0x0C09945Cu); r7 <<= 2;  /* 0C09945C shll2 Rn */
	r7 += r7;  /* 0C09945E add Rm,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C099462u, 5);  /* 0C099460 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFF84u;  /* 0C099462 add #imm,Rn */
	r4 += r7;  /* 0C099464 add Rm,Rn */
	IF(0x0C099466u); T = (s32)r8 >= 0;  /* 0C099466 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0994F0u, 6); goto L_0C0994F0; } UPD(0x0C09946Cu, 1); goto L_0C09946C; }  /* 0C099468 bf/s */
L_0C09946C: BLKS(0x0C09946Cu);
	r9 = 0xC058060u; UPD(0x0C09946Eu, 1);  /* 0C09946C mov.l @(disp,pc),Rn */
	IF(0x0C09946Eu); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C09946E shar Rn */
	IF(0x0C099470u); { u32 t_ = r9; PR = 0x0C099474u; IF(0x0C099472u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1); /* slot shar Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C099474u); }  /* 0C099470 jsr @Rn */
L_0C099474: BLKS(0x0C099474u);
	r12 = R32(r11 + 0x24u); UPD(0x0C099476u, 1);  /* 0C099474 mov.l @(disp,Rm),Rn */
	r13 = r0;  /* 0C099476 mov Rm,Rn */
	r13 += r8;  /* 0C099478 add Rm,Rn */
	r12 += r8;  /* 0C09947A add Rm,Rn */
	r8 = R32(r14 + 0x18u); UPD(0x0C09947Eu, 4);  /* 0C09947C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C099480u, 1);  /* 0C09947E mov.w @Rm,Rn */
	IF(0x0C099480u); T = (s32)r4 >= 0;  /* 0C099480 cmp/pz Rn */
	if (!T) { UPD(0x0C0994E0u, 4); goto L_0C0994E0; }  /* 0C099482 bf */
L_0C099484: BLKS(0x0C099484u);
	r0 = 0xFFFFFFFAu;  /* 0C099484 mov #imm,Rn */
	IF(0x0C099486u); ARG0(0x440Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C099486 shad Rm,Rn */
	r5 = r13;  /* 0C099488 mov Rm,Rn */
	IF(0x0C09948Au); { u32 t_ = r9; PR = 0x0C09948Eu; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09948Eu); }  /* 0C09948A jsr @Rn */
L_0C09948E: BLKS(0x0C09948Eu);
	r2 = 0x66666667u; UPD(0x0C099490u, 1);  /* 0C09948E mov.l @(disp,pc),Rn */
	IF(0x0C099490u); r0 <<= 2;  /* 0C099490 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C099492 dmuls.l Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C099496u, 4);  /* 0C099494 mov.l @(disp,Rm),Rn */
	IF(0x0C099496u); r9 = MACH;  /* 0C099496 sts mach,Rn */
	IF(0x0C099498u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C099498 shar Rn */
	IF(0x0C09949Au); T = r0 >> 31; r0 <<= 1;  /* 0C09949A shll Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C09949Eu, 4);  /* 0C09949C mov.l @(disp,Rm),Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09949E subc Rm,Rn */
	r11 = R32(r14 + 0x18u); UPD(0x0C0994A2u, 2);  /* 0C0994A0 mov.l @(disp,Rm),Rn */
	r9 -= r0;  /* 0C0994A2 sub Rm,Rn */
	r8 += r4;  /* 0C0994A4 add Rm,Rn */
	r12 += r9;  /* 0C0994A6 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0994AAu, 4);  /* 0C0994A8 mov.w @Rm,Rn */
	IF(0x0C0994AAu); T = (s32)r4 >= 0;  /* 0C0994AA cmp/pz Rn */
	{ u32 c_ = !T; W32(r10 + 0x24u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0994D0u, 4); goto L_0C0994D0; } UPD(0x0C0994B0u, 1); goto L_0C0994B0; }  /* 0C0994AC bf/s */
L_0C0994B0: BLKS(0x0C0994B0u);
	r5 = r13;  /* 0C0994B0 mov Rm,Rn */
	r12 = 0xFFFFFFFAu;  /* 0C0994B2 mov #imm,Rn */
	r13 = 0xC058030u; UPD(0x0C0994B6u, 3);  /* 0C0994B4 mov.l @(disp,pc),Rn */
	IF(0x0C0994B6u); ARG0(0x44CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0994B6 shad Rm,Rn */
	IF(0x0C0994B8u); { u32 t_ = r13; PR = 0x0C0994BCu; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0994BCu); }  /* 0C0994B8 jsr @Rn */
L_0C0994BC: BLKS(0x0C0994BCu);
	r8 += r0;  /* 0C0994BC add Rm,Rn */
	r13 = 0xFFFFDED8u; UPD(0x0C0994C0u, 2);  /* 0C0994BE mov.w @(disp,pc),Rn */
	IF(0x0C0994C0u); { u32 tv_ = (r13 + 0x0C0994C4u); u32 t_ = PHYS(tv_); W32(r10 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Cu: goto L_0C09739C; default: JUMPD(tv_); } }  /* 0C0994C0 braf Rn */
L_0C0994D0: BLKS(0x0C0994D0u);
	{ r4 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C0994B0u, 3); goto L_0C0994B0; }  /* 0C0994D0 bra */
L_0C0994E0: BLKS(0x0C0994E0u);
	{ r4 += 0x3Fu; /* slot add #imm,Rn */ UPD(0x0C099484u, 3); goto L_0C099484; }  /* 0C0994E0 bra */
L_0C0994F0: BLKS(0x0C0994F0u);
	{ r5 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09946Cu, 3); goto L_0C09946C; }  /* 0C0994F0 bra */
L_0C099500: BLKS(0x0C099500u);
	r5 = 0xFFu; UPD(0x0C099502u, 1);  /* 0C099500 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C099452u, 3); goto L_0C099452; }  /* 0C099502 bra */
L_0C099510: BLKS(0x0C099510u);
	r0 = 0xFFu; UPD(0x0C099512u, 1);  /* 0C099510 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C099442u, 3); goto L_0C099442; }  /* 0C099512 bra */
L_0C099540: BLKS(0x0C099540u);
	r8 = 0xC0A05D0u; UPD(0x0C099542u, 1);  /* 0C099540 mov.l @(disp,pc),Rn */
	IF(0x0C099542u); { u32 t_ = r8; PR = 0x0C099546u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C099546u); }  /* 0C099542 jsr @Rn */
L_0C099546: BLKS(0x0C099546u);
	IF(0x0C099546u); T = (s32)r0 >= 0;  /* 0C099546 cmp/pz Rn */
	if (!T) { UPD(0x0C0995DAu, 4); goto L_0C0995DA; }  /* 0C099548 bf */
L_0C09954A: BLKS(0x0C09954Au);
	r4 = r10;  /* 0C09954A mov Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09954Eu, 2);  /* 0C09954C mov.w @(disp,pc),Rn */
	IF(0x0C09954Eu); MACL = r10 * r2;  /* 0C09954E mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C099552u, 3);  /* 0C099550 mov.l @(disp,pc),Rn */
	IF(0x0C099552u); r9 = MACL;  /* 0C099552 sts macl,Rn */
	IF(0x0C099554u); MACL = r0 * r2;  /* 0C099554 mul.l Rm,Rn */
	r9 += r5;  /* 0C099556 add Rm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C09955Au, 5);  /* 0C099558 mov.l @(disp,Rm),Rn */
	IF(0x0C09955Au); r11 = MACL;  /* 0C09955A sts macl,Rn */
	r11 += r5;  /* 0C09955C add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099560u, 3);  /* 0C09955E mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C099562u, 1);  /* 0C099560 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C099562 add Rm,Rn */
	r8 = R32(r9 + 0x30u); UPD(0x0C099566u, 2);  /* 0C099564 mov.l @(disp,Rm),Rn */
	r11 += 0x50u;  /* 0C099566 add #imm,Rn */
	r12 = 0xC058130u; UPD(0x0C09956Au, 2);  /* 0C099568 mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C09956A add Rm,Rn */
	r13 = 0xC057430u; UPD(0x0C09956Eu, 2);  /* 0C09956C mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C099570u, 1);  /* 0C09956E mov.l Rm,@(disp,Rn) */
	IF(0x0C099570u); { u32 t_ = r12; PR = 0x0C099574u; W32(r9 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C099574u); }  /* 0C099570 jsr @Rn */
L_0C099574: BLKS(0x0C099574u);
	r4 = r10;  /* 0C099574 mov Rm,Rn */
	IF(0x0C099576u); { u32 t_ = r13; PR = 0x0C09957Au; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C09957Au); }  /* 0C099576 jsr @Rn */
L_0C09957A: BLKS(0x0C09957Au);
	r4 = 0x86u; UPD(0x0C09957Cu, 1);  /* 0C09957A mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09957C mov Rm,Rn */
	IF(0x0C09957Eu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C099580u, 2);  /* 0C09957E mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C099580 mov #imm,Rn */
	r7 += 0x8u;  /* 0C099582 add #imm,Rn */
	IF(0x0C099584u); r7 >>= 2;  /* 0C099584 shlr2 Rn */
	r5 = 0xC0A0380u; UPD(0x0C099588u, 4);  /* 0C099586 mov.l @(disp,pc),Rn */
	IF(0x0C099588u); r7 >>= 2;  /* 0C099588 shlr2 Rn */
	r7 &= r3;  /* 0C09958A and Rm,Rn */
	W32(r9 + 0xCu, r7); UPD(0x0C09958Eu, 3);  /* 0C09958C mov.l Rm,@(disp,Rn) */
	IF(0x0C09958Eu); { u32 t_ = r5; PR = 0x0C099592u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C099592u); }  /* 0C09958E jsr @Rn */
L_0C099592: BLKS(0x0C099592u);
	r1 = R32(r11); UPD(0x0C099594u, 1);  /* 0C099592 mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C099596u, 1);  /* 0C099594 mov.w @(disp,pc),Rn */
	T = r1 == r6;  /* 0C099596 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0995BAu, 4); goto L_0C0995BA; }  /* 0C099598 bf */
L_0C09959A: BLKS(0x0C09959Au);
	r4 = r10;  /* 0C09959A mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C09959Eu, 2);  /* 0C09959C mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C09959E mov #imm,Rn */
	IF(0x0C0995A0u); { u32 t_ = r11; PR = 0x0C0995A4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0995A4u); }  /* 0C0995A0 jsr @Rn */
L_0C0995A4: BLKS(0x0C0995A4u);
	T = (r0 & r0) == 0;  /* 0C0995A4 tst Rm,Rn */
	if (T) { UPD(0x0C0995BAu, 4); goto L_0C0995BA; }  /* 0C0995A6 bt */
L_0C0995A8: BLKS(0x0C0995A8u);
	r3 = R32(r9 + 0x8u); UPD(0x0C0995AAu, 1);  /* 0C0995A8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0995AA mov Rm,Rn */
	r7 = 0xC0A03B0u; UPD(0x0C0995AEu, 2);  /* 0C0995AC mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0995AE add #imm,Rn */
	IF(0x0C0995B0u); { u32 t_ = r7; PR = 0x0C0995B4u; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0995B4u); }  /* 0C0995B0 jsr @Rn */
L_0C0995B4: BLKS(0x0C0995B4u);
	r0 = 0x88u; UPD(0x0C0995B6u, 1);  /* 0C0995B4 mov.w @(disp,pc),Rn */
	r10 = 0x1u;  /* 0C0995B6 mov #imm,Rn */
	IF(0x0C0995B8u); W16(r0 + r9, r10); UPD(0x0C0995BAu, 2);  /* 0C0995B8 mov.w Rm,@(r0,Rn) */
L_0C0995BA: BLKS(0x0C0995BAu);
	r13 = 0xFFFFDDDEu; UPD(0x0C0995BCu, 1);  /* 0C0995BA mov.w @(disp,pc),Rn */
	IF(0x0C0995BCu); { u32 tv_ = (r13 + 0x0C0995C0u); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C0995BC braf Rn */
L_0C0995D0: BLKS(0x0C0995D0u);
	r9 = 0xC0A05D0u; UPD(0x0C0995D2u, 1);  /* 0C0995D0 mov.l @(disp,pc),Rn */
	IF(0x0C0995D2u); { u32 t_ = r9; PR = 0x0C0995D6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0995D6u); }  /* 0C0995D2 jsr @Rn */
L_0C0995D6: BLKS(0x0C0995D6u);
	IF(0x0C0995D6u); T = (s32)r0 >= 0;  /* 0C0995D6 cmp/pz Rn */
	if (T) { UPD(0x0C0995E2u, 4); goto L_0C0995E2; }  /* 0C0995D8 bt */
L_0C0995DA: BLKS(0x0C0995DAu);
	r1 = 0xFFFFDFF0u; UPD(0x0C0995DCu, 1);  /* 0C0995DA mov.w @(disp,pc),Rn */
	IF(0x0C0995DCu); { u32 tv_ = (r1 + 0x0C0995E0u); u32 t_ = PHYS(tv_); IF(0x0C0995DEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C0995DC braf Rn */
L_0C0995E2: BLKS(0x0C0995E2u);
	r2 = 0xB4u; UPD(0x0C0995E4u, 1);  /* 0C0995E2 mov.w @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0995E4 mov #imm,Rn */
	IF(0x0C0995E6u); MACL = r10 * r2;  /* 0C0995E6 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0995EAu, 4);  /* 0C0995E8 mov.l @(disp,pc),Rn */
	IF(0x0C0995EAu); r7 = MACL;  /* 0C0995EA sts macl,Rn */
	IF(0x0C0995ECu); MACL = r0 * r2;  /* 0C0995EC mul.l Rm,Rn */
	r7 += r3;  /* 0C0995EE add Rm,Rn */
	r8 = R32(r7 + 0x30u); UPD(0x0C0995F2u, 5);  /* 0C0995F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0995F2u); r6 = MACL;  /* 0C0995F2 sts macl,Rn */
	r6 += r3;  /* 0C0995F4 add Rm,Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C0995F8u, 3);  /* 0C0995F6 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0995F8 add Rm,Rn */
	W32(r7 + 0x28u, r0); UPD(0x0C0995FCu, 2);  /* 0C0995FA mov.l Rm,@(disp,Rn) */
	r0 = 0x99u; UPD(0x0C0995FEu, 1);  /* 0C0995FC mov.w @(disp,pc),Rn */
	r5 = R32(r6 + 0x24u); UPD(0x0C099600u, 1);  /* 0C0995FE mov.l @(disp,Rm),Rn */
	IF(0x0C099600u); r12 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C099602u, 1);  /* 0C099600 mov.b @(r0,Rm),Rn */
	r1 = R32(r7 + 0x2Cu); UPD(0x0C099604u, 1);  /* 0C099602 mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C099604 add #imm,Rn */
	r5 += r1;  /* 0C099606 add Rm,Rn */
	r13 = r12 & 0xFF;  /* 0C099608 extu.b Rm,Rn */
	W32(r7 + 0x24u, r5); UPD(0x0C09960Cu, 4);  /* 0C09960A mov.l Rm,@(disp,Rn) */
	T = r13 > r4;  /* 0C09960C cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C099610u); W8(r0 + r7, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0995BAu, 4); goto L_0C0995BA; } UPD(0x0C099612u, 1); goto L_0C099612; }  /* 0C09960E bf/s */
L_0C099612: BLKS(0x0C099612u);
	r4 = 0x0u;  /* 0C099612 mov #imm,Rn */
	IF(0x0C099614u); W8(r0 + r7, r4); UPD(0x0C099616u, 2);  /* 0C099614 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFEFu;  /* 0C099616 add #imm,Rn */
	r11 = R32(r7 + 0x8u); UPD(0x0C09961Au, 2);  /* 0C099618 mov.l @(disp,Rm),Rn */
	IF(0x0C09961Au); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C09961Cu, 1);  /* 0C09961A mov.w @(r0,Rm),Rn */
	r11 += r9;  /* 0C09961C add Rm,Rn */
	r1 = 0xFFFFDEB8u; UPD(0x0C099620u, 2);  /* 0C09961E mov.w @(disp,pc),Rn */
	IF(0x0C099620u); { u32 tv_ = (r1 + 0x0C099624u); u32 t_ = PHYS(tv_); W32(r7 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0974DCu: goto L_0C0974DC; default: JUMPD(tv_); } }  /* 0C099620 braf Rn */
L_0C099630: BLKS(0x0C099630u);
	r13 = 0xC0A05D0u; UPD(0x0C099632u, 1);  /* 0C099630 mov.l @(disp,pc),Rn */
	IF(0x0C099632u); { u32 t_ = r13; PR = 0x0C099636u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C099636u); }  /* 0C099632 jsr @Rn */
L_0C099636: BLKS(0x0C099636u);
	IF(0x0C099636u); T = (s32)r0 >= 0;  /* 0C099636 cmp/pz Rn */
	{ u32 c_ = T; r13 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099644u, 4); goto L_0C099644; } goto L_0C09963C; }  /* 0C099638 bt/s */
L_0C09963C: BLKS(0x0C09963Cu);
	r1 = 0xFFFFDF8Eu; UPD(0x0C09963Eu, 2);  /* 0C09963C mov.w @(disp,pc),Rn */
	IF(0x0C09963Eu); { u32 tv_ = (r1 + 0x0C099642u); u32 t_ = PHYS(tv_); IF(0x0C099640u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0975D0u: goto L_0C0975D0; default: JUMPD(tv_); } }  /* 0C09963E braf Rn */
L_0C099644: BLKS(0x0C099644u);
	r9 = 0xB4u; UPD(0x0C099646u, 1);  /* 0C099644 mov.w @(disp,pc),Rn */
	IF(0x0C099646u); MACL = r10 * r9;  /* 0C099646 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09964Au, 3);  /* 0C099648 mov.l @(disp,pc),Rn */
	IF(0x0C09964Au); r12 = MACL;  /* 0C09964A sts macl,Rn */
	IF(0x0C09964Cu); MACL = r0 * r9;  /* 0C09964C mul.l Rm,Rn */
	r12 += r4;  /* 0C09964E add Rm,Rn */
	r2 = R32(r12 + 0xCu); UPD(0x0C099652u, 5);  /* 0C099650 mov.l @(disp,Rm),Rn */
	IF(0x0C099652u); r9 = MACL;  /* 0C099652 sts macl,Rn */
	r9 += r4;  /* 0C099654 add Rm,Rn */
	IF(0x0C099656u); ARG0(0x42DDu); { s32 s_ = (s32)r13; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C099656 shld Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C09965Au, 4);  /* 0C099658 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C09965A exts.w Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09965Eu, 2);  /* 0C09965C mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09965E mov Rm,Rn */
	r3 = 0xC058060u; UPD(0x0C099662u, 2);  /* 0C099660 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C099662 add Rm,Rn */
	r11 = 0x40000u; UPD(0x0C099666u, 2);  /* 0C099664 mov.l @(disp,pc),Rn */
	IF(0x0C099666u); { u32 t_ = r3; PR = 0x0C09966Au; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09966Au); }  /* 0C099666 jsr @Rn */
L_0C09966A: BLKS(0x0C09966Au);
	r8 += r0;  /* 0C09966A add Rm,Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C09966Eu, 2);  /* 0C09966C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C09966E mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C099672u, 2);  /* 0C099670 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C099672 mov Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C099676u, 2);  /* 0C099674 mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x30u); UPD(0x0C099678u, 1);  /* 0C099676 mov.l @(disp,Rm),Rn */
	IF(0x0C099678u); { u32 t_ = r1; PR = 0x0C09967Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09967Cu); }  /* 0C099678 jsr @Rn */
L_0C09967C: BLKS(0x0C09967Cu);
	r8 += r0;  /* 0C09967C add Rm,Rn */
	r0 = 0x99u; UPD(0x0C099680u, 2);  /* 0C09967E mov.w @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C099680 mov #imm,Rn */
	IF(0x0C099682u); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C099684u, 2);  /* 0C099682 mov.b @(r0,Rm),Rn */
	W32(r12 + 0x28u, r8); UPD(0x0C099686u, 1);  /* 0C099684 mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C099686 add #imm,Rn */
	r8 = r6 & 0xFF;  /* 0C099688 extu.b Rm,Rn */
	T = r8 > r7;  /* 0C09968A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09968Eu); W8(r0 + r12, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0995BAu, 6); goto L_0C0995BA; } UPD(0x0C099690u, 1); goto L_0C099690; }  /* 0C09968C bf/s */
L_0C099690: BLKS(0x0C099690u);
	r7 = 0x0u;  /* 0C099690 mov #imm,Rn */
	r8 = 0x9Fu; UPD(0x0C099694u, 2);  /* 0C099692 mov.w @(disp,pc),Rn */
	IF(0x0C099694u); W8(r0 + r12, r7); UPD(0x0C099696u, 1);  /* 0C099694 mov.b Rm,@(r0,Rn) */
	r8 += r12;  /* 0C099696 add Rm,Rn */
	W32(r14 + 0x1Cu, r8); UPD(0x0C09969Au, 2);  /* 0C099698 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C09969Cu, 1);  /* 0C09969A mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C09969C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09969E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C099720u, 5); goto L_0C099720; }  /* 0C0996A0 bt */
L_0C0996A2: BLKS(0x0C0996A2u);
	r11 = 0x1u;  /* 0C0996A2 mov #imm,Rn */
	T = (s32)r0 > (s32)r11;  /* 0C0996A4 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C099700u, 5); goto L_0C099700; } goto L_0C0996AA; }  /* 0C0996A6 bt/s */
L_0C0996AA: BLKS(0x0C0996AAu);
	T = (r0 & r0) == 0;  /* 0C0996AA tst Rm,Rn */
	if (!T) { UPD(0x0C0996B6u, 5); goto L_0C0996B6; }  /* 0C0996AC bf */
L_0C0996AE: BLKS(0x0C0996AEu);
	r12 = r2;  /* 0C0996AE mov Rm,Rn */
	r10 = R32(r14 + 0x1Cu); UPD(0x0C0996B2u, 2);  /* 0C0996B0 mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C0996B2 add #imm,Rn */
	W8(r10, r12); UPD(0x0C0996B6u, 2);  /* 0C0996B4 mov.b Rm,@Rn */
L_0C0996B6: BLKS(0x0C0996B6u);
	r13 = 0xFFFFDCE2u; UPD(0x0C0996B8u, 1);  /* 0C0996B6 mov.w @(disp,pc),Rn */
	IF(0x0C0996B8u); { u32 tv_ = (r13 + 0x0C0996BCu); u32 t_ = PHYS(tv_); r14 += 0x20u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Eu: goto L_0C09739E; default: JUMPD(tv_); } }  /* 0C0996B8 braf Rn */
L_0C099700: BLKS(0x0C099700u);
	if (!T) { UPD(0x0C0996B6u, 3); goto L_0C0996B6; }  /* 0C099700 bf */
L_0C099702: BLKS(0x0C099702u);
	r11 = R32(r12 + 0x8u); UPD(0x0C099704u, 1);  /* 0C099702 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C099704 mov Rm,Rn */
	r8 = 0xC0A03B0u; UPD(0x0C099708u, 2);  /* 0C099706 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFFFu;  /* 0C099708 add #imm,Rn */
	r6 = R32(r14 + 0x1Cu); UPD(0x0C09970Cu, 2);  /* 0C09970A mov.l @(disp,Rm),Rn */
	r13 = 0xFFFFFFFFu;  /* 0C09970C mov #imm,Rn */
	W8(r6, r7); UPD(0x0C099710u, 2);  /* 0C09970E mov.b Rm,@Rn */
	IF(0x0C099710u); { u32 t_ = r8; PR = 0x0C099714u; W32(r12 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C099714u); }  /* 0C099710 jsr @Rn */
L_0C099714: BLKS(0x0C099714u);
	r0 = 0x88u; UPD(0x0C099716u, 1);  /* 0C099714 mov.w @(disp,pc),Rn */
	r11 = 0xFFFFDC80u; UPD(0x0C099718u, 1);  /* 0C099716 mov.w @(disp,pc),Rn */
	IF(0x0C099718u); { u32 tv_ = (r11 + 0x0C09971Cu); u32 t_ = PHYS(tv_); IF(0x0C09971Au); W16(r0 + r12, r13); /* slot mov.w Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Cu: goto L_0C09739C; default: JUMPD(tv_); } }  /* 0C099718 braf Rn */
L_0C099720: BLKS(0x0C099720u);
	r2 = 0xC058060u; UPD(0x0C099722u, 1);  /* 0C099720 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C099724u, 1);  /* 0C099722 mov.l @(disp,pc),Rn */
	IF(0x0C099724u); { u32 t_ = r2; PR = 0x0C099728u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C099728u); }  /* 0C099724 jsr @Rn */
L_0C099728: BLKS(0x0C099728u);
	r4 = 0x66666667u; UPD(0x0C09972Au, 1);  /* 0C099728 mov.l @(disp,pc),Rn */
	IF(0x0C09972Au); r0 <<= 2;  /* 0C09972A shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r4; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09972C dmuls.l Rm,Rn */
	r3 = R32(r12 + 0x24u); UPD(0x0C099730u, 4);  /* 0C09972E mov.l @(disp,Rm),Rn */
	IF(0x0C099730u); r5 = MACH;  /* 0C099730 sts mach,Rn */
	IF(0x0C099732u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C099732 shar Rn */
	IF(0x0C099734u); T = r0 >> 31; r0 <<= 1;  /* 0C099734 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C099736 subc Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C09973Au, 5);  /* 0C099738 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C09973A sub Rm,Rn */
	r3 += r5;  /* 0C09973C add Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C099740u, 3);  /* 0C09973E mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C099742u, 1);  /* 0C099740 mov.l @(disp,pc),Rn */
	IF(0x0C099742u); { u32 t_ = r1; PR = 0x0C099746u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C099746u); }  /* 0C099742 jsr @Rn */
L_0C099746: BLKS(0x0C099746u);
	r6 = R32(r12 + 0x28u); UPD(0x0C099748u, 1);  /* 0C099746 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099748 add #imm,Rn */
	r6 += r0;  /* 0C09974A add Rm,Rn */
	r0 = 0xC177922u; UPD(0x0C09974Eu, 3);  /* 0C09974C mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C09974E mov Rm,Rn */
	r9 = 0xC7C14F4u; UPD(0x0C099752u, 2);  /* 0C099750 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C099752 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C099756u, 2);  /* 0C099754 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C099758u, 1);  /* 0C099756 mov.l Rm,@(disp,Rn) */
	IF(0x0C099758u); { u32 t_ = r9; PR = 0x0C09975Cu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C14F4, 0x0C7C14F4u, 0x0C09975Cu); }  /* 0C099758 jsr @Rn */
L_0C09975C: BLKS(0x0C09975Cu);
	r6 = R32(r14 + 0x1Cu); UPD(0x0C09975Eu, 1);  /* 0C09975C mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C099760u, 1);  /* 0C09975E mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C099760 add #imm,Rn */
	r13 = 0xFFFFE226u; UPD(0x0C099764u, 2);  /* 0C099762 mov.w @(disp,pc),Rn */
	IF(0x0C099764u); { u32 tv_ = (r13 + 0x0C099768u); u32 t_ = PHYS(tv_); W8(r6, r7); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09798Eu: goto L_0C09798E; default: JUMPD(tv_); } }  /* 0C099764 braf Rn */
L_0C099770: BLKS(0x0C099770u);
	r0 = 0x8Cu; UPD(0x0C099772u, 1);  /* 0C099770 mov.w @(disp,pc),Rn */
	IF(0x0C099772u); r11 = R32(r0 + r3); UPD(0x0C099774u, 1);  /* 0C099772 mov.l @(r0,Rm),Rn */
	r9 = 0xFF800000u; UPD(0x0C099776u, 1);  /* 0C099774 mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C099776 add Rm,Rn */
	T = (s32)r2 >= (s32)r9;  /* 0C099778 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C099784u, 5); goto L_0C099784; } UPD(0x0C09977Eu, 1); goto L_0C09977E; }  /* 0C09977A bt/s */
L_0C09977E: BLKS(0x0C09977Eu);
	r12 = 0x2000000u; UPD(0x0C099780u, 1);  /* 0C09977E mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C099780 add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C099784u, 2);  /* 0C099782 mov.l Rm,@(disp,Rn) */
L_0C099784: BLKS(0x0C099784u);
	r2 = R32(r3 + 0x30u); UPD(0x0C099786u, 1);  /* 0C099784 mov.l @(disp,Rm),Rn */
	r13 = 0x1800000u; UPD(0x0C099788u, 1);  /* 0C099786 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r13;  /* 0C099788 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C099792u, 4); goto L_0C099792; }  /* 0C09978A bf */
L_0C09978C: BLKS(0x0C09978Cu);
	r0 = 0xFE000000u; UPD(0x0C09978Eu, 1);  /* 0C09978C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09978E add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C099792u, 2);  /* 0C099790 mov.l Rm,@(disp,Rn) */
L_0C099792: BLKS(0x0C099792u);
	r6 = 0x9Fu; UPD(0x0C099794u, 1);  /* 0C099792 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C099794 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C099798u, 2);  /* 0C099796 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C099798 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09979A tst Rm,Rn */
	{ u32 c_ = T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0997F0u, 5); goto L_0C0997F0; } goto L_0C0997A0; }  /* 0C09979C bt/s */
L_0C0997A0: BLKS(0x0C0997A0u);
	T = r0 == 0x1u;  /* 0C0997A0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0997D0u, 5); goto L_0C0997D0; }  /* 0C0997A2 bt */
L_0C0997A4: BLKS(0x0C0997A4u);
	r2 = 0xB4u; UPD(0x0C0997A6u, 1);  /* 0C0997A4 mov.w @(disp,pc),Rn */
	IF(0x0C0997A6u); MACL = r10 * r2;  /* 0C0997A6 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0997AAu, 3);  /* 0C0997A8 mov.l @(disp,pc),Rn */
	IF(0x0C0997AAu); r10 = MACL;  /* 0C0997AA sts macl,Rn */
	r10 += r7;  /* 0C0997AC add Rm,Rn */
	r0 = R32(r10 + 0x2Cu); UPD(0x0C0997B0u, 3);  /* 0C0997AE mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C0997B0 add #imm,Rn */
	r4 = R32(r10); UPD(0x0C0997B4u, 2);  /* 0C0997B2 mov.l @Rm,Rn */
	r10 += 0xFFFFFFB0u;  /* 0C0997B4 add #imm,Rn */
	r0 += r4;  /* 0C0997B6 add Rm,Rn */
	W32(r10 + 0x24u, r0); UPD(0x0C0997BAu, 3);  /* 0C0997B8 mov.l Rm,@(disp,Rn) */
	r13 = 0xC3929E0u; UPD(0x0C0997BCu, 1);  /* 0C0997BA mov.l @(disp,pc),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0997BEu, 1);  /* 0C0997BC mov.l @(disp,Rm),Rn */
	r12 = R32(r13); UPD(0x0C0997C0u, 1);  /* 0C0997BE mov.l @Rm,Rn */
	r1 += r12;  /* 0C0997C0 add Rm,Rn */
	r13 = 0xFFFFDBD4u; UPD(0x0C0997C4u, 2);  /* 0C0997C2 mov.w @(disp,pc),Rn */
	IF(0x0C0997C4u); { u32 tv_ = (r13 + 0x0C0997C8u); u32 t_ = PHYS(tv_); W32(r10 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09739Cu: goto L_0C09739C; default: JUMPD(tv_); } }  /* 0C0997C4 braf Rn */
L_0C0997D0: BLKS(0x0C0997D0u);
	r7 = R32(r3 + 0x34u); UPD(0x0C0997D2u, 1);  /* 0C0997D0 mov.l @(disp,Rm),Rn */
	r6 = 0xFF00u; UPD(0x0C0997D4u, 1);  /* 0C0997D2 mov.l @(disp,pc),Rn */
	r5 = 0x400u; UPD(0x0C0997D6u, 1);  /* 0C0997D4 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C0997D6 and Rm,Rn */
	T = r6 > r5;  /* 0C0997D8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0997E0u, 5); goto L_0C0997E0; }  /* 0C0997DA bt */
L_0C0997DC: BLKS(0x0C0997DCu);
	r9 = 0x0u;  /* 0C0997DC mov #imm,Rn */
	W32(r3, r9); UPD(0x0C0997E0u, 2);  /* 0C0997DE mov.l Rm,@Rn */
L_0C0997E0: BLKS(0x0C0997E0u);
	r11 = 0xFFFFFBFCu; UPD(0x0C0997E2u, 1);  /* 0C0997E0 mov.w @(disp,pc),Rn */
	r7 += r11;  /* 0C0997E2 add Rm,Rn */
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0997A4u, 4); goto L_0C0997A4; }  /* 0C0997E4 bra */
L_0C0997F0: BLKS(0x0C0997F0u);
	r7 += 0x50u;  /* 0C0997F0 add #imm,Rn */
	r4 = R32(r7); UPD(0x0C0997F4u, 2);  /* 0C0997F2 mov.l @Rm,Rn */
	r1 = 0xF0u; UPD(0x0C0997F6u, 1);  /* 0C0997F4 mov.w @(disp,pc),Rn */
	IF(0x0C0997F6u); MACL = r4 * r1;  /* 0C0997F6 mul.l Rm,Rn */
	IF(0x0C0997F8u); r2 = MACL;  /* 0C0997F8 sts macl,Rn */
	IF(0x0C0997FAu); T = (s32)r2 >= 0;  /* 0C0997FA cmp/pz Rn */
	{ u32 c_ = !T; r1 += 0xFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C099820u, 7); goto L_0C099820; } UPD(0x0C099800u, 1); goto L_0C099800; }  /* 0C0997FC bf/s */
L_0C099800: BLKS(0x0C099800u);
	r8 = 0xFFFFFFF8u;  /* 0C099800 mov #imm,Rn */
	IF(0x0C099802u); ARG0(0x428Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C099802 shad Rm,Rn */
	W32(r7, r2); UPD(0x0C099806u, 3);  /* 0C099804 mov.l Rm,@Rn */
	r7 = 0x98u; UPD(0x0C099808u, 1);  /* 0C099806 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C099808 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C09980Cu, 2);  /* 0C09980A mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09980C add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C09980E extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C099810 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r7, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0997A4u, 6); goto L_0C0997A4; } UPD(0x0C099816u, 1); goto L_0C099816; }  /* 0C099812 bf/s */
L_0C099816: BLKS(0x0C099816u);
	r3 = r5;  /* 0C099816 mov Rm,Rn */
	r3 += 0x1u;  /* 0C099818 add #imm,Rn */
	{ W8(r6, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0997A4u, 5); goto L_0C0997A4; }  /* 0C09981A bra */
L_0C099820: BLKS(0x0C099820u);
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C099800u, 3); goto L_0C099800; }  /* 0C099820 bra */
}

void f_0C099870(sh3_t *c)
{
	LOCALS;
L_0C099870: BLKS(0x0C099870u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C099872u, 1);  /* 0C099870 mov.l Rm,@-Rn */
	r4 = 0x4Au;  /* 0C099872 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C099876u, 2);  /* 0C099874 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C099878u, 1);  /* 0C099876 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09987Au, 1);  /* 0C099878 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09987Cu, 1);  /* 0C09987A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09987Eu, 1);  /* 0C09987C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C099880u, 1);  /* 0C09987E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C099882u, 1);  /* 0C099880 mov.l @(disp,pc),Rn */
	IF(0x0C099882u); r15 -= 4; W32(r15, PR); UPD(0x0C099884u, 1);  /* 0C099882 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C099886u, 1);  /* 0C099884 mov.l @(disp,pc),Rn */
	IF(0x0C099886u); { u32 t_ = r8; PR = 0x0C09988Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09988Au); }  /* 0C099886 jsr @Rn */
L_0C09988A: BLKS(0x0C09988Au);
	T = (r0 & r0) == 0;  /* 0C09988A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0998B0u, 4); goto L_0C0998B0; } UPD(0x0C099890u, 1); goto L_0C099890; }  /* 0C09988C bf/s */
L_0C099890: BLKS(0x0C099890u);
	r15 = r14;  /* 0C099890 mov Rm,Rn */
	IF(0x0C099892u); PR = R32(r15); r15 += 4; UPD(0x0C099894u, 2);  /* 0C099892 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099896u, 1);  /* 0C099894 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099898u, 1);  /* 0C099896 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09989Au, 1);  /* 0C099898 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09989Cu, 1);  /* 0C09989A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09989Eu, 1);  /* 0C09989C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0998A0u, 1);  /* 0C09989E mov.l @Rm+,Rn */
	IF(0x0C0998A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0998A0 rts */
L_0C0998B0: BLKS(0x0C0998B0u);
	r8 = 0xC0606C0u; UPD(0x0C0998B2u, 1);  /* 0C0998B0 mov.l @(disp,pc),Rn */
	r13 = 0xC2755BCu; UPD(0x0C0998B4u, 1);  /* 0C0998B2 mov.l @(disp,pc),Rn */
	IF(0x0C0998B4u); { u32 t_ = r8; PR = 0x0C0998B8u; r4 = 0x67u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0998B8u); }  /* 0C0998B4 jsr @Rn */
L_0C0998B8: BLKS(0x0C0998B8u);
	T = (r0 & r0) == 0;  /* 0C0998B8 tst Rm,Rn */
	if (T) { UPD(0x0C099890u, 4); goto L_0C099890; }  /* 0C0998BA bt */
L_0C0998BC: BLKS(0x0C0998BCu);
	r12 = 0x0u;  /* 0C0998BC mov #imm,Rn */
	r11 = 0x0u;  /* 0C0998BE mov #imm,Rn */
	UPD(0x0C0998C0u, 2);
L_0C0998C0: BLKS(0x0C0998C0u);
	r0 = r12;  /* 0C0998C0 mov Rm,Rn */
	r0 += r0;  /* 0C0998C2 add Rm,Rn */
	IF(0x0C0998C4u); r10 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0998C6u, 3);  /* 0C0998C4 mov.w @(r0,Rm),Rn */
	r9 = 0x28u;  /* 0C0998C6 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0998CAu, 2);  /* 0C0998C8 mov.w @(disp,pc),Rn */
	IF(0x0C0998CAu); MACL = r10 * r8;  /* 0C0998CA mul.l Rm,Rn */
	r2 = 0xC1D5464u; UPD(0x0C0998CEu, 3);  /* 0C0998CC mov.l @(disp,pc),Rn */
	IF(0x0C0998CEu); r8 = MACL;  /* 0C0998CE sts macl,Rn */
	IF(0x0C0998D0u); MACL = r12 * r9;  /* 0C0998D0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0998D4u, 4);  /* 0C0998D2 mov.l @(disp,pc),Rn */
	IF(0x0C0998D4u); r9 = MACL;  /* 0C0998D4 sts macl,Rn */
	r9 += r2;  /* 0C0998D6 add Rm,Rn */
	r7 = r9;  /* 0C0998D8 mov Rm,Rn */
	{ u32 v_ = R32(r7); r7 += 4; r3 = v_; } UPD(0x0C0998DCu, 4);  /* 0C0998DA mov.l @Rm+,Rn */
	r8 += r0;  /* 0C0998DC add Rm,Rn */
	r1 = 0xC0000100u; UPD(0x0C0998E0u, 2);  /* 0C0998DE mov.l @(disp,pc),Rn */
	r9 += 0x6u;  /* 0C0998E0 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C0998E4u, 2);  /* 0C0998E2 mov.w @Rm,Rn */
	r3 |= r1;  /* 0C0998E4 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0998E8u, 2);  /* 0C0998E6 mov.l Rm,@Rn */
	r0 += r0;  /* 0C0998E8 add Rm,Rn */
	IF(0x0C0998EAu); r6 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0998ECu, 2);  /* 0C0998EA mov.w @(r0,Rm),Rn */
	r8 += 0x7Cu;  /* 0C0998EC add #imm,Rn */
	W16(r8, r6); UPD(0x0C0998F0u, 2);  /* 0C0998EE mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r0 = v_; } UPD(0x0C0998F2u, 1);  /* 0C0998F0 mov.w @Rm+,Rn */
	r8 += 0x2u;  /* 0C0998F2 add #imm,Rn */
	r0 += r0;  /* 0C0998F4 add Rm,Rn */
	IF(0x0C0998F6u); r5 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0998F8u, 3);  /* 0C0998F6 mov.w @(r0,Rm),Rn */
	W16(r8, r5); UPD(0x0C0998FAu, 1);  /* 0C0998F8 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0998FCu, 1);  /* 0C0998FA mov.w @Rm,Rn */
	r8 += 0xFFFFFF82u;  /* 0C0998FC add #imm,Rn */
	r0 += r0;  /* 0C0998FE add Rm,Rn */
	IF(0x0C099900u); r4 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C099902u, 3);  /* 0C099900 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFF8u;  /* 0C099902 add #imm,Rn */
	r0 = 0x80u; UPD(0x0C099906u, 2);  /* 0C099904 mov.w @(disp,pc),Rn */
	IF(0x0C099906u); W16(r0 + r8, r4); UPD(0x0C099908u, 1);  /* 0C099906 mov.w Rm,@(r0,Rn) */
	r0 = 0x4Au;  /* 0C099908 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C09990Cu, 2);  /* 0C09990A mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C09990C mov Rm,Rn */
	r2 = 0xC0A02D0u; UPD(0x0C099910u, 2);  /* 0C09990E mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C099912u, 1);  /* 0C099910 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C099914u, 1);  /* 0C099912 mov.l Rm,@(disp,Rn) */
	IF(0x0C099914u); { u32 t_ = r2; PR = 0x0C099918u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C099918u); }  /* 0C099914 jsr @Rn */
L_0C099918: BLKS(0x0C099918u);
	r7 = 0xC0A1530u; UPD(0x0C09991Au, 1);  /* 0C099918 mov.l @(disp,pc),Rn */
	IF(0x0C09991Au); { u32 t_ = r7; PR = 0x0C09991Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C09991Eu); }  /* 0C09991A jsr @Rn */
L_0C09991E: BLKS(0x0C09991Eu);
	r6 = 0xFF800000u; UPD(0x0C099920u, 1);  /* 0C09991E mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C099920 mov #imm,Rn */
	r5 = 0x2000000u; UPD(0x0C099924u, 2);  /* 0C099922 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C099926u, 1);  /* 0C099924 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r5); UPD(0x0C099928u, 1);  /* 0C099926 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x10u); UPD(0x0C09992Au, 1);  /* 0C099928 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C09992Cu, 1);  /* 0C09992A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x14u); UPD(0x0C09992Eu, 1);  /* 0C09992C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C099930u, 1);  /* 0C09992E mov.l Rm,@(disp,Rn) */
	r9 += 0x18u;  /* 0C099930 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C099934u, 2);  /* 0C099932 mov.w @Rm,Rn */
	r0 = 0x88u; UPD(0x0C099936u, 1);  /* 0C099934 mov.w @(disp,pc),Rn */
	r9 += 0x9u;  /* 0C099936 add #imm,Rn */
	IF(0x0C099938u); W16(r0 + r8, r3); UPD(0x0C09993Au, 2);  /* 0C099938 mov.w Rm,@(r0,Rn) */
	r0 += 0x21u;  /* 0C09993A add #imm,Rn */
	IF(0x0C09993Cu); W8(r0 + r8, r2); UPD(0x0C09993Eu, 2);  /* 0C09993C mov.b Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C099940u, 1);  /* 0C09993E mov.b @Rm,Rn */
	r0 += 0x6u;  /* 0C099940 add #imm,Rn */
	IF(0x0C099942u); W8(r0 + r8, r10); UPD(0x0C099944u, 2);  /* 0C099942 mov.b Rm,@(r0,Rn) */
	r9 += 0xFFFFFFDFu;  /* 0C099944 add #imm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C099948u, 2);  /* 0C099946 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFF5u;  /* 0C099948 add #imm,Rn */
	r7 = R32(r9 + 0x1Cu); UPD(0x0C09994Cu, 2);  /* 0C09994A mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C09994C add #imm,Rn */
	W32(r8, r7); UPD(0x0C099950u, 2);  /* 0C09994E mov.l Rm,@Rn */
	r9 += 0x22u;  /* 0C099950 add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C099954u, 2);  /* 0C099952 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C099954 add #imm,Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C099958u, 2);  /* 0C099956 mov.l Rm,@(disp,Rn) */
	r2 = r12;  /* 0C099958 mov Rm,Rn */
	r3 = 0xA0u; UPD(0x0C09995Cu, 2);  /* 0C09995A mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09995C add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r5 = v_; } UPD(0x0C099960u, 2);  /* 0C09995E mov.b @Rm+,Rn */
	r3 += r8;  /* 0C099960 add Rm,Rn */
	r3 += 0x1u;  /* 0C099962 add #imm,Rn */
	W8(r3, r5); UPD(0x0C099966u, 3);  /* 0C099964 mov.b Rm,@Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C099966 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r4 = v_; } UPD(0x0C09996Au, 2);  /* 0C099968 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C09996A add #imm,Rn */
	W8(r3, r4); UPD(0x0C09996Eu, 2);  /* 0C09996C mov.b Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C099970u, 1);  /* 0C09996E mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C099970 add #imm,Rn */
	IF(0x0C099972u); W8(r0 + r8, r11); UPD(0x0C099974u, 2);  /* 0C099972 mov.b Rm,@(r0,Rn) */
	r8 += 0x6Cu;  /* 0C099974 add #imm,Rn */
	W32(r8, r11); UPD(0x0C099978u, 2);  /* 0C099976 mov.l Rm,@Rn */
	r0 = 0x66u;  /* 0C099978 mov #imm,Rn */
	{ u32 v_ = r11; r8 -= 4; W32(r8, v_); } UPD(0x0C09997Cu, 2);  /* 0C09997A mov.l Rm,@-Rn */
	T = (s32)r12 > (s32)r0;  /* 0C09997C cmp/gt Rm,Rn */
	W8(r3, r1); UPD(0x0C099980u, 2);  /* 0C09997E mov.b Rm,@Rn */
	{ u32 c_ = !T; { u32 v_ = r11; r8 -= 4; W32(r8, v_); } /* slot mov.l Rm,@-Rn */ if (c_) { UPD(0x0C0998C0u, 3); goto L_0C0998C0; } UPD(0x0C099984u, 1); goto L_0C099984; }  /* 0C099980 bf/s */
L_0C099984: BLKS(0x0C099984u);
	r13 = 0xC392AFDu; UPD(0x0C099986u, 1);  /* 0C099984 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C099986 mov #imm,Rn */
	r11 = 0xC392AFEu; UPD(0x0C09998Au, 2);  /* 0C099988 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C09998A mov #imm,Rn */
	W8(r13, r12); UPD(0x0C09998Eu, 2);  /* 0C09998C mov.b Rm,@Rn */
	{ W8(r11, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C099890u, 3); goto L_0C099890; }  /* 0C09998E bra */
}

void f_0C0999E0(sh3_t *c)
{
	LOCALS;
L_0C0999E0: BLKS(0x0C0999E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0999E2u, 1);  /* 0C0999E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0999E4u, 1);  /* 0C0999E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0999E6u, 1);  /* 0C0999E4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0999E6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0999EAu, 2);  /* 0C0999E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0999ECu, 1);  /* 0C0999EA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0999EEu, 1);  /* 0C0999EC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0999F0u, 1);  /* 0C0999EE mov.l Rm,@-Rn */
	IF(0x0C0999F0u); MACL = r9 * r3;  /* 0C0999F0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0999F4u, 3);  /* 0C0999F2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0999F6u, 1);  /* 0C0999F4 mov.l @(disp,pc),Rn */
	IF(0x0C0999F6u); r2 = MACL;  /* 0C0999F6 sts macl,Rn */
	IF(0x0C0999F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0999FAu, 2);  /* 0C0999F8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0999FA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0999FEu, 2);  /* 0C0999FC mov.l @(disp,Rm),Rn */
	r0 = 0x53u;  /* 0C0999FE mov #imm,Rn */
	T = r2 > r0;  /* 0C099A00 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099A0Au, 5); goto L_0C099A0A; } goto L_0C099A06; }  /* 0C099A02 bf/s */
L_0C099A06: BLKS(0x0C099A06u);
	{ IF(0x0C099A08u); ; /* slot nop */ UPD(0x0C099E50u, 4); goto L_0C099E50; }  /* 0C099A06 bra */
L_0C099A0A: BLKS(0x0C099A0Au);
	r0 = 0xC099A1Cu;  /* 0C099A0A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C099A0C add Rm,Rn */
	IF(0x0C099A0Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C099A10u, 3);  /* 0C099A0E mov.w @(r0,Rm),Rn */
	IF(0x0C099A10u); { u32 tv_ = (r4 + 0x0C099A14u); u32 t_ = PHYS(tv_); IF(0x0C099A12u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C099AD0u: goto L_0C099AD0; case 0x0C099B00u: goto L_0C099B00; case 0x0C099B70u: goto L_0C099B70; case 0x0C099BA0u: goto L_0C099BA0; case 0x0C099BE0u: goto L_0C099BE0; case 0x0C099C10u: goto L_0C099C10; case 0x0C099CA0u: goto L_0C099CA0; case 0x0C099D00u: goto L_0C099D00; case 0x0C099D40u: goto L_0C099D40; case 0x0C099DC0u: goto L_0C099DC0; case 0x0C099DF0u: goto L_0C099DF0; case 0x0C099E20u: goto L_0C099E20; case 0x0C099E50u: goto L_0C099E50; default: JUMPD(tv_); } }  /* 0C099A10 braf Rn */
L_0C099AD0: BLKS(0x0C099AD0u);
	r8 = 0xB4u; UPD(0x0C099AD2u, 1);  /* 0C099AD0 mov.w @(disp,pc),Rn */
	IF(0x0C099AD2u); MACL = r9 * r8;  /* 0C099AD2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C099AD6u, 3);  /* 0C099AD4 mov.l @(disp,pc),Rn */
	IF(0x0C099AD6u); r5 = MACL;  /* 0C099AD6 sts macl,Rn */
	r5 += r7;  /* 0C099AD8 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C099ADCu, 3);  /* 0C099ADA mov.l @Rm,Rn */
	r1 = 0x20000000u; UPD(0x0C099ADEu, 1);  /* 0C099ADC mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C099ADE or Rm,Rn */
	W32(r5, r6); UPD(0x0C099AE2u, 2);  /* 0C099AE0 mov.l Rm,@Rn */
	IF(0x0C099AE2u); ;  /* 0C099AE2 nop */
	UPD(0x0C099AE4u, 1);
L_0C099AE4: BLKS(0x0C099AE4u);
	r15 = r14;  /* 0C099AE4 mov Rm,Rn */
	IF(0x0C099AE6u); PR = R32(r15); r15 += 4; UPD(0x0C099AE8u, 2);  /* 0C099AE6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AEAu, 1);  /* 0C099AE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	IF(0x0C099AF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099AF4 rts */
L_0C099B00: BLKS(0x0C099B00u);
	r10 = 0xB4u; UPD(0x0C099B02u, 1);  /* 0C099B00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099B02 add #imm,Rn */
	IF(0x0C099B04u); MACL = r9 * r10;  /* 0C099B04 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099B08u, 4);  /* 0C099B06 mov.l @(disp,pc),Rn */
	IF(0x0C099B08u); r11 = MACL;  /* 0C099B08 sts macl,Rn */
	r11 += r0;  /* 0C099B0A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C099B0Eu, 3);  /* 0C099B0C mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C099B0E mov #imm,Rn */
	IF(0x0C099B10u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C099B12u, 2);  /* 0C099B10 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C099B12 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C099B16u, 2);  /* 0C099B14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099B16 add #imm,Rn */
	IF(0x0C099B18u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C099B1Au, 2);  /* 0C099B18 mov.b @(r0,Rm),Rn */
	r2 = r5 & 0xFF;  /* 0C099B1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C099B1Eu, 2);  /* 0C099B1C mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C099B1E mov #imm,Rn */
	r8 = 0xC0AB240u; UPD(0x0C099B22u, 2);  /* 0C099B20 mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C099B24u, 1);  /* 0C099B22 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099B26u, 1);  /* 0C099B24 mov.l @(disp,Rm),Rn */
	IF(0x0C099B26u); { u32 t_ = r8; PR = 0x0C099B2Au; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C099B2Au); }  /* 0C099B26 jsr @Rn */
L_0C099B2A: BLKS(0x0C099B2Au);
	r3 = R32(r11); UPD(0x0C099B2Cu, 1);  /* 0C099B2A mov.l @Rm,Rn */
	r15 += 0x8u;  /* 0C099B2C add #imm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C099B30u, 2);  /* 0C099B2E mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C099B30 mov #imm,Rn */
	r13 = 0x98u; UPD(0x0C099B34u, 2);  /* 0C099B32 mov.w @(disp,pc),Rn */
	r3 &= r4;  /* 0C099B34 and Rm,Rn */
	r13 += r11;  /* 0C099B36 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C099B3Au, 3);  /* 0C099B38 mov.w @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C099B3A add #imm,Rn */
	W32(r11, r3); UPD(0x0C099B3Eu, 2);  /* 0C099B3C mov.l Rm,@Rn */
	r9 += r11;  /* 0C099B3E add Rm,Rn */
	r12 = 0xA0u; UPD(0x0C099B42u, 2);  /* 0C099B40 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C099B42 mov #imm,Rn */
	W8(r13, r10); UPD(0x0C099B46u, 2);  /* 0C099B44 mov.b Rm,@Rn */
	r11 += r12;  /* 0C099B46 add Rm,Rn */
	{ u32 v_ = r10; r13 -= 1; W8(r13, v_); } UPD(0x0C099B4Au, 2);  /* 0C099B48 mov.b Rm,@-Rn */
	W8(r11, r10); UPD(0x0C099B4Cu, 1);  /* 0C099B4A mov.b Rm,@Rn */
	W8(r9, r10); UPD(0x0C099B4Eu, 1);  /* 0C099B4C mov.b Rm,@Rn */
	r0 = 0xC04E7E8u; UPD(0x0C099B50u, 1);  /* 0C099B4E mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C099B50 mov Rm,Rn */
	IF(0x0C099B52u); PR = R32(r15); r15 += 4; UPD(0x0C099B54u, 2);  /* 0C099B52 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099B56u, 1);  /* 0C099B54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099B58u, 1);  /* 0C099B56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099B5Au, 1);  /* 0C099B58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099B5Cu, 1);  /* 0C099B5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099B5Eu, 1);  /* 0C099B5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099B60u, 1);  /* 0C099B5E mov.l @Rm+,Rn */
	IF(0x0C099B60u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04E7E8u: TAIL(f_0C04E7E8); default: JUMPD(tv_); } }  /* 0C099B60 jmp @Rn */
L_0C099B70: BLKS(0x0C099B70u);
	r13 = 0xC058030u; UPD(0x0C099B72u, 1);  /* 0C099B70 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C099B72 mov #imm,Rn */
	r12 = 0xFu;  /* 0C099B74 mov #imm,Rn */
	IF(0x0C099B76u); ;  /* 0C099B76 nop */
	UPD(0x0C099B78u, 3);
L_0C099B78: BLKS(0x0C099B78u);
	r4 = 0xB4u; UPD(0x0C099B7Au, 1);  /* 0C099B78 mov.w @(disp,pc),Rn */
	r2 = 0xC058060u; UPD(0x0C099B7Cu, 1);  /* 0C099B7A mov.l @(disp,pc),Rn */
	IF(0x0C099B7Cu); MACL = r9 * r4;  /* 0C099B7C mul.l Rm,Rn */
	r5 = 0x240000u; UPD(0x0C099B80u, 3);  /* 0C099B7E mov.l @(disp,pc),Rn */
	IF(0x0C099B80u); r10 = MACL;  /* 0C099B80 sts macl,Rn */
	IF(0x0C099B82u); { u32 t_ = r2; PR = 0x0C099B86u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C099B86u); }  /* 0C099B82 jsr @Rn */
L_0C099B86: BLKS(0x0C099B86u);
	r5 = 0x280000u; UPD(0x0C099B88u, 1);  /* 0C099B86 mov.l @(disp,pc),Rn */
	IF(0x0C099B88u); { u32 t_ = r13; PR = 0x0C099B8Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C099B8Cu); }  /* 0C099B88 jsr @Rn */
L_0C099B8C: BLKS(0x0C099B8Cu);
	r3 = r8;  /* 0C099B8C mov Rm,Rn */
	r3 += 0x1u;  /* 0C099B8E add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C099B90 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C099B92 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099B78u, 7); goto L_0C099B78; } goto L_0C099B98; }  /* 0C099B94 bf/s */
L_0C099B98: BLKS(0x0C099B98u);
	r2 = 0xC26CD40u; UPD(0x0C099B9Au, 2);  /* 0C099B98 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C099B9A mov Rm,Rn */
	UPD(0x0C099B9Cu, 1);
L_0C099B9C: BLKS(0x0C099B9Cu);
	{ IF(0x0C099B9Eu); W32(r0 + r2, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099B9C bra */
L_0C099BA0: BLKS(0x0C099BA0u);
	r8 = 0xB4u; UPD(0x0C099BA2u, 1);  /* 0C099BA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099BA2 add #imm,Rn */
	IF(0x0C099BA4u); MACL = r9 * r8;  /* 0C099BA4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C099BA8u, 4);  /* 0C099BA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C099BAAu, 1);  /* 0C099BA8 mov.w @(disp,pc),Rn */
	IF(0x0C099BAAu); r8 = MACL;  /* 0C099BAA sts macl,Rn */
	r8 += r5;  /* 0C099BAC add Rm,Rn */
	IF(0x0C099BAEu); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099BB0u, 3);  /* 0C099BAE mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C099BB0 mov #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C099BB2 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C099BB6u, 3);  /* 0C099BB4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099BB6 add #imm,Rn */
	IF(0x0C099BB8u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099BBAu, 2);  /* 0C099BB8 mov.b @(r0,Rm),Rn */
	r9 = r11 & 0xFF;  /* 0C099BBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C099BBEu, 2);  /* 0C099BBC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C099BC0u, 1);  /* 0C099BBE mov.l @Rm,Rn */
L_0C099BC0: BLKS(0x0C099BC0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C099BC2u, 1);  /* 0C099BC0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C099BC4u, 1);  /* 0C099BC2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C099BC6u, 1);  /* 0C099BC4 mov.l @(disp,pc),Rn */
L_0C099BC6: BLKS(0x0C099BC6u);
	IF(0x0C099BC6u); { u32 t_ = r0; PR = 0x0C099BCAu; IF(0x0C099BC8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C099BCAu); }  /* 0C099BC6 jsr @Rn */
L_0C099BCA: BLKS(0x0C099BCAu);
	r5 = 0x0u;  /* 0C099BCA mov #imm,Rn */
	W32(r8, r5); UPD(0x0C099BCEu, 2);  /* 0C099BCC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BCE bra */
L_0C099BE0: BLKS(0x0C099BE0u);
	r2 = 0xB4u; UPD(0x0C099BE2u, 1);  /* 0C099BE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099BE2 add #imm,Rn */
	IF(0x0C099BE4u); MACL = r9 * r2;  /* 0C099BE4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099BE8u, 4);  /* 0C099BE6 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C099BE8 mov #imm,Rn */
	IF(0x0C099BEAu); r8 = MACL;  /* 0C099BEA sts macl,Rn */
	r8 += r0;  /* 0C099BEC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C099BF0u, 4);  /* 0C099BEE mov.w @(disp,pc),Rn */
	IF(0x0C099BF0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099BF2u, 1);  /* 0C099BF0 mov.b @(r0,Rm),Rn */
	r10 = r3 & 0xFF;  /* 0C099BF2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C099BF6u, 2);  /* 0C099BF4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099BF6 add #imm,Rn */
	IF(0x0C099BF8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099BFAu, 2);  /* 0C099BF8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C099BFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C099BFEu, 2);  /* 0C099BFC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C099BC0u, 3); goto L_0C099BC0; }  /* 0C099BFE bra */
L_0C099C10: BLKS(0x0C099C10u);
	r11 = 0xC0A03F0u; UPD(0x0C099C12u, 1);  /* 0C099C10 mov.l @(disp,pc),Rn */
	IF(0x0C099C12u); { u32 t_ = r11; PR = 0x0C099C16u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C099C16u); }  /* 0C099C12 jsr @Rn */
L_0C099C16: BLKS(0x0C099C16u);
	IF(0x0C099C16u); T = (s32)r0 >= 0;  /* 0C099C16 cmp/pz Rn */
	if (!T) { UPD(0x0C099C46u, 4); goto L_0C099C46; }  /* 0C099C18 bf */
L_0C099C1A: BLKS(0x0C099C1Au);
	r10 = 0xB4u; UPD(0x0C099C1Cu, 1);  /* 0C099C1A mov.w @(disp,pc),Rn */
	IF(0x0C099C1Cu); MACL = r9 * r10;  /* 0C099C1C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C099C20u, 3);  /* 0C099C1E mov.l @(disp,pc),Rn */
	IF(0x0C099C20u); r0 = MACL;  /* 0C099C20 sts macl,Rn */
	r0 += r7;  /* 0C099C22 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C099C24 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C099C28u, 4);  /* 0C099C26 mov.w @Rm,Rn */
	IF(0x0C099C28u); MACL = r1 * r10;  /* 0C099C28 mul.l Rm,Rn */
	r8 = 0xA6u; UPD(0x0C099C2Cu, 3);  /* 0C099C2A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C099C2C add #imm,Rn */
	IF(0x0C099C2Eu); r4 = MACL;  /* 0C099C2E sts macl,Rn */
	r4 += r7;  /* 0C099C30 add Rm,Rn */
	r8 += r4;  /* 0C099C32 add Rm,Rn */
	r5 = 0xA1u; UPD(0x0C099C36u, 5);  /* 0C099C34 mov.w @(disp,pc),Rn */
	r4 += 0x68u;  /* 0C099C36 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C099C3Au, 2);  /* 0C099C38 mov.b @Rm,Rn */
	r12 = R32(r4); UPD(0x0C099C3Cu, 1);  /* 0C099C3A mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C099C3C add #imm,Rn */
	IF(0x0C099C3Eu); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C099C40u, 2);  /* 0C099C3E mov.b @(r0,Rm),Rn */
	r12 |= r13;  /* 0C099C40 or Rm,Rn */
	W8(r8, r6); UPD(0x0C099C44u, 2);  /* 0C099C42 mov.b Rm,@Rn */
	W32(r4, r12); UPD(0x0C099C46u, 1);  /* 0C099C44 mov.l Rm,@Rn */
L_0C099C46: BLKS(0x0C099C46u);
	r1 = 0xC0A1140u; UPD(0x0C099C48u, 1);  /* 0C099C46 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C099C48 mov Rm,Rn */
	UPD(0x0C099C4Au, 1);
L_0C099C4A: BLKS(0x0C099C4Au);
	r15 = r14;  /* 0C099C4A mov Rm,Rn */
	IF(0x0C099C4Cu); PR = R32(r15); r15 += 4; UPD(0x0C099C4Eu, 2);  /* 0C099C4C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099C50u, 1);  /* 0C099C4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099C52u, 1);  /* 0C099C50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099C54u, 1);  /* 0C099C52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099C56u, 1);  /* 0C099C54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099C58u, 1);  /* 0C099C56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099C5Au, 1);  /* 0C099C58 mov.l @Rm+,Rn */
	IF(0x0C099C5Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0FB0u: goto L_0C0A0FB0; case 0x0C0A1140u: TAIL(f_0C0A1140); default: JUMPD(tv_); } }  /* 0C099C5A jmp @Rn */
L_0C099CA0: BLKS(0x0C099CA0u);
	r8 = 0xC0A03F0u; UPD(0x0C099CA2u, 1);  /* 0C099CA0 mov.l @(disp,pc),Rn */
	IF(0x0C099CA2u); { u32 t_ = r8; PR = 0x0C099CA6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C099CA6u); }  /* 0C099CA2 jsr @Rn */
L_0C099CA6: BLKS(0x0C099CA6u);
	IF(0x0C099CA6u); T = (s32)r0 >= 0;  /* 0C099CA6 cmp/pz Rn */
	if (!T) { UPD(0x0C099CD6u, 4); goto L_0C099CD6; }  /* 0C099CA8 bf */
L_0C099CAA: BLKS(0x0C099CAAu);
	r6 = 0xB4u; UPD(0x0C099CACu, 1);  /* 0C099CAA mov.w @(disp,pc),Rn */
	IF(0x0C099CACu); MACL = r9 * r6;  /* 0C099CAC mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C099CB0u, 3);  /* 0C099CAE mov.l @(disp,pc),Rn */
	IF(0x0C099CB0u); r0 = MACL;  /* 0C099CB0 sts macl,Rn */
	r0 += r5;  /* 0C099CB2 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C099CB4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C099CB8u, 4);  /* 0C099CB6 mov.w @Rm,Rn */
	IF(0x0C099CB8u); MACL = r7 * r6;  /* 0C099CB8 mul.l Rm,Rn */
	r12 = 0xA7u; UPD(0x0C099CBCu, 3);  /* 0C099CBA mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C099CBC add #imm,Rn */
	IF(0x0C099CBEu); r11 = MACL;  /* 0C099CBE sts macl,Rn */
	r11 += r5;  /* 0C099CC0 add Rm,Rn */
	r12 += r11;  /* 0C099CC2 add Rm,Rn */
	r2 = 0xA1u; UPD(0x0C099CC6u, 5);  /* 0C099CC4 mov.w @(disp,pc),Rn */
	r11 += 0x6Cu;  /* 0C099CC6 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C099CCAu, 2);  /* 0C099CC8 mov.b @Rm,Rn */
	r3 = R32(r11); UPD(0x0C099CCCu, 1);  /* 0C099CCA mov.l @Rm,Rn */
	r13 += 0x1u;  /* 0C099CCC add #imm,Rn */
	IF(0x0C099CCEu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C099CD0u, 2);  /* 0C099CCE mov.b @(r0,Rm),Rn */
	r3 |= r4;  /* 0C099CD0 or Rm,Rn */
	W8(r12, r13); UPD(0x0C099CD4u, 2);  /* 0C099CD2 mov.b Rm,@Rn */
	W32(r11, r3); UPD(0x0C099CD6u, 1);  /* 0C099CD4 mov.l Rm,@Rn */
L_0C099CD6: BLKS(0x0C099CD6u);
	IF(0x0C099CD6u); { u32 t_ = r8; PR = 0x0C099CDAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C099CDAu); }  /* 0C099CD6 jsr @Rn */
L_0C099CDA: BLKS(0x0C099CDAu);
	IF(0x0C099CDAu); T = (s32)r0 >= 0;  /* 0C099CDA cmp/pz Rn */
	if (!T) { UPD(0x0C099CF2u, 4); goto L_0C099CF2; }  /* 0C099CDC bf */
L_0C099CDE: BLKS(0x0C099CDEu);
	r3 = 0xB4u; UPD(0x0C099CE0u, 1);  /* 0C099CDE mov.w @(disp,pc),Rn */
	IF(0x0C099CE0u); MACL = r0 * r3;  /* 0C099CE0 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C099CE4u, 3);  /* 0C099CE2 mov.l @(disp,pc),Rn */
	IF(0x0C099CE4u); r0 = MACL;  /* 0C099CE4 sts macl,Rn */
	r10 = 0xA7u; UPD(0x0C099CE8u, 2);  /* 0C099CE6 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C099CE8 add Rm,Rn */
	r0 += r10;  /* 0C099CEA add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C099CEEu, 3);  /* 0C099CEC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C099CEE add #imm,Rn */
	W8(r0, r8); UPD(0x0C099CF2u, 2);  /* 0C099CF0 mov.b Rm,@Rn */
L_0C099CF2: BLKS(0x0C099CF2u);
	r1 = 0xC0A0FB0u; UPD(0x0C099CF4u, 1);  /* 0C099CF2 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C099C4Au, 3); goto L_0C099C4A; }  /* 0C099CF4 bra */
L_0C099D00: BLKS(0x0C099D00u);
	r12 = 0xC0A03F0u; UPD(0x0C099D02u, 1);  /* 0C099D00 mov.l @(disp,pc),Rn */
	IF(0x0C099D02u); { u32 t_ = r12; PR = 0x0C099D06u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C099D06u); }  /* 0C099D02 jsr @Rn */
L_0C099D06: BLKS(0x0C099D06u);
	IF(0x0C099D06u); T = (s32)r0 >= 0;  /* 0C099D06 cmp/pz Rn */
	if (!T) { UPD(0x0C099D1Eu, 4); goto L_0C099D1E; }  /* 0C099D08 bf */
L_0C099D0A: BLKS(0x0C099D0Au);
	r6 = 0xB4u; UPD(0x0C099D0Cu, 1);  /* 0C099D0A mov.w @(disp,pc),Rn */
	IF(0x0C099D0Cu); MACL = r0 * r6;  /* 0C099D0C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C099D10u, 3);  /* 0C099D0E mov.l @(disp,pc),Rn */
	IF(0x0C099D10u); r4 = MACL;  /* 0C099D10 sts macl,Rn */
	r13 = 0xA5u; UPD(0x0C099D14u, 2);  /* 0C099D12 mov.w @(disp,pc),Rn */
	r4 += r5;  /* 0C099D14 add Rm,Rn */
	r4 += r13;  /* 0C099D16 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C099D1Au, 3);  /* 0C099D18 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C099D1A add #imm,Rn */
	W8(r4, r2); UPD(0x0C099D1Eu, 2);  /* 0C099D1C mov.b Rm,@Rn */
L_0C099D1E: BLKS(0x0C099D1Eu);
	r8 = 0xB4u; UPD(0x0C099D20u, 1);  /* 0C099D1E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099D20 add #imm,Rn */
	IF(0x0C099D22u); MACL = r9 * r8;  /* 0C099D22 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099D26u, 4);  /* 0C099D24 mov.l @(disp,pc),Rn */
	IF(0x0C099D26u); r8 = MACL;  /* 0C099D26 sts macl,Rn */
	r8 += r0;  /* 0C099D28 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C099D2Cu, 3);  /* 0C099D2A mov.w @(disp,pc),Rn */
	IF(0x0C099D2Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099D2Eu, 1);  /* 0C099D2C mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C099D2E extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C099D32u, 2);  /* 0C099D30 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099D32 add #imm,Rn */
	IF(0x0C099D34u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099D36u, 2);  /* 0C099D34 mov.b @(r0,Rm),Rn */
L_0C099D36: BLKS(0x0C099D36u);
	r11 = r1 & 0xFF;  /* 0C099D36 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C099D3Au, 2);  /* 0C099D38 mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C099D3A mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C099BC0u, 4); goto L_0C099BC0; }  /* 0C099D3C bra */
L_0C099D40: BLKS(0x0C099D40u);
	r10 = 0xC0A03F0u; UPD(0x0C099D42u, 1);  /* 0C099D40 mov.l @(disp,pc),Rn */
	IF(0x0C099D42u); { u32 t_ = r10; PR = 0x0C099D46u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C099D46u); }  /* 0C099D42 jsr @Rn */
L_0C099D46: BLKS(0x0C099D46u);
	IF(0x0C099D46u); T = (s32)r0 >= 0;  /* 0C099D46 cmp/pz Rn */
	if (!T) { UPD(0x0C099D5Eu, 4); goto L_0C099D5E; }  /* 0C099D48 bf */
L_0C099D4A: BLKS(0x0C099D4Au);
	r2 = 0xB4u; UPD(0x0C099D4Cu, 1);  /* 0C099D4A mov.w @(disp,pc),Rn */
	IF(0x0C099D4Cu); MACL = r0 * r2;  /* 0C099D4C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C099D50u, 3);  /* 0C099D4E mov.l @(disp,pc),Rn */
	IF(0x0C099D50u); r11 = MACL;  /* 0C099D50 sts macl,Rn */
	r12 = 0xA5u; UPD(0x0C099D54u, 2);  /* 0C099D52 mov.w @(disp,pc),Rn */
	r11 += r4;  /* 0C099D54 add Rm,Rn */
	r11 += r12;  /* 0C099D56 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C099D5Au, 3);  /* 0C099D58 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C099D5A add #imm,Rn */
	W8(r11, r3); UPD(0x0C099D5Eu, 2);  /* 0C099D5C mov.b Rm,@Rn */
L_0C099D5E: BLKS(0x0C099D5Eu);
	r7 = 0xB4u; UPD(0x0C099D60u, 1);  /* 0C099D5E mov.w @(disp,pc),Rn */
	r10 = 0xFFFFFFFFu;  /* 0C099D60 mov #imm,Rn */
	IF(0x0C099D62u); MACL = r9 * r7;  /* 0C099D62 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C099D66u, 4);  /* 0C099D64 mov.l @(disp,pc),Rn */
	IF(0x0C099D66u); r8 = MACL;  /* 0C099D66 sts macl,Rn */
	r8 += r12;  /* 0C099D68 add Rm,Rn */
	r8 += 0x7Eu;  /* 0C099D6A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C099D6Eu, 4);  /* 0C099D6C mov.w @Rm,Rn */
	IF(0x0C099D6Eu); MACL = r4 * r7;  /* 0C099D6E mul.l Rm,Rn */
	r0 = 0x80u; UPD(0x0C099D72u, 3);  /* 0C099D70 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C099D72 add #imm,Rn */
	IF(0x0C099D74u); r7 = MACL;  /* 0C099D74 sts macl,Rn */
	r7 += r12;  /* 0C099D76 add Rm,Rn */
	r1 = r7;  /* 0C099D78 mov Rm,Rn */
	r1 += r0;  /* 0C099D7A add Rm,Rn */
	r11 = R32(r7); UPD(0x0C099D7Eu, 6);  /* 0C099D7C mov.l @Rm,Rn */
	r0 += r8;  /* 0C099D7E add Rm,Rn */
	r1 += 0x2u;  /* 0C099D80 add #imm,Rn */
	r0 += 0x2u;  /* 0C099D82 add #imm,Rn */
	T = (r11 & r11) == 0;  /* 0C099D84 tst Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C099D88u, 5);  /* 0C099D86 mov.w @Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C099D88 negc Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C099D8Cu, 2);  /* 0C099D8A mov.w @Rm,Rn */
	T = r9 == r6;  /* 0C099D8C cmp/eq Rm,Rn */
	IF(0x0C099D8Eu); r13 = T;  /* 0C099D8E movt Rn */
	T = (r5 & r13) == 0;  /* 0C099D90 tst Rm,Rn */
	if (T) { UPD(0x0C099DACu, 6); goto L_0C099DAC; }  /* 0C099D92 bt */
L_0C099D94: BLKS(0x0C099D94u);
	r13 = r7;  /* 0C099D94 mov Rm,Rn */
	r0 = 0xA5u; UPD(0x0C099D98u, 2);  /* 0C099D96 mov.w @(disp,pc),Rn */
	IF(0x0C099D98u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C099D9Au, 1);  /* 0C099D98 mov.b @(r0,Rm),Rn */
	r13 += 0x64u;  /* 0C099D9A add #imm,Rn */
	r6 += 0x1u;  /* 0C099D9C add #imm,Rn */
	IF(0x0C099D9Eu); W8(r0 + r7, r6); UPD(0x0C099DA0u, 3);  /* 0C099D9E mov.b Rm,@(r0,Rn) */
	r2 = 0xA1u; UPD(0x0C099DA2u, 1);  /* 0C099DA0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C099DA2 mov Rm,Rn */
	r3 = R32(r13); UPD(0x0C099DA6u, 2);  /* 0C099DA4 mov.l @Rm,Rn */
	IF(0x0C099DA6u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C099DA8u, 1);  /* 0C099DA6 mov.b @(r0,Rm),Rn */
	r3 |= r5;  /* 0C099DA8 or Rm,Rn */
	W32(r13, r3); UPD(0x0C099DACu, 2);  /* 0C099DAA mov.l Rm,@Rn */
L_0C099DAC: BLKS(0x0C099DACu);
	r0 = 0xB0u; UPD(0x0C099DAEu, 1);  /* 0C099DAC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099DAE add #imm,Rn */
	IF(0x0C099DB0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099DB2u, 2);  /* 0C099DB0 mov.b @(r0,Rm),Rn */
	r0 = r10 & 0xFF;  /* 0C099DB2 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C099DB6u, 2);  /* 0C099DB4 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C099DB8u, 1);  /* 0C099DB6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C099DB8 mov Rm,Rn */
	{ IF(0x0C099DBCu); r1 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C099D36u, 4); goto L_0C099D36; }  /* 0C099DBA bra */
L_0C099DC0: BLKS(0x0C099DC0u);
	r8 = 0xB4u; UPD(0x0C099DC2u, 1);  /* 0C099DC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099DC2 add #imm,Rn */
	IF(0x0C099DC4u); MACL = r9 * r8;  /* 0C099DC4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099DC8u, 4);  /* 0C099DC6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C099DC8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C099DCCu, 2);  /* 0C099DCA mov.w @(disp,pc),Rn */
	IF(0x0C099DCCu); r8 = MACL;  /* 0C099DCC sts macl,Rn */
	r8 += r3;  /* 0C099DCE add Rm,Rn */
	IF(0x0C099DD0u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099DD2u, 3);  /* 0C099DD0 mov.b @(r0,Rm),Rn */
	r4 = r13 & 0xFF;  /* 0C099DD2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C099DD6u, 2);  /* 0C099DD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099DD6 add #imm,Rn */
	IF(0x0C099DD8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099DDAu, 2);  /* 0C099DD8 mov.b @(r0,Rm),Rn */
	r12 = r7 & 0xFF;  /* 0C099DDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C099DDEu, 2);  /* 0C099DDC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C099DE0u, 1);  /* 0C099DDE mov.l @Rm,Rn */
L_0C099DE0: BLKS(0x0C099DE0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C099DE2u, 1);  /* 0C099DE0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C099DE4u, 1);  /* 0C099DE2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C099BC6u, 3); goto L_0C099BC6; }  /* 0C099DE4 bra */
L_0C099DF0: BLKS(0x0C099DF0u);
	r10 = 0xB4u; UPD(0x0C099DF2u, 1);  /* 0C099DF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099DF2 add #imm,Rn */
	IF(0x0C099DF4u); MACL = r9 * r10;  /* 0C099DF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C099DF8u, 4);  /* 0C099DF6 mov.l @(disp,pc),Rn */
	IF(0x0C099DF8u); r8 = MACL;  /* 0C099DF8 sts macl,Rn */
	r8 += r0;  /* 0C099DFA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C099DFEu, 3);  /* 0C099DFC mov.w @(disp,pc),Rn */
	IF(0x0C099DFEu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099E00u, 1);  /* 0C099DFE mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C099E00 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C099E04u, 2);  /* 0C099E02 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099E04 add #imm,Rn */
	IF(0x0C099E06u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099E08u, 2);  /* 0C099E06 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C099E08 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C099E0Cu, 2);  /* 0C099E0A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C099E0Eu, 1);  /* 0C099E0C mov.l @Rm,Rn */
	{ r5 = 0x5u; /* slot mov #imm,Rn */ UPD(0x0C099DE0u, 3); goto L_0C099DE0; }  /* 0C099E0E bra */
L_0C099E20: BLKS(0x0C099E20u);
	r3 = 0xB4u; UPD(0x0C099E22u, 1);  /* 0C099E20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099E22 add #imm,Rn */
	IF(0x0C099E24u); MACL = r9 * r3;  /* 0C099E24 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C099E28u, 4);  /* 0C099E26 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C099E28 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C099E2Cu, 2);  /* 0C099E2A mov.w @(disp,pc),Rn */
	IF(0x0C099E2Cu); r8 = MACL;  /* 0C099E2C sts macl,Rn */
	r8 += r13;  /* 0C099E2E add Rm,Rn */
	IF(0x0C099E30u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099E32u, 3);  /* 0C099E30 mov.b @(r0,Rm),Rn */
	r7 = r4 & 0xFF;  /* 0C099E32 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C099E36u, 2);  /* 0C099E34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C099E36 add #imm,Rn */
	IF(0x0C099E38u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C099E3Au, 2);  /* 0C099E38 mov.b @(r0,Rm),Rn */
	r11 = r12 & 0xFF;  /* 0C099E3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C099E3Eu, 2);  /* 0C099E3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C099DE0u, 3); goto L_0C099DE0; }  /* 0C099E3E bra */
L_0C099E50: BLKS(0x0C099E50u);
	r8 = 0xB4u; UPD(0x0C099E52u, 1);  /* 0C099E50 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C099E52 mov #imm,Rn */
	IF(0x0C099E54u); MACL = r9 * r8;  /* 0C099E54 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C099E58u, 4);  /* 0C099E56 mov.l @(disp,pc),Rn */
	{ IF(0x0C099E5Au); r0 = MACL; /* slot sts macl,Rn */ UPD(0x0C099B9Cu, 3); goto L_0C099B9C; }  /* 0C099E58 bra */
L_0C0A0FB0: BLKS(0x0C0A0FB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0FB2u, 1);  /* 0C0A0FB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0FB4u, 1);  /* 0C0A0FB2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0FB4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0FB8u, 2);  /* 0C0A0FB6 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A0FB8 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A0FBCu, 2);  /* 0C0A0FBA mov.l @(disp,pc),Rn */
	IF(0x0C0A0FBCu); r15 -= 4; W32(r15, PR); UPD(0x0C0A0FBEu, 1);  /* 0C0A0FBC sts.l pr,@-Rn */
	IF(0x0C0A0FBEu); { u32 t_ = r9; PR = 0x0C0A0FC2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A0FC2u); }  /* 0C0A0FBE jsr @Rn */
L_0C0A0FC2: BLKS(0x0C0A0FC2u);
	r2 = r0;  /* 0C0A0FC2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A0FC4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A0FC6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A0FF0u, 6); goto L_0C0A0FF0; }  /* 0C0A0FC8 bt */
L_0C0A0FCA: BLKS(0x0C0A0FCAu);
	r0 = 0xC0A0FD8u;  /* 0C0A0FCA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A0FCC add Rm,Rn */
	IF(0x0C0A0FCEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A0FD0u, 3);  /* 0C0A0FCE mov.w @(r0,Rm),Rn */
	IF(0x0C0A0FD0u); { u32 tv_ = (r3 + 0x0C0A0FD4u); u32 t_ = PHYS(tv_); IF(0x0C0A0FD2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0FF0u: goto L_0C0A0FF0; case 0x0C0A1050u: goto L_0C0A1050; case 0x0C0A1080u: goto L_0C0A1080; case 0x0C0A10C0u: goto L_0C0A10C0; case 0x0C0A10F0u: goto L_0C0A10F0; default: JUMPD(tv_); } }  /* 0C0A0FD0 braf Rn */
L_0C0A0FF0: BLKS(0x0C0A0FF0u);
	r6 = 0xB4u; UPD(0x0C0A0FF2u, 1);  /* 0C0A0FF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0FF2 add #imm,Rn */
	IF(0x0C0A0FF4u); MACL = r8 * r6;  /* 0C0A0FF4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0FF8u, 4);  /* 0C0A0FF6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0FFAu, 1);  /* 0C0A0FF8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0FFAu); r3 = MACL;  /* 0C0A0FFA sts macl,Rn */
	r3 += r9;  /* 0C0A0FFC add Rm,Rn */
	IF(0x0C0A0FFEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1000u, 3);  /* 0C0A0FFE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A1000 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1004u, 2);  /* 0C0A1002 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1004 add #imm,Rn */
	IF(0x0C0A1006u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1008u, 2);  /* 0C0A1006 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A1008 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A100A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A100Eu, 3);  /* 0C0A100C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A1010u, 1);  /* 0C0A100E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1012u, 1);  /* 0C0A1010 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1014u, 1);  /* 0C0A1012 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A1016u, 1);  /* 0C0A1014 mov.l @(disp,Rm),Rn */
L_0C0A1016: BLKS(0x0C0A1016u);
	IF(0x0C0A1016u); { u32 t_ = r0; PR = 0x0C0A101Au; IF(0x0C0A1018u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A101Au); }  /* 0C0A1016 jsr @Rn */
L_0C0A101A: BLKS(0x0C0A101Au);
	r15 += 0x8u;  /* 0C0A101A add #imm,Rn */
	UPD(0x0C0A101Cu, 1);
L_0C0A101C: BLKS(0x0C0A101Cu);
	r6 = 0xB4u; UPD(0x0C0A101Eu, 1);  /* 0C0A101C mov.w @(disp,pc),Rn */
	IF(0x0C0A101Eu); MACL = r8 * r6;  /* 0C0A101E mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A1022u, 3);  /* 0C0A1020 mov.w @(disp,pc),Rn */
	IF(0x0C0A1022u); r8 = MACL;  /* 0C0A1022 sts macl,Rn */
	r8 += r9;  /* 0C0A1024 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A1028u, 3);  /* 0C0A1026 mov.l @(disp,pc),Rn */
	IF(0x0C0A1028u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A102Au, 1);  /* 0C0A1028 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A102Cu, 1);  /* 0C0A102A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A102C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1030u, 2);  /* 0C0A102E mov.l @(disp,Rm),Rn */
	IF(0x0C0A1030u); { u32 t_ = r9; PR = 0x0C0A1034u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A1034u); }  /* 0C0A1030 jsr @Rn */
L_0C0A1034: BLKS(0x0C0A1034u);
	r9 = 0x0u;  /* 0C0A1034 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A1038u, 2);  /* 0C0A1036 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A1038 mov Rm,Rn */
	IF(0x0C0A103Au); PR = R32(r15); r15 += 4; UPD(0x0C0A103Cu, 2);  /* 0C0A103A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A103Eu, 1);  /* 0C0A103C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A1040u, 1);  /* 0C0A103E mov.l @Rm+,Rn */
	IF(0x0C0A1040u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A1040 rts */
L_0C0A1050: BLKS(0x0C0A1050u);
	r0 = 0xB4u; UPD(0x0C0A1052u, 1);  /* 0C0A1050 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1052 add #imm,Rn */
	IF(0x0C0A1054u); MACL = r8 * r0;  /* 0C0A1054 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1058u, 4);  /* 0C0A1056 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A105Au, 1);  /* 0C0A1058 mov.w @(disp,pc),Rn */
	IF(0x0C0A105Au); r3 = MACL;  /* 0C0A105A sts macl,Rn */
	r3 += r9;  /* 0C0A105C add Rm,Rn */
	IF(0x0C0A105Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1060u, 3);  /* 0C0A105E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A1060 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1064u, 2);  /* 0C0A1062 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1064 add #imm,Rn */
	IF(0x0C0A1066u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1068u, 2);  /* 0C0A1066 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A1068 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A106A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A106Eu, 3);  /* 0C0A106C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A1070u, 1);  /* 0C0A106E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1072u, 1);  /* 0C0A1070 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1074u, 1);  /* 0C0A1072 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1016u, 3); goto L_0C0A1016; }  /* 0C0A1074 bra */
L_0C0A1080: BLKS(0x0C0A1080u);
	r0 = 0xB4u; UPD(0x0C0A1082u, 1);  /* 0C0A1080 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A1082 add #imm,Rn */
	IF(0x0C0A1084u); MACL = r8 * r0;  /* 0C0A1084 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1088u, 4);  /* 0C0A1086 mov.l @(disp,pc),Rn */
	IF(0x0C0A1088u); r3 = MACL;  /* 0C0A1088 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A108Cu, 2);  /* 0C0A108A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A108C add Rm,Rn */
	IF(0x0C0A108Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1090u, 2);  /* 0C0A108E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A1090 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A1094u, 2);  /* 0C0A1092 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1094 add #imm,Rn */
	IF(0x0C0A1096u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1098u, 2);  /* 0C0A1096 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0A1098 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A109A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A109Eu, 3);  /* 0C0A109C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A10A0u, 1);  /* 0C0A109E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A10A2u, 1);  /* 0C0A10A0 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A10A4u, 1);  /* 0C0A10A2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC3B0u; UPD(0x0C0A10A6u, 1);  /* 0C0A10A4 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A10A8u, 1);  /* 0C0A10A6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A10AAu, 1);  /* 0C0A10A8 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A10ACu, 1);  /* 0C0A10AA mov.l @(disp,Rm),Rn */
	IF(0x0C0A10ACu); { u32 t_ = r0; PR = 0x0C0A10B0u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A10B0u); }  /* 0C0A10AC jsr @Rn */
L_0C0A10B0: BLKS(0x0C0A10B0u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A101Cu, 3); goto L_0C0A101C; }  /* 0C0A10B0 bra */
L_0C0A10C0: BLKS(0x0C0A10C0u);
	r6 = 0xB4u; UPD(0x0C0A10C2u, 1);  /* 0C0A10C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A10C2 add #imm,Rn */
	IF(0x0C0A10C4u); MACL = r8 * r6;  /* 0C0A10C4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A10C8u, 4);  /* 0C0A10C6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A10CAu, 1);  /* 0C0A10C8 mov.w @(disp,pc),Rn */
	IF(0x0C0A10CAu); r3 = MACL;  /* 0C0A10CA sts macl,Rn */
	r3 += r9;  /* 0C0A10CC add Rm,Rn */
	IF(0x0C0A10CEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A10D0u, 3);  /* 0C0A10CE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A10D0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A10D4u, 2);  /* 0C0A10D2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A10D4 add #imm,Rn */
	IF(0x0C0A10D6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A10D8u, 2);  /* 0C0A10D6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A10D8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A10DA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A10DEu, 3);  /* 0C0A10DC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A10E0u, 1);  /* 0C0A10DE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A10E2u, 1);  /* 0C0A10E0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A10E4u, 1);  /* 0C0A10E2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1016u, 3); goto L_0C0A1016; }  /* 0C0A10E4 bra */
L_0C0A10F0: BLKS(0x0C0A10F0u);
	r5 = 0xB4u; UPD(0x0C0A10F2u, 1);  /* 0C0A10F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A10F2 add #imm,Rn */
	IF(0x0C0A10F4u); MACL = r8 * r5;  /* 0C0A10F4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A10F8u, 4);  /* 0C0A10F6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A10FAu, 1);  /* 0C0A10F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A10FAu); r3 = MACL;  /* 0C0A10FA sts macl,Rn */
	r3 += r9;  /* 0C0A10FC add Rm,Rn */
	IF(0x0C0A10FEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1100u, 3);  /* 0C0A10FE mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A1100 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A1102 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A1106u, 3);  /* 0C0A1104 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1106 add #imm,Rn */
	IF(0x0C0A1108u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A110Au, 2);  /* 0C0A1108 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A110A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A110Eu, 2);  /* 0C0A110C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A1110u, 1);  /* 0C0A110E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1112u, 1);  /* 0C0A1110 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1114u, 1);  /* 0C0A1112 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1016u, 3); goto L_0C0A1016; }  /* 0C0A1114 bra */
}

void f_0C099E80(sh3_t *c)
{
	LOCALS;
L_0C099E80: BLKS(0x0C099E80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C099E82u, 1);  /* 0C099E80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C099E84u, 1);  /* 0C099E82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C099E86u, 1);  /* 0C099E84 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C099E88u, 1);  /* 0C099E86 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C099E8Au, 1);  /* 0C099E88 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C099E8A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C099E8Eu, 2);  /* 0C099E8C mov.l Rm,@-Rn */
	IF(0x0C099E8Eu); MACL = r11 * r2;  /* 0C099E8E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C099E92u, 3);  /* 0C099E90 mov.l Rm,@-Rn */
	r4 = 0xC26CD40u; UPD(0x0C099E94u, 1);  /* 0C099E92 mov.l @(disp,pc),Rn */
	IF(0x0C099E94u); r0 = MACL;  /* 0C099E94 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C099E98u, 2);  /* 0C099E96 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C099E98 add Rm,Rn */
	IF(0x0C099E9Au); r15 -= 4; W32(r15, PR); UPD(0x0C099E9Cu, 2);  /* 0C099E9A sts.l pr,@-Rn */
	r0 = 0x9Fu; UPD(0x0C099E9Eu, 1);  /* 0C099E9C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C099E9E add #imm,Rn */
	IF(0x0C099EA0u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C099EA2u, 2);  /* 0C099EA0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C099EA2 extu.b Rm,Rn */
	r0 = 0x3u;  /* 0C099EA4 mov #imm,Rn */
	T = r2 > r0;  /* 0C099EA6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099EECu, 6); goto L_0C099EEC; } goto L_0C099EAC; }  /* 0C099EA8 bt/s */
L_0C099EAC: BLKS(0x0C099EACu);
	r0 = 0xC099EC0u;  /* 0C099EAC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C099EAE add Rm,Rn */
	IF(0x0C099EB0u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C099EB2u, 4);  /* 0C099EB0 mov.w @(r0,Rm),Rn */
	IF(0x0C099EB2u); { u32 tv_ = (r5 + 0x0C099EB6u); u32 t_ = PHYS(tv_); IF(0x0C099EB4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099EB2 braf Rn */
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
}

void f_0C099ED0(sh3_t *c)
{
	LOCALS;
L_0C099ED0: BLKS(0x0C099ED0u);
	r7 = 0xB4u; UPD(0x0C099ED2u, 1);  /* 0C099ED0 mov.w @(disp,pc),Rn */
	IF(0x0C099ED2u); MACL = r11 * r7;  /* 0C099ED2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C099ED6u, 3);  /* 0C099ED4 mov.l @(disp,pc),Rn */
	IF(0x0C099ED6u); r3 = MACL;  /* 0C099ED6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C099EDAu, 2);  /* 0C099ED8 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C099EDA add Rm,Rn */
	r2 += r3;  /* 0C099EDC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C099EE0u, 3);  /* 0C099EDE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C099EE0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C099EE2 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C099EE4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C099F20u, 6); goto L_0C099F20; } UPD(0x0C099EEAu, 1); goto L_0C099EEA; }  /* 0C099EE6 bt/s */
L_0C099EEA: BLKS(0x0C099EEAu);
	IF(0x0C099EEAu); ;  /* 0C099EEA nop */
	UPD(0x0C099EECu, 1);
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C099F20: BLKS(0x0C099F20u);
	r8 = R32(r3); UPD(0x0C099F22u, 1);  /* 0C099F20 mov.l @Rm,Rn */
	r10 = 0x0u;  /* 0C099F22 mov #imm,Rn */
	r9 = 0xDFFFFFFFu; UPD(0x0C099F26u, 2);  /* 0C099F24 mov.l @(disp,pc),Rn */
	r8 &= r9;  /* 0C099F26 and Rm,Rn */
	W8(r2, r10); UPD(0x0C099F2Au, 2);  /* 0C099F28 mov.b Rm,@Rn */
	W32(r3, r8); UPD(0x0C099F2Cu, 1);  /* 0C099F2A mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C099F2Eu, 1);  /* 0C099F2C mov.w @(disp,pc),Rn */
	IF(0x0C099F2Eu); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C099F30u, 1);  /* 0C099F2E mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C099F30 add #imm,Rn */
	{ IF(0x0C099F34u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C099EECu, 4); goto L_0C099EEC; }  /* 0C099F32 bra */
}

void f_0C099F40(sh3_t *c)
{
	LOCALS;
	goto L_0C099F40;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C099F40: BLKS(0x0C099F40u);
	r12 = 0xB4u; UPD(0x0C099F42u, 1);  /* 0C099F40 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C099F42 mov Rm,Rn */
	IF(0x0C099F44u); MACL = r11 * r12;  /* 0C099F44 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C099F48u, 4);  /* 0C099F46 mov.l @(disp,pc),Rn */
	IF(0x0C099F48u); r9 = MACL;  /* 0C099F48 sts macl,Rn */
	r9 += r7;  /* 0C099F4A add Rm,Rn */
	r5 = r9;  /* 0C099F4C mov Rm,Rn */
	r5 += 0x50u;  /* 0C099F4E add #imm,Rn */
	r6 = R32(r5); UPD(0x0C099F52u, 5);  /* 0C099F50 mov.l @Rm,Rn */
	r12 = 0x5u;  /* 0C099F52 mov #imm,Rn */
	r10 = 0xC058130u; UPD(0x0C099F56u, 2);  /* 0C099F54 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C099F56 add #imm,Rn */
	r8 = 0xC057430u; UPD(0x0C099F5Au, 2);  /* 0C099F58 mov.l @(disp,pc),Rn */
	IF(0x0C099F5Au); { u32 t_ = r10; PR = 0x0C099F5Eu; W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C099F5Eu); }  /* 0C099F5A jsr @Rn */
L_0C099F5E: BLKS(0x0C099F5Eu);
	r4 = r11;  /* 0C099F5E mov Rm,Rn */
	IF(0x0C099F60u); { u32 t_ = r8; PR = 0x0C099F64u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C099F64u); }  /* 0C099F60 jsr @Rn */
L_0C099F64: BLKS(0x0C099F64u);
	r2 = 0x86u; UPD(0x0C099F66u, 1);  /* 0C099F64 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C099F66 mov Rm,Rn */
	IF(0x0C099F68u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C099F6Au, 2);  /* 0C099F68 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C099F6A add #imm,Rn */
	IF(0x0C099F6Cu); r4 >>= 2;  /* 0C099F6C shlr2 Rn */
	r0 = 0x1Fu;  /* 0C099F6E mov #imm,Rn */
	IF(0x0C099F70u); r4 >>= 2;  /* 0C099F70 shlr2 Rn */
	r4 &= r0;  /* 0C099F72 and Rm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C099F76u, 6);  /* 0C099F74 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C099F78u, 1);  /* 0C099F76 mov.l Rm,@(disp,Rn) */
	IF(0x0C099F78u); { u32 t_ = r3; PR = 0x0C099F7Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C099F7Cu); }  /* 0C099F78 jsr @Rn */
L_0C099F7C: BLKS(0x0C099F7Cu);
	r0 = 0xA0u; UPD(0x0C099F7Eu, 1);  /* 0C099F7C mov.w @(disp,pc),Rn */
	IF(0x0C099F7Eu); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C099F80u, 1);  /* 0C099F7E mov.b @(r0,Rm),Rn */
	r2 = r13 & 0xFF;  /* 0C099F80 extu.b Rm,Rn */
	T = r2 > r12;  /* 0C099F82 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C099EECu, 5); goto L_0C099EEC; }  /* 0C099F84 bt */
L_0C099F86: BLKS(0x0C099F86u);
	r0 = 0xC099FB0u;  /* 0C099F86 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C099F88 add Rm,Rn */
	IF(0x0C099F8Au); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C099F8Cu, 3);  /* 0C099F8A mov.w @(r0,Rm),Rn */
	IF(0x0C099F8Cu); { u32 tv_ = (r13 + 0x0C099F90u); u32 t_ = PHYS(tv_); IF(0x0C099F8Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099F8C braf Rn */
}

void f_0C099FC0(sh3_t *c)
{
	LOCALS;
	goto L_0C099FC0;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C099FC0: BLKS(0x0C099FC0u);
	r9 = 0xB4u; UPD(0x0C099FC2u, 1);  /* 0C099FC0 mov.w @(disp,pc),Rn */
	IF(0x0C099FC2u); MACL = r11 * r9;  /* 0C099FC2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C099FC6u, 3);  /* 0C099FC4 mov.l @(disp,pc),Rn */
	IF(0x0C099FC6u); r9 = MACL;  /* 0C099FC6 sts macl,Rn */
	r9 += r4;  /* 0C099FC8 add Rm,Rn */
	r7 = r9;  /* 0C099FCA mov Rm,Rn */
	r7 += 0x50u;  /* 0C099FCC add #imm,Rn */
	r1 = R32(r7); UPD(0x0C099FD0u, 5);  /* 0C099FCE mov.l @Rm,Rn */
	r3 = 0x2A30u; UPD(0x0C099FD2u, 1);  /* 0C099FD0 mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r3;  /* 0C099FD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099FF0u, 4); goto L_0C099FF0; } goto L_0C099FD8; }  /* 0C099FD4 bf/s */
L_0C099FD8: BLKS(0x0C099FD8u);
	r0 = 0x9Fu; UPD(0x0C099FDAu, 2);  /* 0C099FD8 mov.w @(disp,pc),Rn */
	IF(0x0C099FDAu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C099FDCu, 1);  /* 0C099FDA mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C099FDC add #imm,Rn */
	IF(0x0C099FDEu); W8(r0 + r9, r8); UPD(0x0C099FE0u, 2);  /* 0C099FDE mov.b Rm,@(r0,Rn) */
	r0 = 0xA0u; UPD(0x0C099FE2u, 1);  /* 0C099FE0 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C099FE2 add Rm,Rn */
	W32(r7, r2); UPD(0x0C099FE6u, 2);  /* 0C099FE4 mov.l Rm,@Rn */
	{ W8(r9, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C099FE6 bra */
L_0C099FF0: BLKS(0x0C099FF0u);
	r8 = 0xC0AFE40u; UPD(0x0C099FF2u, 1);  /* 0C099FF0 mov.l @(disp,pc),Rn */
	r10 = 0x88u; UPD(0x0C099FF4u, 1);  /* 0C099FF2 mov.w @(disp,pc),Rn */
	IF(0x0C099FF4u); { u32 t_ = r8; PR = 0x0C099FF8u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C099FF8u); }  /* 0C099FF4 jsr @Rn */
L_0C099FF8: BLKS(0x0C099FF8u);
	r2 = 0xC050D70u; UPD(0x0C099FFAu, 1);  /* 0C099FF8 mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C099FFA add #imm,Rn */
	r4 = 0x1FFu; UPD(0x0C099FFEu, 2);  /* 0C099FFC mov.w @(disp,pc),Rn */
	IF(0x0C099FFEu); { u32 t_ = r2; PR = 0x0C09A002u; W16(r10, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A002u); }  /* 0C099FFE jsr @Rn */
L_0C09A002: BLKS(0x0C09A002u);
	r4 = 0xFFFFFF00u; UPD(0x0C09A004u, 1);  /* 0C09A002 mov.w @(disp,pc),Rn */
	r3 = 0xC050D70u; UPD(0x0C09A006u, 1);  /* 0C09A004 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C09A006 add Rm,Rn */
	r12 = 0x9Cu; UPD(0x0C09A00Au, 2);  /* 0C09A008 mov.w @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C09A00A mov #imm,Rn */
	r12 += r9;  /* 0C09A00C add Rm,Rn */
	{ u32 v_ = r0; r10 -= 2; W16(r10, v_); } UPD(0x0C09A010u, 3);  /* 0C09A00E mov.w Rm,@-Rn */
	IF(0x0C09A010u); { u32 t_ = r3; PR = 0x0C09A014u; r12 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A014u); }  /* 0C09A010 jsr @Rn */
L_0C09A014: BLKS(0x0C09A014u);
	W8(r12, r0); UPD(0x0C09A016u, 1);  /* 0C09A014 mov.b Rm,@Rn */
	r4 = 0x4u;  /* 0C09A016 mov #imm,Rn */
	r13 = 0xC27DFF8u; UPD(0x0C09A01Au, 2);  /* 0C09A018 mov.l @(disp,pc),Rn */
	r7 = R32(r13); UPD(0x0C09A01Cu, 1);  /* 0C09A01A mov.l @Rm,Rn */
	IF(0x0C09A01Cu); r7 >>= 16;  /* 0C09A01C shlr16 Rn */
	IF(0x0C09A01Eu); r7 >>= 2;  /* 0C09A01E shlr2 Rn */
	IF(0x0C09A020u); r7 >>= 2;  /* 0C09A020 shlr2 Rn */
	r6 = 0u - r7;  /* 0C09A022 neg Rm,Rn */
	r6 += 0x10u;  /* 0C09A024 add #imm,Rn */
	r10 = 0xC050D70u; UPD(0x0C09A028u, 6);  /* 0C09A026 mov.l @(disp,pc),Rn */
	IF(0x0C09A028u); T = r6 & 1; r6 >>= 1;  /* 0C09A028 shlr Rn */
	r5 = 0x98u; UPD(0x0C09A02Cu, 2);  /* 0C09A02A mov.w @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C09A02C add #imm,Rn */
	r9 += r5;  /* 0C09A02E add Rm,Rn */
	IF(0x0C09A030u); { u32 t_ = r10; PR = 0x0C09A034u; { u32 v_ = r6; r12 -= 1; W8(r12, v_); } /* slot mov.b Rm,@-Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A034u); }  /* 0C09A030 jsr @Rn */
L_0C09A034: BLKS(0x0C09A034u);
	W8(r9, r0); UPD(0x0C09A036u, 1);  /* 0C09A034 mov.b Rm,@Rn */
	r1 = 0xB4u; UPD(0x0C09A038u, 1);  /* 0C09A036 mov.w @(disp,pc),Rn */
	IF(0x0C09A038u); MACL = r11 * r1;  /* 0C09A038 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09A03Cu, 3);  /* 0C09A03A mov.l @(disp,pc),Rn */
	IF(0x0C09A03Cu); r10 = MACL;  /* 0C09A03C sts macl,Rn */
	r10 += r0;  /* 0C09A03E add Rm,Rn */
	r9 = r10;  /* 0C09A040 mov Rm,Rn */
	r9 += 0x60u;  /* 0C09A042 add #imm,Rn */
	r12 = 0x88888889u; UPD(0x0C09A046u, 5);  /* 0C09A044 mov.l @(disp,pc),Rn */
	r13 = r10;  /* 0C09A046 mov Rm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C09A04Au, 2);  /* 0C09A048 mov.l Rm,@(disp,Rn) */
	r13 += 0x5Cu;  /* 0C09A04A add #imm,Rn */
	UPD(0x0C09A04Cu, 1);
L_0C09A04C: BLKS(0x0C09A04Cu);
	r5 = 0xC050D70u; UPD(0x0C09A04Eu, 1);  /* 0C09A04C mov.l @(disp,pc),Rn */
	r9 = 0x90u; UPD(0x0C09A050u, 1);  /* 0C09A04E mov.w @(disp,pc),Rn */
	IF(0x0C09A050u); { u32 t_ = r5; PR = 0x0C09A054u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A054u); }  /* 0C09A050 jsr @Rn */
L_0C09A054: BLKS(0x0C09A054u);
	r0 += r9;  /* 0C09A054 add Rm,Rn */
	IF(0x0C09A056u); r0 <<= 16;  /* 0C09A056 shll16 Rn */
	W32(r13, r0); UPD(0x0C09A05Au, 3);  /* 0C09A058 mov.l Rm,@Rn */
	r4 = 0x70u;  /* 0C09A05A mov #imm,Rn */
	r0 = 0xB4u; UPD(0x0C09A05Eu, 2);  /* 0C09A05C mov.w @(disp,pc),Rn */
	IF(0x0C09A05Eu); MACL = r11 * r0;  /* 0C09A05E mul.l Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C09A062u, 3);  /* 0C09A060 mov.l @(disp,pc),Rn */
	IF(0x0C09A062u); r2 = MACL;  /* 0C09A062 sts macl,Rn */
	IF(0x0C09A064u); { u32 t_ = r7; PR = 0x0C09A068u; W32(r14, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A068u); }  /* 0C09A064 jsr @Rn */
L_0C09A068: BLKS(0x0C09A068u);
	r3 = 0x1C8u; UPD(0x0C09A06Au, 1);  /* 0C09A068 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C09A06A mov #imm,Rn */
	r0 += r3;  /* 0C09A06C add Rm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C09A070u, 3);  /* 0C09A06E mov.l @(disp,Rm),Rn */
	IF(0x0C09A070u); r0 <<= 16;  /* 0C09A070 shll16 Rn */
	W32(r8, r0); UPD(0x0C09A074u, 2);  /* 0C09A072 mov.l Rm,@Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09A076u, 1);  /* 0C09A074 mov.l @(disp,Rm),Rn */
	r6 = R32(r13); UPD(0x0C09A078u, 1);  /* 0C09A076 mov.l @Rm,Rn */
	r6 -= r4;  /* 0C09A078 sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r6 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A07A dmuls.l Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09A07Eu, 4);  /* 0C09A07C mov.l @(disp,Rm),Rn */
	r7 = r6;  /* 0C09A07E mov Rm,Rn */
	r0 -= r5;  /* 0C09A080 sub Rm,Rn */
	IF(0x0C09A082u); r1 = MACH;  /* 0C09A082 sts mach,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A084 dmuls.l Rm,Rn */
	r7 += r1;  /* 0C09A086 add Rm,Rn */
	IF(0x0C09A088u); T = r6 >> 31; r6 <<= 1;  /* 0C09A088 shll Rn */
	r4 = r0;  /* 0C09A08A mov Rm,Rn */
	IF(0x0C09A08Cu); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C09A08C shad Rm,Rn */
	IF(0x0C09A08Eu); r9 = MACH;  /* 0C09A08E sts mach,Rn */
	{ u32 a_ = r6, t_ = a_ - r6, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r6 = r_; }  /* 0C09A090 subc Rm,Rn */
	r4 += r9;  /* 0C09A092 add Rm,Rn */
	r7 -= r6;  /* 0C09A094 sub Rm,Rn */
	IF(0x0C09A096u); T = r0 >> 31; r0 <<= 1;  /* 0C09A096 shll Rn */
	IF(0x0C09A098u); ARG0(0x442Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C09A098 shad Rm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09A09A subc Rm,Rn */
	r3 = 0x1FFFu; UPD(0x0C09A09Eu, 17);  /* 0C09A09C mov.w @(disp,pc),Rn */
	r4 -= r0;  /* 0C09A09E sub Rm,Rn */
	W32(r10 + 0x2Cu, r7); UPD(0x0C09A0A2u, 2);  /* 0C09A0A0 mov.l Rm,@(disp,Rn) */
	r8 = 0x3FFEu; UPD(0x0C09A0A4u, 1);  /* 0C09A0A2 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09A0A4 add Rm,Rn */
	W32(r10 + 0x30u, r4); UPD(0x0C09A0A8u, 2);  /* 0C09A0A6 mov.l Rm,@(disp,Rn) */
	T = r8 >= r7;  /* 0C09A0A8 cmp/hs Rm,Rn */
	IF(0x0C09A0AAu); r5 = T;  /* 0C09A0AA movt Rn */
	r4 += r3;  /* 0C09A0AC add Rm,Rn */
	T = r8 >= r4;  /* 0C09A0AE cmp/hs Rm,Rn */
	IF(0x0C09A0B0u); r6 = T;  /* 0C09A0B0 movt Rn */
	r5 &= r6;  /* 0C09A0B2 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09A0B4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C09A04Cu, 10); goto L_0C09A04C; } UPD(0x0C09A0BAu, 1); goto L_0C09A0BA; }  /* 0C09A0B6 bf/s */
L_0C09A0BA: BLKS(0x0C09A0BAu);
	r2 = 0xC26CD40u; UPD(0x0C09A0BCu, 1);  /* 0C09A0BA mov.l @(disp,pc),Rn */
	r10 = 0xA0u; UPD(0x0C09A0BEu, 1);  /* 0C09A0BC mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09A0BE add Rm,Rn */
	r2 += r10;  /* 0C09A0C0 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A0C4u, 3);  /* 0C09A0C2 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09A0C4 add #imm,Rn */
	W8(r2, r13); UPD(0x0C09A0C8u, 2);  /* 0C09A0C6 mov.b Rm,@Rn */
	{ IF(0x0C09A0CAu); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A0C8 bra */
}

void f_0C09A036(sh3_t *c)
{
	LOCALS;
	goto L_0C09A036;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C09A036: BLKS(0x0C09A036u);
	r1 = 0xB4u; UPD(0x0C09A038u, 1);  /* 0C09A036 mov.w @(disp,pc),Rn */
	IF(0x0C09A038u); MACL = r11 * r1;  /* 0C09A038 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09A03Cu, 3);  /* 0C09A03A mov.l @(disp,pc),Rn */
	IF(0x0C09A03Cu); r10 = MACL;  /* 0C09A03C sts macl,Rn */
	r10 += r0;  /* 0C09A03E add Rm,Rn */
	r9 = r10;  /* 0C09A040 mov Rm,Rn */
	r9 += 0x60u;  /* 0C09A042 add #imm,Rn */
	r12 = 0x88888889u; UPD(0x0C09A046u, 5);  /* 0C09A044 mov.l @(disp,pc),Rn */
	r13 = r10;  /* 0C09A046 mov Rm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C09A04Au, 2);  /* 0C09A048 mov.l Rm,@(disp,Rn) */
	r13 += 0x5Cu;  /* 0C09A04A add #imm,Rn */
	UPD(0x0C09A04Cu, 1);
L_0C09A04C: BLKS(0x0C09A04Cu);
	r5 = 0xC050D70u; UPD(0x0C09A04Eu, 1);  /* 0C09A04C mov.l @(disp,pc),Rn */
	r9 = 0x90u; UPD(0x0C09A050u, 1);  /* 0C09A04E mov.w @(disp,pc),Rn */
	IF(0x0C09A050u); { u32 t_ = r5; PR = 0x0C09A054u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A054u); }  /* 0C09A050 jsr @Rn */
L_0C09A054: BLKS(0x0C09A054u);
	r0 += r9;  /* 0C09A054 add Rm,Rn */
	IF(0x0C09A056u); r0 <<= 16;  /* 0C09A056 shll16 Rn */
	W32(r13, r0); UPD(0x0C09A05Au, 3);  /* 0C09A058 mov.l Rm,@Rn */
	r4 = 0x70u;  /* 0C09A05A mov #imm,Rn */
	r0 = 0xB4u; UPD(0x0C09A05Eu, 2);  /* 0C09A05C mov.w @(disp,pc),Rn */
	IF(0x0C09A05Eu); MACL = r11 * r0;  /* 0C09A05E mul.l Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C09A062u, 3);  /* 0C09A060 mov.l @(disp,pc),Rn */
	IF(0x0C09A062u); r2 = MACL;  /* 0C09A062 sts macl,Rn */
	IF(0x0C09A064u); { u32 t_ = r7; PR = 0x0C09A068u; W32(r14, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A068u); }  /* 0C09A064 jsr @Rn */
L_0C09A068: BLKS(0x0C09A068u);
	r3 = 0x1C8u; UPD(0x0C09A06Au, 1);  /* 0C09A068 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C09A06A mov #imm,Rn */
	r0 += r3;  /* 0C09A06C add Rm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C09A070u, 3);  /* 0C09A06E mov.l @(disp,Rm),Rn */
	IF(0x0C09A070u); r0 <<= 16;  /* 0C09A070 shll16 Rn */
	W32(r8, r0); UPD(0x0C09A074u, 2);  /* 0C09A072 mov.l Rm,@Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09A076u, 1);  /* 0C09A074 mov.l @(disp,Rm),Rn */
	r6 = R32(r13); UPD(0x0C09A078u, 1);  /* 0C09A076 mov.l @Rm,Rn */
	r6 -= r4;  /* 0C09A078 sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r6 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A07A dmuls.l Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09A07Eu, 4);  /* 0C09A07C mov.l @(disp,Rm),Rn */
	r7 = r6;  /* 0C09A07E mov Rm,Rn */
	r0 -= r5;  /* 0C09A080 sub Rm,Rn */
	IF(0x0C09A082u); r1 = MACH;  /* 0C09A082 sts mach,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A084 dmuls.l Rm,Rn */
	r7 += r1;  /* 0C09A086 add Rm,Rn */
	IF(0x0C09A088u); T = r6 >> 31; r6 <<= 1;  /* 0C09A088 shll Rn */
	r4 = r0;  /* 0C09A08A mov Rm,Rn */
	IF(0x0C09A08Cu); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C09A08C shad Rm,Rn */
	IF(0x0C09A08Eu); r9 = MACH;  /* 0C09A08E sts mach,Rn */
	{ u32 a_ = r6, t_ = a_ - r6, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r6 = r_; }  /* 0C09A090 subc Rm,Rn */
	r4 += r9;  /* 0C09A092 add Rm,Rn */
	r7 -= r6;  /* 0C09A094 sub Rm,Rn */
	IF(0x0C09A096u); T = r0 >> 31; r0 <<= 1;  /* 0C09A096 shll Rn */
	IF(0x0C09A098u); ARG0(0x442Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C09A098 shad Rm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09A09A subc Rm,Rn */
	r3 = 0x1FFFu; UPD(0x0C09A09Eu, 17);  /* 0C09A09C mov.w @(disp,pc),Rn */
	r4 -= r0;  /* 0C09A09E sub Rm,Rn */
	W32(r10 + 0x2Cu, r7); UPD(0x0C09A0A2u, 2);  /* 0C09A0A0 mov.l Rm,@(disp,Rn) */
	r8 = 0x3FFEu; UPD(0x0C09A0A4u, 1);  /* 0C09A0A2 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09A0A4 add Rm,Rn */
	W32(r10 + 0x30u, r4); UPD(0x0C09A0A8u, 2);  /* 0C09A0A6 mov.l Rm,@(disp,Rn) */
	T = r8 >= r7;  /* 0C09A0A8 cmp/hs Rm,Rn */
	IF(0x0C09A0AAu); r5 = T;  /* 0C09A0AA movt Rn */
	r4 += r3;  /* 0C09A0AC add Rm,Rn */
	T = r8 >= r4;  /* 0C09A0AE cmp/hs Rm,Rn */
	IF(0x0C09A0B0u); r6 = T;  /* 0C09A0B0 movt Rn */
	r5 &= r6;  /* 0C09A0B2 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09A0B4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C09A04Cu, 10); goto L_0C09A04C; } UPD(0x0C09A0BAu, 1); goto L_0C09A0BA; }  /* 0C09A0B6 bf/s */
L_0C09A0BA: BLKS(0x0C09A0BAu);
	r2 = 0xC26CD40u; UPD(0x0C09A0BCu, 1);  /* 0C09A0BA mov.l @(disp,pc),Rn */
	r10 = 0xA0u; UPD(0x0C09A0BEu, 1);  /* 0C09A0BC mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09A0BE add Rm,Rn */
	r2 += r10;  /* 0C09A0C0 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A0C4u, 3);  /* 0C09A0C2 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09A0C4 add #imm,Rn */
	W8(r2, r13); UPD(0x0C09A0C8u, 2);  /* 0C09A0C6 mov.b Rm,@Rn */
	{ IF(0x0C09A0CAu); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A0C8 bra */
}

void f_0C09A0D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A0D0;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C099F2E: BLKS(0x0C099F2Eu);
	IF(0x0C099F2Eu); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C099F30u, 1);  /* 0C099F2E mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C099F30 add #imm,Rn */
	{ IF(0x0C099F34u); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C099EECu, 4); goto L_0C099EEC; }  /* 0C099F32 bra */
L_0C09A0C8: BLKS(0x0C09A0C8u);
	{ IF(0x0C09A0CAu); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A0C8 bra */
L_0C09A0D0: BLKS(0x0C09A0D0u);
	r4 = 0xB4u; UPD(0x0C09A0D2u, 1);  /* 0C09A0D0 mov.w @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C09A0D2 mov #imm,Rn */
	IF(0x0C09A0D4u); MACL = r11 * r4;  /* 0C09A0D4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09A0D8u, 4);  /* 0C09A0D6 mov.l @(disp,pc),Rn */
	IF(0x0C09A0D8u); r8 = MACL;  /* 0C09A0D8 sts macl,Rn */
	r0 = 0x98u; UPD(0x0C09A0DCu, 2);  /* 0C09A0DA mov.w @(disp,pc),Rn */
	r8 += r6;  /* 0C09A0DC add Rm,Rn */
	IF(0x0C09A0DEu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09A0E0u, 2);  /* 0C09A0DE mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09A0E0 mov Rm,Rn */
	r12 = 0xC0A9E40u; UPD(0x0C09A0E4u, 2);  /* 0C09A0E2 mov.l @(disp,pc),Rn */
	r13 = r10 & 0xFF;  /* 0C09A0E4 extu.b Rm,Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C09A0E8u, 2);  /* 0C09A0E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C09A0E8u); { u32 t_ = r12; PR = 0x0C09A0ECu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09A0ECu); }  /* 0C09A0E8 jsr @Rn */
L_0C09A0EC: BLKS(0x0C09A0ECu);
	T = (r0 & r0) == 0;  /* 0C09A0EC tst Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09A160u, 4); goto L_0C09A160; } goto L_0C09A0F2; }  /* 0C09A0EE bt/s */
L_0C09A0F2: BLKS(0x0C09A0F2u);
	r5 = 0x9Cu; UPD(0x0C09A0F4u, 2);  /* 0C09A0F2 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C09A0F4 add Rm,Rn */
	r5 += 0x1u;  /* 0C09A0F6 add #imm,Rn */
	r0 = 0x8Au; UPD(0x0C09A0FAu, 3);  /* 0C09A0F8 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r5); UPD(0x0C09A0FCu, 1);  /* 0C09A0FA mov.b @Rm,Rn */
	IF(0x0C09A0FCu); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A0FEu, 1);  /* 0C09A0FC mov.w @(r0,Rm),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09A0FE add #imm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C09A102u, 2);  /* 0C09A100 mov.l @(disp,pc),Rn */
	r9 = r12 & 0xFF;  /* 0C09A102 extu.b Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C09A106u, 2);  /* 0C09A104 mov.b @Rm,Rn */
	r3 += r9;  /* 0C09A106 add Rm,Rn */
	r12 = 0xA9u; UPD(0x0C09A10Au, 2);  /* 0C09A108 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C09A10A exts.w Rm,Rn */
	IF(0x0C09A10Cu); W16(r0 + r8, r3); UPD(0x0C09A10Eu, 2);  /* 0C09A10C mov.w Rm,@(r0,Rn) */
	r4 = 0x200u; UPD(0x0C09A110u, 1);  /* 0C09A10E mov.w @(disp,pc),Rn */
	IF(0x0C09A110u); { u32 t_ = r7; PR = 0x0C09A114u; r5 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C09A114u); }  /* 0C09A110 jsr @Rn */
L_0C09A114: BLKS(0x0C09A114u);
	r13 = (u32)(s32)(s16)r0;  /* 0C09A114 exts.w Rm,Rn */
	r12 += r8;  /* 0C09A116 add Rm,Rn */
	UPD(0x0C09A118u, 2);
L_0C09A118: BLKS(0x0C09A118u);
	r0 = 0x9Cu; UPD(0x0C09A11Au, 1);  /* 0C09A118 mov.w @(disp,pc),Rn */
	IF(0x0C09A11Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09A11Cu, 1);  /* 0C09A11A mov.b @(r0,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C09A11C extu.b Rm,Rn */
	T = (s32)r10 >= (s32)r6;  /* 0C09A11E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09A160u, 5); goto L_0C09A160; }  /* 0C09A120 bt */
L_0C09A122: BLKS(0x0C09A122u);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C09A124u, 1);  /* 0C09A122 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09A124 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09A128u, 2);  /* 0C09A126 mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFEu;  /* 0C09A128 add #imm,Rn */
	r7 = (u32)(s32)(s8)r5;  /* 0C09A12A exts.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09A12Eu, 3);  /* 0C09A12C mov.l Rm,@(disp,Rn) */
	W32(r15, r7); UPD(0x0C09A130u, 1);  /* 0C09A12E mov.l Rm,@Rn */
	r0 = 0x88u; UPD(0x0C09A132u, 1);  /* 0C09A130 mov.w @(disp,pc),Rn */
	IF(0x0C09A132u); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A134u, 1);  /* 0C09A132 mov.w @(r0,Rm),Rn */
	r0 = 0xC09F920u; UPD(0x0C09A136u, 1);  /* 0C09A134 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C09A138u, 1);  /* 0C09A136 mov.l Rm,@(disp,Rn) */
	r3 = 0xFFF00000u; UPD(0x0C09A13Au, 1);  /* 0C09A138 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09A13A mov Rm,Rn */
	r6 += r3;  /* 0C09A13C add Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09A140u, 3);  /* 0C09A13E mov.l @(disp,Rm),Rn */
	IF(0x0C09A140u); { u32 t_ = r0; PR = 0x0C09A144u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C09F920, 0x0C09F920u, 0x0C09A144u); }  /* 0C09A140 jsr @Rn */
L_0C09A144: BLKS(0x0C09A144u);
	r0 = r9;  /* 0C09A144 mov Rm,Rn */
	r2 = r10;  /* 0C09A146 mov Rm,Rn */
	r0 += r13;  /* 0C09A148 add Rm,Rn */
	r2 += 0x1u;  /* 0C09A14A add #imm,Rn */
	r15 += 0xCu;  /* 0C09A14C add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C09A14E exts.w Rm,Rn */
	{ r10 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ UPD(0x0C09A118u, 9); goto L_0C09A118; }  /* 0C09A150 bra */
L_0C09A160: BLKS(0x0C09A160u);
	r10 = 0xB4u; UPD(0x0C09A162u, 1);  /* 0C09A160 mov.w @(disp,pc),Rn */
	IF(0x0C09A162u); MACL = r11 * r10;  /* 0C09A162 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09A166u, 3);  /* 0C09A164 mov.l @(disp,pc),Rn */
	IF(0x0C09A166u); r3 = MACL;  /* 0C09A166 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09A16Au, 2);  /* 0C09A168 mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C09A16A add Rm,Rn */
	r2 += r3;  /* 0C09A16C add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A170u, 3);  /* 0C09A16E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09A170 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C09A172 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C09A174 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A0C8u, 6); goto L_0C09A0C8; } UPD(0x0C09A17Au, 1); goto L_0C09A17A; }  /* 0C09A176 bf/s */
L_0C09A17A: BLKS(0x0C09A17Au);
	r9 = 0x0u;  /* 0C09A17A mov #imm,Rn */
	r0 = 0xA0u; UPD(0x0C09A17Eu, 2);  /* 0C09A17C mov.w @(disp,pc),Rn */
	{ W8(r2, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C099F2Eu, 3); goto L_0C099F2E; }  /* 0C09A17E bra */
}

void f_0C09A1D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A1D0;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C09A0BC: BLKS(0x0C09A0BCu);
	r10 = 0xA0u; UPD(0x0C09A0BEu, 1);  /* 0C09A0BC mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09A0BE add Rm,Rn */
	r2 += r10;  /* 0C09A0C0 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A0C4u, 3);  /* 0C09A0C2 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09A0C4 add #imm,Rn */
	W8(r2, r13); UPD(0x0C09A0C8u, 2);  /* 0C09A0C6 mov.b Rm,@Rn */
	{ IF(0x0C09A0CAu); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A0C8 bra */
L_0C09A1D0: BLKS(0x0C09A1D0u);
	r4 = 0xB4u; UPD(0x0C09A1D2u, 1);  /* 0C09A1D0 mov.w @(disp,pc),Rn */
	IF(0x0C09A1D2u); MACL = r11 * r4;  /* 0C09A1D2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09A1D6u, 3);  /* 0C09A1D4 mov.l @(disp,pc),Rn */
	IF(0x0C09A1D6u); r10 = MACL;  /* 0C09A1D6 sts macl,Rn */
	r10 += r0;  /* 0C09A1D8 add Rm,Rn */
	r1 = r10;  /* 0C09A1DA mov Rm,Rn */
	r1 += 0x60u;  /* 0C09A1DC add #imm,Rn */
	r12 = 0x88888889u; UPD(0x0C09A1E0u, 5);  /* 0C09A1DE mov.l @(disp,pc),Rn */
	r13 = r10;  /* 0C09A1E0 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C09A1E4u, 2);  /* 0C09A1E2 mov.l Rm,@(disp,Rn) */
	r13 += 0x5Cu;  /* 0C09A1E4 add #imm,Rn */
	IF(0x0C09A1E6u); ;  /* 0C09A1E6 nop */
	UPD(0x0C09A1E8u, 2);
L_0C09A1E8: BLKS(0x0C09A1E8u);
	r1 = 0xC050D70u; UPD(0x0C09A1EAu, 1);  /* 0C09A1E8 mov.l @(disp,pc),Rn */
	r9 = 0xC050D70u; UPD(0x0C09A1ECu, 1);  /* 0C09A1EA mov.l @(disp,pc),Rn */
	IF(0x0C09A1ECu); { u32 t_ = r1; PR = 0x0C09A1F0u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A1F0u); }  /* 0C09A1EC jsr @Rn */
L_0C09A1F0: BLKS(0x0C09A1F0u);
	r4 = 0xB0u; UPD(0x0C09A1F2u, 1);  /* 0C09A1F0 mov.w @(disp,pc),Rn */
	r2 = 0xB4u; UPD(0x0C09A1F4u, 1);  /* 0C09A1F2 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C09A1F4 add Rm,Rn */
	IF(0x0C09A1F6u); MACL = r11 * r2;  /* 0C09A1F6 mul.l Rm,Rn */
	IF(0x0C09A1F8u); r0 <<= 16;  /* 0C09A1F8 shll16 Rn */
	W32(r13, r0); UPD(0x0C09A1FCu, 5);  /* 0C09A1FA mov.l Rm,@Rn */
	r4 = 0x70u;  /* 0C09A1FC mov #imm,Rn */
	IF(0x0C09A1FEu); r0 = MACL;  /* 0C09A1FE sts macl,Rn */
	IF(0x0C09A200u); { u32 t_ = r9; PR = 0x0C09A204u; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLD(t_, 0x0C09A204u); }  /* 0C09A200 jsr @Rn */
L_0C09A204: BLKS(0x0C09A204u);
	r3 = 0x1C8u; UPD(0x0C09A206u, 1);  /* 0C09A204 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFBu;  /* 0C09A206 mov #imm,Rn */
	r0 += r3;  /* 0C09A208 add Rm,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C09A20Cu, 3);  /* 0C09A20A mov.l @(disp,Rm),Rn */
	IF(0x0C09A20Cu); r0 <<= 16;  /* 0C09A20C shll16 Rn */
	W32(r8, r0); UPD(0x0C09A210u, 2);  /* 0C09A20E mov.l Rm,@Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C09A212u, 1);  /* 0C09A210 mov.l @(disp,Rm),Rn */
	r5 = R32(r13); UPD(0x0C09A214u, 1);  /* 0C09A212 mov.l @Rm,Rn */
	r5 -= r6;  /* 0C09A214 sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r5 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A216 dmuls.l Rm,Rn */
	r4 = R32(r10 + 0x28u); UPD(0x0C09A21Au, 4);  /* 0C09A218 mov.l @(disp,Rm),Rn */
	r9 = r5;  /* 0C09A21A mov Rm,Rn */
	IF(0x0C09A21Cu); r7 = MACH;  /* 0C09A21C sts mach,Rn */
	r0 -= r4;  /* 0C09A21E sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A220 dmuls.l Rm,Rn */
	r9 += r7;  /* 0C09A222 add Rm,Rn */
	IF(0x0C09A224u); T = r5 >> 31; r5 <<= 1;  /* 0C09A224 shll Rn */
	r6 = r0;  /* 0C09A226 mov Rm,Rn */
	IF(0x0C09A228u); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C09A228 shad Rm,Rn */
	IF(0x0C09A22Au); r1 = MACH;  /* 0C09A22A sts mach,Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C09A22C subc Rm,Rn */
	r6 += r1;  /* 0C09A22E add Rm,Rn */
	r9 -= r5;  /* 0C09A230 sub Rm,Rn */
	IF(0x0C09A232u); T = r0 >> 31; r0 <<= 1;  /* 0C09A232 shll Rn */
	IF(0x0C09A234u); ARG0(0x462Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C09A234 shad Rm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09A236 subc Rm,Rn */
	r3 = 0x1FFFu; UPD(0x0C09A23Au, 17);  /* 0C09A238 mov.w @(disp,pc),Rn */
	r6 -= r0;  /* 0C09A23A sub Rm,Rn */
	W32(r10 + 0x2Cu, r9); UPD(0x0C09A23Eu, 2);  /* 0C09A23C mov.l Rm,@(disp,Rn) */
	r8 = 0x3FFEu; UPD(0x0C09A240u, 1);  /* 0C09A23E mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C09A240 add Rm,Rn */
	W32(r10 + 0x30u, r6); UPD(0x0C09A244u, 2);  /* 0C09A242 mov.l Rm,@(disp,Rn) */
	T = r8 >= r9;  /* 0C09A244 cmp/hs Rm,Rn */
	IF(0x0C09A246u); r5 = T;  /* 0C09A246 movt Rn */
	r6 += r3;  /* 0C09A248 add Rm,Rn */
	T = r8 >= r6;  /* 0C09A24A cmp/hs Rm,Rn */
	IF(0x0C09A24Cu); r7 = T;  /* 0C09A24C movt Rn */
	r5 &= r7;  /* 0C09A24E and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09A250 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C09A1E8u, 10); goto L_0C09A1E8; } UPD(0x0C09A256u, 1); goto L_0C09A256; }  /* 0C09A252 bf/s */
L_0C09A256: BLKS(0x0C09A256u);
	r2 = 0xC26CD40u; UPD(0x0C09A258u, 1);  /* 0C09A256 mov.l @(disp,pc),Rn */
	{ IF(0x0C09A25Au); ; /* slot nop */ UPD(0x0C09A0BCu, 3); goto L_0C09A0BC; }  /* 0C09A258 bra */
}

void f_0C09A260(sh3_t *c)
{
	LOCALS;
	goto L_0C09A260;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C09A260: BLKS(0x0C09A260u);
	r7 = 0xB4u; UPD(0x0C09A262u, 1);  /* 0C09A260 mov.w @(disp,pc),Rn */
	IF(0x0C09A262u); MACL = r11 * r7;  /* 0C09A262 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09A266u, 3);  /* 0C09A264 mov.l @(disp,pc),Rn */
	IF(0x0C09A266u); r9 = MACL;  /* 0C09A266 sts macl,Rn */
	r1 = 0x99u; UPD(0x0C09A26Au, 2);  /* 0C09A268 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C09A26A add Rm,Rn */
	r1 += r9;  /* 0C09A26C add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C09A270u, 3);  /* 0C09A26E mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C09A270 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C09A272 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C09A274 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A28Au, 6); goto L_0C09A28A; } UPD(0x0C09A27Au, 1); goto L_0C09A27A; }  /* 0C09A276 bf/s */
L_0C09A27A: BLKS(0x0C09A27Au);
	r8 = 0xC0580D0u; UPD(0x0C09A27Cu, 1);  /* 0C09A27A mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C09A27C mov #imm,Rn */
	W8(r1, r13); UPD(0x0C09A280u, 2);  /* 0C09A27E mov.b Rm,@Rn */
	IF(0x0C09A280u); { u32 t_ = r8; PR = 0x0C09A284u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C09A284u); }  /* 0C09A280 jsr @Rn */
L_0C09A284: BLKS(0x0C09A284u);
	r6 = 0xA0u; UPD(0x0C09A286u, 1);  /* 0C09A284 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C09A286 add Rm,Rn */
	W8(r9, r13); UPD(0x0C09A28Au, 2);  /* 0C09A288 mov.b Rm,@Rn */
L_0C09A28A: BLKS(0x0C09A28Au);
	{ IF(0x0C09A28Cu); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A28A bra */
}

void f_0C09A290(sh3_t *c)
{
	LOCALS;
	goto L_0C09A290;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C09A290: BLKS(0x0C09A290u);
	r1 = 0xB4u; UPD(0x0C09A292u, 1);  /* 0C09A290 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C09A292 mov Rm,Rn */
	IF(0x0C09A294u); MACL = r11 * r1;  /* 0C09A294 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09A298u, 4);  /* 0C09A296 mov.l @(disp,pc),Rn */
	IF(0x0C09A298u); r8 = MACL;  /* 0C09A298 sts macl,Rn */
	r8 += r9;  /* 0C09A29A add Rm,Rn */
	r9 = r8;  /* 0C09A29C mov Rm,Rn */
	r9 += 0x50u;  /* 0C09A29E add #imm,Rn */
	r5 = R32(r9); UPD(0x0C09A2A2u, 5);  /* 0C09A2A0 mov.l @Rm,Rn */
	r13 = 0xC058130u; UPD(0x0C09A2A4u, 1);  /* 0C09A2A2 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C09A2A4 add #imm,Rn */
	r12 = 0xC057430u; UPD(0x0C09A2A8u, 2);  /* 0C09A2A6 mov.l @(disp,pc),Rn */
	IF(0x0C09A2A8u); { u32 t_ = r13; PR = 0x0C09A2ACu; W32(r9, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09A2ACu); }  /* 0C09A2A8 jsr @Rn */
L_0C09A2AC: BLKS(0x0C09A2ACu);
	r4 = r11;  /* 0C09A2AC mov Rm,Rn */
	r10 = 0x86u; UPD(0x0C09A2B0u, 2);  /* 0C09A2AE mov.w @(disp,pc),Rn */
	IF(0x0C09A2B0u); { u32 t_ = r12; PR = 0x0C09A2B4u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A2B4u); }  /* 0C09A2B0 jsr @Rn */
L_0C09A2B4: BLKS(0x0C09A2B4u);
	r0 = r8;  /* 0C09A2B4 mov Rm,Rn */
	IF(0x0C09A2B6u); r4 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C09A2B8u, 2);  /* 0C09A2B6 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C09A2B8 add #imm,Rn */
	IF(0x0C09A2BAu); r4 >>= 2;  /* 0C09A2BA shlr2 Rn */
	r0 = 0x1Fu;  /* 0C09A2BC mov #imm,Rn */
	IF(0x0C09A2BEu); r4 >>= 2;  /* 0C09A2BE shlr2 Rn */
	r4 &= r0;  /* 0C09A2C0 and Rm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C09A2C4u, 6);  /* 0C09A2C2 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09A2C6u, 1);  /* 0C09A2C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C09A2C6u); { u32 t_ = r3; PR = 0x0C09A2CAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09A2CAu); }  /* 0C09A2C6 jsr @Rn */
L_0C09A2CA: BLKS(0x0C09A2CAu);
	r3 = 0xA0u; UPD(0x0C09A2CCu, 1);  /* 0C09A2CA mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C09A2CC add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A2D0u, 2);  /* 0C09A2CE mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C09A2D0 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09A2D2 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09A2DCu, 5); goto L_0C09A2DC; } goto L_0C09A2D8; }  /* 0C09A2D4 bf/s */
L_0C09A2D8: BLKS(0x0C09A2D8u);
	{ r6 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(0x0C09A3F0u, 4); goto L_0C09A3F0; }  /* 0C09A2D8 bra */
L_0C09A2DC: BLKS(0x0C09A2DCu);
	if (T) { UPD(0x0C09A340u, 3); goto L_0C09A340; }  /* 0C09A2DC bt */
L_0C09A2DE: BLKS(0x0C09A2DEu);
	r8 = 0xC058130u; UPD(0x0C09A2E0u, 1);  /* 0C09A2DE mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C09A2E2u, 1);  /* 0C09A2E0 mov.l @(disp,pc),Rn */
	IF(0x0C09A2E2u); { u32 t_ = r8; PR = 0x0C09A2E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09A2E6u); }  /* 0C09A2E2 jsr @Rn */
L_0C09A2E6: BLKS(0x0C09A2E6u);
	r4 = r11;  /* 0C09A2E6 mov Rm,Rn */
	IF(0x0C09A2E8u); { u32 t_ = r9; PR = 0x0C09A2ECu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09A2ECu); }  /* 0C09A2E8 jsr @Rn */
L_0C09A2EC: BLKS(0x0C09A2ECu);
	r2 = 0xB4u; UPD(0x0C09A2EEu, 1);  /* 0C09A2EC mov.w @(disp,pc),Rn */
	IF(0x0C09A2EEu); MACL = r11 * r2;  /* 0C09A2EE mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09A2F2u, 3);  /* 0C09A2F0 mov.l @(disp,pc),Rn */
	IF(0x0C09A2F2u); r7 = MACL;  /* 0C09A2F2 sts macl,Rn */
	r7 += r6;  /* 0C09A2F4 add Rm,Rn */
	r3 = 0x86u; UPD(0x0C09A2F8u, 3);  /* 0C09A2F6 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09A2F8 mov Rm,Rn */
	IF(0x0C09A2FAu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09A2FCu, 2);  /* 0C09A2FA mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C09A2FC add #imm,Rn */
	IF(0x0C09A2FEu); r4 >>= 2;  /* 0C09A2FE shlr2 Rn */
	r0 = 0x1Fu;  /* 0C09A300 mov #imm,Rn */
	IF(0x0C09A302u); r4 >>= 2;  /* 0C09A302 shlr2 Rn */
	r4 &= r0;  /* 0C09A304 and Rm,Rn */
	r5 = 0xC0A0380u; UPD(0x0C09A308u, 6);  /* 0C09A306 mov.l @(disp,pc),Rn */
	W32(r7 + 0xCu, r4); UPD(0x0C09A30Au, 1);  /* 0C09A308 mov.l Rm,@(disp,Rn) */
	IF(0x0C09A30Au); { u32 t_ = r5; PR = 0x0C09A30Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09A30Eu); }  /* 0C09A30A jsr @Rn */
L_0C09A30E: BLKS(0x0C09A30Eu);
	{ IF(0x0C09A310u); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A30E bra */
L_0C09A340: BLKS(0x0C09A340u);
	r13 = 0xC050D70u; UPD(0x0C09A342u, 1);  /* 0C09A340 mov.l @(disp,pc),Rn */
	r12 = 0xC0A9E40u; UPD(0x0C09A344u, 1);  /* 0C09A342 mov.l @(disp,pc),Rn */
	IF(0x0C09A344u); { u32 t_ = r13; PR = 0x0C09A348u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A348u); }  /* 0C09A344 jsr @Rn */
L_0C09A348: BLKS(0x0C09A348u);
	W32(r14 + 0x1Cu, r0); UPD(0x0C09A34Au, 1);  /* 0C09A348 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09A34A mov Rm,Rn */
	r5 = 0xAu;  /* 0C09A34C mov #imm,Rn */
	IF(0x0C09A34Eu); { u32 t_ = r12; PR = 0x0C09A352u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C09A352u); }  /* 0C09A34E jsr @Rn */
L_0C09A352: BLKS(0x0C09A352u);
	T = (r0 & r0) == 0;  /* 0C09A352 tst Rm,Rn */
	if (T) { UPD(0x0C09A3C0u, 4); goto L_0C09A3C0; }  /* 0C09A354 bt */
L_0C09A356: BLKS(0x0C09A356u);
	r4 = 0x9Cu; UPD(0x0C09A358u, 1);  /* 0C09A356 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C09A358 add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C09A35Cu, 2);  /* 0C09A35A mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09A35C add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C09A360u, 2);  /* 0C09A35E mov.b @Rm,Rn */
	IF(0x0C09A360u); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A362u, 1);  /* 0C09A360 mov.w @(r0,Rm),Rn */
	r1 = r10 & 0xFF;  /* 0C09A362 extu.b Rm,Rn */
	r3 += r1;  /* 0C09A364 add Rm,Rn */
	IF(0x0C09A366u); W16(r0 + r8, r3); UPD(0x0C09A368u, 3);  /* 0C09A366 mov.w Rm,@(r0,Rn) */
	r4 += 0xFFFFFFFFu;  /* 0C09A368 add #imm,Rn */
	r6 = 0xC0AFF74u; UPD(0x0C09A36Cu, 2);  /* 0C09A36A mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C09A36C exts.w Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09A370u, 2);  /* 0C09A36E mov.b @Rm,Rn */
	r10 = 0x0u;  /* 0C09A370 mov #imm,Rn */
	r12 = 0xA9u; UPD(0x0C09A374u, 2);  /* 0C09A372 mov.w @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C09A376u, 1);  /* 0C09A374 mov.w @(disp,pc),Rn */
	IF(0x0C09A376u); { u32 t_ = r6; PR = 0x0C09A37Au; r5 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C09A37Au); }  /* 0C09A376 jsr @Rn */
L_0C09A37A: BLKS(0x0C09A37Au);
	r13 = (u32)(s32)(s16)r0;  /* 0C09A37A exts.w Rm,Rn */
	r12 += r8;  /* 0C09A37C add Rm,Rn */
	UPD(0x0C09A37Eu, 2);
L_0C09A37E: BLKS(0x0C09A37Eu);
	r0 = 0x9Cu; UPD(0x0C09A380u, 1);  /* 0C09A37E mov.w @(disp,pc),Rn */
	IF(0x0C09A380u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09A382u, 1);  /* 0C09A380 mov.b @(r0,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C09A382 extu.b Rm,Rn */
	T = (s32)r10 >= (s32)r6;  /* 0C09A384 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09A3C0u, 5); goto L_0C09A3C0; }  /* 0C09A386 bt */
L_0C09A388: BLKS(0x0C09A388u);
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C09A38Au, 1);  /* 0C09A388 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09A38A add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09A38Eu, 2);  /* 0C09A38C mov.l @(disp,Rm),Rn */
	r4 += 0xFFFFFFFEu;  /* 0C09A38E add #imm,Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C09A390 exts.b Rm,Rn */
	W32(r15, r0); UPD(0x0C09A394u, 3);  /* 0C09A392 mov.l Rm,@Rn */
	r4 = r11;  /* 0C09A394 mov Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09A398u, 2);  /* 0C09A396 mov.l Rm,@(disp,Rn) */
	r0 = 0x88u; UPD(0x0C09A39Au, 1);  /* 0C09A398 mov.w @(disp,pc),Rn */
	IF(0x0C09A39Au); r7 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A39Cu, 1);  /* 0C09A39A mov.w @(r0,Rm),Rn */
	r0 = 0xC09F920u; UPD(0x0C09A39Eu, 1);  /* 0C09A39C mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C09A3A0u, 1);  /* 0C09A39E mov.l Rm,@(disp,Rn) */
	r3 = 0xFFF00000u; UPD(0x0C09A3A2u, 1);  /* 0C09A3A0 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x1Cu); UPD(0x0C09A3A4u, 1);  /* 0C09A3A2 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C09A3A4 add Rm,Rn */
	IF(0x0C09A3A6u); { u32 t_ = r0; PR = 0x0C09A3AAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C09F920, 0x0C09F920u, 0x0C09A3AAu); }  /* 0C09A3A6 jsr @Rn */
L_0C09A3AA: BLKS(0x0C09A3AAu);
	r5 = r9;  /* 0C09A3AA mov Rm,Rn */
	r2 = r10;  /* 0C09A3AC mov Rm,Rn */
	r5 += r13;  /* 0C09A3AE add Rm,Rn */
	r2 += 0x1u;  /* 0C09A3B0 add #imm,Rn */
	r15 += 0xCu;  /* 0C09A3B2 add #imm,Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C09A3B4 exts.w Rm,Rn */
	{ r10 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ UPD(0x0C09A37Eu, 9); goto L_0C09A37E; }  /* 0C09A3B6 bra */
L_0C09A3C0: BLKS(0x0C09A3C0u);
	r12 = 0xB4u; UPD(0x0C09A3C2u, 1);  /* 0C09A3C0 mov.w @(disp,pc),Rn */
	IF(0x0C09A3C2u); MACL = r11 * r12;  /* 0C09A3C2 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09A3C6u, 3);  /* 0C09A3C4 mov.l @(disp,pc),Rn */
	IF(0x0C09A3C6u); r3 = MACL;  /* 0C09A3C6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09A3CAu, 2);  /* 0C09A3C8 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C09A3CA add Rm,Rn */
	r2 += r3;  /* 0C09A3CC add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A3D0u, 3);  /* 0C09A3CE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09A3D0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C09A3D2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C09A3D4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A3E6u, 6); goto L_0C09A3E6; } UPD(0x0C09A3DAu, 1); goto L_0C09A3DA; }  /* 0C09A3D6 bf/s */
L_0C09A3DA: BLKS(0x0C09A3DAu);
	r0 = 0xA0u; UPD(0x0C09A3DCu, 1);  /* 0C09A3DA mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09A3DC mov #imm,Rn */
	IF(0x0C09A3DEu); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09A3E0u, 2);  /* 0C09A3DE mov.b @(r0,Rm),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09A3E0 add #imm,Rn */
	W8(r2, r10); UPD(0x0C09A3E4u, 2);  /* 0C09A3E2 mov.b Rm,@Rn */
	IF(0x0C09A3E4u); W8(r0 + r3, r13); UPD(0x0C09A3E6u, 1);  /* 0C09A3E4 mov.b Rm,@(r0,Rn) */
L_0C09A3E6: BLKS(0x0C09A3E6u);
	{ IF(0x0C09A3E8u); ; /* slot nop */ UPD(0x0C09A2DEu, 3); goto L_0C09A2DE; }  /* 0C09A3E6 bra */
L_0C09A3F0: BLKS(0x0C09A3F0u);
	r7 = 0x1C20u; UPD(0x0C09A3F2u, 1);  /* 0C09A3F0 mov.w @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C09A3F2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09A410u, 4); goto L_0C09A410; }  /* 0C09A3F4 bf */
L_0C09A3F6: BLKS(0x0C09A3F6u);
	r4 = 0x9Fu; UPD(0x0C09A3F8u, 1);  /* 0C09A3F6 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C09A3F8 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C09A3FCu, 2);  /* 0C09A3FA mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09A3FC add #imm,Rn */
	W8(r4, r8); UPD(0x0C09A400u, 2);  /* 0C09A3FE mov.b Rm,@Rn */
	{ W8(r3, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09A2DEu, 3); goto L_0C09A2DE; }  /* 0C09A400 bra */
L_0C09A410: BLKS(0x0C09A410u);
	r2 = r8;  /* 0C09A410 mov Rm,Rn */
	r2 += 0x60u;  /* 0C09A412 add #imm,Rn */
	r12 = 0x88888889u; UPD(0x0C09A416u, 3);  /* 0C09A414 mov.l @(disp,pc),Rn */
	r13 = r8;  /* 0C09A416 mov Rm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C09A41Au, 2);  /* 0C09A418 mov.l Rm,@(disp,Rn) */
	r10 = r8;  /* 0C09A41A mov Rm,Rn */
	r13 += 0x5Cu;  /* 0C09A41C add #imm,Rn */
	IF(0x0C09A41Eu); ;  /* 0C09A41E nop */
	UPD(0x0C09A420u, 3);
L_0C09A420: BLKS(0x0C09A420u);
	r8 = 0xC050D70u; UPD(0x0C09A422u, 1);  /* 0C09A420 mov.l @(disp,pc),Rn */
	IF(0x0C09A422u); { u32 t_ = r8; PR = 0x0C09A426u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A426u); }  /* 0C09A422 jsr @Rn */
L_0C09A426: BLKS(0x0C09A426u);
	r4 = 0x90u; UPD(0x0C09A428u, 1);  /* 0C09A426 mov.w @(disp,pc),Rn */
	r1 = 0xB4u; UPD(0x0C09A42Au, 1);  /* 0C09A428 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C09A42A add Rm,Rn */
	IF(0x0C09A42Cu); MACL = r11 * r1;  /* 0C09A42C mul.l Rm,Rn */
	IF(0x0C09A42Eu); r0 <<= 16;  /* 0C09A42E shll16 Rn */
	W32(r13, r0); UPD(0x0C09A432u, 5);  /* 0C09A430 mov.l Rm,@Rn */
	r4 = 0x70u;  /* 0C09A432 mov #imm,Rn */
	r6 = 0xC050D70u; UPD(0x0C09A436u, 2);  /* 0C09A434 mov.l @(disp,pc),Rn */
	IF(0x0C09A436u); r0 = MACL;  /* 0C09A436 sts macl,Rn */
	IF(0x0C09A438u); { u32 t_ = r6; PR = 0x0C09A43Cu; W32(r14 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A43Cu); }  /* 0C09A438 jsr @Rn */
L_0C09A43C: BLKS(0x0C09A43Cu);
	r7 = 0x1C8u; UPD(0x0C09A43Eu, 1);  /* 0C09A43C mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFCu;  /* 0C09A43E mov #imm,Rn */
	r0 += r7;  /* 0C09A440 add Rm,Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C09A444u, 3);  /* 0C09A442 mov.l @(disp,Rm),Rn */
	IF(0x0C09A444u); r0 <<= 16;  /* 0C09A444 shll16 Rn */
	W32(r9, r0); UPD(0x0C09A448u, 2);  /* 0C09A446 mov.l Rm,@Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C09A44Au, 1);  /* 0C09A448 mov.l @(disp,Rm),Rn */
	r3 = R32(r13); UPD(0x0C09A44Cu, 1);  /* 0C09A44A mov.l @Rm,Rn */
	r3 -= r5;  /* 0C09A44C sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r3 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A44E dmuls.l Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C09A452u, 4);  /* 0C09A450 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C09A452 mov Rm,Rn */
	r0 -= r8;  /* 0C09A454 sub Rm,Rn */
	IF(0x0C09A456u); r2 = MACH;  /* 0C09A456 sts mach,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r12; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A458 dmuls.l Rm,Rn */
	r7 += r2;  /* 0C09A45A add Rm,Rn */
	IF(0x0C09A45Cu); T = r3 >> 31; r3 <<= 1;  /* 0C09A45C shll Rn */
	r5 = r0;  /* 0C09A45E mov Rm,Rn */
	IF(0x0C09A460u); ARG0(0x476Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C09A460 shad Rm,Rn */
	IF(0x0C09A462u); r4 = MACH;  /* 0C09A462 sts mach,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C09A464 subc Rm,Rn */
	r5 += r4;  /* 0C09A466 add Rm,Rn */
	r7 -= r3;  /* 0C09A468 sub Rm,Rn */
	IF(0x0C09A46Au); T = r0 >> 31; r0 <<= 1;  /* 0C09A46A shll Rn */
	IF(0x0C09A46Cu); ARG0(0x456Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C09A46C shad Rm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09A46E subc Rm,Rn */
	r1 = 0x1FFFu; UPD(0x0C09A472u, 17);  /* 0C09A470 mov.w @(disp,pc),Rn */
	r5 -= r0;  /* 0C09A472 sub Rm,Rn */
	W32(r10 + 0x2Cu, r7); UPD(0x0C09A476u, 2);  /* 0C09A474 mov.l Rm,@(disp,Rn) */
	r9 = 0x3FFEu; UPD(0x0C09A478u, 1);  /* 0C09A476 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09A478 add Rm,Rn */
	W32(r10 + 0x30u, r5); UPD(0x0C09A47Cu, 2);  /* 0C09A47A mov.l Rm,@(disp,Rn) */
	T = r9 >= r7;  /* 0C09A47C cmp/hs Rm,Rn */
	IF(0x0C09A47Eu); r0 = T;  /* 0C09A47E movt Rn */
	r5 += r1;  /* 0C09A480 add Rm,Rn */
	T = r9 >= r5;  /* 0C09A482 cmp/hs Rm,Rn */
	IF(0x0C09A484u); r3 = T;  /* 0C09A484 movt Rn */
	r0 &= r3;  /* 0C09A486 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09A488 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C09A420u, 10); goto L_0C09A420; } UPD(0x0C09A48Eu, 1); goto L_0C09A48E; }  /* 0C09A48A bf/s */
L_0C09A48E: BLKS(0x0C09A48Eu);
	r10 = 0xC26CD40u; UPD(0x0C09A490u, 1);  /* 0C09A48E mov.l @(disp,pc),Rn */
	r0 = 0xA0u; UPD(0x0C09A492u, 1);  /* 0C09A490 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C09A492 add Rm,Rn */
	IF(0x0C09A494u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09A496u, 2);  /* 0C09A494 mov.b @(r0,Rm),Rn */
	r9 = 0x88u; UPD(0x0C09A498u, 1);  /* 0C09A496 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C09A498 add #imm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C09A49Cu, 2);  /* 0C09A49A mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C09A49C add Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C09A4A0u, 2);  /* 0C09A49E mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C09A4A0 add #imm,Rn */
	IF(0x0C09A4A2u); { u32 t_ = r8; PR = 0x0C09A4A6u; IF(0x0C09A4A4u); W8(r0 + r10, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09A4A6u); }  /* 0C09A4A2 jsr @Rn */
L_0C09A4A6: BLKS(0x0C09A4A6u);
	r4 = 0x1FFu; UPD(0x0C09A4A8u, 1);  /* 0C09A4A6 mov.w @(disp,pc),Rn */
	IF(0x0C09A4A8u); { u32 t_ = r13; PR = 0x0C09A4ACu; W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A4ACu); }  /* 0C09A4A8 jsr @Rn */
L_0C09A4AC: BLKS(0x0C09A4ACu);
	r2 = 0xFFFFFF00u; UPD(0x0C09A4AEu, 1);  /* 0C09A4AC mov.w @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C09A4AE mov #imm,Rn */
	r12 = 0x9Cu; UPD(0x0C09A4B2u, 2);  /* 0C09A4B0 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09A4B2 add Rm,Rn */
	r12 += r10;  /* 0C09A4B4 add Rm,Rn */
	r12 += 0x1u;  /* 0C09A4B6 add #imm,Rn */
	IF(0x0C09A4B8u); { u32 t_ = r13; PR = 0x0C09A4BCu; { u32 v_ = r0; r9 -= 2; W16(r9, v_); } /* slot mov.w Rm,@-Rn */ UPD(t_, 5); CALLD(t_, 0x0C09A4BCu); }  /* 0C09A4B8 jsr @Rn */
L_0C09A4BC: BLKS(0x0C09A4BCu);
	W8(r12, r0); UPD(0x0C09A4BEu, 1);  /* 0C09A4BC mov.b Rm,@Rn */
	r3 = 0xC27DFF8u; UPD(0x0C09A4C0u, 1);  /* 0C09A4BE mov.l @(disp,pc),Rn */
	r13 = R32(r3); UPD(0x0C09A4C2u, 1);  /* 0C09A4C0 mov.l @Rm,Rn */
	IF(0x0C09A4C2u); r13 >>= 16;  /* 0C09A4C2 shlr16 Rn */
	IF(0x0C09A4C4u); r13 >>= 2;  /* 0C09A4C4 shlr2 Rn */
	IF(0x0C09A4C6u); r13 >>= 2;  /* 0C09A4C6 shlr2 Rn */
	r10 = 0u - r13;  /* 0C09A4C8 neg Rm,Rn */
	r10 += 0x10u;  /* 0C09A4CA add #imm,Rn */
	IF(0x0C09A4CCu); T = r10 & 1; r10 >>= 1;  /* 0C09A4CC shlr Rn */
	r10 += 0x3u;  /* 0C09A4CE add #imm,Rn */
	{ { u32 v_ = r10; r12 -= 1; W8(r12, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C09A2DEu, 10); goto L_0C09A2DE; }  /* 0C09A4D0 bra */
}

void f_0C09A520(sh3_t *c)
{
	LOCALS;
	goto L_0C09A520;
L_0C099EEC: BLKS(0x0C099EECu);
	r10 = 0xB4u; UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.w @(disp,pc),Rn */
	r14 += 0x24u;  /* 0C099EEE add #imm,Rn */
	IF(0x0C099EF0u); MACL = r11 * r10;  /* 0C099EF0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C099EF4u, 4);  /* 0C099EF2 mov.l @(disp,pc),Rn */
	IF(0x0C099EF4u); r11 = MACL;  /* 0C099EF4 sts macl,Rn */
	r11 += r3;  /* 0C099EF6 add Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.l @(disp,Rm),Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C099EFCu, 1);  /* 0C099EFA mov.l @(disp,Rm),Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C099EFEu, 1);  /* 0C099EFC mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C099F00u, 1);  /* 0C099EFE mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C099F00 add Rm,Rn */
	r1 += r4;  /* 0C099F02 add Rm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C099F06u, 3);  /* 0C099F04 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C099F08u, 1);  /* 0C099F06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C099F08 mov Rm,Rn */
	IF(0x0C099F0Au); PR = R32(r15); r15 += 4; UPD(0x0C099F0Cu, 2);  /* 0C099F0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099F0Eu, 1);  /* 0C099F0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099F10u, 1);  /* 0C099F0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099F12u, 1);  /* 0C099F10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099F14u, 1);  /* 0C099F12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099F16u, 1);  /* 0C099F14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099F18u, 1);  /* 0C099F16 mov.l @Rm+,Rn */
	IF(0x0C099F18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099F18 rts */
L_0C09A520: BLKS(0x0C09A520u);
	r10 = 0xB4u; UPD(0x0C09A522u, 1);  /* 0C09A520 mov.w @(disp,pc),Rn */
	IF(0x0C09A522u); MACL = r11 * r10;  /* 0C09A522 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09A526u, 3);  /* 0C09A524 mov.l @(disp,pc),Rn */
	IF(0x0C09A526u); r10 = MACL;  /* 0C09A526 sts macl,Rn */
	r7 = 0x86u; UPD(0x0C09A52Au, 2);  /* 0C09A528 mov.w @(disp,pc),Rn */
	r10 += r13;  /* 0C09A52A add Rm,Rn */
	r7 += r10;  /* 0C09A52C add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C09A530u, 3);  /* 0C09A52E mov.w @Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C09A532u, 1);  /* 0C09A530 mov.w @(disp,pc),Rn */
	r1 = r3;  /* 0C09A532 mov Rm,Rn */
	r12 = 0xFFu; UPD(0x0C09A536u, 2);  /* 0C09A534 mov.w @(disp,pc),Rn */
	r1 &= r6;  /* 0C09A536 and Rm,Rn */
	T = (s32)r1 > (s32)r12;  /* 0C09A538 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09A548u, 5); goto L_0C09A548; } goto L_0C09A53E; }  /* 0C09A53A bt/s */
L_0C09A53E: BLKS(0x0C09A53Eu);
	r5 = r3;  /* 0C09A53E mov Rm,Rn */
	r5 += 0x1u;  /* 0C09A540 add #imm,Rn */
	W16(r7, r5); UPD(0x0C09A544u, 4);  /* 0C09A542 mov.w Rm,@Rn */
	r3 = r5;  /* 0C09A544 mov Rm,Rn */
	r0 = r3;  /* 0C09A546 mov Rm,Rn */
	UPD(0x0C09A548u, 2);
L_0C09A548: BLKS(0x0C09A548u);
	r4 = 0x100u; UPD(0x0C09A54Au, 1);  /* 0C09A548 mov.w @(disp,pc),Rn */
	r0 &= r6;  /* 0C09A54A and Rm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C09A54C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C09A55Cu, 5); goto L_0C09A55C; } goto L_0C09A552; }  /* 0C09A54E bf/s */
L_0C09A552: BLKS(0x0C09A552u);
	r6 = r3;  /* 0C09A552 mov Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C09A554 add #imm,Rn */
	W16(r7, r6); UPD(0x0C09A558u, 4);  /* 0C09A556 mov.w Rm,@Rn */
	r3 = r6;  /* 0C09A558 mov Rm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C09A55A exts.w Rm,Rn */
	UPD(0x0C09A55Cu, 2);
L_0C09A55C: BLKS(0x0C09A55Cu);
	r13 = 0x1FFu; UPD(0x0C09A55Eu, 1);  /* 0C09A55C mov.w @(disp,pc),Rn */
	r2 += 0x8u;  /* 0C09A55E add #imm,Rn */
	r2 &= r13;  /* 0C09A560 and Rm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C09A564u, 3);  /* 0C09A562 mov.l @(disp,pc),Rn */
	IF(0x0C09A564u); r2 >>= 2;  /* 0C09A564 shlr2 Rn */
	r12 = 0xA0u; UPD(0x0C09A568u, 2);  /* 0C09A566 mov.w @(disp,pc),Rn */
	IF(0x0C09A568u); r2 >>= 2;  /* 0C09A568 shlr2 Rn */
	W32(r10 + 0xCu, r2); UPD(0x0C09A56Cu, 2);  /* 0C09A56A mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09A56C mov Rm,Rn */
	IF(0x0C09A56Eu); { u32 t_ = r3; PR = 0x0C09A572u; r12 += r10; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09A572u); }  /* 0C09A56E jsr @Rn */
L_0C09A572: BLKS(0x0C09A572u);
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C09A574u, 1);  /* 0C09A572 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09A574 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09A576 tst Rm,Rn */
	if (T) { UPD(0x0C09A630u, 5); goto L_0C09A630; }  /* 0C09A578 bt */
L_0C09A57A: BLKS(0x0C09A57Au);
	T = r0 == 0x1u;  /* 0C09A57A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09A620u, 4); goto L_0C09A620; }  /* 0C09A57C bf */
L_0C09A57E: BLKS(0x0C09A57Eu);
	r13 = 0xC050D70u; UPD(0x0C09A580u, 1);  /* 0C09A57E mov.l @(disp,pc),Rn */
	r12 = 0xC0A9E40u; UPD(0x0C09A582u, 1);  /* 0C09A580 mov.l @(disp,pc),Rn */
	IF(0x0C09A582u); { u32 t_ = r13; PR = 0x0C09A586u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A586u); }  /* 0C09A582 jsr @Rn */
L_0C09A586: BLKS(0x0C09A586u);
	W32(r14 + 0x20u, r0); UPD(0x0C09A588u, 1);  /* 0C09A586 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09A588 mov Rm,Rn */
	r5 = 0xAu;  /* 0C09A58A mov #imm,Rn */
	IF(0x0C09A58Cu); { u32 t_ = r12; PR = 0x0C09A590u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C09A590u); }  /* 0C09A58C jsr @Rn */
L_0C09A590: BLKS(0x0C09A590u);
	T = (r0 & r0) == 0;  /* 0C09A590 tst Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09A600u, 4); goto L_0C09A600; } goto L_0C09A596; }  /* 0C09A592 bt/s */
L_0C09A596: BLKS(0x0C09A596u);
	r8 = 0x9Cu; UPD(0x0C09A598u, 2);  /* 0C09A596 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09A598 add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C09A59Cu, 2);  /* 0C09A59A mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C09A59C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C09A5A0u, 2);  /* 0C09A59E mov.b @Rm,Rn */
	IF(0x0C09A5A0u); r3 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C09A5A2u, 1);  /* 0C09A5A0 mov.w @(r0,Rm),Rn */
	r5 = r4 & 0xFF;  /* 0C09A5A2 extu.b Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C09A5A4 add #imm,Rn */
	r3 += r5;  /* 0C09A5A6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C09A5AAu, 4);  /* 0C09A5A8 mov.b @Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C09A5AA exts.w Rm,Rn */
	IF(0x0C09A5ACu); W16(r0 + r10, r3); UPD(0x0C09A5AEu, 2);  /* 0C09A5AC mov.w Rm,@(r0,Rn) */
	r8 = r10;  /* 0C09A5AE mov Rm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C09A5B2u, 2);  /* 0C09A5B0 mov.l @(disp,pc),Rn */
	r10 = 0xA9u; UPD(0x0C09A5B4u, 1);  /* 0C09A5B2 mov.w @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C09A5B6u, 1);  /* 0C09A5B4 mov.w @(disp,pc),Rn */
	IF(0x0C09A5B6u); { u32 t_ = r7; PR = 0x0C09A5BAu; r5 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C09A5BAu); }  /* 0C09A5B6 jsr @Rn */
L_0C09A5BA: BLKS(0x0C09A5BAu);
	r13 = (u32)(s32)(s16)r0;  /* 0C09A5BA exts.w Rm,Rn */
	r10 += r8;  /* 0C09A5BC add Rm,Rn */
	UPD(0x0C09A5BEu, 2);
L_0C09A5BE: BLKS(0x0C09A5BEu);
	r0 = 0x9Cu; UPD(0x0C09A5C0u, 1);  /* 0C09A5BE mov.w @(disp,pc),Rn */
	IF(0x0C09A5C0u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09A5C2u, 1);  /* 0C09A5C0 mov.b @(r0,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C09A5C2 extu.b Rm,Rn */
	T = (s32)r12 >= (s32)r6;  /* 0C09A5C4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09A600u, 5); goto L_0C09A600; }  /* 0C09A5C6 bt */
L_0C09A5C8: BLKS(0x0C09A5C8u);
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C09A5CAu, 1);  /* 0C09A5C8 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09A5CA add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09A5CEu, 2);  /* 0C09A5CC mov.l @(disp,Rm),Rn */
	r5 += 0xFFFFFFFEu;  /* 0C09A5CE add #imm,Rn */
	r3 = (u32)(s32)(s8)r5;  /* 0C09A5D0 exts.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09A5D4u, 3);  /* 0C09A5D2 mov.l Rm,@(disp,Rn) */
	W32(r15, r3); UPD(0x0C09A5D6u, 1);  /* 0C09A5D4 mov.l Rm,@Rn */
	r0 = 0x88u; UPD(0x0C09A5D8u, 1);  /* 0C09A5D6 mov.w @(disp,pc),Rn */
	IF(0x0C09A5D8u); r7 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A5DAu, 1);  /* 0C09A5D8 mov.w @(r0,Rm),Rn */
	r4 = 0xFFF00000u; UPD(0x0C09A5DCu, 1);  /* 0C09A5DA mov.l @(disp,pc),Rn */
	r0 = 0xC09F920u; UPD(0x0C09A5DEu, 1);  /* 0C09A5DC mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C09A5DE add Rm,Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C09A5E2u, 2);  /* 0C09A5E0 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09A5E2 mov Rm,Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C09A5E6u, 2);  /* 0C09A5E4 mov.l @(disp,Rm),Rn */
	IF(0x0C09A5E6u); { u32 t_ = r0; PR = 0x0C09A5EAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C09F920, 0x0C09F920u, 0x0C09A5EAu); }  /* 0C09A5E6 jsr @Rn */
L_0C09A5EA: BLKS(0x0C09A5EAu);
	r2 = r9;  /* 0C09A5EA mov Rm,Rn */
	r0 = r12;  /* 0C09A5EC mov Rm,Rn */
	r2 += r13;  /* 0C09A5EE add Rm,Rn */
	r0 += 0x1u;  /* 0C09A5F0 add #imm,Rn */
	r15 += 0xCu;  /* 0C09A5F2 add #imm,Rn */
	r9 = (u32)(s32)(s16)r2;  /* 0C09A5F4 exts.w Rm,Rn */
	{ r12 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C09A5BEu, 9); goto L_0C09A5BE; }  /* 0C09A5F6 bra */
L_0C09A600: BLKS(0x0C09A600u);
	r13 = 0xB4u; UPD(0x0C09A602u, 1);  /* 0C09A600 mov.w @(disp,pc),Rn */
	IF(0x0C09A602u); MACL = r11 * r13;  /* 0C09A602 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09A606u, 3);  /* 0C09A604 mov.l @(disp,pc),Rn */
	IF(0x0C09A606u); r3 = MACL;  /* 0C09A606 sts macl,Rn */
	r3 += r12;  /* 0C09A608 add Rm,Rn */
	r9 = R32(r3 + 0x24u); UPD(0x0C09A60Cu, 3);  /* 0C09A60A mov.l @(disp,Rm),Rn */
	r10 = 0xFF800000u; UPD(0x0C09A60Eu, 1);  /* 0C09A60C mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r10;  /* 0C09A60E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09A620u, 4); goto L_0C09A620; }  /* 0C09A610 bt */
L_0C09A612: BLKS(0x0C09A612u);
	r5 = 0x0u;  /* 0C09A612 mov #imm,Rn */
	W32(r3, r5); UPD(0x0C09A616u, 2);  /* 0C09A614 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C09A616 mov #imm,Rn */
	r7 = 0xC392AFDu; UPD(0x0C09A61Au, 2);  /* 0C09A618 mov.l @(disp,pc),Rn */
	r8 = 0xC392AFEu; UPD(0x0C09A61Cu, 1);  /* 0C09A61A mov.l @(disp,pc),Rn */
	W8(r7, r0); UPD(0x0C09A61Eu, 1);  /* 0C09A61C mov.b Rm,@Rn */
	W8(r8, r0); UPD(0x0C09A620u, 1);  /* 0C09A61E mov.b Rm,@Rn */
L_0C09A620: BLKS(0x0C09A620u);
	{ IF(0x0C09A622u); ; /* slot nop */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A620 bra */
L_0C09A630: BLKS(0x0C09A630u);
	r9 = 0xC0AFE40u; UPD(0x0C09A632u, 1);  /* 0C09A630 mov.l @(disp,pc),Rn */
	r6 = 0xFFFF0000u; UPD(0x0C09A634u, 1);  /* 0C09A632 mov.l @(disp,pc),Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C09A636u, 1);  /* 0C09A634 mov.l Rm,@(disp,Rn) */
	IF(0x0C09A636u); { u32 t_ = r9; PR = 0x0C09A63Au; W32(r10 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09A63Au); }  /* 0C09A636 jsr @Rn */
L_0C09A63A: BLKS(0x0C09A63Au);
	r8 = 0x88u; UPD(0x0C09A63Cu, 1);  /* 0C09A63A mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C09A63C mov Rm,Rn */
	r9 = 0xC050D70u; UPD(0x0C09A640u, 2);  /* 0C09A63E mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C09A640 add Rm,Rn */
	r8 += 0x2u;  /* 0C09A642 add #imm,Rn */
	IF(0x0C09A644u); { u32 t_ = r9; PR = 0x0C09A648u; W16(r8, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A648u); }  /* 0C09A644 jsr @Rn */
L_0C09A648: BLKS(0x0C09A648u);
	r4 = 0xFFFFFF00u; UPD(0x0C09A64Au, 1);  /* 0C09A648 mov.w @(disp,pc),Rn */
	r13 = 0x9Cu; UPD(0x0C09A64Cu, 1);  /* 0C09A64A mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C09A64C add Rm,Rn */
	r13 += r10;  /* 0C09A64E add Rm,Rn */
	{ u32 v_ = r0; r8 -= 2; W16(r8, v_); } UPD(0x0C09A652u, 3);  /* 0C09A650 mov.w Rm,@-Rn */
	r13 += 0x1u;  /* 0C09A652 add #imm,Rn */
	IF(0x0C09A654u); { u32 t_ = r9; PR = 0x0C09A658u; r4 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09A658u); }  /* 0C09A654 jsr @Rn */
L_0C09A658: BLKS(0x0C09A658u);
	W8(r13, r0); UPD(0x0C09A65Au, 1);  /* 0C09A658 mov.b Rm,@Rn */
	r5 = 0xC27DFF8u; UPD(0x0C09A65Cu, 1);  /* 0C09A65A mov.l @(disp,pc),Rn */
	r10 = R32(r5); UPD(0x0C09A65Eu, 1);  /* 0C09A65C mov.l @Rm,Rn */
	IF(0x0C09A65Eu); r10 >>= 16;  /* 0C09A65E shlr16 Rn */
	IF(0x0C09A660u); r10 >>= 2;  /* 0C09A660 shlr2 Rn */
	IF(0x0C09A662u); r10 >>= 2;  /* 0C09A662 shlr2 Rn */
	r8 = 0u - r10;  /* 0C09A664 neg Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C09A668u, 5);  /* 0C09A666 mov.b @Rm,Rn */
	r8 += 0x10u;  /* 0C09A668 add #imm,Rn */
	IF(0x0C09A66Au); T = r8 & 1; r8 >>= 1;  /* 0C09A66A shlr Rn */
	r8 += 0x3u;  /* 0C09A66C add #imm,Rn */
	r9 += 0x1u;  /* 0C09A66E add #imm,Rn */
	{ u32 v_ = r8; r13 -= 1; W8(r13, v_); } UPD(0x0C09A672u, 5);  /* 0C09A670 mov.b Rm,@-Rn */
	{ W8(r12, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C099EECu, 3); goto L_0C099EEC; }  /* 0C09A672 bra */
}

void f_0C09A6D0(sh3_t *c)
{
	LOCALS;
L_0C09A6D0: BLKS(0x0C09A6D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6D2u, 1);  /* 0C09A6D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6D4u, 1);  /* 0C09A6D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6D6u, 1);  /* 0C09A6D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6D8u, 1);  /* 0C09A6D6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C09A6D8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6DCu, 2);  /* 0C09A6DA mov.l Rm,@-Rn */
	r4 = r10;  /* 0C09A6DC mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6E0u, 2);  /* 0C09A6DE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09A6E2u, 1);  /* 0C09A6E0 mov.l Rm,@-Rn */
	r9 = 0xC058090u; UPD(0x0C09A6E4u, 1);  /* 0C09A6E2 mov.l @(disp,pc),Rn */
	IF(0x0C09A6E4u); r15 -= 4; W32(r15, PR); UPD(0x0C09A6E6u, 1);  /* 0C09A6E4 sts.l pr,@-Rn */
	IF(0x0C09A6E6u); { u32 t_ = r9; PR = 0x0C09A6EAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C09A6EAu); }  /* 0C09A6E6 jsr @Rn */
L_0C09A6EA: BLKS(0x0C09A6EAu);
	r7 = 0xB4u; UPD(0x0C09A6ECu, 1);  /* 0C09A6EA mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C09A6EC exts.w Rm,Rn */
	IF(0x0C09A6EEu); MACL = r10 * r7;  /* 0C09A6EE mul.l Rm,Rn */
	r4 = 0x280u; UPD(0x0C09A6F2u, 4);  /* 0C09A6F0 mov.w @(disp,pc),Rn */
	IF(0x0C09A6F2u); r9 = MACL;  /* 0C09A6F2 sts macl,Rn */
	IF(0x0C09A6F4u); MACL = r5 * r4;  /* 0C09A6F4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09A6F8u, 4);  /* 0C09A6F6 mov.l @(disp,pc),Rn */
	r3 = 0xC283794u; UPD(0x0C09A6FAu, 1);  /* 0C09A6F8 mov.l @(disp,pc),Rn */
	IF(0x0C09A6FAu); r0 = MACL;  /* 0C09A6FA sts macl,Rn */
	r8 = 0xC057390u; UPD(0x0C09A6FEu, 2);  /* 0C09A6FC mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C09A6FE add Rm,Rn */
	r11 = 0x8Au; UPD(0x0C09A702u, 2);  /* 0C09A700 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09A702 add Rm,Rn */
	r11 += r9;  /* 0C09A704 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09A708u, 3);  /* 0C09A706 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09A70Au, 1);  /* 0C09A708 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C09A70Cu, 1);  /* 0C09A70A mov.l @(disp,Rm),Rn */
	IF(0x0C09A70Cu); { u32 t_ = r8; PR = 0x0C09A710u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09A710u); }  /* 0C09A70C jsr @Rn */
L_0C09A710: BLKS(0x0C09A710u);
	W16(r11, r0); UPD(0x0C09A712u, 1);  /* 0C09A710 mov.w Rm,@Rn */
	r0 = r9;  /* 0C09A712 mov Rm,Rn */
	r0 += 0x50u;  /* 0C09A714 add #imm,Rn */
	r2 = R32(r0); UPD(0x0C09A718u, 3);  /* 0C09A716 mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C09A718 add #imm,Rn */
	W32(r0, r2); UPD(0x0C09A71Cu, 2);  /* 0C09A71A mov.l Rm,@Rn */
	r2 = 0x9Fu; UPD(0x0C09A71Eu, 1);  /* 0C09A71C mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09A71E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A722u, 2);  /* 0C09A720 mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C09A722 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09A724 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09A72Eu, 5); goto L_0C09A72E; }  /* 0C09A726 bf */
L_0C09A728: BLKS(0x0C09A728u);
	r9 += 0x3Cu;  /* 0C09A728 add #imm,Rn */
	{ r3 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(0x0C09A920u, 4); goto L_0C09A920; }  /* 0C09A72A bra */
L_0C09A72E: BLKS(0x0C09A72Eu);
	r1 = 0x1u;  /* 0C09A72E mov #imm,Rn */
	T = (s32)r0 > (s32)r1;  /* 0C09A730 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09A810u, 5); goto L_0C09A810; } goto L_0C09A736; }  /* 0C09A732 bt/s */
L_0C09A736: BLKS(0x0C09A736u);
	T = (r0 & r0) == 0;  /* 0C09A736 tst Rm,Rn */
	if (T) { UPD(0x0C09A770u, 5); goto L_0C09A770; }  /* 0C09A738 bt */
L_0C09A73A: BLKS(0x0C09A73Au);
	r12 = 0xB4u; UPD(0x0C09A73Cu, 1);  /* 0C09A73A mov.w @(disp,pc),Rn */
	IF(0x0C09A73Cu); MACL = r10 * r12;  /* 0C09A73C mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09A740u, 3);  /* 0C09A73E mov.l @(disp,pc),Rn */
	IF(0x0C09A740u); r10 = MACL;  /* 0C09A740 sts macl,Rn */
	r10 += r13;  /* 0C09A742 add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C09A746u, 3);  /* 0C09A744 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x28u); UPD(0x0C09A748u, 1);  /* 0C09A746 mov.l @(disp,Rm),Rn */
	r11 = R32(r10 + 0x2Cu); UPD(0x0C09A74Au, 1);  /* 0C09A748 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x30u); UPD(0x0C09A74Cu, 1);  /* 0C09A74A mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C09A74C add Rm,Rn */
	r1 += r0;  /* 0C09A74E add Rm,Rn */
	W32(r10 + 0x24u, r5); UPD(0x0C09A752u, 3);  /* 0C09A750 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r1); UPD(0x0C09A754u, 1);  /* 0C09A752 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C09A754 mov Rm,Rn */
	IF(0x0C09A756u); PR = R32(r15); r15 += 4; UPD(0x0C09A758u, 2);  /* 0C09A756 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09A75Au, 1);  /* 0C09A758 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09A75Cu, 1);  /* 0C09A75A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09A75Eu, 1);  /* 0C09A75C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09A760u, 1);  /* 0C09A75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09A762u, 1);  /* 0C09A760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09A764u, 1);  /* 0C09A762 mov.l @Rm+,Rn */
	IF(0x0C09A764u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09A764 rts */
L_0C09A770: BLKS(0x0C09A770u);
	r3 = 0xA0u; UPD(0x0C09A772u, 1);  /* 0C09A770 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09A772 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A776u, 2);  /* 0C09A774 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09A776 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09A778 tst Rm,Rn */
	{ u32 c_ = T; r13 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09A7F0u, 5); goto L_0C09A7F0; } goto L_0C09A77E; }  /* 0C09A77A bt/s */
L_0C09A77E: BLKS(0x0C09A77Eu);
	T = r0 == 0x1u;  /* 0C09A77E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09A73Au, 5); goto L_0C09A73A; }  /* 0C09A780 bf */
L_0C09A782: BLKS(0x0C09A782u);
	r2 = R32(r9 + 0x24u); UPD(0x0C09A784u, 1);  /* 0C09A782 mov.l @(disp,Rm),Rn */
	r7 = 0x40u;  /* 0C09A784 mov #imm,Rn */
	r11 = 0x10000u; UPD(0x0C09A788u, 2);  /* 0C09A786 mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C09A788 add Rm,Rn */
	IF(0x0C09A78Au); T = (s32)r2 >= 0;  /* 0C09A78A cmp/pz Rn */
	{ u32 c_ = !T; W32(r9 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09A7B6u, 5); goto L_0C09A7B6; } UPD(0x0C09A790u, 1); goto L_0C09A790; }  /* 0C09A78C bf/s */
L_0C09A790: BLKS(0x0C09A790u);
	r9 = (r2 >> 16) | (r2 << 16);  /* 0C09A790 swap.w Rm,Rn */
	r4 = 0xF0u; UPD(0x0C09A794u, 2);  /* 0C09A792 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r9;  /* 0C09A794 exts.w Rm,Rn */
	r4 -= r7;  /* 0C09A796 sub Rm,Rn */
	r1 = 0x6u;  /* 0C09A798 mov #imm,Rn */
	IF(0x0C09A79Au); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09A79A shld Rm,Rn */
	r6 = 0x88888889u; UPD(0x0C09A79Eu, 5);  /* 0C09A79C mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C09A79E mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r4 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09A7A0 dmuls.l Rm,Rn */
	r3 = 0xFFFFFFF9u;  /* 0C09A7A2 mov #imm,Rn */
	r8 = 0xFFFFFF80u;  /* 0C09A7A4 mov #imm,Rn */
	IF(0x0C09A7A6u); r5 = MACH;  /* 0C09A7A6 sts mach,Rn */
	r0 += r5;  /* 0C09A7A8 add Rm,Rn */
	IF(0x0C09A7AAu); ARG0(0x403Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09A7AA shad Rm,Rn */
	IF(0x0C09A7ACu); T = r4 >> 31; r4 <<= 1;  /* 0C09A7AC shll Rn */
	{ u32 a_ = r4, t_ = a_ - r4, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r4 = r_; }  /* 0C09A7AE subc Rm,Rn */
	r0 -= r4;  /* 0C09A7B0 sub Rm,Rn */
	r8 -= r0;  /* 0C09A7B2 sub Rm,Rn */
	r7 = r8 & 0xFF;  /* 0C09A7B4 extu.b Rm,Rn */
	UPD(0x0C09A7B6u, 13);
L_0C09A7B6: BLKS(0x0C09A7B6u);
	r0 = 0xB4u; UPD(0x0C09A7B8u, 1);  /* 0C09A7B6 mov.w @(disp,pc),Rn */
	r11 = r7;  /* 0C09A7B8 mov Rm,Rn */
	IF(0x0C09A7BAu); MACL = r10 * r0;  /* 0C09A7BA mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09A7BEu, 4);  /* 0C09A7BC mov.l @(disp,pc),Rn */
	r8 = r7;  /* 0C09A7BE mov Rm,Rn */
	IF(0x0C09A7C0u); r3 = MACL;  /* 0C09A7C0 sts macl,Rn */
	IF(0x0C09A7C2u); r11 <<= 16;  /* 0C09A7C2 shll16 Rn */
	IF(0x0C09A7C4u); r8 <<= 8;  /* 0C09A7C4 shll8 Rn */
	r3 += r2;  /* 0C09A7C6 add Rm,Rn */
	r11 |= r8;  /* 0C09A7C8 or Rm,Rn */
	r11 |= r7;  /* 0C09A7CA or Rm,Rn */
	r13 = R32(r3 + 0x24u); UPD(0x0C09A7CEu, 8);  /* 0C09A7CC mov.l @(disp,Rm),Rn */
	r12 = 0xF00000u; UPD(0x0C09A7D0u, 1);  /* 0C09A7CE mov.l @(disp,pc),Rn */
	T = r13 == r12;  /* 0C09A7D0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09A73Au, 4); goto L_0C09A73A; } UPD(0x0C09A7D6u, 1); goto L_0C09A7D6; }  /* 0C09A7D2 bf/s */
L_0C09A7D6: BLKS(0x0C09A7D6u);
	r0 = 0xA0u; UPD(0x0C09A7D8u, 1);  /* 0C09A7D6 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09A7D8 mov #imm,Rn */
	IF(0x0C09A7DAu); W8(r0 + r3, r5); UPD(0x0C09A7DCu, 2);  /* 0C09A7DA mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFFu;  /* 0C09A7DC add #imm,Rn */
	r6 = R32(r3); UPD(0x0C09A7E0u, 2);  /* 0C09A7DE mov.l @Rm,Rn */
	IF(0x0C09A7E0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09A7E2u, 1);  /* 0C09A7E0 mov.b @(r0,Rm),Rn */
	r1 = 0x13000000u; UPD(0x0C09A7E4u, 1);  /* 0C09A7E2 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09A7E4 add #imm,Rn */
	r6 |= r1;  /* 0C09A7E6 or Rm,Rn */
	W32(r3, r6); UPD(0x0C09A7EAu, 3);  /* 0C09A7E8 mov.l Rm,@Rn */
	{ IF(0x0C09A7ECu); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A7EA bra */
L_0C09A7F0: BLKS(0x0C09A7F0u);
	r2 = r3;  /* 0C09A7F0 mov Rm,Rn */
	r3 += 0x3u;  /* 0C09A7F2 add #imm,Rn */
	W8(r3, r0); UPD(0x0C09A7F6u, 3);  /* 0C09A7F4 mov.b Rm,@Rn */
	r12 = r7;  /* 0C09A7F6 mov Rm,Rn */
	r13 += 0x1u;  /* 0C09A7F8 add #imm,Rn */
	r2 += 0x2u;  /* 0C09A7FA add #imm,Rn */
	r3 += 0xFFFFFFFDu;  /* 0C09A7FC add #imm,Rn */
	r12 += 0x1u;  /* 0C09A7FE add #imm,Rn */
	W8(r2, r0); UPD(0x0C09A802u, 6);  /* 0C09A800 mov.b Rm,@Rn */
	W8(r13, r0); UPD(0x0C09A804u, 1);  /* 0C09A802 mov.b Rm,@Rn */
	{ W8(r3, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A804 bra */
L_0C09A810: BLKS(0x0C09A810u);
	if (!T) { UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A810 bf */
L_0C09A812: BLKS(0x0C09A812u);
	r7 = 0xA0u; UPD(0x0C09A814u, 1);  /* 0C09A812 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09A814 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C09A818u, 2);  /* 0C09A816 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C09A818 extu.b Rm,Rn */
	r0 = r5;  /* 0C09A81A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C09A81C cmp/eq #imm,r0 */
	{ u32 c_ = T; T = (s32)r5 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C09A8C0u, 6); goto L_0C09A8C0; } goto L_0C09A822; }  /* 0C09A81E bt/s */
L_0C09A822: BLKS(0x0C09A822u);
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09A860u, 4); goto L_0C09A860; } goto L_0C09A826; }  /* 0C09A822 bt/s */
L_0C09A826: BLKS(0x0C09A826u);
	T = (r5 & r5) == 0;  /* 0C09A826 tst Rm,Rn */
	if (!T) { UPD(0x0C09A73Au, 5); goto L_0C09A73A; }  /* 0C09A828 bf */
L_0C09A82A: BLKS(0x0C09A82Au);
	r1 = 0xFFFFFF80u;  /* 0C09A82A mov #imm,Rn */
	r0 = 0xA4u; UPD(0x0C09A82Eu, 2);  /* 0C09A82C mov.w @(disp,pc),Rn */
	IF(0x0C09A82Eu); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A830u, 1);  /* 0C09A82E mov.b @(r0,Rm),Rn */
	r12 = r7;  /* 0C09A830 mov Rm,Rn */
	r13 |= r1;  /* 0C09A832 or Rm,Rn */
	r8 = r7;  /* 0C09A834 mov Rm,Rn */
	IF(0x0C09A836u); W8(r0 + r9, r13); UPD(0x0C09A838u, 4);  /* 0C09A836 mov.b Rm,@(r0,Rn) */
	r7 += 0x3u;  /* 0C09A838 add #imm,Rn */
	r11 = 0x99u; UPD(0x0C09A83Cu, 2);  /* 0C09A83A mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C09A83C add #imm,Rn */
	r8 += 0x2u;  /* 0C09A83E add #imm,Rn */
	W8(r7, r5); UPD(0x0C09A842u, 3);  /* 0C09A840 mov.b Rm,@Rn */
	r0 = r9;  /* 0C09A842 mov Rm,Rn */
	W32(r9 + 0x30u, r5); UPD(0x0C09A846u, 2);  /* 0C09A844 mov.l Rm,@(disp,Rn) */
	r7 += 0xFFFFFFFDu;  /* 0C09A846 add #imm,Rn */
	W32(r9 + 0x2Cu, r5); UPD(0x0C09A84Au, 2);  /* 0C09A848 mov.l Rm,@(disp,Rn) */
	W8(r8, r5); UPD(0x0C09A84Cu, 1);  /* 0C09A84A mov.b Rm,@Rn */
	W8(r12, r5); UPD(0x0C09A84Eu, 1);  /* 0C09A84C mov.b Rm,@Rn */
	IF(0x0C09A84Eu); W8(r0 + r11, r5); UPD(0x0C09A850u, 1);  /* 0C09A84E mov.b Rm,@(r0,Rn) */
L_0C09A850: BLKS(0x0C09A850u);
	r2 = r6;  /* 0C09A850 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09A852 add #imm,Rn */
	W8(r7, r2); UPD(0x0C09A856u, 3);  /* 0C09A854 mov.b Rm,@Rn */
L_0C09A856: BLKS(0x0C09A856u);
	{ IF(0x0C09A858u); ; /* slot nop */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A856 bra */
L_0C09A860: BLKS(0x0C09A860u);
	if (!T) { UPD(0x0C09A856u, 3); goto L_0C09A856; }  /* 0C09A860 bf */
L_0C09A862: BLKS(0x0C09A862u);
	r0 = 0x99u; UPD(0x0C09A864u, 1);  /* 0C09A862 mov.w @(disp,pc),Rn */
	IF(0x0C09A864u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A866u, 1);  /* 0C09A864 mov.b @(r0,Rm),Rn */
	r6 = 0xFFu; UPD(0x0C09A868u, 1);  /* 0C09A866 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C09A868 add #imm,Rn */
	r7 = r8 & 0xFF;  /* 0C09A86A extu.b Rm,Rn */
	T = r7 == r6;  /* 0C09A86C cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09A870u); W8(r0 + r9, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09A856u, 6); goto L_0C09A856; } UPD(0x0C09A872u, 1); goto L_0C09A872; }  /* 0C09A86E bf/s */
L_0C09A872: BLKS(0x0C09A872u);
	r4 = 0x0u;  /* 0C09A872 mov #imm,Rn */
	r3 = 0x0u;  /* 0C09A874 mov #imm,Rn */
	IF(0x0C09A876u); W8(r0 + r9, r4); UPD(0x0C09A878u, 3);  /* 0C09A876 mov.b Rm,@(r0,Rn) */
	W32(r9, r3); UPD(0x0C09A87Au, 1);  /* 0C09A878 mov.l Rm,@Rn */
	r9 = 0xC061B80u; UPD(0x0C09A87Cu, 1);  /* 0C09A87A mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C09A87Eu, 1);  /* 0C09A87C mov.w @(disp,pc),Rn */
	IF(0x0C09A87Eu); { u32 t_ = r9; PR = 0x0C09A882u; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C061B80, 0x0C061B80u, 0x0C09A882u); }  /* 0C09A87E jsr @Rn */
L_0C09A882: BLKS(0x0C09A882u);
	{ IF(0x0C09A884u); ; /* slot nop */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A882 bra */
L_0C09A8C0: BLKS(0x0C09A8C0u);
	r0 = 0xA4u; UPD(0x0C09A8C2u, 1);  /* 0C09A8C0 mov.w @(disp,pc),Rn */
	IF(0x0C09A8C2u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A8C4u, 1);  /* 0C09A8C2 mov.b @(r0,Rm),Rn */
	IF(0x0C09A8C4u); T = (s32)r3 >= 0;  /* 0C09A8C4 cmp/pz Rn */
	if (!T) { UPD(0x0C09A882u, 4); goto L_0C09A882; }  /* 0C09A8C6 bf */
L_0C09A8C8: BLKS(0x0C09A8C8u);
	r4 = r9;  /* 0C09A8C8 mov Rm,Rn */
	r5 = 0xFF800000u; UPD(0x0C09A8CCu, 2);  /* 0C09A8CA mov.l @(disp,pc),Rn */
	r4 += 0x5Cu;  /* 0C09A8CC add #imm,Rn */
	W32(r4, r5); UPD(0x0C09A8D0u, 2);  /* 0C09A8CE mov.l Rm,@Rn */
	r9 += 0x60u;  /* 0C09A8D0 add #imm,Rn */
	r5 = 0x2000000u; UPD(0x0C09A8D4u, 2);  /* 0C09A8D2 mov.l @(disp,pc),Rn */
	W32(r9, r5); UPD(0x0C09A8D6u, 1);  /* 0C09A8D4 mov.l Rm,@Rn */
	r9 += 0xFFFFFFA0u;  /* 0C09A8D6 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C09A8DAu, 2);  /* 0C09A8D8 mov.l @Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C09A8DCu, 1);  /* 0C09A8DA mov.l @(disp,Rm),Rn */
	r2 -= r0;  /* 0C09A8DC sub Rm,Rn */
	IF(0x0C09A8DEu); T = (s32)r2 >= 0;  /* 0C09A8DE cmp/pz Rn */
	if (!T) { UPD(0x0C09A910u, 5); goto L_0C09A910; }  /* 0C09A8E0 bf */
L_0C09A8E2: BLKS(0x0C09A8E2u);
	r3 = 0xFFFFFFF8u;  /* 0C09A8E2 mov #imm,Rn */
	IF(0x0C09A8E4u); ARG0(0x423Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09A8E4 shad Rm,Rn */
	W32(r9 + 0x2Cu, r2); UPD(0x0C09A8E8u, 3);  /* 0C09A8E6 mov.l Rm,@(disp,Rn) */
	r13 = R32(r9 + 0x28u); UPD(0x0C09A8EAu, 1);  /* 0C09A8E8 mov.l @(disp,Rm),Rn */
	r2 = r5;  /* 0C09A8EA mov Rm,Rn */
	r2 -= r13;  /* 0C09A8EC sub Rm,Rn */
	IF(0x0C09A8EEu); T = (s32)r2 >= 0;  /* 0C09A8EE cmp/pz Rn */
	if (!T) { UPD(0x0C09A900u, 6); goto L_0C09A900; }  /* 0C09A8F0 bf */
L_0C09A8F2: BLKS(0x0C09A8F2u);
	IF(0x0C09A8F2u); ARG0(0x423Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09A8F2 shad Rm,Rn */
	{ W32(r9 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A850u, 4); goto L_0C09A850; }  /* 0C09A8F4 bra */
L_0C09A900: BLKS(0x0C09A900u);
	r12 = 0xFFu; UPD(0x0C09A902u, 1);  /* 0C09A900 mov.w @(disp,pc),Rn */
	{ r2 += r12; /* slot add Rm,Rn */ UPD(0x0C09A8F2u, 3); goto L_0C09A8F2; }  /* 0C09A902 bra */
L_0C09A910: BLKS(0x0C09A910u);
	r11 = 0xFFu; UPD(0x0C09A912u, 1);  /* 0C09A910 mov.w @(disp,pc),Rn */
	{ r2 += r11; /* slot add Rm,Rn */ UPD(0x0C09A8E2u, 3); goto L_0C09A8E2; }  /* 0C09A912 bra */
L_0C09A920: BLKS(0x0C09A920u);
	T = (r3 & r3) == 0;  /* 0C09A920 tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09A92Au, 4); goto L_0C09A92A; } goto L_0C09A926; }  /* 0C09A922 bf/s */
L_0C09A926: BLKS(0x0C09A926u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09ABD0u, 4); goto L_0C09ABD0; }  /* 0C09A926 bra */
L_0C09A92A: BLKS(0x0C09A92Au);
	r0 = 0xA0u; UPD(0x0C09A92Cu, 1);  /* 0C09A92A mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C09A92C mov #imm,Rn */
	IF(0x0C09A92Eu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A930u, 2);  /* 0C09A92E mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C09A930 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C09A932 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09A882u, 5); goto L_0C09A882; }  /* 0C09A934 bt */
L_0C09A936: BLKS(0x0C09A936u);
	r0 = 0xC09A950u;  /* 0C09A936 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09A938 add Rm,Rn */
	IF(0x0C09A93Au); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09A93Cu, 3);  /* 0C09A93A mov.w @(r0,Rm),Rn */
	IF(0x0C09A93Cu); { u32 tv_ = (r12 + 0x0C09A940u); u32 t_ = PHYS(tv_); IF(0x0C09A93Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09A960u: goto L_0C09A960; case 0x0C09A9F0u: goto L_0C09A9F0; case 0x0C09AAA0u: goto L_0C09AAA0; case 0x0C09AB20u: goto L_0C09AB20; default: JUMPD(tv_); } }  /* 0C09A93C braf Rn */
L_0C09A960: BLKS(0x0C09A960u);
	r2 = 0xB4u; UPD(0x0C09A962u, 1);  /* 0C09A960 mov.w @(disp,pc),Rn */
	IF(0x0C09A962u); MACL = r10 * r2;  /* 0C09A962 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09A966u, 3);  /* 0C09A964 mov.l @(disp,pc),Rn */
	IF(0x0C09A966u); r9 = MACL;  /* 0C09A966 sts macl,Rn */
	r9 += r8;  /* 0C09A968 add Rm,Rn */
	r12 = r9;  /* 0C09A96A mov Rm,Rn */
	r12 += 0x50u;  /* 0C09A96C add #imm,Rn */
	r11 = R32(r12); UPD(0x0C09A970u, 5);  /* 0C09A96E mov.l @Rm,Rn */
	r13 = 0x3138u; UPD(0x0C09A972u, 1);  /* 0C09A970 mov.w @(disp,pc),Rn */
	T = (s32)r11 > (s32)r13;  /* 0C09A972 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09A990u, 4); goto L_0C09A990; }  /* 0C09A974 bf */
L_0C09A976: BLKS(0x0C09A976u);
	r0 = R32(r9); UPD(0x0C09A978u, 1);  /* 0C09A976 mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C09A978 mov #imm,Rn */
	r6 = 0x20000000u; UPD(0x0C09A97Cu, 2);  /* 0C09A97A mov.l @(disp,pc),Rn */
	r0 |= r6;  /* 0C09A97C or Rm,Rn */
	W32(r9, r0); UPD(0x0C09A980u, 2);  /* 0C09A97E mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C09A982u, 1);  /* 0C09A980 mov.w @(disp,pc),Rn */
	IF(0x0C09A982u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A984u, 1);  /* 0C09A982 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C09A984 add #imm,Rn */
	IF(0x0C09A986u); W8(r0 + r9, r5); UPD(0x0C09A988u, 2);  /* 0C09A986 mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C09A988 add #imm,Rn */
	{ IF(0x0C09A98Cu); W8(r0 + r9, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09A73Au, 4); goto L_0C09A73A; }  /* 0C09A98A bra */
L_0C09A990: BLKS(0x0C09A990u);
	r13 = 0xC050D70u; UPD(0x0C09A992u, 1);  /* 0C09A990 mov.l @(disp,pc),Rn */
	r11 = 0xA0u; UPD(0x0C09A994u, 1);  /* 0C09A992 mov.w @(disp,pc),Rn */
	IF(0x0C09A994u); { u32 t_ = r13; PR = 0x0C09A998u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A998u); }  /* 0C09A994 jsr @Rn */
L_0C09A998: BLKS(0x0C09A998u);
	r11 += r9;  /* 0C09A998 add Rm,Rn */
	r11 += 0x1u;  /* 0C09A99A add #imm,Rn */
	r0 += 0x1u;  /* 0C09A99C add #imm,Rn */
	W8(r11, r0); UPD(0x0C09A9A0u, 4);  /* 0C09A99E mov.b Rm,@Rn */
	IF(0x0C09A9A0u); { u32 t_ = r13; PR = 0x0C09A9A4u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A9A4u); }  /* 0C09A9A0 jsr @Rn */
L_0C09A9A4: BLKS(0x0C09A9A4u);
	r11 += 0x1u;  /* 0C09A9A4 add #imm,Rn */
	r0 += 0x1u;  /* 0C09A9A6 add #imm,Rn */
	W8(r11, r0); UPD(0x0C09A9AAu, 3);  /* 0C09A9A8 mov.b Rm,@Rn */
	IF(0x0C09A9AAu); { u32 t_ = r13; PR = 0x0C09A9AEu; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09A9AEu); }  /* 0C09A9AA jsr @Rn */
L_0C09A9AE: BLKS(0x0C09A9AEu);
	r11 += 0x1u;  /* 0C09A9AE add #imm,Rn */
	r0 += 0x1u;  /* 0C09A9B0 add #imm,Rn */
	W8(r11, r0); UPD(0x0C09A9B4u, 3);  /* 0C09A9B2 mov.b Rm,@Rn */
	r2 = R32(r12); UPD(0x0C09A9B6u, 1);  /* 0C09A9B4 mov.l @Rm,Rn */
	r3 = 0x1518u; UPD(0x0C09A9B8u, 1);  /* 0C09A9B6 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C09A9B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09A9C8u, 4); goto L_0C09A9C8; } goto L_0C09A9BE; }  /* 0C09A9BA bf/s */
L_0C09A9BE: BLKS(0x0C09A9BEu);
	r7 = r9;  /* 0C09A9BE mov Rm,Rn */
	r7 += 0x64u;  /* 0C09A9C0 add #imm,Rn */
	r0 = R32(r7); UPD(0x0C09A9C4u, 4);  /* 0C09A9C2 mov.l @Rm,Rn */
	r0 |= 0x80u;  /* 0C09A9C4 or #imm,r0 */
	W32(r7, r0); UPD(0x0C09A9C8u, 2);  /* 0C09A9C6 mov.l Rm,@Rn */
L_0C09A9C8: BLKS(0x0C09A9C8u);
	r12 = 0x2328u; UPD(0x0C09A9CAu, 1);  /* 0C09A9C8 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r12;  /* 0C09A9CA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09A9D8u, 4); goto L_0C09A9D8; }  /* 0C09A9CC bf */
L_0C09A9CE: BLKS(0x0C09A9CEu);
	r8 = r9;  /* 0C09A9CE mov Rm,Rn */
	r8 += 0x68u;  /* 0C09A9D0 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C09A9D4u, 3);  /* 0C09A9D2 mov.l @Rm,Rn */
	r0 |= 0x80u;  /* 0C09A9D4 or #imm,r0 */
	W32(r8, r0); UPD(0x0C09A9D8u, 2);  /* 0C09A9D6 mov.l Rm,@Rn */
L_0C09A9D8: BLKS(0x0C09A9D8u);
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C09A9DAu, 1);  /* 0C09A9D8 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09A9DA add #imm,Rn */
	W8(r11, r9); UPD(0x0C09A9DEu, 2);  /* 0C09A9DC mov.b Rm,@Rn */
L_0C09A9DE: BLKS(0x0C09A9DEu);
	{ IF(0x0C09A9E0u); ; /* slot nop */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09A9DE bra */
L_0C09A9F0: BLKS(0x0C09A9F0u);
	r5 = 0xB4u; UPD(0x0C09A9F2u, 1);  /* 0C09A9F0 mov.w @(disp,pc),Rn */
	IF(0x0C09A9F2u); MACL = r10 * r5;  /* 0C09A9F2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09A9F6u, 3);  /* 0C09A9F4 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09A9F8u, 1);  /* 0C09A9F6 mov.w @(disp,pc),Rn */
	IF(0x0C09A9F8u); r6 = MACL;  /* 0C09A9F8 sts macl,Rn */
	r7 += r6;  /* 0C09A9FA add Rm,Rn */
	IF(0x0C09A9FCu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09A9FEu, 3);  /* 0C09A9FC mov.b @(r0,Rm),Rn */
	r11 = 0xFFu; UPD(0x0C09AA00u, 1);  /* 0C09A9FE mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09AA00 add #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C09AA02 extu.b Rm,Rn */
	T = r2 == r11;  /* 0C09AA04 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09AA08u); W8(r0 + r7, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09A9DEu, 6); goto L_0C09A9DE; } UPD(0x0C09AA0Au, 1); goto L_0C09AA0A; }  /* 0C09AA06 bf/s */
L_0C09AA0A: BLKS(0x0C09AA0Au);
	r3 = 0x0u;  /* 0C09AA0A mov #imm,Rn */
	r12 = 0xC050D70u; UPD(0x0C09AA0Eu, 2);  /* 0C09AA0C mov.l @(disp,pc),Rn */
	r9 = r7;  /* 0C09AA0E mov Rm,Rn */
	r11 = r7;  /* 0C09AA10 mov Rm,Rn */
	IF(0x0C09AA12u); W8(r0 + r7, r3); UPD(0x0C09AA14u, 3);  /* 0C09AA12 mov.b Rm,@(r0,Rn) */
	r8 = r7;  /* 0C09AA14 mov Rm,Rn */
	r9 += 0x5Cu;  /* 0C09AA16 add #imm,Rn */
	r11 += 0x60u;  /* 0C09AA18 add #imm,Rn */
	IF(0x0C09AA1Au); r13 = MACL;  /* 0C09AA1A sts macl,Rn */
	UPD(0x0C09AA1Cu, 4);
L_0C09AA1C: BLKS(0x0C09AA1Cu);
	IF(0x0C09AA1Cu); { u32 t_ = r12; PR = 0x0C09AA20u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AA20u); }  /* 0C09AA1C jsr @Rn */
L_0C09AA20: BLKS(0x0C09AA20u);
	r2 = 0xD0u; UPD(0x0C09AA22u, 1);  /* 0C09AA20 mov.w @(disp,pc),Rn */
	r4 = 0x70u;  /* 0C09AA22 mov #imm,Rn */
	r0 += r2;  /* 0C09AA24 add Rm,Rn */
	IF(0x0C09AA26u); r0 <<= 16;  /* 0C09AA26 shll16 Rn */
	IF(0x0C09AA28u); { u32 t_ = r12; PR = 0x0C09AA2Cu; W32(r9, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AA2Cu); }  /* 0C09AA28 jsr @Rn */
L_0C09AA2C: BLKS(0x0C09AA2Cu);
	r7 = 0x1C8u; UPD(0x0C09AA2Eu, 1);  /* 0C09AA2C mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09AA2E add Rm,Rn */
	IF(0x0C09AA30u); r0 <<= 16;  /* 0C09AA30 shll16 Rn */
	W32(r11, r0); UPD(0x0C09AA34u, 3);  /* 0C09AA32 mov.l Rm,@Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09AA36u, 1);  /* 0C09AA34 mov.l @(disp,Rm),Rn */
	r3 = R32(r9); UPD(0x0C09AA38u, 1);  /* 0C09AA36 mov.l @Rm,Rn */
	r3 -= r6;  /* 0C09AA38 sub Rm,Rn */
	IF(0x0C09AA3Au); T = (s32)r3 >= 0;  /* 0C09AA3A cmp/pz Rn */
	if (!T) { UPD(0x0C09AA90u, 5); goto L_0C09AA90; }  /* 0C09AA3C bf */
L_0C09AA3E: BLKS(0x0C09AA3Eu);
	r2 = 0xFFFFFFF8u;  /* 0C09AA3E mov #imm,Rn */
	IF(0x0C09AA40u); ARG0(0x432Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C09AA40 shad Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C09AA44u, 3);  /* 0C09AA42 mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C09AA44 sub Rm,Rn */
	IF(0x0C09AA46u); T = (s32)r0 >= 0;  /* 0C09AA46 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09AA80u, 5); goto L_0C09AA80; } UPD(0x0C09AA4Cu, 1); goto L_0C09AA4C; }  /* 0C09AA48 bf/s */
L_0C09AA4C: BLKS(0x0C09AA4Cu);
	IF(0x0C09AA4Cu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09AA4C shad Rm,Rn */
	r7 = 0x1FFFu; UPD(0x0C09AA50u, 2);  /* 0C09AA4E mov.w @(disp,pc),Rn */
	r5 = r3;  /* 0C09AA50 mov Rm,Rn */
	r2 = 0x3FFEu; UPD(0x0C09AA54u, 2);  /* 0C09AA52 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C09AA54 add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C09AA58u, 2);  /* 0C09AA56 mov.l Rm,@(disp,Rn) */
	r4 = r0;  /* 0C09AA58 mov Rm,Rn */
	T = r2 >= r5;  /* 0C09AA5A cmp/hs Rm,Rn */
	IF(0x0C09AA5Cu); r0 = T;  /* 0C09AA5C movt Rn */
	r4 += r7;  /* 0C09AA5E add Rm,Rn */
	T = r2 >= r4;  /* 0C09AA60 cmp/hs Rm,Rn */
	IF(0x0C09AA62u); r3 = T;  /* 0C09AA62 movt Rn */
	r0 &= r3;  /* 0C09AA64 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09AA66 tst Rm,Rn */
	if (!T) { UPD(0x0C09AA1Cu, 11); goto L_0C09AA1C; }  /* 0C09AA68 bf */
L_0C09AA6A: BLKS(0x0C09AA6Au);
	r2 = 0xC26CD40u; UPD(0x0C09AA6Cu, 1);  /* 0C09AA6A mov.l @(disp,pc),Rn */
	r2 += r13;  /* 0C09AA6C add Rm,Rn */
	r13 = 0xA0u; UPD(0x0C09AA70u, 2);  /* 0C09AA6E mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C09AA70 add Rm,Rn */
	UPD(0x0C09AA72u, 1);
L_0C09AA72: BLKS(0x0C09AA72u);
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C09AA74u, 1);  /* 0C09AA72 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09AA74 add #imm,Rn */
	W8(r2, r6); UPD(0x0C09AA78u, 2);  /* 0C09AA76 mov.b Rm,@Rn */
L_0C09AA78: BLKS(0x0C09AA78u);
	{ IF(0x0C09AA7Au); ; /* slot nop */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09AA78 bra */
L_0C09AA80: BLKS(0x0C09AA80u);
	r6 = 0xFFu; UPD(0x0C09AA82u, 1);  /* 0C09AA80 mov.w @(disp,pc),Rn */
	{ r0 += r6; /* slot add Rm,Rn */ UPD(0x0C09AA4Cu, 3); goto L_0C09AA4C; }  /* 0C09AA82 bra */
L_0C09AA90: BLKS(0x0C09AA90u);
	r4 = 0xFFu; UPD(0x0C09AA92u, 1);  /* 0C09AA90 mov.w @(disp,pc),Rn */
	{ r3 += r4; /* slot add Rm,Rn */ UPD(0x0C09AA3Eu, 3); goto L_0C09AA3E; }  /* 0C09AA92 bra */
L_0C09AAA0: BLKS(0x0C09AAA0u);
	r11 = 0xB4u; UPD(0x0C09AAA2u, 1);  /* 0C09AAA0 mov.w @(disp,pc),Rn */
	IF(0x0C09AAA2u); MACL = r10 * r11;  /* 0C09AAA2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09AAA6u, 3);  /* 0C09AAA4 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09AAA8u, 1);  /* 0C09AAA6 mov.w @(disp,pc),Rn */
	IF(0x0C09AAA8u); r6 = MACL;  /* 0C09AAA8 sts macl,Rn */
	r6 += r9;  /* 0C09AAAA add Rm,Rn */
	IF(0x0C09AAACu); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09AAAEu, 3);  /* 0C09AAAC mov.b @(r0,Rm),Rn */
	r2 = 0xFFu; UPD(0x0C09AAB0u, 1);  /* 0C09AAAE mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C09AAB0 add #imm,Rn */
	r12 = r8 & 0xFF;  /* 0C09AAB2 extu.b Rm,Rn */
	T = r12 == r2;  /* 0C09AAB4 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09AAB8u); W8(r0 + r6, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09AA78u, 6); goto L_0C09AA78; } UPD(0x0C09AABAu, 1); goto L_0C09AABA; }  /* 0C09AAB6 bf/s */
L_0C09AABA: BLKS(0x0C09AABAu);
	r7 = 0x0u;  /* 0C09AABA mov #imm,Rn */
	IF(0x0C09AABCu); W8(r0 + r6, r7); UPD(0x0C09AABEu, 2);  /* 0C09AABC mov.b Rm,@(r0,Rn) */
	r3 = r6;  /* 0C09AABE mov Rm,Rn */
	r3 += 0x64u;  /* 0C09AAC0 add #imm,Rn */
	r0 = R32(r3); UPD(0x0C09AAC4u, 3);  /* 0C09AAC2 mov.l @Rm,Rn */
	r2 += 0xFFFFFFA1u;  /* 0C09AAC4 add #imm,Rn */
	r0 &= 0x7Fu;  /* 0C09AAC6 and #imm,r0 */
	W32(r3, r0); UPD(0x0C09AACAu, 3);  /* 0C09AAC8 mov.l Rm,@Rn */
	r2 += r6;  /* 0C09AACA add Rm,Rn */
	r3 += 0x4u;  /* 0C09AACC add #imm,Rn */
	r0 = R32(r3); UPD(0x0C09AAD0u, 3);  /* 0C09AACE mov.l @Rm,Rn */
	r4 = r2;  /* 0C09AAD0 mov Rm,Rn */
	r0 &= 0x7Fu;  /* 0C09AAD2 and #imm,r0 */
	r1 = r2;  /* 0C09AAD4 mov Rm,Rn */
	W32(r3, r0); UPD(0x0C09AAD8u, 4);  /* 0C09AAD6 mov.l Rm,@Rn */
	r2 += 0x3u;  /* 0C09AAD8 add #imm,Rn */
	r0 = 0x0u;  /* 0C09AADA mov #imm,Rn */
	r4 += 0x1u;  /* 0C09AADC add #imm,Rn */
	r1 += 0x2u;  /* 0C09AADE add #imm,Rn */
	W8(r2, r7); UPD(0x0C09AAE2u, 5);  /* 0C09AAE0 mov.b Rm,@Rn */
	W8(r1, r7); UPD(0x0C09AAE4u, 1);  /* 0C09AAE2 mov.b Rm,@Rn */
	r2 += 0xFFFFFFFDu;  /* 0C09AAE4 add #imm,Rn */
	W8(r4, r7); UPD(0x0C09AAE8u, 2);  /* 0C09AAE6 mov.b Rm,@Rn */
	W32(r6 + 0x30u, r0); UPD(0x0C09AAEAu, 1);  /* 0C09AAE8 mov.l Rm,@(disp,Rn) */
	{ W32(r6 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09AA72u, 3); goto L_0C09AA72; }  /* 0C09AAEA bra */
L_0C09AB20: BLKS(0x0C09AB20u);
	r12 = 0xB4u; UPD(0x0C09AB22u, 1);  /* 0C09AB20 mov.w @(disp,pc),Rn */
	IF(0x0C09AB22u); MACL = r10 * r12;  /* 0C09AB22 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09AB26u, 3);  /* 0C09AB24 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09AB28u, 1);  /* 0C09AB26 mov.w @(disp,pc),Rn */
	IF(0x0C09AB28u); r6 = MACL;  /* 0C09AB28 sts macl,Rn */
	r7 += r6;  /* 0C09AB2A add Rm,Rn */
	IF(0x0C09AB2Cu); r13 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09AB2Eu, 3);  /* 0C09AB2C mov.b @(r0,Rm),Rn */
	r5 = 0xFFu; UPD(0x0C09AB30u, 1);  /* 0C09AB2E mov.w @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C09AB30 add #imm,Rn */
	r2 = r13 & 0xFF;  /* 0C09AB32 extu.b Rm,Rn */
	T = r2 == r5;  /* 0C09AB34 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09AB38u); W8(r0 + r7, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09AA78u, 6); goto L_0C09AA78; } UPD(0x0C09AB3Au, 1); goto L_0C09AB3A; }  /* 0C09AB36 bf/s */
L_0C09AB3A: BLKS(0x0C09AB3Au);
	r8 = 0x0u;  /* 0C09AB3A mov #imm,Rn */
	IF(0x0C09AB3Cu); W8(r0 + r7, r8); UPD(0x0C09AB3Eu, 2);  /* 0C09AB3C mov.b Rm,@(r0,Rn) */
	r9 = r7;  /* 0C09AB3E mov Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C09AB42u, 2);  /* 0C09AB40 mov.l @(disp,pc),Rn */
	r11 = r7;  /* 0C09AB42 mov Rm,Rn */
	r8 = r7;  /* 0C09AB44 mov Rm,Rn */
	r9 += 0x5Cu;  /* 0C09AB46 add #imm,Rn */
	r11 += 0x60u;  /* 0C09AB48 add #imm,Rn */
	IF(0x0C09AB4Au); r13 = MACL;  /* 0C09AB4A sts macl,Rn */
	UPD(0x0C09AB4Cu, 5);
L_0C09AB4C: BLKS(0x0C09AB4Cu);
	IF(0x0C09AB4Cu); { u32 t_ = r12; PR = 0x0C09AB50u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AB50u); }  /* 0C09AB4C jsr @Rn */
L_0C09AB50: BLKS(0x0C09AB50u);
	r7 = 0xD0u; UPD(0x0C09AB52u, 1);  /* 0C09AB50 mov.w @(disp,pc),Rn */
	r4 = 0x70u;  /* 0C09AB52 mov #imm,Rn */
	r0 += r7;  /* 0C09AB54 add Rm,Rn */
	IF(0x0C09AB56u); r0 <<= 16;  /* 0C09AB56 shll16 Rn */
	IF(0x0C09AB58u); { u32 t_ = r12; PR = 0x0C09AB5Cu; W32(r9, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AB5Cu); }  /* 0C09AB58 jsr @Rn */
L_0C09AB5C: BLKS(0x0C09AB5Cu);
	r3 = 0x1C8u; UPD(0x0C09AB5Eu, 1);  /* 0C09AB5C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09AB5E add Rm,Rn */
	IF(0x0C09AB60u); r0 <<= 16;  /* 0C09AB60 shll16 Rn */
	W32(r11, r0); UPD(0x0C09AB64u, 3);  /* 0C09AB62 mov.l Rm,@Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C09AB66u, 1);  /* 0C09AB64 mov.l @(disp,Rm),Rn */
	r3 = R32(r9); UPD(0x0C09AB68u, 1);  /* 0C09AB66 mov.l @Rm,Rn */
	r3 -= r4;  /* 0C09AB68 sub Rm,Rn */
	IF(0x0C09AB6Au); T = (s32)r3 >= 0;  /* 0C09AB6A cmp/pz Rn */
	if (!T) { UPD(0x0C09ABC0u, 5); goto L_0C09ABC0; }  /* 0C09AB6C bf */
L_0C09AB6E: BLKS(0x0C09AB6Eu);
	r2 = 0xFFFFFFF8u;  /* 0C09AB6E mov #imm,Rn */
	IF(0x0C09AB70u); ARG0(0x432Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C09AB70 shad Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C09AB74u, 3);  /* 0C09AB72 mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C09AB74 sub Rm,Rn */
	IF(0x0C09AB76u); T = (s32)r0 >= 0;  /* 0C09AB76 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09ABB0u, 5); goto L_0C09ABB0; } UPD(0x0C09AB7Cu, 1); goto L_0C09AB7C; }  /* 0C09AB78 bf/s */
L_0C09AB7C: BLKS(0x0C09AB7Cu);
	IF(0x0C09AB7Cu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C09AB7C shad Rm,Rn */
	r4 = 0x1FFFu; UPD(0x0C09AB80u, 2);  /* 0C09AB7E mov.w @(disp,pc),Rn */
	r7 = r3;  /* 0C09AB80 mov Rm,Rn */
	r2 = 0x3FFEu; UPD(0x0C09AB84u, 2);  /* 0C09AB82 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C09AB84 add Rm,Rn */
	r5 = r0;  /* 0C09AB86 mov Rm,Rn */
	T = r2 >= r7;  /* 0C09AB88 cmp/hs Rm,Rn */
	IF(0x0C09AB8Au); r6 = T;  /* 0C09AB8A movt Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C09AB8Eu, 5);  /* 0C09AB8C mov.l Rm,@(disp,Rn) */
	r5 += r4;  /* 0C09AB8E add Rm,Rn */
	T = r2 >= r5;  /* 0C09AB90 cmp/hs Rm,Rn */
	IF(0x0C09AB92u); r0 = T;  /* 0C09AB92 movt Rn */
	r6 &= r0;  /* 0C09AB94 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C09AB96 tst Rm,Rn */
	if (!T) { UPD(0x0C09AB4Cu, 8); goto L_0C09AB4C; }  /* 0C09AB98 bf */
L_0C09AB9A: BLKS(0x0C09AB9Au);
	r9 = 0xC26CD40u; UPD(0x0C09AB9Cu, 1);  /* 0C09AB9A mov.l @(disp,pc),Rn */
	r0 = 0xA0u; UPD(0x0C09AB9Eu, 1);  /* 0C09AB9C mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C09AB9E add Rm,Rn */
	{ IF(0x0C09ABA2u); W8(r0 + r9, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09A73Au, 4); goto L_0C09A73A; }  /* 0C09ABA0 bra */
L_0C09ABB0: BLKS(0x0C09ABB0u);
	r4 = 0xFFu; UPD(0x0C09ABB2u, 1);  /* 0C09ABB0 mov.w @(disp,pc),Rn */
	{ r0 += r4; /* slot add Rm,Rn */ UPD(0x0C09AB7Cu, 3); goto L_0C09AB7C; }  /* 0C09ABB2 bra */
L_0C09ABC0: BLKS(0x0C09ABC0u);
	r6 = 0xFFu; UPD(0x0C09ABC2u, 1);  /* 0C09ABC0 mov.w @(disp,pc),Rn */
	{ r3 += r6; /* slot add Rm,Rn */ UPD(0x0C09AB6Eu, 3); goto L_0C09AB6E; }  /* 0C09ABC2 bra */
L_0C09ABD0: BLKS(0x0C09ABD0u);
	r0 = 0xA0u; UPD(0x0C09ABD2u, 1);  /* 0C09ABD0 mov.w @(disp,pc),Rn */
	IF(0x0C09ABD2u); W8(r0 + r9, r3); UPD(0x0C09ABD4u, 1);  /* 0C09ABD2 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0AFCF0u; UPD(0x0C09ABD6u, 1);  /* 0C09ABD4 mov.l @(disp,pc),Rn */
	IF(0x0C09ABD6u); { u32 t_ = r9; PR = 0x0C09ABDAu; W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCF0, 0x0C0AFCF0u, 0x0C09ABDAu); }  /* 0C09ABD6 jsr @Rn */
L_0C09ABDA: BLKS(0x0C09ABDAu);
	{ IF(0x0C09ABDCu); ; /* slot nop */ UPD(0x0C09A73Au, 3); goto L_0C09A73A; }  /* 0C09ABDA bra */
}


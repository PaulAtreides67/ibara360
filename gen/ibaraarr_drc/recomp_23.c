#include "recomp.h"
#include "recomp_funcs.h"

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

void f_0C0A6060(sh3_t *c)
{
	LOCALS;
L_0C0A6060: BLKS(0x0C0A6060u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6062u, 1);  /* 0C0A6060 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0A6062 mov #imm,Rn */
	IF(0x0C0A6064u); r15 -= 4; W32(r15, PR); UPD(0x0C0A6066u, 2);  /* 0C0A6064 sts.l pr,@-Rn */
	r2 = 0xC286509u; UPD(0x0C0A6068u, 1);  /* 0C0A6066 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6068 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A606Cu, 2);  /* 0C0A606A mov.b @Rm,Rn */
	IF(0x0C0A606Cu); MACL = r0 * r5;  /* 0C0A606C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A6070u, 3);  /* 0C0A606E mov.l @(disp,pc),Rn */
	IF(0x0C0A6070u); r7 = MACL;  /* 0C0A6070 sts macl,Rn */
	r4 += r7;  /* 0C0A6072 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0A6076u, 3);  /* 0C0A6074 mov.l @(disp,Rm),Rn */
	r4 = 0xC392D64u; UPD(0x0C0A6078u, 1);  /* 0C0A6076 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A607Au, 1);  /* 0C0A6078 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A607Cu, 1);  /* 0C0A607A mov.w @Rm+,Rn */
	IF(0x0C0A607Cu); r0 <<= 2;  /* 0C0A607C shll2 Rn */
	IF(0x0C0A607Eu); r6 = R32(r0 + r3); UPD(0x0C0A6080u, 2);  /* 0C0A607E mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A6082u, 1);  /* 0C0A6080 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A6084u, 1);  /* 0C0A6082 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A6086u, 1);  /* 0C0A6084 mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A6088u, 1);  /* 0C0A6086 mov.l @(disp,pc),Rn */
	r0 = 0xC095EE0u; UPD(0x0C0A608Au, 1);  /* 0C0A6088 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A608Cu, 1);  /* 0C0A608A mov.l Rm,@Rn */
	IF(0x0C0A608Cu); { u32 t_ = r0; PR = 0x0C0A6090u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C095EE0, 0x0C095EE0u, 0x0C0A6090u); }  /* 0C0A608C jsr @Rn */
L_0C0A6090: BLKS(0x0C0A6090u);
	r15 = r14;  /* 0C0A6090 mov Rm,Rn */
	IF(0x0C0A6092u); PR = R32(r15); r15 += 4; UPD(0x0C0A6094u, 2);  /* 0C0A6092 lds.l @Rn+,pr */
	IF(0x0C0A6094u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A6094 rts */
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

void f_0C0A6630(sh3_t *c)
{
	LOCALS;
L_0C0A6630: BLKS(0x0C0A6630u);
	r2 = 0xB4u; UPD(0x0C0A6632u, 1);  /* 0C0A6630 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A6632 exts.w Rm,Rn */
	IF(0x0C0A6634u); MACL = r4 * r2;  /* 0C0A6634 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6638u, 4);  /* 0C0A6636 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A663Au, 1);  /* 0C0A6638 mov.l @(disp,pc),Rn */
	IF(0x0C0A663Au); r2 = MACL;  /* 0C0A663A sts macl,Rn */
	IF(0x0C0A663Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A663Eu, 2);  /* 0C0A663C sts.l pr,@-Rn */
	r2 += r0;  /* 0C0A663E add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C0A6642u, 2);  /* 0C0A6640 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0A6642 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A6660u, 4); goto L_0C0A6660; } goto L_0C0A6648; }  /* 0C0A6644 bt/s */
L_0C0A6648: BLKS(0x0C0A6648u);
	r4 = 0x0u;  /* 0C0A6648 mov #imm,Rn */
	W32(r2, r4); UPD(0x0C0A664Cu, 3);  /* 0C0A664A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A664C mov Rm,Rn */
	IF(0x0C0A664Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A6650u, 2);  /* 0C0A664E lds.l @Rn+,pr */
	IF(0x0C0A6650u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A6650 rts */
L_0C0A6660: BLKS(0x0C0A6660u);
	r5 = 0xC0A0E20u; UPD(0x0C0A6662u, 1);  /* 0C0A6660 mov.l @(disp,pc),Rn */
	IF(0x0C0A6662u); { u32 t_ = r5; PR = 0x0C0A6666u; IF(0x0C0A6664u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A0E20, 0x0C0A0E20u, 0x0C0A6666u); }  /* 0C0A6662 jsr @Rn */
L_0C0A6666: BLKS(0x0C0A6666u);
	r4 = 0x800u; UPD(0x0C0A6668u, 1);  /* 0C0A6666 mov.w @(disp,pc),Rn */
	r3 = 0xC060350u; UPD(0x0C0A666Au, 1);  /* 0C0A6668 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A666A mov Rm,Rn */
	IF(0x0C0A666Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A666Eu, 2);  /* 0C0A666C lds.l @Rn+,pr */
	IF(0x0C0A666Eu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C060350u: TAIL(f_0C060350); default: JUMPD(tv_); } }  /* 0C0A666E jmp @Rn */
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
	r9 = 0xC7C37F8u; UPD(0x0C0A6CAAu, 3);  /* 0C0A6CA8 mov.l @(disp,pc),Rn */
	IF(0x0C0A6CAAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A6CACu, 1);  /* 0C0A6CAA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A6CAEu, 1);  /* 0C0A6CAC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A6CAE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A6CB2u, 2);  /* 0C0A6CB0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A6CB2u); { u32 t_ = r9; PR = 0x0C0A6CB6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A6CB6u); }  /* 0C0A6CB2 jsr @Rn */
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

void f_0C0A6F00(sh3_t *c)
{
	LOCALS;
L_0C0A6F00: BLKS(0x0C0A6F00u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0A6F00 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6F04u, 2);  /* 0C0A6F02 mov.l Rm,@-Rn */
	r4 = 0xC286734u; UPD(0x0C0A6F06u, 1);  /* 0C0A6F04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6F06 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0A6F0Au, 2);  /* 0C0A6F08 mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0A6F0Cu, 1);  /* 0C0A6F0A mov.l @Rm,Rn */
	IF(0x0C0A6F0Cu); MACL = r0 * r3;  /* 0C0A6F0C mul.l Rm,Rn */
	r7 += 0x1u;  /* 0C0A6F0E add #imm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A6F12u, 4);  /* 0C0A6F10 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F12u); r6 = MACL;  /* 0C0A6F12 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r5 = v_; } UPD(0x0C0A6F16u, 2);  /* 0C0A6F14 mov.b @Rm+,Rn */
	r6 += r2;  /* 0C0A6F16 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A6F1Au, 2);  /* 0C0A6F18 mov.w @(disp,pc),Rn */
	r1 = r5 & 0xFF;  /* 0C0A6F1A extu.b Rm,Rn */
	IF(0x0C0A6F1Cu); W8(r0 + r6, r5); UPD(0x0C0A6F1Eu, 2);  /* 0C0A6F1C mov.b Rm,@(r0,Rn) */
	r0 = 0x4Cu;  /* 0C0A6F1E mov #imm,Rn */
	IF(0x0C0A6F20u); MACL = r1 * r0;  /* 0C0A6F20 mul.l Rm,Rn */
	W32(r4, r7); UPD(0x0C0A6F24u, 4);  /* 0C0A6F22 mov.l Rm,@Rn */
	r0 = 0xC26CB22u; UPD(0x0C0A6F26u, 1);  /* 0C0A6F24 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F26u); r3 = MACL;  /* 0C0A6F26 sts macl,Rn */
	r4 = 0xA8u; UPD(0x0C0A6F2Au, 2);  /* 0C0A6F28 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F2Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6F2Cu, 1);  /* 0C0A6F2A mov.b @(r0,Rm),Rn */
	r4 += r6;  /* 0C0A6F2C add Rm,Rn */
	r4 += 0x2u;  /* 0C0A6F2E add #imm,Rn */
	W8(r4, r2); UPD(0x0C0A6F32u, 3);  /* 0C0A6F30 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6F32 mov #imm,Rn */
	{ u32 v_ = r2; r4 -= 1; W8(r4, v_); } UPD(0x0C0A6F36u, 2);  /* 0C0A6F34 mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0A6F36 mov Rm,Rn */
	IF(0x0C0A6F38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A6F38 rts */
}

void f_0C0A6F50(sh3_t *c)
{
	LOCALS;
L_0C0A6F50: BLKS(0x0C0A6F50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6F52u, 1);  /* 0C0A6F50 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A6F52 exts.w Rm,Rn */
	r3 = 0xC286734u; UPD(0x0C0A6F56u, 2);  /* 0C0A6F54 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6F56 mov Rm,Rn */
	r6 = R32(r3); UPD(0x0C0A6F5Au, 2);  /* 0C0A6F58 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0A6F5Cu, 1);  /* 0C0A6F5A mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0A6F5Eu, 1);  /* 0C0A6F5C mov.w @Rm+,Rn */
	IF(0x0C0A6F5Eu); MACL = r4 * r2;  /* 0C0A6F5E mul.l Rm,Rn */
	W32(r3, r6); UPD(0x0C0A6F62u, 3);  /* 0C0A6F60 mov.l Rm,@Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A6F64u, 1);  /* 0C0A6F62 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F64u); r3 = MACL;  /* 0C0A6F64 sts macl,Rn */
	r3 += r0;  /* 0C0A6F66 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A6F6Au, 3);  /* 0C0A6F68 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F6Au); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6F6Cu, 1);  /* 0C0A6F6A mov.b @(r0,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0A6F6Eu, 1);  /* 0C0A6F6C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0A6F6E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A6F70 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r3 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0A6F94u, 5); goto L_0C0A6F94; } UPD(0x0C0A6F76u, 1); goto L_0C0A6F76; }  /* 0C0A6F72 bt/s */
L_0C0A6F76: BLKS(0x0C0A6F76u);
	r0 = 0x4Cu;  /* 0C0A6F76 mov #imm,Rn */
	IF(0x0C0A6F78u); MACL = r7 * r0;  /* 0C0A6F78 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0A6F7Cu, 4);  /* 0C0A6F7A mov.l @(disp,pc),Rn */
	IF(0x0C0A6F7Cu); r7 = MACL;  /* 0C0A6F7C sts macl,Rn */
	r3 = 0xC220C2Cu; UPD(0x0C0A6F80u, 2);  /* 0C0A6F7E mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0A6F80 add Rm,Rn */
	r7 = R32(r2 + 0x10u); UPD(0x0C0A6F84u, 2);  /* 0C0A6F82 mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0A6F86u, 1);  /* 0C0A6F84 mov.l @Rm,Rn */
	IF(0x0C0A6F86u); MACL = r0 * r7;  /* 0C0A6F86 mul.l Rm,Rn */
	IF(0x0C0A6F88u); r2 = MACL;  /* 0C0A6F88 sts macl,Rn */
	IF(0x0C0A6F8Au); T = (s32)r2 >= 0;  /* 0C0A6F8A cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FF0u, 7); goto L_0C0A6FF0; }  /* 0C0A6F8C bf */
L_0C0A6F8E: BLKS(0x0C0A6F8Eu);
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0A6F8E swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0A6F90 exts.w Rm,Rn */
	r6 -= r2;  /* 0C0A6F92 sub Rm,Rn */
	UPD(0x0C0A6F94u, 3);
L_0C0A6F94: BLKS(0x0C0A6F94u);
	r0 = 0xB4u; UPD(0x0C0A6F96u, 1);  /* 0C0A6F94 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F96u); MACL = r4 * r0;  /* 0C0A6F96 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A6F9Au, 3);  /* 0C0A6F98 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F9Au); r2 = MACL;  /* 0C0A6F9A sts macl,Rn */
	r7 += r2;  /* 0C0A6F9C add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C0A6FA0u, 3);  /* 0C0A6F9E mov.l @(disp,Rm),Rn */
	r2 = r5;  /* 0C0A6FA0 mov Rm,Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C0A6FA2 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0A6FA4 exts.w Rm,Rn */
	r2 -= r4;  /* 0C0A6FA6 sub Rm,Rn */
	IF(0x0C0A6FA8u); T = (s32)r2 >= 0;  /* 0C0A6FA8 cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FE0u, 8); goto L_0C0A6FE0; }  /* 0C0A6FAA bf */
L_0C0A6FAC: BLKS(0x0C0A6FACu);
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C0A6FAC swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0A6FAE exts.w Rm,Rn */
	IF(0x0C0A6FB0u); T = (s32)r1 >= 0;  /* 0C0A6FB0 cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FD0u, 6); goto L_0C0A6FD0; }  /* 0C0A6FB2 bf */
L_0C0A6FB4: BLKS(0x0C0A6FB4u);
	r1 += r1;  /* 0C0A6FB4 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0A6FB6 cmp/gt Rm,Rn */
	IF(0x0C0A6FB8u); r6 = T;  /* 0C0A6FB8 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0A6FBA tst Rm,Rn */
	IF(0x0C0A6FBCu); r0 = T;  /* 0C0A6FBC movt Rn */
	r15 = r14;  /* 0C0A6FBE mov Rm,Rn */
	IF(0x0C0A6FC0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A6FC0 rts */
L_0C0A6FD0: BLKS(0x0C0A6FD0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A6FB4u, 3); goto L_0C0A6FB4; }  /* 0C0A6FD0 bra */
L_0C0A6FE0: BLKS(0x0C0A6FE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A6FACu, 3); goto L_0C0A6FAC; }  /* 0C0A6FE0 bra */
L_0C0A6FF0: BLKS(0x0C0A6FF0u);
	r3 = 0xFFFFu; UPD(0x0C0A6FF2u, 1);  /* 0C0A6FF0 mov.l @(disp,pc),Rn */
	{ r2 += r3; /* slot add Rm,Rn */ UPD(0x0C0A6F8Eu, 3); goto L_0C0A6F8E; }  /* 0C0A6FF2 bra */
}

void f_0C0A7010(sh3_t *c)
{
	LOCALS;
L_0C0A7010: BLKS(0x0C0A7010u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7012u, 1);  /* 0C0A7010 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0A7012 exts.w Rm,Rn */
	r0 = 0xC286734u; UPD(0x0C0A7016u, 2);  /* 0C0A7014 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0A7018u, 1);  /* 0C0A7016 mov.l @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0A701Au, 1);  /* 0C0A7018 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0A701Cu, 1);  /* 0C0A701A mov.w @Rm+,Rn */
	IF(0x0C0A701Cu); MACL = r3 * r7;  /* 0C0A701C mul.l Rm,Rn */
	W32(r0, r2); UPD(0x0C0A7020u, 3);  /* 0C0A701E mov.l Rm,@Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A7022u, 1);  /* 0C0A7020 mov.l @(disp,pc),Rn */
	IF(0x0C0A7022u); r2 = MACL;  /* 0C0A7022 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A7026u, 2);  /* 0C0A7024 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0A7026 add Rm,Rn */
	IF(0x0C0A7028u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A702Au, 2);  /* 0C0A7028 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C0A702A mov #imm,Rn */
	IF(0x0C0A702Cu); MACL = r1 * r0;  /* 0C0A702C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A7030u, 4);  /* 0C0A702E mov.l @(disp,pc),Rn */
	IF(0x0C0A7030u); r3 = MACL;  /* 0C0A7030 sts macl,Rn */
	r4 += r3;  /* 0C0A7032 add Rm,Rn */
	r0 = R32(r2 + 0x24u); UPD(0x0C0A7036u, 3);  /* 0C0A7034 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0A7038u, 1);  /* 0C0A7036 mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x2Cu); UPD(0x0C0A703Au, 1);  /* 0C0A7038 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0A703A add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C0A703C swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0A703E exts.w Rm,Rn */
	r6 -= r0;  /* 0C0A7040 sub Rm,Rn */
	IF(0x0C0A7042u); T = (s32)r6 >= 0;  /* 0C0A7042 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7070u, 8); goto L_0C0A7070; } UPD(0x0C0A7048u, 1); goto L_0C0A7048; }  /* 0C0A7044 bf/s */
L_0C0A7048: BLKS(0x0C0A7048u);
	r4 = (r5 >> 16) | (r5 << 16);  /* 0C0A7048 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A704A exts.w Rm,Rn */
	IF(0x0C0A704Cu); T = (s32)r1 >= 0;  /* 0C0A704C cmp/pz Rn */
	if (!T) { UPD(0x0C0A7060u, 6); goto L_0C0A7060; }  /* 0C0A704E bf */
L_0C0A7050: BLKS(0x0C0A7050u);
	r1 += r1;  /* 0C0A7050 add Rm,Rn */
	T = (s32)r6 > (s32)r1;  /* 0C0A7052 cmp/gt Rm,Rn */
	IF(0x0C0A7054u); r6 = T;  /* 0C0A7054 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0A7056 tst Rm,Rn */
	IF(0x0C0A7058u); r0 = T;  /* 0C0A7058 movt Rn */
	r15 = r14;  /* 0C0A705A mov Rm,Rn */
	IF(0x0C0A705Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A705C rts */
L_0C0A7060: BLKS(0x0C0A7060u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A7050u, 3); goto L_0C0A7050; }  /* 0C0A7060 bra */
L_0C0A7070: BLKS(0x0C0A7070u);
	{ r6 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0A7048u, 3); goto L_0C0A7048; }  /* 0C0A7070 bra */
}

void f_0C0A7090(sh3_t *c)
{
	LOCALS;
L_0C0A7090: BLKS(0x0C0A7090u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7092u, 1);  /* 0C0A7090 mov.l Rm,@-Rn */
	r0 = 0xC286734u; UPD(0x0C0A7094u, 1);  /* 0C0A7092 mov.l @(disp,pc),Rn */
	IF(0x0C0A7094u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7096u, 1);  /* 0C0A7094 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0A7098u, 1);  /* 0C0A7096 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C0A709Au, 1);  /* 0C0A7098 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0A709Cu, 1);  /* 0C0A709A mov.l Rm,@Rn */
	r0 = 0xC0AFC10u; UPD(0x0C0A709Eu, 1);  /* 0C0A709C mov.l @(disp,pc),Rn */
	IF(0x0C0A709Eu); { u32 t_ = r0; PR = 0x0C0A70A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A70A2u); }  /* 0C0A709E jsr @Rn */
L_0C0A70A2: BLKS(0x0C0A70A2u);
	r0 = 0x1u;  /* 0C0A70A2 mov #imm,Rn */
	r15 = r14;  /* 0C0A70A4 mov Rm,Rn */
	IF(0x0C0A70A6u); PR = R32(r15); r15 += 4; UPD(0x0C0A70A8u, 3);  /* 0C0A70A6 lds.l @Rn+,pr */
	IF(0x0C0A70A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A70A8 rts */
}

void f_0C0A70C0(sh3_t *c)
{
	LOCALS;
L_0C0A70C0: BLKS(0x0C0A70C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A70C2u, 1);  /* 0C0A70C0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A70C2 exts.w Rm,Rn */
	r6 = 0xC286734u; UPD(0x0C0A70C6u, 2);  /* 0C0A70C4 mov.l @(disp,pc),Rn */
	r2 = 0xB4u; UPD(0x0C0A70C8u, 1);  /* 0C0A70C6 mov.w @(disp,pc),Rn */
	r7 = R32(r6); UPD(0x0C0A70CAu, 1);  /* 0C0A70C8 mov.l @Rm,Rn */
	IF(0x0C0A70CAu); MACL = r5 * r2;  /* 0C0A70CA mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A70CEu, 3);  /* 0C0A70CC mov.w @Rm+,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A70D0u, 1);  /* 0C0A70CE mov.l @(disp,pc),Rn */
	IF(0x0C0A70D0u); r2 = MACL;  /* 0C0A70D0 sts macl,Rn */
	W32(r6, r7); UPD(0x0C0A70D4u, 2);  /* 0C0A70D2 mov.l Rm,@Rn */
	r2 += r3;  /* 0C0A70D4 add Rm,Rn */
	r7 = R32(r2 + 0x28u); UPD(0x0C0A70D8u, 2);  /* 0C0A70D6 mov.l @(disp,Rm),Rn */
	IF(0x0C0A70D8u); r0 <<= 16;  /* 0C0A70D8 shll16 Rn */
	r7 -= r0;  /* 0C0A70DA sub Rm,Rn */
	IF(0x0C0A70DCu); T = (s32)r7 >= 0;  /* 0C0A70DC cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7110u, 6); goto L_0C0A7110; } UPD(0x0C0A70E2u, 1); goto L_0C0A70E2; }  /* 0C0A70DE bf/s */
L_0C0A70E2: BLKS(0x0C0A70E2u);
	r2 = R32(r2 + 0x30u); UPD(0x0C0A70E4u, 1);  /* 0C0A70E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A70E4u); T = (s32)r2 >= 0;  /* 0C0A70E4 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7100u, 4); goto L_0C0A7100; }  /* 0C0A70E6 bf */
L_0C0A70E8: BLKS(0x0C0A70E8u);
	r4 = 0x20000u; UPD(0x0C0A70EAu, 1);  /* 0C0A70E8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0A70EA add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0A70EC cmp/ge Rm,Rn */
	IF(0x0C0A70EEu); r0 = T;  /* 0C0A70EE movt Rn */
	T = (r0 & r0) == 0;  /* 0C0A70F0 tst Rm,Rn */
	IF(0x0C0A70F2u); r0 = T;  /* 0C0A70F2 movt Rn */
	r15 = r14;  /* 0C0A70F4 mov Rm,Rn */
	IF(0x0C0A70F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A70F6 rts */
L_0C0A7100: BLKS(0x0C0A7100u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A70E8u, 3); goto L_0C0A70E8; }  /* 0C0A7100 bra */
L_0C0A7110: BLKS(0x0C0A7110u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A70E2u, 3); goto L_0C0A70E2; }  /* 0C0A7110 bra */
}

void f_0C0A7130(sh3_t *c)
{
	LOCALS;
L_0C0A7130: BLKS(0x0C0A7130u);
	r5 = 0xB4u; UPD(0x0C0A7132u, 1);  /* 0C0A7130 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7132 exts.w Rm,Rn */
	IF(0x0C0A7134u); MACL = r1 * r5;  /* 0C0A7134 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7138u, 4);  /* 0C0A7136 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A713Au, 1);  /* 0C0A7138 mov.l Rm,@-Rn */
	IF(0x0C0A713Au); r6 = MACL;  /* 0C0A713A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A713Eu, 2);  /* 0C0A713C mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0A713E add Rm,Rn */
	IF(0x0C0A7140u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A7142u, 2);  /* 0C0A7140 mov.b @(r0,Rm),Rn */
	r0 = 0xC286734u; UPD(0x0C0A7144u, 1);  /* 0C0A7142 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0A7146u, 1);  /* 0C0A7144 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r3 = v_; } UPD(0x0C0A7148u, 1);  /* 0C0A7146 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0A714Au, 1);  /* 0C0A7148 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0A714Cu, 1);  /* 0C0A714A mov.l Rm,@Rn */
	r0 = 0x180u; UPD(0x0C0A714Eu, 1);  /* 0C0A714C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0A714E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7200u, 4); goto L_0C0A7200; } goto L_0C0A7154; }  /* 0C0A7150 bf/s */
L_0C0A7154: BLKS(0x0C0A7154u);
	r2 = 0x4Cu;  /* 0C0A7154 mov #imm,Rn */
	IF(0x0C0A7156u); MACL = r4 * r2;  /* 0C0A7156 mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A715Au, 5);  /* 0C0A7158 mov.l @(disp,pc),Rn */
	IF(0x0C0A715Au); r7 = MACL;  /* 0C0A715A sts macl,Rn */
	r7 += r0;  /* 0C0A715C add Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0A7160u, 3);  /* 0C0A715E mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0A7160 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0A7162 exts.w Rm,Rn */
	r3 -= r2;  /* 0C0A7164 sub Rm,Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0A7166 exts.w Rm,Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C0A716Au, 5);  /* 0C0A7168 mov.l @(disp,Rm),Rn */
L_0C0A716A: BLKS(0x0C0A716Au);
	IF(0x0C0A716Au); r3 <<= 16;  /* 0C0A716A shll16 Rn */
	r7 -= r3;  /* 0C0A716C sub Rm,Rn */
	IF(0x0C0A716Eu); T = (s32)r7 >= 0;  /* 0C0A716E cmp/pz Rn */
	if (!T) { UPD(0x0C0A71F0u, 6); goto L_0C0A71F0; }  /* 0C0A7170 bf */
L_0C0A7172: BLKS(0x0C0A7172u);
	r2 = R32(r6 + 0x2Cu); UPD(0x0C0A7174u, 1);  /* 0C0A7172 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7174u); T = (s32)r2 >= 0;  /* 0C0A7174 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71E0u, 4); goto L_0C0A71E0; }  /* 0C0A7176 bf */
L_0C0A7178: BLKS(0x0C0A7178u);
	r3 = 0x4Cu;  /* 0C0A7178 mov #imm,Rn */
	IF(0x0C0A717Au); MACL = r4 * r3;  /* 0C0A717A mul.l Rm,Rn */
	IF(0x0C0A717Cu); r4 = MACL;  /* 0C0A717C sts macl,Rn */
	r0 += r4;  /* 0C0A717E add Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C0A7182u, 6);  /* 0C0A7180 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7182u); T = (s32)r1 >= 0;  /* 0C0A7182 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71D0u, 4); goto L_0C0A71D0; }  /* 0C0A7184 bf */
L_0C0A7186: BLKS(0x0C0A7186u);
	r3 = 0x20000u; UPD(0x0C0A7188u, 1);  /* 0C0A7186 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0A7188 add Rm,Rn */
	r2 += r3;  /* 0C0A718A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0A718C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A71AAu, 6); goto L_0C0A71AA; } goto L_0C0A7192; }  /* 0C0A718E bf/s */
L_0C0A7192: BLKS(0x0C0A7192u);
	r2 = R32(r6 + 0x28u); UPD(0x0C0A7194u, 2);  /* 0C0A7192 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7194u); r5 <<= 16;  /* 0C0A7194 shll16 Rn */
	r2 -= r5;  /* 0C0A7196 sub Rm,Rn */
	IF(0x0C0A7198u); T = (s32)r2 >= 0;  /* 0C0A7198 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71C0u, 6); goto L_0C0A71C0; }  /* 0C0A719A bf */
L_0C0A719C: BLKS(0x0C0A719Cu);
	r1 = R32(r6 + 0x30u); UPD(0x0C0A719Eu, 1);  /* 0C0A719C mov.l @(disp,Rm),Rn */
	IF(0x0C0A719Eu); T = (s32)r1 >= 0;  /* 0C0A719E cmp/pz Rn */
	if (!T) { UPD(0x0C0A71B0u, 4); goto L_0C0A71B0; }  /* 0C0A71A0 bf */
L_0C0A71A2: BLKS(0x0C0A71A2u);
	r1 += r3;  /* 0C0A71A2 add Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0A71A4 cmp/ge Rm,Rn */
	IF(0x0C0A71A6u); r0 = T;  /* 0C0A71A6 movt Rn */
	r0 ^= 0x1u;  /* 0C0A71A8 xor #imm,r0 */
	UPD(0x0C0A71AAu, 4);
L_0C0A71AA: BLKS(0x0C0A71AAu);
	r15 = r14;  /* 0C0A71AA mov Rm,Rn */
	IF(0x0C0A71ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A71AC rts */
L_0C0A71B0: BLKS(0x0C0A71B0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A71A2u, 3); goto L_0C0A71A2; }  /* 0C0A71B0 bra */
L_0C0A71C0: BLKS(0x0C0A71C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A719Cu, 3); goto L_0C0A719C; }  /* 0C0A71C0 bra */
L_0C0A71D0: BLKS(0x0C0A71D0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A7186u, 3); goto L_0C0A7186; }  /* 0C0A71D0 bra */
L_0C0A71E0: BLKS(0x0C0A71E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7178u, 3); goto L_0C0A7178; }  /* 0C0A71E0 bra */
L_0C0A71F0: BLKS(0x0C0A71F0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A7172u, 3); goto L_0C0A7172; }  /* 0C0A71F0 bra */
L_0C0A7200: BLKS(0x0C0A7200u);
	r0 = 0xC26CAE0u; UPD(0x0C0A7202u, 1);  /* 0C0A7200 mov.l @(disp,pc),Rn */
	{ r7 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A716Au, 3); goto L_0C0A716A; }  /* 0C0A7202 bra */
}

void f_0C0A7220(sh3_t *c)
{
	LOCALS;
L_0C0A7220: BLKS(0x0C0A7220u);
	r7 = 0xB4u; UPD(0x0C0A7222u, 1);  /* 0C0A7220 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7222 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7226u, 2);  /* 0C0A7224 mov.l Rm,@-Rn */
	IF(0x0C0A7226u); MACL = r1 * r7;  /* 0C0A7226 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A722Au, 3);  /* 0C0A7228 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A722A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A722Eu, 2);  /* 0C0A722C mov.l @Rm,Rn */
	IF(0x0C0A722Eu); r2 = MACL;  /* 0C0A722E sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A7232u, 2);  /* 0C0A7230 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C0A7234u, 1);  /* 0C0A7232 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0A7234 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0A7238u, 2);  /* 0C0A7236 mov.w @(disp,pc),Rn */
	IF(0x0C0A7238u); r6 <<= 8;  /* 0C0A7238 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0A723Cu, 2);  /* 0C0A723A mov.w @Rm+,Rn */
	IF(0x0C0A723Cu); W32(r0 + r2, r6); UPD(0x0C0A723Eu, 1);  /* 0C0A723C mov.l Rm,@(r0,Rn) */
	IF(0x0C0A723Eu); r3 <<= 8;  /* 0C0A723E shll8 Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A7240 add #imm,Rn */
	IF(0x0C0A7242u); W32(r0 + r2, r3); UPD(0x0C0A7244u, 3);  /* 0C0A7242 mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0A7246u, 1);  /* 0C0A7244 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7246 mov #imm,Rn */
	r15 = r14;  /* 0C0A7248 mov Rm,Rn */
	IF(0x0C0A724Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A724A rts */
}

void f_0C0A7260(sh3_t *c)
{
	LOCALS;
L_0C0A7260: BLKS(0x0C0A7260u);
	r2 = 0xB4u; UPD(0x0C0A7262u, 1);  /* 0C0A7260 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7262 exts.w Rm,Rn */
	IF(0x0C0A7264u); MACL = r5 * r2;  /* 0C0A7264 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A7268u, 4);  /* 0C0A7266 mov.l @(disp,pc),Rn */
	IF(0x0C0A7268u); r3 = MACL;  /* 0C0A7268 sts macl,Rn */
	r3 += r0;  /* 0C0A726A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A726Eu, 3);  /* 0C0A726C mov.l Rm,@-Rn */
	r0 = 0x8Cu; UPD(0x0C0A7270u, 1);  /* 0C0A726E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A7270 mov Rm,Rn */
	IF(0x0C0A7272u); r1 = R32(r0 + r3); UPD(0x0C0A7274u, 2);  /* 0C0A7272 mov.l @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A7274 add #imm,Rn */
	IF(0x0C0A7276u); r4 = R32(r0 + r3); UPD(0x0C0A7278u, 2);  /* 0C0A7276 mov.l @(r0,Rm),Rn */
	T = r1 == r4;  /* 0C0A7278 cmp/eq Rm,Rn */
	IF(0x0C0A727Au); r0 = T;  /* 0C0A727A movt Rn */
	r15 = r14;  /* 0C0A727C mov Rm,Rn */
	IF(0x0C0A727Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A727E rts */
}

void f_0C0A7290(sh3_t *c)
{
	LOCALS;
L_0C0A7290: BLKS(0x0C0A7290u);
	r0 = 0xB4u; UPD(0x0C0A7292u, 1);  /* 0C0A7290 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7292 exts.w Rm,Rn */
	IF(0x0C0A7294u); MACL = r1 * r0;  /* 0C0A7294 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7298u, 4);  /* 0C0A7296 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A729Au, 1);  /* 0C0A7298 mov.l Rm,@-Rn */
	IF(0x0C0A729Au); r0 = MACL;  /* 0C0A729A sts macl,Rn */
	r2 = 0x86u; UPD(0x0C0A729Eu, 2);  /* 0C0A729C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0A729E add Rm,Rn */
	IF(0x0C0A72A0u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A72A2u, 2);  /* 0C0A72A0 mov.w @(r0,Rm),Rn */
	r14 = r15;  /* 0C0A72A2 mov Rm,Rn */
	r2 += 0x4u;  /* 0C0A72A4 add #imm,Rn */
	IF(0x0C0A72A6u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A72A8u, 3);  /* 0C0A72A6 mov.w @(r0,Rm),Rn */
	T = r4 == r3;  /* 0C0A72A8 cmp/eq Rm,Rn */
	IF(0x0C0A72AAu); r0 = T;  /* 0C0A72AA movt Rn */
	r15 = r14;  /* 0C0A72AC mov Rm,Rn */
	IF(0x0C0A72AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A72AE rts */
}

void f_0C0A72C0(sh3_t *c)
{
	LOCALS;
L_0C0A72C0: BLKS(0x0C0A72C0u);
	r6 = 0xB4u; UPD(0x0C0A72C2u, 1);  /* 0C0A72C0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A72C2 exts.w Rm,Rn */
	IF(0x0C0A72C4u); MACL = r7 * r6;  /* 0C0A72C4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A72C8u, 4);  /* 0C0A72C6 mov.l @(disp,pc),Rn */
	IF(0x0C0A72C8u); r5 = MACL;  /* 0C0A72C8 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0A72CCu, 2);  /* 0C0A72CA mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0A72CC add Rm,Rn */
	r5 += r0;  /* 0C0A72CE add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A72D2u, 3);  /* 0C0A72D0 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0A72D2 add #imm,Rn */
	r0 = 0xC286734u; UPD(0x0C0A72D6u, 2);  /* 0C0A72D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A72D6 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0A72DAu, 2);  /* 0C0A72D8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r3 = v_; } UPD(0x0C0A72DCu, 1);  /* 0C0A72DA mov.w @Rm+,Rn */
	W16(r5, r3); UPD(0x0C0A72DEu, 1);  /* 0C0A72DC mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C0A72E0u, 1);  /* 0C0A72DE mov.w @Rm+,Rn */
	W32(r0, r4); UPD(0x0C0A72E2u, 1);  /* 0C0A72E0 mov.l Rm,@Rn */
	{ u32 v_ = r1; r5 -= 2; W16(r5, v_); } UPD(0x0C0A72E4u, 1);  /* 0C0A72E2 mov.w Rm,@-Rn */
	r0 = 0x1u;  /* 0C0A72E4 mov #imm,Rn */
	r15 = r14;  /* 0C0A72E6 mov Rm,Rn */
	IF(0x0C0A72E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A72E8 rts */
}

void f_0C0A7300(sh3_t *c)
{
	LOCALS;
L_0C0A7300: BLKS(0x0C0A7300u);
	r0 = 0xB4u; UPD(0x0C0A7302u, 1);  /* 0C0A7300 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7302 exts.w Rm,Rn */
	IF(0x0C0A7304u); MACL = r1 * r0;  /* 0C0A7304 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7308u, 4);  /* 0C0A7306 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0A7308 mov #imm,Rn */
	IF(0x0C0A730Au); r0 = MACL;  /* 0C0A730A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A730Eu, 3);  /* 0C0A730C mov.l Rm,@-Rn */
	IF(0x0C0A730Eu); W32(r0 + r3, r2); UPD(0x0C0A7310u, 1);  /* 0C0A730E mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0A7310 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0A7312 mov #imm,Rn */
	r15 = r14;  /* 0C0A7314 mov Rm,Rn */
	IF(0x0C0A7316u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A7316 rts */
}

void f_0C0A7320(sh3_t *c)
{
	LOCALS;
L_0C0A7320: BLKS(0x0C0A7320u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7322u, 1);  /* 0C0A7320 mov.l Rm,@-Rn */
	r0 = 0xC392AFEu; UPD(0x0C0A7324u, 1);  /* 0C0A7322 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A7324 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7328u, 2);  /* 0C0A7326 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0A7328 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A732Cu, 2);  /* 0C0A732A mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0A732C mov #imm,Rn */
	r15 = r14;  /* 0C0A732E mov Rm,Rn */
	IF(0x0C0A7330u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A7330 rts */
}

void f_0C0A7340(sh3_t *c)
{
	LOCALS;
L_0C0A7340: BLKS(0x0C0A7340u);
	r0 = 0xB4u; UPD(0x0C0A7342u, 1);  /* 0C0A7340 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7342 exts.w Rm,Rn */
	IF(0x0C0A7344u); MACL = r5 * r0;  /* 0C0A7344 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A7348u, 4);  /* 0C0A7346 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A734Au, 1);  /* 0C0A7348 mov.l Rm,@-Rn */
	IF(0x0C0A734Au); r0 = MACL;  /* 0C0A734A sts macl,Rn */
	r0 += r2;  /* 0C0A734C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0A7350u, 3);  /* 0C0A734E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A7350 mov Rm,Rn */
	r1 = 0x100u; UPD(0x0C0A7354u, 2);  /* 0C0A7352 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0A7354 or Rm,Rn */
	W32(r0, r3); UPD(0x0C0A7358u, 2);  /* 0C0A7356 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7358 mov #imm,Rn */
	r15 = r14;  /* 0C0A735A mov Rm,Rn */
	IF(0x0C0A735Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A735C rts */
}

void f_0C0A7370(sh3_t *c)
{
	LOCALS;
L_0C0A7370: BLKS(0x0C0A7370u);
	r0 = 0xB4u; UPD(0x0C0A7372u, 1);  /* 0C0A7370 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7372 exts.w Rm,Rn */
	IF(0x0C0A7374u); MACL = r5 * r0;  /* 0C0A7374 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A7378u, 4);  /* 0C0A7376 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A737Au, 1);  /* 0C0A7378 mov.l Rm,@-Rn */
	IF(0x0C0A737Au); r0 = MACL;  /* 0C0A737A sts macl,Rn */
	r0 += r2;  /* 0C0A737C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0A7380u, 3);  /* 0C0A737E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A7380 mov Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C0A7384u, 2);  /* 0C0A7382 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C0A7384 and Rm,Rn */
	W32(r0, r3); UPD(0x0C0A7388u, 2);  /* 0C0A7386 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7388 mov #imm,Rn */
	r15 = r14;  /* 0C0A738A mov Rm,Rn */
	IF(0x0C0A738Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A738C rts */
}

void f_0C0A73A0(sh3_t *c)
{
	LOCALS;
L_0C0A73A0: BLKS(0x0C0A73A0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A73A0 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0A73A4u, 2);  /* 0C0A73A2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73A6u, 1);  /* 0C0A73A4 mov.l Rm,@-Rn */
	IF(0x0C0A73A6u); MACL = r2 * r0;  /* 0C0A73A6 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A73AAu, 3);  /* 0C0A73A8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A73AA mov Rm,Rn */
	r3 = R32(r4); UPD(0x0C0A73AEu, 2);  /* 0C0A73AC mov.l @Rm,Rn */
	IF(0x0C0A73AEu); r1 = MACL;  /* 0C0A73AE sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C0A73B2u, 2);  /* 0C0A73B0 mov.w @Rm+,Rn */
	r0 = 0xC26CD94u; UPD(0x0C0A73B4u, 1);  /* 0C0A73B2 mov.l @(disp,pc),Rn */
	IF(0x0C0A73B4u); W16(r0 + r1, r5); UPD(0x0C0A73B6u, 1);  /* 0C0A73B4 mov.w Rm,@(r0,Rn) */
	W32(r4, r3); UPD(0x0C0A73B8u, 1);  /* 0C0A73B6 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A73B8 mov #imm,Rn */
	r15 = r14;  /* 0C0A73BA mov Rm,Rn */
	IF(0x0C0A73BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A73BC rts */
}

void f_0C0A73D0(sh3_t *c)
{
	LOCALS;
L_0C0A73D0: BLKS(0x0C0A73D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73D2u, 1);  /* 0C0A73D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A73D2 exts.w Rm,Rn */
	r0 = 0xC0612C0u; UPD(0x0C0A73D6u, 2);  /* 0C0A73D4 mov.l @(disp,pc),Rn */
	IF(0x0C0A73D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0A73D8u, 1);  /* 0C0A73D6 sts.l pr,@-Rn */
	IF(0x0C0A73D8u); { u32 t_ = r0; PR = 0x0C0A73DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0612C0, 0x0C0612C0u, 0x0C0A73DCu); }  /* 0C0A73D8 jsr @Rn */
L_0C0A73DC: BLKS(0x0C0A73DCu);
	r0 = (u32)(s32)(s16)r0;  /* 0C0A73DC exts.w Rm,Rn */
	r15 = r14;  /* 0C0A73DE mov Rm,Rn */
	IF(0x0C0A73E0u); PR = R32(r15); r15 += 4; UPD(0x0C0A73E2u, 3);  /* 0C0A73E0 lds.l @Rn+,pr */
	IF(0x0C0A73E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A73E2 rts */
}

void f_0C0A73F0(sh3_t *c)
{
	LOCALS;
L_0C0A73F0: BLKS(0x0C0A73F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F2u, 1);  /* 0C0A73F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F4u, 1);  /* 0C0A73F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F6u, 1);  /* 0C0A73F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F8u, 1);  /* 0C0A73F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73FAu, 1);  /* 0C0A73F8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A73FA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73FEu, 2);  /* 0C0A73FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7400u, 1);  /* 0C0A73FE mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7402u, 1);  /* 0C0A7400 mov.l @(disp,pc),Rn */
	IF(0x0C0A7402u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7404u, 1);  /* 0C0A7402 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7406u, 1);  /* 0C0A7404 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7406 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A740Au, 2);  /* 0C0A7408 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A740A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A740Eu, 2);  /* 0C0A740C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7410u, 1);  /* 0C0A740E mov.l Rm,@Rn */
	IF(0x0C0A7410u); { u32 t_ = r9; PR = 0x0C0A7414u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7414u); }  /* 0C0A7410 jsr @Rn */
L_0C0A7414: BLKS(0x0C0A7414u);
	r2 = R32(r8); UPD(0x0C0A7416u, 1);  /* 0C0A7414 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7416 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A741Au, 2);  /* 0C0A7418 mov.w @Rm+,Rn */
	IF(0x0C0A741Au); { u32 t_ = r9; PR = 0x0C0A741Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A741Eu); }  /* 0C0A741A jsr @Rn */
L_0C0A741E: BLKS(0x0C0A741Eu);
	IF(0x0C0A741Eu); MACL = r12 * r0;  /* 0C0A741E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A7422u, 3);  /* 0C0A7420 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A7422 mov Rm,Rn */
	IF(0x0C0A7424u); r12 = MACL;  /* 0C0A7424 sts macl,Rn */
	IF(0x0C0A7426u); MACL = r11 * r9;  /* 0C0A7426 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A742Au, 5);  /* 0C0A7428 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A742A add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A742Eu, 2);  /* 0C0A742C mov.l @(disp,pc),Rn */
	IF(0x0C0A742Eu); r9 = MACL;  /* 0C0A742E sts macl,Rn */
	r9 += r11;  /* 0C0A7430 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A7434u, 3);  /* 0C0A7432 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A7434 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A7438u, 2);  /* 0C0A7436 mov.l @(disp,pc),Rn */
	IF(0x0C0A7438u); r0 <<= 16;  /* 0C0A7438 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A743Cu, 2);  /* 0C0A743A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A743Eu, 1);  /* 0C0A743C mov.l Rm,@Rn */
	IF(0x0C0A743Eu); { u32 t_ = r10; PR = 0x0C0A7442u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7442u); }  /* 0C0A743E jsr @Rn */
L_0C0A7442: BLKS(0x0C0A7442u);
	r6 = R32(r8); UPD(0x0C0A7444u, 1);  /* 0C0A7442 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7444 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7448u, 2);  /* 0C0A7446 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7448 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A744Cu, 2);  /* 0C0A744A mov.l Rm,@Rn */
	IF(0x0C0A744Cu); r1 <<= 16;  /* 0C0A744C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7450u, 2);  /* 0C0A744E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7450 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7454u, 2);  /* 0C0A7452 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7454u); { u32 t_ = r8; PR = 0x0C0A7458u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7458u); }  /* 0C0A7454 jsr @Rn */
L_0C0A7458: BLKS(0x0C0A7458u);
	r10 += r0;  /* 0C0A7458 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A745Cu, 2);  /* 0C0A745A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A745C add #imm,Rn */
	IF(0x0C0A745Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A7460u, 2);  /* 0C0A745E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A7460 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A7462 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A7466u, 3);  /* 0C0A7464 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A7466 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A746Au, 2);  /* 0C0A7468 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A746A mov Rm,Rn */
	IF(0x0C0A746Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A746Eu, 2);  /* 0C0A746C mov.b @(r0,Rm),Rn */
	r8 = 0xC0AB240u; UPD(0x0C0A7470u, 1);  /* 0C0A746E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A7470 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A7474u, 2);  /* 0C0A7472 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A7476u, 1);  /* 0C0A7474 mov.l @Rm,Rn */
	IF(0x0C0A7476u); { u32 t_ = r8; PR = 0x0C0A747Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A747Au); }  /* 0C0A7476 jsr @Rn */
L_0C0A747A: BLKS(0x0C0A747Au);
	r0 = 0x1u;  /* 0C0A747A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A747C add #imm,Rn */
	r15 = r14;  /* 0C0A747E mov Rm,Rn */
	IF(0x0C0A7480u); PR = R32(r15); r15 += 4; UPD(0x0C0A7482u, 4);  /* 0C0A7480 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7484u, 1);  /* 0C0A7482 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7486u, 1);  /* 0C0A7484 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7488u, 1);  /* 0C0A7486 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A748Au, 1);  /* 0C0A7488 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A748Cu, 1);  /* 0C0A748A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A748Eu, 1);  /* 0C0A748C mov.l @Rm+,Rn */
	IF(0x0C0A748Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A748E rts */
}

void f_0C0A74B0(sh3_t *c)
{
	LOCALS;
L_0C0A74B0: BLKS(0x0C0A74B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B2u, 1);  /* 0C0A74B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B4u, 1);  /* 0C0A74B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B6u, 1);  /* 0C0A74B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B8u, 1);  /* 0C0A74B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74BAu, 1);  /* 0C0A74B8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A74BA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74BEu, 2);  /* 0C0A74BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74C0u, 1);  /* 0C0A74BE mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A74C2u, 1);  /* 0C0A74C0 mov.l @(disp,pc),Rn */
	IF(0x0C0A74C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A74C4u, 1);  /* 0C0A74C2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A74C6u, 1);  /* 0C0A74C4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A74C6 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A74CAu, 2);  /* 0C0A74C8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A74CA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A74CEu, 2);  /* 0C0A74CC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A74D0u, 1);  /* 0C0A74CE mov.l Rm,@Rn */
	IF(0x0C0A74D0u); { u32 t_ = r9; PR = 0x0C0A74D4u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A74D4u); }  /* 0C0A74D0 jsr @Rn */
L_0C0A74D4: BLKS(0x0C0A74D4u);
	r2 = R32(r8); UPD(0x0C0A74D6u, 1);  /* 0C0A74D4 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A74D6 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A74DAu, 2);  /* 0C0A74D8 mov.w @Rm+,Rn */
	IF(0x0C0A74DAu); { u32 t_ = r9; PR = 0x0C0A74DEu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A74DEu); }  /* 0C0A74DA jsr @Rn */
L_0C0A74DE: BLKS(0x0C0A74DEu);
	IF(0x0C0A74DEu); MACL = r12 * r0;  /* 0C0A74DE mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A74E2u, 3);  /* 0C0A74E0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A74E2 mov Rm,Rn */
	IF(0x0C0A74E4u); r12 = MACL;  /* 0C0A74E4 sts macl,Rn */
	IF(0x0C0A74E6u); MACL = r11 * r9;  /* 0C0A74E6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A74EAu, 5);  /* 0C0A74E8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A74EA add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A74EEu, 2);  /* 0C0A74EC mov.l @(disp,pc),Rn */
	IF(0x0C0A74EEu); r9 = MACL;  /* 0C0A74EE sts macl,Rn */
	r9 += r11;  /* 0C0A74F0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A74F4u, 3);  /* 0C0A74F2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A74F4 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A74F8u, 2);  /* 0C0A74F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A74F8u); r0 <<= 16;  /* 0C0A74F8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A74FCu, 2);  /* 0C0A74FA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A74FEu, 1);  /* 0C0A74FC mov.l Rm,@Rn */
	IF(0x0C0A74FEu); { u32 t_ = r10; PR = 0x0C0A7502u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7502u); }  /* 0C0A74FE jsr @Rn */
L_0C0A7502: BLKS(0x0C0A7502u);
	r6 = R32(r8); UPD(0x0C0A7504u, 1);  /* 0C0A7502 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7504 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7508u, 2);  /* 0C0A7506 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7508 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A750Cu, 2);  /* 0C0A750A mov.l Rm,@Rn */
	IF(0x0C0A750Cu); r1 <<= 16;  /* 0C0A750C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7510u, 2);  /* 0C0A750E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7510 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7514u, 2);  /* 0C0A7512 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7514u); { u32 t_ = r8; PR = 0x0C0A7518u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7518u); }  /* 0C0A7514 jsr @Rn */
L_0C0A7518: BLKS(0x0C0A7518u);
	r10 += r0;  /* 0C0A7518 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A751Cu, 2);  /* 0C0A751A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A751C add #imm,Rn */
	IF(0x0C0A751Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A7520u, 2);  /* 0C0A751E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A7520 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A7522 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A7526u, 3);  /* 0C0A7524 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A7526 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A752Au, 2);  /* 0C0A7528 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A752A mov Rm,Rn */
	IF(0x0C0A752Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A752Eu, 2);  /* 0C0A752C mov.b @(r0,Rm),Rn */
	r8 = 0xC0AC800u; UPD(0x0C0A7530u, 1);  /* 0C0A752E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A7530 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A7534u, 2);  /* 0C0A7532 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A7536u, 1);  /* 0C0A7534 mov.l @Rm,Rn */
	IF(0x0C0A7536u); { u32 t_ = r8; PR = 0x0C0A753Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A753Au); }  /* 0C0A7536 jsr @Rn */
L_0C0A753A: BLKS(0x0C0A753Au);
	r0 = 0x1u;  /* 0C0A753A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A753C add #imm,Rn */
	r15 = r14;  /* 0C0A753E mov Rm,Rn */
	IF(0x0C0A7540u); PR = R32(r15); r15 += 4; UPD(0x0C0A7542u, 4);  /* 0C0A7540 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7544u, 1);  /* 0C0A7542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7546u, 1);  /* 0C0A7544 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7548u, 1);  /* 0C0A7546 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A754Au, 1);  /* 0C0A7548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A754Cu, 1);  /* 0C0A754A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A754Eu, 1);  /* 0C0A754C mov.l @Rm+,Rn */
	IF(0x0C0A754Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A754E rts */
}

void f_0C0A7570(sh3_t *c)
{
	LOCALS;
L_0C0A7570: BLKS(0x0C0A7570u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7572u, 1);  /* 0C0A7570 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7574u, 1);  /* 0C0A7572 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7576u, 1);  /* 0C0A7574 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7578u, 1);  /* 0C0A7576 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A757Au, 1);  /* 0C0A7578 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A757A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A757Eu, 2);  /* 0C0A757C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7580u, 1);  /* 0C0A757E mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7582u, 1);  /* 0C0A7580 mov.l @(disp,pc),Rn */
	IF(0x0C0A7582u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7584u, 1);  /* 0C0A7582 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7586u, 1);  /* 0C0A7584 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7586 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A758Au, 2);  /* 0C0A7588 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A758A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A758Eu, 2);  /* 0C0A758C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7590u, 1);  /* 0C0A758E mov.l Rm,@Rn */
	IF(0x0C0A7590u); { u32 t_ = r9; PR = 0x0C0A7594u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7594u); }  /* 0C0A7590 jsr @Rn */
L_0C0A7594: BLKS(0x0C0A7594u);
	r2 = R32(r8); UPD(0x0C0A7596u, 1);  /* 0C0A7594 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7596 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A759Au, 2);  /* 0C0A7598 mov.w @Rm+,Rn */
	IF(0x0C0A759Au); { u32 t_ = r9; PR = 0x0C0A759Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A759Eu); }  /* 0C0A759A jsr @Rn */
L_0C0A759E: BLKS(0x0C0A759Eu);
	IF(0x0C0A759Eu); MACL = r12 * r0;  /* 0C0A759E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A75A2u, 3);  /* 0C0A75A0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A75A2 mov Rm,Rn */
	IF(0x0C0A75A4u); r12 = MACL;  /* 0C0A75A4 sts macl,Rn */
	IF(0x0C0A75A6u); MACL = r11 * r9;  /* 0C0A75A6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A75AAu, 5);  /* 0C0A75A8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A75AA add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A75AEu, 2);  /* 0C0A75AC mov.l @(disp,pc),Rn */
	IF(0x0C0A75AEu); r9 = MACL;  /* 0C0A75AE sts macl,Rn */
	r9 += r11;  /* 0C0A75B0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A75B4u, 3);  /* 0C0A75B2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A75B4 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A75B8u, 2);  /* 0C0A75B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A75B8u); r0 <<= 16;  /* 0C0A75B8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A75BCu, 2);  /* 0C0A75BA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A75BEu, 1);  /* 0C0A75BC mov.l Rm,@Rn */
	IF(0x0C0A75BEu); { u32 t_ = r10; PR = 0x0C0A75C2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A75C2u); }  /* 0C0A75BE jsr @Rn */
L_0C0A75C2: BLKS(0x0C0A75C2u);
	r6 = R32(r8); UPD(0x0C0A75C4u, 1);  /* 0C0A75C2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A75C4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A75C8u, 2);  /* 0C0A75C6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A75C8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A75CCu, 2);  /* 0C0A75CA mov.l Rm,@Rn */
	IF(0x0C0A75CCu); r1 <<= 16;  /* 0C0A75CC shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A75D0u, 2);  /* 0C0A75CE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A75D0 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A75D4u, 2);  /* 0C0A75D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A75D4u); { u32 t_ = r8; PR = 0x0C0A75D8u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A75D8u); }  /* 0C0A75D4 jsr @Rn */
L_0C0A75D8: BLKS(0x0C0A75D8u);
	r10 += r0;  /* 0C0A75D8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A75DCu, 2);  /* 0C0A75DA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A75DC add #imm,Rn */
	IF(0x0C0A75DEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A75E0u, 2);  /* 0C0A75DE mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A75E0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A75E2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A75E6u, 3);  /* 0C0A75E4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A75E6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A75EAu, 2);  /* 0C0A75E8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A75EA mov Rm,Rn */
	IF(0x0C0A75ECu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A75EEu, 2);  /* 0C0A75EC mov.b @(r0,Rm),Rn */
	r8 = 0xC0AD970u; UPD(0x0C0A75F0u, 1);  /* 0C0A75EE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A75F0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A75F4u, 2);  /* 0C0A75F2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A75F6u, 1);  /* 0C0A75F4 mov.l @Rm,Rn */
	IF(0x0C0A75F6u); { u32 t_ = r8; PR = 0x0C0A75FAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C0A75FAu); }  /* 0C0A75F6 jsr @Rn */
L_0C0A75FA: BLKS(0x0C0A75FAu);
	r0 = 0x1u;  /* 0C0A75FA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A75FC add #imm,Rn */
	r15 = r14;  /* 0C0A75FE mov Rm,Rn */
	IF(0x0C0A7600u); PR = R32(r15); r15 += 4; UPD(0x0C0A7602u, 4);  /* 0C0A7600 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7604u, 1);  /* 0C0A7602 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7606u, 1);  /* 0C0A7604 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7608u, 1);  /* 0C0A7606 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A760Au, 1);  /* 0C0A7608 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A760Cu, 1);  /* 0C0A760A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A760Eu, 1);  /* 0C0A760C mov.l @Rm+,Rn */
	IF(0x0C0A760Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A760E rts */
}

void f_0C0A7630(sh3_t *c)
{
	LOCALS;
L_0C0A7630: BLKS(0x0C0A7630u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7632u, 1);  /* 0C0A7630 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7634u, 1);  /* 0C0A7632 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7636u, 1);  /* 0C0A7634 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7638u, 1);  /* 0C0A7636 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A763Au, 1);  /* 0C0A7638 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A763A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A763Eu, 2);  /* 0C0A763C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7640u, 1);  /* 0C0A763E mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7642u, 1);  /* 0C0A7640 mov.l @(disp,pc),Rn */
	IF(0x0C0A7642u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7644u, 1);  /* 0C0A7642 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7646u, 1);  /* 0C0A7644 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7646 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A764Au, 2);  /* 0C0A7648 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A764A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A764Eu, 2);  /* 0C0A764C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7650u, 1);  /* 0C0A764E mov.l Rm,@Rn */
	IF(0x0C0A7650u); { u32 t_ = r9; PR = 0x0C0A7654u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7654u); }  /* 0C0A7650 jsr @Rn */
L_0C0A7654: BLKS(0x0C0A7654u);
	r2 = R32(r8); UPD(0x0C0A7656u, 1);  /* 0C0A7654 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7656 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A765Au, 2);  /* 0C0A7658 mov.w @Rm+,Rn */
	IF(0x0C0A765Au); { u32 t_ = r9; PR = 0x0C0A765Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A765Eu); }  /* 0C0A765A jsr @Rn */
L_0C0A765E: BLKS(0x0C0A765Eu);
	IF(0x0C0A765Eu); MACL = r12 * r0;  /* 0C0A765E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A7662u, 3);  /* 0C0A7660 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A7662 mov Rm,Rn */
	IF(0x0C0A7664u); r12 = MACL;  /* 0C0A7664 sts macl,Rn */
	IF(0x0C0A7666u); MACL = r11 * r9;  /* 0C0A7666 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A766Au, 5);  /* 0C0A7668 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A766A add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A766Eu, 2);  /* 0C0A766C mov.l @(disp,pc),Rn */
	IF(0x0C0A766Eu); r9 = MACL;  /* 0C0A766E sts macl,Rn */
	r9 += r11;  /* 0C0A7670 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A7674u, 3);  /* 0C0A7672 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A7674 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A7678u, 2);  /* 0C0A7676 mov.l @(disp,pc),Rn */
	IF(0x0C0A7678u); r0 <<= 16;  /* 0C0A7678 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A767Cu, 2);  /* 0C0A767A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A767Eu, 1);  /* 0C0A767C mov.l Rm,@Rn */
	IF(0x0C0A767Eu); { u32 t_ = r10; PR = 0x0C0A7682u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7682u); }  /* 0C0A767E jsr @Rn */
L_0C0A7682: BLKS(0x0C0A7682u);
	r6 = R32(r8); UPD(0x0C0A7684u, 1);  /* 0C0A7682 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7684 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7688u, 2);  /* 0C0A7686 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7688 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A768Cu, 2);  /* 0C0A768A mov.l Rm,@Rn */
	IF(0x0C0A768Cu); r1 <<= 16;  /* 0C0A768C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7690u, 2);  /* 0C0A768E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7690 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7694u, 2);  /* 0C0A7692 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7694u); { u32 t_ = r8; PR = 0x0C0A7698u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7698u); }  /* 0C0A7694 jsr @Rn */
L_0C0A7698: BLKS(0x0C0A7698u);
	r10 += r0;  /* 0C0A7698 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A769Cu, 2);  /* 0C0A769A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A769C add #imm,Rn */
	IF(0x0C0A769Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A76A0u, 2);  /* 0C0A769E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A76A0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A76A2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A76A6u, 3);  /* 0C0A76A4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A76A6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A76AAu, 2);  /* 0C0A76A8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A76AA mov Rm,Rn */
	IF(0x0C0A76ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A76AEu, 2);  /* 0C0A76AC mov.b @(r0,Rm),Rn */
	r8 = 0xC0ADB30u; UPD(0x0C0A76B0u, 1);  /* 0C0A76AE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A76B0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A76B4u, 2);  /* 0C0A76B2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A76B6u, 1);  /* 0C0A76B4 mov.l @Rm,Rn */
	IF(0x0C0A76B6u); { u32 t_ = r8; PR = 0x0C0A76BAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADB30, 0x0C0ADB30u, 0x0C0A76BAu); }  /* 0C0A76B6 jsr @Rn */
L_0C0A76BA: BLKS(0x0C0A76BAu);
	r0 = 0x1u;  /* 0C0A76BA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A76BC add #imm,Rn */
	r15 = r14;  /* 0C0A76BE mov Rm,Rn */
	IF(0x0C0A76C0u); PR = R32(r15); r15 += 4; UPD(0x0C0A76C2u, 4);  /* 0C0A76C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A76C4u, 1);  /* 0C0A76C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A76C6u, 1);  /* 0C0A76C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A76C8u, 1);  /* 0C0A76C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A76CAu, 1);  /* 0C0A76C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A76CCu, 1);  /* 0C0A76CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A76CEu, 1);  /* 0C0A76CC mov.l @Rm+,Rn */
	IF(0x0C0A76CEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A76CE rts */
}

void f_0C0A76F0(sh3_t *c)
{
	LOCALS;
L_0C0A76F0: BLKS(0x0C0A76F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A76F2u, 1);  /* 0C0A76F0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0A76F2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A76F6u, 2);  /* 0C0A76F4 mov.l Rm,@-Rn */
	r0 = 0xC286734u; UPD(0x0C0A76F8u, 1);  /* 0C0A76F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A76F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A76FAu, 1);  /* 0C0A76F8 sts.l pr,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A76FCu, 1);  /* 0C0A76FA mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A76FC mov Rm,Rn */
	r7 = R32(r0); UPD(0x0C0A7700u, 2);  /* 0C0A76FE mov.l @Rm,Rn */
	IF(0x0C0A7700u); MACL = r2 * r3;  /* 0C0A7700 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r8 = v_; } UPD(0x0C0A7704u, 3);  /* 0C0A7702 mov.w @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7704 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r6 = v_; } UPD(0x0C0A7708u, 2);  /* 0C0A7706 mov.w @Rm+,Rn */
	IF(0x0C0A7708u); r3 = MACL;  /* 0C0A7708 sts macl,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A770Cu, 2);  /* 0C0A770A mov.l @(disp,pc),Rn */
	IF(0x0C0A770Cu); r6 <<= 16;  /* 0C0A770C shll16 Rn */
	r3 += r5;  /* 0C0A770E add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C0A7712u, 3);  /* 0C0A7710 mov.w @Rm+,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0A7714u, 1);  /* 0C0A7712 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7714u); r4 <<= 16;  /* 0C0A7714 shll16 Rn */
	W32(r0, r7); UPD(0x0C0A7718u, 2);  /* 0C0A7716 mov.l Rm,@Rn */
	r5 += r6;  /* 0C0A7718 add Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A771Cu, 2);  /* 0C0A771A mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0A771Eu, 1);  /* 0C0A771C mov.w @(disp,pc),Rn */
	r6 += r4;  /* 0C0A771E add Rm,Rn */
	IF(0x0C0A7720u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A7722u, 2);  /* 0C0A7720 mov.b @(r0,Rm),Rn */
	r4 = 0xA9u; UPD(0x0C0A7724u, 1);  /* 0C0A7722 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0A7724 mov Rm,Rn */
	IF(0x0C0A7726u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A7728u, 2);  /* 0C0A7726 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A7728 extu.b Rm,Rn */
	r4 = r8;  /* 0C0A772A mov Rm,Rn */
	r8 = 0xC06CE70u; UPD(0x0C0A772Eu, 3);  /* 0C0A772C mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A772E extu.b Rm,Rn */
	IF(0x0C0A7730u); { u32 t_ = r8; PR = 0x0C0A7734u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A7734u); }  /* 0C0A7730 jsr @Rn */
L_0C0A7734: BLKS(0x0C0A7734u);
	r0 = 0x1u;  /* 0C0A7734 mov #imm,Rn */
	r15 = r14;  /* 0C0A7736 mov Rm,Rn */
	IF(0x0C0A7738u); PR = R32(r15); r15 += 4; UPD(0x0C0A773Au, 3);  /* 0C0A7738 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A773Cu, 1);  /* 0C0A773A mov.l @Rm+,Rn */
	IF(0x0C0A773Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A773C rts */
}

void f_0C0A7760(sh3_t *c)
{
	LOCALS;
L_0C0A7760: BLKS(0x0C0A7760u);
	r0 = 0xB4u; UPD(0x0C0A7762u, 1);  /* 0C0A7760 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A7762 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7766u, 2);  /* 0C0A7764 mov.l Rm,@-Rn */
	IF(0x0C0A7766u); MACL = r4 * r0;  /* 0C0A7766 mul.l Rm,Rn */
	r6 = 0xC286734u; UPD(0x0C0A776Au, 3);  /* 0C0A7768 mov.l @(disp,pc),Rn */
	r3 = 0x2Du;  /* 0C0A776A mov #imm,Rn */
	r7 = R32(r6); UPD(0x0C0A776Eu, 2);  /* 0C0A776C mov.l @Rm,Rn */
	IF(0x0C0A776Eu); r0 = MACL;  /* 0C0A776E sts macl,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A7772u, 2);  /* 0C0A7770 mov.l @(disp,pc),Rn */
	IF(0x0C0A7772u); MACL = r4 * r3;  /* 0C0A7772 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r2 = v_; } UPD(0x0C0A7776u, 3);  /* 0C0A7774 mov.w @Rm+,Rn */
	r0 += r5;  /* 0C0A7776 add Rm,Rn */
	r0 += 0x56u;  /* 0C0A7778 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0A777Cu, 3);  /* 0C0A777A mov.w Rm,@Rn */
	IF(0x0C0A777Cu); r3 = MACL;  /* 0C0A777C sts macl,Rn */
	W32(r6, r7); UPD(0x0C0A7780u, 2);  /* 0C0A777E mov.l Rm,@Rn */
	r0 += 0x2u;  /* 0C0A7780 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7784u, 2);  /* 0C0A7782 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A7784 mov Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C0A7786 extu.b Rm,Rn */
	r3 += r6;  /* 0C0A7788 add Rm,Rn */
	IF(0x0C0A778Au); r3 <<= 2;  /* 0C0A778A shll2 Rn */
	r3 += r5;  /* 0C0A778C add Rm,Rn */
	r2 += 0x1u;  /* 0C0A778E add #imm,Rn */
	r3 += 0x5Cu;  /* 0C0A7790 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A7794u, 8);  /* 0C0A7792 mov.b Rm,@Rn */
	W32(r3, r7); UPD(0x0C0A7796u, 1);  /* 0C0A7794 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7796 mov #imm,Rn */
	r15 = r14;  /* 0C0A7798 mov Rm,Rn */
	IF(0x0C0A779Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A779A rts */
}

void f_0C0A77B0(sh3_t *c)
{
	LOCALS;
L_0C0A77B0: BLKS(0x0C0A77B0u);
	r0 = 0xB4u; UPD(0x0C0A77B2u, 1);  /* 0C0A77B0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A77B2 exts.w Rm,Rn */
	IF(0x0C0A77B4u); MACL = r4 * r0;  /* 0C0A77B4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A77B8u, 4);  /* 0C0A77B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A77B8u); r3 = MACL;  /* 0C0A77B8 sts macl,Rn */
	r3 += r7;  /* 0C0A77BA add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A77BEu, 3);  /* 0C0A77BC mov.l Rm,@-Rn */
	r2 = r3;  /* 0C0A77BE mov Rm,Rn */
	r2 += 0x56u;  /* 0C0A77C0 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A77C4u, 3);  /* 0C0A77C2 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A77C4 mov Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0A77C6 add #imm,Rn */
	r0 = r5 & 0xFFFF;  /* 0C0A77C8 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A77CA tst Rm,Rn */
	{ u32 c_ = !T; W16(r2, r5); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0A77E0u, 7); goto L_0C0A77E0; } UPD(0x0C0A77D0u, 1); goto L_0C0A77D0; }  /* 0C0A77CC bf/s */
L_0C0A77D0: BLKS(0x0C0A77D0u);
	r2 += 0x2u;  /* 0C0A77D0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A77D4u, 2);  /* 0C0A77D2 mov.b @Rm,Rn */
	r0 = 0x1u;  /* 0C0A77D4 mov #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0A77D6 add #imm,Rn */
	W8(r2, r3); UPD(0x0C0A77DAu, 3);  /* 0C0A77D8 mov.b Rm,@Rn */
L_0C0A77DA: BLKS(0x0C0A77DAu);
	r15 = r14;  /* 0C0A77DA mov Rm,Rn */
	IF(0x0C0A77DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A77DC rts */
L_0C0A77E0: BLKS(0x0C0A77E0u);
	r5 = 0x2Du;  /* 0C0A77E0 mov #imm,Rn */
	r3 += 0x58u;  /* 0C0A77E2 add #imm,Rn */
	IF(0x0C0A77E4u); MACL = r4 * r5;  /* 0C0A77E4 mul.l Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A77E8u, 5);  /* 0C0A77E6 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C0A77E8 mov #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C0A77EA extu.b Rm,Rn */
	IF(0x0C0A77ECu); r4 = MACL;  /* 0C0A77EC sts macl,Rn */
	r4 += r6;  /* 0C0A77EE add Rm,Rn */
	IF(0x0C0A77F0u); r4 <<= 2;  /* 0C0A77F0 shll2 Rn */
	r4 += r7;  /* 0C0A77F2 add Rm,Rn */
	r4 += 0x58u;  /* 0C0A77F4 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0A77F8u, 8);  /* 0C0A77F6 mov.l @Rm,Rn */
	r3 += 0xFFFFFFF4u;  /* 0C0A77F8 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0A77DAu, 4); goto L_0C0A77DA; }  /* 0C0A77FA bra */
}

